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
	var uLocal_14[4] = { 0, 0, 0, 0 };
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	vector3 vLocal_22 = { 0f, 0f, 0f };
	vector3 vLocal_25 = { 0f, 0f, 0f };
	vector3 vLocal_28 = { 0f, 0f, 0f };
	vector3 vLocal_31 = { 0f, 0f, 0f };
	vector3 vLocal_34 = { 0f, 0f, 0f };
	vector3 vLocal_37 = { 0f, 0f, 0f };
	vector3 vLocal_40 = { 0f, 0f, 0f };
	vector3 vLocal_43 = { 0f, 0f, 0f };
	float fLocal_46 = 0f;
	float fLocal_47 = 0f;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	float fLocal_50 = 0f;
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
	int iLocal_53[6] = { 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_60[6] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_79[6] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_98[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_105 = 0;
	vector3 vLocal_106 = { 0f, 0f, 0f };
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	bool bLocal_130 = false;
	int iLocal_131[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	bool bLocal_141 = false;
	int iLocal_142[6] = { 0, 0, 0, 0, 0, 0 };
	bool bLocal_149 = false;
	bool bLocal_150 = false;
	bool bLocal_151 = false;
	int iLocal_152[2] = { 0, 0 };
	int iLocal_155[2] = { 0, 0 };
	bool bLocal_158 = false;
	bool bLocal_159 = false;
	bool bLocal_160 = false;
	bool bLocal_161 = false;
	bool bLocal_162 = false;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	bool bLocal_187 = false;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	struct<2> Local_202[12];
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	struct<17> Local_233[1];
	struct<61> Local_251[1];
	struct<17> Local_313[1];
	struct<61> Local_331[1];
	bool bLocal_393 = false;
	struct<22> Local_394 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_416 = 3;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_112 = 10;
	iLocal_191 = joaat("CS_TWINBROTHER_01");
	iLocal_192 = joaat("CS_TWINBROTHER_02");
	iLocal_193 = joaat("CS_TWINGROUPIE_01");
	iLocal_194 = joaat("A_M_M_VALTOWNFOLK_01");
	iLocal_195 = joaat("S_DRINKSHOOTMG01X");
	iLocal_196 = joaat("P_BOTTLEBEER01X");
	iLocal_197 = 4;
	iLocal_198 = 5;
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
					func_12(&Var0);
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
					if (Var0.f_174 == __LIB_10__::func_698())
					{
						__LIB_0__::func_297();
						__LIB_1__::func_140();
					}
					func_22(&Var0);
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
	func_22(uParam0);
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
	func_36(uParam0);
	__LIB_12__::func_642(uParam0);
	__LIB_12__::func_781(uParam0, 0, 0, 0, -1, -1, 0);
	__LIB_12__::func_782(uParam0, 0, 0, 0, -1, -1, 0);
	__LIB_12__::func_894(&(uParam0->f_178));
	if (Global_1347702[uParam0->f_174 /*49*/].f_28 != 0)
	{
		__LIB_12__::func_867(uParam0, Global_1347702[uParam0->f_174 /*49*/].f_28, 7);
	}
	func_42(uParam0);
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
	if (func_53(uParam0))
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
						Var1 = { func_61(0) };
						if (func_62(&Var1))
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
			if (func_64(uParam0))
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
			if (func_70(uParam0))
			{
				if (__LIB_12__::func_644(uParam0) == 2 || __LIB_12__::func_644(uParam0) == 12)
				{
					func_22(uParam0);
					return;
				}
				func_72(uParam0);
				__LIB_12__::func_837(uParam0, 10);
				return;
			}
			else
			{
				__LIB_13__::func_52(uParam0);
			}
			func_74(uParam0);
		}
	}
	__LIB_13__::func_318(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 32))
	{
		__LIB_12__::func_954(uParam0, func_76(uParam0));
	}
	else if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		if (__LIB_12__::func_964(uParam0))
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
				func_72(uParam0);
			}
			func_22(uParam0);
		}
	}
}

void func_9(var uParam0)
{
	if (func_85(uParam0))
	{
		if (__LIB_12__::func_639(uParam0, 64))
		{
			func_86(uParam0);
			__LIB_12__::func_837(uParam0, 2);
			__LIB_12__::func_964(uParam0);
		}
		else if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 4096))
		{
			__LIB_12__::func_837(uParam0, 3);
		}
		else
		{
			func_87(uParam0);
			__LIB_12__::func_837(uParam0, 4);
		}
	}
}

void func_10(var uParam0)
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
				func_86(uParam0);
				__LIB_12__::func_964(uParam0);
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
	if (func_92(uParam0))
	{
		func_86(uParam0);
		iVar0 = __LIB_9__::func_816(uParam0);
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
		__LIB_12__::func_964(uParam0);
		__LIB_12__::func_837(uParam0, iVar0);
	}
}

void func_12(var uParam0)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 8192))
	{
		return;
	}
	__LIB_12__::func_837(uParam0, func_96(uParam0, __LIB_12__::func_767(uParam0)));
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

void func_13(var uParam0)
{
	if (func_98(uParam0))
	{
		func_14(uParam0);
		__LIB_12__::func_837(uParam0, 6);
	}
}

void func_14(var uParam0)
{
	int iVar0;
	func_99(uParam0);
	if (__LIB_12__::func_647(&(uParam0->f_2575)))
	{
		if (func_101(uParam0))
		{
			__LIB_12__::func_966(uParam0, 1);
			iVar0 = func_103(uParam0);
			__LIB_12__::func_837(uParam0, iVar0);
		}
	}
	else
	{
		__LIB_0__::func_8(&(uParam0->f_172), 16);
		__LIB_12__::func_966(uParam0, 0);
		iVar0 = func_103(uParam0);
		__LIB_12__::func_837(uParam0, iVar0);
	}
}

void func_15(var uParam0)
{
	int iVar0;
	if (func_104(uParam0))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 262144))
	{
		__LIB_13__::func_259(uParam0, __LIB_0__::func_58(uParam0));
	}
	iVar0 = func_107(uParam0);
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
		__LIB_13__::func_580(uParam0);
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
			func_128(uParam0->f_174, 1, 1, 0, 1, 1, bVar3);
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
	func_72(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 32768) || __LIB_12__::func_738(uParam0))
	{
		func_22(uParam0);
	}
	__LIB_12__::func_837(uParam0, 10);
}

void func_17(var uParam0, bool bParam1)
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
		func_72(uParam0);
	}
	if (bParam1)
	{
		func_22(uParam0);
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
			func_22(uParam0);
			return;
		}
	}
	if (__LIB_0__::func_0(uParam0) && __LIB_10__::func_265())
	{
		__LIB_0__::func_11(uParam0);
		func_22(uParam0);
	}
	else if (!__LIB_0__::func_75(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_871(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
	{
		__LIB_1__::func_283(&(uParam0->f_2585), 1);
		if (func_150(uParam0))
		{
			__LIB_12__::func_837(uParam0, 11);
		}
	}
}

void func_22(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	func_159(uParam0);
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

void func_36(var uParam0)
{
	__LIB_12__::func_658(uParam0, 3);
	__LIB_12__::func_659(uParam0, 4);
	__LIB_12__::func_656(uParam0, 2f);
	__LIB_12__::func_657(uParam0, 2f);
	__LIB_13__::func_489(uParam0, (2f * 2f));
	__LIB_13__::func_221(uParam0, 1f);
	func_191();
	vLocal_22 = { -326.2036f, 810.9108f, 117.2141f };
	vLocal_25 = { -329.3307f, 801.3683f, 116.5216f };
	vLocal_28 = { -328.8161f, 810.785f, 117.088f };
	vLocal_31 = { -329.5748f, 800.0131f, 116.5216f };
	vLocal_43 = { -328.5448f, 815.7475f, 117.4596f };
	vLocal_34 = { -332.0726f, 813.1353f, 117.1341f };
	vLocal_40 = { -329.0225f, 799.6236f, 116.5216f };
	vLocal_37 = { -327.1194f, 812.014f, 116.2226f };
	fLocal_46 = 11.18f;
	fLocal_47 = 189.1273f;
	fLocal_48 = 7.78f;
	fLocal_49 = 185.7097f;
	fLocal_50 = -113.92f;
	fLocal_51 = 202.9561f;
	fLocal_52 = 218.259f;
	vLocal_60[0 /*3*/] = { -327.9279f, 796.6962f, 117.7875f };
	vLocal_60[1 /*3*/] = { -327.9112f, 796.6695f, 117.7876f };
	vLocal_60[2 /*3*/] = { -327.29f, 809.67f, 116.32f };
	vLocal_60[3 /*3*/] = { -327.29f, 809.67f, 116.32f };
	vLocal_60[4 /*3*/] = { -327.29f, 809.67f, 116.32f };
	vLocal_60[5 /*3*/] = { -327.29f, 809.67f, 116.32f };
	vLocal_79[0 /*3*/] = { 0f, 0f, 0f };
	vLocal_79[1 /*3*/] = { 0f, 0f, 0f };
	vLocal_79[2 /*3*/] = { 0f, 0f, 0f };
	vLocal_79[3 /*3*/] = { 0f, 0f, 0f };
	vLocal_79[4 /*3*/] = { 0f, 0f, 0f };
	vLocal_79[5 /*3*/] = { 0f, 0f, 0f };
	vLocal_106 = { -327.8373f, 796.9632f, 117.7583f };
	iLocal_131[0] = 0;
	iLocal_131[1] = 0;
	iLocal_131[2] = 0;
	iLocal_131[3] = 0;
	iLocal_131[4] = 0;
	iLocal_131[5] = 0;
	Local_394.f_3 = Global_35;
	Local_394.f_4 = 21030;
	Local_394.f_7 = 0;
	Local_394.f_8 = 4;
	Local_394.f_13 = 1;
	Local_394.f_17 = 3;
	Local_394.f_18 = 2;
	Local_394.f_19 = 3;
	Local_394.f_21 = 3;
	Local_394.f_16 = 3;
	Local_394.f_11 = 0;
	Local_394.f_12 = 0;
}

void func_42(var uParam0)
{
	__LIB_12__::func_908(uParam0, 0);
	__LIB_12__::func_867(uParam0, iLocal_191, 1);
	__LIB_12__::func_867(uParam0, iLocal_192, 1);
	__LIB_12__::func_867(uParam0, iLocal_193, 1);
	__LIB_12__::func_867(uParam0, iLocal_194, 2);
	__LIB_12__::func_867(uParam0, iLocal_195, 1);
	__LIB_12__::func_867(uParam0, iLocal_196, 2);
	__LIB_12__::func_867(uParam0, joaat("P_BOTTLECRATE01X"), 1);
}

bool func_53(var uParam0)
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

struct<4> func_61(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
			Var1 = { vLocal_43 };
			Var1.f_3 = fLocal_52;
			break;
		case 1:
			Var1 = { vLocal_43 };
			Var1.f_3 = fLocal_52;
			break;
		case 2:
			Var1 = { vLocal_43 };
			Var1.f_3 = fLocal_52;
			break;
		case 3:
			Var1 = { vLocal_43 };
			Var1.f_3 = fLocal_52;
			break;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_205(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	if (!__LIB_0__::func_272(uLocal_14[0], 0) && !__LIB_0__::func_272(uLocal_14[1], 0))
	{
		StringCopy(&(uParam0->f_2578), "ROBT_F_10", 24);
		return true;
	}
	if (!__LIB_0__::func_272(uLocal_14[0], 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_14[0], Global_35, 1, 1))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[6], false))
		{
			if (func_207())
			{
				__LIB_0__::func_325(&(iLocal_98[0]));
				__LIB_0__::func_325(&(iLocal_98[1]));
				__LIB_0__::func_325(&(iLocal_98[2]));
				__LIB_0__::func_325(&(iLocal_98[3]));
				__LIB_0__::func_325(&(iLocal_98[4]));
				__LIB_0__::func_325(&(iLocal_98[5]));
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_114[0]))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[0], false))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_114[0], "p_bottlebeer01x", iLocal_53[0]);
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_114[0], "p_bottlebeer01x", iLocal_53[2]);
					}
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_114[1]))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[1], false))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_114[1], "p_bottlebeer01x", iLocal_53[1]);
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_114[1], "p_bottlebeer01x", iLocal_53[3]);
					}
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_114[2]))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[2], false))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_114[2], "p_bottlebeer01x", iLocal_53[4]);
					}
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_114[3]))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[3], false))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_114[3], "p_bottlebeer01x", iLocal_53[5]);
					}
				}
			}
		}
		else
		{
			func_209(10);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[0]))
			{
				__LIB_2__::func_919(iLocal_53[0], 1, 1);
				if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_114[0], "p_bottlebeer01x"))
				{
					PHYSICS::ACTIVATE_PHYSICS(iLocal_53[0]);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[1]))
			{
				__LIB_2__::func_919(iLocal_53[1], 1, 1);
				if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_114[1], "p_bottlebeer01x"))
				{
					PHYSICS::ACTIVATE_PHYSICS(iLocal_53[1]);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[2]))
			{
				__LIB_2__::func_919(iLocal_53[2], 1, 1);
				if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_114[0], "p_bottlebeer01x"))
				{
					PHYSICS::ACTIVATE_PHYSICS(iLocal_53[2]);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[3]))
			{
				__LIB_2__::func_919(iLocal_53[3], 1, 1);
				if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_114[1], "p_bottlebeer01x"))
				{
					PHYSICS::ACTIVATE_PHYSICS(iLocal_53[3]);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[4]))
			{
				__LIB_2__::func_919(iLocal_53[4], 1, 1);
				if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_114[2], "p_bottlebeer01x"))
				{
					PHYSICS::ACTIVATE_PHYSICS(iLocal_53[4]);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[5]))
			{
				__LIB_2__::func_919(iLocal_53[5], 1, 1);
				if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_114[3], "p_bottlebeer01x"))
				{
					PHYSICS::ACTIVATE_PHYSICS(iLocal_53[5]);
				}
			}
			if (!bLocal_150 && ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_114[6]) > 6f)
			{
				if (__LIB_12__::func_876(uParam0, "ROBT1_TWINDEAD", 0))
				{
					bLocal_150 = true;
				}
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_114[6]) > 10.67f)
			{
				StringCopy(&(uParam0->f_2578), "ROBT_F_1", 24);
				return true;
			}
		}
		return false;
	}
	if (!__LIB_0__::func_272(uLocal_14[1], 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_14[1], Global_35, 1, 1))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[7], false))
		{
			if (func_212())
			{
				__LIB_0__::func_325(&(iLocal_98[0]));
				__LIB_0__::func_325(&(iLocal_98[1]));
				__LIB_0__::func_325(&(iLocal_98[2]));
				__LIB_0__::func_325(&(iLocal_98[3]));
				__LIB_0__::func_325(&(iLocal_98[4]));
				__LIB_0__::func_325(&(iLocal_98[5]));
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_114[0]))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[0], false))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_114[0], "p_bottlebeer01x", iLocal_53[0]);
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_114[0], "p_bottlebeer01x", iLocal_53[2]);
					}
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_114[1]))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[1], false))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_114[1], "p_bottlebeer01x", iLocal_53[1]);
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_114[1], "p_bottlebeer01x", iLocal_53[3]);
					}
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_114[2]))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[2], false))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_114[2], "p_bottlebeer01x", iLocal_53[4]);
					}
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_114[3]))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[3], false))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_114[3], "p_bottlebeer01x", iLocal_53[5]);
					}
				}
			}
		}
		else
		{
			func_209(10);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[0]))
			{
				__LIB_2__::func_919(iLocal_53[0], 1, 1);
				if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_114[0], "p_bottlebeer01x"))
				{
					PHYSICS::ACTIVATE_PHYSICS(iLocal_53[0]);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[1]))
			{
				__LIB_2__::func_919(iLocal_53[1], 1, 1);
				if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_114[1], "p_bottlebeer01x"))
				{
					PHYSICS::ACTIVATE_PHYSICS(iLocal_53[1]);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[2]))
			{
				__LIB_2__::func_919(iLocal_53[2], 1, 1);
				if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_114[0], "p_bottlebeer01x"))
				{
					PHYSICS::ACTIVATE_PHYSICS(iLocal_53[2]);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[3]))
			{
				__LIB_2__::func_919(iLocal_53[3], 1, 1);
				if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_114[1], "p_bottlebeer01x"))
				{
					PHYSICS::ACTIVATE_PHYSICS(iLocal_53[3]);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[4]))
			{
				__LIB_2__::func_919(iLocal_53[4], 1, 1);
				if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_114[2], "p_bottlebeer01x"))
				{
					PHYSICS::ACTIVATE_PHYSICS(iLocal_53[4]);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[5]))
			{
				__LIB_2__::func_919(iLocal_53[5], 1, 1);
				if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_114[3], "p_bottlebeer01x"))
				{
					PHYSICS::ACTIVATE_PHYSICS(iLocal_53[5]);
				}
			}
			if (!bLocal_150 && ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_114[7]) > 6f)
			{
				if (__LIB_12__::func_876(uParam0, "ROBT1_TWINDEAD", 0))
				{
					bLocal_150 = true;
				}
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_114[7]) > 9.1f)
			{
				StringCopy(&(uParam0->f_2578), "ROBT_F_2", 24);
				return true;
			}
		}
		return false;
	}
	if (func_213(&(uLocal_14[0])))
	{
		StringCopy(&(uParam0->f_2578), "ROBT_F_3", 24);
		return true;
	}
	if (func_213(&(uLocal_14[1])))
	{
		StringCopy(&(uParam0->f_2578), "ROBT_F_4", 24);
		return true;
	}
	if (__LIB_14__::func_71(uParam0))
	{
		StringCopy(&(uParam0->f_2578), "ROBT_F_9", 24);
		return true;
	}
	if (func_215())
	{
		StringCopy(&(uParam0->f_2578), "ROBT_F_5", 24);
		return true;
	}
	if (!__LIB_0__::func_272(uLocal_14[2], 1))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[5], false))
		{
			if (func_216())
			{
			}
		}
		else if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_114[5]) > 14.6f)
		{
			StringCopy(&(uParam0->f_2578), "ROBT_F_6", 24);
			return true;
		}
	}
	return false;
}

bool func_70(var uParam0)
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
	if (func_219(uParam0->f_174))
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
	if (__LIB_14__::func_16(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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

void func_72(var uParam0)
{
	bool bVar0;
	__LIB_1__::func_752();
	func_233(uParam0);
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

void func_74(var uParam0)
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
			func_248(uParam0);
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

int func_76(var uParam0)
{
	return iLocal_113;
}

bool func_85(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		return true;
	}
	if (__LIB_12__::func_924(uParam0) && func_273(uParam0))
	{
		__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
		return true;
	}
	return false;
}

void func_86(var uParam0)
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
			Var1 = { func_61(0) };
			if (!func_62(&Var1))
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
		__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
	}
}

void func_87(var uParam0)
{
	func_292(uParam0, 0);
}

