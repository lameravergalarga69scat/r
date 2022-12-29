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
	struct<10> Local_14 = { 0, 0, 0, 4, 0, 0, 0, 0, 0, 9 } ;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33[1] = { 0 };
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	struct<17> Local_50[1];
	int iLocal_68 = 0;
	var uLocal_69 = -1;
	var uLocal_70 = 0;
	var uLocal_71 = -1;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = -1;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 1073741824;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 1;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 1106247680;
	var uLocal_95 = 1067450368;
	var uLocal_96 = 0;
	var uLocal_97 = 1092616192;
	var uLocal_98 = 1112014848;
	var uLocal_99 = 1106247680;
	var uLocal_100 = 1101529088;
	var uLocal_101 = 1101004800;
	var uLocal_102 = 1084227584;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	int iLocal_130 = 0;
	struct<2907> Local_131 = { 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 30, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1084227584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
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
		if (__LIB_5__::func_203(Local_131))
		{
			__LIB_0__::func_8(&Global_1935630, 32768);
		}
		func_3(&Local_131, 1);
	}
	__LIB_5__::func_610(&uScriptParam_0, &Local_131);
	while (!__LIB_2__::func_27(&Local_131, 1))
	{
		if (__LIB_4__::func_721(&Local_131) != 10)
		{
			if ((__LIB_4__::func_721(&Local_131) == 3 || __LIB_4__::func_721(&Local_131) == 4) && (!__LIB_5__::func_132(&Local_131) || __LIB_0__::func_78(&(Local_131.f_958)) > 0))
			{
				__LIB_7__::func_446(&Local_131, __LIB_2__::func_27(&Local_131, 67108864));
				bVar0 = true;
			}
			if ((!bVar0 && __LIB_5__::func_204(&Local_131)) && __LIB_2__::func_27(&Local_131, 65536))
			{
				__LIB_7__::func_446(&Local_131, 1);
			}
		}
		if (__LIB_4__::func_721(&Local_131) >= 3 && __LIB_4__::func_721(&Local_131) <= 7)
		{
			__LIB_5__::func_525(&Local_131);
		}
		if (((((__LIB_4__::func_721(&Local_131) >= 5 && __LIB_4__::func_721(&Local_131) <= 7) && !__LIB_2__::func_27(&Local_131, 4096)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_131.f_428.f_444)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_131.f_428.f_444, false)) && !ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_131.f_428.f_444))
		{
			MemCopy(&Var1, {__LIB_4__::func_681(Local_131)}, 4);
			func_13(Var1, &(Local_131.f_428));
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
		}
		switch (__LIB_4__::func_721(&Local_131))
		{
			case 8:
				if (__LIB_11__::func_653(&Local_131))
				{
					__LIB_5__::func_536(&Local_131);
					__LIB_0__::func_0(&Local_131);
					__LIB_4__::func_722(&Local_131, 0);
				}
				else if (!__LIB_5__::func_204(&Local_131))
				{
					if (!__LIB_0__::func_75(&(Local_131.f_2899)))
					{
						__LIB_1__::func_283(&(Local_131.f_2899), 0);
					}
					if (!__LIB_5__::func_216(&Local_131))
					{
						if (__LIB_0__::func_264(&(Local_131.f_2899)) >= 1f)
						{
							__LIB_1__::func_109(Local_131.f_2889, 2097152);
							__LIB_5__::func_174(&Local_131);
							__LIB_5__::func_608(&Local_131);
							__LIB_4__::func_722(&Local_131, 10);
						}
					}
					else
					{
						if (!__LIB_2__::func_27(&Local_131, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							__LIB_5__::func_410(&Local_131, 536870912);
						}
						__LIB_1__::func_148(&(Local_131.f_2899));
					}
				}
				break;
			case 0:
				if (__LIB_5__::func_204(&Local_131))
				{
					__LIB_0__::func_0(&Local_131);
				}
				if (!__LIB_5__::func_204(&Local_131) || __LIB_2__::func_27(&Local_131, 65536))
				{
					if (func_27(&Local_131))
					{
						__LIB_4__::func_722(&Local_131, 1);
					}
				}
				break;
			case 1:
				if (__LIB_5__::func_204(&Local_131))
				{
					__LIB_0__::func_0(&Local_131);
				}
				if (func_28(&Local_131))
				{
					__LIB_4__::func_722(&Local_131, 2);
				}
				break;
			case 2:
				if (__LIB_5__::func_204(&Local_131))
				{
					__LIB_0__::func_0(&Local_131);
				}
				if (func_29(&Local_131))
				{
					if (!__LIB_5__::func_132(&Local_131) || __LIB_5__::func_204(&Local_131))
					{
						if (!__LIB_0__::func_79(Local_131.f_2889))
						{
							Local_131.f_2889 = __LIB_0__::func_80(__LIB_3__::func_918(Local_131));
						}
						__LIB_1__::func_109(Local_131.f_2889, 4);
						__LIB_5__::func_410(&Local_131, 8192);
					}
					if (__LIB_5__::func_204(&Local_131))
					{
						__LIB_5__::func_175(&Local_131);
						__LIB_4__::func_722(&Local_131, 9);
					}
					else
					{
						__LIB_4__::func_722(&Local_131, 3);
					}
				}
				break;
			case 9:
				if (__LIB_0__::func_0(&Local_131))
				{
					__LIB_0__::func_11(&Local_131);
					__LIB_5__::func_536(&Local_131);
					__LIB_11__::func_113(&Local_131);
					if (!__LIB_2__::func_27(&Local_131, 256))
					{
						__LIB_0__::func_11(&Local_131);
						__LIB_5__::func_227(Local_131);
						func_38(&Local_131);
						__LIB_4__::func_722(&Local_131, 7);
					}
					else
					{
						__LIB_4__::func_722(&Local_131, 5);
					}
				}
				break;
			case 3:
				if (!__LIB_2__::func_27(&Local_131, 8192))
				{
					if (__LIB_0__::func_78(&(Local_131.f_958)) == 3)
					{
						__LIB_1__::func_109(Local_131.f_2889, 4);
						__LIB_5__::func_410(&Local_131, 8192);
					}
				}
				func_39(&Local_131);
				if (__LIB_3__::func_919(__LIB_0__::func_80(Global_1835011[Local_131 /*74*/].f_1), 512))
				{
				}
				else if (func_41(&Local_131) || __LIB_5__::func_176(&Local_131, 32768))
				{
					__LIB_0__::func_11(&Local_131);
					__LIB_5__::func_536(&Local_131);
					__LIB_4__::func_722(&Local_131, 4);
					__LIB_1__::func_283(&(Local_131.f_2890), 0);
				}
				else if (__LIB_5__::func_204(&Local_131) && !__LIB_5__::func_203(Local_131))
				{
					if (!__LIB_0__::func_75(&(Local_131.f_2899)))
					{
						__LIB_1__::func_283(&(Local_131.f_2899), 0);
					}
					if (!__LIB_5__::func_216(&Local_131))
					{
						if (__LIB_0__::func_264(&(Local_131.f_2899)) >= 1f)
						{
							__LIB_1__::func_109(Local_131.f_2889, 2097152);
							__LIB_5__::func_174(&Local_131);
							__LIB_5__::func_608(&Local_131);
							__LIB_4__::func_722(&Local_131, 10);
						}
					}
					else
					{
						if (!__LIB_2__::func_27(&Local_131, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							__LIB_5__::func_410(&Local_131, 536870912);
						}
						__LIB_1__::func_148(&(Local_131.f_2899));
					}
				}
				break;
			case 4:
				func_43(&Local_131);
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
				if (func_44(&Local_131) || (__LIB_5__::func_176(&Local_131, 32768) && !__LIB_2__::func_27(&Local_131, 268435456)))
				{
					__LIB_11__::func_113(&Local_131);
					if (!__LIB_2__::func_27(&Local_131, 256))
					{
						__LIB_0__::func_11(&Local_131);
						func_38(&Local_131);
						if (!__LIB_0__::func_1(Global_1935630, 524288) || __LIB_5__::func_176(&Local_131, 524288))
						{
							__LIB_5__::func_227(Local_131);
							__LIB_4__::func_722(&Local_131, 7);
						}
						else
						{
							__LIB_4__::func_722(&Local_131, 6);
						}
					}
					else
					{
						__LIB_5__::func_227(Local_131);
						__LIB_4__::func_722(&Local_131, 5);
					}
				}
				break;
			case 5:
				__LIB_0__::func_11(&Local_131);
				__LIB_5__::func_526(&Local_131);
				if (__LIB_0__::func_265(&(Local_131.f_2884)) >= __LIB_4__::func_723(&Local_131))
				{
					__LIB_0__::func_11(&Local_131);
					func_38(&Local_131);
					__LIB_1__::func_148(&(Local_131.f_2884));
					if (!__LIB_5__::func_176(&Local_131, 524288))
					{
						__LIB_5__::func_227(Local_131);
						__LIB_4__::func_722(&Local_131, 7);
					}
					else
					{
						__LIB_4__::func_722(&Local_131, 6);
					}
				}
				break;
			case 6:
				if (!__LIB_0__::func_75(&(Local_131.f_2906)))
				{
					__LIB_1__::func_283(&(Local_131.f_2906), 0);
				}
				if ((__LIB_0__::func_81(&(Local_131.f_428)) == 4 && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_131.f_428.f_444)) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_131.f_428.f_444))
				{
					__LIB_5__::func_227(Local_131);
					__LIB_4__::func_722(&Local_131, 7);
				}
				else if (__LIB_0__::func_265(&(Local_131.f_2906)) >= 5f)
				{
					__LIB_5__::func_227(Local_131);
					__LIB_4__::func_722(&Local_131, 7);
				}
				break;
			case 7:
				__LIB_0__::func_11(&Local_131);
				if (__LIB_5__::func_530(&Local_131))
				{
					__LIB_4__::func_722(&Local_131, 10);
				}
				break;
			case 10:
				if (func_3(&Local_131, 0))
				{
					__LIB_5__::func_410(&Local_131, 1);
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
				__LIB_5__::func_613(uParam4);
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
					__LIB_5__::func_430(&(uParam4->f_501), 0);
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
				__LIB_5__::func_613(uParam4);
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
	__LIB_11__::func_94(iParam0);
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
	if (!func_137(iParam0))
	{
		return false;
	}
	__LIB_11__::func_49(iLocal_38);
	func_139(iLocal_38);
	__LIB_5__::func_410(iParam0, 16);
	__LIB_5__::func_410(iParam0, 67108864);
	func_140(iParam0, 0);
	STREAMING::_REMOVE_IMAP(661576070);
	STREAMING::_REQUEST_IMAP(795060201);
	return true;
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

void func_39(int iParam0)
{
	if (__LIB_0__::func_644(2097152) && !__LIB_1__::func_205(Global_35, iLocal_35, 1, 0))
	{
		__LIB_4__::func_226(2097152);
	}
	else if (!__LIB_0__::func_644(2097152) && __LIB_1__::func_205(Global_35, iLocal_35, 1, 0))
	{
		__LIB_4__::func_229(2097152);
	}
}

int func_41(int iParam0)
{
	return func_155(iParam0, 0);
}

void func_43(int iParam0)
{
	func_156(iParam0);
}

bool func_44(int iParam0)
{
	__LIB_14__::func_415(&(iLocal_33[0]), &iLocal_68, &Local_50, 1f, -1082130432 /* Float: -1f */, 0);
	CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
	if (__LIB_11__::func_558(iLocal_38, 0.99f))
	{
		__LIB_6__::func_750(&iLocal_68, &Local_50, &(iLocal_33[0]), 1f, "ALLY_RAINSFALL");
		__LIB_6__::func_815(&iLocal_68, iLocal_33[0]);
		return true;
	}
	return false;
}

bool func_53(int iParam0)
{
	MISC::_0xE98D55C5983F2509(iLocal_33[0]);
	PED::SET_PED_CONFIG_FLAG(iLocal_33[0], 297, false);
	__LIB_0__::func_172(iLocal_35);
	__LIB_0__::func_172(iLocal_36);
	__LIB_4__::func_226(2097152);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_129, false);
	__LIB_5__::func_217(iParam0);
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
			__LIB_5__::func_432(&(uParam0->f_512));
		}
		func_231(&(uParam0->f_500), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_4__::func_749(uParam0, 0f, 0f, 0f);
		func_233(uParam0);
		func_234(uParam0);
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

int func_128(int iParam0)
{
	int iVar0;
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_35))
	{
		iLocal_35 = VOLUME::_CREATE_VOLUME_BOX(443.1605f, 2232.662f, 247.35f, 0f, 0f, -56.34199f, 11.30404f, 17.31792f, 10.99437f);
		__LIB_9__::func_917(iParam0, iLocal_35);
		uLocal_129 = PED::_0x4C39C95AE5DB1329(iLocal_35, false, 15);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_36))
	{
		iLocal_36 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 440.4225f, 2229.416f, 247.4758f, 0f, 0f, 0f, 0.726608f, 1f, 2.106789f);
		VOLUME::_0x5B23DFF8E0948BB2(iLocal_36, 1);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_37))
	{
		iLocal_37 = VOLUME::_CREATE_VOLUME_CYLINDER(442.1335f, 2230.377f, 247.4758f, 0f, 0f, 0f, 2.333942f, 2.779522f, 2.106789f);
	}
	if (!func_269(&iLocal_38, "script@story@ntv1@leadin@INT@leadin", 0, "pl_Leadin"))
	{
		return 0;
	}
	func_270();
	if (!func_271())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Local_14.f_3)
	{
		if (__LIB_0__::func_272(Local_14.f_3[iVar0], 0))
		{
			PED::SET_PED_CONFIG_FLAG(Local_14.f_3[iVar0], 301, true);
		}
		iVar0++;
	}
	func_272(-1, 1);
	return func_274(func_273(0, 1));
}

