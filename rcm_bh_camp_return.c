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
	bool bLocal_14 = false;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	struct<4> Local_17[4];
	struct<6> Local_34[4];
	char* sLocal_59 = NULL;
	char* sLocal_60 = NULL;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	float fLocal_78 = 0f;
	int iLocal_79[36] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	struct<16> Local_134 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_150[3];
	struct<16> Local_199[3];
	struct<347> Local_248 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = -1;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = -1;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 1097859072;
	var uLocal_656 = 1000;
	var uLocal_657 = 1067450368;
	var uLocal_658 = 5000;
	var uLocal_659 = 42;
	var uLocal_660 = 1103626240;
	var uLocal_661 = 1077936128;
	var uLocal_662 = 1106247680;
	var uLocal_663 = 1103101952;
	var uLocal_664 = 1097859072;
	var uLocal_665 = 1103626240;
	int iLocal_666 = 0;
	int iLocal_667 = 0;
	int iLocal_668 = 0;
	int iLocal_669 = 0;
	int iLocal_670 = 0;
	int iLocal_671 = 0;
	int iLocal_672[3] = { 0, 0, 0 };
	int iLocal_676[3] = { 0, 0, 0 };
	int iLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	int iLocal_684[3] = { 0, 0, 0 };
	int iLocal_688[26] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_59 = "bh_campreturn";
	sLocal_60 = "bh_campreturn_arrival";
	vLocal_61 = { 1425.841f, -2186.84f, 48.2914f };
	iLocal_64 = joaat("U_M_M_BHT_EXCONFEDCAMPRETURN");
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
			func_68(uParam0);
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
				__LIB_13__::func_194(uParam0);
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
				__LIB_13__::func_194(uParam0);
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
			iVar0 = __LIB_10__::func_568(uParam0);
			__LIB_12__::func_837(uParam0, iVar0);
		}
	}
	else
	{
		__LIB_0__::func_8(&(uParam0->f_172), 16);
		__LIB_13__::func_29(uParam0, 0);
		iVar0 = __LIB_10__::func_568(uParam0);
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
		func_122(uParam0);
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
			func_131();
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
	__LIB_13__::func_194(uParam0);
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
		__LIB_13__::func_156(uParam0);
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
		__LIB_13__::func_194(uParam0);
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
		__LIB_8__::func_992(uParam0->f_174);
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
	MISC::CLEAR_AREA(vLocal_61, 30f, 16384);
	MISC::CLEAR_AREA(vLocal_61, 30f, 2097152);
	MISC::CLEAR_AREA(vLocal_61, 30f, 65536);
	__LIB_12__::func_658(uParam0, 8);
	__LIB_12__::func_659(uParam0, 12);
	Local_17[0 /*4*/] = { 0f, 0f, 0f };
	Local_17[1 /*4*/] = { 0f, 0f, 0f };
	Local_17[2 /*4*/] = { 0f, 0f, 0f };
	Local_17[3 /*4*/] = { 0f, 0f, 0f };
	Local_34[0 /*6*/].f_1 = joaat("P_TRUNK02X");
	Local_34[1 /*6*/].f_1 = joaat("P_STRONGBOX_RUSTED_01X");
	Local_34[2 /*6*/].f_1 = joaat("P_STRONGBOX_RUSTED_01X");
	Local_34[3 /*6*/].f_1 = joaat("S_LOOTABLECAMPCASE_SML");
	Local_134.f_9 = { 1459.26f, -2225.588f, 43.287f };
	Local_134.f_12 = 5f;
	Local_150[0 /*16*/].f_9 = { 1455.018f, -2226.058f, 43.3277f };
	Local_150[0 /*16*/].f_12 = 5f;
	Local_150[1 /*16*/].f_9 = { 1454.417f, -2221.303f, 44.0669f };
	Local_150[1 /*16*/].f_12 = 355f;
	Local_150[2 /*16*/].f_9 = { 1458.825f, -2222.209f, 43.9053f };
	Local_150[2 /*16*/].f_12 = 350f;
	func_187();
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_684[0]))
	{
		iLocal_684[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vLocal_61, 0f, 0f, 0f, 10f, 10f, 10f, "RBTG12_VOLUME_CAMP_BLIP_VOLUME");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_684[1]))
	{
		iLocal_684[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1425.793f, -2186.799f, 48.7f, 0f, 0f, 0f, 1f, 1f, 1f, "RBTG12_VOLUME_CAMP_FIRE_VOLUME");
		iLocal_67 = __LIB_3__::func_710(iLocal_684[1], 16);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_684[2]))
	{
		iLocal_684[2] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vLocal_61, 0f, 0f, 0f, 18f, 18f, 10f, "RBTG12_VOLUME_CAMP_DEFENSIVE_VOLUME");
	}
	__LIB_4__::func_228(&uLocal_638);
	__LIB_6__::func_905(&uLocal_638);
	__LIB_9__::func_261(&uLocal_638);
	__LIB_2__::func_906(&uLocal_638, 30);
	__LIB_1__::func_975(&uLocal_638, 10f);
	__LIB_4__::func_22(&uLocal_638, 40f, 1);
	__LIB_3__::func_407(&uLocal_638, 20f);
	__LIB_1__::func_981(&uLocal_638, 7.5f);
	__LIB_1__::func_399(&uLocal_638, 1);
	__LIB_1__::func_402(&uLocal_638, 0);
	__LIB_1__::func_393(&uLocal_638, 0);
	__LIB_1__::func_368(&uLocal_638, 1);
	__LIB_9__::func_262(&uLocal_638, 1);
	__LIB_1__::func_400(&uLocal_638, 1);
}

void func_42(var uParam0)
{
	__LIB_12__::func_908(uParam0, 0);
	TASK::_0xFF745B0346E19E2C(joaat("HOGTIED_PED"));
	TASK::_0xFF745B0346E19E2C(joaat("DEAD_CARRIABLE_HUMAN"));
	HUD::_TEXT_DATABASE_REQUEST("BHCR");
	__LIB_12__::func_867(uParam0, joaat("P_LANTERN04X"), 2);
	__LIB_12__::func_867(uParam0, joaat("G_M_Y_UNIEXCONFEDS_01"), 2);
	__LIB_12__::func_867(uParam0, joaat("A_C_HORSE_NOKOTA_WHITEROAN"), 2);
	__LIB_12__::func_867(uParam0, joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), 2);
	__LIB_12__::func_867(uParam0, joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET"), 2);
	__LIB_12__::func_867(uParam0, joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO"), 2);
	__LIB_12__::func_867(uParam0, iLocal_64, 3);
	__LIB_13__::func_15(uParam0, sLocal_59, 2, -1, 2);
	__LIB_13__::func_15(uParam0, sLocal_60, 2, -1, 2);
	func_208();
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
			Var1 = { 1436.827f, -2173.24f, 48.9783f };
			Var1.f_3 = 136.2709f;
			break;
		case 1:
			Var1 = { 1430.299f, -2180.694f, 48.2703f };
			Var1.f_3 = 321.2301f;
			break;
		case 2:
			Var1 = { 1357.521f, -1311.146f, 75.9525f };
			Var1.f_3 = 341.4677f;
			break;
		case 3:
			Var1 = { 1357.716f, -1311.35f, 75.9351f };
			Var1.f_3 = 167.955f;
			break;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_218(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	if (iLocal_15 == 0)
	{
		if (fLocal_76 > 150f)
		{
			StringCopy(&(uParam0->f_2578), "BHCR_F_LEFT_C", 24);
			return true;
		}
	}
	else if (iLocal_15 > 1)
	{
		if (__LIB_13__::func_171(&Local_248, 1120403456 /* Float: 100f */, 1125515264 /* Float: 150f */))
		{
			StringCopy(&(uParam0->f_2578), func_220(Local_248.f_64), 24);
			return true;
		}
	}
	return false;
}

void func_68(var uParam0)
{
	fLocal_76 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_61, true);
	fLocal_77 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, __LIB_10__::func_45(Local_248.f_300), true);
	if (__LIB_4__::func_503(21, 5))
	{
		__LIB_1__::func_683(&iLocal_65, 16777216);
	}
	else
	{
		__LIB_1__::func_681(&iLocal_65, 16777216);
	}
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
	if (func_227(uParam0->f_174))
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

bool func_85(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		return true;
	}
	if (__LIB_12__::func_924(uParam0) && func_281(uParam0))
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
		if (uParam0->f_171 != 0 || func_300(uParam0))
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
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_143(uParam0->f_174, 1);
			PERSISTENCE::_0x9D16896F0DBE78A2(Global_1347702[uParam0->f_174 /*49*/].f_24, 100f);
			__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 0);
			iLocal_15 = 0;
			AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
			__LIB_13__::func_105(1, 1);
			return 7;
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_134))
			{
				return 2;
			}
			if (__LIB_10__::func_133(uParam0->f_174, 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_134))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_134, 1431.608f, -2179.258f, 48.4047f, 317.614f, true, false, true);
					ENTITY::_0x9587913B9E772D29(Local_134, 0);
					WEAPON::REMOVE_ALL_PED_WEAPONS(Local_134, true, true);
					__LIB_1__::func_864(Local_134, 1, 0);
					return 2;
				}
				else if (PED::IS_PED_RAGDOLL(Local_134))
				{
					return 2;
				}
			}
			else
			{
				TASK::_0xFF745B0346E19E2C(joaat("HOGTIED_PED"));
				if (TASK::_0xB8F52A3F84A7CC59(joaat("HOGTIED_PED")))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_134) && !PED::_IS_PED_HOGTIED(Local_134))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_134, 1431.608f, -2179.258f, 48.4047f, 317.614f, true, false, true);
						ENTITY::_0x9587913B9E772D29(Local_134, 0);
						WEAPON::REMOVE_ALL_PED_WEAPONS(Local_134, true, true);
						TASK::TASK_CARRIABLE(Local_134, joaat("HOGTIED_PED"), 0, 0, 0);
						PED::_0x2208438012482A1A(Local_134, false, false);
						__LIB_13__::func_118(&Local_134, 10, 0, 0);
					}
				}
				else
				{
					return 2;
				}
			}
			__LIB_13__::func_62(uParam0, func_61(1), func_61(2), 1, 2, 0);
			__LIB_1__::func_683(&(Local_150[0 /*16*/].f_5), 1);
			__LIB_1__::func_683(&(Local_150[1 /*16*/].f_5), 1);
			__LIB_1__::func_683(&(Local_150[2 /*16*/].f_5), 1);
			__LIB_1__::func_683(&(Local_134.f_5), 4);
			__LIB_1__::func_683(&(Local_134.f_5), 8);
			__LIB_1__::func_683(&iLocal_65, 16384);
			__LIB_1__::func_683(&iLocal_65, 2097152);
			func_308(23, 1);
			func_308(24, 1);
			iLocal_15 = 2;
			iLocal_667 = 0;
			AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
			__LIB_13__::func_105(1, 1);
			return 7;
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_134))
			{
				return 2;
			}
			if (__LIB_10__::func_133(uParam0->f_174, 1))
			{
				__LIB_1__::func_864(Local_134, 1, 0);
				if (PED::IS_PED_RAGDOLL(Local_134))
				{
					return 2;
				}
			}
			if (ENTITY::IS_ENTITY_DEAD(Local_134))
			{
				TASK::_0xFF745B0346E19E2C(joaat("DEAD_CARRIABLE_HUMAN"));
				if (TASK::_0xB8F52A3F84A7CC59(joaat("DEAD_CARRIABLE_HUMAN")))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_134, joaat("SCRIPT_TASK_CARRIABLE"), false) != 0 && TASK::GET_SCRIPT_TASK_STATUS(Local_134, joaat("SCRIPT_TASK_CARRIABLE"), false) != 1)
					{
						ENTITY::SET_ENTITY_COORDS(Local_134, 1357.521f, -1311.146f, 75.9525f, true, false, true, true);
						ENTITY::_0x9587913B9E772D29(Local_134, 0);
						WEAPON::REMOVE_ALL_PED_WEAPONS(Local_134, true, true);
						TASK::TASK_CARRIABLE(Local_134, joaat("DEAD_CARRIABLE_HUMAN"), Global_35, 0, 0);
						PED::_0x2208438012482A1A(Local_134, true, false);
						PED::_0x2208438012482A1A(Global_35, true, false);
						__LIB_13__::func_118(&Local_134, 10, 0, 0);
					}
				}
				else
				{
					return 2;
				}
			}
			else
			{
				TASK::_0xFF745B0346E19E2C(joaat("HOGTIED_PED"));
				if (TASK::_0xB8F52A3F84A7CC59(joaat("HOGTIED_PED")))
				{
					if (!__LIB_0__::func_163(Local_134, joaat("SCRIPT_TASK_CARRIABLE")))
					{
						ENTITY::SET_ENTITY_COORDS(Local_134, 1357.521f, -1311.146f, 75.9525f, true, false, true, true);
						ENTITY::_0x9587913B9E772D29(Local_134, 0);
						WEAPON::REMOVE_ALL_PED_WEAPONS(Local_134, true, true);
						TASK::TASK_CARRIABLE(Local_134, joaat("HOGTIED_PED"), Global_35, 0, 0);
						PED::_0x2208438012482A1A(Local_134, true, false);
						PED::_0x2208438012482A1A(Global_35, true, false);
						__LIB_13__::func_118(&Local_134, 10, 0, 0);
					}
				}
				else
				{
					return 2;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_134) && !PED::_IS_PED_HOGTIED(Local_134))
			{
				return 2;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(Local_134, joaat("SCRIPT_TASK_CARRIABLE"), false) != 1)
			{
				return 2;
			}
			if (PED::_GET_CARRIER_AS_PED(Local_134) == 0)
			{
				return 2;
			}
			__LIB_13__::func_62(uParam0, func_61(2), func_61(3), 2, 3, 0);
			__LIB_1__::func_683(&(Local_150[0 /*16*/].f_5), 1);
			__LIB_1__::func_683(&(Local_150[1 /*16*/].f_5), 1);
			__LIB_1__::func_683(&(Local_150[2 /*16*/].f_5), 1);
			__LIB_1__::func_683(&(Local_134.f_5), 4);
			__LIB_1__::func_683(&(Local_134.f_5), 8);
			__LIB_1__::func_683(&iLocal_65, 16384);
			__LIB_1__::func_683(&iLocal_65, 2097152);
			__LIB_1__::func_683(&iLocal_65, 4194304);
			func_308(23, 1);
			func_308(24, 1);
			iLocal_15 = 2;
			iLocal_667 = 3;
			AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
			__LIB_13__::func_105(1, 1);
			return 7;
		case 3:
			if (!__LIB_10__::func_133(uParam0->f_174, 1))
			{
				__LIB_10__::func_131(iLocal_64, Local_248.f_300, 0);
				__LIB_10__::func_92(iLocal_64, Local_248.f_300, Local_248.f_299);
				__LIB_1__::func_616(Global_40.f_9074.f_3, 1, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_134))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_134, 1355.85f, -1294.04f, 75.67f, 296.4259f, true, false, true);
					__LIB_1__::func_864(Local_134, 1, 0);
				}
				__LIB_1__::func_616(Global_40.f_9074.f_4, 1, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
			}
			__LIB_13__::func_105(1, 1);
			return 8;
		default:
			__LIB_13__::func_105(1, 1);
			return 7;
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
	return func_325(Var0, &(uParam0->f_206), uParam0);
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
		if (func_329(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
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
	func_331();
	func_332(uParam0);
	if (PROPSET::_DOES_PROPSET_EXIST(iLocal_680))
	{
		__LIB_17__::func_600(&uLocal_632, vLocal_61, 1, -1082130432 /* Float: -1f */);
	}
	func_334(uParam0);
	func_335(uParam0);
	switch (iLocal_15)
	{
		case 0:
			func_336();
			if (!__LIB_0__::func_27(iLocal_65, 1))
			{
				if (fLocal_76 < (100f / 4f))
				{
					if (!MAP::DOES_BLIP_EXIST(iLocal_668))
					{
						iLocal_668 = __LIB_5__::func_554(-308585968, iLocal_684[0], 1);
					}
					__LIB_12__::func_883(uParam0, "BHCR_OBJ_1", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_1__::func_681(&iLocal_65, 2);
					__LIB_1__::func_683(&iLocal_65, 1);
				}
			}
			if (!__LIB_0__::func_27(iLocal_65, 2))
			{
				if (__LIB_0__::func_27(iLocal_65, 1))
				{
					if (fLocal_76 > 100f)
					{
						__LIB_12__::func_883(uParam0, "BHCR_OBJ_2", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						__LIB_1__::func_681(&iLocal_65, 1);
						__LIB_1__::func_683(&iLocal_65, 2);
					}
				}
			}
			if (fLocal_76 < 8f)
			{
				if (!__LIB_0__::func_75(&uLocal_116))
				{
					__LIB_1__::func_283(&uLocal_116, 0);
				}
				else if (__LIB_0__::func_265(&uLocal_116) > 12f)
				{
					__LIB_0__::func_37(&uLocal_116);
					iLocal_15 = 1;
				}
			}
			break;
		case 1:
			if ((func_340(uParam0) && func_341(uParam0, &Local_134)) && func_342())
			{
				__LIB_13__::func_118(&Local_134, 2, 0, 0);
				__LIB_13__::func_118(&(Local_150[0 /*16*/]), 2, 0, 0);
				__LIB_13__::func_118(&(Local_150[1 /*16*/]), 2, 0, 0);
				__LIB_13__::func_118(&(Local_150[2 /*16*/]), 2, 0, 0);
				iLocal_15 = 2;
			}
			break;
		case 2:
			if (!__LIB_0__::func_27(iLocal_65, 4))
			{
				if (!__LIB_0__::func_27(iLocal_65, 8))
				{
					if (__LIB_13__::func_131(Local_134, &uLocal_122, 1069547520 /* Float: 1.5f */, 1056964608 /* Float: 0.5f */, 0.2f, 0.45f))
					{
						if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35))
						{
							__LIB_13__::func_123(uParam0, "RBT12_PLYRSPOT", 0, 0);
						}
						__LIB_1__::func_683(&iLocal_65, 8);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_134))
			{
				if ((((__LIB_0__::func_27(iLocal_65, 16384) || __LIB_0__::func_27(Local_134.f_5, 1)) || __LIB_0__::func_27(Local_134.f_5, 4)) || __LIB_0__::func_27(iLocal_65, 8)) || (__LIB_0__::func_48(Global_35, Local_134, 20f, 0) && PED::IS_TRACKED_PED_VISIBLE(Local_134)))
				{
					if (!__LIB_0__::func_27(iLocal_65, 4))
					{
						__LIB_0__::func_325(&iLocal_668);
						__LIB_0__::func_325(&(Local_134.f_1));
						__LIB_10__::func_82(&Local_248);
						__LIB_10__::func_143(uParam0->f_174, 1);
						__LIB_10__::func_197(&Local_248, 4, 1);
						__LIB_1__::func_683(&iLocal_65, 4);
					}
				}
			}
			if (__LIB_0__::func_27(iLocal_65, 4))
			{
				__LIB_13__::func_111(&Local_248);
				if (func_350(&Local_248, 1))
				{
					iLocal_15 = 3;
				}
			}
			break;
		case 3:
			if (func_351(&Local_248))
			{
				return 8;
			}
			break;
	}
	return 7;
}

void func_122(var uParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(Local_134))
	{
		__LIB_2__::func_115(113, 1, 0, 0, 12, 0, 0, 1);
	}
	else
	{
		__LIB_2__::func_115(106, 1, 0, 0, 12, 0, 0, 1);
	}
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
	__LIB_13__::func_134(iParam0, 0, iParam3);
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
		func_387(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		__LIB_1__::func_809(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	__LIB_10__::func_833(iParam0);
}

void func_131()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	__LIB_0__::func_319(4112);
	__LIB_0__::func_320(6);
	vVar2 = { func_391(Global_2621440[0 /*12066*/].f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	__LIB_0__::func_321(vVar2, uVar1, uVar0, 0);
	__LIB_0__::func_322(vVar2);
	Global_40.f_9.f_15 = __LIB_1__::func_447(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

bool func_150(var uParam0)
{
	switch (__LIB_12__::func_644(uParam0))
	{
		case 0:
			if (__LIB_18__::func_580(&Local_248))
			{
				__LIB_13__::func_67(Local_248.f_300, ENTITY::GET_ENTITY_MODEL(Local_248.f_67));
				__LIB_2__::func_426(&Local_134);
				return true;
			}
			else
			{
				func_418(uParam0);
			}
			return false;
		case 1:
			return true;
		default:
			if (!__LIB_13__::func_109(Local_134, -1082130432 /* Float: -1f */, 1116471296 /* Float: 70f */))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_159(var uParam0)
{
	HUD::_TEXT_DATABASE_DELETE("BHCR");
	if (PROPSET::_DOES_PROPSET_EXIST(iLocal_680))
	{
		PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(iLocal_680);
	}
	TASK::SET_SCENARIO_TYPE_ENABLED("PROP_PLAYER_SLEEP_TENT_A_FRAME", true);
	__LIB_13__::func_112(&Local_248, 1);
	__LIB_13__::func_92(&Local_248);
	__LIB_10__::func_26(&uLocal_632, 106);
	__LIB_0__::func_121(907, 32);
	__LIB_4__::func_193(907);
	AUDIO::_0x0D7FD6A55FD63AEF(23, 3, 1);
}

void func_187()
{
	int iVar0;
	iLocal_688[0] = TASK::CREATE_SCENARIO_POINT(joaat("PROP_HUMAN_SEAT_CHAIR_CLEAN_RIFLE"), 1424.68f, -2188.66f, 48.775f, 335f, 2f, 0, 0);
	iLocal_688[1] = TASK::CREATE_SCENARIO_POINT(joaat("PROP_HUMAN_SEAT_CRATE_CLEAN_BOOTS"), 1426.55f, -2188.91f, 48.775f, 15f, 2f, 0, 0);
	iLocal_688[2] = TASK::CREATE_SCENARIO_POINT(joaat("PROP_HUMAN_SEAT_NO_BACK_COLLECTION"), 1427.76f, -2187.85f, 48.775f, 65f, 2f, 0, 0);
	iLocal_688[3] = TASK::CREATE_SCENARIO_POINT(joaat("PROP_HUMAN_SEAT_NO_BACK_COLLECTION"), 1428.01f, -2186.22f, 48.775f, 105f, 2f, 0, 0);
	iLocal_688[4] = TASK::CREATE_SCENARIO_POINT(joaat("PROP_CAMP_MICAH_SEAT_CHAIR_CLEAN_GUN"), 1426.1f, -2184.71f, 48.775f, 165f, 2f, 0, 0);
	iLocal_688[5] = TASK::CREATE_SCENARIO_POINT(joaat("PROP_HITCHINGPOST"), 1419.395f, -2187.252f, 48.2914f, 280f, 2f, 0, 0);
	iLocal_688[6] = TASK::CREATE_SCENARIO_POINT(joaat("PROP_HITCHINGPOST"), 1419.946f, -2183.8f, 48.2914f, 240f, 2f, 0, 0);
	iLocal_688[7] = TASK::CREATE_SCENARIO_POINT(joaat("PROP_HITCHINGPOST"), 1432.356f, -2195.891f, 48.2921f, 95f, 2f, 0, 0);
	iLocal_688[8] = TASK::CREATE_SCENARIO_POINT(joaat("PROP_HITCHINGPOST"), 1435.754f, -2192.846f, 48.4063f, 30f, 2f, 0, 0);
	iLocal_688[9] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_GUARD_SCOUT"), 1440.824f, -2192.574f, 48.7139f, 225f, 2f, 0, 0);
	iLocal_688[10] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_GUARD_SCOUT"), 1431.998f, -2171.53f, 48.4863f, 350f, 2f, 0, 0);
	iLocal_688[11] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_GUARD_SCOUT"), 1415.56f, -2175.287f, 47.9938f, 38.5f, 2f, 0, 0);
	iLocal_688[12] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_GUARD_SCOUT"), 1418.764f, -2197.493f, 48.2914f, 135f, 2f, 0, 0);
	iLocal_688[13] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_GUARD_SCOUT"), 1417.431f, -2188.844f, 48.2914f, 80f, 2f, 0, 0);
	iLocal_688[14] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_GUARD_SCOUT"), 1426.044f, -2175.384f, 48.2906f, 10f, 2f, 0, 0);
	iLocal_688[15] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_GUARD_SCOUT"), 1437.542f, -2177.948f, 48.9112f, 270f, 2f, 0, 0);
	iLocal_688[16] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_GUARD_SCOUT"), 1427.715f, -2200.364f, 48.2819f, 160f, 2f, 0, 0);
	iLocal_688[17] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_BADASS"), 1430.859f, -2178.258f, 48.2914f, 340f, 2f, 0, 0);
	iLocal_688[18] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_BADASS"), 1415.492f, -2183.39f, 48.2914f, 65f, 2f, 0, 0);
	iLocal_688[19] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_BADASS"), 1423.731f, -2195.31f, 48.2914f, 170f, 2f, 0, 0);
	iLocal_688[20] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_BADASS"), 1437.452f, -2185.777f, 48.6028f, 290f, 2f, 0, 0);
	iLocal_688[21] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_GUARD_LANTERN_NERVOUS"), 1430.859f, -2178.258f, 48.2914f, 340f, 2f, 0, 0);
	iLocal_688[22] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_GUARD_LANTERN_NERVOUS"), 1415.492f, -2183.39f, 48.2914f, 65f, 2f, 0, 0);
	iLocal_688[23] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_GUARD_LANTERN_NERVOUS"), 1423.731f, -2195.31f, 48.2914f, 170f, 2f, 0, 0);
	iLocal_688[24] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_GUARD_LANTERN_NERVOUS"), 1437.452f, -2185.777f, 48.6028f, 290f, 2f, 0, 0);
	iLocal_688[25] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_FIRE_TEND_KNEEL"), 1426.665f, -2186.67f, 48.2914f, 103.5f, 2f, 0, 0);
	iVar0 = 0;
	while (iVar0 < iLocal_688)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_688[iVar0]))
		{
			TASK::_SET_SCENARIO_POINT_FLAG(iLocal_688[iVar0], 8, true);
			TASK::_SET_SCENARIO_POINT_FLAG(iLocal_688[iVar0], 23, true);
			TASK::_SET_SCENARIO_POINT_FLAG(iLocal_688[iVar0], 25, true);
		}
		iVar0++;
	}
}

void func_208()
{
	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("PROP_CAMP_MICAH_SEAT_CHAIR_CLEAN_GUN"), 15, 0, 0);
	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("PROP_HUMAN_SEAT_NO_BACK_COLLECTION"), 15, 0, 0);
	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("PROP_HUMAN_SEAT_CHAIR_CLEAN_RIFLE"), 15, 0, 0);
	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("PROP_HUMAN_SEAT_CRATE_CLEAN_BOOTS"), 15, 0, 0);
	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_GUARD_SCOUT"), 15, 0, 0);
	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_BADASS"), 15, 0, 0);
	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("PROP_HITCHINGPOST"), 15, 0, 0);
}

