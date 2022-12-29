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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	vector3 vLocal_18[47] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_160[9] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<2> Local_188 = { 0, 0 } ;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = -1;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 1097859072;
	var uLocal_209 = 1000;
	var uLocal_210 = 1067450368;
	var uLocal_211 = 5000;
	var uLocal_212 = 42;
	var uLocal_213 = 1103626240;
	var uLocal_214 = 1077936128;
	var uLocal_215 = 1106247680;
	var uLocal_216 = 1103101952;
	var uLocal_217 = 1097859072;
	var uLocal_218 = 1103626240;
	var uLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	vector3 vLocal_222 = { 0f, 0f, 0f };
	float fLocal_225 = 0f;
	int iLocal_226 = 0;
	int iLocal_227[2] = { 0, 0 };
	vector3 vLocal_230[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	vector3 vLocal_239 = { 0f, 0f, 0f };
	int iLocal_242 = 0;
	bool bLocal_243 = false;
	bool bLocal_244 = false;
	bool bLocal_245 = false;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	struct<5> Local_248[3];
	int iLocal_264 = 0;
	char* sLocal_265 = NULL;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	char* sLocal_268 = NULL;
	char* sLocal_269 = NULL;
	char* sLocal_270 = NULL;
	char* sLocal_271 = NULL;
	struct<7> Local_272[2];
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	struct<5> Local_290 = { 0, 0, 0, 0, 0 } ;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	int iLocal_297 = 0;
	vector3 vLocal_298 = { 0f, 0f, 0f };
	vector3 vLocal_301 = { 0f, 0f, 0f };
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	struct<7> Local_309 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	int iLocal_316 = 0;
	vector3 vLocal_317 = { 0f, 0f, 0f };
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	int iLocal_329 = 0;
	struct<9> Local_330[15];
	int iLocal_466 = 0;
	struct<41> Local_467[9];
	int iLocal_837 = 0;
	int iLocal_838 = 0;
	var uLocal_839 = -1;
	var uLocal_840 = 0;
	var uLocal_841 = -1;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = -1;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 1073741824;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 1;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	struct<17> Local_859[1];
	int iLocal_877 = 0;
	var uLocal_878 = -1;
	var uLocal_879 = 0;
	var uLocal_880 = -1;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = -1;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 1073741824;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 1;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	struct<17> Local_898[2];
	int iLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	bool bLocal_943 = false;
	struct<7> Local_944[2];
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 1;
	var uLocal_964 = 1;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	bool bLocal_973 = false;
	int iLocal_974 = 0;
	int iLocal_975 = 0;
	bool bLocal_976 = false;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	bool bLocal_993 = false;
	int iLocal_994 = 0;
	struct<5> Local_995[9];
	int iLocal_1041 = 0;
	int iLocal_1042 = 0;
	int iLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	int iLocal_1047 = 0;
	int iLocal_1048 = 0;
	int iLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	char* sLocal_1053 = NULL;
	char* sLocal_1054 = NULL;
	bool bLocal_1055 = false;
	int iLocal_1056 = 0;
	int iLocal_1057 = 0;
	int iLocal_1058 = 0;
	int iLocal_1059 = 0;
	vector3 vLocal_1060 = { 0f, 0f, 0f };
	bool bLocal_1063 = false;
	bool bLocal_1064 = false;
	bool bLocal_1065 = false;
	bool bLocal_1066 = false;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	int iLocal_1070 = 0;
	int iLocal_1071 = 0;
	var uLocal_1072 = -1;
	var uLocal_1073 = 0;
	var uLocal_1074 = -1;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = -1;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 1073741824;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 1;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	struct<17> Local_1092[2];
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	bool bLocal_1130 = false;
	int iLocal_1131 = 0;
	int iLocal_1132 = 0;
	int iLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	bool bLocal_1140 = false;
	int iLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	int iLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	bool bLocal_1155 = false;
	bool bLocal_1156 = false;
	bool bLocal_1157 = false;
	bool bLocal_1158 = false;
	bool bLocal_1159 = false;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	vLocal_239 = { 2101.07f, -285.3527f, 41.9973f };
	sLocal_265 = "CRW3_VeteransPath";
	sLocal_268 = "MECH_WEAPONS_SPECIAL@TORCH";
	sLocal_269 = "aim_med_loop";
	sLocal_270 = "MECH_LOCO_M@GENERIC@EMOTION@UNARMED@PANIC@IDLE";
	sLocal_271 = "idle";
	vLocal_298 = { 2108.051f, -301.0653f, 40.7818f };
	vLocal_301 = { 0f, 0f, 111.2729f };
	iLocal_304 = joaat("S_WAGONWRECKED01X");
	iLocal_305 = joaat("S_INTERACT_LANTERN01X");
	iLocal_466 = joaat("A_C_BAT_01");
	iLocal_974 = 2;
	sLocal_1053 = func_1(18);
	sLocal_1054 = func_1(23);
	iLocal_1058 = -1;
	iLocal_1059 = -1;
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
		func_4(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_5(&Var0);
	while (true)
	{
		func_6(&Var0);
		if (__LIB_0__::func_1(Var0.f_172, 50331648))
		{
			func_8(&Var0);
		}
		else
		{
			switch (Var0.f_177)
			{
				case 0:
					__LIB_12__::func_906(&Var0);
					break;
				case 1:
					func_10(&Var0);
					break;
				case 3:
					func_11(&Var0);
					break;
				case 4:
					func_12(&Var0);
					break;
				case 2:
					func_13(&Var0);
					break;
				case 5:
					func_14(&Var0);
					break;
				case 6:
					func_15(&Var0);
					break;
				case 7:
					func_16(&Var0);
					break;
				case 8:
					func_17(&Var0);
					break;
				case 9:
					func_18(&Var0, 0);
					break;
				case 10:
					func_19(&Var0);
					break;
				case 11:
					if (Var0.f_174 == __LIB_10__::func_698())
					{
						__LIB_0__::func_297();
						__LIB_1__::func_140();
					}
					func_23(&Var0);
					break;
			}
		}
		BUILTIN::WAIT(0);
	}
}

char* func_1(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "pl_IG3_REACT_TO_BATS";
		case 2:
			return "pl_IG5_REACT_TO_BATS_ANNOYED";
		case 0:
			return "Pl_IG6_DISPOSE_LANTERN_PROMPT";
		case 3:
			return "Pl_IG7_CAJUN_ENTER_HOUSE";
		case 4:
			return "Pl_IG7_LOOKFORWARD_P1";
		case 5:
			return "Pl_IG7_LOOKFORWARD_P2";
		case 6:
			return "Pl_IG7_LOOKFORWARD_P3";
		case 7:
			return "Pl_IG7_CAJUN_LINE";
		case 8:
			return "Pl_IG7_CAJUN_LINE2";
		case 9:
			return "Pl_IG7_CAJUN_LINE3";
		case 10:
			return "Pl_IG7_CAJUN_LINE5";
		case 11:
			return "Pl_IG7_CAJUN_LINE6";
		case 12:
			return "Pl_IG7_CAJUN_LINE7";
		case 13:
			return "Pl_IG7_CAJUN_IDLE_IN_HOUSE";
		case 14:
			return "Pl_IG7_CAJUN_BASE_IN_HOUSE";
		case 17:
			return "Pl_IG7_CAJUN_EXIT_HOUSE";
		case 18:
			return "pl_IG1_CAJUN_CALL_OVER_CAREFUL";
		case 19:
			return "pl_IG1_CAJUN_CALL_OVER_DAMN";
		case 20:
			return "pl_IG1_CAJUN_CALL_OVER_HEY";
		case 21:
			return "pl_IG1_CAJUN_CALL_OVER_LOON";
		case 22:
			return "pl_IG1_CAJUN_CALL_OVER_OH_BOY";
		case 23:
			return "pl_IG1_CAJUN_IDLE_AGGITATED";
		case 24:
			return "pl_IG1_CAJUN_IDLE_LOOK_AROUND";
		case 25:
			return "pl_IG1_CAJUN_IDLE_SWAT";
		case 26:
			return "pl_IG1_CAJUN_IDLE_TOSS_OBJS";
		case 27:
			return "pl_IG1_CAJUN_PROMPT_AINT_SCARED";
		case 28:
			return "pl_IG1_CAJUN_PROMPT_A_THINK";
		case 29:
			return "pl_IG1_CAJUN_PROMPT_PAY_YOU";
		case 30:
			return "pl_IG1_CAJUN_PROMPT_WORTH";
		case 31:
			return "pl_IG1_CAJUN_RECONSIDER";
		case 32:
			return "pl_IG1_MEET_CAJUN_LEAVE";
		case 33:
			return "pl_IG1_MEET_CAJUN_P1";
		case 34:
			return "pl_IG1_MEET_CAJUN_POS";
		case 35:
			return "pl_IG2_WNT";
		case 36:
			return "pl_IG8_OUTRO_P1";
		case 37:
			return "pl_IG8_OUTRO_COME_HERE";
		case 38:
			return "pl_IG8_OUTRO_LOOP";
		case 39:
			return "pl_IG8_OUTRO_POS";
		case 40:
			return "pl_IG8_OUTRO_NEG";
		default:
			break;
	}
	return "";
}

void func_4(var uParam0)
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
			func_17(uParam0);
		}
		else
		{
			func_18(uParam0, 1);
			return;
		}
	}
	if (uParam0->f_177 == 10)
	{
		__LIB_0__::func_11(uParam0);
	}
	__LIB_12__::func_836(&(uParam0->f_753));
	func_23(uParam0);
}

void func_5(var uParam0)
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
	func_37(uParam0);
	__LIB_12__::func_642(uParam0);
	__LIB_12__::func_781(uParam0, 0, 0, 0, -1, -1, 0);
	__LIB_12__::func_782(uParam0, 0, 0, 0, -1, -1, 0);
	__LIB_12__::func_894(&(uParam0->f_178));
	if (Global_1347702[uParam0->f_174 /*49*/].f_28 != 0)
	{
		__LIB_12__::func_867(uParam0, Global_1347702[uParam0->f_174 /*49*/].f_28, 7);
	}
	func_43(uParam0);
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

void func_6(var uParam0)
{
	int iVar0;
	struct<4> Var1;
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
	if (func_54(uParam0))
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
			if (__LIB_12__::func_639(uParam0, 32))
			{
				if (!__LIB_12__::func_639(uParam0, 64))
				{
					if (!__LIB_0__::func_13(32768))
					{
						Var1 = { func_62(0) };
						if (func_63(&Var1))
						{
							__LIB_12__::func_791(uParam0, 32);
						}
					}
					else
					{
						__LIB_12__::func_791(uParam0, 32);
					}
				}
				else
				{
					__LIB_12__::func_791(uParam0, 32);
				}
			}
			if (func_65(uParam0))
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
			__LIB_0__::func_11(uParam0);
		}
		else if (!__LIB_12__::func_639(uParam0, 64) && !__LIB_12__::func_738(uParam0))
		{
			uParam0->f_743 = BUILTIN::VDIST2(__LIB_1__::func_440(uParam0->f_174), Global_36);
			if (func_71(uParam0))
			{
				if (__LIB_12__::func_644(uParam0) == 2 || __LIB_12__::func_644(uParam0) == 12)
				{
					func_23(uParam0);
					return;
				}
				func_73(uParam0);
				__LIB_12__::func_837(uParam0, 10);
				return;
			}
			else
			{
				__LIB_13__::func_52(uParam0);
			}
			__LIB_13__::func_98(uParam0);
		}
	}
	__LIB_13__::func_28(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 32))
	{
		__LIB_12__::func_954(uParam0, __LIB_12__::func_645(uParam0));
	}
	else if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		if (__LIB_12__::func_964(uParam0))
		{
		}
	}
}

void func_8(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		func_18(uParam0, 0);
	}
	else
	{
		if (!__LIB_0__::func_75(&(uParam0->f_2597)))
		{
			__LIB_1__::func_283(&(uParam0->f_2597), 0);
		}
		__LIB_0__::func_11(uParam0);
		if (__LIB_1__::func_871(&(uParam0->f_2597)) >= 2500 || CAM::IS_SCREEN_FADED_OUT())
		{
			if (uParam0->f_177 == 10)
			{
				__LIB_0__::func_11(uParam0);
			}
			else
			{
				func_73(uParam0);
			}
			func_23(uParam0);
		}
	}
}

void func_10(var uParam0)
{
	if (func_86(uParam0))
	{
		if (__LIB_12__::func_639(uParam0, 64))
		{
			func_87(uParam0);
			__LIB_12__::func_837(uParam0, 2);
			__LIB_12__::func_964(uParam0);
		}
		else if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 4096))
		{
			__LIB_12__::func_837(uParam0, 3);
		}
		else
		{
			__LIB_0__::func_11(uParam0);
			__LIB_12__::func_837(uParam0, 4);
		}
	}
}

void func_11(var uParam0)
{
	int iVar0;
	if (!__LIB_0__::func_75(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_871(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
	{
		__LIB_1__::func_283(&(uParam0->f_2585), 1);
		iVar0 = __LIB_9__::func_762(uParam0);
		if (iVar0 != 3)
		{
			if ((iVar0 == 7 || iVar0 == 5) || iVar0 == 6)
			{
				func_87(uParam0);
				__LIB_12__::func_964(uParam0);
			}
			__LIB_12__::func_837(uParam0, iVar0);
		}
	}
}

void func_12(var uParam0)
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
	func_92(uParam0);
	if (func_93(uParam0))
	{
		func_87(uParam0);
		iVar0 = func_94(uParam0);
		if (iVar0 == 5)
		{
			__LIB_12__::func_646(uParam0, 4);
			func_14(uParam0);
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
			func_15(uParam0);
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
		__LIB_12__::func_964(uParam0);
		__LIB_12__::func_837(uParam0, iVar0);
	}
}

void func_13(var uParam0)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 8192))
	{
		return;
	}
	__LIB_12__::func_837(uParam0, func_97(uParam0, __LIB_12__::func_767(uParam0)));
	if (uParam0->f_177 != 2)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			GRAPHICS::_0x297B72E2AF094742(6);
		}
		if (uParam0->f_177 == 7 || uParam0->f_177 == 8)
		{
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
			HUD::DISPLAY_HUD(true);
			MAP::DISPLAY_RADAR(true);
		}
		__LIB_1__::func_164(0);
	}
	else if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
}

void func_14(var uParam0)
{
	if (func_99(uParam0))
	{
		func_15(uParam0);
		__LIB_12__::func_837(uParam0, 6);
	}
}

void func_15(var uParam0)
{
	int iVar0;
	func_100(uParam0);
	if (__LIB_12__::func_647(&(uParam0->f_2575)))
	{
		if (func_102(uParam0))
		{
			__LIB_12__::func_966(uParam0, 1);
			iVar0 = __LIB_10__::func_568(uParam0);
			__LIB_12__::func_837(uParam0, iVar0);
		}
	}
	else
	{
		__LIB_0__::func_8(&(uParam0->f_172), 16);
		__LIB_12__::func_966(uParam0, 0);
		iVar0 = __LIB_10__::func_568(uParam0);
		__LIB_12__::func_837(uParam0, iVar0);
	}
}

void func_16(var uParam0)
{
	int iVar0;
	if (func_105(uParam0))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 262144))
	{
		__LIB_19__::func_310(uParam0, __LIB_0__::func_58(uParam0));
	}
	iVar0 = func_108(uParam0);
	if (iVar0 == 5)
	{
		__LIB_12__::func_646(uParam0, 7);
		func_14(uParam0);
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
		func_15(uParam0);
	}
	__LIB_12__::func_837(uParam0, iVar0);
}

void func_17(var uParam0)
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
			func_129(uParam0->f_174, 1, 1, 0, 1, 1, bVar3);
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
				bVar12 = true;
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
			func_132();
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
	func_73(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 32768) || __LIB_12__::func_738(uParam0))
	{
		func_23(uParam0);
	}
	__LIB_12__::func_837(uParam0, 10);
}

void func_18(var uParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
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
	else
	{
		bVar0 = false;
		if (__LIB_0__::func_1(uParam0->f_172, 134217728))
		{
			bVar0 = true;
		}
		if (!CAM::IS_SCREEN_FADED_OUT() || __LIB_0__::func_1(uParam0->f_172, 134217728))
		{
			if (!__LIB_0__::func_75(&(uParam0->f_2597)))
			{
				__LIB_1__::func_283(&(uParam0->f_2597), 0);
			}
			__LIB_0__::func_11(uParam0);
			bVar1 = CAM::_0x139EFB0A71DD9011();
			bVar2 = CAM::_0x7CE9DC58E3E4755F();
			if (!__LIB_0__::func_1(uParam0->f_172, 2097152) && !bVar2)
			{
				if (!bVar1)
				{
					__LIB_1__::func_193(1, 1);
					return;
				}
				else
				{
					__LIB_0__::func_7(&(uParam0->f_172), 2097152);
				}
			}
			if (bVar2)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
				__LIB_0__::func_8(&(uParam0->f_172), 134217728);
			}
			else if (__LIB_1__::func_871(&(uParam0->f_2597)) >= 2500)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
				__LIB_0__::func_8(&(uParam0->f_172), 134217728);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				return;
			}
			else if (__LIB_0__::func_1(uParam0->f_172, 134217728))
			{
				return;
			}
		}
		iVar3 = 1;
		if (__LIB_0__::func_1(uParam0->f_172, 16777216))
		{
			iVar3 = 2;
			if (PED::GET_PED_CONFIG_FLAG(Global_35, 11, true))
			{
				StringCopy(&(uParam0->f_2578), "PLAYER_KO", 24);
			}
			else
			{
				StringCopy(&(uParam0->f_2578), "PLAYER_DEAD", 24);
			}
		}
		else if (__LIB_0__::func_1(uParam0->f_172, 33554432))
		{
			iVar3 = 6;
			StringCopy(&(uParam0->f_2578), "PLAYER_ARRESTED", 24);
		}
		__LIB_1__::func_611(Global_1347702[uParam0->f_174 /*49*/].f_15, iVar3, &(uParam0->f_2578), __LIB_12__::func_793(uParam0), 0, bVar0);
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
	bParam1 = true;
	if (__LIB_0__::func_1(uParam0->f_172, 50331648))
	{
		bParam1 = true;
	}
	else
	{
		func_73(uParam0);
	}
	if (bParam1)
	{
		func_23(uParam0);
	}
	else
	{
		__LIB_12__::func_837(uParam0, 10);
	}
}

void func_19(var uParam0)
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
			func_23(uParam0);
			return;
		}
	}
	if (__LIB_0__::func_0(uParam0) && __LIB_10__::func_265())
	{
		__LIB_0__::func_11(uParam0);
		func_23(uParam0);
	}
	else if (!__LIB_0__::func_75(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_871(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
	{
		__LIB_1__::func_283(&(uParam0->f_2585), 1);
		if (func_151(uParam0))
		{
			__LIB_12__::func_837(uParam0, 11);
		}
	}
}

void func_23(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	func_160(uParam0);
	__LIB_3__::func_319(uParam0->f_751);
	__LIB_12__::func_739(uParam0);
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
		__LIB_12__::func_784(iVar1, 1, -1082130432 /* Float: -1f */, 1, 1, bVar2, 0);
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

void func_37(var uParam0)
{
	__LIB_12__::func_658(uParam0, 1);
	__LIB_12__::func_659(uParam0, 38);
	vLocal_222 = { 2011.776f, -504.0132f, 40.983f };
	fLocal_225 = 79.4969f;
	func_188();
	func_189();
	func_190();
	func_191();
	func_192();
	Local_248[0 /*5*/].f_1 = { 2088.362f, -384.0935f, 42.241f };
	Local_248[0 /*5*/].f_4 = 4f;
	Local_272[0 /*7*/].f_1 = { 2106.181f, -297.7175f, 40.7996f };
	Local_272[0 /*7*/].f_4 = 90.7705f;
	Local_272[1 /*7*/].f_1 = { 2104.908f, -299.4323f, 40.7551f };
	Local_272[1 /*7*/].f_4 = 351.6028f;
	Local_290.f_1 = { 2092.527f, -393.9658f, 42.175f };
	Local_290.f_4 = 220.531f;
	Local_309 = { 2077.596f, -318.6485f, 40.5253f };
	Local_309.f_3 = 321f;
	Local_309.f_4 = 2;
	Local_309.f_5 = 3;
	Local_309.f_6 = 0;
	vLocal_317 = { 2073.99f, -323.849f, 40.5534f };
	vLocal_317.f_3 = 301.7656f;
	vLocal_317.f_4 = 2;
	vLocal_317.f_5 = 3;
	vLocal_317.f_6 = 0;
	PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 883682516 /* GXTEntry: "Old Cajun" */);
	__LIB_4__::func_228(&uLocal_191);
	func_194();
}

void func_43(var uParam0)
{
	__LIB_12__::func_867(uParam0, joaat("G_M_M_UNISWAMP_01"), 7);
	__LIB_12__::func_867(uParam0, joaat("A_M_M_UNICORPSE_01"), 7);
	__LIB_12__::func_867(uParam0, iLocal_305, 7);
	__LIB_12__::func_867(uParam0, iLocal_304, 7);
	__LIB_12__::func_867(uParam0, joaat("A_M_M_UNICOACHGUARDS_01"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_NOOSE01X"), 7);
	__LIB_12__::func_867(uParam0, joaat("A_C_ALLIGATOR_01"), 7);
	__LIB_12__::func_867(uParam0, iLocal_466, 7);
	__LIB_12__::func_867(uParam0, joaat("P_BONESSKELETON02X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_BODYPARTHEAD02X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_TORCH_02X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_BONESSKELETON03X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_CS_ARROW01X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_CS_PELT_MED_MUSKRAT"), 7);
	__LIB_13__::func_55(uParam0, sLocal_268, 7);
	__LIB_13__::func_55(uParam0, "AI_DAMAGE@DEAD@BASE", 7);
	__LIB_13__::func_55(uParam0, sLocal_270, 7);
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_265);
	__LIB_12__::func_908(uParam0, 0);
}

bool func_54(var uParam0)
{
	int iVar0;
	bool bVar1;
	switch (__LIB_5__::func_381(&iVar0))
	{
		case 1:
			StringCopy(&(uParam0->f_2578), "", 24);
			func_18(uParam0, 0);
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

struct<4> func_62(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
			Var1 = { 2011.074f, -501.6903f, 41.0153f };
			Var1.f_3 = 198.3678f;
			break;
		case 1:
			Var1 = { 2086.898f, -410.2146f, 42.4097f };
			Var1.f_3 = 359.4679f;
			break;
		case 3:
			Var1 = { 2074.711f, -315.133f, 40.8731f };
			Var1.f_3 = 322.7656f;
			break;
		case 4:
			Var1 = { 2102.385f, -287.1144f, 41.9973f };
			Var1.f_3 = 175.7605f;
			break;
		case 5:
			Var1 = { 2102.385f, -287.1144f, 41.9973f };
			Var1.f_3 = 175.3901f;
			break;
	}
	return Var1;
}

bool func_63(var uParam0)
{
	return func_209(*uParam0, uParam0->f_3);
}

bool func_65(var uParam0)
{
	if (__LIB_0__::func_255(iLocal_221, 0))
	{
		StringCopy(&(uParam0->f_2578), "CRW5_F_OLDDIE", 24);
		func_211(&iLocal_221);
		return true;
	}
	if (iLocal_974 >= 11)
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(Global_35, iLocal_221, 120f, 120f, 120f, false, true, 0))
		{
			StringCopy(&(uParam0->f_2578), "CRW5_F_ABAND", 24);
			return true;
		}
	}
	else if (func_212(uParam0, 8, iLocal_221, 45f, 35f, 25f))
	{
		StringCopy(&(uParam0->f_2578), "CRW5_F_ABAND", 24);
		return true;
	}
	return false;
}

bool func_71(var uParam0)
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
	if (func_215(uParam0->f_174))
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
	if (func_224(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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

void func_73(var uParam0)
{
	bool bVar0;
	__LIB_1__::func_752();
	func_229(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		bVar0 = true;
		if (__LIB_12__::func_644(uParam0) == 1)
		{
			bVar0 = false;
		}
		else if (__LIB_12__::func_639(uParam0, 128) && __LIB_4__::func_512())
		{
			__LIB_0__::func_869(0);
		}
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
	__LIB_12__::func_739(uParam0);
	__LIB_1__::func_564(0);
	__LIB_12__::func_966(uParam0, 0);
	__LIB_12__::func_918(uParam0, 4);
	__LIB_0__::func_8(&(uParam0->f_172), 8);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 1024);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
	__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 4);
	__LIB_0__::func_37(&(uParam0->f_2585));
	__LIB_12__::func_794(uParam0);
}

bool func_86(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		return true;
	}
	if (__LIB_12__::func_924(uParam0) && func_269(uParam0))
	{
		__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
		return true;
	}
	return false;
}

void func_87(var uParam0)
{
	bool bVar0;
	struct<4> Var1;
	int iVar5;
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
	if (Global_1347702[uParam0->f_174 /*49*/].f_12 & 67108864 == 0)
	{
		if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(__LIB_3__::func_734(uParam0->f_174), __LIB_3__::func_733(uParam0->f_174)))
		{
			__LIB_3__::func_727(uParam0->f_174, 128);
		}
		else
		{
			__LIB_3__::func_735(uParam0->f_174, 128);
		}
		if (Global_1347702[uParam0->f_174 /*49*/].f_12 & 512 != 0)
		{
			if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(__LIB_3__::func_734(uParam0->f_174), __LIB_3__::func_733(uParam0->f_174)))
			{
				__LIB_7__::func_602(uParam0->f_174);
				__LIB_10__::func_822(uParam0->f_174);
			}
		}
		else
		{
			__LIB_10__::func_694(Global_1347702[uParam0->f_174 /*49*/]);
			__LIB_7__::func_602(uParam0->f_174);
		}
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(__LIB_3__::func_734(uParam0->f_174), __LIB_3__::func_733(uParam0->f_174)))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(__LIB_3__::func_734(uParam0->f_174), __LIB_3__::func_733(uParam0->f_174), 0, "");
		}
	}
	if (!__LIB_1__::func_44(Global_1347702[uParam0->f_174 /*49*/].f_15))
	{
		if (!__LIB_0__::func_702(Global_1347702[uParam0->f_174 /*49*/].f_15))
		{
			__LIB_1__::func_298(Global_1347702[uParam0->f_174 /*49*/].f_15, 1);
		}
		__LIB_1__::func_821(Global_1347702[uParam0->f_174 /*49*/].f_15, 1, 1);
		__LIB_0__::func_7(&Global_1935630, 8);
	}
	bVar0 = true;
	if (__LIB_12__::func_639(uParam0, 64))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		__LIB_11__::func_382(uParam0->f_174, 0);
	}
	__LIB_12__::func_667(uParam0);
	__LIB_0__::func_7(&(uParam0->f_172), 8);
	if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 8192))
	{
		__LIB_12__::func_868(0);
		LAW::_0x55F37F5F3F2475E1();
		LAW::_0x292AD61A33A7A485();
		__LIB_0__::func_112(1, 16384, 1);
		__LIB_0__::func_7(&(uParam0->f_172), 67108864);
	}
	__LIB_5__::func_109(uParam0, 1, 0);
	__LIB_1__::func_723(1);
	__LIB_1__::func_564(1);
	__LIB_12__::func_770();
	__LIB_12__::func_649(uParam0);
	__LIB_12__::func_650(uParam0->f_174);
	__LIB_12__::func_651(uParam0->f_174);
	__LIB_12__::func_898(uParam0);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	__LIB_1__::func_716(1);
	if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), false);
	}
	if (__LIB_12__::func_882(uParam0))
	{
		__LIB_0__::func_7(&(uParam0->f_172), 256);
	}
	if (__LIB_0__::func_1(uParam0->f_172, 8388608) || !__LIB_0__::func_1(uParam0->f_172, 256))
	{
		__LIB_12__::func_918(uParam0, 2);
	}
	MISC::_0x1096603B519C905F(&(Global_1347702[uParam0->f_174 /*49*/].f_3));
	HUD::SET_MISSION_NAME(true, &(Global_1347702[uParam0->f_174 /*49*/].f_3));
	AUDIO::_0xA6A3A3F96B8B030E();
	AUDIO::_0x33D51F801CB16E4F();
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	__LIB_0__::func_11(uParam0);
	if (uParam0->f_174 != __LIB_10__::func_698())
	{
		if (!__LIB_0__::func_13(32768))
		{
			Var1 = { func_62(0) };
			if (!func_63(&Var1))
			{
				__LIB_12__::func_638(uParam0, 32);
			}
		}
	}
	iVar5 = 0;
	if (__LIB_12__::func_871(uParam0))
	{
		iVar5 = __LIB_12__::func_767(uParam0);
	}
	TELEMETRY::_TELEMETRY_MISSION_STARTED(&(Global_1347702[uParam0->f_174 /*49*/].f_3), 0, iVar5, __LIB_12__::func_639(uParam0, 64));
	if (uParam0->f_174 != __LIB_10__::func_698())
	{
		__LIB_12__::func_997(uParam0, func_62(0), func_62(1), 0, 1, 0);
	}
}