int func_135(int iParam0, bool bParam1)
{
	int iVar0;
	if (__LIB_2__::func_27(iParam0, 2))
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	iVar0 = __LIB_5__::func_191(*iParam0);
	if (!__LIB_0__::func_31(iVar0))
	{
		return 1;
	}
	iParam0->f_4 = ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_271(iVar0));
	return func_282(iParam0, iVar0, &(iParam0->f_3), bParam1, 1, iParam0->f_2903, iParam0->f_2903.f_1, iParam0->f_2903.f_2, 0, 0, 0, 0, 0);
}

bool func_137(int iParam0)
{
	struct<4> Var0;
	iLocal_39 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_285(0, 2), 6f, joaat("S_WAP_RAINSFALLS"), false, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_39))
	{
	}
	func_286(iParam0);
	func_287(iParam0);
	Var0 = { func_273(0, 1) };
	func_288(iLocal_33[0], Var0, Var0.f_3, 2, 1073741824 /* Float: 2f */);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[0], true);
	if (!PED::_0xA0BC8FAED8CFEB3C(iLocal_33[0]))
	{
		return false;
	}
	__LIB_0__::func_862(iLocal_33[0], 243346937);
	if (iLocal_41 == 0 || iLocal_42 == 0)
	{
		__LIB_3__::func_157(&(Local_50[0 /*17*/]), "NTV1_LEADIN", 0, joaat("INPUT_CONTEXT_Y"), 0, 0, 0, 1, 0);
		func_291(&iLocal_68, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 1101529088 /* Float: 21f */, 1101004800 /* Float: 20f */, 10f);
		__LIB_6__::func_736(&iLocal_68, &Local_50, 0, 0, 0, 13f, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	return true;
}

void func_139(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		iVar0 = ANIMSCENE::_GET_ANIM_SCENE_PED(iParam0, "A_M_O_WapTownfolk_01", false);
		iVar1 = ANIMSCENE::_GET_ANIM_SCENE_PED(iParam0, "A_M_O_WapTownfolk_01^1", false);
		iVar2 = ANIMSCENE::_GET_ANIM_SCENE_PED(iParam0, "A_M_O_WapTownfolk_01^2", false);
		iVar3 = ANIMSCENE::_GET_ANIM_SCENE_PED(iParam0, "A_M_O_WapTownfolk_01^3", false);
		if (((((((__LIB_0__::func_272(iVar0, 0) && PED::_0xA0BC8FAED8CFEB3C(iVar0)) && __LIB_0__::func_272(iVar1, 0)) && PED::_0xA0BC8FAED8CFEB3C(iVar1)) && __LIB_0__::func_272(iVar2, 0)) && PED::_0xA0BC8FAED8CFEB3C(iVar2)) && __LIB_0__::func_272(iVar3, 0)) && PED::_0xA0BC8FAED8CFEB3C(iVar3))
		{
			func_293(iVar0);
			func_293(iVar1);
			func_293(iVar2);
			func_293(iVar3);
		}
	}
}

