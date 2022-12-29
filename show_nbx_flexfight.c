#region Local Var
	bool bLocal_0 = false;
	bool bLocal_1 = false;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	struct<1071> Local_22 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -262339715, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 180000, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_1103 = 0;
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
	var uLocal_1117 = 1092616192;
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
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	struct<52> Local_1155 = { 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_15 = 1f;
	fLocal_16 = 1f;
	bVar0 = false;
	bVar1 = false;
	bVar2 = false;
	Local_22.f_15 = 0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(&Local_22);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
	{
		func_1(&Local_22);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (ScriptParam_0 == 1)
	{
		Local_22.f_14 = 1;
	}
	if (!Local_22.f_14 && __LIB_0__::func_27(Global_1394141.f_1326, -2147483648))
	{
		__LIB_1__::func_993(&(Global_1394141.f_1326), -2147483648);
	}
	Local_22 = ScriptParam_0.f_1;
	Local_22.f_42 = { 2553.875f, -1313.143f, 48.2166f };
	Local_22.f_45 = { 2546.522f, -1306.835f, 48.26664f };
	if (!Local_22.f_1070)
	{
		Local_22.f_1058 = 180000;
	}
	while (true)
	{
		bVar1 = __LIB_1__::func_205(Global_35, Global_1394141.f_7[Local_22 /*31*/].f_4, 1, 0);
		bVar2 = __LIB_1__::func_205(Global_35, Local_22.f_35[3], 1, 0);
		fVar3 = __LIB_0__::func_94(Global_35, Global_1394141.f_7[Local_22 /*31*/].f_1, 1);
		if ((!__LIB_0__::func_27(Local_22.f_16, 64) && bVar1) && !Local_22.f_1070)
		{
			__LIB_2__::func_761(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 200f, 0, 0);
			__LIB_1__::func_581(&(Local_22.f_16), 64);
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			if (__LIB_16__::func_505(&Local_22) < 10)
			{
				__LIB_16__::func_557(&Local_22, 10);
			}
		}
		if (!Local_22.f_14)
		{
			__LIB_0__::func_319(256);
			if ((__LIB_16__::func_505(&Local_22) < 10 && __LIB_16__::func_719(Local_22)) && !bVar1)
			{
				__LIB_1__::func_581(&(Global_1394141.f_1326), -2147483648);
				__LIB_16__::func_557(&Local_22, 10);
			}
			func_12(bVar1);
			__LIB_16__::func_725(&Local_22, fVar3);
			if (fVar3 > 75f || __LIB_0__::func_27(Global_1394141.f_1326, -2147483648))
			{
				__LIB_1__::func_581(&(Global_1394141.f_1326), -2147483648);
				if (__LIB_16__::func_505(&Local_22) < 10)
				{
					__LIB_16__::func_557(&Local_22, 10);
				}
			}
			if ((__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1) || PED::IS_PED_IN_COMBAT(Global_35, 0)) || Global_1394141.f_1279[Local_22.f_1 /*8*/].f_6)
			{
				__LIB_1__::func_581(&(Local_22.f_16), 33554432);
				if (__LIB_16__::func_505(&Local_22) < 10)
				{
					__LIB_16__::func_557(&Local_22, 10);
				}
			}
			if (PLAYER::_0x6C54E69516CC56BD(PLAYER::GET_PLAYER_INDEX()) > 0 && bVar2)
			{
				__LIB_1__::func_581(&(Local_22.f_16), 33554432);
				if (__LIB_16__::func_505(&Local_22) < 10)
				{
					__LIB_16__::func_557(&Local_22, 10);
				}
			}
		}
		if (!Local_22.f_14)
		{
			func_15(&(Local_22.f_104), Local_22.f_1);
			func_16(&(Local_22.f_104), Local_22.f_1);
		}
		func_17(&Local_22);
		func_18(&Local_22);
		if (__LIB_16__::func_505(&Local_22) >= 6)
		{
			func_19(&Local_22);
		}
		if (__LIB_16__::func_505(&Local_22) >= 8 && bVar1)
		{
			iVar4 = 0;
			while (iVar4 <= 5)
			{
				if ((__LIB_0__::func_30(Local_22.f_74[iVar4]) && ENTITY::DOES_ENTITY_EXIST(Local_22.f_81[iVar4])) && !ENTITY::IS_ENTITY_DEAD(Local_22.f_81[iVar4]))
				{
					PED::SET_PED_RESET_FLAG(Local_22.f_81[iVar4], 261, true);
				}
				iVar4++;
			}
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_22.f_48) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_22.f_48, false))
		{
			if (bVar1)
			{
				if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_22.f_48, "b_ShowCrowd"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_22.f_48, "b_ShowCrowd", true, false);
				}
			}
			else if (ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_22.f_48, "b_ShowCrowd"))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_22.f_48, "b_ShowCrowd", false, false);
			}
		}
		switch (__LIB_16__::func_505(&Local_22))
		{
			case 0:
				if (__LIB_16__::func_440(&Local_22))
				{
					__LIB_16__::func_506(&Local_22);
					if (!Local_22.f_14)
					{
						__LIB_16__::func_492(&(Local_22.f_104));
						__LIB_2__::func_29(1);
						__LIB_1__::func_309(-1, 0, 0, 0, 0);
						__LIB_1__::func_924();
					}
					func_27(&Local_22);
					__LIB_16__::func_702(&Local_22);
					Global_1394141.f_1321 = 0;
					__LIB_16__::func_441(&Local_22);
				}
				__LIB_16__::func_557(&Local_22, 1);
				break;
			case 1:
				if (__LIB_16__::func_440(&Local_22))
				{
					__LIB_16__::func_441(&Local_22);
				}
				if (func_30(&Local_22))
				{
					__LIB_16__::func_507(&Local_22);
					__LIB_16__::func_557(&Local_22, 2);
				}
				break;
			case 2:
				if (__LIB_16__::func_440(&Local_22))
				{
					__LIB_16__::func_441(&Local_22);
				}
				if (func_32(&Local_22))
				{
					func_33(&Local_22);
					if (!Local_22.f_14)
					{
						if (!Local_22.f_1070)
						{
							ANIMSCENE::START_ANIM_SCENE(Local_22.f_49);
						}
						else
						{
							__LIB_16__::func_703(&Local_22);
						}
						__LIB_16__::func_557(&Local_22, 3);
					}
					else
					{
						__LIB_16__::func_557(&Local_22, 6);
					}
				}
				break;
			case 3:
				if (__LIB_16__::func_440(&Local_22))
				{
					if (Local_22.f_1 == -1)
					{
					}
					else
					{
						__LIB_16__::func_560(&(Local_22.f_910), Local_22.f_1);
					}
					__LIB_16__::func_441(&Local_22);
				}
				if (Local_22.f_1 == -1)
				{
					__LIB_16__::func_557(&Local_22, 6);
				}
				else if (__LIB_16__::func_709(&(Local_22.f_910), Local_22.f_1))
				{
					__LIB_16__::func_557(&Local_22, 4);
				}
				break;
			case 4:
				if (__LIB_16__::func_440(&Local_22))
				{
					__LIB_16__::func_441(&Local_22);
				}
				if (func_37(&(Local_22.f_349), Local_22.f_1, -1))
				{
					__LIB_16__::func_557(&Local_22, 5);
				}
				break;
			case 5:
				if (__LIB_16__::func_440(&Local_22))
				{
					__LIB_16__::func_441(&Local_22);
				}
				if (func_38(&(Local_22.f_349), &(Local_22.f_910), Local_22.f_1))
				{
					if (__LIB_16__::func_685(&(Local_22.f_349), Local_22.f_1))
					{
						if (!__LIB_0__::func_75(&(Local_22.f_26)))
						{
							__LIB_1__::func_148(&(Local_22.f_26));
						}
						else if (__LIB_0__::func_265(&(Local_22.f_26)) > 1f)
						{
							__LIB_0__::func_37(&(Local_22.f_26));
							__LIB_16__::func_557(&Local_22, 6);
						}
					}
				}
				break;
			case 6:
				if (__LIB_16__::func_440(&Local_22))
				{
					__LIB_1__::func_148(&(Local_22.f_947));
					if (Local_22.f_1070)
					{
						Local_22.f_1059.f_1 = Local_22.f_1;
					}
					if (Local_22.f_1 == 0 && !Local_22.f_14)
					{
						__LIB_1__::func_581(&(Global_1394141.f_1325), 512);
						__LIB_1__::func_581(&(Global_1394141.f_1325), 131072);
					}
					__LIB_16__::func_441(&Local_22);
				}
				__LIB_16__::func_508(&Local_22);
				if (Local_22.f_1070)
				{
					__LIB_16__::func_713(&(Local_22.f_1059), Local_22);
				}
				if (func_46(&Local_22))
				{
					if ((__LIB_0__::func_75(&(Local_22.f_947)) && __LIB_1__::func_871(&(Local_22.f_947)) > Local_22.f_1058) || bVar1)
					{
						__LIB_1__::func_148(&(Local_22.f_947));
						__LIB_16__::func_557(&Local_22, 7);
					}
				}
				break;
			case 7:
				if (__LIB_16__::func_440(&Local_22))
				{
					__LIB_16__::func_441(&Local_22);
				}
				__LIB_16__::func_508(&Local_22);
				if ((Local_22.f_1070 && Local_22.f_1059.f_10 == 0) && __LIB_0__::func_264(&(Local_22.f_947)) > 3f)
				{
					Local_22.f_1059.f_10 = 1;
				}
				if ((__LIB_0__::func_75(&(Local_22.f_947)) && __LIB_1__::func_871(&(Local_22.f_947)) > 10000) || Local_22.f_14)
				{
					bVar0 = true;
				}
				if (Local_22.f_1070)
				{
					__LIB_16__::func_713(&(Local_22.f_1059), Local_22);
				}
				if (bVar0)
				{
					if (!Local_22.f_14)
					{
						__LIB_1__::func_581(&(Global_1394141.f_1325), 2);
						__LIB_1__::func_581(&(Global_1394141.f_1325), 4096);
					}
					if (Local_22.f_1 != 0)
					{
					}
					if (Local_22.f_1070)
					{
						__LIB_1__::func_581(&(Global_1394141.f_1325), 16);
						Global_1394141.f_1330 = 1;
						if (Local_22.f_1 == 1 || Local_22.f_1 == 2)
						{
							__LIB_1__::func_581(&(Global_1394141.f_1325), 4194304);
						}
					}
					if (!__LIB_0__::func_27(Local_22.f_16, 1024))
					{
						__LIB_16__::func_557(&Local_22, 8);
					}
					else if (!__LIB_0__::func_75(&(Local_22.f_26)))
					{
						__LIB_1__::func_148(&(Local_22.f_26));
						Global_1394141.f_1322 = 1;
					}
					else if (__LIB_0__::func_265(&(Local_22.f_26)) > 5f)
					{
						__LIB_0__::func_37(&(Local_22.f_26));
						__LIB_16__::func_557(&Local_22, 8);
					}
				}
				break;
			case 8:
				if (__LIB_16__::func_440(&Local_22))
				{
					__LIB_16__::func_441(&Local_22);
				}
				__LIB_16__::func_508(&Local_22);
				if (Local_22.f_1070)
				{
					__LIB_16__::func_713(&(Local_22.f_1059), Local_22);
					__LIB_16__::func_704(&Local_22, Local_22.f_1);
					if (!__LIB_0__::func_27(Global_1394141.f_1325, 16))
					{
						__LIB_16__::func_561(&Local_22);
						__LIB_16__::func_705(Local_22);
						__LIB_16__::func_557(&Local_22, 9);
						AUDIO::_0x8BF907833BE275DE(0f, 1f);
						__LIB_1__::func_581(&(Local_22.f_16), 268435456);
					}
				}
				else
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_22.f_48) && !__LIB_0__::func_27(Local_22.f_16, 128))
					{
						ANIMSCENE::START_ANIM_SCENE(Local_22.f_48);
						__LIB_1__::func_581(&(Local_22.f_16), 128);
					}
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_22.f_49) && !__LIB_0__::func_27(Local_22.f_16, 512))
					{
						__LIB_1__::func_581(&(Local_22.f_16), -2147483648);
						__LIB_1__::func_581(&(Local_22.f_16), 512);
					}
					AUDIO::_0x8BF907833BE275DE(0f, 1f);
					__LIB_1__::func_581(&(Local_22.f_16), 268435456);
					__LIB_16__::func_511(__LIB_16__::func_509(6), __LIB_16__::func_510());
					if (__LIB_0__::func_27(Local_22.f_17, 1) && AUDIO::LOAD_STREAM(__LIB_16__::func_512(Local_22), __LIB_16__::func_513(Local_22)))
					{
						iVar5 = AUDIO::_0x0556C784FA056628(__LIB_16__::func_512(Local_22), __LIB_16__::func_513(Local_22));
						if (iVar5 != -1)
						{
							AUDIO::PLAY_STREAM_FROM_POSITION(2548.749f, -1305.267f, 50.01453f, iVar5);
						}
					}
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_22.f_48))
					{
						if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_22.f_48, false))
						{
							__LIB_16__::func_557(&Local_22, 9);
						}
					}
				}
				break;
			case 9:
				if (__LIB_16__::func_440(&Local_22))
				{
					if (Local_22.f_1070 || !Local_22.f_14)
					{
						if (Local_22.f_1 == 4 || Local_22.f_1 == 2)
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
					__LIB_1__::func_148(&(Local_22.f_32));
					Global_1394141.f_1335 = Local_22.f_48;
					__LIB_16__::func_441(&Local_22);
				}
				__LIB_16__::func_508(&Local_22);
				if (!Local_22.f_14)
				{
					func_57(&(Local_22.f_910), &(Local_22.f_349), Local_22.f_1);
					if (!bVar1)
					{
						if (__LIB_0__::func_73(1))
						{
							if (!__LIB_0__::func_75(&(Local_22.f_20)))
							{
								__LIB_1__::func_148(&(Local_22.f_20));
							}
							else if (__LIB_0__::func_265(&(Local_22.f_20)) > 10f)
							{
								__LIB_1__::func_979(1);
								__LIB_0__::func_37(&(Local_22.f_20));
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
						if (__LIB_0__::func_75(&(Local_22.f_20)))
						{
							__LIB_0__::func_37(&(Local_22.f_20));
						}
					}
				}
				__LIB_16__::func_562(&(Local_22.f_12));
				func_61(&Local_22);
				__LIB_16__::func_563(&Local_22);
				func_63(&Local_22);
				if (__LIB_0__::func_27(Local_22.f_16, 4096))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_22.f_48, false) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_22.f_48) > __LIB_16__::func_514())
					{
						__LIB_1__::func_581(&(Local_22.f_16), 2);
					}
				}
				if (__LIB_0__::func_27(Local_22.f_16, 268435456) && __LIB_0__::func_27(Local_22.f_16, 134217728))
				{
					AUDIO::_0x8BF907833BE275DE(1f, 1f);
					__LIB_1__::func_993(&(Local_22.f_16), 268435456);
				}
				if (Local_22.f_1070)
				{
					func_65(&Local_22);
					__LIB_16__::func_713(&(Local_22.f_1059), Local_22);
					__LIB_16__::func_515(&Local_22, bVar1);
					if ((__LIB_16__::func_516() && __LIB_0__::func_27(Local_22.f_16, 2097152)) && __LIB_0__::func_264(&(Local_22.f_32)) > 30f)
					{
						if (!__LIB_0__::func_27(Local_22.f_16, 67108864))
						{
							__LIB_1__::func_581(&(Global_1394141.f_1325), 4);
							__LIB_1__::func_581(&(Global_1394141.f_1325), 32);
							if (Local_22.f_1 == 1 || Local_22.f_1 == 2)
							{
								__LIB_1__::func_581(&(Global_1394141.f_1325), 8388608);
							}
							Global_1394141.f_1330 = 0;
							Local_22.f_910.f_19 = 1;
							Global_1394141.f_1329 = 1;
							__LIB_0__::func_15(__LIB_0__::func_14(joaat("SHOWS_SEEN")), 1);
							__LIB_16__::func_689(&Local_22);
							__LIB_1__::func_581(&(Local_22.f_16), 67108864);
						}
						__LIB_16__::func_517(&Local_22);
						if (!bVar1 && !bVar2)
						{
							__LIB_16__::func_557(&Local_22, 10);
						}
						if (__LIB_0__::func_27(Local_22.f_16, 268435456))
						{
							AUDIO::_0x8BF907833BE275DE(1f, 1f);
							__LIB_1__::func_993(&(Local_22.f_16), 268435456);
						}
					}
					else
					{
						if (bVar1 || bVar2)
						{
							if (!__LIB_0__::func_27(Local_22.f_16, 268435456))
							{
								AUDIO::_0x8BF907833BE275DE(0f, 1f);
								__LIB_1__::func_581(&(Local_22.f_16), 268435456);
							}
						}
						else if (__LIB_0__::func_27(Local_22.f_16, 268435456))
						{
							AUDIO::_0x8BF907833BE275DE(1f, 1f);
							__LIB_1__::func_993(&(Local_22.f_16), 268435456);
						}
						__LIB_16__::func_714(&Local_22);
					}
				}
				else if (__LIB_0__::func_27(Local_22.f_16, 8388608))
				{
					if (!__LIB_0__::func_27(Local_22.f_16, 67108864))
					{
						__LIB_16__::func_518(__LIB_16__::func_509(6), __LIB_16__::func_510());
						if (__LIB_0__::func_27(Local_22.f_16, 268435456))
						{
							AUDIO::_0x8BF907833BE275DE(1f, 1f);
							__LIB_1__::func_993(&(Local_22.f_16), 268435456);
						}
						if (__LIB_0__::func_27(Local_22.f_16, 4096) && !Local_22.f_14)
						{
							__LIB_1__::func_581(&(Global_1394141.f_1325), 4);
							__LIB_1__::func_581(&(Global_1394141.f_1325), 8192);
						}
						if (Local_22.f_14)
						{
							Global_1394141.f_1323 = 1;
						}
						__LIB_0__::func_15(__LIB_0__::func_14(joaat("THEATRE_VISITS")), 1);
						__LIB_1__::func_581(&(Local_22.f_16), 67108864);
					}
					if (Local_22.f_14)
					{
						if (!Global_1394141.f_1321)
						{
							if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_22.f_48) > 0.99f)
							{
								__LIB_16__::func_557(&Local_22, 10);
							}
							if (Local_22 != 7)
							{
							}
							else
							{
								__LIB_16__::func_557(&Local_22, 10);
							}
						}
					}
					else
					{
						func_74(&Local_22);
						if (!bVar1 && !bVar2)
						{
							Global_1394141.f_1321 = 0;
							__LIB_16__::func_557(&Local_22, 10);
						}
					}
				}
				if (!bVar1)
				{
					__LIB_16__::func_690(&Local_22);
				}
				break;
			case 10:
				if (__LIB_16__::func_440(&Local_22))
				{
					__LIB_16__::func_441(&Local_22);
				}
				if (__LIB_0__::func_27(Local_22.f_16, 4194304))
				{
					iVar6 = INTERIOR::GET_INTERIOR_AT_COORDS(__LIB_16__::func_442(Local_22.f_1));
					if (INTERIOR::IS_VALID_INTERIOR(iVar6))
					{
						INTERIOR::UNPIN_INTERIOR(iVar6);
					}
					__LIB_1__::func_993(&(Local_22.f_16), 4194304);
				}
				__LIB_1__::func_993(&(Global_1394141.f_1326), 32768);
				if (!Local_22.f_14 && (__LIB_0__::func_27(Global_1394141.f_1326, -2147483648) || __LIB_0__::func_27(Local_22.f_16, 33554432)))
				{
					if (!bVar1)
					{
						if (Local_22.f_1070)
						{
							__LIB_16__::func_519(&(Local_22.f_1059));
							__LIB_1__::func_581(&(Global_1394141.f_1325), 4);
							__LIB_1__::func_581(&(Global_1394141.f_1325), 32);
							if (__LIB_0__::func_27(Local_22.f_16, 268435456))
							{
								AUDIO::_0x8BF907833BE275DE(1f, 1f);
								__LIB_1__::func_993(&(Local_22.f_16), 268435456);
							}
							__LIB_16__::func_517(&Local_22);
						}
						else
						{
							Global_1394141.f_1321 = 0;
						}
						__LIB_16__::func_689(&Local_22);
						Global_1394141.f_1328 = 0;
						Global_1394141.f_1330 = 0;
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_22.f_49))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE(Local_22.f_49);
						}
						AUDIO::_0x531A78D6BF27014B(__LIB_16__::func_510());
						func_1(&Local_22);
						__LIB_16__::func_443(&(Local_22.f_349), Local_22.f_35[4]);
						__LIB_16__::func_520(&Local_22);
						__LIB_16__::func_715(Local_22);
						__LIB_16__::func_564(Global_1394141.f_7[Global_1394141 /*31*/].f_30);
						__LIB_16__::func_495();
						__LIB_16__::func_557(&Local_22, 11);
					}
				}
				if (Local_22.f_14)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_22.f_49))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(Local_22.f_49);
					}
					AUDIO::_0x531A78D6BF27014B(__LIB_16__::func_510());
					func_1(&Local_22);
					__LIB_16__::func_557(&Local_22, 11);
				}
				else if (((!bVar1 && !bVar2) && !Local_22.f_14) && fVar3 > 17f)
				{
					func_74(&Local_22);
					__LIB_16__::func_689(&Local_22);
					Global_1394141.f_1328 = 0;
					Global_1394141.f_1330 = 0;
					__LIB_16__::func_519(&(Local_22.f_1059));
					if (!__LIB_16__::func_691(Local_22) && !__LIB_16__::func_502(Local_22))
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_22.f_49))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE(Local_22.f_49);
						}
						AUDIO::_0x531A78D6BF27014B(__LIB_16__::func_510());
						func_1(&Local_22);
						__LIB_16__::func_443(&(Local_22.f_349), Local_22.f_35[4]);
						__LIB_16__::func_520(&Local_22);
						__LIB_16__::func_564(Global_1394141.f_7[Global_1394141 /*31*/].f_30);
						__LIB_16__::func_495();
						__LIB_16__::func_557(&Local_22, 11);
					}
				}
				break;
			case 11:
				if (__LIB_16__::func_440(&Local_22))
				{
					__LIB_16__::func_441(&Local_22);
				}
				if (!Local_22.f_14)
				{
					if (!bVar1)
					{
						if (Local_22.f_2 == 0)
						{
							Global_1394141.f_1279[Local_22.f_1 /*8*/].f_6 = 0;
							SCRIPTS::TERMINATE_THIS_THREAD();
						}
					}
					else
					{
						__LIB_16__::func_557(&Local_22, 10);
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
	if (Local_22.f_1070)
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
	if (__LIB_0__::func_27(iParam0->f_16, 33554432))
	{
		__LIB_16__::func_443(&(iParam0->f_349), Global_1394141.f_7[*iParam0 /*31*/].f_4);
	}
	__LIB_1__::func_979(1);
}

void func_12(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	bVar0 = true;
	bVar1 = true;
	bVar2 = true;
	bVar3 = true;
	bVar4 = true;
	bVar5 = false;
	if (__LIB_0__::func_27(Global_1394141.f_1326, 1))
	{
		bVar3 = false;
		bVar1 = false;
		bVar4 = false;
	}
	if (__LIB_0__::func_27(Global_1394141.f_1326, 2))
	{
		bVar0 = false;
	}
	if (__LIB_0__::func_27(Global_1394141.f_1326, 4))
	{
		bVar2 = false;
		bVar0 = false;
		bVar1 = false;
	}
	if (__LIB_0__::func_27(Global_1394141.f_1326, 64))
	{
		bVar2 = false;
	}
	if (__LIB_0__::func_27(Global_1394141.f_1326, 512))
	{
		bVar5 = true;
	}
	__LIB_1__::func_538(0);
	if (bParam0)
	{
		if (INVENTORY::_0x3D10D7179D7034AF(__LIB_0__::func_162(0), joaat("WEAPON_UNARMED"), 0))
		{
			INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), joaat("WEAPON_UNARMED"));
		}
		if (!bVar0)
		{
			if (!__LIB_0__::func_27(Global_1394141.f_1326, 8))
			{
				if (VOLUME::_DOES_VOLUME_EXIST(Global_1394141.f_7[Global_1394141 /*31*/].f_4) && VOLUME::_0x666C2F53ABEFC952(Global_1394141.f_7[Global_1394141 /*31*/].f_4) != joaat("REL_NO_RELATIONSHIP"))
				{
					VOLUME::_0xFD010A2154B40676(Global_1394141.f_7[Global_1394141 /*31*/].f_4, joaat("REL_NO_RELATIONSHIP"));
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iLocal_2, true, 2, false))
					{
						if ((iLocal_2 != joaat("WEAPON_UNARMED") && iLocal_2 != joaat("OBJECT_1")) && iLocal_2 != joaat("OBJECT_2"))
						{
							if (INVENTORY::_0x3D10D7179D7034AF(__LIB_0__::func_162(0), iLocal_2, 0))
							{
								INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), iLocal_2);
								__LIB_16__::func_522(iLocal_2);
							}
						}
						if (VOLUME::_0x666C2F53ABEFC952(Global_1394141.f_7[Global_1394141 /*31*/].f_4) != joaat("REL_NO_RELATIONSHIP"))
						{
							VOLUME::_0xFD010A2154B40676(Global_1394141.f_7[Global_1394141 /*31*/].f_4, joaat("REL_NO_RELATIONSHIP"));
						}
						__LIB_1__::func_581(&(Global_1394141.f_1326), 8);
					}
				}
			}
		}
		else if (__LIB_0__::func_27(Global_1394141.f_1326, 8))
		{
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1394141.f_7[Global_1394141 /*31*/].f_4) && bVar3)
			{
				VOLUME::_0xFD010A2154B40676(Global_1394141.f_7[Global_1394141 /*31*/].f_4, joaat("REL_GANG_DUTCHS"));
				__LIB_1__::func_993(&(Global_1394141.f_1326), 8);
			}
		}
		else
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iLocal_2, true, 0, false))
			{
				iVar6 = TASK::GET_SCRIPT_TASK_STATUS(Global_35, 716706914, true);
				iVar7 = TASK::GET_SCRIPT_TASK_STATUS(Global_35, 713668775, true);
				if ((((((iLocal_2 != joaat("WEAPON_UNARMED") && iLocal_2 != joaat("OBJECT_1")) && iLocal_2 != joaat("OBJECT_2")) && iVar6 != 1) && iVar6 != 0) && iVar7 != 1) && iVar7 != 0)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
					TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
					if (PED::IS_PED_USING_ACTION_MODE(Global_35))
					{
						PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
					}
				}
			}
			__LIB_16__::func_523(&iLocal_2, 1);
		}
		if (bVar3)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		}
		if (bVar1)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		}
		if (bVar0)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK2"), false);
		}
		if (bVar2)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		}
		CAM::_0x632BE8D84846FA56();
		CAM::_0x3C8F74E8FE751614();
		CAM::_0x8910C24B7E0046EC();
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_ACTION"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_PC"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
		if (!PED::GET_PED_CONFIG_FLAG(Global_35, 489, false))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 489, true);
		}
		if (bVar4)
		{
			if (bVar5)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
			}
			else
			{
				HUD::_0xC9CAEAEEC1256E54(1664736751);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		}
		else
		{
			if (bVar5)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
			}
			if (!__LIB_0__::func_27(Global_1394141.f_1326, 8))
			{
				if (VOLUME::_DOES_VOLUME_EXIST(Global_1394141.f_7[Global_1394141 /*31*/].f_4) && VOLUME::_0x666C2F53ABEFC952(Global_1394141.f_7[Global_1394141 /*31*/].f_4) != joaat("REL_NO_RELATIONSHIP"))
				{
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iLocal_2, true, 2, false))
					{
						if ((iLocal_2 != joaat("WEAPON_UNARMED") && iLocal_2 != joaat("OBJECT_1")) && iLocal_2 != joaat("OBJECT_2"))
						{
							if (INVENTORY::_0x3D10D7179D7034AF(__LIB_0__::func_162(0), iLocal_2, 0))
							{
								INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), iLocal_2);
								__LIB_16__::func_522(iLocal_2);
							}
						}
						if (VOLUME::_0x666C2F53ABEFC952(Global_1394141.f_7[Global_1394141 /*31*/].f_4) != joaat("REL_NO_RELATIONSHIP"))
						{
							VOLUME::_0xFD010A2154B40676(Global_1394141.f_7[Global_1394141 /*31*/].f_4, joaat("REL_NO_RELATIONSHIP"));
						}
						__LIB_1__::func_581(&(Global_1394141.f_1326), 8);
					}
				}
			}
		}
		__LIB_16__::func_565();
	}
	else
	{
		__LIB_16__::func_566();
		__LIB_16__::func_523(&iLocal_2, 1);
		if (PED::GET_PED_CONFIG_FLAG(Global_35, 489, false))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 489, false);
		}
	}
}