void func_92(var uParam0)
{
	func_288();
}

bool func_93(var uParam0)
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
		__LIB_19__::func_310(uParam0, bVar0);
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
		if (uParam0->f_171 != 0 || func_289(uParam0))
		{
			if (__LIB_12__::func_884(uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_94(var uParam0)
{
	func_288();
	return 7;
}

int func_97(var uParam0, int iParam1)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam1;
	Var1 = { func_62(iParam1) };
	FIRE::STOP_FIRE_IN_RANGE(vLocal_298, 1500f);
	if (!bLocal_1158)
	{
		if (iVar0 != 3)
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var1, Var1.f_3, true, false, true);
		}
		bLocal_1158 = true;
	}
	CLOCK::SET_CLOCK_TIME(1, 30, 0);
	MISC::_SET_WEATHER_TYPE(joaat("FOG"), false, true, true, 5f, false);
	if (iVar0 > 0)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_995[6 /*5*/]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_995[6 /*5*/]);
		}
	}
	switch (iVar0)
	{
		case 0:
			if (__LIB_4__::func_511())
			{
				__LIB_12__::func_997(uParam0, func_62(0), func_62(1), 0, 1, 0);
			}
			if (!bLocal_973)
			{
				func_293(&uLocal_959, Var1, Var1.f_3, 0, 0, 0, 1, 1, 0, 1, 1);
				bLocal_973 = true;
			}
			if (!__LIB_10__::func_926(&uLocal_959))
			{
				return 2;
			}
			if (!func_295(0))
			{
				return 2;
			}
			AUDIO::TRIGGER_MUSIC_EVENT("CRAW2_RESTART_1");
			func_296(2);
			if (!__LIB_0__::func_75(&uLocal_1160))
			{
				__LIB_1__::func_148(&uLocal_1160);
			}
			else if (__LIB_0__::func_264(&uLocal_1160) < 3f)
			{
				return 2;
			}
			if (func_298(6, 0, func_1(25)))
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				func_299(64);
				bLocal_1158 = false;
				return 7;
			}
			return 2;
		case 1:
			if (!bLocal_973)
			{
				func_293(&uLocal_959, Var1, Var1.f_3, 0, 0, 0, 1, 1, 0, 1, 1);
				bLocal_973 = true;
			}
			if (!__LIB_10__::func_926(&uLocal_959))
			{
				return 2;
			}
			bLocal_244 = true;
			if (__LIB_4__::func_511())
			{
				__LIB_12__::func_997(uParam0, func_62(1), func_62(3), 1, 3, 0);
			}
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_221, 2085.583f, -405.927f, 42.4422f, 357.7743f, true, false, true);
			if (!func_295(0))
			{
				return 2;
			}
			if (!func_300(4, 0, 0))
			{
				return 2;
			}
			AUDIO::TRIGGER_MUSIC_EVENT("CRAW2_RESTART_2");
			FIRE::STOP_FIRE_IN_RANGE(Local_272[0 /*7*/].f_1, 30f);
			func_296(6);
			func_299(64);
			CAM::DO_SCREEN_FADE_IN(500);
			return 7;
		case 2:
			if (!bLocal_973)
			{
				func_293(&uLocal_959, Var1, Var1.f_3, 0, 0, 0, 1, 1, 0, 1, 1);
				bLocal_973 = true;
			}
			if (!__LIB_10__::func_926(&uLocal_959))
			{
				return 2;
			}
			bLocal_244 = true;
			__LIB_12__::func_997(uParam0, func_62(2), func_62(3), 2, 3, 0);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, 2079.579f, -374.7f, 41.7981f, 357.2722f, true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_221, 2078.155f, -373.1442f, 41.7f, 313.2088f, true, false, true);
			if (!func_301(uParam0))
			{
				return 2;
			}
			if (!func_295(0))
			{
				return 2;
			}
			func_296(8);
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			return 7;
		case 3:
			if (__LIB_4__::func_511())
			{
				__LIB_12__::func_997(uParam0, func_62(3), func_62(4), 3, 4, 0);
			}
			if (!bLocal_973)
			{
				func_293(&uLocal_959, Var1, Var1.f_3, 0, 0, 0, 1, 1, 0, 1, 1);
				bLocal_973 = true;
			}
			if (!__LIB_10__::func_926(&uLocal_959))
			{
				return 2;
			}
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_221, 2077.046f, -319.9485f, 40.5253f, 313.2088f, true, false, true);
			if (!func_301(uParam0))
			{
				return 2;
			}
			if (!func_295(0))
			{
				return 2;
			}
			if (!bLocal_1159)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
				bLocal_1159 = true;
			}
			if (!__LIB_0__::func_163(Global_35, -1959848946))
			{
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Global_35, Var1, 3000, 0, 0, 1, 0, iLocal_316, 1, 0, 0);
			}
			if (!PED::IS_PED_IN_COVER(Global_35, false, false))
			{
				return 2;
			}
			func_303(0);
			AUDIO::TRIGGER_MUSIC_EVENT("CRAW2_RESTART_3");
			FIRE::STOP_FIRE_IN_RANGE(vLocal_239, 15f);
			func_299(64);
			PED::_0x89F5E7ADECCCB49C(iLocal_221, "normal");
			PED::_0x923583741DC87BCE(iLocal_221, "Default");
			CAM::SET_GAMEPLAY_COORD_HINT(vLocal_239, 100, 1, 2000, 0);
			func_304(14);
			func_296(12);
			WEAPON::REMOVE_WEAPON_FROM_PED(iLocal_221, joaat("WEAPON_MELEE_LANTERN"), true, -142743235);
			WEAPON::REMOVE_WEAPON_FROM_PED(iLocal_221, joaat("WEAPON_MELEE_DAVY_LANTERN"), true, -142743235);
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			__LIB_7__::func_448(Global_1347702[56 /*49*/].f_15, 0);
			return 7;
		case 4:
			if (__LIB_4__::func_511())
			{
				__LIB_12__::func_997(uParam0, func_62(4), func_62(5), 4, 5, 0);
			}
			if (!bLocal_973)
			{
				func_293(&uLocal_959, Var1, Var1.f_3, 0, 0, 0, 1, 1, 0, 1, 1);
				bLocal_973 = true;
			}
			if (!__LIB_10__::func_926(&uLocal_959))
			{
				return 2;
			}
			if (!func_301(uParam0))
			{
				return 2;
			}
			if (!func_295(0))
			{
				return 2;
			}
			if (!func_306(0))
			{
				return 2;
			}
			FIRE::STOP_FIRE_IN_RANGE(vLocal_239, 15f);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_221))
			{
				if (!__LIB_0__::func_266(iLocal_221, vLocal_239, 2f, 1, 1))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_221, vLocal_239, 312.791f, true, false, true);
				}
			}
			func_299(64);
			PED::_0x89F5E7ADECCCB49C(iLocal_221, "normal");
			PED::_0x923583741DC87BCE(iLocal_221, "Default");
			func_304(18);
			func_308(9);
			func_299(2);
			WEAPON::_0x94A3C1B804D291EC(iLocal_221, 1, 1, 1, 1);
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_221, joaat("WEAPON_UNARMED"), true, 1, true, false);
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_221, joaat("WEAPON_REVOLVER_CATTLEMAN"), true, 0, false, false);
			WEAPON::REMOVE_WEAPON_FROM_PED(iLocal_221, joaat("WEAPON_MELEE_LANTERN"), true, -142743235);
			WEAPON::REMOVE_WEAPON_FROM_PED(iLocal_221, joaat("WEAPON_MELEE_DAVY_LANTERN"), true, -142743235);
			func_296(14);
			AUDIO::TRIGGER_MUSIC_EVENT("CRAW2_RESTART_4");
			vLocal_18[21 /*3*/].f_1 = 1;
			if (__LIB_5__::func_297(Global_1347702[56 /*49*/].f_15) > 0)
			{
				__LIB_1__::func_864(Local_272[0 /*7*/], 1, 0);
			}
			if (!func_298(5, 1, func_1(13)))
			{
				return 2;
			}
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			return 7;
		case 5:
			func_306(0);
			func_306(1);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_221, vLocal_239, 312.791f, true, false, true);
			__LIB_13__::func_105(1, 1);
			func_299(64);
			__LIB_1__::func_766(iLocal_221, joaat("WEAPON_UNARMED"), 1, 0, 1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_221, joaat("WEAPON_UNARMED"), true, 1, false, false);
			__LIB_1__::func_766(iLocal_221, joaat("WEAPON_UNARMED"), 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_221, joaat("WEAPON_UNARMED"), true, 0, false, false);
			func_296(17);
			func_304(21);
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			return 7;
		default:
			break;
	}
	return 2;
}

bool func_99(var uParam0)
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
		if (!__LIB_12__::func_925(uParam0))
		{
			if ((__LIB_0__::func_1(uParam0->f_172, 8192) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_751)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_751, false))
			{
				if (__LIB_0__::func_1(uParam0->f_172, 8388608) || func_86(uParam0))
				{
					__LIB_12__::func_918(uParam0, 2);
					if (!__LIB_0__::func_1(uParam0->f_172, 16))
					{
						__LIB_0__::func_11(uParam0);
					}
				}
			}
			return false;
		}
	}
	else if (__LIB_0__::func_1(uParam0->f_172, 262144) && !__LIB_0__::func_1(uParam0->f_172, 256))
	{
		__LIB_19__::func_310(uParam0, 0);
		if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
		{
			return false;
		}
	}
	else
	{
		__LIB_12__::func_668();
		__LIB_12__::func_669(uParam0);
		if (!__LIB_13__::func_6(uParam0))
		{
			return false;
		}
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 1))
	{
	}
	return true;
}

void func_100(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 2048))
	{
		return;
	}
	if (__LIB_12__::func_647(&(uParam0->f_2575)))
	{
		__LIB_12__::func_912(&(uParam0->f_206), &(uParam0->f_753));
		if (uParam0->f_176 == 4 && !__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 512))
		{
			__LIB_12__::func_742(uParam0, 0);
		}
	}
	if (__LIB_0__::func_1(uParam0->f_172, 1024) && uParam0->f_176 == 4)
	{
		__LIB_12__::func_997(uParam0, func_62(0), func_62(1), 0, 1, 1);
	}
	__LIB_0__::func_8(&(uParam0->f_172), 512);
	if (uParam0->f_176 == 4)
	{
		if (__LIB_11__::func_394(Global_35))
		{
			if (__LIB_12__::func_771())
			{
				__LIB_1__::func_240(42, 1);
			}
		}
	}
	MISC::_0xA565FAC215CBC77D();
	SCRIPTS::SHUTDOWN_LOADING_SCREEN();
	__LIB_0__::func_7(&(uParam0->f_172), 2048);
}

int func_102(var uParam0)
{
	struct<4> Var0;
	MemCopy(&Var0, {uParam0->f_2575}, 4);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		return 1;
	}
	return func_325(Var0, &(uParam0->f_206), uParam0);
}

bool func_105(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 256) && !__LIB_0__::func_1(uParam0->f_172, 1024))
	{
		if (!__LIB_12__::func_925(uParam0))
		{
			if (__LIB_0__::func_1(uParam0->f_172, 512) && __LIB_0__::func_1(uParam0->f_172, 8192))
			{
				if (func_86(uParam0))
				{
					if (!__LIB_0__::func_1(uParam0->f_172, 16))
					{
						__LIB_0__::func_11(uParam0);
					}
				}
			}
			return true;
		}
		else
		{
			if (__LIB_0__::func_1(uParam0->f_172, 1024) && uParam0->f_176 == 4)
			{
				__LIB_12__::func_997(uParam0, func_62(0), func_62(1), 0, 1, 1);
			}
			return false;
		}
	}
	return false;
}

int func_108(var uParam0)
{
	if (!func_331(2097152))
	{
		func_332(0);
		func_299(2097152);
		__LIB_1__::func_723(1);
		__LIB_3__::func_924(&(Local_248[0 /*5*/]), Local_248[0 /*5*/].f_1, Local_248[0 /*5*/].f_4, 0, 0);
	}
	PED::SET_PED_RESET_FLAG(iLocal_221, 296, true);
	__LIB_1__::func_538(1);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	func_288();
	if (iLocal_974 < 11)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1041))
		{
			iLocal_1041 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iLocal_221, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1041))
		{
			if (bLocal_244)
			{
				GRAPHICS::_SET_LIGHTS_INTENSITY_FOR_ENTITY(iLocal_1041, 5f);
			}
			else
			{
				GRAPHICS::_SET_LIGHTS_INTENSITY_FOR_ENTITY(iLocal_1041, 0f);
			}
		}
	}
	func_335(uParam0);
	func_336(uParam0);
	func_337();
	func_338();
	func_339();
	func_340(uParam0);
	func_341(uParam0);
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	__LIB_9__::func_827(5, 0, 0, 0);
	bLocal_243 = true;
	func_343(uParam0);
	func_344();
	switch (iLocal_974)
	{
		case 2:
			if (func_345(uParam0))
			{
				func_296(3);
			}
			break;
		case 3:
			if (func_346(uParam0))
			{
				func_296(4);
			}
			break;
		case 4:
			if (func_347(uParam0))
			{
				func_296(5);
			}
			break;
		case 5:
			if (func_348(uParam0))
			{
				func_296(6);
			}
			break;
		case 6:
			if (func_349(uParam0))
			{
				func_296(7);
			}
			break;
		case 7:
			if (func_350(uParam0))
			{
				func_296(8);
			}
			break;
		case 8:
			if (func_351(uParam0))
			{
				func_296(9);
			}
			break;
		case 9:
			if (func_352(uParam0))
			{
				func_296(11);
			}
			break;
		case 11:
			if (func_353(uParam0))
			{
				func_296(12);
			}
			break;
		case 12:
			if (func_354(uParam0))
			{
				func_296(13);
			}
			break;
		case 13:
			if (func_355(uParam0))
			{
				func_296(14);
			}
			func_356();
			break;
		case 14:
			if (func_357(uParam0))
			{
				func_296(15);
			}
			break;
		case 15:
			if (func_358(uParam0))
			{
				func_296(16);
			}
			break;
		case 16:
			if (func_359(uParam0))
			{
				func_296(17);
			}
			break;
		case 17:
			return 8;
	}
	return 7;
}

void func_129(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		func_395(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		func_396(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	__LIB_10__::func_833(iParam0);
}

void func_132()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	__LIB_0__::func_319(4112);
	__LIB_0__::func_320(6);
	vVar2 = { func_399(Global_2621440[0 /*12066*/].f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	__LIB_0__::func_321(vVar2, uVar1, uVar0, 0);
	__LIB_0__::func_322(vVar2);
	Global_40.f_9.f_15 = __LIB_1__::func_447(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

bool func_151(var uParam0)
{
	int iVar0;
	struct<28> Var1;
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		if (func_423(8, 1064514355 /* Float: 0.95f */) || ANIMSCENE::_0x005E6F28DD7ED58D(Local_995[8 /*5*/], "EXCONFEDINFORMANT"))
		{
			func_304(21);
		}
		func_337();
		if (!bLocal_1157)
		{
			if (!vLocal_18[44 /*3*/].f_1 && !vLocal_18[45 /*3*/].f_1)
			{
				iVar0 = func_424(&iLocal_221, &iLocal_838, 5f, &Local_859, 0, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
				if (iVar0 != -1)
				{
					bLocal_1157 = true;
					func_425();
					__LIB_12__::func_938(iLocal_221);
				}
			}
		}
		if (bLocal_1157)
		{
			if (!vLocal_18[42 /*3*/].f_1 && !vLocal_18[43 /*3*/].f_1)
			{
				if (__LIB_0__::func_113())
				{
					if (func_427(uParam0, &(vLocal_18[42 /*3*/]), &Global_35, 1103626240 /* Float: 25f */, 1108082688 /* Float: 35f */, 0, 0, 0))
					{
						PED::SET_PED_CONFIG_FLAG(iLocal_221, 301, false);
						__LIB_3__::func_157(&(Local_859[0 /*17*/]), "CRW5_C_GREE", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
						bLocal_1157 = false;
					}
				}
				else if (func_427(uParam0, &(vLocal_18[43 /*3*/]), &Global_35, 1103626240 /* Float: 25f */, 1108082688 /* Float: 35f */, 0, 0, 0))
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_221, 301, false);
					__LIB_3__::func_157(&(Local_859[0 /*17*/]), "CRW5_C_GREE", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					bLocal_1157 = false;
				}
			}
			if (__LIB_0__::func_113())
			{
				if (func_427(uParam0, &(vLocal_18[44 /*3*/]), &Global_35, 1103626240 /* Float: 25f */, 1108082688 /* Float: 35f */, 0, 0, 0))
				{
					func_425();
					__LIB_12__::func_938(iLocal_221);
				}
			}
			else if (func_427(uParam0, &(vLocal_18[45 /*3*/]), &Global_35, 1103626240 /* Float: 25f */, 1108082688 /* Float: 35f */, 0, 0, 0))
			{
				func_425();
				__LIB_12__::func_938(iLocal_221);
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_221))
	{
		Var1.f_8 = -1;
		Var1.f_17 = 1097859072;
		Var1.f_18 = 1000;
		Var1.f_19 = 1067450368;
		Var1.f_20 = 5000;
		Var1.f_21 = 42;
		Var1.f_22 = 1103626240;
		Var1.f_23 = 1077936128;
		Var1.f_24 = 1106247680;
		Var1.f_25 = 1103101952;
		Var1.f_26 = 1097859072;
		Var1.f_27 = 1103626240;
		__LIB_4__::func_228(&Var1);
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_221, Global_35, 1, 1) || __LIB_2__::func_875(Global_35, iLocal_221, &Var1))
		{
			func_304(22);
		}
		if (__LIB_0__::func_48(Global_35, iLocal_221, 50f, 1))
		{
			return false;
		}
		else if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_221))
		{
			__LIB_2__::func_426(&iLocal_221);
		}
	}
	if (__LIB_0__::func_266(Global_35, vLocal_222, 75f, 1, 1))
	{
		return false;
	}
	return true;
}

void func_160(var uParam0)
{
	__LIB_2__::func_788(&iLocal_221, 1, 0, 1);
	func_431();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1041))
	{
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iLocal_1041);
	}
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_297);
	__LIB_0__::func_400(joaat("RC_CREEPY"));
	__LIB_0__::func_400(112266538);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_264))
	{
		TASK::_DELETE_SCENARIO_POINT(iLocal_264);
	}
}

void func_188()
{
	Local_467[0 /*41*/].f_1 = { 2099.631f, -297.4348f, 40.8195f };
	Local_467[1 /*41*/].f_1 = { 2097.119f, -288.1024f, 40.8155f };
	Local_467[2 /*41*/].f_1 = { 2103.751f, -283.4896f, 41.9974f };
	Local_467[3 /*41*/].f_1 = { 2106.614f, -282.6554f, 41.8524f };
	Local_467[4 /*41*/].f_1 = { 2109.279f, -286.6492f, 40.9217f };
	Local_467[0 /*41*/].f_4 = 172.1033f;
	Local_467[1 /*41*/].f_4 = 142.6194f;
	Local_467[2 /*41*/].f_4 = 120.8184f;
	Local_467[3 /*41*/].f_4 = 358.209f;
	Local_467[4 /*41*/].f_4 = 288.5259f;
	Local_467[0 /*41*/].f_6 = joaat("WEAPON_BOW");
	Local_467[1 /*41*/].f_6 = joaat("WEAPON_BOW");
	Local_467[2 /*41*/].f_6 = joaat("WEAPON_MELEE_MACHETE");
	Local_467[3 /*41*/].f_6 = joaat("WEAPON_MELEE_HATCHET_MELEEONLY");
	Local_467[4 /*41*/].f_6 = joaat("WEAPON_MELEE_HATCHET_MELEEONLY");
	Local_467[0 /*41*/].f_7 = joaat("WEAPON_UNARMED");
	Local_467[1 /*41*/].f_7 = joaat("WEAPON_UNARMED");
	Local_467[2 /*41*/].f_7 = joaat("WEAPON_UNARMED");
	Local_467[3 /*41*/].f_7 = joaat("WEAPON_UNARMED");
	Local_467[4 /*41*/].f_7 = joaat("WEAPON_UNARMED");
	Local_467[1 /*41*/].f_14 = { 2097.119f, -288.1024f, 40.8155f };
	Local_467[2 /*41*/].f_14 = { 2103.069f, -277.6502f, 41.9002f };
	Local_467[4 /*41*/].f_14 = { 2114.126f, -286.131f, 40.7997f };
	Local_467[0 /*41*/].f_17 = { 2101.631f, -294.4348f, 40.8195f };
	Local_467[0 /*41*/].f_20 = { 2095.679f, -298.8977f, 40.6788f };
	Local_467[0 /*41*/].f_14 = { 2099.452f, -301.2965f, 40.7064f };
	Local_467[3 /*41*/].f_17 = { 2107.069f, -279.1567f, 42.018f };
	Local_467[3 /*41*/].f_20 = { 2105.683f, -290.3537f, 41.9414f };
	Local_467[3 /*41*/].f_14 = { 2110.198f, -294.68f, 40.7692f };
	Local_467[5 /*41*/].f_1 = { 2094.009f, -334.1736f, 40.5767f };
	Local_467[7 /*41*/].f_1 = { 2084.845f, -314.565f, 40.4342f };
	Local_467[8 /*41*/].f_1 = { 2108.604f, -336.1612f, 40.5531f };
	Local_467[6 /*41*/].f_1 = { 2125.471f, -304.685f, 41.0455f };
	Local_467[5 /*41*/].f_4 = 28.0662f;
	Local_467[6 /*41*/].f_4 = 28.0662f;
	Local_467[7 /*41*/].f_4 = 28.0662f;
	Local_467[8 /*41*/].f_4 = 28.0662f;
	Local_467[5 /*41*/].f_6 = joaat("WEAPON_BOW");
	Local_467[6 /*41*/].f_6 = joaat("WEAPON_MELEE_HATCHET_MELEEONLY");
	Local_467[7 /*41*/].f_6 = joaat("WEAPON_MELEE_MACHETE");
	Local_467[8 /*41*/].f_6 = joaat("WEAPON_BOW");
	Local_467[8 /*41*/].f_40 = 0;
	Local_467[5 /*41*/].f_7 = joaat("WEAPON_UNARMED");
	Local_467[6 /*41*/].f_7 = joaat("WEAPON_UNARMED");
	Local_467[7 /*41*/].f_7 = joaat("WEAPON_UNARMED");
	Local_467[8 /*41*/].f_7 = joaat("WEAPON_UNARMED");
	Local_467[5 /*41*/].f_14 = { 2088.619f, -307.3549f, 40.4804f };
	Local_467[6 /*41*/].f_14 = { vLocal_239 };
	Local_467[7 /*41*/].f_14 = { 2098.355f, -290.0632f, 40.709f };
	Local_467[8 /*41*/].f_14 = { 2106.123f, -303.5372f, 40.4169f };
}

void func_189()
{
	int iVar0;
	vLocal_160[0 /*3*/] = "CRW5_O_FOL";
	vLocal_160[3 /*3*/] = "CRW5_O_RET";
	vLocal_160[1 /*3*/] = "CRW5_O_HELPOLD";
	vLocal_160[2 /*3*/] = "CRW5_O_FOL";
	vLocal_160[4 /*3*/] = "CRW5_O_KILLSG";
	vLocal_160[5 /*3*/] = "CRW5_O_PROTECT";
	vLocal_160[6 /*3*/] = "CRW5_O_FREEOLD";
	vLocal_160[7 /*3*/] = "CRW5_O_GOHOUSE";
	vLocal_160[8 /*3*/] = "CRW5_O_RET";
	Local_188 = "CRW5_H_FREEYOU";
	if (Local_188.f_1)
	{
		Local_188.f_1 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		vLocal_160[iVar0 /*3*/].f_1 = 0;
		iVar0++;
	}
}

