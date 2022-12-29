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
	int iLocal_1143 = 0;
	int iLocal_1144[1] = { 0 };
	int iLocal_1146[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	float fLocal_1167 = 0f;
	float fLocal_1168 = 0f;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
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
	fLocal_1167 = 1f;
	fLocal_1168 = 1f;
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
				if (__LIB_0__::func_0(&Local_8))
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
	iParam0->f_74[0] = joaat("CS_ESCAPEARTIST");
	iParam0->f_74[1] = joaat("CS_ESCAPEARTISTASSISTANT");
	iParam0->f_58[0] = joaat("S_NOOSESTAND01X");
	iParam0->f_58[1] = joaat("P_CS_STRAIGHTJACKET");
	iParam0->f_58[2] = joaat("P_DIVIDER01X");
	iParam0->f_58[3] = joaat("P_CS_NOOSE01XB");
	iParam0->f_50 = { 2546.453f, -1303.998f, 46.793f };
	iParam0->f_53 = { 0f, 0f, 40f };
	iParam0->f_946 = "SHRCTAU";
	iParam0->f_945 = "SHENAUD";
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
	__LIB_1__::func_581(&(iParam0->f_17), 1);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_48))
	{
		iParam0->f_48 = ANIMSCENE::_CREATE_ANIM_SCENE(func_156(), 2, func_157(0), false, true);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (12 - 1))
	{
		iVar1 = iVar0;
		iLocal_1146[iVar0] = MISC::GET_HASH_KEY(func_158(iVar1));
		iVar0++;
	}
	iLocal_1159 = 0;
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
			if (!__LIB_16__::func_717(&(iParam0->f_81[iVar0]), iParam0->f_74[iVar0], iParam0->f_42, 0f))
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
	func_168(iParam0);
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
	func_169(iParam0);
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
			iVar3 = POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(__LIB_16__::func_455(iParam1), __LIB_16__::func_456(iParam1, iVar2), -156825994, false, true, func_178(iParam1, iVar2));
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
				(*uParam0)[iVar2 /*10*/] = __LIB_8__::func_931(iVar3, func_178(iParam1, iVar2), func_179(iParam1, iVar2), 1, 1, __LIB_16__::func_721(iParam1, iVar2), 1, 1, 1, 0, 0, 0, 0);
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
			func_186(uParam0[iVar1 /*10*/], iParam2);
		}
		else
		{
			(uParam0[iVar1 /*10*/])->f_1 = 1;
			(uParam0[iVar1 /*10*/])->f_2 = iVar1;
			func_187(uParam0[iVar1 /*10*/], iParam2);
		}
		iVar1++;
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
	func_214(uParam0, uParam1, iParam2);
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
	bool bVar4;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_48))
	{
		return;
	}
	fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_48);
	bVar1 = ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_48, false);
	if (__LIB_0__::func_1(uLocal_1142, 1) && !__LIB_0__::func_1(uLocal_1142, 2))
	{
		if (!__LIB_0__::func_1(uLocal_1142, 4))
		{
			__LIB_1__::func_581(&(Global_1394141.f_1325), 16);
			__LIB_1__::func_581(&uLocal_1142, 4);
		}
		if (!__LIB_0__::func_1(uLocal_1142, 8))
		{
			__LIB_1__::func_581(&(Global_1394141.f_1325), 1024);
			__LIB_1__::func_581(&uLocal_1142, 8);
		}
		if (__LIB_0__::func_1(uLocal_1142, 4) && __LIB_0__::func_1(uLocal_1142, 8))
		{
			__LIB_1__::func_581(&uLocal_1142, 2);
		}
	}
	if (__LIB_0__::func_1(uLocal_1142, 16) && __LIB_0__::func_1(uLocal_1142, 2))
	{
		if (!__LIB_0__::func_1(uLocal_1142, 32))
		{
			__LIB_1__::func_581(&(Global_1394141.f_1325), 32);
			__LIB_1__::func_581(&uLocal_1142, 32);
			__LIB_1__::func_993(&uLocal_1142, 2);
		}
	}
	if (!__LIB_0__::func_1(uLocal_1142, 2048))
	{
		if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, func_157(0)))
		{
			if (!__LIB_0__::func_1(uLocal_1142, 1024))
			{
				if (fVar0 > 0.56f)
				{
					MISC::_0xE98D55C5983F2509(iParam0->f_81[0]);
					PED::SET_PED_CONFIG_FLAG(iParam0->f_81[0], 297, false);
					PED::SET_PED_CONFIG_FLAG(iParam0->f_81[0], 315, false);
					PED::SET_PED_CONFIG_FLAG(iParam0->f_81[0], 130, false);
					__LIB_1__::func_581(&uLocal_1142, 1024);
				}
			}
			if (fVar0 > 0.6f)
			{
				MISC::_0x870708A6E147A9AD(iParam0->f_81[0], "", 20f, 0, 0, 0, 0, 0, 0, -1);
				PED::SET_PED_CONFIG_FLAG(iParam0->f_81[0], 297, true);
				PED::SET_PED_CONFIG_FLAG(iParam0->f_81[0], 315, true);
				PED::SET_PED_CONFIG_FLAG(iParam0->f_81[0], 130, true);
				__LIB_1__::func_581(&uLocal_1142, 2048);
			}
		}
	}
	if (bVar1)
	{
		func_236(iParam0);
	}
	switch (iLocal_1141)
	{
		case 0:
			iVar2 = 0;
			while (iVar2 <= 0)
			{
				iVar3 = iVar2;
				STREAMING::REQUEST_MODEL(func_237(iVar3), false);
				if (!STREAMING::HAS_MODEL_LOADED(func_237(iVar3)))
				{
					return;
				}
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 <= 0)
			{
				iVar3 = iVar2;
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1144[iVar3]))
				{
					iLocal_1144[iVar3] = OBJECT::CREATE_OBJECT(func_237(iVar3), func_238(iVar3), true, true, false, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1144[iVar3]) || !ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_1144[iVar3]))
				{
					return;
				}
				iVar2++;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1144[0]))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_1144[0], func_238(0), true, false, true, true);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_1144[0], true);
			}
			iLocal_1143 = PHYSICS::_ADD_ROPE_2(2546.724f, -1309.638f, 50.76665f, 0f, 0f, 0f, 0.3f, 1, false, -1, -1f);
			PHYSICS::_0x462FF2A432733A44(iLocal_1143, iLocal_1144[0], iParam0->f_66[3], 0f, 0f, 0f, 0f, 0f, 0f, 0, 0);
			PHYSICS::_0x522FA3F490E2F7AC(iLocal_1143, 1, 1);
			Global_1394141.f_1322 = 1;
			__LIB_1__::func_649(&iLocal_1141, 1);
			break;
		case 1:
			if (!__LIB_16__::func_524(iParam0->f_48, func_157(1), func_156()))
			{
				return;
			}
			__LIB_1__::func_649(&iLocal_1141, 2);
			break;
		case 2:
			if (!__LIB_0__::func_1(uLocal_1142, 1) && fVar0 > 0.949f)
			{
				__LIB_1__::func_581(&uLocal_1142, 1);
			}
			if (!__LIB_0__::func_1(uLocal_1142, 128) && fVar0 > 0.6f)
			{
				iParam0->f_12 = iParam0->f_81[0];
				__LIB_1__::func_581(&uLocal_1142, 128);
			}
			if (fVar0 > 0.99f)
			{
				__LIB_10__::func_942(iParam0->f_48, func_157(1), func_156());
				iLocal_1159 = 1;
				__LIB_1__::func_649(&iLocal_1141, 3);
			}
			break;
		case 3:
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, func_157(1)))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_48, func_157(0)))
				{
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(iParam0->f_48, func_157(0));
				}
				if (__LIB_16__::func_524(iParam0->f_48, func_157(2), func_156()) && fVar0 > 0.99f)
				{
					__LIB_10__::func_942(iParam0->f_48, func_157(2), func_156());
					iLocal_1159 = 2;
					__LIB_1__::func_649(&iLocal_1141, 4);
				}
			}
			break;
		case 4:
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, func_157(2)))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_48, func_157(1)))
				{
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(iParam0->f_48, func_157(1));
				}
				if (!__LIB_0__::func_1(uLocal_1142, 256) && AUDIO::LOAD_STREAM(func_240(1), func_241()))
				{
					__LIB_1__::func_581(&uLocal_1142, 256);
				}
				if (fVar0 > 0.477f)
				{
					if (__LIB_1__::func_205(Global_35, Global_1394141.f_7[*iParam0 /*31*/].f_4, 1, 0))
					{
						EVENT::_0xB6F4825153920582();
					}
					if (!__LIB_0__::func_1(Global_1394141.f_1326, 2) && ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_48, func_157(4)))
					{
						func_242();
						__LIB_1__::func_581(&(Global_1394141.f_1326), 2);
					}
					if (PHYSICS::_0x79C2BEC82CFD7F7F(iLocal_1143))
					{
						__LIB_10__::func_942(iParam0->f_48, func_157(4), func_156());
						iLocal_1159 = 4;
						__LIB_1__::func_993(&(Global_1394141.f_1326), 2);
						func_243();
						__LIB_1__::func_649(&iLocal_1141, 6);
						return;
					}
				}
				if ((__LIB_16__::func_524(iParam0->f_48, func_157(3), func_156()) && __LIB_16__::func_524(iParam0->f_48, func_157(4), func_156())) && fVar0 > 0.99f)
				{
					BUILTIN::SETTIMERA(0);
					__LIB_10__::func_942(iParam0->f_48, func_157(3), func_156());
					iLocal_1159 = 3;
					if (__LIB_0__::func_1(uLocal_1142, 256))
					{
						AUDIO::PLAY_STREAM_FROM_POSITION(2552.53f, -1310.069f, 49.21665f, AUDIO::_0x0556C784FA056628(func_240(1), func_241()));
					}
					__LIB_1__::func_649(&iLocal_1141, 5);
				}
			}
			break;
		case 5:
			if (__LIB_1__::func_205(Global_35, Global_1394141.f_7[*iParam0 /*31*/].f_4, 1, 0))
			{
				EVENT::_0xB6F4825153920582();
			}
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, func_157(3)))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_48, func_157(2)))
				{
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(iParam0->f_48, func_157(2));
				}
			}
			if (!__LIB_0__::func_1(Global_1394141.f_1326, 2) && ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_48, func_157(4)))
			{
				func_242();
				__LIB_1__::func_581(&(Global_1394141.f_1326), 2);
			}
			if (PHYSICS::_0x79C2BEC82CFD7F7F(iLocal_1143))
			{
				__LIB_9__::func_699(&(iParam0->f_48), "LoopBool", 1, func_156());
				__LIB_10__::func_942(iParam0->f_48, func_157(4), func_156());
				iLocal_1159 = 4;
				__LIB_1__::func_993(&(Global_1394141.f_1326), 2);
				func_243();
				PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
				__LIB_1__::func_649(&iLocal_1141, 6);
				return;
			}
			if (BUILTIN::TIMERA() > 7000)
			{
				__LIB_1__::func_993(&(Global_1394141.f_1326), 2);
				func_243();
				if (!__LIB_0__::func_1(uLocal_1142, 4096))
				{
					bVar4 = false;
					if (__LIB_0__::func_181())
					{
						if (__LIB_2__::func_813(&(iParam0->f_954), __LIB_16__::func_556(71), 0, -1, 0, 0))
						{
							bVar4 = true;
						}
					}
					else if (__LIB_2__::func_813(&(iParam0->f_954), __LIB_16__::func_556(70), 0, -1, 0, 0))
					{
						bVar4 = true;
					}
					if (bVar4)
					{
						__LIB_1__::func_581(&uLocal_1142, 4096);
						__LIB_1__::func_581(&uLocal_1142, 16);
						Global_1394141.f_1324 = 1;
						__LIB_1__::func_649(&iLocal_1141, 7);
					}
				}
			}
			break;
		case 6:
			if (AUDIO::IS_STREAM_PLAYING(AUDIO::_0x0556C784FA056628(func_240(1), func_241())))
			{
				AUDIO::STOP_STREAM(AUDIO::_0x0556C784FA056628(func_240(1), func_241()));
			}
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, func_157(4)))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_48) > 0.5f && !__LIB_0__::func_1(uLocal_1142, 4096))
				{
					if (__LIB_0__::func_181())
					{
						if (__LIB_2__::func_813(&(iParam0->f_954), __LIB_16__::func_556(69), 0, -1, 0, 0))
						{
							__LIB_1__::func_581(&uLocal_1142, 4096);
						}
					}
					else if (__LIB_2__::func_813(&(iParam0->f_954), __LIB_16__::func_556(68), 0, -1, 0, 0))
					{
						__LIB_1__::func_581(&uLocal_1142, 4096);
					}
				}
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_48) > 0.7f)
				{
					__LIB_1__::func_649(&iLocal_1141, 7);
				}
			}
			break;
		case 7:
			__LIB_1__::func_993(&(Global_1394141.f_1326), 2);
			func_243();
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_49))
			{
				ANIMSCENE::SET_ANIM_SCENE_RATE(iParam0->f_49, 1.5f);
			}
			if (Global_1394141.f_1331)
			{
				Global_1394141.f_1331 = 0;
			}
			Global_1394141.f_1321 = 1;
			if (!iParam0->f_14)
			{
				__LIB_1__::func_581(&(Global_1394141.f_1325), 4);
				__LIB_1__::func_581(&(Global_1394141.f_1325), 8192);
			}
			__LIB_1__::func_581(&(iParam0->f_16), 8388608);
			__LIB_1__::func_649(&iLocal_1141, 8);
			break;
		case 8:
			break;
	}
}

