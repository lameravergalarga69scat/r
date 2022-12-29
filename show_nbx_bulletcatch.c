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
	int iLocal_1142 = 0;
	int iLocal_1143 = 0;
	int iLocal_1144 = 0;
	int iLocal_1145 = 0;
	int iLocal_1146 = 0;
	int iLocal_1147 = 0;
	bool bLocal_1148 = false;
	bool bLocal_1149 = false;
	bool bLocal_1150 = false;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	int iLocal_1155[33] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	float fLocal_1196 = 0f;
	float fLocal_1197 = 0f;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
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
	fLocal_1196 = 1f;
	fLocal_1197 = 1f;
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
	iParam0->f_58[0] = joaat("P_BUCKET03X");
	iParam0->f_58[1] = joaat("P_BARSTOOL01X");
	iParam0->f_58[2] = joaat("P_BOTTLEBEER01X");
	iParam0->f_88[0] = joaat("WEAPON_REVOLVER_CATTLEMAN");
	iParam0->f_88[1] = joaat("WEAPON_REVOLVER_CATTLEMAN");
	iParam0->f_946 = "SHRCTAU";
	__LIB_1__::func_581(&(iParam0->f_17), 1);
	__LIB_1__::func_581(&(iParam0->f_16), 131072);
	if (__LIB_0__::func_181())
	{
		__LIB_0__::func_928(&(iParam0->f_954), Global_35, "JOHN", 0);
	}
	else
	{
		__LIB_0__::func_928(&(iParam0->f_954), Global_35, "ARTHUR", 0);
	}
	iParam0->f_50 = { 2546.453f, -1303.998f, 46.793f };
	iParam0->f_53 = { 0f, 0f, 40f };
	iParam0->f_945 = "SHBCAUD";
	iParam0->f_910 = Local_8;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 32)
	{
		iVar1 = iVar0;
		iLocal_1155[iVar0] = MISC::GET_HASH_KEY(func_156(iVar1));
		iVar0++;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_48))
	{
		iParam0->f_48 = ANIMSCENE::_CREATE_ANIM_SCENE(func_157(), 2, func_158(0), false, true);
	}
	iLocal_1145 = 0;
	PED::_0xF008E0BA1FE1D644(2);
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
			if (!func_166(&(iParam0->f_81[iVar0]), iParam0->f_74[iVar0], iParam0->f_42, 0f))
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

bool func_46(int iParam0)
{
	var uVar0[1];
	var uVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_81[2]))
	{
		uVar2 = 1;
		if (__LIB_4__::func_206(&uVar0, &uVar2, 1, 2545.19f, -1303.303f, 47.48392f, 0.5f, 0, 1, 1, -1, 1, 0, -1082130432 /* Float: -1f */, 0, 0) > 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uVar0[0]) && !ENTITY::IS_ENTITY_DEAD(uVar0[0]))
			{
				iParam0->f_81[2] = uVar0[0];
				__LIB_0__::func_928(&(iParam0->f_954), iParam0->f_81[2], "SHBC_CROWD1", 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "Crowd_Member", iParam0->f_81[2], 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_81[2], true);
				WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0->f_81[2], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam0->f_81[2], "Default_Show_Performers_Group", -1f);
				return true;
			}
		}
		return false;
	}
	return true;
}

