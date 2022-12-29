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
	var uLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	bool bLocal_26 = false;
	int iLocal_27 = 0;
	bool bLocal_28 = false;
	int iLocal_29 = 0;
	bool bLocal_30 = false;
	bool bLocal_31 = false;
	bool bLocal_32 = false;
	bool bLocal_33 = false;
	var uLocal_34 = 0;
	bool bLocal_35 = false;
	bool bLocal_36 = false;
	bool bLocal_37 = false;
	bool bLocal_38 = false;
	bool bLocal_39 = false;
	vector3 vLocal_40 = { 0f, 0f, 0f };
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	struct<1008> Local_45 = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 1;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 24;
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
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	int iLocal_1188 = 0;
	int iLocal_1189 = 0;
	int iLocal_1190 = 0;
	int iLocal_1191 = 0;
	int iLocal_1192 = 0;
	int iLocal_1193 = 0;
	struct<11> Local_1194 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7 } ;
	int iLocal_1205 = 0;
	struct<11> Local_1206 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7 } ;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
	var uScriptParam_23 = 0;
	var uScriptParam_24 = 0;
	var uScriptParam_25 = 0;
	var uScriptParam_26 = 0;
	var uScriptParam_27 = 0;
	var uScriptParam_28 = 0;
	var uScriptParam_29 = 0;
	var uScriptParam_30 = 0;
	var uScriptParam_31 = 0;
	var uScriptParam_32 = 0;
	var uScriptParam_33 = 0;
	var uScriptParam_34 = 0;
	var uScriptParam_35 = 0;
	var uScriptParam_36 = 0;
	var uScriptParam_37 = 0;
	var uScriptParam_38 = 0;
	var uScriptParam_39 = 0;
	var uScriptParam_40 = 10000;
	var uScriptParam_41 = 0;
	var uScriptParam_42 = 0;
	var uScriptParam_43 = 0;
	var uScriptParam_44 = 0;
	var uScriptParam_45 = 0;
	var uScriptParam_46 = 0;
	var uScriptParam_47 = 0;
	var uScriptParam_48 = 0;
	var uScriptParam_49 = 0;
	var uScriptParam_50 = 0;
	var uScriptParam_51 = 0;
	var uScriptParam_52 = 0;
	var uScriptParam_53 = 0;
	var uScriptParam_54 = 0;
	var uScriptParam_55 = 0;
	var uScriptParam_56 = 0;
	var uScriptParam_57 = 0;
	var uScriptParam_58 = 1;
	var uScriptParam_59 = 34;
	var uScriptParam_60 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_20 = 15;
	iLocal_21 = 20;
	iLocal_22 = 6;
	iLocal_23 = 5000;
	iLocal_24 = -1;
	iLocal_25 = -1;
	bLocal_32 = true;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1(&uScriptParam_0, 1);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!func_2(&uScriptParam_0))
	{
		BUILTIN::WAIT(0);
	}
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::CLEAR_FOCUS();
		STREAMING::_0x5A8B01199C3E79C3();
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_3(uParam0, bParam1);
	}
	func_4(&Local_45);
	__LIB_0__::func_267(1);
	__LIB_9__::func_433();
	if (__LIB_3__::func_751(7))
	{
		__LIB_5__::func_450(&(Global_1835011[7 /*74*/]), 8192);
	}
	Global_1934266.f_60 = 0;
}

bool func_2(var uParam0)
{
	int iVar0;
	int iVar1;
	switch (iLocal_1189)
	{
		case 0:
			func_9();
			func_10();
			PED::_0x9851DE7AEC10B4E1(__LIB_1__::func_974(PLAYER::PLAYER_ID()), 500f, 1, 0);
			__LIB_0__::func_568(__LIB_1__::func_974(PLAYER::PLAYER_ID()), 500f, 0);
			__LIB_1__::func_572(__LIB_1__::func_974(PLAYER::PLAYER_ID()), 500f, 0, 0, 0, 0, 0);
			PED::_0x4759CC730F947C81();
			VEHICLE::_0x1FF00DB43026B12F();
			func_14(uParam0->f_60);
			__LIB_1__::func_142(1);
			Global_1934266.f_60 = 1;
			iLocal_24 = iLocal_24;
			iLocal_25 = iLocal_25;
			Global_1934266.f_61 = 1;
			__LIB_10__::func_27(0);
			__LIB_0__::func_105(1);
			__LIB_10__::func_736(0);
			__LIB_10__::func_737(0, 1);
			__LIB_10__::func_819(0);
			func_21();
			func_22();
			func_23();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
			PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
			iLocal_19 = func_24(uParam0->f_60);
			__LIB_1__::func_649(&iLocal_1189, 1);
			break;
		case 1:
			if (func_26(uParam0->f_60))
			{
				__LIB_1__::func_649(&iLocal_1189, 2);
			}
			break;
		case 2:
			if (func_27(uParam0) && func_28(uParam0->f_60, &Local_45))
			{
				bLocal_28 = true;
				func_29(Local_45.f_970);
			}
			LAW::_0xE0FA74AA3CCE650B(PLAYER::PLAYER_ID(), __LIB_5__::func_235(uParam0->f_60, 1, 1));
			iVar0 = 0;
			while (iVar0 < __LIB_5__::func_230(uParam0->f_60))
			{
				__LIB_4__::func_272(uParam0->f_60, iVar0);
				iVar0++;
			}
			func_33(uParam0);
			__LIB_4__::func_269(1);
			func_35(&Local_45);
			__LIB_9__::func_437();
			if (bLocal_28)
			{
				__LIB_1__::func_649(&iLocal_1189, 3);
			}
			else
			{
				func_37();
				__LIB_1__::func_649(&iLocal_1189, 8);
			}
			break;
		case 3:
			bLocal_32 = true;
			bLocal_38 = false;
			LAW::_0x55F37F5F3F2475E1();
			func_38(&Local_45);
			func_39(&Local_45);
			if (func_40(Local_45.f_970))
			{
				func_41(&Local_45);
			}
			if (func_42(Local_45.f_970))
			{
				func_37();
				func_43();
			}
			else
			{
				iLocal_29 = 1;
			}
			POPULATION::_0xC6DCC2A3A8825C85(1);
			func_44(uParam0);
			func_45();
			__LIB_1__::func_649(&iLocal_1189, 4);
			break;
		case 4:
			func_46(Local_45.f_970);
			if (bLocal_32)
			{
				func_47();
				PED::_0xAB0D553FE20A6E25(0f);
				PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				POPULATION::_0xF45E46DEECF7DF6E(10208, 0, 0, -1, -1);
				iVar1 = func_48(&Local_45);
				if ((iVar1 == 3 && !bLocal_38) && Global_1310720.f_5 < (MISC::GET_GAME_TIMER() - 2000))
				{
					__LIB_1__::func_952();
					__LIB_12__::func_588();
					__LIB_0__::func_267(0);
					AUDIO::_0xAC84686C06184B0D("Jail_Cell", "Arrest_Fail_Respawn_Scenes");
					bLocal_38 = true;
				}
				if (iVar1 == 5)
				{
					AUDIO::_0xAC84686C06184B0D("Fade_To_Gameplay", "Arrest_Fail_Respawn_Scenes");
					if (Local_45.f_970 == 5 || Local_45.f_970 == 4)
					{
						INTERIOR::CLEAR_ROOM_FOR_ENTITY(Global_35);
					}
					if (Local_45.f_970 == 4)
					{
						if (!__LIB_1__::func_185(11))
						{
							Local_45.f_1007 = 1;
						}
					}
					func_52(uParam0);
					bLocal_32 = false;
				}
			}
			else
			{
				func_53(&Local_45);
				if (func_40(Local_45.f_970))
				{
					func_54();
					__LIB_1__::func_649(&iLocal_1189, 5);
				}
				else
				{
					func_54();
					__LIB_1__::func_649(&iLocal_1189, 6);
				}
			}
			break;
		case 5:
			if (!bLocal_35)
			{
				if (!bLocal_37)
				{
					func_55(&Local_45);
					func_56(1, 1114636288 /* Float: 60f */, 1117847552 /* Float: 80.5f */, 1116602368 /* Float: 71f */);
					func_57(&Local_45, &uLocal_1090);
					func_58(&Local_45);
					__LIB_1__::func_600(0);
					if (Local_45.f_1007)
					{
						func_60(&Local_45, &uLocal_1090);
					}
					bLocal_37 = true;
				}
				func_61();
				bLocal_33 = true;
				vLocal_40 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
				iLocal_1188 = __LIB_0__::func_12();
				iLocal_25 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), Global_35, -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
				if (func_63(&Local_45))
				{
					iLocal_24 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_EXPLOSION"), vLocal_40, -1f, 50f, 50f, -1f, -1f, -1, -1);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				__LIB_0__::func_267(1);
				LAW::_0x07E8B8B20570271C(PLAYER::PLAYER_ID());
				LAW::_0x22741652985C84D0(PLAYER::PLAYER_ID(), __LIB_5__::func_235(__LIB_0__::func_12(), 1, 1));
				LAW::_0x9C4352134B2835FB(PLAYER::PLAYER_ID(), joaat("LAW_JAILBREAK_VALENTINE"));
				LAW::_0x8DE82BC774F3B862(0);
				LAW::_0xD6C0A8C7C0B2F82C(PLAYER::PLAYER_ID(), 0);
				__LIB_0__::func_395(1);
				if (!bLocal_31)
				{
					LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), joaat("CRIME_JAIL_BREAK"), 0, 0, true);
					LAW::_0x75CBF20BA47E4F89(vLocal_40, func_65(__LIB_5__::func_235(iLocal_1188, 1, 1)));
					bLocal_31 = true;
				}
				__LIB_0__::func_395(0);
				bLocal_35 = true;
			}
			if (bLocal_33)
			{
				func_66(&Local_45);
			}
			else
			{
				bLocal_35 = false;
				func_67(&Local_45, &uLocal_1090);
				__LIB_1__::func_649(&iLocal_1189, 10);
			}
			if (ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				func_68(&Local_45);
				__LIB_1__::func_649(&iLocal_1189, 10);
			}
			break;
		case 6:
			func_69(&Local_45, &uLocal_1090);
			POPULATION::_0xC6DCC2A3A8825C85(1);
			__LIB_1__::func_649(&iLocal_1189, 7);
			break;
		case 7:
			if (func_70(&Local_45))
			{
				__LIB_1__::func_649(&iLocal_1189, 10);
			}
			break;
		case 8:
			func_43();
			PED::_0xED9582B3DA8F02B4(1);
			while (PED::_0x5C16855277819BBF() < 1)
			{
				BUILTIN::WAIT(0);
			}
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
			__LIB_1__::func_952();
			__LIB_12__::func_588();
			AUDIO::_0xAC84686C06184B0D("Jail_Cell", "Arrest_Fail_Respawn_Scenes");
			func_44(uParam0);
			func_45();
			__LIB_0__::func_267(0);
			__LIB_1__::func_649(&iLocal_1189, 9);
			break;
		case 9:
			if (!func_71(&uLocal_1054, uParam0->f_60))
			{
				func_72();
				PED::SET_PED_RESET_FLAG(Global_35, 103, true);
			}
			else if (CLOCK::GET_CLOCK_HOURS() >= iLocal_21 || CLOCK::GET_CLOCK_HOURS() < iLocal_22)
			{
				func_72();
				CLOCK::ADD_TO_CLOCK_TIME(0, iLocal_20, 0);
				return false;
			}
			else
			{
				__LIB_1__::func_649(&iLocal_1189, 10);
			}
			break;
		case 10:
			if (func_3(uParam0, 0))
			{
				func_1(uParam0, 0);
				TELEMETRY::_TELEMETRY_PLAYER_SPAWNED(Global_35);
				if (iLocal_29 == 0)
				{
					if (!bLocal_28)
					{
						func_73(1);
					}
					else
					{
						func_74();
						func_73(0);
					}
					Global_40.f_11956 = 0;
					iLocal_29 = 1;
				}
				if (!Local_45.f_1005)
				{
					if (bLocal_36)
					{
						return true;
					}
				}
				else
				{
					__LIB_1__::func_649(&iLocal_1189, 11);
				}
			}
			break;
		case 11:
			if (Local_45.f_949 == __LIB_0__::func_12())
			{
			}
			else
			{
				func_68(&Local_45);
			}
			if (ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				func_68(&Local_45);
			}
			if (CAM::IS_SCREEN_FADING_OUT())
			{
				func_68(&Local_45);
			}
			if (!Local_45.f_1005)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_3(var uParam0, bool bParam1)
{
	switch (iLocal_1192)
	{
		case 0:
			func_52(uParam0);
			func_75();
			__LIB_10__::func_27(1);
			if (func_42(Local_45.f_970))
			{
				if (!__LIB_0__::func_474(275))
				{
					__LIB_1__::func_240(275, 0);
				}
			}
			__LIB_8__::func_981(6, 16384);
			__LIB_8__::func_981(7, 16384);
			if (bLocal_28)
			{
				PED::_0x4759CC730F947C81();
				__LIB_1__::func_649(&iLocal_1192, 1);
			}
			else
			{
				__LIB_1__::func_649(&iLocal_1192, 2);
			}
			if (bParam1)
			{
				func_3(uParam0, bParam1);
			}
			break;
		case 1:
			func_80(&Local_45);
			func_81(&(Local_45.f_950));
			func_82();
			func_56(0, 1114636288 /* Float: 60f */, 1117847552 /* Float: 80.5f */, 1116602368 /* Float: 71f */);
			func_83(iLocal_19);
			__LIB_1__::func_924();
			__LIB_0__::func_747(120, 0, 1);
			Global_1934266.f_63 = -1;
			LAW::_0xD6C0A8C7C0B2F82C(PLAYER::PLAYER_ID(), 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, false);
			POPULATION::_0xBC90BDF4E5228EA1();
			func_86(uParam0);
			func_82();
			func_56(0, 1114636288 /* Float: 60f */, 1117847552 /* Float: 80.5f */, 1116602368 /* Float: 71f */);
			func_87();
			func_88();
			__LIB_4__::func_269(0);
			__LIB_1__::func_600(1);
			__LIB_1__::func_142(0);
			func_89(&Local_45);
			if (!bLocal_39)
			{
				__LIB_0__::func_703(0, -1);
			}
			if (ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				Local_45.f_1005 = 0;
				bLocal_36 = true;
				return true;
			}
			if (PED::_0x0EE3F0D7FECCC54F())
			{
				bLocal_36 = true;
				return true;
			}
			break;
		case 2:
			PED::_0x7D4E70A67A651C71(1);
			func_83(iLocal_19);
			__LIB_1__::func_924();
			__LIB_0__::func_747(120, 0, 1);
			Global_1934266.f_63 = -1;
			LAW::_0xD6C0A8C7C0B2F82C(PLAYER::PLAYER_ID(), 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, false);
			POPULATION::_0xBC90BDF4E5228EA1();
			PED::_0x4759CC730F947C81();
			func_82();
			func_56(0, 1114636288 /* Float: 60f */, 1117847552 /* Float: 80.5f */, 1116602368 /* Float: 71f */);
			func_87();
			func_88();
			__LIB_1__::func_715(12, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
			__LIB_4__::func_269(0);
			__LIB_1__::func_600(1);
			__LIB_1__::func_142(0);
			__LIB_1__::func_649(&iLocal_1192, 3);
			if (bParam1)
			{
				func_3(uParam0, bParam1);
			}
			break;
		case 3:
			if (!bLocal_39)
			{
				__LIB_0__::func_703(0, -1);
			}
			if (PED::_0x0EE3F0D7FECCC54F())
			{
				bLocal_36 = true;
				if (func_92(uParam0))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

void func_4(var uParam0)
{
	if (uParam0->f_1001 > 0)
	{
		ENTITY::_0x20FAEE47427A4497();
		PED::_0x7D4E70A67A651C71(uParam0->f_1001);
	}
}

void func_9()
{
	int iVar0;
	iVar0 = __LIB_1__::func_898();
	if (__LIB_0__::func_69(iVar0))
	{
		Global_1934266.f_317[iVar0] = __LIB_0__::func_23();
	}
}

void func_10()
{
	int iVar0;
	iVar0 = __LIB_2__::func_702();
	if (__LIB_0__::func_630(Global_1934266.f_63) && Global_1934266.f_63 != iVar0)
	{
		Local_45.f_1002 = __LIB_1__::func_931(Global_1934266.f_63);
	}
	else
	{
		Local_45.f_1002 = LAW::_GET_BOUNTY_FOR_PLAYER(PLAYER::PLAYER_ID());
	}
}

int func_14(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			if (!__LIB_10__::func_35(6, 16384))
			{
				__LIB_0__::func_714(6, 16384);
				__LIB_11__::func_118(6);
			}
			if (!__LIB_10__::func_35(7, 16384))
			{
				__LIB_0__::func_714(7, 16384);
				__LIB_11__::func_118(7);
			}
			if (__LIB_10__::func_35(6, 16384) && __LIB_10__::func_35(7, 16384))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_21()
{
	if (__LIB_3__::func_829(282))
	{
		__LIB_4__::func_861(282);
	}
	if (__LIB_3__::func_829(281))
	{
		__LIB_4__::func_861(281);
	}
	if (__LIB_3__::func_829(263))
	{
		__LIB_4__::func_861(263);
	}
	if (__LIB_3__::func_829(264))
	{
		__LIB_4__::func_861(264);
	}
	if (__LIB_3__::func_829(272))
	{
		__LIB_4__::func_861(272);
	}
}

void func_22()
{
	var uVar0;
	int iVar1;
	if (!func_112())
	{
		if (__LIB_1__::func_750(&uVar0))
		{
			__LIB_3__::func_671();
		}
	}
	if (func_115())
	{
		__LIB_6__::func_615(joaat("MPC_HIDE_ACTION_GUNBELT_AND_SATCHEL"), Global_35, 0, 1);
		iVar1 = 0;
		while (iVar1 < 29)
		{
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, iVar1, false);
			iVar1++;
		}
	}
}

void func_23()
{
	PED::_0xE3144B932DFDFF65(Global_35, 0f, -1, true, true);
	PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_35, 10, "ALL");
	PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 3);
	PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 0);
	PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 5);
	PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 7);
	PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 8);
	PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 9);
}

