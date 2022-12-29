#region Local Var
	bool bLocal_0 = false;
	bool bLocal_1 = false;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	struct<1071> Local_8 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -262339715, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 180000, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 1092616192;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	int iLocal_1141 = 0;
	var uLocal_1142 = 0;
	int iLocal_1143[17] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	float fLocal_1168 = 0f;
	float fLocal_1169 = 0f;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
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
	bool bVar1;
	bool bVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	fLocal_1168 = 1f;
	fLocal_1169 = 1f;
	bVar0 = false;
	bVar1 = false;
	bVar2 = false;
	Local_8.f_15 = 0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(&Local_8);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
	{
		func_1(&Local_8);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (ScriptParam_0 == 1)
	{
		Local_8.f_14 = 1;
	}
	if (!Local_8.f_14 && __LIB_0__::func_1(Global_1394141.f_1326, -2147483648))
	{
		__LIB_1__::func_993(&(Global_1394141.f_1326), -2147483648);
	}
	Local_8 = ScriptParam_0.f_1;
	Local_8.f_42 = { 2553.875f, -1313.143f, 48.2166f };
	Local_8.f_45 = { 2546.522f, -1306.835f, 48.26664f };
	if (!Local_8.f_1070)
	{
		Local_8.f_1058 = 180000;
	}
	while (true)
	{
		bVar1 = __LIB_1__::func_205(Global_35, Global_1394141.f_7[Local_8 /*31*/].f_4, 1, 0);
		bVar2 = __LIB_1__::func_205(Global_35, Local_8.f_35[3], 1, 0);
		fVar3 = __LIB_0__::func_94(Global_35, Global_1394141.f_7[Local_8 /*31*/].f_1, 1);
		if ((!__LIB_0__::func_1(Local_8.f_16, 64) && bVar1) && !Local_8.f_1070)
		{
			__LIB_2__::func_761(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 200f, 0, 0);
			__LIB_1__::func_581(&(Local_8.f_16), 64);
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			if (__LIB_16__::func_505(&Local_8) < 10)
			{
				__LIB_16__::func_557(&Local_8, 10);
			}
		}
		if (!Local_8.f_14)
		{
			__LIB_0__::func_319(256);
			if ((__LIB_16__::func_505(&Local_8) < 10 && __LIB_16__::func_719(Local_8)) && !bVar1)
			{
				__LIB_1__::func_581(&(Global_1394141.f_1326), -2147483648);
				__LIB_16__::func_557(&Local_8, 10);
			}
			__LIB_16__::func_708(bVar1);
			__LIB_16__::func_725(&Local_8, fVar3);
			if (fVar3 > 75f || __LIB_0__::func_1(Global_1394141.f_1326, -2147483648))
			{
				__LIB_1__::func_581(&(Global_1394141.f_1326), -2147483648);
				if (__LIB_16__::func_505(&Local_8) < 10)
				{
					__LIB_16__::func_557(&Local_8, 10);
				}
			}
			if ((__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1) || PED::IS_PED_IN_COMBAT(Global_35, 0)) || Global_1394141.f_1279[Local_8.f_1 /*8*/].f_6)
			{
				__LIB_1__::func_581(&(Local_8.f_16), 33554432);
				if (__LIB_16__::func_505(&Local_8) < 10)
				{
					__LIB_16__::func_557(&Local_8, 10);
				}
			}
			if (PLAYER::_0x6C54E69516CC56BD(PLAYER::GET_PLAYER_INDEX()) > 0 && bVar2)
			{
				__LIB_1__::func_581(&(Local_8.f_16), 33554432);
				if (__LIB_16__::func_505(&Local_8) < 10)
				{
					__LIB_16__::func_557(&Local_8, 10);
				}
			}
		}
		if (!Local_8.f_14)
		{
			__LIB_16__::func_558(&(Local_8.f_104), Local_8.f_1);
			__LIB_16__::func_688(&(Local_8.f_104), Local_8.f_1);
		}
		__LIB_16__::func_701(&Local_8);
		__LIB_16__::func_559(&Local_8);
		if (__LIB_16__::func_505(&Local_8) >= 6)
		{
			__LIB_0__::func_11(&Local_8);
		}
		if (__LIB_16__::func_505(&Local_8) >= 8 && bVar1)
		{
			iVar4 = 0;
			while (iVar4 <= 5)
			{
				if ((__LIB_0__::func_30(Local_8.f_74[iVar4]) && ENTITY::DOES_ENTITY_EXIST(Local_8.f_81[iVar4])) && !ENTITY::IS_ENTITY_DEAD(Local_8.f_81[iVar4]))
				{
					PED::SET_PED_RESET_FLAG(Local_8.f_81[iVar4], 261, true);
				}
				iVar4++;
			}
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_8.f_48) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_8.f_48, false))
		{
			if (bVar1)
			{
				if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_8.f_48, "b_ShowCrowd"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_8.f_48, "b_ShowCrowd", true, false);
				}
			}
			else if (ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_8.f_48, "b_ShowCrowd"))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_8.f_48, "b_ShowCrowd", false, false);
			}
		}
		switch (__LIB_16__::func_505(&Local_8))
		{
			case 0:
				if (__LIB_16__::func_440(&Local_8))
				{
					__LIB_16__::func_506(&Local_8);
					if (!Local_8.f_14)
					{
						__LIB_16__::func_492(&(Local_8.f_104));
						__LIB_2__::func_29(1);
						__LIB_1__::func_309(-1, 0, 0, 0, 0);
						__LIB_1__::func_924();
					}
					func_27(&Local_8);
					__LIB_16__::func_702(&Local_8);
					Global_1394141.f_1321 = 0;
					__LIB_16__::func_441(&Local_8);
				}
				__LIB_16__::func_557(&Local_8, 1);
				break;
			case 1:
				if (__LIB_16__::func_440(&Local_8))
				{
					__LIB_16__::func_441(&Local_8);
				}
				if (__LIB_16__::func_724(&Local_8))
				{
					__LIB_16__::func_507(&Local_8);
					__LIB_16__::func_557(&Local_8, 2);
				}
				break;
			case 2:
				if (__LIB_16__::func_440(&Local_8))
				{
					__LIB_16__::func_441(&Local_8);
				}
				if (func_32(&Local_8))
				{
					func_33(&Local_8);
					if (!Local_8.f_14)
					{
						if (!Local_8.f_1070)
						{
							ANIMSCENE::START_ANIM_SCENE(Local_8.f_49);
						}
						else
						{
							__LIB_16__::func_703(&Local_8);
						}
						__LIB_16__::func_557(&Local_8, 3);
					}
					else
					{
						__LIB_16__::func_557(&Local_8, 6);
					}
				}
				break;
			case 3:
				if (__LIB_16__::func_440(&Local_8))
				{
					if (Local_8.f_1 == -1)
					{
					}
					else
					{
						__LIB_16__::func_560(&(Local_8.f_910), Local_8.f_1);
					}
					__LIB_16__::func_441(&Local_8);
				}
				if (Local_8.f_1 == -1)
				{
					__LIB_16__::func_557(&Local_8, 6);
				}
				else if (__LIB_16__::func_709(&(Local_8.f_910), Local_8.f_1))
				{
					__LIB_16__::func_557(&Local_8, 4);
				}
				break;
			case 4:
				if (__LIB_16__::func_440(&Local_8))
				{
					__LIB_16__::func_441(&Local_8);
				}
				if (func_37(&(Local_8.f_349), Local_8.f_1, -1))
				{
					__LIB_16__::func_557(&Local_8, 5);
				}
				break;
			case 5:
				if (__LIB_16__::func_440(&Local_8))
				{
					__LIB_16__::func_441(&Local_8);
				}
				if (func_38(&(Local_8.f_349), &(Local_8.f_910), Local_8.f_1))
				{
					if (__LIB_16__::func_685(&(Local_8.f_349), Local_8.f_1))
					{
						if (!__LIB_0__::func_75(&(Local_8.f_26)))
						{
							__LIB_1__::func_148(&(Local_8.f_26));
						}
						else if (__LIB_0__::func_265(&(Local_8.f_26)) > 1f)
						{
							__LIB_0__::func_37(&(Local_8.f_26));
							__LIB_16__::func_557(&Local_8, 6);
						}
					}
				}
				break;
			case 6:
				if (__LIB_16__::func_440(&Local_8))
				{
					__LIB_1__::func_148(&(Local_8.f_947));
					if (Local_8.f_1070)
					{
						Local_8.f_1059.f_1 = Local_8.f_1;
					}
					if (Local_8.f_1 == 0 && !Local_8.f_14)
					{
						__LIB_1__::func_581(&(Global_1394141.f_1325), 512);
						__LIB_1__::func_581(&(Global_1394141.f_1325), 131072);
					}
					__LIB_16__::func_441(&Local_8);
				}
				__LIB_16__::func_508(&Local_8);
				if (Local_8.f_1070)
				{
					__LIB_16__::func_713(&(Local_8.f_1059), Local_8);
				}
				if (func_46(&Local_8))
				{
					if ((__LIB_0__::func_75(&(Local_8.f_947)) && __LIB_1__::func_871(&(Local_8.f_947)) > Local_8.f_1058) || bVar1)
					{
						__LIB_1__::func_148(&(Local_8.f_947));
						__LIB_16__::func_557(&Local_8, 7);
					}
				}
				break;
			case 7:
				if (__LIB_16__::func_440(&Local_8))
				{
					__LIB_16__::func_441(&Local_8);
				}
				__LIB_16__::func_508(&Local_8);
				if ((Local_8.f_1070 && Local_8.f_1059.f_10 == 0) && __LIB_0__::func_264(&(Local_8.f_947)) > 3f)
				{
					Local_8.f_1059.f_10 = 1;
				}
				if ((__LIB_0__::func_75(&(Local_8.f_947)) && __LIB_1__::func_871(&(Local_8.f_947)) > 10000) || Local_8.f_14)
				{
					bVar0 = true;
				}
				if (Local_8.f_1070)
				{
					__LIB_16__::func_713(&(Local_8.f_1059), Local_8);
				}
				if (bVar0)
				{
					if (!Local_8.f_14)
					{
						__LIB_1__::func_581(&(Global_1394141.f_1325), 2);
						__LIB_1__::func_581(&(Global_1394141.f_1325), 4096);
					}
					if (Local_8.f_1 != 0)
					{
					}
					if (Local_8.f_1070)
					{
						__LIB_1__::func_581(&(Global_1394141.f_1325), 16);
						Global_1394141.f_1330 = 1;
						if (Local_8.f_1 == 1 || Local_8.f_1 == 2)
						{
							__LIB_1__::func_581(&(Global_1394141.f_1325), 4194304);
						}
					}
					if (!__LIB_0__::func_1(Local_8.f_16, 1024))
					{
						__LIB_16__::func_557(&Local_8, 8);
					}
					else if (!__LIB_0__::func_75(&(Local_8.f_26)))
					{
						__LIB_1__::func_148(&(Local_8.f_26));
						Global_1394141.f_1322 = 1;
					}
					else if (__LIB_0__::func_265(&(Local_8.f_26)) > 5f)
					{
						__LIB_0__::func_37(&(Local_8.f_26));
						__LIB_16__::func_557(&Local_8, 8);
					}
				}
				break;
			case 8:
				if (__LIB_16__::func_440(&Local_8))
				{
					__LIB_16__::func_441(&Local_8);
				}
				__LIB_16__::func_508(&Local_8);
				if (Local_8.f_1070)
				{
					__LIB_16__::func_713(&(Local_8.f_1059), Local_8);
					__LIB_16__::func_704(&Local_8, Local_8.f_1);
					if (!__LIB_0__::func_1(Global_1394141.f_1325, 16))
					{
						__LIB_16__::func_561(&Local_8);
						__LIB_16__::func_705(Local_8);
						__LIB_16__::func_557(&Local_8, 9);
						AUDIO::_0x8BF907833BE275DE(0f, 1f);
						__LIB_1__::func_581(&(Local_8.f_16), 268435456);
					}
				}
				else
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_8.f_48) && !__LIB_0__::func_1(Local_8.f_16, 128))
					{
						ANIMSCENE::START_ANIM_SCENE(Local_8.f_48);
						__LIB_1__::func_581(&(Local_8.f_16), 128);
					}
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_8.f_49) && !__LIB_0__::func_1(Local_8.f_16, 512))
					{
						__LIB_1__::func_581(&(Local_8.f_16), -2147483648);
						__LIB_1__::func_581(&(Local_8.f_16), 512);
					}
					AUDIO::_0x8BF907833BE275DE(0f, 1f);
					__LIB_1__::func_581(&(Local_8.f_16), 268435456);
					__LIB_16__::func_511(__LIB_16__::func_509(6), __LIB_16__::func_510());
					if (__LIB_0__::func_1(Local_8.f_17, 1) && AUDIO::LOAD_STREAM(__LIB_16__::func_512(Local_8), __LIB_16__::func_513(Local_8)))
					{
						iVar5 = AUDIO::_0x0556C784FA056628(__LIB_16__::func_512(Local_8), __LIB_16__::func_513(Local_8));
						if (iVar5 != -1)
						{
							AUDIO::PLAY_STREAM_FROM_POSITION(2548.749f, -1305.267f, 50.01453f, iVar5);
						}
					}
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_8.f_48))
					{
						if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_8.f_48, false))
						{
							__LIB_16__::func_557(&Local_8, 9);
						}
					}
				}
				break;
			case 9:
				if (__LIB_16__::func_440(&Local_8))
				{
					if (Local_8.f_1070 || !Local_8.f_14)
					{
						if (Local_8.f_1 == 4 || Local_8.f_1 == 2)
						{
							Global_40.f_9028[4] = (1 + Global_40.f_9028[4]);
							Global_40.f_9028[2]++;
						}
						else
						{
							Global_40.f_9028[1] = (1 + Global_40.f_9028[1]);
							Global_40.f_9028[3]++;
						}
					}
					__LIB_1__::func_148(&(Local_8.f_32));
					Global_1394141.f_1335 = Local_8.f_48;
					__LIB_16__::func_441(&Local_8);
				}
				__LIB_16__::func_508(&Local_8);
				if (!Local_8.f_14)
				{
					func_57(&(Local_8.f_910), &(Local_8.f_349), Local_8.f_1);
					if (!bVar1)
					{
						if (__LIB_0__::func_73(1))
						{
							if (!__LIB_0__::func_75(&(Local_8.f_20)))
							{
								__LIB_1__::func_148(&(Local_8.f_20));
							}
							else if (__LIB_0__::func_265(&(Local_8.f_20)) > 10f)
							{
								__LIB_1__::func_979(1);
								__LIB_0__::func_37(&(Local_8.f_20));
							}
						}
					}
					else
					{
						if (!__LIB_0__::func_73(1))
						{
							__LIB_2__::func_29(1);
							__LIB_1__::func_309(-1, 0, 0, 0, 0);
							__LIB_1__::func_924();
						}
						if (__LIB_0__::func_75(&(Local_8.f_20)))
						{
							__LIB_0__::func_37(&(Local_8.f_20));
						}
					}
				}
				__LIB_16__::func_562(&(Local_8.f_12));
				__LIB_16__::func_732(&Local_8);
				__LIB_16__::func_563(&Local_8);
				func_63(&Local_8);
				if (__LIB_0__::func_1(Local_8.f_16, 4096))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_8.f_48, false) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_8.f_48) > __LIB_16__::func_514())
					{
						__LIB_1__::func_581(&(Local_8.f_16), 2);
					}
				}
				if (__LIB_0__::func_1(Local_8.f_16, 268435456) && __LIB_0__::func_1(Local_8.f_16, 134217728))
				{
					AUDIO::_0x8BF907833BE275DE(1f, 1f);
					__LIB_1__::func_993(&(Local_8.f_16), 268435456);
				}
				if (Local_8.f_1070)
				{
					__LIB_16__::func_686(&Local_8);
					__LIB_16__::func_713(&(Local_8.f_1059), Local_8);
					__LIB_16__::func_515(&Local_8, bVar1);
					if ((__LIB_16__::func_516() && __LIB_0__::func_1(Local_8.f_16, 2097152)) && __LIB_0__::func_264(&(Local_8.f_32)) > 30f)
					{
						if (!__LIB_0__::func_1(Local_8.f_16, 67108864))
						{
							__LIB_1__::func_581(&(Global_1394141.f_1325), 4);
							__LIB_1__::func_581(&(Global_1394141.f_1325), 32);
							if (Local_8.f_1 == 1 || Local_8.f_1 == 2)
							{
								__LIB_1__::func_581(&(Global_1394141.f_1325), 8388608);
							}
							Global_1394141.f_1330 = 0;
							Local_8.f_910.f_19 = 1;
							Global_1394141.f_1329 = 1;
							__LIB_0__::func_15(__LIB_0__::func_14(joaat("SHOWS_SEEN")), 1);
							__LIB_16__::func_689(&Local_8);
							__LIB_1__::func_581(&(Local_8.f_16), 67108864);
						}
						__LIB_16__::func_517(&Local_8);
						if (!bVar1 && !bVar2)
						{
							__LIB_16__::func_557(&Local_8, 10);
						}
						if (__LIB_0__::func_1(Local_8.f_16, 268435456))
						{
							AUDIO::_0x8BF907833BE275DE(1f, 1f);
							__LIB_1__::func_993(&(Local_8.f_16), 268435456);
						}
					}
					else
					{
						if (bVar1 || bVar2)
						{
							if (!__LIB_0__::func_1(Local_8.f_16, 268435456))
							{
								AUDIO::_0x8BF907833BE275DE(0f, 1f);
								__LIB_1__::func_581(&(Local_8.f_16), 268435456);
							}
						}
						else if (__LIB_0__::func_1(Local_8.f_16, 268435456))
						{
							AUDIO::_0x8BF907833BE275DE(1f, 1f);
							__LIB_1__::func_993(&(Local_8.f_16), 268435456);
						}
						__LIB_16__::func_714(&Local_8);
					}
				}
				else if (__LIB_0__::func_1(Local_8.f_16, 8388608))
				{
					if (!__LIB_0__::func_1(Local_8.f_16, 67108864))
					{
						__LIB_16__::func_518(__LIB_16__::func_509(6), __LIB_16__::func_510());
						if (__LIB_0__::func_1(Local_8.f_16, 268435456))
						{
							AUDIO::_0x8BF907833BE275DE(1f, 1f);
							__LIB_1__::func_993(&(Local_8.f_16), 268435456);
						}
						if (__LIB_0__::func_1(Local_8.f_16, 4096) && !Local_8.f_14)
						{
							__LIB_1__::func_581(&(Global_1394141.f_1325), 4);
							__LIB_1__::func_581(&(Global_1394141.f_1325), 8192);
						}
						if (Local_8.f_14)
						{
							Global_1394141.f_1323 = 1;
						}
						__LIB_0__::func_15(__LIB_0__::func_14(joaat("THEATRE_VISITS")), 1);
						__LIB_1__::func_581(&(Local_8.f_16), 67108864);
					}
					if (Local_8.f_14)
					{
						if (!Global_1394141.f_1321)
						{
							if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_8.f_48) > 0.99f)
							{
								__LIB_16__::func_557(&Local_8, 10);
							}
							if (Local_8 != 7)
							{
							}
							else
							{
								__LIB_16__::func_557(&Local_8, 10);
							}
						}
					}
					else
					{
						__LIB_16__::func_710(&Local_8);
						if (!bVar1 && !bVar2)
						{
							Global_1394141.f_1321 = 0;
							__LIB_16__::func_557(&Local_8, 10);
						}
					}
				}
				if (!bVar1)
				{
					__LIB_16__::func_690(&Local_8);
				}
				break;
			case 10:
				if (__LIB_16__::func_440(&Local_8))
				{
					__LIB_16__::func_441(&Local_8);
				}
				if (__LIB_0__::func_1(Local_8.f_16, 4194304))
				{
					iVar6 = INTERIOR::GET_INTERIOR_AT_COORDS(__LIB_16__::func_442(Local_8.f_1));
					if (INTERIOR::IS_VALID_INTERIOR(iVar6))
					{
						INTERIOR::UNPIN_INTERIOR(iVar6);
					}
					__LIB_1__::func_993(&(Local_8.f_16), 4194304);
				}
				__LIB_1__::func_993(&(Global_1394141.f_1326), 32768);
				if (!Local_8.f_14 && (__LIB_0__::func_1(Global_1394141.f_1326, -2147483648) || __LIB_0__::func_1(Local_8.f_16, 33554432)))
				{
					if (!bVar1)
					{
						if (Local_8.f_1070)
						{
							__LIB_16__::func_519(&(Local_8.f_1059));
							__LIB_1__::func_581(&(Global_1394141.f_1325), 4);
							__LIB_1__::func_581(&(Global_1394141.f_1325), 32);
							if (__LIB_0__::func_1(Local_8.f_16, 268435456))
							{
								AUDIO::_0x8BF907833BE275DE(1f, 1f);
								__LIB_1__::func_993(&(Local_8.f_16), 268435456);
							}
							__LIB_16__::func_517(&Local_8);
						}
						else
						{
							Global_1394141.f_1321 = 0;
						}
						__LIB_16__::func_689(&Local_8);
						Global_1394141.f_1328 = 0;
						Global_1394141.f_1330 = 0;
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_8.f_49))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE(Local_8.f_49);
						}
						AUDIO::_0x531A78D6BF27014B(__LIB_16__::func_510());
						func_1(&Local_8);
						__LIB_16__::func_443(&(Local_8.f_349), Local_8.f_35[4]);
						__LIB_16__::func_520(&Local_8);
						__LIB_16__::func_715(Local_8);
						__LIB_16__::func_564(Global_1394141.f_7[Global_1394141 /*31*/].f_30);
						__LIB_16__::func_495();
						__LIB_16__::func_557(&Local_8, 11);
					}
				}
				if (Local_8.f_14)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_8.f_49))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(Local_8.f_49);
					}
					AUDIO::_0x531A78D6BF27014B(__LIB_16__::func_510());
					func_1(&Local_8);
					__LIB_16__::func_557(&Local_8, 11);
				}
				else if (((!bVar1 && !bVar2) && !Local_8.f_14) && fVar3 > 17f)
				{
					__LIB_16__::func_710(&Local_8);
					__LIB_16__::func_689(&Local_8);
					Global_1394141.f_1328 = 0;
					Global_1394141.f_1330 = 0;
					__LIB_16__::func_519(&(Local_8.f_1059));
					if (!__LIB_16__::func_691(Local_8) && !__LIB_16__::func_502(Local_8))
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_8.f_49))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE(Local_8.f_49);
						}
						AUDIO::_0x531A78D6BF27014B(__LIB_16__::func_510());
						func_1(&Local_8);
						__LIB_16__::func_443(&(Local_8.f_349), Local_8.f_35[4]);
						__LIB_16__::func_520(&Local_8);
						__LIB_16__::func_564(Global_1394141.f_7[Global_1394141 /*31*/].f_30);
						__LIB_16__::func_495();
						__LIB_16__::func_557(&Local_8, 11);
					}
				}
				break;
			case 11:
				if (__LIB_16__::func_440(&Local_8))
				{
					__LIB_16__::func_441(&Local_8);
				}
				if (!Local_8.f_14)
				{
					if (!bVar1)
					{
						if (Local_8.f_2 == 0)
						{
							Global_1394141.f_1279[Local_8.f_1 /*8*/].f_6 = 0;
							SCRIPTS::TERMINATE_THIS_THREAD();
						}
					}
					else
					{
						__LIB_16__::func_557(&Local_8, 10);
					}
				}
				else
				{
					SCRIPTS::TERMINATE_THIS_THREAD();
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
}

