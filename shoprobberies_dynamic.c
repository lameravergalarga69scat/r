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
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	struct<156> Local_26 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 1, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, -2, -1 } ;
	var uLocal_182 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion
void __EntryFunction__()
{
	float fVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(vScriptParam_0);
	}
	while (true)
	{
		if (func_2())
		{
			func_1(vScriptParam_0);
		}
		func_3(&fVar0);
		if (Local_26.f_3 > 3)
		{
			func_4(&(Local_26.f_46));
			func_5(&(Local_26.f_46));
			func_6(&(Local_26.f_46));
		}
		switch (Local_26.f_3)
		{
			case 0:
				if (func_7(&vScriptParam_0))
				{
					if (func_8())
					{
						func_9(1);
					}
				}
				break;
			case 1:
				if (func_10())
				{
					__LIB_14__::func_304(0);
					func_9(3);
				}
				break;
			case 3:
				if (VOLUME::_DOES_VOLUME_EXIST(Local_26.f_46.f_105))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_26.f_46.f_105, true, 0))
					{
						func_12(&(Local_26.f_46));
						func_13(&(Local_26.f_46));
						if (func_14(&(Local_26.f_46), 0))
						{
							func_15(8);
						}
						if (!func_16(134217728))
						{
							if (Local_26.f_46.f_66 == 28)
							{
								if (__LIB_0__::func_181())
								{
									if (__LIB_2__::func_419(Local_26.f_46, 0) == 74 && PERSCHAR::_0xA00DF706C60173D1(joaat("RHD_GENERAL_STORE")) == joaat("CS_MRPEARSON"))
									{
										Local_26.f_46.f_107 = "COMP_PEARSON";
									}
								}
							}
							func_15(134217728);
						}
						func_9(4);
					}
				}
				break;
			case 4:
				func_13(&(Local_26.f_46));
				func_19(&(Local_26.f_46));
				if (VOLUME::_DOES_VOLUME_EXIST(Local_26.f_46.f_105))
				{
					if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_26.f_46.f_105, true, 0))
					{
						func_20(&(Local_26.f_46));
						__LIB_2__::func_344(&(Local_26.f_46));
						__LIB_2__::func_593(&(Local_26.f_46.f_7[0 /*21*/]), &(Local_26.f_46.f_29));
						func_9(3);
					}
					else
					{
						func_23(fVar0);
						if (!func_16(1048576))
						{
							if (func_24())
							{
								func_25(&(Local_26.f_46));
								func_26(1, 0);
								func_27(&(Local_26.f_46), 0);
								func_28();
								if (Local_26.f_4 < 9)
								{
									func_29(9);
								}
								__LIB_14__::func_649(0);
								func_9(5);
							}
						}
					}
				}
				break;
			case 2:
				if (func_16(4096))
				{
					__LIB_14__::func_649(0);
					func_9(5);
				}
				else
				{
					if (func_31())
					{
						if (func_16(16))
						{
							func_9(4);
						}
						else
						{
							func_9(7);
						}
					}
					Jump @894; //curOff = 568
					if (__LIB_2__::func_1(Local_26.f_46, 0, 0))
					{
						PED::SET_PED_CONFIG_FLAG(Local_26.f_46, 130, true);
						PED::SET_PED_CONFIG_FLAG(Local_26.f_46, 315, true);
					}
					func_19(&(Local_26.f_46));
					if (func_33(fVar0))
					{
						__LIB_1__::func_148(&(Local_26.f_34));
						func_9(6);
					}
					Jump @894; //curOff = 637
					if (!func_35(&(Local_26.f_46), 16777216))
					{
						if (PED::_0x285D36C5C72B0569(Global_35) <= 1f)
						{
							func_36(&(Local_26.f_46), 35f, 1f, 1);
							func_37(&(Local_26.f_46), 16777216);
						}
					}
					if (!func_16(4194304))
					{
						if (__LIB_2__::func_227(0f, 1, Local_26.f_46, 1) && __LIB_2__::func_227(-4f, 1, 0, 0))
						{
							if (func_39(1))
							{
								__LIB_14__::func_608(262144);
							}
							func_15(4194304);
						}
					}
					else if (!func_16(8388608))
					{
						if ((__LIB_2__::func_227(0f, 1, Local_26.f_46, 1) && __LIB_2__::func_227(2f, 1, 0, 0)) && __LIB_1__::func_285(&(Local_26.f_34), 10f))
						{
							if (func_39(1))
							{
								__LIB_14__::func_608(64);
							}
							func_15(8388608);
						}
					}
					__LIB_14__::func_304(0);
					if (func_42(fVar0, 0, 0))
					{
						func_28();
						func_9(7);
					}
					else if (func_16(4096))
					{
						func_43();
					}
				}
				BUILTIN::WAIT(0);
				default:
					break;
		}
	}
}

void func_1(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	if (Local_26.f_46.f_106 != 0)
	{
		if (ENTITY::_0x1FF441D7954F8709(Local_26.f_46.f_106))
		{
			ENTITY::_0xD2B9C78537ED5759(Local_26.f_46.f_106);
		}
	}
	func_20(&(Local_26.f_46));
	Global_1914319.f_17371 = 0;
	if (func_16(1) || func_16(4096))
	{
		__LIB_3__::func_707(150, 1);
		func_45(&(Local_26.f_46));
	}
	if (__LIB_2__::func_1(Local_26.f_46, 0, 0))
	{
		if (iParam0 != -1 && __LIB_2__::func_763(iParam0, 1))
		{
			__LIB_2__::func_753(iParam0, 0, 1, 0, 0);
		}
		__LIB_14__::func_673(Local_26.f_46, 1);
		PED::SET_PED_CONFIG_FLAG(Local_26.f_46, 315, false);
	}
	if (__LIB_2__::func_1(Local_26.f_44, 0, 0))
	{
		if (func_16(32768))
		{
			__LIB_2__::func_788(&(Local_26.f_44), 1, 0, 1);
		}
	}
	__LIB_14__::func_304(0);
	Global_1914319.f_17371 = 0;
	if (__LIB_1__::func_917(Local_26.f_46.f_66))
	{
		if (__LIB_1__::func_935(Local_26.f_46.f_66, 1024))
		{
			__LIB_2__::func_754(Local_26.f_46.f_66, 0);
		}
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_26.f_46.f_5))
	{
		TASK::_DELETE_SCENARIO_POINT(Local_26.f_46.f_5);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_26.f_46.f_105))
	{
		POPULATION::_0x74C2B3DC0B294102(Local_26.f_46.f_105);
	}
	__LIB_2__::func_593(&(Local_26.f_46.f_7[0 /*21*/]), &(Local_26.f_46.f_29));
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar1 = iVar0;
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2()
{
	if ((Local_26.f_43 + 1 % 2) == 1)
	{
		if (__LIB_14__::func_433(Local_26.f_1, -1))
		{
			if (VOLUME::_DOES_VOLUME_EXIST(Local_26.f_46.f_105))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, VOLUME::_GET_VOLUME_COORDS(Local_26.f_46.f_105), false) >= 20f)
				{
					return true;
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_26.f_46))
			{
				if (__LIB_0__::func_94(Local_26.f_46, Global_36, 0) >= 20f)
				{
					return true;
				}
			}
		}
	}
	if (Local_26.f_3 > 0)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(Local_26.f_46.f_105) && !ENTITY::DOES_ENTITY_EXIST(Local_26.f_46))
		{
			return true;
		}
	}
	return false;
}

void func_3(float fParam0)
{
	float fVar0;
	func_55();
	if (func_56(&(Local_26.f_46)))
	{
		if (func_39(1))
		{
			__LIB_14__::func_608(2048);
		}
	}
	if (func_57())
	{
		if (__LIB_2__::func_1(Local_26.f_46, 0, 1))
		{
			if (__LIB_2__::func_800())
			{
			}
			*fParam0 = __LIB_0__::func_94(Local_26.f_46, Global_36, 1);
		}
		if (!func_35(&(Local_26.f_46), 512))
		{
			if (func_59())
			{
				if (func_35(&(Local_26.f_46), 32))
				{
					fVar0 = 3f;
				}
				else if (func_35(&(Local_26.f_46), 16))
				{
					fVar0 = 15f;
				}
				else if (func_35(&(Local_26.f_46), 4096))
				{
					fVar0 = 26f;
				}
				else
				{
					fVar0 = 29f;
				}
				if (func_60(&(Local_26.f_46), &(Local_26.f_40), fVar0, Local_26.f_46.f_66, Local_26.f_45, &(Local_26.f_44)))
				{
				}
			}
		}
		else
		{
			func_61(&(Local_26.f_46), Local_26.f_44);
		}
		if (Local_26.f_3 <= 6)
		{
			if (func_62())
			{
				__LIB_2__::func_593(&(Local_26.f_46.f_7[0 /*21*/]), &(Local_26.f_46.f_29));
				func_28();
				if (func_42(*fParam0, 0, 1f))
				{
					if (!func_16(1))
					{
						func_26(1, 1);
					}
					func_9(7);
				}
			}
			if (!func_35(&(Local_26.f_46), 4096) && func_63(&(Local_26.f_46), 0, 1))
			{
				func_36(&(Local_26.f_46), 14f, 30f, 1);
				func_64(&(Local_26.f_46));
				if (!func_16(512))
				{
					func_65(1);
				}
				func_37(&(Local_26.f_46), 4096);
			}
		}
	}
	func_66();
}

void func_4(var uParam0)
{
	if (func_35(uParam0, 1048576))
	{
		return;
	}
	if (func_35(uParam0, 4096) || func_35(uParam0, 16))
	{
		if (Global_1935630.f_13)
		{
			func_37(uParam0, 1048576);
		}
	}
}