void func_190()
{
	int iVar0;
	vLocal_18[5 /*3*/] = "CRW_KEEPGOING";
	vLocal_18[6 /*3*/] = "CRW_KEEPGOING";
	vLocal_18[23 /*3*/] = "CRW_PLAYERBEHND";
	vLocal_18[1 /*3*/] = "CRW_S1_IG3";
	vLocal_18[2 /*3*/] = "CRW_S1_IG5";
	vLocal_18[7 /*3*/] = "CRW_QUICK";
	vLocal_18[8 /*3*/] = "CRW_S1_IG6_LAMP";
	vLocal_18[9 /*3*/] = "CRW_S1_IG6_RE1";
	vLocal_18[10 /*3*/] = "CRW_S1_IG6_RE2";
	if (__LIB_0__::func_181())
	{
		vLocal_18[11 /*3*/] = "CRW_GATOR_J";
		vLocal_18[17 /*3*/] = "CRW_ATSHACK_J";
	}
	else
	{
		vLocal_18[11 /*3*/] = "CRW_GATOR_A";
		vLocal_18[17 /*3*/] = "CRW_ATSHACK_A";
	}
	vLocal_18[16 /*3*/] = "CRW_NOSAVE";
	vLocal_18[1 /*3*/] = "CRW_S1_IG3";
	vLocal_18[2 /*3*/] = "CRW_S1_IG5";
	vLocal_18[13 /*3*/] = "CRW_SLOW";
	vLocal_18[14 /*3*/] = "CRW_TREES";
	vLocal_18[15 /*3*/] = "CRW_KEEPGOING";
	vLocal_18[19 /*3*/] = "CRW_PNOTATTACK";
	vLocal_18[18 /*3*/] = "CRW_ATSHACK_A";
	vLocal_18[20 /*3*/] = "CRW3_HSCARE";
	vLocal_18[21 /*3*/] = "CRW_NIGHTDEAD";
	vLocal_18[24 /*3*/] = "CRW2_EQUIP";
	vLocal_18[25 /*3*/] = "CRW_SEARCH_A";
	vLocal_18[26 /*3*/] = "CRW_SEARCH_J";
	vLocal_18[28 /*3*/] = "CRW_S1_IG8_P1_A";
	vLocal_18[29 /*3*/] = "CRW_S1_IG8_P1_J";
	vLocal_18[30 /*3*/] = "CRW_CALL_A";
	vLocal_18[31 /*3*/] = "CRW_CALL_J";
	vLocal_18[32 /*3*/] = "CRW_REACT_A";
	vLocal_18[33 /*3*/] = "CRW_REACT_J";
	vLocal_18[34 /*3*/] = "CRW_ATTACK_A";
	vLocal_18[35 /*3*/] = "CRW_ATTACK_J";
	vLocal_18[36 /*3*/] = "CRW_MORE_A";
	vLocal_18[37 /*3*/] = "CRW_MORE_J";
	vLocal_18[38 /*3*/] = "CRW_ATTACK2_A";
	vLocal_18[39 /*3*/] = "CRW_ATTACK2_J";
	vLocal_18[40 /*3*/] = "CRW_ALL_A";
	vLocal_18[41 /*3*/] = "CRW_ALL_J";
	vLocal_18[42 /*3*/] = "CRW_ILO1_A";
	vLocal_18[43 /*3*/] = "CRW_ILO1_J";
	vLocal_18[44 /*3*/] = "CRW_ILO2_A";
	vLocal_18[45 /*3*/] = "CRW_ILO2_J";
	vLocal_18[27 /*3*/] = "CRW_S1_IG8_CMRE";
	vLocal_18[3 /*3*/] = "CRW_S1_IG1_LEVE";
	vLocal_18[4 /*3*/] = "CRW_S1_IG1_RETR";
	iVar0 = 0;
	while (iVar0 < 47)
	{
		if (vLocal_18[iVar0 /*3*/].f_1)
		{
			vLocal_18[iVar0 /*3*/].f_1 = 0;
		}
		iVar0++;
	}
}

void func_191()
{
	vLocal_230[0 /*3*/] = { 2090.64f, -398.18f, 43.78f };
	vLocal_230[1 /*3*/] = { 2081.84f, -378.71f, 43.76f };
}

void func_192()
{
	Local_944[0 /*7*/].f_1 = { 2074.995f, -342.3387f, 40.1848f };
	Local_944[0 /*7*/].f_4 = 68.1f;
	Local_944[1 /*7*/].f_1 = { 2054.695f, -340.6894f, 40.3776f };
	Local_944[1 /*7*/].f_4 = 259.2165f;
}

void func_194()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Local_995[iVar0 /*5*/].f_1 = func_465(iVar0);
		iVar0++;
	}
	Local_995[1 /*5*/].f_2 = func_1(1);
	Local_995[2 /*5*/].f_2 = func_1(2);
	Local_995[0 /*5*/].f_2 = func_1(0);
	Local_995[5 /*5*/].f_2 = func_1(3);
	Local_995[6 /*5*/].f_2 = func_1(24);
	Local_995[7 /*5*/].f_2 = func_1(35);
}

int func_209(vector3 vParam0, var uParam3)
{
	int iVar0;
	if (MISC::_0x1B065A2BF7953815(0) != 1)
	{
		__LIB_9__::func_786(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_399(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_489(0, 0);
		if (__LIB_0__::func_154(iVar0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
			__LIB_0__::func_713(1, 0);
		}
	}
	else
	{
		__LIB_0__::func_713(1, 0);
	}
	__LIB_0__::func_305(0);
	__LIB_5__::func_119(0, vParam0, uParam3);
	return 1;
}

void func_211(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		CAM::_0x6E969927CF632608(1);
		CAM::_0xE3639DB78B3B5400(*iParam0);
	}
}

bool func_212(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		fVar0 = __LIB_0__::func_665(Global_35, iParam2, 1, 1);
		if (fVar0 > fParam3)
		{
			return true;
		}
		else if (fVar0 > fParam4)
		{
			func_494(uParam0, &(vLocal_160[iParam1 /*3*/]), 0);
		}
		else if (fVar0 < fParam5)
		{
			vLocal_160[iParam1 /*3*/].f_1 = 0;
		}
	}
	return false;
}

bool func_215(int iParam0)
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
				func_129(113, 1, 0, 1, 1, 1, 0);
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

int func_224(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_221))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_221))
		{
			return 1;
		}
		else if ((FIRE::IS_ENTITY_ON_FIRE(iLocal_221) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_221, Global_35, 1, 1)) || !__LIB_13__::func_575(&iLocal_221, &uLocal_191, &uLocal_219, 1, 0, 0))
		{
			func_304(22);
			return 1;
		}
	}
	return 0;
}

void func_229(var uParam0)
{
	int iVar0;
	func_332(1);
	func_431();
	func_425();
	func_521();
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_221, false);
	if (bLocal_243)
	{
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	}
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		func_303(0);
		__LIB_0__::func_172(iLocal_307);
		func_523();
		func_521();
		PED::_0x935CF6E42BAF7F4D(iLocal_221);
		PED::_0x935CF6E42BAF7F4D(Global_35);
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
		__LIB_0__::func_325(&iLocal_238);
		iLocal_226 = 0;
		func_332(1);
		__LIB_1__::func_723(0);
		__LIB_12__::func_938(iLocal_221);
		func_303(0);
		iVar0 = 0;
		while (iVar0 < 5)
		{
			__LIB_0__::func_325(&(Local_467[iVar0 /*41*/].f_5));
			__LIB_2__::func_788(&(Local_467[iVar0 /*41*/]), 1, 0, 1);
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			__LIB_0__::func_325(&(Local_467[iVar0 /*41*/].f_5));
			__LIB_2__::func_788(&(Local_467[iVar0 /*41*/]), 1, 0, 1);
			iVar0++;
		}
		if (__LIB_12__::func_644(uParam0) == 0)
		{
			func_524(joaat("PROVISION_GOLDTOOTH"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			func_524(joaat("PROVISION_MUSKRAT_FUR_PRISTINE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			func_304(21);
			PED::SET_PED_CONFIG_FLAG(iLocal_221, 301, false);
			__LIB_3__::func_157(&(Local_859[0 /*17*/]), "CRW5_C_GREE", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		}
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 8))
	{
		if (__LIB_12__::func_644(uParam0) == 3)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1041))
			{
				iLocal_1041 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iLocal_221, 1);
			}
			__LIB_2__::func_919(iLocal_1041, 0, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_221, joaat("WEAPON_UNARMED"), false, 0, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_221, joaat("WEAPON_UNARMED"), false, 1, false, false);
		}
	}
}

int func_269(var uParam0)
{
	bool bVar0;
	if (!bLocal_1130)
	{
		__LIB_0__::func_401(joaat("RC_CREEPY"));
		__LIB_0__::func_401(112266538);
		bLocal_1130 = true;
	}
	if (!func_580())
	{
		return 0;
	}
	bVar0 = true;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_221))
	{
		iLocal_221 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1347702[uParam0->f_174 /*49*/].f_43);
		bVar0 = false;
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_933))
	{
		iLocal_933 = __LIB_8__::func_772(joaat("TEETER"), 2099.763f, -287.837f, 45.6606f, 76.29f, 4f, 0, 0);
		bVar0 = false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_306))
	{
		iLocal_306 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2102.622f, -285.6357f, 43.22369f, 0f, 0f, 87.49636f, 8.842305f, 5.222672f, 2.527447f, "m_volShackVolume");
		bVar0 = false;
	}
	if (!AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_308))
	{
		iLocal_308 = TASK::ADD_COVER_POINT(Local_309, Local_309.f_3, Local_309.f_5, Local_309.f_4, Local_309.f_6, false);
		bVar0 = false;
	}
	if (!AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_316))
	{
		iLocal_316 = TASK::ADD_COVER_POINT(vLocal_317, vLocal_317.f_3, vLocal_317.f_5, vLocal_317.f_4, vLocal_317.f_6, false);
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	if (!func_298(6, 0, func_1(24)))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_221))
	{
		PED::_0x89F5E7ADECCCB49C(iLocal_221, "normal");
		PED::_0x923583741DC87BCE(iLocal_221, "Default");
		func_582(&iLocal_221, vLocal_222, fLocal_225, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_221, joaat("REL_PLAYER_ALLY"));
		TASK::SET_PED_PATH_MAY_ENTER_WATER(iLocal_221, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_221, 265, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_221, 266, false);
		TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(iLocal_221, false, 1f);
		AUDIO::STOP_PED_SPEAKING(iLocal_221, true);
		WEAPON::_0x94A3C1B804D291EC(iLocal_221, 1, 0, 0, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iLocal_221, true);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_221, 262144);
		ENTITY::_0x18FF3110CF47115D(iLocal_221, 7, 0);
		if (iLocal_974 <= 9)
		{
			WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_221, joaat("WEAPON_MELEE_LANTERN"), 1, false, true, 1, false, 0.5f, 1f, 752097756, true, 0f, false);
			WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_221, joaat("WEAPON_REVOLVER_CATTLEMAN"), 100, false, true, 2, true, 0.5f, 1f, 752097756, true, 0f, false);
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_221, joaat("WEAPON_MELEE_LANTERN"), true, 1, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_221, joaat("WEAPON_REVOLVER_CATTLEMAN"), true, 2, false, false);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_221, joaat("WEAPON_UNARMED"), true, 1, true, false);
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_221, joaat("WEAPON_REVOLVER_CATTLEMAN"), true, 0, false, false);
		}
		PED::_SET_PED_BLACKBOARD_FLOAT(iLocal_221, "Cautious", 1f, -1);
		ENTITY::SET_ENTITY_MAX_HEALTH(iLocal_221, 50);
		ENTITY::_SET_ENTITY_HEALTH(iLocal_221, 50, 0);
		ENTITY::SET_ENTITY_PROOFS(iLocal_221, 1, false);
		TASK::_0x12990818C1D35886(iLocal_221, 0, 1065353216 /* Float: 1f */);
		__LIB_13__::func_260(uParam0, iLocal_221);
		__LIB_2__::func_279(iLocal_221, 1);
	}
	__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 1);
	__LIB_12__::func_875(uParam0, iLocal_221, "CRW_ExConfeder", 0);
	if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, 883682516 /* GXTEntry: "Old Cajun" */))
	{
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 883682516 /* GXTEntry: "Old Cajun" */);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_307))
	{
		iLocal_307 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 2101.061f, -286.2421f, 42.68422f, 0f, 0f, -21.42943f, 2.633849f, 4.540774f, 1.49739f);
	}
	GRAPHICS::_0xDFEA23EC90113657(joaat("RC_CREEPY"));
	return 1;
}

void func_288()
{
	if (__LIB_0__::func_266(Global_35, vLocal_222, 10f, 1, 1) || __LIB_0__::func_266(Global_35, vLocal_239, 7f, 1, 1))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DYNAMIC_SCENARIO"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_X"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_Y"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE2"), false);
	}
}

bool func_289(var uParam0)
{
	func_608(uParam0);
	if (__LIB_4__::func_207(iLocal_221, 1090519040 /* Float: 8f */, 1103626240 /* Float: 25f */, 1097859072 /* Float: 15f */, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
	}
	switch (iLocal_14)
	{
		case 0:
			func_304(1);
			func_610(1);
			func_332(0);
			break;
		case 1:
			func_611();
			func_610(2);
			break;
		case 2:
			iLocal_1070 = func_424(&iLocal_221, &iLocal_838, 5f, &Local_859, 0, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
			if (iLocal_1070 == 0)
			{
				func_612(5);
				func_425();
				func_610(3);
			}
			break;
		case 3:
			__LIB_9__::func_827(4, 59, 58, 0);
			bLocal_243 = true;
			if (bLocal_1063)
			{
				func_613();
				func_610(4);
				if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, 883682516 /* GXTEntry: "Old Cajun" */))
				{
					PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 883682516 /* GXTEntry: "Old Cajun" */);
				}
			}
			break;
		case 4:
			if (__LIB_0__::func_48(Global_35, iLocal_221, 7.5f, 1))
			{
				__LIB_9__::func_827(4, 59, 59, 0);
				bLocal_243 = true;
			}
			else if (bLocal_243)
			{
				CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
			}
			iLocal_1070 = func_424(&iLocal_221, &iLocal_877, 5f, &Local_898, 0, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
			if (iLocal_1070 == 0)
			{
				func_521();
				func_612(4);
				func_610(5);
			}
			if (!bLocal_1055)
			{
				if (iLocal_1070 == 1)
				{
					func_521();
					func_612(10);
					func_610(6);
					if (bLocal_243)
					{
						CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
					}
				}
			}
			break;
		case 5:
			__LIB_9__::func_827(4, 59, 59, 0);
			bLocal_243 = true;
			if (iLocal_1056 == 9 || iLocal_1056 == 12)
			{
				return true;
			}
			break;
		case 6:
			if (iLocal_1056 == 3)
			{
				func_610(3);
				func_521();
			}
			break;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1041))
	{
		iLocal_1041 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iLocal_221, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1041))
	{
		if (func_423(6, 0.1f))
		{
			if (iLocal_1056 != 4 && iLocal_1056 != 9)
			{
				if (__LIB_0__::func_86(vLocal_1060))
				{
					vLocal_1060 = { ENTITY::GET_ENTITY_COORDS(iLocal_1041, true, false) };
				}
				else
				{
					__LIB_2__::func_919(iLocal_1041, 0, 0);
					ENTITY::SET_ENTITY_COORDS(iLocal_1041, vLocal_1060, true, false, true, true);
				}
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_1041, bLocal_245);
			}
			bLocal_245 = true;
		}
		if (bLocal_244)
		{
			GRAPHICS::_SET_LIGHTS_INTENSITY_FOR_ENTITY(iLocal_1041, 5f);
		}
		else
		{
			GRAPHICS::_SET_LIGHTS_INTENSITY_FOR_ENTITY(iLocal_1041, 0f);
		}
	}
	return false;
}

void func_293(var uParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, int iParam12)
{
	struct<16> Var0;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	*uParam0 = { vParam1 };
	uParam0->f_3 = fParam4;
	uParam0->f_4 = bParam5;
	uParam0->f_5 = bParam6;
	uParam0->f_6 = iParam9;
	uParam0->f_7 = iParam10;
	uParam0->f_8 = iParam12;
	if (__LIB_0__::func_2() != -1)
	{
		__LIB_10__::func_915(!bParam5);
		__LIB_10__::func_916(!bParam6);
		__LIB_12__::func_886(vParam1, fParam4, 1);
		Var0.f_12 = 255;
		Var0.f_13 = 255;
		Var0.f_3 = 51;
		__LIB_13__::func_473(Var0, __LIB_10__::func_931(0, 15), 0, 0);
		return;
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
		{
			return;
		}
		CAM::DO_SCREEN_FADE_OUT(0);
		__LIB_0__::func_105(1);
		iVar16 = __LIB_1__::func_447(vParam1, 1);
		if (bParam8)
		{
			if ((__LIB_1__::func_972(iVar16) == 1 || __LIB_1__::func_972(iVar16) == 2) || iVar16 == __LIB_1__::func_953(Global_40.f_4283))
			{
				__LIB_1__::func_971(0);
			}
		}
		if (!bParam7)
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, true, true);
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
			}
		}
		if (bParam11)
		{
			iVar17 = ITEMSET::CREATE_ITEMSET(true);
			bVar18 = false;
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar17);
			iVar19 = 0;
			iVar19 = 0;
			while (iVar19 < ITEMSET::GET_ITEMSET_SIZE(iVar17))
			{
				iVar20 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar19, iVar17);
				iVar21 = MISC::_GET_ENTITY_FROM_ITEM(iVar20);
				if (ENTITY::DOES_ENTITY_EXIST(iVar21))
				{
					PED::_0xED00D72F81CF7278(iVar21, 0, 1);
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar21))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar21, true, true);
					}
					ENTITY::DELETE_ENTITY(&iVar21);
					bVar18 = true;
				}
				iVar19++;
			}
			if (bVar18 && !ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
				PED::_0x2208438012482A1A(Global_35, false, false);
			}
			ITEMSET::DESTROY_ITEMSET(iVar17);
		}
		PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), vParam1, fParam4, true, true, false, false);
	}
}

bool func_295(int iParam0)
{
	int iVar0;
	int iVar1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 <= 4)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_467[iVar0 /*41*/]))
				{
					Local_467[iVar0 /*41*/] = __LIB_8__::func_931(joaat("G_M_M_UNISWAMP_01"), Local_467[iVar0 /*41*/].f_1, Local_467[iVar0 /*41*/].f_4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
					return false;
				}
				iVar1 = iVar0;
				func_628(iVar1);
				__LIB_13__::func_694(Local_467[iVar0 /*41*/]);
				PED::_0xAE6004120C18DF97(Local_467[iVar0 /*41*/], 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_467[iVar0 /*41*/], false);
				if (iVar0 == 1)
				{
					__LIB_2__::func_279(Local_467[iVar0 /*41*/], 1);
				}
				if (!func_630(iVar1))
				{
					PED::SET_PED_FIRING_PATTERN(Local_467[iVar0 /*41*/], joaat("FIRING_PATTERN_BURST_SINGLE_SHOT"));
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_467[iVar0 /*41*/], 24, true);
				}
				AUDIO::STOP_PED_SPEAKING(Local_467[iVar0 /*41*/], true);
				iVar0++;
			}
			return true;
		case 1:
			iVar0 = 5;
			while (iVar0 <= 8)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_467[iVar0 /*41*/]))
				{
					Local_467[iVar0 /*41*/] = __LIB_8__::func_931(joaat("G_M_M_UNISWAMP_01"), Local_467[iVar0 /*41*/].f_1, Local_467[iVar0 /*41*/].f_4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
					return false;
				}
				iVar1 = iVar0;
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_467[iVar0 /*41*/], true);
				if (func_630(iVar1))
				{
					if (iVar1 == 7)
					{
						func_631(iVar1, 12);
					}
					else
					{
						func_631(iVar1, 11);
					}
				}
				else
				{
					func_631(iVar1, 8);
					PED::SET_PED_FIRING_PATTERN(Local_467[iVar0 /*41*/], joaat("FIRING_PATTERN_BURST_SINGLE_SHOT"));
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_467[iVar0 /*41*/], 24, true);
				}
				func_628(iVar1);
				PED::_0xAE6004120C18DF97(Local_467[iVar0 /*41*/], 0, 0);
				AUDIO::STOP_PED_SPEAKING(Local_467[iVar0 /*41*/], true);
				iVar0++;
			}
			return true;
		default:
			break;
	}
	return false;
}

void func_296(int iParam0)
{
	if (iLocal_974 != iParam0)
	{
		iLocal_974 = iParam0;
		iLocal_975 = 0;
	}
}

bool func_298(int iParam0, int iParam1, char* sParam2)
{
	char* sVar0;
	vector3 vVar1;
	var uVar4;
	if (!Local_995[iParam0 /*5*/].f_3)
	{
		if (func_300(iParam0, iParam1, sParam2))
		{
			func_633(iParam0);
			Local_995[iParam0 /*5*/].f_3 = 1;
		}
	}
	if (MISC::IS_STRING_NULL(sParam2))
	{
		sVar0 = Local_995[iParam0 /*5*/].f_2;
	}
	else
	{
		sVar0 = sParam2;
	}
	if (Local_995[iParam0 /*5*/].f_3)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_995[iParam0 /*5*/], sVar0))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_995[iParam0 /*5*/], sVar0);
			}
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_995[iParam0 /*5*/], sVar0))
			{
				if (!ANIMSCENE::_0x1F0E401031E20146(Local_995[iParam0 /*5*/], sVar0))
				{
					func_633(iParam0);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_995[iParam0 /*5*/], sVar0, true);
				}
				func_633(iParam0);
				if (iParam0 == 0)
				{
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_995[iParam0 /*5*/], 2080.046f, -366.132f, 41.301f, 0f, 0f, 17.5f, 2);
				}
				if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 7)
				{
					vVar1 = { ENTITY::GET_ENTITY_COORDS(iLocal_221, true, false) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1, &uVar4, false);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_995[iParam0 /*5*/], vVar1, ENTITY::GET_ENTITY_ROTATION(iLocal_221, 2), 2);
				}
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_995[iParam0 /*5*/], false))
				{
					func_633(iParam0);
					ANIMSCENE::START_ANIM_SCENE(Local_995[iParam0 /*5*/]);
				}
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_995[iParam0 /*5*/], false) && ANIMSCENE::_0x1F0E401031E20146(Local_995[iParam0 /*5*/], sVar0))
				{
					return true;
				}
			}
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_995[iParam0 /*5*/], false))
			{
				func_633(iParam0);
				ANIMSCENE::START_ANIM_SCENE(Local_995[iParam0 /*5*/]);
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_995[iParam0 /*5*/], false))
			{
				return true;
			}
		}
	}
	return false;
}

void func_299(int iParam0)
{
	if (!func_331(iParam0))
	{
		__LIB_1__::func_683(&iLocal_242, iParam0);
	}
}

bool func_300(int iParam0, int iParam1, char* sParam2)
{
	if (!Local_995[iParam0 /*5*/].f_3)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_995[iParam0 /*5*/]))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_995[iParam0 /*5*/], true, false))
			{
				Local_995[iParam0 /*5*/].f_3 = 1;
				return Local_995[iParam0 /*5*/].f_3;
			}
		}
		else
		{
			if (MISC::IS_STRING_NULL(sParam2))
			{
				Local_995[iParam0 /*5*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_995[iParam0 /*5*/].f_1, iParam1, Local_995[iParam0 /*5*/].f_2, false, true);
			}
			else
			{
				Local_995[iParam0 /*5*/].f_2 = sParam2;
				Local_995[iParam0 /*5*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_995[iParam0 /*5*/].f_1, iParam1, sParam2, false, true);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_995[iParam0 /*5*/]))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_995[iParam0 /*5*/]);
			}
		}
	}
	return Local_995[iParam0 /*5*/].f_3;
}

bool func_301(var uParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_297))
	{
		iLocal_297 = OBJECT::CREATE_OBJECT(iLocal_304, vLocal_298, true, true, false, false, true);
		return false;
	}
	else
	{
		ENTITY::SET_ENTITY_ROTATION(iLocal_297, vLocal_301, 2, true);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 == 0)
		{
			if (__LIB_0__::func_895(Global_1347702[56 /*49*/].f_15) == 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_272[iVar0 /*7*/]))
				{
					Local_272[iVar0 /*7*/] = __LIB_8__::func_931(joaat("A_M_M_UNICOACHGUARDS_01"), Local_272[iVar0 /*7*/].f_1, Local_272[iVar0 /*7*/].f_4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
					return false;
				}
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(Local_272[iVar0 /*7*/]))
		{
			Local_272[iVar0 /*7*/] = __LIB_8__::func_931(joaat("A_M_M_UNICOACHGUARDS_01"), Local_272[iVar0 /*7*/].f_1, Local_272[iVar0 /*7*/].f_4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			return false;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_272[iVar0 /*7*/]))
		{
			PED::SET_PED_CONFIG_FLAG(Local_272[iVar0 /*7*/], 223, true);
			PED::SET_PED_CONFIG_FLAG(Local_272[iVar0 /*7*/], 186, false);
			PED::SET_PED_CONFIG_FLAG(Local_272[iVar0 /*7*/], 38, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_272[iVar0 /*7*/], true);
			__LIB_3__::func_459(Local_272[iVar0 /*7*/], 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_272[iVar0 /*7*/], joaat("REL_NO_RELATIONSHIP"));
			__LIB_2__::func_279(Local_272[iVar0 /*7*/], 1);
			if (iVar0 == 0)
			{
				if (__LIB_5__::func_297(Global_1347702[56 /*49*/].f_15) > 0)
				{
					__LIB_1__::func_864(Local_272[iVar0 /*7*/], 1, 0);
				}
				else
				{
					if (!__LIB_0__::func_163(Local_272[iVar0 /*7*/], joaat("SCRIPT_TASK_CARRIABLE")))
					{
						TASK::TASK_CARRIABLE(Local_272[iVar0 /*7*/], joaat("HOGTIED_PED"), 0, 0, 0);
					}
					ENTITY::_SET_ENTITY_SOMETHING(Local_272[iVar0 /*7*/], true);
					__LIB_12__::func_875(uParam0, Local_272[iVar0 /*7*/], "CRAWLEYGUARD2", 0);
				}
			}
			else
			{
				__LIB_1__::func_864(Local_272[iVar0 /*7*/], 1, 0);
			}
		}
		iVar0++;
	}
	return true;
}

void func_303(bool bParam0)
{
	if (bParam0)
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Cautious", 1f, -1);
	}
	else
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Cautious", 0f, -1);
	}
}