void func_1(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (Local_8.f_1070)
	{
		__LIB_16__::func_521(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_66)
	{
		iVar1 = iParam0->f_66[iVar0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			OBJECT::DELETE_OBJECT(&iVar1);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_81)
	{
		iVar2 = iParam0->f_81[iVar0];
		if (STREAMING::IS_MODEL_VALID(iParam0->f_74[iVar0]) && ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iVar2, -1f);
			PED::DELETE_PED(&iVar2);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_96)
	{
		iVar3 = iParam0->f_96[iVar0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			OBJECT::DELETE_OBJECT(&iVar3);
		}
		iVar0++;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_48))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_48);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_57))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_57));
	}
	if (HUD::_DOES_TEXT_DATABASE_EXIST(iParam0->f_945))
	{
		if (HUD::_TEXT_DATABASE_HAS_LOADED(iParam0->f_945))
		{
			HUD::_TEXT_DATABASE_DELETE(iParam0->f_945);
		}
	}
	if (HUD::_DOES_TEXT_DATABASE_EXIST(iParam0->f_946) && !iParam0->f_14)
	{
		if (HUD::_TEXT_DATABASE_HAS_LOADED(iParam0->f_946))
		{
			HUD::_TEXT_DATABASE_DELETE(iParam0->f_946);
		}
	}
	func_86(iParam0);
	if (!iParam0->f_14)
	{
		__LIB_16__::func_493(&(iParam0->f_104));
		if (__LIB_0__::func_73(1))
		{
			__LIB_1__::func_979(1);
		}
	}
	if (__LIB_0__::func_1(iParam0->f_16, 33554432))
	{
		__LIB_16__::func_443(&(iParam0->f_349), Global_1394141.f_7[*iParam0 /*31*/].f_4);
	}
	__LIB_1__::func_979(1);
}