void func_140(int iParam0, bool bParam1)
{
	char cVar0[64];
	if (__LIB_1__::func_25(Global_1835011[51 /*74*/].f_1, 1))
	{
		if (bParam1)
		{
			StringCopy(&cVar0, "1-SonInJail-Multi", 64);
		}
		else
		{
			StringCopy(&cVar0, "1-SonInJail-Normal", 64);
		}
		__LIB_9__::func_965(iParam0, "1-SonInJail-Normal", 0);
		__LIB_9__::func_965(iParam0, "1-SonInJail-Multi", 0);
		__LIB_9__::func_109(iParam0, cVar0);
		__LIB_5__::func_410(iParam0, 8);
	}
	else
	{
		if (bParam1)
		{
			StringCopy(&cVar0, "1-SonInJail-Multi", 64);
		}
		else
		{
			StringCopy(&cVar0, "2-SonNotInJail-Normal", 64);
		}
		__LIB_9__::func_965(iParam0, "2-SonNotInJail-Normal", 0);
		__LIB_9__::func_965(iParam0, "2-SonNotInJail-Multi", 0);
		__LIB_9__::func_109(iParam0, cVar0);
		__LIB_5__::func_410(iParam0, 8);
	}
}

int func_155(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	if (iLocal_41 == 0 && iLocal_42 == 0)
	{
		if (__LIB_1__::func_205(Global_35, iLocal_37, 1, 0))
		{
			if (iLocal_44 == 0)
			{
				if (MAP::DOES_BLIP_EXIST(__LIB_9__::func_835(48)))
				{
					__LIB_3__::func_49(&iLocal_68, __LIB_9__::func_835(48), 1673015813);
					iLocal_44 = 1;
				}
			}
			__LIB_6__::func_740(&iLocal_68, &Local_50, &(iLocal_33[0]), "NTV1_RF_TENT");
			iVar1 = 4204577;
		}
		else
		{
			func_308(&Local_50, &(iLocal_33[0]));
			if (iLocal_44 == 1)
			{
				iLocal_44 = 0;
			}
			iVar1 = 4204545;
		}
		iVar0 = func_309(&(iLocal_33[0]), &iLocal_68, 1f, &Local_50, 0f, 3, 0, "NTV1_RF_TENT", iVar1, iLocal_37, 0, 2, -1082130432 /* Float: -1f */);
		__LIB_11__::func_449(&(iLocal_33[0]), &iLocal_68, &Local_50, 8f);
	}
	else if (iLocal_41 == 1 || iLocal_42 == 1)
	{
		__LIB_14__::func_415(&(iLocal_33[0]), &iLocal_68, &Local_50, 1f, -1082130432 /* Float: -1f */, 0);
		__LIB_11__::func_449(&(iLocal_33[0]), &iLocal_68, &Local_50, 8f);
	}
	if (__LIB_0__::func_396(Global_35))
	{
		iLocal_49 = __LIB_2__::func_825(Global_35);
	}
	if (iLocal_42 == 1)
	{
		CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
	}
	if ((iLocal_41 == 1 || iLocal_42 == 1) || iVar0 == 0)
	{
		if (iLocal_42 == 0)
		{
			__LIB_0__::func_172(iLocal_36);
			__LIB_1__::func_748(&uLocal_40, 1, 1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
			if (__LIB_0__::func_396(Global_35))
			{
				iLocal_49 = __LIB_2__::func_825(Global_35);
				TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
				TASK::TASK_PAUSE(0, 1250);
			}
			if (__LIB_0__::func_153(Global_35, 0, 1, 0) != joaat("WEAPON_UNARMED"))
			{
				iLocal_43 = 1;
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
				PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), joaat("WEAPON_UNARMED"), 0);
				TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
			}
			__LIB_3__::func_638(0, func_273(0, 2), 1f, 20000, 1048576000 /* Float: 0.25f */, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
			TASK::TASK_PERFORM_SEQUENCE(Global_35, iLocal_48);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
			PED::_0x2208438012482A1A(Global_35, false, false);
			if (func_316())
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_38, "NightTime", true, false);
				iLocal_45 = 1;
				iLocal_46 = 1;
			}
			else if (func_317())
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_38, "NightTime", false, false);
				iLocal_45 = 1;
				iLocal_46 = 0;
			}
			Global_43838 = __LIB_0__::func_23();
			func_156(iParam0);
			iLocal_42 = 1;
		}
		if (iLocal_42 == 1)
		{
			func_318(iLocal_38);
		}
		if ((((iLocal_41 == 0 && iLocal_42 == 1) && __LIB_0__::func_272(iLocal_49, 0)) && !__LIB_0__::func_396(Global_35)) && !__LIB_0__::func_163(iLocal_49, 713668775))
		{
			__LIB_3__::func_638(iLocal_49, func_273(0, 0), 0.55f, 20000, 1048576000 /* Float: 0.25f */, 0);
		}
		if (((((((iLocal_41 == 0 && iLocal_42 == 1) && !__LIB_0__::func_396(Global_35)) && (!__LIB_0__::func_163(Global_35, 713668775) || TASK::GET_SEQUENCE_PROGRESS(Global_35) >= __LIB_0__::func_55(__LIB_0__::func_272(iLocal_49, 0), 2, 0))) && __LIB_0__::func_266(Global_35, func_285(0, 2), 1.5f, 1, 1)) && __LIB_2__::func_955(Global_35, func_321(0, 2), 60f)) && __LIB_0__::func_153(Global_35, 0, 1, 0) == joaat("WEAPON_UNARMED")) && (iLocal_43 == 0 || ((iLocal_43 == 1 && !__LIB_0__::func_163(Global_35, 716706914)) && !__LIB_0__::func_163(Global_35, 242628503))))
		{
			func_140(iParam0, bParam1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			__LIB_1__::func_748(&uLocal_40, 1, 1);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_38, "Loop_base", true, false);
			iLocal_41 = 1;
			return 1;
		}
		if (iLocal_41 == 1 && iLocal_42 == 1)
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_38, "Loop_base", true, false);
			return 1;
		}
	}
	return 0;
}