int func_24(int iParam0)
{
	return __LIB_1__::func_293(iParam0, 0, 3, func_117());
}

bool func_26(int iParam0)
{
	if (!__LIB_0__::func_6(iLocal_19))
	{
		iLocal_19 = func_24(iParam0);
		return false;
	}
	if (__LIB_1__::func_44(iLocal_19))
	{
		return true;
	}
	if (!__LIB_0__::func_702(iLocal_19))
	{
		__LIB_1__::func_298(iLocal_19, 1);
	}
	else
	{
		__LIB_0__::func_7(&Global_1935630, 128);
		__LIB_1__::func_560(iLocal_19, 1, 0);
	}
	return false;
}

int func_27(var uParam0)
{
	if (((((uParam0->f_60 == 76 || uParam0->f_60 == 26) || uParam0->f_60 == 105) || uParam0->f_60 == 78) || uParam0->f_60 == 38) || uParam0->f_60 == 5)
	{
		return 1;
	}
	return 0;
}

int func_28(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	uParam1->f_970 = -1;
	if (!__LIB_0__::func_20(iParam0))
	{
		return 0;
	}
	if (__LIB_9__::func_19(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_1__::func_905(__LIB_4__::func_917(iParam0));
	if (!__LIB_0__::func_630(iVar0))
	{
		return 0;
	}
	func_128(iParam0, &iVar1, uParam1);
	if (__LIB_9__::func_512(iVar1))
	{
		uParam1->f_970 = iVar1;
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_29(int iParam0)
{
	if (!__LIB_9__::func_512(iParam0))
	{
		return;
	}
	MISC::SET_BIT(&(Global_40.f_11182), iParam0);
}

void func_33(var uParam0)
{
	switch (uParam0->f_60)
	{
		case 78:
			__LIB_0__::func_568(2902.057f, 1311.149f, 44.9349f, 3f, 0);
			break;
		case 76:
			__LIB_0__::func_568(-272.9033f, 808.8414f, 119.3715f, 4f, 0);
			break;
		case 38:
			__LIB_0__::func_568(-764.9592f, -1263.492f, 44.1678f, 3.5f, 0);
			break;
		case 105:
			__LIB_0__::func_568(1355.627f, -1302.07f, 77.7605f, 3f, 0);
			break;
		case 26:
			__LIB_0__::func_568(-1811.578f, -353.199f, 161.4108f, 4f, 0);
			break;
		case 5:
			__LIB_0__::func_568(2503.272f, -1306.936f, 48.9537f, 2f, 0);
			break;
	}
}

void func_35(var uParam0)
{
	func_137(uParam0);
	__LIB_9__::func_364(iLocal_16, 0, 114688, 0);
}

void func_37()
{
	int iVar0;
	iVar0 = __LIB_2__::func_702();
	if (__LIB_0__::func_630(Global_1934266.f_63) && Global_1934266.f_63 != iVar0)
	{
		__LIB_14__::func_230(Global_1934266.f_63);
		__LIB_12__::func_589(Global_1934266.f_63);
		__LIB_11__::func_319(Global_1934266.f_63, 0);
		__LIB_12__::func_589(iVar0);
	}
	else
	{
		__LIB_14__::func_230(Global_1934266.f_63);
		__LIB_12__::func_589(Global_1934266.f_63);
	}
	LAW::_0x062B4A4A3396351D(PLAYER::PLAYER_ID());
}

void func_38(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 1:
			uParam0->f_1003 = 1;
			StringCopy(&(uParam0->f_984), "JBO3_EXT", 32);
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-274.9539f, 807.9131f, 121.9488f, 0f, 0f, 9.543586f, 10.13485f, 10.82004f, 7.605244f, "JBO3_Restrictions");
			func_142(uParam0, 7, "CharlesSmith", -269.002f, 806.5345f, 118.2811f, 1, -270.53f, 791.97f, 117.58f, 220.6354f, 0);
			func_142(uParam0, 0, "DUTCH", -269.002f, 806.5345f, 118.2811f, 1, -271.82f, 791.26f, 117.59f, 202.4148f, 0);
			func_143(uParam0, Global_35, "arthur", -269.002f, 806.5345f, 118.2811f, 1, -268.18f, 793.36f, 117.53f, 203.3375f, 0);
			break;
		case 2:
			uParam0->f_1003 = 1;
			StringCopy(&(uParam0->f_984), "JBO7_EXT", 32);
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-274.9539f, 807.9131f, 121.9488f, 0f, 0f, 9.543586f, 10.13485f, 10.82004f, 7.605244f, "JBO7_Restrictions");
			func_142(uParam0, 7, "CharlesSmith", -262.9f, 819.2f, 119.5f, 1, -266.4f, 818.8f, 119.5f, 154.3179f, "HORSE_01");
			func_142(uParam0, 0, "Dutch", -268.8f, 815.9f, 119.5f, 1, -265.8f, 814.1f, 119.5f, 165.487f, "Horse_01^1");
			func_143(uParam0, Global_35, "ARTHUR", -272.7f, 811.4f, 119.5f, 1, -269.9f, 819.3f, 119.5f, 186.387f, "Horse_01^2");
			break;
		case 3:
			uParam0->f_1003 = 0;
			StringCopy(&(uParam0->f_984), "JBO2_EXT", 32);
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-286.7853f, 805.7806f, 119.0863f, 0f, 0f, 11.78279f, 42.17782f, 34.87466f, 15.87478f, "JBO2_Restrictions");
			func_142(uParam0, 0, "Dutch", -274.8124f, 800.249f, 118.3808f, 1, -294.5992f, 819.6844f, 118.2036f, 272.9581f, 0);
			func_143(uParam0, Global_35, "ARTHUR", -272.7505f, 811.0136f, 118.38f, 1, -303.235f, 793.9093f, 118.1267f, 5.5524f, 0);
			break;
		case 4:
			uParam0->f_1003 = 1;
			StringCopy(&(uParam0->f_984), "JBO5_EXT", 32);
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1811.271f, -351.171f, 165.12f, 0f, 0f, 65.01599f, 11.6f, 8.2f, 8f, "JBO5_Restrictions");
			func_142(uParam0, 7, "CharlesSmith", -1803.529f, -344.7994f, 163.5501f, 1, -1793.58f, -367.07f, 160.21f, 216.8521f, 0);
			func_142(uParam0, 1, "JohnMarston", -1803.529f, -344.7994f, 163.5501f, 1, -1791.94f, -364.9f, 160.64f, 202.8108f, 0);
			func_143(uParam0, Global_35, "arthur", -269.002f, 806.5345f, 118.2811f, 1, -1795.35f, -369.44f, 159.86f, 210.9395f, 0);
			break;
		case 5:
			uParam0->f_1003 = 1;
			StringCopy(&(uParam0->f_984), "JBO9_EXT", 32);
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1811.271f, -351.171f, 163.953f, 0f, 0f, 65.01599f, 11.6f, 8.2f, 8f, "JBO9_Restrictions");
			func_143(uParam0, Global_35, "JOHN", -1810.377f, -351.2475f, 161.4798f, 0, 0f, 0f, 0f, 0f, 0);
			break;
		case 6:
			uParam0->f_1003 = 1;
			StringCopy(&(uParam0->f_984), "JBO1_EXT", 32);
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1357.724f, -1304.623f, 78.07324f, 0f, 0f, -20f, 15.45211f, 22.1697f, 6.84831f, "JBO1_Restrictions");
			func_142(uParam0, 0, "DUTCH", 1352.871f, -1299.193f, 75.6088f, 1, 1348.682f, -1311.307f, 76.5695f, 85.1549f, "Horse_01^1");
			func_143(uParam0, Global_35, "arthur", 1354.891f, -1301.46f, 77.1865f, 1, 1350.86f, -1309.55f, 76.71f, 85.1549f, "Horse_01");
			break;
		case 7:
			uParam0->f_1003 = 0;
			StringCopy(&(uParam0->f_984), "JBO4_EXT", 32);
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2906.926f, 1312.666f, 45.85957f, 0f, 0f, -18.92808f, 21.62638f, 10.55981f, 7.126882f, "JBO4_Restrictions");
			func_142(uParam0, 5, "HoseaMatthews", 2916.183f, 1308.597f, 44.59514f, 1, 2911.277f, 1303.386f, 43.7005f, 158.1667f, 0);
			func_143(uParam0, Global_35, "ARTHUR", 2916.527f, 1312.022f, 44.4304f, 1, 2916.746f, 1317.201f, 43.34f, 64.3745f, 0);
			break;
		case 8:
			uParam0->f_1003 = 1;
			StringCopy(&(uParam0->f_984), "JBO6_EXT", 32);
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2906.926f, 1312.666f, 45.85957f, 0f, 0f, -18.92808f, 21.62638f, 10.55981f, 7.126882f, "JBO6_Restrictions");
			func_142(uParam0, 7, "CharlesSmith", 2913.348f, 1309.59f, 43.5983f, 1, 2911.918f, 1304.091f, 43.5851f, 163.1755f, "Horse_01");
			func_143(uParam0, Global_35, "ARTHUR", 2902.42f, 1312.024f, 43.9416f, 1, 2916.746f, 1317.201f, 43.34f, 64.3745f, 0);
			func_144(uParam0, joaat("S_M_M_AMBIENTLAWRURAL_01"), "S_M_M_AMBIENTLAWRURAL_01", 2916.527f, 1312.022f, 44.4304f, joaat("ASB_LAW_DEPUTIES"));
			func_144(uParam0, joaat("S_M_M_AMBIENTLAWRURAL_01"), "S_M_M_AMBIENTLAWRURAL_01^1", 2913.348f, 1309.59f, 43.5983f, joaat("ASB_LAW_DEPUTIES"));
			break;
		case 9:
			uParam0->f_1003 = 0;
			StringCopy(&(uParam0->f_984), "JBO11_EXT", 32);
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-759.3268f, -1267.945f, 44.01426f, 0f, 0f, 0f, 21.59153f, 12.84869f, 6.995106f, "JBO11_Restrictions");
			func_142(uParam0, 13, "AbigailRoberts", -751.2921f, -1269.159f, 42.3344f, 1, -751.6697f, -1266.675f, 42.3642f, 351.0406f, "Horse_01");
			func_143(uParam0, Global_35, "JOHN", -762.8563f, -1263.777f, 42.8484f, 1, -752.6035f, -1276.804f, 42.4938f, 88.8295f, 0);
			break;
		case 10:
			uParam0->f_1003 = 0;
			StringCopy(&(uParam0->f_984), "JBO8_EXT", 32);
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2503.094f, -1308.998f, 48.54811f, 0f, 0f, 0f, 40.58993f, 17.2809f, 9.483007f, "JB10_Restrictions");
			func_142(uParam0, 5, "HoseaMatthews", 2529.161f, -1307.163f, 48.2126f, 1, 2522.156f, -1316.749f, 47.8753f, 77.2207f, 0);
			func_143(uParam0, Global_35, "ARTHUR", 2512.193f, -1308.456f, 47.9537f, 1, 2522.22f, -1302.554f, 48.0213f, 93.0952f, 0);
			break;
		case 11:
			uParam0->f_1003 = 0;
			StringCopy(&(uParam0->f_984), "JBO10_EXT", 32);
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2503.094f, -1308.998f, 48.54811f, 0f, 0f, 0f, 40.58993f, 17.2809f, 9.483007f, "JB10_Restrictions");
			func_143(uParam0, Global_35, "John", 2503.278f, -1306.994f, 47.9537f, 0, 0f, 0f, 0f, 0f, 0);
			break;
	}
}

void func_39(var uParam0)
{
	int iVar0;
	if ((uParam0->f_998 > 0 || uParam0->f_999 > 0) || uParam0->f_1000 > 0)
	{
		if (uParam0->f_950.f_18)
		{
			iVar0 = 1;
		}
		uParam0->f_1001 = (((uParam0->f_998 + uParam0->f_999) + uParam0->f_1000 * 2) + iVar0);
		PED::_0xED9582B3DA8F02B4(uParam0->f_1001);
	}
}

bool func_40(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 4:
		case 6:
			return true;
	}
	return false;
}

void func_41(var uParam0)
{
	func_145(uParam0);
	__LIB_9__::func_364(iLocal_17, 0, 2048, 0);
}

bool func_42(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
			return false;
	}
	return true;
}

void func_43()
{
	__LIB_14__::func_230(__LIB_2__::func_702());
}

void func_44(var uParam0)
{
	switch (uParam0->f_60)
	{
		case 76:
			__LIB_3__::func_229(32);
			__LIB_0__::func_123(32, 32);
			iLocal_18 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-270.6571f, 785.237f, 118.2027f, 0f, 0f, 11.43384f, 44.26319f, 53.83985f, 21.44312f, "volClearScriptWagons");
			break;
		case 26:
			__LIB_3__::func_229(883);
			__LIB_3__::func_229(884);
			__LIB_0__::func_123(883, 32);
			__LIB_0__::func_123(884, 32);
			iLocal_18 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1795.738f, -362.124f, 163.6816f, 0f, 0f, -23.81512f, 51.10044f, 45.75085f, 22.93521f, "volClearScriptWagons");
			break;
		case 105:
			iLocal_18 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1347.627f, -1309.533f, 76.47682f, 0f, 0f, -19.9999f, 64.97517f, 24.37222f, 16.81363f, "volClearScriptWagons");
			break;
		case 78:
			iLocal_18 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2910.424f, 1294.851f, 43.97159f, 0f, 0f, -20.00017f, 44.69428f, 76.72396f, 18.23014f, "volClearScriptWagons");
			break;
		case 38:
			iLocal_18 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-747.7532f, -1267.985f, 42.28417f, 0f, 0f, 0f, 19.36348f, 27.39255f, 21.49196f, "volClearScriptWagons");
			break;
		case 5:
			iLocal_18 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2521.402f, -1300.223f, 47.53965f, 0f, 0f, 0f, 23.75947f, 61.34023f, 26.76055f, "volClearScriptWagons");
			break;
		case 120:
			break;
	}
}

void func_45()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_18))
	{
		iVar0 = ITEMSET::CREATE_ITEMSET(true);
		ENTITY::_0x886171A12F400B89(iLocal_18, iVar0, 2);
		iVar1 = ITEMSET::GET_ITEMSET_SIZE(iVar0);
		if (iVar1 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar1)
			{
				iVar3 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0)));
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar3, true, true);
					VEHICLE::DELETE_VEHICLE(&iVar3);
				}
				iVar2++;
			}
		}
	}
}

void func_46(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
			if (!__LIB_5__::func_260(0, 16384))
			{
				__LIB_5__::func_414(0, 16384, 1);
			}
			if (!__LIB_5__::func_260(7, 16384))
			{
				__LIB_5__::func_414(7, 16384, 1);
			}
			break;
		case 6:
			if (!__LIB_5__::func_260(0, 16384))
			{
				__LIB_5__::func_414(0, 16384, 1);
			}
			break;
		case 8:
			if (!__LIB_5__::func_260(7, 16384))
			{
				__LIB_5__::func_414(7, 16384, 1);
			}
			break;
		case 4:
			if (!__LIB_5__::func_260(1, 16384))
			{
				__LIB_5__::func_414(1, 16384, 1);
			}
			if (!__LIB_5__::func_260(7, 16384))
			{
				__LIB_5__::func_414(7, 16384, 1);
			}
			break;
	}
}