void func_63(int iParam0)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_48))
	{
		return;
	}
	bVar0 = ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_48, false);
	fVar1 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_48);
	iVar3 = __LIB_0__::func_57(iParam0->f_81[1]);
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &iVar2, 0, 0))
	{
		if (iVar2 == iVar3)
		{
			iParam0->f_12 = iParam0->f_81[1];
		}
		else
		{
			iParam0->f_12 = iParam0->f_81[0];
		}
	}
	switch (iLocal_1145)
	{
		case 0:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1155[0]))
			{
				Global_1394141.f_1332 = 13;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1155[1]))
			{
				Global_1394141.f_1332 = 14;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1155[2]))
			{
				__LIB_1__::func_581(&(Global_1394141.f_1326), 32768);
				Global_1394141.f_1332 = 15;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1155[3]))
			{
				Global_1394141.f_1332 = 16;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1155[4]))
			{
				Global_1394141.f_1332 = 17;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1155[5]))
			{
				Global_1394141.f_1332 = 18;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1155[6]))
			{
				Global_1394141.f_1332 = 19;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1155[7]))
			{
				Global_1394141.f_1332 = 20;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1155[8]))
			{
				Global_1394141.f_1332 = 21;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1155[9]))
			{
				Global_1394141.f_1332 = 22;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1155[10]))
			{
				Global_1394141.f_1332 = 23;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1155[11]))
			{
				Global_1394141.f_1332 = 24;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1155[12]))
			{
				Global_1394141.f_1332 = 25;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1155[13]))
			{
				Global_1394141.f_1332 = 26;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1155[14]))
			{
				Global_1394141.f_1332 = 27;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1155[15]))
			{
				Global_1394141.f_1332 = 28;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1155[16]))
			{
				Global_1394141.f_1332 = 29;
			}
			break;
		case 4:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1155[17]))
			{
				Global_1394141.f_1332 = 30;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1155[18]))
			{
				Global_1394141.f_1332 = 31;
			}
			break;
		case 5:
		case 6:
		case 7:
		case 8:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1155[19]))
			{
				Global_1394141.f_1332 = 32;
			}
			break;
		case 10:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1155[20]))
			{
				Global_1394141.f_1332 = 33;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1155[21]))
			{
				Global_1394141.f_1332 = 34;
			}
			break;
		case 11:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1155[22]))
			{
				Global_1394141.f_1332 = 35;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1155[23]))
			{
				Global_1394141.f_1332 = 36;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1155[24]))
			{
				Global_1394141.f_1332 = 37;
			}
			break;
		case 3:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1155[25]))
			{
				Global_1394141.f_1332 = 38;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1155[26]))
			{
				Global_1394141.f_1332 = 39;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1155[27]))
			{
				Global_1394141.f_1332 = 40;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1155[28]))
			{
				Global_1394141.f_1332 = 41;
			}
			break;
		case 9:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1155[29]))
			{
				Global_1394141.f_1332 = 42;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1155[30]))
			{
				Global_1394141.f_1332 = 43;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1155[31]))
			{
				Global_1394141.f_1332 = 44;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], iLocal_1155[32]))
			{
				Global_1394141.f_1332 = 45;
			}
			break;
		case 1:
			break;
		case 2:
			break;
	}
	switch (iLocal_1141)
	{
		case 0:
			MISC::_0x870708A6E147A9AD(iParam0->f_81[1], "", 20f, 0, 0, 0, 0, 0, 0, -1);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_81[1], 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_81[1], 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_81[1], 130, true);
			PED::SET_PED_MAX_HEALTH(iParam0->f_81[0], 9000);
			__LIB_4__::func_63(iParam0->f_81[0], 9000);
			Global_1394141.f_1322 = 1;
			__LIB_1__::func_649(&iLocal_1141, 1);
			break;
		case 1:
			if (!__LIB_16__::func_524(iParam0->f_48, func_158(1), func_157()))
			{
				return;
			}
			if (!__LIB_16__::func_524(iParam0->f_48, func_158(2), func_157()))
			{
				return;
			}
			func_239(&iLocal_1147);
			__LIB_1__::func_649(&iLocal_1141, 2);
			break;
		case 2:
			if (fVar1 > 0.95f && __LIB_1__::func_205(Global_35, iLocal_1147, 1, 0))
			{
				func_240();
				__LIB_1__::func_581(&(iParam0->f_16), 256);
			}
			if (!bLocal_1150 && fVar1 > 0.82f)
			{
				Global_1394141.f_1334 = 1;
				bLocal_1150 = true;
			}
			if (fVar1 > 0.999f)
			{
				iLocal_1145 = 1;
				__LIB_10__::func_942(iParam0->f_48, func_158(iLocal_1145), func_157());
				__LIB_1__::func_649(&iLocal_1141, 3);
			}
			break;
		case 3:
			if (func_241(iParam0, bVar0, fVar1))
			{
				if (bLocal_1148)
				{
					iLocal_1145 = 4;
					__LIB_10__::func_942(iParam0->f_48, func_158(4), "PLAYER VOLUNTEERED");
					__LIB_1__::func_649(&iLocal_1141, 5);
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_96[1]))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "Crowd_Member_Gun", iParam0->f_96[1], 0);
					iLocal_1145 = 3;
					__LIB_10__::func_942(iParam0->f_48, func_158(3), "CROWD MEMBER VOLUNTEERED");
					__LIB_1__::func_649(&iLocal_1141, 4);
				}
			}
			break;
		case 4:
			func_242(*iParam0);
			if (func_243(iParam0, bVar0, fVar1))
			{
				if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, func_158(10)))
				{
					if (fVar1 > 0.75f)
					{
						Global_1394141.f_1334 = 0;
						__LIB_1__::func_649(&iLocal_1141, 7);
					}
				}
				if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, func_158(11)))
				{
					if (fVar1 > 0.46f)
					{
						Global_1394141.f_1334 = 0;
						__LIB_1__::func_649(&iLocal_1141, 7);
					}
				}
				if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, func_158(3)))
				{
					if (fVar1 > 0.78f)
					{
						Global_1394141.f_1334 = 0;
						__LIB_1__::func_649(&iLocal_1141, 7);
					}
				}
			}
			break;
		case 5:
			func_242(*iParam0);
			if (func_244(iParam0, bVar0, fVar1))
			{
				__LIB_1__::func_581(&(iParam0->f_16), 131072);
				__LIB_1__::func_649(&iLocal_1141, 6);
			}
			break;
		case 6:
			func_242(*iParam0);
			if (bVar0)
			{
				if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, func_158(10)))
				{
					if (fVar1 > 0.25f)
					{
						func_245();
					}
					if ((!__LIB_0__::func_1(uLocal_1154, 4) && fVar1 > 0.2f) && !__LIB_0__::func_481(1))
					{
						if (__LIB_2__::func_813(&(iParam0->f_954), func_247(4), 1, -1, 0, 0))
						{
							__LIB_1__::func_581(&uLocal_1154, 4);
						}
					}
					if (fVar1 > 0.7f && !__LIB_0__::func_481(1))
					{
						__LIB_1__::func_649(&iLocal_1141, 7);
					}
				}
				if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, func_158(11)))
				{
					if (iParam0->f_14)
					{
						Global_1394141.f_1324 = 1;
					}
					if (fVar1 > 0.2f)
					{
						func_245();
					}
					if ((!__LIB_0__::func_1(uLocal_1154, 2) && fVar1 > 0.2f) && !__LIB_0__::func_481(1))
					{
						if (__LIB_2__::func_813(&(iParam0->f_954), func_247(2), 1, -1, 0, 0))
						{
							__LIB_1__::func_581(&uLocal_1154, 2);
						}
					}
					if (fVar1 > 0.46f)
					{
						__LIB_1__::func_649(&iLocal_1141, 7);
					}
				}
				if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, func_158(9)))
				{
					if (fVar1 > 0.25f)
					{
						func_245();
					}
					if (fVar1 > 0.66f)
					{
						__LIB_1__::func_649(&iLocal_1141, 7);
					}
				}
			}
			break;
		case 7:
			__LIB_1__::func_581(&(iParam0->f_16), 134217728);
			Global_1394141.f_1334 = 0;
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1394141.f_7[0 /*31*/].f_4))
			{
				VOLUME::_0xFD010A2154B40676(Global_1394141.f_7[0 /*31*/].f_4, joaat("REL_GANG_DUTCHS"));
			}
			func_245();
			Global_1394141.f_1321 = 1;
			if (!iParam0->f_14)
			{
				__LIB_1__::func_581(&(Global_1394141.f_1325), 4);
				__LIB_1__::func_581(&(Global_1394141.f_1325), 8192);
			}
			__LIB_1__::func_581(&(iParam0->f_16), 8388608);
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iParam0->f_81[2], -1f);
			__LIB_1__::func_993(&(iParam0->f_16), 131072);
			__LIB_1__::func_649(&iLocal_1141, 8);
			break;
		case 8:
			break;
	}
}