void func_156(int iParam0)
{
	if (iLocal_130 == 1)
	{
		return;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_428.f_444))
	{
		if (func_316() || (iLocal_45 == 1 && iLocal_46 == 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_428.f_444, "NightTime", true, false);
			iLocal_130 = 1;
		}
		else if (func_317() || (iLocal_45 == 1 && iLocal_46 == 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_428.f_444, "NightTime", false, false);
			iLocal_130 = 1;
		}
	}
}

void func_231(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_412();
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

void func_233(var uParam0)
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
			func_288(iVar1, __LIB_4__::func_760(uParam0), __LIB_4__::func_761(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_288(iVar3, __LIB_4__::func_760(uParam0), __LIB_4__::func_761(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_234(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_4__::func_760(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_4__::func_760(uParam0) };
			func_288(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

bool func_269(int iParam0, char* sParam1, int iParam2, char* sParam3)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam0))
	{
		*iParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, iParam2, sParam3, false, true);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam0))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam0, true, false))
		{
			return true;
		}
		else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(*iParam0, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(*iParam0);
		}
	}
	return false;
}

void func_270()
{
	STREAMING::REQUEST_MODEL(joaat("A_M_O_WAPTOWNFOLK_01"), false);
	STREAMING::REQUEST_MODEL(joaat("MSP_NATIVE1_MALES_01"), false);
	STREAMING::REQUEST_MODEL(joaat("P_BUCKET02X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CAMP_CUP_01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CS_BEDROLLCLSD01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CS_PILLOW01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CS_RAG01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CS_RAG02X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_MORTARPESTLE01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_WOODPIECE02X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_WOODPILE01X"), false);
	STREAMING::REQUEST_MODEL(joaat("CS_RAINSFALL"), false);
	STREAMING::REQUEST_MODEL(joaat("CS_CAPTAINMONROE"), false);
	STREAMING::REQUEST_MODEL(joaat("S_WAP_RAINSFALLS"), false);
}

