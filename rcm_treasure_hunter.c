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
	struct<997> Local_15 = { 53, 2, 4, 2, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1084227584, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 1048576000, 1193033728, 1092616192, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1106247680, 1067450368, 0, 1092616192, 1112014848, 1106247680, 1101529088, 1101004800, 1084227584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = -1;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 1097859072;
	var uLocal_1034 = 1000;
	var uLocal_1035 = 1067450368;
	var uLocal_1036 = 5000;
	var uLocal_1037 = 42;
	var uLocal_1038 = 1103626240;
	var uLocal_1039 = 1077936128;
	var uLocal_1040 = 1106247680;
	var uLocal_1041 = 1103101952;
	var uLocal_1042 = 1097859072;
	var uLocal_1043 = 1103626240;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = -1;
	var uLocal_1055 = 0;
	var uLocal_1056 = 1;
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
	var uLocal_1074 = 8;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
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
	var uLocal_1101 = 1176256512;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 20;
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
	var uLocal_1130 = -1082130432;
	var uLocal_1131 = 0;
	var uLocal_1132 = 4;
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
	var uLocal_1177 = 1;
	var uLocal_1178 = 1;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = -1;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 1;
	var uLocal_1196 = -1;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	int iLocal_1206 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	Var0 = 9;
	Var0.f_28 = 4;
	Var0.f_41 = 25;
	Var0.f_117 = 10;
	Var0.f_175 = -1;
	Var0.f_178.f_8 = -1;
	Var0.f_178.f_17 = 1097859072;
	Var0.f_178.f_18 = 1000;
	Var0.f_178.f_19 = 1067450368;
	Var0.f_178.f_20 = 5000;
	Var0.f_178.f_21 = 42;
	Var0.f_178.f_22 = 1103626240;
	Var0.f_178.f_23 = 1077936128;
	Var0.f_178.f_24 = 1106247680;
	Var0.f_178.f_25 = 1103101952;
	Var0.f_178.f_26 = 1097859072;
	Var0.f_178.f_27 = 1103626240;
	Var0.f_206 = 1;
	Var0.f_206.f_13 = 27;
	Var0.f_206.f_338 = 1097859072;
	Var0.f_206.f_339 = 1101004800;
	Var0.f_206.f_366 = 4;
	Var0.f_643 = 24;
	Var0.f_741 = 1092616192;
	Var0.f_742 = 1094713344;
	Var0.f_744 = -1082130432;
	Var0.f_745 = 1103626240;
	Var0.f_748 = -1;
	Var0.f_749 = -1;
	Var0.f_750 = -1;
	Var0.f_751 = -1;
	Var0.f_752 = -1;
	Var0.f_753.f_3 = 27;
	Var0.f_753.f_3.f_1.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_753.f_355.f_15 = 1;
	Var0.f_753.f_371 = 30;
	Var0.f_753.f_371.f_1 = -1;
	Var0.f_753.f_371.f_1.f_2 = 1;
	Var0.f_753.f_371.f_1.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_912 = 8;
	Var0.f_753.f_1241 = 8;
	Var0.f_753.f_1241.f_1.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1418 = 11;
	Var0.f_753.f_1529 = 2;
	Var0.f_753.f_1564 = 2;
	Var0.f_753.f_1581 = -1;
	Var0.f_753.f_1584 = -1;
	Var0.f_753.f_1585 = -1082130432;
	Var0.f_753.f_1667 = 24;
	Var0.f_753.f_1791 = -1;
	Var0.f_2605 = 15;
	Var0.f_2605.f_241 = 15;
	Var0.f_2605.f_482 = 16;
	Var0.f_2605.f_739 = 2;
	Var0.f_2605.f_772 = 3;
	Var0.f_174 = ScriptParam_0;
	if (ScriptParam_0.f_1)
	{
		__LIB_0__::func_7(&(Var0.f_172), 4096);
	}
	else
	{
		__LIB_0__::func_8(&(Var0.f_172), 4096);
	}
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4650))
	{
		func_3(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_4(&Var0);
	while (true)
	{
		func_5(&Var0);
		if (__LIB_0__::func_1(Var0.f_172, 50331648))
		{
			func_7(&Var0);
		}
		else
		{
			switch (Var0.f_177)
			{
				case 0:
					__LIB_12__::func_906(&Var0);
					break;
				case 1:
					func_9(&Var0);
					break;
				case 3:
					func_10(&Var0);
					break;
				case 4:
					func_11(&Var0);
					break;
				case 2:
					__LIB_13__::func_2(&Var0);
					break;
				case 5:
					func_13(&Var0);
					break;
				case 6:
					func_14(&Var0);
					break;
				case 7:
					func_15(&Var0);
					break;
				case 8:
					func_16(&Var0);
					break;
				case 9:
					func_17(&Var0, 0);
					break;
				case 10:
					func_18(&Var0);
					break;
				case 11:
					func_19(&Var0);
					break;
			}
		}
		BUILTIN::WAIT(0);
	}
}

void func_3(var uParam0)
{
	int iVar0;
	if (Global_1879534 == 1)
	{
		__LIB_2__::func_426(&(Global_1347702[uParam0->f_174 /*49*/].f_43));
	}
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
		__LIB_0__::func_11(uParam0, iVar0);
		if (iVar0 == 32)
		{
			func_16(uParam0);
		}
		else
		{
			func_17(uParam0, 1);
			return;
		}
	}
	if (uParam0->f_177 == 10)
	{
		__LIB_0__::func_11(uParam0);
	}
	__LIB_12__::func_836(&(uParam0->f_753));
	func_19(uParam0);
}

void func_4(var uParam0)
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	if (uParam0->f_174 == __LIB_10__::func_698())
	{
		bVar0 = true;
	}
	else if (__LIB_12__::func_738(uParam0))
	{
		bVar0 = true;
		__LIB_12__::func_638(uParam0, 128);
	}
	if (bVar0)
	{
		__LIB_12__::func_638(uParam0, 64);
		if (__LIB_4__::func_512())
		{
			__LIB_12__::func_638(uParam0, 128);
		}
		__LIB_0__::func_145(0, 0);
	}
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 4096))
	{
		uParam0->f_741 = 0f;
		uParam0->f_742 = 0f;
	}
	if (!__LIB_12__::func_639(uParam0, 64))
	{
		__LIB_12__::func_640(uParam0->f_174, 1);
		__LIB_12__::func_641(uParam0->f_174, 1);
	}
	__LIB_11__::func_196(uParam0->f_174);
	func_34(uParam0);
	__LIB_12__::func_642(uParam0);
	__LIB_12__::func_781(uParam0, 0, 0, 0, -1, -1, 0);
	__LIB_12__::func_782(uParam0, 0, 0, 0, -1, -1, 0);
	__LIB_12__::func_894(&(uParam0->f_178));
	if (Global_1347702[uParam0->f_174 /*49*/].f_28 != 0)
	{
		__LIB_12__::func_867(uParam0, Global_1347702[uParam0->f_174 /*49*/].f_28, 7);
	}
	func_40(uParam0);
	__LIB_12__::func_918(uParam0, 1);
	iVar1 = __LIB_1__::func_976(uParam0);
	if (!__LIB_0__::func_1(uParam0->f_172, 8388608) && __LIB_12__::func_882(uParam0))
	{
		iVar1 = 4;
	}
	if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		if ((iVar1 != 0 && iVar1 != 1) && !__LIB_12__::func_882(uParam0))
		{
			__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
		}
	}
	__LIB_0__::func_769();
	__LIB_12__::func_837(uParam0, iVar1);
}

void func_5(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_1(uParam0->f_172, 50331648))
	{
		return;
	}
	if (__LIB_10__::func_255())
	{
		__LIB_0__::func_7(&(uParam0->f_172), 16777216);
		if (!__LIB_0__::func_1(uParam0->f_172, 8))
		{
			__LIB_12__::func_643(uParam0, 14);
		}
		return;
	}
	else if (__LIB_10__::func_257())
	{
		__LIB_0__::func_7(&(uParam0->f_172), 33554432);
		if (!__LIB_0__::func_1(uParam0->f_172, 8))
		{
			__LIB_12__::func_643(uParam0, 15);
		}
		return;
	}
	if (func_51(uParam0))
	{
		return;
	}
	__LIB_0__::func_8(&(uParam0->f_172), 64);
	__LIB_0__::func_8(&(uParam0->f_172), 128);
	if (__LIB_0__::func_1(uParam0->f_172, 67108864))
	{
		__LIB_12__::func_868(1);
		__LIB_0__::func_8(&(uParam0->f_172), 67108864);
	}
	__LIB_12__::func_963(uParam0);
	if (((uParam0->f_177 == 11 || uParam0->f_177 == 10) || uParam0->f_177 == 8) || uParam0->f_177 == 9)
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 4096))
	{
		iVar0 = __LIB_0__::func_298(0);
		if (!__LIB_0__::func_6(iVar0) || Global_1347702[uParam0->f_174 /*49*/].f_15 == iVar0)
		{
			__LIB_0__::func_8(&(uParam0->f_172), 4096);
		}
		else
		{
			return;
		}
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 8) && __LIB_12__::func_766())
	{
		if (uParam0->f_174 != 59 || !__LIB_1__::func_200(97))
		{
			if (uParam0->f_174 != 155 || !__LIB_1__::func_200(8))
			{
				return;
			}
		}
	}
	if (uParam0->f_177 != 2)
	{
		if (__LIB_0__::func_1(uParam0->f_172, 8))
		{
			if (__LIB_0__::func_58(uParam0))
			{
				if (uParam0->f_177 != 6 && uParam0->f_177 != 5)
				{
					__LIB_12__::func_837(uParam0, 9);
					return;
				}
			}
			else if (__LIB_0__::func_58(uParam0))
			{
				if (uParam0->f_177 != 6 && uParam0->f_177 != 5)
				{
					__LIB_12__::func_837(uParam0, 8);
					return;
				}
			}
			if (!__LIB_0__::func_1(uParam0->f_172, 131072))
			{
				if (!Global_1935630.f_12)
				{
					PED::SET_PED_RESET_FLAG(Global_35, 187, true);
				}
			}
			if (!__LIB_0__::func_1(uParam0->f_172, 268435456))
			{
				__LIB_4__::func_515();
			}
			if (!__LIB_0__::func_1(uParam0->f_172, 536870912))
			{
				POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
			}
			if (!__LIB_0__::func_1(uParam0->f_172, 1073741824 /* Float: 2f */))
			{
				__LIB_4__::func_516(1, 0);
			}
			func_62(uParam0);
		}
		else if (!__LIB_12__::func_639(uParam0, 64) && !__LIB_12__::func_738(uParam0))
		{
			uParam0->f_743 = BUILTIN::VDIST2(__LIB_1__::func_440(uParam0->f_174), Global_36);
			if (func_64(uParam0))
			{
				if (__LIB_12__::func_644(uParam0) == 2 || __LIB_12__::func_644(uParam0) == 12)
				{
					func_19(uParam0);
					return;
				}
				func_66(uParam0);
				__LIB_12__::func_837(uParam0, 10);
				return;
			}
			else
			{
				__LIB_13__::func_52(uParam0);
			}
			func_68(uParam0);
		}
	}
	__LIB_13__::func_28(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 32))
	{
		__LIB_12__::func_954(uParam0, __LIB_12__::func_645(uParam0));
	}
	else if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		if (__LIB_13__::func_147(uParam0))
		{
		}
	}
}

void func_7(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		func_17(uParam0, 0);
	}
	else
	{
		if (!__LIB_0__::func_899(&(uParam0->f_2597)))
		{
			__LIB_4__::func_89(&(uParam0->f_2597), 0);
		}
		__LIB_0__::func_11(uParam0);
		if (__LIB_9__::func_401(&(uParam0->f_2597)) >= 2500 || CAM::IS_SCREEN_FADED_OUT())
		{
			if (uParam0->f_177 == 10)
			{
				__LIB_0__::func_11(uParam0);
			}
			else
			{
				func_66(uParam0);
			}
			func_19(uParam0);
		}
	}
}

void func_9(var uParam0)
{
	if (func_79(uParam0))
	{
		if (__LIB_12__::func_639(uParam0, 64))
		{
			__LIB_13__::func_258(uParam0);
			__LIB_12__::func_837(uParam0, 2);
			__LIB_13__::func_147(uParam0);
		}
		else if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 4096))
		{
			__LIB_12__::func_837(uParam0, 3);
		}
		else
		{
			func_81(uParam0);
			__LIB_12__::func_837(uParam0, 4);
		}
	}
}

void func_10(var uParam0)
{
	int iVar0;
	if (!__LIB_0__::func_899(&(uParam0->f_2585)) || IntToFloat(__LIB_9__::func_401(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
	{
		__LIB_4__::func_89(&(uParam0->f_2585), 1);
		iVar0 = __LIB_9__::func_762(uParam0);
		if (iVar0 != 3)
		{
			if ((iVar0 == 7 || iVar0 == 5) || iVar0 == 6)
			{
				__LIB_13__::func_258(uParam0);
				__LIB_13__::func_147(uParam0);
			}
			__LIB_12__::func_837(uParam0, iVar0);
		}
	}
}

void func_11(var uParam0)
{
	int iVar0;
	if (!__LIB_0__::func_382(64))
	{
		return;
	}
	if (__LIB_1__::func_927())
	{
		return;
	}
	else if (__LIB_0__::func_1(Global_1935630, 131072))
	{
		return;
	}
	else if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	__LIB_0__::func_11(uParam0);
	if (func_86(uParam0))
	{
		__LIB_13__::func_258(uParam0);
		iVar0 = __LIB_12__::func_492(uParam0);
		if (iVar0 == 5)
		{
			__LIB_12__::func_646(uParam0, 4);
			func_13(uParam0);
			if (uParam0->f_177 == 6)
			{
				iVar0 = 6;
			}
			else
			{
				iVar0 = 5;
			}
		}
		else if (iVar0 == 6)
		{
			__LIB_12__::func_646(uParam0, 4);
			func_14(uParam0);
		}
		else if (iVar0 == 7)
		{
			MISC::_0xA565FAC215CBC77D();
			SCRIPTS::SHUTDOWN_LOADING_SCREEN();
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
		}
		if (__LIB_12__::func_738(uParam0))
		{
			if (iVar0 == 7 && !CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
		}
		__LIB_13__::func_147(uParam0);
		__LIB_12__::func_837(uParam0, iVar0);
	}
}

void func_13(var uParam0)
{
	if (func_92(uParam0))
	{
		func_14(uParam0);
		__LIB_12__::func_837(uParam0, 6);
	}
}

void func_14(var uParam0)
{
	int iVar0;
	__LIB_13__::func_3(uParam0);
	if (__LIB_12__::func_647(&(uParam0->f_2575)))
	{
		if (func_95(uParam0))
		{
			__LIB_12__::func_966(uParam0, 1);
			iVar0 = func_97(uParam0);
			__LIB_12__::func_837(uParam0, iVar0);
		}
	}
	else
	{
		__LIB_0__::func_8(&(uParam0->f_172), 16);
		__LIB_12__::func_966(uParam0, 0);
		iVar0 = func_97(uParam0);
		__LIB_12__::func_837(uParam0, iVar0);
	}
}

void func_15(var uParam0)
{
	int iVar0;
	if (func_98(uParam0))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 262144))
	{
		__LIB_14__::func_18(uParam0, __LIB_0__::func_58(uParam0));
	}
	iVar0 = func_101(uParam0);
	if (iVar0 == 5)
	{
		__LIB_12__::func_646(uParam0, 7);
		func_13(uParam0);
		if (uParam0->f_177 == 6)
		{
			iVar0 = 6;
		}
		else
		{
			iVar0 = 5;
		}
	}
	else if (iVar0 == 6)
	{
		__LIB_12__::func_646(uParam0, 7);
		func_14(uParam0);
	}
	__LIB_12__::func_837(uParam0, iVar0);
}

void func_16(var uParam0)
{
	vector3 vVar0[24];
	bool bVar3;
	int iVar4;
	struct<7> Var5;
	bool bVar12;
	if (uParam0->f_177 != 8)
	{
		__LIB_12__::func_837(uParam0, 8);
	}
	if (__LIB_0__::func_1(uParam0->f_172, 32768))
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(1000);
			}
			return;
		}
		if (MISC::_0x1B065A2BF7953815(1) == 1)
		{
			return;
		}
	}
	if (__LIB_12__::func_644(uParam0) != 0)
	{
		__LIB_12__::func_643(uParam0, 0);
		if (__LIB_1__::func_241(Global_1347702[uParam0->f_174 /*49*/].f_15))
		{
			if (!STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(Global_1347702[uParam0->f_174 /*49*/].f_15)))
			{
				STATS::_0xCA41E86545413B5B(__LIB_0__::func_700(Global_1347702[uParam0->f_174 /*49*/].f_15), __LIB_0__::func_76(Global_1347702[uParam0->f_174 /*49*/].f_15), __LIB_0__::func_872(Global_1347702[uParam0->f_174 /*49*/].f_15), __LIB_0__::func_299(Global_1347702[uParam0->f_174 /*49*/].f_15), Global_36);
			}
			if (!STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(Global_1347702[uParam0->f_174 /*49*/].f_15)))
			{
			}
			else
			{
				STATS::_0xB2A38826E5886E83(__LIB_0__::func_299(Global_1347702[uParam0->f_174 /*49*/].f_15), 0);
			}
		}
		if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 262144))
		{
			__LIB_0__::func_496();
			__LIB_1__::func_323(&(Global_1347702[uParam0->f_174 /*49*/].f_3), 0);
		}
		__LIB_11__::func_382(uParam0->f_174, 1);
		__LIB_12__::func_869(uParam0);
		__LIB_5__::func_496(__LIB_0__::func_12(), 0);
		if (__LIB_0__::func_1(uParam0->f_172, 8))
		{
			__LIB_5__::func_109(uParam0, 0, 1);
			if (__LIB_3__::func_736(uParam0->f_174, 128))
			{
				__LIB_3__::func_735(uParam0->f_174, 128);
			}
		}
		__LIB_0__::func_11(uParam0);
		if (!__LIB_0__::func_1(uParam0->f_172, 32768) || !__LIB_0__::func_1(uParam0->f_172, 65536))
		{
			if (__LIB_0__::func_1(uParam0->f_172, 8))
			{
				MISC::_0x1096603B519C905F("");
				HUD::SET_MISSION_NAME(false, &(Global_1347702[uParam0->f_174 /*49*/].f_3));
				if (MISC::GET_MISSION_FLAG())
				{
					MISC::SET_MISSION_FLAG(false);
				}
				__LIB_0__::func_769();
				UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
				__LIB_5__::func_370(Global_1347702[uParam0->f_174 /*49*/].f_15);
				__LIB_5__::func_102();
				__LIB_0__::func_8(&Global_1935630, 8);
			}
			MemCopy(&cVar0, {Global_1347702[uParam0->f_174 /*49*/].f_1}, 3);
			StringConCat(&cVar0, "_obj", 24);
			if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 4))
			{
				if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 64))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
					{
						__LIB_12__::func_883(uParam0, &cVar0, 1, 7500, 0, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					}
				}
			}
			bVar3 = __LIB_0__::func_513();
			func_122(uParam0->f_174, 1, 1, 0, 1, 1, bVar3);
			if (__LIB_0__::func_1(uParam0->f_172, 8))
			{
				iVar4 = __LIB_12__::func_767(uParam0);
				if (iVar4 < 0)
				{
					iVar4 = 0;
				}
				Var5 = __LIB_0__::func_299(__LIB_12__::func_609(uParam0->f_174));
				Var5.f_1 = 0;
				Var5.f_2 = iVar4;
				Var5.f_3 = __LIB_12__::func_644(uParam0);
				Var5.f_4 = (ENTITY::GET_ENTITY_HEALTH(Global_35) * 100 / ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false));
				Var5.f_5 = Global_40.f_7729;
				Var5.f_6 = __LIB_0__::func_398(0);
				TELEMETRY::_TELEMETRY_MISSION_OVER(&(Global_1347702[uParam0->f_174 /*49*/].f_3), &Var5);
				bVar12 = false;
				if (bVar12)
				{
					__LIB_0__::func_297();
					__LIB_1__::func_140();
				}
			}
		}
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 32768) || !__LIB_0__::func_1(uParam0->f_172, 65536))
	{
		if (__LIB_12__::func_738(uParam0))
		{
			CAM::DO_SCREEN_FADE_OUT(0);
			__LIB_6__::func_833();
			__LIB_1__::func_141(0);
		}
		else if (__LIB_0__::func_1(uParam0->f_172, 32768))
		{
			__LIB_9__::func_786(1, 1);
			__LIB_0__::func_7(&(uParam0->f_172), 65536);
			return;
		}
	}
	if (__LIB_0__::func_1(uParam0->f_172, 32768))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
		__LIB_1__::func_954(1);
		__LIB_5__::func_116();
		__LIB_0__::func_320(6);
		__LIB_0__::func_319(4096);
	}
	func_66(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 32768) || __LIB_12__::func_738(uParam0))
	{
		func_19(uParam0);
	}
	__LIB_12__::func_837(uParam0, 10);
}

void func_17(var uParam0, bool bParam1)
{
	int iVar0;
	struct<7> Var1;
	__LIB_12__::func_837(uParam0, 9);
	if (__LIB_12__::func_644(uParam0) != 1)
	{
		__LIB_12__::func_643(uParam0, 1);
		if (__LIB_3__::func_736(uParam0->f_174, 128))
		{
			__LIB_3__::func_735(uParam0->f_174, 128);
		}
		__LIB_0__::func_11(uParam0);
	}
	if (__LIB_0__::func_1(uParam0->f_172, 134217728))
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::_0x16E9ABDD34DDD931();
			CAM::DO_SCREEN_FADE_OUT(0);
		}
	}
	__LIB_11__::func_382(uParam0->f_174, 0);
	if (bParam1 == 1)
	{
		if (uParam0->f_174 == __LIB_10__::func_698())
		{
			__LIB_0__::func_297();
			__LIB_1__::func_140();
		}
	}
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		MISC::_0x1096603B519C905F("");
		HUD::SET_MISSION_NAME(false, &(Global_1347702[uParam0->f_174 /*49*/].f_3));
		if (MISC::GET_MISSION_FLAG())
		{
			MISC::SET_MISSION_FLAG(false);
		}
		__LIB_0__::func_769();
		__LIB_0__::func_8(&Global_1935630, 8);
	}
	if (__LIB_12__::func_648(&(uParam0->f_2605)))
	{
		__LIB_12__::func_768(uParam0);
	}
	__LIB_1__::func_645(Global_1347702[uParam0->f_174 /*49*/].f_15);
	if (!__LIB_0__::func_1(uParam0->f_172, 50331648))
	{
		if (__LIB_0__::func_1(uParam0->f_172, 8))
		{
			iVar0 = __LIB_12__::func_767(uParam0);
			if (iVar0 < 0)
			{
				iVar0 = 0;
			}
			Var1 = __LIB_0__::func_299(__LIB_12__::func_609(uParam0->f_174));
			Var1.f_1 = 0;
			Var1.f_2 = iVar0;
			Var1.f_3 = __LIB_12__::func_644(uParam0);
			Var1.f_4 = (ENTITY::GET_ENTITY_HEALTH(Global_35) * 100 / ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false));
			Var1.f_5 = Global_40.f_7729;
			Var1.f_6 = __LIB_0__::func_398(0);
			TELEMETRY::_TELEMETRY_MISSION_OVER(&(Global_1347702[uParam0->f_174 /*49*/].f_3), &Var1);
		}
	}
	if (__LIB_0__::func_1(uParam0->f_172, 50331648))
	{
		bParam1 = true;
	}
	else
	{
		func_66(uParam0);
	}
	if (bParam1)
	{
		func_19(uParam0);
	}
	else
	{
		__LIB_12__::func_837(uParam0, 10);
	}
}

void func_18(var uParam0)
{
	bool bVar0;
	int iVar1;
	if (Global_1347702[uParam0->f_174 /*49*/].f_13 & 4096 != 0)
	{
		bVar0 = MAP::DOES_BLIP_EXIST(Global_1347702[uParam0->f_174 /*49*/].f_37);
		uParam0->f_743 = BUILTIN::VDIST2(__LIB_1__::func_440(uParam0->f_174), Global_36);
		__LIB_12__::func_613(uParam0->f_174, bVar0, uParam0->f_743);
	}
	if (__LIB_0__::func_296(64, 1, 1))
	{
		iVar1 = __LIB_0__::func_298(0);
		if (__LIB_0__::func_6(iVar1))
		{
			__LIB_0__::func_11(uParam0);
			func_19(uParam0);
			return;
		}
	}
	if (__LIB_0__::func_0(uParam0) && __LIB_10__::func_265())
	{
		__LIB_0__::func_11(uParam0);
		func_19(uParam0);
	}
	else if (!__LIB_0__::func_899(&(uParam0->f_2585)) || IntToFloat(__LIB_9__::func_401(&(uParam0->f_2585))) > __LIB_2__::func_18(uParam0))
	{
		__LIB_4__::func_89(&(uParam0->f_2585), 1);
		if (func_143(uParam0))
		{
			__LIB_12__::func_837(uParam0, 11);
		}
	}
}

void func_19(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	func_144(uParam0);
	__LIB_3__::func_319(uParam0->f_751);
	__LIB_12__::func_975(uParam0);
	__LIB_12__::func_907(uParam0);
	__LIB_12__::func_649(uParam0);
	__LIB_12__::func_650(uParam0->f_174);
	__LIB_12__::func_651(uParam0->f_174);
	__LIB_0__::func_698(2);
	iVar0 = 0;
	bVar2 = false;
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_14, 1024))
	{
		bVar2 = true;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		__LIB_12__::func_993(iVar1, 1, -1082130432 /* Float: -1f */, 1, 1, bVar2, 0);
		iVar0++;
	}
	if (__LIB_12__::func_644(uParam0) == 2)
	{
		__LIB_2__::func_426(&(Global_1347702[uParam0->f_174 /*49*/].f_43));
	}
	else
	{
		__LIB_2__::func_788(&(Global_1347702[uParam0->f_174 /*49*/].f_43), 1, 0, 1);
	}
	Global_1347702[uParam0->f_174 /*49*/].f_43 = 0;
	__LIB_12__::func_652(uParam0);
	__LIB_12__::func_653(uParam0);
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		__LIB_9__::func_239(uParam0->f_174);
	}
	if (__LIB_12__::func_644(uParam0) == 2 || __LIB_12__::func_644(uParam0) == 12)
	{
		__LIB_8__::func_993(uParam0->f_174);
	}
	if (__LIB_1__::func_44(Global_1347702[uParam0->f_174 /*49*/].f_15))
	{
		__LIB_1__::func_559(Global_1347702[uParam0->f_174 /*49*/].f_15, 0, 2);
	}
	__LIB_12__::func_966(uParam0, 0);
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
	}
	__LIB_0__::func_8(&(uParam0->f_172), 8);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 4);
	if (Global_1347702[uParam0->f_174 /*49*/].f_35 != -1)
	{
		__LIB_12__::func_654(uParam0->f_174, 0);
	}
	if (__LIB_12__::func_644(uParam0) == 12)
	{
		__LIB_11__::func_382(uParam0->f_174, 0);
		if (uParam0->f_174 == 65 && __LIB_0__::func_298(0) == Global_1888801[16 /*35*/])
		{
			__LIB_4__::func_838(uParam0->f_174, 8192);
		}
	}
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_12), 32768);
	__LIB_12__::func_949(uParam0);
	__LIB_0__::func_769();
	__LIB_1__::func_721(0);
	__LIB_1__::func_721(1);
	__LIB_4__::func_509(0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_34(var uParam0)
{
	if (__LIB_1__::func_614(joaat("DOCUMENT_TREASURE_MAP_01"), 0, 0) > 0)
	{
		func_122(146, 0, 0, 1, 0, 0, 0);
	}
}

void func_40(var uParam0)
{
	func_177(&Local_15);
}

bool func_51(var uParam0)
{
	int iVar0;
	bool bVar1;
	switch (__LIB_5__::func_381(&iVar0))
	{
		case 1:
			StringCopy(&(uParam0->f_2578), "", 24);
			func_17(uParam0, 0);
			return true;
		case 3:
			if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_3398))
			{
				uParam0->f_3398 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowedtoAbandon", 0);
			}
			if (((__LIB_0__::func_6(iVar0) && iVar0 == Global_1347702[uParam0->f_174 /*49*/].f_15) && __LIB_0__::func_1(uParam0->f_172, 8)) && (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 134217728) || __LIB_0__::func_13(32768)))
			{
				bVar1 = true;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_3398, bVar1);
			break;
	}
	return false;
}

void func_62(var uParam0)
{
	if (Local_15.f_918 == 1 && !__LIB_0__::func_27(Local_15.f_627, 4))
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	}
}

bool func_64(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_382(64))
	{
		return false;
	}
	else if (__LIB_0__::func_1(Global_1935630, 131072))
	{
		return false;
	}
	else if (__LIB_1__::func_927())
	{
		return false;
	}
	else if (Global_1310720.f_6)
	{
		return false;
	}
	else if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 1024))
	{
		return false;
	}
	if (__LIB_0__::func_296(0, 1, 0))
	{
		iVar0 = __LIB_0__::func_298(0);
		if (__LIB_0__::func_6(iVar0) && __LIB_12__::func_769(uParam0, iVar0))
		{
		}
		else
		{
			__LIB_12__::func_643(uParam0, 12);
			return true;
		}
	}
	if (func_190(uParam0->f_174))
	{
		__LIB_12__::func_643(uParam0, 13);
		return true;
	}
	if (Global_1347702[uParam0->f_174 /*49*/].f_12 & 32 == 0)
	{
		if (uParam0->f_743 > (Global_1347702[uParam0->f_174 /*49*/].f_17 * Global_1347702[uParam0->f_174 /*49*/].f_17))
		{
			__LIB_12__::func_643(uParam0, 2);
			return true;
		}
	}
	if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 65536) && !__LIB_9__::func_138(uParam0->f_174))
	{
		__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_12), 16384);
		__LIB_12__::func_643(uParam0, 3);
		return true;
	}
	if (Global_1347702[uParam0->f_174 /*49*/].f_12 & 8388608 != 0)
	{
		iVar1 = __LIB_11__::func_128(uParam0->f_174);
		if (iVar1 != -1)
		{
			if (__LIB_0__::func_730(iVar1))
			{
				if (Global_1347702[uParam0->f_174 /*49*/].f_12 & 512 != 0)
				{
					__LIB_4__::func_838(uParam0->f_174, 32768);
				}
				__LIB_12__::func_643(uParam0, 5);
				return true;
			}
			else if (__LIB_3__::func_151(iVar1))
			{
				if (Global_1347702[uParam0->f_174 /*49*/].f_12 & 512 != 0)
				{
					__LIB_4__::func_838(uParam0->f_174, 32768);
				}
				__LIB_12__::func_643(uParam0, 5);
				return true;
			}
		}
	}
	if (Global_1347702[uParam0->f_174 /*49*/].f_45 != -1)
	{
		if (__LIB_0__::func_730(Global_1347702[uParam0->f_174 /*49*/].f_45))
		{
			__LIB_4__::func_838(uParam0->f_174, 2048);
			__LIB_12__::func_643(uParam0, 6);
			return true;
		}
	}
	if (Global_1347702[uParam0->f_174 /*49*/].f_46 != 0)
	{
		if (Global_1347702[uParam0->f_174 /*49*/].f_12 & 268435456 == 0)
		{
			iVar2 = __LIB_2__::func_954();
			if (!__LIB_12__::func_614(iVar2, Global_1347702[uParam0->f_174 /*49*/].f_46))
			{
				__LIB_12__::func_643(uParam0, 7);
				return true;
			}
		}
	}
	if (Global_1357549.f_1614 == 1)
	{
		__LIB_12__::func_643(uParam0, 8);
		return true;
	}
	if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 8192))
	{
		if (__LIB_7__::func_411(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			__LIB_4__::func_838(uParam0->f_174, 16384);
			__LIB_12__::func_643(uParam0, 9);
			return true;
		}
	}
	if (uParam0->f_172 & 256 != 0 && !__LIB_12__::func_778(uParam0->f_174, 1, 1, 0, 0))
	{
		__LIB_12__::func_643(uParam0, 10);
		return true;
	}
	if (__LIB_1__::func_976(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
	{
		__LIB_4__::func_838(uParam0->f_174, 1024);
		__LIB_12__::func_643(uParam0, 11);
		return true;
	}
	if (!__LIB_0__::func_58(uParam0) && __LIB_10__::func_270(uParam0->f_743))
	{
		__LIB_4__::func_838(uParam0->f_174, 8192);
		__LIB_12__::func_643(uParam0, 11);
		return true;
	}
	return false;
}

void func_66(var uParam0)
{
	bool bVar0;
	__LIB_12__::func_955();
	func_204(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		bVar0 = true;
		if (bVar0)
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			}
			HUD::DISPLAY_HUD(true);
			MAP::DISPLAY_RADAR(true);
		}
		AUDIO::STOP_AUDIO_SCENES();
		if (__LIB_12__::func_644(uParam0) != 0)
		{
			UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
			__LIB_5__::func_102();
			if (__LIB_12__::func_644(uParam0) == 1)
			{
				__LIB_4__::func_683(uParam0->f_174, 1);
			}
		}
		if (__LIB_0__::func_1(uParam0->f_172, 67108864))
		{
			__LIB_12__::func_868(1);
			__LIB_0__::func_8(&(uParam0->f_172), 67108864);
		}
		__LIB_1__::func_723(0);
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
			PED::_0xEAE3B5B019C8D23F(Global_35, 262143);
			__LIB_1__::func_733(Global_35);
			PED::SET_PED_CONFIG_FLAG(Global_35, 170, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
		}
		if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
		{
			TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), true);
		}
	}
	if (__LIB_12__::func_644(uParam0) == 3)
	{
		__LIB_12__::func_930(uParam0->f_174);
	}
	else if (__LIB_12__::func_644(uParam0) == 2)
	{
	}
	else if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_14, 2))
	{
		__LIB_11__::func_382(uParam0->f_174, 0);
	}
	__LIB_8__::func_993(uParam0->f_174);
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		__LIB_9__::func_239(uParam0->f_174);
		__LIB_12__::func_895(uParam0);
	}
	__LIB_12__::func_975(uParam0);
	__LIB_1__::func_564(0);
	__LIB_12__::func_966(uParam0, 0);
	__LIB_12__::func_918(uParam0, 4);
	__LIB_0__::func_8(&(uParam0->f_172), 8);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 1024);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
	__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 4);
	__LIB_1__::func_561(&(uParam0->f_2585));
	__LIB_12__::func_794(uParam0);
}

