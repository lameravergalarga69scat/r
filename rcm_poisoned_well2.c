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
	int iLocal_14[3] = { 0, 0, 0 };
	int iLocal_18[2] = { 0, 0 };
	var uLocal_21[2] = { 0, 0 };
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	bool bLocal_34 = false;
	bool bLocal_35 = false;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	vector3 vLocal_43 = { 0f, 0f, 0f };
	float fLocal_46 = 0f;
	vector3 vLocal_47 = { 0f, 0f, 0f };
	float fLocal_50 = 0f;
	vector3 vLocal_51 = { 0f, 0f, 0f };
	float fLocal_54 = 0f;
	vector3 vLocal_55 = { 0f, 0f, 0f };
	float fLocal_58 = 0f;
	vector3 vLocal_59 = { 0f, 0f, 0f };
	char* sLocal_62 = NULL;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	bool bLocal_80 = false;
	vector3 vLocal_81 = { 0f, 0f, 0f };
	float fLocal_84 = 0f;
	vector3 vLocal_85 = { 0f, 0f, 0f };
	float fLocal_88 = 0f;
	vector3 vLocal_89 = { 0f, 0f, 0f };
	vector3 vLocal_92 = { 0f, 0f, 0f };
	vector3 vLocal_95 = { 0f, 0f, 0f };
	vector3 vLocal_98 = { 0f, 0f, 0f };
	float fLocal_101 = 0f;
	vector3 vLocal_102 = { 0f, 0f, 0f };
	vector3 vLocal_105 = { 0f, 0f, 0f };
	vector3 vLocal_108 = { 0f, 0f, 0f };
	int iLocal_111 = 0;
	char* sLocal_112[8] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_121[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_130[8] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_155[8] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	float fLocal_167 = 0f;
	vector3 vLocal_168 = { 0f, 0f, 0f };
	int iLocal_171 = 0;
	bool bLocal_172 = false;
	bool bLocal_173 = false;
	bool bLocal_174 = false;
	bool bLocal_175 = false;
	bool bLocal_176 = false;
	bool bLocal_177 = false;
	bool bLocal_178 = false;
	bool bLocal_179 = false;
	bool bLocal_180 = false;
	bool bLocal_181 = false;
	bool bLocal_182 = false;
	bool bLocal_183 = false;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	float fLocal_187 = 0f;
	float fLocal_188 = 0f;
	bool bLocal_189 = false;
	float fLocal_190 = 0f;
	bool bLocal_191 = false;
	float fLocal_192 = 0f;
	bool bLocal_193 = false;
	float fLocal_194 = 0f;
	bool bLocal_195 = false;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	struct<16> Local_201[4];
	struct<32> Local_266[2];
	struct<32> Local_331[3];
	struct<32> Local_428[2];
	struct<32> Local_493[2];
	struct<32> Local_558[2];
	vector3 vLocal_623[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	struct<7> Local_633 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	struct<7> Local_643 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	struct<7> Local_653 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	struct<4> Local_663 = { 0, 0, 0, 0 } ;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	float fLocal_673 = 0f;
	float fLocal_674 = 0f;
	vector3 vLocal_675 = { 0f, 0f, 0f };
	bool bLocal_678 = false;
	int iLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	bool bLocal_686 = false;
	int iLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_25 = joaat("CS_OBEDIAHHINTON");
	iLocal_27 = joaat("CS_POISONWELLSHAMAN");
	iLocal_28 = joaat("A_M_M_BTCHILLBILLY_01");
	iLocal_29 = joaat("RCSP_POISONEDWELL_FEMALES_01");
	iLocal_30 = joaat("A_C_DOGBLUETICKCOONHOUND_01");
	iLocal_31 = joaat("A_C_DOGHOUND_01");
	iLocal_32 = joaat("A_C_PIG_01");
	vLocal_43 = { 2592.44f, 782.95f, 81.78f };
	fLocal_46 = 20f;
	vLocal_47 = { 2492.29f, 812.06f, 71.22f };
	fLocal_50 = 40f;
	vLocal_51 = { 2553.43f, 805.96f, 75.33f };
	fLocal_54 = 209.4268f;
	vLocal_55 = { 2555.43f, 806.59f, 75.3f };
	fLocal_58 = 150.3044f;
	vLocal_59 = { 2556.61f, 805.18f, 75.11f };
	sLocal_62 = "RHNTN_sounds";
	vLocal_81 = { 2556.521f, 804.8525f, 75.0514f };
	fLocal_84 = 225.8701f;
	vLocal_85 = { 2556.901f, 804.9422f, 75.0666f };
	fLocal_88 = 20.819f;
	vLocal_89 = { 2578.99f, 782.76f, 82.7854f };
	vLocal_92 = { 2582.029f, 781.426f, 82.9327f };
	vLocal_95 = { 2448.32f, 828.83f, 72.09f };
	vLocal_98 = { 2502.277f, 818.5123f, 71.1989f };
	fLocal_101 = 233.9033f;
	vLocal_102 = { 2504.41f, 816.93f, 71.05f };
	vLocal_105 = { 2506.99f, 811.21f, 71.57f };
	vLocal_108 = { 2505.63f, 812.76f, 71.34f };
	iLocal_111 = -1653831205;
	fLocal_187 = 1000f;
	fLocal_188 = 1000f;
	fLocal_190 = 1000f;
	fLocal_192 = 1000f;
	fLocal_194 = 1000f;
	fLocal_673 = 12f;
	fLocal_674 = 0.05f;
	vLocal_675 = { 2480.76f, 825.5895f, 73f };
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
				__LIB_12__::func_996(uParam0);
			}
			__LIB_13__::func_170(uParam0);
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

void func_7(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		func_17(uParam0, 0);
	}
	else
	{
		if (!__LIB_2__::func_618(&(uParam0->f_2597)))
		{
			__LIB_8__::func_901(&(uParam0->f_2597), 0);
		}
		__LIB_0__::func_11(uParam0);
		if (__LIB_5__::func_28(&(uParam0->f_2597)) >= 2500 || CAM::IS_SCREEN_FADED_OUT())
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
			__LIB_0__::func_11(uParam0);
			__LIB_12__::func_837(uParam0, 4);
		}
	}
}

void func_10(var uParam0)
{
	int iVar0;
	if (!__LIB_2__::func_618(&(uParam0->f_2585)) || IntToFloat(__LIB_5__::func_28(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
	{
		__LIB_8__::func_901(&(uParam0->f_2585), 1);
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
		iVar0 = func_93(uParam0);
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
			__LIB_13__::func_29(uParam0, 1);
			iVar0 = func_103(uParam0);
			__LIB_12__::func_837(uParam0, iVar0);
		}
	}
	else
	{
		__LIB_0__::func_8(&(uParam0->f_172), 16);
		__LIB_13__::func_29(uParam0, 0);
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
		func_106(uParam0, __LIB_0__::func_58(uParam0));
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
		__LIB_9__::func_830(uParam0->f_174, 1);
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
			__LIB_1__::func_837(1, 1);
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
	__LIB_9__::func_830(uParam0->f_174, 0);
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
			if (!__LIB_2__::func_618(&(uParam0->f_2597)))
			{
				__LIB_8__::func_901(&(uParam0->f_2597), 0);
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
			else if (__LIB_5__::func_28(&(uParam0->f_2597)) >= 2500)
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
	else if (!__LIB_2__::func_618(&(uParam0->f_2585)) || IntToFloat(__LIB_5__::func_28(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
	{
		__LIB_8__::func_901(&(uParam0->f_2585), 1);
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
	__LIB_13__::func_284(uParam0);
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
		__LIB_13__::func_510(iVar1, 1, -1082130432 /* Float: -1f */, 1, 1, bVar2, 0);
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
	__LIB_13__::func_29(uParam0, 0);
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
		__LIB_9__::func_830(uParam0->f_174, 0);
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
	__LIB_12__::func_658(uParam0, 1);
	__LIB_12__::func_659(uParam0, 25);
	__LIB_12__::func_656(uParam0, 150f);
	__LIB_12__::func_657(uParam0, 150f);
	__LIB_0__::func_568(2553.92f, 783.57f, 74.46f, 100f, 0);
	Local_201[0 /*16*/] = { __LIB_10__::func_449("script@rcm@hntn@stage_02@ig3_villagertrapped", "pl_Idle_Frantic") };
	Local_201[1 /*16*/] = { __LIB_10__::func_449("script@rcm@hntn@stage_02@ig5_villagercower_01", "pl_Enter") };
	Local_201[2 /*16*/] = { __LIB_10__::func_449("script@rcm@hntn@stage_02@ig5_villagercower_02", "pl_Enter") };
	Local_201[3 /*16*/] = { __LIB_10__::func_449("script@rcm@hntn@stage_02@leadin@ext@leadin", "pl_leadin") };
	func_191();
}

void func_42(var uParam0)
{
	__LIB_12__::func_908(uParam0, 0);
	__LIB_12__::func_867(uParam0, iLocal_25, 7);
	__LIB_12__::func_867(uParam0, iLocal_27, 7);
	PED::_REQUEST_METAPED_OUTFIT(iLocal_27, joaat("META_OUTFIT_DEFAULT"));
	__LIB_12__::func_867(uParam0, joaat("RCSP_POISONEDWELL_MALES_01"), 7);
	__LIB_12__::func_867(uParam0, iLocal_28, 7);
	__LIB_12__::func_867(uParam0, iLocal_29, 7);
	__LIB_12__::func_867(uParam0, iLocal_30, 7);
	__LIB_12__::func_867(uParam0, iLocal_31, 7);
	__LIB_12__::func_867(uParam0, iLocal_32, 7);
	__LIB_12__::func_867(uParam0, joaat("P_LANTERN04X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_CHAIR06X"), 7);
	__LIB_13__::func_15(uParam0, "RCM_HNTN2_river", 2, -1, 7);
	__LIB_13__::func_15(uParam0, "rcm_hntn2_home", 2, -1, 7);
	__LIB_13__::func_15(uParam0, "rcm_hntn2_assist", 2, -1, 7);
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
	if (iVar0 == 0)
	{
		Var1 = { vLocal_81 };
		Var1.f_3 = fLocal_84;
	}
	else if (iVar0 == 1)
	{
		Var1 = { 2525.951f, 790.0692f, 72.0711f };
		Var1.f_3 = 37.6916f;
	}
	else if (iVar0 == 2)
	{
		Var1 = { 2508.151f, 812.5964f, 71.2113f };
		Var1.f_3 = 71.5112f;
	}
	else if (iVar0 == 3)
	{
		Var1 = { 2505.1f, 805.05f, 71.75f };
		Var1.f_3 = -56.41f;
	}
	else if (iVar0 == 4)
	{
		Var1 = { 2556.307f, 788.0789f, 74.6416f };
		Var1.f_3 = 352.0617f;
	}
	else if (iVar0 == 5)
	{
		Var1 = { vLocal_85 };
		Var1.f_3 = fLocal_88;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_206(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_24))
	{
		if (!__LIB_0__::func_272(iLocal_24, 0))
		{
			StringCopy(&(uParam0->f_2578), "HNTN2_F_0", 24);
			return true;
		}
	}
	if (__LIB_0__::func_272(Local_643.f_2, 0) && func_208(Local_643.f_2))
	{
		__LIB_1__::func_864(Local_643.f_2, 0, 0);
	}
	if (__LIB_0__::func_272(Local_653.f_2, 0) && func_208(Local_653.f_2))
	{
		__LIB_1__::func_864(Local_653.f_2, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_643.f_2) && !__LIB_0__::func_272(Local_643.f_2, 0))
	{
		StringCopy(&(uParam0->f_2578), "HNTN2_F_1", 24);
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_633.f_2) && !__LIB_0__::func_272(Local_633.f_2, 0))
	{
		StringCopy(&(uParam0->f_2578), "HNTN2_F_1", 24);
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_653.f_2) && !__LIB_0__::func_272(Local_653.f_2, 0))
	{
		StringCopy(&(uParam0->f_2578), "HNTN2_F_1", 24);
		return true;
	}
	if (iLocal_197 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_633.f_2))
		{
			fLocal_187 = __LIB_0__::func_665(Global_35, Local_633.f_2, 1, 1);
			if (fLocal_187 < fLocal_188)
			{
				fLocal_188 = fLocal_187;
			}
		}
		if (!bLocal_189)
		{
			if ((fLocal_187 - fLocal_188) > 25f)
			{
				__LIB_12__::func_883(uParam0, "HNTN2_OBJ8", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				bLocal_189 = true;
			}
		}
		else if ((fLocal_187 - fLocal_188) < 5f)
		{
			if (MAP::DOES_BLIP_EXIST(iLocal_42))
			{
				__LIB_12__::func_883(uParam0, "HNTN2_OBJ1", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
			else
			{
				__LIB_12__::func_883(uParam0, "HNTN2_OBJ3", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
			bLocal_189 = false;
		}
		else if ((fLocal_187 - fLocal_188) > 50f)
		{
			StringCopy(&(uParam0->f_2578), "HNTN2_F_2", 24);
			return true;
		}
	}
	if (iLocal_197 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_643.f_2))
		{
			fLocal_187 = __LIB_0__::func_665(Global_35, Local_643.f_2, 1, 1);
			if (fLocal_187 < fLocal_190)
			{
				fLocal_190 = fLocal_187;
			}
		}
		if (!bLocal_191)
		{
			if ((fLocal_187 - fLocal_190) > 25f)
			{
				__LIB_12__::func_883(uParam0, "HNTN2_OBJ8", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				bLocal_191 = true;
			}
		}
		else if ((fLocal_187 - fLocal_190) < 5f)
		{
			if (MAP::DOES_BLIP_EXIST(iLocal_42))
			{
				__LIB_12__::func_883(uParam0, "HNTN2_OBJ0", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
			else
			{
				__LIB_12__::func_883(uParam0, "HNTN2_OBJ2B", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
			bLocal_191 = false;
		}
		else if ((fLocal_187 - fLocal_190) > 50f)
		{
			StringCopy(&(uParam0->f_2578), "HNTN2_F_2", 24);
			return true;
		}
	}
	if (iLocal_197 == 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_653.f_2))
		{
			fLocal_187 = __LIB_0__::func_665(Global_35, Local_653.f_2, 1, 1);
			if (fLocal_187 < fLocal_192)
			{
				fLocal_192 = fLocal_187;
			}
		}
		if (!bLocal_193)
		{
			if ((fLocal_187 - fLocal_192) > 25f)
			{
				__LIB_12__::func_883(uParam0, "HNTN2_OBJ8", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				bLocal_193 = true;
			}
		}
		else if ((fLocal_187 - fLocal_192) < 5f)
		{
			__LIB_12__::func_883(uParam0, "HNTN2_OBJ2C", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			bLocal_193 = false;
		}
		else if ((fLocal_187 - fLocal_192) > 50f)
		{
			StringCopy(&(uParam0->f_2578), "HNTN2_F_2", 24);
			return true;
		}
	}
	if (iLocal_197 == 3)
	{
		fLocal_187 = __LIB_0__::func_665(Global_35, Local_653.f_2, 1, 1);
		if (fLocal_187 < fLocal_194)
		{
			fLocal_194 = fLocal_187;
		}
		if (!bLocal_195)
		{
			if ((fLocal_187 - fLocal_194) > 35f)
			{
				__LIB_12__::func_883(uParam0, "HNTN2_OBJ8", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				bLocal_195 = true;
			}
		}
		else if ((fLocal_187 - fLocal_194) < 5f)
		{
			__LIB_12__::func_883(uParam0, "HNTN2_OBJ7A", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			bLocal_195 = false;
		}
		else if ((fLocal_187 - fLocal_194) > 70f)
		{
			StringCopy(&(uParam0->f_2578), "HNTN2_F_2", 24);
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
	if (func_213(uParam0->f_174))
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
		if (__LIB_5__::func_245(PLAYER::PLAYER_ID(), 1, 0, 1))
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
	if (func_222(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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
	__LIB_13__::func_370();
	func_227(uParam0);
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
		__LIB_12__::func_627(uParam0->f_174);
	}
	else if (__LIB_12__::func_644(uParam0) == 2)
	{
	}
	else if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_14, 2))
	{
		__LIB_9__::func_830(uParam0->f_174, 0);
	}
	__LIB_8__::func_993(uParam0->f_174);
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		__LIB_9__::func_239(uParam0->f_174);
		__LIB_12__::func_895(uParam0);
	}
	__LIB_13__::func_284(uParam0);
	__LIB_1__::func_564(0);
	__LIB_13__::func_29(uParam0, 0);
	__LIB_12__::func_918(uParam0, 4);
	__LIB_0__::func_8(&(uParam0->f_172), 8);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 1024);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
	__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 4);
	__LIB_2__::func_608(&(uParam0->f_2585));
	__LIB_12__::func_794(uParam0);
}

bool func_85(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		return true;
	}
	if (__LIB_12__::func_924(uParam0) && func_267(uParam0))
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
		__LIB_9__::func_830(uParam0->f_174, 0);
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
		__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 0);
	}
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
		func_106(uParam0, bVar0);
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
		if (uParam0->f_171 != 0 || func_286(uParam0))
		{
			if (__LIB_13__::func_371(uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_93(var uParam0)
{
	func_288();
	__LIB_14__::func_96(iLocal_68, 2544.77f, 782.3f, 74.67f, 168.4f);
	return 5;
}

int func_96(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = iParam1;
	func_291();
	if (iVar0 == 0)
	{
		if (__LIB_12__::func_936(uParam0))
		{
			func_293(uParam0, 0);
			__LIB_12__::func_909(&(uParam0->f_206));
			return 5;
		}
		else
		{
			if (func_294(uParam0))
			{
				return 7;
			}
			return 2;
		}
	}
	else if (iVar0 == 1)
	{
		if (func_295(uParam0))
		{
			return 7;
		}
		return 2;
	}
	else if (iVar0 == 2)
	{
		if (func_296(uParam0))
		{
			return 7;
		}
		return 2;
	}
	else if (iVar0 == 3)
	{
		if (func_297(uParam0))
		{
			return 7;
		}
		return 2;
	}
	else if (iVar0 == 4)
	{
		if (func_298(uParam0))
		{
			func_288();
			return 7;
		}
		return 2;
	}
	else if (iVar0 == 5)
	{
		if (func_299(uParam0))
		{
			func_288();
			__LIB_14__::func_96(iLocal_68, 2544.77f, 782.3f, 74.67f, 168.4f);
			return 5;
		}
		return 2;
	}
	return 7;
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
		if (!__LIB_14__::func_172(uParam0))
		{
			if ((__LIB_0__::func_1(uParam0->f_172, 8192) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_751)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_751, false))
			{
				if (__LIB_0__::func_1(uParam0->f_172, 8388608) || func_85(uParam0))
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
		func_106(uParam0, 0);
		if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
		{
			return false;
		}
	}
	else
	{
		__LIB_12__::func_668();
		__LIB_12__::func_669(uParam0);
		if (!func_306(uParam0))
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
		__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 1);
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
	return func_312(Var0, &(uParam0->f_206), uParam0);
}

int func_103(var uParam0)
{
	switch (iLocal_198)
	{
		case 0:
			func_316();
			func_317();
			func_293(uParam0, 1);
			__LIB_13__::func_91(uParam0, 0);
			__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 0);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_633.f_2, vLocal_89, 59.51f, true, false, true);
			func_319(uParam0);
			func_320();
			func_291();
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_26))
			{
				PED::DELETE_PED(&iLocal_26);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_24))
			{
				PED::DELETE_PED(&iLocal_24);
			}
			func_321(1);
			return 8;
	}
	return 7;
}

bool func_104(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 256) && !__LIB_0__::func_1(uParam0->f_172, 1024))
	{
		if (!__LIB_14__::func_172(uParam0))
		{
			if (__LIB_0__::func_1(uParam0->f_172, 512) && __LIB_0__::func_1(uParam0->f_172, 8192))
			{
				if (func_85(uParam0))
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
				__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 1);
			}
			return false;
		}
	}
	return false;
}

void func_106(var uParam0, bool bParam1)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 262144))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2581)))
	{
		__LIB_0__::func_8(&(uParam0->f_172), 262144);
		return;
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		if (func_322(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
		{
			__LIB_0__::func_7(&(uParam0->f_172), 1048576);
		}
		if (!__LIB_0__::func_1(uParam0->f_172, 524288))
		{
			if (__LIB_12__::func_670(&(uParam0->f_753)))
			{
				__LIB_0__::func_7(&(uParam0->f_172), 524288);
			}
		}
	}
}

int func_107(var uParam0)
{
	func_288();
	__LIB_1__::func_538(1);
	func_325();
	func_317();
	if (bLocal_678)
	{
		GRAPHICS::DRAW_LIGHT_WITH_RANGE(vLocal_675, 255, 255, 255, fLocal_673, fLocal_674);
	}
	if (__LIB_0__::func_27(iLocal_196, 2))
	{
		func_327(uParam0);
	}
	if (__LIB_0__::func_27(iLocal_196, 8))
	{
		func_328(uParam0);
	}
	if (__LIB_0__::func_27(iLocal_196, 16))
	{
		func_329(uParam0);
	}
	if (__LIB_0__::func_27(iLocal_196, 32))
	{
		func_330(uParam0);
	}
	func_331();
	switch (iLocal_197)
	{
		case 0:
			if (!__LIB_0__::func_27(iLocal_196, 2))
			{
				if (!__LIB_2__::func_618(&uLocal_77))
				{
					__LIB_5__::func_107(&uLocal_77);
				}
				else if (__LIB_5__::func_51(&uLocal_77) > 3f)
				{
					func_333();
					TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("rcm_hntn2_assist", 0, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
					__LIB_13__::func_62(uParam0, func_61(1), func_61(2), 1, 2, 0);
					func_334(1);
				}
			}
			break;
		case 1:
			if (!__LIB_0__::func_27(iLocal_196, 8))
			{
				__LIB_13__::func_62(uParam0, func_61(2), func_61(3), 2, 3, 0);
				func_334(2);
			}
			break;
		case 2:
			if (!__LIB_0__::func_27(iLocal_196, 16))
			{
				__LIB_13__::func_62(uParam0, func_61(3), func_61(4), 3, 4, 0);
				func_334(3);
			}
			break;
		case 3:
			if (!__LIB_0__::func_27(iLocal_196, 32))
			{
				func_334(4);
			}
			break;
		case 4:
			if (__LIB_0__::func_266(Global_35, vLocal_59, 8f, 1, 1))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
			}
			if (!__LIB_6__::func_904() && func_337(uParam0))
			{
				MISC::_SET_WEATHER_TYPE(joaat("OVERCAST"), false, true, true, 20f, false);
				iLocal_200 = 2;
				__LIB_0__::func_325(&(Local_653.f_1));
				__LIB_0__::func_325(&(Local_643.f_1));
				__LIB_0__::func_325(&iLocal_42);
				func_339(uParam0, 7);
				__LIB_13__::func_62(uParam0, func_61(4), func_61(5), 4, 5, 0);
				func_334(5);
			}
			break;
		case 5:
			if (__LIB_0__::func_266(Global_35, vLocal_59, 8f, 1, 1))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
			}
			if (func_340(uParam0))
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_42))
				{
					MAP::REMOVE_BLIP(&iLocal_42);
				}
				func_334(6);
				PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
				__LIB_13__::func_59(uParam0, iLocal_24, 0, 0, 0, 0);
				__LIB_13__::func_59(uParam0, iLocal_26, 0, 0, 0, 0);
				__LIB_13__::func_59(uParam0, Local_653.f_2, "A_M_M_BTCHILLBILLY_01", 0, 0, 0);
				__LIB_13__::func_59(uParam0, Local_643.f_2, "A_M_M_BTCHILLBILLY_01^1", 0, 0, 0);
				__LIB_13__::func_59(uParam0, Local_633.f_2, "A_F_M_BTCHILLBILLY_01", 0, 0, 0);
				__LIB_13__::func_59(uParam0, iLocal_36, "A_F_M_BTCHILLBILLY_01^1", 0, 0, 0);
				__LIB_13__::func_59(uParam0, iLocal_37, "A_M_M_BTCHILLBILLY_01^2", 0, 0, 0);
				__LIB_12__::func_957(uParam0, iLocal_18[0], "P_CHAIR04X", 0, 0, 0);
				__LIB_12__::func_957(uParam0, iLocal_18[1], "P_CHAIR04X^1", 0, 0, 0);
				__LIB_14__::func_96(iLocal_68, 2544.77f, 782.3f, 74.67f, 168.4f);
				return 5;
			}
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
	__LIB_12__::func_969(iParam0, 0, iParam3);
	if (__LIB_0__::func_5(Global_1347702[iParam0 /*49*/].f_35))
	{
		__LIB_12__::func_899(Global_1347702[iParam0 /*49*/].f_35);
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
		__LIB_12__::func_628();
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
		func_377(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		__LIB_1__::func_809(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	__LIB_10__::func_833(iParam0);
}

bool func_150(var uParam0)
{
	if (BUILTIN::VDIST(vLocal_85, Global_36) < 30f)
	{
		PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	}
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(Global_35, 2557.18f, 801.91f, 75.17f, 100f, 100f, 100f, false, true, 0))
		{
			return false;
		}
	}
	return true;
}