bool func_92(var uParam0)
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
		__LIB_13__::func_259(uParam0, bVar0);
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
		if (uParam0->f_171 != 0 || func_293(uParam0))
		{
			if (__LIB_12__::func_884(uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_96(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = iParam1;
	if (__LIB_8__::func_783(36))
	{
	}
	if (__LIB_8__::func_783(43))
	{
	}
	if (__LIB_8__::func_783(44))
	{
	}
	switch (iVar0)
	{
		case 0:
			if (__LIB_12__::func_936(uParam0))
			{
				if (!__LIB_0__::func_1(uParam0->f_172, 16))
				{
					func_292(uParam0, 0);
				}
				__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
				return 5;
			}
			else
			{
				if (((((!func_298(0) || !func_298(1)) || !func_298(4)) || !func_298(5)) || !func_298(6)) || !func_298(7))
				{
					return 2;
				}
				if (!__LIB_0__::func_75(&uLocal_166))
				{
					ENTITY::SET_ENTITY_HEADING(Global_35, fLocal_52);
					if (__LIB_0__::func_272(uLocal_14[0], 0))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_14[0], vLocal_22, fLocal_46, true, false, true);
						ENTITY::_0x9587913B9E772D29(uLocal_14[0], 0);
					}
					if (__LIB_0__::func_272(uLocal_14[1], 0))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_14[1], vLocal_28, fLocal_48, true, false, true);
						ENTITY::_0x9587913B9E772D29(uLocal_14[1], 0);
					}
					if (__LIB_0__::func_272(uLocal_14[2], 0))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_14[2], vLocal_34, fLocal_50, true, false, true);
						ENTITY::_0x9587913B9E772D29(uLocal_14[2], 0);
					}
					MAP::DISPLAY_RADAR(true);
					iLocal_230 = -290089884;
					if (iLocal_230 != 0)
					{
						__LIB_1__::func_948(iLocal_230, 1, 0, 0, 0, 0, 0, 0);
					}
					__LIB_1__::func_148(&uLocal_166);
				}
				if (func_300(iLocal_195, 0))
				{
					func_301(0);
				}
				if (func_300(iLocal_195, 1))
				{
					func_301(1);
				}
				ENTITY::SET_ENTITY_VISIBLE(iLocal_53[0], true);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_53[1], true);
				__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
				if (__LIB_0__::func_265(&uLocal_166) > 2f)
				{
					if ((((ENTITY::DOES_ENTITY_EXIST(iLocal_53[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_53[1])) && func_303(0)) && func_304(0)) && func_305())
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_195);
						if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
						{
							CAM::DO_SCREEN_FADE_IN(500);
						}
						__LIB_13__::func_105(1, 1);
						func_307();
						__LIB_0__::func_37(&uLocal_166);
						func_308(0);
						return 7;
					}
				}
			}
			break;
		case 1:
			if (__LIB_4__::func_511())
			{
				func_292(uParam0, 1);
				if (!__LIB_0__::func_1(uParam0->f_172, 1))
				{
					return 2;
				}
				__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
				return 5;
			}
			else
			{
				if (((((!func_298(0) || !func_298(1)) || !func_298(4)) || !func_298(5)) || !func_298(6)) || !func_298(7))
				{
					return 2;
				}
				if (!__LIB_0__::func_75(&uLocal_166))
				{
					ENTITY::SET_ENTITY_HEADING(Global_35, fLocal_52);
					if (__LIB_0__::func_272(uLocal_14[0], 0))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_14[0], vLocal_22, fLocal_46, true, false, true);
						ENTITY::_0x9587913B9E772D29(uLocal_14[0], 0);
					}
					if (__LIB_0__::func_272(uLocal_14[1], 0))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_14[1], vLocal_28, fLocal_48, true, false, true);
						ENTITY::_0x9587913B9E772D29(uLocal_14[1], 0);
					}
					if (__LIB_0__::func_272(uLocal_14[2], 0))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_14[2], vLocal_34, fLocal_50, true, false, true);
						ENTITY::_0x9587913B9E772D29(uLocal_14[2], 0);
					}
					MAP::DISPLAY_RADAR(true);
					iLocal_230 = -290089884;
					if (iLocal_230 != 0)
					{
						__LIB_1__::func_948(iLocal_230, 1, 0, 0, 0, 0, 0, 0);
					}
					__LIB_1__::func_148(&uLocal_166);
				}
				if (func_300(iLocal_196, 2))
				{
					func_301(2);
				}
				if (func_300(iLocal_196, 3))
				{
					func_301(3);
				}
				ENTITY::SET_ENTITY_VISIBLE(iLocal_53[2], true);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_53[3], true);
				__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
				if (__LIB_0__::func_265(&uLocal_166) > 2f)
				{
					if ((((ENTITY::DOES_ENTITY_EXIST(iLocal_53[2]) && ENTITY::DOES_ENTITY_EXIST(iLocal_53[3])) && func_303(1)) && func_304(1)) && func_305())
					{
						if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
						{
							CAM::DO_SCREEN_FADE_IN(500);
						}
						__LIB_13__::func_105(1, 1);
						func_307();
						__LIB_0__::func_37(&uLocal_166);
						if (iLocal_113 != 2)
						{
							iLocal_113 = 2;
						}
						func_308(2);
						return 7;
					}
				}
			}
			break;
		case 2:
			if (__LIB_4__::func_511())
			{
				func_292(uParam0, 2);
				if (!__LIB_0__::func_1(uParam0->f_172, 1))
				{
					return 2;
				}
				__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
				return 5;
			}
			else
			{
				if ((((((!func_298(2) || !func_298(3)) || !func_298(9)) || !func_298(4)) || !func_298(5)) || !func_298(6)) || !func_298(7))
				{
					return 2;
				}
				if (!__LIB_0__::func_75(&uLocal_166))
				{
					ENTITY::SET_ENTITY_HEADING(Global_35, fLocal_52);
					if (__LIB_0__::func_272(uLocal_14[0], 0))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_14[0], vLocal_22, fLocal_46, true, false, true);
						ENTITY::_0x9587913B9E772D29(uLocal_14[0], 0);
					}
					if (__LIB_0__::func_272(uLocal_14[1], 0))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_14[1], vLocal_28, fLocal_48, true, false, true);
						ENTITY::_0x9587913B9E772D29(uLocal_14[1], 0);
					}
					if (__LIB_0__::func_272(uLocal_14[2], 0))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_14[2], vLocal_34, fLocal_50, true, false, true);
						ENTITY::_0x9587913B9E772D29(uLocal_14[2], 0);
					}
					MAP::DISPLAY_RADAR(true);
					iLocal_230 = -290089884;
					if (iLocal_230 != 0)
					{
						__LIB_1__::func_948(iLocal_230, 1, 0, 0, 0, 0, 0, 0);
					}
					__LIB_1__::func_148(&uLocal_166);
				}
				if (func_300(iLocal_196, 4))
				{
					func_301(4);
				}
				if (func_300(iLocal_196, 5))
				{
					func_301(5);
				}
				ENTITY::SET_ENTITY_VISIBLE(iLocal_53[4], true);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_53[5], true);
				__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
				if (__LIB_0__::func_265(&uLocal_166) > 2f)
				{
					if (((ENTITY::DOES_ENTITY_EXIST(iLocal_53[4]) && ENTITY::DOES_ENTITY_EXIST(iLocal_53[5])) && func_310()) && func_305())
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_196);
						func_307();
						if (iLocal_113 != 3)
						{
							iLocal_113 = 3;
						}
						if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
						{
							CAM::DO_SCREEN_FADE_IN(500);
						}
						__LIB_13__::func_105(1, 1);
						__LIB_0__::func_37(&uLocal_166);
						func_308(3);
						return 7;
					}
				}
			}
			break;
		case 3:
			if (__LIB_4__::func_511())
			{
				func_292(uParam0, 3);
				if (!__LIB_0__::func_1(uParam0->f_172, 1))
				{
					return 2;
				}
				return 5;
			}
			else
			{
				if (!__LIB_0__::func_75(&uLocal_166))
				{
					__LIB_0__::func_325(&(iLocal_98[0]));
					__LIB_0__::func_325(&(iLocal_98[1]));
					__LIB_0__::func_325(&(iLocal_98[2]));
					__LIB_0__::func_325(&(iLocal_98[3]));
					__LIB_0__::func_325(&(iLocal_98[4]));
					__LIB_0__::func_325(&(iLocal_98[5]));
					MAP::DISPLAY_RADAR(true);
					func_311();
					if (__LIB_0__::func_272(uLocal_14[0], 0))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_14[0], vLocal_25, fLocal_47, true, false, true);
						ENTITY::_0x9587913B9E772D29(uLocal_14[0], 0);
					}
					if (__LIB_0__::func_272(uLocal_14[1], 0))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_14[1], vLocal_31, fLocal_49, true, false, true);
						ENTITY::_0x9587913B9E772D29(uLocal_14[1], 0);
					}
					if (__LIB_0__::func_272(uLocal_14[2], 0))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_14[2], vLocal_40, fLocal_51, true, false, true);
						ENTITY::_0x9587913B9E772D29(uLocal_14[2], 0);
					}
					__LIB_1__::func_148(&uLocal_166);
				}
				if (__LIB_0__::func_265(&uLocal_166) > 5f)
				{
					if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					__LIB_0__::func_37(&uLocal_166);
					__LIB_13__::func_105(1, 1);
					return 8;
				}
			}
			break;
	}
	return 2;
}

bool func_98(var uParam0)
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
				if (__LIB_0__::func_1(uParam0->f_172, 8388608) || func_85(uParam0))
				{
					__LIB_12__::func_918(uParam0, 2);
					if (!__LIB_0__::func_1(uParam0->f_172, 16))
					{
						func_87(uParam0);
					}
				}
			}
			return false;
		}
	}
	else if (__LIB_0__::func_1(uParam0->f_172, 262144) && !__LIB_0__::func_1(uParam0->f_172, 256))
	{
		__LIB_13__::func_259(uParam0, 0);
		if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
		{
			return false;
		}
	}
	else
	{
		__LIB_12__::func_668();
		__LIB_12__::func_669(uParam0);
		if (!func_318(uParam0))
		{
			return false;
		}
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 1))
	{
	}
	return true;
}

void func_99(var uParam0)
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
		__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 1);
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

int func_101(var uParam0)
{
	struct<4> Var0;
	MemCopy(&Var0, {uParam0->f_2575}, 4);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		return 1;
	}
	return func_324(Var0, &(uParam0->f_206), uParam0);
}

int func_103(var uParam0)
{
	switch (iLocal_197)
	{
		case 0:
			if (func_300(iLocal_195, 0))
			{
				func_301(0);
			}
			if (func_300(iLocal_195, 1))
			{
				func_301(1);
			}
			ENTITY::SET_ENTITY_VISIBLE(iLocal_53[0], true);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_53[1], true);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_114[8]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_114[8]);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_195);
			func_307();
			iLocal_138 = 1;
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TWIN"));
			PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
			PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "OBT1_DIS");
			func_328();
			func_308(0);
			return 7;
		case 1:
			if (func_300(iLocal_196, 2))
			{
				func_301(2);
			}
			if (func_300(iLocal_196, 3))
			{
				func_301(3);
			}
			ENTITY::SET_ENTITY_VISIBLE(iLocal_53[2], true);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_53[3], true);
			MAP::DISPLAY_RADAR(true);
			if (__LIB_0__::func_75(&uLocal_199))
			{
				__LIB_0__::func_37(&uLocal_199);
			}
			__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
			func_307();
			if (iLocal_113 != 2)
			{
				iLocal_113 = 2;
			}
			func_308(2);
			return 7;
		case 2:
			if (func_300(iLocal_196, 4))
			{
				func_301(4);
			}
			if (func_300(iLocal_196, 5))
			{
				func_301(5);
			}
			ENTITY::SET_ENTITY_VISIBLE(iLocal_53[4], true);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_53[5], true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_196);
			MAP::DISPLAY_RADAR(true);
			if (__LIB_0__::func_75(&uLocal_199))
			{
				__LIB_0__::func_37(&uLocal_199);
			}
			func_307();
			if (iLocal_113 != 3)
			{
				iLocal_113 = 3;
			}
			__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
			func_308(3);
			return 7;
		case 3:
			__LIB_1__::func_797(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			MAP::DISPLAY_RADAR(true);
			func_311();
			__LIB_12__::func_997(uParam0, func_61(3), func_61(3), 3, 3, 0);
			return 8;
		case 4:
			break;
	}
	return 7;
}

bool func_104(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 256) && !__LIB_0__::func_1(uParam0->f_172, 1024))
	{
		if (!__LIB_12__::func_925(uParam0))
		{
			if (__LIB_0__::func_1(uParam0->f_172, 512) && __LIB_0__::func_1(uParam0->f_172, 8192))
			{
				if (func_85(uParam0))
				{
					if (!__LIB_0__::func_1(uParam0->f_172, 16))
					{
						func_87(uParam0);
					}
				}
			}
			return true;
		}
		else
		{
			if (__LIB_0__::func_1(uParam0->f_172, 1024) && uParam0->f_176 == 4)
			{
				__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 1);
			}
			return false;
		}
	}
	return false;
}

int func_107(var uParam0)
{
	PED::SET_PED_RESET_FLAG(Global_35, 1, true);
	CAM::_0xC252C0CC969AF79A(1);
	switch (iLocal_198)
	{
		case 0:
			func_332(uParam0);
			break;
		case 1:
			func_333(uParam0);
			break;
		case 2:
			func_334(uParam0);
			break;
		case 3:
			func_335(uParam0);
			break;
		case 4:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_114[0]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_114[0]);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_114[1]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_114[1]);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_114[2]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_114[2]);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_114[3]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_114[3]);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_114[4]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_114[4]);
			}
			return 5;
		case 5:
			break;
	}
	return 7;
}

void func_128(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		func_370(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		__LIB_1__::func_809(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	__LIB_10__::func_833(iParam0);
}

bool func_150(var uParam0)
{
	float fVar0;
	fVar0 = 50f;
	if (__LIB_12__::func_644(uParam0) == 9 || __LIB_12__::func_644(uParam0) == 11)
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[8], false))
		{
			if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[8], "pl_react"))
			{
				func_398(9);
			}
			else
			{
				func_399();
			}
		}
		else
		{
			if (!__LIB_0__::func_163(uLocal_14[2], 1435919172))
			{
				if (!PED::IS_PED_FLEEING(uLocal_14[2]))
				{
					TASK::TASK_SMART_FLEE_PED(uLocal_14[2], Global_35, 100f, -1, 256, 3f, 0);
				}
			}
			if (!__LIB_0__::func_163(uLocal_14[0], 1435919172))
			{
				if (!PED::IS_PED_FLEEING(uLocal_14[0]))
				{
					TASK::TASK_SMART_FLEE_PED(uLocal_14[0], Global_35, 100f, -1, 256, 3f, 0);
				}
			}
			if (!__LIB_0__::func_163(uLocal_14[1], 1435919172))
			{
				if (!PED::IS_PED_FLEEING(uLocal_14[1]))
				{
					TASK::TASK_SMART_FLEE_PED(uLocal_14[1], Global_35, 100f, -1, 256, 3f, 0);
				}
			}
		}
	}
	if ((!__LIB_12__::func_610(uLocal_14[0], -1f, fVar0, 0, 0, -1082130432 /* Float: -1f */) || !__LIB_12__::func_610(uLocal_14[1], -1f, fVar0, 0, 0, -1082130432 /* Float: -1f */)) || !__LIB_12__::func_610(uLocal_14[2], -1f, fVar0, 0, 0, -1082130432 /* Float: -1f */))
	{
		return false;
	}
	else
	{
		__LIB_2__::func_426(&(uLocal_14[0]));
		__LIB_2__::func_426(&(uLocal_14[1]));
		__LIB_2__::func_426(&(uLocal_14[2]));
	}
	return true;
}

void func_159(var uParam0)
{
	func_402(uParam0);
	if (iLocal_230 != 0)
	{
		__LIB_1__::func_948(iLocal_230, 0, 0, 0, 0, 0, 0, 0);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_191);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_192);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_193);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_194);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_195);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_196);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_BOTTLECRATE01X"));
	__LIB_3__::func_319(iLocal_114[0]);
	__LIB_3__::func_319(iLocal_114[1]);
	__LIB_3__::func_319(iLocal_114[2]);
	__LIB_3__::func_319(iLocal_114[3]);
	__LIB_3__::func_319(iLocal_114[4]);
	__LIB_3__::func_319(iLocal_114[5]);
	__LIB_3__::func_319(iLocal_114[6]);
	__LIB_3__::func_319(iLocal_114[7]);
	__LIB_3__::func_319(iLocal_114[8]);
	__LIB_3__::func_319(iLocal_114[9]);
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_206.f_348) && ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_206.f_348, "p_bottleBeer01x"))
	{
		if (__LIB_13__::func_521(&(uParam0->f_206), iLocal_53[0], 0, 0, 1, 1))
		{
			func_404(&(uParam0->f_206), &(iLocal_53[0]), "p_bottleBeer01x");
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_206.f_348) && ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_206.f_348, "p_bottleBeer01x^1"))
	{
		if (__LIB_13__::func_521(&(uParam0->f_206), iLocal_53[1], 0, 0, 1, 1))
		{
			func_404(&(uParam0->f_206), &(iLocal_53[1]), "p_bottleBeer01x^1");
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_206.f_348) && ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_206.f_348, "p_bottlecrate01x"))
	{
		if (__LIB_13__::func_521(&(uParam0->f_206), iLocal_105, 0, 0, 1, 1))
		{
			func_404(&(uParam0->f_206), &iLocal_105, "p_bottlecrate01x");
		}
	}
	__LIB_1__::func_951(&(iLocal_53[2]));
	__LIB_1__::func_951(&(iLocal_53[3]));
	__LIB_1__::func_951(&(iLocal_53[4]));
	__LIB_1__::func_951(&(iLocal_53[5]));
	__LIB_1__::func_951(&iLocal_109);
	__LIB_0__::func_172(iLocal_188);
	__LIB_0__::func_172(iLocal_189);
	__LIB_0__::func_172(iLocal_190);
	__LIB_0__::func_325(&(iLocal_98[0]));
	__LIB_0__::func_325(&(iLocal_98[1]));
	__LIB_0__::func_325(&(iLocal_98[2]));
	__LIB_0__::func_325(&(iLocal_98[3]));
	__LIB_0__::func_325(&(iLocal_98[4]));
	__LIB_0__::func_325(&(iLocal_98[5]));
	if (__LIB_12__::func_644(uParam0) == 2)
	{
		__LIB_2__::func_426(&(uLocal_14[0]));
		__LIB_2__::func_426(&(uLocal_14[1]));
		__LIB_2__::func_426(&(uLocal_14[2]));
		__LIB_2__::func_426(&(uLocal_14[3]));
	}
	else if (__LIB_12__::func_644(uParam0) != 9 || __LIB_12__::func_644(uParam0) != 11)
	{
		__LIB_2__::func_788(&(uLocal_14[0]), 0, 0, 1);
		__LIB_2__::func_788(&(uLocal_14[1]), 0, 0, 1);
		__LIB_2__::func_788(&(uLocal_14[2]), 0, 0, 1);
		__LIB_2__::func_788(&(uLocal_14[3]), 0, 0, 1);
	}
}