void func_5(var uParam0)
{
	int iVar0;
	int iVar1;
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_105))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_105, true, 0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_492(1);
	if (uParam0->f_99 < 0)
	{
		uParam0->f_99 = iVar0;
	}
	if (iVar0 > uParam0->f_99)
	{
		iVar1 = (iVar0 - uParam0->f_99);
		if (__LIB_4__::func_807(0))
		{
		}
		else
		{
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("LOOTED"), joaat("CASH")), iVar1);
		}
		uParam0->f_99 = iVar0;
	}
}

void func_6(var uParam0)
{
	if (uParam0->f_68.f_6)
	{
		return;
	}
	if (__LIB_0__::func_75(&(uParam0->f_68.f_3)))
	{
		if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 1, 0))
		{
			__LIB_0__::func_37(&(uParam0->f_68.f_3));
		}
	}
	if (__LIB_1__::func_285(&(uParam0->f_68.f_3), uParam0->f_68.f_2) && __LIB_2__::func_800())
	{
		__LIB_19__::func_511(uParam0, uParam0->f_68, 0, uParam0->f_68.f_1, 1, 0);
		uParam0->f_68.f_6 = 1;
	}
}

bool func_7(var uParam0)
{
	int iVar0;
	if (__LIB_14__::func_433(Local_26.f_1, -1) && !__LIB_0__::func_29(*uParam0))
	{
		return false;
	}
	Local_26.f_46.f_66 = uParam0->f_2;
	Local_26.f_1 = uParam0->f_1;
	Local_26.f_46.f_105 = Global_1914319.f_3[uParam0->f_1 /*446*/].f_25;
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_26.f_46.f_105))
	{
	}
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(Global_1914319.f_3[uParam0->f_1 /*446*/].f_11);
	if (INTERIOR::IS_INTERIOR_READY(iVar0))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iVar0);
	}
	PED::_0xED9582B3DA8F02B4(2);
	if (PED::_0x5E420FF293EE5472())
	{
		if (!__LIB_2__::func_1(Local_26.f_46, 0, 1))
		{
			Local_26.f_46 = __LIB_2__::func_963(*uParam0);
			if (!__LIB_2__::func_1(Local_26.f_46, 0, 1) && __LIB_14__::func_433(Local_26.f_1, -1))
			{
				return false;
			}
			func_77();
		}
		Local_26.f_45 = __LIB_14__::func_650(Local_26.f_46.f_66);
		__LIB_3__::func_651(Local_26.f_45);
		return true;
	}
	return false;
}

bool func_8()
{
	STREAMING::REQUEST_MODEL(joaat("P_CS_BILLSINGLE01BX"), false);
	func_80(&(Local_26.f_46));
	if (ENTITY::DOES_ENTITY_EXIST(Local_26.f_46))
	{
		PED::_REQUEST_PED_EMOTIONAL_PRESET(Local_26.f_46, "TaskIntimidated_OnFoot");
	}
	return true;
}

void func_9(int iParam0)
{
	Local_26.f_3 = iParam0;
}

bool func_10()
{
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROBBERIES"))
	{
		return true;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_CS_BILLSINGLE01BX")))
	{
		return false;
	}
	if (!func_81(&(Local_26.f_46)))
	{
		return false;
	}
	func_82(&(Local_26.f_46));
	return true;
}

void func_12(var uParam0)
{
	if (func_83(uParam0))
	{
		__LIB_1__::func_240(499, 0);
	}
}

void func_13(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (uParam0->f_65 == 2)
	{
		iVar0 = func_85(uParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			func_86(uParam0);
			return;
		}
	}
	switch (uParam0->f_65)
	{
		case 0:
			iVar1 = func_87(uParam0);
			iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			uParam0->f_106 = ENTITY::_0x6F3068258A499E52(iVar2, uParam0->f_79, 7);
			if (uParam0->f_106 != 0)
			{
				uParam0->f_65 = 1;
			}
			break;
		case 1:
			if (ENTITY::_0x1FF441D7954F8709(uParam0->f_106))
			{
				func_86(uParam0);
				if (func_35(uParam0, 33554432))
				{
					uParam0->f_65 = 2;
				}
			}
			break;
		case 2:
			break;
	}
}

bool func_14(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (__LIB_14__::func_267(uParam0->f_66, 1, 0))
		{
			return true;
		}
	}
	return false;
}

void func_15(int iParam0)
{
	Local_26.f_2 = (Local_26.f_2 || iParam0);
}

bool func_16(int iParam0)
{
	return (Local_26.f_2 && iParam0) != 0;
}

void func_19(var uParam0)
{
	if (func_35(uParam0, 131072))
	{
		return;
	}
	if (!PED::GET_PED_CONFIG_FLAG(Global_35, 141, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, true);
	}
	if (!PED::GET_PED_CONFIG_FLAG(Global_35, 308, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 308, true);
	}
	func_37(uParam0, 131072);
}

void func_20(var uParam0)
{
	if (!func_35(uParam0, 131072))
	{
		return;
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 141, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 308, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 308, false);
	}
	func_91(uParam0, 131072);
}

void func_23(float fParam0)
{
	func_94(fParam0);
}

bool func_24()
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return false;
	}
	if (Global_1879534.f_1)
	{
		return false;
	}
	if (func_35(&(Local_26.f_46), 2097152))
	{
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_26.f_46))
	{
		if (!__LIB_2__::func_1(Local_26.f_46, 0, 1))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_26.f_46, Global_35, 1, 1))
			{
				return true;
			}
			if (PED::_IS_PED_HOGTIED(Local_26.f_46))
			{
				return true;
			}
		}
	}
	return false;
}

int func_25(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_1__::func_921(uParam0->f_66);
	if (iVar0 == 6 || uParam0->f_66 == 82)
	{
		if (__LIB_0__::func_12() == 105 && __LIB_2__::func_230())
		{
			return 0;
		}
		else if (!uParam0->f_102)
		{
			uParam0->f_102 = 1;
		}
	}
	if (uParam0->f_102)
	{
		if ((__LIB_2__::func_227(0f, 1, *uParam0, 1) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(*uParam0, 1)) && PED::IS_PED_FACING_PED(*uParam0, Global_35, 45f))
		{
			return 1;
		}
	}
	return 0;
}

void func_26(bool bParam0, bool bParam1)
{
	if (!func_16(2048) && !PED::IS_PED_DEAD_OR_DYING(Local_26.f_46, true))
	{
	}
	if (!func_16(512))
	{
		func_65(bParam0);
	}
	if (bParam1)
	{
		if (__LIB_14__::func_651(Local_26.f_6.f_16))
		{
			func_99();
		}
	}
	PED::SET_PED_CONFIG_FLAG(Local_26.f_46, 235, true);
	PED::SET_PED_CONFIG_FLAG(Local_26.f_46, 234, true);
	__LIB_2__::func_357(Local_26.f_46, Global_36, 5, 0, 3);
	PED::_0xC163DAC52AC975D3(Local_26.f_46, 32);
	if (!bParam0)
	{
		func_25(&(Local_26.f_46));
		func_101(&(Local_26.f_46), 0, 0, 0, 0);
	}
	__LIB_18__::func_851(Local_26.f_46);
	__LIB_1__::func_283(&(Local_26.f_34), 1);
	func_15(1);
}

void func_27(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_35(uParam0, 262144))
		{
			func_37(uParam0, 262144);
		}
	}
	else if (func_35(uParam0, 262144))
	{
		func_91(uParam0, 262144);
	}
}

void func_28()
{
	if (__LIB_2__::func_1(Local_26.f_46, 0, 1))
	{
		if (!func_16(2048))
		{
			__LIB_18__::func_852(Local_26.f_46, 1, 0, 0, 1, 0);
			func_15(2048);
		}
		if (!func_16(1048576))
		{
			func_105();
			__LIB_2__::func_754(Local_26.f_46.f_66, 1);
			func_106(&(Local_26.f_46), Local_26.f_1, Local_26, Local_26.f_46.f_105);
			func_15(1048576);
		}
	}
}

void func_29(int iParam0)
{
	Local_26.f_4 = iParam0;
}