void func_47()
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 29)
	{
		iVar0 = __LIB_0__::func_153(Global_35, iVar1, 0, 1);
		if ((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0)) && !WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			__LIB_4__::func_677(iVar0);
		}
		iVar1++;
	}
}

int func_48(var uParam0)
{
	switch (uParam0->f_969)
	{
		case 0:
			if (func_151(uParam0))
			{
				uParam0->f_969 = 1;
			}
			break;
		case 1:
			func_152(uParam0);
			__LIB_5__::func_411(uParam0);
			func_154(uParam0);
			func_155(uParam0);
			uParam0->f_969 = 2;
			break;
		case 2:
			AUDIO::SET_AUDIO_FLAG("EnableCutsceneMusic", uParam0->f_1003);
			if (func_156(uParam0))
			{
				uParam0->f_969 = 3;
			}
			break;
		case 3:
			if (func_63(uParam0))
			{
				func_157(uParam0);
			}
			if (uParam0->f_1006 == 0)
			{
				if (func_158(uParam0))
				{
					uParam0->f_969 = 4;
				}
			}
			break;
		case 4:
			func_159(uParam0);
			if (uParam0->f_1003)
			{
				AUDIO::SET_AUDIO_FLAG("EnableCutsceneMusic", false);
			}
			uParam0->f_969 = 5;
			break;
		case 5:
			break;
	}
	return uParam0->f_969;
}

void func_52(var uParam0)
{
	int iVar0;
	int iVar1;
	if (bLocal_30)
	{
		return;
	}
	func_168();
	__LIB_16__::func_5(&(uParam0->f_43));
	__LIB_16__::func_5(&(uParam0->f_46));
	__LIB_16__::func_5(&(uParam0->f_49));
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (bLocal_28)
	{
		__LIB_10__::func_27(1);
		func_75();
		func_170(&Local_45);
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
		if (!func_40(Local_45.f_970))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(iLocal_23);
		}
		if (!__LIB_0__::func_474(288))
		{
			__LIB_1__::func_240(288, 0);
		}
	}
	else
	{
		iVar0 = PLAYER::PLAYER_PED_ID();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
			if (TASK::_0x9FF5F9B24E870748(iVar0))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
			}
			iVar1 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(iVar0, true);
			if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar1))
			{
				TASK::_TASK_USE_SCENARIO_POINT(iVar0, iVar1, 0, 1, false, false, 0, false, -1f, false);
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), uParam0->f_30, false) > 2f)
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar0, uParam0->f_30, uParam0->f_33, false, false, true);
			}
		}
	}
	AUDIO::_0x9428447DED71FC7E("Arrest_Fail_Respawn_Scenes");
	Global_1934266.f_61 = 0;
	bLocal_30 = true;
}

void func_53(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 3:
			__LIB_1__::func_948(joaat("DOOR_VAL_JAIL_CELL_01"), 1, 0f, 0, 0, 1f, 0, 0);
			__LIB_1__::func_948(joaat("DOOR_VAL_JAIL_CELL_02"), 1, 0f, 0, 0, 1f, 0, 0);
			__LIB_1__::func_948(joaat("DOOR_VAL_JAIL_CELL_03"), 1, 0f, 0, 0, 1f, 0, 0);
			break;
		case 1:
		case 2:
			uParam0->f_1005 = 1;
			uParam0->f_949 = __LIB_0__::func_12();
			__LIB_1__::func_948(395506985, 1, 0f, 0, 0, 1f, 0, 0);
			__LIB_1__::func_948(joaat("DOOR_VAL_JAIL_CELL_01"), 1, 0f, 0, 0, 1f, 0, 0);
			__LIB_1__::func_948(joaat("DOOR_VAL_JAIL_CELL_02"), 1, 0f, 0, 0, 1f, 0, 0);
			__LIB_1__::func_948(joaat("DOOR_VAL_JAIL_CELL_03"), 1, 0f, 0, 0, 1f, 0, 0);
			__LIB_1__::func_948(1988748538, 1, 0f, 0, 0, 1f, 0, 0);
			break;
		case 4:
		case 5:
			uParam0->f_1005 = 1;
			uParam0->f_949 = __LIB_0__::func_12();
			__LIB_1__::func_948(joaat("DOOR_STR_JAILPOST_INT_1"), 1, 0f, 0, 0, 1f, 0, 0);
			__LIB_1__::func_948(902070893, 1, 0f, 0, 0, 1f, 0, 0);
			__LIB_1__::func_948(1821044729, 1, 0f, 1, 0, 1f, 1, 1);
			__LIB_1__::func_948(1514359658, 1, 0f, 0, 0, 1f, 0, 0);
			break;
		case 8:
			uParam0->f_1005 = 1;
			uParam0->f_949 = __LIB_0__::func_12();
			__LIB_1__::func_948(-2082598623, 1, 0f, 0, 0, 1f, 0, 0);
			__LIB_1__::func_948(1657401918, 1, 0f, 0, 0, 1f, 0, 0);
			__LIB_1__::func_948(1502928852, 1, 0f, 0, 0, 1f, 0, 0);
			break;
		case 6:
			uParam0->f_1005 = 1;
			uParam0->f_949 = __LIB_0__::func_12();
			__LIB_1__::func_948(1614494720, 1, 0f, 0, 0, 1f, 0, 0);
			__LIB_1__::func_948(349074475, 1, 0f, 0, 0, 1f, 0, 0);
			__LIB_1__::func_948(1878514758, 1, 0f, 0, 0, 1f, 0, 0);
			break;
		case 9:
			uParam0->f_1005 = 1;
			uParam0->f_949 = __LIB_0__::func_12();
			__LIB_1__::func_948(-473782212, 1, 0f, 0, 0, 1f, 0, 0);
			__LIB_1__::func_948(-884246706, 1, 0f, 0, 0, 1f, 0, 0);
			__LIB_1__::func_948(joaat("DOOR_BLA_JAIL_INT_1"), 1, 0f, 0, 0, 1f, 0, 0);
			__LIB_1__::func_948(-1779971138, 1, 0f, 0, 0, 1f, 0, 0);
			__LIB_1__::func_948(-1484165375, 1, 0f, 0, 0, 1f, 0, 0);
			break;
	}
}

void func_54()
{
	WEAPON::_SET_PED_ALL_WEAPONS_VISIBILITY(Global_35, true);
}

void func_55(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<4> Var9;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_35, false, false) };
	iVar3 = ITEMSET::CREATE_ITEMSET(true);
	LAW::_0x0C392DB374655176(vVar0, func_172(&(uParam0->f_970)), iVar3);
	iVar4 = ITEMSET::GET_ITEMSET_SIZE(iVar3);
	if (iVar4 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			iVar7 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar3);
			iVar8 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_DEAD_OR_DYING(iVar8, true))
			{
				if (iVar6 < 4)
				{
					Var9 = { func_173(&(uParam0->f_970), iVar6) };
					if (!__LIB_0__::func_86(Var9))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar8, true, true);
						func_175(iVar8, Var9, 2, 1073741824 /* Float: 2f */);
					}
					iVar6++;
				}
			}
			iVar5++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar3);
}

void func_56(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	if (bParam0)
	{
		MISC::_0x27A1B170AA8AF84C(iParam1);
		MISC::_0x89314FB3463E28DE(iParam2);
		MISC::SET_DISPATCH_IDEAL_SPAWN_DISTANCE(fParam3);
	}
	else
	{
		MISC::_0x96498D922D8D0D0A();
		MISC::_0x54EC7B6BC72BAD69();
		MISC::RESET_DISPATCH_IDEAL_SPAWN_DISTANCE();
	}
}

void func_57(var uParam0, var uParam1)
{
	switch (uParam0->f_970)
	{
		case 1:
		case 2:
			__LIB_0__::func_928(uParam1, func_176(uParam0, 0), "DUTCH", 0);
			__LIB_0__::func_928(uParam1, func_176(uParam0, 7), "CHARLES_SMITH", 0);
			__LIB_0__::func_928(uParam1, Global_35, "ARTHUR", 0);
			break;
		case 4:
			__LIB_0__::func_928(uParam1, func_176(uParam0, 1), "JOHN", 0);
			__LIB_0__::func_928(uParam1, func_176(uParam0, 7), "CHARLES_SMITH", 0);
			__LIB_0__::func_928(uParam1, Global_35, "ARTHUR", 0);
			break;
		case 6:
			__LIB_0__::func_928(uParam1, func_176(uParam0, 0), "DUTCH", 0);
			__LIB_0__::func_928(uParam1, Global_35, "ARTHUR", 0);
			break;
	}
}

void func_58(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 2:
			iLocal_14 = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
			PED::SET_PED_CONFIG_FLAG(Global_35, 155, true);
			COMPANION::_0xCBD9EC60495C728C(iLocal_14);
			PED::_0x9238A3D970BBB0A9(Global_35, -1972074710);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_950.f_2, 113, true);
			PED::FORCE_PED_MOTION_STATE(uParam0->f_950.f_2, -1415276238, false, 1, false);
			func_178(func_176(uParam0, 7));
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 7), 113, true);
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 7), 156, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_176(uParam0, 7), true);
			COMPANION::_0xD730281E496621FB(func_176(uParam0, 7), joaat("SUPPORT"));
			PED::_0x9238A3D970BBB0A9(func_176(uParam0, 7), -1972074710);
			PED::SET_PED_CONFIG_FLAG(func_179(uParam0, 7), 113, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_179(uParam0, 7), true);
			PED::FORCE_PED_MOTION_STATE(func_179(uParam0, 7), -1415276238, false, 1, false);
			func_178(func_176(uParam0, 0));
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 0), 113, true);
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 0), 156, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_176(uParam0, 0), true);
			COMPANION::_0xD730281E496621FB(func_176(uParam0, 0), joaat("SUPPORT"));
			PED::_0x9238A3D970BBB0A9(func_176(uParam0, 0), -1972074710);
			PED::SET_PED_CONFIG_FLAG(func_179(uParam0, 0), 113, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_179(uParam0, 0), true);
			PED::FORCE_PED_MOTION_STATE(func_179(uParam0, 0), -1415276238, false, 1, false);
			break;
		case 4:
			iLocal_14 = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
			PED::SET_PED_CONFIG_FLAG(Global_35, 155, true);
			COMPANION::_0xCBD9EC60495C728C(iLocal_14);
			PED::_0x9238A3D970BBB0A9(Global_35, -1972074710);
			func_178(func_176(uParam0, 7));
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 7), 113, true);
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 7), 156, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_176(uParam0, 7), true);
			COMPANION::_0xD730281E496621FB(func_176(uParam0, 7), joaat("SUPPORT"));
			PED::_0x9238A3D970BBB0A9(func_176(uParam0, 7), -1972074710);
			PED::SET_PED_CONFIG_FLAG(func_179(uParam0, 7), 113, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_179(uParam0, 7), true);
			func_178(func_176(uParam0, 1));
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 1), 113, true);
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 1), 156, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_176(uParam0, 1), true);
			COMPANION::_0xD730281E496621FB(func_176(uParam0, 1), joaat("SUPPORT"));
			PED::_0x9238A3D970BBB0A9(func_176(uParam0, 1), -1972074710);
			PED::SET_PED_CONFIG_FLAG(func_179(uParam0, 1), 113, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_179(uParam0, 1), true);
			break;
		case 6:
			iLocal_14 = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
			PED::SET_PED_CONFIG_FLAG(Global_35, 155, true);
			COMPANION::_0xCBD9EC60495C728C(iLocal_14);
			PED::_0x9238A3D970BBB0A9(Global_35, -1972074710);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_950.f_2, 113, true);
			PED::FORCE_PED_MOTION_STATE(uParam0->f_950.f_2, -1415276238, false, 1, false);
			func_178(func_176(uParam0, 0));
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 0), 113, true);
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 0), 156, true);
			COMPANION::_0xD730281E496621FB(func_176(uParam0, 0), joaat("SUPPORT"));
			PED::_0x9238A3D970BBB0A9(func_176(uParam0, 0), -1972074710);
			PED::SET_PED_CONFIG_FLAG(func_179(uParam0, 0), 113, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_179(uParam0, 0), true);
			break;
	}
}

void func_60(var uParam0, var uParam1)
{
	vector3 vVar0;
	char* sVar3;
	vVar0 = { func_180(uParam0) };
	sVar3 = __LIB_0__::func_67(vVar0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
	{
		__LIB_2__::func_813(uParam1, vVar0, 0, -1, 0, 0);
	}
}

void func_61()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1396257[iVar0 /*638*/].f_635, false))
		{
			PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1396257[iVar0 /*638*/].f_635, 1);
		}
		iVar0++;
	}
}

bool func_63(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 2:
		case 6:
			return true;
	}
	return false;
}

int func_65(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case joaat("LAW_REGION_HEARTLANDS"):
			return joaat("LAW_WILDERNESS_HEARTLANDS");
		case joaat("LAW_REGION_SCARLETT_MEADOWS"):
			return joaat("LAW_WILDERNESS_SCARLETT_MEADOWS");
		case joaat("LAW_REGION_BAYOU_NWA"):
			return joaat("LAW_WILDERNESS_BAYOU_NWA");
		case joaat("LAW_REGION_BLUEGILL_MARSH"):
			return joaat("LAW_WILDERNESS_BLUEGILL_MARSH");
		case joaat("LAW_REGION_ROANOKE_RIDGE"):
			return joaat("LAW_WILDERNESS_ROANOKE_RIDGE");
		case joaat("LAW_REGION_CUMBERLAND_FOREST"):
			return joaat("LAW_WILDERNESS_CUMBERLAND_FOREST");
		case joaat("LAW_REGION_GRIZZLIES"):
			return joaat("LAW_WILDERNESS_GRIZZLIES");
		case joaat("LAW_REGION_BIG_VALLEY"):
			return joaat("LAW_WILDERNESS_BIG_VALLEY");
		case joaat("LAW_REGION_TALL_TREES"):
			return joaat("LAW_WILDERNESS_TALL_TREES");
		case joaat("LAW_REGION_GREAT_PLAINS"):
			return joaat("LAW_WILDERNESS_GREAT_PLAINS");
		case joaat("LAW_REGION_TALL_TREES_MAINGAME"):
			return joaat("LAW_WILDERNESS_TALL_TREES_MAINGAME");
		case joaat("LAW_REGION_GREAT_PLAINS_MAINGAME"):
			return joaat("LAW_WILDERNESS_GREAT_PLAINS_MAINGAME");
		case joaat("LAW_REGION_GUAMA"):
			return joaat("LAW_WILDERNESS_GUAMA");
		case joaat("LAW_REGION_VALENTINE"):
			return joaat("LAW_LOCAL_VALENTINE");
		case joaat("LAW_REGION_VALENTINE_LOCKDOWN"):
			return joaat("LAW_LOCAL_VALENTINE_LOCKDOWN");
		case joaat("LAW_REGION_RHODES"):
			return joaat("LAW_LOCAL_RHODES");
		case joaat("LAW_REGION_RHODES_LOCKDOWN"):
			return joaat("LAW_LOCAL_RHODES_LOCKDOWN");
		case joaat("LAW_REGION_SAINT_DENIS"):
			return joaat("LAW_LOCAL_SAINT_DENIS");
		case joaat("LAW_REGION_SAINT_DENIS_RURAL"):
			return joaat("LAW_LOCAL_SAINT_DENIS_RURAL");
		case joaat("LAW_REGION_MANICATO"):
			return joaat("LAW_LOCAL_MANICATO");
		case joaat("LAW_REGION_ANNESBURG"):
			return -438365419;
		case joaat("LAW_REGION_STRAWBERRY"):
			return joaat("LAW_LOCAL_STRAWBERRY");
		case joaat("LAW_REGION_PRONGHORN_RANCH"):
			return joaat("LAW_LOCAL_PRONGHORN_RANCH");
		case joaat("LAW_REGION_BLACKWATER"):
			return joaat("LAW_LOCAL_BLACKWATER");
		case joaat("LAW_REGION_VAN_HORN"):
			return 570252687;
		case joaat("LAW_REGION_CORNWALL"):
			return joaat("LAW_LOCAL_CORNWALL");
		case joaat("LAW_REGION_EMERALD_RANCH"):
			return joaat("LAW_LOCAL_EMERALD_RANCH");
		case joaat("LAW_REGION_BRAITHWAITE_MANOR"):
			return joaat("LAW_LOCAL_BRAITHWAITE_MANOR");
		case joaat("LAW_REGION_CALIGA_HALL"):
			return joaat("LAW_LOCAL_CALIGA_HALL");
		case joaat("LAW_REGION_AGUASDULCES"):
			return joaat("LAW_LOCAL_AGUASDULCES");
		case joaat("LAW_REGION_LAGRAS"):
			return joaat("LAW_LOCAL_LAGRAS");
		case joaat("LAW_REGION_SISIKA"):
			return joaat("LAW_LOCAL_SISIKA");
		case joaat("LAW_REGION_BUTCHER_CREEK"):
			return -1354053979;
		case joaat("LAW_REGION_FORT_WALLACE"):
			return joaat("LAW_LOCAL_FORT_WALLACE");
		case joaat("LAW_REGION_WAPITI"):
			return joaat("LAW_LOCAL_WAPITI");
		case joaat("LAW_REGION_BEECHERS_HOPE"):
			return joaat("LAW_LOCAL_BEECHERS_HOPE");
		case joaat("LAW_REGION_MANZANITA_POST"):
			return joaat("LAW_LOCAL_MANZANITA_POST");
		case joaat("LAW_REGION_BLACKWATER_MAINGAME"):
			return joaat("LAW_LOCAL_BLACKWATER_MAINGAME");
		case joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP"):
			return 718118376;
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS"):
			return joaat("LAW_WILDERNESS_OLD_MAP");
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME"):
			return joaat("LAW_WILDERNESS_OLD_MAP_MAINGAME");
		case joaat("LAW_REGION_MACFARLANES_RANCH"):
			return joaat("LAW_LOCAL_MACFARLANES_RANCH");
		case joaat("LAW_REGION_ARMADILLO"):
			return joaat("LAW_LOCAL_ARMADILLO");
		case joaat("LAW_REGION_THIEVES_LANDING"):
			return -726295943;
		case joaat("LAW_REGION_THIEVES_LANDING_MAINGAME"):
			return joaat("LAW_LOCAL_THIEVES_LANDING_MAINGAME");
		case joaat("LAW_REGION_RIDGEWOOD_FARM"):
			return joaat("LAW_LOCAL_RIDGEWOOD_FARM");
		default:
			break;
	}
	return 0;
}