void func_191()
{
	Local_202[0 /*2*/] = "ROBT1_HIT1A";
	Local_202[0 /*2*/].f_1 = 0;
	Local_202[1 /*2*/] = "ROBT1_HIT1A_ALT";
	Local_202[1 /*2*/].f_1 = 0;
	Local_202[2 /*2*/] = "ROBT1_HIT2A";
	Local_202[2 /*2*/].f_1 = 0;
	Local_202[3 /*2*/] = "ROBT1_HIT2A_ALT";
	Local_202[3 /*2*/].f_1 = 0;
	Local_202[4 /*2*/] = "ROBT1_HIT1B";
	Local_202[4 /*2*/].f_1 = 0;
	Local_202[5 /*2*/] = "ROBT1_HIT1B_ALT";
	Local_202[5 /*2*/].f_1 = 0;
	Local_202[6 /*2*/] = "ROBT1_HIT2B";
	Local_202[6 /*2*/].f_1 = 0;
	Local_202[7 /*2*/] = "ROBT1_HIT2B_ALT";
	Local_202[7 /*2*/].f_1 = 0;
	Local_202[8 /*2*/] = "ROBT1_HIT1C";
	Local_202[8 /*2*/].f_1 = 0;
	Local_202[9 /*2*/] = "ROBT1_HIT1C_ALT";
	Local_202[9 /*2*/].f_1 = 0;
	Local_202[10 /*2*/] = "ROBT1_HIT2C";
	Local_202[10 /*2*/].f_1 = 0;
	Local_202[11 /*2*/] = "ROBT1_HIT2C_ALT";
	Local_202[11 /*2*/].f_1 = 0;
}

int func_205(vector3 vParam0, var uParam3)
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
		iVar0 = func_456(0, 0);
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

bool func_207()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_114[6]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_114[6], true, false))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_114[6], "cs_twinbrother_02", uLocal_14[1], 0);
			ANIMSCENE::START_ANIM_SCENE(iLocal_114[6]);
			return true;
		}
	}
	return false;
}

void func_209(int iParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[4], false))
	{
		return;
	}
	iLocal_111 = iParam0;
	switch (iLocal_111)
	{
		case 0:
			if (__LIB_2__::func_918() == 1)
			{
				sVar1 = "pbl_Flinch_01";
			}
			else
			{
				sVar1 = "pbl_Flinch_02";
			}
			if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[4], sVar1))
			{
				func_462(iLocal_114[4], sVar1);
				if (__LIB_13__::func_180(iLocal_114[4], sVar1))
				{
					if (__LIB_13__::func_181(iLocal_114[4], sVar1))
					{
					}
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_918() == 1)
			{
				sVar0 = "pbl_Success_01";
			}
			else
			{
				sVar0 = "pbl_Success_02";
			}
			if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[4], sVar0))
			{
				func_462(iLocal_114[4], sVar0);
				if (__LIB_13__::func_180(iLocal_114[4], sVar0))
				{
					if (__LIB_13__::func_181(iLocal_114[4], sVar0))
					{
					}
				}
			}
			break;
		case 2:
			if (iLocal_129 == 0)
			{
				sVar4 = "pbl_Idle_01";
			}
			else if (iLocal_129 == 1)
			{
				sVar4 = "pbl_Idle_02";
			}
			else if (iLocal_129 == 2)
			{
				sVar4 = "pbl_Idle_03";
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[4], false) && !ANIMSCENE::_0x1F0E401031E20146(iLocal_114[4], sVar4))
			{
				func_462(iLocal_114[4], sVar4);
				if (__LIB_13__::func_180(iLocal_114[4], sVar4))
				{
					if (__LIB_13__::func_181(iLocal_114[4], sVar4))
					{
						if (iLocal_129 < 3)
						{
							iLocal_129++;
						}
						if (iLocal_129 >= 3)
						{
							iLocal_129 = 0;
						}
					}
				}
			}
			break;
		case 3:
			if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[4], "pbl_AimAt"))
			{
				func_462(iLocal_114[4], "pbl_AimAt");
				if (__LIB_13__::func_180(iLocal_114[4], "pbl_AimAt"))
				{
					if (__LIB_13__::func_181(iLocal_114[4], "pbl_AimAt"))
					{
					}
				}
			}
			break;
		case 4:
			if (__LIB_2__::func_918() == 1)
			{
				sVar5 = "pbl_AimAt_Flinch_01";
			}
			else
			{
				sVar5 = "pbl_AimAt_Flinch_02";
			}
			if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[4], sVar5))
			{
				func_462(iLocal_114[4], sVar5);
				if (__LIB_13__::func_180(iLocal_114[4], sVar5))
				{
					if (__LIB_13__::func_181(iLocal_114[4], sVar5))
					{
					}
				}
			}
			break;
		case 5:
			if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[4], "pbl_AimAt_Exit"))
			{
				func_462(iLocal_114[4], "pbl_AimAt_Exit");
				if (__LIB_13__::func_180(iLocal_114[4], "pbl_AimAt_Exit"))
				{
					if (__LIB_13__::func_181(iLocal_114[4], "pbl_AimAt_Exit"))
					{
					}
				}
			}
			break;
		case 6:
			if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[4], "pbl_EyesCovered_Enter"))
			{
				func_462(iLocal_114[4], "pbl_EyesCovered_Enter");
				if (__LIB_13__::func_180(iLocal_114[4], "pbl_EyesCovered_Enter"))
				{
					if (__LIB_13__::func_181(iLocal_114[4], "pbl_EyesCovered_Enter"))
					{
					}
				}
			}
			break;
		case 7:
			if (iLocal_128 == 0)
			{
				sVar2 = "pbl_EyesCovered_Flinch_01";
			}
			else if (iLocal_128 == 1)
			{
				sVar2 = "pbl_EyesCovered_Flinch_02";
			}
			else if (iLocal_128 == 2)
			{
				sVar2 = "pbl_EyesCovered_Flinch_03";
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[4], false) && !ANIMSCENE::_0x1F0E401031E20146(iLocal_114[4], sVar2))
			{
				func_462(iLocal_114[4], sVar2);
				if (__LIB_13__::func_180(iLocal_114[4], sVar2))
				{
					if (__LIB_13__::func_181(iLocal_114[4], sVar2))
					{
						if (iLocal_128 < 3)
						{
							iLocal_128++;
						}
						if (iLocal_128 >= 3)
						{
							iLocal_128 = 0;
						}
					}
				}
			}
			break;
		case 8:
			if (__LIB_2__::func_918() == 1)
			{
				sVar3 = "pbl_EyesCovered_Idle_01";
			}
			else
			{
				sVar3 = "pbl_EyesCovered_Idle_02";
			}
			if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[4], sVar3))
			{
				func_462(iLocal_114[4], sVar3);
				if (__LIB_13__::func_180(iLocal_114[4], sVar3))
				{
					if (__LIB_13__::func_181(iLocal_114[4], sVar3))
					{
					}
				}
			}
			break;
		case 9:
			if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[4], "pbl_EyesCovered_Exit"))
			{
				func_462(iLocal_114[4], "pbl_EyesCovered_Exit");
				if (__LIB_13__::func_180(iLocal_114[4], "pbl_EyesCovered_Exit"))
				{
					if (__LIB_13__::func_181(iLocal_114[4], "pbl_EyesCovered_Exit"))
					{
					}
				}
			}
			break;
		case 10:
			if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[4], "pbl_Fail"))
			{
				func_462(iLocal_114[4], "pbl_Fail");
				if (__LIB_13__::func_180(iLocal_114[4], "pbl_Fail"))
				{
					if (__LIB_13__::func_181(iLocal_114[4], "pbl_Fail"))
					{
					}
				}
			}
			break;
	}
}

bool func_212()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_114[7]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_114[7], true, false))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_114[7], "cs_twinbrother_01", uLocal_14[0], 0);
			ANIMSCENE::START_ANIM_SCENE(iLocal_114[7]);
			return true;
		}
	}
	return false;
}

bool func_213(var uParam0)
{
	struct<28> Var0;
	int iVar28;
	Var0.f_8 = -1;
	Var0.f_17 = 1097859072;
	Var0.f_18 = 1000;
	Var0.f_19 = 1067450368;
	Var0.f_20 = 5000;
	Var0.f_21 = 42;
	Var0.f_22 = 1103626240;
	Var0.f_23 = 1077936128;
	Var0.f_24 = 1106247680;
	Var0.f_25 = 1103101952;
	Var0.f_26 = 1097859072;
	Var0.f_27 = 1103626240;
	__LIB_4__::func_228(&Var0);
	__LIB_1__::func_401(&Var0, 0);
	__LIB_2__::func_828(&Var0, 1);
	__LIB_2__::func_829(&Var0, 0);
	__LIB_1__::func_402(&Var0, 0);
	__LIB_1__::func_398(&Var0, 0);
	__LIB_1__::func_413(&Var0, 0);
	__LIB_2__::func_830(&Var0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (__LIB_13__::func_262(*uParam0, 0, &Var0, &iVar28, 0, 0))
		{
			if (iVar28 == 4)
			{
				return false;
			}
			return true;
		}
	}
	return false;
}

bool func_215()
{
	if (!__LIB_0__::func_272(uLocal_14[0], 0) && !__LIB_0__::func_272(uLocal_14[1], 0))
	{
		return false;
	}
	if (PED::IS_PED_SHOOTING(Global_35))
	{
		if (PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 500))
		{
			return true;
		}
		else if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_216()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_114[5]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_114[5], true, false))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_114[5], "cs_twinbrother_01", uLocal_14[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_114[5], "cs_twinbrother_02", uLocal_14[1], 0);
			ANIMSCENE::START_ANIM_SCENE(iLocal_114[5]);
			return true;
		}
	}
	return false;
}

bool func_219(int iParam0)
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
				func_128(113, 1, 0, 1, 1, 1, 0);
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

void func_233(var uParam0)
{
	func_462(iLocal_114[8], "pl_react");
	func_402(uParam0);
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		__LIB_2__::func_426(&(uLocal_14[2]));
		__LIB_2__::func_426(&(uLocal_14[0]));
		__LIB_2__::func_426(&(uLocal_14[1]));
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TWIN"));
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_GROUPIE_1"));
	}
	else if (__LIB_12__::func_644(uParam0) == 9 || __LIB_12__::func_644(uParam0) == 11)
	{
		func_398(9);
		if (bLocal_393)
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
			PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "OBT1_DIS");
			HUD::_DISPLAY_HUD_COMPONENT(724769646);
		}
	}
	EVENT::REMOVE_ALL_SHOCKING_EVENTS(true);
}

void func_248(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 16))
	{
		__LIB_12__::func_966(uParam0, 0);
		func_87(uParam0);
	}
}

int func_273(var uParam0)
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	iVar1 = __LIB_12__::func_767(uParam0);
	if (!ENTITY::_0x6BFBDC46139C45AB(-323.71f, 794.31f, 116.89f))
	{
		bVar0 = false;
	}
	if (!func_547(uParam0))
	{
		bVar0 = false;
	}
	if (!func_548(uParam0))
	{
		bVar0 = false;
	}
	if (!func_549(uParam0))
	{
		bVar0 = false;
	}
	if (iVar1 <= 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53[0]))
		{
			iLocal_53[0] = OBJECT::CREATE_OBJECT(iLocal_195, vLocal_60[0 /*3*/], true, true, false, false, true);
			bVar0 = false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53[1]))
		{
			iLocal_53[1] = OBJECT::CREATE_OBJECT(iLocal_195, vLocal_60[1 /*3*/], true, true, false, false, true);
			bVar0 = false;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_105))
	{
		iLocal_105 = OBJECT::CREATE_OBJECT(joaat("P_BOTTLECRATE01X"), vLocal_106, true, true, false, false, true);
		bVar0 = false;
	}
	if (iVar1 < 0)
	{
		if (!func_298(8))
		{
			return 0;
		}
		if (!func_550())
		{
			bVar0 = false;
		}
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_188))
	{
		iLocal_188 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volumeRestrictPeds");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_189))
	{
		iLocal_189 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-323.189f, 799.467f, 117.116f, 0f, 0f, 10.113f, 8f, 6f, 5f, "m_volumeShop");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_190))
	{
		iLocal_190 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -323.906f, 795.419f, 116.992f, 0f, 0f, 0f, 1.1f, 1.1f, 2f);
	}
	if (bVar0)
	{
		__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 1);
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_188))
		{
			VOLUME::_0x39816F6F94F385AD(iLocal_188, -329.336f, 799.841f, 117.677f, 0f, 0f, 8.855f, 5f, 17f, 7f);
			VOLUME::_0x39816F6F94F385AD(iLocal_188, -327.331f, 813.04f, 118.073f, 0f, 0f, 10.951f, 13f, 12f, 5f);
			VOLUME::_0x39816F6F94F385AD(iLocal_188, -323.672f, 794.13f, 118.073f, 0f, 0f, 10.951f, 6f, 4f, 5f);
			POPULATION::_0xB56D41A694E42E86(iLocal_188, 532480, 0, 0, -1, -1, 0);
			POPULATION::_0x18262CAFEBB5FBE1(iLocal_188, 532480, 0, 0, -1, -1, 0);
			PED::_0x4C39C95AE5DB1329(iLocal_188, 0, 15);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_BOTTLECRATE01X"));
		return 1;
	}
	return 0;
}

void func_292(var uParam0, int iParam1)
{
	iLocal_197 = iParam1;
	switch (iLocal_197)
	{
		case 0:
			StringCopy(&(uParam0->f_2575), "robt_s1_int", 24);
			__LIB_12__::func_779(uParam0, ENTITY::GET_ENTITY_COORDS(uLocal_14[2], true, false));
			__LIB_13__::func_465(uParam0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, uLocal_14[0], "cs_twinbrother_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, uLocal_14[1], "cs_twinbrother_02", 0, 0, 0);
			__LIB_12__::func_957(uParam0, uLocal_14[2], "cs_twingroupie_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_105, "p_bottlecrate01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_53[0], "s_drinkShootMG01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_53[1], "s_drinkshootmg01x^1", 0, 0, 0);
			__LIB_13__::func_16(uParam0, 89354);
			__LIB_12__::func_981(uParam0, 89535);
			__LIB_12__::func_982(uParam0, 90690);
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			__LIB_12__::func_676(&(uParam0->f_206), "Multistart");
			__LIB_13__::func_17(&(uParam0->f_206), "Multistart", 0);
			break;
		case 1:
			StringCopy(&(uParam0->f_2575), "robt_s1_mcs1", 24);
			__LIB_12__::func_779(uParam0, ENTITY::GET_ENTITY_COORDS(uLocal_14[2], true, false));
			__LIB_13__::func_465(uParam0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, uLocal_14[0], "cs_twinbrother_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, uLocal_14[1], "cs_twinbrother_02", 0, 0, 0);
			__LIB_12__::func_957(uParam0, uLocal_14[2], "cs_twingroupie_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_105, "p_bottlecrate01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_53[0], "p_bottleBeer01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_53[1], "p_bottleBeer01x^1", 0, 0, 0);
			__LIB_13__::func_16(uParam0, 89354);
			__LIB_12__::func_981(uParam0, 89535);
			__LIB_0__::func_88(&(uParam0->f_206), 8388608);
			__LIB_13__::func_191(&(uParam0->f_206), &(uParam0->f_2575), 0, 1);
			if (iLocal_142[1])
			{
				__LIB_12__::func_676(&(uParam0->f_206), "1-Brother_Right_Celebrates");
				__LIB_13__::func_17(&(uParam0->f_206), "1-Brother_Right_Celebrates", 0);
			}
			else if (iLocal_142[0])
			{
				__LIB_12__::func_676(&(uParam0->f_206), "2-Brother_Left_Celebrates");
				__LIB_13__::func_17(&(uParam0->f_206), "2-Brother_Left_Celebrates", 0);
			}
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			break;
		case 2:
			StringCopy(&(uParam0->f_2575), "robt_s1_mcs2", 24);
			__LIB_12__::func_779(uParam0, ENTITY::GET_ENTITY_COORDS(uLocal_14[2], true, false));
			__LIB_13__::func_465(uParam0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, uLocal_14[0], "cs_twinbrother_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, uLocal_14[1], "cs_twinbrother_02", 0, 0, 0);
			__LIB_12__::func_957(uParam0, uLocal_14[2], "cs_twingroupie_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_105, "p_bottlecrate01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_53[0], "p_bottleBeer01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_53[1], "p_bottleBeer01x^1", 0, 0, 0);
			__LIB_13__::func_16(uParam0, 89354);
			__LIB_12__::func_981(uParam0, 89535);
			__LIB_0__::func_88(&(uParam0->f_206), 8388608);
			__LIB_13__::func_191(&(uParam0->f_206), &(uParam0->f_2575), 0, 1);
			if (iLocal_142[3])
			{
				__LIB_12__::func_676(&(uParam0->f_206), "1-Brother_Right");
				__LIB_13__::func_17(&(uParam0->f_206), "1-Brother_Right", 0);
			}
			else if (iLocal_142[2])
			{
				__LIB_12__::func_676(&(uParam0->f_206), "2-Brother_Left");
				__LIB_13__::func_17(&(uParam0->f_206), "2-Brother_Left", 0);
			}
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			break;
		case 3:
			StringCopy(&(uParam0->f_2575), "robt_s1_ext", 24);
			__LIB_12__::func_779(uParam0, ENTITY::GET_ENTITY_COORDS(uLocal_14[2], true, false));
			__LIB_13__::func_465(uParam0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, uLocal_14[0], "cs_twinbrother_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, uLocal_14[1], "cs_twinbrother_02", 0, 0, 0);
			__LIB_12__::func_957(uParam0, uLocal_14[2], "cs_twingroupie_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_105, "p_bottlecrate01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_53[0], "s_drinkShootMG01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_53[1], "s_drinkshootmg01x^1", 0, 0, 0);
			__LIB_0__::func_88(&(uParam0->f_206), 8388608);
			__LIB_13__::func_191(&(uParam0->f_206), &(uParam0->f_2575), 0, 1);
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			break;
		case 4:
			StringCopy(&(uParam0->f_2575), "", 24);
			__LIB_0__::func_8(&(uParam0->f_172), 16);
			break;
	}
}

bool func_293(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = -1;
	func_585();
	func_586(uParam0);
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_189, true, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(uLocal_14[0], 301, true) == 1)
		{
			PED::SET_PED_CONFIG_FLAG(uLocal_14[0], 301, false);
		}
		if (PED::GET_PED_CONFIG_FLAG(uLocal_14[1], 301, true) == 1)
		{
			PED::SET_PED_CONFIG_FLAG(uLocal_14[1], 301, false);
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[8], false))
		{
			if (!bLocal_393)
			{
				if (__LIB_0__::func_48(Global_35, uLocal_14[0], 3f, 1) || __LIB_0__::func_48(Global_35, uLocal_14[1], 3f, 1))
				{
					iVar0 = func_588(&(uLocal_14[0]), &(Local_251[0 /*61*/]), 3f, &Local_233, 0, 3, 0, 0, -2147473407, 0, 0, 2, -1082130432 /* Float: -1f */);
					iVar1 = func_588(&(uLocal_14[1]), &(Local_331[0 /*61*/]), 3f, &Local_313, 0, 3, 0, 0, -2147473407, 0, 0, 2, -1082130432 /* Float: -1f */);
					if (iVar0 == 0 || iVar1 == 0)
					{
						PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), uLocal_14[2], "RC_OBT1", 0f, 0f, 0f, 0, "OBT1_DIS");
						func_328();
						func_589(&(uLocal_14[0]), &(Local_251[0 /*61*/]), &Local_233, 10f, -1082130432 /* Float: -1f */, 0);
						func_589(&(uLocal_14[1]), &(Local_331[0 /*61*/]), &Local_313, 10f, -1082130432 /* Float: -1f */, 0);
						WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 1, 0);
						bLocal_393 = true;
					}
				}
			}
			else
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
				__LIB_1__::func_538(0);
				PED::SET_PED_RESET_FLAG(Global_35, 175, true);
				func_589(&(uLocal_14[0]), &(Local_251[0 /*61*/]), &Local_233, 10f, -1082130432 /* Float: -1f */, 0);
				func_589(&(uLocal_14[1]), &(Local_331[0 /*61*/]), &Local_313, 10f, -1082130432 /* Float: -1f */, 0);
				if (ANIMSCENE::_0x1F0E401031E20146(iLocal_114[8], "pl_leadin"))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_114[8]) > 1.4f)
					{
						PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
						PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "OBT1_DIS");
						__LIB_0__::func_172(iLocal_190);
						return true;
					}
				}
				else
				{
					func_462(iLocal_114[8], "pl_leadin");
					if (__LIB_13__::func_180(iLocal_114[8], "pl_leadin"))
					{
						if (__LIB_13__::func_181(iLocal_114[8], "pl_leadin"))
						{
						}
					}
				}
			}
		}
	}
	else
	{
		if (PED::GET_PED_CONFIG_FLAG(uLocal_14[0], 301, true) == 0)
		{
			PED::SET_PED_CONFIG_FLAG(uLocal_14[0], 301, true);
		}
		if (PED::GET_PED_CONFIG_FLAG(uLocal_14[1], 301, true) == 0)
		{
			PED::SET_PED_CONFIG_FLAG(uLocal_14[1], 301, true);
		}
	}
	return false;
}

