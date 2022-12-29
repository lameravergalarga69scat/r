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
	struct<534> Local_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -89429847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 1048576000, 1193033728, 1092616192, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 100, -1082130432, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 100, -1082130432, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 100, -1082130432, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 100, -1082130432, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	int iLocal_551 = 0;
	var uLocal_552 = 0;
	int iLocal_553 = 0;
	struct<52> Local_554 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_617 = 8;
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
	var uLocal_629 = 0;
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
	var uLocal_644 = 1176256512;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 20;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = -1082130432;
	var uLocal_674 = 0;
	var uLocal_675 = 4;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 1;
	var uLocal_721 = 1;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = -1;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 1;
	var uLocal_739 = -1;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
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
	var uLocal_756 = -1;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 1097859072;
	var uLocal_766 = 1000;
	var uLocal_767 = 1067450368;
	var uLocal_768 = 5000;
	var uLocal_769 = 42;
	var uLocal_770 = 1103626240;
	var uLocal_771 = 1077936128;
	var uLocal_772 = 1106247680;
	var uLocal_773 = 1103101952;
	var uLocal_774 = 1097859072;
	var uLocal_775 = 1103626240;
	struct<2> Local_776 = { -1, -1 } ;
	var uLocal_778 = -1;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 100;
	var uLocal_786 = -1082130432;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 5;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	struct<9> Local_797[1];
	int iLocal_807 = 0;
	int iLocal_808 = 0;
	vector3 vLocal_809[24] = "";
	vector3 vLocal_812[24] = "";
	var uLocal_815 = 24;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	int iLocal_928 = 0;
	int iLocal_929 = 0;
	int iLocal_930 = 0;
	int iLocal_931 = 0;
	int iLocal_932 = 0;
	int iLocal_933 = 0;
	int iLocal_934 = 0;
	bool bLocal_935 = false;
	bool bLocal_936 = false;
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
	__LIB_14__::func_88(&(uParam0->f_178));
	if (Global_1347702[uParam0->f_174 /*49*/].f_28 != 0)
	{
		__LIB_12__::func_867(uParam0, Global_1347702[uParam0->f_174 /*49*/].f_28, 7);
	}
	func_40(uParam0);
	__LIB_12__::func_918(uParam0, 1);
	iVar1 = func_42(uParam0);
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
			__LIB_0__::func_11(uParam0);
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
				__LIB_13__::func_397(uParam0);
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
	func_69(uParam0);
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
				__LIB_13__::func_397(uParam0);
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
			__LIB_12__::func_964(uParam0);
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
	if (!__LIB_0__::func_75(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_871(&(uParam0->f_2585))) > func_82(uParam0))
	{
		__LIB_1__::func_283(&(uParam0->f_2585), 1);
		iVar0 = func_83(uParam0);
		if (iVar0 != 3)
		{
			if ((iVar0 == 7 || iVar0 == 5) || iVar0 == 6)
			{
				__LIB_13__::func_258(uParam0);
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
	if (func_86(uParam0))
	{
		__LIB_13__::func_258(uParam0);
		iVar0 = func_87(uParam0);
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
		__LIB_13__::func_259(uParam0, __LIB_0__::func_58(uParam0));
	}
	iVar0 = __LIB_12__::func_492(uParam0);
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
			func_127();
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
	__LIB_13__::func_397(uParam0);
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
		__LIB_13__::func_397(uParam0);
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
	else if (!__LIB_0__::func_75(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_871(&(uParam0->f_2585))) > func_142(uParam0))
	{
		__LIB_1__::func_283(&(uParam0->f_2585), 1);
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

void func_34(var uParam0)
{
	__LIB_0__::func_7(&(uParam0->f_172), 16384);
	__LIB_12__::func_658(uParam0, 2);
	__LIB_12__::func_659(uParam0, 2);
	__LIB_13__::func_222(uParam0, 2);
	__LIB_13__::func_724(&Local_14, 1);
	if (uParam0->f_174 == 151)
	{
		__LIB_7__::func_931(558.8349f, 168.3936f, 133.3486f, 40f, 1);
		func_178(131072);
		func_178(2048);
		__LIB_13__::func_725(&(uParam0->f_206), 80f);
		__LIB_14__::func_80(&(uParam0->f_206), 65f);
		func_178(1024);
		__LIB_18__::func_650(11);
		__LIB_18__::func_650(12);
		__LIB_18__::func_650(13);
		__LIB_13__::func_726(0);
	}
	else
	{
		if (__LIB_18__::func_651())
		{
			__LIB_13__::func_726(2);
		}
		else
		{
			__LIB_13__::func_726(2);
		}
		__LIB_18__::func_650(11);
		__LIB_18__::func_650(12);
		__LIB_18__::func_650(13);
	}
	func_184();
	func_185(uParam0, 0);
	func_188(&(Local_14.f_477), __LIB_3__::func_179(&Local_554), __LIB_3__::func_526(&Local_554));
}

void func_40(var uParam0)
{
	__LIB_13__::func_820(&(Local_14.f_20), 1);
	if (func_193())
	{
		__LIB_12__::func_908(uParam0, 0);
		StringCopy(&cLocal_809, "REHCAUD", 24);
		StringCopy(&cLocal_812, "REHC_RC1_LIB", 24);
		if (HUD::_DOES_TEXT_DATABASE_EXIST(&cLocal_809))
		{
			HUD::_TEXT_DATABASE_REQUEST(&cLocal_809);
		}
	}
	func_188(&(Local_14.f_477), __LIB_3__::func_179(&Local_554), __LIB_3__::func_526(&Local_554));
}

int func_42(var uParam0)
{
	func_188(&(Local_14.f_477), __LIB_3__::func_179(&Local_554), __LIB_3__::func_526(&Local_554));
	if (__LIB_13__::func_805(131072))
	{
		return 0;
	}
	return 3;
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
	if (func_207(uParam0->f_174))
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
	if (func_216(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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
			func_236(uParam0);
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

void func_69(var uParam0)
{
	bool bVar0;
	bool bVar1;
	if (!__LIB_0__::func_1(uParam0->f_172, 16))
	{
		return;
	}
	if (__LIB_0__::func_86(uParam0->f_206.f_5))
	{
		uParam0->f_206.f_5 = { __LIB_1__::func_440(uParam0->f_174) };
	}
	bVar0 = __LIB_12__::func_741(uParam0);
	if (!bVar0)
	{
		if (__LIB_0__::func_1(uParam0->f_172, 8))
		{
			if (uParam0->f_206.f_338 == 15f)
			{
				uParam0->f_206.f_338 = 50f;
			}
			if (uParam0->f_206.f_339 == 20f)
			{
				uParam0->f_206.f_339 = 75f;
			}
		}
		else
		{
			if (uParam0->f_206.f_338 > 15f)
			{
				uParam0->f_206.f_338 = 15f;
			}
			if (uParam0->f_206.f_339 > 20f)
			{
				uParam0->f_206.f_339 = 20f;
			}
		}
		if (uParam0->f_206.f_338 <= 0f)
		{
		}
		else if (uParam0->f_206.f_339 <= 0f)
		{
		}
		else if (uParam0->f_206.f_339 <= uParam0->f_206.f_338)
		{
		}
	}
	if (__LIB_12__::func_647(&(uParam0->f_2575)))
	{
		bVar1 = true;
		if (uParam0->f_177 == 4 || uParam0->f_176 == 4)
		{
			if (__LIB_12__::func_738(uParam0))
			{
				bVar1 = false;
			}
			else if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 1024))
			{
				bVar1 = false;
			}
		}
		if (__LIB_13__::func_191(&(uParam0->f_206), &(uParam0->f_2575), bVar0, bVar1))
		{
			if (!__LIB_0__::func_1(uParam0->f_172, 1))
			{
				func_245(uParam0);
				__LIB_0__::func_7(&(uParam0->f_172), 1);
			}
		}
		else if (__LIB_0__::func_1(uParam0->f_172, 1))
		{
			__LIB_0__::func_8(&(uParam0->f_172), 1);
		}
	}
	else if (!__LIB_0__::func_1(uParam0->f_172, 1))
	{
		__LIB_0__::func_7(&(uParam0->f_172), 1);
	}
}

bool func_79(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		return true;
	}
	if (func_260(uParam0) && func_261(uParam0))
	{
		__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
		return true;
	}
	return false;
}

void func_81(var uParam0)
{
	__LIB_13__::func_33(uParam0, 0);
	StringCopy(&(uParam0->f_2575), "rehc_rc1", 24);
	__LIB_0__::func_7(&(uParam0->f_172), 16);
}

float func_82(var uParam0)
{
	if (iLocal_551 != 3)
	{
		return 0f;
	}
	if (__LIB_0__::func_48(Global_35, Local_14.f_7, 40f, 1) || Local_14.f_203 == 3)
	{
		return 0f;
	}
	return 1000f;
}

int func_83(var uParam0)
{
	func_188(&(Local_14.f_477), __LIB_3__::func_179(&Local_554), __LIB_3__::func_526(&Local_554));
	if (!__LIB_13__::func_805(131072))
	{
		if (func_280())
		{
			return 8;
		}
	}
	if ((((func_281(uParam0) && !__LIB_13__::func_727(&Local_14, 2)) && !__LIB_13__::func_727(&Local_14, 38)) && !__LIB_13__::func_727(&Local_14, 65)) && !__LIB_13__::func_805(128))
	{
		return 8;
	}
	if (func_283())
	{
		if (__LIB_13__::func_727(&Local_14, 2))
		{
			return 9;
		}
		else if (__LIB_13__::func_727(&Local_14, 3) || (__LIB_13__::func_805(131072) && func_284() != 0))
		{
			return 8;
		}
		else if (__LIB_13__::func_727(&Local_14, 4))
		{
			return 11;
		}
	}
	return 3;
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
		if (uParam0->f_171 != 0 || func_285(uParam0))
		{
			if (__LIB_12__::func_884(uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_87(var uParam0)
{
	if (__LIB_13__::func_805(131072))
	{
		return 5;
	}
	return 3;
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
		if (!__LIB_12__::func_925(uParam0))
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
		if (!func_294(uParam0))
		{
			return false;
		}
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 1))
	{
	}
	return true;
}

int func_95(var uParam0)
{
	struct<4> Var0;
	MemCopy(&Var0, {uParam0->f_2575}, 4);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		return 1;
	}
	return func_300(Var0, &(uParam0->f_206), uParam0);
}

int func_97(var uParam0)
{
	struct<4> Var0;
	if (__LIB_13__::func_805(131072))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_90[3]))
		{
			Var0 = { __LIB_13__::func_728(3) };
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_14.f_90[3], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_14.f_90[2], Var0), __LIB_2__::func_709((ENTITY::GET_ENTITY_HEADING(Local_14.f_90[2]) + Var0.f_3.f_2)), true, false, true);
			ENTITY::PLAY_ENTITY_ANIM(Local_14.f_90[3], "MORTAR_PESTAL_STATIC", "SCRIPT_RE@HERBALISTCAMP", 1000f, false, true, true, 0f, 0);
		}
		func_306(&(Local_14.f_284), 1);
		func_307();
		func_308(0);
		__LIB_12__::func_654(151, 1);
		PED::SET_PED_CAPSULE(Local_14.f_7, 0f);
		func_309(1024);
		return 8;
	}
	return 3;
}

bool func_98(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 256) && !__LIB_0__::func_1(uParam0->f_172, 1024))
	{
		if (!__LIB_12__::func_925(uParam0))
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
		func_347(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		__LIB_1__::func_809(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	__LIB_10__::func_833(iParam0);
}

void func_127()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	__LIB_0__::func_319(4112);
	__LIB_0__::func_320(6);
	vVar2 = { func_357(Global_2621440[0 /*12066*/].f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	__LIB_0__::func_321(vVar2, uVar1, uVar0, 0);
	__LIB_0__::func_322(vVar2);
	Global_40.f_9.f_15 = __LIB_1__::func_447(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

float func_142(var uParam0)
{
	return func_82(uParam0);
}

bool func_143(var uParam0)
{
	func_188(&(Local_14.f_477), __LIB_3__::func_179(&Local_554), __LIB_3__::func_526(&Local_554));
	if (!__LIB_13__::func_805(128))
	{
		if (__LIB_12__::func_644(uParam0) == 9)
		{
			func_178(128);
		}
	}
	if (func_281(uParam0))
	{
		return true;
	}
	if ((((__LIB_13__::func_805(2048) && !__LIB_13__::func_727(&Local_14, 2)) && !__LIB_13__::func_727(&Local_14, 38)) && !__LIB_13__::func_727(&Local_14, 65)) && !__LIB_13__::func_805(128))
	{
		return true;
	}
	if (func_283())
	{
		if ((__LIB_13__::func_727(&Local_14, 2) || __LIB_13__::func_727(&Local_14, 3)) || (__LIB_13__::func_805(131072) && func_284() != 0))
		{
			return true;
		}
		else if (__LIB_13__::func_727(&Local_14, 4))
		{
			return true;
		}
	}
	return false;
}

void func_144(var uParam0)
{
	int iVar0;
	int iVar1;
	if (uParam0->f_174 == 151)
	{
		func_376();
	}
	if (uParam0->f_174 == 152)
	{
		if (func_280() && ENTITY::IS_ENTITY_DEAD(Local_14.f_7))
		{
			__LIB_19__::func_284();
		}
		if (!func_280())
		{
			__LIB_19__::func_285();
		}
	}
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
	}
	iVar0 = 9;
	while (iVar0 >= 0)
	{
		iVar1 = iVar0;
		func_379(uParam0, iVar1, 1);
		iVar0 = (iVar0 + -1);
	}
	func_380(&Local_14, &Local_554, 1);
	func_308(0);
	func_381(&Local_14);
	CAM::STOP_GAMEPLAY_HINT(false);
	__LIB_3__::func_437(&Local_776);
	if (!bLocal_935)
	{
		__LIB_2__::func_788(&(Local_14.f_7), 1, 0, 1);
	}
	__LIB_0__::func_172(iLocal_928);
	func_384(0);
	if (func_280())
	{
		func_122(151, 1, 1, 1, 1, 1, 0);
		func_122(152, 1, 1, 1, 1, 1, 0);
	}
}

void func_178(int iParam0)
{
	__LIB_1__::func_683(&iLocal_807, iParam0);
}

void func_184()
{
	struct<4> Var0;
	Var0 = { func_413(0) };
	Local_554.f_3 = 119;
	Local_554.f_51 = { Var0 };
	Local_554.f_51.f_3 = Var0.f_3;
	__LIB_2__::func_106(&(Local_554.f_51), 1, 10, 0);
	__LIB_2__::func_432(&uLocal_748);
	__LIB_2__::func_433(&(Local_554.f_5));
	__LIB_2__::func_111(&(Local_554.f_5), 1);
	__LIB_3__::func_407(&(Local_554.f_5), 60f);
	__LIB_1__::func_981(&(Local_554.f_5), 40f);
	Local_14 = 43;
	iLocal_928 = VOLUME::_CREATE_VOLUME_BOX(557.2169f, 171.0651f, 135.3442f, 0f, 0f, 40.5f, 11.89501f, 10.20639f, 4.756716f);
	iLocal_929 = VOLUME::_CREATE_VOLUME_BOX(556.7672f, 172.2463f, 134.0795f, 0f, 0f, 37.03808f, 2.694678f, 1.764345f, 1.702914f);
	PED::_0x4C39C95AE5DB1329(iLocal_929, 0, 16);
}

void func_185(var uParam0, int iParam1)
{
	iLocal_930 = iParam1;
	iLocal_551 = 0;
}

void func_188(var uParam0, vector3 vParam1, bool bParam4)
{
	vector3 vVar0;
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, bParam4, __LIB_13__::func_729()) };
	if (!__LIB_0__::func_86(vVar0))
	{
		__LIB_4__::func_319(uParam0, vVar0, 2, -1082130432 /* Float: -1f */);
	}
}

bool func_193()
{
	return __LIB_13__::func_805(1024);
}

bool func_207(int iParam0)
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

int func_216(var uParam0)
{
	if ((__LIB_13__::func_727(&Local_14, 2) || __LIB_13__::func_727(&Local_14, 38)) || __LIB_13__::func_727(&Local_14, 65))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_7))
	{
		if (__LIB_13__::func_805(128))
		{
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_14.f_7, -1))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(Local_14.f_7, Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, Local_14.f_434.f_5);
				return 1;
			}
		}
		else
		{
			switch (func_471())
			{
				case 1:
					if (!__LIB_13__::func_805(256))
					{
						__LIB_13__::func_829(&Local_776, func_472(7, 8), 1, 1);
						__LIB_3__::func_949(&Local_776, "Loop_Idle", 0);
						__LIB_3__::func_949(&Local_776, "Loop_Idle_2", 0);
						__LIB_13__::func_831(&(Local_14.f_284), 0, 0);
						func_178(256);
						TASK::_0x2E1D6D87346BB7D2(Local_14.f_7, Global_35, 1, 0);
						iLocal_553 = 5;
					}
					break;
				case 2:
					__LIB_13__::func_829(&Local_776, 6, 1, 1);
					func_178(64);
					func_178(128);
					TASK::_0x2E1D6D87346BB7D2(Local_14.f_7, Global_35, 1, 0);
					iLocal_553 = 6;
					break;
			}
		}
	}
	return 0;
}

void func_236(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 16))
	{
		__LIB_12__::func_966(uParam0, 0);
		func_81(uParam0);
	}
}

void func_245(var uParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_206.f_348))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_206.f_348, __LIB_3__::func_179(&Local_554), 0f, 0f, __LIB_3__::func_526(&Local_554), 2);
	}
}

int func_260(var uParam0)
{
	vector3 vVar0;
	if (Global_1347702[uParam0->f_174 /*49*/].f_28 == 0)
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1347702[uParam0->f_174 /*49*/].f_43))
	{
		STREAMING::REQUEST_MODEL(Global_1347702[uParam0->f_174 /*49*/].f_28, false);
		if (!STREAMING::HAS_MODEL_LOADED(Global_1347702[uParam0->f_174 /*49*/].f_28))
		{
			return 0;
		}
		vVar0 = { __LIB_1__::func_440(uParam0->f_174) };
		__LIB_3__::func_618(vVar0, 2.5f, 1, 0, 0, 0, 0);
		PERSISTENCE::_0x9D16896F0DBE78A2(vVar0, 2.5f);
		if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 524288))
		{
			Global_1347702[uParam0->f_174 /*49*/].f_43 = func_529(uParam0, Global_1347702[uParam0->f_174 /*49*/].f_28, vVar0, 0, 1, 1, 0, 1, 1, 0, 1, 1);
		}
		else
		{
			Global_1347702[uParam0->f_174 /*49*/].f_43 = func_529(uParam0, Global_1347702[uParam0->f_174 /*49*/].f_28, vVar0, 0, 1, 1, 0, 1, 1, 1, 1, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1347702[uParam0->f_174 /*49*/].f_43) && !PED::IS_PED_INJURED(Global_1347702[uParam0->f_174 /*49*/].f_43))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_1347702[uParam0->f_174 /*49*/].f_43))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1347702[uParam0->f_174 /*49*/].f_43, true, true);
		}
		return 1;
	}
	return 0;
}

int func_261(var uParam0)
{
	func_188(&(Local_14.f_477), __LIB_3__::func_179(&Local_554), __LIB_3__::func_526(&Local_554));
	return 1;
}

bool func_280()
{
	if (__LIB_13__::func_727(&Local_14, 15))
	{
		return true;
	}
	return false;
}

bool func_281(var uParam0)
{
	func_548(uParam0);
	if (uParam0->f_174 == 152)
	{
		if (func_280() && ENTITY::IS_ENTITY_DEAD(Local_14.f_7))
		{
			__LIB_19__::func_284();
		}
	}
	if (__LIB_13__::func_805(128))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_7))
		{
			switch (iLocal_933)
			{
				case 0:
					if (__LIB_3__::func_634(&Local_776, 0, 0, 0))
					{
						if (iLocal_553 != 6)
						{
							__LIB_13__::func_829(&Local_776, 6, 1, 1);
							func_178(64);
							TASK::_0x2E1D6D87346BB7D2(Local_14.f_7, Global_35, 1, 0);
							bLocal_935 = true;
							iLocal_553 = 6;
						}
						__LIB_17__::func_881(&Local_776, 1);
					}
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_14.f_7, -1) && __LIB_12__::func_610(Local_14.f_7, -1082130432 /* Float: -1f */, 1116471296 /* Float: 70f */, 0, 0, -1082130432 /* Float: -1f */))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_7, false);
						bLocal_935 = true;
						iLocal_933++;
					}
					break;
				case 1:
					if (__LIB_0__::func_94(Global_35, __LIB_3__::func_179(&Local_554), 1) > 230f)
					{
						__LIB_7__::func_931(__LIB_3__::func_179(&Local_554), 40f, 1);
						iLocal_933++;
						return true;
					}
					break;
			}
		}
		else
		{
			return true;
		}
	}
	else
	{
		if (iLocal_551 == 3 && iLocal_930 == 3)
		{
			if (func_551(&Local_14, &Local_554, 0, &uLocal_748))
			{
				return true;
			}
		}
		if (__LIB_13__::func_727(&Local_14, 2))
		{
			if (func_552())
			{
				return true;
			}
		}
	}
	if (__LIB_13__::func_805(131072))
	{
		if ((((__LIB_13__::func_805(2048) && !__LIB_13__::func_727(&Local_14, 2)) && !__LIB_13__::func_727(&Local_14, 38)) && !__LIB_13__::func_727(&Local_14, 65)) && !__LIB_13__::func_805(128))
		{
			return true;
		}
	}
	return false;
}

bool func_283()
{
	float fVar0;
	float fVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_7))
	{
		return false;
	}
	fVar0 = __LIB_0__::func_665(Global_35, Local_14.f_7, 1, 1);
	fVar1 = __LIB_0__::func_94(Global_35, __LIB_3__::func_179(&Local_554), 1);
	if (fVar1 > 400f && fVar0 > 80f)
	{
		if (iLocal_930 == 3)
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_14.f_7))
			{
				return true;
			}
		}
		if (Local_554.f_46 && fVar1 > 120f)
		{
			return true;
		}
		if (func_280())
		{
			return true;
		}
	}
	return false;
}

int func_284()
{
	return Global_17504.f_11;
}

bool func_285(var uParam0)
{
	func_548(uParam0);
	func_188(&(Local_14.f_477), __LIB_3__::func_179(&Local_554), __LIB_3__::func_526(&Local_554));
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		__LIB_1__::func_694(Global_35, 557.4211f, 168.5067f, 133.3489f, 1, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 1097859072 /* Float: 15f */, 10f, 1, 1, 0, 0);
	}
	else
	{
		__LIB_1__::func_694(Global_35, 557.4211f, 168.5067f, 133.3489f, 1, 1112014848 /* Float: 50f */, 12f, 10f, 9f, 1, 1, 1, 0);
	}
	if (func_193())
	{
		if (iLocal_930 == 3 && iLocal_551 == 3)
		{
			if (func_555())
			{
				func_308(0);
				return true;
			}
			__LIB_17__::func_881(&Local_776, 1);
		}
		return false;
	}
	return true;
}

bool func_294(var uParam0)
{
	if ((((((((ENTITY::DOES_ENTITY_EXIST(Local_14.f_7) && !ENTITY::IS_ENTITY_DEAD(Local_14.f_7)) && ENTITY::DOES_ENTITY_EXIST(Local_14.f_90[3])) && ENTITY::DOES_ENTITY_EXIST(Local_14.f_90[9])) && ENTITY::DOES_ENTITY_EXIST(Local_14.f_90[10])) && ENTITY::DOES_ENTITY_EXIST(Local_14.f_90[11])) && ENTITY::DOES_ENTITY_EXIST(Local_14.f_90[0])) && ENTITY::DOES_ENTITY_EXIST(Local_14.f_90[1])) && ENTITY::DOES_ENTITY_EXIST(Local_14.f_90[4]))
	{
		if (__LIB_0__::func_113())
		{
			__LIB_13__::func_59(uParam0, Global_35, "Arthur", 0, 0, 0);
		}
		else
		{
			__LIB_13__::func_59(uParam0, Global_35, "john", 0, 0, 0);
		}
		__LIB_13__::func_59(uParam0, Local_14.f_7, "CS_HERBALIST", 0, 0, 0);
		__LIB_12__::func_957(uParam0, Local_14.f_90[3], "P_MORTARPESTLE02X", 0, 0, 0);
		__LIB_12__::func_957(uParam0, Local_14.f_90[9], "S_INV_MEDICINE01X", 0, 0, 0);
		__LIB_12__::func_957(uParam0, Local_14.f_90[10], "S_INV_MEDICINE_FTY", 0, 0, 0);
		__LIB_12__::func_957(uParam0, Local_14.f_90[11], "P_BOTTLESLIM01X", 0, 0, 0);
		__LIB_12__::func_957(uParam0, Local_14.f_90[1], "P_KNIFE02X", 0, 0, 0);
		__LIB_12__::func_957(uParam0, Local_14.f_90[4], "S_INV_BURDOCK01DX", 0, 0, 0);
		if (ENTITY::IS_ENTITY_ATTACHED(Local_14.f_90[1]))
		{
			ENTITY::DETACH_ENTITY(Local_14.f_90[1], true, true);
		}
		__LIB_12__::func_779(uParam0, __LIB_3__::func_179(&Local_554));
		if (__LIB_0__::func_113())
		{
			__LIB_0__::func_928(&uLocal_815, Global_35, "ARTHUR", 0);
		}
		else
		{
			__LIB_0__::func_928(&uLocal_815, Global_35, "JOHN", 0);
		}
		__LIB_0__::func_928(&uLocal_815, Local_14.f_7, "herbalist", 0);
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
		return true;
	}
	return false;
}

int func_300(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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
			func_587(uParam4);
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

void func_306(int* iParam0, bool bParam1)
{
	__LIB_1__::func_491(iParam0, 4);
	if (bParam1)
	{
		__LIB_2__::func_451(iParam0, 0);
	}
}

void func_307()
{
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_14.f_7, false);
	func_384(0);
	CAM::STOP_GAMEPLAY_HINT(false);
}

void func_308(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), Local_14.f_7, "REHOC_LEAD_IN", 0f, 0f, 0f, 0, "REHOC_LEAD_IN");
	}
	else
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "REHOC_LEAD_IN");
	}
}

void func_309(int iParam0)
{
	__LIB_1__::func_681(&iLocal_807, iParam0);
}