void func_86(int iParam0)
{
	PED::_0x7D4E70A67A651C71(2);
	HUD::_0x26F6BBEA2CE3E3DC();
	Global_1394141.f_1331 = 0;
	__LIB_1__::func_993(&(Global_1394141.f_1326), 1024);
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), false, 0, -1, false);
}

char* func_156(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CROWD_BC_01";
		case 1:
			return "CROWD_BC_02";
		case 2:
			return "CROWD_BC_03";
		case 3:
			return "CROWD_BC_04";
		case 4:
			return "CROWD_BC_05";
		case 5:
			return "CROWD_BC_16";
		case 6:
			return "CROWD_BC_06";
		case 7:
			return "CROWD_BC_07";
		case 8:
			return "CROWD_BC_08";
		case 9:
			return "CROWD_BC_17";
		case 10:
			return "CROWD_BC_09";
		case 11:
			return "CROWD_BC_10";
		case 12:
			return "CROWD_BC_11";
		case 13:
			return "CROWD_BC_12";
		case 14:
			return "CROWD_BC_13";
		case 15:
			return "CROWD_BC_14";
		case 16:
			return "CROWD_BC_15";
		case 17:
			return "CROWD_BC_17";
		case 18:
			return "CROWD_BC_18";
		case 19:
			return "CROWD_BC_19_BASE";
		case 20:
			return "CROWD_BC_20";
		case 21:
			return "CROWD_BC_21";
		case 22:
			return "CROWD_BC_22";
		case 23:
			return "CROWD_BC_23";
		case 24:
			return "CROWD_BC_24";
		case 25:
			return "CROWD_BC_01";
		case 26:
			return "CROWD_BC_02";
		case 27:
			return "CROWD_BC_03";
		case 28:
			return "CROWD_BC_04";
		case 29:
			return "CROWD_BC_29";
		case 30:
			return "CROWD_BC_30";
		case 31:
			return "CROWD_BC_31";
		case 32:
			return "CROWD_BC_32";
		default:
			break;
	}
	return "CROWD_BC_01";
}