void func_68(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;
	if (__LIB_12__::func_639(uParam0, 64))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 256))
	{
		if ((__LIB_0__::func_1(uParam0->f_172, 4194304) && uParam0->f_177 == 4) && !__LIB_12__::func_882(uParam0))
		{
			__LIB_0__::func_8(&(uParam0->f_172), 256);
			__LIB_3__::func_319(uParam0->f_751);
			func_219(uParam0);
		}
		else
		{
			__LIB_12__::func_838(uParam0);
		}
	}
	else if (uParam0->f_177 == 4)
	{
		if (__LIB_12__::func_882(uParam0))
		{
			if (__LIB_0__::func_1(uParam0->f_172, 16))
			{
				cVar0 = { __LIB_0__::func_134() };
				Var8 = { __LIB_12__::func_665(&(uParam0->f_206)) };
				if (!MISC::ARE_STRINGS_EQUAL(&Var8, &cVar0))
				{
					__LIB_12__::func_909(&(uParam0->f_206));
					__LIB_12__::func_839(&(uParam0->f_206), &cVar0);
				}
			}
			__LIB_0__::func_7(&(uParam0->f_172), 256);
		}
	}
}

bool func_79(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		return true;
	}
	if (__LIB_12__::func_924(uParam0) && func_244(uParam0))
	{
		__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
		return true;
	}
	return false;
}

void func_81(var uParam0)
{
	bool bVar0;
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1206))
	{
		VOLUME::_DELETE_VOLUME(iLocal_1206);
	}
	bVar0 = false;
	if (__LIB_0__::func_181())
	{
		bVar0 = true;
	}
	__LIB_12__::func_981(uParam0, 36180);
	__LIB_12__::func_846(&(uParam0->f_206));
	StringCopy(&(uParam0->f_2575), "RETH_INT", 24);
	if (bVar0)
	{
		__LIB_13__::func_59(uParam0, Global_35, "JOHN", 0, 0, 0);
	}
	else
	{
		__LIB_13__::func_59(uParam0, Global_35, "ARTHUR", 0, 0, 0);
	}
	__LIB_13__::func_59(uParam0, Local_15.f_604[0], "A_M_M_BiVRoughTravellers_01", 0, 0, 0);
	__LIB_13__::func_59(uParam0, Local_15.f_604[1], "Horse_01", 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_68[0 /*12*/].f_8))
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_68[1 /*12*/].f_8))
	{
	}
	__LIB_12__::func_957(uParam0, Local_15.f_68[0 /*12*/].f_8, "P_BINOCULARS01X", 0, 0, 0);
	__LIB_12__::func_779(uParam0, __LIB_1__::func_440(uParam0->f_174));
	iLocal_1206 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(Global_1347702[uParam0->f_174 /*49*/].f_24, 0f, 0f, 37.04514f, 7.63871f, 4.926552f, 3.689306f, "restrictionVolume");
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1206))
	{
		__LIB_13__::func_325(uParam0, &iLocal_1206, 0, 0, 0, 0);
	}
	__LIB_0__::func_7(&(uParam0->f_172), 16);
}

bool func_86(var uParam0)
{
	bool bVar0;
	if (__LIB_12__::func_738(uParam0))
	{
		return true;
	}
	bVar0 = false;
	if (__LIB_0__::func_1(uParam0->f_172, 4096) || __LIB_12__::func_766())
	{
		bVar0 = true;
	}
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 1024))
	{
		if (!bVar0)
		{
			return true;
		}
	}
	if (__LIB_0__::func_1(uParam0->f_172, 262144) && !__LIB_0__::func_1(uParam0->f_172, 256))
	{
		__LIB_14__::func_18(uParam0, bVar0);
		if (__LIB_0__::func_1(uParam0->f_172, 524288))
		{
			return true;
		}
		else if (__LIB_0__::func_1(uParam0->f_172, 1048576))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		if (bVar0)
		{
			return false;
		}
		if (uParam0->f_171 != 0 || func_269(uParam0))
		{
			if (__LIB_13__::func_40(uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_92(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 1024) && uParam0->f_176 == 4)
	{
		if (!__LIB_0__::func_1(uParam0->f_172, 1))
		{
			return false;
		}
		if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
		{
			SCRIPTS::SHUTDOWN_LOADING_SCREEN();
			return false;
		}
		MISC::_0xA565FAC215CBC77D();
		return true;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 256))
	{
		if (!__LIB_13__::func_448(uParam0))
		{
			if ((__LIB_0__::func_1(uParam0->f_172, 8192) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_751)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_751, false))
			{
				if (__LIB_0__::func_1(uParam0->f_172, 8388608) || func_79(uParam0))
				{
					__LIB_12__::func_918(uParam0, 2);
					if (!__LIB_0__::func_1(uParam0->f_172, 16))
					{
						func_81(uParam0);
					}
				}
			}
			return false;
		}
	}
	else if (__LIB_0__::func_1(uParam0->f_172, 262144) && !__LIB_0__::func_1(uParam0->f_172, 256))
	{
		__LIB_14__::func_18(uParam0, 0);
		if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
		{
			return false;
		}
	}
	else
	{
		__LIB_12__::func_668();
		__LIB_12__::func_669(uParam0);
		if (!__LIB_13__::func_449(uParam0))
		{
			return false;
		}
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 1))
	{
	}
	return true;
}

bool func_95(var uParam0)
{
	struct<4> Var0;
	MemCopy(&Var0, {uParam0->f_2575}, 4);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		return true;
	}
	return func_284(Var0, &(uParam0->f_206), uParam0);
}

int func_97(var uParam0)
{
	vector3 vVar0;
	Global_1901328.f_95 = 1;
	Local_15.f_68[1 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_15.f_68[1 /*12*/].f_7, Local_15.f_996.f_51, true, true, false, false, true);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_15.f_68[1 /*12*/].f_8, Local_15.f_604[0], PED::GET_PED_BONE_INDEX(Local_15.f_604[0], 37709), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
	ENTITY::SET_ENTITY_COORDS(Global_35, -584.3869f, -350.2329f, 80.9645f, true, false, true, true);
	Local_15.f_928 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -585.715f, -350.936f, 83.0482f, -13.0001f, 0f, -88.6236f, 50.0324f, true, 2);
	CAM::SET_CAM_PARAMS(Local_15.f_928, -585.715f, -350.936f, 83.0482f, -13.0001f, 0f, -88.6236f, 50.0324f, 10, 1, 1, 2, 1, 0);
	CAM::RENDER_SCRIPT_CAMS(true, false, 1500, true, false, 0);
	TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(Local_15.f_604[0], func_288(51), func_289(51), Global_35, -1, 2f, -2f, 67109393, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
	func_290(&Local_15);
	Local_15.f_919 = 0;
	__LIB_12__::func_953(&(Local_15.f_781[0 /*61*/]), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_15.f_596, "MAP", Local_15.f_68[1 /*12*/].f_8, 0);
	PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("RETH_MAXIMO_NAME"));
	__LIB_0__::func_325(&(Local_15.f_607[0]));
	Local_15.f_607[0] = __LIB_1__::func_863(Local_15.f_604[0], -89429847, 1, 1);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_15.f_607[0], "RETH_MAXIMO_NAME");
	__LIB_11__::func_382(uParam0->f_174, 0);
	__LIB_0__::func_172(Local_15.f_616);
	__LIB_0__::func_172(Local_15.f_617);
	__LIB_0__::func_172(Local_15.f_618);
	__LIB_0__::func_172(Local_15.f_619);
	__LIB_0__::func_172(Local_15.f_620);
	__LIB_0__::func_172(Local_15.f_621);
	__LIB_0__::func_172(Local_15.f_622);
	__LIB_0__::func_172(Local_15.f_623);
	__LIB_0__::func_172(Local_15.f_624);
	__LIB_0__::func_172(Local_15.f_625);
	__LIB_0__::func_172(Local_15.f_626);
	if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_68[0 /*12*/].f_8))
	{
		OBJECT::DELETE_OBJECT(&(Local_15.f_68[0 /*12*/].f_8));
		__LIB_1__::func_683(&(Local_15.f_627), 4);
	}
	__LIB_1__::func_951(&(Local_15.f_68[2 /*12*/].f_8));
	ENTITY::SET_ENTITY_VISIBLE(Local_15.f_68[1 /*12*/].f_8, true);
	__LIB_1__::func_681(&(Local_15.f_627), 2097152);
	STREAMING::REQUEST_CLIP_SET("SCRIPT_RE@TREASURE_HUNTER@TREASURE_HUNTER_OFFER@ENTER");
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_15.f_612))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_15.f_604[0], true, false) };
		TASK::_SET_SCENARIO_POINT_COORDS(Local_15.f_612, vVar0, true);
	}
	return 7;
}

bool func_98(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 256) && !__LIB_0__::func_1(uParam0->f_172, 1024))
	{
		if (!__LIB_13__::func_448(uParam0))
		{
			if (__LIB_0__::func_1(uParam0->f_172, 512) && __LIB_0__::func_1(uParam0->f_172, 8192))
			{
				if (func_79(uParam0))
				{
					if (!__LIB_0__::func_1(uParam0->f_172, 16))
					{
						func_81(uParam0);
					}
				}
			}
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

int func_101(var uParam0)
{
	if (Local_15.f_131 == 1)
	{
		Local_15.f_131 = 0;
		Local_15.f_68[2 /*12*/].f_8 = Local_15.f_68[1 /*12*/].f_8;
		__LIB_12__::func_957(uParam0, Local_15.f_68[2 /*12*/].f_8, "s_tm_hearlands", 0, 0, 0);
		return 5;
	}
	return func_300();
}

void func_122(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	char[] cVar0[8];
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_113())
	{
		__LIB_3__::func_727(iParam0, 1);
	}
	if (iParam0 == 85)
	{
		MISC::_0xCC3EDC5614B03F61(18);
	}
	else if (iParam0 == 86)
	{
		MISC::_0xCC3EDC5614B03F61(19);
	}
	else if (iParam0 == 87)
	{
		MISC::_0xCC3EDC5614B03F61(20);
	}
	else if (iParam0 == 135)
	{
		MISC::_0xCC3EDC5614B03F61(73);
	}
	else if (iParam0 == 20)
	{
		MISC::_0xCC3EDC5614B03F61(6);
	}
	else if (iParam0 == 19)
	{
		MISC::_0xCC3EDC5614B03F61(7);
	}
	else if (iParam0 == 12)
	{
		MISC::_0xCC3EDC5614B03F61(10);
	}
	else if (iParam0 == 16)
	{
		MISC::_0xCC3EDC5614B03F61(11);
	}
	else if (iParam0 == 17)
	{
		MISC::_0xCC3EDC5614B03F61(13);
	}
	else if (iParam0 == 18)
	{
		MISC::_0xCC3EDC5614B03F61(14);
	}
	else if (iParam0 == 14)
	{
		MISC::_0xCC3EDC5614B03F61(15);
	}
	if (iParam0 == 95)
	{
		if (!__LIB_0__::func_13(32768))
		{
			if (STATS::CHAL_IS_GOAL_ACTIVE(joaat("SP_ACHIEVEMENTS"), joaat("ACH_FWB")))
			{
				STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(joaat("ACH_FWB_CLEMENS"), 1);
			}
		}
	}
	else if (iParam0 == 102)
	{
		if (!__LIB_0__::func_113())
		{
			Global_1347702[iParam0 /*49*/].f_35 = 104;
			Global_1347702[104 /*49*/].f_48 = Global_1347702[iParam0 /*49*/].f_15;
		}
	}
	__LIB_12__::func_935(iParam0, 0, iParam3);
	if (__LIB_0__::func_5(Global_1347702[iParam0 /*49*/].f_35))
	{
		__LIB_13__::func_8(Global_1347702[iParam0 /*49*/].f_35);
		if (iParam1 == 1)
		{
			__LIB_4__::func_471(Global_1347702[iParam0 /*49*/].f_35, 0);
			if (__LIB_11__::func_197(iParam0))
			{
				Global_1347702[Global_1347702[iParam0 /*49*/].f_35 /*49*/].f_43 = Global_1347702[iParam0 /*49*/].f_43;
			}
		}
	}
	else
	{
		__LIB_12__::func_931();
	}
	if (!__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 1) && !__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 33554432))
	{
		if (__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 262144))
		{
			if (bParam5)
			{
				__LIB_10__::func_709(iParam0);
			}
			bParam5 = false;
			cVar0 = __LIB_1__::func_613(Global_1347702[iParam0 /*49*/].f_15);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
			{
				MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&cVar0), 2);
			}
			__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_12), 262144);
		}
	}
	if (bParam2 == 1)
	{
		bParam2 = __LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 4);
	}
	if (!__LIB_0__::func_13(32768))
	{
		func_335(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		__LIB_1__::func_809(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	__LIB_10__::func_833(iParam0);
}

bool func_143(var uParam0)
{
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		if (!func_364(&Local_15))
		{
			return false;
		}
		if (__LIB_1__::func_614(joaat("DOCUMENT_TREASURE_MAP_01"), 0, 0) == 0)
		{
			__LIB_3__::func_537(66, 1, 1);
		}
		return true;
	}
	return true;
}

void func_144(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (__LIB_9__::func_723(Local_15.f_604[0], 0, &(Local_15.f_996.f_5), &(Local_15.f_987), 0, 0))
	{
		if (((Local_15.f_987 != 256 && Local_15.f_987 != 8192) && Local_15.f_987 != 16384) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_15.f_604[1], Global_35, 1, 1))
		{
			Local_15.f_996.f_46 = 1;
			if (__LIB_1__::func_614(joaat("DOCUMENT_TREASURE_MAP_01"), 0, 0) == 0)
			{
				Global_1357515 = -1;
			}
			func_122(146, 0, 0, 1, 1, 1, 0);
		}
	}
	__LIB_2__::func_788(&(Global_1347702[uParam0->f_174 /*49*/].f_43), 1, 0, 1);
	if (__LIB_0__::func_899(&(Local_15.f_978)))
	{
		__LIB_1__::func_561(&(Local_15.f_978));
		AUDIO::STOP_PED_SPEAKING(Global_35, false);
	}
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		if (Local_15.f_898 == 0)
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			}
		}
	}
	__LIB_0__::func_172(Local_15.f_616);
	if (__LIB_0__::func_27(Local_15.f_628, 8) || Local_15.f_996.f_46 == 1)
	{
		__LIB_2__::func_115(66, 1, 0, 0, 0, 2, 0, 1);
	}
	CAM::STOP_GAMEPLAY_HINT(false);
	if (VOLUME::_DOES_VOLUME_EXIST(Local_15.f_615))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(Local_15.f_615);
	}
	__LIB_0__::func_325(&(Local_15.f_929));
	func_368(&Local_15);
	MAP::DISPLAY_RADAR(true);
	__LIB_3__::func_969(&(Local_15.f_613), 1);
	__LIB_2__::func_353(&(Local_15.f_990), 1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_68[4 /*12*/].f_8))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_15.f_68[4 /*12*/].f_8));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_68[1 /*12*/].f_8))
	{
		MISC::_0xA08111B053D84B4D(Local_15.f_68[1 /*12*/].f_8);
	}
	bVar0 = false;
	iVar1 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_68[1 /*12*/].f_8))
	{
		if (__LIB_4__::func_497())
		{
			ENTITY::PLAY_ENTITY_ANIM(Local_15.f_68[1 /*12*/].f_8, func_289(8), func_288(8), 4f, false, true, false, 0f, 0);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_15.f_68[1 /*12*/].f_8));
			bVar0 = true;
		}
		else
		{
			OBJECT::DELETE_OBJECT(&(Local_15.f_68[1 /*12*/].f_8));
			__LIB_2__::func_463(Local_15.f_604[0], joaat("DOCUMENT_TREASURE_MAP_01"), 1, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_68[0 /*12*/].f_8))
	{
		iVar1 = 1;
		if (__LIB_4__::func_497())
		{
			__LIB_2__::func_919(Local_15.f_68[0 /*12*/].f_8, 1, 1);
			ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_15.f_68[0 /*12*/].f_8, true);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_15.f_68[0 /*12*/].f_8));
		}
		else
		{
			OBJECT::DELETE_OBJECT(&(Local_15.f_68[0 /*12*/].f_8));
		}
	}
	if (__LIB_2__::func_1(Local_15.f_604[0], 0, 1))
	{
		PED::_0x931B241409216C1F(Local_15.f_604[0], Local_15.f_604[1], 0);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_604[0], 315, false);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_604[0], 130, false);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_604[0], 178, true);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_604[0], 330, true);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_604[0], 413, true);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_604[0], 317, true);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), Local_15.f_604[0], 18, 2, 1);
		if (!__LIB_0__::func_394(Local_15.f_604[0], Local_15.f_604[1], 0))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar2);
			if (bVar0)
			{
				if (iVar1 == 0)
				{
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, func_288(51), func_289(51), Global_35, 5000, 4f, -2f, 67109392, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
				}
				else
				{
					TASK::TASK_PLAY_ANIM(0, "script_re@treasure_hunter", "outro", 2f, -8f, -1, 0, 0f, false, 0, false, 0, false);
				}
			}
			TASK::TASK_MOUNT_ANIMAL(0, Local_15.f_604[1], -1, -1, 2f, 1, 0, 0);
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 256, -1082130432 /* Float: -1f */, -1, 0);
			__LIB_1__::func_474(Local_15.f_604[0], &iVar2, 0, 0, 1, 1);
			PED::SET_PED_KEEP_TASK(Local_15.f_604[0], true);
		}
		PED::SET_PED_CONFIG_FLAG(Local_15.f_604[0], 321, true);
		__LIB_3__::func_259(Local_15.f_604[0], 0);
	}
	if (__LIB_2__::func_1(Local_15.f_604[1], 0, 1))
	{
		__LIB_3__::func_259(Local_15.f_604[1], 0);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_15.f_996.f_171))
	{
		POPULATION::_0xA1CFB35069D23C23(Local_15.f_996.f_171);
		POPULATION::_0x74C2B3DC0B294102(Local_15.f_996.f_171);
	}
	__LIB_6__::func_357();
	Local_15.f_983 = 0;
	iLocal_14 = 0;
}

void func_177(var uParam0)
{
	uParam0->f_595 = 1;
	uParam0->f_3[0 /*32*/].f_1 = joaat("CS_TREASUREHUNTER");
	uParam0->f_3[0 /*32*/] = 4;
	StringCopy(&(uParam0->f_3[0 /*32*/].f_23), "RE_TREASURE_HUNTER", 64);
	uParam0->f_3[1 /*32*/].f_1 = joaat("A_C_HORSE_NOKOTA_BLUEROAN");
	uParam0->f_3[1 /*32*/] = 4;
	__LIB_14__::func_175(&(uParam0->f_3[0 /*32*/].f_22));
}

bool func_190(int iParam0)
{
	int iVar0;
	int iVar1;
	if (Global_1347702[iParam0 /*49*/].f_13 & 8 != 0)
	{
		return true;
	}
	if (__LIB_1__::func_25(Global_1835011[43 /*74*/].f_1, 1))
	{
		if (!__LIB_1__::func_25(Global_1835011[44 /*74*/].f_1, 1))
		{
			if (iParam0 != 82 && iParam0 != 83)
			{
				return true;
			}
		}
		if (__LIB_1__::func_25(Global_1835011[67 /*74*/].f_1, 1))
		{
			if ((!__LIB_1__::func_25(Global_1347702[8 /*49*/].f_15, 1) && !__LIB_1__::func_25(Global_1835011[69 /*74*/].f_1, 1)) && iParam0 != 8)
			{
				if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1835011[67 /*74*/].f_22)) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Global_1835011[67 /*74*/].f_22))) > 0)
				{
					return true;
				}
			}
		}
	}
	else if ((!__LIB_8__::func_779(2) && !__LIB_1__::func_25(Global_1347702[61 /*49*/].f_15, 1)) && __LIB_1__::func_25(Global_1347702[59 /*49*/].f_15, 1))
	{
		if (iParam0 != 60 && iParam0 != 61)
		{
			return true;
		}
	}
	if (iParam0 == 15)
	{
		iVar1 = __LIB_1__::func_293(__LIB_3__::func_574(65536), 0, 3, __LIB_3__::func_575(65536));
		if (__LIB_0__::func_6(iVar1))
		{
			iVar0 = __LIB_0__::func_895(iVar1);
			if (!__LIB_0__::func_27(iVar0, 4))
			{
				return true;
			}
		}
	}
	else if (iParam0 == 26 || iParam0 == 27)
	{
		if (((((!__LIB_1__::func_25(Global_1835011[14 /*74*/].f_1, 1) && __LIB_1__::func_25(Global_1347702[62 /*49*/].f_15, 1)) && __LIB_1__::func_25(Global_1347702[0 /*49*/].f_15, 1)) && __LIB_1__::func_25(Global_1347702[94 /*49*/].f_15, 1)) && __LIB_1__::func_25(Global_1835011[25 /*74*/].f_1, 1)) && (__LIB_1__::func_25(Global_1835011[8 /*74*/].f_1, 1) || (__LIB_1__::func_25(Global_1347702[98 /*49*/].f_15, 1) && __LIB_0__::func_895(Global_1347702[98 /*49*/].f_15) == 0)))
		{
			return true;
		}
	}
	else if (iParam0 == 27)
	{
		if (!__LIB_1__::func_25(Global_1835011[34 /*74*/].f_1, 1))
		{
			return true;
		}
	}
	else if (iParam0 == 42)
	{
		if (!__LIB_1__::func_25(Global_1347702[41 /*49*/].f_15, 1))
		{
			if (!__LIB_0__::func_315(8))
			{
				return true;
			}
		}
	}
	else if (iParam0 == 51)
	{
		if (!__LIB_11__::func_139(2))
		{
			return true;
		}
	}
	else if (iParam0 == 52)
	{
		if (!__LIB_1__::func_25(Global_1347702[51 /*49*/].f_15, 1))
		{
			return true;
		}
	}
	else if (iParam0 == 57)
	{
		if (__LIB_0__::func_702(Global_1835011[21 /*74*/].f_1))
		{
			return true;
		}
	}
	else if (iParam0 == 69 || iParam0 == 70)
	{
		if (__LIB_5__::func_297(Global_1347702[iParam0 /*49*/].f_15) == 0)
		{
			if (__LIB_0__::func_342() <= 160)
			{
				return true;
			}
			else
			{
				__LIB_7__::func_448(Global_1347702[iParam0 /*49*/].f_15, 1);
			}
		}
		if (!__LIB_1__::func_187(68))
		{
			return true;
		}
	}
	else if (iParam0 == 77)
	{
		if (__LIB_0__::func_702(Global_1835011[47 /*74*/].f_1))
		{
			return true;
		}
		else if (__LIB_0__::func_702(Global_1835011[45 /*74*/].f_1))
		{
			return true;
		}
		else if (__LIB_0__::func_627(16, 0))
		{
			return true;
		}
	}
	else if (iParam0 == 87)
	{
		if (__LIB_0__::func_702(Global_1835011[21 /*74*/].f_1))
		{
			return true;
		}
	}
	else if (iParam0 == 95)
	{
		if (__LIB_0__::func_702(Global_1835011[20 /*74*/].f_1))
		{
			return true;
		}
		else if (__LIB_0__::func_702(Global_1835011[21 /*74*/].f_1))
		{
			return true;
		}
	}
	else if (iParam0 == 113)
	{
		if (MISC::GET_GAME_TIMER() + 5000 < Global_1898438)
		{
			return true;
		}
		else if (Global_1879534.f_1 || Global_1879534)
		{
			return true;
		}
		else if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[113 /*49*/].f_42, false) && __LIB_11__::func_188())
		{
			if (__LIB_1__::func_422("MUDTOWN32_altobj", 7500, 0, 1, 0, 0, -1, -1, 0) != 0)
			{
				__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_12), 262144);
				__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_12), 64);
				func_122(113, 1, 0, 1, 1, 1, 0);
				return true;
			}
		}
	}
	else if (iParam0 == 99)
	{
		if (__LIB_1__::func_198(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), 1))
		{
			return true;
		}
	}
	else if (iParam0 == 117)
	{
		if (__LIB_0__::func_702(Global_1835011[69 /*74*/].f_1))
		{
			return true;
		}
	}
	else if (iParam0 == 136)
	{
		if (__LIB_0__::func_702(Global_1835011[21 /*74*/].f_1))
		{
			return true;
		}
	}
	return false;
}

void func_204(var uParam0)
{
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		func_364(&Local_15);
	}
}

void func_219(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 16))
	{
		__LIB_12__::func_966(uParam0, 0);
		func_81(uParam0);
	}
}

int func_244(var uParam0)
{
	switch (iLocal_14)
	{
		case 0:
			Local_15.f_996.f_3 = 66;
			MAP::ALLOW_SONAR_BLIPS(true);
			__LIB_4__::func_228(&(Local_15.f_996.f_5));
			func_511(&Local_15);
			Local_15.f_996.f_51 = { -586.4957f, -344.5864f, 82.4029f };
			Local_15.f_996.f_51.f_4 = 0;
			if (!func_512())
			{
				return 0;
			}
			__LIB_6__::func_282(10);
			iLocal_14 = 1;
			break;
		case 1:
			switch (Local_15.f_986)
			{
				case 0:
					if (ENTITY::DOES_ENTITY_EXIST(Global_1347702[uParam0->f_174 /*49*/].f_43))
					{
						Local_15.f_986 = 3;
					}
					break;
				case 3:
					if (!ENTITY::DOES_ENTITY_EXIST(Local_15.f_68[0 /*12*/].f_8))
					{
						if (STREAMING::IS_MODEL_VALID(Local_15.f_68[0 /*12*/].f_7))
						{
							Local_15.f_68[0 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_15.f_68[0 /*12*/].f_7, Local_15.f_996.f_51, true, true, false, false, true);
						}
					}
					Local_15.f_986 = 2;
					break;
				case 2:
					if (!ENTITY::DOES_ENTITY_EXIST(Local_15.f_604[0]))
					{
						Local_15.f_604[0] = Global_1347702[uParam0->f_174 /*49*/].f_43;
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_15.f_604[1]))
					{
						Local_15.f_604[1] = __LIB_12__::func_885(uParam0, Local_15.f_3[1 /*32*/].f_1, -582.1776f, -350.801f, 80.74664f, -103f, 1, 1, 0, 1, 1, 1, 1, 0);
					}
					if (((!ENTITY::IS_ENTITY_DEAD(Local_15.f_604[0]) && PED::_0xA0BC8FAED8CFEB3C(Local_15.f_604[0])) && !ENTITY::IS_ENTITY_DEAD(Local_15.f_604[1])) && PED::_0xA0BC8FAED8CFEB3C(Local_15.f_604[1]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15.f_604[0], true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15.f_604[1], true);
						if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_68[0 /*12*/].f_8))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_15.f_68[0 /*12*/].f_8, Local_15.f_604[0], PED::GET_PED_BONE_INDEX(Local_15.f_604[0], 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
						}
						__LIB_2__::func_133(Local_15.f_604[0], "RE_TREASURE_HUNTER", 0);
						Local_15.f_986 = 1;
					}
					break;
				case 1:
					return 1;
			}
			break;
	}
	return 0;
}

void func_262(var uParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_13__::func_23(uParam0, "RETH_INT"))
	{
		if (Local_15.f_911 == 0)
		{
			iVar0 = PED::_GET_LAST_MOUNT(Global_35);
			if (__LIB_2__::func_1(iVar0, 0, 1))
			{
				if (__LIB_0__::func_665(iVar0, Local_15.f_604[0], 1, 1) < 15f)
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(iVar0))
					{
						ENTITY::SET_ENTITY_COORDS(iVar0, -592.9061f, -372.0009f, 80.20973f, true, false, true, true);
						Local_15.f_911 = 1;
					}
				}
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(iVar1))
				{
					func_535(iVar1, -598.4936f, -372.5468f, 80.23688f, 47f, 2, 1073741824 /* Float: 2f */);
					Local_15.f_911 = 1;
				}
			}
		}
		if (__LIB_13__::func_193(uParam0, Local_15.f_604[0], "A_M_M_BiVRoughTravellers_01", 0, 1, 1))
		{
			if (__LIB_2__::func_1(Local_15.f_604[0], 0, 1))
			{
				__LIB_1__::func_683(&(Local_15.f_628), 8);
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_15.f_604[0], 576298046))
		{
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(Local_15.f_604[0], func_288(51), func_289(51), Global_35, -1, 1000f, -2f, 67109393, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
		}
	}
}

bool func_269(var uParam0)
{
	float fVar0;
	if (__LIB_0__::func_94(Global_35, Global_1347702[uParam0->f_174 /*49*/].f_24, 1) > 400f)
	{
		return false;
	}
	__LIB_0__::func_7(&(Global_1347702[146 /*49*/].f_12), 128);
	func_300();
	fVar0 = __LIB_0__::func_665(Global_35, Local_15.f_604[0], 1, 1);
	if (fVar0 < 21f)
	{
		__LIB_0__::func_325(&(Global_1347702[uParam0->f_174 /*49*/].f_37));
	}
	else
	{
		__LIB_0__::func_325(&(Local_15.f_607[0]));
	}
	if ((fVar0 < 21f && Local_15.f_918 == 1) || Local_15.f_996.f_46 == 1)
	{
		if (Local_15.f_996.f_46 == 1)
		{
			__LIB_0__::func_7(&(Global_1347702[146 /*49*/].f_12), 128);
			return true;
		}
		__LIB_1__::func_683(&(Local_15.f_628), 8192);
		return true;
	}
	return false;
}

int func_284(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	__LIB_12__::func_750(uParam4, &uParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		__LIB_12__::func_927(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (__LIB_0__::func_81(uParam4))
	{
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_348, true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_348, false))
				{
					__LIB_13__::func_18(uParam4, &uParam0, uParam5);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348))
				{
					__LIB_8__::func_726(uParam4, 4);
					return 0;
				}
				else
				{
					if (__LIB_12__::func_688(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_341);
					}
					__LIB_12__::func_800(uParam5);
				}
				__LIB_8__::func_726(uParam4, 3);
			}
			else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_350)) && __LIB_0__::func_84(uParam4, 134217728))
				{
				}
				else
				{
					__LIB_12__::func_909(uParam4);
				}
				__LIB_2__::func_259(&(uParam4->f_1));
				__LIB_8__::func_726(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				__LIB_12__::func_913(uParam4);
				if (!__LIB_0__::func_899(&(uParam4->f_1)))
				{
					__LIB_4__::func_89(&(uParam4->f_1), 0);
				}
				else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					__LIB_8__::func_726(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348) || !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_348, true, false))
			{
				if (__LIB_13__::func_4(uParam4, &uParam0, 1, 1))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_348, true, false))
					{
						__LIB_8__::func_726(uParam4, 4);
					}
					else if (!__LIB_0__::func_86(__LIB_0__::func_85(uParam4)) && !__LIB_0__::func_266(Global_35, __LIB_0__::func_85(uParam4), 100f, 1, 1))
					{
						__LIB_0__::func_87(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), __LIB_0__::func_85(uParam4), 0f, true, true, true, false);
					}
				}
				else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					__LIB_8__::func_726(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::_0xA565FAC215CBC77D();
					__LIB_0__::func_722(1, 0);
					__LIB_13__::func_18(uParam4, &uParam0, uParam5);
					__LIB_8__::func_726(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
				}
				__LIB_8__::func_726(uParam4, 4);
			}
			break;
		case 3:
			func_570(uParam4);
			if (__LIB_12__::func_688(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_341);
			}
			__LIB_12__::func_800(uParam5);
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_348, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348) || __LIB_0__::func_84(uParam4, 512)))
			{
				if (!__LIB_0__::func_84(uParam4, 1024) && __LIB_13__::func_14(uParam4, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!__LIB_0__::func_84(uParam4, 512))
				{
					__LIB_2__::func_259(&(uParam4->f_1));
					__LIB_0__::func_88(uParam4, 512);
					__LIB_8__::func_726(uParam4, 4);
				}
				else if (__LIB_0__::func_84(uParam4, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
					}
					CAM::DO_SCREEN_FADE_OUT(0);
				}
			}
			else
			{
				__LIB_12__::func_927(uParam4);
			}
			if (__LIB_0__::func_84(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((__LIB_12__::func_689(uParam4) - __LIB_12__::func_685(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (__LIB_12__::func_752(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && __LIB_12__::func_685(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (__LIB_12__::func_690(uParam4))
			{
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
				}
				__LIB_0__::func_488(uParam4);
				__LIB_13__::func_334(uParam4);
				return 1;
			}
			else
			{
				if (__LIB_0__::func_84(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_348);
						}
						__LIB_2__::func_259(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_12__::func_677(uParam4, 67108864, 1);
						__LIB_8__::func_726(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!__LIB_0__::func_84(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348)) && CAM::IS_SCREEN_FADED_OUT()) && __LIB_12__::func_685(uParam4) <= 5000) && __LIB_12__::func_685(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!__LIB_0__::func_84(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					__LIB_6__::func_726(&(uParam4->f_405), 0);
					__LIB_0__::func_88(uParam4, 536870912);
				}
				if (__LIB_12__::func_685(uParam4) >= 5000 && __LIB_12__::func_685(uParam4) <= (__LIB_12__::func_689(uParam4) - 5000))
				{
					__LIB_0__::func_89();
				}
			}
			break;
		case 6:
			if (__LIB_12__::func_690(uParam4))
			{
				__LIB_0__::func_488(uParam4);
				__LIB_13__::func_334(uParam4);
				return 1;
			}
			break;
		case 4:
			if (__LIB_0__::func_84(uParam4, 524288))
			{
				ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348))
					{
						__LIB_0__::func_88(uParam4, 1073741824 /* Float: 2f */);
					}
				}
			}
			else
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, true);
						if (UIFEED::_0xC17F69E1418CD11F(9) != 0)
						{
							UIFEED::_0xDD1232B332CBB9E7(9, 1, 0);
						}
						return 0;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam4->f_348))
					{
						return 0;
					}
				}
				if (iVar0 == 0)
				{
					if (__LIB_12__::func_801(uParam5))
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, false);
						}
						__LIB_8__::func_726(uParam4, 3);
					}
					else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, false);
						}
						__LIB_8__::func_726(uParam4, 3);
					}
				}
				if (__LIB_0__::func_81(uParam4) == 3)
				{
					if (__LIB_0__::func_84(uParam4, 524288))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			break;
		case 5:
			__LIB_8__::func_726(uParam4, 4);
			break;
	}
	return 0;
}

