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
	vector3 vLocal_15 = { 0f, 0f, 0f };
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26[5] = { 0, 0, 0, 0, 0 };
	char* sLocal_32[5] = { NULL, NULL, NULL, NULL, NULL };
	float fLocal_38 = 0f;
	float fLocal_39 = 0f;
	struct<82> Local_40 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0 } ;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	struct<85> Local_125[3];
	int iLocal_381[4] = { 0, 0, 0, 0 };
	int iLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	struct<341> Local_402 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = -1;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	int iLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = -1;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 1097859072;
	var uLocal_805 = 1000;
	var uLocal_806 = 1067450368;
	var uLocal_807 = 5000;
	var uLocal_808 = 42;
	var uLocal_809 = 1103626240;
	var uLocal_810 = 1077936128;
	var uLocal_811 = 1106247680;
	var uLocal_812 = 1103101952;
	var uLocal_813 = 1097859072;
	var uLocal_814 = 1103626240;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = -1;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 1097859072;
	var uLocal_833 = 1000;
	var uLocal_834 = 1067450368;
	var uLocal_835 = 5000;
	var uLocal_836 = 42;
	var uLocal_837 = 1103626240;
	var uLocal_838 = 1077936128;
	var uLocal_839 = 1106247680;
	var uLocal_840 = 1103101952;
	var uLocal_841 = 1097859072;
	var uLocal_842 = 1103626240;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	int iLocal_845[48] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_894[5] = { 0, 0, 0, 0, 0 };
	char* sLocal_900[5] = { NULL, NULL, NULL, NULL, NULL };
	int iLocal_906 = 0;
	int iLocal_907 = 0;
	int iLocal_908 = 0;
	int iLocal_909[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_916[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	vLocal_15 = { -1993.595f, 426.5243f, 120.4816f };
	iLocal_18 = joaat("G_M_M_UNIRANCHERS_01");
	iLocal_19 = joaat("U_M_M_BHT_LARAMIESLEEPING");
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
				func_72(uParam0);
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
			__LIB_13__::func_147(uParam0);
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
		__LIB_13__::func_147(uParam0);
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
			func_131();
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
		__LIB_18__::func_577(uParam0);
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
	__LIB_12__::func_658(uParam0, 8);
	__LIB_12__::func_659(uParam0, 8);
	__LIB_12__::func_656(uParam0, 180f);
	__LIB_12__::func_657(uParam0, 180f);
	Local_40.f_78 = { -1995.813f, 424.1472f, 120.5083f };
	Local_40.f_81 = 240f;
	Local_125[0 /*85*/].f_78 = { -1999.078f, 421.6465f, 120.5083f };
	Local_125[0 /*85*/].f_81 = 320f;
	Local_125[1 /*85*/].f_78 = { -1998.768f, 424.2578f, 120.5083f };
	Local_125[1 /*85*/].f_81 = 52.5f;
	Local_125[2 /*85*/].f_78 = { -1990.106f, 429.9782f, 120.5081f };
	Local_125[2 /*85*/].f_81 = 325f;
	sLocal_900[0] = "RBT03_START";
	sLocal_900[1] = "RBT03_ALERTED";
	sLocal_900[2] = "RBT03_STOP";
	sLocal_900[3] = "RBT03_FAIL";
	sLocal_900[4] = "RBT03_RESTART_1";
	func_189();
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_909[0]))
	{
		iLocal_909[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vLocal_15, 0f, 0f, 0f, 12f, 12f, 5f, "RBTG3_VOLUME_CAMP_BLIP_VOLUME");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_909[1]))
	{
		iLocal_909[1] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vLocal_15, 0f, 0f, 0f, 18f, 18f, 8f, "RBTG3_VOLUME_CAMP_DEFENSIVE_VOLUME");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_909[3]))
	{
		iLocal_909[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1999.155f, 424.54f, 121.9768f, 0f, 0f, -40.75f, 1.5f, 1.5f, 1.5f, "RBTG3_VOLUME_PED_GANG1_VOLUME");
		Local_125[1 /*85*/].f_3 = iLocal_909[3];
	}
	__LIB_4__::func_228(&uLocal_787);
	__LIB_6__::func_905(&uLocal_787);
	__LIB_9__::func_261(&uLocal_787);
	__LIB_1__::func_399(&uLocal_787, 0);
	__LIB_3__::func_407(&uLocal_787, 20f);
	__LIB_1__::func_981(&uLocal_787, 10f);
	__LIB_1__::func_402(&uLocal_787, 0);
	__LIB_1__::func_405(&uLocal_787, 0);
	__LIB_4__::func_135(&uLocal_787, 0, 0, 0);
	__LIB_4__::func_228(&uLocal_815);
	__LIB_6__::func_905(&uLocal_815);
	__LIB_9__::func_261(&uLocal_815);
	__LIB_1__::func_399(&uLocal_815, 1);
	__LIB_3__::func_407(&uLocal_815, 20f);
	__LIB_1__::func_981(&uLocal_815, 10f);
	__LIB_1__::func_402(&uLocal_815, 1);
	__LIB_1__::func_405(&uLocal_815, 1);
	__LIB_4__::func_135(&uLocal_815, 1, 1, 1);
}

void func_42(var uParam0)
{
	HUD::_TEXT_DATABASE_REQUEST("BHCR");
	__LIB_12__::func_908(uParam0, 0);
	__LIB_12__::func_867(uParam0, iLocal_18, 1);
	__LIB_12__::func_867(uParam0, iLocal_19, 1);
	__LIB_12__::func_867(uParam0, joaat("A_C_HORSE_MORGAN_BAYROAN"), 1);
	__LIB_12__::func_867(uParam0, joaat("A_C_HORSE_MORGAN_PALOMINO"), 1);
	__LIB_12__::func_867(uParam0, joaat("A_C_HORSE_NOKOTA_WHITEROAN"), 1);
	__LIB_12__::func_867(uParam0, joaat("P_STOOL02X"), 1);
	__LIB_12__::func_867(uParam0, joaat("P_BOTTLEBEER01X"), 1);
	__LIB_12__::func_867(uParam0, joaat("P_STOOLFOLDING01X"), 1);
	AUDIO::PREPARE_MUSIC_EVENT(sLocal_900[0]);
	AUDIO::PREPARE_MUSIC_EVENT(sLocal_900[1]);
	AUDIO::PREPARE_MUSIC_EVENT(sLocal_900[2]);
	AUDIO::PREPARE_MUSIC_EVENT(sLocal_900[3]);
	AUDIO::PREPARE_MUSIC_EVENT(sLocal_900[4]);
	STREAMING::REQUEST_PTFX_ASSET();
	func_203();
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
			Var1 = { -2001.052f, 402.6192f, 123.0865f };
			Var1.f_3 = 0f;
			break;
		case 1:
			Var1 = { -1996.416f, 426.985f, 120.5083f };
			Var1.f_3 = 210f;
			break;
		case 2:
			Var1 = { -1800.281f, -352.952f, 163.0476f };
			Var1.f_3 = 68.0831f;
			break;
		case 3:
			Var1 = { -1804.004f, -351.7943f, 163.1248f };
			Var1.f_3 = 250.6144f;
			break;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_213(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	if (iLocal_786 == 0)
	{
		if (fLocal_38 > 150f)
		{
			AUDIO::TRIGGER_MUSIC_EVENT(sLocal_900[3]);
			StringCopy(&(uParam0->f_2578), "RBT03_F_LEFT_C", 24);
			return true;
		}
	}
	else if (__LIB_18__::func_575(&Local_402, 1120403456 /* Float: 100f */, 1125515264 /* Float: 150f */))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(sLocal_900[3]);
		StringCopy(&(uParam0->f_2578), func_215(Local_402.f_64), 24);
		return true;
	}
	return false;
}

void func_68(var uParam0)
{
	func_216(uParam0);
	func_217(uParam0);
	PED::SET_PED_RESET_FLAG(Global_35, 362, true);
	if (((__LIB_10__::func_896(PLAYER::PLAYER_ID(), Local_40) || __LIB_10__::func_896(PLAYER::PLAYER_ID(), Local_125[0 /*85*/])) || __LIB_10__::func_896(PLAYER::PLAYER_ID(), Local_125[1 /*85*/])) || __LIB_10__::func_896(PLAYER::PLAYER_ID(), Local_125[2 /*85*/]))
	{
		PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 47, 0);
	}
	else
	{
		PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 47, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_40) && !ENTITY::IS_ENTITY_DEAD(Local_40))
	{
		if (((__LIB_10__::func_896(PLAYER::PLAYER_ID(), Local_40) || PED::_IS_PED_BEING_HOGTIED(Local_40)) || PED::IS_PED_IN_COMBAT(Local_40, 0)) || PED::_IS_PED_HOGTIED(Local_40))
		{
			if (__LIB_0__::func_27(Local_40.f_6, 134217728))
			{
				MISC::_0xA08111B053D84B4D(Local_40);
				__LIB_1__::func_681(&(Local_40.f_6), 134217728);
			}
		}
		else if (PED::_IS_PED_USING_SCENARIO_HASH(Local_40, joaat("WORLD_HUMAN_SLEEP_GROUND_ARM")))
		{
			if (!__LIB_0__::func_27(Local_40.f_6, 134217728))
			{
				MISC::_0x7FA58CED69405F9A(Local_40, 3);
				__LIB_1__::func_683(&(Local_40.f_6), 134217728);
			}
		}
		else if (__LIB_0__::func_27(Local_40.f_6, 134217728))
		{
			MISC::_0xA08111B053D84B4D(Local_40);
			__LIB_1__::func_681(&(Local_40.f_6), 134217728);
		}
	}
	fLocal_38 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_15, true);
	fLocal_39 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, __LIB_10__::func_45(Local_402.f_300), true);
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
	if (func_225(uParam0->f_174))
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

void func_72(var uParam0)
{
	bool bVar0;
	__LIB_1__::func_752();
	__LIB_0__::func_11(uParam0);
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
		__LIB_8__::func_992(uParam0->f_174);
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

bool func_85(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		return true;
	}
	if (__LIB_12__::func_924(uParam0) && func_279(uParam0))
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
		if (uParam0->f_171 != 0 || func_298(uParam0))
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
	__LIB_1__::func_683(&iLocal_20, 1);
	switch (iVar0)
	{
		case 0:
			PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, true);
			PED::SET_PED_STEALTH_MOVEMENT(Global_35, true, 0, 1);
			PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Stealth", 1f, -1);
			PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Cautious", 1f, -1);
			if (__LIB_13__::func_90(&uLocal_396))
			{
				__LIB_10__::func_143(uParam0->f_174, 1);
				__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
				AUDIO::TRIGGER_MUSIC_EVENT(sLocal_900[4]);
				iLocal_786 = 0;
				__LIB_13__::func_105(1, 1);
				return 7;
			}
			break;
		case 1:
			if (__LIB_13__::func_90(&uLocal_396))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_40))
				{
					return 2;
				}
				if (__LIB_10__::func_133(uParam0->f_174, 1))
				{
					STREAMING::REQUEST_ANIM_DICT("script_common@dead@male");
					if (STREAMING::HAS_ANIM_DICT_LOADED("script_common@dead@male"))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_40) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_40, "script_common@dead@male", "facedown_01", 1))
						{
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_40, -1994.792f, 423.7938f, 120f, 190f, true, false, true);
							ENTITY::_0x9587913B9E772D29(Local_40, 0);
							TASK::TASK_PLAY_ANIM(Local_40, "script_common@dead@male", "facedown_01", 1000f, -8f, -1, 131072, 0f, false, 0, false, 0, false);
							PED::_0x2208438012482A1A(Local_40, false, false);
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
						if (!ENTITY::IS_ENTITY_DEAD(Local_40) && !PED::_IS_PED_HOGTIED(Local_40))
						{
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_40, -1994.792f, 423.7938f, 120f, 190f, true, false, true);
							ENTITY::_0x9587913B9E772D29(Local_40, 0);
							TASK::TASK_CARRIABLE(Local_40, joaat("HOGTIED_PED"), 0, 0, 0);
							PED::_0x2208438012482A1A(Local_40, false, false);
							func_305(&Local_40, 9, 0, 0);
						}
					}
					else
					{
						return 2;
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_40) && !PED::_IS_PED_HOGTIED(Local_40))
				{
					return 2;
				}
				__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
				iLocal_894[0] = 1;
				iLocal_894[1] = 1;
				AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
				__LIB_1__::func_683(&(Local_125[0 /*85*/].f_6), 1);
				__LIB_1__::func_683(&(Local_125[1 /*85*/].f_6), 1);
				__LIB_1__::func_683(&(Local_125[2 /*85*/].f_6), 1);
				__LIB_1__::func_683(&(Local_40.f_6), 8);
				__LIB_1__::func_683(&(Local_40.f_6), 4);
				__LIB_1__::func_683(&iLocal_20, 4096);
				__LIB_1__::func_683(&iLocal_20, 16384);
				iLocal_786 = 1;
				__LIB_13__::func_105(1, 1);
				return 7;
			}
			break;
		case 2:
			if (__LIB_13__::func_90(&uLocal_396))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_40))
				{
					return 2;
				}
				if (__LIB_10__::func_133(uParam0->f_174, 1))
				{
					__LIB_1__::func_864(Local_40, 1, 0);
					if (PED::IS_PED_RAGDOLL(Local_40))
					{
						return 2;
					}
				}
				if (ENTITY::IS_ENTITY_DEAD(Local_40))
				{
					TASK::_0xFF745B0346E19E2C(joaat("DEAD_CARRIABLE_HUMAN"));
					PED::_0xF7EA250B9A919E03(joaat("CARRY_ANIMAL_LARGE_SHOULDER"), Global_35);
					if (TASK::_0xB8F52A3F84A7CC59(joaat("DEAD_CARRIABLE_HUMAN")) && PED::_0x854BC9B1A1CCD034(joaat("CARRY_ANIMAL_LARGE_SHOULDER"), Global_35))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_40, joaat("SCRIPT_TASK_CARRIABLE"), false) != 0 && TASK::GET_SCRIPT_TASK_STATUS(Local_40, joaat("SCRIPT_TASK_CARRIABLE"), false) != 1)
						{
							ENTITY::SET_ENTITY_COORDS(Local_40, -1800.281f, -352.952f, 163.0476f, true, false, true, true);
							ENTITY::_0x9587913B9E772D29(Local_40, 0);
							WEAPON::REMOVE_ALL_PED_WEAPONS(Local_40, true, true);
							TASK::TASK_CARRIABLE(Local_40, joaat("DEAD_CARRIABLE_HUMAN"), Global_35, 0, 0);
							PED::_0x2208438012482A1A(Local_40, true, false);
							PED::_0x2208438012482A1A(Global_35, true, false);
							func_305(&Local_40, 9, 0, 0);
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
					PED::_0xF7EA250B9A919E03(joaat("CARRY_ANIMAL_LARGE_SHOULDER"), Global_35);
					if (TASK::_0xB8F52A3F84A7CC59(joaat("HOGTIED_PED")) && PED::_0x854BC9B1A1CCD034(joaat("CARRY_ANIMAL_LARGE_SHOULDER"), Global_35))
					{
						if (!__LIB_0__::func_163(Local_40, joaat("SCRIPT_TASK_CARRIABLE")))
						{
							ENTITY::SET_ENTITY_COORDS(Local_40, -1800.281f, -352.952f, 163.0476f, true, false, true, true);
							ENTITY::_0x9587913B9E772D29(Local_40, 0);
							WEAPON::REMOVE_ALL_PED_WEAPONS(Local_40, true, true);
							TASK::TASK_CARRIABLE(Local_40, joaat("HOGTIED_PED"), Global_35, 0, 0);
							PED::_0x2208438012482A1A(Local_40, true, false);
							PED::_0x2208438012482A1A(Global_35, true, false);
							func_305(&Local_40, 9, 0, 0);
						}
					}
					else
					{
						return 2;
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_40) && !PED::_IS_PED_HOGTIED(Local_40))
				{
					return 2;
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_40, joaat("SCRIPT_TASK_CARRIABLE"), false) != 1)
				{
					return 2;
				}
				if (PED::_GET_CARRIER_AS_PED(Local_40) == 0)
				{
					return 2;
				}
				__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
				iLocal_894[0] = 1;
				iLocal_894[1] = 1;
				AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
				__LIB_1__::func_683(&(Local_125[0 /*85*/].f_6), 1);
				__LIB_1__::func_683(&(Local_125[1 /*85*/].f_6), 1);
				__LIB_1__::func_683(&(Local_125[2 /*85*/].f_6), 1);
				__LIB_1__::func_683(&(Local_40.f_6), 8);
				__LIB_1__::func_683(&(Local_40.f_6), 4);
				__LIB_1__::func_683(&iLocal_20, 4096);
				__LIB_1__::func_683(&iLocal_20, 16384);
				__LIB_1__::func_683(&iLocal_20, 32768);
				iLocal_786 = 1;
				__LIB_13__::func_105(1, 1);
				return 7;
			}
			break;
		case 3:
			if (!__LIB_10__::func_133(uParam0->f_174, 1))
			{
				__LIB_10__::func_131(iLocal_19, Local_402.f_300, 0);
				__LIB_10__::func_92(iLocal_19, Local_402.f_300, Local_402.f_299);
				__LIB_1__::func_616(Global_40.f_9074.f_3, 1, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_40))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_40, -277.51f, 816.67f, 119.15f, -47.78f, true, false, true);
					__LIB_1__::func_864(Local_40, 1, 0);
				}
				__LIB_1__::func_616(Global_40.f_9074.f_4, 1, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
			}
			AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", false);
			__LIB_13__::func_105(1, 1);
			return 8;
		default:
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

bool func_101(var uParam0)
{
	struct<4> Var0;
	MemCopy(&Var0, {uParam0->f_2575}, 4);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		return true;
	}
	return func_323(Var0, &(uParam0->f_206), uParam0);
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
				__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 1);
			}
			return false;
		}
	}
	return false;
}