char* func_157()
{
	return "script@shows@bulletcatcher@action";
}

char* func_158(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PL_A_Performance";
		case 1:
			return "PL_D_LOOP_1_Challenge_Crowd";
		case 2:
			return "PL_D_LOOP_2_Challenge_Crowd";
		case 3:
			return "PL_E_Volunteer_Challenge";
		case 4:
			return "PL_Player_Volunteered";
		case 5:
			return "PL_F_Base";
		case 6:
			return "PL_F_Loop_ALT_2";
		case 7:
			return "PL_F_Loop_ALT_3";
		case 8:
			return "PL_F_Loop_ALT_7";
		case 9:
			return "PL_E_Volunteer_Challenge_ALT";
		case 10:
			return "PL_Player_Shot_Magician";
		case 11:
			return "PL_Player_Shot_Stomach";
		default:
			break;
	}
	return "FAIL";
}

bool func_166(var uParam0, int iParam1, vector3 vParam2, float fParam5)
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
	iVar2 = func_278(iParam1);
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

void func_168(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_81[0]))
	{
		__LIB_0__::func_928(&(iParam0->f_954), iParam0->f_81[0], "BENJAMIN_LAZARUS", 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_81[0], true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_81[1]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_81[1], true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_66[0]))
	{
		iParam0->f_66[0] = OBJECT::CREATE_OBJECT(iParam0->f_58[0], func_279(0), true, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_66[1]))
	{
		iParam0->f_66[1] = OBJECT::CREATE_OBJECT(iParam0->f_58[1], func_279(1), true, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_66[2]))
	{
		iParam0->f_66[2] = OBJECT::CREATE_OBJECT(iParam0->f_58[2], func_279(2), true, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_96[0]))
	{
		iParam0->f_96[0] = WEAPON::_CREATE_WEAPON_OBJECT(iParam0->f_88[0], 0, func_280(0), true, 1f);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_96[1]))
	{
		iParam0->f_96[1] = WEAPON::_CREATE_WEAPON_OBJECT(iParam0->f_88[1], 0, func_280(1), true, 1f);
	}
	GRAPHICS::_0x453D16D41FC51D3E(1);
	func_281(iParam0);
	__LIB_16__::func_737(iParam0->f_81[0]);
	__LIB_16__::func_737(iParam0->f_81[1]);
	iParam0->f_12 = iParam0->f_81[0];
}