void func_86(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		iVar1 = iVar0;
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1144[iVar1]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_1144[iVar1]));
		}
		iVar0++;
	}
	iVar2 = AUDIO::_0x0556C784FA056628(func_240(1), func_241());
	if (iVar2 != -1 && AUDIO::IS_STREAM_PLAYING(iVar2))
	{
		AUDIO::STOP_STREAM(iVar2);
	}
	if (PHYSICS::DOES_ROPE_EXIST(iLocal_1143))
	{
		PHYSICS::DELETE_ROPE(&iLocal_1143);
	}
	HUD::_0x26F6BBEA2CE3E3DC();
	PED::_0x7D4E70A67A651C71(3);
}

char* func_156()
{
	return "script@shows@escape_noose@act3_p1@action";
}

char* func_157(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PL_A_Performance";
		case 1:
			return "PL_B_Trying_To_Escape";
		case 2:
			return "PL_C_Choking";
		case 3:
			return "PL_D_Choking_Loop";
		case 4:
			return "PL_E_Shoot_Rope";
		default:
			break;
	}
	return "FAIL";
}

char* func_158(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CROWD_ESCAPENOOSE_01";
		case 1:
			return "CROWD_ESCAPENOOSE_02";
		case 2:
			return "CROWD_ESCAPENOOSE_03";
		case 3:
			return "CROWD_ESCAPENOOSE_04";
		case 4:
			return "CROWD_ESCAPENOOSE_05";
		case 5:
			return "CROWD_ESCAPENOOSE_06";
		case 6:
			return "CROWD_ESCAPENOOSE_07";
		case 7:
			return "CROWD_ESCAPENOOSE_08";
		case 8:
			return "CROWD_ESCAPENOOSE_09";
		case 9:
			return "CROWD_ESCAPENOOSE_01";
		case 10:
			return "CROWD_ESCAPENOOSE_01";
		case 11:
			return "CROWD_ESCAPENOOSE_02";
		default:
			break;
	}
	return "";
}