int func_107(var uParam0)
{
	__LIB_13__::func_278(&uLocal_928, vLocal_15, 3, -1082130432 /* Float: -1f */);
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	func_330(uParam0);
	switch (iLocal_786)
	{
		case 0:
			if (!__LIB_0__::func_27(iLocal_20, 8))
			{
				if (fLocal_38 < (100f / 2f))
				{
					if (!MAP::DOES_BLIP_EXIST(iLocal_908))
					{
						iLocal_908 = __LIB_5__::func_554(-308585968, iLocal_909[0], 1);
					}
					__LIB_12__::func_883(uParam0, "RBT03_OBJ_1", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_1__::func_681(&iLocal_20, 16);
					__LIB_1__::func_683(&iLocal_20, 8);
				}
			}
			if (!__LIB_0__::func_27(iLocal_20, 16))
			{
				if (__LIB_0__::func_27(iLocal_20, 8))
				{
					if (fLocal_38 > 100f)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT(Global_35))
						{
							PED::SET_PED_STEALTH_MOVEMENT(Global_35, false, 0, 0);
						}
						PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Stealth", 0f, -1);
						PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Cautious", 0f, -1);
						__LIB_1__::func_681(&iLocal_20, 64);
						__LIB_12__::func_883(uParam0, "RBT03_OBJ_2", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						__LIB_1__::func_681(&iLocal_20, 8);
						__LIB_1__::func_683(&iLocal_20, 16);
					}
				}
			}
			if (!__LIB_0__::func_27(iLocal_20, 64))
			{
				if (fLocal_38 < 35f)
				{
					if (!PED::GET_PED_STEALTH_MOVEMENT(Global_35))
					{
						PED::SET_PED_STEALTH_MOVEMENT(Global_35, true, 0, 0);
					}
					PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Stealth", 1f, -1);
					PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Cautious", 1f, -1);
					__LIB_1__::func_683(&iLocal_20, 64);
				}
			}
			if (((((__LIB_13__::func_143(Local_40, 3.25f, 2.5f, 3.25f) || __LIB_0__::func_27(iLocal_20, 4096)) || __LIB_0__::func_27(Local_40.f_6, 1)) || __LIB_0__::func_27(Local_40.f_6, 8)) || __LIB_0__::func_27(iLocal_20, 512)) || (__LIB_0__::func_48(Global_35, Local_40, 3.25f, 0) && PED::IS_TRACKED_PED_VISIBLE(Local_40)))
			{
				iLocal_786 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_27(iLocal_20, 32))
			{
				__LIB_0__::func_325(&iLocal_908);
				__LIB_0__::func_325(&(Local_40.f_1));
				__LIB_10__::func_82(&Local_402);
				__LIB_10__::func_143(uParam0->f_174, 1);
				__LIB_10__::func_197(&Local_402, 4, 1);
				__LIB_1__::func_683(&iLocal_20, 32);
			}
			if (!__LIB_0__::func_27(iLocal_20, 128))
			{
				if ((__LIB_0__::func_27(iLocal_20, 4096) || __LIB_0__::func_27(Local_40.f_6, 4)) || __LIB_0__::func_27(Local_40.f_6, 64))
				{
					PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Stealth", 0f, -1);
					PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Cautious", 0f, -1);
					__LIB_1__::func_683(&iLocal_20, 128);
				}
			}
			if (__LIB_0__::func_27(iLocal_20, 32))
			{
				__LIB_13__::func_111(&Local_402);
				func_338(Local_40);
				if (func_339(&Local_402, 1))
				{
					iLocal_786 = 2;
				}
			}
			break;
		case 2:
			if (func_340(&Local_402))
			{
				AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", false);
				return 8;
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
	__LIB_13__::func_576(iParam0, 0, iParam3);
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
		func_375(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
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
	vVar2 = { func_379(Global_2621440[0 /*12066*/].f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
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
			if (__LIB_19__::func_265(&Local_402))
			{
				__LIB_13__::func_67(Local_402.f_300, ENTITY::GET_ENTITY_MODEL(Local_402.f_67));
				__LIB_2__::func_426(&Local_40);
				return true;
			}
			break;
		case 1:
			return true;
		default:
			return true;
	}
	return false;
}

void func_159(var uParam0)
{
	int iVar0;
	HUD::_TEXT_DATABASE_DELETE("BHCR");
	AUDIO::STOP_PED_SPEAKING(Global_35, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_STOOL02X"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_18);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_19);
	__LIB_0__::func_400(551513105);
	if (PATHFIND::_0x5AC0944C156E5F44("BH_LaramieSleeping"))
	{
		PATHFIND::_0x527B97C203BB8606("BH_LaramieSleeping");
	}
	__LIB_10__::func_26(&uLocal_928, 106);
	__LIB_2__::func_426(&Local_40);
	iVar0 = 0;
	while (iVar0 < Local_125)
	{
		__LIB_0__::func_325(&(Local_125[iVar0 /*85*/].f_1));
		__LIB_2__::func_788(&(Local_125[iVar0 /*85*/]), 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_381)
	{
		__LIB_2__::func_788(&(iLocal_381[iVar0]), 1, 0, 1);
		iVar0++;
	}
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	__LIB_2__::func_353(&uLocal_926, 1);
	__LIB_13__::func_112(&Local_402, 1);
	AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", false);
	__LIB_13__::func_92(&Local_402);
	AUDIO::TRIGGER_MUSIC_EVENT(sLocal_900[2]);
	AUDIO::_0x660A8F876DF1D4F8(49);
	PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Stealth", 0f, -1);
	PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Cautious", 0f, -1);
}

void func_189()
{
	int iVar0;
	iLocal_916[0] = TASK::CREATE_SCENARIO_POINT(joaat("PROP_HITCHINGPOST"), -2001.137f, 435.9689f, 120.5074f, 137.0453f, 2f, 0, 0);
	iLocal_916[1] = TASK::CREATE_SCENARIO_POINT(joaat("PROP_HITCHINGPOST"), -2004.515f, 433.5546f, 120.5393f, 285f, 2f, 0, 0);
	iLocal_916[2] = TASK::CREATE_SCENARIO_POINT(joaat("PROP_HITCHINGPOST"), -1985.985f, 415.5984f, 120.4827f, 327.8614f, 2f, 0, 0);
	iLocal_916[3] = TASK::CREATE_SCENARIO_POINT(joaat("PROP_HITCHINGPOST"), -1986.943f, 419.2619f, 120.497f, 248.8946f, 2f, 0, 0);
	iLocal_916[4] = TASK::CREATE_SCENARIO_POINT(joaat("SC_AMB_VIG_VOMIT_WALL"), -1998.65f, 422.05f, 120.51f, 320f, 2f, 0, 0);
	iLocal_916[5] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_SLEEP_GROUND_ARM"), -2002.03f, 421.1301f, 120.5162f, 120f, 2f, 0, 0);
	iLocal_916[6] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_SLEEP_GROUND_ARM"), -1995.1f, 423.65f, 120.63f, 10f, 2f, 0, 0);
	iLocal_916[7] = TASK::CREATE_SCENARIO_POINT(joaat("PROP_HUMAN_PASSED_OUT_TABLE"), -1989.35f, 428.6f, 121f, 80f, 2f, 0, 0);
	iVar0 = 0;
	while (iVar0 < iLocal_916)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_916[iVar0]))
		{
			TASK::_SET_SCENARIO_POINT_FLAG(iLocal_916[iVar0], 8, true);
			TASK::_SET_SCENARIO_POINT_FLAG(iLocal_916[iVar0], 23, true);
			TASK::_SET_SCENARIO_POINT_FLAG(iLocal_916[iVar0], 25, true);
		}
		iVar0++;
	}
}

void func_203()
{
	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("PROP_HITCHINGPOST"), 15, 0, 0);
	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("PROP_HITCHINGTREE"), 15, 0, 0);
}

int func_213(vector3 vParam0, var uParam3)
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
		iVar0 = func_468(0, 0);
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

char* func_215(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RBT03_F_LEFT_A";
		case 2:
			return "RBT03_F_LEFT_D";
		case 3:
			return "RBT03_F_ESCP";
		case 4:
			return "RBT03_F_LOST";
		default:
			break;
	}
	return __LIB_13__::func_104(Local_402.f_64);
}

void func_216(var uParam0)
{
	int iVar0;
	func_479(uParam0, &Local_40);
	iVar0 = 0;
	while (iVar0 < Local_125)
	{
		func_480(uParam0, &(Local_125[iVar0 /*85*/]), iVar0);
		iVar0++;
	}
	if (!__LIB_0__::func_27(iLocal_20, 4096))
	{
		if (!__LIB_0__::func_27(iLocal_20, 2048))
		{
			if (func_481())
			{
				__LIB_1__::func_683(&iLocal_20, 2048);
			}
		}
	}
}