void func_304(int iParam0)
{
	int iVar0;
	struct<11> Var1;
	if (iLocal_226 != iParam0 && !ENTITY::IS_ENTITY_DEAD(iLocal_221))
	{
		iLocal_226 = iParam0;
	}
	else
	{
		return;
	}
	iLocal_1043 = 0;
	__LIB_1__::func_148(&uLocal_1044);
	switch (iLocal_226)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			if (iLocal_974 < 9)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_221, joaat("WEAPON_UNARMED"), true, 0, false, false);
				WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_221, joaat("WEAPON_REVOLVER_CATTLEMAN"), 100, false, true, 0, true, 0.5f, 1f, 752097756, true, 0f, false);
			}
			else
			{
				WEAPON::REMOVE_WEAPON_FROM_PED(iLocal_221, joaat("WEAPON_MELEE_LANTERN"), true, -142743235);
				WEAPON::_0x94A3C1B804D291EC(iLocal_221, 1, 0, 0, 1);
				WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_221, joaat("WEAPON_REVOLVER_CATTLEMAN"), 100, true, false, 0, true, 0.5f, 1f, 752097756, true, 0f, false);
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_221, joaat("WEAPON_UNARMED"), true, 1, false, false);
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_221, joaat("WEAPON_REVOLVER_CATTLEMAN"), true, 0, false, false);
			}
			TASK::TASK_SWAP_WEAPON(iLocal_221, 1, 1, 0, 0);
			break;
		case 5:
		case 6:
			if (!__LIB_0__::func_163(iLocal_221, -875674219))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_221, Global_35, -1, -1f, __LIB_3__::func_745(30f), -1f);
			}
			__LIB_1__::func_951(&iLocal_1042);
			break;
		case 7:
			TASK::TASK_ENTER_ANIM_SCENE(iLocal_221, Local_995[4 /*5*/], "EXCONFEDINFORMANT", "", 1069379748 /* Float: 1.48f */, 0, 3, 20000, -1082130432 /* Float: -1f */);
			break;
		case 9:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_221, 2077.416f, -368.6758f, 41.2787f, 1f, -1, 0.1f, 8192, 40000f);
			break;
		case 3:
			TASK::TASK_PLAY_ANIM(iLocal_221, sLocal_270, sLocal_271, 1.5f, -1.5f, -1, 1, 0f, false, 0, false, 0, false);
			break;
		case 4:
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, vLocal_230[0 /*3*/], 0);
			TASK::TASK_PLAY_ANIM(0, sLocal_268, sLocal_269, 1.5f, -8f, -1, 9, 0f, false, 0, false, 0, false);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_221, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 12:
		case 13:
			PED::SET_COMBAT_FLOAT(iLocal_221, 2, 1f);
			__LIB_1__::func_766(iLocal_221, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_221, joaat("WEAPON_REVOLVER_CATTLEMAN"), true, 0, false, false);
			PED::SET_COMBAT_FLOAT(iLocal_221, 3, 1000f);
			PED::SET_COMBAT_FLOAT(iLocal_221, 4, 1000f);
			WEAPON::SET_PED_INFINITE_AMMO(iLocal_221, true, joaat("WEAPON_REVOLVER_CATTLEMAN"));
			Var1.f_10 = -1082130432;
			Var1 = iLocal_221;
			Var1.f_5 = -1;
			Var1.f_7 = 1;
			Var1.f_8 = 0;
			Var1.f_10 = 1f;
			if (iLocal_226 == 12)
			{
				Var1.f_3 = iLocal_308;
			}
			else
			{
				Var1.f_10 = 2f;
				Var1.f_3 = iLocal_316;
			}
			AICOVERPOINT::TASK_ENTER_COVER(&Var1);
			break;
		case 14:
		case 15:
			PED::SET_COMBAT_FLOAT(iLocal_221, 2, 1f);
			__LIB_1__::func_766(iLocal_221, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_221, joaat("WEAPON_REVOLVER_CATTLEMAN"), true, 0, false, false);
			PED::SET_PED_SEEING_RANGE(iLocal_221, 0f);
			WEAPON::SET_PED_INFINITE_AMMO(iLocal_221, true, joaat("WEAPON_REVOLVER_CATTLEMAN"));
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (iLocal_226 == 14)
			{
				__LIB_13__::func_471(0, Local_309, vLocal_239, -1, 0, 0, 0, 0, iLocal_308, 1);
			}
			else
			{
				__LIB_13__::func_471(0, vLocal_317, vLocal_239, -1, 0, 0, 1, 0, iLocal_316, 1);
			}
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_221, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 16:
			if (!AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_308))
			{
				iLocal_308 = TASK::ADD_COVER_POINT(Local_309, Local_309.f_3, Local_309.f_5, Local_309.f_4, Local_309.f_6, false);
			}
			PED::SET_PED_SEEING_RANGE(iLocal_221, 60f);
			PED::SET_COMBAT_FLOAT(iLocal_221, 3, 4f);
			PED::SET_COMBAT_FLOAT(iLocal_221, 4, 5f);
			PED::SET_COMBAT_FLOAT(iLocal_221, 2, 100f);
			PED::SET_PED_COMBAT_MOVEMENT(iLocal_221, 1);
			__LIB_1__::func_766(iLocal_221, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_221, joaat("WEAPON_REVOLVER_CATTLEMAN"), true, 0, false, false);
			WEAPON::SET_PED_INFINITE_AMMO(iLocal_221, true, joaat("WEAPON_REVOLVER_CATTLEMAN"));
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, Local_309, 100f, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_221, Local_309, 4f, 0, 0, 0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_221, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 17:
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2102.409f, -288.1169f, 41.9985f, 2.5f, 60000, 0.25f, 0, 40000f);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_221, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 18:
			break;
		case 22:
			PED::SET_PED_FLEE_ATTRIBUTES(Local_272[0 /*7*/], 1536, true);
			TASK::TASK_SMART_FLEE_PED(iLocal_221, Global_35, 10000f, -1, 12544, 1077936128 /* Float: 3f */, 0);
			break;
		case 19:
			if (!AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_308))
			{
				iLocal_308 = TASK::ADD_COVER_POINT(Local_309, Local_309.f_3, Local_309.f_5, Local_309.f_4, Local_309.f_6, false);
			}
			WEAPON::SET_PED_INFINITE_AMMO(iLocal_221, true, joaat("WEAPON_REVOLVER_CATTLEMAN"));
			PED::SET_COMBAT_FLOAT(iLocal_221, 3, 10f);
			PED::SET_COMBAT_FLOAT(iLocal_221, 4, 10f);
			PED::SET_COMBAT_FLOAT(iLocal_221, 2, 100f);
			WEAPON::_0x94A3C1B804D291EC(iLocal_221, 1, 0, 0, 1);
			__LIB_1__::func_766(iLocal_221, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_221, joaat("WEAPON_REVOLVER_CATTLEMAN"), true, 0, false, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			PED::_0xFC3DB99C8144CD81(iLocal_221, iLocal_306, 0, 0, 0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_221, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 20:
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, __LIB_3__::func_745(30f), -1f);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_221, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 21:
			break;
	}
}

bool func_306(int iParam0)
{
	int iVar0;
	if (iParam0 == 0)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_467[iVar0 /*41*/]) && !ENTITY::IS_ENTITY_DEAD(Local_467[iVar0 /*41*/]))
			{
				TASK::TASK_PLAY_ANIM(Local_467[iVar0 /*41*/], "AI_DAMAGE@DEAD@BASE", "dead_c", 8f, -8f, -1, 131072, 0f, false, 0, false, 0, false);
				__LIB_1__::func_864(Local_467[iVar0 /*41*/], 1, 1);
			}
			iVar0++;
		}
	}
	else if (iParam0 == 1)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_467[iVar0 /*41*/]) && !ENTITY::IS_ENTITY_DEAD(Local_467[iVar0 /*41*/]))
			{
				TASK::TASK_PLAY_ANIM(Local_467[iVar0 /*41*/], "AI_DAMAGE@DEAD@BASE", "dead_c", 8f, -8f, -1, 131072, 0f, false, 0, false, 0, false);
				__LIB_1__::func_864(Local_467[iVar0 /*41*/], 1, 1);
			}
			iVar0++;
		}
	}
	return true;
}

void func_308(int iParam0)
{
	if (iParam0 != iLocal_1047)
	{
		iLocal_1047 = iParam0;
	}
}

int func_325(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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
					__LIB_1__::func_747(uParam4, 4);
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
				__LIB_1__::func_747(uParam4, 3);
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
				__LIB_1__::func_148(&(uParam4->f_1));
				__LIB_1__::func_747(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				__LIB_12__::func_913(uParam4);
				if (!__LIB_0__::func_75(&(uParam4->f_1)))
				{
					__LIB_1__::func_283(&(uParam4->f_1), 0);
				}
				else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					__LIB_1__::func_747(uParam4, 4);
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
						__LIB_1__::func_747(uParam4, 4);
					}
					else if (!__LIB_0__::func_86(__LIB_0__::func_85(uParam4)) && !__LIB_0__::func_266(Global_35, __LIB_0__::func_85(uParam4), 100f, 1, 1))
					{
						__LIB_0__::func_87(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), __LIB_0__::func_85(uParam4), 0f, true, true, true, false);
					}
				}
				else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					__LIB_1__::func_747(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::_0xA565FAC215CBC77D();
					__LIB_0__::func_722(1, 0);
					__LIB_13__::func_18(uParam4, &uParam0, uParam5);
					__LIB_1__::func_747(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
				}
				__LIB_1__::func_747(uParam4, 4);
			}
			break;
		case 3:
			func_670(uParam4);
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
					__LIB_1__::func_148(&(uParam4->f_1));
					__LIB_0__::func_88(uParam4, 512);
					__LIB_1__::func_747(uParam4, 4);
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
				__LIB_13__::func_9(uParam4);
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
						__LIB_1__::func_148(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_12__::func_677(uParam4, 67108864, 1);
						__LIB_1__::func_747(uParam4, 4);
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
				__LIB_13__::func_9(uParam4);
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
						__LIB_1__::func_747(uParam4, 3);
					}
					else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, false);
						}
						__LIB_1__::func_747(uParam4, 3);
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
			__LIB_1__::func_747(uParam4, 4);
			break;
	}
	return 0;
}

bool func_331(int iParam0)
{
	if (__LIB_0__::func_27(iLocal_242, iParam0))
	{
		return true;
	}
	return false;
}

void func_332(bool bParam0)
{
	TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_ARMOIR05X", bParam0);
	TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DRYSINK01X", bParam0);
	TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_CUPBOARD04X", bParam0);
	TASK::SET_SCENARIO_TYPE_ENABLED("Prop_player_sleep_tent_a_frame", bParam0);
}

void func_335(var uParam0)
{
	bool bVar0;
	struct<10> Var1;
	int iVar12;
	if (ENTITY::IS_ENTITY_DEAD(iLocal_221))
	{
		return;
	}
	bVar0 = false;
	switch (iLocal_226)
	{
		case 0:
			break;
		case 2:
			if (!__LIB_0__::func_163(iLocal_221, 658540077) && !__LIB_0__::func_163(iLocal_221, 985146578))
			{
				if (iLocal_1043 > 5)
				{
					Var1 = 2;
					Var1.f_4 = sLocal_265;
					Var1.f_5 = 201330188;
					Var1.f_7 = 0;
					Var1.f_9 = 0;
					TASK::TASK_LEAD_AND_CONVERSE(iLocal_221, Global_35, &Var1, 1, 1069547520 /* Float: 1.5f */, 0, 1070386381 /* Float: 1.6f */, 1092616192 /* Float: 10f */, 1065353216 /* Float: 1f */);
				}
				iLocal_1043++;
			}
			PED::SET_PED_RESET_FLAG(iLocal_221, 12, true);
			if (__LIB_0__::func_264(&uLocal_1044) > 4f)
			{
				if (((!__LIB_0__::func_48(iLocal_221, Global_35, 6f, 1) && iLocal_267 < (iLocal_266 - 3)) && iLocal_266 > 6) || !__LIB_0__::func_48(iLocal_221, Global_35, 14f, 1))
				{
					func_304(5);
				}
			}
			if ((iLocal_974 == 11 || iLocal_974 == 5) || iLocal_974 == 9)
			{
				bVar0 = true;
			}
			func_716(1.2f, bVar0);
			break;
		case 5:
			if (__LIB_0__::func_48(iLocal_221, Global_35, 5.5f, 1))
			{
				func_304(2);
			}
			else if (!__LIB_0__::func_48(iLocal_221, Global_35, 15f, 1))
			{
				if (!__LIB_0__::func_75(&uLocal_937))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_995[7 /*5*/], false))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(Local_995[7 /*5*/]);
					}
					__LIB_1__::func_148(&uLocal_937);
				}
				else
				{
					if (__LIB_0__::func_265(&uLocal_937) > 1f)
					{
						if (func_427(uParam0, &(vLocal_18[23 /*3*/]), &iLocal_221, 30f, 1108082688 /* Float: 35f */, 0, 0, 0))
						{
							__LIB_1__::func_148(&uLocal_937);
							vLocal_18[6 /*3*/].f_1 = 0;
						}
					}
					if (__LIB_0__::func_265(&uLocal_937) > 15f)
					{
						if (func_427(uParam0, &(vLocal_18[6 /*3*/]), &iLocal_221, 30f, 1108082688 /* Float: 35f */, 0, 0, 0))
						{
							__LIB_1__::func_148(&uLocal_937);
							vLocal_18[23 /*3*/].f_1 = 0;
						}
					}
				}
			}
			break;
		case 12:
			if (!__LIB_11__::func_307(iLocal_221, iLocal_308, 0, 1077936128 /* Float: 3f */))
			{
				if (__LIB_0__::func_266(iLocal_221, Local_309, 1f, 1, 1))
				{
					func_304(14);
				}
				if (__LIB_0__::func_266(Global_35, Local_309, 2f, 1, 1))
				{
					func_304(13);
				}
			}
			break;
		case 13:
			if (!__LIB_11__::func_307(iLocal_221, iLocal_316, 0, 1077936128 /* Float: 3f */))
			{
				if (__LIB_0__::func_266(iLocal_221, vLocal_317, 1f, 1, 1))
				{
					func_304(15);
				}
				if (__LIB_0__::func_266(Global_35, vLocal_317, 2f, 1, 1))
				{
					func_304(12);
				}
			}
			break;
		case 14:
			if (iLocal_974 == 13 && iLocal_220 == 5)
			{
				func_304(16);
			}
			break;
		case 15:
			if (iLocal_974 == 13 && iLocal_220 == 5)
			{
				func_304(16);
			}
			break;
		case 16:
			if (!__LIB_0__::func_163(iLocal_221, 1120685857))
			{
				TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iLocal_221, Local_309, 100f, 0, 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_221, Local_309, 3f, 0, 0, 0);
			}
			break;
		case 17:
			if (__LIB_0__::func_266(iLocal_221, 2102.409f, -288.1169f, 41.9985f, 2f, 1, 1) || __LIB_0__::func_266(iLocal_221, 2101.109f, -285.1169f, 41.9985f, 2f, 1, 1))
			{
				func_304(18);
			}
			break;
		case 18:
			func_718();
			break;
		case 7:
			if (ANIMSCENE::_0x337F1CC8EE895601(Local_995[4 /*5*/], "EXCONFEDINFORMANT"))
			{
				func_304(8);
				return;
			}
			if (!__LIB_0__::func_163(iLocal_221, 1369124074))
			{
				TASK::TASK_ENTER_ANIM_SCENE(iLocal_221, Local_995[4 /*5*/], "EXCONFEDINFORMANT", "", 1069379748 /* Float: 1.48f */, 0, 2, 20000, -1082130432 /* Float: -1f */);
			}
			break;
		case 9:
			if (!__LIB_0__::func_163(iLocal_221, 713668775))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_221, 2077.416f, -368.6758f, 41.2787f, 1f, -1, 0.1f, 8192, 40000f);
			}
			if (__LIB_0__::func_266(iLocal_221, 2077.776f, -369.5715f, 41.3406f, 1.25f, 1, 1))
			{
				func_304(10);
			}
			break;
		case 22:
			if (!__LIB_0__::func_163(iLocal_221, 518218985))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_221, Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
			}
			break;
		case 21:
			if (!__LIB_0__::func_163(iLocal_221, 242628503))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar12);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2103.558f, -277.5329f, 41.8966f, 1f, -1, 0.25f, 8192, 357.7802f);
				TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("WORLD_HUMAN_SMOKE"), -1, true, 0, -1f, false);
				TASK::CLOSE_SEQUENCE_TASK(iVar12);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_221, iVar12);
				TASK::CLEAR_SEQUENCE_TASK(&iVar12);
			}
			break;
	}
}

void func_336(var uParam0)
{
	int iVar0;
	int iVar1;
	if (!func_331(2))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_467[iVar0 /*41*/]))
			{
				if (func_719(iVar0))
				{
					if ((Local_467[iVar0 /*41*/].f_10 != 6 && Local_467[iVar0 /*41*/].f_10 != 7) && Local_467[iVar0 /*41*/].f_10 != 11)
					{
						if (__LIB_0__::func_266(Local_467[iVar0 /*41*/], vLocal_239, 50f, 1, 1))
						{
							func_720();
						}
					}
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = iVar0;
		func_721(uParam0, iVar1);
		iVar0++;
	}
	iLocal_324++;
	if (iLocal_324 >= 5)
	{
		iLocal_324 = 0;
	}
}

void func_337()
{
	if (!bLocal_993)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_272[0 /*7*/]))
		{
			if (!PED::IS_PED_DEAD_OR_DYING(Local_272[0 /*7*/], true))
			{
				if (PED::_IS_PED_HOGTIED(Local_272[0 /*7*/]))
				{
					Local_272[0 /*7*/].f_5 = 1;
				}
				else if (Local_272[0 /*7*/].f_5)
				{
					if (!FIRE::IS_ENTITY_ON_FIRE(Local_272[0 /*7*/]))
					{
						if (!__LIB_0__::func_163(Local_272[0 /*7*/], 518218985))
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_272[0 /*7*/], false);
							PED::SET_PED_FLEE_ATTRIBUTES(Local_272[0 /*7*/], 1536, true);
							TASK::TASK_SMART_FLEE_COORD(Local_272[0 /*7*/], vLocal_239, 10000f, -1, 12544, 1077936128);
						}
						else
						{
							__LIB_1__::func_715(12, 0, 0, 0, Local_272[0 /*7*/], 0, 1065353216 /* Float: 1f */, 0);
							__LIB_1__::func_532(Global_1347702[56 /*49*/].f_15, 1);
							bLocal_993 = true;
						}
					}
					else
					{
						__LIB_7__::func_448(Global_1347702[56 /*49*/].f_15, 1);
					}
				}
			}
			else
			{
				__LIB_7__::func_448(Global_1347702[56 /*49*/].f_15, 1);
			}
		}
	}
}

void func_338()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_944[iVar0 /*7*/]))
		{
			if (!Local_944[iVar0 /*7*/].f_5)
			{
				if (__LIB_0__::func_48(Global_35, Local_944[iVar0 /*7*/], 6f, 1))
				{
					Local_944[iVar0 /*7*/].f_5 = 1;
				}
				else if (__LIB_0__::func_48(Global_35, Local_944[iVar0 /*7*/], 9f, 1))
				{
					if (!Local_944[iVar0 /*7*/].f_6)
					{
						if (!AUDIO::IS_ANIMAL_VOCALIZATION_PLAYING(Local_944[iVar0 /*7*/]))
						{
							AUDIO::PLAY_ANIMAL_VOCALIZATION(Local_944[iVar0 /*7*/], "ANGRY", false);
						}
						else
						{
							Local_944[iVar0 /*7*/].f_6 = 1;
						}
					}
				}
			}
			else if (!__LIB_0__::func_163(Local_944[iVar0 /*7*/], 780511057))
			{
				TASK::TASK_COMBAT_PED(Local_944[iVar0 /*7*/], Global_35, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_339()
{
	if (iLocal_974 > 5)
	{
		__LIB_1__::func_572(Global_36, 500f, 0, 0, 0, 0, 0);
	}
	iLocal_994++;
	if (iLocal_994 > 10)
	{
		__LIB_0__::func_568(Global_36, 300f, 0);
		iLocal_994 = 0;
	}
	POPULATION::_0xF45E46DEECF7DF6E(2048, 0, 0, -1, -1);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
}

void func_340(var uParam0)
{
	if (func_331(512))
	{
		if (!func_331(64))
		{
			func_726(uParam0);
		}
		else
		{
			__LIB_1__::func_538(0);
		}
	}
	if (!__LIB_0__::func_71(Global_35))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	}
	else if (!__LIB_0__::func_163(Global_35, 501393341))
	{
		TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
	}
}

void func_341(var uParam0)
{
	switch (iLocal_974)
	{
		case 2:
		case 3:
		case 4:
			if (__LIB_12__::func_645(uParam0) != 0)
			{
				__LIB_12__::func_937(uParam0, 0);
			}
			break;
		case 5:
		case 6:
			if (__LIB_12__::func_645(uParam0) != 1)
			{
				__LIB_12__::func_937(uParam0, 1);
			}
			break;
		case 7:
		case 8:
		case 9:
		case 10:
			if (__LIB_12__::func_645(uParam0) != 2)
			{
				__LIB_12__::func_937(uParam0, 2);
			}
			break;
		case 11:
		case 12:
			if (__LIB_12__::func_645(uParam0) != 3)
			{
				__LIB_12__::func_937(uParam0, 3);
			}
			break;
		case 13:
			if (__LIB_12__::func_645(uParam0) != 4)
			{
				__LIB_12__::func_937(uParam0, 4);
			}
			break;
		case 14:
			if (__LIB_12__::func_645(uParam0) != 5)
			{
				__LIB_12__::func_937(uParam0, 5);
			}
			break;
		case 15:
			if (__LIB_12__::func_645(uParam0) != 6)
			{
				__LIB_12__::func_937(uParam0, 6);
			}
			break;
		case 16:
		case 17:
			if (__LIB_12__::func_645(uParam0) != 7)
			{
				__LIB_12__::func_937(uParam0, 7);
			}
			break;
	}
}

void func_343(var uParam0)
{
	if (!func_331(128))
	{
		if (__LIB_0__::func_266(Global_35, vLocal_298, 150f, 1, 1))
		{
			if (func_301(uParam0))
			{
				func_299(128);
			}
		}
	}
}

void func_344()
{
	if (!func_331(16384))
	{
		if (__LIB_0__::func_266(Global_35, Local_290.f_1, 75f, 1, 1))
		{
			if (func_737())
			{
				func_299(16384);
			}
		}
	}
}

bool func_345(var uParam0)
{
	switch (iLocal_975)
	{
		case 0:
			__LIB_12__::func_997(uParam0, func_62(0), func_62(1), 0, 1, 0);
			func_303(1);
			func_738(1);
			__LIB_5__::func_511(1);
			iLocal_975 = 1;
			func_612(4);
			__LIB_12__::func_938(iLocal_221);
			break;
		case 1:
			func_608(uParam0);
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (!__LIB_0__::func_163(Global_35, 501393341))
				{
					TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
				}
			}
			if (iLocal_1056 == 12 || func_423(6, 0.82f))
			{
				func_304(2);
				iLocal_975 = 2;
			}
			break;
		case 2:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_995[6 /*5*/]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_995[6 /*5*/]);
			}
			return true;
	}
	return false;
}

bool func_346(var uParam0)
{
	switch (iLocal_975)
	{
		case 0:
			if (func_295(0))
			{
				func_303(1);
				func_738(1);
				func_494(uParam0, &(vLocal_160[0 /*3*/]), 1);
				MISC::_SET_WEATHER_TYPE(joaat("FOG"), false, true, true, 30f, false);
				func_304(2);
				iLocal_975 = 1;
				__LIB_12__::func_938(iLocal_221);
			}
			break;
		case 1:
			func_740(iLocal_221, 1f);
			if (!__LIB_0__::func_48(Global_35, iLocal_221, 15f, 1))
			{
				func_427(uParam0, &(vLocal_18[23 /*3*/]), &iLocal_221, 1103626240 /* Float: 25f */, 1108082688 /* Float: 35f */, 0, 0, 0);
				func_741(uParam0, &(vLocal_160[0 /*3*/]), 0);
			}
			else
			{
				vLocal_18[23 /*3*/].f_1 = 0;
			}
			if (func_742(1))
			{
				func_298(7, 0, 0);
			}
			if (func_742(36) && func_423(7, 0.99f))
			{
				iLocal_975 = 2;
			}
			break;
		case 2:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_995[7 /*5*/]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_995[7 /*5*/]);
			}
			return true;
	}
	return false;
}