bool func_271()
{
	if (((((((((((((!STREAMING::HAS_MODEL_LOADED(joaat("A_M_O_WAPTOWNFOLK_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("MSP_NATIVE1_MALES_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("P_BUCKET02X"))) || !STREAMING::HAS_MODEL_LOADED(joaat("P_CAMP_CUP_01X"))) || !STREAMING::HAS_MODEL_LOADED(joaat("P_CS_BEDROLLCLSD01X"))) || !STREAMING::HAS_MODEL_LOADED(joaat("P_CS_PILLOW01X"))) || !STREAMING::HAS_MODEL_LOADED(joaat("P_CS_RAG01X"))) || !STREAMING::HAS_MODEL_LOADED(joaat("P_CS_RAG02X"))) || !STREAMING::HAS_MODEL_LOADED(joaat("P_MORTARPESTLE01X"))) || !STREAMING::HAS_MODEL_LOADED(joaat("P_WOODPIECE02X"))) || !STREAMING::HAS_MODEL_LOADED(joaat("P_WOODPILE01X"))) || !STREAMING::HAS_MODEL_LOADED(joaat("CS_RAINSFALL"))) || !STREAMING::HAS_MODEL_LOADED(joaat("CS_CAPTAINMONROE"))) || !STREAMING::HAS_MODEL_LOADED(joaat("S_WAP_RAINSFALLS")))
	{
		return false;
	}
	return true;
}

void func_272(int iParam0, bool bParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(Local_14.f_8))
	{
		Local_14.f_8 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_9[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_9[0] = OBJECT::CREATE_OBJECT(joaat("P_BUCKET02X"), 437.1006f, 2229.704f, 247.0326f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_9[0], 0f, 0f, -85.9997f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_9[0], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_9[0], Local_14);
	__LIB_5__::func_510(Local_14.f_9[0], Local_14.f_8);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_9[1]) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_9[1] = OBJECT::CREATE_OBJECT(joaat("P_CAMP_CUP_01X"), 437.1073f, 2229.76f, 248.0326f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_9[1], 0f, 0f, 13.7268f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_9[1], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_9[1], Local_14);
	__LIB_5__::func_510(Local_14.f_9[1], Local_14.f_8);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_9[2]) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_9[2] = OBJECT::CREATE_OBJECT(joaat("P_CS_BEDROLLCLSD01X"), 437.1073f, 2229.76f, 248.0326f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_9[2], 0f, 0f, 13.7268f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_9[2], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_9[2], Local_14);
	__LIB_5__::func_510(Local_14.f_9[2], Local_14.f_8);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_9[3]) && (iParam0 == -1 || iParam0 == 3))
	{
		Local_14.f_9[3] = OBJECT::CREATE_OBJECT(joaat("P_CS_PILLOW01X"), 437.1073f, 2229.76f, 248.0326f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_9[3], 0f, 0f, 13.7268f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_9[3], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_9[3], Local_14);
	__LIB_5__::func_510(Local_14.f_9[3], Local_14.f_8);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_9[4]) && (iParam0 == -1 || iParam0 == 4))
	{
		Local_14.f_9[4] = OBJECT::CREATE_OBJECT(joaat("P_CS_RAG01X"), 437.1073f, 2229.76f, 248.0326f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_9[4], 0f, 0f, 13.7268f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_9[4], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_9[4], Local_14);
	__LIB_5__::func_510(Local_14.f_9[4], Local_14.f_8);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_9[5]) && (iParam0 == -1 || iParam0 == 5))
	{
		Local_14.f_9[5] = OBJECT::CREATE_OBJECT(joaat("P_CS_RAG02X"), 437.1073f, 2229.76f, 248.0326f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_9[5], 0f, 0f, 13.7268f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_9[5], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_9[5], Local_14);
	__LIB_5__::func_510(Local_14.f_9[5], Local_14.f_8);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_9[6]) && (iParam0 == -1 || iParam0 == 6))
	{
		Local_14.f_9[6] = OBJECT::CREATE_OBJECT(joaat("P_MORTARPESTLE01X"), 437.1073f, 2229.76f, 248.0326f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_9[6], 0f, 0f, 13.7268f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_9[6], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_9[6], Local_14);
	__LIB_5__::func_510(Local_14.f_9[6], Local_14.f_8);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_9[7]) && (iParam0 == -1 || iParam0 == 7))
	{
		Local_14.f_9[7] = OBJECT::CREATE_OBJECT(joaat("P_WOODPIECE02X"), 437.1073f, 2229.76f, 248.0326f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_9[7], 0f, 0f, 13.7268f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_9[7], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_9[7], Local_14);
	__LIB_5__::func_510(Local_14.f_9[7], Local_14.f_8);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_9[8]) && (iParam0 == -1 || iParam0 == 8))
	{
		Local_14.f_9[8] = OBJECT::CREATE_OBJECT(joaat("P_WOODPILE01X"), 437.1073f, 2229.76f, 248.0326f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_9[8], 0f, 0f, 13.7268f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_9[8], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_9[8], Local_14);
	__LIB_5__::func_510(Local_14.f_9[8], Local_14.f_8);
}