void func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	iParam0->f_74[0] = joaat("CS_MISSMARJORIE");
	iParam0->f_74[1] = joaat("CS_ODDFELLOWSPINHEAD");
	iParam0->f_74[2] = joaat("CS_MAGNIFICO");
	iParam0->f_58[0] = joaat("P_CS_BULLWHIP01X");
	iParam0->f_946 = "ODDFAUD";
	iParam0->f_910 = Local_8;
	__LIB_1__::func_581(&(iParam0->f_16), 131072);
	if (__LIB_0__::func_181())
	{
		__LIB_0__::func_928(&(iParam0->f_954), Global_35, "JOHN", 0);
	}
	else
	{
		__LIB_0__::func_928(&(iParam0->f_954), Global_35, "ARTHUR", 0);
	}
	iParam0->f_50 = { 2546.41f, -1303.55f, 46.9f };
	iParam0->f_53 = { 0f, 0f, 40f };
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_48))
	{
		iParam0->f_48 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@roddf@ig@roddf_s3@roddf_s3", 0, "pl_Performance", false, true);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (17 - 1))
	{
		iVar1 = iVar0;
		iLocal_1143[iVar0] = MISC::GET_HASH_KEY(func_156(iVar1));
		iVar0++;
	}
	PED::_0xF008E0BA1FE1D644(3);
}