void func_159(var uParam0)
{
	int iVar0;
	if (ENTITY::_0x1FF441D7954F8709(uLocal_21[0]))
	{
		ENTITY::_0xD2B9C78537ED5759(uLocal_21[0]);
	}
	if (ENTITY::_0x1FF441D7954F8709(uLocal_21[1]))
	{
		ENTITY::_0xD2B9C78537ED5759(uLocal_21[1]);
	}
	if (!STREAMING::_0xCF45DF50C7775F2A())
	{
		if (STREAMING::_IS_IMAP_ACTIVE(iLocal_111))
		{
			STREAMING::_REMOVE_IMAP(iLocal_111);
		}
	}
	if (bLocal_176)
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("BUT_GUARD_SCENARIOS", true);
		bLocal_176 = false;
	}
	__LIB_2__::func_788(&iLocal_24, 1, 0, 1);
	__LIB_2__::func_788(&iLocal_26, 1, 0, 1);
	__LIB_2__::func_788(&(iLocal_14[0]), 1, 0, 1);
	__LIB_2__::func_788(&(iLocal_14[1]), 1, 0, 1);
	__LIB_2__::func_788(&(iLocal_14[2]), 1, 0, 1);
	func_405(&Local_633, &Local_266, 1);
	func_405(&Local_643, &Local_331, 1);
	func_405(&Local_653, &Local_428, 1);
	func_405(&Local_663, &Local_493, 1);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_201[iVar0 /*16*/]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_201[iVar0 /*16*/]);
		}
		iVar0++;
	}
	if (iLocal_200 != 0)
	{
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
	}
	if (__LIB_0__::func_27(iLocal_196, 4096))
	{
		CLOCK::PAUSE_CLOCK(false, 0);
	}
	AUDIO::_0x531A78D6BF27014B(sLocal_62);
	__LIB_2__::func_353(&uLocal_69, 1);
	OBJECT::_0x0C0A373D181BF900(1074283306);
	__LIB_0__::func_172(iLocal_66);
	__LIB_0__::func_172(iLocal_67);
	__LIB_0__::func_172(iLocal_68);
}

void func_191()
{
	sLocal_112[0] = "HNTN2_OBJ1";
	sLocal_112[1] = "HNTN2_OBJ3";
	sLocal_112[2] = "HNTN2_OBJ0";
	sLocal_112[4] = "HNTN2_OBJ2B";
	sLocal_112[5] = "HNTN2_OBJ2C";
	sLocal_112[6] = "HNTN2_OBJ7A";
	sLocal_112[7] = "HNTN2_OBJ8";
	iLocal_121[0] = 0;
	iLocal_121[1] = 0;
	iLocal_121[2] = 0;
	iLocal_121[4] = 0;
	iLocal_121[5] = 0;
	iLocal_121[6] = 0;
	iLocal_121[7] = 0;
	vLocal_130[0 /*3*/] = { vLocal_89 };
	vLocal_130[1 /*3*/] = { 0f, 0f, 0f };
	vLocal_130[2 /*3*/] = { vLocal_47 };
	vLocal_130[4 /*3*/] = { vLocal_98 };
	vLocal_130[5 /*3*/] = { 0f, 0f, 0f };
	vLocal_130[6 /*3*/] = { vLocal_59 };
	vLocal_130[7 /*3*/] = { 0f, 0f, 0f };
	fLocal_155[0] = 25f;
	fLocal_155[1] = 1000f;
	fLocal_155[2] = (fLocal_50 + 8f);
	fLocal_155[4] = 45f;
	fLocal_155[5] = 1000f;
	fLocal_155[6] = 1000f;
	fLocal_155[7] = 1000f;
}

int func_206(vector3 vParam0, var uParam3)
{
	int iVar0;
	if (MISC::_0x1B065A2BF7953815(0) != 1)
	{
		__LIB_1__::func_837(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_399(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_459(0, 0);
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

bool func_208(int iParam0)
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 2500.176f, 822.6371f, 69.28639f, 2495.833f, 803.2963f, 65.9099f, 8.75f, false, true, 0);
}

bool func_213(int iParam0)
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

int func_222(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_24))
	{
		if (!__LIB_0__::func_272(iLocal_24, 1))
		{
			return 1;
		}
		else if ((PED::IS_PED_FLEEING(iLocal_24) || PED::IS_PED_IN_COMBAT(iLocal_24, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_24, Global_35, 1, 1))
		{
			TASK::CLEAR_PED_SECONDARY_TASK(iLocal_24);
			TASK::TASK_SMART_FLEE_PED(iLocal_24, Global_35, 10000f, -1, 0, 1077936128 /* Float: 3f */, 0);
			PED::SET_PED_KEEP_TASK(iLocal_24, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_24, false);
			return 1;
		}
	}
	return 0;
}

void func_227(var uParam0)
{
	int iVar0;
	if (ENTITY::_0x1FF441D7954F8709(uLocal_21[0]))
	{
		ENTITY::_0xD2B9C78537ED5759(uLocal_21[0]);
	}
	if (ENTITY::_0x1FF441D7954F8709(uLocal_21[1]))
	{
		ENTITY::_0xD2B9C78537ED5759(uLocal_21[1]);
	}
	__LIB_2__::func_788(&iLocal_24, 1, 0, 1);
	__LIB_2__::func_788(&iLocal_26, 1, 0, 1);
	__LIB_2__::func_788(&(iLocal_14[0]), 1, 0, 1);
	__LIB_2__::func_788(&(iLocal_14[1]), 1, 0, 1);
	__LIB_2__::func_788(&(iLocal_14[2]), 1, 0, 1);
	func_405(&Local_633, &Local_266, 1);
	func_405(&Local_643, &Local_331, 1);
	func_405(&Local_653, &Local_428, 1);
	func_405(&Local_663, &Local_493, 1);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_201[iVar0 /*16*/]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_201[iVar0 /*16*/]);
		}
		iVar0++;
	}
	if (iLocal_200 != 0)
	{
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
	}
	if (__LIB_0__::func_27(iLocal_196, 4096))
	{
		CLOCK::PAUSE_CLOCK(false, 0);
	}
	AUDIO::_0x531A78D6BF27014B(sLocal_62);
	__LIB_2__::func_353(&uLocal_69, 1);
	OBJECT::_0x0C0A373D181BF900(1074283306);
	__LIB_0__::func_172(iLocal_66);
	__LIB_0__::func_172(iLocal_67);
	__LIB_0__::func_172(iLocal_68);
}

int func_267(var uParam0)
{
	if (__LIB_0__::func_30(iLocal_111))
	{
		if (!STREAMING::_0xCF45DF50C7775F2A())
		{
			if (!STREAMING::_IS_IMAP_ACTIVE(iLocal_111))
			{
				STREAMING::_REQUEST_IMAP(iLocal_111);
				return 0;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_24))
	{
		iLocal_24 = __LIB_8__::func_931(iLocal_25, 2556.476f, 808.5169f, 75.397f, 182.7373f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		if (__LIB_0__::func_272(iLocal_24, 0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_24, true, true);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_24, false);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_24, false);
			TASK::TASK_COWER(iLocal_24, -1, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_24, true);
		}
	}
	if (!__LIB_12__::func_871(uParam0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_633.f_2))
		{
			Local_633.f_2 = __LIB_12__::func_885(uParam0, iLocal_29, vLocal_89, 73.51f, 1, 1, 0, 1, 1, 0, 1, 1);
			if (__LIB_0__::func_272(Local_633.f_2, 0))
			{
				__LIB_0__::func_862(Local_633.f_2, -946746074);
				__LIB_12__::func_875(uParam0, Local_633.f_2, "RHNTN_HouseVillager", 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_633.f_2, true);
				PED::SET_PED_CAN_BE_TARGETTED(Local_633.f_2, false);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_633.f_2, true);
			}
		}
	}
	if (__LIB_0__::func_272(iLocal_24, 0) && (__LIB_0__::func_272(Local_633.f_2, 0) || __LIB_12__::func_871(uParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_286(var uParam0)
{
	if (BUILTIN::VDIST(vLocal_85, Global_36) < 30f)
	{
		PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	}
	if (!bLocal_172)
	{
		if (__LIB_0__::func_71(Global_35))
		{
			__LIB_5__::func_511(1);
			bLocal_172 = true;
		}
	}
	if (!bLocal_176)
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("BUT_GUARD_SCENARIOS", false);
		bLocal_176 = true;
	}
	func_571();
	if (OBJECT::_0xACD4F9831DFAD7F5(1074283306) != 32)
	{
		__LIB_4__::func_389(1074283306, 1, 0);
		OBJECT::_0x7F458B543006C8FE(1074283306, 32);
	}
	switch (iLocal_679)
	{
		case 0:
			if (__LIB_0__::func_94(Global_35, 2556.08f, 807.26f, 75.43f, 1) < 5f)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
				if (__LIB_0__::func_94(Global_35, 2556.08f, 807.26f, 75.43f, 1) < 3f)
				{
					if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED"))
					{
						WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
					}
				}
			}
			if (PED::_0xB91AB3BE7F655D49(Global_35))
			{
				__LIB_5__::func_107(&uLocal_680);
				func_293(uParam0, 0);
				iLocal_679 = 1;
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
				return true;
			}
			if (__LIB_0__::func_94(Global_35, 2556.08f, 807.26f, 75.43f, 1) < 3f)
			{
				if (__LIB_2__::func_618(&uLocal_683))
				{
					if (__LIB_5__::func_51(&uLocal_683) > 3f)
					{
						__LIB_5__::func_107(&uLocal_680);
						func_293(uParam0, 0);
						iLocal_679 = 2;
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
						return true;
					}
				}
				else if (!__LIB_2__::func_618(&uLocal_683))
				{
					__LIB_8__::func_901(&uLocal_683, 0);
				}
			}
			else
			{
				__LIB_2__::func_608(&uLocal_683);
			}
			break;
	}
	return false;
}

void func_288()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_66))
	{
		__LIB_3__::func_527(&iLocal_66, 2521.143f, 812.3906f, 72.66225f, 0f, 0f, 0f, 4.690333f, 6.066651f, 2.840523f, "FinalFirstDogAttack");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_67))
	{
		__LIB_3__::func_527(&iLocal_67, 2532.688f, 808.1126f, 74.8385f, 0f, 0f, -25.87046f, 1.805203f, 3.832737f, 2.366107f, "FinalButcherDogAttack");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_68))
	{
		__LIB_3__::func_527(&iLocal_68, 2556.45f, 802.5391f, 75.06567f, 0f, 0f, 30f, 10f, 13f, 2.840523f, "FinalSecondDogAttack");
	}
}