void func_169(int iParam0)
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "Benjamin", iParam0->f_81[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "Assistant", iParam0->f_81[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "BUCKET", iParam0->f_66[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "Stool", iParam0->f_66[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "BOTTLE", iParam0->f_66[2], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "Gun", iParam0->f_96[0], 0);
}

void func_239(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	char* sVar9;
	if (!VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		vVar0 = { 2546.453f, -1303.998f, 46.793f };
		vVar3 = { 0f, 0f, 0f };
		vVar6 = { 2f, 2f, 3f };
		sVar9 = "SPOTLIGHT_VOLUME";
		*iParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, sVar9);
	}
}

void func_240()
{
	if (!__LIB_0__::func_1(Global_1394141.f_1326, 1))
	{
		Global_1394141.f_1331 = 1;
		__LIB_1__::func_581(&(Global_1394141.f_1326), 1);
		HUD::_0xC5C7A2F6567FCCBC();
	}
}

bool func_241(int iParam0, bool bParam1, float fParam2)
{
	if (!bParam1)
	{
		return false;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1147) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1147, true, 0))
	{
		if (!__LIB_0__::func_1(uLocal_1154, 1) && !__LIB_0__::func_481(1))
		{
			if (__LIB_2__::func_813(&(iParam0->f_954), func_247(1), 1, -1, 0, 0))
			{
				__LIB_1__::func_581(&uLocal_1154, 1);
			}
		}
		__LIB_1__::func_993(&(iParam0->f_16), 131072);
		__LIB_1__::func_581(&(iParam0->f_16), 256);
		func_240();
		bLocal_1148 = true;
	}
	switch (iLocal_1142)
	{
		case 0:
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, func_158(1)))
			{
				__LIB_1__::func_148(&uLocal_1151);
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(iParam0->f_48, func_158(0));
				__LIB_1__::func_649(&iLocal_1142, 1);
			}
			break;
		case 1:
			if (!__LIB_16__::func_524(iParam0->f_48, func_158(4), func_157()))
			{
				return false;
			}
			if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(iParam0->f_48, "wait_Challenge_crowd_bool"))
			{
				if (__LIB_0__::func_265(&uLocal_1151) > 2f)
				{
					__LIB_9__::func_699(&(iParam0->f_48), "wait_Challenge_crowd_bool", 1, "CHALLANGE PLAYLISTS");
					__LIB_0__::func_37(&uLocal_1151);
				}
				else
				{
					if (bLocal_1148)
					{
						__LIB_1__::func_649(&iLocal_1142, 4);
						return false;
					}
					return false;
				}
			}
			if (bLocal_1148 && fParam2 > 0.704f)
			{
				__LIB_1__::func_649(&iLocal_1142, 4);
				return false;
			}
			if (fParam2 > 0.99f)
			{
				iLocal_1145 = 2;
				__LIB_10__::func_942(iParam0->f_48, func_158(2), "CHALLANGE PLAYLISTS");
				__LIB_9__::func_699(&(iParam0->f_48), "wait_Challenge_crowd_bool", 0, "CHALLANGE PLAYLISTS");
				__LIB_1__::func_649(&iLocal_1142, 2);
			}
			break;
		case 2:
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, func_158(2)) && !ANIMSCENE::GET_ANIM_SCENE_BOOL(iParam0->f_48, "wait_Challenge_crowd_bool"))
			{
				__LIB_1__::func_148(&uLocal_1151);
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(iParam0->f_48, func_158(1));
				__LIB_1__::func_649(&iLocal_1142, 3);
			}
			break;
		case 3:
			if (!__LIB_16__::func_524(iParam0->f_48, func_158(3), func_157()))
			{
				return false;
			}
			if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(iParam0->f_48, "wait_Challenge_crowd_bool"))
			{
				if (__LIB_0__::func_265(&uLocal_1151) > 2f)
				{
					__LIB_9__::func_699(&(iParam0->f_48), "wait_Challenge_crowd_bool", 1, "CHALLANGE PLAYLISTS");
					__LIB_0__::func_37(&uLocal_1151);
				}
				else
				{
					if (bLocal_1148)
					{
						__LIB_1__::func_649(&iLocal_1142, 4);
						return false;
					}
					return false;
				}
			}
			if (bLocal_1148 && fParam2 > 0.921f)
			{
				__LIB_1__::func_649(&iLocal_1142, 4);
				return false;
			}
			if (fParam2 > 0.99f)
			{
				__LIB_1__::func_649(&iLocal_1142, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

void func_242(int iParam0)
{
	if (__LIB_1__::func_205(Global_35, Global_1394141.f_7[iParam0 /*31*/].f_4, 1, 0))
	{
		EVENT::_0xB6F4825153920582();
	}
}

bool func_243(int iParam0, bool bParam1, float fParam2)
{
	int iVar0;
	bool bVar1;
	if (!bParam1)
	{
		return false;
	}
	switch (iLocal_1143)
	{
		case 0:
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, func_158(3)))
			{
				if (!__LIB_16__::func_524(iParam0->f_48, func_158(10), func_157()))
				{
					return false;
				}
				if (!__LIB_16__::func_524(iParam0->f_48, func_158(11), func_157()))
				{
					return false;
				}
				func_240();
				__LIB_1__::func_649(&iLocal_1143, 1);
			}
			break;
		case 1:
			if (fParam2 > 0.15f && !__LIB_0__::func_1(iParam0->f_16, 256))
			{
				__LIB_1__::func_581(&(iParam0->f_16), 256);
				func_240();
			}
			if (fParam2 > 0.415f && fParam2 < 0.461f)
			{
				func_334(iParam0->f_81[0]);
				func_240();
				__LIB_1__::func_581(&(Global_1394141.f_1326), 2);
				bVar1 = false;
				if (PED::_0x09D7AFD3716DA8E1(iParam0->f_81[0], 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0->f_81[0]))
				{
					__LIB_1__::func_993(&(iParam0->f_16), 256);
					__LIB_1__::func_993(&(Global_1394141.f_1326), 2);
					__LIB_1__::func_581(&(iParam0->f_16), 131072);
					bVar1 = true;
					__LIB_1__::func_649(&iLocal_1144, 5);
				}
				if (bVar1)
				{
					if (PED::GET_PED_LAST_DAMAGE_BONE(iParam0->f_81[0], &iVar0))
					{
						if (((iVar0 == 21030 || iVar0 == 14283) || iVar0 == 14284) || iVar0 == 14285)
						{
							GRAPHICS::_0x453D16D41FC51D3E(0);
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0->f_81[0], 1, "ALL");
							iLocal_1145 = 10;
							bLocal_1149 = true;
						}
						else
						{
							iLocal_1145 = 11;
						}
					}
					else
					{
						GRAPHICS::_0x453D16D41FC51D3E(0);
						PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0->f_81[0], 1, "ALL");
						iLocal_1145 = 10;
						bLocal_1149 = true;
					}
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam0->f_48, "Crowd_Member", iParam0->f_81[2]);
					__LIB_2__::func_915(iParam0->f_81[2], joaat("PROP_HUMAN_SEAT_CHAIR"), 2545.198f, -1303.366f, 47.57492f, -175.57f, 0, 1, 0, 0, -1082130432 /* Float: -1f */);
					__LIB_10__::func_942(iParam0->f_48, func_158(iLocal_1145), func_157());
					__LIB_1__::func_649(&iLocal_1143, 2);
				}
			}
			else
			{
				if (__LIB_0__::func_1(Global_1394141.f_1326, 2))
				{
					__LIB_1__::func_993(&(Global_1394141.f_1326), 2);
				}
				if (fParam2 > 0.468f)
				{
					func_245();
				}
			}
			if ((!__LIB_0__::func_1(uLocal_1154, 8) && fParam2 > 0.57f) && !__LIB_0__::func_481(1))
			{
				if (__LIB_2__::func_813(&(iParam0->f_954), func_247(8), 1, -1, 0, 0))
				{
					__LIB_1__::func_581(&uLocal_1154, 8);
				}
			}
			if (fParam2 > 0.89f)
			{
				PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
				func_334(iParam0->f_81[1]);
				func_334(iParam0->f_81[2]);
				__LIB_1__::func_649(&iLocal_1143, 3);
			}
			break;
		case 2:
			func_334(iParam0->f_81[1]);
			func_334(iParam0->f_81[2]);
			PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
			__LIB_1__::func_649(&iLocal_1143, 3);
			break;
		case 3:
			Global_1394141.f_1331 = 0;
			__LIB_1__::func_993(&(iParam0->f_16), 256);
			__LIB_1__::func_993(&(Global_1394141.f_1326), 2);
			return true;
	}
	return false;
}