void func_347(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
		__LIB_8__::func_366(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871());
	}
	else if (iVar0 == 8)
	{
		__LIB_8__::func_367(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871(), __LIB_0__::func_113());
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
						func_672(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_672(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_672(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_672(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_672(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_672(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_672(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_672(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_672(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_672(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_672(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_672(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_672(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_672(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_672(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_672(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_672(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_672(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_672(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_672(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_672(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_672(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_672(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_672(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_672(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_674();
						func_675(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_672(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_347(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_347(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_347(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_672(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_672(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_710();
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
							func_672(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

Vector3 func_357(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	vVar0 = { func_717(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { func_717(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

void func_376()
{
	__LIB_18__::func_652(10);
}

void func_379(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	switch (iParam1)
	{
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_7))
			{
				func_740(uParam0, Local_14.f_7);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(Local_14.f_7));
				if (!bParam2 && !__LIB_0__::func_48(Global_35, Local_14.f_7, 80f, 1))
				{
					__LIB_2__::func_426(&(Local_14.f_7));
					Local_14.f_7 = 0;
				}
				else
				{
					PED::SET_PED_KEEP_TASK(Local_14.f_7, true);
					Local_14.f_7 = 0;
				}
			}
			break;
		case 2:
			if (!bParam2)
			{
				iVar0 = 0;
				while (iVar0 < 20)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_90[iVar0]) && !__LIB_18__::func_653(iVar0, 43))
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(Local_14.f_90[iVar0]));
						OBJECT::_0xCAAF2BCCFEF37F77(Local_14.f_90[iVar0], 40);
						Local_14.f_90[iVar0] = 0;
					}
					iVar0++;
				}
				if (PROPSET::_DOES_PROPSET_EXIST(Local_14.f_85))
				{
					PROPSET::_0xC1AB7EEFD3E6EE49(Local_14.f_85, 40);
					PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(Local_14.f_85);
					Local_14.f_85 = 0;
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 20)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_90[iVar0]) && __LIB_18__::func_653(iVar0, 43))
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(Local_14.f_90[iVar0]));
						Local_14.f_90[iVar0] = 0;
					}
					iVar0++;
				}
				if (PROPSET::_DOES_PROPSET_EXIST(Local_14.f_85))
				{
					PROPSET::_0xC1AB7EEFD3E6EE49(Local_14.f_85, 40);
					PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(Local_14.f_85);
					Local_14.f_85 = 0;
				}
			}
			break;
		case 3:
			if (!bParam2)
			{
				iVar0 = 0;
				while (iVar0 < 20)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_90[iVar0]) && __LIB_18__::func_653(iVar0, 43))
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(Local_14.f_90[iVar0]));
						OBJECT::DELETE_OBJECT(&(Local_14.f_90[iVar0]));
						Local_14.f_90[iVar0] = 0;
					}
					iVar0++;
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_242))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(Local_14.f_242));
					OBJECT::DELETE_OBJECT(&(Local_14.f_242));
				}
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_242))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(Local_14.f_242));
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_14.f_242));
				}
				iVar0 = 0;
				while (iVar0 < 20)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_90[iVar0]) && __LIB_18__::func_653(iVar0, 43))
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(Local_14.f_90[iVar0]));
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_14.f_90[iVar0]));
						Local_14.f_90[iVar0] = 0;
					}
					iVar0++;
				}
			}
			break;
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_434.f_6))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(Local_14.f_434.f_6));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_434.f_5))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(Local_14.f_434.f_5));
			}
			if (!bParam2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_434.f_6))
				{
					OBJECT::_0xCAAF2BCCFEF37F77(Local_14.f_434.f_6, 40);
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_14.f_434.f_6));
					Local_14.f_434.f_6 = 0;
				}
				__LIB_2__::func_426(&(Local_14.f_434.f_5));
				Local_14.f_434.f_5 = 0;
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_434.f_6))
			{
				OBJECT::_0xCAAF2BCCFEF37F77(Local_14.f_434.f_6, 40);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_14.f_434.f_6));
			}
			break;
		case 5:
			if (!bParam2)
			{
				if (PROPSET::_DOES_PROPSET_EXIST(Local_14.f_86))
				{
					PROPSET::_0xC1AB7EEFD3E6EE49(Local_14.f_86, 40);
					PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(Local_14.f_86);
					Local_14.f_86 = 0;
				}
			}
			else if (PROPSET::_DOES_PROPSET_EXIST(Local_14.f_86))
			{
				PROPSET::_0xC1AB7EEFD3E6EE49(Local_14.f_86, 40);
				PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(Local_14.f_86);
				Local_14.f_86 = 0;
			}
			break;
		case 7:
			__LIB_3__::func_437(&(Local_14.f_112));
			__LIB_3__::func_437(&(Local_14.f_133));
			__LIB_3__::func_437(&(Local_14.f_154));
			__LIB_3__::func_437(&(Local_14.f_175));
			func_742(43);
			break;
		case 6:
			__LIB_3__::func_437(&Local_776);
			break;
		case 8:
			if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_14.f_87))
			{
				TASK::_DELETE_SCENARIO_POINT(Local_14.f_87);
			}
			if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_14.f_89))
			{
				TASK::_DELETE_SCENARIO_POINT(Local_14.f_89);
			}
			if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_14.f_88))
			{
				TASK::_DELETE_SCENARIO_POINT(Local_14.f_88);
			}
			Local_14.f_87 = 0;
			Local_14.f_89 = 0;
			Local_14.f_88 = 0;
			STREAMING::_0x4EDDD9E9CA5AF985(joaat("SCRIPT_REHOB_HERBALIST"));
			break;
		case 9:
			func_743(&Local_14);
			func_381(&Local_14);
			func_744(&Local_14);
			break;
	}
	MISC::CLEAR_BIT(&iLocal_931, iParam1);
	MISC::CLEAR_BIT(&iLocal_932, iParam1);
}

void func_380(int iParam0, var uParam1, bool bParam2)
{
	if (uParam1->f_46)
	{
		__LIB_19__::func_286();
	}
	if (!bParam2)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_87))
		{
			TASK::_DELETE_SCENARIO_POINT(iParam0->f_87);
		}
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_89))
		{
			TASK::_DELETE_SCENARIO_POINT(iParam0->f_89);
		}
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_88))
		{
			TASK::_DELETE_SCENARIO_POINT(iParam0->f_88);
		}
		__LIB_3__::func_437(&(iParam0->f_112));
		__LIB_3__::func_437(&(iParam0->f_133));
		if (PROPSET::_DOES_PROPSET_EXIST(iParam0->f_85))
		{
			PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(iParam0->f_85);
		}
		if (PROPSET::_DOES_PROPSET_EXIST(iParam0->f_86))
		{
			PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(iParam0->f_86);
		}
		func_381(iParam0);
		func_743(iParam0);
		func_744(iParam0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_7))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0->f_7, 234, false);
	}
	else if (uParam1->f_46 && !__LIB_13__::func_727(iParam0, 1))
	{
		__LIB_19__::func_284();
	}
	if (__LIB_13__::func_727(iParam0, 24))
	{
		__LIB_19__::func_287();
	}
	if (uParam1->f_44)
	{
		__LIB_2__::func_115(40, 1, 0, 0, 12, 0, 0, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_8))
	{
		__LIB_2__::func_145(iParam0->f_8, 0);
	}
	__LIB_3__::func_711(&(iParam0->f_477), 106);
}

void func_381(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_531))
	{
		__LIB_3__::func_142(iParam0->f_531);
	}
}

void func_384(bool bParam0)
{
	if (__LIB_13__::func_805(512) == bParam0)
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_14.f_7, !bParam0);
	AUDIO::STOP_PED_SPEAKING(Local_14.f_7, bParam0);
	PED::SET_PED_CONFIG_FLAG(Local_14.f_7, 66, bParam0);
	PED::SET_PED_CAN_BE_TARGETTED(Local_14.f_7, !bParam0);
	if (bParam0)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_14.f_7, joaat("REL_PLAYER_ALLY"));
		func_178(512);
	}
	else
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_14.f_7, joaat("REL_PLAYER_LIKE"));
		func_309(512);
	}
}

struct<4> func_413(int iParam0)
{
	struct<4> Var0;
	Var0 = { 558.471f, 169.855f, 133.3435f };
	Var0.f_3 = 17.242f;
	return Var0;
}

int func_471()
{
	int iVar0;
	if (func_832(Local_14.f_7, 0, &(Local_554.f_5), &iVar0, 1, 0))
	{
		switch (iVar0)
		{
			case 2:
			case 4:
			case 8:
			case 16:
			case 8192:
			case 16384:
				return 2;
			case 256:
				return 1;
			default:
				break;
		}
	}
	return 0;
}

int func_472(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_3__::func_112(Local_14.f_7, Global_35, 1060437492 /* Float: 0.707f */);
	if (iVar0 == 2)
	{
		return iParam1;
	}
	else if (iVar0 == 1)
	{
		if (!__LIB_0__::func_195(ENTITY::GET_ENTITY_COORDS(Local_14.f_7, true, false), ENTITY::GET_ENTITY_COORDS(Local_14.f_7, true, false) + ENTITY::GET_ENTITY_FORWARD_VECTOR(Local_14.f_7), Global_36))
		{
			return iParam1;
		}
	}
	return iParam0;
}

int func_529(var uParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	if (__LIB_0__::func_1(uParam0->f_172, 64) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	iVar0 = __LIB_4__::func_205(iParam1, vParam2, iParam5, iParam6, fParam7, bParam8, bParam9, bParam10, bParam11, bParam12, bParam13, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (__LIB_12__::func_703(iParam1))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iVar0, true);
			ENTITY::SET_ENTITY_PROOFS(iVar0, 127, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 169, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 179, true);
			PED::_0xAE6004120C18DF97(iVar0, 0, 0);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iVar0, 270583);
		}
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			__LIB_0__::func_7(&(uParam0->f_172), 64);
		}
	}
	return iVar0;
}

void func_548(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bVar1 = false;
	bLocal_936 = false;
	iVar2 = func_896();
	if (iLocal_930 != iVar2)
	{
		func_185(uParam0, iVar2);
	}
	func_897();
	switch (iLocal_551)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (func_898(iLocal_930, iVar0))
				{
					if (!func_899(iVar0))
					{
						bVar1 = true;
					}
				}
				iVar0++;
			}
			if (!bVar1)
			{
				iLocal_551 = 1;
			}
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (func_898(iLocal_930, iVar0))
				{
					if (!func_900(iVar0))
					{
						bVar1 = true;
					}
				}
				iVar0++;
			}
			if (!bVar1)
			{
				iLocal_551 = 2;
			}
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (func_898(iLocal_930, iVar0))
				{
					if (!func_901(uParam0, iVar0))
					{
						bVar1 = true;
					}
				}
				iVar0++;
			}
			if (!bVar1)
			{
				func_902(iLocal_930);
				func_903();
				iLocal_551 = 3;
			}
			break;
		case 3:
			break;
	}
}

bool func_551(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	iVar0 = 0;
	func_911(iParam0, uParam1);
	__LIB_19__::func_621(iParam0, uParam1);
	if (iParam0->f_1 > 0)
	{
		if (__LIB_13__::func_727(iParam0, 46))
		{
			if (!__LIB_13__::func_727(iParam0, 47))
			{
				__LIB_13__::func_724(iParam0, 4);
				__LIB_13__::func_724(iParam0, 47);
				__LIB_13__::func_724(iParam0, 48);
				__LIB_13__::func_730(iParam0, 62);
				__LIB_13__::func_730(iParam0, 67);
				__LIB_13__::func_731(iParam0, 262144);
				__LIB_18__::func_654(iParam0);
				__LIB_0__::func_325(&(iParam0->f_9));
				if (__LIB_3__::func_587(iParam0->f_215, 1, 1))
				{
					__LIB_3__::func_969(&(iParam0->f_215), 1);
				}
				if (((__LIB_13__::func_727(iParam0, 12) && !__LIB_13__::func_727(iParam0, 38)) && !__LIB_13__::func_727(iParam0, 23)) && !__LIB_13__::func_727(iParam0, 15))
				{
					__LIB_3__::func_662("HRB_FAIL", 7500, 0, 0, -1, -1, 0);
					__LIB_0__::func_769();
				}
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_87))
				{
					TASK::_DELETE_SCENARIO_POINT(iParam0->f_87);
				}
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_88))
				{
					TASK::_DELETE_SCENARIO_POINT(iParam0->f_88);
				}
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_89))
				{
					TASK::_DELETE_SCENARIO_POINT(iParam0->f_89);
				}
				__LIB_13__::func_724(iParam0, 65);
				__LIB_18__::func_652(6);
				__LIB_13__::func_726(4);
				iParam0->f_1 = 12;
				if (iParam0->f_523 == 7)
				{
					iParam0->f_206 = 6;
				}
			}
		}
	}
	switch (iParam0->f_1)
	{
		case 0:
			if (func_919(iParam0, uParam1, &(uParam1->f_5)))
			{
				func_920(__LIB_3__::func_179(uParam1), iParam0->f_7, &(iParam0->f_215));
				__LIB_3__::func_285(iParam0->f_7, uParam1, 0);
				__LIB_3__::func_285(iParam0->f_90[15], uParam1, 0);
				func_922(iParam0, 1);
				__LIB_13__::func_724(iParam0, 67);
				__LIB_2__::func_482(&(iParam0->f_284.f_21[2 /*17*/]), 1, 1);
				WEAPON::REMOVE_ALL_PED_WEAPONS(iParam0->f_7, true, true);
				__LIB_1__::func_766(iParam0->f_7, joaat("WEAPON_MELEE_KNIFE"), 0, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				__LIB_3__::func_986(&(iParam0->f_243));
				__LIB_13__::func_732(iParam0, 1, 1);
				if (__LIB_19__::func_288())
				{
					__LIB_13__::func_724(iParam0, 16);
				}
				if (__LIB_13__::func_727(iParam0, 1))
				{
					if (__LIB_11__::func_192(12))
					{
						__LIB_13__::func_733(iParam0, 8);
					}
				}
				EVENT::_0xBB1E41DD3D3C6250(iParam0->f_7, "SpAggroFocus", 0);
				if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_20.f_11))
				{
					ENTITY::_0x18FF3110CF47115D(iParam0->f_20.f_11, 9, 0);
				}
				if (__LIB_13__::func_727(iParam0, 1))
				{
					if (__LIB_13__::func_727(iParam0, 7))
					{
						iParam0->f_1 = 12;
					}
					else if (__LIB_13__::func_727(iParam0, 6))
					{
						iParam0->f_1 = 11;
					}
					else if (__LIB_13__::func_727(iParam0, 5) || __LIB_18__::func_651())
					{
						__LIB_13__::func_724(iParam0, 12);
						__LIB_13__::func_724(iParam0, 13);
						__LIB_19__::func_484(iParam0, 1);
						iParam0->f_196 = 7;
						iParam0->f_1 = 3;
					}
					else
					{
						iParam0->f_1 = 2;
					}
				}
				else
				{
					iParam0->f_1 = 1;
				}
				if (__LIB_18__::func_651())
				{
					__LIB_19__::func_289();
					__LIB_13__::func_724(iParam0, 32);
				}
			}
			break;
		case 1:
			__LIB_0__::func_11(iParam0);
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0->f_7, false);
			if (func_931(iParam0, uParam1))
			{
				func_932(iParam0, 1, 1);
				if (!__LIB_11__::func_192(6))
				{
					iParam0->f_1 = 2;
				}
				else
				{
					__LIB_13__::func_732(iParam0, 2, 2);
					__LIB_13__::func_724(iParam0, 46);
					iParam0->f_1 = 12;
				}
			}
			else
			{
				func_933(iParam0);
			}
			break;
		case 2:
			__LIB_0__::func_11(iParam0);
			if (func_934(iParam0))
			{
				__LIB_13__::func_734(iParam0, 16);
				func_936(iParam0);
				if (__LIB_13__::func_727(iParam0, 1))
				{
					__LIB_19__::func_290();
				}
				__LIB_13__::func_724(iParam0, 67);
				iParam0->f_1 = 3;
			}
			break;
		case 3:
			if (func_938(iParam0, uParam1))
			{
				__LIB_18__::func_654(iParam0);
				__LIB_13__::func_730(iParam0, 62);
				__LIB_13__::func_730(iParam0, 67);
				iParam0->f_495 = 0;
				iParam0->f_1 = 4;
			}
			break;
		case 4:
			if (func_939(iParam0))
			{
				iParam0->f_1 = 5;
			}
			break;
		case 5:
			if (func_940(iParam0, uParam1))
			{
				__LIB_13__::func_724(iParam0, 3);
				__LIB_13__::func_734(iParam0, 16);
				__LIB_13__::func_734(iParam0, 131072);
				iParam0->f_1 = 11;
			}
			break;
		case 6:
			if (__LIB_0__::func_58(iParam0))
			{
				iParam0->f_1 = 11;
			}
			break;
		case 8:
			if (func_942(iParam0, uParam1, *uParam3))
			{
				iParam0->f_1 = 11;
			}
			break;
		case 9:
			if (func_943(iParam0))
			{
				if (!__LIB_2__::func_136(iParam0->f_7, 0) || !PED::IS_PED_FLEEING(iParam0->f_7))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_7))
					{
						if (!PED::IS_PED_IN_COMBAT(iParam0->f_7, Global_35))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0->f_7, Global_35, 1, 1))
							{
								__LIB_2__::func_478(iParam0->f_7, Global_35, "RE_HEC_UNI_V1_AGGRO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							else if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_434.f_5) && __LIB_0__::func_394(Global_35, iParam0->f_434.f_5, 0))
							{
								__LIB_2__::func_478(iParam0->f_7, Global_35, "RE_HEC_UNI_V1_AGGRO_H", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							else
							{
								__LIB_2__::func_478(iParam0->f_7, Global_35, "RE_HEC_UNI_V1_AGGRO_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
						}
					}
					if (__LIB_13__::func_727(iParam0, 1))
					{
						__LIB_13__::func_724(iParam0, 2);
					}
					iParam0->f_1 = 13;
				}
			}
			break;
		case 10:
			if (!__LIB_2__::func_1(iParam0->f_7, 0, 1) || !__LIB_0__::func_48(Global_35, iParam0->f_7, 40f, 1))
			{
				return true;
			}
			break;
		case 7:
			if (func_948(iParam0))
			{
				uParam1->f_46 = 1;
				uParam1->f_50 = 1;
				iParam0->f_1 = 11;
			}
			break;
		case 11:
			if (func_949(iParam0, uParam1, uParam1->f_46))
			{
				iVar0 = 1;
			}
			break;
		case 12:
			if (func_950(iParam0))
			{
				iVar0 = 1;
			}
			break;
		case 13:
			break;
	}
	func_951(iParam0);
	func_952(iParam0);
	return iVar0;
}

bool func_552()
{
	float fVar0;
	if (ENTITY::IS_ENTITY_DEAD(Local_14.f_7))
	{
		return false;
	}
	fVar0 = __LIB_0__::func_665(Global_35, Local_14.f_7, 1, 1);
	if (fVar0 > 350f)
	{
		return true;
	}
	if (fVar0 > 200f && !CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_14.f_7, true, false), 5f))
	{
		return true;
	}
	return false;
}

bool func_555()
{
	bool bVar0;
	if (!__LIB_13__::func_805(2))
	{
		if (__LIB_13__::func_805(32768))
		{
			if (!__LIB_0__::func_48(Global_35, Local_14.f_7, 60f, 1))
			{
				func_178(2);
			}
		}
	}
	if (!__LIB_13__::func_805(65536))
	{
		if (__LIB_0__::func_75(&uLocal_922))
		{
			if (__LIB_1__::func_285(&uLocal_922, 2f))
			{
				func_956();
				func_178(65536);
			}
		}
	}
	if (__LIB_13__::func_805(32))
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	}
	func_957();
	if (__LIB_13__::func_805(4))
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_928, true, 0) || !__LIB_13__::func_805(65536))
		{
			__LIB_4__::func_340(&(Local_14.f_284.f_21[0 /*17*/]));
		}
		__LIB_4__::func_340(&(Local_14.f_284.f_21[1 /*17*/]));
		switch (func_959(&(Local_14.f_284), &(Local_14.f_7), 1))
		{
			case -2:
			case 0:
				__LIB_13__::func_832(&(Local_14.f_284), 0);
				__LIB_13__::func_833(&(Local_14.f_284), &(Local_14.f_7), 1);
				if (__LIB_13__::func_805(16))
				{
				}
				else
				{
					if (__LIB_0__::func_113())
					{
						StringCopy(&cLocal_812, "REHC_RC1_LIB", 24);
					}
					else
					{
						StringCopy(&cLocal_812, "REHC_RC1_LIJ", 24);
					}
					__LIB_0__::func_82(1, 0, 0);
					__LIB_1__::func_104(&uLocal_815, cLocal_812, 0, -1, 0, 0);
				}
				func_178(32);
				func_309(4);
				func_309(8);
				__LIB_1__::func_148(&uLocal_916);
				break;
		}
	}
	bVar0 = __LIB_13__::func_805(32);
	switch (iLocal_553)
	{
		case 0:
			func_964();
			func_308(1);
			iLocal_553 = 1;
			break;
		case 1:
			if (__LIB_4__::func_360(&(Local_797[0 /*9*/]), 45f, 1082130432 /* Float: 4f */, 0, 0, 0, 0))
			{
				if (__LIB_3__::func_280(&Local_797, 1, 1f))
				{
					__LIB_13__::func_829(&Local_776, func_472(10, 11), 1, 1);
					iLocal_553 = 2;
				}
			}
			break;
		case 2:
			if (!func_967(&Local_776, 1))
			{
				if (__LIB_3__::func_943(&Local_776, "s_Idle", 1))
				{
					__LIB_13__::func_829(&Local_776, 2, 1, 1);
					iLocal_553 = 3;
				}
			}
			break;
		case 3:
			if (!func_967(&Local_776, 1))
			{
				if (__LIB_3__::func_943(&Local_776, "s_Idle", 1))
				{
					iLocal_553 = 4;
				}
			}
			break;
		case 4:
			if (!__LIB_13__::func_805(2))
			{
				if (!__LIB_0__::func_48(Global_35, Local_14.f_7, 60f, 1))
				{
					if (!__LIB_0__::func_75(&uLocal_913))
					{
						__LIB_1__::func_148(&uLocal_913);
					}
					if (__LIB_1__::func_285(&uLocal_913, 25f))
					{
						func_178(2);
						func_178(16);
					}
				}
				else
				{
					if (__LIB_0__::func_75(&uLocal_913))
					{
						__LIB_0__::func_37(&uLocal_913);
					}
					if (!bVar0 && !__LIB_0__::func_48(Global_35, Local_14.f_7, 15f, 1))
					{
						if (func_969())
						{
							__LIB_1__::func_148(&uLocal_919);
							__LIB_13__::func_829(&Local_776, func_472(4, 5), 1, 1);
							iLocal_553 = 7;
						}
					}
					else if (__LIB_0__::func_48(Global_35, Local_14.f_7, 15f, 1))
					{
						__LIB_3__::func_949(&Local_776, "Loop_Idle", 1);
						iLocal_553 = 8;
					}
				}
			}
			else if (__LIB_0__::func_48(Local_14.f_7, Global_35, 45f, 1))
			{
				if (__LIB_0__::func_75(&uLocal_919))
				{
					__LIB_0__::func_37(&uLocal_919);
				}
				func_309(2);
			}
			break;
		case 7:
			if (!func_967(&Local_776, 1))
			{
				if (__LIB_3__::func_943(&Local_776, "s_Idle", 1))
				{
					__LIB_13__::func_829(&Local_776, 2, 1, 1);
					iLocal_553 = 3;
				}
			}
			break;
		case 8:
			if (!func_967(&Local_776, 1))
			{
				if (__LIB_3__::func_943(&Local_776, "s_Idle_2", 1))
				{
					__LIB_1__::func_148(&uLocal_919);
					iLocal_553 = 9;
				}
			}
			break;
		case 9:
			if (!bVar0 && __LIB_1__::func_285(&uLocal_919, 16f))
			{
				__LIB_13__::func_829(&Local_776, 9, 1, 1);
				__LIB_3__::func_949(&Local_776, "Loop_Idle", 0);
				__LIB_3__::func_949(&Local_776, "Loop_Idle_2", 0);
				__LIB_1__::func_148(&uLocal_919);
				iLocal_553 = 10;
			}
			else if (bVar0)
			{
				__LIB_3__::func_949(&Local_776, "Loop_Idle_2", 1);
				iLocal_553 = 11;
			}
			break;
		case 10:
			if (!func_967(&Local_776, 1))
			{
				if (__LIB_3__::func_943(&Local_776, "s_Idle", 1))
				{
					if (bVar0 || __LIB_1__::func_285(&uLocal_919, 15f))
					{
						__LIB_13__::func_829(&Local_776, 2, 1, 1);
						iLocal_553 = 3;
					}
				}
			}
			break;
		case 5:
			if (!func_967(&Local_776, 1))
			{
				if (__LIB_3__::func_943(&Local_776, "s_Idle", 1))
				{
					__LIB_13__::func_831(&(Local_14.f_284), 0, 1);
					iLocal_553 = 4;
				}
			}
			break;
		case 6:
			break;
		case 11:
			if (((ANIMSCENE::_0xF94692EB9DC15D74(Local_776.f_1, 0) || __LIB_3__::func_642(Local_776.f_1, 100)) || ANIMSCENE::_0x005E6F28DD7ED58D(Local_776.f_1, "GenStoryMale")) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_14.f_7, Local_776.f_1))
			{
				__LIB_3__::func_437(&Local_776);
				if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_90[3]))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_14.f_90[3]))
					{
						ENTITY::DETACH_ENTITY(Local_14.f_90[3], true, true);
					}
				}
				return true;
			}
			break;
	}
	return false;
}