void func_217(var uParam0)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(Local_125[0 /*85*/]) && !ENTITY::IS_ENTITY_DEAD(Local_125[0 /*85*/]))
	{
		if ((((PED::IS_PED_BEING_STEALTH_KILLED(Local_125[0 /*85*/]) || PED::_0x3BDFCF25B58B0415(Local_125[0 /*85*/])) || PED::IS_PED_BEING_STUNNED(Local_125[0 /*85*/], 0)) || PED::_0xEF3A8772F085B4AA(Local_125[0 /*85*/])) || PED::_IS_PED_BEING_HOGTIED(Local_125[0 /*85*/]))
		{
			if (__LIB_8__::func_684("RBT03_IG2_A"))
			{
				__LIB_6__::func_900("RBT03_IG2_A", 0, 0);
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_20, 4096))
	{
		if (!__LIB_0__::func_27(iLocal_20, 256))
		{
			if (__LIB_1__::func_410(Global_36, vLocal_15, 100f, 1) && __LIB_13__::func_131(Local_125[0 /*85*/], &uLocal_390, 1069547520 /* Float: 1.5f */, 1056964608 /* Float: 0.5f */, 0.2f, 0.45f))
			{
				if ((!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					if (!__LIB_8__::func_684("RBT03_BINOSPOTJ"))
					{
						if (__LIB_12__::func_876(uParam0, "RBT03_BINOSPOT1", 0))
						{
							__LIB_1__::func_683(&iLocal_20, 256);
						}
					}
				}
			}
		}
		if (!__LIB_0__::func_27(iLocal_20, 512))
		{
			if (__LIB_1__::func_410(Global_36, vLocal_15, 100f, 1) && __LIB_13__::func_131(Local_40, &uLocal_387, 1069547520 /* Float: 1.5f */, 1056964608 /* Float: 0.5f */, 0.2f, 0.45f))
			{
				if ((!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					if (!__LIB_8__::func_684("RBT03_BINOSPOT1"))
					{
						if (__LIB_12__::func_876(uParam0, "RBT03_BINOSPOTJ", 0))
						{
							__LIB_1__::func_683(&iLocal_20, 512);
						}
					}
				}
			}
		}
		if (!func_487(0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_125[0 /*85*/]) && !ENTITY::IS_ENTITY_DEAD(Local_125[0 /*85*/]))
			{
				if (!__LIB_0__::func_27(Local_125[0 /*85*/].f_6, 8))
				{
					if (!__LIB_0__::func_27(Local_125[0 /*85*/].f_6, 2048))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_125[0 /*85*/], -76381094, true) == 1)
						{
							if (PED::_IS_PED_USING_SCENARIO_POINT(Local_125[0 /*85*/], iLocal_916[4]) && TASK::_0x02EBBB3989B7E695(Local_125[0 /*85*/]))
							{
								if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
								{
									__LIB_12__::func_875(uParam0, Local_125[0 /*85*/], "RANCH_PED3", 0);
									if (__LIB_12__::func_876(uParam0, "RBT03_IG2_A", 0))
									{
										func_491(0, 1);
									}
								}
							}
						}
					}
				}
			}
		}
		if (!func_487(1) && !func_487(2))
		{
			if ((__LIB_0__::func_27(Local_125[0 /*85*/].f_6, 32) || __LIB_0__::func_27(Local_125[1 /*85*/].f_6, 32)) || __LIB_0__::func_27(Local_125[2 /*85*/].f_6, 32))
			{
				if (__LIB_0__::func_27(Local_125[0 /*85*/].f_6, 32))
				{
					if (__LIB_8__::func_684("RBT03_IG2_A"))
					{
						__LIB_6__::func_900("RBT03_IG2_A", 0, 0);
					}
				}
				if ((Local_125[0 /*85*/].f_77 == 0 || Local_125[1 /*85*/].f_77 == 0) || Local_125[2 /*85*/].f_77 == 0)
				{
					if (__LIB_12__::func_876(uParam0, "RBT03_ILOGQUE", 0))
					{
						func_491(1, 1);
						__LIB_1__::func_683(&iLocal_20, 8192);
					}
				}
				else if ((Local_125[0 /*85*/].f_77 == 1 || Local_125[1 /*85*/].f_77 == 1) || Local_125[2 /*85*/].f_77 == 1)
				{
					if (__LIB_12__::func_876(uParam0, "RBT03_ILOGCALL", 0))
					{
						func_491(2, 1);
						__LIB_1__::func_683(&iLocal_20, 8192);
					}
				}
			}
		}
		if (!func_487(14))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_125[0 /*85*/]) && !ENTITY::IS_ENTITY_DEAD(Local_125[0 /*85*/]))
			{
				if (__LIB_0__::func_27(Local_125[0 /*85*/].f_6, 131072))
				{
					if (__LIB_8__::func_684("RBT03_IG2_A"))
					{
						__LIB_6__::func_900("RBT03_IG2_A", 0, 0);
					}
					if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
					{
						if (__LIB_12__::func_876(uParam0, "RBT03_PUKEALERT", 0))
						{
							func_491(14, 1);
						}
					}
				}
			}
		}
		if (!func_487(3) && !func_487(4))
		{
			if (__LIB_0__::func_27(Local_40.f_6, 32))
			{
				if (Local_40.f_77 == 0)
				{
					if (__LIB_12__::func_876(uParam0, "RBT03_ILOTQUE", 0))
					{
						func_491(3, 1);
						__LIB_1__::func_683(&iLocal_20, 8192);
					}
				}
				else if (Local_40.f_77 == 1)
				{
					if (__LIB_12__::func_876(uParam0, "RBT03_ILOTCALL", 0))
					{
						func_491(4, 1);
						__LIB_1__::func_683(&iLocal_20, 8192);
					}
				}
			}
		}
		if (__LIB_0__::func_27(iLocal_20, 65536))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_40) && !ENTITY::IS_ENTITY_DEAD(Local_40))
			{
				if (!func_487(7))
				{
					if (PED::_IS_PED_BEING_HOGTIED(Local_40))
					{
						if (__LIB_12__::func_876(uParam0, "RBT03_IG1_HOG1", 0))
						{
							func_491(7, 1);
						}
					}
				}
				else
				{
					if (!func_487(8))
					{
						if (PED::_IS_PED_BEING_HOGTIED(Local_40) || PED::_IS_PED_HOGTIED(Local_40))
						{
							if (!__LIB_8__::func_684("RBT03_IG1_HOG1"))
							{
								if (__LIB_12__::func_876(uParam0, "RBT03_HOGA", 0))
								{
									func_491(8, 1);
								}
							}
						}
					}
					if (!func_487(9))
					{
						if (__LIB_0__::func_272(Local_125[1 /*85*/], 0) && __LIB_0__::func_27(Local_125[1 /*85*/].f_6, 8))
						{
							if (!__LIB_8__::func_684("RBT03_HOGA"))
							{
								__LIB_12__::func_875(uParam0, Local_125[1 /*85*/], "RANCH_PED4", 0);
								if (__LIB_12__::func_876(uParam0, "RBT03_HOGB", 0))
								{
									func_491(9, 1);
								}
							}
						}
					}
				}
			}
		}
		if (((((!func_487(17) && !func_487(18)) && !func_487(19)) && !func_487(20)) && !func_487(5)) && !func_487(6))
		{
			if ((((__LIB_0__::func_272(Local_40, 0) && __LIB_0__::func_27(Local_40.f_6, 8)) || (__LIB_0__::func_272(Local_125[0 /*85*/], 0) && __LIB_0__::func_27(Local_125[0 /*85*/].f_6, 8))) || (__LIB_0__::func_272(Local_125[1 /*85*/], 0) && __LIB_0__::func_27(Local_125[1 /*85*/].f_6, 8))) || (__LIB_0__::func_272(Local_125[2 /*85*/], 0) && __LIB_0__::func_27(Local_125[2 /*85*/].f_6, 8)))
			{
				AUDIO::_0x660A8F876DF1D4F8(49);
				if (__LIB_8__::func_684("RBT03_IG2_A"))
				{
					__LIB_6__::func_900("RBT03_IG2_A", 0, 0);
				}
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					if (__LIB_0__::func_27(Local_40.f_6, 32))
					{
						if (Local_40.f_77 == 0)
						{
							if (__LIB_12__::func_876(uParam0, "RBT03_ILOTQUER", 0))
							{
								func_491(5, 1);
							}
						}
						else if (Local_40.f_77 == 1)
						{
							if (__LIB_12__::func_876(uParam0, "RBT03_ILOTCALLR", 0))
							{
								func_491(6, 1);
							}
						}
					}
					else
					{
						iVar0 = __LIB_11__::func_672(Global_35, joaat("REL_PLAYER_ENEMY"), 0, 0, 28);
						if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
						{
							if (iVar0 == Local_40)
							{
								if (__LIB_0__::func_27(Local_40.f_6, 8))
								{
									if (__LIB_12__::func_876(uParam0, "RBT03_IG1_P3", 0))
									{
										func_491(19, 1);
									}
								}
							}
							else if (iVar0 == Local_125[0 /*85*/])
							{
								if (__LIB_0__::func_27(Local_125[0 /*85*/].f_6, 8))
								{
									__LIB_12__::func_875(uParam0, iVar0, "RANCH_PED1", 0);
									if (__LIB_12__::func_876(uParam0, "RBT03_GRDWAKE", 0))
									{
										func_491(20, 1);
									}
								}
							}
							else if (iVar0 == Local_125[1 /*85*/])
							{
								if (__LIB_0__::func_27(Local_125[1 /*85*/].f_6, 8))
								{
									__LIB_12__::func_875(uParam0, iVar0, "RANCH_PED4", 0);
									if (__LIB_12__::func_876(uParam0, "RBT03_IG1_P1", 0))
									{
										func_491(17, 1);
									}
								}
							}
							else if (iVar0 == Local_125[2 /*85*/])
							{
								if (__LIB_0__::func_27(Local_125[2 /*85*/].f_6, 8))
								{
									__LIB_12__::func_875(uParam0, iVar0, "RANCH_PED2", 0);
									if (__LIB_12__::func_876(uParam0, "RBT03_IG1_P2", 0))
									{
										func_491(18, 1);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (iLocal_894[1] == 0)
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT(sLocal_900[1]))
			{
				AUDIO::_0x660A8F876DF1D4F8(49);
				iLocal_894[1] = 1;
			}
		}
		if (!func_487(36) && !func_487(37))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_40) && !ENTITY::IS_ENTITY_DEAD(Local_40))
			{
				if (__LIB_0__::func_48(Global_35, Local_40, 3f, 1))
				{
					if (PED::_IS_PED_HOGTIED(Local_40) || ENTITY::_0x61914209C36EFDDB(Local_40) == 1)
					{
						if (func_493(&Local_125, 1) == 0)
						{
							if (!__LIB_10__::func_166(Local_40, 1))
							{
								if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
								{
									if (PED::GET_PED_CONFIG_FLAG(Local_40, 11, false) == 0)
									{
										if (__LIB_0__::func_27(Local_40.f_6, 64))
										{
											if (__LIB_12__::func_876(uParam0, "RBT03_HOG1", 0))
											{
												__LIB_1__::func_148(&uLocal_393);
												func_491(37, 1);
											}
										}
										else if (__LIB_12__::func_876(uParam0, "RBT03_HOG", 0))
										{
											__LIB_1__::func_148(&uLocal_393);
											func_491(36, 1);
										}
									}
								}
							}
							else
							{
								func_491(36, 1);
								func_491(37, 1);
							}
						}
					}
				}
			}
		}
		if (!__LIB_0__::func_27(iLocal_20, 16384))
		{
			if (__LIB_0__::func_27(Local_125[0 /*85*/].f_6, 131072))
			{
				if (!func_487(15))
				{
					if ((ENTITY::DOES_ENTITY_EXIST(Local_125[0 /*85*/]) && !ENTITY::IS_ENTITY_DEAD(Local_125[0 /*85*/])) && !PED::_IS_PED_HOGTIED(Local_125[0 /*85*/]))
					{
						if (PED::IS_PED_IN_COMBAT(Local_125[0 /*85*/], 0) || Local_125[0 /*85*/].f_2 == 11)
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								if (__LIB_12__::func_876(uParam0, "RBT03_PUKEFIGHT", 0))
								{
									func_491(15, 1);
								}
							}
						}
					}
				}
			}
			if (__LIB_0__::func_27(iLocal_20, 65536))
			{
				if (!func_487(10))
				{
					if (__LIB_0__::func_272(Local_125[2 /*85*/], 0) && __LIB_0__::func_27(Local_125[2 /*85*/].f_6, 8))
					{
						if (!__LIB_8__::func_684("RBT03_HOGA") && !__LIB_8__::func_684("RBT03_HOGB"))
						{
							__LIB_12__::func_875(uParam0, Local_125[2 /*85*/], "RANCH_PED2", 0);
							if (__LIB_12__::func_876(uParam0, "RBT03_HOGC", 0))
							{
								func_491(10, 1);
							}
						}
					}
				}
			}
			if (((((!func_487(21) && !func_487(22)) && !func_487(23)) && !func_487(24)) && !func_487(25)) && !func_487(34))
			{
				if (__LIB_8__::func_684("RBT03_IG2_A"))
				{
					__LIB_6__::func_900("RBT03_IG2_A", 0, 0);
				}
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					iVar0 = __LIB_11__::func_672(Global_35, joaat("REL_PLAYER_ENEMY"), __LIB_0__::func_55(func_487(6), 1, 0), 0, 28);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						if (iVar0 == Local_40)
						{
							if (!func_487(6))
							{
								if (func_493(&Local_125, 0) > 0)
								{
									if (__LIB_12__::func_876(uParam0, "RBT03_CLKBTYT", 0))
									{
										__LIB_1__::func_148(&uLocal_393);
										func_491(25, 1);
									}
								}
								else if (__LIB_12__::func_876(uParam0, "RBT03_WAKEDEAD", 0))
								{
									__LIB_1__::func_148(&uLocal_393);
									func_491(34, 1);
								}
							}
						}
						else if (iVar0 == Local_125[0 /*85*/])
						{
							__LIB_12__::func_875(uParam0, iVar0, "RANCH_PED3", 0);
							if (__LIB_12__::func_876(uParam0, "RBT03_CLKBTY3", 0))
							{
								__LIB_1__::func_148(&uLocal_393);
								func_491(21, 1);
							}
						}
						else if (iVar0 == Local_125[1 /*85*/])
						{
							__LIB_12__::func_875(uParam0, iVar0, "RANCH_PED2", 0);
							if (__LIB_12__::func_876(uParam0, "RBT03_CLKBTY2", 0))
							{
								__LIB_1__::func_148(&uLocal_393);
								func_491(22, 1);
							}
						}
						else if (iVar0 == Local_125[2 /*85*/])
						{
							__LIB_12__::func_875(uParam0, iVar0, "RANCH_PED1", 0);
							if (__LIB_12__::func_876(uParam0, "RBT03_CLKBTY3", 0))
							{
								__LIB_1__::func_148(&uLocal_393);
								func_491(23, 1);
							}
						}
					}
				}
			}
			else
			{
				if (func_493(&Local_125, 1) > 0)
				{
					if ((ENTITY::DOES_ENTITY_EXIST(Local_40) && !ENTITY::IS_ENTITY_DEAD(Local_40)) && __LIB_10__::func_79(Local_40))
					{
						if (!func_487(11))
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								if (__LIB_12__::func_876(uParam0, "RBT03_CARRYA", 0))
								{
									func_491(11, 1);
								}
							}
						}
						else
						{
							if ((ENTITY::DOES_ENTITY_EXIST(Local_125[1 /*85*/]) && !ENTITY::IS_ENTITY_DEAD(Local_125[1 /*85*/])) && !__LIB_0__::func_27(Local_125[1 /*85*/].f_6, 4))
							{
								if (!func_487(12))
								{
									if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
									{
										__LIB_12__::func_875(uParam0, Local_125[1 /*85*/], "RANCH_PED2", 0);
										if (__LIB_12__::func_876(uParam0, "RBT03_CARRYB", 0))
										{
											func_491(12, 1);
										}
									}
								}
							}
							if ((ENTITY::DOES_ENTITY_EXIST(Local_125[2 /*85*/]) && !ENTITY::IS_ENTITY_DEAD(Local_125[2 /*85*/])) && !__LIB_0__::func_27(Local_125[2 /*85*/].f_6, 4))
							{
								if (!func_487(13))
								{
									if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
									{
										__LIB_12__::func_875(uParam0, Local_125[2 /*85*/], "RANCH_PED4", 0);
										if (__LIB_12__::func_876(uParam0, "RBT03_CARRYC", 0))
										{
											func_491(13, 1);
										}
									}
								}
							}
						}
					}
				}
				if (((!func_487(26) && !func_487(27)) && !func_487(28)) && !func_487(29))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_40) && ENTITY::IS_ENTITY_DEAD(Local_40))
					{
						if (func_493(&Local_125, 0) > 0)
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								iVar0 = __LIB_11__::func_672(Global_35, joaat("REL_PLAYER_ENEMY"), MISC::GET_RANDOM_INT_IN_RANGE(0, 1), 0, 28);
								if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
								{
									if (iVar0 == Local_125[0 /*85*/])
									{
										__LIB_12__::func_875(uParam0, iVar0, "RANCH_PED3", 0);
										if (__LIB_12__::func_876(uParam0, "RBT03_KILLCAV3", 0))
										{
											func_491(26, 1);
										}
									}
									else if (iVar0 == Local_125[1 /*85*/])
									{
										__LIB_12__::func_875(uParam0, iVar0, "RANCH_PED2", 0);
										if (__LIB_12__::func_876(uParam0, "RBT03_KILLCAV2", 0))
										{
											func_491(27, 1);
										}
									}
									else if (iVar0 == Local_125[2 /*85*/])
									{
										__LIB_12__::func_875(uParam0, iVar0, "RANCH_PED1", 0);
										if (__LIB_12__::func_876(uParam0, "RBT03_KILLCAV4", 0))
										{
											func_491(28, 1);
										}
									}
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_40) && !ENTITY::IS_ENTITY_DEAD(Local_40))
				{
					if (!func_487(34))
					{
						if (func_493(&Local_125, 0) == 0)
						{
							if (__LIB_0__::func_27(Local_40.f_6, 8388608))
							{
								if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
								{
									if (__LIB_12__::func_876(uParam0, "RBT03_WAKEDEAD", 0))
									{
										__LIB_1__::func_148(&uLocal_393);
										func_491(34, 1);
									}
								}
							}
						}
					}
					if (!func_487(33))
					{
						if (func_493(&Local_125, 0) == 0)
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								if (__LIB_12__::func_876(uParam0, "RBT03_CBTDEAD", 0))
								{
									__LIB_1__::func_148(&uLocal_393);
									func_491(33, 1);
								}
							}
						}
					}
				}
				if (!func_487(33))
				{
					if (iLocal_24 != iLocal_23)
					{
						if ((__LIB_0__::func_272(Local_40, 0) && !PED::_IS_PED_HOGTIED(Local_40)) && PED::IS_PED_IN_COMBAT(Local_40, 0))
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								if (__LIB_12__::func_876(uParam0, "RBT03_KILLGNG", 0))
								{
									__LIB_1__::func_148(&uLocal_393);
								}
							}
						}
						iLocal_24 = iLocal_23;
					}
				}
			}
		}
		if (__LIB_0__::func_75(&uLocal_393) && __LIB_0__::func_265(&uLocal_393) > MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 20f))
		{
			if (__LIB_0__::func_272(Local_40, 0))
			{
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					if (PED::_IS_PED_HOGTIED(Local_40) || ENTITY::_0x61914209C36EFDDB(Local_40) == 1)
					{
						if (func_493(&Local_125, 1) > 0)
						{
							if (__LIB_12__::func_876(uParam0, "RBT03_COMBATH", 0))
							{
								__LIB_1__::func_148(&uLocal_393);
							}
						}
						else if (!func_487(35))
						{
							if (__LIB_12__::func_876(uParam0, "RBT03_HOGTIED", 0))
							{
								__LIB_1__::func_148(&uLocal_393);
							}
						}
					}
					else if (PED::IS_PED_IN_COMBAT(Local_40, 0))
					{
						if (func_493(&Local_125, 0) > 0)
						{
							if (__LIB_12__::func_876(uParam0, "RBT03_COMBATF", 0))
							{
								__LIB_1__::func_148(&uLocal_393);
							}
						}
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_40) && !ENTITY::IS_ENTITY_DEAD(Local_40))
	{
		if (__LIB_10__::func_166(Local_40, 0))
		{
			if (!__LIB_0__::func_27(iLocal_20, 32768))
			{
				if (!func_487(38))
				{
					if (__LIB_10__::func_102(Local_40, 0))
					{
						if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
						{
							if (__LIB_12__::func_876(uParam0, "RBT03_PUTHOR", 0))
							{
								func_491(38, 1);
							}
						}
					}
				}
				if (!func_487(39))
				{
					if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
					{
						if (!__LIB_0__::func_266(Local_40, vLocal_15, 50f, 1, 1))
						{
							if (__LIB_12__::func_876(uParam0, "RBT03_RETURN1", 0))
							{
								__LIB_1__::func_683(&iLocal_20, 262144);
								func_491(38, 1);
								func_491(35, 1);
								func_491(39, 1);
							}
						}
					}
				}
				else if (!func_487(40))
				{
					if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
					{
						if (__LIB_12__::func_876(uParam0, "RBT03_RETURN2", 0))
						{
							func_491(40, 1);
						}
					}
				}
				else if (!func_487(41))
				{
					if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
					{
						if (__LIB_12__::func_876(uParam0, "RBT03_RETURN3", 0))
						{
							func_491(41, 1);
						}
					}
				}
				else if (!func_487(43))
				{
					if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
					{
						if (__LIB_12__::func_876(uParam0, "RBT03_PUKE2", 0))
						{
							__LIB_1__::func_681(&iLocal_20, 262144);
							func_491(43, 1);
						}
					}
				}
				else if (!func_487(42))
				{
					if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
					{
						if (PED::IS_PED_ON_MOUNT(Global_35))
						{
							if (__LIB_12__::func_876(uParam0, "RBT03_PUKE", 0))
							{
								func_491(42, 1);
							}
						}
						else
						{
							func_491(42, 1);
						}
					}
				}
				else if (!func_487(44))
				{
					if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
					{
						if (__LIB_12__::func_876(uParam0, "RBT03_PUKE2", 0))
						{
							__LIB_1__::func_681(&iLocal_20, 262144);
							func_491(44, 1);
						}
					}
				}
				else if (!func_487(45))
				{
					if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
					{
						if (__LIB_12__::func_876(uParam0, "RBT03_RETURN4", 0))
						{
							__LIB_1__::func_683(&iLocal_20, 262144);
							func_491(45, 1);
						}
					}
				}
				else if (!func_487(46))
				{
					if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
					{
						if (__LIB_12__::func_876(uParam0, "RBT03_RETURN5", 0))
						{
							func_491(46, 1);
						}
					}
				}
				else if (__LIB_0__::func_27(iLocal_20, 262144))
				{
					if (!__LIB_6__::func_903("RBT03_RETURN5") && !__LIB_8__::func_684("RBT03_RETURN5"))
					{
						__LIB_13__::func_92(&Local_402);
						__LIB_1__::func_681(&iLocal_20, 262144);
					}
				}
			}
			if (!func_487(47))
			{
				if (fLocal_39 < 30f)
				{
					if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
					{
						if (__LIB_12__::func_876(uParam0, "RBT03_OUTJAIL", 0))
						{
							func_491(47, 1);
						}
					}
				}
			}
		}
	}
	if (__LIB_0__::func_27(iLocal_20, 262144))
	{
		if (!PED::IS_PED_INJURED(Global_35) && !ENTITY::DOES_ENTITY_EXIST(PED::_GET_LASSO_TARGET(Global_35)))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_40) && !ENTITY::IS_ENTITY_DEAD(Local_40))
			{
				if (__LIB_13__::func_113(&Local_402, 1056964608 /* Float: 0.5f */, "RBT03_SHUSH", 0))
				{
					if (__LIB_8__::func_684("RBT03_RETURN5"))
					{
						if (AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
						{
							__LIB_6__::func_900("RBT03_RETURN5", 1, 0);
						}
						else
						{
							__LIB_6__::func_900("RBT03_RETURN5", 0, 0);
						}
					}
					else if (__LIB_8__::func_684("RBT03_RETURN4"))
					{
						if (AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
						{
							__LIB_6__::func_900("RBT03_RETURN4", 1, 0);
						}
						else
						{
							__LIB_6__::func_900("RBT03_RETURN4", 0, 0);
						}
					}
					else if (__LIB_8__::func_684("RBT03_RETURN3"))
					{
						if (AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
						{
							__LIB_6__::func_900("RBT03_RETURN3", 1, 0);
						}
						else
						{
							__LIB_6__::func_900("RBT03_RETURN3", 0, 0);
						}
					}
					else if (__LIB_8__::func_684("RBT03_RETURN2"))
					{
						if (AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
						{
							__LIB_6__::func_900("RBT03_RETURN2", 1, 0);
						}
						else
						{
							__LIB_6__::func_900("RBT03_RETURN2", 0, 0);
						}
					}
					else if (__LIB_8__::func_684("RBT03_RETURN1"))
					{
						if (AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
						{
							__LIB_6__::func_900("RBT03_RETURN1", 1, 0);
						}
						else
						{
							__LIB_6__::func_900("RBT03_RETURN1", 0, 0);
						}
					}
				}
			}
		}
	}
}

bool func_225(int iParam0)
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

int func_279(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = __LIB_12__::func_767(uParam0);
	iVar1 = 0;
	iVar2 = 1;
	if (__LIB_12__::func_871(uParam0) && !__LIB_12__::func_936(uParam0))
	{
		iVar1 = 1;
		if (iVar0 != 0)
		{
			iVar2 = 0;
		}
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("BHCR"))
	{
		return 0;
	}
	if (!func_582())
	{
		return 0;
	}
	if (!__LIB_13__::func_278(&uLocal_928, vLocal_15, 3, -1082130432 /* Float: -1f */))
	{
		return 0;
	}
	if (!func_583())
	{
		return 0;
	}
	__LIB_0__::func_401(551513105);
	if (!PATHFIND::_0x5AC0944C156E5F44("BH_LaramieSleeping"))
	{
		FIRE::STOP_FIRE_IN_RANGE(vLocal_15, 30f);
		MISC::CLEAR_AREA(vLocal_15, 30f, 16384);
		MISC::CLEAR_AREA(vLocal_15, 30f, 2097152);
		MISC::CLEAR_AREA(vLocal_15, 30f, 65536);
		PATHFIND::_0x7C334FF4D9215912("BH_LaramieSleeping");
	}
	if (!__LIB_0__::func_30(551513105))
	{
		return 0;
	}
	if (iVar1 == 1)
	{
		MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
	}
	else
	{
		MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), false, true, true, 20f, false);
	}
	if (!func_586(uParam0, &Local_40))
	{
		return 0;
	}
	if (iVar2 == 1)
	{
		if (!func_587(uParam0))
		{
			return 0;
		}
		if (!func_588(uParam0))
		{
			return 0;
		}
		if (((((((((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[0]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_26[0], true, false)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[1])) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_26[1], true, false)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[2])) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_26[2], true, false)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[4])) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_26[4], true, false)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[3])) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_26[3], true, false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_125[0 /*85*/]) && !ENTITY::IS_ENTITY_DEAD(Local_125[0 /*85*/]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_26[3]);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_125[0 /*85*/], true);
				TASK::_TASK_USE_SCENARIO_POINT(Local_125[0 /*85*/], iLocal_916[4], 0, 0, false, true, 0, false, -1f, false);
				__LIB_1__::func_683(&(Local_125[0 /*85*/].f_6), 2048);
				func_305(&(Local_125[0 /*85*/]), 6, 1, 0);
			}
			if ((ENTITY::DOES_ENTITY_EXIST(Local_125[1 /*85*/]) && !ENTITY::IS_ENTITY_DEAD(Local_125[1 /*85*/])) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_26[0], false))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_125[1 /*85*/], true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_26[0], "male_b", Local_125[1 /*85*/], 0);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_26[0], "bool_sleep", false, false);
				ANIMSCENE::START_ANIM_SCENE(iLocal_26[0]);
				func_305(&(Local_125[1 /*85*/]), 2, 1, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_40) && !ENTITY::IS_ENTITY_DEAD(Local_40))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_26[1]);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_40, true);
				TASK::_TASK_USE_SCENARIO_POINT(Local_40, iLocal_916[6], 0, 0, false, true, 0, false, -1f, false);
				func_305(&Local_40, 7, 1, 0);
			}
			if (((ENTITY::DOES_ENTITY_EXIST(Local_125[2 /*85*/]) && !ENTITY::IS_ENTITY_DEAD(Local_125[2 /*85*/])) && ENTITY::DOES_ENTITY_EXIST(iLocal_386)) && !ENTITY::IS_ENTITY_DEAD(iLocal_386))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_26[2]);
				iLocal_916[8] = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(iLocal_386, joaat("PROP_HUMAN_PASSED_OUT_TABLE"), 0f, 0f, 0.5f, 80f, 2f, 0, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_125[2 /*85*/], true);
				TASK::_TASK_USE_SCENARIO_POINT(Local_125[2 /*85*/], iLocal_916[8], "PROP_HUMAN_PASSED_OUT_TABLE_MALE_C", 0, false, true, 0, false, -1f, false);
				func_305(&(Local_125[2 /*85*/]), 8, 1, 0);
			}
			__LIB_13__::func_140(&(Local_40.f_21), 0, 1);
			__LIB_3__::func_157(&(Local_40.f_42[0 /*17*/]), "INTERACT_QUESTION", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_3__::func_157(&(Local_40.f_42[1 /*17*/]), "INTERACT_CONFRONT", 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			iVar3 = 0;
			while (iVar3 < Local_125)
			{
				__LIB_2__::func_698(Local_125[iVar3 /*85*/], 20f, 5f, 90f, -60f, 60f);
				__LIB_13__::func_140(&(Local_125[iVar3 /*85*/].f_21), 0, 1);
				__LIB_3__::func_157(&(Local_125[iVar3 /*85*/].f_42[0 /*17*/]), "INTERACT_QUESTION", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_3__::func_157(&(Local_125[iVar3 /*85*/].f_42[1 /*17*/]), "INTERACT_CONFRONT", 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				iVar3++;
			}
			Local_40.f_19 = 994721880;
			Local_40.f_20 = -1738309373;
			Local_125[0 /*85*/].f_20 = -1164439736;
			Local_125[1 /*85*/].f_20 = -329747768;
			Local_125[2 /*85*/].f_20 = -521249804;
			iVar4 = 0;
			while (iVar4 < iLocal_381)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_381[iVar4]) && !ENTITY::IS_ENTITY_DEAD(iLocal_381[iVar4]))
				{
					if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_916[iVar4]))
					{
						if (!PED::_IS_PED_USING_SCENARIO_POINT(iLocal_381[iVar4], iLocal_916[iVar4]))
						{
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_381[iVar4], TASK::_GET_SCENARIO_POINT_COORDS(iLocal_916[iVar4], true), TASK::_GET_SCENARIO_POINT_HEADING(iLocal_916[iVar4], true), true, false, true);
							ENTITY::_0x9587913B9E772D29(iLocal_381[iVar4], 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_381[iVar4], false);
							TASK::_TASK_USE_SCENARIO_POINT(iLocal_381[iVar4], iLocal_916[iVar4], 0, 0, false, true, 0, false, -1f, false);
							if (iVar4 == 0)
							{
								PHYSICS::_0x06AADE17334F7A40(iLocal_381[iVar4], -2002.13f, 434.23f, 121.75f);
							}
							else if (iVar4 == 1)
							{
								PHYSICS::_0x06AADE17334F7A40(iLocal_381[iVar4], -2002.38f, 434.05f, 121.95f);
							}
							else if (iVar4 == 2)
							{
								PHYSICS::_0x06AADE17334F7A40(iLocal_381[iVar4], -1984.55f, 417.56f, 121.45f);
							}
							else if (iVar4 == 3)
							{
								PHYSICS::_0x06AADE17334F7A40(iLocal_381[iVar4], -1984.64f, 417.9f, 121.58f);
							}
						}
					}
				}
				iVar4++;
			}
			AUDIO::_0x0D7FD6A55FD63AEF(49, 3, 0);
		}
		else
		{
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[0]))
			{
				iLocal_26[0] = ANIMSCENE::_CREATE_ANIM_SCENE("script@proc@bountyhunting@odriscollssleeping@sleeping_male_b", 0, "pbl_go_to_sleep", false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(iLocal_26[0]);
			}
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[1]))
			{
				iLocal_26[1] = ANIMSCENE::_CREATE_ANIM_SCENE("script@proc@bountyhunting@odriscollssleeping@sleeping_male_c", 0, "pbl_go_to_sleep", false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(iLocal_26[1]);
			}
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[2]))
			{
				iLocal_26[2] = ANIMSCENE::_CREATE_ANIM_SCENE("script@proc@bountyhunting@odriscollssleeping@sleeping_male_d", 0, "pbl_go_to_sleep", false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(iLocal_26[2]);
			}
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[4]))
			{
				iLocal_26[4] = ANIMSCENE::_CREATE_ANIM_SCENE("script@proc@bountyhunting@ODriscollsSleeping@hogtie", 0, "pbl_hogtie_enter_bk", false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(iLocal_26[4]);
			}
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[3]))
			{
				iLocal_26[3] = ANIMSCENE::_CREATE_ANIM_SCENE("script@proc@bountyhunting@ODriscollsSleeping@drunk", 0, "pbl_go_to_sleep", false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(iLocal_26[3]);
			}
			return 0;
		}
	}
	__LIB_13__::func_137(&uLocal_927, vLocal_15, 8f);
	__LIB_3__::func_414(&uLocal_926, vLocal_15, 8.5f, 1, 45, 0);
	__LIB_12__::func_875(uParam0, Global_35, "John", 0);
	__LIB_13__::func_114(&Local_402);
	return 1;
}