void func_168(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_81[0]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_81[0], true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_81[1]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_81[1], true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_66[0]))
	{
		iParam0->f_66[0] = OBJECT::CREATE_OBJECT(iParam0->f_58[0], 2546.948f, -1311.025f, 48.21665f, true, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_66[1]))
	{
		iParam0->f_66[1] = OBJECT::CREATE_OBJECT(iParam0->f_58[1], 2538.482f, -1312.094f, 48.21665f, true, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_66[2]))
	{
		iParam0->f_66[2] = OBJECT::CREATE_OBJECT(iParam0->f_58[2], 2538.482f, -1312.094f, 48.21665f, true, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_66[3]))
	{
		iParam0->f_66[3] = OBJECT::CREATE_OBJECT(iParam0->f_58[3], 2538.482f, -1312.094f, 48.21665f, true, true, false, false, true);
	}
}

void func_169(int iParam0)
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "BENJAMIN_NO_JACKET", iParam0->f_81[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "Assistant", iParam0->f_81[1], 0);
	__LIB_16__::func_737(iParam0->f_81[0]);
	__LIB_16__::func_737(iParam0->f_81[1]);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "NOOSE_STAND", iParam0->f_66[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "JACKET", iParam0->f_66[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "DIVIDER", iParam0->f_66[2], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "Noose", iParam0->f_66[3], 0);
	iParam0->f_12 = iParam0->f_81[0];
}