void func_587(var uParam0)
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
		func_1006(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1008(uParam0);
		func_1009(uParam0);
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

bool func_672(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_672(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			func_1148(iParam0);
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
			func_1150(iParam0, iParam1);
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
						func_672(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_672(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_672(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_672(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_672(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_672(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_672(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_672(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_672(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_672(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_674()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1190();
	func_1191();
	func_1192();
	func_1193();
	func_1194();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_675(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1197(iParam0, 1, 1, -142743235, 1);
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

void func_710()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1231(&uVar4, &iVar1, &iVar2, &iVar3)))
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

Vector3 func_717(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
		bVar10 = func_1245();
		if (VOLUME::_DOES_VOLUME_EXIST(bVar10))
		{
		}
	}
	if (!func_1246(Global_1310720.f_21))
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

void func_740(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(Global_1347702[uParam0->f_174 /*49*/].f_21))
	{
		return;
	}
	if (ITEMSET::IS_IN_ITEMSET(iParam1, Global_1347702[uParam0->f_174 /*49*/].f_21))
	{
		ITEMSET::REMOVE_FROM_ITEMSET(iParam1, Global_1347702[uParam0->f_174 /*49*/].f_21);
	}
}

void func_742(int iParam0)
{
	STREAMING::REMOVE_ANIM_DICT(__LIB_13__::func_807(iParam0, 0));
	STREAMING::REMOVE_ANIM_DICT(__LIB_13__::func_807(iParam0, 1));
	STREAMING::REMOVE_ANIM_DICT(__LIB_13__::func_807(19, 0));
	STREAMING::REMOVE_ANIM_DICT(__LIB_13__::func_807(43, 0));
	STREAMING::REMOVE_ANIM_DICT(__LIB_13__::func_807(43, 1));
	STREAMING::REMOVE_ANIM_DICT("SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER");
}

void func_743(int iParam0)
{
	__LIB_0__::func_172(iParam0->f_239);
}

void func_744(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_0__::func_172(iParam0->f_234[iVar0]);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 11)
	{
		__LIB_2__::func_353(&(iParam0->f_222[iVar1]), 1);
		iVar1++;
	}
}

bool func_832(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		__LIB_2__::func_521(uParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_968(iParam0, uParam2))
			{
				*iParam3 = 128;
				__LIB_2__::func_196(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (__LIB_13__::func_700(iParam0, uParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, uParam2, *iParam3);
					return true;
				}
				else if (__LIB_10__::func_427(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_4__::func_235(iParam0, uParam2))
				{
					*iParam3 = 64;
					__LIB_2__::func_196(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				__LIB_2__::func_196(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, uParam2))
					{
						*iParam3 = 4;
						__LIB_2__::func_196(iParam0, uParam2, *iParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, uParam2))
					{
						*iParam3 = 256;
						__LIB_2__::func_196(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_10__::func_430(Global_35, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					__LIB_2__::func_196(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (__LIB_10__::func_430(Global_35, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				__LIB_2__::func_196(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (__LIB_2__::func_971(iParam0, uParam2))
				{
					*iParam3 = 32;
					__LIB_2__::func_196(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, uParam2))
				{
					*iParam3 = 4096;
					__LIB_2__::func_196(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(uParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && __LIB_2__::func_83(uParam2, iParam0)) && __LIB_2__::func_197(uParam2, iParam0))
					{
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && __LIB_2__::func_83(uParam2, iParam0)) && __LIB_2__::func_197(uParam2, iParam0))
				{
					*iParam3 = 2;
					__LIB_2__::func_196(iParam0, uParam2, *iParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*iParam3 = 2;
								__LIB_2__::func_196(iParam0, uParam2, *iParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, uParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_840(uParam2, iParam0) || (uParam2->f_9 > 0 && (__LIB_0__::func_485() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, uParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_1344(uParam2, iParam0))
			{
				*iParam3 = 1024;
				__LIB_2__::func_196(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_867(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					__LIB_2__::func_196(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (__LIB_2__::func_878(iParam0, uParam2))
					{
						*iParam3 = 8192;
						__LIB_2__::func_196(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, uParam2))
				{
					*iParam3 = 32768;
					__LIB_2__::func_196(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, uParam2))
					{
						*iParam3 = 512;
						__LIB_2__::func_196(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_834(iParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_4 = 0;
					__LIB_2__::func_196(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(uParam2, iParam0))
			{
				*iParam3 = 1;
				__LIB_2__::func_196(iParam0, uParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

int func_896()
{
	float fVar0;
	fVar0 = BUILTIN::VDIST(__LIB_3__::func_179(&Local_554), Global_36);
	if (fVar0 > 300f)
	{
		return 0;
	}
	else if (fVar0 > 250f)
	{
		return 1;
	}
	else if (fVar0 > 200f)
	{
		return 2;
	}
	return 3;
}

void func_897()
{
	switch (iLocal_934)
	{
		case 0:
			if (__LIB_0__::func_94(Global_35, __LIB_3__::func_179(&Local_554), 1) > 200f || (((__LIB_0__::func_94(Global_35, __LIB_3__::func_179(&Local_554), 1) > 50f && !CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_14.f_7, true, false), 5f)) && iLocal_551 == 3) && !__LIB_13__::func_805(131072)))
			{
				PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(Local_14.f_85);
				PROPSET::_0xC1AB7EEFD3E6EE49(Local_14.f_85, 16);
				PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(Local_14.f_86);
				PROPSET::_0xC1AB7EEFD3E6EE49(Local_14.f_86, 16);
				MISC::CLEAR_AREA(__LIB_3__::func_179(&Local_554), 20f, 2097152);
				Local_14.f_85 = 0;
				Local_14.f_86 = 0;
				iLocal_934++;
			}
			break;
		case 1:
			if (__LIB_13__::func_736(joaat("PG_HERBALISTCAMP01X_NOTABLE"), 1))
			{
				iLocal_934++;
			}
			break;
		case 2:
			if (func_1398(&(Local_14.f_85), __LIB_3__::func_179(&Local_554), __LIB_3__::func_526(&Local_554), joaat("PG_HERBALISTCAMP01X_NOTABLE")))
			{
				iLocal_934++;
			}
			break;
		case 3:
			if (func_1399(&Local_14, __LIB_3__::func_179(&Local_554), __LIB_3__::func_526(&Local_554)))
			{
				iLocal_934++;
			}
			break;
		case 4:
			if (__LIB_13__::func_736(joaat("PG_HERBALISTCAMP01X_CART"), 1))
			{
				Local_14.f_86 = PROPSET::_CREATE_PROPSET_3(joaat("PG_HERBALISTCAMP01X_CART"), 0f, 0f, 0f, Local_14.f_434.f_6, 0f, false, 1, false);
				iLocal_934++;
			}
			break;
	}
}

bool func_898(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			switch (iParam1)
			{
				case 1:
				case 2:
					return true;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 4:
					return true;
				default:
					break;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_899(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			if (PED::_0x5C16855277819BBF() >= 2)
			{
				__LIB_13__::func_820(&(Local_14.f_20), 9);
				__LIB_3__::func_164(&Local_797);
			}
			else
			{
				PED::_0xED9582B3DA8F02B4(2);
				return false;
			}
			break;
		case 3:
			STREAMING::REQUEST_MODEL(__LIB_13__::func_737(Local_14.f_240), false);
			break;
		case 4:
			__LIB_18__::func_655(&(Local_14.f_434), 9, 0, 1);
			break;
		case 5:
			break;
		case 7:
			break;
		case 6:
			if (!__LIB_3__::func_632(&Local_776, "script@beat@wilderness@herbalistCamp@leadin@rc1@Leadin_ILO", 230043, 230219, 2, 64, 0, 0, 0))
			{
			}
			break;
		case 8:
			return STREAMING::_REQUEST_SCENARIO_TYPE(joaat("SCRIPT_REHOB_HERBALIST"), 19, Local_14.f_20.f_1, joaat("SCRIPT_COMMON_STAND_HERBALIST"));
	}
	return true;
}

bool func_900(int iParam0)
{
	if (MISC::IS_BIT_SET(iLocal_931, iParam0))
	{
		return true;
	}
	switch (iParam0)
	{
		case 1:
			if (!__LIB_13__::func_821(&(Local_14.f_20)))
			{
				return false;
			}
			break;
		case 2:
			if (!__LIB_13__::func_736(joaat("PG_HERBALISTCAMP01X_NOTABLE"), 1))
			{
				return false;
			}
			break;
		case 3:
			if (!__LIB_18__::func_656(Local_14))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(__LIB_13__::func_737(Local_14.f_240)))
			{
				return false;
			}
			break;
		case 4:
			if (!__LIB_18__::func_657(&(Local_14.f_434)))
			{
				return false;
			}
			break;
		case 5:
			if (!__LIB_13__::func_736(joaat("PG_HERBALISTCAMP01X_NOTABLE"), 2))
			{
				return false;
			}
			break;
		case 7:
			if (!__LIB_18__::func_658(Local_14))
			{
				return false;
			}
			if (!func_1410(Local_14, &uLocal_552, &(Local_14.f_112), &(Local_14.f_133), &(Local_14.f_154), &(Local_14.f_175)))
			{
				return false;
			}
			break;
		case 6:
			if (!__LIB_3__::func_633(&Local_776))
			{
				return false;
			}
			break;
		case 8:
			if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("SCRIPT_REHOB_HERBALIST"), false))
			{
				return false;
			}
			break;
	}
	MISC::SET_BIT(&iLocal_931, iParam0);
	return true;
}

bool func_901(var uParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(iLocal_932, iParam1))
	{
		if (Local_14.f_532 == 0)
		{
			Local_14.f_532 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(555.9357f, 173.0989f, 133.3503f, 0f, 0f, -51.99086f, 1.8f, 2.943975f, 2.410691f, "m_volHerbReturn");
		}
		if (Local_14.f_533 == 0)
		{
			Local_14.f_533 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 558.1541f, 170.2181f, 133.3503f, 0f, 0f, 0f, 1.033522f, 1.130385f, 1.487637f);
		}
		return true;
	}
	if ((__LIB_13__::func_805(131072) || __LIB_18__::func_651()) || !func_1412())
	{
		switch (iParam1)
		{
			case 1:
				if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_7))
				{
					if (!bLocal_936)
					{
						Local_14.f_7 = func_1413(&(Local_14.f_20), __LIB_3__::func_179(&Local_554), __LIB_3__::func_526(&Local_554));
						bLocal_936 = true;
						__LIB_13__::func_260(uParam0, Local_14.f_7);
					}
				}
				else if (PED::_0xA0BC8FAED8CFEB3C(Local_14.f_7))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_7, true);
					__LIB_2__::func_133(Local_14.f_7, "HERBALIST", 0);
					func_1416();
					__LIB_3__::func_178(Local_14.f_7, &Local_797);
					MISC::SET_BIT(&iLocal_932, iParam1);
					return true;
				}
				break;
			case 2:
				if (func_1398(&(Local_14.f_85), __LIB_3__::func_179(&Local_554), __LIB_3__::func_526(&Local_554), joaat("PG_HERBALISTCAMP01X_NOTABLE")))
				{
					MISC::SET_BIT(&iLocal_932, iParam1);
					return true;
				}
				else if (!ENTITY::_0x6BFBDC46139C45AB(__LIB_3__::func_179(&Local_554)))
				{
					STREAMING::REQUEST_COLLISION_AT_COORD(__LIB_3__::func_179(&Local_554));
				}
				break;
			case 3:
				if (MISC::IS_BIT_SET(iLocal_932, 2))
				{
					if (func_1418())
					{
						func_1419(&(Local_14.f_90), Local_14, __LIB_3__::func_179(&Local_554), __LIB_3__::func_526(&Local_554), Local_14.f_90[2], __LIB_13__::func_805(131072));
						Local_14.f_242 = OBJECT::CREATE_OBJECT(__LIB_13__::func_737(Local_14.f_240), __LIB_3__::func_179(&Local_554), true, true, false, false, true);
						ENTITY::SET_ENTITY_VISIBLE(Local_14.f_242, false);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_14.f_90[3], true);
						MISC::SET_BIT(&iLocal_932, iParam1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_90[3]))
						{
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_90[17]))
						{
							ENTITY::SET_ENTITY_VISIBLE(Local_14.f_90[17], false);
							ENTITY::SET_ENTITY_COLLISION(Local_14.f_90[17], false, false);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_90[4]))
						{
							__LIB_3__::func_459(Local_14.f_90[4], 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_90[0]))
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_90[0], true);
							ENTITY::SET_ENTITY_COLLISION(Local_14.f_90[0], false, false);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_90[18]))
						{
							ENTITY::SET_ENTITY_COLLISION(Local_14.f_90[18], false, false);
						}
						return true;
					}
					else
					{
						__LIB_19__::func_291(&(Local_14.f_90), 43, Local_14.f_85);
					}
				}
				break;
			case 4:
				if (!bLocal_936)
				{
					func_1422(&(Local_14.f_434), Local_14.f_7, 1);
					if (PROPSET::_DOES_PROPSET_EXIST(Local_14.f_86))
					{
						ENTITY::_0x9587913B9E772D29(Local_14.f_434.f_6, 1);
					}
					bLocal_936 = true;
					MISC::SET_BIT(&iLocal_932, iParam1);
					return true;
				}
				break;
			case 5:
				if (MISC::IS_BIT_SET(iLocal_932, 4))
				{
					Local_14.f_86 = PROPSET::_CREATE_PROPSET_3(joaat("PG_HERBALISTCAMP01X_CART"), 0f, 0f, 0f, Local_14.f_434.f_6, 0f, false, 1, false);
					MISC::SET_BIT(&iLocal_932, iParam1);
					return true;
				}
				break;
			case 8:
				if (MISC::IS_BIT_SET(iLocal_932, 3))
				{
					if (func_1399(&Local_14, __LIB_3__::func_179(&Local_554), __LIB_3__::func_526(&Local_554)))
					{
						ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_14.f_90[2], false);
						func_307();
						MISC::SET_BIT(&iLocal_932, iParam1);
						return true;
					}
					else if (!func_1423(2))
					{
						__LIB_19__::func_291(&(Local_14.f_90), 43, Local_14.f_85);
					}
				}
				break;
			case 9:
				__LIB_13__::func_822(&Local_14, &Local_554, 1109393408 /* Float: 40f */, 1101004800 /* Float: 20f */);
				__LIB_19__::func_485(&Local_14, &Local_554);
				func_1426(&Local_14, &Local_554);
				MISC::SET_BIT(&iLocal_932, iParam1);
				return true;
			default:
				MISC::SET_BIT(&iLocal_932, iParam1);
				return true;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_7))
				{
					if (!bLocal_936)
					{
						if (PED::GET_CLOSEST_PED(__LIB_3__::func_179(&Local_554), 20f, 1, 1, &(Local_14.f_7), 0, 1, 1, 28))
						{
							bLocal_936 = true;
							__LIB_13__::func_260(uParam0, Local_14.f_7);
						}
					}
				}
				else if (PED::_0xA0BC8FAED8CFEB3C(Local_14.f_7))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_7, true);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_14.f_7, true, true);
					__LIB_2__::func_133(Local_14.f_7, "HERBALIST", 0);
					__LIB_3__::func_178(Local_14.f_7, &Local_797);
					MISC::SET_BIT(&iLocal_932, iParam1);
					return true;
				}
				break;
			case 2:
				if (Local_14.f_85 == 0)
				{
					Local_14.f_85 = PROPSET::_GET_PROPSET_AT_COORDS(joaat("PG_HERBALISTCAMP01X_NOTABLE"), __LIB_3__::func_179(&Local_554));
				}
				else
				{
					MISC::SET_BIT(&iLocal_932, iParam1);
					return true;
				}
				break;
			case 3:
				if (MISC::IS_BIT_SET(iLocal_932, 2))
				{
					func_1419(&(Local_14.f_90), Local_14, __LIB_3__::func_179(&Local_554), __LIB_3__::func_526(&Local_554), Local_14.f_90[2], __LIB_13__::func_805(131072));
					Local_14.f_242 = OBJECT::CREATE_OBJECT(__LIB_13__::func_737(Local_14.f_240), __LIB_3__::func_179(&Local_554), true, true, false, false, true);
					ENTITY::SET_ENTITY_VISIBLE(Local_14.f_242, false);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_14.f_90[3], true);
					if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_90[17]))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_14.f_90[17], false);
						ENTITY::SET_ENTITY_COLLISION(Local_14.f_90[17], false, false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_90[4]))
					{
						__LIB_3__::func_459(Local_14.f_90[4], 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_90[0]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_90[0], true);
						ENTITY::SET_ENTITY_COLLISION(Local_14.f_90[0], false, false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_90[18]))
					{
						ENTITY::SET_ENTITY_COLLISION(Local_14.f_90[18], false, false);
					}
					MISC::SET_BIT(&iLocal_932, iParam1);
					return true;
				}
				break;
			case 4:
				if (!bLocal_936)
				{
					func_1422(&(Local_14.f_434), Local_14.f_7, 0);
					if (PROPSET::_DOES_PROPSET_EXIST(Local_14.f_86))
					{
						ENTITY::_0x9587913B9E772D29(Local_14.f_434.f_6, 1);
					}
					if (PED::GET_CLOSEST_PED(567.0706f, 174.5801f, 134.2049f, 4f, 1, 1, &(Local_14.f_434.f_5), 0, 1, 1, -1))
					{
						bLocal_936 = true;
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_14.f_434.f_5, true, true);
						MISC::SET_BIT(&iLocal_932, iParam1);
					}
					return true;
				}
				break;
			case 5:
				if (MISC::IS_BIT_SET(iLocal_932, 4))
				{
					Local_14.f_86 = PROPSET::_CREATE_PROPSET_3(joaat("PG_HERBALISTCAMP01X_CART"), 0f, 0f, 0f, Local_14.f_434.f_6, 0f, false, 1, false);
					MISC::SET_BIT(&iLocal_932, iParam1);
					return true;
				}
				break;
			case 8:
				if (MISC::IS_BIT_SET(iLocal_932, 3))
				{
					if (func_1399(&Local_14, __LIB_3__::func_179(&Local_554), __LIB_3__::func_526(&Local_554)))
					{
						ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_14.f_90[2], false);
						if (func_193())
						{
							func_384(1);
						}
						else
						{
							func_307();
						}
						MISC::SET_BIT(&iLocal_932, iParam1);
						return true;
					}
					else if (!func_1423(2))
					{
						__LIB_19__::func_291(&(Local_14.f_90), 43, Local_14.f_85);
					}
				}
				break;
			case 9:
				__LIB_13__::func_822(&Local_14, &Local_554, 1109393408 /* Float: 40f */, 1101004800 /* Float: 20f */);
				__LIB_19__::func_485(&Local_14, &Local_554);
				func_1426(&Local_14, &Local_554);
				MISC::SET_BIT(&iLocal_932, iParam1);
				return true;
			default:
				MISC::SET_BIT(&iLocal_932, iParam1);
				return true;
		}
	}
	return false;
}

void func_902(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
		case 2:
			if (__LIB_13__::func_805(131072))
			{
				func_1416();
			}
			break;
		case 3:
			switch (func_284())
			{
				case 0:
					func_1427();
					break;
				case 2:
					func_307();
					__LIB_18__::func_659(&Local_14, 0, joaat("SCRIPT_COMMON_LEAN_READ_HERBALIST"), 0, 1, 1, 0);
					break;
				case 3:
					func_307();
					__LIB_18__::func_659(&Local_14, 0, joaat("SCRIPT_COMMON_LEAN_READ_HERBALIST"), 0, 1, 1, 0);
					break;
				case 4:
					func_307();
					TASK::TASK_WANDER_IN_AREA(Local_14.f_7, __LIB_3__::func_179(&Local_554), 5f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 1);
					break;
			}
			func_1429(&Local_14);
			break;
	}
	__LIB_2__::func_133(Local_14.f_7, "HERBALIST", 0);
}

void func_903()
{
	__LIB_18__::func_650(10);
}

void func_911(int iParam0, var uParam1)
{
	iParam0->f_530 = 0;
	if (__LIB_3__::func_722(iParam0->f_7, &(iParam0->f_243), &(iParam0->f_530), 0) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, iParam0->f_7))
	{
		__LIB_13__::func_724(iParam0, 49);
	}
	else
	{
		__LIB_13__::func_730(iParam0, 49);
	}
	if (!uParam1->f_46)
	{
		if (func_1433(iParam0, &(uParam1->f_5)))
		{
			if (__LIB_3__::func_587(iParam0->f_215, 1, 1))
			{
				__LIB_3__::func_969(&(iParam0->f_215), 1);
			}
			__LIB_0__::func_769();
			__LIB_13__::func_730(iParam0, 13);
			__LIB_13__::func_731(iParam0, 262144);
			__LIB_13__::func_730(iParam0, 67);
			__LIB_18__::func_654(iParam0);
			__LIB_13__::func_730(iParam0, 62);
			if (!iParam0->f_221)
			{
				uParam1->f_46 = 1;
				func_922(iParam0, 0);
			}
		}
		else if (iParam0->f_521)
		{
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam0->f_7, 0))
			{
				PED::SET_PED_CAPSULE(iParam0->f_7, 0f);
			}
			else
			{
				iParam0->f_521 = 0;
			}
		}
	}
	PED::SET_PED_CAPSULE(iParam0->f_7, 0f);
	if (__LIB_13__::func_727(iParam0, 26) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_7))
	{
		if (__LIB_0__::func_153(Global_35, 0, 1, 0) != joaat("WEAPON_UNARMED") && !WEAPON::_IS_WEAPON_MELEE(__LIB_0__::func_153(Global_35, 0, 1, 0)))
		{
			__LIB_13__::func_730(iParam0, 26);
			func_1435(iParam0, 3);
			__LIB_2__::func_478(iParam0->f_7, Global_35, "RE_HEC_UNI_V1_AGGRO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
		}
	}
	__LIB_19__::func_292(iParam0->f_7, 0, 0, (__LIB_13__::func_727(iParam0, 35) || __LIB_18__::func_660()), __LIB_13__::func_727(iParam0, 32));
	if (iParam0->f_1 > 0)
	{
		__LIB_4__::func_340(&(iParam0->f_284.f_21[2 /*17*/]));
		iParam0->f_433 = func_959(&(iParam0->f_284), &(iParam0->f_7), __LIB_13__::func_727(iParam0, 21));
		if (!__LIB_13__::func_727(iParam0, 24))
		{
			switch (iParam0->f_433)
			{
				case 1:
					if (__LIB_13__::func_727(iParam0, 62))
					{
						__LIB_13__::func_724(iParam0, 60);
						__LIB_13__::func_724(iParam0, 38);
						__LIB_13__::func_730(iParam0, 67);
						__LIB_13__::func_832(&(iParam0->f_284), 0);
						iParam0->f_197 = 1;
						iParam0->f_198 = 3;
					}
					break;
				case 2:
					__LIB_13__::func_724(iParam0, 24);
					__LIB_13__::func_832(&(iParam0->f_284), 0);
					__LIB_2__::func_478(Global_35, iParam0->f_7, "RE_HEC_UNI_V1_VALUABLE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_18__::func_654(iParam0);
					func_922(iParam0, 0);
					iParam0->f_1 = 7;
					break;
			}
		}
	}
	func_1438(iParam0, uParam1);
}

bool func_919(int iParam0, var uParam1, var uParam2)
{
	if (__LIB_18__::func_660())
	{
		__LIB_13__::func_724(iParam0, 35);
	}
	func_1429(iParam0);
	func_1455(&(iParam0->f_284));
	if (__LIB_13__::func_727(iParam0, 1))
	{
		if (__LIB_13__::func_727(iParam0, 7))
		{
			TASK::TASK_WANDER_IN_AREA(iParam0->f_7, __LIB_3__::func_179(uParam1), 5f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 1);
			if (__LIB_11__::func_192(0))
			{
				__LIB_13__::func_724(iParam0, 12);
				__LIB_13__::func_724(iParam0, 15);
			}
			else
			{
				__LIB_13__::func_724(iParam0, 38);
				__LIB_13__::func_724(iParam0, 23);
			}
			__LIB_13__::func_724(iParam0, 46);
		}
		else if (__LIB_13__::func_727(iParam0, 6))
		{
			func_932(iParam0, 3, 1);
			__LIB_13__::func_724(iParam0, 12);
			__LIB_13__::func_724(iParam0, 15);
		}
		else if (__LIB_13__::func_727(iParam0, 5))
		{
			func_932(iParam0, 2, 1);
			__LIB_13__::func_724(iParam0, 12);
		}
		else
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0->f_7, Global_35, -1, -1f, -1f, -1f);
			func_932(iParam0, 1, 1);
		}
		func_1456(iParam0, 0);
	}
	else if (__LIB_11__::func_192(6))
	{
		TASK::TASK_WANDER_IN_AREA(iParam0->f_7, __LIB_3__::func_179(uParam1), 5f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 1);
	}
	else
	{
		func_932(iParam0, 0, 1);
	}
	if (__LIB_13__::func_727(iParam0, 5))
	{
		__LIB_13__::func_724(iParam0, 12);
		__LIB_13__::func_724(iParam0, 13);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_20.f_11))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_20.f_11))
		{
			__LIB_2__::func_967(uParam2, iParam0->f_7, iParam0->f_20.f_11, 0);
		}
	}
	return true;
}

bool func_920(vector3 vParam0, int iParam3, var uParam4)
{
	int iVar0;
	iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam0, 0f, 0f, 0f, 5f, 5f, 5f);
	*uParam4 = __LIB_3__::func_721(iParam3, iVar0, 3076);
	__LIB_4__::func_171(*uParam4, 256);
	return __LIB_3__::func_587(*uParam4, 1, 1);
}

void func_922(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		__LIB_13__::func_724(iParam0, 42);
	}
	else
	{
		__LIB_13__::func_730(iParam0, 42);
	}
}

bool func_931(int iParam0, var uParam1)
{
	float fVar0;
	if (PED::_0x569F1E1237508DEB(iParam0->f_7) == joaat("SCRIPT_COMMON_MIX_MORTAR_HERBALIST"))
	{
		if (!__LIB_13__::func_742(iParam0, 2))
		{
			__LIB_13__::func_731(iParam0, 2);
		}
	}
	else if (__LIB_13__::func_742(iParam0, 2))
	{
		__LIB_13__::func_734(iParam0, 2);
	}
	if (func_1466(uParam1, 1077936128 /* Float: 3f */, 1114636288 /* Float: 60f */, 20f, 1, 0, 1, 10f, 1, 1125515264 /* Float: 150f */, 0, 0) && uParam1->f_48)
	{
		fVar0 = __LIB_0__::func_665(Global_35, iParam0->f_7, 1, 1);
		if (fVar0 <= 80f)
		{
			if (!__LIB_13__::func_742(iParam0, 16))
			{
				__LIB_13__::func_731(iParam0, 16);
			}
		}
		else if (__LIB_13__::func_742(iParam0, 16))
		{
			__LIB_13__::func_734(iParam0, 16);
		}
		if (fVar0 <= 20f)
		{
			if (PED::_0x569F1E1237508DEB(iParam0->f_7) != joaat("SCRIPT_COMMON_MIX_MORTAR_HERBALIST"))
			{
				if (!__LIB_13__::func_742(iParam0, 131072))
				{
					__LIB_13__::func_731(iParam0, 131072);
				}
				if (__LIB_18__::func_665(iParam0, 0))
				{
					return true;
				}
			}
		}
		else if (__LIB_13__::func_742(iParam0, 131072))
		{
			__LIB_13__::func_734(iParam0, 131072);
		}
	}
	else if (__LIB_13__::func_742(iParam0, 131072))
	{
		__LIB_13__::func_734(iParam0, 131072);
	}
	return false;
}

void func_932(int iParam0, int iParam1, bool bParam2)
{
	iParam0->f_472 = iParam1;
	if (bParam2)
	{
		__LIB_13__::func_734(iParam0, 8);
		__LIB_13__::func_734(iParam0, 4);
		__LIB_13__::func_734(iParam0, 1);
		__LIB_13__::func_734(iParam0, 2);
		iParam0->f_473 = (iParam0->f_473 || __LIB_13__::func_743(iParam1));
	}
	else
	{
		iParam0->f_473 = __LIB_13__::func_743(iParam1);
	}
}