bool func_298(var uParam0)
{
	__LIB_13__::func_110(&Local_402, Global_1347702[uParam0->f_174 /*49*/].f_24, Global_1347702[uParam0->f_174 /*49*/].f_18, 0, 0);
	__LIB_13__::func_278(&uLocal_928, vLocal_15, 3, -1082130432 /* Float: -1f */);
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	if (iLocal_894[0] == 0)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1347702[uParam0->f_174 /*49*/].f_24, true) < Global_1347702[uParam0->f_174 /*49*/].f_18)
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT(sLocal_900[0]))
			{
				iLocal_894[2] = 0;
				iLocal_894[0] = 1;
			}
		}
	}
	else if (iLocal_894[2] == 0)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1347702[uParam0->f_174 /*49*/].f_24, true) > Global_1347702[uParam0->f_174 /*49*/].f_18)
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT(sLocal_900[2]))
			{
				iLocal_894[2] = 1;
				iLocal_894[0] = 0;
			}
		}
	}
	func_216(uParam0);
	func_217(uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_40))
	{
		if (__LIB_1__::func_410(Global_36, vLocal_15, 35f, 1))
		{
			__LIB_1__::func_683(&iLocal_20, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_40) && ENTITY::IS_ENTITY_DEAD(Local_40))
	{
		iLocal_786 = 1;
		__LIB_1__::func_683(&iLocal_20, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_40) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_40, Global_35, 1, 1))
	{
		iLocal_786 = 1;
		__LIB_1__::func_683(&iLocal_20, 1);
	}
	if (__LIB_0__::func_27(iLocal_20, 4096))
	{
		iLocal_786 = 1;
		__LIB_1__::func_683(&iLocal_20, 1);
	}
	if (__LIB_0__::func_27(iLocal_20, 512))
	{
		iLocal_786 = 1;
		__LIB_1__::func_683(&iLocal_20, 1);
	}
	if (__LIB_0__::func_27(iLocal_20, 1))
	{
		return true;
	}
	return false;
}

void func_305(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iParam0->f_4 = iParam2;
	iParam0->f_2 = iParam1;
	if (iParam3 != -1)
	{
		iParam0->f_5 = iParam3;
	}
}

int func_323(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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
			func_651(uParam4);
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

void func_330(var uParam0)
{
	if (!__LIB_0__::func_27(iLocal_20, 16384))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_40))
		{
			if (PED::_IS_PED_HOGTIED(Local_40) || ENTITY::IS_ENTITY_DEAD(Local_40))
			{
				if (func_493(&Local_125, 1) == 0 || (__LIB_10__::func_166(Local_40, 0) && !__LIB_0__::func_266(Local_40, vLocal_15, 50f, 1, 1)))
				{
					__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
					AUDIO::TRIGGER_MUSIC_EVENT(sLocal_900[2]);
					AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
					__LIB_1__::func_683(&iLocal_20, 16384);
				}
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_20, 32768))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_40))
		{
			if (__LIB_10__::func_166(Local_40, 0))
			{
				if (fLocal_39 < 30f)
				{
					__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
					__LIB_1__::func_683(&iLocal_20, 32768);
				}
			}
		}
	}
}

void func_338(int iParam0)
{
	if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_906))
	{
		if (STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			if (__LIB_10__::func_166(iParam0, 0))
			{
				if (__LIB_8__::func_684("RBT03_PUKE2") && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("RBT03_PUKE2") == 0)
				{
					iLocal_906 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("scr_human_puke", iParam0, -0.075f, -0.125f, 0f, 0f, 0f, 0f, 21030, 1.5f, false, false, false);
				}
			}
		}
	}
	else if (func_487(43) && !__LIB_8__::func_684("RBT03_PUKE2"))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_906, false);
	}
}

bool func_339(var uParam0, bool bParam1)
{
	func_715(uParam0);
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
				func_730(uParam0);
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

bool func_340(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
	{
		func_730(uParam0);
	}
	if (__LIB_2__::func_157(uParam0->f_306, Global_36))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 328, true);
	}
	func_715(uParam0);
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
			if (func_737(uParam0))
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
					if (__LIB_13__::func_141(uParam0))
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
						__LIB_13__::func_144(uParam0);
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
				func_752(uParam0);
				return true;
			}
			break;
	}
	return false;
}