bool func_244(int iParam0, bool bParam1, float fParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	if (!bParam1)
	{
		return false;
	}
	iVar0 = __LIB_1__::func_372(Global_35, 0);
	if (iVar0 != joaat("WEAPON_UNARMED") && iLocal_1144 != 5)
	{
		if ((PED::_0x09D7AFD3716DA8E1(iParam0->f_81[0], 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0->f_81[0])) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0->f_81[0], true, false), 3f, false))
		{
			__LIB_1__::func_993(&(Global_1394141.f_1326), 2);
			__LIB_1__::func_993(&(iParam0->f_16), 256);
			__LIB_1__::func_649(&iLocal_1144, 5);
		}
	}
	switch (iLocal_1144)
	{
		case 0:
			bVar1 = false;
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, func_158(4)))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_48, func_158(1)))
				{
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(iParam0->f_48, func_158(1));
				}
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_48, func_158(2)))
				{
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(iParam0->f_48, func_158(2));
				}
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_48, func_158(3)))
				{
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(iParam0->f_48, func_158(3));
				}
				bVar1 = true;
			}
			__LIB_1__::func_581(&(Global_1394141.f_1326), 1024);
			if (!__LIB_16__::func_524(iParam0->f_48, func_158(5), func_157()))
			{
				return false;
			}
			if (!__LIB_16__::func_524(iParam0->f_48, func_158(10), func_157()))
			{
				return false;
			}
			if (!__LIB_16__::func_524(iParam0->f_48, func_158(11), func_157()))
			{
				return false;
			}
			func_240();
			if (bVar1)
			{
				if (fParam2 > 0f && !__LIB_0__::func_1(iParam0->f_16, 256))
				{
					__LIB_1__::func_581(&(iParam0->f_16), 256);
				}
				if (fParam2 > 0.863f)
				{
					__LIB_1__::func_581(&(Global_1394141.f_1326), 2);
					func_334(iParam0->f_81[0]);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0->f_81[0], joaat("REL_PLAYER_ENEMY"));
					iLocal_1145 = 5;
					iLocal_1146 = 4;
					__LIB_1__::func_649(&iLocal_1144, 1);
				}
			}
			break;
		case 1:
			if (__LIB_16__::func_524(iParam0->f_48, func_158(iLocal_1145), "LOAD UP THE NEXT WAIT PLAYLIST") && fParam2 > 0.98f)
			{
				__LIB_1__::func_148(&uLocal_1151);
				__LIB_10__::func_942(iParam0->f_48, func_158(iLocal_1145), "SETTING PLAYER WAIT PLAYLIST");
				__LIB_9__::func_699(&(iParam0->f_48), "wait_Challenge_crowd_bool", 0, "CHALLANGE PLAYLISTS");
				__LIB_1__::func_649(&iLocal_1144, 2);
			}
			break;
		case 2:
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, func_158(iLocal_1145)))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_48, func_158(iLocal_1146)))
				{
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(iParam0->f_48, func_158(iLocal_1146));
				}
				if (iLocal_1145 == 5 && __LIB_0__::func_75(&uLocal_1151))
				{
					if (__LIB_0__::func_265(&uLocal_1151) > 8f)
					{
						__LIB_0__::func_37(&uLocal_1151);
					}
				}
				else
				{
					iVar2 = iLocal_1145;
					if (iVar2 == 8)
					{
						__LIB_16__::func_524(iParam0->f_48, func_158(9), func_157());
					}
					if (iVar2 + 1 > 8)
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_48, func_158(9)) && fParam2 > 0.98f)
						{
							iLocal_1146 = iLocal_1145;
							Global_1394141.f_1334 = 1;
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "Crowd_Member", iParam0->f_81[2], 0);
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "Crowd_Member_Gun", iParam0->f_96[1], 0);
							iLocal_1145 = 9;
							__LIB_10__::func_942(iParam0->f_48, func_158(9), func_157());
							__LIB_1__::func_649(&iLocal_1144, 3);
						}
					}
					else
					{
						iLocal_1146 = iLocal_1145;
						iLocal_1145 = iVar2 + 1;
						__LIB_1__::func_649(&iLocal_1144, 1);
					}
				}
			}
			break;
		case 3:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_48, func_158(iLocal_1146)))
			{
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(iParam0->f_48, func_158(iLocal_1146));
			}
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, func_158(9)))
			{
				if (fParam2 > 0.26f)
				{
					__LIB_1__::func_993(&(Global_1394141.f_1326), 2);
					func_245();
					__LIB_1__::func_993(&(iParam0->f_16), 256);
					__LIB_1__::func_649(&iLocal_1144, 4);
				}
			}
			break;
		case 4:
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, func_158(9)))
			{
				return true;
			}
			break;
		case 5:
			if (PED::GET_PED_LAST_DAMAGE_BONE(iParam0->f_81[0], &iVar3))
			{
				if (((iVar3 == 21030 || iVar3 == 14283) || iVar3 == 14284) || iVar3 == 14285)
				{
					GRAPHICS::_0x453D16D41FC51D3E(0);
					PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0->f_81[0], 1, "ALL");
					iLocal_1146 = iLocal_1145;
					iLocal_1145 = 10;
					bLocal_1149 = true;
				}
				else
				{
					iLocal_1146 = iLocal_1145;
					iLocal_1145 = 11;
				}
			}
			else
			{
				GRAPHICS::_0x453D16D41FC51D3E(0);
				PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0->f_81[0], 1, "ALL");
				iLocal_1145 = 10;
				bLocal_1149 = true;
			}
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, func_158(9)))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam0->f_48, "Crowd_Member", iParam0->f_81[2]);
				__LIB_2__::func_915(iParam0->f_81[2], joaat("PROP_HUMAN_SEAT_CHAIR"), 2545.198f, -1303.366f, 47.57492f, -175.57f, 0, 1, 0, 0, -1082130432 /* Float: -1f */);
			}
			func_334(iParam0->f_81[1]);
			func_334(iParam0->f_81[2]);
			__LIB_1__::func_993(&(iParam0->f_16), 256);
			__LIB_1__::func_993(&(Global_1394141.f_1326), 2);
			PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
			if (bLocal_1149)
			{
				Global_1394141.f_1334 = 1;
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "Crowd_Member", iParam0->f_81[2], 0);
			}
			__LIB_1__::func_993(&(Global_1394141.f_1326), 1024);
			__LIB_10__::func_942(iParam0->f_48, func_158(iLocal_1145), func_157());
			return true;
	}
	return false;
}