int func_218(vector3 vParam0, var uParam3)
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
		iVar0 = func_483(0, 0);
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

char* func_220(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "BHCR_F_LEFT_A";
		case 2:
			return "BHCR_F_LEFT_D";
		case 3:
			return "BHCR_F_ESCP";
		case 4:
			return "BHCR_F_LOST";
		default:
			break;
	}
	return __LIB_13__::func_104(Local_248.f_64);
}

bool func_227(int iParam0)
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

int func_281(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_12__::func_767(uParam0);
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("BHCR"))
	{
		return 0;
	}
	if (!func_574())
	{
		return 0;
	}
	if (iVar0 < 2)
	{
		if (!func_575())
		{
			return 0;
		}
	}
	if (iVar0 > 0 && !func_341(uParam0, &Local_134))
	{
		return 0;
	}
	if (iVar0 < 2)
	{
		__LIB_13__::func_137(&uLocal_681, vLocal_61, 10f);
		iVar1 = 45;
		__LIB_3__::func_414(&uLocal_682, vLocal_61, 10f, 1, iVar1, 0);
		iVar1 = 4;
		__LIB_3__::func_414(&uLocal_683, vLocal_61, 25f, 1, iVar1, 0);
	}
	__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 0);
	TASK::SET_SCENARIO_TYPE_ENABLED("PROP_PLAYER_SLEEP_TENT_A_FRAME", false);
	__LIB_0__::func_123(907, 32);
	__LIB_3__::func_229(907);
	__LIB_13__::func_114(&Local_248);
	return 1;
}

bool func_300(var uParam0)
{
	__LIB_13__::func_110(&Local_248, Global_1347702[uParam0->f_174 /*49*/].f_24, Global_1347702[uParam0->f_174 /*49*/].f_18, 0, 0);
	__LIB_17__::func_600(&uLocal_632, vLocal_61, 1, -1082130432 /* Float: -1f */);
	func_336();
	__LIB_0__::func_123(907, 32);
	__LIB_3__::func_229(907);
	if (__LIB_1__::func_410(Global_36, vLocal_61, 23f, 1))
	{
		AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
		return true;
	}
	return false;
}

void func_308(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_610(iParam0))
		{
			iLocal_79[iParam0] = 1;
		}
	}
	else
	{
		iLocal_79[iParam0] = 0;
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
			func_641(uParam4);
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

bool func_329(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
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
					__LIB_12__::func_889(uParam0);
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
		func_671(uParam0, iParam5);
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
			func_676(uParam0, Param1, iParam5);
			break;
		case 1:
			func_677(uParam0);
			break;
		case 2:
			__LIB_12__::func_923(uParam0);
			break;
		case 3:
			if (__LIB_12__::func_670(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1580 /*41*/].f_27, uParam0->f_1241[uParam0->f_1580 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_1__::func_148(&(uParam0->f_1768));
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
			if (uParam0->f_1581 >= 0 || __LIB_0__::func_264(&(uParam0->f_1768)) >= 15f)
			{
				if (__LIB_12__::func_851(uParam0, iParam5))
				{
					if (__LIB_12__::func_699(uParam0))
					{
						uParam0->f_1581 = __LIB_12__::func_754(uParam0);
						__LIB_1__::func_148(&(uParam0->f_1768));
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
			if (__LIB_12__::func_851(uParam0, iParam5))
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

void func_331()
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_27(iLocal_65, 16384))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_670))
	{
		iLocal_670 = func_687(0, 0, 0, 0, 0, 0, 0, 0);
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar0 = PED::GET_MOUNT(Global_35);
		if (((((!ENTITY::IS_ENTITY_DEAD(iVar0) && iVar0 != iLocal_670) && iVar0 != iLocal_669) && iVar0 != iLocal_672[0]) && iVar0 != iLocal_672[1]) && iVar0 != iLocal_672[2])
		{
			iLocal_671 = iVar0;
		}
	}
	else if (TASK::_0xEFC4303DDC6E60D3(Global_35))
	{
		iVar1 = TASK::_0xED1F514AF4732258(Global_35);
		if (((((!ENTITY::IS_ENTITY_DEAD(iVar1) && iVar1 != iLocal_670) && iVar1 != iLocal_669) && iVar1 != iLocal_672[0]) && iVar1 != iLocal_672[1]) && iVar1 != iLocal_672[2])
		{
			iLocal_671 = iVar1;
		}
	}
}

void func_332(var uParam0)
{
	if (!__LIB_0__::func_27(iLocal_65, 2097152))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_134))
		{
			if (PED::_IS_PED_HOGTIED(Local_134) || ENTITY::IS_ENTITY_DEAD(Local_134))
			{
				if (func_688(&Local_150, 1) == 0)
				{
					__LIB_13__::func_62(uParam0, func_61(1), func_61(2), 1, 2, 0);
					__LIB_1__::func_683(&iLocal_65, 2097152);
				}
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_65, 4194304))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_134))
		{
			if (__LIB_10__::func_166(Local_134, 1))
			{
				if (fLocal_77 < 30f)
				{
					__LIB_13__::func_62(uParam0, func_61(2), func_61(3), 2, 3, 0);
					__LIB_1__::func_683(&iLocal_65, 4194304);
				}
			}
		}
	}
}

void func_334(var uParam0)
{
	int iVar0;
	func_699(uParam0);
	func_700(uParam0, &Local_134, iLocal_669);
	iVar0 = 0;
	while (iVar0 < Local_150)
	{
		func_701(uParam0, &(Local_150[iVar0 /*16*/]), iLocal_672[iVar0], iVar0);
		iVar0++;
	}
	if (!__LIB_0__::func_27(iLocal_65, 16384))
	{
		if (!__LIB_0__::func_27(iLocal_65, 16))
		{
			if (func_702())
			{
				__LIB_1__::func_683(&iLocal_65, 16);
			}
		}
		if (!__LIB_0__::func_27(iLocal_65, 4096))
		{
			if (func_703(Local_134))
			{
				__LIB_1__::func_683(&iLocal_65, 4096);
			}
		}
		if (!__LIB_0__::func_27(iLocal_65, 1024))
		{
			if (func_704(Local_134))
			{
				__LIB_1__::func_683(&iLocal_65, 1024);
			}
		}
	}
}

void func_335(var uParam0)
{
	int iVar0;
	if (!__LIB_0__::func_27(iLocal_65, 16384))
	{
		if (__LIB_0__::func_27(iLocal_65, 4096) || __LIB_0__::func_27(iLocal_65, 1024))
		{
			if (!func_610(9) && !func_610(11))
			{
				if (__LIB_0__::func_272(Local_134, 0))
				{
					if (((func_705("RBT12_RETURN") || func_705("RBT12_RETURN2")) || func_705("RBT12_CAMP1")) || func_705("RBT12_CAMP2"))
					{
						__LIB_5__::func_20(0, 0);
					}
					if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
					{
						if (__LIB_0__::func_27(iLocal_65, 4096) || __LIB_0__::func_27(iLocal_65, 2048))
						{
							if (__LIB_12__::func_876(uParam0, "RBT12_TAMPERED", 0))
							{
								__LIB_1__::func_148(&uLocal_125);
								func_308(9, 1);
							}
						}
						else if (__LIB_0__::func_27(iLocal_65, 1024))
						{
							if (__LIB_12__::func_876(uParam0, "RBT12_SAWHORSE", 0))
							{
								__LIB_1__::func_148(&uLocal_125);
								func_308(11, 1);
							}
						}
					}
				}
			}
			else if (__LIB_0__::func_272(Local_134, 0))
			{
				if (Local_134.f_2 == 4)
				{
					if (__LIB_0__::func_27(Local_134.f_5, 32))
					{
						if (__LIB_0__::func_75(&uLocal_125) && __LIB_0__::func_265(&uLocal_125) > 10f)
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								if (__LIB_12__::func_876(uParam0, "RBT12_SEARCH", 0))
								{
									__LIB_1__::func_148(&uLocal_125);
								}
							}
						}
					}
				}
			}
		}
		else
		{
			if (!func_610(0))
			{
				if (((__LIB_0__::func_272(Local_134, 0) && __LIB_0__::func_272(Local_150[0 /*16*/], 0)) && __LIB_0__::func_272(Local_150[1 /*16*/], 0)) && __LIB_0__::func_272(Local_150[2 /*16*/], 0))
				{
					if (Local_134.f_15 >= 24 || __LIB_0__::func_266(Local_134, VOLUME::_GET_VOLUME_COORDS(iLocal_684[1]), 37.5f, 1, 1))
					{
						if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
						{
							if (__LIB_12__::func_876(uParam0, "RBT12_RETURN", 0))
							{
								func_308(0, 1);
							}
						}
					}
				}
			}
			else if (!func_610(1))
			{
				if (((__LIB_0__::func_272(Local_134, 0) && __LIB_0__::func_272(Local_150[0 /*16*/], 0)) && __LIB_0__::func_272(Local_150[1 /*16*/], 0)) && __LIB_0__::func_272(Local_150[2 /*16*/], 0))
				{
					if (PED::_IS_PED_USING_SCENARIO_POINT(Local_134, iLocal_688[25]) || PED::_IS_PED_USING_SCENARIO_POINT(Local_134, iLocal_688[3]))
					{
						if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
						{
							if (__LIB_12__::func_876(uParam0, "RBT12_RETURN2", 0))
							{
								func_308(1, 1);
							}
						}
					}
				}
			}
			if (!func_610(2))
			{
				if (((__LIB_0__::func_272(Local_134, 0) && __LIB_0__::func_272(Local_150[0 /*16*/], 0)) && __LIB_0__::func_272(Local_150[1 /*16*/], 0)) && __LIB_0__::func_272(Local_150[2 /*16*/], 0))
				{
					if (((PED::IS_PED_USING_ANY_SCENARIO(Local_134) && PED::IS_PED_USING_ANY_SCENARIO(Local_150[0 /*16*/])) && PED::IS_PED_USING_ANY_SCENARIO(Local_150[1 /*16*/])) && PED::IS_PED_USING_ANY_SCENARIO(Local_150[2 /*16*/]))
					{
						if (((__LIB_0__::func_27(Local_134.f_5, 256) && __LIB_0__::func_27(Local_150[0 /*16*/].f_5, 256)) && __LIB_0__::func_27(Local_150[1 /*16*/].f_5, 256)) && __LIB_0__::func_27(Local_150[2 /*16*/].f_5, 256))
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								__LIB_12__::func_875(uParam0, Local_150[0 /*16*/], "RBT12_ENEMY", 0);
								if (__LIB_12__::func_876(uParam0, "RBT12_CAMP1", 0))
								{
									func_308(2, 1);
								}
							}
						}
					}
				}
			}
			else if (!func_610(3))
			{
				if (((__LIB_0__::func_272(Local_134, 0) && __LIB_0__::func_272(Local_150[0 /*16*/], 0)) && __LIB_0__::func_272(Local_150[1 /*16*/], 0)) && __LIB_0__::func_272(Local_150[2 /*16*/], 0))
				{
					if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
					{
						if (__LIB_12__::func_876(uParam0, "RBT12_CAMP2", 0))
						{
							func_308(3, 1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!__LIB_0__::func_27(iLocal_65, 2097152))
		{
			if (((((!func_610(4) && !func_610(5)) && !func_610(6)) && !func_610(7)) && !func_610(8)) && !func_610(10))
			{
				if (__LIB_5__::func_463())
				{
					__LIB_5__::func_20(0, 0);
				}
				if (__LIB_0__::func_27(iLocal_65, 16))
				{
					if (__LIB_0__::func_272(Local_134, 0))
					{
						if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
						{
							if (__LIB_12__::func_876(uParam0, "RBT12_STLHORSE", 0))
							{
								func_308(10, 1);
							}
						}
					}
				}
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					iVar0 = __LIB_11__::func_672(Global_35, joaat("REL_PLAYER_ENEMY"), 0, 0, 28);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						if (iVar0 == Local_134)
						{
							if (__LIB_0__::func_27(iLocal_65, 8192))
							{
								if (__LIB_12__::func_876(uParam0, "RBT12_TSPOTS", 0))
								{
									__LIB_1__::func_148(&uLocal_125);
									func_308(6, 1);
								}
							}
							else if (__LIB_12__::func_876(uParam0, "RBT12_TSPOTC", 0))
							{
								__LIB_1__::func_148(&uLocal_125);
								func_308(5, 1);
							}
						}
						else if ((iVar0 == Local_150[0 /*16*/] || iVar0 == Local_150[1 /*16*/]) || iVar0 == Local_150[2 /*16*/])
						{
							if (__LIB_0__::func_27(iLocal_65, 8192))
							{
								__LIB_12__::func_875(uParam0, iVar0, "RBT12_ENEMY", 0);
								if (__LIB_12__::func_876(uParam0, "RBT12_ESPOTS", 0))
								{
									__LIB_1__::func_148(&uLocal_125);
									func_308(8, 1);
								}
							}
							else if (__LIB_0__::func_27(iLocal_65, 512))
							{
								__LIB_12__::func_875(uParam0, iVar0, "EXC_YPED3", 0);
								if (__LIB_12__::func_876(uParam0, "RBT12_SPOT2", 0))
								{
									__LIB_1__::func_148(&uLocal_125);
									func_308(4, 1);
								}
							}
							else
							{
								__LIB_12__::func_875(uParam0, iVar0, "RBT12_ENEMY", 0);
								if (__LIB_12__::func_876(uParam0, "RBT12_ESPOTC", 0))
								{
									__LIB_1__::func_148(&uLocal_125);
									func_308(7, 1);
								}
							}
						}
					}
				}
			}
			if (!func_610(13) && !func_610(14))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_134) && ENTITY::IS_ENTITY_DEAD(Local_134))
				{
					if ((__LIB_0__::func_272(Local_150[0 /*16*/], 0) || __LIB_0__::func_272(Local_150[1 /*16*/], 0)) || __LIB_0__::func_272(Local_150[2 /*16*/], 0))
					{
						if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
						{
							iVar0 = __LIB_11__::func_672(Global_35, joaat("REL_PLAYER_ENEMY"), MISC::GET_RANDOM_INT_IN_RANGE(0, 1), 0, 28);
							if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
							{
								__LIB_12__::func_875(uParam0, iVar0, "RBT12_ENEMY", 0);
								if (func_688(&Local_150, 0) == 1)
								{
									if (__LIB_12__::func_876(uParam0, "RBT12_ETDEADL", 0))
									{
										func_308(14, 1);
									}
								}
								else if (__LIB_12__::func_876(uParam0, "RBT12_ETDEAD", 0))
								{
									func_308(13, 1);
								}
							}
						}
					}
				}
			}
		}
		if (!func_610(23) && !func_610(24))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_134) && !ENTITY::IS_ENTITY_DEAD(Local_134))
			{
				if (__LIB_0__::func_48(Global_35, Local_134, 3f, 1))
				{
					if (PED::_IS_PED_HOGTIED(Local_134) || ENTITY::_0x61914209C36EFDDB(Local_134) == 1)
					{
						if (func_688(&Local_150, 1) == 0)
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								if (PED::GET_PED_CONFIG_FLAG(Local_134, 11, false) == 0)
								{
									if (__LIB_0__::func_27(Local_134.f_5, 64))
									{
										if (__LIB_12__::func_876(uParam0, "RBT12_HOGKOED", 0))
										{
											__LIB_1__::func_148(&uLocal_125);
											func_308(24, 1);
										}
									}
									else if (__LIB_13__::func_123(uParam0, "RBT12_HOG", 0, 0))
									{
										__LIB_1__::func_148(&uLocal_125);
										func_308(23, 1);
									}
								}
							}
						}
					}
				}
			}
		}
		if (__LIB_0__::func_75(&uLocal_125) && __LIB_0__::func_265(&uLocal_125) > MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 20f))
		{
			if (__LIB_0__::func_272(Local_134, 0))
			{
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					if (((PED::_IS_PED_HOGTIED(Local_134) || PED::_IS_PED_LASSOED(Local_134)) || ENTITY::_0x61914209C36EFDDB(Local_134) == 3) || ENTITY::_0x61914209C36EFDDB(Local_134) == 1)
					{
						if (func_688(&Local_150, 1) > 0)
						{
							if (__LIB_12__::func_876(uParam0, "RBT12_THOGTIEC", 0))
							{
								__LIB_1__::func_148(&uLocal_125);
							}
						}
						else if (!func_610(22))
						{
							if (__LIB_12__::func_876(uParam0, "RBT12_THOGTIE", 0))
							{
								iLocal_73++;
								__LIB_1__::func_148(&uLocal_125);
								if (iLocal_73 == 3)
								{
									func_308(22, 1);
								}
							}
						}
					}
					else if (((PED::IS_PED_IN_COMBAT(Local_134, 0) || Local_134.f_2 == 9) || Local_134.f_2 == 8) || Local_134.f_2 == 7)
					{
						if ((__LIB_0__::func_272(Local_150[0 /*16*/], 0) || __LIB_0__::func_272(Local_150[1 /*16*/], 0)) || __LIB_0__::func_272(Local_150[2 /*16*/], 0))
						{
							if (PED::IS_PED_ON_MOUNT(Local_134))
							{
								if (Local_134.f_2 == 7)
								{
									switch (iLocal_74)
									{
										case 0:
											if (__LIB_12__::func_876(uParam0, "RBT12_CIRCLE1", 0))
											{
												iLocal_74++;
												__LIB_1__::func_148(&uLocal_125);
											}
											break;
										case 1:
											if (__LIB_12__::func_876(uParam0, "RBT12_CIRCLE2", 0))
											{
												iLocal_74++;
												__LIB_1__::func_148(&uLocal_125);
											}
											break;
										case 2:
											if (__LIB_12__::func_876(uParam0, "RBT12_CIRCLE3", 0))
											{
												iLocal_74++;
												__LIB_1__::func_148(&uLocal_125);
											}
											break;
									}
								}
								else if (__LIB_12__::func_876(uParam0, "RBT12_TCOMBATH", 0))
								{
									__LIB_1__::func_148(&uLocal_125);
								}
							}
							else if (__LIB_12__::func_876(uParam0, "RBT12_TCOMBATF", 0))
							{
								__LIB_1__::func_148(&uLocal_125);
							}
						}
						else if (__LIB_12__::func_876(uParam0, "RBT12_TCOMBATL", 0))
						{
							__LIB_1__::func_148(&uLocal_125);
						}
					}
				}
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_65, 4194304))
	{
		if (__LIB_0__::func_27(iLocal_65, 262144))
		{
			if (!func_610(28) && !func_610(29))
			{
				if (__LIB_6__::func_904() || __LIB_5__::func_463())
				{
					__LIB_5__::func_20(1, 0);
				}
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					iVar0 = __LIB_11__::func_672(Global_35, joaat("REL_PLAYER_ENEMY"), 0, 0, 28);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						__LIB_12__::func_875(uParam0, iVar0, "EXC_YPED3", 0);
						if (ENTITY::DOES_ENTITY_EXIST(Local_134) && !ENTITY::IS_ENTITY_DEAD(Local_134))
						{
							if (__LIB_12__::func_876(uParam0, "RBT12_LIVEAMBSH", 0))
							{
								__LIB_1__::func_148(&uLocal_125);
								func_308(28, 1);
							}
						}
						else if (__LIB_12__::func_876(uParam0, "RBT12_DEADAMBSH", 0))
						{
							__LIB_1__::func_148(&uLocal_125);
							func_308(29, 1);
						}
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_134) && !ENTITY::IS_ENTITY_DEAD(Local_134))
			{
				if (!__LIB_0__::func_27(iLocal_65, 524288))
				{
					if (func_688(&Local_199, 0) == 0)
					{
						if (!func_610(32))
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								if (__LIB_12__::func_876(uParam0, "RBT12_BACKUP3", 0))
								{
									func_308(32, 1);
								}
							}
						}
					}
					else if (!func_610(30))
					{
						if (__LIB_0__::func_75(&uLocal_125) && __LIB_0__::func_265(&uLocal_125) > 5f)
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								if (__LIB_12__::func_876(uParam0, "RBT12_BACKUP1", 0))
								{
									__LIB_1__::func_148(&uLocal_125);
									func_308(30, 1);
								}
							}
						}
					}
					else if (!func_610(31))
					{
						if (__LIB_0__::func_75(&uLocal_125) && __LIB_0__::func_265(&uLocal_125) > 10f)
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								if (__LIB_12__::func_876(uParam0, "RBT12_BACKUP2", 0))
								{
									__LIB_1__::func_148(&uLocal_125);
									func_308(31, 1);
								}
							}
						}
					}
				}
				else if (!func_610(32))
				{
					if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
					{
						if (__LIB_13__::func_124(uParam0, "RBT12_BACKUP3", 1, 0))
						{
							func_308(32, 1);
						}
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_134) && !ENTITY::IS_ENTITY_DEAD(Local_134))
	{
		if (__LIB_10__::func_166(Local_134, 1))
		{
			if (!__LIB_0__::func_75(&uLocal_128) && fLocal_76 > 30f)
			{
				__LIB_1__::func_283(&uLocal_128, 0);
			}
			if (!__LIB_0__::func_27(iLocal_65, 4194304))
			{
				if ((__LIB_0__::func_27(iLocal_65, 131072) || __LIB_0__::func_27(iLocal_65, 524288)) || !__LIB_0__::func_27(iLocal_65, 262144))
				{
					if (!func_610(25))
					{
						if (__LIB_10__::func_102(Local_134, 1) || (__LIB_0__::func_75(&uLocal_128) && __LIB_0__::func_265(&uLocal_128) > 15f))
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								if (__LIB_13__::func_123(uParam0, "RBT12_RETURN1", 0, 0))
								{
									AUDIO::_0x0D7FD6A55FD63AEF(23, 3, 0);
									__LIB_1__::func_683(&iLocal_65, 1048576);
									func_308(22, 1);
									func_308(25, 1);
								}
							}
						}
					}
					else if (!func_610(26))
					{
						if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
						{
							if (__LIB_13__::func_123(uParam0, "RBT12_RETURN2", 0, 0))
							{
								func_308(26, 1);
							}
						}
					}
					else if (!func_610(27))
					{
						if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
						{
							if (__LIB_13__::func_123(uParam0, "RBT12_RETURN3", 0, 0))
							{
								func_308(27, 1);
							}
						}
					}
					else if (__LIB_0__::func_27(iLocal_65, 1048576))
					{
						if (!__LIB_13__::func_120("RBT12_RETURN3", 0) && !__LIB_18__::func_632("RBT12_RETURN3", 0))
						{
							__LIB_13__::func_92(&Local_248);
							AUDIO::_0x0D7FD6A55FD63AEF(23, 3, 1);
							__LIB_1__::func_681(&iLocal_65, 1048576);
						}
					}
				}
				else
				{
					__LIB_0__::func_37(&uLocal_128);
				}
			}
			if (!func_610(33))
			{
				if (fLocal_77 < 35f)
				{
					if (__LIB_5__::func_463())
					{
						__LIB_5__::func_20(1, 0);
					}
					if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
					{
						if (__LIB_13__::func_123(uParam0, "RBT12_ARRIVE", 0, 0))
						{
							func_308(33, 1);
						}
					}
				}
			}
		}
		else
		{
			__LIB_0__::func_37(&uLocal_128);
		}
	}
	if (__LIB_0__::func_27(iLocal_65, 1048576))
	{
		if (!PED::IS_PED_INJURED(Global_35) && !ENTITY::DOES_ENTITY_EXIST(PED::_GET_LASSO_TARGET(Global_35)))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_134) && !ENTITY::IS_ENTITY_DEAD(Local_134))
			{
				if (__LIB_13__::func_113(&Local_248, 1056964608 /* Float: 0.5f */, "RBT12_HIT_", 0))
				{
					if (__LIB_13__::func_120("RBT12_RETURN3", 0))
					{
						if (AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
						{
							__LIB_13__::func_121(1, "RBT12_RETURN3", 0);
						}
						else
						{
							__LIB_13__::func_121(0, "RBT12_RETURN3", 0);
						}
					}
					else if (__LIB_13__::func_120("RBT12_RETURN2", 0))
					{
						if (AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
						{
							__LIB_13__::func_121(1, "RBT12_RETURN2", 0);
						}
						else
						{
							__LIB_13__::func_121(0, "RBT12_RETURN2", 0);
						}
					}
					else if (__LIB_13__::func_120("RBT12_RETURN1", 0))
					{
						if (AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
						{
							__LIB_13__::func_121(1, "RBT12_RETURN1", 0);
						}
						else
						{
							__LIB_13__::func_121(0, "RBT12_RETURN1", 0);
						}
					}
				}
			}
		}
	}
}