Vector3 func_178(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2541.954f, -1303.652f, 47.51162f;
				case 1:
					return 2542.625f, -1303.628f, 47.50835f;
				case 2:
					return 2543.253f, -1303.504f, 47.51194f;
				case 3:
					return 2543.914f, -1303.447f, 47.50978f;
				case 4:
					return 2544.554f, -1303.35f, 47.51124f;
				case 5:
					return 2545.212f, -1303.286f, 47.48675f;
				case 6:
					return 2540.851f, -1302.391f, 47.83032f;
				case 7:
					return 2541.405f, -1302.162f, 47.83151f;
				case 8:
					return 2542.039f, -1301.995f, 47.83165f;
				case 9:
					return 2542.659f, -1301.895f, 47.83114f;
				case 10:
					return 2543.281f, -1301.785f, 47.83141f;
				case 11:
					return 2543.887f, -1301.719f, 47.8308f;
				case 12:
					return 2544.536f, -1301.635f, 47.831f;
				case 13:
					return 2545.165f, -1301.591f, 47.81311f;
				case 14:
					return 2540.816f, -1300.638f, 48.12306f;
				case 15:
					return 2541.43f, -1300.473f, 48.12244f;
				case 16:
					return 2542.034f, -1300.312f, 48.12096f;
				case 17:
					return 2542.644f, -1300.153f, 48.12228f;
				case 18:
					return 2543.269f, -1300.039f, 48.12248f;
				case 19:
					return 2543.896f, -1299.926f, 48.12423f;
				case 20:
					return 2545.169f, -1299.818f, 48.10023f;
				case 21:
					return 2540.844f, -1298.88f, 48.39516f;
				case 22:
					return 2541.442f, -1298.742f, 48.39409f;
				case 23:
					return 2542.07f, -1298.587f, 48.39284f;
				case 24:
					return 2543.302f, -1298.275f, 48.39411f;
				case 25:
					return 2543.898f, -1298.179f, 48.39465f;
				case 26:
					return 2544.536f, -1298.092f, 48.39633f;
				case 27:
					return 2550.958f, -1303.615f, 47.48922f;
				case 28:
					return 2550.302f, -1303.543f, 47.48922f;
				case 29:
					return 2549.651f, -1303.483f, 47.48394f;
				case 30:
					return 2549.005f, -1303.43f, 47.48394f;
				case 31:
					return 2548.356f, -1303.367f, 47.48394f;
				case 32:
					return 2547.713f, -1303.341f, 47.48394f;
				case 33:
					return 2552.097f, -1302.355f, 47.80622f;
				case 34:
					return 2551.509f, -1302.193f, 47.80622f;
				case 35:
					return 2550.899f, -1302.034f, 47.80622f;
				case 36:
					return 2550.298f, -1301.884f, 47.80622f;
				case 37:
					return 2549.661f, -1301.76f, 47.80622f;
				case 38:
					return 2549.037f, -1301.683f, 47.80622f;
				case 39:
					return 2548.413f, -1301.624f, 47.80622f;
				case 40:
					return 2552.122f, -1300.556f, 48.09521f;
				case 41:
					return 2551.499f, -1300.414f, 48.09521f;
				case 42:
					return 2550.871f, -1300.243f, 48.09521f;
				case 43:
					return 2550.255f, -1300.129f, 48.09521f;
				case 44:
					return 2549.635f, -1300.029f, 48.09521f;
				case 45:
					return 2549.016f, -1299.949f, 48.09521f;
				case 46:
					return 2552.115f, -1298.813f, 48.36841f;
				case 47:
					return 2551.499f, -1298.658f, 48.36841f;
				case 48:
					return 2550.254f, -1298.388f, 48.36841f;
				case 49:
					return 2549.629f, -1298.312f, 48.36841f;
				case 50:
					return 2549.001f, -1298.207f, 48.36841f;
				case 51:
					return 2548.368f, -1298.123f, 48.36841f;
				case 52:
					return 2547.733f, -1298.041f, 48.36841f;
				case 53:
					return 2553.102f, -1299.667f, 49.214f;
				case 54:
					return 2553.129f, -1302.399f, 49.214f;
				case 55:
					return 2539.789f, -1302.37f, 49.214f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -349.1009f, 693.7693f, 116.8875f;
				case 1:
					return -348.4168f, 693.9259f, 116.8925f;
				case 2:
					return -345.9169f, 694.5858f, 116.8741f;
				case 3:
					return -344.2555f, 695.0604f, 116.876f;
				case 4:
					return -349.5025f, 695.6313f, 117.0018f;
				case 5:
					return -345.2958f, 696.7811f, 117.0189f;
				case 6:
					return -350.5786f, 697.272f, 117.1134f;
				case 7:
					return -346.918f, 698.2223f, 117.1139f;
				case 8:
					return -345.2069f, 698.744f, 117.1184f;
				case 9:
					return -350.4303f, 699.0625f, 117.1308f;
				default:
					break;
			}
			break;
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2701.17f, -1354.493f, 47.77215f;
				case 1:
					return 2700.708f, -1354.073f, 47.77014f;
				case 2:
					return 2700.242f, -1353.635f, 47.76572f;
				case 3:
					return 2699.766f, -1353.23f, 47.74422f;
				case 4:
					return 2697.559f, -1350.386f, 47.76871f;
				case 5:
					return 2697.222f, -1349.843f, 47.76798f;
				case 6:
					return 2696.885f, -1349.309f, 47.76988f;
				case 7:
					return 2699.731f, -1355.699f, 47.94025f;
				case 8:
					return 2699.25f, -1355.287f, 47.93497f;
				case 9:
					return 2698.764f, -1354.877f, 47.93819f;
				case 10:
					return 2695.774f, -1351.042f, 47.93525f;
				case 11:
					return 2695.439f, -1350.499f, 47.93626f;
				case 12:
					return 2698.316f, -1356.914f, 48.10247f;
				case 13:
					return 2697.834f, -1356.48f, 48.09552f;
				case 14:
					return 2694.688f, -1352.778f, 48.10484f;
				case 15:
					return 2694.39f, -1352.196f, 48.09603f;
				case 16:
					return 2694.055f, -1351.671f, 48.0974f;
				case 17:
					return 2696.514f, -1357.575f, 48.25399f;
				case 18:
					return 2696.022f, -1357.168f, 48.25772f;
				case 19:
					return 2695.554f, -1356.731f, 48.23498f;
				case 20:
					return 2693.692f, -1354.44f, 48.26648f;
				case 21:
					return 2693.319f, -1353.92f, 48.26515f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -776.0957f, -1365.928f, 43.26698f;
				case 1:
					return -776.1156f, -1365.257f, 43.26892f;
				case 2:
					return -776.1213f, -1364.023f, 43.26947f;
				case 3:
					return -776.0749f, -1361.318f, 43.29291f;
				case 4:
					return -776.0781f, -1360.655f, 43.26656f;
				case 5:
					return -776.107f, -1359.996f, 43.26938f;
				case 6:
					return -777.7452f, -1365.929f, 43.43242f;
				case 7:
					return -778.02f, -1365.272f, 43.45926f;
				case 8:
					return -777.9575f, -1361.315f, 43.4812f;
				case 9:
					return -777.9938f, -1360.662f, 43.45993f;
				case 10:
					return -777.9775f, -1360f, 43.45834f;
				case 11:
					return -779.8451f, -1365.909f, 43.6443f;
				case 12:
					return -779.8615f, -1365.263f, 43.64589f;
				case 13:
					return -779.8595f, -1364.639f, 43.64569f;
				case 14:
					return -779.835f, -1361.3f, 43.67118f;
				case 15:
					return -779.8181f, -1360.642f, 43.64128f;
				case 16:
					return -781.7369f, -1365.253f, 43.83224f;
				case 17:
					return -781.7541f, -1364.628f, 43.83392f;
				case 18:
					return -781.7646f, -1364f, 43.83494f;
				case 19:
					return -781.7217f, -1360.638f, 43.83135f;
				case 20:
					return -781.7209f, -1359.973f, 43.83129f;
				case 21:
					return -781.7397f, -1359.346f, 43.83311f;
				case 22:
					return -781.7122f, -1358.722f, 43.83042f;
				default:
					break;
			}
			return 0f, 0f, 0f;
		}