bool func_31()
{
	if (!__LIB_2__::func_1(Local_26.f_46, 0, 1))
	{
		return false;
	}
	switch (Local_26.f_5)
	{
		case 0:
			if (func_107(0))
			{
				if (__LIB_2__::func_227(-3f, 1, 0, 0))
				{
					if (__LIB_14__::func_652(&(Local_26.f_46), Local_26.f_1))
					{
						__LIB_18__::func_853(&(Local_26.f_46));
						func_110(3);
					}
					else
					{
						__LIB_18__::func_854(&(Local_26.f_46));
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_26.f_46, Global_35, -1, -1f, -1f, -1f);
						func_110(1);
					}
				}
			}
			break;
		case 1:
			if (func_107(0))
			{
				if (__LIB_2__::func_227(-1f, 1, 0, 0))
				{
					__LIB_14__::func_683(&(Local_26.f_46));
					func_110(2);
				}
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-1f, 1, 0, 0) || func_113(Local_26.f_46, 1))
			{
				__LIB_18__::func_855(&(Local_26.f_46));
				func_115(&(Local_26.f_46), &Local_26, Local_26.f_46.f_105, joaat("WEAPON_REVOLVER_CATTLEMAN"));
				func_110(4);
			}
			break;
		case 3:
			if (__LIB_2__::func_227(-4.5f, 1, 0, 0))
			{
				if (func_116(&(Local_26.f_46)))
				{
					func_15(16);
					func_110(4);
				}
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_33(float fParam0)
{
	int iVar0;
	if (!func_35(&(Local_26.f_46), 16777216))
	{
		if (PED::_0x285D36C5C72B0569(Global_35) <= 1f)
		{
			func_36(&(Local_26.f_46), 35f, 1f, 1);
			func_37(&(Local_26.f_46), 16777216);
		}
	}
	if (!__LIB_2__::func_1(Local_26.f_46, 0, 1))
	{
		if (Local_26.f_4 != 7)
		{
			if (Local_26.f_4 < 9)
			{
				if (Local_26.f_4 < 7)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_26.f_46.f_2[0]))
					{
						OBJECT::DELETE_OBJECT(&(Local_26.f_46.f_2[0]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_26.f_46.f_2[1]))
					{
						OBJECT::DELETE_OBJECT(&(Local_26.f_46.f_2[1]));
					}
					__LIB_14__::func_304(1);
					__LIB_14__::func_649(0);
				}
				else
				{
					__LIB_14__::func_304(0);
					__LIB_14__::func_649(1);
				}
				func_29(9);
			}
			return false;
		}
	}
	if (!func_35(&(Local_26.f_46), 4096))
	{
		iVar0 = func_118(&(Local_26.f_46), Local_26.f_46.f_105, 0, 0, 0.5f, 0, 1109393408 /* Float: 40f */);
		if (Local_26.f_155 == -1)
		{
			Local_26.f_155 = iVar0;
		}
	}
	if (!func_16(2048))
	{
		if ((__LIB_0__::func_163(Local_26.f_46, -982327190) && Local_26.f_4 >= 8) && __LIB_2__::func_598(Local_26.f_46, Local_26.f_46.f_97[0], "CLERK", 0, 0, 1, 0))
		{
			func_27(&(Local_26.f_46), 0);
			PED::_0x58F7DB5BD8FA2288(Local_26.f_46);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_26.f_46, Global_35, -1, -1f, -1f, -1f);
		}
	}
	if (!func_16(1048576))
	{
		if (!func_35(&(Local_26.f_46), 8388608))
		{
			if (func_35(&(Local_26.f_46), 4194304))
			{
				if (func_121(&(Local_26.f_46)))
				{
					PED::_0xAAB050DA48B57978(Local_26.f_46, "TaskIntimidated_OnFoot", Global_35, -1, 4);
					func_37(&(Local_26.f_46), 8388608);
				}
			}
		}
		if (func_122(fParam0) || func_25(&(Local_26.f_46)))
		{
			func_27(&(Local_26.f_46), 0);
			func_28();
			if (Local_26.f_4 < 9)
			{
				if (Local_26.f_4 < 7)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_26.f_46.f_2[0]))
					{
						OBJECT::DELETE_OBJECT(&(Local_26.f_46.f_2[0]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_26.f_46.f_2[1]))
					{
						OBJECT::DELETE_OBJECT(&(Local_26.f_46.f_2[1]));
					}
					__LIB_14__::func_304(1);
					__LIB_14__::func_649(0);
				}
				else
				{
					__LIB_14__::func_304(0);
					__LIB_14__::func_649(1);
				}
				func_29(9);
			}
		}
	}
	func_123(&(Local_26.f_46));
	if (Local_26.f_46.f_102 && Local_26.f_4 < 9)
	{
		return false;
	}
	switch (Local_26.f_4)
	{
		case 0:
			if (__LIB_14__::func_653(&(Local_26.f_46), Local_26.f_155))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Local_26.f_46) || !ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_26.f_46))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_26.f_46, true, true);
				}
				__LIB_14__::func_608(16);
				__LIB_1__::func_148(&(Local_26.f_34));
				func_29(5);
			}
			else if (__LIB_1__::func_285(&(Local_26.f_34), 3f) && __LIB_2__::func_227(0, 1, Global_35, 1))
			{
				__LIB_14__::func_608(16);
				__LIB_1__::func_148(&(Local_26.f_34));
				func_29(1);
			}
			break;
		case 1:
			if (__LIB_14__::func_653(&(Local_26.f_46), Local_26.f_155))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Local_26.f_46))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_26.f_46, true, true);
				}
				__LIB_1__::func_148(&(Local_26.f_34));
				func_29(5);
			}
			else if (__LIB_1__::func_285(&(Local_26.f_34), 6f) && __LIB_9__::func_260(Local_26.f_46, 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */, 0, 1061158912 /* Float: 0.75f */))
			{
				__LIB_1__::func_148(&(Local_26.f_34));
				__LIB_14__::func_608(32);
				func_29(2);
			}
			break;
		case 2:
			if (__LIB_14__::func_653(&(Local_26.f_46), Local_26.f_155))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Local_26.f_46))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_26.f_46, true, true);
				}
				__LIB_1__::func_148(&(Local_26.f_34));
				func_29(5);
			}
			else if ((__LIB_1__::func_285(&(Local_26.f_34), 7f) && __LIB_9__::func_260(Local_26.f_46, 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */, 0, 1061158912 /* Float: 0.75f */)) && __LIB_14__::func_681(Local_26.f_46))
			{
				__LIB_1__::func_148(&(Local_26.f_34));
				__LIB_14__::func_608(1048576);
				func_29(3);
			}
			else
			{
				func_29(3);
			}
			break;
		case 3:
			if (__LIB_14__::func_653(&(Local_26.f_46), Local_26.f_155))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Local_26.f_46))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_26.f_46, true, true);
				}
				__LIB_1__::func_148(&(Local_26.f_34));
				func_29(5);
			}
			else if (__LIB_1__::func_285(&(Local_26.f_34), 15f))
			{
				__LIB_1__::func_148(&(Local_26.f_34));
				__LIB_14__::func_608(4194304);
				func_29(4);
			}
			break;
		case 4:
			func_28();
			break;
		case 5:
			if (__LIB_1__::func_285(&(Local_26.f_34), 2.25f))
			{
				if (func_107(0))
				{
					if (func_127())
					{
						func_15(2);
					}
					if (!func_16(2))
					{
						func_27(&(Local_26.f_46), 1);
						if (Local_26.f_46.f_90 < 0f)
						{
							Local_26.f_46.f_90 = __LIB_0__::func_36();
						}
						func_37(&(Local_26.f_46), 4194304);
						__LIB_14__::func_304(0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_26.f_46, Local_26.f_46.f_75, 1f, 10000, 0.1f, 0, Local_26.f_46.f_78);
						func_29(6);
					}
					else
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_26.f_46.f_2[0]))
						{
							OBJECT::DELETE_OBJECT(&(Local_26.f_46.f_2[0]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_26.f_46.f_2[1]))
						{
							OBJECT::DELETE_OBJECT(&(Local_26.f_46.f_2[1]));
						}
						if (!__LIB_0__::func_163(Local_26.f_46, -875674219))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_26.f_46, Global_35, -1, -1f, -1f, -1f);
						}
						if (func_39(1))
						{
							if (__LIB_2__::func_227(0f, 1, Local_26.f_46, 1) && __LIB_2__::func_227(0f, 1, Global_35, 1))
							{
								__LIB_14__::func_608(512);
								__LIB_14__::func_304(1);
								__LIB_14__::func_649(0);
								func_29(9);
							}
						}
						else
						{
							__LIB_14__::func_304(1);
							__LIB_14__::func_649(0);
							func_29(9);
						}
					}
				}
			}
			break;
		case 6:
			if (func_107(0))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_26.f_46.f_97[0], "pblExitB");
				if (!__LIB_2__::func_1(Local_26.f_46, 0, 1))
				{
					__LIB_14__::func_304(1);
					__LIB_14__::func_649(0);
					func_29(10);
					Jump @2340; //curOff = 1548
				}
				if (!func_16(33554432))
				{
					if (!func_16(64))
					{
						if (((func_39(1) && !func_16(2048)) && __LIB_2__::func_227(0f, 1, Local_26.f_46, 1)) && __LIB_2__::func_227(0f, 1, Global_35, 1))
						{
							__LIB_14__::func_608(128);
							func_15(33554432);
						}
					}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(Local_26.f_46, Local_26.f_46.f_75, 0.3f, 0.3f, 5f, false, true, 0))
				{
					if (!__LIB_0__::func_163(Local_26.f_46, 713668775))
					{
						if (!func_16(67108864))
						{
							TASK::TASK_STAND_STILL(Local_26.f_46, -1);
							func_15(67108864);
						}
						if (func_129(&(Local_26.f_46)))
						{
							func_29(7);
						}
					}
				}
				else if (!__LIB_0__::func_163(Local_26.f_46, 713668775) && !PED::IS_PED_RAGDOLL(Local_26.f_46))
				{
					if (Local_26.f_46.f_86 < 0f)
					{
						Local_26.f_46.f_86 = __LIB_0__::func_36();
					}
					if ((__LIB_0__::func_36() - Local_26.f_46.f_86) >= 3f)
					{
						if (PED::IS_PED_USING_ANY_SCENARIO(Local_26.f_46))
						{
							__LIB_2__::func_357(Local_26.f_46, Global_36, 5, 1, 1);
						}
					}
					func_29(5);
				}
			}
			break;
		case 7:
			__LIB_14__::func_304(0);
			if (func_107(0) && func_39(1))
			{
				func_130();
			}
			if (func_131(&(Local_26.f_46)))
			{
				if (func_132(&(Local_26.f_46), 0))
				{
					func_133(&(Local_26.f_46));
					func_29(8);
				}
				else if (!__LIB_2__::func_1(Local_26.f_46, 0, 1))
				{
					if (!__LIB_14__::func_654())
					{
						__LIB_14__::func_304(1);
						func_29(10);
					}
				}
			}
			break;
		case 8:
			if (!__LIB_0__::func_163(Local_26.f_46, -875674219))
			{
				if (__LIB_2__::func_598(Local_26.f_46, Local_26.f_46.f_97[0], "CLERK", 0, 0, 1, 0))
				{
					func_27(&(Local_26.f_46), 0);
					PED::_0x58F7DB5BD8FA2288(Local_26.f_46);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_26.f_46, Global_35, -1, -1f, -1f, -1f);
				}
			}
			else
			{
				if (func_16(262144))
				{
					PED::SET_PED_CONFIG_FLAG(Global_35, 13, false);
				}
				__LIB_14__::func_304(0);
				__LIB_1__::func_148(&(Local_26.f_34));
				func_29(10);
			}
			break;
		case 9:
			if (__LIB_1__::func_285(&(Local_26.f_34), 4f))
			{
				if (func_107(0) && !func_16(2048))
				{
					__LIB_1__::func_148(&(Local_26.f_34));
					func_29(10);
				}
			}
			break;
		case 10:
			if (__LIB_2__::func_1(Global_35, 0, 1))
			{
				if (func_16(4096))
				{
					func_64(&(Local_26.f_46));
					func_29(11);
				}
				else if (!func_16(2097152) && !func_16(1048576))
				{
					if (!__LIB_14__::func_448(Local_26.f_46))
					{
						if (__LIB_1__::func_285(&(Local_26.f_34), 8f) && !func_136(&(Local_26.f_46), 0))
						{
							if (func_39(1))
							{
								__LIB_14__::func_608(524288);
								__LIB_1__::func_148(&(Local_26.f_34));
								func_15(2097152);
							}
						}
					}
				}
			}
			break;
		case 11:
			if (__LIB_2__::func_1(Global_35, 0, 1))
			{
				if (!func_136(&(Local_26.f_46), 0))
				{
					if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					}
					__LIB_18__::func_851(Local_26.f_46);
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_35(var uParam0, int iParam1)
{
	return (uParam0->f_67 && iParam1) != 0;
}

void func_36(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 1, 0))
	{
		__LIB_0__::func_37(&(uParam0->f_68.f_3));
		return;
	}
	uParam0->f_68 = fParam1;
	uParam0->f_68.f_2 = fParam2;
	uParam0->f_68.f_1 = iParam3;
	__LIB_1__::func_148(&(uParam0->f_68.f_3));
}

