#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<130> Local_3 = { 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		__LIB_0__::func_19(&(Local_3.f_99), 10);
	}
	while (true)
	{
		func_2();
		if (Local_3.f_99 < 10)
		{
			if (func_3())
			{
				__LIB_0__::func_19(&(Local_3.f_99), 10);
			}
		}
		switch (Local_3.f_99)
		{
			case 0:
				if (func_4(&ScriptParam_0))
				{
					__LIB_0__::func_19(&(Local_3.f_99), 1);
				}
				break;
			case 1:
				if (func_5())
				{
					__LIB_0__::func_19(&(Local_3.f_99), 2);
				}
				break;
			case 2:
				if (func_6())
				{
					__LIB_0__::func_19(&(Local_3.f_99), 3);
				}
				break;
			case 3:
				if (func_7())
				{
					__LIB_0__::func_19(&(Local_3.f_99), 5);
				}
				break;
			case 5:
				if (!__LIB_0__::func_51(&(Local_3.f_102), 8))
				{
					func_9(&Local_3);
				}
				__LIB_0__::func_19(&(Local_3.f_99), 6);
				break;
			case 6:
				if (Local_3.f_129)
				{
					if (!__LIB_0__::func_51(&(Local_3.f_102), 8))
					{
						func_9(&Local_3);
					}
					if (__LIB_5__::func_59(Local_3.f_106, 0, 0, 0))
					{
						if (!__LIB_0__::func_139(Local_3.f_106.f_3))
						{
							PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_3.f_106, 7, 2, 0);
							Local_3.f_106.f_3 = __LIB_3__::func_905(__LIB_2__::func_460(12), joaat("INPUT_INTERACT_LOCKON_ROB"), Local_3.f_110[0], 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
							__LIB_2__::func_369(Local_3.f_106.f_3, Local_3.f_106, 0, 1, -1);
							PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_3.f_106, 7, 2, 0);
						}
						else
						{
							__LIB_1__::func_221(Local_3.f_106.f_3, 1, 1);
						}
					}
					else if (__LIB_0__::func_139(Local_3.f_106.f_3))
					{
						__LIB_1__::func_748(&(Local_3.f_106.f_3), 0, 1);
					}
					__LIB_0__::func_19(&(Local_3.f_99), 7);
				}
				else if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, 0))
				{
					if (!__LIB_0__::func_51(&(Local_3.f_102), 8))
					{
						func_9(&Local_3);
					}
					__LIB_0__::func_19(&(Local_3.f_99), 10);
				}
				break;
			case 7:
				if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
				{
					__LIB_0__::func_19(&(Local_3.f_99), 10);
				}
				else if (func_18(&Local_3))
				{
					func_19();
					__LIB_0__::func_19(&(Local_3.f_99), 8);
				}
				else if (!Local_3.f_129)
				{
					__LIB_1__::func_748(&(Local_3.f_106.f_3), 1, 1);
					__LIB_0__::func_19(&(Local_3.f_99), 6);
				}
				break;
			case 8:
				if (func_20())
				{
					__LIB_0__::func_19(&(Local_3.f_99), 9);
				}
				break;
			case 9:
				break;
			case 10:
				func_21(&Local_3, ScriptParam_0);
				break;
		}
		BUILTIN::WAIT(0);
	}
}