void func_291()
{
	int iVar0;
	int iVar1;
	if (bLocal_80)
	{
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = WEAPON::_0x9F67929D98E7C6E8(Global_35, joaat("GROUP_SHOTGUN"), 0, 1);
	if (iVar0 == 0)
	{
		iVar0 = func_576(13631536, 1f, 1065353216 /* Float: 1f */);
	}
	if (iVar0 == 0)
	{
		return;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, false, 9, false))
	{
		if (iVar1 == joaat("WEAPON_UNARMED") || iVar1 == 0)
		{
			WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iVar0, 99, false, true, 9, false, 0.5f, 1f, 752097756, false, 0f, false);
		}
	}
	bLocal_80 = true;
}

void func_293(var uParam0, int iParam1)
{
	iLocal_198 = iParam1;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_41))
	{
		iLocal_41 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(__LIB_3__::func_136(1074283306, 0));
	}
	switch (iParam1)
	{
		case 0:
			StringCopy(&(uParam0->f_2575), "RHNTN_S2_INT", 24);
			__LIB_12__::func_779(uParam0, __LIB_1__::func_440(uParam0->f_174));
			__LIB_12__::func_957(uParam0, iLocal_41, "p_door37x", 0, 0, 0);
			__LIB_13__::func_59(uParam0, iLocal_24, 0, 0, 0, 0);
			__LIB_13__::func_59(uParam0, Local_633.f_2, "A_F_M_BTCHILLBILLY_01", 0, 0, 0);
			__LIB_13__::func_465(uParam0, 0, 0, 0);
			break;
		case 1:
			StringCopy(&(uParam0->f_2575), "RHNTN_S2_EXT", 24);
			__LIB_12__::func_779(uParam0, __LIB_1__::func_440(uParam0->f_174));
			__LIB_12__::func_957(uParam0, iLocal_41, "p_door37x", 0, 0, 0);
			__LIB_12__::func_676(&(uParam0->f_206), "MultiStart");
			__LIB_13__::func_465(uParam0, 0, 0, 0);
			break;
	}
	__LIB_0__::func_7(&(uParam0->f_172), 16);
	__LIB_12__::func_981(uParam0, 81950);
}

bool func_294(var uParam0)
{
	CAM::DO_SCREEN_FADE_IN(500);
	func_582(uParam0, joaat("FOG"));
	iLocal_200 = 1;
	func_293(uParam0, 1);
	func_319(uParam0);
	return true;
}

bool func_295(var uParam0)
{
	if (func_583(uParam0))
	{
		CAM::DO_SCREEN_FADE_IN(500);
		func_582(uParam0, joaat("FOG"));
		iLocal_200 = 1;
		func_293(uParam0, 1);
		iLocal_197 = 1;
		__LIB_1__::func_683(&iLocal_196, 8);
		__LIB_13__::func_62(uParam0, func_61(1), func_61(2), 1, 2, 0);
		return true;
	}
	return false;
}

bool func_296(var uParam0)
{
	if (func_585(uParam0))
	{
		if (func_586(0, 4, "pl_Idle_Frantic"))
		{
			CAM::DO_SCREEN_FADE_IN(500);
			func_587(8, 0);
			__LIB_2__::func_620(&uLocal_70, 2f);
			Local_643 = 4;
			__LIB_1__::func_683(&iLocal_196, 8);
			func_339(uParam0, 3);
			iLocal_197 = 1;
			func_582(uParam0, joaat("FOG"));
			iLocal_200 = 1;
			func_293(uParam0, 1);
			__LIB_13__::func_62(uParam0, func_61(2), func_61(3), 2, 3, 0);
			return true;
		}
	}
	return false;
}

bool func_297(var uParam0)
{
	if (func_588(uParam0))
	{
		CAM::DO_SCREEN_FADE_IN(500);
		func_339(uParam0, 4);
		func_582(uParam0, joaat("FOG"));
		iLocal_200 = 1;
		func_293(uParam0, 1);
		iLocal_197 = 3;
		__LIB_1__::func_683(&iLocal_196, 32);
		__LIB_13__::func_62(uParam0, func_61(3), func_61(4), 3, 4, 0);
		return true;
	}
	return false;
}

bool func_298(var uParam0)
{
	if (func_337(uParam0))
	{
		func_340(uParam0);
		if (iLocal_199 == 1)
		{
			func_339(uParam0, 6);
			CAM::DO_SCREEN_FADE_IN(500);
			func_582(uParam0, joaat("FOG"));
			iLocal_200 = 2;
			func_293(uParam0, 1);
			iLocal_197 = 4;
			return true;
		}
	}
	return false;
}

bool func_299(var uParam0)
{
	func_589(uParam0, vLocal_98, fLocal_101, 1);
	if (!__LIB_0__::func_272(Local_643.f_2, 0))
	{
		return false;
	}
	func_590(uParam0, vLocal_95, 286.2403f, 1);
	if (!__LIB_0__::func_272(Local_653.f_2, 0))
	{
		return false;
	}
	if (!func_591(uParam0))
	{
		return false;
	}
	if (!bLocal_177)
	{
		func_582(uParam0, joaat("FOG"));
		iLocal_200 = 2;
		func_293(uParam0, 1);
		__LIB_13__::func_59(uParam0, iLocal_24, 0, 0, 0, 0);
		__LIB_13__::func_59(uParam0, iLocal_26, 0, 0, 0, 0);
		__LIB_13__::func_59(uParam0, Local_653.f_2, "A_M_M_BTCHILLBILLY_01", 0, 0, 0);
		__LIB_13__::func_59(uParam0, Local_643.f_2, "A_M_M_BTCHILLBILLY_01^1", 0, 0, 0);
		__LIB_13__::func_59(uParam0, Local_633.f_2, "A_F_M_BTCHILLBILLY_01", 0, 0, 0);
		__LIB_13__::func_59(uParam0, iLocal_36, "A_F_M_BTCHILLBILLY_01^1", 0, 0, 0);
		__LIB_13__::func_59(uParam0, iLocal_37, "A_M_M_BTCHILLBILLY_01^2", 0, 0, 0);
		__LIB_12__::func_957(uParam0, iLocal_18[0], "P_CHAIR04X", 0, 0, 0);
		__LIB_12__::func_957(uParam0, iLocal_18[1], "P_CHAIR04X^1", 0, 0, 0);
		func_339(uParam0, 7);
		bLocal_177 = true;
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 1))
	{
		return false;
	}
	CAM::DO_SCREEN_FADE_IN(500);
	return true;
}

bool func_306(var uParam0)
{
	if (iLocal_198 == 0)
	{
		switch (iLocal_679)
		{
			case 1:
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
				if (!PED::_0xB91AB3BE7F655D49(Global_35) || __LIB_5__::func_51(&uLocal_680) > 4f)
				{
					iLocal_679 = 2;
				}
				return false;
			case 2:
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
				__LIB_4__::func_516(1, 0);
				return true;
		}
	}
	return true;
}

int func_312(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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
					__LIB_8__::func_898(uParam4, 4);
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
				__LIB_8__::func_898(uParam4, 3);
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
				__LIB_5__::func_107(&(uParam4->f_1));
				__LIB_8__::func_898(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				__LIB_12__::func_913(uParam4);
				if (!__LIB_2__::func_618(&(uParam4->f_1)))
				{
					__LIB_8__::func_901(&(uParam4->f_1), 0);
				}
				else if (__LIB_5__::func_51(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					__LIB_8__::func_898(uParam4, 4);
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
						__LIB_8__::func_898(uParam4, 4);
					}
					else if (!__LIB_0__::func_86(__LIB_0__::func_85(uParam4)) && !__LIB_0__::func_266(Global_35, __LIB_0__::func_85(uParam4), 100f, 1, 1))
					{
						__LIB_0__::func_87(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), __LIB_0__::func_85(uParam4), 0f, true, true, true, false);
					}
				}
				else if (__LIB_5__::func_51(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					__LIB_8__::func_898(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::_0xA565FAC215CBC77D();
					__LIB_0__::func_722(1, 0);
					__LIB_13__::func_18(uParam4, &uParam0, uParam5);
					__LIB_8__::func_898(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (__LIB_5__::func_51(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
				}
				__LIB_8__::func_898(uParam4, 4);
			}
			break;
		case 3:
			func_615(uParam4);
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
					__LIB_5__::func_107(&(uParam4->f_1));
					__LIB_0__::func_88(uParam4, 512);
					__LIB_8__::func_898(uParam4, 4);
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
				__LIB_13__::func_512(uParam4);
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
						__LIB_5__::func_107(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_12__::func_677(uParam4, 67108864, 1);
						__LIB_8__::func_898(uParam4, 4);
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
				__LIB_13__::func_512(uParam4);
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
						__LIB_8__::func_898(uParam4, 3);
					}
					else if (__LIB_5__::func_51(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, false);
						}
						__LIB_8__::func_898(uParam4, 3);
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
			__LIB_8__::func_898(uParam4, 4);
			break;
	}
	return 0;
}

void func_316()
{
	__LIB_1__::func_948(1074283306, 1, 0f, 0, 0, 0, 0, 0);
}

void func_317()
{
	if (iLocal_65 == 0)
	{
		if (__LIB_0__::func_272(Local_633.f_2, 0))
		{
			if (__LIB_0__::func_94(Local_633.f_2, vLocal_92, 1) < 2f)
			{
				__LIB_1__::func_948(2071224706, 1, 0f, 0, 0, 0.2f, 0, 0);
				iLocal_65 = 1;
			}
			else
			{
				__LIB_1__::func_948(2071224706, 0, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_319(var uParam0)
{
	__LIB_1__::func_683(&iLocal_196, 2);
	__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 0);
	func_339(uParam0, 0);
}

void func_320()
{
	if (!__LIB_1__::func_565(&uLocal_69))
	{
		uLocal_69 = GRAPHICS::_0xFA50F79257745E74(2509.4f, 812.13f, 71.33f, 3f, 1, 12, 0);
	}
}

void func_321(bool bParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_643.f_2))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_643.f_2) || !bParam0)
		{
			PED::DELETE_PED(&(Local_643.f_2));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_653.f_2))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_653.f_2) || !bParam0)
		{
			PED::DELETE_PED(&(Local_653.f_2));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_633.f_2))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_633.f_2) || !bParam0)
		{
			PED::DELETE_PED(&(Local_633.f_2));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_36))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_36) || !bParam0)
		{
			PED::DELETE_PED(&iLocal_36);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_37))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_37) || !bParam0)
		{
			PED::DELETE_PED(&iLocal_37);
		}
	}
}