void func_37(var uParam0, int iParam1)
{
	uParam0->f_67 = (uParam0->f_67 || iParam1);
}

bool func_39(bool bParam0)
{
	return func_140(Local_26.f_46, bParam0);
}

bool func_42(float fParam0, bool bParam1, float fParam2)
{
	if (fParam2 > 0f)
	{
		if (!__LIB_0__::func_75(&(Local_26.f_37)))
		{
			__LIB_1__::func_283(&(Local_26.f_37), 0);
		}
		if (!__LIB_1__::func_285(&(Local_26.f_37), fParam2))
		{
			return false;
		}
	}
	if (bParam1 || func_142(&(Local_26.f_46), fParam0))
	{
		__LIB_14__::func_674(Local_26.f_46, 1);
		if (__LIB_18__::func_852(Local_26.f_46, 1, 0, Local_26.f_46.f_101, 1, 0))
		{
			func_15(2048);
			return true;
		}
	}
	return false;
}

void func_43()
{
	if (!func_16(1024))
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_26.f_46.f_105, false, 0) && ENTITY::IS_ENTITY_IN_VOLUME(Local_26.f_46, Local_26.f_46.f_105, true, 0))
		{
			func_144();
			func_15(1024);
		}
	}
}

void func_45(var uParam0)
{
	int iVar0;
	if ((!func_35(uParam0, 4096) && !func_35(uParam0, 16)) && !func_35(uParam0, 8192))
	{
		return;
	}
	iVar0 = __LIB_14__::func_668(uParam0->f_66);
	if (iVar0 != __LIB_11__::func_454())
	{
		MISC::_0xCC3EDC5614B03F61(iVar0);
	}
}

void func_55()
{
	Local_26.f_43++;
	if (Local_26.f_43 >= 30)
	{
		Local_26.f_43 = 0;
	}
}

bool func_56(var uParam0)
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0) == -1730772208)
		{
			bVar1 = __LIB_14__::func_655(uParam0, iVar0);
			if (bVar1)
			{
				func_37(uParam0, 8192);
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_57()
{
	return Local_26.f_3 >= 3;
}

bool func_59()
{
	if (__LIB_4__::func_10(Local_26.f_1))
	{
		if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 1, 0))
		{
			return false;
		}
		if (Local_26.f_3 == 2 || func_16(524288))
		{
			return true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_26.f_46))
		{
			if (!__LIB_2__::func_1(Local_26.f_46, 0, 1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_26.f_46, Global_35, 1, 1) || PED::_IS_PED_HOGTIED(Local_26.f_46))
				{
					return true;
				}
			}
		}
		if (func_35(&(Local_26.f_46), 4096))
		{
			return true;
		}
		if (func_168(&(Local_26.f_46)))
		{
			return true;
		}
	}
	return false;
}

bool func_60(var uParam0, var uParam1, float fParam2, int iParam3, int iParam4, var uParam5)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = __LIB_0__::func_12();
	switch (iVar0)
	{
		case 92:
		case 120:
			return false;
	}
	if (!func_35(uParam0, 512))
	{
		if (!__LIB_0__::func_75(uParam1))
		{
			__LIB_1__::func_283(uParam1, 0);
			return false;
		}
		if (__LIB_1__::func_285(uParam1, fParam2) && __LIB_4__::func_10(__LIB_1__::func_921(iParam3)))
		{
			__LIB_3__::func_651(iParam4);
			vVar1 = { __LIB_14__::func_656(iParam3) };
			if (!STREAMING::HAS_MODEL_LOADED(iParam4))
			{
				STREAMING::REQUEST_MODEL(iParam4, false);
				return false;
			}
			if (__LIB_4__::func_10(__LIB_1__::func_921(iParam3)) || ENTITY::WOULD_ENTITY_BE_OCCLUDED(iParam4, vVar1, true))
			{
				*uParam5 = __LIB_1__::func_545(iParam4, vVar1, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			if (__LIB_2__::func_1(*uParam5, 0, 1))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam5))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam5, true, true);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam5, true);
				PED::SET_PED_CONFIG_FLAG(*uParam5, 146, false);
				PED::SET_PED_CONFIG_FLAG(*uParam5, 148, false);
				PED::SET_PED_CONFIG_FLAG(*uParam5, 113, true);
				func_37(uParam0, 512);
				return true;
			}
		}
	}
	else if (__LIB_2__::func_1(*uParam5, 0, 1))
	{
		return true;
	}
	return false;
}

void func_61(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_0__::func_12();
	switch (iVar0)
	{
		case 92:
		case 120:
			return;
	}
	if (func_35(uParam0, 512) && !func_35(uParam0, 1024))
	{
		if (!__LIB_2__::func_1(iParam1, 0, 1))
		{
			return;
		}
		iVar1 = __LIB_1__::func_921(uParam0->f_66);
		if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, 0))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(iParam1, Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
			__LIB_2__::func_788(&iParam1, 1, 1, 0);
			func_37(uParam0, 1024);
		}
		if (ENTITY::IS_ENTITY_IN_VOLUME(iParam1, Global_1914319.f_3[iVar1 /*446*/].f_25, true, 0) || __LIB_2__::func_215(iParam1, Global_35, 1, 12f, 0))
		{
			bVar2 = false;
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && ENTITY::IS_ENTITY_DEAD(*uParam0))
			{
				bVar2 = true;
			}
			if (__LIB_4__::func_10(iVar1))
			{
				TASK::CLEAR_PED_TASKS(iParam1, true, false);
				__LIB_18__::func_852(iParam1, 1, 0, 0, 1, bVar2);
				__LIB_2__::func_788(&iParam1, 1, 1, 1);
			}
			else
			{
				TASK::CLEAR_PED_TASKS(iParam1, true, false);
				__LIB_18__::func_852(iParam1, 1, 0, 0, 1, bVar2);
				__LIB_2__::func_788(&iParam1, 1, 1, 1);
			}
			func_37(uParam0, 1024);
		}
		else if (!TASK::IS_PED_WALKING(iParam1) && !PED::IS_PED_FLEEING(iParam1))
		{
			if (!func_35(uParam0, 2048))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam1, __LIB_14__::func_657(uParam0->f_66), 1.5f, -1, 0.25f, 0, 40000f);
				func_37(uParam0, 2048);
			}
		}
	}
}

bool func_62()
{
	if (func_16(134217728))
	{
		if (__LIB_2__::func_1(Local_26.f_46, 0, 0))
		{
			if ((__LIB_3__::func_528(Local_26.f_46, Global_35) || PED::_0x3BDFCF25B58B0415(Local_26.f_46)) || PED::_IS_PED_LASSOED(Local_26.f_46))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_63(var uParam0, bool bParam1, bool bParam2)
{
	if (__LIB_2__::func_1(Global_35, 0, 1))
	{
		if (__LIB_3__::func_138(Global_35, joaat("PROP_PLAYER_CASH_REGISTER")) || __LIB_3__::func_138(Global_35, joaat("PROP_PLAYER_CASH_REGISTER_CLERK_OPENED")))
		{
			if (PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_PLAYER_CASH_REGISTER")))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[0]))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_2[0]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[1]))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_2[1]));
				}
			}
			if (bParam2)
			{
				return true;
			}
			else
			{
				return func_136(uParam0, bParam1);
			}
		}
	}
	return false;
}

void func_64(var uParam0)
{
	if (!func_16(4096))
	{
		if (!func_16(1048576))
		{
			if (__LIB_2__::func_1(*uParam0, 0, 1))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam0, Global_35, -1, 4f, 0.25f, -1f);
			}
		}
		func_129(&(Local_26.f_46));
		func_15(4096);
	}
}