char* func_288(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script_re@treasure_hunter";
		case 1:
			return "script_re@treasure_hunter";
		case 2:
			return "script_re@treasure_hunter";
		case 3:
			return "script_re@treasure_hunter";
		case 4:
			return "script_re@treasure_hunter";
		case 5:
			return "script_re@treasure_hunter";
		case 6:
			return "script_re@treasure_hunter";
		case 7:
			return "script_re@treasure_hunter";
		case 8:
			return "script_re@treasure_hunter";
		case 9:
			return "script_re@treasure_hunter";
		case 11:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 10:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 12:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 13:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 14:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 15:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 16:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 17:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 18:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 19:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 20:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 21:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 22:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 23:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 24:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 25:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 26:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 27:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 28:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 29:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 30:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 31:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 32:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 33:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 34:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 35:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 36:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 37:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 38:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 39:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 40:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 41:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 42:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 43:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 44:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 45:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 46:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 47:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 48:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 49:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 50:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 51:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		case 52:
			return "script_re@treasure_hunter@treasure_hunter_offer";
		default:
			break;
	}
	return "script_re@treasure_hunter@treasure_hunter_offer";
	return "NONE";
}

char* func_289(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "base_idle";
		case 1:
			return "idle_a";
		case 2:
			return "idle_b";
		case 3:
			return "react_back_left";
		case 4:
			return "react_back_right";
		case 5:
			return "react_front_left";
		case 6:
			return "react_front_right";
		case 7:
			return "outro";
		case 8:
			return "outro_map";
		case 9:
			return "breakout";
		case 11:
			return "SRCH_DIA_A_MAP";
		case 10:
			return "SRCH_DIA_A_HUNTER";
		case 12:
			return "SRCH_DIA_B_HUNTER";
		case 13:
			return "SRCH_DIA_B_MAP";
		case 14:
			return "aggro_idle_hunter";
		case 15:
			return "aggro_idle_map";
		case 16:
			return "aggro_run_hunter";
		case 17:
			return "aggro_run_map";
		case 18:
			return "base_idle_hunter";
		case 19:
			return "base_idle_map";
		case 20:
			return "exchange_ft_hunter";
		case 21:
			return "exchange_ft_map";
		case 22:
			return "exchange_ft_player";
		case 23:
			return "OFFER_1ST_HUNTER";
		case 24:
			return "OFFER_1ST_MAP";
		case 25:
			return "REACT_FT_HUNTER";
		case 26:
			return "REACT_FT_MAP";
		case 27:
			return "REACT_LT_BK_HUNTER";
		case 28:
			return "REACT_LT_BK_MAP";
		case 29:
			return "REACT_LT_HUNTER";
		case 30:
			return "REACT_LT_MAP";
		case 31:
			return "REACT_RT_BK_HUNTER";
		case 32:
			return "REACT_RT_BK_MAP";
		case 33:
			return "REACT_RT_HUNTER";
		case 34:
			return "REACT_RT_MAP";
		case 35:
			return "SELL1_NEG_HUNTER";
		case 36:
			return "SELL1_NEG_MAP";
		case 37:
			return "SELL1_NEG_PLAYER";
		case 38:
			return "SELL1_NO_RESP_A_HUNTER";
		case 39:
			return "SELL1_NO_RESP_A_MAP";
		case 40:
			return "SELL1_NO_RESP_B_HUNTER";
		case 41:
			return "SELL1_NO_RESP_B_MAP";
		case 42:
			return "SELL1_POS_HUNTER";
		case 43:
			return "SELL1_POS_MAP";
		case 44:
			return "SELL1_POS_PLAYER";
		case 45:
			return "SELL2_NEG_HUNTER";
		case 46:
			return "SELL2_NEG_MAP";
		case 47:
			return "SELL2_NEG_PLAYER";
		case 48:
			return "SELL2_POS_HUNTER";
		case 49:
			return "SELL2_POS_MAP";
		case 50:
			return "SELL2_POS_PLAYER";
		case 51:
			return "WAITING_IDLE_HUNTER";
		case 52:
			return "WAITING_IDLE_MAP";
		default:
			break;
	}
	return "base_idle";
	return "NONE";
}

void func_290(var uParam0)
{
	if (!__LIB_0__::func_27(uParam0->f_627, 8192))
	{
		if (__LIB_0__::func_492(1) >= 1000)
		{
			uParam0->f_924 = 1;
		}
		__LIB_6__::func_686(&(uParam0->f_843[0 /*17*/]), "RETH_BUY_MAP", func_584(joaat("DOCUMENT_TREASURE_MAP_GENERIC"), -915411861, 1, 0, 0), 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1);
		__LIB_3__::func_621(&(uParam0->f_843[0 /*17*/]), 1, 0);
	}
	else
	{
		if (__LIB_0__::func_492(1) >= 500)
		{
			uParam0->f_924 = 1;
		}
		__LIB_6__::func_686(&(uParam0->f_843[0 /*17*/]), "RETH_BUY_MAP", (func_584(joaat("DOCUMENT_TREASURE_MAP_GENERIC"), -915411861, 1, 0, 0) / 2), 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1);
		__LIB_6__::func_792(uParam0->f_604[0], &(uParam0->f_843[0 /*17*/]), 20f, 3, 0, 0, 0, 0);
		__LIB_3__::func_621(&(uParam0->f_843[0 /*17*/]), 1, 0);
	}
	__LIB_3__::func_157(&(uParam0->f_843[1 /*17*/]), "BEAT_GRT_NEG", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
	if (uParam0->f_924 == 1)
	{
	}
	__LIB_3__::func_157(&(uParam0->f_843[2 /*17*/]), __LIB_2__::func_460(12), 0, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 0, 0);
	__LIB_2__::func_411(&(uParam0->f_843[0 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(uParam0->f_843[1 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(uParam0->f_843[2 /*17*/]), 0, 0);
	uParam0->f_923 = 1;
	uParam0->f_920 = 1;
}

int func_300()
{
	if (func_364(&Local_15) || __LIB_0__::func_27(Local_15.f_628, 16384))
	{
		if (__LIB_0__::func_27(Local_15.f_627, 512) || __LIB_0__::func_27(Local_15.f_627, 32))
		{
			return 8;
		}
		else if (Local_15.f_996.f_46 == 1)
		{
			return 8;
		}
		else
		{
			return 11;
		}
	}
	return 7;
}

void func_335(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_746(iParam0) == 4)
	{
		__LIB_0__::func_307(iParam0, __LIB_0__::func_23());
		if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
		{
			if (bParam3)
			{
				__LIB_1__::func_242(iParam0, 6);
			}
			else
			{
				__LIB_1__::func_242(iParam0, 5);
			}
			__LIB_1__::func_470(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		__LIB_0__::func_267(1);
	}
	iVar0 = __LIB_0__::func_700(iParam0);
	bVar1 = __LIB_0__::func_2() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		__LIB_1__::func_421(0, 2);
		if (!bVar1 && bParam1)
		{
			__LIB_9__::func_202();
		}
	}
	else
	{
		__LIB_1__::func_142(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		__LIB_0__::func_870(iParam0);
	}
	else
	{
		Var2 = { __LIB_0__::func_14(joaat("DEATHS_ON_CURRENT_DEED")) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!__LIB_0__::func_13(32768))
		{
			Var4 = { __LIB_0__::func_14(joaat("LAST_MISSION_NAME")) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && __LIB_0__::func_291(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (__LIB_0__::func_76(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[76 /*74*/].f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[__LIB_0__::func_76(iParam0) /*74*/].f_8), true);
						}
					}
					else if ((__LIB_0__::func_76(iParam0) != 95 && __LIB_0__::func_76(iParam0) != 82) && !__LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[__LIB_0__::func_76(iParam0) /*74*/].f_8), true);
						break;
				}
			}
		}
	}
	if (iVar0 == 1)
	{
		Global_40.f_1093 = -1;
	}
	iVar6 = 0;
	if (iVar0 == 1)
	{
		__LIB_1__::func_641(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871());
	}
	else if (iVar0 == 8)
	{
		func_653(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871(), __LIB_0__::func_113());
	}
	if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
	{
		iVar9 = func_654(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			__LIB_1__::func_629(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!Global_1879534 && !Global_1879534.f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = __LIB_0__::func_308(__LIB_0__::func_76(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = __LIB_0__::func_309((iVar10 - 20), 0, iVar10);
					iVar11 = __LIB_0__::func_309((iVar11 - 10), 0, iVar11);
				}
				__LIB_0__::func_300(1);
				__LIB_0__::func_747(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528.f_217 = 1;
				break;
			case 4:
				__LIB_0__::func_747(45, 0, 1);
				break;
			case 8:
				iVar10 = __LIB_0__::func_310(__LIB_0__::func_76(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = __LIB_0__::func_309((iVar10 - 20), 0, iVar10);
					iVar11 = __LIB_0__::func_309((iVar11 - 10), 0, iVar11);
				}
				__LIB_0__::func_747(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (__LIB_0__::func_311(__LIB_0__::func_76(iParam0)))
				{
					__LIB_1__::func_715(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				Global_1899528.f_217 = 1;
				break;
			case 9:
				__LIB_0__::func_747(120, 0, 1);
				break;
			case 2:
				__LIB_0__::func_747(120, 0, 1);
				break;
			case 6:
				__LIB_0__::func_747(__LIB_0__::func_312(__LIB_0__::func_872(iParam0)), 0, 1);
				break;
			case 5:
				__LIB_0__::func_747(120, 0, 1);
				break;
		}
	}
	__LIB_1__::func_144(iParam0, 1);
	__LIB_0__::func_307(iParam0, __LIB_0__::func_23());
	__LIB_1__::func_470(iParam0);
	if ((!__LIB_0__::func_291(iParam0) == 0 && bParam1) && __LIB_0__::func_2() == -1)
	{
		iVar12 = __LIB_1__::func_24(iParam0);
		if (iVar12 != -1)
		{
			__LIB_0__::func_867(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = __LIB_1__::func_194();
			if (iVar12 != -1)
			{
				__LIB_0__::func_867(0);
			}
		}
	}
	if (bParam1)
	{
		Global_1898437 = iParam0;
		switch (iVar0)
		{
			case 1:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 6:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
						break;
					case 1:
						Global_1898438 = MISC::GET_GAME_TIMER();
						break;
				}
				break;
			case 2:
			case 4:
			case 5:
			case 9:
			case 11:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 8:
				if (__LIB_0__::func_5(__LIB_0__::func_76(iParam0)) && __LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 4))
				{
					Global_1898438 = MISC::GET_GAME_TIMER();
				}
				else
				{
					Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
				}
				break;
			default:
				break;
		}
	}
	if (bParam4)
	{
		switch (iVar0)
		{
			case 1:
				if (__LIB_0__::func_76(iParam0) != 77)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = __LIB_1__::func_195();
				}
				break;
			case 8:
				if (__LIB_0__::func_76(iParam0) != 58)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = __LIB_1__::func_195();
				}
				break;
		}
	}
	if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
	{
		if (bParam3)
		{
			__LIB_1__::func_242(iParam0, 6);
		}
		else
		{
			__LIB_1__::func_242(iParam0, 5);
		}
		__LIB_1__::func_470(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::_0xD8C7162AB2E2AF45(-1753910767);
						break;
					case 1:
						__LIB_0__::func_873();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					case 4:
						func_664(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_664(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_664(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_664(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_664(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_664(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_664(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_664(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_664(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_664(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_664(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_664(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_664(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_664(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_664(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_664(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_664(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_664(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_664(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_664(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_664(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_664(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_664(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_664(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_664(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_666();
						func_667(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
						__LIB_1__::func_101();
						__LIB_0__::func_874();
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(__LIB_1__::func_464(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131 /* GXTEntry: "Jamie Gillis" */);
						break;
					case 15:
						func_664(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_HUNT_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_HUNT_ROOT"), true);
							__LIB_1__::func_240(449, 0);
						}
						break;
					case 10:
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_GAMB_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_GAMB_ROOT"), true);
							__LIB_1__::func_240(446, 0);
						}
						break;
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						__LIB_1__::func_630(304805134, 1, 1);
						if (!__LIB_1__::func_25(Global_1347702[21 /*49*/].f_15, 1))
						{
							func_335(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 2;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[21 /*49*/].f_3)), iVar14);
						}
						break;
					case 20:
						__LIB_0__::func_875();
						break;
					case 26:
						__LIB_0__::func_876();
						break;
					case 17:
						__LIB_1__::func_810(Global_35, joaat("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REPEATER_EVANS"));
						}
						break;
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!__LIB_0__::func_878(joaat("TP_RMAY_LETTER_1"), -1))
						{
							iVar15 = __LIB_0__::func_23();
							__LIB_1__::func_446(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							__LIB_1__::func_612(joaat("TP_RMAY_LETTER_1"), iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REVOLVER_LEMAT"));
						}
						break;
					case 34:
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER"));
						}
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						__LIB_0__::func_879();
						break;
					case 37:
						__LIB_0__::func_880();
						if (__LIB_0__::func_26())
						{
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), iVar14);
						}
						break;
					case 38:
						__LIB_0__::func_881();
						break;
					case 43:
						__LIB_0__::func_882();
						break;
					case 44:
						if (!__LIB_1__::func_25(Global_1347702[82 /*49*/].f_15, 1))
						{
							func_335(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[82 /*49*/].f_3)), iVar14);
						}
						if (!__LIB_1__::func_25(Global_1347702[83 /*49*/].f_15, 1))
						{
							func_335(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[83 /*49*/].f_3)), iVar14);
						}
						break;
					case 45:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ARTURO"));
						break;
					case 48:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_MONROE"));
						break;
					case 49:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_FAVOURS"));
						break;
					case 58:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLEET_GOON"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JOE_GOON"));
						break;
					case 50:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_PAYTAH"));
						break;
					case 52:
						break;
					case 47:
						__LIB_0__::func_883();
						break;
					case 59:
						__LIB_0__::func_884();
						break;
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						__LIB_0__::func_885();
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DAVID_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ABE"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						break;
					case 63:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MRS_GEDDES"));
						break;
					case 67:
						__LIB_0__::func_886();
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_SURV_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_SURV_ROOT"), true);
							__LIB_1__::func_240(451, 0);
						}
						if (!__LIB_0__::func_314(joaat("TAXIDERMY_ORDER_05")))
						{
							if (__LIB_0__::func_314(joaat("TAXIDERMY_ORDER_04")))
							{
								iVar16 = __LIB_0__::func_23();
								__LIB_1__::func_446(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								__LIB_1__::func_612(joaat("TP_TAXIDERMY_REWARD_04_ES"), iVar16, 1);
							}
						}
						if (__LIB_0__::func_315(4))
						{
							if (!__LIB_1__::func_707(joaat("DOCUMENT_NOTE_RARE_FISH"), 1, 0))
							{
								iVar17 = __LIB_0__::func_23();
								__LIB_1__::func_446(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								__LIB_1__::func_612(joaat("TP_RF_INVITATION_01"), iVar17, 1);
							}
						}
						func_664(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_664(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						__LIB_1__::func_146(89200);
						__LIB_1__::func_146(2300);
						__LIB_1__::func_146(2300);
						break;
					case 68:
						__LIB_0__::func_887();
						break;
					case 76:
						if (Global_1425247.f_53)
						{
							iVar14 = 0;
						}
						else
						{
							iVar14 = 1;
						}
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[108 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[69 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[70 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[7 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[22 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[23 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[65 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[7 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[8 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[36 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[48 /*74*/].f_8)), iVar14);
						__LIB_0__::func_888();
						__LIB_1__::func_146(-139100);
						break;
					case 69:
						if (__LIB_1__::func_25(Global_1347702[9 /*49*/].f_15, 1))
						{
							__LIB_1__::func_146(-6000);
						}
						break;
					case 70:
						__LIB_1__::func_146(23400);
						__LIB_1__::func_146(1900);
						__LIB_1__::func_146(-15000);
						break;
					case 71:
						__LIB_1__::func_146(-5500);
						break;
				}
				break;
			case 8:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON"));
						}
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR"));
						}
						break;
					case 4:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_BEAUG"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -751847444 /* GXTEntry: "Penelope Braithwaite" */);
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1843499806 /* GXTEntry: "Scott" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -259499455 /* GXTEntry: "Iain" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1193930411 /* GXTEntry: "Mrs Calhoon" */);
						break;
					case 22:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_DORKINS"));
						break;
					case 24:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, -1230369426 /* GXTEntry: "Sister Calderón" */);
						break;
					case 26:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2049954876 /* GXTEntry: "Calloway" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_LEVIN"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -511263105 /* GXTEntry: "Emmet Granger" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -837057898 /* GXTEntry: "Flaco Hernández" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -258195548 /* GXTEntry: "Billy Midnight" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1110794082 /* GXTEntry: "Black Belle" */);
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1324848767 /* GXTEntry: "Slim Grant" */);
						break;
					case 30:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -461700465 /* GXTEntry: "Mr. Black" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -489179187 /* GXTEntry: "Mr. White" */);
						break;
					case 37:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_ALDEN_CARRUTHERS"));
						break;
					case 56:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 883682516 /* GXTEntry: "Old Cajun" */);
						break;
					case 57:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_DOCTOR"));
						break;
					case 58:
						__LIB_0__::func_889();
						break;
					case 59:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -121001171 /* GXTEntry: "Lilly Millet" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_WROBEL"));
						break;
					case 61:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_THOMAS_DOWNES"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDITH_DOWNES"));
						__LIB_0__::func_890();
						break;
					case 66:
						__LIB_0__::func_891();
						__LIB_1__::func_599();
						break;
					case 67:
						if (!__LIB_0__::func_892(6))
						{
							__LIB_0__::func_893(6);
						}
						if (!__LIB_0__::func_892(3))
						{
							__LIB_0__::func_893(3);
						}
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_PISTOL_M1899"));
						}
						break;
					case 68:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MEREDITH"));
						break;
					case 89:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_RINGMASTER"));
						break;
					case 91:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_TIGERHANDLER"));
						break;
					case 98:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1853266833 /* GXTEntry: "Mary Linton" */);
						break;
					case 101:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_MASON"));
						break;
					case 115:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("ALLY_RAINSFALL"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("COMP_EAGLE_FLIES"));
						break;
					case 120:
						MAP::_0xD8C7162AB2E2AF45(1720279629);
						break;
					case 138:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589 /* GXTEntry: "Winton Holmes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239 /* GXTEntry: "Gwyn Hughes" */);
						break;
					case 139:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589 /* GXTEntry: "Winton Holmes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239 /* GXTEntry: "Gwyn Hughes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_ALGIE_DAVISON"));
						break;
					case 140:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2131140554);
						break;
					case 143:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 240200131 /* GXTEntry: "Bertram" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_MISS_MARJORIE"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1901360117 /* GXTEntry: "Magnifico" */);
						break;
					case 147:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_WARVET"));
						break;
					case 9:
						if (__LIB_1__::func_25(Global_1835011[69 /*74*/].f_1, 1))
						{
							__LIB_0__::func_316(0);
							__LIB_1__::func_146(40500);
						}
						else
						{
							__LIB_0__::func_316(0);
							__LIB_1__::func_146(46500);
						}
						break;
				}
				break;
			case 6:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						switch (__LIB_0__::func_872(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297 /* GXTEntry: "Mrs. Londonderry" */);
								break;
						}
						break;
				}
				break;
		}
		__LIB_0__::func_894(iParam0);
		func_702();
		switch (iVar0)
		{
			case 1:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 4:
						__LIB_1__::func_777(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						__LIB_1__::func_777(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 25:
						__LIB_1__::func_777(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						__LIB_1__::func_777(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						__LIB_1__::func_777(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						__LIB_1__::func_777(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						__LIB_1__::func_777(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = __LIB_0__::func_895(iParam0);
						__LIB_1__::func_777(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						__LIB_1__::func_777(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						__LIB_1__::func_777(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!__LIB_1__::func_707(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
						{
							func_664(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						__LIB_1__::func_777(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						__LIB_1__::func_777(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						__LIB_1__::func_777(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 72:
						if (__LIB_0__::func_895(iParam0) == 0)
						{
							__LIB_1__::func_777(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						else
						{
							__LIB_1__::func_777(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (__LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 536870912))
				{
					__LIB_0__::func_896(11, 1);
				}
				switch (__LIB_0__::func_76(iParam0))
				{
					case 109:
						__LIB_1__::func_777(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 55:
						__LIB_0__::func_896(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						__LIB_1__::func_777(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						__LIB_1__::func_777(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						__LIB_1__::func_777(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						__LIB_1__::func_777(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == __LIB_1__::func_293(0, 10, 11, joaat("CABR01")))
				{
					__LIB_1__::func_777(iParam0, __LIB_0__::func_895(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 7, 11, joaat("CACR02")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 8, 11, joaat("CACR03")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 11, 11, joaat("CACR01")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 12, 11, joaat("CACR04")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!__LIB_0__::func_291(iParam0) == 0)
			{
				if (__LIB_0__::func_299(iParam0) == 0)
				{
				}
				else if (STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					__LIB_0__::func_701(__LIB_0__::func_700(iParam0), __LIB_0__::func_299(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && __LIB_0__::func_76(iParam0) == 58)
						{
							Global_1879514.f_1 = iParam0;
						}
						__LIB_1__::func_790(__LIB_1__::func_613(Global_1879514.f_1));
						if (iVar0 == 8 && __LIB_0__::func_76(iParam0) == 58)
						{
							Global_1879514.f_1 = -1;
						}
					}
				}
			}
			if (bParam2)
			{
				switch (iVar0)
				{
					case 1:
						iVar20 = 3;
						break;
					case 4:
						iVar20 = 2;
						break;
					case 6:
						iVar20 = 1;
						break;
					case 2:
						iVar20 = 9;
						break;
					case 8:
						if (__LIB_0__::func_5(__LIB_0__::func_76(iParam0)) && __LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 1))
						{
							iVar20 = 3;
						}
						else
						{
							iVar20 = 8;
						}
						break;
					case 7:
						iVar20 = 0;
						break;
					case 5:
						iVar20 = 12;
						break;
					case 9:
					case 11:
						iVar20 = 0;
						break;
				}
			}
			__LIB_0__::func_703(bParam2, iVar20);
		}
	}
	__LIB_0__::func_301(1);
	if ((bVar13 || __LIB_1__::func_195()) && (__LIB_0__::func_700(iParam0) == 1 || __LIB_0__::func_700(iParam0) == 8))
	{
		Global_1879534.f_6 = 1;
		Global_1879534.f_7 = 1;
	}
}

bool func_364(var uParam0)
{
	int iVar0;
	switch (uParam0->f_985)
	{
		case 1:
			__LIB_2__::func_353(&(uParam0->f_990), 1);
			__LIB_2__::func_659(&(uParam0->f_990), uParam0->f_996.f_51, 10f, 0, 0);
			uParam0->f_985 = 0;
			break;
		case 0:
			uParam0->f_985 = 3;
			break;
		case 3:
			uParam0->f_595 = 1;
			func_732(uParam0);
			__LIB_1__::func_683(&(uParam0->f_627), 2097152);
			if (uParam0->f_595 == 1)
			{
				func_733(uParam0);
			}
			uParam0->f_985 = 4;
			break;
		case 4:
			if (uParam0->f_902 == 1 && uParam0->f_903 == 0)
			{
				if (__LIB_2__::func_1(uParam0->f_604[0], 0, 1))
				{
					if (__LIB_9__::func_723(uParam0->f_604[0], 0, &(uParam0->f_996.f_5), &(uParam0->f_987), 0, 0) && uParam0->f_129 == 0)
					{
						TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_611));
						TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
						__LIB_1__::func_474(uParam0->f_604[0], &(uParam0->f_611), 0, 0, 1, 1);
						PED::SET_PED_KEEP_TASK(uParam0->f_604[0], true);
						uParam0->f_903 = 1;
					}
				}
			}
			if (!__LIB_0__::func_27(uParam0->f_627, 16777216) && PED::_0xA0BC8FAED8CFEB3C(uParam0->f_604[1]))
			{
				__LIB_1__::func_683(&(uParam0->f_627), 16777216);
			}
			if (!uParam0->f_996.f_46)
			{
				iVar0 = 1;
				switch (uParam0->f_629)
				{
					case 0:
						if (__LIB_9__::func_723(uParam0->f_604[1], 0, &(uParam0->f_996.f_5), &(uParam0->f_988), 0, 0))
						{
							if (uParam0->f_988 != 524288 && uParam0->f_988 != 65536)
							{
								uParam0->f_996.f_46 = 1;
							}
						}
						uParam0->f_629 = 1;
						break;
					case 1:
						if ((__LIB_9__::func_723(uParam0->f_604[0], 0, &(uParam0->f_996.f_5), &(uParam0->f_987), 0, 0) || ((uParam0->f_906 == 1 && __LIB_9__::func_178(&(uParam0->f_954)) > 1.5f) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))) || (__LIB_5__::func_683(uParam0->f_604[0], &(uParam0->f_996.f_5)) && __LIB_2__::func_215(uParam0->f_604[0], Global_35, 0, 1114636288 /* Float: 60f */, 0)))
						{
							if (uParam0->f_906 == 1)
							{
								uParam0->f_987 = 8;
							}
							uParam0->f_996.f_46 = 1;
						}
						uParam0->f_629 = 0;
						break;
				}
				if (uParam0->f_987 == 65536)
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_604[0], func_288(51), func_289(51), 1))
					{
						if (uParam0->f_984 != 8)
						{
							if (!uParam0->f_897)
							{
								uParam0->f_996.f_46 = 0;
								func_736(uParam0);
								iVar0 = 0;
							}
							else
							{
								func_737(uParam0);
								uParam0->f_996.f_46 = 0;
								iVar0 = 0;
							}
						}
					}
					else
					{
						uParam0->f_996.f_46 = 0;
					}
					if (PED::IS_PED_RAGDOLL(uParam0->f_604[0]))
					{
						uParam0->f_996.f_46 = 1;
					}
				}
				if (iVar0 == 1)
				{
					if (((__LIB_2__::func_1(uParam0->f_604[1], 0, 1) && __LIB_0__::func_394(Global_35, uParam0->f_604[1], 0)) && uParam0->f_902 == 0) || uParam0->f_987 == 1024)
					{
						uParam0->f_902 = 1;
						__LIB_1__::func_683(&(uParam0->f_627), 1073741824 /* Float: 2f */);
						uParam0->f_996.f_46 = 1;
						__LIB_4__::func_89(&(uParam0->f_969), 0);
						if (uParam0->f_987 == 1024)
						{
							TASK::TASK_HORSE_ACTION(uParam0->f_604[1], 7, Global_35, 0);
						}
					}
					if (PED::IS_PED_RAGDOLL(uParam0->f_604[0]))
					{
						uParam0->f_996.f_46 = 1;
					}
					if (uParam0->f_996.f_46)
					{
						__LIB_2__::func_903(&(uParam0->f_996.f_5), 0);
						__LIB_1__::func_392(&(uParam0->f_996.f_5), 0);
						func_740(uParam0, 1);
						func_368(uParam0);
						if (uParam0->f_922 == 1)
						{
							__LIB_12__::func_991(&(uParam0->f_781[0 /*61*/]), uParam0->f_604[0]);
							uParam0->f_922 = 0;
						}
						uParam0->f_984 = 5;
						uParam0->f_594 = 0;
						__LIB_1__::func_480(&(uParam0->f_604[0]));
						__LIB_13__::func_47(&(uParam0->f_781[0 /*61*/]), &(uParam0->f_843));
						uParam0->f_996.f_44 = 1;
					}
				}
			}
			if (__LIB_2__::func_1(uParam0->f_604[0], 0, 1))
			{
				PED::SET_PED_RESET_FLAG(uParam0->f_604[0], 134, true);
			}
			if (func_744(uParam0))
			{
				uParam0->f_996.f_50 = 1;
				return true;
			}
			if (uParam0->f_901 == 1 && __LIB_0__::func_27(uParam0->f_627, 1))
			{
				if (__LIB_0__::func_665(Global_35, uParam0->f_604[0], 1, 0) >= 300f)
				{
					uParam0->f_996.f_50 = 1;
					uParam0->f_985 = 1;
					__LIB_1__::func_683(&(uParam0->f_628), 16384);
					return true;
				}
			}
			break;
	}
	return false;
}

void func_368(var uParam0)
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_610))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam0->f_610, false);
	}
}

void func_511(var uParam0)
{
	uParam0->f_557 = { 0f, 0f, 0f };
	uParam0->f_557.f_3 = Global_35;
	uParam0->f_557.f_8 = 4;
	uParam0->f_557.f_4 = 21030;
	uParam0->f_557.f_19 = 4;
	uParam0->f_557.f_20 = 4;
	uParam0->f_557.f_21 = 4;
	uParam0->f_557.f_22 = 4;
	uParam0->f_557.f_17 = 4;
	uParam0->f_557.f_18 = 4;
	uParam0->f_557.f_7 = 0;
}

bool func_512()
{
	if (func_892())
	{
		return true;
	}
	return false;
}

void func_535(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_535(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_535(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_570(var uParam0)
{
	vector3 vVar0;
	if (!__LIB_0__::func_84(uParam0, 4))
	{
		if (__LIB_0__::func_1(uParam0->f_404, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { __LIB_12__::func_705(uParam0) };
		if (!__LIB_0__::func_1(uParam0->f_404, 524288))
		{
			__LIB_4__::func_717(&(uParam0->f_416));
		}
		func_962(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_964(uParam0);
		func_965(uParam0);
		__LIB_12__::func_901(uParam0, 0f, 0f, 0f, 0, 0);
		__LIB_12__::func_853(uParam0);
		__LIB_0__::func_88(uParam0, 4);
		__LIB_0__::func_106(uParam0, 0);
		__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_417)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_417));
		}
	}
}

int func_584(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	struct<14> Var35;
	int iVar49;
	struct<9> Var50;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	if (__LIB_0__::func_192(iParam0, -5284486))
	{
		Var35 = -1;
		Var35.f_1 = -1;
		Var35.f_2 = -1;
		Var35.f_3 = -1;
		Var35.f_4 = -1;
		Var35.f_5 = -1;
		Var35.f_6 = -1;
		Var35.f_7 = -1;
		Var35.f_8 = -1;
		Var35.f_13 = -1;
		Var35 = iParam0;
		iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
		if (iVar33 != -1)
		{
			if (iVar34 > 0)
			{
				bParam4 = true;
			}
			INVENTORY::_0x42A2F33A1942E865(iVar33);
		}
		iVar49 = 0;
		if (__LIB_0__::func_976(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
		{
			iVar32 = 0;
			while (iVar32 < iVar31)
			{
				if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
				{
					iVar49 = (iVar49 + Var0[iVar32 /*2*/].f_1);
					Jump @229; //curOff = 201
				}
				else if (Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
			}
		}
		Var50 = -1;
		Var50.f_1 = -1;
		Var50.f_2 = -1;
		Var50.f_3 = -1;
		Var50.f_4 = -1;
		Var50.f_5 = -1;
		Var50.f_6 = -1;
		Var50.f_7 = -1;
		Var50.f_8 = -1;
		iVar64 = __LIB_0__::func_372(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = __LIB_0__::func_374(iVar62, iVar61);
					if (__LIB_0__::func_144(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_584(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_584(iVar63, -915411861, 1, 0, 0));
								}
								INVENTORY::_0x42A2F33A1942E865(iVar33);
							}
						}
					}
					iVar62++;
				}
				ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar61);
			}
		}
		return iVar49;
	}
	if (!__LIB_0__::func_976(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
		{
			return Var0[iVar32 /*2*/].f_1;
		}
		else if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

void func_653(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_ABIGAIL1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_ABIGAIL1_3"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_ABIGAIL1_4"), iParam1);
			break;
		case 1:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP9_ABIGAIL2X2_1"), iParam1);
			break;
		case 2:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP9_ABIGAIL3_1"), iParam1);
			break;
		case 9:
			__LIB_1__::func_465(joaat("JOURNAL_CHAP9_BEECHERSHOPE"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP9_BEECHERS1X3_1"), iParam1);
			if (__LIB_1__::func_25(Global_1835011[69 /*74*/].f_1, 1))
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_1A"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_1B"), iParam1);
			}
			break;
		case 22:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_CALDERON1X1_1"), iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_1_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_2_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_1_JN"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_2_JN"), iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_3_1_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_3_2_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(26))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_3_JN_B1"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_3_JN_B2"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_3_JN_A"), iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (Global_1357515 == -1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2F_AR"), iParam1);
				}
				else if (Global_1357515 == 0)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2A_AR"), iParam1);
				}
				else if (Global_1357515 == 1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2B_AR"), iParam1);
				}
				else if (Global_1357515 == 2)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2C_AR"), iParam1);
				}
				else if (Global_1357515 == 3)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2D_AR"), iParam1);
				}
				else if (Global_1357515 == 4)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2E_AR"), iParam1);
				}
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2_JN"), iParam1);
				if (Global_1357515 == -1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2E_JN"), iParam1);
				}
				else if (Global_1357515 == 0)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2A_JN"), iParam1);
				}
				else if (Global_1357515 == 1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2B_JN"), iParam1);
				}
				else if (Global_1357515 == 2)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2C_JN"), iParam1);
				}
				else if (Global_1357515 == 3)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2D_JN"), iParam1);
				}
				else if (Global_1357515 == 4)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2F_JN"), iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_3_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_3_JN"), iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_4_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_4_JN"), iParam1);
			}
			break;
		case 37:
			__LIB_1__::func_465(joaat("JOURNAL_GT_COACH_ROB_RSC"), iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT1_1_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT1_2_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT1_1_JN"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT1_1_JN_B"), iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT2_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT2_1_JN"), iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT3_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(54))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT3_1B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT3_1A_JN"), iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CIG1_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CIG1_1_JN"), iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_DINO1_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_DINO1_1_JN"), iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_DINO2_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(39))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_DINO2_1_B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_DINO2_1_A_JN"), iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (__LIB_0__::func_895(Global_1835011[33 /*74*/].f_1) == 1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_EXOTIC1_1B_AR_A"), iParam1);
				}
				else
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_EXOTIC1_1A_AR_A"), iParam1);
				}
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_EXOTIC1_1_JN"), iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_EXOTIC3_1_AR_A"), iParam1);
			}
			else if (__LIB_0__::func_343(43))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_EXOTIC3_1_JN_B"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_EXOTIC3_1_JN_A"), iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FISH1_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FISH1_1_JN"), iParam1);
			}
			break;
		case 42:
			if (__LIB_0__::func_343(41))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FISH2_1_JN_B"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FISH2_1_JN_A"), iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ROCKCARV1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ROCKCARV1_JN"), iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ROCKCARV2_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(49))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ROCKCARV2_JN_B"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_ROCKCARV2_JN_B2"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ROCKCARV2_JN_A"), iParam1);
			}
			break;
		case 51:
			__LIB_1__::func_465(joaat("JOURNAL_RC_TAX1_1_JN"), iParam1);
			break;
		case 58:
			if (__LIB_1__::func_25(Global_1347702[23 /*49*/].f_15, 1))
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_1"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_1B"), iParam1);
			}
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_3"), iParam1);
			break;
		case 59:
			__LIB_1__::func_465(joaat("JOURNAL_CHAP2_DOWNES1_1"), iParam1);
			break;
		case 62:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_DOWNES2_1"), iParam1);
			break;
		case 63:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_ODRISCOLL2_2B"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_GT_ODRISCOLL_2"), iParam1);
			break;
		case 65:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_3"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_4"), iParam1);
			break;
		case 66:
			__LIB_1__::func_465(joaat("JOURNAL_CHAP3_CLEMENS"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_DUTCH1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_DUTCH1_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_DUTCH1_3"), iParam1);
			__LIB_1__::func_199(1);
			break;
		case 67:
			__LIB_1__::func_465(joaat("JOURNAL_CHAP4_SHADYBELLE"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_DUTCH2_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_DUTCH2_2"), iParam1);
			break;
		case 68:
			__LIB_1__::func_465(joaat("JOURNAL_CHAP6_BEAVERHOLLOW"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_DUTCH3_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_DUTCH3_2B"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_DUTCH3_3"), iParam1);
			__LIB_1__::func_199(0);
			break;
		case 70:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_EDITHDOWNE2_1"), iParam1);
			break;
		case 71:
			__LIB_1__::func_465(joaat("JOURNAL_RC_MILLER1_JN"), iParam1);
			break;
		case 73:
			__LIB_1__::func_465(joaat("JOURNAL_RC_MILLER3_JN"), iParam1);
			break;
		case 75:
			__LIB_1__::func_465(joaat("JOURNAL_RC_MILLER4_JN"), iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA1_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA1_1_JN"), iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA3_1_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA3_2_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(78))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA3_2_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA3_1_JN"), iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA4_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(79))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA4_2_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA4_1_JN"), iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER1_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER1_1_JN"), iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER2_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER2_1_JN"), iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER3_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER3_1_JN"), iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER5_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER5_1_JN"), iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK1_JN"), iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK4_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK4B_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK4_A_JN"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK4_A2_JN"), iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK5_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK5_JN"), iParam1);
			}
			break;
		case 94:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_1"), iParam1);
			if (Global_1357515 == -1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_2A"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_2B"), iParam1);
			}
			__LIB_1__::func_465(joaat("JOURNAL_GT_HOME_ROB"), iParam1);
			break;
		case 99:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MARY3X1_1"), iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON1_1_AR"), iParam1);
				if (Global_1357515 == -1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_MASON1_2_AR_B"), iParam1);
				}
				else
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_MASON1_2_AR_A"), iParam1);
				}
			}
			else if (Global_1357515 == -1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON1_1B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON1_1A_JN"), iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON2_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(101))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON2_1B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON2_1A_JN"), iParam1);
			}
			break;
		case 103:
			__LIB_1__::func_465(joaat("JOURNAL_RC_MASON3_1_AR"), iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON4_1_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON4_2_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(103))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON4_1B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON4_1A_JN"), iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON5_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(104))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON5_1B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON5_1A_JN"), iParam1);
			}
			break;
		case 108:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_MONROE_1"), iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR1_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR1_AR_B"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR1_JN"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR1B_JN"), iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR2_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(109))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR2B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR2A_JN"), iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (Global_1357515 == 0)
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR3A_AR"), iParam1);
				}
				else
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR3B_AR"), iParam1);
				}
			}
			else if (__LIB_0__::func_343(110))
			{
				if (Global_1357515 == 0)
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR3C_JN"), iParam1);
				}
				else
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR3D_JN"), iParam1);
					__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR3D_2_JN"), iParam1);
				}
			}
			else if (Global_1357515 == 0)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR3A_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR3B_JN"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR3B_2_JN"), iParam1);
			}
			break;
		case 115:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_NATIVERSC1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_NATIVERSC1_2"), iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ODDF1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ODDF1_JN"), iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ODDF2_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ODDF2_JN"), iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO1_1_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO1_2_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO1_1_JN"), iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO2_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(117))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO2_1B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO2_1A_JN"), iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO3_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(118))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO3_2B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO3_2A_JN"), iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW1_JN"), iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW3_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(121))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW3B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW3A_JN"), iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW4_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(122))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW4B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW4A_JN"), iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW5_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW5B_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW5_JN"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW5B_JN"), iParam1);
			}
			break;
		case 127:
			__LIB_1__::func_465(joaat("JOURNAL_RC_RTL1_AR"), iParam1);
			break;
		case 129:
			__LIB_1__::func_465(joaat("JOURNAL_RC_RTL3_AR"), iParam1);
			break;
		case 131:
			__LIB_1__::func_465(joaat("JOURNAL_RC_RTL5_AR"), iParam1);
			Jump @4292; //curOff = 3636
			__LIB_1__::func_465(joaat("JOURNAL_RC_RTL7_AR"), iParam1);
			Jump @4292; //curOff = 3650
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_SADIE1_1"), iParam1);
			Jump @4292; //curOff = 3664
			if (bParam3 == 1)
			{
				if (Global_1357515 == -1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_KILLER4A_AR"), iParam1);
				}
				else
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_KILLER4B_AR"), iParam1);
				}
			}
			else if ((HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_KILLER1_AR")) && HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_KILLER2_AR"))) && HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_KILLER3_AR")))
			{
				if (Global_1357515 == -1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_KILLER4A_JN"), iParam1);
				}
				else
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_KILLER4B_JN"), iParam1);
				}
			}
			else if (Global_1357515 == -1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_KILLER4C_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_KILLER4D_JN"), iParam1);
			}
			Jump @4292; //curOff = 3818
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_SLVC1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_SLVC1_JN"), iParam1);
			}
			Jump @4292; //curOff = 3852
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_SLVC2_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_SLVC3A_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(136))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_SLVC2B_JN"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_SLVC3C_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_SLVC2A_JN"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_SLVC3A_JN"), iParam1);
			}
			Jump @4292; //curOff = 3942
			if (bParam2 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_STRAUSS3_3A"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_STRAUSS3_3B"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_STRAUSS3_3C"), iParam1);
			}
			Jump @4292; //curOff = 3987
			if (bParam3 == 1)
			{
				if (Global_1357515 == 1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_TREASURE1A_AR"), iParam1);
				}
				else if (Global_1357515 == 0)
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_TREASURE1B_AR"), iParam1);
				}
			}
			else if (Global_1357515 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_TREASURE1A_JN"), iParam1);
			}
			else if (Global_1357515 == 0)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_TREASURE1B_JN"), iParam1);
			}
			Jump @4292; //curOff = 4081
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET1_JN"), iParam1);
			}
			Jump @4292; //curOff = 4115
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET2_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(147))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET2B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET2A_JN"), iParam1);
			}
			Jump @4292; //curOff = 4172
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET3_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(148))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET3B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET3A_JN"), iParam1);
			}
			Jump @4292; //curOff = 4229
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET4_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(149))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET4B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET4A_JN"), iParam1);
			}
		}