void func_375(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
						func_788(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_788(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_788(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_788(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_788(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_788(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_788(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_788(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_788(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_788(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_788(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_788(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_788(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_788(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_788(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_788(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_788(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_788(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_788(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_788(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_788(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_788(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_788(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_788(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_788(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_790();
						func_791(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_788(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_375(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_375(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_375(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_788(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_788(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_826();
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
							func_788(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

Vector3 func_379(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	vVar0 = { func_833(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { func_833(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

int func_468(int iParam0, int iParam1)
{
	var uVar0;
	return func_930(&uVar0, iParam0, iParam1);
}

void func_479(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
		{
			iParam1->f_82 = __LIB_0__::func_665(*iParam1, Global_35, 1, 1);
			if (!__LIB_0__::func_27(iParam1->f_6, 256))
			{
				if (__LIB_0__::func_27(iParam1->f_6, 32))
				{
					func_305(iParam1, 3, 0, 0);
					__LIB_1__::func_683(&(iParam1->f_6), 256);
				}
			}
			if (!__LIB_0__::func_27(iParam1->f_6, 8))
			{
				if ((!__LIB_0__::func_27(iParam1->f_6, 4096) && !__LIB_0__::func_27(iParam1->f_6, 1048576)) && !__LIB_0__::func_27(iLocal_20, 65536))
				{
					if ((func_936(iParam1, &uLocal_787, &uLocal_843) || __LIB_0__::func_27(iLocal_20, 4096)) || __LIB_0__::func_27(iLocal_20, 2048))
					{
						__LIB_1__::func_748(&(iParam1->f_17), 1, 1);
						__LIB_1__::func_748(&(iParam1->f_18), 1, 1);
						func_305(iParam1, 4, 0, 0);
						__LIB_1__::func_480(iParam1);
						__LIB_2__::func_480(&(iParam1->f_42), 0, 0, 1, 0);
						__LIB_8__::func_771(*iParam1, 0, 1, 0);
						__LIB_1__::func_683(&(iParam1->f_6), 8);
					}
				}
			}
			if ((!__LIB_0__::func_27(iParam1->f_6, 4096) && !__LIB_0__::func_27(iParam1->f_6, 1048576)) && !__LIB_0__::func_27(iLocal_20, 65536))
			{
				if ((!__LIB_0__::func_27(iParam1->f_6, 8) && !__LIB_0__::func_27(iParam1->f_6, 32)) && !__LIB_0__::func_27(iLocal_20, 8192))
				{
					iParam1->f_77 = func_940(iParam1, &(iParam1->f_21), 3.25f, &(iParam1->f_42), 0f, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
					if (iParam1->f_77 == 0 || iParam1->f_77 == 1)
					{
						__LIB_2__::func_480(&(iParam1->f_42), 0, 0, 1, 0);
						__LIB_1__::func_480(iParam1);
						__LIB_1__::func_683(&(iParam1->f_6), 32);
					}
				}
			}
			if (!__LIB_0__::func_27(iParam1->f_6, 4096))
			{
				if (((((((!__LIB_0__::func_27(iParam1->f_6, 8) && !__LIB_0__::func_27(iParam1->f_6, 1048576)) && !__LIB_0__::func_27(iParam1->f_6, 32)) && !__LIB_0__::func_27(iLocal_20, 8192)) && !PED::IS_PED_ON_MOUNT(Global_35)) && func_941(Global_35)) && !__LIB_10__::func_896(PLAYER::PLAYER_ID(), *iParam1)) && func_942(*iParam1))
				{
					if (__LIB_0__::func_139(iParam1->f_17))
					{
						HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(*iParam1, (3.25f * 2f), 3, 1, iParam1->f_19, 0, 0);
					}
					if (!__LIB_0__::func_139(iParam1->f_17))
					{
						iParam1->f_17 = __LIB_2__::func_403("HOGTIE_PED", joaat("INPUT_HOGTIE"), *iParam1, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
						__LIB_4__::func_12(iParam1->f_17, iParam1->f_19, 0, 1);
						__LIB_2__::func_450(iParam1->f_17, (3.25f * 2f), 1);
					}
					else if (__LIB_1__::func_732(iParam1->f_17, 1))
					{
						__LIB_1__::func_748(&(iParam1->f_17), 1, 1);
						__LIB_1__::func_748(&(iParam1->f_18), 1, 1);
						func_305(iParam1, 1, 0, 0);
						__LIB_1__::func_683(&(iParam1->f_6), 4096);
					}
				}
				else if (__LIB_0__::func_139(iParam1->f_17))
				{
					__LIB_1__::func_748(&(iParam1->f_17), 1, 1);
				}
			}
			if (!__LIB_0__::func_27(iParam1->f_6, 1048576))
			{
				if (((((((!__LIB_0__::func_27(iParam1->f_6, 8) && !__LIB_0__::func_27(iParam1->f_6, 4096)) && !__LIB_0__::func_27(iParam1->f_6, 32)) && !__LIB_0__::func_27(iLocal_20, 8192)) && !PED::IS_PED_ON_MOUNT(Global_35)) && !func_941(Global_35)) && !__LIB_10__::func_896(PLAYER::PLAYER_ID(), *iParam1)) && func_942(*iParam1))
				{
					if (__LIB_0__::func_139(iParam1->f_18))
					{
						HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(*iParam1, 3.25f, 3, 1, iParam1->f_20, 0, 0);
					}
					if (!__LIB_0__::func_139(iParam1->f_18))
					{
						iParam1->f_18 = __LIB_2__::func_403("INTERACT_STEALTH_KILL", joaat("INPUT_INTERACT_LOCKON_NEG"), *iParam1, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
						__LIB_4__::func_12(iParam1->f_18, iParam1->f_20, 0, 1);
						__LIB_2__::func_450(iParam1->f_18, 3.25f, 1);
					}
					else if (__LIB_1__::func_732(iParam1->f_18, 1))
					{
						__LIB_1__::func_748(&(iParam1->f_17), 1, 1);
						__LIB_1__::func_748(&(iParam1->f_18), 1, 1);
						func_305(iParam1, 5, 0, 0);
						__LIB_1__::func_683(&(iParam1->f_6), 1048576);
					}
				}
				else if (__LIB_0__::func_139(iParam1->f_18))
				{
					__LIB_1__::func_748(&(iParam1->f_18), 1, 1);
				}
			}
			if (!__LIB_0__::func_27(iParam1->f_6, 4))
			{
				if (PED::_IS_PED_HOGTIED(*iParam1) || __LIB_3__::func_458(*iParam1) == 1)
				{
					func_305(iParam1, 9, 0, 0);
					__LIB_1__::func_683(&(iParam1->f_6), 4);
				}
			}
			if (!__LIB_0__::func_27(iParam1->f_6, 64))
			{
				if (PED::GET_PED_CONFIG_FLAG(*iParam1, 11, false))
				{
					__LIB_1__::func_683(&(iParam1->f_6), 64);
				}
			}
			switch (iParam1->f_2)
			{
				case 7:
					if (iParam1->f_4 == 0)
					{
						iParam1->f_4 = 1;
					}
					else
					{
						__LIB_1__::func_683(&(iParam1->f_6), 16);
						__LIB_1__::func_683(&(iParam1->f_6), 33554432);
						if (!__LIB_0__::func_27(iParam1->f_6, 16777216))
						{
							if (__LIB_0__::func_27(iParam1->f_6, 16))
							{
								PED::_0x8B3B71C80A29A4BB(*iParam1, joaat("MOODSLEEPING"), 5);
								PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(*iParam1, "mood_sleeping", 0);
								__LIB_1__::func_683(&(iParam1->f_6), 16777216);
							}
						}
						if (__LIB_0__::func_27(iParam1->f_6, 16777216))
						{
							func_948(iParam1);
						}
						if (!__LIB_0__::func_27(iLocal_20, 65536))
						{
							if (__LIB_9__::func_375(Global_35) == *iParam1)
							{
								if (((PED::_IS_PED_HOGTIED(*iParam1) || PED::_IS_PED_BEING_HOGTIED(*iParam1)) || ENTITY::_0x61914209C36EFDDB(*iParam1) == 3) || ENTITY::_0x61914209C36EFDDB(*iParam1) == 2)
								{
									AUDIO::STOP_PED_SPEAKING(Global_35, true);
									__LIB_1__::func_683(&iLocal_20, 1024);
									__LIB_1__::func_683(&iLocal_20, 65536);
								}
							}
						}
					}
					break;
				case 2:
					if (iParam1->f_4 == 0)
					{
						iParam1->f_4 = 1;
					}
					else
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[1]))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[1], "pbl_lookaround");
							ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[1], "pbl_small_react");
							ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[1], "pbl_medium_react");
							ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[1], "pbl_stealth_kill_lt_c");
							ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[1], "pbl_stealth_kill_rt_c");
							ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[1], "pbl_react_bk");
							ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[1], "pbl_react_fwd");
							ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[1], "pbl_react_lt");
							ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[1], "pbl_react_rt");
						}
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[4]))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[4], "pbl_hogtie_enter_bk");
							ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[4], "pbl_hogtie_enter_lt");
							ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[4], "pbl_hogtie_enter_rt");
						}
					}
					break;
				case 1:
					if (iParam1->f_4 == 0)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[4]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_26[4], true, false))
						{
							if ((ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[4], "pbl_hogtie_enter_lt") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[4], "pbl_hogtie_enter_rt")) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[4], "pbl_hogtie_enter_bk"))
							{
								WEAPON::_0x72D4CB5DB927009C(joaat("WEAPON_LASSO"), -1, 0);
								sLocal_32[4] = func_950(*iParam1);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_26[4], "male_c", *iParam1, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_26[4], "player", Global_35, 0);
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_26[4], sLocal_32[4], true);
								TASK::TASK_ENTER_ANIM_SCENE(Global_35, iLocal_26[4], "player", sLocal_32[4], 1.48f, 0, 1, 20000, -1082130432 /* Float: -1f */);
								WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_LASSO"), false, 0, false, false);
								TASK::TASK_SWAP_WEAPON(Global_35, 1, 1, 0, 0);
								TASK::TASK_LOOK_AT_ENTITY(Global_35, *iParam1, 5000, 2048, 51, 0);
								iParam1->f_4 = 1;
							}
						}
					}
					else if (!__LIB_0__::func_27(iParam1->f_6, 8192))
					{
						if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[4]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_26[4], true, false)) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[4], sLocal_32[4]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 1369124074, true) == 1)
							{
								if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
								{
									PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
								}
							}
							if (ANIMSCENE::_0x337F1CC8EE895601(iLocal_26[4], "player") || TASK::GET_SCRIPT_TASK_STATUS(Global_35, 1369124074, true) == 8)
							{
								if (func_941(Global_35))
								{
									TASK::TASK_CLEAR_LOOK_AT(Global_35);
									ANIMSCENE::START_ANIM_SCENE(iLocal_26[4]);
									__LIB_1__::func_683(&(iParam1->f_6), 8192);
								}
							}
						}
					}
					break;
				case 5:
					if (iParam1->f_4 == 0)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[1]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_26[1], false))
						{
							if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[1], "pbl_stealth_kill_lt_c") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[1], "pbl_stealth_kill_rt_c"))
							{
								sLocal_32[1] = func_951(*iParam1);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_26[1], "player", Global_35, 0);
								TASK::TASK_ENTER_ANIM_SCENE(Global_35, iLocal_26[1], "player", sLocal_32[1], 1.48f, 0, 1, 20000, -1082130432 /* Float: -1f */);
								WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
								TASK::TASK_SWAP_WEAPON(Global_35, 1, 1, 0, 0);
								TASK::TASK_LOOK_AT_ENTITY(Global_35, *iParam1, 5000, 2048, 51, 0);
								iParam1->f_4 = 1;
							}
						}
					}
					else if (!__LIB_0__::func_27(iParam1->f_6, 2097152))
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[1]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_26[1], false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 1369124074, true) == 1)
							{
								if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
								{
									PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
								}
							}
							if (ANIMSCENE::_0x337F1CC8EE895601(iLocal_26[1], "player") || TASK::GET_SCRIPT_TASK_STATUS(Global_35, 1369124074, true) == 8)
							{
								if (__LIB_13__::func_565(Global_35))
								{
									TASK::TASK_CLEAR_LOOK_AT(Global_35);
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_26[1], "knife", WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_35, 4), 0);
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_26[1], sLocal_32[1], true);
									__LIB_1__::func_683(&(iParam1->f_6), 2097152);
								}
							}
						}
					}
					break;
				case 3:
					if (iParam1->f_4 == 0)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[1]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_26[1], false))
						{
							if ((ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[1], "pbl_lookaround") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[1], "pbl_small_react")) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[1], "pbl_medium_react"))
							{
								ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_26[1], "bool_sleep", true, false);
								if (iParam1->f_77 == 0)
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_26[1], "pbl_small_react", true);
								}
								else if (iParam1->f_77 == 1)
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_26[1], "pbl_medium_react", true);
								}
								__LIB_1__::func_683(&(iParam1->f_6), 32768);
								iParam1->f_4 = 1;
							}
						}
						else
						{
							if (PED::IS_PED_USING_ANY_SCENARIO(*iParam1))
							{
								if (__LIB_0__::func_27(iParam1->f_6, 32))
								{
									PED::_0xEC6935EBE0847B90(*iParam1, Global_36);
								}
								else
								{
									PED::_0x463803429297117C(*iParam1, Global_36, 1, 0);
								}
							}
							PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(*iParam1);
							TASK::TASK_REACT(*iParam1, Global_35, Global_36, "TaskCombat_Low", 3f, 0, 4);
							TASK::TASK_LOOK_AT_ENTITY(*iParam1, Global_35, 7500, 2048, 51, 0);
							iParam1->f_4 = 1;
						}
					}
					else if (__LIB_0__::func_27(iParam1->f_6, 32768))
					{
						if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[1]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_26[1], false)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(*iParam1, iLocal_26[1]))
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_26[1], "bool_sleep", false, false);
							if ((ANIMSCENE::_0x8D81E7824B7753F7(iLocal_26[1], "sleeping", 1) || (func_487(3) && !__LIB_8__::func_684("RBT03_ILOTQUE"))) || (func_487(4) && !__LIB_8__::func_684("RBT03_ILOTCALL")))
							{
								func_305(iParam1, 4, 0, 0);
								__LIB_1__::func_683(&(iParam1->f_6), 8);
							}
						}
					}
					else if ((TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 2121492476, true) == 8 || (func_487(3) && !__LIB_8__::func_684("RBT03_ILOTQUE"))) || (func_487(4) && !__LIB_8__::func_684("RBT03_ILOTCALL")))
					{
						func_305(iParam1, 4, 0, 0);
						__LIB_1__::func_683(&(iParam1->f_6), 8);
					}
					break;
				case 4:
					if (iParam1->f_4 == 0)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[1]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_26[1], false))
						{
							if (((ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[1], "pbl_react_bk") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[1], "pbl_react_lt")) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[1], "pbl_react_rt")) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[1], "pbl_react_fwd"))
							{
								sLocal_32[1] = func_953(*iParam1);
								TASK::TASK_LOOK_AT_ENTITY(*iParam1, Global_35, 6000, 2048, 51, 0);
								ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_26[1], "bool_sleep", true, false);
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_26[1], sLocal_32[1], true);
								__LIB_1__::func_683(&(iParam1->f_6), 262144);
								iParam1->f_4 = 1;
							}
						}
						else
						{
							if (PED::IS_PED_USING_ANY_SCENARIO(*iParam1))
							{
								PED::_0x463803429297117C(*iParam1, Global_36, 1, 0);
							}
							PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(*iParam1);
							TASK::CLEAR_PED_TASKS(*iParam1, true, false);
							TASK::TASK_LOOK_AT_ENTITY(*iParam1, Global_35, 6000, 2048, 51, 0);
							iParam1->f_4 = 1;
						}
					}
					else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[1]))
					{
						if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_26[1], "male_c") || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_26[1], "male_c"))
						{
							if (func_493(&Local_125, 0) == 0)
							{
								__LIB_1__::func_683(&(iParam1->f_6), 8388608);
							}
							iLocal_24 = iLocal_23;
							func_305(iParam1, 11, 0, 0);
							__LIB_1__::func_683(&(iParam1->f_6), 524288);
						}
					}
					else if (!PED::IS_PED_USING_ANY_SCENARIO(*iParam1))
					{
						if (func_493(&Local_125, 0) == 0)
						{
							__LIB_1__::func_683(&(iParam1->f_6), 8388608);
						}
						iLocal_24 = iLocal_23;
						func_305(iParam1, 11, 0, 0);
						__LIB_1__::func_683(&(iParam1->f_6), 524288);
					}
					break;
				case 9:
					if (iParam1->f_4 == 0)
					{
						iParam1->f_4 = 1;
					}
					else if (!PED::_IS_PED_HOGTIED(*iParam1))
					{
						__LIB_1__::func_681(&(iParam1->f_6), 4);
						if (func_493(&Local_125, 1) == 0)
						{
							func_305(iParam1, 10, 0, 0);
						}
						else
						{
							func_305(iParam1, 11, 0, 0);
						}
					}
					break;
				case 10:
					if (iParam1->f_4 == 0)
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
						iParam1->f_4 = 1;
					}
					break;
				case 11:
					PED::SET_PED_RESET_FLAG(*iParam1, 53, true);
					if (iParam1->f_4 == 0)
					{
						__LIB_0__::func_325(&(iParam1->f_1));
						__LIB_2__::func_698(*iParam1, 1114636288 /* Float: 60f */, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
						__LIB_1__::func_683(&iLocal_20, 4096);
						if (PED::IS_PED_USING_ANY_SCENARIO(*iParam1))
						{
							PED::_0x802092B07E3B1EEA(*iParam1, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
						}
						PED::SET_PED_CONFIG_FLAG(*iParam1, 167, false);
						PED::_0xFC3DB99C8144CD81(*iParam1, iLocal_909[1], 0, 0, 0);
						PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 1);
						PED::SET_PED_COMBAT_RANGE(*iParam1, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 42, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 50, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 28, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
						TASK::TASK_COMBAT_PED(*iParam1, Global_35, 16777216, 0);
						iParam1->f_4 = 1;
					}
					break;
			}
		}
		else
		{
			__LIB_0__::func_325(&(iParam1->f_1));
			__LIB_1__::func_748(&(iParam1->f_17), 1, 1);
			__LIB_1__::func_748(&(iParam1->f_18), 1, 1);
			if (!__LIB_0__::func_27(iParam1->f_6, 1))
			{
				__LIB_1__::func_683(&(iParam1->f_6), 1);
			}
			if (!__LIB_10__::func_133(uParam0->f_174, 1))
			{
				__LIB_10__::func_142(uParam0->f_174, 1);
			}
		}
		if (!__LIB_0__::func_27(iParam1->f_6, 4194304))
		{
			if (__LIB_0__::func_27(iParam1->f_6, 2097152))
			{
				if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_26[1], "player") || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_26[1], "player"))
				{
					__LIB_1__::func_748(&(iParam1->f_18), 1, 1);
					__LIB_1__::func_683(&(iParam1->f_6), 4194304);
				}
			}
		}
		if (!__LIB_0__::func_27(iParam1->f_6, 16384))
		{
			if (__LIB_0__::func_27(iParam1->f_6, 8192))
			{
				if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_26[4], "player") || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_26[4], "player"))
				{
					__LIB_1__::func_748(&(iParam1->f_18), 1, 1);
					if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
					{
						ENTITY::_0x18FF3110CF47115D(*iParam1, 0, 1);
						TASK::TASK_HOGTIEABLE(*iParam1);
						PED::_0x2208438012482A1A(*iParam1, false, false);
						TASK::TASK_HOGTIE_TARGET_PED(Global_35, *iParam1);
						AUDIO::STOP_PED_SPEAKING(Global_35, true);
						__LIB_1__::func_683(&iLocal_20, 1024);
					}
					__LIB_1__::func_683(&(iParam1->f_6), 16384);
				}
			}
		}
		if (!__LIB_0__::func_27(iLocal_20, 131072))
		{
			if (__LIB_0__::func_27(iLocal_20, 65536))
			{
				if (!PED::_IS_PED_HOGTYING(Global_35))
				{
					__LIB_1__::func_683(&iLocal_20, 131072);
				}
			}
		}
		if (__LIB_0__::func_27(iLocal_20, 1024))
		{
			if (!PED::_IS_PED_HOGTYING(Global_35))
			{
				AUDIO::STOP_PED_SPEAKING(Global_35, false);
				__LIB_1__::func_681(&iLocal_20, 1024);
			}
		}
	}
}