bool func_298(int iParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_114[iParam0]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_114[iParam0], true, false))
		{
			return true;
		}
	}
	else
	{
		if (iParam0 == 0)
		{
			iLocal_114[0] = ANIMSCENE::_CREATE_ANIM_SCENE(func_597(0), 0, "PBL_BASE", false, true);
		}
		else if (iParam0 == 1)
		{
			iLocal_114[1] = ANIMSCENE::_CREATE_ANIM_SCENE(func_597(1), 0, "PBL_BASE", false, true);
		}
		else if (iParam0 == 2)
		{
			iLocal_114[2] = ANIMSCENE::_CREATE_ANIM_SCENE(func_597(2), 0, "PBL_BASE", false, true);
		}
		else if (iParam0 == 3)
		{
			iLocal_114[3] = ANIMSCENE::_CREATE_ANIM_SCENE(func_597(3), 0, "PBL_BASE", false, true);
		}
		else if (iParam0 == 4)
		{
			iLocal_114[4] = ANIMSCENE::_CREATE_ANIM_SCENE(func_597(4), 0, "PBL_BASE", false, true);
		}
		else if (iParam0 == 5)
		{
			iLocal_114[5] = ANIMSCENE::_CREATE_ANIM_SCENE(func_597(5), 0, "pbl_Groupie_Fail", false, true);
		}
		else if (iParam0 == 6)
		{
			iLocal_114[6] = ANIMSCENE::_CREATE_ANIM_SCENE(func_597(6), 0, "pbl_T1_Fail", false, true);
		}
		else if (iParam0 == 7)
		{
			iLocal_114[7] = ANIMSCENE::_CREATE_ANIM_SCENE(func_597(7), 0, "pbl_T2_Fail", false, true);
		}
		else if (iParam0 == 8)
		{
			iLocal_114[8] = ANIMSCENE::_CREATE_ANIM_SCENE(func_597(8), 0, "pl_idles_from_distance", false, true);
		}
		else if (iParam0 == 9)
		{
			iLocal_114[9] = ANIMSCENE::_CREATE_ANIM_SCENE(func_597(9), 0, "pbl_Dialogue", false, true);
		}
		else
		{
			iLocal_114[iParam0] = ANIMSCENE::_CREATE_ANIM_SCENE(func_597(iParam0), 0, 0, false, true);
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_114[iParam0]))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_114[iParam0]);
		}
	}
	return false;
}

bool func_300(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53[iParam1]))
	{
		iLocal_53[iParam1] = OBJECT::CREATE_OBJECT(iParam0, vLocal_60[iParam1 /*3*/], true, true, false, false, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[iParam1]))
	{
		OBJECT::_0xE157A8A336C7F04A(iLocal_53[iParam1], 1);
		return true;
	}
	return false;
}

void func_301(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[iParam0]) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_53[iParam0]))
	{
		ENTITY::SET_ENTITY_ROTATION(iLocal_53[iParam0], vLocal_79[iParam0 /*3*/], 2, true);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_53[iParam0], true);
		OBJECT::SET_OBJECT_TARGETTABLE(iLocal_53[iParam0], false);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_53[iParam0], false, 0f);
		ENTITY::_SET_ENTITY_HEALTH(iLocal_53[iParam0], 1, 0);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_53[iParam0], false);
		if (iParam0 == 0)
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_53[iParam0], uLocal_14[0], PED::GET_PED_BONE_INDEX(uLocal_14[0], 21030), 0.1f, 0f, 0f, 180f, 90f, 0f, true, true, false, true, 2, true, true, false);
			iLocal_98[iParam0] = __LIB_8__::func_778(408396114, iLocal_53[iParam0], 1);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_98[iParam0], "OBT1_BLIP_BOTTLE");
		}
		if (iParam0 == 1)
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_53[iParam0], uLocal_14[1], PED::GET_PED_BONE_INDEX(uLocal_14[1], 21030), 0.1f, 0f, 0f, 180f, 90f, 0f, true, true, false, true, 2, true, true, false);
			iLocal_98[iParam0] = __LIB_8__::func_778(408396114, iLocal_53[iParam0], 1);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_98[iParam0], "OBT1_BLIP_BOTTLE");
		}
		if (iParam0 == 2)
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_53[iParam0], uLocal_14[0], PED::GET_PED_BONE_INDEX(uLocal_14[0], 21030), 0.15f, 0f, 0f, 180f, 90f, 0f, true, true, false, true, 2, true, true, false);
			iLocal_98[iParam0] = __LIB_8__::func_778(408396114, iLocal_53[iParam0], 1);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_98[iParam0], "OBT1_BLIP_BOTTLE");
		}
		if (iParam0 == 3)
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_53[iParam0], uLocal_14[1], PED::GET_PED_BONE_INDEX(uLocal_14[1], 21030), 0.15f, 0f, 0f, 180f, 90f, 0f, true, true, false, true, 2, true, true, false);
			iLocal_98[iParam0] = __LIB_8__::func_778(408396114, iLocal_53[iParam0], 1);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_98[iParam0], "OBT1_BLIP_BOTTLE");
		}
		if (iParam0 == 4)
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_53[iParam0], uLocal_14[0], PED::GET_PED_BONE_INDEX(uLocal_14[0], 21030), 0.15f, 0f, 0f, 180f, 90f, 0f, true, true, false, true, 2, true, true, false);
			iLocal_98[iParam0] = __LIB_8__::func_778(408396114, iLocal_53[iParam0], 1);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_98[iParam0], "OBT1_BLIP_BOTTLE");
		}
		if (iParam0 == 5)
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_53[iParam0], uLocal_14[1], PED::GET_PED_BONE_INDEX(uLocal_14[1], 21030), 0.15f, 0f, 0f, 180f, 90f, 0f, true, true, false, true, 2, true, true, false);
			iLocal_98[iParam0] = __LIB_8__::func_778(408396114, iLocal_53[iParam0], 1);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_98[iParam0], "OBT1_BLIP_BOTTLE");
		}
	}
}

bool func_303(bool bParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_114[0]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_114[0], true, false))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[0], false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_114[0], "cs_twinbrother_01", uLocal_14[0], 0);
				if (!bParam0)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_114[0], "p_bottlebeer01x", iLocal_53[0], 0);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_114[0], "p_bottlebeer01x", iLocal_53[2], 0);
				}
				ANIMSCENE::START_ANIM_SCENE(iLocal_114[0]);
				return true;
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

bool func_304(bool bParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_114[1]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_114[1], true, false))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[1], false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_114[1], "cs_twinbrother_02", uLocal_14[1], 0);
				if (!bParam0)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_114[1], "p_bottlebeer01x", iLocal_53[1], 0);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_114[1], "p_bottlebeer01x", iLocal_53[3], 0);
				}
				ANIMSCENE::START_ANIM_SCENE(iLocal_114[1]);
				return true;
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

bool func_305()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_114[4]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_114[4], true, false))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[4], false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_114[4], "cs_twingroupie_01", uLocal_14[2], 0);
				ANIMSCENE::START_ANIM_SCENE(iLocal_114[4]);
				return true;
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

void func_307()
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	__LIB_0__::func_267(0);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	iLocal_232 = __LIB_0__::func_399(Global_35, 1, 0, 0);
	if (iLocal_232 != 0)
	{
	}
	if (iLocal_232 == joaat("WEAPON_UNARMED"))
	{
		iLocal_232 = __LIB_0__::func_399(Global_35, 1, 2, 0);
	}
	PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), iLocal_232, 0);
	WEAPON::_0x183CE355115B6E75(Global_35, iLocal_232);
	func_607();
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, true);
		PED::SET_PED_CONFIG_FLAG(Global_35, 249, true);
		PED::SET_PED_CONFIG_FLAG(Global_35, 217, true);
		PED::SET_PED_CONFIG_FLAG(Global_35, 6, true);
		iLocal_231 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iLocal_232);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iLocal_232, true, 0, false, false);
		WEAPON::SET_PED_INFINITE_AMMO(Global_35, true, iLocal_232);
	}
	HUD::_HIDE_HUD_COMPONENT(1058184710);
}

void func_308(int iParam0)
{
	if (iLocal_198 == iParam0)
	{
		return;
	}
	iLocal_198 = iParam0;
	switch (iLocal_198)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 5:
			break;
	}
}

bool func_310()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_114[9]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_114[9], true, false))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[9], false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_114[9], "CS_TWINBROTHER_01", uLocal_14[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_114[9], "CS_TWINBROTHER_02", uLocal_14[1], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_114[9], "p_bottlebeer01x", iLocal_53[4], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_114[9], "p_bottlebeer01x^1", iLocal_53[5], 0);
				ANIMSCENE::START_ANIM_SCENE(iLocal_114[9]);
			}
			return true;
		}
	}
	return false;
}

void func_311()
{
	__LIB_0__::func_267(1);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 249, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 217, false);
	if (!__LIB_6__::func_666(13))
	{
		PLAYER::_0x28A13BF6B05C3D83(PLAYER::PLAYER_ID(), false);
	}
	__LIB_11__::func_435();
	if (iLocal_232 != 0)
	{
		WEAPON::SET_PED_INFINITE_AMMO(Global_35, false, iLocal_232);
		if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iLocal_232) > 0)
		{
			WEAPON::_REMOVE_AMMO_FROM_PED(Global_35, iLocal_232, WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iLocal_232), 562618531);
		}
		WEAPON::SET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iLocal_232), iLocal_231);
	}
	HUD::_DISPLAY_HUD_COMPONENT(1058184710);
}

bool func_318(var uParam0)
{
	if (iLocal_197 == 0)
	{
		func_589(&(uLocal_14[0]), &(Local_251[0 /*61*/]), &Local_233, 10f, -1082130432 /* Float: -1f */, 0);
		func_589(&(uLocal_14[1]), &(Local_331[0 /*61*/]), &Local_313, 10f, -1082130432 /* Float: -1f */, 0);
	}
	return true;
}

int func_324(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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
					__LIB_13__::func_192(uParam4, &uParam0, uParam5);
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
				if (__LIB_13__::func_191(uParam4, &uParam0, 1, 1))
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
					__LIB_13__::func_192(uParam4, &uParam0, uParam5);
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
			func_634(uParam4);
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

void func_328()
{
	__LIB_1__::func_480(&(uLocal_14[0]));
	__LIB_1__::func_480(&(uLocal_14[1]));
}

void func_332(var uParam0)
{
	func_683(1);
	func_684(uParam0);
	if (bLocal_159)
	{
		if (!bLocal_160)
		{
			__LIB_0__::func_565("OBT1_O_SHOOT", 7500, 0, 0, 0, 1);
			bLocal_160 = true;
		}
	}
	if (!__LIB_0__::func_75(&uLocal_227))
	{
		__LIB_1__::func_148(&uLocal_227);
	}
	if (func_686(uParam0))
	{
		if (iLocal_113 != 1)
		{
			iLocal_113 = 1;
		}
		func_308(1);
	}
}

void func_333(var uParam0)
{
	func_683(1);
	_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_14[0], &Local_394);
	_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_14[1], &Local_394);
	if ((!__LIB_0__::func_272(uLocal_14[0], 0) || !__LIB_0__::func_272(uLocal_14[1], 0)) || !__LIB_0__::func_272(uLocal_14[2], 0))
	{
		return;
	}
	if (__LIB_0__::func_153(Global_35, 0, 1, 0) == joaat("WEAPON_UNARMED"))
	{
		func_307();
	}
	if ((__LIB_4__::func_68("OBT1_O_SHOOT", 1) && PED::IS_PED_SHOOTING(Global_35)) && __LIB_0__::func_264(&uLocal_227) > 3f)
	{
		__LIB_0__::func_37(&uLocal_227);
		__LIB_1__::func_390("OBT1_O_SHOOT", 1);
	}
	EVENT::REMOVE_ALL_SHOCKING_EVENTS(true);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53[0]) && !iLocal_131[0])
	{
		if (iLocal_131[1] && !iLocal_142[0])
		{
			iLocal_142[0] = 1;
		}
		func_690(0, uParam0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53[1]) && !iLocal_131[1])
	{
		if (iLocal_131[0] && !iLocal_142[1])
		{
			iLocal_142[1] = 1;
		}
		func_690(1, uParam0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53[0]) || !ENTITY::DOES_ENTITY_EXIST(iLocal_53[1]))
	{
		if (__LIB_0__::func_272(uLocal_14[3], 0) && !bLocal_151)
		{
			if (!__LIB_6__::func_904())
			{
				if (__LIB_12__::func_876(uParam0, "ROBT1_AMB_CM", 0))
				{
					__LIB_2__::func_788(&(uLocal_14[3]), 0, 0, 1);
					bLocal_151 = true;
				}
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53[0]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_53[1]))
	{
		iLocal_152[0] = 0;
		iLocal_152[1] = 0;
		iLocal_155[0] = 0;
		iLocal_155[1] = 0;
		if (iLocal_142[0])
		{
			func_692(6, uLocal_14[1], 1);
		}
		else if (iLocal_142[1])
		{
			func_692(6, uLocal_14[0], 1);
		}
		else
		{
			func_692(6, uLocal_14[1], 1);
		}
		func_292(uParam0, 1);
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[0], false) && ANIMSCENE::_0x1F0E401031E20146(iLocal_114[0], "pbl_End"))
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_114[0]) > 2.1f)
			{
				func_308(4);
			}
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[1], false) && ANIMSCENE::_0x1F0E401031E20146(iLocal_114[1], "pbl_End"))
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_114[1]) > 2.1f)
			{
				func_308(4);
			}
		}
	}
	else
	{
		func_693(uParam0);
		func_694();
		func_695(1);
		func_696(uParam0, 1);
		func_697(uParam0, 1);
	}
}

void func_334(var uParam0)
{
	func_683(1);
	_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_14[0], &Local_394);
	_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_14[1], &Local_394);
	if ((!__LIB_0__::func_272(uLocal_14[0], 0) || !__LIB_0__::func_272(uLocal_14[1], 0)) || !__LIB_0__::func_272(uLocal_14[2], 0))
	{
		return;
	}
	if (!bLocal_130)
	{
		func_684(uParam0);
		if (!__LIB_0__::func_75(&uLocal_227))
		{
			__LIB_1__::func_148(&uLocal_227);
		}
		bLocal_141 = false;
		bLocal_130 = true;
	}
	if ((__LIB_4__::func_68("OBT1_O_SHOOT", 1) && PED::IS_PED_SHOOTING(Global_35)) && __LIB_0__::func_264(&uLocal_227) > 3f)
	{
		__LIB_0__::func_37(&uLocal_227);
		__LIB_1__::func_390("OBT1_O_SHOOT", 1);
	}
	EVENT::REMOVE_ALL_SHOCKING_EVENTS(true);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53[2]) && !iLocal_131[2])
	{
		if (iLocal_131[3] && !iLocal_142[2])
		{
			iLocal_142[2] = 1;
		}
		func_690(2, uParam0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53[3]) && !iLocal_131[3])
	{
		if (iLocal_131[2] && !iLocal_142[3])
		{
			iLocal_142[3] = 1;
		}
		func_690(3, uParam0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53[2]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_53[3]))
	{
		iLocal_152[0] = 0;
		iLocal_152[1] = 0;
		iLocal_155[0] = 0;
		iLocal_155[1] = 0;
		if (iLocal_142[2])
		{
			func_692(6, uLocal_14[1], 2);
		}
		else if (iLocal_142[3])
		{
			func_692(6, uLocal_14[0], 2);
		}
		else
		{
			func_692(6, uLocal_14[1], 2);
		}
		func_292(uParam0, 2);
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[0], false) && ANIMSCENE::_0x1F0E401031E20146(iLocal_114[0], "pbl_End"))
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_114[0]) > 2.1f)
			{
				func_308(4);
			}
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[1], false) && ANIMSCENE::_0x1F0E401031E20146(iLocal_114[1], "pbl_End"))
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_114[1]) > 2.1f)
			{
				func_308(4);
			}
		}
	}
	else
	{
		func_695(2);
		func_694();
		func_693(uParam0);
		func_696(uParam0, 2);
		func_697(uParam0, 2);
	}
}