bool func_347(var uParam0)
{
	switch (iLocal_975)
	{
		case 0:
			func_738(1);
			func_304(2);
			func_743();
			iLocal_975 = 1;
			func_303(1);
			__LIB_12__::func_938(iLocal_221);
			break;
		case 1:
			func_494(uParam0, &(vLocal_160[0 /*3*/]), 1);
			func_740(iLocal_221, 1f);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), true);
			if (!__LIB_0__::func_48(Global_35, iLocal_221, 6.5f, 1))
			{
				func_741(uParam0, &(vLocal_160[0 /*3*/]), 0);
			}
			func_744(1);
			if (iLocal_1131 >= 4)
			{
				iLocal_1133++;
				func_304(6);
			}
			if (iLocal_1131 >= 3)
			{
				if (func_331(512))
				{
					func_427(uParam0, &(vLocal_18[1 /*3*/]), &iLocal_221, -1f, 1108082688 /* Float: 35f */, 0, 1, 0);
					if (iLocal_1133 > 10 && vLocal_18[1 /*3*/].f_1)
					{
						iLocal_975 = 2;
					}
				}
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_348(var uParam0)
{
	switch (iLocal_975)
	{
		case 0:
			func_738(1);
			func_304(2);
			iLocal_975 = 1;
			func_303(1);
			__LIB_12__::func_938(iLocal_221);
			break;
		case 1:
			func_494(uParam0, &(vLocal_160[0 /*3*/]), 1);
			if (!__LIB_0__::func_48(Global_35, iLocal_221, 10f, 1))
			{
				func_427(uParam0, &(vLocal_18[23 /*3*/]), &iLocal_221, 1103626240 /* Float: 25f */, 1108082688 /* Float: 35f */, 0, 0, 0);
				func_741(uParam0, &(vLocal_160[0 /*3*/]), 0);
			}
			else
			{
				vLocal_18[23 /*3*/].f_1 = 0;
			}
			func_740(iLocal_221, 2f);
			if (func_742(70))
			{
				iLocal_975 = 2;
			}
			else if (func_742(58))
			{
				func_299(262144);
			}
			else if (func_742(54))
			{
			}
			if (!Local_995[4 /*5*/].f_3)
			{
				Local_995[4 /*5*/].f_3 = func_300(4, 0, "");
			}
			break;
		case 2:
			PED::_0x935CF6E42BAF7F4D(iLocal_221);
			PED::_0x935CF6E42BAF7F4D(Global_35);
			return true;
	}
	return false;
}

bool func_349(var uParam0)
{
	switch (iLocal_975)
	{
		case 0:
			func_738(1);
			__LIB_12__::func_997(uParam0, func_62(1), func_62(2), 1, 2, 0);
			__LIB_12__::func_938(iLocal_221);
			vLocal_160[0 /*3*/].f_1 = 0;
			vLocal_160[0 /*3*/].f_2 = 0;
			func_303(1);
			if (!Local_995[4 /*5*/].f_3)
			{
				Local_995[4 /*5*/].f_3 = func_300(4, 0, "");
			}
			else
			{
				func_304(7);
				iLocal_975 = 1;
			}
			break;
		case 1:
			func_494(uParam0, &(vLocal_160[0 /*3*/]), 1);
			if (!__LIB_0__::func_48(Global_35, iLocal_221, 6.5f, 1))
			{
				func_741(uParam0, &(vLocal_160[0 /*3*/]), 0);
			}
			if (!Local_995[4 /*5*/].f_4)
			{
				if (ANIMSCENE::_0x337F1CC8EE895601(Local_995[4 /*5*/], "EXCONFEDINFORMANT"))
				{
					if (__LIB_0__::func_163(iLocal_221, 1369124074))
					{
						TASK::CLEAR_PED_TASKS(iLocal_221, true, false);
						iLocal_226 = 23;
					}
					else
					{
						Local_995[4 /*5*/].f_4 = func_298(4, 0, 0);
					}
				}
			}
			else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_995[4 /*5*/]))
			{
				if (func_423(4, 0.995f))
				{
					func_304(2);
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_995[4 /*5*/]);
					iLocal_975 = 2;
				}
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_350(var uParam0)
{
	switch (iLocal_975)
	{
		case 0:
			func_743();
			func_738(1);
			func_304(2);
			iLocal_1133 = 0;
			iLocal_975 = 1;
			func_303(1);
			__LIB_12__::func_938(iLocal_221);
			break;
		case 1:
			func_494(uParam0, &(vLocal_160[0 /*3*/]), 1);
			if (!__LIB_0__::func_48(Global_35, iLocal_221, 6.5f, 1))
			{
				func_741(uParam0, &(vLocal_160[0 /*3*/]), 0);
			}
			if (func_742(86))
			{
				func_744(0);
				func_740(iLocal_221, 2f);
				if (iLocal_1131 >= 4)
				{
					func_304(6);
					iLocal_1133++;
				}
				if (iLocal_1131 >= 3)
				{
					func_427(uParam0, &(vLocal_18[2 /*3*/]), &iLocal_221, -1f, 1108082688 /* Float: 35f */, 0, 1, 0);
					if (iLocal_1133 > 10)
					{
						if (vLocal_18[2 /*3*/].f_1 == 1)
						{
							iLocal_975 = 2;
						}
					}
				}
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_351(var uParam0)
{
	switch (iLocal_975)
	{
		case 0:
			if (!__LIB_6__::func_904())
			{
				__LIB_12__::func_938(iLocal_221);
				func_738(1);
				vLocal_160[0 /*3*/].f_1 = 0;
				vLocal_160[0 /*3*/].f_2 = 0;
				func_304(2);
				iLocal_975 = 1;
				func_303(1);
			}
			break;
		case 1:
			func_740(iLocal_221, 1.5f);
			func_494(uParam0, &(vLocal_160[0 /*3*/]), 1);
			if (!__LIB_0__::func_48(Global_35, iLocal_221, 6.5f, 1))
			{
				func_741(uParam0, &(vLocal_160[0 /*3*/]), 0);
			}
			if (func_742(89))
			{
				func_427(uParam0, &(vLocal_18[13 /*3*/]), &iLocal_221, 1103626240 /* Float: 25f */, 1108082688 /* Float: 35f */, 0, 0, 0);
				func_427(uParam0, &(vLocal_18[14 /*3*/]), &iLocal_221, 1103626240 /* Float: 25f */, 1108082688 /* Float: 35f */, 0, 0, 0);
			}
			if (func_742(97))
			{
				iLocal_975 = 2;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_352(var uParam0)
{
	switch (iLocal_975)
	{
		case 0:
			__LIB_12__::func_938(iLocal_221);
			if (func_746() && func_300(0, 0, 0))
			{
				func_738(1);
				__LIB_12__::func_997(uParam0, func_62(2), func_62(3), 2, 3, 0);
				iLocal_975 = 1;
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_221, joaat("WEAPON_MELEE_LANTERN"), true, 1, false, false);
				func_303(1);
				func_304(9);
			}
			break;
		case 1:
			func_740(iLocal_221, 2f);
			func_494(uParam0, &(vLocal_160[0 /*3*/]), 1);
			if (!__LIB_0__::func_48(Global_35, iLocal_221, 6.5f, 1))
			{
				func_741(uParam0, &(vLocal_160[0 /*3*/]), 0);
			}
			if (!Local_995[0 /*5*/].f_4)
			{
				if (iLocal_226 == 10)
				{
					Local_995[0 /*5*/].f_4 = func_298(0, 0, func_1(0));
				}
			}
			else
			{
				if (func_423(0, 0.42f))
				{
					bLocal_244 = false;
				}
				if (func_423(0, 1064514355 /* Float: 0.95f */))
				{
					WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_221, false, true);
					WEAPON::REMOVE_WEAPON_FROM_PED(iLocal_221, joaat("WEAPON_MELEE_LANTERN"), true, -142743235);
					WEAPON::_0xCEF4C65DE502D367(iLocal_221, 1, 1, 1, 0);
					WEAPON::_0x94A3C1B804D291EC(iLocal_221, 1, 0, 0, 1);
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_221, joaat("WEAPON_UNARMED"), true, 1, false, false);
					WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_221, joaat("WEAPON_REVOLVER_CATTLEMAN"), 100, true, false, 0, true, 0.5f, 1f, 752097756, true, 0f, false);
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_221, joaat("WEAPON_REVOLVER_CATTLEMAN"), true, 0, false, false);
					iLocal_975 = 2;
				}
			}
			break;
		case 2:
			__LIB_2__::func_919(iLocal_1042, 1, 1);
			return true;
	}
	return false;
}

bool func_353(var uParam0)
{
	switch (iLocal_975)
	{
		case 0:
			func_738(1);
			__LIB_12__::func_938(iLocal_221);
			vLocal_160[0 /*3*/].f_1 = 0;
			vLocal_160[0 /*3*/].f_2 = 0;
			WEAPON::_0x94A3C1B804D291EC(iLocal_221, 1, 0, 0, 1);
			WEAPON::_0xCEF4C65DE502D367(iLocal_221, 0, 1, 0, 0);
			__LIB_0__::func_202(iLocal_221, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_221, joaat("WEAPON_REVOLVER_CATTLEMAN"), true, 0, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_221, joaat("WEAPON_UNARMED"), true, 1, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_221, joaat("WEAPON_UNARMED"), true, 1, true, false);
			TASK::TASK_SWAP_WEAPON(iLocal_221, 1, 1, 0, 1);
			func_304(2);
			func_303(1);
			iLocal_975 = 1;
			break;
		case 1:
			func_427(uParam0, &(vLocal_18[11 /*3*/]), &iLocal_221, 1103626240 /* Float: 25f */, 1108082688 /* Float: 35f */, 0, 0, 0);
			func_494(uParam0, &(vLocal_160[0 /*3*/]), 1);
			func_748(uParam0);
			if (func_749() && vLocal_18[11 /*3*/].f_1)
			{
				if (!__LIB_6__::func_904())
				{
					if (!__LIB_0__::func_75(&uLocal_1134))
					{
						__LIB_1__::func_148(&uLocal_1134);
					}
					else if (!vLocal_18[9 /*3*/].f_1)
					{
						if (__LIB_0__::func_264(&uLocal_1134) > 2f)
						{
							func_427(uParam0, &(vLocal_18[9 /*3*/]), &iLocal_221, 1103626240 /* Float: 25f */, 1108082688 /* Float: 35f */, 0, 0, 0);
						}
					}
					else if (__LIB_0__::func_264(&uLocal_1134) > 2f)
					{
						func_427(uParam0, &(vLocal_18[10 /*3*/]), &iLocal_221, 1103626240 /* Float: 25f */, 1108082688 /* Float: 35f */, 0, 0, 0);
					}
				}
				else
				{
					__LIB_1__::func_148(&uLocal_1134);
				}
			}
			if (func_742(131))
			{
				iLocal_975 = 2;
			}
			break;
		case 2:
			func_523();
			return true;
	}
	return false;
}

bool func_354(var uParam0)
{
	switch (iLocal_975)
	{
		case 0:
			__LIB_12__::func_997(uParam0, func_62(3), func_62(4), 3, 4, 0);
			__LIB_12__::func_938(iLocal_221);
			func_304(12);
			func_523();
			__LIB_1__::func_148(&uLocal_1137);
			iLocal_975 = 1;
			func_303(1);
			break;
		case 1:
			func_427(uParam0, &(vLocal_18[17 /*3*/]), &iLocal_221, 1103626240 /* Float: 25f */, 1108082688 /* Float: 35f */, 0, 0, 1);
			func_494(uParam0, &(vLocal_160[4 /*3*/]), 1);
			if (__LIB_0__::func_27(iLocal_242, 2))
			{
				iLocal_975 = 2;
			}
			else if (__LIB_0__::func_265(&uLocal_1137) > 6f)
			{
				if (!bLocal_1140)
				{
					func_631(0, 7);
					bLocal_1140 = true;
				}
			}
			if (bLocal_1140 && __LIB_0__::func_255(Local_272[0 /*7*/], 0))
			{
				func_427(uParam0, &(vLocal_18[16 /*3*/]), &iLocal_221, 1103626240 /* Float: 25f */, 1108082688 /* Float: 35f */, 0, 0, 0);
			}
			if (vLocal_18[16 /*3*/].f_1)
			{
				func_750(uParam0);
			}
			func_748(uParam0);
			func_356();
			if (func_751())
			{
				__LIB_5__::func_20(0, 0);
				iLocal_975 = 2;
			}
			break;
		case 2:
			__LIB_0__::func_325(&iLocal_237);
			return true;
	}
	return false;
}

bool func_355(var uParam0)
{
	switch (iLocal_975)
	{
		case 0:
			__LIB_12__::func_938(iLocal_221);
			func_304(16);
			func_738(0);
			iLocal_975 = 1;
			iLocal_1141 = 0;
			vLocal_18[11 /*3*/].f_1 = 1;
			vLocal_18[18 /*3*/].f_1 = 1;
			func_303(0);
			break;
		case 1:
			func_356();
			func_753();
			if (__LIB_0__::func_113())
			{
				if (func_427(uParam0, &(vLocal_18[30 /*3*/]), &Global_35, 1103626240 /* Float: 25f */, 1108082688 /* Float: 35f */, 0, 0, 0))
				{
					__LIB_1__::func_148(&uLocal_1145);
				}
				if (__LIB_0__::func_264(&uLocal_1145) > 5f)
				{
					func_427(uParam0, &(vLocal_18[32 /*3*/]), &Global_35, 1103626240 /* Float: 25f */, 1108082688 /* Float: 35f */, 0, 0, 0);
				}
			}
			else
			{
				if (func_427(uParam0, &(vLocal_18[31 /*3*/]), &Global_35, 1103626240 /* Float: 25f */, 1108082688 /* Float: 35f */, 0, 0, 0))
				{
					__LIB_1__::func_148(&uLocal_1145);
				}
				if (__LIB_0__::func_264(&uLocal_1145) > 5f)
				{
					func_427(uParam0, &(vLocal_18[33 /*3*/]), &Global_35, 1103626240 /* Float: 25f */, 1108082688 /* Float: 35f */, 0, 0, 0);
				}
			}
			if (vLocal_18[11 /*3*/].f_1)
			{
				func_427(uParam0, &(vLocal_18[11 /*3*/]), &iLocal_221, 1103626240 /* Float: 25f */, 1108082688 /* Float: 35f */, 0, 0, 1);
			}
			if (vLocal_18[18 /*3*/].f_1)
			{
				func_427(uParam0, &(vLocal_18[18 /*3*/]), &iLocal_221, 1103626240 /* Float: 25f */, 1108082688 /* Float: 35f */, 0, 0, 1);
			}
			func_494(uParam0, &(vLocal_160[4 /*3*/]), 1);
			func_754(uParam0, 1);
			if (func_751())
			{
				__LIB_5__::func_20(0, 0);
				iLocal_975 = 2;
			}
			break;
		case 2:
			FIRE::STOP_FIRE_IN_RANGE(vLocal_239, 15f);
			func_755(&iLocal_221, 0);
			return true;
	}
	return false;
}

void func_356()
{
	if (iLocal_974 < 15)
	{
		func_756();
	}
	else
	{
		func_757();
	}
}

bool func_357(var uParam0)
{
	switch (iLocal_975)
	{
		case 0:
			if (!iLocal_226 == 18)
			{
				func_304(17);
			}
			WEAPON::_0x94A3C1B804D291EC(iLocal_221, 1, 0, 0, 1);
			WEAPON::_0xCEF4C65DE502D367(iLocal_221, 0, 1, 0, 0);
			__LIB_0__::func_202(iLocal_221, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_221, joaat("WEAPON_REVOLVER_CATTLEMAN"), true, 0, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_221, joaat("WEAPON_UNARMED"), true, 1, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_221, joaat("WEAPON_UNARMED"), true, 1, true, false);
			iLocal_975 = 1;
			break;
		case 1:
			func_356();
			func_494(uParam0, &(vLocal_160[7 /*3*/]), 1);
			func_427(uParam0, &(vLocal_18[21 /*3*/]), &iLocal_221, 50f, 60f, 0, 0, 0);
			func_741(uParam0, &(vLocal_160[7 /*3*/]), 20f);
			if (!MAP::DOES_BLIP_EXIST(iLocal_237))
			{
				iLocal_237 = __LIB_4__::func_983(408396114, vLocal_239, 1);
			}
			if (func_759(uParam0))
			{
				iLocal_975 = 2;
			}
			break;
		case 2:
			__LIB_0__::func_325(&iLocal_237);
			return true;
	}
	return false;
}

bool func_358(var uParam0)
{
	switch (iLocal_975)
	{
		case 0:
			__LIB_12__::func_997(uParam0, func_62(4), func_62(5), 4, 5, 0);
			func_738(1);
			iLocal_1141 = 0;
			__LIB_0__::func_37(&uLocal_1142);
			if (func_295(1))
			{
				__LIB_12__::func_938(iLocal_221);
				func_303(0);
				iLocal_975 = 1;
			}
			break;
		case 1:
			func_753();
			if (iLocal_1047 == 18 || iLocal_1047 == 17)
			{
				if (__LIB_0__::func_113())
				{
					func_427(uParam0, &(vLocal_18[36 /*3*/]), &Global_35, 1103626240 /* Float: 25f */, 1108082688 /* Float: 35f */, 0, 0, 0);
				}
				else
				{
					func_427(uParam0, &(vLocal_18[37 /*3*/]), &Global_35, 1103626240 /* Float: 25f */, 1108082688 /* Float: 35f */, 0, 0, 0);
				}
			}
			func_754(uParam0, 0);
			func_494(uParam0, &(vLocal_160[5 /*3*/]), 1);
			func_494(uParam0, &(vLocal_160[5 /*3*/]), 0);
			func_356();
			if (func_760())
			{
				if (__LIB_0__::func_113())
				{
					func_427(uParam0, &(vLocal_18[40 /*3*/]), &Global_35, 1103626240 /* Float: 25f */, 1108082688 /* Float: 35f */, 0, 0, 0);
				}
				else
				{
					func_427(uParam0, &(vLocal_18[41 /*3*/]), &Global_35, 1103626240 /* Float: 25f */, 1108082688 /* Float: 35f */, 0, 0, 0);
				}
				if (!__LIB_0__::func_75(&uLocal_1148))
				{
					__LIB_1__::func_148(&uLocal_1148);
				}
				else if (__LIB_0__::func_264(&uLocal_1148) > 3f)
				{
					iLocal_975 = 2;
				}
			}
			break;
		case 2:
			func_755(&iLocal_221, 0);
			FIRE::STOP_FIRE_IN_RANGE(vLocal_239, 15f);
			return true;
	}
	return false;
}

bool func_359(var uParam0)
{
	switch (iLocal_975)
	{
		case 0:
			func_738(1);
			iLocal_975 = 1;
			func_304(18);
			__LIB_0__::func_172(iLocal_307);
			break;
		case 1:
			func_494(uParam0, &(vLocal_160[3 /*3*/]), 1);
			if (func_761(uParam0))
			{
				iLocal_975 = 2;
			}
			break;
		case 2:
			__LIB_0__::func_325(&iLocal_237);
			__LIB_0__::func_325(&iLocal_238);
			__LIB_0__::func_769();
			return true;
	}
	return false;
}

void func_395(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			__LIB_1__::func_755();
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
		__LIB_1__::func_642(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871(), __LIB_0__::func_113());
	}
	if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
	{
		iVar9 = __LIB_1__::func_145(iParam0, &uVar7, &iVar8);
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
						func_524(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_524(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_524(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_524(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_524(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_524(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_524(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_524(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_524(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_524(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_524(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_524(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_524(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_524(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_524(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_524(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_524(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_524(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_524(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_524(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_524(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_524(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_524(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_524(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_524(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_798();
						func_799(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_524(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_395(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_395(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_395(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_524(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_524(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				Jump @5249; //curOff = 4135
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
				Jump @5249; //curOff = 5187
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
				__LIB_0__::func_894(iParam0);
				func_834();
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
									func_524(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
void func_396(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	if (STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		__LIB_0__::func_701(__LIB_0__::func_700(iParam0), __LIB_0__::func_299(iParam0), iVar0);
		if (__LIB_0__::func_13(32768))
		{
			iVar1 = __LIB_0__::func_700(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == __LIB_1__::func_293(0, 10, 11, joaat("CABR01"))))
			{
				Global_1898438 = MISC::GET_GAME_TIMER();
				Global_1879514.f_1 = iParam0;
				Global_1879514.f_19 = __LIB_1__::func_753();
				Global_1879514.f_18 = 1;
			}
		}
	}
	if (__LIB_0__::func_702(iParam0))
	{
		__LIB_1__::func_559(iParam0, 0, 2);
	}
	else if (__LIB_1__::func_44(iParam0))
	{
		if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
		{
			if (bParam1)
			{
				__LIB_1__::func_242(iParam0, 6);
			}
			else
			{
				__LIB_1__::func_242(iParam0, 5);
			}
			__LIB_1__::func_470(iParam0);
		}
	}
	switch (__LIB_0__::func_700(iParam0))
	{
		case 1:
			switch (__LIB_0__::func_76(iParam0))
			{
				case 12:
				case 19:
				case 20:
				case 24:
				case 25:
				case 28:
				case 29:
				case 34:
				case 53:
				case 57:
					Global_1879514.f_12 = 1;
					break;
				case 69:
				case 70:
				case 71:
				case 74:
				case 76:
					Global_1879514.f_14 = 1;
					break;
			}
			break;
		case 8:
			switch (__LIB_0__::func_76(iParam0))
			{
				case 37:
				case 63:
				case 94:
				case 116:
					Global_1879514.f_12 = 1;
					break;
				case 9:
					Global_1879514.f_14 = 1;
					break;
			}
			break;
	}
}

Vector3 func_399(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	vVar0 = { func_841(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { func_841(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

bool func_423(int iParam0, float fParam1)
{
	float fVar0;
	fVar0 = 0f;
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_995[iParam0 /*5*/], false))
	{
		return true;
	}
	else
	{
		fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_995[iParam0 /*5*/]);
		if (fVar0 >= fParam1)
		{
			return true;
		}
	}
	return false;
}

int func_424(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
			__LIB_1__::func_148(&(iParam1->f_13));
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
					if (__LIB_10__::func_887(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_424(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_8__::func_963(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_10__::func_888(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_2__::func_589(*iParam0, iParam1, uParam3))
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
				if (__LIB_6__::func_743(iParam0, iParam1, fParam4, bVar6))
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
					__LIB_4__::func_166(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_10__::func_888(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_8__::func_963(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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
				if (__LIB_6__::func_743(iParam0, iParam1, fParam4, bVar6))
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

void func_425()
{
	__LIB_12__::func_938(iLocal_221);
	__LIB_2__::func_480(&Local_859, 0, 0, 1, 0);
}

bool func_427(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!uParam1->f_1 && !ENTITY::IS_ENTITY_DEAD(*iParam2))
	{
		if (bParam5)
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(*iParam2))
			{
				return false;
			}
		}
		if (bParam6)
		{
			__LIB_5__::func_20(0, 0);
		}
		if (__LIB_6__::func_904() || __LIB_5__::func_463())
		{
			return false;
		}
		if (__LIB_0__::func_48(*iParam2, Global_35, fParam3, 1) || fParam3 == -1f)
		{
			if (__LIB_12__::func_876(uParam0, *uParam1, 0))
			{
				uParam1->f_1 = 1;
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	else if (__LIB_13__::func_273(*uParam1))
	{
		if (fParam3 > -1f)
		{
			if (!__LIB_0__::func_48(*iParam2, Global_35, fParam4, 1))
			{
				__LIB_6__::func_900(*uParam1, 0, 0);
			}
		}
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (bParam7)
			{
				__LIB_6__::func_900(*uParam1, 0, 0);
			}
		}
	}
	return false;
}

void func_431()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_2__::func_788(&(Local_467[iVar0 /*41*/]), 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_2__::func_788(&(Local_467[iVar0 /*41*/]), 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		__LIB_2__::func_788(&(Local_272[iVar0 /*7*/]), 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		__LIB_2__::func_788(&(Local_330[iVar0 /*9*/]), 0, 1, 1);
		iVar0++;
	}
}

char* func_465(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "script@rcm@craw@ig@ig3_oldcajunreactstobats@ig3_oldcajunreactstobats";
		case 2:
			return "script@rcm@craw@ig@ig5_oldcajunreactstobats@ig5_oldcajunreactstobats";
		case 3:
			return "script@beat@wilderness@discoverables@crawley_2@crawley_2";
		case 0:
			return "script@rcm@CRAW@IG@IG6_Dispose_Of_Lantern@IG6_Dispose_Of_Lantern";
		case 5:
			return "script@rcm@craw@ig@ig7_cajunlooksforeward@ig7_cajunlooksforeward";
		case 6:
			return "script@rcm@craw@ig@ig1_meet_cajun@ig1_meet_cajun";
		case 7:
			return "script@rcm@craw@ig@ig2_walk_n_talk@ig2_walk_n_talk";
		case 4:
			return "script@rcm@craw@ig@ig4_oldcajunreactstobodies@ig4_oldcajunreactstobodies";
		case 8:
			return "script@rcm@craw@ig@ig8_outro@ig8_outro";
		default:
			break;
	}
	return "";
}

int func_489(int iParam0, int iParam1)
{
	var uVar0;
	return func_948(&uVar0, iParam0, iParam1);
}

int func_494(var uParam0, var uParam1, bool bParam2)
{
	if (!uParam1->f_1)
	{
		if (bParam2)
		{
			if (!uParam1->f_2)
			{
				__LIB_13__::func_89(uParam0, *uParam1, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				uParam1->f_2 = 1;
				return 1;
			}
		}
		else
		{
			__LIB_1__::func_422(*uParam1, 7500, 0, 1, 0, 0, -1, -1, 0);
			uParam1->f_1 = 1;
			return 1;
		}
	}
	return 0;
}

void func_521()
{
	__LIB_2__::func_480(&Local_898, 0, 0, 1, 0);
	__LIB_2__::func_593(&iLocal_877, &Local_898);
	__LIB_12__::func_938(iLocal_221);
}

void func_523()
{
	__LIB_5__::func_438(&uLocal_977);
	__LIB_1__::func_727(Global_35, 1);
	bLocal_976 = false;
}

bool func_524(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_524(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_524(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_524(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_524(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_524(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_524(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_524(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_524(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_524(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_524(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_524(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

bool func_580()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_227[iVar0]))
		{
			iLocal_227[iVar0] = __LIB_8__::func_931(joaat("A_M_M_UNICORPSE_01"), vLocal_230[iVar0 /*3*/], 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			return false;
		}
		if (!__LIB_0__::func_255(iLocal_227[iVar0], 0))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_227[iVar0], true);
			if (iVar0 == 0)
			{
				__LIB_0__::func_862(iLocal_227[iVar0], -870216768);
			}
			else
			{
				__LIB_0__::func_862(iLocal_227[iVar0], -90937179);
			}
		}
		iVar0++;
	}
	if (func_298(3, 1, ""))
	{
		return true;
	}
	return false;
}

void func_582(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, true))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, true);
	}
	PED::SET_PED_CAN_BE_TARGETTED(*iParam0, false);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*iParam0, false);
	if (bParam5)
	{
		ENTITY::SET_ENTITY_COORDS(*iParam0, vParam1, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(*iParam0, fParam4);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
}

void func_608(var uParam0)
{
	switch (iLocal_1056)
	{
		case 3:
			if (func_1104())
			{
				switch (iLocal_1057)
				{
					case 0:
						sLocal_1053 = func_1105();
						func_1106(1);
						break;
					case 1:
						func_298(6, 0, sLocal_1053);
						if (__LIB_0__::func_264(&uLocal_1050) > 20f)
						{
							func_612(1);
						}
						break;
				}
			}
			else
			{
				if (__LIB_0__::func_75(&uLocal_1050))
				{
					__LIB_0__::func_37(&uLocal_1050);
				}
				func_612(0);
			}
			break;
		case 1:
			if (bLocal_1064 && vLocal_18[3 /*3*/].f_1)
			{
				func_427(uParam0, &(vLocal_18[4 /*3*/]), &iLocal_221, 1103626240 /* Float: 25f */, 1108082688 /* Float: 35f */, 0, 0, 0);
			}
			switch (iLocal_1057)
			{
				case 0:
					sLocal_1054 = func_1107();
					func_1106(1);
					break;
				case 1:
					func_298(6, 0, sLocal_1054);
					if (__LIB_0__::func_264(&uLocal_1050) > 15f)
					{
						func_612(3);
					}
					break;
			}
			break;
		case 2:
			switch (iLocal_1057)
			{
				case 0:
					sLocal_1054 = func_1107();
					func_1106(1);
					break;
				case 1:
					func_298(6, 0, sLocal_1054);
					if (!func_1104())
					{
						func_612(0);
					}
					break;
			}
			break;
		case 0:
			if (bLocal_1064)
			{
				func_427(uParam0, &(vLocal_18[3 /*3*/]), &iLocal_221, 30f, 1108082688 /* Float: 35f */, 0, 0, 0);
			}
			if (!func_1104())
			{
				switch (iLocal_1057)
				{
					case 0:
						sLocal_1054 = func_1107();
						func_1106(1);
						break;
					case 1:
						func_298(6, 0, sLocal_1054);
						break;
				}
			}
			else
			{
				if (__LIB_0__::func_75(&uLocal_1050))
				{
					__LIB_0__::func_37(&uLocal_1050);
				}
				func_612(1);
			}
			break;
		case 10:
			if (func_298(6, 0, func_1(32)))
			{
				func_612(11);
				bLocal_1055 = true;
			}
			break;
		case 11:
			if (func_423(6, 1064514355 /* Float: 0.95f */))
			{
				func_1106(0);
				func_612(3);
			}
			break;
		case 5:
			if (func_298(6, 0, func_1(33)))
			{
				func_612(6);
			}
			bLocal_1064 = true;
			break;
		case 6:
			if (func_423(6, 0f))
			{
				bLocal_245 = false;
			}
			if (func_423(6, 1064514355 /* Float: 0.95f */))
			{
				bLocal_1064 = true;
				bLocal_1063 = true;
				func_1106(0);
				func_612(2);
			}
			break;
		case 4:
			vLocal_1060 = { ENTITY::GET_ENTITY_COORDS(iLocal_1041, true, false) };
			if (func_298(6, 0, func_1(34)))
			{
				func_612(9);
			}
			break;
		case 9:
			if (!bLocal_245)
			{
				__LIB_2__::func_919(iLocal_1041, 0, 0);
				ENTITY::SET_ENTITY_COORDS(iLocal_1041, vLocal_1060, true, false, true, true);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_1041, true);
				bLocal_245 = true;
			}
			if (func_423(6, 0.4795f))
			{
				if (!bLocal_1065)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_221, joaat("WEAPON_UNARMED"), true, 1, false, false);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1041, true, false);
					ENTITY::DELETE_ENTITY(&iLocal_1041);
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_221, joaat("WEAPON_MELEE_LANTERN"), true, 1, false, false);
					bLocal_1065 = true;
				}
				else if (!bLocal_1066)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1041))
					{
						iLocal_1041 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iLocal_221, 1);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_995[6 /*5*/], "s_interact_lantern01x", iLocal_1041, 0);
					}
					else
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_995[6 /*5*/], "s_interact_lantern01x", iLocal_1041, 0);
						bLocal_1066 = true;
					}
				}
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_1041, vLocal_1060, true, false, true, true);
			}
			if (func_423(6, 0.55f))
			{
				bLocal_244 = true;
			}
			if (func_423(6, 0.94f))
			{
				func_304(2);
			}
			if (func_423(6, 0.99f))
			{
				func_612(12);
			}
			break;
	}
}

void func_610(int iParam0)
{
	if (iParam0 != iLocal_14)
	{
		iLocal_14 = iParam0;
	}
}

int func_611()
{
	PED::SET_PED_CONFIG_FLAG(iLocal_221, 301, false);
	__LIB_3__::func_157(&(Local_859[0 /*17*/]), "CRW5_C_GREE", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	return 1;
}

void func_612(int iParam0)
{
	if (iParam0 != iLocal_1056)
	{
		iLocal_1056 = iParam0;
		iLocal_1057 = 0;
		__LIB_1__::func_148(&uLocal_1050);
	}
	switch (iLocal_1056)
	{
		case 4:
			Local_995[6 /*5*/].f_3 = 0;
			Local_995[6 /*5*/].f_4 = 0;
			break;
	}
}

int func_613()
{
	PED::SET_PED_CONFIG_FLAG(iLocal_221, 301, false);
	__LIB_3__::func_157(&(Local_898[0 /*17*/]), "CRW5_C_POS", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	if (!bLocal_1055)
	{
		__LIB_3__::func_157(&(Local_898[1 /*17*/]), "CRW5_C_NEG", 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	}
	return 1;
}

void func_628(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_467[iParam0 /*41*/]))
	{
		if (!Local_467[iParam0 /*41*/].f_30)
		{
			Local_467[iParam0 /*41*/].f_8 = WEAPON::_GIVE_WEAPON_TO_PED_2(Local_467[iParam0 /*41*/], Local_467[iParam0 /*41*/].f_6, 60, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
			if (Local_467[iParam0 /*41*/].f_7 != joaat("WEAPON_UNARMED"))
			{
				Local_467[iParam0 /*41*/].f_9 = WEAPON::_GIVE_WEAPON_TO_PED_2(Local_467[iParam0 /*41*/], Local_467[iParam0 /*41*/].f_7, 60, true, false, 1, false, 0.5f, 1f, 752097756, true, 0f, false);
			}
			Local_467[iParam0 /*41*/].f_30 = 1;
		}
		PED::SET_PED_CONFIG_FLAG(Local_467[iParam0 /*41*/], 246, true);
		PED::SET_PED_CONFIG_FLAG(Local_467[iParam0 /*41*/], 6, true);
		PED::SET_PED_CONFIG_FLAG(Local_467[iParam0 /*41*/], 20, false);
		PED::SET_PED_CONFIG_FLAG(Local_467[iParam0 /*41*/], 71, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_467[iParam0 /*41*/], joaat("REL_PLAYER_ENEMY"));
		PED::SET_PED_FLEE_ATTRIBUTES(Local_467[iParam0 /*41*/], 512, true);
		PED::SET_PED_ACCURACY(Local_467[iParam0 /*41*/], 60);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_467[iParam0 /*41*/], 0, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_467[iParam0 /*41*/], 46, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_467[iParam0 /*41*/], 85, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_467[iParam0 /*41*/], 116, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_467[iParam0 /*41*/], 5, true);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_467[iParam0 /*41*/], 512, true);
		TASK::SET_PED_PATH_MAY_ENTER_WATER(Local_467[iParam0 /*41*/], true);
		PED::SET_PED_CONFIG_FLAG(Local_467[iParam0 /*41*/], 265, false);
		PED::SET_PED_CONFIG_FLAG(Local_467[iParam0 /*41*/], 266, false);
		TASK::_0xE8C296B75EACC357(Local_467[iParam0 /*41*/], 0f);
		PED::SET_PED_SEEING_RANGE(Local_467[iParam0 /*41*/], 20f);
		PED::SET_PED_HEARING_RANGE(Local_467[iParam0 /*41*/], 0f);
		ENTITY::_0x18FF3110CF47115D(Local_467[iParam0 /*41*/], 1, 0);
		ENTITY::_SET_ENTITY_SOMETHING(Local_467[iParam0 /*41*/], true);
		if (Local_467[iParam0 /*41*/].f_40)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_467[iParam0 /*41*/], 50, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_467[iParam0 /*41*/], 93, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_467[iParam0 /*41*/], 43, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_467[iParam0 /*41*/], 71, true);
			PED::REMOVE_PED_DEFENSIVE_AREA(Local_467[iParam0 /*41*/], false);
			__LIB_8__::func_776(Local_467[iParam0 /*41*/], 90);
		}
		else
		{
			PED::SET_PED_ACCURACY(Local_467[iParam0 /*41*/], 70);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_467[iParam0 /*41*/], 27, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_467[iParam0 /*41*/], 111, true);
		}
	}
}

bool func_630(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 6:
		case 7:
			return true;
		default:
			break;
	}
	return false;
}

void func_631(int iParam0, int iParam1)
{
	if (Local_467[iParam0 /*41*/].f_10 != iParam1 && !ENTITY::IS_ENTITY_DEAD(Local_467[iParam0 /*41*/]))
	{
		Local_467[iParam0 /*41*/].f_10 = iParam1;
	}
	else
	{
		return;
	}
	TASK::CLEAR_PED_TASKS(Local_467[iParam0 /*41*/], true, false);
	switch (Local_467[iParam0 /*41*/].f_10)
	{
		case 0:
			break;
		case 5:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_467[iParam0 /*41*/], Local_467[iParam0 /*41*/].f_14, 1f, -1, 0.25f, 0, 40000f);
			break;
		case 1:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_467[iParam0 /*41*/], Local_467[iParam0 /*41*/].f_17, 1f, -1, 0.25f, 0, 40000f);
			break;
		case 3:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_467[iParam0 /*41*/], Local_467[iParam0 /*41*/].f_20, 1f, -1, 0.25f, 0, 40000f);
			break;
		case 2:
		case 4:
			TASK::TASK_STAND_STILL(Local_467[iParam0 /*41*/], -1);
			Local_467[iParam0 /*41*/].f_23 = MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 6f);
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(Local_272[0 /*7*/]))
			{
				TASK::TASK_AIM_GUN_AT_ENTITY(Local_467[iParam0 /*41*/], Local_272[0 /*7*/], 150000, true, 1);
			}
			__LIB_1__::func_148(&uLocal_287);
			__LIB_2__::func_279(Local_467[iParam0 /*41*/], 1);
			break;
		case 7:
			WEAPON::_GIVE_WEAPON_TO_PED_2(Local_467[iParam0 /*41*/], joaat("WEAPON_THROWN_MOLOTOV"), 1, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_467[iParam0 /*41*/], joaat("WEAPON_THROWN_MOLOTOV"), true, 0, false, false);
			func_1133();
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2099.329f, -297.1981f, 40.3328f, 2f, 20000, 0.25f, 0, 40000f);
			TASK::TASK_THROW_PROJECTILE(0, Local_272[0 /*7*/].f_1);
			func_1134(Local_467[iParam0 /*41*/]);
			__LIB_1__::func_148(&uLocal_287);
			break;
		case 8:
			PED::SET_PED_SEEING_RANGE(Local_467[iParam0 /*41*/], 70f);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_467[iParam0 /*41*/], Local_467[iParam0 /*41*/].f_6, false, 0, false, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_467[iParam0 /*41*/], 46, true);
			func_1133();
			if (iParam0 > 4)
			{
				TASK::TASK_PAUSE(0, 2000);
			}
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_467[iParam0 /*41*/].f_14, 2f, 20000, 0.25f, 0, 40000f);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			func_1134(Local_467[iParam0 /*41*/]);
			PED::SET_PED_COMBAT_MOVEMENT(Local_467[iParam0 /*41*/], 2);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_467[iParam0 /*41*/], Local_467[iParam0 /*41*/].f_14, 5f, 0, 0, 0);
			PED::SET_COMBAT_FLOAT(Local_467[iParam0 /*41*/], 28, 0f);
			break;
		case 12:
			func_1133();
			TASK::TASK_PAUSE(0, 4500);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_467[iParam0 /*41*/].f_14, 2f, 20000, 0.25f, 0, 276.2723f);
			TASK::TASK_CLIMB(0, false);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			func_1134(Local_467[iParam0 /*41*/]);
			break;
		case 9:
			func_1133();
			if (iParam0 > 4)
			{
				TASK::TASK_PAUSE(0, 4500);
			}
			TASK::TASK_GO_TO_ENTITY(0, Global_35, 20000, 1f, 1f, 2f, 0);
			func_1134(Local_467[iParam0 /*41*/]);
			break;
		case 11:
			PED::REMOVE_PED_DEFENSIVE_AREA(Local_467[iParam0 /*41*/], false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_467[iParam0 /*41*/], 46, true);
			func_1133();
			if (iParam0 > 4)
			{
				TASK::TASK_PAUSE(0, 4500);
			}
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			func_1134(Local_467[iParam0 /*41*/]);
			PED::SET_PED_SEEING_RANGE(Local_467[iParam0 /*41*/], 60f);
			break;
		case 10:
			TASK::TASK_GO_TO_ENTITY(Local_467[iParam0 /*41*/], iLocal_221, 20000, 1f, 2f, 2f, 0);
			break;
		case 13:
			PED::REMOVE_PED_DEFENSIVE_AREA(Local_467[iParam0 /*41*/], false);
			func_1133();
			TASK::TASK_COMBAT_PED(0, iLocal_221, 0, 0);
			func_1134(Local_467[iParam0 /*41*/]);
			break;
		case 14:
			PED::SET_PED_COMBAT_MOVEMENT(Local_467[iParam0 /*41*/], 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_467[iParam0 /*41*/], 0, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_467[iParam0 /*41*/], 43, true);
			PED::REMOVE_PED_DEFENSIVE_AREA(Local_467[iParam0 /*41*/], true);
			PED::REMOVE_PED_DEFENSIVE_AREA(Local_467[iParam0 /*41*/], false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_467[iParam0 /*41*/], 50, true);
			TASK::TASK_COMBAT_PED(Local_467[iParam0 /*41*/], Global_35, 0, 0);
			break;
	}
}

void func_633(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_995[iParam0 /*5*/], "IG_EXCONFEDINFORMANT", iLocal_221, 0);
			iLocal_1041 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iLocal_221, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1041))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_995[iParam0 /*5*/], "s_interact_lantern01x", iLocal_1041, 0);
			}
			break;
		case 2:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_995[iParam0 /*5*/], "IG_EXCONFEDINFORMANT", iLocal_221, 0);
			iLocal_1041 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iLocal_221, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1041))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_995[iParam0 /*5*/], "s_interact_lantern01x", iLocal_1041, 0);
			}
			break;
		case 4:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_995[iParam0 /*5*/], "EXCONFEDINFORMANT", iLocal_221, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_995[iParam0 /*5*/], "ARTHUR", Global_35, 0);
			break;
		case 0:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_995[iParam0 /*5*/], "IG_EXCONFEDINFORMANT", iLocal_221, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1041))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_995[iParam0 /*5*/], "s_interact_lantern01x", iLocal_1041, 0);
			}
			break;
		case 5:
			if (__LIB_0__::func_113())
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_995[iParam0 /*5*/], "b_playerArthur", true, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_995[iParam0 /*5*/], "player_zero", Global_35, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_995[iParam0 /*5*/], "b_playerArthur", false, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_995[iParam0 /*5*/], "JOHN", Global_35, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_467[5 /*41*/]))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_995[iParam0 /*5*/], "Screamer", Local_467[5 /*41*/], 0);
			}
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_995[iParam0 /*5*/], "IG_EXCONFEDINFORMANT", iLocal_221, 0);
			break;
		case 6:
			if (__LIB_0__::func_113())
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_995[iParam0 /*5*/], "b_playerArthur", true, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_995[iParam0 /*5*/], "player_zero", Global_35, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_995[iParam0 /*5*/], "b_playerArthur", false, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_995[iParam0 /*5*/], "JOHN", Global_35, 0);
			}
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_995[iParam0 /*5*/], "EXCONFEDINFORMANT", iLocal_221, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1042))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_995[iParam0 /*5*/], "s_interact_lantern01x", iLocal_1042, 0);
			}
			break;
		case 7:
			if (__LIB_0__::func_113())
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_995[iParam0 /*5*/], "b_playerArthur", true, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_995[iParam0 /*5*/], "player_zero", Global_35, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_995[iParam0 /*5*/], "b_playerArthur", false, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_995[iParam0 /*5*/], "JOHN", Global_35, 0);
			}
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_995[iParam0 /*5*/], "IG_EXCONFEDINFORMANT", iLocal_221, 0);
			iLocal_1041 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iLocal_221, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1041))
			{
			}
			break;
		case 8:
			if (__LIB_0__::func_113())
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_995[iParam0 /*5*/], "b_playerArthur", true, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_995[iParam0 /*5*/], "ARTHUR", Global_35, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_995[iParam0 /*5*/], "b_playerArthur", false, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_995[iParam0 /*5*/], "JOHN", Global_35, 0);
			}
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_995[iParam0 /*5*/], "EXCONFEDINFORMANT", iLocal_221, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_995[iParam0 /*5*/], "FoxClaw", iLocal_247, 0);
			break;
		case 3:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_995[iParam0 /*5*/], "corpse01x", iLocal_227[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_995[iParam0 /*5*/], "corpse01x^1", iLocal_227[1], 0);
			break;
	}
}