bool func_32(int iParam0)
{
	int iVar0;
	if (!iParam0->f_14 && !iParam0->f_1070)
	{
		if (!__LIB_16__::func_526(&(iParam0->f_57), iParam0->f_56, iParam0->f_45))
		{
			return false;
		}
		if (!__LIB_16__::func_494(&(iParam0->f_49), &(iParam0->f_16), __LIB_16__::func_447(), __LIB_16__::func_446(0), 1))
		{
			return false;
		}
		if (!__LIB_16__::func_524(iParam0->f_49, __LIB_16__::func_446(1), __LIB_16__::func_447()))
		{
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (STREAMING::IS_MODEL_VALID(iParam0->f_74[iVar0]))
		{
			if (!func_164(&(iParam0->f_81[iVar0]), iParam0->f_74[iVar0], iParam0->f_42, 0f))
			{
				return false;
			}
		}
		iVar0++;
	}
	if (!__LIB_0__::func_0(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if ((STREAMING::IS_MODEL_VALID(iParam0->f_74[iVar0]) && ENTITY::DOES_ENTITY_EXIST(iParam0->f_81[iVar0])) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_81[iVar0]))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam0->f_81[iVar0], "Default_Show_Performers_Group", -1f);
		}
		iVar0++;
	}
	func_166(iParam0);
	if (!iParam0->f_14 && !iParam0->f_1070)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_49, "CURTAIN", iParam0->f_57, 0);
	}
	return true;
}

void func_33(int iParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_48))
	{
		return;
	}
	func_167(iParam0);
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_48, true, false))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(iParam0->f_48);
	}
}

bool func_37(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_16__::func_454(iParam1);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= (iVar0 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar2 /*10*/]))
		{
			iVar3 = POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(__LIB_16__::func_455(iParam1), __LIB_16__::func_456(iParam1, iVar2), -156825994, false, true, __LIB_16__::func_457(iParam1, iVar2));
			bVar1 = false;
			if (__LIB_0__::func_1(Global_1394141.f_1326, 16))
			{
				if (iVar2 == 4)
				{
					iVar3 = joaat("U_M_M_ODDFELLOWPARTICIPANT_01");
					bVar1 = true;
				}
			}
			else if (iParam2 == 0)
			{
				if (iVar2 == 5)
				{
					iVar3 = joaat("U_M_M_BULLETCATCHVOLUNTEER_01");
					bVar1 = true;
				}
				else if (iVar2 == 31)
				{
					iVar3 = joaat("U_M_M_CABARETFIREHAT_01");
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				STREAMING::REQUEST_MODEL(iVar3, false);
			}
			if (bVar1 && !STREAMING::HAS_MODEL_LOADED(iVar3))
			{
				return false;
			}
			if (STREAMING::IS_MODEL_VALID(iVar3))
			{
				(*uParam0)[iVar2 /*10*/] = __LIB_8__::func_931(iVar3, __LIB_16__::func_457(iParam1, iVar2), func_177(iParam1, iVar2), 1, 1, func_178(iParam1, iVar2), 1, 1, 1, 0, 0, 0, 0);
			}
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar2 /*10*/]))
		{
			return false;
		}
		iVar2++;
	}
	return true;
}

bool func_38(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	if (!__LIB_16__::func_706(uParam1, iParam2))
	{
		return false;
	}
	iVar0 = __LIB_16__::func_454(iParam2);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if ((__LIB_16__::func_458(iVar1, uParam1->f_17) && iParam2 == 0) && !uParam1->f_20)
		{
			(uParam0[iVar1 /*10*/])->f_1 = 6;
			(uParam0[iVar1 /*10*/])->f_2 = iVar1;
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam1->f_12[1 /*2*/], __LIB_16__::func_459(1, iVar1, uParam1->f_17), (*uParam0)[iVar1 /*10*/], 0);
		}
		else if (__LIB_16__::func_460(iParam2))
		{
			(uParam0[iVar1 /*10*/])->f_1 = 1;
			(uParam0[iVar1 /*10*/])->f_2 = iVar1;
			func_184(uParam0[iVar1 /*10*/], iParam2);
		}
		else
		{
			(uParam0[iVar1 /*10*/])->f_1 = 1;
			(uParam0[iVar1 /*10*/])->f_2 = iVar1;
			func_185(uParam0[iVar1 /*10*/], iParam2);
		}
		iVar1++;
	}
	return true;
}

bool func_46(int iParam0)
{
	var uVar0[1];
	var uVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_81[3]))
	{
		uVar2 = 1;
		if (__LIB_4__::func_206(&uVar0, &uVar2, 1, 2544.54f, -1303.289f, 47.51585f, 0.5f, 0, 1, 1, -1, 1, 0, -1082130432 /* Float: -1f */, 0, 0) > 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uVar0[0]) && !ENTITY::IS_ENTITY_DEAD(uVar0[0]))
			{
				iParam0->f_81[3] = uVar0[0];
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "CS_GENSTORYMALE", iParam0->f_81[3], 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_81[3], true);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam0->f_81[3], "Default_Show_Performers_Group", -1f);
				Global_1394141.f_1334 = 1;
				return true;
			}
		}
		return false;
	}
	return true;
}

void func_57(var uParam0, var uParam1, int iParam2)
{
	if (__LIB_0__::func_1(uParam0->f_18, 1) && !__LIB_0__::func_1(uParam0->f_18, 2))
	{
		STREAMING::_REQUEST_SCENARIO_TYPE(joaat("PROP_HUMAN_SEAT_CHAIR"), 15, 0, 0);
		__LIB_1__::func_581(&(uParam0->f_18), 2);
	}
	if (__LIB_0__::func_1(uParam0->f_18, 2) && !__LIB_0__::func_1(uParam0->f_18, 4))
	{
		if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("PROP_HUMAN_SEAT_CHAIR"), false))
		{
			__LIB_1__::func_581(&(uParam0->f_18), 4);
		}
	}
	if (__LIB_0__::func_1(uParam0->f_18, 8) && !__LIB_0__::func_1(uParam0->f_18, 16))
	{
		TASK::REQUEST_WAYPOINT_RECORDING(__LIB_16__::func_462(iParam2));
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(__LIB_16__::func_462(iParam2)))
		{
			__LIB_1__::func_581(&(uParam0->f_18), 16);
		}
	}
	func_213(uParam0, uParam1, iParam2);
	switch (Global_1394141.f_1332)
	{
		case 0:
			break;
		default:
			if (Global_1394141.f_1332 != Global_1394141.f_1333)
			{
				__LIB_16__::func_723(uParam0, uParam1, iParam2, __LIB_16__::func_545(*uParam0, uParam0->f_1, Global_1394141.f_1332));
				Global_1394141.f_1333 = Global_1394141.f_1332;
			}
			break;
	}
}