void func_66(var uParam0)
{
	func_183();
	if (!__LIB_0__::func_730(iLocal_1188))
	{
		__LIB_10__::func_843(iLocal_1188, 1, 350);
	}
	if (func_185(uParam0) && !LAW::_0xAD401C63158ACBAA(PLAYER::GET_PLAYER_INDEX()))
	{
		bLocal_33 = false;
	}
}

void func_67(var uParam0, var uParam1)
{
	vector3 vVar0;
	char* sVar3;
	vVar0 = { func_186(uParam0) };
	sVar3 = __LIB_0__::func_67(vVar0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
	{
		__LIB_2__::func_813(uParam1, vVar0, 0, -1, 0, 0);
	}
}

void func_68(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 1:
		case 2:
			__LIB_1__::func_948(395506985, 0, 0f, 0, 0, 1f, 0, 0);
			__LIB_1__::func_948(1988748538, 0, 0f, 0, 0, 1f, 0, 0);
			uParam0->f_1005 = 0;
			break;
		case 4:
		case 5:
			__LIB_1__::func_948(joaat("DOOR_STR_JAILPOST_INT_1"), 0, 0f, 0, 0, 1f, 0, 0);
			__LIB_1__::func_948(902070893, 0, 0f, 0, 0, 1f, 0, 0);
			__LIB_1__::func_948(1821044729, 0, 0f, 0, 0, 1f, 0, 0);
			__LIB_1__::func_948(1514359658, 0, 0f, 0, 0, 1f, 0, 0);
			uParam0->f_1005 = 0;
			break;
		case 8:
			__LIB_1__::func_948(-2082598623, 0, 0f, 0, 0, 1f, 0, 0);
			__LIB_1__::func_948(1657401918, 1, 0f, 0, 0, 1f, 0, 0);
			uParam0->f_1005 = 0;
			break;
		case 6:
			__LIB_1__::func_948(1614494720, 0, 0f, 0, 0, 1f, 0, 0);
			__LIB_1__::func_948(349074475, 0, 0f, 0, 0, 1f, 0, 0);
			uParam0->f_1005 = 0;
			break;
		case 9:
			__LIB_1__::func_948(-473782212, 0, 0f, 0, 0, 1f, 0, 0);
			__LIB_1__::func_948(-884246706, 0, 0f, 0, 0, 1f, 0, 0);
			uParam0->f_1005 = 0;
			break;
	}
}

void func_69(var uParam0, var uParam1)
{
	vector3 vVar0;
	char* sVar3;
	vVar0 = { func_187(uParam0) };
	sVar3 = __LIB_0__::func_67(vVar0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
	{
		__LIB_2__::func_813(uParam1, vVar0, 0, -1, 0, 0);
	}
}

bool func_70(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if (__LIB_5__::func_864(iVar0) == -1)
	{
		vVar1 = { 224.566f, 171.2736f, 96.9528f };
	}
	else
	{
		vVar1 = { __LIB_2__::func_116(__LIB_0__::func_61(), 1) };
	}
	switch (uParam0->f_970)
	{
		case 1:
			if (!uParam0->f_1008)
			{
				__LIB_1__::func_562(func_176(uParam0, 0), func_179(uParam0, 0), 0, 1f, 20000);
				__LIB_1__::func_562(func_176(uParam0, 7), func_179(uParam0, 7), 0, 1f, 20000);
				uParam0->f_1008 = 1;
			}
			if (func_191(uParam0))
			{
				TASK::_TASK_MOVE_IN_TRAFFIC_4(func_176(uParam0, 0), 1.75f, vVar1, 0);
				TASK::_TASK_MOVE_IN_TRAFFIC_4(func_176(uParam0, 7), 1.75f, vVar1, 0);
				return true;
			}
			break;
		case 9:
			if (func_191(uParam0))
			{
				TASK::_TASK_MOVE_IN_TRAFFIC_4(func_176(uParam0, 13), 1.25f, vVar1, 0);
				return true;
			}
			break;
		case 3:
			if (!uParam0->f_1008)
			{
				__LIB_1__::func_562(func_176(uParam0, 0), func_179(uParam0, 0), 0, 1f, 20000);
				uParam0->f_1008 = 1;
			}
			if (func_191(uParam0))
			{
				TASK::_TASK_MOVE_IN_TRAFFIC_4(func_176(uParam0, 0), 1.25f, vVar1, 0);
				return true;
			}
			break;
		case 7:
			if (func_191(uParam0))
			{
				TASK::_TASK_MOVE_IN_TRAFFIC_4(func_176(uParam0, 5), 1.25f, vVar1, 0);
				return true;
			}
			break;
		case 8:
			if (func_191(uParam0))
			{
				TASK::_TASK_MOVE_IN_TRAFFIC_4(func_176(uParam0, 7), 1.75f, vVar1, 0);
				return true;
			}
			break;
		case 10:
			if (func_191(uParam0))
			{
				TASK::_TASK_MOVE_IN_TRAFFIC_4(func_176(uParam0, 5), 1f, vVar1, 0);
				return true;
			}
			break;
		case 5:
		case 11:
			return true;
	}
	return false;
}

bool func_71(var uParam0, int iParam1)
{
	switch (uParam0->f_26)
	{
		case 0:
			func_192(uParam0, iParam1);
			__LIB_3__::func_675(uParam0, 1);
			break;
		case 1:
			__LIB_3__::func_675(uParam0, 2);
			break;
		case 2:
			if (func_194(uParam0))
			{
				__LIB_3__::func_675(uParam0, 4);
			}
			break;
		case 4:
			if (func_195(uParam0))
			{
				__LIB_3__::func_675(uParam0, 7);
			}
			break;
		case 5:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_25))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_25);
			}
			if (CAM::_0x81DCFD13CF39920E())
			{
				CAM::_0xC64ABC0676AF262B();
			}
			__LIB_3__::func_675(uParam0, 7);
			break;
		case 7:
			return true;
	}
	return false;
}

void func_72()
{
	HUD::_0xC9CAEAEEC1256E54(1331687942);
}

void func_73(bool bParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	fVar0 = (IntToFloat(Local_45.f_1002) * 0.2f);
	iVar1 = (Local_45.f_1002 - BUILTIN::ROUND(fVar0));
	if (bParam0)
	{
		iVar2 = __LIB_0__::func_492(1);
		if (iVar2 >= iVar1)
		{
			__LIB_1__::func_432(iVar1, 0, 0, 1, 1);
		}
		else
		{
			__LIB_1__::func_432(iVar2, 0, 0, 1, 1);
		}
	}
}

void func_74()
{
	Global_40.f_11182.f_1 = __LIB_0__::func_23();
}

void func_75()
{
	if (__LIB_1__::func_262(543))
	{
		__LIB_1__::func_263(543);
	}
}

void func_80(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1000)
	{
		func_205(&(uParam0->f_868[iVar0 /*20*/]));
		if (uParam0->f_868[iVar0 /*20*/].f_19)
		{
			func_206(&(uParam0->f_868[iVar0 /*20*/]));
		}
		iVar0++;
	}
}

void func_81(var uParam0)
{
	if (!uParam0->f_18)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_2, false);
		__LIB_2__::func_145(uParam0->f_2, 0);
	}
}

void func_82()
{
	MISC::_0x96498D922D8D0D0A();
	MISC::_0x54EC7B6BC72BAD69();
	MISC::RESET_DISPATCH_IDEAL_SPAWN_DISTANCE();
}

void func_83(int iParam0)
{
	__LIB_0__::func_8(&Global_1935630, 128);
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_702(iParam0) || __LIB_1__::func_44(iParam0))
	{
		__LIB_1__::func_559(iParam0, 0, 2);
	}
}

void func_86(var uParam0)
{
	switch (uParam0->f_60)
	{
		case 76:
			__LIB_4__::func_193(32);
			__LIB_0__::func_121(32, 32);
			break;
		case 26:
			__LIB_4__::func_193(883);
			__LIB_0__::func_121(883, 32);
			__LIB_4__::func_193(884);
			__LIB_0__::func_121(884, 32);
			break;
	}
}

void func_87()
{
	__LIB_3__::func_59(iLocal_16);
	__LIB_0__::func_172(iLocal_16);
}

void func_88()
{
	__LIB_3__::func_59(iLocal_17);
}

void func_89(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 2:
			if (!__LIB_9__::func_922(145))
			{
				__LIB_4__::func_495(145);
				__LIB_4__::func_524(146);
				__LIB_10__::func_36(-276.3671f, 802.3903f, 117.9588f, "val_jail_int_walla", 145, 0, 1, 0, 0);
			}
			break;
		case 6:
			if (!__LIB_9__::func_922(143))
			{
				__LIB_4__::func_495(143);
				__LIB_4__::func_524(144);
				__LIB_10__::func_36(1353.237f, -1302.472f, 77.547f, "rho_sheriff_int_JBO1_01", 143, 0, 1, 0, 0);
				INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(uParam0->f_974, uParam0->f_975, true);
			}
			break;
	}
}

bool func_92(var uParam0)
{
	vector3 vVar0;
	vector3 vVar4;
	int iVar8;
	vVar0 = { func_226(uParam0->f_60) };
	vVar4 = { func_227(uParam0->f_60) };
	iVar8 = 60000;
	switch (iLocal_1191)
	{
		case 0:
			__LIB_6__::func_616(Global_35, joaat("MPC_HIDE_ACTION_GUNBELT_AND_SATCHEL"), 0);
			func_168();
			uParam0->f_42 = MISC::GET_GAME_TIMER();
			__LIB_1__::func_649(&iLocal_1191, 1);
			break;
		case 1:
			if (func_230(uParam0) || (uParam0->f_42 + iVar8) < MISC::GET_GAME_TIMER())
			{
				__LIB_1__::func_649(&iLocal_1191, 3);
			}
			break;
		case 3:
			func_175(iLocal_43, vVar0, 2, 1073741824 /* Float: 2f */);
			func_175(iLocal_44, vVar4, 2, 1073741824 /* Float: 2f */);
			if (!__LIB_9__::func_19(uParam0->f_60))
			{
				__LIB_9__::func_799(iLocal_43, vVar0, 5f, 0);
				__LIB_9__::func_799(iLocal_44, vVar4, 5f, 0);
			}
			if (func_232(uParam0))
			{
				if (PED::_0x0EE3F0D7FECCC54F())
				{
					__LIB_1__::func_649(&iLocal_1191, 4);
				}
			}
			break;
		case 4:
			if (func_233(uParam0))
			{
				if (func_234(uParam0))
				{
					if (__LIB_0__::func_272(iLocal_43, 0))
					{
						__LIB_2__::func_145(iLocal_43, 0);
					}
					if (__LIB_0__::func_272(iLocal_44, 0))
					{
						__LIB_2__::func_145(iLocal_44, 0);
					}
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_112()
{
	return bLocal_26;
}

bool func_115()
{
	if (!bLocal_26)
	{
		bLocal_26 = true;
		return true;
	}
	return false;
}

int func_117()
{
	return -683745558;
}

int func_128(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	*iParam1 = -1;
	if (!func_272())
	{
		return 0;
	}
	if (!func_273(iParam0, &iVar0, uParam2))
	{
		return 0;
	}
	if (func_274(iVar0))
	{
		return 0;
	}
	if (!func_275(iVar0))
	{
		return 0;
	}
	if (!func_276(iVar0))
	{
		return 0;
	}
	if (!func_277(&iVar0))
	{
		return 0;
	}
	*iParam1 = iVar0;
	return 1;
}

void func_137(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_16))
	{
		return;
	}
	switch (uParam0->f_970)
	{
		case 1:
		case 2:
		case 3:
			iLocal_16 = VOLUME::_CREATE_VOLUME_BOX(-268.8677f, 792.1881f, 118.7011f, 0f, 0f, 7.124719f, 35.4679f, 40.30593f, 9.127473f);
			break;
		case 4:
			iLocal_16 = VOLUME::_CREATE_VOLUME_BOX(-1799.767f, -355.932f, 164.8285f, 0f, 0f, 0f, 29.4004f, 39.85352f, 15.19435f);
			break;
		case 6:
			iLocal_16 = VOLUME::_CREATE_VOLUME_BOX(1354.038f, -1312.003f, 76.54549f, 0f, 0f, -20.45403f, 23.79081f, 16.56885f, 6.591243f);
			break;
	}
}

void func_142(var uParam0, int iParam1, char* sParam2, vector3 vParam3, int iParam6, vector3 vParam7, float fParam10, char* sParam11)
{
	if (uParam0->f_1000 < 4)
	{
		uParam0->f_868[uParam0->f_1000 /*20*/].f_1 = iParam1;
		uParam0->f_868[uParam0->f_1000 /*20*/].f_4 = { __LIB_3__::func_997(sParam2) };
		uParam0->f_868[uParam0->f_1000 /*20*/].f_12 = { vParam3 };
		uParam0->f_868[uParam0->f_1000 /*20*/].f_19 = iParam6;
		uParam0->f_868[uParam0->f_1000 /*20*/].f_15 = { vParam7 };
		uParam0->f_868[uParam0->f_1000 /*20*/].f_18 = fParam10;
		if (!MISC::IS_STRING_NULL(sParam11))
		{
			uParam0->f_868[uParam0->f_1000 /*20*/].f_8 = { __LIB_3__::func_997(sParam11) };
		}
		uParam0->f_1000++;
	}
}

void func_143(var uParam0, int iParam1, char* sParam2, vector3 vParam3, int iParam6, vector3 vParam7, float fParam10, char* sParam11)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	uParam0->f_950 = ENTITY::GET_ENTITY_MODEL(iParam1);
	uParam0->f_950.f_1 = iParam1;
	uParam0->f_950.f_3 = { __LIB_3__::func_997(sParam2) };
	uParam0->f_950.f_11 = { vParam3 };
	uParam0->f_950.f_18 = iParam6;
	uParam0->f_950.f_14 = { vParam7 };
	uParam0->f_950.f_17 = fParam10;
	if (!MISC::IS_STRING_NULL(sParam11))
	{
		uParam0->f_950.f_7 = { __LIB_3__::func_997(sParam11) };
	}
}

void func_144(var uParam0, int iParam1, char* sParam2, vector3 vParam3, int iParam6)
{
	if (uParam0->f_998 < 4)
	{
		uParam0->f_782[uParam0->f_998 /*11*/] = iParam1;
		uParam0->f_782[uParam0->f_998 /*11*/].f_2 = { __LIB_3__::func_997(sParam2) };
		uParam0->f_782[uParam0->f_998 /*11*/].f_6 = { vParam3 };
		uParam0->f_782[uParam0->f_998 /*11*/].f_9 = iParam6;
		uParam0->f_998++;
	}
}

void func_145(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_17))
	{
		return;
	}
	switch (uParam0->f_970)
	{
		case 1:
		case 2:
		case 3:
			iLocal_17 = __LIB_0__::func_559(76);
			break;
		case 4:
			iLocal_17 = __LIB_0__::func_559(26);
			break;
		case 6:
			iLocal_17 = __LIB_0__::func_559(105);
			break;
	}
}