void func_336()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	vector3 vVar10;
	if (iLocal_72 < 4)
	{
		if (PROPSET::_DOES_PROPSET_EXIST(iLocal_680))
		{
			iVar0 = ITEMSET::CREATE_ITEMSET(true);
			iVar1 = PROPSET::_GET_ENTITIES_FROM_PROPSET(iLocal_680, iVar0, joaat("P_STOOLFOLDING01X"), false, false);
			if (iVar1 < 4)
			{
				ITEMSET::DESTROY_ITEMSET(iVar0);
				return;
			}
			iVar2 = 0;
			while (iVar2 < iVar1)
			{
				iVar3 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0));
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					Local_17[iLocal_72 /*4*/].f_3 = iVar3;
					iLocal_72++;
				}
				iVar2++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
		}
	}
	else if (iLocal_70 < 4)
	{
		if (PROPSET::_DOES_PROPSET_EXIST(iLocal_680))
		{
			iVar4 = ITEMSET::CREATE_ITEMSET(true);
			iVar5 = PROPSET::_GET_ENTITIES_FROM_PROPSET(iLocal_680, iVar4, Local_34[iLocal_70 /*6*/].f_1, false, false);
			if (iVar5 == 0)
			{
				ITEMSET::DESTROY_ITEMSET(iVar4);
				return;
			}
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				iVar7 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar6, iVar4));
				if (ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
					Local_34[iLocal_70 /*6*/] = iVar7;
					Local_34[iLocal_70 /*6*/].f_2 = { ENTITY::GET_ENTITY_COORDS(Local_34[iLocal_70 /*6*/], false, false) };
					iLocal_70++;
				}
				iVar6++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar4);
		}
	}
	else
	{
		if (!__LIB_0__::func_27(iLocal_65, 8388608))
		{
			iVar8 = 0;
			while (iVar8 < 4)
			{
				if (!__LIB_0__::func_86(Local_17[iVar8 /*4*/]))
				{
					iVar9++;
				}
				else if (ENTITY::DOES_ENTITY_EXIST(Local_17[iVar8 /*4*/].f_3))
				{
					vVar10 = { ENTITY::GET_ENTITY_COORDS(Local_17[iVar8 /*4*/].f_3, false, false) };
					if (__LIB_1__::func_410(vVar10, vLocal_61, 10f, 1))
					{
						Local_17[iVar8 /*4*/] = { vVar10 };
						iVar9++;
					}
				}
				iVar8++;
			}
			if (iVar9 < 4)
			{
			}
			else
			{
				__LIB_1__::func_683(&iLocal_65, 8388608);
			}
		}
		if (iLocal_71 < iLocal_70)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_34[iLocal_71 /*6*/]))
			{
				if (__LIB_13__::func_122(Local_34[iLocal_71 /*6*/].f_1, Local_34[iLocal_71 /*6*/].f_2, &(Local_34[iLocal_71 /*6*/]), 0, 0, 0))
				{
					iLocal_71++;
				}
			}
			else
			{
				iLocal_71++;
			}
		}
	}
}

bool func_340(var uParam0)
{
	int iVar0;
	if (iLocal_68 == Local_150)
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_150[iLocal_68 /*16*/]))
	{
		Local_150[iLocal_68 /*16*/] = __LIB_8__::func_931(joaat("G_M_Y_UNIEXCONFEDS_01"), Local_150[iLocal_68 /*16*/].f_9, Local_150[iLocal_68 /*16*/].f_12, 1, 1, 0, 1, 1, 1, 0, 0, 1, 1);
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_672[iLocal_68]))
	{
		switch (iLocal_68)
		{
			case 0:
				iVar0 = joaat("A_C_HORSE_NOKOTA_WHITEROAN");
				break;
			case 1:
				iVar0 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
				break;
			case 2:
				iVar0 = joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO");
				break;
		}
		iLocal_672[iLocal_68] = __LIB_8__::func_931(iVar0, Local_150[iLocal_68 /*16*/].f_9, Local_150[iLocal_68 /*16*/].f_12, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_672[iLocal_68], true);
		__LIB_1__::func_991(iLocal_672[iLocal_68], 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_672[iLocal_68], 6, true);
	}
	else if (!__LIB_0__::func_27(Local_150[iLocal_68 /*16*/].f_5, 2))
	{
		PED::_SET_PED_ON_MOUNT(Local_150[iLocal_68 /*16*/], iLocal_672[iLocal_68], -1, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_672[iLocal_68], Local_150[iLocal_68 /*16*/].f_9, Local_150[iLocal_68 /*16*/].f_12, true, false, true);
		ENTITY::_0x9587913B9E772D29(iLocal_672[iLocal_68], 0);
		WEAPON::REMOVE_ALL_PED_WEAPONS(Local_150[iLocal_68 /*16*/], true, true);
		__LIB_4__::func_7(Local_150[iLocal_68 /*16*/], joaat("WEAPON_MELEE_KNIFE"), -1, 0, 4, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		if (iLocal_68 == 0)
		{
			if (__LIB_0__::func_214(joaat("WEAPON_SHOTGUN_DOUBLEBARREL")))
			{
				__LIB_1__::func_766(Local_150[iLocal_68 /*16*/], joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			}
			else
			{
				__LIB_1__::func_766(Local_150[iLocal_68 /*16*/], joaat("WEAPON_REPEATER_CARBINE"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			}
			__LIB_4__::func_7(Local_150[iLocal_68 /*16*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 2, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		}
		else if (iLocal_68 == 1)
		{
			__LIB_4__::func_7(Local_150[iLocal_68 /*16*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 2, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			if (__LIB_0__::func_27(iLocal_65, 16777216))
			{
				WEAPON::_GIVE_WEAPON_TO_PED_2(Local_150[iLocal_68 /*16*/], joaat("WEAPON_MELEE_LANTERN"), -1, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
			}
		}
		else if (iLocal_68 == 2)
		{
			if (__LIB_0__::func_214(joaat("WEAPON_RIFLE_BOLTACTION")))
			{
				__LIB_1__::func_766(Local_150[iLocal_68 /*16*/], joaat("WEAPON_RIFLE_BOLTACTION"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			}
			else
			{
				__LIB_1__::func_766(Local_150[iLocal_68 /*16*/], joaat("WEAPON_REPEATER_CARBINE"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			}
			__LIB_4__::func_7(Local_150[iLocal_68 /*16*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 2, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_150[iLocal_68 /*16*/], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_150[iLocal_68 /*16*/], joaat("REL_PLAYER_ENEMY"));
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_150[iLocal_68 /*16*/], 0, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_150[iLocal_68 /*16*/], 5, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_150[iLocal_68 /*16*/], 111, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_150[iLocal_68 /*16*/], 46, true);
		PED::SET_PED_CONFIG_FLAG(Local_150[iLocal_68 /*16*/], 6, true);
		ENTITY::_0x18FF3110CF47115D(Local_150[iLocal_68 /*16*/], 1, 0);
		__LIB_1__::func_683(&(Local_150[iLocal_68 /*16*/].f_5), 2);
		iLocal_68++;
	}
	return false;
}

bool func_341(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		*iParam1 = __LIB_8__::func_931(iLocal_64, iParam1->f_9, iParam1->f_12, 1, 1, 0, 1, 1, 1, 0, 0, 1, 1);
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1) && !ENTITY::IS_ENTITY_DEAD(*iParam1))
	{
		if (!__LIB_0__::func_27(iParam1->f_5, 2))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam1, joaat("REL_PLAYER_ENEMY"));
			PED::SET_PED_CAN_BE_TARGETTED(*iParam1, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 117, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 46, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 111, true);
			PED::_0x6569F31A01B4C097(*iParam1, 4, 0);
			PED::_0x6569F31A01B4C097(*iParam1, 5, 0);
			__LIB_4__::func_7(*iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 2, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			__LIB_12__::func_875(uParam0, *iParam1, "RBH_TARGET12", 0);
			func_722(uParam0, iParam1);
			PED::SET_PED_CONFIG_FLAG(*iParam1, 306, true);
			PED::SET_PED_CONFIG_FLAG(*iParam1, 388, true);
			PED::SET_PED_CONFIG_FLAG(*iParam1, 250, true);
			PED::REQUEST_PED_VISIBILITY_TRACKING(*iParam1);
			__LIB_1__::func_683(&(iParam1->f_5), 2);
		}
		return true;
	}
	return false;
}

bool func_342()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_669))
	{
		iLocal_669 = __LIB_8__::func_931(joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET"), Local_134.f_9, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_669, true);
		__LIB_1__::func_991(iLocal_669, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_669, 6, true);
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_669))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_134))
	{
		if (!PED::IS_PED_ON_MOUNT(Local_134))
		{
			PED::_SET_PED_ON_MOUNT(Local_134, iLocal_669, -1, true);
			if (__LIB_0__::func_27(iLocal_65, 16777216))
			{
				WEAPON::_GIVE_WEAPON_TO_PED_2(Local_134, joaat("WEAPON_MELEE_LANTERN"), -1, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
			}
		}
	}
	return true;
}

bool func_350(var uParam0, bool bParam1)
{
	__LIB_13__::func_155(uParam0);
	__LIB_10__::func_161(uParam0);
	if (__LIB_10__::func_138(uParam0))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
	switch (uParam0->f_59)
	{
		case 0:
			Global_1392235.f_4 = 1;
			__LIB_10__::func_66(uParam0, 1);
			break;
		case 1:
			if (__LIB_10__::func_138(uParam0))
			{
				uParam0->f_308 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(__LIB_10__::func_45(uParam0->f_300), 0f, 0f, 0f, 20f, 20f, 20f, __LIB_0__::func_93());
				__LIB_2__::func_261(uParam0->f_308, "BountyHuntingRewardVolume", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
				if (uParam0->f_300 == 26)
				{
					uParam0->f_72 = PED::ADD_SCENARIO_BLOCKING_AREA(-1813.668f, -353.7011f, 160.4116f, -1811.668f, -351.7011f, 162.4116f, 0, 15);
				}
				uParam0->f_309 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(__LIB_10__::func_67(uParam0->f_300), 0f, 0f, 0f, 4f, 4f, 4f, "Scenario Blocking");
				uParam0->f_73 = PED::_0x4C39C95AE5DB1329(uParam0->f_309, 0, 15);
				ENTITY::_0x18FF3110CF47115D(uParam0->f_67, 1, 0);
				if (!Global_1935630.f_12)
				{
					if (__LIB_0__::func_181())
					{
						__LIB_10__::func_139(uParam0, Global_35, "John");
					}
					else
					{
						__LIB_10__::func_139(uParam0, Global_35, "Arthur");
					}
				}
				__LIB_10__::func_140(uParam0, 1);
				__LIB_10__::func_141(uParam0);
				__LIB_10__::func_147(uParam0->f_300);
				__LIB_10__::func_148(uParam0->f_300);
				__LIB_10__::func_66(uParam0, 2);
			}
			break;
		case 2:
			if (__LIB_10__::func_68(uParam0))
			{
				__LIB_10__::func_183(uParam0);
				__LIB_13__::func_92(uParam0);
				__LIB_10__::func_66(uParam0, 3);
			}
			break;
		case 3:
			if (bParam1)
			{
				func_750(uParam0);
			}
			__LIB_10__::func_193(uParam0);
			__LIB_10__::func_219(uParam0);
			if (__LIB_1__::func_410(Global_36, __LIB_10__::func_45(uParam0->f_300), 20f, 1))
			{
				__LIB_13__::func_92(uParam0);
			}
			if (__LIB_10__::func_69(uParam0))
			{
				__LIB_10__::func_183(uParam0);
				__LIB_10__::func_66(uParam0, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_351(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
	{
		func_750(uParam0);
	}
	if (__LIB_2__::func_157(uParam0->f_306, Global_36))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 328, true);
	}
	__LIB_13__::func_155(uParam0);
	__LIB_10__::func_193(uParam0);
	__LIB_10__::func_196(uParam0);
	__LIB_10__::func_161(uParam0);
	__LIB_10__::func_219(uParam0);
	if (__LIB_10__::func_138(uParam0))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
	if (uParam0->f_60 >= 4)
	{
		__LIB_10__::func_162(uParam0);
	}
	switch (uParam0->f_60)
	{
		case 0:
			break;
		case 1:
			if (__LIB_13__::func_99(uParam0))
			{
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_67, false);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_67, 253, true);
				__LIB_10__::func_71(uParam0, 2);
			}
			break;
		case 2:
			__LIB_10__::func_188(uParam0);
			EVENT::REMOVE_ALL_SHOCKING_EVENTS(false);
			__LIB_13__::func_115(uParam0, 10);
			__LIB_1__::func_148(&(uParam0->f_364));
			uParam0->f_367 = 0;
			__LIB_1__::func_544(uParam0->f_306);
			if (TASK::_0x916B8E075ABC8B4E(uParam0->f_69, 1))
			{
				TASK::_0x541E5B41DCA45828(uParam0->f_69, 1, 0);
			}
			if (!PED::_IS_PED_USING_SCENARIO_POINT(uParam0->f_69, uParam0->f_371))
			{
				__LIB_10__::func_72(uParam0);
			}
			if (__LIB_10__::func_73(uParam0->f_65) != 0)
			{
				COMPENDIUM::COMPENDIUM_GANG_BOUNTY_CAPTURED(__LIB_10__::func_73(uParam0->f_65));
			}
			__LIB_10__::func_71(uParam0, 3);
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
			{
				if (__LIB_10__::func_74(uParam0))
				{
					if (__LIB_10__::func_149(uParam0))
					{
						TASK::TASK_LOOK_AT_ENTITY(uParam0->f_69, Global_35, -1, 0, 51, 0);
						__LIB_1__::func_148(&(uParam0->f_312));
						__LIB_0__::func_37(&(uParam0->f_318));
						uParam0->f_361 = 1;
						__LIB_10__::func_71(uParam0, 4);
					}
				}
				else if (!uParam0->f_367)
				{
					if (__LIB_0__::func_264(&(uParam0->f_364)) > 10f || !__LIB_0__::func_266(Global_35, __LIB_10__::func_62(uParam0->f_300, uParam0->f_65), 30f, 1, 1))
					{
						__LIB_10__::func_197(uParam0, 2048, 1);
						uParam0->f_367 = 1;
						__LIB_0__::func_37(&(uParam0->f_364));
					}
				}
			}
			break;
		case 4:
			if (__LIB_0__::func_265(&(uParam0->f_312)) > 2f || __LIB_0__::func_58(uParam0))
			{
				if (!__LIB_0__::func_27(uParam0->f_328, 128))
				{
					if (__LIB_13__::func_125(uParam0))
					{
						__LIB_8__::func_227(100, 1);
						__LIB_1__::func_148(&(uParam0->f_318));
						__LIB_1__::func_683(&(uParam0->f_328), 128);
					}
				}
				else if (!__LIB_0__::func_27(uParam0->f_329, 256))
				{
					if (!__LIB_0__::func_163(Global_35, -76381094) && !__LIB_0__::func_266(Global_35, __LIB_10__::func_62(uParam0->f_300, uParam0->f_65), 2f, 1, 1))
					{
						__LIB_13__::func_128(uParam0);
					}
				}
			}
			if (uParam0->f_63 != 11)
			{
				__LIB_13__::func_133(uParam0);
			}
			else
			{
				if (__LIB_10__::func_145(uParam0))
				{
					__LIB_10__::func_71(uParam0, 5);
				}
				if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_306, true, 0))
				{
					__LIB_10__::func_71(uParam0, 6);
				}
			}
			break;
		case 5:
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(TASK::_0xD04241BBF6D03A5E(Global_35)))
			{
				__LIB_1__::func_148(&(uParam0->f_318));
				__LIB_10__::func_71(uParam0, 6);
			}
			break;
		case 6:
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uParam0->f_30[0 /*14*/].f_1, false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
				{
					if (!__LIB_0__::func_163(uParam0->f_69, 150319005))
					{
						TASK::TASK_LOOK_AT_ENTITY(uParam0->f_69, Global_35, -1, 0, 51, 0);
					}
				}
				__LIB_13__::func_115(uParam0, 12);
				func_772(uParam0);
				return true;
			}
			break;
	}
	return false;
}

void func_387(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
						func_809(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_809(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_809(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_809(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_809(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_809(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_809(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_809(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_809(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_809(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_809(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_809(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_809(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_809(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_809(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_809(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_809(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_809(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_809(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_809(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_809(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_809(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_809(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_809(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_809(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_811();
						func_812(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_809(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_387(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_387(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_387(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_809(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_809(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_846(iParam0);
		func_847();
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
							func_809(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

Vector3 func_391(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	vVar0 = { func_854(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { func_854(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

void func_418(var uParam0)
{
	if ((ENTITY::IS_ENTITY_DEAD(Local_134) || func_610(34)) || func_610(35))
	{
		return;
	}
	switch (iLocal_16)
	{
		case 0:
			if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
			{
				__LIB_12__::func_875(uParam0, Local_248.f_69, __LIB_10__::func_107(Local_248.f_300), 0);
				fLocal_78 = MISC::GET_RANDOM_FLOAT_IN_RANGE(6f, 10f);
				__LIB_1__::func_148(&uLocal_131);
				__LIB_4__::func_71(1);
			}
			break;
		case 1:
			if (__LIB_0__::func_75(&uLocal_131) && __LIB_0__::func_264(&uLocal_131) > fLocal_78)
			{
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					if (__LIB_12__::func_876(uParam0, "RBT12_TGT_SRF", 0))
					{
						TASK::TASK_LOOK_AT_ENTITY(Local_134, Local_248.f_69, 3000, 2048, 51, 0);
						__LIB_4__::func_71(2);
					}
				}
			}
			break;
		case 2:
			if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
			{
				fLocal_78 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.5f, 1f);
				__LIB_1__::func_148(&uLocal_131);
				__LIB_4__::func_71(3);
			}
			break;
		case 3:
			if (__LIB_0__::func_75(&uLocal_131) && __LIB_0__::func_264(&uLocal_131) > fLocal_78)
			{
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					if (__LIB_12__::func_876(uParam0, "RBT12_SRF_SHTUP", 0))
					{
						iLocal_75++;
						TASK::TASK_LOOK_AT_ENTITY(Local_248.f_69, Local_134, 5000, 2048, 51, 0);
						__LIB_4__::func_71(4);
					}
				}
			}
			break;
		case 4:
			if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
			{
				fLocal_78 = (MISC::GET_RANDOM_FLOAT_IN_RANGE(7f, 9f) + (IntToFloat(iLocal_75) * MISC::GET_RANDOM_FLOAT_IN_RANGE(6f, 9f)));
				if (iLocal_75 == 4)
				{
					func_308(34, 1);
					func_308(35, 1);
				}
				__LIB_1__::func_148(&uLocal_131);
				__LIB_4__::func_71(1);
			}
			break;
	}
}

int func_483(int iParam0, int iParam1)
{
	var uVar0;
	return func_957(&uVar0, iParam0, iParam1);
}

bool func_574()
{
	return ((((((STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("PROP_CAMP_MICAH_SEAT_CHAIR_CLEAN_GUN"), false) && STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("PROP_HUMAN_SEAT_NO_BACK_COLLECTION"), false)) && STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("PROP_HUMAN_SEAT_CHAIR_CLEAN_RIFLE"), false)) && STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("PROP_HUMAN_SEAT_CRATE_CLEAN_BOOTS"), false)) && STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_GUARD_SCOUT"), false)) && STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_BADASS"), false)) && STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("PROP_HITCHINGPOST"), false));
}

bool func_575()
{
	PROPSET::_REQUEST_PROPSET(-1325538337);
	if (!PROPSET::_HAS_PROPSET_LOADED(-1325538337))
	{
		return false;
	}
	if (!PROPSET::_DOES_PROPSET_EXIST(iLocal_680))
	{
		if (PROPSET::_HAS_PROPSET_LOADED(-1325538337))
		{
			FIRE::STOP_FIRE_IN_RANGE(vLocal_61, 30f);
			iLocal_680 = PROPSET::_CREATE_PROPSET(-1325538337, vLocal_61, 1, 0f, 3f, false, true);
		}
	}
	if (PROPSET::_DOES_PROPSET_EXIST(iLocal_680))
	{
		func_336();
		if (PROPSET::_IS_PROPSET_VALID(iLocal_680) && PROPSET::_IS_PROPSET_VISIBLE(iLocal_680))
		{
			return true;
		}
	}
	return false;
}

bool func_610(int iParam0)
{
	return iLocal_79[iParam0];
}

void func_641(var uParam0)
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
		func_1075(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1077(uParam0);
		func_1078(uParam0);
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

void func_671(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar2 = 0;
	if (__LIB_0__::func_78(uParam0) > 3)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1790)
		{
			if (uParam0->f_371[iVar0 /*18*/].f_7)
			{
				func_1127(uParam0, iVar0, iParam1);
			}
			else if (uParam0->f_371[iVar0 /*18*/].f_6)
			{
				bVar1 = __LIB_12__::func_857(uParam0, iVar0);
				if (bVar1)
				{
					func_1129(uParam0, iVar0, iParam1);
				}
			}
			iVar0++;
		}
		if (!__LIB_12__::func_692(uParam0, uParam0->f_1580))
		{
			__LIB_13__::func_30(uParam0, -1, 0, 1);
		}
		return;
	}
	iVar0 = uParam0->f_1587;
	while (iVar0 <= (uParam0->f_1790 - 1))
	{
		if (uParam0->f_371[iVar0 /*18*/].f_7)
		{
			func_1127(uParam0, iVar0, iParam1);
		}
		else if (uParam0->f_371[iVar0 /*18*/].f_6)
		{
			bVar1 = __LIB_12__::func_857(uParam0, iVar0);
			if (bVar1)
			{
				func_1129(uParam0, iVar0, iParam1);
				iVar2++;
				if (iVar2 > 5)
				{
					if (iVar0 + 1 < 30)
					{
						uParam0->f_1587 = iVar0 + 1;
					}
					else
					{
						uParam0->f_1587 = 0;
					}
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_676(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	__LIB_12__::func_713(uParam0, 4);
	if (func_1133(uParam0, &uParam1, iParam5))
	{
		__LIB_0__::func_115(uParam0, 1);
	}
}

void func_677(var uParam0)
{
	if (!__LIB_12__::func_858(uParam0))
	{
		return;
	}
	if (!__LIB_12__::func_655(uParam0, 4194304))
	{
		__LIB_12__::func_859(uParam0);
		__LIB_12__::func_693(uParam0, 4194304);
	}
	if (func_1136(uParam0))
	{
		__LIB_12__::func_759(uParam0);
		__LIB_12__::func_760(uParam0);
		__LIB_0__::func_115(uParam0, 2);
	}
}

int func_687(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	var uVar0;
	struct<11> Var1;
	if (iParam3 == 1)
	{
	}
	Var1.f_10 = 7;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	Var1.f_2 = iParam2;
	Var1.f_6 = { iParam4, iParam5, iParam6 };
	Var1.f_9 = iParam7;
	return func_1146(&uVar0, &Var1);
}

int func_688(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*16*/]))
		{
			if ((((!ENTITY::IS_ENTITY_DEAD((*iParam0)[iVar0 /*16*/]) && !PED::IS_PED_INJURED((*iParam0)[iVar0 /*16*/])) && !PED::IS_PED_DEAD_OR_DYING((*iParam0)[iVar0 /*16*/], true)) && !PED::IS_PED_FATALLY_INJURED((*iParam0)[iVar0 /*16*/])) && !__LIB_0__::func_27((iParam0[iVar0 /*16*/])->f_5, 1))
			{
				if (iParam1 == 0)
				{
					iVar1++;
				}
				else if (!PED::_IS_PED_HOGTIED((*iParam0)[iVar0 /*16*/]) && !__LIB_0__::func_27((iParam0[iVar0 /*16*/])->f_5, 8))
				{
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_699(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_61, __LIB_10__::func_45(Local_248.f_300), true);
	switch (iLocal_667)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_134) && __LIB_10__::func_166(Local_134, 1))
			{
				if (fLocal_77 < (fVar4 / 2f) || fLocal_76 > 75f)
				{
					iLocal_667 = 1;
				}
			}
			break;
		case 1:
			vVar1 = { func_1152() };
			if (!__LIB_0__::func_86(vVar1))
			{
				if (func_1153(uParam0, vVar1))
				{
					__LIB_13__::func_118(&(Local_199[0 /*16*/]), 6, 0, 0);
					__LIB_13__::func_118(&(Local_199[1 /*16*/]), 6, 0, 0);
					__LIB_13__::func_118(&(Local_199[2 /*16*/]), 6, 0, 0);
					iLocal_667 = 2;
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_27(iLocal_65, 524288))
			{
				if (fLocal_77 < 175f)
				{
					__LIB_1__::func_683(&iLocal_65, 1048576);
					__LIB_1__::func_683(&iLocal_65, 524288);
				}
			}
			if (!__LIB_0__::func_27(iLocal_65, 131072))
			{
				if (func_688(&Local_199, 0) == 0)
				{
					__LIB_1__::func_683(&iLocal_65, 1048576);
					__LIB_1__::func_683(&iLocal_65, 131072);
				}
			}
			iVar0 = 0;
			while (iVar0 < Local_199)
			{
				func_1154(uParam0, &(Local_199[iVar0 /*16*/]), iLocal_676[iVar0], iVar0);
				iVar0++;
			}
			break;
		case 3:
			break;
	}
}

void func_700(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<15> Var1;
	Var1.f_2 = -1;
	Var1.f_7 = -1;
	Var1.f_8 = -1082130432;
	Var1.f_12 = -1082130432;
	Var1.f_13 = 1;
	Var1.f_14 = -1082130432;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
		{
			iParam1->f_13 = __LIB_0__::func_665(*iParam1, Global_35, 1, 1);
			PED::SET_PED_RESET_FLAG(*iParam1, 25, true);
			func_1155(iParam1);
			if (!__LIB_0__::func_27(iParam1->f_5, 4))
			{
				if (func_1156(iParam1, &uLocal_638, &iLocal_666))
				{
					if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(*iParam1, true))
					{
						if (__LIB_1__::func_205(Global_35, iLocal_684[2], 1, 0))
						{
							__LIB_13__::func_118(iParam1, 7, 0, 0);
						}
						else
						{
							__LIB_13__::func_118(iParam1, 8, 0, 0);
						}
					}
					else
					{
						__LIB_13__::func_118(iParam1, 9, 0, 0);
					}
					__LIB_1__::func_683(&(iParam1->f_5), 4);
				}
			}
			if (!__LIB_0__::func_27(iParam1->f_5, 32))
			{
				if (!__LIB_0__::func_27(iParam1->f_5, 4))
				{
					if (__LIB_0__::func_27(iLocal_65, 4096) || __LIB_0__::func_27(iLocal_65, 1024))
					{
						__LIB_13__::func_118(iParam1, 4, 0, 0);
						__LIB_1__::func_683(&(iParam1->f_5), 32);
					}
				}
			}
			if (!__LIB_0__::func_27(iParam1->f_5, 8))
			{
				if (PED::_IS_PED_HOGTIED(*iParam1) || __LIB_3__::func_458(*iParam1) == 1)
				{
					__LIB_13__::func_118(iParam1, 10, 0, 0);
					__LIB_1__::func_683(&(iParam1->f_5), 8);
				}
			}
			if (!__LIB_0__::func_27(iParam1->f_5, 64))
			{
				if (PED::GET_PED_CONFIG_FLAG(*iParam1, 11, false))
				{
					__LIB_1__::func_683(&(iParam1->f_5), 64);
				}
			}
			if (PED::_IS_PED_LASSOED(*iParam1) || PED::_IS_PED_HOGTIED(*iParam1))
			{
				if (func_1158(*iParam1, 1))
				{
					WEAPON::_0xCEF4C65DE502D367(*iParam1, 0, 1, 1, 0);
				}
				else if (func_1158(*iParam1, 0))
				{
					WEAPON::_0xCEF4C65DE502D367(*iParam1, 0, 0, 1, 0);
				}
			}
			switch (iParam1->f_2)
			{
				case 2:
					switch (iParam1->f_4)
					{
						case 0:
							if (iParam1->f_3 == 0)
							{
								__LIB_13__::func_138(iParam1, 1);
								Var1 = sLocal_60;
								Var1.f_12 = 1f;
								Var1.f_1 = 0;
								Var1.f_10 = 0.75f;
								Var1.f_3 = 4194368;
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(*iParam1, &Var1);
								iParam1->f_3 = 1;
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 658540077, true) == 1)
							{
								if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam1, sLocal_60))
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*iParam1, 1f, 0, -1082130432 /* Float: -1f */, 0);
									iVar0 = TASK::GET_PED_WAYPOINT_PROGRESS(*iParam1);
									if (iVar0 >= 47)
									{
										__LIB_13__::func_118(iParam1, 2, 0, 1);
									}
								}
							}
							else if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam1, sLocal_60) && PED::IS_PED_ON_MOUNT(*iParam1))
							{
								__LIB_13__::func_118(iParam1, 2, 0, 0);
							}
							break;
						case 1:
							if (iParam1->f_3 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_688[8], true), 1f, 100000, 0.25f, 1049092, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_688[8], true));
								iParam1->f_3 = 1;
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 713668775, true) == 8)
							{
								if (func_1158(*iParam1, 1) || func_1158(*iParam1, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 716706914, true) != 1)
									{
										WEAPON::SET_CURRENT_PED_WEAPON(*iParam1, joaat("WEAPON_UNARMED"), false, 0, false, false);
										WEAPON::SET_CURRENT_PED_WEAPON(*iParam1, joaat("WEAPON_UNARMED"), false, 1, false, false);
										TASK::TASK_SWAP_WEAPON(*iParam1, 0, 0, 0, 0);
									}
								}
								else
								{
									__LIB_1__::func_148(&(iParam1->f_6));
									__LIB_13__::func_118(iParam1, 2, 0, 2);
								}
							}
							break;
						case 2:
							if (iParam1->f_3 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								TASK::TASK_HITCH_ANIMAL(*iParam1, iLocal_688[8], 131072);
								iParam1->f_3 = 1;
							}
							else if (!PED::IS_PED_ON_MOUNT(*iParam1))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, -850912737, true) == 8)
								{
									__LIB_13__::func_118(iParam1, 3, 0, 0);
								}
							}
							break;
					}
					break;
				case 3:
					switch (iParam1->f_4)
					{
						case 0:
							if (iParam1->f_3 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_688[25], 0, 0, true, false, 0, false, -1f, false);
								if (__LIB_1__::func_901(__LIB_2__::func_954()))
								{
									if (((!__LIB_0__::func_27(iLocal_65, 128) && !__LIB_0__::func_27(iLocal_65, 32)) && !__LIB_0__::func_27(iLocal_65, 64)) && !__LIB_0__::func_27(iLocal_65, 256))
									{
										MISC::_SET_WEATHER_TYPE(joaat("OVERCAST"), true, false, true, 16f, false);
									}
								}
								__LIB_0__::func_37(&(iParam1->f_6));
								iParam1->f_3 = 1;
							}
							else if (!__LIB_0__::func_27(iParam1->f_5, 256))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, -76381094, true) == 1)
								{
									if (TASK::_0x02EBBB3989B7E695(*iParam1))
									{
										PED::_0x9238A3D970BBB0A9(*iParam1, -820192119);
										PED::_0x00B380FF2DF6AB7A(*iParam1, 3);
										__LIB_1__::func_683(&(iParam1->f_5), 256);
									}
								}
							}
							else if (!__LIB_0__::func_75(&(iParam1->f_6)))
							{
								__LIB_1__::func_148(&(iParam1->f_6));
							}
							else if (__LIB_0__::func_75(&(iParam1->f_6)))
							{
								if (!__LIB_0__::func_27(iLocal_65, 33554432))
								{
									if (__LIB_0__::func_265(&(iParam1->f_6)) > 5f)
									{
										__LIB_5__::func_715(iLocal_67, 4);
										__LIB_1__::func_683(&iLocal_65, 33554432);
									}
								}
								if (__LIB_0__::func_27(iLocal_65, 33554432))
								{
									if (__LIB_0__::func_265(&(iParam1->f_6)) > 7.5f)
									{
										__LIB_13__::func_118(iParam1, 3, 0, 1);
									}
								}
							}
							break;
						case 1:
							if (iParam1->f_3 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								if (PED::IS_PED_USING_ANY_SCENARIO(*iParam1))
								{
									PED::_0xEC6935EBE0847B90(*iParam1, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_688[3], true));
								}
								TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_688[3], 0, 0, true, false, 0, false, -1f, false);
								iParam1->f_3 = 1;
							}
							break;
					}
					break;
				case 4:
					switch (iParam1->f_4)
					{
						case 0:
							if (iParam1->f_3 == 0)
							{
								if (!PED::IS_PED_ON_MOUNT(*iParam1))
								{
									if ((ENTITY::DOES_ENTITY_EXIST(iParam2) && !ENTITY::IS_ENTITY_DEAD(iParam2)) && PED::_0x2D64376CF437363E(iParam2))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
										TASK::TASK_MOUNT_ANIMAL(*iParam1, iParam2, 40000, -1, 1f, 1, 0, 0);
									}
								}
								iParam1->f_3 = 1;
							}
							else if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(*iParam1, true))
							{
								__LIB_13__::func_118(iParam1, 4, 0, 1);
							}
							else if (!PED::IS_PED_ON_MOUNT(*iParam1))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 1868526510, true) == 8)
								{
									__LIB_13__::func_118(iParam1, 4, 0, 0);
								}
							}
							break;
						case 1:
							if (iParam1->f_3 == 0)
							{
								Var1 = sLocal_59;
								Var1.f_1 = 0;
								Var1.f_12 = 1f;
								Var1.f_4 = 1;
								Var1.f_3 = 19522;
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(*iParam1, &Var1);
								iParam1->f_3 = 1;
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 658540077, true) == 8)
							{
								if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam1, sLocal_60) && PED::IS_PED_ON_MOUNT(*iParam1))
								{
									__LIB_13__::func_118(iParam1, 4, 0, 1);
								}
							}
							break;
					}
					break;
				case 7:
					if (iParam1->f_3 == 0)
					{
						Var1 = sLocal_59;
						Var1.f_1 = 0;
						Var1.f_12 = 1.501f;
						Var1.f_4 = 1;
						Var1.f_5 = 1;
						Var1.f_3 = 67128392;
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(*iParam1, &Var1);
						iParam1->f_3 = 1;
					}
					else if (PED::IS_PED_ON_MOUNT(*iParam1))
					{
						if (func_688(&Local_150, 1) == 0 || !__LIB_1__::func_205(Global_35, iLocal_684[2], 1, 0))
						{
							__LIB_13__::func_118(iParam1, 8, 0, 0);
						}
					}
					else
					{
						__LIB_13__::func_118(iParam1, 9, 0, 0);
					}
					break;
				case 8:
				case 9:
					if (func_1158(*iParam1, 1))
					{
						WEAPON::_0xCEF4C65DE502D367(*iParam1, 0, 1, 1, 0);
					}
					else if (func_1158(*iParam1, 0))
					{
						WEAPON::_0xCEF4C65DE502D367(*iParam1, 0, 0, 1, 0);
					}
					if (iParam1->f_3 == 0)
					{
						__LIB_0__::func_325(&(iParam1->f_1));
						__LIB_1__::func_683(&iLocal_65, 16384);
						if (PED::IS_PED_USING_ANY_SCENARIO(*iParam1))
						{
							PED::_0x802092B07E3B1EEA(*iParam1, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
						}
						switch (iParam1->f_2)
						{
							case 8:
								break;
							case 9:
								PED::SET_PED_CONFIG_FLAG(*iParam1, 167, false);
								PED::_0xFC3DB99C8144CD81(*iParam1, iLocal_684[2], 0, 0, 0);
								PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 1);
								break;
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
						TASK::TASK_COMBAT_PED(*iParam1, Global_35, 16777216, 0);
						iParam1->f_3 = 1;
					}
					else if (PED::IS_PED_ON_MOUNT(*iParam1))
					{
						if (func_688(&Local_150, 1) > 0)
						{
							if (__LIB_1__::func_205(Global_35, iLocal_684[0], 1, 0))
							{
								__LIB_13__::func_118(iParam1, 7, 0, 0);
							}
						}
					}
					break;
				case 10:
					if (iParam1->f_3 == 0)
					{
						iParam1->f_3 = 1;
					}
					else if (!PED::_IS_PED_HOGTIED(*iParam1))
					{
						__LIB_1__::func_681(&(iParam1->f_5), 8);
						if (func_688(&Local_150, 1) == 0)
						{
							__LIB_13__::func_118(iParam1, 11, 0, 0);
						}
						else
						{
							__LIB_13__::func_118(iParam1, 9, 0, 0);
						}
					}
					break;
				case 11:
					if (iParam1->f_3 == 0)
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(*iParam1, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 17, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 5, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 46, false);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam1, 2, false);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam1, 1024, true);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam1, 128, true);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam1, 1048576, true);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam1, 0, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
						TASK::TASK_SMART_FLEE_PED(*iParam1, Global_35, 200f, -1, 0, 2f, 0);
						iParam1->f_3 = 1;
					}
					break;
			}
		}
		else
		{
			__LIB_0__::func_325(&(iParam1->f_1));
			if (!__LIB_0__::func_27(iParam1->f_5, 1))
			{
				__LIB_1__::func_683(&(iParam1->f_5), 1);
			}
			if (!__LIB_10__::func_133(uParam0->f_174, 1))
			{
				__LIB_10__::func_142(uParam0->f_174, 1);
			}
		}
		if (!__LIB_0__::func_27(iParam1->f_5, 512))
		{
			if (__LIB_0__::func_27(iLocal_65, 16384))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam2) && !ENTITY::IS_ENTITY_DEAD(iParam2))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(PED::_GET_RIDER_OF_MOUNT(iParam2, false)) || __LIB_0__::func_27(iParam1->f_5, 1))
					{
						PED::SET_PED_KEEP_TASK(iParam2, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam2, false);
						TASK::TASK_SMART_FLEE_COORD(iParam2, VOLUME::_GET_VOLUME_COORDS(iLocal_684[1]), 200f, -1, false, 1077936128);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam2);
						__LIB_1__::func_683(&(iParam1->f_5), 512);
					}
				}
			}
		}
	}
}