void func_63(int iParam0)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_48))
	{
		return;
	}
	fVar0 = 0f;
	bVar1 = ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_48, false);
	if (bVar1)
	{
		fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_48);
	}
	if (!__LIB_0__::func_1(uLocal_1142, 1))
	{
		if (fVar0 > 0.187f)
		{
			MISC::_0x870708A6E147A9AD(iParam0->f_81[1], "", 20f, 0, 0, 0, 0, 0, 0, -1);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_81[1], 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_81[1], 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_81[1], 130, true);
			__LIB_1__::func_581(&uLocal_1142, 1);
		}
	}
	if (!__LIB_0__::func_1(uLocal_1142, 2))
	{
		if (fVar0 > 0.583f)
		{
			MISC::_0x870708A6E147A9AD(iParam0->f_81[2], "", 20f, 0, 0, 0, 0, 0, 0, -1);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_81[2], 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_81[2], 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_81[2], 130, true);
			__LIB_1__::func_581(&uLocal_1142, 2);
		}
	}
	iVar3 = __LIB_0__::func_57(iParam0->f_81[2]);
	iVar4 = __LIB_0__::func_57(iParam0->f_81[1]);
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &iVar2, 0, 0))
	{
		if (iVar2 == iVar3)
		{
			iParam0->f_12 = iParam0->f_81[2];
		}
		else if (iVar2 == iVar4)
		{
			iParam0->f_12 = iParam0->f_81[1];
		}
		else
		{
			iParam0->f_12 = iParam0->f_81[0];
		}
	}
	if (bVar1)
	{
		func_235(iParam0);
	}
	switch (iLocal_1141)
	{
		case 0:
			if (bVar1)
			{
				ENTITY::SET_ENTITY_COORDS(iParam0->f_81[2], 2538.53f, -1312.081f, 48.21665f, true, false, true, true);
				Global_1394141.f_1322 = 1;
				Global_1394141.f_1334 = 1;
				__LIB_1__::func_649(&iLocal_1141, 1);
			}
			break;
		case 1:
			if (bVar1 && fVar0 > 0.96f)
			{
				__LIB_1__::func_649(&iLocal_1141, 2);
			}
			break;
		case 2:
			Global_1394141.f_1321 = 1;
			__LIB_1__::func_581(&(iParam0->f_16), 8388608);
			if (!iParam0->f_14)
			{
				__LIB_1__::func_581(&(Global_1394141.f_1325), 4);
				__LIB_1__::func_581(&(Global_1394141.f_1325), 8192);
			}
			__LIB_1__::func_581(&(Global_1394141.f_1326), 32);
			if (__LIB_0__::func_113())
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ODDF3_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ODDF3_JN"), 0);
			}
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iParam0->f_81[3], -1f);
			__LIB_1__::func_649(&iLocal_1141, 3);
			break;
		case 3:
			break;
	}
}

void func_86(int iParam0)
{
	PED::_0x7D4E70A67A651C71(3);
	MISC::_0xE98D55C5983F2509(iParam0->f_81[1]);
	PED::SET_PED_CONFIG_FLAG(iParam0->f_81[1], 297, false);
	PED::SET_PED_CONFIG_FLAG(iParam0->f_81[1], 315, false);
	PED::SET_PED_CONFIG_FLAG(iParam0->f_81[1], 130, false);
	MISC::_0xE98D55C5983F2509(iParam0->f_81[2]);
	PED::SET_PED_CONFIG_FLAG(iParam0->f_81[2], 297, false);
	PED::SET_PED_CONFIG_FLAG(iParam0->f_81[2], 315, false);
	PED::SET_PED_CONFIG_FLAG(iParam0->f_81[2], 130, false);
}

char* func_156(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CROWD_ODDFELLOWS_01";
		case 1:
			return "CROWD_ODDFELLOWS_02";
		case 2:
			return "CROWD_ODDFELLOWS_03";
		case 3:
			return "CROWD_ODDFELLOWS_04";
		case 4:
			return "CROWD_ODDFELLOWS_05";
		case 5:
			return "CROWD_ODDFELLOWS_06";
		case 6:
			return "CROWD_ODDFELLOWS_07";
		case 7:
			return "CROWD_ODDFELLOWS_08";
		case 8:
			return "CROWD_ODDFELLOWS_01";
		case 9:
			return "CROWD_ODDFELLOWS_02";
		case 10:
			return "CROWD_ODDFELLOWS_03";
		case 11:
			return "CROWD_ODDFELLOWS_04";
		case 12:
			return "CROWD_ODDFELLOWS_05";
		case 13:
			return "CROWD_ODDFELLOWS_06";
		case 14:
			return "CROWD_ODDFELLOWS_07";
		case 15:
			return "CROWD_ODDFELLOWS_08";
		case 16:
			return "CROWD_ODDFELLOWS_09";
		default:
			break;
	}
	return "";
}

bool func_164(var uParam0, int iParam1, vector3 vParam2, float fParam5)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	if (!STREAMING::HAS_MODEL_LOADED(iParam1))
	{
		return false;
	}
	bVar0 = true;
	bVar1 = false;
	iVar2 = func_268(iParam1);
	if (iVar2 != joaat("META_OUTFIT_DEFAULT"))
	{
		bVar0 = false;
		bVar1 = true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = __LIB_8__::func_931(iParam1, vParam2, fParam5, 1, 1, 0, 1, 1, bVar0, 0, bVar1, 0, 0);
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && PED::_0xA0BC8FAED8CFEB3C(*uParam0))
	{
		if (!bVar0)
		{
			__LIB_0__::func_862(*uParam0, iVar2);
		}
		__LIB_1__::func_991(*uParam0, 0);
		return true;
	}
	return false;
}

void func_166(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_81[0]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_81[0], true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_81[1]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_81[1], true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_81[2]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_81[2], true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_66[0]))
	{
		iParam0->f_66[0] = OBJECT::CREATE_OBJECT(iParam0->f_58[0], 2553.193f, -1310.103f, 49.21665f, true, true, false, false, true);
	}
	iParam0->f_12 = iParam0->f_81[0];
}

void func_167(int iParam0)
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "CS_GENSTORYFEMALE", iParam0->f_81[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "CS_ODDFELLOWSPINHEAD", iParam0->f_81[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "CS_MAGNIFICO", iParam0->f_81[2], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "p_cs_bullwhip01x", iParam0->f_66[0], 0);
}

