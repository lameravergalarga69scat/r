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
	var uLocal_17 = 2;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	struct<17> Local_20[1];
	int iLocal_38 = 0;
	var uLocal_39 = -1;
	var uLocal_40 = 0;
	var uLocal_41 = -1;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = -1;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 1073741824;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 1;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 1106247680;
	var uLocal_65 = 1067450368;
	var uLocal_66 = 0;
	var uLocal_67 = 1092616192;
	var uLocal_68 = 1112014848;
	var uLocal_69 = 1106247680;
	var uLocal_70 = 1101529088;
	var uLocal_71 = 1101004800;
	var uLocal_72 = 1084227584;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	vector3 vLocal_101 = { 0f, 0f, 0f };
	vector3 vLocal_104[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_114 = 0;
	int iLocal_115[1] = { 0 };
	int iLocal_117 = 0;
	var uLocal_118[1] = { 0 };
	int iLocal_120[4] = { 0, 0, 0, 0 };
	int iLocal_125[4] = { 0, 0, 0, 0 };
	int iLocal_130 = 0;
	struct<6> Local_131[4];
	var uLocal_156[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_164[3] = { 0, 0, 0 };
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	int iLocal_177 = 0;
	struct<2907> Local_178 = { 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 30, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1084227584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = -1;
	var uScriptParam_2 = 0;
#endregion
void __EntryFunction__()
{
	bool bVar0;
	struct<4> Var1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		if (__LIB_5__::func_203(Local_178))
		{
			__LIB_0__::func_8(&Global_1935630, 32768);
		}
		func_3(&Local_178, 1);
	}
	__LIB_5__::func_610(&uScriptParam_0, &Local_178);
	while (!__LIB_2__::func_27(&Local_178, 1))
	{
		if (__LIB_4__::func_721(&Local_178) != 10)
		{
			if ((__LIB_4__::func_721(&Local_178) == 3 || __LIB_4__::func_721(&Local_178) == 4) && (!__LIB_5__::func_132(&Local_178) || __LIB_0__::func_78(&(Local_178.f_958)) > 0))
			{
				__LIB_7__::func_446(&Local_178, __LIB_2__::func_27(&Local_178, 67108864));
				bVar0 = true;
			}
			if ((!bVar0 && __LIB_5__::func_204(&Local_178)) && __LIB_2__::func_27(&Local_178, 65536))
			{
				__LIB_7__::func_446(&Local_178, 1);
			}
		}
		if (__LIB_4__::func_721(&Local_178) >= 3 && __LIB_4__::func_721(&Local_178) <= 7)
		{
			__LIB_5__::func_525(&Local_178);
		}
		if (((((__LIB_4__::func_721(&Local_178) >= 5 && __LIB_4__::func_721(&Local_178) <= 7) && !__LIB_2__::func_27(&Local_178, 4096)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_178.f_428.f_444)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_178.f_428.f_444, false)) && !ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_178.f_428.f_444))
		{
			MemCopy(&Var1, {__LIB_4__::func_681(Local_178)}, 4);
			func_13(Var1, &(Local_178.f_428));
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
		}
		switch (__LIB_4__::func_721(&Local_178))
		{
			case 8:
				if (__LIB_5__::func_607(&Local_178))
				{
					__LIB_5__::func_536(&Local_178);
					__LIB_0__::func_0(&Local_178);
					__LIB_4__::func_722(&Local_178, 0);
				}
				else if (!__LIB_5__::func_204(&Local_178))
				{
					if (!__LIB_0__::func_75(&(Local_178.f_2899)))
					{
						__LIB_1__::func_283(&(Local_178.f_2899), 0);
					}
					if (!__LIB_5__::func_216(&Local_178))
					{
						if (__LIB_0__::func_264(&(Local_178.f_2899)) >= 1f)
						{
							__LIB_1__::func_109(Local_178.f_2889, 2097152);
							__LIB_5__::func_174(&Local_178);
							__LIB_5__::func_608(&Local_178);
							__LIB_4__::func_722(&Local_178, 10);
						}
					}
					else
					{
						if (!__LIB_2__::func_27(&Local_178, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							__LIB_5__::func_410(&Local_178, 536870912);
						}
						__LIB_1__::func_148(&(Local_178.f_2899));
					}
				}
				break;
			case 0:
				if (__LIB_5__::func_204(&Local_178))
				{
					__LIB_0__::func_0(&Local_178);
				}
				if (!__LIB_5__::func_204(&Local_178) || __LIB_2__::func_27(&Local_178, 65536))
				{
					if (func_27(&Local_178))
					{
						__LIB_4__::func_722(&Local_178, 1);
					}
				}
				break;
			case 1:
				if (__LIB_5__::func_204(&Local_178))
				{
					__LIB_0__::func_0(&Local_178);
				}
				if (func_28(&Local_178))
				{
					__LIB_4__::func_722(&Local_178, 2);
				}
				break;
			case 2:
				if (__LIB_5__::func_204(&Local_178))
				{
					__LIB_0__::func_0(&Local_178);
				}
				if (func_29(&Local_178))
				{
					if (!__LIB_5__::func_132(&Local_178) || __LIB_5__::func_204(&Local_178))
					{
						if (!__LIB_0__::func_79(Local_178.f_2889))
						{
							Local_178.f_2889 = __LIB_0__::func_80(__LIB_3__::func_918(Local_178));
						}
						__LIB_1__::func_109(Local_178.f_2889, 4);
						__LIB_5__::func_410(&Local_178, 8192);
					}
					if (__LIB_5__::func_204(&Local_178))
					{
						__LIB_5__::func_175(&Local_178);
						__LIB_4__::func_722(&Local_178, 9);
					}
					else
					{
						__LIB_4__::func_722(&Local_178, 3);
					}
				}
				break;
			case 9:
				if (__LIB_0__::func_0(&Local_178))
				{
					__LIB_0__::func_11(&Local_178);
					__LIB_5__::func_536(&Local_178);
					__LIB_11__::func_113(&Local_178);
					if (!__LIB_2__::func_27(&Local_178, 256))
					{
						func_36(&Local_178);
						__LIB_5__::func_227(Local_178);
						func_38(&Local_178);
						__LIB_4__::func_722(&Local_178, 7);
					}
					else
					{
						__LIB_4__::func_722(&Local_178, 5);
					}
				}
				break;
			case 3:
				if (!__LIB_2__::func_27(&Local_178, 8192))
				{
					if (__LIB_0__::func_78(&(Local_178.f_958)) == 3)
					{
						__LIB_1__::func_109(Local_178.f_2889, 4);
						__LIB_5__::func_410(&Local_178, 8192);
					}
				}
				__LIB_14__::func_414(&Local_178);
				if (__LIB_3__::func_919(__LIB_0__::func_80(Global_1835011[Local_178 /*74*/].f_1), 512))
				{
				}
				else if (func_41(&Local_178) || __LIB_5__::func_176(&Local_178, 32768))
				{
					__LIB_0__::func_11(&Local_178);
					__LIB_5__::func_536(&Local_178);
					__LIB_4__::func_722(&Local_178, 4);
					__LIB_1__::func_283(&(Local_178.f_2890), 0);
				}
				else if (__LIB_5__::func_204(&Local_178) && !__LIB_5__::func_203(Local_178))
				{
					if (!__LIB_0__::func_75(&(Local_178.f_2899)))
					{
						__LIB_1__::func_283(&(Local_178.f_2899), 0);
					}
					if (!__LIB_5__::func_216(&Local_178))
					{
						if (__LIB_0__::func_264(&(Local_178.f_2899)) >= 1f)
						{
							__LIB_1__::func_109(Local_178.f_2889, 2097152);
							__LIB_5__::func_174(&Local_178);
							__LIB_5__::func_608(&Local_178);
							__LIB_4__::func_722(&Local_178, 10);
						}
					}
					else
					{
						if (!__LIB_2__::func_27(&Local_178, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							__LIB_5__::func_410(&Local_178, 536870912);
						}
						__LIB_1__::func_148(&(Local_178.f_2899));
					}
				}
				break;
			case 4:
				func_43(&Local_178);
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
				if (func_44(&Local_178) || (__LIB_5__::func_176(&Local_178, 32768) && !__LIB_2__::func_27(&Local_178, 268435456)))
				{
					__LIB_11__::func_113(&Local_178);
					if (!__LIB_2__::func_27(&Local_178, 256))
					{
						func_36(&Local_178);
						func_38(&Local_178);
						if (!__LIB_0__::func_1(Global_1935630, 524288) || __LIB_5__::func_176(&Local_178, 524288))
						{
							__LIB_5__::func_227(Local_178);
							__LIB_4__::func_722(&Local_178, 7);
						}
						else
						{
							__LIB_4__::func_722(&Local_178, 6);
						}
					}
					else
					{
						__LIB_5__::func_227(Local_178);
						__LIB_4__::func_722(&Local_178, 5);
					}
				}
				break;
			case 5:
				__LIB_0__::func_11(&Local_178);
				__LIB_5__::func_526(&Local_178);
				if (__LIB_0__::func_265(&(Local_178.f_2884)) >= __LIB_4__::func_723(&Local_178))
				{
					func_36(&Local_178);
					func_38(&Local_178);
					__LIB_1__::func_148(&(Local_178.f_2884));
					if (!__LIB_5__::func_176(&Local_178, 524288))
					{
						__LIB_5__::func_227(Local_178);
						__LIB_4__::func_722(&Local_178, 7);
					}
					else
					{
						__LIB_4__::func_722(&Local_178, 6);
					}
				}
				break;
			case 6:
				if (!__LIB_0__::func_75(&(Local_178.f_2906)))
				{
					__LIB_1__::func_283(&(Local_178.f_2906), 0);
				}
				if ((__LIB_0__::func_81(&(Local_178.f_428)) == 4 && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_178.f_428.f_444)) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_178.f_428.f_444))
				{
					__LIB_5__::func_227(Local_178);
					__LIB_4__::func_722(&Local_178, 7);
				}
				else if (__LIB_0__::func_265(&(Local_178.f_2906)) >= 5f)
				{
					__LIB_5__::func_227(Local_178);
					__LIB_4__::func_722(&Local_178, 7);
				}
				break;
			case 7:
				__LIB_0__::func_11(&Local_178);
				if (__LIB_5__::func_530(&Local_178))
				{
					__LIB_4__::func_722(&Local_178, 10);
				}
				break;
			case 10:
				if (func_3(&Local_178, 0))
				{
					__LIB_5__::func_410(&Local_178, 1);
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_3(int iParam0, bool bParam1)
{
	iParam0->f_2902 = bParam1;
	if (!func_53(iParam0) && !bParam1)
	{
		return false;
	}
	__LIB_5__::func_217(iParam0);
	__LIB_5__::func_205(iParam0);
	__LIB_5__::func_611(iParam0);
	__LIB_5__::func_224(iParam0);
	__LIB_4__::func_724(iParam0);
	__LIB_4__::func_776(*iParam0);
	__LIB_4__::func_777(*iParam0);
	if (ITEMSET::IS_ITEMSET_VALID(iParam0->f_5))
	{
		ITEMSET::DESTROY_ITEMSET(iParam0->f_5);
	}
	if (!Global_1935630.f_12)
	{
		TASK::TASK_CLEAR_LOOK_AT(Global_35);
	}
	if (__LIB_2__::func_27(iParam0, 1024))
	{
		__LIB_0__::func_733(1);
		__LIB_0__::func_8(&Global_1935630, 32768);
	}
	else
	{
		__LIB_5__::func_177();
	}
	if (bParam1)
	{
		if (__LIB_4__::func_725(&(iParam0->f_958), 33554436) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
		__LIB_5__::func_133(&(iParam0->f_958));
	}
	__LIB_4__::func_726(iParam0, 0);
	if (__LIB_2__::func_27(iParam0, 536870912))
	{
		CLOCK::PAUSE_CLOCK(false, 0);
		__LIB_4__::func_727(iParam0, 536870912);
	}
	if (bParam1)
	{
		__LIB_0__::func_82(1, 0, 0);
	}
	if (__LIB_2__::func_27(iParam0, -2147483648))
	{
		__LIB_5__::func_206();
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

int func_13(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	__LIB_4__::func_779(uParam4, &uParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		__LIB_5__::func_225(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (__LIB_0__::func_81(uParam4))
	{
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_444, true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_444, false))
				{
					__LIB_5__::func_603(uParam4, &uParam0);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_444))
				{
					__LIB_1__::func_747(uParam4, 4);
					return 0;
				}
				else if (__LIB_4__::func_729(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_437);
				}
				__LIB_1__::func_747(uParam4, 3);
			}
			else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_446)) && __LIB_0__::func_84(uParam4, 134217728))
				{
				}
				else
				{
					__LIB_5__::func_411(uParam4);
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
				__LIB_5__::func_412(uParam4);
				if (!__LIB_0__::func_75(&(uParam4->f_1)))
				{
					__LIB_1__::func_283(&(uParam4->f_1), 0);
				}
				else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_444);
					}
					__LIB_1__::func_747(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444) || !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_444, true, false))
			{
				if (__LIB_5__::func_518(uParam4, &uParam0, 1, 1))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_444, true, false))
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
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_444);
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
					__LIB_5__::func_603(uParam4, &uParam0);
					__LIB_1__::func_747(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_444);
				}
				__LIB_1__::func_747(uParam4, 4);
			}
			break;
		case 3:
			func_94(uParam4);
			if (__LIB_4__::func_729(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_437);
			}
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_444, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_444) || __LIB_0__::func_84(uParam4, 512)))
			{
				if (!__LIB_0__::func_84(uParam4, 1024) && __LIB_4__::func_780(uParam4, 1))
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
				__LIB_5__::func_225(uParam4);
			}
			if (__LIB_0__::func_84(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((__LIB_4__::func_730(uParam4) - __LIB_4__::func_731(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_444))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (__LIB_4__::func_781(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && __LIB_4__::func_731(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (__LIB_4__::func_732(uParam4))
			{
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444))
				{
				}
				__LIB_0__::func_488(uParam4);
				func_102(uParam4);
				return 1;
			}
			else
			{
				if (__LIB_0__::func_84(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_444))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_444);
						}
						__LIB_1__::func_148(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_4__::func_733(uParam4, 67108864, 1);
						__LIB_1__::func_747(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!__LIB_0__::func_84(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_444)) && CAM::IS_SCREEN_FADED_OUT()) && __LIB_4__::func_731(uParam4) <= 5000) && __LIB_4__::func_731(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!__LIB_0__::func_84(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					func_104(&(uParam4->f_501), 0);
					__LIB_0__::func_88(uParam4, 536870912);
				}
				if (__LIB_4__::func_731(uParam4) >= 5000 && __LIB_4__::func_731(uParam4) <= (__LIB_4__::func_730(uParam4) - 5000))
				{
					__LIB_0__::func_89();
				}
			}
			break;
		case 6:
			if (__LIB_4__::func_732(uParam4))
			{
				__LIB_0__::func_488(uParam4);
				func_102(uParam4);
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
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444))
					{
						__LIB_0__::func_88(uParam4, 1073741824 /* Float: 2f */);
					}
				}
			}
			else
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_444, true);
						if (UIFEED::_0xC17F69E1418CD11F(9) != 0)
						{
							UIFEED::_0xDD1232B332CBB9E7(9, 1, 0);
						}
						return 0;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam4->f_444))
					{
						return 0;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!__LIB_4__::func_729(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_438);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_444, false);
						}
						__LIB_1__::func_747(uParam4, 3);
					}
					else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_444, false);
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