float func_179(int iParam0, int iParam1)
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
				case 3:
					return -39.02f;
				case 4:
					return -52.61f;
				case 5:
					return -55.28f;
				case 6:
					return -56.79f;
				case 7:
					return -39.3f;
				case 8:
					return -38.34f;
				case 9:
					return -39.92f;
				case 10:
					return -57.96f;
				case 11:
					return -56.65f;
				case 12:
					return -38.24f;
				case 13:
					return -39.76f;
				case 14:
					return -56.13f;
				case 15:
					return -58.55f;
				case 16:
					return -54.07f;
				case 17:
					return -40.84f;
				case 18:
					return -40.21f;
				case 19:
					return -44.17f;
				case 20:
					return -52.32f;
				case 21:
					return -54.76f;
				default:
					break;
			}
			break;
		case 4:
			return -88.69f;
	}
	return -175.57f;
}

void func_186(var uParam0, int iParam1)
{
	if (!PED::IS_PED_USING_ANY_SCENARIO(*uParam0))
	{
		TASK::TASK_START_SCENARIO_AT_POSITION(*uParam0, joaat("PROP_HUMAN_SEAT_CHAIR"), func_178(iParam1, uParam0->f_2), func_179(iParam1, uParam0->f_2), -1, false, true, 0, 0.25f, false);
	}
}