void func_701(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	struct<15> Var2;
	Var2.f_2 = -1;
	Var2.f_7 = -1;
	Var2.f_8 = -1082130432;
	Var2.f_12 = -1082130432;
	Var2.f_13 = 1;
	Var2.f_14 = -1082130432;
	if (!__LIB_0__::func_27(iLocal_65, 16384))
	{
		func_1163(&iVar0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
		{
			iParam1->f_13 = __LIB_0__::func_665(*iParam1, Global_35, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(Local_134))
			{
				iParam1->f_14 = __LIB_0__::func_665(*iParam1, Local_134, 1, 1);
			}
			func_1155(iParam1);
			if (!__LIB_0__::func_27(iParam1->f_5, 4))
			{
				if (((iVar0 == iParam3 || __LIB_0__::func_27(iLocal_65, 16384)) || __LIB_0__::func_27(iLocal_65, 16)) || (__LIB_0__::func_27(iParam1->f_5, 32) && PED::IS_PED_IN_COMBAT(*iParam1, 0)))
				{
					if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(*iParam1, true))
					{
						__LIB_13__::func_118(iParam1, 8, 0, 0);
					}
					else
					{
						__LIB_13__::func_118(iParam1, 9, 0, 0);
					}
					__LIB_1__::func_683(&(iParam1->f_5), 4);
				}
			}
			if (!__LIB_0__::func_27(iParam1->f_5, 32))
			{
				if (!__LIB_0__::func_27(iParam1->f_5, 4))
				{
					if ((func_610(9) && func_705("RBT12_TAMPERED")) || (func_610(11) && func_705("RBT12_SAWHORSE")))
					{
						__LIB_1__::func_683(&iLocal_65, 8192);
						if (__LIB_0__::func_27(iLocal_65, 32) || __LIB_0__::func_27(iLocal_65, 64))
						{
							if (PED::IS_PED_ON_MOUNT(*iParam1))
							{
							}
							else
							{
								__LIB_13__::func_118(iParam1, 5, 0, 0);
							}
						}
						else if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(*iParam1, true))
						{
							__LIB_13__::func_118(iParam1, 4, 0, 0);
						}
						else
						{
							__LIB_13__::func_118(iParam1, 5, 0, 0);
						}
						__LIB_1__::func_683(&(iParam1->f_5), 32);
					}
				}
			}
			if (!__LIB_0__::func_27(iParam1->f_5, 8))
			{
				if (PED::_IS_PED_HOGTIED(*iParam1) || __LIB_3__::func_458(*iParam1) == 1)
				{
					__LIB_1__::func_683(&(iParam1->f_5), 8);
				}
			}
			if (PED::_IS_PED_LASSOED(*iParam1) || PED::_IS_PED_HOGTIED(*iParam1))
			{
				if (func_1158(*iParam1, 1))
				{
					WEAPON::_0xCEF4C65DE502D367(*iParam1, 0, 1, 1, 0);
				}
				else if (func_1158(*iParam1, 0))
				{
					WEAPON::_0xCEF4C65DE502D367(*iParam1, 0, 0, 1, 0);
				}
			}
			switch (iParam1->f_2)
			{
				case 2:
					switch (iParam1->f_4)
					{
						case 0:
							if (iParam1->f_3 == 0)
							{
								__LIB_13__::func_138(iParam1, 1);
								switch (iParam3)
								{
									case 0:
										Var2 = sLocal_60;
										Var2.f_12 = 1f;
										Var2.f_1 = 0;
										Var2.f_10 = -0.75f;
										Var2.f_3 = 4194368;
										break;
									case 1:
										Var2 = sLocal_60;
										Var2.f_12 = 1f;
										Var2.f_1 = 0;
										Var2.f_10 = -0.95f;
										Var2.f_3 = 4194368;
										break;
									case 2:
										Var2 = sLocal_60;
										Var2.f_12 = 1f;
										Var2.f_1 = 0;
										Var2.f_10 = 0.85f;
										Var2.f_3 = 4194368;
										break;
								}
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(*iParam1, &Var2);
								iParam1->f_3 = 1;
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 658540077, true) == 1)
							{
								if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam1, sLocal_60))
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*iParam1, 1f, 0, -1082130432 /* Float: -1f */, 0);
									iVar1 = TASK::GET_PED_WAYPOINT_PROGRESS(*iParam1);
									switch (iParam3)
									{
										case 0:
											if (iVar1 >= 67)
											{
												__LIB_13__::func_118(iParam1, 2, 0, 1);
											}
											break;
										case 1:
											if (iVar1 >= 65)
											{
												__LIB_13__::func_118(iParam1, 2, 0, 1);
											}
											break;
										case 2:
											if (iVar1 >= 46)
											{
												__LIB_13__::func_118(iParam1, 2, 0, 1);
											}
											break;
									}
								}
							}
							else if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam1, sLocal_60) && PED::IS_PED_ON_MOUNT(*iParam1))
							{
								__LIB_13__::func_118(iParam1, 2, 0, 0);
							}
							break;
						case 1:
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
							if (iParam1->f_3 == 0)
							{
								switch (iParam3)
								{
									case 0:
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_688[5], true), 1f, 100000, 0.25f, 9437700, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_688[5], true));
										break;
									case 1:
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_688[6], true), 1f, 40000, 0.25f, 9437700, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_688[6], true));
										break;
									case 2:
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_688[7], true), 1f, 100000, 0.25f, 9437700, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_688[7], true));
										break;
								}
								iParam1->f_3 = 1;
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 713668775, true) == 8)
							{
								if (func_1158(*iParam1, 1) || func_1158(*iParam1, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 716706914, true) != 1)
									{
										WEAPON::SET_CURRENT_PED_WEAPON(*iParam1, joaat("WEAPON_UNARMED"), false, 0, false, false);
										WEAPON::SET_CURRENT_PED_WEAPON(*iParam1, joaat("WEAPON_UNARMED"), false, 1, false, false);
										TASK::TASK_SWAP_WEAPON(*iParam1, 0, 0, 0, 0);
									}
								}
								else
								{
									__LIB_1__::func_148(&(iParam1->f_6));
									__LIB_13__::func_118(iParam1, 2, 0, 2);
								}
							}
							break;
						case 2:
							if (iParam1->f_3 == 0)
							{
								if (__LIB_0__::func_75(&(iParam1->f_6)) && __LIB_0__::func_265(&(iParam1->f_6)) > (1f + BUILTIN::TO_FLOAT(iParam3)))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
									switch (iParam3)
									{
										case 0:
											TASK::TASK_HITCH_ANIMAL(*iParam1, iLocal_688[5], 262144);
											break;
										case 1:
											TASK::TASK_HITCH_ANIMAL(*iParam1, iLocal_688[6], 131072);
											break;
										case 2:
											TASK::TASK_HITCH_ANIMAL(*iParam1, iLocal_688[7], 262144);
											break;
									}
									iParam1->f_3 = 1;
								}
							}
							else if (!PED::IS_PED_ON_MOUNT(*iParam1))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, -850912737, true) == 8)
								{
									if (__LIB_0__::func_27(iLocal_65, 8192))
									{
										__LIB_13__::func_118(iParam1, 5, 0, 0);
									}
									else
									{
										switch (iParam3)
										{
											case 0:
												if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, -850912737, true) == 8)
												{
													__LIB_13__::func_118(iParam1, 3, 0, 0);
												}
												break;
											case 1:
												if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, -850912737, true) == 8)
												{
													__LIB_13__::func_118(iParam1, 3, 0, 0);
												}
												break;
											case 2:
												if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, -850912737, true) == 8)
												{
													__LIB_13__::func_118(iParam1, 3, 0, 0);
												}
												break;
										}
									}
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, -850912737, true) == 8)
							{
								__LIB_1__::func_148(&(iParam1->f_6));
								__LIB_13__::func_118(iParam1, 2, 0, 1);
							}
							break;
					}
					break;
				case 3:
					if (iParam1->f_3 == 0)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
						switch (iParam3)
						{
							case 0:
								TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_688[0], 0, 0, true, false, 0, false, -1f, false);
								break;
							case 1:
								TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_688[4], 0, 0, true, false, 0, false, -1f, false);
								break;
							case 2:
								TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_688[1], 0, 0, true, false, 0, false, -1f, false);
								break;
						}
						iParam1->f_3 = 1;
					}
					else
					{
						if (!__LIB_0__::func_27(iParam1->f_5, 256))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, -76381094, true) == 1)
							{
								if (TASK::_0x02EBBB3989B7E695(*iParam1))
								{
									PED::_0x9238A3D970BBB0A9(*iParam1, -820192119);
									PED::_0x00B380FF2DF6AB7A(*iParam1, 3);
									__LIB_1__::func_683(&(iParam1->f_5), 256);
								}
							}
						}
						if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, -76381094, true) == 8)
						{
							switch (iParam3)
							{
								case 0:
									if (!PED::_IS_PED_USING_SCENARIO_POINT(*iParam1, iLocal_688[0]))
									{
										__LIB_13__::func_118(iParam1, 3, 0, 0);
									}
									break;
								case 1:
									if (!PED::_IS_PED_USING_SCENARIO_POINT(*iParam1, iLocal_688[4]))
									{
										__LIB_13__::func_118(iParam1, 3, 0, 0);
									}
									break;
								case 2:
									if (!PED::_IS_PED_USING_SCENARIO_POINT(*iParam1, iLocal_688[1]))
									{
										__LIB_13__::func_118(iParam1, 3, 0, 0);
									}
									break;
							}
						}
					}
					break;
				case 5:
					__LIB_1__::func_683(&(iParam1->f_5), 256);
					switch (iParam3)
					{
						case 0:
							if (iParam1->f_3 == 0)
							{
								STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_GUARD_SCOUT"), 15, 0, 0);
								if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_GUARD_SCOUT"), false))
								{
									if (((TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_688[13]) && TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_688[14])) && TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_688[15])) && TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_688[16]))
									{
										__LIB_0__::func_37(&(iParam1->f_6));
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
										PED::SET_PED_CONFIG_FLAG(*iParam1, 167, false);
										PED::SET_PED_FLEE_ATTRIBUTES(*iParam1, 1048576, true);
										switch (iParam1->f_4)
										{
											case 0:
												if (PED::IS_PED_USING_ANY_SCENARIO(*iParam1))
												{
													PED::_0xEC6935EBE0847B90(*iParam1, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_688[13], true));
												}
												TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_688[13], 0, 0, true, false, 0, false, -1f, false);
												break;
											case 1:
												if (PED::IS_PED_USING_ANY_SCENARIO(*iParam1))
												{
													PED::_0xEC6935EBE0847B90(*iParam1, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_688[14], true));
												}
												TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_688[14], 0, 0, true, false, 0, false, -1f, false);
												break;
											case 2:
												if (PED::IS_PED_USING_ANY_SCENARIO(*iParam1))
												{
													PED::_0xEC6935EBE0847B90(*iParam1, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_688[15], true));
												}
												TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_688[15], 0, 0, true, false, 0, false, -1f, false);
												break;
											case 3:
												if (PED::IS_PED_USING_ANY_SCENARIO(*iParam1))
												{
													PED::_0xEC6935EBE0847B90(*iParam1, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_688[16], true));
												}
												TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_688[16], 0, 0, true, false, 0, false, -1f, false);
												break;
										}
										iParam1->f_3 = 1;
									}
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, -76381094, true) == 1)
							{
								if ((((iParam1->f_4 == 0 && PED::_IS_PED_USING_SCENARIO_POINT(*iParam1, iLocal_688[13])) || (iParam1->f_4 == 1 && PED::_IS_PED_USING_SCENARIO_POINT(*iParam1, iLocal_688[14]))) || (iParam1->f_4 == 2 && PED::_IS_PED_USING_SCENARIO_POINT(*iParam1, iLocal_688[15]))) || (iParam1->f_4 == 3 && PED::_IS_PED_USING_SCENARIO_POINT(*iParam1, iLocal_688[16])))
								{
									if (!__LIB_0__::func_75(&(iParam1->f_6)))
									{
										if (TASK::_0x02EBBB3989B7E695(*iParam1))
										{
											__LIB_1__::func_148(&(iParam1->f_6));
										}
									}
									else if (__LIB_0__::func_75(&(iParam1->f_6)) && __LIB_0__::func_265(&(iParam1->f_6)) > 6f)
									{
										switch (iParam1->f_4)
										{
											case 0:
												__LIB_13__::func_118(iParam1, 5, 0, 1);
												break;
											case 1:
												__LIB_13__::func_118(iParam1, 5, 0, 2);
												break;
											case 2:
												__LIB_13__::func_118(iParam1, 5, 0, 3);
												break;
											case 3:
												__LIB_13__::func_118(iParam1, 5, 0, 0);
												break;
										}
									}
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, -76381094, true) == 8)
							{
								if (!PED::IS_PED_USING_ANY_SCENARIO(*iParam1))
								{
									__LIB_13__::func_118(iParam1, 5, 0, -1);
								}
							}
							break;
						case 1:
							if (iParam1->f_3 == 0)
							{
								STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_BADASS"), 15, 0, 0);
								STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_GUARD_LANTERN_NERVOUS"), 15, 0, 0);
								if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_BADASS"), false) && STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_GUARD_LANTERN_NERVOUS"), false))
								{
									if (((((((TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_688[17]) && TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_688[18])) && TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_688[19])) && TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_688[20])) && TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_688[21])) && TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_688[22])) && TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_688[23])) && TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_688[24]))
									{
										__LIB_0__::func_37(&(iParam1->f_6));
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
										PED::SET_PED_CONFIG_FLAG(*iParam1, 167, false);
										PED::SET_PED_FLEE_ATTRIBUTES(*iParam1, 1048576, true);
										switch (iParam1->f_4)
										{
											case 0:
												if (__LIB_0__::func_27(iLocal_65, 16777216))
												{
													if (PED::IS_PED_USING_ANY_SCENARIO(*iParam1))
													{
														PED::_0xEC6935EBE0847B90(*iParam1, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_688[21], true));
													}
													TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_688[21], 0, 0, true, false, 0, false, -1f, false);
												}
												else
												{
													if (PED::IS_PED_USING_ANY_SCENARIO(*iParam1))
													{
														PED::_0xEC6935EBE0847B90(*iParam1, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_688[17], true));
													}
													TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_688[17], 0, 0, true, false, 0, false, -1f, false);
												}
												break;
											case 1:
												if (__LIB_0__::func_27(iLocal_65, 16777216))
												{
													if (PED::IS_PED_USING_ANY_SCENARIO(*iParam1))
													{
														PED::_0xEC6935EBE0847B90(*iParam1, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_688[22], true));
													}
													TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_688[22], 0, 0, true, false, 0, false, -1f, false);
												}
												else
												{
													if (PED::IS_PED_USING_ANY_SCENARIO(*iParam1))
													{
														PED::_0xEC6935EBE0847B90(*iParam1, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_688[18], true));
													}
													TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_688[18], 0, 0, true, false, 0, false, -1f, false);
												}
												break;
											case 2:
												if (__LIB_0__::func_27(iLocal_65, 16777216))
												{
													if (PED::IS_PED_USING_ANY_SCENARIO(*iParam1))
													{
														PED::_0xEC6935EBE0847B90(*iParam1, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_688[23], true));
													}
													TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_688[23], 0, 0, true, false, 0, false, -1f, false);
												}
												else
												{
													if (PED::IS_PED_USING_ANY_SCENARIO(*iParam1))
													{
														PED::_0xEC6935EBE0847B90(*iParam1, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_688[19], true));
													}
													TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_688[19], 0, 0, true, false, 0, false, -1f, false);
												}
												break;
											case 3:
												if (__LIB_0__::func_27(iLocal_65, 16777216))
												{
													if (PED::IS_PED_USING_ANY_SCENARIO(*iParam1))
													{
														PED::_0xEC6935EBE0847B90(*iParam1, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_688[24], true));
													}
													TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_688[24], 0, 0, true, false, 0, false, -1f, false);
												}
												else
												{
													if (PED::IS_PED_USING_ANY_SCENARIO(*iParam1))
													{
														PED::_0xEC6935EBE0847B90(*iParam1, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_688[20], true));
													}
													TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_688[20], 0, 0, true, false, 0, false, -1f, false);
												}
												break;
										}
										iParam1->f_3 = 1;
									}
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, -76381094, true) == 1)
							{
								if ((((((((iParam1->f_4 == 0 && PED::_IS_PED_USING_SCENARIO_POINT(*iParam1, iLocal_688[17])) || (iParam1->f_4 == 1 && PED::_IS_PED_USING_SCENARIO_POINT(*iParam1, iLocal_688[18]))) || (iParam1->f_4 == 2 && PED::_IS_PED_USING_SCENARIO_POINT(*iParam1, iLocal_688[19]))) || (iParam1->f_4 == 3 && PED::_IS_PED_USING_SCENARIO_POINT(*iParam1, iLocal_688[20]))) || (iParam1->f_4 == 0 && PED::_IS_PED_USING_SCENARIO_POINT(*iParam1, iLocal_688[21]))) || (iParam1->f_4 == 1 && PED::_IS_PED_USING_SCENARIO_POINT(*iParam1, iLocal_688[22]))) || (iParam1->f_4 == 2 && PED::_IS_PED_USING_SCENARIO_POINT(*iParam1, iLocal_688[23]))) || (iParam1->f_4 == 3 && PED::_IS_PED_USING_SCENARIO_POINT(*iParam1, iLocal_688[24])))
								{
									if (!__LIB_0__::func_75(&(iParam1->f_6)))
									{
										if (TASK::_0x02EBBB3989B7E695(*iParam1))
										{
											__LIB_1__::func_148(&(iParam1->f_6));
										}
									}
									else if (__LIB_0__::func_75(&(iParam1->f_6)) && __LIB_0__::func_265(&(iParam1->f_6)) > 6f)
									{
										switch (iParam1->f_4)
										{
											case 0:
												__LIB_13__::func_118(iParam1, 5, 0, 1);
												break;
											case 1:
												__LIB_13__::func_118(iParam1, 5, 0, 2);
												break;
											case 2:
												__LIB_13__::func_118(iParam1, 5, 0, 3);
												break;
											case 3:
												__LIB_13__::func_118(iParam1, 5, 0, 0);
												break;
										}
									}
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, -76381094, true) == 8)
							{
								if (!PED::IS_PED_USING_ANY_SCENARIO(*iParam1))
								{
									__LIB_13__::func_118(iParam1, 5, 0, -1);
								}
							}
							break;
						case 2:
							if (iParam1->f_3 == 0)
							{
								STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_GUARD_SCOUT"), 15, 0, 0);
								if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_GUARD_SCOUT"), false))
								{
									if (((TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_688[9]) && TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_688[10])) && TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_688[11])) && TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_688[12]))
									{
										__LIB_0__::func_37(&(iParam1->f_6));
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
										PED::SET_PED_CONFIG_FLAG(*iParam1, 167, false);
										PED::SET_PED_FLEE_ATTRIBUTES(*iParam1, 1048576, true);
										switch (iParam1->f_4)
										{
											case 0:
												if (PED::IS_PED_USING_ANY_SCENARIO(*iParam1))
												{
													PED::_0xEC6935EBE0847B90(*iParam1, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_688[9], true));
												}
												TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_688[9], 0, 0, true, false, 0, false, -1f, false);
												break;
											case 1:
												if (PED::IS_PED_USING_ANY_SCENARIO(*iParam1))
												{
													PED::_0xEC6935EBE0847B90(*iParam1, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_688[10], true));
												}
												TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_688[10], 0, 0, true, false, 0, false, -1f, false);
												break;
											case 2:
												if (PED::IS_PED_USING_ANY_SCENARIO(*iParam1))
												{
													PED::_0xEC6935EBE0847B90(*iParam1, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_688[11], true));
												}
												TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_688[11], 0, 0, true, false, 0, false, -1f, false);
												break;
											case 3:
												if (PED::IS_PED_USING_ANY_SCENARIO(*iParam1))
												{
													PED::_0xEC6935EBE0847B90(*iParam1, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_688[12], true));
												}
												TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_688[12], 0, 0, true, false, 0, false, -1f, false);
												break;
										}
										iParam1->f_3 = 1;
									}
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, -76381094, true) == 1)
							{
								if ((((iParam1->f_4 == 0 && PED::_IS_PED_USING_SCENARIO_POINT(*iParam1, iLocal_688[9])) || (iParam1->f_4 == 1 && PED::_IS_PED_USING_SCENARIO_POINT(*iParam1, iLocal_688[10]))) || (iParam1->f_4 == 2 && PED::_IS_PED_USING_SCENARIO_POINT(*iParam1, iLocal_688[11]))) || (iParam1->f_4 == 3 && PED::_IS_PED_USING_SCENARIO_POINT(*iParam1, iLocal_688[12])))
								{
									if (!__LIB_0__::func_75(&(iParam1->f_6)))
									{
										if (TASK::_0x02EBBB3989B7E695(*iParam1))
										{
											__LIB_1__::func_148(&(iParam1->f_6));
										}
									}
									else if (__LIB_0__::func_75(&(iParam1->f_6)) && __LIB_0__::func_265(&(iParam1->f_6)) > 6f)
									{
										switch (iParam1->f_4)
										{
											case 0:
												__LIB_13__::func_118(iParam1, 5, 0, 1);
												break;
											case 1:
												__LIB_13__::func_118(iParam1, 5, 0, 2);
												break;
											case 2:
												__LIB_13__::func_118(iParam1, 5, 0, 3);
												break;
											case 3:
												__LIB_13__::func_118(iParam1, 5, 0, 0);
												break;
										}
									}
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, -76381094, true) == 8)
							{
								if (!PED::IS_PED_USING_ANY_SCENARIO(*iParam1))
								{
									__LIB_13__::func_118(iParam1, 5, 0, -1);
								}
							}
							break;
					}
					break;
				case 4:
					switch (iParam3)
					{
						case 0:
							if (iParam1->f_3 == 0)
							{
								if (((TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_688[13]) && TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_688[14])) && TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_688[15])) && TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_688[16]))
								{
									__LIB_0__::func_37(&(iParam1->f_6));
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
									switch (iParam1->f_4)
									{
										case 0:
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_688[13], true), 1f, 60000, (0.25f * 4f), 9437188, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_688[13], true));
											break;
										case 1:
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_688[14], true), 1f, 60000, (0.25f * 4f), 9437188, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_688[14], true));
											break;
										case 2:
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_688[15], true), 1f, 60000, (0.25f * 4f), 9437188, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_688[15], true));
											break;
										case 3:
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_688[16], true), 1f, 60000, (0.25f * 4f), 9437188, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_688[16], true));
											break;
									}
									iParam1->f_3 = 1;
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 713668775, true) == 8)
							{
								if (!__LIB_0__::func_75(&(iParam1->f_6)))
								{
									__LIB_1__::func_148(&(iParam1->f_6));
								}
								else if (__LIB_0__::func_75(&(iParam1->f_6)) && __LIB_0__::func_265(&(iParam1->f_6)) > 6f)
								{
									switch (iParam1->f_4)
									{
										case 0:
											__LIB_13__::func_118(iParam1, 4, 0, 1);
											break;
										case 1:
											__LIB_13__::func_118(iParam1, 4, 0, 2);
											break;
										case 2:
											__LIB_13__::func_118(iParam1, 4, 0, 3);
											break;
										case 3:
											__LIB_13__::func_118(iParam1, 4, 0, 0);
											break;
									}
								}
							}
							break;
						case 1:
							if (iParam1->f_3 == 0)
							{
								if (((TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_688[17]) && TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_688[18])) && TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_688[19])) && TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_688[20]))
								{
									__LIB_0__::func_37(&(iParam1->f_6));
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
									switch (iParam1->f_4)
									{
										case 0:
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_688[17], true), 1f, 60000, (0.25f * 4f), 9437188, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_688[17], true));
											break;
										case 1:
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_688[18], true), 1f, 60000, (0.25f * 4f), 9437188, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_688[18], true));
											break;
										case 2:
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_688[19], true), 1f, 60000, (0.25f * 4f), 9437188, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_688[19], true));
											break;
										case 3:
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_688[20], true), 1f, 60000, (0.25f * 4f), 9437188, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_688[20], true));
											break;
									}
									iParam1->f_3 = 1;
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 713668775, true) == 8)
							{
								if (!__LIB_0__::func_75(&(iParam1->f_6)))
								{
									__LIB_1__::func_148(&(iParam1->f_6));
								}
								else if (__LIB_0__::func_75(&(iParam1->f_6)) && __LIB_0__::func_265(&(iParam1->f_6)) > 6f)
								{
									switch (iParam1->f_4)
									{
										case 0:
											__LIB_13__::func_118(iParam1, 4, 0, 1);
											break;
										case 1:
											__LIB_13__::func_118(iParam1, 4, 0, 2);
											break;
										case 2:
											__LIB_13__::func_118(iParam1, 4, 0, 3);
											break;
										case 3:
											__LIB_13__::func_118(iParam1, 4, 0, 0);
											break;
									}
								}
							}
							break;
						case 2:
							if (iParam1->f_3 == 0)
							{
								if (((TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_688[9]) && TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_688[10])) && TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_688[11])) && TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_688[12]))
								{
									__LIB_0__::func_37(&(iParam1->f_6));
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
									switch (iParam1->f_4)
									{
										case 0:
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_688[9], true), 1f, 60000, (0.25f * 4f), 9437188, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_688[9], true));
											break;
										case 1:
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_688[10], true), 1f, 60000, (0.25f * 4f), 9437188, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_688[10], true));
											break;
										case 2:
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_688[11], true), 1f, 60000, (0.25f * 4f), 9437188, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_688[11], true));
											break;
										case 3:
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_688[12], true), 1f, 60000, (0.25f * 4f), 9437188, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_688[12], true));
											break;
									}
									iParam1->f_3 = 1;
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 713668775, true) == 8)
							{
								if (!__LIB_0__::func_75(&(iParam1->f_6)))
								{
									__LIB_1__::func_148(&(iParam1->f_6));
								}
								else if (__LIB_0__::func_75(&(iParam1->f_6)) && __LIB_0__::func_265(&(iParam1->f_6)) > 6f)
								{
									switch (iParam1->f_4)
									{
										case 0:
											__LIB_13__::func_118(iParam1, 4, 0, 1);
											break;
										case 1:
											__LIB_13__::func_118(iParam1, 4, 0, 2);
											break;
										case 2:
											__LIB_13__::func_118(iParam1, 4, 0, 3);
											break;
										case 3:
											__LIB_13__::func_118(iParam1, 4, 0, 0);
											break;
									}
								}
							}
							break;
					}
					break;
				case 8:
				case 9:
					if (func_1158(*iParam1, 1))
					{
						WEAPON::_0xCEF4C65DE502D367(*iParam1, 0, 1, 1, 0);
					}
					else if (func_1158(*iParam1, 0))
					{
						WEAPON::_0xCEF4C65DE502D367(*iParam1, 0, 0, 1, 0);
					}
					if (iParam1->f_3 == 0)
					{
						__LIB_13__::func_138(iParam1, 0);
						__LIB_1__::func_683(&iLocal_65, 16384);
						if (PED::IS_PED_USING_ANY_SCENARIO(*iParam1) || __LIB_0__::func_27(iParam1->f_5, 256))
						{
							PED::_0x802092B07E3B1EEA(*iParam1, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
						}
						switch (iParam1->f_2)
						{
							case 8:
								break;
							case 9:
								PED::SET_PED_CONFIG_FLAG(*iParam1, 167, false);
								PED::_0xFC3DB99C8144CD81(*iParam1, iLocal_684[2], 0, 0, 0);
								PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 1);
								break;
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
						TASK::TASK_COMBAT_PED(*iParam1, Global_35, 16777216, 0);
						iParam1->f_3 = 1;
					}
					break;
			}
		}
		else
		{
			__LIB_0__::func_325(&(iParam1->f_1));
			if (!__LIB_0__::func_27(iParam1->f_5, 1))
			{
				__LIB_1__::func_683(&(iParam1->f_5), 1);
			}
		}
		if (!__LIB_0__::func_27(iParam1->f_5, 512))
		{
			if (__LIB_0__::func_27(iLocal_65, 16384))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam2) && !ENTITY::IS_ENTITY_DEAD(iParam2))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(PED::_GET_RIDER_OF_MOUNT(iParam2, false)) || __LIB_0__::func_27(iParam1->f_5, 1))
					{
						PED::SET_PED_KEEP_TASK(iParam2, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam2, false);
						TASK::TASK_SMART_FLEE_COORD(iParam2, VOLUME::_GET_VOLUME_COORDS(iLocal_684[1]), 200f, -1, false, 1077936128);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam2);
						__LIB_1__::func_683(&(iParam1->f_5), 512);
					}
				}
			}
		}
	}
}