bool func_27(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_5))
	{
		iParam0->f_5 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_6))
	{
		iParam0->f_6 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_7))
	{
		iParam0->f_7 = ITEMSET::CREATE_ITEMSET(true);
	}
	__LIB_5__::func_425(*iParam0, iParam0->f_5, iParam0->f_6, iParam0->f_7);
	if (__LIB_0__::func_86(__LIB_5__::func_601(iParam0)))
	{
		vVar0 = { __LIB_4__::func_681(*iParam0) };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
		{
			StringCopy(&(iParam0->f_428.f_440), "cutscene@", 32);
			StringConCat(&(iParam0->f_428.f_440), &vVar0, 32);
			vVar3 = { __LIB_5__::func_207(&(iParam0->f_428)) };
			if (!__LIB_0__::func_86(vVar3))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, __LIB_1__::func_469(*iParam0), true) >= 10f)
				{
					__LIB_9__::func_108(iParam0, __LIB_1__::func_469(*iParam0));
				}
				else
				{
					__LIB_9__::func_108(iParam0, vVar3);
				}
			}
			else
			{
				return false;
			}
		}
	}
	if (!func_128(iParam0))
	{
		return false;
	}
	iParam0->f_55.f_1 = 67108863;
	iParam0->f_55 = 2;
	iParam0->f_55 = 1;
	__LIB_5__::func_531(iParam0);
	__LIB_6__::func_922(iParam0);
	__LIB_5__::func_224(iParam0);
	__LIB_5__::func_609(iParam0, Global_35, 0, 0, 0, 1);
	__LIB_5__::func_604(iParam0);
	__LIB_5__::func_182(iParam0);
	return true;
}

bool func_28(int iParam0)
{
	int iVar0;
	iVar0 = 1;
	if (!__LIB_9__::func_169(iParam0))
	{
		iVar0 = 0;
	}
	if (!func_135(iParam0, 0))
	{
		iVar0 = 0;
	}
	if (!__LIB_2__::func_27(iParam0, 1073741824 /* Float: 2f */) && !__LIB_5__::func_347(*iParam0, 0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_29(int iParam0)
{
	func_137();
	if (!func_138())
	{
		return false;
	}
	func_139();
	__LIB_6__::func_888(16);
	__LIB_1__::func_197(16, 1, 1, 1, 0);
	func_142(&(iLocal_120[1]), uLocal_175);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_169))
	{
		iLocal_169 = OBJECT::CREATE_OBJECT(joaat("P_CRATETNT02X"), func_143(0, 10), true, true, false, false, true);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_169, false);
		ENTITY::SET_ENTITY_COLLISION(iLocal_169, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_169, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_170))
	{
		iLocal_170 = OBJECT::CREATE_OBJECT(joaat("P_CS_BEDROLLCLSD01X"), func_143(0, 11), true, true, false, false, true);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_170, false);
		ENTITY::SET_ENTITY_COLLISION(iLocal_170, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_170, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_171))
	{
		iLocal_171 = OBJECT::CREATE_OBJECT(joaat("P_KNIFE02X"), func_143(0, 12), true, true, false, false, true);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_171, false);
		ENTITY::SET_ENTITY_COLLISION(iLocal_171, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_171, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_172))
	{
		iLocal_172 = OBJECT::CREATE_OBJECT(joaat("P_WOODWHITTLE01X"), func_143(0, 13), true, true, false, false, true);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_172, false);
		ENTITY::SET_ENTITY_COLLISION(iLocal_172, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_172, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_173))
	{
		iLocal_173 = OBJECT::CREATE_OBJECT(joaat("P_CRATE15X"), func_143(0, 14), true, true, false, false, true);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_173, false);
		ENTITY::SET_ENTITY_COLLISION(iLocal_173, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_173, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_174))
	{
		iLocal_174 = OBJECT::CREATE_OBJECT(joaat("P_POCKETMIRROR01X"), func_143(0, 14), true, true, false, false, true);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_174, false);
		ENTITY::SET_ENTITY_COLLISION(iLocal_174, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_174, true);
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_169, true);
	GRAPHICS::REMOVE_PARTICLE_FX_FROM_ENTITY(iLocal_169);
	__LIB_5__::func_609(iParam0, Global_35, 0, 0, 0, 1);
	func_145(iParam0, 6, 7, func_144(0, 6));
	func_145(iParam0, 1, 1, func_144(0, 1));
	func_145(iParam0, 2, 3, func_144(0, 2));
	func_145(iParam0, 3, 6, func_144(0, 3));
	func_145(iParam0, 4, 13, func_144(0, 4));
	__LIB_0__::func_928(&(iParam0->f_958.f_1771), Global_35, "ARTHUR", 0);
	__LIB_0__::func_928(&(iParam0->f_958.f_1771), uLocal_156[0], "DUTCH", 0);
	__LIB_0__::func_928(&(iParam0->f_958.f_1771), uLocal_156[5], "HOSEA", 0);
	func_147(iParam0, 0, 1, func_144(0, 7));
	func_147(iParam0, 1, 0, func_144(0, 9));
	func_147(iParam0, 2, 6, func_144(0, 8));
	__LIB_5__::func_609(iParam0, iLocal_164[0], "Horse_01", 0, 0, 1);
	__LIB_5__::func_609(iParam0, iLocal_164[2], "Horse_01^1", 0, 0, 1);
	__LIB_5__::func_609(iParam0, iLocal_164[1], "Horse_01^3", 0, 0, 1);
	__LIB_5__::func_532(iParam0, iLocal_169, "p_cratetnt02x", 1, 0, 1, 0);
	__LIB_5__::func_532(iParam0, iLocal_170, "p_cs_bedRollClsd01x", 1, 0, 1, 0);
	__LIB_5__::func_532(iParam0, iLocal_171, "p_knife02x", 0, 0, 1, 0);
	__LIB_5__::func_532(iParam0, iLocal_172, "p_woodWhittle01x", 0, 0, 1, 0);
	__LIB_5__::func_532(iParam0, iLocal_173, "p_crate15x", 0, 0, 1, 0);
	__LIB_5__::func_532(iParam0, iLocal_174, "p_pocketMirror01x", 0, 0, 1, 0);
	func_149();
	if (!func_137())
	{
		return false;
	}
	else if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_115[0], false))
	{
		func_150("pl_base");
	}
	uLocal_176 = PED::_0x4C39C95AE5DB1329(VOLUME::_CREATE_VOLUME_BOX(1867.659f, -1837.936f, 41.5621f, 0f, 0f, 51.99649f, 21.35515f, 17.21423f, 6.386811f), false, 15);
	return true;
}