bool func_151(var uParam0)
{
	uParam0->f_1004 = 0;
	if (!func_303(uParam0))
	{
		return false;
	}
	if (!func_304(uParam0))
	{
		return false;
	}
	if (!func_305(&(uParam0->f_950)))
	{
		return false;
	}
	if (!func_306(uParam0))
	{
		return false;
	}
	if (!func_307(uParam0))
	{
		return false;
	}
	if (!func_308(uParam0))
	{
		return false;
	}
	if (!func_309(uParam0))
	{
		return false;
	}
	return true;
}

void func_152(var uParam0)
{
	func_310(uParam0);
	func_311(uParam0);
	func_312(uParam0);
	func_313(uParam0);
	func_314(uParam0);
	func_315(uParam0);
	func_316(uParam0);
}

void func_154(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_973))
	{
		uParam0->f_4 = uParam0->f_973;
	}
}

void func_155(var uParam0)
{
	char* sVar0;
	sVar0 = func_319(uParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		__LIB_4__::func_741(uParam0, sVar0);
		__LIB_5__::func_516(uParam0, sVar0, 0);
	}
}

bool func_156(var uParam0)
{
	if (func_321(uParam0, &(uParam0->f_984), 1, 1))
	{
		return true;
	}
	return false;
}

void func_157(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 6:
			uParam0->f_975 = "rho_sheriff_int_explosion";
			uParam0->f_974 = INTERIOR::GET_INTERIOR_AT_COORDS(1353.237f, -1302.472f, 77.547f);
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_444) > 0.33f)
			{
				if (__LIB_9__::func_922(143))
				{
					__LIB_4__::func_495(144);
					__LIB_4__::func_524(143);
					__LIB_10__::func_36(1353.237f, -1302.472f, 77.547f, "rho_sheriff_int_JBO1_02", 144, 0, 1, 0, 0);
					INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(uParam0->f_974, uParam0->f_975, 0);
				}
			}
			break;
		case 2:
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_444) > 0.64f)
			{
				if (__LIB_9__::func_922(145))
				{
					__LIB_4__::func_495(146);
					__LIB_4__::func_524(145);
					__LIB_10__::func_36(-276.3671f, 802.3903f, 117.9588f, "val_jail_int_wallb", 146, 0, 1, 0, 0);
				}
			}
			break;
	}
}

bool func_158(var uParam0)
{
	switch (uParam0->f_971)
	{
		case 0:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_444) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_444, false))
				{
					ANIMSCENE::START_ANIM_SCENE(uParam0->f_444);
					uParam0->f_971 = 1;
				}
			}
			break;
		case 1:
			if (func_322(uParam0->f_970))
			{
				__LIB_5__::func_225(uParam0);
			}
			func_324(uParam0);
			POPULATION::_0xC6DCC2A3A8825C85(1);
			if (!ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_444))
			{
				if (func_325(uParam0))
				{
					__LIB_3__::func_319(uParam0->f_444);
					uParam0->f_971 = 3;
				}
			}
			else
			{
				uParam0->f_971 = 2;
			}
			break;
		case 2:
			CAM::DO_SCREEN_FADE_OUT(0);
			if (func_327(uParam0->f_970, uParam0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
				__LIB_4__::func_797(1);
				uParam0->f_971 = 3;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_159(var uParam0)
{
	func_329(uParam0);
	func_330(uParam0);
	func_331(uParam0);
	if (!func_40(uParam0->f_970))
	{
		func_80(uParam0);
		func_81(&(uParam0->f_950));
	}
	func_332(uParam0);
	func_333(uParam0);
}

void func_168()
{
	if (!func_339())
	{
		if (func_112())
		{
			__LIB_8__::func_331(1);
			func_341();
			WEAPON::_SET_PED_ALL_WEAPONS_VISIBILITY(Global_35, true);
		}
	}
}

void func_170(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_973))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_973);
	}
}

float func_172(var uParam0)
{
	switch (*uParam0)
	{
		case 1:
		case 2:
			return 200f;
		case 4:
			return 200f;
		case 6:
			return 200f;
	}
	return 200f;
}

struct<4> func_173(var uParam0, int iParam1)
{
	struct<4> Var0;
	switch (*uParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					Var0 = { -272.4783f, 809.284f, 118.3711f };
					Var0.f_3 = 103.992f;
					break;
				case 1:
					Var0 = { -274.1379f, 808.532f, 118.3723f };
					Var0.f_3 = 87.475f;
					break;
				case 2:
					Var0 = { -309.8212f, 780.2781f, 117.7613f };
					Var0.f_3 = 7.6015f;
					break;
				case 3:
					Var0 = { -320.2737f, 799.5449f, 116.8817f };
					Var0.f_3 = 279.7465f;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					Var0 = { -276.9078f, 809.5782f, 118.3781f };
					Var0.f_3 = 287.1772f;
					break;
				case 1:
					Var0 = { -309.8212f, 780.2781f, 117.7613f };
					Var0.f_3 = 7.6015f;
					break;
				case 2:
					Var0 = { -292.2865f, 747.412f, 117.2355f };
					Var0.f_3 = 156.9073f;
					break;
				case 3:
					Var0 = { -313.3065f, 726.3862f, 119.6276f };
					Var0.f_3 = 34.53f;
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					Var0 = { -1812.424f, -352.8654f, 160.4154f };
					Var0.f_3 = 56.8545f;
					break;
				case 1:
					Var0 = { -1815.833f, -353.5223f, 160.4529f };
					Var0.f_3 = 316.3524f;
					break;
				case 2:
					Var0 = { -1805.574f, -426.7131f, 157.7882f };
					Var0.f_3 = 347.183f;
					break;
				case 3:
					Var0 = { -1775.714f, -438.922f, 153.9937f };
					Var0.f_3 = 217.3517f;
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					Var0 = { 1358.375f, -1303.417f, 76.7606f };
					Var0.f_3 = 196.0932f;
					break;
				case 1:
					Var0 = { 1330.127f, -1367.839f, 79.504f };
					Var0.f_3 = 72.4056f;
					break;
				case 2:
					Var0 = { 1362.746f, -1268.791f, 76.9478f };
					Var0.f_3 = 162.3188f;
					break;
				case 3:
					Var0 = { 1238.99f, -1309.599f, 75.9094f };
					Var0.f_3 = 113.614f;
					break;
			}
			break;
		default:
			Var0 = { 0f, 0f, 0f };
			Var0.f_3 = 0f;
			break;
	}
	return Var0;
}

void func_175(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_349(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

int func_176(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1000)
	{
		if (uParam0->f_868[iVar0 /*20*/].f_1 == iParam1)
		{
			return uParam0->f_868[iVar0 /*20*/].f_2;
		}
		iVar0++;
	}
	return 0;
}

void func_178(int iParam0)
{
	if (PED::DOES_GROUP_EXIST(iLocal_14) && ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		func_351(&iParam0, &iLocal_14, 0, 1, 1, 1, 0);
	}
}

int func_179(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1000)
	{
		if (uParam0->f_868[iVar0 /*20*/].f_1 == iParam1)
		{
			return uParam0->f_868[iVar0 /*20*/].f_3;
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_180(var uParam0)
{
	vector3 vVar0[24];
	switch (uParam0->f_970)
	{
		case 1:
			StringCopy(&cVar0, "JBO3_COMEON", 24);
			break;
		case 2:
			StringCopy(&cVar0, "JBO7_COMEON", 24);
			break;
		case 4:
			StringCopy(&cVar0, "JBO5_COMEON", 24);
			break;
		case 6:
			StringCopy(&cVar0, "JBO1_COMEON", 24);
			break;
		default:
			StringCopy(&cVar0, "", 24);
			break;
	}
	return cVar0;
}

void func_183()
{
	POPULATION::_0xF45E46DEECF7DF6E(6144, 0, 0, -1, -1);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::_0xAB0D553FE20A6E25(0.25f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.25f);
}

bool func_185(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 4:
			if (__LIB_1__::func_348(Global_35, func_176(uParam0, 1)) < 10f && __LIB_1__::func_348(Global_35, func_176(uParam0, 7)) < 10f)
			{
				return true;
			}
			break;
		case 2:
			if (__LIB_1__::func_348(Global_35, func_176(uParam0, 0)) < 10f && __LIB_1__::func_348(Global_35, func_176(uParam0, 7)) < 10f)
			{
				return true;
			}
			break;
		case 6:
			if (__LIB_1__::func_348(Global_35, func_176(uParam0, 0)) < 10f)
			{
				return true;
			}
			break;
	}
	return false;
}

Vector3 func_186(var uParam0)
{
	vector3 vVar0[24];
	switch (uParam0->f_970)
	{
		case 1:
			StringCopy(&cVar0, "JBO3_LOSTTHEM", 24);
			break;
		case 2:
			StringCopy(&cVar0, "JBO7_LOSTTHEM", 24);
			break;
		case 4:
			StringCopy(&cVar0, "JBO5_LOSTTHEM", 24);
			break;
		case 6:
			StringCopy(&cVar0, "JBO1_LOSTTHEM", 24);
			break;
		default:
			StringCopy(&cVar0, "", 24);
			break;
	}
	return cVar0;
}

Vector3 func_187(var uParam0)
{
	vector3 vVar0[24];
	switch (uParam0->f_970)
	{
		case 7:
			StringCopy(&cVar0, "JBO4_HBANT", 24);
			break;
		case 10:
			StringCopy(&cVar0, "JBO8_HBANT", 24);
			break;
		case 6:
			StringCopy(&cVar0, "JBO1_BANT", 24);
			break;
		case 1:
			StringCopy(&cVar0, "JBO3_BANT", 24);
			break;
		case 2:
			StringCopy(&cVar0, "JBO7_BANT", 24);
			break;
		case 4:
			StringCopy(&cVar0, "JBO5_SPLIT", 24);
			break;
		default:
			StringCopy(&cVar0, "", 24);
			break;
	}
	return cVar0;
}

bool func_191(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1000)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_868[iVar0 /*20*/].f_2))
		{
			if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(uParam0->f_868[iVar0 /*20*/].f_2, true))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

int func_192(var uParam0, int iParam1)
{
	func_362(uParam0, iParam1);
	uParam0->f_26 = 0;
	return 0;
}

bool func_194(var uParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_25, false))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_25, true) && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_25, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_25);
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_25, true, false))
			{
				CAM::_0xE296208C273BD7F0(0, 0, 0, 17, 1, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_25, "ARTHUR", Global_35, 0);
				CAM::DO_SCREEN_FADE_IN(240);
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_25);
				return true;
			}
		}
	}
	return false;
}

bool func_195(var uParam0)
{
	CAM::_0xE296208C273BD7F0(0, 0, 0, 17, 1, 0);
	if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_25) > 0.85f)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(500);
			return true;
		}
	}
	return false;
}

void func_205(var uParam0)
{
	if (__LIB_0__::func_699(uParam0->f_1))
	{
		__LIB_1__::func_774(uParam0->f_1, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	}
}

void func_206(var uParam0)
{
	if (__LIB_0__::func_211(uParam0->f_1))
	{
		__LIB_1__::func_463(uParam0->f_3, uParam0->f_1, 1, 0, 0);
	}
}

struct<4> func_226(int iParam0)
{
	struct<4> Var0;
	bool bVar4;
	Var0 = { 0f, 0f, 0f };
	Var0.f_3 = 0f;
	if (!__LIB_0__::func_20(iParam0))
	{
		return Var0;
	}
	if (__LIB_9__::func_19(iParam0))
	{
		bVar4 = true;
	}
	switch (iParam0)
	{
		case 78:
			if (!bVar4)
			{
				Var0 = { 2918.7f, 1321.6f, 44.3f };
				Var0.f_3 = 69.27f;
			}
			else
			{
				Var0 = { 2821.36f, 1121.52f, 48.54f };
				Var0.f_3 = 79.23f;
			}
			__LIB_0__::func_634(&Var0, 50, 10, 0);
			return Var0;
		case 105:
			if (!bVar4)
			{
				Var0 = { 1344.9f, -1307.3f, 76.6f };
				Var0.f_3 = 343.68f;
			}
			else
			{
				Var0 = { 1155.33f, -1155.41f, 71.29f };
				Var0.f_3 = 156.78f;
			}
			__LIB_0__::func_634(&Var0, 50, 10, 0);
			return Var0;
		case 26:
			if (!bVar4)
			{
				Var0 = { -1805.89f, -344.45f, 164.65f };
				Var0.f_3 = 99f;
			}
			else
			{
				Var0 = { -1706.68f, -450.12f, 150f };
				Var0.f_3 = 295.67f;
			}
			__LIB_0__::func_634(&Var0, 50, 10, 0);
			return Var0;
		case 38:
			if (!bVar4)
			{
				Var0 = { -751.16f, -1267.38f, 43.32f };
				Var0.f_3 = 115.96f;
			}
			else
			{
				Var0 = { -1065.66f, -1211.78f, 63.78f };
				Var0.f_3 = 178.78f;
			}
			__LIB_0__::func_634(&Var0, 50, 10, 0);
			return Var0;
		case 76:
			if (!bVar4)
			{
				Var0 = { -279.45f, 789.98f, 118.63f };
				Var0.f_3 = 165.4f;
			}
			else
			{
				Var0 = { -108f, 586.45f, 114.08f };
				Var0.f_3 = 164.78f;
			}
			__LIB_0__::func_634(&Var0, 50, 10, 0);
			return Var0;
		case 5:
			if (!bVar4)
			{
				Var0 = { 2525.45f, -1310.37f, 49.07f };
				Var0.f_3 = 266.56f;
			}
			else
			{
				Var0 = { 2147.36f, -1336.09f, 42.96f };
				Var0.f_3 = 352f;
			}
			__LIB_0__::func_634(&Var0, 50, 10, 0);
			return Var0;
		case 115:
			Var0 = { -5525.004f, -2923.18f, -2.0688f };
			Var0.f_3 = 114.01f;
			__LIB_0__::func_634(&Var0, 50, 10, 0);
			return Var0;
	}
	return Var0;
}

struct<4> func_227(int iParam0)
{
	struct<4> Var0;
	int iVar4;
	Var0 = { 0f, 0f, 0f };
	Var0.f_3 = 0f;
	if (!__LIB_0__::func_20(iParam0))
	{
		return Var0;
	}
	iVar4 = __LIB_0__::func_317();
	__LIB_10__::func_32(iVar4, &Var0, &(Var0.f_3));
	return Var0;
}

bool func_230(var uParam0)
{
	struct<4> Var0;
	struct<4> Var4;
	int iVar8;
	int iVar9;
	Var0 = { func_226(uParam0->f_60) };
	Var4 = { func_227(uParam0->f_60) };
	iVar8 = 0;
	iVar9 = 0;
	if (__LIB_1__::func_105(0))
	{
		Local_1194.f_10 = 0;
		Local_1194 = 1;
		Local_1194.f_5 = 1;
		Local_1194.f_1 = 1;
		Local_1194.f_6 = { Var0 };
		Local_1194.f_9 = Var0.f_3;
		iLocal_43 = func_409(&iLocal_1193, &Local_1194);
		if (iLocal_1193 == 2)
		{
			iVar8 = 1;
		}
	}
	else
	{
		iVar8 = 1;
	}
	if (__LIB_1__::func_105(1))
	{
		Local_1206.f_10 = 1;
		Local_1206 = 1;
		Local_1206.f_1 = 1;
		Local_1206.f_5 = 1;
		Local_1206.f_6 = { Var4 };
		Local_1206.f_9 = Var4.f_3;
		iLocal_44 = func_409(&iLocal_1205, &Local_1206);
		if (iLocal_1205 == 2)
		{
			iVar9 = 1;
		}
	}
	else
	{
		iVar9 = 1;
	}
	if (iVar8 && iVar9)
	{
		return true;
	}
	return false;
}

bool func_232(var uParam0)
{
	vector3 vVar0;
	switch (iLocal_1190)
	{
		case 0:
			switch (uParam0->f_60)
			{
				case 76:
					vVar0 = { -275.5043f, 805f, 118.3801f };
					break;
				case 78:
					vVar0 = { 2910.3f, 1310.8f, 44.4f };
					break;
				case 105:
					vVar0 = { 1359.6f, -1304.5f, 77.3f };
					break;
				case 38:
					vVar0 = { -758.5f, -1269.2f, 43.8f };
					break;
				case 5:
					vVar0 = { 2514.3f, -1308.8f, 48.7f };
					break;
				case 26:
					vVar0 = { -1808.2f, -350.1f, 164.4f };
					break;
				case 115:
					vVar0 = { -5528.724f, -2929.566f, -1.3609f };
					break;
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, true, true);
			if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
			{
				PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), vVar0, uParam0->f_33, false, true, false, false);
			}
			else
			{
				uParam0->f_41 = MISC::GET_GAME_TIMER();
				__LIB_1__::func_649(&iLocal_1190, 1);
			}
			break;
		case 1:
			if (!PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::PLAYER_ID()))
			{
				if (uParam0->f_41 + 6000 < MISC::GET_GAME_TIMER())
				{
					PLAYER::STOP_PLAYER_TELEPORT();
				}
			}
			else
			{
				uParam0->f_41 = MISC::GET_GAME_TIMER();
				__LIB_1__::func_649(&iLocal_1190, 2);
			}
			break;
		case 2:
			__LIB_4__::func_845(1, 0);
			__LIB_4__::func_839();
			switch (__LIB_1__::func_972(__LIB_0__::func_12()))
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 7:
				case 8:
					if (!__LIB_1__::func_220(__LIB_0__::func_12()) && uParam0->f_41 + 6000 > MISC::GET_GAME_TIMER())
					{
					}
					else
					{
						STREAMING::SET_FOCUS_POS_AND_VEL(uParam0->f_27, 0f, 0f, 0f);
						__LIB_1__::func_649(&iLocal_1190, 3);
					}
					break;
			}
			break;
		case 3:
			if (!STREAMING::_0xCF45DF50C7775F2A())
			{
				STREAMING::_0x387AD749E3B69B70(uParam0->f_27, BUILTIN::COS((uParam0->f_33 + 90f)), BUILTIN::SIN((uParam0->f_33 + 90f)), 0f, 500f, 4);
				uParam0->f_41 = MISC::GET_GAME_TIMER();
			}
			else if (!STREAMING::_0x0909F71B5C070797())
			{
				if (uParam0->f_41 + 6000 < MISC::GET_GAME_TIMER())
				{
					__LIB_1__::func_649(&iLocal_1190, 4);
				}
			}
			else
			{
				__LIB_1__::func_649(&iLocal_1190, 4);
			}
			break;
		case 4:
			if (STREAMING::_0xCF45DF50C7775F2A())
			{
				STREAMING::CLEAR_FOCUS();
				STREAMING::_0x5A8B01199C3E79C3();
			}
			return true;
	}
	return false;
}