void func_65(bool bParam0)
{
	int iVar0;
	if (__LIB_2__::func_1(Local_26.f_46, 0, 1))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_26.f_46))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_26.f_46, true, true);
		}
		if (!PED::GET_PED_CONFIG_FLAG(Local_26.f_46, 168, true))
		{
			PED::SET_PED_CONFIG_FLAG(Local_26.f_46, 168, true);
			PED::SET_PED_CONFIG_FLAG(Local_26.f_46, 113, false);
		}
	}
	if (!bParam0)
	{
		__LIB_14__::func_673(Local_26.f_46, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_26.f_46, true);
	}
	else
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_26.f_46, false);
	}
	iVar0 = __LIB_1__::func_921(Local_26.f_46.f_66);
	func_175(iVar0, Global_35, 1, 10);
	Local_26.f_46.f_99 = __LIB_0__::func_492(1);
	__LIB_14__::func_669(Local_26.f_46.f_66);
	__LIB_14__::func_304(1);
	Global_1914319.f_17371 = 1;
	__LIB_2__::func_754(Local_26.f_46.f_66, 1);
	__LIB_14__::func_670(Local_26.f_46.f_66, 1, 0);
	__LIB_1__::func_309(-1, 0, 0, 0, 0);
	__LIB_1__::func_924();
	__LIB_0__::func_747(45, 0, 1);
	func_15(512);
}

void func_66()
{
	if (Local_26.f_3 > 1)
	{
	}
}

void func_77()
{
	PED::SET_PED_CAN_BE_TARGETTED(Local_26.f_46, true);
	__LIB_14__::func_658(Local_26.f_46, 1);
	__LIB_14__::func_676(&(Local_26.f_6));
}

void func_80(var uParam0)
{
	uParam0->f_97[0] = ANIMSCENE::_CREATE_ANIM_SCENE(__LIB_14__::func_659(0), 0, 0, false, true);
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_97[0], true, false))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_97[0]);
	}
}

bool func_81(var uParam0)
{
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_97[0], true, false) || !ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_97[0], false))
	{
		return false;
	}
	return true;
}

void func_82(var uParam0)
{
	char* sVar0;
	ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_97[0], "pblExitB");
	sVar0 = func_192(uParam0);
	ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_97[0], sVar0);
}

bool func_83(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_474(499))
	{
		return false;
	}
	if (!Global_20710.f_2400)
	{
		return false;
	}
	if (__LIB_0__::func_296(80, 0, 1))
	{
		return false;
	}
	iVar1 = __LIB_1__::func_921(uParam0->f_66);
	if (!__LIB_14__::func_630(iVar1))
	{
		return false;
	}
	if (__LIB_14__::func_660(iVar1))
	{
		if (__LIB_2__::func_804(iVar1, 32768))
		{
			return false;
		}
		return true;
	}
	if (uParam0->f_100 == -1)
	{
		iVar2 = 0;
		uParam0->f_100 = 0;
	}
	else
	{
		iVar2 = uParam0->f_100;
	}
	iVar0 = iVar2;
	while (iVar0 <= 25)
	{
		if (!__LIB_14__::func_660(iVar0))
		{
			if (__LIB_2__::func_804(iVar0, 32768))
			{
				__LIB_1__::func_943(iVar0, 32768);
			}
		}
		uParam0->f_100++;
		return false;
		iVar0++;
	}
	uParam0->f_100 = -1;
	return false;
}

int func_85(var uParam0)
{
	var uVar0;
	if (uParam0->f_106 != 0)
	{
		if (ENTITY::_0x1FF441D7954F8709(uParam0->f_106))
		{
			uVar0 = ENTITY::_0x4735E2A4BB83D9DA(uParam0->f_106);
			return uVar0;
		}
	}
	return 0;
}

void func_86(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if (!func_35(uParam0, 33554432))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_97[0], true, false) || ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_97[0], true))
		{
			iVar0 = func_85(uParam0);
			vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_97[0], ENTITY::GET_ENTITY_COORDS(iVar0, true, false), ENTITY::GET_ENTITY_ROTATION(iVar0, 2), 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_97[0], "CLERK", *uParam0, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_97[0], "REGISTER", iVar0, 0);
			uParam0->f_75 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0.02f, -0.88f, 0f) };
			uParam0->f_78 = ENTITY::GET_ENTITY_HEADING(iVar0);
			__LIB_3__::func_409(&(uParam0->f_75), 0f);
			func_37(uParam0, 33554432);
		}
	}
}

int func_87(var uParam0)
{
	var uVar0[1];
	var uVar2;
	int iVar9;
	vector3 vVar10;
	uVar2 = 6;
	vVar10 = { ENTITY::GET_ENTITY_COORDS(*uParam0, false, false) };
	__LIB_14__::func_631(&uVar2, 0);
	uParam0->f_79 = { __LIB_14__::func_657(uParam0->f_66) };
	if (__LIB_0__::func_86(uParam0->f_79))
	{
		iVar9 = __LIB_14__::func_671(&uVar0, &uVar2, 1, vVar10, 4f);
	}
	else
	{
		iVar9 = __LIB_14__::func_671(&uVar0, &uVar2, 1, uParam0->f_79, 1.5f);
	}
	if (iVar9 <= 0)
	{
		if (!func_35(uParam0, 2))
		{
			func_37(uParam0, 2);
		}
	}
	else
	{
		if (func_35(uParam0, 2))
		{
			func_91(uParam0, 2);
		}
		return uVar0[0];
	}
	return 0;
}

void func_91(var uParam0, int iParam1)
{
	uParam0->f_67 = (uParam0->f_67 - (uParam0->f_67 && iParam1));
}

void func_94(float fParam0)
{
	if (func_212())
	{
		if (__LIB_3__::func_339(Local_26.f_46.f_66))
		{
			func_214();
			func_26(0, 1);
			__LIB_14__::func_649(0);
			func_9(5);
		}
		else
		{
			func_101(&(Local_26.f_46), 0, 0, 0, 0);
			func_9(2);
		}
	}
	else if (func_35(&(Local_26.f_46), 4096) || func_35(&(Local_26.f_46), 8192))
	{
		if (Local_26.f_3 < 5)
		{
			if (__LIB_2__::func_1(Local_26.f_46, 0, 1))
			{
				if (func_42(fParam0, 1, 3f))
				{
					__LIB_2__::func_593(&(Local_26.f_46.f_7[0 /*21*/]), &(Local_26.f_46.f_29));
					func_26(0, 0);
					func_28();
					func_9(6);
				}
			}
			else
			{
				__LIB_14__::func_649(0);
				func_29(11);
				func_9(5);
			}
		}
	}
	if (func_16(16384))
	{
		if (func_42(fParam0, 0, 0))
		{
			func_26(1, 1);
			func_9(7);
		}
	}
}

void func_99()
{
	__LIB_14__::func_608(16);
}

void func_101(var uParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	if ((MISC::IS_STRING_NULL_OR_EMPTY(sParam1) || MISC::IS_STRING_NULL_OR_EMPTY(sParam2)) || MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		sVar0 = __LIB_14__::func_661();
		sVar1 = __LIB_14__::func_662();
		sVar2 = __LIB_14__::func_663();
	}
	else
	{
		sVar0 = sParam1;
		sVar1 = sParam2;
		sVar2 = sParam3;
	}
	if (!uParam0->f_102 || bParam4)
	{
		if (uParam0->f_90 < 0f)
		{
			uParam0->f_90 = __LIB_0__::func_36();
		}
		func_37(uParam0, 4194304);
	}
	func_27(uParam0, 1);
	__LIB_14__::func_677(*uParam0, sVar0, sVar1, sVar2, 1);
	func_37(uParam0, 16384);
}

void func_105()
{
	if (func_222())
	{
		func_36(&(Local_26.f_46), 25f, 10f, 1);
	}
}

void func_106(var uParam0, var uParam1, int iParam2, int iParam3)
{
	__LIB_2__::func_593(&(uParam0->f_7[0 /*21*/]), &(uParam0->f_29));
	__LIB_18__::func_851(*uParam0);
	if (func_223(uParam0))
	{
		__LIB_2__::func_357(*uParam0, Global_36, 3, 0, 3);
		func_115(uParam0, &iParam2, iParam3, joaat("WEAPON_REVOLVER_CATTLEMAN"));
	}
	else
	{
		__LIB_2__::func_357(*uParam0, Global_36, 5, 0, 3);
		__LIB_14__::func_608(4194304);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 44, false);
		__LIB_18__::func_852(*uParam0, 1, 0, 0, 1, 0);
		if (!LAW::_0x0EAF918F751F27BA(*uParam0))
		{
			PED::_0x935CF6E42BAF7F4D(*uParam0);
			TASK::_TASK_SMART_FLEE_STYLE_PED(*uParam0, Global_35, 3, 176128, -1082130432 /* Float: -1f */, -1, 0);
		}
	}
}

bool func_107(bool bParam0)
{
	return func_140(Global_35, bParam0);
}

void func_110(int iParam0)
{
	Local_26.f_5 = iParam0;
}

bool func_113(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	if (__LIB_1__::func_372(Global_35, 0) == joaat("WEAPON_UNARMED"))
	{
		return false;
	}
	if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM")))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	}
	else
	{
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), true);
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	uVar1 = __LIB_0__::func_17(iParam0);
	if (__LIB_14__::func_681(iParam0) && !PLAYER::_0x3EE1F7A8C32F24E1(iVar0, &uVar1, false, false))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, bParam1);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
		return true;
	}
	if (PED::_IS_PED_HOGTIED(iParam0) || PED::_IS_PED_LASSOED(iParam0))
	{
		__LIB_14__::func_608(65536);
		return true;
	}
	return false;
}

void func_115(var uParam0, int* iParam1, int iParam2, int iParam3)
{
	__LIB_14__::func_664(*uParam0);
	func_230(uParam0, iParam1, iParam2, iParam3);
}

bool func_116(var uParam0)
{
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam0, Global_35, 0, -1f, -1f, -1f);
	__LIB_1__::func_936(uParam0->f_66, 2048);
	func_231(uParam0, 1);
	return true;
}