int func_36(int iParam0)
{
	func_158();
	__LIB_2__::func_145(iLocal_168, 0);
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_115[0], false))
	{
		ANIMSCENE::ABORT_ANIM_SCENE(iLocal_115[0], true);
	}
	func_160(0);
	__LIB_13__::func_309(iLocal_164[1], "NBD1_INTRO_DUTCHSHORSE", 8);
	__LIB_13__::func_309(iLocal_164[2], "NBD1_INTRO_MICAHSHORSE", 8);
	__LIB_13__::func_309(iLocal_164[0], "NBD1_INTRO_JOHNSHORSE", 8);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_176, false);
	return 1;
}

void func_38(int iParam0)
{
	vector3 vVar0;
	struct<4> Var3;
	vVar0 = { __LIB_4__::func_681(*iParam0) };
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_428.f_444))
	{
	}
	else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_428.f_444, true, false))
	{
		Global_43800 = iParam0->f_428.f_444;
	}
	else
	{
		if (__LIB_4__::func_725(&(iParam0->f_958), 8))
		{
			if (!__LIB_4__::func_725(&(iParam0->f_958), 131072))
			{
				if (!__LIB_4__::func_725(&(iParam0->f_958), 32768))
				{
					if (!__LIB_2__::func_27(iParam0, 8))
					{
						__LIB_5__::func_395(&(iParam0->f_428), &(iParam0->f_958));
					}
				}
			}
		}
		MemCopy(&Var3, {vVar0}, 4);
		func_13(Var3, &(iParam0->f_428));
	}
}

bool func_41(int iParam0)
{
	func_166(iParam0);
	if (iLocal_117 >= 4)
	{
		func_167();
		return true;
	}
	return false;
}

void func_43(int iParam0)
{
	__LIB_0__::func_11(iParam0);
	func_166(iParam0);
}

bool func_44(int iParam0)
{
	if (func_166(iParam0))
	{
		return true;
	}
	return false;
}

bool func_53(int iParam0)
{
	__LIB_6__::func_815(&iLocal_38, uLocal_156[0]);
	__LIB_2__::func_145(iLocal_168, 0);
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_115[0], false))
	{
		ANIMSCENE::ABORT_ANIM_SCENE(iLocal_115[0], true);
	}
	func_160(0);
	func_172();
	func_173();
	func_174();
	func_175();
	return true;
}

void func_94(var uParam0)
{
	vector3 vVar0;
	if (!__LIB_0__::func_84(uParam0, 4))
	{
		if (__LIB_0__::func_1(uParam0->f_500, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { __LIB_4__::func_748(uParam0) };
		if (!__LIB_0__::func_1(uParam0->f_500, 524288))
		{
			func_241(&(uParam0->f_512));
		}
		func_242(&(uParam0->f_500), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_4__::func_749(uParam0, 0f, 0f, 0f);
		func_244(uParam0);
		func_245(uParam0);
		__LIB_5__::func_137(uParam0, 0f, 0f, 0f, 0, 0);
		__LIB_5__::func_189(uParam0);
		__LIB_0__::func_88(uParam0, 4);
		__LIB_0__::func_106(uParam0, 0);
		__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_513)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_513));
		}
	}
}

void func_102(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		func_104(&(uParam0->f_501), uParam0->f_512);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_5__::func_190(uParam0);
	__LIB_1__::func_747(uParam0, 1);
	__LIB_5__::func_186(uParam0);
	__LIB_4__::func_750(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_4__::func_784(uParam0, 4);
	__LIB_5__::func_187(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_4__::func_744(uParam0);
	__LIB_0__::func_37(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_444) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_444))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_444);
	}
	__LIB_4__::func_797(!__LIB_0__::func_1(uParam0->f_501, 128));
	if (!__LIB_0__::func_1(uParam0->f_501, 128))
	{
		__LIB_3__::func_120();
	}
}

void func_104(var uParam0, int iParam1)
{
	if (Global_1935630.f_12)
	{
		return;
	}
	__LIB_0__::func_732(2000);
	Global_16 = 0;
	__LIB_0__::func_109();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, __LIB_0__::func_1(*uParam0, 8));
	if (!__LIB_0__::func_1(*uParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (__LIB_0__::func_1(*uParam0, 2) || __LIB_0__::func_1(*uParam0, 4))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_0__::func_1(*uParam0, 16))
	{
		__LIB_0__::func_733(1);
	}
	if (__LIB_0__::func_1(*uParam0, 32))
	{
		func_259(Global_35, joaat("CLOTHING_ITEM_NECKWEAR_NONE"), 0, 1742327865, 0, 1, 0, 0, 1, 0);
		__LIB_4__::func_799(joaat("KIT_BANDANA"), 0);
	}
	__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489.f_16 & 4194304 != 0)
	{
		Global_1359489.f_16 = (Global_1359489.f_16 - Global_1359489.f_16 & 4194304);
	}
	*uParam0 = 0;
}