void func_933(int iParam0)
{
	if (__LIB_0__::func_48(Global_35, iParam0->f_7, 75f, 1))
	{
		if (__LIB_2__::func_227(1f, 1, 0, 0))
		{
			__LIB_2__::func_315(1715123483, iParam0->f_7, 1);
			__LIB_2__::func_478(iParam0->f_7, iParam0->f_7, "RE_HEC_UNI_V1_WHISTLE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_934(int iParam0)
{
	switch (iParam0->f_196)
	{
		case 0:
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0->f_7, false);
			if (__LIB_13__::func_727(iParam0, 1))
			{
				__LIB_13__::func_724(iParam0, 12);
				__LIB_13__::func_724(iParam0, 13);
				__LIB_18__::func_666(iParam0->f_7, *iParam0, "YARROW_SEND_A_UPPER", "GCURRANT_SEND_A_UPPER", "VSNOWDROP_SEND_A_UPPER", "HBSAGE_SEND_A_UPPER", 0);
				iParam0->f_196 = 6;
			}
			else if (TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 0))
			{
				__LIB_18__::func_666(iParam0->f_7, 19, "", "", "", "HEY_HELP_ME_AGAIN_UPPER", 0);
				BUILTIN::WAIT(10);
				iParam0->f_10.f_9 = "RE_HERB_HERBALIST";
				__LIB_4__::func_281(&(iParam0->f_10), iParam0->f_7, &(iParam0->f_9), 0f, 0f, 0f, 1065353216 /* Float: 1f */, 1, 5);
				iParam0->f_196 = 1;
			}
			break;
		case 1:
			__LIB_3__::func_972(&(iParam0->f_10), &(iParam0->f_9), 1);
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_7, __LIB_13__::func_807(19, 0), "HEY_HELP_ME_AGAIN_UPPER", 1))
			{
				if (MAP::DOES_BLIP_EXIST(iParam0->f_9))
				{
					if (!__LIB_19__::func_293(iParam0, 1))
					{
						TASK::TASK_PLAY_ANIM(iParam0->f_7, __LIB_13__::func_807(43, 0), "WAIT_01_UPPER", 8f, -8f, -1, 67117072, 0f, false, 0, false, 0, false);
						iParam0->f_196 = 3;
					}
				}
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_7, __LIB_13__::func_807(43, 0), "WAIT_01_UPPER", 1))
			{
				if (MAP::DOES_BLIP_EXIST(iParam0->f_9))
				{
					if (!__LIB_19__::func_293(iParam0, 1))
					{
						__LIB_1__::func_148(&uLocal_0);
						func_1456(iParam0, 1);
						__LIB_13__::func_831(&(iParam0->f_284), 0, 1);
						__LIB_4__::func_317(&(iParam0->f_284), 0, __LIB_2__::func_460(4));
						if (!__LIB_13__::func_727(iParam0, 1))
						{
							__LIB_13__::func_831(&(iParam0->f_284), 1, 1);
							__LIB_4__::func_317(&(iParam0->f_284), 1, __LIB_2__::func_460(6));
						}
						else
						{
							__LIB_13__::func_831(&(iParam0->f_284), 1, 0);
						}
						switch (__LIB_3__::func_657(119))
						{
							case 0:
								__LIB_13__::func_744(&(iParam0->f_284), 0, "RE_HEC_UNI_V1_ACCEPT_01");
								__LIB_13__::func_744(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_PLAYER_REJECT_01");
								break;
							case 1:
								__LIB_13__::func_744(&(iParam0->f_284), 0, "RE_HEC_UNI_V1_ACCEPT_02");
								__LIB_13__::func_744(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_PLAYER_REJECT_02");
								break;
							default:
								__LIB_13__::func_744(&(iParam0->f_284), 0, "RE_HEC_UNI_V1_ACCEPT_03");
								__LIB_13__::func_744(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_PLAYER_REJECT_03");
								break;
						}
						func_1478(&(iParam0->f_284));
						iParam0->f_196 = 4;
					}
				}
			}
			break;
		case 4:
			if (__LIB_19__::func_293(iParam0, 1))
			{
				return false;
			}
			switch (iParam0->f_433)
			{
				case 0:
					func_1456(iParam0, 0);
					func_1479(iParam0);
					__LIB_13__::func_724(iParam0, 12);
					__LIB_13__::func_724(iParam0, 13);
					func_1478(&(iParam0->f_284));
					iParam0->f_196 = 5;
					break;
				case 1:
					func_1456(iParam0, 0);
					func_1479(iParam0);
					func_1478(&(iParam0->f_284));
					iParam0->f_196 = 8;
					break;
				case -1:
					if (!__LIB_19__::func_293(iParam0, 1))
					{
						if (func_1480(iParam0))
						{
							func_1456(iParam0, 0);
							__LIB_13__::func_730(iParam0, 13);
							__LIB_13__::func_724(iParam0, 23);
							func_1478(&(iParam0->f_284));
							iParam0->f_196 = 9;
						}
					}
					break;
			}
			break;
		case 5:
			if (!__LIB_19__::func_293(iParam0, 1))
			{
				if (!__LIB_2__::func_136(Global_35, 1) && !func_1481(iParam0))
				{
					if (!__LIB_11__::func_192(5) && __LIB_0__::func_181())
					{
						__LIB_2__::func_478(iParam0->f_7, Global_35, "RE_HEC_UNI_V1_ACCEPT_RESP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iParam0->f_196 = 2;
					}
					else
					{
						__LIB_18__::func_666(iParam0->f_7, *iParam0, "YARROW_SEND_A_UPPER", "GCURRANT_SEND_A_UPPER", "VSNOWDROP_SEND_A_UPPER", "HBSAGE_SEND_A_UPPER", 0);
						iParam0->f_196 = 6;
					}
				}
			}
			break;
		case 2:
			if (!__LIB_2__::func_136(iParam0->f_7, 1))
			{
				func_1483(iParam0);
				__LIB_18__::func_666(iParam0->f_7, *iParam0, "YARROW_SEND_A_UPPER", "GCURRANT_SEND_A_UPPER", "VSNOWDROP_SEND_A_UPPER", "HBSAGE_SEND_A_UPPER", 0);
				iParam0->f_196 = 6;
			}
			break;
		case 8:
			if (!__LIB_19__::func_293(iParam0, 1))
			{
				if (!__LIB_2__::func_136(Global_35, 1) && !func_1481(iParam0))
				{
					if (!__LIB_13__::func_727(iParam0, 23))
					{
						TASK::TASK_PLAY_ANIM(iParam0->f_7, __LIB_13__::func_807(19, 0), "NEGATIVE_UPPER", 8f, -8f, -1, 67117072, 0f, false, 0, false, 0, false);
					}
					iParam0->f_196 = 9;
				}
			}
			break;
		case 6:
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iParam0->f_7))
			{
				if (__LIB_4__::func_126(*iParam0) >= __LIB_13__::func_745(*iParam0))
				{
					__LIB_13__::func_724(iParam0, 9);
				}
				else
				{
					__LIB_3__::func_662(__LIB_13__::func_809(*iParam0, "HRB_OBJ_YR", "HRB_OBJ_HS", "HRB_OBJ_GC", "HRB_OBJ_VS"), 7500, 0, 0, __LIB_13__::func_745(*iParam0), -1, 1);
				}
			}
			if (!__LIB_19__::func_293(iParam0, 1))
			{
				if (!__LIB_18__::func_667(iParam0->f_7, *iParam0, "YARROW_SEND_A_UPPER", "GCURRANT_SEND_A_UPPER", "VSNOWDROP_SEND_A_UPPER", "HBSAGE_SEND_A_UPPER", 0, 1))
				{
					if (*iParam0 != 40 && *iParam0 != 43)
					{
						__LIB_18__::func_666(iParam0->f_7, *iParam0, "YARROW_SEND_B_UPPER", "GCURRANT_SEND_B_UPPER", "VSNOWDROP_SEND_B_UPPER", "HBSAGE_SEND_B_UPPER", 0);
					}
					__LIB_13__::func_834(*iParam0, 0, 1);
					if (func_1489(iParam0))
					{
						__LIB_13__::func_724(iParam0, 66);
						return true;
					}
					iParam0->f_196 = 7;
				}
			}
			break;
		case 7:
			if ((*iParam0 == 40 || !__LIB_0__::func_48(Global_35, iParam0->f_7, 20f, 1)) || !__LIB_18__::func_667(iParam0->f_7, *iParam0, "YARROW_SEND_B_UPPER", "GCURRANT_SEND_B_UPPER", "VSNOWDROP_SEND_B_UPPER", "HBSAGE_SEND_B_UPPER", 0, 1))
			{
				func_1490(iParam0);
				__LIB_13__::func_734(iParam0, 131072);
				__LIB_13__::func_823(iParam0, 1f, 0);
				__LIB_18__::func_659(iParam0, 0, joaat("SCRIPT_COMMON_STAND_HERBALIST"), 0, 0, 1, 3f);
				return true;
			}
			break;
		case 9:
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_7, __LIB_13__::func_807(19, 0), "NEGATIVE_UPPER", 1))
			{
				__LIB_0__::func_325(&(iParam0->f_9));
				__LIB_13__::func_734(iParam0, 131072);
				__LIB_18__::func_659(iParam0, 0, joaat("SCRIPT_COMMON_LEAN_READ_HERBALIST"), 0, 0, 1, 0);
				iParam0->f_1 = 11;
			}
			break;
	}
	return false;
}

void func_936(int iParam0)
{
	if (PED::_0x569F1E1237508DEB(iParam0->f_7) == joaat("SCRIPT_COMMON_STAND_HERBALIST"))
	{
		if (!func_1492(iParam0, 0, 1, 1))
		{
			iParam0->f_203 = 2;
		}
		else
		{
			iParam0->f_203 = 3;
		}
		__LIB_13__::func_823(iParam0, 5f, 1);
	}
}

bool func_938(int iParam0, var uParam1)
{
	switch (iParam0->f_197)
	{
		case 0:
			if (func_1489(iParam0))
			{
				__LIB_13__::func_724(iParam0, 9);
				if (!__LIB_13__::func_727(iParam0, 1))
				{
					if (!MAP::DOES_BLIP_EXIST(iParam0->f_9))
					{
						__LIB_2__::func_73(iParam0->f_7, &(iParam0->f_9), -89429847, 580546400, 0, 0);
					}
				}
				if (!__LIB_13__::func_727(iParam0, 9))
				{
					func_1494(iParam0, __LIB_4__::func_126(*iParam0), 1);
				}
				else if (!__LIB_13__::func_727(iParam0, 1))
				{
					__LIB_3__::func_662("HERB_DONE_EARLY", 7500, 0, 0, -1, -1, 0);
				}
				else
				{
					__LIB_3__::func_662("HERB_DONE_EARLY_RC", 7500, 0, 0, -1, -1, 0);
				}
				if (MAP::DOES_BLIP_EXIST(iParam0->f_9))
				{
					MAP::_BLIP_SET_MODIFIER(iParam0->f_9, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
				}
				func_1495(iParam0, 0);
				func_932(iParam0, 2, 1);
				iParam0->f_197 = 1;
			}
			else
			{
				func_1496(iParam0, 0);
				func_932(iParam0, 2, 1);
				iParam0->f_197 = 1;
			}
			__LIB_1__::func_148(&uLocal_0);
			break;
		case 1:
			if (func_1497(iParam0, uParam1))
			{
				__LIB_13__::func_730(iParam0, 13);
				__LIB_13__::func_810(&(iParam0->f_112), iParam0->f_90[2]);
				__LIB_18__::func_668(iParam0);
				__LIB_13__::func_811(&(iParam0->f_112), *iParam0, iParam0->f_7, &(iParam0->f_90), 1);
				__LIB_3__::func_635(&(iParam0->f_112));
				return true;
			}
			break;
	}
	return false;
}

bool func_939(int iParam0)
{
	__LIB_13__::func_808(iParam0->f_7);
	switch (iParam0->f_199)
	{
		case 0:
			if (!__LIB_19__::func_293(iParam0, 1))
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam0->f_7, -1) || __LIB_3__::func_943(&(iParam0->f_112), "base02", 1))
				{
					if (*iParam0 == 19)
					{
						if (!__LIB_2__::func_136(iParam0->f_7, 1))
						{
							__LIB_2__::func_478(iParam0->f_7, Global_35, "RE_HEC_UNI_V1_SAGE_TIP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_932(iParam0, 4, 1);
							iParam0->f_199 = 1;
						}
					}
					else
					{
						func_932(iParam0, 4, 1);
						iParam0->f_199 = 1;
					}
				}
			}
			break;
		case 1:
			return !__LIB_2__::func_136(iParam0->f_7, 1);
	}
	return false;
}

bool func_940(int iParam0, var uParam1)
{
	struct<4> Var0;
	vector3 vVar4;
	__LIB_13__::func_808(iParam0->f_7);
	func_1502(iParam0);
	switch (iParam0->f_200)
	{
		case 0:
			if (!__LIB_19__::func_293(iParam0, 1) && !AUDIO::IS_ANY_SPEECH_PLAYING(iParam0->f_7))
			{
				func_1503(iParam0);
				__LIB_13__::func_832(&(iParam0->f_284), 0);
				func_1478(&(iParam0->f_284));
				iParam0->f_200 = 1;
			}
			break;
		case 1:
			if (!__LIB_19__::func_293(iParam0, 1))
			{
				if (__LIB_2__::func_227(-4f, 1, 0, 0))
				{
					__LIB_18__::func_670(&(iParam0->f_154), &(iParam0->f_175), iParam0->f_7, iParam0->f_90[2], iParam0->f_242, __LIB_18__::func_669(iParam0));
					func_1456(iParam0, 1);
					__LIB_13__::func_831(&(iParam0->f_284), 0, 1);
					__LIB_4__::func_317(&(iParam0->f_284), 0, __LIB_13__::func_812(iParam0->f_240));
					__LIB_13__::func_813(&(iParam0->f_284), 0, 10f);
					__LIB_1__::func_148(&uLocal_0);
					func_1478(&(iParam0->f_284));
					iParam0->f_200 = 2;
				}
			}
			break;
		case 2:
			__LIB_13__::func_814(&(iParam0->f_154), iParam0->f_7);
			switch (iParam0->f_433)
			{
				case 0:
					vVar4 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_7, true, false) };
					iParam0->f_241 = func_1509(iParam0, uParam1, &Var0);
					__LIB_3__::func_623(&(iParam0->f_52));
					iParam0->f_52.f_8 = { Var0 };
					iParam0->f_52.f_19 = Var0.f_3;
					iParam0->f_52.f_1 = Global_35;
					iParam0->f_52.f_21 = 1f;
					iParam0->f_52.f_18 = 0.25f;
					iParam0->f_52.f_8.f_2 = vVar4.z;
					__LIB_1__::func_336(&(iParam0->f_52.f_23), 32);
					func_1456(iParam0, 0);
					__LIB_13__::func_832(&(iParam0->f_284), 0);
					func_1511(Global_35, &(iParam0->f_8), 0f, 0f, 0f, 0, 7f, 4, 0, 0, 0, 0, 1071644672 /* Float: 1.75f */);
					iParam0->f_200 = 3;
					break;
				default:
					if (!__LIB_19__::func_293(iParam0, 1))
					{
						if (func_1512(iParam0))
						{
							__LIB_2__::func_478(iParam0->f_7, Global_35, "RE_HEC_UNI_V1_SUITYOURSELF", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							TASK::TASK_PLAY_ANIM(iParam0->f_7, "SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "SERUM_DECLINE_HERBALIST", 4f, -4f, -1, 8192, 0f, false, 0, false, 0, false);
							func_1456(iParam0, 0);
							__LIB_13__::func_832(&(iParam0->f_284), 0);
							__LIB_0__::func_325(&(iParam0->f_9));
							__LIB_18__::func_671(&(iParam0->f_284), 0);
							if (!__LIB_2__::func_312(joaat("SCRIPT_REHOB_HERBALIST"), 2, 0, 0))
							{
							}
							func_1478(&(iParam0->f_284));
							iParam0->f_200 = 5;
						}
					}
					break;
			}
			break;
		case 5:
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_7, "SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "SERUM_DECLINE_HERBALIST", 1))
			{
				if (__LIB_2__::func_313(joaat("SCRIPT_REHOB_HERBALIST")))
				{
					__LIB_18__::func_672(iParam0, 0);
					func_1517(iParam0, joaat("SCRIPT_COMMON_MIX_MORTAR_HERBALIST"), 0);
					return true;
				}
			}
			break;
		case 3:
			if (func_1518(iParam0))
			{
				iParam0->f_200 = 6;
			}
			break;
		case 6:
			if ((iParam0->f_241 == 0 && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iParam0->f_175.f_1, false)) || (iParam0->f_241 == 1 && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iParam0->f_154.f_1, false)))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				__LIB_0__::func_325(&(iParam0->f_9));
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0->f_7, Global_35, -1, -1f, -1f, -1f);
				if (!__LIB_2__::func_312(joaat("SCRIPT_REHOB_HERBALIST"), 2, 0, 0))
				{
				}
				iParam0->f_200 = 7;
			}
			break;
		case 7:
			if (!__LIB_19__::func_293(iParam0, 1))
			{
				if (__LIB_2__::func_227(-3f, 1, 0, 0) && !__LIB_2__::func_136(iParam0->f_7, 0))
				{
					if (!__LIB_13__::func_727(iParam0, 16))
					{
						if (__LIB_2__::func_313(joaat("SCRIPT_REHOB_HERBALIST")))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0->f_7, Global_35, -1, -1f, -1f, -1f);
							__LIB_2__::func_478(iParam0->f_7, Global_35, "RE_HEC_UNI_V1_GOODBYE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iParam0->f_200 = 8;
						}
					}
					else
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0->f_7, Global_35, -1, -1f, -1f, -1f);
						iParam0->f_200 = 9;
					}
				}
			}
			break;
		case 8:
			if (!__LIB_2__::func_136(iParam0->f_7, 1))
			{
				__LIB_18__::func_672(iParam0, 0);
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_112.f_1, false))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_112.f_1, "BASE02_LOOP", true, false);
				}
				__LIB_18__::func_659(iParam0, 0, joaat("SCRIPT_COMMON_LEAN_READ_HERBALIST"), 0, 0, 1, 0);
				__LIB_13__::func_823(iParam0, 7f, 0);
				return true;
			}
			break;
		case 9:
			if (!__LIB_2__::func_136(iParam0->f_7, 1))
			{
				if (__LIB_2__::func_313(joaat("SCRIPT_REHOB_HERBALIST")))
				{
					__LIB_2__::func_478(iParam0->f_7, Global_35, "RE_HEC_UNI_V1_FAREWELL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iParam0->f_200 = 8;
				}
			}
			break;
	}
	return false;
}

bool func_942(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29)
{
	int iVar0;
	float fVar1;
	var uVar2;
	fVar1 = __LIB_0__::func_94(Global_35, __LIB_3__::func_179(uParam1), 1);
	switch (iParam0->f_201)
	{
		case 0:
			if (__LIB_3__::func_722(iParam0->f_7, &uParam2, &uVar2, 0) || fVar1 < 4f)
			{
				if (fVar1 < (35f - 7f))
				{
					if (iParam0->f_219 > 3)
					{
						if (PED::IS_PED_USING_ANY_SCENARIO(iParam0->f_7))
						{
							PED::_0x802092B07E3B1EEA(iParam0->f_7, Global_36, 3);
						}
						func_1519(iParam0);
					}
					iParam0->f_220 = 1;
					iParam0->f_201 = 1;
				}
			}
			break;
		case 1:
			if (!__LIB_0__::func_266(Global_35, __LIB_3__::func_179(uParam1), 35f, 1, 1))
			{
				if (!__LIB_0__::func_75(&(iParam0->f_216)))
				{
					__LIB_1__::func_148(&(iParam0->f_216));
				}
				if (!PED::_0xEC6935EBE0847B90(iParam0->f_7, Global_36))
				{
					if (!PED::_0x463803429297117C(iParam0->f_7, Global_36, 1, 0))
					{
						PED::_0xF1C03A5352243A30(iParam0->f_7);
					}
				}
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				WEAPON::SET_CURRENT_PED_WEAPON(iParam0->f_7, joaat("WEAPON_UNARMED"), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
				__LIB_18__::func_659(iParam0, 1, joaat("SCRIPT_COMMON_LEAN_READ_HERBALIST"), 1, 0, 1, 0);
				__LIB_1__::func_474(iParam0->f_7, &iVar0, 0, 0, 1, 1);
				if (__LIB_1__::func_313(&(iParam0->f_216), 3f))
				{
					iParam0->f_201 = 0;
				}
			}
			else
			{
				if (__LIB_0__::func_75(&(iParam0->f_216)))
				{
					__LIB_0__::func_37(&(iParam0->f_216));
				}
				switch (iParam0->f_219)
				{
					case 0:
						__LIB_2__::func_478(iParam0->f_7, Global_35, "RE_HEC_UNI_V1_DEFEND", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						PED::_0xA3A9299C4F2ADB98(iParam0->f_7);
						if (!PED::_0xEC6935EBE0847B90(iParam0->f_7, Global_36))
						{
							if (!PED::_0x463803429297117C(iParam0->f_7, Global_36, 1, 0))
							{
								PED::_0xF1C03A5352243A30(iParam0->f_7);
							}
						}
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0->f_7, Global_35, -1, -1f, -1f, -1f);
						iParam0->f_219++;
						break;
					case 1:
						if (iParam0->f_220 || __LIB_2__::func_227(1f, 1, 0, 0))
						{
							__LIB_2__::func_478(iParam0->f_7, Global_35, "RE_HEC_UNI_V1_HAVETO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							PED::_0xA3A9299C4F2ADB98(iParam0->f_7);
							if (!PED::_0xEC6935EBE0847B90(iParam0->f_7, Global_36))
							{
								if (!PED::_0x463803429297117C(iParam0->f_7, Global_36, 1, 0))
								{
									PED::_0xF1C03A5352243A30(iParam0->f_7);
								}
							}
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							if (__LIB_0__::func_153(iParam0->f_7, 0, 1, 0) == joaat("WEAPON_UNARMED"))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iParam0->f_7, joaat("WEAPON_MELEE_KNIFE"), false, 0, false, false);
								TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
							}
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
							__LIB_1__::func_474(iParam0->f_7, &iVar0, 0, 0, 1, 1);
							iParam0->f_219++;
						}
						break;
					case 2:
						if (iParam0->f_220 || __LIB_2__::func_227(0, 1, 0, 0))
						{
							__LIB_2__::func_478(iParam0->f_7, Global_35, "RE_HEC_UNI_V1_ISAID", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							PED::_0xA3A9299C4F2ADB98(iParam0->f_7);
							if (!PED::_0xEC6935EBE0847B90(iParam0->f_7, Global_36))
							{
								if (!PED::_0x463803429297117C(iParam0->f_7, Global_36, 1, 0))
								{
									PED::_0xF1C03A5352243A30(iParam0->f_7);
								}
							}
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							if (__LIB_0__::func_153(iParam0->f_7, 0, 1, 0) == joaat("WEAPON_UNARMED"))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iParam0->f_7, joaat("WEAPON_MELEE_KNIFE"), false, 0, false, false);
								TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
							}
							TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
							__LIB_1__::func_474(iParam0->f_7, &iVar0, 0, 0, 1, 1);
							iParam0->f_219++;
						}
						break;
					case 3:
						if (iParam0->f_220 || __LIB_2__::func_227(-3f, 1, 0, 0))
						{
							__LIB_2__::func_478(iParam0->f_7, Global_35, "RE_HEC_UNI_V1_FORCEDME", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_1519(iParam0);
							iParam0->f_219++;
						}
						break;
				}
			}
			if (iParam0->f_220)
			{
				iParam0->f_220 = 0;
			}
			break;
	}
	return false;
}

bool func_943(int iParam0)
{
	int iVar0;
	int iVar1;
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam0->f_7, 0))
	{
		if (TASK::_0x02EBBB3989B7E695(iParam0->f_7))
		{
			__LIB_13__::func_746(iParam0, -1f);
		}
		else if (TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 0))
		{
			if (!PED::_0xEEED8FAFEC331A70(iParam0->f_7, Global_36, 3))
			{
				if (!PED::_0x802092B07E3B1EEA(iParam0->f_7, Global_36, 3))
				{
					PED::_0xA3A9299C4F2ADB98(iParam0->f_7);
				}
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_7, false);
			if (__LIB_0__::func_153(iParam0->f_7, 0, 1, 0) != joaat("WEAPON_UNARMED"))
			{
				func_1435(iParam0, 3);
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(iParam0->f_7, &iVar0, 0, 0, 1, 1);
			}
			return true;
		}
	}
	else
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_7, false);
		if (__LIB_0__::func_153(iParam0->f_7, 0, 1, 0) != joaat("WEAPON_UNARMED"))
		{
			func_1435(iParam0, 3);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(iParam0->f_7, &iVar1, 0, 0, 1, 1);
		}
		return true;
	}
	return false;
}