bool func_322(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_12__::func_655(uParam0, 32768))
	{
		return true;
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		uParam0->f_1792 = __LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_1793 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_1795 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_1793)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_1794 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_1794 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_1795)
		{
			uParam0->f_1797 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_1798 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		__LIB_12__::func_850(uParam0);
	}
	if (__LIB_0__::func_78(uParam0) < 10)
	{
		if (__LIB_0__::func_78(uParam0) == 3)
		{
			__LIB_13__::func_102(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_12__::func_655(uParam0, 524288))
				{
					__LIB_14__::func_99(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_12__::func_691(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_12__::func_965(uParam0, iParam5);
					return true;
				}
			}
			if (!__LIB_12__::func_655(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			}
			CAM::_0x8910C24B7E0046EC();
			__LIB_1__::func_538(0);
			__LIB_1__::func_725();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if (uParam0->f_1580 >= 0)
			{
				if (!__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (__LIB_12__::func_692(uParam0, uParam0->f_1580))
				{
					if (__LIB_4__::func_576(uParam0) < 7 && uParam0->f_1584 >= 0)
					{
						__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_1584 >= 0)
				{
					__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				__LIB_12__::func_983(uParam0);
			}
		}
	}
	bVar0 = __LIB_12__::func_922(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!__LIB_12__::func_655(uParam0, 268435456) && bVar1) && !__LIB_12__::func_655(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_1798);
			if (uParam0->f_1580 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_912[uParam0->f_1580 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_1798)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				__LIB_12__::func_693(uParam0, 131072);
				__LIB_12__::func_693(uParam0, 268435456);
			}
		}
		if (__LIB_12__::func_687(uParam0, 64) || (uParam0->f_1580 >= 0 && !__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || __LIB_0__::func_81(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) == 3 || __LIB_12__::func_655(uParam0, 131072))
	{
		__LIB_12__::func_802(uParam0);
		if (!__LIB_12__::func_655(uParam0, 262144))
		{
			if ((bVar0 && __LIB_12__::func_655(uParam0, 65536)) || __LIB_12__::func_655(uParam0, 131072))
			{
				__LIB_12__::func_693(uParam0, 32768);
				__LIB_12__::func_691(uParam0, 4);
				__LIB_0__::func_115(uParam0, 10);
				uParam0->f_1665 = 1;
				__LIB_12__::func_965(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_18__::func_757(uParam0, iParam5);
		__LIB_12__::func_694(uParam0);
		if (!__LIB_12__::func_695(uParam0, 1))
		{
			__LIB_12__::func_753(uParam0);
		}
		__LIB_12__::func_696(uParam0);
	}
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_12__::func_958(uParam0, Param1, iParam5);
			break;
		case 1:
			__LIB_12__::func_929(uParam0);
			break;
		case 2:
			__LIB_13__::func_374(uParam0);
			break;
		case 3:
			if (__LIB_12__::func_670(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1580 /*41*/].f_27, uParam0->f_1241[uParam0->f_1580 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_5__::func_107(&(uParam0->f_1768));
				__LIB_12__::func_691(uParam0, 1);
				__LIB_4__::func_582();
				__LIB_0__::func_115(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!__LIB_12__::func_655(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (__LIB_0__::func_78(uParam0) == 5)
			{
				if (__LIB_12__::func_697(uParam0))
				{
					__LIB_12__::func_691(uParam0, 2);
					__LIB_0__::func_115(uParam0, 6);
				}
			}
			if (__LIB_0__::func_78(uParam0) == 6)
			{
				if (__LIB_12__::func_698(uParam0))
				{
					__LIB_12__::func_691(uParam0, 3);
					__LIB_0__::func_115(uParam0, 8);
				}
			}
			if (uParam0->f_1581 >= 0 || __LIB_5__::func_53(&(uParam0->f_1768)) >= 15f)
			{
				if (__LIB_13__::func_363(uParam0, iParam5))
				{
					if (__LIB_12__::func_699(uParam0))
					{
						uParam0->f_1581 = __LIB_12__::func_754(uParam0);
						__LIB_5__::func_107(&(uParam0->f_1768));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						__LIB_12__::func_691(uParam0, 6);
						__LIB_0__::func_115(uParam0, 9);
					}
					else
					{
						__LIB_12__::func_691(uParam0, 4);
						__LIB_0__::func_115(uParam0, 10);
						__LIB_12__::func_965(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_13__::func_363(uParam0, iParam5))
			{
				__LIB_12__::func_965(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

void func_325()
{
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		return;
	}
	if (((((((((((__LIB_0__::func_272(Local_266[0 /*32*/], 0) && __LIB_0__::func_665(Local_266[0 /*32*/], Global_35, 1, 1) < 5f) || (__LIB_0__::func_272(Local_266[1 /*32*/], 0) && __LIB_0__::func_665(Local_266[1 /*32*/], Global_35, 1, 1) < 5f)) || (__LIB_0__::func_272(Local_331[0 /*32*/], 0) && __LIB_0__::func_665(Local_331[0 /*32*/], Global_35, 1, 1) < 5f)) || (__LIB_0__::func_272(Local_331[1 /*32*/], 0) && __LIB_0__::func_665(Local_331[1 /*32*/], Global_35, 1, 1) < 5f)) || (__LIB_0__::func_272(Local_331[2 /*32*/], 0) && __LIB_0__::func_665(Local_331[2 /*32*/], Global_35, 1, 1) < 5f)) || (__LIB_0__::func_272(Local_428[0 /*32*/], 0) && __LIB_0__::func_665(Local_428[0 /*32*/], Global_35, 1, 1) < 5f)) || (__LIB_0__::func_272(Local_428[1 /*32*/], 0) && __LIB_0__::func_665(Local_428[1 /*32*/], Global_35, 1, 1) < 5f)) || (__LIB_0__::func_272(Local_493[0 /*32*/], 0) && __LIB_0__::func_665(Local_493[0 /*32*/], Global_35, 1, 1) < 5f)) || (__LIB_0__::func_272(Local_493[1 /*32*/], 0) && __LIB_0__::func_665(Local_493[1 /*32*/], Global_35, 1, 1) < 5f)) || (__LIB_0__::func_272(Local_558[0 /*32*/], 0) && __LIB_0__::func_665(Local_558[0 /*32*/], Global_35, 1, 1) < 5f)) || (__LIB_0__::func_272(Local_558[1 /*32*/], 0) && __LIB_0__::func_665(Local_558[1 /*32*/], Global_35, 1, 1) < 5f))
	{
		if (!__LIB_0__::func_163(PED::GET_MOUNT(Global_35), 1041577989))
		{
			TASK::CLEAR_PED_TASKS(PED::GET_MOUNT(Global_35), true, false);
			TASK::TASK_HORSE_ACTION(PED::GET_MOUNT(Global_35), 2, 0, 0);
		}
	}
}

void func_327(var uParam0)
{
	func_665(&Local_266, 0, 15f);
	switch (Local_633)
	{
		case 0:
			if (func_666(uParam0))
			{
				func_667(0);
				iLocal_42 = __LIB_8__::func_777(408396114, vLocal_43, fLocal_46, 1);
				__LIB_5__::func_107(&(Local_633.f_6));
				AUDIO::_PLAY_SOUND_FROM_POSITION("PIG_ATTACK", 2593.69f, 775.26f, 82.81f, sLocal_62, false, 0, true, 0);
				Local_633 = 3;
			}
			break;
		case 3:
			func_669();
			func_670(uParam0);
			func_671();
			if (!bLocal_175)
			{
				if (bLocal_173)
				{
					if (!__LIB_6__::func_904() || __LIB_0__::func_94(Local_633.f_2, Global_36, 1) < 22f)
					{
						TASK::TASK_GO_STRAIGHT_TO_COORD(Local_633.f_2, vLocal_92, 2f, -1, 40000f, 1056964608 /* Float: 0.5f */, 0);
						bLocal_175 = true;
					}
				}
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_42))
			{
			}
			if (func_672(&Local_266))
			{
				func_673();
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				func_339(uParam0, 1);
				__LIB_5__::func_107(&uLocal_70);
				Local_633 = 4;
				__LIB_1__::func_683(&iLocal_196, 8);
			}
			break;
		case 4:
			if (__LIB_5__::func_51(&uLocal_70) > 2f && !__LIB_6__::func_904())
			{
				if (__LIB_0__::func_181())
				{
					__LIB_12__::func_876(uParam0, "PW2_H_TA_J", 0);
				}
				else
				{
					__LIB_12__::func_876(uParam0, "PW2_H_TA", 0);
				}
				Local_633 = 5;
			}
			break;
		case 5:
			if (!__LIB_6__::func_904())
			{
				__LIB_1__::func_681(&iLocal_196, 2);
				func_405(&Local_633, &Local_266, 0);
			}
			break;
	}
}

void func_328(var uParam0)
{
	func_676(&Local_331);
	switch (Local_643)
	{
		case 0:
			if (func_583(uParam0))
			{
				__LIB_5__::func_107(&(Local_643.f_6));
				Local_643 = 2;
			}
			break;
		case 2:
			func_677(uParam0);
			if (!bLocal_182)
			{
				if (Local_633 == 5)
				{
					if (__LIB_2__::func_618(&uLocal_630))
					{
						if (!__LIB_6__::func_904())
						{
							if (__LIB_0__::func_181())
							{
								__LIB_12__::func_876(uParam0, "PW2_H_M_J", 0);
							}
							else
							{
								__LIB_12__::func_876(uParam0, "PW2_H_M_A", 0);
							}
							bLocal_182 = true;
						}
					}
				}
			}
			if (func_678(Local_643.f_2) || func_679(&Local_643, &Local_331))
			{
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_0__::func_325(&iLocal_42);
				func_680(&Local_331);
				func_667(4);
				func_587(8, 1);
				func_339(uParam0, 2);
				__LIB_5__::func_107(&(Local_643.f_6));
				__LIB_5__::func_107(&(Local_653.f_3));
				Local_643 = 3;
			}
			break;
		case 3:
			if (!__LIB_0__::func_27(iLocal_196, 8388608))
			{
				if (!__LIB_0__::func_272(Local_331[2 /*32*/], 0))
				{
					if (func_681(0, "pl_Idle_Scared"))
					{
						__LIB_1__::func_683(&iLocal_196, 8388608);
					}
				}
			}
			func_682();
			func_677(uParam0);
			func_683(&Local_643, &Local_331, uParam0);
			if (func_672(&Local_331))
			{
				func_339(uParam0, 3);
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_5__::func_107(&uLocal_70);
				Local_643 = 4;
			}
			break;
		case 4:
			if (!__LIB_6__::func_904())
			{
				if (func_681(0, "pl_Convo_Dogs_Gone"))
				{
					if (PED::_0x5102307CE88798EB(Local_643.f_2))
					{
						PED::_0x3088634CF8C819CF(Local_643.f_2);
					}
					__LIB_1__::func_683(&iLocal_196, 16);
					Local_643 = 5;
				}
			}
			break;
		case 5:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_201[0 /*16*/]))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_201[0 /*16*/]) || ANIMSCENE::_0xF94692EB9DC15D74(Local_201[0 /*16*/], 0))
				{
					__LIB_1__::func_681(&iLocal_196, 8);
					func_405(&Local_643, &Local_331, 0);
				}
			}
			break;
	}
}

void func_329(var uParam0)
{
	func_676(&Local_428);
	if (__LIB_0__::func_272(Local_653.f_2, 0))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_653.f_2, 0))
		{
			if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_653.f_2) >= 20 && TASK::GET_PED_WAYPOINT_PROGRESS(Local_653.f_2) < 40)
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_653.f_2, 2f, 0, -1082130432 /* Float: -1f */, 0);
			}
		}
	}
	switch (Local_653)
	{
		case 0:
			if (!__LIB_0__::func_27(iLocal_196, 8) || (Local_643 == 5 && ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_201[0 /*16*/]) > 3f))
			{
				if (func_585(uParam0))
				{
					func_684();
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_653.f_2, 1);
					Local_653 = 2;
				}
			}
			break;
		case 2:
			func_685();
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_653.f_2, 0) && TASK::GET_PED_WAYPOINT_PROGRESS(Local_653.f_2) > 5)
			{
				func_667(5);
				func_587(8, 0);
				func_587(16, 1);
				__LIB_5__::func_107(&(Local_653.f_3));
				__LIB_5__::func_107(&(Local_643.f_3));
				__LIB_1__::func_683(&iLocal_196, 256);
				func_339(uParam0, 4);
				__LIB_1__::func_683(&iLocal_196, 32);
				Local_653 = 3;
			}
			else
			{
				__LIB_5__::func_107(&uLocal_164);
			}
			break;
		case 3:
			func_686();
			func_687(uParam0);
			func_688(uParam0);
			func_685();
			func_665(&Local_428, 1, 1106247680 /* Float: 30f */);
			if (func_672(&Local_428))
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_653.f_2, 0) && __LIB_5__::func_51(&(Local_653.f_3)) > 2f)
				{
					if (__LIB_0__::func_399(Local_653.f_2, 1, 0, 0) == joaat("WEAPON_MELEE_DAVY_LANTERN"))
					{
						WEAPON::_0xCEF4C65DE502D367(Local_653.f_2, 0, 0, 1, 0);
					}
					PED::_0x935CF6E42BAF7F4D(Local_653.f_2);
					TASK::TASK_LOOK_AT_ENTITY(Local_653.f_2, Global_35, -1, 0, 51, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_653.f_2, Global_35, -1, -1f, -1f, -1f);
					TASK::TASK_LOOK_AT_ENTITY(Local_643.f_2, Global_35, -1, 0, 51, 0);
					func_339(uParam0, 5);
					Local_653 = 4;
				}
			}
			else
			{
				__LIB_5__::func_107(&(Local_653.f_3));
				if (!bLocal_183)
				{
					if (!__LIB_6__::func_904() && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_201[0 /*16*/], false))
					{
						__LIB_12__::func_876(uParam0, "PW2_R1_B", 0);
						bLocal_183 = true;
					}
				}
				else if (!__LIB_2__::func_618(&uLocal_184) || __LIB_5__::func_51(&uLocal_184) > 5f)
				{
					if (!__LIB_6__::func_904())
					{
						__LIB_5__::func_107(&uLocal_184);
						__LIB_12__::func_876(uParam0, "PW2_R_FR", 0);
					}
				}
			}
			break;
		case 4:
			if (!__LIB_6__::func_904())
			{
				__LIB_12__::func_876(uParam0, "PW2_R_F4", 0);
				__LIB_1__::func_683(&iLocal_196, 65536);
				if (!bLocal_686)
				{
					func_689();
				}
				Local_653 = 5;
			}
			break;
		case 5:
			if (!__LIB_6__::func_904() && (TASK::GET_SCRIPT_TASK_STATUS(Local_653.f_2, 658540077, true) != 1 || __LIB_0__::func_94(Local_653.f_2, vLocal_105, 1) < 5f))
			{
				if (PED::_0x5102307CE88798EB(Local_653.f_2))
				{
					PED::_0x3088634CF8C819CF(Local_653.f_2);
				}
				__LIB_1__::func_681(&iLocal_196, 16);
				func_405(&Local_653, &Local_428, 0);
			}
			break;
	}
}

void func_330(var uParam0)
{
	func_676(&Local_558);
	switch (Local_663)
	{
		case 0:
			if (func_588(uParam0))
			{
				Local_663 = 2;
			}
			break;
		case 2:
			if (!__LIB_0__::func_27(iLocal_196, 16) && !__LIB_6__::func_904())
			{
				ENTITY::_SET_ENTITY_HEALTH(Local_653.f_2, 45, 0);
				PED::_0xAAB050DA48B57978(Local_653.f_2, "Flee_Panic", 0, -1, 4);
				if (__LIB_0__::func_181())
				{
					__LIB_12__::func_876(uParam0, "PW2_R_A1_J", 0);
				}
				else
				{
					__LIB_12__::func_876(uParam0, "PW2_R_A1", 0);
				}
				func_667(6);
				func_587(8, 1);
				func_587(16, 1);
				func_690(-1082130432 /* Float: -1f */);
				__LIB_5__::func_107(&(Local_653.f_3));
				Local_663 = 3;
			}
			break;
		case 3:
			func_691();
			if (func_692())
			{
				ANIMSCENE::START_ANIM_SCENE(Local_201[1 /*16*/]);
			}
			if (func_693())
			{
				ANIMSCENE::START_ANIM_SCENE(Local_201[2 /*16*/]);
			}
			func_694(uParam0);
			if (!__LIB_0__::func_27(iLocal_196, 32768) && !__LIB_6__::func_904())
			{
				func_339(uParam0, 6);
				__LIB_1__::func_683(&iLocal_196, 32768);
			}
			if (func_672(&Local_493) && func_672(&Local_558))
			{
				__LIB_5__::func_107(&(Local_663.f_3));
				Local_663 = 5;
			}
			break;
		case 5:
			if (__LIB_5__::func_51(&(Local_663.f_3)) > 3f && !__LIB_6__::func_904())
			{
				__LIB_1__::func_681(&iLocal_196, 32);
				func_405(&Local_663, &Local_493, 0);
			}
			break;
	}
}

void func_331()
{
	PED::_0xAB0D553FE20A6E25(0f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (!__LIB_0__::func_27(iLocal_196, 134217728))
	{
		__LIB_0__::func_568(2598.1f, 806.13f, 83.97f, 300f, 0);
		__LIB_1__::func_683(&iLocal_196, 134217728);
	}
	if (!__LIB_0__::func_27(iLocal_196, 4096))
	{
		if (CLOCK::GET_CLOCK_HOURS() >= 4)
		{
			CLOCK::PAUSE_CLOCK(true, 0);
			__LIB_1__::func_683(&iLocal_196, 4096);
		}
	}
}

void func_333()
{
	__LIB_0__::func_325(&iLocal_42);
	func_667(2);
	iLocal_42 = __LIB_8__::func_777(408396114, vLocal_47, fLocal_50, 1);
}

void func_334(int iParam0)
{
	iLocal_197 = iParam0;
}

bool func_337(var uParam0)
{
	func_590(uParam0, vLocal_55, fLocal_58, 0);
	func_589(uParam0, vLocal_51, fLocal_54, 0);
	if (__LIB_0__::func_272(Local_653.f_2, 0) && __LIB_0__::func_272(Local_643.f_2, 0))
	{
		return true;
	}
	return false;
}

void func_339(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			__LIB_12__::func_937(uParam0, 0);
			break;
		case 1:
			__LIB_12__::func_937(uParam0, 1);
			break;
		case 2:
			__LIB_12__::func_937(uParam0, 2);
			break;
		case 3:
			__LIB_12__::func_937(uParam0, 3);
			break;
		case 4:
			__LIB_12__::func_937(uParam0, 4);
			break;
		case 5:
			__LIB_12__::func_937(uParam0, 5);
			break;
		case 6:
			__LIB_12__::func_937(uParam0, 6);
			break;
		case 7:
			__LIB_12__::func_937(uParam0, 7);
			break;
	}
}