bool func_702()
{
	int iVar0;
	if (__LIB_0__::func_394(Global_35, iLocal_669, 0))
	{
		if (!__LIB_0__::func_27(Local_134.f_5, 128))
		{
			__LIB_13__::func_139(iLocal_669);
			__LIB_1__::func_683(&(Local_134.f_5), 128);
		}
		return true;
	}
	iVar0 = 0;
	while (iVar0 < Local_150)
	{
		if (__LIB_0__::func_394(Global_35, iLocal_672[iVar0], 0))
		{
			if (!__LIB_0__::func_27(Local_150[iVar0 /*16*/].f_5, 128))
			{
				__LIB_13__::func_139(iLocal_672[iVar0]);
				__LIB_1__::func_683(&(Local_150[iVar0 /*16*/].f_5), 128);
			}
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_703(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	iVar0 = FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(VOLUME::_GET_VOLUME_COORDS(iLocal_684[1]), 10f);
	if (!__LIB_0__::func_27(iLocal_65, 128))
	{
		if (iVar0 > 8)
		{
			__LIB_1__::func_683(&iLocal_65, 128);
		}
	}
	if (!__LIB_0__::func_27(iLocal_65, 256))
	{
		if ((FIRE::IS_EXPLOSION_IN_SPHERE(25, VOLUME::_GET_VOLUME_COORDS(iLocal_684[1]), 10f) || FIRE::IS_EXPLOSION_IN_SPHERE(2, VOLUME::_GET_VOLUME_COORDS(iLocal_684[1]), 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(24, VOLUME::_GET_VOLUME_COORDS(iLocal_684[1]), 10f))
		{
			__LIB_1__::func_683(&iLocal_65, 256);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fVar1 = __LIB_0__::func_94(iParam0, VOLUME::_GET_VOLUME_COORDS(iLocal_684[1]), 1);
		if (fVar1 < 30f)
		{
			if (iVar0 > 8 || __LIB_0__::func_27(iLocal_65, 128))
			{
				return true;
			}
		}
		if (fVar1 < 26f)
		{
			if (__LIB_0__::func_27(iLocal_65, 256))
			{
				return true;
			}
			if (iVar0 > 1)
			{
				return true;
			}
		}
		if (fVar1 < 15f)
		{
			if (OBJECT::DOES_PICKUP_OF_TYPE_EXIST_IN_AREA(joaat("PICKUP_WEAPON_SINGLE_ARROW"), VOLUME::_GET_VOLUME_COORDS(iLocal_684[1]), 9f))
			{
				return true;
			}
			if (fVar1 > 10f)
			{
				iVar2 = 0;
				while (iVar2 < iLocal_72)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_17[iVar2 /*4*/].f_3))
					{
						vVar3 = { ENTITY::GET_ENTITY_COORDS(Local_17[iVar2 /*4*/].f_3, false, false) };
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, Local_17[iVar2 /*4*/], false) > 0.2f)
						{
							__LIB_1__::func_683(&iLocal_65, 64);
							return true;
						}
					}
					iVar2++;
				}
			}
		}
		if (!__LIB_0__::func_27(iLocal_65, 32))
		{
			iVar6 = 0;
			while (iVar6 < iLocal_70)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_34[iVar6 /*6*/]))
				{
					if (__LIB_10__::func_236(Local_34[iVar6 /*6*/].f_1, Local_34[iVar6 /*6*/].f_2, &(Local_34[iVar6 /*6*/]), 0, 0, 0) || func_1167(Local_34[iVar6 /*6*/].f_1, Local_34[iVar6 /*6*/].f_2, &(Local_34[iVar6 /*6*/]), 0, 0, 0, 0))
					{
						__LIB_1__::func_683(&iLocal_65, 32);
					}
				}
				iVar6++;
			}
		}
		if (fVar1 < 7f)
		{
			if (fVar1 > 3.5f)
			{
				if (__LIB_0__::func_27(iLocal_65, 32))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_704(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (__LIB_0__::func_48(iParam0, iLocal_670, 20f, 1))
	{
		return true;
	}
	if (__LIB_0__::func_48(iParam0, iLocal_671, 20f, 1))
	{
		return true;
	}
	if (__LIB_0__::func_48(iParam0, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 20f, 1))
	{
		__LIB_1__::func_683(&iLocal_65, 2048);
		return true;
	}
	return false;
}

int func_705(char* sParam0)
{
	return __LIB_13__::func_668(sParam0);
}

void func_722(var uParam0, int iParam1)
{
	__LIB_13__::func_126(uParam0, &Local_248, iParam1);
	StringCopy(&(Local_248.f_346), "RBT12_TGT_PYD", 24);
	Local_248.f_299 = 7;
}

void func_750(var uParam0)
{
	struct<4> Var0;
	struct<4> Var4;
	struct<4> Var8;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_69) && uParam0->f_62 != 0)
	{
		__LIB_10__::func_85(uParam0, 0);
	}
	if ((uParam0->f_301 == 2 && TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_371)) && PED::_IS_PED_USING_SCENARIO_POINT(uParam0->f_69, uParam0->f_371))
	{
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(uParam0->f_69, 0, 1);
	}
	switch (uParam0->f_62)
	{
		case 0:
			if (__LIB_10__::func_199(uParam0))
			{
				__LIB_10__::func_85(uParam0, 1);
			}
			break;
		case 1:
			if (uParam0->f_25)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
				{
					if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_371))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
						{
							__LIB_10__::func_86(uParam0);
						}
						else
						{
							if (uParam0->f_301 == 0)
							{
								Var4 = { __LIB_4__::func_494(uParam0->f_30[0 /*14*/].f_1, "Sheriff", uParam0->f_30[0 /*14*/].f_9) };
								uParam0->f_371 = __LIB_8__::func_772(joaat("SC_BOUNTY_HUNTER_SHERIFF"), Var4, Var4.f_3, 0, 0, 0);
							}
							else
							{
								uParam0->f_371 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(uParam0->f_4, joaat("SC_BOUNTY_HUNTER_SHERIFF"), 0.0086562f, 0.0409636f, 0.5f, 179.9999f, 0, 0, 1);
							}
							STREAMING::_REQUEST_SCENARIO_TYPE(joaat("SC_BOUNTY_HUNTER_SHERIFF"), 15, 0, 0);
							TASK::_0xE69FDA40AAC3EFC0(uParam0->f_371, 0);
						}
					}
					else
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_30[0 /*14*/].f_1))
						{
							Var0 = { __LIB_4__::func_494(uParam0->f_30[0 /*14*/].f_1, "Chair", uParam0->f_30[0 /*14*/].f_9) };
							func_1212(uParam0->f_4, Var0, 2, 1073741824 /* Float: 2f */);
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_10))
							{
								Var8 = { __LIB_4__::func_494(uParam0->f_30[0 /*14*/].f_1, "Book", uParam0->f_30[0 /*14*/].f_9) };
								func_1212(uParam0->f_10, Var8, 0, 1073741824 /* Float: 2f */);
							}
						}
						__LIB_10__::func_72(uParam0);
						__LIB_10__::func_85(uParam0, 2);
					}
				}
			}
			break;
		case 2:
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_371))
			{
				__LIB_10__::func_85(uParam0, 1);
			}
			if (__LIB_10__::func_69(uParam0) && __LIB_0__::func_75(&(uParam0->f_372)))
			{
				if (__LIB_0__::func_265(&(uParam0->f_372)) > 1f)
				{
					__LIB_10__::func_200(uParam0);
					__LIB_1__::func_148(&(uParam0->f_372));
					__LIB_10__::func_85(uParam0, 3);
				}
			}
			else
			{
				__LIB_1__::func_148(&(uParam0->f_372));
			}
			break;
		case 3:
			if (__LIB_10__::func_69(uParam0))
			{
				if (__LIB_0__::func_265(&(uParam0->f_372)) > 1f || __LIB_10__::func_87(uParam0))
				{
					if (uParam0->f_360)
					{
						__LIB_10__::func_85(uParam0, 4);
					}
					else
					{
						__LIB_10__::func_85(uParam0, 5);
					}
				}
			}
			break;
		case 4:
			if (__LIB_10__::func_69(uParam0))
			{
				if (__LIB_13__::func_127(uParam0))
				{
					__LIB_10__::func_85(uParam0, 5);
				}
			}
			break;
		case 5:
			if (__LIB_10__::func_69(uParam0))
			{
				if (__LIB_13__::func_130(uParam0))
				{
					__LIB_1__::func_148(&(uParam0->f_372));
					__LIB_10__::func_85(uParam0, 6);
				}
			}
			break;
		case 6:
			if (__LIB_0__::func_265(&(uParam0->f_372)) > 1f)
			{
				if (uParam0->f_361 && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_30[0 /*14*/].f_1, false))
				{
					if (TASK::_0x916B8E075ABC8B4E(uParam0->f_69, 1))
					{
						if (uParam0->f_301 == 0)
						{
							TASK::_0x541E5B41DCA45828(uParam0->f_69, 1, 0);
							TASK::_TASK_START_SCENARIO_IN_PLACE(uParam0->f_69, joaat("WORLD_HUMAN_STERNGUY_IDLES"), -1, true, 0, -1f, false);
							TASK::TASK_LOOK_AT_ENTITY(uParam0->f_69, Global_35, -1, 0, 51, 0);
						}
						else
						{
							TASK::_0x541E5B41DCA45828(uParam0->f_69, 1, 0);
						}
					}
					__LIB_10__::func_85(uParam0, 7);
				}
			}
			break;
	}
}

void func_772(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_1__::func_293(0, uParam0->f_300, 2, 0);
	__LIB_0__::func_870(iVar0);
	if (__LIB_0__::func_181())
	{
		iVar1 = __LIB_5__::func_297(iVar0);
		__LIB_7__::func_448(iVar0, iVar1 + 1);
	}
	else
	{
		iVar1 = __LIB_0__::func_895(iVar0);
		__LIB_1__::func_532(iVar0, iVar1 + 1);
	}
	__LIB_8__::func_975(iVar0, __LIB_0__::func_23());
	Global_1392235.f_4 = 0;
	if (__LIB_0__::func_27(uParam0->f_329, 512))
	{
		if (__LIB_1__::func_707(__LIB_10__::func_49(uParam0->f_65), 1, 0))
		{
			func_1247(__LIB_10__::func_49(uParam0->f_65), 1, 0, -142743235, 0);
		}
	}
}