int func_15(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (iParam1 == -1 || !__LIB_0__::func_27(Global_1394141.f_1325, -2147483648))
	{
		return 1;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	if (!__LIB_0__::func_27(Global_1394141.f_1325, 1))
	{
		iVar1 = __LIB_12__::func_807(iParam1);
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			iVar3 = iVar0;
			if (__LIB_12__::func_810(uParam0[iVar0 /*5*/], __LIB_12__::func_808(iParam1), __LIB_12__::func_809(iParam1, iVar3), 1065353216 /* Float: 1f */))
			{
				iVar2++;
			}
			iVar0++;
		}
		if (iVar2 >= iVar1)
		{
			__LIB_1__::func_581(&(Global_1394141.f_1325), 1);
		}
	}
	iVar2 = 0;
	if (!__LIB_0__::func_27(Global_1394141.f_1325, 8))
	{
		iVar1 = __LIB_12__::func_811(iParam1);
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			iVar4 = iVar0;
			if (__LIB_12__::func_810(&(uParam0->f_31[iVar0 /*5*/]), __LIB_12__::func_812(iParam1), __LIB_12__::func_813(iParam1, iVar4), 1065353216 /* Float: 1f */))
			{
				iVar2++;
			}
			iVar0++;
		}
		if (iVar2 >= iVar1)
		{
			__LIB_1__::func_581(&(Global_1394141.f_1325), 8);
		}
	}
	iVar2 = 0;
	if (!__LIB_0__::func_27(Global_1394141.f_1325, 2048))
	{
		iVar1 = __LIB_12__::func_814(iParam1);
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			iVar5 = iVar0;
			if (__LIB_12__::func_810(&(uParam0->f_107[iVar0 /*5*/]), __LIB_12__::func_815(iParam1), __LIB_12__::func_816(iParam1, iVar5), 1065353216 /* Float: 1f */))
			{
				iVar2++;
			}
			iVar0++;
		}
		if (iVar2 >= iVar1)
		{
			__LIB_1__::func_581(&(Global_1394141.f_1325), 2048);
		}
	}
	switch (iParam1)
	{
		case 0:
			if (!__LIB_0__::func_27(Global_1394141.f_1325, 64) && __LIB_12__::func_810(&(uParam0->f_118[0 /*5*/]), __LIB_12__::func_817(iParam1, 0), __LIB_12__::func_818(iParam1, 0), 1065353216 /* Float: 1f */))
			{
				__LIB_1__::func_581(&(Global_1394141.f_1325), 64);
			}
			if ((!__LIB_0__::func_27(Global_1394141.f_1325, 16384) && __LIB_12__::func_810(&(uParam0->f_118[1 /*5*/]), __LIB_12__::func_817(iParam1, 1), __LIB_12__::func_818(iParam1, 1), 1065353216 /* Float: 1f */)) && __LIB_12__::func_810(&(uParam0->f_118[2 /*5*/]), __LIB_12__::func_817(iParam1, 2), __LIB_12__::func_818(iParam1, 2), 1065353216 /* Float: 1f */))
			{
				__LIB_1__::func_581(&(Global_1394141.f_1325), 16384);
			}
			break;
		case 1:
		case 2:
			iVar2 = 0;
			if (!__LIB_0__::func_27(Global_1394141.f_1325, 2097152))
			{
				iVar1 = __LIB_12__::func_819(iParam1);
				iVar0 = 0;
				while (iVar0 <= (iVar1 - 1))
				{
					iVar6 = iVar0;
					if (__LIB_12__::func_810(&(uParam0->f_118[iVar0 /*5*/]), __LIB_12__::func_817(iParam1, 0), __LIB_12__::func_818(iParam1, iVar6), 1065353216 /* Float: 1f */))
					{
						iVar2++;
					}
					iVar0++;
				}
				if (iVar2 >= iVar1)
				{
					__LIB_1__::func_581(&(Global_1394141.f_1325), 2097152);
				}
			}
			break;
	}
	return 1;
}