void func_2()
{
	switch (Local_3.f_126)
	{
		case 1:
			Local_3.f_129 = func_22(&Local_3, 0);
			break;
		case 0:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	Local_3.f_126++;
	if (Local_3.f_126 >= 4)
	{
		Local_3.f_126 = 0;
	}
}

bool func_3()
{
	switch (Local_3.f_126)
	{
		case 0:
			if (__LIB_0__::func_296(16, 0, 1) || __LIB_10__::func_617(2))
			{
				return true;
			}
			break;
		case 1:
			if (!__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				if (func_25())
				{
					return true;
				}
			}
			else if (__LIB_1__::func_923())
			{
				if (func_25())
				{
					return true;
				}
			}
			else
			{
				return true;
			}
			break;
		case 3:
			if (Local_3.f_99 > 1)
			{
				if (!Local_3.f_129)
				{
					if (!__LIB_10__::func_680())
					{
						return true;
					}
				}
			}
			break;
	}
	return false;
}

bool func_4(var uParam0)
{
	if (!__LIB_0__::func_29(uParam0->f_2))
	{
		return false;
	}
	if (!__LIB_2__::func_1(Local_3.f_106, 0, 1))
	{
		Local_3.f_106 = __LIB_2__::func_963(uParam0->f_2);
		Local_3.f_106.f_1 = uParam0->f_2;
		if (!__LIB_2__::func_1(Local_3.f_106, 0, 1))
		{
			return false;
		}
		PED::SET_PED_CAN_BE_TARGETTED(Local_3.f_106, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3.f_106, true);
		PED::SET_PED_CONFIG_FLAG(Local_3.f_106, 178, true);
		PED::SET_PED_CONFIG_FLAG(Local_3.f_106, 130, false);
		PED::SET_PED_CONFIG_FLAG(Local_3.f_106, 297, true);
		PED::SET_PED_CONFIG_FLAG(Local_3.f_106, 234, true);
		PED::SET_PED_CONFIG_FLAG(Local_3.f_106, 235, true);
		Local_3.f_98 = uParam0->f_3;
		Local_3.f_103 = { func_31(Local_3.f_98) };
		return true;
	}
	return false;
}

bool func_5()
{
	func_32(&Local_3);
	return true;
}

bool func_6()
{
	STREAMING::REQUEST_ANIM_DICT(func_33(0));
	PED::_0xED9582B3DA8F02B4(1);
	return true;
}

bool func_7()
{
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_33(0)))
	{
		return false;
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		return false;
	}
	return true;
}

void func_9(var uParam0)
{
	switch (uParam0->f_98)
	{
		case 3:
			func_34(uParam0, 1, 0);
			break;
		case 1:
			func_34(uParam0, 2, 0);
			func_34(uParam0, 3, 0);
			break;
		case 2:
			func_34(uParam0, 2, 0);
			func_35(uParam0, 3);
			break;
		case 0:
			func_34(uParam0, 0, 0);
			func_34(uParam0, 1, 0);
			func_34(uParam0, 2, 0);
			func_34(uParam0, 3, 0);
			break;
	}
}

bool func_18(var uParam0)
{
	if (__LIB_1__::func_732(uParam0->f_106.f_3, 1))
	{
		EVENT::_0x7C511E91738A0828(uParam0->f_106, Global_35, 41, 0);
		__LIB_1__::func_221(uParam0->f_106.f_3, 0, 1);
	}
	if (uParam0->f_129)
	{
		if ((func_50() || PED::IS_PED_SHOOTING(Global_35)) || PED::_GET_LASSO_TARGET(Global_35) != 0)
		{
			return true;
		}
	}
	return false;
}

void func_19()
{
	__LIB_0__::func_7(&(Local_3.f_102), 1);
	__LIB_0__::func_15(__LIB_0__::func_14(joaat("BANK_ROBBERIES_STARTED")), 1);
	__LIB_0__::func_105(1);
	func_55(&Local_3);
	func_56(&Local_3, 30f, 30f);
	Local_3.f_106 = __LIB_2__::func_965(Local_3.f_106.f_1, 0, 0, 0, 1, 1);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_3.f_106, true, true);
	__LIB_2__::func_303(Global_35, Local_3.f_106, func_58(&Local_3), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
}