void func_245()
{
	if (__LIB_0__::func_1(Global_1394141.f_1326, 1))
	{
		Global_1394141.f_1331 = 0;
		__LIB_1__::func_993(&(Global_1394141.f_1326), 1);
		HUD::_0x26F6BBEA2CE3E3DC();
	}
}

Vector3 func_247(int iParam0)
{
	vector3 vVar0[24];
	switch (iParam0)
	{
		case 1:
			if (__LIB_0__::func_181())
			{
				StringCopy(&cVar0, "SHBC_PLAYERVOLJ", 24);
			}
			else
			{
				StringCopy(&cVar0, "SHBC_PLAYERVOL", 24);
			}
			break;
		case 2:
			if (__LIB_0__::func_181())
			{
				StringCopy(&cVar0, "SHBC_SHOT_J", 24);
			}
			else
			{
				StringCopy(&cVar0, "SHBC_SHOT_A", 24);
			}
			break;
		case 4:
			if (__LIB_0__::func_181())
			{
				StringCopy(&cVar0, "SHBC_CATCH_J", 24);
			}
			else
			{
				StringCopy(&cVar0, "SHBC_CATCH_A", 24);
			}
			break;
		case 8:
			if (__LIB_0__::func_181())
			{
				StringCopy(&cVar0, "SHBC_PLAYERAWEJ", 24);
			}
			else
			{
				StringCopy(&cVar0, "SHBC_PLAYERAWE", 24);
			}
			break;
	}
	return cVar0;
}