void func_16(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	if (__LIB_0__::func_27(Global_1394141.f_1325, 1))
	{
		if (__LIB_0__::func_27(Global_1394141.f_1325, 2) && __LIB_16__::func_496(uParam0, __LIB_12__::func_820(uParam0), &(uParam0->f_229), __LIB_12__::func_821(uParam0), __LIB_12__::func_822(uParam0)))
		{
			__LIB_1__::func_993(&(Global_1394141.f_1325), 2);
		}
		if (__LIB_0__::func_27(Global_1394141.f_1325, 4) && __LIB_16__::func_497(uParam0, __LIB_12__::func_823(uParam0), &(uParam0->f_229), __LIB_12__::func_821(uParam0), __LIB_12__::func_822(uParam0)))
		{
			__LIB_1__::func_993(&(Global_1394141.f_1325), 4);
		}
	}
	if (__LIB_0__::func_27(Global_1394141.f_1325, 8))
	{
		if (__LIB_0__::func_27(Global_1394141.f_1325, 16) && __LIB_16__::func_496(&(uParam0->f_31), __LIB_12__::func_820(uParam0), &(uParam0->f_232), __LIB_12__::func_821(uParam0), __LIB_12__::func_822(uParam0)))
		{
			__LIB_1__::func_993(&(Global_1394141.f_1325), 16);
		}
		if (__LIB_0__::func_27(Global_1394141.f_1325, 32) && __LIB_16__::func_497(&(uParam0->f_31), __LIB_12__::func_823(uParam0), &(uParam0->f_232), __LIB_12__::func_821(uParam0), __LIB_12__::func_822(uParam0)))
		{
			__LIB_1__::func_993(&(Global_1394141.f_1325), 32);
		}
	}
	if (__LIB_0__::func_27(Global_1394141.f_1325, 2048))
	{
		if (__LIB_0__::func_27(Global_1394141.f_1325, 4096) && __LIB_16__::func_496(&(uParam0->f_107), __LIB_12__::func_820(uParam0), &(uParam0->f_235), __LIB_12__::func_821(uParam0), __LIB_12__::func_822(uParam0)))
		{
			__LIB_1__::func_993(&(Global_1394141.f_1325), 4096);
		}
		if (__LIB_0__::func_27(Global_1394141.f_1325, 8192) && __LIB_16__::func_497(&(uParam0->f_107), __LIB_12__::func_823(uParam0), &(uParam0->f_235), __LIB_12__::func_821(uParam0), __LIB_12__::func_822(uParam0)))
		{
			__LIB_1__::func_993(&(Global_1394141.f_1325), 8192);
		}
	}
	if (iParam1 == 0)
	{
		if (__LIB_0__::func_27(Global_1394141.f_1325, 64))
		{
			if (__LIB_0__::func_27(Global_1394141.f_1325, 128) && __LIB_16__::func_498(&(uParam0->f_118[0 /*5*/]), __LIB_12__::func_820(uParam0), &(uParam0->f_238), __LIB_12__::func_824(uParam0), __LIB_12__::func_822(uParam0)))
			{
				__LIB_1__::func_993(&(Global_1394141.f_1325), 128);
			}
			if (__LIB_0__::func_27(Global_1394141.f_1325, 256) && __LIB_16__::func_499(&(uParam0->f_118[0 /*5*/]), __LIB_12__::func_823(uParam0), &(uParam0->f_238), __LIB_12__::func_824(uParam0), __LIB_12__::func_822(uParam0)))
			{
				__LIB_1__::func_993(&(Global_1394141.f_1325), 256);
			}
			if (__LIB_0__::func_27(Global_1394141.f_1325, 512) && __LIB_16__::func_498(&(uParam0->f_118[0 /*5*/]), __LIB_12__::func_820(uParam0), &(uParam0->f_238), 0.5f, __LIB_12__::func_822(uParam0)))
			{
				__LIB_1__::func_993(&(Global_1394141.f_1325), 512);
			}
			if (__LIB_0__::func_27(Global_1394141.f_1325, 1024) && __LIB_16__::func_499(&(uParam0->f_118[0 /*5*/]), __LIB_12__::func_823(uParam0), &(uParam0->f_238), 0.5f, __LIB_12__::func_822(uParam0)))
			{
				__LIB_1__::func_993(&(Global_1394141.f_1325), 1024);
			}
		}
		if (__LIB_0__::func_27(Global_1394141.f_1325, 16384))
		{
			if (__LIB_0__::func_27(Global_1394141.f_1325, 32768) && __LIB_16__::func_500(1, 2, &(uParam0->f_118), __LIB_12__::func_820(uParam0), &(uParam0->f_241), __LIB_12__::func_824(uParam0), __LIB_12__::func_822(uParam0)))
			{
				__LIB_1__::func_993(&(Global_1394141.f_1325), 32768);
			}
			if (__LIB_0__::func_27(Global_1394141.f_1325, 65536) && __LIB_16__::func_501(1, 2, &(uParam0->f_118), __LIB_12__::func_823(uParam0), &(uParam0->f_241), __LIB_12__::func_824(uParam0), __LIB_12__::func_822(uParam0)))
			{
				__LIB_1__::func_993(&(Global_1394141.f_1325), 65536);
			}
			if (__LIB_0__::func_27(Global_1394141.f_1325, 131072) && __LIB_16__::func_500(1, 2, &(uParam0->f_118), __LIB_12__::func_820(uParam0), &(uParam0->f_241), 0.5f, __LIB_12__::func_822(uParam0)))
			{
				__LIB_1__::func_993(&(Global_1394141.f_1325), 131072);
			}
			if (__LIB_0__::func_27(Global_1394141.f_1325, 262144) && __LIB_16__::func_501(1, 2, &(uParam0->f_118), __LIB_12__::func_823(uParam0), &(uParam0->f_241), 0.5f, __LIB_12__::func_822(uParam0)))
			{
				__LIB_1__::func_993(&(Global_1394141.f_1325), 262144);
			}
		}
		if (__LIB_0__::func_27(Global_1394141.f_1325, 524288))
		{
			bVar0 = true;
			if (!__LIB_16__::func_496(&(uParam0->f_31), __LIB_12__::func_820(uParam0), &(uParam0->f_232), 0.1f, __LIB_12__::func_822(uParam0)))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				__LIB_1__::func_993(&(Global_1394141.f_1325), 524288);
			}
		}
		if (__LIB_0__::func_27(Global_1394141.f_1325, 1048576))
		{
			bVar1 = true;
			if (!__LIB_16__::func_497(&(uParam0->f_31), __LIB_12__::func_823(uParam0), &(uParam0->f_232), 0.1f, __LIB_12__::func_822(uParam0)))
			{
				bVar1 = false;
			}
			if (bVar1)
			{
				__LIB_1__::func_993(&(Global_1394141.f_1325), 1048576);
			}
		}
	}
	if (iParam1 == 1 || iParam1 == 2)
	{
		if (__LIB_0__::func_27(Global_1394141.f_1325, 2097152))
		{
			if (__LIB_0__::func_27(Global_1394141.f_1325, 4194304) && __LIB_16__::func_496(&(uParam0->f_118), __LIB_12__::func_825(uParam0), &(uParam0->f_238), __LIB_12__::func_821(uParam0), __LIB_12__::func_822(uParam0)))
			{
				__LIB_1__::func_993(&(Global_1394141.f_1325), 4194304);
			}
			if (__LIB_0__::func_27(Global_1394141.f_1325, 8388608) && __LIB_16__::func_497(&(uParam0->f_118), __LIB_12__::func_823(uParam0), &(uParam0->f_238), __LIB_12__::func_821(uParam0), __LIB_12__::func_822(uParam0)))
			{
				__LIB_1__::func_993(&(Global_1394141.f_1325), 8388608);
			}
		}
	}
}