int func_654(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	*uParam1 = joaat("CSTP_PERSIST_ACROSS_STATES");
	*iParam2 = -1;
	iVar0 = __LIB_0__::func_700(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = __LIB_0__::func_909(iParam0);
			switch (iVar1)
			{
				case 0:
					return joaat("CSTAG_FLOW_WNT1_POST");
				case 1:
					return joaat("CSTAG_FLOW_WNT2_POST");
				case 2:
					return joaat("CSTAG_FLOW_DST1_POST");
				case 3:
					return joaat("CSTAG_FLOW_WNT4_POST");
				case 4:
					*uParam1 = -2060316038;
					return joaat("CSTAG_FLOW_MUD1_POST");
				case 5:
					return joaat("CSTAG_FLOW_MUD2_POST");
				case 6:
					return joaat("CSTAG_FLOW_MUD3_POST");
				case 10:
					return joaat("CSTAG_FLOW_REV1_POST");
				case 13:
					return joaat("CSTAG_FLOW_SEN1_POST");
				case 15:
					return joaat("CSTAG_FLOW_HNT1_POST");
				case 8:
					return joaat("CSTAG_FLOW_MRY1_POST");
				case 25:
					return joaat("CSTAG_FLOW_MUD6_POST");
				case 14:
					return joaat("CSTAG_FLOW_MUD4_POST");
				case 7:
					return joaat("CSTAG_FLOW_BOU1_POST");
				case 9:
					if (__LIB_0__::func_895(Global_1835011[9 /*74*/].f_1) == 0)
					{
						return joaat("CSTAG_FLOW_SAL1_SPLITUP_POST");
					}
					else
					{
						return joaat("CSTAG_FLOW_SAL1_POST");
					}
					break;
				case 11:
					return joaat("CSTAG_FLOW_UTP1_POST");
				case 12:
					return joaat("CSTAG_FLOW_UTP2_POST");
				case 16:
					return joaat("CSTAG_FLOW_FUD1_POST");
				case 17:
					return joaat("CSTAG_FLOW_GRY1_POST");
				case 53:
					return joaat("CSTAG_FLOW_CRN1_POST");
				case 18:
					return joaat("CSTAG_FLOW_BRT1_POST");
				case 19:
					return joaat("CSTAG_FLOW_GRY2_POST");
				case 20:
					return joaat("CSTAG_FLOW_BRT2_POST");
				case 22:
					return joaat("CSTAG_FLOW_TRE1_POST");
				case 23:
					return joaat("CSTAG_FLOW_DST3_POST");
				case 24:
					return joaat("CSTAG_FLOW_MUD5_POST");
				case 21:
					return joaat("CSTAG_FLOW_GRY3_POST");
				case 26:
					return joaat("CSTAG_FLOW_BRT3_POST");
				case 27:
					return joaat("CSTAG_FLOW_MOB1_POST");
				case 28:
					return joaat("CSTAG_FLOW_MOB2_POST");
				case 29:
					return joaat("CSTAG_FLOW_MOB3_POST");
				case 30:
					return joaat("CSTAG_FLOW_MOB4_POST");
				case 31:
					return joaat("CSTAG_FLOW_MOB5_POST");
				case 32:
					return joaat("CSTAG_FLOW_ODR4_POST");
				case 33:
					return joaat("CSTAG_FLOW_IND1_POST");
				case 34:
					return joaat("CSTAG_FLOW_IND3_POST");
				case 35:
					return joaat("CSTAG_FLOW_SUS1_POST");
				case 36:
					return joaat("CSTAG_FLOW_MRY3_POST");
				case 37:
					return joaat("CSTAG_FLOW_SDN1_POST");
				case 38:
					return joaat("CSTAG_FLOW_GUA1_POST");
				case 39:
					return joaat("CSTAG_FLOW_GUA2_POST");
				case 40:
					return joaat("CSTAG_FLOW_FUS1_POST");
				case 41:
					return joaat("CSTAG_FLOW_FUS2_POST");
				case 42:
					return joaat("CSTAG_FLOW_SMG2_POST");
				case 43:
					return joaat("CSTAG_FLOW_GUA3_POST");
				case 44:
					return joaat("CSTAG_FLOW_GNG1_POST");
				case 45:
					return joaat("CSTAG_FLOW_GNG2_POST");
				case 46:
					return joaat("CSTAG_FLOW_GNG3_POST");
				case 47:
					return joaat("CSTAG_FLOW_DST5_POST");
				case 48:
					return joaat("CSTAG_FLOW_NTV1_POST");
				case 49:
					return joaat("CSTAG_FLOW_NTV2_POST");
				case 50:
					return joaat("CSTAG_FLOW_NTS1_POST");
				case 51:
					return joaat("CSTAG_FLOW_NTS2_POST");
				case 52:
					return joaat("CSTAG_FLOW_NTS3_POST");
				case 54:
					return joaat("CSTAG_FLOW_TRN1_POST");
				case 55:
					return joaat("CSTAG_FLOW_TRN2_POST");
				case 56:
					return joaat("CSTAG_FLOW_TRN3_POST");
				case 57:
					return joaat("CSTAG_FLOW_TRN4_POST");
				case 58:
					return joaat("CSTAG_FLOW_NTV3_POST");
				case 59:
					return joaat("CSTAG_FLOW_FIN1_POST");
				case 60:
					return joaat("CSTAG_FLOW_MAR1_POST");
				case 61:
					return joaat("CSTAG_FLOW_MAR5_POST");
				case 62:
					return joaat("CSTAG_FLOW_MR52_POST");
				case 63:
					return joaat("CSTAG_FLOW_MR53_POST");
				case 64:
					return joaat("CSTAG_FLOW_LAR1_POST");
				case 65:
					return joaat("CSTAG_FLOW_MAR2_POST");
				case 66:
					return joaat("CSTAG_FLOW_MAR4_POST");
				case 67:
					return joaat("CSTAG_FLOW_AB21_POST");
				case 68:
					return joaat("CSTAG_FLOW_BE22_POST");
				case 69:
					return joaat("CSTAG_FLOW_SAD2_POST");
				case 70:
					return joaat("CSTAG_FLOW_SAD3_POST");
				case 71:
					return joaat("CSTAG_FLOW_SAD4_POST");
				case 72:
					return joaat("CSTAG_FLOW_SAD5_POST");
				case 73:
					return joaat("CSTAG_FLOW_MAR6_POST");
				case 74:
					return joaat("CSTAG_FLOW_MAR7_POST");
				case 75:
					return joaat("CSTAG_FLOW_MAR8_POST");
				case 76:
					return joaat("CSTAG_FLOW_FIN2_POST");
			}
			break;
		case 8:
			iVar2 = __LIB_0__::func_76(iParam0);
			switch (iVar2)
			{
				case 120:
					return joaat("CSTAG_FLOW_RPRSN_POST");
				case 0:
					return joaat("CSTAG_FLOW_RABI1_POST");
				case 63:
					return joaat("CSTAG_FLOW_RDST2_POST");
				case 97:
					return joaat("CSTAG_FLOW_RMARY1_POST");
				case 98:
					return joaat("CSTAG_FLOW_RMARY2_POST");
				case 94:
					return joaat("CSTAG_FLOW_RHMR0_POST");
				case 59:
					return joaat("CSTAG_FLOW_RDOWN1_POST");
				case 61:
					return joaat("CSTAG_FLOW_RDOWN2_POST");
				case 62:
					return joaat("CSTAG_FLOW_RDOWN3_POST");
				case 112:
					return joaat("CSTAG_FLOW_RMUD31_POST");
				case 113:
					return joaat("CSTAG_FLOW_RMUD32_POST");
				case 114:
					return joaat("CSTAG_FLOW_RMUD33_POST");
				case 66:
					*uParam1 = -2060316038;
					return joaat("CSTAG_FLOW_RDTC1_POST");
				case 76:
					return joaat("CSTAG_FLOW_RXCF1_POST");
				case 134:
					return joaat("CSTAG_FLOW_RSAD1_POST");
				case 3:
					return joaat("CSTAG_FLOW_RBNP10_POST");
				case 5:
					return joaat("CSTAG_FLOW_RBNP12_POST");
				case 21:
					return joaat("CSTAG_FLOW_RBRT0_POST");
				case 37:
					return joaat("CSTAG_FLOW_RCHRB_POST");
				case 138:
					return joaat("CSTAG_FLOW_RSTR1_POST");
				case 67:
					*uParam1 = -2060316038;
					return joaat("CSTAG_FLOW_RDTC2_POST");
				case 106:
					return joaat("CSTAG_FLOW_RMOB01_POST");
				case 107:
					return joaat("CSTAG_FLOW_RMOB02_POST");
				case 115:
					return joaat("CSTAG_FLOW_RNATV1_POST");
				case 116:
					return joaat("CSTAG_FLOW_RNATV2_POST");
				case 22:
					return joaat("CSTAG_FLOW_RCLDN1_POST");
				case 23:
					return joaat("CSTAG_FLOW_RCLDN2_POST");
				case 82:
					return joaat("CSTAG_FLOW_RGNG01_POST");
				case 68:
					*uParam1 = -2060316038;
					return joaat("CSTAG_FLOW_RDCH3_POST");
				case 140:
					return joaat("CSTAG_FLOW_RSTR31_POST");
				case 142:
					return joaat("CSTAG_FLOW_RSTR33_POST");
				case 58:
					return joaat("CSTAG_FLOW_RDOPN_POST");
				case 64:
					return joaat("CSTAG_FLOW_RDST61_POST");
				case 65:
					return joaat("CSTAG_FLOW_RDST62_POST");
				case 108:
					return joaat("CSTAG_FLOW_RMNR1_POST");
				case 8:
					return joaat("CSTAG_FLOW_RBCH11_POST");
				case 10:
					return joaat("CSTAG_FLOW_RBCH21_POST");
				case 2:
					return joaat("CSTAG_FLOW_RABI3_POST");
				case 96:
					return joaat("CSTAG_FLOW_RJCK2_POST");
				case 52:
					return joaat("CSTAG_FLOW_RCTAX2_POST");
				default:
					break;
			}
			break;
		case 11:
			iVar3 = __LIB_0__::func_76(iParam0);
			switch (iVar3)
			{
				case joaat("HAI_FISHING_01"):
					return joaat("CSTAG_FLOW_CA_FS01_POST");
				case joaat("HAI_HOME_ROBBERY_01"):
					return joaat("CSTAG_FLOW_CA_HR01_POST");
				case joaat("HAI_COACH_ROBBERY_01"):
					return joaat("CSTAG_FLOW_CA_CR02_POST");
				case joaat("HAI_COACH_ROBBERY_02"):
					return joaat("CSTAG_FLOW_CA_CR03_POST");
				case joaat("HAI_FISHING_02"):
					return joaat("CSTAG_FLOW_CA_FS02_POST");
				case joaat("HAI_HUNTING_06"):
					return joaat("CSTAG_FLOW_CA_HT06_POST");
				case joaat("HAI_BANK_ROBBERY_01"):
					return joaat("CSTAG_FLOW_CA_BR01_POST");
				case joaat("HAI_COACH_ROBBERY_03"):
					return joaat("CSTAG_FLOW_CA_CR01_POST");
				case joaat("HAI_COACH_ROBBERY_04"):
					return joaat("CSTAG_FLOW_CA_CR04_POST");
				default:
					break;
			}
			break;
	}
	return 176656832;
}