bool func_20()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	if (!__LIB_0__::func_51(&(Local_3.f_102), 2))
	{
		if (PED::_0x285D36C5C72B0569(Global_35) < 0.5f)
		{
			func_56(&Local_3, 60f, 60f);
		}
	}
	switch (Local_3.f_100)
	{
		case 0:
			if (__LIB_2__::func_1(Local_3.f_106, 0, 1))
			{
				__LIB_2__::func_357(Local_3.f_106, Global_36, 1, 0, 3);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_PLAY_ANIM(0, func_33(0), "enter_hands_up", 2f, -8f, -1, 0, 0f, false, 0, false, 0, false);
				TASK::TASK_PLAY_ANIM(0, func_33(0), "hands_up_loop", 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
				__LIB_1__::func_474(Local_3.f_106, &iVar0, 0, 0, 1, 1);
			}
			__LIB_0__::func_19(&(Local_3.f_100), 1);
			break;
		case 1:
			if (__LIB_2__::func_1(Local_3.f_106, 0, 0))
			{
				if (!__LIB_0__::func_51(&(Local_3.f_106.f_2), 1))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(0, func_33(0), "hands_up_loop", 1) || TASK::GET_SEQUENCE_PROGRESS(Local_3.f_106) > 0)
					{
						__LIB_0__::func_7(&(Local_3.f_106.f_2), 1);
					}
				}
				if (func_65(&Local_3))
				{
					func_66(&Local_3);
					vVar1 = { func_67(&Local_3) };
					fVar4 = func_68(&Local_3);
					__LIB_3__::func_912(0, &Local_3, Local_3.f_106, Global_35, func_69(&Local_3), 0, 1116471296 /* Float: 70f */, 0, 0, 0, 1);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_3.f_106, vVar1, 2f, 20000, 0.25f, 0, fVar4);
					func_56(&Local_3, 30f, 30f);
					__LIB_0__::func_19(&(Local_3.f_100), 2);
				}
			}
			break;
		case 2:
			if (__LIB_2__::func_1(Local_3.f_106, 0, 0))
			{
				vVar1 = { func_67(&Local_3) };
				fVar4 = func_68(&Local_3);
				if (ENTITY::IS_ENTITY_AT_COORD(Local_3.f_106, vVar1, 0.25f, 0.25f, 2f, false, true, 0))
				{
					TASK::TASK_COWER(Local_3.f_106, -1, 0, 0);
					__LIB_0__::func_19(&(Local_3.f_100), 3);
				}
				else if (!__LIB_0__::func_163(Local_3.f_106, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_3.f_106, vVar1, 2f, 20000, 0.25f, 0, fVar4);
				}
			}
			break;
		case 3:
			break;
		case 4:
			return true;
	}
	return false;
}

void func_21(var uParam0, vector3 vParam1, var uParam4)
{
	int iVar0;
	switch (uParam0->f_127)
	{
		case 0:
			uParam0->f_127++;
			break;
		case 1:
			iVar0 = uParam0->f_128;
			if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_110[iVar0]))
			{
				POPULATION::_0x74C2B3DC0B294102(uParam0->f_110[iVar0]);
				POPULATION::_0xA1CFB35069D23C23(uParam0->f_110[iVar0]);
				__LIB_0__::func_172(uParam0->f_110[iVar0]);
			}
			if (iVar0 >= 5)
			{
				uParam0->f_128 = 0;
				uParam0->f_127++;
			}
			else
			{
				uParam0->f_128++;
			}
			break;
		case 2:
			uParam0->f_127++;
			break;
		case 3:
			if (__LIB_2__::func_763(vParam1.z, 1))
			{
				__LIB_2__::func_753(vParam1.z, 0, 1, 0, 0);
			}
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
}

int func_22(var uParam0, int iParam1)
{
	return func_75(uParam0, Global_35, iParam1);
}

bool func_25()
{
	if (Local_3.f_98 != -1)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_31(Local_3.f_98), false) >= 60f)
		{
			return true;
		}
	}
	return false;
}

Vector3 func_31(int iParam0)
{
	return Global_1934182[iParam0 /*18*/].f_1;
}