void func_335(var uParam0)
{
	func_683(1);
	_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_14[0], &Local_394);
	_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_14[1], &Local_394);
	if ((!__LIB_0__::func_272(uLocal_14[0], 0) || !__LIB_0__::func_272(uLocal_14[1], 0)) || !__LIB_0__::func_272(uLocal_14[2], 0))
	{
		return;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_114[9]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[9], false))
	{
		func_698();
	}
	func_699();
	if (!bLocal_130)
	{
		func_684(uParam0);
		__LIB_0__::func_105(1);
		__LIB_0__::func_45("OBT1_HELP", 10000, 0, 0, 1, 1);
		if (!__LIB_0__::func_75(&uLocal_227))
		{
			__LIB_1__::func_148(&uLocal_227);
		}
		bLocal_141 = false;
		bLocal_130 = true;
	}
	if ((__LIB_4__::func_68("OBT1_O_SHOOT", 1) && PED::IS_PED_SHOOTING(Global_35)) && __LIB_0__::func_264(&uLocal_227) > 3f)
	{
		__LIB_0__::func_37(&uLocal_227);
		__LIB_1__::func_390("OBT1_O_SHOOT", 1);
	}
	EVENT::REMOVE_ALL_SHOCKING_EVENTS(true);
	if (func_701(4) || (!ENTITY::DOES_ENTITY_EXIST(iLocal_53[4]) && !iLocal_131[4]))
	{
		if (!iLocal_131[5] && !iLocal_142[4])
		{
			iLocal_142[4] = 1;
		}
		func_690(4, uParam0);
	}
	if (func_701(5) || (!ENTITY::DOES_ENTITY_EXIST(iLocal_53[5]) && !iLocal_131[5]))
	{
		if (!iLocal_131[4] && !iLocal_142[5])
		{
			iLocal_142[5] = 1;
		}
		func_690(5, uParam0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53[4]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_53[5]))
	{
		if (iLocal_142[4])
		{
			func_692(6, uLocal_14[1], 3);
		}
		else if (iLocal_142[5])
		{
			func_692(6, uLocal_14[0], 3);
		}
		else
		{
			func_692(6, uLocal_14[1], 3);
		}
		func_292(uParam0, 3);
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[2], false) && ANIMSCENE::_0x1F0E401031E20146(iLocal_114[2], "pbl_End"))
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_114[2]) > 2f)
			{
				func_308(4);
			}
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[3], false) && ANIMSCENE::_0x1F0E401031E20146(iLocal_114[3], "pbl_End"))
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_114[3]) > 2f)
			{
				func_308(4);
			}
		}
	}
	else
	{
		func_695(3);
		func_694();
		func_693(uParam0);
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_114[9]))
		{
			func_696(uParam0, 3);
			func_697(uParam0, 3);
		}
	}
}

void func_370(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
						func_737(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_737(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_737(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_737(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_737(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_737(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_737(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_737(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_737(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_737(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_737(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_737(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_737(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_737(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_737(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_737(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_737(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_737(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_737(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_737(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_737(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_737(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_737(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_737(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_737(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_739();
						func_740(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_737(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_370(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_370(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_370(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_737(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_737(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_775();
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
							func_737(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

void func_398(int iParam0)
{
	char* sVar0;
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[8], false))
	{
		return;
	}
	if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[8], "s_Base", 1))
	{
		if (!__LIB_0__::func_75(&uLocal_181))
		{
			__LIB_1__::func_148(&uLocal_181);
			if (!bLocal_187)
			{
				bLocal_187 = true;
			}
		}
	}
	iLocal_112 = iParam0;
	switch (iLocal_112)
	{
		case 1:
			if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[8], "pl_action"))
			{
				func_462(iLocal_114[8], "pl_action");
				if (__LIB_13__::func_180(iLocal_114[8], "pl_action"))
				{
					if (__LIB_13__::func_181(iLocal_114[8], "pl_action"))
					{
						bLocal_161 = true;
					}
				}
			}
			break;
		case 0:
			if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[8], "pl_idles_from_distance"))
			{
				func_462(iLocal_114[8], "pl_idles_from_distance");
				if (__LIB_13__::func_180(iLocal_114[8], "pl_idles_from_distance"))
				{
					if (__LIB_13__::func_181(iLocal_114[8], "pl_idles_from_distance"))
					{
					}
				}
			}
			break;
		case 2:
			if (iLocal_19 == 0)
			{
				sVar0 = "pl_callover_01_f";
			}
			else if (iLocal_19 == 1)
			{
				sVar0 = "pl_callover_02_f";
			}
			else if (iLocal_19 == 2)
			{
				sVar0 = "pl_callover_03_f";
			}
			if (__LIB_0__::func_264(&uLocal_181) > IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(5, 8)) || !bLocal_187)
			{
				if (ANIMSCENE::_0x1F0E401031E20146(iLocal_114[8], "pl_action"))
				{
					if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[8], sVar0))
					{
						__LIB_13__::func_180(iLocal_114[8], sVar0);
						if (__LIB_13__::func_180(iLocal_114[8], sVar0) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_14[2], joaat("INTERRUPT")))
						{
							if (__LIB_13__::func_181(iLocal_114[8], sVar0))
							{
								__LIB_0__::func_37(&uLocal_181);
								iLocal_19++;
							}
						}
					}
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[8], "s_Base", 1) || ANIMSCENE::_0x1F0E401031E20146(iLocal_114[8], "pl_idles_from_distance"))
				{
					if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[8], sVar0))
					{
						__LIB_13__::func_180(iLocal_114[8], sVar0);
						if (__LIB_13__::func_180(iLocal_114[8], sVar0))
						{
							if (__LIB_13__::func_181(iLocal_114[8], sVar0))
							{
								__LIB_0__::func_37(&uLocal_181);
								iLocal_19++;
							}
						}
					}
				}
			}
			if (iLocal_19 > 1)
			{
				iLocal_19 = 0;
			}
			break;
		case 3:
			if (iLocal_21 == 0)
			{
				sVar0 = "pl_callover_01_l";
			}
			else if (iLocal_21 == 1)
			{
				sVar0 = "pl_callover_02_l";
			}
			else if (iLocal_21 == 2)
			{
				sVar0 = "pl_callover_03_l";
			}
			if (__LIB_0__::func_264(&uLocal_181) > IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(5, 8)) || !bLocal_187)
			{
				if (ANIMSCENE::_0x1F0E401031E20146(iLocal_114[8], "pl_action"))
				{
					if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[8], sVar0))
					{
						__LIB_13__::func_180(iLocal_114[8], sVar0);
						if (__LIB_13__::func_180(iLocal_114[8], sVar0) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_14[2], joaat("INTERRUPT")))
						{
							if (__LIB_13__::func_181(iLocal_114[8], sVar0))
							{
								__LIB_0__::func_37(&uLocal_181);
								iLocal_21++;
							}
						}
					}
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[8], "s_Base", 1) || ANIMSCENE::_0x1F0E401031E20146(iLocal_114[8], "pl_idles_from_distance"))
				{
					if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[8], sVar0))
					{
						__LIB_13__::func_180(iLocal_114[8], sVar0);
						if (__LIB_13__::func_180(iLocal_114[8], sVar0))
						{
							if (__LIB_13__::func_181(iLocal_114[8], sVar0))
							{
								__LIB_0__::func_37(&uLocal_181);
								iLocal_21++;
							}
						}
					}
				}
			}
			if (iLocal_21 > 1)
			{
				iLocal_21 = 0;
			}
			break;
		case 4:
			if (iLocal_20 == 0)
			{
				sVar0 = "pl_callover_01_r";
			}
			else if (iLocal_20 == 1)
			{
				sVar0 = "pl_callover_02_r";
			}
			else if (iLocal_20 == 2)
			{
				sVar0 = "pl_callover_03_r";
			}
			if (__LIB_0__::func_264(&uLocal_181) > IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(5, 8)) || !bLocal_187)
			{
				if (ANIMSCENE::_0x1F0E401031E20146(iLocal_114[8], "pl_action"))
				{
					if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[8], sVar0))
					{
						__LIB_13__::func_180(iLocal_114[8], sVar0);
						if (__LIB_13__::func_180(iLocal_114[8], sVar0) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_14[2], joaat("INTERRUPT")))
						{
							if (__LIB_13__::func_181(iLocal_114[8], sVar0))
							{
								__LIB_0__::func_37(&uLocal_181);
								iLocal_20++;
							}
						}
					}
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[8], "s_Base", 1) || ANIMSCENE::_0x1F0E401031E20146(iLocal_114[8], "pl_idles_from_distance"))
				{
					if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[8], sVar0))
					{
						__LIB_13__::func_180(iLocal_114[8], sVar0);
						if (__LIB_13__::func_180(iLocal_114[8], sVar0))
						{
							if (__LIB_13__::func_181(iLocal_114[8], sVar0))
							{
								__LIB_0__::func_37(&uLocal_181);
								iLocal_20++;
							}
						}
					}
				}
			}
			if (iLocal_20 > 2)
			{
				iLocal_20 = 0;
			}
			break;
		case 5:
			sVar0 = "pl_quick_callover_f";
			if (__LIB_0__::func_264(&uLocal_181) > IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(5, 8)) || !bLocal_187)
			{
				if (ANIMSCENE::_0x1F0E401031E20146(iLocal_114[8], "pl_action"))
				{
					if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[8], sVar0))
					{
						__LIB_13__::func_180(iLocal_114[8], sVar0);
						if (__LIB_13__::func_180(iLocal_114[8], sVar0) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_14[2], joaat("INTERRUPT")))
						{
							if (__LIB_13__::func_181(iLocal_114[8], sVar0))
							{
								__LIB_0__::func_37(&uLocal_181);
							}
						}
					}
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[8], "s_Base", 1) || ANIMSCENE::_0x1F0E401031E20146(iLocal_114[8], "pl_idles_from_distance"))
				{
					if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[8], sVar0))
					{
						__LIB_13__::func_180(iLocal_114[8], sVar0);
						if (__LIB_13__::func_180(iLocal_114[8], sVar0))
						{
							if (__LIB_13__::func_181(iLocal_114[8], sVar0))
							{
								__LIB_0__::func_37(&uLocal_181);
							}
						}
					}
				}
			}
			break;
		case 6:
			sVar0 = "pl_quick_callover_l";
			if (__LIB_0__::func_264(&uLocal_181) > IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(5, 8)) || !bLocal_187)
			{
				if (ANIMSCENE::_0x1F0E401031E20146(iLocal_114[8], "pl_action"))
				{
					if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[8], sVar0))
					{
						__LIB_13__::func_180(iLocal_114[8], sVar0);
						if (__LIB_13__::func_180(iLocal_114[8], sVar0) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_14[2], joaat("INTERRUPT")))
						{
							if (__LIB_13__::func_181(iLocal_114[8], sVar0))
							{
								__LIB_0__::func_37(&uLocal_181);
								iLocal_21++;
							}
						}
					}
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[8], "s_Base", 1) || ANIMSCENE::_0x1F0E401031E20146(iLocal_114[8], "pl_idles_from_distance"))
				{
					if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[8], sVar0))
					{
						__LIB_13__::func_180(iLocal_114[8], sVar0);
						if (__LIB_13__::func_180(iLocal_114[8], sVar0))
						{
							if (__LIB_13__::func_181(iLocal_114[8], sVar0))
							{
								__LIB_0__::func_37(&uLocal_181);
								iLocal_21++;
							}
						}
					}
				}
			}
			break;
		case 7:
			sVar0 = "pl_quick_callover_r";
			if (__LIB_0__::func_264(&uLocal_181) > IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(5, 8)) || !bLocal_187)
			{
				if (ANIMSCENE::_0x1F0E401031E20146(iLocal_114[8], "pl_action"))
				{
					if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[8], sVar0))
					{
						__LIB_13__::func_180(iLocal_114[8], sVar0);
						if (__LIB_13__::func_180(iLocal_114[8], sVar0) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_14[2], joaat("INTERRUPT")))
						{
							if (__LIB_13__::func_181(iLocal_114[8], sVar0))
							{
								__LIB_0__::func_37(&uLocal_181);
								iLocal_20++;
							}
						}
					}
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[8], "s_Base", 1) || ANIMSCENE::_0x1F0E401031E20146(iLocal_114[8], "pl_idles_from_distance"))
				{
					if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[8], sVar0))
					{
						__LIB_13__::func_180(iLocal_114[8], sVar0);
						if (__LIB_13__::func_180(iLocal_114[8], sVar0))
						{
							if (__LIB_13__::func_181(iLocal_114[8], sVar0))
							{
								__LIB_0__::func_37(&uLocal_181);
								iLocal_20++;
							}
						}
					}
				}
			}
			break;
		case 8:
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[8], "s_Base", 1) || ANIMSCENE::_0x1F0E401031E20146(iLocal_114[8], "pl_action"))
			{
				if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[8], "pl_leadin"))
				{
					func_462(iLocal_114[8], "pl_leadin");
					if (__LIB_13__::func_180(iLocal_114[8], "pl_leadin"))
					{
						if (__LIB_13__::func_181(iLocal_114[8], "pl_leadin"))
						{
						}
					}
				}
			}
			break;
		case 9:
			if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[8], "pl_react"))
			{
				func_462(iLocal_114[8], "pl_react");
				if (__LIB_13__::func_180(iLocal_114[8], "pl_react"))
				{
					if (__LIB_13__::func_181(iLocal_114[8], "pl_react"))
					{
					}
				}
			}
			break;
		case 10:
			break;
	}
}

void func_399()
{
	if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_114[8], "cs_twingroupie_01"))
	{
		if (!PED::IS_PED_FLEEING(uLocal_14[2]))
		{
			PED::FORCE_PED_MOTION_STATE(uLocal_14[2], joaat("MOTIONSTATE_SPRINT"), false, 0, false);
			PED::_0x2208438012482A1A(uLocal_14[2], false, false);
			TASK::TASK_SMART_FLEE_PED(uLocal_14[2], Global_35, 100f, -1, 256, 3f, 0);
			PED::SET_PED_KEEP_TASK(uLocal_14[2], true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_14[2], false);
		}
	}
	if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_114[8], "cs_twinbrother_01"))
	{
		if (!PED::IS_PED_FLEEING(uLocal_14[0]))
		{
			PED::FORCE_PED_MOTION_STATE(uLocal_14[0], 1619979220, false, 0, false);
			PED::_0x2208438012482A1A(uLocal_14[0], false, false);
			TASK::TASK_SMART_FLEE_PED(uLocal_14[0], Global_35, 100f, -1, 256, 3f, 0);
			PED::SET_PED_KEEP_TASK(uLocal_14[0], true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_14[0], false);
		}
	}
	if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_114[8], "cs_twinbrother_02"))
	{
		if (!PED::IS_PED_FLEEING(uLocal_14[1]))
		{
			PED::FORCE_PED_MOTION_STATE(uLocal_14[1], 1619979220, false, 0, false);
			PED::_0x2208438012482A1A(uLocal_14[1], false, false);
			TASK::TASK_SMART_FLEE_PED(uLocal_14[1], Global_35, 100f, -1, 256, 3f, 0);
			PED::SET_PED_KEEP_TASK(uLocal_14[1], true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_14[1], false);
		}
	}
}

void func_402(var uParam0)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 8))
	{
		return;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
	func_311();
	PED::SET_PED_CONFIG_FLAG(Global_35, 6, false);
	PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(36));
	PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(43));
	PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(44));
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "OBT1_DIS");
}

void func_404(var uParam0, int* iParam1, char* sParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		*iParam1 = ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_348, sParam2, true);
		if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			if (ANIMSCENE::_0x9D1ECA9337BE9FC3(uParam0->f_348, sParam2))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_348, sParam2, *iParam1);
			}
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam1, true))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam1, true, true);
			}
			__LIB_1__::func_951(iParam1);
		}
	}
}

int func_456(int iParam0, int iParam1)
{
	var uVar0;
	return func_867(&uVar0, iParam0, iParam1);
}

void func_462(int iParam0, char* sParam1)
{
	if ((ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0, false) && !ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1)) && !ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0, sParam1))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sParam1);
	}
}

bool func_547(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	vVar0 = { -323.07f, 795.1f, 117.89f };
	fVar3 = 115.13f;
	if (__LIB_14__::func_75(uParam0, &(uLocal_14[0]), iLocal_191, vVar0, fVar3, 1))
	{
		__LIB_13__::func_260(uParam0, uLocal_14[0]);
		func_952(uParam0, uLocal_14[0], 0);
		PED::SET_PED_CONFIG_FLAG(uLocal_14[0], 217, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_14[0], 6, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_14[0], 138, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_14[0], 370, true);
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_14[0], false);
		__LIB_1__::func_991(uLocal_14[0], 0);
		__LIB_4__::func_7(uLocal_14[0], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		WEAPON::SET_CURRENT_PED_WEAPON(uLocal_14[0], joaat("WEAPON_REVOLVER_CATTLEMAN"), true, 2, false, false);
		__LIB_12__::func_875(uParam0, uLocal_14[0], "ROBT_Twin2", 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_191);
		if (PED::_0xA0BC8FAED8CFEB3C(uLocal_14[0]))
		{
			__LIB_5__::func_509(uLocal_14[0], 0, 1);
		}
		return true;
	}
	return false;
}

bool func_548(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	vVar0 = { -324.62f, 794.67f, 117.89f };
	fVar3 = -91.03f;
	if (__LIB_14__::func_75(uParam0, &(uLocal_14[1]), iLocal_192, vVar0, fVar3, 1))
	{
		__LIB_13__::func_260(uParam0, uLocal_14[1]);
		func_952(uParam0, uLocal_14[1], 0);
		PED::SET_PED_CONFIG_FLAG(uLocal_14[1], 217, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_14[1], 6, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_14[1], 138, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_14[1], 370, true);
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_14[1], false);
		__LIB_1__::func_991(uLocal_14[1], 0);
		__LIB_12__::func_875(uParam0, uLocal_14[1], "ROBT_Twin1", 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_192);
		__LIB_4__::func_7(uLocal_14[1], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		WEAPON::SET_CURRENT_PED_WEAPON(uLocal_14[1], joaat("WEAPON_REVOLVER_CATTLEMAN"), true, 2, false, false);
		if (PED::_0xA0BC8FAED8CFEB3C(uLocal_14[1]))
		{
			__LIB_5__::func_509(uLocal_14[1], 0, 1);
		}
		return true;
	}
	return false;
}