bool func_340(var uParam0)
{
	__LIB_14__::func_98(Global_35, vLocal_59, &uLocal_691, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 1097859072 /* Float: 15f */, 10f, 1f, 0, 0, 1, 1, 0);
	switch (iLocal_199)
	{
		case 0:
			if (func_591(uParam0) && func_586(3, 4, 0))
			{
				__LIB_5__::func_20(1, 0);
				iLocal_199 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_266(Global_35, vLocal_59, 5f, 1, 1))
			{
				if (!PED::IS_PED_ON_MOUNT(Global_35))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
					if (__LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("WEAPON_UNARMED") && __LIB_0__::func_399(Global_35, 1, 1, 0) == joaat("WEAPON_UNARMED"))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_201[3 /*16*/], "Loop_Idle", true, false);
						PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), Local_653.f_2, "RC_HNTN2", 0f, 0f, 0f, 0, 0);
						iLocal_199 = 2;
					}
					else if (!__LIB_2__::func_618(&uLocal_688) || __LIB_5__::func_51(&uLocal_688) > 3f)
					{
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 1, false, false);
						TASK::TASK_SWAP_WEAPON(Global_35, 1, 1, 0, 0);
						__LIB_5__::func_107(&uLocal_688);
					}
				}
			}
			else if (!MAP::DOES_BLIP_EXIST(iLocal_42))
			{
				iLocal_42 = __LIB_4__::func_983(408396114, vLocal_59, 1);
				func_667(7);
			}
			break;
		case 2:
			if ((ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_201[3 /*16*/], false) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_201[3 /*16*/])) || __LIB_3__::func_642(Local_201[3 /*16*/], 100))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_377(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			__LIB_11__::func_422();
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
						func_741(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_741(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_741(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_741(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_741(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_741(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_741(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_741(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_741(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_741(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_741(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_741(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_741(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_741(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_741(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_741(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_741(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_741(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_741(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_741(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_741(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_741(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_741(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_741(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_741(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_743();
						func_744(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_741(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_377(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_377(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_377(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_741(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_741(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_779();
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
							func_741(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

void func_405(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (bParam2)
	{
		if (MAP::DOES_BLIP_EXIST(iParam0->f_1))
		{
			__LIB_0__::func_325(&(iParam0->f_1));
		}
		__LIB_2__::func_788(&(iParam0->f_2), 0, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (MAP::DOES_BLIP_EXIST((iParam1[iVar0 /*32*/])->f_1))
		{
			__LIB_0__::func_325(&((iParam1[iVar0 /*32*/])->f_1));
		}
		__LIB_2__::func_788(iParam1[iVar0 /*32*/], 0, 0, 1);
		iVar0++;
	}
}

int func_459(int iParam0, int iParam1)
{
	var uVar0;
	return func_867(&uVar0, iParam0, iParam1);
}

void func_571()
{
	switch (iLocal_200)
	{
		case 0:
			if (__LIB_0__::func_94(Global_35, 2555.33f, 787.78f, 74.63f, 1) < 120f)
			{
				MISC::_SET_WEATHER_TYPE(joaat("FOG"), false, true, true, 20f, false);
				iLocal_200 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_94(Global_35, 2555.33f, 787.78f, 74.63f, 1) > 150f)
			{
				MISC::_SET_WEATHER_TYPE(joaat("OVERCAST"), false, true, true, 30f, false);
				iLocal_200 = 2;
			}
			break;
		case 2:
			if (MISC::_GET_NEXT_WEATHER_TYPE_HASH_NAME() == joaat("OVERCAST"))
			{
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				iLocal_200 = 0;
			}
			break;
	}
}

int func_576(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (((__LIB_0__::func_27(iParam0, 8388608) && __LIB_0__::func_27(iParam0, 1048576)) && __LIB_0__::func_27(iParam0, 2097152)) && __LIB_0__::func_27(iParam0, 4194304))
	{
		return joaat("WEAPON_REPEATER_CARBINE");
	}
	iVar0 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_REPEATER"), fParam1, iParam2, 0);
	iVar1 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_RIFLE"), fParam1, iParam2, 0);
	iVar2 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_SNIPER"), fParam1, iParam2, 0);
	iVar3 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_SHOTGUN"), fParam1, iParam2, 0);
	while (__LIB_3__::func_551(iVar3))
	{
		iVar4++;
		if (iVar4 >= 10)
		{
			iVar3 = joaat("WEAPON_SHOTGUN_DOUBLEBARREL");
			Jump @189; //curOff = 164
		}
		else
		{
			iVar3 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_SHOTGUN"), fParam1, iParam2, 0);
		}
	}
	if (!__LIB_0__::func_214(iVar3))
	{
		iVar3 = joaat("WEAPON_REPEATER_CARBINE");
	}
	iVar5 = 0;
	if (!__LIB_0__::func_27(iParam0, 8388608))
	{
		iVar5 = iVar0;
	}
	if (!__LIB_0__::func_27(iParam0, 1048576))
	{
		if (!__LIB_0__::func_154(iVar5) || WEAPON::_0xF2F585411E748B9C(iVar1, 0) > WEAPON::_0xF2F585411E748B9C(iVar5, 0))
		{
			iVar5 = iVar1;
		}
	}
	if (!__LIB_0__::func_27(iParam0, 2097152))
	{
		if (!__LIB_0__::func_154(iVar5) || WEAPON::_0xF2F585411E748B9C(iVar3, 0) > WEAPON::_0xF2F585411E748B9C(iVar5, 0))
		{
			iVar5 = iVar3;
		}
	}
	if (!__LIB_0__::func_27(iParam0, 4194304))
	{
		if (!__LIB_0__::func_154(iVar5) || WEAPON::_0xF2F585411E748B9C(iVar2, 0) > WEAPON::_0xF2F585411E748B9C(iVar5, 0))
		{
			iVar5 = iVar2;
		}
	}
	if (!__LIB_0__::func_154(iVar5))
	{
		return joaat("WEAPON_REPEATER_CARBINE");
	}
	return iVar5;
}

void func_580(var uParam0)
{
	if (__LIB_0__::func_84(uParam0, 512))
	{
	}
	if (__LIB_13__::func_23(uParam0, "RHNTN_S2_INT"))
	{
		func_291();
		if (__LIB_13__::func_193(uParam0, Global_35, 0, 0, 1, 1) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0))
		{
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("rcm_hntn2_assist", 1, 0.5f, 1f, 0);
			TASK::TASK_LOOK_AT_COORD(Global_35, 2574.638f, 800.7398f, 77.6939f, 3000, 0, 51, 0);
			__LIB_0__::func_569(joaat("MOTIONSTATE_RUN"), 2250, 0, 1, 1, 0, 0, 0);
		}
	}
	if (__LIB_13__::func_14(uParam0, 1))
	{
	}
	if (__LIB_13__::func_23(uParam0, "RHNTN_S2_EXT"))
	{
		if (__LIB_13__::func_193(uParam0, Local_633.f_2, "A_F_M_BTCHILLBILLY_01", 0, 1, 1))
		{
			WEAPON::_GIVE_WEAPON_TO_PED_2(Local_633.f_2, joaat("WEAPON_MELEE_TORCH"), 1, true, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
			WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Local_633.f_2, false);
		}
		if (__LIB_13__::func_193(uParam0, iLocal_36, "A_F_M_BTCHILLBILLY_01^1", 0, 1, 1))
		{
			WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_36, joaat("WEAPON_MELEE_TORCH"), 1, true, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
			WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iLocal_36, false);
		}
		if (__LIB_13__::func_193(uParam0, iLocal_37, "A_M_M_BTCHILLBILLY_01^2", 0, 1, 1))
		{
			WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_37, joaat("WEAPON_MELEE_TORCH"), 1, true, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
			WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iLocal_37, false);
		}
	}
}

void func_582(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iVar0 > 3 && iVar0 < 22)
	{
		CLOCK::SET_CLOCK_TIME(0, 0, 0);
	}
	__LIB_0__::func_568(2538.73f, 799.05f, 76.92f, 300f, 0);
	PED::_0x9851DE7AEC10B4E1(2538.73f, 799.05f, 76.92f, 150f, 1, 0);
	FIRE::STOP_FIRE_IN_RANGE(2538.73f, 799.05f, 76.92f, 150f);
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(2538.73f, 799.05f, 76.92f, 150f);
	__LIB_3__::func_618(2538.73f, 799.05f, 76.92f, 150f, 1, 0, 0, 0, 0);
	MISC::_SET_WEATHER_TYPE(iParam1, true, true, false, 0f, false);
	__LIB_13__::func_91(uParam0, 0);
	func_320();
	func_316();
	func_317();
}

bool func_583(var uParam0)
{
	func_589(uParam0, vLocal_98, fLocal_101, 1);
	func_959(uParam0, &(Local_331[0 /*32*/]), iLocal_30, 2503.48f, 815.62f, 71.05f, 19.05f, joaat("WORLD_ANIMAL_DOG_BARKING_VICIOUS"));
	func_959(uParam0, &(Local_331[1 /*32*/]), iLocal_31, 2505.7f, 816.81f, 70.84f, 83.82f, joaat("WORLD_ANIMAL_DOG_BARK_GROWL"));
	func_959(uParam0, &(Local_331[2 /*32*/]), iLocal_30, 2503.47f, 817.56f, 71.05f, 62.83f, joaat("WORLD_ANIMAL_DOG_BARKING_VICIOUS"));
	if (__LIB_0__::func_272(Local_643.f_2, 0) && AUDIO::_0xD9130842D7226045(sLocal_62, 0))
	{
		if (func_960(&Local_331))
		{
			if (func_586(0, 4, "pl_Idle_Frantic"))
			{
				PED::SET_PED_CONFIG_FLAG(Local_331[2 /*32*/], 138, true);
				return true;
			}
		}
	}
	return false;
}

bool func_585(var uParam0)
{
	func_590(uParam0, vLocal_95, 286.2403f, 1);
	func_589(uParam0, vLocal_102, fLocal_101, 1);
	func_959(uParam0, &(Local_428[0 /*32*/]), iLocal_30, 2453.64f, 825.7f, 72.45f, 260.1366f, joaat("WORLD_ANIMAL_DOG_BARKING_VICIOUS"));
	func_959(uParam0, &(Local_428[1 /*32*/]), iLocal_31, 2455.02f, 827.97f, 72.88f, 230.2699f, joaat("WORLD_ANIMAL_DOG_BARKING_VICIOUS"));
	if (__LIB_0__::func_272(Local_653.f_2, 0) && __LIB_0__::func_272(Local_643.f_2, 0))
	{
		if (func_960(&Local_428))
		{
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_64))
			{
				iLocal_64 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2459.034f, 810.1188f, 72.33899f, 0f, 0f, -14.85497f, 61.52998f, 85.95308f, 13.41934f, "volumeOtherSide");
			}
			PED::SET_PED_CONFIG_FLAG(Local_428[0 /*32*/], 138, true);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_428[0 /*32*/], 33, true);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_428[1 /*32*/], 33, true);
			return true;
		}
	}
	return false;
}

bool func_586(int iParam0, int iParam1, char* sParam2)
{
	if (!Local_201[iParam0 /*16*/].f_14)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_201[iParam0 /*16*/]))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_201[iParam0 /*16*/], true, false))
			{
				Local_201[iParam0 /*16*/].f_14 = 1;
				return Local_201[iParam0 /*16*/].f_14;
			}
		}
		else
		{
			if (MISC::IS_STRING_NULL(sParam2))
			{
				Local_201[iParam0 /*16*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_201[iParam0 /*16*/].f_1, iParam1, Local_201[iParam0 /*16*/].f_15, false, true);
			}
			else
			{
				Local_201[iParam0 /*16*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_201[iParam0 /*16*/].f_1, iParam1, sParam2, false, true);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_201[iParam0 /*16*/]))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_201[iParam0 /*16*/]);
				func_962(iParam0);
			}
		}
	}
	return Local_201[iParam0 /*16*/].f_14;
}

void func_587(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 8:
			if (__LIB_0__::func_272(Local_643.f_2, 0))
			{
				if (!MAP::DOES_BLIP_EXIST(Local_643.f_1))
				{
					Local_643.f_1 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, Local_643.f_2);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_643.f_1, "HNTN2_BLIP1B");
				}
				if (bParam1)
				{
					MAP::_BLIP_SET_MODIFIER(Local_643.f_1, -401963276);
				}
				else
				{
					MAP::_BLIP_REMOVE_MODIFIER(Local_643.f_1, -401963276);
				}
			}
			break;
		case 16:
			if (__LIB_0__::func_272(Local_653.f_2, 0))
			{
				if (!MAP::DOES_BLIP_EXIST(Local_653.f_1))
				{
					Local_653.f_1 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, Local_653.f_2);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_653.f_1, "HNTN2_BLIP1C");
				}
				if (bParam1)
				{
					MAP::_BLIP_SET_MODIFIER(Local_653.f_1, -401963276);
				}
				else
				{
					MAP::_BLIP_REMOVE_MODIFIER(Local_653.f_1, -401963276);
				}
			}
			break;
	}
}

bool func_588(var uParam0)
{
	func_590(uParam0, vLocal_105, 179.76f, 0);
	func_589(uParam0, vLocal_108, -121.85f, 1);
	func_959(uParam0, &(Local_493[0 /*32*/]), iLocal_31, 2540.4f, 823.04f, 75.01f, 120.83f, joaat("WORLD_ANIMAL_DOG_BARKING_VICIOUS"));
	func_959(uParam0, &(Local_493[1 /*32*/]), iLocal_30, 2540.9f, 798.44f, 75.37f, 124.8773f, joaat("WORLD_ANIMAL_DOG_EATING_GROUND"));
	func_959(uParam0, &(Local_558[0 /*32*/]), iLocal_30, 2563.056f, 776.5726f, 77.6817f, 334.0827f, joaat("WORLD_ANIMAL_DOG_BARKING_VICIOUS"));
	func_959(uParam0, &(Local_558[1 /*32*/]), iLocal_31, 2558.199f, 777.5662f, 74.5556f, 46.4451f, joaat("WORLD_ANIMAL_DOG_BARKING_VICIOUS"));
	if (__LIB_0__::func_272(Local_653.f_2, 0) && __LIB_0__::func_272(Local_643.f_2, 0))
	{
		if (func_960(&Local_493) && func_960(&Local_558))
		{
			func_288();
			PED::SET_PED_CONFIG_FLAG(Local_493[0 /*32*/], 138, true);
			if (!__LIB_0__::func_27(iLocal_196, 16))
			{
				func_587(8, 1);
			}
			func_587(16, 1);
			__LIB_1__::func_398(&(Local_493[0 /*32*/].f_2), 0);
			__LIB_1__::func_398(&(Local_493[1 /*32*/].f_2), 0);
			__LIB_1__::func_398(&(Local_558[0 /*32*/].f_2), 0);
			__LIB_1__::func_398(&(Local_558[1 /*32*/].f_2), 0);
			return true;
		}
	}
	return false;
}

void func_589(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_643.f_2))
	{
		Local_643.f_2 = __LIB_12__::func_885(uParam0, joaat("RCSP_POISONEDWELL_MALES_01"), vParam1, iParam4, 1, 1, 0, 1, 1, 0, 1, 1);
		if (__LIB_0__::func_272(Local_643.f_2, 0))
		{
			__LIB_0__::func_862(Local_643.f_2, -669008620);
			PED::_0xAAB050DA48B57978(Local_643.f_2, "Flee_Panic", 0, -1, 4);
			__LIB_12__::func_875(uParam0, Local_643.f_2, "RHNTN_RockVillager", 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_643.f_2, true);
			PED::SET_PED_CAN_BE_TARGETTED(Local_643.f_2, false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_643.f_2, joaat("REL_PLAYER_ALLY"));
			PED::SET_PED_CONFIG_FLAG(Local_643.f_2, 138, true);
			if (bParam5)
			{
				WEAPON::_GIVE_WEAPON_TO_PED_2(Local_643.f_2, joaat("WEAPON_MELEE_TORCH"), 1, true, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
			}
		}
	}
}

void func_590(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_653.f_2))
	{
		Local_653.f_2 = __LIB_12__::func_885(uParam0, joaat("RCSP_POISONEDWELL_MALES_01"), vParam1, iParam4, 1, 1, 0, 1, 1, 0, 1, 1);
		if (__LIB_0__::func_272(Local_653.f_2, 0))
		{
			__LIB_0__::func_862(Local_653.f_2, 1435678716);
			PED::_0xAAB050DA48B57978(Local_653.f_2, "Flee_Panic", 0, -1, 4);
			__LIB_12__::func_875(uParam0, Local_653.f_2, "RHNTN_Fisherman", 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_653.f_2, true);
			PED::SET_PED_CAN_BE_TARGETTED(Local_653.f_2, false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_653.f_2, joaat("REL_PLAYER_ALLY"));
			TASK::SET_PED_PATH_MAY_ENTER_WATER(Local_653.f_2, true);
			PED::SET_PED_CONFIG_FLAG(Local_653.f_2, 265, false);
			PED::SET_PED_CONFIG_FLAG(Local_653.f_2, 138, true);
			ENTITY::_SET_ENTITY_HEALTH(Local_653.f_2, 45, 0);
			if (bParam5)
			{
				__LIB_4__::func_7(Local_653.f_2, joaat("WEAPON_MELEE_DAVY_LANTERN"), 1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(Local_653.f_2, joaat("WEAPON_MELEE_DAVY_LANTERN"), true, 0, false, false);
			}
		}
	}
}

bool func_591(var uParam0)
{
	if (!bLocal_34)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_36))
		{
			iLocal_36 = __LIB_12__::func_885(uParam0, iLocal_29, 2554.34f, 810.83f, 75.4f, 0f, 1, 1, 0, 1, 1, 0, 1, 1);
			if (__LIB_0__::func_272(iLocal_36, 0))
			{
				__LIB_0__::func_862(iLocal_36, 1127531630);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_36, true);
				WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_36, joaat("WEAPON_MELEE_TORCH"), 1, true, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_36, joaat("WEAPON_MELEE_TORCH"), true, 0, false, false);
				WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iLocal_36, false);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_37))
		{
			iLocal_37 = __LIB_12__::func_885(uParam0, joaat("RCSP_POISONEDWELL_MALES_01"), 2554.34f, 810.83f, 75.4f, 0, 1, 1, 0, 1, 1, 1, 1, 0);
			if (__LIB_0__::func_272(iLocal_37, 0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_37, true);
				WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_37, joaat("WEAPON_MELEE_TORCH"), 1, true, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_37, joaat("WEAPON_MELEE_TORCH"), true, 0, false, false);
				WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iLocal_37, false);
			}
		}
		if (__LIB_0__::func_272(iLocal_36, 0) && __LIB_0__::func_272(iLocal_37, 0))
		{
			bLocal_34 = true;
		}
	}
	if (!bLocal_35)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_633.f_2))
		{
			Local_633.f_2 = __LIB_12__::func_885(uParam0, iLocal_29, 2554.34f, 810.83f, 75.4f, 59.51f, 1, 1, 0, 1, 1, 0, 1, 1);
			if (__LIB_0__::func_272(Local_633.f_2, 0))
			{
				__LIB_0__::func_862(Local_633.f_2, -946746074);
			}
		}
		if (__LIB_0__::func_272(Local_633.f_2, 0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_633.f_2, 2554.34f, 810.83f, 75.4f, 0f, true, false, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_633.f_2, true);
			ENTITY::SET_ENTITY_VISIBLE(Local_633.f_2, true);
			WEAPON::_GIVE_WEAPON_TO_PED_2(Local_633.f_2, joaat("WEAPON_MELEE_TORCH"), 1, true, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_633.f_2, joaat("WEAPON_MELEE_TORCH"), true, 0, false, false);
			WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Local_633.f_2, false);
			bLocal_35 = true;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_26))
	{
		iLocal_26 = __LIB_12__::func_885(uParam0, iLocal_27, 2554.34f, 810.83f, 75.4f, 290.8032f, 1, 1, 1, 1, 1, 0, 1, 0);
		if (__LIB_0__::func_272(iLocal_26, 0))
		{
			PED::_SET_PED_BODY_COMPONENT(iLocal_26, joaat("META_OUTFIT_DEFAULT"));
			PED::_UPDATE_PED_VARIATION(iLocal_26, false, true, true, true, false);
		}
	}
	func_964();
	if ((bLocal_34 && bLocal_35) && __LIB_0__::func_272(iLocal_26, 0))
	{
		return true;
	}
	return false;
}