struct<4> func_273(int iParam0, int iParam1)
{
	return func_469(iParam0, iParam1);
}

int func_274(struct<4> Param0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_33[0]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33[0], true);
		__LIB_1__::func_473(iLocal_33[0], joaat("WORLD_HUMAN_SIT_GROUND"), 0, 0, 0, -1082130432 /* Float: -1f */);
		return 1;
	}
	STREAMING::REQUEST_MODEL(joaat("CS_RAINSFALL"), false);
	if (STREAMING::HAS_MODEL_LOADED(joaat("CS_RAINSFALL")))
	{
		iLocal_33[0] = __LIB_1__::func_545(joaat("CS_RAINSFALL"), Param0, Param0.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		if (__LIB_0__::func_272(iLocal_33[0], 0))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_33[0], 301, true);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_33[0], true, true);
			PED::_SET_RANDOM_OUTFIT_VARIATION(iLocal_33[0], true);
			PED::_UPDATE_PED_VARIATION(iLocal_33[0], false, true, true, true, false);
		}
	}
	return 0;
}

int func_282(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, var uParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12)
{
	vector3 vVar0;
	if (!__LIB_0__::func_31(iParam1))
	{
		return 0;
	}
	if (__LIB_4__::func_767(iParam0, *uParam2))
	{
		if (*uParam2 != __LIB_0__::func_167(iParam1))
		{
		}
		return 1;
	}
	vVar0 = { uParam5, uParam6, uParam7 };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { __LIB_1__::func_469(*iParam0) };
	}
	if (!__LIB_0__::func_287(iParam1, 28, 1))
	{
		__LIB_0__::func_288(iParam1, 28, 1);
	}
	*uParam2 = func_493(iParam1, 1, 0, vVar0.x, vVar0.y, vVar0.z, fParam8, bParam4, 1, bParam11, 0, 0, 0, iParam9, 1, bParam12, 0, 0, 1, 1, bParam10, 0, 1, 0, 1);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam2))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(*uParam2))
		{
			return 0;
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
		return 1;
	}
	return 0;
}