bool func_809(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_809(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_809(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_809(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_809(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_809(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_809(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_809(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_809(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_809(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_809(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_809(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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
			func_1349(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		__LIB_1__::func_158(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_811()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1358();
	func_1359();
	func_1360();
	func_1361();
	func_1362();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_812(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1247(iParam0, 1, 1, -142743235, 1);
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

void func_846(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_13(32768))
	{
		return;
	}
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	__LIB_0__::func_7(&Global_1935630, 8192);
	iVar2 = 1;
	switch (__LIB_0__::func_700(iParam0))
	{
		case 1:
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS")), 1);
			iVar0 = __LIB_0__::func_76(iParam0);
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("MISSIONS_PROGRESSED")), 1);
			switch (__LIB_0__::func_334(iVar0))
			{
				case 0:
					__LIB_0__::func_15(__LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP1")), 1);
					break;
				case 1:
					__LIB_0__::func_15(__LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP2")), 1);
					break;
				case 2:
					__LIB_0__::func_15(__LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP3")), 1);
					break;
				case 3:
					__LIB_0__::func_15(__LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP4")), 1);
					Jump @386; //curOff = 267
					__LIB_0__::func_15(__LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP5")), 1);
					Jump @386; //curOff = 289
					__LIB_0__::func_15(__LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP6")), 1);
					Jump @386; //curOff = 311
					__LIB_0__::func_15(__LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP7")), 1);
					Jump @386; //curOff = 333
					__LIB_0__::func_15(__LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP8")), 1);
					Jump @386; //curOff = 355
					__LIB_0__::func_15(__LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP9")), 1);
					Jump @386; //curOff = 377
					iVar2 = 0;
					if (iVar0 == 7)
					{
						__LIB_0__::func_15(__LIB_0__::func_38(joaat("COMPLETED"), joaat("RC_STRANDS_BOUNTY")), 1);
					}
					if (iVar2 && MISSIONDATA::MISSIONDATA_IS_REQUIRED_STORY_MISSION(MISC::GET_HASH_KEY(&(Global_1835011[iVar0 /*74*/].f_8))))
					{
						__LIB_0__::func_15(__LIB_0__::func_38(joaat("COMPLETED"), joaat("REQUIRED_MISSIONS")), 1);
					}
					Jump @1037; //curOff = 458
					iVar1 = __LIB_0__::func_76(iParam0);
					if (__LIB_0__::func_1(Global_1347702[iVar1 /*49*/].f_12, 1))
					{
						__LIB_0__::func_15(__LIB_0__::func_14(joaat("MISSIONS_PROGRESSED")), 1);
					}
					if (__LIB_0__::func_1(Global_1347702[iVar1 /*49*/].f_12, 4) || iVar1 == 59)
					{
						if (__LIB_0__::func_1(Global_1347702[iVar1 /*49*/].f_12, 1))
						{
							__LIB_0__::func_15(__LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS")), 1);
						}
						else
						{
							__LIB_0__::func_15(__LIB_0__::func_38(joaat("COMPLETED"), joaat("RC")), 1);
						}
					}
					if (__LIB_0__::func_1(Global_1347702[iVar1 /*49*/].f_12, 1))
					{
						switch (__LIB_0__::func_335(iVar1))
						{
							case 0:
								__LIB_0__::func_15(__LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP1")), 1);
								break;
							case 1:
								__LIB_0__::func_15(__LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP2")), 1);
								break;
							case 2:
								__LIB_0__::func_15(__LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP3")), 1);
								break;
							case 3:
								__LIB_0__::func_15(__LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP4")), 1);
								break;
							case 4:
								__LIB_0__::func_15(__LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP5")), 1);
								break;
							case 5:
								__LIB_0__::func_15(__LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP6")), 1);
								break;
							case 6:
								__LIB_0__::func_15(__LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP7")), 1);
								break;
							case 7:
								__LIB_0__::func_15(__LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP8")), 1);
								break;
							case 8:
								__LIB_0__::func_15(__LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP9")), 1);
								break;
							default:
								iVar2 = 0;
								break;
						}
						if (iVar2 && MISSIONDATA::MISSIONDATA_IS_REQUIRED_STORY_MISSION(MISC::GET_HASH_KEY(&(Global_1347702[iVar1 /*49*/].f_3))))
						{
							__LIB_0__::func_15(__LIB_0__::func_38(joaat("COMPLETED"), joaat("REQUIRED_MISSIONS")), 1);
						}
					}
					else if (__LIB_0__::func_1(Global_1347702[iVar1 /*49*/].f_12, 4))
					{
						if (__LIB_0__::func_1(Global_1347702[iVar1 /*49*/].f_12, 4194304))
						{
						}
						else if (!__LIB_0__::func_1(Global_1347702[iVar1 /*49*/].f_12, 512))
						{
							__LIB_0__::func_15(__LIB_0__::func_38(joaat("COMPLETED"), joaat("RC_STRANDS")), 1);
						}
						else
						{
							__LIB_0__::func_15(__LIB_0__::func_38(joaat("COMPLETED"), joaat("RC_STRANDS_BOUNTY")), 1);
						}
					}
				}
void func_847()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1397(&uVar4, &iVar1, &iVar2, &iVar3)))
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

Vector3 func_854(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
		bVar10 = func_1410();
		if (VOLUME::_DOES_VOLUME_EXIST(bVar10))
		{
		}
	}
	if (!func_1411(Global_1310720.f_21))
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

int func_957(var uParam0, int iParam1, int iParam2)
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
		return func_957(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_1075(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1575();
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

void func_1077(var uParam0)
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
			func_1583(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1583(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1078(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1583(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_1127(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	switch (uParam0->f_371[iParam1 /*18*/].f_2)
	{
		case 9:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8, false))
			{
				fVar1 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8);
				iVar0 = 0;
				while (iVar0 < 27)
				{
					if ((((uParam0->f_3[iVar0 /*13*/] && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2)) && uParam0->f_3[iVar0 /*13*/].f_8 > 0f) && fVar1 >= uParam0->f_3[iVar0 /*13*/].f_8) && !ENTITY::IS_ENTITY_VISIBLE(uParam0->f_3[iVar0 /*13*/].f_2))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3[iVar0 /*13*/].f_2, true);
					}
					iVar0++;
				}
				if (((__LIB_0__::func_84(&(uParam0->f_371[iParam1 /*18*/]), 4) && uParam0->f_371[iParam1 /*18*/].f_12 < 1f) && fVar1 >= uParam0->f_371[iParam1 /*18*/].f_12) && !PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				}
				if (__LIB_0__::func_84(&(uParam0->f_371[iParam1 /*18*/]), 64) && __LIB_12__::func_727(uParam0, iParam1, 0))
				{
					func_1627(uParam0, uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8, uParam0->f_371[iParam1 /*18*/].f_13, uParam0->f_371[iParam1 /*18*/].f_14);
				}
			}
			break;
		case 10:
			if ((uParam0->f_371[iParam1 /*18*/].f_3 >= 0 && uParam0->f_371[iParam1 /*18*/].f_5 >= 0) && uParam0->f_371[iParam1 /*18*/].f_3 != uParam0->f_371[iParam1 /*18*/].f_5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2))
				{
					if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2)))
					{
						__LIB_4__::func_640(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2), uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2, uParam0->f_371[iParam1 /*18*/].f_13, uParam0->f_371[iParam1 /*18*/].f_14);
					}
					if ((__LIB_0__::func_84(&(uParam0->f_371[iParam1 /*18*/]), 128) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2)))
					{
						__LIB_4__::func_640(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2), uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2, uParam0->f_371[iParam1 /*18*/].f_13, uParam0->f_371[iParam1 /*18*/].f_14);
					}
				}
			}
			break;
		case 4:
			__LIB_13__::func_30(uParam0, iParam1, 0, 0);
			break;
	}
}

void func_1129(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_371[iParam1 /*18*/].f_2)
	{
		case 9:
			func_1629(uParam0, iParam2, iParam1);
			break;
		case 4:
			__LIB_13__::func_30(uParam0, iParam1, 0, 0);
			break;
		case 5:
			uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_19)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22)))
			{
				if (__LIB_0__::func_265(&(uParam0->f_1768)) >= IntToFloat((uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_25 / 1000)))
				{
					__LIB_12__::func_775(uParam0);
					if (!AUDIO::_0xD89504D9D7D5057D(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22)))
					{
						__LIB_1__::func_104(&(uParam0->f_1667), uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22, 0, -1, 0, 0);
					}
					else
					{
						AUDIO::START_PRELOADED_CONVERSATION(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22));
					}
					uParam0->f_371[iParam1 /*18*/].f_7 = 1;
				}
			}
			else
			{
				uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			}
			break;
		case 10:
			uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			break;
		case 11:
			uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			uParam0->f_1581 = iParam1;
			break;
	}
}

bool func_1133(var uParam0, char* sParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	struct<13> Var2;
	bool bVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	struct<8> Var20;
	int iVar28;
	vector3 vVar29;
	int iVar32;
	int iVar33;
	bVar0 = DATAFILE::_0x7907969497EA92F5(uParam0->f_1785);
	if (!bVar0)
	{
		uParam0->f_1785 = DATAFILE::_0xD97D8D905F1562F2(MISC::GET_HASH_KEY(sParam1));
	}
	bVar1 = DATAFILE::_0x603AC35FD4602C76(uParam0->f_1785);
	if (!bVar1)
	{
		return false;
	}
	__LIB_12__::func_761(uParam0);
	__LIB_0__::func_19(uParam0, iParam2);
	if (__LIB_12__::func_655(uParam0, 16384))
	{
		__LIB_12__::func_708(uParam0);
	}
	Var2.f_10 = joaat("WEAPON_UNARMED");
	iVar18 = 0;
	while (iVar18 < 8)
	{
		iVar16 = -1;
		__LIB_12__::func_729(uParam0, iVar18);
		if (__LIB_12__::func_730(uParam0, 0))
		{
			if (__LIB_12__::func_731(uParam0, 43, &iVar16))
			{
				if (iVar16 >= 0)
				{
					uParam0->f_912[iVar16 /*41*/].f_27 = 0;
					__LIB_12__::func_732(uParam0, 1, &(uParam0->f_912[iVar16 /*41*/].f_1));
					__LIB_12__::func_732(uParam0, 2, &(uParam0->f_912[iVar16 /*41*/].f_1.f_1));
					__LIB_12__::func_732(uParam0, 3, &(uParam0->f_912[iVar16 /*41*/].f_1.f_2));
					__LIB_12__::func_732(uParam0, 4, &(uParam0->f_912[iVar16 /*41*/].f_11));
					__LIB_12__::func_732(uParam0, 5, &(uParam0->f_912[iVar16 /*41*/].f_12));
					__LIB_12__::func_732(uParam0, 6, &(uParam0->f_912[iVar16 /*41*/].f_13));
					__LIB_12__::func_732(uParam0, 7, &(uParam0->f_912[iVar16 /*41*/].f_4));
					__LIB_12__::func_732(uParam0, 8, &(uParam0->f_912[iVar16 /*41*/].f_4.f_1));
					__LIB_12__::func_732(uParam0, 9, &(uParam0->f_912[iVar16 /*41*/].f_4.f_2));
					__LIB_12__::func_732(uParam0, 10, &(uParam0->f_912[iVar16 /*41*/].f_7));
					__LIB_12__::func_732(uParam0, 11, &(uParam0->f_912[iVar16 /*41*/].f_7.f_1));
					__LIB_12__::func_732(uParam0, 12, &(uParam0->f_912[iVar16 /*41*/].f_7.f_2));
					__LIB_12__::func_732(uParam0, 13, &(uParam0->f_912[iVar16 /*41*/].f_10));
					__LIB_12__::func_732(uParam0, 14, &(uParam0->f_912[iVar16 /*41*/].f_14));
					__LIB_12__::func_732(uParam0, 15, &(uParam0->f_912[iVar16 /*41*/].f_15));
					if (__LIB_12__::func_731(uParam0, 16, &iVar17))
					{
						uParam0->f_912[iVar16 /*41*/] = iVar17;
					}
					__LIB_12__::func_732(uParam0, 19, &(uParam0->f_912[iVar16 /*41*/].f_16));
					__LIB_12__::func_732(uParam0, 20, &(uParam0->f_912[iVar16 /*41*/].f_17));
					__LIB_12__::func_732(uParam0, 31, &(uParam0->f_912[iVar16 /*41*/].f_18));
					if (__LIB_12__::func_733(uParam0, 21, &Var20))
					{
						MemCopy(&(uParam0->f_912[iVar16 /*41*/].f_19), {Var20}, 3);
					}
					if (__LIB_12__::func_733(uParam0, 22, &Var20))
					{
						MemCopy(&(uParam0->f_912[iVar16 /*41*/].f_22), {Var20}, 3);
					}
					__LIB_12__::func_731(uParam0, 23, &(uParam0->f_912[iVar16 /*41*/].f_25));
					__LIB_12__::func_862(uParam0, &(uParam0->f_912[iVar16 /*41*/].f_27));
					if (__LIB_12__::func_733(uParam0, 35, &(uParam0->f_912[iVar16 /*41*/].f_30)))
					{
					}
					if (__LIB_12__::func_731(uParam0, 39, &iVar17))
					{
						uParam0->f_912[iVar16 /*41*/].f_39 = iVar17;
					}
					else
					{
						uParam0->f_912[iVar16 /*41*/].f_39 = 1;
					}
					if (__LIB_12__::func_732(uParam0, 40, &(uParam0->f_912[iVar16 /*41*/].f_40)))
					{
						__LIB_4__::func_639(&(uParam0->f_912[iVar16 /*41*/]), 2);
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_912[iVar16 /*41*/].f_30)))
					{
						uParam0->f_912[iVar16 /*41*/].f_30 = { __LIB_0__::func_137() };
					}
					uParam0->f_912[iVar16 /*41*/].f_29 = 1;
					if (uParam0->f_1791 == -1 || uParam0->f_912[uParam0->f_1791 /*41*/].f_17 < uParam0->f_912[iVar16 /*41*/].f_17)
					{
						uParam0->f_1791 = iVar16;
					}
				}
			}
		}
		iVar18++;
	}
	iVar18 = 0;
	while (iVar18 < 8)
	{
		if (uParam0->f_912[iVar18 /*41*/].f_29)
		{
			vVar29 = { vVar29 + uParam0->f_912[iVar18 /*41*/].f_1 };
			iVar28++;
		}
		iVar18++;
	}
	vVar29 = { vVar29 / FtoV(BUILTIN::TO_FLOAT(iVar28)) };
	uParam0->f_1796 = 1;
	iVar18 = 0;
	while (iVar18 < 8)
	{
		if (uParam0->f_912[iVar18 /*41*/].f_29)
		{
			if (!__LIB_1__::func_410(vVar29, uParam0->f_912[iVar18 /*41*/].f_1, 5f, 1))
			{
				uParam0->f_1796 = 0;
			}
			else
			{
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 11)
			{
				iVar16 = -1;
				__LIB_12__::func_729(uParam0, iVar18);
				if (__LIB_12__::func_730(uParam0, 45))
				{
					if (__LIB_12__::func_731(uParam0, 47, &iVar16))
					{
						if (iVar16 >= 0)
						{
							__LIB_4__::func_647(&(uParam0->f_1418[iVar16 /*10*/]), 2);
							__LIB_12__::func_733(uParam0, 46, &(uParam0->f_1418[iVar16 /*10*/]));
							if (__LIB_12__::func_734(uParam0, 48, &bVar19))
							{
								if (bVar19)
								{
									__LIB_4__::func_647(&(uParam0->f_1418[iVar16 /*10*/]), 1);
								}
							}
							if (__LIB_12__::func_731(uParam0, 49, &iVar17))
							{
								if (iVar17 == 1)
								{
									__LIB_4__::func_647(&(uParam0->f_1418[iVar16 /*10*/]), 8);
								}
								else if (iVar17 == 2)
								{
									__LIB_4__::func_647(&(uParam0->f_1418[iVar16 /*10*/]), 4);
								}
							}
						}
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 27)
			{
				iVar16 = -1;
				__LIB_12__::func_729(uParam0, iVar18);
				if (__LIB_12__::func_730(uParam0, 50))
				{
					if (__LIB_12__::func_731(uParam0, 51, &iVar17))
					{
						Var2.f_1 = iVar17;
					}
					__LIB_12__::func_731(uParam0, 43, &(Var2.f_3));
					if (__LIB_12__::func_733(uParam0, 52, &Var20))
					{
						MemCopy(&(Var2.f_4), {Var20}, 4);
					}
					__LIB_12__::func_732(uParam0, 53, &(Var2.f_8));
					if (__LIB_12__::func_731(uParam0, 54, &iVar17))
					{
						Var2.f_10 = iVar17;
					}
					__LIB_12__::func_734(uParam0, 55, &(Var2.f_11));
					__LIB_12__::func_734(uParam0, 56, &(Var2.f_12));
					iVar32 = -1;
					if (func_1647(uParam0, Var2.f_1, &iVar32))
					{
						if (iVar32 >= 0 && iVar32 < 27)
						{
							uParam0->f_3[iVar32 /*13*/].f_3 = Var2.f_3;
							uParam0->f_3[iVar32 /*13*/].f_4 = { Var2.f_4 };
							uParam0->f_3[iVar32 /*13*/].f_8 = Var2.f_8;
							uParam0->f_3[iVar32 /*13*/].f_10 = Var2.f_10;
							uParam0->f_3[iVar32 /*13*/].f_11 = Var2.f_11;
							uParam0->f_3[iVar32 /*13*/].f_12 = Var2.f_12;
							uParam0->f_3[iVar32 /*13*/] = 1;
							if (__LIB_4__::func_649(Var2.f_1))
							{
								__LIB_12__::func_693(uParam0, 16777216);
							}
						}
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			__LIB_12__::func_729(uParam0, iVar18);
			if (__LIB_12__::func_730(uParam0, 82))
			{
				if (__LIB_12__::func_733(uParam0, 83, &Var20))
				{
					MemCopy(&(uParam0->f_355), {Var20}, 4);
				}
				__LIB_12__::func_733(uParam0, 84, &(uParam0->f_355.f_4));
				if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_355.f_4)))
				{
					if (uParam0->f_355.f_15 == 1)
					{
						uParam0->f_355.f_4 = { __LIB_0__::func_134() };
					}
					else if (uParam0->f_355.f_15 == 2)
					{
						uParam0->f_355.f_4 = { __LIB_0__::func_137() };
					}
					else
					{
						uParam0->f_355.f_4 = { __LIB_0__::func_137() };
					}
				}
			}
			iVar33 = -1;
			iVar18 = 0;
			while (iVar18 < 30)
			{
				iVar16 = -1;
				__LIB_12__::func_729(uParam0, iVar18);
				if (__LIB_12__::func_730(uParam0, 57))
				{
					if (__LIB_12__::func_731(uParam0, 43, &iVar16))
					{
						if (iVar16 >= 0)
						{
							uParam0->f_371[iVar16 /*18*/].f_8 = 0;
							__LIB_12__::func_731(uParam0, 58, &(uParam0->f_371[iVar16 /*18*/]));
							if (__LIB_12__::func_731(uParam0, 59, &iVar17))
							{
								uParam0->f_371[iVar16 /*18*/].f_1 = __LIB_4__::func_650(iVar17);
							}
							if (__LIB_12__::func_731(uParam0, 60, &iVar17))
							{
								uParam0->f_371[iVar16 /*18*/].f_2 = __LIB_4__::func_651(iVar17);
							}
							__LIB_12__::func_731(uParam0, 61, &(uParam0->f_371[iVar16 /*18*/].f_3));
							__LIB_12__::func_732(uParam0, 67, &(uParam0->f_371[iVar16 /*18*/].f_10));
							__LIB_12__::func_732(uParam0, 70, &(uParam0->f_371[iVar16 /*18*/].f_11));
							__LIB_12__::func_732(uParam0, 68, &(uParam0->f_371[iVar16 /*18*/].f_9));
							__LIB_12__::func_731(uParam0, 72, &(uParam0->f_371[iVar16 /*18*/].f_5));
							__LIB_12__::func_732(uParam0, 77, &(uParam0->f_371[iVar16 /*18*/].f_12));
							__LIB_12__::func_731(uParam0, 78, &(uParam0->f_371[iVar16 /*18*/].f_13));
							__LIB_12__::func_731(uParam0, 79, &(uParam0->f_371[iVar16 /*18*/].f_14));
							if (__LIB_12__::func_731(uParam0, 73, &iVar17))
							{
								uParam0->f_371[iVar16 /*18*/].f_17 = iVar17;
							}
							if (__LIB_12__::func_731(uParam0, 75, &iVar17))
							{
								uParam0->f_371[iVar16 /*18*/].f_4 = iVar17;
								bVar15 = true;
							}
							__LIB_12__::func_732(uParam0, 80, &(uParam0->f_371[iVar16 /*18*/].f_15));
							if (__LIB_12__::func_734(uParam0, 63, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_371[iVar16 /*18*/].f_8 |= 1;
								}
							}
							if (__LIB_12__::func_734(uParam0, 81, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_371[iVar16 /*18*/].f_8 |= 512;
								}
							}
							if (__LIB_12__::func_734(uParam0, 64, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_371[iVar16 /*18*/].f_8 |= 2;
								}
							}
							if (__LIB_12__::func_734(uParam0, 66, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_371[iVar16 /*18*/].f_8 |= 16;
								}
							}
							if (__LIB_12__::func_734(uParam0, 69, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_371[iVar16 /*18*/].f_8 |= 32;
								}
							}
							if (__LIB_12__::func_734(uParam0, 65, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_371[iVar16 /*18*/].f_8 |= 4;
								}
							}
							if (__LIB_12__::func_734(uParam0, 74, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_371[iVar16 /*18*/].f_8 |= 64;
								}
							}
							if (__LIB_12__::func_734(uParam0, 71, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_371[iVar16 /*18*/].f_8 |= 128;
								}
							}
							if (__LIB_12__::func_734(uParam0, 76, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_371[iVar16 /*18*/].f_8 |= 256;
								}
							}
							if (!bVar15 && uParam0->f_371[iVar16 /*18*/].f_2 == 9)
							{
								uParam0->f_371[iVar16 /*18*/].f_4 = uParam0->f_371[iVar16 /*18*/].f_3;
								uParam0->f_371[iVar16 /*18*/].f_3 = 0;
							}
							if (iVar33 == -1 || iVar16 > iVar33)
							{
								iVar33 = iVar16;
							}
							uParam0->f_371[iVar16 /*18*/].f_16 = uParam0->f_371[iVar16 /*18*/].f_2;
							uParam0->f_371[iVar16 /*18*/].f_6 = 1;
						}
					}
				}
				iVar18++;
			}
			if (iVar33 < 29)
			{
				uParam0->f_1790 = iVar33 + 1;
			}
			iVar18 = 0;
			while (iVar18 < 8)
			{
				iVar16 = -1;
				__LIB_12__::func_729(uParam0, iVar18);
				if (__LIB_12__::func_730(uParam0, 85))
				{
					__LIB_12__::func_731(uParam0, 86, &iVar16);
					if (iVar16 >= 0)
					{
						__LIB_12__::func_734(uParam0, 87, &(uParam0->f_1241[iVar18 /*22*/]));
						__LIB_12__::func_733(uParam0, 96, &(uParam0->f_1241[iVar18 /*22*/].f_2));
						__LIB_12__::func_733(uParam0, 97, &(uParam0->f_1241[iVar18 /*22*/].f_10));
						__LIB_12__::func_732(uParam0, 93, &(uParam0->f_1241[iVar18 /*22*/].f_18));
						__LIB_12__::func_732(uParam0, 94, &(uParam0->f_1241[iVar18 /*22*/].f_19));
						__LIB_12__::func_731(uParam0, 95, &(uParam0->f_1241[iVar18 /*22*/].f_20));
						uParam0->f_1241[iVar18 /*22*/].f_1 = 0;
						__LIB_12__::func_830(uParam0, &(uParam0->f_1241[iVar18 /*22*/].f_1));
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 2)
			{
				iVar16 = -1;
				__LIB_12__::func_729(uParam0, iVar18);
				if (__LIB_12__::func_730(uParam0, 98))
				{
					if (__LIB_12__::func_731(uParam0, 43, &iVar16))
					{
						if (iVar16 >= 0)
						{
							uParam0->f_1529[iVar16 /*15*/].f_10 = 0;
							__LIB_12__::func_735(uParam0, 99, &(uParam0->f_1529[iVar16 /*15*/]));
							__LIB_12__::func_735(uParam0, 100, &(uParam0->f_1529[iVar16 /*15*/].f_6));
							__LIB_12__::func_735(uParam0, 101, &(uParam0->f_1529[iVar16 /*15*/].f_3));
							if (__LIB_12__::func_731(uParam0, 102, &iVar17))
							{
								uParam0->f_1529[iVar16 /*15*/].f_9 = iVar17;
							}
							__LIB_12__::func_862(uParam0, &(uParam0->f_1529[iVar16 /*15*/].f_10));
							uParam0->f_1529[iVar16 /*15*/].f_11 = 1;
						}
					}
				}
				iVar18++;
			}
			DATAFILE::_DATAFILE_UNLOAD(uParam0->f_1785);
			__LIB_12__::func_693(uParam0, 1);
			__LIB_12__::func_693(uParam0, 16384);
			__LIB_12__::func_831(uParam0);
			return true;
		}
	}
}

bool func_1136(var uParam0)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	bool bVar8;
	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1418[iVar0 /*10*/].f_8))
		{
			if (!__LIB_0__::func_129(&(uParam0->f_1418[iVar0 /*10*/]), 64))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1418[iVar0 /*10*/].f_8, false))
				{
					func_1655(uParam0, uParam0->f_1418[iVar0 /*10*/].f_8);
					ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1418[iVar0 /*10*/].f_8);
					bVar1 = false;
					__LIB_4__::func_647(&(uParam0->f_1418[iVar0 /*10*/]), 64);
				}
				else
				{
					bVar1 = false;
				}
			}
			else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_1418[iVar0 /*10*/].f_8, true, false))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_912)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_912[iVar0 /*41*/].f_19)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_912[iVar0 /*41*/].f_19), "empty"))
		{
			HUD::_TEXT_DATABASE_REQUEST(&(uParam0->f_912[iVar0 /*41*/].f_19));
			if (!HUD::_TEXT_DATABASE_HAS_LOADED(&(uParam0->f_912[iVar0 /*41*/].f_19)))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	if (__LIB_12__::func_687(uParam0, 8) && !CAM::_0xDD0B7C5AE58F721D(__LIB_0__::func_166()))
	{
		bVar1 = false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1241[iVar0 /*22*/].f_2)) && uParam0->f_1241[iVar0 /*22*/].f_21) && !CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_1241[iVar0 /*22*/].f_2)))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		if (!__LIB_0__::func_86(uParam0->f_1781) || uParam0->f_1784 != 0f)
		{
			bVar8 = true;
		}
		iVar0 = 0;
		while (iVar0 < 11)
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1418[iVar0 /*10*/].f_8))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_1418[iVar0 /*10*/].f_8, "pl_breakout"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_1418[iVar0 /*10*/].f_8, "pl_breakout");
				}
				if (bVar8)
				{
					ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(uParam0->f_1418[iVar0 /*10*/].f_8, &vVar2, &vVar5, 2);
					vVar2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar2, uParam0->f_1784, uParam0->f_1781) };
					vVar5.f_2 = (vVar5.z - uParam0->f_1784);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1418[iVar0 /*10*/].f_8, vVar2, vVar5, 2);
				}
			}
			iVar0++;
		}
		return true;
	}
	return false;
}