void func_615(var uParam0)
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
		func_991(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_993(uParam0);
		func_994(uParam0);
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

void func_665(int iParam0, bool bParam1, float fParam2)
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		bVar1 = false;
		if (__LIB_0__::func_272((*iParam0)[iVar0 /*32*/], 0) && (iParam0[iVar0 /*32*/])->f_31 == 0)
		{
			if (func_1066(iParam0[iVar0 /*32*/]) && __LIB_0__::func_665((*iParam0)[iVar0 /*32*/], Global_35, 1, 1) < fParam2)
			{
				bVar1 = true;
			}
			else if (PED::IS_PED_IN_COMBAT((*iParam0)[iVar0 /*32*/], 0))
			{
				bVar1 = true;
			}
			else if (__LIB_2__::func_138((*iParam0)[iVar0 /*32*/], 1, 1, 1, 0, 0))
			{
				bVar1 = true;
			}
			else if (bParam1)
			{
				if (__LIB_0__::func_665((*iParam0)[iVar0 /*32*/], Global_35, 1, 1) < 20f)
				{
					bVar1 = true;
				}
				else if (__LIB_0__::func_272(Local_653.f_2, 0) && __LIB_0__::func_665((*iParam0)[iVar0 /*32*/], Local_653.f_2, 1, 1) < 20f)
				{
					bVar1 = true;
				}
				else if (__LIB_0__::func_272(Local_653.f_2, 0) && __LIB_0__::func_665((*iParam0)[iVar0 /*32*/], Local_643.f_2, 1, 1) < 20f)
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				func_1068(iParam0[iVar0 /*32*/]);
			}
		}
		iVar0++;
	}
}

bool func_666(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_633.f_2))
	{
		Local_633.f_2 = __LIB_12__::func_885(uParam0, iLocal_29, vLocal_89, 73.51f, 1, 1, 0, 1, 1, 0, 1, 1);
		if (__LIB_0__::func_272(Local_633.f_2, 0))
		{
			__LIB_0__::func_862(Local_633.f_2, -946746074);
			__LIB_12__::func_875(uParam0, Local_633.f_2, "RHNTN_HouseVillager", 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_633.f_2, true);
			PED::SET_PED_CAN_BE_TARGETTED(Local_633.f_2, false);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_633.f_2, true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_14[0]))
	{
		iLocal_14[0] = __LIB_12__::func_885(uParam0, iLocal_32, 2595.55f, 776.54f, 82.84f, 120f, 1, 1, 0, 1, 1, 1, 1, 0);
		if (__LIB_0__::func_272(iLocal_14[0], 0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_14[0], true);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_14[0], false);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_14[1]))
	{
		iLocal_14[1] = __LIB_12__::func_885(uParam0, iLocal_32, 2593.56f, 773.8f, 82.77f, 59.51f, 1, 1, 0, 1, 1, 1, 1, 0);
		if (__LIB_0__::func_272(iLocal_14[1], 0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_14[1], true);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_14[1], false);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_14[2]))
	{
		iLocal_14[2] = __LIB_12__::func_885(uParam0, iLocal_32, 2589.4f, 774.94f, 82.74f, 59.51f, 1, 1, 0, 1, 1, 1, 1, 0);
		if (__LIB_0__::func_272(iLocal_14[2], 0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_14[2], true);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_14[2], false);
		}
	}
	func_959(uParam0, &(Local_266[0 /*32*/]), iLocal_30, 2592.8f, 775.37f, 82.81f, 283.1797f, joaat("WORLD_ANIMAL_DOG_BARKING_VICIOUS"));
	func_959(uParam0, &(Local_266[1 /*32*/]), iLocal_31, 2589.6f, 775.22f, 82.76f, -129f, joaat("WORLD_ANIMAL_DOG_BARK_GROWL"));
	if (__LIB_0__::func_272(Local_633.f_2, 0))
	{
		if (!__LIB_0__::func_163(Local_633.f_2, -875674219))
		{
			PED::_0xAAB050DA48B57978(Local_633.f_2, "Default_Scared", 0, -1, 4);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_633.f_2, Global_35, -1, -1f, -1f, -1f);
		}
	}
	if ((((AUDIO::_0xD9130842D7226045(sLocal_62, 0) && __LIB_0__::func_272(Local_633.f_2, 0)) && __LIB_0__::func_272(iLocal_14[0], 0)) && __LIB_0__::func_272(iLocal_14[1], 0)) && __LIB_0__::func_272(iLocal_14[2], 0))
	{
		if (func_960(&Local_266))
		{
			__LIB_1__::func_398(&(Local_266[0 /*32*/].f_2), 0);
			__LIB_1__::func_398(&(Local_266[1 /*32*/].f_2), 0);
			return true;
		}
	}
	return false;
}

void func_667(int iParam0)
{
	__LIB_12__::func_772(122, sLocal_112[iParam0], 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	if (!iLocal_121[iParam0])
	{
		__LIB_1__::func_422(sLocal_112[iParam0], 7500, 0, 1, 0, 0, -1, -1, 0);
		iLocal_121[iParam0] = 1;
	}
	if (func_1069(iParam0))
	{
		fLocal_167 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_130[iParam0 /*3*/], true);
		vLocal_168 = { Global_36 };
	}
	iLocal_171 = 0;
	__LIB_5__::func_107(&uLocal_164);
}

void func_669()
{
	if (MAP::DOES_BLIP_EXIST(iLocal_42))
	{
		if (MAP::DOES_BLIP_EXIST(Local_266[1 /*32*/].f_1) || MAP::DOES_BLIP_EXIST(Local_266[0 /*32*/].f_1))
		{
			MAP::REMOVE_BLIP(&iLocal_42);
			func_667(1);
		}
	}
	func_1070(&(Local_266[0 /*32*/]), Local_266[1 /*32*/], 0);
	func_1070(&(Local_266[1 /*32*/]), Local_266[0 /*32*/], 1);
}

void func_670(var uParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_63))
	{
		iLocal_63 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2577.749f, 782.8569f, 82.66949f, 0f, 0f, -19.62262f, 3.847061f, 6.474983f, 4.792872f, "volHouseFrontDoor");
	}
	if (!bLocal_173)
	{
		if (!__LIB_6__::func_904())
		{
			if (__LIB_0__::func_181())
			{
				__LIB_12__::func_876(uParam0, "PW2_H_PI_J", 0);
			}
			else
			{
				__LIB_12__::func_876(uParam0, "PW2_H_PI_A", 0);
			}
			bLocal_173 = true;
		}
	}
	else
	{
		if (__LIB_6__::func_904() || !__LIB_2__::func_618(&uLocal_74))
		{
			__LIB_5__::func_107(&uLocal_74);
		}
		if (!bLocal_174)
		{
			if ((PED::IS_PED_SHOOTING(Global_35) || (ENTITY::DOES_ENTITY_EXIST(Local_266[0 /*32*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_266[0 /*32*/], Global_35, 1, 1))) || (ENTITY::DOES_ENTITY_EXIST(Local_266[1 /*32*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_266[1 /*32*/], Global_35, 1, 1)))
			{
				bLocal_174 = true;
			}
		}
		if (__LIB_5__::func_51(&uLocal_74) > 4f && __LIB_0__::func_665(Global_35, Local_633.f_2, 1, 1) < 50f)
		{
			if (func_679(&Local_633, &Local_266) && bLocal_174)
			{
				__LIB_12__::func_876(uParam0, "PW2_H2", 0);
			}
			else
			{
				__LIB_12__::func_876(uParam0, "PW2_H1", 0);
			}
		}
	}
}

void func_671()
{
	if (__LIB_0__::func_272(iLocal_14[0], 0))
	{
		__LIB_3__::func_459(iLocal_14[0], 0);
		__LIB_1__::func_864(iLocal_14[0], 0, 0);
		PED::APPLY_PED_DAMAGE_PACK(iLocal_14[0], "PD_Animal_attack_left_body", 0f, 1f);
		PED::APPLY_PED_DAMAGE_PACK(iLocal_14[0], "PD_Animal_attack_left_body", 0f, 1f);
		PED::APPLY_PED_DAMAGE_PACK(iLocal_14[0], "PD_Animal_attack_right_body", 0f, 1f);
	}
	if (__LIB_0__::func_272(iLocal_14[1], 0))
	{
		__LIB_3__::func_459(iLocal_14[1], 0);
		__LIB_1__::func_864(iLocal_14[1], 0, 0);
		PED::APPLY_PED_DAMAGE_PACK(iLocal_14[1], "PD_Animal_attack_left_body", 0f, 1f);
		PED::APPLY_PED_DAMAGE_PACK(iLocal_14[1], "PD_Animal_attack_right_body", 0f, 1f);
		PED::APPLY_PED_DAMAGE_PACK(iLocal_14[1], "PD_Animal_attack_right_body", 0f, 1f);
	}
	if (__LIB_0__::func_272(iLocal_14[2], 0))
	{
		__LIB_3__::func_459(iLocal_14[2], 0);
		__LIB_1__::func_864(iLocal_14[2], 0, 0);
		PED::APPLY_PED_DAMAGE_PACK(iLocal_14[2], "PD_Animal_attack_left_body", 0f, 1f);
		PED::APPLY_PED_DAMAGE_PACK(iLocal_14[2], "PD_Animal_attack_right_body", 0f, 1f);
		PED::APPLY_PED_DAMAGE_PACK(iLocal_14[2], "PD_Animal_attack_right_body", 0f, 1f);
	}
	if (!__LIB_2__::func_618(&uLocal_38))
	{
		__LIB_5__::func_107(&uLocal_38);
	}
	else if (__LIB_5__::func_51(&uLocal_38) > 2f)
	{
		if (__LIB_0__::func_272(iLocal_14[0], 0))
		{
			__LIB_5__::func_107(&uLocal_38);
		}
	}
}

bool func_672(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (__LIB_0__::func_272((*iParam0)[iVar0 /*32*/], 0))
		{
			if (PED::IS_PED_FLEEING((*iParam0)[iVar0 /*32*/]) && __LIB_0__::func_665((*iParam0)[iVar0 /*32*/], Global_35, 1, 1) > 40f)
			{
				__LIB_2__::func_788(iParam0[iVar0 /*32*/], 1, 0, 1);
			}
			if (TASK::IS_PED_IN_WRITHE((*iParam0)[iVar0 /*32*/]))
			{
				__LIB_1__::func_864((*iParam0)[iVar0 /*32*/], 0, 0);
			}
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_673()
{
	if (__LIB_0__::func_272(iLocal_14[0], 0))
	{
		__LIB_3__::func_459(iLocal_14[0], 0);
		__LIB_1__::func_864(iLocal_14[0], 1, 0);
		PED::APPLY_PED_DAMAGE_PACK(iLocal_14[0], "PD_Animal_attack_left_body", 0f, 1f);
		PED::APPLY_PED_DAMAGE_PACK(iLocal_14[0], "PD_Animal_attack_left_body", 0f, 1f);
		PED::APPLY_PED_DAMAGE_PACK(iLocal_14[0], "PD_Animal_attack_right_body", 0f, 1f);
	}
	if (__LIB_0__::func_272(iLocal_14[1], 0))
	{
		__LIB_3__::func_459(iLocal_14[1], 0);
		__LIB_1__::func_864(iLocal_14[1], 1, 0);
		PED::APPLY_PED_DAMAGE_PACK(iLocal_14[1], "PD_Animal_attack_left_body", 0f, 1f);
		PED::APPLY_PED_DAMAGE_PACK(iLocal_14[1], "PD_Animal_attack_right_body", 0f, 1f);
		PED::APPLY_PED_DAMAGE_PACK(iLocal_14[1], "PD_Animal_attack_right_body", 0f, 1f);
	}
	if (__LIB_0__::func_272(iLocal_14[2], 0))
	{
		__LIB_3__::func_459(iLocal_14[2], 0);
		__LIB_1__::func_864(iLocal_14[2], 1, 0);
		PED::APPLY_PED_DAMAGE_PACK(iLocal_14[2], "PD_Animal_attack_left_body", 0f, 1f);
		PED::APPLY_PED_DAMAGE_PACK(iLocal_14[2], "PD_Animal_attack_right_body", 0f, 1f);
		PED::APPLY_PED_DAMAGE_PACK(iLocal_14[2], "PD_Animal_attack_right_body", 0f, 1f);
	}
	if (!AUDIO::_0x714A0EA7DE1167BE("PIG_ATTACK", sLocal_62))
	{
		AUDIO::_STOP_SOUND_WITH_NAME("PIG_ATTACK", sLocal_62);
	}
}

void func_676(int iParam0)
{
	bool bVar0;
	bVar0 = false;
	if (__LIB_0__::func_272((*iParam0)[0 /*32*/], 0))
	{
		if ((!PED::IS_PED_IN_COMBAT((*iParam0)[0 /*32*/], 0) && (iParam0[0 /*32*/])->f_30 == 0) && __LIB_0__::func_665(Global_35, (*iParam0)[0 /*32*/], 1, 1) > 30f)
		{
			if (AUDIO::_0xD9130842D7226045(sLocal_62, 0) && AUDIO::_0x714A0EA7DE1167BE("DISTANT_DOG_ATTACK_LOOP", sLocal_62))
			{
				AUDIO::_PLAY_SOUND_FROM_ENTITY("DISTANT_DOG_ATTACK_LOOP", (*iParam0)[0 /*32*/], sLocal_62, false, 0, 0);
			}
			bVar0 = true;
		}
		else if (!AUDIO::_0x714A0EA7DE1167BE("DISTANT_DOG_ATTACK_LOOP", sLocal_62))
		{
			AUDIO::_STOP_SOUND_WITH_NAME("DISTANT_DOG_ATTACK_LOOP", sLocal_62);
		}
	}
	if (!bVar0)
	{
		func_1074(iParam0);
	}
}

void func_677(var uParam0)
{
	if (__LIB_6__::func_904() || !__LIB_2__::func_618(&uLocal_74))
	{
		__LIB_5__::func_107(&uLocal_74);
	}
	if ((__LIB_5__::func_51(&uLocal_74) > 5f && __LIB_0__::func_665(Global_35, Local_643.f_2, 1, 1) < 50f) && !__LIB_0__::func_270())
	{
		if (!bLocal_181)
		{
			if (func_679(&Local_643, &Local_331))
			{
				__LIB_12__::func_876(uParam0, "PW2_R1_A", 0);
				bLocal_181 = true;
				return;
			}
		}
		__LIB_12__::func_876(uParam0, "PW2_R1", 0);
	}
}

bool func_678(int iParam0)
{
	if (__LIB_0__::func_665(Global_35, iParam0, 1, 1) < 20f)
	{
		return true;
	}
	if (func_1066(&iParam0))
	{
		if (__LIB_0__::func_665(Global_35, iParam0, 1, 1) < 40f)
		{
			return true;
		}
	}
	return false;
}

bool func_679(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		if (__LIB_0__::func_272((*uParam1)[iVar1 /*32*/], 0))
		{
			if ((uParam1[iVar1 /*32*/])->f_30 == 3)
			{
				return true;
			}
			if (func_1075(uParam1[iVar1 /*32*/], iParam0->f_2, 1, 1101004800 /* Float: 20f */))
			{
				return true;
			}
			if (__LIB_2__::func_138((*uParam1)[iVar1 /*32*/], 1, 1, 1, 0, 0))
			{
				bVar0 = true;
			}
		}
		iVar1++;
	}
	iLocal_33 = 0;
	if (bVar0 && __LIB_2__::func_618(&(iParam0->f_3)))
	{
		if (__LIB_5__::func_51(&(iParam0->f_3)) > 2f)
		{
			return true;
		}
	}
	else
	{
		__LIB_5__::func_107(&(iParam0->f_3));
	}
	return false;
}

void func_680(var uParam0)
{
	int iVar0;
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	if (MAP::DOES_BLIP_EXIST(iLocal_42))
	{
		MAP::REMOVE_BLIP(&iLocal_42);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1068(uParam0[iVar0 /*32*/]);
		iVar0++;
	}
}

bool func_681(int iParam0, char* sParam1)
{
	if (func_1076(iParam0, sParam1))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_201[iParam0 /*16*/], sParam1, true);
		Local_201[iParam0 /*16*/].f_15 = sParam1;
		return true;
	}
	return false;
}

void func_682()
{
	bool bVar0;
	func_1077(&(Local_331[0 /*32*/]));
	func_1078(&(Local_331[1 /*32*/]), Local_331[0 /*32*/], 0);
	bVar0 = false;
	if (func_1079(&Local_643, &Local_331, 25f))
	{
		bVar0 = true;
	}
	func_1080(&(Local_331[2 /*32*/]), Local_643.f_2, 0, bVar0);
}

void func_683(int iParam0, var uParam1, var uParam2)
{
	if (__LIB_0__::func_272(iParam0->f_2, 0))
	{
		if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0->f_2, joaat("WEAPON_ANIMAL"), 0) || func_1081(iParam0, uParam1))
		{
			__LIB_1__::func_864(iParam0->f_2, 0, 0);
		}
	}
}