bool func_233(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		CAM::DO_SCREEN_FADE_IN(240);
		return true;
	}
	else
	{
		switch (uParam0->f_60)
		{
			case 76:
				vVar0 = { -260.7436f, 793.9495f, 121.5746f };
				vVar3 = { -2.9074f, 0f, 80.7498f };
				fVar6 = 37.7527f;
				break;
			case 105:
				vVar0 = { 1365.147f, -1320.555f, 79.1558f };
				vVar3 = { -3.2928f, 0f, 44.6132f };
				fVar6 = 37.7527f;
				break;
			case 78:
				vVar0 = { 2911.884f, 1297.416f, 46.0857f };
				vVar3 = { -0.2822f, 0f, -12.0966f };
				fVar6 = 37.7527f;
				break;
			case 38:
				vVar0 = { -745.5821f, -1255.027f, 46.204f };
				vVar3 = { -3.8931f, 0f, 158.8413f };
				fVar6 = 37.7527f;
				break;
			case 26:
				vVar0 = { -1794.439f, -342.4006f, 166.2039f };
				vVar3 = { -2.2206f, 0f, 146.2695f };
				fVar6 = 37.7527f;
				break;
			case 5:
				vVar0 = { 2526.214f, -1321.603f, 51.8709f };
				vVar3 = { -1.1109f, 0f, 21.3832f };
				fVar6 = 37.7527f;
				break;
			case 115:
				vVar0 = { -5530.495f, -2941.743f, 0.393f };
				vVar3 = { -6.1555f, 0f, -32.786f };
				fVar6 = 51.282f;
				break;
		}
		*uParam0 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vVar0, vVar3, fVar6, true, 2);
	}
	return false;
}

bool func_234(var uParam0)
{
	vector3 vVar0;
	if (!__LIB_0__::func_75(&(uParam0->f_52)))
	{
		__LIB_1__::func_283(&(uParam0->f_52), 0);
	}
	switch (uParam0->f_60)
	{
		case 76:
			vVar0 = { -274.6761f, 797.9018f, 118.9569f };
			break;
		case 105:
			vVar0 = { 1357.729f, -1311.525f, 76.9169f };
			break;
		case 78:
			vVar0 = { 2914.548f, 1309.378f, 44.3854f };
			break;
		case 38:
			vVar0 = { -752.4509f, -1269.742f, 43.3936f };
			break;
		case 26:
			vVar0 = { -1803.195f, -352.7251f, 164.1432f };
			break;
		case 5:
			vVar0 = { 2519.256f, -1308.59f, 48.9806f };
			break;
		case 115:
			vVar0 = { -5526.707f, -2933.721f, -1.9662f };
			break;
	}
	if (!uParam0->f_57)
	{
		if (TASK::IS_PED_STILL(Global_35))
		{
			uParam0->f_57 = 1;
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, vVar0, 1f, 20000, 0.25f, 0, 40000f);
		}
	}
	if (__LIB_0__::func_175(Global_36, vVar0, 1f, 0) || __LIB_0__::func_265(&(uParam0->f_52)) >= 10f)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		func_419(uParam0);
		return true;
	}
	return false;
}

bool func_272()
{
	if (!MISC::IS_BIT_SET(Global_40.f_11182, 0))
	{
		MISC::SET_BIT(&(Global_40.f_11182), 0);
		return false;
	}
	return true;
}

bool func_273(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	*iParam1 = -1;
	iVar0 = 3000;
	iVar1 = 5000;
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	if (!func_469(iParam0))
	{
		return false;
	}
	if (uParam2->f_1002 < iVar0)
	{
	}
	switch (iParam0)
	{
		case 76:
			if (uParam2->f_1002 >= iVar0 && !MISC::IS_BIT_SET(Global_40.f_11182, 3))
			{
				*iParam1 = 3;
				return true;
			}
			else if (uParam2->f_1002 >= iVar0 && !MISC::IS_BIT_SET(Global_40.f_11182, 1))
			{
				*iParam1 = 1;
				return true;
			}
			else if (uParam2->f_1002 >= iVar1 && !MISC::IS_BIT_SET(Global_40.f_11182, 2))
			{
				*iParam1 = 2;
				return true;
			}
			break;
		case 26:
			if (uParam2->f_1002 >= iVar0 && ENTITY::GET_ENTITY_MODEL(Global_35) == joaat("PLAYER_ZERO"))
			{
				*iParam1 = 4;
				return true;
			}
			else if (uParam2->f_1002 >= iVar0)
			{
				*iParam1 = 5;
				return true;
			}
			break;
		case 105:
			if (uParam2->f_1002 >= iVar1)
			{
				*iParam1 = 6;
				return true;
			}
			break;
		case 78:
			if (uParam2->f_1002 >= iVar0 && !MISC::IS_BIT_SET(Global_40.f_11182, 7))
			{
				*iParam1 = 7;
				return true;
			}
			else if (uParam2->f_1002 >= iVar0 && !MISC::IS_BIT_SET(Global_40.f_11182, 8))
			{
				*iParam1 = 8;
				return true;
			}
			break;
		case 38:
			if (uParam2->f_1002 >= iVar0)
			{
				*iParam1 = 9;
				return true;
			}
			break;
		case 5:
			if (uParam2->f_1002 >= iVar0 && ENTITY::GET_ENTITY_MODEL(Global_35) == joaat("PLAYER_ZERO"))
			{
				*iParam1 = 10;
				return true;
			}
			else if (uParam2->f_1002 >= iVar0)
			{
				*iParam1 = 11;
				return true;
			}
			break;
	}
	return false;
}

bool func_274(int iParam0)
{
	if (!__LIB_9__::func_512(iParam0))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_40.f_11182, iParam0);
}

bool func_275(int iParam0)
{
	if (!__LIB_9__::func_512(iParam0))
	{
		return false;
	}
	if (!func_470())
	{
		return false;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
			if (func_471(7) && func_471(0))
			{
				return true;
			}
			break;
		case 3:
			if (func_471(0))
			{
				return true;
			}
			break;
		case 4:
			if (func_471(7) && func_471(1))
			{
				return true;
			}
			break;
		case 5:
			return true;
		case 6:
			if (func_471(0))
			{
				return true;
			}
			break;
		case 7:
			if (func_471(5))
			{
				return true;
			}
			break;
		case 8:
			if (func_471(7))
			{
				return true;
			}
			break;
		case 9:
			if (func_471(13))
			{
				return true;
			}
			break;
		case 10:
			if (func_471(5))
			{
				return true;
			}
			break;
		case 11:
			return true;
	}
	return false;
}

bool func_276(int iParam0)
{
	int iVar0;
	if (!__LIB_9__::func_512(iParam0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(Global_35);
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
			return func_472(iVar0);
		case 4:
			return func_472(iVar0);
		case 5:
			return !func_472(iVar0);
		case 6:
			return func_472(iVar0);
		case 7:
		case 8:
			return func_472(iVar0);
		case 9:
			return !func_472(iVar0);
		case 10:
			return func_472(iVar0);
		case 11:
			return !func_472(iVar0);
	}
	return false;
}

bool func_277(int iParam0)
{
	if (!MISC::IS_BIT_SET(Global_40.f_11182, 12) && !MISC::IS_BIT_SET(Global_40.f_11182, *iParam0))
	{
		MISC::SET_BIT(&(Global_40.f_11182), 12);
		return true;
	}
	if (MISC::IS_BIT_SET(Global_40.f_11182, *iParam0) && !MISC::IS_BIT_SET(Global_40.f_11182, 12))
	{
		MISC::SET_BIT(&(Global_40.f_11182), 12);
		return false;
	}
	if ((MISC::IS_BIT_SET(Global_40.f_11182, *iParam0) && MISC::IS_BIT_SET(Global_40.f_11182, 12)) && !MISC::IS_BIT_SET(Global_40.f_11182, 13))
	{
		MISC::SET_BIT(&(Global_40.f_11182), 13);
		return false;
	}
	if (!MISC::IS_BIT_SET(Global_40.f_11182, 13) && MISC::IS_BIT_SET(Global_40.f_11182, 12))
	{
		MISC::SET_BIT(&(Global_40.f_11182), 13);
		return false;
	}
	if (MISC::IS_BIT_SET(Global_40.f_11182, 12) && MISC::IS_BIT_SET(Global_40.f_11182, 13))
	{
		MISC::CLEAR_BIT(&(Global_40.f_11182), 13);
		MISC::CLEAR_BIT(&(Global_40.f_11182), 12);
		return false;
	}
	return true;
}

bool func_303(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1000)
	{
		if (!func_484(&(uParam0->f_868[iVar0 /*20*/])))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_304(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1000)
	{
		if (uParam0->f_868[iVar0 /*20*/].f_19)
		{
			if (!func_485(&(uParam0->f_868[iVar0 /*20*/])))
			{
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_305(var uParam0)
{
	int iVar0;
	struct<11> Var1;
	if (!uParam0->f_18)
	{
		return true;
	}
	if (__LIB_0__::func_272(uParam0->f_2, 0))
	{
		return true;
	}
	else
	{
		Var1.f_10 = 7;
		Var1.f_1 = 1;
		Var1 = 1;
		Var1.f_5 = 1;
		Var1.f_6 = { uParam0->f_14 };
		uParam0->f_2 = func_409(&iVar0, &Var1);
		if (iVar0 == 1)
		{
			return true;
		}
		func_349(uParam0->f_2, uParam0->f_14, uParam0->f_17, 2, 1073741824 /* Float: 2f */);
		TASK::TASK_STAND_STILL(uParam0->f_2, -1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_2, true);
	}
	return false;
}

bool func_306(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_999)
	{
		if (!func_486(&(uParam0->f_827[iVar0 /*10*/])))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_307(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_998)
	{
		if (!func_487(&(uParam0->f_782[iVar0 /*11*/]), &(uParam0->f_1004), uParam0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_308(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_996)
	{
		if (!func_488(&(uParam0->f_530[iVar0 /*10*/]), &(uParam0->f_1004), uParam0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_309(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_997)
	{
		if (!func_489(&(uParam0->f_731[iVar0 /*10*/]), &(uParam0->f_1004)))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

void func_310(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1000)
	{
		func_490(uParam0, uParam0->f_868[iVar0 /*20*/].f_2, &(uParam0->f_868[iVar0 /*20*/].f_4), 0, 0, 0);
		if (uParam0->f_868[iVar0 /*20*/].f_19 && !MISC::IS_STRING_NULL_OR_EMPTY(__LIB_0__::func_67(uParam0->f_868[iVar0 /*20*/].f_8)))
		{
			func_490(uParam0, uParam0->f_868[iVar0 /*20*/].f_3, &(uParam0->f_868[iVar0 /*20*/].f_8), 0, 0, 0);
		}
		iVar0++;
	}
}

void func_311(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_999)
	{
		func_490(uParam0, uParam0->f_827[iVar0 /*10*/].f_2, &(uParam0->f_827[iVar0 /*10*/].f_3), 0, 0, 0);
		iVar0++;
	}
}

void func_312(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_998)
	{
		func_490(uParam0, uParam0->f_782[iVar0 /*11*/].f_1, &(uParam0->f_782[iVar0 /*11*/].f_2), 0, 0, 0);
		iVar0++;
	}
}

void func_313(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_996)
	{
		__LIB_5__::func_221(uParam0, uParam0->f_530[iVar0 /*10*/].f_1, &(uParam0->f_530[iVar0 /*10*/].f_2), 0, 0, 0);
		iVar0++;
	}
}

void func_314(var uParam0)
{
	func_490(uParam0, uParam0->f_950.f_1, &(uParam0->f_950.f_3), 0, 0, 0);
}

void func_315(var uParam0)
{
	if (uParam0->f_950.f_18 && !MISC::IS_STRING_NULL_OR_EMPTY(__LIB_0__::func_67(uParam0->f_950.f_7)))
	{
		func_490(uParam0, uParam0->f_950.f_2, &(uParam0->f_950.f_7), 0, 0, 0);
	}
}

void func_316(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_997)
	{
		__LIB_5__::func_221(uParam0, uParam0->f_731[iVar0 /*10*/].f_1, &(uParam0->f_731[iVar0 /*10*/].f_2), 0, 0, 0);
		iVar0++;
	}
}

char* func_319(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 10:
			return "PL1_Hosea_Left";
	}
	return "";
}

bool func_321(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar3;
	struct<8> Var4;
	int iVar12;
	bool bVar13;
	int iVar14;
	struct<8> Var15;
	if (bParam3)
	{
		uParam0->f_511++;
		if (uParam0->f_511 < 10)
		{
			return (__LIB_0__::func_84(uParam0, 256) && !__LIB_0__::func_84(uParam0, 4194304));
		}
		uParam0->f_511 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	__LIB_4__::func_779(uParam0, sParam1);
	if (!__LIB_0__::func_84(uParam0, 64))
	{
		if (!__LIB_0__::func_86(__LIB_0__::func_85(uParam0)))
		{
			__LIB_0__::func_88(uParam0, 64);
		}
		else
		{
			vVar0 = { __LIB_5__::func_207(uParam0) };
			if (!__LIB_0__::func_86(vVar0))
			{
				__LIB_0__::func_487(uParam0, vVar0);
			}
		}
		return false;
	}
	fVar3 = __LIB_0__::func_94(Global_35, __LIB_0__::func_85(uParam0), 1);
	if (__LIB_0__::func_84(uParam0, 128) || __LIB_0__::func_84(uParam0, 256))
	{
		if ((fVar3 >= __LIB_4__::func_743(uParam0) && !bParam2) || !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_444))
		{
			if (uParam0->f_529)
			{
				__LIB_1__::func_436();
				uParam0->f_529 = 0;
			}
			__LIB_4__::func_744(uParam0);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_444))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_444);
			}
			__LIB_5__::func_186(uParam0);
			__LIB_4__::func_733(uParam0, 128, 1);
			__LIB_4__::func_733(uParam0, 256, 1);
			__LIB_4__::func_733(uParam0, 4096, 1);
			__LIB_4__::func_733(uParam0, 32768, 1);
			__LIB_4__::func_733(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= __LIB_4__::func_745(uParam0) || bParam2)
	{
		if (!__LIB_0__::func_84(uParam0, 128))
		{
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_444))
			{
				if (__LIB_4__::func_745(uParam0) >= __LIB_4__::func_743(uParam0))
				{
				}
				Var4 = { __LIB_4__::func_746(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					__LIB_5__::func_187(uParam0);
				}
				Var4 = { __LIB_4__::func_746(uParam0) };
				iVar12 = 256;
				if (!__LIB_0__::func_84(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_444 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_440), iVar12, &Var4, false, true);
				__LIB_1__::func_737(uParam0, 0, 0, 0, 0);
				__LIB_0__::func_88(uParam0, 128);
			}
		}
	}
	if (__LIB_0__::func_84(uParam0, 128))
	{
		if (__LIB_0__::func_84(uParam0, 256) && !__LIB_0__::func_84(uParam0, 4194304))
		{
			return true;
		}
		__LIB_5__::func_412(uParam0);
		if (!uParam0->f_529)
		{
			if (__LIB_0__::func_95())
			{
				__LIB_1__::func_36(4096);
				uParam0->f_529 = 1;
			}
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
		{
			bVar13 = true;
			Var15 = { __LIB_5__::func_185(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_462[iVar14 /*9*/])))
				{
					if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_462[iVar14 /*9*/]), &Var15))
					{
						if (!uParam0->f_462[iVar14 /*9*/].f_8)
						{
							uParam0->f_462[iVar14 /*9*/].f_8 = 1;
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_444, &(uParam0->f_462[iVar14 /*9*/]));
							bVar13 = false;
						}
						else if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_444, &(uParam0->f_462[iVar14 /*9*/])))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!__LIB_0__::func_84(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_444, &Var15))
				{
					if (!__LIB_0__::func_84(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_444, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_444, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_444, &Var15))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_444, &Var15);
						}
						__LIB_0__::func_88(uParam0, 16777216);
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_444, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return false;
			}
			__LIB_0__::func_88(uParam0, 256);
			__LIB_4__::func_733(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

bool func_322(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 7:
		case 10:
			return true;
	}
	return false;
}