int func_118(var uParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!__LIB_2__::func_341(&(uParam0->f_7[0 /*21*/])))
	{
		switch (uParam0->f_64)
		{
			case 0:
				if (!__LIB_4__::func_807(0))
				{
					if (__LIB_2__::func_470())
					{
						func_235(uParam0, "PLAYER_HOLDUP_ROB", bParam2);
						func_236(uParam0);
						uParam0->f_64 = 1;
					}
				}
				break;
			case 1:
				if ((__LIB_4__::func_807(0) || !__LIB_2__::func_470()) || func_35(uParam0, 128))
				{
					func_237(uParam0, bParam2);
					uParam0->f_64 = 2;
				}
				else
				{
					func_236(uParam0);
				}
				break;
			case 2:
				if (!__LIB_4__::func_807(0) && __LIB_2__::func_470())
				{
					func_235(uParam0, "PLAYER_HOLDUP_ROB", bParam2);
					func_236(uParam0);
					func_91(uParam0, 128);
					uParam0->f_64 = 1;
				}
				break;
		}
	}
	iVar2 = 1;
	iVar3 = 2;
	if (func_35(uParam0, 256))
	{
		if (!func_35(uParam0, 67108864) && !bParam5)
		{
			iVar3 = 3;
			__LIB_2__::func_451(&(uParam0->f_7[0 /*21*/]), 0);
			func_37(uParam0, 67108864);
		}
	}
	iVar0 = func_239(uParam0, &(uParam0->f_7[0 /*21*/]), 30f, &(uParam0->f_29), &iVar2, fParam4, 1, 0, uParam0->f_107, 65792 | __LIB_2__::func_340(iVar3, 0, 0), iParam1, 0, 2, 0, -1082130432 /* Float: -1f */, 1);
	iVar1 = iVar0;
	if (__LIB_2__::func_341(&(uParam0->f_7[0 /*21*/])))
	{
		if (!uParam0->f_103)
		{
			if (uParam0->f_7[0 /*21*/].f_1 == 0)
			{
				__LIB_2__::func_504(*uParam0, 500);
				__LIB_3__::func_374(uParam0, &(uParam0->f_7[0 /*21*/]), &(uParam0->f_29), 30f, 65792 | __LIB_2__::func_340(3, 0, 0), uParam0->f_107, 2, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
				__LIB_18__::func_851(*uParam0);
				func_242(uParam0, 0, 0);
			}
			else if (uParam0->f_7[0 /*21*/].f_1 == 1)
			{
				__LIB_2__::func_504(*uParam0, 500);
				__LIB_18__::func_851(*uParam0);
				func_242(uParam0, 0, 1);
			}
			__LIB_1__::func_283(&(uParam0->f_94), 0);
			uParam0->f_103 = 1;
		}
	}
	if (__LIB_1__::func_285(&(uParam0->f_94), 1f) && !__LIB_1__::func_285(&(uParam0->f_94), 2f))
	{
		if (!__LIB_0__::func_163(*uParam0, -875674219))
		{
			if (TASK::_0x916B8E075ABC8B4E(*uParam0, 1) || !TASK::_0x02EBBB3989B7E695(*uParam0))
			{
				__LIB_2__::func_357(*uParam0, Global_36, 1, 0, 3);
			}
			else
			{
				__LIB_2__::func_357(*uParam0, Global_36, 5, 0, 3);
			}
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam0, Global_35, -1, -1f, -1f, -1f);
		}
	}
	if (uParam0->f_103)
	{
	}
	switch (iVar1)
	{
		case 0:
			if (!bParam3)
			{
				func_36(uParam0, 14f, fParam6, 1);
			}
			EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DANGEROUS_NEW"), Global_35, 10f, 10f, 10f, -1f, -1f, 180f, true, false, -1, -1);
			func_37(uParam0, 524288);
			__LIB_0__::func_37(&(uParam0->f_94));
			uParam0->f_103 = 0;
			break;
		case 1:
			func_37(uParam0, 65536);
			__LIB_0__::func_37(&(uParam0->f_94));
			uParam0->f_103 = 0;
			break;
	}
	return iVar1;
}

bool func_121(var uParam0)
{
	if (((!TASK::IS_PED_ACTIVE_IN_SCENARIO(*uParam0, 1) && !TASK::_0x0C3CB2E600C8977D(*uParam0, 1)) && uParam0->f_90 > 0f) && (__LIB_0__::func_36() - uParam0->f_90) >= 1f)
	{
		return true;
	}
	return false;
}

int func_122(float fParam0)
{
	if (Local_26.f_4 >= 0 || func_35(&(Local_26.f_46), 4096))
	{
		if (func_142(&(Local_26.f_46), fParam0) || !func_107(0))
		{
			return 1;
		}
	}
	if (func_35(&(Local_26.f_46), 2097152))
	{
		return 1;
	}
	if (!func_107(0))
	{
		return 1;
	}
	if (Local_26.f_4 == 4)
	{
		return 1;
	}
	if ((func_244(&(Local_26.f_46), Local_26.f_6, Local_26.f_6.f_16) || PED::_0x29FCE825613FEFCA(Local_26.f_46, 3000)) || PED::IS_PED_RAGDOLL(Local_26.f_46))
	{
		return 1;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_26.f_46, Global_35, 1, 1))
	{
		return 1;
	}
	return 0;
}

void func_123(var uParam0)
{
	if (func_35(uParam0, 262144))
	{
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(*uParam0, 0, 1);
	}
}

bool func_127()
{
	return func_248(&(Local_26.f_46), 3f);
}

bool func_129(var uParam0)
{
	if (func_249(uParam0))
	{
		__LIB_14__::func_304(0);
		func_250(uParam0);
		return true;
	}
	return false;
}

void func_130()
{
	if (!func_16(64))
	{
		if ((__LIB_2__::func_227(-3.5f, 1, 0, 0) && __LIB_2__::func_227(0, 1, Global_35, 1)) && __LIB_2__::func_227(0, 1, Local_26.f_46, 1))
		{
			__LIB_14__::func_608(131072);
			func_15(64);
		}
	}
}

bool func_131(var uParam0)
{
	char* sVar0;
	sVar0 = func_192(uParam0);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_97[0]))
	{
		return false;
	}
	ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_97[0], sVar0);
	if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_97[0], sVar0))
	{
		return true;
	}
	return false;
}

bool func_132(var uParam0, bool bParam1)
{
	var uVar0;
	__LIB_14__::func_649(1);
	if (__LIB_2__::func_448(*uParam0, joaat("BSWITCHTOEXIT"), "bSwitchToExit", 1, 1067030938 /* Float: 1.2f */, 1))
	{
		if (!func_35(uParam0, 4))
		{
			if (bParam1)
			{
				__LIB_14__::func_679(uParam0, &uVar0, 1114636288 /* Float: 60f */, -1);
			}
			func_37(uParam0, 4);
		}
		if (func_35(uParam0, 16384))
		{
			func_91(uParam0, 16384);
		}
		return true;
	}
	return false;
}

void func_133(var uParam0)
{
	char* sVar0;
	__LIB_14__::func_665(uParam0);
	sVar0 = func_192(uParam0);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_97[0], sVar0, true);
}

bool func_136(var uParam0, bool bParam1)
{
	int iVar0;
	if (__LIB_2__::func_1(Global_35, 0, 1))
	{
		if (__LIB_3__::func_138(Global_35, joaat("PROP_PLAYER_CASH_REGISTER")) || __LIB_3__::func_138(Global_35, joaat("PROP_PLAYER_CASH_REGISTER_CLERK_OPENED")))
		{
			iVar0 = func_85(uParam0);
			func_27(uParam0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[0]))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_2[0]));
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[1]))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_2[1]));
				}
			}
			if (bParam1)
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 384, false);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!ENTITY::_IS_ENTITY_FROZEN(iVar0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
				}
			}
			return true;
		}
	}
	return false;
}

bool func_140(int iParam0, bool bParam1)
{
	if (VOLUME::_DOES_VOLUME_EXIST(Local_26.f_46.f_105))
	{
		if (bParam1)
		{
			if (PED::IS_PED_DEAD_OR_DYING(iParam0, true))
			{
				return false;
			}
		}
		return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, Local_26.f_46.f_105, bParam1, 0);
	}
	return false;
}

bool func_142(var uParam0, float fParam1)
{
	int iVar0;
	if (!func_35(uParam0, 16))
	{
		if (func_56(uParam0))
		{
			func_37(uParam0, 16);
		}
	}
	else if (!func_35(uParam0, 32))
	{
		if (func_56(uParam0))
		{
			func_37(uParam0, 32);
		}
	}
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, 0) && Global_1935630.f_24)
	{
		uParam0->f_101 = 1;
		return true;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_105))
	{
		if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_105, Global_36))
		{
			return true;
		}
	}
	if (Global_1935630.f_24)
	{
		iVar0 = PED::_0x336B3D200AB007CB(Global_35, Global_36, 10f, 16896);
		if (iVar0 >= 1)
		{
			uParam0->f_101 = 1;
			return true;
		}
	}
	if (Global_1935630.f_44 == joaat("WEAPON_UNARMED"))
	{
		__LIB_1__::func_283(&(uParam0->f_87), 0);
		if (__LIB_1__::func_285(&(uParam0->f_87), 1.5f))
		{
			if (fParam1 > 4f)
			{
				return true;
			}
			else
			{
				__LIB_1__::func_148(&(uParam0->f_87));
			}
		}
	}
	else if (__LIB_0__::func_75(&(uParam0->f_87)))
	{
		__LIB_0__::func_37(&(uParam0->f_87));
	}
	if (!func_35(uParam0, 16))
	{
		if ((fParam1 < 4f || __LIB_14__::func_681(*uParam0)) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Global_35, *uParam0, 17))
		{
			if (__LIB_0__::func_75(&(uParam0->f_82)))
			{
				__LIB_0__::func_37(&(uParam0->f_82));
			}
			return false;
		}
	}
	__LIB_1__::func_283(&(uParam0->f_82), 0);
	if (__LIB_1__::func_285(&(uParam0->f_82), 3f))
	{
		return true;
	}
	if (func_35(uParam0, 16))
	{
		return true;
	}
	if (func_136(uParam0, 0))
	{
		return true;
	}
	return false;
}