void func_684()
{
	int iVar0;
	if (__LIB_0__::func_272(Local_653.f_2, 0))
	{
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_653.f_2, true);
		PED::SET_PED_CONFIG_FLAG(Local_653.f_2, 138, true);
		TASK::CLEAR_PED_TASKS(Local_653.f_2, true, false);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "RCM_HNTN2_river", 0, 44, -1, 0, 0, -1);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(Local_653.f_2, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
}

void func_685()
{
	int iVar0;
	if (__LIB_0__::func_272(Local_428[0 /*32*/], 0))
	{
		switch (Local_428[0 /*32*/].f_30)
		{
			case 0:
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_653.f_2, 0) && TASK::GET_PED_WAYPOINT_PROGRESS(Local_653.f_2) >= 15)
				{
					PED::_0xF1C03A5352243A30(Local_428[0 /*32*/]);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET(0, Local_653.f_2, "RCM_HNTN2_river", -0.25f, -3f, 0, 2056, 40, 0);
					TASK::TASK_COMBAT_PED(0, Local_653.f_2, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_428[0 /*32*/], iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					Local_428[0 /*32*/].f_30 = 1;
				}
				break;
			case 1:
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_653.f_2, 0))
				{
					if (!PED::IS_PED_IN_COMBAT(Local_428[0 /*32*/], 0))
					{
						TASK::TASK_COMBAT_PED(Local_428[0 /*32*/], Local_653.f_2, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_428[0 /*32*/], false);
					}
					Local_428[0 /*32*/].f_30 = 2;
				}
				break;
			case 2:
				break;
		}
		if (ENTITY::IS_ENTITY_IN_WATER(Local_428[0 /*32*/]))
		{
			__LIB_1__::func_864(Local_428[0 /*32*/], 0, 0);
		}
	}
	if (__LIB_0__::func_272(Local_428[1 /*32*/], 0))
	{
		switch (Local_428[1 /*32*/].f_30)
		{
			case 0:
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_653.f_2, 0) && TASK::GET_PED_WAYPOINT_PROGRESS(Local_653.f_2) >= 20)
				{
					PED::_0xF1C03A5352243A30(Local_428[1 /*32*/]);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET(0, Local_653.f_2, "RCM_HNTN2_river", 0.25f, -4f, 0, 8, -1, 0);
					TASK::TASK_COMBAT_PED(0, Local_653.f_2, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_428[1 /*32*/], iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					Local_428[1 /*32*/].f_30 = 1;
				}
				break;
			case 1:
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_653.f_2, 0))
				{
					if (!PED::IS_PED_IN_COMBAT(Local_428[1 /*32*/], 0))
					{
						TASK::TASK_COMBAT_PED(Local_428[1 /*32*/], Local_653.f_2, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_428[1 /*32*/], false);
					}
					Local_428[1 /*32*/].f_30 = 2;
				}
				break;
			case 2:
				break;
		}
		if (ENTITY::IS_ENTITY_IN_WATER(Local_428[1 /*32*/]))
		{
			__LIB_1__::func_864(Local_428[1 /*32*/], 0, 0);
		}
	}
}

void func_686()
{
	int iVar0;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_201[0 /*16*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_201[0 /*16*/], false))
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_201[0 /*16*/], "BtcHillbilly_01"))
		{
			TASK::TASK_LOOK_AT_ENTITY(Local_643.f_2, Local_653.f_2, -1, 0, 51, 0);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (__LIB_0__::func_94(Global_35, 2502.17f, 815.73f, 71.16f, 1) > 2f)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2502.17f, 815.73f, 71.16f, 1f, -1, 0.25f, 0, 40000f);
			}
			TASK::TASK_REACT(0, Local_653.f_2, 0f, 0f, 0f, "TaskCombat_Panic", -1f, 0, 4);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(Local_643.f_2, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
	}
}

void func_687(var uParam0)
{
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_653.f_2, 0))
	{
		if (!__LIB_0__::func_27(iLocal_196, 128) && TASK::GET_PED_WAYPOINT_PROGRESS(Local_653.f_2) >= 43)
		{
			__LIB_1__::func_683(&iLocal_196, 128);
			if (__LIB_0__::func_399(Local_653.f_2, 1, 0, 0) == joaat("WEAPON_MELEE_DAVY_LANTERN"))
			{
				WEAPON::_0xCEF4C65DE502D367(Local_653.f_2, 0, 0, 1, 0);
			}
		}
	}
}

void func_688(var uParam0)
{
	int iVar0;
	if (!bLocal_686 && __LIB_0__::func_272(Local_653.f_2, 0))
	{
		if (!func_672(&Local_428) && !TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_653.f_2, 0))
		{
			TASK::CLEAR_PED_TASKS(Local_653.f_2, true, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2504.139f, 816.4882f, 71.0124f, 2f, -1, 0.25f, 0, 207.0858f);
			TASK::TASK_COWER(0, -1, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(Local_653.f_2, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			bLocal_686 = true;
		}
	}
}

void func_689()
{
	int iVar0;
	TASK::TASK_LOOK_AT_ENTITY(Local_643.f_2, Local_653.f_2, -1, 0, 51, 0);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (__LIB_0__::func_94(Global_35, vLocal_108, 1) > 1f)
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_108, 1f, 20000, 1f, 0, 40000f);
	}
	else
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2506.84f, 814.41f, 70.92f, 1f, 20000, 1f, 0, 40000f);
	}
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_653.f_2, -1, -1f, -1f, -1f);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(Local_643.f_2, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

void func_690(float fParam0)
{
	int iVar0;
	if (__LIB_0__::func_272(Local_643.f_2, 0) && __LIB_0__::func_272(Local_653.f_2, 0))
	{
		TASK::TASK_CLEAR_LOOK_AT(Local_653.f_2);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_PAUSE(0, 1000);
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "rcm_hntn2_home", 0, 17416, -1, 0, 0, -1);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(Local_653.f_2, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		TASK::TASK_CLEAR_LOOK_AT(Local_643.f_2);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_PAUSE(0, 1000);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_653.f_2, 500, -1f, -1f, -1f);
		TASK::TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET(0, Local_653.f_2, "rcm_hntn2_home", fParam0, -1f, 0, 17416, -1, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(Local_643.f_2, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
}

void func_691()
{
	float fVar0;
	float fVar1;
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_653.f_2, 0))
	{
		fVar0 = __LIB_0__::func_94(Global_35, vLocal_51, 1);
		fVar1 = __LIB_0__::func_94(Local_653.f_2, vLocal_51, 1);
		if (__LIB_0__::func_665(Global_35, Local_653.f_2, 1, 1) > 10f && fVar0 > fVar1)
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_653.f_2, 1.5f, 0, -1082130432 /* Float: -1f */, 0);
		}
		else
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_653.f_2, 2f, 0, -1082130432 /* Float: -1f */, 0);
		}
	}
}

bool func_692()
{
	func_964();
	if (__LIB_0__::func_94(Local_643.f_2, 2555.24f, 805.54f, 75.3f, 1) < 10f)
	{
		if (__LIB_0__::func_399(Local_643.f_2, 1, 0, 0) == joaat("WEAPON_MELEE_TORCH"))
		{
			WEAPON::_0xCEF4C65DE502D367(Local_643.f_2, 0, 0, 1, 0);
		}
	}
	if (func_586(1, 0, 0))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_201[1 /*16*/], false) && __LIB_0__::func_94(Local_643.f_2, 2555.24f, 805.54f, 75.3f, 1) < 10f)
		{
			return true;
		}
	}
	return false;
}

bool func_693()
{
	if (func_586(2, 0, 0))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_201[2 /*16*/], false) && __LIB_0__::func_94(Local_653.f_2, 2555.24f, 805.54f, 75.3f, 1) < 5f)
		{
			return true;
		}
	}
	return false;
}

void func_694(var uParam0)
{
	func_665(&Local_493, 0, 20f);
	func_1082();
	switch (iLocal_687)
	{
		case 0:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_653.f_2, 0))
			{
				func_1083();
				iLocal_687 = 1;
			}
			break;
		case 1:
			if (__LIB_1__::func_205(Local_653.f_2, iLocal_66, 1, 0))
			{
				TASK::CLEAR_PED_TASKS(Local_653.f_2, true, false);
				TASK::TASK_REACT(Local_653.f_2, Local_493[0 /*32*/], 0f, 0f, 0f, "TaskCombat_Panic", -1f, 0, 4);
				TASK::TASK_LOOK_AT_ENTITY(Local_653.f_2, Local_493[0 /*32*/], -1, 0, 51, 0);
				TASK::TASK_LOOK_AT_ENTITY(Local_643.f_2, Local_493[0 /*32*/], -1, 0, 51, 0);
				func_1068(&(Local_493[0 /*32*/]));
				__LIB_12__::func_876(uParam0, "PW2_R_F7", 0);
				__LIB_5__::func_107(&(Local_653.f_6));
				iLocal_687 = 2;
			}
			else if (!__LIB_0__::func_272(Local_493[0 /*32*/], 0))
			{
				iLocal_687 = 3;
			}
			break;
		case 2:
			if (Local_493[0 /*32*/].f_30 == 0 && __LIB_5__::func_51(&(Local_653.f_6)) > 5f)
			{
				func_1085(Local_493[0 /*32*/]);
				func_1086();
			}
			if (!__LIB_0__::func_272(Local_493[0 /*32*/], 0))
			{
				func_690(0f);
				func_1087();
				iLocal_687 = 3;
			}
			else if (!bLocal_178)
			{
				if (!__LIB_6__::func_904())
				{
					if (__LIB_0__::func_181())
					{
						__LIB_12__::func_876(uParam0, "PW2_R_FR_J", 0);
					}
					else
					{
						__LIB_12__::func_876(uParam0, "PW2_R_FR_A", 0);
					}
					bLocal_178 = true;
				}
			}
			break;
		case 3:
			if ((__LIB_1__::func_205(Local_653.f_2, iLocal_67, 1, 0) || __LIB_2__::func_138(Local_493[1 /*32*/], 1, 1, 1, 0, 0)) || __LIB_5__::func_71(Local_493[1 /*32*/], 1090519040 /* Float: 8f */, 1103626240 /* Float: 25f */, 1097859072 /* Float: 15f */, 0))
			{
				func_1089();
				func_1068(&(Local_493[1 /*32*/]));
				iLocal_687 = 5;
			}
			break;
		case 5:
			if ((!__LIB_0__::func_272(Local_493[1 /*32*/], 0) || __LIB_1__::func_205(Global_35, iLocal_68, 1, 0)) && __LIB_1__::func_205(Local_653.f_2, iLocal_68, 1, 0))
			{
				func_1090();
				iLocal_687 = 6;
			}
			break;
		case 6:
			func_665(&Local_558, 1, 1106247680 /* Float: 30f */);
			if (!__LIB_0__::func_27(iLocal_196, 1073741824 /* Float: 2f */))
			{
				if ((__LIB_0__::func_272(Local_558[0 /*32*/], 0) && __LIB_0__::func_665(Local_558[0 /*32*/], Local_653.f_2, 1, 1) < 15f) || (__LIB_0__::func_272(Local_558[1 /*32*/], 0) && __LIB_0__::func_665(Local_558[1 /*32*/], Local_653.f_2, 1, 1) < 15f))
				{
					__LIB_12__::func_876(uParam0, "PW2_R_FF", 0);
					func_1068(&(Local_558[0 /*32*/]));
					func_1068(&(Local_558[1 /*32*/]));
					__LIB_1__::func_683(&iLocal_196, 1073741824 /* Float: 2f */);
				}
			}
			else if (!bLocal_179)
			{
				if (!__LIB_6__::func_904())
				{
					if (__LIB_0__::func_272(Local_558[0 /*32*/], 0) || __LIB_0__::func_272(Local_558[1 /*32*/], 0))
					{
						if (__LIB_0__::func_181())
						{
							__LIB_12__::func_876(uParam0, "PW2_R_M_J", 0);
						}
						else
						{
							__LIB_12__::func_876(uParam0, "PW2_R_M_A", 0);
						}
						bLocal_179 = true;
					}
				}
			}
			else if (!bLocal_180)
			{
				if (!__LIB_6__::func_904())
				{
					if (__LIB_0__::func_272(Local_558[0 /*32*/], 0) || __LIB_0__::func_272(Local_558[1 /*32*/], 0))
					{
						__LIB_12__::func_876(uParam0, "PW2_R_D", 0);
						bLocal_180 = true;
					}
				}
			}
			break;
	}
}

bool func_741(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_741(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		__LIB_13__::func_10(28);
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
						func_741(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_741(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_741(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_741(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_741(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_741(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_741(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_13__::func_10(24);
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
					func_741(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_741(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_13__::func_135(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_13__::func_164(iParam0);
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
				func_741(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_743()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1214();
	func_1215();
	func_1216();
	func_1217();
	func_1218();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_744(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1221(iParam0, 1, 1, -142743235, 1);
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

void func_779()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1255(&uVar4, &iVar1, &iVar2, &iVar3)))
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

void func_959(var uParam0, var uParam1, int iParam2, vector3 vParam3, int iParam6, int iParam7)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		*uParam1 = __LIB_12__::func_885(uParam0, iParam2, vParam3, iParam6, 1, 1, 0, 1, 1, 0, 1, 1);
		if (__LIB_0__::func_272(*uParam1, 0))
		{
			if (iParam2 == joaat("A_C_DOGHOUND_01"))
			{
				__LIB_0__::func_862(*uParam1, joaat("META_OUTFIT_ANIMAL_POISON_DOGHOUND"));
			}
			else
			{
				__LIB_0__::func_862(*uParam1, joaat("META_OUTFIT_ANIMAL_POISON_DOGBLUETICKCOONHOUND"));
			}
			EVENT::SET_DECISION_MAKER(*uParam1, joaat("DM_MEDIUM_PREDATOR"));
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam1, joaat("REL_PLAYER_ENEMY"));
			PED::_SET_PED_SCALE(*uParam1, MISC::GET_RANDOM_FLOAT_IN_RANGE(1.1f, 1.3f));
			__LIB_1__::func_473(*uParam1, iParam7, -1, 0, 0, -1082130432 /* Float: -1f */);
			PED::SET_PED_FLEE_ATTRIBUTES(*uParam1, 512, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam1, 58, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam1, 46, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam1, true);
			ENTITY::_SET_ENTITY_HEALTH(*uParam1, 80, 0);
			AUDIO::SET_ANIMAL_MOOD(*uParam1, 0);
			__LIB_1__::func_991(*uParam1, 0);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*uParam1, 32, true);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*uParam1, 65, true);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*uParam1, 54, true);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*uParam1, 53, false);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*uParam1, 56, false);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*uParam1, 44, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam1, 115, true);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*uParam1, 6, 1f);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*uParam1, 5, 1f);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*uParam1, 74, 1f);
			PED::SET_PED_CONFIG_FLAG(*uParam1, 6, true);
			PED::SET_PED_USING_ACTION_MODE(*uParam1, true, -1, 0);
			__LIB_2__::func_279(*uParam1, 1);
			func_1385(&(uParam1->f_2));
		}
	}
}

bool func_960(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!__LIB_0__::func_272((*iParam0)[iVar0 /*32*/], 0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

void func_962(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_1386(iParam0);
			break;
		case 1:
			func_1387(iParam0);
			break;
		case 2:
			func_1388(iParam0);
			break;
		case 3:
			func_1389(iParam0);
			break;
	}
}

void func_964()
{
	vector3 vVar0[2];
	vVar0[0 /*3*/] = { 2554.08f, 806.29f, 75.31f };
	vVar0[1 /*3*/] = { 2554.9f, 806.48f, 75.31f };
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_18[0]))
	{
		if (uLocal_21[0] == 0)
		{
			uLocal_21[0] = ENTITY::_0x6F3068258A499E52(joaat("P_CHAIR06X"), vVar0[0 /*3*/], 11);
		}
		else if (ENTITY::_0x1FF441D7954F8709(uLocal_21[0]))
		{
			iLocal_18[0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uLocal_21[0]));
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_18[1]))
	{
		if (uLocal_21[1] == 0)
		{
			uLocal_21[1] = ENTITY::_0x6F3068258A499E52(joaat("P_CHAIR06X"), vVar0[1 /*3*/], 11);
		}
		else if (ENTITY::_0x1FF441D7954F8709(uLocal_21[1]))
		{
			iLocal_18[1] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uLocal_21[1]));
		}
	}
}