bool func_549(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	vVar0 = { -323.97f, 795.2f, 117.89f };
	fVar3 = -178.08f;
	if (__LIB_14__::func_75(uParam0, &(uLocal_14[2]), iLocal_193, vVar0, fVar3, 1))
	{
		if (__LIB_0__::func_272(uLocal_14[2], 0))
		{
			__LIB_13__::func_260(uParam0, uLocal_14[2]);
			func_952(uParam0, uLocal_14[2], 0);
			PED::SET_PED_CONFIG_FLAG(uLocal_14[2], 217, true);
			PED::SET_PED_CONFIG_FLAG(uLocal_14[2], 6, true);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uLocal_14[2], true);
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_14[2], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_14[2], joaat("REL_PLAYER_ALLY"));
			PED::SET_PED_CONFIG_FLAG(uLocal_14[2], 315, true);
			__LIB_1__::func_991(uLocal_14[2], 0);
			__LIB_12__::func_875(uParam0, uLocal_14[2], "ROBT_GROUPIE_0", 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_193);
			return true;
		}
	}
	return false;
}

bool func_550()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_114[8]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_114[8], true, false))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[8], false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_114[8], "cs_twinbrother_01", uLocal_14[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_114[8], "cs_twinbrother_02", uLocal_14[1], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_114[8], "cs_twingroupie_01", uLocal_14[2], 0);
				if (!__LIB_0__::func_181())
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_114[8], "ARTHUR", Global_35, 0);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_114[8], "b_PlayerArthur", true, false);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_114[8], "JOHN", Global_35, 0);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_114[8], "b_PlayerArthur", false, false);
				}
				ANIMSCENE::START_ANIM_SCENE(iLocal_114[8]);
			}
			return true;
		}
	}
	return false;
}

void func_578(var uParam0)
{
	switch (iLocal_197)
	{
		case 0:
			__LIB_1__::func_572(vLocal_22, 100f, 0, 0, 1, 1, 0);
			__LIB_6__::func_815(&(Local_251[0 /*61*/]), uLocal_14[0]);
			__LIB_6__::func_815(&(Local_251[0 /*61*/]), uLocal_14[1]);
			iLocal_230 = -290089884;
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_114[8]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_114[8]);
			}
			if (iLocal_230 != 0)
			{
				__LIB_1__::func_948(iLocal_230, 1, 0, 0, 0, 0, 0, 0);
			}
			break;
		case 1:
			if (bLocal_130)
			{
				bLocal_130 = false;
			}
			break;
		case 2:
			if (bLocal_130)
			{
				bLocal_130 = false;
			}
			break;
		case 3:
			break;
	}
}

void func_580(var uParam0)
{
	switch (iLocal_197)
	{
		case 0:
			if (__LIB_8__::func_783(36))
			{
			}
			if (__LIB_8__::func_783(43))
			{
			}
			if (__LIB_8__::func_783(44))
			{
			}
			func_298(0);
			func_298(1);
			func_298(4);
			func_298(5);
			func_298(6);
			func_298(7);
			if (func_985(uParam0, uLocal_14[0], "cs_twinbrother_01", 0, 1, 1))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_114[0], true, false))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_114[0], "cs_twinbrother_01", uLocal_14[0], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_114[0], "p_bottlebeer01x", iLocal_53[0], 0);
					ANIMSCENE::START_ANIM_SCENE(iLocal_114[0]);
				}
			}
			if (func_985(uParam0, uLocal_14[1], "cs_twinbrother_02", 0, 1, 1))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_114[1], true, false))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_114[1], "cs_twinbrother_02", uLocal_14[1], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_114[1], "p_bottlebeer01x", iLocal_53[1], 0);
					ANIMSCENE::START_ANIM_SCENE(iLocal_114[1]);
				}
			}
			if (func_985(uParam0, uLocal_14[2], "cs_twingroupie_01", 0, 1, 1))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_114[4], true, false))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_114[4], "cs_twingroupie_01", uLocal_14[2], 0);
					ANIMSCENE::START_ANIM_SCENE(iLocal_114[4]);
				}
			}
			break;
		case 1:
			if (__LIB_8__::func_783(36))
			{
			}
			if (__LIB_8__::func_783(43))
			{
			}
			if (__LIB_8__::func_783(44))
			{
			}
			func_300(iLocal_196, 2);
			func_300(iLocal_196, 3);
			func_298(4);
			func_298(5);
			func_298(6);
			func_298(7);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[2]) && ENTITY::DOES_ENTITY_EXIST(iLocal_53[3]))
			{
				func_301(2);
				func_301(3);
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_114[0]))
				{
					func_298(0);
				}
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_114[1]))
				{
					func_298(1);
				}
			}
			if (func_985(uParam0, uLocal_14[0], "cs_twinbrother_01", 0, 1, 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[2]))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_53[2], true);
					if (func_303(1))
					{
						PED::FORCE_PED_MOTION_STATE(uLocal_14[0], joaat("MOTIONSTATE_WALK"), false, 0, false);
						PED::_0x2208438012482A1A(uLocal_14[0], false, false);
					}
				}
			}
			if (func_985(uParam0, uLocal_14[1], "cs_twinbrother_02", 0, 1, 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[3]))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_53[3], true);
					if (func_304(1))
					{
						PED::FORCE_PED_MOTION_STATE(uLocal_14[1], joaat("MOTIONSTATE_WALK"), false, 0, false);
						PED::_0x2208438012482A1A(uLocal_14[1], false, false);
					}
				}
			}
			if (func_985(uParam0, uLocal_14[2], "cs_twingroupie_01", 0, 1, 1))
			{
				if (func_305())
				{
					PED::FORCE_PED_MOTION_STATE(uLocal_14[2], joaat("MOTIONSTATE_WALK"), false, 0, false);
					PED::_0x2208438012482A1A(uLocal_14[2], false, false);
				}
			}
			break;
		case 2:
			if (__LIB_8__::func_783(36))
			{
			}
			if (__LIB_8__::func_783(43))
			{
			}
			if (__LIB_8__::func_783(44))
			{
			}
			if (func_300(iLocal_196, 4))
			{
				func_301(4);
			}
			if (func_300(iLocal_196, 5))
			{
				func_301(5);
			}
			func_298(2);
			func_298(3);
			func_298(9);
			func_298(4);
			func_298(5);
			func_298(6);
			func_298(7);
			if (func_985(uParam0, uLocal_14[0], "cs_twinbrother_01", 0, 1, 1) && func_985(uParam0, uLocal_14[1], "cs_twinbrother_02", 0, 1, 1))
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_53[4]) && ENTITY::DOES_ENTITY_EXIST(iLocal_53[5])) && func_310())
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_53[4], true);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_53[5], true);
				}
			}
			if (func_985(uParam0, uLocal_14[2], "cs_twingroupie_01", 0, 1, 1))
			{
				if (func_305())
				{
					PED::FORCE_PED_MOTION_STATE(uLocal_14[2], joaat("MOTIONSTATE_WALK"), false, 0, false);
					PED::_0x2208438012482A1A(uLocal_14[2], false, false);
				}
			}
			break;
		case 3:
			if (__LIB_8__::func_783(36))
			{
			}
			if (__LIB_8__::func_783(43))
			{
			}
			if (__LIB_8__::func_783(44))
			{
			}
			if (func_985(uParam0, uLocal_14[0], "cs_twinbrother_01", 0, 1, 1))
			{
				PED::FORCE_PED_MOTION_STATE(uLocal_14[0], joaat("MOTIONSTATE_WALK"), false, 0, false);
				PED::_0x2208438012482A1A(uLocal_14[0], false, false);
			}
			if (func_985(uParam0, uLocal_14[1], "cs_twinbrother_02", 0, 1, 1))
			{
				PED::FORCE_PED_MOTION_STATE(uLocal_14[1], joaat("MOTIONSTATE_WALK"), false, 0, false);
				PED::_0x2208438012482A1A(uLocal_14[1], false, false);
			}
			if (func_985(uParam0, uLocal_14[2], "cs_twingroupie_01", 0, 1, 1))
			{
				PED::FORCE_PED_MOTION_STATE(uLocal_14[2], joaat("MOTIONSTATE_WALK"), false, 0, false);
				PED::_0x2208438012482A1A(uLocal_14[2], false, false);
			}
			break;
	}
}

int func_582(var uParam0)
{
	switch (iLocal_197)
	{
		case 0:
			bLocal_159 = true;
			break;
	}
	return 1;
}

void func_585()
{
	if (!bLocal_158)
	{
		if (!__LIB_0__::func_1(Global_1347702[117 /*49*/].f_13, 2048))
		{
			return;
		}
		if (MAP::DOES_BLIP_EXIST(Global_1347702[117 /*49*/].f_37))
		{
			__LIB_6__::func_736(&(Local_251[0 /*61*/]), &Local_233, 0, Global_1347702[117 /*49*/].f_37, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			__LIB_6__::func_736(&(Local_331[0 /*61*/]), &Local_313, 0, Global_1347702[117 /*49*/].f_37, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			__LIB_2__::func_602(&(Local_233[0 /*17*/]), "INTERACT_GREET", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_2__::func_602(&(Local_313[0 /*17*/]), "INTERACT_GREET", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			bLocal_158 = true;
		}
	}
}

void func_586(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[8], false))
	{
		if (__LIB_0__::func_1(Global_1935630, 32768))
		{
			if (!bLocal_149)
			{
				__LIB_4__::func_712(iLocal_114[8], 10000, 0, -1, 0);
				ANIMSCENE::FADE_ANIM_SCENE_AUDIO_OUT(iLocal_114[8], 1000f);
				bLocal_149 = true;
			}
			return;
		}
		func_993();
		fVar3 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uLocal_14[2], true, false));
		if (fVar3 >= 900f)
		{
			return;
		}
		if (fVar3 >= 625f)
		{
			func_398(0);
		}
		else if (fVar3 <= 400f && !bLocal_161)
		{
			func_398(1);
		}
		if (fVar3 <= 144f)
		{
			vVar0 = { __LIB_2__::func_114(Global_35, 1f) };
			if (__LIB_0__::func_272(uLocal_14[2], 0))
			{
				iVar4 = __LIB_2__::func_431(uLocal_14[2], vVar0, 1060437492 /* Float: 0.707f */);
			}
			if (fVar3 <= 56.25f && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_189, true, 0))
			{
				if (iVar4 == 0)
				{
					func_398(5);
				}
				else if (iVar4 == 2)
				{
					func_398(7);
				}
				else if (iVar4 == 3)
				{
					func_398(6);
				}
			}
			else if (iVar4 == 0)
			{
				func_398(2);
			}
			else if (iVar4 == 2)
			{
				func_398(4);
			}
			else if (iVar4 == 3)
			{
				func_398(3);
			}
		}
	}
}

int func_588(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_589(uParam0, iParam1, uParam3, fParam2, fVar8, sParam7);
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
					if (__LIB_10__::func_545(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_588(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					__LIB_1__::func_480(uParam0);
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
					__LIB_4__::func_164(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					__LIB_6__::func_742(iParam1, uParam3);
					if (__LIB_13__::func_390(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_6__::func_834(*uParam0, iParam1, uParam3))
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
				if (__LIB_2__::func_402(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_4__::func_166(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_13__::func_390(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_4__::func_164(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					__LIB_6__::func_742(iParam1, uParam3);
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
							if (__LIB_3__::func_112(Global_35, *uParam0, 1f) == 3)
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
							if (__LIB_3__::func_112(Global_35, *uParam0, 1f) == 3)
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
					else if (!(MISC::IS_BIT_SET(*iParam1, 12) || __LIB_10__::func_245(iParam1, uParam0)))
					{
					}
					else if (!(MISC::IS_BIT_SET(*iParam1, 13) || __LIB_3__::func_109(iParam1)))
					{
					}
					else if (!__LIB_10__::func_482(iParam1))
					{
					}
					else
					{
						if (fParam4 > 0f)
						{
							__LIB_1__::func_148(&(iParam1->f_18));
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
				if (__LIB_3__::func_888(uParam0, iParam1, fParam4, bVar6))
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
					__LIB_4__::func_166(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_13__::func_390(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_4__::func_164(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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
				if (__LIB_3__::func_888(uParam0, iParam1, fParam4, bVar6))
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
			__LIB_6__::func_835(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_589(var uParam0, int* iParam1, var uParam2, float fParam3, float fParam4, char* sParam5)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	if (ENTITY::IS_ENTITY_DEAD(*uParam0) || !MISC::IS_BIT_SET(iParam1->f_21, 0))
	{
		return;
	}
	__LIB_3__::func_95(iParam1, *uParam0, iParam1->f_56, 0);
	fVar0 = __LIB_0__::func_514(fParam4 >= 0f, fParam4, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
	__LIB_3__::func_27(iParam1, fParam3);
	__LIB_6__::func_798(uParam0, iParam1, uParam2, fVar0);
	__LIB_6__::func_741(iParam1);
	if (MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		bVar1 = MISC::IS_STRING_NULL_OR_EMPTY(sParam5);
		__LIB_11__::func_843(iParam1, uParam2, uParam0, bVar1, sParam5, fVar0);
		if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			bVar2 = true;
			if (!MISC::IS_BIT_SET(*iParam1, 12))
			{
				bVar2 = __LIB_10__::func_245(iParam1, uParam0);
			}
			if (bVar2 && !MISC::IS_BIT_SET(*iParam1, 13))
			{
				__LIB_3__::func_109(iParam1);
			}
		}
	}
}

char* func_597(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@rcm@robt@s1@ig2_bottlebalance@ig2_bottlebalance_t01";
		case 1:
			return "script@rcm@robt@s1@ig2_bottlebalance@ig2_bottlebalance_t02";
		case 2:
			return "script@rcm@robt@s1@ig5_bottle_one_leg@ig2_bottleoneleg_t01";
		case 3:
			return "script@rcm@robt@s1@ig5_bottle_one_leg@ig2_bottleoneleg_t02";
		case 4:
			return "script@rcm@robt@s1@ig3_sweetheart@ig3_sweetheart";
		case 5:
			return "script@rcm@robt@s1@ig4_fail@ig4_groupie_fail";
		case 6:
			return "script@rcm@robt@s1@ig4_fail@ig4_t1_fail";
		case 7:
			return "script@rcm@robt@s1@ig4_fail@ig4_t2_fail";
		case 8:
			return "script@rcm@robt@s1@leadin@int@leadin";
		case 9:
			return "script@rcm@robt@s1@ig5_bottle_one_leg@ig2_bottleoneleg_dialogue";
	}
	return "";
}

void func_607()
{
	PLAYER::_0x28A13BF6B05C3D83(PLAYER::GET_PLAYER_INDEX(), true);
	__LIB_11__::func_435();
}

void func_634(var uParam0)
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
		func_1059(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1061(uParam0);
		func_1062(uParam0);
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

void func_683(bool bParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_WEAPON_MELEE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DETONATE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_NEXT_WEAPON"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_PREV_WEAPON"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SWITCH_SHOULDER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SNIPER_ZOOM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TWIRL_PISTOL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	if (!bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	}
}

void func_684(var uParam0)
{
	if (!__LIB_1__::func_588("OBT1_O_SHOOT", 0, 0, -1, -1, 0))
	{
		__LIB_13__::func_89(uParam0, "OBT1_O_SHOOT", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
	__LIB_0__::func_37(&uLocal_163);
}

bool func_686(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	vVar0 = { -318.359f, 803.0961f, 116.3794f };
	fVar3 = 24.2369f;
	if (__LIB_0__::func_272(uLocal_14[3], 0))
	{
		__LIB_12__::func_875(uParam0, uLocal_14[3], "ROBT_CIVILIAN1", 1);
		return true;
	}
	if (__LIB_14__::func_75(uParam0, &(uLocal_14[3]), iLocal_194, vVar0, fVar3, 1))
	{
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_14[3], false);
		__LIB_1__::func_991(uLocal_14[3], 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_14[3], true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_194);
		return true;
	}
	return false;
}

void func_690(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	if (iParam0 == 0)
	{
		if (iLocal_142[0])
		{
			iVar0 = 3;
		}
		else
		{
			iVar0 = 2;
		}
		iVar1 = 0;
	}
	else if (iParam0 == 1)
	{
		if (iLocal_142[1])
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 0;
		}
		iVar1 = 1;
	}
	else if (iParam0 == 2)
	{
		if (iLocal_142[2])
		{
			iVar0 = 7;
		}
		else
		{
			iVar0 = 6;
		}
		iVar1 = 0;
	}
	else if (iParam0 == 3)
	{
		if (iLocal_142[3])
		{
			iVar0 = 5;
		}
		else
		{
			iVar0 = 4;
		}
		iVar1 = 1;
	}
	else if (iParam0 == 4)
	{
		if (iLocal_142[4])
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 11;
		}
		iVar1 = 0;
	}
	else if (iParam0 == 5)
	{
		if (iLocal_142[5])
		{
			iVar0 = 8;
		}
		else
		{
			iVar0 = 9;
		}
		iVar1 = 1;
	}
	if (!Local_202[iVar0 /*2*/].f_1)
	{
		if (__LIB_14__::func_70(uParam1, Local_202[iVar0 /*2*/], &(uLocal_14[iVar1]), 1, 10f, 0, 0))
		{
			Local_202[iVar0 /*2*/].f_1 = 1;
		}
		if (iParam0 == 0)
		{
			iLocal_131[0] = 1;
		}
		else if (iParam0 == 1)
		{
			iLocal_131[1] = 1;
		}
		else if (iParam0 == 2)
		{
			iLocal_131[2] = 1;
		}
		else if (iParam0 == 3)
		{
			iLocal_131[3] = 1;
		}
		else if (iParam0 == 4)
		{
			iLocal_131[4] = 1;
		}
		else if (iParam0 == 5)
		{
			iLocal_131[5] = 1;
		}
	}
}

void func_692(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	if (iParam2 == 1 || iParam2 == 2)
	{
		if (iParam1 == uLocal_14[0])
		{
			iVar0 = iLocal_114[0];
		}
		else if (iParam1 == uLocal_14[1])
		{
			iVar0 = iLocal_114[1];
		}
	}
	else if (iParam2 == 3)
	{
		if (iParam1 == uLocal_14[0])
		{
			iVar0 = iLocal_114[2];
		}
		else if (iParam1 == uLocal_14[1])
		{
			iVar0 = iLocal_114[3];
		}
	}
	iLocal_110 = iParam0;
	switch (iLocal_110)
	{
		case 0:
			if (iLocal_125 == 0)
			{
				sVar1 = "pbl_Flinch_01";
			}
			else if (iLocal_125 == 1)
			{
				sVar1 = "pbl_Flinch_02";
			}
			else if (iLocal_125 == 2)
			{
				sVar1 = "pbl_Flinch_03";
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iVar0, false) && !ANIMSCENE::_0x1F0E401031E20146(iVar0, sVar1))
			{
				func_462(iVar0, sVar1);
				if (__LIB_13__::func_180(iVar0, sVar1))
				{
					if (__LIB_13__::func_181(iVar0, sVar1))
					{
						if (iLocal_125 < 3)
						{
							iLocal_125++;
						}
						if (iLocal_125 >= 3)
						{
							iLocal_125 = 0;
						}
					}
				}
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iVar0, false) && !ANIMSCENE::_0x1F0E401031E20146(iVar0, "pbl_Shotoff"))
			{
				func_462(iVar0, "pbl_Shotoff");
				if (__LIB_13__::func_180(iVar0, "pbl_Shotoff"))
				{
					if (__LIB_13__::func_181(iVar0, "pbl_Shotoff"))
					{
					}
				}
			}
			break;
		case 2:
			if (iLocal_127 == 0)
			{
				sVar3 = "pbl_Shotoff_Idle_01";
			}
			else if (iLocal_127 == 1)
			{
				sVar3 = "pbl_Shotoff_Idle_02";
			}
			else if (iLocal_127 == 2)
			{
				sVar3 = "pbl_Shotoff_Idle_03";
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iVar0, false) && !ANIMSCENE::_0x1F0E401031E20146(iVar0, sVar3))
			{
				func_462(iVar0, sVar3);
				if (__LIB_13__::func_180(iVar0, sVar3))
				{
					if (__LIB_13__::func_181(iVar0, sVar3))
					{
						if (iLocal_127 < 3)
						{
							iLocal_127++;
						}
						if (iLocal_127 >= 3)
						{
							iLocal_127 = 0;
						}
					}
				}
			}
			break;
		case 3:
			if (iLocal_126 == 0)
			{
				sVar2 = "pbl_Shotoff_Flinch_Low_01";
			}
			else if (iLocal_126 == 1)
			{
				sVar2 = "pbl_Shotoff_Flinch_High_01";
			}
			else if (iLocal_126 == 2)
			{
				sVar2 = "pbl_Shotoff_Flinch_High_02";
			}
			if ((ANIMSCENE::_IS_ANIM_SCENE_STARTED(iVar0, false) && !ANIMSCENE::_0x1F0E401031E20146(iVar0, sVar2)) && ANIMSCENE::_0x8D81E7824B7753F7(iVar0, "s_Shotoff_base", 1))
			{
				func_462(iVar0, sVar2);
				if (__LIB_13__::func_180(iVar0, sVar2))
				{
					if (__LIB_13__::func_181(iVar0, sVar2))
					{
						if (iLocal_126 < 3)
						{
							iLocal_126++;
						}
						if (iLocal_126 >= 3)
						{
							iLocal_126 = 0;
						}
					}
				}
			}
			break;
		case 4:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iVar0, false) && !ANIMSCENE::_0x1F0E401031E20146(iVar0, "pbl_AimAt"))
			{
				func_462(iVar0, "pbl_AimAt");
				if (__LIB_13__::func_180(iVar0, "pbl_AimAt"))
				{
					if (__LIB_13__::func_181(iVar0, "pbl_AimAt"))
					{
					}
				}
			}
			break;
		case 5:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iVar0, false) && !ANIMSCENE::_0x1F0E401031E20146(iVar0, "pbl_Balance_AimAt"))
			{
				func_462(iVar0, "pbl_Balance_AimAt");
				if (__LIB_13__::func_180(iVar0, "pbl_Balance_AimAt"))
				{
					if (__LIB_13__::func_181(iVar0, "pbl_Balance_AimAt"))
					{
					}
				}
			}
			break;
		case 6:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iVar0, false) && !ANIMSCENE::_0x1F0E401031E20146(iVar0, "pbl_End"))
			{
				func_462(iVar0, "pbl_End");
				if (__LIB_13__::func_180(iVar0, "pbl_End"))
				{
					if (__LIB_13__::func_181(iVar0, "pbl_End"))
					{
					}
				}
			}
			break;
		case 7:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iVar0, false) && !ANIMSCENE::_0x1F0E401031E20146(iVar0, "pbl_ShotOff_End"))
			{
				func_462(iVar0, "pbl_ShotOff_End");
				if (__LIB_13__::func_180(iVar0, "pbl_ShotOff_End"))
				{
					if (__LIB_13__::func_181(iVar0, "pbl_ShotOff_End"))
					{
					}
				}
			}
			break;
	}
}

void func_693(var uParam0)
{
	if (!bLocal_141)
	{
		if (__LIB_1__::func_325())
		{
			bLocal_141 = true;
			return;
		}
		if (!__LIB_0__::func_75(&uLocal_163))
		{
			__LIB_1__::func_283(&uLocal_163, 0);
		}
		else if (PED::IS_PED_SHOOTING(Global_35))
		{
			__LIB_1__::func_148(&uLocal_163);
		}
		else if (__LIB_0__::func_265(&uLocal_163) > 10f)
		{
			__LIB_12__::func_883(uParam0, "OBT1_O_SHOOT", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			bLocal_141 = true;
		}
	}
}

void func_694()
{
	if (__LIB_0__::func_272(uLocal_14[2], 1))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(uLocal_14[2], true, false), 1f, true))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[4], false))
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[4], "s_Base", 1))
					{
						func_209(0);
					}
					else if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[4], "s_AimAt_Loop", 1))
					{
						func_209(4);
					}
					else if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[4], "s_EyesCovered_Base", 1))
					{
						func_209(7);
					}
				}
			}
		}
		if (!__LIB_0__::func_75(&uLocal_175))
		{
			__LIB_1__::func_148(&uLocal_175);
		}
		else if (__LIB_0__::func_264(&uLocal_175) > IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(15, 30)))
		{
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[4], "s_Base", 1))
			{
				func_209(6);
				__LIB_1__::func_148(&uLocal_178);
			}
		}
		if (__LIB_0__::func_264(&uLocal_178) > IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(15, 30)))
		{
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[4], "s_EyesCovered_Base", 1))
			{
				func_209(9);
				__LIB_0__::func_37(&uLocal_175);
				__LIB_0__::func_37(&uLocal_178);
			}
		}
		if (__LIB_2__::func_401(uLocal_14[2], 1, 1, 1, 0, 0) || __LIB_4__::func_207(uLocal_14[2], 1090519040 /* Float: 8f */, 1103626240 /* Float: 25f */, 1097859072 /* Float: 15f */, 0))
		{
			if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[4], "pbl_AimAt"))
			{
				func_209(3);
			}
		}
		else
		{
			if (ANIMSCENE::_0x1F0E401031E20146(iLocal_114[4], "pbl_AimAt"))
			{
				func_209(5);
			}
			if (!__LIB_0__::func_75(&uLocal_172))
			{
				__LIB_1__::func_148(&uLocal_172);
			}
			else if (__LIB_0__::func_264(&uLocal_172) > IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(10, 20)))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[4], false))
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[4], "s_Base", 1))
					{
						__LIB_0__::func_37(&uLocal_172);
						func_209(2);
					}
					else if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[4], "s_EyesCovered_Base", 1))
					{
						__LIB_0__::func_37(&uLocal_172);
						func_209(8);
					}
				}
			}
		}
	}
}