void func_17(int iParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_49))
	{
		return;
	}
	switch (iParam0->f_13)
	{
		case 0:
			if (!__LIB_16__::func_524(iParam0->f_49, __LIB_16__::func_446(1), __LIB_16__::func_447()))
			{
				return;
			}
			__LIB_0__::func_19(&(iParam0->f_13), 1);
			break;
		case 1:
			if (__LIB_0__::func_27(iParam0->f_16, -2147483648))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_49, __LIB_16__::func_448(), iParam0->f_57, 0);
				__LIB_10__::func_942(iParam0->f_49, __LIB_16__::func_446(1), __LIB_16__::func_447());
				__LIB_0__::func_19(&(iParam0->f_13), 2);
			}
			break;
		case 2:
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_49, __LIB_16__::func_446(1)))
			{
				__LIB_16__::func_449(iParam0->f_49, __LIB_16__::func_446(2), __LIB_16__::func_447());
				__LIB_1__::func_993(&(iParam0->f_16), -2147483648);
				__LIB_0__::func_19(&(iParam0->f_13), 3);
			}
			break;
		case 3:
			if (!__LIB_16__::func_524(iParam0->f_49, __LIB_16__::func_446(2), __LIB_16__::func_447()))
			{
				return;
			}
			__LIB_0__::func_19(&(iParam0->f_13), 4);
			break;
		case 4:
			if (Global_1394141.f_1321)
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_49, __LIB_16__::func_448(), iParam0->f_57, 0);
				__LIB_10__::func_942(iParam0->f_49, __LIB_16__::func_446(2), __LIB_16__::func_447());
				__LIB_0__::func_19(&(iParam0->f_13), 5);
			}
			break;
		case 5:
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_49, __LIB_16__::func_446(2)))
			{
				__LIB_16__::func_449(iParam0->f_49, __LIB_16__::func_446(1), __LIB_16__::func_447());
				__LIB_0__::func_19(&(iParam0->f_13), 0);
			}
			break;
	}
}

void func_18(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	if (!iParam0->f_1070)
	{
		return;
	}
	bVar0 = PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_PLAYER_SEAT_CHAIR_DYNAMIC"));
	bVar1 = __LIB_1__::func_205(Global_35, iParam0->f_35[1], 1, 0);
	bVar2 = __LIB_1__::func_205(Global_35, iParam0->f_35[2], 1, 0);
	if (bVar0)
	{
		if (bVar1)
		{
			if (!__LIB_0__::func_27(iParam0->f_16, 2048) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_1088))
			{
				if (CAM::_0xDD0B7C5AE58F721D(&(iParam0->f_1101)) && !CAM::_0x927B810E43E99932(&(iParam0->f_1101)))
				{
					CAM::_0xB8B207C34285E978(&(iParam0->f_1101));
					__LIB_1__::func_581(&(iParam0->f_16), 2048);
				}
			}
		}
		if (bVar2)
		{
			if (!__LIB_0__::func_27(iParam0->f_16, 2048) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_1088))
			{
				if (CAM::_0xDD0B7C5AE58F721D(&(iParam0->f_1117)) && !CAM::_0x927B810E43E99932(&(iParam0->f_1117)))
				{
					CAM::_0xB8B207C34285E978(&(iParam0->f_1117));
				}
			}
		}
	}
	else
	{
		if (CAM::_0x927B810E43E99932(&(iParam0->f_1101)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(iParam0->f_1101));
			__LIB_1__::func_993(&(iParam0->f_16), 2048);
		}
		if (CAM::_0x927B810E43E99932(&(iParam0->f_1117)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(iParam0->f_1117));
			__LIB_1__::func_993(&(iParam0->f_16), 2048);
		}
	}
}

void func_19(int iParam0)
{
	switch (Local_1155.f_1)
	{
		case 0:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_48))
			{
				return;
			}
			if (!__LIB_0__::func_27(Local_1155.f_32, 1))
			{
				return;
			}
			if (!__LIB_16__::func_524(iParam0->f_48, func_147(5), "PLAYER CHALLENGE"))
			{
				return;
			}
			__LIB_0__::func_19(&(Local_1155.f_1), 1);
			break;
		case 1:
			break;
	}
}

void func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	iParam0->f_74[0] = joaat("CS_FEATSOFSTRENGTH");
	iParam0->f_58[0] = joaat("P_BARSTOOL01X");
	iParam0->f_58[1] = joaat("P_THEATERCHAIR01B01X");
	iParam0->f_58[2] = joaat("P_THEATERCHAIR01B01X");
	__LIB_1__::func_581(&(iParam0->f_16), 1024);
	__LIB_1__::func_581(&(iParam0->f_16), 512);
	iParam0->f_50 = { 2546.453f, -1303.998f, 46.793f };
	iParam0->f_53 = { 0f, 0f, 40f };
	iParam0->f_946 = "SHRCTAU";
	iParam0->f_945 = "SHFOSAU";
	iParam0->f_910 = Local_22;
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
		iParam0->f_48 = ANIMSCENE::_CREATE_ANIM_SCENE("script@shows@flex_fight@act2@action", 2, func_147(0), false, true);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (17 - 1))
	{
		iVar1 = iVar0;
		Local_1155.f_33[iVar0] = MISC::GET_HASH_KEY(func_158(iVar1));
		iVar0++;
	}
	Local_1155.f_51 = 0;
	PED::_0xF008E0BA1FE1D644(1);
}

bool func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS(__LIB_16__::func_442(iParam0->f_1));
	if (!__LIB_0__::func_27(iParam0->f_16, 4194304))
	{
		if (INTERIOR::IS_VALID_INTERIOR(iVar1))
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iVar1);
			__LIB_1__::func_581(&(iParam0->f_16), 4194304);
			return false;
		}
	}
	else if (!INTERIOR::IS_INTERIOR_READY(iVar1))
	{
		return false;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_945))
	{
		if (HUD::_DOES_TEXT_DATABASE_EXIST(iParam0->f_945))
		{
			HUD::_TEXT_DATABASE_REQUEST(iParam0->f_945);
		}
		if (!HUD::_TEXT_DATABASE_HAS_LOADED(iParam0->f_945))
		{
			return false;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_946) && !iParam0->f_14)
	{
		if (HUD::_DOES_TEXT_DATABASE_EXIST(iParam0->f_946))
		{
			HUD::_TEXT_DATABASE_REQUEST(iParam0->f_946);
		}
		if (!HUD::_TEXT_DATABASE_HAS_LOADED(iParam0->f_946))
		{
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_58)
	{
		iVar2 = iParam0->f_58[iVar0];
		if (__LIB_0__::func_30(iVar2))
		{
			if (!STREAMING::HAS_MODEL_LOADED(iVar2))
			{
				return false;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_74)
	{
		iVar3 = iParam0->f_74[iVar0];
		if (__LIB_0__::func_30(iVar3))
		{
			if (!STREAMING::HAS_MODEL_LOADED(iVar3))
			{
				return false;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_88)
	{
		iVar4 = iParam0->f_88[iVar0];
		if (iVar4 != 0)
		{
			if (WEAPON::IS_WEAPON_VALID(iVar4) && !WEAPON::_0xFF07CF465F48B830(iVar4))
			{
				return false;
			}
		}
		iVar0++;
	}
	if (!iParam0->f_14 && !iParam0->f_1070)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iParam0->f_56))
		{
			return false;
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_48))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_48, true, false))
		{
			return false;
		}
	}
	if (!AUDIO::_0xD9130842D7226045(__LIB_16__::func_510(), 1))
	{
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(__LIB_16__::func_525()))
	{
		return false;
	}
	if (!__LIB_16__::func_696(iParam0))
	{
		return false;
	}
	if (!func_161(iParam0))
	{
		return false;
	}
	return true;
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
		if (!func_165(&(iParam0->f_49), &(iParam0->f_16), __LIB_16__::func_447(), __LIB_16__::func_446(0), 1))
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
			iVar3 = POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(__LIB_16__::func_455(iParam1), func_177(iParam1, iVar2), -156825994, false, true, func_178(iParam1, iVar2));
			bVar1 = false;
			if (__LIB_0__::func_27(Global_1394141.f_1326, 16))
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
				(*uParam0)[iVar2 /*10*/] = __LIB_8__::func_931(iVar3, func_178(iParam1, iVar2), __LIB_16__::func_528(iParam1, iVar2), 1, 1, __LIB_16__::func_721(iParam1, iVar2), 1, 1, 1, 0, 0, 0, 0);
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

bool func_46(int iParam0)
{
	var uVar0[1];
	var uVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_81[1]))
	{
		uVar2 = 1;
		if (__LIB_4__::func_206(&uVar0, &uVar2, 1, 2547.733f, -1303.363f, 47.48392f, 0.5f, 0, 1, 1, -1, 1, 0, -1082130432 /* Float: -1f */, 0, 0) > 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uVar0[0]) && !ENTITY::IS_ENTITY_DEAD(uVar0[0]))
			{
				iParam0->f_81[1] = uVar0[0];
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam0->f_81[1], "Default_Show_Performers_Group", -1f);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "CrowdMember", iParam0->f_81[1], 0);
				return true;
			}
		}
		return false;
	}
	return true;
}

void func_57(var uParam0, var uParam1, int iParam2)
{
	if (__LIB_0__::func_27(uParam0->f_18, 1) && !__LIB_0__::func_27(uParam0->f_18, 2))
	{
		STREAMING::_REQUEST_SCENARIO_TYPE(joaat("PROP_HUMAN_SEAT_CHAIR"), 15, 0, 0);
		__LIB_1__::func_581(&(uParam0->f_18), 2);
	}
	if (__LIB_0__::func_27(uParam0->f_18, 2) && !__LIB_0__::func_27(uParam0->f_18, 4))
	{
		if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("PROP_HUMAN_SEAT_CHAIR"), false))
		{
			__LIB_1__::func_581(&(uParam0->f_18), 4);
		}
	}
	if (__LIB_0__::func_27(uParam0->f_18, 8) && !__LIB_0__::func_27(uParam0->f_18, 16))
	{
		TASK::REQUEST_WAYPOINT_RECORDING(__LIB_16__::func_462(iParam2));
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(__LIB_16__::func_462(iParam2)))
		{
			__LIB_1__::func_581(&(uParam0->f_18), 16);
		}
	}
	func_215(uParam0, uParam1, iParam2);
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