bool func_128(int iParam0)
{
	int iVar0;
	char cVar1[64];
	char cVar9[64];
	iVar0 = 1;
	__LIB_5__::func_410(iParam0, 2);
	func_279(joaat("P_CRATETNT02X"));
	func_279(joaat("P_CS_BEDROLLCLSD01X"));
	func_279(joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"));
	func_279(joaat("P_KNIFE02X"));
	func_279(joaat("P_WOODWHITTLE01X"));
	func_279(joaat("P_CRATE15X"));
	func_279(joaat("P_POCKETMIRROR01X"));
	func_279(joaat("P_MAP03X"));
	func_280();
	__LIB_9__::func_73(iParam0, 125f);
	__LIB_9__::func_74(iParam0, 150f);
	__LIB_5__::func_410(iParam0, 16);
	if (!func_283(iParam0, 1))
	{
		return false;
	}
	if (!func_284(iParam0))
	{
		return false;
	}
	if (func_285(1, 0))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_164[1], false);
		ENTITY::SET_ENTITY_COLLISION(iLocal_164[1], false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_164[1], true);
		PED::_0xCAC43D060099EA72(iLocal_164[1]);
	}
	else
	{
		return false;
	}
	if (func_285(0, 1))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_164[0], false);
		ENTITY::SET_ENTITY_COLLISION(iLocal_164[0], false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_164[0], true);
		PED::_0xCAC43D060099EA72(iLocal_164[0]);
	}
	else
	{
		return false;
	}
	if (func_285(2, 6))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_164[2], false);
		ENTITY::SET_ENTITY_COLLISION(iLocal_164[2], false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_164[2], true);
		PED::_0xCAC43D060099EA72(iLocal_164[2]);
	}
	else
	{
		return false;
	}
	if (CLOCK::GET_CLOCK_HOURS() > 20 || CLOCK::GET_CLOCK_HOURS() < 8)
	{
		StringCopy(&cVar9, "1-Day-Normal", 64);
		StringCopy(&cVar1, "2-Night-Normal", 64);
		__LIB_9__::func_965(iParam0, "2-Night-Multi1", 0);
		__LIB_9__::func_965(iParam0, "2-Night-Multi2", 0);
		__LIB_9__::func_965(iParam0, "2-Night-Multi3", 0);
	}
	else
	{
		StringCopy(&cVar1, "1-Day-Normal", 64);
		StringCopy(&cVar9, "2-Night-Normal", 64);
		__LIB_9__::func_965(iParam0, "1-Day-Multi1", 0);
		__LIB_9__::func_965(iParam0, "1-Day-Multi2", 0);
		__LIB_9__::func_965(iParam0, "1-Day-Multi3", 0);
	}
	__LIB_9__::func_109(iParam0, cVar1);
	__LIB_9__::func_964(iParam0, cVar9);
	__LIB_5__::func_410(iParam0, 8);
	__LIB_9__::func_73(iParam0, 100f);
	__LIB_9__::func_74(iParam0, 150f);
	func_160(1);
	if (!__LIB_0__::func_27(iLocal_130, 16))
	{
		__LIB_0__::func_7(&uLocal_175, __LIB_0__::func_771(0));
		__LIB_0__::func_7(&uLocal_175, __LIB_0__::func_771(5));
		__LIB_1__::func_683(&iLocal_130, 16);
	}
	if (((((((((((((((((!ENTITY::IS_ENTITY_DEAD(uLocal_156[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_156[1])) && !ENTITY::IS_ENTITY_DEAD(uLocal_156[2])) && !ENTITY::IS_ENTITY_DEAD(uLocal_156[3])) && !ENTITY::IS_ENTITY_DEAD(uLocal_156[4])) && !ENTITY::IS_ENTITY_DEAD(uLocal_156[5])) && !ENTITY::IS_ENTITY_DEAD(uLocal_156[6])) && !ENTITY::IS_ENTITY_DEAD(iLocal_164[1])) && !ENTITY::IS_ENTITY_DEAD(iLocal_164[0])) && !ENTITY::IS_ENTITY_DEAD(iLocal_164[2])) && STREAMING::HAS_MODEL_LOADED(joaat("P_CRATETNT02X"))) && STREAMING::HAS_MODEL_LOADED(joaat("P_CS_BEDROLLCLSD01X"))) && STREAMING::HAS_MODEL_LOADED(joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"))) && STREAMING::HAS_MODEL_LOADED(joaat("P_KNIFE02X"))) && STREAMING::HAS_MODEL_LOADED(joaat("P_WOODWHITTLE01X"))) && STREAMING::HAS_MODEL_LOADED(joaat("P_CRATE15X"))) && STREAMING::HAS_MODEL_LOADED(joaat("P_POCKETMIRROR01X"))) && STREAMING::HAS_MODEL_LOADED(joaat("P_MAP03X")))
	{
		return iVar0;
	}
	return false;
}

bool func_135(int iParam0, bool bParam1)
{
	int iVar0;
	if (__LIB_2__::func_27(iParam0, 2))
	{
		return true;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return true;
	}
	iVar0 = __LIB_5__::func_191(*iParam0);
	if (!__LIB_0__::func_31(iVar0))
	{
		return true;
	}
	iParam0->f_4 = ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_271(iVar0));
	return func_299(iParam0, iVar0, &(iParam0->f_3), bParam1, 1, iParam0->f_2903, iParam0->f_2903.f_1, iParam0->f_2903.f_2, 0, 0, 0, 0, 0);
}

bool func_137()
{
	bool bVar0;
	bVar0 = true;
	switch (iLocal_114)
	{
		case 0:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_115[0]))
			{
				iLocal_115[0] = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@NBD1@LEADIN@INT@Leadin_ILO", 0, "pl_base", false, true);
				bVar0 = false;
			}
			else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_115[0], true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(iLocal_115[0], true))
				{
					ANIMSCENE::LOAD_ANIM_SCENE(iLocal_115[0]);
				}
				bVar0 = false;
			}
			if (!__LIB_14__::func_366(iLocal_115[0], "pl_base"))
			{
				bVar0 = false;
			}
			if (!__LIB_14__::func_366(iLocal_115[0], "pl_dialogue_1"))
			{
				bVar0 = false;
			}
			if (!__LIB_14__::func_366(iLocal_115[0], "pl_leadin_main"))
			{
				bVar0 = false;
			}
			if (!__LIB_14__::func_366(iLocal_115[0], "pl_leadin_rear"))
			{
				bVar0 = false;
			}
			if (!__LIB_14__::func_366(iLocal_115[0], "pl_leadin_side"))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				iLocal_114 = 1;
			}
			break;
		case 1:
			if (bVar0)
			{
				iLocal_114 = 2;
			}
			break;
		case 2:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_115[0], "dutch", uLocal_156[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_115[0], "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_115[0], "HoseaMatthews", uLocal_156[5], 0);
			iLocal_114 = 3;
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_138()
{
	if (!__LIB_0__::func_27(iLocal_130, 1))
	{
		if (!MISC::IS_BIT_SET(iLocal_99, 1))
		{
			__LIB_1__::func_288(1, 1018353621, 1);
			__LIB_1__::func_558(1, uLocal_156[1], 1018353621, 1);
			__LIB_1__::func_683(&iLocal_130, 1);
			MISC::SET_BIT(&iLocal_99, 1);
		}
	}
	if (!__LIB_0__::func_27(iLocal_130, 1))
	{
		if (!MISC::IS_BIT_SET(iLocal_99, 2))
		{
			__LIB_1__::func_288(3, 1018353621, 1);
			__LIB_1__::func_558(3, uLocal_156[2], 1018353621, 1);
			__LIB_1__::func_683(&iLocal_130, 1);
			MISC::SET_BIT(&iLocal_99, 2);
		}
	}
	if (!__LIB_0__::func_27(iLocal_130, 1))
	{
		if (!MISC::IS_BIT_SET(iLocal_99, 3))
		{
			__LIB_1__::func_288(6, 1018353621, 1);
			__LIB_1__::func_558(6, uLocal_156[3], 1018353621, 1);
			__LIB_1__::func_683(&iLocal_130, 1);
			MISC::SET_BIT(&iLocal_99, 3);
		}
	}
	if (!__LIB_0__::func_27(iLocal_130, 1))
	{
		if (!MISC::IS_BIT_SET(iLocal_99, 4))
		{
			__LIB_1__::func_288(13, 1018353621, 1);
			__LIB_1__::func_558(13, uLocal_156[4], 1018353621, 1);
			__LIB_1__::func_683(&iLocal_130, 1);
			MISC::SET_BIT(&iLocal_99, 4);
		}
	}
	if (!__LIB_0__::func_27(iLocal_130, 1))
	{
		if (!MISC::IS_BIT_SET(iLocal_99, 6))
		{
			__LIB_1__::func_288(7, 1018353621, 1);
			__LIB_1__::func_558(7, uLocal_156[6], 1018353621, 1);
			__LIB_1__::func_683(&iLocal_130, 1);
			MISC::SET_BIT(&iLocal_99, 6);
		}
	}
	if ((((MISC::IS_BIT_SET(iLocal_99, 1) && MISC::IS_BIT_SET(iLocal_99, 2)) && MISC::IS_BIT_SET(iLocal_99, 3)) && MISC::IS_BIT_SET(iLocal_99, 4)) && MISC::IS_BIT_SET(iLocal_99, 6))
	{
		return true;
	}
	__LIB_1__::func_681(&iLocal_130, 1);
	return false;
}

void func_139()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(uLocal_118[iVar0]))
		{
			switch (iVar0)
			{
				case 0:
					uLocal_118[iVar0] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 1863.227f, -1830.85f, 42.78195f, 0f, 0f, 0f, 1.733567f, 1.584564f, 2.398176f);
					break;
			}
		}
		iVar0++;
	}
}

void func_142(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_1__::func_482(iVar0, &uParam1))
		{
		}
		else if (__LIB_0__::func_903(iVar0) && !__LIB_0__::func_699(iVar0))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(__LIB_0__::func_271(iVar0), *uParam0, true, 0))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(__LIB_0__::func_271(iVar0), false, true);
				PERSCHAR::_0xD4B614179BCD0654(__LIB_0__::func_748(iVar0, 0));
				PERSCHAR::_0x631CD2D77FDC0316(__LIB_0__::func_748(iVar0, 0));
			}
		}
		iVar0++;
	}
}

Vector3 func_143(int iParam0, int iParam1)
{
	return func_314(iParam0, iParam1);
}

struct<4> func_144(int iParam0, int iParam1)
{
	return func_315(iParam0, iParam1);
}

void func_145(int iParam0, int iParam1, int iParam2, struct<4> Param3)
{
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_156[iParam1]))
	{
		TASK::TASK_STAND_STILL(uLocal_156[iParam1], -1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_156[iParam1], true);
		WEAPON::SET_CURRENT_PED_WEAPON(uLocal_156[iParam1], joaat("WEAPON_UNARMED"), true, 0, false, false);
		func_316(uLocal_156[iParam1], Param3, Param3.f_3, 2, 1073741824 /* Float: 2f */);
		__LIB_5__::func_609(iParam0, uLocal_156[iParam1], 0, 0, 0, 1);
		__LIB_5__::func_183(iParam0, uLocal_156[iParam1], 0);
	}
}

void func_147(int iParam0, int iParam1, int iParam2, struct<4> Param3)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_164[iParam1]))
	{
		TASK::TASK_STAND_STILL(iLocal_164[iParam1], -1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_164[iParam1], true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_164[iParam1], 48, true);
		func_316(iLocal_164[iParam1], Param3, Param3.f_3, 2, 1073741824 /* Float: 2f */);
		__LIB_5__::func_183(iParam0, iLocal_164[iParam1], 0);
	}
}

void func_149()
{
	int iVar0;
	func_322();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!Local_131[iVar0 /*6*/].f_5)
		{
			ENTITY::CREATE_MODEL_HIDE(Local_131[iVar0 /*6*/], Local_131[iVar0 /*6*/].f_3, Local_131[iVar0 /*6*/].f_4, false);
			Local_131[iVar0 /*6*/].f_5 = 1;
		}
		iVar0++;
	}
}

void func_150(char* sParam0)
{
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_115[0], sParam0, true);
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_115[0], false))
	{
		ANIMSCENE::START_ANIM_SCENE(iLocal_115[0]);
	}
}