void func_480(var uParam0, int iParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
		{
			iParam1->f_82 = __LIB_0__::func_665(*iParam1, Global_35, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(Local_40))
			{
				iParam1->f_83 = __LIB_0__::func_665(*iParam1, Local_40, 1, 1);
			}
			if (!__LIB_0__::func_27(iParam1->f_6, 256))
			{
				if (__LIB_0__::func_27(iParam1->f_6, 32))
				{
					func_305(iParam1, 3, 0, 0);
					__LIB_1__::func_683(&(iParam1->f_6), 256);
				}
			}
			if (!__LIB_0__::func_27(iParam1->f_6, 8))
			{
				if (!__LIB_0__::func_27(iParam1->f_6, 1048576))
				{
					if ((((((__LIB_0__::func_27(iParam1->f_6, 16) && func_936(iParam1, &uLocal_787, &uLocal_843)) || (!__LIB_0__::func_27(iParam1->f_6, 16) && func_936(iParam1, &uLocal_815, &uLocal_844))) || __LIB_0__::func_27(iLocal_20, 4096)) || __LIB_0__::func_27(iLocal_20, 2048)) || (func_487(8) && !__LIB_8__::func_684("RBT03_HOGA"))) || __LIB_0__::func_27(iLocal_20, 131072))
					{
						__LIB_1__::func_748(&(iParam1->f_18), 1, 1);
						if (__LIB_0__::func_27(iParam1->f_6, 16))
						{
							func_305(iParam1, 4, 0, 0);
						}
						else if (__LIB_0__::func_27(iParam1->f_6, 131072))
						{
							func_305(iParam1, 3, 0, 0);
						}
						else
						{
							func_305(iParam1, 4, 0, 0);
						}
						__LIB_2__::func_698(*iParam1, 1114636288 /* Float: 60f */, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
						__LIB_1__::func_480(iParam1);
						__LIB_2__::func_480(&(iParam1->f_42), 0, 0, 1, 0);
						__LIB_8__::func_771(*iParam1, 0, 1, 0);
						__LIB_1__::func_683(&(iParam1->f_6), 8);
					}
				}
			}
			if (!__LIB_0__::func_27(iParam1->f_6, 1048576))
			{
				if ((!__LIB_0__::func_27(iParam1->f_6, 8) && !__LIB_0__::func_27(iParam1->f_6, 32)) && !__LIB_0__::func_27(iLocal_20, 8192))
				{
					if (VOLUME::_DOES_VOLUME_EXIST(iParam1->f_3))
					{
						iParam1->f_77 = func_940(iParam1, &(iParam1->f_21), 3.25f, &(iParam1->f_42), 0f, 3, 0, 0, 1, iParam1->f_3, 0, 2, -1082130432 /* Float: -1f */);
					}
					else
					{
						iParam1->f_77 = func_940(iParam1, &(iParam1->f_21), 3.25f, &(iParam1->f_42), 0f, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
					}
					if (iParam1->f_77 == 0 || iParam1->f_77 == 1)
					{
						__LIB_2__::func_480(&(iParam1->f_42), 0, 0, 1, 0);
						__LIB_1__::func_480(iParam1);
						__LIB_1__::func_683(&(iParam1->f_6), 32);
					}
				}
			}
			if (!__LIB_0__::func_27(iParam1->f_6, 1048576))
			{
				if ((((((!__LIB_0__::func_27(iParam1->f_6, 8) && !__LIB_0__::func_27(iParam1->f_6, 32)) && !__LIB_0__::func_27(iLocal_20, 8192)) && !PED::IS_PED_ON_MOUNT(Global_35)) && __LIB_1__::func_205(Global_35, iParam1->f_3, 1, 0)) && !__LIB_10__::func_896(PLAYER::PLAYER_ID(), *iParam1)) && func_942(*iParam1))
				{
					if (__LIB_0__::func_139(iParam1->f_18))
					{
						HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(*iParam1, 3.25f, 3, 1, iParam1->f_20, "", 0);
					}
					if (!__LIB_0__::func_139(iParam1->f_18))
					{
						iParam1->f_18 = __LIB_2__::func_403("INTERACT_STEALTH_KILL", joaat("INPUT_INTERACT_LOCKON_NEG"), *iParam1, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
						__LIB_4__::func_12(iParam1->f_18, iParam1->f_20, 0, 1);
						__LIB_2__::func_450(iParam1->f_18, 3.25f, 1);
					}
					else if (__LIB_1__::func_732(iParam1->f_18, 1))
					{
						__LIB_1__::func_748(&(iParam1->f_18), 1, 1);
						func_305(iParam1, 5, 0, 0);
						__LIB_1__::func_683(&(iParam1->f_6), 1048576);
					}
				}
				else
				{
					__LIB_1__::func_748(&(iParam1->f_18), 1, 1);
				}
			}
			if (!__LIB_0__::func_27(iParam1->f_6, 4))
			{
				if (PED::_IS_PED_HOGTIED(*iParam1) || __LIB_3__::func_458(*iParam1) == 1)
				{
					__LIB_1__::func_683(&(iParam1->f_6), 4);
				}
			}
			if (!__LIB_0__::func_27(iParam1->f_6, 64))
			{
				if (PED::GET_PED_CONFIG_FLAG(*iParam1, 11, false))
				{
					__LIB_1__::func_683(&(iParam1->f_6), 64);
				}
			}
			switch (iParam1->f_2)
			{
				case 6:
					if (iParam1->f_4 == 0)
					{
						iParam1->f_4 = 1;
					}
					else
					{
						if (!__LIB_0__::func_75(&(iParam1->f_7)))
						{
							__LIB_1__::func_283(&(iParam1->f_7), 0);
						}
						if (PED::_IS_PED_USING_SCENARIO_POINT(*iParam1, iLocal_916[4]))
						{
							func_955(*iParam1);
							if (__LIB_0__::func_27(iParam1->f_6, 2048))
							{
								if (__LIB_0__::func_27(iLocal_20, 1))
								{
									__LIB_13__::func_138(iParam1, 1);
									__LIB_1__::func_681(&(iParam1->f_6), 2048);
								}
							}
							if ((func_487(0) && __LIB_8__::func_684("RBT03_IG2_A")) && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("RBT03_IG2_A") > 1)
							{
								func_305(iParam1, 7, 0, 0);
							}
						}
					}
					break;
				case 7:
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(*iParam1, (1f * 0.25f));
					if (iParam1->f_4 == 0)
					{
						PED::_0x406CCF555B04FAD3(*iParam1, 1, 1f);
						PED::_SET_PED_BLACKBOARD_BOOL(*iParam1, "IsDrunk", true, -1);
						PED::_SET_PED_BLACKBOARD_FLOAT(*iParam1, "Drunkness", 1f, -1);
						PED::_0xEC6935EBE0847B90(*iParam1, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_916[5], true));
						TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_916[5], 0, 0, true, false, 0, false, -1f, false);
						iParam1->f_4 = 1;
					}
					else
					{
						if (__LIB_0__::func_27(iParam1->f_6, 16777216))
						{
							func_948(iParam1);
						}
						if (!__LIB_0__::func_27(iParam1->f_6, 16777216))
						{
							if (__LIB_0__::func_27(iParam1->f_6, 16))
							{
								if (TASK::_0x02EBBB3989B7E695(*iParam1))
								{
									PED::_0x8B3B71C80A29A4BB(*iParam1, joaat("MOODSLEEPING"), 5);
									PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(*iParam1, "mood_sleeping", 0);
									__LIB_1__::func_683(&(iParam1->f_6), 16777216);
								}
							}
						}
						if (!__LIB_0__::func_27(iParam1->f_6, 16))
						{
							if (PED::_IS_PED_USING_SCENARIO_POINT(*iParam1, iLocal_916[5]))
							{
								if (TASK::_0x02EBBB3989B7E695(*iParam1))
								{
									__LIB_0__::func_325(&(iParam1->f_1));
									__LIB_1__::func_683(&(iParam1->f_6), 16);
									__LIB_1__::func_683(&(iParam1->f_6), 33554432);
								}
							}
						}
					}
					break;
				case 8:
					if (iParam1->f_4 == 0)
					{
						iParam1->f_4 = 1;
					}
					else
					{
						__LIB_1__::func_683(&(iParam1->f_6), 16);
						if (!__LIB_0__::func_27(iParam1->f_6, 16777216))
						{
							if (__LIB_0__::func_27(iParam1->f_6, 16))
							{
								PED::_0x8B3B71C80A29A4BB(*iParam1, joaat("MOODSLEEPING"), 5);
								PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(*iParam1, "mood_sleeping", 0);
								__LIB_1__::func_683(&(iParam1->f_6), 16777216);
							}
						}
						if (__LIB_0__::func_27(iParam1->f_6, 16777216))
						{
							func_948(iParam1);
						}
						PED::_REQUEST_PED_EMOTIONAL_PRESET(*iParam1, "TaskCombat_Low");
						PED::_REQUEST_PED_EMOTIONAL_PRESET(*iParam1, "TaskCombat_Panic");
						PED::_REQUEST_PED_EMOTIONAL_PRESET(*iParam1, "Default_Brave");
						PED::_REQUEST_PED_EMOTIONAL_PRESET(*iParam1, "Default_Panic");
						PED::_REQUEST_PED_EMOTIONAL_PRESET(*iParam1, "Default_Scared");
						PED::_REQUEST_PED_EMOTIONAL_PRESET(*iParam1, "Default_Nervous");
						PED::_REQUEST_PED_EMOTIONAL_PRESET(*iParam1, "Default_Shocked");
					}
					break;
				case 2:
					if (iParam1->f_4 == 0)
					{
						iParam1->f_4 = 1;
					}
					else
					{
						switch (iParam2)
						{
							case 0:
								if (!__LIB_0__::func_27(iParam1->f_6, 16))
								{
									if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[3]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_26[3], false)) && ANIMSCENE::_0x8D81E7824B7753F7(iLocal_26[3], "sleeping", 1)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(*iParam1, iLocal_26[3]))
									{
										__LIB_1__::func_683(&(iParam1->f_6), 16);
									}
								}
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[3]))
								{
									ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[3], "pbl_lookaround");
									ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[3], "pbl_small_react");
									ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[3], "pbl_medium_react");
									ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[3], "pbl_stealth_kill_lt_a");
									ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[3], "pbl_stealth_kill_rt_a");
									ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[3], "pbl_react_bk");
									ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[3], "pbl_react_rt");
									ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[3], "pbl_react_lt");
									ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[3], "pbl_react_fwd");
								}
								break;
							case 1:
								PED::SET_PED_CONFIG_FLAG(*iParam1, 138, true);
								PED::SET_PED_CONFIG_FLAG(*iParam1, 354, true);
								__LIB_1__::func_683(&(iParam1->f_6), 16);
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[0]))
								{
									ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[0], "pbl_lookaround");
									ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[0], "pbl_small_react");
									ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[0], "pbl_medium_react");
									ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[0], "pbl_stealth_kill_b");
									ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[0], "pbl_react_bk");
									ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[0], "pbl_react_fwd");
									ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[0], "pbl_react_lt");
									ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[0], "pbl_react_rt");
								}
								break;
							case 2:
								__LIB_1__::func_683(&(iParam1->f_6), 16);
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[2]))
								{
									ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[2], "pbl_lookaround");
									ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[2], "pbl_small_react");
									ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[2], "pbl_medium_react");
									ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[2], "pbl_stealth_kill_lt_d");
									ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[2], "pbl_stealth_kill_rt_d");
									ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[2], "pbl_stealth_kill_fwd_d");
									ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[2], "pbl_react_bk");
									ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[2], "pbl_react_lt");
									ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[2], "pbl_react_rt");
									ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_26[2], "pbl_react_fwd");
								}
								break;
						}
						if (__LIB_0__::func_27(iParam1->f_6, 2048))
						{
							if (iParam1->f_82 < 65f || (iParam1->f_82 < 125f && __LIB_13__::func_131(*iParam1, &(iParam1->f_7), 1069547520 /* Float: 1.5f */, 1056964608 /* Float: 0.5f */, 0.2f, 0.45f)))
							{
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[3]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_26[3], false))
								{
									if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(iLocal_26[3]))
									{
										ANIMSCENE::SET_ANIM_SCENE_PAUSED(iLocal_26[3], false);
										__LIB_1__::func_681(&(iParam1->f_6), 2048);
									}
								}
							}
						}
						switch (iParam2)
						{
							case 0:
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[3]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_26[3], false))
								{
									if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_26[3], "sleeping", 1))
									{
										__LIB_0__::func_325(&(iParam1->f_1));
									}
									else if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_26[3], "go_to_sleep", 1))
									{
										if (__LIB_0__::func_27(iLocal_20, 1))
										{
											__LIB_13__::func_138(iParam1, 1);
										}
									}
								}
								break;
							default:
								break;
						}
					}
					break;
				case 5:
					switch (iParam2)
					{
						case 0:
							if (iParam1->f_4 == 0)
							{
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[3]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_26[3], false))
								{
									if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[3], "pbl_stealth_kill_lt_a") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[3], "pbl_stealth_kill_rt_a"))
									{
										sLocal_32[3] = "pbl_stealth_kill_rt_a";
										ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_26[3], "player", Global_35, 0);
										TASK::TASK_ENTER_ANIM_SCENE(Global_35, iLocal_26[3], "player", sLocal_32[3], 1.48f, 0, 1, 20000, -1082130432 /* Float: -1f */);
										WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
										TASK::TASK_SWAP_WEAPON(Global_35, 1, 1, 0, 0);
										TASK::TASK_LOOK_AT_ENTITY(Global_35, *iParam1, 5000, 2048, 51, 0);
										iParam1->f_4 = 1;
									}
								}
							}
							else if (!__LIB_0__::func_27(iParam1->f_6, 2097152))
							{
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[3]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_26[3], false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 1369124074, true) == 1)
									{
										if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
										{
											PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
										}
									}
									if (ANIMSCENE::_0x337F1CC8EE895601(iLocal_26[3], "player") || TASK::GET_SCRIPT_TASK_STATUS(Global_35, 1369124074, true) == 8)
									{
										if (__LIB_13__::func_565(Global_35))
										{
											TASK::TASK_CLEAR_LOOK_AT(Global_35);
											ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_26[3], "knife", WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_35, 4), 0);
											ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_26[3], sLocal_32[3], true);
											__LIB_1__::func_683(&(iParam1->f_6), 2097152);
										}
									}
								}
							}
							break;
						case 1:
							if (iParam1->f_4 == 0)
							{
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[0]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_26[0], false))
								{
									if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[0], "pbl_stealth_kill_b"))
									{
										sLocal_32[0] = "pbl_stealth_kill_b";
										ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_26[0], "player", Global_35, 0);
										TASK::TASK_ENTER_ANIM_SCENE(Global_35, iLocal_26[0], "player", sLocal_32[0], 1.48f, 0, 1, 20000, -1082130432 /* Float: -1f */);
										WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
										TASK::TASK_SWAP_WEAPON(Global_35, 1, 1, 0, 0);
										TASK::TASK_LOOK_AT_ENTITY(Global_35, *iParam1, 5000, 2048, 51, 0);
										iParam1->f_4 = 1;
									}
								}
							}
							else if (!__LIB_0__::func_27(iParam1->f_6, 2097152))
							{
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[0]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_26[0], false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 1369124074, true) == 1)
									{
										if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
										{
											PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
										}
									}
									if (ANIMSCENE::_0x337F1CC8EE895601(iLocal_26[0], "player") || TASK::GET_SCRIPT_TASK_STATUS(Global_35, 1369124074, true) == 8)
									{
										if (__LIB_13__::func_565(Global_35))
										{
											TASK::TASK_CLEAR_LOOK_AT(Global_35);
											ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_26[0], "knife", WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_35, 4), 0);
											ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_26[0], sLocal_32[0], true);
											__LIB_1__::func_683(&(iParam1->f_6), 2097152);
										}
									}
								}
							}
							break;
						case 2:
							if (iParam1->f_4 == 0)
							{
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[2]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_26[2], false))
								{
									if ((ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[2], "pbl_stealth_kill_fwd_d") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[2], "pbl_stealth_kill_lt_d")) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[2], "pbl_stealth_kill_rt_d"))
									{
										sLocal_32[2] = func_957(*iParam1);
										ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_26[2], "player", Global_35, 0);
										TASK::TASK_ENTER_ANIM_SCENE(Global_35, iLocal_26[2], "player", sLocal_32[2], 1.48f, 0, 1, 20000, -1082130432 /* Float: -1f */);
										WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
										TASK::TASK_SWAP_WEAPON(Global_35, 1, 1, 0, 0);
										TASK::TASK_LOOK_AT_ENTITY(Global_35, *iParam1, 5000, 2048, 51, 0);
										iParam1->f_4 = 1;
									}
								}
							}
							else if (!__LIB_0__::func_27(iParam1->f_6, 2097152))
							{
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[2]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_26[2], false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 1369124074, true) == 1)
									{
										if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
										{
											PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
										}
									}
									if (ANIMSCENE::_0x337F1CC8EE895601(iLocal_26[2], "player") || TASK::GET_SCRIPT_TASK_STATUS(Global_35, 1369124074, true) == 8)
									{
										if (__LIB_13__::func_565(Global_35))
										{
											TASK::TASK_CLEAR_LOOK_AT(Global_35);
											ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_26[2], "knife", WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_35, 4), 0);
											ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_26[2], sLocal_32[2], true);
											__LIB_1__::func_683(&(iParam1->f_6), 2097152);
										}
									}
								}
							}
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							if (iParam1->f_4 == 0)
							{
								if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[3]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_26[3], false)) && ANIMSCENE::_0x8D81E7824B7753F7(iLocal_26[3], "sleeping", 1))
								{
									if ((ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[3], "pbl_lookaround") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[3], "pbl_small_react")) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[3], "pbl_medium_react"))
									{
										ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_26[3], "bool_sleep", true, false);
										if (iParam1->f_77 == 0)
										{
											ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_26[3], "pbl_small_react", true);
										}
										else if (iParam1->f_77 == 1)
										{
											ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_26[3], "pbl_medium_react", true);
										}
										__LIB_1__::func_683(&(iParam1->f_6), 32768);
										iParam1->f_4 = 1;
									}
								}
								else
								{
									if (PED::IS_PED_USING_ANY_SCENARIO(*iParam1))
									{
										if (__LIB_0__::func_27(iParam1->f_6, 32))
										{
											PED::_0xEC6935EBE0847B90(*iParam1, Global_36);
										}
										else
										{
											PED::_0x463803429297117C(*iParam1, Global_36, 1, 0);
										}
									}
									PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(*iParam1);
									TASK::CLEAR_PED_TASKS(*iParam1, true, false);
									TASK::TASK_LOOK_AT_ENTITY(*iParam1, Global_35, -1, 2048, 51, 0);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam1, Global_35, -1, 3f, 0.25f, 1.309f);
									__LIB_1__::func_683(&(iParam1->f_6), 131072);
									iParam1->f_4 = 1;
								}
							}
							else if (__LIB_0__::func_27(iParam1->f_6, 32768))
							{
								if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[3]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_26[3], false)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(*iParam1, iLocal_26[3]))
								{
									ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_26[3], "bool_sleep", false, false);
									if ((ANIMSCENE::_0x8D81E7824B7753F7(iLocal_26[3], "sleeping", 1) || (func_487(1) && !__LIB_8__::func_684("RBT03_ILOGQUE"))) || (func_487(2) && !__LIB_8__::func_684("RBT03_ILOGCALL")))
									{
										func_305(iParam1, 4, 0, 0);
										__LIB_1__::func_683(&(iParam1->f_6), 8);
										__LIB_1__::func_683(&(iParam1->f_6), 65536);
									}
								}
							}
							else if (__LIB_0__::func_27(Local_125[0 /*85*/].f_6, 131072))
							{
								if (func_487(2))
								{
									__LIB_1__::func_683(&iLocal_20, 4096);
									func_305(iParam1, 11, 0, 0);
								}
								if (!__LIB_0__::func_27(iParam1->f_6, 512))
								{
									if ((func_487(14) && __LIB_8__::func_684("RBT03_PUKEALERT")) && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("RBT03_PUKEALERT") > 0)
									{
										WEAPON::SET_CURRENT_PED_WEAPON(*iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
										TASK::TASK_SWAP_WEAPON(*iParam1, 1, 1, 0, 0);
										__LIB_1__::func_683(&(iParam1->f_6), 512);
										__LIB_1__::func_683(&iLocal_20, 4096);
									}
								}
								if (func_487(14) && !__LIB_8__::func_684("RBT03_PUKEALERT"))
								{
									TASK::TASK_CLEAR_LOOK_AT(*iParam1);
									func_305(iParam1, 11, 0, 0);
									__LIB_1__::func_683(&(iParam1->f_6), 8);
								}
							}
							break;
						case 1:
							if (iParam1->f_4 == 0)
							{
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[0]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_26[0], false))
								{
									if ((ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[0], "pbl_lookaround") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[0], "pbl_small_react")) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[0], "pbl_medium_react"))
									{
										PED::SET_PED_CONFIG_FLAG(*iParam1, 138, false);
										PED::SET_PED_CONFIG_FLAG(*iParam1, 354, false);
										ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_26[0], "bool_sleep", true, false);
										if (iParam1->f_77 == 0)
										{
											ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_26[0], "pbl_small_react", true);
										}
										else if (iParam1->f_77 == 1)
										{
											ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_26[0], "pbl_medium_react", true);
										}
										__LIB_1__::func_683(&(iParam1->f_6), 32768);
										iParam1->f_4 = 1;
									}
								}
							}
							else if (__LIB_0__::func_27(iParam1->f_6, 32768))
							{
								if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[0]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_26[0], false)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(*iParam1, iLocal_26[0]))
								{
									ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_26[0], "bool_sleep", false, false);
									if ((ANIMSCENE::_0x8D81E7824B7753F7(iLocal_26[0], "sleeping", 1) || (func_487(1) && !__LIB_8__::func_684("RBT03_ILOGQUE"))) || (func_487(2) && !__LIB_8__::func_684("RBT03_ILOGCALL")))
									{
										func_305(iParam1, 4, 0, 0);
										__LIB_1__::func_683(&(iParam1->f_6), 8);
									}
								}
							}
							break;
						case 2:
							if (iParam1->f_4 == 0)
							{
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[2]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_26[2], false))
								{
									if ((ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[2], "pbl_lookaround") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[2], "pbl_small_react")) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[2], "pbl_medium_react"))
									{
										ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_26[2], "bool_sleep", true, false);
										if (iParam1->f_77 == 0)
										{
											ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_26[2], "pbl_small_react", true);
										}
										else if (iParam1->f_77 == 1)
										{
											ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_26[2], "pbl_medium_react", true);
										}
										__LIB_1__::func_683(&(iParam1->f_6), 32768);
										iParam1->f_4 = 1;
									}
								}
								else
								{
									if (PED::IS_PED_USING_ANY_SCENARIO(*iParam1))
									{
										if (__LIB_0__::func_27(iParam1->f_6, 32))
										{
											PED::_0xEC6935EBE0847B90(*iParam1, Global_36);
										}
										else
										{
											PED::_0x463803429297117C(*iParam1, Global_36, 1, 0);
										}
									}
									PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(*iParam1);
									TASK::TASK_REACT(*iParam1, Global_35, Global_36, "TaskCombat_Low", 3f, 0, 4);
									TASK::TASK_LOOK_AT_ENTITY(*iParam1, Global_35, 7500, 2048, 51, 0);
									iParam1->f_4 = 1;
								}
							}
							else if (__LIB_0__::func_27(iParam1->f_6, 32768))
							{
								if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[2]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_26[2], false)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(*iParam1, iLocal_26[2]))
								{
									ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_26[2], "bool_sleep", false, false);
									if ((ANIMSCENE::_0x8D81E7824B7753F7(iLocal_26[2], "sleeping", 1) || (func_487(1) && !__LIB_8__::func_684("RBT03_ILOGQUE"))) || (func_487(2) && !__LIB_8__::func_684("RBT03_ILOGCALL")))
									{
										func_305(iParam1, 4, 0, 0);
										__LIB_1__::func_683(&(iParam1->f_6), 8);
									}
								}
							}
							else if ((TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 2121492476, true) == 8 || (func_487(1) && !__LIB_8__::func_684("RBT03_ILOGQUE"))) || (func_487(2) && !__LIB_8__::func_684("RBT03_ILOGCALL")))
							{
								func_305(iParam1, 4, 0, 0);
								__LIB_1__::func_683(&(iParam1->f_6), 8);
							}
							break;
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 0:
							if (iParam1->f_4 == 0)
							{
								if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[3]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_26[3], false)) && (((ANIMSCENE::_0x8D81E7824B7753F7(iLocal_26[3], "sleeping", 1) || ANIMSCENE::_0x8D81E7824B7753F7(iLocal_26[3], "look_around", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(iLocal_26[3], "small_react", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(iLocal_26[3], "medium_react", 1)))
								{
									if (((ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[3], "pbl_react_bk") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[3], "pbl_react_lt")) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[3], "pbl_react_rt")) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[3], "pbl_react_fwd"))
									{
										sLocal_32[3] = func_958(*iParam1);
										TASK::TASK_LOOK_AT_ENTITY(*iParam1, Global_35, 6000, 2048, 51, 0);
										ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_26[3], "bool_sleep", true, false);
										ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_26[3], sLocal_32[3], true);
										__LIB_1__::func_683(&(iParam1->f_6), 262144);
										iParam1->f_4 = 1;
									}
								}
								else
								{
									if (PED::IS_PED_USING_ANY_SCENARIO(*iParam1))
									{
										PED::_0x463803429297117C(*iParam1, Global_36, 1, 0);
									}
									PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(*iParam1);
									TASK::CLEAR_PED_TASKS(*iParam1, true, false);
									TASK::TASK_LOOK_AT_ENTITY(*iParam1, Global_35, 6000, 2048, 51, 0);
									iParam1->f_4 = 1;
								}
							}
							else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[3]))
							{
								if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_26[3], "male_a") || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_26[3], "male_a"))
								{
									func_305(iParam1, 11, 0, 0);
									__LIB_1__::func_683(&(iParam1->f_6), 524288);
								}
							}
							else if (!PED::IS_PED_USING_ANY_SCENARIO(*iParam1))
							{
								func_305(iParam1, 11, 0, 0);
								__LIB_1__::func_683(&(iParam1->f_6), 524288);
							}
							break;
						case 1:
							if (iParam1->f_4 == 0)
							{
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[0]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_26[0], false))
								{
									if (((ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[0], "pbl_react_bk") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[0], "pbl_react_lt")) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[0], "pbl_react_rt")) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[0], "pbl_react_fwd"))
									{
										PED::SET_PED_CONFIG_FLAG(*iParam1, 138, false);
										PED::SET_PED_CONFIG_FLAG(*iParam1, 354, false);
										sLocal_32[0] = func_959(*iParam1);
										TASK::TASK_LOOK_AT_ENTITY(*iParam1, Global_35, 6000, 2048, 51, 0);
										ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_26[0], "bool_sleep", true, false);
										ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_26[0], sLocal_32[0], true);
										__LIB_1__::func_683(&(iParam1->f_6), 262144);
										iParam1->f_4 = 1;
									}
								}
							}
							else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[0]))
							{
								if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_26[0], "male_b") || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_26[0], "male_b"))
								{
									func_305(iParam1, 11, 0, 0);
									__LIB_1__::func_683(&(iParam1->f_6), 524288);
								}
							}
							break;
						case 2:
							if (iParam1->f_4 == 0)
							{
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[2]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_26[2], false))
								{
									if (((ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[2], "pbl_react_bk") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[2], "pbl_react_lt")) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[2], "pbl_react_rt")) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_26[2], "pbl_react_fwd"))
									{
										sLocal_32[2] = func_958(*iParam1);
										TASK::TASK_LOOK_AT_ENTITY(*iParam1, Global_35, 6000, 2048, 51, 0);
										ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_26[2], "bool_sleep", true, false);
										ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_26[2], sLocal_32[2], true);
										__LIB_1__::func_683(&(iParam1->f_6), 262144);
										iParam1->f_4 = 1;
									}
								}
								else
								{
									if (PED::IS_PED_USING_ANY_SCENARIO(*iParam1))
									{
										PED::_0x463803429297117C(*iParam1, Global_36, 1, 0);
									}
									PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(*iParam1);
									TASK::CLEAR_PED_TASKS(*iParam1, true, false);
									TASK::TASK_LOOK_AT_ENTITY(*iParam1, Global_35, 6000, 2048, 51, 0);
									iParam1->f_4 = 1;
								}
							}
							else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[2]))
							{
								if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_26[2], "male_d") || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_26[2], "male_d"))
								{
									func_305(iParam1, 11, 0, 0);
									__LIB_1__::func_683(&(iParam1->f_6), 524288);
								}
							}
							else if (!PED::IS_PED_USING_ANY_SCENARIO(*iParam1))
							{
								func_305(iParam1, 11, 0, 0);
								__LIB_1__::func_683(&(iParam1->f_6), 524288);
							}
							break;
					}
					break;
				case 11:
					PED::SET_PED_RESET_FLAG(*iParam1, 53, true);
					if (iParam1->f_4 == 0)
					{
						if (PED::IS_PED_USING_ANY_SCENARIO(*iParam1))
						{
							PED::_0x802092B07E3B1EEA(*iParam1, Global_36, 3);
						}
						PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(*iParam1);
						PED::_0x406CCF555B04FAD3(*iParam1, 0, 1f);
						PED::_SET_PED_BLACKBOARD_BOOL(*iParam1, "IsDrunk", false, -1);
						PED::_SET_PED_BLACKBOARD_FLOAT(*iParam1, "Drunkness", 0f, -1);
						__LIB_13__::func_138(iParam1, 0);
						__LIB_2__::func_698(*iParam1, 1114636288 /* Float: 60f */, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
						__LIB_1__::func_683(&iLocal_20, 4096);
						PED::SET_PED_CONFIG_FLAG(*iParam1, 167, false);
						PED::SET_PED_CONFIG_FLAG(*iParam1, 138, false);
						PED::SET_PED_CONFIG_FLAG(*iParam1, 354, false);
						PED::_0xFC3DB99C8144CD81(*iParam1, iLocal_909[1], 0, 0, 0);
						PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 1);
						PED::SET_PED_COMBAT_RANGE(*iParam1, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 42, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 50, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 28, true);
						TASK::TASK_CLEAR_LOOK_AT(*iParam1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
						TASK::TASK_COMBAT_PED(*iParam1, Global_35, 16777216, 0);
						iParam1->f_4 = 1;
					}
					break;
			}
		}
		else
		{
			__LIB_0__::func_325(&(iParam1->f_1));
			__LIB_1__::func_748(&(iParam1->f_18), 1, 1);
			if (!__LIB_0__::func_27(iParam1->f_6, 1))
			{
				iLocal_23++;
				__LIB_1__::func_683(&(iParam1->f_6), 1);
			}
		}
		if (!__LIB_0__::func_27(iParam1->f_6, 4194304))
		{
			if (__LIB_0__::func_27(iParam1->f_6, 2097152))
			{
				switch (iParam2)
				{
					case 0:
						if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_26[3], "player") || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_26[3], "player"))
						{
							__LIB_1__::func_748(&(iParam1->f_18), 1, 1);
							__LIB_1__::func_683(&(iParam1->f_6), 4194304);
						}
						break;
					case 1:
						if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_26[0], "player") || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_26[0], "player"))
						{
							__LIB_1__::func_748(&(iParam1->f_18), 1, 1);
							__LIB_1__::func_683(&(iParam1->f_6), 4194304);
						}
						break;
					case 2:
						if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_26[2], "player") || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_26[2], "player"))
						{
							__LIB_1__::func_748(&(iParam1->f_18), 1, 1);
							__LIB_1__::func_683(&(iParam1->f_6), 4194304);
						}
						break;
				}
			}
		}
	}
}