float func_177(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 189.76f;
				case 1:
					return 194.54f;
				case 2:
					return 185.02f;
				case 3:
					return 185.67f;
				case 4:
					return 186.48f;
				case 5:
					return 189.64f;
				case 6:
					return 194.87f;
				case 7:
					return 197.45f;
				case 8:
					return 192.94f;
				case 9:
					return 190.4f;
				case 10:
					return 187.74f;
				case 11:
					return 188.21f;
				case 12:
					return 191.46f;
				case 13:
					return 187.8f;
				case 14:
					return 197.77f;
				case 15:
					return 197.28f;
				case 16:
					return 195.7f;
				case 17:
					return 194.38f;
				case 18:
					return 189.91f;
				case 19:
					return 187.19f;
				case 20:
					return 183.35f;
				case 21:
					return 195.68f;
				case 22:
					return 195.08f;
				case 23:
					return 197.6f;
				case 24:
					return 192.22f;
				case 25:
					return 187.31f;
				case 26:
					return 186.63f;
				case 27:
					return 174.21f;
				case 28:
					return 175.4f;
				case 29:
					return 177.33f;
				case 30:
					return 177.62f;
				case 31:
					return 175.4f;
				case 32:
					return 176.59f;
				case 33:
					return 165.32f;
				case 34:
					return 170.16f;
				case 35:
					return 170.37f;
				case 36:
					return 174.13f;
				case 37:
					return 175.59f;
				case 38:
					return 173.64f;
				case 39:
					return 178.62f;
				case 40:
					return 169.96f;
				case 41:
					return 171.41f;
				case 42:
					return 170.19f;
				case 43:
					return 171.15f;
				case 44:
					return 174.93f;
				case 45:
					return 177.61f;
				case 46:
					return 169.6f;
				case 47:
					return 171.53f;
				case 48:
					return 172.77f;
				case 49:
					return 174.2f;
				case 50:
					return 175.33f;
				case 51:
					return 175.1f;
				case 52:
					return 176.09f;
				case 53:
					return 152.8307f;
				case 54:
					return 152.8307f;
				case 55:
					return 190.6648f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -164f;
				case 1:
					return -164f;
				case 2:
					return -164f;
				case 3:
					return -164f;
				case 4:
					return -164f;
				case 5:
					return -164f;
				case 6:
					return -164f;
				case 7:
					return -164f;
				case 8:
					return -164f;
				case 9:
					return -164f;
				default:
					break;
			}
			break;
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return -37.72f;
				case 1:
					return -39.69f;
				case 2:
					return -39.97f;
					return -39.02f;
					return -52.61f;
					return -55.28f;
					return -56.79f;
					return -39.3f;
					return -38.34f;
					return -39.92f;
					return -57.96f;
					return -56.65f;
					return -38.24f;
					return -39.76f;
					return -56.13f;
					return -58.55f;
					return -54.07f;
					return -40.84f;
					return -40.21f;
					return -44.17f;
					return -52.32f;
					return -54.76f;
					Jump @1322; //curOff = 1308
					return -88.69f;
					return -175.57f;
				}
bool func_178(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
					return true;
				case 8:
				case 9:
				case 10:
				case 11:
				case 12:
					return true;
				case 17:
					return 2;
				case 18:
					return 2;
				case 20:
				case 31:
					return true;
				case 32:
					return true;
				case 39:
					return true;
				case 53:
				case 54:
				case 55:
					return true;
				default:
					break;
			}
			break;
		case 3:
			break;
	}
	return false;
}

void func_184(var uParam0, int iParam1)
{
	if (!PED::IS_PED_USING_ANY_SCENARIO(*uParam0))
	{
		TASK::TASK_START_SCENARIO_AT_POSITION(*uParam0, joaat("PROP_HUMAN_SEAT_CHAIR"), __LIB_16__::func_457(iParam1, uParam0->f_2), func_177(iParam1, uParam0->f_2), -1, false, true, 0, 0.25f, false);
	}
}

void func_185(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	vector3 vVar5;
	int iVar8;
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		iVar0 = 2;
		if (PED::IS_PED_MALE(*uParam0))
		{
			iVar0 = 1;
		}
		vVar1 = { __LIB_16__::func_457(iParam1, uParam0->f_2) };
		fVar4 = func_177(iParam1, uParam0->f_2);
		vVar5 = { 0f, 0f, fVar4 };
		iVar8 = __LIB_16__::func_550(iParam1, uParam0->f_2);
		uParam0->f_5 = 1;
		uParam0->f_6 = -1;
		uParam0->f_7 = __LIB_16__::func_551(uParam0->f_5);
		uParam0->f_8 = __LIB_16__::func_712(uParam0->f_5, iVar0, iVar8);
		if (iVar8 == 0)
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*uParam0, uParam0->f_7, uParam0->f_8, vVar1, vVar5, 1000f, -1000f, -1, 49153, __LIB_16__::func_471(), 2, 1, 0);
		}
		else
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*uParam0, uParam0->f_7, uParam0->f_8, vVar1, vVar5, 1000f, -1000f, -1, 49153, __LIB_16__::func_471(), 2, 0, 0);
		}
	}
}