void func_324(var uParam0)
{
	float fVar0;
	switch (uParam0->f_970)
	{
		case 1:
			fVar0 = 0.85f;
			break;
		case 2:
			fVar0 = 0.75f;
			break;
		case 3:
			fVar0 = 0.67f;
			break;
		case 4:
			fVar0 = 0.84f;
			break;
		case 5:
			fVar0 = 0.77f;
			break;
		case 6:
			fVar0 = 0.85f;
			break;
		case 7:
			fVar0 = 0.69f;
			break;
		case 8:
			fVar0 = 0.71f;
			break;
		case 9:
			fVar0 = 0.57f;
			break;
		case 10:
			fVar0 = 0.72f;
			break;
		case 11:
			fVar0 = 0.88f;
			break;
	}
	if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_444) > fVar0)
	{
		__LIB_6__::func_616(Global_35, joaat("MPC_HIDE_ACTION_GUNBELT_AND_SATCHEL"), 0);
		func_54();
	}
}

bool func_325(var uParam0)
{
	int iVar0;
	iVar0 = 1;
	switch (uParam0->f_970)
	{
		case 9:
			if (__LIB_19__::func_171(uParam0, Global_35, 0, 0, 1, 1))
			{
				__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
				return true;
			}
			break;
		case 10:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
			if (__LIB_19__::func_171(uParam0, Global_35, 0, 0, 1, 1))
			{
				__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
				return true;
			}
			break;
		case 11:
			if (__LIB_19__::func_171(uParam0, Global_35, 0, 0, 1, 1))
			{
				__LIB_0__::func_569(-1415276238, 2000, 0, 1, 1, 0, 0, 0);
				return true;
			}
			break;
		case 3:
			if (__LIB_19__::func_171(uParam0, Global_35, 0, 0, 1, 1))
			{
				__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
				return true;
			}
			break;
		case 5:
			if (__LIB_19__::func_171(uParam0, Global_35, 0, 0, 1, 1))
			{
				__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 1000, 0, 1, 1, 0, 0, 0);
				return true;
			}
			break;
		case 7:
			if (__LIB_19__::func_171(uParam0, Global_35, 0, 0, 1, 1))
			{
				__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
				return true;
			}
			break;
		case 8:
			if (__LIB_19__::func_171(uParam0, Global_35, 0, 0, 1, 1))
			{
				return true;
			}
			break;
		case 4:
			if (__LIB_19__::func_171(uParam0, Global_35, 0, 0, 1, 1))
			{
				__LIB_0__::func_569(joaat("MOTIONSTATE_RUN"), 2000, 0, 1, 0, -152.8f, 0, 0);
				return true;
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_444) > 0.96f)
			{
				if (iVar0 == 1)
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_444, func_525(1), func_176(uParam0, 1));
					__LIB_1__::func_562(func_176(uParam0, 1), func_179(uParam0, 1), 0, 2f, 20000);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_444, func_525(7), func_176(uParam0, 7));
					__LIB_1__::func_562(func_176(uParam0, 7), func_179(uParam0, 7), 0, 2f, 20000);
					iVar0++;
				}
			}
			if (ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				return true;
			}
			break;
		case 1:
			if (__LIB_19__::func_171(uParam0, Global_35, 0, 0, 1, 1))
			{
				__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 1000, 0, 1, 0, -96.63f, 0, 0);
				return true;
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_444) > 0.96f)
			{
				if (iVar0 == 1)
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_444, func_525(0), func_176(uParam0, 0));
					__LIB_1__::func_562(func_176(uParam0, 0), func_179(uParam0, 0), 0, 2f, 20000);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_444, func_525(7), func_176(uParam0, 7));
					__LIB_1__::func_562(func_176(uParam0, 7), func_179(uParam0, 7), 0, 2f, 20000);
					iVar0++;
				}
			}
			if (ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				return true;
			}
			break;
		case 2:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
			if (__LIB_19__::func_171(uParam0, Global_35, 0, 0, 1, 1))
			{
				return true;
			}
			break;
		case 6:
			if (__LIB_19__::func_171(uParam0, Global_35, 0, 0, 1, 1))
			{
				return true;
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_444) > 0.935f)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_444, "DUTCH", func_176(uParam0, 0));
				__LIB_1__::func_562(func_176(uParam0, 0), func_179(uParam0, 0), 0, 1.5f, 20000);
			}
			break;
	}
	return false;
}

bool func_327(int iParam0, var uParam1)
{
	vector3 vVar0;
	float fVar3;
	switch (iParam0)
	{
		case 7:
			vVar0 = { 2916.061f, 1311.538f, 44.2142f };
			fVar3 = -54.69f;
			break;
		case 10:
			vVar0 = { 2518.293f, -1305.46f, 48.9726f };
			fVar3 = -8.52f;
			break;
		case 3:
			vVar0 = { -292.2816f, 800.4503f, 119.2814f };
			fVar3 = 96.96f;
			break;
	}
	switch (uParam1->f_972)
	{
		case 0:
			PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), vVar0, fVar3, false, true, false, false);
			uParam1->f_972 = 1;
			break;
		case 1:
			if (PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::PLAYER_ID()))
			{
				uParam1->f_972 = 2;
			}
			break;
		case 2:
			if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
			{
				return true;
			}
			break;
	}
	return false;
}

void func_329(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_998)
	{
		if (uParam0->f_782[iVar0 /*11*/].f_10)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_782[iVar0 /*11*/]);
		}
		iVar0++;
	}
}

void func_330(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_996)
	{
		if (uParam0->f_530[iVar0 /*10*/].f_9)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_530[iVar0 /*10*/]);
		}
		iVar0++;
	}
}

void func_331(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_997)
	{
		if (uParam0->f_731[iVar0 /*10*/].f_9)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(WEAPON::_GET_WEAPONTYPE_MODEL(uParam0->f_731[iVar0 /*10*/]));
		}
		iVar0++;
	}
}

void func_332(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_999)
	{
		func_526(&(uParam0->f_827[iVar0 /*10*/]));
		iVar0++;
	}
}

void func_333(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_996)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_530[iVar0 /*10*/].f_1) && uParam0->f_530[iVar0 /*10*/].f_9)
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_530[iVar0 /*10*/].f_1));
		}
		iVar0++;
	}
}

bool func_339()
{
	return iLocal_27;
}

int func_341()
{
	if (bLocal_26)
	{
		return 1;
	}
	return 0;
}