void func_144()
{
	__LIB_14__::func_608(8);
}

bool func_168(var uParam0)
{
	return func_35(uParam0, 524288);
}

int func_175(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	if (!__LIB_1__::func_918(iParam0))
	{
		return 0;
	}
	if (!__LIB_2__::func_803(iParam0, &iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (__LIB_0__::func_2() == -1)
	{
		iVar1 = Global_1914319.f_3[iParam0 /*446*/].f_10;
	}
	else
	{
		iVar1 = Global_1051260.f_48[iParam0 /*78*/].f_16;
	}
	__LIB_14__::func_680(iVar0, uParam1, iVar0, bParam2, __LIB_14__::func_632(iVar1), 0, iParam3);
	return 1;
}

char* func_192(var uParam0)
{
	char* sVar0;
	if (uParam0->f_108 == -2)
	{
		uParam0->f_108 = func_309(uParam0);
	}
	sVar0 = "pblExitB";
	switch (uParam0->f_108)
	{
		case 0:
			sVar0 = "pblExitB";
			break;
		case 1:
			sVar0 = "pblExitL";
			break;
		case 2:
			sVar0 = "pblExitR";
			break;
		case 3:
			sVar0 = "pblExitBFar";
			break;
		case 4:
			sVar0 = "pblExitLFar";
			break;
		case 5:
			sVar0 = "pblExitRFar";
			break;
		case 7:
			sVar0 = "pblExitL45";
			break;
		case 6:
			sVar0 = "pblExitR45";
			break;
	}
	return sVar0;
}

bool func_212()
{
	struct<7> Var0;
	PED::SET_PED_RESET_FLAG(Local_26.f_46, 49, true);
	if (!func_35(&(Local_26.f_46), 4096))
	{
		Local_26.f_155 = func_118(&(Local_26.f_46), Local_26.f_46.f_105, 0, 0, 0.5f, 0, 1109393408 /* Float: 40f */);
		if (__LIB_14__::func_653(&(Local_26.f_46), Local_26.f_155))
		{
			PED::SET_PED_CONFIG_FLAG(Local_26.f_46, 171, true);
			return true;
		}
	}
	if (__LIB_11__::func_164(Local_26.f_46.f_66))
	{
		return false;
	}
	if (!__LIB_1__::func_935(Local_26.f_46.f_66, 4194304))
	{
		if (__LIB_0__::func_163(Global_35, 1630799643))
		{
			if ((__LIB_11__::func_117(Local_26.f_1) && __LIB_4__::func_75(Local_26.f_1)) && __LIB_9__::func_260(Local_26.f_46, 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */, 0, 1061158912 /* Float: 0.75f */))
			{
				__LIB_1__::func_283(&(Local_26.f_46.f_91), 0);
				if (__LIB_1__::func_285(&(Local_26.f_46.f_91), 0.1f))
				{
					func_37(&(Local_26.f_46), 2097152);
				}
				return false;
			}
		}
		if (((func_113(Local_26.f_46, 1) && __LIB_14__::func_681(Local_26.f_46)) && __LIB_11__::func_117(Local_26.f_1)) && __LIB_4__::func_75(Local_26.f_1))
		{
			__LIB_1__::func_283(&(Local_26.f_46.f_91), 0);
			if (__LIB_1__::func_285(&(Local_26.f_46.f_91), 0.1f))
			{
				func_37(&(Local_26.f_46), 2097152);
			}
			return false;
		}
		if (func_328(Local_26.f_46, 0, &(Local_26.f_6), &(Local_26.f_6.f_16), 0, 0))
		{
			__LIB_1__::func_283(&(Local_26.f_46.f_91), 0);
			if (__LIB_1__::func_285(&(Local_26.f_46.f_91), 0.1f))
			{
				func_37(&(Local_26.f_46), 2097152);
				if (__LIB_14__::func_651(Local_26.f_6.f_16))
				{
					func_15(16384);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_26.f_46, true);
					return true;
				}
				if (func_329(Local_26.f_6.f_16))
				{
					func_15(16384);
					return false;
				}
				__LIB_10__::func_238(&(Local_26.f_6), &(Local_26.f_6.f_16));
				return true;
			}
			return false;
		}
		if (VOLUME::_DOES_VOLUME_EXIST(Local_26.f_46.f_105))
		{
			__LIB_7__::func_465(Local_26.f_46.f_105, &Var0);
			if ((!__LIB_0__::func_86(Var0) && !__LIB_0__::func_86(Var0.f_3)) && Var0.f_6 > 0f)
			{
				if (MISC::IS_BULLET_IN_ANGLED_AREA(Var0, Var0.f_3, Var0.f_6, false))
				{
					func_15(16384);
					return false;
				}
			}
		}
	}
	return false;
}

void func_214()
{
	if (func_16(16))
	{
		func_332(16);
	}
}

bool func_222()
{
	char* sVar0;
	if (func_16(128))
	{
		return false;
	}
	sVar0 = "SHOP_CLERK_REGROBSTART";
	__LIB_2__::func_461(0);
	if (__LIB_2__::func_478(Local_26.f_46, Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
	{
		func_15(128);
		return true;
	}
	return false;
}

bool func_223(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_1__::func_921(uParam0->f_66);
	if (iVar0 != 6 && __LIB_0__::func_12() != 92)
	{
		return false;
	}
	if (__LIB_0__::func_12() == 105 && __LIB_2__::func_230())
	{
		return false;
	}
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, 0))
	{
		return false;
	}
	if (__LIB_2__::func_157(uParam0->f_105, Global_36))
	{
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_105, __LIB_2__::func_114(Global_35, 0.5f)))
		{
			return true;
		}
	}
	return false;
}

void func_230(var uParam0, int* iParam1, int iParam2, int iParam3)
{
	WEAPON::REMOVE_ALL_PED_WEAPONS(*uParam0, true, true);
	__LIB_2__::func_272(*uParam0, iParam3, -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	__LIB_14__::func_672(uParam0, iParam1, iParam2);
}

int func_231(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_937(uParam0->f_66, 1024);
	}
	else
	{
		__LIB_1__::func_936(uParam0->f_66, 1024);
	}
	if (bParam1)
	{
		__LIB_14__::func_673(*uParam0, 1);
		return 1;
	}
	return 0;
}

void func_235(var uParam0, char* sParam1, bool bParam2)
{
	char[] cVar0[8];
	if (!func_35(uParam0, 524288))
	{
		__LIB_3__::func_158(&(uParam0->f_29[0 /*17*/]), 0);
		__LIB_2__::func_602(&(uParam0->f_29[0 /*17*/]), "ROB_REGISTER", sParam1, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
		uParam0->f_29[0 /*17*/].f_9 = 3;
	}
	if (!bParam2)
	{
		return;
	}
	switch (uParam0->f_66)
	{
		case 29:
		case 61:
			cVar0 = "SR_ROB_ILO_BASEMENT";
			break;
		case 43:
		case 73:
			cVar0 = "SR_ROB_ILO_BACKROOM";
			break;
	}
	if (!func_35(uParam0, 65536))
	{
		__LIB_3__::func_158(&(uParam0->f_29[1 /*17*/]), 0);
		__LIB_2__::func_602(&(uParam0->f_29[1 /*17*/]), cVar0, "", joaat("INPUT_INTERACT_OPTION1"), 0, 0, 0, 1, 0);
		uParam0->f_29[1 /*17*/].f_9 = 3;
	}
}

void func_236(var uParam0)
{
	bool bVar0;
	if (func_35(uParam0, 524288) || uParam0->f_7[0 /*21*/].f_1 == 0)
	{
		return;
	}
	bVar0 = func_248(uParam0, 3f);
	if (!uParam0->f_104)
	{
		if (bVar0)
		{
			uParam0->f_29[0 /*17*/].f_13 = "PLAYER_HOLDUP_ROB_FAR";
			uParam0->f_104 = 1;
		}
	}
	else if (!bVar0)
	{
		uParam0->f_29[0 /*17*/].f_13 = "PLAYER_HOLDUP_ROB";
		uParam0->f_104 = 0;
	}
}

void func_237(var uParam0, bool bParam1)
{
	__LIB_3__::func_158(&(uParam0->f_29[0 /*17*/]), 1);
	if (bParam1)
	{
		__LIB_3__::func_158(&(uParam0->f_29[1 /*17*/]), 1);
	}
}

int func_239(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_348(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_3__::func_156(iParam1, uParam3, uParam0);
	}
	if (!*iParam4)
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

void func_242(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!__LIB_1__::func_489(&(uParam0->f_29[0 /*17*/]), 0))
		{
			__LIB_2__::func_411(&(uParam0->f_29[0 /*17*/]), 1, 0);
		}
		if (bParam2)
		{
			if (!__LIB_1__::func_489(&(uParam0->f_29[1 /*17*/]), 0))
			{
				__LIB_2__::func_411(&(uParam0->f_29[1 /*17*/]), 1, 0);
			}
		}
	}
	else
	{
		if (__LIB_1__::func_489(&(uParam0->f_29[0 /*17*/]), 0))
		{
			__LIB_2__::func_411(&(uParam0->f_29[0 /*17*/]), 0, 0);
		}
		if (bParam2)
		{
			if (__LIB_1__::func_489(&(uParam0->f_29[1 /*17*/]), 0))
			{
				__LIB_2__::func_411(&(uParam0->f_29[1 /*17*/]), 0, 0);
			}
		}
	}
}