bool func_948(int iParam0)
{
	struct<7> Var0;
	Var0.f_1 = 2;
	Var0.f_2 = joaat("NONE");
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	switch (iParam0->f_204)
	{
		case 0:
			__LIB_0__::func_325(&(iParam0->f_9));
			__LIB_1__::func_148(&(iParam0->f_212));
			__LIB_13__::func_747(iParam0);
			__LIB_3__::func_969(&(iParam0->f_215), 1);
			iParam0->f_204 = 1;
			break;
		case 1:
			if (__LIB_1__::func_285(&(iParam0->f_212), 2f))
			{
				func_1525(&(iParam0->f_284));
				Var0 = 41;
				Var0.f_2 = joaat("TIMID");
				Var0.f_3 = 3;
				Var0.f_4 = 1;
				__LIB_13__::func_835(&(iParam0->f_7), &Var0, &(iParam0->f_284), &(iParam0->f_284.f_21), iParam0->f_434.f_5);
				__LIB_13__::func_815(iParam0);
				if (__LIB_3__::func_634(&(iParam0->f_112), 1, 0, 0))
				{
					__LIB_3__::func_437(&(iParam0->f_112));
				}
				iParam0->f_204 = 2;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_949(int iParam0, var uParam1, bool bParam2)
{
	if (!bParam2)
	{
		switch (iParam0->f_202)
		{
			case 0:
				func_1456(iParam0, 0);
				func_932(iParam0, 3, 0);
				__LIB_13__::func_832(&(iParam0->f_284), 1);
				if (!__LIB_13__::func_727(iParam0, 46))
				{
					__LIB_4__::func_317(&(iParam0->f_284), 0, __LIB_2__::func_460(7));
				}
				else
				{
					__LIB_13__::func_831(&(iParam0->f_284), 0, 0);
				}
				__LIB_4__::func_317(&(iParam0->f_284), 1, __LIB_2__::func_460(10));
				__LIB_13__::func_744(&(iParam0->f_284), 0, "RE_HEC_UNI_V1_STUDIES");
				__LIB_13__::func_744(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_WASTETIME");
				func_1478(&(iParam0->f_284));
				iParam0->f_202 = 1;
				break;
			case 1:
				if (iParam0->f_433 > -1)
				{
					__LIB_13__::func_832(&(iParam0->f_284), 0);
				}
				switch (iParam0->f_433)
				{
					case 0:
						__LIB_1__::func_148(&(iParam0->f_212));
						if (__LIB_13__::func_748(iParam0))
						{
							__LIB_13__::func_733(iParam0, 4);
						}
						__LIB_19__::func_297(iParam0);
						if (!__LIB_13__::func_749(iParam0, 1))
						{
							__LIB_13__::func_733(iParam0, 0);
						}
						else
						{
							iParam0->f_474 = 3;
							__LIB_13__::func_744(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_OLDMAN");
							__LIB_4__::func_317(&(iParam0->f_284), 1, __LIB_2__::func_460(10));
						}
						__LIB_13__::func_831(&(iParam0->f_284), 0, 0);
						func_1478(&(iParam0->f_284));
						iParam0->f_202 = 2;
						break;
					case 1:
						__LIB_1__::func_148(&(iParam0->f_212));
						if (__LIB_13__::func_748(iParam0))
						{
							__LIB_13__::func_733(iParam0, 4);
						}
						__LIB_19__::func_297(iParam0);
						if (__LIB_13__::func_749(iParam0, 1))
						{
							iParam0->f_474 = 2;
						}
						if (iParam0->f_474 > 1)
						{
							__LIB_13__::func_831(&(iParam0->f_284), 0, 0);
							__LIB_13__::func_831(&(iParam0->f_284), 1, 0);
						}
						func_1478(&(iParam0->f_284));
						iParam0->f_202 = 4;
						break;
					case -1:
						if (__LIB_13__::func_749(iParam0, 1))
						{
							if (__LIB_1__::func_285(&(iParam0->f_212), 6f))
							{
								iParam0->f_474 = 3;
								__LIB_19__::func_298(iParam0);
								__LIB_13__::func_750(iParam0, 4);
								__LIB_13__::func_734(iParam0, 131072);
								__LIB_13__::func_831(&(iParam0->f_284), 0, 0);
								__LIB_13__::func_744(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_OLDMAN");
								__LIB_4__::func_317(&(iParam0->f_284), 1, __LIB_2__::func_460(10));
								__LIB_0__::func_37(&(iParam0->f_212));
								__LIB_13__::func_750(iParam0, 1);
								func_1478(&(iParam0->f_284));
							}
						}
						break;
				}
				break;
			case 2:
				if (((!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0->f_7)) && !AUDIO::_0xFE5C6177064BD390(1))
				{
					__LIB_1__::func_148(&(iParam0->f_212));
					if (__LIB_13__::func_749(iParam0, 1))
					{
						__LIB_2__::func_478(iParam0->f_7, Global_35, __LIB_13__::func_751("RE_HEC_UNI_V1_EXCUSEME"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(iParam0->f_7, Global_35, __LIB_13__::func_751("RE_HEC_UNI_V1_TRAVELS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
					}
					iParam0->f_202 = 3;
				}
				break;
			case 3:
				if (((__LIB_1__::func_285(&(iParam0->f_212), 2f) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0->f_7)) && !AUDIO::_0xFE5C6177064BD390(1))
				{
					__LIB_19__::func_298(iParam0);
					__LIB_13__::func_750(iParam0, 4);
					__LIB_13__::func_734(iParam0, 131072);
					if (!__LIB_13__::func_749(iParam0, 3))
					{
						__LIB_13__::func_831(&(iParam0->f_284), 1, 1);
					}
					__LIB_13__::func_823(iParam0, 10f, 0);
					iParam0->f_202 = 1;
				}
				break;
			case 4:
				if (__LIB_1__::func_285(&(iParam0->f_212), 2f))
				{
					if ((!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0->f_7)) && !AUDIO::_0xFE5C6177064BD390(1))
					{
						if (__LIB_13__::func_749(iParam0, 4) || __LIB_18__::func_665(iParam0, 0))
						{
							__LIB_1__::func_148(&(iParam0->f_212));
							__LIB_18__::func_673(iParam0, iParam0->f_474);
							switch (iParam0->f_474)
							{
								case 2:
									__LIB_13__::func_724(iParam0, 54);
									break;
								case 3:
									__LIB_13__::func_733(iParam0, 6);
									break;
							}
							iParam0->f_202 = 5;
						}
					}
				}
				break;
			case 5:
				if (!__LIB_19__::func_293(iParam0, 1))
				{
					if ((!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0->f_7)) && !AUDIO::_0xFE5C6177064BD390(1))
					{
						if ((__LIB_1__::func_285(&(iParam0->f_212), 2f) || __LIB_13__::func_749(iParam0, 6)) || __LIB_13__::func_749(iParam0, 5))
						{
							if (func_1534(iParam0))
							{
								__LIB_13__::func_747(iParam0);
								if (__LIB_13__::func_749(iParam0, 6))
								{
									__LIB_18__::func_674(iParam0, 0);
								}
								else
								{
									func_1435(iParam0, 3);
								}
								__LIB_3__::func_969(&(iParam0->f_215), 1);
								__LIB_18__::func_654(iParam0);
								uParam1->f_46 = 1;
								iParam0->f_202 = 6;
							}
							else
							{
								__LIB_13__::func_823(iParam0, 10f, 0);
								if (!__LIB_13__::func_749(iParam0, 1))
								{
									__LIB_19__::func_298(iParam0);
									__LIB_13__::func_750(iParam0, 4);
									__LIB_13__::func_734(iParam0, 131072);
								}
								else
								{
									__LIB_1__::func_148(&(iParam0->f_212));
								}
								iParam0->f_202 = 1;
							}
						}
					}
				}
				break;
			case 6:
				break;
		}
	}
	if (__LIB_13__::func_727(iParam0, 1))
	{
		if (!__LIB_0__::func_48(Global_35, iParam0->f_7, 300f, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_950(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_7))
	{
		if (!iParam0->f_520)
		{
			if (PED::IS_PED_IN_MELEE_COMBAT(iParam0->f_7) || PED::IS_PED_IN_COMBAT(iParam0->f_7, Global_35))
			{
				if (!__LIB_13__::func_727(iParam0, 56))
				{
					__LIB_13__::func_724(iParam0, 56);
					__LIB_2__::func_592(&(iParam0->f_284.f_21), 1, 1);
					func_1478(&(iParam0->f_284));
				}
				__LIB_3__::func_447(&(iParam0->f_9), iParam0->f_7, 0);
				iParam0->f_520 = 1;
			}
		}
		else if (!PED::IS_PED_IN_MELEE_COMBAT(iParam0->f_7) && !PED::IS_PED_IN_COMBAT(iParam0->f_7, Global_35))
		{
			__LIB_0__::func_325(&(iParam0->f_9));
			iParam0->f_520 = 0;
		}
		if (__LIB_13__::func_738(iParam0, 1) > 1)
		{
			if (!__LIB_13__::func_727(iParam0, 63))
			{
				__LIB_4__::func_340(&(iParam0->f_284.f_21[0 /*17*/]));
			}
		}
		else if (!__LIB_13__::func_727(iParam0, 50))
		{
			if (!__LIB_13__::func_727(iParam0, 52))
			{
				if (!__LIB_19__::func_293(iParam0, 1))
				{
					__LIB_4__::func_340(&(iParam0->f_284.f_21[0 /*17*/]));
				}
			}
		}
		switch (iParam0->f_206)
		{
			case 0:
				__LIB_18__::func_675(&(iParam0->f_284));
				__LIB_13__::func_831(&(iParam0->f_284), 1, 1);
				__LIB_13__::func_744(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_ATAG_AGGRO_1ST");
				__LIB_4__::func_317(&(iParam0->f_284), 1, __LIB_2__::func_460(10));
				if (!__LIB_13__::func_727(iParam0, 50))
				{
					__LIB_13__::func_831(&(iParam0->f_284), 0, 1);
					__LIB_13__::func_744(&(iParam0->f_284), 0, "RE_HEC_UNI_V1_DEFUSE");
					__LIB_4__::func_317(&(iParam0->f_284), 0, __LIB_2__::func_460(8));
				}
				__LIB_13__::func_730(iParam0, 21);
				func_1539(&(iParam0->f_284));
				func_1478(&(iParam0->f_284));
				iParam0->f_206 = 1;
				break;
			case 1:
				switch (iParam0->f_433)
				{
					case 0:
						__LIB_1__::func_148(&(iParam0->f_212));
						__LIB_13__::func_724(iParam0, 50);
						iParam0->f_206 = 2;
						break;
					case 1:
						__LIB_1__::func_148(&(iParam0->f_212));
						__LIB_13__::func_724(iParam0, 52);
						iParam0->f_206 = 4;
						break;
				}
				break;
			case 2:
				if (__LIB_1__::func_285(&(iParam0->f_212), 2f))
				{
					iParam0->f_206 = 3;
				}
				break;
			case 3:
				if (__LIB_13__::func_727(iParam0, 51))
				{
					if (!__LIB_2__::func_136(iParam0->f_7, 1))
					{
						if (iParam0->f_528 < 2)
						{
							__LIB_13__::func_831(&(iParam0->f_284), 1, 1);
						}
						func_1478(&(iParam0->f_284));
						__LIB_13__::func_730(iParam0, 50);
						__LIB_13__::func_730(iParam0, 51);
						iParam0->f_206 = 1;
					}
				}
				break;
			case 4:
				if (__LIB_1__::func_285(&(iParam0->f_212), 2f))
				{
					iParam0->f_206 = 5;
				}
				break;
			case 5:
				if (__LIB_13__::func_727(iParam0, 53))
				{
					if (!__LIB_2__::func_136(iParam0->f_7, 1))
					{
						if (iParam0->f_528 < 2)
						{
							__LIB_13__::func_831(&(iParam0->f_284), 1, 1);
							__LIB_13__::func_744(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_ATAG_AGGRO_2ND");
						}
						func_1478(&(iParam0->f_284));
						__LIB_13__::func_730(iParam0, 52);
						__LIB_13__::func_730(iParam0, 53);
						iParam0->f_206 = 1;
					}
				}
				break;
			case 6:
				if (__LIB_13__::func_727(iParam0, 55))
				{
					if (!__LIB_2__::func_136(iParam0->f_7, 1))
					{
						__LIB_13__::func_730(iParam0, 54);
						__LIB_13__::func_730(iParam0, 55);
						iParam0->f_206 = 1;
					}
				}
				break;
		}
	}
	return ENTITY::IS_ENTITY_DEAD(iParam0->f_7);
}

void func_951(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_7))
	{
		if (iParam0->f_476 != 0)
		{
			PED::_0x8B3B71C80A29A4BB(iParam0->f_7, iParam0->f_475, iParam0->f_476);
		}
	}
}

void func_952(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (!func_1540(iParam0, &iVar4, &bVar0, &bVar1, &bVar2, &bVar3))
	{
		return;
	}
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0->f_7, true);
	PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iParam0->f_7, true);
	if (__LIB_0__::func_27(iVar4, 8))
	{
		if (!__LIB_0__::func_75(&(iParam0->f_447)))
		{
			__LIB_1__::func_148(&(iParam0->f_447));
		}
	}
	else if (__LIB_0__::func_75(&(iParam0->f_447)))
	{
		__LIB_0__::func_37(&(iParam0->f_447));
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_7, -1958015541))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_90[3], "SCRIPT_RE@HERBALISTCAMP", "MORTAR_PESTAL_STATIC", 1))
		{
			ENTITY::PLAY_ENTITY_ANIM(iParam0->f_90[3], "MORTAR_PESTAL_STATIC", "SCRIPT_RE@HERBALISTCAMP", 1000f, false, true, true, 0f, 0);
		}
	}
	switch (iParam0->f_203)
	{
		case 0:
			iParam0->f_203 = 2;
			break;
		case 2:
			iParam0->f_203 = func_1541(iParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 3:
			iParam0->f_203 = __LIB_19__::func_486(iParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 4:
			iParam0->f_203 = __LIB_19__::func_487(iParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 6:
			iParam0->f_203 = func_1544(iParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 7:
			iParam0->f_203 = __LIB_19__::func_488(iParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 10:
			iParam0->f_203 = func_1546(iParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 12:
			iParam0->f_203 = __LIB_19__::func_489(iParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 14:
			iParam0->f_203 = func_1548(iParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 15:
			iParam0->f_203 = __LIB_19__::func_490(iParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 18:
			iParam0->f_203 = __LIB_18__::func_676(iParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 19:
			iParam0->f_203 = func_1551(iParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 20:
			iParam0->f_203 = __LIB_19__::func_491(iParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
	}
}

void func_956()
{
	if (!__LIB_13__::func_805(8))
	{
		if (__LIB_13__::func_805(4))
		{
			__LIB_13__::func_832(&(Local_14.f_284), 0);
			__LIB_13__::func_831(&(Local_14.f_284), 0, 1);
			__LIB_13__::func_813(&(Local_14.f_284), 0, 5.5f);
			func_178(8);
		}
	}
}

void func_957()
{
	int iVar0;
	int iVar1;
	if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_7))
	{
		if (!__LIB_13__::func_805(16384))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_14.f_7, joaat("RE_HEC_UNI_V1_HEYTHERE")))
			{
				func_178(16384);
				__LIB_2__::func_478(Local_14.f_7, Global_35, "RE_HEC_UNI_V1_HEYTHERE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_148(&uLocal_916);
			}
		}
		if (!__LIB_13__::func_805(32768))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_14.f_7, 193657386))
			{
				StringCopy(&cLocal_812, "REHC_RC1_LI", 24);
				__LIB_1__::func_148(&uLocal_922);
				func_178(32768);
				__LIB_1__::func_104(&uLocal_815, cLocal_812, 0, -1, 0, 0);
				__LIB_1__::func_148(&uLocal_916);
				__LIB_1__::func_148(&uLocal_925);
			}
		}
		if (__LIB_13__::func_805(16384))
		{
			if (!TASK::IS_PED_STILL(Global_35) && __LIB_0__::func_665(Global_35, Local_14.f_7, 1, 1) < 15f)
			{
				__LIB_1__::func_148(&uLocal_916);
			}
		}
		if (__LIB_13__::func_805(16384))
		{
			if (!func_1553(1))
			{
				if (__LIB_0__::func_265(&uLocal_916) > 14f)
				{
					__LIB_2__::func_478(Local_14.f_7, Global_35, "RE_HEC_UNI_V1_HEYTHERE_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_1554(1);
					__LIB_1__::func_148(&uLocal_916);
				}
			}
			if (!func_1553(2))
			{
				if (__LIB_0__::func_265(&uLocal_916) > 15f)
				{
					__LIB_2__::func_478(Local_14.f_7, Global_35, "RE_HEC_UNI_V1_HEYTHERE_C", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_1554(2);
					__LIB_1__::func_148(&uLocal_916);
				}
			}
		}
		if (__LIB_0__::func_75(&uLocal_925))
		{
			if (__LIB_1__::func_285(&uLocal_925, 1f))
			{
				if (!__LIB_2__::func_136(Local_14.f_7, 1))
				{
					func_1483(&Local_14);
					__LIB_0__::func_37(&uLocal_925);
				}
			}
		}
		if (__LIB_13__::func_805(2) || __LIB_13__::func_805(32768))
		{
			if (!__LIB_13__::func_805(4096))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_14.f_7, joaat("RE_HEC_UNI_V1_BACKAGAIN")))
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
					func_178(4096);
					switch (iVar0)
					{
						case 0:
							__LIB_2__::func_478(Local_14.f_7, Global_35, "RE_HEC_UNI_V1_BACKAGAIN", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
						case 1:
							__LIB_2__::func_478(Local_14.f_7, Global_35, "RE_HEC_UNI_V1_DONTBESHY", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
					}
				}
			}
		}
		if (!__LIB_13__::func_805(8192))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_14.f_7, joaat("RE_HEC_UNI_V1_SPARETIME")) || func_1553(1))
			{
				if (__LIB_0__::func_265(&uLocal_916) > 14f)
				{
					iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
					func_178(8192);
					__LIB_1__::func_148(&uLocal_916);
					switch (iVar1)
					{
						case 0:
							__LIB_2__::func_478(Local_14.f_7, Global_35, "RE_HEC_UNI_V1_SPARETIME", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
						case 1:
							__LIB_2__::func_478(Local_14.f_7, Global_35, "RE_HEC_UNI_V1_LETMEKNOW", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
					}
				}
			}
		}
	}
}

int func_959(int* iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_2__::func_340(3, 0, 0);
	__LIB_0__::func_516(&iVar0, 8);
	if (bParam2)
	{
		__LIB_1__::func_336(&iVar0, 16);
	}
	iVar1 = -1;
	if (!__LIB_0__::func_27(iParam0->f_73, 4))
	{
		iVar1 = func_1556(uParam1, iParam0, 15f, &(iParam0->f_21), &(iParam0->f_74), 0, 1, 0, 0, iVar0, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	}
	if (iVar1 > -1)
	{
		if (iVar1 == 0)
		{
			if (!__LIB_0__::func_27(iParam0->f_73, 1))
			{
				if (__LIB_0__::func_27(iParam0->f_73, 1))
				{
					__LIB_1__::func_683(&(iParam0->f_73), 2);
				}
			}
		}
		__LIB_13__::func_832(iParam0, 0);
		iParam0->f_21[iVar1 /*17*/].f_13 = "";
	}
	return iVar1;
}

void func_964()
{
	if (!__LIB_13__::func_805(4))
	{
		func_1455(&(Local_14.f_284));
		__LIB_13__::func_832(&(Local_14.f_284), 0);
		func_1561(&(Local_14.f_284), 0);
		func_178(4);
	}
}

bool func_967(var uParam0, bool bParam1)
{
	return ((!bParam1 || __LIB_3__::func_634(uParam0, 0, 0, 0)) && uParam0->f_8 != 0);
}

bool func_969()
{
	if (!__LIB_0__::func_48(Global_35, Local_14.f_7, 15f, 1))
	{
		if (!__LIB_0__::func_75(&uLocal_919) || __LIB_1__::func_285(&uLocal_919, 16f))
		{
			return true;
		}
	}
	return false;
}

void func_1006(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1585();
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
						__LIB_2__::func_106(&vVar3, 50, 10, 0);
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

void func_1008(var uParam0)
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
			func_1592(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1592(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1009(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1592(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_1148(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_01"), 1);
			__LIB_1__::func_240(437, 0);
			__LIB_1__::func_240(440, 0);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			__LIB_0__::func_433(1);
			func_1734(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			__LIB_0__::func_433(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			__LIB_0__::func_433(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			__LIB_0__::func_433(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			__LIB_1__::func_240(438, 0);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			__LIB_0__::func_433(32768);
			break;
		default:
			__LIB_1__::func_240(439, 0);
			break;
	}
}

void func_1150(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	if (__LIB_0__::func_2() == -1)
	{
		if (!__LIB_1__::func_154(43))
		{
			if (iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
			{
				__LIB_1__::func_240(348, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
			{
				__LIB_1__::func_240(350, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
			{
				__LIB_1__::func_240(352, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				__LIB_1__::func_240(400, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 412399755))
		{
			func_1735(joaat("EXOTIC_STAGE_01"));
			if (__LIB_0__::func_944() == 0)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 1);
				if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(44))
		{
			if (iParam0 == joaat("PROVISION_HERON_FEATHER"))
			{
				__LIB_1__::func_240(354, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				__LIB_1__::func_240(399, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				__LIB_1__::func_240(401, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 709057512))
		{
			func_1735(joaat("EXOTIC_STAGE_02"));
			if (__LIB_0__::func_944() == 1)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 2);
				if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(45))
		{
			if (iParam0 == joaat("PROVISION_GATOR_EGG"))
			{
				__LIB_1__::func_240(359, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				__LIB_1__::func_240(394, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				__LIB_1__::func_240(395, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				__LIB_1__::func_240(398, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1478961327))
		{
			func_1735(joaat("EXOTIC_STAGE_03"));
			if (__LIB_0__::func_944() == 2)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 4);
				if (iParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!__LIB_0__::func_440(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						__LIB_0__::func_441(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
						__LIB_1__::func_696(48);
					}
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(46))
		{
			if (iParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
			{
				__LIB_1__::func_240(356, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				__LIB_1__::func_240(402, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				__LIB_1__::func_240(404, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				__LIB_1__::func_240(406, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1238404098))
		{
			func_1735(joaat("EXOTIC_STAGE_04"));
			if (__LIB_0__::func_944() == 3)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 8);
				if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(47))
		{
			if (iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				__LIB_1__::func_240(396, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				__LIB_1__::func_240(397, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				__LIB_1__::func_240(405, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				__LIB_1__::func_240(403, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 1160548794))
		{
			func_1735(joaat("EXOTIC_STAGE_05"));
			if (__LIB_0__::func_944() == 4)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 16);
				if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_1190()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1774(0);
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
	func_1774(1);
}

void func_1191()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_672(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1192()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1777(0);
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
	func_1777(1);
}

void func_1193()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1777(0);
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
	func_1777(1);
}

void func_1194()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_672(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_672(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1197(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1197(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1197(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1197(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	func_1785(iParam0, iParam1);
	return 1;
}

int func_1231(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1816(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_672(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

int func_1245()
{
	if (__LIB_0__::func_28())
	{
		if (!__LIB_1__::func_185(3))
		{
			return __LIB_0__::func_559(43);
		}
		if (__LIB_1__::func_185(38) && !__LIB_1__::func_185(43))
		{
			return func_1825(8);
		}
	}
	return 0;
}

bool func_1246(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	return ((Global_1888801[iParam0 /*35*/].f_20 == 1 || Global_1888801[iParam0 /*35*/].f_20 == 2) && !func_1826(iParam0));
}

bool func_1344(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return false;
	}
	fVar0 = __LIB_1__::func_349(uParam0);
	if (uParam0->f_12 > __LIB_2__::func_40(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = __LIB_1__::func_362(iParam1);
	iVar1 = __LIB_1__::func_363(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, 1, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

bool func_1398(var uParam0, vector3 vParam1, bool bParam4, int iParam5)
{
	if (!PROPSET::_DOES_PROPSET_EXIST(*uParam0))
	{
		*uParam0 = PROPSET::_CREATE_PROPSET(iParam5, vParam1, 0, bParam4, 1200f, false, true);
		return false;
	}
	else
	{
		return PROPSET::_IS_PROPSET_VALID(*uParam0);
	}
	return false;
}

bool func_1399(int iParam0, var uParam1, bool bParam2, var uParam3, bool bParam4)
{
	struct<4> Var0;
	vector3 vVar4;
	float fVar7;
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_87))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_90[2]))
		{
			Var0 = { __LIB_13__::func_752(iParam0) };
			iParam0->f_87 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(iParam0->f_90[2], joaat("SCRIPT_REHOB_HERBALIST"), Var0, Var0.f_3, 0, -1f, 1);
			__LIB_18__::func_672(iParam0, 0);
		}
		else
		{
			iParam0->f_90[2] = OBJECT::CREATE_OBJECT(joaat("P_CRATETABLE01X"), 556.813f, 172.2274f, 133.3552f, true, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iParam0->f_90[2], 0f, 0f, -142.76f, 2, true);
		}
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_89) && TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_87))
	{
		vVar4 = { TASK::_GET_SCENARIO_POINT_COORDS(iParam0->f_87, true) };
		fVar7 = TASK::_GET_SCENARIO_POINT_HEADING(iParam0->f_87, true);
		Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar4, fVar7, -0.284f, -4.8223f, 0f) };
		Var0.f_3 = __LIB_2__::func_709((fVar7 - 18.87f));
		iParam0->f_89 = TASK::CREATE_SCENARIO_POINT(joaat("SCRIPT_REHOB_HERBALIST"), Var0, Var0.f_3, 0, 0, 1);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_89))
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_87))
		{
			TASK::_SET_SCENARIO_POINT_FLAG(iParam0->f_87, 14, true);
			TASK::_SET_SCENARIO_POINT_FLAG(iParam0->f_87, 22, true);
			TASK::_SET_SCENARIO_POINT_FLAG(iParam0->f_89, 14, true);
			TASK::_SET_SCENARIO_POINT_FLAG(iParam0->f_89, 22, true);
			return true;
		}
	}
	return false;
}

char* func_1403(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_idle";
		case 1:
			return "pl_exit";
		case 2:
			return "pl_leadin_A";
		case 3:
			return "pl_lookdown_leadin_B";
		case 4:
			return "pl_lookup_f";
		case 5:
			return "pl_lookup_r";
		case 6:
			return "pl_quickexit";
		case 7:
			return "pl_reactshot_f";
		case 8:
			return "pl_reactshot_r";
		case 9:
			return "pl_transition_leadin_a";
		case 10:
			return "pl_waveover_f";
		case 11:
			return "pl_waveover_r";
		default:
			break;
	}
	return "INVALID PBL";
}

bool func_1410(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	switch (*uParam1)
	{
		case 0:
			if (!func_1935(uParam2, iParam0, 1, __LIB_13__::func_757(iParam0, 0, 1, 2, 3)))
			{
				return false;
			}
			if (!__LIB_3__::func_632(uParam3, "script@beat@wilderness@herbalistCamp@playerScene", 324999, 230219, __LIB_13__::func_759(iParam0), 0, 0, 0, 0))
			{
				return false;
			}
			if (!__LIB_3__::func_632(uParam4, "script@beat@wilderness@herbalistcamp@directional_exchange_new", 324999, 230219, 4, 0, 0, 0, 0))
			{
				return false;
			}
			if (!__LIB_3__::func_632(uParam5, "script@beat@wilderness@herbalistcamp@forward_exchange_new", 324999, 230219, 4, 0, 0, 0, 0))
			{
				return false;
			}
			*uParam1 = 1;
			break;
		case 1:
			if (((!__LIB_3__::func_633(uParam2) || !__LIB_3__::func_633(uParam3)) || !__LIB_3__::func_633(uParam4)) || !__LIB_3__::func_633(uParam5))
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_1412()
{
	return __LIB_11__::func_192(10);
}

int func_1413(var uParam0, vector3 vParam1, bool bParam4)
{
	return func_1938(uParam0->f_1, uParam0, vParam1, bParam4, 1, 0, 1, 0, 1);
}

void func_1416()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_7))
	{
		if (__LIB_13__::func_805(131072) && func_284() == 0)
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_14.f_7, 560.3453f, 170f, 133.3503f, 45.6863f, true, false, true);
			PED::_SET_PED_CROUCH_MOVEMENT(Local_14.f_7, true, 0, true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_14.f_7, 557.4182f, 171.7201f, 134.3552f, 45.6863f, true, false, true);
			PED::_SET_PED_CROUCH_MOVEMENT(Local_14.f_7, false, 0, false);
		}
	}
}

bool func_1418()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!__LIB_18__::func_653(iVar0, 43))
		{
			if (!func_1423(iVar0))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_1419(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6, bool bParam7)
{
	int iVar0;
	struct<4> Var1;
	int iVar7;
	int iVar8;
	int iVar9;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
		{
			if (__LIB_18__::func_653(iVar0, iParam1))
			{
				iVar7 = __LIB_13__::func_735(iVar0, iParam1);
				if (__LIB_13__::func_760(iVar0))
				{
					Var1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam2, bParam5, __LIB_13__::func_761(iVar0)) };
					if (bParam7)
					{
						(*uParam0)[iVar0] = OBJECT::CREATE_OBJECT(iVar7, Var1, true, true, false, false, true);
					}
					else
					{
						iVar8 = __LIB_13__::func_762(iVar7, 1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar8))
						{
							(*uParam0)[iVar0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar8);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
					{
						ENTITY::SET_ENTITY_HEADING((*uParam0)[iVar0], __LIB_2__::func_709((bParam5 + __LIB_13__::func_763(iVar0))));
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY((*uParam0)[iVar0], true, true);
						__LIB_9__::func_800((*uParam0)[iVar0]);
					}
				}
				else
				{
					Var1 = { __LIB_13__::func_728(iVar0) };
					if (!__LIB_0__::func_86(Var1))
					{
						if (bParam7)
						{
							(*uParam0)[iVar0] = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar7, vParam2, true, true, false, true);
						}
						else
						{
							iVar9 = __LIB_13__::func_762(iVar7, 1);
							if (ENTITY::DOES_ENTITY_EXIST(iVar9))
							{
								(*uParam0)[iVar0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar9);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
						{
							__LIB_9__::func_800((*uParam0)[iVar0]);
						}
						if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]) && __LIB_13__::func_764(iVar0))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY((*uParam0)[iVar0], iParam6, -1, Var1, Var1.f_3, true, true, false, false, 2, true, false, false);
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY((*uParam0)[iVar0], true, true);
						}
					}
				}
				if (iVar0 == 19)
				{
					if (!bParam7)
					{
						(*uParam0)[iVar0] = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar7, vParam2, true, true, false, true);
					}
					if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
					{
						ENTITY::SET_ENTITY_VISIBLE((*uParam0)[iVar0], false);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1422(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (bParam2)
	{
		if (*uParam0 != -1)
		{
			if (uParam0->f_1 > -1)
			{
				iVar0 = __LIB_13__::func_754(*uParam0, uParam0->f_1);
				if (STREAMING::IS_MODEL_VALID(iVar0))
				{
					if (STREAMING::HAS_MODEL_LOADED(iVar0) && !ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
					{
						uParam0->f_5 = func_1948(*uParam0, uParam0->f_1);
						PED::_0x931B241409216C1F(iParam1, uParam0->f_5, 0);
						PED::SET_PED_KEEP_TASK(uParam0->f_5, true);
					}
				}
			}
		}
	}
	if (uParam0->f_2 != -1)
	{
		if (uParam0->f_3 > -1)
		{
			iVar0 = __LIB_13__::func_755(uParam0->f_2, uParam0->f_3);
			if (STREAMING::IS_MODEL_VALID(iVar0))
			{
				if (STREAMING::HAS_MODEL_LOADED(iVar0) && !ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
				{
					uParam0->f_6 = __LIB_18__::func_677(uParam0->f_2, uParam0->f_3);
				}
			}
		}
	}
}

bool func_1423(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_90[iParam0]))
	{
		if (ENTITY::IS_ENTITY_AN_OBJECT(Local_14.f_90[iParam0]))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_1426(int iParam0, var uParam1)
{
	__LIB_4__::func_183(&(iParam0->f_239), joaat("VOLCYLINDER"), __LIB_3__::func_179(uParam1), 0f, 0f, 0f, 5f, 5f, 5f);
}

void func_1427()
{
	__LIB_3__::func_939(&Local_776, "ARTHUR", Global_35, 0);
	__LIB_3__::func_939(&Local_776, "GenStoryMale", Local_14.f_7, 0);
	__LIB_3__::func_939(&Local_776, "p_mortarPestle02x", Local_14.f_90[3], 0);
	__LIB_3__::func_949(&Local_776, "Loop_Idle", 0);
	__LIB_3__::func_949(&Local_776, "Loop_Idle_2", 0);
	__LIB_3__::func_938(&Local_776, 557.91f, 170.81f, 133.35f, 7.25f, 0f, 18.758f, 2);
	if (__LIB_0__::func_113())
	{
		__LIB_0__::func_928(&uLocal_815, Global_35, "ARTHUR", 0);
	}
	else
	{
		__LIB_0__::func_928(&uLocal_815, Global_35, "JOHN", 0);
	}
	__LIB_0__::func_928(&uLocal_815, Local_14.f_7, "herbalist", 0);
	__LIB_3__::func_635(&Local_776);
}

void func_1429(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_434.f_5))
	{
		switch (iParam0->f_434.f_4)
		{
			case 0:
				__LIB_1__::func_473(iParam0->f_434.f_5, joaat("WORLD_ANIMAL_HORSE_RESTING"), -1, 1, 0, -1082130432 /* Float: -1f */);
				break;
			case 1:
				__LIB_1__::func_473(iParam0->f_434.f_5, joaat("WORLD_ANIMAL_HORSE_SLEEPING"), -1, 1, 0, -1082130432 /* Float: -1f */);
				break;
			case 2:
				__LIB_1__::func_473(iParam0->f_434.f_5, joaat("WORLD_ANIMAL_HORSE_GRAZING"), -1, 1, 0, -1082130432 /* Float: -1f */);
				break;
			case 3:
				__LIB_1__::func_473(iParam0->f_434.f_5, joaat("WORLD_ANIMAL_HORSE_DRINK_GROUND"), -1, 1, 0, -1082130432 /* Float: -1f */);
				break;
		}
	}
}

bool func_1433(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	if (!__LIB_13__::func_727(iParam0, 11))
	{
		bVar1 = __LIB_13__::func_769(iParam0);
		if (func_832(iParam0->f_7, 0, uParam1, &iVar0, 1, 0) || bVar1)
		{
			if (!bVar1 && iVar0 == 256)
			{
				if (!__LIB_0__::func_48(Global_35, iParam0->f_7, 7f, 1))
				{
					if (EVENT::_0xC6A7DC546E94FED5(iParam0->f_7, joaat("EVENT_SHOT_FIRED_WHIZZED_BY"), 0, 0) > -1 || EVENT::_0xC6A7DC546E94FED5(iParam0->f_7, joaat("EVENT_SHOT_FIRED_BULLET_IMPACT"), 0, 0) > -1)
					{
					}
					else
					{
						return false;
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_7))
			{
				__LIB_0__::func_325(&(iParam0->f_9));
				bVar2 = false;
				if (__LIB_13__::func_727(iParam0, 12))
				{
					if (iParam0->f_1 == 3 && !__LIB_13__::func_727(iParam0, 15))
					{
						bVar2 = true;
					}
				}
				if (ENTITY::IS_ENTITY_DEAD(iParam0->f_7))
				{
					if (bVar2)
					{
						__LIB_1__::func_715(4, joaat("HONOR_EVENT_AMBIENT_KILL"), 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
					}
					else
					{
						__LIB_1__::func_715(3, joaat("HONOR_EVENT_AMBIENT_KILL"), 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
					}
				}
				else if (bVar2)
				{
					__LIB_1__::func_715(4, joaat("HONOR_EVENT_SCARE"), 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				else
				{
					__LIB_1__::func_715(3, joaat("HONOR_EVENT_SCARE"), 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				TASK::CLEAR_PED_SECONDARY_TASK(iParam0->f_7);
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(iParam0->f_7, 0);
				__LIB_13__::func_815(iParam0);
				func_1525(&(iParam0->f_284));
				__LIB_2__::func_344(&(iParam0->f_7));
				__LIB_2__::func_603(&(iParam0->f_7), &(iParam0->f_284), &(iParam0->f_284.f_21), 1, 1);
				__LIB_13__::func_732(iParam0, 3, 3);
				if (!iParam0->f_221)
				{
					if (!__LIB_13__::func_770(iVar0, 1024))
					{
						iParam0->f_221 = 1;
					}
				}
				else
				{
					iParam0->f_221 = 0;
				}
				iParam0->f_1 = 9;
			}
			else
			{
				iParam0->f_1 = 11;
			}
			__LIB_13__::func_747(iParam0);
			__LIB_13__::func_724(iParam0, 11);
			return true;
		}
	}
	return false;
}

void func_1435(int iParam0, int iParam1)
{
	__LIB_0__::func_325(&(iParam0->f_9));
	__LIB_13__::func_731(iParam0, 262144);
	func_1525(&(iParam0->f_284));
	__LIB_2__::func_344(&(iParam0->f_7));
	__LIB_2__::func_603(&(iParam0->f_7), &(iParam0->f_284), &(iParam0->f_284.f_21), 1, 1);
	TASK::_TASK_SMART_FLEE_STYLE_PED(iParam0->f_7, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, iParam0->f_434.f_5);
	PED::SET_PED_KEEP_TASK(iParam0->f_7, true);
}

void func_1438(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	if (__LIB_18__::func_679(iParam0))
	{
		func_1966(iParam0, uParam1);
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iVar0 > iParam0->f_523)
			{
				if (__LIB_13__::func_741(iParam0, iVar0))
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar1 != 0)
		{
			if (!__LIB_19__::func_293(iParam0, 0))
			{
				func_1967(iParam0, iVar1);
			}
			else
			{
				__LIB_18__::func_680(iParam0, iVar1);
			}
		}
	}
}

void func_1455(var uParam0)
{
	func_1982(&(uParam0->f_21), 0, 0, 0, 1);
	__LIB_18__::func_685(uParam0, 0, 1);
	__LIB_18__::func_685(uParam0, 1, 1);
}

void func_1456(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!__LIB_13__::func_727(iParam0, 21))
		{
			func_1539(&(iParam0->f_284));
			__LIB_13__::func_724(iParam0, 21);
		}
	}
	else if (__LIB_13__::func_727(iParam0, 21))
	{
		func_1539(&(iParam0->f_284));
		__LIB_13__::func_730(iParam0, 21);
	}
}

int func_1466(var uParam0, float fParam1, int iParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bVar1 = false;
	fVar2 = __LIB_3__::func_249(uParam0, bVar1);
	fVar3 = fVar2;
	if (!bParam11 && fVar2 < fParam3)
	{
	}
	if (fParam5 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > fParam5)
		{
			return 0;
		}
	}
	if (fParam7 > 0f)
	{
		if (MISC::ABSF((Global_36.f_2 - uParam0->f_51.f_2)) >= fParam7)
		{
			return 0;
		}
	}
	if (uParam0->f_178 && __LIB_3__::func_248())
	{
		bVar1 = true;
		fVar3 = __LIB_0__::func_514(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				__LIB_4__::func_360(&(uParam0->f_121[iVar0 /*9*/]), fVar3, 1082130432 /* Float: 4f */, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			__LIB_4__::func_360(&(uParam0->f_121[0 /*9*/]), fVar3, 1082130432 /* Float: 4f */, 1, 90f, 0, 0);
		}
		if (__LIB_3__::func_280(&(uParam0->f_121), iParam4, fParam1))
		{
			__LIB_3__::func_164(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				STATS::_0xB2A38826E5886E83(__LIB_3__::func_167(uParam0->f_3, uParam0->f_185), 0);
			}
			return 1;
		}
	}
	fVar4 = (fParam3 * fParam3);
	iVar0 = 0;
	while (iVar0 < uParam0->f_121)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_121[iVar0 /*9*/].f_6))
		{
			if (BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_121[iVar0 /*9*/].f_6, true, false)) < fVar4)
			{
				if (!uParam0->f_48)
				{
					if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173) && !(bParam8 && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)))
					{
						if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, false, 0))
						{
							return 0;
						}
					}
					if (bParam6)
					{
						__LIB_3__::func_426(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				__LIB_3__::func_164(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					STATS::_0xB2A38826E5886E83(__LIB_3__::func_167(uParam0->f_3, uParam0->f_185), 0);
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_1478(var uParam0)
{
	if (__LIB_0__::func_27(uParam0->f_73, 16))
	{
		func_1999(uParam0, 1);
	}
}

void func_1479(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_7))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_7, __LIB_13__::func_807(43, 0), "WAIT_01_UPPER", 1))
		{
			TASK::STOP_ANIM_TASK(iParam0->f_7, __LIB_13__::func_807(43, 0), "WAIT_01_UPPER", -2f);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_7, __LIB_13__::func_807(43, 0), "WAIT_02_UPPER", 1))
		{
			TASK::STOP_ANIM_TASK(iParam0->f_7, __LIB_13__::func_807(43, 0), "WAIT_02_UPPER", -2f);
		}
	}
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(iParam0->f_7, 500);
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam0->f_7, 500);
}

bool func_1480(int iParam0)
{
	switch (iParam0->f_208)
	{
		case 0:
			__LIB_1__::func_148(&(iParam0->f_212));
			iParam0->f_208 = 3;
			break;
		case 3:
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iParam0->f_7))
			{
				if (__LIB_1__::func_285(&(iParam0->f_212), 10f))
				{
					TASK::TASK_PLAY_ANIM(iParam0->f_7, __LIB_13__::func_807(43, 0), "WAIT_02_UPPER", 8f, -8f, -1, 67117072, 0f, false, 0, false, 0, false);
					iParam0->f_208++;
				}
			}
			break;
		case 4:
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_7, __LIB_13__::func_807(43, 0), "WAIT_02_UPPER", 1))
			{
				__LIB_1__::func_148(&(iParam0->f_212));
				iParam0->f_208++;
			}
			break;
		case 5:
			if (__LIB_1__::func_285(&(iParam0->f_212), 20f))
			{
				TASK::TASK_PLAY_ANIM(iParam0->f_7, __LIB_13__::func_807(19, 0), "NEGATIVE_UPPER", 8f, -8f, -1, 67117072, 0f, false, 0, false, 0, false);
				return true;
			}
			break;
	}
	return false;
}

bool func_1481(int iParam0)
{
	if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_7, __LIB_13__::func_807(43, 0), "WAIT_01_UPPER", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_7, __LIB_13__::func_807(43, 0), "WAIT_02_UPPER", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_7, __LIB_13__::func_807(43, 0), "NEGATIVE_UPPER", 1))
	{
		return true;
	}
	return false;
}

void func_1483(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = PLAYER::_0x0139637A3BFF8B6D(iParam0->f_7, &iVar0);
	PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), iVar0, iVar1);
}

bool func_1489(int iParam0)
{
	if (__LIB_4__::func_126(*iParam0) >= __LIB_13__::func_745(*iParam0))
	{
		return true;
	}
	return false;
}

void func_1490(int iParam0)
{
	if (!__LIB_13__::func_727(iParam0, 1))
	{
		if (!__LIB_13__::func_727(iParam0, 40))
		{
			__LIB_3__::func_152(119);
			__LIB_0__::func_7(&Global_1935630, 4);
			__LIB_13__::func_724(iParam0, 40);
		}
	}
}

bool func_1492(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	switch (PED::_0x569F1E1237508DEB(iParam0->f_7))
	{
		case joaat("SCRIPT_COMMON_LEAN_READ_HERBALIST"):
			if (bParam3 || ((!bParam1 && !bParam2) && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) >= 0.25f))
			{
				iParam0->f_468 = joaat("REHOB_LEAN_2_MIX");
				iParam0->f_469 = joaat("SCRIPT_COMMON_MIX_MORTAR_HERBALIST");
				iParam0->f_470 = MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 25f);
				__LIB_18__::func_672(iParam0, 1);
			}
			else
			{
				iParam0->f_468 = joaat("REHOB_LEAN_2_STAND");
				iParam0->f_469 = joaat("SCRIPT_COMMON_STAND_HERBALIST");
				iParam0->f_470 = 1f;
			}
			__LIB_1__::func_148(&(iParam0->f_441));
			return true;
		case joaat("SCRIPT_COMMON_STAND_HERBALIST"):
			if (!bParam1 || bParam3)
			{
				iParam0->f_468 = joaat("REHOB_STAND_2_LEAN");
				iParam0->f_469 = joaat("SCRIPT_COMMON_LEAN_READ_HERBALIST");
				iParam0->f_470 = MISC::GET_RANDOM_FLOAT_IN_RANGE(30f, 45f);
			}
			else
			{
				iParam0->f_469 = joaat("SCRIPT_COMMON_STAND_HERBALIST");
				iParam0->f_470 = 1f;
			}
			__LIB_1__::func_148(&(iParam0->f_441));
			return true;
		case joaat("SCRIPT_COMMON_MIX_MORTAR_HERBALIST"):
			if (bParam3 || (!bParam1 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) >= 0.25f))
			{
				iParam0->f_468 = joaat("REHOB_MIX_2_LEAN");
				iParam0->f_469 = joaat("SCRIPT_COMMON_LEAN_READ_HERBALIST");
				iParam0->f_470 = MISC::GET_RANDOM_FLOAT_IN_RANGE(30f, 45f);
			}
			else
			{
				iParam0->f_468 = joaat("REHOB_MIX_2_STAND");
				iParam0->f_469 = joaat("SCRIPT_COMMON_STAND_HERBALIST");
				iParam0->f_470 = 1f;
			}
			__LIB_1__::func_148(&(iParam0->f_441));
			return true;
	}
	return false;
}

void func_1494(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	iVar0 = __LIB_13__::func_745(*iParam0);
	sVar1 = __LIB_13__::func_809(*iParam0, "REHEC_COL_YARROW", "REHEC_COL_HBSAGE", "REHEC_COL_GCURRANT", "REHEC_COL_VSNOWDROP");
	if (iParam1 >= __LIB_13__::func_745(*iParam0) || bParam2)
	{
		if (!__LIB_13__::func_727(iParam0, 1))
		{
			__LIB_3__::func_662("HERB_DONE", 7500, 0, 0, -1, -1, 0);
		}
		else
		{
			__LIB_3__::func_662("HERB_DONE_RC", 7500, 0, 0, -1, -1, 0);
		}
		__LIB_0__::func_45(MISC::_CREATE_VAR_STRING(2, sVar1, iVar0, iVar0), 10000, 0, 0, 0, 1);
	}
	else
	{
		__LIB_0__::func_45(MISC::_CREATE_VAR_STRING(2, sVar1, iParam1, iVar0), 10000, 0, 0, 0, 1);
	}
}

void func_1495(int iParam0, bool bParam1)
{
	func_1456(iParam0, 1);
	__LIB_13__::func_832(&(iParam0->f_284), 1);
	if (!__LIB_13__::func_727(iParam0, 9) || __LIB_13__::func_727(iParam0, 28))
	{
		__LIB_13__::func_744(&(iParam0->f_284), 0, "RE_HEC_UNI_V1_LOOKING");
	}
	else
	{
		__LIB_13__::func_744(&(iParam0->f_284), 0, "RE_HEC_UNI_V1_HANDOVER_PLAYER");
	}
	__LIB_4__::func_317(&(iParam0->f_284), 0, "BEAT_CON_GIVE_PLANTS");
	if (!__LIB_13__::func_749(iParam0, 9))
	{
		__LIB_13__::func_744(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_SECONDTHOUGHT");
		__LIB_4__::func_317(&(iParam0->f_284), 1, __LIB_2__::func_460(6));
		__LIB_13__::func_724(iParam0, 62);
	}
	else
	{
		__LIB_13__::func_831(&(iParam0->f_284), 1, 0);
	}
	if (!__LIB_13__::func_727(iParam0, 1))
	{
		if (!MAP::DOES_BLIP_EXIST(iParam0->f_9))
		{
		}
	}
	if (MAP::DOES_BLIP_EXIST(iParam0->f_9))
	{
		MAP::_BLIP_SET_MODIFIER(iParam0->f_9, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
	}
	if (bParam1)
	{
		func_1494(iParam0, __LIB_4__::func_126(*iParam0), 1);
	}
	func_1478(&(iParam0->f_284));
	iParam0->f_198 = 5;
}

void func_1496(int iParam0, bool bParam1)
{
	func_1456(iParam0, 0);
	if (!__LIB_13__::func_749(iParam0, 8))
	{
		func_2010(&(iParam0->f_284), 1);
		__LIB_13__::func_831(&(iParam0->f_284), 0, 1);
		__LIB_13__::func_744(&(iParam0->f_284), 0, func_2011(iParam0));
	}
	else
	{
		__LIB_13__::func_831(&(iParam0->f_284), 0, 0);
	}
	if (!__LIB_13__::func_727(iParam0, 1))
	{
		if (!__LIB_13__::func_749(iParam0, 9))
		{
			__LIB_13__::func_831(&(iParam0->f_284), 1, 1);
			__LIB_13__::func_744(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_SECONDTHOUGHT");
			__LIB_4__::func_317(&(iParam0->f_284), 1, __LIB_2__::func_460(6));
			__LIB_13__::func_724(iParam0, 62);
		}
		else
		{
			__LIB_13__::func_730(iParam0, 62);
			__LIB_13__::func_831(&(iParam0->f_284), 1, 0);
		}
	}
	else
	{
		__LIB_13__::func_831(&(iParam0->f_284), 1, 0);
		__LIB_4__::func_317(&(iParam0->f_284), 1, __LIB_2__::func_460(10));
		__LIB_13__::func_730(iParam0, 62);
	}
	if (MAP::DOES_BLIP_EXIST(iParam0->f_9))
	{
		MAP::_BLIP_REMOVE_MODIFIER(iParam0->f_9, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
	}
	if (bParam1)
	{
		__LIB_3__::func_662(__LIB_13__::func_809(*iParam0, "HRB_OBJ_YR", "HRB_OBJ_HS", "HRB_OBJ_GC", "HRB_OBJ_VS"), 7500, 0, 0, __LIB_13__::func_745(*iParam0), -1, 1);
	}
	func_1478(&(iParam0->f_284));
	iParam0->f_198 = 0;
}

bool func_1497(int iParam0, var uParam1)
{
	if (!iParam0->f_536)
	{
		if (iParam0->f_535)
		{
			if (__LIB_19__::func_494(iParam0))
			{
				iParam0->f_536 = 1;
			}
		}
	}
	switch (iParam0->f_198)
	{
		case 0:
			func_2013(iParam0);
			switch (func_2014(iParam0))
			{
				case 3:
					func_1495(iParam0, 1);
					break;
				case 1:
					__LIB_1__::func_148(&(iParam0->f_278));
					__LIB_13__::func_733(iParam0, 7);
					__LIB_19__::func_297(iParam0);
					iParam0->f_198 = 1;
					break;
			}
			break;
		case 1:
			if (!__LIB_19__::func_293(iParam0, 1))
			{
				if ((__LIB_1__::func_285(&(iParam0->f_278), 2f) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(iParam0->f_7))
				{
					__LIB_2__::func_478(iParam0->f_7, Global_35, func_2015(iParam0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&(iParam0->f_278));
					iParam0->f_198 = 2;
				}
			}
			break;
		case 2:
			if (__LIB_1__::func_285(&(iParam0->f_278), 3f) && !__LIB_2__::func_136(iParam0->f_7, 1))
			{
				__LIB_0__::func_37(&(iParam0->f_278));
				__LIB_13__::func_734(iParam0, 131072);
				__LIB_13__::func_750(iParam0, 7);
				__LIB_13__::func_823(iParam0, 5f, 0);
				func_2016(iParam0, 10f);
				func_1496(iParam0, 0);
			}
			break;
		case 3:
			if (__LIB_19__::func_293(iParam0, 1))
			{
				__LIB_0__::func_769();
				__LIB_0__::func_37(&(iParam0->f_278));
				__LIB_13__::func_730(iParam0, 13);
				__LIB_13__::func_734(iParam0, 131072);
				__LIB_18__::func_654(iParam0);
				__LIB_0__::func_325(&(iParam0->f_9));
				iParam0->f_198 = 4;
			}
			break;
		case 4:
			if (!__LIB_19__::func_293(iParam0, 1))
			{
				__LIB_13__::func_823(iParam0, 3f, 0);
				iParam0->f_1 = 11;
			}
			break;
		case 5:
			if (!func_1489(iParam0))
			{
				if (__LIB_13__::func_742(iParam0, 131072))
				{
					__LIB_13__::func_823(iParam0, 3f, 0);
					__LIB_13__::func_734(iParam0, 131072);
				}
				func_1496(iParam0, 1);
			}
			else
			{
				switch (iParam0->f_534)
				{
					case 0:
						if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_532, false, 0))
						{
							__LIB_13__::func_831(&(iParam0->f_284), 0, 0);
							iParam0->f_534++;
						}
						break;
					case 1:
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_532, false, 0))
						{
							__LIB_13__::func_831(&(iParam0->f_284), 0, 1);
							iParam0->f_534 = (iParam0->f_534 - 1);
						}
						break;
				}
				switch (func_2017(iParam0, uParam1))
				{
					case 4:
						iParam0->f_535 = 1;
						__LIB_18__::func_687(iParam0);
						__LIB_13__::func_731(iParam0, 262144);
						func_1456(iParam0, 0);
						__LIB_13__::func_832(&(iParam0->f_284), 0);
						__LIB_13__::func_724(iParam0, 17);
						__LIB_18__::func_688(&(iParam0->f_133), *iParam0, &(iParam0->f_112), &(iParam0->f_90));
						__LIB_3__::func_962(&(iParam0->f_133), __LIB_13__::func_759(*iParam0));
						__LIB_3__::func_962(&(iParam0->f_154), 5);
						__LIB_3__::func_962(&(iParam0->f_175), 5);
						iParam0->f_495 = 0;
						iParam0->f_198 = 6;
						break;
					default:
						__LIB_3__::func_962(&(iParam0->f_133), __LIB_13__::func_759(*iParam0));
						__LIB_3__::func_962(&(iParam0->f_154), 5);
						__LIB_3__::func_962(&(iParam0->f_175), 5);
						break;
				}
			}
			break;
		case 6:
			if (func_2021(iParam0))
			{
				iParam0->f_198 = 7;
			}
			break;
		case 7:
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iParam0->f_133.f_1, false))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				__LIB_18__::func_654(iParam0);
				iParam0->f_198 = 8;
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 993600644))
			{
				__LIB_0__::func_769();
				__LIB_0__::func_45("HRB_SUCCESS", 10000, 0, 0, 0, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				func_1197(__LIB_13__::func_776(*iParam0), __LIB_13__::func_745(*iParam0), 0, -142743235, 0);
				__LIB_1__::func_715(12, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				__LIB_13__::func_724(iParam0, 15);
				__LIB_19__::func_300(*iParam0);
				__LIB_2__::func_919(iParam0->f_90[19], 0, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				if (MAP::DOES_BLIP_EXIST(iParam0->f_9))
				{
					MAP::_BLIP_REMOVE_MODIFIER(iParam0->f_9, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
				}
				__LIB_13__::func_726(3);
				iParam0->f_198 = 8;
			}
			break;
		case 8:
			if (iParam0->f_536)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_1502(int iParam0)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_7, -944481653))
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam0->f_242, iParam0->f_7, PED::GET_PED_BONE_INDEX(iParam0->f_7, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
		ENTITY::SET_ENTITY_VISIBLE(iParam0->f_242, true);
		__LIB_2__::func_478(iParam0->f_7, Global_35, __LIB_13__::func_777(iParam0->f_240), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_7, -228458952))
	{
		__LIB_2__::func_919(iParam0->f_242, 1, 1);
		ENTITY::SET_ENTITY_VISIBLE(iParam0->f_242, false);
		__LIB_2__::func_463(iParam0->f_7, __LIB_13__::func_778(iParam0->f_240), 1, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 227258506) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1308194400))
	{
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -228458952))
	{
		__LIB_2__::func_919(iParam0->f_242, 1, 1);
		ENTITY::SET_ENTITY_VISIBLE(iParam0->f_242, false);
		__LIB_2__::func_478(iParam0->f_7, Global_35, __LIB_13__::func_779(iParam0->f_240), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		if (__LIB_18__::func_669(iParam0) != 4)
		{
			func_672(__LIB_13__::func_778(iParam0->f_240), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		}
		else
		{
			__LIB_9__::func_952(joaat("RE_HERBALIST_CAMP_REWARD"), 0, 1065353216 /* Float: 1f */, 1, 0, 0);
		}
	}
}

void func_1503(int iParam0)
{
	int iVar0;
	if (__LIB_18__::func_669(iParam0) == 2 || __LIB_18__::func_669(iParam0) == 1)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 500, -1f, -1f, -1f);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, "SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER", "TAKE_OUT_PAMP_HERBALIST", Global_35, __LIB_3__::func_444("SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER", "TAKE_OUT_PAMP_HERBALIST"), 8f, -8f, 8200, 0f, false, false, -1f, 0, 0, -1f);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, "SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER", "PAMP_LOOP_HERBALIST", Global_35, -1, 8f, -8f, 8201, 0f, false, false, -1f, 0, 0, -1f);
		__LIB_1__::func_474(iParam0->f_7, &iVar0, 0, 0, 1, 1);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 500, -1f, -1f, -1f);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, "SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "TAKE_OUT_SERUM_HERBALIST", Global_35, __LIB_3__::func_444("SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "TAKE_OUT_SERUM_HERBALIST"), 8f, -8f, 8200, 0f, false, false, -1f, 0, 0, -1f);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, "SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "SERUM_LOOP_HERBALIST", Global_35, -1, 8f, -8f, 8201, 0f, false, false, -1f, 0, 0, -1f);
		__LIB_1__::func_474(iParam0->f_7, &iVar0, 0, 0, 1, 1);
	}
}

int func_1509(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0[4];
	vector3 vVar17;
	vector3 vVar20;
	vector3 vVar23;
	vector3 vVar26;
	vector3 vVar29;
	bool bVar32;
	vector3 vVar33;
	vector3 vVar36;
	vector3 vVar39;
	float fVar42;
	vVar17 = { -2.4f, 2.68f, 0f };
	vVar20 = { 0.77f, 4f, 0f };
	vVar23 = { -2.15f, 1.32f, 0f };
	vVar26 = { 0.21f, 2.2f, 0f };
	vVar29 = { __LIB_3__::func_508(Global_35, iParam0->f_175.f_1, "player", "PB_HANDOVER", 1) };
	Var0[0 /*4*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(__LIB_3__::func_179(uParam1), __LIB_3__::func_526(uParam1), vVar17) };
	Var0[1 /*4*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(__LIB_3__::func_179(uParam1), __LIB_3__::func_526(uParam1), vVar20) };
	Var0[2 /*4*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(__LIB_3__::func_179(uParam1), __LIB_3__::func_526(uParam1), vVar23) };
	Var0[3 /*4*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(__LIB_3__::func_179(uParam1), __LIB_3__::func_526(uParam1), vVar26) };
	Var0[0 /*4*/].f_3 = __LIB_0__::func_62(Global_36, Var0[0 /*4*/]);
	Var0[1 /*4*/].f_3 = __LIB_0__::func_62(Global_36, Var0[1 /*4*/]);
	Var0[2 /*4*/].f_3 = __LIB_0__::func_62(Global_36, Var0[2 /*4*/]);
	Var0[3 /*4*/].f_3 = __LIB_0__::func_62(Global_36, Var0[3 /*4*/]);
	bVar32 = true;
	if (__LIB_0__::func_195(Var0[0 /*4*/], Var0[1 /*4*/], Global_36))
	{
		bVar32 = true;
	}
	else if (__LIB_0__::func_195(Var0[3 /*4*/], Var0[2 /*4*/], Global_36))
	{
		bVar32 = false;
	}
	else if (Var0[0 /*4*/].f_3 + Var0[1 /*4*/].f_3) > (Var0[0 /*4*/].f_3 + Var0[1 /*4*/].f_3)
	{
		bVar32 = false;
	}
	if (bVar32)
	{
		*uParam2 = { vVar29 };
		uParam2->f_3 = __LIB_0__::func_152(*uParam2, ENTITY::GET_ENTITY_COORDS(iParam0->f_7, true, false), 1);
		return 0;
	}
	else if (__LIB_0__::func_195(Var0[2 /*4*/], Var0[3 /*4*/], Global_36))
	{
		vVar33 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_7, true, false) };
		vVar36 = { __LIB_3__::func_508(Global_35, iParam0->f_154.f_1, "herbalist", "PB_HANDOVER", 1) };
		vVar39 = { __LIB_3__::func_508(Global_35, iParam0->f_154.f_1, "player", "PB_HANDOVER", 1) };
		fVar42 = BUILTIN::VDIST(vVar36, vVar39);
		if (Var0[2 /*4*/].f_3 < Var0[3 /*4*/].f_3)
		{
			*uParam2 = { vVar33 + Vector(fVar42, fVar42, fVar42) * __LIB_1__::func_868(vVar33, Var0[2 /*4*/], 1065353216 /* Float: 1f */) };
		}
		else
		{
			*uParam2 = { vVar33 + Vector(fVar42, fVar42, fVar42) * __LIB_1__::func_868(vVar33, Var0[3 /*4*/], 1065353216 /* Float: 1f */) };
		}
		uParam2->f_3 = __LIB_0__::func_152(*uParam2, vVar33, 1);
	}
	else
	{
		*uParam2 = { __LIB_3__::func_508(Global_35, iParam0->f_154.f_1, "player", "PB_HANDOVER", 1) };
		uParam2->f_3 = __LIB_0__::func_152(*uParam2, ENTITY::GET_ENTITY_COORDS(iParam0->f_7, true, false), 1);
	}
	return 1;
}

int func_1511(int iParam0, var uParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, float fParam12)
{
	int iVar0;
	var uVar1;
	struct<11> Var2;
	int iVar13;
	if (!__LIB_0__::func_71(iParam0))
	{
		if (bParam11)
		{
			iVar0 = __LIB_0__::func_398(7);
		}
		else
		{
			iVar0 = PED::_GET_LAST_MOUNT(iParam0);
		}
		if (!__LIB_0__::func_272(iVar0, 1) || (!(VOLUME::_DOES_VOLUME_EXIST(iParam5) && __LIB_1__::func_205(iVar0, iParam5, 1, 0)) && __LIB_0__::func_665(iParam0, iVar0, 1, 1) > fParam6))
		{
			return 1;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (__LIB_1__::func_16(iVar0) && __LIB_0__::func_402(iVar0) != 1)
			{
				Var2.f_10 = 7;
				Var2.f_1 = 1;
				*uParam1 = __LIB_1__::func_854(&uVar1, &Var2);
				if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
				{
					*uParam1 = iVar0;
				}
			}
			else
			{
				*uParam1 = iVar0;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			return 1;
		}
		if (__LIB_0__::func_272(*uParam1, 1))
		{
			if (!(__LIB_0__::func_163(*uParam1, 518218985) || __LIB_0__::func_163(*uParam1, 713668775)))
			{
				TASK::CLEAR_PED_TASKS(*uParam1, true, false);
				iVar13 = 0;
				if (!bParam10)
				{
					iVar13 = 16640;
				}
				FLOCK::_0xFF1E339CE40EAAAF(*uParam1, 0);
				POPULATION::_0xF74E134F40192884(*uParam1, 2);
				if (!__LIB_0__::func_86(vParam2))
				{
					bParam8 = false;
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam1, vParam2, fParam12, -1, 0.25f, 0, 40000f);
				}
				if (VOLUME::_DOES_VOLUME_EXIST(iParam5))
				{
					POPULATION::_0xB56D41A694E42E86(iParam5, 2048, 0, 0, -1, -1, 2);
					if (bParam8)
					{
						TASK::_TASK_SMART_FLEE_STYLE_COORD(*uParam1, VOLUME::_GET_VOLUME_COORDS(iParam5), iParam7, iVar13, fParam6, 6000, 0);
					}
				}
				if (!bParam8 && __LIB_0__::func_86(vParam2))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(*uParam1, iParam0, iParam7, iVar13, fParam6, 6000, 0);
				}
			}
		}
	}
	return 0;
}

bool func_1512(int iParam0)
{
	switch (iParam0->f_210)
	{
		case 0:
			__LIB_1__::func_148(&(iParam0->f_212));
			iParam0->f_210++;
			break;
		case 1:
			if (__LIB_1__::func_285(&(iParam0->f_212), 14f))
			{
				__LIB_2__::func_478(iParam0->f_7, Global_35, "RE_HEC_UNI_V1_TAKEORNOT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				if (__LIB_18__::func_669(iParam0) == 2 || __LIB_18__::func_669(iParam0) == 1)
				{
					func_2039(iParam0, "SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER", "DO_U_WANT_IT_PAMP_HERBALIST");
				}
				else
				{
					func_2039(iParam0, "SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "DO_U_WANT_IT_HERBALIST");
				}
				iParam0->f_210++;
			}
			break;
		case 2:
			if (TASK::GET_SEQUENCE_PROGRESS(iParam0->f_7) == 1)
			{
				__LIB_1__::func_148(&(iParam0->f_212));
				iParam0->f_210++;
			}
			break;
		case 3:
			if (__LIB_1__::func_285(&(iParam0->f_212), 5f))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_1517(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	__LIB_13__::func_823(iParam0, 10f, 0);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (bParam2)
	{
		if (__LIB_18__::func_669(iParam0) == 2 || __LIB_18__::func_669(iParam0) == 1)
		{
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, "SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER", "DECLINE_PAMP_HERBALIST", Global_35, __LIB_3__::func_444("SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER", "DECLINE_PAMP_HERBALIST"), 8f, -8f, 8200, 0f, false, false, -1f, 0, 0, -1f);
		}
		else
		{
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, "SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "SERUM_DECLINE_HERBALIST", Global_35, __LIB_3__::func_444("SCRIPT_RE@SUSPENSION_TRAP@HANDOVER", "DONT_TAKE_OFFER_VICTIM"), 8f, -8f, 8200, 0f, false, false, -1f, 0, 0, -1f);
		}
	}
	__LIB_18__::func_659(iParam0, 1, iParam1, 1, 0, 1, 0);
	__LIB_1__::func_474(iParam0->f_7, &iVar0, 0, 0, 1, 1);
}

bool func_1518(int iParam0)
{
	switch (iParam0->f_241)
	{
		case 0:
			if (__LIB_18__::func_669(iParam0) == 2 || __LIB_18__::func_669(iParam0) == 1)
			{
				return __LIB_18__::func_689(Global_35, &(iParam0->f_175), "player", 5, &(iParam0->f_495), 1065353216 /* Float: 1f */, 1, 1);
			}
			else
			{
				return __LIB_18__::func_689(Global_35, &(iParam0->f_175), "player", 4, &(iParam0->f_495), 1065353216 /* Float: 1f */, 1, 1);
			}
			break;
		case 1:
			if (__LIB_18__::func_669(iParam0) == 2 || __LIB_18__::func_669(iParam0) == 1)
			{
				return __LIB_18__::func_689(Global_35, &(iParam0->f_154), "player", 5, &(iParam0->f_495), 1065353216 /* Float: 1f */, 1, 1);
			}
			else
			{
				return __LIB_18__::func_689(Global_35, &(iParam0->f_154), "player", 4, &(iParam0->f_495), 1065353216 /* Float: 1f */, 1, 1);
			}
			break;
	}
	return false;
}

void func_1519(int iParam0)
{
	int iVar0;
	__LIB_3__::func_447(&(iParam0->f_9), iParam0->f_7, 0);
	PED::_0x802092B07E3B1EEA(iParam0->f_7, Global_36, 3);
	if (!PED::_0xEC6935EBE0847B90(iParam0->f_7, Global_36))
	{
		if (!PED::_0x463803429297117C(iParam0->f_7, Global_36, 1, 0))
		{
			PED::_0xF1C03A5352243A30(iParam0->f_7);
		}
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (__LIB_0__::func_153(iParam0->f_7, 0, 1, 0) == joaat("WEAPON_UNARMED"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0->f_7, joaat("WEAPON_MELEE_KNIFE"), false, 0, false, false);
		TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
	}
	TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
	__LIB_1__::func_474(iParam0->f_7, &iVar0, 0, 0, 1, 1);
}

void func_1525(var uParam0)
{
	__LIB_1__::func_683(&(uParam0->f_73), 4);
}

bool func_1534(int iParam0)
{
	if ((AUDIO::_0xFE5C6177064BD390(1) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) || AUDIO::IS_ANY_SPEECH_PLAYING(iParam0->f_7))
	{
		__LIB_4__::func_340(&(iParam0->f_284.f_21[0 /*17*/]));
		__LIB_4__::func_340(&(iParam0->f_284.f_21[1 /*17*/]));
	}
	switch (iParam0->f_474)
	{
		case 0:
			if (!__LIB_13__::func_749(iParam0, 0))
			{
				__LIB_13__::func_831(&(iParam0->f_284), 0, 1);
			}
			__LIB_13__::func_831(&(iParam0->f_284), 1, 1);
			__LIB_13__::func_744(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_WASTING");
			func_1478(&(iParam0->f_284));
			iParam0->f_474 = 1;
			break;
		case 1:
			__LIB_13__::func_733(iParam0, 0);
			__LIB_13__::func_733(iParam0, 1);
			__LIB_13__::func_832(&(iParam0->f_284), 1);
			__LIB_13__::func_744(&(iParam0->f_284), 0, "RE_HEC_UNI_V1_LEAVEYOU");
			__LIB_4__::func_317(&(iParam0->f_284), 0, __LIB_2__::func_460(8));
			__LIB_13__::func_744(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_KILLYOU");
			__LIB_4__::func_317(&(iParam0->f_284), 1, __LIB_2__::func_460(10));
			func_1478(&(iParam0->f_284));
			iParam0->f_474 = 2;
			break;
		case 2:
		case 3:
			return true;
	}
	return false;
}

void func_1539(int* iParam0)
{
	__LIB_2__::func_451(iParam0, 0);
	iParam0->f_75 = 0;
}

bool func_1540(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam0->f_7, 0))
	{
		if (iParam0->f_203 != 0)
		{
			iParam0->f_203 = 0;
		}
		return false;
	}
	if (__LIB_13__::func_742(iParam0, 262144))
	{
		return false;
	}
	*iParam1 = func_2049(iParam0);
	*bParam2 = 0;
	*bParam3 = (__LIB_13__::func_742(iParam0, 65536) || __LIB_18__::func_691(iParam0, *iParam1, 0));
	*bParam4 = (*bParam3 && !__LIB_13__::func_780(iParam0, joaat("SCRIPT_COMMON_STAND_HERBALIST")));
	*bParam5 = (__LIB_13__::func_742(iParam0, 16) && PED::_0x569F1E1237508DEB(iParam0->f_7) == joaat("SCRIPT_COMMON_MIX_MORTAR_HERBALIST"));
	return true;
}

int func_1541(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam4 && __LIB_13__::func_780(iParam0, joaat("SCRIPT_COMMON_STAND_HERBALIST")))
	{
		__LIB_1__::func_148(&(iParam0->f_441));
		return 4;
	}
	else if (__LIB_19__::func_301(iParam0, &bParam2, iParam1, 1))
	{
		return __LIB_18__::func_686(iParam0, bParam2, 1);
	}
	else if (func_1492(iParam0, bParam4, bParam5, 0))
	{
		return 3;
	}
	return 2;
}

int func_1544(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (TASK::_0x79197F7D2BB5E73A(iParam0->f_7, iParam0->f_89, "SCRIPT_COMMON@SHARED_SCENARIOS@STAND@RANDOM@HERBALIST@MIX_MORTAR@TRANSITIONS@STAND_2_SIT", "STAND_2_SIT", __LIB_13__::func_768(joaat("WORLD_HUMAN_SIT_GROUND_MALE_A")), 0))
	{
		return 7;
	}
	return 6;
}

int func_1546(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	__LIB_1__::func_148(&(iParam0->f_447));
	return 12;
}

int func_1548(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (TASK::_0x79197F7D2BB5E73A(iParam0->f_7, iParam0->f_87, "SCRIPT_COMMON@SHARED_SCENARIOS@STAND@RANDOM@HERBALIST@MIX_MORTAR@TRANSITIONS@SIT_2_STAND", "SIT_2_STAND", __LIB_13__::func_768(joaat("SCRIPT_COMMON_STAND_HERBALIST")), 0))
	{
		return 15;
	}
	return 14;
}

int func_1551(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	__LIB_13__::func_808(iParam0->f_7);
	switch (__LIB_18__::func_693(iParam0, iParam1))
	{
		case 0:
			__LIB_18__::func_694(iParam0);
			break;
		case 1:
			__LIB_18__::func_694(iParam0);
			break;
		case 2:
			__LIB_1__::func_148(&(iParam0->f_444));
			return 20;
	}
	return 19;
}

bool func_1553(int iParam0)
{
	return __LIB_0__::func_27(iLocal_808, iParam0);
}

void func_1554(int iParam0)
{
	__LIB_1__::func_683(&iLocal_808, iParam0);
}

int func_1556(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_2060(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_3__::func_156(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
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

void func_1561(int* iParam0, bool bParam1)
{
	__LIB_13__::func_832(iParam0, !bParam1);
}

void func_1585()
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
	iVar0 = func_2077(6291456, 0);
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

void func_1592(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1592(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1592(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_1734(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			__LIB_0__::func_803(1497516462);
			__LIB_0__::func_804(2016141805);
			__LIB_0__::func_804(1010885152);
			__LIB_0__::func_804(-502324015);
			break;
		case 2016141805:
			__LIB_0__::func_804(1497516462);
			__LIB_0__::func_803(2016141805);
			__LIB_0__::func_804(1010885152);
			__LIB_0__::func_804(-502324015);
			break;
		case 1010885152:
			__LIB_0__::func_804(1497516462);
			__LIB_0__::func_804(2016141805);
			__LIB_0__::func_803(1010885152);
			__LIB_0__::func_804(-502324015);
			break;
		case -502324015:
			__LIB_0__::func_804(1497516462);
			__LIB_0__::func_804(2016141805);
			__LIB_0__::func_804(1010885152);
			__LIB_0__::func_803(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			__LIB_0__::func_804(-538889627);
			__LIB_0__::func_804(-538880323);
			__LIB_0__::func_804(-1056767524);
			__LIB_0__::func_803(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			__LIB_1__::func_73();
			__LIB_0__::func_803(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			__LIB_1__::func_74();
			__LIB_0__::func_803(iParam0);
			break;
		case 2019386373:
			__LIB_0__::func_804(-664252410);
			__LIB_0__::func_804(2109952320);
			__LIB_0__::func_803(2019386373);
			break;
		case -664252410:
			__LIB_0__::func_804(2019386373);
			__LIB_0__::func_804(2109952320);
			__LIB_0__::func_803(-664252410);
			break;
		case 2109952320:
			__LIB_0__::func_804(2019386373);
			__LIB_0__::func_804(-664252410);
			__LIB_0__::func_803(2109952320);
			break;
		case -1674179981:
			__LIB_0__::func_804(-1835851517);
			__LIB_0__::func_804(-1838352012);
			__LIB_0__::func_803(-1674179981);
			Jump @2852; //curOff = 856
			__LIB_0__::func_804(-1674179981);
			__LIB_0__::func_804(-1838352012);
			__LIB_0__::func_803(-1835851517);
			Jump @2852; //curOff = 886
			__LIB_0__::func_804(-1674179981);
			__LIB_0__::func_804(-1835851517);
			__LIB_0__::func_803(-1838352012);
			Jump @2852; //curOff = 916
			__LIB_0__::func_804(210001842);
			__LIB_0__::func_803(-1717960576);
			Jump @2852; //curOff = 937
			__LIB_0__::func_804(-1717960576);
			__LIB_0__::func_803(210001842);
			Jump @2852; //curOff = 958
			__LIB_0__::func_804(-1271608261);
			__LIB_0__::func_804(1846061697);
			__LIB_0__::func_804(-1145519186);
			__LIB_0__::func_803(-150493654);
			Jump @2852; //curOff = 997
			__LIB_0__::func_804(-150493654);
			__LIB_0__::func_804(1846061697);
			__LIB_0__::func_804(-1145519186);
			__LIB_0__::func_803(-1271608261);
			Jump @2852; //curOff = 1036
			__LIB_0__::func_804(-150493654);
			__LIB_0__::func_804(-1271608261);
			__LIB_0__::func_804(-1145519186);
			__LIB_0__::func_803(1846061697);
			Jump @2852; //curOff = 1075
			__LIB_0__::func_804(-150493654);
			__LIB_0__::func_804(-1271608261);
			__LIB_0__::func_804(1846061697);
			__LIB_0__::func_803(-1145519186);
			Jump @2852; //curOff = 1114
			__LIB_0__::func_804(280705402);
			__LIB_0__::func_804(1926308480);
			__LIB_0__::func_803(1766284049);
			Jump @2852; //curOff = 1144
			__LIB_0__::func_804(1766284049);
			__LIB_0__::func_804(1926308480);
			__LIB_0__::func_803(280705402);
			Jump @2852; //curOff = 1174
			__LIB_0__::func_804(1766284049);
			__LIB_0__::func_804(280705402);
			__LIB_0__::func_803(1926308480);
			Jump @2852; //curOff = 1204
			if (bParam1)
			{
				__LIB_0__::func_804(439465264);
				__LIB_0__::func_803(1609506757);
			}
			else
			{
				__LIB_0__::func_804(1609506757);
				__LIB_0__::func_804(439465264);
			}
			Jump @2852; //curOff = 1251
			if (__LIB_0__::func_898(1609506757))
			{
				if (bParam1)
				{
					__LIB_0__::func_803(439465264);
				}
				else
				{
					__LIB_0__::func_804(439465264);
				}
			}
			Jump @2852; //curOff = 1292
			__LIB_0__::func_804(-1612662716);
			__LIB_0__::func_803(1822001510);
			Jump @2852; //curOff = 1313
			__LIB_0__::func_804(1822001510);
			__LIB_0__::func_803(-1612662716);
			Jump @2852; //curOff = 1334
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(1306158345);
			Jump @2852; //curOff = 1382
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(1952610440);
			Jump @2852; //curOff = 1430
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(-223469678);
			Jump @2852; //curOff = 1478
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(-404698347);
			Jump @2852; //curOff = 1526
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_803(1517904467);
			Jump @2852; //curOff = 1574
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(1376646519);
			Jump @2852; //curOff = 1622
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(931649776);
			Jump @2852; //curOff = 1670
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(-434590080);
			Jump @2852; //curOff = 1718
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(1743048395);
			Jump @2852; //curOff = 1766
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_803(449774763);
			Jump @2852; //curOff = 1814
			__LIB_0__::func_804(38162571);
			__LIB_0__::func_804(1350391819);
			__LIB_0__::func_804(54073871);
			__LIB_0__::func_803(-1414537028);
			Jump @2852; //curOff = 1853
			__LIB_0__::func_804(-1414537028);
			__LIB_0__::func_804(1350391819);
			__LIB_0__::func_804(54073871);
			__LIB_0__::func_803(38162571);
			Jump @2852; //curOff = 1892
			__LIB_0__::func_804(-1414537028);
			__LIB_0__::func_804(38162571);
			__LIB_0__::func_804(54073871);
			__LIB_0__::func_803(1350391819);
			Jump @2852; //curOff = 1931
			__LIB_0__::func_804(-1414537028);
			__LIB_0__::func_804(38162571);
			__LIB_0__::func_804(1350391819);
			__LIB_0__::func_803(54073871);
			Jump @2852; //curOff = 1970
			__LIB_0__::func_803(198200492);
			__LIB_0__::func_804(-1124061431);
			__LIB_0__::func_804(52706132);
			__LIB_0__::func_804(-259123672);
			Jump @2852; //curOff = 2009
			__LIB_0__::func_804(198200492);
			__LIB_0__::func_803(-1124061431);
			__LIB_0__::func_804(52706132);
			__LIB_0__::func_804(-259123672);
			Jump @2852; //curOff = 2048
			__LIB_0__::func_804(198200492);
			__LIB_0__::func_804(-1124061431);
			__LIB_0__::func_803(52706132);
			__LIB_0__::func_804(-259123672);
			Jump @2852; //curOff = 2087
			__LIB_0__::func_804(198200492);
			__LIB_0__::func_804(-1124061431);
			__LIB_0__::func_804(52706132);
			__LIB_0__::func_803(-259123672);
			Jump @2852; //curOff = 2126
			__LIB_0__::func_803(-919512195);
			__LIB_0__::func_804(-1925798111);
			__LIB_0__::func_804(420709909);
			__LIB_0__::func_804(1703426636);
			Jump @2852; //curOff = 2165
			__LIB_0__::func_803(-1925798111);
			__LIB_0__::func_804(-919512195);
			__LIB_0__::func_804(420709909);
			__LIB_0__::func_804(1703426636);
			Jump @2852; //curOff = 2204
			__LIB_0__::func_803(420709909);
			__LIB_0__::func_804(-919512195);
			__LIB_0__::func_804(-1925798111);
			__LIB_0__::func_804(1703426636);
			Jump @2852; //curOff = 2243
			__LIB_0__::func_803(1703426636);
			__LIB_0__::func_804(-919512195);
			__LIB_0__::func_804(-1925798111);
			__LIB_0__::func_804(420709909);
			Jump @2852; //curOff = 2282
			__LIB_0__::func_803(-1223121209);
			__LIB_0__::func_804(630808005);
			Jump @2852; //curOff = 2303
			__LIB_0__::func_803(630808005);
			__LIB_0__::func_804(-1223121209);
			Jump @2852; //curOff = 2324
			__LIB_0__::func_803(1453909576);
			__LIB_0__::func_804(1643531967);
			Jump @2852; //curOff = 2345
			__LIB_0__::func_803(1643531967);
			__LIB_0__::func_804(1453909576);
			Jump @2852; //curOff = 2366
			__LIB_0__::func_803(0);
			__LIB_0__::func_804(473295046);
			__LIB_0__::func_804(-1738165526);
			Jump @2852; //curOff = 2392
			__LIB_0__::func_803(473295046);
			__LIB_0__::func_804(0);
			__LIB_0__::func_804(-1738165526);
			Jump @2852; //curOff = 2418
			__LIB_0__::func_803(-1738165526);
			__LIB_0__::func_804(0);
			__LIB_0__::func_804(473295046);
			Jump @2852; //curOff = 2444
			__LIB_0__::func_803(932909855);
			__LIB_0__::func_804(2051822093);
			Jump @2852; //curOff = 2465
			__LIB_0__::func_803(2051822093);
			__LIB_0__::func_804(932909855);
			Jump @2852; //curOff = 2486
			__LIB_0__::func_803(405586984);
			__LIB_0__::func_804(1509509592);
			__LIB_0__::func_804(-959357075);
			__LIB_0__::func_804(-1311865656);
			Jump @2852; //curOff = 2525
			__LIB_0__::func_803(1509509592);
			__LIB_0__::func_804(405586984);
			__LIB_0__::func_804(-959357075);
			__LIB_0__::func_804(-1311865656);
			Jump @2852; //curOff = 2564
			__LIB_0__::func_803(-959357075);
			__LIB_0__::func_804(1509509592);
			__LIB_0__::func_804(405586984);
			__LIB_0__::func_804(-1311865656);
			Jump @2852; //curOff = 2603
			__LIB_0__::func_803(-1311865656);
			__LIB_0__::func_804(1509509592);
			__LIB_0__::func_804(-959357075);
			__LIB_0__::func_804(405586984);
			Jump @2852; //curOff = 2642
			if (bParam1)
			{
				__LIB_0__::func_803(-524145696);
			}
			else
			{
				__LIB_0__::func_804(-524145696);
			}
			__LIB_0__::func_804(1626481264);
			__LIB_0__::func_804(282809459);
			Jump @2852; //curOff = 2689
			__LIB_0__::func_803(282809459);
			__LIB_0__::func_804(1626481264);
			__LIB_0__::func_804(-524145696);
			Jump @2852; //curOff = 2719
			__LIB_0__::func_803(1626481264);
			__LIB_0__::func_804(-524145696);
			__LIB_0__::func_804(282809459);
			Jump @2852; //curOff = 2749
			if (bParam1)
			{
				__LIB_0__::func_803(885203519);
			}
			else
			{
				__LIB_0__::func_804(885203519);
			}
			Jump @2852; //curOff = 2778
			if (bParam1)
			{
				__LIB_0__::func_803(-1080627546);
			}
			else
			{
				__LIB_0__::func_804(-1080627546);
			}
			Jump @2852; //curOff = 2807
			if (bParam1)
			{
				if (!__LIB_0__::func_898(iParam0))
				{
					__LIB_0__::func_803(iParam0);
				}
			}
			else if (__LIB_0__::func_898(iParam0))
			{
				__LIB_0__::func_804(iParam0);
			}
		}
void func_1735(int iParam0)
{
	if (!__LIB_0__::func_448(iParam0))
	{
		__LIB_0__::func_549(__LIB_0__::func_548(iParam0));
	}
}

void func_1774(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_672(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_672(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_672(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2191(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_675(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1197(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2197(Var0);
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

void func_1777(bool bParam0)
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
		func_672(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_672(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_672(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_672(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_672(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_672(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_672(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_672(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_672(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_672(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_672(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1197(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1197(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1197(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1197(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1197(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1197(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1197(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1197(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1197(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1197(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1197(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

void func_1785(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (__LIB_0__::func_192(iParam0, 606799272))
		{
			func_2213(iParam0, iParam1);
		}
		if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_12__::func_788(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1816(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1816(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1816(iVar63, -915411861, 1, 0, 0));
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

int func_1825(int iParam0)
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
			Jump @9446; //curOff = 1960
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
			Jump @9446; //curOff = 2481
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
			Jump @9446; //curOff = 2920
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
			Jump @9446; //curOff = 3515
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
			Jump @9446; //curOff = 4298
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
			Jump @9446; //curOff = 4382
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GUARMA");
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			Jump @9446; //curOff = 4473
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
			Jump @9446; //curOff = 5584
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
			Jump @9446; //curOff = 6027
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
			Jump @9446; //curOff = 6716
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
			Jump @9446; //curOff = 7288
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
			Jump @9446; //curOff = 7860
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GAPTOOTH_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, -5420f, -3447.5f, 150f, 0f, 0f, 175f, 300f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5837.5f, -3530f, 150f, 0f, 0f, -32f, 1000f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -6142.5f, -3665f, 150f, 0f, 0f, -8f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5747.5f, -2905f, 150f, 0f, 0f, 136.5f, 1300f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5407.5f, -2487.5f, 150f, 0f, 0f, -148f, 550f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5232.5f, -2825f, 150f, 0f, 0f, -178f, 400f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5667.5f, -2040f, 150f, 0f, 0f, 175f, 1100f, 800f, 700f);
			Jump @9446; //curOff = 8174
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
			Jump @9446; //curOff = 8875
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
bool func_1826(int iParam0)
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

bool func_1935(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	switch (iParam1)
	{
		case 43:
			break;
		case 19:
			break;
		case 18:
			break;
		case 40:
			break;
		default:
			return false;
	}
	if (bParam2)
	{
		return __LIB_3__::func_632(uParam0, __LIB_13__::func_783(iParam1), 324999, 230219, iParam3, 0, 0, 0, 0);
	}
	return __LIB_3__::func_632(uParam0, __LIB_13__::func_784(iParam1), 324999, 230219, iParam3, 0, 0, 0, 0);
}

int func_1938(int iParam0, var uParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	if (bParam6)
	{
		__LIB_3__::func_306(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && __LIB_3__::func_278(uParam1))
	{
		iVar0 = PED::_0xEAF682A14F8E5F53(uParam1->f_5, vParam2, bParam5, 1, 1, iParam9, iParam10);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = __LIB_4__::func_205(iParam0, vParam2, bParam5, 1, 1, 0, 1, bParam8, 1, 0, 0, 0, 0);
		}
		else if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam1->f_5))
		{
			PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = __LIB_4__::func_205(iParam0, vParam2, bParam5, 1, 1, 0, 1, bParam8, 1, 0, 0, 0, 0);
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	else
	{
		EVENT::_0x9520175B35E2268D(iVar0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		if (uParam1->f_10)
		{
			if (PED::IS_PED_HUMAN(iVar0))
			{
				PED::_0x0FB1BA7FF73B41E1(iVar0, uParam1->f_4, 0);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_23)) && !__LIB_0__::func_125(iVar0))
		{
			__LIB_2__::func_133(iVar0, &(uParam1->f_23), 0);
		}
		if (__LIB_0__::func_125(iVar0))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 48, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 307, true);
		}
		if (__LIB_3__::func_242(&(uParam1->f_22)))
		{
			PED::SET_PED_CAN_RAGDOLL(iVar0, true);
			PED::SET_PED_TO_RAGDOLL(iVar0, 1000, 1000, 1, false, false, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 186, !__LIB_3__::func_243(&(uParam1->f_22)));
			__LIB_1__::func_864(iVar0, __LIB_3__::func_244(&(uParam1->f_22)), 0);
		}
		else
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar0);
		}
		if (__LIB_3__::func_245(&(uParam1->f_22)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		}
		if (__LIB_3__::func_246(&(uParam1->f_22)))
		{
			__LIB_3__::func_174(iVar0, 1);
		}
		ENTITY::_0xA91E6CF94404E8C9(iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 6, __LIB_3__::func_247(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(iVar0, 393, true);
		if (!__LIB_0__::func_27(uParam1->f_22, 8192))
		{
			ENTITY::_SET_ENTITY_SOMETHING(iVar0, true);
		}
		if (!__LIB_0__::func_125(iVar0))
		{
			__LIB_3__::func_176(iVar0, !__LIB_3__::func_175(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 4, __LIB_3__::func_177(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 297, !__LIB_3__::func_279(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 317, !__LIB_3__::func_279(&(uParam1->f_22)));
			if (uParam1->f_31 != joaat("REL_NO_RELATIONSHIP"))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, uParam1->f_31);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::IS_PED_HUMAN(iVar0))
		{
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatPed", true);
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatCriminal", *uParam1 == 22);
		}
	}
	return iVar0;
}

int func_1948(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	iVar0 = 0;
	if (__LIB_13__::func_754(iParam0, iParam1) != 0)
	{
		iVar1 = __LIB_13__::func_785(iParam0, iParam1);
		vVar2 = { __LIB_13__::func_786(iParam0, iParam1) };
		vVar5 = { __LIB_13__::func_787(iParam0, iParam1) };
		iVar8 = __LIB_13__::func_754(iParam0, iParam1);
		iVar0 = __LIB_4__::func_205(iVar8, vVar2, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		ENTITY::SET_ENTITY_ROTATION(iVar0, vVar5, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, MISC::IS_BIT_SET(iVar1, 0));
		ENTITY::SET_ENTITY_COLLISION(iVar0, !MISC::IS_BIT_SET(iVar1, 1), false);
		PED::SET_PED_CAN_BE_TARGETTED(iVar0, !MISC::IS_BIT_SET(iVar1, 2));
	}
	return iVar0;
}

void func_1966(int iParam0, var uParam1)
{
	int iVar0;
	iParam0->f_511 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (__LIB_18__::func_698(iParam0, uParam1, iVar0))
		{
			MISC::SET_BIT(&(iParam0->f_511), iVar0);
		}
		iVar0++;
	}
}

void func_1967(int iParam0, int iParam1)
{
	if (__LIB_19__::func_293(iParam0, 1))
	{
	}
	else
	{
		__LIB_13__::func_724(iParam0, 41);
		iParam0->f_516 = 0;
		if (__LIB_0__::func_75(&(iParam0->f_459)))
		{
			if (__LIB_0__::func_33(&(iParam0->f_459)))
			{
				__LIB_2__::func_113(&(iParam0->f_459));
			}
		}
		func_1999(&(iParam0->f_284), 1);
		iParam0->f_523 = iParam1;
	}
}

void func_1982(var uParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	__LIB_13__::func_817(uParam0[0 /*17*/], __LIB_2__::func_460(7), sParam1, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_13__::func_817(uParam0[1 /*17*/], __LIB_2__::func_460(10), sParam2, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	if (!bParam4)
	{
		__LIB_13__::func_817(uParam0[2 /*17*/], __LIB_2__::func_460(12), sParam3, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			__LIB_2__::func_411(uParam0[2 /*17*/], 0, 0);
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		__LIB_2__::func_411(uParam0[0 /*17*/], 0, 0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		__LIB_2__::func_411(uParam0[1 /*17*/], 0, 0);
	}
}

void func_1999(var uParam0, bool bParam1)
{
	if (bParam1 || !__LIB_0__::func_27(uParam0->f_73, 16))
	{
		__LIB_13__::func_800(uParam0, &(uParam0->f_76), 0);
		__LIB_19__::func_307(&(uParam0->f_21), &(uParam0->f_97), 1);
		__LIB_1__::func_683(&(uParam0->f_73), 16);
	}
}

void func_2010(int* iParam0, bool bParam1)
{
	if (__LIB_0__::func_27(iParam0->f_73, 1) != bParam1)
	{
		if (bParam1)
		{
			if (!__LIB_0__::func_27(iParam0->f_73, 2))
			{
				__LIB_1__::func_683(&(iParam0->f_73), 1);
				__LIB_4__::func_317(iParam0, 0, __LIB_2__::func_460(24));
			}
		}
		else
		{
			__LIB_1__::func_681(&(iParam0->f_73), 1);
			__LIB_4__::func_317(iParam0, 0, __LIB_2__::func_460(7));
		}
	}
}

char* func_2011(int iParam0)
{
	switch (*iParam0)
	{
		case 43:
			return "RE_HEC_UNI_V1_YARROWGOOD";
		case 18:
			return "RE_HEC_UNI_V1_FANCY";
		case 19:
			return "RE_HEC_UNI_V1_WHATGOOD";
		case 40:
			return "RE_HEC_UNI_V1_FEVERFEW";
		default:
			break;
	}
	return "";
}

void func_2013(int iParam0)
{
	int iVar0;
	if (!func_1489(iParam0))
	{
		iVar0 = __LIB_4__::func_126(*iParam0);
		if (iParam0->f_271 != iVar0)
		{
			func_1494(iParam0, iVar0, 0);
			iParam0->f_271 = iVar0;
		}
	}
	else if (!__LIB_13__::func_749(iParam0, 9))
	{
		__LIB_13__::func_831(&(iParam0->f_284), 1, 0);
		if (__LIB_13__::func_727(iParam0, 62))
		{
			__LIB_13__::func_730(iParam0, 62);
		}
		__LIB_13__::func_733(iParam0, 9);
	}
}

int func_2014(int iParam0)
{
	if (__LIB_19__::func_293(iParam0, 1))
	{
		return 0;
	}
	switch (iParam0->f_433)
	{
		case 0:
			__LIB_13__::func_733(iParam0, 8);
			__LIB_13__::func_831(&(iParam0->f_284), 2, 0);
			__LIB_13__::func_831(&(iParam0->f_284), 0, 0);
			__LIB_13__::func_831(&(iParam0->f_284), 1, 0);
			if (__LIB_13__::func_727(iParam0, 1))
			{
				__LIB_18__::func_652(12);
			}
			func_1478(&(iParam0->f_284));
			return 1;
		case -1:
			func_2330(iParam0);
			if (func_1489(iParam0))
			{
				if (!__LIB_13__::func_749(iParam0, 9))
				{
					__LIB_13__::func_831(&(iParam0->f_284), 1, 0);
					if (__LIB_13__::func_727(iParam0, 62))
					{
						__LIB_13__::func_730(iParam0, 62);
					}
					__LIB_13__::func_733(iParam0, 9);
				}
				return 3;
			}
			else if (!__LIB_19__::func_293(iParam0, 1))
			{
				if (func_2331(iParam0))
				{
					__LIB_13__::func_730(iParam0, 13);
					__LIB_0__::func_325(&(iParam0->f_9));
					__LIB_13__::func_730(iParam0, 62);
					__LIB_18__::func_654(iParam0);
					__LIB_0__::func_769();
					iParam0->f_1 = 11;
				}
			}
			else
			{
				__LIB_1__::func_148(&(iParam0->f_508));
			}
			break;
	}
	return 0;
}

char* func_2015(int iParam0)
{
	switch (*iParam0)
	{
		case 43:
			return "RE_HEC_UNI_V1_BENEFITS";
		case 18:
			return "RE_HEC_UNI_V1_BYANYMEANS";
		case 19:
			return "RE_HEC_UNI_V1_ELABORATE";
		case 40:
			return "RE_HEC_UNI_V1_KEEPMEGOING";
		default:
			break;
	}
	return "";
}

void func_2016(int iParam0, float fParam1)
{
	if (!__LIB_0__::func_75(&(iParam0->f_505)))
	{
		__LIB_1__::func_148(&(iParam0->f_505));
	}
	iParam0->f_211 = (iParam0->f_211 + fParam1);
}

int func_2017(int iParam0, var uParam1)
{
	switch (iParam0->f_433)
	{
		case 0:
			__LIB_13__::func_832(&(iParam0->f_284), 0);
			__LIB_13__::func_730(iParam0, 62);
			func_1478(&(iParam0->f_284));
			return 4;
		case -1:
			func_2332(iParam0);
			__LIB_13__::func_801(&(iParam0->f_284), 0, 5f, __LIB_0__::func_665(Global_35, iParam0->f_7, 1, 1));
			func_2334(iParam0, uParam1, 2f);
			if (!__LIB_19__::func_293(iParam0, 1))
			{
				if (!__LIB_13__::func_727(iParam0, 27))
				{
					if (iParam0->f_205 == 0)
					{
						if (func_2331(iParam0))
						{
							__LIB_13__::func_730(iParam0, 13);
							__LIB_0__::func_325(&(iParam0->f_9));
							__LIB_13__::func_730(iParam0, 62);
							__LIB_18__::func_654(iParam0);
							__LIB_0__::func_769();
							iParam0->f_1 = 11;
						}
					}
				}
			}
			else
			{
				__LIB_1__::func_148(&(iParam0->f_508));
			}
			break;
	}
	return 0;
}

bool func_2021(int iParam0)
{
	if (__LIB_3__::func_962(&(iParam0->f_133), __LIB_13__::func_759(*iParam0)))
	{
		if (__LIB_18__::func_689(Global_35, &(iParam0->f_133), "player", __LIB_13__::func_759(*iParam0), &(iParam0->f_495), 1065353216 /* Float: 1f */, 1, 1))
		{
			return true;
		}
	}
	return false;
}

void func_2039(int iParam0, char* sParam1, char* sParam2)
{
	int iVar0;
	if (__LIB_18__::func_669(iParam0) == 2 || __LIB_18__::func_669(iParam0) == 1)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sParam1, sParam2, Global_35, __LIB_3__::func_444(sParam1, sParam2), 8f, -8f, 8200, 0f, false, false, -1f, 0, 0, -1f);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, "SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER", "PAMP_LOOP_HERBALIST", Global_35, -1, 8f, -8f, 8201, 0f, false, false, -1f, 0, 0, -1f);
		__LIB_1__::func_474(iParam0->f_7, &iVar0, 0, 0, 1, 1);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sParam1, sParam2, Global_35, __LIB_3__::func_444(sParam1, sParam2), 8f, -8f, 8200, 0f, false, false, -1f, 0, 0, -1f);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, "SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "SERUM_LOOP_HERBALIST", Global_35, -1, 8f, -8f, 8201, 0f, false, false, -1f, 0, 0, -1f);
		__LIB_1__::func_474(iParam0->f_7, &iVar0, 0, 0, 1, 1);
	}
}

int func_2049(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_13__::func_743(iParam0->f_472);
	if (iParam0->f_473 != 0)
	{
		iVar0 = (iVar0 || iParam0->f_473);
	}
	__LIB_0__::func_516(&iVar0, 1);
	return iVar0;
}

int func_2060(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		if (__LIB_2__::func_525(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_4__::func_163(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_2060(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					__LIB_2__::func_344(uParam0);
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
					if (__LIB_4__::func_165(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_2__::func_589(*uParam0, iParam1, uParam3))
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
				if (__LIB_2__::func_473(uParam0, iParam1, fParam4, bVar6))
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
					__LIB_4__::func_165(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
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
				if (__LIB_2__::func_473(uParam0, iParam1, fParam4, bVar6))
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

int func_2077(int iParam0, int iParam1)
{
	var uVar0;
	return func_2373(&uVar0, iParam0, iParam1);
}

void func_2191(int iParam0)
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
	func_1197(iParam0, 1, 1, -142743235, 1);
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
		func_1197(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_2197(struct<6> Param0)
{
	if (!func_2446(Param0.f_4, 1))
	{
	}
	if (!func_2446(Param0, 1))
	{
	}
	if (!func_2446(Param0.f_2, 1))
	{
	}
	if (!func_2446(Param0.f_5, 1))
	{
	}
	if (!func_2446(Param0.f_3, 1))
	{
	}
	if (!func_2446(Param0.f_1, 1))
	{
	}
}

void func_2213(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_1__::func_154(43))
		{
			if (__LIB_0__::func_192(iParam0, 412399755))
			{
				func_1735(joaat("EXOTIC_STAGE_01"));
				if (__LIB_0__::func_944() == 0)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 1);
					if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (__LIB_1__::func_154(44))
		{
			if (__LIB_0__::func_192(iParam0, 709057512))
			{
				func_1735(joaat("EXOTIC_STAGE_02"));
				if (__LIB_0__::func_944() == 1)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 2);
					if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_1__::func_154(45))
		{
			if (__LIB_0__::func_192(iParam0, -1478961327))
			{
				func_1735(joaat("EXOTIC_STAGE_03"));
				if (__LIB_0__::func_944() == 2)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 4);
					if (((iParam0 == joaat("PROVISION_GATOR_EGG") || iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_1__::func_154(46))
		{
			if (__LIB_0__::func_192(iParam0, -1238404098))
			{
				func_1735(joaat("EXOTIC_STAGE_04"));
				if (__LIB_0__::func_944() == 3)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 8);
					if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_1__::func_154(47))
		{
			if (__LIB_0__::func_192(iParam0, 1160548794))
			{
				func_1735(joaat("EXOTIC_STAGE_05"));
				if (__LIB_0__::func_944() == 4)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 16);
					if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

void func_2330(int iParam0)
{
	if (!__LIB_13__::func_727(iParam0, 28))
	{
		if (!__LIB_0__::func_48(Global_35, iParam0->f_7, 20f, 1))
		{
			__LIB_13__::func_724(iParam0, 28);
			if (!func_2506(iParam0))
			{
				__LIB_13__::func_744(&(iParam0->f_284), 0, "RE_HEC_UNI_V1_LOOKING");
				func_1478(&(iParam0->f_284));
			}
		}
	}
}

bool func_2331(int iParam0)
{
	if (!__LIB_0__::func_75(&(iParam0->f_505)))
	{
		__LIB_1__::func_148(&(iParam0->f_505));
	}
	if (AUDIO::IS_ANY_SPEECH_PLAYING(iParam0->f_7) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
	{
		__LIB_1__::func_148(&(iParam0->f_505));
	}
	if (__LIB_0__::func_75(&(iParam0->f_508)))
	{
		if (!__LIB_1__::func_285(&(iParam0->f_508), 3f))
		{
			if (iParam0->f_209 < 6)
			{
				return false;
			}
		}
	}
	if (!__LIB_19__::func_293(iParam0, 1) && !__LIB_13__::func_749(iParam0, 7))
	{
		if (__LIB_0__::func_48(Global_35, iParam0->f_7, 10f, 1))
		{
			switch (iParam0->f_209)
			{
				case 0:
					if (__LIB_0__::func_265(&(iParam0->f_505)) > 8f)
					{
						func_2016(iParam0, 10f);
						iParam0->f_209++;
					}
					break;
				case 1:
					if (TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 0))
					{
						__LIB_2__::func_478(iParam0->f_7, Global_35, "RE_HEC_UNI_V1_REMINDER_A", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iParam0->f_209++;
					}
					break;
				case 2:
					if (!TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1))
					{
						iParam0->f_209++;
					}
					break;
				case 3:
					if (TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 0))
					{
						__LIB_2__::func_478(iParam0->f_7, Global_35, "RE_HEC_UNI_V1_REMINDER_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iParam0->f_209++;
					}
					break;
				case 4:
					if (!TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1))
					{
						iParam0->f_209++;
					}
					break;
				case 5:
					if (TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 0))
					{
						__LIB_2__::func_478(iParam0->f_7, Global_35, "RE_HEC_UNI_V1_FORGET", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iParam0->f_209++;
						return false;
					}
					break;
				default:
					return false;
			}
		}
	}
	return false;
}

void func_2332(int iParam0)
{
	switch (iParam0->f_205)
	{
		case 0:
			if (!__LIB_19__::func_293(iParam0, 1))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0->f_7, false);
				if (__LIB_13__::func_727(iParam0, 28))
				{
					if (__LIB_13__::func_830(iParam0, 131072))
					{
						if (!__LIB_13__::func_727(iParam0, 30))
						{
							__LIB_19__::func_484(iParam0, 1);
						}
						else if (!__LIB_13__::func_727(iParam0, 31))
						{
							if (__LIB_0__::func_48(Global_35, iParam0->f_7, 20f, 1))
							{
								__LIB_19__::func_484(iParam0, 3);
							}
						}
					}
				}
				else
				{
					func_2330(iParam0);
				}
			}
			break;
		case 1:
			if (!__LIB_19__::func_293(iParam0, 1))
			{
				if (__LIB_18__::func_665(iParam0, 0))
				{
					__LIB_13__::func_724(iParam0, 29);
					if (func_2507(iParam0))
					{
						__LIB_13__::func_724(iParam0, 59);
						TASK::TASK_PLAY_ANIM(iParam0->f_7, __LIB_13__::func_807(43, 1), "HEY_N_HERBALIST", 8f, -8f, -1, 67117072, 0f, false, 0, false, 0, false);
					}
					else
					{
						__LIB_13__::func_730(iParam0, 59);
						__LIB_2__::func_478(iParam0->f_7, Global_35, "RE_HEC_UNI_V1_PLAYER_RETURN_01", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					if (__LIB_0__::func_75(&(iParam0->f_462)))
					{
						__LIB_0__::func_37(&(iParam0->f_462));
					}
					iParam0->f_205 = 2;
				}
			}
			break;
		case 2:
			if (func_2508(iParam0))
			{
				if (__LIB_0__::func_48(Global_35, iParam0->f_7, 20f, 1))
				{
					__LIB_13__::func_724(iParam0, 30);
					__LIB_19__::func_484(iParam0, 3);
				}
				else if (!__LIB_0__::func_75(&(iParam0->f_462)))
				{
					__LIB_1__::func_148(&(iParam0->f_462));
				}
				else if (__LIB_1__::func_285(&(iParam0->f_462), 5f))
				{
					__LIB_0__::func_37(&(iParam0->f_462));
					__LIB_13__::func_730(iParam0, 29);
					func_2509(iParam0, 30);
				}
			}
			break;
		case 3:
			if (!__LIB_19__::func_293(iParam0, 1))
			{
				if (__LIB_18__::func_665(iParam0, 0))
				{
					__LIB_13__::func_724(iParam0, 29);
					if (func_2507(iParam0))
					{
						__LIB_13__::func_724(iParam0, 59);
						__LIB_18__::func_666(iParam0->f_7, *iParam0, "YARROW_RETURN_A_UPPER", "GCURRANT_RETURN_A_UPPER", "VSNOWDROP_RETURN_A_UPPER", "HBSAGE_RETURN_A", 1);
					}
					else
					{
						__LIB_13__::func_730(iParam0, 59);
						__LIB_2__::func_478(iParam0->f_7, Global_35, __LIB_13__::func_809(*iParam0, "RE_HEC_UNI_V1_YARROW_RETURN", "RE_HEC_UNI_V1_SAGE_RETURN", "RE_HEC_UNI_V1_CURRANT_RETURN", "RE_HEC_UNI_V1_SNOWDROPS_RETURN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					iParam0->f_205 = 4;
				}
			}
			break;
		case 4:
			if (func_2510(iParam0))
			{
				if (!__LIB_0__::func_75(&(iParam0->f_462)))
				{
					__LIB_1__::func_148(&(iParam0->f_462));
				}
				else if (__LIB_1__::func_285(&(iParam0->f_462), 5f))
				{
					__LIB_13__::func_730(iParam0, 29);
					func_2509(iParam0, 31);
				}
			}
			break;
		case 5:
			iParam0->f_205 = 0;
			break;
	}
}

void func_2334(int iParam0, var uParam1, float fParam2)
{
	vector3 vVar0;
	int iVar3;
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(__LIB_3__::func_179(uParam1), __LIB_3__::func_526(uParam1), -1.17f, 3.39f, 0f) };
	iVar3 = PED::GET_MOUNT(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3) && __LIB_0__::func_394(Global_35, iVar3, 0))
	{
		if (__LIB_0__::func_636(Global_36, vVar0) <= fParam2 || __LIB_0__::func_636(ENTITY::GET_ENTITY_COORDS(iVar3, true, false), vVar0) <= fParam2)
		{
			__LIB_4__::func_340(&(iParam0->f_284.f_21[0 /*17*/]));
		}
	}
}

int func_2373(var uParam0, int iParam1, int iParam2)
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
		return func_2373(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2446(int iParam0, int iParam1)
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
				if (func_2446(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2446(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2446(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2446(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

bool func_2506(int iParam0)
{
	return __LIB_0__::func_27(iParam0->f_284.f_73, 1);
}

bool func_2507(int iParam0)
{
	if (PED::_0x569F1E1237508DEB(iParam0->f_7) == joaat("SCRIPT_COMMON_STAND_HERBALIST") || PED::_0x569F1E1237508DEB(iParam0->f_7) == joaat("SCRIPT_COMMON_LEAN_READ_HERBALIST"))
	{
		return true;
	}
	return false;
}

bool func_2508(int iParam0)
{
	if (__LIB_13__::func_727(iParam0, 59))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_7, __LIB_13__::func_807(43, 1), "HEY_N_HERBALIST", 1))
		{
			return true;
		}
	}
	else if (!__LIB_2__::func_136(iParam0->f_7, 1))
	{
		return true;
	}
	return false;
}

void func_2509(int iParam0, int iParam1)
{
	__LIB_13__::func_730(iParam0, 27);
	__LIB_13__::func_734(iParam0, 131072);
	__LIB_13__::func_724(iParam0, iParam1);
	__LIB_13__::func_823(iParam0, 5f, 0);
	iParam0->f_205 = 5;
}

bool func_2510(int iParam0)
{
	if (__LIB_13__::func_727(iParam0, 59))
	{
		if (!__LIB_18__::func_667(iParam0->f_7, *iParam0, "YARROW_RETURN_A_UPPER", "GCURRANT_RETURN_A_UPPER", "VSNOWDROP_RETURN_A_UPPER", "HBSAGE_RETURN_A", 1, 1))
		{
			return true;
		}
	}
	else if (!__LIB_2__::func_136(iParam0->f_7, 1))
	{
		return true;
	}
	return false;
}