void func_61(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_12))
	{
		return;
	}
	if ((__LIB_0__::func_27(iParam0->f_16, 262144) && iParam0->f_41 != 2) && iParam0->f_41 != 3)
	{
		MISC::_0xE98D55C5983F2509(iParam0->f_12);
		__LIB_16__::func_692(iParam0);
		__LIB_0__::func_19(&(iParam0->f_41), 2);
	}
	if (__LIB_0__::func_27(Global_1394141.f_1326, 512))
	{
		if (!__LIB_0__::func_27(iParam0->f_16, 1048576))
		{
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_81[iVar0]))
				{
					PED::SET_PED_CONFIG_FLAG(iParam0->f_81[iVar0], 301, true);
				}
				iVar0++;
			}
			__LIB_1__::func_581(&(iParam0->f_16), 1048576);
		}
	}
	else if (__LIB_0__::func_27(iParam0->f_16, 1048576))
	{
		iVar1 = 0;
		while (iVar1 <= 5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_81[iVar1]))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0->f_81[iVar1], 301, false);
			}
			iVar1++;
		}
		__LIB_1__::func_993(&(iParam0->f_16), 1048576);
	}
	switch (iParam0->f_41)
	{
		case 0:
			iParam0->f_1052 = 0;
			iParam0->f_953 = 8500;
			__LIB_1__::func_148(&(iParam0->f_950));
			MISC::_0x870708A6E147A9AD(iParam0->f_12, "", 20f, 0, 4, 0, 0, 0, 0, -1);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_12, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_12, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_12, 130, true);
			__LIB_0__::func_19(&(iParam0->f_41), 1);
			break;
		case 1:
			iVar3 = __LIB_0__::func_57(iParam0->f_12);
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &iVar2, 0, 0) && iVar2 == iVar3)
			{
				if ((__LIB_0__::func_27(iParam0->f_16, 131072) && !__LIB_0__::func_27(Global_1394141.f_1326, 512)) && !__LIB_0__::func_27(Global_1394141.f_1326, 16384))
				{
					if (!__LIB_0__::func_75(&(iParam0->f_947)))
					{
						__LIB_1__::func_148(&(iParam0->f_947));
					}
					else if (!__LIB_0__::func_139(iParam0->f_1053[1]) || !__LIB_0__::func_139(iParam0->f_1053[0]))
					{
						__LIB_16__::func_718(iParam0, &Global_35);
						if (__LIB_1__::func_871(&(iParam0->f_947)) > iParam0->f_953)
						{
							__LIB_1__::func_221(iParam0->f_1053[1], 1, 1);
							__LIB_1__::func_221(iParam0->f_1053[0], 1, 1);
						}
					}
					else if (__LIB_1__::func_871(&(iParam0->f_947)) > iParam0->f_953 || __LIB_0__::func_27(iParam0->f_16, 524288))
					{
						if (!__LIB_0__::func_572(iParam0->f_1053[1], 0))
						{
							__LIB_1__::func_993(&(iParam0->f_16), 16);
							__LIB_1__::func_221(iParam0->f_1053[1], 1, 1);
						}
						if (!__LIB_0__::func_572(iParam0->f_1053[0], 0))
						{
							__LIB_1__::func_993(&(iParam0->f_16), 32);
							__LIB_1__::func_221(iParam0->f_1053[0], 1, 1);
						}
						if (__LIB_16__::func_687(&(iParam0->f_1053[1])))
						{
							__LIB_1__::func_221(iParam0->f_1053[1], 0, 1);
							__LIB_1__::func_221(iParam0->f_1053[0], 0, 1);
							if (__LIB_0__::func_27(iParam0->f_16, 524288))
							{
								__LIB_1__::func_993(&(iParam0->f_16), 524288);
							}
							if (__LIB_0__::func_27(Global_1394141.f_1326, 32768))
							{
								if (func_229(iParam0))
								{
									iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 11);
									if (iVar4 < 4)
									{
										__LIB_16__::func_720();
									}
									iParam0->f_953 = 8500;
									__LIB_1__::func_148(&(iParam0->f_947));
								}
							}
							else
							{
								__LIB_16__::func_720();
								iParam0->f_953 = 8500;
								__LIB_1__::func_148(&(iParam0->f_947));
							}
						}
						else if (__LIB_16__::func_687(&(iParam0->f_1053[0])))
						{
							__LIB_1__::func_221(iParam0->f_1053[1], 0, 1);
							__LIB_1__::func_221(iParam0->f_1053[0], 0, 1);
							if (__LIB_0__::func_27(iParam0->f_16, 524288))
							{
								__LIB_1__::func_993(&(iParam0->f_16), 524288);
							}
							if (func_231(iParam0))
							{
								iParam0->f_953 = 8500;
								__LIB_1__::func_148(&(iParam0->f_947));
							}
						}
					}
					else
					{
						if (__LIB_0__::func_572(iParam0->f_1053[1], 0))
						{
							__LIB_1__::func_221(iParam0->f_1053[1], 0, 1);
						}
						if (__LIB_0__::func_572(iParam0->f_1053[0], 0))
						{
							__LIB_1__::func_221(iParam0->f_1053[0], 0, 1);
						}
					}
				}
				else
				{
					if (__LIB_0__::func_572(iParam0->f_1053[1], 1))
					{
						__LIB_1__::func_221(iParam0->f_1053[1], 0, 1);
					}
					if (__LIB_0__::func_572(iParam0->f_1053[0], 1))
					{
						__LIB_1__::func_221(iParam0->f_1053[0], 0, 1);
					}
				}
				if (__LIB_0__::func_27(iParam0->f_16, 256))
				{
					if (!__LIB_16__::func_693(&(iParam0->f_1053[2]), &Global_35, "INTERACT_DRAW", joaat("INPUT_CONTEXT_RT")))
					{
						return;
					}
					else if (!__LIB_0__::func_154(__LIB_0__::func_399(Global_35, 0, 0, 0)) && !__LIB_0__::func_154(__LIB_0__::func_399(Global_35, 0, 1, 0)))
					{
						if (!__LIB_0__::func_572(iParam0->f_1053[2], 0))
						{
							__LIB_1__::func_221(iParam0->f_1053[2], 1, 1);
						}
						else if (__LIB_1__::func_732(iParam0->f_1053[2], 1))
						{
							if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar5, true, 2, false))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar5, false, 0, false, false);
								TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
								__LIB_1__::func_221(iParam0->f_1053[2], 0, 1);
							}
						}
					}
					else if (__LIB_0__::func_572(iParam0->f_1053[2], 0))
					{
						__LIB_1__::func_221(iParam0->f_1053[2], 0, 1);
					}
				}
				else if (__LIB_0__::func_572(iParam0->f_1053[2], 1))
				{
					__LIB_1__::func_221(iParam0->f_1053[2], 0, 1);
				}
			}
			else
			{
				__LIB_16__::func_692(iParam0);
			}
			break;
		case 2:
			__LIB_16__::func_692(iParam0);
			if ((ANIMSCENE::_GET_ANIM_SCENE_TIME(iParam0->f_48) / ANIMSCENE::_GET_ANIM_SCENE_DURATION(iParam0->f_48)) < 0.85f)
			{
				return;
			}
			__LIB_0__::func_19(&(iParam0->f_41), 3);
			break;
		case 3:
			if ((ANIMSCENE::_GET_ANIM_SCENE_TIME(iParam0->f_48) / ANIMSCENE::_GET_ANIM_SCENE_DURATION(iParam0->f_48)) < 0.99f && AUDIO::_0x714A0EA7DE1167BE(__LIB_16__::func_509(iParam0->f_944), __LIB_16__::func_510()))
			{
				__LIB_16__::func_511(__LIB_16__::func_509(iParam0->f_944), __LIB_16__::func_510());
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
	struct<11> Var4;
	vector3 vVar15[24];
	float fVar18;
	struct<7> Var19;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	vector3 vVar35[24];
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_48))
	{
		return;
	}
	fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_48);
	bVar1 = ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_48, false);
	func_237(iParam0, &Local_1155);
	if (Local_1155 >= 2 && Local_1155 <= 7)
	{
		func_238(&Local_1155);
	}
	if (bVar1)
	{
		func_239(iParam0);
	}
	switch (Local_1155)
	{
		case 0:
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				iVar3 = iVar2;
				if (!VOLUME::_DOES_VOLUME_EXIST(Local_1155.f_2[iVar3]))
				{
					Var4 = { func_240(iVar3) };
					Local_1155.f_2[iVar3] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var4.f_9, Var4, Var4.f_3, Var4.f_6, Var4.f_10);
				}
				iVar2++;
			}
			Global_1394141.f_1322 = 1;
			__LIB_1__::func_649(&Local_1155, 1);
			break;
		case 1:
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, func_147(0)))
			{
				if (!__LIB_16__::func_524(iParam0->f_48, func_147(1), "IDLE 01"))
				{
					return;
				}
				if (fVar0 > 0.99f)
				{
					__LIB_10__::func_942(iParam0->f_48, func_147(1), "IDLE 01");
					Local_1155.f_51 = 1;
					__LIB_1__::func_649(&Local_1155, 2);
				}
			}
			break;
		case 2:
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, func_147(1)))
			{
				__LIB_1__::func_581(&(Global_1394141.f_1326), 4);
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(iParam0->f_48, func_147(0));
				__LIB_1__::func_581(&(Local_1155.f_32), 1);
				__LIB_1__::func_649(&Local_1155, 3);
			}
			break;
		case 3:
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, func_147(1)))
			{
				__LIB_16__::func_524(iParam0->f_48, func_147(2), "IDLE 02");
				if (func_242(&Local_1155) && ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_48, func_147(5)))
				{
					__LIB_10__::func_942(iParam0->f_48, func_147(5), "Player Challange");
					Local_1155.f_51 = 5;
					__LIB_1__::func_649(&Local_1155, 8);
					return;
				}
				if (fVar0 > 0.99f && ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_48, func_147(2)))
				{
					__LIB_10__::func_942(iParam0->f_48, func_147(2), "IDLE 02");
					Local_1155.f_51 = 2;
					__LIB_1__::func_649(&Local_1155, 4);
				}
			}
			break;
		case 4:
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, func_147(2)))
			{
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(iParam0->f_48, func_147(1));
				__LIB_1__::func_649(&Local_1155, 5);
			}
			break;
		case 5:
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, func_147(2)))
			{
				__LIB_16__::func_524(iParam0->f_48, func_147(3), "IDLE 03");
				if (func_242(&Local_1155) && ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_48, func_147(5)))
				{
					__LIB_10__::func_942(iParam0->f_48, func_147(5), "Player Challange");
					Local_1155.f_51 = 5;
					__LIB_1__::func_649(&Local_1155, 8);
					return;
				}
				if (fVar0 > 0.99f && ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_48, func_147(3)))
				{
					__LIB_10__::func_942(iParam0->f_48, func_147(3), "IDLE 03");
					Local_1155.f_51 = 3;
					__LIB_1__::func_649(&Local_1155, 6);
				}
			}
			break;
		case 6:
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, func_147(3)))
			{
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(iParam0->f_48, func_147(2));
				__LIB_1__::func_649(&Local_1155, 7);
			}
			break;
		case 7:
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, func_147(3)))
			{
				__LIB_16__::func_524(iParam0->f_48, func_147(6), "CROWDCHALLENGE 01");
				if (func_242(&Local_1155) && ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_48, func_147(5)))
				{
					__LIB_1__::func_581(&(Local_1155.f_32), 2);
					__LIB_10__::func_942(iParam0->f_48, func_147(5), "Player Challange");
					Local_1155.f_51 = 5;
					__LIB_1__::func_649(&Local_1155, 8);
					return;
				}
				if (fVar0 > 0.7f && __LIB_0__::func_27(Global_1394141.f_1326, 4))
				{
					__LIB_1__::func_993(&(Global_1394141.f_1326), 4);
				}
				if (fVar0 > 0.99f && ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_48, func_147(6)))
				{
					Global_1394141.f_1334 = 1;
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "CrowdMember", iParam0->f_81[1], 0);
					__LIB_10__::func_942(iParam0->f_48, func_147(6), "CROWDCHALLENGE 01");
					if (__LIB_0__::func_139(Local_1155.f_23))
					{
						__LIB_1__::func_748(&(Local_1155.f_23), 1, 1);
					}
					Local_1155.f_51 = 6;
					__LIB_1__::func_649(&Local_1155, 9);
				}
			}
			break;
		case 9:
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, func_147(6)))
			{
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(iParam0->f_48, func_147(3));
				__LIB_1__::func_649(&Local_1155, 18);
			}
			break;
		case 18:
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, func_147(6)))
			{
				__LIB_16__::func_524(iParam0->f_48, func_147(7), "CROWDCHALLENGE0 2");
				if (fVar0 > 0.99f && ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_48, func_147(7)))
				{
					__LIB_1__::func_649(&Local_1155, 19);
				}
			}
			break;
		case 19:
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(iParam0->f_48, func_147(5));
			__LIB_1__::func_581(&(Local_1155.f_32), 2);
			__LIB_10__::func_942(iParam0->f_48, func_147(7), "CROWDCHALLENGE 02");
			Local_1155.f_51 = 7;
			__LIB_1__::func_649(&Local_1155, 20);
			break;
		case 8:
			if (__LIB_0__::func_27(iParam0->f_16, 131072))
			{
				__LIB_1__::func_993(&(iParam0->f_16), 131072);
			}
			if (!__LIB_0__::func_27(iParam0->f_16, 262144))
			{
				__LIB_1__::func_581(&(iParam0->f_16), 262144);
			}
			if (!__LIB_0__::func_27(Global_1394141.f_1326, 1024))
			{
				__LIB_1__::func_581(&(Global_1394141.f_1326), 1024);
			}
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, func_147(5)))
			{
				__LIB_1__::func_581(&(Local_1155.f_32), 2);
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_48, func_147(1)))
				{
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(iParam0->f_48, func_147(1));
				}
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_48, func_147(2)))
				{
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(iParam0->f_48, func_147(2));
				}
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_48, func_147(3)))
				{
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(iParam0->f_48, func_147(3));
				}
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_48, func_147(6)))
				{
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(iParam0->f_48, func_147(6));
				}
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_48, func_147(7)))
				{
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(iParam0->f_48, func_147(7));
				}
				if (Local_1155.f_21 && !ENTITY::IS_ENTITY_DEAD(iParam0->f_81[1]))
				{
					Local_1155.f_21 = 0;
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0->f_81[1], false, true);
					__LIB_2__::func_915(iParam0->f_81[1], joaat("PROP_HUMAN_SEAT_CHAIR"), 2547.751f, -1303.415f, 47.48392f, -175.57f, -1, 1, 0, 0, -1082130432 /* Float: -1f */);
				}
				if (fVar0 > 0.4f && !__LIB_0__::func_27(iParam0->f_16, 262144))
				{
					PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), iParam0->f_81[0], "SHOW_FLEXFIGHT", 2546.317f, -1309.955f, 48.21665f, 0, 0);
					__LIB_1__::func_581(&(Global_1394141.f_1326), 4);
					__LIB_1__::func_581(&(iParam0->f_16), 262144);
					__LIB_1__::func_993(&(iParam0->f_16), 131072);
				}
				if (!__LIB_0__::func_27(Local_1155.f_32, 4))
				{
					STREAMING::REQUEST_ANIM_DICT(func_245());
					__LIB_1__::func_581(&(Local_1155.f_32), 4);
				}
				else if ((((!__LIB_0__::func_27(Local_1155.f_32, 8) && fVar0 > 0.2f) && fVar0 < 0.8f) && STREAMING::HAS_ANIM_DICT_LOADED(func_245())) && __LIB_0__::func_665(Global_35, iParam0->f_81[0], 1, 1) < 4f)
				{
					TASK::TASK_PLAY_ANIM(Global_35, func_245(), func_247(), 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
					__LIB_1__::func_581(&(Local_1155.f_32), 8);
				}
				if (fVar0 > 0.99f)
				{
					Global_1394141.f_1331 = 1;
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0->f_81[0], false, true);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(iParam0->f_81[0], Global_35, 0, 0, 0, 1, 0);
					PED::_0x57F35552E771BE9D(iParam0->f_81[0], 8);
					PED::_0xFC3DB99C8144CD81(iParam0->f_81[0], Local_1155.f_2[3], 0, 0, 0);
					PED::_0xFC3DB99C8144CD81(Global_35, Local_1155.f_2[3], 0, 0, 0);
					PED::_0x57F35552E771BE9D(iParam0->f_81[0], 12);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0->f_81[0], joaat("REL_PLAYER_ENEMY"));
					if (__LIB_4__::func_385(&Global_35))
					{
						Local_1155.f_20 = 1;
					}
					__LIB_1__::func_649(&Local_1155, 10);
				}
			}
			break;
		case 10:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
			if (__LIB_0__::func_181())
			{
				StringCopy(&cVar15, "SHFF_PFIGHT_J", 24);
			}
			else
			{
				StringCopy(&cVar15, "SHFF_PFIGHT_A", 24);
			}
			if (__LIB_1__::func_205(Global_35, Local_1155.f_2[3], 1, 0) && __LIB_1__::func_104(&(Local_22.f_954), cVar15, 0, -1, 0, 0))
			{
				__LIB_19__::func_81(1);
				PED::SET_PED_CONFIG_FLAG(Global_35, 170, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 258, true);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(Global_35, iParam0->f_81[0], 0, 0, 0, 1, 0);
				ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iParam0->f_81[0], true, 300f);
				PED::_SET_PED_DAMAGE_MODIFIER(iParam0->f_81[0], 2f);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
				PED::SET_PED_CONFIG_FLAG(Global_35, 249, true);
				__LIB_3__::func_459(iParam0->f_81[0], 0);
				WEAPON::REMOVE_ALL_PED_WEAPONS(iParam0->f_81[0], true, true);
				WEAPON::SET_CURRENT_PED_WEAPON(iParam0->f_81[0], joaat("WEAPON_UNARMED"), true, 0, false, false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0->f_81[0], joaat("REL_PLAYER_ENEMY"));
				ENTITY::SET_ENTITY_INVINCIBLE(iParam0->f_81[0], true);
				PED::SET_PED_CONFIG_FLAG(iParam0->f_81[0], 169, true);
				PED::SET_PED_CONFIG_FLAG(iParam0->f_81[0], 258, true);
				PED::SET_PED_CONFIG_FLAG(iParam0->f_81[0], 249, true);
				AUDIO::STOP_PED_SPEAKING(iParam0->f_81[0], true);
				__LIB_1__::func_148(&(Local_1155.f_10));
				__LIB_1__::func_649(&Local_1155, 17);
			}
			break;
		case 17:
			fVar18 = __LIB_0__::func_265(&(Local_1155.f_10));
			if (!__LIB_0__::func_27(Local_1155.f_32, 32) && AUDIO::LOAD_STREAM(func_252(), func_253()))
			{
				AUDIO::PLAY_STREAM_FROM_POSITION(2546.4f, -1314.04f, 50.25f, AUDIO::_0x0556C784FA056628(func_252(), func_253()));
				__LIB_1__::func_581(&(Local_1155.f_32), 32);
			}
			if ((((!__LIB_0__::func_481(1) && fVar18 > 2f) && __LIB_1__::func_205(Global_35, Local_1155.f_2[3], 1, 0)) && !__LIB_0__::func_27(Local_1155.f_32, 16)) && func_255())
			{
				if (!Local_1155.f_22)
				{
					Var19 = { func_240(4) };
					VOLUME::_0x0EB78C2B156635B1(Var19.f_9, Var19, Var19.f_3, Var19.f_6);
					Var19 = { func_240(5) };
					VOLUME::_0x0EB78C2B156635B1(Var19.f_9, Var19, Var19.f_3, Var19.f_6);
					Var19 = { func_240(6) };
					VOLUME::_0x0EB78C2B156635B1(Var19.f_9, Var19, Var19.f_3, Var19.f_6);
					Local_1155.f_22 = 1;
				}
				__LIB_1__::func_581(&(Local_1155.f_32), 16);
			}
			if (!__LIB_0__::func_27(Local_1155.f_32, 512) && fVar18 > 60f)
			{
				PED::_0xB8DE69D9473B7593(Global_35, 8);
				__LIB_1__::func_581(&(Local_1155.f_32), 512);
			}
			iVar30 = ENTITY::GET_ENTITY_HEALTH(Global_35);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
			if (!__LIB_0__::func_27(Local_1155.f_32, 256))
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT/SND_Show_Flex_Fight"))
				{
					__LIB_1__::func_148(&(Local_1155.f_16));
					__LIB_1__::func_581(&(Local_1155.f_32), 256);
				}
			}
			else if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0->f_81[0], 128, 0))
			{
				if (__LIB_0__::func_265(&(Local_1155.f_16)) > 4f)
				{
					AUDIO::PLAY_SOUND_FRONTEND("Whistle", "Flex_Fight_Sounds", true, 0);
					__LIB_1__::func_148(&(Local_1155.f_16));
				}
			}
			else if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0->f_81[0], 64, 0))
			{
				if (__LIB_0__::func_265(&(Local_1155.f_16)) > 4f)
				{
					AUDIO::PLAY_SOUND_FRONTEND("Horn", "Flex_Fight_Sounds", true, 0);
					__LIB_1__::func_148(&(Local_1155.f_16));
				}
			}
			if (iVar30 < 70 || fVar18 > 90f)
			{
				PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), true);
				__LIB_1__::func_148(&(Local_1155.f_10));
				__LIB_1__::func_649(&Local_1155, 11);
			}
			break;
		case 11:
			__LIB_0__::func_37(&(Local_1155.f_10));
			__LIB_1__::func_148(&(Local_1155.f_13));
			__LIB_1__::func_581(&(Local_1155.f_32), 128);
			__LIB_1__::func_649(&Local_1155, 12);
			break;
		case 12:
			if (__LIB_0__::func_265(&(Local_1155.f_13)) > 4f && !__LIB_0__::func_27(Local_1155.f_32, 64))
			{
				PED::_0xC48AF420371C7407(iParam0->f_81[0], joaat("AR_ATTACK_HAYMAKER_TO_HEAD_RIGHT_HAND_DIST_MED_V01"));
				__LIB_1__::func_148(&(Local_1155.f_13));
			}
			PED::SET_PED_RESET_FLAG(Global_35, 150, true);
			if (PED::IS_PED_RUNNING_RAGDOLL_TASK(Global_35))
			{
				PED::RESET_PED_RAGDOLL_TIMER(Global_35);
				if (__LIB_0__::func_27(Local_1155.f_32, 128))
				{
					if (AUDIO::_0x4AD019591E94C064("Knockout_Scream", iParam0->f_81[0], "Flex_Fight_Sounds", -2))
					{
						AUDIO::_PLAY_SOUND_FROM_ENTITY("Knockout_Scream", iParam0->f_81[0], "Flex_Fight_Sounds", false, 0, 0);
						__LIB_1__::func_993(&(Local_1155.f_32), 128);
					}
				}
				if (!__LIB_0__::func_27(Local_1155.f_32, 64))
				{
					__LIB_1__::func_148(&(Local_1155.f_10));
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0->f_81[0], Global_35, -1, -1f, -1f, -1f);
					__LIB_1__::func_581(&(Local_1155.f_32), 64);
				}
			}
			if (__LIB_0__::func_265(&(Local_1155.f_13)) > 5f && !__LIB_0__::func_27(Local_1155.f_32, 64))
			{
				__LIB_1__::func_148(&(Local_1155.f_10));
				__LIB_1__::func_649(&Local_1155, 11);
				return;
			}
			if (__LIB_0__::func_75(&(Local_1155.f_10)) && __LIB_0__::func_265(&(Local_1155.f_10)) > 2.5f)
			{
				CAM::DO_SCREEN_FADE_OUT(1000);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
				__LIB_0__::func_37(&(Local_1155.f_10));
				PED::REMOVE_PED_DEFENSIVE_AREA(Global_35, false);
				PED::REMOVE_PED_DEFENSIVE_AREA(iParam0->f_81[0], false);
				__LIB_1__::func_649(&Local_1155, 13);
			}
			break;
		case 13:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (__LIB_0__::func_27(Local_1155.f_32, 32) && AUDIO::IS_STREAM_PLAYING(AUDIO::_0x0556C784FA056628(func_252(), func_253())))
				{
					AUDIO::STOP_STREAM(AUDIO::_0x0556C784FA056628(func_252(), func_253()));
					__LIB_1__::func_993(&(Local_1155.f_32), 32);
				}
				if (__LIB_0__::func_27(Local_1155.f_32, 512))
				{
					PED::_0x949B2F9ED2917F5D(Global_35, 8);
					__LIB_1__::func_993(&(Local_1155.f_32), 512);
				}
				if (!__LIB_0__::func_75(&(Local_1155.f_10)))
				{
					Global_1394141.f_1323 = 1;
					Global_1394141.f_1321 = 1;
					__LIB_1__::func_148(&(Local_1155.f_10));
				}
				else
				{
					if (func_258(&(Local_1155.f_29[1]), func_256(1), func_257()))
					{
						PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
						if (Local_1155.f_20)
						{
							iVar31 = PED::_0x1F714E7A9DADFC42(Global_35);
							if (ENTITY::DOES_ENTITY_EXIST(iVar31))
							{
								ENTITY::SET_ENTITY_COORDS(iVar31, func_259(2), true, false, true, true);
							}
						}
					}
					if (__LIB_0__::func_265(&(Local_1155.f_10)) > 3f)
					{
						iVar32 = __LIB_0__::func_23();
						iVar33 = __LIB_0__::func_41(iVar32);
						if (iVar33 < 20)
						{
							iVar34 = (20 - iVar33);
							CLOCK::ADD_TO_CLOCK_TIME(iVar34, 0, 0);
						}
						func_262();
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1155.f_29[1], "player_zero", Global_35, 0);
						PED::SET_PED_CONFIG_FLAG(Global_35, 249, false);
						ANIMSCENE::START_ANIM_SCENE(Local_1155.f_29[1]);
						AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT/SND_Show_Flex_Fight");
						Global_1394141.f_1324 = 1;
						__LIB_0__::func_37(&(Local_1155.f_10));
						CAM::DO_SCREEN_FADE_IN(2000);
						__LIB_1__::func_649(&Local_1155, 14);
					}
				}
			}
			break;
		case 14:
			if (__LIB_0__::func_27(Global_1394141.f_1326, 1024))
			{
				__LIB_1__::func_993(&(Global_1394141.f_1326), 1024);
			}
			if (CAM::IS_SCREEN_FADED_IN())
			{
				__LIB_1__::func_649(&Local_1155, 15);
			}
			break;
		case 15:
			if (__LIB_0__::func_181())
			{
				StringCopy(&cVar35, "SHFF_KNOCKOUT_J", 24);
			}
			else
			{
				StringCopy(&cVar35, "SHFF_KNOCKOUT_A", 24);
			}
			__LIB_1__::func_104(&(Local_22.f_954), cVar35, 0, -1, 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			__LIB_1__::func_581(&(Global_1394141.f_1325), 32);
			__LIB_1__::func_993(&(Global_1394141.f_1326), 4);
			__LIB_1__::func_581(&(Local_22.f_16), 8388608);
			__LIB_1__::func_649(&Local_1155, 16);
			break;
		case 16:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1155.f_29[1]))
			{
				if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_1155.f_29[1], "player_zero") || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_1155.f_29[1], false))
				{
					if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					}
					PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
					__LIB_1__::func_649(&Local_1155, 21);
				}
			}
			break;
		case 20:
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, func_147(7)))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_81[1]))
				{
					PED::SET_PED_RESET_FLAG(iParam0->f_81[1], 261, true);
				}
				if (fVar0 > 0.87f)
				{
					Global_1394141.f_1321 = 1;
					if (!iParam0->f_14)
					{
						__LIB_1__::func_581(&(Global_1394141.f_1325), 4);
						__LIB_1__::func_581(&(Global_1394141.f_1325), 8192);
					}
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iParam0->f_81[1], -1f);
					__LIB_1__::func_581(&(Local_22.f_16), 8388608);
					__LIB_1__::func_649(&Local_1155, 21);
				}
			}
			break;
		case 21:
			break;
	}
}