int func_278(int iParam0)
{
	if (iParam0 == joaat("CS_ESCAPEARTIST"))
	{
		return 1414721216;
	}
	return joaat("META_OUTFIT_DEFAULT");
}

Vector3 func_279(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2549.146f, -1312.044f, 49.21665f;
		case 1:
			return 2549.146f, -1312.144f, 49.21665f;
		case 2:
			return 2549.146f, -1312.244f, 49.21665f;
		default:
			break;
	}
	return 2549.146f, -1312.344f, 49.21665f;
}

Vector3 func_280(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2549.146f, -1312.044f, 49.21665f;
		case 1:
			return 2553.132f, -1309.773f, 49.21665f;
		default:
			break;
	}
	return 2549.146f, -1312.044f, 49.21665f;
}

void func_281(int iParam0)
{
	PED::SET_PED_CONFIG_FLAG(iParam0->f_81[0], 263, true);
	PED::SET_PED_CONFIG_FLAG(iParam0->f_81[0], 16, true);
	PED::SET_PED_CONFIG_FLAG(iParam0->f_81[0], 245, true);
	PED::SET_PED_CONFIG_FLAG(iParam0->f_81[0], 16, true);
	PED::SET_PED_CONFIG_FLAG(iParam0->f_81[0], 17, true);
	PED::SET_PED_CONFIG_FLAG(iParam0->f_81[0], 18, true);
	PED::SET_PED_CONFIG_FLAG(iParam0->f_81[0], 19, true);
	PED::SET_PED_CONFIG_FLAG(iParam0->f_81[0], 6, true);
	PED::SET_PED_CAN_RAGDOLL(iParam0->f_81[0], false);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0->f_81[0], 524369);
}

void func_334(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CAN_BE_TARGETTED(iParam0, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_NO_RELATIONSHIP"));
	}
}