void func_213(var uParam0, var uParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	bool bVar7;
	bVar0 = __LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1);
	iVar1 = __LIB_16__::func_454(iParam2);
	fVar2 = 0f;
	if (__LIB_0__::func_75(&(uParam0->f_8)))
	{
		fVar2 = __LIB_0__::func_265(&(uParam0->f_8));
	}
	iVar5 = 0;
	while (iVar5 <= (iVar1 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar5 /*10*/]) || ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar5 /*10*/]))
		{
		}
		else
		{
			PED::SET_PED_RESET_FLAG((*uParam1)[iVar5 /*10*/], 153, true);
			if (Global_1394141.f_1334)
			{
				if (__LIB_16__::func_472(*uParam0, iVar5) && (uParam1[iVar5 /*10*/])->f_1 != 5)
				{
					(uParam1[iVar5 /*10*/])->f_1 = 5;
				}
			}
			else if (__LIB_16__::func_472(*uParam0, iVar5) && (uParam1[iVar5 /*10*/])->f_1 == 5)
			{
				__LIB_0__::func_19(&(uParam0->f_11), 0);
				(uParam1[iVar5 /*10*/])->f_1 = 3;
			}
			if (uParam0->f_19 && __LIB_16__::func_504(iParam2))
			{
				if (!__LIB_0__::func_75(&(uParam0->f_8)))
				{
					__LIB_1__::func_581(&(uParam0->f_18), 1);
					__LIB_1__::func_581(&(uParam0->f_18), 8);
					__LIB_1__::func_148(&(uParam0->f_8));
				}
				else if ((uParam1[iVar5 /*10*/])->f_1 < 7)
				{
					if (__LIB_16__::func_473(iParam2, iVar5) >= 0f && fVar2 > __LIB_16__::func_473(iParam2, iVar5))
					{
						(uParam1[iVar5 /*10*/])->f_1 = 7;
					}
				}
			}
			if ((!uParam0->f_19 && !__LIB_16__::func_472(*uParam0, iVar5)) && (uParam1[iVar5 /*10*/])->f_1 != 5)
			{
				if ((uParam1[iVar5 /*10*/])->f_9)
				{
					fVar6 = __LIB_0__::func_665(Global_35, (*uParam1)[iVar5 /*10*/], 1, 1);
					if (fVar6 > 2f || !__LIB_16__::func_474(uParam1[iVar5 /*10*/]))
					{
						(uParam1[iVar5 /*10*/])->f_9 = 0;
						uParam0->f_21 = 0;
						(uParam1[iVar5 /*10*/])->f_5 = 2;
						func_293(uParam1[iVar5 /*10*/], iParam2);
					}
				}
				else if (!uParam0->f_21 && (uParam1[iVar5 /*10*/])->f_1 != 6)
				{
					fVar6 = __LIB_0__::func_665(Global_35, (*uParam1)[iVar5 /*10*/], 1, 1);
					if (fVar6 < 1.5f && __LIB_16__::func_474(uParam1[iVar5 /*10*/]))
					{
						(uParam1[iVar5 /*10*/])->f_5 = __LIB_16__::func_475(iVar5);
						func_293(uParam1[iVar5 /*10*/], iParam2);
						(uParam1[iVar5 /*10*/])->f_9 = 1;
						uParam0->f_21 = 1;
					}
				}
			}
			switch ((uParam1[iVar5 /*10*/])->f_1)
			{
				case 0:
					break;
				case 1:
					if (__LIB_16__::func_476(iParam2, iVar5))
					{
						__LIB_9__::func_314(uParam1[iVar5 /*10*/], __LIB_16__::func_477(iParam2), 500);
					}
					break;
				case 3:
					func_298(uParam1[iVar5 /*10*/], iParam2);
					(uParam1[iVar5 /*10*/])->f_1 = 4;
					break;
				case 4:
					bVar7 = false;
					if ((uParam1[iVar5 /*10*/])->f_6 == -1)
					{
						func_293(uParam1[iVar5 /*10*/], iParam2);
						(uParam1[iVar5 /*10*/])->f_1 = 1;
						return;
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam1)[iVar5 /*10*/], (uParam1[iVar5 /*10*/])->f_7, (uParam1[iVar5 /*10*/])->f_8, 1))
					{
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME((*uParam1)[iVar5 /*10*/], (uParam1[iVar5 /*10*/])->f_7, (uParam1[iVar5 /*10*/])->f_8) > 0.97f)
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						func_293(uParam1[iVar5 /*10*/], iParam2);
						(uParam1[iVar5 /*10*/])->f_1 = 1;
					}
					break;
				case 5:
					if (!uParam0->f_19)
					{
						func_299(uParam0, uParam1[iVar5 /*10*/]);
					}
					break;
				case 6:
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_12[1 /*2*/]))
					{
						if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar5 /*10*/]))
						{
							PED::SET_PED_RESET_FLAG((*uParam1)[iVar5 /*10*/], 261, true);
						}
						if (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_12[1 /*2*/], __LIB_16__::func_459(1, iVar5, uParam0->f_17)) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uParam0->f_12[1 /*2*/], false))
						{
							func_185(uParam1[iVar5 /*10*/], iParam2);
							(uParam1[iVar5 /*10*/])->f_1 = 1;
						}
						if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1((*uParam1)[iVar5 /*10*/], uParam0->f_12[1 /*2*/]))
						{
							func_185(uParam1[iVar5 /*10*/], iParam2);
							(uParam1[iVar5 /*10*/])->f_1 = 1;
						}
					}
					break;
				case 2:
					TASK::TASK_START_SCENARIO_AT_POSITION((*uParam1)[iVar5 /*10*/], joaat("PROP_HUMAN_SEAT_CHAIR"), __LIB_16__::func_457(iParam2, iVar5), func_177(iParam2, iVar5), -1, false, true, 0, 0.25f, false);
					(uParam1[iVar5 /*10*/])->f_1 = 1;
					break;
				case 7:
					if (!__LIB_0__::func_1(uParam0->f_18, 4))
					{
						return;
					}
					if (__LIB_16__::func_550(iParam2, iVar5) == 0 && !__LIB_16__::func_460(iParam2))
					{
						TASK::TASK_START_SCENARIO_AT_POSITION((*uParam1)[iVar5 /*10*/], joaat("PROP_HUMAN_SEAT_CHAIR"), __LIB_16__::func_457(iParam2, iVar5), func_177(iParam2, iVar5), -1, false, true, 0, 0.25f, false);
						PED::_0x2208438012482A1A((*uParam1)[iVar5 /*10*/], false, false);
						(uParam1[iVar5 /*10*/])->f_1 = 8;
					}
					else
					{
						(uParam1[iVar5 /*10*/])->f_1 = 9;
					}
					break;
				case 8:
					if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar5 /*10*/]) && !ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar5 /*10*/]))
					{
						if (TASK::IS_PED_ACTIVE_IN_SCENARIO((*uParam1)[iVar5 /*10*/], 0))
						{
							PED::_0x463803429297117C((*uParam1)[iVar5 /*10*/], 2546.344f, -1307.994f, 48.42698f, 0, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam1)[iVar5 /*10*/], true);
							(uParam1[iVar5 /*10*/])->f_1 = 9;
						}
						else if (fVar2 > (__LIB_16__::func_473(iParam2, iVar5) + 2f))
						{
							(uParam1[iVar5 /*10*/])->f_1 = 9;
						}
					}
					break;
				case 9:
					if (__LIB_16__::func_467(iParam2))
					{
						if (__LIB_0__::func_1(uParam0->f_18, 16))
						{
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING((*uParam1)[iVar5 /*10*/], __LIB_16__::func_462(iParam2), 0, 10, -1, 0, 0, -1);
							(uParam1[iVar5 /*10*/])->f_1 = 10;
						}
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD((*uParam1)[iVar5 /*10*/], __LIB_16__::func_478(iParam2), 1f, -1, 0.25f, 5373953, 40000f);
						PED::_0x2208438012482A1A((*uParam1)[iVar5 /*10*/], false, false);
						(uParam1[iVar5 /*10*/])->f_1 = 10;
					}
					break;
				case 10:
					if ((bVar0 || PED::IS_PED_SHOOTING(Global_35)) || __LIB_0__::func_1(uParam0->f_18, 32))
					{
						__LIB_1__::func_581(&(uParam0->f_18), 32);
						(uParam1[iVar5 /*10*/])->f_1 = 12;
						return;
					}
					if (__LIB_16__::func_467(iParam2))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iVar5 /*10*/], 658540077, true) == 1)
						{
							(uParam1[iVar5 /*10*/])->f_1 = 11;
						}
						else if (fVar2 > (__LIB_16__::func_473(iParam2, iVar5) + 3f))
						{
							(uParam1[iVar5 /*10*/])->f_1 = 9;
						}
					}
					else if (!__LIB_9__::func_313(ENTITY::GET_ENTITY_COORDS((*uParam1)[iVar5 /*10*/], true, false)))
					{
						PED::SET_PED_CONFIG_FLAG((*uParam1)[iVar5 /*10*/], 301, false);
						PED::SET_PED_CAN_BE_TARGETTED((*uParam1)[iVar5 /*10*/], true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam1)[iVar5 /*10*/], joaat("REL_NO_RELATIONSHIP"));
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam1)[iVar5 /*10*/], false);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam1[iVar5 /*10*/]);
						(uParam1[iVar5 /*10*/])->f_1 = 14;
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iVar5 /*10*/], 713668775, true) != 1 && fVar2 > (__LIB_16__::func_473(iParam2, iVar5) + 3f))
					{
						(uParam1[iVar5 /*10*/])->f_1 = 9;
					}
					break;
				case 11:
					if ((bVar0 || PED::IS_PED_SHOOTING(Global_35)) || __LIB_0__::func_1(uParam0->f_18, 32))
					{
						__LIB_1__::func_581(&(uParam0->f_18), 32);
						(uParam1[iVar5 /*10*/])->f_1 = 12;
						return;
					}
					TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(__LIB_16__::func_462(iParam2), &iVar3);
					TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(__LIB_16__::func_462(iParam2), ENTITY::GET_ENTITY_COORDS((*uParam1)[iVar5 /*10*/], true, false), &iVar4);
					if (TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iVar5 /*10*/], 658540077, true) != 1 || iVar4 >= (iVar3 - 2))
					{
						PED::SET_PED_CONFIG_FLAG((*uParam1)[iVar5 /*10*/], 301, false);
						PED::SET_PED_CAN_BE_TARGETTED((*uParam1)[iVar5 /*10*/], true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam1)[iVar5 /*10*/], joaat("REL_NO_RELATIONSHIP"));
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam1)[iVar5 /*10*/], false);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam1[iVar5 /*10*/]);
						(uParam1[iVar5 /*10*/])->f_1 = 14;
					}
					break;
				case 12:
					PED::SET_PED_CONFIG_FLAG((*uParam1)[iVar5 /*10*/], 301, false);
					PED::SET_PED_CAN_BE_TARGETTED((*uParam1)[iVar5 /*10*/], true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam1)[iVar5 /*10*/], joaat("REL_NO_RELATIONSHIP"));
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam1)[iVar5 /*10*/], false);
					TASK::_TASK_SMART_FLEE_STYLE_PED((*uParam1)[iVar5 /*10*/], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam1[iVar5 /*10*/]);
					(uParam1[iVar5 /*10*/])->f_1 = 14;
					break;
				case 13:
					if (TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iVar5 /*10*/], 713668775, true) != 1 && !TASK::IS_PED_ACTIVE_IN_SCENARIO((*uParam1)[iVar5 /*10*/], 0))
					{
						PED::DELETE_PED(uParam1[iVar5 /*10*/]);
						(uParam1[iVar5 /*10*/])->f_1 = 14;
					}
					else
					{
						(uParam1[iVar5 /*10*/])->f_1 = 8;
					}
					break;
				case 14:
					break;
			}
		}
		iVar5++;
	}
}

void func_235(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (ANIMSCENE::_0x8D81E7824B7753F7(iParam0->f_48, "s_Performance_P1", 1))
	{
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			iVar1 = iVar0;
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1143[iVar1]))
			{
				if (iVar1 == 1)
				{
					__LIB_1__::func_581(&(Global_1394141.f_1326), 32768);
				}
				Global_1394141.f_1332 = __LIB_16__::func_744(iVar1);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 8;
		while (iVar0 <= 16)
		{
			iVar2 = iVar0;
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1143[iVar2]))
			{
				Global_1394141.f_1332 = __LIB_16__::func_744(iVar2);
			}
			iVar0++;
		}
	}
}