int func_65(int iParam0)
{
	if (!__LIB_0__::func_27(iParam0->f_16, 2097152))
	{
		if (GRAPHICS::GET_TV_CHANNEL() == 0)
		{
			if (!__LIB_0__::func_75(&(iParam0->f_29)))
			{
				__LIB_1__::func_148(&(iParam0->f_29));
			}
			else if (__LIB_0__::func_265(&(iParam0->f_29)) > 5f)
			{
				__LIB_0__::func_37(&(iParam0->f_29));
				__LIB_1__::func_581(&(iParam0->f_16), 2097152);
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_74(int iParam0)
{
	switch (Local_22.f_1)
	{
		case 0:
			if (!__LIB_0__::func_75(&(iParam0->f_941)))
			{
				__LIB_1__::func_148(&(iParam0->f_941));
			}
			if (__LIB_0__::func_27(iParam0->f_16, 33554432))
			{
				__LIB_16__::func_443(&(iParam0->f_349), Global_1394141.f_7[*iParam0 /*31*/].f_4);
				return;
			}
			if (__LIB_0__::func_27(iParam0->f_16, 65536))
			{
				__LIB_16__::func_568(&(iParam0->f_349));
				__LIB_1__::func_993(&(iParam0->f_16), 65536);
				__LIB_1__::func_581(&(iParam0->f_16), 8192);
				__LIB_1__::func_581(&(iParam0->f_16), 16384);
				__LIB_1__::func_581(&(iParam0->f_16), 32768);
			}
			else if (!__LIB_0__::func_27(iParam0->f_16, 8192))
			{
				__LIB_16__::func_546(&(iParam0->f_349), 54, 64);
				__LIB_1__::func_581(&(iParam0->f_16), 8192);
			}
			else if (!__LIB_0__::func_27(iParam0->f_16, 16384))
			{
				if (__LIB_0__::func_265(&(iParam0->f_941)) > 12f)
				{
					__LIB_16__::func_546(&(iParam0->f_349), 15, 26);
					__LIB_16__::func_546(&(iParam0->f_349), 40, 52);
					__LIB_1__::func_148(&(iParam0->f_941));
					__LIB_1__::func_581(&(iParam0->f_16), 16384);
				}
			}
			else if (!__LIB_0__::func_27(iParam0->f_16, 32768))
			{
				if (__LIB_0__::func_265(&(iParam0->f_941)) > 12f)
				{
					__LIB_16__::func_546(&(iParam0->f_349), 0, 13);
					__LIB_16__::func_546(&(iParam0->f_349), 27, 39);
					__LIB_1__::func_148(&(iParam0->f_941));
					__LIB_1__::func_581(&(iParam0->f_16), 32768);
				}
			}
			break;
	}
}

void func_86(int iParam0)
{
	int iVar0;
	__LIB_9__::func_889();
	PED::SET_PED_CONFIG_FLAG(Global_35, 21, false);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	PED::REMOVE_PED_DEFENSIVE_AREA(Global_35, false);
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT/SND_Show_Flex_Fight");
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Local_1155.f_2[iVar0]))
		{
			VOLUME::_DELETE_VOLUME(Local_1155.f_2[iVar0]);
		}
		iVar0++;
	}
	if (PED::_0xB346C85D49CC998E(Global_35, 8))
	{
		PED::_0x949B2F9ED2917F5D(Global_35, 8);
	}
	__LIB_1__::func_993(&(iParam0->f_16), 1024);
	func_262();
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 258, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 249, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 170, false);
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
	__LIB_1__::func_993(&(Global_1394141.f_1326), 1024);
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1155.f_29[0]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_1155.f_29[0]);
	}
	Global_1394141.f_1331 = 0;
	PED::_0x7D4E70A67A651C71(1);
}