void func_695(int iParam0)
{
	if (!__LIB_0__::func_272(uLocal_14[0], 0) || !__LIB_0__::func_272(uLocal_14[1], 0))
	{
		return;
	}
	if (iParam0 == 1)
	{
		func_1141();
	}
	else if (iParam0 == 2)
	{
		func_1142();
	}
	else if (iParam0 == 3)
	{
		func_1143();
	}
	if (__LIB_0__::func_272(uLocal_14[0], 0))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (iParam0 == 1 && func_701(0))
			{
				func_692(1, uLocal_14[0], iParam0);
				func_209(1);
			}
			else if (iParam0 == 2 && func_701(2))
			{
				func_692(1, uLocal_14[0], iParam0);
				func_209(1);
			}
			if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(uLocal_14[0], true, false), 1f, true))
			{
				if (((iParam0 == 1 && ENTITY::DOES_ENTITY_EXIST(iLocal_53[0])) || (iParam0 == 2 && ENTITY::DOES_ENTITY_EXIST(iLocal_53[2]))) || (iParam0 == 3 && ENTITY::DOES_ENTITY_EXIST(iLocal_53[4])))
				{
					func_692(0, uLocal_14[0], iParam0);
				}
			}
		}
		if (((((!ENTITY::DOES_ENTITY_EXIST(iLocal_53[0]) && PED::IS_PED_SHOOTING(Global_35)) && iParam0 == 1) && MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(uLocal_14[0], true, false), 1f, true)) || (((!ENTITY::DOES_ENTITY_EXIST(iLocal_53[2]) && PED::IS_PED_SHOOTING(Global_35)) && iParam0 == 2) && MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(uLocal_14[0], true, false), 1f, true))) || (((!ENTITY::DOES_ENTITY_EXIST(iLocal_53[4]) && PED::IS_PED_SHOOTING(Global_35)) && iParam0 == 3) && MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(uLocal_14[0], true, false), 1f, true)))
		{
			func_692(3, uLocal_14[0], iParam0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53[0]) && iParam0 == 1)
		{
			if (__LIB_2__::func_401(uLocal_14[0], 1, 1, 1, 0, 0))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[0], "s_Shotoff_base", 1))
				{
					if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[0], "pbl_AimAt"))
					{
						func_692(4, uLocal_14[0], iParam0);
					}
				}
			}
			else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[0], false) && ANIMSCENE::_0x1F0E401031E20146(iLocal_114[0], "pbl_AimAt"))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[0], "s_AimAt_Loop", 1))
				{
					if (ANIMSCENE::_0x1F0E401031E20146(iLocal_114[0], "pbl_AimAt"))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_114[0], "internal_loop", true, false);
					}
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[0], "s_AimAt_End", 1))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_114[0], "internal_loop", false, false);
				}
			}
			else if (!__LIB_0__::func_75(&uLocal_169))
			{
				__LIB_1__::func_148(&uLocal_169);
			}
			else if (__LIB_0__::func_264(&uLocal_169) > IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(8, 11)))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[0], false))
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[0], "s_Shotoff_base", 1))
					{
						func_692(2, uLocal_14[0], iParam0);
						__LIB_0__::func_37(&uLocal_169);
					}
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53[2]) && iParam0 == 2)
		{
			if (__LIB_2__::func_401(uLocal_14[0], 1, 1, 1, 0, 0))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[0], "s_Shotoff_base", 1))
				{
					if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[0], "pbl_AimAt"))
					{
						func_692(4, uLocal_14[0], iParam0);
					}
				}
			}
			else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[0], false) && ANIMSCENE::_0x1F0E401031E20146(iLocal_114[0], "pbl_AimAt"))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[0], "s_AimAt_Loop", 1))
				{
					if (ANIMSCENE::_0x1F0E401031E20146(iLocal_114[0], "pbl_AimAt"))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_114[0], "internal_loop", true, false);
					}
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[0], "s_AimAt_End", 1))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_114[0], "internal_loop", false, false);
				}
			}
			else if (!__LIB_0__::func_75(&uLocal_169))
			{
				__LIB_1__::func_148(&uLocal_169);
			}
			else if (__LIB_0__::func_264(&uLocal_169) > IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(8, 11)))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[0], false))
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[0], "s_Shotoff_base", 1))
					{
						func_692(2, uLocal_14[0], iParam0);
						__LIB_0__::func_37(&uLocal_169);
					}
				}
			}
		}
		if (iParam0 == 3 && ENTITY::DOES_ENTITY_EXIST(iLocal_53[5]))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53[4]))
			{
				if (__LIB_2__::func_401(uLocal_14[0], 1, 1, 1, 0, 0))
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[2], "s_Shotoff_base", 1))
					{
						if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[2], "pbl_AimAt"))
						{
							func_692(4, uLocal_14[0], iParam0);
						}
					}
				}
				else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[2], false) && ANIMSCENE::_0x1F0E401031E20146(iLocal_114[2], "pbl_AimAt"))
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[2], "s_AimAt_Loop", 1))
					{
						if (ANIMSCENE::_0x1F0E401031E20146(iLocal_114[2], "pbl_AimAt"))
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_114[2], "internal_loop", true, false);
						}
					}
					else if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[2], "s_AimAt_End", 1))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_114[2], "internal_loop", false, false);
					}
				}
				else if (!__LIB_0__::func_75(&uLocal_169))
				{
					__LIB_1__::func_148(&uLocal_169);
				}
				else if (__LIB_0__::func_264(&uLocal_169) > IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(8, 11)))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[2], false))
					{
						if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[2], "s_Shotoff_base", 1))
						{
							func_692(2, uLocal_14[0], iParam0);
							__LIB_0__::func_37(&uLocal_169);
						}
					}
				}
			}
			else if (__LIB_2__::func_401(uLocal_14[0], 1, 1, 1, 0, 0))
			{
				if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[2], "pbl_Balance_AimAt"))
				{
					func_692(5, uLocal_14[0], iParam0);
				}
			}
			else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[2], false))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[2], "s_Balance_AimAt_Loop", 1))
				{
					if (ANIMSCENE::_0x1F0E401031E20146(iLocal_114[2], "pbl_Balance_AimAt"))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_114[2], "internal_loop", true, false);
					}
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[2], "s_Balance_AimAt_Exit", 1))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_114[2], "internal_loop", false, false);
				}
			}
		}
	}
	if (__LIB_0__::func_272(uLocal_14[1], 0))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (iParam0 == 1 && func_701(1))
			{
				func_692(1, uLocal_14[1], iParam0);
				func_209(1);
			}
			else if (iParam0 == 2 && func_701(3))
			{
				func_692(1, uLocal_14[1], iParam0);
				func_209(1);
			}
			if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(uLocal_14[1], true, false), 1f, true))
			{
				if (((iParam0 == 1 && ENTITY::DOES_ENTITY_EXIST(iLocal_53[1])) || (iParam0 == 2 && ENTITY::DOES_ENTITY_EXIST(iLocal_53[3]))) || (iParam0 == 3 && ENTITY::DOES_ENTITY_EXIST(iLocal_53[5])))
				{
					func_692(0, uLocal_14[1], iParam0);
				}
			}
		}
		if (((!ENTITY::DOES_ENTITY_EXIST(iLocal_53[1]) && PED::IS_PED_SHOOTING(Global_35)) && iParam0 == 1) && MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(uLocal_14[1], true, false), 1f, true))
		{
			func_692(3, uLocal_14[1], iParam0);
		}
		else if (((!ENTITY::DOES_ENTITY_EXIST(iLocal_53[3]) && PED::IS_PED_SHOOTING(Global_35)) && iParam0 == 2) && MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(uLocal_14[1], true, false), 1f, true))
		{
			func_692(3, uLocal_14[1], iParam0);
		}
		else if (((!ENTITY::DOES_ENTITY_EXIST(iLocal_53[5]) && PED::IS_PED_SHOOTING(Global_35)) && iParam0 == 3) && MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(uLocal_14[1], true, false), 1f, true))
		{
			func_692(3, uLocal_14[1], iParam0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53[1]) && iParam0 == 1)
		{
			if (__LIB_2__::func_401(uLocal_14[1], 1, 1, 1, 0, 0))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[1], "s_Shotoff_base", 1))
				{
					if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[1], "pbl_AimAt"))
					{
						func_692(4, uLocal_14[1], iParam0);
					}
				}
			}
			else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[1], false) && ANIMSCENE::_0x1F0E401031E20146(iLocal_114[1], "pbl_AimAt"))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[1], "s_AimAt_Loop", 1))
				{
					if (ANIMSCENE::_0x1F0E401031E20146(iLocal_114[1], "pbl_AimAt"))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_114[1], "internal_loop", true, false);
					}
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[1], "s_AimAt_End", 1))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_114[1], "internal_loop", false, false);
				}
			}
			else if (!__LIB_0__::func_75(&uLocal_169))
			{
				__LIB_1__::func_148(&uLocal_169);
			}
			else if (__LIB_0__::func_264(&uLocal_169) > IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(8, 11)))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[1], false))
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[1], "s_Shotoff_base", 1))
					{
						func_692(2, uLocal_14[1], iParam0);
						__LIB_0__::func_37(&uLocal_169);
					}
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53[3]) && iParam0 == 2)
		{
			if (__LIB_2__::func_401(uLocal_14[1], 1, 1, 1, 0, 0))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[1], "s_Shotoff_base", 1))
				{
					if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[1], "pbl_AimAt"))
					{
						func_692(4, uLocal_14[1], iParam0);
					}
				}
			}
			else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[1], false) && ANIMSCENE::_0x1F0E401031E20146(iLocal_114[1], "pbl_AimAt"))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[1], "s_AimAt_Loop", 1))
				{
					if (ANIMSCENE::_0x1F0E401031E20146(iLocal_114[1], "pbl_AimAt"))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_114[1], "internal_loop", true, false);
					}
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[1], "s_AimAt_End", 1))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_114[1], "internal_loop", false, false);
				}
			}
			else if (!__LIB_0__::func_75(&uLocal_169))
			{
				__LIB_1__::func_148(&uLocal_169);
			}
			else if (__LIB_0__::func_264(&uLocal_169) > IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(8, 11)))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[1], false))
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[1], "s_Shotoff_base", 1))
					{
						func_692(2, uLocal_14[1], iParam0);
						__LIB_0__::func_37(&uLocal_169);
					}
				}
			}
		}
		if (iParam0 == 3 && ENTITY::DOES_ENTITY_EXIST(iLocal_53[4]))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53[5]))
			{
				if (__LIB_2__::func_401(uLocal_14[1], 1, 1, 1, 0, 0))
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[3], "s_Shotoff_base", 1))
					{
						if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[3], "pbl_AimAt"))
						{
							func_692(4, uLocal_14[1], iParam0);
						}
					}
				}
				else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[3], false) && ANIMSCENE::_0x1F0E401031E20146(iLocal_114[1], "pbl_AimAt"))
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[3], "s_AimAt_Loop", 1))
					{
						if (ANIMSCENE::_0x1F0E401031E20146(iLocal_114[3], "pbl_AimAt"))
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_114[3], "internal_loop", true, false);
						}
					}
					else if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[3], "s_AimAt_End", 1))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_114[3], "internal_loop", false, false);
					}
				}
				else if (!__LIB_0__::func_75(&uLocal_169))
				{
					__LIB_1__::func_148(&uLocal_169);
				}
				else if (__LIB_0__::func_264(&uLocal_169) > IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(8, 11)))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[3], false))
					{
						if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[3], "s_Shotoff_base", 1))
						{
							func_692(2, uLocal_14[1], iParam0);
							__LIB_0__::func_37(&uLocal_169);
						}
					}
				}
			}
			else if (__LIB_2__::func_401(uLocal_14[1], 1, 1, 1, 0, 0))
			{
				if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[3], "pbl_Balance_AimAt"))
				{
					func_692(5, uLocal_14[1], iParam0);
				}
			}
			else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[3], false))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[3], "s_Balance_AimAt_Loop", 1))
				{
					if (ANIMSCENE::_0x1F0E401031E20146(iLocal_114[3], "pbl_Balance_AimAt"))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_114[3], "internal_loop", true, false);
					}
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[3], "s_Balance_AimAt_Exit", 1))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_114[3], "internal_loop", false, false);
				}
			}
		}
	}
}