void func_991(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1404();
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

void func_993(var uParam0)
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
			func_1412(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1412(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_994(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1412(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

bool func_1066(int iParam0)
{
	if (!PED::_0x5102307CE88798EB(*iParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(*iParam0);
	}
	else if (PED::IS_TRACKED_PED_VISIBLE(*iParam0))
	{
		return true;
	}
	return false;
}

void func_1068(var uParam0)
{
	if (__LIB_0__::func_272(*uParam0, 0))
	{
		if (PED::_0x5102307CE88798EB(*uParam0))
		{
			PED::_0x3088634CF8C819CF(*uParam0);
		}
		if (uParam0->f_31 == 0 && !MAP::DOES_BLIP_EXIST(uParam0->f_1))
		{
			uParam0->f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), *uParam0);
			MAP::_BLIP_SET_MODIFIER(uParam0->f_1, -948075745);
			uParam0->f_31 = 1;
		}
	}
}

bool func_1069(int iParam0)
{
	if (__LIB_0__::func_138(vLocal_130[iParam0 /*3*/], 0f, 0f, 0f))
	{
		return false;
	}
	return true;
}

void func_1070(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, int iParam33)
{
	if (__LIB_0__::func_272(*uParam0, 0))
	{
		switch (uParam0->f_30)
		{
			case 0:
				if (((!__LIB_0__::func_272(iParam1, 0) || PED::IS_PED_IN_COMBAT(iParam1, Global_35)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, Global_35, 1, 1)) || func_1075(uParam0, 0, 1, 5f))
				{
					func_1492(uParam0);
					func_673();
					uParam0->f_30 = 3;
				}
				iLocal_33 = 0;
				if (func_1493(uParam0, iParam33))
				{
					func_1494(uParam0);
					func_673();
					uParam0->f_30 = 3;
				}
				break;
			case 2:
				break;
			case 3:
				if ((!PED::IS_PED_IN_COMBAT(*uParam0, Global_35) && TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503, true) != 1) && TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503, true) != 0)
				{
					func_1492(uParam0);
				}
				break;
		}
	}
}

void func_1074(int iParam0)
{
	int iVar0;
	float fVar1;
	if (!__LIB_2__::func_618(&uLocal_630))
	{
		__LIB_5__::func_107(&uLocal_630);
	}
	if (__LIB_5__::func_51(&uLocal_630) > 2f)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, *iParam0);
		if ((__LIB_0__::func_272((*iParam0)[iVar0 /*32*/], 0) && !PED::IS_PED_IN_COMBAT((*iParam0)[iVar0 /*32*/], 0)) && !PED::IS_PED_USING_ANY_SCENARIO((*iParam0)[iVar0 /*32*/]))
		{
			fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1.5f);
			__LIB_2__::func_620(&uLocal_630, fVar1);
			__LIB_4__::func_62((*iParam0)[iVar0 /*32*/], 1);
		}
	}
}

bool func_1075(var uParam0, int iParam1, bool bParam2, float fParam3)
{
	bool bVar0;
	if (uParam0->f_30 != 3)
	{
		bVar0 = true;
		if (__LIB_0__::func_272(iParam1, 0) && __LIB_0__::func_665(*uParam0, Global_35, 1, 1) > __LIB_0__::func_665(*uParam0, iParam1, 1, 1))
		{
			bVar0 = false;
		}
		if (__LIB_13__::func_132(*uParam0, 0, &(uParam0->f_2), &uLocal_73, 0, 0))
		{
			return true;
		}
		if (bParam2 && __LIB_0__::func_665(*uParam0, Global_35, 1, 1) <= fParam3)
		{
			iLocal_33++;
		}
		if (bVar0)
		{
			if (__LIB_0__::func_665(Global_35, *uParam0, 1, 1) < 8f)
			{
				return true;
			}
			if ((bParam2 && iLocal_33 <= 3) && __LIB_2__::func_215(*uParam0, Global_35, 1, fParam3, 0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_1076(int iParam0, char* sParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_201[iParam0 /*16*/]))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_201[iParam0 /*16*/], true, false))
	{
		return false;
	}
	if (!ANIMSCENE::_0xA9016536015DE29D(Local_201[iParam0 /*16*/], sParam1))
	{
		return false;
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_201[iParam0 /*16*/], sParam1))
	{
		return true;
	}
	if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_201[iParam0 /*16*/], sParam1))
	{
		if (ANIMSCENE::_0xDF7B5144E25CD3FE(Local_201[iParam0 /*16*/], sParam1))
		{
			func_962(iParam0);
		}
	}
	return false;
}

void func_1077(var uParam0)
{
	if (__LIB_0__::func_272(*uParam0, 0))
	{
		switch (uParam0->f_30)
		{
			case 0:
				if (__LIB_0__::func_665(*uParam0, Global_35, 1, 1) < 25f || func_1075(uParam0, 0, 1, 1101004800 /* Float: 20f */))
				{
					func_1492(uParam0);
					uParam0->f_30 = 3;
				}
				iLocal_33 = 0;
				break;
			case 2:
				break;
			case 3:
				if ((!PED::IS_PED_IN_COMBAT(*uParam0, Global_35) && TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503, true) != 1) && TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503, true) != 0)
				{
					func_1492(uParam0);
				}
				break;
		}
	}
}

void func_1078(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, bool bParam33)
{
	if (__LIB_0__::func_272(*uParam0, 0))
	{
		switch (uParam0->f_30)
		{
			case 0:
				if (((!__LIB_0__::func_272(iParam1, 0) || (bParam33 && PED::IS_PED_IN_COMBAT(iParam1, Global_35))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, Global_35, 1, 1)) || func_1075(uParam0, 0, 1, 1101004800 /* Float: 20f */))
				{
					func_1492(uParam0);
					uParam0->f_30 = 3;
				}
				iLocal_33 = 0;
				break;
			case 2:
				break;
			case 3:
				if ((!PED::IS_PED_IN_COMBAT(*uParam0, Global_35) && TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503, true) != 1) && TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503, true) != 0)
				{
					func_1492(uParam0);
				}
				break;
		}
	}
}

bool func_1079(int iParam0, var uParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	if (__LIB_2__::func_618(&(iParam0->f_6)))
	{
		fVar1 = __LIB_5__::func_51(&(iParam0->f_6));
		if (func_1500(iParam0, uParam1))
		{
			fVar0 = (fVar1 - 3f);
			if (fVar0 < 0f)
			{
				fVar0 = 0f;
			}
			__LIB_2__::func_620(&(iParam0->f_6), fVar0);
		}
		if (__LIB_5__::func_51(&(iParam0->f_6)) > fParam2)
		{
			return true;
		}
	}
	return false;
}

void func_1080(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (__LIB_0__::func_272(*uParam0, 0))
	{
		switch (uParam0->f_30)
		{
			case 0:
				if (bParam3)
				{
					TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(*uParam0, uParam1, joaat("AR_WOLF_EXECUTION_ENTER_FROM_FRONT"), 0f, 0f, 0, 16777216);
					uParam0->f_30 = 2;
				}
				if (bParam2 && func_1075(uParam0, 0, 1, 1101004800 /* Float: 20f */))
				{
					func_1492(uParam0);
					uParam0->f_30 = 3;
				}
				iLocal_33 = 0;
				break;
			case 2:
				break;
			case 3:
				if ((!PED::IS_PED_IN_COMBAT(*uParam0, Global_35) && TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503, true) != 1) && TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503, true) != 0)
				{
					func_1492(uParam0);
				}
				break;
		}
	}
}

bool func_1081(int iParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (__LIB_0__::func_272((*uParam1)[iVar0 /*32*/], 0) && __LIB_0__::func_272(iParam0->f_2, 0))
		{
			if (PED::IS_PED_IN_COMBAT((*uParam1)[iVar0 /*32*/], iParam0->f_2) && ENTITY::IS_ENTITY_TOUCHING_ENTITY((*uParam1)[iVar0 /*32*/], iParam0->f_2))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_1082()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_493)
	{
		if (__LIB_0__::func_272(Local_493[iVar0 /*32*/], 0))
		{
			if (func_1075(&(Local_493[iVar0 /*32*/]), Local_653.f_2, 1, 10f))
			{
				func_1492(&(Local_493[iVar0 /*32*/]));
				Local_493[iVar0 /*32*/].f_30 = 3;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_558)
	{
		if (__LIB_0__::func_272(Local_558[iVar0 /*32*/], 0))
		{
			if (func_1075(&(Local_558[iVar0 /*32*/]), Local_653.f_2, 1, 1101004800 /* Float: 20f */))
			{
				func_1492(&(Local_558[iVar0 /*32*/]));
				Local_558[iVar0 /*32*/].f_30 = 3;
			}
		}
		iVar0++;
	}
	iLocal_33 = 0;
}

void func_1083()
{
	int iVar0;
	PED::_0xF1C03A5352243A30(Local_493[0 /*32*/]);
	TASK::CLEAR_PED_TASKS(Local_493[0 /*32*/], true, false);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2530.26f, 814.71f, 74.3f, 1.5f, -1, 1f, 0, 40000f);
	TASK::TASK_LOOK_AT_ENTITY(0, Local_653.f_2, -1, 0, 51, 0);
	__LIB_1__::func_473(0, joaat("WORLD_ANIMAL_DOG_BARKING_VICIOUS"), -1, 0, 0, -1082130432 /* Float: -1f */);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(Local_493[0 /*32*/], iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	__LIB_1__::func_398(&(Local_493[0 /*32*/].f_2), 1);
}

void func_1085(int iParam0)
{
	int iVar0;
	if (__LIB_0__::func_272(Local_643.f_2, 0) && __LIB_0__::func_272(Local_653.f_2, 0))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_PAUSE(0, 300);
		TASK::TASK_SMART_FLEE_PED(0, iParam0, 7f, -1, 0, 2f, 0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam0, -1, -1f, -1f, -1f);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(Local_653.f_2, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		TASK::TASK_LOOK_AT_ENTITY(Local_653.f_2, iParam0, -1, 0, 51, 0);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_SMART_FLEE_PED(0, iParam0, 8f, -1, 0, 2f, 0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam0, -1, -1f, -1f, -1f);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(Local_643.f_2, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		TASK::TASK_LOOK_AT_ENTITY(Local_643.f_2, iParam0, -1, 0, 51, 0);
	}
}

void func_1086()
{
	if (__LIB_0__::func_272(Local_493[0 /*32*/], 0))
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Local_493[0 /*32*/], 0))
		{
			PED::_0x802092B07E3B1EEA(Local_493[0 /*32*/], ENTITY::GET_ENTITY_COORDS(Local_653.f_2, true, false), 3);
		}
		TASK::TASK_COMBAT_PED(Local_493[0 /*32*/], Local_653.f_2, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_493[0 /*32*/], false);
		Local_493[0 /*32*/].f_30 = 2;
	}
}

void func_1087()
{
	int iVar0;
	if (Local_493[1 /*32*/].f_30 == 0 && __LIB_0__::func_272(Local_493[1 /*32*/], 0))
	{
		PED::_0xF1C03A5352243A30(Local_493[1 /*32*/]);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_START_SCENARIO_AT_POSITION(0, joaat("WORLD_ANIMAL_DOG_BARKING_VICIOUS"), 2539.51f, 798.53f, 76.37f, 54.95f, -1, true, false, 0, -1f, false);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(Local_493[1 /*32*/], iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
}

void func_1089()
{
	if (Local_493[1 /*32*/].f_30 == 0 && __LIB_0__::func_272(Local_493[1 /*32*/], 0))
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Local_493[1 /*32*/], 0))
		{
			PED::_0x802092B07E3B1EEA(Local_493[1 /*32*/], ENTITY::GET_ENTITY_COORDS(Local_653.f_2, true, false), 3);
		}
		TASK::TASK_COMBAT_PED(Local_493[1 /*32*/], Global_35, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_493[1 /*32*/], false);
		Local_493[1 /*32*/].f_30 = 3;
	}
}

void func_1090()
{
	int iVar0;
	PED::_0xF1C03A5352243A30(Local_558[0 /*32*/]);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2557.4f, 799.01f, 75.42f, 2f, -1, 1f, 0, 5f);
	__LIB_1__::func_473(0, joaat("WORLD_ANIMAL_DOG_BARKING_VICIOUS"), -1, 0, 0, -1082130432 /* Float: -1f */);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(Local_558[0 /*32*/], iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	PED::_0xF1C03A5352243A30(Local_558[1 /*32*/]);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2555.95f, 796.39f, 75.36f, 2f, -1, 1f, 0, 4f);
	__LIB_1__::func_473(0, joaat("WORLD_ANIMAL_DOG_BARKING_VICIOUS"), -1, 0, 0, -1082130432 /* Float: -1f */);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(Local_558[1 /*32*/], iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	__LIB_1__::func_398(&(Local_558[0 /*32*/].f_2), 0);
	__LIB_1__::func_398(&(Local_558[1 /*32*/].f_2), 0);
}

void func_1214()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1606(0);
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
	func_1606(1);
}

void func_1215()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_741(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1216()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1609(0);
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
	func_1609(1);
}

void func_1217()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1609(0);
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
	func_1609(1);
}

void func_1218()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_741(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_741(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1221(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1221(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1221(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1221(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

int func_1255(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1648(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_741(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_1385(var uParam0)
{
	__LIB_1__::func_398(uParam0, 1);
	__LIB_2__::func_906(uParam0, 30);
	__LIB_1__::func_401(uParam0, 1);
	__LIB_2__::func_828(uParam0, 1);
	__LIB_1__::func_402(uParam0, 1);
	__LIB_1__::func_397(uParam0, 1);
}

void func_1386(int iParam0)
{
	func_1716(iParam0, "BtcHillbilly_01", Local_643.f_2);
	if (__LIB_0__::func_181())
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_201[iParam0 /*16*/], "b_playerArthur", false, false);
		func_1716(iParam0, "JOHN", Global_35);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_201[iParam0 /*16*/], "b_playerArthur", true, false);
		func_1716(iParam0, "ARTHUR", Global_35);
	}
}

void func_1387(int iParam0)
{
	func_1716(iParam0, "BTCHILLBILLY_01^1", Local_643.f_2);
	func_1716(iParam0, "P_CHAIR06X", iLocal_18[0]);
	func_1716(iParam0, "P_CHAIR06X^1", iLocal_18[1]);
}

void func_1388(int iParam0)
{
	func_1716(iParam0, "BTCHILLBILLY_01", Local_653.f_2);
}

void func_1389(int iParam0)
{
	func_1716(iParam0, "A_M_M_BTCHILLBILLY_01", Local_653.f_2);
	func_1716(iParam0, "A_M_M_BTCHILLBILLY_01^1", Local_643.f_2);
	func_1716(iParam0, "ObediahHinton", iLocal_24);
	func_1716(iParam0, "P_CHAIR06X", iLocal_18[0]);
	func_1716(iParam0, "P_CHAIR06X^1", iLocal_18[1]);
	if (__LIB_0__::func_181())
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_201[iParam0 /*16*/], "b_playerArthur", false, false);
		func_1716(iParam0, "JOHN", Global_35);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_201[iParam0 /*16*/], "b_playerArthur", true, false);
		func_1716(iParam0, "ARTHUR", Global_35);
	}
}

void func_1404()
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
	iVar0 = func_1728(6291456, 0);
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

void func_1412(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1412(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1412(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_1492(var uParam0)
{
	int iVar0;
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(*uParam0, 0))
	{
		PED::_0x802092B07E3B1EEA(*uParam0, Global_36, 3);
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, false);
	__LIB_4__::func_62(*uParam0, 1);
	func_1068(uParam0);
}

bool func_1493(var uParam0, int iParam1)
{
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_1) || __LIB_0__::func_665(Global_35, *uParam0, 1, 1) > 15f)
	{
		__LIB_5__::func_107(&(vLocal_623[iParam1 /*3*/]));
	}
	if (__LIB_5__::func_51(&(vLocal_623[iParam1 /*3*/])) > 5f)
	{
		return true;
	}
	return false;
}

void func_1494(var uParam0)
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_COMBAT_ANIMAL_WARN(0, Global_35, 2);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	func_1068(uParam0);
}

bool func_1500(int iParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!MISC::IS_BIT_SET(iParam0->f_9, iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0 /*32*/]) && !__LIB_0__::func_272((*uParam1)[iVar0 /*32*/], 0))
			{
				MISC::SET_BIT(&(iParam0->f_9), iVar0);
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_1606(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_741(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_741(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_741(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1873(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_744(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1221(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1879(Var0);
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

void func_1609(bool bParam0)
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
		func_741(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_741(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_741(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_741(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_741(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_741(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_741(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_741(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_741(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_741(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_741(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1221(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1221(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1221(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1221(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1221(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1221(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1221(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1221(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1221(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1221(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1221(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1648(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1648(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1648(iVar63, -915411861, 1, 0, 0));
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

void func_1716(int iParam0, char* sParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_201[iParam0 /*16*/], sParam1, iParam2, 0);
	}
}

int func_1728(int iParam0, int iParam1)
{
	var uVar0;
	return func_1924(&uVar0, iParam0, iParam1);
}

void func_1873(int iParam0)
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
	func_1221(iParam0, 1, 1, -142743235, 1);
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
		func_1221(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_1879(struct<6> Param0)
{
	if (!func_2035(Param0.f_4, 1))
	{
	}
	if (!func_2035(Param0, 1))
	{
	}
	if (!func_2035(Param0.f_2, 1))
	{
	}
	if (!func_2035(Param0.f_5, 1))
	{
	}
	if (!func_2035(Param0.f_3, 1))
	{
	}
	if (!func_2035(Param0.f_1, 1))
	{
	}
}

int func_1924(var uParam0, int iParam1, int iParam2)
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
		return func_1924(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2035(int iParam0, int iParam1)
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
				if (func_2035(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2035(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2035(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2035(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