int func_268(int iParam0)
{
	if (iParam0 == joaat("CS_ODDFELLOWSPINHEAD"))
	{
		return -761111297;
	}
	else if (iParam0 == joaat("CS_MISSMARJORIE"))
	{
		return -761111297;
	}
	else if (iParam0 == joaat("CS_MAGNIFICO"))
	{
		return -761111297;
	}
	return joaat("META_OUTFIT_DEFAULT");
}

void func_293(int* iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	vector3 vVar5;
	int iVar8;
	if ((ENTITY::DOES_ENTITY_EXIST(*iParam0) && !iParam0->f_9) && iParam0->f_5 != -1)
	{
		iVar0 = 2;
		if (PED::IS_PED_MALE(*iParam0))
		{
			iVar0 = 1;
		}
		vVar1 = { __LIB_16__::func_457(iParam1, iParam0->f_2) };
		fVar4 = func_177(iParam1, iParam0->f_2);
		vVar5 = { 0f, 0f, fVar4 };
		iVar8 = __LIB_16__::func_550(iParam1, iParam0->f_2);
		iParam0->f_6 = -1;
		iParam0->f_7 = __LIB_16__::func_551(iParam0->f_5);
		iParam0->f_8 = __LIB_16__::func_712(iParam0->f_5, iVar0, iVar8);
		if (iVar8 == 0)
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, iParam0->f_7, iParam0->f_8, vVar1, vVar5, 0.75f, -0.75f, -1, 49153, __LIB_16__::func_471(), 2, 1, 0);
		}
		else
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, iParam0->f_7, iParam0->f_8, vVar1, vVar5, 0.75f, -0.75f, -1, 49153, __LIB_16__::func_471(), 2, 0, 0);
		}
	}
	if (!iParam0->f_9)
	{
		iParam0->f_5 = -1;
		iParam0->f_6 = -1;
	}
}

void func_298(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	int iVar10;
	if ((ENTITY::DOES_ENTITY_EXIST(*uParam0) && uParam0->f_6 != -1) && !uParam0->f_9)
	{
		iVar0 = 2;
		if (PED::IS_PED_MALE(*uParam0))
		{
			iVar0 = 1;
		}
		vVar1 = { __LIB_16__::func_457(iParam1, uParam0->f_2) };
		fVar4 = func_177(iParam1, uParam0->f_2);
		vVar5 = { 0f, 0f, fVar4 };
		iVar8 = __LIB_16__::func_550(iParam1, uParam0->f_2);
		if (uParam0->f_6 == 26)
		{
			iVar9 = __LIB_16__::func_481(uParam0->f_2);
			uParam0->f_6 = iVar9;
			uParam0->f_7 = __LIB_16__::func_551(uParam0->f_6);
			uParam0->f_8 = __LIB_16__::func_712(uParam0->f_6, iVar0, iVar8);
		}
		else if (uParam0->f_6 == 31)
		{
			iVar10 = __LIB_16__::func_482(uParam0->f_2);
			uParam0->f_6 = iVar10;
			uParam0->f_7 = __LIB_16__::func_551(uParam0->f_6);
			uParam0->f_8 = __LIB_16__::func_712(uParam0->f_6, iVar0, iVar8);
		}
		else
		{
			uParam0->f_7 = __LIB_16__::func_551(uParam0->f_6);
			uParam0->f_8 = __LIB_16__::func_712(uParam0->f_6, iVar0, iVar8);
		}
		if (iVar8 == 0)
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*uParam0, uParam0->f_7, uParam0->f_8, vVar1, vVar5, 0.75f, -0.75f, -1, 49154, 0f, 2, 1, 0);
		}
		else
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*uParam0, uParam0->f_7, uParam0->f_8, vVar1, vVar5, 0.75f, -0.75f, -1, 49154, 0f, 2, 0, 0);
		}
	}
}

void func_299(var uParam0, int* iParam1)
{
	float fVar0;
	bool bVar1;
	fVar0 = 0f;
	bVar1 = false;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_1394141.f_1335))
	{
		fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Global_1394141.f_1335);
		bVar1 = true;
	}
	switch (*uParam0)
	{
		case 9:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141.f_1335, "PL_A_Performance") && fVar0 > 0.82f)
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1394141.f_1335, "Crowd_Member", *iParam1, 0);
							__LIB_0__::func_19(&(uParam0->f_11), 1);
						}
						break;
					case 1:
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141.f_1335, "PL_A_Performance") && fVar0 > 0.9f)
						{
							func_293(iParam1, 0);
							__LIB_0__::func_19(&(uParam0->f_11), 2);
						}
						break;
					case 2:
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141.f_1335, "PL_D_LOOP_2_Challenge_Crowd") && fVar0 > 0.95f)
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1394141.f_1335, "Crowd_Member", *iParam1, 0);
							__LIB_0__::func_19(&(uParam0->f_11), 3);
						}
						break;
					case 3:
						break;
				}
			}
			break;
		case 12:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141.f_1335, "Pl_BreathLoop"))
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1394141.f_1335, "male", *iParam1, 0);
							__LIB_0__::func_19(&(uParam0->f_11), 1);
						}
						break;
					case 1:
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141.f_1335, "Pl_BreathFail") && ANIMSCENE::_0x005E6F28DD7ED58D(Global_1394141.f_1335, "male"))
						{
							PED::FORCE_PED_MOTION_STATE(*iParam1, joaat("MOTIONSTATE_WALK"), false, 0, false);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, 2504.978f, -1245.074f, 48.2112f, 1f, -1, 0.25f, 0, 40000f);
							__LIB_0__::func_19(&(uParam0->f_11), 2);
						}
						break;
					case 2:
						if (__LIB_0__::func_163(*iParam1, 713668775))
						{
							PED::SET_PED_KEEP_TASK(*iParam1, true);
							__LIB_16__::func_479(*iParam1);
							*iParam1 = 0;
							Global_1394141.f_1334 = 0;
							__LIB_0__::func_19(&(uParam0->f_11), 3);
						}
						break;
					case 3:
						break;
				}
			}
			break;
		case 10:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (ANIMSCENE::GET_ANIM_SCENE_BOOL(Global_1394141.f_1335, "BoolLoop"))
						{
							PED::DELETE_PED(iParam1);
							*iParam1 = 0;
							Global_1394141.f_1334 = 0;
							__LIB_0__::func_19(&(uParam0->f_11), 1);
						}
						break;
					case 1:
						break;
				}
			}
			break;
		case 15:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141.f_1335, "pbl_CrowdChallenge_P2") && ANIMSCENE::_0x005E6F28DD7ED58D(Global_1394141.f_1335, "CrowdMember"))
						{
							PED::DELETE_PED(iParam1);
							*iParam1 = 0;
							__LIB_0__::func_19(&(uParam0->f_11), 1);
						}
						break;
					case 1:
						Global_1394141.f_1334 = 0;
						break;
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
			{
				PED::DELETE_PED(iParam1);
				*iParam1 = 0;
				Global_1394141.f_1334 = 0;
			}
			break;
		case 20:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_1394141.f_1335) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1394141.f_1335, false)) && ANIMSCENE::_0x1F0E401031E20146(Global_1394141.f_1335, "pl_Performance")) && ANIMSCENE::_0x8D81E7824B7753F7(Global_1394141.f_1335, "s_Performance_P2", 1))
						{
							__LIB_0__::func_19(&(uParam0->f_11), 1);
						}
						break;
					case 1:
						if (__LIB_0__::func_1(Global_1394141.f_1326, 2048) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Global_1394141.f_1335) > 0.96f)
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Global_1394141.f_1335, "CS_GENSTORYMALE", *iParam1);
							ENTITY::SET_ENTITY_COORDS(*iParam1, 2538.857f, -1312.293f, 48.21665f, true, false, true, true);
							PED::DELETE_PED(iParam1);
							*iParam1 = 0;
							Global_1394141.f_1334 = 0;
							__LIB_0__::func_19(&(uParam0->f_11), 2);
						}
						break;
					case 2:
						break;
				}
			}
			else
			{
				iParam1->f_5 = 2;
				func_293(iParam1, 0);
				Global_1394141.f_1334 = 0;
			}
			break;
	}
}