Vector3 func_285(int iParam0, int iParam1)
{
	return func_498(iParam0, iParam1);
}

void func_286(int iParam0)
{
	__LIB_11__::func_559(iLocal_38, "Arthur", Global_35);
	__LIB_11__::func_559(iLocal_38, "Rainsfall", iLocal_33[0]);
	__LIB_11__::func_559(iLocal_38, "p_bucket02x", Local_14.f_9[0]);
	__LIB_11__::func_559(iLocal_38, "p_camp_cup_01x", Local_14.f_9[1]);
	__LIB_11__::func_559(iLocal_38, "p_cs_bedrollclsd01x", Local_14.f_9[2]);
	__LIB_11__::func_559(iLocal_38, "p_cs_pillow01x", Local_14.f_9[3]);
	__LIB_11__::func_559(iLocal_38, "p_cs_rag01x", Local_14.f_9[4]);
	__LIB_11__::func_559(iLocal_38, "p_cs_rag02x", Local_14.f_9[5]);
	__LIB_11__::func_559(iLocal_38, "p_mortarpestle01x", Local_14.f_9[6]);
	__LIB_11__::func_559(iLocal_38, "p_woodpiece02x", Local_14.f_9[7]);
	__LIB_11__::func_559(iLocal_38, "p_woodpile01x", Local_14.f_9[8]);
	__LIB_5__::func_609(iParam0, iLocal_33[0], 0, 0, 0, 1);
	__LIB_5__::func_609(iParam0, Global_35, 0, 0, 0, 1);
	__LIB_5__::func_532(iParam0, Local_14.f_9[0], "p_bucket02x", 0, 0, 1, 0);
	__LIB_5__::func_532(iParam0, Local_14.f_9[1], "p_camp_cup_01x", 0, 0, 1, 0);
	__LIB_5__::func_532(iParam0, Local_14.f_9[2], "p_cs_bedrollclsd01x", 0, 0, 1, 0);
	__LIB_5__::func_532(iParam0, Local_14.f_9[3], "p_cs_pillow01x", 0, 0, 1, 0);
	__LIB_5__::func_532(iParam0, Local_14.f_9[4], "p_cs_rag01x", 0, 0, 1, 0);
	__LIB_5__::func_532(iParam0, Local_14.f_9[5], "p_cs_rag02x", 0, 0, 1, 0);
	__LIB_5__::func_532(iParam0, Local_14.f_9[6], "p_mortarpestle01x", 0, 0, 1, 0);
	__LIB_5__::func_532(iParam0, Local_14.f_9[7], "p_woodpiece02x", 0, 0, 1, 0);
	__LIB_5__::func_532(iParam0, Local_14.f_9[8], "p_woodpile01x", 0, 0, 1, 0);
}

