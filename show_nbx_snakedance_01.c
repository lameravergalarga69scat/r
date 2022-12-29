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
	struct<15> Local_1141 = { 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	float fLocal_1163 = 0f;
	float fLocal_1164 = 0f;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
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
	fLocal_1163 = 1f;
	fLocal_1164 = 1f;
	bVar0 = false;
	bVar1 = false;
	bVar2 = false;
	Local_8.f_15 = 0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		__LIB_16__::func_749(&Local_8);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
	{
		__LIB_16__::func_749(&Local_8);
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
				if (__LIB_18__::func_958(&Local_8))
				{
					__LIB_18__::func_959(&Local_8);
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
				if (__LIB_16__::func_730(&(Local_8.f_349), Local_8.f_1, -1))
				{
					__LIB_16__::func_557(&Local_8, 5);
				}
				break;
			case 5:
				if (__LIB_16__::func_440(&Local_8))
				{
					__LIB_16__::func_441(&Local_8);
				}
				if (__LIB_16__::func_736(&(Local_8.f_349), &(Local_8.f_910), Local_8.f_1))
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
					__LIB_16__::func_743(&(Local_8.f_910), &(Local_8.f_349), Local_8.f_1);
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
						__LIB_16__::func_749(&Local_8);
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
					__LIB_16__::func_749(&Local_8);
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
						__LIB_16__::func_749(&Local_8);
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

void func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	iParam0->f_74[0] = joaat("CS_SWORDDANCER");
	iParam0->f_74[1] = joaat("A_C_SNAKEREDBOA10FT_01");
	iParam0->f_946 = "SHRCTAU";
	iParam0->f_945 = "SSNKEAU";
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
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_48))
	{
		iParam0->f_48 = ANIMSCENE::_CREATE_ANIM_SCENE("script@shows@snake_dancer@act1_p1@action", 2, __LIB_16__::func_745(0), false, true);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (11 - 1))
	{
		iVar1 = iVar0;
		Local_1141.f_2[iVar0] = MISC::GET_HASH_KEY(func_157(iVar1));
		iVar0++;
	}
	Local_1141.f_14 = 0;
	PED::_0xF008E0BA1FE1D644(2);
}