bool func_664(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_1__::func_831(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!__LIB_1__::func_795(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	__LIB_0__::func_912(iParam0, bParam2);
	iVar2 = 0;
	if (__LIB_1__::func_614(iParam0, 0, 0) == 0)
	{
		if (__LIB_1__::func_153(iParam0))
		{
			iVar5 = __LIB_0__::func_913(iParam0);
			iVar6 = __LIB_0__::func_352(iVar5);
			iVar7 = __LIB_1__::func_756(iVar6) + 1;
			__LIB_1__::func_757(iVar5);
			if (__LIB_1__::func_154(38))
			{
				__LIB_1__::func_240(483, 0);
			}
			else
			{
				__LIB_1__::func_240(482, 0);
			}
			if (iVar7 == __LIB_0__::func_353(iVar6))
			{
				func_664(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_1__::func_832(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(2);
					}
					else
					{
						__LIB_1__::func_832(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(1);
					}
				}
			}
			else if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
				{
					__LIB_1__::func_832(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(2);
				}
				else
				{
					__LIB_1__::func_832(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(1);
				}
			}
			if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_10__::func_706(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						__LIB_10__::func_706(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
	{
		if ((!__LIB_0__::func_192(iParam0, 866047851) && !__LIB_0__::func_192(iParam0, -1979000645)) && !__LIB_0__::func_192(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (__LIB_0__::func_774(iParam0, 8388608) && !__LIB_0__::func_293(28))
	{
		__LIB_13__::func_72(28);
	}
	if (!bVar3)
	{
		if (__LIB_0__::func_192(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (__LIB_0__::func_357(iParam0) == -1447088266)
			{
				iVar1 = __LIB_0__::func_775(__LIB_0__::func_914(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (__LIB_0__::func_2() == -1)
					{
						__LIB_0__::func_915(iVar1);
					}
					if (__LIB_0__::func_708(0) && __LIB_1__::func_708(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						__LIB_0__::func_916(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
				if (WEAPON::_IS_AMMO_VALID(iVar1))
				{
					if (__LIB_0__::func_2() == -1)
					{
						__LIB_0__::func_915(iParam0);
					}
					if (__LIB_0__::func_708(0) && __LIB_1__::func_708(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						__LIB_0__::func_916(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("WEAPON"))
		{
			if (!__LIB_1__::func_823(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("AMMO") && __LIB_0__::func_258(iParam0))
		{
			if (!__LIB_1__::func_842(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 866047851))
		{
			__LIB_3__::func_909(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, 2000026003))
		{
			__LIB_1__::func_632(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -103750053))
		{
			__LIB_0__::func_15(__LIB_0__::func_358(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (__LIB_0__::func_192(iParam0, -121341956) && !__LIB_0__::func_192(iParam0, 606799272))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR") && iParam0 != joaat("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
				{
					__LIB_1__::func_240(498, 0);
				}
			}
			if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
			{
				__LIB_1__::func_796(iParam0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -136654233))
		{
			if (__LIB_0__::func_192(iParam0, -1021472396))
			{
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1466706512) && __LIB_0__::func_192(iParam0, 1147021565))
		{
			__LIB_1__::func_240(484, 0);
		}
		else if (__LIB_0__::func_192(iParam0, 1147021565) && __LIB_0__::func_192(iParam0, -524514947))
		{
		}
		else if (__LIB_0__::func_192(iParam0, 554195525))
		{
		}
		else if (__LIB_0__::func_192(iParam0, 589988438))
		{
			if (__LIB_1__::func_709())
			{
				__LIB_1__::func_797(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (__LIB_0__::func_192(iParam0, 787083290) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_12__::func_629(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1718133314))
		{
			__LIB_12__::func_630(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1738650224))
		{
			__LIB_12__::func_631(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_12__::func_632(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (__LIB_0__::func_192(iParam0, 1841149704))
		{
			__LIB_0__::func_359();
		}
		else if (__LIB_0__::func_192(iParam0, 606799272))
		{
			__LIB_12__::func_633(iParam0, iParam1);
			__LIB_1__::func_759(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_12__::func_788(iParam0, 0, 0, 0);
		}
		else if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
		{
			__LIB_1__::func_796(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1921346699))
		{
			if (__LIB_0__::func_2() != -1)
			{
				return false;
			}
			__LIB_1__::func_824(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!__LIB_1__::func_707(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_664(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_664(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_664(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_664(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_664(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_664(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (__LIB_0__::func_192(iParam0, -839724752) && __LIB_0__::func_774(iParam0, 4))
		{
			if (!__LIB_1__::func_154(42))
			{
				__LIB_1__::func_601(iParam0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 1399091007))
		{
			__LIB_0__::func_917(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_008_1"):
					iVar8 = joaat("KIT_POUCH_LEGENDARY");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_002_1"):
					iVar8 = joaat("KIT_POUCH_REMEDIES");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_003_1"):
					iVar8 = joaat("KIT_POUCH_INGREDIENTS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_004_1"):
					iVar8 = joaat("KIT_POUCH_KIT");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_005_1"):
					iVar8 = joaat("KIT_POUCH_PROVISIONS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_006_1"):
					iVar8 = joaat("KIT_POUCH_MATERIALS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_007_1"):
					iVar8 = joaat("KIT_POUCH_VALUABLES");
					break;
			}
			if (iVar8 != 0)
			{
				func_664(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("ARROW_BUNDLE");
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_CRICKETS");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_WORMS");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("UPGRADE_OFFHAND_HOLSTER"):
				__LIB_13__::func_72(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (__LIB_0__::func_918(&iVar9, 0))
				{
					__LIB_1__::func_708(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (__LIB_0__::func_2() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				__LIB_1__::func_240(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				__LIB_0__::func_360();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				__LIB_0__::func_361();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				__LIB_0__::func_362();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				__LIB_0__::func_363();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				__LIB_1__::func_244();
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				__LIB_0__::func_919(218622660, 0);
				__LIB_0__::func_368(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				__LIB_0__::func_919(218622660, 0);
				__LIB_0__::func_368(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(8);
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				__LIB_1__::func_424(242, __LIB_0__::func_776(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				__LIB_1__::func_424(240, __LIB_0__::func_776(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				__LIB_1__::func_424(241, __LIB_0__::func_776(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_LAMB_HEART"):
			case joaat("CONSUMABLE_MEAL_PRIME_RIB"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL"):
			case joaat("CONSUMABLE_MEAL_CONSOMME"):
			case joaat("CONSUMABLE_MEAL_FRIED_CATFISH"):
			case joaat("CONSUMABLE_MEAL_PRAIRIE_CHICKEN"):
			case joaat("CONSUMABLE_MEAL_LAMB_FRY"):
			case joaat("CONSUMABLE_MEAL_OYSTER_STEW"):
			case joaat("CONSUMABLE_MEAL_TURTLE_SOUP"):
			case joaat("CONSUMABLE_MEAL_OATMEAL"):
			case joaat("CONSUMABLE_MEAL_CORNED_BEEF_HASH"):
			case joaat("CONSUMABLE_MEAL_ROAST_BEEF"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				__LIB_1__::func_240(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				__LIB_1__::func_240(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				__LIB_1__::func_240(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_664(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_664(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (__LIB_0__::func_293(1))
				{
					__LIB_1__::func_240(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				__LIB_1__::func_240(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (__LIB_0__::func_2() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				__LIB_1__::func_240(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return false;
		}
		iVar10 = iParam0;
		__LIB_0__::func_371(&iVar10);
		if (!__LIB_1__::func_825(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!__LIB_0__::func_708(0))
		{
			return true;
		}
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
		{
			__LIB_13__::func_116(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_13__::func_157(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (__LIB_0__::func_708(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_664(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			__LIB_1__::func_451(iVar2, 0);
		}
	}
	Var35 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	__LIB_1__::func_602(iParam0);
	if (fParam6 > 0f)
	{
		if (__LIB_0__::func_192(iParam0, -839724752))
		{
			__LIB_1__::func_157(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		__LIB_1__::func_158(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_666()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1158();
	func_1159();
	func_1160();
	func_1161();
	func_1162();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_667(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1165(iParam0, 1, 1, -142743235, 1);
	if (__LIB_0__::func_779(iParam0))
	{
		__LIB_1__::func_798(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = __LIB_0__::func_161(__LIB_1__::func_710(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	__LIB_0__::func_921(joaat("MPC_SP_DEFAULT_INTER_OUTFIT_TYPES"));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = Global_1946804.f_57[iVar1 /*11*/];
		Global_1946804.f_1616.f_1[iVar1 /*3*/] = { vVar4 };
		Global_1946804.f_1616.f_1[iVar1 /*3*/].f_2 = (Global_1946804.f_1497.f_1[iVar1 /*3*/].f_2 || Global_1946804.f_1378.f_1[iVar1 /*3*/].f_2);
		iVar1++;
	}
	if (__LIB_0__::func_241() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	__LIB_1__::func_633(&(Global_1946804.f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	__LIB_1__::func_633(&(Global_1946804.f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	Global_1946804.f_1616.f_1[8 /*3*/] = { __LIB_0__::func_377(8, 0) };
	Global_1946804.f_1616.f_1[9 /*3*/] = { __LIB_0__::func_377(9, 0) };
	Global_1946804.f_1616.f_1[0 /*3*/] = { __LIB_0__::func_377(0, 0) };
	Global_1946804.f_1616.f_1[2 /*3*/] = { __LIB_0__::func_377(2, 0) };
	Global_1946804.f_1616.f_1[3 /*3*/] = { __LIB_0__::func_377(3, 0) };
	Global_1946804.f_1616.f_1[1 /*3*/] = { __LIB_0__::func_377(1, 0) };
	Global_1946804.f_1616.f_1[5 /*3*/] = { __LIB_0__::func_377(5, 0) };
	Global_1946804.f_1616.f_1[6 /*3*/] = { __LIB_0__::func_377(6, 0) };
	Global_1946804.f_1616.f_1[7 /*3*/] = { __LIB_0__::func_377(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == __LIB_0__::func_780(iVar8, iVar0))
				{
					__LIB_0__::func_242(&(Global_1946804.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == __LIB_0__::func_780(iVar8, iVar0))
		{
			__LIB_0__::func_242(&(Global_1946804.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == Global_1946804.f_1497.f_1[iVar8 /*3*/])
			{
				Global_1946804.f_1497.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
				bVar3 = true;
			}
			if (iParam0 == Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/])
			{
				Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
				bVar3 = true;
			}
			if (bVar3)
			{
			}
			else
			{
				iVar8++;
			}
		}
	}
	else
	{
		if (iParam0 == Global_1946804.f_1497.f_1[iVar8 /*3*/])
		{
			Global_1946804.f_1497.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
		}
		if (iParam0 == Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/])
		{
			Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		Global_1946804.f_1378.f_1[iVar1 /*3*/] = { Global_1946804.f_1616.f_1[iVar1 /*3*/] };
		iVar1++;
	}
}

void func_702()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (Global_1956575 != 2)
	{
		return;
	}
	if (Global_1956575.f_4)
	{
		return;
	}
	if (!__LIB_0__::func_382(64))
	{
		return;
	}
	else if (__LIB_0__::func_1(Global_1935630, 131072))
	{
		return;
	}
	else if ((__LIB_0__::func_296(0, 0, 1) || __LIB_0__::func_383()) || __LIB_1__::func_195())
	{
		return;
	}
	iVar0 = __LIB_1__::func_194();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar4))
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1199(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		__LIB_5__::func_785(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		__LIB_5__::func_785(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		__LIB_1__::func_103(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		__LIB_0__::func_703(0, -1);
	}
	if (iVar2 > 0)
	{
		__LIB_0__::func_45("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	__LIB_0__::func_385(1, 0);
	Global_1956575.f_4 = 1;
}

void func_732(var uParam0)
{
	if (__LIB_2__::func_1(uParam0->f_604[0], 0, 1))
	{
		__LIB_2__::func_22(&(uParam0->f_996.f_5), uParam0->f_604[0]);
		PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_604[0], true);
		WEAPON::REMOVE_ALL_PED_WEAPONS(uParam0->f_604[0], true, true);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_604[0], __LIB_2__::func_709(uParam0->f_996.f_51.f_3));
		uParam0->f_925 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_604[0], true, false) };
		__LIB_2__::func_190(uParam0->f_604[0], 500);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3[0 /*32*/].f_23)))
		{
			__LIB_2__::func_133(uParam0->f_604[0], &(uParam0->f_3[0 /*32*/].f_23), 0);
		}
		__LIB_2__::func_463(uParam0->f_604[0], joaat("CONSUMABLE_HAIR_GREASE"), 1, 0);
		PED::_REQUEST_PED_EMOTIONAL_PRESET(uParam0->f_604[0], "DEFAULT_SHOCKED");
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_68[0 /*12*/].f_8))
	{
		if (STREAMING::IS_MODEL_VALID(uParam0->f_68[0 /*12*/].f_7))
		{
			uParam0->f_68[0 /*12*/].f_8 = OBJECT::CREATE_OBJECT(uParam0->f_68[0 /*12*/].f_7, uParam0->f_996.f_51, true, true, false, false, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_68[0 /*12*/].f_8))
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_68[0 /*12*/].f_8, uParam0->f_604[0], PED::GET_PED_BONE_INDEX(uParam0->f_604[0], 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_68[2 /*12*/].f_8))
	{
		if (STREAMING::IS_MODEL_VALID(uParam0->f_68[2 /*12*/].f_7))
		{
			uParam0->f_68[1 /*12*/].f_8 = OBJECT::CREATE_OBJECT(uParam0->f_68[2 /*12*/].f_7, uParam0->f_996.f_51, true, true, false, false, true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_68[4 /*12*/].f_8))
	{
		if (STREAMING::IS_MODEL_VALID(uParam0->f_68[4 /*12*/].f_7))
		{
			uParam0->f_68[4 /*12*/].f_8 = OBJECT::CREATE_OBJECT(uParam0->f_68[4 /*12*/].f_7, uParam0->f_996.f_51, true, true, false, false, true);
		}
	}
	if (__LIB_2__::func_1(uParam0->f_604[1], 0, 1))
	{
		__LIB_2__::func_22(&(uParam0->f_996.f_5), uParam0->f_604[1]);
		__LIB_3__::func_141(uParam0->f_604[1], 1088421888 /* Float: 7f */, 0, 0);
		ENTITY::_0x18FF3110CF47115D(uParam0->f_604[1], 9, 0);
		__LIB_3__::func_566(&(uParam0->f_604[1]), -1793085205);
		PED::_0xA2F8B3B5FEDFC100(uParam0->f_604[1], -220774791);
		PED::_UPDATE_PED_VARIATION(uParam0->f_604[1], false, true, true, true, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_604[1], 495, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_68[4 /*12*/].f_8))
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(uParam0->f_68[4 /*12*/].f_8, uParam0->f_604[1], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_68[4 /*12*/].f_8, "Gun_GripL"), ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_604[1], "PH_SaddleHorn"), 0f, 0f, 0f, 0f, 0f, 0.035f, 0f, 120f, 0f, 1000f, 0, 1, 0, 1, 2, 1, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
	}
	__LIB_2__::func_967(&(uParam0->f_996.f_5), uParam0->f_604[0], uParam0->f_604[1], 0);
	__LIB_3__::func_285(uParam0->f_604[0], &(uParam0->f_996), 0);
	__LIB_3__::func_285(uParam0->f_604[1], &(uParam0->f_996), 0);
}

void func_733(var uParam0)
{
	uParam0->f_596 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_596.f_4, 64, "pbl_handover", false, true);
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_596))
	{
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_596, uParam0->f_996.f_51, 0f, 0f, uParam0->f_996.f_51.f_3, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_596, "TreasureHunter", uParam0->f_604[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_596, "player", Global_35, 0);
	uParam0->f_596.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_596.f_5, 0, "pl_base", false, true);
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_596.f_1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_596.f_1, -580.437f, -350.209f, 82.16f, 0f, 0f, -74.85f, 2);
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_596.f_1, "A_M_M_BiVRoughTravellers_01", uParam0->f_604[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_596.f_1, "p_binoculars01x", uParam0->f_68[0 /*12*/].f_8, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_596.f_1, "s_tm_hearlands", uParam0->f_68[1 /*12*/].f_8, 0);
	if (__LIB_0__::func_181())
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_596.f_1, "JOHN", Global_35, 0);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_596.f_1, "ARTHUR", Global_35, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_596))
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_596.f_4))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_596, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_596);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_596.f_5))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_596.f_1, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_596.f_1);
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_596, "Base_Bool", false, false);
}

void func_736(var uParam0)
{
	if (func_1253(-5f, 1, 0, 0))
	{
		switch (uParam0->f_633)
		{
			case 0:
				break;
			case 1:
				__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "ANNOY_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				break;
			case 2:
				__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "ANNOY_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				break;
			case 3:
				break;
		}
		if (uParam0->f_633 >= 3)
		{
			uParam0->f_897 = 1;
		}
		uParam0->f_633++;
		__LIB_7__::func_898(&(uParam0->f_996.f_5), &(uParam0->f_987));
	}
}

void func_737(var uParam0)
{
	__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "ANNOY_AGGRO"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	TASK::CLEAR_PED_TASKS(uParam0->f_604[0], true, false);
	TASK::CLEAR_PED_SECONDARY_TASK(uParam0->f_604[0]);
	TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_611));
	TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, "MECH_LOCO_M@GENERIC@NORMAL@UNARMED@IDLE", "IDLE", Global_35, 500, 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
	TASK::TASK_CONFRONT(0, Global_35, 2);
	if (__LIB_2__::func_1(uParam0->f_604[1], 0, 1))
	{
		TASK::TASK_MOUNT_ANIMAL(0, uParam0->f_604[1], -1, -1, 1f, 64, 0, 0);
	}
	TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, -1082130432 /* Float: -1f */, 0, 0);
	__LIB_1__::func_474(uParam0->f_604[0], &(uParam0->f_611), 0, 0, 1, 1);
	__LIB_3__::func_969(&(uParam0->f_613), 1);
	PED::SET_PED_KEEP_TASK(uParam0->f_604[0], true);
	func_1257(uParam0);
	__LIB_1__::func_392(&(uParam0->f_996.f_5), 0);
	__LIB_1__::func_683(&(uParam0->f_628), 1024);
	__LIB_1__::func_683(&(uParam0->f_628), 16384);
	__LIB_0__::func_325(&(uParam0->f_607[0]));
	__LIB_3__::func_264(&(uParam0->f_996));
	func_740(uParam0, 0);
	uParam0->f_899 = 1;
	uParam0->f_984 = 8;
}

void func_740(var uParam0, int iParam1)
{
	__LIB_2__::func_411(&(uParam0->f_843[0 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(uParam0->f_843[1 /*17*/]), 0, 0);
	if (iParam1 == 1)
	{
		__LIB_2__::func_411(&(uParam0->f_843[2 /*17*/]), 0, 0);
	}
	uParam0->f_923 = 0;
}

bool func_744(var uParam0)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	vector3 vVar8;
	float fVar11;
	float fVar12;
	float fVar13;
	int iVar14;
	if (__LIB_9__::func_178(&(uParam0->f_978)) >= 1f)
	{
		__LIB_1__::func_561(&(uParam0->f_978));
		AUDIO::STOP_PED_SPEAKING(Global_35, false);
	}
	if (__LIB_0__::func_665(Global_35, uParam0->f_604[0], 1, 1) < 21f || uParam0->f_984 == 8)
	{
		func_1265(uParam0);
		if (!__LIB_0__::func_899(&(uParam0->f_978)))
		{
			if (PED::IS_PED_BEING_JACKED(uParam0->f_604[0]))
			{
				AUDIO::STOP_PED_SPEAKING(Global_35, true);
				__LIB_4__::func_89(&(uParam0->f_978), 0);
			}
		}
		if (!__LIB_0__::func_27(uParam0->f_627, 2097152) && Global_1901328.f_95 == 1)
		{
			sVar0 = "TREASURE_MAP_C1_M1";
			iVar1 = 1;
			if (ENTITY::GET_ENTITY_MODEL(uParam0->f_68[1 /*12*/].f_8) == joaat("S_TM_HEARLANDS"))
			{
				iVar1 = 0;
			}
			if ((iVar1 == 1 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_68[1 /*12*/].f_8)) && __LIB_0__::func_665(Global_35, uParam0->f_68[1 /*12*/].f_8, 1, 1) < 15f)
			{
				if (func_1266(uParam0, sVar0))
				{
					__LIB_1__::func_683(&(uParam0->f_627), 2097152);
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_68[1 /*12*/].f_8) && __LIB_0__::func_665(Global_35, uParam0->f_68[1 /*12*/].f_8, 1, 1) > 20f)
		{
			HUD::_0xF1E6979C0B779985(&(uParam0->f_931));
			uParam0->f_932 = 0;
			__LIB_1__::func_681(&(uParam0->f_627), 2097152);
		}
		if (uParam0->f_916 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_68[1 /*12*/].f_8) && __LIB_0__::func_27(uParam0->f_627, 1048576))
			{
				if ((((ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, uParam0->f_68[1 /*12*/].f_8) && !__LIB_0__::func_396(Global_35)) && !PED::_IS_PED_HOGTYING(Global_35)) && !PED::IS_PED_IN_MELEE_COMBAT(Global_35)) && !PED::_0x0E99E3BF11BB6367(Global_35))
				{
					TASK::_SET_SCENARIO_POINT_COORDS(uParam0->f_612, Global_36, true);
					__LIB_2__::func_259(&(uParam0->f_975));
					uParam0->f_916 = 0;
					__LIB_0__::func_325(&(uParam0->f_930));
					OBJECT::DELETE_OBJECT(&(uParam0->f_68[1 /*12*/].f_8));
					func_664(joaat("DOCUMENT_TREASURE_MAP_01"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					if (__LIB_0__::func_181())
					{
						__LIB_1__::func_465(joaat("JOURNAL_RC_TREASURE1B_JN"), 0);
					}
					else
					{
						__LIB_1__::func_465(joaat("JOURNAL_RC_TREASURE1B_AR"), 0);
					}
				}
			}
			if (!__LIB_2__::func_1(uParam0->f_604[0], 0, 1) && !__LIB_0__::func_27(uParam0->f_627, 268435456))
			{
				if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_01"), 1, 0))
				{
					if (__LIB_0__::func_181())
					{
						__LIB_1__::func_465(joaat("JOURNAL_RC_TREASURE1B_JN"), 0);
					}
					else
					{
						__LIB_1__::func_465(joaat("JOURNAL_RC_TREASURE1B_AR"), 0);
					}
					uParam0->f_916 = 0;
				}
			}
		}
		func_1268(uParam0);
		func_1269(uParam0);
		func_1270(uParam0);
		if (__LIB_0__::func_27(uParam0->f_627, 1048576))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_68[1 /*12*/].f_8))
			{
				TASK::_0xA6A76D666A281F2D(uParam0->f_68[1 /*12*/].f_8, uParam0->f_994);
			}
		}
	}
	func_1271(uParam0);
	func_1272(uParam0);
	if (__LIB_2__::func_1(uParam0->f_604[1], 0, 1) && uParam0->f_636 <= 5)
	{
		if (uParam0->f_636 == 5)
		{
			PED::_0xA2F8B3B5FEDFC100(uParam0->f_604[1], -220774791);
			PED::_UPDATE_PED_VARIATION(uParam0->f_604[1], false, true, true, true, false);
		}
		uParam0->f_636++;
	}
	if (uParam0->f_637 == 1)
	{
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_604[0]))
		{
			if (__LIB_0__::func_27(uParam0->f_628, 128) && !__LIB_0__::func_27(uParam0->f_628, 256))
			{
				__LIB_1__::func_683(&(uParam0->f_628), 256);
				func_290(uParam0);
			}
			if (!__LIB_0__::func_27(uParam0->f_628, 128))
			{
				__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "ROB_RESP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&(uParam0->f_628), 128);
				__LIB_2__::func_259(&(uParam0->f_933));
			}
		}
	}
	if (((__LIB_2__::func_1(uParam0->f_604[0], 0, 1) && uParam0->f_996.f_46 == 0) && uParam0->f_984 != 8) && uParam0->f_984 != 7)
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(uParam0->f_604[0], &(uParam0->f_557));
	}
	switch (uParam0->f_984)
	{
		case 0:
			if (uParam0->f_595 == 1)
			{
				func_1273(uParam0);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_596.f_1))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_596.f_1, true, false))
				{
					ANIMSCENE::START_ANIM_SCENE(uParam0->f_596.f_1);
					uParam0->f_612 = TASK::CREATE_SCENARIO_POINT(joaat("WB_TREASURE_HUNTER"), uParam0->f_996.f_51, 0, 0f, 0, 0);
					bVar3 = ANIMSCENE::GET_ANIM_SCENE_BOOL(uParam0->f_596.f_1, "b_PlayerArthur");
					if (__LIB_0__::func_181())
					{
						__LIB_0__::func_928(&(uParam0->f_641), Global_35, "JOHN", 1);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_596.f_1, "b_PlayerArthur", false, false);
					}
					else
					{
						__LIB_0__::func_928(&(uParam0->f_641), Global_35, "ARTHUR", 1);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_596.f_1, "b_PlayerArthur", true, false);
					}
					bVar3 = ANIMSCENE::GET_ANIM_SCENE_BOOL(uParam0->f_596.f_1, "b_PlayerArthur");
					__LIB_0__::func_928(&(uParam0->f_641), uParam0->f_604[0], "RE_TREASURE_HUNTER", 1);
					__LIB_1__::func_392(&(uParam0->f_996.f_5), 1);
					__LIB_1__::func_473(uParam0->f_604[1], joaat("WORLD_ANIMAL_HORSE_GRAZING_DOMESTIC"), -1, 0, 0, -1082130432 /* Float: -1f */);
					func_1276(uParam0);
					uParam0->f_919 = 0;
					uParam0->f_616 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -588.817f, -339.592f, 83.215f, 0f, 0f, 22.349f, 2f, 6.852f, 5f);
					uParam0->f_617 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -590.199f, -340.998f, 83.215f, 0f, 0f, 45.493f, 2f, 6.852f, 5f);
					PED::_0x931B241409216C1F(uParam0->f_604[0], uParam0->f_604[1], 0);
					if (uParam0->f_595 == 0)
					{
						uParam0->f_984 = 1;
					}
					else
					{
						uParam0->f_984 = 9;
					}
					uParam0->f_614 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(uParam0->f_604[0], true, false), 0f, 0f, 0f, 10f, 10f, 8f, "m_volFocus");
					PED::_0x7C00CFC48A782DC0(uParam0->f_614, uParam0->f_604[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
					uParam0->f_613 = __LIB_3__::func_721(uParam0->f_604[0], uParam0->f_614, 28);
					HUD::_TEXT_DATABASE_REQUEST("rethaud");
				}
			}
			break;
		case 10:
			if (__LIB_0__::func_27(uParam0->f_627, 32))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_596.f_1) >= 0.9f)
				{
					if (uParam0->f_922 == 1)
					{
						__LIB_12__::func_991(&(uParam0->f_781[0 /*61*/]), uParam0->f_604[0]);
						uParam0->f_922 = 0;
					}
				}
				if ((!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_596.f_1, false) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uParam0->f_596.f_1)) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_596.f_1) >= 0.95f)
				{
					CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
					uParam0->f_131 = 1;
					uParam0->f_984 = 12;
				}
			}
			break;
		case 12:
			func_1273(uParam0);
			if (uParam0->f_895)
			{
				if (!__LIB_0__::func_899(&(uParam0->f_933)))
				{
					__LIB_4__::func_89(&(uParam0->f_933), 0);
				}
				if (__LIB_1__::func_583(&(uParam0->f_933)) > 0f)
				{
					if (CAM::DOES_CAM_EXIST(uParam0->f_928))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(50f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
					}
				}
				if (__LIB_1__::func_583(&(uParam0->f_933)) > 1f)
				{
					if (CAM::DOES_CAM_EXIST(uParam0->f_928))
					{
						CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
						CAM::DESTROY_CAM(uParam0->f_928, false);
					}
				}
				if ((__LIB_1__::func_583(&(uParam0->f_933)) > 10f && !__LIB_0__::func_27(uParam0->f_627, 2048)) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					if (!func_1278(uParam0))
					{
						iVar4 = __LIB_3__::func_444(func_288(38), func_289(38));
						if (iVar4 <= 0)
						{
							iVar4 = 4067;
						}
						TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_611));
						TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_611));
						TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, func_288(38), func_289(38), Global_35, iVar4, 8f, -8f, 67109392, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
						TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, func_288(51), func_289(51), Global_35, -1, 8f, -8f, 67109393, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
						__LIB_1__::func_474(uParam0->f_604[0], &(uParam0->f_611), 0, 0, 1, 1);
						__LIB_1__::func_683(&(uParam0->f_627), 2048);
					}
				}
				if (__LIB_9__::func_178(&(uParam0->f_933)) > 20f && __LIB_0__::func_27(uParam0->f_627, 2048))
				{
					if (!func_1278(uParam0))
					{
						func_740(uParam0, 1);
						uParam0->f_899 = 1;
						uParam0->f_781[0 /*61*/].f_1 = 1;
						uParam0->f_781[0 /*61*/].f_2 = 0;
						__LIB_1__::func_683(&(uParam0->f_627), 33554432);
						__LIB_3__::func_600(Global_35, uParam0->f_604[0], func_1254(uParam0, "NEG_RESP_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iVar4 = __LIB_3__::func_444(func_288(35), func_289(35));
						if (iVar4 <= 0)
						{
							iVar4 = 14066;
						}
						TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_611));
						TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_611));
						TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, func_288(35), func_289(35), Global_35, iVar4, 8f, -8f, 67109392, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
						TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, func_288(51), func_289(51), Global_35, -1, 8f, -8f, 67109393, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
						__LIB_1__::func_474(uParam0->f_604[0], &(uParam0->f_611), 0, 0, 1, 1);
						uParam0->f_984 = 14;
					}
				}
			}
			if (func_1253(0, 1, 0, 0))
			{
				uParam0->f_895 = 1;
			}
			break;
		case 13:
			func_1280(uParam0);
			break;
		case 14:
			if ((func_1253(-3f, 1, 0, 0) && ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_604[0], func_288(51), func_289(51), 1)) || ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], -293766740))
			{
				func_290(uParam0);
				uParam0->f_895 = 0;
				uParam0->f_899 = 0;
				uParam0->f_984 = 15;
				__LIB_2__::func_259(&(uParam0->f_933));
			}
			break;
		case 15:
			func_1273(uParam0);
			if (uParam0->f_895)
			{
				if ((__LIB_9__::func_178(&(uParam0->f_933)) > 10f && !__LIB_0__::func_27(uParam0->f_627, 536870912)) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					if (!func_1278(uParam0))
					{
						__LIB_1__::func_683(&(uParam0->f_627), 536870912);
						iVar5 = __LIB_3__::func_444(func_288(40), func_289(40));
						if (iVar5 <= 0)
						{
							iVar5 = 3200;
						}
						TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_611));
						TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_611));
						TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, func_288(40), func_289(40), Global_35, iVar5, 8f, -8f, 67109392, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
						TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, func_288(51), func_289(51), Global_35, -1, 8f, -8f, 67109393, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
						__LIB_1__::func_474(uParam0->f_604[0], &(uParam0->f_611), 0, 0, 1, 1);
					}
				}
				if (__LIB_9__::func_178(&(uParam0->f_933)) > 20f && __LIB_0__::func_27(uParam0->f_627, 536870912))
				{
					if (!func_1278(uParam0))
					{
						func_740(uParam0, 1);
						uParam0->f_899 = 1;
						func_740(uParam0, 1);
						__LIB_3__::func_600(Global_35, uParam0->f_604[0], func_1254(uParam0, "SECOND_NEG_RESP_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iVar5 = __LIB_3__::func_444(func_288(45), func_289(45));
						if (iVar5 <= 0)
						{
							iVar5 = 13266;
						}
						TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_611));
						TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, func_288(45), func_289(45), Global_35, iVar5, 8f, -2f, 67109392, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
						__LIB_1__::func_474(uParam0->f_604[0], &(uParam0->f_611), 0, 0, 1, 1);
						__LIB_1__::func_683(&(uParam0->f_628), 64);
						uParam0->f_984 = 17;
					}
				}
			}
			if (func_1253(0, 1, 0, 0))
			{
				uParam0->f_895 = 1;
			}
			break;
		case 16:
			func_1280(uParam0);
			break;
		case 17:
			if ((func_1253(-3f, 1, 0, 0) && (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_604[0], func_288(51), func_289(51), 1) || !__LIB_0__::func_163(uParam0->f_604[0], 1435919172))) && __LIB_0__::func_27(uParam0->f_627, 131072))
			{
				uParam0->f_984 = 1;
			}
			break;
		case 18:
			break;
		case 19:
			func_1273(uParam0);
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
			{
				if (func_1281(&(uParam0->f_936), 11.5f))
				{
					if (uParam0->f_898 == 0)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						uParam0->f_898 = 1;
					}
				}
			}
			func_1282(uParam0->f_604[0], &(uParam0->f_739), 0f, 0f, 0f, 1, 30f, 15f, -1, 3000, 2000, 1075838976 /* Float: 2.5f */, 0, 1, 1084227584 /* Float: 5f */);
			if ((ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_596, "TreasureHunter") || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uParam0->f_596, false)) || ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], -462187292))
			{
				uParam0->f_984 = 1;
				if (HUD::IS_RADAR_HIDDEN())
				{
					MAP::DISPLAY_RADAR(true);
				}
			}
			break;
		case 9:
			if (__LIB_1__::func_322("RETH_INT_LI_GRA"))
			{
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_596))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_596, true, false))
				{
					ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_596);
				}
			}
			func_1284(uParam0);
			if (__LIB_0__::func_665(Global_35, uParam0->f_604[0], 1, 1) < 21f)
			{
				func_1285(uParam0);
				if (!MAP::DOES_BLIP_EXIST(uParam0->f_607[0]))
				{
					uParam0->f_607[0] = __LIB_1__::func_863(uParam0->f_604[0], 2103462781, 1, 1);
					MAP::SET_BLIP_SPRITE(uParam0->f_607[0], joaat("BLIP_RC"), true);
				}
				if (uParam0->f_922 == 0 && MAP::DOES_BLIP_EXIST(uParam0->f_607[0]))
				{
					uParam0->f_922 = 1;
					__LIB_12__::func_980(&(uParam0->f_781[0 /*61*/]), &(uParam0->f_843), 0, uParam0->f_607[0], 0, -1082130432 /* Float: -1f */, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
				if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_626))
				{
					uParam0->f_626 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volCliffEdge");
					VOLUME::_0x39816F6F94F385AD(uParam0->f_626, -573.783f, -334.888f, 83.215f, 0f, 0f, -20.848f, 8f, 1.894f, 10f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_626, -579.122f, -335.122f, 83.215f, 0f, 0f, 29.798f, 7.298f, 2.358f, 10f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_626, -582.88f, -337.484f, 83.215f, 0f, 0f, 19.786f, 3.14f, 1.511f, 10f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_626, -586.644f, -337.382f, 83.215f, 0f, 0f, -9.876f, 5.315f, 1.894f, 10f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_626, -589.918f, -337.926f, 83.215f, 0f, 0f, 25.144f, 7.298f, 2.358f, 10f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_626, -592.387f, -340.464f, 83.215f, 0f, 0f, 56.935f, 2.458f, 1.54f, 10f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_626, -595.22f, -343.044f, 83.215f, 0f, 0f, 42.51f, 5.771f, 2.121f, 10f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_626, -601.329f, -344.666f, 83.215f, 0f, 0f, -3.953f, 9.908f, 1.54f, 10f);
				}
				uParam0->f_989 = __LIB_3__::func_547(uParam0->f_604[0], Global_35, 1060437492 /* Float: 0.707f */);
				sVar2 = "pl_HeyOverHere_l_b";
				switch (uParam0->f_989)
				{
					case 0:
						sVar2 = "pl_HeyOverHere_f";
						break;
					case 3:
						sVar2 = "pl_HeyOverHere_l";
						break;
					case 2:
						sVar2 = "pl_HeyOverHere_r";
						break;
					case 1:
						uParam0->f_989 = __LIB_3__::func_547(uParam0->f_604[0], Global_35, 1f);
						if (uParam0->f_989 == 3)
						{
							sVar2 = "pl_HeyOverHere_l_b";
						}
						else
						{
							sVar2 = "pl_HeyOverHere_r_b";
						}
						break;
				}
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_596.f_1, sVar2))
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_596.f_1, sVar2))
					{
						if (((__LIB_1__::func_472(uParam0->f_604[0], 20f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_604[0])) && !__LIB_1__::func_322("RETH_INT_LI_GRA"))
						{
							uParam0->f_921 = 1;
							uParam0->f_899 = 0;
							uParam0->f_905 = 0;
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_596.f_1, sVar2, true);
							if (uParam0->f_918 == 0)
							{
								__LIB_2__::func_504(uParam0->f_604[0], 0);
								__LIB_8__::func_111("RETH_INT", 0);
								__LIB_14__::func_176(&(uParam0->f_641), "RETH_INT_LI_CO3", uParam0->f_604[0], Global_35, 0, 0, 1, 1);
								__LIB_2__::func_315(1891783641, uParam0->f_604[0], 1);
							}
							PED::SET_PED_KEEP_TASK(uParam0->f_604[0], true);
							func_368(uParam0);
							uParam0->f_984 = 2;
						}
					}
					else
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_596.f_1, sVar2);
					}
				}
			}
			break;
		case 2:
			func_1285(uParam0);
			if (__LIB_0__::func_665(Global_35, uParam0->f_604[0], 1, 1) < 21f)
			{
				if (!MAP::DOES_BLIP_EXIST(uParam0->f_607[0]))
				{
					uParam0->f_607[0] = __LIB_1__::func_863(uParam0->f_604[0], 2103462781, 1, 1);
					MAP::SET_BLIP_SPRITE(uParam0->f_607[0], joaat("BLIP_RC"), true);
				}
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_596.f_1))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_596.f_1, "pl_greet"))
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_596.f_1, "pl_greet"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_596.f_1, "pl_greet");
					}
				}
			}
			if ((((uParam0->f_918 == 1 && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false)) && !PED::IS_PED_ON_MOUNT(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_604[0])) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				if (func_1293(uParam0->f_596.f_1, "pl_greet"))
				{
					__LIB_2__::func_504(uParam0->f_604[0], 100);
					__LIB_12__::func_953(&(uParam0->f_781[0 /*61*/]), 0);
					uParam0->f_918 = 1;
					func_740(uParam0, 1);
					__LIB_1__::func_683(&(uParam0->f_627), 32);
					uParam0->f_984 = 10;
				}
			}
			else
			{
				if (!__LIB_0__::func_899(&(uParam0->f_945)))
				{
					__LIB_4__::func_89(&(uParam0->f_945), 0);
					uParam0->f_639 = 7f;
				}
				sVar2 = "pl_ComeHereAMinute_b";
				if ((__LIB_9__::func_178(&(uParam0->f_945)) > uParam0->f_639 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_604[0]))
				{
					if (!__LIB_0__::func_27(uParam0->f_628, 1) && !__LIB_0__::func_27(uParam0->f_628, 2))
					{
						uParam0->f_989 = __LIB_3__::func_547(uParam0->f_604[0], Global_35, 1060437492 /* Float: 0.707f */);
						switch (uParam0->f_989)
						{
							case 0:
								sVar2 = "pl_CanIShowYouSomething_f";
								break;
							case 3:
								sVar2 = "pl_CanIShowYouSomething_l";
								break;
							case 2:
								sVar2 = "pl_CanIShowYouSomething_r";
								break;
							case 1:
								sVar2 = "pl_CanIShowYouSomething_b";
								break;
						}
						if (func_1293(uParam0->f_596.f_1, sVar2))
						{
							__LIB_1__::func_683(&(uParam0->f_628), 1);
							__LIB_2__::func_504(uParam0->f_604[0], 0);
							__LIB_14__::func_176(&(uParam0->f_641), "RETH_INT_LI_CO1", uParam0->f_604[0], Global_35, 0, 0, 1, 1);
							__LIB_2__::func_315(1891783641, uParam0->f_604[0], 1);
							uParam0->f_639 = 10f;
							__LIB_2__::func_259(&(uParam0->f_945));
						}
					}
					else if (__LIB_0__::func_27(uParam0->f_628, 1) && !__LIB_0__::func_27(uParam0->f_628, 2))
					{
						uParam0->f_989 = __LIB_3__::func_547(uParam0->f_604[0], Global_35, 1060437492 /* Float: 0.707f */);
						switch (uParam0->f_989)
						{
							case 0:
								sVar2 = "pl_ComeHereAMinute_f";
								break;
							case 3:
								sVar2 = "pl_ComeHereAMinute_l";
								break;
							case 2:
								sVar2 = "pl_ComeHereAMinute_r";
								break;
							case 1:
								uParam0->f_989 = __LIB_3__::func_547(uParam0->f_604[0], Global_35, 1f);
								if (uParam0->f_989 == 3)
								{
									sVar2 = "pl_ComeHereAMinute_l";
								}
								else
								{
									sVar2 = "pl_ComeHereAMinute_r";
								}
								break;
						}
						if (func_1293(uParam0->f_596.f_1, sVar2))
						{
							__LIB_2__::func_504(uParam0->f_604[0], 0);
							__LIB_14__::func_176(&(uParam0->f_641), "RETH_INT_LI_CO2", uParam0->f_604[0], Global_35, 0, 0, 1, 1);
							__LIB_1__::func_683(&(uParam0->f_628), 2);
							uParam0->f_639 = 25f;
							__LIB_2__::func_259(&(uParam0->f_945));
						}
					}
					else if ((__LIB_0__::func_27(uParam0->f_628, 1) && __LIB_0__::func_27(uParam0->f_628, 2)) && !__LIB_0__::func_27(uParam0->f_628, 4))
					{
						__LIB_1__::func_683(&(uParam0->f_628), 4);
					}
				}
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_604[0], func_288(51), func_289(51), 1) || !__LIB_0__::func_163(uParam0->f_604[0], 1435919172))
			{
				func_1294(uParam0);
				TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_611));
				TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_611));
				TASK::TASK_MOUNT_ANIMAL(0, uParam0->f_604[1], -1, -1, 1.5f, 1, 0, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -584.2529f, -385.1591f, 77.21725f, 1.25f, -1, 0.25f, 1, 40000f);
				TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, -1082130432 /* Float: -1f */, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uParam0->f_611);
				TASK::TASK_PERFORM_SEQUENCE(uParam0->f_604[0], uParam0->f_611);
				TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_611));
				__LIB_3__::func_969(&(uParam0->f_613), 1);
				PED::SET_PED_KEEP_TASK(uParam0->f_604[0], true);
				func_1257(uParam0);
				__LIB_1__::func_683(&(uParam0->f_628), 16384);
				uParam0->f_984 = 7;
			}
			break;
		case 7:
			if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_604[0], 242628503, true) == 1)
			{
				if (uParam0->f_908 == 0)
				{
					uParam0->f_908 = 1;
				}
				if (uParam0->f_595 == 1 && TASK::GET_SEQUENCE_PROGRESS(uParam0->f_604[0]) >= 1)
				{
					if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_615))
					{
						PATHFIND::_0x2C87C3E1C7B96EE2(uParam0->f_615);
						__LIB_0__::func_172(uParam0->f_615);
					}
					if ((uParam0->f_595 == 1 && !__LIB_0__::func_27(uParam0->f_627, 33554432)) && !__LIB_0__::func_27(uParam0->f_627, -2147483648))
					{
						__LIB_1__::func_683(&(uParam0->f_627), -2147483648);
					}
					__LIB_0__::func_325(&(uParam0->f_607[0]));
					if (MAP::DOES_BLIP_EXIST(uParam0->f_607[0]))
					{
						MAP::REMOVE_BLIP(&(uParam0->f_607[0]));
					}
					uParam0->f_996.f_44 = 1;
					if (TASK::GET_SEQUENCE_PROGRESS(uParam0->f_604[0]) >= 2)
					{
						uParam0->f_984 = 8;
					}
				}
			}
			break;
		case 5:
			__LIB_3__::func_969(&(uParam0->f_613), 1);
			__LIB_1__::func_683(&(uParam0->f_628), 16384);
			if (CAM::DOES_CAM_EXIST(uParam0->f_928))
			{
				CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
				CAM::DESTROY_CAM(uParam0->f_928, false);
			}
			__LIB_0__::func_325(&(uParam0->f_607[0]));
			if (MAP::DOES_BLIP_EXIST(uParam0->f_607[0]))
			{
				MAP::REMOVE_BLIP(&(uParam0->f_607[0]));
			}
			if (uParam0->f_906 == 0)
			{
				__LIB_3__::func_593(0);
			}
			__LIB_0__::func_172(uParam0->f_616);
			__LIB_0__::func_172(uParam0->f_617);
			__LIB_0__::func_172(uParam0->f_618);
			__LIB_0__::func_172(uParam0->f_619);
			__LIB_0__::func_172(uParam0->f_620);
			__LIB_0__::func_172(uParam0->f_621);
			__LIB_0__::func_172(uParam0->f_622);
			__LIB_0__::func_172(uParam0->f_623);
			__LIB_0__::func_172(uParam0->f_624);
			__LIB_0__::func_172(uParam0->f_625);
			__LIB_0__::func_172(uParam0->f_626);
			__LIB_3__::func_969(&(uParam0->f_613), 1);
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_604[1], Global_35, 1, 1) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_604[0], Global_35, 1, 1)) || __LIB_0__::func_27(uParam0->f_627, 1073741824 /* Float: 2f */))
			{
				__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "AGGRO_HORSE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else if (PED::_IS_PED_HOGTIED(uParam0->f_604[0]) || PED::_IS_PED_LASSOED(uParam0->f_604[0]))
			{
			}
			else if (uParam0->f_129 == 0 || (uParam0->f_129 == 1 && uParam0->f_987 != 256))
			{
				if (((uParam0->f_995 == 1 || uParam0->f_995 == 6) || uParam0->f_995 == 7) || uParam0->f_995 == 12)
				{
					__LIB_2__::func_122(uParam0->f_604[0], "GUN_AVOID", 1744022339, Global_35, 1, &(uParam0->f_3[0 /*32*/].f_23), 1, 1);
				}
				else if (!__LIB_0__::func_899(&(uParam0->f_954)))
				{
					__LIB_4__::func_89(&(uParam0->f_966), 0);
				}
				if (uParam0->f_129 == 1)
				{
					uParam0->f_130 = 1;
				}
			}
			if (__LIB_2__::func_1(uParam0->f_604[0], 0, 1))
			{
				if ((__LIB_0__::func_71(uParam0->f_604[0]) || PED::_IS_PED_HOGTIED(uParam0->f_604[0])) || PED::_IS_PED_LASSOED(uParam0->f_604[0]))
				{
					if (__LIB_2__::func_1(uParam0->f_604[1], 0, 1) && uParam0->f_129 == 0)
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(uParam0->f_604[0], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
						PED::SET_PED_KEEP_TASK(uParam0->f_604[0], true);
					}
					else if (uParam0->f_129 == 0)
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(uParam0->f_604[0], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
						PED::SET_PED_KEEP_TASK(uParam0->f_604[0], true);
						TASK::_TASK_SMART_FLEE_STYLE_PED(uParam0->f_604[1], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
						PED::SET_PED_KEEP_TASK(uParam0->f_604[1], true);
					}
					else
					{
						TASK::TASK_COMBAT_PED(uParam0->f_604[0], Global_35, 0, 0);
						uParam0->f_130 = 1;
					}
					PED::SET_PED_KEEP_TASK(uParam0->f_604[0], true);
				}
				else
				{
					if ((PED::IS_PED_RAGDOLL(uParam0->f_604[0]) || PED::_0x29FCE825613FEFCA(uParam0->f_604[0], 500)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_604[0], Global_35, 1, 1))
					{
						TASK::CLEAR_PED_TASKS(uParam0->f_604[0], true, false);
					}
					TASK::CLEAR_PED_SECONDARY_TASK(uParam0->f_604[0]);
					TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_611));
					TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_611));
					if ((((!__LIB_0__::func_27(uParam0->f_627, 4) && !__LIB_0__::func_27(uParam0->f_627, 8)) && !PED::IS_PED_RAGDOLL(uParam0->f_604[0])) && !TASK::IS_PED_GETTING_UP(uParam0->f_604[0])) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_604[0], Global_35, 1, 1))
					{
						TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, "DEFAULT_SHOCKED", 2f, 0, 4);
						uParam0->f_904 = 1;
					}
					else if ((((uParam0->f_896 == 1 && !__LIB_0__::func_27(uParam0->f_627, 8)) && !__LIB_3__::func_528(uParam0->f_604[0], Global_35)) && ((uParam0->f_987 == 8 || uParam0->f_987 == 4) || uParam0->f_987 == 2048)) && uParam0->f_129 == 0)
					{
						iVar6 = __LIB_3__::func_444(func_288(14), func_289(14));
						if (iVar6 <= 0)
						{
							iVar6 = 4100;
						}
						__LIB_3__::func_593(0);
						TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, func_288(14), func_289(14), Global_35, iVar6, 4f, -2f, 67109392, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
						uParam0->f_896 = 0;
					}
					else
					{
						uParam0->f_904 = 1;
					}
					if (uParam0->f_129 == 0 || (uParam0->f_129 == 1 && uParam0->f_987 == 256))
					{
						if (__LIB_2__::func_1(uParam0->f_604[0], 0, 1) && __LIB_2__::func_1(uParam0->f_604[1], 0, 1))
						{
							TASK::TASK_MOUNT_ANIMAL(0, uParam0->f_604[1], -1, -1, 2f, 64, 0, 0);
						}
						TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
						__LIB_3__::func_969(&(uParam0->f_613), 1);
					}
					else
					{
						if (__LIB_0__::func_665(Global_35, uParam0->f_604[0], 1, 1) > 15f || PED::IS_PED_ON_MOUNT(Global_35))
						{
							TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
						}
						else
						{
							TASK::TASK_GRAPPLE(0, Global_35, 0, 1, 3f, 1, 0);
						}
						uParam0->f_130 = 1;
						__LIB_0__::func_325(&(uParam0->f_607[0]));
						uParam0->f_929 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uParam0->f_604[0]);
					}
					TASK::CLOSE_SEQUENCE_TASK(uParam0->f_611);
					TASK::TASK_PERFORM_SEQUENCE(uParam0->f_604[0], uParam0->f_611);
					TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_611));
					PED::SET_PED_KEEP_TASK(uParam0->f_604[0], true);
					func_1257(uParam0);
				}
			}
			PED::SET_PED_CONFIG_FLAG(uParam0->f_604[0], 321, true);
			uParam0->f_984 = 8;
			break;
		case 8:
			if (uParam0->f_996.f_46 == 1)
			{
				if (func_1281(&(uParam0->f_969), 10f) && !__LIB_0__::func_71(uParam0->f_604[0]))
				{
					__LIB_4__::func_7(uParam0->f_604[0], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					TASK::TASK_COMBAT_PED(uParam0->f_604[0], Global_35, 0, 0);
					uParam0->f_929 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uParam0->f_604[0]);
				}
			}
			if (func_1281(&(uParam0->f_966), 0.5f))
			{
				__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "AGGRO"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			if (__LIB_2__::func_1(uParam0->f_604[0], 0, 1))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_604[0], func_288(14), func_289(14), 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uParam0->f_604[0], func_288(14), func_289(14)) > 0.95f)
				{
					PED::_0x935CF6E42BAF7F4D(uParam0->f_604[0]);
					if (uParam0->f_910 == 0)
					{
						if (((uParam0->f_995 == 1 || uParam0->f_995 == 6) || uParam0->f_995 == 7) || uParam0->f_995 == 12)
						{
							__LIB_2__::func_122(uParam0->f_604[0], "HAND_OVER_MONEY", 1808677283, Global_35, 1, &(uParam0->f_3[0 /*32*/].f_23), 1, 1);
							uParam0->f_910 = 1;
						}
					}
				}
			}
			else if (!__LIB_0__::func_27(uParam0->f_628, 32))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_68[1 /*12*/].f_8))
				{
					MISC::_0x7FA58CED69405F9A(uParam0->f_68[1 /*12*/].f_8, 3);
					MISC::_0x7FA58CED69405F9A(uParam0->f_604[0], 0);
				}
				__LIB_1__::func_683(&(uParam0->f_628), 32);
			}
			if (__LIB_2__::func_1(uParam0->f_604[0], 0, 1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_604[0], Global_35, 1, 1) && (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_604[0], func_288(14), func_289(14), 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_604[0], func_288(9), func_289(9), 1)))
				{
					PED::_0x935CF6E42BAF7F4D(uParam0->f_604[0]);
					TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_611));
					if (__LIB_2__::func_1(uParam0->f_604[1], 0, 1))
					{
						TASK::TASK_MOUNT_ANIMAL(0, uParam0->f_604[1], -1, -1, 2f, 64, 0, 0);
					}
					TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
					__LIB_3__::func_969(&(uParam0->f_613), 1);
					__LIB_1__::func_474(uParam0->f_604[0], &(uParam0->f_611), 0, 0, 1, 1);
					PED::SET_PED_KEEP_TASK(uParam0->f_604[0], true);
					func_1257(uParam0);
					PED::SET_PED_KEEP_TASK(uParam0->f_604[0], true);
					__LIB_1__::func_683(&(uParam0->f_628), 16384);
				}
				if (__LIB_2__::func_1(uParam0->f_604[1], 0, 1))
				{
					if (PED::IS_PED_ON_MOUNT(uParam0->f_604[0]))
					{
						if (PED::_IS_PED_LASSOED(uParam0->f_604[1]))
						{
							PED::_0xAE6004120C18DF97(uParam0->f_604[1], 0, 0);
						}
					}
				}
			}
			if (uParam0->f_900 == 0)
			{
				if ((PED::_IS_PED_LASSOED(uParam0->f_604[0]) && !__LIB_0__::func_27(uParam0->f_627, 65536)) && func_1253(-5f, 1, 0, 0))
				{
					AUDIO::STOP_PED_SPEAKING(uParam0->f_604[0], true);
					__LIB_1__::func_683(&(uParam0->f_627), 65536);
					__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "HOGTIE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_1300(uParam0);
				}
				if (PED::_IS_PED_HOGTIED(uParam0->f_604[0]))
				{
					AUDIO::STOP_PED_SPEAKING(uParam0->f_604[0], true);
					if (!__LIB_0__::func_27(uParam0->f_627, 65536))
					{
						__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "HOGTIE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_683(&(uParam0->f_627), 65536);
					}
					uParam0->f_900 = 1;
					__LIB_4__::func_89(&(uParam0->f_942), 0);
					func_1300(uParam0);
				}
			}
			if ((uParam0->f_900 == 1 && __LIB_2__::func_1(uParam0->f_604[0], 0, 0)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_604[0]))
			{
				if (PED::_IS_PED_HOGTIED(uParam0->f_604[0]) || PED::_IS_PED_LASSOED(uParam0->f_604[0]))
				{
					if (!__LIB_0__::func_27(uParam0->f_628, 512))
					{
						if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_01"), 1, 0))
						{
							__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "UNTIE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							__LIB_1__::func_683(&(uParam0->f_628), 512);
							__LIB_1__::func_585(&(uParam0->f_942), -1f);
						}
					}
				}
				if (!PED::_IS_PED_HOGTIED(uParam0->f_604[0]) && !PED::_IS_PED_LASSOED(uParam0->f_604[0]))
				{
					if (!__LIB_0__::func_27(uParam0->f_628, 2048))
					{
						__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "AGGRO_FLEE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_683(&(uParam0->f_628), 2048);
					}
				}
				switch (uParam0->f_635)
				{
					case 0:
						if ((__LIB_2__::func_1(uParam0->f_604[0], 0, 0) && (PED::_IS_PED_HOGTIED(uParam0->f_604[0]) || PED::_IS_PED_LASSOED(uParam0->f_604[0]))) && func_1281(&(uParam0->f_942), 6f))
						{
							__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "HOGTIE_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							uParam0->f_635++;
							__LIB_2__::func_259(&(uParam0->f_942));
						}
						break;
					case 1:
						if ((__LIB_2__::func_1(uParam0->f_604[0], 0, 0) && (PED::_IS_PED_HOGTIED(uParam0->f_604[0]) || PED::_IS_PED_LASSOED(uParam0->f_604[0]))) && func_1281(&(uParam0->f_942), 8f))
						{
							__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "UNTIE_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							uParam0->f_635++;
							__LIB_2__::func_259(&(uParam0->f_942));
						}
						break;
					case 2:
						if ((__LIB_2__::func_1(uParam0->f_604[0], 0, 0) && (PED::_IS_PED_HOGTIED(uParam0->f_604[0]) || PED::_IS_PED_LASSOED(uParam0->f_604[0]))) && func_1281(&(uParam0->f_942), 6f))
						{
							__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "UNTIE_C"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							uParam0->f_635++;
							__LIB_2__::func_259(&(uParam0->f_942));
						}
						break;
					case 3:
						if ((__LIB_2__::func_1(uParam0->f_604[0], 0, 0) && (PED::_IS_PED_HOGTIED(uParam0->f_604[0]) || PED::_IS_PED_LASSOED(uParam0->f_604[0]))) && func_1281(&(uParam0->f_942), 8f))
						{
							__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "HOGTIE_D"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							uParam0->f_635++;
						}
						break;
					case 4:
						AUDIO::STOP_PED_SPEAKING(uParam0->f_604[0], false);
						uParam0->f_635++;
						break;
					case 5:
						break;
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], -2002118997))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_68[1 /*12*/].f_8))
				{
					__LIB_2__::func_919(uParam0->f_68[1 /*12*/].f_8, 1, 1);
					PHYSICS::ACTIVATE_PHYSICS(uParam0->f_68[1 /*12*/].f_8);
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_68[0 /*12*/].f_8))
				{
					__LIB_2__::func_919(uParam0->f_68[0 /*12*/].f_8, 1, 1);
					PHYSICS::ACTIVATE_PHYSICS(uParam0->f_68[0 /*12*/].f_8);
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_68[1 /*12*/].f_8))
				{
					TASK::_0x78B4567E18B54480(uParam0->f_68[1 /*12*/].f_8);
					MISC::_0x7FA58CED69405F9A(uParam0->f_68[1 /*12*/].f_8, 3);
					uParam0->f_930 = __LIB_1__::func_863(uParam0->f_68[1 /*12*/].f_8, -89429847, 1, 1);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_930, "RETH_TREASURE_MAP_NAME");
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_68[1 /*12*/].f_8, false);
					PHYSICS::ACTIVATE_PHYSICS(uParam0->f_68[1 /*12*/].f_8);
					ENTITY::APPLY_FORCE_TO_ENTITY(uParam0->f_68[1 /*12*/].f_8, 1, 0f, 1f, 1f, 0f, 0f, 0f, 0, true, true, true, false, true);
				}
				uParam0->f_901 = 0;
				if (MAP::DOES_BLIP_EXIST(uParam0->f_607[0]))
				{
					MAP::REMOVE_BLIP(&(uParam0->f_607[0]));
				}
				func_1301(uParam0);
				__LIB_1__::func_683(&(uParam0->f_627), 1048576);
			}
			if (((__LIB_2__::func_1(uParam0->f_604[0], 0, 1) && __LIB_2__::func_1(uParam0->f_604[1], 0, 1)) && PED::IS_PED_ON_MOUNT(uParam0->f_604[0])) && !__LIB_0__::func_27(uParam0->f_627, 4194304))
			{
				if (uParam0->f_996.f_46 == 1)
				{
					if (uParam0->f_130 == 0)
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(uParam0->f_604[0], Global_35, 4, 128, -1082130432 /* Float: -1f */, -1, 0);
						TASK::_TASK_SMART_FLEE_STYLE_PED(uParam0->f_604[1], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
						PED::SET_PED_KEEP_TASK(uParam0->f_604[0], true);
						PED::SET_PED_KEEP_TASK(uParam0->f_604[1], true);
					}
				}
				else
				{
					if (uParam0->f_595 == 1)
					{
						TASK::_TASK_MOVE_IN_TRAFFIC_3(uParam0->f_604[0], Global_35, -1082130432 /* Float: -1f */, 0, 0);
						__LIB_4__::func_89(&(uParam0->f_951), 0);
					}
					else if (uParam0->f_595 == 0)
					{
						TASK::_TASK_MOVE_IN_TRAFFIC_3(uParam0->f_604[0], Global_35, 1.25f, 0, 0);
						__LIB_4__::func_89(&(uParam0->f_951), 0);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_604[0], false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_604[1], false);
				}
				__LIB_1__::func_683(&(uParam0->f_627), 4194304);
				if ((uParam0->f_595 == 1 && uParam0->f_996.f_46 == 1) && !__LIB_0__::func_27(uParam0->f_627, 1073741824 /* Float: 2f */))
				{
					__LIB_4__::func_89(&(uParam0->f_939), 0);
				}
				PED::SET_PED_KEEP_TASK(uParam0->f_604[0], true);
				PED::SET_PED_KEEP_TASK(uParam0->f_604[1], true);
			}
			else if (__LIB_9__::func_178(&(uParam0->f_951)) > 2f)
			{
				TASK::_TASK_MOVE_IN_TRAFFIC(uParam0->f_604[0], 1.25f, 0, 0);
				__LIB_1__::func_561(&(uParam0->f_951));
				__LIB_1__::func_683(&(uParam0->f_628), 16384);
			}
			if (func_1281(&(uParam0->f_939), 3f))
			{
				if (__LIB_2__::func_1(uParam0->f_604[1], 0, 1) && uParam0->f_907 == 0)
				{
					if (!PED::_IS_PED_HOGTIED(uParam0->f_604[0]) && !PED::_IS_PED_LASSOED(uParam0->f_604[0]))
					{
						if (!__LIB_0__::func_27(uParam0->f_628, 2048))
						{
							uParam0->f_557.f_3 = uParam0->f_604[1];
							__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "AGGRO_FLEE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							__LIB_1__::func_683(&(uParam0->f_628), 2048);
							__LIB_1__::func_683(&(uParam0->f_628), 16384);
						}
					}
					uParam0->f_907 = 1;
				}
			}
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_01"), 1, 0))
			{
				if (!__LIB_2__::func_1(uParam0->f_604[0], 0, 1) || __LIB_0__::func_665(Global_35, uParam0->f_604[0], 1, 1) > 65f)
				{
					if ((__LIB_2__::func_1(uParam0->f_604[0], 0, 0) && PED::_IS_PED_HOGTIED(uParam0->f_604[0])) && uParam0->f_635 < 4)
					{
					}
					else
					{
						if (!__LIB_0__::func_899(&(uParam0->f_975)))
						{
							__LIB_4__::func_89(&(uParam0->f_975), 0);
						}
						fVar7 = __LIB_9__::func_178(&(uParam0->f_975));
						if (fVar7 >= 3f)
						{
							__LIB_1__::func_683(&(uParam0->f_628), 16384);
							return true;
						}
					}
				}
			}
			else if (__LIB_0__::func_27(uParam0->f_627, 1048576))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_68[1 /*12*/].f_8))
				{
					if (uParam0->f_638 >= 30)
					{
						vVar8 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_68[1 /*12*/].f_8, true, false) };
						TASK::_SET_SCENARIO_POINT_COORDS(uParam0->f_612, vVar8, true);
						uParam0->f_638 = 0;
					}
					else
					{
						uParam0->f_638++;
					}
					fVar11 = __LIB_0__::func_665(Global_35, uParam0->f_68[1 /*12*/].f_8, 1, 1);
					if (fVar11 > 50f)
					{
						func_1302(uParam0);
						__LIB_1__::func_683(&(uParam0->f_628), 16384);
						return true;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_68[1 /*12*/].f_8))
			{
			}
			else
			{
				fVar12 = __LIB_0__::func_665(Global_35, uParam0->f_604[0], 1, 0);
				if (fVar12 > 65f)
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_604[0]))
					{
						if (!__LIB_0__::func_899(&(uParam0->f_972)))
						{
							__LIB_4__::func_89(&(uParam0->f_972), 0);
						}
						fVar13 = __LIB_9__::func_178(&(uParam0->f_972));
						if (fVar13 >= 10f)
						{
							iVar14 = 0;
							if (__LIB_2__::func_1(uParam0->f_604[1], 0, 1))
							{
								if (__LIB_0__::func_394(uParam0->f_604[0], uParam0->f_604[1], 0))
								{
									iVar14 = 1;
								}
							}
							__LIB_2__::func_426(&(uParam0->f_604[0]));
							if (iVar14 == 1)
							{
								__LIB_2__::func_426(&(uParam0->f_604[1]));
							}
							else if (__LIB_2__::func_1(uParam0->f_604[1], 0, 1))
							{
								__LIB_1__::func_683(&(uParam0->f_627), 4194304);
								TASK::_TASK_SMART_FLEE_STYLE_PED(uParam0->f_604[1], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
								PED::SET_PED_KEEP_TASK(uParam0->f_604[1], true);
							}
							__LIB_1__::func_683(&(uParam0->f_628), 16384);
							return true;
						}
					}
					else if (__LIB_0__::func_899(&(uParam0->f_972)))
					{
						__LIB_1__::func_561(&(uParam0->f_972));
					}
				}
				else if (fVar12 < 50f)
				{
					if (__LIB_0__::func_899(&(uParam0->f_972)))
					{
						__LIB_1__::func_561(&(uParam0->f_972));
					}
				}
			}
			break;
	}
	return false;
}