int func_1146(var uParam0, var uParam1)
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
	uParam1->f_10 = __LIB_0__::func_97(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*uParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*uParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (__LIB_0__::func_86(uParam1->f_6))
		{
		}
	}
	bVar0 = __LIB_0__::func_28();
	if (*uParam1)
	{
		if (bVar0 && !__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
		{
			if (__LIB_1__::func_105(5))
			{
				func_1662(5);
				__LIB_1__::func_778(5);
				__LIB_0__::func_149(0);
				__LIB_0__::func_148(0);
			}
		}
	}
	if (__LIB_0__::func_979(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && __LIB_1__::func_25(Global_1835011[37 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[43 /*74*/].f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && __LIB_1__::func_25(Global_1835011[43 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[44 /*74*/].f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
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
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !uParam1->f_5)
			{
				__LIB_1__::func_54(uParam1->f_10);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!__LIB_1__::func_105(0) && __LIB_1__::func_105(1))
			{
				__LIB_1__::func_779(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (__LIB_0__::func_988())
			{
				__LIB_0__::func_989();
			}
			__LIB_0__::func_149(0);
			__LIB_0__::func_148(0);
			__LIB_0__::func_150(uParam1->f_6);
		}
	}
	if (!__LIB_0__::func_797(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((__LIB_0__::func_821(uParam1->f_10) == 0 || __LIB_0__::func_809(uParam1->f_10) == 0) || __LIB_0__::func_815(uParam1->f_10) == 0)
			{
				__LIB_1__::func_621(uParam1->f_10);
			}
			__LIB_1__::func_106(uParam1->f_10);
			__LIB_0__::func_822(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
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
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (ENTITY::_IS_ENTITY_FROZEN(iVar2))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			}
			if (!__LIB_0__::func_86(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::_0x9587913B9E772D29(iVar2, 0);
			}
		}
	}
	if (__LIB_1__::func_107(uParam1->f_10))
	{
		*uParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!PED::_0xA0BC8FAED8CFEB3C(iVar2))
			{
				*uParam0 = 0;
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
			Var8 = { __LIB_1__::func_622(uParam1->f_10) };
			Var10 = { __LIB_1__::func_623() };
			__LIB_1__::func_163(iVar2, &Var8, &Var10, 0);
			PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!__LIB_0__::func_823(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		__LIB_0__::func_824(uParam1->f_10);
		if (uParam1->f_2 && !__LIB_0__::func_86(uParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			PHYSICS::_0x0348469DAA17576C(iVar2);
			ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
			ENTITY::_0x9587913B9E772D29(iVar2, 0);
		}
		*uParam0 = 2;
		return iVar2;
	}
	__LIB_1__::func_108(uParam1->f_10);
	if (__LIB_0__::func_823(uParam1->f_10))
	{
		iVar16 = __LIB_0__::func_825(uParam1->f_10);
		iVar17 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (iVar16 != iVar17)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	*uParam0 = 2;
	return iVar2;
}

Vector3 func_1152()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	float fVar11;
	if (!__LIB_0__::func_75(&uLocal_119))
	{
		__LIB_0__::func_268(&uLocal_119, 1000f);
	}
	if (__LIB_0__::func_75(&uLocal_119) && __LIB_0__::func_265(&uLocal_119) > 1f)
	{
		iVar10 = 20;
		vVar3 = { __LIB_4__::func_147(Global_36, __LIB_10__::func_45(Local_248.f_300)) };
		vVar3 = { __LIB_4__::func_147(Global_36, vVar3) };
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if (__LIB_0__::func_86(vVar0))
			{
				if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vVar3, iVar9, &vVar6, 1, 1077936128 /* Float: 3f */, 0))
				{
					fVar11 = __LIB_0__::func_94(Global_35, vVar6, 1);
					if (fVar11 < 200f && fVar11 > 50f)
					{
						if (PATHFIND::IS_NAVMESH_LOADED_IN_AREA(vVar6 + Vector(-2f, -2f, -2f), vVar6 + Vector(2f, 2f, 2f)))
						{
							vVar0 = { vVar6 };
						}
						else
						{
							vVar6 = { 0f, 0f, 0f };
						}
					}
					else
					{
						vVar6 = { 0f, 0f, 0f };
					}
				}
			}
			iVar9++;
		}
		__LIB_1__::func_148(&uLocal_119);
	}
	return vVar0;
}

bool func_1153(var uParam0, vector3 vParam1)
{
	int iVar0;
	if (iLocal_69 == Local_199)
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_199[iLocal_69 /*16*/]))
	{
		Local_199[iLocal_69 /*16*/] = __LIB_8__::func_931(joaat("G_M_Y_UNIEXCONFEDS_01"), vParam1 + Vector(IntToFloat(iLocal_69), IntToFloat(iLocal_69 * 1), IntToFloat(iLocal_69 * 1)), 0, 1, 1, 0, 1, 1, 1, 0, 0, 1, 1);
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_676[iLocal_69]))
	{
		switch (iLocal_69)
		{
			case 0:
				iVar0 = joaat("A_C_HORSE_NOKOTA_WHITEROAN");
				break;
			case 1:
				iVar0 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
				break;
			case 2:
				iVar0 = joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO");
				break;
		}
		iLocal_676[iLocal_69] = __LIB_8__::func_931(iVar0, vParam1 + Vector(IntToFloat(iLocal_69), IntToFloat(iLocal_69 * 1), IntToFloat(iLocal_69 * 1)), 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		__LIB_1__::func_991(iLocal_676[iLocal_69], 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_676[iLocal_69], 6, true);
	}
	else if (!__LIB_0__::func_27(Local_199[iLocal_69 /*16*/].f_5, 2))
	{
		PED::_SET_PED_ON_MOUNT(Local_199[iLocal_69 /*16*/], iLocal_676[iLocal_69], -1, true);
		ENTITY::_0x9587913B9E772D29(iLocal_676[iLocal_69], 0);
		PED::SET_PED_ACCURACY(Local_199[iLocal_69 /*16*/], 30);
		WEAPON::REMOVE_ALL_PED_WEAPONS(Local_199[iLocal_69 /*16*/], true, true);
		__LIB_4__::func_7(Local_199[iLocal_69 /*16*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 2, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		if (iLocal_69 == 0)
		{
			if (__LIB_0__::func_214(joaat("WEAPON_SHOTGUN_DOUBLEBARREL")))
			{
				__LIB_1__::func_766(Local_199[iLocal_69 /*16*/], joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			}
			else
			{
				__LIB_1__::func_766(Local_199[iLocal_69 /*16*/], joaat("WEAPON_REPEATER_CARBINE"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			}
		}
		else if (__LIB_0__::func_214(joaat("WEAPON_RIFLE_BOLTACTION")))
		{
			__LIB_1__::func_766(Local_199[iLocal_69 /*16*/], joaat("WEAPON_RIFLE_BOLTACTION"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_766(Local_199[iLocal_69 /*16*/], joaat("WEAPON_REPEATER_CARBINE"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_199[iLocal_69 /*16*/], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_199[iLocal_69 /*16*/], joaat("REL_PLAYER_ENEMY"));
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_199[iLocal_69 /*16*/], 1);
		PED::SET_PED_CONFIG_FLAG(Local_199[iLocal_69 /*16*/], 6, true);
		ENTITY::_0x18FF3110CF47115D(Local_199[iLocal_69 /*16*/], 1, 0);
		__LIB_9__::func_233(Local_199[iLocal_69 /*16*/], Global_35);
		__LIB_1__::func_683(&(Local_199[iLocal_69 /*16*/].f_5), 2);
		iLocal_69++;
	}
	return false;
}

void func_1154(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
		{
			iParam1->f_13 = __LIB_0__::func_665(*iParam1, Global_35, 1, 1);
			if (!__LIB_0__::func_27(iParam1->f_5, 16))
			{
				if (__LIB_0__::func_27(iLocal_65, 524288))
				{
					__LIB_13__::func_118(iParam1, 11, 0, 0);
					__LIB_1__::func_683(&(iParam1->f_5), 16);
				}
			}
			switch (iParam1->f_2)
			{
				case 6:
					if (iParam1->f_3 == 0)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
						TASK::TASK_GO_TO_ENTITY(*iParam1, Global_35, 120000, (0.5f * 60f), 2.5f, 10f, 0);
						iParam1->f_3 = 1;
					}
					else
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 1227113341, true) == 8)
						{
							__LIB_13__::func_118(iParam1, 6, 0, 0);
						}
						if (iParam1->f_13 < 50f || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*iParam1, true, false), 25f, true))
						{
							__LIB_13__::func_118(iParam1, 8, 0, 0);
						}
					}
					break;
				case 8:
					if (iParam1->f_3 == 0)
					{
						__LIB_13__::func_138(iParam1, 0);
						__LIB_1__::func_683(&iLocal_65, 262144);
						__LIB_1__::func_681(&iLocal_65, 1048576);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
						TASK::TASK_COMBAT_PED(*iParam1, Global_35, 16777216, 0);
						iParam1->f_3 = 1;
					}
					else if (PED::IS_PED_ON_MOUNT(*iParam1))
					{
						if (iParam1->f_13 > 165f)
						{
							__LIB_13__::func_118(iParam1, 11, 0, 0);
						}
					}
					else if (iParam1->f_13 > 125f)
					{
						__LIB_13__::func_118(iParam1, 11, 0, 0);
					}
					break;
				case 11:
					if (iParam1->f_3 == 0)
					{
						__LIB_0__::func_325(&(iParam1->f_1));
						__LIB_1__::func_683(&(iParam1->f_5), 16);
						PED::REMOVE_PED_DEFENSIVE_AREA(*iParam1, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 17, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 5, false);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam1, 2, false);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam1, 1024, true);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam1, 128, true);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam1, 1048576, false);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam1, 0, true);
						PED::SET_PED_KEEP_TASK(*iParam1, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
						TASK::TASK_SMART_FLEE_PED(*iParam1, Global_35, 200f, -1, 0, 2f, 0);
						TASK::_0xE8F1A5B4CED3725A(*iParam1, __LIB_10__::func_45(Local_248.f_300), -1082130432 /* Float: -1f */);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam1);
						if (ENTITY::DOES_ENTITY_EXIST(iParam2) && !ENTITY::IS_ENTITY_DEAD(iParam2))
						{
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam2);
						}
						iParam1->f_3 = 1;
					}
					break;
			}
		}
		else
		{
			__LIB_0__::func_325(&(iParam1->f_1));
			if (!__LIB_0__::func_27(iParam1->f_5, 1))
			{
				__LIB_1__::func_683(&(iParam1->f_5), 1);
			}
		}
		if (!__LIB_0__::func_27(iParam1->f_5, 512))
		{
			if (__LIB_0__::func_27(iLocal_65, 16384))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam2) && !ENTITY::IS_ENTITY_DEAD(iParam2))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(PED::_GET_RIDER_OF_MOUNT(iParam2, false)) || __LIB_0__::func_27(iParam1->f_5, 1))
					{
						PED::SET_PED_KEEP_TASK(iParam2, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam2, false);
						TASK::TASK_SMART_FLEE_PED(iParam2, Global_35, 200f, -1, 0, 3f, 0);
						TASK::_0xE8F1A5B4CED3725A(*iParam1, __LIB_10__::func_45(Local_248.f_300), -1082130432 /* Float: -1f */);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam2);
						__LIB_1__::func_683(&(iParam1->f_5), 512);
					}
				}
			}
		}
	}
}

void func_1155(int iParam0)
{
	if (!__LIB_0__::func_27(iParam0->f_5, 4) && !__LIB_0__::func_27(iParam0->f_5, 32))
	{
		if (PED::IS_PED_IN_COVER(Global_35, false, false) == 1 || PED::_GET_PED_CROUCH_MOVEMENT(Global_35) == 1)
		{
			if (__LIB_0__::func_27(iParam0->f_5, 2048))
			{
				__LIB_1__::func_681(&(iParam0->f_5), 1024);
				__LIB_1__::func_681(&(iParam0->f_5), 2048);
			}
			if (!__LIB_0__::func_27(iParam0->f_5, 1024))
			{
				if (__LIB_0__::func_27(iLocal_65, 16777216))
				{
					__LIB_2__::func_698(*iParam0, 10f, 1.5f, 60f, -60f, 60f);
				}
				else
				{
					__LIB_2__::func_698(*iParam0, 25f, 2.5f, 90f, -75f, 75f);
				}
				__LIB_1__::func_683(&(iParam0->f_5), 1024);
			}
		}
		else
		{
			if (__LIB_0__::func_27(iParam0->f_5, 1024))
			{
				__LIB_1__::func_681(&(iParam0->f_5), 1024);
				__LIB_1__::func_681(&(iParam0->f_5), 2048);
			}
			if (!__LIB_0__::func_27(iParam0->f_5, 2048))
			{
				if (__LIB_0__::func_27(iLocal_65, 16777216))
				{
					__LIB_2__::func_698(*iParam0, 35f, 3f, 100f, -80f, 80f);
				}
				else
				{
					__LIB_2__::func_698(*iParam0, 1114636288 /* Float: 60f */, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
				}
				__LIB_1__::func_683(&(iParam0->f_5), 2048);
			}
		}
	}
	else if (!PED::IS_PED_IN_COMBAT(*iParam0, 0))
	{
		if (__LIB_0__::func_27(iParam0->f_5, 1024))
		{
			__LIB_1__::func_681(&(iParam0->f_5), 1024);
			__LIB_1__::func_681(&(iParam0->f_5), 2048);
		}
		if (!__LIB_0__::func_27(iParam0->f_5, 2048))
		{
			if (__LIB_0__::func_27(iLocal_65, 16777216))
			{
				__LIB_2__::func_698(*iParam0, 20f, 3f, 100f, -80f, 80f);
			}
			else
			{
				__LIB_2__::func_698(*iParam0, 1114636288 /* Float: 60f */, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
			}
			__LIB_1__::func_683(&(iParam0->f_5), 2048);
		}
	}
	else if (!__LIB_0__::func_27(iParam0->f_5, 4096))
	{
		__LIB_2__::func_698(*iParam0, 1114636288 /* Float: 60f */, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
		__LIB_1__::func_683(&(iParam0->f_5), 4096);
	}
}

bool func_1156(int iParam0, var uParam1, int iParam2)
{
	if (func_1685(*iParam0, uParam1, iParam2, 0))
	{
		if (*iParam2 == 131072)
		{
			__LIB_1__::func_683(&iLocal_65, 512);
		}
		return true;
	}
	if (__LIB_0__::func_27(iLocal_65, 16384))
	{
		return true;
	}
	if (__LIB_0__::func_27(iLocal_65, 16))
	{
		return true;
	}
	if (__LIB_2__::func_385(Global_35) && iParam0->f_13 < 10f)
	{
		return true;
	}
	if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(*iParam0, false, false), 30f))
	{
		return true;
	}
	if (FIRE::_IS_EXPLOSION_IN_VOLUME(-1, iLocal_684[2]))
	{
		return true;
	}
	return false;
}

bool func_1158(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam1 == 0)
	{
		return (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, 0, false) && iVar0 == joaat("WEAPON_MELEE_LANTERN"));
	}
	return (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, 1, false) && iVar0 == joaat("WEAPON_MELEE_LANTERN"));
}

void func_1163(int iParam0)
{
	int iVar0;
	int iVar1;
	*iParam0 = -1;
	if (func_1156(&(Local_150[iLocal_66 /*16*/]), &uLocal_638, &iLocal_666))
	{
		if (iLocal_666 == 131072)
		{
			__LIB_1__::func_683(&iLocal_65, 512);
		}
		*iParam0 = iLocal_66;
	}
	iLocal_66++;
	if (iLocal_66 >= Local_150)
	{
		iLocal_66 = 0;
	}
	if (*iParam0 != -1)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_134) && ENTITY::IS_ENTITY_DEAD(Local_134))
	{
		iVar1 = 0;
		while (iVar1 < Local_150)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_150[iVar1 /*16*/]) && !ENTITY::IS_ENTITY_DEAD(Local_150[iVar1 /*16*/]))
			{
				*iParam0 = iVar1;
				iLocal_666 = 128;
				return;
			}
			iVar1++;
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_150)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_150[iVar0 /*16*/]) && ENTITY::IS_ENTITY_DEAD(Local_150[iVar0 /*16*/]))
		{
			iVar1 = 0;
			while (iVar1 < Local_150)
			{
				if (iVar1 == iVar0)
				{
				}
				else if (ENTITY::DOES_ENTITY_EXIST(Local_150[iVar1 /*16*/]) && !ENTITY::IS_ENTITY_DEAD(Local_150[iVar1 /*16*/]))
				{
					*iParam0 = iVar1;
					iLocal_666 = 128;
					return;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_1167(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		*iParam4 = __LIB_3__::func_326(iParam0, vParam1, iParam5, iParam6);
	}
	iVar1 = 1;
	iVar0 = 1;
	if (bParam7)
	{
		if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iParam8))
		{
			iVar1 = 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		iVar0 = func_1689(iParam4, 1);
	}
	return (iVar1 && iVar0);
}

void func_1212(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_1583(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

int func_1247(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1247(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

void func_1349(int iParam0, char* sParam1)
{
	char* sVar0;
	sVar0 = __LIB_0__::func_454(__LIB_0__::func_453(0));
	__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1840(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_1358()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1847(0);
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
	func_1847(1);
}

void func_1359()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_809(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1360()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1850(0);
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
	func_1850(1);
}

void func_1361()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1850(0);
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
	func_1850(1);
}

void func_1362()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_809(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_809(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1247(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1247(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1397(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1885(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_809(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

int func_1410()
{
	if (__LIB_0__::func_28())
	{
		if (!__LIB_1__::func_185(3))
		{
			return __LIB_0__::func_559(43);
		}
		if (__LIB_1__::func_185(38) && !__LIB_1__::func_185(43))
		{
			return func_1892(8);
		}
	}
	return 0;
}

bool func_1411(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	return ((Global_1888801[iParam0 /*35*/].f_20 == 1 || Global_1888801[iParam0 /*35*/].f_20 == 2) && !func_1893(iParam0));
}

void func_1575()
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
	iVar0 = func_1988(6291456, 0);
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

void func_1583(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1583(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1583(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_1627(var uParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	char cVar1[64];
	int iVar9;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2))
		{
			StringCopy(&cVar1, uParam0->f_3[iVar0 /*13*/].f_9, 64);
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
			{
				cVar1 = { func_2010(uParam0, uParam0->f_3[iVar0 /*13*/].f_2) };
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar1) && ANIMSCENE::_0x6F1F0B17109309DA(iParam1, &cVar1))
			{
				iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2);
				if (PED::IS_PED_HUMAN(iVar9) && iVar9 != Global_35)
				{
					__LIB_4__::func_640(iVar9, Global_35, uParam2, uParam3);
				}
			}
		}
		iVar0++;
	}
}

void func_1629(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	float fVar19;
	int iVar20;
	vector3 vVar21;
	if (uParam0->f_371[iParam2 /*18*/].f_4 < 0)
	{
		return;
	}
	iVar0 = uParam0->f_371[iParam2 /*18*/].f_4;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1418[iVar0 /*10*/].f_8))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_1418[iVar0 /*10*/].f_8, true, false))
		{
			func_1655(uParam0, uParam0->f_1418[iVar0 /*10*/].f_8);
			ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(uParam0->f_1418[iVar0 /*10*/].f_8, &vVar1, &vVar4, 2);
			if (__LIB_0__::func_129(&(uParam0->f_1418[iVar0 /*10*/]), 1))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_1418[iVar0 /*10*/].f_8, __LIB_0__::func_731(Global_35), &vVar7, false, 0, 2))
				{
					fVar19 = (__LIB_0__::func_152(vVar1, Global_36, 1) - __LIB_0__::func_152(vVar1, vVar7, 1));
					vVar4.f_2 = (vVar4.z + fVar19);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1418[iVar0 /*10*/].f_8, vVar1, vVar4, 2);
				}
			}
			if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1418[iVar0 /*10*/].f_8, __LIB_0__::func_731(Global_35)) && uParam0->f_371[iParam2 /*18*/].f_17 != 0)
			{
				if ((__LIB_0__::func_78(uParam0) > 3 && !__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_371[iParam2 /*18*/] /*41*/]), 16)) && !__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_371[iParam2 /*18*/] /*41*/]), 32768))
				{
					__LIB_12__::func_880(uParam0, 1);
				}
				if (uParam0->f_1795)
				{
					if (__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_371[iParam2 /*18*/] /*41*/]), 128))
					{
					}
					else
					{
						__LIB_12__::func_693(uParam0, 131072);
						return;
					}
				}
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_1418[iVar0 /*10*/].f_8, false))
			{
				if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1418[iVar0 /*10*/].f_8, "b_PlayerArthur"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_1418[iVar0 /*10*/].f_8, "b_PlayerArthur", !__LIB_0__::func_181(), false);
				}
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_1418[iVar0 /*10*/].f_8);
				if (uParam0->f_371[iParam2 /*18*/].f_17 == 0)
				{
					__LIB_4__::func_647(&(uParam0->f_1418[iVar0 /*10*/]), 128);
					if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_1418[iVar0 /*10*/].f_8, "pl_breakout"))
					{
						__LIB_4__::func_712(uParam0->f_1418[iVar0 /*10*/].f_8, 10000, 0, -1, 0);
					}
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam0->f_1418[iVar0 /*10*/].f_8))
			{
				ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam0->f_1418[iVar0 /*10*/].f_8, false);
			}
			if (__LIB_0__::func_84(&(uParam0->f_371[iParam2 /*18*/]), 4))
			{
				uParam0->f_1581 = iParam2;
				if (((((__LIB_0__::func_81(uParam0) == 0 && !CAM::_0x81DCFD13CF39920E()) && uParam0->f_371[iParam2 /*18*/].f_17 == 1) && uParam0->f_371[iParam2 /*18*/] < 8) && !__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_371[iParam2 /*18*/] /*41*/]), 32768)) && !__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_371[iParam2 /*18*/] /*41*/]), 524288))
				{
					CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
					__LIB_12__::func_709(uParam0, 64);
				}
			}
			iVar20 = 0;
			while (iVar20 < 27)
			{
				if ((uParam0->f_3[iVar20 /*13*/] && uParam0->f_3[iVar20 /*13*/].f_8 > 0f) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar20 /*13*/].f_2))
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3[iVar20 /*13*/].f_2, false);
				}
				iVar20++;
			}
			if ((ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1418[iVar0 /*10*/].f_8, __LIB_0__::func_731(Global_35)) && uParam0->f_371[iParam2 /*18*/].f_17 != 0) && !__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_371[iParam2 /*18*/] /*41*/]), 32768))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_1418[iVar0 /*10*/].f_8, __LIB_0__::func_731(Global_35), &vVar21, false, 0, 2) && !__LIB_0__::func_86(vVar21))
				{
					__LIB_12__::func_881(uParam0, 0);
				}
			}
			uParam0->f_371[iParam2 /*18*/].f_7 = 1;
		}
	}
}