bool func_481()
{
	int iVar0;
	if ((((__LIB_0__::func_394(Global_35, iLocal_381[3], 0) || PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_381[3], 32768, joaat("AR_HORSE_KICK_REAR"))) || PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_381[3], 32768, joaat("AR_HORSE_KICK_LEFT"))) || PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_381[3], 32768, joaat("AR_HORSE_KICK_RIGHT"))) || PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_381[3], 32768, joaat("AR_HORSE_KICK_FRONT")))
	{
		if (!__LIB_0__::func_27(Local_40.f_6, 1024))
		{
			__LIB_13__::func_139(iLocal_381[3]);
			__LIB_1__::func_683(&(Local_40.f_6), 1024);
		}
		return true;
	}
	iVar0 = 0;
	while (iVar0 < Local_125)
	{
		if ((((__LIB_0__::func_394(Global_35, iLocal_381[iVar0], 0) || PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_381[iVar0], 32768, joaat("AR_HORSE_KICK_REAR"))) || PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_381[iVar0], 32768, joaat("AR_HORSE_KICK_LEFT"))) || PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_381[iVar0], 32768, joaat("AR_HORSE_KICK_RIGHT"))) || PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_381[iVar0], 32768, joaat("AR_HORSE_KICK_FRONT")))
		{
			if (!__LIB_0__::func_27(Local_125[iVar0 /*85*/].f_6, 1024))
			{
				__LIB_13__::func_139(iLocal_381[iVar0]);
				__LIB_1__::func_683(&(Local_125[iVar0 /*85*/].f_6), 1024);
			}
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_487(int iParam0)
{
	return iLocal_845[iParam0];
}

void func_491(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_487(iParam0))
		{
			iLocal_845[iParam0] = 1;
		}
	}
	else
	{
		iLocal_845[iParam0] = 0;
	}
}

int func_493(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*85*/]))
		{
			if ((((!ENTITY::IS_ENTITY_DEAD((*iParam0)[iVar0 /*85*/]) && !PED::IS_PED_INJURED((*iParam0)[iVar0 /*85*/])) && !PED::IS_PED_DEAD_OR_DYING((*iParam0)[iVar0 /*85*/], true)) && !PED::IS_PED_FATALLY_INJURED((*iParam0)[iVar0 /*85*/])) && !__LIB_0__::func_27((iParam0[iVar0 /*85*/])->f_6, 1))
			{
				if (iParam1 == 0)
				{
					iVar1++;
				}
				else if (!PED::_IS_PED_HOGTIED((*iParam0)[iVar0 /*85*/]) && !__LIB_0__::func_27((iParam0[iVar0 /*85*/])->f_6, 4))
				{
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_582()
{
	return (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("PROP_HITCHINGPOST"), false) && STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("PROP_HITCHINGTREE"), false));
}

bool func_583()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_386))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_386))
	{
		iLocal_386 = OBJECT::CREATE_OBJECT(joaat("P_STOOL02X"), -1989.35f, 428.6f, 120.5f, true, true, false, false, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_386, -1989.35f, 428.6f, 120.5f, 0f, true, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_386, true);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_386, true);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_386, false);
	}
	return false;
}

bool func_586(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		*iParam1 = __LIB_8__::func_931(iLocal_19, iParam1->f_78, iParam1->f_81, 1, 1, 0, 1, 1, 1, 0, 0, 1, 1);
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1) && !ENTITY::IS_ENTITY_DEAD(*iParam1))
	{
		if (!__LIB_0__::func_27(iParam1->f_6, 2))
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
			__LIB_12__::func_875(uParam0, *iParam1, "CAVANAUGH", 0);
			func_1029(uParam0, iParam1);
			PED::SET_PED_CONFIG_FLAG(*iParam1, 306, true);
			PED::SET_PED_CONFIG_FLAG(*iParam1, 388, true);
			PED::SET_PED_CONFIG_FLAG(*iParam1, 250, true);
			PED::REQUEST_PED_VISIBILITY_TRACKING(*iParam1);
			__LIB_1__::func_683(&(iParam1->f_6), 2);
		}
		return true;
	}
	return false;
}

bool func_587(var uParam0)
{
	bool bVar0;
	if (iLocal_21 == Local_125)
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_125[iLocal_21 /*85*/]))
	{
		bVar0 = true;
		if ((iLocal_21 == 0 || iLocal_21 == 1) || iLocal_21 == 2)
		{
			bVar0 = false;
		}
		Local_125[iLocal_21 /*85*/] = __LIB_8__::func_931(iLocal_18, Local_125[iLocal_21 /*85*/].f_78, Local_125[iLocal_21 /*85*/].f_81, 1, 1, 0, bVar0, 1, 1, 0, 0, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_125[iLocal_21 /*85*/]) && !ENTITY::IS_ENTITY_DEAD(Local_125[iLocal_21 /*85*/]))
	{
		if (!__LIB_0__::func_27(Local_125[iLocal_21 /*85*/].f_6, 2))
		{
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_125[iLocal_21 /*85*/], true, true);
			__LIB_4__::func_7(Local_125[iLocal_21 /*85*/], joaat("WEAPON_MELEE_KNIFE"), -1, 0, 4, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			__LIB_4__::func_7(Local_125[iLocal_21 /*85*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 2, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_125[iLocal_21 /*85*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_125[iLocal_21 /*85*/], joaat("REL_PLAYER_ENEMY"));
			PED::SET_PED_CAN_BE_TARGETTED(Local_125[iLocal_21 /*85*/], true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_125[iLocal_21 /*85*/], 0, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_125[iLocal_21 /*85*/], 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_125[iLocal_21 /*85*/], 117, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_125[iLocal_21 /*85*/], 111, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_125[iLocal_21 /*85*/], 46, true);
			PED::SET_PED_CONFIG_FLAG(Local_125[iLocal_21 /*85*/], 6, true);
			ENTITY::_0x18FF3110CF47115D(Local_125[iLocal_21 /*85*/], 1, 0);
			__LIB_1__::func_683(&(Local_125[iLocal_21 /*85*/].f_6), 2);
			iLocal_21++;
		}
	}
	return false;
}

bool func_588(var uParam0)
{
	if (iLocal_22 == iLocal_381)
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_381[iLocal_22]))
	{
		if (iLocal_22 == 0)
		{
			iLocal_381[iLocal_22] = __LIB_12__::func_885(uParam0, joaat("A_C_HORSE_MORGAN_BAYROAN"), -1985.544f, 415.7694f, 120.4765f, 350f, 1, 1, 0, 1, 1, 1, 1, 0);
		}
		else if (iLocal_22 == 1)
		{
			iLocal_381[iLocal_22] = __LIB_12__::func_885(uParam0, joaat("A_C_HORSE_MORGAN_PALOMINO"), -1982.533f, 416.5486f, 120.4157f, 30f, 1, 1, 0, 1, 1, 1, 1, 0);
		}
		else if (iLocal_22 == 2)
		{
			iLocal_381[iLocal_22] = __LIB_12__::func_885(uParam0, joaat("A_C_HORSE_NOKOTA_WHITEROAN"), -2001.559f, 436.4043f, 120.5085f, 166.214f, 1, 1, 0, 1, 1, 1, 1, 0);
		}
		else if (iLocal_22 == 3)
		{
			iLocal_381[iLocal_22] = __LIB_12__::func_885(uParam0, joaat("A_C_HORSE_MORGAN_PALOMINO"), -2001.559f, 436.4043f, 120.5085f, 166.214f, 1, 1, 0, 1, 1, 1, 1, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_381[iLocal_22]) && !ENTITY::IS_ENTITY_DEAD(iLocal_381[iLocal_22]))
	{
		__LIB_1__::func_991(iLocal_381[iLocal_22], 0);
		ENTITY::_0x18FF3110CF47115D(iLocal_381[iLocal_22], 15, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_381[iLocal_22], true);
		iLocal_22++;
	}
	return false;
}

void func_651(var uParam0)
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
		func_1099(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1101(uParam0);
		func_1102(uParam0);
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

void func_715(var uParam0)
{
	bool bVar0;
	__LIB_10__::func_165(uParam0);
	switch (uParam0->f_63)
	{
		case 0:
			__LIB_10__::func_82(uParam0);
			if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67) || PED::_IS_PED_HOGTIED(uParam0->f_67))
			{
				__LIB_13__::func_115(uParam0, 2);
			}
			else
			{
				bVar0 = PED::GET_PED_CONFIG_FLAG(uParam0->f_67, 11, true);
				if (bVar0)
				{
					__LIB_13__::func_115(uParam0, 1);
				}
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67) || PED::_IS_PED_HOGTIED(uParam0->f_67))
			{
				__LIB_13__::func_115(uParam0, 2);
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_67) && !PED::_IS_PED_HOGTIED(uParam0->f_67))
			{
				__LIB_13__::func_115(uParam0, 0);
			}
			ENTITY::_0xC3ABCFBC7D74AFA5(uParam0->f_67, 19, 1);
			if (__LIB_10__::func_166(uParam0->f_67, 0))
			{
				if (__LIB_10__::func_69(uParam0))
				{
					__LIB_13__::func_115(uParam0, 4);
				}
				else if (__LIB_10__::func_191(uParam0->f_67))
				{
					if (!__LIB_1__::func_410(Global_36, __LIB_10__::func_45(uParam0->f_300), 30f, 1))
					{
						__LIB_13__::func_115(uParam0, 5);
					}
					else
					{
						__LIB_13__::func_115(uParam0, 6);
					}
				}
				else
				{
					__LIB_13__::func_115(uParam0, 3);
				}
			}
			break;
		case 3:
			__LIB_10__::func_167(uParam0);
			if (!__LIB_10__::func_166(uParam0->f_67, 0))
			{
				__LIB_13__::func_115(uParam0, 2);
			}
			else if (__LIB_10__::func_69(uParam0))
			{
				__LIB_13__::func_115(uParam0, 4);
			}
			else if (__LIB_10__::func_191(uParam0->f_67))
			{
				if (!__LIB_1__::func_410(Global_36, __LIB_10__::func_45(uParam0->f_300), 30f, 1))
				{
					__LIB_13__::func_115(uParam0, 5);
				}
				else
				{
					__LIB_13__::func_92(uParam0);
					__LIB_13__::func_115(uParam0, 6);
				}
			}
			break;
		case 5:
			if (!__LIB_10__::func_191(uParam0->f_67))
			{
				__LIB_13__::func_115(uParam0, 3);
			}
			break;
		case 6:
			if (__LIB_10__::func_79(uParam0->f_67))
			{
				__LIB_13__::func_115(uParam0, 3);
			}
			break;
		case 4:
			if (uParam0->f_62 >= 5)
			{
				if (!__LIB_10__::func_75(uParam0->f_67))
				{
					__LIB_1__::func_148(&(uParam0->f_364));
					__LIB_13__::func_115(uParam0, 7);
				}
				else
				{
					__LIB_1__::func_148(&(uParam0->f_364));
					__LIB_13__::func_115(uParam0, 8);
				}
			}
			break;
		case 7:
			if (!__LIB_0__::func_27(uParam0->f_329, 2) && !__LIB_5__::func_236(1))
			{
				if (uParam0->f_62 == 6 || uParam0->f_62 == 7)
				{
					__LIB_10__::func_197(uParam0, 1024, 1);
					__LIB_1__::func_683(&(uParam0->f_329), 2);
				}
			}
			if (!__LIB_10__::func_75(uParam0->f_67))
			{
				__LIB_13__::func_145(uParam0);
				if (!__LIB_10__::func_166(uParam0->f_67, 1))
				{
					__LIB_13__::func_115(uParam0, 2);
				}
				else if (__LIB_0__::func_94(Global_35, __LIB_10__::func_168(uParam0), 0) < 1f && __LIB_3__::func_592(Global_35, __LIB_10__::func_168(uParam0)) < 3f)
				{
					__LIB_3__::func_459(uParam0->f_67, 0);
					__LIB_10__::func_71(uParam0, 1);
					__LIB_13__::func_115(uParam0, 12);
				}
			}
			else
			{
				__LIB_1__::func_148(&(uParam0->f_364));
				__LIB_13__::func_115(uParam0, 8);
			}
			break;
		case 8:
			if (!__LIB_0__::func_27(uParam0->f_329, 2) && !__LIB_5__::func_236(1))
			{
				if (uParam0->f_62 == 6 || uParam0->f_62 == 7)
				{
					__LIB_10__::func_197(uParam0, 1024, 1);
					__LIB_1__::func_683(&(uParam0->f_329), 2);
				}
			}
			__LIB_13__::func_145(uParam0);
			if (__LIB_10__::func_83(uParam0))
			{
				if (func_1186(uParam0))
				{
					__LIB_3__::func_459(uParam0->f_67, 0);
					__LIB_10__::func_71(uParam0, 2);
					__LIB_13__::func_115(uParam0, 12);
				}
			}
			else if (!__LIB_10__::func_166(uParam0->f_67, 1))
			{
				if (ENTITY::_0x61914209C36EFDDB(uParam0->f_67) != 6)
				{
					if (__LIB_0__::func_266(Global_35, __LIB_10__::func_67(uParam0->f_300), 6.5f, 1, 1))
					{
						ENTITY::_0x18FF3110CF47115D(uParam0->f_67, 7, 0);
						__LIB_3__::func_459(uParam0->f_67, 0);
						__LIB_10__::func_71(uParam0, 2);
						__LIB_13__::func_115(uParam0, 12);
					}
					else
					{
						__LIB_13__::func_115(uParam0, 9);
					}
				}
			}
			break;
		case 9:
			if (__LIB_10__::func_166(uParam0->f_67, 1))
			{
				if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67))
				{
					__LIB_13__::func_115(uParam0, 8);
				}
				else
				{
					__LIB_13__::func_115(uParam0, 7);
				}
			}
			break;
		case 12:
			break;
	}
}