void func_696(var uParam0, int iParam1)
{
	if (PED::IS_PED_SHOOTING(Global_35))
	{
		if (!__LIB_6__::func_904() && __LIB_12__::func_876(uParam0, "ROBT_FLINCH", 0))
		{
		}
	}
	else if (!__LIB_6__::func_904())
	{
		if ((((((((__LIB_2__::func_401(uLocal_14[0], 1, 1, 1, 0, 0) || __LIB_4__::func_207(uLocal_14[0], 1090519040 /* Float: 8f */, 1103626240 /* Float: 25f */, 1097859072 /* Float: 15f */, 0)) || __LIB_3__::func_742(uLocal_14[0])) || __LIB_2__::func_401(uLocal_14[1], 1, 1, 1, 0, 0)) || __LIB_4__::func_207(uLocal_14[1], 1090519040 /* Float: 8f */, 1103626240 /* Float: 25f */, 1097859072 /* Float: 15f */, 0)) || __LIB_3__::func_742(uLocal_14[1])) || __LIB_2__::func_401(uLocal_14[2], 1, 1, 1, 0, 0)) || __LIB_4__::func_207(uLocal_14[2], 1090519040 /* Float: 8f */, 1103626240 /* Float: 25f */, 1097859072 /* Float: 15f */, 0)) || __LIB_3__::func_742(uLocal_14[2]))
		{
			func_1145(uParam0, iParam1);
		}
	}
}

void func_697(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (iParam1 == 1)
	{
		iVar0 = 0;
		iVar1 = 1;
	}
	else if (iParam1 == 2)
	{
		iVar0 = 2;
		iVar1 = 3;
	}
	else if (iParam1 == 3)
	{
		iVar0 = 4;
		iVar1 = 5;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53[iVar0]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_53[iVar1]))
	{
		return;
	}
	if (!__LIB_0__::func_75(&uLocal_184))
	{
		__LIB_1__::func_148(&uLocal_184);
	}
	else if (__LIB_0__::func_265(&uLocal_184) > IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(3, 6)))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[iVar0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_53[iVar1]))
		{
			if (__LIB_2__::func_918() == 0)
			{
				if (!__LIB_6__::func_904())
				{
					if (!iLocal_155[0])
					{
						if (__LIB_12__::func_876(uParam0, "ROBT1_PROHURRY", 0))
						{
							__LIB_0__::func_37(&uLocal_184);
							iLocal_155[0] = 1;
						}
					}
				}
			}
			else if (!__LIB_6__::func_904())
			{
				if (!iLocal_155[1])
				{
					if (__LIB_12__::func_876(uParam0, "ROBT1_ACRHURRY", 0))
					{
						__LIB_0__::func_37(&uLocal_184);
						iLocal_155[1] = 1;
					}
				}
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53[iVar0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_53[iVar1]))
		{
			if (!__LIB_6__::func_904())
			{
				if (!iLocal_152[0])
				{
					if (__LIB_12__::func_876(uParam0, "ROBT1_PROBOT", 0))
					{
						iLocal_152[0] = 1;
						__LIB_0__::func_37(&uLocal_184);
					}
				}
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53[iVar1]) && ENTITY::DOES_ENTITY_EXIST(iLocal_53[iVar0]))
		{
			if (!__LIB_6__::func_904())
			{
				if (!iLocal_152[1])
				{
					if (__LIB_12__::func_876(uParam0, "ROBT1_ACRBOT", 0))
					{
						iLocal_152[1] = 1;
						__LIB_0__::func_37(&uLocal_184);
					}
				}
			}
		}
	}
}

void func_698()
{
	__LIB_0__::func_105(1);
	func_462(iLocal_114[2], "pbl_Shotoff");
	func_462(iLocal_114[3], "pbl_Shotoff");
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[9], false))
	{
		if (ANIMSCENE::_0x1F0E401031E20146(iLocal_114[9], "pbl_Dialogue"))
		{
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_114[9], "s_Base", 1))
			{
				if (func_1146() && func_1147())
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_114[9]);
				}
			}
			else if (func_701(4) || func_701(5))
			{
				if (func_1146() && func_1147())
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_114[9]);
					bLocal_162 = true;
				}
			}
		}
	}
}

void func_699()
{
	if (bLocal_162)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53[4]))
		{
			if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[2], "pbl_Shotoff"))
			{
				func_462(iLocal_114[2], "pbl_Shotoff");
				if (__LIB_13__::func_180(iLocal_114[2], "pbl_Shotoff"))
				{
					if (__LIB_13__::func_181(iLocal_114[2], "pbl_Shotoff"))
					{
						func_209(1);
						bLocal_162 = false;
					}
				}
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53[5]))
		{
			if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_114[3], "pbl_Shotoff"))
			{
				func_462(iLocal_114[3], "pbl_Shotoff");
				if (__LIB_13__::func_180(iLocal_114[3], "pbl_Shotoff"))
				{
					if (__LIB_13__::func_181(iLocal_114[3], "pbl_Shotoff"))
					{
						func_209(1);
						bLocal_162 = false;
					}
				}
			}
		}
	}
}

bool func_701(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[iParam0]))
	{
		if (OBJECT::HAS_OBJECT_BEEN_BROKEN(iLocal_53[iParam0]))
		{
			__LIB_0__::func_325(&(iLocal_98[iParam0]));
			OBJECT::SET_OBJECT_TARGETTABLE(iLocal_53[iParam0], false);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_53[iParam0], false, 0f);
			__LIB_1__::func_951(&(iLocal_53[iParam0]));
			if (iParam0 == 4)
			{
				func_692(1, uLocal_14[0], 3);
				func_209(1);
			}
			if (iParam0 == 5)
			{
				func_692(1, uLocal_14[1], 3);
				func_209(1);
			}
			return true;
		}
	}
	return false;
}

bool func_737(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_737(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_737(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_737(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_737(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_737(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_737(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_737(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_737(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_737(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_737(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_737(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_739()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1256();
	func_1257();
	func_1258();
	func_1259();
	func_1260();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_740(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1263(iParam0, 1, 1, -142743235, 1);
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

void func_775()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1296(&uVar4, &iVar1, &iVar2, &iVar3)))
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

int func_867(var uParam0, int iParam1, int iParam2)
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
		return func_867(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_952(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(Global_1347702[uParam0->f_174 /*49*/].f_22))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1) == Global_35)
	{
		return;
	}
	if (!ITEMSET::IS_IN_ITEMSET(iParam1, Global_1347702[uParam0->f_174 /*49*/].f_22))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam1, Global_1347702[uParam0->f_174 /*49*/].f_22);
		if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
		{
			if (EVENT::_0x26054EB81AC0893B(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				EVENT::_0x2DD42FAD06E6F19E(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1), 1, 1);
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			EVENT::_0xBB1E41DD3D3C6250(iVar0, "SpMissionTriggers", 0);
			if (bParam2)
			{
				if (PED::IS_PED_HUMAN(iVar0))
				{
					ANIMSCENE::_0x99B2A2E3655DEAF1(iVar0, "ClosestScenario");
				}
			}
			EVENT::_0x1A5C5D350068A673(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0);
		}
	}
}

bool func_985(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5)
{
	return __LIB_13__::func_521(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5);
}

void func_993()
{
	func_462(iLocal_114[8], "pl_action");
	func_462(iLocal_114[8], "pl_idles_from_distance");
	func_462(iLocal_114[8], "pl_callover_01_f");
	func_462(iLocal_114[8], "pl_callover_02_f");
	func_462(iLocal_114[8], "pl_callover_03_f");
	func_462(iLocal_114[8], "pl_quick_callover_f");
	func_462(iLocal_114[8], "pl_callover_01_l");
	func_462(iLocal_114[8], "pl_callover_02_l");
	func_462(iLocal_114[8], "pl_callover_03_l");
	func_462(iLocal_114[8], "pl_quick_callover_l");
	func_462(iLocal_114[8], "pl_callover_01_r");
	func_462(iLocal_114[8], "pl_callover_02_r");
	func_462(iLocal_114[8], "pl_callover_03_r");
	func_462(iLocal_114[8], "pl_quick_callover_r");
	func_462(iLocal_114[8], "pl_leadin");
	func_462(iLocal_114[8], "pl_react");
}

void func_1059(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1534();
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

void func_1061(var uParam0)
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
			func_1542(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1542(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1062(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1542(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_1141()
{
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[0], false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[0]))
		{
			func_1624(iLocal_114[0]);
		}
		else
		{
			func_1625(iLocal_114[0]);
			func_1626(iLocal_114[0]);
		}
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[1], false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[1]))
		{
			func_1624(iLocal_114[1]);
		}
		else
		{
			func_1625(iLocal_114[1]);
			func_1626(iLocal_114[1]);
		}
	}
}

void func_1142()
{
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[0], false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[2]))
		{
			func_1624(iLocal_114[0]);
		}
		else
		{
			func_1625(iLocal_114[0]);
			func_1626(iLocal_114[0]);
		}
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[1], false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[3]))
		{
			func_1624(iLocal_114[1]);
		}
		else
		{
			func_1625(iLocal_114[1]);
			func_1626(iLocal_114[1]);
		}
	}
}

void func_1143()
{
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[2], false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[4]))
		{
			func_1624(iLocal_114[2]);
		}
		else
		{
			func_1625(iLocal_114[2]);
			func_1626(iLocal_114[2]);
			func_462(iLocal_114[2], "pbl_Balance_AimAt");
			func_462(iLocal_114[2], "pbl_ShotOff_End");
		}
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[3], false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[5]))
		{
			func_1624(iLocal_114[3]);
		}
		else
		{
			func_1625(iLocal_114[3]);
			func_1626(iLocal_114[3]);
			func_462(iLocal_114[3], "pbl_Balance_AimAt");
			func_462(iLocal_114[3], "pbl_ShotOff_End");
		}
	}
}

void func_1145(var uParam0, int iParam1)
{
	char* sVar0;
	if (iParam1 == 1)
	{
		sVar0 = "ROBT1_AIM1";
	}
	else if (iParam1 == 2)
	{
		sVar0 = "ROBT1_AIM2";
	}
	else if (iParam1 == 3)
	{
		sVar0 = "ROBT1_AIM3";
	}
	if (!__LIB_0__::func_75(&uLocal_199))
	{
		__LIB_1__::func_148(&uLocal_199);
	}
	if (__LIB_0__::func_264(&uLocal_199) > 10f)
	{
		if (!__LIB_0__::func_270())
		{
			if (__LIB_14__::func_70(uParam0, sVar0, &(uLocal_14[2]), 0, 20f, 0, 1))
			{
				__LIB_1__::func_148(&uLocal_199);
			}
		}
	}
}

int func_1146()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_114[2]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_114[2], true, false))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[2], false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_114[2], "cs_twinbrother_01", uLocal_14[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_114[2], "p_bottlebeer01x", iLocal_53[4], 0);
				ANIMSCENE::START_ANIM_SCENE(iLocal_114[2]);
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1147()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_114[3]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_114[3], true, false))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_114[3], false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_114[3], "cs_twinbrother_02", uLocal_14[1], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_114[3], "p_bottlebeer01x", iLocal_53[5], 0);
				ANIMSCENE::START_ANIM_SCENE(iLocal_114[3]);
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1256()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1726(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), false);
			func_1727();
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
	func_1726(1);
}

void func_1257()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_737(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1258()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1729(0);
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
	func_1729(1);
}

void func_1259()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1729(0);
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
	func_1729(1);
}

void func_1260()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_737(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_737(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1263(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1263(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1263(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1263(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

int func_1296(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1767(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_737(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_1534()
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
	iVar0 = func_1883(6291456, 0);
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

void func_1542(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1542(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1542(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_1624(int iParam0)
{
	func_462(iParam0, "pbl_Shotoff");
	func_462(iParam0, "pbl_Flinch_01");
	func_462(iParam0, "pbl_Flinch_02");
	func_462(iParam0, "pbl_Flinch_03");
}

void func_1625(int iParam0)
{
	if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, "pbl_Flinch_01"))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(iParam0, "pbl_Flinch_01");
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, "pbl_Flinch_02"))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(iParam0, "pbl_Flinch_02");
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, "pbl_Flinch_03"))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(iParam0, "pbl_Flinch_03");
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, "pbl_Shotoff"))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(iParam0, "pbl_Shotoff");
	}
}

void func_1626(int iParam0)
{
	func_462(iParam0, "pbl_Shotoff_Flinch_Low_01");
	func_462(iParam0, "pbl_Shotoff_Flinch_High_01");
	func_462(iParam0, "pbl_Shotoff_Flinch_High_02");
	func_462(iParam0, "pbl_Shotoff_Idle_01");
	func_462(iParam0, "pbl_Shotoff_Idle_02");
	func_462(iParam0, "pbl_Shotoff_Idle_03");
	func_462(iParam0, "pbl_AimAt");
	func_462(iParam0, "pbl_End");
}

void func_1726(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_737(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_737(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_737(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1727();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1992(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_740(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1263(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, func_1993());
		Var0 = { func_1995() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1998(Var0);
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

int func_1727()
{
	if (!__LIB_1__::func_827(-1898635967, func_1993(), 1))
	{
		return 0;
	}
	if (__LIB_0__::func_26())
	{
		if (!__LIB_1__::func_827(146323340, func_1993(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1729(bool bParam0)
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
		func_737(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_737(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_737(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_737(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_737(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_737(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_737(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_737(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_737(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_737(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_737(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1263(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1263(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1263(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1263(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1263(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1263(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1263(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1263(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1263(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1263(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1263(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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
		func_1727();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), false);
	}
}

int func_1767(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1767(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1767(iVar63, -915411861, 1, 0, 0));
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

int func_1883(int iParam0, int iParam1)
{
	var uVar0;
	return func_2059(&uVar0, iParam0, iParam1);
}

void func_1992(int iParam0)
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
	func_1263(iParam0, 1, 1, -142743235, 1);
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
		func_1263(uVar18[iVar36], 1, 1, -142743235, 1);
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
				Jump @300; //curOff = 251
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_24));
				Jump @300; //curOff = 274
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_25));
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
struct<4> func_1993()
{
	struct<4> Var0;
	Var0 = { __LIB_0__::func_949(0) };
	return __LIB_0__::func_429(856287005, Var0, -218846335, 0);
}

struct<6> func_1995()
{
	struct<6> Var0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	if (func_2116(joaat("SLOTID_HORSE_BEDROLL"), &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_2116(joaat("SLOTID_HORSE_BLANKET"), &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_2116(joaat("SLOTID_HORSE_HORN"), &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_2116(joaat("SLOTID_HORSE_SADDLEBAG"), &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_2116(joaat("SLOTID_HORSE_STIRRUP"), &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_2116(joaat("SLOTID_HORSE_SADDLE"), &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1998(struct<6> Param0)
{
	if (!func_2125(Param0.f_4, 1))
	{
	}
	if (!func_2125(Param0, 1))
	{
	}
	if (!func_2125(Param0.f_2, 1))
	{
	}
	if (!func_2125(Param0.f_5, 1))
	{
	}
	if (!func_2125(Param0.f_3, 1))
	{
	}
	if (!func_2125(Param0.f_1, 1))
	{
	}
}

int func_2059(var uParam0, int iParam1, int iParam2)
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
		return func_2059(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2116(int iParam0, int iParam1)
{
	struct<4> Var0;
	if (!__LIB_1__::func_131(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_1993() };
	*iParam1 = __LIB_1__::func_81(Var0, iParam0, 0);
	if (!__LIB_0__::func_144(*iParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_2125(int iParam0, int iParam1)
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
	Var10 = { func_1993() };
	Var14 = { __LIB_0__::func_429(iParam0, Var10, iVar9, 0) };
	if (__LIB_1__::func_556(Var14, iParam1))
	{
		if (__LIB_0__::func_847(iParam0))
		{
			if (func_2116(joaat("SLOTID_HORSE_HORN"), &iVar18))
			{
				if (func_2125(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (func_2116(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2125(iVar19, 0))
				{
				}
			}
			if (func_2116(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2125(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2125(iVar21, 1))
				{
				}
			}
		}
		func_2205();
		return true;
	}
	return false;
}

int func_2205()
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar14;
	bool bVar15;
	struct<4> Var16;
	int iVar20;
	int iVar21;
	Var0 = { __LIB_1__::func_615(856287005, 0, 0) };
	Var5 = { __LIB_0__::func_429(856287005, Var0, Var0.f_4, 0) };
	iVar10 = __LIB_0__::func_357(856287005);
	if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, 0, &iVar11))
	{
		iVar14 = __LIB_1__::func_81(Var5, joaat("SLOTID_HORSE_SADDLE"), 0);
	}
	if (!__LIB_0__::func_144(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = __LIB_0__::func_857(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = __LIB_1__::func_81(Var5, iVar11, 0);
			if (!__LIB_0__::func_144(iVar21, 0))
			{
				if (iVar11 == joaat("SLOTID_HORSE_HORN"))
				{
					if (__LIB_0__::func_848(iVar14) || __LIB_0__::func_847(iVar14))
					{
					}
					else
					{
						Jump @219; //curOff = 194
						if (iVar11 == joaat("SLOTID_HORSE_STIRRUP"))
						{
							if (__LIB_0__::func_848(iVar14))
							{
							}
							else
							{
								bVar15 = true;
								Jump @259; //curOff = 222
								if (iVar11 == joaat("SLOTID_HORSE_BLANKET"))
								{
									if (!__LIB_0__::func_848(iVar14) && __LIB_0__::func_688(iVar21))
									{
										bVar15 = true;
									}
								}
								if (bVar15)
								{
									if (func_2246(iVar11, &Var16, 1))
									{
										if (!__LIB_1__::func_556(Var16, 1))
										{
										}
									}
								}
							}
							iVar9++;
							return 1;
						}
					}
				}
			}
		}
	}
}

bool func_2246(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	struct<4> Var16;
	int iVar30;
	if (iParam0 == 0)
	{
		return false;
	}
	Var2 = { __LIB_0__::func_523(0, iParam0, -1591664384, -1591664384, 0, 0) };
	__LIB_0__::func_524(&Var2, func_1993());
	if (__LIB_0__::func_801(&Var2, &iVar0, &iVar1, 0))
	{
		Var16.f_9 = -1591664384;
		iVar30 = 0;
		while (iVar30 < iVar1)
		{
			if (__LIB_0__::func_236(&Var16, iVar30, iVar0, iVar1))
			{
				if (__LIB_0__::func_144(Var16.f_4, 0) && !Var16.f_10)
				{
					if (bParam2 && __LIB_0__::func_688(Var16.f_4))
					{
					}
					else
					{
						*uParam1 = { Var16 };
						__LIB_0__::func_238(iVar0);
						return true;
					}
				}
			}
			iVar30++;
		}
		__LIB_0__::func_238(iVar0);
	}
	return false;
}