void func_63(int iParam0)
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_48))
	{
		return;
	}
	bVar0 = ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_48, false);
	fVar1 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_48);
	if (bVar0)
	{
		func_235(iParam0);
	}
	switch (Local_1141)
	{
		case 0:
			__LIB_1__::func_581(&(Global_1394141.f_1325), 16);
			__LIB_1__::func_581(&(Global_1394141.f_1325), 65536);
			Global_1394141.f_1322 = 1;
			__LIB_1__::func_649(&Local_1141, 1);
			break;
		case 1:
			if (!__LIB_16__::func_524(iParam0->f_48, __LIB_16__::func_745(1), "SNAKE DANCE 01"))
			{
				return;
			}
			__LIB_1__::func_649(&Local_1141, 2);
			break;
		case 2:
			if (fVar1 > 0.99f)
			{
				__LIB_10__::func_942(iParam0->f_48, __LIB_16__::func_745(1), "SNAKE DANCE 01");
				Local_1141.f_14 = 1;
				__LIB_1__::func_581(&(iParam0->f_16), 524288);
				__LIB_16__::func_738(1);
				BUILTIN::SETTIMERA(0);
				__LIB_1__::func_649(&Local_1141, 3);
			}
			break;
		case 3:
			if (!__LIB_0__::func_1(Local_1141.f_1, 2) && AUDIO::LOAD_STREAM(func_238(0), func_239()))
			{
				__LIB_1__::func_581(&(Local_1141.f_1), 2);
			}
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, __LIB_16__::func_745(1)))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_48, __LIB_16__::func_745(0)))
				{
					__LIB_16__::func_449(iParam0->f_48, __LIB_16__::func_745(0), __LIB_16__::func_745(0));
				}
				if (!__LIB_16__::func_524(iParam0->f_48, __LIB_16__::func_745(3), "SNAKE DANCE 01") || !__LIB_16__::func_524(iParam0->f_48, __LIB_16__::func_745(2), "SNAKE DANCE 01"))
				{
					return;
				}
				if (__LIB_0__::func_1(iParam0->f_16, 32))
				{
					BUILTIN::SETTIMERA(0);
					__LIB_1__::func_649(&Local_1141, 5);
					return;
				}
				if (BUILTIN::TIMERA() > 7000)
				{
					__LIB_1__::func_649(&Local_1141, 4);
				}
			}
			break;
		case 4:
			__LIB_10__::func_942(iParam0->f_48, __LIB_16__::func_745(2), "SNAKE DANCE 01");
			Local_1141.f_14 = 2;
			__LIB_16__::func_738(0);
			__LIB_1__::func_649(&Local_1141, 6);
			break;
		case 5:
			if (__LIB_0__::func_1(Local_1141.f_1, 2))
			{
				AUDIO::PLAY_STREAM_FROM_POSITION(2552.53f, -1310.069f, 49.21665f, AUDIO::_0x0556C784FA056628(func_238(0), func_239()));
				__LIB_1__::func_993(&(Local_1141.f_1), 2);
			}
			if (iParam0->f_14)
			{
				Global_1394141.f_1324 = 1;
			}
			__LIB_16__::func_738(0);
			__LIB_10__::func_942(iParam0->f_48, __LIB_16__::func_745(3), "SNAKE DANCE 01");
			Local_1141.f_14 = 3;
			__LIB_1__::func_649(&Local_1141, 6);
			break;
		case 6:
			bVar2 = false;
			if (bVar0)
			{
				if (fVar1 > 0.85f && ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, __LIB_16__::func_745(2)))
				{
					bVar2 = true;
				}
				if (fVar1 > 0.15f && ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, __LIB_16__::func_745(3)))
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				Global_1394141.f_1321 = 1;
				if (!iParam0->f_14)
				{
					__LIB_1__::func_581(&(Global_1394141.f_1325), 4);
					__LIB_1__::func_581(&(Global_1394141.f_1325), 8192);
				}
				__LIB_1__::func_581(&(Global_1394141.f_1325), 32);
				__LIB_1__::func_581(&(Global_1394141.f_1325), 32768);
				__LIB_1__::func_581(&(iParam0->f_16), 8388608);
				__LIB_1__::func_649(&Local_1141, 7);
			}
			break;
		case 7:
			break;
	}
}

char* func_157(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CROWD_SNAKEDANCER1_01";
		case 1:
			return "CROWD_SNAKEDANCER1_02";
		case 2:
			return "CROWD_SNAKEDANCER1_03";
		case 3:
			return "CROWD_SNAKEDANCER1_04";
		case 4:
			return "CROWD_SNAKEDANCER1_05";
		case 5:
			return "CROWD_SNAKEDANCER1_06";
		case 6:
			return "CROWD_SNAKEDANCER1_07";
		case 7:
			return "CROWD_SNAKEDANCER1_08";
		case 8:
			return "CROWD_SNAKEDANCER1_01";
		case 9:
			return "CROWD_SNAKEDANCER1_02";
		case 10:
			return "CROWD_SNAKEDANCER1_01";
		default:
			break;
	}
	return "";
}

void func_235(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	switch (Local_1141.f_14)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				iVar1 = iVar0;
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], Local_1141.f_2[iVar1]))
				{
					if (iVar1 == 1)
					{
						__LIB_1__::func_581(&(Global_1394141.f_1326), 32768);
					}
					Global_1394141.f_1332 = __LIB_16__::func_739(iVar1);
				}
				iVar0++;
			}
			break;
		case 1:
			break;
		case 2:
			iVar0 = 8;
			while (iVar0 <= 9)
			{
				iVar2 = iVar0;
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], Local_1141.f_2[iVar2]))
				{
					Global_1394141.f_1332 = __LIB_16__::func_739(iVar2);
				}
				iVar0++;
			}
			break;
		case 3:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], Local_1141.f_2[10]))
			{
				Global_1394141.f_1332 = __LIB_16__::func_739(10);
			}
			break;
	}
}

char* func_238(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Interrupt1_Music";
		default:
			break;
	}
	return "";
}

char* func_239()
{
	return "2150989330_action";
}