bool func_892()
{
	int iVar0;
	switch (Local_15.f_983)
	{
		case 0:
			Local_15.f_3[0 /*32*/].f_1 = joaat("CS_TREASUREHUNTER");
			Local_15.f_3[1 /*32*/].f_1 = joaat("A_C_HORSE_NOKOTA_BLUEROAN");
			Local_15.f_3[1 /*32*/] = 4;
			__LIB_14__::func_175(&(Local_15.f_3[0 /*32*/].f_22));
			__LIB_3__::func_284(&(Local_15.f_3));
			func_1392(&Local_15);
			func_1393(&Local_15);
			func_1394(&Local_15);
			if (TXD::_DOES_STREAMED_TXD_EXIST(MISC::GET_HASH_KEY("TREASURE_MAP_C1_M1")))
			{
				TXD::_REQUEST_STREAMED_TXD(MISC::GET_HASH_KEY("TREASURE_MAP_C1_M1"), false);
			}
			Local_15.f_995 = 9;
			Local_15.f_596.f_4 = "scenario@randomEvent@TREASURE_HUNTER@HANDOVER";
			Local_15.f_596.f_5 = "script@beat@wilderness@treasureHunter@leadin@int@leadin";
			Local_15.f_983 = 1;
			break;
		case 1:
			if (!__LIB_3__::func_315(&(Local_15.f_132)))
			{
				return false;
			}
			if (!__LIB_3__::func_316(&(Local_15.f_68)))
			{
				return false;
			}
			iVar0 = 0;
			while (iVar0 < Local_15.f_1)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_15.f_3[iVar0 /*32*/].f_1))
				{
					return false;
				}
				iVar0++;
			}
			return true;
	}
	return false;
}

void func_962(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	if (Global_1935630.f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_0__::func_145(0, 0);
		__LIB_0__::func_146(-1);
	}
	__LIB_0__::func_87(1);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	if (!__LIB_0__::func_1(*uParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!__LIB_0__::func_1(*uParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!__LIB_0__::func_1(*uParam0, 128))
	{
		iParam1 |= 32;
	}
	if (__LIB_0__::func_1(*uParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!__LIB_0__::func_1(*uParam0, 32768))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam1, true);
	}
	if (!__LIB_0__::func_1(*uParam0, 1))
	{
		PAD::_0xF239400E16C23E08(0, 0);
	}
	if (!__LIB_0__::func_1(*uParam0, 65536))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	}
	if (!__LIB_0__::func_1(*uParam0, 4) && !__LIB_0__::func_1(*uParam0, 2))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_0__::func_1(*uParam0, 2048))
	{
		__LIB_0__::func_713(0, 0);
	}
	if (__LIB_0__::func_1(*uParam0, 8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (__LIB_0__::func_1(*uParam0, 256))
	{
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
	}
	if (__LIB_0__::func_1(*uParam0, 8192))
	{
		func_1436();
	}
	if (!__LIB_0__::func_1(*uParam0, 262144))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	}
	if (!__LIB_0__::func_1(*uParam0, 512))
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (!__LIB_0__::func_1(*uParam0, 1024))
	{
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	}
	if (iParam2 != 2)
	{
		PED::SET_PED_STEALTH_MOVEMENT(Global_35, iParam2 == 1, 0, 0);
	}
	if (PED::IS_PED_ON_FOOT(Global_35))
	{
		if (bParam6)
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35, 0f);
			PED::SET_PED_DESIRED_HEADING(Global_35, ENTITY::GET_ENTITY_HEADING(Global_35));
			ENTITY::SET_ENTITY_VELOCITY(Global_35, 0f, 0f, 0f);
		}
		if (!__LIB_0__::func_1(*uParam0, 16))
		{
			iVar0 = ITEMSET::CREATE_ITEMSET(true);
			bVar1 = false;
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar0);
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
			{
				iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
				iVar7 = MISC::_GET_ENTITY_FROM_ITEM(iVar6);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
				}
				else
				{
					bVar8 = false;
					if (ENTITY::IS_ENTITY_AN_OBJECT(iVar7))
					{
						if (__LIB_0__::func_147() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = uParam3;
					vVar3.f_1 = uParam4;
					vVar3.f_2 = uParam5;
					if (__LIB_0__::func_86(vVar3))
					{
						vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						__LIB_0__::func_634(&vVar3, 50, 10, 0);
					}
					PED::_0xED00D72F81CF7278(iVar7, 0, 1);
					ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						__LIB_0__::func_148(2);
						__LIB_0__::func_149(-1);
						__LIB_0__::func_150(vVar3);
						__LIB_9__::func_23(__LIB_0__::func_23());
					}
					bVar1 = true;
				}
				iVar2++;
			}
			if (bVar1)
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
					PED::_0x2208438012482A1A(Global_35, false, false);
				}
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
		}
	}
	if (bParam6 && PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar9 = PED::GET_MOUNT(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar9))
		{
			TASK::CLEAR_PED_TASKS(iVar9, true, false);
			TASK::TASK_STAND_STILL(iVar9, -1);
		}
	}
	if (!__LIB_0__::func_1(*uParam0, 4096))
	{
		__LIB_0__::func_142(Global_35);
	}
	if (!__LIB_0__::func_1(*uParam0, 1048576))
	{
		UIFEED::_0xDD1232B332CBB9E7(7, 1, 0);
	}
	if (!__LIB_0__::func_1(*uParam0, 2097152))
	{
		if (__LIB_0__::func_704() || PED::_0x50F124E6EF188B22(Global_35))
		{
			__LIB_1__::func_716(1);
		}
	}
	if (Global_1359489.f_16 & 4194304 == 0)
	{
		Global_1359489.f_16 |= 4194304;
	}
	*uParam0 = 0;
}