bool func_244(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, int iParam29)
{
	if (func_35(uParam0, 4) && func_328(*uParam0, 0, &uParam1, &iParam29, 0, 0))
	{
		if (__LIB_14__::func_651(iParam29))
		{
			return true;
		}
	}
	return false;
}

int func_248(var uParam0, float fParam1)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	float fVar7;
	float fVar8;
	float fVar9;
	if (!func_35(uParam0, 33554432))
	{
		return 1;
	}
	if (!__LIB_2__::func_1(*uParam0, 0, 1))
	{
		return 1;
	}
	if (fParam1 != 30f)
	{
		fParam1 = 30f;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
	iVar3 = func_85(uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar3, true, false) };
	}
	fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, uParam0->f_75, false);
	fVar8 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_75, false);
	fVar9 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar4, false);
	if (fVar8 < 2f && fVar8 < fVar7)
	{
		if (fVar8 < fVar9)
		{
			return 1;
		}
	}
	if ((fVar7 > 4f && fVar8 < 4f) && fVar8 < fVar7)
	{
		return 1;
	}
	if (PED::_IS_PED_HOGTIED(*uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_249(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_97[0], "pblExitB");
	if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_97[0], "pblExitB"))
	{
		iVar0 = func_85(uParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (uParam0->f_85 < 0f)
			{
				vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0.074814f, -0.117756f, 0.059386f) };
				uParam0->f_2[0] = OBJECT::CREATE_OBJECT(joaat("P_CS_BILLSINGLE01BX"), vVar1, true, true, false, false, true);
				vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -0.082664f, -0.117757f, 0.059386f) };
				uParam0->f_2[1] = OBJECT::CREATE_OBJECT(joaat("P_CS_BILLSINGLE01BX"), vVar1, true, true, false, false, true);
				uParam0->f_5 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(iVar0, joaat("PROP_PLAYER_CASH_REGISTER_CLERK_OPENED"), 0f, 0f, 0f, 0f, 0, 0, 1);
				if (!__LIB_0__::func_138(__LIB_14__::func_666(uParam0->f_97[0], "pblExitB"), ENTITY::GET_ENTITY_COORDS(iVar0, true, false)))
				{
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_97[0], ENTITY::GET_ENTITY_COORDS(iVar0, true, false), ENTITY::GET_ENTITY_ROTATION(iVar0, 2), 2);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_97[0], "CLERK", *uParam0, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_97[0], "REGISTER", iVar0, 0);
				}
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_97[0], "OOXO", uParam0->f_2[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_97[0], "OXOO", uParam0->f_2[1], 0);
				PED::SET_PED_MOVE_ANIMS_BLEND_OUT(*uParam0);
				uParam0->f_85 = __LIB_0__::func_36();
			}
			else if ((__LIB_0__::func_36() - uParam0->f_85) >= 0.2f)
			{
				TASK::CLEAR_PED_TASKS(*uParam0, true, false);
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_97[0]);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_97[0], "pblExitB", true);
				return true;
			}
		}
		else
		{
			if (func_35(uParam0, 33554432))
			{
				func_91(uParam0, 33554432);
			}
			func_13(uParam0);
		}
	}
	return false;
}

void func_250(var uParam0)
{
	int iVar0[2];
	if (!func_35(uParam0, 1))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_2[0], true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_2[1], true);
		TASK::_0x8360C47380B6F351(uParam0->f_5, uParam0->f_2[0], "OOXO", 1);
		TASK::_0x8360C47380B6F351(uParam0->f_5, uParam0->f_2[1], "OXOO", 1);
		iVar0[0] = TASK::_GET_SCENARIO_POINT_ENTITY(uParam0->f_5, "OXOO");
		iVar0[1] = TASK::_GET_SCENARIO_POINT_ENTITY(uParam0->f_5, "OOXO");
		if (ENTITY::DOES_ENTITY_EXIST(iVar0[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0[0], true);
			ENTITY::SET_ENTITY_COLLISION(iVar0[0], true, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0[1]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0[1], true);
			ENTITY::SET_ENTITY_COLLISION(iVar0[1], true, false);
		}
		func_37(uParam0, 1);
	}
}

int func_309(var uParam0)
{
	int iVar0[8];
	int iVar9;
	iVar0[0] = 0;
	iVar0[1] = 2;
	iVar0[2] = 1;
	iVar0[3] = 0;
	iVar0[4] = 0;
	iVar0[5] = 0;
	iVar0[7] = 0;
	iVar0[6] = 0;
	switch (uParam0->f_66)
	{
		case 0:
			iVar0[0] = 1;
			iVar0[1] = 2;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 3;
			iVar0[5] = 2;
			break;
		case 7:
			iVar0[0] = 1;
			iVar0[1] = 1;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 2;
			iVar0[5] = 0;
			iVar0[6] = 3;
			break;
		case 8:
			iVar0[0] = 1;
			iVar0[1] = 3;
			iVar0[2] = 0;
			iVar0[3] = 0;
			iVar0[4] = 0;
			iVar0[5] = 0;
			break;
		case 17:
			iVar0[0] = 1;
			iVar0[1] = 0;
			iVar0[2] = 1;
			iVar0[3] = 2;
			iVar0[4] = 0;
			iVar0[5] = 3;
			break;
		case 19:
			iVar0[0] = 1;
			iVar0[1] = 0;
			iVar0[2] = 3;
			iVar0[3] = 0;
			iVar0[4] = 0;
			iVar0[5] = 0;
			break;
		case 22:
			break;
		case 28:
			iVar0[0] = 0;
			iVar0[1] = 2;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 3;
			iVar0[5] = 1;
			break;
		case 29:
			iVar0[0] = 2;
			iVar0[1] = 1;
			iVar0[2] = 1;
			iVar0[3] = 3;
			iVar0[4] = 2;
			iVar0[5] = 1;
			break;
		case 39:
			iVar0[0] = 0;
			iVar0[1] = 2;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 3;
			iVar0[5] = 1;
			break;
		case 42:
			iVar0[0] = 0;
			iVar0[1] = 2;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 3;
			iVar0[5] = 1;
			break;
		case 41:
			iVar0[0] = 0;
			iVar0[1] = 2;
			iVar0[2] = 2;
			iVar0[3] = 0;
			iVar0[4] = 3;
			iVar0[5] = 1;
			break;
		case 43:
			iVar0[0] = 1;
			iVar0[1] = 1;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 2;
			iVar0[5] = 0;
			iVar0[6] = 3;
			break;
		case 47:
			iVar0[0] = 2;
			iVar0[1] = 1;
			iVar0[2] = 2;
			iVar0[3] = 2;
			iVar0[4] = 3;
			iVar0[5] = 0;
			break;
		case 61:
			iVar0[0] = 0;
			iVar0[1] = 2;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 3;
			iVar0[5] = 1;
			break;
		case 73:
			iVar0[0] = 2;
			iVar0[1] = 1;
			iVar0[2] = 2;
			iVar0[3] = 2;
			iVar0[4] = 1;
			iVar0[5] = 3;
			break;
		case 74:
			iVar0[0] = 1;
			iVar0[1] = 1;
			iVar0[2] = 2;
			iVar0[3] = 3;
			iVar0[4] = 2;
			iVar0[5] = 2;
			break;
		case 75:
			iVar0[0] = 1;
			iVar0[1] = 2;
			iVar0[2] = 1;
			iVar0[3] = 1;
			iVar0[4] = 3;
			iVar0[5] = 1;
			break;
		case 82:
			iVar0[0] = 0;
			iVar0[1] = 1;
			iVar0[2] = 2;
			iVar0[3] = 0;
			iVar0[4] = 0;
			iVar0[5] = 3;
			break;
		case 87:
			iVar0[0] = 1;
			iVar0[1] = 0;
			iVar0[2] = 2;
			iVar0[3] = 0;
			iVar0[4] = 0;
			iVar0[5] = 3;
			break;
		case 90:
			iVar0[0] = 1;
			iVar0[1] = 2;
			iVar0[2] = 0;
			iVar0[3] = 1;
			iVar0[4] = 3;
			iVar0[5] = 0;
			break;
		case 91:
			iVar0[0] = 0;
			iVar0[1] = 1;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 1;
			iVar0[5] = 2;
			iVar0[6] = 3;
			break;
		case 95:
			iVar0[0] = 1;
			iVar0[1] = 0;
			iVar0[2] = 2;
			iVar0[3] = 0;
			iVar0[4] = 0;
			iVar0[5] = 3;
			break;
	}
	iVar9 = __LIB_19__::func_352(uParam0, &iVar0);
	return iVar9;
}

bool func_328(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		__LIB_5__::func_686(uParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_968(iParam0, uParam2))
			{
				*uParam3 = 128;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (__LIB_11__::func_603(iParam0, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (__LIB_2__::func_969(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_4__::func_235(iParam0, uParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_1__::func_395(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_875(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (__LIB_2__::func_971(iParam0, uParam2))
				{
					*uParam3 = 32;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
					{
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
				{
					*uParam3 = 2;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam3 = 2;
								__LIB_2__::func_831(iParam0, uParam2, *uParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_840(uParam2, iParam0) || (uParam2->f_9 > 0 && (__LIB_0__::func_485() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (__LIB_5__::func_678(uParam2, iParam0))
			{
				*uParam3 = 1024;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_867(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (__LIB_5__::func_683(iParam0, uParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, uParam2))
				{
					*uParam3 = 32768;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, uParam2))
					{
						*uParam3 = 512;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_834(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(uParam2, iParam0))
			{
				*uParam3 = 1;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_329(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 16:
		case 32:
		case 64:
		case 128:
		case 2048:
		case 8192:
		case 32768:
			return true;
		default:
			break;
	}
	return false;
}

void func_332(int iParam0)
{
	Local_26.f_2 = (Local_26.f_2 - (Local_26.f_2 && iParam0));
}

int func_348(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_348(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