void func_670(var uParam0)
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
		func_1168(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1170(uParam0);
		func_1171(uParam0);
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

void func_716(float fParam0, bool bParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_265, Global_36, &iLocal_267);
	iVar0 = (iLocal_267 - iLocal_266);
	fVar1 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_221);
	if (func_1238())
	{
		fVar2 = (fVar1 + 0.05f);
	}
	else if (iVar0 <= 1)
	{
		fVar2 = (fVar1 - 0.2f);
	}
	if (fVar2 > fParam0)
	{
		fVar2 = fParam0;
	}
	else if (fVar2 < 0.7f)
	{
		fVar2 = 0.7f;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_995[4 /*5*/]))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_995[4 /*5*/], false))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_221, fVar2);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_221, fVar2);
		}
	}
	else
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_221, fVar2);
		TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_221, fVar2);
	}
	if (!bParam1)
	{
	}
}

void func_718()
{
	Local_995[5 /*5*/].f_4 = 1;
	if (iLocal_1047 >= 1 && iLocal_1047 <= 14)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ACCURATE_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
	}
	switch (iLocal_1047)
	{
		case 0:
			func_308(3);
			break;
		case 1:
			if (func_298(5, 1, func_1(3)))
			{
				Local_995[5 /*5*/].f_4 = 1;
				func_308(2);
				WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
			}
			break;
		case 2:
			if (func_423(5, 1064514355 /* Float: 0.95f */))
			{
				func_308(3);
				WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
			}
			break;
		case 3:
			if (func_298(5, 1, func_1(4)))
			{
				Local_995[5 /*5*/].f_4 = 1;
				func_308(4);
				WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
			}
			break;
		case 4:
			if (func_423(5, 1064514355 /* Float: 0.95f */))
			{
				func_308(5);
			}
			break;
		case 5:
			if (func_298(5, 1, func_1(14)))
			{
				Local_995[5 /*5*/].f_4 = 1;
				func_308(6);
			}
			break;
		case 6:
			break;
		case 7:
			if (func_298(5, 1, func_1(5)))
			{
				func_308(8);
			}
			break;
		case 8:
			if (func_423(5, 1064514355 /* Float: 0.95f */))
			{
				func_308(9);
			}
			break;
		case 9:
			if (func_298(5, 1, func_1(14)))
			{
				func_308(10);
			}
			break;
		case 10:
			break;
		case 11:
			if (func_298(5, 1, func_1(17)))
			{
				func_308(12);
			}
			break;
		case 12:
			if (func_423(5, 1064514355 /* Float: 0.95f */))
			{
			}
			break;
		case 13:
			if (func_298(5, 1, func_1(6)))
			{
				func_308(14);
				__LIB_0__::func_172(iLocal_307);
			}
			break;
		case 14:
			if (func_423(5, 0.9f))
			{
				func_308(15);
			}
			break;
		case 15:
			if (func_298(5, 1, func_1(7)))
			{
				func_308(16);
				iLocal_1048 = 15;
			}
			break;
		case 16:
			if (func_423(5, 0.9f))
			{
				func_308(17);
			}
			break;
		case 19:
			if (func_298(5, 1, func_1(8)))
			{
				func_308(20);
				iLocal_1048 = 19;
			}
			break;
		case 20:
			if (func_423(5, 0.9f))
			{
				func_308(17);
			}
			break;
		case 21:
			if (func_298(5, 1, func_1(9)))
			{
				func_308(22);
				iLocal_1048 = 21;
			}
			break;
		case 22:
			if (func_423(5, 0.9f))
			{
				func_308(17);
			}
			break;
		case 23:
			if (func_298(5, 1, func_1(10)))
			{
				func_308(24);
				iLocal_1048 = 23;
			}
			break;
		case 24:
			if (func_423(5, 0.9f))
			{
				func_308(17);
			}
			break;
		case 25:
			if (func_298(5, 1, func_1(11)))
			{
				func_308(26);
				iLocal_1049++;
			}
			break;
		case 26:
			if (func_423(5, 0.9f))
			{
				func_308(17);
			}
			break;
		case 27:
			if (func_298(5, 1, func_1(12)))
			{
				func_308(28);
				iLocal_1049++;
			}
			break;
		case 28:
			if (func_423(5, 0.9f))
			{
				func_308(17);
			}
			break;
		case 17:
			if (func_298(5, 1, func_1(14)))
			{
				func_308(18);
			}
			break;
		case 18:
			if (func_423(5, 0.9f))
			{
				switch (iLocal_1048)
				{
					case 15:
						if (func_1239())
						{
							if (iLocal_1049 == 0)
							{
								func_308(25);
							}
							else
							{
								func_308(27);
							}
						}
						else
						{
							func_308(19);
						}
						break;
					case 19:
						if (func_1239())
						{
							if (iLocal_1049 == 0)
							{
								func_308(25);
							}
							else
							{
								func_308(27);
							}
						}
						else
						{
							func_308(21);
						}
						break;
					case 21:
						break;
					case 25:
						func_308(27);
						break;
					case 27:
						func_308(17);
						break;
					case 17:
						func_308(17);
						break;
				}
			}
			break;
	}
}

bool func_719(int iParam0)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(Local_467[iParam0 /*41*/]) && __LIB_0__::func_266(Local_467[iParam0 /*41*/], Global_36, 70f, 1, 1))
	{
		iVar0 = __LIB_3__::func_112(Local_467[iParam0 /*41*/], Global_35, 1060437492 /* Float: 0.707f */);
		if (iVar0 != 0)
		{
			if (__LIB_0__::func_266(Local_467[iParam0 /*41*/], Global_36, 4f, 1, 1))
			{
				if (!PED::GET_PED_STEALTH_MOVEMENT(Global_35) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35) > 1f)
				{
					return true;
				}
			}
		}
		else if (__LIB_0__::func_266(Local_467[iParam0 /*41*/], Global_36, 2f, 1, 1) && 1 == PED::_0x7F9B9791D4CB71F6(Local_467[iParam0 /*41*/], Global_35, false, 0))
		{
			return true;
		}
		if (__LIB_18__::func_639(Local_467[iParam0 /*41*/], &(Local_467[iParam0 /*41*/].f_31), 1))
		{
			if (Local_467[iParam0 /*41*/].f_31.f_5 == joaat("EVENT_SHOT_FIRED") && WEAPON::_IS_WEAPON_BOW(__LIB_0__::func_399(Global_35, 1, 0, 0)))
			{
				return false;
			}
			if (bLocal_943 && Local_467[iParam0 /*41*/].f_31.f_5 == joaat("EVENT_SHOT_FIRED"))
			{
				return false;
			}
			if (Local_467[iParam0 /*41*/].f_31.f_5 == 0)
			{
				return false;
			}
			if (Local_467[iParam0 /*41*/].f_31.f_5 == joaat("EVENT_DAMAGE") && func_1242())
			{
				return false;
			}
			if (Local_467[iParam0 /*41*/].f_31.f_5 == joaat("EVENT_SHOT_FIRED_WHIZZED_BY") && func_1242())
			{
				return false;
			}
			if (Local_467[iParam0 /*41*/].f_31.f_5 == joaat("EVENT_SHOCKING_DEAD_BODY"))
			{
				return false;
			}
			if (Local_467[iParam0 /*41*/].f_31.f_4 > 2 && !Local_467[iParam0 /*41*/].f_31.f_5 == joaat("EVENT_DEATH"))
			{
				if ((((((Local_467[iParam0 /*41*/].f_31.f_3 != iLocal_221 && Local_467[iParam0 /*41*/].f_31.f_3 != Local_467[0 /*41*/]) && Local_467[iParam0 /*41*/].f_31.f_3 != Local_467[1 /*41*/]) && Local_467[iParam0 /*41*/].f_31.f_3 != Local_467[2 /*41*/]) && Local_467[iParam0 /*41*/].f_31.f_3 != Local_467[3 /*41*/]) && Local_467[iParam0 /*41*/].f_31.f_3 != Local_467[4 /*41*/]) && Local_467[iParam0 /*41*/].f_31.f_3 != Local_272[0 /*7*/])
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_720()
{
	int iVar0;
	int iVar1;
	if (func_331(2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = iVar0;
		if (!__LIB_0__::func_255(Local_467[iVar0 /*41*/], 0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_467[iVar0 /*41*/], true);
		}
		if (func_630(iVar1))
		{
			func_631(iVar1, 11);
		}
		else
		{
			func_631(iVar1, 8);
		}
		iVar0++;
	}
	func_299(2);
}

void func_721(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_467[iParam1 /*41*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_467[iParam1 /*41*/]))
		{
			if ((Local_467[iParam1 /*41*/].f_10 != 8 && Local_467[iParam1 /*41*/].f_10 != 9) && Local_467[iParam1 /*41*/].f_10 != 11)
			{
				PED::SET_PED_SEEING_RANGE(Local_467[iParam1 /*41*/], 20f);
			}
			else
			{
				PED::SET_PED_SEEING_RANGE(Local_467[iParam1 /*41*/], 60f);
			}
			if ((iParam1 <= 4 && iLocal_329 == 1) || (iParam1 > 4 && iLocal_329 == 1))
			{
				func_631(iParam1, 14);
			}
			switch (Local_467[iParam1 /*41*/].f_10)
			{
				case 0:
					if (__LIB_0__::func_86(Local_467[iParam1 /*41*/].f_17))
					{
						func_631(iParam1, 5);
					}
					else
					{
						func_631(iParam1, 1);
					}
					break;
				case 1:
					if (__LIB_0__::func_266(Local_467[iParam1 /*41*/], Local_467[iParam1 /*41*/].f_17, 2f, 1, 1))
					{
						func_631(iParam1, 2);
					}
					break;
				case 3:
					if (__LIB_0__::func_266(Local_467[iParam1 /*41*/], Local_467[iParam1 /*41*/].f_20, 2f, 1, 1))
					{
						func_631(iParam1, 4);
					}
					break;
				case 2:
				case 4:
					Local_467[iParam1 /*41*/].f_24 = (Local_467[iParam1 /*41*/].f_24 + MISC::GET_FRAME_TIME());
					if (Local_467[iParam1 /*41*/].f_24 > Local_467[iParam1 /*41*/].f_23)
					{
						if (Local_467[iParam1 /*41*/].f_10 == 2)
						{
							func_631(iParam1, 3);
						}
						else if (Local_467[iParam1 /*41*/].f_10 == 4)
						{
							func_631(iParam1, 1);
						}
						Local_467[iParam1 /*41*/].f_24 = 0f;
					}
					break;
				case 6:
					break;
				case 7:
					if (!__LIB_0__::func_75(&uLocal_287))
					{
						__LIB_1__::func_148(&uLocal_287);
					}
					else if (__LIB_1__::func_871(&uLocal_287) > 12000 && !__LIB_0__::func_163(Local_467[iParam1 /*41*/], 242628503))
					{
						WEAPON::_GIVE_WEAPON_TO_PED_2(Local_467[iParam1 /*41*/], Local_467[iParam1 /*41*/].f_6, 100, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
						WEAPON::SET_CURRENT_PED_WEAPON(Local_467[iParam1 /*41*/], Local_467[iParam1 /*41*/].f_6, true, 0, false, false);
						func_631(iParam1, 0);
					}
					if (__LIB_0__::func_163(Local_467[iParam1 /*41*/], 242628503) && TASK::GET_SEQUENCE_PROGRESS(Local_467[iParam1 /*41*/]) > 0)
					{
						if (!__LIB_0__::func_75(&uLocal_940))
						{
							__LIB_1__::func_148(&uLocal_940);
						}
					}
					if (__LIB_0__::func_75(&uLocal_940))
					{
						if (__LIB_0__::func_264(&uLocal_940) < 2f)
						{
							bLocal_943 = true;
						}
						else
						{
							bLocal_943 = false;
						}
					}
					break;
				case 8:
					if (func_630(iParam1))
					{
						func_631(iParam1, 11);
					}
					if (!MAP::DOES_BLIP_EXIST(Local_467[iParam1 /*41*/].f_5))
					{
						Local_467[iParam1 /*41*/].f_5 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_467[iParam1 /*41*/]);
					}
					if (__LIB_0__::func_266(Local_467[iParam1 /*41*/], Global_36, 2f, 1, 1))
					{
						func_631(iParam1, 11);
					}
					break;
				case 9:
					if (!__LIB_0__::func_163(Local_467[iParam1 /*41*/], 1227113341))
					{
						TASK::TASK_GO_TO_ENTITY(Local_467[iParam1 /*41*/], Global_35, 20000, 1f, 2f, 2f, 0);
					}
					if (__LIB_0__::func_266(Local_467[iParam1 /*41*/], Global_36, 10f, 1, 1))
					{
						func_631(iParam1, 11);
					}
					break;
				case 10:
					if (__LIB_0__::func_48(Local_467[iParam1 /*41*/], iLocal_221, 10f, 1))
					{
						func_631(iParam1, 13);
					}
					break;
				case 11:
					break;
			}
		}
	}
}