void func_964(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_84(uParam0, 2048) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0)))
	{
		bVar0 = VOLUME::_DOES_VOLUME_EXIST(uParam0->f_4);
		iVar1 = PED::_GET_LAST_MOUNT(Global_35);
		if ((!ENTITY::IS_ENTITY_DEAD(iVar1) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar1, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && PED::GET_MOUNT(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (TASK::IS_PED_IN_WRITHE(iVar1))
			{
				iVar2 |= 32;
			}
			func_535(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_535(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_965(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_535(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_1158()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1631(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), false);
			__LIB_1__::func_851();
		}
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	__LIB_1__::func_116();
	if (MISSIONDATA::MISSIONDATA_GET_RATING(joaat("NBD1")) >= 2)
	{
		if (MISSIONDATA::MISSIONDATA_GET_RATING(joaat("CABR01")) < 2)
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 2);
		}
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED")))
	{
		return;
	}
	func_1631(1);
}

void func_1159()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_664(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1160()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1634(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_REDEEMED")))
	{
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), true);
	func_1634(1);
}

void func_1161()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1634(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL_REDEEMED")))
	{
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), true);
	__LIB_1__::func_616(15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
	func_1634(1);
}

void func_1162()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_664(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!__LIB_0__::func_458(1))
			{
				__LIB_0__::func_368(1);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_664(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!__LIB_0__::func_458(2))
			{
				__LIB_0__::func_368(2);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_15")) > 0 && !__LIB_0__::func_458(4))
		{
			__LIB_0__::func_368(4);
		}
		if (__LIB_0__::func_458(0))
		{
			__LIB_0__::func_459(0);
		}
	}
	else
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0))
			{
				func_1165(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1165(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
			}
		}
		if (__LIB_0__::func_458(1))
		{
			__LIB_0__::func_459(1);
		}
		if (__LIB_0__::func_458(2))
		{
			__LIB_0__::func_459(2);
		}
		if (__LIB_0__::func_458(4))
		{
			__LIB_0__::func_459(4);
		}
		if (!__LIB_0__::func_458(0))
		{
			__LIB_0__::func_368(0);
		}
	}
}

int func_1165(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = __LIB_0__::func_937(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			__LIB_1__::func_158(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!__LIB_1__::func_707(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((__LIB_1__::func_614(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((__LIB_1__::func_614(iParam0, 0, 0) - iParam1) < 0)
		{
			func_1165(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (__LIB_0__::func_356(iParam0) == joaat("WEAPON"))
	{
		if (!__LIB_1__::func_433(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!__LIB_1__::func_698(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!__LIB_0__::func_708(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		__LIB_1__::func_158(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	__LIB_12__::func_934(iParam0, iParam1);
	return 1;
}

int func_1199(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<5> Var5;
	int iVar10;
	int iVar11;
	if (__LIB_0__::func_2() != -1)
	{
		return 0;
	}
	if (Global_1956575 != 2)
	{
		return 0;
	}
	iVar0 = uParam0->f_5;
	iVar1 = uParam0->f_5.f_1;
	iVar2 = uParam0->f_5.f_3;
	if (!__LIB_0__::func_144(iVar0, 0))
	{
		return 0;
	}
	if (!__LIB_1__::func_63(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	__LIB_0__::func_794(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (__LIB_0__::func_192(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { __LIB_1__::func_615(iVar0, 0, 1) };
	iVar10 = __LIB_1__::func_119(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar10) / BUILTIN::TO_FLOAT(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_584(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_664(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

bool func_1253(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!__LIB_2__::func_136(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_1710(fParam0))
	{
		return false;
	}
	return true;
}

char* func_1254(var uParam0, char* sParam1)
{
	int iVar0;
	switch (uParam0->f_595)
	{
		case 0:
			iVar0 = 1;
			break;
		case 1:
			iVar0 = 2;
			break;
	}
	return __LIB_3__::func_394("TH", "PLN", sParam1, iVar0);
}

void func_1257(var uParam0)
{
	if (__LIB_2__::func_1(uParam0->f_604[1], 0, 1))
	{
		PED::_0xA3A9299C4F2ADB98(uParam0->f_604[1]);
		TASK::TASK_STAND_STILL(uParam0->f_604[1], 1000);
	}
}

void func_1265(var uParam0)
{
	if (uParam0->f_908 == 1)
	{
		if (uParam0->f_909 == 0)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_604[0]))
			{
				PED::SET_PED_CONFIG_FLAG(uParam0->f_604[0], 321, true);
				__LIB_0__::func_325(&(uParam0->f_607[0]));
				__LIB_3__::func_157(&(uParam0->f_843[0 /*17*/]), "RE_INTER_POS", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
				__LIB_3__::func_157(&(uParam0->f_843[1 /*17*/]), "RE_INTER_ANTAGONIZE", 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
				if (!__LIB_0__::func_27(uParam0->f_627, 268435456))
				{
					__LIB_3__::func_157(&(uParam0->f_843[2 /*17*/]), __LIB_2__::func_460(12), 0, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 0, 0);
				}
				__LIB_12__::func_953(&(uParam0->f_781[0 /*61*/]), 0);
				if (uParam0->f_917 == 1)
				{
					__LIB_2__::func_411(&(uParam0->f_843[0 /*17*/]), 1, 0);
					__LIB_2__::func_411(&(uParam0->f_843[1 /*17*/]), 1, 0);
				}
				else
				{
					__LIB_2__::func_411(&(uParam0->f_843[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(uParam0->f_843[1 /*17*/]), 0, 0);
				}
				if (!__LIB_0__::func_27(uParam0->f_627, 268435456))
				{
					__LIB_2__::func_411(&(uParam0->f_843[2 /*17*/]), 1, 0);
				}
				else
				{
					__LIB_2__::func_411(&(uParam0->f_843[2 /*17*/]), 0, 0);
				}
			}
			uParam0->f_909 = 1;
			return;
		}
	}
	if ((uParam0->f_984 == 1 || uParam0->f_984 == 9) || uParam0->f_984 == 2)
	{
		if (uParam0->f_918 == 0)
		{
			func_1716(uParam0);
		}
		func_1717(uParam0);
	}
	else if ((((uParam0->f_984 == 11 || uParam0->f_984 == 12) || uParam0->f_984 == 13) || uParam0->f_984 == 14) || uParam0->f_984 == 15)
	{
		func_1718(uParam0);
		func_1719(uParam0);
	}
	else
	{
		func_1719(uParam0);
	}
}

bool func_1266(var uParam0, char* sParam1)
{
	int iVar0;
	iVar0 = 1;
	if (STREAMING::HAS_MODEL_LOADED(uParam0->f_68[1 /*12*/].f_7))
	{
		if (TXD::_DOES_STREAMED_TXD_EXIST(MISC::GET_HASH_KEY(sParam1)))
		{
			if (TXD::_HAS_STREAMED_TXD_LOADED(MISC::GET_HASH_KEY(sParam1)))
			{
				OBJECT::_SET_APPLY_OBJECT_TXD(uParam0->f_68[1 /*12*/].f_8, MISC::GET_HASH_KEY(sParam1), 0, 0);
			}
			else
			{
				TXD::_REQUEST_STREAMED_TXD(MISC::GET_HASH_KEY(sParam1), false);
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
			TXD::_REQUEST_STREAMED_TXD(MISC::GET_HASH_KEY(sParam1), false);
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_1268(var uParam0)
{
	switch (uParam0->f_594)
	{
		case 0:
			PED::_0x8B3B71C80A29A4BB(uParam0->f_604[0], joaat("MOODINTIMIDATED"), 6);
			break;
		case 1:
			PED::_0x8B3B71C80A29A4BB(uParam0->f_604[0], joaat("MOODHAPPY"), 6);
			break;
		case 2:
			PED::_0x8B3B71C80A29A4BB(uParam0->f_604[0], joaat("MOODNORMAL"), 6);
			break;
	}
}

void func_1269(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	var uVar25;
	if (!__LIB_0__::func_27(uParam0->f_627, 4))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], -494058147))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_68[0 /*12*/].f_8))
			{
				OBJECT::DELETE_OBJECT(&(uParam0->f_68[0 /*12*/].f_8));
			}
			__LIB_1__::func_683(&(uParam0->f_627), 4);
		}
	}
	if (!__LIB_0__::func_27(uParam0->f_627, 8))
	{
		if ((ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2076049331) || ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], 2076049331)) || (((__LIB_0__::func_27(uParam0->f_628, 1024) && __LIB_2__::func_1(uParam0->f_604[0], 0, 1)) && __LIB_0__::func_163(uParam0->f_604[0], 242628503)) && __LIB_3__::func_990(uParam0->f_604[0]) >= 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_68[1 /*12*/].f_8))
			{
				MISC::_0xA08111B053D84B4D(uParam0->f_68[1 /*12*/].f_8);
				OBJECT::DELETE_OBJECT(&(uParam0->f_68[1 /*12*/].f_8));
			}
			if (uParam0->f_595 == 1 && __LIB_0__::func_27(uParam0->f_627, 268435456))
			{
				iVar0 = func_1721(uParam0);
				func_664(iVar0, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (__LIB_0__::func_181())
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_TREASURE1A_JN"), 0);
				}
				else
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_TREASURE1A_AR"), 0);
				}
			}
			else
			{
				iVar1 = func_1721(uParam0);
				__LIB_3__::func_937(uParam0->f_604[0]);
				PED::_0x6569F31A01B4C097(uParam0->f_604[0], 4, 1);
				Var2.f_1 = 10;
				Var2.f_12 = 10;
				Var2.f_1[0] = iVar1;
				Var2.f_12[0] = 1;
				Var2.f_1[1] = joaat("CONSUMABLE_HAIR_GREASE");
				Var2.f_12[1] = 1;
				Var2 = 2;
				uVar25 = ENTITY::_0xA88E215CEB0435C0(uParam0->f_604[0], &Var2, 946878164, 0, 3, 0);
			}
			__LIB_1__::func_683(&(uParam0->f_627), 8);
			if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_612))
			{
				TASK::_DELETE_SCENARIO_POINT(uParam0->f_612);
			}
			uParam0->f_612 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(uParam0->f_604[0], joaat("WB_TREASURE_HUNTER"), 0f, 0f, 0f, 0, 0f, 0, 0);
		}
	}
}

void func_1270(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_665(Global_35, uParam0->f_604[0], 1, 1) > 21f)
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], -608128506))
	{
		if (uParam0->f_906 == 0)
		{
			__LIB_3__::func_593(0);
		}
		switch (__LIB_3__::func_168(uParam0->f_995))
		{
			case 1:
			case 3:
				if (uParam0->f_595 == 1)
				{
					if (uParam0->f_637 == 2)
					{
						__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "ROB_RESP_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "AGGRO_DROP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				else
				{
					__LIB_3__::func_600(uParam0->f_604[0], Global_35, "HAND_OVER_MONEY", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				break;
			case 2:
				__LIB_3__::func_600(uParam0->f_604[0], Global_35, "RT_INTIMIDATED_AGAIN_ROB_SUPPLY", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				break;
			case 0:
				__LIB_3__::func_600(uParam0->f_604[0], Global_35, "GUN_AVOID", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				break;
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], 870727378) || ((((((uParam0->f_907 == 0 && (uParam0->f_906 == 1 || uParam0->f_996.f_46 == 1)) && __LIB_0__::func_27(uParam0->f_627, 4194304)) && uParam0->f_130 == 0) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_604[0], Global_35, 1, 1)) && !__LIB_2__::func_875(Global_35, uParam0->f_604[0], &(uParam0->f_996.f_5))) && func_1253(3f, 1, 0, 0)))
	{
		__LIB_3__::func_593(0);
		switch (__LIB_3__::func_168(uParam0->f_995))
		{
			case 1:
			case 3:
				if (uParam0->f_595 == 1)
				{
					if (!PED::_IS_PED_HOGTIED(uParam0->f_604[0]) && !PED::_IS_PED_LASSOED(uParam0->f_604[0]))
					{
						if (!__LIB_0__::func_27(uParam0->f_628, 2048))
						{
							__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "AGGRO_FLEE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							__LIB_1__::func_683(&(uParam0->f_628), 2048);
						}
					}
				}
				else
				{
					__LIB_3__::func_600(uParam0->f_604[0], Global_35, "VICTIMIZED_REACT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				break;
			case 2:
				__LIB_2__::func_122(uParam0->f_604[0], "VICTIMIZED_REACT", 1744022339, Global_35, 1, &(uParam0->f_3[0 /*32*/].f_23), 1, 1);
				break;
			case 0:
				__LIB_2__::func_122(uParam0->f_604[0], "VICTIMIZED_REACT", 1744022339, Global_35, 1, &(uParam0->f_3[0 /*32*/].f_23), 1, 1);
				break;
		}
		uParam0->f_907 = 1;
	}
	if (uParam0->f_996.f_46 == 1)
	{
		return;
	}
	if (!__LIB_0__::func_27(uParam0->f_627, 1))
	{
		if ((__LIB_2__::func_118(uParam0->f_604[0], 1, 1) < 40f && uParam0->f_921 == 0) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_604[0]))
		{
			__LIB_3__::func_593(0);
			__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "IDLE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			uParam0->f_905 = 0;
			__LIB_2__::func_315(1891783641, uParam0->f_604[0], 1);
			__LIB_4__::func_89(&(uParam0->f_963), 0);
			__LIB_1__::func_683(&(uParam0->f_627), 1);
		}
	}
	if (__LIB_0__::func_27(uParam0->f_627, 1) && !__LIB_0__::func_27(uParam0->f_627, 2))
	{
		if ((((uParam0->f_918 == 0 && __LIB_9__::func_178(&(uParam0->f_963)) > 12f) && !__LIB_0__::func_27(uParam0->f_627, 32)) && uParam0->f_921 == 0) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_604[0]))
		{
			if (__LIB_2__::func_118(uParam0->f_604[0], 1, 1) < 40f)
			{
				__LIB_3__::func_593(0);
				__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "IDLE_ALT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_2__::func_315(1891783641, uParam0->f_604[0], 1);
				__LIB_1__::func_683(&(uParam0->f_627), 2);
			}
		}
	}
	if (!__LIB_0__::func_27(uParam0->f_627, 32))
	{
		switch (__LIB_3__::func_168(__LIB_1__::func_898()))
		{
			case 1:
				if (__LIB_1__::func_149(1) > 0)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], 2002981362))
					{
						__LIB_3__::func_593(0);
						__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "SPOOK_POSSE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_683(&(uParam0->f_627), 32);
					}
				}
				else if (__LIB_2__::func_140(0))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], -1921816715))
					{
						__LIB_3__::func_593(0);
						__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "SPOOK_SICK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_683(&(uParam0->f_627), 32);
					}
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], joaat("RE_TH_PLN_V1_SPOOK")) || ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], -456091174))
				{
					__LIB_3__::func_593(0);
					if (__LIB_0__::func_665(Global_35, uParam0->f_604[0], 1, 1) > 5f)
					{
						__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "SPOOK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "CLOSE_CALLOUT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					__LIB_1__::func_683(&(uParam0->f_627), 32);
				}
				break;
			case 2:
				if (__LIB_1__::func_149(1) > 0)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], 1667025931))
					{
						__LIB_3__::func_593(0);
						__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "SPOOK_POSSE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_683(&(uParam0->f_627), 32);
					}
				}
				else if (__LIB_2__::func_140(0))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], -1272900136))
					{
						__LIB_3__::func_593(0);
						__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "SPOOK_SICK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_683(&(uParam0->f_627), 32);
					}
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], joaat("RE_TH_FTH_V1_SPOOK")) || ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], -456091174))
				{
					__LIB_3__::func_593(0);
					if (__LIB_0__::func_665(Global_35, uParam0->f_604[0], 1, 1) > 5f)
					{
						__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "SPOOK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "CLOSE_CALLOUT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					__LIB_1__::func_683(&(uParam0->f_627), 32);
				}
				break;
			case 0:
				if (__LIB_1__::func_149(1) > 0)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], 312344926))
					{
						__LIB_3__::func_593(0);
						__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "SPOOK_POSSE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_683(&(uParam0->f_627), 32);
					}
				}
				else if (__LIB_2__::func_140(0))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], 445962106))
					{
						__LIB_3__::func_593(0);
						__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "SPOOK_SICK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_683(&(uParam0->f_627), 32);
					}
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], joaat("RE_TH_MTN_V1_SPOOK")) || ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], -456091174))
				{
					__LIB_3__::func_593(0);
					if (__LIB_0__::func_665(Global_35, uParam0->f_604[0], 1, 1) > 5f)
					{
						__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "SPOOK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "CLOSE_CALLOUT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					__LIB_1__::func_683(&(uParam0->f_627), 32);
				}
				break;
		}
		if (__LIB_0__::func_27(uParam0->f_627, 32))
		{
			__LIB_0__::func_325(&(uParam0->f_607[0]));
			__LIB_2__::func_73(uParam0->f_604[0], &(uParam0->f_607[0]), -89429847, 1679075994, 0, "RE_INTER_STRANGER");
			if (uParam0->f_595 == 1)
			{
				uParam0->f_594 = 1;
			}
			else
			{
				uParam0->f_594 = 0;
			}
		}
	}
	if (!__LIB_0__::func_27(uParam0->f_627, 64))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], -2064027050))
		{
			__LIB_1__::func_683(&(uParam0->f_627), 64);
		}
	}
	if (!__LIB_0__::func_27(uParam0->f_627, 128))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], -433389249))
		{
			__LIB_3__::func_593(0);
			__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "EXTRA_COIN_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&(uParam0->f_627), 128);
		}
	}
	if (!__LIB_0__::func_27(uParam0->f_627, 256))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], 73153953))
		{
			__LIB_3__::func_593(0);
			__LIB_3__::func_600(Global_35, uParam0->f_604[0], func_1254(uParam0, "EXTRA_COIN_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&(uParam0->f_627), 256);
		}
	}
	if (!__LIB_0__::func_27(uParam0->f_627, 512))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], 1935510083))
		{
			__LIB_3__::func_593(0);
			__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "EXTRA_COIN_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&(uParam0->f_627), 512);
			__LIB_4__::func_89(&(uParam0->f_957), 0);
		}
	}
	if (!__LIB_0__::func_27(uParam0->f_627, 1024))
	{
		if (func_1281(&(uParam0->f_957), 2f))
		{
			func_1728(uParam0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], -1982089409))
		{
			__LIB_3__::func_593(0);
			__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "OFFER_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&(uParam0->f_627), 1024);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], 1742469724))
	{
		__LIB_3__::func_593(0);
		__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "OFFER_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		__LIB_1__::func_683(&(uParam0->f_627), 2048);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], 2090116073))
	{
		__LIB_3__::func_593(0);
		__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "OFFER_C"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -565084385))
	{
		__LIB_3__::func_593(0);
		__LIB_3__::func_600(Global_35, uParam0->f_604[0], func_1254(uParam0, "NEG_RESP_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (!__LIB_0__::func_27(uParam0->f_627, 8192))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], -1466494037))
		{
			__LIB_3__::func_593(0);
			__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "NEG_RESP_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&(uParam0->f_627), 8192);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1387436088))
	{
		__LIB_3__::func_593(0);
		__LIB_3__::func_600(Global_35, uParam0->f_604[0], func_1254(uParam0, "POS_RESP_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		__LIB_1__::func_683(&(uParam0->f_627), 16384);
	}
	if (__LIB_0__::func_27(uParam0->f_627, 16384) && !__LIB_0__::func_27(uParam0->f_627, 32768))
	{
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_604[0]))
		{
			__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "POS_RESP_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&(uParam0->f_627), 32768);
		}
	}
	else if (__LIB_0__::func_27(uParam0->f_627, 262144) && !__LIB_0__::func_27(uParam0->f_627, 524288))
	{
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_604[0]))
		{
			__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "SECOND_POS_RESP_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&(uParam0->f_627), 524288);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1204544529))
	{
		__LIB_3__::func_593(0);
		__LIB_3__::func_600(Global_35, uParam0->f_604[0], func_1254(uParam0, "SECOND_NEG_RESP_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (!__LIB_0__::func_27(uParam0->f_627, 131072))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], -206423069))
		{
			__LIB_3__::func_593(0);
			if (__LIB_0__::func_27(uParam0->f_628, 4))
			{
				__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "APPROACH_TIME_OUT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "SECOND_NEG_RESP_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			__LIB_1__::func_683(&(uParam0->f_627), 131072);
			__LIB_1__::func_392(&(uParam0->f_996.f_5), 0);
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_596) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, uParam0->f_596))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1055269014))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_68[3 /*12*/].f_8))
			{
				uParam0->f_68[3 /*12*/].f_8 = OBJECT::CREATE_OBJECT(uParam0->f_68[3 /*12*/].f_7, PED::GET_PED_BONE_COORDS(Global_35, 37709, 0f, 0f, 0f), true, true, false, false, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_68[3 /*12*/].f_8))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_68[3 /*12*/].f_8, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 966477176))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_68[3 /*12*/].f_8))
			{
				if (!__LIB_0__::func_27(uParam0->f_627, 8192))
				{
					iVar0 = func_584(joaat("DOCUMENT_TREASURE_MAP_GENERIC"), -915411861, 1, 0, 0);
				}
				else
				{
					iVar0 = (func_584(joaat("DOCUMENT_TREASURE_MAP_GENERIC"), -915411861, 1, 0, 0) / 2);
				}
				__LIB_1__::func_432(iVar0, 0, 0, 1, 1);
				__LIB_2__::func_190(uParam0->f_604[0], iVar0 + 60);
				ENTITY::DETACH_ENTITY(uParam0->f_68[3 /*12*/].f_8, true, true);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_68[3 /*12*/].f_8, uParam0->f_604[0], PED::GET_PED_BONE_INDEX(uParam0->f_604[0], 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
				func_1294(uParam0);
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], joaat("OBJECTEXCHANGE")))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_68[1 /*12*/].f_8))
			{
				__LIB_1__::func_683(&(uParam0->f_627), 268435456);
				if (MAP::DOES_BLIP_EXIST(uParam0->f_607[0]))
				{
					MAP::REMOVE_BLIP(&(uParam0->f_607[0]));
				}
			}
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], -31477066))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_68[3 /*12*/].f_8))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_68[3 /*12*/].f_8));
		}
	}
}

void func_1271(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_68[1 /*12*/].f_8))
	{
		return;
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uParam0->f_68[1 /*12*/].f_8, uParam0->f_596))
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], -1743580267))
	{
		ENTITY::PLAY_ENTITY_ANIM(uParam0->f_68[1 /*12*/].f_8, func_289(15), func_288(15), 8f, false, true, false, 0f, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], 1860224226))
	{
		ENTITY::PLAY_ENTITY_ANIM(uParam0->f_68[1 /*12*/].f_8, func_289(19), func_288(19), 8f, false, true, false, 0f, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], -756613030))
	{
		ENTITY::PLAY_ENTITY_ANIM(uParam0->f_68[1 /*12*/].f_8, func_289(15), func_288(15), 8f, false, true, false, 0f, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], -2037828900))
	{
		ENTITY::PLAY_ENTITY_ANIM(uParam0->f_68[1 /*12*/].f_8, func_289(24), func_288(24), 8f, false, true, false, 0f, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], -640971207))
	{
		ENTITY::PLAY_ENTITY_ANIM(uParam0->f_68[1 /*12*/].f_8, func_289(28), func_288(28), 8f, false, true, false, 0f, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], 903075824))
	{
		ENTITY::PLAY_ENTITY_ANIM(uParam0->f_68[1 /*12*/].f_8, func_289(30), func_288(30), 8f, false, true, false, 0f, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], 1601816700))
	{
		ENTITY::PLAY_ENTITY_ANIM(uParam0->f_68[1 /*12*/].f_8, func_289(32), func_288(32), 8f, false, true, false, 0f, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], -496848045))
	{
		ENTITY::PLAY_ENTITY_ANIM(uParam0->f_68[1 /*12*/].f_8, func_289(34), func_288(34), 8f, false, true, false, 0f, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], 1264115803))
	{
		ENTITY::PLAY_ENTITY_ANIM(uParam0->f_68[1 /*12*/].f_8, func_289(36), func_288(36), 8f, false, true, false, 0f, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], 830377326))
	{
		ENTITY::PLAY_ENTITY_ANIM(uParam0->f_68[1 /*12*/].f_8, func_289(39), func_288(39), 8f, false, true, false, 0f, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], 999334290))
	{
		ENTITY::PLAY_ENTITY_ANIM(uParam0->f_68[1 /*12*/].f_8, func_289(41), func_288(41), 8f, false, true, false, 0f, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], 474522785))
	{
		ENTITY::PLAY_ENTITY_ANIM(uParam0->f_68[1 /*12*/].f_8, func_289(43), func_288(43), 8f, false, true, false, 0f, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], 405174787))
	{
		ENTITY::PLAY_ENTITY_ANIM(uParam0->f_68[1 /*12*/].f_8, func_289(46), func_288(46), 8f, false, true, false, 0f, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], -279164219))
	{
		ENTITY::PLAY_ENTITY_ANIM(uParam0->f_68[1 /*12*/].f_8, func_289(49), func_288(49), 8f, false, true, false, 0f, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], -2115061537))
	{
		ENTITY::PLAY_ENTITY_ANIM(uParam0->f_68[1 /*12*/].f_8, func_289(11), func_288(11), 8f, false, true, false, 0f, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], 1881183555))
	{
		ENTITY::PLAY_ENTITY_ANIM(uParam0->f_68[1 /*12*/].f_8, func_289(13), func_288(13), 8f, false, true, false, 0f, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_604[0], 1706002319))
	{
		ENTITY::PLAY_ENTITY_ANIM(uParam0->f_68[1 /*12*/].f_8, func_289(52), func_288(52), 8f, false, true, false, 0f, 0);
	}
	if (!__LIB_0__::func_27(uParam0->f_627, 16))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_604[0], func_288(7), func_289(7), 1))
		{
			ENTITY::PLAY_ENTITY_ANIM(uParam0->f_68[1 /*12*/].f_8, func_289(8), func_288(8), 4f, false, true, false, 0f, 0);
			__LIB_1__::func_683(&(uParam0->f_627), 16);
		}
	}
}

void func_1272(var uParam0)
{
	if (!__LIB_0__::func_27(uParam0->f_627, 1048576) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_68[1 /*12*/].f_8))
	{
		if ((!__LIB_2__::func_1(uParam0->f_604[0], 0, 1) || uParam0->f_996.f_46 == 1) || uParam0->f_904 == 1)
		{
			if ((((!__LIB_2__::func_1(uParam0->f_604[0], 0, 1) || (__LIB_2__::func_1(uParam0->f_604[0], 0, 1) && (PED::_IS_PED_LASSOED(uParam0->f_604[0]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_604[0], Global_35, 1, 1)))) || PED::_0x3BDFCF25B58B0415(uParam0->f_604[0])) || __LIB_2__::func_167(uParam0->f_604[0], 0)) || uParam0->f_904 == 1)
			{
				ENTITY::DETACH_ENTITY(uParam0->f_68[1 /*12*/].f_8, true, true);
				PHYSICS::ACTIVATE_PHYSICS(uParam0->f_68[1 /*12*/].f_8);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_68[0 /*12*/].f_8))
				{
					ENTITY::DETACH_ENTITY(uParam0->f_68[0 /*12*/].f_8, true, true);
					PHYSICS::ACTIVATE_PHYSICS(uParam0->f_68[0 /*12*/].f_8);
				}
				if (uParam0->f_914 == 0 && uParam0->f_904 == 1)
				{
					if (((!PED::_IS_PED_LASSOED(uParam0->f_604[0]) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_604[0], Global_35, 1, 1)) && !PED::_0x3BDFCF25B58B0415(uParam0->f_604[0])) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_604[0]))
					{
						__LIB_1__::func_715(2, 0, 0, "RE_HONOR_THEFT", uParam0->f_604[0], 0, 1065353216 /* Float: 1f */, 0);
						uParam0->f_914 = 1;
						__LIB_1__::func_991(uParam0->f_604[0], joaat("HONOR_EVENT_SCARE"));
					}
				}
				TASK::_0x78B4567E18B54480(uParam0->f_68[1 /*12*/].f_8);
				MISC::_0x7FA58CED69405F9A(uParam0->f_68[1 /*12*/].f_8, 3);
				uParam0->f_930 = __LIB_1__::func_863(uParam0->f_68[1 /*12*/].f_8, -89429847, 1, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_930, "RETH_TREASURE_MAP_NAME");
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_68[1 /*12*/].f_8, false);
				PHYSICS::ACTIVATE_PHYSICS(uParam0->f_68[1 /*12*/].f_8);
				ENTITY::APPLY_FORCE_TO_ENTITY(uParam0->f_68[1 /*12*/].f_8, 1, 0f, 1f, 1f, 0f, 0f, 0f, 0, true, true, true, false, true);
				uParam0->f_901 = 0;
				__LIB_0__::func_325(&(uParam0->f_607[0]));
				if (MAP::DOES_BLIP_EXIST(uParam0->f_607[0]))
				{
					MAP::REMOVE_BLIP(&(uParam0->f_607[0]));
				}
				if (!__LIB_0__::func_27(uParam0->f_627, 4194304) && uParam0->f_904 == 0)
				{
					__LIB_1__::func_683(&(uParam0->f_627), 4194304);
					if (__LIB_2__::func_1(uParam0->f_604[1], 0, 1))
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(uParam0->f_604[1], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
						PED::SET_PED_KEEP_TASK(uParam0->f_604[1], true);
					}
				}
				if (__LIB_0__::func_396(uParam0->f_604[0]))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(uParam0->f_604[0], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
					PED::SET_PED_KEEP_TASK(uParam0->f_604[0], true);
				}
				func_1301(uParam0);
				__LIB_1__::func_683(&(uParam0->f_627), 1048576);
			}
		}
		else
		{
			return;
		}
	}
}

void func_1273(var uParam0)
{
	if (!__LIB_0__::func_27(uParam0->f_627, 67108864))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_596, true, false))
		{
			if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_596, "pbl_handover"))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_596, "pbl_handover"))
				{
					__LIB_1__::func_683(&(uParam0->f_627), 67108864);
				}
				else
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_596, "pbl_handover");
				}
			}
			if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_596, "PBL_ONLY_HANDOVER"))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_596, "PBL_ONLY_HANDOVER"))
				{
				}
				else
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_596, "PBL_ONLY_HANDOVER");
				}
			}
		}
	}
}

void func_1276(var uParam0)
{
	__LIB_3__::func_157(&(uParam0->f_843[0 /*17*/]), "RE_INTER_POS", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
}

bool func_1278(var uParam0)
{
	if (__LIB_2__::func_118(uParam0->f_604[0], 1, 1) > 25f)
	{
		__LIB_3__::func_600(uParam0->f_604[0], Global_35, func_1254(uParam0, "NO_ANSWER"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		__LIB_1__::func_392(&(uParam0->f_996.f_5), 0);
		TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_611));
		TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_611));
		TASK::TASK_PLAY_ANIM(0, func_288(9), func_289(9), 2f, -4f, -1, 0, 0.175f, false, 0, false, 0, false);
		if (__LIB_2__::func_1(uParam0->f_604[1], 0, 1))
		{
			TASK::TASK_MOUNT_ANIMAL(0, uParam0->f_604[1], -1, -1, 1f, 64, 0, 0);
		}
		TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, -1082130432 /* Float: -1f */, 0, 0);
		__LIB_1__::func_474(uParam0->f_604[0], &(uParam0->f_611), 0, 0, 1, 1);
		PED::SET_PED_KEEP_TASK(uParam0->f_604[0], true);
		__LIB_3__::func_969(&(uParam0->f_613), 1);
		func_1257(uParam0);
		if (__LIB_0__::func_899(&(uParam0->f_933)))
		{
			__LIB_1__::func_561(&(uParam0->f_933));
		}
		__LIB_1__::func_683(&(uParam0->f_628), 16384);
		uParam0->f_984 = 7;
		return true;
	}
	return false;
}

void func_1280(var uParam0)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_27(uParam0->f_627, 134217728))
	{
		__LIB_1__::func_683(&(uParam0->f_627), 134217728);
		func_740(uParam0, 1);
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iVar0 == 0)
	{
		if (__LIB_4__::func_273(Global_35, uParam0->f_596, "player", "pbl_handover", &(uParam0->f_981), 1065353216 /* Float: 1f */, 1, 1, 1))
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 1)
	{
		if (iVar1 == 1)
		{
			ANIMSCENE::START_ANIM_SCENE(uParam0->f_596);
		}
		TASK::CLEAR_PED_SECONDARY_TASK(uParam0->f_604[0]);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_596, "Base_Bool", true, false);
		if (uParam0->f_898 == 0 && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			uParam0->f_898 = 1;
		}
		func_1276(uParam0);
		func_740(uParam0, 1);
		uParam0->f_984 = 19;
	}
}

bool func_1281(var uParam0, float fParam1)
{
	if (__LIB_10__::func_981(uParam0, fParam1))
	{
		__LIB_1__::func_561(uParam0);
		return true;
	}
	return false;
}

void func_1282(int iParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, float fParam14)
{
	if (__LIB_0__::func_51(&(uParam1->f_3), 1))
	{
		func_1737(uParam1);
		if (__LIB_2__::func_640(iParam0, fParam7, iParam11, bParam12, bParam13, fParam14))
		{
			__LIB_1__::func_539();
		}
	}
	if (__LIB_2__::func_524(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), uParam1, fParam7))
	{
		CAM::SET_GAMEPLAY_PED_HINT(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
		__LIB_14__::func_177(uParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam6, iParam9);
	}
}

void func_1284(var uParam0)
{
	int iVar0;
	int iVar1;
	if ((uParam0->f_905 == 0 || __LIB_0__::func_27(uParam0->f_627, 1)) || __LIB_2__::func_118(uParam0->f_604[0], 1, 1) < 50f)
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam0->f_610, false);
		return;
	}
	switch (uParam0->f_630)
	{
		case 0:
			uParam0->f_631 = MISC::GET_RANDOM_INT_IN_RANGE(3, 10);
			__LIB_2__::func_259(&(uParam0->f_948));
			uParam0->f_630++;
			break;
		case 1:
			if (__LIB_1__::func_583(&(uParam0->f_948)) >= IntToFloat(uParam0->f_631))
			{
				iVar0 = __LIB_0__::func_23();
				iVar1 = __LIB_0__::func_41(iVar0);
				if (iVar1 > 7 && iVar1 < 19)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_68[0 /*12*/].f_8))
					{
						uParam0->f_610 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_event_glint", uParam0->f_68[0 /*12*/].f_8, 0f, 0f, 0f, 0f, 0f, 0f, 1f, true, false, false);
					}
					uParam0->f_632 = MISC::GET_RANDOM_INT_IN_RANGE(1, 2);
					__LIB_2__::func_259(&(uParam0->f_948));
					uParam0->f_630++;
				}
				else
				{
					__LIB_2__::func_259(&(uParam0->f_948));
				}
			}
			break;
		case 2:
			if (__LIB_1__::func_583(&(uParam0->f_948)) >= IntToFloat(uParam0->f_632))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam0->f_610, false);
				uParam0->f_630 = 0;
			}
			break;
	}
}

void func_1285(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	iVar0 = PED::_GET_LAST_MOUNT(Global_35);
	if (__LIB_2__::func_1(iVar0, 0, 1))
	{
		if (!__LIB_0__::func_71(Global_35))
		{
			if (__LIB_0__::func_665(iVar0, uParam0->f_604[0], 1, 1) < 17f)
			{
				if (!__LIB_0__::func_163(iVar0, 518218985) && !__LIB_0__::func_163(iVar0, -773337285))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(iVar0, uParam0->f_604[0], 6, 0, 20f, -1, 0);
					PED::SET_PED_KEEP_TASK(iVar0, true);
				}
			}
		}
	}
	if (__LIB_2__::func_1(uParam0->f_604[0], 0, 1))
	{
		if (uParam0->f_634 == 0)
		{
			if (__LIB_0__::func_665(Global_35, uParam0->f_604[0], 1, 1) < 17f)
			{
				if (uParam0->f_131 == 0)
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), true);
				}
			}
			else if (__LIB_0__::func_665(Global_35, uParam0->f_604[0], 1, 1) < 15f)
			{
				if (PED::IS_PED_ON_MOUNT(Global_35))
				{
					TASK::CLEAR_PED_TASKS(iVar0, true, false);
					TASK::_TASK_SMART_FLEE_STYLE_PED(iVar0, uParam0->f_604[0], 6, 0, 20f, -1, 0);
					PED::SET_PED_KEEP_TASK(iVar0, true);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
				{
					iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
					{
						__LIB_5__::func_798(&iVar1);
					}
				}
			}
			if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				vVar2 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_604[0], true, false) };
				if (__LIB_8__::func_727(Global_35, vVar2, &(uParam0->f_960), 40f, 25f, 15f, 11f, 0f, 1, 0, 1, 1, 1))
				{
					TASK::CLEAR_PED_TASKS(iVar0, true, false);
					TASK::_TASK_SMART_FLEE_STYLE_PED(iVar0, uParam0->f_604[0], 6, 0, 15f, -1, 0);
					PED::SET_PED_KEEP_TASK(iVar0, true);
				}
			}
			uParam0->f_634++;
		}
		else
		{
			uParam0->f_634 = 0;
		}
	}
}

bool func_1293(int iParam0, char* sParam1)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (ANIMSCENE::_0xA9016536015DE29D(iParam0, sParam1))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0, sParam1, true);
				return true;
			}
			else
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sParam1);
			}
		}
	}
	return false;
}

void func_1294(var uParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_615))
	{
		uParam0->f_615 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(Global_36, 0f, 0f, ENTITY::GET_ENTITY_HEADING(Global_35), 1f, 0.7f, 3f, "volBlocker");
		PED::_0x7C00CFC48A782DC0(uParam0->f_615, Global_35, 0f, -0.25f, 0f, 0f, 0f, 0f, 2, 1);
		PED::_0x19C975B81BE53C28(uParam0->f_615, Global_35);
		PATHFIND::_0x19C7567D2F2287D6(uParam0->f_615, 7);
	}
}

void func_1300(var uParam0)
{
	TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_611));
	if (__LIB_2__::func_1(uParam0->f_604[1], 0, 1))
	{
		TASK::TASK_MOUNT_ANIMAL(0, uParam0->f_604[1], -1, -1, 2f, 64, 0, 0);
	}
	TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
	__LIB_1__::func_474(uParam0->f_604[0], &(uParam0->f_611), 0, 0, 1, 1);
	PED::SET_PED_KEEP_TASK(uParam0->f_604[0], true);
	__LIB_3__::func_969(&(uParam0->f_613), 1);
	func_1257(uParam0);
	__LIB_1__::func_683(&(uParam0->f_628), 16384);
}

void func_1301(var uParam0)
{
	switch (__LIB_1__::func_898())
	{
		case 9:
			uParam0->f_994 = joaat("DOCUMENT_TREASURE_MAP_01");
			break;
		case 1:
			uParam0->f_994 = joaat("DOCUMENT_TREASURE_MAP_03");
			break;
		default:
			uParam0->f_994 = joaat("INVALID_INVENTORY_ITEM");
			break;
	}
}

void func_1302(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_68[1 /*12*/].f_8))
	{
		MISC::_0xA08111B053D84B4D(uParam0->f_68[1 /*12*/].f_8);
		OBJECT::DELETE_OBJECT(&(uParam0->f_68[1 /*12*/].f_8));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_68[0 /*12*/].f_8))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_68[0 /*12*/].f_8));
	}
}

void func_1392(var uParam0)
{
	uParam0->f_68[0 /*12*/].f_7 = joaat("P_BINOCULARS01X");
	uParam0->f_68[1 /*12*/].f_7 = joaat("S_TWOFOLDMAP01X");
	uParam0->f_68[3 /*12*/].f_7 = joaat("S_INV_MONEYCLIP01X");
	uParam0->f_68[4 /*12*/].f_7 = joaat("S_INTERACT_LANTERN02X");
	uParam0->f_68[2 /*12*/].f_7 = joaat("S_TM_HEARLANDS");
	STREAMING::REQUEST_PTFX_ASSET();
}

void func_1393(var uParam0)
{
	__LIB_3__::func_314(&(uParam0->f_68));
}

void func_1394(var uParam0)
{
	__LIB_3__::func_318("script_re@treasure_hunter", &(uParam0->f_132));
	__LIB_3__::func_318("script_re@treasure_hunter@treasure_hunter_offer", &(uParam0->f_132));
}