bool func_1647(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (!ITEMSET::IS_ITEMSET_VALID(uParam0->f_1817))
	{
		uParam0->f_1817 = ITEMSET::CREATE_ITEMSET(true);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2))
		{
			if (((__LIB_4__::func_649(iParam1) && !uParam0->f_3[iVar0 /*13*/]) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2) == Global_35)
			{
				iParam1 = ENTITY::GET_ENTITY_MODEL(Global_35);
			}
			if (ENTITY::GET_ENTITY_MODEL(uParam0->f_3[iVar0 /*13*/].f_2) == iParam1)
			{
				if (!uParam0->f_3[iVar0 /*13*/])
				{
					uParam0->f_3[iVar0 /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3[iVar0 /*13*/].f_2);
					*iParam2 = iVar0;
					if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1817))
					{
						ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1817);
					}
					return true;
				}
			}
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[iVar0 /*13*/].f_9))
			{
				if (MISC::ARE_STRINGS_EQUAL(uParam0->f_3[iVar0 /*13*/].f_9, __LIB_0__::func_140(iParam1)))
				{
					if (!uParam0->f_3[iVar0 /*13*/])
					{
						uParam0->f_3[iVar0 /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3[iVar0 /*13*/].f_2);
						*iParam2 = iVar0;
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1817))
						{
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1817);
						}
						return true;
					}
				}
			}
			if (ENTITY::IS_ENTITY_AN_OBJECT(uParam0->f_3[iVar0 /*13*/].f_2) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[iVar0 /*13*/].f_9))
			{
				if (MISC::ARE_STRINGS_EQUAL(uParam0->f_3[iVar0 /*13*/].f_9, func_2024(iParam1)))
				{
					if (!uParam0->f_3[iVar0 /*13*/])
					{
						uParam0->f_3[iVar0 /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3[iVar0 /*13*/].f_2);
						*iParam2 = iVar0;
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1817))
						{
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1817);
						}
						return true;
					}
				}
			}
		}
		else if (STREAMING::IS_MODEL_VALID(iParam1))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[iVar0 /*13*/].f_9)) && MISC::_DOES_STRING_EXIST_IN_STRING(uParam0->f_3[iVar0 /*13*/].f_9, "^"))
		{
			if ((ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && STREAMING::IS_MODEL_A_PED(iParam1)) && !MISC::IS_STRING_NULL_OR_EMPTY(__LIB_0__::func_140(iParam1)))
			{
				if (MISC::_DOES_STRING_EXIST_IN_STRING(uParam0->f_3[iVar0 /*13*/].f_9, __LIB_0__::func_140(iParam1)))
				{
					if (!uParam0->f_3[iVar0 /*13*/])
					{
						uParam0->f_3[iVar0 /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3[iVar0 /*13*/].f_2);
						*iParam2 = iVar0;
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1817))
						{
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1817);
						}
						return true;
					}
				}
			}
			if ((ENTITY::IS_ENTITY_AN_OBJECT(uParam0->f_3[iVar0 /*13*/].f_2) && STREAMING::_0x274EE1B90CFA669E(iParam1)) && !MISC::IS_STRING_NULL_OR_EMPTY(func_2024(iParam1)))
			{
				if (MISC::_DOES_STRING_EXIST_IN_STRING(uParam0->f_3[iVar0 /*13*/].f_9, func_2024(iParam1)))
				{
					if (!uParam0->f_3[iVar0 /*13*/])
					{
						uParam0->f_3[iVar0 /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3[iVar0 /*13*/].f_2);
						*iParam2 = iVar0;
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1817))
						{
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1817);
						}
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_1655(var uParam0, int iParam1)
{
	int iVar0;
	char cVar1[64];
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2))
		{
			StringCopy(&cVar1, uParam0->f_3[iVar0 /*13*/].f_9, 64);
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
			{
				cVar1 = { func_2010(uParam0, uParam0->f_3[iVar0 /*13*/].f_2) };
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
			{
				if (ANIMSCENE::_0x6F1F0B17109309DA(iParam1, &cVar1))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1, &cVar1, uParam0->f_3[iVar0 /*13*/].f_2, 0);
					if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2) != Global_35)
					{
						PED::SET_PED_CAN_BE_TARGETTED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2), false);
					}
				}
				else if (__LIB_4__::func_649(uParam0->f_3[iVar0 /*13*/].f_1))
				{
					if (__LIB_0__::func_181())
					{
						StringCopy(&cVar1, __LIB_0__::func_140(joaat("PLAYER_ZERO")), 64);
						if (ANIMSCENE::_0x6F1F0B17109309DA(iParam1, &cVar1))
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1, &cVar1, uParam0->f_3[iVar0 /*13*/].f_2, 0);
						}
					}
					else
					{
						StringCopy(&cVar1, __LIB_0__::func_140(joaat("PLAYER_THREE")), 64);
						if (ANIMSCENE::_0x6F1F0B17109309DA(iParam1, &cVar1))
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1, &cVar1, uParam0->f_3[iVar0 /*13*/].f_2, 0);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1662(int iParam0)
{
	int iVar0;
	int iVar1;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!__LIB_0__::func_797(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_398(iParam0);
	func_2025(iParam0);
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (PED::_0xAA9F048DCF69B6DC(iVar1))
	{
		if (!__LIB_1__::func_1(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, false);
		}
	}
	PED::DELETE_PED(&iVar0);
	__LIB_0__::func_835(iParam0, 0);
	__LIB_0__::func_836(iParam0);
}

bool func_1685(int iParam0, var uParam1, int iParam2, float fParam3)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_5)
	{
		__LIB_2__::func_899(uParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		uParam1->f_12 = fParam3;
	}
	else
	{
		uParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam1->f_1 & 2 != 0)
			{
				if (__LIB_1__::func_331(uParam1, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && __LIB_1__::func_328(uParam1, iParam0)) && __LIB_2__::func_832(uParam1, iParam0))
					{
						__LIB_0__::func_11();
						*iParam2 = 2;
						__LIB_2__::func_831(iParam0, uParam1, *iParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_1 & 2 != 0)
		{
			if (uParam1->f_12 < 4f)
			{
				if (__LIB_1__::func_331(uParam1, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && __LIB_1__::func_328(uParam1, iParam0)) && __LIB_2__::func_832(uParam1, iParam0))
					{
						__LIB_0__::func_11();
						*iParam2 = 2;
						__LIB_2__::func_831(iParam0, uParam1, *iParam2);
						return true;
					}
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam1 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*iParam2 = 2;
								__LIB_2__::func_831(iParam0, uParam1, *iParam2);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_41 != 0)
			{
				if (Global_1935630.f_40 == 0)
				{
					if (*uParam1 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*iParam2 = 2;
							__LIB_2__::func_831(iParam0, uParam1, *iParam2);
							return true;
						}
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam1 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*iParam2 = 2;
							__LIB_2__::func_831(iParam0, uParam1, *iParam2);
							return true;
						}
					}
				}
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_1__::func_395(uParam1, 1065353216 /* Float: 1f */))
			{
				if (!uParam1->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_875(Global_35, iParam0, uParam1))
					{
						__LIB_0__::func_11();
						*iParam2 = 4;
						__LIB_2__::func_831(iParam0, uParam1, *iParam2);
						return true;
					}
				}
				if (!uParam1->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam1))
					{
						__LIB_0__::func_11();
						*iParam2 = 256;
						__LIB_2__::func_831(iParam0, uParam1, *iParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_1 & 131072 != 0)
		{
			if (__LIB_9__::func_660(iParam0, uParam1))
			{
				__LIB_0__::func_11();
				*iParam2 = 131072;
				__LIB_2__::func_831(iParam0, uParam1, *iParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (__LIB_4__::func_138(iParam0, uParam1))
			{
				__LIB_0__::func_11();
				*iParam2 = 262144;
				__LIB_2__::func_831(iParam0, uParam1, *iParam2);
				return true;
			}
		}
	}
	return false;
}

int func_1689(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = TASK::_0x640A602946A8C972(*iParam0);
	iVar1 = TASK::_0x849791EBBDBA0362(*iParam0);
	iVar2 = TASK::_0x01AF8A3729231A43(*iParam0);
	if (iVar2 <= 0)
	{
		if (bParam1)
		{
			if (iVar1 >= iVar0)
			{
				return 1;
			}
		}
		else if (iVar1 >= 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_1840(int iParam0)
{
	var uVar0;
	if (!func_2154(iParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

void func_1847(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_809(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_809(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_809(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2156(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_812(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1247(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2161(Var0);
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

void func_1850(bool bParam0)
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
		func_809(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_809(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_809(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_809(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_809(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_809(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_809(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_809(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_809(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_809(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_809(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1247(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1247(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1247(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1247(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1247(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1247(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1247(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1247(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1247(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1247(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1247(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1885(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1885(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1885(iVar63, -915411861, 1, 0, 0));
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

int func_1892(int iParam0)
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
			break;
		case 1:
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
			break;
		case 2:
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
			break;
		case 3:
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
			break;
		case 4:
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
			break;
		case 7:
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
			break;
		case 6:
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
			break;
		case 5:
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
			break;
		case 8:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GUARMA");
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			break;
		case 9:
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
bool func_1893(int iParam0)
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

int func_1988(int iParam0, int iParam1)
{
	var uVar0;
	return func_2208(&uVar0, iParam0, iParam1);
}

struct<8> func_2010(var uParam0, int iParam1)
{
	char cVar0[64];
	int iVar8;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		StringCopy(&cVar0, func_2219(iParam1), 64);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
		{
			iVar8 = __LIB_0__::func_174(uParam0, iParam1);
			if (iVar8 > 0)
			{
				StringConCat(&cVar0, "^", 64);
				StringIntConCat(&cVar0, iVar8, 64);
			}
		}
	}
	return cVar0;
}

char* func_2024(int iParam0)
{
	switch (iParam0)
	{
		case joaat("P_CS_LEDGER01X"):
			return "P_CS_LEDGER01X";
		case joaat("P_CS_ROPE01X"):
			return "P_CS_ROPE01X";
		case joaat("P_DOOR01X"):
			return "P_DOOR01X";
		case joaat("P_DOOR03X"):
			return "P_DOOR03X";
		case joaat("P_DOOR12X"):
			return "p_door12x";
		case joaat("P_DOOR13X"):
			return "P_DOOR13X";
		case joaat("P_DOOR45X"):
			return "p_door45x";
		case joaat("P_CHAIRVICTORIAN01X"):
			return "p_chairvictorian01x";
		case joaat("P_CRATE03X"):
			return "p_crate03x";
		case joaat("P_CS_JUG01X"):
			return "p_cs_jug01x";
		case joaat("P_CS_WAGON02X"):
			return "p_cs_wagon02x";
		case joaat("P_DOOR37X"):
			return "P_DOOR37X";
		case joaat("P_DOOR_VAL_GENSTORE"):
			return "p_door_val_genstore";
		case joaat("P_DOORSTRAWBERRY01X"):
			return "p_doorstrawberry01x";
		case joaat("P_DOORFRENCH01L"):
			return "p_doorfrench01l";
		case joaat("P_DOORFRENCH01R"):
			return "p_doorfrench01r";
		case joaat("P_DOORMANSIONGATE01X"):
			return "p_doormansiongate01x";
		case joaat("P_DOORNBD39X"):
			return "p_doornbd39x";
		case joaat("P_DOORSALOON02X"):
			return "p_doorsaloon02x";
		case joaat("P_DOORVH_SALOON_L"):
			return "P_DOORVH_SALOON_L";
		case joaat("P_DOORVH_SALOON_R"):
			return "P_DOORVH_SALOON_R";
		case joaat("P_CIGARLIT01X"):
			return "p_cigarlit01x";
		case joaat("P_PEBBLE01X"):
			return "p_pebble01x";
		case joaat("P_CS_ROPE03X"):
			return "p_cs_rope03x";
		case joaat("P_CARDS01X"):
			return "P_CARDS01X";
		case joaat("P_CS_POKERHAND01X"):
			return "P_CS_POKERHAND01X";
		case joaat("P_CS_POKERHAND02X"):
			return "P_CS_POKERHAND02X";
		case joaat("P_CS_HOLDEMHAND01X"):
			return "P_CS_HOLDEMHAND01X";
		case joaat("P_CS_HOLDEMHAND02X"):
			return "P_CS_HOLDEMHAND02X";
		case joaat("P_CS_BUCKET01X"):
			return "P_CS_BUCKET01X";
		case joaat("P_CS_SYRINGE01X"):
			return "p_cs_syringe01x";
		case joaat("P_BOTTLEJD01X"):
			return "p_bottleJD01x";
		case joaat("P_RAG02X"):
			return "p_rag02x";
		case joaat("P_MAGNETO02X"):
			return "p_magneto02x";
		case joaat("P_MAGNETO01X"):
			return "p_magneto01x";
		case joaat("P_CS_WANTEDALIVE01X"):
			return "p_cs_wantedalive01x";
		case joaat("P_CS_RCRIDETHELIGHTNING"):
			return "P_CS_RCRIDETHELIGHTNING";
		case joaat("P_PEN01X"):
			return "p_pen01x";
			Jump @4269; //curOff = 1989
			return "p_cs_letter01a_x";
			Jump @4269; //curOff = 1999
			return "p_cs_electricchair01x";
			Jump @4269; //curOff = 2009
			return "p_cs_generator01x";
			Jump @4269; //curOff = 2019
			return "p_cs_electricHelmet01x";
			Jump @4269; //curOff = 2029
			return "p_cs_gag01x";
			Jump @4269; //curOff = 2039
			return "p_door_sha_man01x";
			Jump @4269; //curOff = 2049
			return "p_stool01x";
			Jump @4269; //curOff = 2059
			return "p_stool02x";
			Jump @4269; //curOff = 2069
			return "p_jugglingball01x";
			Jump @4269; //curOff = 2079
			return "p_chair02x";
			Jump @4269; //curOff = 2089
			return "p_chair04x";
			Jump @4269; //curOff = 2099
			return "p_crate15x";
			Jump @4269; //curOff = 2109
			return "p_cleaver01x";
			Jump @4269; //curOff = 2119
			return "p_bottle003x";
			Jump @4269; //curOff = 2129
			return "p_cs_book02x";
			Jump @4269; //curOff = 2139
			return "p_stickydymt_single";
			Jump @4269; //curOff = 2149
			return "p_cs_fusedynamite01x";
			Jump @4269; //curOff = 2159
			return "p_dynamite01x";
			Jump @4269; //curOff = 2169
			return "p_cs_fusespool01x";
			Jump @4269; //curOff = 2179
			return "p_cs_detonator01x";
			Jump @4269; //curOff = 2189
			return "p_cs_bedrollclsd01x";
			Jump @4269; //curOff = 2199
			return "P_CIGARETTE_CS01X";
			Jump @4269; //curOff = 2209
			return "P_MATCHES01X";
			Jump @4269; //curOff = 2219
			return "P_MATCHSTICK01X";
			Jump @4269; //curOff = 2229
			return "P_WOODENCHAIR01X";
			Jump @4269; //curOff = 2239
			return "P_CHAIR_CRATE02X";
			Jump @4269; //curOff = 2249
			return "p_knittingneedle01x";
			Jump @4269; //curOff = 2259
			return "p_knittingsquare01x";
			Jump @4269; //curOff = 2269
			return "p_cs_rabbitMeat01x";
			Jump @4269; //curOff = 2279
			return "p_cs_rabbitMeat02x";
			Jump @4269; //curOff = 2289
			return "p_bottle03x";
			Jump @4269; //curOff = 2299
			return "p_cs_billstack01x";
			Jump @4269; //curOff = 2309
			return "p_cs_billSingle01x";
			Jump @4269; //curOff = 2319
			return "p_binoculars01x";
			Jump @4269; //curOff = 2329
			return "p_doorrhosheriff02x";
			Jump @4269; //curOff = 2339
			return "P_BARSTOOL01X";
			Jump @4269; //curOff = 2349
			return "p_cs_shotglass01x";
			Jump @4269; //curOff = 2359
			return "p_lamp18x";
			Jump @4269; //curOff = 2369
			return "p_clock06x";
			Jump @4269; //curOff = 2379
			return "p_bottle02x";
			Jump @4269; //curOff = 2389
			return "p_cs_lootSack01x";
			Jump @4269; //curOff = 2399
			return "p_wineBox01x";
			Jump @4269; //curOff = 2409
			return "p_strongBox01x";
			Jump @4269; //curOff = 2419
			return "P_CLOCKTABLE02X";
			Jump @4269; //curOff = 2429
			return "p_gen_statue03b";
			Jump @4269; //curOff = 2439
			return "P_STOOLWINTER01X";
			Jump @4269; //curOff = 2449
			return "P_CS_BARRAG01X";
			Jump @4269; //curOff = 2459
			return "P_PLATE01X";
			Jump @4269; //curOff = 2469
			return "P_KNIFE01X";
			Jump @4269; //curOff = 2479
			return "P_KNIFE02X";
			Jump @4269; //curOff = 2489
			return "P_CS_CATFISH_WHOLE01X";
			Jump @4269; //curOff = 2499
			return "P_CS_CATFISH_WHOLE01BX";
			Jump @4269; //curOff = 2509
			return "P_WOODWHITTLE01X";
			Jump @4269; //curOff = 2519
			return "P_STICKFIREPOKER01X";
			Jump @4269; //curOff = 2529
			return "P_CS_WOODPILE01X";
			Jump @4269; //curOff = 2539
			return "P_FORK01X";
			Jump @4269; //curOff = 2549
			return "P_KNIFE04X";
			Jump @4269; //curOff = 2559
			return "p_knife03x";
			Jump @4269; //curOff = 2569
			return "P_CS_BOTTLESLIM01X";
			Jump @4269; //curOff = 2579
			return "P_CS_BLANKET01X";
			Jump @4269; //curOff = 2589
			return "P_BEDROLLCLOSED01X";
			Jump @4269; //curOff = 2599
			return "P_CS_KINDLING01X";
			Jump @4269; //curOff = 2609
			return "P_CIGARTHIN01X";
			Jump @4269; //curOff = 2619
			return "p_door_wglass01x";
			Jump @4269; //curOff = 2629
			return "p_broom02x";
			Jump @4269; //curOff = 2639
			return "P_AMB_CLIPBOARD_01";
			Jump @4269; //curOff = 2649
			return "P_CHAIR07X";
			Jump @4269; //curOff = 2659
			return "p_cs_cratetnt01x";
			Jump @4269; //curOff = 2669
			return "p_cs_flourbag01x";
			Jump @4269; //curOff = 2679
			return "p_cs_supplies01x";
			Jump @4269; //curOff = 2689
			return "p_cs_supplies02x";
			Jump @4269; //curOff = 2699
			return "p_cs_supplies03x";
			Jump @4269; //curOff = 2709
			return "p_door04x";
			Jump @4269; //curOff = 2719
			return "p_door11x";
			Jump @4269; //curOff = 2729
			return "p_doorrhosaloon01_l";
			Jump @4269; //curOff = 2739
			return "p_doorrhosaloon01_r";
			Jump @4269; //curOff = 2749
			return "P_VAL_GATE2M02X";
			Jump @4269; //curOff = 2759
			return "P_CS_STMDNKY01X";
			Jump @4269; //curOff = 2769
			return "P_CS_HOOKPULLEY01X";
			Jump @4269; //curOff = 2779
			return "P_CHAIR_CS05X";
			Jump @4269; //curOff = 2789
			return "P_CHAIR_18X";
			Jump @4269; //curOff = 2799
			return "P_CHAIR19X";
			Jump @4269; //curOff = 2809
			return "P_CHAIR20X";
			Jump @4269; //curOff = 2819
			return "P_CHAIR05X";
			Jump @4269; //curOff = 2829
			return "p_chair22x";
			Jump @4269; //curOff = 2839
			return "p_glass01x";
			Jump @4269; //curOff = 2849
			return "P_DININGCHAIRS01X";
			Jump @4269; //curOff = 2859
			return "P_WINDSORCHAIR03X";
			Jump @4269; //curOff = 2869
			return "P_WINDSORCHAIR02X";
			Jump @4269; //curOff = 2879
			return "p_door_val_jail02x";
			Jump @4269; //curOff = 2889
			return "P_CRATETNT01X";
			Jump @4269; //curOff = 2899
			return "P_CRATETNT02X";
			Jump @4269; //curOff = 2909
			return "P_MONEYSTACK01X";
			Jump @4269; //curOff = 2919
			return "P_AXE01X";
			Jump @4269; //curOff = 2929
			return "P_HOE01X";
			Jump @4269; //curOff = 2939
			return "P_SHOVEL01X";
			Jump @4269; //curOff = 2949
			return "P_SHOVEL04X";
			Jump @4269; //curOff = 2959
			return "P_BROOM01X";
			Jump @4269; //curOff = 2969
			return "P_PITCHFORK01X";
			Jump @4269; //curOff = 2979
			return "P_SCYTHE01X";
			Jump @4269; //curOff = 2989
			return "P_SKIFF02x";
			Jump @4269; //curOff = 2999
			return "p_door_nbx_doc01x_l";
			Jump @4269; //curOff = 3009
			return "p_door_nbx_doc01x_r";
			Jump @4269; //curOff = 3019
			return "p_cs_camera";
			Jump @4269; //curOff = 3029
			return "p_cs_cameratripod";
			Jump @4269; //curOff = 3039
			return "p_cs_camerabag01x";
			Jump @4269; //curOff = 3049
			return "p_cameraflash01x";
			Jump @4269; //curOff = 3059
			return "p_cs_shutterrelease";
			Jump @4269; //curOff = 3069
			return "rowboatswamp";
			Jump @4269; //curOff = 3079
			return "P_CHAIR25X";
			Jump @4269; //curOff = 3089
			return "P_DOORBRAIT01BX";
			Jump @4269; //curOff = 3099
			return "P_CS_MAP01X";
			Jump @4269; //curOff = 3109
			return "p_hammer03x";
			Jump @4269; //curOff = 3119
			return "p_cs_nailbarrel01x";
			Jump @4269; //curOff = 3129
			return "p_cs_book04x";
			Jump @4269; //curOff = 3139
			return "p_cs_Fan01x";
			Jump @4269; //curOff = 3149
			return "p_cs_ledgerSmall01x";
			Jump @4269; //curOff = 3159
			return "p_cs_envelope01x";
			Jump @4269; //curOff = 3169
			return "p_wrappedmeat01x";
			Jump @4269; //curOff = 3179
			return "P_CS_LETTER02X";
			Jump @4269; //curOff = 3189
			return "p_cs_book03x";
			Jump @4269; //curOff = 3199
			return "p_cs_giftBox01x";
			Jump @4269; //curOff = 3209
			return "p_boiler01x";
			Jump @4269; //curOff = 3219
			return "p_boiler02x";
			Jump @4269; //curOff = 3229
			return "p_mugCoffee01x";
			Jump @4269; //curOff = 3239
			return "p_glasstallbeer01x";
			Jump @4269; //curOff = 3249
			return "p_pitcher02x";
			Jump @4269; //curOff = 3259
			return "p_tray03x";
			Jump @4269; //curOff = 3269
			return "p_sit_chairwicker01b";
			Jump @4269; //curOff = 3279
			return "S_INV_ORLEANDER01CX";
			Jump @4269; //curOff = 3289
			return "S_INV_ORLEANDER01DX";
			Jump @4269; //curOff = 3299
			return "P_LADLE02X";
			Jump @4269; //curOff = 3309
			return "P_CS_POT01X";
			Jump @4269; //curOff = 3319
			return "P_CHAIRDINING03X";
			Jump @4269; //curOff = 3329
			return "P_SPOON01X";
			Jump @4269; //curOff = 3339
			return "P_BOWL03X";
			Jump @4269; //curOff = 3349
			return "P_CS_BRIDECATALOGUE01X";
			Jump @4269; //curOff = 3359
			return "P_JEWELRYBOX02BX";
			Jump @4269; //curOff = 3369
			return "P_CS_LETTERFOLDED01X";
			Jump @4269; //curOff = 3379
			return "P_CS_ARTHURHAT01X";
			Jump @4269; //curOff = 3389
			return "P_OAR03X";
			Jump @4269; //curOff = 3399
			return "P_DOOR_VAL_BANKVAULT";
			Jump @4269; //curOff = 3409
			return "P_DOOR_COMBANK01X";
			Jump @4269; //curOff = 3419
			return "P_CS_DONATION01X";
			Jump @4269; //curOff = 3429
			return "p_door_nbx_bank03x_R";
			Jump @4269; //curOff = 3439
			return "p_door_nbx_bank03x_L";
			Jump @4269; //curOff = 3449
			return "p_camp_plate_02x";
			Jump @4269; //curOff = 3459
			return "p_stewplate02x";
			Jump @4269; //curOff = 3469
			return "p_cs_log01x";
			Jump @4269; //curOff = 3479
			return "p_ndb_hotelplank01x";
			Jump @4269; //curOff = 3489
			return "p_glass06x";
			Jump @4269; //curOff = 3499
			return "p_cs_rag01x";
			Jump @4269; //curOff = 3509
			return "p_inkwell01x";
			Jump @4269; //curOff = 3519
			return "p_cigar02x";
			Jump @4269; //curOff = 3529
			return "p_bottleBeer01x";
			Jump @4269; //curOff = 3539
			return "p_beermugglass01x";
			Jump @4269; //curOff = 3549
			return "p_nutBowl01x";
			Jump @4269; //curOff = 3559
			return "p_cs_sacklarge01x";
			Jump @4269; //curOff = 3569
			return "p_cs_dressbox01x";
			Jump @4269; //curOff = 3579
			return "p_bell05x";
			Jump @4269; //curOff = 3589
			return "p_woodendeskchair01x";
			Jump @4269; //curOff = 3599
			return "p_chair06x";
			Jump @4269; //curOff = 3609
			return "p_jug01x";
			Jump @4269; //curOff = 3619
			return "S_INV_MEDICINE01X";
			Jump @4269; //curOff = 3629
			return "S_INV_MEDICINE_FTY";
			Jump @4269; //curOff = 3639
			return "S_INV_Milkweed01bx";
			Jump @4269; //curOff = 3649
			return "p_bottleslim01x";
			Jump @4269; //curOff = 3659
			return "p_cs_journal01x";
			Jump @4269; //curOff = 3669
			return "p_mortarpestle02x";
			Jump @4269; //curOff = 3679
			return "s_inv_burdock01dx";
			Jump @4269; //curOff = 3689
			return "p_cs_ropeLegSplit";
			Jump @4269; //curOff = 3699
			return "p_cs_ropeHandsSplit";
			Jump @4269; //curOff = 3709
			return "p_fishingpole01x";
			Jump @4269; //curOff = 3719
			return "P_FISHINGPOLE02X";
			Jump @4269; //curOff = 3729
			return "p_cs_flowernecklace";
			Jump @4269; //curOff = 3739
			return "P_CS_FLOWERS01X";
			Jump @4269; //curOff = 3749
			return "s_inv_yarrow01cx";
			Jump @4269; //curOff = 3759
			return "P_CS_FISHINGPOLEBAG01X";
			Jump @4269; //curOff = 3769
			return "P_STICK02X";
			Jump @4269; //curOff = 3779
			return "P_CS_SOCK01X";
			Jump @4269; //curOff = 3789
			return "P_DOOR_VAL_BANK00_RX";
			Jump @4269; //curOff = 3799
			return "P_DOOR_VAL_BANK00_RX";
			Jump @4269; //curOff = 3809
			return "p_can10x";
			Jump @4269; //curOff = 3819
			return "p_cs_rabbitgut";
			Jump @4269; //curOff = 3829
			return "p_cs_rabbitheadless";
			Jump @4269; //curOff = 3839
			return "p_cs_rabbitfeetless";
			Jump @4269; //curOff = 3849
			return "p_kettle03x";
			Jump @4269; //curOff = 3859
			return "s_che_woodbin01x";
			Jump @4269; //curOff = 3869
			return "s_lootablepoorcase";
			return "P_CS_BOOKHARDCV01X";
			Jump @4269; //curOff = 3886
			return "P_LETTERBUNDLE_01X";
			Jump @4269; //curOff = 3896
			return "P_LETTERENVELOPE_CS01X";
			Jump @4269; //curOff = 3906
			return "P_PACKAGE08X";
			Jump @4269; //curOff = 3916
			return "P_CIGARBOX02X";
			Jump @4269; //curOff = 3926
			return "p_crucifix02x";
			Jump @4269; //curOff = 3936
			return "p_bottleCrate01x";
			Jump @4269; //curOff = 3946
			return "p_can05x";
			Jump @4269; //curOff = 3956
			return "p_cs_suitcase04x";
			Jump @4269; //curOff = 3966
			return "p_cs_bagstrauss01x";
			Jump @4269; //curOff = 3976
			return "P_BOTTLE008X";
			Jump @4269; //curOff = 3986
			return "P_BOTTLE009X";
			Jump @4269; //curOff = 3996
			return "P_BOTTLE010X";
			Jump @4269; //curOff = 4006
			return "p_pocketMirror01x";
			Jump @4269; //curOff = 4016
			return "P_CIGARETTE01X";
			Jump @4269; //curOff = 4026
			return "P_TRAVELTRUNK02X";
			Jump @4269; //curOff = 4036
			return "P_CHAIRWHITE01X";
			Jump @4269; //curOff = 4046
			return "P_JOURNAL_OPEN01X";
			Jump @4269; //curOff = 4056
			return "p_table42_cs";
			Jump @4269; //curOff = 4066
			return "p_cs_newspaper_02x";
			Jump @4269; //curOff = 4076
			return "P_CS_POTATOSLICE01X";
			Jump @4269; //curOff = 4086
			return "S_APLSD_LOG";
			Jump @4269; //curOff = 4096
			return "S_APLSD_HRSATT";
			Jump @4269; //curOff = 4106
			return "p_spittoon01x";
			Jump @4269; //curOff = 4116
			return "p_woodbowl01x";
			Jump @4269; //curOff = 4126
			return "p_pencil01x";
			Jump @4269; //curOff = 4136
			return "P_SPOONMID01X";
			Jump @4269; //curOff = 4146
			return "P_PAN01X";
			Jump @4269; //curOff = 4156
			return "P_Pipe01x";
			Jump @4269; //curOff = 4166
			return "p_cs_railroadbond01x";
			Jump @4269; //curOff = 4176
			return "p_sharpeningstone01x";
			Jump @4269; //curOff = 4186
			return "p_treestump02x";
			Jump @4269; //curOff = 4196
			return "p_plate17x";
			Jump @4269; //curOff = 4206
			return "p_cs_newspaper_01x";
			Jump @4269; //curOff = 4216
			return "p_sadiehat01x";
			Jump @4269; //curOff = 4226
			return "p_door_bla_jail_l_01x";
			Jump @4269; //curOff = 4236
			return "p_door_bla_jail_r_01x";
			Jump @4269; //curOff = 4246
			return "p_mashedPotato02x";
			Jump @4269; //curOff = 4256
			return "p_cs_bookHardCv08x";
			return "";
		}
void func_2025(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = __LIB_0__::func_398(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = __LIB_0__::func_574(iVar6);
		if (!PED::_0x608BC6A6AACD5036(&Var2, iVar0, iVar1, 0))
		{
		}
		else
		{
			iVar7 = Var2.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
			}
			else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7) && !ENTITY::_0x88AD6CC10D8D35B2(iVar7))
			{
			}
			else
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar7, true, true);
				}
				ENTITY::_DELETE_CARRIABLE(&iVar7);
			}
		}
		iVar6++;
	}
}

bool func_2154(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;
	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/]))
			{
				Jump @231; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0 /*3*/].f_2 != iParam2)
				{
					Jump @231; //curOff = 138
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @231; //curOff = 161
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @231; //curOff = 184
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_2156(int iParam0)
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
	func_1247(iParam0, 1, 1, -142743235, 1);
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
		func_1247(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_2161(struct<6> Param0)
{
	if (!func_2321(Param0.f_4, 1))
	{
	}
	if (!func_2321(Param0, 1))
	{
	}
	if (!func_2321(Param0.f_2, 1))
	{
	}
	if (!func_2321(Param0.f_5, 1))
	{
	}
	if (!func_2321(Param0.f_3, 1))
	{
	}
	if (!func_2321(Param0.f_1, 1))
	{
	}
}

int func_2208(var uParam0, int iParam1, int iParam2)
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
		return func_2208(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

char* func_2219(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return __LIB_0__::func_731(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		return func_2341(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		return __LIB_0__::func_209(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	return "";
}

bool func_2321(int iParam0, int iParam1)
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
				if (func_2321(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2321(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2321(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2321(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

char* func_2341(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return func_2024(iVar0);
}