void func_726(var uParam0)
{
	int iVar0;
	int iVar1;
	if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
	{
		iVar0 = PED::GET_MOUNT(Global_35);
		if (iVar0 != iLocal_246)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_246))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_246, Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
			}
		}
		PED::SET_PED_RESET_FLAG(iVar0, 105, true);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !__LIB_0__::func_163(iVar0, 242628503))
		{
			func_427(uParam0, &(vLocal_18[20 /*3*/]), &iLocal_221, 1103626240 /* Float: 25f */, 1108082688 /* Float: 35f */, 0, 0, 0);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_HORSE_ACTION(0, 2, 0, 0);
			TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::TASK_PERFORM_SEQUENCE(iVar0, iVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		}
		func_299(64);
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_246))
	{
		iLocal_246 = PED::_GET_LAST_MOUNT(Global_35);
	}
	else if (!__LIB_0__::func_255(iLocal_246, 0) && !__LIB_0__::func_163(iLocal_246, 518218985))
	{
		func_427(uParam0, &(vLocal_18[20 /*3*/]), &iLocal_221, 1103626240 /* Float: 25f */, 1108082688 /* Float: 35f */, 0, 0, 0);
		TASK::TASK_SMART_FLEE_PED(iLocal_246, Global_35, 75f, -1, 0, 1077936128 /* Float: 3f */, 0);
		func_299(64);
	}
}

bool func_737()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_290))
	{
		Local_290 = __LIB_8__::func_931(joaat("A_M_M_UNICORPSE_01"), Local_290.f_1, Local_290.f_4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_290))
	{
		PED::SET_PED_CONFIG_FLAG(Local_290, 223, true);
		PED::SET_PED_CONFIG_FLAG(Local_290, 186, false);
		PED::SET_PED_CONFIG_FLAG(Local_290, 38, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_290, true);
		__LIB_3__::func_459(Local_290, 0);
		__LIB_0__::func_862(Local_290, -687511173);
		ENTITY::_0x18FF3110CF47115D(Local_290, 7, 0);
		PED::_SET_PED_BODY_COMPONENT(Local_290, 367697749);
		PED::_UPDATE_PED_VARIATION(Local_290, false, true, false, true, false);
		TASK::TASK_PLAY_ANIM(Local_290, "AI_DAMAGE@DEAD@BASE", "dead_c", 8f, -8f, -1, 131072, 0f, false, 0, false, 0, false);
	}
	return true;
}

void func_738(bool bParam0)
{
	__LIB_0__::func_325(&iLocal_238);
	if (!MAP::DOES_BLIP_EXIST(iLocal_238))
	{
		if (bParam0)
		{
			iLocal_238 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, iLocal_221);
			MAP::_BLIP_SET_MODIFIER(iLocal_238, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
		}
		else
		{
			iLocal_238 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, iLocal_221);
		}
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_238, "CRW5_B_OLD");
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_238))
	{
		if (bParam0)
		{
			MAP::_BLIP_SET_MODIFIER(iLocal_238, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
		}
	}
}

void func_740(int iParam0, float fParam1)
{
	int iVar0;
	struct<27> Var1;
	struct<27> Var39;
	if (fParam1 < 0.8f)
	{
		fParam1 = 0.8f;
	}
	fParam1 = (fParam1 - 0.2f);
	iVar0 = 4636;
	if (!bLocal_976)
	{
		__LIB_1__::func_731(&uLocal_977);
		Var1.f_4 = 1065353216;
		Var1.f_5 = 1065353216;
		Var1.f_9 = 1065353216;
		Var1.f_10 = 1065353216;
		Var1.f_14 = 1065353216;
		Var1.f_15 = 1065353216;
		Var1.f_17 = 1040187392;
		Var1.f_18 = 1040187392;
		Var1.f_19 = -1;
		Var1.f_26 = -1082130432;
		Var39.f_4 = 1065353216;
		Var39.f_5 = 1065353216;
		Var39.f_9 = 1065353216;
		Var39.f_10 = 1065353216;
		Var39.f_14 = 1065353216;
		Var39.f_15 = 1065353216;
		Var39.f_17 = 1040187392;
		Var39.f_18 = 1040187392;
		Var39.f_19 = -1;
		Var39.f_26 = -1082130432;
		__LIB_3__::func_895(&Var1);
		__LIB_3__::func_895(&Var39);
		__LIB_3__::func_887(iLocal_221, Global_35, &Var1, 0f, 0f, 0f, sLocal_265, 17412, 1, 1069547520 /* Float: 1.5f */, -1082130432 /* Float: -1f */, 1073069561, 1056964608 /* Float: 0.5f */, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
		__LIB_10__::func_425(Global_35, iLocal_221, &Var39, 7f, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, 1.4f, -1082130432 /* Float: -1f */, 1);
		bLocal_976 = true;
	}
	else
	{
		__LIB_13__::func_474(iParam0, 3f, iVar0, fParam1);
		__LIB_8__::func_602(&uLocal_977, iParam0);
	}
}

void func_741(var uParam0, var uParam1, float fParam2)
{
	if (!uParam1->f_1)
	{
		if (!__LIB_0__::func_75(&uLocal_15))
		{
			__LIB_1__::func_148(&uLocal_15);
		}
		else if (__LIB_0__::func_264(&uLocal_15) > fParam2)
		{
			func_494(uParam0, uParam1, 0);
		}
		if (__LIB_5__::func_352(*uParam1))
		{
			uParam1->f_1 = 1;
			__LIB_0__::func_37(&uLocal_15);
		}
	}
}

bool func_742(int iParam0)
{
	func_1265();
	if (iLocal_266 > iParam0)
	{
		return true;
	}
	return false;
}

void func_743()
{
	int iVar0;
	iLocal_1131 = 0;
	func_1266(512);
	iVar0 = 0;
	while (iVar0 < 15)
	{
		Local_330[iVar0 /*9*/].f_5 = 0;
		__LIB_2__::func_426(&(Local_330[iVar0 /*9*/]));
		iVar0++;
	}
}

int func_744(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	bVar2 = true;
	bVar3 = true;
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	if (bParam0)
	{
		vVar4 = { 2066.427f, -429.2093f, 42.4539f };
		switch (iVar1)
		{
			case 0:
				vVar4 = { 2074.38f, -449.06f, 49.32f };
				break;
			case 1:
				vVar4 = { 2063.65f, -402.7f, 49.32f };
				break;
			case 2:
				vVar4 = { 2082.95f, -420.41f, 48.69f };
				break;
		}
	}
	else
	{
		switch (iVar1)
		{
			case 0:
				vVar4 = { 2089.31f, -378.14f, 50f };
				break;
			case 1:
				vVar4 = { 2084.16f, -393.13f, 49f };
				break;
			case 2:
				vVar4 = { 2081.77f, -378.68f, 48.33f };
				break;
		}
	}
	switch (iLocal_1131)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 15)
			{
				__LIB_2__::func_788(&(Local_330[iVar0 /*9*/]), 1, 0, 1);
				iVar0++;
			}
			iLocal_1131 = 1;
			break;
		case 1:
			vVar7 = { ENTITY::GET_ENTITY_COORDS(iLocal_221, true, false) };
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_330[iVar0 /*9*/]))
				{
					Local_330[iVar0 /*9*/].f_1 = { vVar4 };
					Local_330[iVar0 /*9*/].f_1 = { Local_330[iVar0 /*9*/].f_1 + Vector(MISC::GET_RANDOM_FLOAT_IN_RANGE(0.2f, 0.5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.25f, 0.25f)) };
					Local_330[iVar0 /*9*/].f_4 = __LIB_3__::func_731(Local_330[iVar0 /*9*/].f_1, vVar7);
					Local_330[iVar0 /*9*/] = __LIB_8__::func_931(iLocal_466, Local_330[iVar0 /*9*/].f_1, Local_330[iVar0 /*9*/].f_4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
					bVar3 = false;
					return 0;
				}
				iVar0++;
			}
			if (bVar3)
			{
				iLocal_1131 = 2;
			}
			break;
		case 2:
		case 3:
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_330[iVar0 /*9*/]))
				{
					if (!Local_330[iVar0 /*9*/].f_5)
					{
						if (!__LIB_0__::func_163(Local_330[iVar0 /*9*/], -708058584))
						{
							ENTITY::SET_ENTITY_COORDS(Local_330[iVar0 /*9*/], Local_330[iVar0 /*9*/].f_1, true, false, true, true);
							ENTITY::SET_ENTITY_COLLISION(Local_330[iVar0 /*9*/], false, false);
							PED::FORCE_PED_MOTION_STATE(Local_330[iVar0 /*9*/], -1299979036, true, 0, false);
							ENTITY::SET_ENTITY_PROOFS(Local_330[iVar0 /*9*/], 8, false);
							if (bParam0)
							{
								Local_330[iVar0 /*9*/].f_6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_221, 0f, 3.5f, 0.3f) };
							}
							else
							{
								Local_330[iVar0 /*9*/].f_6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_221, 0f, 3.5f, 0.3f) };
							}
							Local_330[iVar0 /*9*/].f_6 = { Local_330[iVar0 /*9*/].f_6 + Vector(MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f)) };
							TASK::TASK_FLY_TO_COORD(Local_330[iVar0 /*9*/], 3f, Local_330[iVar0 /*9*/].f_6, 0, 1);
						}
						if (__LIB_0__::func_266(Local_330[iVar0 /*9*/], Local_330[iVar0 /*9*/].f_6, 4f, 1, 1))
						{
							if (!Local_330[iVar0 /*9*/].f_5)
							{
								iLocal_1132++;
							}
							Local_330[iVar0 /*9*/].f_5 = 1;
							if (!func_331(512) && iLocal_1132 > 1)
							{
								if (AUDIO::_0xE368E8422C860BA7("Bat_Swarm", "FUS2_Sounds", -2))
								{
									AUDIO::_PLAY_SOUND_FROM_POSITION("Bat_Swarm", Global_36, "FUS2_Sounds", false, 0, true, 0);
									func_299(512);
								}
							}
						}
						bVar2 = false;
					}
					else if (!__LIB_0__::func_163(Local_330[iVar0 /*9*/], -1465725704))
					{
						TASK::TASK_FLY_AWAY(Local_330[iVar0 /*9*/], Global_35);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (!Local_330[iVar0 /*9*/].f_5 && !ENTITY::IS_ENTITY_DEAD(Local_330[iVar0 /*9*/]))
				{
					bVar2 = false;
					iLocal_1131 = 3;
				}
				iVar0++;
			}
			if (bVar2)
			{
				iLocal_1131 = 4;
			}
			break;
		case 4:
			if (!__LIB_0__::func_75(&uLocal_934))
			{
				__LIB_1__::func_148(&uLocal_934);
			}
			else if (__LIB_1__::func_871(&uLocal_934) > 3500)
			{
				iLocal_1131 = 5;
			}
			break;
		case 5:
			return 1;
	}
	return 0;
}

bool func_746()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_944[iVar0 /*7*/]))
		{
			Local_944[iVar0 /*7*/] = __LIB_8__::func_931(joaat("A_C_ALLIGATOR_01"), Local_944[iVar0 /*7*/].f_1, Local_944[iVar0 /*7*/].f_4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			return false;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!__LIB_0__::func_255(Local_944[iVar0 /*7*/], 0))
		{
			PED::_SET_PED_QUALITY(Local_944[iVar0 /*7*/], 1);
			TASK::TASK_STAND_STILL(Local_944[iVar0 /*7*/], -1);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_944[iVar0 /*7*/], 16, true);
		}
		iVar0++;
	}
	return true;
}

void func_748(var uParam0)
{
	if (__LIB_0__::func_27(iLocal_242, 2))
	{
		if (MAP::DOES_BLIP_EXIST(iLocal_237))
		{
			__LIB_0__::func_325(&iLocal_237);
			func_494(uParam0, &(vLocal_160[4 /*3*/]), 1);
		}
		func_304(12);
		func_296(13);
		iLocal_975 = 0;
	}
}

int func_749()
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_399(Global_35, 1, 0, 0);
	iVar1 = __LIB_0__::func_399(Global_35, 1, 1, 0);
	if (((WEAPON::_IS_WEAPON_TORCH(iVar0) || WEAPON::_IS_WEAPON_TORCH(iVar1)) || WEAPON::_IS_WEAPON_LANTERN(iVar0)) || WEAPON::_IS_WEAPON_LANTERN(iVar1))
	{
		return 1;
	}
	return 0;
}

void func_750(var uParam0)
{
	if (!func_331(524288))
	{
		if (!__LIB_0__::func_75(&uLocal_1067))
		{
			__LIB_1__::func_148(&uLocal_1067);
		}
		else
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_299(524288);
			}
			if (__LIB_0__::func_264(&uLocal_1067) > 25f)
			{
				if (func_427(uParam0, &(vLocal_18[19 /*3*/]), &iLocal_221, 1103626240 /* Float: 25f */, 1108082688 /* Float: 35f */, 0, 0, 0))
				{
					__LIB_1__::func_148(&uLocal_1067);
					vLocal_18[19 /*3*/].f_1 = 0;
				}
			}
		}
	}
	else if (__LIB_0__::func_75(&uLocal_1067))
	{
		__LIB_0__::func_37(&uLocal_1067);
	}
}

bool func_751()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_467[iVar0 /*41*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_467[iVar0 /*41*/]) && !PED::_IS_PED_HOGTIED(Local_467[iVar0 /*41*/]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	iLocal_329 = iVar1;
	if (iVar1 == 0)
	{
		PED::SET_PED_ACCURACY(iLocal_221, 10);
		return true;
	}
	else if (iVar1 <= 2)
	{
		PED::SET_PED_ACCURACY(iLocal_221, 0);
	}
	return false;
}

void func_753()
{
	bool bVar0;
	bVar0 = false;
	if (__LIB_5__::func_484(&uLocal_1127, 60f))
	{
		bVar0 = true;
	}
	func_755(&iLocal_221, bVar0);
}

void func_754(var uParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_0__::func_75(&uLocal_1142))
	{
		__LIB_1__::func_148(&uLocal_1142);
	}
	else if (iLocal_1141 < 4)
	{
		if (!__LIB_6__::func_904() && __LIB_0__::func_264(&uLocal_1142) > MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 12f))
		{
			if (bParam1)
			{
				if (__LIB_0__::func_113())
				{
					iVar0 = 34;
				}
				else
				{
					iVar0 = 35;
				}
			}
			else if (__LIB_0__::func_113())
			{
				iVar0 = 38;
			}
			else
			{
				iVar0 = 39;
			}
			if (__LIB_12__::func_876(uParam0, vLocal_18[iVar0 /*3*/], 0))
			{
				__LIB_1__::func_148(&uLocal_1142);
				iLocal_1141++;
			}
		}
	}
}

void func_755(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		__LIB_5__::func_553(*iParam0, bParam1);
	}
}

void func_756()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_467[iVar0 /*41*/]))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_467[iVar0 /*41*/]) || PED::_IS_PED_HOGTIED(Local_467[iVar0 /*41*/]))
			{
				__LIB_0__::func_325(&(Local_467[iVar0 /*41*/].f_5));
			}
			else if (!MAP::DOES_BLIP_EXIST(Local_467[iVar0 /*41*/].f_5))
			{
				Local_467[iVar0 /*41*/].f_5 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_467[iVar0 /*41*/]);
			}
			else if (!func_331(2))
			{
				MAP::_BLIP_SET_MODIFIER(Local_467[iVar0 /*41*/].f_5, -1118229366);
			}
			else
			{
				MAP::_BLIP_REMOVE_MODIFIER(Local_467[iVar0 /*41*/].f_5, -1118229366);
				if (iLocal_329 > 1)
				{
					MAP::_BLIP_SET_MODIFIER(Local_467[iVar0 /*41*/].f_5, joaat("BLIP_MODIFIER_ENEMY_DISAPPEARING"));
				}
				else
				{
					MAP::_BLIP_REMOVE_MODIFIER(Local_467[iVar0 /*41*/].f_5, joaat("BLIP_MODIFIER_ENEMY_DISAPPEARING"));
					if (PED::IS_PED_DEFENSIVE_AREA_ACTIVE(Local_467[iVar0 /*41*/], true) || PED::IS_PED_DEFENSIVE_AREA_ACTIVE(Local_467[iVar0 /*41*/], false))
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(Local_467[iVar0 /*41*/], true);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_757()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_467[iVar0 /*41*/]))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_467[iVar0 /*41*/]) || PED::_IS_PED_HOGTIED(Local_467[iVar0 /*41*/]))
			{
				__LIB_0__::func_325(&(Local_467[iVar0 /*41*/].f_5));
			}
			else if (!MAP::DOES_BLIP_EXIST(Local_467[iVar0 /*41*/].f_5))
			{
				Local_467[iVar0 /*41*/].f_5 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_467[iVar0 /*41*/]);
				MAP::_BLIP_SET_MODIFIER(Local_467[iVar0 /*41*/].f_5, joaat("BLIP_MODIFIER_ENEMY_DISAPPEARING"));
			}
			else if (iLocal_329 > 1)
			{
				MAP::_BLIP_SET_MODIFIER(Local_467[iVar0 /*41*/].f_5, joaat("BLIP_MODIFIER_ENEMY_DISAPPEARING"));
			}
			else
			{
				MAP::_BLIP_REMOVE_MODIFIER(Local_467[iVar0 /*41*/].f_5, joaat("BLIP_MODIFIER_ENEMY_DISAPPEARING"));
			}
		}
		iVar0++;
	}
}

bool func_759(var uParam0)
{
	int iVar0;
	switch (iLocal_325)
	{
		case 0:
			if ((__LIB_1__::func_205(Global_35, iLocal_306, 1, 0) && __LIB_1__::func_205(iLocal_221, iLocal_306, 1, 0)) && !PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_995[5 /*5*/]))
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_995[5 /*5*/], func_1(6)) && !ANIMSCENE::_0x0DF57F86FE71DBE5(Local_995[5 /*5*/], func_1(6)))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_995[5 /*5*/], func_1(6));
						__LIB_1__::func_148(&uLocal_326);
						iLocal_325++;
					}
				}
			}
			break;
		case 1:
			if (!PED::_IS_PED_CARRYING(Global_35) && !__LIB_0__::func_163(Global_35, -208384378))
			{
				iLocal_325++;
			}
			else if (PED::_IS_PED_CARRYING(Global_35) && !__LIB_0__::func_163(Global_35, -208384378))
			{
				iVar0 = __LIB_3__::func_624(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iVar0, Global_36, 2f, 9);
				}
			}
			break;
		case 2:
			__LIB_12__::func_773(1, 0, 1, 1);
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_995[5 /*5*/], func_1(6)) && !ANIMSCENE::_0x0DF57F86FE71DBE5(Local_995[5 /*5*/], func_1(6)))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_995[5 /*5*/], func_1(6));
			}
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_995[5 /*5*/], func_1(6)) && func_295(1))
			{
				if (!__LIB_0__::func_163(Global_35, 1369124074))
				{
					if (__LIB_0__::func_113())
					{
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_995[5 /*5*/], "player_zero", func_1(6), 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
					}
					else
					{
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_995[5 /*5*/], "player_zero", func_1(6), 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
					}
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
					iLocal_325++;
				}
			}
			break;
		case 3:
			__LIB_12__::func_773(1, 0, 1, 1);
			if (__LIB_0__::func_113())
			{
				if (ANIMSCENE::_0x337F1CC8EE895601(Local_995[5 /*5*/], "player_zero"))
				{
					iLocal_325++;
					__LIB_1__::func_148(&uLocal_326);
				}
			}
			else if (ANIMSCENE::_0x337F1CC8EE895601(Local_995[5 /*5*/], "player_zero"))
			{
				iLocal_325++;
				__LIB_1__::func_148(&uLocal_326);
			}
			if ((MISC::GET_FRAME_COUNT() % 30) == 0)
			{
				if (!__LIB_0__::func_163(Global_35, 1369124074))
				{
					if (__LIB_0__::func_113())
					{
						TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_995[5 /*5*/], "player_zero", func_1(6), 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
					}
					else
					{
						TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_995[5 /*5*/], "player_zero", func_1(6), 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
					}
				}
			}
			break;
		case 4:
			__LIB_12__::func_773(1, 0, 1, 1);
			if (AUDIO::_0xE368E8422C860BA7("creature_scream", "RESSH_sounds", -2))
			{
				AUDIO::_PLAY_SOUND_FROM_POSITION("creature_scream", 2110.246f, -305.7912f, 40.5404f, "RESSH_sounds", false, 0, true, 0);
				func_308(13);
				__LIB_1__::func_148(&uLocal_326);
				iLocal_325++;
			}
			break;
		case 5:
			__LIB_12__::func_773(1, 0, 1, 1);
			if (iLocal_1047 == 14 && __LIB_0__::func_264(&uLocal_326) > 2.5f)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_760()
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_467[iVar0 /*41*/]))
		{
			if (!PED::_IS_PED_HOGTIED(Local_467[iVar0 /*41*/]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	iLocal_329 = iVar1;
	if (iVar1 == 0)
	{
		return true;
	}
	if (iVar1 <= 2)
	{
		PED::SET_PED_ACCURACY(iLocal_221, 0);
		return false;
	}
	return false;
}

bool func_761(var uParam0)
{
	int iVar0;
	int iVar1;
	switch (iLocal_1151)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_247))
			{
				iLocal_247 = OBJECT::CREATE_OBJECT(joaat("P_CS_PELT_MED_MUSKRAT"), 2101.3f, -284.394f, 42.139f, true, true, false, false, true);
			}
			else if (!Local_995[8 /*5*/].f_4)
			{
				Local_995[8 /*5*/].f_4 = func_298(8, 2, func_1(36));
			}
			else
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_995[6 /*5*/]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_995[6 /*5*/]);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_995[5 /*5*/]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_995[5 /*5*/]);
				}
				iLocal_1151 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_995[8 /*5*/]))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_995[8 /*5*/]) > 0.7477f)
				{
					if (__LIB_0__::func_113())
					{
						func_427(uParam0, &(vLocal_18[25 /*3*/]), &iLocal_221, 1103626240 /* Float: 25f */, 1108082688 /* Float: 35f */, 0, 0, 0);
					}
					else
					{
						func_427(uParam0, &(vLocal_18[26 /*3*/]), &iLocal_221, 1103626240 /* Float: 25f */, 1108082688 /* Float: 35f */, 0, 0, 0);
					}
				}
			}
			if (func_423(8, 0.98f))
			{
				iLocal_1151 = 2;
			}
			break;
		case 2:
			if (func_298(8, 2, func_1(38)))
			{
				func_1274();
				__LIB_1__::func_148(&uLocal_1152);
				iLocal_1151 = 3;
			}
			break;
		case 3:
			iVar0 = func_1275();
			if (!bLocal_1155)
			{
				if (__LIB_0__::func_264(&uLocal_1152) > 15f)
				{
					if (func_298(8, 2, func_1(37)))
					{
						if (func_427(uParam0, &(vLocal_18[27 /*3*/]), &Global_35, 1103626240 /* Float: 25f */, 1108082688 /* Float: 35f */, 0, 0, 0))
						{
							bLocal_1155 = true;
						}
					}
				}
			}
			else if (func_423(8, 0.98f) && !bLocal_1156)
			{
				if (func_298(8, 2, func_1(38)))
				{
					bLocal_1156 = true;
				}
			}
			if (iVar0 == 0)
			{
				WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
				iLocal_1151 = 4;
				func_1276();
			}
			break;
		case 4:
			if (!__LIB_0__::func_163(Global_35, -208384378))
			{
				if (!PED::_IS_PED_CARRYING(Global_35))
				{
					if (__LIB_0__::func_871())
					{
						iLocal_1151 = 5;
					}
					else
					{
						iLocal_1151 = 7;
					}
				}
				else if (PED::_IS_PED_CARRYING(Global_35))
				{
					iVar1 = __LIB_3__::func_624(Global_35);
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iVar1, Global_36, 2f, 9);
					}
				}
			}
			break;
		case 5:
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_995[8 /*5*/], func_1(39)))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_995[8 /*5*/], func_1(39));
			}
			else
			{
				if (ANIMSCENE::_0x337F1CC8EE895601(Local_995[8 /*5*/], "JOHN") || ANIMSCENE::_0x337F1CC8EE895601(Local_995[8 /*5*/], "ARTHUR"))
				{
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
					iLocal_1151 = 6;
					return false;
				}
				if (!__LIB_0__::func_163(Global_35, 1369124074))
				{
					if (__LIB_0__::func_113())
					{
						TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_995[8 /*5*/], "ARTHUR", func_1(39), 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
					}
					else
					{
						TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_995[8 /*5*/], "ARTHUR", func_1(39), 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
					}
				}
				else
				{
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
					iLocal_1151 = 6;
				}
			}
			break;
		case 6:
			if (ANIMSCENE::_0x337F1CC8EE895601(Local_995[8 /*5*/], "JOHN") || ANIMSCENE::_0x337F1CC8EE895601(Local_995[8 /*5*/], "ARTHUR"))
			{
				if (func_298(8, 0, func_1(39)))
				{
					iLocal_1151 = 9;
				}
			}
			break;
		case 7:
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_995[8 /*5*/], func_1(40)))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_995[8 /*5*/], func_1(40));
			}
			else if (!__LIB_0__::func_163(Global_35, 1369124074))
			{
				if (__LIB_0__::func_113())
				{
					TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_995[8 /*5*/], "ARTHUR", func_1(40), 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
				}
				else
				{
					TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_995[8 /*5*/], "JOHN", func_1(40), 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
				}
			}
			else
			{
				iLocal_1151 = 8;
			}
			break;
		case 8:
			if (ANIMSCENE::_0x337F1CC8EE895601(Local_995[8 /*5*/], "JOHN") || ANIMSCENE::_0x337F1CC8EE895601(Local_995[8 /*5*/], "ARTHUR"))
			{
				if (func_298(8, 0, func_1(40)))
				{
					iLocal_1151 = 9;
				}
			}
			break;
		case 9:
			if (func_423(8, 0.98f))
			{
				func_304(21);
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				OBJECT::DELETE_OBJECT(&iLocal_247);
				return true;
			}
			break;
	}
	return false;
}

void func_798()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1305();
	func_1306();
	func_1307();
	func_1308();
	func_1309();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_799(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1312(iParam0, 1, 1, -142743235, 1);
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

void func_834()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1338(&uVar4, &iVar1, &iVar2, &iVar3)))
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