void func_158()
{
	iLocal_177 = 0;
	while (iLocal_177 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_156[iLocal_177]))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(uLocal_156[iLocal_177]))
			{
				ENTITY::SET_ENTITY_VISIBLE(uLocal_156[iLocal_177], true);
				ENTITY::SET_ENTITY_COLLISION(uLocal_156[iLocal_177], true, false);
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_156[iLocal_177], false);
			}
		}
		iLocal_177++;
	}
	iLocal_177 = 0;
	while (iLocal_177 <= 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_164[iLocal_177]))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_164[iLocal_177]))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_164[iLocal_177], true);
				ENTITY::SET_ENTITY_COLLISION(iLocal_164[iLocal_177], true, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_164[iLocal_177], false);
				PED::_0xC9151483CC06A414(iLocal_164[iLocal_177]);
			}
		}
		iLocal_177++;
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_169))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_169, true);
		ENTITY::SET_ENTITY_COLLISION(iLocal_169, true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_169, false);
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_170))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_170, true);
		ENTITY::SET_ENTITY_COLLISION(iLocal_170, true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_170, false);
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_171))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_171, true);
		ENTITY::SET_ENTITY_COLLISION(iLocal_171, true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_171, false);
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_172))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_172, true);
		ENTITY::SET_ENTITY_COLLISION(iLocal_172, true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_172, false);
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_173))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_173, true);
		ENTITY::SET_ENTITY_COLLISION(iLocal_173, true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_173, false);
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_174))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_174, true);
		ENTITY::SET_ENTITY_COLLISION(iLocal_174, true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_174, false);
	}
}

void func_160(bool bParam0)
{
	if (bParam0)
	{
		__LIB_0__::func_68(560870147, 0, 0);
		__LIB_0__::func_68(867489680, 0, 0);
		OBJECT::_0x7F458B543006C8FE(560870147, 8);
		OBJECT::_0x7F458B543006C8FE(867489680, 8);
		OBJECT::_0x7F458B543006C8FE(560870147, 2);
		OBJECT::_0x7F458B543006C8FE(867489680, 2);
	}
	else
	{
		OBJECT::_0x0C0A373D181BF900(560870147);
		OBJECT::_0x0C0A373D181BF900(867489680);
	}
}

bool func_166(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char cVar3[64];
	int iVar11;
	char cVar12[64];
	bVar1 = true;
	func_342();
	__LIB_14__::func_415(&(uLocal_156[0]), &iLocal_38, &Local_20, 4f, -1082130432 /* Float: -1f */, 0);
	while (bVar1)
	{
		bVar1 = false;
		switch (iLocal_117)
		{
			case 0:
				__LIB_3__::func_157(&(Local_20[0 /*17*/]), "INTERACT_GREET", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_6__::func_736(&iLocal_38, &Local_20, 0, __LIB_9__::func_835(37), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				iLocal_117 = 1;
				break;
			case 1:
				if (__LIB_0__::func_665(Global_35, uLocal_156[0], 1, 1) < 10f)
				{
					iLocal_117 = 2;
				}
				break;
			case 2:
				func_150("pl_dialogue_1");
				iLocal_117 = 3;
				break;
			case 3:
				if ((iLocal_125[2] || iLocal_125[3]) && __LIB_1__::func_205(Global_35, iLocal_120[0], 1, 0))
				{
					__LIB_2__::func_480(&Local_20, 1, 1, 1, 0);
					__LIB_1__::func_480(&(uLocal_156[0]));
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_168))
					{
						iLocal_168 = __LIB_8__::func_915(func_143(0, 7), func_351(0, 7), 1, 1, 0, 1, 1);
						__LIB_5__::func_609(iParam0, iLocal_168, "Horse_01^4", 0, 0, 1);
					}
					iLocal_117 = 7;
				}
				if ((ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_115[0], false) && ANIMSCENE::_0x8D81E7824B7753F7(iLocal_115[0], "s_base", 1)) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_120[0], true, 0))
				{
					__LIB_2__::func_480(&Local_20, 1, 1, 1, 0);
					__LIB_1__::func_480(&(uLocal_156[0]));
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_168))
					{
						iLocal_168 = __LIB_8__::func_915(func_143(0, 7), func_351(0, 7), 1, 1, 0, 1, 1);
						__LIB_5__::func_609(iParam0, iLocal_168, "Horse_01^4", 0, 0, 1);
					}
					iLocal_117 = 7;
				}
				if (__LIB_1__::func_205(Global_35, iLocal_120[0], 1, 0))
				{
					if (!__LIB_0__::func_27(iLocal_130, 2))
					{
						PED::SET_PED_CONFIG_FLAG(uLocal_156[0], 130, true);
						__LIB_1__::func_683(&iLocal_130, 2);
					}
					iVar0 = func_353(&(uLocal_156[0]), &iLocal_38, 4f, &Local_20, 0f, 3, 0, 0, 8209, 0, 0, 2, -1082130432 /* Float: -1f */);
					if (__LIB_0__::func_48(Global_35, uLocal_156[0], 7.5f, 1) && iVar0 != -1)
					{
						__LIB_2__::func_480(&Local_20, 1, 1, 1, 0);
						__LIB_1__::func_480(&(uLocal_156[0]));
						iVar2 = CLOCK::GET_CLOCK_HOURS();
						if (iVar2 > 20 || iVar2 < 8)
						{
							StringCopy(&cVar3, "2-Night-Normal", 64);
							ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_428.f_444, "Bool_Timelapse_ifNight", true, false);
						}
						else
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_428.f_444, "Bool_Timelapse_ifNight", false, false);
							StringCopy(&cVar3, "1-Day-Normal", 64);
						}
						__LIB_9__::func_109(iParam0, cVar3);
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_428.f_444, &cVar3, true);
						__LIB_5__::func_410(iParam0, 8);
						MISC::_0xE98D55C5983F2509(uLocal_156[0]);
						CAM::SET_GAMEPLAY_ENTITY_HINT(uLocal_156[0], 0f, 0f, 0f, true, 2000, 2000, 2000, 0);
						iLocal_117 = 4;
					}
				}
				break;
			case 4:
				vLocal_104[0 /*3*/] = { __LIB_9__::func_81(iLocal_115[0], "ARTHUR", "pl_leadin_main") };
				vLocal_104[1 /*3*/] = { __LIB_9__::func_81(iLocal_115[0], "ARTHUR", "pl_leadin_main") };
				vLocal_104[2 /*3*/] = { __LIB_9__::func_81(iLocal_115[0], "ARTHUR", "pl_leadin_main") };
				iVar11 = 0;
				while (iVar11 <= 1)
				{
					if (__LIB_0__::func_94(Global_35, vLocal_104[iVar11 /*3*/], 1) < __LIB_0__::func_94(Global_35, vLocal_104[iVar11 + 1 /*3*/], 1))
					{
						if (__LIB_0__::func_94(Global_35, vLocal_104[iVar11 /*3*/], 1) < __LIB_0__::func_94(Global_35, vLocal_101, 1))
						{
							iLocal_100 = iVar11;
							vLocal_101 = { vLocal_104[iVar11 /*3*/] };
						}
					}
					else if (__LIB_0__::func_94(Global_35, vLocal_104[iVar11 + 1 /*3*/], 1) < __LIB_0__::func_94(Global_35, vLocal_101, 1))
					{
						iLocal_100 = iVar11 + 1;
						vLocal_101 = { vLocal_104[iVar11 + 1 /*3*/] };
					}
					iVar11++;
				}
				iLocal_117 = 5;
				break;
			case 5:
				if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 242628503, true) != 0 && TASK::GET_SCRIPT_TASK_STATUS(Global_35, 242628503, true) != 1)
				{
					func_150(func_356(iLocal_100));
					iLocal_117 = 6;
				}
				break;
			case 6:
				if ((ANIMSCENE::_0xF94692EB9DC15D74(iLocal_115[0], 0) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_115[0])) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_115[0]) > 0.9f)
				{
					bVar1 = true;
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_168))
					{
						iLocal_168 = __LIB_8__::func_915(func_143(0, 7), func_351(0, 7), 1, 1, 0, 1, 1);
						__LIB_5__::func_609(iParam0, iLocal_168, "Horse_01^4", 0, 0, 1);
					}
					__LIB_6__::func_815(&iLocal_38, uLocal_156[0]);
					iLocal_117 = 8;
				}
				break;
			case 7:
				if (CLOCK::GET_CLOCK_HOURS() > 20 || CLOCK::GET_CLOCK_HOURS() < 8)
				{
					if (iLocal_125[1])
					{
						StringCopy(&cVar12, "2-Night-Multi1", 64);
						__LIB_9__::func_109(iParam0, cVar12);
						__LIB_5__::func_136(&(iParam0->f_428), "2-Night-Multi1");
					}
					else if (iLocal_125[2])
					{
						StringCopy(&cVar12, "2-Night-Multi2", 64);
						__LIB_9__::func_109(iParam0, cVar12);
						__LIB_5__::func_136(&(iParam0->f_428), "2-Night-Multi2");
					}
					else if (iLocal_125[3])
					{
						StringCopy(&cVar12, "2-Night-Multi3", 64);
						__LIB_9__::func_109(iParam0, cVar12);
						__LIB_5__::func_136(&(iParam0->f_428), "2-Night-Multi3");
					}
					else
					{
						StringCopy(&cVar12, "2-Night-Multi1", 64);
						__LIB_9__::func_109(iParam0, cVar12);
						__LIB_5__::func_136(&(iParam0->f_428), "2-Night-Multi1");
					}
				}
				else if (iLocal_125[1])
				{
					StringCopy(&cVar12, "1-Day-Multi1", 64);
					__LIB_9__::func_109(iParam0, cVar12);
					__LIB_5__::func_136(&(iParam0->f_428), "1-Day-Multi1");
				}
				else if (iLocal_125[2])
				{
					StringCopy(&cVar12, "1-Day-Multi2", 64);
					__LIB_9__::func_109(iParam0, cVar12);
					__LIB_5__::func_136(&(iParam0->f_428), "1-Day-Multi2");
				}
				else if (iLocal_125[3])
				{
					StringCopy(&cVar12, "1-Day-Multi3", 64);
					__LIB_9__::func_109(iParam0, cVar12);
					__LIB_5__::func_136(&(iParam0->f_428), "1-Day-Multi3");
				}
				else
				{
					StringCopy(&cVar12, "1-Day-Multi1", 64);
					__LIB_9__::func_109(iParam0, cVar12);
					__LIB_5__::func_136(&(iParam0->f_428), "1-Day-Multi1");
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_168))
				{
					iLocal_168 = __LIB_8__::func_915(func_143(0, 7), func_351(0, 7), 1, 1, 0, 1, 1);
					__LIB_5__::func_609(iParam0, iLocal_168, "Horse_01^4", 0, 0, 1);
				}
				bVar1 = true;
				iLocal_117 = 8;
				break;
			case 8:
				func_142(&(iLocal_120[1]), uLocal_175);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_168))
				{
					iLocal_168 = __LIB_8__::func_915(func_143(0, 7), func_351(0, 7), 1, 1, 0, 1, 1);
					__LIB_5__::func_609(iParam0, iLocal_168, "Horse_01^4", 0, 0, 1);
				}
				else
				{
					return true;
				}
				break;
		}
	}
	return false;
}