void func_730(var uParam0)
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
								uParam0->f_371 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(uParam0->f_4, joaat("SC_BOUNTY_HUNTER_SHERIFF"), 0.0086562f, 0.0409636f, 0.5f, 179.9999f, 0f, 0, 1);
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
							func_1202(uParam0->f_4, Var0, 2, 1073741824 /* Float: 2f */);
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_10))
							{
								Var8 = { __LIB_4__::func_494(uParam0->f_30[0 /*14*/].f_1, "Book", uParam0->f_30[0 /*14*/].f_9) };
								func_1202(uParam0->f_10, Var8, 0, 1073741824 /* Float: 2f */);
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
				if (__LIB_13__::func_142(uParam0))
				{
					__LIB_10__::func_85(uParam0, 5);
				}
			}
			break;
		case 5:
			if (__LIB_10__::func_69(uParam0))
			{
				if (__LIB_13__::func_146(uParam0))
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

bool func_737(var uParam0)
{
	switch (uParam0->f_61)
	{
		case 0:
			if (uParam0->f_25)
			{
				__LIB_0__::func_202(Global_35, 0);
				__LIB_0__::func_325(&(uParam0->f_66));
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, uParam0->f_30[1 /*14*/].f_1, __LIB_10__::func_88(uParam0->f_300), uParam0->f_30[1 /*14*/].f_9, 1.48f, 0, 256, 20000, -1082130432 /* Float: -1f */);
				__LIB_10__::func_89(uParam0, 2);
				__LIB_10__::func_89(uParam0, 1);
			}
			break;
		case 1:
			PED::SET_PED_RESET_FLAG(Global_35, 108, true);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			__LIB_10__::func_90(uParam0->f_300);
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 1369124074, true) != 0 && TASK::GET_SCRIPT_TASK_STATUS(Global_35, 1369124074, true) != 1)
			{
				ENTITY::_0x18FF3110CF47115D(uParam0->f_67, 2, 0);
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_30[1 /*14*/].f_1);
				__LIB_10__::func_89(uParam0, 2);
			}
			break;
		case 2:
			if (!uParam0->f_362)
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_69))
				{
					TASK::_0x541E5B41DCA45828(uParam0->f_69, 1, 0);
					TASK::TASK_CLEAR_LOOK_AT(uParam0->f_69);
					uParam0->f_362 = 1;
				}
			}
			PED::SET_PED_RESET_FLAG(Global_35, 108, true);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_30[1 /*14*/].f_1, __LIB_10__::func_88(uParam0->f_300)))
			{
				__LIB_1__::func_715(12, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				__LIB_10__::func_89(uParam0, 5);
			}
			break;
		case 5:
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			return true;
	}
	return false;
}

void func_752(var uParam0)
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
			func_1238(__LIB_10__::func_49(uParam0->f_65), 1, 0, -142743235, 0);
		}
	}
}

bool func_788(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_788(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_788(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_788(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_788(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_788(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_788(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_788(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (__LIB_0__::func_192(iParam0, -839724752) && __LIB_0__::func_774(iParam0, 4))
		{
			if (!__LIB_1__::func_154(42))
			{
				__LIB_1__::func_816(iParam0);
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
				func_788(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_788(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_788(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_13__::func_386(iParam0);
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
				func_788(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_790()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1350();
	func_1351();
	func_1352();
	func_1353();
	func_1354();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_791(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1238(iParam0, 1, 1, -142743235, 1);
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

void func_826()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1389(&uVar4, &iVar1, &iVar2, &iVar3)))
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

Vector3 func_833(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
		bVar10 = func_1402();
		if (VOLUME::_DOES_VOLUME_EXIST(bVar10))
		{
		}
	}
	if (!func_1403(Global_1310720.f_21))
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

int func_930(var uParam0, int iParam1, int iParam2)
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
		return func_930(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_936(int iParam0, var uParam1, var uParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		if (func_1512())
		{
			return false;
		}
		if (__LIB_9__::func_782(*iParam0, uParam1, uParam2, 0))
		{
			if (*uParam2 == 131072)
			{
				__LIB_1__::func_683(&(iParam0->f_6), 131072);
			}
			if (*uParam2 == 4)
			{
				if (WEAPON::_0x5809DBCA0A37C82B(uParam1->f_13))
				{
				}
				if (WEAPON::_0xEA522F991E120D45(uParam1->f_13))
				{
				}
				if (WEAPON::_0xEA522F991E120D45(uParam1->f_13) || WEAPON::_0x5809DBCA0A37C82B(uParam1->f_13))
				{
					if (__LIB_0__::func_27(iParam0->f_6, 16))
					{
						return false;
					}
				}
			}
			return true;
		}
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(*iParam0, Global_35))
		{
			__LIB_1__::func_683(&(iParam0->f_6), 131072);
			return true;
		}
		if (__LIB_0__::func_27(iParam0->f_6, 33554432))
		{
			if (!__LIB_0__::func_75(&(iParam0->f_10)))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), *iParam0))
				{
					if (func_941(Global_35) && PED::IS_PED_SHOOTING(Global_35))
					{
						__LIB_1__::func_148(&(iParam0->f_10));
					}
				}
			}
			else if (__LIB_0__::func_75(&(iParam0->f_10)) && __LIB_1__::func_871(&(iParam0->f_10)) > 750)
			{
				if (!PED::_IS_PED_LASSOED(*iParam0))
				{
					return true;
				}
			}
		}
		if ((__LIB_0__::func_27(iParam0->f_6, 16) && __LIB_13__::func_165(*iParam0, 1, 3)) || (!__LIB_0__::func_27(iParam0->f_6, 16) && __LIB_13__::func_165(*iParam0, 3, 5)))
		{
			__LIB_1__::func_683(&(iParam0->f_6), 131072);
			return true;
		}
		if (__LIB_2__::func_385(Global_35) && iParam0->f_82 < 10f)
		{
			__LIB_1__::func_683(&(iParam0->f_6), 131072);
			return true;
		}
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(*iParam0, false, false), 25f))
		{
			return true;
		}
		if (FIRE::_IS_EXPLOSION_IN_VOLUME(-1, iLocal_909[1]))
		{
			return true;
		}
		if (((MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 20f, true) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 20f, false)) || MISC::IS_BULLET_IN_AREA(VOLUME::_GET_VOLUME_COORDS(iLocal_909[1]), 20f, true)) || MISC::IS_BULLET_IN_AREA(VOLUME::_GET_VOLUME_COORDS(iLocal_909[1]), 20f, false))
		{
			return true;
		}
	}
	return false;
}

int func_940(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_940(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

bool func_941(int iParam0)
{
	int iVar0;
	return ((WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, 0, false) && iVar0 == joaat("WEAPON_LASSO")) && TASK::GET_SCRIPT_TASK_STATUS(iParam0, 716706914, true) == 8);
}

bool func_942(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (iParam0 == Local_125[0 /*85*/])
		{
			if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[3]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_26[3], false)) && ANIMSCENE::_0x8D81E7824B7753F7(iLocal_26[3], "sleeping", 1)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam0, iLocal_26[3]))
			{
				return true;
			}
		}
		if (iParam0 == Local_125[1 /*85*/])
		{
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[0]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_26[0], false)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam0, iLocal_26[0]))
			{
				return true;
			}
		}
		if (iParam0 == Local_40)
		{
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[1]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_26[1], false)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam0, iLocal_26[1]))
			{
				return true;
			}
		}
		if (iParam0 == Local_125[2 /*85*/])
		{
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[2]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_26[2], false)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam0, iLocal_26[2]))
			{
				return true;
			}
		}
	}
	return false;
}

void func_948(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		if (!__LIB_0__::func_75(&(iParam0->f_14)))
		{
			__LIB_1__::func_283(&(iParam0->f_14), 0);
			iParam0->f_13 = MISC::GET_RANDOM_FLOAT_IN_RANGE(7f, 9f);
		}
		else if (__LIB_0__::func_75(&(iParam0->f_14)) && __LIB_0__::func_265(&(iParam0->f_14)) > iParam0->f_13)
		{
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*iParam0))
			{
				if (__LIB_1__::func_265(*iParam0, "Snore_In_Big_Rolloff", joaat("SPEECH_PARAMS_FORCE"), 0, 1, 0, 0, 1))
				{
					__LIB_0__::func_37(&(iParam0->f_14));
					iParam0->f_13 = 0f;
				}
			}
		}
	}
}

char* func_950(int iParam0)
{
	vector3 vVar0;
	if (!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(iParam0))
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(Global_35, false, false)) };
		if (MISC::ABSF(vVar0.x) > MISC::ABSF(vVar0.y))
		{
			if (vVar0.x < 0f)
			{
				return "pbl_hogtie_enter_lt";
			}
			else
			{
				return "pbl_hogtie_enter_rt";
			}
		}
		else
		{
			return "pbl_hogtie_enter_bk";
		}
	}
	return "pbl_hogtie_enter_bk";
}

char* func_951(int iParam0)
{
	vector3 vVar0;
	if (!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(iParam0))
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(Global_35, false, false)) };
		if (MISC::ABSF(vVar0.x) > MISC::ABSF(vVar0.y))
		{
			if (vVar0.x < 0f)
			{
				return "pbl_stealth_kill_lt_c";
			}
			else
			{
				return "pbl_stealth_kill_rt_c";
			}
		}
	}
	return "pbl_stealth_kill_rt_c";
}

char* func_953(int iParam0)
{
	vector3 vVar0;
	if (!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(iParam0))
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(Global_35, false, false)) };
		if (MISC::ABSF(vVar0.x) > MISC::ABSF(vVar0.y))
		{
			if (vVar0.x < 0f)
			{
				return "pbl_react_bk";
			}
			else
			{
				return "pbl_react_fwd";
			}
		}
		else if (vVar0.y < 0f)
		{
			return "pbl_react_rt";
		}
		else
		{
			return "pbl_react_lt";
		}
	}
	return "pbl_react_rt";
}

void func_955(int iParam0)
{
	if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_907))
	{
		if (STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (PED::_IS_PED_USING_SCENARIO_POINT(iParam0, iLocal_916[4]) && TASK::_0x02EBBB3989B7E695(iParam0))
				{
					if ((func_487(0) && __LIB_8__::func_684("RBT03_IG2_A")) && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("RBT03_IG2_A") == 0)
					{
						if (iLocal_25 < 5)
						{
							if (!__LIB_0__::func_75(&uLocal_399))
							{
								__LIB_1__::func_283(&uLocal_399, 0);
							}
							else if (__LIB_0__::func_75(&uLocal_399) && __LIB_1__::func_871(&uLocal_399) > (MISC::GET_RANDOM_INT_IN_RANGE(750, 1250) + iLocal_25 * 50))
							{
								iLocal_907 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("scr_human_puke", iParam0, 0f, -0.125f, 0f, 0f, 0f, 0f, 21030, MISC::GET_RANDOM_FLOAT_IN_RANGE(1.25f, 1.85f), false, false, false);
								iLocal_25++;
								__LIB_1__::func_148(&uLocal_399);
							}
						}
					}
				}
			}
		}
	}
	else if (((iLocal_25 > 5 || (func_487(0) && !__LIB_8__::func_684("RBT03_IG2_A"))) || (__LIB_0__::func_75(&uLocal_399) && __LIB_1__::func_871(&uLocal_399) > MISC::GET_RANDOM_INT_IN_RANGE(150, 325))) || ((func_487(0) && __LIB_8__::func_684("RBT03_IG2_A")) && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("RBT03_IG2_A") != 0))
	{
		__LIB_0__::func_37(&uLocal_399);
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_907, false);
	}
}

char* func_957(int iParam0)
{
	vector3 vVar0;
	if (!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(iParam0))
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(Global_35, false, false)) };
		if (MISC::ABSF(vVar0.x) > MISC::ABSF(vVar0.y))
		{
			if (vVar0.x < 0f)
			{
				return "pbl_stealth_kill_rt_d";
			}
			else
			{
				return "pbl_stealth_kill_lt_d";
			}
		}
		else
		{
			return "pbl_stealth_kill_fwd_d";
		}
	}
	return "pbl_stealth_kill_fwd_d";
}

char* func_958(int iParam0)
{
	vector3 vVar0;
	if (!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(iParam0))
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(Global_35, false, false)) };
		if (MISC::ABSF(vVar0.x) > MISC::ABSF(vVar0.y))
		{
			if (vVar0.x < 0f)
			{
				return "pbl_react_rt";
			}
			else
			{
				return "pbl_react_lt";
			}
		}
		else if (vVar0.y < 0f)
		{
			return "pbl_react_fwd";
		}
		else
		{
			return "pbl_react_bk";
		}
	}
	return "pbl_react_fwd";
}

char* func_959(int iParam0)
{
	vector3 vVar0;
	if (!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(iParam0))
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(Global_35, false, false)) };
		if (MISC::ABSF(vVar0.x) > MISC::ABSF(vVar0.y))
		{
			if (vVar0.x < 0f)
			{
				return "pbl_react_lt";
			}
			else
			{
				return "pbl_react_rt";
			}
		}
		else if (vVar0.y < 0f)
		{
			return "pbl_react_bk";
		}
		else
		{
			return "pbl_react_fwd";
		}
	}
	return "pbl_react_bk";
}

void func_1029(var uParam0, int iParam1)
{
	__LIB_13__::func_126(uParam0, &Local_402, iParam1);
	StringCopy(&(Local_402.f_340), "RBT03_DMP", 24);
	Local_402.f_299 = 5;
}

void func_1099(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1608();
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

void func_1101(var uParam0)
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
			func_1616(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1616(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1102(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1616(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

bool func_1186(var uParam0)
{
	switch (uParam0->f_61)
	{
		case 0:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_331))
			{
				uParam0->f_331 = ANIMSCENE::_CREATE_ANIM_SCENE("script@proc@bountyhunting@lemoyneraider@bodydrop", 0, "PBL_DROPOFF", false, true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_331, "LINDSEY", uParam0->f_67, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_331, "player", Global_35, 0);
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_331);
			}
			else if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_331, true, false))
			{
				if (__LIB_0__::func_94(Global_35, __LIB_10__::func_67(uParam0->f_300), 0) < 3f && __LIB_10__::func_79(uParam0->f_67))
				{
					TASK::TASK_ENTER_ANIM_SCENE(Global_35, uParam0->f_331, "player", "PBL_DROPOFF", 1.48f, 0, 0, 20000, -1082130432 /* Float: -1f */);
					__LIB_10__::func_89(uParam0, 3);
				}
			}
			break;
		case 3:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (!__LIB_0__::func_163(Global_35, 1369124074))
			{
				if (__LIB_0__::func_94(Global_35, __LIB_10__::func_67(uParam0->f_300), 0) > 2f)
				{
					TASK::TASK_ENTER_ANIM_SCENE(Global_35, uParam0->f_331, "player", "PBL_DROPOFF", 1.48f, 1, 0, 20000, -1082130432 /* Float: -1f */);
				}
				else
				{
					ANIMSCENE::START_ANIM_SCENE(uParam0->f_331);
					__LIB_10__::func_89(uParam0, 4);
				}
			}
			break;
		case 4:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uParam0->f_331, false) || __LIB_10__::func_105(uParam0))
			{
				ENTITY::_0x18FF3110CF47115D(uParam0->f_67, 7, 0);
				__LIB_10__::func_89(uParam0, 5);
			}
			break;
		case 5:
			return true;
	}
	return false;
}

void func_1202(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_1616(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

int func_1238(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1238(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

void func_1350()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1841(0);
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
	func_1841(1);
}

void func_1351()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_788(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1352()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1844(0);
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
	func_1844(1);
}

void func_1353()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1844(0);
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
	func_1844(1);
}

void func_1354()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_788(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_788(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1238(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1238(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1389(var uParam0, var uParam1, var uParam2, var uParam3)
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
		*uParam2 = (*uParam2 + iVar2);
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
	iVar11 = (func_1878(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	if (!func_788(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*uParam3 = (*uParam3 + iVar11);
	*uParam1 = (*uParam1 + iVar2);
	return 1;
}

int func_1402()
{
	if (__LIB_0__::func_28())
	{
		if (!__LIB_1__::func_185(3))
		{
			return __LIB_0__::func_559(43);
		}
		if (__LIB_1__::func_185(38) && !__LIB_1__::func_185(43))
		{
			return func_1886(8);
		}
	}
	return 0;
}

bool func_1403(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	return ((Global_1888801[iParam0 /*35*/].f_20 == 1 || Global_1888801[iParam0 /*35*/].f_20 == 2) && !func_1887(iParam0));
}

bool func_1512()
{
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[0]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_26[0], false)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, iLocal_26[0]))
	{
		return true;
	}
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[1]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_26[1], false)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, iLocal_26[1]))
	{
		return true;
	}
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[2]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_26[2], false)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, iLocal_26[2]))
	{
		return true;
	}
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[4]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_26[4], false)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, iLocal_26[4]))
	{
		return true;
	}
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_26[3]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_26[3], false)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, iLocal_26[3]))
	{
		return true;
	}
	return false;
}

void func_1608()
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
	iVar0 = func_2012(6291456, 0);
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

void func_1616(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1616(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1616(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_1841(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_788(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_788(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_788(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2138(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_791(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1238(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2144(Var0);
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

void func_1844(bool bParam0)
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
		func_788(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_788(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_788(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_788(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_788(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_788(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_788(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_788(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_788(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_788(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_788(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1238(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1238(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1238(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1238(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1238(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1238(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1238(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1238(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1238(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1238(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1238(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1878(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1878(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1878(iVar63, -915411861, 1, 0, 0));
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

int func_1886(int iParam0)
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
bool func_1887(int iParam0)
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

int func_2012(int iParam0, int iParam1)
{
	var uVar0;
	return func_2215(&uVar0, iParam0, iParam1);
}

void func_2138(int iParam0)
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
	func_1238(iParam0, 1, 1, -142743235, 1);
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
		func_1238(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_2144(struct<6> Param0)
{
	if (!func_2292(Param0.f_4, 1))
	{
	}
	if (!func_2292(Param0, 1))
	{
	}
	if (!func_2292(Param0.f_2, 1))
	{
	}
	if (!func_2292(Param0.f_5, 1))
	{
	}
	if (!func_2292(Param0.f_3, 1))
	{
	}
	if (!func_2292(Param0.f_1, 1))
	{
	}
}

int func_2215(var uParam0, int iParam1, int iParam2)
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
		return func_2215(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2292(int iParam0, int iParam1)
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
				if (func_2292(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2292(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2292(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2292(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