void func_187(var uParam0, int iParam1)
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
		vVar1 = { func_178(iParam1, uParam0->f_2) };
		fVar4 = func_179(iParam1, uParam0->f_2);
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

void func_214(var uParam0, var uParam1, int iParam2)
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
						func_300(uParam1[iVar5 /*10*/], iParam2);
					}
				}
				else if (!uParam0->f_21 && (uParam1[iVar5 /*10*/])->f_1 != 6)
				{
					fVar6 = __LIB_0__::func_665(Global_35, (*uParam1)[iVar5 /*10*/], 1, 1);
					if (fVar6 < 1.5f && __LIB_16__::func_474(uParam1[iVar5 /*10*/]))
					{
						(uParam1[iVar5 /*10*/])->f_5 = __LIB_16__::func_475(iVar5);
						func_300(uParam1[iVar5 /*10*/], iParam2);
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
					func_305(uParam1[iVar5 /*10*/], iParam2);
					(uParam1[iVar5 /*10*/])->f_1 = 4;
					break;
				case 4:
					bVar7 = false;
					if ((uParam1[iVar5 /*10*/])->f_6 == -1)
					{
						func_300(uParam1[iVar5 /*10*/], iParam2);
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
						func_300(uParam1[iVar5 /*10*/], iParam2);
						(uParam1[iVar5 /*10*/])->f_1 = 1;
					}
					break;
				case 5:
					if (!uParam0->f_19)
					{
						func_306(uParam0, uParam1[iVar5 /*10*/]);
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
							func_187(uParam1[iVar5 /*10*/], iParam2);
							(uParam1[iVar5 /*10*/])->f_1 = 1;
						}
						if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1((*uParam1)[iVar5 /*10*/], uParam0->f_12[1 /*2*/]))
						{
							func_187(uParam1[iVar5 /*10*/], iParam2);
							(uParam1[iVar5 /*10*/])->f_1 = 1;
						}
					}
					break;
				case 2:
					TASK::TASK_START_SCENARIO_AT_POSITION((*uParam1)[iVar5 /*10*/], joaat("PROP_HUMAN_SEAT_CHAIR"), func_178(iParam2, iVar5), func_179(iParam2, iVar5), -1, false, true, 0, 0.25f, false);
					(uParam1[iVar5 /*10*/])->f_1 = 1;
					break;
				case 7:
					if (!__LIB_0__::func_1(uParam0->f_18, 4))
					{
						return;
					}
					if (__LIB_16__::func_550(iParam2, iVar5) == 0 && !__LIB_16__::func_460(iParam2))
					{
						TASK::TASK_START_SCENARIO_AT_POSITION((*uParam1)[iVar5 /*10*/], joaat("PROP_HUMAN_SEAT_CHAIR"), func_178(iParam2, iVar5), func_179(iParam2, iVar5), -1, false, true, 0, 0.25f, false);
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

void func_236(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	switch (iLocal_1159)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				iVar1 = iVar0;
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1146[iVar1]))
				{
					if (iVar1 == 1)
					{
						__LIB_1__::func_581(&(Global_1394141.f_1326), 32768);
					}
					Global_1394141.f_1332 = __LIB_16__::func_742(iVar1);
				}
				iVar0++;
			}
			break;
		case 1:
			break;
		case 2:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1146[9]))
			{
				Global_1394141.f_1332 = __LIB_16__::func_742(9);
			}
			break;
		case 3:
			break;
		case 4:
			iVar0 = 10;
			while (iVar0 <= 11)
			{
				iVar2 = iVar0;
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1146[iVar2]))
				{
					Global_1394141.f_1332 = __LIB_16__::func_742(iVar2);
				}
				iVar0++;
			}
			break;
	}
}