void func_287(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		if (!__LIB_0__::func_272(iLocal_33[iVar0], 0))
		{
		}
		else
		{
			__LIB_5__::func_183(iParam0, iLocal_33[iVar0], 0);
		}
		iVar0++;
	}
}

void func_288(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_288(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_288(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_291(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	iParam0->f_30 = iParam1;
	iParam0->f_31 = iParam2;
	iParam0->f_32 = iParam3;
	iParam0->f_33 = iParam4;
	iParam0->f_34 = fParam5;
}

void func_293(int iParam0)
{
	if (!__LIB_0__::func_272(iParam0, 0))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, true);
	PED::SET_PED_CAN_BE_TARGETTED(iParam0, false);
}

void func_308(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	if (ENTITY::IS_ENTITY_DEAD(*uParam1))
	{
		return;
	}
	iVar0 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(*uParam1);
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (!__LIB_0__::func_139((uParam0[iVar1 /*17*/])->f_6) || __LIB_3__::func_66((uParam0[iVar1 /*17*/])->f_6) == 0)
		{
		}
		else
		{
			HUD::_UIPROMPT_REMOVE_GROUP(__LIB_3__::func_66((uParam0[iVar1 /*17*/])->f_6), iVar0);
		}
		iVar1++;
	}
}

int func_309(int iParam0, int iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_309(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					else if (!__LIB_9__::func_839(iParam1))
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

bool func_316()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_0__::func_23();
	iVar1 = __LIB_0__::func_41(iVar0);
	iVar2 = __LIB_0__::func_42(iVar0);
	if (((iVar1 == 19 && iVar2 >= 30) || iVar1 >= 20) || ((iVar1 == 5 && iVar2 <= 10) || (iVar1 >= 0 && iVar1 < 5)))
	{
		return true;
	}
	return false;
}

bool func_317()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_0__::func_23();
	iVar1 = __LIB_0__::func_41(iVar0);
	iVar2 = __LIB_0__::func_42(iVar0);
	if (((iVar1 == 5 && iVar2 >= 11) || (iVar1 >= 6 && iVar1 < 19)) || (iVar1 == 19 && iVar2 <= 29))
	{
		return true;
	}
	return false;
}

void func_318(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (iLocal_47 == 0 && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		iVar0 = ANIMSCENE::_GET_ANIM_SCENE_PED(iParam0, "A_M_O_WapTownfolk_01", false);
		iVar1 = ANIMSCENE::_GET_ANIM_SCENE_PED(iParam0, "A_M_O_WapTownfolk_01^1", false);
		iVar2 = ANIMSCENE::_GET_ANIM_SCENE_PED(iParam0, "A_M_O_WapTownfolk_01^2", false);
		iVar3 = ANIMSCENE::_GET_ANIM_SCENE_PED(iParam0, "A_M_O_WapTownfolk_01^3", false);
		if (((((((__LIB_0__::func_272(iVar0, 0) && PED::_0xA0BC8FAED8CFEB3C(iVar0)) && __LIB_0__::func_272(iVar1, 0)) && PED::_0xA0BC8FAED8CFEB3C(iVar1)) && __LIB_0__::func_272(iVar2, 0)) && PED::_0xA0BC8FAED8CFEB3C(iVar2)) && __LIB_0__::func_272(iVar3, 0)) && PED::_0xA0BC8FAED8CFEB3C(iVar3))
		{
			__LIB_11__::func_621(iVar0);
			__LIB_11__::func_621(iVar1);
			__LIB_11__::func_621(iVar2);
			__LIB_11__::func_621(iVar3);
			if (((!__LIB_11__::func_622(&iVar0) && !__LIB_11__::func_622(&iVar1)) && !__LIB_11__::func_622(&iVar2)) && !__LIB_11__::func_622(&iVar3))
			{
				iLocal_47 = 1;
			}
		}
	}
}

float func_321(int iParam0, int iParam1)
{
	return func_551(iParam0, iParam1);
}

void func_412()
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
	iVar0 = func_603(6291456, 0);
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

struct<4> func_469(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_498(iParam0, iParam1) };
	Var0.f_3 = func_551(iParam0, iParam1);
	return Var0;
}

int func_493(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
				func_288(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

Vector3 func_498(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 496.1245f, 2230.142f, 245.9881f;
				case 1:
					return 437.2973f, 2230.557f, 247.8873f;
				case 2:
					return 441.4401f, 2229.33f, 247.0312f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_551(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 279.9659f;
				case 1:
					return 251.9659f;
				case 2:
					return -276.2731f;
			}
			break;
	}
	return 0f;
}

int func_603(int iParam0, int iParam1)
{
	var uVar0;
	return func_726(&uVar0, iParam0, iParam1);
}

int func_726(var uParam0, int iParam1, int iParam2)
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
		return func_726(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