void func_32(var uParam0)
{
	switch (uParam0->f_98)
	{
		case 3:
			uParam0->f_110[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-815.997f, -1276.168f, 44.322f, 0f, 0f, 0f, 12.8f, 6.8f, 4f, "volBankMain");
			uParam0->f_110[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-815.998f, -1277.961f, 44.178f, 0f, 0f, 0f, 12.558f, 2.939f, 2.934f, "volClientArea");
			uParam0->f_110[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-813.739f, -1274.487f, 44.022f, 0f, 0f, 0f, 8.027f, 2.914f, 2.477f, "volClerkArea");
			break;
		case 0:
			uParam0->f_110[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBankMain");
			VOLUME::_0x39816F6F94F385AD(uParam0->f_110[0], 2645.768f, -1295.391f, 53.303f, 0f, 0f, -64.957f, 20.566f, 16.072f, 4.062f);
			VOLUME::_0xBCE668AAF83608BE(uParam0->f_110[0], 2649.724f, -1304.401f, 52.738f, 0f, 0f, -19.794f, 3f, 3f, 3f);
			uParam0->f_110[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volClientArea");
			VOLUME::_0xBCE668AAF83608BE(uParam0->f_110[1], 2645.607f, -1295.471f, 52.738f, 0f, 0f, -19.794f, 5.5f, 5.5f, 1.5f);
			VOLUME::_0x39816F6F94F385AD(uParam0->f_110[1], 2643.956f, -1291.68f, 52.76f, 0f, 0f, 24.969f, 15.917f, 12.455f, 3f);
			uParam0->f_110[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volClerkArea");
			VOLUME::_0xBCE668AAF83608BE(uParam0->f_110[2], 2645.607f, -1295.471f, 51.633f, 0f, 0f, -19.794f, 2.5f, 2.5f, 1.5f);
			VOLUME::_0x39816F6F94F385AD(uParam0->f_110[2], 2648.707f, -1302.078f, 53.433f, 0f, 0f, 24.969f, 2.237f, 10.885f, 4.307f);
			VOLUME::_0x39816F6F94F385AD(uParam0->f_110[2], 2649.545f, -1303.876f, 53.459f, 0f, 0f, 24.969f, 3.444f, 6.203f, 4.35f);
			VOLUME::_0x39816F6F94F385AD(uParam0->f_110[2], 2649.368f, -1303.494f, 53.459f, 0f, 0f, 24.969f, 6.123f, 4.182f, 4.35f);
			break;
		case 1:
			uParam0->f_110[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1288.882f, -1306.037f, 78.31914f, 0f, 0f, -39.72215f, 11.436f, 19.382f, 3.901308f, "volBankMain");
			uParam0->f_110[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volClientArea");
			VOLUME::_0x39816F6F94F385AD(uParam0->f_110[1], 1293.686f, -1300.426f, 77.73367f, 0f, 0f, -39.72215f, 11.48132f, 4.806484f, 4.341565f);
			VOLUME::_0x39816F6F94F385AD(uParam0->f_110[1], 1288.775f, -1299.621f, 77.73367f, 0f, 0f, -129.722f, 9.757624f, 3.109288f, 4.341565f);
			VOLUME::_0x39816F6F94F385AD(uParam0->f_110[1], 1289.892f, -1300.947f, 77.73367f, 0f, 0f, 5.277998f, 3.825557f, 1.742847f, 4.341565f);
			uParam0->f_110[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volClerkArea");
			VOLUME::_0x39816F6F94F385AD(uParam0->f_110[2], 1282.856f, -1307.465f, 77.799f, 0f, 0f, -39.72215f, 3.978764f, 8.991151f, 3.25f);
			VOLUME::_0x39816F6F94F385AD(uParam0->f_110[2], 1290.426f, -1307.595f, 77.734f, 0f, 0f, -39.72215f, 7.086f, 9.381f, 4.342f);
			VOLUME::_0x39816F6F94F385AD(uParam0->f_110[2], 1287.06f, -1305.533f, 77.734f, 0f, 0f, -39.72215f, 1.132267f, 8.370426f, 4.342f);
			break;
		case 2:
			uParam0->f_110[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-306.46f, 770.943f, 119.808f, 0f, 0f, 9.999998f, 10f, 17.8f, 4.8f, "volBankMain");
			uParam0->f_110[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volClientArea");
			VOLUME::_0x39816F6F94F385AD(uParam0->f_110[1], -307.351f, 776.514f, 119.808f, 0f, 0f, 9.999998f, 9.616f, 5f, 4.8f);
			VOLUME::_0x39816F6F94F385AD(uParam0->f_110[1], -303.311f, 775.092f, 119.808f, 0f, 0f, 9.999998f, 1.862f, 9.193705f, 4.8f);
			VOLUME::_0x39816F6F94F385AD(uParam0->f_110[1], -304.055f, 774.803f, 119.544f, 0f, 0f, 55.55931f, 2.170487f, 2.343747f, 3.762657f);
			uParam0->f_110[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volClerkArea");
			VOLUME::_0x39816F6F94F385AD(uParam0->f_110[2], -308.974f, 772.681f, 119.808f, 0f, 0f, 10.57594f, 5.140851f, 4.527046f, 4.8f);
			VOLUME::_0x39816F6F94F385AD(uParam0->f_110[2], -305.889f, 772.404f, 119.808f, 0f, 0f, 10.57594f, 3.724f, 2.34508f, 4.8f);
			VOLUME::_0x39816F6F94F385AD(uParam0->f_110[2], -306.25f, 767.973f, 119.808f, 0f, 0f, -34.63f, 3.298415f, 2.904014f, 4.8f);
			VOLUME::_0x39816F6F94F385AD(uParam0->f_110[2], -302.045f, 764.4305f, 119.808f, 0f, 0f, 9.999998f, 2.035f, 8.676f, 4.8f);
			uParam0->f_110[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-302.2949f, 769.3945f, 117.7031f, 0f, 0f, 0f, 1f, 1f, 2f, "lawRestriction");
			POPULATION::_0xB56D41A694E42E86(uParam0->f_110[4], 0, 0, 0, -1, -1, 0);
			POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_110[4], 0, 0, 0, -1, -1, 0);
			break;
	}
}

char* func_33(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script_proc@robberies@bank@valbankig1_2_teller";
		default:
			break;
	}
	return "Missing anim dict";
}

void func_34(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = func_90(uParam0, iParam1);
	if (!__LIB_0__::func_30(iVar0))
	{
	}
	if (bParam2)
	{
		__LIB_9__::func_707(iVar0, 1);
	}
	else
	{
		__LIB_3__::func_123(iVar0, 1);
	}
}

void func_35(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = func_90(uParam0, iParam1);
	if (!__LIB_0__::func_30(iVar0))
	{
	}
	__LIB_3__::func_124(iVar0, 1);
}

bool func_50()
{
	if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM")))
	{
		if (WEAPON::_0xCB690F680A3EA971(Global_35, 6))
		{
			return true;
		}
	}
	return false;
}

void func_55(var uParam0)
{
	uParam0->f_117[0] = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DANGEROUS_NEW"), Global_35, -1f, 15f, 25f, -1f, -1f, 180f, false, false, -1, -1);
}

void func_56(var uParam0, float fParam1, float fParam2)
{
	if (!__LIB_0__::func_51(&(uParam0->f_102), 2))
	{
		__LIB_0__::func_267(1);
		LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_BANK_ROBBERY"), 0, fParam2, fParam2, 0, fParam1, fParam1, 0);
		__LIB_0__::func_7(&(uParam0->f_102), 2);
	}
}

char* func_58(var uParam0)
{
	if (__LIB_0__::func_181())
	{
		return "ROB_MALE";
	}
	return "ROB_GENERAL";
}

bool func_65(var uParam0)
{
	if (!__LIB_0__::func_51(&(uParam0->f_106.f_2), 1))
	{
		return false;
	}
	if (uParam0->f_129)
	{
		if (__LIB_5__::func_71(uParam0->f_106, 1090519040 /* Float: 8f */, 1103626240 /* Float: 25f */, 1097859072 /* Float: 15f */, 0))
		{
			if (__LIB_0__::func_75(&(uParam0->f_119)))
			{
				__LIB_0__::func_37(&(uParam0->f_119));
			}
			return false;
		}
	}
	__LIB_1__::func_283(&(uParam0->f_119), 0);
	if (__LIB_1__::func_285(&(uParam0->f_119), 1f))
	{
		return true;
	}
	return false;
}

void func_66(var uParam0)
{
	switch (uParam0->f_98)
	{
		case 2:
			func_35(uParam0, 3);
			break;
	}
}

Vector3 func_67(var uParam0)
{
	switch (uParam0->f_98)
	{
		case 3:
			return -811.6213f, -1274.449f, 42.7727f;
		case 0:
			return 2650.946f, -1301.704f, 51.2461f;
		case 1:
			return 1284.215f, -1304.791f, 76.03969f;
		case 2:
			return -307.9412f, 768.012f, 117.7031f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_68(var uParam0)
{
	switch (uParam0->f_98)
	{
		case 3:
			return 269.5828f;
		case 0:
			return 268.1955f;
		case 1:
			return 25.4947f;
		case 2:
			return 211f;
		default:
			break;
	}
	return 0f;
}

char* func_69(var uParam0)
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (iVar0)
	{
		case 0:
			return "BRS_CLERK_FLEE_1";
		case 1:
			return "BRS_CLERK_FLEE_2";
		case 2:
			return "BRS_CLERK_FLEE_3";
		default:
			break;
	}
	return "BRS_CLERK_FLEE_1";
}

int func_75(var uParam0, int iParam1, int iParam2)
{
	if (__LIB_1__::func_205(iParam1, uParam0->f_110[iParam2], 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_90(var uParam0, int iParam1)
{
	switch (uParam0->f_98)
	{
		case 3:
			switch (iParam1)
			{
				case 0:
					return 531022111;
				case 1:
					return 2117902999;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -977211145;
				case 1:
					return -1206757990;
				case 2:
					return 1634148892;
				case 3:
					return 2058564250;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -408139633;
				case 1:
					return -1652509687;
				case 2:
					return 1340831050;
				case 3:
					return -576346876;
				default:
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1830999060;
				case 1:
					return 965922748;
				case 2:
					return 1634115439;
				case 3:
					return 1751238140;
				default:
					break;
			}
			break;
	}
	return 0;
}