char* func_147(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pbl_FightIntro";
		case 1:
			return "pbl_Idle01";
		case 2:
			return "pbl_Idle02";
		case 3:
			return "pbl_Idle03";
		case 4:
			return "pbl_IdleBase";
		case 5:
			return "pbl_PlayerChallenge";
		case 6:
			return "pbl_CrowdChallenge_P1";
		case 7:
			return "pbl_CrowdChallenge_P2";
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
			return "CROWD_STRONGWOMANFLEX_01";
		case 1:
			return "CROWD_STRONGWOMANFLEX_02";
		case 2:
			return "CROWD_STRONGWOMANFLEX_03";
		case 3:
			return "CROWD_STRONGWOMANFLEX_04";
		case 4:
			return "CROWD_STRONGWOMANFLEX_05";
		case 5:
			return "CROWD_STRONGWOMANFLEX_06";
		case 6:
			return "CROWD_STRONGWOMANFLEX_01";
		case 7:
			return "CROWD_STRONGWOMANFLEX_02";
		case 8:
			return "CROWD_STRONGWOMANFLEX_01";
		case 9:
			return "CROWD_STRONGWOMANFLEX_02";
		case 10:
			return "CROWD_STRONGWOMANFLEX_03";
		case 11:
			return "CROWD_STRONGWOMANFLEX_04";
		case 12:
			return "CROWD_STRONGWOMANFLEX_05";
		case 13:
			return "CROWD_STRONGWOMANFLEX_06";
		case 14:
			return "CROWD_STRONGWOMANFLEX_07";
		case 15:
			return "CROWD_STRONGWOMANFLEX_08";
		case 16:
			return "CROWD_STRONGWOMANFLEX_01";
		default:
			break;
	}
	return "";
}

bool func_161(int iParam0)
{
	bool bVar0;
	char* sVar1;
	char* sVar2;
	bVar0 = false;
	if (!__LIB_0__::func_75(&(iParam0->f_23)))
	{
		__LIB_1__::func_148(&(iParam0->f_23));
	}
	else if (__LIB_0__::func_265(&(iParam0->f_23)) > 10f)
	{
		bVar0 = true;
	}
	if (__LIB_0__::func_27(iParam0->f_17, 1))
	{
		sVar1 = __LIB_16__::func_512(*iParam0);
		sVar2 = __LIB_16__::func_513(*iParam0);
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1) || MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			bVar0 = true;
		}
		else if (AUDIO::LOAD_STREAM(sVar1, sVar2))
		{
			bVar0 = true;
			AUDIO::_0x839C9F124BE74D94(AUDIO::_0x0556C784FA056628(sVar1, sVar2), 0, 2548.749f, -1305.267f, 50.01453f);
			AUDIO::_0x839C9F124BE74D94(AUDIO::_0x0556C784FA056628(sVar1, sVar2), 1, 2543.801f, -1305.251f, 50.01453f);
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		__LIB_0__::func_37(&(iParam0->f_23));
		return true;
	}
	return false;
}

bool func_165(var uParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		__LIB_1__::func_993(uParam1, 1);
		return true;
	}
	if (!__LIB_0__::func_27(*uParam1, 1) && !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		if (bParam4)
		{
			*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam2, 0, sParam3, false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
		__LIB_1__::func_581(uParam1, 1);
	}
	return false;
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
	iVar2 = func_291(iParam1);
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
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_81[0], true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_66[0]))
	{
		iParam0->f_66[0] = OBJECT::CREATE_OBJECT(iParam0->f_58[0], 2546.098f, -1310.338f, 48.2087f, true, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_66[1]))
	{
		iParam0->f_66[1] = OBJECT::CREATE_OBJECT(iParam0->f_58[1], 2541.685f, -1311.861f, 49.21665f, true, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_66[2]))
	{
		iParam0->f_66[2] = OBJECT::CREATE_OBJECT(iParam0->f_58[2], 2541.685f, -1311.961f, 49.21665f, true, true, false, false, true);
	}
	iParam0->f_12 = iParam0->f_81[0];
}

void func_169(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_66[0]))
	{
		ENTITY::SET_ENTITY_HEADING(iParam0->f_66[0], 3.76f);
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "PERFORMER", iParam0->f_81[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "Stool", iParam0->f_66[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "Chair", iParam0->f_66[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "Chair^1", iParam0->f_66[2], 0);
}

int func_177(int iParam0, int iParam1)
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
					return 2;
				case 8:
				case 9:
				case 10:
				case 11:
				case 12:
					return 2;
				case 17:
					return 1;
				case 18:
					return 1;
				case 20:
					return 2;
				case 31:
					return 2;
				case 32:
					return 2;
				case 39:
					return 2;
				case 53:
				case 54:
				case 55:
					return 2;
				default:
					break;
			}
			return 0;
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
			break;
	}
	return 0f, 0f, 0f;
}

void func_186(var uParam0, int iParam1)
{
	if (!PED::IS_PED_USING_ANY_SCENARIO(*uParam0))
	{
		TASK::TASK_START_SCENARIO_AT_POSITION(*uParam0, joaat("PROP_HUMAN_SEAT_CHAIR"), func_178(iParam1, uParam0->f_2), __LIB_16__::func_528(iParam1, uParam0->f_2), -1, false, true, 0, 0.25f, false);
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
		fVar4 = __LIB_16__::func_528(iParam1, uParam0->f_2);
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

void func_215(var uParam0, var uParam1, int iParam2)
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
						func_315(uParam1[iVar5 /*10*/], iParam2);
					}
				}
				else if (!uParam0->f_21 && (uParam1[iVar5 /*10*/])->f_1 != 6)
				{
					fVar6 = __LIB_0__::func_665(Global_35, (*uParam1)[iVar5 /*10*/], 1, 1);
					if (fVar6 < 1.5f && __LIB_16__::func_474(uParam1[iVar5 /*10*/]))
					{
						(uParam1[iVar5 /*10*/])->f_5 = __LIB_16__::func_475(iVar5);
						func_315(uParam1[iVar5 /*10*/], iParam2);
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
					if (func_317(iParam2, iVar5))
					{
						__LIB_9__::func_314(uParam1[iVar5 /*10*/], func_318(iParam2), 500);
					}
					break;
				case 3:
					func_320(uParam1[iVar5 /*10*/], iParam2);
					(uParam1[iVar5 /*10*/])->f_1 = 4;
					break;
				case 4:
					bVar7 = false;
					if ((uParam1[iVar5 /*10*/])->f_6 == -1)
					{
						func_315(uParam1[iVar5 /*10*/], iParam2);
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
						func_315(uParam1[iVar5 /*10*/], iParam2);
						(uParam1[iVar5 /*10*/])->f_1 = 1;
					}
					break;
				case 5:
					if (!uParam0->f_19)
					{
						func_321(uParam0, uParam1[iVar5 /*10*/]);
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
					TASK::TASK_START_SCENARIO_AT_POSITION((*uParam1)[iVar5 /*10*/], joaat("PROP_HUMAN_SEAT_CHAIR"), func_178(iParam2, iVar5), __LIB_16__::func_528(iParam2, iVar5), -1, false, true, 0, 0.25f, false);
					(uParam1[iVar5 /*10*/])->f_1 = 1;
					break;
				case 7:
					if (!__LIB_0__::func_27(uParam0->f_18, 4))
					{
						return;
					}
					if (__LIB_16__::func_550(iParam2, iVar5) == 0 && !__LIB_16__::func_460(iParam2))
					{
						TASK::TASK_START_SCENARIO_AT_POSITION((*uParam1)[iVar5 /*10*/], joaat("PROP_HUMAN_SEAT_CHAIR"), func_178(iParam2, iVar5), __LIB_16__::func_528(iParam2, iVar5), -1, false, true, 0, 0.25f, false);
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
						if (__LIB_0__::func_27(uParam0->f_18, 16))
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
					if ((bVar0 || PED::IS_PED_SHOOTING(Global_35)) || __LIB_0__::func_27(uParam0->f_18, 32))
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
					if ((bVar0 || PED::IS_PED_SHOOTING(Global_35)) || __LIB_0__::func_27(uParam0->f_18, 32))
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

bool func_229(int iParam0)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;
	bVar0 = false;
	if ((__LIB_0__::func_75(&(iParam0->f_950)) && iParam0->f_18 < __LIB_16__::func_552(*iParam0)) && __LIB_1__::func_871(&(iParam0->f_950)) > 35000)
	{
		iParam0->f_18++;
		vVar1 = { __LIB_16__::func_707(*iParam0, 0, 1) };
		bVar0 = true;
	}
	else if (__LIB_16__::func_553(*iParam0) && !__LIB_2__::func_774(36))
	{
		iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
		if (iVar4 < 5)
		{
			vVar1 = { __LIB_16__::func_707(*iParam0, 2, 1) };
		}
		else
		{
			vVar1 = { __LIB_16__::func_707(*iParam0, 1, 1) };
		}
	}
	else
	{
		vVar1 = { __LIB_16__::func_707(*iParam0, 1, 1) };
	}
	if (__LIB_16__::func_554(iParam0))
	{
		vVar1 = { __LIB_16__::func_707(*iParam0, 3, 1) };
	}
	if (__LIB_1__::func_104(&(iParam0->f_954), vVar1, 1, -1, 0, 0))
	{
		iParam0->f_1052++;
		__LIB_16__::func_699(iParam0);
		if (bVar0)
		{
			__LIB_1__::func_148(&(iParam0->f_950));
		}
		__LIB_1__::func_581(&(iParam0->f_16), 16);
		return true;
	}
	return false;
}

bool func_231(int iParam0)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;
	bVar0 = false;
	if ((__LIB_0__::func_75(&(iParam0->f_950)) && iParam0->f_19 < __LIB_16__::func_552(*iParam0)) && __LIB_1__::func_871(&(iParam0->f_950)) > 35000)
	{
		iParam0->f_19++;
		vVar1 = { __LIB_16__::func_707(*iParam0, 0, 0) };
		bVar0 = true;
	}
	else if (__LIB_16__::func_553(*iParam0) && !__LIB_2__::func_774(36))
	{
		iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
		if (iVar4 < 5)
		{
			vVar1 = { __LIB_16__::func_707(*iParam0, 2, 0) };
		}
		else
		{
			vVar1 = { __LIB_16__::func_707(*iParam0, 1, 0) };
		}
	}
	else
	{
		vVar1 = { __LIB_16__::func_707(*iParam0, 1, 0) };
	}
	if (__LIB_16__::func_554(iParam0))
	{
		vVar1 = { __LIB_16__::func_707(*iParam0, 3, 0) };
	}
	if (__LIB_1__::func_104(&(iParam0->f_954), vVar1, 1, -1, 0, 0))
	{
		iParam0->f_1052 = (iParam0->f_1052 - 1);
		__LIB_16__::func_700(iParam0);
		if (bVar0)
		{
			__LIB_1__::func_148(&(iParam0->f_950));
		}
		__LIB_1__::func_581(&(iParam0->f_16), 32);
		return true;
	}
	return false;
}

void func_237(int iParam0, int iParam1)
{
	struct<14> Var0;
	if (__LIB_0__::func_27(iParam0->f_16, 8388608) && iParam1->f_27 != 5)
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam1->f_29[0], "CS_GENSTORYMALE", iParam1->f_28);
		__LIB_0__::func_19(&(iParam1->f_27), 5);
		return;
	}
	switch (iParam1->f_27)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_28))
			{
				iParam1->f_28 = func_340(joaat("CS_CABARETMC"), 2541.191f, -1313.071f, 48.21665f, 5f);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_28))
			{
				return;
			}
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam1->f_28, func_259(3), -82.53f, true, false, true);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam1->f_28, iParam0->f_81[0], -1, -1f, -1f, -1f);
			__LIB_0__::func_19(&(iParam1->f_27), 1);
			break;
		case 1:
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam1->f_28, -875674219, true) != 1)
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam1->f_28, iParam0->f_81[0], -1, -1f, -1f, -1f);
			}
			if (__LIB_0__::func_27(iParam1->f_32, 2) && func_258(&(iParam1->f_29[0]), func_256(0), func_341(1)))
			{
				__LIB_0__::func_19(&(iParam1->f_27), 2);
			}
			break;
		case 2:
			__LIB_0__::func_19(&(iParam1->f_27), 3);
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_28) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_29[0]))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1->f_29[0], "CS_GENSTORYMALE", iParam1->f_28, 0);
				ANIMSCENE::START_ANIM_SCENE(iParam1->f_29[0]);
				__LIB_0__::func_19(&(iParam1->f_27), 4);
			}
			break;
		case 4:
			PED::SET_PED_RESET_FLAG(iParam1->f_28, 261, true);
			if (!ENTITY::IS_ENTITY_DEAD(iParam1->f_28) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_81[0]))
			{
				Var0.f_4 = -1;
				Var0.f_8 = 2;
				Var0.f_9 = 1;
				Var0.f_10 = 1;
				Var0.f_11 = 1;
				Var0.f_13 = 1;
				Var0.f_14 = 2;
				Var0.f_15 = 2;
				Var0.f_16 = 3;
				Var0.f_19 = 3;
				Var0.f_20 = 1;
				Var0.f_21 = 3;
				Var0.f_22 = 3;
				Var0 = { 0f, 0f, 0f };
				Var0.f_3 = iParam0->f_81[0];
				Var0.f_8 = 4;
				Var0.f_13 = 3;
				Var0.f_7 = 500;
				_NAMESPACE29::_0x66F9EB44342BB4C5(iParam1->f_28, &Var0);
			}
			break;
		case 5:
			break;
	}
}