void func_1436()
{
	int iVar0;
	iVar0 = __LIB_0__::func_153(Global_35, 9, 1, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_153(Global_35, 7, 1, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = __LIB_0__::func_153(Global_35, 0, 1, 0);
	if (__LIB_0__::func_154(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = __LIB_0__::func_153(Global_35, 1, 1, 0);
	if (__LIB_0__::func_154(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = __LIB_0__::func_153(Global_35, 18, 1, 0);
	if (__LIB_0__::func_154(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = __LIB_0__::func_664();
	if (__LIB_0__::func_154(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			__LIB_1__::func_766(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_1812(6291456, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			__LIB_1__::func_766(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
	}
}

void func_1631(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_664(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_664(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_664(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1923(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_667(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1165(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1929(Var0);
		}
		iVar7 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar8 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar9 = 1;
		__LIB_1__::func_178(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (__LIB_0__::func_809(iVar6) == joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"))
			{
				__LIB_0__::func_810(iVar6, iVar7);
				__LIB_0__::func_811(iVar6, iVar8);
				__LIB_0__::func_812(iVar6, iVar9);
				__LIB_0__::func_813(iVar6, 0);
				if (__LIB_1__::func_127(iVar6))
				{
					__LIB_1__::func_608(iVar6);
				}
				iVar10 = __LIB_0__::func_553(iVar8);
				__LIB_1__::func_820(iVar6, iVar10);
			}
			iVar6++;
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), false);
	}
}

void func_1634(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (bParam0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_664(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_664(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_664(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_664(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_664(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_664(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_664(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_664(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_664(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_664(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_664(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1165(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1165(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1165(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1165(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1165(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1165(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1165(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1165(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1165(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1165(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1165(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
		iVar1 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar3 = 1;
		__LIB_1__::func_178(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (__LIB_0__::func_809(iVar0) == joaat("BREED_ARDENNES_IRONGREYROAN"))
			{
				__LIB_0__::func_810(iVar0, iVar1);
				__LIB_0__::func_811(iVar0, iVar2);
				__LIB_0__::func_812(iVar0, iVar3);
				__LIB_0__::func_813(iVar0, 0);
				if (__LIB_1__::func_127(iVar0))
				{
					__LIB_1__::func_608(iVar0);
				}
				iVar4 = __LIB_0__::func_553(iVar2);
				__LIB_1__::func_820(iVar0, iVar4);
			}
			iVar0++;
		}
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), false);
	}
}

bool func_1710(float fParam0)
{
	if (__LIB_0__::func_481(1))
	{
		return true;
	}
	if (__LIB_0__::func_899(&uLocal_0) && !func_1281(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

void func_1716(var uParam0)
{
	float fVar0;
	fVar0 = __LIB_0__::func_665(Global_35, uParam0->f_604[0], 1, 1);
	if (fVar0 > 10f || (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_626) && __LIB_1__::func_205(Global_35, uParam0->f_626, 1, 0)))
	{
		if (uParam0->f_920 == 0)
		{
			uParam0->f_920 = 1;
			func_740(uParam0, 1);
		}
	}
	else if (uParam0->f_920 == 1)
	{
		uParam0->f_920 = 0;
		func_1968(uParam0);
	}
}

void func_1717(var uParam0)
{
	int iVar0;
	int iVar1;
	if (uParam0->f_996.f_46 == 1 || uParam0->f_922 == 0)
	{
		return;
	}
	iVar0 = 1;
	iVar1 = -1;
	iVar1 = func_1970(&(uParam0->f_604[0]), &(uParam0->f_781[0 /*61*/]), 20f, &(uParam0->f_843), &iVar0, 0f, 1, 0, 0, func_1969(uParam0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	if (iVar1 == 0 && uParam0->f_899 == 0)
	{
		uParam0->f_899 = 1;
		uParam0->f_918 = 1;
		uParam0->f_919 = 1;
		__LIB_2__::func_504(uParam0->f_604[0], 0);
		__LIB_2__::func_504(Global_35, 0);
		__LIB_3__::func_732(0);
		uParam0->f_618 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), -573.783f, -334.888f, 83.215f, 0f, 0f, -20.848f, 8f, 1.894f, 10f);
		uParam0->f_619 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), -579.122f, -335.122f, 83.215f, 0f, 0f, 29.798f, 7.298f, 2.358f, 10f);
		uParam0->f_620 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), -582.88f, -337.484f, 83.215f, 0f, 0f, 19.786f, 3.14f, 1.511f, 10f);
		uParam0->f_621 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), -586.644f, -337.382f, 83.215f, 0f, 0f, -9.876f, 5.315f, 1.894f, 10f);
		uParam0->f_622 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), -589.918f, -337.926f, 83.215f, 0f, 0f, 25.144f, 7.298f, 2.358f, 10f);
		uParam0->f_623 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), -592.387f, -340.464f, 83.215f, 0f, 0f, 56.935f, 2.458f, 1.54f, 10f);
		uParam0->f_624 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), -595.22f, -343.044f, 83.215f, 0f, 0f, 42.51f, 5.771f, 2.121f, 10f);
		uParam0->f_625 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), -601.329f, -344.666f, 83.215f, 0f, 0f, -3.953f, 9.908f, 1.54f, 10f);
		__LIB_2__::func_411(&(uParam0->f_843[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(uParam0->f_843[1 /*17*/]), 0, 0);
	}
	else if (iVar1 == 1 && uParam0->f_899 == 0)
	{
		uParam0->f_899 = 1;
		uParam0->f_919 = 1;
		uParam0->f_918 = 1;
		__LIB_2__::func_411(&(uParam0->f_843[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(uParam0->f_843[1 /*17*/]), 0, 0);
	}
}

void func_1718(var uParam0)
{
	float fVar0;
	fVar0 = __LIB_0__::func_665(Global_35, uParam0->f_604[0], 1, 1);
	if (uParam0->f_923 == 1 && uParam0->f_895 == 1)
	{
		if (fVar0 > 5f)
		{
			if (uParam0->f_920 == 0)
			{
				uParam0->f_920 = 1;
				__LIB_2__::func_411(&(uParam0->f_843[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(uParam0->f_843[1 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(uParam0->f_843[2 /*17*/]), 0, 0);
			}
		}
		else if ((uParam0->f_920 == 1 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_604[0]))
		{
			uParam0->f_920 = 0;
			if (uParam0->f_924 == 1)
			{
				__LIB_2__::func_411(&(uParam0->f_843[0 /*17*/]), 1, 0);
			}
			else
			{
				__LIB_2__::func_411(&(uParam0->f_843[0 /*17*/]), 0, 0);
			}
			__LIB_2__::func_411(&(uParam0->f_843[1 /*17*/]), 1, 0);
			__LIB_2__::func_411(&(uParam0->f_843[2 /*17*/]), 1, 0);
		}
	}
}

void func_1719(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	var uVar6;
	int iVar7;
	if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
	{
		if (func_1281(&(uParam0->f_936), 11.5f))
		{
			if (uParam0->f_898 == 0)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				uParam0->f_898 = 1;
			}
		}
	}
	if (uParam0->f_996.f_46 == 1)
	{
		return;
	}
	if (__LIB_1__::func_489(&(uParam0->f_781[0 /*61*/]), 1))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP"), false);
	}
	fVar0 = 10f;
	iVar1 = 1;
	iVar2 = -1;
	iVar2 = func_1970(&(uParam0->f_604[0]), &(uParam0->f_781[0 /*61*/]), fVar0, &(uParam0->f_843), &iVar1, 0f, 1, 0, 0, func_1969(uParam0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	if (iVar2 == 0)
	{
		if (uParam0->f_909 == 0)
		{
			if (CAM::DOES_CAM_EXIST(uParam0->f_928))
			{
				CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
				CAM::DESTROY_CAM(uParam0->f_928, false);
			}
			func_740(uParam0, 1);
			uParam0->f_899 = 1;
			uParam0->f_919 = 1;
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256, false);
			uParam0->f_898 = 0;
			__LIB_4__::func_89(&(uParam0->f_936), 0);
			if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
			{
				TASK::TASK_SET_CROUCH_MOVEMENT(Global_35, false, 0, false);
			}
			__LIB_12__::func_953(&(uParam0->f_781[0 /*61*/]), 0);
			__LIB_9__::func_903(&(uParam0->f_843[2 /*17*/]));
			vVar3 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_604[0], true, false) };
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar3, &uVar6, true))
			{
				vVar3.f_2 = uVar6;
			}
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_596, vVar3, ENTITY::GET_ENTITY_ROTATION(uParam0->f_604[0], 2), 2);
			func_1974(uParam0);
		}
		else
		{
			__LIB_2__::func_504(uParam0->f_604[0], 150);
			__LIB_3__::func_600(Global_35, uParam0->f_604[0], "GREET_THIRD_SHOUTED_GENERAL_CONV", 0, -1082130432 /* Float: -1f */, 5, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_740(uParam0, 0);
		}
	}
	else if (iVar2 == 1)
	{
		if (uParam0->f_909 == 0)
		{
			func_740(uParam0, 1);
			uParam0->f_899 = 1;
			if (CAM::DOES_CAM_EXIST(uParam0->f_928))
			{
				CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
				CAM::DESTROY_CAM(uParam0->f_928, false);
			}
			if (!__LIB_0__::func_27(uParam0->f_627, 33554432))
			{
				__LIB_1__::func_683(&(uParam0->f_627), 33554432);
				__LIB_3__::func_600(Global_35, uParam0->f_604[0], func_1254(uParam0, "NEG_RESP_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iVar7 = __LIB_3__::func_444(func_288(35), func_289(35));
				if (iVar7 <= 0)
				{
					iVar7 = 14066;
				}
				TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_611));
				TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_611));
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, func_288(35), func_289(35), Global_35, iVar7, 8f, -8f, 67109392, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, func_288(51), func_289(51), Global_35, -1, 8f, -8f, 67109393, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
				__LIB_1__::func_474(uParam0->f_604[0], &(uParam0->f_611), 0, 0, 1, 1);
				uParam0->f_984 = 14;
				uParam0->f_920 = 1;
			}
			else
			{
				__LIB_3__::func_600(Global_35, uParam0->f_604[0], func_1254(uParam0, "SECOND_NEG_RESP_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iVar7 = __LIB_3__::func_444(func_288(45), func_289(45));
				if (iVar7 <= 0)
				{
					iVar7 = 13266;
				}
				TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_611));
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, func_288(45), func_289(45), Global_35, iVar7, 8f, -2f, 67109392, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
				__LIB_1__::func_474(uParam0->f_604[0], &(uParam0->f_611), 0, 0, 1, 1);
				__LIB_1__::func_683(&(uParam0->f_628), 64);
				uParam0->f_984 = 17;
			}
		}
		else
		{
			__LIB_2__::func_504(uParam0->f_604[0], 150);
			if (__LIB_0__::func_181())
			{
				__LIB_3__::func_600(Global_35, uParam0->f_604[0], "WITNESS_THREATEN_EARLY", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				__LIB_3__::func_600(Global_35, uParam0->f_604[0], "WITNESS_DISMISS", 0, -1082130432 /* Float: -1f */, 5, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			func_740(uParam0, 0);
		}
	}
	else if (iVar2 == 2)
	{
		__LIB_3__::func_593(0);
		if (__LIB_0__::func_27(uParam0->f_628, 64))
		{
			__LIB_3__::func_600(Global_35, uParam0->f_604[0], func_1254(uParam0, "POST_ROB"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			uParam0->f_637 = 0;
		}
		else if (__LIB_0__::func_27(uParam0->f_627, 268435456))
		{
			__LIB_3__::func_600(Global_35, uParam0->f_604[0], func_1254(uParam0, "ROB_ALT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			uParam0->f_637 = 0;
		}
		else
		{
			uParam0->f_637++;
			if (uParam0->f_637 == 1)
			{
				__LIB_3__::func_600(Global_35, uParam0->f_604[0], func_1254(uParam0, "ROB"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_2__::func_259(&(uParam0->f_933));
			}
			else
			{
				__LIB_3__::func_600(Global_35, uParam0->f_604[0], func_1254(uParam0, "ROB_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
		}
		if (uParam0->f_637 != 1)
		{
			uParam0->f_906 = 1;
			uParam0->f_899 = 1;
			if (uParam0->f_914 == 0)
			{
				__LIB_1__::func_715(2, 0, 0, "RE_HONOR_THEFT", uParam0->f_604[0], 0, 1065353216 /* Float: 1f */, 0);
				uParam0->f_914 = 1;
				__LIB_1__::func_991(uParam0->f_604[0], joaat("HONOR_EVENT_SCARE"));
			}
			uParam0->f_984 = 18;
			__LIB_14__::func_178(&(uParam0->f_604[0]), 1);
			__LIB_4__::func_89(&(uParam0->f_954), 0);
			__LIB_1__::func_402(&(uParam0->f_996.f_5), 0);
			func_740(uParam0, 1);
			__LIB_12__::func_953(&(uParam0->f_781[0 /*61*/]), 0);
			func_1970(&(uParam0->f_604[0]), &(uParam0->f_781[0 /*61*/]), fVar0, &(uParam0->f_843), &iVar1, 0f, 1, 0, 0, func_1969(uParam0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		}
		else
		{
			func_740(uParam0, 1);
		}
	}
}

int func_1721(var uParam0)
{
	switch (__LIB_1__::func_898())
	{
		case 9:
			return joaat("DOCUMENT_TREASURE_MAP_01");
		case 1:
			return joaat("DOCUMENT_TREASURE_MAP_03");
		default:
			break;
	}
	return 0;
}

void func_1728(var uParam0)
{
	uParam0->f_919 = 1;
	__LIB_3__::func_157(&(uParam0->f_843[0 /*17*/]), "RE_INTER_POS", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
	__LIB_3__::func_157(&(uParam0->f_843[1 /*17*/]), "RE_INTER_ANTAGONIZE", 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
	__LIB_3__::func_157(&(uParam0->f_843[2 /*17*/]), __LIB_2__::func_460(12), 0, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 0, 0);
	func_740(uParam0, 1);
}

void func_1737(var uParam0)
{
	if (__LIB_0__::func_51(&(uParam0->f_3), 4))
	{
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if ((!func_1979(uParam0) || __LIB_0__::func_51(&(uParam0->f_3), 4)) && !__LIB_0__::func_51(&(uParam0->f_3), 256))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_LOOK_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_LOOK_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_LOOK_BEHIND"), false);
		}
		PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_NEXT_CAMERA"), false);
	}
	if (func_1980(uParam0))
	{
		__LIB_1__::func_539();
	}
	if (!__LIB_0__::func_51(&(uParam0->f_3), 16))
	{
		if (__LIB_0__::func_899(uParam0))
		{
			if (__LIB_9__::func_401(uParam0) < uParam0->f_4)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
		}
	}
}

int func_1812(int iParam0, int iParam1)
{
	var uVar0;
	return func_2002(&uVar0, iParam0, iParam1);
}

void func_1923(int iParam0)
{
	int iVar0[15];
	bool bVar16;
	bool bVar17;
	var uVar18[15];
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	var uVar39;
	bool bVar40;
	func_1165(iParam0, 1, 1, -142743235, 1);
	iVar34 = __LIB_1__::func_415(iParam0, &uVar18);
	__LIB_1__::func_82(iParam0, &uVar18, &iVar34, 1);
	if (__LIB_0__::func_241() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	__LIB_0__::func_827(iParam0, &(Global_26796.f_627.f_121.f_20));
	__LIB_1__::func_798(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_1165(uVar18[iVar36], 1, 1, -142743235, 1);
		switch (__LIB_0__::func_357(uVar18[iVar36]))
		{
			case -2061583405:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_21));
				break;
			case 81053684:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_23));
				break;
			case -525676072:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_22));
				break;
			case -1719060085:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_24));
				break;
			case -413129408:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_25));
				break;
		}
		__LIB_1__::func_798(uVar18[iVar36], 1, 1);
		iVar0[iVar36] = __LIB_0__::func_161(__LIB_1__::func_710(uVar18[iVar36]), 1);
		iVar36++;
	}
	__LIB_0__::func_608(&(Global_1946804.f_1616));
	__LIB_1__::func_633(&(Global_1946804.f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	Global_1946804.f_1616.f_1[8 /*3*/] = { __LIB_0__::func_377(8, 0) };
	Global_1946804.f_1616.f_1[9 /*3*/] = { __LIB_0__::func_377(9, 0) };
	Global_1946804.f_1616.f_1[0 /*3*/] = { __LIB_0__::func_377(0, 0) };
	Global_1946804.f_1616.f_1[2 /*3*/] = { __LIB_0__::func_377(2, 0) };
	Global_1946804.f_1616.f_1[3 /*3*/] = { __LIB_0__::func_377(3, 0) };
	Global_1946804.f_1616.f_1[1 /*3*/] = { __LIB_0__::func_377(1, 0) };
	Global_1946804.f_1616.f_1[5 /*3*/] = { __LIB_0__::func_377(5, 0) };
	Global_1946804.f_1616.f_1[6 /*3*/] = { __LIB_0__::func_377(6, 0) };
	Global_1946804.f_1616.f_1[7 /*3*/] = { __LIB_0__::func_377(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (uVar18[iVar36] == __LIB_0__::func_780(iVar0[iVar36], iVar35))
			{
				__LIB_1__::func_798(__LIB_0__::func_998(iVar35), 1, 1);
				__LIB_0__::func_999(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!__LIB_0__::func_65(&(Global_1946804.f_1616.f_1[iVar37 /*3*/]), 2))
						{
						}
						else
						{
							__LIB_0__::func_242(&(Global_1946804.f_1616.f_1[iVar37 /*3*/]), iVar37, 0);
							Global_1946804.f_1497.f_1[iVar37 /*3*/] = { Global_1946804.f_1616.f_1[iVar37 /*3*/] };
						}
						iVar37++;
					}
				}
			}
			else
			{
				iVar36++;
			}
		}
		iVar35++;
	}
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (uVar18[iVar36] == Global_1946804.f_1497.f_1[iVar0[iVar36] /*3*/])
		{
			bVar16 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if ((bVar16 || bVar17) || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
	{
		if (!__LIB_0__::func_609(8))
		{
			if (__LIB_0__::func_241() == -2125499975)
			{
				if (bVar17)
				{
					__LIB_1__::func_633(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
					Global_1946804.f_1616 = joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
					__LIB_0__::func_742(&(Global_1946804.f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						__LIB_0__::func_244(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					__LIB_1__::func_633(&(Global_1946804.f_1616), -361635024 /* GXTEntry: "The Cowboy" */, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804.f_1616 = joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
					__LIB_0__::func_742(&(Global_1946804.f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						__LIB_0__::func_244(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
				{
					__LIB_0__::func_828(Global_40.f_7729, 4096);
					__LIB_0__::func_806(Global_1905941, 4096);
					Global_40.f_7729 = Global_1905941;
				}
				else
				{
					__LIB_1__::func_811(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Global_1905941, 1, 0, 0);
				}
			}
		}
	}
	bVar40 = false;
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (uVar18[iVar36] == Global_26796.f_627.f_1.f_1.f_1[iVar0[iVar36] /*3*/])
		{
			bVar40 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if (!bVar40)
	{
		return;
	}
	__LIB_1__::func_633(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
	__LIB_1__::func_633(&(Global_1946804.f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
	Global_1946804.f_1616.f_1[8 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[8 /*3*/] };
	Global_1946804.f_1616.f_1[9 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[9 /*3*/] };
	Global_1946804.f_1616.f_1[0 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[0 /*3*/] };
	Global_1946804.f_1616.f_1[2 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[2 /*3*/] };
	Global_1946804.f_1616.f_1[3 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[3 /*3*/] };
	Global_1946804.f_1616.f_1[1 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[1 /*3*/] };
	Global_1946804.f_1616.f_1[5 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[5 /*3*/] };
	Global_1946804.f_1616.f_1[6 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[6 /*3*/] };
	Global_1946804.f_1616.f_1[7 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[7 /*3*/] };
	Global_26796.f_627 = Global_1946804.f_1616;
	Global_26796.f_627.f_1.f_1 = Global_1946804.f_1616;
	iVar36 = 0;
	while (iVar36 < 39)
	{
		Global_26796.f_627.f_1.f_1.f_1[iVar36 /*3*/] = { Global_1946804.f_1616.f_1[iVar36 /*3*/] };
		iVar36++;
	}
}

void func_1929(struct<6> Param0)
{
	if (!func_2075(Param0.f_4, 1))
	{
	}
	if (!func_2075(Param0, 1))
	{
	}
	if (!func_2075(Param0.f_2, 1))
	{
	}
	if (!func_2075(Param0.f_5, 1))
	{
	}
	if (!func_2075(Param0.f_3, 1))
	{
	}
	if (!func_2075(Param0.f_1, 1))
	{
	}
}

void func_1968(var uParam0)
{
	__LIB_2__::func_411(&(uParam0->f_843[0 /*17*/]), 1, 0);
	if (uParam0->f_918 == 1)
	{
		__LIB_2__::func_411(&(uParam0->f_843[1 /*17*/]), 1, 0);
	}
	__LIB_2__::func_411(&(uParam0->f_843[2 /*17*/]), 1, 0);
}

int func_1969(var uParam0)
{
	if (uParam0->f_919 == 1)
	{
		return __LIB_2__::func_340(3, 0, 0) | 64;
	}
	return __LIB_2__::func_340(0, 0, 0) | 64;
}

int func_1970(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_2109(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_4__::func_95(iParam1, uParam3, uParam0);
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

void func_1974(var uParam0)
{
	ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_596, "PBL_ONLY_HANDOVER");
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_596, "player", &(uParam0->f_582), true, "PBL_ONLY_HANDOVER", 2))
	{
		func_2111(uParam0);
		if (!__LIB_0__::func_27(uParam0->f_627, 33554432))
		{
			__LIB_3__::func_593(0);
			__LIB_3__::func_600(Global_35, uParam0->f_604[0], func_1254(uParam0, "POS_RESP_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&(uParam0->f_627), 16384);
			__LIB_1__::func_683(&(uParam0->f_627), 8388608);
			__LIB_1__::func_392(&(uParam0->f_996.f_5), 0);
			uParam0->f_984 = 13;
		}
		else
		{
			__LIB_3__::func_593(0);
			__LIB_3__::func_600(Global_35, uParam0->f_604[0], func_1254(uParam0, "SECOND_POS_RESP_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&(uParam0->f_627), 262144);
			__LIB_1__::func_683(&(uParam0->f_627), 4096);
			__LIB_1__::func_683(&(uParam0->f_627), 8388608);
			__LIB_1__::func_392(&(uParam0->f_996.f_5), 0);
			uParam0->f_984 = 16;
		}
	}
}

bool func_1979(var uParam0)
{
	if (!func_2113(*uParam0, uParam0->f_4))
	{
		return false;
	}
	return true;
}

bool func_1980(var uParam0)
{
	if (!func_1979(uParam0))
	{
		return false;
	}
	if (__LIB_1__::func_876(uParam0->f_7, uParam0->f_8, __LIB_0__::func_51(&(uParam0->f_3), 4)))
	{
		return true;
	}
	if (!__LIB_0__::func_51(&(uParam0->f_3), 4))
	{
		if (__LIB_1__::func_383())
		{
			return true;
		}
	}
	return false;
}

int func_2002(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar18;
	var uVar19;
	struct<22> Var23;
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = __LIB_0__::func_27(iParam1, 128);
	if (__LIB_0__::func_446("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		Var23.f_9 = -1591664384;
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!__LIB_0__::func_236(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!__LIB_0__::func_154(Var4.f_4))
			{
			}
			else if (!WEAPON::_0x705BE297EEBDB95D(Var4.f_4) && !WEAPON::_IS_WEAPON_BOW(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!__LIB_0__::func_27(iParam1, 512) && __LIB_1__::func_280(Var4.f_4, &uVar19, &Var23, 1728382685 /* GXTEntry: "Right" */)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || WEAPON::_0xF29A186ED428B552(Global_35, Var4.f_4))
			{
				if ((((((WEAPON::_IS_WEAPON_TWO_HANDED(Var4.f_4) || __LIB_0__::func_237(Var4.f_4)) && (!WEAPON::_IS_WEAPON_SHOTGUN(Var4.f_4) || __LIB_0__::func_27(iParam1, 16))) && (!WEAPON::_IS_WEAPON_SNIPER(Var4.f_4) || __LIB_0__::func_27(iParam1, 4))) && (!__LIB_0__::func_237(Var4.f_4) || __LIB_0__::func_27(iParam1, 8))) && (!WEAPON::_IS_WEAPON_REPEATER(Var4.f_4) || !__LIB_0__::func_27(iParam1, 8388608))) && (!WEAPON::_IS_WEAPON_RIFLE(Var4.f_4) || !__LIB_0__::func_27(iParam1, 1048576)))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		__LIB_0__::func_238(iVar1);
	}
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
	}
	else if (!__LIB_0__::func_27(iParam1, 512) && !__LIB_0__::func_27(iParam1, 1024))
	{
		iParam1 |= 512;
		return func_2002(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2075(int iParam0, int iParam1)
{
	var uVar0;
	var uVar5;
	int iVar9;
	struct<4> Var10;
	struct<4> Var14;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_1__::func_703(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { __LIB_1__::func_124() };
	Var14 = { __LIB_0__::func_429(iParam0, Var10, iVar9, 0) };
	if (__LIB_1__::func_556(Var14, iParam1))
	{
		if (__LIB_0__::func_847(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar18))
			{
				if (func_2075(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2075(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2075(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2075(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

int func_2109(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
	int iVar9;
	int iVar10;
	bool bVar11;
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		__LIB_1__::func_487(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*iParam0));
		fVar8 = __LIB_0__::func_514(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
		func_2178(iParam0, iParam1, uParam3, fParam2, fVar8, sParam7);
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*iParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*iParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			__LIB_2__::func_259(&(iParam1->f_13));
		}
		if (__LIB_4__::func_231(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_2180(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_2109(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					__LIB_1__::func_480(iParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*iParam0, 317, true))
						{
							__LIB_1__::func_488(*iParam0, 1, 1);
						}
					}
					else if (__LIB_1__::func_489(iParam1, 22))
					{
						__LIB_1__::func_488(*iParam0, 0, 1);
					}
				}
				if (__LIB_3__::func_598(iParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_6__::func_838(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					__LIB_18__::func_773(iParam1, uParam3);
					if (func_2186(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_13__::func_43(*iParam0, iParam1, uParam3))
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
				if (__LIB_3__::func_598(iParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_6__::func_840(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_2186(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_6__::func_838(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					__LIB_18__::func_773(iParam1, uParam3);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					__LIB_2__::func_480(uParam3, 0, 0, 1, 1);
					__LIB_1__::func_491(iParam1, 1);
				}
				if (MISC::IS_BIT_SET(iParam1->f_21, 20))
				{
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						if (!__LIB_0__::func_163(Global_35, 501393341) && !__LIB_0__::func_163(Global_35, 242628503))
						{
							iVar9 = 0;
							if (__LIB_3__::func_547(Global_35, *iParam0, 1f) == 3)
							{
								iVar9 = 131072;
							}
							else
							{
								iVar9 = 262144;
							}
							iParam1->f_28 = PED::GET_MOUNT(Global_35);
							TASK::TASK_DISMOUNT_ANIMAL(Global_35, iVar9, 0, 0, 0, 0);
						}
					}
					else if ((((!PED::IS_PED_ON_MOUNT(Global_35) && __LIB_0__::func_272(iParam1->f_28, 0)) && __LIB_0__::func_48(Global_35, iParam1->f_28, iParam1->f_29, 1)) && !__LIB_0__::func_163(iParam1->f_28, 518218985)) && !__LIB_0__::func_163(iParam1->f_28, 242628503))
					{
						TASK::TASK_SMART_FLEE_PED(iParam1->f_28, Global_35, (iParam1->f_29 + 3f), -1, 2304, 1f, 0);
						iParam1->f_28 = 0;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
					{
						if (!__LIB_0__::func_163(Global_35, -828834893) && !__LIB_0__::func_163(Global_35, 242628503))
						{
							iVar10 = 0;
							if (__LIB_3__::func_547(Global_35, *iParam0, 1f) == 3)
							{
								iVar10 = 131072;
							}
							else
							{
								iVar10 = 262144;
							}
							TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, iVar10);
						}
					}
					else if (!(MISC::IS_BIT_SET(*iParam1, 12) || __LIB_6__::func_789(iParam1, iParam0)))
					{
					}
					else if (!(MISC::IS_BIT_SET(*iParam1, 13) || __LIB_13__::func_461(iParam1)))
					{
					}
					else if (!__LIB_13__::func_51(iParam1))
					{
					}
					else
					{
						if (fParam4 > 0f)
						{
							__LIB_2__::func_259(&(iParam1->f_18));
							bVar11 = iParam8 & 128 != false;
							if (bVar11)
							{
								__LIB_2__::func_526(uParam3, 0, 0);
							}
							iParam1->f_2 = 4;
						}
						if (iParam1->f_2 != 2 && iParam1->f_2 != 4)
						{
							iVar0 = iParam1->f_1;
							if (iVar0 != -1)
							{
								iParam1->f_1 = -1;
							}
							return iVar0;
						}
					}
				}
				break;
			case 4:
				if (func_2196(iParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (__LIB_3__::func_598(iParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_6__::func_840(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_2186(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_6__::func_838(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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
				if (func_2196(iParam0, iParam1, fParam4, bVar6))
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
			__LIB_13__::func_47(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_2111(var uParam0)
{
	__LIB_4__::func_80(&(uParam0->f_748));
	uParam0->f_748.f_1 = Global_35;
	uParam0->f_748.f_8 = { uParam0->f_582 };
	uParam0->f_748.f_19 = uParam0->f_582.f_3.f_2;
	uParam0->f_748.f_18 = 0f;
	__LIB_0__::func_7(&(uParam0->f_748.f_23), 1024);
	__LIB_0__::func_7(&(uParam0->f_748.f_23), 1);
	uParam0->f_748.f_4 = 1;
	uParam0->f_748.f_14 = { Global_36 };
	WEAPON::_0x4820A6939D7CEF28(Global_35, 0);
	WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
	if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_596, "PBL_ONLY_HANDOVER"))
	{
	}
	else
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_596, "PBL_ONLY_HANDOVER");
	}
	MAP::DISPLAY_RADAR(false);
}

bool func_2113(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!__LIB_0__::func_899(&uParam0))
	{
		return false;
	}
	if (__LIB_9__::func_401(&uParam0) <= iParam3 + 500)
	{
		return false;
	}
	return true;
}

void func_2178(int iParam0, int* iParam1, var uParam2, float fParam3, float fParam4, char* sParam5)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0) || !MISC::IS_BIT_SET(iParam1->f_21, 0))
	{
		return;
	}
	__LIB_3__::func_95(iParam1, *iParam0, iParam1->f_56, 0);
	fVar0 = __LIB_0__::func_514(fParam4 >= 0f, fParam4, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
	__LIB_3__::func_27(iParam1, fParam3);
	func_2237(iParam0, iParam1, uParam2, fVar0);
	__LIB_18__::func_774(iParam1);
	if (MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		bVar1 = MISC::IS_STRING_NULL_OR_EMPTY(sParam5);
		__LIB_11__::func_414(iParam1, uParam2, iParam0, bVar1, sParam5, fVar0);
		if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			bVar2 = true;
			if (!MISC::IS_BIT_SET(*iParam1, 12))
			{
				bVar2 = __LIB_6__::func_789(iParam1, iParam0);
			}
			if (bVar2 && !MISC::IS_BIT_SET(*iParam1, 13))
			{
				__LIB_13__::func_461(iParam1);
			}
		}
	}
}

bool func_2180(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		bVar4 = __LIB_0__::func_27(iParam4, 32);
		__LIB_12__::func_985(iParam1, uParam2, 0);
		iVar5 = __LIB_6__::func_817(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		__LIB_2__::func_480(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!__LIB_0__::func_27(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (__LIB_0__::func_27(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (__LIB_0__::func_27(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (__LIB_0__::func_27(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (__LIB_0__::func_27(iParam4, 8388608) || __LIB_0__::func_27(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (__LIB_0__::func_27(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (__LIB_0__::func_27(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (__LIB_1__::func_489(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!__LIB_1__::func_489(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (__LIB_0__::func_27(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::_0x870708A6E147A9AD(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = __LIB_2__::func_388(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
			if (__LIB_0__::func_27(iParam4, 268435456))
			{
				iVar8 = __LIB_1__::func_498(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					__LIB_2__::func_394(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (__LIB_1__::func_489(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
			if (__LIB_0__::func_27(iParam4, 2) || __LIB_0__::func_27(iParam4, 16))
			{
				__LIB_1__::func_488(*uParam0, 1, 1);
			}
			else
			{
				__LIB_1__::func_488(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

bool func_2186(int iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;
	bool bVar13;
	iVar1 = __LIB_0__::func_492(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*iParam0);
	bVar11 = (((PED::_IS_PED_CARRYING(Global_35) || __LIB_2__::func_365(Global_35)) || __LIB_1__::func_869(Global_35)) || __LIB_2__::func_366(Global_35));
	fVar12 = -1f;
	if (__LIB_0__::func_899(&(iParam1->f_13)))
	{
		fVar12 = __LIB_1__::func_583(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = __LIB_0__::func_139((uParam4[iVar0 /*17*/])->f_6);
		__LIB_6__::func_819(*iParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (__LIB_2__::func_475(*iParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (__LIB_2__::func_367(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						__LIB_2__::func_480(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						__LIB_2__::func_526(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						__LIB_12__::func_985(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 12) || MISC::IS_BIT_SET(*iParam1, 20))
					{
						if (!MISC::IS_BIT_SET(*iParam1, 19))
						{
							__LIB_10__::func_604(iParam1, uParam4, iParam0, fParam3, sParam9);
							bVar13 = MISC::IS_STRING_NULL_OR_EMPTY(sParam9);
							__LIB_11__::func_414(iParam1, uParam4, iParam0, bVar13, sParam9, fParam2);
						}
						if (!MISC::IS_BIT_SET(*iParam1, 7))
						{
							MISC::SET_BIT(&(iParam1->f_21), 3);
						}
						MISC::SET_BIT(&(iParam1->f_21), 20);
					}
					if (MISC::IS_BIT_SET(iParam1->f_21, 20))
					{
						if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
						{
							iParam1->f_2 = 3;
						}
						if (!MISC::IS_BIT_SET(*iParam1, 13))
						{
							if (__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || __LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))
							{
								iParam1->f_2 = 3;
							}
						}
						if (!MISC::IS_BIT_SET(*iParam1, 12))
						{
							if (PED::_IS_PED_CARRYING(Global_35))
							{
								iParam1->f_2 = 3;
							}
						}
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, (uParam4[iVar0 /*17*/])->f_11, (uParam4[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (__LIB_1__::func_500(iParam1, fParam6, iParam1->f_9))
					{
						__LIB_2__::func_259(&(iParam1->f_18));
						if (bVar6)
						{
							__LIB_2__::func_526(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		__LIB_1__::func_501(iParam1, fParam2);
	}
	return bVar5;
}

bool func_2196(int iParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*iParam0))
		{
			return false;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			__LIB_2__::func_259(&(iParam1->f_18));
			return false;
		}
		else if (__LIB_0__::func_899(&(iParam1->f_18)))
		{
			__LIB_1__::func_561(&(iParam1->f_18));
			return false;
		}
	}
	if (!__LIB_0__::func_899(&(iParam1->f_18)))
	{
		return true;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return false;
		}
	}
	return func_1281(&(iParam1->f_18), fParam2);
	return true;
}

void func_2237(var uParam0, int* iParam1, var uParam2, float fParam3)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return;
	}
	__LIB_6__::func_739(uParam0, iParam1);
	fVar0 = __LIB_0__::func_514(fParam3 >= 0f, fParam3, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
	if (fVar0 <= iParam1->f_26 || MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		__LIB_18__::func_773(iParam1, uParam2);
		__LIB_13__::func_463(iParam1);
		__LIB_13__::func_464(iParam1);
		if (!MISC::IS_BIT_SET(*iParam1, 17))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (!PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), iParam1->f_27);
				}
				else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID())))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), iParam1->f_27);
				}
			}
		}
		__LIB_1__::func_538(0);
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::GET_PLAYER_INDEX());
		PED::SET_PED_RESET_FLAG(Global_35, 25, true);
		PED::SET_PED_RESET_FLAG(Global_35, 134, true);
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		if (!MISC::IS_BIT_SET(iParam1->f_21, 2))
		{
			if (!VOLUME::_DOES_VOLUME_EXIST(iParam1->f_35))
			{
				iParam1->f_35 = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), 0f, 0f, 0f, iParam1->f_26, iParam1->f_26, 20f);
			}
			else
			{
				__LIB_3__::func_58(iParam1->f_35, 0, 0);
				MISC::SET_BIT(&(iParam1->f_21), 2);
			}
		}
		if ((PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && MISC::IS_BIT_SET(*iParam1, 16)) || (PED::IS_PED_ON_MOUNT(Global_35) && MISC::IS_BIT_SET(*iParam1, 15)))
		{
			iVar1 = 0;
			if (__LIB_3__::func_547(Global_35, *uParam0, 1f) == 3)
			{
				iVar1 = 131072;
			}
			else
			{
				iVar1 = 262144;
			}
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				iParam1->f_28 = PED::GET_MOUNT(Global_35);
			}
			bVar2 = (((PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && MISC::IS_BIT_SET(*iParam1, 16)) || (PED::IS_PED_ON_MOUNT(Global_35) && MISC::IS_BIT_SET(*iParam1, 15))) && !STREAMING::_0x99F92061EFE908BA());
			bVar3 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, false);
			__LIB_1__::func_448(Global_35, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), bVar2, iParam1->f_30, iParam1->f_31, iParam1->f_32, __LIB_0__::func_514(bVar3, iParam1->f_33, iParam1->f_34), 0, 1, 0, iVar1);
		}
		else if (((((MISC::IS_BIT_SET(*iParam1, 15) && !PED::IS_PED_ON_MOUNT(Global_35)) && __LIB_0__::func_272(iParam1->f_28, 0)) && __LIB_0__::func_48(Global_35, iParam1->f_28, (iParam1->f_26 + 1.75f), 1)) && !__LIB_0__::func_163(iParam1->f_28, 518218985)) && !__LIB_0__::func_163(iParam1->f_28, 242628503))
		{
			TASK::CLEAR_PED_TASKS(iParam1->f_28, true, false);
			TASK::TASK_SMART_FLEE_COORD(iParam1->f_28, Global_36, (iParam1->f_26 + 1.75f), -1, 256, 0.101f);
			iParam1->f_28 = 0;
		}
	}
}