void func_167()
{
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GUARMA_APPEARANCE_ACTIVE")))
	{
		return;
	}
	func_357(1, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GUARMA_APPEARANCE_ACTIVE"), true);
}

void func_172()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(uLocal_118[iVar0]))
		{
			VOLUME::_DELETE_VOLUME(uLocal_118[iVar0]);
		}
		iVar0++;
	}
}

void func_173()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_131[iVar0 /*6*/].f_5)
		{
			ENTITY::REMOVE_MODEL_HIDE(Local_131[iVar0 /*6*/], Local_131[iVar0 /*6*/].f_3, Local_131[iVar0 /*6*/].f_4, 1);
			Local_131[iVar0 /*6*/].f_5 = 0;
		}
		iVar0++;
	}
}

void func_174()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_120[iVar0]))
		{
			VOLUME::_DELETE_VOLUME(iLocal_120[iVar0]);
		}
		iVar0++;
	}
}

void func_175()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_172))
	{
		if (ENTITY::_0x88AD6CC10D8D35B2(iLocal_172))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_172, false);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_171))
	{
		if (ENTITY::_0x88AD6CC10D8D35B2(iLocal_171))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_171, false);
		}
	}
}

void func_241(var uParam0)
{
	int iVar0;
	if (__LIB_1__::func_750(&iVar0))
	{
		if (__LIB_0__::func_144(iVar0, 0))
		{
			if (__LIB_0__::func_357(iVar0) == -525676072)
			{
				PED::_SET_PED_COMPONENT_DISABLED(Global_35, joaat("MASKS_LARGE"), 0);
				func_259(Global_35, joaat("CLOTHING_ITEM_HAT_NONE"), 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				PED::_SET_PED_COMPONENT_DISABLED(Global_35, joaat("NECKWEAR"), 0);
			}
			if (!__LIB_0__::func_144(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_242(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_439();
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
			__LIB_5__::func_431(1);
		}
	}
	if (Global_1359489.f_16 & 4194304 == 0)
	{
		Global_1359489.f_16 |= 4194304;
	}
	*uParam0 = 0;
}

void func_244(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_84(uParam0, 2048) && !__LIB_0__::func_86(__LIB_4__::func_760(uParam0)))
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
			func_316(iVar1, __LIB_4__::func_760(uParam0), __LIB_4__::func_761(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_316(iVar3, __LIB_4__::func_760(uParam0), __LIB_4__::func_761(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_245(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_4__::func_760(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_4__::func_760(uParam0) };
			func_316(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

int func_259(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;
	if (iParam3 == -358215195)
	{
		Var0 = { __LIB_2__::func_3(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_470(iParam1, iParam2, __LIB_0__::func_161(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	__LIB_1__::func_467(1, (__LIB_0__::func_2() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != Global_1946804.f_57[__LIB_0__::func_161(iParam3, 1) /*11*/])
			{
				__LIB_1__::func_452(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (__LIB_0__::func_156(32768) && iParam1 != Global_1946804.f_57[__LIB_0__::func_161(iParam3, 1) /*11*/])
			{
				__LIB_0__::func_945();
				__LIB_1__::func_452(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			__LIB_1__::func_452(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = __LIB_0__::func_445(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		__LIB_1__::func_452(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			__LIB_1__::func_36(0);
			__LIB_1__::func_37(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		__LIB_1__::func_452(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_279(int iParam0)
{
	STREAMING::REQUEST_MODEL(iParam0, false);
}

void func_280()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_120[0]))
	{
		iLocal_120[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1892.779f, -1864.998f, 42.63126f, 0.181667f, -0.404499f, -39.17924f, 9.909876f, 7.340049f, 6.030291f, "NBD1_INTRO_VOLUME_LEADIN_TRIGGER");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_120[1]))
	{
		iLocal_120[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1893.331f, -1862.764f, 43.25969f, 0f, 0f, -37.95546f, 3.10302f, 3.585608f, 2.424325f, "NBD1_INTRO_VOLUME_LEADIN_MAIN");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_120[2]))
	{
		iLocal_120[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1890.355f, -1867.565f, 43.25969f, 0f, 0f, -37.95546f, 3.10302f, 2.570805f, 2.424325f, "NBD1_INTRO_VOLUME_LEADIN_SIDE");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_120[3]))
	{
		iLocal_120[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1894.185f, -1867.324f, 43.40997f, 0f, 0f, -37.95546f, 3.10302f, 3.289938f, 2.926679f, "NBD1_INTRO_VOLUME_LEADIN_REAR");
	}
}

bool func_283(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 1;
	if (func_494(iParam0, 0, 0, func_144(0, 0)))
	{
	}
	else
	{
		iVar0 = 0;
	}
	if (func_494(iParam0, 1, 1, func_144(0, 1)))
	{
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_156[1]))
			{
				ENTITY::SET_ENTITY_VISIBLE(uLocal_156[1], false);
				ENTITY::SET_ENTITY_COLLISION(uLocal_156[1], false, false);
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_156[1], true);
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	if (func_494(iParam0, 2, 3, func_144(0, 2)))
	{
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_156[2]))
			{
				ENTITY::SET_ENTITY_VISIBLE(uLocal_156[2], false);
				ENTITY::SET_ENTITY_COLLISION(uLocal_156[2], false, false);
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_156[2], true);
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	if (func_494(iParam0, 3, 6, func_144(0, 3)))
	{
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_156[3]))
			{
				ENTITY::SET_ENTITY_VISIBLE(uLocal_156[3], false);
				ENTITY::SET_ENTITY_COLLISION(uLocal_156[3], false, false);
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_156[3], true);
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	if (func_494(iParam0, 4, 13, func_144(0, 4)))
	{
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_156[4]))
			{
				ENTITY::SET_ENTITY_VISIBLE(uLocal_156[4], false);
				ENTITY::SET_ENTITY_COLLISION(uLocal_156[4], false, false);
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_156[4], true);
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	if (func_494(iParam0, 5, 5, func_144(0, 5)))
	{
	}
	else
	{
		iVar0 = 0;
	}
	if (func_494(iParam0, 6, 7, func_144(0, 6)))
	{
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_156[6]))
			{
				ENTITY::SET_ENTITY_VISIBLE(uLocal_156[6], false);
				ENTITY::SET_ENTITY_COLLISION(uLocal_156[6], false, false);
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_156[6], true);
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_284(int iParam0)
{
	int iVar0;
	iVar0 = 1;
	if (func_494(iParam0, 5, 5, func_144(0, 5)))
	{
		if (!__LIB_0__::func_27(iLocal_130, 8))
		{
			func_145(iParam0, 5, 5, func_144(0, 5));
			__LIB_1__::func_683(&iLocal_130, 8);
		}
	}
	else
	{
		iVar0 = 0;
	}
	if (func_494(iParam0, 0, 0, func_144(0, 0)))
	{
		if (!__LIB_0__::func_27(iLocal_130, 4))
		{
			func_145(iParam0, 0, 0, func_144(0, 0));
			__LIB_1__::func_683(&iLocal_130, 4);
		}
	}
	else
	{
		iVar0 = 0;
	}
	if (func_137())
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_115[0], false))
		{
			func_150("pl_base");
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_285(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_164[iParam0]))
	{
		return true;
	}
	iLocal_164[iParam0] = func_495(iParam1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return false;
}

bool func_299(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12)
{
	vector3 vVar0;
	if (!__LIB_0__::func_31(iParam1))
	{
		return false;
	}
	if (__LIB_4__::func_767(iParam0, *uParam2))
	{
		if (*uParam2 != __LIB_0__::func_167(iParam1))
		{
		}
		return true;
	}
	vVar0 = { iParam5, iParam6, iParam7 };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { __LIB_1__::func_469(*iParam0) };
	}
	if (!__LIB_0__::func_287(iParam1, 28, 1))
	{
		__LIB_0__::func_288(iParam1, 28, 1);
	}
	*uParam2 = func_514(iParam1, 1, 0, vVar0.x, vVar0.y, vVar0.z, fParam8, bParam4, 1, bParam11, 0, 0, 0, iParam9, 1, bParam12, 0, 0, 1, 1, bParam10, 0, 1, 0, 1);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam2))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(*uParam2))
		{
			return false;
		}
		__LIB_4__::func_766(iParam0, *uParam2);
		__LIB_4__::func_768(iParam0, *uParam2);
		__LIB_4__::func_787(*uParam2, bParam3, bParam4, 0);
		if (bParam4)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam2, true);
			if (!__LIB_0__::func_163(*uParam2, -982327190))
			{
				TASK::TASK_STAND_STILL(*uParam2, -1);
			}
		}
		__LIB_5__::func_532(iParam0, *uParam2, 0, 0, 0, 1, 0);
		__LIB_1__::func_296(iParam1, 0, 0, 1);
		__LIB_4__::func_703(iParam1);
		return true;
	}
	return false;
}

Vector3 func_314(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1890.76f, -1864.261f, 42.1955f;
				case 1:
					return 1843.524f, -1821.608f, 43.1775f;
				case 2:
					return 1855.07f, -1825.64f, 43.0245f;
				case 3:
					return 1851.077f, -1822.826f, 43.0589f;
				case 4:
					return 1856.069f, -1826.394f, 42.9925f;
				case 5:
					return 1891.147f, -1865.584f, 42.2996f;
				case 6:
					return 1854.353f, -1825.407f, 43.2787f;
				case 7:
					return 1851.255f, -1819.71f, 43.2017f;
				case 8:
					return 1850.508f, -1820.778f, 42.9791f;
				case 9:
					return 1850.064f, -1822.056f, 43.1984f;
				case 10:
					return 1852.08f, -1835.509f, 42.771f;
				case 11:
					return 1850.382f, -1834.607f, 42.8744f;
				case 12:
					return 1851.164f, -1823.054f, 42.6404f;
				case 13:
					return 1851.174f, -1822.866f, 43.1404f;
				case 14:
					return 1851.166f, -1822.796f, 43.1404f;
				case 15:
					return 1891.987f, -1864.457f, 42.9913f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

struct<4> func_315(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_314(iParam0, iParam1) };
	Var0.f_3 = func_531(iParam0, iParam1);
	return Var0;
}

void func_316(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_316(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_316(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_322()
{
	Local_131[0 /*6*/] = { 1891.484f, -1864.169f, 42.9226f };
	Local_131[0 /*6*/].f_3 = 1f;
	Local_131[0 /*6*/].f_4 = joaat("P_BOTTLEWINE01X");
	Local_131[1 /*6*/] = { 1891.634f, -1864.218f, 42.9631f };
	Local_131[1 /*6*/].f_3 = 1f;
	Local_131[1 /*6*/].f_4 = joaat("P_BOTTLEWINE01X");
	Local_131[2 /*6*/] = { 1891.453f, -1864.292f, 42.9607f };
	Local_131[2 /*6*/].f_3 = 1f;
	Local_131[2 /*6*/].f_4 = joaat("P_BOILERCAMP01X");
	Local_131[3 /*6*/] = { 1891.489f, -1864.653f, 42.9249f };
	Local_131[3 /*6*/].f_3 = 1f;
	Local_131[3 /*6*/].f_4 = joaat("P_STEWPLATE02X");
}

void func_342()
{
	if (__LIB_1__::func_205(Global_35, iLocal_120[1], 1, 0))
	{
		iLocal_125[1] = 1;
		iLocal_125[2] = 0;
		iLocal_125[3] = 0;
	}
	if (__LIB_1__::func_205(Global_35, iLocal_120[2], 1, 0))
	{
		iLocal_125[2] = 1;
		iLocal_125[1] = 0;
		iLocal_125[3] = 0;
	}
	if (__LIB_1__::func_205(Global_35, iLocal_120[3], 1, 0))
	{
		iLocal_125[3] = 1;
		iLocal_125[2] = 0;
		iLocal_125[1] = 0;
	}
}

float func_351(int iParam0, int iParam1)
{
	return func_531(iParam0, iParam1);
}

int func_353(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		__LIB_14__::func_415(iParam0, iParam1, uParam3, fParam2, fVar8, sParam7);
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
					if (__LIB_10__::func_545(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_353(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_6__::func_742(iParam1, uParam3);
					if (__LIB_10__::func_481(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_6__::func_834(*iParam0, iParam1, uParam3))
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
					__LIB_4__::func_166(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_10__::func_481(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_8__::func_963(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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
					else if (!(MISC::IS_BIT_SET(*iParam1, 13) || __LIB_3__::func_109(iParam1)))
					{
					}
					else if (!func_580(iParam1))
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
					__LIB_10__::func_481(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
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
			__LIB_6__::func_835(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

char* func_356(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_leadin_main";
		case 1:
			return "pl_leadin_rear";
		case 2:
			return "pl_leadin_side";
	}
	return "pl_leadin_main";
}

void func_357(bool bParam0, bool bParam1)
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (__LIB_0__::func_609(8) && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_26796.f_627.f_1.f_1.f_1[iVar0 /*3*/] = { Global_1946804.f_1497.f_1[iVar0 /*3*/] };
		iVar0++;
	}
	Global_26796.f_627.f_121 = { Global_1946804.f_2657 };
	Global_26796.f_627 = __LIB_0__::func_223(Global_40.f_7729);
	if (bParam0)
	{
		func_586(1);
	}
	__LIB_9__::func_966(8);
}

void func_439()
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
			__LIB_2__::func_231(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_635(6291456, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			__LIB_2__::func_231(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
	}
}

bool func_470(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	__LIB_0__::func_191();
	if (iParam2 == 39)
	{
		Var0 = { __LIB_2__::func_3(iParam0, 1, 0) };
		iParam2 = __LIB_0__::func_161(__LIB_0__::func_709(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (__LIB_0__::func_192(iParam0, 866047851) && __LIB_0__::func_545(&(Global_1946804.f_1378)) >= 2)
	{
		return false;
	}
	if ((__LIB_0__::func_156(32768) && iParam2 == 10) && iParam0 != Global_1946804.f_57[iParam2 /*11*/])
	{
		__LIB_0__::func_968(__LIB_0__::func_158(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	__LIB_1__::func_40(iParam2);
	__LIB_1__::func_41(iParam2, iVar5);
	if (Global_1946804.f_1378.f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && Global_1946804.f_57[iParam2 /*11*/].f_1 > 1)
	{
		__LIB_0__::func_47(&(Global_1946804.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		__LIB_0__::func_47(&(Global_1946804.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	func_655(&(Global_1946804.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946804.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1 = __LIB_0__::func_969(iParam0, iParam2, iParam1, __LIB_0__::func_2() != -1);
	if (bParam4)
	{
		__LIB_1__::func_183(&(Global_1946804.f_1378), 1, 3);
	}
	else
	{
		__LIB_1__::func_183(&(Global_1946804.f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804.f_2589)
		{
			if (Global_1946804.f_2589.f_2[iVar6 /*2*/] >= 0 && Global_1946804.f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804.f_2456[Global_1946804.f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				Global_1946804.f_2456[Global_1946804.f_2589.f_2[iVar6 /*2*/] /*2*/].f_1 = 0;
				__LIB_0__::func_550(__LIB_0__::func_158(Global_1946804.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

bool func_494(int iParam0, int iParam1, int iParam2, struct<4> Param3)
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_156[iParam1]))
	{
		return true;
	}
	if (func_299(iParam0, iParam2, &(uLocal_156[iParam1]), 0, 1, 0, 0, 0, 0, 0, 1, 0, 0))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_156[iParam1], Param3, Param3.f_1, Param3.f_2, Param3.f_3, true, false, true);
	}
	return false;
}

int func_495(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	var uVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar1 = func_671(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, fParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && PED::_0xA0BC8FAED8CFEB3C(iVar1))
		{
			return iVar1;
		}
	}
	else
	{
		return iVar1;
	}
	return 0;
}

int func_514(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
				func_316(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

float func_531(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -377.14f;
				case 1:
					return -208f;
				case 2:
					return 136.26f;
				case 3:
					return 114.64f;
				case 4:
					return 175.99f;
				case 5:
					return 0.23f;
				case 6:
					return -193.1f;
				case 7:
					return 63.37f;
				case 8:
					return 59.72f;
				case 9:
					return 69.5f;
				case 10:
					return 195.8447f;
				case 11:
					return 77.8447f;
				case 12:
					return 154.1838f;
				case 13:
					return 112.1838f;
				case 14:
					return 114.1838f;
				case 15:
					return 74.7372f;
			}
			break;
	}
	return 0f;
}

bool func_580(int* iParam0)
{
	var uVar0;
	bool bVar1;
	if (MISC::IS_BIT_SET(iParam0->f_21, 8) || MISC::IS_BIT_SET(*iParam0, 11))
	{
		return true;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		if (__LIB_1__::func_750(&uVar0))
		{
			__LIB_1__::func_283(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
			if (__LIB_7__::func_687())
			{
			}
		}
		else
		{
			__LIB_1__::func_283(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		bVar1 = __LIB_0__::func_264(&(iParam0->f_37)) >= 1.5f;
		if ((!__LIB_1__::func_750(&uVar0) || __LIB_7__::func_687()) || bVar1)
		{
			if (bVar1)
			{
				func_762();
			}
			MISC::SET_BIT(&(iParam0->f_21), 8);
			return true;
		}
	}
	return false;
}

void func_586(bool bParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (__LIB_0__::func_144(iVar1, 0))
		{
			func_765(iVar1, 0, bParam0);
		}
		Global_1946804.f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804.f_2657.f_20 = 0;
	Global_1946804.f_2657.f_21 = 0;
	Global_1946804.f_2657.f_22 = 0;
	Global_1946804.f_2657.f_23 = 0;
	Global_1946804.f_2657.f_24 = 0;
	Global_1946804.f_2657.f_25 = 0;
	Global_1946804.f_2657.f_19 = 0;
	Global_1946804.f_2657.f_26.f_6 = 0;
}

int func_635(int iParam0, int iParam1)
{
	var uVar0;
	return func_783(&uVar0, iParam0, iParam1);
}

void func_655(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = 12;
	iVar2 = __LIB_0__::func_357(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (__LIB_0__::func_157(iParam2, 65536) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			__LIB_1__::func_41(iVar1, iVar3);
		}
	}
	if (__LIB_0__::func_451(-1586649372) && __LIB_0__::func_157(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			__LIB_1__::func_41(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == Global_1946804.f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (uParam0->f_1[iVar1 /*3*/] == joaat("CLOTHING_HL_PLAYER_NECKTIE_004_3"))
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
			}
			__LIB_1__::func_184(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			__LIB_1__::func_184(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if (uParam0->f_1[iVar0 /*3*/].f_1 == joaat("BASE") || uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				Jump @1420; //curOff = 525
				__LIB_1__::func_184(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = -1539589426;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = 1334603721;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				Jump @1420; //curOff = 656
				__LIB_1__::func_184(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1420; //curOff = 691
				__LIB_1__::func_184(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				Jump @1420; //curOff = 786
				__LIB_1__::func_184(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1420; //curOff = 807
				if (iParam1 == Global_1946804.f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == __LIB_0__::func_357(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((__LIB_0__::func_218(iParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/]) && -923693316 == __LIB_0__::func_357(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
				}
				Jump @1420; //curOff = 1135
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && __LIB_0__::func_192(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				Jump @1420; //curOff = 1233
				iVar1 = 36;
				if (uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && (__LIB_0__::func_218(Global_1946804.f_1497.f_1[iVar1 /*3*/]) || __LIB_0__::func_192(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
			}
			switch (__LIB_0__::func_357(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == __LIB_0__::func_357(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == __LIB_0__::func_357(uParam0->f_1[iVar1 /*3*/]) || __LIB_0__::func_192(uParam0->f_1[iVar1 /*3*/], 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_671(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
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
				iVar0 = func_807(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, fParam12, bParam7, bParam15, bParam16, iParam17);
			}
			else
			{
				*uParam0 = 1;
				return 0;
			}
		}
		else
		{
			*uParam0 = 1;
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && __LIB_0__::func_272(iVar0, 0))
	{
		*uParam0 = 2;
		Global_1360165[iParam1 /*1157*/].f_70.f_2 = 0;
		__LIB_0__::func_834(iParam1, iVar0);
		__LIB_1__::func_434(iParam1, bParam13, bParam14, 1);
		return iVar0;
	}
	else
	{
		*uParam0 = 0;
		return 0;
	}
	return 0;
}

int func_762()
{
	int iVar0;
	int iVar1;
	if (!__LIB_1__::func_610(&iVar0))
	{
		return 0;
	}
	PED::_0x2208438012482A1A(Global_35, false, false);
	PED::_0xC494C76A34266E82(Global_35, 13);
	iVar1 = __LIB_3__::func_122(iVar0);
	if (iVar1 == -358215195)
	{
		return 0;
	}
	func_895(Global_1946804.f_57[__LIB_0__::func_161(iVar1, 1) /*11*/], 8);
	__LIB_1__::func_452(26, 0, 0, 0, 0);
	return 1;
}

void func_765(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	switch (__LIB_0__::func_357(iParam0))
	{
		case -2061583405:
			bVar0 = func_897(iParam0, &(Global_1946804.f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_897(iParam0, &(Global_1946804.f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_897(iParam0, &(Global_1946804.f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_897(iParam0, &(Global_1946804.f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_897(iParam0, &(Global_1946804.f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_897(iParam0, &(Global_1946804.f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		__LIB_0__::func_460();
	}
	if (bParam1)
	{
		__LIB_0__::func_719(0, 0);
	}
}

int func_783(var uParam0, int iParam1, int iParam2)
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
		return func_783(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_807(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
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
				if (!__LIB_0__::func_851(iParam0) && func_941(iParam0, &uVar4))
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
					return func_942();
				}
				if (bParam2 && !__LIB_0__::func_86(vVar0))
				{
					PERSCHAR::_0x59C7AD6FEA2AC449(iVar3, vVar0);
				}
				else if (bParam2)
				{
					PERSCHAR::_0xD4B614179BCD0654(iVar3);
				}
				if (!__LIB_1__::func_626(iParam0, vVar0, fParam6, iParam10))
				{
					return func_942();
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
				return func_942();
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
				return func_942();
			}
			if (bParam7)
			{
				if (!__LIB_1__::func_411(iParam0, Global_1360165[iParam0 /*1157*/].f_124, 1))
				{
					return func_942();
				}
			}
			if ((bParam2 && !__LIB_0__::func_86(vVar0)) && !__LIB_0__::func_175(vVar0, ENTITY::GET_ENTITY_COORDS(Global_1360165[iParam0 /*1157*/].f_124, true, false), 1056964608 /* Float: 0.5f */, 1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_316(Global_1360165[iParam0 /*1157*/].f_124, vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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
	return func_942();
}

void func_895(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	iVar0 = __LIB_3__::func_122(iParam0);
	iVar1 = __LIB_0__::func_161(iVar0, 1);
	if (iVar1 == 39)
	{
		return;
	}
	if (__LIB_0__::func_779(iParam0) && __LIB_16__::func_385(iParam0))
	{
		iParam1 |= 64;
	}
	if (((iVar0 == 1108822547 && __LIB_0__::func_156(32768)) || Global_1946804.f_1497.f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/]) && iParam0 != Global_1946804.f_1497.f_1[iVar1 /*3*/])
	{
		if (__LIB_0__::func_779(Global_1946804.f_1497.f_1[iVar1 /*3*/]) && __LIB_16__::func_385(Global_1946804.f_1497.f_1[iVar1 /*3*/]))
		{
			iParam1 |= 32;
		}
		if (Global_1946804.f_57[iVar1 /*11*/].f_1 > 1)
		{
			iParam1 |= 16;
		}
		iVar2 = 0;
		switch (__LIB_0__::func_357(iParam0))
		{
			case 81053684:
				if (__LIB_1__::func_549(-525676072, &uVar3))
				{
					iVar2 = __LIB_0__::func_161(__LIB_0__::func_997(-525676072), 1);
					if (iVar2 == 39)
					{
					}
					else
					{
						Global_1946804.f_2377[iVar2 /*2*/] = Global_1946804.f_57[iVar2 /*11*/];
						Jump @434; //curOff = 294
						if (__LIB_0__::func_156(32768))
						{
							__LIB_0__::func_968(__LIB_0__::func_158(iVar1, 1));
						}
						if (__LIB_0__::func_156(32768) || (__LIB_1__::func_549(-2061583405, &iVar4) && !__LIB_16__::func_385(iVar4)))
						{
							PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
						}
						if (__LIB_1__::func_549(81053684, &iVar4))
						{
							iVar2 = __LIB_0__::func_161(__LIB_0__::func_997(81053684), 1);
							if (iVar2 == 39)
							{
							}
							else
							{
								Global_1946804.f_2377[iVar2 /*2*/] = Global_1946804.f_57[iVar2 /*11*/];
							}
							Global_1946804.f_2377[iVar1 /*2*/] = iParam0;
							__LIB_3__::func_16(iVar0, iParam1, 6);
						}
					}
				}
				default:
					break;
		}
	}
}

int func_897(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = iParam0;
	if (!__LIB_3__::func_412(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804.f_2657.f_19 == 1)
	{
		Global_1946804.f_2657.f_19 = 0;
		*uParam1 = 0;
		if (__LIB_0__::func_357(iParam0) != -999503751)
		{
			__LIB_3__::func_701(&(Global_1946804.f_2657.f_26), 0, Global_1946804.f_2657.f_19);
		}
		Global_1946804.f_2657[0] = 0;
		return 1;
	}
	Global_1946804.f_2657.f_19 = (Global_1946804.f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804.f_2657[iVar0] = Global_1946804.f_2657[Global_1946804.f_2657.f_19];
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = 0;
	if (__LIB_0__::func_357(iParam0) != -999503751)
	{
		__LIB_3__::func_701(&(Global_1946804.f_2657.f_26), iVar0, Global_1946804.f_2657.f_19);
	}
	func_1007(iParam0, 1);
	return 1;
}

bool func_941(int iParam0, char* sParam1)
{
	switch (Global_40.f_4283)
	{
		case 0:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "colter/col_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "colter/col_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "colter/col_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "colter/col_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "colter/col_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "colter/col_default_horse_john", 64);
					return true;
				case 9:
					StringCopy(sParam1, "colter/col_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "colter/col_default_horse_micah", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "colter/col_default_horses1", 64);
			return true;
		case 1:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_john", 64);
					return true;
				case 10:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horses1", 64);
					return true;
				case 9:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_sadie", 64);
					return true;
				case 8:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_sean", 64);
					return true;
				case 4:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_uncle", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "horseshoeOverlook/hso_default_horses1", 64);
			return true;
		case 2:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_john", 64);
					return true;
				case 10:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_kieran", 64);
					return true;
				case 9:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_sadie", 64);
					return true;
				case 8:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_sean", 64);
					return true;
				case 4:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_uncle", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "clemensPoint/clm_default_horses1", 64);
			return true;
		case 3:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_john", 64);
					return true;
				case 10:
					StringCopy(sParam1, "shadyBelle/shb_default_horses1", 64);
					return true;
				case 9:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_sadie", 64);
					return true;
				case 4:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_uncle", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "shadyBelle/shb_default_horses1", 64);
			return true;
		case 5:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "lakay/lak_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "lakay/lak_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "lakay/lak_default_horse_dutch", 64);
					return true;
				case 2:
					StringCopy(sParam1, "lakay/lak_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "lakay/lak_default_horse_john", 64);
					return true;
				case 6:
					StringCopy(sParam1, "lakay/lak_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "lakay/lak_default_horse_sadie", 64);
					return true;
				case 4:
					StringCopy(sParam1, "lakay/lak_default_horses1", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "lakay/lak_default_horses1", 64);
			return true;
			Jump @1302; //curOff = 1120
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_dutch", 64);
					return true;
				case 2:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_john", 64);
					return true;
				case 6:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_sadie", 64);
					return true;
				case 4:
					StringCopy(sParam1, "beaverHollow/bvh_default_horses1", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "beaverHollow/bvh_default_horses1", 64);
			return true;
			Jump @1302; //curOff = 1287
			StringCopy(sParam1, "beechersHope/bch_default_horses", 64);
			return true;
			return false;
		}
int func_942()
{
	return -1;
}

int func_1007(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { __LIB_2__::func_3(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x9A113C660AEA3832(__LIB_0__::func_162(0), &Var5, iParam1);
	return 1;
}