int func_237(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("P_SHOTGLASS01X");
		default:
			break;
	}
	return 0;
}

Vector3 func_238(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2546.771f, -1310.344f, 50.83665f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

char* func_240(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Escape_Noose_Curtain_Music";
		case 1:
			return "D_Choking_Loop";
		default:
			break;
	}
	return "FAIL";
}

char* func_241()
{
	return "4224921010_action";
}

void func_242()
{
	__LIB_1__::func_581(&(Global_1394141.f_1326), 1);
	HUD::_0xC5C7A2F6567FCCBC();
	Global_1394141.f_1331 = 1;
}

void func_243()
{
	__LIB_1__::func_993(&(Global_1394141.f_1326), 1);
	HUD::_0x26F6BBEA2CE3E3DC();
	Global_1394141.f_1331 = 0;
}

void func_300(int* iParam0, int iParam1)
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
		vVar1 = { func_178(iParam1, iParam0->f_2) };
		fVar4 = func_179(iParam1, iParam0->f_2);
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

void func_305(var uParam0, int iParam1)
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
		vVar1 = { func_178(iParam1, uParam0->f_2) };
		fVar4 = func_179(iParam1, uParam0->f_2);
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

void func_306(var uParam0, int* iParam1)
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
							func_300(iParam1, 0);
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
				func_300(iParam1, 0);
				Global_1394141.f_1334 = 0;
			}
			break;
	}
}