void func_349(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::_GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == __LIB_0__::func_57(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (__LIB_0__::func_125(iParam0))
	{
		if (__LIB_0__::func_126(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (__LIB_0__::func_27(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_349(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_349(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!__LIB_0__::func_27(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (__LIB_0__::func_27(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (__LIB_0__::func_27(iParam5, 129))
	{
		if (__LIB_0__::func_27(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, __LIB_0__::func_27(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!__LIB_0__::func_27(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (__LIB_0__::func_125(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!__LIB_0__::func_27(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !__LIB_0__::func_27(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

void func_351(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	if (!PED::DOES_GROUP_EXIST(*iParam1) || PED::IS_PED_DEAD_OR_DYING(*iParam0, true))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(*iParam0, 279, bParam3);
	if (bParam2)
	{
		PED::SET_PED_AS_GROUP_LEADER(*iParam0, *iParam1, false);
	}
	else
	{
		PED::SET_PED_AS_GROUP_MEMBER(*iParam0, *iParam1);
		PED::SET_PED_CONFIG_FLAG(*iParam0, 280, bParam4);
		PED::_0xBAD2A311667A50D7(*iParam0, iParam5);
	}
	PED::_0x97C475212B327666(*iParam1, iParam6);
}

int func_362(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(Global_35);
	switch (iParam1)
	{
		case 76:
			if (func_472(iVar0))
			{
				if (__LIB_8__::func_948(&(uParam0->f_25), func_547(0), "PBL_1"))
				{
					return 1;
				}
			}
			else if (__LIB_8__::func_948(&(uParam0->f_25), func_547(1), "PBL_1"))
			{
				return 1;
			}
			break;
		case 26:
			if (func_472(iVar0))
			{
				if (__LIB_8__::func_948(&(uParam0->f_25), func_547(9), "PBL_1"))
				{
					return 1;
				}
			}
			else if (__LIB_8__::func_948(&(uParam0->f_25), func_547(10), "PBL_1"))
			{
				return 1;
			}
			break;
		case 105:
			if (func_472(iVar0))
			{
				if (__LIB_8__::func_948(&(uParam0->f_25), func_547(2), "PBL_1"))
				{
					return 1;
				}
			}
			else if (__LIB_8__::func_948(&(uParam0->f_25), func_547(3), "PBL_1"))
			{
				return 1;
			}
			break;
		case 78:
			if (func_472(iVar0))
			{
				if (__LIB_8__::func_948(&(uParam0->f_25), func_547(4), "PBL_1"))
				{
					return 1;
				}
			}
			else if (__LIB_8__::func_948(&(uParam0->f_25), func_547(5), "PBL_1"))
			{
				return 1;
			}
			break;
		case 38:
			if (__LIB_8__::func_948(&(uParam0->f_25), func_547(6), "PBL_1"))
			{
				return 1;
			}
			break;
		case 5:
			if (func_472(iVar0))
			{
				if (__LIB_8__::func_948(&(uParam0->f_25), func_547(7), "PBL_1"))
				{
					return 1;
				}
			}
			else if (__LIB_8__::func_948(&(uParam0->f_25), func_547(8), "PBL_1"))
			{
				return 1;
			}
			break;
		case 115:
			if (__LIB_8__::func_948(&(uParam0->f_25), func_547(11), "PBL_1"))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_409(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	struct<6> Var10;
	int iVar16;
	int iVar17;
	iParam1->f_10 = __LIB_0__::func_97(iParam1->f_10);
	if (iParam1->f_10 == -1)
	{
		*iParam0 = 1;
		return 0;
	}
	if (iParam1->f_10 >= 7)
	{
		*iParam0 = 1;
		return 0;
	}
	if (*iParam1)
	{
		if (__LIB_0__::func_86(iParam1->f_6))
		{
		}
	}
	bVar0 = __LIB_0__::func_28();
	if (*iParam1)
	{
		if (bVar0 && !__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
		{
			if (__LIB_1__::func_105(5))
			{
				__LIB_1__::func_162(5);
				__LIB_1__::func_778(5);
				__LIB_0__::func_149(0);
				__LIB_0__::func_148(0);
			}
		}
	}
	if (__LIB_0__::func_979(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && __LIB_1__::func_25(Global_1835011[37 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[43 /*74*/].f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && __LIB_1__::func_25(Global_1835011[43 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[44 /*74*/].f_1, 1))
	{
		if (iParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = iParam1->f_10;
	iVar2 = __LIB_0__::func_398(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (__LIB_0__::func_797(iVar1))
	{
		bVar3 = true;
		if (__LIB_1__::func_52(iVar1))
		{
			bVar4 = true;
		}
		if (__LIB_1__::func_53(iVar1))
		{
			bVar5 = true;
		}
	}
	if (*iParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !iParam1->f_5)
			{
				__LIB_1__::func_54(iParam1->f_10);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (*iParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (iParam1->f_3)
	{
		if (iParam1->f_10 == 0)
		{
			if (!__LIB_1__::func_105(0) && __LIB_1__::func_105(1))
			{
				__LIB_1__::func_779(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (iParam1->f_4)
	{
		if (iParam1->f_10 == 0)
		{
			if (__LIB_0__::func_988())
			{
				__LIB_0__::func_989();
			}
			__LIB_0__::func_149(0);
			__LIB_0__::func_148(0);
			__LIB_0__::func_150(iParam1->f_6);
		}
	}
	if (!__LIB_0__::func_797(iParam1->f_10))
	{
		if (*iParam1)
		{
			if ((__LIB_0__::func_821(iParam1->f_10) == 0 || __LIB_0__::func_809(iParam1->f_10) == 0) || __LIB_0__::func_815(iParam1->f_10) == 0)
			{
				__LIB_2__::func_308(iParam1->f_10);
			}
			__LIB_1__::func_106(iParam1->f_10);
			__LIB_0__::func_822(iParam1->f_10, iParam1->f_6, iParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = iParam1->f_10;
	iVar2 = __LIB_0__::func_398(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (__LIB_0__::func_797(iVar1))
	{
		bVar3 = true;
		if (__LIB_1__::func_52(iVar1))
		{
			bVar4 = true;
		}
		if (__LIB_1__::func_53(iVar1))
		{
			bVar5 = true;
		}
	}
	if (iParam1->f_2)
	{
		if (bVar3)
		{
			if (ENTITY::_IS_ENTITY_FROZEN(iVar2))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			}
			if (!__LIB_0__::func_86(iParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, iParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, iParam1->f_9);
				ENTITY::_0x9587913B9E772D29(iVar2, 0);
			}
		}
	}
	if (__LIB_1__::func_107(iParam1->f_10))
	{
		*iParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*iParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !iParam1->f_5)
		{
			if (*iParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (iParam1->f_4)
	{
		if (iParam1->f_10 == 0)
		{
			if (!PED::_0xA0BC8FAED8CFEB3C(iVar2))
			{
				*iParam0 = 0;
				return 0;
			}
			iVar6 = PLAYER::PLAYER_ID();
			iVar7 = PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(iVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (iVar7 != iVar2)
				{
					PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, 0);
				}
			}
			Var8 = { __LIB_1__::func_622(iParam1->f_10) };
			Var10 = { __LIB_2__::func_229() };
			__LIB_1__::func_163(iVar2, &Var8, &Var10, 0);
			PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!iParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!__LIB_0__::func_823(iParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		__LIB_0__::func_824(iParam1->f_10);
		if (iParam1->f_2 && !__LIB_0__::func_86(iParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			PHYSICS::_0x0348469DAA17576C(iVar2);
			ENTITY::SET_ENTITY_COORDS(iVar2, iParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar2, iParam1->f_9);
			ENTITY::_0x9587913B9E772D29(iVar2, 0);
		}
		*iParam0 = 2;
		return iVar2;
	}
	__LIB_1__::func_108(iParam1->f_10);
	if (__LIB_0__::func_823(iParam1->f_10))
	{
		iVar16 = __LIB_0__::func_825(iParam1->f_10);
		iVar17 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (iVar16 != iVar17)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	*iParam0 = 2;
	return iVar2;
}

int func_419(var uParam0)
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(*uParam0, false);
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_469(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 26:
		case 38:
		case 76:
		case 78:
		case 105:
			return true;
	}
	return false;
}

bool func_470()
{
	if (__LIB_1__::func_105(0) || __LIB_1__::func_105(1))
	{
		return true;
	}
	return false;
}

bool func_471(int iParam0)
{
	if (!__LIB_1__::func_307(iParam0, 0, 0))
	{
		return false;
	}
	return true;
}

bool func_472(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			return true;
	}
	return false;
}

bool func_484(var uParam0)
{
	if (!__LIB_1__::func_22(uParam0->f_1))
	{
		uParam0->f_2 = func_672(uParam0->f_1, 1, 0, uParam0->f_12, uParam0->f_12.f_1, uParam0->f_12.f_2, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		if (__LIB_0__::func_272(uParam0->f_2, 0))
		{
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_485(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_272(uParam0->f_3, 0))
	{
		return true;
	}
	if (!__LIB_0__::func_212(uParam0->f_1))
	{
		uParam0->f_3 = func_673(&iVar0, uParam0->f_1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0);
		if (__LIB_0__::func_272(uParam0->f_3, 0) && iVar0 == 2)
		{
			if (!__LIB_0__::func_86(uParam0->f_15))
			{
				func_349(uParam0->f_3, uParam0->f_15, uParam0->f_18, 2, 1073741824 /* Float: 2f */);
				TASK::TASK_STAND_STILL(uParam0->f_3, -1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, true);
			}
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_486(var uParam0)
{
	if (!__LIB_2__::func_763(uParam0->f_1, 0))
	{
		__LIB_2__::func_965(uParam0->f_1, 1, 0, 0, 1, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(uParam0->f_1)))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(__LIB_2__::func_963(uParam0->f_1), true);
		PED::SET_PED_CONFIG_FLAG(__LIB_2__::func_963(uParam0->f_1), 168, false);
		PERSCHAR::_0x6759BEE6762E140B(__LIB_0__::func_120(uParam0->f_1));
	}
	else
	{
		return false;
	}
	uParam0->f_2 = __LIB_2__::func_963(uParam0->f_1);
	return true;
}

bool func_487(var uParam0, var uParam1, var uParam2)
{
	var uVar0[15];
	var uVar16[1];
	int iVar18;
	int iVar19;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return true;
	}
	if (*uParam1)
	{
		return false;
	}
	uVar16[0] = Global_35;
	iVar18 = __LIB_18__::func_975(&uVar0, &uVar16, 15, uParam0->f_6, 1101004800 /* Float: 20f */, 0, 1, 1, uParam0->f_9, 1, 0, -1082130432 /* Float: -1f */, 0, 0);
	iVar19 = 0;
	while (iVar19 < iVar18)
	{
		if (!func_678(uParam2, uVar0[iVar19]))
		{
			if (*uParam0 == ENTITY::GET_ENTITY_MODEL(uVar0[iVar19]))
			{
				uParam0->f_1 = uVar0[iVar19];
				PED::_0xBD75500141E4725C(uParam0->f_1, joaat("LAW"));
				return true;
			}
		}
		iVar19++;
	}
	STREAMING::REQUEST_MODEL(*uParam0, false);
	if (STREAMING::HAS_MODEL_LOADED(*uParam0))
	{
		uParam0->f_1 = __LIB_1__::func_545(*uParam0, uParam0->f_6, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		PED::_0xBD75500141E4725C(uParam0->f_1, joaat("LAW"));
		uParam0->f_10 = 1;
		*uParam1 = 1;
		return true;
	}
	return false;
}

bool func_488(var uParam0, var uParam1, var uParam2)
{
	var uVar0[8];
	var uVar9[1];
	int iVar11;
	int iVar12;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return true;
	}
	if (*uParam1)
	{
		return false;
	}
	uVar9[0] = *uParam0;
	iVar11 = func_680(&uVar0, &uVar9, 8, uParam0->f_6, 1101004800 /* Float: 20f */);
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		if (!func_681(uParam2, uVar0[iVar12]))
		{
			uParam0->f_1 = uVar0[iVar12];
			return true;
		}
		iVar12++;
	}
	STREAMING::REQUEST_MODEL(*uParam0, false);
	if (STREAMING::HAS_MODEL_LOADED(*uParam0))
	{
		uParam0->f_1 = OBJECT::CREATE_OBJECT_NO_OFFSET(*uParam0, uParam0->f_6, true, true, false, true);
		uParam0->f_9 = 1;
		*uParam1 = 1;
		return true;
	}
	return false;
}

bool func_489(var uParam0, var uParam1)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return true;
	}
	if (*uParam1)
	{
		return false;
	}
	iVar0 = WEAPON::_GET_WEAPONTYPE_MODEL(*uParam0);
	STREAMING::REQUEST_MODEL(iVar0, false);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		uParam0->f_1 = WEAPON::_CREATE_WEAPON_OBJECT(*uParam0, 100, uParam0->f_6, true, 1f);
		uParam0->f_9 = 1;
		*uParam1 = 1;
		return true;
	}
	return false;
}

void func_490(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	__LIB_5__::func_221(uParam0, iParam1, sParam2, iParam3, iParam4, bParam5);
}

char* func_525(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DUTCH";
		case 3:
			return "BILLWILLIAMSON";
		case 1:
			return "JOHN";
		case 2:
			return "JavierEscuella";
		case 4:
			return "UNCLE";
		case 5:
			return "HOSEA";
		case 6:
			return "MICAHBELL";
		case 7:
			return "CharlesSmith";
		case 8:
			return "SEAN";
		case 9:
			return "LENNY";
		case 13:
			return "AbigailRoberts";
		case 10:
			return "KIERAN";
		case 14:
			return "JACK";
		case 15:
			return "MARYBETH";
		case 16:
			return "MOLLY";
		case 17:
			return "MrPearson";
		case 18:
			return "STRAUSS";
		case 19:
			return "GRIMSHAW";
		case 20:
			return "KAREN";
		case 21:
			return "SWANSON";
		case 22:
			return "TILLY";
		case 23:
			return "TRELAWNY";
		case 11:
			return "SADIE";
		case 24:
			return "CLEET";
		case 25:
			return "JOE";
		case 26:
			return "EAGLE_FLIES";
		case 12:
			return "DOG";
		default:
			break;
	}
	return "Companion unknown";
}

void func_526(var uParam0)
{
	if (__LIB_2__::func_763(uParam0->f_1, 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(uParam0->f_1)))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(__LIB_2__::func_963(uParam0->f_1), false);
			PED::SET_PED_CONFIG_FLAG(__LIB_2__::func_963(uParam0->f_1), 234, true);
			PED::SET_PED_CONFIG_FLAG(__LIB_2__::func_963(uParam0->f_1), 168, true);
		}
		__LIB_2__::func_753(uParam0->f_1, 0, 1, 0, 0);
		PERSCHAR::_0x6759BEE6762E140B(__LIB_0__::func_120(uParam0->f_1));
	}
}

char* func_547(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return "script@proc@jailcells@annesburg";
		case 0:
			return "script@proc@jailcells@valentine";
		case 2:
			return "script@proc@jailcells@rhodes";
		case 7:
			return "script@proc@jailcells@saintdenis";
		case 9:
			return "script@proc@jailcells@strawberry";
		case 5:
			return "script@proc@jailcells@annesburg_john";
		case 1:
			return "script@proc@jailcells@valentine_john";
		case 8:
			return "script@proc@jailcells@saintdenis_john";
		case 3:
			return "script@proc@jailcells@rhodes_john";
		case 10:
			return "script@proc@jailcells@strawberry_john";
		case 6:
			return "script@proc@jailcells@blackwater_john";
		case 11:
			return "script@proc@jailcells@tumbleweed_john";
		default:
			break;
	}
	return "FAIL";
}

int func_672(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;
	if (!__LIB_0__::func_31(iParam0))
	{
		return 0;
	}
	vVar0.x = uParam3;
	vVar0.f_1 = uParam4;
	vVar0.f_2 = uParam5;
	if (((Global_1572864.f_13 || Global_1572864.f_14) || Global_1572864.f_8 != 0) || Global_1391438.f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_11)
	{
		case 0:
			if (__LIB_0__::func_287(iParam0, 2, 1))
			{
				__LIB_0__::func_290(iParam0, 2, 1);
			}
			if (__LIB_0__::func_273(iParam0, 16, 1))
			{
				if (Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
				{
					if (bParam14)
					{
						__LIB_0__::func_288(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(Global_1360165[iParam0 /*1157*/].f_129, false))
					{
					}
					else
					{
						__LIB_1__::func_774(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						__LIB_0__::func_712(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				__LIB_0__::func_288(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				__LIB_0__::func_201(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				__LIB_0__::func_288(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				__LIB_0__::func_201(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
				}
			}
			if (!__LIB_0__::func_287(iParam0, 44, 0))
			{
				__LIB_0__::func_288(iParam0, 44, 0);
			}
			if (__LIB_1__::func_466(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				__LIB_0__::func_201(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			__LIB_0__::func_290(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 0);
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			__LIB_0__::func_707(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				__LIB_1__::func_296(iParam0, 0, 0, 1);
			}
			__LIB_0__::func_290(iParam0, 33, 1);
			__LIB_0__::func_290(iParam0, 34, 1);
			__LIB_0__::func_290(iParam0, 29, 1);
			if (!__LIB_0__::func_86(vVar0) && bParam7)
			{
				__LIB_0__::func_201(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				__LIB_0__::func_201(iParam0, 4);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[iParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[iParam0 /*1157*/]))
					{
						__LIB_0__::func_712(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_349(Global_1360165[iParam0 /*1157*/], vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::_0x0C3CB2E600C8977D(Global_1360165[iParam0 /*1157*/], 1))
				{
					TASK::CLEAR_PED_TASKS(Global_1360165[iParam0 /*1157*/], true, false);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				__LIB_0__::func_201(iParam0, 4);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
					}
				}
				if (__LIB_1__::func_201(iParam0, iParam13))
				{
					if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
					{
						__LIB_1__::func_288(iParam0, iParam13, 0);
						__LIB_1__::func_558(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (__LIB_0__::func_287(iParam0, 25, 0))
						{
							__LIB_0__::func_290(iParam0, 25, 0);
						}
						__LIB_0__::func_288(iParam0, 66, 0);
						__LIB_0__::func_201(iParam0, 5);
						Global_1360165[iParam0 /*1157*/].f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					__LIB_0__::func_201(iParam0, 5);
				}
				__LIB_0__::func_288(iParam0, 28, 1);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 5:
			if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
			{
				__LIB_0__::func_201(iParam0, 6);
			}
			break;
		case 6:
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (bParam24)
				{
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], true);
				}
				if (bParam18)
				{
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5);
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5, "ALL");
							iVar5++;
						}
						PED::_0xE3144B932DFDFF65(Global_1360165[iParam0 /*1157*/], 0f, -1, true, true);
						PED::_0xD049920CD29F6CC8(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					__LIB_1__::func_30(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					__LIB_0__::func_202(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			__LIB_0__::func_201(iParam0, 7);
		case 7:
			__LIB_0__::func_707(iParam0, bParam9, bParam15, 0);
			__LIB_0__::func_289(iParam0, 4, bParam11);
			__LIB_0__::func_706(iParam0);
			if (bParam20)
			{
				if (__LIB_0__::func_203(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			__LIB_3__::func_921(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
			}
			Global_40.f_4942[iParam0 /*60*/].f_4 = Global_40.f_4942[iParam0 /*60*/].f_3;
			__LIB_0__::func_201(iParam0, 0);
			__LIB_0__::func_204(iParam0, 16, 1);
			__LIB_0__::func_290(iParam0, 44, 1);
			Global_1360165[iParam0 /*1157*/].f_1156 = 0;
			Global_1360165[iParam0 /*1157*/].f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

int func_673(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam1))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_177(iParam1);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || !__LIB_0__::func_272(iVar0, 0)) || (bParam3 && !__LIB_0__::func_212(iParam1)))
	{
		if (bParam2)
		{
			if (__LIB_0__::func_725(iParam1, 1) != 0)
			{
				iVar0 = func_830(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, iParam12, bParam7, bParam15, bParam16, iParam17);
			}
			else
			{
				*iParam0 = 1;
				return 0;
			}
		}
		else
		{
			*iParam0 = 1;
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && __LIB_0__::func_272(iVar0, 0))
	{
		*iParam0 = 2;
		Global_1360165[iParam1 /*1157*/].f_70.f_2 = 0;
		__LIB_0__::func_834(iParam1, iVar0);
		__LIB_1__::func_434(iParam1, bParam13, bParam14, 1);
		return iVar0;
	}
	else
	{
		*iParam0 = 0;
		return 0;
	}
	return 0;
}

bool func_678(var uParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_998)
	{
		if (uParam0->f_782[iVar0 /*11*/].f_1 == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_680(var uParam0, var uParam1, int iParam2, vector3 vParam3, int iParam6)
{
	int iVar0;
	int iVar1;
	iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, iParam6, iParam6, iParam6);
	iVar1 = __LIB_13__::func_213(uParam0, uParam1, iVar0, iParam2);
	__LIB_0__::func_172(iVar0);
	return iVar1;
}

bool func_681(var uParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_996)
	{
		if (uParam0->f_530[iVar0 /*10*/].f_1 == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_830(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	char* sVar12;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	vVar0 = { iParam3, iParam4, iParam5 };
	iVar3 = __LIB_1__::func_179(iParam0, 1);
	switch (Global_1360165[iParam0 /*1157*/].f_70.f_12)
	{
		case 0:
			Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_0x31C70A716CAE1FEE(iVar3);
			Global_1360165[iParam0 /*1157*/].f_125 = 0;
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				__LIB_0__::func_234(iParam0, 3);
			}
			else
			{
				if (!__LIB_0__::func_851(iParam0) && __LIB_0__::func_852(iParam0, &uVar4))
				{
					PERSCHAR::_0x187D65F3AEC5D679(__LIB_0__::func_725(iParam0, 1), &uVar4);
				}
				__LIB_0__::func_213(iParam0, 256, 0);
				__LIB_0__::func_234(iParam0, 1);
			}
			break;
		case 1:
			if (!Global_1359489.f_12)
			{
				if (!PERSCHAR::_0xA8120EBEAF290C7A(iVar3))
				{
					return __LIB_0__::func_749();
				}
				if (bParam2 && !__LIB_0__::func_86(vVar0))
				{
					PERSCHAR::_0x59C7AD6FEA2AC449(iVar3, vVar0);
				}
				else if (bParam2)
				{
					PERSCHAR::_0xD4B614179BCD0654(iVar3);
				}
				if (!__LIB_3__::func_119(iParam0, vVar0, iParam6, iParam10))
				{
					return __LIB_0__::func_749();
				}
				if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
				{
					if (PERSCHAR::_0x31C70A716CAE1FEE(iVar3) != Global_1360165[iParam0 /*1157*/].f_124)
					{
					}
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1360165[iParam0 /*1157*/].f_124, true))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
					}
					ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, true);
					ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, true);
					__LIB_0__::func_234(iParam0, 2);
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				__LIB_0__::func_234(iParam0, 1);
				return __LIB_0__::func_749();
			}
			if (!bParam9 || PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/].f_124))
			{
				__LIB_0__::func_234(iParam0, 3);
			}
			break;
		case 3:
			if (!__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				__LIB_0__::func_234(iParam0, 1);
				return __LIB_0__::func_749();
			}
			if (bParam7)
			{
				if (!__LIB_1__::func_411(iParam0, Global_1360165[iParam0 /*1157*/].f_124, 1))
				{
					return __LIB_0__::func_749();
				}
			}
			if ((bParam2 && !__LIB_0__::func_86(vVar0)) && !__LIB_0__::func_175(vVar0, ENTITY::GET_ENTITY_COORDS(Global_1360165[iParam0 /*1157*/].f_124, true, false), 1056964608 /* Float: 0.5f */, 1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_349(Global_1360165[iParam0 /*1157*/].f_124, vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
			}
			if (bParam1)
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/].f_124))
				{
					if (__LIB_0__::func_287(iParam0, 39, 1))
					{
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				__LIB_0__::func_288(iParam0, 39, 1);
				__LIB_0__::func_213(iParam0, 8, 1);
				__LIB_0__::func_213(iParam0, 64, 0);
				Global_1360165[iParam0 /*1157*/].f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			}
			ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, false);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, false);
			__LIB_1__::func_547(Global_1360165[iParam0 /*1157*/].f_124, iParam0);
			if (bParam8)
			{
				POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/].f_124, 1);
			}
			sVar12 = __LIB_0__::func_853(iParam0, __LIB_0__::func_181());
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar12))
			{
				PERSCHAR::_0x63AA2B8EB087886A(__LIB_0__::func_725(iParam0, 1), MISC::GET_HASH_KEY(sVar12));
			}
			Global_1360165[iParam0 /*1157*/].f_70 = Global_1360165[iParam0 /*1157*/].f_124;
			Global_1360165[iParam0 /*1157*/].f_124 = 0;
			__LIB_0__::func_290(iParam0, 40, 0);
			__LIB_0__::func_213(iParam0, 32, 0);
			__LIB_0__::func_234(iParam0, 0);
			return Global_1360165[iParam0 /*1157*/].f_70;
	}
	return __LIB_0__::func_749();
}