Vector3 func_841(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	var uVar13;
	bool bVar14;
	struct<5> Var15;
	struct<5> Var20;
	var uVar25;
	var uVar26;
	fVar2 = 9999999f;
	__LIB_1__::func_456(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (__LIB_0__::func_479() == 0 && !__LIB_0__::func_795(0))
		{
			bVar14 = true;
		}
	}
	if (!__LIB_0__::func_720(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_1352();
		if (VOLUME::_DOES_VOLUME_EXIST(bVar10))
		{
		}
	}
	if (!func_1353(Global_1310720.f_21))
	{
		bParam10 = bParam11;
	}
	Var15.f_2 = 723128514;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar25, &Var15);
	while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var15, uVar25) > iVar0)
	{
		iVar1 = 0;
		Var20.f_2 = -1148748386;
		Var20.f_3 = iVar0;
		DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar26, &Var20);
		while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var20, uVar26) > iVar1)
		{
			vVar7 = { __LIB_0__::func_953(iVar0, iVar1) };
			bVar11 = __LIB_0__::func_954(iVar0, iVar1);
			bVar3 = BUILTIN::VDIST(vParam0, vVar7);
			if (((((bVar3 < fVar2 && bVar3 > bParam10) && !__LIB_0__::func_86(vVar7)) && __LIB_1__::func_172(iVar0, bParam8, iParam12)) && !__LIB_0__::func_955(iVar0)) || bVar11)
			{
				if (__LIB_4__::func_718(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
				{
					vVar4 = { vVar7 };
					fVar2 = BUILTIN::VDIST(vParam0, vVar7);
					*iParam3 = iVar0;
					*iParam4 = iVar1;
					if (bVar11)
					{
					}
					else
					{
						iVar1++;
					}
					iVar0++;
					VOLUME::_0x748C5F51A18CB8F0(1);
					return vVar4;
				}
			}
		}
	}
}

int func_948(var uParam0, int iParam1, int iParam2)
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
	Var23.f_9 = -1591664384;
	if (__LIB_0__::func_446("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!__LIB_0__::func_236(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!__LIB_0__::func_154(Var4.f_4))
			{
			}
			else if (!WEAPON::_0x705BE297EEBDB95D(Var4.f_4))
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
				if (((WEAPON::_IS_WEAPON_ONE_HANDED(Var4.f_4) && (!WEAPON::_IS_WEAPON_SHOTGUN(Var4.f_4) || __LIB_0__::func_27(iParam1, 32))) && (!WEAPON::_IS_WEAPON_PISTOL(Var4.f_4) || !__LIB_0__::func_27(iParam1, 16777216))) && (!WEAPON::_IS_WEAPON_REVOLVER(Var4.f_4) || !__LIB_0__::func_27(iParam1, 33554432)))
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
	if (__LIB_0__::func_154(iVar0))
	{
	}
	else if (!__LIB_0__::func_27(iParam1, 512))
	{
		iParam1 |= 512;
		return func_948(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_1104()
{
	if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iLocal_221, true, false)) < (10f + 5f))
	{
		return true;
	}
	return false;
}

char* func_1105()
{
	iLocal_1058++;
	if (iLocal_1058 > 4)
	{
		iLocal_1058 = 0;
	}
	switch (iLocal_1058)
	{
		case 0:
			return func_1(18);
		case 1:
			return func_1(19);
		case 2:
			return func_1(20);
		case 3:
			return func_1(21);
		case 4:
			return func_1(22);
		default:
			break;
	}
	return "GET_NEXT_CALLOVER_ANIM - Invalid string passed!";
}

void func_1106(int iParam0)
{
	if (iLocal_1057 != iParam0)
	{
		iLocal_1057 = iParam0;
	}
}

char* func_1107()
{
	iLocal_1059++;
	if (iLocal_1059 > 3)
	{
		iLocal_1059 = 0;
	}
	switch (iLocal_1059)
	{
		case 0:
			return func_1(24);
		case 1:
			return func_1(25);
		case 2:
			return func_1(26);
		case 3:
			return func_1(23);
		default:
			break;
	}
	return "INIT_GET_NEXT_DISTANT_ANIM - Invalid string passed!";
}

void func_1133()
{
	if (!func_331(32768))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_837);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_837);
		func_299(32768);
	}
}

void func_1134(int iParam0)
{
	if (func_331(32768))
	{
		TASK::CLOSE_SEQUENCE_TASK(iLocal_837);
		func_1266(32768);
	}
	TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_837);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_837);
}

void func_1168(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1648();
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
						__LIB_0__::func_151(__LIB_0__::func_23());
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

void func_1170(var uParam0)
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
			func_1656(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1656(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1171(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1656(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

bool func_1238()
{
	if (iLocal_267 > iLocal_266 + 1)
	{
		return true;
	}
	return false;
}

bool func_1239()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!__LIB_0__::func_255(Local_467[iVar0 /*41*/], 0))
		{
			if (__LIB_1__::func_205(Local_467[iVar0 /*41*/], iLocal_306, 1, 0) && iLocal_1049 < 2)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1242()
{
	int iVar0;
	iVar0 = __LIB_0__::func_399(Global_35, 1, 0, 0);
	switch (iVar0)
	{
		case joaat("WEAPON_BOW"):
		case joaat("WEAPON_THROWN_TOMAHAWK"):
		case joaat("WEAPON_THROWN_THROWING_KNIVES"):
		case joaat("WEAPON_MELEE_KNIFE"):
		case joaat("WEAPON_MELEE_CLEAVER"):
		case joaat("WEAPON_MELEE_MACHETE"):
			return true;
		default:
			break;
	}
	return false;
}

void func_1265()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_221))
	{
		TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_265, ENTITY::GET_ENTITY_COORDS(iLocal_221, true, false), &iLocal_266);
	}
}

void func_1266(int iParam0)
{
	if (func_331(iParam0))
	{
		__LIB_1__::func_681(&iLocal_242, iParam0);
	}
}

int func_1274()
{
	PED::SET_PED_CONFIG_FLAG(iLocal_221, 301, false);
	__LIB_3__::func_157(&(Local_1092[0 /*17*/]), "CRW5_C_ACCE", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	return 1;
}

int func_1275()
{
	int iVar0;
	iVar0 = -1;
	if (__LIB_1__::func_205(Global_35, iLocal_306, 1, 0))
	{
		iVar0 = func_424(&iLocal_221, &iLocal_1071, 3f, &Local_1092, 0, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
	}
	return iVar0;
}

void func_1276()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_221))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_221, 301, true);
	}
	__LIB_2__::func_480(&Local_1092, 0, 0, 1, 0);
}

void func_1305()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1751(0);
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
	func_1751(1);
}

void func_1306()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_524(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1307()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1754(0);
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
	func_1754(1);
}

void func_1308()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1754(0);
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
	func_1754(1);
}

void func_1309()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_524(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_524(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1312(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1312(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1312(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1312(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

int func_1338(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1780(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_524(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

int func_1352()
{
	if (__LIB_0__::func_28())
	{
		if (!__LIB_1__::func_185(3))
		{
			return __LIB_0__::func_559(43);
		}
		if (__LIB_1__::func_185(38) && !__LIB_1__::func_185(43))
		{
			return func_1789(8);
		}
	}
	return 0;
}

bool func_1353(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	return ((Global_1888801[iParam0 /*35*/].f_20 == 1 || Global_1888801[iParam0 /*35*/].f_20 == 2) && !func_1790(iParam0));
}

void func_1648()
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
	iVar0 = func_1986(6291456, 0);
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

void func_1656(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1656(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1656(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_1751(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_524(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_524(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_524(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2025(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_799(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1312(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2031(Var0);
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

void func_1754(bool bParam0)
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
		func_524(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_524(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_524(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_524(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_524(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_524(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_524(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_524(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_524(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_524(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_524(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1312(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1312(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1312(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1312(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1312(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1312(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1312(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1312(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1312(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1312(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1312(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1780(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1780(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1780(iVar63, -915411861, 1, 0, 0));
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

int func_1789(int iParam0)
{
	int iVar0;
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1897952[iParam0 /*2*/].f_1))
	{
		return Global_1897952[iParam0 /*2*/].f_1;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BAYOU_NWA");
			VOLUME::_0x39816F6F94F385AD(iVar0, 2037.5f, -2050f, 150f, 0f, 0f, 18f, 575f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2485f, -1497.5f, 150f, 0f, 0f, 20f, 725f, 1050f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2060f, -1812.5f, 150f, 0f, 0f, 20f, 315f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1975f, -1452.5f, 150f, 0f, 0f, -43f, 200f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2022.5f, -1277.5f, 150f, 0f, 0f, -7f, 100f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2022.5f, -925f, 150f, 0f, 0f, 20f, 865f, 365f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2200f, -2440f, 150f, 0f, 0f, 0f, 500f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1762.5f, -737.5f, 150f, 0f, 0f, 20f, 500f, 175f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2020.944f, -580.694f, 150f, 0f, 0f, -111f, 400f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2116.078f, -612.5f, 150f, 0f, 0f, -1f, 240f, 540f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2197.5f, -693.982f, 150f, 0f, 0f, -111f, 200f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2527.5f, -785f, 150f, 0f, 0f, -80f, 400f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3550f, -1455f, 150f, 0f, 0f, 0f, 1800f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2687.5f, -757.5f, 150f, 0f, 0f, -80f, 400f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2826.796f, -755f, 150f, 0f, 0f, 0f, 282.646f, 400f, 700f);
			Jump @9445; //curOff = 788
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BIG_VALLEY");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1605f, -382.5f, 150f, 0f, 0f, 25f, 1100f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2035f, -810f, 150f, 0f, 0f, -65f, 400f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1887.5f, -1050f, 150f, 0f, 0f, -45f, 210f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2210f, -625f, 150f, 0f, 0f, -65f, 200f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2827.5f, -82.5f, 150f, 0f, 0f, 167f, 1500f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -930f, -730f, 150f, 0f, 0f, 0f, 600f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -825f, -780f, 150f, 0f, 0f, -45f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -632.5f, -902.5f, 150f, 0f, 0f, -20f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -820f, -170f, 150f, 0f, 0f, 37.5f, 500f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -835f, -525f, 150f, 0f, 0f, 41f, 200f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -532.5f, -32.5f, 150f, 0f, 0f, -27f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -605f, 50f, 150f, 0f, 0f, -75f, 200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -540f, 50f, 150f, 0f, 0f, -140f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1127.5f, -90f, 150f, 0f, 0f, -32.5f, 200f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1500f, 392.5f, 150f, 0f, 0f, 160f, 700f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1477.5f, 552.5f, 150f, 0f, 0f, 143f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1656.969f, 378.098f, 150f, 0f, 0f, 122f, 795f, 1083f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2617.969f, 452.097f, 150f, 0f, 0f, 167f, 1763f, 1500f, 700f);
			Jump @9445; //curOff = 1571
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BLUEGILL_MARSH");
			VOLUME::_0x39816F6F94F385AD(iVar0, 3585f, -280f, 150f, 0f, 0f, 0f, 1800f, 550f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3085f, -337.5f, 150f, 0f, 0f, -80.5f, 300f, 1500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2440f, -465f, 150f, 0f, 0f, -1f, 400f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2322.5f, -537.5f, 150f, 0f, 0f, -111f, 100f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3100f, 125f, 150f, 0f, 0f, 41f, 1700f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3670f, 80f, 150f, 0f, 0f, 41f, 1400f, 475f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2332.651f, -365.338f, 150f, 0f, 0f, 86f, 150f, 140f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2124.824f, -347.118f, 150f, 0f, 0f, 86f, 140f, 291f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3726.431f, -755f, 150f, 0f, 0f, 0f, 1518.809f, 400f, 700f);
			Jump @9445; //curOff = 1959
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CUMBERLAND_FOREST");
			VOLUME::_0x39816F6F94F385AD(iVar0, 190.4736f, 1214.829f, 200f, 0f, 0f, 59f, 488.2586f, 443.9291f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 695f, 1075f, 200f, 0f, 0f, 35f, 250f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -11.22244f, 1259.539f, 200f, 0f, 0f, 0f, 135f, 340.8336f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 667.5f, 1675f, 200f, 0f, 0f, 15f, 150f, 325f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 627.5f, 1255f, 200f, 0f, 0f, 9.999999f, 400f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 507.5f, 1532.5f, 200f, 0f, 0f, -45f, 300f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 72.5f, 1297.5f, 200f, 0f, 0f, 50f, 400f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 615f, 1750f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 510f, 1025f, 200f, 0f, 0f, 1f, 300f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 330.2712f, 1028.66f, 200f, 0f, 0f, 82f, 300f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 224.7084f, 1010.634f, 200f, 0f, 0f, 58.85596f, 175f, 267.2676f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 153.0846f, 1314.722f, 200f, 0f, 0f, -23f, 400f, 409.2231f, 800f);
			Jump @9445; //curOff = 2480
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GREAT_PLAINS");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1285f, -1725f, 150f, 0f, 0f, 20f, 500f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1360f, -1540f, 150f, 0f, 0f, 30f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1492.5f, -1262.5f, 150f, 0f, 0f, 15f, 500f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1410f, -1147.5f, 150f, 0f, 0f, 25f, 700f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -865f, -1125f, 150f, 0f, 0f, -20f, 700f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -865f, -1725f, 150f, 0f, 0f, 0f, 800f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1300f, -1917.5f, 150f, 0f, 0f, -42f, 250f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1180f, -2122.5f, 150f, 0f, 0f, 20f, 300f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -955f, -1065f, 150f, 0f, 0f, -45f, 250f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1052.5f, -990f, 150f, 0f, 0f, 1.25f, 200f, 200f, 700f);
			Jump @9445; //curOff = 2919
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_WEST");
			VOLUME::_0x39816F6F94F385AD(iVar0, -100f, 1557.5f, 200f, 0f, 0f, 50f, 225f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -162.5f, 1660f, 200f, 0f, 0f, 0f, 135f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -162.5f, 1952.5f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -752.5f, 2135f, 200f, 0f, 0f, 0f, 1050f, 1975f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2139.972f, 1966.829f, 200f, 0f, 0f, 165f, 1814.271f, 1288f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1295f, 1090f, 200f, 0f, 0f, 122f, 1200f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1080f, 1132.5f, 200f, 0f, 0f, 105f, 1200f, 375f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -895f, 1150f, 200f, 0f, 0f, 45f, 800f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -845f, 720f, 200f, 0f, 0f, 0f, 200f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1015f, 560f, 200f, 0f, 0f, 143f, 75f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1940f, 3145f, 200f, 0f, 0f, 0f, 1400f, 2000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -757.5f, 3625f, 200f, 0f, 0f, 0f, 975f, 1050f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -187.5f, 3210f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2315.88f, 1498.498f, 150f, 0f, 0f, 167f, 1655f, 587f, 700f);
			Jump @9445; //curOff = 3514
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_EAST");
			VOLUME::_0x39816F6F94F385AD(iVar0, 190f, 1630f, 200f, 0f, 0f, -23f, 225f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 715f, 3145f, 200f, 0f, 0f, 0f, 1200f, 2000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1210f, 1212.5f, 200f, 0f, 0f, -14f, 585f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1510f, 1445f, 200f, 0f, 0f, 16f, 450f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1935f, 1040f, 200f, 0f, 0f, 12f, 200f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1810f, 1030f, 200f, 0f, 0f, -14f, 100f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1495f, 1425f, 200f, 0f, 0f, -9f, 1200f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1050f, 1430f, 200f, 0f, 0f, 10f, 500f, 700f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2037.5f, 1630f, 200f, 0f, 0f, 118f, 200f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1400f, 2500f, 200f, 0f, 0f, -47f, 2000f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1810f, 2707.5f, 200f, 0f, 0f, -19f, 1500f, 900f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2175f, 3557.5f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1040f, 2120f, 200f, 0f, 0f, 15f, 800f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 410f, 2112.5f, 200f, 0f, 0f, -93f, 500f, 600f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 307.5f, 1722.5f, 200f, 0f, 0f, -45f, 250f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 472.5f, 1880f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 135f, 2000f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 217.5f, 3245f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			Jump @9445; //curOff = 4297
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1897952[6 /*2*/].f_1) && VOLUME::_DOES_VOLUME_EXIST(Global_1897952[7 /*2*/].f_1))
			{
				iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES");
				VOLUME::_0x6E0D3C3F828DA773(iVar0, Global_1897952[6 /*2*/].f_1);
				VOLUME::_0x6E0D3C3F828DA773(iVar0, Global_1897952[7 /*2*/].f_1);
			}
			else
			{
				return 0;
			}
			Jump @9445; //curOff = 4381
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GUARMA");
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			Jump @9445; //curOff = 4472
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HEARTLAND");
			VOLUME::_0x39816F6F94F385AD(iVar0, -357.5f, -120f, 200f, 0f, 0f, -27f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -385f, 180f, 200f, 0f, 0f, -140f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -600f, 280f, 200f, 0f, 0f, -75f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 165f, 165f, 200f, 0f, 0f, 0f, 1100f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -465f, -340f, 200f, 0f, 0f, 37.5f, 500f, 275f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -37.5f, -525f, 200f, 0f, 0f, 0f, 1125f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 670f, -315f, 200f, 0f, 0f, -42f, 365f, 817f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 860f, 487.5f, 200f, 0f, 0f, 35f, 650f, 900f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 512.5f, 800f, 200f, 0f, 0f, 1f, 300f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1230f, 695f, 200f, 0f, 0f, -14f, 875f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1560f, 835f, 200f, 0f, 0f, 16f, 450f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1727.5f, 702.5f, 200f, 0f, 0f, -14f, 100f, 575f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 964.14f, 59.521f, 200f, 0f, 0f, -71.00001f, 415f, 725f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1485f, 322.5f, 200f, 0f, 0f, -84f, 650f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1630f, 100f, 200f, 0f, 0f, -111f, 435f, 375f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1752.5f, 302.5f, 200f, 0f, 0f, -47f, 275f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 103.6867f, 807.6879f, 200f, 0f, 0f, 58.7951f, 295.0871f, 709.0376f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 302.139f, 780.344f, 200f, 0f, 0f, 82f, 200f, 157.492f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -847.5f, 240f, 200f, 0f, 0f, 33f, 797f, 225f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -975f, 280f, 200f, 0f, 0f, 142f, 329f, 450f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -245.4394f, 1000f, 200f, 0f, 0f, 0f, 333.3127f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -760f, 440f, 200f, 0f, 0f, 105f, 300f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -520f, 507.5f, 200f, 0f, 0f, 0f, 450f, 450f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -495f, 822.5f, 200f, 0f, 0f, 45f, 500f, 225f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -140f, 705f, 200f, 0f, 0f, 59f, 250f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -327.5f, 1080f, 200f, 0f, 0f, 45f, 100f, 100f, 800f);
			Jump @9445; //curOff = 5583
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_ROANOKE_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, 1838.526f, 72.693f, 200f, 0f, 0f, -111f, 525f, 311f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2827.5f, 1215f, 200f, 0f, 0f, -9f, 1500f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1920f, 655f, 200f, 0f, 0f, -14f, 300f, 575f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2181.992f, -132.078f, 200f, 0f, 0f, 86f, 315f, 322f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2130f, 825f, 200f, 0f, 0f, 12f, 500f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2345f, 1795f, 200f, 0f, 0f, 118f, 200f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2775f, 725f, 200f, 0f, 0f, 41f, 2000f, 985f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2565f, 1537.5f, 200f, 0f, 0f, -47f, 1000f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3025f, 1632.5f, 200f, 0f, 0f, -19f, 1500f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3730f, 2300f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			Jump @9445; //curOff = 6026
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_SCARLETT_MEADOWS");
			VOLUME::_0x39816F6F94F385AD(iVar0, 1025f, -642.5f, 150f, 0f, 0f, -42f, 600f, 800f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1335f, -407.5f, 150f, 0f, 0f, -71f, 717f, 325f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1585f, -330f, 150f, 0f, 0f, -111f, 400f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1250f, -1702.5f, 150f, 0f, 0f, 0f, 594f, 2000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 612.5f, -1337.5f, 150f, 0f, 0f, 0f, 850f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 677.5f, -2270f, 150f, 0f, 0f, 45f, 1000f, 700f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1408.3f, -1687.9f, 150f, 0f, 0f, 5f, 450f, 1300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1600f, -545f, 100f, 0f, 0f, 20f, 325f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1807.467f, -1544.09f, 150f, 0f, 0f, -72f, 309f, 562f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1705.656f, -1257.077f, 150f, 0f, 0f, 20f, 400f, 50f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1946.824f, -1264.023f, 150f, 0f, 0f, 21f, 100f, 176f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1735.228f, -1334.945f, 150f, 0f, 0f, 20f, 295f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1902.5f, -432.5f, 150f, 0f, 0f, -111f, 365f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1827.5f, -580f, 150f, 0f, 0f, 20f, 75f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1571.834f, -1097.489f, 150f, 0f, 0f, 20f, 85f, 371f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1661.989f, -1972.796f, 150f, 0f, 0f, 18f, 85f, 371f, 700f);
			Jump @9445; //curOff = 6715
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_TALL_TREES");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1762.5f, -2030f, 150f, 0f, 0f, 16f, 275f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1445f, -1987.5f, 150f, 0f, 0f, -42f, 125f, 50f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1600f, -1882.5f, 150f, 0f, 0f, 20f, 200f, 335f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1927.5f, -1750f, 150f, 0f, 0f, 30f, 690f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2052.5f, -1517.5f, 150f, 0f, 0f, 15f, 715f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2162.5f, -1237.5f, 150f, 0f, 0f, -45f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2272.5f, -1057.5f, 150f, 0f, 0f, -65f, 519f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2865f, -1112.5f, 150f, 0f, 0f, 167f, 1250f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1972.5f, -2022.5f, 150f, 0f, 0f, 44f, 300f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1875f, -2087.5f, 150f, 0f, 0f, 70f, 300f, 180f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2140f, -1950f, 150f, 0f, 0f, 70f, 200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2210f, -1890f, 150f, 0f, 0f, 24f, 200f, 175f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1397.5f, -2027.5f, 150f, 0f, 0f, 20f, 45f, 25f, 700f);
			Jump @9445; //curOff = 7287
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CHOLLA_SPRINGS");
			VOLUME::_0x39816F6F94F385AD(iVar0, -3305f, -3380f, 150f, 0f, 0f, 123f, 300f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3335f, -3582.5f, 150f, 0f, 0f, 170f, 225f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3200f, -3515f, 150f, 0f, 0f, -154f, 235f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3515f, -3190f, 150f, 0f, 0f, 139f, 450f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3930f, -2912.5f, 150f, 0f, 0f, 154f, 700f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4537.5f, -2665f, 150f, 0f, 0f, -178f, 1000f, 800f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4967.5f, -2390f, 150f, 0f, 0f, -148f, 300f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4617.5f, -2080f, 150f, 0f, 0f, 175f, 1000f, 700f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3747.5f, -2030f, 150f, 0f, 0f, 99f, 700f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3282.5f, -3050f, 150f, 0f, 0f, 107f, 750f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3370f, -2690f, 150f, 0f, 0f, 124f, 100f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3355f, -2345f, 150f, 0f, 0f, 69f, 200f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3657.5f, -2610f, 150f, 0f, 0f, 98f, 500f, 850f, 700f);
			Jump @9445; //curOff = 7859
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GAPTOOTH_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, -5420f, -3447.5f, 150f, 0f, 0f, 175f, 300f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5837.5f, -3530f, 150f, 0f, 0f, -32f, 1000f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -6142.5f, -3665f, 150f, 0f, 0f, -8f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5747.5f, -2905f, 150f, 0f, 0f, 136.5f, 1300f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5407.5f, -2487.5f, 150f, 0f, 0f, -148f, 550f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5232.5f, -2825f, 150f, 0f, 0f, -178f, 400f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5667.5f, -2040f, 150f, 0f, 0f, 175f, 1100f, 800f, 700f);
			Jump @9445; //curOff = 8173
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HENNIGAS_STEAD");
			VOLUME::_0x39816F6F94F385AD(iVar0, -2510f, -2542.5f, 150f, 0f, 0f, 44f, 1200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1632.5f, -2480f, 150f, 0f, 0f, 16f, 275f, 535f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1990f, -2525f, 150f, 0f, 0f, 70f, 600f, 850f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1452.5f, -2342.5f, 150f, 0f, 0f, 16f, 150f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1480f, -2177.5f, 150f, 0f, 0f, 20f, 165f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1487.5f, -2087.5f, 150f, 0f, 0f, -42f, 60f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1350f, -2330f, 150f, 0f, 0f, 20f, 165f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1562.5f, -2652.5f, 150f, 0f, 0f, 28f, 500f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2445f, -2795f, 150f, 0f, 0f, 107f, 750f, 1350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2675f, -2177.5f, 150f, 0f, 0f, 70f, 600f, 900f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2947.5f, -2465f, 150f, 0f, 0f, 98f, 150f, 600f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3097.5f, -1977.5f, 150f, 0f, 0f, 99f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2467.5f, -3145f, 150f, 0f, 0f, 123f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2577.5f, -3182.5f, 150f, 0f, 0f, 85f, 150f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2985f, -2502.5f, 150f, 0f, 0f, 124f, 150f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2942.5f, -2457.5f, 150f, 0f, 0f, 69f, 175f, 600f, 700f);
			Jump @9445; //curOff = 8874
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_RIO_BRAVO");
			VOLUME::_0x39816F6F94F385AD(iVar0, -3540f, -3635f, 150f, 0f, 0f, 123f, 125f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3880f, -3687.5f, 150f, 0f, 0f, 105f, 225f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4495f, -3610f, 150f, 0f, 0f, 96f, 600f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4922.5f, -3742.5f, 150f, 0f, 0f, 131f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5135f, -3900f, 150f, 0f, 0f, 22f, 200f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5205f, -3887.5f, 150f, 0f, 0f, -16f, 300f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5350f, -3835f, 150f, 0f, 0f, -32f, 150f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5125f, -3500f, 150f, 0f, 0f, 175f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4975f, -3360f, 150f, 0f, 0f, 137f, 450f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4645f, -3220f, 150f, 0f, 0f, -178f, 735f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4205f, -3420f, 150f, 0f, 0f, 154f, 450f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3795f, -3510f, 150f, 0f, 0f, 139f, 450f, 275f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3992.5f, -3567.5f, 150f, 0f, 0f, 0f, 200f, 200f, 700f);
			Global_1897952[iParam0 /*2*/].f_1 = iVar0;
			return iVar0;
		}
bool func_1790(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !__LIB_0__::func_181())
	{
		return true;
	}
	if (iParam0 == 61)
	{
		return true;
	}
	return false;
}

int func_1986(int iParam0, int iParam1)
{
	var uVar0;
	return func_2127(&uVar0, iParam0, iParam1);
}

void func_2025(int iParam0)
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
	func_1312(iParam0, 1, 1, -142743235, 1);
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
		func_1312(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_2031(struct<6> Param0)
{
	if (!func_2166(Param0.f_4, 1))
	{
	}
	if (!func_2166(Param0, 1))
	{
	}
	if (!func_2166(Param0.f_2, 1))
	{
	}
	if (!func_2166(Param0.f_5, 1))
	{
	}
	if (!func_2166(Param0.f_3, 1))
	{
	}
	if (!func_2166(Param0.f_1, 1))
	{
	}
}

int func_2127(var uParam0, int iParam1, int iParam2)
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
		return func_2127(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2166(int iParam0, int iParam1)
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
				if (func_2166(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2166(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2166(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2166(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