void func_238(int iParam0)
{
	if (!func_242(iParam0))
	{
		if (__LIB_1__::func_205(Global_35, iParam0->f_2[1], 1, 0) || __LIB_1__::func_205(Global_35, iParam0->f_2[2], 1, 0))
		{
			if (!__LIB_0__::func_139(iParam0->f_23))
			{
				iParam0->f_23 = __LIB_2__::func_403("SHOW_CLIMB_STAGE", joaat("INPUT_JUMP"), Global_35, 3, 1, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
			}
			else if (__LIB_0__::func_572(iParam0->f_23, 0))
			{
				if (__LIB_1__::func_732(iParam0->f_23, 1))
				{
					__LIB_1__::func_221(iParam0->f_23, 0, 1);
				}
			}
			else if (!__LIB_0__::func_75(&(iParam0->f_24)))
			{
				__LIB_1__::func_148(&(iParam0->f_24));
			}
			else if (__LIB_1__::func_871(&(iParam0->f_24)) > 1000)
			{
				__LIB_0__::func_37(&(iParam0->f_24));
				__LIB_1__::func_221(iParam0->f_23, 1, 1);
			}
		}
		else if (__LIB_0__::func_139(iParam0->f_23))
		{
			__LIB_1__::func_748(&(iParam0->f_23), 1, 1);
		}
	}
	else if (__LIB_0__::func_139(iParam0->f_23))
	{
		__LIB_1__::func_748(&(iParam0->f_23), 1, 1);
	}
}

void func_239(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	switch (Local_1155.f_51)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				iVar1 = iVar0;
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], Local_1155.f_33[iVar1]))
				{
					if (iVar1 == 1)
					{
						__LIB_1__::func_581(&(Global_1394141.f_1326), 32768);
					}
					Global_1394141.f_1332 = __LIB_16__::func_744(iVar1);
				}
				iVar0++;
			}
			break;
		case 1:
		case 2:
		case 3:
		case 4:
			break;
		case 5:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], Local_1155.f_33[16]))
			{
				Global_1394141.f_1332 = __LIB_16__::func_744(16);
			}
			break;
		case 6:
			iVar0 = 6;
			while (iVar0 <= 7)
			{
				iVar2 = iVar0;
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], Local_1155.f_33[iVar2]))
				{
					Global_1394141.f_1332 = __LIB_16__::func_744(iVar2);
				}
				iVar0++;
			}
			break;
		case 7:
			iVar0 = 8;
			while (iVar0 <= 15)
			{
				iVar3 = iVar0;
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_81[0], Local_1155.f_33[iVar3]))
				{
					Global_1394141.f_1332 = __LIB_16__::func_744(iVar3);
				}
				iVar0++;
			}
			break;
	}
}

struct<11> func_240(int iParam0)
{
	struct<11> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { 2546.475f, -1309.831f, 49.32918f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 8.864185f, 8.153332f, 2.759625f };
			Var0.f_9 = joaat("VOLBOX");
			Var0.f_10 = "FLEX_FIGHT_SPOT_LIGHT";
			break;
		case 3:
			Var0 = { 2546.475f, -1310.829f, 49.40116f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 8.162113f, 6.099765f, 2.759625f };
			Var0.f_9 = joaat("VOLBOX");
			Var0.f_10 = "FLEX_FIGHT_STAGE_DEF";
			break;
		case 4:
			Var0 = { 2546.431f, -1306.998f, 49.32918f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 8.692767f, 1.928913f, 2.759625f };
			Var0.f_9 = joaat("VOLBOX");
			Var0.f_10 = "FLEX_FIGHT_GRIEF_FALLOFF";
			break;
		case 5:
			Var0 = { 2551.059f, -1310.48f, 49.32918f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 1.933598f, 7.487292f, 2.759625f };
			Var0.f_9 = joaat("VOLBOX");
			Var0.f_10 = "FLEX_FIGHT_GRIEF_LEFT";
			break;
		case 6:
			Var0 = { 2541.771f, -1310.48f, 49.32918f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 1.933598f, 7.487292f, 2.759625f };
			Var0.f_9 = joaat("VOLBOX");
			Var0.f_10 = "FLEX_FIGHT_GRIEF_RIGHT";
			break;
		case 1:
			Var0 = { 2548.703f, -1306.556f, 47.42129f };
			Var0.f_3 = { 0f, 0f, -7.459703f };
			Var0.f_6 = { 5.03515f, 2.04412f, 3.505667f };
			Var0.f_9 = joaat("VOLBOX");
			Var0.f_10 = "FLEX_FIGHT_JUMP_01";
			break;
		case 2:
			Var0 = { 2543.718f, -1306.499f, 47.95617f };
			Var0.f_3 = { 0f, 0f, 6.406912f };
			Var0.f_6 = { 5.50202f, 1.979048f, 2.432055f };
			Var0.f_9 = joaat("VOLBOX");
			Var0.f_10 = "FLEX_FIGHT_JUMP_02";
			break;
	}
	return Var0;
}

bool func_242(int iParam0)
{
	float fVar0;
	fVar0 = Global_36.f_2;
	if (__LIB_1__::func_205(Global_35, iParam0->f_2[0], 1, 0) && fVar0 > 48.5f)
	{
		return true;
	}
	return false;
}

char* func_245()
{
	return "script_shows@flexfight@act2";
}

char* func_247()
{
	return "action_01_player_zero";
}

char* func_252()
{
	return "PlayerChallenge_Loop_Music";
}

char* func_253()
{
	return "FlexFight_Player_Challenge_Sounds";
}

bool func_255()
{
	int iVar0;
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(2546.453f, -1303.998f, 46.793f);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		if (INTERIOR::IS_INTERIOR_READY(iVar0))
		{
			if (INTERIOR::_IS_INTERIOR_ENTITY_SET_VALID(iVar0, "new_theater_stage_blocker"))
			{
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, "new_theater_stage_blocker", 0);
				return true;
			}
		}
	}
	return false;
}

char* func_256(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@shows@mc_showreacts@mc_showreacts";
		case 1:
			return "script@shows@flex_fight@shw_ff_arthur_wake_up";
		default:
			break;
	}
	return "FAIL -- ANIM SCENE NAME WAS NOT ADDED";
}

char* func_257()
{
	return "PL_WAKE_UP";
}

bool func_258(var uParam0, char* sParam1, char* sParam2)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		return true;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, 0, sParam2, false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
	}
	return false;
}

Vector3 func_259(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2547.473f, -1306.657f, 49.21665f;
		case 1:
			return 2567.306f, -1313.315f, 48.06502f;
		case 2:
			return 2568.476f, -1314.961f, 48.13437f;
		case 3:
			return 2539.351f, -1310.783f, 48.21665f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_262()
{
	int iVar0;
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(2546.453f, -1303.998f, 46.793f);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		if (INTERIOR::IS_INTERIOR_READY(iVar0))
		{
			if (INTERIOR::_IS_INTERIOR_ENTITY_SET_VALID(iVar0, "new_theater_stage_blocker"))
			{
				INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "new_theater_stage_blocker", true);
			}
		}
	}
}

int func_291(int iParam0)
{
	if (iParam0 == joaat("CS_FEATSOFSTRENGTH"))
	{
		return -207060528;
	}
	return -207060528;
}

void func_315(int* iParam0, int iParam1)
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
		fVar4 = __LIB_16__::func_528(iParam1, iParam0->f_2);
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

bool func_317(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return false;
				case 1:
					return false;
				case 2:
					return false;
				case 3:
					return false;
				case 4:
					return false;
				case 5:
					return false;
				case 6:
					return false;
				case 7:
					return false;
				case 8:
					return false;
				case 9:
					return false;
				case 10:
					return false;
				case 11:
					return false;
				case 12:
					return false;
				case 13:
					return false;
				case 14:
					return false;
				case 15:
					return false;
				case 16:
					return false;
				case 17:
					return false;
				case 18:
					return false;
				case 19:
					return false;
				case 20:
					return false;
				case 21:
					return false;
				case 22:
					return false;
				case 23:
					return false;
				case 24:
					return false;
				case 25:
					return false;
				case 26:
					return false;
				case 27:
					return false;
				case 28:
					return false;
				case 29:
					return false;
				case 30:
					return false;
				case 31:
					return false;
				case 32:
					return false;
				case 33:
					return false;
				case 34:
					return false;
				case 35:
					return false;
				case 36:
					return false;
				case 37:
					return false;
				case 38:
					return false;
				case 39:
					return false;
				case 40:
					return false;
				case 41:
					return false;
				case 42:
					return false;
				case 43:
					return false;
				case 44:
					return false;
				case 45:
					return false;
				case 46:
					return false;
				case 47:
					return false;
				case 48:
					return false;
				case 49:
					return false;
				case 50:
					return false;
				case 51:
					return false;
				case 52:
					return false;
				case 53:
					return false;
				case 54:
					return false;
				case 55:
					return false;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
					return true;
				default:
					break;
			}
			Jump @1041; //curOff = 722
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
					return true;
				case 9:
					return false;
				case 10:
				case 11:
					return true;
				case 12:
				case 13:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
					return false;
				default:
					break;
			}
			Jump @1041; //curOff = 881
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 10:
					return true;
				case 11:
				case 12:
				case 13:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return false;
				default:
					break;
			}
			return false;
		}
Vector3 func_318(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 0f;
		case 3:
			return -346.8185f, 692.4758f, 118.2631f;
		case 1:
		case 2:
			return 2700.367f, -1349.699f, 49.78757f;
		case 4:
			return -772.6649f, -1362.613f, 45.39102f;
	}
	return 0f, 0f, 0f;
}

void func_320(var uParam0, int iParam1)
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
		fVar4 = __LIB_16__::func_528(iParam1, uParam0->f_2);
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

void func_321(var uParam0, int* iParam1)
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
							func_315(iParam1, 0);
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
						if (__LIB_0__::func_27(Global_1394141.f_1326, 2048) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Global_1394141.f_1335) > 0.96f)
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
				func_315(iParam1, 0);
				Global_1394141.f_1334 = 0;
			}
			break;
	}
}

int func_340(int iParam0, vector3 vParam1, float fParam4)
{
	var uVar0[3];
	var uVar4;
	int iVar8;
	int iVar9;
	uVar4 = 3;
	iVar8 = __LIB_4__::func_206(&uVar0, &uVar4, 1, vParam1, fParam4, 0, 1, 1, -1, 1, 1, -1082130432 /* Float: -1f */, 0, 0);
	if (iVar8 > 0)
	{
		iVar9 = 0;
		while (iVar9 <= 2)
		{
			if (PED::IS_PED_MODEL(uVar0[iVar9], iParam0))
			{
				return uVar0[iVar9];
			}
			iVar9++;
		}
	}
	return 0;
}

char* func_341(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PL_IDLE";
		case 1:
			return "PL_REACTS";
		default:
			break;
	}
	return "FAIL -- MC REACT PLAYLIST WAS NOT ADDED";
}

