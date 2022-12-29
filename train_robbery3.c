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
	struct<11> Local_14 = { 0, 0, 0, 1, 0, 0, 2, 0, 0, 0, 1 } ;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	struct<22> Local_27 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	char cLocal_56[64] = "";
	struct<9> Local_64[4];
	struct<4> Local_101[4];
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130[3] = { 0, 0, 0 };
	var uLocal_134 = 0;
	int iLocal_135 = 0;
	float fLocal_136 = 0f;
	bool bLocal_137 = false;
	bool bLocal_138 = false;
	int iLocal_139 = 0;
	char* sLocal_140 = NULL;
	char* sLocal_141 = NULL;
	char* sLocal_142 = NULL;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	bool bLocal_158 = false;
	bool bLocal_159 = false;
	bool bLocal_160 = false;
	int iLocal_161 = 0;
	bool bLocal_162 = false;
	struct<17> Local_163 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 1;
	var uLocal_193 = 0;
	bool bLocal_194 = false;
	bool bLocal_195 = false;
	int iLocal_196 = 0;
	float fLocal_197 = 0f;
	bool bLocal_198 = false;
	float fLocal_199 = 0f;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	float fLocal_203[30] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	bool bLocal_234 = false;
	struct<8> Local_235[23];
	int iLocal_420[61] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char* sLocal_482 = NULL;
	char* sLocal_483 = NULL;
	char* sLocal_484 = NULL;
	char* sLocal_485 = NULL;
	char* sLocal_486 = NULL;
	char* sLocal_487 = NULL;
	char* sLocal_488 = NULL;
	char* sLocal_489 = NULL;
	char* sLocal_490 = NULL;
	bool bLocal_491 = false;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	bool bLocal_495 = false;
	int iLocal_496 = 0;
	vector3 vLocal_497[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	bool bLocal_507 = false;
	bool bLocal_508 = false;
	int iLocal_509 = 0;
	int iLocal_510 = 0;
	int iLocal_511[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_522 = false;
	int iLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	int iLocal_527[4] = { 0, 0, 0, 0 };
	bool bLocal_532 = false;
	int iLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	bool bLocal_537 = false;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	bool bLocal_541 = false;
	int iLocal_542 = 0;
	int iLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	bool bLocal_559 = false;
	bool bLocal_560 = false;
	bool bLocal_561 = false;
	bool bLocal_562 = false;
	bool bLocal_563 = false;
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568 = 0;
	int iLocal_569 = 0;
	int iLocal_570 = 0;
	int iLocal_571 = 0;
	vector3 vLocal_572 = { 0f, 0f, 0f };
	vector3 vLocal_575 = { 0f, 0f, 0f };
	float fLocal_578 = 0f;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	float fLocal_582 = 0f;
	float fLocal_583 = 0f;
	int iLocal_584 = 0;
	int iLocal_585 = 0;
	int iLocal_586 = 0;
	int iLocal_587 = 0;
	int iLocal_588 = 0;
	bool bLocal_589 = false;
	bool bLocal_590 = false;
	bool bLocal_591 = false;
	bool bLocal_592 = false;
	bool bLocal_593 = false;
	int iLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	int iLocal_598 = 0;
	int iLocal_599 = 0;
	int iLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	int iLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	bool bLocal_608 = false;
	bool bLocal_609 = false;
	int iLocal_610 = 0;
	bool bLocal_611 = false;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	bool bLocal_615 = false;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	int iLocal_618 = 0;
	bool bLocal_619 = false;
	int iLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	int iLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	bool bLocal_630 = false;
	bool bLocal_631 = false;
	bool bLocal_632 = false;
	bool bLocal_633 = false;
	bool bLocal_634 = false;
	bool bLocal_635 = false;
	bool bLocal_636 = false;
	int iLocal_637 = 0;
	bool bLocal_638 = false;
	int iLocal_639 = 0;
	bool bLocal_640 = false;
	vector3 vLocal_641 = { 0f, 0f, 0f };
	bool bLocal_644 = false;
	bool bLocal_645 = false;
	bool bLocal_646 = false;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	int iLocal_650 = 0;
	int iLocal_651 = 0;
	bool bLocal_652 = false;
	bool bLocal_653 = false;
	int iLocal_654 = 0;
	float fLocal_655 = 0f;
	float fLocal_656 = 0f;
	bool bLocal_657 = false;
	bool bLocal_658 = false;
	bool bLocal_659 = false;
	bool bLocal_660 = false;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	int iLocal_664 = 0;
	int iLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	bool bLocal_669 = false;
	int iLocal_670 = 0;
	int iLocal_671 = 0;
	bool bLocal_672 = false;
	var uLocal_673 = 0;
	var uLocal_674 = 27;
	var uLocal_675 = 8;
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
	var uLocal_696 = -1;
	var uLocal_697 = 8;
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
	var uLocal_718 = -1;
	var uLocal_719 = 8;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = -1;
	var uLocal_741 = 8;
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
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = -1;
	var uLocal_763 = 8;
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
	var uLocal_783 = 0;
	var uLocal_784 = -1;
	var uLocal_785 = 8;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = -1;
	var uLocal_807 = 8;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
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
	var uLocal_828 = -1;
	var uLocal_829 = 8;
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
	var uLocal_850 = -1;
	var uLocal_851 = 8;
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
	var uLocal_872 = -1;
	var uLocal_873 = 8;
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
	var uLocal_894 = -1;
	var uLocal_895 = 8;
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
	var uLocal_916 = -1;
	var uLocal_917 = 8;
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
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = -1;
	var uLocal_939 = 8;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = -1;
	var uLocal_961 = 8;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = -1;
	var uLocal_983 = 8;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = -1;
	var uLocal_1005 = 8;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
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
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = -1;
	var uLocal_1027 = 8;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = -1;
	var uLocal_1049 = 8;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
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
	var uLocal_1070 = -1;
	var uLocal_1071 = 8;
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
	var uLocal_1092 = -1;
	var uLocal_1093 = 8;
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
	var uLocal_1114 = -1;
	var uLocal_1115 = 8;
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
	var uLocal_1136 = -1;
	var uLocal_1137 = 8;
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
	var uLocal_1158 = -1;
	var uLocal_1159 = 8;
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
	var uLocal_1180 = -1;
	var uLocal_1181 = 8;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = -1;
	var uLocal_1203 = 8;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = -1;
	var uLocal_1225 = 8;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = -1;
	var uLocal_1247 = 8;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = -1;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 2;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 60;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 40;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 20;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 14;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 60;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 20;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 20;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 20;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 20;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 20;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 20;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 20;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 20;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = 0;
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 20;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 20;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 20;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 20;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uLocal_2574 = 0;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	var uLocal_2587 = 0;
	var uLocal_2588 = 0;
	var uLocal_2589 = 0;
	var uLocal_2590 = 0;
	var uLocal_2591 = 0;
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	var uLocal_2596 = 0;
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = 0;
	var uLocal_2603 = 0;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	var uLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 20;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 0;
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 0;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 20;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 20;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	var uLocal_2797 = 0;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 0;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 20;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 0;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 20;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
	var uLocal_2881 = 0;
	var uLocal_2882 = 0;
	var uLocal_2883 = 0;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	var uLocal_2895 = 0;
	var uLocal_2896 = 0;
	var uLocal_2897 = 0;
	var uLocal_2898 = 0;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = 0;
	var uLocal_2904 = 0;
	var uLocal_2905 = 0;
	var uLocal_2906 = 0;
	var uLocal_2907 = 0;
	var uLocal_2908 = 0;
	var uLocal_2909 = 0;
	var uLocal_2910 = 0;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = 0;
	var uLocal_2926 = 0;
	var uLocal_2927 = 0;
	var uLocal_2928 = 0;
	var uLocal_2929 = 0;
	var uLocal_2930 = 0;
	var uLocal_2931 = 0;
	var uLocal_2932 = 0;
	var uLocal_2933 = 0;
	var uLocal_2934 = 0;
	var uLocal_2935 = 0;
	var uLocal_2936 = 0;
	var uLocal_2937 = 0;
	var uLocal_2938 = 0;
	var uLocal_2939 = 0;
	var uLocal_2940 = 0;
	var uLocal_2941 = 0;
	var uLocal_2942 = 0;
	var uLocal_2943 = 20;
	var uLocal_2944 = 0;
	var uLocal_2945 = 0;
	var uLocal_2946 = 0;
	var uLocal_2947 = 0;
	var uLocal_2948 = 0;
	var uLocal_2949 = 0;
	var uLocal_2950 = 0;
	var uLocal_2951 = 0;
	var uLocal_2952 = 0;
	var uLocal_2953 = 0;
	var uLocal_2954 = 0;
	var uLocal_2955 = 0;
	var uLocal_2956 = 0;
	var uLocal_2957 = 0;
	var uLocal_2958 = 0;
	var uLocal_2959 = 0;
	var uLocal_2960 = 0;
	var uLocal_2961 = 0;
	var uLocal_2962 = 0;
	var uLocal_2963 = 0;
	var uLocal_2964 = 0;
	var uLocal_2965 = 0;
	var uLocal_2966 = 0;
	var uLocal_2967 = 0;
	var uLocal_2968 = 0;
	var uLocal_2969 = 0;
	var uLocal_2970 = 0;
	var uLocal_2971 = 0;
	var uLocal_2972 = 0;
	var uLocal_2973 = 0;
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	var uLocal_2977 = 0;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = 0;
	var uLocal_2981 = 0;
	var uLocal_2982 = 0;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	var uLocal_2988 = 0;
	var uLocal_2989 = 0;
	var uLocal_2990 = 0;
	var uLocal_2991 = 0;
	var uLocal_2992 = 0;
	var uLocal_2993 = 0;
	var uLocal_2994 = 0;
	var uLocal_2995 = 0;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 20;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 20;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 20;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	var uLocal_3180 = 0;
	var uLocal_3181 = 0;
	var uLocal_3182 = 0;
	var uLocal_3183 = 0;
	var uLocal_3184 = 0;
	var uLocal_3185 = 0;
	var uLocal_3186 = 0;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	var uLocal_3189 = 0;
	var uLocal_3190 = 0;
	var uLocal_3191 = 0;
	var uLocal_3192 = 0;
	var uLocal_3193 = 0;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	var uLocal_3197 = 0;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	var uLocal_3200 = 0;
	var uLocal_3201 = 0;
	var uLocal_3202 = 0;
	var uLocal_3203 = 0;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 20;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 0;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 0;
	var uLocal_3220 = 0;
	var uLocal_3221 = 0;
	var uLocal_3222 = 0;
	var uLocal_3223 = 0;
	var uLocal_3224 = 0;
	var uLocal_3225 = 0;
	var uLocal_3226 = 0;
	var uLocal_3227 = 0;
	var uLocal_3228 = 0;
	var uLocal_3229 = 0;
	var uLocal_3230 = 0;
	var uLocal_3231 = 0;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235 = 0;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
	var uLocal_3239 = 0;
	var uLocal_3240 = 0;
	var uLocal_3241 = 0;
	var uLocal_3242 = 0;
	var uLocal_3243 = 0;
	var uLocal_3244 = 0;
	var uLocal_3245 = 0;
	var uLocal_3246 = 0;
	var uLocal_3247 = 0;
	var uLocal_3248 = 0;
	var uLocal_3249 = 0;
	var uLocal_3250 = 0;
	var uLocal_3251 = 0;
	var uLocal_3252 = 0;
	var uLocal_3253 = 0;
	var uLocal_3254 = 0;
	var uLocal_3255 = 0;
	var uLocal_3256 = 0;
	var uLocal_3257 = 0;
	var uLocal_3258 = 0;
	var uLocal_3259 = 0;
	var uLocal_3260 = 0;
	var uLocal_3261 = 0;
	var uLocal_3262 = 0;
	var uLocal_3263 = 0;
	var uLocal_3264 = 0;
	var uLocal_3265 = 0;
	var uLocal_3266 = 0;
	var uLocal_3267 = 0;
	var uLocal_3268 = 0;
	var uLocal_3269 = 0;
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = 0;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 0;
	var uLocal_3278 = 20;
	var uLocal_3279 = 0;
	var uLocal_3280 = 0;
	var uLocal_3281 = 0;
	var uLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	var uLocal_3293 = 0;
	var uLocal_3294 = 0;
	var uLocal_3295 = 0;
	var uLocal_3296 = 0;
	var uLocal_3297 = 0;
	var uLocal_3298 = 0;
	var uLocal_3299 = 0;
	var uLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302 = 0;
	var uLocal_3303 = 0;
	var uLocal_3304 = 0;
	var uLocal_3305 = 0;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	var uLocal_3312 = 0;
	var uLocal_3313 = 0;
	var uLocal_3314 = 0;
	var uLocal_3315 = 0;
	var uLocal_3316 = 0;
	var uLocal_3317 = 0;
	var uLocal_3318 = 0;
	var uLocal_3319 = 0;
	var uLocal_3320 = 0;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = 0;
	var uLocal_3324 = 0;
	var uLocal_3325 = 0;
	var uLocal_3326 = 0;
	var uLocal_3327 = 0;
	var uLocal_3328 = 0;
	var uLocal_3329 = 0;
	var uLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 0;
	var uLocal_3335 = 0;
	var uLocal_3336 = 0;
	var uLocal_3337 = 0;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = 0;
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = 20;
	var uLocal_3346 = 0;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	var uLocal_3350 = 0;
	var uLocal_3351 = 0;
	var uLocal_3352 = 0;
	var uLocal_3353 = 0;
	var uLocal_3354 = 0;
	var uLocal_3355 = 0;
	var uLocal_3356 = 0;
	var uLocal_3357 = 0;
	var uLocal_3358 = 0;
	var uLocal_3359 = 0;
	var uLocal_3360 = 0;
	var uLocal_3361 = 0;
	var uLocal_3362 = 0;
	var uLocal_3363 = 0;
	var uLocal_3364 = 0;
	var uLocal_3365 = 0;
	var uLocal_3366 = 0;
	var uLocal_3367 = 0;
	var uLocal_3368 = 0;
	var uLocal_3369 = 0;
	var uLocal_3370 = 0;
	var uLocal_3371 = 0;
	var uLocal_3372 = 0;
	var uLocal_3373 = 0;
	var uLocal_3374 = 0;
	var uLocal_3375 = 0;
	var uLocal_3376 = 0;
	var uLocal_3377 = 0;
	var uLocal_3378 = 0;
	var uLocal_3379 = 0;
	var uLocal_3380 = 0;
	var uLocal_3381 = 0;
	var uLocal_3382 = 0;
	var uLocal_3383 = 0;
	var uLocal_3384 = 0;
	var uLocal_3385 = 0;
	var uLocal_3386 = 0;
	var uLocal_3387 = 0;
	var uLocal_3388 = 0;
	var uLocal_3389 = 0;
	var uLocal_3390 = 0;
	var uLocal_3391 = 0;
	var uLocal_3392 = 0;
	var uLocal_3393 = 0;
	var uLocal_3394 = 0;
	var uLocal_3395 = 0;
	var uLocal_3396 = 0;
	var uLocal_3397 = 0;
	var uLocal_3398 = 0;
	var uLocal_3399 = 0;
	var uLocal_3400 = 0;
	var uLocal_3401 = 0;
	var uLocal_3402 = 0;
	var uLocal_3403 = 0;
	var uLocal_3404 = 0;
	var uLocal_3405 = 0;
	var uLocal_3406 = 0;
	var uLocal_3407 = 0;
	var uLocal_3408 = 0;
	var uLocal_3409 = 0;
	var uLocal_3410 = 0;
	var uLocal_3411 = 0;
	var uLocal_3412 = 20;
	var uLocal_3413 = 0;
	var uLocal_3414 = 0;
	var uLocal_3415 = 0;
	var uLocal_3416 = 0;
	var uLocal_3417 = 0;
	var uLocal_3418 = 0;
	var uLocal_3419 = 0;
	var uLocal_3420 = 0;
	var uLocal_3421 = 0;
	var uLocal_3422 = 0;
	var uLocal_3423 = 0;
	var uLocal_3424 = 0;
	var uLocal_3425 = 0;
	var uLocal_3426 = 0;
	var uLocal_3427 = 0;
	var uLocal_3428 = 0;
	var uLocal_3429 = 0;
	var uLocal_3430 = 0;
	var uLocal_3431 = 0;
	var uLocal_3432 = 0;
	var uLocal_3433 = 0;
	var uLocal_3434 = 0;
	var uLocal_3435 = 0;
	var uLocal_3436 = 0;
	var uLocal_3437 = 0;
	var uLocal_3438 = 0;
	var uLocal_3439 = 0;
	var uLocal_3440 = 0;
	var uLocal_3441 = 0;
	var uLocal_3442 = 0;
	var uLocal_3443 = 0;
	var uLocal_3444 = 0;
	var uLocal_3445 = 0;
	var uLocal_3446 = 0;
	var uLocal_3447 = 0;
	var uLocal_3448 = 0;
	var uLocal_3449 = 0;
	var uLocal_3450 = 0;
	var uLocal_3451 = 0;
	var uLocal_3452 = 0;
	var uLocal_3453 = 0;
	var uLocal_3454 = 0;
	var uLocal_3455 = 0;
	var uLocal_3456 = 0;
	var uLocal_3457 = 0;
	var uLocal_3458 = 0;
	var uLocal_3459 = 0;
	var uLocal_3460 = 0;
	var uLocal_3461 = 0;
	var uLocal_3462 = 0;
	var uLocal_3463 = 0;
	var uLocal_3464 = 0;
	var uLocal_3465 = 0;
	var uLocal_3466 = 0;
	var uLocal_3467 = 0;
	var uLocal_3468 = 0;
	var uLocal_3469 = 0;
	var uLocal_3470 = 0;
	var uLocal_3471 = 0;
	var uLocal_3472 = 0;
	var uLocal_3473 = 0;
	var uLocal_3474 = 0;
	var uLocal_3475 = 0;
	var uLocal_3476 = 0;
	var uLocal_3477 = 0;
	var uLocal_3478 = 0;
	var uLocal_3479 = 20;
	var uLocal_3480 = 0;
	var uLocal_3481 = 0;
	var uLocal_3482 = 0;
	var uLocal_3483 = 0;
	var uLocal_3484 = 0;
	var uLocal_3485 = 0;
	var uLocal_3486 = 0;
	var uLocal_3487 = 0;
	var uLocal_3488 = 0;
	var uLocal_3489 = 0;
	var uLocal_3490 = 0;
	var uLocal_3491 = 0;
	var uLocal_3492 = 0;
	var uLocal_3493 = 0;
	var uLocal_3494 = 0;
	var uLocal_3495 = 0;
	var uLocal_3496 = 0;
	var uLocal_3497 = 0;
	var uLocal_3498 = 0;
	var uLocal_3499 = 0;
	var uLocal_3500 = 0;
	var uLocal_3501 = 0;
	var uLocal_3502 = 0;
	var uLocal_3503 = 0;
	var uLocal_3504 = 0;
	var uLocal_3505 = 0;
	var uLocal_3506 = 0;
	var uLocal_3507 = 0;
	var uLocal_3508 = 0;
	var uLocal_3509 = 0;
	var uLocal_3510 = 0;
	var uLocal_3511 = 0;
	var uLocal_3512 = 0;
	var uLocal_3513 = 0;
	var uLocal_3514 = 0;
	var uLocal_3515 = 0;
	var uLocal_3516 = 0;
	var uLocal_3517 = 0;
	var uLocal_3518 = 0;
	var uLocal_3519 = 0;
	var uLocal_3520 = 0;
	var uLocal_3521 = 0;
	var uLocal_3522 = 0;
	var uLocal_3523 = 0;
	var uLocal_3524 = 0;
	var uLocal_3525 = 0;
	var uLocal_3526 = 0;
	var uLocal_3527 = 0;
	var uLocal_3528 = 0;
	var uLocal_3529 = 0;
	var uLocal_3530 = 0;
	var uLocal_3531 = 0;
	var uLocal_3532 = 0;
	var uLocal_3533 = 0;
	var uLocal_3534 = 0;
	var uLocal_3535 = 0;
	var uLocal_3536 = 0;
	var uLocal_3537 = 0;
	var uLocal_3538 = 0;
	var uLocal_3539 = 0;
	var uLocal_3540 = 0;
	var uLocal_3541 = 0;
	var uLocal_3542 = 0;
	var uLocal_3543 = 0;
	var uLocal_3544 = 0;
	var uLocal_3545 = 0;
	var uLocal_3546 = 20;
	var uLocal_3547 = 0;
	var uLocal_3548 = 0;
	var uLocal_3549 = 0;
	var uLocal_3550 = 0;
	var uLocal_3551 = 0;
	var uLocal_3552 = 0;
	var uLocal_3553 = 0;
	var uLocal_3554 = 0;
	var uLocal_3555 = 0;
	var uLocal_3556 = 0;
	var uLocal_3557 = 0;
	var uLocal_3558 = 0;
	var uLocal_3559 = 0;
	var uLocal_3560 = 0;
	var uLocal_3561 = 0;
	var uLocal_3562 = 0;
	var uLocal_3563 = 0;
	var uLocal_3564 = 0;
	var uLocal_3565 = 0;
	var uLocal_3566 = 0;
	var uLocal_3567 = 0;
	var uLocal_3568 = 0;
	var uLocal_3569 = 0;
	var uLocal_3570 = 0;
	var uLocal_3571 = 0;
	var uLocal_3572 = 0;
	var uLocal_3573 = 0;
	var uLocal_3574 = 0;
	var uLocal_3575 = 0;
	var uLocal_3576 = 0;
	var uLocal_3577 = 0;
	var uLocal_3578 = 0;
	var uLocal_3579 = 0;
	var uLocal_3580 = 0;
	var uLocal_3581 = 0;
	var uLocal_3582 = 0;
	var uLocal_3583 = 0;
	var uLocal_3584 = 0;
	var uLocal_3585 = 0;
	var uLocal_3586 = 0;
	var uLocal_3587 = 0;
	var uLocal_3588 = 0;
	var uLocal_3589 = 0;
	var uLocal_3590 = 0;
	var uLocal_3591 = 0;
	var uLocal_3592 = 0;
	var uLocal_3593 = 0;
	var uLocal_3594 = 0;
	var uLocal_3595 = 0;
	var uLocal_3596 = 0;
	var uLocal_3597 = 0;
	var uLocal_3598 = 0;
	var uLocal_3599 = 0;
	var uLocal_3600 = 0;
	var uLocal_3601 = 0;
	var uLocal_3602 = 0;
	var uLocal_3603 = 0;
	var uLocal_3604 = 0;
	var uLocal_3605 = 0;
	var uLocal_3606 = 0;
	var uLocal_3607 = 0;
	var uLocal_3608 = 0;
	var uLocal_3609 = 0;
	var uLocal_3610 = 0;
	var uLocal_3611 = 0;
	var uLocal_3612 = 0;
	var uLocal_3613 = 20;
	var uLocal_3614 = 0;
	var uLocal_3615 = 0;
	var uLocal_3616 = 0;
	var uLocal_3617 = 0;
	var uLocal_3618 = 0;
	var uLocal_3619 = 0;
	var uLocal_3620 = 0;
	var uLocal_3621 = 0;
	var uLocal_3622 = 0;
	var uLocal_3623 = 0;
	var uLocal_3624 = 0;
	var uLocal_3625 = 0;
	var uLocal_3626 = 0;
	var uLocal_3627 = 0;
	var uLocal_3628 = 0;
	var uLocal_3629 = 0;
	var uLocal_3630 = 0;
	var uLocal_3631 = 0;
	var uLocal_3632 = 0;
	var uLocal_3633 = 0;
	var uLocal_3634 = 0;
	var uLocal_3635 = 0;
	var uLocal_3636 = 0;
	var uLocal_3637 = 0;
	var uLocal_3638 = 0;
	var uLocal_3639 = 0;
	var uLocal_3640 = 0;
	var uLocal_3641 = 0;
	var uLocal_3642 = 0;
	var uLocal_3643 = 0;
	var uLocal_3644 = 0;
	var uLocal_3645 = 0;
	var uLocal_3646 = 0;
	var uLocal_3647 = 0;
	var uLocal_3648 = 0;
	var uLocal_3649 = 0;
	var uLocal_3650 = 0;
	var uLocal_3651 = 0;
	var uLocal_3652 = 0;
	var uLocal_3653 = 0;
	var uLocal_3654 = 0;
	var uLocal_3655 = 0;
	var uLocal_3656 = 0;
	var uLocal_3657 = 0;
	var uLocal_3658 = 0;
	var uLocal_3659 = 0;
	var uLocal_3660 = 0;
	var uLocal_3661 = 0;
	var uLocal_3662 = 0;
	var uLocal_3663 = 0;
	var uLocal_3664 = 0;
	var uLocal_3665 = 0;
	var uLocal_3666 = 0;
	var uLocal_3667 = 0;
	var uLocal_3668 = 0;
	var uLocal_3669 = 0;
	var uLocal_3670 = 0;
	var uLocal_3671 = 0;
	var uLocal_3672 = 0;
	var uLocal_3673 = 0;
	var uLocal_3674 = 0;
	var uLocal_3675 = 0;
	var uLocal_3676 = 0;
	var uLocal_3677 = 0;
	var uLocal_3678 = 0;
	var uLocal_3679 = 0;
	var uLocal_3680 = 20;
	var uLocal_3681 = 0;
	var uLocal_3682 = 0;
	var uLocal_3683 = 0;
	var uLocal_3684 = 0;
	var uLocal_3685 = 0;
	var uLocal_3686 = 0;
	var uLocal_3687 = 0;
	var uLocal_3688 = 0;
	var uLocal_3689 = 0;
	var uLocal_3690 = 0;
	var uLocal_3691 = 0;
	var uLocal_3692 = 0;
	var uLocal_3693 = 0;
	var uLocal_3694 = 0;
	var uLocal_3695 = 0;
	var uLocal_3696 = 0;
	var uLocal_3697 = 0;
	var uLocal_3698 = 0;
	var uLocal_3699 = 0;
	var uLocal_3700 = 0;
	var uLocal_3701 = 0;
	var uLocal_3702 = 0;
	var uLocal_3703 = 0;
	var uLocal_3704 = 0;
	var uLocal_3705 = 0;
	var uLocal_3706 = 0;
	var uLocal_3707 = 0;
	var uLocal_3708 = 0;
	var uLocal_3709 = 0;
	var uLocal_3710 = 0;
	var uLocal_3711 = 0;
	var uLocal_3712 = 0;
	var uLocal_3713 = 0;
	var uLocal_3714 = 0;
	var uLocal_3715 = 0;
	var uLocal_3716 = 0;
	var uLocal_3717 = 0;
	var uLocal_3718 = 0;
	var uLocal_3719 = 0;
	var uLocal_3720 = 0;
	var uLocal_3721 = 0;
	var uLocal_3722 = 0;
	var uLocal_3723 = 0;
	var uLocal_3724 = 0;
	var uLocal_3725 = 0;
	var uLocal_3726 = 0;
	var uLocal_3727 = 0;
	var uLocal_3728 = 0;
	var uLocal_3729 = 0;
	var uLocal_3730 = 0;
	var uLocal_3731 = 0;
	var uLocal_3732 = 0;
	var uLocal_3733 = 0;
	var uLocal_3734 = 0;
	var uLocal_3735 = 0;
	var uLocal_3736 = 0;
	var uLocal_3737 = 0;
	var uLocal_3738 = 0;
	var uLocal_3739 = 0;
	var uLocal_3740 = 0;
	var uLocal_3741 = 0;
	var uLocal_3742 = 0;
	var uLocal_3743 = 0;
	var uLocal_3744 = 0;
	var uLocal_3745 = 0;
	var uLocal_3746 = 0;
	var uLocal_3747 = 20;
	var uLocal_3748 = 0;
	var uLocal_3749 = 0;
	var uLocal_3750 = 0;
	var uLocal_3751 = 0;
	var uLocal_3752 = 0;
	var uLocal_3753 = 0;
	var uLocal_3754 = 0;
	var uLocal_3755 = 0;
	var uLocal_3756 = 0;
	var uLocal_3757 = 0;
	var uLocal_3758 = 0;
	var uLocal_3759 = 0;
	var uLocal_3760 = 0;
	var uLocal_3761 = 0;
	var uLocal_3762 = 0;
	var uLocal_3763 = 0;
	var uLocal_3764 = 0;
	var uLocal_3765 = 0;
	var uLocal_3766 = 0;
	var uLocal_3767 = 0;
	var uLocal_3768 = 0;
	var uLocal_3769 = 0;
	var uLocal_3770 = 0;
	var uLocal_3771 = 0;
	var uLocal_3772 = 0;
	var uLocal_3773 = 0;
	var uLocal_3774 = 0;
	var uLocal_3775 = 0;
	var uLocal_3776 = 0;
	var uLocal_3777 = 0;
	var uLocal_3778 = 0;
	var uLocal_3779 = 0;
	var uLocal_3780 = 0;
	var uLocal_3781 = 0;
	var uLocal_3782 = 0;
	var uLocal_3783 = 0;
	var uLocal_3784 = 0;
	var uLocal_3785 = 0;
	var uLocal_3786 = 0;
	var uLocal_3787 = 0;
	var uLocal_3788 = 0;
	var uLocal_3789 = 0;
	var uLocal_3790 = 0;
	var uLocal_3791 = 0;
	var uLocal_3792 = 0;
	var uLocal_3793 = 0;
	var uLocal_3794 = 0;
	var uLocal_3795 = 0;
	var uLocal_3796 = 0;
	var uLocal_3797 = 0;
	var uLocal_3798 = 0;
	var uLocal_3799 = 0;
	var uLocal_3800 = 0;
	var uLocal_3801 = 0;
	var uLocal_3802 = 0;
	var uLocal_3803 = 0;
	var uLocal_3804 = 0;
	var uLocal_3805 = 0;
	var uLocal_3806 = 0;
	var uLocal_3807 = 0;
	var uLocal_3808 = 0;
	var uLocal_3809 = 0;
	var uLocal_3810 = 0;
	var uLocal_3811 = 0;
	var uLocal_3812 = 0;
	var uLocal_3813 = 0;
	var uLocal_3814 = 20;
	var uLocal_3815 = 0;
	var uLocal_3816 = 0;
	var uLocal_3817 = 0;
	var uLocal_3818 = 0;
	var uLocal_3819 = 0;
	var uLocal_3820 = 0;
	var uLocal_3821 = 0;
	var uLocal_3822 = 0;
	var uLocal_3823 = 0;
	var uLocal_3824 = 0;
	var uLocal_3825 = 0;
	var uLocal_3826 = 0;
	var uLocal_3827 = 0;
	var uLocal_3828 = 0;
	var uLocal_3829 = 0;
	var uLocal_3830 = 0;
	var uLocal_3831 = 0;
	var uLocal_3832 = 0;
	var uLocal_3833 = 0;
	var uLocal_3834 = 0;
	var uLocal_3835 = 0;
	var uLocal_3836 = 0;
	var uLocal_3837 = 0;
	var uLocal_3838 = 0;
	var uLocal_3839 = 0;
	var uLocal_3840 = 0;
	var uLocal_3841 = 0;
	var uLocal_3842 = 0;
	var uLocal_3843 = 0;
	var uLocal_3844 = 0;
	var uLocal_3845 = 0;
	var uLocal_3846 = 0;
	var uLocal_3847 = 0;
	var uLocal_3848 = 0;
	var uLocal_3849 = 0;
	var uLocal_3850 = 0;
	var uLocal_3851 = 0;
	var uLocal_3852 = 0;
	var uLocal_3853 = 0;
	var uLocal_3854 = 0;
	var uLocal_3855 = 0;
	var uLocal_3856 = 0;
	var uLocal_3857 = 0;
	var uLocal_3858 = 0;
	var uLocal_3859 = 0;
	var uLocal_3860 = 0;
	var uLocal_3861 = 0;
	var uLocal_3862 = 0;
	var uLocal_3863 = 0;
	var uLocal_3864 = 0;
	var uLocal_3865 = 0;
	var uLocal_3866 = 0;
	var uLocal_3867 = 0;
	var uLocal_3868 = 0;
	var uLocal_3869 = 0;
	var uLocal_3870 = 0;
	var uLocal_3871 = 0;
	var uLocal_3872 = 0;
	var uLocal_3873 = 0;
	var uLocal_3874 = 0;
	var uLocal_3875 = 0;
	var uLocal_3876 = 0;
	var uLocal_3877 = 0;
	var uLocal_3878 = 0;
	var uLocal_3879 = 0;
	var uLocal_3880 = 0;
	var uLocal_3881 = 20;
	var uLocal_3882 = 0;
	var uLocal_3883 = 0;
	var uLocal_3884 = 0;
	var uLocal_3885 = 0;
	var uLocal_3886 = 0;
	var uLocal_3887 = 0;
	var uLocal_3888 = 0;
	var uLocal_3889 = 0;
	var uLocal_3890 = 0;
	var uLocal_3891 = 0;
	var uLocal_3892 = 0;
	var uLocal_3893 = 0;
	var uLocal_3894 = 0;
	var uLocal_3895 = 0;
	var uLocal_3896 = 0;
	var uLocal_3897 = 0;
	var uLocal_3898 = 0;
	var uLocal_3899 = 0;
	var uLocal_3900 = 0;
	var uLocal_3901 = 0;
	var uLocal_3902 = 0;
	var uLocal_3903 = 0;
	var uLocal_3904 = 0;
	var uLocal_3905 = 0;
	var uLocal_3906 = 0;
	var uLocal_3907 = 0;
	var uLocal_3908 = 0;
	var uLocal_3909 = 0;
	var uLocal_3910 = 0;
	var uLocal_3911 = 0;
	var uLocal_3912 = 0;
	var uLocal_3913 = 0;
	var uLocal_3914 = 0;
	var uLocal_3915 = 0;
	var uLocal_3916 = 0;
	var uLocal_3917 = 0;
	var uLocal_3918 = 0;
	var uLocal_3919 = 0;
	var uLocal_3920 = 0;
	var uLocal_3921 = 0;
	var uLocal_3922 = 0;
	var uLocal_3923 = 0;
	var uLocal_3924 = 0;
	var uLocal_3925 = 0;
	var uLocal_3926 = 0;
	var uLocal_3927 = 0;
	var uLocal_3928 = 0;
	var uLocal_3929 = 0;
	var uLocal_3930 = 0;
	var uLocal_3931 = 0;
	var uLocal_3932 = 0;
	var uLocal_3933 = 0;
	var uLocal_3934 = 0;
	var uLocal_3935 = 0;
	var uLocal_3936 = 0;
	var uLocal_3937 = 0;
	var uLocal_3938 = 0;
	var uLocal_3939 = 0;
	var uLocal_3940 = 0;
	var uLocal_3941 = 0;
	var uLocal_3942 = 0;
	var uLocal_3943 = 0;
	var uLocal_3944 = 0;
	var uLocal_3945 = 0;
	var uLocal_3946 = 0;
	var uLocal_3947 = 0;
	var uLocal_3948 = 20;
	var uLocal_3949 = 0;
	var uLocal_3950 = 0;
	var uLocal_3951 = 0;
	var uLocal_3952 = 0;
	var uLocal_3953 = 0;
	var uLocal_3954 = 0;
	var uLocal_3955 = 0;
	var uLocal_3956 = 0;
	var uLocal_3957 = 0;
	var uLocal_3958 = 0;
	var uLocal_3959 = 0;
	var uLocal_3960 = 0;
	var uLocal_3961 = 0;
	var uLocal_3962 = 0;
	var uLocal_3963 = 0;
	var uLocal_3964 = 0;
	var uLocal_3965 = 0;
	var uLocal_3966 = 0;
	var uLocal_3967 = 0;
	var uLocal_3968 = 0;
	var uLocal_3969 = 0;
	var uLocal_3970 = 0;
	var uLocal_3971 = 0;
	var uLocal_3972 = 0;
	var uLocal_3973 = 0;
	var uLocal_3974 = 0;
	var uLocal_3975 = 0;
	var uLocal_3976 = 0;
	var uLocal_3977 = 0;
	var uLocal_3978 = 0;
	var uLocal_3979 = 0;
	var uLocal_3980 = 0;
	var uLocal_3981 = 0;
	var uLocal_3982 = 0;
	var uLocal_3983 = 0;
	var uLocal_3984 = 0;
	var uLocal_3985 = 0;
	var uLocal_3986 = 0;
	var uLocal_3987 = 0;
	var uLocal_3988 = 0;
	var uLocal_3989 = 0;
	var uLocal_3990 = 0;
	var uLocal_3991 = 0;
	var uLocal_3992 = 0;
	var uLocal_3993 = 0;
	var uLocal_3994 = 0;
	var uLocal_3995 = 0;
	var uLocal_3996 = 0;
	var uLocal_3997 = 0;
	var uLocal_3998 = 0;
	var uLocal_3999 = 0;
	var uLocal_4000 = 0;
	var uLocal_4001 = 0;
	var uLocal_4002 = 0;
	var uLocal_4003 = 0;
	var uLocal_4004 = 0;
	var uLocal_4005 = 0;
	var uLocal_4006 = 0;
	var uLocal_4007 = 0;
	var uLocal_4008 = 0;
	var uLocal_4009 = 0;
	var uLocal_4010 = 0;
	var uLocal_4011 = 0;
	var uLocal_4012 = 0;
	var uLocal_4013 = 0;
	var uLocal_4014 = 0;
	var uLocal_4015 = 20;
	var uLocal_4016 = 0;
	var uLocal_4017 = 0;
	var uLocal_4018 = 0;
	var uLocal_4019 = 0;
	var uLocal_4020 = 0;
	var uLocal_4021 = 0;
	var uLocal_4022 = 0;
	var uLocal_4023 = 0;
	var uLocal_4024 = 0;
	var uLocal_4025 = 0;
	var uLocal_4026 = 0;
	var uLocal_4027 = 0;
	var uLocal_4028 = 0;
	var uLocal_4029 = 0;
	var uLocal_4030 = 0;
	var uLocal_4031 = 0;
	var uLocal_4032 = 0;
	var uLocal_4033 = 0;
	var uLocal_4034 = 0;
	var uLocal_4035 = 0;
	var uLocal_4036 = 0;
	var uLocal_4037 = 0;
	var uLocal_4038 = 0;
	var uLocal_4039 = 0;
	var uLocal_4040 = 0;
	var uLocal_4041 = 0;
	var uLocal_4042 = 0;
	var uLocal_4043 = 0;
	var uLocal_4044 = 0;
	var uLocal_4045 = 0;
	var uLocal_4046 = 0;
	var uLocal_4047 = 0;
	var uLocal_4048 = 0;
	var uLocal_4049 = 0;
	var uLocal_4050 = 0;
	var uLocal_4051 = 0;
	var uLocal_4052 = 0;
	var uLocal_4053 = 0;
	var uLocal_4054 = 0;
	var uLocal_4055 = 0;
	var uLocal_4056 = 0;
	var uLocal_4057 = 0;
	var uLocal_4058 = 0;
	var uLocal_4059 = 0;
	var uLocal_4060 = 0;
	var uLocal_4061 = 0;
	var uLocal_4062 = 0;
	var uLocal_4063 = 0;
	var uLocal_4064 = 0;
	var uLocal_4065 = 0;
	var uLocal_4066 = 0;
	var uLocal_4067 = 0;
	var uLocal_4068 = 0;
	var uLocal_4069 = 0;
	var uLocal_4070 = 0;
	var uLocal_4071 = 0;
	var uLocal_4072 = 0;
	var uLocal_4073 = 0;
	var uLocal_4074 = 0;
	var uLocal_4075 = 0;
	var uLocal_4076 = 0;
	var uLocal_4077 = 0;
	var uLocal_4078 = 0;
	var uLocal_4079 = 0;
	var uLocal_4080 = 0;
	var uLocal_4081 = 0;
	var uLocal_4082 = 20;
	var uLocal_4083 = 0;
	var uLocal_4084 = 0;
	var uLocal_4085 = 0;
	var uLocal_4086 = 0;
	var uLocal_4087 = 0;
	var uLocal_4088 = 0;
	var uLocal_4089 = 0;
	var uLocal_4090 = 0;
	var uLocal_4091 = 0;
	var uLocal_4092 = 0;
	var uLocal_4093 = 0;
	var uLocal_4094 = 0;
	var uLocal_4095 = 0;
	var uLocal_4096 = 0;
	var uLocal_4097 = 0;
	var uLocal_4098 = 0;
	var uLocal_4099 = 0;
	var uLocal_4100 = 0;
	var uLocal_4101 = 0;
	var uLocal_4102 = 0;
	var uLocal_4103 = 0;
	var uLocal_4104 = 0;
	var uLocal_4105 = 0;
	var uLocal_4106 = 0;
	var uLocal_4107 = 0;
	var uLocal_4108 = 0;
	var uLocal_4109 = 0;
	var uLocal_4110 = 0;
	var uLocal_4111 = 0;
	var uLocal_4112 = 0;
	var uLocal_4113 = 0;
	var uLocal_4114 = 0;
	var uLocal_4115 = 0;
	var uLocal_4116 = 0;
	var uLocal_4117 = 0;
	var uLocal_4118 = 0;
	var uLocal_4119 = 0;
	var uLocal_4120 = 0;
	var uLocal_4121 = 0;
	var uLocal_4122 = 0;
	var uLocal_4123 = 0;
	var uLocal_4124 = 0;
	var uLocal_4125 = 0;
	var uLocal_4126 = 0;
	var uLocal_4127 = 0;
	var uLocal_4128 = 0;
	var uLocal_4129 = 0;
	var uLocal_4130 = 0;
	var uLocal_4131 = 0;
	var uLocal_4132 = 0;
	var uLocal_4133 = 0;
	var uLocal_4134 = 0;
	var uLocal_4135 = 0;
	var uLocal_4136 = 0;
	var uLocal_4137 = 0;
	var uLocal_4138 = 0;
	var uLocal_4139 = 0;
	var uLocal_4140 = 0;
	var uLocal_4141 = 0;
	var uLocal_4142 = 0;
	var uLocal_4143 = 0;
	var uLocal_4144 = 0;
	var uLocal_4145 = 0;
	var uLocal_4146 = 0;
	var uLocal_4147 = 0;
	var uLocal_4148 = 0;
	var uLocal_4149 = 20;
	var uLocal_4150 = 0;
	var uLocal_4151 = 0;
	var uLocal_4152 = 0;
	var uLocal_4153 = 0;
	var uLocal_4154 = 0;
	var uLocal_4155 = 0;
	var uLocal_4156 = 0;
	var uLocal_4157 = 0;
	var uLocal_4158 = 0;
	var uLocal_4159 = 0;
	var uLocal_4160 = 0;
	var uLocal_4161 = 0;
	var uLocal_4162 = 0;
	var uLocal_4163 = 0;
	var uLocal_4164 = 0;
	var uLocal_4165 = 0;
	var uLocal_4166 = 0;
	var uLocal_4167 = 0;
	var uLocal_4168 = 0;
	var uLocal_4169 = 0;
	var uLocal_4170 = 0;
	var uLocal_4171 = 0;
	var uLocal_4172 = 0;
	var uLocal_4173 = 0;
	var uLocal_4174 = 0;
	var uLocal_4175 = 0;
	var uLocal_4176 = 0;
	var uLocal_4177 = 0;
	var uLocal_4178 = 0;
	var uLocal_4179 = 0;
	var uLocal_4180 = 0;
	var uLocal_4181 = 0;
	var uLocal_4182 = 0;
	var uLocal_4183 = 0;
	var uLocal_4184 = 0;
	var uLocal_4185 = 0;
	var uLocal_4186 = 0;
	var uLocal_4187 = 0;
	var uLocal_4188 = 0;
	var uLocal_4189 = 0;
	var uLocal_4190 = 0;
	var uLocal_4191 = 0;
	var uLocal_4192 = 0;
	var uLocal_4193 = 0;
	var uLocal_4194 = 0;
	var uLocal_4195 = 0;
	var uLocal_4196 = 0;
	var uLocal_4197 = 0;
	var uLocal_4198 = 0;
	var uLocal_4199 = 0;
	var uLocal_4200 = 0;
	var uLocal_4201 = 0;
	var uLocal_4202 = 0;
	var uLocal_4203 = 0;
	var uLocal_4204 = 0;
	var uLocal_4205 = 0;
	var uLocal_4206 = 0;
	var uLocal_4207 = 0;
	var uLocal_4208 = 0;
	var uLocal_4209 = 0;
	var uLocal_4210 = 0;
	var uLocal_4211 = 0;
	var uLocal_4212 = 0;
	var uLocal_4213 = 0;
	var uLocal_4214 = 0;
	var uLocal_4215 = 0;
	var uLocal_4216 = 20;
	var uLocal_4217 = 0;
	var uLocal_4218 = 0;
	var uLocal_4219 = 0;
	var uLocal_4220 = 0;
	var uLocal_4221 = 0;
	var uLocal_4222 = 0;
	var uLocal_4223 = 0;
	var uLocal_4224 = 0;
	var uLocal_4225 = 0;
	var uLocal_4226 = 0;
	var uLocal_4227 = 0;
	var uLocal_4228 = 0;
	var uLocal_4229 = 0;
	var uLocal_4230 = 0;
	var uLocal_4231 = 0;
	var uLocal_4232 = 0;
	var uLocal_4233 = 0;
	var uLocal_4234 = 0;
	var uLocal_4235 = 0;
	var uLocal_4236 = 0;
	var uLocal_4237 = 0;
	var uLocal_4238 = 0;
	var uLocal_4239 = 0;
	var uLocal_4240 = 0;
	var uLocal_4241 = 0;
	var uLocal_4242 = 0;
	var uLocal_4243 = 0;
	var uLocal_4244 = 0;
	var uLocal_4245 = 0;
	var uLocal_4246 = 0;
	var uLocal_4247 = 0;
	var uLocal_4248 = 0;
	var uLocal_4249 = 0;
	var uLocal_4250 = 0;
	var uLocal_4251 = 0;
	var uLocal_4252 = 0;
	var uLocal_4253 = 0;
	var uLocal_4254 = 0;
	var uLocal_4255 = 0;
	var uLocal_4256 = 0;
	var uLocal_4257 = 0;
	var uLocal_4258 = 0;
	var uLocal_4259 = 0;
	var uLocal_4260 = 0;
	var uLocal_4261 = 0;
	var uLocal_4262 = 0;
	var uLocal_4263 = 0;
	var uLocal_4264 = 0;
	var uLocal_4265 = 0;
	var uLocal_4266 = 0;
	var uLocal_4267 = 0;
	var uLocal_4268 = 0;
	var uLocal_4269 = 0;
	var uLocal_4270 = 0;
	var uLocal_4271 = 0;
	var uLocal_4272 = 0;
	var uLocal_4273 = 0;
	var uLocal_4274 = 0;
	var uLocal_4275 = 0;
	var uLocal_4276 = 0;
	var uLocal_4277 = 0;
	var uLocal_4278 = 0;
	var uLocal_4279 = 0;
	var uLocal_4280 = 0;
	var uLocal_4281 = 0;
	var uLocal_4282 = 0;
	var uLocal_4283 = 20;
	var uLocal_4284 = 0;
	var uLocal_4285 = 0;
	var uLocal_4286 = 0;
	var uLocal_4287 = 0;
	var uLocal_4288 = 0;
	var uLocal_4289 = 0;
	var uLocal_4290 = 0;
	var uLocal_4291 = 0;
	var uLocal_4292 = 0;
	var uLocal_4293 = 0;
	var uLocal_4294 = 0;
	var uLocal_4295 = 0;
	var uLocal_4296 = 0;
	var uLocal_4297 = 0;
	var uLocal_4298 = 0;
	var uLocal_4299 = 0;
	var uLocal_4300 = 0;
	var uLocal_4301 = 0;
	var uLocal_4302 = 0;
	var uLocal_4303 = 0;
	var uLocal_4304 = 0;
	var uLocal_4305 = 0;
	var uLocal_4306 = 0;
	var uLocal_4307 = 0;
	var uLocal_4308 = 0;
	var uLocal_4309 = 0;
	var uLocal_4310 = 0;
	var uLocal_4311 = 0;
	var uLocal_4312 = 0;
	var uLocal_4313 = 0;
	var uLocal_4314 = 0;
	var uLocal_4315 = 0;
	var uLocal_4316 = 0;
	var uLocal_4317 = 0;
	var uLocal_4318 = 0;
	var uLocal_4319 = 0;
	var uLocal_4320 = 0;
	var uLocal_4321 = 0;
	var uLocal_4322 = 0;
	var uLocal_4323 = 0;
	var uLocal_4324 = 0;
	var uLocal_4325 = 0;
	var uLocal_4326 = 0;
	var uLocal_4327 = 0;
	var uLocal_4328 = 0;
	var uLocal_4329 = 0;
	var uLocal_4330 = 0;
	var uLocal_4331 = 0;
	var uLocal_4332 = 0;
	var uLocal_4333 = 0;
	var uLocal_4334 = 0;
	var uLocal_4335 = 0;
	var uLocal_4336 = 0;
	var uLocal_4337 = 0;
	var uLocal_4338 = 0;
	var uLocal_4339 = 0;
	var uLocal_4340 = 0;
	var uLocal_4341 = 0;
	var uLocal_4342 = 0;
	var uLocal_4343 = 0;
	var uLocal_4344 = 0;
	var uLocal_4345 = 0;
	var uLocal_4346 = 0;
	var uLocal_4347 = 0;
	var uLocal_4348 = 0;
	var uLocal_4349 = 0;
	var uLocal_4350 = 20;
	var uLocal_4351 = 0;
	var uLocal_4352 = 0;
	var uLocal_4353 = 0;
	var uLocal_4354 = 0;
	var uLocal_4355 = 0;
	var uLocal_4356 = 0;
	var uLocal_4357 = 0;
	var uLocal_4358 = 0;
	var uLocal_4359 = 0;
	var uLocal_4360 = 0;
	var uLocal_4361 = 0;
	var uLocal_4362 = 0;
	var uLocal_4363 = 0;
	var uLocal_4364 = 0;
	var uLocal_4365 = 0;
	var uLocal_4366 = 0;
	var uLocal_4367 = 0;
	var uLocal_4368 = 0;
	var uLocal_4369 = 0;
	var uLocal_4370 = 0;
	var uLocal_4371 = 0;
	var uLocal_4372 = 0;
	var uLocal_4373 = 0;
	var uLocal_4374 = 0;
	var uLocal_4375 = 0;
	var uLocal_4376 = 0;
	var uLocal_4377 = 0;
	var uLocal_4378 = 0;
	var uLocal_4379 = 0;
	var uLocal_4380 = 0;
	var uLocal_4381 = 0;
	var uLocal_4382 = 0;
	var uLocal_4383 = 0;
	var uLocal_4384 = 0;
	var uLocal_4385 = 0;
	var uLocal_4386 = 0;
	var uLocal_4387 = 0;
	var uLocal_4388 = 0;
	var uLocal_4389 = 0;
	var uLocal_4390 = 0;
	var uLocal_4391 = 0;
	var uLocal_4392 = 0;
	var uLocal_4393 = 0;
	var uLocal_4394 = 0;
	var uLocal_4395 = 0;
	var uLocal_4396 = 0;
	var uLocal_4397 = 0;
	var uLocal_4398 = 0;
	var uLocal_4399 = 0;
	var uLocal_4400 = 0;
	var uLocal_4401 = 0;
	var uLocal_4402 = 0;
	var uLocal_4403 = 0;
	var uLocal_4404 = 0;
	var uLocal_4405 = 0;
	var uLocal_4406 = 0;
	var uLocal_4407 = 0;
	var uLocal_4408 = 0;
	var uLocal_4409 = 0;
	var uLocal_4410 = 0;
	var uLocal_4411 = 0;
	var uLocal_4412 = 0;
	var uLocal_4413 = 0;
	var uLocal_4414 = 0;
	var uLocal_4415 = 0;
	var uLocal_4416 = 0;
	var uLocal_4417 = 20;
	var uLocal_4418 = 0;
	var uLocal_4419 = 0;
	var uLocal_4420 = 0;
	var uLocal_4421 = 0;
	var uLocal_4422 = 0;
	var uLocal_4423 = 0;
	var uLocal_4424 = 0;
	var uLocal_4425 = 0;
	var uLocal_4426 = 0;
	var uLocal_4427 = 0;
	var uLocal_4428 = 0;
	var uLocal_4429 = 0;
	var uLocal_4430 = 0;
	var uLocal_4431 = 0;
	var uLocal_4432 = 0;
	var uLocal_4433 = 0;
	var uLocal_4434 = 0;
	var uLocal_4435 = 0;
	var uLocal_4436 = 0;
	var uLocal_4437 = 0;
	var uLocal_4438 = 0;
	var uLocal_4439 = 0;
	var uLocal_4440 = 0;
	var uLocal_4441 = 0;
	var uLocal_4442 = 0;
	var uLocal_4443 = 0;
	var uLocal_4444 = 0;
	var uLocal_4445 = 0;
	var uLocal_4446 = 0;
	var uLocal_4447 = 0;
	var uLocal_4448 = 0;
	var uLocal_4449 = 0;
	var uLocal_4450 = 0;
	var uLocal_4451 = 0;
	var uLocal_4452 = 0;
	var uLocal_4453 = 0;
	var uLocal_4454 = 0;
	var uLocal_4455 = 0;
	var uLocal_4456 = 0;
	var uLocal_4457 = 0;
	var uLocal_4458 = 0;
	var uLocal_4459 = 0;
	var uLocal_4460 = 0;
	var uLocal_4461 = 0;
	var uLocal_4462 = 0;
	var uLocal_4463 = 0;
	var uLocal_4464 = 0;
	var uLocal_4465 = 0;
	var uLocal_4466 = 0;
	var uLocal_4467 = 0;
	var uLocal_4468 = 0;
	var uLocal_4469 = 0;
	var uLocal_4470 = 0;
	var uLocal_4471 = 0;
	var uLocal_4472 = 0;
	var uLocal_4473 = 0;
	var uLocal_4474 = 0;
	var uLocal_4475 = 0;
	var uLocal_4476 = 0;
	var uLocal_4477 = 0;
	var uLocal_4478 = 0;
	var uLocal_4479 = 0;
	var uLocal_4480 = 0;
	var uLocal_4481 = 0;
	var uLocal_4482 = 0;
	var uLocal_4483 = 0;
	var uLocal_4484 = 20;
	var uLocal_4485 = 0;
	var uLocal_4486 = 0;
	var uLocal_4487 = 0;
	var uLocal_4488 = 0;
	var uLocal_4489 = 0;
	var uLocal_4490 = 0;
	var uLocal_4491 = 0;
	var uLocal_4492 = 0;
	var uLocal_4493 = 0;
	var uLocal_4494 = 0;
	var uLocal_4495 = 0;
	var uLocal_4496 = 0;
	var uLocal_4497 = 0;
	var uLocal_4498 = 0;
	var uLocal_4499 = 0;
	var uLocal_4500 = 0;
	var uLocal_4501 = 0;
	var uLocal_4502 = 0;
	var uLocal_4503 = 0;
	var uLocal_4504 = 0;
	var uLocal_4505 = 0;
	var uLocal_4506 = 0;
	var uLocal_4507 = 0;
	var uLocal_4508 = 0;
	var uLocal_4509 = 0;
	var uLocal_4510 = 0;
	var uLocal_4511 = 0;
	var uLocal_4512 = 0;
	var uLocal_4513 = 0;
	var uLocal_4514 = 0;
	var uLocal_4515 = 0;
	var uLocal_4516 = 0;
	var uLocal_4517 = 0;
	var uLocal_4518 = 0;
	var uLocal_4519 = 0;
	var uLocal_4520 = 0;
	var uLocal_4521 = 0;
	var uLocal_4522 = 0;
	var uLocal_4523 = 0;
	var uLocal_4524 = 0;
	var uLocal_4525 = 0;
	var uLocal_4526 = 0;
	var uLocal_4527 = 0;
	var uLocal_4528 = 0;
	var uLocal_4529 = 0;
	var uLocal_4530 = 0;
	var uLocal_4531 = 0;
	var uLocal_4532 = 0;
	var uLocal_4533 = 0;
	var uLocal_4534 = 0;
	var uLocal_4535 = 0;
	var uLocal_4536 = 0;
	var uLocal_4537 = 0;
	var uLocal_4538 = 0;
	var uLocal_4539 = 0;
	var uLocal_4540 = 0;
	var uLocal_4541 = 0;
	var uLocal_4542 = 0;
	var uLocal_4543 = 0;
	var uLocal_4544 = 0;
	var uLocal_4545 = 0;
	var uLocal_4546 = 0;
	var uLocal_4547 = 0;
	var uLocal_4548 = 0;
	var uLocal_4549 = 0;
	var uLocal_4550 = 0;
	var uLocal_4551 = 20;
	var uLocal_4552 = 0;
	var uLocal_4553 = 0;
	var uLocal_4554 = 0;
	var uLocal_4555 = 0;
	var uLocal_4556 = 0;
	var uLocal_4557 = 0;
	var uLocal_4558 = 0;
	var uLocal_4559 = 0;
	var uLocal_4560 = 0;
	var uLocal_4561 = 0;
	var uLocal_4562 = 0;
	var uLocal_4563 = 0;
	var uLocal_4564 = 0;
	var uLocal_4565 = 0;
	var uLocal_4566 = 0;
	var uLocal_4567 = 0;
	var uLocal_4568 = 0;
	var uLocal_4569 = 0;
	var uLocal_4570 = 0;
	var uLocal_4571 = 0;
	var uLocal_4572 = 0;
	var uLocal_4573 = 0;
	var uLocal_4574 = 0;
	var uLocal_4575 = 0;
	var uLocal_4576 = 0;
	var uLocal_4577 = 0;
	var uLocal_4578 = 0;
	var uLocal_4579 = 0;
	var uLocal_4580 = 0;
	var uLocal_4581 = 0;
	var uLocal_4582 = 0;
	var uLocal_4583 = 0;
	var uLocal_4584 = 0;
	var uLocal_4585 = 0;
	var uLocal_4586 = 0;
	var uLocal_4587 = 0;
	var uLocal_4588 = 0;
	var uLocal_4589 = 0;
	var uLocal_4590 = 0;
	var uLocal_4591 = 0;
	var uLocal_4592 = 0;
	var uLocal_4593 = 0;
	var uLocal_4594 = 0;
	var uLocal_4595 = 0;
	var uLocal_4596 = 0;
	var uLocal_4597 = 0;
	var uLocal_4598 = 0;
	var uLocal_4599 = 0;
	var uLocal_4600 = 0;
	var uLocal_4601 = 0;
	var uLocal_4602 = 0;
	var uLocal_4603 = 0;
	var uLocal_4604 = 0;
	var uLocal_4605 = 0;
	var uLocal_4606 = 0;
	var uLocal_4607 = 0;
	var uLocal_4608 = 0;
	var uLocal_4609 = 0;
	var uLocal_4610 = 0;
	var uLocal_4611 = 0;
	var uLocal_4612 = 0;
	var uLocal_4613 = 0;
	var uLocal_4614 = 0;
	var uLocal_4615 = 0;
	var uLocal_4616 = 0;
	var uLocal_4617 = 0;
	var uLocal_4618 = 20;
	var uLocal_4619 = 0;
	var uLocal_4620 = 0;
	var uLocal_4621 = 0;
	var uLocal_4622 = 0;
	var uLocal_4623 = 0;
	var uLocal_4624 = 0;
	var uLocal_4625 = 0;
	var uLocal_4626 = 0;
	var uLocal_4627 = 0;
	var uLocal_4628 = 0;
	var uLocal_4629 = 0;
	var uLocal_4630 = 0;
	var uLocal_4631 = 0;
	var uLocal_4632 = 0;
	var uLocal_4633 = 0;
	var uLocal_4634 = 0;
	var uLocal_4635 = 0;
	var uLocal_4636 = 0;
	var uLocal_4637 = 0;
	var uLocal_4638 = 0;
	var uLocal_4639 = 0;
	var uLocal_4640 = 0;
	var uLocal_4641 = 0;
	var uLocal_4642 = 0;
	var uLocal_4643 = 0;
	var uLocal_4644 = 0;
	var uLocal_4645 = 0;
	var uLocal_4646 = 0;
	var uLocal_4647 = 0;
	var uLocal_4648 = 0;
	var uLocal_4649 = 0;
	var uLocal_4650 = 0;
	var uLocal_4651 = 0;
	var uLocal_4652 = 0;
	var uLocal_4653 = 0;
	var uLocal_4654 = 0;
	var uLocal_4655 = 0;
	var uLocal_4656 = 0;
	var uLocal_4657 = 0;
	var uLocal_4658 = 0;
	var uLocal_4659 = 0;
	var uLocal_4660 = 0;
	var uLocal_4661 = 0;
	var uLocal_4662 = 0;
	var uLocal_4663 = 0;
	var uLocal_4664 = 0;
	var uLocal_4665 = 0;
	var uLocal_4666 = 0;
	var uLocal_4667 = 0;
	var uLocal_4668 = 0;
	var uLocal_4669 = 0;
	var uLocal_4670 = 0;
	var uLocal_4671 = 0;
	var uLocal_4672 = 0;
	var uLocal_4673 = 0;
	var uLocal_4674 = 0;
	var uLocal_4675 = 0;
	var uLocal_4676 = 0;
	var uLocal_4677 = 0;
	var uLocal_4678 = 0;
	var uLocal_4679 = 0;
	var uLocal_4680 = 0;
	var uLocal_4681 = 0;
	var uLocal_4682 = 0;
	var uLocal_4683 = 0;
	var uLocal_4684 = 0;
	var uLocal_4685 = 20;
	var uLocal_4686 = 0;
	var uLocal_4687 = 0;
	var uLocal_4688 = 0;
	var uLocal_4689 = 0;
	var uLocal_4690 = 0;
	var uLocal_4691 = 0;
	var uLocal_4692 = 0;
	var uLocal_4693 = 0;
	var uLocal_4694 = 0;
	var uLocal_4695 = 0;
	var uLocal_4696 = 0;
	var uLocal_4697 = 0;
	var uLocal_4698 = 0;
	var uLocal_4699 = 0;
	var uLocal_4700 = 0;
	var uLocal_4701 = 0;
	var uLocal_4702 = 0;
	var uLocal_4703 = 0;
	var uLocal_4704 = 0;
	var uLocal_4705 = 0;
	var uLocal_4706 = 0;
	var uLocal_4707 = 0;
	var uLocal_4708 = 0;
	var uLocal_4709 = 0;
	var uLocal_4710 = 0;
	var uLocal_4711 = 0;
	var uLocal_4712 = 0;
	var uLocal_4713 = 0;
	var uLocal_4714 = 0;
	var uLocal_4715 = 0;
	var uLocal_4716 = 0;
	var uLocal_4717 = 0;
	var uLocal_4718 = 0;
	var uLocal_4719 = 0;
	var uLocal_4720 = 0;
	var uLocal_4721 = 0;
	var uLocal_4722 = 0;
	var uLocal_4723 = 0;
	var uLocal_4724 = 0;
	var uLocal_4725 = 0;
	var uLocal_4726 = 0;
	var uLocal_4727 = 0;
	var uLocal_4728 = 0;
	var uLocal_4729 = 0;
	var uLocal_4730 = 0;
	var uLocal_4731 = 0;
	var uLocal_4732 = 0;
	var uLocal_4733 = 0;
	var uLocal_4734 = 0;
	var uLocal_4735 = 0;
	var uLocal_4736 = 0;
	var uLocal_4737 = 0;
	var uLocal_4738 = 0;
	var uLocal_4739 = 0;
	var uLocal_4740 = 0;
	var uLocal_4741 = 0;
	var uLocal_4742 = 0;
	var uLocal_4743 = 0;
	var uLocal_4744 = 0;
	var uLocal_4745 = 0;
	var uLocal_4746 = 0;
	var uLocal_4747 = 0;
	var uLocal_4748 = 0;
	var uLocal_4749 = 0;
	var uLocal_4750 = 0;
	var uLocal_4751 = 0;
	var uLocal_4752 = 20;
	var uLocal_4753 = 0;
	var uLocal_4754 = 0;
	var uLocal_4755 = 0;
	var uLocal_4756 = 0;
	var uLocal_4757 = 0;
	var uLocal_4758 = 0;
	var uLocal_4759 = 0;
	var uLocal_4760 = 0;
	var uLocal_4761 = 0;
	var uLocal_4762 = 0;
	var uLocal_4763 = 0;
	var uLocal_4764 = 0;
	var uLocal_4765 = 0;
	var uLocal_4766 = 0;
	var uLocal_4767 = 0;
	var uLocal_4768 = 0;
	var uLocal_4769 = 0;
	var uLocal_4770 = 0;
	var uLocal_4771 = 0;
	var uLocal_4772 = 0;
	var uLocal_4773 = 0;
	var uLocal_4774 = 0;
	var uLocal_4775 = 0;
	var uLocal_4776 = 0;
	var uLocal_4777 = 0;
	var uLocal_4778 = 0;
	var uLocal_4779 = 0;
	var uLocal_4780 = 0;
	var uLocal_4781 = 0;
	var uLocal_4782 = 0;
	var uLocal_4783 = 0;
	var uLocal_4784 = 0;
	var uLocal_4785 = 0;
	var uLocal_4786 = 0;
	var uLocal_4787 = 0;
	var uLocal_4788 = 0;
	var uLocal_4789 = 0;
	var uLocal_4790 = 0;
	var uLocal_4791 = 0;
	var uLocal_4792 = 0;
	var uLocal_4793 = 0;
	var uLocal_4794 = 0;
	var uLocal_4795 = 0;
	var uLocal_4796 = 0;
	var uLocal_4797 = 0;
	var uLocal_4798 = 0;
	var uLocal_4799 = 0;
	var uLocal_4800 = 0;
	var uLocal_4801 = 0;
	var uLocal_4802 = 0;
	var uLocal_4803 = 0;
	var uLocal_4804 = 0;
	var uLocal_4805 = 0;
	var uLocal_4806 = 0;
	var uLocal_4807 = 0;
	var uLocal_4808 = 0;
	var uLocal_4809 = 0;
	var uLocal_4810 = 0;
	var uLocal_4811 = 0;
	var uLocal_4812 = 0;
	var uLocal_4813 = 0;
	var uLocal_4814 = 0;
	var uLocal_4815 = 0;
	var uLocal_4816 = 0;
	var uLocal_4817 = 0;
	var uLocal_4818 = 0;
	var uLocal_4819 = 20;
	var uLocal_4820 = 0;
	var uLocal_4821 = 0;
	var uLocal_4822 = 0;
	var uLocal_4823 = 0;
	var uLocal_4824 = 0;
	var uLocal_4825 = 0;
	var uLocal_4826 = 0;
	var uLocal_4827 = 0;
	var uLocal_4828 = 0;
	var uLocal_4829 = 0;
	var uLocal_4830 = 0;
	var uLocal_4831 = 0;
	var uLocal_4832 = 0;
	var uLocal_4833 = 0;
	var uLocal_4834 = 0;
	var uLocal_4835 = 0;
	var uLocal_4836 = 0;
	var uLocal_4837 = 0;
	var uLocal_4838 = 0;
	var uLocal_4839 = 0;
	var uLocal_4840 = 0;
	var uLocal_4841 = 0;
	var uLocal_4842 = 0;
	var uLocal_4843 = 0;
	var uLocal_4844 = 0;
	var uLocal_4845 = 0;
	var uLocal_4846 = 0;
	var uLocal_4847 = 0;
	var uLocal_4848 = 0;
	var uLocal_4849 = 0;
	var uLocal_4850 = 0;
	var uLocal_4851 = 0;
	var uLocal_4852 = 0;
	var uLocal_4853 = 0;
	var uLocal_4854 = 0;
	var uLocal_4855 = 0;
	var uLocal_4856 = 0;
	var uLocal_4857 = 0;
	var uLocal_4858 = 0;
	var uLocal_4859 = 0;
	var uLocal_4860 = 0;
	var uLocal_4861 = 0;
	var uLocal_4862 = 0;
	var uLocal_4863 = 0;
	var uLocal_4864 = 0;
	var uLocal_4865 = 0;
	var uLocal_4866 = 0;
	var uLocal_4867 = 0;
	var uLocal_4868 = 0;
	var uLocal_4869 = 0;
	var uLocal_4870 = 0;
	var uLocal_4871 = 0;
	var uLocal_4872 = 0;
	var uLocal_4873 = 0;
	var uLocal_4874 = 0;
	var uLocal_4875 = 0;
	var uLocal_4876 = 0;
	var uLocal_4877 = 0;
	var uLocal_4878 = 0;
	var uLocal_4879 = 0;
	var uLocal_4880 = 0;
	var uLocal_4881 = 0;
	var uLocal_4882 = 0;
	var uLocal_4883 = 0;
	var uLocal_4884 = 0;
	var uLocal_4885 = 0;
	var uLocal_4886 = 20;
	var uLocal_4887 = 0;
	var uLocal_4888 = 0;
	var uLocal_4889 = 0;
	var uLocal_4890 = 0;
	var uLocal_4891 = 0;
	var uLocal_4892 = 0;
	var uLocal_4893 = 0;
	var uLocal_4894 = 0;
	var uLocal_4895 = 0;
	var uLocal_4896 = 0;
	var uLocal_4897 = 0;
	var uLocal_4898 = 0;
	var uLocal_4899 = 0;
	var uLocal_4900 = 0;
	var uLocal_4901 = 0;
	var uLocal_4902 = 0;
	var uLocal_4903 = 0;
	var uLocal_4904 = 0;
	var uLocal_4905 = 0;
	var uLocal_4906 = 0;
	var uLocal_4907 = 0;
	var uLocal_4908 = 0;
	var uLocal_4909 = 0;
	var uLocal_4910 = 0;
	var uLocal_4911 = 0;
	var uLocal_4912 = 0;
	var uLocal_4913 = 0;
	var uLocal_4914 = 0;
	var uLocal_4915 = 0;
	var uLocal_4916 = 0;
	var uLocal_4917 = 0;
	var uLocal_4918 = 0;
	var uLocal_4919 = 0;
	var uLocal_4920 = 0;
	var uLocal_4921 = 0;
	var uLocal_4922 = 0;
	var uLocal_4923 = 0;
	var uLocal_4924 = 0;
	var uLocal_4925 = 0;
	var uLocal_4926 = 0;
	var uLocal_4927 = 0;
	var uLocal_4928 = 0;
	var uLocal_4929 = 0;
	var uLocal_4930 = 0;
	var uLocal_4931 = 0;
	var uLocal_4932 = 0;
	var uLocal_4933 = 0;
	var uLocal_4934 = 0;
	var uLocal_4935 = 0;
	var uLocal_4936 = 0;
	var uLocal_4937 = 0;
	var uLocal_4938 = 0;
	var uLocal_4939 = 0;
	var uLocal_4940 = 0;
	var uLocal_4941 = 0;
	var uLocal_4942 = 0;
	var uLocal_4943 = 0;
	var uLocal_4944 = 0;
	var uLocal_4945 = 0;
	var uLocal_4946 = 0;
	var uLocal_4947 = 0;
	var uLocal_4948 = 0;
	var uLocal_4949 = 0;
	var uLocal_4950 = 0;
	var uLocal_4951 = 0;
	var uLocal_4952 = 0;
	var uLocal_4953 = 20;
	var uLocal_4954 = 0;
	var uLocal_4955 = 0;
	var uLocal_4956 = 0;
	var uLocal_4957 = 0;
	var uLocal_4958 = 0;
	var uLocal_4959 = 0;
	var uLocal_4960 = 0;
	var uLocal_4961 = 0;
	var uLocal_4962 = 0;
	var uLocal_4963 = 0;
	var uLocal_4964 = 0;
	var uLocal_4965 = 0;
	var uLocal_4966 = 0;
	var uLocal_4967 = 0;
	var uLocal_4968 = 0;
	var uLocal_4969 = 0;
	var uLocal_4970 = 0;
	var uLocal_4971 = 0;
	var uLocal_4972 = 0;
	var uLocal_4973 = 0;
	var uLocal_4974 = 0;
	var uLocal_4975 = 0;
	var uLocal_4976 = 0;
	var uLocal_4977 = 0;
	var uLocal_4978 = 0;
	var uLocal_4979 = 0;
	var uLocal_4980 = 0;
	var uLocal_4981 = 0;
	var uLocal_4982 = 0;
	var uLocal_4983 = 0;
	var uLocal_4984 = 0;
	var uLocal_4985 = 0;
	var uLocal_4986 = 0;
	var uLocal_4987 = 0;
	var uLocal_4988 = 0;
	var uLocal_4989 = 0;
	var uLocal_4990 = 0;
	var uLocal_4991 = 0;
	var uLocal_4992 = 0;
	var uLocal_4993 = 0;
	var uLocal_4994 = 0;
	var uLocal_4995 = 0;
	var uLocal_4996 = 0;
	var uLocal_4997 = 0;
	var uLocal_4998 = 0;
	var uLocal_4999 = 0;
	var uLocal_5000 = 0;
	var uLocal_5001 = 0;
	var uLocal_5002 = 0;
	var uLocal_5003 = 0;
	var uLocal_5004 = 0;
	var uLocal_5005 = 0;
	var uLocal_5006 = 0;
	var uLocal_5007 = 0;
	var uLocal_5008 = 0;
	var uLocal_5009 = 0;
	var uLocal_5010 = 0;
	var uLocal_5011 = 0;
	var uLocal_5012 = 0;
	var uLocal_5013 = 0;
	var uLocal_5014 = 0;
	var uLocal_5015 = 0;
	var uLocal_5016 = 0;
	var uLocal_5017 = 0;
	var uLocal_5018 = 0;
	var uLocal_5019 = 0;
	var uLocal_5020 = 20;
	var uLocal_5021 = 0;
	var uLocal_5022 = 0;
	var uLocal_5023 = 0;
	var uLocal_5024 = 0;
	var uLocal_5025 = 0;
	var uLocal_5026 = 0;
	var uLocal_5027 = 0;
	var uLocal_5028 = 0;
	var uLocal_5029 = 0;
	var uLocal_5030 = 0;
	var uLocal_5031 = 0;
	var uLocal_5032 = 0;
	var uLocal_5033 = 0;
	var uLocal_5034 = 0;
	var uLocal_5035 = 0;
	var uLocal_5036 = 0;
	var uLocal_5037 = 0;
	var uLocal_5038 = 0;
	var uLocal_5039 = 0;
	var uLocal_5040 = 0;
	var uLocal_5041 = 0;
	var uLocal_5042 = 0;
	var uLocal_5043 = 0;
	var uLocal_5044 = 0;
	var uLocal_5045 = 0;
	var uLocal_5046 = 0;
	var uLocal_5047 = 0;
	var uLocal_5048 = 0;
	var uLocal_5049 = 0;
	var uLocal_5050 = 0;
	var uLocal_5051 = 0;
	var uLocal_5052 = 0;
	var uLocal_5053 = 0;
	var uLocal_5054 = 0;
	var uLocal_5055 = 0;
	var uLocal_5056 = 0;
	var uLocal_5057 = 0;
	var uLocal_5058 = 0;
	var uLocal_5059 = 0;
	var uLocal_5060 = 0;
	var uLocal_5061 = 0;
	var uLocal_5062 = 0;
	var uLocal_5063 = 0;
	var uLocal_5064 = 0;
	var uLocal_5065 = 0;
	var uLocal_5066 = 0;
	var uLocal_5067 = 0;
	var uLocal_5068 = 0;
	var uLocal_5069 = 0;
	var uLocal_5070 = 0;
	var uLocal_5071 = 0;
	var uLocal_5072 = 0;
	var uLocal_5073 = 0;
	var uLocal_5074 = 0;
	var uLocal_5075 = 0;
	var uLocal_5076 = 0;
	var uLocal_5077 = 0;
	var uLocal_5078 = 0;
	var uLocal_5079 = 0;
	var uLocal_5080 = 0;
	var uLocal_5081 = 0;
	var uLocal_5082 = 0;
	var uLocal_5083 = 0;
	var uLocal_5084 = 0;
	var uLocal_5085 = 0;
	var uLocal_5086 = 0;
	var uLocal_5087 = 20;
	var uLocal_5088 = 0;
	var uLocal_5089 = 0;
	var uLocal_5090 = 0;
	var uLocal_5091 = 0;
	var uLocal_5092 = 0;
	var uLocal_5093 = 0;
	var uLocal_5094 = 0;
	var uLocal_5095 = 0;
	var uLocal_5096 = 0;
	var uLocal_5097 = 0;
	var uLocal_5098 = 0;
	var uLocal_5099 = 0;
	var uLocal_5100 = 0;
	var uLocal_5101 = 0;
	var uLocal_5102 = 0;
	var uLocal_5103 = 0;
	var uLocal_5104 = 0;
	var uLocal_5105 = 0;
	var uLocal_5106 = 0;
	var uLocal_5107 = 0;
	var uLocal_5108 = 0;
	var uLocal_5109 = 0;
	var uLocal_5110 = 0;
	var uLocal_5111 = 0;
	var uLocal_5112 = 0;
	var uLocal_5113 = 0;
	var uLocal_5114 = 0;
	var uLocal_5115 = 0;
	var uLocal_5116 = 0;
	var uLocal_5117 = 0;
	var uLocal_5118 = 0;
	var uLocal_5119 = 0;
	var uLocal_5120 = 0;
	var uLocal_5121 = 0;
	var uLocal_5122 = 0;
	var uLocal_5123 = 0;
	var uLocal_5124 = 0;
	var uLocal_5125 = 0;
	var uLocal_5126 = 0;
	var uLocal_5127 = 0;
	var uLocal_5128 = 0;
	var uLocal_5129 = 0;
	var uLocal_5130 = 0;
	var uLocal_5131 = 0;
	var uLocal_5132 = 0;
	var uLocal_5133 = 0;
	var uLocal_5134 = 0;
	var uLocal_5135 = 0;
	var uLocal_5136 = 0;
	var uLocal_5137 = 0;
	var uLocal_5138 = 0;
	var uLocal_5139 = 0;
	var uLocal_5140 = 0;
	var uLocal_5141 = 0;
	var uLocal_5142 = 0;
	var uLocal_5143 = 0;
	var uLocal_5144 = 0;
	var uLocal_5145 = 0;
	var uLocal_5146 = 0;
	var uLocal_5147 = 0;
	var uLocal_5148 = 0;
	var uLocal_5149 = 0;
	var uLocal_5150 = 0;
	var uLocal_5151 = 0;
	var uLocal_5152 = 0;
	var uLocal_5153 = 0;
	var uLocal_5154 = 20;
	var uLocal_5155 = 0;
	var uLocal_5156 = 0;
	var uLocal_5157 = 0;
	var uLocal_5158 = 0;
	var uLocal_5159 = 0;
	var uLocal_5160 = 0;
	var uLocal_5161 = 0;
	var uLocal_5162 = 0;
	var uLocal_5163 = 0;
	var uLocal_5164 = 0;
	var uLocal_5165 = 0;
	var uLocal_5166 = 0;
	var uLocal_5167 = 0;
	var uLocal_5168 = 0;
	var uLocal_5169 = 0;
	var uLocal_5170 = 0;
	var uLocal_5171 = 0;
	var uLocal_5172 = 0;
	var uLocal_5173 = 0;
	var uLocal_5174 = 0;
	var uLocal_5175 = 0;
	var uLocal_5176 = 0;
	var uLocal_5177 = 0;
	var uLocal_5178 = 0;
	var uLocal_5179 = 0;
	var uLocal_5180 = 0;
	var uLocal_5181 = 0;
	var uLocal_5182 = 0;
	var uLocal_5183 = 0;
	var uLocal_5184 = 0;
	var uLocal_5185 = 0;
	var uLocal_5186 = 0;
	var uLocal_5187 = 0;
	var uLocal_5188 = 0;
	var uLocal_5189 = 0;
	var uLocal_5190 = 0;
	var uLocal_5191 = 0;
	var uLocal_5192 = 0;
	var uLocal_5193 = 0;
	var uLocal_5194 = 0;
	var uLocal_5195 = 0;
	var uLocal_5196 = 0;
	var uLocal_5197 = 0;
	var uLocal_5198 = 0;
	var uLocal_5199 = 0;
	var uLocal_5200 = 0;
	var uLocal_5201 = 0;
	var uLocal_5202 = 0;
	var uLocal_5203 = 0;
	var uLocal_5204 = 0;
	var uLocal_5205 = 0;
	var uLocal_5206 = 0;
	var uLocal_5207 = 0;
	var uLocal_5208 = 0;
	var uLocal_5209 = 0;
	var uLocal_5210 = 0;
	var uLocal_5211 = 0;
	var uLocal_5212 = 0;
	var uLocal_5213 = 0;
	var uLocal_5214 = 0;
	var uLocal_5215 = 0;
	var uLocal_5216 = 0;
	var uLocal_5217 = 0;
	var uLocal_5218 = 0;
	var uLocal_5219 = 0;
	var uLocal_5220 = 0;
	var uLocal_5221 = 20;
	var uLocal_5222 = 0;
	var uLocal_5223 = 0;
	var uLocal_5224 = 0;
	var uLocal_5225 = 0;
	var uLocal_5226 = 0;
	var uLocal_5227 = 0;
	var uLocal_5228 = 0;
	var uLocal_5229 = 0;
	var uLocal_5230 = 0;
	var uLocal_5231 = 0;
	var uLocal_5232 = 0;
	var uLocal_5233 = 0;
	var uLocal_5234 = 0;
	var uLocal_5235 = 0;
	var uLocal_5236 = 0;
	var uLocal_5237 = 0;
	var uLocal_5238 = 0;
	var uLocal_5239 = 0;
	var uLocal_5240 = 0;
	var uLocal_5241 = 0;
	var uLocal_5242 = 0;
	var uLocal_5243 = 0;
	var uLocal_5244 = 0;
	var uLocal_5245 = 0;
	var uLocal_5246 = 0;
	var uLocal_5247 = 0;
	var uLocal_5248 = 0;
	var uLocal_5249 = 0;
	var uLocal_5250 = 0;
	var uLocal_5251 = 0;
	var uLocal_5252 = 0;
	var uLocal_5253 = 0;
	var uLocal_5254 = 0;
	var uLocal_5255 = 0;
	var uLocal_5256 = 0;
	var uLocal_5257 = 0;
	var uLocal_5258 = 0;
	var uLocal_5259 = 0;
	var uLocal_5260 = 0;
	var uLocal_5261 = 0;
	var uLocal_5262 = 0;
	var uLocal_5263 = 0;
	var uLocal_5264 = 0;
	var uLocal_5265 = 0;
	var uLocal_5266 = 0;
	var uLocal_5267 = 0;
	var uLocal_5268 = 0;
	var uLocal_5269 = 0;
	var uLocal_5270 = 0;
	var uLocal_5271 = 0;
	var uLocal_5272 = 0;
	var uLocal_5273 = 0;
	var uLocal_5274 = 0;
	var uLocal_5275 = 0;
	var uLocal_5276 = 0;
	var uLocal_5277 = 0;
	var uLocal_5278 = 0;
	var uLocal_5279 = 0;
	var uLocal_5280 = 0;
	var uLocal_5281 = 0;
	var uLocal_5282 = 0;
	var uLocal_5283 = 0;
	var uLocal_5284 = 0;
	var uLocal_5285 = 0;
	var uLocal_5286 = 0;
	var uLocal_5287 = 0;
	var uLocal_5288 = 20;
	var uLocal_5289 = 0;
	var uLocal_5290 = 0;
	var uLocal_5291 = 0;
	var uLocal_5292 = 0;
	var uLocal_5293 = 0;
	var uLocal_5294 = 0;
	var uLocal_5295 = 0;
	var uLocal_5296 = 0;
	var uLocal_5297 = 0;
	var uLocal_5298 = 0;
	var uLocal_5299 = 0;
	var uLocal_5300 = 0;
	var uLocal_5301 = 0;
	var uLocal_5302 = 0;
	var uLocal_5303 = 0;
	var uLocal_5304 = 0;
	var uLocal_5305 = 0;
	var uLocal_5306 = 0;
	var uLocal_5307 = 0;
	var uLocal_5308 = 0;
	var uLocal_5309 = 0;
	var uLocal_5310 = 0;
	var uLocal_5311 = 0;
	var uLocal_5312 = 0;
	var uLocal_5313 = 0;
	var uLocal_5314 = 0;
	var uLocal_5315 = 0;
	var uLocal_5316 = 0;
	var uLocal_5317 = 0;
	var uLocal_5318 = 0;
	var uLocal_5319 = 0;
	var uLocal_5320 = 0;
	var uLocal_5321 = 0;
	var uLocal_5322 = 0;
	var uLocal_5323 = 0;
	var uLocal_5324 = 0;
	var uLocal_5325 = 0;
	var uLocal_5326 = 0;
	var uLocal_5327 = 0;
	var uLocal_5328 = 0;
	var uLocal_5329 = 0;
	var uLocal_5330 = 0;
	var uLocal_5331 = 0;
	var uLocal_5332 = 0;
	var uLocal_5333 = 0;
	var uLocal_5334 = 0;
	var uLocal_5335 = 0;
	var uLocal_5336 = 0;
	var uLocal_5337 = 0;
	var uLocal_5338 = 0;
	var uLocal_5339 = 0;
	var uLocal_5340 = 0;
	var uLocal_5341 = 0;
	var uLocal_5342 = 0;
	var uLocal_5343 = 0;
	var uLocal_5344 = 0;
	var uLocal_5345 = 0;
	var uLocal_5346 = 0;
	var uLocal_5347 = 0;
	var uLocal_5348 = 0;
	var uLocal_5349 = 0;
	var uLocal_5350 = 0;
	var uLocal_5351 = 0;
	var uLocal_5352 = 0;
	var uLocal_5353 = 0;
	var uLocal_5354 = 0;
	var uLocal_5355 = 20;
	var uLocal_5356 = 0;
	var uLocal_5357 = 0;
	var uLocal_5358 = 0;
	var uLocal_5359 = 0;
	var uLocal_5360 = 0;
	var uLocal_5361 = 0;
	var uLocal_5362 = 0;
	var uLocal_5363 = 0;
	var uLocal_5364 = 0;
	var uLocal_5365 = 0;
	var uLocal_5366 = 0;
	var uLocal_5367 = 0;
	var uLocal_5368 = 0;
	var uLocal_5369 = 0;
	var uLocal_5370 = 0;
	var uLocal_5371 = 0;
	var uLocal_5372 = 0;
	var uLocal_5373 = 0;
	var uLocal_5374 = 0;
	var uLocal_5375 = 0;
	var uLocal_5376 = 0;
	var uLocal_5377 = 0;
	var uLocal_5378 = 0;
	var uLocal_5379 = 0;
	var uLocal_5380 = 0;
	var uLocal_5381 = 0;
	var uLocal_5382 = 0;
	var uLocal_5383 = 0;
	var uLocal_5384 = 0;
	var uLocal_5385 = 0;
	var uLocal_5386 = 0;
	var uLocal_5387 = 0;
	var uLocal_5388 = 0;
	var uLocal_5389 = 0;
	var uLocal_5390 = 0;
	var uLocal_5391 = 0;
	var uLocal_5392 = 0;
	var uLocal_5393 = 0;
	var uLocal_5394 = 0;
	var uLocal_5395 = 0;
	var uLocal_5396 = 0;
	var uLocal_5397 = 0;
	var uLocal_5398 = 0;
	var uLocal_5399 = 0;
	var uLocal_5400 = 0;
	var uLocal_5401 = 0;
	var uLocal_5402 = 0;
	var uLocal_5403 = 0;
	var uLocal_5404 = 0;
	var uLocal_5405 = 0;
	var uLocal_5406 = 0;
	var uLocal_5407 = 0;
	var uLocal_5408 = 0;
	var uLocal_5409 = 0;
	var uLocal_5410 = 0;
	var uLocal_5411 = 0;
	var uLocal_5412 = 0;
	var uLocal_5413 = 0;
	var uLocal_5414 = 0;
	var uLocal_5415 = 0;
	var uLocal_5416 = 0;
	var uLocal_5417 = 0;
	var uLocal_5418 = 0;
	var uLocal_5419 = 0;
	var uLocal_5420 = 0;
	var uLocal_5421 = 0;
	var uLocal_5422 = 20;
	var uLocal_5423 = 0;
	var uLocal_5424 = 0;
	var uLocal_5425 = 0;
	var uLocal_5426 = 0;
	var uLocal_5427 = 0;
	var uLocal_5428 = 0;
	var uLocal_5429 = 0;
	var uLocal_5430 = 0;
	var uLocal_5431 = 0;
	var uLocal_5432 = 0;
	var uLocal_5433 = 0;
	var uLocal_5434 = 0;
	var uLocal_5435 = 0;
	var uLocal_5436 = 0;
	var uLocal_5437 = 0;
	var uLocal_5438 = 0;
	var uLocal_5439 = 0;
	var uLocal_5440 = 0;
	var uLocal_5441 = 0;
	var uLocal_5442 = 0;
	var uLocal_5443 = 0;
	var uLocal_5444 = 0;
	var uLocal_5445 = 0;
	var uLocal_5446 = 0;
	var uLocal_5447 = 0;
	var uLocal_5448 = 0;
	var uLocal_5449 = 0;
	var uLocal_5450 = 0;
	var uLocal_5451 = 0;
	var uLocal_5452 = 0;
	var uLocal_5453 = 0;
	var uLocal_5454 = 0;
	var uLocal_5455 = 0;
	var uLocal_5456 = 0;
	var uLocal_5457 = 0;
	var uLocal_5458 = 0;
	var uLocal_5459 = 0;
	var uLocal_5460 = 0;
	var uLocal_5461 = 0;
	var uLocal_5462 = 0;
	var uLocal_5463 = 0;
	var uLocal_5464 = 0;
	var uLocal_5465 = 0;
	var uLocal_5466 = 0;
	var uLocal_5467 = 0;
	var uLocal_5468 = 0;
	var uLocal_5469 = 0;
	var uLocal_5470 = 0;
	var uLocal_5471 = 0;
	var uLocal_5472 = 0;
	var uLocal_5473 = 0;
	var uLocal_5474 = 0;
	var uLocal_5475 = 0;
	var uLocal_5476 = 0;
	var uLocal_5477 = 0;
	var uLocal_5478 = 0;
	var uLocal_5479 = 0;
	var uLocal_5480 = 0;
	var uLocal_5481 = 0;
	var uLocal_5482 = 0;
	var uLocal_5483 = 0;
	var uLocal_5484 = 0;
	var uLocal_5485 = 0;
	var uLocal_5486 = 0;
	var uLocal_5487 = 0;
	var uLocal_5488 = 0;
	var uLocal_5489 = 20;
	var uLocal_5490 = 0;
	var uLocal_5491 = 0;
	var uLocal_5492 = 0;
	var uLocal_5493 = 0;
	var uLocal_5494 = 0;
	var uLocal_5495 = 0;
	var uLocal_5496 = 0;
	var uLocal_5497 = 0;
	var uLocal_5498 = 0;
	var uLocal_5499 = 0;
	var uLocal_5500 = 0;
	var uLocal_5501 = 0;
	var uLocal_5502 = 0;
	var uLocal_5503 = 0;
	var uLocal_5504 = 0;
	var uLocal_5505 = 0;
	var uLocal_5506 = 0;
	var uLocal_5507 = 0;
	var uLocal_5508 = 0;
	var uLocal_5509 = 0;
	var uLocal_5510 = 0;
	var uLocal_5511 = 0;
	var uLocal_5512 = 0;
	var uLocal_5513 = 0;
	var uLocal_5514 = 0;
	var uLocal_5515 = 0;
	var uLocal_5516 = 0;
	var uLocal_5517 = 0;
	var uLocal_5518 = 0;
	var uLocal_5519 = 0;
	var uLocal_5520 = 0;
	var uLocal_5521 = 0;
	var uLocal_5522 = 0;
	var uLocal_5523 = 0;
	var uLocal_5524 = 0;
	var uLocal_5525 = 0;
	var uLocal_5526 = 0;
	var uLocal_5527 = 0;
	var uLocal_5528 = 0;
	var uLocal_5529 = 0;
	var uLocal_5530 = 0;
	var uLocal_5531 = 0;
	var uLocal_5532 = 0;
	var uLocal_5533 = 0;
	var uLocal_5534 = 0;
	var uLocal_5535 = 0;
	var uLocal_5536 = 0;
	var uLocal_5537 = 0;
	var uLocal_5538 = 0;
	var uLocal_5539 = 0;
	var uLocal_5540 = 0;
	var uLocal_5541 = 0;
	var uLocal_5542 = 0;
	var uLocal_5543 = 0;
	var uLocal_5544 = 0;
	var uLocal_5545 = 0;
	var uLocal_5546 = 0;
	var uLocal_5547 = 0;
	var uLocal_5548 = 0;
	var uLocal_5549 = 0;
	var uLocal_5550 = 0;
	var uLocal_5551 = 0;
	var uLocal_5552 = 0;
	var uLocal_5553 = 0;
	var uLocal_5554 = 0;
	var uLocal_5555 = 0;
	var uLocal_5556 = 20;
	var uLocal_5557 = 0;
	var uLocal_5558 = 0;
	var uLocal_5559 = 0;
	var uLocal_5560 = 0;
	var uLocal_5561 = 0;
	var uLocal_5562 = 0;
	var uLocal_5563 = 0;
	var uLocal_5564 = 0;
	var uLocal_5565 = 0;
	var uLocal_5566 = 0;
	var uLocal_5567 = 0;
	var uLocal_5568 = 0;
	var uLocal_5569 = 0;
	var uLocal_5570 = 0;
	var uLocal_5571 = 0;
	var uLocal_5572 = 0;
	var uLocal_5573 = 0;
	var uLocal_5574 = 0;
	var uLocal_5575 = 0;
	var uLocal_5576 = 0;
	var uLocal_5577 = 0;
	var uLocal_5578 = 0;
	var uLocal_5579 = 0;
	var uLocal_5580 = 0;
	var uLocal_5581 = 0;
	var uLocal_5582 = 0;
	var uLocal_5583 = 0;
	var uLocal_5584 = 0;
	var uLocal_5585 = 0;
	var uLocal_5586 = 0;
	var uLocal_5587 = 0;
	var uLocal_5588 = 0;
	var uLocal_5589 = 0;
	var uLocal_5590 = 0;
	var uLocal_5591 = 0;
	var uLocal_5592 = 0;
	var uLocal_5593 = 0;
	var uLocal_5594 = 0;
	var uLocal_5595 = 0;
	var uLocal_5596 = 0;
	var uLocal_5597 = 0;
	var uLocal_5598 = 0;
	var uLocal_5599 = 0;
	var uLocal_5600 = 0;
	var uLocal_5601 = 0;
	var uLocal_5602 = 0;
	var uLocal_5603 = 0;
	var uLocal_5604 = 0;
	var uLocal_5605 = 0;
	var uLocal_5606 = 0;
	var uLocal_5607 = 0;
	var uLocal_5608 = 0;
	var uLocal_5609 = 0;
	var uLocal_5610 = 0;
	var uLocal_5611 = 0;
	var uLocal_5612 = 0;
	var uLocal_5613 = 0;
	var uLocal_5614 = 0;
	var uLocal_5615 = 0;
	var uLocal_5616 = 0;
	var uLocal_5617 = 0;
	var uLocal_5618 = 0;
	var uLocal_5619 = 0;
	var uLocal_5620 = 0;
	var uLocal_5621 = 0;
	var uLocal_5622 = 0;
	var uLocal_5623 = 20;
	var uLocal_5624 = 0;
	var uLocal_5625 = 0;
	var uLocal_5626 = 0;
	var uLocal_5627 = 0;
	var uLocal_5628 = 0;
	var uLocal_5629 = 0;
	var uLocal_5630 = 0;
	var uLocal_5631 = 0;
	var uLocal_5632 = 0;
	var uLocal_5633 = 0;
	var uLocal_5634 = 0;
	var uLocal_5635 = 0;
	var uLocal_5636 = 0;
	var uLocal_5637 = 0;
	var uLocal_5638 = 0;
	var uLocal_5639 = 0;
	var uLocal_5640 = 0;
	var uLocal_5641 = 0;
	var uLocal_5642 = 0;
	var uLocal_5643 = 0;
	var uLocal_5644 = 0;
	var uLocal_5645 = 0;
	var uLocal_5646 = 0;
	var uLocal_5647 = 0;
	var uLocal_5648 = 0;
	var uLocal_5649 = 0;
	var uLocal_5650 = 0;
	var uLocal_5651 = 0;
	var uLocal_5652 = 0;
	var uLocal_5653 = 0;
	var uLocal_5654 = 0;
	var uLocal_5655 = 0;
	var uLocal_5656 = 0;
	var uLocal_5657 = 0;
	var uLocal_5658 = 0;
	var uLocal_5659 = 0;
	var uLocal_5660 = 0;
	var uLocal_5661 = 0;
	var uLocal_5662 = 0;
	var uLocal_5663 = 0;
	var uLocal_5664 = 0;
	var uLocal_5665 = 0;
	var uLocal_5666 = 0;
	var uLocal_5667 = 0;
	var uLocal_5668 = 0;
	var uLocal_5669 = 0;
	var uLocal_5670 = 0;
	var uLocal_5671 = 0;
	var uLocal_5672 = 0;
	var uLocal_5673 = 0;
	var uLocal_5674 = 0;
	var uLocal_5675 = 0;
	var uLocal_5676 = 0;
	var uLocal_5677 = 0;
	var uLocal_5678 = 0;
	var uLocal_5679 = 0;
	var uLocal_5680 = 0;
	var uLocal_5681 = 0;
	var uLocal_5682 = 0;
	var uLocal_5683 = 0;
	var uLocal_5684 = 0;
	var uLocal_5685 = 0;
	var uLocal_5686 = 0;
	var uLocal_5687 = 0;
	var uLocal_5688 = 0;
	var uLocal_5689 = 0;
	var uLocal_5690 = 20;
	var uLocal_5691 = 0;
	var uLocal_5692 = 0;
	var uLocal_5693 = 0;
	var uLocal_5694 = 0;
	var uLocal_5695 = 0;
	var uLocal_5696 = 0;
	var uLocal_5697 = 0;
	var uLocal_5698 = 0;
	var uLocal_5699 = 0;
	var uLocal_5700 = 0;
	var uLocal_5701 = 0;
	var uLocal_5702 = 0;
	var uLocal_5703 = 0;
	var uLocal_5704 = 0;
	var uLocal_5705 = 0;
	var uLocal_5706 = 0;
	var uLocal_5707 = 0;
	var uLocal_5708 = 0;
	var uLocal_5709 = 0;
	var uLocal_5710 = 0;
	var uLocal_5711 = 0;
	var uLocal_5712 = 0;
	var uLocal_5713 = 0;
	var uLocal_5714 = 0;
	var uLocal_5715 = 0;
	var uLocal_5716 = 0;
	var uLocal_5717 = 0;
	var uLocal_5718 = 0;
	var uLocal_5719 = 0;
	var uLocal_5720 = 0;
	var uLocal_5721 = 0;
	var uLocal_5722 = 0;
	var uLocal_5723 = 0;
	var uLocal_5724 = 0;
	var uLocal_5725 = 0;
	var uLocal_5726 = 0;
	var uLocal_5727 = 0;
	var uLocal_5728 = 0;
	var uLocal_5729 = 0;
	var uLocal_5730 = 0;
	var uLocal_5731 = 0;
	var uLocal_5732 = 0;
	var uLocal_5733 = 0;
	var uLocal_5734 = 0;
	var uLocal_5735 = 0;
	var uLocal_5736 = 0;
	var uLocal_5737 = 0;
	var uLocal_5738 = 0;
	var uLocal_5739 = 0;
	var uLocal_5740 = 0;
	var uLocal_5741 = 0;
	var uLocal_5742 = 0;
	var uLocal_5743 = 0;
	var uLocal_5744 = 0;
	var uLocal_5745 = 0;
	var uLocal_5746 = 0;
	var uLocal_5747 = 0;
	var uLocal_5748 = 0;
	var uLocal_5749 = 0;
	var uLocal_5750 = 0;
	var uLocal_5751 = 0;
	var uLocal_5752 = 0;
	var uLocal_5753 = 0;
	var uLocal_5754 = 0;
	var uLocal_5755 = 0;
	var uLocal_5756 = 0;
	var uLocal_5757 = 20;
	var uLocal_5758 = 0;
	var uLocal_5759 = 0;
	var uLocal_5760 = 0;
	var uLocal_5761 = 0;
	var uLocal_5762 = 0;
	var uLocal_5763 = 0;
	var uLocal_5764 = 0;
	var uLocal_5765 = 0;
	var uLocal_5766 = 0;
	var uLocal_5767 = 0;
	var uLocal_5768 = 0;
	var uLocal_5769 = 0;
	var uLocal_5770 = 0;
	var uLocal_5771 = 0;
	var uLocal_5772 = 0;
	var uLocal_5773 = 0;
	var uLocal_5774 = 0;
	var uLocal_5775 = 0;
	var uLocal_5776 = 0;
	var uLocal_5777 = 0;
	var uLocal_5778 = 0;
	var uLocal_5779 = 0;
	var uLocal_5780 = 0;
	var uLocal_5781 = 0;
	var uLocal_5782 = 0;
	var uLocal_5783 = 0;
	var uLocal_5784 = 0;
	var uLocal_5785 = 0;
	var uLocal_5786 = 0;
	var uLocal_5787 = 0;
	var uLocal_5788 = 0;
	var uLocal_5789 = 0;
	var uLocal_5790 = 0;
	var uLocal_5791 = 0;
	var uLocal_5792 = 0;
	var uLocal_5793 = 0;
	var uLocal_5794 = 0;
	var uLocal_5795 = 0;
	var uLocal_5796 = 0;
	var uLocal_5797 = 0;
	var uLocal_5798 = 0;
	var uLocal_5799 = 0;
	var uLocal_5800 = 0;
	var uLocal_5801 = 0;
	var uLocal_5802 = 0;
	var uLocal_5803 = 0;
	var uLocal_5804 = 0;
	var uLocal_5805 = 0;
	var uLocal_5806 = 0;
	var uLocal_5807 = 0;
	var uLocal_5808 = 0;
	var uLocal_5809 = 0;
	var uLocal_5810 = 0;
	var uLocal_5811 = 0;
	var uLocal_5812 = 0;
	var uLocal_5813 = 0;
	var uLocal_5814 = 0;
	var uLocal_5815 = 0;
	var uLocal_5816 = 0;
	var uLocal_5817 = 0;
	var uLocal_5818 = 0;
	var uLocal_5819 = 0;
	var uLocal_5820 = 10;
	var uLocal_5821 = 0;
	var uLocal_5822 = 0;
	var uLocal_5823 = 0;
	var uLocal_5824 = 0;
	var uLocal_5825 = 0;
	var uLocal_5826 = 0;
	var uLocal_5827 = 0;
	var uLocal_5828 = 0;
	var uLocal_5829 = 0;
	var uLocal_5830 = 0;
	var uLocal_5831 = 0;
	var uLocal_5832 = 0;
	var uLocal_5833 = 0;
	var uLocal_5834 = 0;
	var uLocal_5835 = 0;
	var uLocal_5836 = 0;
	var uLocal_5837 = 0;
	var uLocal_5838 = 0;
	var uLocal_5839 = 0;
	var uLocal_5840 = 0;
	var uLocal_5841 = 0;
	var uLocal_5842 = 0;
	var uLocal_5843 = 0;
	var uLocal_5844 = 0;
	var uLocal_5845 = 0;
	var uLocal_5846 = 0;
	var uLocal_5847 = 0;
	var uLocal_5848 = 0;
	var uLocal_5849 = 0;
	var uLocal_5850 = 0;
	var uLocal_5851 = 0;
	var uLocal_5852 = 0;
	var uLocal_5853 = 0;
	var uLocal_5854 = 0;
	var uLocal_5855 = 0;
	var uLocal_5856 = 0;
	var uLocal_5857 = 0;
	var uLocal_5858 = 0;
	var uLocal_5859 = 0;
	var uLocal_5860 = 0;
	var uLocal_5861 = 10;
	var uLocal_5862 = 0;
	var uLocal_5863 = 0;
	var uLocal_5864 = 0;
	var uLocal_5865 = 0;
	var uLocal_5866 = 0;
	var uLocal_5867 = 0;
	var uLocal_5868 = 0;
	var uLocal_5869 = 0;
	var uLocal_5870 = 0;
	var uLocal_5871 = 0;
	var uLocal_5872 = 0;
	var uLocal_5873 = 0;
	var uLocal_5874 = 0;
	var uLocal_5875 = 0;
	var uLocal_5876 = 0;
	var uLocal_5877 = 0;
	var uLocal_5878 = 0;
	var uLocal_5879 = 0;
	var uLocal_5880 = 0;
	var uLocal_5881 = 0;
	var uLocal_5882 = 0;
	var uLocal_5883 = 0;
	var uLocal_5884 = 0;
	var uLocal_5885 = 0;
	var uLocal_5886 = 0;
	var uLocal_5887 = 0;
	var uLocal_5888 = 0;
	var uLocal_5889 = 0;
	var uLocal_5890 = 0;
	var uLocal_5891 = 0;
	var uLocal_5892 = 0;
	var uLocal_5893 = 0;
	var uLocal_5894 = 0;
	var uLocal_5895 = 0;
	var uLocal_5896 = 0;
	var uLocal_5897 = 0;
	var uLocal_5898 = 0;
	var uLocal_5899 = 0;
	var uLocal_5900 = 0;
	var uLocal_5901 = 0;
	var uLocal_5902 = 0;
	var uLocal_5903 = 0;
	var uLocal_5904 = 0;
	var uLocal_5905 = 0;
	var uLocal_5906 = 0;
	var uLocal_5907 = 0;
	var uLocal_5908 = 0;
	var uLocal_5909 = 0;
	var uLocal_5910 = 0;
	var uLocal_5911 = 0;
	var uLocal_5912 = 3;
	var uLocal_5913 = 0;
	var uLocal_5914 = 0;
	var uLocal_5915 = 0;
	var uLocal_5916 = 0;
	var uLocal_5917 = 0;
	var uLocal_5918 = 0;
	var uLocal_5919 = 0;
	var uLocal_5920 = 0;
	var uLocal_5921 = 0;
	var uLocal_5922 = 5;
	var uLocal_5923 = 0;
	var uLocal_5924 = 0;
	var uLocal_5925 = 0;
	var uLocal_5926 = 0;
	var uLocal_5927 = 0;
	var uLocal_5928 = 0;
	var uLocal_5929 = 0;
	var uLocal_5930 = 0;
	var uLocal_5931 = 0;
	var uLocal_5932 = 0;
	var uLocal_5933 = 0;
	var uLocal_5934 = 0;
	var uLocal_5935 = 0;
	var uLocal_5936 = 0;
	var uLocal_5937 = 0;
	var uLocal_5938 = 5;
	var uLocal_5939 = 0;
	var uLocal_5940 = 0;
	var uLocal_5941 = 0;
	var uLocal_5942 = 0;
	var uLocal_5943 = 0;
	var uLocal_5944 = 0;
	var uLocal_5945 = 0;
	var uLocal_5946 = 0;
	var uLocal_5947 = 0;
	var uLocal_5948 = 0;
	var uLocal_5949 = 0;
	var uLocal_5950 = 0;
	var uLocal_5951 = 0;
	var uLocal_5952 = 0;
	var uLocal_5953 = 0;
	var uLocal_5954 = 0;
	var uLocal_5955 = 0;
	var uLocal_5956 = 0;
	var uLocal_5957 = 0;
	var uLocal_5958 = 0;
	var uLocal_5959 = 5;
	var uLocal_5960 = 0;
	var uLocal_5961 = 0;
	var uLocal_5962 = 0;
	var uLocal_5963 = 0;
	var uLocal_5964 = 0;
	var uLocal_5965 = 0;
	var uLocal_5966 = 0;
	var uLocal_5967 = 0;
	var uLocal_5968 = 0;
	var uLocal_5969 = 0;
	var uLocal_5970 = 0;
	var uLocal_5971 = 0;
	var uLocal_5972 = 0;
	var uLocal_5973 = 0;
	var uLocal_5974 = 0;
	var uLocal_5975 = 0;
	var uLocal_5976 = 0;
	var uLocal_5977 = 0;
	var uLocal_5978 = 0;
	var uLocal_5979 = 0;
	var uLocal_5980 = 0;
	var uLocal_5981 = 0;
	var uLocal_5982 = 0;
	var uLocal_5983 = 24;
	var uLocal_5984 = 0;
	var uLocal_5985 = 0;
	var uLocal_5986 = 0;
	var uLocal_5987 = 0;
	var uLocal_5988 = 0;
	var uLocal_5989 = 0;
	var uLocal_5990 = 0;
	var uLocal_5991 = 0;
	var uLocal_5992 = 0;
	var uLocal_5993 = 0;
	var uLocal_5994 = 0;
	var uLocal_5995 = 0;
	var uLocal_5996 = 0;
	var uLocal_5997 = 0;
	var uLocal_5998 = 0;
	var uLocal_5999 = 0;
	var uLocal_6000 = 0;
	var uLocal_6001 = 0;
	var uLocal_6002 = 0;
	var uLocal_6003 = 0;
	var uLocal_6004 = 0;
	var uLocal_6005 = 0;
	var uLocal_6006 = 0;
	var uLocal_6007 = 0;
	var uLocal_6008 = 0;
	var uLocal_6009 = 0;
	var uLocal_6010 = 0;
	var uLocal_6011 = 0;
	var uLocal_6012 = 0;
	var uLocal_6013 = 0;
	var uLocal_6014 = 0;
	var uLocal_6015 = 0;
	var uLocal_6016 = 0;
	var uLocal_6017 = 0;
	var uLocal_6018 = 0;
	var uLocal_6019 = 0;
	var uLocal_6020 = 0;
	var uLocal_6021 = 0;
	var uLocal_6022 = 0;
	var uLocal_6023 = 0;
	var uLocal_6024 = 0;
	var uLocal_6025 = 0;
	var uLocal_6026 = 0;
	var uLocal_6027 = 0;
	var uLocal_6028 = 0;
	var uLocal_6029 = 0;
	var uLocal_6030 = 0;
	var uLocal_6031 = 0;
	var uLocal_6032 = 0;
	var uLocal_6033 = 0;
	var uLocal_6034 = 0;
	var uLocal_6035 = 0;
	var uLocal_6036 = 0;
	var uLocal_6037 = 0;
	var uLocal_6038 = 0;
	var uLocal_6039 = 0;
	var uLocal_6040 = 0;
	var uLocal_6041 = 0;
	var uLocal_6042 = 0;
	var uLocal_6043 = 0;
	var uLocal_6044 = 0;
	var uLocal_6045 = 0;
	var uLocal_6046 = 0;
	var uLocal_6047 = 0;
	var uLocal_6048 = 0;
	var uLocal_6049 = 0;
	var uLocal_6050 = 0;
	var uLocal_6051 = 0;
	var uLocal_6052 = 0;
	var uLocal_6053 = 0;
	var uLocal_6054 = 0;
	var uLocal_6055 = 0;
	var uLocal_6056 = 0;
	var uLocal_6057 = 0;
	var uLocal_6058 = 0;
	var uLocal_6059 = 0;
	var uLocal_6060 = 0;
	var uLocal_6061 = 0;
	var uLocal_6062 = 0;
	var uLocal_6063 = 0;
	var uLocal_6064 = 0;
	var uLocal_6065 = 0;
	var uLocal_6066 = 0;
	var uLocal_6067 = 0;
	var uLocal_6068 = 0;
	var uLocal_6069 = 0;
	var uLocal_6070 = 0;
	var uLocal_6071 = 0;
	var uLocal_6072 = 0;
	var uLocal_6073 = 0;
	var uLocal_6074 = 0;
	var uLocal_6075 = 0;
	var uLocal_6076 = 0;
	var uLocal_6077 = 0;
	var uLocal_6078 = 0;
	var uLocal_6079 = 0;
	var uLocal_6080 = 0;
	var uLocal_6081 = 0;
	var uLocal_6082 = 0;
	var uLocal_6083 = 0;
	var uLocal_6084 = 0;
	var uLocal_6085 = 0;
	var uLocal_6086 = 0;
	var uLocal_6087 = 0;
	var uLocal_6088 = 0;
	var uLocal_6089 = 0;
	var uLocal_6090 = 0;
	var uLocal_6091 = 0;
	var uLocal_6092 = 0;
	var uLocal_6093 = 0;
	var uLocal_6094 = 0;
	var uLocal_6095 = 0;
	var uLocal_6096 = 30;
	var uLocal_6097 = 0;
	var uLocal_6098 = 0;
	var uLocal_6099 = 0;
	var uLocal_6100 = 0;
	var uLocal_6101 = 0;
	var uLocal_6102 = 3;
	var uLocal_6103 = 0;
	var uLocal_6104 = 0;
	var uLocal_6105 = 0;
	var uLocal_6106 = 0;
	var uLocal_6107 = -1;
	var uLocal_6108 = 0;
	var uLocal_6109 = 5;
	var uLocal_6110 = 0;
	var uLocal_6111 = 0;
	var uLocal_6112 = 0;
	var uLocal_6113 = 0;
	var uLocal_6114 = 0;
	var uLocal_6115 = 0;
	var uLocal_6116 = 0;
	var uLocal_6117 = 0;
	var uLocal_6118 = 0;
	var uLocal_6119 = 0;
	var uLocal_6120 = 10;
	var uLocal_6121 = 3;
	var uLocal_6122 = 500;
	var uLocal_6123 = 10000;
	var uLocal_6124 = 0;
	var uLocal_6125 = 3;
	var uLocal_6126 = 500;
	var uLocal_6127 = 10000;
	var uLocal_6128 = 0;
	var uLocal_6129 = 3;
	var uLocal_6130 = 500;
	var uLocal_6131 = 10000;
	var uLocal_6132 = 0;
	var uLocal_6133 = 3;
	var uLocal_6134 = 500;
	var uLocal_6135 = 10000;
	var uLocal_6136 = 0;
	var uLocal_6137 = 3;
	var uLocal_6138 = 500;
	var uLocal_6139 = 10000;
	var uLocal_6140 = 0;
	var uLocal_6141 = 3;
	var uLocal_6142 = 500;
	var uLocal_6143 = 10000;
	var uLocal_6144 = 0;
	var uLocal_6145 = 3;
	var uLocal_6146 = 500;
	var uLocal_6147 = 10000;
	var uLocal_6148 = 0;
	var uLocal_6149 = 3;
	var uLocal_6150 = 500;
	var uLocal_6151 = 10000;
	var uLocal_6152 = 0;
	var uLocal_6153 = 3;
	var uLocal_6154 = 500;
	var uLocal_6155 = 10000;
	var uLocal_6156 = 0;
	var uLocal_6157 = 3;
	var uLocal_6158 = 500;
	var uLocal_6159 = 10000;
	var uLocal_6160 = 0;
	var uLocal_6161 = 0;
	var uLocal_6162 = 0;
	var uLocal_6163 = 0;
	var uLocal_6164 = 0;
	var uLocal_6165 = 0;
	var uLocal_6166 = 0;
	var uLocal_6167 = 3;
	var uLocal_6168 = 0;
	var uLocal_6169 = 0;
	var uLocal_6170 = 0;
	var uLocal_6171 = 0;
	var uLocal_6172 = -1;
	var uLocal_6173 = 0;
	var uLocal_6174 = 5;
	var uLocal_6175 = 0;
	var uLocal_6176 = 0;
	var uLocal_6177 = 0;
	var uLocal_6178 = 0;
	var uLocal_6179 = 0;
	var uLocal_6180 = 0;
	var uLocal_6181 = 0;
	var uLocal_6182 = 0;
	var uLocal_6183 = 0;
	var uLocal_6184 = 0;
	var uLocal_6185 = 10;
	var uLocal_6186 = 3;
	var uLocal_6187 = 500;
	var uLocal_6188 = 10000;
	var uLocal_6189 = 0;
	var uLocal_6190 = 3;
	var uLocal_6191 = 500;
	var uLocal_6192 = 10000;
	var uLocal_6193 = 0;
	var uLocal_6194 = 3;
	var uLocal_6195 = 500;
	var uLocal_6196 = 10000;
	var uLocal_6197 = 0;
	var uLocal_6198 = 3;
	var uLocal_6199 = 500;
	var uLocal_6200 = 10000;
	var uLocal_6201 = 0;
	var uLocal_6202 = 3;
	var uLocal_6203 = 500;
	var uLocal_6204 = 10000;
	var uLocal_6205 = 0;
	var uLocal_6206 = 3;
	var uLocal_6207 = 500;
	var uLocal_6208 = 10000;
	var uLocal_6209 = 0;
	var uLocal_6210 = 3;
	var uLocal_6211 = 500;
	var uLocal_6212 = 10000;
	var uLocal_6213 = 0;
	var uLocal_6214 = 3;
	var uLocal_6215 = 500;
	var uLocal_6216 = 10000;
	var uLocal_6217 = 0;
	var uLocal_6218 = 3;
	var uLocal_6219 = 500;
	var uLocal_6220 = 10000;
	var uLocal_6221 = 0;
	var uLocal_6222 = 3;
	var uLocal_6223 = 500;
	var uLocal_6224 = 10000;
	var uLocal_6225 = 0;
	var uLocal_6226 = 0;
	var uLocal_6227 = 0;
	var uLocal_6228 = 0;
	var uLocal_6229 = 0;
	var uLocal_6230 = 0;
	var uLocal_6231 = 0;
	var uLocal_6232 = 3;
	var uLocal_6233 = 0;
	var uLocal_6234 = 0;
	var uLocal_6235 = 0;
	var uLocal_6236 = 0;
	var uLocal_6237 = -1;
	var uLocal_6238 = 0;
	var uLocal_6239 = 5;
	var uLocal_6240 = 0;
	var uLocal_6241 = 0;
	var uLocal_6242 = 0;
	var uLocal_6243 = 0;
	var uLocal_6244 = 0;
	var uLocal_6245 = 0;
	var uLocal_6246 = 0;
	var uLocal_6247 = 0;
	var uLocal_6248 = 0;
	var uLocal_6249 = 0;
	var uLocal_6250 = 10;
	var uLocal_6251 = 3;
	var uLocal_6252 = 500;
	var uLocal_6253 = 10000;
	var uLocal_6254 = 0;
	var uLocal_6255 = 3;
	var uLocal_6256 = 500;
	var uLocal_6257 = 10000;
	var uLocal_6258 = 0;
	var uLocal_6259 = 3;
	var uLocal_6260 = 500;
	var uLocal_6261 = 10000;
	var uLocal_6262 = 0;
	var uLocal_6263 = 3;
	var uLocal_6264 = 500;
	var uLocal_6265 = 10000;
	var uLocal_6266 = 0;
	var uLocal_6267 = 3;
	var uLocal_6268 = 500;
	var uLocal_6269 = 10000;
	var uLocal_6270 = 0;
	var uLocal_6271 = 3;
	var uLocal_6272 = 500;
	var uLocal_6273 = 10000;
	var uLocal_6274 = 0;
	var uLocal_6275 = 3;
	var uLocal_6276 = 500;
	var uLocal_6277 = 10000;
	var uLocal_6278 = 0;
	var uLocal_6279 = 3;
	var uLocal_6280 = 500;
	var uLocal_6281 = 10000;
	var uLocal_6282 = 0;
	var uLocal_6283 = 3;
	var uLocal_6284 = 500;
	var uLocal_6285 = 10000;
	var uLocal_6286 = 0;
	var uLocal_6287 = 3;
	var uLocal_6288 = 500;
	var uLocal_6289 = 10000;
	var uLocal_6290 = 0;
	var uLocal_6291 = 0;
	var uLocal_6292 = 0;
	var uLocal_6293 = 0;
	var uLocal_6294 = 0;
	var uLocal_6295 = 0;
	var uLocal_6296 = 0;
	var uLocal_6297 = 3;
	var uLocal_6298 = 0;
	var uLocal_6299 = 0;
	var uLocal_6300 = 0;
	var uLocal_6301 = 0;
	var uLocal_6302 = -1;
	var uLocal_6303 = 0;
	var uLocal_6304 = 5;
	var uLocal_6305 = 0;
	var uLocal_6306 = 0;
	var uLocal_6307 = 0;
	var uLocal_6308 = 0;
	var uLocal_6309 = 0;
	var uLocal_6310 = 0;
	var uLocal_6311 = 0;
	var uLocal_6312 = 0;
	var uLocal_6313 = 0;
	var uLocal_6314 = 0;
	var uLocal_6315 = 10;
	var uLocal_6316 = 3;
	var uLocal_6317 = 500;
	var uLocal_6318 = 10000;
	var uLocal_6319 = 0;
	var uLocal_6320 = 3;
	var uLocal_6321 = 500;
	var uLocal_6322 = 10000;
	var uLocal_6323 = 0;
	var uLocal_6324 = 3;
	var uLocal_6325 = 500;
	var uLocal_6326 = 10000;
	var uLocal_6327 = 0;
	var uLocal_6328 = 3;
	var uLocal_6329 = 500;
	var uLocal_6330 = 10000;
	var uLocal_6331 = 0;
	var uLocal_6332 = 3;
	var uLocal_6333 = 500;
	var uLocal_6334 = 10000;
	var uLocal_6335 = 0;
	var uLocal_6336 = 3;
	var uLocal_6337 = 500;
	var uLocal_6338 = 10000;
	var uLocal_6339 = 0;
	var uLocal_6340 = 3;
	var uLocal_6341 = 500;
	var uLocal_6342 = 10000;
	var uLocal_6343 = 0;
	var uLocal_6344 = 3;
	var uLocal_6345 = 500;
	var uLocal_6346 = 10000;
	var uLocal_6347 = 0;
	var uLocal_6348 = 3;
	var uLocal_6349 = 500;
	var uLocal_6350 = 10000;
	var uLocal_6351 = 0;
	var uLocal_6352 = 3;
	var uLocal_6353 = 500;
	var uLocal_6354 = 10000;
	var uLocal_6355 = 0;
	var uLocal_6356 = 0;
	var uLocal_6357 = 0;
	var uLocal_6358 = 0;
	var uLocal_6359 = 0;
	var uLocal_6360 = 0;
	var uLocal_6361 = 0;
	var uLocal_6362 = 3;
	var uLocal_6363 = 0;
	var uLocal_6364 = 0;
	var uLocal_6365 = 0;
	var uLocal_6366 = 0;
	var uLocal_6367 = -1;
	var uLocal_6368 = 0;
	var uLocal_6369 = 5;
	var uLocal_6370 = 0;
	var uLocal_6371 = 0;
	var uLocal_6372 = 0;
	var uLocal_6373 = 0;
	var uLocal_6374 = 0;
	var uLocal_6375 = 0;
	var uLocal_6376 = 0;
	var uLocal_6377 = 0;
	var uLocal_6378 = 0;
	var uLocal_6379 = 0;
	var uLocal_6380 = 10;
	var uLocal_6381 = 3;
	var uLocal_6382 = 500;
	var uLocal_6383 = 10000;
	var uLocal_6384 = 0;
	var uLocal_6385 = 3;
	var uLocal_6386 = 500;
	var uLocal_6387 = 10000;
	var uLocal_6388 = 0;
	var uLocal_6389 = 3;
	var uLocal_6390 = 500;
	var uLocal_6391 = 10000;
	var uLocal_6392 = 0;
	var uLocal_6393 = 3;
	var uLocal_6394 = 500;
	var uLocal_6395 = 10000;
	var uLocal_6396 = 0;
	var uLocal_6397 = 3;
	var uLocal_6398 = 500;
	var uLocal_6399 = 10000;
	var uLocal_6400 = 0;
	var uLocal_6401 = 3;
	var uLocal_6402 = 500;
	var uLocal_6403 = 10000;
	var uLocal_6404 = 0;
	var uLocal_6405 = 3;
	var uLocal_6406 = 500;
	var uLocal_6407 = 10000;
	var uLocal_6408 = 0;
	var uLocal_6409 = 3;
	var uLocal_6410 = 500;
	var uLocal_6411 = 10000;
	var uLocal_6412 = 0;
	var uLocal_6413 = 3;
	var uLocal_6414 = 500;
	var uLocal_6415 = 10000;
	var uLocal_6416 = 0;
	var uLocal_6417 = 3;
	var uLocal_6418 = 500;
	var uLocal_6419 = 10000;
	var uLocal_6420 = 0;
	var uLocal_6421 = 0;
	var uLocal_6422 = 0;
	var uLocal_6423 = 0;
	var uLocal_6424 = 0;
	var uLocal_6425 = 0;
	var uLocal_6426 = 0;
	var uLocal_6427 = 3;
	var uLocal_6428 = 0;
	var uLocal_6429 = 0;
	var uLocal_6430 = 0;
	var uLocal_6431 = 0;
	var uLocal_6432 = -1;
	var uLocal_6433 = 0;
	var uLocal_6434 = 5;
	var uLocal_6435 = 0;
	var uLocal_6436 = 0;
	var uLocal_6437 = 0;
	var uLocal_6438 = 0;
	var uLocal_6439 = 0;
	var uLocal_6440 = 0;
	var uLocal_6441 = 0;
	var uLocal_6442 = 0;
	var uLocal_6443 = 0;
	var uLocal_6444 = 0;
	var uLocal_6445 = 10;
	var uLocal_6446 = 3;
	var uLocal_6447 = 500;
	var uLocal_6448 = 10000;
	var uLocal_6449 = 0;
	var uLocal_6450 = 3;
	var uLocal_6451 = 500;
	var uLocal_6452 = 10000;
	var uLocal_6453 = 0;
	var uLocal_6454 = 3;
	var uLocal_6455 = 500;
	var uLocal_6456 = 10000;
	var uLocal_6457 = 0;
	var uLocal_6458 = 3;
	var uLocal_6459 = 500;
	var uLocal_6460 = 10000;
	var uLocal_6461 = 0;
	var uLocal_6462 = 3;
	var uLocal_6463 = 500;
	var uLocal_6464 = 10000;
	var uLocal_6465 = 0;
	var uLocal_6466 = 3;
	var uLocal_6467 = 500;
	var uLocal_6468 = 10000;
	var uLocal_6469 = 0;
	var uLocal_6470 = 3;
	var uLocal_6471 = 500;
	var uLocal_6472 = 10000;
	var uLocal_6473 = 0;
	var uLocal_6474 = 3;
	var uLocal_6475 = 500;
	var uLocal_6476 = 10000;
	var uLocal_6477 = 0;
	var uLocal_6478 = 3;
	var uLocal_6479 = 500;
	var uLocal_6480 = 10000;
	var uLocal_6481 = 0;
	var uLocal_6482 = 3;
	var uLocal_6483 = 500;
	var uLocal_6484 = 10000;
	var uLocal_6485 = 0;
	var uLocal_6486 = 0;
	var uLocal_6487 = 0;
	var uLocal_6488 = 0;
	var uLocal_6489 = 0;
	var uLocal_6490 = 0;
	var uLocal_6491 = 0;
	var uLocal_6492 = 3;
	var uLocal_6493 = 0;
	var uLocal_6494 = 0;
	var uLocal_6495 = 0;
	var uLocal_6496 = 0;
	var uLocal_6497 = -1;
	var uLocal_6498 = 0;
	var uLocal_6499 = 5;
	var uLocal_6500 = 0;
	var uLocal_6501 = 0;
	var uLocal_6502 = 0;
	var uLocal_6503 = 0;
	var uLocal_6504 = 0;
	var uLocal_6505 = 0;
	var uLocal_6506 = 0;
	var uLocal_6507 = 0;
	var uLocal_6508 = 0;
	var uLocal_6509 = 0;
	var uLocal_6510 = 10;
	var uLocal_6511 = 3;
	var uLocal_6512 = 500;
	var uLocal_6513 = 10000;
	var uLocal_6514 = 0;
	var uLocal_6515 = 3;
	var uLocal_6516 = 500;
	var uLocal_6517 = 10000;
	var uLocal_6518 = 0;
	var uLocal_6519 = 3;
	var uLocal_6520 = 500;
	var uLocal_6521 = 10000;
	var uLocal_6522 = 0;
	var uLocal_6523 = 3;
	var uLocal_6524 = 500;
	var uLocal_6525 = 10000;
	var uLocal_6526 = 0;
	var uLocal_6527 = 3;
	var uLocal_6528 = 500;
	var uLocal_6529 = 10000;
	var uLocal_6530 = 0;
	var uLocal_6531 = 3;
	var uLocal_6532 = 500;
	var uLocal_6533 = 10000;
	var uLocal_6534 = 0;
	var uLocal_6535 = 3;
	var uLocal_6536 = 500;
	var uLocal_6537 = 10000;
	var uLocal_6538 = 0;
	var uLocal_6539 = 3;
	var uLocal_6540 = 500;
	var uLocal_6541 = 10000;
	var uLocal_6542 = 0;
	var uLocal_6543 = 3;
	var uLocal_6544 = 500;
	var uLocal_6545 = 10000;
	var uLocal_6546 = 0;
	var uLocal_6547 = 3;
	var uLocal_6548 = 500;
	var uLocal_6549 = 10000;
	var uLocal_6550 = 0;
	var uLocal_6551 = 0;
	var uLocal_6552 = 0;
	var uLocal_6553 = 0;
	var uLocal_6554 = 0;
	var uLocal_6555 = 0;
	var uLocal_6556 = 0;
	var uLocal_6557 = 3;
	var uLocal_6558 = 0;
	var uLocal_6559 = 0;
	var uLocal_6560 = 0;
	var uLocal_6561 = 0;
	var uLocal_6562 = -1;
	var uLocal_6563 = 0;
	var uLocal_6564 = 5;
	var uLocal_6565 = 0;
	var uLocal_6566 = 0;
	var uLocal_6567 = 0;
	var uLocal_6568 = 0;
	var uLocal_6569 = 0;
	var uLocal_6570 = 0;
	var uLocal_6571 = 0;
	var uLocal_6572 = 0;
	var uLocal_6573 = 0;
	var uLocal_6574 = 0;
	var uLocal_6575 = 10;
	var uLocal_6576 = 3;
	var uLocal_6577 = 500;
	var uLocal_6578 = 10000;
	var uLocal_6579 = 0;
	var uLocal_6580 = 3;
	var uLocal_6581 = 500;
	var uLocal_6582 = 10000;
	var uLocal_6583 = 0;
	var uLocal_6584 = 3;
	var uLocal_6585 = 500;
	var uLocal_6586 = 10000;
	var uLocal_6587 = 0;
	var uLocal_6588 = 3;
	var uLocal_6589 = 500;
	var uLocal_6590 = 10000;
	var uLocal_6591 = 0;
	var uLocal_6592 = 3;
	var uLocal_6593 = 500;
	var uLocal_6594 = 10000;
	var uLocal_6595 = 0;
	var uLocal_6596 = 3;
	var uLocal_6597 = 500;
	var uLocal_6598 = 10000;
	var uLocal_6599 = 0;
	var uLocal_6600 = 3;
	var uLocal_6601 = 500;
	var uLocal_6602 = 10000;
	var uLocal_6603 = 0;
	var uLocal_6604 = 3;
	var uLocal_6605 = 500;
	var uLocal_6606 = 10000;
	var uLocal_6607 = 0;
	var uLocal_6608 = 3;
	var uLocal_6609 = 500;
	var uLocal_6610 = 10000;
	var uLocal_6611 = 0;
	var uLocal_6612 = 3;
	var uLocal_6613 = 500;
	var uLocal_6614 = 10000;
	var uLocal_6615 = 0;
	var uLocal_6616 = 0;
	var uLocal_6617 = 0;
	var uLocal_6618 = 0;
	var uLocal_6619 = 0;
	var uLocal_6620 = 0;
	var uLocal_6621 = 0;
	var uLocal_6622 = 3;
	var uLocal_6623 = 0;
	var uLocal_6624 = 0;
	var uLocal_6625 = 0;
	var uLocal_6626 = 0;
	var uLocal_6627 = -1;
	var uLocal_6628 = 0;
	var uLocal_6629 = 5;
	var uLocal_6630 = 0;
	var uLocal_6631 = 0;
	var uLocal_6632 = 0;
	var uLocal_6633 = 0;
	var uLocal_6634 = 0;
	var uLocal_6635 = 0;
	var uLocal_6636 = 0;
	var uLocal_6637 = 0;
	var uLocal_6638 = 0;
	var uLocal_6639 = 0;
	var uLocal_6640 = 10;
	var uLocal_6641 = 3;
	var uLocal_6642 = 500;
	var uLocal_6643 = 10000;
	var uLocal_6644 = 0;
	var uLocal_6645 = 3;
	var uLocal_6646 = 500;
	var uLocal_6647 = 10000;
	var uLocal_6648 = 0;
	var uLocal_6649 = 3;
	var uLocal_6650 = 500;
	var uLocal_6651 = 10000;
	var uLocal_6652 = 0;
	var uLocal_6653 = 3;
	var uLocal_6654 = 500;
	var uLocal_6655 = 10000;
	var uLocal_6656 = 0;
	var uLocal_6657 = 3;
	var uLocal_6658 = 500;
	var uLocal_6659 = 10000;
	var uLocal_6660 = 0;
	var uLocal_6661 = 3;
	var uLocal_6662 = 500;
	var uLocal_6663 = 10000;
	var uLocal_6664 = 0;
	var uLocal_6665 = 3;
	var uLocal_6666 = 500;
	var uLocal_6667 = 10000;
	var uLocal_6668 = 0;
	var uLocal_6669 = 3;
	var uLocal_6670 = 500;
	var uLocal_6671 = 10000;
	var uLocal_6672 = 0;
	var uLocal_6673 = 3;
	var uLocal_6674 = 500;
	var uLocal_6675 = 10000;
	var uLocal_6676 = 0;
	var uLocal_6677 = 3;
	var uLocal_6678 = 500;
	var uLocal_6679 = 10000;
	var uLocal_6680 = 0;
	var uLocal_6681 = 0;
	var uLocal_6682 = 0;
	var uLocal_6683 = 0;
	var uLocal_6684 = 0;
	var uLocal_6685 = 0;
	var uLocal_6686 = 0;
	var uLocal_6687 = 3;
	var uLocal_6688 = 0;
	var uLocal_6689 = 0;
	var uLocal_6690 = 0;
	var uLocal_6691 = 0;
	var uLocal_6692 = -1;
	var uLocal_6693 = 0;
	var uLocal_6694 = 5;
	var uLocal_6695 = 0;
	var uLocal_6696 = 0;
	var uLocal_6697 = 0;
	var uLocal_6698 = 0;
	var uLocal_6699 = 0;
	var uLocal_6700 = 0;
	var uLocal_6701 = 0;
	var uLocal_6702 = 0;
	var uLocal_6703 = 0;
	var uLocal_6704 = 0;
	var uLocal_6705 = 10;
	var uLocal_6706 = 3;
	var uLocal_6707 = 500;
	var uLocal_6708 = 10000;
	var uLocal_6709 = 0;
	var uLocal_6710 = 3;
	var uLocal_6711 = 500;
	var uLocal_6712 = 10000;
	var uLocal_6713 = 0;
	var uLocal_6714 = 3;
	var uLocal_6715 = 500;
	var uLocal_6716 = 10000;
	var uLocal_6717 = 0;
	var uLocal_6718 = 3;
	var uLocal_6719 = 500;
	var uLocal_6720 = 10000;
	var uLocal_6721 = 0;
	var uLocal_6722 = 3;
	var uLocal_6723 = 500;
	var uLocal_6724 = 10000;
	var uLocal_6725 = 0;
	var uLocal_6726 = 3;
	var uLocal_6727 = 500;
	var uLocal_6728 = 10000;
	var uLocal_6729 = 0;
	var uLocal_6730 = 3;
	var uLocal_6731 = 500;
	var uLocal_6732 = 10000;
	var uLocal_6733 = 0;
	var uLocal_6734 = 3;
	var uLocal_6735 = 500;
	var uLocal_6736 = 10000;
	var uLocal_6737 = 0;
	var uLocal_6738 = 3;
	var uLocal_6739 = 500;
	var uLocal_6740 = 10000;
	var uLocal_6741 = 0;
	var uLocal_6742 = 3;
	var uLocal_6743 = 500;
	var uLocal_6744 = 10000;
	var uLocal_6745 = 0;
	var uLocal_6746 = 0;
	var uLocal_6747 = 0;
	var uLocal_6748 = 0;
	var uLocal_6749 = 0;
	var uLocal_6750 = 0;
	var uLocal_6751 = 0;
	var uLocal_6752 = 3;
	var uLocal_6753 = 0;
	var uLocal_6754 = 0;
	var uLocal_6755 = 0;
	var uLocal_6756 = 0;
	var uLocal_6757 = -1;
	var uLocal_6758 = 0;
	var uLocal_6759 = 5;
	var uLocal_6760 = 0;
	var uLocal_6761 = 0;
	var uLocal_6762 = 0;
	var uLocal_6763 = 0;
	var uLocal_6764 = 0;
	var uLocal_6765 = 0;
	var uLocal_6766 = 0;
	var uLocal_6767 = 0;
	var uLocal_6768 = 0;
	var uLocal_6769 = 0;
	var uLocal_6770 = 10;
	var uLocal_6771 = 3;
	var uLocal_6772 = 500;
	var uLocal_6773 = 10000;
	var uLocal_6774 = 0;
	var uLocal_6775 = 3;
	var uLocal_6776 = 500;
	var uLocal_6777 = 10000;
	var uLocal_6778 = 0;
	var uLocal_6779 = 3;
	var uLocal_6780 = 500;
	var uLocal_6781 = 10000;
	var uLocal_6782 = 0;
	var uLocal_6783 = 3;
	var uLocal_6784 = 500;
	var uLocal_6785 = 10000;
	var uLocal_6786 = 0;
	var uLocal_6787 = 3;
	var uLocal_6788 = 500;
	var uLocal_6789 = 10000;
	var uLocal_6790 = 0;
	var uLocal_6791 = 3;
	var uLocal_6792 = 500;
	var uLocal_6793 = 10000;
	var uLocal_6794 = 0;
	var uLocal_6795 = 3;
	var uLocal_6796 = 500;
	var uLocal_6797 = 10000;
	var uLocal_6798 = 0;
	var uLocal_6799 = 3;
	var uLocal_6800 = 500;
	var uLocal_6801 = 10000;
	var uLocal_6802 = 0;
	var uLocal_6803 = 3;
	var uLocal_6804 = 500;
	var uLocal_6805 = 10000;
	var uLocal_6806 = 0;
	var uLocal_6807 = 3;
	var uLocal_6808 = 500;
	var uLocal_6809 = 10000;
	var uLocal_6810 = 0;
	var uLocal_6811 = 0;
	var uLocal_6812 = 0;
	var uLocal_6813 = 0;
	var uLocal_6814 = 0;
	var uLocal_6815 = 0;
	var uLocal_6816 = 0;
	var uLocal_6817 = 3;
	var uLocal_6818 = 0;
	var uLocal_6819 = 0;
	var uLocal_6820 = 0;
	var uLocal_6821 = 0;
	var uLocal_6822 = -1;
	var uLocal_6823 = 0;
	var uLocal_6824 = 5;
	var uLocal_6825 = 0;
	var uLocal_6826 = 0;
	var uLocal_6827 = 0;
	var uLocal_6828 = 0;
	var uLocal_6829 = 0;
	var uLocal_6830 = 0;
	var uLocal_6831 = 0;
	var uLocal_6832 = 0;
	var uLocal_6833 = 0;
	var uLocal_6834 = 0;
	var uLocal_6835 = 10;
	var uLocal_6836 = 3;
	var uLocal_6837 = 500;
	var uLocal_6838 = 10000;
	var uLocal_6839 = 0;
	var uLocal_6840 = 3;
	var uLocal_6841 = 500;
	var uLocal_6842 = 10000;
	var uLocal_6843 = 0;
	var uLocal_6844 = 3;
	var uLocal_6845 = 500;
	var uLocal_6846 = 10000;
	var uLocal_6847 = 0;
	var uLocal_6848 = 3;
	var uLocal_6849 = 500;
	var uLocal_6850 = 10000;
	var uLocal_6851 = 0;
	var uLocal_6852 = 3;
	var uLocal_6853 = 500;
	var uLocal_6854 = 10000;
	var uLocal_6855 = 0;
	var uLocal_6856 = 3;
	var uLocal_6857 = 500;
	var uLocal_6858 = 10000;
	var uLocal_6859 = 0;
	var uLocal_6860 = 3;
	var uLocal_6861 = 500;
	var uLocal_6862 = 10000;
	var uLocal_6863 = 0;
	var uLocal_6864 = 3;
	var uLocal_6865 = 500;
	var uLocal_6866 = 10000;
	var uLocal_6867 = 0;
	var uLocal_6868 = 3;
	var uLocal_6869 = 500;
	var uLocal_6870 = 10000;
	var uLocal_6871 = 0;
	var uLocal_6872 = 3;
	var uLocal_6873 = 500;
	var uLocal_6874 = 10000;
	var uLocal_6875 = 0;
	var uLocal_6876 = 0;
	var uLocal_6877 = 0;
	var uLocal_6878 = 0;
	var uLocal_6879 = 0;
	var uLocal_6880 = 0;
	var uLocal_6881 = 0;
	var uLocal_6882 = 3;
	var uLocal_6883 = 0;
	var uLocal_6884 = 0;
	var uLocal_6885 = 0;
	var uLocal_6886 = 0;
	var uLocal_6887 = -1;
	var uLocal_6888 = 0;
	var uLocal_6889 = 5;
	var uLocal_6890 = 0;
	var uLocal_6891 = 0;
	var uLocal_6892 = 0;
	var uLocal_6893 = 0;
	var uLocal_6894 = 0;
	var uLocal_6895 = 0;
	var uLocal_6896 = 0;
	var uLocal_6897 = 0;
	var uLocal_6898 = 0;
	var uLocal_6899 = 0;
	var uLocal_6900 = 10;
	var uLocal_6901 = 3;
	var uLocal_6902 = 500;
	var uLocal_6903 = 10000;
	var uLocal_6904 = 0;
	var uLocal_6905 = 3;
	var uLocal_6906 = 500;
	var uLocal_6907 = 10000;
	var uLocal_6908 = 0;
	var uLocal_6909 = 3;
	var uLocal_6910 = 500;
	var uLocal_6911 = 10000;
	var uLocal_6912 = 0;
	var uLocal_6913 = 3;
	var uLocal_6914 = 500;
	var uLocal_6915 = 10000;
	var uLocal_6916 = 0;
	var uLocal_6917 = 3;
	var uLocal_6918 = 500;
	var uLocal_6919 = 10000;
	var uLocal_6920 = 0;
	var uLocal_6921 = 3;
	var uLocal_6922 = 500;
	var uLocal_6923 = 10000;
	var uLocal_6924 = 0;
	var uLocal_6925 = 3;
	var uLocal_6926 = 500;
	var uLocal_6927 = 10000;
	var uLocal_6928 = 0;
	var uLocal_6929 = 3;
	var uLocal_6930 = 500;
	var uLocal_6931 = 10000;
	var uLocal_6932 = 0;
	var uLocal_6933 = 3;
	var uLocal_6934 = 500;
	var uLocal_6935 = 10000;
	var uLocal_6936 = 0;
	var uLocal_6937 = 3;
	var uLocal_6938 = 500;
	var uLocal_6939 = 10000;
	var uLocal_6940 = 0;
	var uLocal_6941 = 0;
	var uLocal_6942 = 0;
	var uLocal_6943 = 0;
	var uLocal_6944 = 0;
	var uLocal_6945 = 0;
	var uLocal_6946 = 0;
	var uLocal_6947 = 3;
	var uLocal_6948 = 0;
	var uLocal_6949 = 0;
	var uLocal_6950 = 0;
	var uLocal_6951 = 0;
	var uLocal_6952 = -1;
	var uLocal_6953 = 0;
	var uLocal_6954 = 5;
	var uLocal_6955 = 0;
	var uLocal_6956 = 0;
	var uLocal_6957 = 0;
	var uLocal_6958 = 0;
	var uLocal_6959 = 0;
	var uLocal_6960 = 0;
	var uLocal_6961 = 0;
	var uLocal_6962 = 0;
	var uLocal_6963 = 0;
	var uLocal_6964 = 0;
	var uLocal_6965 = 10;
	var uLocal_6966 = 3;
	var uLocal_6967 = 500;
	var uLocal_6968 = 10000;
	var uLocal_6969 = 0;
	var uLocal_6970 = 3;
	var uLocal_6971 = 500;
	var uLocal_6972 = 10000;
	var uLocal_6973 = 0;
	var uLocal_6974 = 3;
	var uLocal_6975 = 500;
	var uLocal_6976 = 10000;
	var uLocal_6977 = 0;
	var uLocal_6978 = 3;
	var uLocal_6979 = 500;
	var uLocal_6980 = 10000;
	var uLocal_6981 = 0;
	var uLocal_6982 = 3;
	var uLocal_6983 = 500;
	var uLocal_6984 = 10000;
	var uLocal_6985 = 0;
	var uLocal_6986 = 3;
	var uLocal_6987 = 500;
	var uLocal_6988 = 10000;
	var uLocal_6989 = 0;
	var uLocal_6990 = 3;
	var uLocal_6991 = 500;
	var uLocal_6992 = 10000;
	var uLocal_6993 = 0;
	var uLocal_6994 = 3;
	var uLocal_6995 = 500;
	var uLocal_6996 = 10000;
	var uLocal_6997 = 0;
	var uLocal_6998 = 3;
	var uLocal_6999 = 500;
	var uLocal_7000 = 10000;
	var uLocal_7001 = 0;
	var uLocal_7002 = 3;
	var uLocal_7003 = 500;
	var uLocal_7004 = 10000;
	var uLocal_7005 = 0;
	var uLocal_7006 = 0;
	var uLocal_7007 = 0;
	var uLocal_7008 = 0;
	var uLocal_7009 = 0;
	var uLocal_7010 = 0;
	var uLocal_7011 = 0;
	var uLocal_7012 = 3;
	var uLocal_7013 = 0;
	var uLocal_7014 = 0;
	var uLocal_7015 = 0;
	var uLocal_7016 = 0;
	var uLocal_7017 = -1;
	var uLocal_7018 = 0;
	var uLocal_7019 = 5;
	var uLocal_7020 = 0;
	var uLocal_7021 = 0;
	var uLocal_7022 = 0;
	var uLocal_7023 = 0;
	var uLocal_7024 = 0;
	var uLocal_7025 = 0;
	var uLocal_7026 = 0;
	var uLocal_7027 = 0;
	var uLocal_7028 = 0;
	var uLocal_7029 = 0;
	var uLocal_7030 = 10;
	var uLocal_7031 = 3;
	var uLocal_7032 = 500;
	var uLocal_7033 = 10000;
	var uLocal_7034 = 0;
	var uLocal_7035 = 3;
	var uLocal_7036 = 500;
	var uLocal_7037 = 10000;
	var uLocal_7038 = 0;
	var uLocal_7039 = 3;
	var uLocal_7040 = 500;
	var uLocal_7041 = 10000;
	var uLocal_7042 = 0;
	var uLocal_7043 = 3;
	var uLocal_7044 = 500;
	var uLocal_7045 = 10000;
	var uLocal_7046 = 0;
	var uLocal_7047 = 3;
	var uLocal_7048 = 500;
	var uLocal_7049 = 10000;
	var uLocal_7050 = 0;
	var uLocal_7051 = 3;
	var uLocal_7052 = 500;
	var uLocal_7053 = 10000;
	var uLocal_7054 = 0;
	var uLocal_7055 = 3;
	var uLocal_7056 = 500;
	var uLocal_7057 = 10000;
	var uLocal_7058 = 0;
	var uLocal_7059 = 3;
	var uLocal_7060 = 500;
	var uLocal_7061 = 10000;
	var uLocal_7062 = 0;
	var uLocal_7063 = 3;
	var uLocal_7064 = 500;
	var uLocal_7065 = 10000;
	var uLocal_7066 = 0;
	var uLocal_7067 = 3;
	var uLocal_7068 = 500;
	var uLocal_7069 = 10000;
	var uLocal_7070 = 0;
	var uLocal_7071 = 0;
	var uLocal_7072 = 0;
	var uLocal_7073 = 0;
	var uLocal_7074 = 0;
	var uLocal_7075 = 0;
	var uLocal_7076 = 0;
	var uLocal_7077 = 3;
	var uLocal_7078 = 0;
	var uLocal_7079 = 0;
	var uLocal_7080 = 0;
	var uLocal_7081 = 0;
	var uLocal_7082 = -1;
	var uLocal_7083 = 0;
	var uLocal_7084 = 5;
	var uLocal_7085 = 0;
	var uLocal_7086 = 0;
	var uLocal_7087 = 0;
	var uLocal_7088 = 0;
	var uLocal_7089 = 0;
	var uLocal_7090 = 0;
	var uLocal_7091 = 0;
	var uLocal_7092 = 0;
	var uLocal_7093 = 0;
	var uLocal_7094 = 0;
	var uLocal_7095 = 10;
	var uLocal_7096 = 3;
	var uLocal_7097 = 500;
	var uLocal_7098 = 10000;
	var uLocal_7099 = 0;
	var uLocal_7100 = 3;
	var uLocal_7101 = 500;
	var uLocal_7102 = 10000;
	var uLocal_7103 = 0;
	var uLocal_7104 = 3;
	var uLocal_7105 = 500;
	var uLocal_7106 = 10000;
	var uLocal_7107 = 0;
	var uLocal_7108 = 3;
	var uLocal_7109 = 500;
	var uLocal_7110 = 10000;
	var uLocal_7111 = 0;
	var uLocal_7112 = 3;
	var uLocal_7113 = 500;
	var uLocal_7114 = 10000;
	var uLocal_7115 = 0;
	var uLocal_7116 = 3;
	var uLocal_7117 = 500;
	var uLocal_7118 = 10000;
	var uLocal_7119 = 0;
	var uLocal_7120 = 3;
	var uLocal_7121 = 500;
	var uLocal_7122 = 10000;
	var uLocal_7123 = 0;
	var uLocal_7124 = 3;
	var uLocal_7125 = 500;
	var uLocal_7126 = 10000;
	var uLocal_7127 = 0;
	var uLocal_7128 = 3;
	var uLocal_7129 = 500;
	var uLocal_7130 = 10000;
	var uLocal_7131 = 0;
	var uLocal_7132 = 3;
	var uLocal_7133 = 500;
	var uLocal_7134 = 10000;
	var uLocal_7135 = 0;
	var uLocal_7136 = 0;
	var uLocal_7137 = 0;
	var uLocal_7138 = 0;
	var uLocal_7139 = 0;
	var uLocal_7140 = 0;
	var uLocal_7141 = 0;
	var uLocal_7142 = 3;
	var uLocal_7143 = 0;
	var uLocal_7144 = 0;
	var uLocal_7145 = 0;
	var uLocal_7146 = 0;
	var uLocal_7147 = -1;
	var uLocal_7148 = 0;
	var uLocal_7149 = 5;
	var uLocal_7150 = 0;
	var uLocal_7151 = 0;
	var uLocal_7152 = 0;
	var uLocal_7153 = 0;
	var uLocal_7154 = 0;
	var uLocal_7155 = 0;
	var uLocal_7156 = 0;
	var uLocal_7157 = 0;
	var uLocal_7158 = 0;
	var uLocal_7159 = 0;
	var uLocal_7160 = 10;
	var uLocal_7161 = 3;
	var uLocal_7162 = 500;
	var uLocal_7163 = 10000;
	var uLocal_7164 = 0;
	var uLocal_7165 = 3;
	var uLocal_7166 = 500;
	var uLocal_7167 = 10000;
	var uLocal_7168 = 0;
	var uLocal_7169 = 3;
	var uLocal_7170 = 500;
	var uLocal_7171 = 10000;
	var uLocal_7172 = 0;
	var uLocal_7173 = 3;
	var uLocal_7174 = 500;
	var uLocal_7175 = 10000;
	var uLocal_7176 = 0;
	var uLocal_7177 = 3;
	var uLocal_7178 = 500;
	var uLocal_7179 = 10000;
	var uLocal_7180 = 0;
	var uLocal_7181 = 3;
	var uLocal_7182 = 500;
	var uLocal_7183 = 10000;
	var uLocal_7184 = 0;
	var uLocal_7185 = 3;
	var uLocal_7186 = 500;
	var uLocal_7187 = 10000;
	var uLocal_7188 = 0;
	var uLocal_7189 = 3;
	var uLocal_7190 = 500;
	var uLocal_7191 = 10000;
	var uLocal_7192 = 0;
	var uLocal_7193 = 3;
	var uLocal_7194 = 500;
	var uLocal_7195 = 10000;
	var uLocal_7196 = 0;
	var uLocal_7197 = 3;
	var uLocal_7198 = 500;
	var uLocal_7199 = 10000;
	var uLocal_7200 = 0;
	var uLocal_7201 = 0;
	var uLocal_7202 = 0;
	var uLocal_7203 = 0;
	var uLocal_7204 = 0;
	var uLocal_7205 = 0;
	var uLocal_7206 = 0;
	var uLocal_7207 = 3;
	var uLocal_7208 = 0;
	var uLocal_7209 = 0;
	var uLocal_7210 = 0;
	var uLocal_7211 = 0;
	var uLocal_7212 = -1;
	var uLocal_7213 = 0;
	var uLocal_7214 = 5;
	var uLocal_7215 = 0;
	var uLocal_7216 = 0;
	var uLocal_7217 = 0;
	var uLocal_7218 = 0;
	var uLocal_7219 = 0;
	var uLocal_7220 = 0;
	var uLocal_7221 = 0;
	var uLocal_7222 = 0;
	var uLocal_7223 = 0;
	var uLocal_7224 = 0;
	var uLocal_7225 = 10;
	var uLocal_7226 = 3;
	var uLocal_7227 = 500;
	var uLocal_7228 = 10000;
	var uLocal_7229 = 0;
	var uLocal_7230 = 3;
	var uLocal_7231 = 500;
	var uLocal_7232 = 10000;
	var uLocal_7233 = 0;
	var uLocal_7234 = 3;
	var uLocal_7235 = 500;
	var uLocal_7236 = 10000;
	var uLocal_7237 = 0;
	var uLocal_7238 = 3;
	var uLocal_7239 = 500;
	var uLocal_7240 = 10000;
	var uLocal_7241 = 0;
	var uLocal_7242 = 3;
	var uLocal_7243 = 500;
	var uLocal_7244 = 10000;
	var uLocal_7245 = 0;
	var uLocal_7246 = 3;
	var uLocal_7247 = 500;
	var uLocal_7248 = 10000;
	var uLocal_7249 = 0;
	var uLocal_7250 = 3;
	var uLocal_7251 = 500;
	var uLocal_7252 = 10000;
	var uLocal_7253 = 0;
	var uLocal_7254 = 3;
	var uLocal_7255 = 500;
	var uLocal_7256 = 10000;
	var uLocal_7257 = 0;
	var uLocal_7258 = 3;
	var uLocal_7259 = 500;
	var uLocal_7260 = 10000;
	var uLocal_7261 = 0;
	var uLocal_7262 = 3;
	var uLocal_7263 = 500;
	var uLocal_7264 = 10000;
	var uLocal_7265 = 0;
	var uLocal_7266 = 0;
	var uLocal_7267 = 0;
	var uLocal_7268 = 0;
	var uLocal_7269 = 0;
	var uLocal_7270 = 0;
	var uLocal_7271 = 0;
	var uLocal_7272 = 3;
	var uLocal_7273 = 0;
	var uLocal_7274 = 0;
	var uLocal_7275 = 0;
	var uLocal_7276 = 0;
	var uLocal_7277 = -1;
	var uLocal_7278 = 0;
	var uLocal_7279 = 5;
	var uLocal_7280 = 0;
	var uLocal_7281 = 0;
	var uLocal_7282 = 0;
	var uLocal_7283 = 0;
	var uLocal_7284 = 0;
	var uLocal_7285 = 0;
	var uLocal_7286 = 0;
	var uLocal_7287 = 0;
	var uLocal_7288 = 0;
	var uLocal_7289 = 0;
	var uLocal_7290 = 10;
	var uLocal_7291 = 3;
	var uLocal_7292 = 500;
	var uLocal_7293 = 10000;
	var uLocal_7294 = 0;
	var uLocal_7295 = 3;
	var uLocal_7296 = 500;
	var uLocal_7297 = 10000;
	var uLocal_7298 = 0;
	var uLocal_7299 = 3;
	var uLocal_7300 = 500;
	var uLocal_7301 = 10000;
	var uLocal_7302 = 0;
	var uLocal_7303 = 3;
	var uLocal_7304 = 500;
	var uLocal_7305 = 10000;
	var uLocal_7306 = 0;
	var uLocal_7307 = 3;
	var uLocal_7308 = 500;
	var uLocal_7309 = 10000;
	var uLocal_7310 = 0;
	var uLocal_7311 = 3;
	var uLocal_7312 = 500;
	var uLocal_7313 = 10000;
	var uLocal_7314 = 0;
	var uLocal_7315 = 3;
	var uLocal_7316 = 500;
	var uLocal_7317 = 10000;
	var uLocal_7318 = 0;
	var uLocal_7319 = 3;
	var uLocal_7320 = 500;
	var uLocal_7321 = 10000;
	var uLocal_7322 = 0;
	var uLocal_7323 = 3;
	var uLocal_7324 = 500;
	var uLocal_7325 = 10000;
	var uLocal_7326 = 0;
	var uLocal_7327 = 3;
	var uLocal_7328 = 500;
	var uLocal_7329 = 10000;
	var uLocal_7330 = 0;
	var uLocal_7331 = 0;
	var uLocal_7332 = 0;
	var uLocal_7333 = 0;
	var uLocal_7334 = 0;
	var uLocal_7335 = 0;
	var uLocal_7336 = 0;
	var uLocal_7337 = 3;
	var uLocal_7338 = 0;
	var uLocal_7339 = 0;
	var uLocal_7340 = 0;
	var uLocal_7341 = 0;
	var uLocal_7342 = -1;
	var uLocal_7343 = 0;
	var uLocal_7344 = 5;
	var uLocal_7345 = 0;
	var uLocal_7346 = 0;
	var uLocal_7347 = 0;
	var uLocal_7348 = 0;
	var uLocal_7349 = 0;
	var uLocal_7350 = 0;
	var uLocal_7351 = 0;
	var uLocal_7352 = 0;
	var uLocal_7353 = 0;
	var uLocal_7354 = 0;
	var uLocal_7355 = 10;
	var uLocal_7356 = 3;
	var uLocal_7357 = 500;
	var uLocal_7358 = 10000;
	var uLocal_7359 = 0;
	var uLocal_7360 = 3;
	var uLocal_7361 = 500;
	var uLocal_7362 = 10000;
	var uLocal_7363 = 0;
	var uLocal_7364 = 3;
	var uLocal_7365 = 500;
	var uLocal_7366 = 10000;
	var uLocal_7367 = 0;
	var uLocal_7368 = 3;
	var uLocal_7369 = 500;
	var uLocal_7370 = 10000;
	var uLocal_7371 = 0;
	var uLocal_7372 = 3;
	var uLocal_7373 = 500;
	var uLocal_7374 = 10000;
	var uLocal_7375 = 0;
	var uLocal_7376 = 3;
	var uLocal_7377 = 500;
	var uLocal_7378 = 10000;
	var uLocal_7379 = 0;
	var uLocal_7380 = 3;
	var uLocal_7381 = 500;
	var uLocal_7382 = 10000;
	var uLocal_7383 = 0;
	var uLocal_7384 = 3;
	var uLocal_7385 = 500;
	var uLocal_7386 = 10000;
	var uLocal_7387 = 0;
	var uLocal_7388 = 3;
	var uLocal_7389 = 500;
	var uLocal_7390 = 10000;
	var uLocal_7391 = 0;
	var uLocal_7392 = 3;
	var uLocal_7393 = 500;
	var uLocal_7394 = 10000;
	var uLocal_7395 = 0;
	var uLocal_7396 = 0;
	var uLocal_7397 = 0;
	var uLocal_7398 = 0;
	var uLocal_7399 = 0;
	var uLocal_7400 = 0;
	var uLocal_7401 = 0;
	var uLocal_7402 = 3;
	var uLocal_7403 = 0;
	var uLocal_7404 = 0;
	var uLocal_7405 = 0;
	var uLocal_7406 = 0;
	var uLocal_7407 = -1;
	var uLocal_7408 = 0;
	var uLocal_7409 = 5;
	var uLocal_7410 = 0;
	var uLocal_7411 = 0;
	var uLocal_7412 = 0;
	var uLocal_7413 = 0;
	var uLocal_7414 = 0;
	var uLocal_7415 = 0;
	var uLocal_7416 = 0;
	var uLocal_7417 = 0;
	var uLocal_7418 = 0;
	var uLocal_7419 = 0;
	var uLocal_7420 = 10;
	var uLocal_7421 = 3;
	var uLocal_7422 = 500;
	var uLocal_7423 = 10000;
	var uLocal_7424 = 0;
	var uLocal_7425 = 3;
	var uLocal_7426 = 500;
	var uLocal_7427 = 10000;
	var uLocal_7428 = 0;
	var uLocal_7429 = 3;
	var uLocal_7430 = 500;
	var uLocal_7431 = 10000;
	var uLocal_7432 = 0;
	var uLocal_7433 = 3;
	var uLocal_7434 = 500;
	var uLocal_7435 = 10000;
	var uLocal_7436 = 0;
	var uLocal_7437 = 3;
	var uLocal_7438 = 500;
	var uLocal_7439 = 10000;
	var uLocal_7440 = 0;
	var uLocal_7441 = 3;
	var uLocal_7442 = 500;
	var uLocal_7443 = 10000;
	var uLocal_7444 = 0;
	var uLocal_7445 = 3;
	var uLocal_7446 = 500;
	var uLocal_7447 = 10000;
	var uLocal_7448 = 0;
	var uLocal_7449 = 3;
	var uLocal_7450 = 500;
	var uLocal_7451 = 10000;
	var uLocal_7452 = 0;
	var uLocal_7453 = 3;
	var uLocal_7454 = 500;
	var uLocal_7455 = 10000;
	var uLocal_7456 = 0;
	var uLocal_7457 = 3;
	var uLocal_7458 = 500;
	var uLocal_7459 = 10000;
	var uLocal_7460 = 0;
	var uLocal_7461 = 0;
	var uLocal_7462 = 0;
	var uLocal_7463 = 0;
	var uLocal_7464 = 0;
	var uLocal_7465 = 0;
	var uLocal_7466 = 0;
	var uLocal_7467 = 3;
	var uLocal_7468 = 0;
	var uLocal_7469 = 0;
	var uLocal_7470 = 0;
	var uLocal_7471 = 0;
	var uLocal_7472 = -1;
	var uLocal_7473 = 0;
	var uLocal_7474 = 5;
	var uLocal_7475 = 0;
	var uLocal_7476 = 0;
	var uLocal_7477 = 0;
	var uLocal_7478 = 0;
	var uLocal_7479 = 0;
	var uLocal_7480 = 0;
	var uLocal_7481 = 0;
	var uLocal_7482 = 0;
	var uLocal_7483 = 0;
	var uLocal_7484 = 0;
	var uLocal_7485 = 10;
	var uLocal_7486 = 3;
	var uLocal_7487 = 500;
	var uLocal_7488 = 10000;
	var uLocal_7489 = 0;
	var uLocal_7490 = 3;
	var uLocal_7491 = 500;
	var uLocal_7492 = 10000;
	var uLocal_7493 = 0;
	var uLocal_7494 = 3;
	var uLocal_7495 = 500;
	var uLocal_7496 = 10000;
	var uLocal_7497 = 0;
	var uLocal_7498 = 3;
	var uLocal_7499 = 500;
	var uLocal_7500 = 10000;
	var uLocal_7501 = 0;
	var uLocal_7502 = 3;
	var uLocal_7503 = 500;
	var uLocal_7504 = 10000;
	var uLocal_7505 = 0;
	var uLocal_7506 = 3;
	var uLocal_7507 = 500;
	var uLocal_7508 = 10000;
	var uLocal_7509 = 0;
	var uLocal_7510 = 3;
	var uLocal_7511 = 500;
	var uLocal_7512 = 10000;
	var uLocal_7513 = 0;
	var uLocal_7514 = 3;
	var uLocal_7515 = 500;
	var uLocal_7516 = 10000;
	var uLocal_7517 = 0;
	var uLocal_7518 = 3;
	var uLocal_7519 = 500;
	var uLocal_7520 = 10000;
	var uLocal_7521 = 0;
	var uLocal_7522 = 3;
	var uLocal_7523 = 500;
	var uLocal_7524 = 10000;
	var uLocal_7525 = 0;
	var uLocal_7526 = 0;
	var uLocal_7527 = 0;
	var uLocal_7528 = 0;
	var uLocal_7529 = 0;
	var uLocal_7530 = 0;
	var uLocal_7531 = 0;
	var uLocal_7532 = 3;
	var uLocal_7533 = 0;
	var uLocal_7534 = 0;
	var uLocal_7535 = 0;
	var uLocal_7536 = 0;
	var uLocal_7537 = -1;
	var uLocal_7538 = 0;
	var uLocal_7539 = 5;
	var uLocal_7540 = 0;
	var uLocal_7541 = 0;
	var uLocal_7542 = 0;
	var uLocal_7543 = 0;
	var uLocal_7544 = 0;
	var uLocal_7545 = 0;
	var uLocal_7546 = 0;
	var uLocal_7547 = 0;
	var uLocal_7548 = 0;
	var uLocal_7549 = 0;
	var uLocal_7550 = 10;
	var uLocal_7551 = 3;
	var uLocal_7552 = 500;
	var uLocal_7553 = 10000;
	var uLocal_7554 = 0;
	var uLocal_7555 = 3;
	var uLocal_7556 = 500;
	var uLocal_7557 = 10000;
	var uLocal_7558 = 0;
	var uLocal_7559 = 3;
	var uLocal_7560 = 500;
	var uLocal_7561 = 10000;
	var uLocal_7562 = 0;
	var uLocal_7563 = 3;
	var uLocal_7564 = 500;
	var uLocal_7565 = 10000;
	var uLocal_7566 = 0;
	var uLocal_7567 = 3;
	var uLocal_7568 = 500;
	var uLocal_7569 = 10000;
	var uLocal_7570 = 0;
	var uLocal_7571 = 3;
	var uLocal_7572 = 500;
	var uLocal_7573 = 10000;
	var uLocal_7574 = 0;
	var uLocal_7575 = 3;
	var uLocal_7576 = 500;
	var uLocal_7577 = 10000;
	var uLocal_7578 = 0;
	var uLocal_7579 = 3;
	var uLocal_7580 = 500;
	var uLocal_7581 = 10000;
	var uLocal_7582 = 0;
	var uLocal_7583 = 3;
	var uLocal_7584 = 500;
	var uLocal_7585 = 10000;
	var uLocal_7586 = 0;
	var uLocal_7587 = 3;
	var uLocal_7588 = 500;
	var uLocal_7589 = 10000;
	var uLocal_7590 = 0;
	var uLocal_7591 = 0;
	var uLocal_7592 = 0;
	var uLocal_7593 = 0;
	var uLocal_7594 = 0;
	var uLocal_7595 = 0;
	var uLocal_7596 = 0;
	var uLocal_7597 = 3;
	var uLocal_7598 = 0;
	var uLocal_7599 = 0;
	var uLocal_7600 = 0;
	var uLocal_7601 = 0;
	var uLocal_7602 = -1;
	var uLocal_7603 = 0;
	var uLocal_7604 = 5;
	var uLocal_7605 = 0;
	var uLocal_7606 = 0;
	var uLocal_7607 = 0;
	var uLocal_7608 = 0;
	var uLocal_7609 = 0;
	var uLocal_7610 = 0;
	var uLocal_7611 = 0;
	var uLocal_7612 = 0;
	var uLocal_7613 = 0;
	var uLocal_7614 = 0;
	var uLocal_7615 = 10;
	var uLocal_7616 = 3;
	var uLocal_7617 = 500;
	var uLocal_7618 = 10000;
	var uLocal_7619 = 0;
	var uLocal_7620 = 3;
	var uLocal_7621 = 500;
	var uLocal_7622 = 10000;
	var uLocal_7623 = 0;
	var uLocal_7624 = 3;
	var uLocal_7625 = 500;
	var uLocal_7626 = 10000;
	var uLocal_7627 = 0;
	var uLocal_7628 = 3;
	var uLocal_7629 = 500;
	var uLocal_7630 = 10000;
	var uLocal_7631 = 0;
	var uLocal_7632 = 3;
	var uLocal_7633 = 500;
	var uLocal_7634 = 10000;
	var uLocal_7635 = 0;
	var uLocal_7636 = 3;
	var uLocal_7637 = 500;
	var uLocal_7638 = 10000;
	var uLocal_7639 = 0;
	var uLocal_7640 = 3;
	var uLocal_7641 = 500;
	var uLocal_7642 = 10000;
	var uLocal_7643 = 0;
	var uLocal_7644 = 3;
	var uLocal_7645 = 500;
	var uLocal_7646 = 10000;
	var uLocal_7647 = 0;
	var uLocal_7648 = 3;
	var uLocal_7649 = 500;
	var uLocal_7650 = 10000;
	var uLocal_7651 = 0;
	var uLocal_7652 = 3;
	var uLocal_7653 = 500;
	var uLocal_7654 = 10000;
	var uLocal_7655 = 0;
	var uLocal_7656 = 0;
	var uLocal_7657 = 0;
	var uLocal_7658 = 0;
	var uLocal_7659 = 0;
	var uLocal_7660 = 0;
	var uLocal_7661 = 0;
	var uLocal_7662 = 3;
	var uLocal_7663 = 0;
	var uLocal_7664 = 0;
	var uLocal_7665 = 0;
	var uLocal_7666 = 0;
	var uLocal_7667 = -1;
	var uLocal_7668 = 0;
	var uLocal_7669 = 5;
	var uLocal_7670 = 0;
	var uLocal_7671 = 0;
	var uLocal_7672 = 0;
	var uLocal_7673 = 0;
	var uLocal_7674 = 0;
	var uLocal_7675 = 0;
	var uLocal_7676 = 0;
	var uLocal_7677 = 0;
	var uLocal_7678 = 0;
	var uLocal_7679 = 0;
	var uLocal_7680 = 10;
	var uLocal_7681 = 3;
	var uLocal_7682 = 500;
	var uLocal_7683 = 10000;
	var uLocal_7684 = 0;
	var uLocal_7685 = 3;
	var uLocal_7686 = 500;
	var uLocal_7687 = 10000;
	var uLocal_7688 = 0;
	var uLocal_7689 = 3;
	var uLocal_7690 = 500;
	var uLocal_7691 = 10000;
	var uLocal_7692 = 0;
	var uLocal_7693 = 3;
	var uLocal_7694 = 500;
	var uLocal_7695 = 10000;
	var uLocal_7696 = 0;
	var uLocal_7697 = 3;
	var uLocal_7698 = 500;
	var uLocal_7699 = 10000;
	var uLocal_7700 = 0;
	var uLocal_7701 = 3;
	var uLocal_7702 = 500;
	var uLocal_7703 = 10000;
	var uLocal_7704 = 0;
	var uLocal_7705 = 3;
	var uLocal_7706 = 500;
	var uLocal_7707 = 10000;
	var uLocal_7708 = 0;
	var uLocal_7709 = 3;
	var uLocal_7710 = 500;
	var uLocal_7711 = 10000;
	var uLocal_7712 = 0;
	var uLocal_7713 = 3;
	var uLocal_7714 = 500;
	var uLocal_7715 = 10000;
	var uLocal_7716 = 0;
	var uLocal_7717 = 3;
	var uLocal_7718 = 500;
	var uLocal_7719 = 10000;
	var uLocal_7720 = 0;
	var uLocal_7721 = 0;
	var uLocal_7722 = 0;
	var uLocal_7723 = 0;
	var uLocal_7724 = 0;
	var uLocal_7725 = 0;
	var uLocal_7726 = 0;
	var uLocal_7727 = 3;
	var uLocal_7728 = 0;
	var uLocal_7729 = 0;
	var uLocal_7730 = 0;
	var uLocal_7731 = 0;
	var uLocal_7732 = -1;
	var uLocal_7733 = 0;
	var uLocal_7734 = 5;
	var uLocal_7735 = 0;
	var uLocal_7736 = 0;
	var uLocal_7737 = 0;
	var uLocal_7738 = 0;
	var uLocal_7739 = 0;
	var uLocal_7740 = 0;
	var uLocal_7741 = 0;
	var uLocal_7742 = 0;
	var uLocal_7743 = 0;
	var uLocal_7744 = 0;
	var uLocal_7745 = 10;
	var uLocal_7746 = 3;
	var uLocal_7747 = 500;
	var uLocal_7748 = 10000;
	var uLocal_7749 = 0;
	var uLocal_7750 = 3;
	var uLocal_7751 = 500;
	var uLocal_7752 = 10000;
	var uLocal_7753 = 0;
	var uLocal_7754 = 3;
	var uLocal_7755 = 500;
	var uLocal_7756 = 10000;
	var uLocal_7757 = 0;
	var uLocal_7758 = 3;
	var uLocal_7759 = 500;
	var uLocal_7760 = 10000;
	var uLocal_7761 = 0;
	var uLocal_7762 = 3;
	var uLocal_7763 = 500;
	var uLocal_7764 = 10000;
	var uLocal_7765 = 0;
	var uLocal_7766 = 3;
	var uLocal_7767 = 500;
	var uLocal_7768 = 10000;
	var uLocal_7769 = 0;
	var uLocal_7770 = 3;
	var uLocal_7771 = 500;
	var uLocal_7772 = 10000;
	var uLocal_7773 = 0;
	var uLocal_7774 = 3;
	var uLocal_7775 = 500;
	var uLocal_7776 = 10000;
	var uLocal_7777 = 0;
	var uLocal_7778 = 3;
	var uLocal_7779 = 500;
	var uLocal_7780 = 10000;
	var uLocal_7781 = 0;
	var uLocal_7782 = 3;
	var uLocal_7783 = 500;
	var uLocal_7784 = 10000;
	var uLocal_7785 = 0;
	var uLocal_7786 = 0;
	var uLocal_7787 = 0;
	var uLocal_7788 = 0;
	var uLocal_7789 = 0;
	var uLocal_7790 = 0;
	var uLocal_7791 = 0;
	var uLocal_7792 = 3;
	var uLocal_7793 = 0;
	var uLocal_7794 = 0;
	var uLocal_7795 = 0;
	var uLocal_7796 = 0;
	var uLocal_7797 = -1;
	var uLocal_7798 = 0;
	var uLocal_7799 = 5;
	var uLocal_7800 = 0;
	var uLocal_7801 = 0;
	var uLocal_7802 = 0;
	var uLocal_7803 = 0;
	var uLocal_7804 = 0;
	var uLocal_7805 = 0;
	var uLocal_7806 = 0;
	var uLocal_7807 = 0;
	var uLocal_7808 = 0;
	var uLocal_7809 = 0;
	var uLocal_7810 = 10;
	var uLocal_7811 = 3;
	var uLocal_7812 = 500;
	var uLocal_7813 = 10000;
	var uLocal_7814 = 0;
	var uLocal_7815 = 3;
	var uLocal_7816 = 500;
	var uLocal_7817 = 10000;
	var uLocal_7818 = 0;
	var uLocal_7819 = 3;
	var uLocal_7820 = 500;
	var uLocal_7821 = 10000;
	var uLocal_7822 = 0;
	var uLocal_7823 = 3;
	var uLocal_7824 = 500;
	var uLocal_7825 = 10000;
	var uLocal_7826 = 0;
	var uLocal_7827 = 3;
	var uLocal_7828 = 500;
	var uLocal_7829 = 10000;
	var uLocal_7830 = 0;
	var uLocal_7831 = 3;
	var uLocal_7832 = 500;
	var uLocal_7833 = 10000;
	var uLocal_7834 = 0;
	var uLocal_7835 = 3;
	var uLocal_7836 = 500;
	var uLocal_7837 = 10000;
	var uLocal_7838 = 0;
	var uLocal_7839 = 3;
	var uLocal_7840 = 500;
	var uLocal_7841 = 10000;
	var uLocal_7842 = 0;
	var uLocal_7843 = 3;
	var uLocal_7844 = 500;
	var uLocal_7845 = 10000;
	var uLocal_7846 = 0;
	var uLocal_7847 = 3;
	var uLocal_7848 = 500;
	var uLocal_7849 = 10000;
	var uLocal_7850 = 0;
	var uLocal_7851 = 0;
	var uLocal_7852 = 0;
	var uLocal_7853 = 0;
	var uLocal_7854 = 0;
	var uLocal_7855 = 0;
	var uLocal_7856 = 0;
	var uLocal_7857 = 3;
	var uLocal_7858 = 0;
	var uLocal_7859 = 0;
	var uLocal_7860 = 0;
	var uLocal_7861 = 0;
	var uLocal_7862 = -1;
	var uLocal_7863 = 0;
	var uLocal_7864 = 5;
	var uLocal_7865 = 0;
	var uLocal_7866 = 0;
	var uLocal_7867 = 0;
	var uLocal_7868 = 0;
	var uLocal_7869 = 0;
	var uLocal_7870 = 0;
	var uLocal_7871 = 0;
	var uLocal_7872 = 0;
	var uLocal_7873 = 0;
	var uLocal_7874 = 0;
	var uLocal_7875 = 10;
	var uLocal_7876 = 3;
	var uLocal_7877 = 500;
	var uLocal_7878 = 10000;
	var uLocal_7879 = 0;
	var uLocal_7880 = 3;
	var uLocal_7881 = 500;
	var uLocal_7882 = 10000;
	var uLocal_7883 = 0;
	var uLocal_7884 = 3;
	var uLocal_7885 = 500;
	var uLocal_7886 = 10000;
	var uLocal_7887 = 0;
	var uLocal_7888 = 3;
	var uLocal_7889 = 500;
	var uLocal_7890 = 10000;
	var uLocal_7891 = 0;
	var uLocal_7892 = 3;
	var uLocal_7893 = 500;
	var uLocal_7894 = 10000;
	var uLocal_7895 = 0;
	var uLocal_7896 = 3;
	var uLocal_7897 = 500;
	var uLocal_7898 = 10000;
	var uLocal_7899 = 0;
	var uLocal_7900 = 3;
	var uLocal_7901 = 500;
	var uLocal_7902 = 10000;
	var uLocal_7903 = 0;
	var uLocal_7904 = 3;
	var uLocal_7905 = 500;
	var uLocal_7906 = 10000;
	var uLocal_7907 = 0;
	var uLocal_7908 = 3;
	var uLocal_7909 = 500;
	var uLocal_7910 = 10000;
	var uLocal_7911 = 0;
	var uLocal_7912 = 3;
	var uLocal_7913 = 500;
	var uLocal_7914 = 10000;
	var uLocal_7915 = 0;
	var uLocal_7916 = 0;
	var uLocal_7917 = 0;
	var uLocal_7918 = 0;
	var uLocal_7919 = 0;
	var uLocal_7920 = 0;
	var uLocal_7921 = 0;
	var uLocal_7922 = 3;
	var uLocal_7923 = 0;
	var uLocal_7924 = 0;
	var uLocal_7925 = 0;
	var uLocal_7926 = 0;
	var uLocal_7927 = -1;
	var uLocal_7928 = 0;
	var uLocal_7929 = 5;
	var uLocal_7930 = 0;
	var uLocal_7931 = 0;
	var uLocal_7932 = 0;
	var uLocal_7933 = 0;
	var uLocal_7934 = 0;
	var uLocal_7935 = 0;
	var uLocal_7936 = 0;
	var uLocal_7937 = 0;
	var uLocal_7938 = 0;
	var uLocal_7939 = 0;
	var uLocal_7940 = 10;
	var uLocal_7941 = 3;
	var uLocal_7942 = 500;
	var uLocal_7943 = 10000;
	var uLocal_7944 = 0;
	var uLocal_7945 = 3;
	var uLocal_7946 = 500;
	var uLocal_7947 = 10000;
	var uLocal_7948 = 0;
	var uLocal_7949 = 3;
	var uLocal_7950 = 500;
	var uLocal_7951 = 10000;
	var uLocal_7952 = 0;
	var uLocal_7953 = 3;
	var uLocal_7954 = 500;
	var uLocal_7955 = 10000;
	var uLocal_7956 = 0;
	var uLocal_7957 = 3;
	var uLocal_7958 = 500;
	var uLocal_7959 = 10000;
	var uLocal_7960 = 0;
	var uLocal_7961 = 3;
	var uLocal_7962 = 500;
	var uLocal_7963 = 10000;
	var uLocal_7964 = 0;
	var uLocal_7965 = 3;
	var uLocal_7966 = 500;
	var uLocal_7967 = 10000;
	var uLocal_7968 = 0;
	var uLocal_7969 = 3;
	var uLocal_7970 = 500;
	var uLocal_7971 = 10000;
	var uLocal_7972 = 0;
	var uLocal_7973 = 3;
	var uLocal_7974 = 500;
	var uLocal_7975 = 10000;
	var uLocal_7976 = 0;
	var uLocal_7977 = 3;
	var uLocal_7978 = 500;
	var uLocal_7979 = 10000;
	var uLocal_7980 = 0;
	var uLocal_7981 = 0;
	var uLocal_7982 = 0;
	var uLocal_7983 = 0;
	var uLocal_7984 = 0;
	var uLocal_7985 = 0;
	var uLocal_7986 = 0;
	var uLocal_7987 = 3;
	var uLocal_7988 = 0;
	var uLocal_7989 = 0;
	var uLocal_7990 = 0;
	var uLocal_7991 = 0;
	var uLocal_7992 = -1;
	var uLocal_7993 = 0;
	var uLocal_7994 = 5;
	var uLocal_7995 = 0;
	var uLocal_7996 = 0;
	var uLocal_7997 = 0;
	var uLocal_7998 = 0;
	var uLocal_7999 = 0;
	var uLocal_8000 = 0;
	var uLocal_8001 = 0;
	var uLocal_8002 = 0;
	var uLocal_8003 = 0;
	var uLocal_8004 = 0;
	var uLocal_8005 = 10;
	var uLocal_8006 = 3;
	var uLocal_8007 = 500;
	var uLocal_8008 = 10000;
	var uLocal_8009 = 0;
	var uLocal_8010 = 3;
	var uLocal_8011 = 500;
	var uLocal_8012 = 10000;
	var uLocal_8013 = 0;
	var uLocal_8014 = 3;
	var uLocal_8015 = 500;
	var uLocal_8016 = 10000;
	var uLocal_8017 = 0;
	var uLocal_8018 = 3;
	var uLocal_8019 = 500;
	var uLocal_8020 = 10000;
	var uLocal_8021 = 0;
	var uLocal_8022 = 3;
	var uLocal_8023 = 500;
	var uLocal_8024 = 10000;
	var uLocal_8025 = 0;
	var uLocal_8026 = 3;
	var uLocal_8027 = 500;
	var uLocal_8028 = 10000;
	var uLocal_8029 = 0;
	var uLocal_8030 = 3;
	var uLocal_8031 = 500;
	var uLocal_8032 = 10000;
	var uLocal_8033 = 0;
	var uLocal_8034 = 3;
	var uLocal_8035 = 500;
	var uLocal_8036 = 10000;
	var uLocal_8037 = 0;
	var uLocal_8038 = 3;
	var uLocal_8039 = 500;
	var uLocal_8040 = 10000;
	var uLocal_8041 = 0;
	var uLocal_8042 = 3;
	var uLocal_8043 = 500;
	var uLocal_8044 = 10000;
	var uLocal_8045 = 0;
	var uLocal_8046 = 0;
	var uLocal_8047 = 0;
	var uLocal_8048 = 1;
	var uLocal_8049 = 0;
	var uLocal_8050 = 0;
	var uLocal_8051 = 0;
	var uLocal_8052 = 0;
	var uLocal_8053 = 0;
	var uLocal_8054 = 0;
	var uLocal_8055 = 0;
	var uLocal_8056 = 0;
	var uLocal_8057 = 0;
	var uLocal_8058 = 0;
	var uLocal_8059 = 0;
	var uLocal_8060 = 0;
	var uLocal_8061 = 65;
	var uLocal_8062 = 0;
	var uLocal_8063 = 0;
	var uLocal_8064 = 0;
	var uLocal_8065 = 0;
	var uLocal_8066 = 0;
	var uLocal_8067 = 0;
	var uLocal_8068 = 0;
	var uLocal_8069 = 0;
	var uLocal_8070 = 0;
	var uLocal_8071 = 0;
	var uLocal_8072 = 0;
	var uLocal_8073 = 0;
	var uLocal_8074 = 0;
	var uLocal_8075 = 0;
	var uLocal_8076 = 0;
	var uLocal_8077 = 0;
	var uLocal_8078 = 0;
	var uLocal_8079 = 0;
	var uLocal_8080 = 0;
	var uLocal_8081 = 0;
	var uLocal_8082 = 0;
	var uLocal_8083 = 0;
	var uLocal_8084 = 0;
	var uLocal_8085 = 0;
	var uLocal_8086 = 0;
	var uLocal_8087 = 0;
	var uLocal_8088 = 0;
	var uLocal_8089 = 0;
	var uLocal_8090 = 0;
	var uLocal_8091 = 0;
	var uLocal_8092 = 0;
	var uLocal_8093 = 0;
	var uLocal_8094 = 0;
	var uLocal_8095 = 0;
	var uLocal_8096 = 0;
	var uLocal_8097 = 0;
	var uLocal_8098 = 0;
	var uLocal_8099 = 0;
	var uLocal_8100 = 0;
	var uLocal_8101 = 0;
	var uLocal_8102 = 0;
	var uLocal_8103 = 0;
	var uLocal_8104 = 0;
	var uLocal_8105 = 0;
	var uLocal_8106 = 0;
	var uLocal_8107 = 0;
	var uLocal_8108 = 0;
	var uLocal_8109 = 0;
	var uLocal_8110 = 0;
	var uLocal_8111 = 0;
	var uLocal_8112 = 0;
	var uLocal_8113 = 0;
	var uLocal_8114 = 0;
	var uLocal_8115 = 0;
	var uLocal_8116 = 0;
	var uLocal_8117 = 0;
	var uLocal_8118 = 0;
	var uLocal_8119 = 0;
	var uLocal_8120 = 0;
	var uLocal_8121 = 0;
	var uLocal_8122 = 0;
	var uLocal_8123 = 0;
	var uLocal_8124 = 0;
	var uLocal_8125 = 0;
	var uLocal_8126 = 0;
	var uLocal_8127 = 0;
	var uLocal_8128 = 0;
	var uLocal_8129 = 0;
	var uLocal_8130 = 0;
	var uLocal_8131 = 0;
	var uLocal_8132 = 0;
	var uLocal_8133 = 0;
	var uLocal_8134 = 0;
	var uLocal_8135 = 0;
	var uLocal_8136 = 0;
	var uLocal_8137 = 0;
	var uLocal_8138 = 0;
	var uLocal_8139 = 0;
	var uLocal_8140 = 0;
	var uLocal_8141 = 0;
	var uLocal_8142 = 0;
	var uLocal_8143 = 0;
	var uLocal_8144 = 0;
	var uLocal_8145 = 0;
	var uLocal_8146 = 0;
	var uLocal_8147 = 0;
	var uLocal_8148 = 0;
	var uLocal_8149 = 0;
	var uLocal_8150 = 0;
	var uLocal_8151 = 0;
	var uLocal_8152 = 0;
	var uLocal_8153 = 0;
	var uLocal_8154 = 0;
	var uLocal_8155 = 0;
	var uLocal_8156 = 0;
	var uLocal_8157 = 0;
	var uLocal_8158 = 0;
	var uLocal_8159 = 0;
	var uLocal_8160 = 0;
	var uLocal_8161 = 0;
	var uLocal_8162 = 0;
	var uLocal_8163 = 0;
	var uLocal_8164 = 0;
	var uLocal_8165 = 0;
	var uLocal_8166 = 0;
	var uLocal_8167 = 0;
	var uLocal_8168 = 0;
	var uLocal_8169 = 0;
	var uLocal_8170 = 0;
	var uLocal_8171 = 0;
	var uLocal_8172 = 0;
	var uLocal_8173 = 0;
	var uLocal_8174 = 0;
	var uLocal_8175 = 0;
	var uLocal_8176 = 0;
	var uLocal_8177 = 0;
	var uLocal_8178 = 0;
	var uLocal_8179 = 0;
	var uLocal_8180 = 0;
	var uLocal_8181 = 0;
	var uLocal_8182 = 0;
	var uLocal_8183 = 0;
	var uLocal_8184 = 0;
	var uLocal_8185 = 0;
	var uLocal_8186 = 0;
	var uLocal_8187 = 0;
	var uLocal_8188 = 0;
	var uLocal_8189 = 0;
	var uLocal_8190 = 0;
	var uLocal_8191 = 0;
	var uLocal_8192 = 0;
	var uLocal_8193 = 0;
	var uLocal_8194 = 0;
	var uLocal_8195 = 0;
	var uLocal_8196 = 0;
	var uLocal_8197 = 0;
	var uLocal_8198 = 0;
	var uLocal_8199 = 0;
	var uLocal_8200 = 0;
	var uLocal_8201 = 0;
	var uLocal_8202 = 0;
	var uLocal_8203 = 0;
	var uLocal_8204 = 0;
	var uLocal_8205 = 0;
	var uLocal_8206 = 0;
	var uLocal_8207 = 0;
	var uLocal_8208 = 0;
	var uLocal_8209 = 0;
	var uLocal_8210 = 0;
	var uLocal_8211 = 0;
	var uLocal_8212 = 0;
	var uLocal_8213 = 0;
	var uLocal_8214 = 0;
	var uLocal_8215 = 0;
	var uLocal_8216 = 0;
	var uLocal_8217 = 0;
	var uLocal_8218 = 0;
	var uLocal_8219 = 0;
	var uLocal_8220 = 0;
	var uLocal_8221 = 0;
	var uLocal_8222 = 0;
	var uLocal_8223 = 0;
	var uLocal_8224 = 0;
	var uLocal_8225 = 0;
	var uLocal_8226 = 0;
	var uLocal_8227 = 0;
	var uLocal_8228 = 0;
	var uLocal_8229 = 0;
	var uLocal_8230 = 0;
	var uLocal_8231 = 0;
	var uLocal_8232 = 0;
	var uLocal_8233 = 0;
	var uLocal_8234 = 0;
	var uLocal_8235 = 0;
	var uLocal_8236 = 0;
	var uLocal_8237 = 0;
	var uLocal_8238 = 0;
	var uLocal_8239 = 0;
	var uLocal_8240 = 0;
	var uLocal_8241 = 0;
	var uLocal_8242 = 0;
	var uLocal_8243 = 0;
	var uLocal_8244 = 0;
	var uLocal_8245 = 0;
	var uLocal_8246 = 0;
	var uLocal_8247 = 0;
	var uLocal_8248 = 0;
	var uLocal_8249 = 0;
	var uLocal_8250 = 0;
	var uLocal_8251 = 0;
	var uLocal_8252 = 0;
	var uLocal_8253 = 0;
	var uLocal_8254 = 0;
	var uLocal_8255 = 0;
	var uLocal_8256 = 0;
	var uLocal_8257 = 0;
	var uLocal_8258 = 0;
	var uLocal_8259 = 0;
	var uLocal_8260 = 0;
	var uLocal_8261 = 0;
	var uLocal_8262 = 0;
	var uLocal_8263 = 0;
	var uLocal_8264 = 0;
	var uLocal_8265 = 0;
	var uLocal_8266 = 0;
	var uLocal_8267 = 0;
	var uLocal_8268 = 0;
	var uLocal_8269 = 0;
	var uLocal_8270 = 0;
	var uLocal_8271 = 0;
	var uLocal_8272 = 0;
	var uLocal_8273 = 0;
	var uLocal_8274 = 0;
	var uLocal_8275 = 0;
	var uLocal_8276 = 0;
	var uLocal_8277 = 0;
	var uLocal_8278 = 0;
	var uLocal_8279 = 0;
	var uLocal_8280 = 0;
	var uLocal_8281 = 0;
	var uLocal_8282 = 0;
	var uLocal_8283 = 0;
	var uLocal_8284 = 0;
	var uLocal_8285 = 0;
	var uLocal_8286 = 0;
	var uLocal_8287 = 0;
	var uLocal_8288 = 0;
	var uLocal_8289 = 0;
	var uLocal_8290 = 0;
	var uLocal_8291 = 0;
	var uLocal_8292 = 0;
	var uLocal_8293 = 0;
	var uLocal_8294 = 0;
	var uLocal_8295 = 0;
	var uLocal_8296 = 0;
	var uLocal_8297 = 0;
	var uLocal_8298 = 0;
	var uLocal_8299 = 0;
	var uLocal_8300 = 0;
	var uLocal_8301 = 0;
	var uLocal_8302 = 0;
	var uLocal_8303 = 0;
	var uLocal_8304 = 0;
	var uLocal_8305 = 0;
	var uLocal_8306 = 0;
	var uLocal_8307 = 0;
	var uLocal_8308 = 0;
	var uLocal_8309 = 0;
	var uLocal_8310 = 0;
	var uLocal_8311 = 0;
	var uLocal_8312 = 0;
	var uLocal_8313 = 0;
	var uLocal_8314 = 0;
	var uLocal_8315 = 0;
	var uLocal_8316 = 0;
	var uLocal_8317 = 0;
	var uLocal_8318 = 0;
	var uLocal_8319 = 0;
	var uLocal_8320 = 0;
	var uLocal_8321 = 0;
	var uLocal_8322 = 0;
	var uLocal_8323 = 0;
	var uLocal_8324 = 0;
	var uLocal_8325 = 0;
	var uLocal_8326 = 0;
	var uLocal_8327 = 0;
	var uLocal_8328 = 0;
	var uLocal_8329 = 0;
	var uLocal_8330 = 0;
	var uLocal_8331 = 0;
	var uLocal_8332 = 0;
	var uLocal_8333 = 0;
	var uLocal_8334 = 0;
	var uLocal_8335 = 0;
	var uLocal_8336 = 0;
	var uLocal_8337 = 0;
	var uLocal_8338 = 0;
	var uLocal_8339 = 0;
	var uLocal_8340 = 0;
	var uLocal_8341 = 0;
	var uLocal_8342 = 0;
	var uLocal_8343 = 0;
	var uLocal_8344 = 0;
	var uLocal_8345 = 0;
	var uLocal_8346 = 0;
	var uLocal_8347 = 0;
	var uLocal_8348 = 0;
	var uLocal_8349 = 0;
	var uLocal_8350 = 0;
	var uLocal_8351 = 0;
	var uLocal_8352 = 0;
	var uLocal_8353 = 0;
	var uLocal_8354 = 0;
	var uLocal_8355 = 0;
	var uLocal_8356 = 0;
	var uLocal_8357 = 0;
	var uLocal_8358 = 0;
	var uLocal_8359 = 0;
	var uLocal_8360 = 0;
	var uLocal_8361 = 0;
	var uLocal_8362 = 0;
	var uLocal_8363 = 0;
	var uLocal_8364 = 0;
	var uLocal_8365 = 0;
	var uLocal_8366 = 0;
	var uLocal_8367 = 0;
	var uLocal_8368 = 0;
	var uLocal_8369 = 0;
	var uLocal_8370 = 0;
	var uLocal_8371 = 0;
	var uLocal_8372 = 0;
	var uLocal_8373 = 0;
	var uLocal_8374 = 0;
	var uLocal_8375 = 0;
	var uLocal_8376 = 0;
	var uLocal_8377 = 0;
	var uLocal_8378 = 0;
	var uLocal_8379 = 0;
	var uLocal_8380 = 0;
	var uLocal_8381 = 0;
	var uLocal_8382 = 0;
	var uLocal_8383 = 0;
	var uLocal_8384 = 0;
	var uLocal_8385 = 0;
	var uLocal_8386 = 0;
	var uLocal_8387 = 0;
	var uLocal_8388 = 0;
	var uLocal_8389 = 0;
	var uLocal_8390 = 0;
	var uLocal_8391 = 0;
	var uLocal_8392 = 0;
	var uLocal_8393 = 0;
	var uLocal_8394 = 0;
	var uLocal_8395 = 0;
	var uLocal_8396 = 0;
	var uLocal_8397 = 0;
	var uLocal_8398 = 0;
	var uLocal_8399 = 0;
	var uLocal_8400 = 0;
	var uLocal_8401 = 0;
	var uLocal_8402 = 0;
	var uLocal_8403 = 0;
	var uLocal_8404 = 0;
	var uLocal_8405 = 0;
	var uLocal_8406 = 0;
	var uLocal_8407 = 0;
	var uLocal_8408 = 0;
	var uLocal_8409 = 0;
	var uLocal_8410 = 0;
	var uLocal_8411 = 0;
	var uLocal_8412 = 0;
	var uLocal_8413 = 0;
	var uLocal_8414 = 0;
	var uLocal_8415 = 0;
	var uLocal_8416 = 0;
	var uLocal_8417 = 0;
	var uLocal_8418 = 0;
	var uLocal_8419 = 0;
	var uLocal_8420 = 0;
	var uLocal_8421 = 0;
	var uLocal_8422 = 0;
	var uLocal_8423 = 0;
	var uLocal_8424 = 0;
	var uLocal_8425 = 0;
	var uLocal_8426 = 0;
	var uLocal_8427 = 0;
	var uLocal_8428 = 0;
	var uLocal_8429 = 0;
	var uLocal_8430 = 0;
	var uLocal_8431 = 0;
	var uLocal_8432 = 0;
	var uLocal_8433 = 0;
	var uLocal_8434 = 0;
	var uLocal_8435 = 0;
	var uLocal_8436 = 0;
	var uLocal_8437 = 0;
	var uLocal_8438 = 0;
	var uLocal_8439 = 0;
	var uLocal_8440 = 0;
	var uLocal_8441 = 0;
	var uLocal_8442 = 0;
	var uLocal_8443 = 0;
	var uLocal_8444 = 0;
	var uLocal_8445 = 0;
	var uLocal_8446 = 0;
	var uLocal_8447 = 0;
	var uLocal_8448 = 0;
	var uLocal_8449 = 0;
	var uLocal_8450 = 0;
	var uLocal_8451 = 0;
	var uLocal_8452 = 0;
	var uLocal_8453 = 0;
	var uLocal_8454 = 0;
	var uLocal_8455 = 0;
	var uLocal_8456 = 0;
	var uLocal_8457 = 0;
	var uLocal_8458 = 0;
	var uLocal_8459 = 0;
	var uLocal_8460 = 0;
	var uLocal_8461 = 0;
	var uLocal_8462 = 0;
	var uLocal_8463 = 0;
	var uLocal_8464 = 0;
	var uLocal_8465 = 0;
	var uLocal_8466 = 0;
	var uLocal_8467 = 0;
	var uLocal_8468 = 0;
	var uLocal_8469 = 0;
	var uLocal_8470 = 0;
	var uLocal_8471 = 0;
	var uLocal_8472 = 0;
	var uLocal_8473 = 0;
	var uLocal_8474 = 0;
	var uLocal_8475 = 0;
	var uLocal_8476 = 0;
	var uLocal_8477 = 0;
	var uLocal_8478 = 0;
	var uLocal_8479 = 0;
	var uLocal_8480 = 0;
	var uLocal_8481 = 0;
	var uLocal_8482 = 0;
	var uLocal_8483 = 0;
	var uLocal_8484 = 0;
	var uLocal_8485 = 0;
	var uLocal_8486 = 0;
	var uLocal_8487 = 0;
	var uLocal_8488 = 0;
	var uLocal_8489 = 0;
	var uLocal_8490 = 0;
	var uLocal_8491 = 0;
	var uLocal_8492 = 0;
	var uLocal_8493 = 0;
	var uLocal_8494 = 0;
	var uLocal_8495 = 0;
	var uLocal_8496 = 0;
	var uLocal_8497 = 0;
	var uLocal_8498 = 0;
	var uLocal_8499 = 0;
	var uLocal_8500 = 0;
	var uLocal_8501 = 0;
	var uLocal_8502 = 0;
	var uLocal_8503 = 0;
	var uLocal_8504 = 0;
	var uLocal_8505 = 0;
	var uLocal_8506 = 0;
	var uLocal_8507 = 0;
	var uLocal_8508 = 0;
	var uLocal_8509 = 0;
	var uLocal_8510 = 0;
	var uLocal_8511 = 0;
	var uLocal_8512 = 0;
	var uLocal_8513 = 0;
	var uLocal_8514 = 0;
	var uLocal_8515 = 0;
	var uLocal_8516 = 0;
	var uLocal_8517 = 0;
	var uLocal_8518 = 0;
	var uLocal_8519 = 0;
	var uLocal_8520 = 0;
	var uLocal_8521 = 0;
	var uLocal_8522 = 0;
	var uLocal_8523 = 0;
	var uLocal_8524 = 0;
	var uLocal_8525 = 0;
	var uLocal_8526 = 0;
	var uLocal_8527 = 0;
	var uLocal_8528 = 0;
	var uLocal_8529 = 0;
	var uLocal_8530 = 0;
	var uLocal_8531 = 0;
	var uLocal_8532 = 0;
	var uLocal_8533 = 0;
	var uLocal_8534 = 0;
	var uLocal_8535 = 0;
	var uLocal_8536 = 0;
	var uLocal_8537 = 0;
	var uLocal_8538 = 0;
	var uLocal_8539 = 0;
	var uLocal_8540 = 0;
	var uLocal_8541 = 0;
	var uLocal_8542 = 0;
	var uLocal_8543 = 0;
	var uLocal_8544 = 0;
	var uLocal_8545 = 0;
	var uLocal_8546 = 0;
	var uLocal_8547 = 0;
	var uLocal_8548 = 0;
	var uLocal_8549 = 0;
	var uLocal_8550 = 0;
	var uLocal_8551 = 0;
	var uLocal_8552 = 0;
	var uLocal_8553 = 0;
	var uLocal_8554 = 0;
	var uLocal_8555 = 0;
	var uLocal_8556 = 0;
	var uLocal_8557 = 0;
	var uLocal_8558 = 0;
	var uLocal_8559 = 0;
	var uLocal_8560 = 0;
	var uLocal_8561 = 0;
	var uLocal_8562 = 0;
	var uLocal_8563 = 0;
	var uLocal_8564 = 0;
	var uLocal_8565 = 0;
	var uLocal_8566 = 0;
	var uLocal_8567 = 0;
	var uLocal_8568 = 0;
	var uLocal_8569 = 0;
	var uLocal_8570 = 0;
	var uLocal_8571 = 0;
	var uLocal_8572 = 0;
	var uLocal_8573 = 0;
	var uLocal_8574 = 0;
	var uLocal_8575 = 0;
	var uLocal_8576 = 0;
	var uLocal_8577 = 0;
	var uLocal_8578 = 0;
	var uLocal_8579 = 0;
	var uLocal_8580 = 0;
	var uLocal_8581 = 0;
	var uLocal_8582 = 0;
	var uLocal_8583 = 0;
	var uLocal_8584 = 0;
	var uLocal_8585 = 0;
	var uLocal_8586 = 0;
	var uLocal_8587 = 0;
	var uLocal_8588 = 0;
	var uLocal_8589 = 0;
	var uLocal_8590 = 0;
	var uLocal_8591 = 0;
	var uLocal_8592 = 0;
	var uLocal_8593 = 0;
	var uLocal_8594 = 0;
	var uLocal_8595 = 0;
	var uLocal_8596 = 0;
	var uLocal_8597 = 0;
	var uLocal_8598 = 0;
	var uLocal_8599 = 0;
	var uLocal_8600 = 0;
	var uLocal_8601 = 0;
	var uLocal_8602 = 0;
	var uLocal_8603 = 0;
	var uLocal_8604 = 0;
	var uLocal_8605 = 0;
	var uLocal_8606 = 0;
	var uLocal_8607 = 0;
	var uLocal_8608 = 0;
	var uLocal_8609 = 0;
	var uLocal_8610 = 0;
	var uLocal_8611 = 0;
	var uLocal_8612 = 0;
	var uLocal_8613 = 0;
	var uLocal_8614 = 0;
	var uLocal_8615 = 0;
	var uLocal_8616 = 0;
	var uLocal_8617 = 0;
	var uLocal_8618 = 0;
	var uLocal_8619 = 0;
	var uLocal_8620 = 0;
	var uLocal_8621 = 0;
	var uLocal_8622 = 0;
	var uLocal_8623 = 0;
	var uLocal_8624 = 0;
	var uLocal_8625 = 0;
	var uLocal_8626 = 0;
	var uLocal_8627 = 0;
	var uLocal_8628 = 0;
	var uLocal_8629 = 0;
	var uLocal_8630 = 0;
	var uLocal_8631 = 0;
	var uLocal_8632 = 0;
	var uLocal_8633 = 0;
	var uLocal_8634 = 0;
	var uLocal_8635 = 0;
	var uLocal_8636 = 0;
	var uLocal_8637 = 0;
	var uLocal_8638 = 0;
	var uLocal_8639 = 0;
	var uLocal_8640 = 0;
	var uLocal_8641 = 0;
	var uLocal_8642 = 0;
	var uLocal_8643 = 0;
	var uLocal_8644 = 0;
	var uLocal_8645 = 0;
	var uLocal_8646 = 0;
	var uLocal_8647 = 0;
	var uLocal_8648 = 0;
	var uLocal_8649 = 0;
	var uLocal_8650 = 0;
	var uLocal_8651 = 0;
	var uLocal_8652 = 0;
	var uLocal_8653 = 0;
	var uLocal_8654 = 0;
	var uLocal_8655 = 0;
	var uLocal_8656 = 0;
	var uLocal_8657 = 0;
	var uLocal_8658 = 0;
	var uLocal_8659 = 0;
	var uLocal_8660 = 0;
	var uLocal_8661 = 0;
	var uLocal_8662 = 0;
	var uLocal_8663 = 0;
	var uLocal_8664 = 0;
	var uLocal_8665 = 0;
	var uLocal_8666 = 0;
	var uLocal_8667 = 0;
	var uLocal_8668 = 0;
	var uLocal_8669 = 0;
	var uLocal_8670 = 0;
	var uLocal_8671 = 0;
	var uLocal_8672 = 0;
	var uLocal_8673 = 0;
	var uLocal_8674 = 0;
	var uLocal_8675 = 0;
	var uLocal_8676 = 0;
	var uLocal_8677 = 0;
	var uLocal_8678 = 0;
	var uLocal_8679 = 0;
	var uLocal_8680 = 0;
	var uLocal_8681 = 0;
	var uLocal_8682 = 0;
	var uLocal_8683 = 0;
	var uLocal_8684 = 0;
	var uLocal_8685 = 0;
	var uLocal_8686 = 0;
	var uLocal_8687 = 0;
	var uLocal_8688 = 0;
	var uLocal_8689 = 0;
	var uLocal_8690 = 0;
	var uLocal_8691 = 0;
	var uLocal_8692 = 0;
	var uLocal_8693 = 0;
	var uLocal_8694 = 0;
	var uLocal_8695 = 0;
	var uLocal_8696 = 0;
	var uLocal_8697 = 0;
	var uLocal_8698 = 0;
	var uLocal_8699 = 0;
	var uLocal_8700 = 0;
	var uLocal_8701 = 0;
	var uLocal_8702 = 0;
	var uLocal_8703 = 0;
	var uLocal_8704 = 0;
	var uLocal_8705 = 0;
	var uLocal_8706 = 0;
	var uLocal_8707 = 0;
	var uLocal_8708 = 0;
	var uLocal_8709 = 0;
	var uLocal_8710 = 0;
	var uLocal_8711 = 0;
	var uLocal_8712 = 0;
	var uLocal_8713 = 0;
	var uLocal_8714 = 0;
	var uLocal_8715 = 0;
	var uLocal_8716 = 0;
	var uLocal_8717 = 0;
	var uLocal_8718 = 0;
	var uLocal_8719 = 0;
	var uLocal_8720 = 0;
	var uLocal_8721 = 0;
	var uLocal_8722 = 0;
	var uLocal_8723 = 0;
	var uLocal_8724 = 0;
	var uLocal_8725 = 0;
	var uLocal_8726 = 0;
	var uLocal_8727 = 0;
	var uLocal_8728 = 0;
	var uLocal_8729 = 0;
	var uLocal_8730 = 0;
	var uLocal_8731 = 0;
	var uLocal_8732 = 0;
	var uLocal_8733 = 0;
	var uLocal_8734 = 0;
	var uLocal_8735 = 0;
	var uLocal_8736 = 0;
	var uLocal_8737 = 0;
	var uLocal_8738 = 0;
	var uLocal_8739 = 0;
	var uLocal_8740 = 0;
	var uLocal_8741 = 0;
	var uLocal_8742 = 0;
	var uLocal_8743 = 0;
	var uLocal_8744 = 0;
	var uLocal_8745 = 0;
	var uLocal_8746 = 0;
	var uLocal_8747 = 0;
	var uLocal_8748 = 0;
	var uLocal_8749 = 0;
	var uLocal_8750 = 0;
	var uLocal_8751 = 0;
	var uLocal_8752 = 0;
	var uLocal_8753 = 0;
	var uLocal_8754 = 0;
	var uLocal_8755 = 0;
	var uLocal_8756 = 0;
	var uLocal_8757 = 0;
	var uLocal_8758 = 0;
	var uLocal_8759 = 0;
	var uLocal_8760 = 0;
	var uLocal_8761 = 0;
	var uLocal_8762 = 0;
	var uLocal_8763 = 0;
	var uLocal_8764 = 0;
	var uLocal_8765 = 0;
	var uLocal_8766 = 0;
	var uLocal_8767 = 0;
	var uLocal_8768 = 0;
	var uLocal_8769 = 0;
	var uLocal_8770 = 0;
	var uLocal_8771 = 0;
	var uLocal_8772 = 0;
	var uLocal_8773 = 0;
	var uLocal_8774 = 0;
	var uLocal_8775 = 0;
	var uLocal_8776 = 0;
	var uLocal_8777 = 0;
	var uLocal_8778 = 0;
	var uLocal_8779 = 0;
	var uLocal_8780 = 0;
	var uLocal_8781 = 0;
	var uLocal_8782 = 0;
	var uLocal_8783 = 0;
	var uLocal_8784 = 0;
	var uLocal_8785 = 0;
	var uLocal_8786 = 0;
	var uLocal_8787 = 0;
	var uLocal_8788 = 0;
	var uLocal_8789 = 0;
	var uLocal_8790 = 0;
	var uLocal_8791 = 0;
	var uLocal_8792 = 0;
	var uLocal_8793 = 0;
	var uLocal_8794 = 0;
	var uLocal_8795 = 0;
	var uLocal_8796 = 0;
	var uLocal_8797 = 0;
	var uLocal_8798 = 0;
	var uLocal_8799 = 0;
	var uLocal_8800 = 0;
	var uLocal_8801 = 0;
	var uLocal_8802 = 0;
	var uLocal_8803 = 0;
	var uLocal_8804 = 0;
	var uLocal_8805 = 0;
	var uLocal_8806 = 0;
	var uLocal_8807 = 0;
	var uLocal_8808 = 0;
	var uLocal_8809 = 0;
	var uLocal_8810 = 0;
	var uLocal_8811 = 0;
	var uLocal_8812 = 0;
	var uLocal_8813 = 0;
	var uLocal_8814 = 0;
	var uLocal_8815 = 0;
	var uLocal_8816 = 0;
	var uLocal_8817 = 0;
	var uLocal_8818 = 0;
	var uLocal_8819 = 0;
	var uLocal_8820 = 0;
	var uLocal_8821 = 0;
	var uLocal_8822 = 0;
	var uLocal_8823 = 0;
	var uLocal_8824 = 0;
	var uLocal_8825 = 0;
	var uLocal_8826 = 0;
	var uLocal_8827 = 0;
	var uLocal_8828 = 0;
	var uLocal_8829 = 0;
	var uLocal_8830 = 0;
	var uLocal_8831 = 0;
	var uLocal_8832 = 0;
	var uLocal_8833 = 0;
	var uLocal_8834 = 0;
	var uLocal_8835 = 0;
	var uLocal_8836 = 0;
	var uLocal_8837 = 0;
	var uLocal_8838 = 0;
	var uLocal_8839 = 0;
	var uLocal_8840 = 0;
	var uLocal_8841 = 0;
	var uLocal_8842 = 1097859072;
	var uLocal_8843 = 1101004800;
	var uLocal_8844 = 0;
	var uLocal_8845 = 0;
	var uLocal_8846 = 0;
	var uLocal_8847 = 0;
	var uLocal_8848 = 0;
	var uLocal_8849 = 0;
	var uLocal_8850 = 0;
	var uLocal_8851 = 0;
	var uLocal_8852 = 0;
	var uLocal_8853 = 0;
	var uLocal_8854 = 0;
	var uLocal_8855 = 0;
	var uLocal_8856 = 0;
	var uLocal_8857 = 0;
	var uLocal_8858 = 0;
	var uLocal_8859 = 0;
	var uLocal_8860 = 0;
	var uLocal_8861 = 0;
	var uLocal_8862 = 0;
	var uLocal_8863 = 0;
	var uLocal_8864 = 0;
	var uLocal_8865 = 0;
	var uLocal_8866 = 0;
	var uLocal_8867 = 0;
	var uLocal_8868 = 0;
	var uLocal_8869 = 0;
	var uLocal_8870 = 4;
	var uLocal_8871 = 0;
	var uLocal_8872 = 0;
	var uLocal_8873 = 0;
	var uLocal_8874 = 0;
	var uLocal_8875 = 0;
	var uLocal_8876 = 0;
	var uLocal_8877 = 0;
	var uLocal_8878 = 0;
	var uLocal_8879 = 0;
	var uLocal_8880 = 0;
	var uLocal_8881 = 0;
	var uLocal_8882 = 0;
	var uLocal_8883 = 0;
	var uLocal_8884 = 0;
	var uLocal_8885 = 0;
	var uLocal_8886 = 0;
	var uLocal_8887 = 0;
	var uLocal_8888 = 0;
	var uLocal_8889 = 0;
	var uLocal_8890 = 0;
	var uLocal_8891 = 0;
	var uLocal_8892 = 0;
	var uLocal_8893 = 0;
	var uLocal_8894 = 0;
	var uLocal_8895 = 0;
	var uLocal_8896 = 0;
	var uLocal_8897 = 0;
	var uLocal_8898 = 0;
	var uLocal_8899 = 0;
	var uLocal_8900 = 0;
	var uLocal_8901 = 0;
	var uLocal_8902 = 0;
	var uLocal_8903 = 0;
	var uLocal_8904 = 0;
	var uLocal_8905 = 0;
	var uLocal_8906 = 0;
	var uLocal_8907 = 0;
	var uLocal_8908 = 0;
	var uLocal_8909 = 0;
	var uLocal_8910 = 0;
	var uLocal_8911 = 0;
	var uLocal_8912 = 0;
	var uLocal_8913 = 0;
	var uLocal_8914 = 0;
	var uLocal_8915 = 0;
	var uLocal_8916 = 0;
	var uLocal_8917 = 0;
	var uLocal_8918 = 0;
	var uLocal_8919 = 0;
	var uLocal_8920 = 0;
	var uLocal_8921 = 0;
	var uLocal_8922 = 0;
	var uLocal_8923 = 0;
	var uLocal_8924 = 0;
	var uLocal_8925 = 0;
	var uLocal_8926 = 0;
	var uLocal_8927 = 0;
	var uLocal_8928 = 0;
	var uLocal_8929 = 0;
	var uLocal_8930 = 0;
	var uLocal_8931 = 0;
	var uLocal_8932 = 0;
	var uLocal_8933 = 0;
	var uLocal_8934 = 0;
	var uLocal_8935 = 0;
	var uLocal_8936 = 0;
	var uLocal_8937 = 0;
	var uLocal_8938 = 0;
	var uLocal_8939 = 0;
	var uLocal_8940 = 0;
	var uLocal_8941 = 0;
	var uLocal_8942 = 40;
	var uLocal_8943 = 0;
	var uLocal_8944 = 0;
	var uLocal_8945 = 0;
	var uLocal_8946 = 0;
	var uLocal_8947 = 0;
	var uLocal_8948 = 0;
	var uLocal_8949 = 0;
	var uLocal_8950 = 0;
	var uLocal_8951 = 0;
	var uLocal_8952 = 0;
	var uLocal_8953 = 0;
	var uLocal_8954 = 0;
	var uLocal_8955 = 0;
	var uLocal_8956 = 0;
	var uLocal_8957 = 0;
	var uLocal_8958 = 0;
	var uLocal_8959 = 0;
	var uLocal_8960 = 0;
	var uLocal_8961 = 0;
	var uLocal_8962 = 0;
	var uLocal_8963 = 0;
	var uLocal_8964 = 0;
	var uLocal_8965 = 0;
	var uLocal_8966 = 0;
	var uLocal_8967 = 0;
	var uLocal_8968 = 0;
	var uLocal_8969 = 0;
	var uLocal_8970 = 0;
	var uLocal_8971 = 0;
	var uLocal_8972 = 0;
	var uLocal_8973 = 0;
	var uLocal_8974 = 0;
	var uLocal_8975 = 0;
	var uLocal_8976 = 0;
	var uLocal_8977 = 0;
	var uLocal_8978 = 0;
	var uLocal_8979 = 0;
	var uLocal_8980 = 0;
	var uLocal_8981 = 0;
	var uLocal_8982 = 0;
	var uLocal_8983 = 0;
	var uLocal_8984 = 0;
	var uLocal_8985 = 0;
	var uLocal_8986 = 0;
	var uLocal_8987 = 0;
	var uLocal_8988 = 0;
	var uLocal_8989 = 0;
	var uLocal_8990 = 0;
	var uLocal_8991 = 0;
	var uLocal_8992 = 0;
	var uLocal_8993 = 0;
	var uLocal_8994 = 0;
	var uLocal_8995 = 0;
	var uLocal_8996 = 0;
	var uLocal_8997 = 0;
	var uLocal_8998 = 0;
	var uLocal_8999 = 0;
	var uLocal_9000 = 0;
	var uLocal_9001 = 0;
	var uLocal_9002 = 0;
	var uLocal_9003 = 0;
	var uLocal_9004 = 0;
	var uLocal_9005 = 0;
	var uLocal_9006 = 0;
	var uLocal_9007 = 0;
	var uLocal_9008 = 0;
	var uLocal_9009 = 0;
	var uLocal_9010 = 0;
	var uLocal_9011 = 0;
	var uLocal_9012 = 0;
	var uLocal_9013 = 0;
	var uLocal_9014 = 0;
	var uLocal_9015 = 0;
	var uLocal_9016 = 0;
	var uLocal_9017 = 0;
	var uLocal_9018 = 0;
	var uLocal_9019 = 0;
	var uLocal_9020 = 0;
	var uLocal_9021 = 0;
	var uLocal_9022 = 0;
	var uLocal_9023 = 0;
	var uLocal_9024 = 0;
	var uLocal_9025 = 0;
	var uLocal_9026 = 0;
	var uLocal_9027 = 0;
	var uLocal_9028 = 0;
	var uLocal_9029 = 0;
	var uLocal_9030 = 0;
	var uLocal_9031 = 0;
	var uLocal_9032 = 0;
	var uLocal_9033 = 0;
	var uLocal_9034 = 0;
	var uLocal_9035 = 0;
	var uLocal_9036 = 0;
	var uLocal_9037 = 0;
	var uLocal_9038 = 0;
	var uLocal_9039 = 0;
	var uLocal_9040 = 0;
	var uLocal_9041 = 0;
	var uLocal_9042 = 0;
	var uLocal_9043 = 0;
	var uLocal_9044 = 0;
	var uLocal_9045 = 0;
	var uLocal_9046 = 0;
	var uLocal_9047 = 0;
	var uLocal_9048 = 0;
	var uLocal_9049 = 0;
	var uLocal_9050 = 0;
	var uLocal_9051 = 0;
	var uLocal_9052 = 0;
	var uLocal_9053 = 0;
	var uLocal_9054 = 0;
	var uLocal_9055 = 0;
	var uLocal_9056 = 0;
	var uLocal_9057 = 0;
	var uLocal_9058 = 0;
	var uLocal_9059 = 0;
	var uLocal_9060 = 0;
	var uLocal_9061 = 0;
	var uLocal_9062 = 0;
	var uLocal_9063 = 0;
	var uLocal_9064 = 0;
	var uLocal_9065 = 0;
	var uLocal_9066 = 0;
	var uLocal_9067 = 0;
	var uLocal_9068 = 0;
	var uLocal_9069 = 0;
	var uLocal_9070 = 0;
	var uLocal_9071 = 0;
	var uLocal_9072 = 0;
	var uLocal_9073 = 0;
	var uLocal_9074 = 0;
	var uLocal_9075 = 0;
	var uLocal_9076 = 0;
	var uLocal_9077 = 0;
	var uLocal_9078 = 0;
	var uLocal_9079 = 0;
	var uLocal_9080 = 0;
	var uLocal_9081 = 0;
	var uLocal_9082 = 0;
	var uLocal_9083 = 0;
	var uLocal_9084 = 0;
	var uLocal_9085 = 0;
	var uLocal_9086 = 0;
	var uLocal_9087 = 0;
	var uLocal_9088 = 0;
	var uLocal_9089 = 0;
	var uLocal_9090 = 0;
	var uLocal_9091 = 0;
	var uLocal_9092 = 0;
	var uLocal_9093 = 0;
	var uLocal_9094 = 0;
	var uLocal_9095 = 0;
	var uLocal_9096 = 0;
	var uLocal_9097 = 0;
	var uLocal_9098 = 0;
	var uLocal_9099 = 0;
	var uLocal_9100 = 0;
	var uLocal_9101 = 0;
	var uLocal_9102 = 0;
	var uLocal_9103 = 0;
	var uLocal_9104 = 0;
	var uLocal_9105 = 0;
	var uLocal_9106 = 0;
	var uLocal_9107 = 0;
	var uLocal_9108 = 0;
	var uLocal_9109 = 0;
	var uLocal_9110 = 0;
	var uLocal_9111 = 0;
	var uLocal_9112 = 0;
	var uLocal_9113 = 0;
	var uLocal_9114 = 0;
	var uLocal_9115 = 0;
	var uLocal_9116 = 0;
	var uLocal_9117 = 0;
	var uLocal_9118 = 0;
	var uLocal_9119 = 0;
	var uLocal_9120 = 0;
	var uLocal_9121 = 0;
	var uLocal_9122 = 0;
	var uLocal_9123 = 0;
	var uLocal_9124 = 0;
	var uLocal_9125 = 0;
	var uLocal_9126 = 0;
	var uLocal_9127 = 0;
	var uLocal_9128 = 0;
	var uLocal_9129 = 0;
	var uLocal_9130 = 0;
	var uLocal_9131 = 0;
	var uLocal_9132 = 0;
	var uLocal_9133 = 0;
	var uLocal_9134 = 0;
	var uLocal_9135 = 0;
	var uLocal_9136 = 0;
	var uLocal_9137 = 0;
	var uLocal_9138 = 0;
	var uLocal_9139 = 0;
	var uLocal_9140 = 0;
	var uLocal_9141 = 0;
	var uLocal_9142 = 0;
	var uLocal_9143 = 0;
	var uLocal_9144 = 0;
	var uLocal_9145 = 0;
	var uLocal_9146 = 0;
	var uLocal_9147 = 0;
	var uLocal_9148 = 0;
	var uLocal_9149 = 0;
	var uLocal_9150 = 0;
	var uLocal_9151 = 0;
	var uLocal_9152 = 0;
	var uLocal_9153 = 0;
	var uLocal_9154 = 0;
	var uLocal_9155 = 0;
	var uLocal_9156 = 0;
	var uLocal_9157 = 0;
	var uLocal_9158 = 0;
	var uLocal_9159 = 0;
	var uLocal_9160 = 0;
	var uLocal_9161 = 0;
	var uLocal_9162 = 0;
	var uLocal_9163 = 0;
	var uLocal_9164 = 0;
	var uLocal_9165 = 0;
	var uLocal_9166 = 0;
	var uLocal_9167 = 0;
	var uLocal_9168 = 0;
	var uLocal_9169 = 0;
	var uLocal_9170 = 0;
	var uLocal_9171 = 0;
	var uLocal_9172 = 0;
	var uLocal_9173 = 0;
	var uLocal_9174 = 0;
	var uLocal_9175 = 0;
	var uLocal_9176 = 0;
	var uLocal_9177 = 0;
	var uLocal_9178 = 0;
	var uLocal_9179 = 0;
	var uLocal_9180 = 0;
	var uLocal_9181 = 0;
	var uLocal_9182 = 0;
	var uLocal_9183 = 0;
	var uLocal_9184 = 0;
	var uLocal_9185 = 0;
	var uLocal_9186 = 0;
	var uLocal_9187 = 0;
	var uLocal_9188 = 0;
	var uLocal_9189 = 0;
	var uLocal_9190 = 0;
	var uLocal_9191 = 0;
	var uLocal_9192 = 0;
	var uLocal_9193 = 0;
	var uLocal_9194 = 0;
	var uLocal_9195 = 0;
	var uLocal_9196 = 0;
	var uLocal_9197 = 0;
	var uLocal_9198 = 0;
	var uLocal_9199 = 0;
	var uLocal_9200 = 0;
	var uLocal_9201 = 0;
	var uLocal_9202 = 0;
	var uLocal_9203 = 0;
	var uLocal_9204 = 0;
	var uLocal_9205 = 0;
	var uLocal_9206 = 0;
	var uLocal_9207 = 0;
	var uLocal_9208 = 0;
	var uLocal_9209 = 0;
	var uLocal_9210 = 0;
	var uLocal_9211 = 0;
	var uLocal_9212 = 0;
	var uLocal_9213 = 0;
	var uLocal_9214 = 0;
	var uLocal_9215 = 0;
	var uLocal_9216 = 0;
	var uLocal_9217 = 0;
	var uLocal_9218 = 0;
	var uLocal_9219 = 0;
	var uLocal_9220 = 0;
	var uLocal_9221 = 0;
	var uLocal_9222 = 0;
	var uLocal_9223 = 0;
	var uLocal_9224 = 0;
	var uLocal_9225 = 0;
	var uLocal_9226 = 0;
	var uLocal_9227 = 0;
	var uLocal_9228 = 0;
	var uLocal_9229 = 0;
	var uLocal_9230 = 0;
	var uLocal_9231 = 0;
	var uLocal_9232 = 0;
	var uLocal_9233 = 0;
	var uLocal_9234 = 0;
	var uLocal_9235 = 0;
	var uLocal_9236 = 0;
	var uLocal_9237 = 0;
	var uLocal_9238 = 0;
	var uLocal_9239 = 0;
	var uLocal_9240 = 0;
	var uLocal_9241 = 0;
	var uLocal_9242 = 0;
	var uLocal_9243 = 0;
	var uLocal_9244 = 0;
	var uLocal_9245 = 0;
	var uLocal_9246 = 0;
	var uLocal_9247 = 0;
	var uLocal_9248 = 0;
	var uLocal_9249 = 0;
	var uLocal_9250 = 0;
	var uLocal_9251 = 0;
	var uLocal_9252 = 0;
	var uLocal_9253 = 0;
	var uLocal_9254 = 0;
	var uLocal_9255 = 0;
	var uLocal_9256 = 0;
	var uLocal_9257 = 0;
	var uLocal_9258 = 0;
	var uLocal_9259 = 0;
	var uLocal_9260 = 0;
	var uLocal_9261 = 0;
	var uLocal_9262 = 0;
	var uLocal_9263 = 0;
	var uLocal_9264 = 0;
	var uLocal_9265 = 0;
	var uLocal_9266 = 0;
	var uLocal_9267 = 0;
	var uLocal_9268 = 0;
	var uLocal_9269 = 0;
	var uLocal_9270 = 0;
	var uLocal_9271 = 0;
	var uLocal_9272 = 0;
	var uLocal_9273 = 0;
	var uLocal_9274 = 0;
	var uLocal_9275 = 0;
	var uLocal_9276 = 0;
	var uLocal_9277 = 0;
	var uLocal_9278 = 0;
	var uLocal_9279 = 0;
	var uLocal_9280 = 0;
	var uLocal_9281 = 0;
	var uLocal_9282 = 0;
	var uLocal_9283 = 0;
	var uLocal_9284 = 0;
	var uLocal_9285 = 0;
	var uLocal_9286 = 0;
	var uLocal_9287 = 0;
	var uLocal_9288 = 0;
	var uLocal_9289 = 0;
	var uLocal_9290 = 0;
	var uLocal_9291 = 0;
	var uLocal_9292 = 0;
	var uLocal_9293 = 0;
	var uLocal_9294 = 0;
	var uLocal_9295 = 0;
	var uLocal_9296 = 0;
	var uLocal_9297 = 0;
	var uLocal_9298 = 0;
	var uLocal_9299 = 0;
	var uLocal_9300 = 0;
	var uLocal_9301 = 0;
	var uLocal_9302 = 0;
	var uLocal_9303 = 0;
	var uLocal_9304 = 0;
	var uLocal_9305 = 0;
	var uLocal_9306 = 0;
	var uLocal_9307 = 0;
	var uLocal_9308 = 0;
	var uLocal_9309 = 0;
	var uLocal_9310 = 0;
	var uLocal_9311 = 0;
	var uLocal_9312 = 0;
	var uLocal_9313 = 0;
	var uLocal_9314 = 0;
	var uLocal_9315 = 0;
	var uLocal_9316 = 0;
	var uLocal_9317 = 0;
	var uLocal_9318 = 0;
	var uLocal_9319 = 0;
	var uLocal_9320 = 0;
	var uLocal_9321 = 0;
	var uLocal_9322 = 0;
	var uLocal_9323 = 0;
	var uLocal_9324 = 0;
	var uLocal_9325 = 0;
	var uLocal_9326 = 0;
	var uLocal_9327 = 0;
	var uLocal_9328 = 0;
	var uLocal_9329 = 0;
	var uLocal_9330 = 0;
	var uLocal_9331 = 0;
	var uLocal_9332 = 0;
	var uLocal_9333 = 0;
	var uLocal_9334 = 0;
	var uLocal_9335 = 0;
	var uLocal_9336 = 0;
	var uLocal_9337 = 0;
	var uLocal_9338 = 0;
	var uLocal_9339 = 0;
	var uLocal_9340 = 0;
	var uLocal_9341 = 0;
	var uLocal_9342 = 0;
	var uLocal_9343 = 0;
	var uLocal_9344 = 0;
	var uLocal_9345 = 0;
	var uLocal_9346 = 0;
	var uLocal_9347 = 0;
	var uLocal_9348 = 0;
	var uLocal_9349 = 0;
	var uLocal_9350 = 0;
	var uLocal_9351 = 0;
	var uLocal_9352 = 0;
	var uLocal_9353 = 0;
	var uLocal_9354 = 0;
	var uLocal_9355 = 0;
	var uLocal_9356 = 0;
	var uLocal_9357 = 0;
	var uLocal_9358 = 0;
	var uLocal_9359 = 0;
	var uLocal_9360 = 0;
	var uLocal_9361 = 0;
	var uLocal_9362 = 0;
	var uLocal_9363 = 0;
	var uLocal_9364 = 0;
	var uLocal_9365 = 0;
	var uLocal_9366 = 0;
	var uLocal_9367 = 0;
	var uLocal_9368 = 0;
	var uLocal_9369 = 0;
	var uLocal_9370 = 0;
	var uLocal_9371 = 0;
	var uLocal_9372 = 0;
	var uLocal_9373 = 0;
	var uLocal_9374 = 0;
	var uLocal_9375 = 0;
	var uLocal_9376 = 0;
	var uLocal_9377 = 0;
	var uLocal_9378 = 0;
	var uLocal_9379 = 0;
	var uLocal_9380 = 0;
	var uLocal_9381 = 0;
	var uLocal_9382 = 0;
	var uLocal_9383 = 0;
	var uLocal_9384 = 0;
	var uLocal_9385 = 0;
	var uLocal_9386 = 0;
	var uLocal_9387 = 0;
	var uLocal_9388 = 0;
	var uLocal_9389 = 0;
	var uLocal_9390 = 0;
	var uLocal_9391 = 0;
	var uLocal_9392 = 0;
	var uLocal_9393 = 0;
	var uLocal_9394 = 0;
	var uLocal_9395 = 0;
	var uLocal_9396 = 0;
	var uLocal_9397 = 0;
	var uLocal_9398 = 0;
	var uLocal_9399 = 0;
	var uLocal_9400 = 0;
	var uLocal_9401 = 0;
	var uLocal_9402 = 0;
	var uLocal_9403 = 0;
	var uLocal_9404 = 0;
	var uLocal_9405 = 0;
	var uLocal_9406 = 0;
	var uLocal_9407 = 0;
	var uLocal_9408 = 0;
	var uLocal_9409 = 0;
	var uLocal_9410 = 0;
	var uLocal_9411 = 0;
	var uLocal_9412 = 0;
	var uLocal_9413 = 0;
	var uLocal_9414 = 0;
	var uLocal_9415 = 0;
	var uLocal_9416 = 0;
	var uLocal_9417 = 0;
	var uLocal_9418 = 0;
	var uLocal_9419 = 0;
	var uLocal_9420 = 0;
	var uLocal_9421 = 0;
	var uLocal_9422 = 0;
	var uLocal_9423 = 0;
	var uLocal_9424 = 0;
	var uLocal_9425 = 0;
	var uLocal_9426 = 0;
	var uLocal_9427 = 0;
	var uLocal_9428 = 0;
	var uLocal_9429 = 0;
	var uLocal_9430 = 0;
	var uLocal_9431 = 0;
	var uLocal_9432 = 0;
	var uLocal_9433 = 0;
	var uLocal_9434 = 0;
	var uLocal_9435 = 0;
	var uLocal_9436 = 0;
	var uLocal_9437 = 0;
	var uLocal_9438 = 0;
	var uLocal_9439 = 0;
	var uLocal_9440 = 0;
	var uLocal_9441 = 0;
	var uLocal_9442 = 0;
	var uLocal_9443 = 0;
	var uLocal_9444 = 0;
	var uLocal_9445 = 0;
	var uLocal_9446 = 0;
	var uLocal_9447 = 0;
	var uLocal_9448 = 0;
	var uLocal_9449 = 0;
	var uLocal_9450 = 0;
	var uLocal_9451 = 0;
	var uLocal_9452 = 0;
	var uLocal_9453 = 0;
	var uLocal_9454 = 0;
	var uLocal_9455 = 0;
	var uLocal_9456 = 0;
	var uLocal_9457 = 0;
	var uLocal_9458 = 0;
	var uLocal_9459 = 0;
	var uLocal_9460 = 0;
	var uLocal_9461 = 0;
	var uLocal_9462 = 0;
	var uLocal_9463 = 0;
	var uLocal_9464 = 0;
	var uLocal_9465 = 0;
	var uLocal_9466 = 0;
	var uLocal_9467 = 0;
	var uLocal_9468 = 0;
	var uLocal_9469 = 0;
	var uLocal_9470 = 0;
	var uLocal_9471 = 0;
	var uLocal_9472 = 0;
	var uLocal_9473 = 0;
	var uLocal_9474 = 0;
	var uLocal_9475 = 0;
	var uLocal_9476 = 0;
	var uLocal_9477 = 0;
	var uLocal_9478 = 0;
	var uLocal_9479 = 0;
	var uLocal_9480 = 0;
	var uLocal_9481 = 0;
	var uLocal_9482 = 0;
	var uLocal_9483 = 0;
	var uLocal_9484 = 0;
	var uLocal_9485 = 0;
	var uLocal_9486 = 0;
	var uLocal_9487 = 0;
	var uLocal_9488 = 0;
	var uLocal_9489 = 0;
	var uLocal_9490 = 0;
	var uLocal_9491 = 0;
	var uLocal_9492 = 0;
	var uLocal_9493 = 0;
	var uLocal_9494 = 0;
	var uLocal_9495 = 0;
	var uLocal_9496 = 0;
	var uLocal_9497 = 0;
	var uLocal_9498 = 0;
	var uLocal_9499 = 0;
	var uLocal_9500 = 0;
	var uLocal_9501 = 0;
	var uLocal_9502 = 0;
	var uLocal_9503 = 0;
	var uLocal_9504 = 0;
	var uLocal_9505 = 0;
	var uLocal_9506 = 0;
	var uLocal_9507 = 0;
	var uLocal_9508 = 0;
	var uLocal_9509 = 0;
	var uLocal_9510 = 0;
	var uLocal_9511 = 0;
	var uLocal_9512 = 0;
	var uLocal_9513 = 0;
	var uLocal_9514 = 0;
	var uLocal_9515 = 0;
	var uLocal_9516 = 0;
	var uLocal_9517 = 0;
	var uLocal_9518 = 0;
	var uLocal_9519 = 0;
	var uLocal_9520 = 0;
	var uLocal_9521 = 0;
	var uLocal_9522 = 0;
	var uLocal_9523 = 0;
	var uLocal_9524 = 0;
	var uLocal_9525 = 0;
	var uLocal_9526 = 0;
	var uLocal_9527 = 0;
	var uLocal_9528 = 0;
	var uLocal_9529 = 0;
	var uLocal_9530 = 0;
	var uLocal_9531 = 0;
	var uLocal_9532 = 0;
	var uLocal_9533 = 0;
	var uLocal_9534 = 0;
	var uLocal_9535 = 0;
	var uLocal_9536 = 0;
	var uLocal_9537 = 0;
	var uLocal_9538 = 0;
	var uLocal_9539 = 0;
	var uLocal_9540 = 0;
	var uLocal_9541 = 0;
	var uLocal_9542 = 0;
	var uLocal_9543 = 0;
	var uLocal_9544 = 0;
	var uLocal_9545 = 0;
	var uLocal_9546 = 0;
	var uLocal_9547 = 0;
	var uLocal_9548 = 0;
	var uLocal_9549 = 0;
	var uLocal_9550 = 0;
	var uLocal_9551 = 0;
	var uLocal_9552 = 0;
	var uLocal_9553 = 0;
	var uLocal_9554 = 0;
	var uLocal_9555 = 0;
	var uLocal_9556 = 0;
	var uLocal_9557 = 0;
	var uLocal_9558 = 0;
	var uLocal_9559 = 0;
	var uLocal_9560 = 0;
	var uLocal_9561 = 0;
	var uLocal_9562 = 0;
	var uLocal_9563 = 0;
	var uLocal_9564 = 0;
	var uLocal_9565 = 0;
	var uLocal_9566 = 0;
	var uLocal_9567 = 0;
	var uLocal_9568 = 0;
	var uLocal_9569 = 0;
	var uLocal_9570 = 0;
	var uLocal_9571 = 0;
	var uLocal_9572 = 0;
	var uLocal_9573 = 0;
	var uLocal_9574 = 0;
	var uLocal_9575 = 0;
	var uLocal_9576 = 0;
	var uLocal_9577 = 0;
	var uLocal_9578 = 0;
	var uLocal_9579 = 0;
	var uLocal_9580 = 0;
	var uLocal_9581 = 0;
	var uLocal_9582 = 0;
	var uLocal_9583 = 40;
	var uLocal_9584 = 0;
	var uLocal_9585 = 0;
	var uLocal_9586 = 0;
	var uLocal_9587 = 0;
	var uLocal_9588 = 0;
	var uLocal_9589 = 0;
	var uLocal_9590 = 0;
	var uLocal_9591 = 0;
	var uLocal_9592 = 0;
	var uLocal_9593 = 0;
	var uLocal_9594 = 0;
	var uLocal_9595 = 0;
	var uLocal_9596 = 0;
	var uLocal_9597 = 0;
	var uLocal_9598 = 0;
	var uLocal_9599 = 0;
	var uLocal_9600 = 0;
	var uLocal_9601 = 0;
	var uLocal_9602 = 0;
	var uLocal_9603 = 0;
	var uLocal_9604 = 0;
	var uLocal_9605 = 0;
	var uLocal_9606 = 0;
	var uLocal_9607 = 0;
	var uLocal_9608 = 0;
	var uLocal_9609 = 0;
	var uLocal_9610 = 0;
	var uLocal_9611 = 0;
	var uLocal_9612 = 0;
	var uLocal_9613 = 0;
	var uLocal_9614 = 0;
	var uLocal_9615 = 0;
	var uLocal_9616 = 0;
	var uLocal_9617 = 0;
	var uLocal_9618 = 0;
	var uLocal_9619 = 0;
	var uLocal_9620 = 0;
	var uLocal_9621 = 0;
	var uLocal_9622 = 0;
	var uLocal_9623 = 0;
	var uLocal_9624 = 0;
	var uLocal_9625 = 0;
	var uLocal_9626 = 0;
	var uLocal_9627 = 0;
	var uLocal_9628 = 0;
	var uLocal_9629 = 0;
	var uLocal_9630 = 0;
	var uLocal_9631 = 0;
	var uLocal_9632 = 0;
	var uLocal_9633 = 0;
	var uLocal_9634 = 0;
	var uLocal_9635 = 0;
	var uLocal_9636 = 0;
	var uLocal_9637 = 0;
	var uLocal_9638 = 0;
	var uLocal_9639 = 0;
	var uLocal_9640 = 0;
	var uLocal_9641 = 0;
	var uLocal_9642 = 0;
	var uLocal_9643 = 0;
	var uLocal_9644 = 0;
	var uLocal_9645 = 0;
	var uLocal_9646 = 0;
	var uLocal_9647 = 0;
	var uLocal_9648 = 0;
	var uLocal_9649 = 0;
	var uLocal_9650 = 0;
	var uLocal_9651 = 0;
	var uLocal_9652 = 0;
	var uLocal_9653 = 0;
	var uLocal_9654 = 0;
	var uLocal_9655 = 0;
	var uLocal_9656 = 0;
	var uLocal_9657 = 0;
	var uLocal_9658 = 0;
	var uLocal_9659 = 0;
	var uLocal_9660 = 0;
	var uLocal_9661 = 0;
	var uLocal_9662 = 0;
	var uLocal_9663 = 0;
	var uLocal_9664 = 0;
	var uLocal_9665 = 0;
	var uLocal_9666 = 0;
	var uLocal_9667 = 0;
	var uLocal_9668 = 0;
	var uLocal_9669 = 0;
	var uLocal_9670 = 0;
	var uLocal_9671 = 0;
	var uLocal_9672 = 0;
	var uLocal_9673 = 0;
	var uLocal_9674 = 0;
	var uLocal_9675 = 0;
	var uLocal_9676 = 0;
	var uLocal_9677 = 0;
	var uLocal_9678 = 0;
	var uLocal_9679 = 0;
	var uLocal_9680 = 0;
	var uLocal_9681 = 0;
	var uLocal_9682 = 0;
	var uLocal_9683 = 0;
	var uLocal_9684 = 0;
	var uLocal_9685 = 0;
	var uLocal_9686 = 0;
	var uLocal_9687 = 0;
	var uLocal_9688 = 0;
	var uLocal_9689 = 0;
	var uLocal_9690 = 0;
	var uLocal_9691 = 0;
	var uLocal_9692 = 0;
	var uLocal_9693 = 0;
	var uLocal_9694 = 0;
	var uLocal_9695 = 0;
	var uLocal_9696 = 0;
	var uLocal_9697 = 0;
	var uLocal_9698 = 0;
	var uLocal_9699 = 0;
	var uLocal_9700 = 0;
	var uLocal_9701 = 0;
	var uLocal_9702 = 0;
	var uLocal_9703 = 0;
	var uLocal_9704 = 0;
	var uLocal_9705 = 0;
	var uLocal_9706 = 0;
	var uLocal_9707 = 0;
	var uLocal_9708 = 0;
	var uLocal_9709 = 0;
	var uLocal_9710 = 0;
	var uLocal_9711 = 0;
	var uLocal_9712 = 0;
	var uLocal_9713 = 0;
	var uLocal_9714 = 0;
	var uLocal_9715 = 0;
	var uLocal_9716 = 0;
	var uLocal_9717 = 0;
	var uLocal_9718 = 0;
	var uLocal_9719 = 0;
	var uLocal_9720 = 0;
	var uLocal_9721 = 0;
	var uLocal_9722 = 0;
	var uLocal_9723 = 0;
	var uLocal_9724 = 0;
	var uLocal_9725 = 0;
	var uLocal_9726 = 0;
	var uLocal_9727 = 0;
	var uLocal_9728 = 0;
	var uLocal_9729 = 0;
	var uLocal_9730 = 0;
	var uLocal_9731 = 0;
	var uLocal_9732 = 0;
	var uLocal_9733 = 0;
	var uLocal_9734 = 0;
	var uLocal_9735 = 0;
	var uLocal_9736 = 0;
	var uLocal_9737 = 0;
	var uLocal_9738 = 0;
	var uLocal_9739 = 0;
	var uLocal_9740 = 0;
	var uLocal_9741 = 0;
	var uLocal_9742 = 0;
	var uLocal_9743 = 0;
	var uLocal_9744 = 0;
	var uLocal_9745 = 0;
	var uLocal_9746 = 0;
	var uLocal_9747 = 0;
	var uLocal_9748 = 0;
	var uLocal_9749 = 0;
	var uLocal_9750 = 0;
	var uLocal_9751 = 0;
	var uLocal_9752 = 0;
	var uLocal_9753 = 0;
	var uLocal_9754 = 0;
	var uLocal_9755 = 0;
	var uLocal_9756 = 0;
	var uLocal_9757 = 0;
	var uLocal_9758 = 0;
	var uLocal_9759 = 0;
	var uLocal_9760 = 0;
	var uLocal_9761 = 0;
	var uLocal_9762 = 0;
	var uLocal_9763 = 0;
	var uLocal_9764 = 0;
	var uLocal_9765 = 0;
	var uLocal_9766 = 0;
	var uLocal_9767 = 0;
	var uLocal_9768 = 0;
	var uLocal_9769 = 0;
	var uLocal_9770 = 0;
	var uLocal_9771 = 0;
	var uLocal_9772 = 0;
	var uLocal_9773 = 0;
	var uLocal_9774 = 0;
	var uLocal_9775 = 0;
	var uLocal_9776 = 0;
	var uLocal_9777 = 0;
	var uLocal_9778 = 0;
	var uLocal_9779 = 0;
	var uLocal_9780 = 0;
	var uLocal_9781 = 0;
	var uLocal_9782 = 0;
	var uLocal_9783 = 0;
	var uLocal_9784 = 0;
	var uLocal_9785 = 0;
	var uLocal_9786 = 0;
	var uLocal_9787 = 0;
	var uLocal_9788 = 0;
	var uLocal_9789 = 0;
	var uLocal_9790 = 0;
	var uLocal_9791 = 0;
	var uLocal_9792 = 0;
	var uLocal_9793 = 0;
	var uLocal_9794 = 0;
	var uLocal_9795 = 0;
	var uLocal_9796 = 0;
	var uLocal_9797 = 0;
	var uLocal_9798 = 0;
	var uLocal_9799 = 0;
	var uLocal_9800 = 0;
	var uLocal_9801 = 0;
	var uLocal_9802 = 0;
	var uLocal_9803 = 0;
	var uLocal_9804 = 0;
	var uLocal_9805 = 0;
	var uLocal_9806 = 0;
	var uLocal_9807 = 0;
	var uLocal_9808 = 0;
	var uLocal_9809 = 0;
	var uLocal_9810 = 0;
	var uLocal_9811 = 0;
	var uLocal_9812 = 0;
	var uLocal_9813 = 0;
	var uLocal_9814 = 0;
	var uLocal_9815 = 0;
	var uLocal_9816 = 0;
	var uLocal_9817 = 0;
	var uLocal_9818 = 0;
	var uLocal_9819 = 0;
	var uLocal_9820 = 0;
	var uLocal_9821 = 0;
	var uLocal_9822 = 0;
	var uLocal_9823 = 0;
	var uLocal_9824 = 0;
	var uLocal_9825 = 0;
	var uLocal_9826 = 0;
	var uLocal_9827 = 0;
	var uLocal_9828 = 0;
	var uLocal_9829 = 0;
	var uLocal_9830 = 0;
	var uLocal_9831 = 0;
	var uLocal_9832 = 0;
	var uLocal_9833 = 0;
	var uLocal_9834 = 0;
	var uLocal_9835 = 0;
	var uLocal_9836 = 0;
	var uLocal_9837 = 0;
	var uLocal_9838 = 0;
	var uLocal_9839 = 0;
	var uLocal_9840 = 0;
	var uLocal_9841 = 0;
	var uLocal_9842 = 0;
	var uLocal_9843 = 0;
	var uLocal_9844 = 0;
	var uLocal_9845 = 0;
	var uLocal_9846 = 0;
	var uLocal_9847 = 0;
	var uLocal_9848 = 0;
	var uLocal_9849 = 0;
	var uLocal_9850 = 0;
	var uLocal_9851 = 0;
	var uLocal_9852 = 0;
	var uLocal_9853 = 0;
	var uLocal_9854 = 0;
	var uLocal_9855 = 0;
	var uLocal_9856 = 0;
	var uLocal_9857 = 0;
	var uLocal_9858 = 0;
	var uLocal_9859 = 0;
	var uLocal_9860 = 0;
	var uLocal_9861 = 0;
	var uLocal_9862 = 0;
	var uLocal_9863 = 0;
	var uLocal_9864 = 0;
	var uLocal_9865 = 0;
	var uLocal_9866 = 0;
	var uLocal_9867 = 0;
	var uLocal_9868 = 0;
	var uLocal_9869 = 0;
	var uLocal_9870 = 0;
	var uLocal_9871 = 0;
	var uLocal_9872 = 0;
	var uLocal_9873 = 0;
	var uLocal_9874 = 0;
	var uLocal_9875 = 0;
	var uLocal_9876 = 0;
	var uLocal_9877 = 0;
	var uLocal_9878 = 0;
	var uLocal_9879 = 0;
	var uLocal_9880 = 0;
	var uLocal_9881 = 0;
	var uLocal_9882 = 0;
	var uLocal_9883 = 0;
	var uLocal_9884 = 0;
	var uLocal_9885 = 0;
	var uLocal_9886 = 0;
	var uLocal_9887 = 0;
	var uLocal_9888 = 0;
	var uLocal_9889 = 0;
	var uLocal_9890 = 0;
	var uLocal_9891 = 0;
	var uLocal_9892 = 0;
	var uLocal_9893 = 0;
	var uLocal_9894 = 0;
	var uLocal_9895 = 0;
	var uLocal_9896 = 0;
	var uLocal_9897 = 0;
	var uLocal_9898 = 0;
	var uLocal_9899 = 0;
	var uLocal_9900 = 0;
	var uLocal_9901 = 0;
	var uLocal_9902 = 0;
	var uLocal_9903 = 0;
	var uLocal_9904 = 0;
	var uLocal_9905 = 0;
	var uLocal_9906 = 0;
	var uLocal_9907 = 0;
	var uLocal_9908 = 0;
	var uLocal_9909 = 0;
	var uLocal_9910 = 0;
	var uLocal_9911 = 0;
	var uLocal_9912 = 0;
	var uLocal_9913 = 0;
	var uLocal_9914 = 0;
	var uLocal_9915 = 0;
	var uLocal_9916 = 0;
	var uLocal_9917 = 0;
	var uLocal_9918 = 0;
	var uLocal_9919 = 0;
	var uLocal_9920 = 0;
	var uLocal_9921 = 0;
	var uLocal_9922 = 0;
	var uLocal_9923 = 0;
	var uLocal_9924 = 0;
	var uLocal_9925 = 0;
	var uLocal_9926 = 0;
	var uLocal_9927 = 0;
	var uLocal_9928 = 0;
	var uLocal_9929 = 0;
	var uLocal_9930 = 0;
	var uLocal_9931 = 0;
	var uLocal_9932 = 0;
	var uLocal_9933 = 0;
	var uLocal_9934 = 0;
	var uLocal_9935 = 0;
	var uLocal_9936 = 0;
	var uLocal_9937 = 0;
	var uLocal_9938 = 0;
	var uLocal_9939 = 0;
	var uLocal_9940 = 0;
	var uLocal_9941 = 0;
	var uLocal_9942 = 0;
	var uLocal_9943 = 0;
	var uLocal_9944 = 0;
	var uLocal_9945 = 0;
	var uLocal_9946 = 0;
	var uLocal_9947 = 0;
	var uLocal_9948 = 0;
	var uLocal_9949 = 0;
	var uLocal_9950 = 0;
	var uLocal_9951 = 0;
	var uLocal_9952 = 0;
	var uLocal_9953 = 0;
	var uLocal_9954 = 0;
	var uLocal_9955 = 0;
	var uLocal_9956 = 0;
	var uLocal_9957 = 0;
	var uLocal_9958 = 0;
	var uLocal_9959 = 0;
	var uLocal_9960 = 0;
	var uLocal_9961 = 0;
	var uLocal_9962 = 0;
	var uLocal_9963 = 0;
	var uLocal_9964 = 0;
	var uLocal_9965 = 0;
	var uLocal_9966 = 0;
	var uLocal_9967 = 0;
	var uLocal_9968 = 0;
	var uLocal_9969 = 0;
	var uLocal_9970 = 0;
	var uLocal_9971 = 0;
	var uLocal_9972 = 0;
	var uLocal_9973 = 0;
	var uLocal_9974 = 0;
	var uLocal_9975 = 0;
	var uLocal_9976 = 0;
	var uLocal_9977 = 0;
	var uLocal_9978 = 0;
	var uLocal_9979 = 0;
	var uLocal_9980 = 0;
	var uLocal_9981 = 0;
	var uLocal_9982 = 0;
	var uLocal_9983 = 0;
	var uLocal_9984 = 0;
	var uLocal_9985 = 0;
	var uLocal_9986 = 0;
	var uLocal_9987 = 0;
	var uLocal_9988 = 0;
	var uLocal_9989 = 0;
	var uLocal_9990 = 0;
	var uLocal_9991 = 0;
	var uLocal_9992 = 0;
	var uLocal_9993 = 0;
	var uLocal_9994 = 0;
	var uLocal_9995 = 0;
	var uLocal_9996 = 0;
	var uLocal_9997 = 0;
	var uLocal_9998 = 0;
	var uLocal_9999 = 0;
	var uLocal_10000 = 0;
	var uLocal_10001 = 0;
	var uLocal_10002 = 0;
	var uLocal_10003 = 0;
	var uLocal_10004 = 0;
	var uLocal_10005 = 0;
	var uLocal_10006 = 0;
	var uLocal_10007 = 0;
	var uLocal_10008 = 0;
	var uLocal_10009 = 0;
	var uLocal_10010 = 0;
	var uLocal_10011 = 0;
	var uLocal_10012 = 0;
	var uLocal_10013 = 0;
	var uLocal_10014 = 0;
	var uLocal_10015 = 0;
	var uLocal_10016 = 0;
	var uLocal_10017 = 0;
	var uLocal_10018 = 0;
	var uLocal_10019 = 0;
	var uLocal_10020 = 0;
	var uLocal_10021 = 0;
	var uLocal_10022 = 0;
	var uLocal_10023 = 0;
	var uLocal_10024 = 0;
	var uLocal_10025 = 0;
	var uLocal_10026 = 0;
	var uLocal_10027 = 0;
	var uLocal_10028 = 0;
	var uLocal_10029 = 0;
	var uLocal_10030 = 0;
	var uLocal_10031 = 0;
	var uLocal_10032 = 0;
	var uLocal_10033 = 0;
	var uLocal_10034 = 0;
	var uLocal_10035 = 0;
	var uLocal_10036 = 0;
	var uLocal_10037 = 0;
	var uLocal_10038 = 0;
	var uLocal_10039 = 0;
	var uLocal_10040 = 0;
	var uLocal_10041 = 0;
	var uLocal_10042 = 0;
	var uLocal_10043 = 0;
	var uLocal_10044 = 0;
	var uLocal_10045 = 0;
	var uLocal_10046 = 0;
	var uLocal_10047 = 0;
	var uLocal_10048 = 0;
	var uLocal_10049 = 0;
	var uLocal_10050 = 0;
	var uLocal_10051 = 0;
	var uLocal_10052 = 0;
	var uLocal_10053 = 0;
	var uLocal_10054 = 0;
	var uLocal_10055 = 0;
	var uLocal_10056 = 0;
	var uLocal_10057 = 0;
	var uLocal_10058 = 0;
	var uLocal_10059 = 0;
	var uLocal_10060 = 0;
	var uLocal_10061 = 0;
	var uLocal_10062 = 0;
	var uLocal_10063 = 0;
	var uLocal_10064 = 0;
	var uLocal_10065 = 0;
	var uLocal_10066 = 0;
	var uLocal_10067 = 0;
	var uLocal_10068 = 0;
	var uLocal_10069 = 0;
	var uLocal_10070 = 0;
	var uLocal_10071 = 0;
	var uLocal_10072 = 0;
	var uLocal_10073 = 0;
	var uLocal_10074 = 0;
	var uLocal_10075 = 0;
	var uLocal_10076 = 0;
	var uLocal_10077 = 0;
	var uLocal_10078 = 0;
	var uLocal_10079 = 0;
	var uLocal_10080 = 0;
	var uLocal_10081 = 0;
	var uLocal_10082 = 0;
	var uLocal_10083 = 0;
	var uLocal_10084 = 0;
	var uLocal_10085 = 0;
	var uLocal_10086 = 0;
	var uLocal_10087 = 0;
	var uLocal_10088 = 0;
	var uLocal_10089 = 0;
	var uLocal_10090 = 0;
	var uLocal_10091 = 0;
	var uLocal_10092 = 0;
	var uLocal_10093 = 0;
	var uLocal_10094 = 0;
	var uLocal_10095 = 0;
	var uLocal_10096 = 0;
	var uLocal_10097 = 0;
	var uLocal_10098 = 0;
	var uLocal_10099 = 0;
	var uLocal_10100 = 0;
	var uLocal_10101 = 0;
	var uLocal_10102 = 0;
	var uLocal_10103 = 0;
	var uLocal_10104 = 0;
	var uLocal_10105 = 0;
	var uLocal_10106 = 0;
	var uLocal_10107 = 0;
	var uLocal_10108 = 0;
	var uLocal_10109 = 0;
	var uLocal_10110 = 0;
	var uLocal_10111 = 0;
	var uLocal_10112 = 0;
	var uLocal_10113 = 0;
	var uLocal_10114 = 0;
	var uLocal_10115 = 0;
	var uLocal_10116 = 0;
	var uLocal_10117 = 0;
	var uLocal_10118 = 0;
	var uLocal_10119 = 0;
	var uLocal_10120 = 0;
	var uLocal_10121 = 0;
	var uLocal_10122 = 0;
	var uLocal_10123 = 0;
	var uLocal_10124 = 0;
	var uLocal_10125 = 0;
	var uLocal_10126 = 0;
	var uLocal_10127 = 0;
	var uLocal_10128 = 0;
	var uLocal_10129 = 0;
	var uLocal_10130 = 0;
	var uLocal_10131 = 0;
	var uLocal_10132 = 0;
	var uLocal_10133 = 0;
	var uLocal_10134 = 0;
	var uLocal_10135 = 0;
	var uLocal_10136 = 0;
	var uLocal_10137 = 0;
	var uLocal_10138 = 0;
	var uLocal_10139 = 0;
	var uLocal_10140 = 0;
	var uLocal_10141 = 0;
	var uLocal_10142 = 0;
	var uLocal_10143 = 0;
	var uLocal_10144 = 0;
	var uLocal_10145 = 0;
	var uLocal_10146 = 0;
	var uLocal_10147 = 0;
	var uLocal_10148 = 0;
	var uLocal_10149 = 0;
	var uLocal_10150 = 0;
	var uLocal_10151 = 0;
	var uLocal_10152 = 0;
	var uLocal_10153 = 0;
	var uLocal_10154 = 0;
	var uLocal_10155 = 0;
	var uLocal_10156 = 0;
	var uLocal_10157 = 0;
	var uLocal_10158 = 0;
	var uLocal_10159 = 0;
	var uLocal_10160 = 0;
	var uLocal_10161 = 0;
	var uLocal_10162 = 0;
	var uLocal_10163 = 0;
	var uLocal_10164 = 0;
	var uLocal_10165 = 0;
	var uLocal_10166 = 0;
	var uLocal_10167 = 0;
	var uLocal_10168 = 0;
	var uLocal_10169 = 0;
	var uLocal_10170 = 0;
	var uLocal_10171 = 0;
	var uLocal_10172 = 0;
	var uLocal_10173 = 0;
	var uLocal_10174 = 0;
	var uLocal_10175 = 0;
	var uLocal_10176 = 0;
	var uLocal_10177 = 0;
	var uLocal_10178 = 0;
	var uLocal_10179 = 0;
	var uLocal_10180 = 0;
	var uLocal_10181 = 0;
	var uLocal_10182 = 0;
	var uLocal_10183 = 0;
	var uLocal_10184 = 0;
	var uLocal_10185 = 0;
	var uLocal_10186 = 0;
	var uLocal_10187 = 0;
	var uLocal_10188 = 0;
	var uLocal_10189 = 0;
	var uLocal_10190 = 0;
	var uLocal_10191 = 0;
	var uLocal_10192 = 0;
	var uLocal_10193 = 0;
	var uLocal_10194 = 0;
	var uLocal_10195 = 0;
	var uLocal_10196 = 0;
	var uLocal_10197 = 0;
	var uLocal_10198 = 0;
	var uLocal_10199 = 0;
	var uLocal_10200 = 0;
	var uLocal_10201 = 0;
	var uLocal_10202 = 0;
	var uLocal_10203 = 0;
	var uLocal_10204 = 0;
	var uLocal_10205 = 0;
	var uLocal_10206 = 0;
	var uLocal_10207 = 0;
	var uLocal_10208 = 0;
	var uLocal_10209 = 0;
	var uLocal_10210 = 0;
	var uLocal_10211 = 0;
	var uLocal_10212 = 0;
	var uLocal_10213 = 0;
	var uLocal_10214 = 0;
	var uLocal_10215 = 0;
	var uLocal_10216 = 0;
	var uLocal_10217 = 0;
	var uLocal_10218 = 0;
	var uLocal_10219 = 0;
	var uLocal_10220 = 0;
	var uLocal_10221 = 0;
	var uLocal_10222 = 0;
	var uLocal_10223 = 0;
	var uLocal_10224 = 60;
	var uLocal_10225 = 0;
	var uLocal_10226 = 0;
	var uLocal_10227 = 0;
	var uLocal_10228 = 0;
	var uLocal_10229 = 0;
	var uLocal_10230 = 0;
	var uLocal_10231 = 0;
	var uLocal_10232 = 0;
	var uLocal_10233 = 0;
	var uLocal_10234 = 0;
	var uLocal_10235 = 0;
	var uLocal_10236 = 0;
	var uLocal_10237 = 0;
	var uLocal_10238 = 0;
	var uLocal_10239 = 0;
	var uLocal_10240 = 0;
	var uLocal_10241 = 0;
	var uLocal_10242 = 0;
	var uLocal_10243 = 0;
	var uLocal_10244 = 0;
	var uLocal_10245 = 0;
	var uLocal_10246 = 0;
	var uLocal_10247 = 0;
	var uLocal_10248 = 0;
	var uLocal_10249 = 0;
	var uLocal_10250 = 0;
	var uLocal_10251 = 0;
	var uLocal_10252 = 0;
	var uLocal_10253 = 0;
	var uLocal_10254 = 0;
	var uLocal_10255 = 0;
	var uLocal_10256 = 0;
	var uLocal_10257 = 0;
	var uLocal_10258 = 0;
	var uLocal_10259 = 0;
	var uLocal_10260 = 0;
	var uLocal_10261 = 0;
	var uLocal_10262 = 0;
	var uLocal_10263 = 0;
	var uLocal_10264 = 0;
	var uLocal_10265 = 0;
	var uLocal_10266 = 0;
	var uLocal_10267 = 0;
	var uLocal_10268 = 0;
	var uLocal_10269 = 0;
	var uLocal_10270 = 0;
	var uLocal_10271 = 0;
	var uLocal_10272 = 0;
	var uLocal_10273 = 0;
	var uLocal_10274 = 0;
	var uLocal_10275 = 0;
	var uLocal_10276 = 0;
	var uLocal_10277 = 0;
	var uLocal_10278 = 0;
	var uLocal_10279 = 0;
	var uLocal_10280 = 0;
	var uLocal_10281 = 0;
	var uLocal_10282 = 0;
	var uLocal_10283 = 0;
	var uLocal_10284 = 0;
	var uLocal_10285 = 0;
	var uLocal_10286 = 0;
	var uLocal_10287 = 0;
	var uLocal_10288 = 0;
	var uLocal_10289 = 0;
	var uLocal_10290 = 0;
	var uLocal_10291 = 0;
	var uLocal_10292 = 0;
	var uLocal_10293 = 0;
	var uLocal_10294 = 0;
	var uLocal_10295 = 0;
	var uLocal_10296 = 0;
	var uLocal_10297 = 0;
	var uLocal_10298 = 0;
	var uLocal_10299 = 0;
	var uLocal_10300 = 0;
	var uLocal_10301 = 0;
	var uLocal_10302 = 0;
	var uLocal_10303 = 0;
	var uLocal_10304 = 0;
	var uLocal_10305 = 0;
	var uLocal_10306 = 0;
	var uLocal_10307 = 0;
	var uLocal_10308 = 0;
	var uLocal_10309 = 0;
	var uLocal_10310 = 0;
	var uLocal_10311 = 0;
	var uLocal_10312 = 0;
	var uLocal_10313 = 0;
	var uLocal_10314 = 0;
	var uLocal_10315 = 0;
	var uLocal_10316 = 0;
	var uLocal_10317 = 0;
	var uLocal_10318 = 0;
	var uLocal_10319 = 0;
	var uLocal_10320 = 0;
	var uLocal_10321 = 0;
	var uLocal_10322 = 0;
	var uLocal_10323 = 0;
	var uLocal_10324 = 0;
	var uLocal_10325 = 0;
	var uLocal_10326 = 0;
	var uLocal_10327 = 0;
	var uLocal_10328 = 0;
	var uLocal_10329 = 0;
	var uLocal_10330 = 0;
	var uLocal_10331 = 0;
	var uLocal_10332 = 0;
	var uLocal_10333 = 0;
	var uLocal_10334 = 0;
	var uLocal_10335 = 0;
	var uLocal_10336 = 0;
	var uLocal_10337 = 0;
	var uLocal_10338 = 0;
	var uLocal_10339 = 0;
	var uLocal_10340 = 0;
	var uLocal_10341 = 0;
	var uLocal_10342 = 0;
	var uLocal_10343 = 0;
	var uLocal_10344 = 0;
	var uLocal_10345 = 0;
	var uLocal_10346 = 0;
	var uLocal_10347 = 0;
	var uLocal_10348 = 0;
	var uLocal_10349 = 0;
	var uLocal_10350 = 0;
	var uLocal_10351 = 0;
	var uLocal_10352 = 0;
	var uLocal_10353 = 0;
	var uLocal_10354 = 0;
	var uLocal_10355 = 0;
	var uLocal_10356 = 0;
	var uLocal_10357 = 0;
	var uLocal_10358 = 0;
	var uLocal_10359 = 0;
	var uLocal_10360 = 0;
	var uLocal_10361 = 0;
	var uLocal_10362 = 0;
	var uLocal_10363 = 0;
	var uLocal_10364 = 0;
	var uLocal_10365 = 0;
	var uLocal_10366 = 0;
	var uLocal_10367 = 0;
	var uLocal_10368 = 0;
	var uLocal_10369 = 0;
	var uLocal_10370 = 0;
	var uLocal_10371 = 0;
	var uLocal_10372 = 0;
	var uLocal_10373 = 0;
	var uLocal_10374 = 0;
	var uLocal_10375 = 0;
	var uLocal_10376 = 0;
	var uLocal_10377 = 0;
	var uLocal_10378 = 0;
	var uLocal_10379 = 0;
	var uLocal_10380 = 0;
	var uLocal_10381 = 0;
	var uLocal_10382 = 0;
	var uLocal_10383 = 0;
	var uLocal_10384 = 0;
	var uLocal_10385 = 0;
	var uLocal_10386 = 0;
	var uLocal_10387 = 0;
	var uLocal_10388 = 0;
	var uLocal_10389 = 0;
	var uLocal_10390 = 0;
	var uLocal_10391 = 0;
	var uLocal_10392 = 0;
	var uLocal_10393 = 0;
	var uLocal_10394 = 0;
	var uLocal_10395 = 0;
	var uLocal_10396 = 0;
	var uLocal_10397 = 0;
	var uLocal_10398 = 0;
	var uLocal_10399 = 0;
	var uLocal_10400 = 0;
	var uLocal_10401 = 0;
	var uLocal_10402 = 0;
	var uLocal_10403 = 0;
	var uLocal_10404 = 0;
	var uLocal_10405 = 0;
	var uLocal_10406 = 0;
	var uLocal_10407 = 0;
	var uLocal_10408 = 0;
	var uLocal_10409 = 0;
	var uLocal_10410 = 0;
	var uLocal_10411 = 0;
	var uLocal_10412 = 0;
	var uLocal_10413 = 0;
	var uLocal_10414 = 0;
	var uLocal_10415 = 0;
	var uLocal_10416 = 0;
	var uLocal_10417 = 0;
	var uLocal_10418 = 0;
	var uLocal_10419 = 0;
	var uLocal_10420 = 0;
	var uLocal_10421 = 0;
	var uLocal_10422 = 0;
	var uLocal_10423 = 0;
	var uLocal_10424 = 0;
	var uLocal_10425 = 0;
	var uLocal_10426 = 0;
	var uLocal_10427 = 0;
	var uLocal_10428 = 0;
	var uLocal_10429 = 0;
	var uLocal_10430 = 0;
	var uLocal_10431 = 0;
	var uLocal_10432 = 0;
	var uLocal_10433 = 0;
	var uLocal_10434 = 0;
	var uLocal_10435 = 0;
	var uLocal_10436 = 0;
	var uLocal_10437 = 0;
	var uLocal_10438 = 0;
	var uLocal_10439 = 0;
	var uLocal_10440 = 0;
	var uLocal_10441 = 0;
	var uLocal_10442 = 0;
	var uLocal_10443 = 0;
	var uLocal_10444 = 0;
	var uLocal_10445 = 0;
	var uLocal_10446 = 0;
	var uLocal_10447 = 0;
	var uLocal_10448 = 0;
	var uLocal_10449 = 0;
	var uLocal_10450 = 0;
	var uLocal_10451 = 0;
	var uLocal_10452 = 0;
	var uLocal_10453 = 0;
	var uLocal_10454 = 0;
	var uLocal_10455 = 0;
	var uLocal_10456 = 0;
	var uLocal_10457 = 0;
	var uLocal_10458 = 0;
	var uLocal_10459 = 0;
	var uLocal_10460 = 0;
	var uLocal_10461 = 0;
	var uLocal_10462 = 0;
	var uLocal_10463 = 0;
	var uLocal_10464 = 0;
	var uLocal_10465 = 0;
	var uLocal_10466 = 0;
	var uLocal_10467 = 0;
	var uLocal_10468 = 0;
	var uLocal_10469 = 0;
	var uLocal_10470 = 0;
	var uLocal_10471 = 0;
	var uLocal_10472 = 0;
	var uLocal_10473 = 0;
	var uLocal_10474 = 0;
	var uLocal_10475 = 0;
	var uLocal_10476 = 0;
	var uLocal_10477 = 0;
	var uLocal_10478 = 0;
	var uLocal_10479 = 0;
	var uLocal_10480 = 0;
	var uLocal_10481 = 0;
	var uLocal_10482 = 0;
	var uLocal_10483 = 0;
	var uLocal_10484 = 0;
	var uLocal_10485 = 0;
	var uLocal_10486 = 0;
	var uLocal_10487 = 0;
	var uLocal_10488 = 0;
	var uLocal_10489 = 0;
	var uLocal_10490 = 0;
	var uLocal_10491 = 0;
	var uLocal_10492 = 0;
	var uLocal_10493 = 0;
	var uLocal_10494 = 0;
	var uLocal_10495 = 0;
	var uLocal_10496 = 0;
	var uLocal_10497 = 0;
	var uLocal_10498 = 0;
	var uLocal_10499 = 0;
	var uLocal_10500 = 0;
	var uLocal_10501 = 0;
	var uLocal_10502 = 0;
	var uLocal_10503 = 0;
	var uLocal_10504 = 0;
	var uLocal_10505 = 0;
	var uLocal_10506 = 0;
	var uLocal_10507 = 0;
	var uLocal_10508 = 0;
	var uLocal_10509 = 0;
	var uLocal_10510 = 0;
	var uLocal_10511 = 0;
	var uLocal_10512 = 0;
	var uLocal_10513 = 0;
	var uLocal_10514 = 0;
	var uLocal_10515 = 0;
	var uLocal_10516 = 0;
	var uLocal_10517 = 0;
	var uLocal_10518 = 0;
	var uLocal_10519 = 0;
	var uLocal_10520 = 0;
	var uLocal_10521 = 0;
	var uLocal_10522 = 0;
	var uLocal_10523 = 0;
	var uLocal_10524 = 0;
	var uLocal_10525 = 0;
	var uLocal_10526 = 0;
	var uLocal_10527 = 0;
	var uLocal_10528 = 0;
	var uLocal_10529 = 0;
	var uLocal_10530 = 0;
	var uLocal_10531 = 0;
	var uLocal_10532 = 0;
	var uLocal_10533 = 0;
	var uLocal_10534 = 0;
	var uLocal_10535 = 0;
	var uLocal_10536 = 0;
	var uLocal_10537 = 0;
	var uLocal_10538 = 0;
	var uLocal_10539 = 0;
	var uLocal_10540 = 0;
	var uLocal_10541 = 0;
	var uLocal_10542 = 0;
	var uLocal_10543 = 0;
	var uLocal_10544 = 0;
	var uLocal_10545 = 0;
	var uLocal_10546 = 0;
	var uLocal_10547 = 0;
	var uLocal_10548 = 0;
	var uLocal_10549 = 0;
	var uLocal_10550 = 0;
	var uLocal_10551 = 0;
	var uLocal_10552 = 0;
	var uLocal_10553 = 0;
	var uLocal_10554 = 0;
	var uLocal_10555 = 0;
	var uLocal_10556 = 0;
	var uLocal_10557 = 0;
	var uLocal_10558 = 0;
	var uLocal_10559 = 0;
	var uLocal_10560 = 0;
	var uLocal_10561 = 0;
	var uLocal_10562 = 0;
	var uLocal_10563 = 0;
	var uLocal_10564 = 0;
	var uLocal_10565 = 0;
	var uLocal_10566 = 0;
	var uLocal_10567 = 0;
	var uLocal_10568 = 0;
	var uLocal_10569 = 0;
	var uLocal_10570 = 0;
	var uLocal_10571 = 0;
	var uLocal_10572 = 0;
	var uLocal_10573 = 0;
	var uLocal_10574 = 0;
	var uLocal_10575 = 0;
	var uLocal_10576 = 0;
	var uLocal_10577 = 0;
	var uLocal_10578 = 0;
	var uLocal_10579 = 0;
	var uLocal_10580 = 0;
	var uLocal_10581 = 0;
	var uLocal_10582 = 0;
	var uLocal_10583 = 0;
	var uLocal_10584 = 0;
	var uLocal_10585 = 0;
	var uLocal_10586 = 0;
	var uLocal_10587 = 0;
	var uLocal_10588 = 0;
	var uLocal_10589 = 0;
	var uLocal_10590 = 0;
	var uLocal_10591 = 0;
	var uLocal_10592 = 0;
	var uLocal_10593 = 0;
	var uLocal_10594 = 0;
	var uLocal_10595 = 0;
	var uLocal_10596 = 0;
	var uLocal_10597 = 0;
	var uLocal_10598 = 0;
	var uLocal_10599 = 0;
	var uLocal_10600 = 0;
	var uLocal_10601 = 0;
	var uLocal_10602 = 0;
	var uLocal_10603 = 0;
	var uLocal_10604 = 0;
	var uLocal_10605 = 0;
	var uLocal_10606 = 0;
	var uLocal_10607 = 0;
	var uLocal_10608 = 0;
	var uLocal_10609 = 0;
	var uLocal_10610 = 0;
	var uLocal_10611 = 0;
	var uLocal_10612 = 0;
	var uLocal_10613 = 0;
	var uLocal_10614 = 0;
	var uLocal_10615 = 0;
	var uLocal_10616 = 0;
	var uLocal_10617 = 0;
	var uLocal_10618 = 0;
	var uLocal_10619 = 0;
	var uLocal_10620 = 0;
	var uLocal_10621 = 0;
	var uLocal_10622 = 0;
	var uLocal_10623 = 0;
	var uLocal_10624 = 0;
	var uLocal_10625 = 0;
	var uLocal_10626 = 0;
	var uLocal_10627 = 0;
	var uLocal_10628 = 0;
	var uLocal_10629 = 0;
	var uLocal_10630 = 0;
	var uLocal_10631 = 0;
	var uLocal_10632 = 0;
	var uLocal_10633 = 0;
	var uLocal_10634 = 0;
	var uLocal_10635 = 0;
	var uLocal_10636 = 0;
	var uLocal_10637 = 0;
	var uLocal_10638 = 0;
	var uLocal_10639 = 0;
	var uLocal_10640 = 0;
	var uLocal_10641 = 0;
	var uLocal_10642 = 0;
	var uLocal_10643 = 0;
	var uLocal_10644 = 0;
	var uLocal_10645 = 0;
	var uLocal_10646 = 0;
	var uLocal_10647 = 0;
	var uLocal_10648 = 0;
	var uLocal_10649 = 0;
	var uLocal_10650 = 0;
	var uLocal_10651 = 0;
	var uLocal_10652 = 0;
	var uLocal_10653 = 0;
	var uLocal_10654 = 0;
	var uLocal_10655 = 0;
	var uLocal_10656 = 0;
	var uLocal_10657 = 0;
	var uLocal_10658 = 0;
	var uLocal_10659 = 0;
	var uLocal_10660 = 0;
	var uLocal_10661 = 0;
	var uLocal_10662 = 0;
	var uLocal_10663 = 0;
	var uLocal_10664 = 0;
	var uLocal_10665 = 0;
	var uLocal_10666 = 0;
	var uLocal_10667 = 0;
	var uLocal_10668 = 0;
	var uLocal_10669 = 0;
	var uLocal_10670 = 0;
	var uLocal_10671 = 0;
	var uLocal_10672 = 0;
	var uLocal_10673 = 0;
	var uLocal_10674 = 0;
	var uLocal_10675 = 0;
	var uLocal_10676 = 0;
	var uLocal_10677 = 0;
	var uLocal_10678 = 0;
	var uLocal_10679 = 0;
	var uLocal_10680 = 0;
	var uLocal_10681 = 0;
	var uLocal_10682 = 0;
	var uLocal_10683 = 0;
	var uLocal_10684 = 0;
	var uLocal_10685 = 0;
	var uLocal_10686 = 0;
	var uLocal_10687 = 0;
	var uLocal_10688 = 0;
	var uLocal_10689 = 0;
	var uLocal_10690 = 0;
	var uLocal_10691 = 0;
	var uLocal_10692 = 0;
	var uLocal_10693 = 0;
	var uLocal_10694 = 0;
	var uLocal_10695 = 0;
	var uLocal_10696 = 0;
	var uLocal_10697 = 0;
	var uLocal_10698 = 0;
	var uLocal_10699 = 0;
	var uLocal_10700 = 0;
	var uLocal_10701 = 0;
	var uLocal_10702 = 0;
	var uLocal_10703 = 0;
	var uLocal_10704 = 0;
	var uLocal_10705 = 0;
	var uLocal_10706 = 0;
	var uLocal_10707 = 0;
	var uLocal_10708 = 0;
	var uLocal_10709 = 0;
	var uLocal_10710 = 0;
	var uLocal_10711 = 0;
	var uLocal_10712 = 0;
	var uLocal_10713 = 0;
	var uLocal_10714 = 0;
	var uLocal_10715 = 0;
	var uLocal_10716 = 0;
	var uLocal_10717 = 0;
	var uLocal_10718 = 0;
	var uLocal_10719 = 0;
	var uLocal_10720 = 0;
	var uLocal_10721 = 0;
	var uLocal_10722 = 0;
	var uLocal_10723 = 0;
	var uLocal_10724 = 0;
	var uLocal_10725 = 0;
	var uLocal_10726 = 0;
	var uLocal_10727 = 0;
	var uLocal_10728 = 0;
	var uLocal_10729 = 0;
	var uLocal_10730 = 0;
	var uLocal_10731 = 0;
	var uLocal_10732 = 0;
	var uLocal_10733 = 0;
	var uLocal_10734 = 0;
	var uLocal_10735 = 0;
	var uLocal_10736 = 0;
	var uLocal_10737 = 0;
	var uLocal_10738 = 0;
	var uLocal_10739 = 0;
	var uLocal_10740 = 0;
	var uLocal_10741 = 0;
	var uLocal_10742 = 0;
	var uLocal_10743 = 0;
	var uLocal_10744 = 0;
	var uLocal_10745 = 0;
	var uLocal_10746 = 0;
	var uLocal_10747 = 0;
	var uLocal_10748 = 0;
	var uLocal_10749 = 0;
	var uLocal_10750 = 0;
	var uLocal_10751 = 0;
	var uLocal_10752 = 0;
	var uLocal_10753 = 0;
	var uLocal_10754 = 0;
	var uLocal_10755 = 0;
	var uLocal_10756 = 0;
	var uLocal_10757 = 0;
	var uLocal_10758 = 0;
	var uLocal_10759 = 0;
	var uLocal_10760 = 0;
	var uLocal_10761 = 0;
	var uLocal_10762 = 0;
	var uLocal_10763 = 0;
	var uLocal_10764 = 0;
	var uLocal_10765 = 0;
	var uLocal_10766 = 0;
	var uLocal_10767 = 0;
	var uLocal_10768 = 0;
	var uLocal_10769 = 0;
	var uLocal_10770 = 0;
	var uLocal_10771 = 0;
	var uLocal_10772 = 0;
	var uLocal_10773 = 0;
	var uLocal_10774 = 0;
	var uLocal_10775 = 0;
	var uLocal_10776 = 0;
	var uLocal_10777 = 0;
	var uLocal_10778 = 0;
	var uLocal_10779 = 0;
	var uLocal_10780 = 0;
	var uLocal_10781 = 0;
	var uLocal_10782 = 0;
	var uLocal_10783 = 0;
	var uLocal_10784 = 0;
	var uLocal_10785 = 0;
	var uLocal_10786 = 0;
	var uLocal_10787 = 0;
	var uLocal_10788 = 0;
	var uLocal_10789 = 0;
	var uLocal_10790 = 0;
	var uLocal_10791 = 0;
	var uLocal_10792 = 0;
	var uLocal_10793 = 0;
	var uLocal_10794 = 0;
	var uLocal_10795 = 0;
	var uLocal_10796 = 0;
	var uLocal_10797 = 0;
	var uLocal_10798 = 0;
	var uLocal_10799 = 0;
	var uLocal_10800 = 0;
	var uLocal_10801 = 0;
	var uLocal_10802 = 0;
	var uLocal_10803 = 0;
	var uLocal_10804 = 0;
	var uLocal_10805 = 0;
	var uLocal_10806 = 0;
	var uLocal_10807 = 0;
	var uLocal_10808 = 0;
	var uLocal_10809 = 0;
	var uLocal_10810 = 0;
	var uLocal_10811 = 0;
	var uLocal_10812 = 0;
	var uLocal_10813 = 0;
	var uLocal_10814 = 0;
	var uLocal_10815 = 0;
	var uLocal_10816 = 0;
	var uLocal_10817 = 0;
	var uLocal_10818 = 0;
	var uLocal_10819 = 0;
	var uLocal_10820 = 0;
	var uLocal_10821 = 0;
	var uLocal_10822 = 0;
	var uLocal_10823 = 0;
	var uLocal_10824 = 0;
	var uLocal_10825 = 0;
	var uLocal_10826 = 0;
	var uLocal_10827 = 0;
	var uLocal_10828 = 0;
	var uLocal_10829 = 0;
	var uLocal_10830 = 0;
	var uLocal_10831 = 0;
	var uLocal_10832 = 0;
	var uLocal_10833 = 0;
	var uLocal_10834 = 0;
	var uLocal_10835 = 0;
	var uLocal_10836 = 0;
	var uLocal_10837 = 0;
	var uLocal_10838 = 0;
	var uLocal_10839 = 0;
	var uLocal_10840 = 0;
	var uLocal_10841 = 0;
	var uLocal_10842 = 0;
	var uLocal_10843 = 0;
	var uLocal_10844 = 0;
	var uLocal_10845 = 0;
	var uLocal_10846 = 0;
	var uLocal_10847 = 0;
	var uLocal_10848 = 0;
	var uLocal_10849 = 0;
	var uLocal_10850 = 0;
	var uLocal_10851 = 0;
	var uLocal_10852 = 0;
	var uLocal_10853 = 0;
	var uLocal_10854 = 0;
	var uLocal_10855 = 0;
	var uLocal_10856 = 0;
	var uLocal_10857 = 0;
	var uLocal_10858 = 0;
	var uLocal_10859 = 0;
	var uLocal_10860 = 0;
	var uLocal_10861 = 0;
	var uLocal_10862 = 0;
	var uLocal_10863 = 0;
	var uLocal_10864 = 0;
	var uLocal_10865 = 0;
	var uLocal_10866 = 0;
	var uLocal_10867 = 0;
	var uLocal_10868 = 0;
	var uLocal_10869 = 0;
	var uLocal_10870 = 0;
	var uLocal_10871 = 0;
	var uLocal_10872 = 0;
	var uLocal_10873 = 0;
	var uLocal_10874 = 0;
	var uLocal_10875 = 0;
	var uLocal_10876 = 0;
	var uLocal_10877 = 0;
	var uLocal_10878 = 0;
	var uLocal_10879 = 0;
	var uLocal_10880 = 0;
	var uLocal_10881 = 0;
	var uLocal_10882 = 0;
	var uLocal_10883 = 0;
	var uLocal_10884 = 0;
	var uLocal_10885 = 0;
	var uLocal_10886 = 0;
	var uLocal_10887 = 0;
	var uLocal_10888 = 0;
	var uLocal_10889 = 0;
	var uLocal_10890 = 0;
	var uLocal_10891 = 0;
	var uLocal_10892 = 0;
	var uLocal_10893 = 0;
	var uLocal_10894 = 0;
	var uLocal_10895 = 0;
	var uLocal_10896 = 0;
	var uLocal_10897 = 0;
	var uLocal_10898 = 0;
	var uLocal_10899 = 0;
	var uLocal_10900 = 0;
	var uLocal_10901 = 0;
	var uLocal_10902 = 0;
	var uLocal_10903 = 0;
	var uLocal_10904 = 0;
	var uLocal_10905 = 0;
	var uLocal_10906 = 0;
	var uLocal_10907 = 0;
	var uLocal_10908 = 0;
	var uLocal_10909 = 0;
	var uLocal_10910 = 0;
	var uLocal_10911 = 0;
	var uLocal_10912 = 0;
	var uLocal_10913 = 0;
	var uLocal_10914 = 0;
	var uLocal_10915 = 0;
	var uLocal_10916 = 0;
	var uLocal_10917 = 0;
	var uLocal_10918 = 0;
	var uLocal_10919 = 0;
	var uLocal_10920 = 0;
	var uLocal_10921 = 0;
	var uLocal_10922 = 0;
	var uLocal_10923 = 0;
	var uLocal_10924 = 0;
	var uLocal_10925 = 0;
	var uLocal_10926 = 0;
	var uLocal_10927 = 0;
	var uLocal_10928 = 0;
	var uLocal_10929 = 0;
	var uLocal_10930 = 0;
	var uLocal_10931 = 0;
	var uLocal_10932 = 0;
	var uLocal_10933 = 0;
	var uLocal_10934 = 0;
	var uLocal_10935 = 0;
	var uLocal_10936 = 0;
	var uLocal_10937 = 0;
	var uLocal_10938 = 0;
	var uLocal_10939 = 0;
	var uLocal_10940 = 0;
	var uLocal_10941 = 0;
	var uLocal_10942 = 0;
	var uLocal_10943 = 0;
	var uLocal_10944 = 0;
	var uLocal_10945 = 0;
	var uLocal_10946 = 0;
	var uLocal_10947 = 0;
	var uLocal_10948 = 0;
	var uLocal_10949 = 0;
	var uLocal_10950 = 0;
	var uLocal_10951 = 0;
	var uLocal_10952 = 0;
	var uLocal_10953 = 0;
	var uLocal_10954 = 0;
	var uLocal_10955 = 0;
	var uLocal_10956 = 0;
	var uLocal_10957 = 0;
	var uLocal_10958 = 0;
	var uLocal_10959 = 0;
	var uLocal_10960 = 0;
	var uLocal_10961 = 0;
	var uLocal_10962 = 0;
	var uLocal_10963 = 0;
	var uLocal_10964 = 0;
	var uLocal_10965 = 0;
	var uLocal_10966 = 0;
	var uLocal_10967 = 0;
	var uLocal_10968 = 0;
	var uLocal_10969 = 0;
	var uLocal_10970 = 0;
	var uLocal_10971 = 0;
	var uLocal_10972 = 0;
	var uLocal_10973 = 0;
	var uLocal_10974 = 0;
	var uLocal_10975 = 0;
	var uLocal_10976 = 0;
	var uLocal_10977 = 0;
	var uLocal_10978 = 0;
	var uLocal_10979 = 0;
	var uLocal_10980 = 0;
	var uLocal_10981 = 0;
	var uLocal_10982 = 0;
	var uLocal_10983 = 0;
	var uLocal_10984 = 0;
	var uLocal_10985 = 0;
	var uLocal_10986 = 0;
	var uLocal_10987 = 0;
	var uLocal_10988 = 0;
	var uLocal_10989 = 0;
	var uLocal_10990 = 0;
	var uLocal_10991 = 0;
	var uLocal_10992 = 0;
	var uLocal_10993 = 0;
	var uLocal_10994 = 0;
	var uLocal_10995 = 0;
	var uLocal_10996 = 0;
	var uLocal_10997 = 0;
	var uLocal_10998 = 0;
	var uLocal_10999 = 0;
	var uLocal_11000 = 0;
	var uLocal_11001 = 0;
	var uLocal_11002 = 0;
	var uLocal_11003 = 0;
	var uLocal_11004 = 0;
	var uLocal_11005 = 0;
	var uLocal_11006 = 0;
	var uLocal_11007 = 0;
	var uLocal_11008 = 0;
	var uLocal_11009 = 0;
	var uLocal_11010 = 0;
	var uLocal_11011 = 0;
	var uLocal_11012 = 0;
	var uLocal_11013 = 0;
	var uLocal_11014 = 0;
	var uLocal_11015 = 0;
	var uLocal_11016 = 0;
	var uLocal_11017 = 0;
	var uLocal_11018 = 0;
	var uLocal_11019 = 0;
	var uLocal_11020 = 0;
	var uLocal_11021 = 0;
	var uLocal_11022 = 0;
	var uLocal_11023 = 0;
	var uLocal_11024 = 0;
	var uLocal_11025 = 0;
	var uLocal_11026 = 0;
	var uLocal_11027 = 0;
	var uLocal_11028 = 0;
	var uLocal_11029 = 0;
	var uLocal_11030 = 0;
	var uLocal_11031 = 0;
	var uLocal_11032 = 0;
	var uLocal_11033 = 0;
	var uLocal_11034 = 0;
	var uLocal_11035 = 0;
	var uLocal_11036 = 0;
	var uLocal_11037 = 0;
	var uLocal_11038 = 0;
	var uLocal_11039 = 0;
	var uLocal_11040 = 0;
	var uLocal_11041 = 0;
	var uLocal_11042 = 0;
	var uLocal_11043 = 0;
	var uLocal_11044 = 0;
	var uLocal_11045 = 0;
	var uLocal_11046 = 0;
	var uLocal_11047 = 0;
	var uLocal_11048 = 0;
	var uLocal_11049 = 0;
	var uLocal_11050 = 0;
	var uLocal_11051 = 0;
	var uLocal_11052 = 0;
	var uLocal_11053 = 0;
	var uLocal_11054 = 0;
	var uLocal_11055 = 0;
	var uLocal_11056 = 0;
	var uLocal_11057 = 0;
	var uLocal_11058 = 0;
	var uLocal_11059 = 0;
	var uLocal_11060 = 0;
	var uLocal_11061 = 0;
	var uLocal_11062 = 0;
	var uLocal_11063 = 0;
	var uLocal_11064 = 0;
	var uLocal_11065 = 0;
	var uLocal_11066 = 0;
	var uLocal_11067 = 0;
	var uLocal_11068 = 0;
	var uLocal_11069 = 0;
	var uLocal_11070 = 0;
	var uLocal_11071 = 0;
	var uLocal_11072 = 0;
	var uLocal_11073 = 0;
	var uLocal_11074 = 0;
	var uLocal_11075 = 0;
	var uLocal_11076 = 0;
	var uLocal_11077 = 0;
	var uLocal_11078 = 0;
	var uLocal_11079 = 0;
	var uLocal_11080 = 0;
	var uLocal_11081 = 0;
	var uLocal_11082 = 0;
	var uLocal_11083 = 0;
	var uLocal_11084 = 0;
	var uLocal_11085 = 0;
	var uLocal_11086 = 0;
	var uLocal_11087 = 0;
	var uLocal_11088 = 0;
	var uLocal_11089 = 0;
	var uLocal_11090 = 0;
	var uLocal_11091 = 0;
	var uLocal_11092 = 0;
	var uLocal_11093 = 0;
	var uLocal_11094 = 0;
	var uLocal_11095 = 0;
	var uLocal_11096 = 0;
	var uLocal_11097 = 0;
	var uLocal_11098 = 0;
	var uLocal_11099 = 0;
	var uLocal_11100 = 0;
	var uLocal_11101 = 0;
	var uLocal_11102 = 0;
	var uLocal_11103 = 0;
	var uLocal_11104 = 0;
	var uLocal_11105 = 0;
	var uLocal_11106 = 0;
	var uLocal_11107 = 0;
	var uLocal_11108 = 0;
	var uLocal_11109 = 0;
	var uLocal_11110 = 0;
	var uLocal_11111 = 0;
	var uLocal_11112 = 0;
	var uLocal_11113 = 0;
	var uLocal_11114 = 0;
	var uLocal_11115 = 0;
	var uLocal_11116 = 0;
	var uLocal_11117 = 0;
	var uLocal_11118 = 0;
	var uLocal_11119 = 0;
	var uLocal_11120 = 0;
	var uLocal_11121 = 0;
	var uLocal_11122 = 0;
	var uLocal_11123 = 0;
	var uLocal_11124 = 0;
	var uLocal_11125 = 0;
	var uLocal_11126 = 0;
	var uLocal_11127 = 0;
	var uLocal_11128 = 0;
	var uLocal_11129 = 0;
	var uLocal_11130 = 0;
	var uLocal_11131 = 0;
	var uLocal_11132 = 0;
	var uLocal_11133 = 0;
	var uLocal_11134 = 0;
	var uLocal_11135 = 0;
	var uLocal_11136 = 0;
	var uLocal_11137 = 0;
	var uLocal_11138 = 0;
	var uLocal_11139 = 0;
	var uLocal_11140 = 0;
	var uLocal_11141 = 0;
	var uLocal_11142 = 0;
	var uLocal_11143 = 0;
	var uLocal_11144 = 0;
	var uLocal_11145 = 0;
	var uLocal_11146 = 0;
	var uLocal_11147 = 0;
	var uLocal_11148 = 0;
	var uLocal_11149 = 0;
	var uLocal_11150 = 0;
	var uLocal_11151 = 0;
	var uLocal_11152 = 0;
	var uLocal_11153 = 0;
	var uLocal_11154 = 0;
	var uLocal_11155 = 0;
	var uLocal_11156 = 0;
	var uLocal_11157 = 0;
	var uLocal_11158 = 0;
	var uLocal_11159 = 0;
	var uLocal_11160 = 0;
	var uLocal_11161 = 0;
	var uLocal_11162 = 0;
	var uLocal_11163 = 0;
	var uLocal_11164 = 0;
	var uLocal_11165 = 0;
	var uLocal_11166 = 0;
	var uLocal_11167 = 0;
	var uLocal_11168 = 0;
	var uLocal_11169 = 0;
	var uLocal_11170 = 0;
	var uLocal_11171 = 0;
	var uLocal_11172 = 0;
	var uLocal_11173 = 0;
	var uLocal_11174 = 0;
	var uLocal_11175 = 0;
	var uLocal_11176 = 0;
	var uLocal_11177 = 0;
	var uLocal_11178 = 0;
	var uLocal_11179 = 0;
	var uLocal_11180 = 0;
	var uLocal_11181 = 0;
	var uLocal_11182 = 0;
	var uLocal_11183 = 0;
	var uLocal_11184 = 0;
	var uLocal_11185 = 15;
	var uLocal_11186 = 0;
	var uLocal_11187 = 0;
	var uLocal_11188 = 0;
	var uLocal_11189 = 0;
	var uLocal_11190 = 0;
	var uLocal_11191 = 0;
	var uLocal_11192 = 0;
	var uLocal_11193 = 0;
	var uLocal_11194 = 0;
	var uLocal_11195 = 0;
	var uLocal_11196 = 0;
	var uLocal_11197 = 0;
	var uLocal_11198 = 0;
	var uLocal_11199 = 0;
	var uLocal_11200 = 0;
	var uLocal_11201 = 0;
	var uLocal_11202 = 0;
	var uLocal_11203 = 0;
	var uLocal_11204 = 0;
	var uLocal_11205 = 0;
	var uLocal_11206 = 0;
	var uLocal_11207 = 0;
	var uLocal_11208 = 0;
	var uLocal_11209 = 0;
	var uLocal_11210 = 0;
	var uLocal_11211 = 0;
	var uLocal_11212 = 0;
	var uLocal_11213 = 0;
	var uLocal_11214 = 0;
	var uLocal_11215 = 0;
	var uLocal_11216 = 0;
	var uLocal_11217 = 0;
	var uLocal_11218 = 0;
	var uLocal_11219 = 0;
	var uLocal_11220 = 0;
	var uLocal_11221 = 0;
	var uLocal_11222 = 0;
	var uLocal_11223 = 0;
	var uLocal_11224 = 0;
	var uLocal_11225 = 0;
	var uLocal_11226 = 0;
	var uLocal_11227 = 0;
	var uLocal_11228 = 0;
	var uLocal_11229 = 0;
	var uLocal_11230 = 0;
	var uLocal_11231 = 0;
	var uLocal_11232 = 0;
	var uLocal_11233 = 0;
	var uLocal_11234 = 0;
	var uLocal_11235 = 0;
	var uLocal_11236 = 0;
	var uLocal_11237 = 0;
	var uLocal_11238 = 0;
	var uLocal_11239 = 0;
	var uLocal_11240 = 0;
	var uLocal_11241 = 0;
	var uLocal_11242 = 0;
	var uLocal_11243 = 0;
	var uLocal_11244 = 0;
	var uLocal_11245 = 0;
	var uLocal_11246 = 0;
	var uLocal_11247 = 0;
	var uLocal_11248 = 0;
	var uLocal_11249 = 0;
	var uLocal_11250 = 0;
	var uLocal_11251 = 0;
	var uLocal_11252 = 0;
	var uLocal_11253 = 0;
	var uLocal_11254 = 0;
	var uLocal_11255 = 0;
	var uLocal_11256 = 0;
	var uLocal_11257 = 0;
	var uLocal_11258 = 0;
	var uLocal_11259 = 0;
	var uLocal_11260 = 0;
	var uLocal_11261 = 0;
	var uLocal_11262 = 0;
	var uLocal_11263 = 0;
	var uLocal_11264 = 0;
	var uLocal_11265 = 0;
	var uLocal_11266 = 0;
	var uLocal_11267 = 0;
	var uLocal_11268 = 0;
	var uLocal_11269 = 0;
	var uLocal_11270 = 0;
	var uLocal_11271 = 0;
	var uLocal_11272 = 0;
	var uLocal_11273 = 0;
	var uLocal_11274 = 0;
	var uLocal_11275 = 0;
	var uLocal_11276 = 0;
	var uLocal_11277 = 0;
	var uLocal_11278 = 0;
	var uLocal_11279 = 0;
	var uLocal_11280 = 0;
	var uLocal_11281 = 0;
	var uLocal_11282 = 0;
	var uLocal_11283 = 0;
	var uLocal_11284 = 0;
	var uLocal_11285 = 0;
	var uLocal_11286 = 0;
	var uLocal_11287 = 0;
	var uLocal_11288 = 0;
	var uLocal_11289 = 0;
	var uLocal_11290 = 0;
	var uLocal_11291 = 0;
	var uLocal_11292 = 0;
	var uLocal_11293 = 0;
	var uLocal_11294 = 0;
	var uLocal_11295 = 0;
	var uLocal_11296 = 0;
	var uLocal_11297 = 0;
	var uLocal_11298 = 0;
	var uLocal_11299 = 0;
	var uLocal_11300 = 0;
	var uLocal_11301 = 0;
	var uLocal_11302 = 0;
	var uLocal_11303 = 0;
	var uLocal_11304 = 0;
	var uLocal_11305 = 0;
	var uLocal_11306 = 0;
	var uLocal_11307 = 0;
	var uLocal_11308 = 0;
	var uLocal_11309 = 0;
	var uLocal_11310 = 0;
	var uLocal_11311 = 0;
	var uLocal_11312 = 0;
	var uLocal_11313 = 0;
	var uLocal_11314 = 0;
	var uLocal_11315 = 0;
	var uLocal_11316 = 0;
	var uLocal_11317 = 0;
	var uLocal_11318 = 0;
	var uLocal_11319 = 0;
	var uLocal_11320 = 0;
	var uLocal_11321 = 0;
	var uLocal_11322 = 0;
	var uLocal_11323 = 0;
	var uLocal_11324 = 0;
	var uLocal_11325 = 0;
	var uLocal_11326 = 0;
	var uLocal_11327 = 0;
	var uLocal_11328 = 0;
	var uLocal_11329 = 0;
	var uLocal_11330 = 0;
	var uLocal_11331 = 0;
	var uLocal_11332 = 0;
	var uLocal_11333 = 0;
	var uLocal_11334 = 0;
	var uLocal_11335 = 0;
	var uLocal_11336 = 0;
	var uLocal_11337 = 0;
	var uLocal_11338 = 0;
	var uLocal_11339 = 0;
	var uLocal_11340 = 0;
	var uLocal_11341 = 0;
	var uLocal_11342 = 0;
	var uLocal_11343 = 0;
	var uLocal_11344 = 0;
	var uLocal_11345 = 0;
	var uLocal_11346 = 0;
	var uLocal_11347 = 0;
	var uLocal_11348 = 0;
	var uLocal_11349 = 0;
	var uLocal_11350 = 0;
	var uLocal_11351 = 0;
	var uLocal_11352 = 0;
	var uLocal_11353 = 0;
	var uLocal_11354 = 0;
	var uLocal_11355 = 0;
	var uLocal_11356 = 0;
	var uLocal_11357 = 0;
	var uLocal_11358 = 0;
	var uLocal_11359 = 0;
	var uLocal_11360 = 0;
	var uLocal_11361 = 0;
	var uLocal_11362 = 0;
	var uLocal_11363 = 0;
	var uLocal_11364 = 0;
	var uLocal_11365 = 0;
	var uLocal_11366 = 0;
	var uLocal_11367 = 0;
	var uLocal_11368 = 0;
	var uLocal_11369 = 0;
	var uLocal_11370 = 0;
	var uLocal_11371 = 0;
	var uLocal_11372 = 0;
	var uLocal_11373 = 0;
	var uLocal_11374 = 0;
	var uLocal_11375 = 0;
	var uLocal_11376 = 0;
	var uLocal_11377 = 0;
	var uLocal_11378 = 0;
	var uLocal_11379 = 0;
	var uLocal_11380 = 0;
	var uLocal_11381 = 0;
	var uLocal_11382 = 0;
	var uLocal_11383 = 0;
	var uLocal_11384 = 0;
	var uLocal_11385 = 0;
	var uLocal_11386 = 0;
	var uLocal_11387 = 0;
	var uLocal_11388 = 0;
	var uLocal_11389 = 0;
	var uLocal_11390 = 0;
	var uLocal_11391 = 0;
	var uLocal_11392 = 0;
	var uLocal_11393 = 0;
	var uLocal_11394 = 0;
	var uLocal_11395 = 0;
	var uLocal_11396 = 0;
	var uLocal_11397 = 0;
	var uLocal_11398 = 0;
	var uLocal_11399 = 0;
	var uLocal_11400 = 0;
	var uLocal_11401 = 0;
	var uLocal_11402 = 0;
	var uLocal_11403 = 0;
	var uLocal_11404 = 0;
	var uLocal_11405 = 0;
	var uLocal_11406 = 0;
	var uLocal_11407 = 0;
	var uLocal_11408 = 0;
	var uLocal_11409 = 0;
	var uLocal_11410 = 0;
	var uLocal_11411 = 0;
	var uLocal_11412 = 0;
	var uLocal_11413 = 0;
	var uLocal_11414 = 0;
	var uLocal_11415 = 0;
	var uLocal_11416 = 0;
	var uLocal_11417 = 0;
	var uLocal_11418 = 0;
	var uLocal_11419 = 0;
	var uLocal_11420 = 0;
	var uLocal_11421 = 0;
	var uLocal_11422 = 0;
	var uLocal_11423 = 0;
	var uLocal_11424 = 0;
	var uLocal_11425 = 0;
	var uLocal_11426 = 10;
	var uLocal_11427 = 0;
	var uLocal_11428 = 0;
	var uLocal_11429 = 0;
	var uLocal_11430 = 0;
	var uLocal_11431 = 0;
	var uLocal_11432 = 0;
	var uLocal_11433 = 0;
	var uLocal_11434 = 0;
	var uLocal_11435 = 0;
	var uLocal_11436 = 0;
	var uLocal_11437 = 0;
	var uLocal_11438 = 0;
	var uLocal_11439 = 0;
	var uLocal_11440 = 0;
	var uLocal_11441 = 0;
	var uLocal_11442 = 0;
	var uLocal_11443 = 0;
	var uLocal_11444 = 0;
	var uLocal_11445 = 0;
	var uLocal_11446 = 0;
	var uLocal_11447 = 0;
	var uLocal_11448 = 0;
	var uLocal_11449 = 0;
	var uLocal_11450 = 0;
	var uLocal_11451 = 0;
	var uLocal_11452 = 0;
	var uLocal_11453 = 0;
	var uLocal_11454 = 0;
	var uLocal_11455 = 0;
	var uLocal_11456 = -1;
	var uLocal_11457 = 0;
	var uLocal_11458 = 0;
	var uLocal_11459 = 0;
	var uLocal_11460 = 0;
	var uLocal_11461 = 0;
	var uLocal_11462 = 0;
	var uLocal_11463 = 0;
	var uLocal_11464 = 0;
	var uLocal_11465 = 0;
	var uLocal_11466 = 0;
	var uLocal_11467 = 0;
	var uLocal_11468 = 65;
	var uLocal_11469 = 0;
	var uLocal_11470 = 0;
	var uLocal_11471 = 0;
	var uLocal_11472 = 0;
	var uLocal_11473 = 0;
	var uLocal_11474 = 0;
	var uLocal_11475 = 0;
	var uLocal_11476 = 0;
	var uLocal_11477 = 0;
	var uLocal_11478 = 0;
	var uLocal_11479 = -1569615261;
	var uLocal_11480 = 0;
	var uLocal_11481 = 0;
	var uLocal_11482 = 0;
	var uLocal_11483 = 0;
	var uLocal_11484 = 0;
	var uLocal_11485 = 0;
	var uLocal_11486 = 0;
	var uLocal_11487 = 0;
	var uLocal_11488 = 0;
	var uLocal_11489 = 0;
	var uLocal_11490 = 0;
	var uLocal_11491 = 0;
	var uLocal_11492 = -1569615261;
	var uLocal_11493 = 0;
	var uLocal_11494 = 0;
	var uLocal_11495 = 0;
	var uLocal_11496 = 0;
	var uLocal_11497 = 0;
	var uLocal_11498 = 0;
	var uLocal_11499 = 0;
	var uLocal_11500 = 0;
	var uLocal_11501 = 0;
	var uLocal_11502 = 0;
	var uLocal_11503 = 0;
	var uLocal_11504 = 0;
	var uLocal_11505 = -1569615261;
	var uLocal_11506 = 0;
	var uLocal_11507 = 0;
	var uLocal_11508 = 0;
	var uLocal_11509 = 0;
	var uLocal_11510 = 0;
	var uLocal_11511 = 0;
	var uLocal_11512 = 0;
	var uLocal_11513 = 0;
	var uLocal_11514 = 0;
	var uLocal_11515 = 0;
	var uLocal_11516 = 0;
	var uLocal_11517 = 0;
	var uLocal_11518 = -1569615261;
	var uLocal_11519 = 0;
	var uLocal_11520 = 0;
	var uLocal_11521 = 0;
	var uLocal_11522 = 0;
	var uLocal_11523 = 0;
	var uLocal_11524 = 0;
	var uLocal_11525 = 0;
	var uLocal_11526 = 0;
	var uLocal_11527 = 0;
	var uLocal_11528 = 0;
	var uLocal_11529 = 0;
	var uLocal_11530 = 0;
	var uLocal_11531 = -1569615261;
	var uLocal_11532 = 0;
	var uLocal_11533 = 0;
	var uLocal_11534 = 0;
	var uLocal_11535 = 0;
	var uLocal_11536 = 0;
	var uLocal_11537 = 0;
	var uLocal_11538 = 0;
	var uLocal_11539 = 0;
	var uLocal_11540 = 0;
	var uLocal_11541 = 0;
	var uLocal_11542 = 0;
	var uLocal_11543 = 0;
	var uLocal_11544 = -1569615261;
	var uLocal_11545 = 0;
	var uLocal_11546 = 0;
	var uLocal_11547 = 0;
	var uLocal_11548 = 0;
	var uLocal_11549 = 0;
	var uLocal_11550 = 0;
	var uLocal_11551 = 0;
	var uLocal_11552 = 0;
	var uLocal_11553 = 0;
	var uLocal_11554 = 0;
	var uLocal_11555 = 0;
	var uLocal_11556 = 0;
	var uLocal_11557 = -1569615261;
	var uLocal_11558 = 0;
	var uLocal_11559 = 0;
	var uLocal_11560 = 0;
	var uLocal_11561 = 0;
	var uLocal_11562 = 0;
	var uLocal_11563 = 0;
	var uLocal_11564 = 0;
	var uLocal_11565 = 0;
	var uLocal_11566 = 0;
	var uLocal_11567 = 0;
	var uLocal_11568 = 0;
	var uLocal_11569 = 0;
	var uLocal_11570 = -1569615261;
	var uLocal_11571 = 0;
	var uLocal_11572 = 0;
	var uLocal_11573 = 0;
	var uLocal_11574 = 0;
	var uLocal_11575 = 0;
	var uLocal_11576 = 0;
	var uLocal_11577 = 0;
	var uLocal_11578 = 0;
	var uLocal_11579 = 0;
	var uLocal_11580 = 0;
	var uLocal_11581 = 0;
	var uLocal_11582 = 0;
	var uLocal_11583 = -1569615261;
	var uLocal_11584 = 0;
	var uLocal_11585 = 0;
	var uLocal_11586 = 0;
	var uLocal_11587 = 0;
	var uLocal_11588 = 0;
	var uLocal_11589 = 0;
	var uLocal_11590 = 0;
	var uLocal_11591 = 0;
	var uLocal_11592 = 0;
	var uLocal_11593 = 0;
	var uLocal_11594 = 0;
	var uLocal_11595 = 0;
	var uLocal_11596 = -1569615261;
	var uLocal_11597 = 0;
	var uLocal_11598 = 0;
	var uLocal_11599 = 0;
	var uLocal_11600 = 0;
	var uLocal_11601 = 0;
	var uLocal_11602 = 0;
	var uLocal_11603 = 0;
	var uLocal_11604 = 0;
	var uLocal_11605 = 0;
	var uLocal_11606 = 0;
	var uLocal_11607 = 0;
	var uLocal_11608 = 0;
	var uLocal_11609 = -1569615261;
	var uLocal_11610 = 0;
	var uLocal_11611 = 0;
	var uLocal_11612 = 0;
	var uLocal_11613 = 0;
	var uLocal_11614 = 0;
	var uLocal_11615 = 0;
	var uLocal_11616 = 0;
	var uLocal_11617 = 0;
	var uLocal_11618 = 0;
	var uLocal_11619 = 0;
	var uLocal_11620 = 0;
	var uLocal_11621 = 0;
	var uLocal_11622 = -1569615261;
	var uLocal_11623 = 0;
	var uLocal_11624 = 0;
	var uLocal_11625 = 0;
	var uLocal_11626 = 0;
	var uLocal_11627 = 0;
	var uLocal_11628 = 0;
	var uLocal_11629 = 0;
	var uLocal_11630 = 0;
	var uLocal_11631 = 0;
	var uLocal_11632 = 0;
	var uLocal_11633 = 0;
	var uLocal_11634 = 0;
	var uLocal_11635 = -1569615261;
	var uLocal_11636 = 0;
	var uLocal_11637 = 0;
	var uLocal_11638 = 0;
	var uLocal_11639 = 0;
	var uLocal_11640 = 0;
	var uLocal_11641 = 0;
	var uLocal_11642 = 0;
	var uLocal_11643 = 0;
	var uLocal_11644 = 0;
	var uLocal_11645 = 0;
	var uLocal_11646 = 0;
	var uLocal_11647 = 0;
	var uLocal_11648 = -1569615261;
	var uLocal_11649 = 0;
	var uLocal_11650 = 0;
	var uLocal_11651 = 0;
	var uLocal_11652 = 0;
	var uLocal_11653 = 0;
	var uLocal_11654 = 0;
	var uLocal_11655 = 0;
	var uLocal_11656 = 0;
	var uLocal_11657 = 0;
	var uLocal_11658 = 0;
	var uLocal_11659 = 0;
	var uLocal_11660 = 0;
	var uLocal_11661 = -1569615261;
	var uLocal_11662 = 0;
	var uLocal_11663 = 0;
	var uLocal_11664 = 0;
	var uLocal_11665 = 0;
	var uLocal_11666 = 0;
	var uLocal_11667 = 0;
	var uLocal_11668 = 0;
	var uLocal_11669 = 0;
	var uLocal_11670 = 0;
	var uLocal_11671 = 0;
	var uLocal_11672 = 0;
	var uLocal_11673 = 0;
	var uLocal_11674 = -1569615261;
	var uLocal_11675 = 0;
	var uLocal_11676 = 0;
	var uLocal_11677 = 0;
	var uLocal_11678 = 0;
	var uLocal_11679 = 0;
	var uLocal_11680 = 0;
	var uLocal_11681 = 0;
	var uLocal_11682 = 0;
	var uLocal_11683 = 0;
	var uLocal_11684 = 0;
	var uLocal_11685 = 0;
	var uLocal_11686 = 0;
	var uLocal_11687 = -1569615261;
	var uLocal_11688 = 0;
	var uLocal_11689 = 0;
	var uLocal_11690 = 0;
	var uLocal_11691 = 0;
	var uLocal_11692 = 0;
	var uLocal_11693 = 0;
	var uLocal_11694 = 0;
	var uLocal_11695 = 0;
	var uLocal_11696 = 0;
	var uLocal_11697 = 0;
	var uLocal_11698 = 0;
	var uLocal_11699 = 0;
	var uLocal_11700 = -1569615261;
	var uLocal_11701 = 0;
	var uLocal_11702 = 0;
	var uLocal_11703 = 0;
	var uLocal_11704 = 0;
	var uLocal_11705 = 0;
	var uLocal_11706 = 0;
	var uLocal_11707 = 0;
	var uLocal_11708 = 0;
	var uLocal_11709 = 0;
	var uLocal_11710 = 0;
	var uLocal_11711 = 0;
	var uLocal_11712 = 0;
	var uLocal_11713 = -1569615261;
	var uLocal_11714 = 0;
	var uLocal_11715 = 0;
	var uLocal_11716 = 0;
	var uLocal_11717 = 0;
	var uLocal_11718 = 0;
	var uLocal_11719 = 0;
	var uLocal_11720 = 0;
	var uLocal_11721 = 0;
	var uLocal_11722 = 0;
	var uLocal_11723 = 0;
	var uLocal_11724 = 0;
	var uLocal_11725 = 0;
	var uLocal_11726 = -1569615261;
	var uLocal_11727 = 0;
	var uLocal_11728 = 0;
	var uLocal_11729 = 0;
	var uLocal_11730 = 0;
	var uLocal_11731 = 0;
	var uLocal_11732 = 0;
	var uLocal_11733 = 0;
	var uLocal_11734 = 0;
	var uLocal_11735 = 0;
	var uLocal_11736 = 0;
	var uLocal_11737 = 0;
	var uLocal_11738 = 0;
	var uLocal_11739 = -1569615261;
	var uLocal_11740 = 0;
	var uLocal_11741 = 0;
	var uLocal_11742 = 0;
	var uLocal_11743 = 0;
	var uLocal_11744 = 0;
	var uLocal_11745 = 0;
	var uLocal_11746 = 0;
	var uLocal_11747 = 0;
	var uLocal_11748 = 0;
	var uLocal_11749 = 0;
	var uLocal_11750 = 0;
	var uLocal_11751 = 0;
	var uLocal_11752 = -1569615261;
	var uLocal_11753 = 0;
	var uLocal_11754 = 0;
	var uLocal_11755 = 0;
	var uLocal_11756 = 0;
	var uLocal_11757 = 0;
	var uLocal_11758 = 0;
	var uLocal_11759 = 0;
	var uLocal_11760 = 0;
	var uLocal_11761 = 0;
	var uLocal_11762 = 0;
	var uLocal_11763 = 0;
	var uLocal_11764 = 0;
	var uLocal_11765 = -1569615261;
	var uLocal_11766 = 0;
	var uLocal_11767 = 0;
	var uLocal_11768 = 0;
	var uLocal_11769 = 0;
	var uLocal_11770 = 0;
	var uLocal_11771 = 0;
	var uLocal_11772 = 0;
	var uLocal_11773 = 0;
	var uLocal_11774 = 0;
	var uLocal_11775 = 0;
	var uLocal_11776 = 0;
	var uLocal_11777 = 0;
	var uLocal_11778 = -1569615261;
	var uLocal_11779 = 0;
	var uLocal_11780 = 0;
	var uLocal_11781 = 0;
	var uLocal_11782 = 0;
	var uLocal_11783 = 0;
	var uLocal_11784 = 0;
	var uLocal_11785 = 0;
	var uLocal_11786 = 0;
	var uLocal_11787 = 0;
	var uLocal_11788 = 0;
	var uLocal_11789 = 0;
	var uLocal_11790 = 0;
	var uLocal_11791 = -1569615261;
	var uLocal_11792 = 0;
	var uLocal_11793 = 0;
	var uLocal_11794 = 0;
	var uLocal_11795 = 0;
	var uLocal_11796 = 0;
	var uLocal_11797 = 0;
	var uLocal_11798 = 0;
	var uLocal_11799 = 0;
	var uLocal_11800 = 0;
	var uLocal_11801 = 0;
	var uLocal_11802 = 0;
	var uLocal_11803 = 0;
	var uLocal_11804 = -1569615261;
	var uLocal_11805 = 0;
	var uLocal_11806 = 0;
	var uLocal_11807 = 0;
	var uLocal_11808 = 0;
	var uLocal_11809 = 0;
	var uLocal_11810 = 0;
	var uLocal_11811 = 0;
	var uLocal_11812 = 0;
	var uLocal_11813 = 0;
	var uLocal_11814 = 0;
	var uLocal_11815 = 0;
	var uLocal_11816 = 0;
	var uLocal_11817 = -1569615261;
	var uLocal_11818 = 0;
	var uLocal_11819 = 0;
	var uLocal_11820 = 0;
	var uLocal_11821 = 0;
	var uLocal_11822 = 0;
	var uLocal_11823 = 0;
	var uLocal_11824 = 0;
	var uLocal_11825 = 0;
	var uLocal_11826 = 0;
	var uLocal_11827 = 0;
	var uLocal_11828 = 0;
	var uLocal_11829 = 0;
	var uLocal_11830 = -1569615261;
	var uLocal_11831 = 0;
	var uLocal_11832 = 0;
	var uLocal_11833 = 0;
	var uLocal_11834 = 0;
	var uLocal_11835 = 0;
	var uLocal_11836 = 0;
	var uLocal_11837 = 0;
	var uLocal_11838 = 0;
	var uLocal_11839 = 0;
	var uLocal_11840 = 0;
	var uLocal_11841 = 0;
	var uLocal_11842 = 0;
	var uLocal_11843 = -1569615261;
	var uLocal_11844 = 0;
	var uLocal_11845 = 0;
	var uLocal_11846 = 0;
	var uLocal_11847 = 0;
	var uLocal_11848 = 0;
	var uLocal_11849 = 0;
	var uLocal_11850 = 0;
	var uLocal_11851 = 0;
	var uLocal_11852 = 0;
	var uLocal_11853 = 0;
	var uLocal_11854 = 0;
	var uLocal_11855 = 0;
	var uLocal_11856 = -1569615261;
	var uLocal_11857 = 0;
	var uLocal_11858 = 0;
	var uLocal_11859 = 0;
	var uLocal_11860 = 0;
	var uLocal_11861 = 0;
	var uLocal_11862 = 0;
	var uLocal_11863 = 0;
	var uLocal_11864 = 0;
	var uLocal_11865 = 0;
	var uLocal_11866 = 0;
	var uLocal_11867 = 0;
	var uLocal_11868 = 0;
	var uLocal_11869 = -1569615261;
	var uLocal_11870 = 0;
	var uLocal_11871 = 0;
	var uLocal_11872 = 0;
	var uLocal_11873 = 0;
	var uLocal_11874 = 0;
	var uLocal_11875 = 0;
	var uLocal_11876 = 0;
	var uLocal_11877 = 0;
	var uLocal_11878 = 0;
	var uLocal_11879 = 0;
	var uLocal_11880 = 0;
	var uLocal_11881 = 0;
	var uLocal_11882 = -1569615261;
	var uLocal_11883 = 0;
	var uLocal_11884 = 0;
	var uLocal_11885 = 0;
	var uLocal_11886 = 0;
	var uLocal_11887 = 0;
	var uLocal_11888 = 0;
	var uLocal_11889 = 0;
	var uLocal_11890 = 0;
	var uLocal_11891 = 0;
	var uLocal_11892 = 0;
	var uLocal_11893 = 0;
	var uLocal_11894 = 0;
	var uLocal_11895 = -1569615261;
	var uLocal_11896 = 0;
	var uLocal_11897 = 0;
	var uLocal_11898 = 0;
	var uLocal_11899 = 0;
	var uLocal_11900 = 0;
	var uLocal_11901 = 0;
	var uLocal_11902 = 0;
	var uLocal_11903 = 0;
	var uLocal_11904 = 0;
	var uLocal_11905 = 0;
	var uLocal_11906 = 0;
	var uLocal_11907 = 0;
	var uLocal_11908 = -1569615261;
	var uLocal_11909 = 0;
	var uLocal_11910 = 0;
	var uLocal_11911 = 0;
	var uLocal_11912 = 0;
	var uLocal_11913 = 0;
	var uLocal_11914 = 0;
	var uLocal_11915 = 0;
	var uLocal_11916 = 0;
	var uLocal_11917 = 0;
	var uLocal_11918 = 0;
	var uLocal_11919 = 0;
	var uLocal_11920 = 0;
	var uLocal_11921 = -1569615261;
	var uLocal_11922 = 0;
	var uLocal_11923 = 0;
	var uLocal_11924 = 0;
	var uLocal_11925 = 0;
	var uLocal_11926 = 0;
	var uLocal_11927 = 0;
	var uLocal_11928 = 0;
	var uLocal_11929 = 0;
	var uLocal_11930 = 0;
	var uLocal_11931 = 0;
	var uLocal_11932 = 0;
	var uLocal_11933 = 0;
	var uLocal_11934 = -1569615261;
	var uLocal_11935 = 0;
	var uLocal_11936 = 0;
	var uLocal_11937 = 0;
	var uLocal_11938 = 0;
	var uLocal_11939 = 0;
	var uLocal_11940 = 0;
	var uLocal_11941 = 0;
	var uLocal_11942 = 0;
	var uLocal_11943 = 0;
	var uLocal_11944 = 0;
	var uLocal_11945 = 0;
	var uLocal_11946 = 0;
	var uLocal_11947 = -1569615261;
	var uLocal_11948 = 0;
	var uLocal_11949 = 0;
	var uLocal_11950 = 0;
	var uLocal_11951 = 0;
	var uLocal_11952 = 0;
	var uLocal_11953 = 0;
	var uLocal_11954 = 0;
	var uLocal_11955 = 0;
	var uLocal_11956 = 0;
	var uLocal_11957 = 0;
	var uLocal_11958 = 0;
	var uLocal_11959 = 0;
	var uLocal_11960 = -1569615261;
	var uLocal_11961 = 0;
	var uLocal_11962 = 0;
	var uLocal_11963 = 0;
	var uLocal_11964 = 0;
	var uLocal_11965 = 0;
	var uLocal_11966 = 0;
	var uLocal_11967 = 0;
	var uLocal_11968 = 0;
	var uLocal_11969 = 0;
	var uLocal_11970 = 0;
	var uLocal_11971 = 0;
	var uLocal_11972 = 0;
	var uLocal_11973 = -1569615261;
	var uLocal_11974 = 0;
	var uLocal_11975 = 0;
	var uLocal_11976 = 0;
	var uLocal_11977 = 0;
	var uLocal_11978 = 0;
	var uLocal_11979 = 0;
	var uLocal_11980 = 0;
	var uLocal_11981 = 0;
	var uLocal_11982 = 0;
	var uLocal_11983 = 0;
	var uLocal_11984 = 0;
	var uLocal_11985 = 0;
	var uLocal_11986 = -1569615261;
	var uLocal_11987 = 0;
	var uLocal_11988 = 0;
	var uLocal_11989 = 0;
	var uLocal_11990 = 0;
	var uLocal_11991 = 0;
	var uLocal_11992 = 0;
	var uLocal_11993 = 0;
	var uLocal_11994 = 0;
	var uLocal_11995 = 0;
	var uLocal_11996 = 0;
	var uLocal_11997 = 0;
	var uLocal_11998 = 0;
	var uLocal_11999 = -1569615261;
	var uLocal_12000 = 0;
	var uLocal_12001 = 0;
	var uLocal_12002 = 0;
	var uLocal_12003 = 0;
	var uLocal_12004 = 0;
	var uLocal_12005 = 0;
	var uLocal_12006 = 0;
	var uLocal_12007 = 0;
	var uLocal_12008 = 0;
	var uLocal_12009 = 0;
	var uLocal_12010 = 0;
	var uLocal_12011 = 0;
	var uLocal_12012 = -1569615261;
	var uLocal_12013 = 0;
	var uLocal_12014 = 0;
	var uLocal_12015 = 0;
	var uLocal_12016 = 0;
	var uLocal_12017 = 0;
	var uLocal_12018 = 0;
	var uLocal_12019 = 0;
	var uLocal_12020 = 0;
	var uLocal_12021 = 0;
	var uLocal_12022 = 0;
	var uLocal_12023 = 0;
	var uLocal_12024 = 0;
	var uLocal_12025 = -1569615261;
	var uLocal_12026 = 0;
	var uLocal_12027 = 0;
	var uLocal_12028 = 0;
	var uLocal_12029 = 0;
	var uLocal_12030 = 0;
	var uLocal_12031 = 0;
	var uLocal_12032 = 0;
	var uLocal_12033 = 0;
	var uLocal_12034 = 0;
	var uLocal_12035 = 0;
	var uLocal_12036 = 0;
	var uLocal_12037 = 0;
	var uLocal_12038 = -1569615261;
	var uLocal_12039 = 0;
	var uLocal_12040 = 0;
	var uLocal_12041 = 0;
	var uLocal_12042 = 0;
	var uLocal_12043 = 0;
	var uLocal_12044 = 0;
	var uLocal_12045 = 0;
	var uLocal_12046 = 0;
	var uLocal_12047 = 0;
	var uLocal_12048 = 0;
	var uLocal_12049 = 0;
	var uLocal_12050 = 0;
	var uLocal_12051 = -1569615261;
	var uLocal_12052 = 0;
	var uLocal_12053 = 0;
	var uLocal_12054 = 0;
	var uLocal_12055 = 0;
	var uLocal_12056 = 0;
	var uLocal_12057 = 0;
	var uLocal_12058 = 0;
	var uLocal_12059 = 0;
	var uLocal_12060 = 0;
	var uLocal_12061 = 0;
	var uLocal_12062 = 0;
	var uLocal_12063 = 0;
	var uLocal_12064 = -1569615261;
	var uLocal_12065 = 0;
	var uLocal_12066 = 0;
	var uLocal_12067 = 0;
	var uLocal_12068 = 0;
	var uLocal_12069 = 0;
	var uLocal_12070 = 0;
	var uLocal_12071 = 0;
	var uLocal_12072 = 0;
	var uLocal_12073 = 0;
	var uLocal_12074 = 0;
	var uLocal_12075 = 0;
	var uLocal_12076 = 0;
	var uLocal_12077 = -1569615261;
	var uLocal_12078 = 0;
	var uLocal_12079 = 0;
	var uLocal_12080 = 0;
	var uLocal_12081 = 0;
	var uLocal_12082 = 0;
	var uLocal_12083 = 0;
	var uLocal_12084 = 0;
	var uLocal_12085 = 0;
	var uLocal_12086 = 0;
	var uLocal_12087 = 0;
	var uLocal_12088 = 0;
	var uLocal_12089 = 0;
	var uLocal_12090 = -1569615261;
	var uLocal_12091 = 0;
	var uLocal_12092 = 0;
	var uLocal_12093 = 0;
	var uLocal_12094 = 0;
	var uLocal_12095 = 0;
	var uLocal_12096 = 0;
	var uLocal_12097 = 0;
	var uLocal_12098 = 0;
	var uLocal_12099 = 0;
	var uLocal_12100 = 0;
	var uLocal_12101 = 0;
	var uLocal_12102 = 0;
	var uLocal_12103 = -1569615261;
	var uLocal_12104 = 0;
	var uLocal_12105 = 0;
	var uLocal_12106 = 0;
	var uLocal_12107 = 0;
	var uLocal_12108 = 0;
	var uLocal_12109 = 0;
	var uLocal_12110 = 0;
	var uLocal_12111 = 0;
	var uLocal_12112 = 0;
	var uLocal_12113 = 0;
	var uLocal_12114 = 0;
	var uLocal_12115 = 0;
	var uLocal_12116 = -1569615261;
	var uLocal_12117 = 0;
	var uLocal_12118 = 0;
	var uLocal_12119 = 0;
	var uLocal_12120 = 0;
	var uLocal_12121 = 0;
	var uLocal_12122 = 0;
	var uLocal_12123 = 0;
	var uLocal_12124 = 0;
	var uLocal_12125 = 0;
	var uLocal_12126 = 0;
	var uLocal_12127 = 0;
	var uLocal_12128 = 0;
	var uLocal_12129 = -1569615261;
	var uLocal_12130 = 0;
	var uLocal_12131 = 0;
	var uLocal_12132 = 0;
	var uLocal_12133 = 0;
	var uLocal_12134 = 0;
	var uLocal_12135 = 0;
	var uLocal_12136 = 0;
	var uLocal_12137 = 0;
	var uLocal_12138 = 0;
	var uLocal_12139 = 0;
	var uLocal_12140 = 0;
	var uLocal_12141 = 0;
	var uLocal_12142 = -1569615261;
	var uLocal_12143 = 0;
	var uLocal_12144 = 0;
	var uLocal_12145 = 0;
	var uLocal_12146 = 0;
	var uLocal_12147 = 0;
	var uLocal_12148 = 0;
	var uLocal_12149 = 0;
	var uLocal_12150 = 0;
	var uLocal_12151 = 0;
	var uLocal_12152 = 0;
	var uLocal_12153 = 0;
	var uLocal_12154 = 0;
	var uLocal_12155 = -1569615261;
	var uLocal_12156 = 0;
	var uLocal_12157 = 0;
	var uLocal_12158 = 0;
	var uLocal_12159 = 0;
	var uLocal_12160 = 0;
	var uLocal_12161 = 0;
	var uLocal_12162 = 0;
	var uLocal_12163 = 0;
	var uLocal_12164 = 0;
	var uLocal_12165 = 0;
	var uLocal_12166 = 0;
	var uLocal_12167 = 0;
	var uLocal_12168 = -1569615261;
	var uLocal_12169 = 0;
	var uLocal_12170 = 0;
	var uLocal_12171 = 0;
	var uLocal_12172 = 0;
	var uLocal_12173 = 0;
	var uLocal_12174 = 0;
	var uLocal_12175 = 0;
	var uLocal_12176 = 0;
	var uLocal_12177 = 0;
	var uLocal_12178 = 0;
	var uLocal_12179 = 0;
	var uLocal_12180 = 0;
	var uLocal_12181 = -1569615261;
	var uLocal_12182 = 0;
	var uLocal_12183 = 0;
	var uLocal_12184 = 0;
	var uLocal_12185 = 0;
	var uLocal_12186 = 0;
	var uLocal_12187 = 0;
	var uLocal_12188 = 0;
	var uLocal_12189 = 0;
	var uLocal_12190 = 0;
	var uLocal_12191 = 0;
	var uLocal_12192 = 0;
	var uLocal_12193 = 0;
	var uLocal_12194 = -1569615261;
	var uLocal_12195 = 0;
	var uLocal_12196 = 0;
	var uLocal_12197 = 0;
	var uLocal_12198 = 0;
	var uLocal_12199 = 0;
	var uLocal_12200 = 0;
	var uLocal_12201 = 0;
	var uLocal_12202 = 0;
	var uLocal_12203 = 0;
	var uLocal_12204 = 0;
	var uLocal_12205 = 0;
	var uLocal_12206 = 0;
	var uLocal_12207 = -1569615261;
	var uLocal_12208 = 0;
	var uLocal_12209 = 0;
	var uLocal_12210 = 0;
	var uLocal_12211 = 0;
	var uLocal_12212 = 0;
	var uLocal_12213 = 0;
	var uLocal_12214 = 0;
	var uLocal_12215 = 0;
	var uLocal_12216 = 0;
	var uLocal_12217 = 0;
	var uLocal_12218 = 0;
	var uLocal_12219 = 0;
	var uLocal_12220 = -1569615261;
	var uLocal_12221 = 0;
	var uLocal_12222 = 0;
	var uLocal_12223 = 0;
	var uLocal_12224 = 0;
	var uLocal_12225 = 0;
	var uLocal_12226 = 0;
	var uLocal_12227 = 0;
	var uLocal_12228 = 0;
	var uLocal_12229 = 0;
	var uLocal_12230 = 0;
	var uLocal_12231 = 0;
	var uLocal_12232 = 0;
	var uLocal_12233 = -1569615261;
	var uLocal_12234 = 0;
	var uLocal_12235 = 0;
	var uLocal_12236 = 0;
	var uLocal_12237 = 0;
	var uLocal_12238 = 0;
	var uLocal_12239 = 0;
	var uLocal_12240 = 0;
	var uLocal_12241 = 0;
	var uLocal_12242 = 0;
	var uLocal_12243 = 0;
	var uLocal_12244 = 0;
	var uLocal_12245 = 0;
	var uLocal_12246 = -1569615261;
	var uLocal_12247 = 0;
	var uLocal_12248 = 0;
	var uLocal_12249 = 0;
	var uLocal_12250 = 0;
	var uLocal_12251 = 0;
	var uLocal_12252 = 0;
	var uLocal_12253 = 0;
	var uLocal_12254 = 0;
	var uLocal_12255 = 0;
	var uLocal_12256 = 0;
	var uLocal_12257 = 0;
	var uLocal_12258 = 0;
	var uLocal_12259 = -1569615261;
	var uLocal_12260 = 0;
	var uLocal_12261 = 0;
	var uLocal_12262 = 0;
	var uLocal_12263 = 0;
	var uLocal_12264 = 0;
	var uLocal_12265 = 0;
	var uLocal_12266 = 0;
	var uLocal_12267 = 0;
	var uLocal_12268 = 0;
	var uLocal_12269 = 0;
	var uLocal_12270 = 0;
	var uLocal_12271 = 0;
	var uLocal_12272 = -1569615261;
	var uLocal_12273 = 0;
	var uLocal_12274 = 0;
	var uLocal_12275 = 0;
	var uLocal_12276 = 0;
	var uLocal_12277 = 0;
	var uLocal_12278 = 0;
	var uLocal_12279 = 0;
	var uLocal_12280 = 0;
	var uLocal_12281 = 0;
	var uLocal_12282 = 0;
	var uLocal_12283 = 0;
	var uLocal_12284 = 0;
	var uLocal_12285 = -1569615261;
	var uLocal_12286 = 0;
	var uLocal_12287 = 0;
	var uLocal_12288 = 0;
	var uLocal_12289 = 0;
	var uLocal_12290 = 0;
	var uLocal_12291 = 0;
	var uLocal_12292 = 0;
	var uLocal_12293 = 0;
	var uLocal_12294 = 0;
	var uLocal_12295 = 0;
	var uLocal_12296 = 0;
	var uLocal_12297 = 0;
	var uLocal_12298 = -1569615261;
	var uLocal_12299 = 0;
	var uLocal_12300 = 0;
	var uLocal_12301 = 0;
	var uLocal_12302 = 0;
	var uLocal_12303 = 0;
	var uLocal_12304 = 0;
	var uLocal_12305 = 0;
	var uLocal_12306 = 0;
	var uLocal_12307 = 0;
	var uLocal_12308 = 0;
	var uLocal_12309 = 0;
	var uLocal_12310 = 0;
	var uLocal_12311 = -1569615261;
	var uLocal_12312 = 0;
	var uLocal_12313 = 0;
	var uLocal_12314 = 0;
	var uLocal_12315 = 0;
	var uLocal_12316 = 0;
	var uLocal_12317 = 0;
	var uLocal_12318 = 0;
	var uLocal_12319 = 0;
	var uLocal_12320 = 0;
	var uLocal_12321 = 0;
	var uLocal_12322 = 0;
	var uLocal_12323 = 0;
	var uLocal_12324 = 0;
	var uLocal_12325 = 0;
	var uLocal_12326 = 0;
	var uLocal_12327 = 0;
	var uLocal_12328 = 0;
	var uLocal_12329 = 1;
	var uLocal_12330 = 30;
	var uLocal_12331 = -1;
	var uLocal_12332 = 0;
	var uLocal_12333 = 1;
	var uLocal_12334 = 0;
	var uLocal_12335 = 0;
	var uLocal_12336 = 0;
	var uLocal_12337 = 0;
	var uLocal_12338 = 0;
	var uLocal_12339 = 0;
	var uLocal_12340 = 0;
	var uLocal_12341 = 0;
	var uLocal_12342 = 0;
	var uLocal_12343 = 1065353216;
	var uLocal_12344 = 0;
	var uLocal_12345 = 0;
	var uLocal_12346 = 1065353216;
	var uLocal_12347 = 1;
	var uLocal_12348 = 0;
	var uLocal_12349 = -1;
	var uLocal_12350 = 0;
	var uLocal_12351 = 1;
	var uLocal_12352 = 0;
	var uLocal_12353 = 0;
	var uLocal_12354 = 0;
	var uLocal_12355 = 0;
	var uLocal_12356 = 0;
	var uLocal_12357 = 0;
	var uLocal_12358 = 0;
	var uLocal_12359 = 0;
	var uLocal_12360 = 0;
	var uLocal_12361 = 1065353216;
	var uLocal_12362 = 0;
	var uLocal_12363 = 0;
	var uLocal_12364 = 1065353216;
	var uLocal_12365 = 1;
	var uLocal_12366 = 0;
	var uLocal_12367 = -1;
	var uLocal_12368 = 0;
	var uLocal_12369 = 1;
	var uLocal_12370 = 0;
	var uLocal_12371 = 0;
	var uLocal_12372 = 0;
	var uLocal_12373 = 0;
	var uLocal_12374 = 0;
	var uLocal_12375 = 0;
	var uLocal_12376 = 0;
	var uLocal_12377 = 0;
	var uLocal_12378 = 0;
	var uLocal_12379 = 1065353216;
	var uLocal_12380 = 0;
	var uLocal_12381 = 0;
	var uLocal_12382 = 1065353216;
	var uLocal_12383 = 1;
	var uLocal_12384 = 0;
	var uLocal_12385 = -1;
	var uLocal_12386 = 0;
	var uLocal_12387 = 1;
	var uLocal_12388 = 0;
	var uLocal_12389 = 0;
	var uLocal_12390 = 0;
	var uLocal_12391 = 0;
	var uLocal_12392 = 0;
	var uLocal_12393 = 0;
	var uLocal_12394 = 0;
	var uLocal_12395 = 0;
	var uLocal_12396 = 0;
	var uLocal_12397 = 1065353216;
	var uLocal_12398 = 0;
	var uLocal_12399 = 0;
	var uLocal_12400 = 1065353216;
	var uLocal_12401 = 1;
	var uLocal_12402 = 0;
	var uLocal_12403 = -1;
	var uLocal_12404 = 0;
	var uLocal_12405 = 1;
	var uLocal_12406 = 0;
	var uLocal_12407 = 0;
	var uLocal_12408 = 0;
	var uLocal_12409 = 0;
	var uLocal_12410 = 0;
	var uLocal_12411 = 0;
	var uLocal_12412 = 0;
	var uLocal_12413 = 0;
	var uLocal_12414 = 0;
	var uLocal_12415 = 1065353216;
	var uLocal_12416 = 0;
	var uLocal_12417 = 0;
	var uLocal_12418 = 1065353216;
	var uLocal_12419 = 1;
	var uLocal_12420 = 0;
	var uLocal_12421 = -1;
	var uLocal_12422 = 0;
	var uLocal_12423 = 1;
	var uLocal_12424 = 0;
	var uLocal_12425 = 0;
	var uLocal_12426 = 0;
	var uLocal_12427 = 0;
	var uLocal_12428 = 0;
	var uLocal_12429 = 0;
	var uLocal_12430 = 0;
	var uLocal_12431 = 0;
	var uLocal_12432 = 0;
	var uLocal_12433 = 1065353216;
	var uLocal_12434 = 0;
	var uLocal_12435 = 0;
	var uLocal_12436 = 1065353216;
	var uLocal_12437 = 1;
	var uLocal_12438 = 0;
	var uLocal_12439 = -1;
	var uLocal_12440 = 0;
	var uLocal_12441 = 1;
	var uLocal_12442 = 0;
	var uLocal_12443 = 0;
	var uLocal_12444 = 0;
	var uLocal_12445 = 0;
	var uLocal_12446 = 0;
	var uLocal_12447 = 0;
	var uLocal_12448 = 0;
	var uLocal_12449 = 0;
	var uLocal_12450 = 0;
	var uLocal_12451 = 1065353216;
	var uLocal_12452 = 0;
	var uLocal_12453 = 0;
	var uLocal_12454 = 1065353216;
	var uLocal_12455 = 1;
	var uLocal_12456 = 0;
	var uLocal_12457 = -1;
	var uLocal_12458 = 0;
	var uLocal_12459 = 1;
	var uLocal_12460 = 0;
	var uLocal_12461 = 0;
	var uLocal_12462 = 0;
	var uLocal_12463 = 0;
	var uLocal_12464 = 0;
	var uLocal_12465 = 0;
	var uLocal_12466 = 0;
	var uLocal_12467 = 0;
	var uLocal_12468 = 0;
	var uLocal_12469 = 1065353216;
	var uLocal_12470 = 0;
	var uLocal_12471 = 0;
	var uLocal_12472 = 1065353216;
	var uLocal_12473 = 1;
	var uLocal_12474 = 0;
	var uLocal_12475 = -1;
	var uLocal_12476 = 0;
	var uLocal_12477 = 1;
	var uLocal_12478 = 0;
	var uLocal_12479 = 0;
	var uLocal_12480 = 0;
	var uLocal_12481 = 0;
	var uLocal_12482 = 0;
	var uLocal_12483 = 0;
	var uLocal_12484 = 0;
	var uLocal_12485 = 0;
	var uLocal_12486 = 0;
	var uLocal_12487 = 1065353216;
	var uLocal_12488 = 0;
	var uLocal_12489 = 0;
	var uLocal_12490 = 1065353216;
	var uLocal_12491 = 1;
	var uLocal_12492 = 0;
	var uLocal_12493 = -1;
	var uLocal_12494 = 0;
	var uLocal_12495 = 1;
	var uLocal_12496 = 0;
	var uLocal_12497 = 0;
	var uLocal_12498 = 0;
	var uLocal_12499 = 0;
	var uLocal_12500 = 0;
	var uLocal_12501 = 0;
	var uLocal_12502 = 0;
	var uLocal_12503 = 0;
	var uLocal_12504 = 0;
	var uLocal_12505 = 1065353216;
	var uLocal_12506 = 0;
	var uLocal_12507 = 0;
	var uLocal_12508 = 1065353216;
	var uLocal_12509 = 1;
	var uLocal_12510 = 0;
	var uLocal_12511 = -1;
	var uLocal_12512 = 0;
	var uLocal_12513 = 1;
	var uLocal_12514 = 0;
	var uLocal_12515 = 0;
	var uLocal_12516 = 0;
	var uLocal_12517 = 0;
	var uLocal_12518 = 0;
	var uLocal_12519 = 0;
	var uLocal_12520 = 0;
	var uLocal_12521 = 0;
	var uLocal_12522 = 0;
	var uLocal_12523 = 1065353216;
	var uLocal_12524 = 0;
	var uLocal_12525 = 0;
	var uLocal_12526 = 1065353216;
	var uLocal_12527 = 1;
	var uLocal_12528 = 0;
	var uLocal_12529 = -1;
	var uLocal_12530 = 0;
	var uLocal_12531 = 1;
	var uLocal_12532 = 0;
	var uLocal_12533 = 0;
	var uLocal_12534 = 0;
	var uLocal_12535 = 0;
	var uLocal_12536 = 0;
	var uLocal_12537 = 0;
	var uLocal_12538 = 0;
	var uLocal_12539 = 0;
	var uLocal_12540 = 0;
	var uLocal_12541 = 1065353216;
	var uLocal_12542 = 0;
	var uLocal_12543 = 0;
	var uLocal_12544 = 1065353216;
	var uLocal_12545 = 1;
	var uLocal_12546 = 0;
	var uLocal_12547 = -1;
	var uLocal_12548 = 0;
	var uLocal_12549 = 1;
	var uLocal_12550 = 0;
	var uLocal_12551 = 0;
	var uLocal_12552 = 0;
	var uLocal_12553 = 0;
	var uLocal_12554 = 0;
	var uLocal_12555 = 0;
	var uLocal_12556 = 0;
	var uLocal_12557 = 0;
	var uLocal_12558 = 0;
	var uLocal_12559 = 1065353216;
	var uLocal_12560 = 0;
	var uLocal_12561 = 0;
	var uLocal_12562 = 1065353216;
	var uLocal_12563 = 1;
	var uLocal_12564 = 0;
	var uLocal_12565 = -1;
	var uLocal_12566 = 0;
	var uLocal_12567 = 1;
	var uLocal_12568 = 0;
	var uLocal_12569 = 0;
	var uLocal_12570 = 0;
	var uLocal_12571 = 0;
	var uLocal_12572 = 0;
	var uLocal_12573 = 0;
	var uLocal_12574 = 0;
	var uLocal_12575 = 0;
	var uLocal_12576 = 0;
	var uLocal_12577 = 1065353216;
	var uLocal_12578 = 0;
	var uLocal_12579 = 0;
	var uLocal_12580 = 1065353216;
	var uLocal_12581 = 1;
	var uLocal_12582 = 0;
	var uLocal_12583 = -1;
	var uLocal_12584 = 0;
	var uLocal_12585 = 1;
	var uLocal_12586 = 0;
	var uLocal_12587 = 0;
	var uLocal_12588 = 0;
	var uLocal_12589 = 0;
	var uLocal_12590 = 0;
	var uLocal_12591 = 0;
	var uLocal_12592 = 0;
	var uLocal_12593 = 0;
	var uLocal_12594 = 0;
	var uLocal_12595 = 1065353216;
	var uLocal_12596 = 0;
	var uLocal_12597 = 0;
	var uLocal_12598 = 1065353216;
	var uLocal_12599 = 1;
	var uLocal_12600 = 0;
	var uLocal_12601 = -1;
	var uLocal_12602 = 0;
	var uLocal_12603 = 1;
	var uLocal_12604 = 0;
	var uLocal_12605 = 0;
	var uLocal_12606 = 0;
	var uLocal_12607 = 0;
	var uLocal_12608 = 0;
	var uLocal_12609 = 0;
	var uLocal_12610 = 0;
	var uLocal_12611 = 0;
	var uLocal_12612 = 0;
	var uLocal_12613 = 1065353216;
	var uLocal_12614 = 0;
	var uLocal_12615 = 0;
	var uLocal_12616 = 1065353216;
	var uLocal_12617 = 1;
	var uLocal_12618 = 0;
	var uLocal_12619 = -1;
	var uLocal_12620 = 0;
	var uLocal_12621 = 1;
	var uLocal_12622 = 0;
	var uLocal_12623 = 0;
	var uLocal_12624 = 0;
	var uLocal_12625 = 0;
	var uLocal_12626 = 0;
	var uLocal_12627 = 0;
	var uLocal_12628 = 0;
	var uLocal_12629 = 0;
	var uLocal_12630 = 0;
	var uLocal_12631 = 1065353216;
	var uLocal_12632 = 0;
	var uLocal_12633 = 0;
	var uLocal_12634 = 1065353216;
	var uLocal_12635 = 1;
	var uLocal_12636 = 0;
	var uLocal_12637 = -1;
	var uLocal_12638 = 0;
	var uLocal_12639 = 1;
	var uLocal_12640 = 0;
	var uLocal_12641 = 0;
	var uLocal_12642 = 0;
	var uLocal_12643 = 0;
	var uLocal_12644 = 0;
	var uLocal_12645 = 0;
	var uLocal_12646 = 0;
	var uLocal_12647 = 0;
	var uLocal_12648 = 0;
	var uLocal_12649 = 1065353216;
	var uLocal_12650 = 0;
	var uLocal_12651 = 0;
	var uLocal_12652 = 1065353216;
	var uLocal_12653 = 1;
	var uLocal_12654 = 0;
	var uLocal_12655 = -1;
	var uLocal_12656 = 0;
	var uLocal_12657 = 1;
	var uLocal_12658 = 0;
	var uLocal_12659 = 0;
	var uLocal_12660 = 0;
	var uLocal_12661 = 0;
	var uLocal_12662 = 0;
	var uLocal_12663 = 0;
	var uLocal_12664 = 0;
	var uLocal_12665 = 0;
	var uLocal_12666 = 0;
	var uLocal_12667 = 1065353216;
	var uLocal_12668 = 0;
	var uLocal_12669 = 0;
	var uLocal_12670 = 1065353216;
	var uLocal_12671 = 1;
	var uLocal_12672 = 0;
	var uLocal_12673 = -1;
	var uLocal_12674 = 0;
	var uLocal_12675 = 1;
	var uLocal_12676 = 0;
	var uLocal_12677 = 0;
	var uLocal_12678 = 0;
	var uLocal_12679 = 0;
	var uLocal_12680 = 0;
	var uLocal_12681 = 0;
	var uLocal_12682 = 0;
	var uLocal_12683 = 0;
	var uLocal_12684 = 0;
	var uLocal_12685 = 1065353216;
	var uLocal_12686 = 0;
	var uLocal_12687 = 0;
	var uLocal_12688 = 1065353216;
	var uLocal_12689 = 1;
	var uLocal_12690 = 0;
	var uLocal_12691 = -1;
	var uLocal_12692 = 0;
	var uLocal_12693 = 1;
	var uLocal_12694 = 0;
	var uLocal_12695 = 0;
	var uLocal_12696 = 0;
	var uLocal_12697 = 0;
	var uLocal_12698 = 0;
	var uLocal_12699 = 0;
	var uLocal_12700 = 0;
	var uLocal_12701 = 0;
	var uLocal_12702 = 0;
	var uLocal_12703 = 1065353216;
	var uLocal_12704 = 0;
	var uLocal_12705 = 0;
	var uLocal_12706 = 1065353216;
	var uLocal_12707 = 1;
	var uLocal_12708 = 0;
	var uLocal_12709 = -1;
	var uLocal_12710 = 0;
	var uLocal_12711 = 1;
	var uLocal_12712 = 0;
	var uLocal_12713 = 0;
	var uLocal_12714 = 0;
	var uLocal_12715 = 0;
	var uLocal_12716 = 0;
	var uLocal_12717 = 0;
	var uLocal_12718 = 0;
	var uLocal_12719 = 0;
	var uLocal_12720 = 0;
	var uLocal_12721 = 1065353216;
	var uLocal_12722 = 0;
	var uLocal_12723 = 0;
	var uLocal_12724 = 1065353216;
	var uLocal_12725 = 1;
	var uLocal_12726 = 0;
	var uLocal_12727 = -1;
	var uLocal_12728 = 0;
	var uLocal_12729 = 1;
	var uLocal_12730 = 0;
	var uLocal_12731 = 0;
	var uLocal_12732 = 0;
	var uLocal_12733 = 0;
	var uLocal_12734 = 0;
	var uLocal_12735 = 0;
	var uLocal_12736 = 0;
	var uLocal_12737 = 0;
	var uLocal_12738 = 0;
	var uLocal_12739 = 1065353216;
	var uLocal_12740 = 0;
	var uLocal_12741 = 0;
	var uLocal_12742 = 1065353216;
	var uLocal_12743 = 1;
	var uLocal_12744 = 0;
	var uLocal_12745 = -1;
	var uLocal_12746 = 0;
	var uLocal_12747 = 1;
	var uLocal_12748 = 0;
	var uLocal_12749 = 0;
	var uLocal_12750 = 0;
	var uLocal_12751 = 0;
	var uLocal_12752 = 0;
	var uLocal_12753 = 0;
	var uLocal_12754 = 0;
	var uLocal_12755 = 0;
	var uLocal_12756 = 0;
	var uLocal_12757 = 1065353216;
	var uLocal_12758 = 0;
	var uLocal_12759 = 0;
	var uLocal_12760 = 1065353216;
	var uLocal_12761 = 1;
	var uLocal_12762 = 0;
	var uLocal_12763 = -1;
	var uLocal_12764 = 0;
	var uLocal_12765 = 1;
	var uLocal_12766 = 0;
	var uLocal_12767 = 0;
	var uLocal_12768 = 0;
	var uLocal_12769 = 0;
	var uLocal_12770 = 0;
	var uLocal_12771 = 0;
	var uLocal_12772 = 0;
	var uLocal_12773 = 0;
	var uLocal_12774 = 0;
	var uLocal_12775 = 1065353216;
	var uLocal_12776 = 0;
	var uLocal_12777 = 0;
	var uLocal_12778 = 1065353216;
	var uLocal_12779 = 1;
	var uLocal_12780 = 0;
	var uLocal_12781 = -1;
	var uLocal_12782 = 0;
	var uLocal_12783 = 1;
	var uLocal_12784 = 0;
	var uLocal_12785 = 0;
	var uLocal_12786 = 0;
	var uLocal_12787 = 0;
	var uLocal_12788 = 0;
	var uLocal_12789 = 0;
	var uLocal_12790 = 0;
	var uLocal_12791 = 0;
	var uLocal_12792 = 0;
	var uLocal_12793 = 1065353216;
	var uLocal_12794 = 0;
	var uLocal_12795 = 0;
	var uLocal_12796 = 1065353216;
	var uLocal_12797 = 1;
	var uLocal_12798 = 0;
	var uLocal_12799 = -1;
	var uLocal_12800 = 0;
	var uLocal_12801 = 1;
	var uLocal_12802 = 0;
	var uLocal_12803 = 0;
	var uLocal_12804 = 0;
	var uLocal_12805 = 0;
	var uLocal_12806 = 0;
	var uLocal_12807 = 0;
	var uLocal_12808 = 0;
	var uLocal_12809 = 0;
	var uLocal_12810 = 0;
	var uLocal_12811 = 1065353216;
	var uLocal_12812 = 0;
	var uLocal_12813 = 0;
	var uLocal_12814 = 1065353216;
	var uLocal_12815 = 1;
	var uLocal_12816 = 0;
	var uLocal_12817 = -1;
	var uLocal_12818 = 0;
	var uLocal_12819 = 1;
	var uLocal_12820 = 0;
	var uLocal_12821 = 0;
	var uLocal_12822 = 0;
	var uLocal_12823 = 0;
	var uLocal_12824 = 0;
	var uLocal_12825 = 0;
	var uLocal_12826 = 0;
	var uLocal_12827 = 0;
	var uLocal_12828 = 0;
	var uLocal_12829 = 1065353216;
	var uLocal_12830 = 0;
	var uLocal_12831 = 0;
	var uLocal_12832 = 1065353216;
	var uLocal_12833 = 1;
	var uLocal_12834 = 0;
	var uLocal_12835 = -1;
	var uLocal_12836 = 0;
	var uLocal_12837 = 1;
	var uLocal_12838 = 0;
	var uLocal_12839 = 0;
	var uLocal_12840 = 0;
	var uLocal_12841 = 0;
	var uLocal_12842 = 0;
	var uLocal_12843 = 0;
	var uLocal_12844 = 0;
	var uLocal_12845 = 0;
	var uLocal_12846 = 0;
	var uLocal_12847 = 1065353216;
	var uLocal_12848 = 0;
	var uLocal_12849 = 0;
	var uLocal_12850 = 1065353216;
	var uLocal_12851 = 1;
	var uLocal_12852 = 0;
	var uLocal_12853 = -1;
	var uLocal_12854 = 0;
	var uLocal_12855 = 1;
	var uLocal_12856 = 0;
	var uLocal_12857 = 0;
	var uLocal_12858 = 0;
	var uLocal_12859 = 0;
	var uLocal_12860 = 0;
	var uLocal_12861 = 0;
	var uLocal_12862 = 0;
	var uLocal_12863 = 0;
	var uLocal_12864 = 0;
	var uLocal_12865 = 1065353216;
	var uLocal_12866 = 0;
	var uLocal_12867 = 0;
	var uLocal_12868 = 1065353216;
	var uLocal_12869 = 1;
	var uLocal_12870 = 0;
	var uLocal_12871 = 8;
	var uLocal_12872 = 0;
	var uLocal_12873 = 0;
	var uLocal_12874 = 0;
	var uLocal_12875 = 0;
	var uLocal_12876 = 0;
	var uLocal_12877 = 0;
	var uLocal_12878 = 0;
	var uLocal_12879 = 0;
	var uLocal_12880 = 0;
	var uLocal_12881 = 0;
	var uLocal_12882 = 0;
	var uLocal_12883 = 0;
	var uLocal_12884 = 0;
	var uLocal_12885 = 0;
	var uLocal_12886 = 0;
	var uLocal_12887 = 0;
	var uLocal_12888 = 0;
	var uLocal_12889 = 0;
	var uLocal_12890 = 0;
	var uLocal_12891 = 0;
	var uLocal_12892 = 0;
	var uLocal_12893 = 0;
	var uLocal_12894 = 0;
	var uLocal_12895 = 0;
	var uLocal_12896 = 0;
	var uLocal_12897 = 0;
	var uLocal_12898 = 0;
	var uLocal_12899 = 0;
	var uLocal_12900 = 0;
	var uLocal_12901 = 0;
	var uLocal_12902 = 0;
	var uLocal_12903 = 0;
	var uLocal_12904 = 0;
	var uLocal_12905 = 0;
	var uLocal_12906 = 0;
	var uLocal_12907 = 0;
	var uLocal_12908 = 0;
	var uLocal_12909 = 0;
	var uLocal_12910 = 0;
	var uLocal_12911 = 0;
	var uLocal_12912 = 0;
	var uLocal_12913 = 0;
	var uLocal_12914 = 0;
	var uLocal_12915 = 0;
	var uLocal_12916 = 0;
	var uLocal_12917 = 0;
	var uLocal_12918 = 0;
	var uLocal_12919 = 0;
	var uLocal_12920 = 0;
	var uLocal_12921 = 0;
	var uLocal_12922 = 0;
	var uLocal_12923 = 0;
	var uLocal_12924 = 0;
	var uLocal_12925 = 0;
	var uLocal_12926 = 0;
	var uLocal_12927 = 0;
	var uLocal_12928 = 0;
	var uLocal_12929 = 0;
	var uLocal_12930 = 0;
	var uLocal_12931 = 0;
	var uLocal_12932 = 0;
	var uLocal_12933 = 0;
	var uLocal_12934 = 0;
	var uLocal_12935 = 0;
	var uLocal_12936 = 0;
	var uLocal_12937 = 0;
	var uLocal_12938 = 0;
	var uLocal_12939 = 0;
	var uLocal_12940 = 0;
	var uLocal_12941 = 0;
	var uLocal_12942 = 0;
	var uLocal_12943 = 0;
	var uLocal_12944 = 0;
	var uLocal_12945 = 0;
	var uLocal_12946 = 0;
	var uLocal_12947 = 0;
	var uLocal_12948 = 0;
	var uLocal_12949 = 0;
	var uLocal_12950 = 0;
	var uLocal_12951 = 0;
	var uLocal_12952 = 0;
	var uLocal_12953 = 0;
	var uLocal_12954 = 0;
	var uLocal_12955 = 0;
	var uLocal_12956 = 0;
	var uLocal_12957 = 0;
	var uLocal_12958 = 0;
	var uLocal_12959 = 0;
	var uLocal_12960 = 0;
	var uLocal_12961 = 0;
	var uLocal_12962 = 0;
	var uLocal_12963 = 0;
	var uLocal_12964 = 0;
	var uLocal_12965 = 0;
	var uLocal_12966 = 0;
	var uLocal_12967 = 0;
	var uLocal_12968 = 0;
	var uLocal_12969 = 0;
	var uLocal_12970 = 0;
	var uLocal_12971 = 0;
	var uLocal_12972 = 0;
	var uLocal_12973 = 0;
	var uLocal_12974 = 0;
	var uLocal_12975 = 0;
	var uLocal_12976 = 0;
	var uLocal_12977 = 0;
	var uLocal_12978 = 0;
	var uLocal_12979 = 0;
	var uLocal_12980 = 0;
	var uLocal_12981 = 0;
	var uLocal_12982 = 0;
	var uLocal_12983 = 0;
	var uLocal_12984 = 0;
	var uLocal_12985 = 0;
	var uLocal_12986 = 0;
	var uLocal_12987 = 0;
	var uLocal_12988 = 0;
	var uLocal_12989 = 0;
	var uLocal_12990 = 0;
	var uLocal_12991 = 0;
	var uLocal_12992 = 0;
	var uLocal_12993 = 0;
	var uLocal_12994 = 0;
	var uLocal_12995 = 0;
	var uLocal_12996 = 0;
	var uLocal_12997 = 0;
	var uLocal_12998 = 0;
	var uLocal_12999 = 0;
	var uLocal_13000 = 0;
	var uLocal_13001 = 0;
	var uLocal_13002 = 0;
	var uLocal_13003 = 0;
	var uLocal_13004 = 0;
	var uLocal_13005 = 0;
	var uLocal_13006 = 0;
	var uLocal_13007 = 0;
	var uLocal_13008 = 0;
	var uLocal_13009 = 0;
	var uLocal_13010 = 0;
	var uLocal_13011 = 0;
	var uLocal_13012 = 0;
	var uLocal_13013 = 0;
	var uLocal_13014 = 0;
	var uLocal_13015 = 0;
	var uLocal_13016 = 0;
	var uLocal_13017 = 0;
	var uLocal_13018 = 0;
	var uLocal_13019 = 0;
	var uLocal_13020 = 0;
	var uLocal_13021 = 0;
	var uLocal_13022 = 0;
	var uLocal_13023 = 0;
	var uLocal_13024 = 0;
	var uLocal_13025 = 0;
	var uLocal_13026 = 0;
	var uLocal_13027 = 0;
	var uLocal_13028 = 0;
	var uLocal_13029 = 0;
	var uLocal_13030 = 0;
	var uLocal_13031 = 0;
	var uLocal_13032 = 0;
	var uLocal_13033 = 0;
	var uLocal_13034 = 0;
	var uLocal_13035 = 0;
	var uLocal_13036 = 0;
	var uLocal_13037 = 0;
	var uLocal_13038 = 0;
	var uLocal_13039 = 0;
	var uLocal_13040 = 0;
	var uLocal_13041 = 0;
	var uLocal_13042 = 0;
	var uLocal_13043 = 0;
	var uLocal_13044 = 0;
	var uLocal_13045 = 0;
	var uLocal_13046 = 0;
	var uLocal_13047 = 0;
	var uLocal_13048 = 0;
	var uLocal_13049 = 0;
	var uLocal_13050 = 0;
	var uLocal_13051 = 0;
	var uLocal_13052 = 0;
	var uLocal_13053 = 0;
	var uLocal_13054 = 0;
	var uLocal_13055 = 0;
	var uLocal_13056 = 0;
	var uLocal_13057 = 0;
	var uLocal_13058 = 0;
	var uLocal_13059 = 0;
	var uLocal_13060 = 0;
	var uLocal_13061 = 0;
	var uLocal_13062 = 0;
	var uLocal_13063 = 0;
	var uLocal_13064 = 0;
	var uLocal_13065 = 0;
	var uLocal_13066 = 0;
	var uLocal_13067 = 0;
	var uLocal_13068 = 0;
	var uLocal_13069 = 0;
	var uLocal_13070 = 0;
	var uLocal_13071 = 0;
	var uLocal_13072 = 0;
	var uLocal_13073 = 0;
	var uLocal_13074 = 0;
	var uLocal_13075 = 0;
	var uLocal_13076 = 0;
	var uLocal_13077 = 0;
	var uLocal_13078 = 0;
	var uLocal_13079 = 0;
	var uLocal_13080 = 0;
	var uLocal_13081 = 0;
	var uLocal_13082 = 0;
	var uLocal_13083 = 0;
	var uLocal_13084 = 0;
	var uLocal_13085 = 0;
	var uLocal_13086 = 0;
	var uLocal_13087 = 0;
	var uLocal_13088 = 0;
	var uLocal_13089 = 0;
	var uLocal_13090 = 0;
	var uLocal_13091 = 0;
	var uLocal_13092 = 0;
	var uLocal_13093 = 0;
	var uLocal_13094 = 0;
	var uLocal_13095 = 0;
	var uLocal_13096 = 0;
	var uLocal_13097 = 0;
	var uLocal_13098 = 0;
	var uLocal_13099 = 0;
	var uLocal_13100 = 0;
	var uLocal_13101 = 0;
	var uLocal_13102 = 0;
	var uLocal_13103 = 0;
	var uLocal_13104 = 0;
	var uLocal_13105 = 0;
	var uLocal_13106 = 0;
	var uLocal_13107 = 0;
	var uLocal_13108 = 0;
	var uLocal_13109 = 0;
	var uLocal_13110 = 0;
	var uLocal_13111 = 0;
	var uLocal_13112 = 0;
	var uLocal_13113 = 0;
	var uLocal_13114 = 0;
	var uLocal_13115 = 0;
	var uLocal_13116 = 0;
	var uLocal_13117 = 0;
	var uLocal_13118 = 0;
	var uLocal_13119 = 0;
	var uLocal_13120 = 0;
	var uLocal_13121 = 0;
	var uLocal_13122 = 0;
	var uLocal_13123 = 0;
	var uLocal_13124 = 0;
	var uLocal_13125 = 0;
	var uLocal_13126 = 0;
	var uLocal_13127 = 0;
	var uLocal_13128 = 0;
	var uLocal_13129 = 0;
	var uLocal_13130 = 0;
	var uLocal_13131 = 0;
	var uLocal_13132 = 0;
	var uLocal_13133 = 0;
	var uLocal_13134 = 0;
	var uLocal_13135 = 0;
	var uLocal_13136 = 0;
	var uLocal_13137 = 0;
	var uLocal_13138 = 0;
	var uLocal_13139 = 0;
	var uLocal_13140 = 0;
	var uLocal_13141 = 0;
	var uLocal_13142 = 0;
	var uLocal_13143 = 0;
	var uLocal_13144 = 0;
	var uLocal_13145 = 0;
	var uLocal_13146 = 0;
	var uLocal_13147 = 0;
	var uLocal_13148 = 0;
	var uLocal_13149 = 0;
	var uLocal_13150 = 0;
	var uLocal_13151 = 0;
	var uLocal_13152 = 0;
	var uLocal_13153 = 0;
	var uLocal_13154 = 0;
	var uLocal_13155 = 0;
	var uLocal_13156 = 0;
	var uLocal_13157 = 0;
	var uLocal_13158 = 0;
	var uLocal_13159 = 0;
	var uLocal_13160 = 0;
	var uLocal_13161 = 0;
	var uLocal_13162 = 0;
	var uLocal_13163 = 0;
	var uLocal_13164 = 0;
	var uLocal_13165 = 0;
	var uLocal_13166 = 0;
	var uLocal_13167 = 0;
	var uLocal_13168 = 0;
	var uLocal_13169 = 0;
	var uLocal_13170 = 0;
	var uLocal_13171 = 0;
	var uLocal_13172 = 0;
	var uLocal_13173 = 0;
	var uLocal_13174 = 0;
	var uLocal_13175 = 0;
	var uLocal_13176 = 0;
	var uLocal_13177 = 0;
	var uLocal_13178 = 0;
	var uLocal_13179 = 0;
	var uLocal_13180 = 0;
	var uLocal_13181 = 0;
	var uLocal_13182 = 0;
	var uLocal_13183 = 0;
	var uLocal_13184 = 0;
	var uLocal_13185 = 0;
	var uLocal_13186 = 0;
	var uLocal_13187 = 0;
	var uLocal_13188 = 0;
	var uLocal_13189 = 0;
	var uLocal_13190 = 0;
	var uLocal_13191 = 0;
	var uLocal_13192 = 0;
	var uLocal_13193 = 0;
	var uLocal_13194 = 0;
	var uLocal_13195 = 0;
	var uLocal_13196 = 0;
	var uLocal_13197 = 0;
	var uLocal_13198 = 0;
	var uLocal_13199 = 0;
	var uLocal_13200 = 8;
	var uLocal_13201 = 0;
	var uLocal_13202 = 0;
	var uLocal_13203 = 0;
	var uLocal_13204 = 0;
	var uLocal_13205 = 0;
	var uLocal_13206 = 0;
	var uLocal_13207 = 0;
	var uLocal_13208 = 0;
	var uLocal_13209 = 0;
	var uLocal_13210 = 0;
	var uLocal_13211 = 0;
	var uLocal_13212 = 0;
	var uLocal_13213 = 0;
	var uLocal_13214 = 0;
	var uLocal_13215 = 0;
	var uLocal_13216 = 0;
	var uLocal_13217 = 0;
	var uLocal_13218 = 0;
	var uLocal_13219 = 0;
	var uLocal_13220 = 0;
	var uLocal_13221 = -1;
	var uLocal_13222 = 0;
	var uLocal_13223 = 0;
	var uLocal_13224 = 0;
	var uLocal_13225 = 0;
	var uLocal_13226 = 0;
	var uLocal_13227 = 0;
	var uLocal_13228 = 0;
	var uLocal_13229 = 0;
	var uLocal_13230 = 0;
	var uLocal_13231 = 0;
	var uLocal_13232 = 0;
	var uLocal_13233 = 0;
	var uLocal_13234 = 0;
	var uLocal_13235 = 0;
	var uLocal_13236 = 0;
	var uLocal_13237 = 0;
	var uLocal_13238 = 0;
	var uLocal_13239 = 0;
	var uLocal_13240 = 0;
	var uLocal_13241 = 0;
	var uLocal_13242 = 0;
	var uLocal_13243 = -1;
	var uLocal_13244 = 0;
	var uLocal_13245 = 0;
	var uLocal_13246 = 0;
	var uLocal_13247 = 0;
	var uLocal_13248 = 0;
	var uLocal_13249 = 0;
	var uLocal_13250 = 0;
	var uLocal_13251 = 0;
	var uLocal_13252 = 0;
	var uLocal_13253 = 0;
	var uLocal_13254 = 0;
	var uLocal_13255 = 0;
	var uLocal_13256 = 0;
	var uLocal_13257 = 0;
	var uLocal_13258 = 0;
	var uLocal_13259 = 0;
	var uLocal_13260 = 0;
	var uLocal_13261 = 0;
	var uLocal_13262 = 0;
	var uLocal_13263 = 0;
	var uLocal_13264 = 0;
	var uLocal_13265 = -1;
	var uLocal_13266 = 0;
	var uLocal_13267 = 0;
	var uLocal_13268 = 0;
	var uLocal_13269 = 0;
	var uLocal_13270 = 0;
	var uLocal_13271 = 0;
	var uLocal_13272 = 0;
	var uLocal_13273 = 0;
	var uLocal_13274 = 0;
	var uLocal_13275 = 0;
	var uLocal_13276 = 0;
	var uLocal_13277 = 0;
	var uLocal_13278 = 0;
	var uLocal_13279 = 0;
	var uLocal_13280 = 0;
	var uLocal_13281 = 0;
	var uLocal_13282 = 0;
	var uLocal_13283 = 0;
	var uLocal_13284 = 0;
	var uLocal_13285 = 0;
	var uLocal_13286 = 0;
	var uLocal_13287 = -1;
	var uLocal_13288 = 0;
	var uLocal_13289 = 0;
	var uLocal_13290 = 0;
	var uLocal_13291 = 0;
	var uLocal_13292 = 0;
	var uLocal_13293 = 0;
	var uLocal_13294 = 0;
	var uLocal_13295 = 0;
	var uLocal_13296 = 0;
	var uLocal_13297 = 0;
	var uLocal_13298 = 0;
	var uLocal_13299 = 0;
	var uLocal_13300 = 0;
	var uLocal_13301 = 0;
	var uLocal_13302 = 0;
	var uLocal_13303 = 0;
	var uLocal_13304 = 0;
	var uLocal_13305 = 0;
	var uLocal_13306 = 0;
	var uLocal_13307 = 0;
	var uLocal_13308 = 0;
	var uLocal_13309 = -1;
	var uLocal_13310 = 0;
	var uLocal_13311 = 0;
	var uLocal_13312 = 0;
	var uLocal_13313 = 0;
	var uLocal_13314 = 0;
	var uLocal_13315 = 0;
	var uLocal_13316 = 0;
	var uLocal_13317 = 0;
	var uLocal_13318 = 0;
	var uLocal_13319 = 0;
	var uLocal_13320 = 0;
	var uLocal_13321 = 0;
	var uLocal_13322 = 0;
	var uLocal_13323 = 0;
	var uLocal_13324 = 0;
	var uLocal_13325 = 0;
	var uLocal_13326 = 0;
	var uLocal_13327 = 0;
	var uLocal_13328 = 0;
	var uLocal_13329 = 0;
	var uLocal_13330 = 0;
	var uLocal_13331 = -1;
	var uLocal_13332 = 0;
	var uLocal_13333 = 0;
	var uLocal_13334 = 0;
	var uLocal_13335 = 0;
	var uLocal_13336 = 0;
	var uLocal_13337 = 0;
	var uLocal_13338 = 0;
	var uLocal_13339 = 0;
	var uLocal_13340 = 0;
	var uLocal_13341 = 0;
	var uLocal_13342 = 0;
	var uLocal_13343 = 0;
	var uLocal_13344 = 0;
	var uLocal_13345 = 0;
	var uLocal_13346 = 0;
	var uLocal_13347 = 0;
	var uLocal_13348 = 0;
	var uLocal_13349 = 0;
	var uLocal_13350 = 0;
	var uLocal_13351 = 0;
	var uLocal_13352 = 0;
	var uLocal_13353 = -1;
	var uLocal_13354 = 0;
	var uLocal_13355 = 0;
	var uLocal_13356 = 0;
	var uLocal_13357 = 0;
	var uLocal_13358 = 0;
	var uLocal_13359 = 0;
	var uLocal_13360 = 0;
	var uLocal_13361 = 0;
	var uLocal_13362 = 0;
	var uLocal_13363 = 0;
	var uLocal_13364 = 0;
	var uLocal_13365 = 0;
	var uLocal_13366 = 0;
	var uLocal_13367 = 0;
	var uLocal_13368 = 0;
	var uLocal_13369 = 0;
	var uLocal_13370 = 0;
	var uLocal_13371 = 0;
	var uLocal_13372 = 0;
	var uLocal_13373 = 0;
	var uLocal_13374 = 0;
	var uLocal_13375 = -1;
	var uLocal_13376 = 0;
	var uLocal_13377 = 11;
	var uLocal_13378 = 0;
	var uLocal_13379 = 0;
	var uLocal_13380 = 0;
	var uLocal_13381 = 0;
	var uLocal_13382 = 0;
	var uLocal_13383 = 0;
	var uLocal_13384 = 0;
	var uLocal_13385 = 0;
	var uLocal_13386 = 0;
	var uLocal_13387 = 0;
	var uLocal_13388 = 0;
	var uLocal_13389 = 0;
	var uLocal_13390 = 0;
	var uLocal_13391 = 0;
	var uLocal_13392 = 0;
	var uLocal_13393 = 0;
	var uLocal_13394 = 0;
	var uLocal_13395 = 0;
	var uLocal_13396 = 0;
	var uLocal_13397 = 0;
	var uLocal_13398 = 0;
	var uLocal_13399 = 0;
	var uLocal_13400 = 0;
	var uLocal_13401 = 0;
	var uLocal_13402 = 0;
	var uLocal_13403 = 0;
	var uLocal_13404 = 0;
	var uLocal_13405 = 0;
	var uLocal_13406 = 0;
	var uLocal_13407 = 0;
	var uLocal_13408 = 0;
	var uLocal_13409 = 0;
	var uLocal_13410 = 0;
	var uLocal_13411 = 0;
	var uLocal_13412 = 0;
	var uLocal_13413 = 0;
	var uLocal_13414 = 0;
	var uLocal_13415 = 0;
	var uLocal_13416 = 0;
	var uLocal_13417 = 0;
	var uLocal_13418 = 0;
	var uLocal_13419 = 0;
	var uLocal_13420 = 0;
	var uLocal_13421 = 0;
	var uLocal_13422 = 0;
	var uLocal_13423 = 0;
	var uLocal_13424 = 0;
	var uLocal_13425 = 0;
	var uLocal_13426 = 0;
	var uLocal_13427 = 0;
	var uLocal_13428 = 0;
	var uLocal_13429 = 0;
	var uLocal_13430 = 0;
	var uLocal_13431 = 0;
	var uLocal_13432 = 0;
	var uLocal_13433 = 0;
	var uLocal_13434 = 0;
	var uLocal_13435 = 0;
	var uLocal_13436 = 0;
	var uLocal_13437 = 0;
	var uLocal_13438 = 0;
	var uLocal_13439 = 0;
	var uLocal_13440 = 0;
	var uLocal_13441 = 0;
	var uLocal_13442 = 0;
	var uLocal_13443 = 0;
	var uLocal_13444 = 0;
	var uLocal_13445 = 0;
	var uLocal_13446 = 0;
	var uLocal_13447 = 0;
	var uLocal_13448 = 0;
	var uLocal_13449 = 0;
	var uLocal_13450 = 0;
	var uLocal_13451 = 0;
	var uLocal_13452 = 0;
	var uLocal_13453 = 0;
	var uLocal_13454 = 0;
	var uLocal_13455 = 0;
	var uLocal_13456 = 0;
	var uLocal_13457 = 0;
	var uLocal_13458 = 0;
	var uLocal_13459 = 0;
	var uLocal_13460 = 0;
	var uLocal_13461 = 0;
	var uLocal_13462 = 0;
	var uLocal_13463 = 0;
	var uLocal_13464 = 0;
	var uLocal_13465 = 0;
	var uLocal_13466 = 0;
	var uLocal_13467 = 0;
	var uLocal_13468 = 0;
	var uLocal_13469 = 0;
	var uLocal_13470 = 0;
	var uLocal_13471 = 0;
	var uLocal_13472 = 0;
	var uLocal_13473 = 0;
	var uLocal_13474 = 0;
	var uLocal_13475 = 0;
	var uLocal_13476 = 0;
	var uLocal_13477 = 0;
	var uLocal_13478 = 0;
	var uLocal_13479 = 0;
	var uLocal_13480 = 0;
	var uLocal_13481 = 0;
	var uLocal_13482 = 0;
	var uLocal_13483 = 0;
	var uLocal_13484 = 0;
	var uLocal_13485 = 0;
	var uLocal_13486 = 0;
	var uLocal_13487 = 0;
	var uLocal_13488 = 2;
	var uLocal_13489 = 0;
	var uLocal_13490 = 0;
	var uLocal_13491 = 0;
	var uLocal_13492 = 0;
	var uLocal_13493 = 0;
	var uLocal_13494 = 0;
	var uLocal_13495 = 0;
	var uLocal_13496 = 0;
	var uLocal_13497 = 0;
	var uLocal_13498 = 0;
	var uLocal_13499 = 0;
	var uLocal_13500 = 0;
	var uLocal_13501 = 0;
	var uLocal_13502 = 0;
	var uLocal_13503 = 0;
	var uLocal_13504 = 0;
	var uLocal_13505 = 0;
	var uLocal_13506 = 0;
	var uLocal_13507 = 0;
	var uLocal_13508 = 0;
	var uLocal_13509 = 0;
	var uLocal_13510 = 0;
	var uLocal_13511 = 0;
	var uLocal_13512 = 0;
	var uLocal_13513 = 0;
	var uLocal_13514 = 0;
	var uLocal_13515 = 0;
	var uLocal_13516 = 0;
	var uLocal_13517 = 0;
	var uLocal_13518 = 0;
	var uLocal_13519 = 0;
	var uLocal_13520 = 0;
	var uLocal_13521 = 0;
	var uLocal_13522 = 0;
	var uLocal_13523 = 2;
	var uLocal_13524 = 0;
	var uLocal_13525 = 0;
	var uLocal_13526 = 0;
	var uLocal_13527 = 0;
	var uLocal_13528 = 0;
	var uLocal_13529 = 0;
	var uLocal_13530 = 0;
	var uLocal_13531 = 0;
	var uLocal_13532 = 0;
	var uLocal_13533 = 0;
	var uLocal_13534 = 0;
	var uLocal_13535 = 0;
	var uLocal_13536 = 0;
	var uLocal_13537 = 0;
	var uLocal_13538 = 0;
	var uLocal_13539 = 0;
	var uLocal_13540 = -1;
	var uLocal_13541 = 0;
	var uLocal_13542 = 0;
	var uLocal_13543 = -1;
	var uLocal_13544 = -1082130432;
	var uLocal_13545 = 0;
	var uLocal_13546 = 0;
	var uLocal_13547 = 0;
	var uLocal_13548 = 0;
	var uLocal_13549 = 0;
	var uLocal_13550 = 0;
	var uLocal_13551 = 0;
	var uLocal_13552 = 0;
	var uLocal_13553 = 0;
	var uLocal_13554 = 0;
	var uLocal_13555 = 0;
	var uLocal_13556 = 0;
	var uLocal_13557 = 0;
	var uLocal_13558 = 0;
	var uLocal_13559 = 0;
	var uLocal_13560 = 0;
	var uLocal_13561 = 0;
	var uLocal_13562 = 0;
	var uLocal_13563 = 0;
	var uLocal_13564 = 0;
	var uLocal_13565 = 0;
	var uLocal_13566 = 0;
	var uLocal_13567 = 0;
	var uLocal_13568 = 0;
	var uLocal_13569 = 0;
	var uLocal_13570 = 0;
	var uLocal_13571 = 0;
	var uLocal_13572 = 0;
	var uLocal_13573 = 0;
	var uLocal_13574 = 0;
	var uLocal_13575 = 0;
	var uLocal_13576 = 0;
	var uLocal_13577 = 0;
	var uLocal_13578 = 0;
	var uLocal_13579 = 0;
	var uLocal_13580 = 0;
	var uLocal_13581 = 0;
	var uLocal_13582 = 0;
	var uLocal_13583 = 0;
	var uLocal_13584 = 0;
	var uLocal_13585 = 0;
	var uLocal_13586 = 0;
	var uLocal_13587 = 0;
	var uLocal_13588 = 0;
	var uLocal_13589 = 0;
	var uLocal_13590 = 0;
	var uLocal_13591 = 0;
	var uLocal_13592 = 0;
	var uLocal_13593 = 0;
	var uLocal_13594 = 0;
	var uLocal_13595 = 0;
	var uLocal_13596 = 0;
	var uLocal_13597 = 0;
	var uLocal_13598 = 0;
	var uLocal_13599 = 0;
	var uLocal_13600 = 0;
	var uLocal_13601 = 0;
	var uLocal_13602 = 0;
	var uLocal_13603 = 0;
	var uLocal_13604 = 0;
	var uLocal_13605 = 0;
	var uLocal_13606 = 0;
	var uLocal_13607 = 0;
	var uLocal_13608 = 0;
	var uLocal_13609 = 0;
	var uLocal_13610 = 0;
	var uLocal_13611 = 0;
	var uLocal_13612 = 0;
	var uLocal_13613 = 0;
	var uLocal_13614 = 0;
	var uLocal_13615 = 0;
	var uLocal_13616 = 0;
	var uLocal_13617 = 0;
	var uLocal_13618 = 0;
	var uLocal_13619 = 0;
	var uLocal_13620 = 0;
	var uLocal_13621 = 0;
	var uLocal_13622 = 0;
	var uLocal_13623 = 0;
	var uLocal_13624 = 0;
	var uLocal_13625 = 0;
	var uLocal_13626 = 24;
	var uLocal_13627 = 0;
	var uLocal_13628 = 0;
	var uLocal_13629 = 0;
	var uLocal_13630 = 0;
	var uLocal_13631 = 0;
	var uLocal_13632 = 0;
	var uLocal_13633 = 0;
	var uLocal_13634 = 0;
	var uLocal_13635 = 0;
	var uLocal_13636 = 0;
	var uLocal_13637 = 0;
	var uLocal_13638 = 0;
	var uLocal_13639 = 0;
	var uLocal_13640 = 0;
	var uLocal_13641 = 0;
	var uLocal_13642 = 0;
	var uLocal_13643 = 0;
	var uLocal_13644 = 0;
	var uLocal_13645 = 0;
	var uLocal_13646 = 0;
	var uLocal_13647 = 0;
	var uLocal_13648 = 0;
	var uLocal_13649 = 0;
	var uLocal_13650 = 0;
	var uLocal_13651 = 0;
	var uLocal_13652 = 0;
	var uLocal_13653 = 0;
	var uLocal_13654 = 0;
	var uLocal_13655 = 0;
	var uLocal_13656 = 0;
	var uLocal_13657 = 0;
	var uLocal_13658 = 0;
	var uLocal_13659 = 0;
	var uLocal_13660 = 0;
	var uLocal_13661 = 0;
	var uLocal_13662 = 0;
	var uLocal_13663 = 0;
	var uLocal_13664 = 0;
	var uLocal_13665 = 0;
	var uLocal_13666 = 0;
	var uLocal_13667 = 0;
	var uLocal_13668 = 0;
	var uLocal_13669 = 0;
	var uLocal_13670 = 0;
	var uLocal_13671 = 0;
	var uLocal_13672 = 0;
	var uLocal_13673 = 0;
	var uLocal_13674 = 0;
	var uLocal_13675 = 0;
	var uLocal_13676 = 0;
	var uLocal_13677 = 0;
	var uLocal_13678 = 0;
	var uLocal_13679 = 0;
	var uLocal_13680 = 0;
	var uLocal_13681 = 0;
	var uLocal_13682 = 0;
	var uLocal_13683 = 0;
	var uLocal_13684 = 0;
	var uLocal_13685 = 0;
	var uLocal_13686 = 0;
	var uLocal_13687 = 0;
	var uLocal_13688 = 0;
	var uLocal_13689 = 0;
	var uLocal_13690 = 0;
	var uLocal_13691 = 0;
	var uLocal_13692 = 0;
	var uLocal_13693 = 0;
	var uLocal_13694 = 0;
	var uLocal_13695 = 0;
	var uLocal_13696 = 0;
	var uLocal_13697 = 0;
	var uLocal_13698 = 0;
	var uLocal_13699 = 0;
	var uLocal_13700 = 0;
	var uLocal_13701 = 0;
	var uLocal_13702 = 0;
	var uLocal_13703 = 0;
	var uLocal_13704 = 0;
	var uLocal_13705 = 0;
	var uLocal_13706 = 0;
	var uLocal_13707 = 0;
	var uLocal_13708 = 0;
	var uLocal_13709 = 0;
	var uLocal_13710 = 0;
	var uLocal_13711 = 0;
	var uLocal_13712 = 0;
	var uLocal_13713 = 0;
	var uLocal_13714 = 0;
	var uLocal_13715 = 0;
	var uLocal_13716 = 0;
	var uLocal_13717 = 0;
	var uLocal_13718 = 0;
	var uLocal_13719 = 0;
	var uLocal_13720 = 0;
	var uLocal_13721 = 0;
	var uLocal_13722 = 0;
	var uLocal_13723 = 0;
	var uLocal_13724 = 0;
	var uLocal_13725 = 0;
	var uLocal_13726 = 0;
	var uLocal_13727 = 0;
	var uLocal_13728 = 0;
	var uLocal_13729 = 0;
	var uLocal_13730 = 0;
	var uLocal_13731 = 0;
	var uLocal_13732 = 0;
	var uLocal_13733 = 0;
	var uLocal_13734 = 0;
	var uLocal_13735 = 0;
	var uLocal_13736 = 0;
	var uLocal_13737 = 0;
	var uLocal_13738 = 0;
	var uLocal_13739 = 0;
	var uLocal_13740 = 0;
	var uLocal_13741 = 0;
	var uLocal_13742 = 0;
	var uLocal_13743 = 0;
	var uLocal_13744 = 0;
	var uLocal_13745 = 0;
	var uLocal_13746 = 0;
	var uLocal_13747 = 0;
	var uLocal_13748 = 0;
	var uLocal_13749 = 0;
	var uLocal_13750 = -1;
	var uLocal_13751 = 0;
	var uLocal_13752 = 0;
	var uLocal_13753 = 0;
	var uLocal_13754 = 0;
	var uLocal_13755 = 0;
	var uLocal_13756 = 0;
	var uLocal_13757 = 0;
	var uLocal_13758 = 0;
	var uLocal_13759 = 0;
	var uLocal_13760 = 0;
	var uLocal_13761 = 0;
	var uLocal_13762 = 0;
	var uLocal_13763 = 0;
	var uLocal_13764 = 0;
	var uLocal_13765 = 0;
	var uLocal_13766 = 0;
	var uLocal_13767 = 0;
	var uLocal_13768 = 0;
	var uLocal_13769 = 0;
	var uLocal_13770 = 0;
	var uLocal_13771 = 0;
	var uLocal_13772 = 0;
	var uLocal_13773 = 0;
	var uLocal_13774 = 0;
	var uLocal_13775 = 0;
	var uLocal_13776 = 0;
	var uLocal_13777 = -1;
	var uLocal_13778 = 20;
	var uLocal_13779 = 0;
	var uLocal_13780 = 0;
	var uLocal_13781 = 0;
	var uLocal_13782 = 0;
	var uLocal_13783 = 0;
	var uLocal_13784 = 0;
	var uLocal_13785 = 0;
	var uLocal_13786 = 0;
	var uLocal_13787 = 0;
	var uLocal_13788 = 0;
	var uLocal_13789 = 0;
	var uLocal_13790 = 0;
	var uLocal_13791 = 0;
	var uLocal_13792 = 0;
	var uLocal_13793 = 0;
	var uLocal_13794 = 0;
	var uLocal_13795 = 0;
	var uLocal_13796 = 0;
	var uLocal_13797 = 0;
	var uLocal_13798 = 0;
	var uLocal_13799 = 0;
	var uLocal_13800 = 0;
	var uLocal_13801 = 0;
	var uLocal_13802 = 0;
	var uLocal_13803 = 0;
	var uLocal_13804 = 0;
	var uLocal_13805 = 0;
	var uLocal_13806 = 1028443341;
	var uLocal_13807 = 1038174126;
	var uLocal_13808 = 1065353216;
	var uLocal_13809 = 1065353216;
	var uLocal_13810 = 1086324736;
	var uLocal_13811 = 1082130432;
	var uLocal_13812 = 1073741824;
	var uLocal_13813 = 1065353216;
	var uLocal_13814 = 1108082688;
	var uLocal_13815 = 1108082688;
	var uLocal_13816 = 3000;
	var uLocal_13817 = 1092616192;
	var uLocal_13818 = 0;
	var uLocal_13819 = 0;
	var uLocal_13820 = 0;
	var uLocal_13821 = 0;
	var uLocal_13822 = 0;
	var uLocal_13823 = 0;
	var uLocal_13824 = 0;
	var uLocal_13825 = 0;
	var uLocal_13826 = 0;
	var uLocal_13827 = 0;
	var uLocal_13828 = 0;
	var uLocal_13829 = 0;
	var uLocal_13830 = 0;
	var uLocal_13831 = 0;
	var uLocal_13832 = 0;
	var uLocal_13833 = 0;
	var uLocal_13834 = 0;
	var uLocal_13835 = 0;
	var uLocal_13836 = 0;
	var uLocal_13837 = 0;
	var uLocal_13838 = 0;
	var uLocal_13839 = 0;
	var uLocal_13840 = 0;
	var uLocal_13841 = 0;
	var uLocal_13842 = 0;
	var uLocal_13843 = 0;
	var uLocal_13844 = 0;
	var uLocal_13845 = 0;
	var uLocal_13846 = 0;
	var uLocal_13847 = 0;
	var uLocal_13848 = 0;
	var uLocal_13849 = 0;
	var uLocal_13850 = 0;
	var uLocal_13851 = 0;
	var uLocal_13852 = -1;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_50 = 1;
	iLocal_51 = 2;
	iLocal_52 = 3;
	iLocal_53 = 4;
	iLocal_54 = 5;
	sLocal_140 = "trn3_nearhandcart";
	sLocal_141 = "train_3_assisted_route";
	sLocal_142 = "train_robbery3_outro";
	iLocal_153 = joaat("PG_TEAMSTER_WAGON02X_LIGHTUPGRADE1");
	sLocal_482 = "s_lev_des";
	sLocal_483 = "MECH_PICKUP@OBJECT";
	sLocal_484 = "AMB_CAMP@WORLD_CAMP_FIRE_CROUCH@TEND@MALE_A@stand_enter";
	sLocal_485 = "AMB_CAMP@WORLD_CAMP_FIRE_CROUCH@TEND@MALE_A@idle_a";
	sLocal_486 = "AMB_CAMP@WORLD_CAMP_FIRE_CROUCH@TEND@MALE_A@stand_exit";
	sLocal_487 = "mech_weapons_special@placed_dynamite@kneeling";
	sLocal_488 = "mech_weapons_special@placed_dynamite";
	sLocal_489 = "train_robbery3_AssistedRoute1";
	sLocal_490 = "train_robbery3_AssistedRoute2";
	bLocal_495 = true;
	iLocal_599 = 18;
	iLocal_610 = -1;
	vLocal_641 = { 1563.85f, 1811.65f, 208.1f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4642))
	{
		__LIB_4__::func_935(&uLocal_673, 1073741824 /* Float: 2f */);
		func_2(&uLocal_673, 1);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!__LIB_0__::func_382(64))
	{
		BUILTIN::WAIT(0);
	}
	func_4(&uScriptParam_0, &uLocal_673);
	func_5(&uLocal_673);
	while (!__LIB_4__::func_936(&uLocal_673, -2147483648))
	{
		func_7(&uLocal_673);
		BUILTIN::WAIT(0);
	}
	while (!func_2(&uLocal_673, 0))
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2(var uParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	struct<8> Var6;
	if (__LIB_4__::func_937(uParam0, 4096))
	{
		return true;
	}
	if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 4096)
	{
		func_9(uParam0);
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
		HUD::_DISPLAY_HUD_COMPONENT(1331687942);
		if (__LIB_0__::func_139(Global_43801))
		{
			__LIB_1__::func_281(&Global_43801, 1, 1);
		}
		UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
		MISC::_0x1096603B519C905F("");
		__LIB_1__::func_559(__LIB_3__::func_918(uParam0->f_607), 0, 2);
		__LIB_1__::func_140();
		__LIB_4__::func_716(1);
		__LIB_0__::func_722(1, 0);
		__LIB_5__::func_324(uParam0, 1);
		__LIB_1__::func_723(0);
		UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
		Global_36605 = 0;
		__LIB_5__::func_384(3);
		if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
		{
			TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), true);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (!bParam1)
	{
		if (!__LIB_4__::func_936(uParam0, 1048576))
		{
			if (__LIB_0__::func_2() == 0)
			{
				__LIB_1__::func_965(0);
			}
			else if (__LIB_4__::func_938(uParam0) != 0)
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					if (CAM::_0x1204EB53A5FBC63D())
					{
						return false;
					}
					if (__LIB_4__::func_938(uParam0) == 1 || __LIB_4__::func_938(uParam0) == 2)
					{
						if (__LIB_4__::func_505(&(uParam0->f_8269)) && __LIB_4__::func_506(&(uParam0->f_8269)))
						{
							__LIB_1__::func_582(0, &(uParam0->f_8269.f_1282));
						}
					}
					if (!__LIB_0__::func_75(&(uParam0->f_13118)))
					{
						__LIB_1__::func_283(&(uParam0->f_13118), 0);
					}
					bVar0 = CAM::_0x139EFB0A71DD9011();
					if (bVar0)
					{
						__LIB_4__::func_935(uParam0, 256);
					}
					bVar1 = CAM::_0x7CE9DC58E3E4755F();
					if (bVar1 && __LIB_4__::func_936(uParam0, 256))
					{
						CAM::_0x16E9ABDD34DDD931();
						CAM::DO_SCREEN_FADE_OUT(0);
					}
					else
					{
						if (((!bVar0 && !__LIB_5__::func_474(uParam0, bVar1)) && !__LIB_0__::func_91()) && !__LIB_4__::func_936(uParam0, 80))
						{
							if (!bVar1)
							{
								__LIB_5__::func_380(uParam0);
							}
							return false;
						}
						if (__LIB_4__::func_936(uParam0, 64))
						{
							CAM::_0x16E9ABDD34DDD931();
							CAM::DO_SCREEN_FADE_OUT(0);
						}
						else if (__LIB_4__::func_938(uParam0) == 2)
						{
							if (uParam0->f_13104 == -1)
							{
								if (__LIB_0__::func_0(uParam0))
								{
									uParam0->f_13104 = MISC::GET_GAME_TIMER();
								}
							}
							if ((uParam0->f_13104 != -1 && MISC::GET_GAME_TIMER() > uParam0->f_13104 + 4000) || bVar1)
							{
								CAM::_0x16E9ABDD34DDD931();
								CAM::DO_SCREEN_FADE_OUT(0);
							}
						}
						else if (__LIB_4__::func_938(uParam0) == 1)
						{
							if (__LIB_5__::func_474(uParam0, bVar1))
							{
								CAM::_0x16E9ABDD34DDD931();
								CAM::DO_SCREEN_FADE_OUT(0);
							}
						}
						else
						{
							CAM::_0x16E9ABDD34DDD931();
							CAM::DO_SCREEN_FADE_OUT(0);
						}
						CAM::IS_SCREEN_FADING_IN();
						if (!CAM::IS_SCREEN_FADED_OUT())
						{
							return false;
						}
					}
				}
			}
			else if (__LIB_4__::func_936(uParam0, 2))
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
					return false;
				}
				if (MISC::_0x1B065A2BF7953815(1) == 1)
				{
					return false;
				}
			}
			if (!__LIB_4__::func_678() && __LIB_4__::func_938(uParam0) != 0)
			{
				__LIB_5__::func_599(uParam0, func_34(__LIB_4__::func_939(uParam0)), func_34(__LIB_5__::func_475(uParam0)), __LIB_4__::func_939(uParam0), __LIB_5__::func_475(uParam0));
			}
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_7375.f_804))
	{
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_7375.f_804))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_7375.f_804);
		}
	}
	__LIB_4__::func_935(uParam0, 1048576);
	if (!__LIB_4__::func_936(uParam0, 2097152))
	{
		if (!func_9(uParam0))
		{
			return false;
		}
		__LIB_4__::func_935(uParam0, 2097152);
	}
	MISC::_0x1096603B519C905F("");
	STREAMING::CLEAR_FOCUS();
	if (MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_EXISTS())
	{
		MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_DELETE();
	}
	MISC::SET_TIME_SCALE(1f);
	__LIB_5__::func_325(&(uParam0->f_8269));
	if (__LIB_4__::func_505(&(uParam0->f_8269)))
	{
		__LIB_4__::func_507(&(uParam0->f_8269));
	}
	AUDIO::SET_GPS_ACTIVE(false);
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	VEHICLE::SET_RANDOM_TRAINS(false);
	__LIB_1__::func_600(1);
	__LIB_0__::func_267(1);
	LAW::_0xC5EB2755FA25F1E9(1);
	__LIB_0__::func_395(0);
	__LIB_4__::func_679();
	__LIB_5__::func_384(3);
	if (!__LIB_4__::func_936(uParam0, 8))
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
		HUD::_DISPLAY_HUD_COMPONENT(724769646);
	}
	__LIB_4__::func_716(1);
	__LIB_4__::func_782();
	__LIB_4__::func_680();
	HUD::SET_MISSION_NAME(false, 0);
	__LIB_0__::func_769();
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	CLOCK::PAUSE_CLOCK(false, 0);
	PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), 1f);
	PLAYER::_0x19B2C7A6C34FAD54(PLAYER::PLAYER_ID(), 1f);
	__LIB_4__::func_940(uParam0);
	__LIB_5__::func_20(1, 0);
	__LIB_0__::func_698(2);
	if (!Global_1935630.f_12)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
		PED::_0xAAC0EE3B4999ABB5(Global_35, 0);
		WEAPON::_0xB832F1A686B9B810(Global_35, __LIB_5__::func_21(), 0);
		PED::SET_PED_CONFIG_FLAG(Global_35, 308, false);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
		PED::_0xEAE3B5B019C8D23F(Global_35, 262143);
		__LIB_1__::func_733(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 170, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
	}
	if (PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0x12E09E278C6C29B7(PLAYER::GET_PLAYER_INDEX());
	}
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::GET_PLAYER_INDEX(), false);
	if (CAM::DOES_CAM_EXIST(uParam0->f_609.f_2))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(uParam0->f_609.f_2, false);
	}
	__LIB_5__::func_326(&(uParam0->f_10792));
	__LIB_4__::func_508();
	CAM::STOP_GAMEPLAY_HINT(true);
	__LIB_1__::func_600(1);
	__LIB_5__::func_327();
	if (__LIB_1__::func_652())
	{
		STREAMING::_0x2F9AC754FE179D58(0.3f);
	}
	__LIB_4__::func_845(0, 14);
	bVar2 = false;
	if (__LIB_4__::func_938(uParam0) == 0)
	{
		bVar2 = true;
	}
	else
	{
		__LIB_5__::func_328(uParam0);
	}
	__LIB_8__::func_945(uParam0, 0, !bVar2, bVar2);
	__LIB_5__::func_595(uParam0, !bVar2);
	__LIB_1__::func_721(0);
	__LIB_1__::func_721(1);
	PLAYER::_0xDF93973251FB2CA5(PLAYER::PLAYER_ID(), 1);
	__LIB_4__::func_509(0);
	__LIB_5__::func_329(__LIB_4__::func_941(uParam0));
	__LIB_5__::func_330(__LIB_4__::func_941(uParam0));
	__LIB_0__::func_868(0);
	__LIB_0__::func_869(0);
	__LIB_0__::func_11(__LIB_4__::func_938(uParam0));
	__LIB_5__::func_22(uParam0);
	if (!bVar2)
	{
		__LIB_0__::func_722(1, 0);
	}
	if (__LIB_4__::func_938(uParam0) != 1)
	{
		__LIB_5__::func_101(0, &(uParam0->f_8269.f_1282));
	}
	Global_43805 = -1;
	__LIB_1__::func_978(1);
	__LIB_1__::func_564(0);
	__LIB_0__::func_8(&Global_1935630, 2097152);
	__LIB_1__::func_723(0);
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
	if (__LIB_4__::func_938(uParam0) == 0)
	{
		__LIB_5__::func_370(Global_1835011[uParam0->f_607 /*74*/].f_1);
	}
	__LIB_5__::func_102();
	if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), true);
	}
	if (!bParam1)
	{
		switch (__LIB_4__::func_938(uParam0))
		{
			case 0:
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					if ((!CAM::IS_SCREEN_FADING_IN() && !__LIB_4__::func_936(uParam0, 4)) && !__LIB_4__::func_936(uParam0, 2))
					{
						CAM::DO_SCREEN_FADE_IN(1000);
					}
				}
				func_74(uParam0);
				__LIB_5__::func_503(uParam0);
				__LIB_0__::func_297();
				__LIB_5__::func_496(__LIB_0__::func_12(), 0);
				if (__LIB_0__::func_2() == 0)
				{
					__LIB_5__::func_103(0);
				}
				__LIB_5__::func_126(uParam0->f_607);
				bVar3 = __LIB_0__::func_513();
				if (!__LIB_0__::func_13(32768))
				{
					func_83(__LIB_3__::func_918(uParam0->f_607), !__LIB_4__::func_936(uParam0, 128), 1, bVar3, 1);
				}
				else
				{
					func_84(__LIB_3__::func_918(uParam0->f_607), bVar3);
				}
				__LIB_5__::func_324(uParam0, bParam1);
				if (uParam0->f_607 != 77)
				{
					UILOG::_UILOG_MARK_MISSION_COMPLETED(func_85(uParam0));
				}
				__LIB_1__::func_140();
				if (__LIB_0__::func_13(32768))
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					__LIB_6__::func_833();
					__LIB_1__::func_141(0);
				}
				else if (__LIB_4__::func_936(uParam0, 2))
				{
					if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
					__LIB_1__::func_954(1);
					__LIB_5__::func_116();
					__LIB_0__::func_320(6);
					__LIB_0__::func_319(4096);
				}
				break;
			case 1:
			case 2:
			case 3:
			case 6:
				__LIB_1__::func_645(__LIB_3__::func_918(uParam0->f_607));
				__LIB_8__::func_760();
				if (__LIB_4__::func_938(uParam0) == 2)
				{
					__LIB_0__::func_15(__LIB_0__::func_14(joaat("DEATHS_ON_CURRENT_DEED")), 1);
				}
				LAW::_0x55F37F5F3F2475E1();
				LAW::_0x062B4A4A3396351D(PLAYER::GET_PLAYER_INDEX());
				LAW::_0x07E8B8B20570271C(PLAYER::GET_PLAYER_INDEX());
				break;
			case 5:
				if (__LIB_0__::func_2() == 0)
				{
					__LIB_5__::func_103(0);
				}
				__LIB_8__::func_760();
				Var4 = { __LIB_0__::func_14(joaat("DEATHS_ON_CURRENT_DEED")) };
				STATS::_0x0FEE2561120F3333(&Var4);
				__LIB_1__::func_559(__LIB_3__::func_918(uParam0->f_607), 0, 2);
				break;
			default:
				func_83(__LIB_3__::func_918(uParam0->f_607), 1, 1, 0, 1);
				__LIB_1__::func_140();
				break;
		}
		if (__LIB_4__::func_938(uParam0) != 0)
		{
			Var6 = { __LIB_4__::func_943(uParam0) };
			__LIB_5__::func_117(__LIB_3__::func_918(uParam0->f_607), __LIB_4__::func_938(uParam0), &Var6, 0, 0, __LIB_4__::func_936(uParam0, 64));
		}
	}
	__LIB_4__::func_510(1);
	__LIB_5__::func_384(3);
	__LIB_4__::func_944(uParam0, 4096);
	return true;
}

void func_4(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	PED::_0xED9582B3DA8F02B4(20);
	uParam1->f_608 = uParam0->f_1;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	if (!__LIB_0__::func_2() == 0)
	{
		if (ITEMSET::IS_ITEMSET_VALID(Global_43616) && ITEMSET::GET_ITEMSET_SIZE(Global_43616) > 0)
		{
			iVar1 = 0;
			while (iVar1 < ITEMSET::GET_ITEMSET_SIZE(Global_43616))
			{
				iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, Global_43616);
				iVar3 = MISC::_GET_ENTITY_FROM_ITEM(iVar2);
				if (((!ENTITY::IS_ENTITY_DEAD(iVar3) && ENTITY::IS_ENTITY_A_PED(iVar3)) && !ITEMSET::IS_IN_ITEMSET(iVar2, iVar0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3) != Global_35)
				{
					ITEMSET::ADD_TO_ITEMSET(iVar2, iVar0);
				}
				iVar1++;
			}
		}
	}
	__LIB_5__::func_587(uParam1);
	if (!__LIB_0__::func_2() == 0)
	{
		if (__LIB_5__::func_23(uParam1) > 0)
		{
			iVar4 = 0;
			while (iVar4 < uParam1->f_7375.f_13)
			{
				if (((!ENTITY::IS_ENTITY_DEAD(uParam1->f_7375.f_13[iVar4 /*12*/]) && ENTITY::IS_ENTITY_A_PED(uParam1->f_7375.f_13[iVar4 /*12*/])) && !ITEMSET::IS_IN_ITEMSET(uParam1->f_7375.f_13[iVar4 /*12*/], iVar0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_7375.f_13[iVar4 /*12*/]) != Global_35)
				{
					ITEMSET::ADD_TO_ITEMSET(uParam1->f_7375.f_13[iVar4 /*12*/], iVar0);
				}
				iVar4++;
			}
		}
	}
	if (ITEMSET::GET_ITEMSET_SIZE(iVar0) > 0)
	{
		PED::_0xF008E0BA1FE1D644(ITEMSET::GET_ITEMSET_SIZE(iVar0));
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	if (__LIB_4__::func_511())
	{
		__LIB_4__::func_945(uParam1, 4194304);
	}
	if (__LIB_4__::func_512())
	{
		__LIB_4__::func_945(uParam1, 8388608);
	}
	if (__LIB_5__::func_371())
	{
		if (!__LIB_4__::func_512() && !__LIB_4__::func_511())
		{
			__LIB_4__::func_945(uParam1, 4);
		}
		else
		{
			if (__LIB_4__::func_512())
			{
			}
			if (__LIB_4__::func_511())
			{
			}
		}
		__LIB_4__::func_946(uParam1, __LIB_4__::func_513());
	}
	func_108(uParam1, uParam0);
	func_109(uParam1);
	if (uParam1->f_13105 > PED::_0x62DE46F061CAA468())
	{
		PED::_0xF008E0BA1FE1D644((uParam1->f_13105 - PED::_0x62DE46F061CAA468()));
	}
}

void func_5(var uParam0)
{
	char[] cVar0[8];
	int iVar1;
	struct<4> Var2;
	char[] cVar6[8];
	cVar0 = __LIB_0__::func_631(uParam0->f_607);
	HUD::SET_MISSION_NAME(true, &cVar0);
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	MISC::_0x1096603B519C905F(&cVar0);
	if (uParam0->f_607 != 77)
	{
		__LIB_0__::func_496();
		__LIB_1__::func_323(&cVar0, 0);
	}
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	__LIB_0__::func_105(1);
	__LIB_2__::func_459();
	MISC::_0xA565FAC215CBC77D();
	SCRIPTS::SHUTDOWN_LOADING_SCREEN();
	__LIB_0__::func_769();
	__LIB_0__::func_267(__LIB_4__::func_947(uParam0));
	LAW::_0x55F37F5F3F2475E1();
	LAW::_0x292AD61A33A7A485();
	if ((LAW::_0xF46108C50A22B029() && !Global_43891) && !__LIB_0__::func_730(__LIB_0__::func_12()))
	{
		POPULATION::_0x2161278C6322F740(16384, 0, 0, -1, -1, 0);
	}
	__LIB_0__::func_112(1, 0, 1);
	POPULATION::_0x2161278C6322F740(4096, 0, 0, -1, -1, 0);
	VEHICLE::DELETE_ALL_TRAINS();
	VEHICLE::SET_RANDOM_TRAINS(false);
	__LIB_1__::func_600(0);
	__LIB_4__::func_514(uParam0);
	AUDIO::_0x33D51F801CB16E4F();
	if (!Global_1935630.f_12)
	{
		__LIB_0__::func_145(0, 0);
		PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
		if (!__LIB_4__::func_948(uParam0, 16384) && (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2) || __LIB_5__::func_371()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
		}
		PED::CLEAR_PED_WETNESS(Global_35);
		PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
		GRAPHICS::REMOVE_PARTICLE_FX_FROM_ENTITY(Global_35);
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 0, false))
		{
			if ((((WEAPON::_0x2C83212A7AA51D3D(iVar1) || iVar1 == joaat("OBJECT_1")) || iVar1 == joaat("OBJECT_2")) || iVar1 == joaat("OBJECT_3")) || iVar1 == joaat("OBJECT_4"))
			{
				if (!__LIB_5__::func_371() && !__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2))
				{
				}
			}
			else if (!__LIB_0__::func_214(iVar1) && !__LIB_0__::func_13(32768))
			{
				WEAPON::REMOVE_WEAPON_FROM_PED(Global_35, iVar1, true, -142743235);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
			}
		}
		WEAPON::_0xB832F1A686B9B810(Global_35, false, 0);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
		func_123(uParam0);
	}
	__LIB_1__::func_564(1);
	__LIB_1__::func_600(0);
	__LIB_4__::func_949(uParam0, joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"));
	iLocal_26 = __LIB_4__::func_950(uParam0);
	iLocal_26 = iLocal_26;
	if (!Global_1935630.f_12)
	{
		if (!__LIB_5__::func_371())
		{
			Var2 = { func_34(__LIB_4__::func_939(uParam0)) };
			if (__LIB_4__::func_939(uParam0) != 0)
			{
				Var2 = { __LIB_1__::func_469(uParam0->f_607) };
			}
			if (!func_127(Var2))
			{
				__LIB_4__::func_945(uParam0, 1048576);
			}
			__LIB_4__::func_946(uParam0, 0);
			if (__LIB_4__::func_951(uParam0, 3) || __LIB_1__::func_195())
			{
				__LIB_5__::func_497(uParam0, __LIB_1__::func_469(uParam0->f_607), 0);
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true);
				__LIB_3__::func_618(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 5000f, 1, 0, 0, 0, 0);
			}
			__LIB_4__::func_946(uParam0, __LIB_4__::func_513());
		}
		TELEMETRY::_TELEMETRY_MISSION_STARTED(&(Global_1835011[uParam0->f_607 /*74*/].f_8), 0, __LIB_5__::func_24(__LIB_4__::func_939(uParam0)), __LIB_5__::func_371());
	}
	func_133(uParam0);
	__LIB_4__::func_952(uParam0, 0);
	__LIB_5__::func_372(uParam0, 0);
	if (!__LIB_5__::func_278(uParam0, __LIB_4__::func_939(uParam0)))
	{
		__LIB_4__::func_946(uParam0, 0);
	}
	__LIB_5__::func_333(uParam0);
	func_138(uParam0);
	func_139(uParam0);
	__LIB_4__::func_945(uParam0, 2097152);
	__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 134217728);
	if (__LIB_0__::func_13(32768))
	{
		__LIB_4__::func_935(uParam0, 4);
	}
	__LIB_17__::func_528(uParam0);
	__LIB_8__::func_935(uParam0, __LIB_4__::func_939(uParam0));
	__LIB_5__::func_105(__LIB_4__::func_941(uParam0));
	if (!__LIB_4__::func_948(uParam0, 65536))
	{
		__LIB_5__::func_178(__LIB_4__::func_941(uParam0));
	}
	__LIB_5__::func_106(uParam0, PLAYER::PLAYER_PED_ID(), "ARTHUR", 0);
	__LIB_5__::func_25(uParam0);
	__LIB_5__::func_373(uParam0);
	__LIB_0__::func_11(uParam0);
	__LIB_5__::func_26(uParam0, 30f);
	__LIB_5__::func_27(uParam0, 40f);
	__LIB_8__::func_806(uParam0, Global_35, 0, 0, 0, 0, 0);
	__LIB_4__::func_510(0);
	AUDIO::_0xA6A3A3F96B8B030E();
	__LIB_1__::func_723(1);
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
	if (uParam0->f_607 != 77)
	{
		cVar6 = __LIB_0__::func_631(uParam0->f_607);
		UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(1, MISC::GET_HASH_KEY(&cVar6), 0, "");
	}
	if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), false);
	}
}

void func_7(var uParam0)
{
	var uVar0;
	if ((LAW::_0xF46108C50A22B029() && !Global_43891) && !__LIB_0__::func_730(__LIB_0__::func_12()))
	{
		POPULATION::_0xF45E46DEECF7DF6E(16384, 0, 0, -1, -1);
	}
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 16384))
	{
		__LIB_4__::func_515();
	}
	if (!__LIB_4__::func_937(uParam0, 32768))
	{
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	}
	if (!__LIB_4__::func_937(uParam0, 2048))
	{
		__LIB_4__::func_516(1, 0);
	}
	switch (__LIB_0__::func_81(uParam0))
	{
		case -1:
			break;
		case 0:
			MemCopy(&uVar0, {__LIB_4__::func_681(__LIB_4__::func_941(uParam0))}, 4);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
			{
				__LIB_4__::func_945(uParam0, 64);
			}
			func_156(uParam0, 0);
			__LIB_0__::func_16(uParam0);
			if (func_158(uParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(__LIB_4__::func_953(uParam0)) && __LIB_4__::func_951(uParam0, 3))
				{
					ENTITY::FREEZE_ENTITY_POSITION(__LIB_4__::func_953(uParam0), false);
				}
				__LIB_0__::func_19(uParam0, 1);
			}
			if (__LIB_4__::func_936(uParam0, -2147483648))
			{
				__LIB_0__::func_19(uParam0, 2);
			}
			break;
		case 1:
			if (func_161(uParam0))
			{
				__LIB_4__::func_935(uParam0, -2147483648);
				__LIB_0__::func_19(uParam0, 2);
			}
			func_156(uParam0, __LIB_5__::func_279(uParam0, __LIB_4__::func_939(uParam0)) > 4);
			break;
		case 2:
			if (func_2(uParam0, 0))
			{
				__LIB_4__::func_935(uParam0, -2147483648);
				__LIB_0__::func_19(uParam0, 3);
			}
			break;
		case 3:
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
	if (__LIB_0__::func_81(uParam0) < 2)
	{
	}
}

bool func_9(var uParam0)
{
	int iVar0;
	int iVar1;
	func_163();
	PED::_0x3A50753042B6891B(Global_35, "P_CS_CRATETNT01X_PH_R_HAND");
	TASK::_0xFA30E2254461ADEB(Global_35, 0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_1__::func_281(&(Local_64[iVar0 /*9*/].f_8), 1, 1);
		if (ENTITY::DOES_ENTITY_EXIST(Local_64[iVar0 /*9*/]))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(Local_64[iVar0 /*9*/]))
			{
				__LIB_2__::func_919(Local_64[iVar0 /*9*/], 1, 1);
			}
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_64[iVar0 /*9*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_1__::func_281(&(Local_101[iVar0 /*4*/].f_2), 1, 1);
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_128))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_128, 441, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_128, 444, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_128, false);
		__LIB_2__::func_788(&iLocal_128, 0, 1, 1);
	}
	if (CAM::_0x927B810E43E99932(&Local_163))
	{
		CAM::_0x0A5A4F1979ABB40E(&Local_163);
	}
	CAM::STOP_GAMEPLAY_HINT(false);
	if (__LIB_4__::func_938(uParam0) == 0)
	{
		__LIB_8__::func_981(0, 1);
		__LIB_8__::func_981(1, 1);
		__LIB_8__::func_981(2, 1);
		__LIB_8__::func_981(3, 1);
	}
	__LIB_1__::func_600(1);
	if (__LIB_0__::func_272(Global_35, 0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
		}
		PED::SET_PED_CONFIG_FLAG(Global_35, 249, false);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		PED::_0xE0B61ED8BB37712F(Global_35);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_127))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_127, false))
		{
			PED::_0xE0B61ED8BB37712F(iLocal_127);
		}
	}
	PED::SET_PED_CAN_ARM_IK(iLocal_127, true);
	PED::SET_PED_CAN_ARM_IK(Global_35, true);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_122))
	{
		if (__LIB_4__::func_938(uParam0) == 0)
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_122);
		}
		else
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_122);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_124))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_124);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_571))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_571);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_125))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_125);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_6[0]))
	{
		OBJECT::DELETE_OBJECT(&(Local_14.f_6[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_6[1]))
	{
		OBJECT::DELETE_OBJECT(&(Local_14.f_6[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_121))
	{
		VEHICLE::DELETE_MISSION_TRAIN(&iLocal_121);
	}
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_141);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_129))
	{
		VOLUME::_DELETE_VOLUME(iLocal_129);
	}
	STREAMING::_REMOVE_IMAP(-437187151);
	STREAMING::_REMOVE_IMAP(1424964403);
	STREAMING::_REMOVE_IMAP(-163787010);
	STREAMING::_REMOVE_IMAP(-200959126);
	STREAMING::_REMOVE_IMAP(920612809);
	STREAMING::_REMOVE_IMAP(820079465);
	STREAMING::_REMOVE_IMAP(423891836);
	STREAMING::_REMOVE_IMAP(777001839);
	func_168(&iLocal_155);
	func_168(&iLocal_156);
	func_168(&iLocal_570);
	__LIB_0__::func_172(iLocal_620);
	VEHICLE::_0xE6C5E2125EB210C1(joaat("FREIGHT_GROUP"), 5, 0);
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(func_170(0, 0), 200f);
	__LIB_0__::func_484(&uLocal_134, Local_27.f_1, 0);
	MISC::_0x4D5C9CC7E7E23E09();
	__LIB_1__::func_281(&iLocal_152, 1, 1);
	func_172();
	__LIB_6__::func_416(0, 0, 1103626240 /* Float: 25f */);
	PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::PLAYER_ID(), 1);
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_130[iVar1]))
		{
			VOLUME::_DELETE_VOLUME(iLocal_130[iVar1]);
		}
		iVar1++;
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
	uParam0->f_607 = uParam0->f_607;
	return true;
}

struct<4> func_34(int iParam0)
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 0:
			__LIB_4__::func_954(&Var0, func_210(0, 0));
			break;
		case 1:
			__LIB_4__::func_954(&Var0, func_210(0, 2));
			break;
		case 2:
			__LIB_4__::func_954(&Var0, func_210(1, 0));
			break;
		case 3:
			__LIB_4__::func_954(&Var0, func_210(3, 0));
			break;
		case 4:
			__LIB_4__::func_954(&Var0, func_210(4, 0));
			break;
		case 5:
			Var0 = { 555.5364f, 1722.084f, 186.6291f };
			Var0.f_3 = 107.8706f;
			break;
		case 25:
			__LIB_4__::func_954(&Var0, func_210(6, 2));
			break;
		default:
			break;
	}
	iParam0 = iParam0;
	return Var0;
}

void func_74(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (__LIB_0__::func_2() == 0)
	{
		return;
	}
	iVar0 = __LIB_4__::func_939(uParam0);
	iVar1 = __LIB_5__::func_279(uParam0, iVar0);
	bVar2 = false;
	if (iVar1 == 5 || iVar1 == 6)
	{
		bVar2 = true;
	}
	iVar3 = 0;
	if (!bVar2)
	{
		if (__LIB_5__::func_253(uParam0) == 0 && iVar0 == 0)
		{
			iVar3 = 1;
		}
	}
	iVar4 = 0;
	if (!bVar2)
	{
		if (__LIB_4__::func_938(uParam0) == 0)
		{
			iVar4 = 1;
		}
	}
	if (iVar3 || iVar4)
	{
		__LIB_5__::func_109(iVar3, iVar4);
	}
	if (bVar2)
	{
		func_268(uParam0);
	}
}

void func_83(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
					__LIB_4__::func_467(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
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
						func_305(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_305(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_305(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_305(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_305(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_305(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_305(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_305(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_305(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_305(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_305(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_305(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_305(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_305(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_305(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_305(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_305(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_305(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_305(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_305(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_305(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_305(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_305(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_305(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_305(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_307();
						func_308(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_305(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_83(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_83(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_83(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_305(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_305(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						__LIB_5__::func_337(89200);
						__LIB_5__::func_337(2300);
						__LIB_5__::func_337(2300);
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
						__LIB_5__::func_337(-139100);
						break;
					case 69:
						if (__LIB_1__::func_25(Global_1347702[9 /*49*/].f_15, 1))
						{
							__LIB_5__::func_337(-6000);
						}
						break;
					case 70:
						__LIB_5__::func_337(23400);
						__LIB_5__::func_337(1900);
						__LIB_5__::func_337(-15000);
						break;
					case 71:
						__LIB_5__::func_337(-5500);
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
							__LIB_5__::func_337(40500);
						}
						else
						{
							__LIB_0__::func_316(0);
							__LIB_5__::func_337(46500);
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
		func_346();
		switch (iVar0)
		{
			case 1:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 4:
						__LIB_5__::func_387(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						__LIB_5__::func_387(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 25:
						__LIB_5__::func_387(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						__LIB_5__::func_387(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						__LIB_5__::func_387(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						__LIB_5__::func_387(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						__LIB_5__::func_387(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = __LIB_0__::func_895(iParam0);
						__LIB_5__::func_387(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						__LIB_5__::func_387(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						__LIB_5__::func_387(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!__LIB_1__::func_707(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
						{
							func_305(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						__LIB_5__::func_387(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						__LIB_5__::func_387(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						__LIB_5__::func_387(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 72:
						if (__LIB_0__::func_895(iParam0) == 0)
						{
							__LIB_5__::func_387(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						else
						{
							__LIB_5__::func_387(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
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
						__LIB_5__::func_387(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 55:
						__LIB_0__::func_896(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						__LIB_5__::func_387(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						__LIB_5__::func_387(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						__LIB_5__::func_387(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						__LIB_5__::func_387(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == __LIB_1__::func_293(0, 10, 11, joaat("CABR01")))
				{
					__LIB_5__::func_387(iParam0, __LIB_0__::func_895(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 7, 11, joaat("CACR02")))
				{
					__LIB_5__::func_387(iParam0, __LIB_1__::func_794(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 8, 11, joaat("CACR03")))
				{
					__LIB_5__::func_387(iParam0, __LIB_1__::func_794(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 11, 11, joaat("CACR01")))
				{
					__LIB_5__::func_387(iParam0, __LIB_1__::func_794(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 12, 11, joaat("CACR04")))
				{
					__LIB_5__::func_387(iParam0, __LIB_1__::func_794(11), 1, 0.5f, 2, 0, 0, 1);
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

void func_84(int iParam0, bool bParam1)
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
		}
int func_85(var uParam0)
{
	char[] cVar0[8];
	cVar0 = __LIB_0__::func_631(uParam0->f_607);
	return MISC::GET_HASH_KEY(&cVar0);
}

void func_108(var uParam0, var uParam1)
{
	uParam0->f_607 = -1;
	__LIB_18__::func_396(uParam0);
	uParam0->f_634[0] = 56024;
	uParam0->f_634[1] = 56024;
	uParam0->f_637 = 0;
	__LIB_4__::func_960(uParam0, *uParam1);
	func_373(uParam0);
}

void func_109(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_5__::func_34(uParam0, joaat("WAGON02X"), 0);
	iVar1 = __LIB_5__::func_34(uParam0, joaat("HANDCART"), 0);
	func_375();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iLocal_122 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0);
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
		ENTITY::SET_ENTITY_COLLISION(iVar0, true, false);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_122, false);
		VEHICLE::_0x226C6A4E3346D288(iLocal_122, 0);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_122, 1, true);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_122, 2, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		iLocal_121 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1);
	}
}

void func_123(var uParam0)
{
	if (__LIB_0__::func_91())
	{
		func_378(&(uParam0->f_7375));
	}
}

bool func_127(struct<4> Param0)
{
	if (__LIB_0__::func_13(32768))
	{
		return true;
	}
	return func_380(Param0, Param0.f_3);
}

void func_133(var uParam0)
{
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(2, func_85(uParam0)))
	{
		UILOG::_UILOG_REMOVE_ENTRY(2, func_85(uParam0));
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(1, func_85(uParam0)))
	{
		__LIB_1__::func_781(uParam0->f_607);
	}
}

void func_138(var uParam0)
{
	if (!ITEMSET::IS_ITEMSET_VALID(Local_14))
	{
		Local_14 = ITEMSET::CREATE_ITEMSET(true);
	}
	__LIB_5__::func_338(uParam0, joaat("P_CS_CRATETNT02X"), 67108863);
	__LIB_5__::func_338(uParam0, joaat("P_DETONATOR01X"), 67108863);
	__LIB_5__::func_338(uParam0, joaat("WAGON02X"), 67108863);
	__LIB_5__::func_338(uParam0, joaat("P_CS_CRATETNT02X"), 67108863);
	__LIB_5__::func_338(uParam0, joaat("P_DETONATOR01X"), 67108863);
}

void func_139(var uParam0)
{
	int iVar0;
	__LIB_5__::func_567(uParam0, sLocal_482, 8);
	__LIB_5__::func_567(uParam0, sLocal_483, 7);
	__LIB_5__::func_567(uParam0, sLocal_484, 4);
	__LIB_5__::func_567(uParam0, sLocal_485, 4);
	__LIB_5__::func_567(uParam0, sLocal_486, 4);
	__LIB_5__::func_567(uParam0, sLocal_487, 4);
	__LIB_5__::func_567(uParam0, sLocal_488, 4);
	__LIB_5__::func_567(uParam0, "MINI_GAMES@STORY@TRN3@LOWER_TNT@ARTHUR", 2);
	__LIB_5__::func_567(uParam0, "MINI_GAMES@STORY@TRN3@DYNAMITE_PLUNGER@ARTHUR", 32);
	__LIB_5__::func_567(uParam0, "MINI_GAMES@STORY@TRN3@DYNAMITE_PLUNGER@DETONATOR", 32);
	__LIB_5__::func_565(uParam0, sLocal_489, 67108863, 2, -1);
	__LIB_5__::func_565(uParam0, sLocal_490, 67108863, 2, -1);
	__LIB_5__::func_565(uParam0, sLocal_141, 67108863, 2, -1);
	__LIB_5__::func_565(uParam0, "Trn3_WagonLeave", 67108863, 2, -1);
	__LIB_5__::func_565(uParam0, "trn3_GoToDetonator", 67108863, 2, -1);
	__LIB_8__::func_891(uParam0, "Clipset@veh_train@handcart@base", 67108863);
	__LIB_8__::func_891(uParam0, "CLIPSET@VEH_TRAIN@HANDCART@BASE_PANIC", 28);
	__LIB_8__::func_891(uParam0, "CLIPSET@VEH_TRAIN@HANDCART@BASE_PANIC_JOHN", 28);
	__LIB_5__::func_338(uParam0, joaat("HANDCART"), 67108863);
	__LIB_5__::func_338(uParam0, joaat("P_CIGARETTE_CS01X"), 1);
	iVar0 = 0;
	while (iVar0 < VEHICLE::_0x635423D55CA84FC8(1094934838))
	{
		__LIB_5__::func_338(uParam0, VEHICLE::_0x8DF5F6A19F99F0D5(1094934838, iVar0), 67108863);
		iVar0++;
	}
	__LIB_5__::func_338(uParam0, joaat("P_CS_ROPE04X"), 2);
	__LIB_5__::func_338(uParam0, joaat("S_RAILSWITCH01X"), 8);
	__LIB_5__::func_338(uParam0, joaat("P_CS_TRAINCRATETNT01X"), 67108863);
	__LIB_5__::func_338(uParam0, joaat("P_CS_TRAINCRATETNT02X"), 67108863);
	__LIB_5__::func_338(uParam0, joaat("P_DYNAMITE01X"), 67108863);
	__LIB_5__::func_338(uParam0, joaat("P_CS_FUSEDYNAMITE01X"), 67108863);
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_140);
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_141);
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_142);
	uParam0->f_607 = uParam0->f_607;
}

void func_156(var uParam0, bool bParam1)
{
	bool bVar0;
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 134217728))
	{
		func_139(uParam0);
		__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 134217728);
	}
	if (bParam1 && !__LIB_5__::func_331(uParam0, __LIB_5__::func_475(uParam0), 536870912))
	{
		if (__LIB_9__::func_306(uParam0, __LIB_5__::func_475(uParam0), 0))
		{
			__LIB_5__::func_334(uParam0, __LIB_5__::func_475(uParam0), 536870912);
		}
	}
	if (__LIB_4__::func_937(uParam0, 8192))
	{
		if (!__LIB_4__::func_937(uParam0, 536870912))
		{
			if (__LIB_8__::func_928(&(uParam0->f_1126), __LIB_4__::func_939(uParam0)))
			{
				__LIB_4__::func_944(uParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (__LIB_9__::func_306(uParam0, __LIB_4__::func_939(uParam0), 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		__LIB_4__::func_944(uParam0, 8192);
	}
}

bool func_158(var uParam0)
{
	if (__LIB_4__::func_962(uParam0) < 1)
	{
		func_411(uParam0, __LIB_4__::func_951(uParam0, 3), !__LIB_4__::func_937(uParam0, 2097152), uParam0->f_5410, !__LIB_4__::func_937(uParam0, 32), 0);
		func_412(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1);
	}
	if ((!__LIB_4__::func_948(uParam0, 4) && !__LIB_5__::func_371()) && !__LIB_4__::func_951(uParam0, 3))
	{
		if (!__LIB_4__::func_948(uParam0, 32))
		{
			if (__LIB_0__::func_2() == 0)
			{
				__LIB_4__::func_945(uParam0, 32);
			}
			else
			{
				func_413(uParam0);
			}
		}
		if (__LIB_4__::func_948(uParam0, 32))
		{
			func_414(uParam0);
		}
	}
	switch (__LIB_4__::func_962(uParam0))
	{
		case -1:
		case 0:
			__LIB_4__::func_963(uParam0, 1);
			break;
		case 1:
			if (func_416(uParam0))
			{
				if (__LIB_4__::func_948(uParam0, 4096))
				{
					__LIB_4__::func_963(uParam0, 2);
				}
				else
				{
					__LIB_4__::func_963(uParam0, 3);
				}
			}
			break;
		case 2:
			if (__LIB_5__::func_504(uParam0))
			{
				__LIB_4__::func_963(uParam0, 3);
			}
			break;
		case 3:
			if (func_418(uParam0))
			{
				__LIB_4__::func_963(uParam0, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_161(var uParam0)
{
	int iVar0;
	if (__LIB_4__::func_939(uParam0) == 26)
	{
		__LIB_4__::func_964(uParam0, 0);
		return true;
	}
	if (func_420(uParam0))
	{
		iVar0 = __LIB_4__::func_939(uParam0);
		__LIB_4__::func_946(uParam0, __LIB_5__::func_475(uParam0));
		if (__LIB_4__::func_939(uParam0) == 26)
		{
			__LIB_4__::func_964(uParam0, 0);
			return true;
		}
		else if (__LIB_5__::func_331(uParam0, iVar0, 128))
		{
			func_420(uParam0);
		}
	}
	return false;
}

void func_163()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_120))
	{
		VEHICLE::DELETE_MISSION_TRAIN(&iLocal_120);
	}
}

void func_168(int iParam0)
{
	if (CAM::DOES_CAM_EXIST(*iParam0))
	{
		if (CAM::IS_CAM_ACTIVE(*iParam0))
		{
			if (CAM::IS_CAM_ACTIVE(*iParam0))
			{
				CAM::SET_CAM_ACTIVE(*iParam0, false);
			}
		}
		CAM::DESTROY_CAM(*iParam0, false);
	}
}

Vector3 func_170(int iParam0, int iParam1)
{
	return func_422(iParam0, iParam1);
}

void func_172()
{
	VOLUME::_DELETE_VOLUME(Local_27);
	VOLUME::_DELETE_VOLUME(Local_27.f_1);
	VOLUME::_DELETE_VOLUME(Local_27.f_2);
	VOLUME::_DELETE_VOLUME(Local_27.f_3);
	VOLUME::_DELETE_VOLUME(Local_27.f_4);
	VOLUME::_DELETE_VOLUME(Local_27.f_5);
	VOLUME::_DELETE_VOLUME(Local_27.f_6);
	VOLUME::_DELETE_VOLUME(Local_27.f_7);
	VOLUME::_DELETE_VOLUME(Local_27.f_8);
	VOLUME::_DELETE_VOLUME(Local_27.f_9);
	VOLUME::_DELETE_VOLUME(Local_27.f_10);
	VOLUME::_DELETE_VOLUME(Local_27.f_11);
	VOLUME::_DELETE_VOLUME(Local_27.f_12);
	VOLUME::_DELETE_VOLUME(Local_27.f_13);
	VOLUME::_DELETE_VOLUME(Local_27.f_14);
	VOLUME::_DELETE_VOLUME(Local_27.f_15);
	VOLUME::_DELETE_VOLUME(Local_27.f_16);
	VOLUME::_DELETE_VOLUME(Local_27.f_17);
	VOLUME::_DELETE_VOLUME(Local_27.f_18);
	VOLUME::_DELETE_VOLUME(Local_27.f_19);
	VOLUME::_DELETE_VOLUME(Local_27.f_20);
	VOLUME::_DELETE_VOLUME(Local_27.f_21);
}

struct<4> func_210(int iParam0, int iParam1)
{
	return func_450(iParam0, iParam1);
}

void func_268(var uParam0)
{
	if (__LIB_4__::func_948(uParam0, 1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_5411))
	{
		if (__LIB_4__::func_948(uParam0, 16))
		{
			__LIB_5__::func_595(uParam0, 0);
		}
		if (func_412(uParam0, 0, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_305(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
	if (!__LIB_5__::func_388(iParam0, iParam1, bParam2, iParam5))
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
			__LIB_4__::func_465(iVar5);
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
				func_305(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						__LIB_1__::func_450(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						__LIB_1__::func_450(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
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
		__LIB_5__::func_391(28);
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
			if (!__LIB_5__::func_385(iParam0, iParam5, &bParam2, bParam3, bParam4))
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
				__LIB_4__::func_127(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (__LIB_0__::func_192(iParam0, 787083290) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_1__::func_843(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1718133314))
		{
			__LIB_1__::func_844(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1738650224))
		{
			__LIB_1__::func_845(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_1__::func_846(iParam0);
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
			__LIB_4__::func_469(iParam0, iParam1);
			__LIB_4__::func_466(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_1__::func_858(iParam0, 0, 0, 0);
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
			__LIB_4__::func_468(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!__LIB_1__::func_707(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_305(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_305(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_305(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_305(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_305(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_305(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_305(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_5__::func_391(24);
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
					func_305(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_305(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_5__::func_507(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_6__::func_187(iParam0);
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
				func_305(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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
			__LIB_4__::func_120(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		__LIB_2__::func_471(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_307()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_614();
	func_615();
	func_616();
	func_617();
	func_618();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_308(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_621(iParam0, 1, 1, -142743235, 1);
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

void func_346()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_662(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		__LIB_0__::func_384(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		__LIB_0__::func_384(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		__LIB_2__::func_472(iVar3, 0, 0);
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

void func_373(var uParam0)
{
	__LIB_5__::func_476(uParam0, iLocal_49, iLocal_50, 103070, 103442, 103883, 104132, 104747, "TRN3_INT", 2, -1);
	__LIB_5__::func_476(uParam0, iLocal_50, iLocal_51, 104916, 105074, 105128, 105493, 106141, "", 0, -1);
	__LIB_5__::func_476(uParam0, iLocal_51, iLocal_52, 106210, 106449, 106468, 106753, 107190, "", 0, -1);
	__LIB_5__::func_476(uParam0, iLocal_52, iLocal_53, 107324, 107530, 107713, 108013, 108482, "TRN3_MCS1", 2, -1);
	__LIB_5__::func_476(uParam0, iLocal_53, iLocal_54, 108547, 108725, 108799, 109025, 109868, "", 0, -1);
	__LIB_5__::func_476(uParam0, iLocal_54, 25, 109967, 110155, 110344, 110550, 112032, "TRN3_MCS2", 2, -1);
	__LIB_5__::func_476(uParam0, 25, 26, 112119, 112288, 112498, 112569, 112957, "TRN3_EXT", 2, -1);
}

void func_375()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = ITEMSET::GET_ITEMSET_SIZE(Global_43616);
	iVar0 = 0;
	while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(Global_43616))
	{
		iVar2 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, Global_43616));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
		}
		else
		{
			switch (ENTITY::GET_ENTITY_TYPE(iVar2))
			{
				case 3:
					if (func_739(iVar2))
					{
					}
					break;
				case 1:
					if (func_740(iVar2))
					{
					}
					break;
				default:
					break;
			}
			DECORATOR::DECOR_REMOVE(iVar2, __LIB_5__::func_393());
		}
		iVar0++;
	}
	ITEMSET::_CLEAR_ITEMSET(Global_43616);
}

void func_378(var uParam0)
{
	vector3 vVar0;
	if (!__LIB_0__::func_84(uParam0, 4))
	{
		if (__LIB_0__::func_1(uParam0->f_860, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { __LIB_4__::func_534(uParam0) };
		if (!__LIB_0__::func_1(uParam0->f_860, 524288))
		{
			__LIB_4__::func_717(&(uParam0->f_872));
		}
		func_746(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_4__::func_535(uParam0, 0f, 0f, 0f);
		func_748(uParam0);
		func_749(uParam0);
		__LIB_5__::func_47(uParam0, 0f, 0f, 0f, 0, 0);
		__LIB_5__::func_48(uParam0);
		__LIB_0__::func_88(uParam0, 4);
		__LIB_0__::func_106(uParam0, 0);
		__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_873)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_873));
		}
	}
}

int func_380(vector3 vParam0, var uParam3)
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
		iVar0 = func_757(0, 0);
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

bool func_411(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	if (__LIB_4__::func_948(uParam0, 2))
	{
		return true;
	}
	if (__LIB_0__::func_2() == 0)
	{
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5408))
	{
		return true;
	}
	iVar0 = __LIB_4__::func_543(__LIB_4__::func_941(uParam0));
	if (!__LIB_0__::func_91())
	{
		vVar2 = { __LIB_1__::func_469(uParam0->f_607) };
	}
	if (func_814(uParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		uParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_412(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	struct<11> Var0;
	int iVar11;
	int iVar12;
	int iVar13;
	vector3 vVar14;
	int iVar17;
	struct<11> Var18;
	int iVar29;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5411))
	{
		if (!__LIB_4__::func_948(uParam0, 16777216))
		{
			if (!__LIB_5__::func_283(uParam0))
			{
				__LIB_4__::func_945(uParam0, 16777216);
			}
			else
			{
				Var0.f_10 = 7;
				Var0 = 0;
				Var0.f_1 = 0;
				Var0.f_6 = uParam2;
				Var0.f_6.f_1 = uParam3;
				Var0.f_6.f_2 = uParam4;
				Var0.f_9 = fParam5;
				Var0.f_10 = 1;
				iVar11 = 0;
				iVar12 = __LIB_4__::func_720(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					__LIB_4__::func_945(uParam0, 16777216);
					if (iVar11 == 2 && !ENTITY::IS_ENTITY_DEAD(iVar12))
					{
						if (iVar12 == uParam0->f_5411)
						{
							__LIB_4__::func_945(uParam0, 16777216);
						}
						else if (__LIB_0__::func_48(iVar12, uParam0->f_5411, 5f, 1))
						{
							if (__LIB_0__::func_126(iVar12))
							{
								PHYSICS::_0x0348469DAA17576C(iVar12);
							}
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar12, false, true);
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar12, uParam0->f_5417, uParam0->f_5420, true, false, true);
						}
					}
				}
			}
			return false;
		}
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5411))
		{
			return true;
		}
	}
	if (__LIB_4__::func_948(uParam0, 1))
	{
		return true;
	}
	vVar14 = { __LIB_1__::func_469(uParam0->f_607) };
	if (__LIB_0__::func_2() == 0)
	{
		STREAMING::REQUEST_MODEL(__LIB_4__::func_950(uParam0), false);
		if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_950(uParam0)))
		{
			return false;
		}
		if (__LIB_5__::func_50(&iVar17, __LIB_4__::func_950(uParam0), vVar14, 0f, 0, 0, 1, 1, 1))
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(iVar17, true);
			iVar13 = NETWORK::NET_TO_PED(iVar17);
		}
	}
	else
	{
		if (((((uParam0->f_607 == 38 || uParam0->f_607 == 39) || uParam0->f_607 == 43) || uParam0->f_607 == 40) || uParam0->f_607 == 41) || uParam0->f_607 == 42)
		{
			__LIB_4__::func_945(uParam0, 1);
			return false;
		}
		Var18.f_10 = 7;
		Var18 = bParam1;
		Var18.f_1 = iParam6;
		Var18.f_4 = iParam7;
		Var18.f_3 = iParam8;
		Var18.f_6 = uParam2;
		Var18.f_6.f_1 = uParam3;
		Var18.f_6.f_2 = uParam4;
		Var18.f_9 = fParam5;
		if (__LIB_4__::func_948(uParam0, 262144))
		{
			Var18.f_2 = 1;
		}
		else if (__LIB_4__::func_948(uParam0, 32768))
		{
			Var18.f_2 = 0;
		}
		iVar29 = 0;
		iVar13 = __LIB_4__::func_720(&iVar29, &Var18);
		if (iVar29 == 0)
		{
			return false;
		}
		else if (iVar29 == 1)
		{
			return false;
		}
		else if (iVar29 == 2)
		{
			if (!__LIB_4__::func_948(uParam0, 16))
			{
				__LIB_4__::func_945(uParam0, 16);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar13))
	{
		uParam0->f_5411 = iVar13;
		uParam0->f_5412 = iVar13;
		__LIB_5__::func_255(uParam0, bParam1);
		if (!__LIB_4__::func_948(uParam0, 256))
		{
			if (!__LIB_4__::func_948(uParam0, 32768))
			{
				vVar14.x = uParam2;
				vVar14.f_1 = uParam3;
				vVar14.f_2 = uParam4;
				if ((!__LIB_0__::func_126(iVar13) || __LIB_0__::func_665(Global_35, iVar13, 1, 1) > 200f) && !__LIB_0__::func_86(vVar14))
				{
					if (!__LIB_0__::func_91())
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar13, false);
						func_822(iVar13, vVar14, fParam5, 2, 1073741824 /* Float: 2f */);
					}
				}
			}
		}
		else
		{
			Stack.Push(uParam0);
			Call_Loc(uParam0->f_10782);
		}
		return false;
	}
	return false;
}

void func_413(var uParam0)
{
	int iVar0;
	var uVar1;
	if (!__LIB_4__::func_948(uParam0, 32) && __LIB_4__::func_951(uParam0, 3))
	{
		if (__LIB_4__::func_544(uParam0->f_607, &iVar0, &uVar1))
		{
			CLOCK::SET_CLOCK_TIME(iVar0, 0, 0);
			__LIB_4__::func_945(uParam0, 32);
		}
	}
	if (!__LIB_4__::func_948(uParam0, 32))
	{
		if (func_824(&(uParam0->f_609), uParam0->f_607))
		{
			__LIB_4__::func_945(uParam0, 32);
		}
	}
}

void func_414(var uParam0)
{
	struct<4> Var0;
	if (!__LIB_4__::func_948(uParam0, 128))
	{
		if (__LIB_4__::func_948(uParam0, 16384))
		{
			__LIB_5__::func_284(uParam0);
			if (func_826(uParam0))
			{
				__LIB_5__::func_326(&(uParam0->f_10792));
				__LIB_4__::func_969(uParam0, 2097152);
				__LIB_4__::func_958(uParam0, 16384);
				__LIB_4__::func_945(uParam0, 128);
			}
			return;
		}
		if (__LIB_4__::func_951(uParam0, 1))
		{
			return;
		}
		if (__LIB_4__::func_948(uParam0, 64))
		{
			__LIB_5__::func_284(uParam0);
			MemCopy(&Var0, {__LIB_4__::func_681(__LIB_4__::func_941(uParam0))}, 4);
			if (func_828(uParam0, Var0))
			{
				if (__LIB_4__::func_962(uParam0) != 4)
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				__LIB_4__::func_945(uParam0, 128);
			}
		}
		else
		{
			if (__LIB_4__::func_962(uParam0) != 4)
			{
				CAM::DO_SCREEN_FADE_OUT(1);
			}
			__LIB_4__::func_945(uParam0, 128);
		}
	}
}

bool func_416(var uParam0)
{
	int iVar0;
	char[] cVar1[8];
	iVar0 = 1;
	if (!__LIB_9__::func_447(uParam0))
	{
		iVar0 = 0;
	}
	if (!func_411(uParam0, __LIB_4__::func_951(uParam0, 3), !__LIB_4__::func_937(uParam0, 2097152), uParam0->f_5410, !__LIB_4__::func_937(uParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_412(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
	{
		iVar0 = 0;
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		iVar0 = 0;
	}
	if (__LIB_4__::func_948(uParam0, 4) && !PED::_0x0EE3F0D7FECCC54F())
	{
		iVar0 = 0;
	}
	if (!__LIB_4__::func_505(&(uParam0->f_8269)))
	{
		MemCopy(&cVar1, {__LIB_4__::func_542(uParam0->f_607)}, 3);
		if (__LIB_5__::func_341(&(uParam0->f_8269), &cVar1, 0, 1, 1))
		{
		}
		else
		{
			iVar0 = 0;
		}
	}
	if (__LIB_4__::func_951(uParam0, 1))
	{
		if (!__LIB_0__::func_75(&(uParam0->f_13115)))
		{
			__LIB_1__::func_283(&(uParam0->f_13115), 0);
		}
		if (__LIB_0__::func_265(&(uParam0->f_13115)) < 30f)
		{
			if (Global_1879534.f_1 || Global_1879534)
			{
				iVar0 = 0;
			}
			if (Global_1935630.f_2 != Global_40.f_39 || (!Global_1935630.f_12 && ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) != Global_40.f_39))
			{
				iVar0 = 0;
			}
			if (Global_40.f_7729 != Global_1905941)
			{
				iVar0 = 0;
			}
			if (!Global_1935630.f_12 && !PED::_0xA0BC8FAED8CFEB3C(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_418(var uParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	__LIB_1__::func_538(0);
	if (!bLocal_669)
	{
		STREAMING::REQUEST_MODEL(joaat("WAGON02X"), false);
		STREAMING::REQUEST_MODEL(joaat("HANDCART"), false);
		STREAMING::REQUEST_MODEL(joaat("P_CS_CRATETNT02X"), false);
		STREAMING::REQUEST_MODEL(joaat("P_CIGARETTE_CS01X"), false);
		STREAMING::REQUEST_MODEL(joaat("P_BARREL04X"), false);
		PROPSET::_REQUEST_PROPSET(iLocal_153);
		bLocal_669 = true;
	}
	bLocal_194 = true;
	bVar0 = ((STREAMING::HAS_MODEL_LOADED(joaat("WAGON02X")) && STREAMING::HAS_MODEL_LOADED(joaat("HANDCART"))) && STREAMING::HAS_MODEL_LOADED(joaat("P_CS_CRATETNT02X")));
	iVar1 = __LIB_4__::func_939(uParam0);
	if (iVar1 < 25)
	{
		__LIB_1__::func_408(-828139293, 0, 0);
		Global_1934765.f_272 = 1;
	}
	STREAMING::_REQUEST_IMAP(joaat("BAC_01_WIRE"));
	if (iVar1 < 5)
	{
		if (__LIB_0__::func_30(1492058366) && STREAMING::_IS_IMAP_ACTIVE(1492058366))
		{
			STREAMING::_REMOVE_IMAP(1492058366);
		}
	}
	if (!CAM::_0xAA235E2F2C09E952("script@Story@trn3@gameover") && !CAM::_0x595550376B7EA230("script@Story@trn3@gameover"))
	{
		CAM::_0x1B3C2D961F5FC0E1("script@Story@trn3@gameover");
		bVar0 = false;
	}
	if (!bVar0)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_127))
	{
		if (!func_814(uParam0, 1, &iLocal_127, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0))
		{
			return false;
		}
	}
	WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
	if (!func_837(uParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_122))
	{
		func_838(-1, 0);
		iLocal_122 = Local_14.f_3[0];
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_122))
	{
		if (!PROPSET::_HAS_PROPSET_LOADED(iLocal_153))
		{
			return false;
		}
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_122, 1, true);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_122, 2, true);
		VEHICLE::_0x8C6D9A399126C194(Local_14.f_3[0], 7);
		VEHICLE::_0x8C6D9A399126C194(iLocal_122, 7);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_122, 3, true);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_122, 4, true);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_122, 5, true);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_122, false);
		VEHICLE::_0x226C6A4E3346D288(iLocal_122, 0);
		PROPSET::_ADD_LIGHT_PROPSET_TO_VEHICLE(iLocal_122, iLocal_153);
	}
	__LIB_5__::func_550(uParam0, 129889);
	__LIB_5__::func_256(uParam0, 130138);
	__LIB_5__::func_257(uParam0, 130893);
	if (__LIB_4__::func_939(uParam0) == 0)
	{
		__LIB_5__::func_33(uParam0, 134217728);
		__LIB_5__::func_33(uParam0, 33554432);
		__LIB_5__::func_33(uParam0, 8388608);
		if (((CAM::_0xA24C1D341C6E0D53(1, 0, 0) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()) || CAM::_0xD1BA66940E94C547()) || __LIB_4__::func_948(uParam0, 8388608))
		{
			if (__LIB_0__::func_871())
			{
				sVar2 = "1-HighHonor-Multi";
			}
			else
			{
				sVar2 = "2-LowHonor-Multi";
			}
		}
		else if (__LIB_0__::func_871())
		{
			sVar2 = "1-HighHonor-Normal";
		}
		else
		{
			sVar2 = "2-LowHonor-Normal";
		}
		__LIB_5__::func_298(uParam0, sVar2);
		__LIB_8__::func_787(uParam0, sVar2);
	}
	else if (__LIB_4__::func_939(uParam0) == 25)
	{
		__LIB_6__::func_914(uParam0);
	}
	if (!__LIB_4__::func_257(iLocal_121))
	{
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_121, true);
	}
	func_850(-1, 1);
	if (__LIB_0__::func_272(iLocal_127, 0))
	{
		__LIB_11__::func_325(uParam0, iLocal_127, 0);
		__LIB_8__::func_806(uParam0, iLocal_127, 0, 0, 0, 0, 0);
		__LIB_5__::func_106(uParam0, iLocal_127, "JOHN", 0);
		__LIB_1__::func_288(1, -922193456, 1);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_127, false);
		ENTITY::SET_ENTITY_PROOFS(iLocal_127, 9, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_127, true);
		__LIB_2__::func_279(iLocal_127, 1);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_127, true, true);
	}
	__LIB_5__::func_580(uParam0, iLocal_122, 0, 0, 0, 0, 0);
	__LIB_5__::func_580(uParam0, iLocal_121, 0, 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Global_35, 0, 0, 0, 0, 0);
	if (!func_854(uParam0, 0, 0))
	{
		return false;
	}
	if (__LIB_4__::func_939(uParam0) <= 5)
	{
		func_855(uParam0);
		if (!bLocal_195)
		{
			return false;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_128))
	{
		iLocal_128 = func_856(662.3088f, 1588.401f, 187.732f, 255.2658f, 1);
		return false;
	}
	if (!__LIB_0__::func_255(iLocal_128, 0))
	{
		TASK::TASK_STAND_STILL(iLocal_128, -1);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_128, 662.3088f, 1588.401f, 187.732f, 255.2658f, true, false, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_128, 499, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_128, 441, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_128, 444, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_128, true);
		__LIB_17__::func_529(2);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_126))
	{
		OBJECT::DELETE_OBJECT(&iLocal_126);
	}
	func_859();
	__LIB_5__::func_106(uParam0, Global_35, "ARTHUR", 0);
	__LIB_5__::func_256(uParam0, 130138);
	VEHICLE::_0xE6C5E2125EB210C1(joaat("FREIGHT_GROUP"), 5, 1);
	VEHICLE::_0xE6C5E2125EB210C1(joaat("TRAINS_ROB3"), 0, 1);
	uLocal_134 = __LIB_1__::func_391(Local_27.f_1, 0, 0, 0);
	iLocal_135 = 0;
	iLocal_55 = 0;
	uParam0->f_607 = uParam0->f_607;
	__LIB_6__::func_413(joaat("WEATHER_GROUP_GOOD_VISIBILITY"), 0, 0, 1103626240 /* Float: 25f */);
	__LIB_1__::func_600(0);
	bLocal_194 = false;
	return true;
}

bool func_420(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	func_862(uParam0);
	__LIB_10__::func_929(uParam0);
	iVar0 = __LIB_4__::func_939(uParam0);
	iVar1 = __LIB_5__::func_475(uParam0);
	iVar2 = __LIB_5__::func_279(uParam0, iVar0);
	if (__LIB_4__::func_937(uParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_826(uParam0);
		}
	}
	__LIB_5__::func_477(uParam0);
	__LIB_8__::func_801(uParam0);
	__LIB_5__::func_478(uParam0);
	__LIB_5__::func_479(uParam0);
	__LIB_5__::func_480(uParam0);
	__LIB_8__::func_768(uParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		__LIB_5__::func_575(uParam0);
	}
	if ((__LIB_4__::func_939(uParam0) == 0 && iVar2 < 3) && __LIB_5__::func_253(uParam0) == 0)
	{
		func_414(uParam0);
	}
	if (__LIB_5__::func_331(uParam0, iVar0, 512))
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	func_74(uParam0);
	switch (iVar2)
	{
		case 0:
			if (__LIB_5__::func_481(uParam0, iVar0, 0))
			{
				if (__LIB_5__::func_285(uParam0, __LIB_4__::func_939(uParam0)) != -1 && PED::_0x62DE46F061CAA468() < __LIB_5__::func_285(uParam0, __LIB_4__::func_939(uParam0)))
				{
					PED::_0xF008E0BA1FE1D644((__LIB_5__::func_285(uParam0, __LIB_4__::func_939(uParam0)) - PED::_0x62DE46F061CAA468()));
				}
				if ((__LIB_4__::func_939(uParam0) == 25 || __LIB_4__::func_939(uParam0) == 26) && __LIB_0__::func_13(32768))
				{
					__LIB_5__::func_33(uParam0, 524288);
				}
				if (__LIB_4__::func_948(uParam0, 4))
				{
					if (!__LIB_4__::func_937(uParam0, 4))
					{
						__LIB_0__::func_16(uParam0, iVar0);
						__LIB_4__::func_944(uParam0, 4);
					}
					__LIB_5__::func_342(uParam0);
					__LIB_5__::func_286(uParam0, iVar0, 1);
				}
				else
				{
					__LIB_5__::func_286(uParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (__LIB_9__::func_447(uParam0))
			{
				if (__LIB_9__::func_98(uParam0))
				{
					if (__LIB_4__::func_937(uParam0, 4))
					{
						__LIB_4__::func_969(uParam0, 4);
					}
					__LIB_5__::func_286(uParam0, iVar0, 2);
				}
			}
			else if (__LIB_5__::func_287(uParam0) >= uParam0->f_13144)
			{
				if (__LIB_4__::func_937(uParam0, 4))
				{
					__LIB_4__::func_969(uParam0, 4);
				}
				__LIB_5__::func_286(uParam0, iVar0, 2);
			}
			break;
		case 2:
			if (__LIB_5__::func_481(uParam0, iVar0, 2))
			{
				if (!__LIB_5__::func_258(uParam0))
				{
					__LIB_5__::func_286(uParam0, iVar0, 4);
					if (func_879(uParam0, iVar0, iVar1))
					{
						__LIB_5__::func_286(uParam0, iVar0, 5);
					}
				}
				else
				{
					__LIB_5__::func_482(uParam0);
					__LIB_5__::func_286(uParam0, iVar0, 3);
					if (func_881(uParam0, iVar0))
					{
						__LIB_5__::func_286(uParam0, iVar0, 4);
						if (func_879(uParam0, iVar0, iVar1))
						{
							__LIB_5__::func_286(uParam0, iVar0, 5);
						}
					}
				}
			}
			else if (__LIB_5__::func_52(uParam0))
			{
				func_881(uParam0, iVar0);
			}
			break;
		case 3:
			if (func_881(uParam0, iVar0))
			{
				__LIB_5__::func_286(uParam0, iVar0, 4);
				if (func_879(uParam0, iVar0, iVar1))
				{
					__LIB_5__::func_286(uParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_879(uParam0, iVar0, iVar1))
			{
				__LIB_5__::func_286(uParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!__LIB_0__::func_2() == 0)
			{
				__LIB_5__::func_288(uParam0);
				__LIB_11__::func_324(uParam0, iVar0);
				__LIB_5__::func_289(uParam0);
				__LIB_8__::func_822(uParam0);
				if (__LIB_5__::func_331(uParam0, iVar1, 2))
				{
					if (__LIB_5__::func_483(uParam0, iVar1))
					{
						__LIB_11__::func_39(uParam0, iVar1);
					}
				}
			}
			if (__LIB_5__::func_481(uParam0, iVar0, 5))
			{
				if (__LIB_5__::func_481(uParam0, iVar0, 7))
				{
					if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 67108864))
					{
						__LIB_9__::func_305(uParam0, __LIB_4__::func_939(uParam0));
					}
					__LIB_5__::func_582(uParam0, iVar1);
					__LIB_10__::func_929(uParam0);
					return true;
				}
				else
				{
					__LIB_5__::func_286(uParam0, iVar0, 7);
				}
			}
			else
			{
				if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 4194304))
				{
					if ((!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 16))
					{
						CAM::DO_SCREEN_FADE_IN(0);
						__LIB_1__::func_164(0);
					}
					__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 4194304);
				}
				if ((__LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) && !__LIB_4__::func_948(uParam0, 8192)) && !__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 8))
				{
					__LIB_5__::func_20(1, 0);
					__LIB_1__::func_422("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (__LIB_0__::func_0(uParam0))
					{
						__LIB_5__::func_286(uParam0, iVar0, 6);
					}
				}
				if (__LIB_4__::func_937(uParam0, 268435456))
				{
					if (MISC::_0x1B065A2BF7953815(1) != 1)
					{
						__LIB_5__::func_599(uParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
						__LIB_4__::func_969(uParam0, 268435456);
					}
				}
				if (__LIB_4__::func_948(uParam0, 1048576))
				{
					if (func_127(func_34(0)))
					{
						__LIB_4__::func_958(uParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!__LIB_0__::func_2() == 0)
			{
				__LIB_5__::func_288(uParam0);
				__LIB_11__::func_324(uParam0, iVar0);
				__LIB_5__::func_289(uParam0);
				__LIB_8__::func_822(uParam0);
				if (__LIB_5__::func_331(uParam0, __LIB_5__::func_475(uParam0), 2))
				{
					if (__LIB_5__::func_483(uParam0, __LIB_5__::func_475(uParam0)))
					{
						__LIB_11__::func_39(uParam0, __LIB_5__::func_475(uParam0));
					}
				}
			}
			if ((!__LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) || __LIB_4__::func_948(uParam0, 8192)) || __LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 8))
			{
				if (__LIB_5__::func_481(uParam0, iVar0, 5))
				{
					if (__LIB_0__::func_0(uParam0))
					{
						__LIB_5__::func_286(uParam0, iVar0, 7);
					}
				}
				else
				{
					__LIB_0__::func_0(uParam0);
					__LIB_5__::func_286(uParam0, iVar0, 5);
				}
			}
			else
			{
				__LIB_5__::func_481(uParam0, iVar0, 5);
				__LIB_0__::func_16(uParam0);
			}
			break;
		case 7:
			if (__LIB_5__::func_481(uParam0, iVar0, 7))
			{
				if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 67108864))
				{
					__LIB_9__::func_305(uParam0, __LIB_4__::func_939(uParam0));
				}
				__LIB_5__::func_582(uParam0, iVar1);
				__LIB_10__::func_929(uParam0);
				return true;
			}
			break;
		default:
			__LIB_5__::func_286(uParam0, iVar0, 7);
			break;
	}
	return false;
}

Vector3 func_422(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 568.4582f, 1693.846f, 186.6473f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

struct<4> func_450(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_918(iParam0, iParam1) };
	Var0.f_3 = func_919(iParam0, iParam1);
	return Var0;
}

void func_614()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1083(0);
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
	func_1083(1);
}

void func_615()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_305(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_616()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1086(0);
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
	func_1086(1);
}

void func_617()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_2__::func_522(15000, 0, 0, 0, 1);
			func_1086(0);
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
	__LIB_2__::func_590(15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
	func_1086(1);
}

void func_618()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_305(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_305(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_621(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_621(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_621(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			__LIB_2__::func_471(iParam0, -iParam1, bVar0, bVar1, bVar2);
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
			func_621(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
		__LIB_2__::func_471(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	__LIB_1__::func_879(iParam0, iParam1);
	return 1;
}

int func_662(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1131(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_305(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_2__::func_522(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

bool func_702(var uParam0)
{
	char* sVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_121))
	{
		VEHICLE::SET_MISSION_TRAIN_COORDS(iLocal_121, VEHICLE::_GET_NEAREST_TRAIN_TRACK_POSITION(func_1159(0, 4)));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_527[2]))
	{
		iLocal_527[2] = OBJECT::CREATE_OBJECT(joaat("P_CIGARETTE_CS01X"), 1573.85f, 1784.88f, 206.38f, true, true, false, false, true);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_527[3]))
	{
		iLocal_527[3] = OBJECT::CREATE_OBJECT(joaat("P_CIGARETTE_CS01X"), 1573.85f, 1784.88f, 206.38f, true, true, false, false, true);
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_124))
	{
		__LIB_5__::func_580(uParam0, iLocal_124, "P_CS_CRATETNT02X^1", 0, 0, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_125))
	{
		__LIB_5__::func_580(uParam0, iLocal_125, "P_CS_CRATETNT02X", 0, 0, 0, 0);
	}
	__LIB_5__::func_33(uParam0, 134217728);
	__LIB_5__::func_33(uParam0, 33554432);
	__LIB_5__::func_33(uParam0, 8388608);
	if (((CAM::_0xA24C1D341C6E0D53(1, 0, 0) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()) || CAM::_0xD1BA66940E94C547()) || __LIB_4__::func_948(uParam0, 8388608))
	{
		if (__LIB_0__::func_871())
		{
			sVar0 = "1-HighHonor-Multi";
		}
		else
		{
			sVar0 = "2-LowHonor-Multi";
		}
	}
	else if (__LIB_0__::func_871())
	{
		sVar0 = "1-HighHonor-Normal";
	}
	else
	{
		sVar0 = "2-LowHonor-Normal";
	}
	__LIB_5__::func_298(uParam0, sVar0);
	__LIB_8__::func_787(uParam0, sVar0);
	__LIB_5__::func_47(&(uParam0->f_7375), 612.3088f, 1693.401f, 186.732f, 255.2658f, 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_703(var uParam0)
{
	char* sVar0;
	int iVar1;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_121))
	{
		VEHICLE::SET_MISSION_TRAIN_COORDS(iLocal_121, VEHICLE::_GET_NEAREST_TRAIN_TRACK_POSITION(func_1159(0, 4)));
	}
	if (((CAM::_0xA24C1D341C6E0D53(1, 0, 0) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()) || CAM::_0xD1BA66940E94C547()) || __LIB_4__::func_948(uParam0, 8388608))
	{
		if (__LIB_0__::func_871())
		{
			sVar0 = "1-HighHonor-Multi";
		}
		else
		{
			sVar0 = "2-LowHonor-Multi";
		}
	}
	else if (__LIB_0__::func_871())
	{
		sVar0 = "1-HighHonor-Normal";
	}
	else
	{
		sVar0 = "2-LowHonor-Normal";
	}
	__LIB_5__::func_298(uParam0, sVar0);
	__LIB_8__::func_787(uParam0, sVar0);
	StringCopy(&cLocal_56, func_1160(0), 64);
	func_1161(uParam0, &cLocal_56, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	if (__LIB_0__::func_871())
	{
		__LIB_5__::func_298(uParam0, "1-HighHonor-Normal");
	}
	else
	{
		__LIB_5__::func_298(uParam0, "2-LowHonor-Normal");
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_124))
	{
		__LIB_5__::func_580(uParam0, iLocal_124, "P_CS_CRATETNT01X^1", 0, 0, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_125))
	{
		__LIB_5__::func_580(uParam0, iLocal_125, "P_CS_CRATETNT01X", 0, 0, 0, 0);
	}
	__LIB_5__::func_580(uParam0, iLocal_527[2], "p_cigarette_cs01x", 0, 0, 0, 0);
	__LIB_5__::func_580(uParam0, iLocal_527[3], "p_cigarette_cs01x^1", 0, 0, 0, 0);
	__LIB_5__::func_580(uParam0, iLocal_127, "JOHN", 0, 0, 0, 0);
	__LIB_5__::func_47(&(uParam0->f_7375), 612.3088f, 1693.401f, 186.732f, 255.2658f, 0);
	__LIB_1__::func_572(Global_36, 500f, 0, 0, 0, 0, 0);
	iVar1 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (__LIB_0__::func_266(iVar1, 490.04f, 1771.92f, 186.58f, 350f, 1, 1))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar1, 625.6639f, 1718.671f, 191.8011f, 150.5454f, true, false, true);
		}
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_704(var uParam0)
{
	__LIB_1__::func_600(0);
	MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), false, true, true, 30f, false);
	if (!PED::IS_PED_IN_VEHICLE(Global_35, iLocal_121, false))
	{
		PED::SET_PED_INTO_VEHICLE(Global_35, iLocal_121, 0);
	}
	if (!PED::IS_PED_IN_VEHICLE(iLocal_127, iLocal_121, false))
	{
		PED::SET_PED_INTO_VEHICLE(iLocal_127, iLocal_121, -1);
	}
	PED::SET_PED_RESET_FLAG(Global_35, 242, true);
	PED::SET_PED_RESET_FLAG(iLocal_127, 242, true);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_121) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_121, false, false))
	{
		PED::SET_PED_INTO_VEHICLE(iLocal_127, iLocal_121, -1);
		PED::SET_PED_INTO_VEHICLE(Global_35, iLocal_121, 0);
	}
	__LIB_5__::func_342(uParam0);
	func_1164(0);
	iLocal_154 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_121))
	{
		VEHICLE::SET_VEHICLE_HANDBRAKE(iLocal_121, false);
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	VEHICLE::_0x6DE072AC8A95FFC1(iLocal_121, 0);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_127))
	{
		__LIB_5__::func_106(uParam0, iLocal_127, "JOHN", 0);
	}
	__LIB_5__::func_106(uParam0, Global_35, "ARTHUR", 0);
	func_1164(0);
	return uParam0->f_607 == uParam0->f_607;
}

int func_705(var uParam0)
{
	float fVar0;
	func_1165(uParam0);
	if (func_1166())
	{
		func_1167(uParam0, "TRN3_FL_DYN", "");
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_121, false))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 242, true);
	}
	if (PED::IS_PED_IN_VEHICLE(iLocal_127, iLocal_121, false))
	{
		PED::SET_PED_RESET_FLAG(iLocal_127, 242, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_AIM"), false);
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			PED::SET_PED_RESET_FLAG(Global_35, 242, true);
			PED::SET_PED_RESET_FLAG(iLocal_127, 242, true);
			if (PAD::GET_CONTROL_VALUE(0, joaat("INPUT_VEH_HANDCART_ACCELERATE")) > 200 || __LIB_5__::func_287(uParam0) >= 2f)
			{
				__LIB_4__::func_952(uParam0, 1);
				__LIB_5__::func_342(uParam0);
			}
			break;
		case 1:
			func_1169(uParam0);
			func_1170(0);
			func_1171(uParam0, &iLocal_127, 6, 0, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */);
			func_1171(uParam0, &iLocal_127, 7, 0, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */);
			if (__LIB_0__::func_266(Global_35, func_1159(0, 4), 12f, 1, 1))
			{
				func_1172(0, 10000);
				if (__LIB_5__::func_287(uParam0) > 10f && ENTITY::GET_ENTITY_SPEED(iLocal_121) < 0.8f)
				{
					func_1171(uParam0, &iLocal_127, 14, 1, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */);
				}
			}
			if (bLocal_541)
			{
				if (__LIB_0__::func_265(&uLocal_544) > 1f)
				{
					__LIB_4__::func_952(uParam0, 2);
				}
			}
			else if (__LIB_0__::func_266(iLocal_121, func_1159(0, 2), 6f, 1, 1))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_HANDCART_ACCELERATE"), false);
				__LIB_1__::func_148(&uLocal_544);
				bLocal_541 = true;
				if (__LIB_6__::func_903(func_1173(6)))
				{
					__LIB_6__::func_900(func_1173(6), 1, 0);
				}
				if (__LIB_6__::func_903(func_1173(7)))
				{
					__LIB_6__::func_900(func_1173(7), 1, 0);
				}
			}
			break;
		case 2:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_HANDCART_ACCELERATE"), false);
			func_1176();
			func_1177(1, 0, 1);
			func_1171(uParam0, &iLocal_127, 0, 0, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */);
			fVar0 = ENTITY::GET_ENTITY_SPEED(iLocal_121);
			if (!__LIB_4__::func_257(iLocal_121))
			{
				if (__LIB_0__::func_104())
				{
					__LIB_0__::func_105(1);
				}
				if (!__LIB_6__::func_904())
				{
					if (fVar0 < 0.01f)
					{
						iLocal_543++;
						if (iLocal_543 > 40)
						{
							__LIB_5__::func_342(uParam0);
							__LIB_4__::func_952(uParam0, 29);
						}
					}
					else
					{
						iLocal_543 = 0;
					}
				}
			}
			break;
		case 29:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_HANDCART_ACCELERATE"), false);
			func_1179(1);
			func_1180(3);
			return 1;
	}
	return 0;
}

bool func_706(var uParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_HANDCART_ACCELERATE"), false);
	__LIB_0__::func_325(&iLocal_123);
	func_1179(1);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_708(var uParam0)
{
	vector3 vVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_121))
	{
		vVar0 = { func_1159(0, 2) };
		VEHICLE::SET_MISSION_TRAIN_COORDS(iLocal_121, VEHICLE::_GET_NEAREST_TRAIN_TRACK_POSITION(vVar0));
	}
	if (!func_854(uParam0, 1, 0))
	{
		return false;
	}
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 1, false, false);
	WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
	func_1186(&Global_35, &iLocal_121, 0, 1);
	func_1186(&iLocal_127, &iLocal_121, -1, 1);
	MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_HANDCART_ACCELERATE"), false);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_709(var uParam0)
{
	if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_121, false))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_HANDCART_ACCELERATE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_HANDCART_BRAKE"), false);
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_710(var uParam0)
{
	__LIB_1__::func_600(0);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_HANDCART_ACCELERATE"), false);
	iLocal_567 = 0;
	iLocal_154 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_121))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_121, true);
	}
	if (!__LIB_4__::func_257(iLocal_121))
	{
		VEHICLE::SET_TRAIN_SPEED(iLocal_121, 0f);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_127))
	{
		__LIB_5__::func_106(uParam0, iLocal_127, "JOHN", 0);
	}
	__LIB_5__::func_106(uParam0, Global_35, "ARTHUR", 0);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_121, false);
	if (!func_854(uParam0, 1, 0))
	{
		return false;
	}
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 1, false, false);
	WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
	func_1164(1);
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_130[2]))
	{
		iLocal_130[2] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), VOLUME::_GET_VOLUME_COORDS(Local_27.f_19), VOLUME::_GET_VOLUME_ROTATION(Local_27.f_19), VOLUME::_GET_VOLUME_SCALE(Local_27.f_19));
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_585))
	{
		iLocal_585 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 0f, 0f, 0f, 0f, 0f, 0f, 1f, 1f, 1f);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_586))
	{
		iLocal_586 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 0f, 0f, 0f, 0f, 0f, 0f, 1f, 1f, 1f);
	}
	PED::_0x7C00CFC48A782DC0(iLocal_586, iLocal_124, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	PED::_0x7C00CFC48A782DC0(iLocal_585, iLocal_125, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_121, false))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_HANDCART_ACCELERATE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_HANDCART_BRAKE"), false);
	}
	return uParam0->f_607 == uParam0->f_607;
}

int func_711(var uParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_121, false))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_HANDCART_ACCELERATE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_HANDCART_BRAKE"), false);
	}
	if (__LIB_1__::func_205(Global_35, Local_27.f_4, 1, 0) && iLocal_510 == 5)
	{
		if (!bLocal_559)
		{
			if (bLocal_495)
			{
				if (func_1171(uParam0, &Global_35, 33, 0, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */))
				{
					bLocal_559 = true;
				}
			}
			else if (func_1171(uParam0, &iLocal_127, 54, 0, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */))
			{
				bLocal_559 = true;
			}
		}
	}
	func_1188(uParam0);
	if (func_1166())
	{
		func_1167(uParam0, "TRN3_FL_DYN", "");
	}
	func_1189(uParam0);
	func_1190();
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			if (func_1191(uParam0))
			{
				func_1192(uParam0, 1);
			}
			break;
		case 1:
			if (func_1193(uParam0, 0))
			{
				func_1192(uParam0, 2);
			}
			break;
		case 2:
			if (func_1194(uParam0, 0))
			{
				func_1192(uParam0, 3);
			}
			break;
		case 3:
			if (func_1195(uParam0, 0))
			{
				func_1192(uParam0, 4);
			}
			break;
		case 4:
			if (func_1196(uParam0, 0))
			{
				func_1192(uParam0, 5);
			}
			break;
		case 5:
			if (func_1197(uParam0, 0))
			{
				__LIB_5__::func_342(uParam0);
				func_1192(uParam0, 6);
				bLocal_559 = false;
				__LIB_1__::func_281(&iLocal_565, 1, 1);
				__LIB_1__::func_281(&iLocal_566, 1, 1);
			}
			break;
		case 6:
			if (func_1193(uParam0, 1))
			{
				func_1192(uParam0, 7);
			}
			break;
		case 7:
			if (func_1194(uParam0, 1))
			{
				func_1192(uParam0, 8);
			}
			break;
		case 8:
			if (func_1195(uParam0, 1))
			{
				func_1192(uParam0, 9);
			}
			break;
		case 9:
			if (func_1196(uParam0, 1))
			{
				func_1192(uParam0, 10);
			}
			break;
		case 10:
			if (func_1197(uParam0, 1))
			{
				func_1192(uParam0, 29);
				bLocal_559 = false;
				__LIB_1__::func_281(&iLocal_565, 1, 1);
				__LIB_1__::func_281(&iLocal_566, 1, 1);
			}
			break;
		case 29:
			if (func_1198(14, 17, 0.1f) && func_1171(uParam0, &Global_35, 24, 0, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_125))
				{
					OBJECT::DELETE_OBJECT(&iLocal_125);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_124))
				{
					OBJECT::DELETE_OBJECT(&iLocal_124);
				}
				func_1179(1);
				PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
				__LIB_0__::func_325(&iLocal_123);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_712(var uParam0)
{
	__LIB_0__::func_325(&iLocal_123);
	func_1179(1);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_121, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_126))
	{
		OBJECT::DELETE_OBJECT(&iLocal_126);
	}
	ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_121, true);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_713(var uParam0)
{
	struct<4> Var0;
	if (!bLocal_631)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_127))
		{
			if (__LIB_2__::func_343(iLocal_127, iLocal_121, 0))
			{
				PED::_0xE0B61ED8BB37712F(iLocal_127);
				func_1200(iLocal_127, func_210(1, 2), 2, 1073741824 /* Float: 2f */);
			}
			else
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_127, 524.3511f, 1749.399f, 181.4798f, 217.3978f, true, false, true);
			}
			bLocal_631 = true;
		}
	}
	Var0 = { func_210(1, 0) };
	func_1201(1);
	ENTITY::SET_ENTITY_HEADING(Global_35, Var0.f_3);
	MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
	__LIB_0__::func_489(0, 0);
	if (!func_1202(14, 0, 0))
	{
		return false;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_235[14 /*8*/]))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_235[14 /*8*/], "p_dynamite01x", Local_64[3 /*9*/], 0);
	}
	if (!func_1203(14, 22, -1, -1, 1, 0))
	{
		return false;
	}
	if (!func_854(uParam0, 1, 1))
	{
		return false;
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_715(var uParam0)
{
	if (!func_854(uParam0, 1, 1))
	{
		return false;
	}
	func_1180(6);
	if (!__LIB_4__::func_937(uParam0, 8))
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-15f, 1f);
	}
	__LIB_1__::func_600(0);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_127))
	{
		__LIB_5__::func_106(uParam0, iLocal_127, "JOHN", 0);
	}
	__LIB_5__::func_106(uParam0, Global_35, "ARTHUR", 0);
	if (!func_1201(1))
	{
		return false;
	}
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_121, false);
	__LIB_5__::func_342(uParam0);
	iLocal_154 = 0;
	iLocal_618 = 0;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_235[14 /*8*/]))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_235[14 /*8*/], "p_dynamite01x", Local_64[3 /*9*/], 0);
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_124, false);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_125, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_127, 375, true);
	__LIB_4__::func_944(uParam0, 33554432);
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_620))
	{
		iLocal_620 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 0f, 0f, 0f, 0f, 0f, 0f, 1f, 1f, 1f);
	}
	SCRIPTS::_0x7D654266025E921B(joaat("CHAL_CTX_CUSTOM_1"));
	PED::_0x7C00CFC48A782DC0(iLocal_620, iLocal_127, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	TASK::_0xFA30E2254461ADEB(Global_35, 1);
	return uParam0->f_607 == uParam0->f_607;
}

int func_716(var uParam0)
{
	func_1204(uParam0);
	func_1205(uParam0);
	func_855(uParam0);
	if (!bLocal_636)
	{
		if (func_1206(162.9f, 1728.7f, 183.6f, 0f, 0))
		{
			VEHICLE::SET_TRAIN_SPEED(iLocal_511[0], 0f);
			VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_511[0], 0f);
			bLocal_636 = true;
		}
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_490))
	{
		if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
		{
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_490, 1, 1065353216 /* Float: 1f */, 0.2f, 1);
		}
		else
		{
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_490, 0, 1065353216 /* Float: 1f */, 0.5f, 1);
		}
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_140))
	{
		if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
		{
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_140, 1, 1065353216 /* Float: 1f */, 0.5f, 1);
		}
		else
		{
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_140, 0, 1065353216 /* Float: 1f */, 0.5f, 1);
		}
	}
	if (func_1207())
	{
		func_1167(uParam0, "TRN3_FL_DYN", "");
	}
	func_1189(uParam0);
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			if (Global_36.f_2 < 185.2f)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.75f);
			}
			if (func_1208(uParam0))
			{
				__LIB_4__::func_952(uParam0, 1);
				__LIB_5__::func_372(uParam0, 26);
				SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_CUSTOM_1"));
			}
			break;
		case 1:
			if (VOLUME::_DOES_VOLUME_EXIST(Local_27.f_9))
			{
				if (!__LIB_1__::func_205(Global_35, Local_27.f_9, 1, 0))
				{
					__LIB_4__::func_952(uParam0, 29);
				}
			}
			break;
		case 2:
			break;
		case 3:
			if ((!__LIB_6__::func_904() && !__LIB_5__::func_463()) || __LIB_0__::func_266(Global_35, func_1159(0, 5), 2.75f, 1, 1))
			{
				__LIB_4__::func_952(uParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_717(var uParam0)
{
	if (__LIB_0__::func_139(iLocal_152))
	{
		__LIB_1__::func_281(&iLocal_152, 1, 1);
	}
	func_1179(1);
	__LIB_0__::func_172(iLocal_620);
	__LIB_0__::func_325(&iLocal_123);
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_489, 0, 1065353216 /* Float: 1f */, 0.5f, 1);
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_490, 0, 1065353216 /* Float: 1f */, 0.5f, 1);
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_141, 0, 1065353216 /* Float: 1f */, 0.5f, 1);
	__LIB_5__::func_20(0, 0);
	PED::SET_PED_CONFIG_FLAG(iLocal_127, 375, false);
	TASK::_0xFA30E2254461ADEB(Global_35, 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_718(var uParam0)
{
	if (!func_854(uParam0, 0, 0))
	{
		return false;
	}
	if (!func_1206(func_1159(3, 1), 2.2f, 1))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_127))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_121, false, false))
		{
			if (PED::IS_PED_ON_MOUNT(iLocal_127))
			{
				PED::_REMOVE_PED_FROM_MOUNT(iLocal_127, true, false);
			}
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_121, 0))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_127, iLocal_121, 0);
			}
			else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_121, 0) == iLocal_127)
			{
			}
			else if (func_1210(iLocal_121))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_127, iLocal_121, __LIB_2__::func_425(iLocal_121));
			}
		}
	}
	MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
	if (!bLocal_638)
	{
		STREAMING::REQUEST_CLIP_SET("ANIM_GROUP_LADDERS_BASE");
		bLocal_638 = true;
	}
	if (!STREAMING::HAS_CLIP_SET_LOADED("ANIM_GROUP_LADDERS_BASE"))
	{
		return false;
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_719(var uParam0)
{
	StringCopy(&cLocal_56, func_1160(10), 64);
	func_1161(uParam0, &cLocal_56, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	func_1201(0);
	STREAMING::REQUEST_CLIP_SET("ANIM_GROUP_LADDERS_BASE");
	VEHICLE::SET_MISSION_TRAIN_COORDS(iLocal_120, func_1159(3, 1));
	__LIB_5__::func_580(uParam0, iLocal_127, "JohnMarston", 0, 0, 0, 0);
	__LIB_5__::func_580(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
	__LIB_5__::func_580(uParam0, iLocal_121, "handcart", 0, 0, 0, 0);
	__LIB_5__::func_580(uParam0, iLocal_124, "P_CS_CRATETNT02X^2", 0, 0, 0, 0);
	__LIB_5__::func_580(uParam0, iLocal_125, "P_CS_CRATETNT02X^1", 0, 0, 0, 0);
	VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_120, true);
	VEHICLE::SET_TRAIN_SPEED(iLocal_120, 2.2f);
	VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_120, 2.2f);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_720(var uParam0)
{
	VEHICLE::DELETE_VEHICLE(&iLocal_121);
	__LIB_1__::func_600(0);
	func_837(uParam0);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, 524.4689f, 1748.03f, 181.5101f, 239.6652f, true, true, true);
	if (!__LIB_4__::func_257(iLocal_120))
	{
		VEHICLE::SET_MISSION_TRAIN_COORDS(iLocal_120, VEHICLE::_GET_NEAREST_TRAIN_TRACK_POSITION(384.0252f, 1786.481f, 186.5339f));
		VEHICLE::SET_TRAIN_SPEED(iLocal_120, 4.9f);
		VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_120, 4.9f);
	}
	if (!__LIB_4__::func_257(iLocal_121) && !ENTITY::IS_ENTITY_DEAD(iLocal_127))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_127, func_1159(0, 2), true, false, true, true);
		VEHICLE::SET_MISSION_TRAIN_COORDS(iLocal_121, func_1159(4, 6));
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_121, true);
		func_1186(&iLocal_127, &iLocal_121, 0, 1);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_127, false);
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_121, true);
	func_1201(0);
	__LIB_0__::func_569(joaat("MOTIONSTATE_RUN"), 2000, 0, 1, 1, 0, 0, 0);
	TASK::TASK_CLIMB_LADDER(Global_35, 2f, 0, 0);
	PED::_0x2208438012482A1A(Global_35, true, false);
	__LIB_0__::func_37(&uLocal_149);
	fLocal_136 = 3f;
	iLocal_154 = 0;
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_124, true);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_125, true);
	func_1213(1);
	return uParam0->f_607 == uParam0->f_607;
}

int func_721(var uParam0)
{
	func_1214(uParam0);
	func_1205(uParam0);
	func_1215(uParam0);
	func_1216(8f, 12f);
	func_1217();
	func_1189(uParam0);
	if (func_1207())
	{
		func_1167(uParam0, "TRN3_FL_DYN", "");
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_141))
	{
		TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_141, 1, 1065353216 /* Float: 1f */, 0.5f, 1);
	}
	func_1218();
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			func_1172(10, 30000);
			if (Global_36.f_2 > 185.5f)
			{
				if (!bLocal_640)
				{
					bLocal_640 = true;
					__LIB_5__::func_342(uParam0);
				}
				if (__LIB_5__::func_287(uParam0) > 2f)
				{
					if (func_1171(uParam0, &Global_35, 18, 1, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */))
					{
						__LIB_5__::func_342(uParam0);
					}
				}
				if (__LIB_5__::func_287(uParam0) >= 2f)
				{
					if (func_1171(uParam0, &Global_35, 19, 1, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */))
					{
						__LIB_5__::func_342(uParam0);
					}
				}
				if (__LIB_5__::func_287(uParam0) >= 2f && iLocal_639 < 3)
				{
					if (func_1171(uParam0, &Global_35, 60, 1, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */))
					{
						__LIB_5__::func_342(uParam0);
						iLocal_420[60] = 0;
						iLocal_639++;
					}
				}
			}
			else
			{
				if (bLocal_640)
				{
					bLocal_640 = false;
					__LIB_5__::func_342(uParam0);
				}
				if (__LIB_5__::func_287(uParam0) > 2f)
				{
					if (func_1171(uParam0, &Global_35, 58, 1, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */))
					{
						__LIB_5__::func_342(uParam0);
					}
				}
				if (__LIB_5__::func_287(uParam0) >= 5f)
				{
					if (func_1171(uParam0, &Global_35, 59, 1, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */))
					{
						__LIB_5__::func_342(uParam0);
					}
				}
			}
			func_1219();
			if (__LIB_2__::func_343(Global_35, iLocal_121, 1) && iLocal_637 == 5)
			{
				func_1179(1);
				__LIB_4__::func_952(uParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_722(var uParam0)
{
	if (__LIB_0__::func_139(iLocal_152))
	{
		__LIB_1__::func_281(&iLocal_152, 1, 1);
	}
	__LIB_0__::func_325(&iLocal_123);
	func_1179(1);
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_141, 0, 1065353216 /* Float: 1f */, 0.5f, 1);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_723(var uParam0)
{
	if (!func_1206(func_1159(4, 3), 0f, 0))
	{
		return false;
	}
	PED::CLEAR_PED_WETNESS(iLocal_127);
	func_1186(&Global_35, &iLocal_121, -1, 1);
	func_1186(&iLocal_127, &iLocal_121, 0, 1);
	func_1201(0);
	MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_120))
	{
		VEHICLE::SET_TRAIN_SPEED(iLocal_120, 2f);
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_121, false))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 242, true);
	}
	if (PED::IS_PED_IN_VEHICLE(iLocal_127, iLocal_121, false))
	{
		PED::SET_PED_RESET_FLAG(iLocal_127, 242, true);
	}
	VEHICLE::SET_MISSION_TRAIN_COORDS(iLocal_120, 462.8654f, 1782.153f, 186.6687f);
	PED::SET_PED_CONFIG_FLAG(iLocal_127, 133, true);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_724(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = VEHICLE::_0x635423D55CA84FC8(1094934838);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_511[iVar0]))
		{
			PROPSET::_REMOVE_VEHICLE_PROPSETS(iLocal_511[iVar0]);
		}
		iVar0++;
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_725(var uParam0)
{
	__LIB_1__::func_600(0);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 1, false, false);
	if (!__LIB_4__::func_257(iLocal_121))
	{
		if (!__LIB_2__::func_343(Global_35, iLocal_121, 1))
		{
			func_1186(&Global_35, &iLocal_121, -1, 1);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_127))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_127, true);
		__LIB_5__::func_106(uParam0, iLocal_127, "JOHN", 0);
	}
	__LIB_5__::func_106(uParam0, Global_35, "ARTHUR", 0);
	VEHICLE::_0x6DE072AC8A95FFC1(iLocal_121, 1);
	VEHICLE::_0xE6C5E2125EB210C1(joaat("FREIGHT_GROUP"), 5, 0);
	func_1220(uParam0);
	iLocal_154 = 0;
	__LIB_0__::func_37(&uLocal_149);
	fLocal_136 = 1f;
	__LIB_5__::func_372(uParam0, 0);
	__LIB_5__::func_26(uParam0, 400f);
	__LIB_5__::func_27(uParam0, 420f);
	__LIB_4__::func_944(uParam0, 33554432);
	HUD::_HIDE_HUD_COMPONENT(724769646);
	func_1213(1);
	return uParam0->f_607 == uParam0->f_607;
}

int func_726(var uParam0)
{
	func_1221(uParam0);
	func_1205(uParam0);
	func_1215(uParam0);
	func_1222(uParam0);
	func_1223(uParam0);
	HUD::_0xC9CAEAEEC1256E54(724769646);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_AIM"), false);
	if (func_1207())
	{
		func_1167(uParam0, "TRN3_FL_DYN", "");
	}
	if (!bLocal_137 && __LIB_0__::func_264(&uLocal_143) > 2f)
	{
		bLocal_137 = true;
		__LIB_4__::func_981("TRN3_HELP3", 0, 0, 1);
	}
	func_1218();
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_120, 0f, 0f, 2f, true, -1, 2000, 2000, 0);
			}
			if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_121, false) && !AITRANSPORT::_0x619E63980BFC0096(Global_35, iLocal_121, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_127, iLocal_121, false) && !AITRANSPORT::_0x619E63980BFC0096(iLocal_127, iLocal_121, 0))
				{
					PED::_0x6E8B87139854022D(Global_35, "CLIPSET@VEH_TRAIN@HANDCART@BASE_PANIC");
					PED::_0x6E8B87139854022D(iLocal_127, "CLIPSET@VEH_TRAIN@HANDCART@BASE_PANIC_JOHN");
					PED::SET_PED_CONFIG_FLAG(iLocal_127, 133, false);
					__LIB_4__::func_952(uParam0, 1);
				}
			}
			break;
		case 1:
			func_1171(uParam0, &Global_35, 34, 0, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */);
			if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_120, 0f, 0f, 2f, true, -1, 2000, 2000, 0);
			}
			if (!__LIB_0__::func_75(&uLocal_647))
			{
				__LIB_1__::func_148(&uLocal_647);
			}
			else if (__LIB_0__::func_264(&uLocal_647) < 0.2f)
			{
				AITRANSPORT::_0xBA8818212633500A(iLocal_121, 10, 1);
			}
			else
			{
				if (__LIB_0__::func_264(&uLocal_647) > 5f)
				{
					func_1171(uParam0, &Global_35, 35, 0, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */);
				}
				AITRANSPORT::_0xBA8818212633500A(iLocal_121, 10, 0);
			}
			func_1216(5f, 7f);
			func_1170(1);
			if (__LIB_0__::func_266(Global_35, 1522.035f, 1861.257f, 207.471f, 5f, 1, 1))
			{
				func_1172(11, 15000);
			}
			else
			{
				func_1179(1);
			}
			if (!__LIB_4__::func_257(iLocal_121))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_121, Local_27.f_2, true, 0))
				{
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_127, iLocal_120, false);
					bLocal_159 = true;
					func_1171(uParam0, &Global_35, 27, 0, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */);
					__LIB_4__::func_952(uParam0, 2);
					__LIB_0__::func_105(1);
					func_1179(1);
					CAM::SET_CAM_ACTIVE(iLocal_157, true);
					CAM::RENDER_SCRIPT_CAMS(true, true, 2500, true, false, 0);
					CAM::STOP_GAMEPLAY_HINT(false);
					func_1213(0);
					VEHICLE::SET_TRAIN_SPEED(iLocal_120, ENTITY::GET_ENTITY_SPEED(iLocal_121));
					ENTITY::SET_ENTITY_COLLISION(iLocal_120, false, false);
				}
				if (!__LIB_0__::func_266(Global_35, 514.3f, 1759.1f, 188.6f, 12f, 1, 1))
				{
					if (!bLocal_644)
					{
						__LIB_5__::func_372(uParam0, 6);
						bLocal_644 = true;
					}
				}
				if (!__LIB_0__::func_266(Global_35, 514.3f, 1759.1f, 188.6f, 19f, 1, 1))
				{
					if (!bLocal_645)
					{
						__LIB_5__::func_372(uParam0, 5);
						bLocal_645 = true;
					}
				}
			}
			if (!Local_235[20 /*8*/].f_3)
			{
				Local_235[20 /*8*/].f_3 = func_1202(20, 0, 0);
			}
			break;
		case 2:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (!Local_235[20 /*8*/].f_4)
			{
				if (func_1203(20, 33, -1, -1, 1, 0))
				{
					PED::SET_PED_CAN_ARM_IK(iLocal_127, false);
					PED::SET_PED_CAN_ARM_IK(Global_35, false);
					Local_235[20 /*8*/].f_4 = 1;
				}
			}
			else if (func_1198(20, 33, 0.95f))
			{
				__LIB_4__::func_952(uParam0, 29);
			}
			break;
		case 29:
			func_1179(1);
			return 1;
	}
	return 0;
}

bool func_727(var uParam0)
{
	__LIB_0__::func_325(&iLocal_123);
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	func_1179(1);
	CAM::STOP_GAMEPLAY_HINT(false);
	PED::SET_PED_CAN_ARM_IK(iLocal_127, true);
	PED::SET_PED_CAN_ARM_IK(Global_35, true);
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	HUD::_DISPLAY_HUD_COMPONENT(724769646);
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
	MISC::_0x8314FC2013ECE2DA(vLocal_641);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_728(var uParam0)
{
	if (!func_1206(538.069f, 1741.073f, 186.7765f, 16f, 0))
	{
		return false;
	}
	if (!func_837(uParam0))
	{
		return false;
	}
	VEHICLE::_0xE6C5E2125EB210C1(joaat("FREIGHT_GROUP"), 5, 0);
	if (!__LIB_0__::func_27(iLocal_135, 32))
	{
		__LIB_4__::func_570(&(uParam0->f_7375));
		__LIB_4__::func_655(&(uParam0->f_7375));
		__LIB_10__::func_925(uParam0, "MultiStart");
		__LIB_1__::func_683(&iLocal_135, 32);
	}
	if (__LIB_0__::func_27(iLocal_135, 32))
	{
		__LIB_5__::func_298(uParam0, "MultiStart");
		bLocal_652 = true;
	}
	PED::CLEAR_PED_WETNESS(iLocal_127);
	func_1200(iLocal_127, func_210(4, 5), 2, 1073741824 /* Float: 2f */);
	MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_729(var uParam0)
{
	int iVar0;
	int iVar1;
	VEHICLE::_0xE6C5E2125EB210C1(joaat("FREIGHT_GROUP"), 5, 0);
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	__LIB_5__::func_298(uParam0, "MultiStart");
	__LIB_10__::func_925(uParam0, "MultiStart");
	if (bLocal_652)
	{
		__LIB_8__::func_787(uParam0, "MultiStart");
	}
	VEHICLE::SET_MISSION_TRAIN_COORDS(iLocal_120, 527.8977f, 1749.274f, 186.6929f);
	iVar1 = VEHICLE::_0x635423D55CA84FC8(1094934838);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_511[iVar0]))
		{
			PROPSET::_REMOVE_VEHICLE_PROPSETS(iLocal_511[iVar0]);
		}
		iVar0++;
	}
	func_1220(uParam0);
	VEHICLE::SET_TRAIN_SPEED(iLocal_120, 0f);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_127))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_127, true);
	}
	func_1201(0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_730(var uParam0)
{
	func_1180(15);
	iLocal_154 = 0;
	MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), false, true, true, 30f, false);
	__LIB_1__::func_600(0);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_127))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_127, true);
		__LIB_5__::func_106(uParam0, iLocal_127, "JOHN", 0);
	}
	func_163();
	OBJECT::SET_OBJECT_TARGETTABLE(Local_14.f_10[0], false);
	__LIB_5__::func_106(uParam0, Global_35, "ARTHUR", 0);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_127))
	{
		__LIB_5__::func_106(uParam0, iLocal_127, "JOHN", 0);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_130[1]))
	{
		iLocal_130[1] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), VOLUME::_GET_VOLUME_COORDS(Local_27.f_13), VOLUME::_GET_VOLUME_ROTATION(Local_27.f_13), VOLUME::_GET_VOLUME_SCALE(Local_27.f_13));
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_124, true);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_125, true);
	__LIB_5__::func_372(uParam0, 0);
	return uParam0->f_607 == uParam0->f_607;
}

int func_731(var uParam0)
{
	int iVar0;
	func_1229(uParam0);
	__LIB_19__::func_51(uParam0, 1, 1117126656 /* Float: 75f */, 1125515264 /* Float: 150f */, 0, 0, 1, joaat("BLIP_STYLE_COMPANION"));
	func_1231(uParam0);
	func_1232();
	func_1233(uParam0);
	if (func_1207())
	{
		func_1167(uParam0, "TRN3_FL_DYN", "");
	}
	iVar0 = __LIB_4__::func_971(uParam0);
	if (iVar0 > 2 && iVar0 < 5)
	{
		if (!__LIB_0__::func_139(iLocal_650))
		{
			iLocal_650 = __LIB_1__::func_282("TRN3_UC_USE", joaat("INPUT_CONTEXT_X"), ENTITY::GET_ENTITY_COORDS(Local_14.f_10[0], true, false), 3f, 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
			__LIB_4__::func_12(iLocal_650, joaat("TRN3_B_DET"), 0, 1);
		}
		else
		{
			if (__LIB_1__::func_264(iLocal_650, 1))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_CRAFTING_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
				if (__LIB_1__::func_499())
				{
					__LIB_0__::func_101();
				}
				__LIB_1__::func_26(1);
			}
			HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Local_14.f_10[0], 1.6f, 1, 1, joaat("TRN3_B_DET"), "TRN3_B_DET", 0);
			if (__LIB_1__::func_514(iLocal_650, 1))
			{
				__LIB_4__::func_952(uParam0, 4);
				__LIB_1__::func_281(&iLocal_650, 1, 1);
			}
		}
	}
	if (iVar0 >= 4)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_CRAFTING_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
		HUD::_0xC9CAEAEEC1256E54(724769646);
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
	}
	PED::SET_PED_RESET_FLAG(Global_35, 175, false);
	switch (iVar0)
	{
		case 0:
			if (__LIB_0__::func_163(iLocal_127, 242628503))
			{
				__LIB_6__::func_914(uParam0);
				__LIB_4__::func_952(uParam0, 1);
				__LIB_5__::func_372(uParam0, 0);
			}
			break;
		case 1:
			if (!Local_235[1 /*8*/].f_3)
			{
				Local_235[1 /*8*/].f_3 = func_1202(1, 0, 0);
				func_1241(1, -1, -1, 1);
			}
			if (!bLocal_158)
			{
				if (__LIB_0__::func_163(iLocal_127, 242628503))
				{
					if (TASK::GET_SEQUENCE_PROGRESS(iLocal_127) > 0 || __LIB_0__::func_48(iLocal_127, Local_14.f_10[0], 2.5f, 1))
					{
						bLocal_158 = true;
					}
				}
			}
			if (bLocal_158)
			{
				if (!bLocal_659)
				{
					if (__LIB_0__::func_48(Global_35, iLocal_127, 4f, 1))
					{
						if (func_1242(1, 3))
						{
							bLocal_658 = true;
							bLocal_659 = true;
						}
					}
					else if (func_1242(1, 2))
					{
						bLocal_658 = false;
						bLocal_659 = true;
					}
				}
				if (bLocal_659)
				{
					if (!__LIB_0__::func_163(iLocal_127, 1369124074))
					{
						if (bLocal_658)
						{
							TASK::TASK_ENTER_ANIM_SCENE(iLocal_127, Local_235[1 /*8*/], "JohnMarston", func_1243(1, 3), 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
						}
						else
						{
							TASK::TASK_ENTER_ANIM_SCENE(iLocal_127, Local_235[1 /*8*/], "JohnMarston", func_1243(1, 2), 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
						}
					}
					if (bLocal_658 && __LIB_0__::func_48(iLocal_127, Local_14.f_10[0], 2.5f, 1))
					{
						func_1171(uParam0, &iLocal_127, 38, 1, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */);
					}
					if (ANIMSCENE::_0x337F1CC8EE895601(Local_235[1 /*8*/], "JohnMarston"))
					{
						if (bLocal_658)
						{
							__LIB_4__::func_952(uParam0, 3);
						}
						else
						{
							__LIB_4__::func_952(uParam0, 2);
						}
					}
				}
			}
			break;
		case 2:
			if (func_1203(1, 2, -1, -1, 1, 0))
			{
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_235[1 /*8*/], false))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(Local_235[1 /*8*/], "s_Arthur_Detonates_Bridge_Loop", 1))
				{
					__LIB_4__::func_952(uParam0, 3);
				}
			}
			break;
		case 3:
			func_1244(uParam0);
			func_1245();
			if (bLocal_658)
			{
				func_1171(uParam0, &iLocal_127, 38, 1, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */);
				if (iLocal_420[38] == 3)
				{
					if (!bLocal_660)
					{
						__LIB_5__::func_372(uParam0, 3);
						bLocal_660 = true;
					}
				}
			}
			else if (!bLocal_660)
			{
				__LIB_5__::func_372(uParam0, 3);
				bLocal_660 = true;
			}
			if (!Local_235[1 /*8*/].f_4)
			{
				Local_235[1 /*8*/].f_4 = func_1203(1, 3, -1, -1, 1, 0);
			}
			break;
		case 4:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
			__LIB_1__::func_281(&iLocal_650, 1, 1);
			if (!Local_235[2 /*8*/].f_3)
			{
				Local_235[2 /*8*/].f_3 = func_1202(2, 0, 0);
				func_1241(2, -1, -1, 1);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_235[2 /*8*/]) && func_1242(2, 4))
			{
				if (!__LIB_0__::func_163(Global_35, 1369124074))
				{
					WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 1);
					TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_235[2 /*8*/], "ARTHUR", func_1243(2, 4), 1f, 0, 0, 20000, -1082130432 /* Float: -1f */);
				}
				if (ANIMSCENE::_0x337F1CC8EE895601(Local_235[2 /*8*/], "ARTHUR"))
				{
					__LIB_4__::func_952(uParam0, 5);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				}
			}
			break;
		case 5:
			func_1245();
			if (func_1203(2, 4, -1, -1, 1, 0))
			{
				__LIB_4__::func_952(uParam0, 6);
			}
			break;
		case 6:
			HUD::_0xC9CAEAEEC1256E54(724769646);
			func_1245();
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_235[2 /*8*/], false))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(Local_235[2 /*8*/], "s_Arthur_Detonates_Bridge_Loop", 1))
				{
					__LIB_4__::func_952(uParam0, 8);
				}
			}
			break;
		case 8:
			HUD::_0xC9CAEAEEC1256E54(724769646);
			bLocal_653 = true;
			func_1245();
			__LIB_4__::func_952(uParam0, 9);
			__LIB_1__::func_148(&uLocal_661);
			break;
		case 9:
			HUD::_0xC9CAEAEEC1256E54(724769646);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			func_1245();
			if (iLocal_654 >= 4)
			{
				if (!__LIB_0__::func_139(iLocal_651))
				{
					iLocal_651 = __LIB_1__::func_745("TRN3_C_DET", joaat("INPUT_CONTEXT_ACTION"), Global_35, 3, 1, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("LONG_TIMED_EVENT"), 0, 0);
				}
				func_1247(uParam0);
			}
			if (__LIB_0__::func_567(iLocal_651, 1))
			{
				__LIB_1__::func_281(&iLocal_651, 1, 1);
				__LIB_4__::func_952(uParam0, 10);
				__LIB_1__::func_281(&iLocal_651, 1, 1);
				return 1;
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_732(var uParam0)
{
	int iVar0;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	func_1179(1);
	__LIB_0__::func_325(&iLocal_123);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_64[iVar0 /*9*/]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_64[iVar0 /*9*/]));
		}
		iVar0++;
	}
	func_1249(1);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_733(var uParam0)
{
	MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_121))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_121);
	}
	if (!__LIB_0__::func_27(iLocal_135, 64))
	{
		__LIB_4__::func_570(&(uParam0->f_7375));
		__LIB_4__::func_655(&(uParam0->f_7375));
		if (__LIB_0__::func_871())
		{
			__LIB_10__::func_925(uParam0, "1-HighHonor");
			__LIB_1__::func_683(&iLocal_135, 128);
		}
		else
		{
			__LIB_10__::func_925(uParam0, "2-LowHonor");
		}
		__LIB_1__::func_683(&iLocal_135, 64);
	}
	if (__LIB_0__::func_27(iLocal_135, 64))
	{
		if (__LIB_0__::func_27(iLocal_135, 128))
		{
			__LIB_5__::func_298(uParam0, "1-HighHonor");
		}
		else
		{
			__LIB_5__::func_298(uParam0, "2-LowHonor");
		}
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_734(var uParam0)
{
	MISC::SET_BIT(&(Global_1956580.f_1), 6);
	if (__LIB_0__::func_871())
	{
		__LIB_10__::func_925(uParam0, "1-HighHonor");
		__LIB_5__::func_298(uParam0, "1-HighHonor");
		__LIB_8__::func_787(uParam0, "1-HighHonor");
	}
	else
	{
		__LIB_10__::func_925(uParam0, "2-LowHonor");
		__LIB_5__::func_298(uParam0, "2-LowHonor");
		__LIB_8__::func_787(uParam0, "2-LowHonor");
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_127))
	{
		__LIB_8__::func_806(uParam0, iLocal_127, 0, 0, 0, 0, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		__LIB_8__::func_806(uParam0, Global_35, 0, 0, 0, 0, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_122))
	{
		__LIB_5__::func_580(uParam0, iLocal_122, "WAGON02X", 0, 0, 0, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_10[0]))
	{
		__LIB_5__::func_580(uParam0, Local_14.f_10[0], "p_cs_detonator01x", 0, 0, 0, 0);
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_735(var uParam0)
{
	func_1180(17);
	iLocal_154 = 0;
	MISC::CLEAR_BIT(&(Global_1956580.f_1), 6);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	__LIB_4__::func_705(1, 1);
	return uParam0->f_607 == uParam0->f_607;
}

int func_736(var uParam0)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
	HUD::_0xC9CAEAEEC1256E54(724769646);
	func_1180(17);
	__LIB_0__::func_568(Global_36, 150f, 0);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	bVar0 = func_1252();
	if (iLocal_139 && iLocal_161)
	{
		if (!bVar0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_122))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_122, func_1159(6, 3), func_1253(6, 3), true, false, true);
			}
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_235[4 /*8*/], "IDLE_LOOP", true, false);
		}
	}
	if (Local_235[4 /*8*/].f_4)
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_235[4 /*8*/], false))
		{
			fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_SCRIPT_LEFT_AXIS_X"));
			fVar2 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_SCRIPT_LEFT_AXIS_Y"));
			if (!__LIB_0__::func_75(&uLocal_666))
			{
				__LIB_1__::func_148(&uLocal_666);
			}
			if (__LIB_0__::func_264(&uLocal_666) > 1f)
			{
				if ((((fVar1 > 0.25f || fVar1 < -0.25f) || fVar2 > 0.25f) || fVar2 < -0.25f) || PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_SPRINT")) > 0.9f)
				{
					iLocal_139 = 1;
				}
			}
			if (__LIB_0__::func_264(&uLocal_666) > 41f && !bVar0)
			{
				iLocal_139 = 1;
			}
		}
		if (ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_235[4 /*8*/], "IDLE_LOOP"))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_235[4 /*8*/], false))
			{
				ENTITY::SET_ENTITY_COLLISION(Global_35, true, false);
				return 1;
			}
		}
	}
	else
	{
		Local_235[4 /*8*/].f_4 = func_1203(4, 7, -1, -1, 1, 0);
	}
	return 0;
}

bool func_737(var uParam0)
{
	__LIB_2__::func_426(&iLocal_127);
	__LIB_0__::func_325(&iLocal_123);
	__LIB_4__::func_705(1, 0);
	__LIB_1__::func_774(1, 0, 1, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_122))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_122);
	}
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PED::SET_PED_KEEP_TASK(Global_35, true);
	}
	PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_739(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, __LIB_5__::func_393()))
	{
		return iVar0;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, __LIB_5__::func_393());
	switch (iVar1)
	{
		case 0:
			iLocal_125 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_125, true, true);
			ENTITY::SET_ENTITY_PROOFS(iLocal_125, 24, false);
			iVar0 = 1;
			break;
		case 1:
			iLocal_124 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_124, true, true);
			ENTITY::SET_ENTITY_PROOFS(iLocal_124, 24, false);
			iVar0 = 1;
			break;
		case 2:
			iLocal_527[2] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_527[2], true, true);
			iVar0 = 1;
			break;
		case 3:
			iLocal_527[3] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_527[3], true, true);
			iVar0 = 1;
			break;
	}
	return iVar0;
}

bool func_740(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, __LIB_5__::func_393()))
	{
		return iVar0;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, __LIB_5__::func_393());
	switch (iVar1)
	{
		case 15:
			iLocal_127 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_127))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_127, true, true);
			}
			iVar0 = 1;
			break;
	}
	return iVar0;
}

void func_746(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
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
	if (!__LIB_0__::func_1(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!__LIB_0__::func_1(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!__LIB_0__::func_1(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (__LIB_0__::func_1(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!__LIB_0__::func_1(*iParam0, 32768))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam1, true);
	}
	if (!__LIB_0__::func_1(*iParam0, 1))
	{
		PAD::_0xF239400E16C23E08(0, 0);
	}
	if (!__LIB_0__::func_1(*iParam0, 65536))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	}
	if (!__LIB_0__::func_1(*iParam0, 4) && !__LIB_0__::func_1(*iParam0, 2))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_0__::func_1(*iParam0, 2048))
	{
		__LIB_0__::func_713(0, 0);
	}
	if (__LIB_0__::func_1(*iParam0, 8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (__LIB_0__::func_1(*iParam0, 256))
	{
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
	}
	if (__LIB_0__::func_1(*iParam0, 8192))
	{
		func_1258();
	}
	if (!__LIB_0__::func_1(*iParam0, 262144))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	}
	if (!__LIB_0__::func_1(*iParam0, 512))
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (!__LIB_0__::func_1(*iParam0, 1024))
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
		if (!__LIB_0__::func_1(*iParam0, 16))
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
					vVar3.x = iParam3;
					vVar3.f_1 = iParam4;
					vVar3.f_2 = iParam5;
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
	if (!__LIB_0__::func_1(*iParam0, 4096))
	{
		__LIB_0__::func_142(Global_35);
	}
	if (!__LIB_0__::func_1(*iParam0, 1048576))
	{
		UIFEED::_0xDD1232B332CBB9E7(7, 1, 0);
	}
	if (!__LIB_0__::func_1(*iParam0, 2097152))
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
	*iParam0 = 0;
}

void func_748(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_84(uParam0, 2048) && !__LIB_0__::func_86(__LIB_4__::func_548(uParam0)))
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
			func_822(iVar1, __LIB_4__::func_548(uParam0), __LIB_4__::func_549(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_822(iVar3, __LIB_4__::func_548(uParam0), __LIB_4__::func_549(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_749(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_4__::func_548(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_4__::func_548(uParam0) };
			func_822(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

int func_757(int iParam0, int iParam1)
{
	var uVar0;
	return func_1282(&uVar0, iParam0, iParam1);
}

bool func_814(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!__LIB_0__::func_31(iParam1))
	{
		return false;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(*iParam2) && __LIB_1__::func_22(iParam1)) && __LIB_0__::func_167(iParam1) == *iParam2)
	{
		return true;
	}
	*iParam2 = func_1313(iParam1, 1, 0, iParam4, iParam5, iParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
	{
		func_1314(uParam0, *iParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		__LIB_4__::func_703(iParam1);
		return true;
	}
	return false;
}

void func_822(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_822(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_822(iVar2, vParam1, fParam4, iParam5, iParam6);
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

bool func_824(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	switch (__LIB_0__::func_81(uParam0))
	{
		case 0:
			if (!__LIB_5__::func_343(iParam1, &(uParam0->f_8), &(uParam0->f_6)))
			{
				return true;
			}
			__LIB_0__::func_19(uParam0, 1);
			break;
		case 1:
			__LIB_4__::func_560(uParam0);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			iVar0 = 0;
			func_746(&iVar0, 0, 2, 0, 0, 0, 0);
			__LIB_0__::func_19(uParam0, 2);
			break;
		case 2:
			if (__LIB_6__::func_918(uParam0))
			{
				__LIB_0__::func_568(uParam0->f_8, 5000f, 0);
				PED::_0x4759CC730F947C81();
				__LIB_1__::func_283(&(uParam0->f_3), 1);
				__LIB_0__::func_19(uParam0, 3);
			}
			break;
		case 3:
			if (__LIB_0__::func_265(&(uParam0->f_3)) >= 1f)
			{
				__LIB_0__::func_19(uParam0, 4);
			}
			break;
		case 4:
			if (!__LIB_0__::func_91())
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				if (CAM::DOES_CAM_EXIST(uParam0->f_2))
				{
					CAM::DESTROY_CAM(uParam0->f_2, false);
				}
			}
			iVar1 = 1;
			__LIB_5__::func_129(&iVar1, 0);
			AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
			__LIB_0__::func_19(uParam0, 0);
			return true;
	}
	return false;
}

bool func_826(var uParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = __LIB_5__::func_475(uParam0);
	if (__LIB_5__::func_279(uParam0, __LIB_4__::func_939(uParam0)) <= 3)
	{
		iVar0 = __LIB_4__::func_939(uParam0);
	}
	Var1 = { __LIB_5__::func_299(uParam0, iVar0) };
	if (func_1348(&(uParam0->f_10792), Var1, __LIB_0__::func_81(&(uParam0->f_10792)), 0))
	{
		__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 262144);
		if (__LIB_4__::func_562(&(uParam0->f_10792), 524288))
		{
			__LIB_5__::func_33(uParam0, 67108864);
			__LIB_4__::func_563(&(uParam0->f_10792), 524288);
		}
		__LIB_5__::func_344(&(uParam0->f_7375), &(uParam0->f_10792));
		return true;
	}
	return false;
}

bool func_828(var uParam0, struct<4> Param1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param1))
	{
		return true;
	}
	if (__LIB_4__::func_937(uParam0, 16777216))
	{
		__LIB_5__::func_345(uParam0);
		__LIB_5__::func_56(uParam0);
		return true;
	}
	if (func_1354(Param1, &(uParam0->f_7375), uParam0))
	{
		return true;
	}
	if (__LIB_0__::func_81(uParam0) == 0)
	{
		__LIB_10__::func_929(uParam0);
	}
	if (__LIB_0__::func_91())
	{
		if (!__LIB_4__::func_937(uParam0, 262144))
		{
			CAM::STOP_GAMEPLAY_HINT(true);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			if (CAM::DOES_CAM_EXIST(uParam0->f_609.f_2))
			{
				CAM::DESTROY_CAM(uParam0->f_609.f_2, false);
			}
			__LIB_5__::func_326(&(uParam0->f_10792));
			__LIB_4__::func_974(uParam0);
			__LIB_4__::func_969(uParam0, 524288);
			__LIB_5__::func_346(uParam0);
			__LIB_5__::func_26(uParam0, 30f);
			__LIB_5__::func_27(uParam0, 40f);
			__LIB_4__::func_944(uParam0, 262144);
		}
		if (!__LIB_4__::func_937(uParam0, 524288) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_7375.f_804))
		{
			__LIB_4__::func_944(uParam0, 524288);
		}
	}
	return false;
}

bool func_837(var uParam0)
{
	vector3 vVar0;
	bool bVar3;
	switch (__LIB_4__::func_939(uParam0))
	{
		case 0:
			vVar0 = { func_1159(0, 4) };
			bVar3 = false;
			break;
		case 1:
		case 2:
			vVar0 = { func_1159(0, 2) };
			bVar3 = false;
			break;
		case 3:
		case 4:
			vVar0 = { func_1159(4, 6) };
			bVar3 = true;
			break;
		case 5:
			break;
		default:
			vVar0 = { func_1159(0, 4) };
			bVar3 = true;
			break;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_121))
	{
		iLocal_121 = VEHICLE::_CREATE_MISSION_TRAIN(1054492269, VEHICLE::_GET_NEAREST_TRAIN_TRACK_POSITION(vVar0), bVar3, false, true, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_121))
	{
		if (__LIB_4__::func_939(uParam0) == iLocal_51 || __LIB_4__::func_939(uParam0) == iLocal_54)
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_121, false);
		}
		if (!__LIB_4__::func_257(iLocal_121))
		{
			AUDIO::SET_HORN_ENABLED(iLocal_121, false);
			VEHICLE::SET_TRAIN_SPEED(iLocal_121, 0f);
			VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_121, 0f);
		}
		if (__LIB_4__::func_939(uParam0) == iLocal_54)
		{
		}
		VEHICLE::_0x1A861F899EBBE17C(iLocal_121, 1);
		return true;
	}
	return false;
}

int func_838(int iParam0, bool bParam1)
{
	if (!__LIB_3__::func_358(Local_14.f_1))
	{
		Local_14.f_1 = { __LIB_3__::func_355() };
	}
	if (__LIB_0__::func_239(&(Local_14.f_1), 1))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_3[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_3[0] = VEHICLE::CREATE_VEHICLE(joaat("WAGON02X"), 568.4582f, 1693.846f, 186.6473f, 105.9003f, true, true, false, false);
		__LIB_6__::func_906(Local_14.f_1, Local_14.f_3[0]);
		__LIB_5__::func_510(Local_14.f_3[0], Local_14);
		if (bParam1)
		{
			if (iParam0 == 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	__LIB_0__::func_240(&(Local_14.f_1), 1);
	return 1;
}

int func_839(var uParam0)
{
	char* sVar0;
	switch (__LIB_4__::func_939(uParam0))
	{
		case 0:
			__LIB_5__::func_33(uParam0, 134217728);
			__LIB_5__::func_33(uParam0, 33554432);
			__LIB_5__::func_33(uParam0, 8388608);
			if (((CAM::_0xA24C1D341C6E0D53(1, 0, 0) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()) || CAM::_0xD1BA66940E94C547()) || __LIB_4__::func_948(uParam0, 8388608))
			{
				if (__LIB_0__::func_871())
				{
					sVar0 = "1-HighHonor-Multi";
				}
				else
				{
					sVar0 = "2-LowHonor-Multi";
				}
			}
			else if (__LIB_0__::func_871())
			{
				sVar0 = "1-HighHonor-Normal";
			}
			else
			{
				sVar0 = "2-LowHonor-Normal";
			}
			__LIB_5__::func_298(uParam0, sVar0);
			__LIB_8__::func_787(uParam0, sVar0);
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			func_1200(iLocal_127, func_210(4, 5), 2, 1073741824 /* Float: 2f */);
			break;
		case 25:
			break;
	}
	return 1;
}

int func_841(var uParam0)
{
	float fVar0;
	switch (__LIB_4__::func_939(uParam0))
	{
		case 0:
			__LIB_0__::func_568(Global_36, 150f, 0);
			if (!__LIB_4__::func_257(iLocal_121))
			{
				if (__LIB_18__::func_197(uParam0, Global_35, 0, 0, 1, 1))
				{
				}
				if (__LIB_18__::func_197(uParam0, iLocal_127, 0, 0, 1, 1))
				{
				}
				if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_121, false))
				{
					PED::SET_PED_RESET_FLAG(Global_35, 242, true);
				}
				if (PED::IS_PED_IN_VEHICLE(iLocal_127, iLocal_121, false))
				{
					PED::SET_PED_RESET_FLAG(iLocal_127, 242, true);
				}
				if (__LIB_17__::func_531(uParam0, iLocal_121, 0, 0, 1, 0))
				{
				}
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_7375.f_804) > 0.95f)
				{
					func_1164(0);
				}
			}
			break;
		case 3:
			func_854(uParam0, 0, 0);
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_7375.f_804) > 0.1f)
			{
				if (iLocal_533 == 0)
				{
					VEHICLE::_0xCFE122EC635CC2B2(iLocal_120, "DANGER", 0, 0);
					iLocal_533++;
				}
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_7375.f_804) > 0.35f)
			{
				if (iLocal_533 == 1)
				{
					VEHICLE::_0xCFE122EC635CC2B2(iLocal_120, "DANGER", 0, 0);
					iLocal_533++;
				}
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_7375.f_804) > 0.7f)
			{
				if (iLocal_533 == 2)
				{
					VEHICLE::_0xCFE122EC635CC2B2(iLocal_120, "DANGER", 0, 0);
					iLocal_533++;
				}
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_7375.f_804) < 0.2f)
			{
				VEHICLE::SET_MISSION_TRAIN_COORDS(iLocal_120, func_1159(3, 1));
			}
			else
			{
				VEHICLE::SET_TRAIN_SPEED(iLocal_120, 2.8f);
			}
			if (__LIB_17__::func_531(uParam0, iLocal_121, 0, 0, 1, 1))
			{
				if (__LIB_5__::func_52(uParam0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_121))
					{
						if (!bLocal_532)
						{
							VEHICLE::DELETE_MISSION_TRAIN(&iLocal_121);
							bLocal_532 = true;
						}
						func_837(uParam0);
					}
				}
			}
			if (__LIB_18__::func_197(uParam0, iLocal_127, 0, 0, 1, 1))
			{
				if (__LIB_0__::func_272(iLocal_127, 0))
				{
					if (!__LIB_5__::func_52(uParam0))
					{
						if (!__LIB_2__::func_343(iLocal_127, iLocal_121, 0))
						{
							func_1186(&iLocal_127, &iLocal_121, 0, 1);
							return 1;
						}
					}
				}
			}
			break;
		case 4:
			break;
		case 5:
			if (__LIB_18__::func_197(uParam0, iLocal_127, 0, 0, 1, 1))
			{
				func_1180(15);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_127, false))
			{
				PED::_0xE0B61ED8BB37712F(iLocal_127);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				PED::_0xE0B61ED8BB37712F(Global_35);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_121))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_7375.f_804, "HANDCART", iLocal_121);
				VEHICLE::DELETE_VEHICLE(&iLocal_121);
			}
			STREAMING::_REQUEST_IMAP(1492058366);
			break;
		case 25:
			if (!Local_235[4 /*8*/].f_3)
			{
				func_1202(4, 0, 0);
			}
			__LIB_0__::func_568(Global_36, 150f, 0);
			fVar0 = ANIMSCENE::_GET_ANIM_SCENE_DURATION(uParam0->f_7375.f_804);
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_7375.f_804) > (fVar0 - 1.1f))
			{
				if (!Local_235[4 /*8*/].f_4)
				{
					Local_235[4 /*8*/].f_4 = func_1203(4, 7, -1, -1, 1, 0);
				}
				else
				{
					return 1;
				}
			}
			break;
	}
	return 1;
}

int func_843(var uParam0)
{
	switch (__LIB_4__::func_939(uParam0))
	{
		case 0:
			PED::SET_PED_INTO_VEHICLE(Global_35, iLocal_121, 0);
			PED::SET_PED_RESET_FLAG(Global_35, 242, true);
			PED::SET_PED_INTO_VEHICLE(iLocal_127, iLocal_121, -1);
			PED::SET_PED_RESET_FLAG(iLocal_127, 242, true);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_124))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_124, iLocal_121, 0, -0.5392f, -0.2399f, 0.7911f, 0f, 0f, 180f, false, false, true, false, 2, true, false, false);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_124, false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_125))
			{
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_125, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_125, iLocal_121, 0, -0.5354f, -0.2399f, 1.0195f, 0f, 0f, 183f, false, false, true, false, 2, true, false, false);
			}
			if (!PED::IS_PED_IN_VEHICLE(Global_35, iLocal_121, false))
			{
				return 0;
			}
			if (!PED::IS_PED_IN_VEHICLE(iLocal_127, iLocal_121, false))
			{
				return 0;
			}
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_121))
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_121);
			}
			STREAMING::_REQUEST_IMAP(1492058366);
			break;
		case 25:
			if (!Local_235[4 /*8*/].f_3)
			{
				Local_235[4 /*8*/].f_3 = func_1202(4, 0, 0);
				return 0;
			}
			if (!func_1203(4, 7, -1, -1, 1, 0))
			{
				return 0;
			}
			__LIB_0__::func_568(Global_36, 150f, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_122))
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_122);
			}
			iLocal_161 = 1;
			__LIB_1__::func_774(1, 0, 1, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			if (!__LIB_0__::func_75(&uLocal_534))
			{
				__LIB_1__::func_148(&uLocal_534);
				return 0;
			}
			else if (__LIB_0__::func_264(&uLocal_534) < 1f)
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_850(int iParam0, bool bParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(Local_14.f_9))
	{
		Local_14.f_9 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_10[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_10[0] = OBJECT::CREATE_OBJECT(joaat("P_DETONATOR01X"), 549.8099f, 1711.209f, 184.7516f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_10[0], 0.2029f, 15.4831f, -122.366f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_10[0], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_10[0], Local_14);
	__LIB_5__::func_510(Local_14.f_10[0], Local_14.f_9);
}

bool func_854(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	bVar0 = true;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_124))
	{
		if (__LIB_4__::func_939(uParam0) > iLocal_50 || bParam2)
		{
			iLocal_124 = OBJECT::CREATE_OBJECT(joaat("P_CS_TRAINCRATETNT01X"), 523.07f, 1748.62f, 181.53f, true, true, false, false, true);
			ENTITY::DETACH_ENTITY(iLocal_124, true, true);
			ENTITY::SET_ENTITY_COORDS(iLocal_124, 523.07f, 1748.62f, 181.48f, true, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_124, 0f, 0f, 41.37f, 2, true);
		}
		else
		{
			iLocal_124 = OBJECT::CREATE_OBJECT(joaat("P_CS_TRAINCRATETNT02X"), 523.07f, 1748.62f, 181.53f, true, true, false, false, true);
		}
		bVar0 = false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_125))
	{
		if (__LIB_4__::func_939(uParam0) > iLocal_50 || bParam2)
		{
			iLocal_125 = OBJECT::CREATE_OBJECT(joaat("P_CS_TRAINCRATETNT01X"), 523.01f, 1749.69f, 181.48f, true, true, false, false, true);
			ENTITY::DETACH_ENTITY(iLocal_125, true, true);
			ENTITY::SET_ENTITY_COORDS(iLocal_125, 523.01f, 1749.69f, 181.48f, true, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_125, 0f, 0f, -34f, 2, true);
		}
		else
		{
			iLocal_125 = OBJECT::CREATE_OBJECT(joaat("P_CS_TRAINCRATETNT02X"), 523.01f, 1749.69f, 181.48f, true, true, false, false, true);
		}
		bVar0 = false;
	}
	if (!bVar0)
	{
		return false;
	}
	if (bParam2 || __LIB_4__::func_939(uParam0) > iLocal_50)
	{
		if (!func_1203(22, 34, -1, -1, 1, 1))
		{
			return false;
		}
	}
	else if (!__LIB_4__::func_257(iLocal_121))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_124))
		{
			if (__LIB_4__::func_939(uParam0) == iLocal_50)
			{
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_124, true);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_125))
		{
			if (__LIB_4__::func_939(uParam0) == iLocal_50)
			{
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_125, true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_124))
	{
		ENTITY::SET_ENTITY_PROOFS(iLocal_124, 24, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_125))
	{
		ENTITY::SET_ENTITY_PROOFS(iLocal_125, 24, true);
	}
	return bVar0;
}

void func_855(var uParam0)
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	iVar1 = __LIB_4__::func_939(uParam0);
	if (!bLocal_195)
	{
		if (iVar1 < 3)
		{
			if (bVar0)
			{
				bLocal_195 = true;
				bLocal_194 = false;
			}
			STREAMING::_REQUEST_IMAP(-437187151);
			STREAMING::_REQUEST_IMAP(1424964403);
			STREAMING::_REQUEST_IMAP(-163787010);
			STREAMING::_REQUEST_IMAP(-200959126);
		}
		else if (iVar1 <= 5)
		{
			STREAMING::_REQUEST_IMAP(920612809);
			STREAMING::_REQUEST_IMAP(820079465);
			STREAMING::_REQUEST_IMAP(423891836);
			STREAMING::_REQUEST_IMAP(777001839);
			bLocal_195 = true;
		}
	}
}

int func_856(vector3 vParam0, float fParam3, int iParam4)
{
	var uVar0;
	struct<11> Var1;
	Var1.f_10 = 7;
	Var1 = 1;
	Var1.f_1 = 1;
	Var1.f_2 = iParam4;
	Var1.f_6 = { vParam0 };
	Var1.f_9 = fParam3;
	return __LIB_4__::func_720(&uVar0, &Var1);
}

void func_859()
{
	Local_27 = VOLUME::_CREATE_VOLUME_BOX(519.6006f, 1755.446f, 181.1989f, 0f, 0f, -32.58303f, 25.92257f, 7.82098f, 3.574271f);
	Local_27.f_1 = VOLUME::_CREATE_VOLUME_BOX(509.6167f, 1746.504f, 209.0018f, 0f, 0f, -33.87368f, 367.3003f, 543.0839f, 157.6053f);
	Local_27.f_2 = VOLUME::_CREATE_VOLUME_BOX(555.9315f, 1724.97f, 188.642f, 0f, 0f, -44.61856f, 9.237823f, 9.3796f, 12.82076f);
	Local_27.f_3 = VOLUME::_CREATE_VOLUME_BOX(555.6974f, 1725.785f, 190.0276f, 0f, 0f, -41.7154f, 13.01082f, 5.286514f, 7.727495f);
	Local_27.f_4 = VOLUME::_CREATE_VOLUME_BOX(524.9969f, 1750.615f, 182.9869f, 0f, 0f, -34.49255f, 8.882463f, 6.713348f, 4.172645f);
	Local_27.f_5 = VOLUME::_CREATE_VOLUME_BOX(2282.88f, 2093.824f, 92.84779f, -5.890664f, 0f, 169.2213f, 5f, 5f, 5f);
	Local_27.f_6 = VOLUME::_CREATE_VOLUME_BOX(567.4898f, 1694.382f, 186.9538f, 0f, 0f, 14.19041f, 10f, 10f, 10f);
	Local_27.f_7 = VOLUME::_CREATE_VOLUME_BOX(554.0662f, 1724.661f, 190.1317f, 0f, 0f, 45.44393f, 10.05198f, 21.70696f, 9.329959f);
	Local_27.f_8 = VOLUME::_CREATE_VOLUME_BOX(567.755f, 1692.71f, 185.916f, 0f, 0f, 0f, 5f, 5f, 5f);
	Local_27.f_9 = VOLUME::_CREATE_VOLUME_BOX(502.9773f, 1765.995f, 181.7477f, 0f, 0f, -28.50009f, 46.47399f, 13.77628f, 7.248968f);
	Local_27.f_10 = VOLUME::_CREATE_VOLUME_BOX(501.9664f, 1758.078f, 184.9178f, 0f, 0f, -36.50263f, 88.5174f, 38.56314f, 10.33058f);
	Local_27.f_11 = VOLUME::_CREATE_VOLUME_BOX(582.994f, 1681.3f, 185.896f, 0f, 0f, 0f, 5f, 5f, 5f);
	Local_27.f_12 = VOLUME::_CREATE_VOLUME_BOX(501.8192f, 1758.187f, 181.7477f, 0f, 0f, -36.50263f, 73.15085f, 38.56314f, 26.87938f);
	Local_27.f_13 = VOLUME::_CREATE_VOLUME_BOX(549.2331f, 1710.59f, 185.0065f, 0f, 0f, -27.62171f, 1.040104f, 1.194012f, 5f);
	Local_27.f_14 = VOLUME::_CREATE_VOLUME_BOX(478.4466f, 1780.434f, 181.9312f, 0f, 0f, -22.00164f, 3.92644f, 3.405666f, 1.986393f);
	Local_27.f_15 = VOLUME::_CREATE_VOLUME_BOX(567.755f, 1692.71f, 185.916f, 0f, 0f, 0f, 5f, 5f, 5f);
	Local_27.f_16 = VOLUME::_CREATE_VOLUME_BOX(567.755f, 1692.71f, 185.916f, 0f, 0f, 0f, 5f, 5f, 5f);
	Local_27.f_17 = VOLUME::_CREATE_VOLUME_BOX(478.4466f, 1780.434f, 181.9312f, 0f, 0f, -22.00164f, 3.92644f, 3.405666f, 1.986393f);
	Local_27.f_18 = VOLUME::_CREATE_VOLUME_BOX(582.994f, 1681.3f, 185.896f, 0f, 0f, 0f, 5f, 5f, 5f);
	Local_27.f_19 = VOLUME::_CREATE_VOLUME_BOX(526.0311f, 1746.659f, 187.1588f, 0f, 0f, -36.51291f, 2.291646f, 2.06114f, 2.054348f);
	Local_27.f_20 = VOLUME::_CREATE_VOLUME_BOX(478.4466f, 1780.434f, 181.9312f, 0f, 0f, -22.00164f, 3.92644f, 3.405666f, 1.986393f);
	Local_27.f_21 = VOLUME::_CREATE_VOLUME_BOX(582.994f, 1681.3f, 185.896f, 0f, 0f, 0f, 5f, 5f, 5f);
}

void func_862(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	func_1381();
	__LIB_1__::func_538(0);
	__LIB_17__::func_532();
	if (!bLocal_537)
	{
		bLocal_537 = func_1383(uParam0);
	}
	if (!__LIB_0__::func_255(iLocal_128, 0))
	{
		if (!__LIB_0__::func_163(iLocal_128, -982327190))
		{
			TASK::CLEAR_PED_TASKS(iLocal_128, true, false);
			TASK::TASK_STAND_STILL(iLocal_128, -1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_3[0]))
	{
		VEHICLE::_0xA19447D83294E29F(Local_14.f_3[0], &uVar0, &iVar1);
		if (iVar1 > 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_671))
			{
				iLocal_671 = __LIB_3__::func_568(Local_14.f_3[0], 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_670))
			{
				iLocal_670 = __LIB_3__::func_568(Local_14.f_3[0], 0);
			}
			if (!bLocal_672)
			{
				if (!__LIB_0__::func_255(iLocal_671, 0) && !__LIB_0__::func_255(iLocal_670, 0))
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_671, 301, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_670, 301, true);
					bLocal_672 = true;
				}
			}
		}
		if (((ENTITY::DOES_ENTITY_EXIST(iLocal_670) && ENTITY::IS_ENTITY_DEAD(iLocal_670)) || (ENTITY::DOES_ENTITY_EXIST(iLocal_671) && ENTITY::IS_ENTITY_DEAD(iLocal_671))) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_14.f_3[0], false, false))
		{
			func_1167(uParam0, "TRN3_FL_WAG", "");
		}
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_35, iLocal_120, 1, 1))
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, 0, iLocal_120);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_127))
	{
		if (PED::IS_PED_DEAD_OR_DYING(iLocal_127, true))
		{
			func_1167(uParam0, "TRN3_FL_JOHND", "");
		}
	}
	POPULATION::_0xF45E46DEECF7DF6E(2016, 0, 0, -1, -1);
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_64[iVar2 /*9*/]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_64[iVar2 /*9*/], Global_35, 1, 1))
			{
				func_1167(uParam0, "TRN3_FL_DYN", "");
			}
		}
		iVar2++;
	}
	if (__LIB_4__::func_939(uParam0) < 3)
	{
		if (func_1166())
		{
			func_1167(uParam0, "TRN3_FL_DYN", "");
		}
	}
}

bool func_879(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	if (__LIB_4__::func_937(uParam0, -2147483648))
	{
		return true;
	}
	if (__LIB_5__::func_481(uParam0, iParam1, 4))
	{
		if (__LIB_4__::func_939(uParam0) != 25 && __LIB_4__::func_939(uParam0) != 26)
		{
			if (!__LIB_4__::func_937(uParam0, 512) && !__LIB_4__::func_948(uParam0, 4))
			{
				__LIB_5__::func_599(uParam0, func_34(iParam1), func_34(iParam2), iParam1, iParam2);
			}
			else
			{
				Var0 = { func_34(iParam2) };
				Global_1347394 = { Var0 };
				Global_1347394.f_3 = Var0.f_3;
				Global_1572864.f_10 = __LIB_5__::func_24(iParam2);
			}
		}
		func_1395(uParam0);
		if (__LIB_5__::func_261(uParam0))
		{
			__LIB_5__::func_465(uParam0);
		}
		if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 33554432) && __LIB_4__::func_937(uParam0, 524288))
		{
			UILOG::_UILOG_PRINT_CACHED_OBJECTIVE();
		}
		__LIB_4__::func_969(uParam0, 524288);
		__LIB_4__::func_977(&(uParam0->f_7375), 4);
		if (__LIB_5__::func_576(uParam0))
		{
			__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 8388608);
			HUD::_HIDE_HUD_COMPONENT(-1679307491);
			HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
			__LIB_5__::func_112();
		}
		return true;
	}
	return false;
}

bool func_881(var uParam0, int iParam1)
{
	struct<4> Var0;
	if (__LIB_4__::func_948(uParam0, 16384))
	{
		if (func_826(uParam0))
		{
			__LIB_5__::func_326(&(uParam0->f_10792));
			__LIB_4__::func_969(uParam0, 2097152);
			__LIB_4__::func_958(uParam0, 16384);
			__LIB_4__::func_945(uParam0, 128);
			return true;
		}
		return false;
	}
	if (!__LIB_4__::func_937(uParam0, 4))
	{
		__LIB_0__::func_16(uParam0, iParam1);
		__LIB_4__::func_944(uParam0, 4);
	}
	Var0 = { __LIB_5__::func_299(uParam0, iParam1) };
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2))
	{
		if (__LIB_4__::func_937(uParam0, 2097152))
		{
			if (func_826(uParam0))
			{
				__LIB_4__::func_969(uParam0, 2097152);
				func_828(uParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_828(uParam0, Var0);
		}
	}
	else if (__LIB_4__::func_937(uParam0, 2097152))
	{
		if (func_826(uParam0))
		{
			__LIB_4__::func_969(uParam0, 2097152);
			__LIB_5__::func_56(uParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2))
	{
		return func_828(uParam0, Var0);
	}
	return true;
}

Vector3 func_918(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 586.0394f, 1683.299f, 186.2204f;
				case 1:
					return 570.9974f, 1696.307f, 186.0713f;
				case 2:
					return 519.5751f, 1755.372f, 186.9295f;
				case 3:
					return 524.4401f, 1749.756f, 186.9157f;
				case 4:
					return 573.1107f, 1698.45f, 186.59f;
				case 5:
					return 524.9948f, 1747.31f, 181.5699f;
				case 6:
					return 528.9896f, 1750.13f, 186.67f;
				case 7:
					return 524.7712f, 1754.272f, 186.6483f;
				case 8:
					return 523.8546f, 1748.771f, 187.8632f;
				case 9:
					return 525.8954f, 1746.51f, 186.6525f;
				case 10:
					return 526.8568f, 1747.394f, 186.8976f;
				case 11:
					return 520.4483f, 1753.306f, 187.6476f;
				case 12:
					return 525.9009f, 1753.491f, 187.6476f;
				case 13:
					return 526.4863f, 1751.991f, 186.8033f;
				case 14:
					return 523.9384f, 1748.564f, 187.6811f;
				case 15:
					return 525.0548f, 1748.647f, 187.1811f;
				case 16:
					return 525.0981f, 1750.033f, 186.6811f;
				case 17:
					return 523.3766f, 1750.229f, 187.1811f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 526.0549f, 1746.225f, 186.5623f;
				case 1:
					return 527.928f, 1748.893f, 186.8676f;
				case 2:
					return 525.212f, 1750.02f, 181.8354f;
				case 3:
					return 523.6773f, 1749.064f, 181.5417f;
				case 4:
					return 523.7659f, 1754.446f, 181.5996f;
				case 5:
					return 532.6547f, 1747.44f, 183.107f;
				case 6:
					return 524.0072f, 1753.44f, 181.7689f;
				case 7:
					return 507.8524f, 1762.773f, 181.6189f;
				case 8:
					return 495.0759f, 1773.835f, 181.6189f;
				case 9:
					return 524.6713f, 1747.306f, 181.5722f;
				case 10:
					return 524.2899f, 1749.585f, 187.5722f;
				case 11:
					return 522.3314f, 1755.785f, 181.4927f;
				case 12:
					return 509.4566f, 1764.388f, 181.4941f;
				case 13:
					return 491.8895f, 1773.833f, 181.4989f;
				case 14:
					return 477.3477f, 1780.464f, 181.6679f;
				case 15:
					return 523.3371f, 1748.486f, 181.7485f;
				case 16:
					return 523.0171f, 1748.758f, 181.7485f;
				case 17:
					return 522.9443f, 1749.416f, 181.7485f;
				case 18:
					return 523.1886f, 1749.704f, 181.7485f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 566.5494f, 1694.825f, 184.7089f;
				case 1:
					return 556.8991f, 1715.167f, 186.1348f;
				case 2:
					return 549.4f, 1710.63f, 185.73f;
				case 3:
					return 579.2576f, 1706.436f, 186.6996f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 524.8606f, 1751.104f, 181.6125f;
				case 1:
					return 373.4132f, 1784.242f, 186.9992f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 519.6257f, 1755.341f, 186.5866f;
				case 1:
					return 517.5583f, 1756.714f, 186.5834f;
				case 2:
					return 559.9664f, 1722.982f, 186.9784f;
				case 3:
					return 469.638f, 1780.41f, 186.9002f;
				case 4:
					return 555.9871f, 1721.233f, 186.5234f;
				case 5:
					return 554.3624f, 1721.564f, 186.4164f;
				case 6:
					return 510.7883f, 1761.273f, 186.7587f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 541.9368f, 1735.784f, 184.0084f;
				case 1:
					return 534.4351f, 1742.187f, 184.0084f;
				case 2:
					return 536.4305f, 1745.064f, 184.0084f;
				case 3:
					return 548.8553f, 1731.248f, 184.0084f;
				case 4:
					return 521.8831f, 1755.432f, 182.3117f;
				case 5:
					return 509.023f, 1764.148f, 182.3117f;
				case 6:
					return 541.9887f, 1736.381f, 183.0634f;
				case 7:
					return 534.0793f, 1742.697f, 183.1134f;
				case 8:
					return 536.0452f, 1745.312f, 183.1134f;
				case 9:
					return 548.5228f, 1731.569f, 183.0634f;
				case 10:
					return 522.314f, 1754.69f, 181.6117f;
				case 11:
					return 509.6675f, 1763.381f, 181.6117f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 567.911f, 1694.518f, 186.647f;
				case 1:
					return 549.4f, 1710.63f, 185.73f;
				case 2:
					return 550.34f, 1710.67f, 185.78f;
				case 3:
					return 613.783f, 1633.727f, 186.1938f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_919(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 49.4198f;
				case 1:
					return 21.8148f;
				case 2:
					return 53.1294f;
				case 3:
					return 141.2937f;
				case 4:
					return 46.0935f;
				case 5:
					return -19.3054f;
				case 6:
					return 51.5833f;
				case 7:
					return 62.2556f;
				case 8:
					return 250.22f;
				case 9:
					return 410.7838f;
				case 10:
					return 150.5142f;
				case 11:
					return 154.5142f;
				case 12:
					return 140.5142f;
				case 13:
					return 143.9259f;
				case 14:
					return 293.7693f;
				case 15:
					return 293.7693f;
				case 16:
					return 293.7693f;
				case 17:
					return 293.7693f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 49.3148f;
				case 1:
					return 58.9894f;
				case 2:
					return 485.0854f;
				case 3:
					return 128.535f;
				case 4:
					return 333.8664f;
				case 5:
					return 365.0719f;
				case 6:
					return -103.4281f;
				case 7:
					return 490.5719f;
				case 8:
					return 245.5719f;
				case 9:
					return 227.8807f;
				case 10:
					return 47.8805f;
				case 11:
					return 58.1241f;
				case 12:
					return 47.9975f;
				case 13:
					return 58.0108f;
				case 14:
					return 426.0345f;
				case 15:
					return 48.0603f;
				case 16:
					return 42.0602f;
				case 17:
					return -50.0602f;
				case 18:
					return -55.0602f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 27.0798f;
				case 1:
					return 117.0598f;
				case 2:
					return -32.51f;
				case 3:
					return -126.92f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 171.8149f;
				case 1:
					return 287.8148f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 45.8148f;
				case 1:
					return -136.1851f;
				case 2:
					return 109.1294f;
				case 3:
					return 255.463f;
				case 4:
					return -36.9401f;
				case 5:
					return -36.9401f;
				case 6:
					return 55.4169f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 354.0854f;
				case 1:
					return 33.5853f;
				case 2:
					return 399.0854f;
				case 3:
					return 49.5853f;
				case 4:
					return 208.1011f;
				case 5:
					return 217.1011f;
				case 6:
					return -188.1192f;
				case 7:
					return -146.1194f;
				case 8:
					return 227.3806f;
				case 9:
					return -130.1195f;
				case 10:
					return 26.6009f;
				case 11:
					return 38.1009f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 110.63f;
				case 1:
					return -32f;
				case 2:
					return 50.19f;
				case 3:
					return 166.32f;
			}
			break;
	}
	return 0f;
}

void func_1083(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_305(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_305(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_305(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1551(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_308(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_621(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1556(Var0);
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

void func_1086(bool bParam0)
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
		func_305(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_305(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_305(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_305(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_305(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_305(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_305(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_305(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_305(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_305(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_305(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_621(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_621(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_621(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_621(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_621(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_621(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_621(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_621(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_621(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_621(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_621(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1131(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1131(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1131(iVar63, -915411861, 1, 0, 0));
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

Vector3 func_1159(int iParam0, int iParam1)
{
	return func_918(iParam0, iParam1);
}

char* func_1160(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TRN3_GTB_OBJ1";
		case 1:
			return "TRN3_GTB_OBJ2";
		case 2:
			return "TRN3_GTB_OBJ2a";
		case 3:
			return "TRN3_GTB_OBJ3";
		case 4:
			return "TRN3_GTB_OBJ4";
		case 5:
			return "TRN3_PD_OBJ0";
		case 6:
			return "TRN3_PD_PICK";
		case 7:
			return "TRN3_PD_OBJ1";
		case 8:
			return "TRN3_PD_PICK";
		case 9:
			return "TRN3_BB_OBJ2";
		case 10:
			return "TRN3_RTC_OBJ1";
		case 11:
			return "TRN3_ET_OBJ1";
		case 12:
			return "TRN3_ET_OBJ2";
		case 13:
			return "TRN3_O_FOLLOW";
		case 14:
			return "TRN3_EB_OBJ1";
		default:
			break;
	}
	return "";
}

void func_1161(var uParam0, char* sParam1, float fParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)
{
	char* sVar0;
	sVar0 = __LIB_0__::func_958(iParam7, sParam1, sParam3, sParam4, sParam5, sParam6);
	if (MISC::GET_HASH_KEY(sParam1) != uParam0->f_5302)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
		uParam0->f_5302 = MISC::GET_HASH_KEY(sParam1);
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(1, func_85(uParam0), MISC::GET_HASH_KEY(sParam1), sParam1, fParam2 >= 0.9f, false, false);
	}
	__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 33554432);
}

void func_1164(bool bParam0)
{
	ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_125, bParam0);
	ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_124, bParam0);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_125, !bParam0);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_124, !bParam0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_124, iLocal_121, 0, -0.594512f, -0.268918f, 0.798585f, 0f, 0f, 181.473f, false, false, false, false, 2, true, false, false);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_125, iLocal_121, 0, -0.573751f, -0.253617f, 1.04759f, 0f, 0f, 180.886f, false, false, false, false, 2, true, false, false);
}

void func_1165(var uParam0)
{
	switch (__LIB_4__::func_979(uParam0))
	{
		case 0:
			func_1609(uParam0, func_1160(0), 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			func_1161(uParam0, func_1160(0), -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_4__::func_981("TRN3_HELP3", 0, 0, 1);
			__LIB_5__::func_372(uParam0, -1);
			break;
		case 1:
			__LIB_5__::func_372(uParam0, -1);
			break;
		case 2:
			break;
		case 20:
			__LIB_5__::func_372(uParam0, -1);
			break;
	}
}

bool func_1166()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_124))
	{
		if (((((IntToFloat(ENTITY::GET_ENTITY_HEALTH(iLocal_124)) <= 0f || FIRE::IS_ENTITY_ON_FIRE(iLocal_124)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_124, Global_35, 1, 1)) || WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_124, joaat("WEAPON_THROWN_MOLOTOV"), 0)) || FIRE::_0xA4454592DCF7C992(iLocal_124)) || FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iLocal_124, true, false), 0.6f) > 0)
		{
			FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(iLocal_124, true, false), 25, 0.5f, true, false, 1f);
			return true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_125))
	{
		if (((((IntToFloat(ENTITY::GET_ENTITY_HEALTH(iLocal_125)) <= 0f || FIRE::IS_ENTITY_ON_FIRE(iLocal_125)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_125, Global_35, 1, 1)) || WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_125, joaat("WEAPON_THROWN_MOLOTOV"), 0)) || FIRE::_0xA4454592DCF7C992(iLocal_125)) || FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iLocal_125, true, false), 0.6f) > 0)
		{
			FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(iLocal_125, true, false), 25, 0.5f, true, false, 1f);
			return true;
		}
	}
	return false;
}

void func_1167(var uParam0, char* sParam1, char* sParam2)
{
	if (!bLocal_507)
	{
		__LIB_4__::func_935(uParam0, 32);
		__LIB_5__::func_505(uParam0, sParam1, sParam2, 1, 0);
		bLocal_507 = true;
	}
}

void func_1169(var uParam0)
{
	if (__LIB_4__::func_257(iLocal_121))
	{
		return;
	}
	if (!__LIB_0__::func_27(iLocal_135, 2))
	{
		if (ENTITY::GET_ENTITY_SPEED(iLocal_121) <= 0.3f)
		{
			if (!__LIB_0__::func_75(&uLocal_538))
			{
				__LIB_1__::func_283(&uLocal_538, 0);
			}
			else if (__LIB_0__::func_264(&uLocal_538) >= 15f)
			{
				if (func_1171(uParam0, &Global_35, 39, 1, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */))
				{
					iLocal_542++;
					__LIB_1__::func_148(&uLocal_538);
					if (iLocal_542 >= 4)
					{
						__LIB_1__::func_683(&iLocal_135, 2);
					}
				}
			}
		}
		else if (__LIB_0__::func_75(&uLocal_538))
		{
			__LIB_0__::func_37(&uLocal_538);
		}
	}
}

void func_1170(int iParam0)
{
	if (!__LIB_4__::func_257(iLocal_121))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_ITEM_WHEEL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_NEXT_WEAPON"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_PREV_WEAPON"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WEAPON_SPECIAL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_HANDCART_ACCELERATE"), true);
	}
}

bool func_1171(var uParam0, int iParam1, int iParam2, bool bParam3, float fParam4, float fParam5)
{
	switch (iLocal_420[iParam2])
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(*iParam1) && (__LIB_0__::func_266(*iParam1, Global_36, fParam4, 1, 1) || fParam4 == -1f))
			{
				if (bParam3)
				{
					if (!__LIB_5__::func_236(1) && !AUDIO::_0xFE5C6177064BD390(0))
					{
						if (__LIB_5__::func_314(uParam0, func_1173(iParam2), 0))
						{
							iLocal_420[iParam2] = 1;
						}
					}
				}
				else if (!__LIB_5__::func_236(1))
				{
					if (__LIB_5__::func_314(uParam0, func_1173(iParam2), 0))
					{
						iLocal_420[iParam2] = 1;
					}
				}
			}
			break;
		case 1:
			if (__LIB_6__::func_903(func_1173(iParam2)))
			{
				iLocal_420[iParam2] = 2;
				return true;
			}
			break;
		case 2:
			if (__LIB_8__::func_684(func_1173(iParam2)))
			{
				if ((fParam5 > -1f && !__LIB_0__::func_266(*iParam1, Global_36, fParam5, 1, 1)) || ENTITY::IS_ENTITY_DEAD(*iParam1))
				{
					__LIB_5__::func_20(1, 0);
					iLocal_420[iParam2] = 3;
				}
			}
			else
			{
				iLocal_420[iParam2] = 3;
			}
			break;
	}
	return false;
}

void func_1172(int iParam0, int iParam1)
{
	if (!bLocal_491)
	{
		if (!__LIB_0__::func_75(&uLocal_492))
		{
			__LIB_1__::func_148(&uLocal_492);
		}
		else if (__LIB_1__::func_871(&uLocal_492) > iParam1)
		{
			__LIB_1__::func_422(func_1160(iParam0), 7500, 0, 1, 0, 0, -1, -1, 0);
			bLocal_491 = true;
			__LIB_0__::func_37(&uLocal_492);
		}
		if (__LIB_5__::func_352(func_1160(iParam0)))
		{
			bLocal_491 = true;
			__LIB_0__::func_37(&uLocal_492);
		}
	}
}

char* func_1173(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TRN_GB_STOP";
		case 1:
			return "TRN3_GB_CRATE";
		case 2:
			return "TRN3_GB_DRCRATE";
		case 8:
			return "TRN3_GB_LOWCRAT";
		case 3:
			return "TRN3_GB_C1START";
		case 4:
			return "TRN3_GB_C1CLOSE";
		case 5:
			return "TRN3_GB_C1DONE";
		case 11:
			return "TRN3_GB_GOTCRAT";
		case 6:
			return "TRN3_GB_START";
		case 7:
			return "TRN3_GB_BANT1";
		case 14:
			return "TRN3_GB_IDLE";
		case 12:
			return "TRN3_PD_GRAB";
		case 13:
			return "TRN3_PD_PLACE";
		case 15:
			return "TRN3_PD_JOHNCRT";
		case 16:
			return "TRN3_PD_PASS";
		case 17:
			return "TRN3_PD_TRAINYL";
		case 18:
			return "TRN3_IG22_CO1";
		case 19:
			return "TRN3_IG22_CO2";
		case 20:
			return "TRN3_IG22_GETOB";
		case 25:
			return "TRN3_ET_CLOSE";
		case 26:
			return "TRN3_ET_QUICK";
		case 27:
			return "TRN3_ET_JUMP";
		case 28:
			return "TRN3_LD_RIGHT1";
		case 30:
			return "TRN3_LD_LEFT";
		case 31:
			return "TRN3_LD_RIGHT";
		case 32:
			return "TRN3_LD_EDGE";
		case 33:
			return "TRN3_LD_GOBACK";
		case 36:
			return "TRN3_EXT_LOE";
		case 37:
			return "TRN3_HERE";
		case 38:
			return "TRN3_IG9";
		case 34:
			return "TRN3_ET_START";
		case 35:
			return "TRN3_ET_HURRY";
		case 39:
			return "TRN3_GB_IDLERE";
		case 41:
			return "TRN3_PLNG_DAWD";
		case 40:
			return "TRN3_PLNG_CMON";
		case 42:
			return "TRN3_GB_CRATE1W";
		case 43:
			return "TRN3_GB_CRATE2W";
		case 44:
			return "TRN3_GB_GOTIT";
		case 45:
			return "TRN3_GB_INPOS";
		case 46:
			return "TRN3_GB_INPOS1W";
		case 47:
			return "TRN3_GB_INPOS2W";
		case 48:
			return "TRN3_PD_GRABW";
		case 49:
			return "TRN3_PD_IDLE";
		case 50:
			return "TRN3_PD_DYNRE";
		case 51:
			return "TRN3_PD_NODYN";
		case 52:
			return "TRN3_PD_BANT1";
		case 53:
			return "TRN3_PD_BANT2";
		case 55:
			return "TRN3_PD_HURRY";
		case 56:
			return "TRN3_PD_NOTDONE";
		case 57:
			return "TRN3_PD_GOBACK";
		case 21:
			return "TRN3_GB_C1CLOSE";
		case 22:
			return "TRN3_GB_LOWCRAT";
		case 23:
			return "TRN3_GB_C1DONE";
		case 24:
			return "TRN3_GB_GOTIT";
		case 58:
			return "TRN3_RC_HURRY";
		case 59:
			return "TRN3_RC_HURRY2";
		case 60:
			return "TRN3_RC_NOTON";
		case 54:
			return "TRN3_LB_UP";
		default:
			break;
	}
	return "";
}

void func_1176()
{
	float fVar0;
	float fVar1;
	if (!__LIB_4__::func_257(iLocal_121))
	{
		fVar0 = ENTITY::GET_ENTITY_SPEED(iLocal_121);
		fVar1 = (fVar0 - (0.9f * MISC::GET_FRAME_TIME()));
		if (fVar1 < 0f)
		{
			fVar1 = 0f;
		}
		VEHICLE::_0xA72B1BF3857B94D7(iLocal_121, 1);
		VEHICLE::SET_TRAIN_SPEED(iLocal_121, fVar1);
		VEHICLE::_0xD0116DF21E6C7B36(iLocal_121, 0.4f);
	}
}

void func_1177(int iParam0, int iParam1, int iParam2)
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	if (iParam0 == 1)
	{
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
	}
	else
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
	}
	if (iParam2 == 1)
	{
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
	}
	if (iParam1 == 1)
	{
		HUD::_0xC9CAEAEEC1256E54(724769646);
	}
}

void func_1179(bool bParam0)
{
	__LIB_0__::func_37(&uLocal_492);
	bLocal_491 = false;
	if (!bParam0)
	{
		__LIB_0__::func_769();
	}
}

void func_1180(int iParam0)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_127) && iParam0 != iLocal_510)
	{
		iLocal_510 = iParam0;
	}
	else
	{
		return;
	}
	if (iLocal_510 == 7)
	{
		TASK::CLEAR_PED_TASKS(iLocal_127, true, false);
	}
	switch (iLocal_510)
	{
		case 2:
			func_1617(iLocal_127, Global_35);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_127, Global_35, -1, -1f, __LIB_3__::func_745(15f), -1f);
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_121))
			{
				TASK::SET_PED_PATH_CAN_USE_LADDERS(iLocal_127, true);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_140, 0, 71310860, -1, 0, 0, -1);
				TASK::TASK_CLIMB_LADDER(0, 2f, 1, 1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1159(0, 5), 1f, 20000, 0.25f, 0, func_1253(0, 5));
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_127, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				PED::SET_PED_CONFIG_FLAG(iLocal_127, 391, true);
			}
			break;
		case 4:
			func_1617(iLocal_127, Global_35);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1159(0, 5), 1f, 20000, 0.25f, 0, func_1253(0, 5));
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_127, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 7:
			TASK::TASK_JUMP(iLocal_127, true);
			break;
		case 5:
			break;
		case 6:
			break;
		case 8:
			TASK::TASK_CARRIABLE(Local_64[3 /*9*/], joaat("LARGE_DYNAMITE_BUNDLE"), iLocal_127, 1, 0);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_489, 10, 67111940, -1, 0, 0, -1);
			TASK::TASK_ENTER_ANIM_SCENE(0, Local_235[9 /*8*/], "player_zero", Local_235[9 /*8*/].f_2, 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
			__LIB_1__::func_474(iLocal_127, &iVar0, 0, 0, 1, 1);
			break;
		case 9:
			break;
		case 10:
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_127, sLocal_489, 0, 67243020, -1, 0, 0, -1);
			break;
		case 11:
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_127, Global_35, -1, -1f, -1f, -1f);
			break;
		case 12:
			if (PED::_GET_PED_CROUCH_MOVEMENT(iLocal_127))
			{
				PED::_SET_PED_CROUCH_MOVEMENT(iLocal_127, false, 0, false);
			}
			TASK::SET_PED_PATH_CAN_USE_LADDERS(iLocal_127, true);
			TASK::CLEAR_PED_TASKS(iLocal_127, true, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_127, true);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_489, 0, 67241996, -1, 0, 0, -1);
			TASK::TASK_CLIMB_LADDER(0, 2f, 1, 1);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1159(1, 10), 3f, 20000, 0.25f, 0, 40000f);
			TASK::TASK_ENTER_VEHICLE(0, iLocal_121, 20000, 0, 3f, 1, 0);
			__LIB_1__::func_474(iLocal_127, &iVar0, 0, 0, 1, 1);
			break;
		case 15:
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "trn3_GoToDetonator", 0, 3084, -1, 0, 0, -1);
			TASK::TASK_ACHIEVE_HEADING(0, 37.3158f, 0);
			TASK::TASK_STAND_STILL(0, -1);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_127, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 17:
			if (!__LIB_2__::func_343(iLocal_127, iLocal_122, 1))
			{
				func_1186(&iLocal_127, &iLocal_122, -1, 1);
			}
			TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_127, iLocal_122, "Trn3_WagonLeave", 524419, 0, 14, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
			break;
	}
}

int func_1186(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, false, false))
	{
		return 0;
	}
	if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam1, iParam2) != *iParam0)
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, iParam2))
		{
			if (bParam3 && func_1210(*iParam1))
			{
				iParam2 = __LIB_2__::func_425(*iParam1);
			}
			else
			{
				return 0;
			}
		}
		if (PED::IS_PED_ON_MOUNT(*iParam0))
		{
			PED::_REMOVE_PED_FROM_MOUNT(*iParam0, true, false);
		}
		PED::SET_PED_INTO_VEHICLE(*iParam0, *iParam1, iParam2);
	}
	return 1;
}

void func_1188(var uParam0)
{
	switch (__LIB_4__::func_979(uParam0))
	{
		case 1:
			if (func_1171(uParam0, &Global_35, 1, 1, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */))
			{
				__LIB_5__::func_372(uParam0, -1);
			}
			break;
		case 2:
			break;
		case 3:
			if (iLocal_598 != 9 && iLocal_598 != 8)
			{
				if (func_1171(uParam0, &Global_35, 28, 0, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */))
				{
					bLocal_560 = true;
					__LIB_5__::func_372(uParam0, -1);
				}
			}
			break;
		case 4:
			if (iLocal_598 != 9 && iLocal_598 != 8)
			{
				if (func_1171(uParam0, &Global_35, 31, 0, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */))
				{
					bLocal_561 = true;
					__LIB_5__::func_372(uParam0, -1);
				}
			}
			break;
		case 5:
			if (iLocal_598 != 9 && iLocal_598 != 8)
			{
				if (func_1171(uParam0, &Global_35, 30, 0, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */))
				{
					bLocal_562 = true;
					__LIB_5__::func_372(uParam0, -1);
				}
			}
			break;
		case 6:
			if (iLocal_598 != 9 && iLocal_598 != 8)
			{
				if (func_1171(uParam0, &Global_35, 32, 0, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */))
				{
					bLocal_563 = true;
					__LIB_5__::func_372(uParam0, -1);
				}
			}
			break;
		case 7:
			if (iLocal_598 != 9 && iLocal_598 != 8)
			{
				if (func_1171(uParam0, &Global_35, 32, 0, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */))
				{
					bLocal_563 = true;
					__LIB_5__::func_372(uParam0, -1);
				}
			}
			break;
	}
}

void func_1189(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(Local_27.f_10))
	{
		if (!func_1166())
		{
			if (!__LIB_1__::func_205(Global_35, Local_27.f_10, 1, 0))
			{
				if (bLocal_508)
				{
					if (Global_36.f_2 < 178f)
					{
						func_1167(uParam0, "TRN3_FAIL_BRG", "");
					}
				}
				else
				{
					func_1167(uParam0, "TRN3_FAIL_BRG", "");
				}
			}
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_27.f_12))
	{
		if (!__LIB_1__::func_205(Global_35, Local_27.f_12, 1, 0))
		{
			if (!bLocal_138)
			{
				__LIB_1__::func_422("TRN3_R_Bridge", 7500, 0, 1, 0, 0, -1, -1, 0);
				bLocal_138 = true;
			}
		}
		else
		{
			bLocal_138 = false;
		}
	}
}

void func_1190()
{
	if (iLocal_510 == 5)
	{
		switch (iLocal_598)
		{
			case 0:
				if (func_1203(14, 11, -1, -1, 1, 0))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_235[14 /*8*/], "b_breakout", false, false);
					func_1620(1);
				}
				break;
			case 1:
				if (func_1198(14, 11, 0.97f))
				{
					func_1620(2);
				}
				break;
			case 2:
				if (func_1203(14, 13, -1, -1, 1, 0))
				{
					func_1620(3);
				}
				break;
			case 4:
				if (func_1203(14, 14, -1, -1, 1, 0))
				{
					func_1620(5);
				}
				break;
			case 5:
				if (func_1198(14, 14, 0.97f))
				{
					func_1620(6);
				}
				break;
			case 6:
				if (func_1203(14, 15, -1, -1, 1, 0))
				{
					func_1620(7);
				}
				break;
			case 7:
				if (func_1198(14, 15, 0.97f))
				{
					func_1620(8);
				}
				break;
			case 8:
				iLocal_599 = func_1621();
				if (!__LIB_6__::func_904())
				{
					if (func_1203(14, iLocal_599, -1, -1, 1, 0))
					{
						iLocal_594++;
						if (iLocal_594 > 3)
						{
							iLocal_594 = 0;
						}
						func_1620(9);
					}
				}
				break;
			case 9:
				if (func_1198(14, iLocal_599, 0.97f))
				{
					func_1620(4);
				}
				break;
			case 10:
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_235[14 /*8*/], "b_breakout", true, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_235[14 /*8*/], "P_CS_CRATETNT01X", iLocal_125, 0);
				if (func_1203(14, 16, -1, -1, 1, 0))
				{
					if (func_1198(14, 16, 0.01f))
					{
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
						if (__LIB_0__::func_163(Global_35, 76834332))
						{
							TASK::CLEAR_PED_TASKS(Global_35, true, false);
						}
						if (func_1203(15, 23, -1, -1, 1, 0))
						{
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
							func_1620(11);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_126))
							{
								OBJECT::DELETE_OBJECT(&iLocal_126);
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
							PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
						}
					}
				}
				break;
			case 11:
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_235[14 /*8*/], "b_breakout", false, false);
				if (func_1198(14, 16, 0.9f))
				{
					func_1620(2);
				}
				break;
			case 12:
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_235[14 /*8*/], "P_CS_CRATETNT01X^1", iLocal_124, 0);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_235[14 /*8*/], "b_breakout", true, false);
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_235[14 /*8*/], func_1243(14, 16)))
				{
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(Local_235[14 /*8*/], func_1243(14, 16));
				}
				if (func_1203(14, 17, -1, -1, 1, 0))
				{
					if (func_1198(14, 17, 0.01f))
					{
						if (func_1203(15, 24, -1, -1, 1, 0))
						{
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
							func_1620(13);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_126))
							{
								OBJECT::DELETE_OBJECT(&iLocal_126);
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
							PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
						}
					}
				}
				break;
			case 13:
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_235[14 /*8*/], "b_breakout", false, false);
				if (func_1198(14, 17, 0.2f))
				{
					func_1620(14);
				}
				break;
			case 14:
				break;
		}
	}
}

bool func_1191(var uParam0)
{
	switch (iLocal_154)
	{
		case 0:
			func_1180(1);
			__LIB_1__::func_281(&iLocal_152, 1, 1);
			__LIB_0__::func_325(&iLocal_123);
			if (!MAP::DOES_BLIP_EXIST(iLocal_123))
			{
				iLocal_123 = __LIB_4__::func_983(408396114, ENTITY::GET_ENTITY_COORDS(iLocal_125, true, false), 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_123, "TRN3_B_CRATE");
			}
			__LIB_1__::func_324(func_1160(1));
			func_1609(uParam0, func_1160(1), 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			func_1161(uParam0, func_1160(1), -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iLocal_154 = 1;
			break;
		case 1:
			if (iLocal_510 == 1)
			{
				if (!Local_235[19 /*8*/].f_4)
				{
					Local_235[19 /*8*/].f_4 = func_1203(19, 32, -1, -1, 1, 0);
				}
			}
			if (__LIB_5__::func_287(uParam0) >= 0f)
			{
				if (!__LIB_4__::func_257(iLocal_121))
				{
					if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_121, false))
					{
						if (__LIB_0__::func_272(Global_35, 0) && !__LIB_0__::func_163(Global_35, joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
						{
							TASK::TASK_LEAVE_VEHICLE(Global_35, iLocal_121, 0, 0);
						}
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_121, false);
					}
				}
			}
			if (func_1198(19, 32, 1065017672 /* Float: 0.98f */))
			{
				iLocal_154 = 2;
			}
			break;
		case 2:
			return uParam0->f_607 == uParam0->f_607;
	}
	return false;
}

void func_1192(var uParam0, int iParam1)
{
	if (__LIB_4__::func_971(uParam0) != iParam1)
	{
		__LIB_4__::func_952(uParam0, iParam1);
		iLocal_154 = 0;
	}
}

bool func_1193(var uParam0, int iParam1)
{
	if (__LIB_0__::func_264(&uLocal_605) < 2f)
	{
		func_1624();
	}
	else if (PED::GET_PED_CONFIG_FLAG(Global_35, 43, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
	}
	switch (iLocal_154)
	{
		case 0:
			if (!MAP::DOES_BLIP_EXIST(iLocal_123))
			{
				if (iParam1 == 0)
				{
					iLocal_123 = __LIB_4__::func_983(408396114, ENTITY::GET_ENTITY_COORDS(iLocal_125, true, false), 1);
					func_1161(uParam0, func_1160(1), -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_1__::func_324(func_1160(1));
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_123, "TRN3_B_CRATE");
				}
			}
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_121, true);
			PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
			__LIB_1__::func_281(&iLocal_152, 1, 1);
			iLocal_604 = 0;
			__LIB_5__::func_372(uParam0, 1);
			__LIB_1__::func_148(&uLocal_601);
			if (iParam1 == 0)
			{
				iLocal_154 = 1;
			}
			__LIB_1__::func_148(&uLocal_605);
			if (iParam1 == 1)
			{
				iLocal_123 = __LIB_4__::func_983(408396114, ENTITY::GET_ENTITY_COORDS(iLocal_124, true, false), 1);
				func_1609(uParam0, func_1160(2), 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				func_1161(uParam0, func_1160(2), -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_1__::func_324(func_1160(2));
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_123, "TRN3_B_CRATE");
				ENTITY::SET_ENTITY_COORDS(iLocal_125, 523.0157f, 1749.689f, 181.4796f, true, false, true, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_125, 0f, 0f, -32f, 2, true);
				iLocal_154 = 1;
			}
			break;
		case 1:
			if (iParam1 == 1)
			{
				func_1171(uParam0, &iLocal_127, 5, 1, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */);
			}
			if (iParam1 == 0)
			{
				func_1625(iLocal_125);
			}
			else
			{
				func_1625(iLocal_124);
			}
			if (__LIB_0__::func_139(iLocal_152))
			{
				if (iParam1 == 0)
				{
					HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_125, 1.6f, 1, 1, joaat("TRN3_G_CRATE"), "TRN3_G_CRATE", 0);
				}
				else
				{
					HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_124, 1.6f, 1, 1, joaat("TRN3_G_CRATE"), "TRN3_G_CRATE", 0);
				}
			}
			if (iParam1 == 0)
			{
				func_1172(1, 10000);
			}
			else if (iParam1 == 1)
			{
				func_1172(2, 10000);
			}
			func_1171(uParam0, &iLocal_127, 1, 1, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */);
			if (__LIB_0__::func_567(iLocal_152, 1))
			{
				iLocal_154 = 2;
			}
			if (!__LIB_1__::func_205(Global_35, Local_27.f_4, 1, 0))
			{
				if (bLocal_160 && iParam1 == 0)
				{
					if (iLocal_598 != 9 && iLocal_598 != 8)
					{
						if (func_1171(uParam0, &iLocal_127, 2, 1, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */))
						{
							__LIB_1__::func_148(&uLocal_601);
						}
					}
				}
				if (__LIB_0__::func_264(&uLocal_601) > 10f)
				{
					if ((iLocal_598 != 9 && iLocal_598 != 8) && iLocal_604 < 3)
					{
						if (iParam1 == 0)
						{
							if (func_1171(uParam0, &iLocal_127, 42, 0, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */))
							{
								iLocal_604++;
								__LIB_1__::func_148(&uLocal_601);
								iLocal_420[42] = 0;
							}
						}
						else if (func_1171(uParam0, &iLocal_127, 43, 0, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */))
						{
							iLocal_604++;
							__LIB_1__::func_148(&uLocal_601);
							iLocal_420[43] = 0;
						}
					}
				}
			}
			break;
		case 2:
			__LIB_0__::func_37(&uLocal_605);
			func_1179(1);
			__LIB_1__::func_281(&iLocal_152, 1, 1);
			__LIB_0__::func_325(&iLocal_123);
			WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 1, 1);
			return uParam0->f_607 == uParam0->f_607;
	}
	return false;
}

bool func_1194(var uParam0, int iParam1)
{
	func_1177(1, 0, 1);
	switch (iLocal_154)
	{
		case 0:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_235[16 /*8*/]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_235[16 /*8*/]);
			}
			if (iParam1 == 0)
			{
				bLocal_495 = true;
				__LIB_0__::func_172(iLocal_585);
			}
			else
			{
				bLocal_495 = false;
				__LIB_0__::func_172(iLocal_586);
			}
			if (__LIB_0__::func_102())
			{
				__LIB_1__::func_26(1);
			}
			iLocal_154 = 1;
			break;
		case 1:
			func_1172(3, 10000);
			func_1624();
			if (bLocal_608)
			{
				if (bLocal_495)
				{
					ENTITY::DETACH_ENTITY(iLocal_125, false, true);
					PED::_0xCE7A6C1D5CDE1F9D(Global_35, iLocal_125, "P_CS_CRATETNT01X_PH_R_HAND", "LOCO_ATTACH_CRATE_TNT");
				}
				else
				{
					ENTITY::DETACH_ENTITY(iLocal_124, false, true);
					PED::_0xCE7A6C1D5CDE1F9D(Global_35, iLocal_124, "P_CS_CRATETNT01X_PH_R_HAND", "LOCO_ATTACH_CRATE_TNT");
				}
				func_1626();
				iLocal_154 = 2;
			}
			if (!bLocal_608)
			{
				if ((iParam1 == 0 && func_1627(&iLocal_125)) || (iParam1 == 1 && func_1627(&iLocal_124)))
				{
					bLocal_608 = true;
				}
			}
			break;
		case 2:
			func_1624();
			func_1179(1);
			__LIB_1__::func_281(&iLocal_152, 1, 1);
			__LIB_0__::func_325(&iLocal_123);
			bLocal_608 = false;
			return uParam0->f_607 == uParam0->f_607;
	}
	return false;
}

bool func_1195(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	switch (iLocal_154)
	{
		case 0:
			func_1624();
			if (!__LIB_0__::func_139(iLocal_152))
			{
				iLocal_152 = __LIB_1__::func_282("TRN3_UC_LOWCR", joaat("INPUT_PICKUP_CARRIABLE"), func_1159(0, 3), 1070386381 /* Float: 1.6f */, 3, 1, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
				__LIB_4__::func_12(iLocal_152, joaat("TRN3_G_CRATE"), 0, 1);
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_130[2]))
			{
				iLocal_130[2] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), VOLUME::_GET_VOLUME_COORDS(Local_27.f_19), VOLUME::_GET_VOLUME_ROTATION(Local_27.f_19), VOLUME::_GET_VOLUME_SCALE(Local_27.f_19));
			}
			bLocal_615 = false;
			__LIB_1__::func_324(func_1160(3));
			func_1161(uParam0, func_1160(3), -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			if (!MAP::DOES_BLIP_EXIST(iLocal_123))
			{
				iLocal_123 = __LIB_4__::func_983(408396114, func_1159(0, 3), 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_123, "TRN3_B_BRIDG");
			}
			PED::SET_PED_STEALTH_MOVEMENT(Global_35, false, 0, 0);
			PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
			PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
			func_1626();
			iLocal_154 = 1;
			break;
		case 1:
			if (__LIB_1__::func_205(iLocal_127, Local_27.f_4, 1, 0))
			{
				bLocal_160 = true;
			}
			func_1626();
			if (bLocal_160)
			{
				func_1171(uParam0, &iLocal_127, 2, 1, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */);
			}
			func_1171(uParam0, &iLocal_127, 44, 1, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */);
			if (bLocal_160)
			{
				func_1171(uParam0, &iLocal_127, 45, 1, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */);
			}
			func_1172(3, 10000);
			func_1628();
			if (!bLocal_615)
			{
				if (bLocal_495)
				{
					if (iLocal_420[45] >= 3)
					{
						__LIB_1__::func_422(func_1160(3), 7500, 0, 1, 0, 0, -1, -1, 0);
						bLocal_615 = true;
					}
				}
				else
				{
					__LIB_1__::func_422(func_1160(3), 7500, 0, 1, 0, 0, -1, -1, 0);
					bLocal_615 = true;
				}
			}
			if (!bLocal_508)
			{
				vVar0 = { ENTITY::GET_ENTITY_VELOCITY(Global_35, -1) };
				if (PED::IS_PED_FALLING(Global_35) || vVar0.z < -0.95f)
				{
					bLocal_508 = true;
					if (PED::IS_PED_FALLING(Global_35))
					{
						iLocal_610 = 0;
					}
					if (vVar0.z < -0.95f)
					{
						iLocal_610 = 1;
						if (bLocal_495)
						{
							func_1629(&iLocal_125);
						}
						else
						{
							func_1629(&iLocal_124);
						}
					}
					__LIB_1__::func_148(&uLocal_612);
					return false;
				}
				else
				{
					__LIB_0__::func_37(&uLocal_612);
				}
			}
			else
			{
				vVar3 = { ENTITY::GET_ENTITY_VELOCITY(Global_35, -1) };
				if ((iLocal_610 == 0 && !PED::IS_PED_FALLING(Global_35)) || (iLocal_610 == 1 && vVar3.z > -0.25f))
				{
					if (__LIB_0__::func_264(&uLocal_612) > 0.4f)
					{
						if (iParam1 == 0)
						{
							func_1630(uParam0, &iLocal_125, 1, 0);
						}
						else if (iParam1 == 1)
						{
							func_1630(uParam0, &iLocal_124, 1, 0);
						}
					}
					else
					{
						__LIB_0__::func_37(&uLocal_612);
						bLocal_508 = false;
					}
				}
			}
			func_1624();
			func_1631(uParam0);
			if (__LIB_0__::func_266(Global_35, func_1159(0, 3), 1.6f, 1, 1))
			{
				if (iParam1 == 0)
				{
					HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_125, 1.6f, 1, 1, joaat("TRN3_G_CRATE"), "TRN3_G_CRATE", 0);
				}
				else
				{
					HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_124, 1.6f, 1, 1, joaat("TRN3_G_CRATE"), "TRN3_G_CRATE", 0);
				}
			}
			if (__LIB_0__::func_567(iLocal_152, 1))
			{
				iLocal_154 = 2;
			}
			break;
		case 2:
			func_1179(1);
			__LIB_1__::func_281(&iLocal_152, 1, 1);
			__LIB_0__::func_325(&iLocal_123);
			func_1632();
			func_1624();
			PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
			return uParam0->f_607 == uParam0->f_607;
	}
	return false;
}

bool func_1196(var uParam0, int iParam1)
{
	func_1624();
	switch (iLocal_154)
	{
		case 0:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_235[17 /*8*/]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_235[17 /*8*/]);
			}
			if (__LIB_0__::func_102())
			{
				__LIB_1__::func_26(1);
			}
			Local_235[17 /*8*/].f_3 = 0;
			Local_235[17 /*8*/].f_4 = 0;
			if (iParam1 == 0)
			{
				bLocal_495 = true;
			}
			else
			{
				bLocal_495 = false;
			}
			Local_235[16 /*8*/].f_3 = 0;
			Local_235[16 /*8*/].f_4 = 0;
			iLocal_617 = 0;
			__LIB_1__::func_281(&iLocal_152, 0, 1);
			iLocal_154 = 1;
			break;
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_126))
			{
				iLocal_126 = OBJECT::CREATE_OBJECT(joaat("P_CS_ROPE04X"), 519.8661f, 1756.837f, 181.495f, true, true, false, false, true);
			}
			switch (iLocal_617)
			{
				case 0:
					if (iLocal_496 == 1)
					{
						iLocal_616 = 27;
					}
					else if (iLocal_496 == 2)
					{
						iLocal_616 = 26;
					}
					else
					{
						iLocal_616 = 25;
					}
					Local_235[17 /*8*/].f_2 = func_1243(17, iLocal_616);
					if (!Local_235[17 /*8*/].f_3)
					{
						Local_235[17 /*8*/].f_3 = func_1202(17, 0, 0);
					}
					else
					{
						ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_235[17 /*8*/], "player_zero", &uLocal_547, false, 0, 2);
						iLocal_617 = 1;
					}
					break;
				case 1:
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_235[17 /*8*/], "pl_IG15_ArthurPushesCrate") && !ANIMSCENE::_0x0DF57F86FE71DBE5(Local_235[17 /*8*/], "pl_IG15_ArthurPushesCrate"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_235[17 /*8*/], "pl_IG15_ArthurPushesCrate");
					}
					if (!__LIB_0__::func_163(Global_35, 1369124074))
					{
						TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_235[17 /*8*/], "player_zero", Local_235[17 /*8*/].f_2, 1f, 0, 0, 20000, -1082130432 /* Float: -1f */);
					}
					else
					{
						iLocal_617 = 2;
					}
					if (ANIMSCENE::_0x337F1CC8EE895601(Local_235[17 /*8*/], "player_zero"))
					{
						iLocal_617 = 3;
					}
					break;
				case 2:
					if (ANIMSCENE::_0x337F1CC8EE895601(Local_235[17 /*8*/], "player_zero"))
					{
						iLocal_617 = 3;
					}
					break;
				case 3:
					CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
					if (iLocal_510 == 5)
					{
						if (func_1203(17, iLocal_616, -1, -1, 1, 0))
						{
							TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
							Local_235[17 /*8*/].f_4 = 1;
						}
						else
						{
							iLocal_617 = 5;
						}
					}
					break;
				case 5:
					CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
					if (func_1198(17, iLocal_616, 0.8f))
					{
						iLocal_617 = 4;
						iLocal_154 = 2;
					}
					break;
			}
			break;
		case 2:
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			PED::_0x3A50753042B6891B(Global_35, "P_CS_CRATETNT01X_PH_R_HAND");
			__LIB_1__::func_281(&iLocal_152, 1, 1);
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_130[2]))
			{
				VOLUME::_DELETE_VOLUME(iLocal_130[2]);
			}
			if (iParam1 == 0)
			{
				__LIB_2__::func_919(iLocal_125, 1, 1);
			}
			else if (iParam1 == 1)
			{
				__LIB_2__::func_919(iLocal_124, 1, 1);
			}
			return uParam0->f_607 == uParam0->f_607;
	}
	return false;
}

bool func_1197(var uParam0, int iParam1)
{
	PAD::_SET_CONTROL_CONTEXT(5, joaat("MINIGAMETRIGGERS"));
	PED::SET_PED_RESET_FLAG(Global_35, 260, true);
	if (!__LIB_0__::func_272(Global_35, 0) || !__LIB_0__::func_272(iLocal_127, 0))
	{
		return false;
	}
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, true, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 1, true, false);
	PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
	if (iLocal_567 < 5)
	{
		func_1177(0, 1, 1);
	}
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MINIGAME_LEFT_TRIGGER"), false);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MINIGAME_RIGHT_TRIGGER"), false);
	func_1633();
	if (iLocal_567 < 4)
	{
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	}
	switch (iLocal_567)
	{
		case 0:
			iLocal_587 = 0;
			iLocal_568 = 0;
			func_1180(5);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
			if (!CAM::DOES_CAM_EXIST(iLocal_570))
			{
				if (iParam1 == 0)
				{
					iLocal_570 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
				}
				else
				{
					iLocal_570 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
				}
				if (CAM::DOES_CAM_EXIST(iLocal_570))
				{
					CAM::SET_CAM_SPLINE_DURATION(iLocal_570, 3000);
				}
			}
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_235[14 /*8*/], func_1243(14, 16)))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_235[14 /*8*/], func_1243(14, 16));
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_235[14 /*8*/], func_1243(14, 17));
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_235[15 /*8*/]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_235[15 /*8*/]);
				Local_235[15 /*8*/].f_3 = 0;
				Local_235[15 /*8*/].f_4 = 0;
			}
			if (CAM::DOES_CAM_EXIST(iLocal_570))
			{
				PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::PLAYER_ID(), 0);
				iLocal_564 = 0;
				func_1634(uParam0, 1);
			}
			break;
		case 1:
			vLocal_575 = { 524.0971f, 1748.582f, 186.7647f };
			vLocal_572 = { vLocal_575 };
			func_1634(uParam0, 2);
			break;
		case 2:
			func_1635(uParam0, 0.2f, 0.00175f, 0.01f);
			if (iLocal_568 == 2)
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_235[17 /*8*/], false) && !ANIMSCENE::_0x1F0E401031E20146(Local_235[17 /*8*/], "pl_IG15_ArthurPushesCrate"))
				{
					func_1203(17, 12, -1, -1, 1, 0);
				}
				ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_235[17 /*8*/], "P_CS_CRATETNT02X", &uLocal_547, false, 0, 2);
				if (func_1198(17, 12, 1065017672 /* Float: 0.98f */))
				{
					if (iParam1 == 0)
					{
						func_1636(3);
					}
					else
					{
						func_1636(4);
					}
					if (iParam1 == 0)
					{
						if (func_1171(uParam0, &iLocal_127, 46, 0, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */))
						{
						}
					}
					else if (func_1171(uParam0, &iLocal_127, 47, 0, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */))
					{
					}
					func_1637(2);
					func_1634(uParam0, 3);
				}
			}
			break;
		case 3:
			func_1635(uParam0, 0.2f, 0.00175f, 0.01f);
			if (iParam1 == 0)
			{
				func_1171(uParam0, &iLocal_127, 3, 0, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */);
			}
			if (iLocal_598 != 9 && iLocal_598 != 8)
			{
				if (iParam1 == 0)
				{
					if (iLocal_564 >= 4)
					{
						func_1171(uParam0, &iLocal_127, 21, 0, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */);
					}
				}
				else if (iLocal_564 >= 2)
				{
					func_1171(uParam0, &iLocal_127, 22, 0, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */);
				}
			}
			if (bLocal_592)
			{
				WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
				func_1634(uParam0, 4);
				func_1179(1);
				__LIB_5__::func_20(0, 0);
				if (iParam1 == 0)
				{
					func_1620(10);
				}
				else
				{
					func_1620(12);
				}
			}
			if (iParam1 == 0)
			{
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_235[15 /*8*/]))
				{
					func_1202(15, 0, func_1243(15, 23));
				}
			}
			else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_235[15 /*8*/]))
			{
				func_1202(15, 0, func_1243(15, 24));
			}
			break;
		case 4:
			if (iParam1 == 0)
			{
				func_1171(uParam0, &iLocal_127, 5, 1, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_235[15 /*8*/]))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_235[15 /*8*/]) > 0.85f)
				{
					if (iParam1 == 0)
					{
						func_1634(uParam0, 5);
					}
					else if (iParam1 == 1)
					{
						func_1634(uParam0, 5);
					}
				}
			}
			break;
		case 5:
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_130[2]))
			{
				VOLUME::_DELETE_VOLUME(iLocal_130[2]);
			}
			if (iParam1 == 1)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
				func_1634(uParam0, 0);
				func_1638(uParam0, 0);
				func_1636(0);
				bLocal_590 = false;
				bLocal_589 = false;
				return true;
			}
			else
			{
				PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
				func_1620(2);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_235[14 /*8*/], "p_cs_crateTnt01x", iLocal_125);
				ENTITY::DETACH_ENTITY(iLocal_125, true, true);
				ENTITY::SET_ENTITY_COORDS(iLocal_125, 523.0157f, 1749.689f, 181.4796f, true, false, true, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_125, 0f, 0f, -32f, 2, true);
				func_1634(uParam0, 0);
				func_1638(uParam0, 0);
				func_1636(0);
				bLocal_590 = false;
				bLocal_589 = false;
				PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::PLAYER_ID(), 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				return true;
			}
			break;
	}
	return false;
}

bool func_1198(int iParam0, int iParam1, float fParam2)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_235[iParam0 /*8*/]) && ANIMSCENE::_0x1F0E401031E20146(Local_235[iParam0 /*8*/], func_1243(iParam0, iParam1)))
	{
		if ((ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_235[iParam0 /*8*/]) >= fParam2 || ANIMSCENE::_0xF94692EB9DC15D74(Local_235[iParam0 /*8*/], 0)) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_235[iParam0 /*8*/], false))
		{
			return true;
		}
	}
	return false;
}

void func_1200(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_822(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

bool func_1201(bool bParam0)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_64[iVar0 /*9*/]))
		{
			Local_64[iVar0 /*9*/] = OBJECT::CREATE_OBJECT(joaat("P_DYNAMITE01X"), func_1639(iVar0, 0), true, true, false, false, true);
		}
		iVar0++;
	}
	vVar1 = { 0f, 0f, 0f };
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_64[iVar0 /*9*/]))
		{
			if (bParam0)
			{
				vVar1.f_2 = func_1640(iVar0, 0);
				if (iVar0 != 3)
				{
					ENTITY::SET_ENTITY_ROTATION(Local_64[iVar0 /*9*/], vVar1, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(Local_64[iVar0 /*9*/], true);
				}
				ENTITY::_0x18FF3110CF47115D(Local_64[iVar0 /*9*/], 4, 0);
			}
			else
			{
				Local_64[iVar0 /*9*/].f_2 = { func_1641(iVar0) };
				Local_64[iVar0 /*9*/].f_5 = { func_1642(iVar0) };
				if (ENTITY::IS_ENTITY_ATTACHED(Local_64[iVar0 /*9*/]))
				{
					__LIB_2__::func_919(Local_64[iVar0 /*9*/], 1, 1);
				}
				ENTITY::SET_ENTITY_ROTATION(Local_64[iVar0 /*9*/], Local_64[iVar0 /*9*/].f_5, 0, true);
				ENTITY::SET_ENTITY_COORDS(Local_64[iVar0 /*9*/], Local_64[iVar0 /*9*/].f_2, true, false, true, true);
				ENTITY::FREEZE_ENTITY_POSITION(Local_64[iVar0 /*9*/], true);
			}
			ENTITY::SET_ENTITY_PROOFS(Local_64[iVar0 /*9*/], 24, false);
		}
		iVar0++;
	}
	return true;
}

bool func_1202(int iParam0, int iParam1, char* sParam2)
{
	if (!Local_235[iParam0 /*8*/].f_3)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_235[iParam0 /*8*/]))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_235[iParam0 /*8*/], true, false))
			{
				if (iParam0 == 19)
				{
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_235[iParam0 /*8*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_121, 0f, 0f, 0f), ENTITY::GET_ENTITY_ROTATION(iLocal_121, 2) + Vector(180f, 0f, 0f), 2);
				}
				if (iParam0 == 16)
				{
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_235[iParam0 /*8*/], ENTITY::GET_ENTITY_COORDS(iLocal_121, true, false), ENTITY::GET_ENTITY_ROTATION(iLocal_121, 2) + Vector(180f, 0f, 0f), 2);
				}
				return true;
			}
		}
		else
		{
			Local_235[iParam0 /*8*/].f_1 = func_1643(iParam0);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
			{
				Local_235[iParam0 /*8*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_235[iParam0 /*8*/].f_1, iParam1, Local_235[iParam0 /*8*/].f_2, false, true);
			}
			else
			{
				Local_235[iParam0 /*8*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_235[iParam0 /*8*/].f_1, iParam1, sParam2, false, true);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_235[iParam0 /*8*/]))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_235[iParam0 /*8*/]);
			}
		}
	}
	return Local_235[iParam0 /*8*/].f_3;
}

bool func_1203(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	char* sVar0;
	sVar0 = func_1243(iParam0, iParam1);
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		Local_235[iParam0 /*8*/].f_2 = sVar0;
	}
	if (!Local_235[iParam0 /*8*/].f_3)
	{
		Local_235[iParam0 /*8*/].f_1 = func_1643(iParam0);
		if (func_1202(iParam0, iParam5, 0))
		{
			func_1241(iParam0, iParam2, iParam3, bParam4);
			Local_235[iParam0 /*8*/].f_3 = 1;
		}
	}
	if (Local_235[iParam0 /*8*/].f_3)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			func_1241(iParam0, iParam2, iParam3, bParam4);
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_235[iParam0 /*8*/], false))
			{
				ANIMSCENE::START_ANIM_SCENE(Local_235[iParam0 /*8*/]);
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_235[iParam0 /*8*/], false))
			{
				return true;
			}
		}
		else
		{
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_235[iParam0 /*8*/], Local_235[iParam0 /*8*/].f_2) && !ANIMSCENE::_0x0DF57F86FE71DBE5(Local_235[iParam0 /*8*/], Local_235[iParam0 /*8*/].f_2))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_235[iParam0 /*8*/], Local_235[iParam0 /*8*/].f_2);
			}
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_235[iParam0 /*8*/], Local_235[iParam0 /*8*/].f_2))
			{
				if (!ANIMSCENE::_0x1F0E401031E20146(Local_235[iParam0 /*8*/], Local_235[iParam0 /*8*/].f_2))
				{
					func_1241(iParam0, iParam2, iParam3, bParam4);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_235[iParam0 /*8*/], Local_235[iParam0 /*8*/].f_2, true);
				}
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_235[iParam0 /*8*/], false))
				{
					func_1241(iParam0, iParam2, iParam3, bParam4);
					ANIMSCENE::START_ANIM_SCENE(Local_235[iParam0 /*8*/]);
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_235[iParam0 /*8*/], false) && ANIMSCENE::_0x1F0E401031E20146(Local_235[iParam0 /*8*/], Local_235[iParam0 /*8*/].f_2))
			{
				return true;
			}
		}
	}
	return false;
}

void func_1204(var uParam0)
{
	switch (__LIB_4__::func_979(uParam0))
	{
		case 0:
			if (!__LIB_6__::func_904())
			{
				if (__LIB_5__::func_314(uParam0, func_1173(12), 0))
				{
					__LIB_5__::func_372(uParam0, 1);
				}
			}
			break;
		case 1:
			func_1609(uParam0, func_1160(4), 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			func_1161(uParam0, func_1160(4), -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			if (!MAP::DOES_BLIP_EXIST(iLocal_123))
			{
				iLocal_123 = __LIB_4__::func_983(408396114, ENTITY::GET_ENTITY_COORDS(iLocal_127, true, false), 1);
			}
			__LIB_5__::func_372(uParam0, -1);
			break;
		case 2:
			func_1609(uParam0, func_1160(5), 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			func_1161(uParam0, func_1160(5), -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_5__::func_372(uParam0, -1);
			break;
		case 4:
			__LIB_5__::func_314(uParam0, func_1173(13), 0);
			__LIB_5__::func_372(uParam0, -1);
			break;
		case 5:
			func_1609(uParam0, func_1160(7), 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			func_1161(uParam0, func_1160(7), -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_5__::func_342(uParam0);
			__LIB_5__::func_372(uParam0, -1);
			break;
		case 8:
			if (__LIB_5__::func_287(uParam0) >= 2f)
			{
				__LIB_5__::func_372(uParam0, -1);
			}
			break;
		case 11:
			func_1161(uParam0, func_1160(7), -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_5__::func_372(uParam0, -1);
			break;
		case 12:
			func_1609(uParam0, func_1160(6), 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			func_1161(uParam0, func_1160(6), -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_5__::func_372(uParam0, -1);
			break;
		case 20:
			if (__LIB_5__::func_314(uParam0, func_1173(15), 0))
			{
				__LIB_5__::func_372(uParam0, -1);
			}
			break;
		case 21:
			AUDIO::_0x36559148B78853B3(1, 0, 0);
			__LIB_5__::func_314(uParam0, func_1173(17), 0);
			__LIB_5__::func_372(uParam0, -1);
			break;
		case 25:
			__LIB_0__::func_325(&iLocal_123);
			func_1161(uParam0, func_1160(8), -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			func_1609(uParam0, func_1160(8), 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			if (!MAP::DOES_BLIP_EXIST(iLocal_123))
			{
				iLocal_123 = __LIB_5__::func_442(func_1644(0, 0), 0);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_123, "TRN3_B_DYN");
			}
			__LIB_5__::func_372(uParam0, -1);
			break;
		case 26:
			__LIB_0__::func_325(&iLocal_123);
			if (!MAP::DOES_BLIP_EXIST(iLocal_123))
			{
				iLocal_123 = __LIB_4__::func_983(408396114, func_1159(4, 6), 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_123, "TRN3_B_CART");
			}
			func_1161(uParam0, func_1160(10), -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			func_1609(uParam0, func_1160(10), 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_5__::func_372(uParam0, -1);
			break;
	}
}

void func_1205(var uParam0)
{
	switch (iLocal_55)
	{
		case 0:
			if (Global_36.f_2 <= 170f)
			{
				__LIB_1__::func_148(&uLocal_146);
				iLocal_55 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_264(&uLocal_146) >= 2.5f)
			{
				iLocal_55 = 2;
			}
			break;
		case 2:
			func_1167(uParam0, "TRN3_FAIL_BRG", "");
			break;
	}
}

bool func_1206(vector3 vParam0, float fParam3, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_120))
	{
		iLocal_120 = VEHICLE::_CREATE_MISSION_TRAIN(1094934838, VEHICLE::_GET_NEAREST_TRAIN_TRACK_POSITION(vParam0), true, false, true, true);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_120))
	{
		return false;
	}
	if (!func_1646(1094934838))
	{
		return false;
	}
	VEHICLE::_0x1A861F899EBBE17C(iLocal_511[0], 1);
	if (!bParam4)
	{
		VEHICLE::SET_TRAIN_SPEED(iLocal_511[0], fParam3);
		VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_511[0], fParam3);
	}
	VEHICLE::_0xA72B1BF3857B94D7(iLocal_511[0], 1);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_511[0], false);
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_129))
	{
		iLocal_129 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(0f, 0f, 0f, 0f, 0f, 0f, 7f, 7f, 5f, "FAIL");
		PED::_0x7C00CFC48A782DC0(iLocal_129, iLocal_511[0], 0f, 6f, 2f, 0f, 0f, 0f, 2, 1);
	}
	return true;
}

bool func_1207()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_64[iVar0 /*9*/]))
		{
			if ((IntToFloat(ENTITY::GET_ENTITY_HEALTH(Local_64[iVar0 /*9*/])) < 0f || WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_125, joaat("WEAPON_THROWN_MOLOTOV"), 0)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_125))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1208(var uParam0)
{
	func_1647(uParam0);
	switch (iLocal_154)
	{
		case 0:
			__LIB_1__::func_148(&uLocal_621);
			iLocal_154 = 1;
			break;
		case 1:
			if (!bLocal_634)
			{
				if (func_1198(14, 17, 0.1f))
				{
					if (func_1203(14, 22, -1, -1, 1, 0))
					{
						bLocal_634 = true;
					}
				}
			}
			func_1648(uParam0);
			if (VOLUME::_DOES_VOLUME_EXIST(Local_27))
			{
				if (__LIB_1__::func_205(Global_35, Local_27, 1, 0))
				{
					if (!PED::_IS_PED_CLIMBING_LADDER(Global_35))
					{
						func_1171(uParam0, &iLocal_127, 37, 1, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */);
					}
				}
			}
			if (iLocal_420[37] >= 2)
			{
				if (!bLocal_635)
				{
					__LIB_0__::func_325(&iLocal_123);
					__LIB_5__::func_372(uParam0, 12);
					bLocal_635 = true;
				}
			}
			if (!bLocal_630)
			{
				if (Global_36.f_2 < 185f)
				{
					bLocal_630 = true;
					__LIB_1__::func_148(&uLocal_621);
				}
				else if (iLocal_629 < 3)
				{
					if (!__LIB_0__::func_75(&uLocal_621))
					{
						__LIB_1__::func_148(&uLocal_621);
					}
					else if (__LIB_0__::func_264(&uLocal_621) > 10f)
					{
						if (func_1171(uParam0, &iLocal_127, 48, 0, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */))
						{
							iLocal_629++;
							iLocal_420[48] = 0;
							__LIB_1__::func_148(&uLocal_621);
						}
					}
				}
				func_1172(5, 30000);
			}
			if (!bLocal_632)
			{
				if (iLocal_420[52] >= 2)
				{
					func_1171(uParam0, &iLocal_127, 52, 1, 5f, 10f);
				}
				if (iLocal_420[52] >= 2)
				{
					func_1171(uParam0, &iLocal_127, 53, 1, 5f, 10f);
				}
			}
			if (func_1649() > 0)
			{
				func_1179(1);
			}
			if (func_1650(uParam0))
			{
				__LIB_5__::func_372(uParam0, 21);
				iLocal_154 = 2;
			}
			break;
		case 2:
			func_1179(1);
			__LIB_0__::func_325(&iLocal_123);
			iLocal_154 = 0;
			return true;
	}
	return false;
}

bool func_1210(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1))
	{
		return true;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 0))
	{
		return true;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 1))
	{
		return true;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_1213(int iParam0)
{
	if (bLocal_198 != iParam0)
	{
		bLocal_198 = iParam0;
	}
}

void func_1214(var uParam0)
{
	vector3 vVar0;
	switch (__LIB_4__::func_979(uParam0))
	{
		case 0:
			func_1161(uParam0, func_1160(10), -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			func_1609(uParam0, func_1160(10), 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_5__::func_342(uParam0);
			if (!__LIB_4__::func_257(iLocal_121))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_121, true, false) };
			}
			iLocal_123 = __LIB_4__::func_983(408396114, vVar0, 1);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_123, "TRN3_B_CART");
			__LIB_5__::func_372(uParam0, 1);
			break;
		case 1:
			break;
		case 2:
			break;
	}
}

void func_1215(var uParam0)
{
	if (!bLocal_159)
	{
		func_1217();
		if (bLocal_162)
		{
			if (!CAM::DOES_CAM_EXIST(iLocal_523))
			{
				iLocal_523 = CAM::GET_RENDERING_CAM();
				CAM::SHAKE_CAM(iLocal_523, "SMALL_EXPLOSION_SHAKE", 0.35f);
			}
			if (!__LIB_0__::func_255(iLocal_127, 0))
			{
				ENTITY::_SET_ENTITY_HEALTH(iLocal_127, 0, 0);
				if (__LIB_2__::func_343(Global_35, iLocal_121, 0))
				{
					ENTITY::_SET_ENTITY_HEALTH(Global_35, 0, 0);
				}
			}
			if (VEHICLE::_0xDDBEA5506C848227(iLocal_121))
			{
				if (!__LIB_0__::func_75(&uLocal_524))
				{
					__LIB_1__::func_148(&uLocal_524);
				}
				else if (__LIB_0__::func_264(&uLocal_524) > 0f)
				{
					func_1167(uParam0, "TRN3_FL_JOHND", "");
				}
			}
		}
	}
}

void func_1216(float fParam0, float fParam1)
{
	if (!__LIB_0__::func_75(&uLocal_149))
	{
		__LIB_1__::func_148(&uLocal_149);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iLocal_120))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_509))
		{
			iLocal_509 = VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iLocal_120);
		}
		else if (!__LIB_0__::func_255(iLocal_509, 0))
		{
			if (__LIB_0__::func_264(&uLocal_149) >= fLocal_136)
			{
				if (!__LIB_4__::func_257(iLocal_120))
				{
					VEHICLE::_0xCFE122EC635CC2B2(iLocal_120, "DANGER", 1, 0);
				}
				fLocal_136 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam0, fParam1);
				__LIB_1__::func_148(&uLocal_149);
			}
		}
	}
}

void func_1217()
{
	if (!bLocal_162)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_121))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_121, iLocal_129, true, 0))
			{
				if (!bLocal_522)
				{
					CAM::SET_CAM_ACTIVE(iLocal_157, false);
					CAM::SET_CAM_ACTIVE(iLocal_155, false);
					CAM::SET_CAM_ACTIVE(iLocal_156, false);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					bLocal_522 = true;
				}
				if (!CAM::_0xAA235E2F2C09E952("script@Story@trn3@gameover"))
				{
					if (!CAM::_0x595550376B7EA230("script@Story@trn3@gameover"))
					{
						CAM::_0x1B3C2D961F5FC0E1("script@Story@trn3@gameover");
					}
				}
				else
				{
					bLocal_162 = true;
					CAM::_0xBC016635D6A73B31("script@Story@trn3@gameover", "Bridge", 5);
					iLocal_155 = CAM::GET_RENDERING_CAM();
					CAM::SHAKE_CAM(iLocal_155, "SMALL_EXPLOSION_SHAKE", 0.35f);
					if (CAM::IS_GAMEPLAY_CAM_SHAKING())
					{
						CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
					}
				}
			}
		}
	}
	else
	{
		MISC::SET_TIME_SCALE(0.6f);
		if (!CAM::DOES_CAM_EXIST(iLocal_523))
		{
			iLocal_523 = CAM::GET_RENDERING_CAM();
			CAM::SHAKE_CAM(iLocal_523, "SMALL_EXPLOSION_SHAKE", 0.35f);
		}
		VEHICLE::SET_TRAIN_SPEED(iLocal_120, 9f);
	}
}

void func_1218()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	if (__LIB_4__::func_257(iLocal_120))
	{
		return;
	}
	if (__LIB_4__::func_257(iLocal_121))
	{
		return;
	}
	if (bLocal_162)
	{
		return;
	}
	vVar0 = { func_1652() };
	vVar3 = { func_1653() };
	vVar6 = { func_1654() };
	vVar9 = { 552.254f, 1729.533f, 186.79f };
	func_1655();
	fVar12 = func_1656();
	fVar13 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, false);
	fVar14 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar6, vVar9, false);
	switch (iLocal_196)
	{
		case 0:
			if (bLocal_198)
			{
				fLocal_197 = 2f;
				func_1657(1);
			}
			break;
		case 1:
			fVar18 = __LIB_0__::func_251(((fVar13 - 41.97f) / (66.69f - 41.97f)), 0f, 1f);
			fVar21 = __LIB_0__::func_667(3f, 5f, fVar18);
			fLocal_197 = __LIB_0__::func_667(fLocal_197, fVar21, MISC::GET_FRAME_TIME());
			if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_121, false))
			{
				__LIB_1__::func_148(&uLocal_200);
				func_1657(2);
			}
			break;
		case 2:
			fVar23 = __LIB_0__::func_251((fVar12 / 1.5f), 0f, 1f);
			fVar21 = __LIB_0__::func_667(4f, 5f, fVar23);
			fLocal_197 = __LIB_0__::func_667(fLocal_197, fVar21, MISC::GET_FRAME_TIME());
			if (fVar23 == 1f || __LIB_0__::func_264(&uLocal_200) >= 5f)
			{
				func_1657(3);
			}
			break;
		case 3:
			fVar15 = 4f;
			fVar18 = __LIB_0__::func_251(((fVar13 - fVar15) / 17f), 0f, 1f);
			fVar19 = __LIB_0__::func_649(fVar12, 2.5f);
			fVar20 = 11f;
			fVar21 = __LIB_0__::func_667(fVar19, fVar20, fVar18);
			fLocal_197 = __LIB_0__::func_667(fLocal_197, fVar21, MISC::GET_FRAME_TIME());
			if (fVar18 < 0.2f)
			{
				fLocal_199 = fVar14;
				func_1657(4);
			}
			break;
		case 4:
			fVar16 = 4f;
			fVar17 = 1f;
			fVar22 = __LIB_0__::func_251(((fLocal_199 - fVar14) / fLocal_199), 0f, 1f);
			fVar15 = __LIB_0__::func_667(fVar16, fVar17, fVar22);
			fVar18 = __LIB_0__::func_251(((fVar13 - fVar15) / 6f), 0f, 1f);
			fVar19 = __LIB_0__::func_649(fVar12, 2.5f);
			fVar20 = (fVar19 + 1.5f);
			fVar21 = __LIB_0__::func_667(fVar19, fVar20, fVar18);
			fLocal_197 = __LIB_0__::func_667(fLocal_197, fVar21, MISC::GET_FRAME_TIME());
			if (!bLocal_198)
			{
				func_1657(5);
			}
			break;
		case 5:
			fVar21 = 9f;
			fLocal_197 = __LIB_0__::func_667(fLocal_197, fVar21, MISC::GET_FRAME_TIME());
			break;
	}
	if (iLocal_196 >= 1)
	{
		VEHICLE::SET_TRAIN_SPEED(iLocal_120, fLocal_197);
		VEHICLE::_0xD0116DF21E6C7B36(iLocal_120, 0f);
		VEHICLE::_0x0F7F603BDE08C4D3(iLocal_120);
		if (!bLocal_162)
		{
			func_1659(fVar13, bLocal_198);
		}
	}
}

void func_1219()
{
	vector3 vVar0;
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return;
	}
	if (!__LIB_0__::func_272(iLocal_127, 0))
	{
		return;
	}
	switch (iLocal_637)
	{
		case 0:
			func_1186(&iLocal_127, &iLocal_121, 0, 1);
			iLocal_637 = 1;
			break;
		case 1:
			if (func_1203(3, 10, -1, -1, 1, 0))
			{
				iLocal_637 = 2;
			}
			break;
		case 2:
			vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_121, true, false) };
			if (__LIB_0__::func_665(Global_35, iLocal_121, 1, 1) <= 5f && Global_36.f_2 > (vVar0.z - 1f))
			{
				func_1660();
				iLocal_637 = 3;
			}
			break;
		case 3:
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_235[3 /*8*/], false))
			{
				iLocal_637 = 4;
			}
			break;
		case 4:
			if (!__LIB_2__::func_343(iLocal_127, iLocal_121, 1) && !__LIB_0__::func_163(iLocal_127, -1794415470))
			{
				__LIB_2__::func_596(iLocal_127, iLocal_121, 0, 1065353216 /* Float: 1f */, -1, 1);
			}
			else
			{
				iLocal_637 = 5;
			}
			break;
		case 5:
			break;
	}
}

void func_1220(var uParam0)
{
	func_1646(1094934838);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_511[0]))
	{
		__LIB_5__::func_580(uParam0, iLocal_511[0], "NORTHSTEAMER01X", 0, 0, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_511[1]))
	{
		__LIB_5__::func_580(uParam0, iLocal_511[1], "privatecoalcar01x", 0, 0, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_511[2]))
	{
		__LIB_5__::func_580(uParam0, iLocal_511[2], "privatebaggage01x", 0, 0, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_511[3]))
	{
		__LIB_5__::func_580(uParam0, iLocal_511[3], "northpassenger03x", 0, 0, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_511[4]))
	{
		__LIB_5__::func_580(uParam0, iLocal_511[4], "northpassenger03x^1", 0, 0, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_511[5]))
	{
		__LIB_5__::func_580(uParam0, iLocal_511[5], "privateboxcar02x^2", 0, 0, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_511[6]))
	{
		__LIB_5__::func_580(uParam0, iLocal_511[6], "privateboxcar04x", 0, 0, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_511[7]))
	{
		__LIB_5__::func_580(uParam0, iLocal_511[7], "privateboxcar02x", 0, 0, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_511[8]))
	{
		__LIB_5__::func_580(uParam0, iLocal_511[8], "privateboxcar04x^1", 0, 0, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_511[9]))
	{
		__LIB_5__::func_580(uParam0, iLocal_511[9], "CABOOSE01X", 0, 0, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_127))
	{
		__LIB_5__::func_580(uParam0, iLocal_127, "JohnMarston", 0, 0, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		__LIB_5__::func_580(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_121))
	{
		__LIB_5__::func_580(uParam0, iLocal_121, "HANDCART", 0, 0, 0, 0);
	}
}

void func_1221(var uParam0)
{
	switch (__LIB_4__::func_979(uParam0))
	{
		case 0:
			if (func_1171(uParam0, &Global_35, 20, 0, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */))
			{
				__LIB_1__::func_148(&uLocal_143);
				__LIB_5__::func_372(uParam0, 1);
			}
			break;
		case 1:
			func_1161(uParam0, func_1160(11), -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			func_1609(uParam0, func_1160(11), 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_5__::func_372(uParam0, -1);
			break;
		case 2:
			break;
		case 3:
			__LIB_5__::func_372(uParam0, -1);
			break;
		case 5:
			if (func_1171(uParam0, &Global_35, 25, 0, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */))
			{
				__LIB_5__::func_372(uParam0, -1);
			}
			break;
		case 6:
			if (func_1171(uParam0, &Global_35, 26, 0, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */))
			{
				__LIB_5__::func_372(uParam0, -1);
			}
			break;
	}
}

void func_1222(var uParam0)
{
	if (!__LIB_0__::func_27(iLocal_135, 32))
	{
		__LIB_4__::func_570(&(uParam0->f_7375));
		__LIB_4__::func_655(&(uParam0->f_7375));
		__LIB_10__::func_925(uParam0, "NormalStart");
		__LIB_1__::func_683(&iLocal_135, 32);
	}
	if (__LIB_0__::func_27(iLocal_135, 32))
	{
		__LIB_5__::func_298(uParam0, "NormalStart");
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_7375.f_804))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_7375.f_804, true, false))
			{
				__LIB_8__::func_787(uParam0, "NormalStart");
				func_1220(uParam0);
			}
		}
	}
}

void func_1223(var uParam0)
{
	int iVar0;
	if (!__LIB_4__::func_257(iLocal_120) && !CAM::_0xA24C1D341C6E0D53(1, 0, 1))
	{
		if (!bLocal_646)
		{
			iVar0 = VEHICLE::GET_TRAIN_CARRIAGE(iLocal_120, 0);
			if (!__LIB_4__::func_257(iVar0))
			{
				if (!CAM::DOES_CAM_EXIST(iLocal_155))
				{
					iLocal_155 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
				}
				if (!CAM::DOES_CAM_EXIST(iLocal_156))
				{
					iLocal_156 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
				}
				if (CAM::DOES_CAM_EXIST(iLocal_156))
				{
					CAM::ATTACH_CAM_TO_ENTITY(iLocal_156, iVar0, 2.75f, 0.45f, 1.9f, true);
					CAM::SET_CAM_ROT(iLocal_156, 0f, 0f, -90f, 2);
					CAM::SET_CAM_FOV(iLocal_156, 60.9112f);
					CAM::SHAKE_CAM(iLocal_157, "HAND_SHAKE", 1f);
				}
				if (!CAM::DOES_CAM_EXIST(iLocal_157))
				{
					iLocal_157 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 560.6288f, 1716.105f, 187.4212f, 7.2973f, 0.0023f, 31.1414f, 19.14f, false, 2);
				}
				if (CAM::DOES_CAM_EXIST(iLocal_157))
				{
					CAM::SHAKE_CAM(iLocal_157, "HAND_SHAKE", 1f);
					CAM::SET_CAM_ACTIVE(iLocal_157, false);
				}
				if (CAM::DOES_CAM_EXIST(iLocal_157) && CAM::DOES_CAM_EXIST(iLocal_156))
				{
					bLocal_646 = true;
				}
			}
		}
	}
}

void func_1229(var uParam0)
{
	switch (__LIB_4__::func_979(uParam0))
	{
		case 0:
			if (!MAP::DOES_BLIP_EXIST(iLocal_123))
			{
				iLocal_123 = __LIB_10__::func_930(uParam0, iLocal_127, joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_123, "TRN3_JOHN");
			}
			func_1161(uParam0, func_1160(13), -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			func_1609(uParam0, func_1160(13), 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_5__::func_372(uParam0, -1);
			break;
		case 3:
			__LIB_0__::func_325(&iLocal_123);
			__LIB_10__::func_935(uParam0, iLocal_127, 1);
			if (!MAP::DOES_BLIP_EXIST(iLocal_123))
			{
				iLocal_123 = __LIB_5__::func_442(func_1159(2, 2), 0);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_123, "TRN3_B_DET");
			}
			func_1161(uParam0, func_1160(14), -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			func_1609(uParam0, func_1160(14), 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_5__::func_372(uParam0, -1);
			break;
	}
}

void func_1231(var uParam0)
{
	float fVar0;
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, 549.92f, 1714.36f, 184.92f, true);
	if (fVar0 > 18f)
	{
		func_1167(uParam0, "TRN3_FL_DET", "");
	}
	else if (fVar0 > 14f)
	{
		if (!bLocal_657)
		{
			__LIB_1__::func_422("TRN3_R_Det", 7500, 0, 1, 0, 0, -1, -1, 0);
			bLocal_657 = true;
		}
	}
	else if (fVar0 < 12f)
	{
		bLocal_657 = false;
	}
}

void func_1232()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ACCURATE_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
}

void func_1233(var uParam0)
{
	if (!__LIB_0__::func_27(iLocal_135, 64))
	{
		__LIB_4__::func_570(&(uParam0->f_7375));
		__LIB_4__::func_655(&(uParam0->f_7375));
		if (__LIB_0__::func_871())
		{
			__LIB_10__::func_925(uParam0, "1-HighHonor");
			__LIB_1__::func_683(&iLocal_135, 128);
		}
		else
		{
			__LIB_10__::func_925(uParam0, "2-LowHonor");
		}
		__LIB_1__::func_683(&iLocal_135, 64);
	}
	if (__LIB_0__::func_27(iLocal_135, 64))
	{
		if (__LIB_0__::func_27(iLocal_135, 128))
		{
			__LIB_5__::func_298(uParam0, "1-HighHonor");
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_7375.f_804))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_7375.f_804, true, false))
				{
					__LIB_8__::func_787(uParam0, "1-HighHonor");
				}
			}
		}
		else
		{
			__LIB_5__::func_298(uParam0, "2-LowHonor");
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_7375.f_804))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_7375.f_804, true, false))
				{
					__LIB_8__::func_787(uParam0, "2-LowHonor");
				}
			}
		}
	}
}

void func_1241(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 22:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_235[iParam0 /*8*/], "p_cs_crateTnt01x", iLocal_125, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_235[iParam0 /*8*/], "p_cs_crateTnt01x^1", iLocal_124, 0);
			break;
		case 1:
			func_1670(1);
			break;
		case 2:
			func_1670(2);
			break;
		case 3:
			func_1671();
			break;
		case 4:
			func_1672();
			break;
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			func_1673(iParam0, iParam1, iParam2, bParam3);
			break;
		case 14:
			func_1674();
			break;
		case 15:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_235[15 /*8*/], "player_zero", Global_35, 0);
			break;
		case 17:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_235[iParam0 /*8*/], "player_zero", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_235[iParam0 /*8*/], "P_CS_ROPE04X", iLocal_126, 0);
			if (bLocal_495)
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_235[iParam0 /*8*/], "P_CS_CRATETNT01X", iLocal_125, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_235[iParam0 /*8*/], "P_CS_CRATETNT01X", iLocal_124, 0);
			}
			break;
		case 16:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_235[iParam0 /*8*/], "player_zero", Global_35, 0);
			if (bLocal_495)
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_235[iParam0 /*8*/], "P_CS_CRATETNT01X", iLocal_125, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_235[iParam0 /*8*/], "P_CS_CRATETNT01X^1", iLocal_124, 0);
			}
			break;
		case 18:
			if (__LIB_0__::func_272(Global_35, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_235[iParam0 /*8*/], "ARTHUR", Global_35, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_64[iParam2 /*9*/]))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_235[18 /*8*/], "p_dynamite01x", Local_64[iParam2 /*9*/], 0);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_235[18 /*8*/], ENTITY::GET_ENTITY_COORDS(Local_64[iParam2 /*9*/], true, false), ENTITY::GET_ENTITY_ROTATION(Local_64[iParam2 /*9*/], 2), 2);
			}
			break;
		case 19:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_235[iParam0 /*8*/], "JohnMarston", iLocal_127, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_235[iParam0 /*8*/], "player_zero", Global_35, 0);
			break;
		case 20:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_235[iParam0 /*8*/], "IG_JohnMarston", iLocal_127, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_235[iParam0 /*8*/], "player_zero", Global_35, 0);
			break;
	}
}

bool func_1242(int iParam0, int iParam1)
{
	Local_235[iParam0 /*8*/].f_2 = func_1243(iParam0, iParam1);
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_235[iParam0 /*8*/], Local_235[iParam0 /*8*/].f_2))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_235[iParam0 /*8*/], Local_235[iParam0 /*8*/].f_2);
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_235[iParam0 /*8*/], Local_235[iParam0 /*8*/].f_2))
	{
		if (!ANIMSCENE::_0x1F0E401031E20146(Local_235[iParam0 /*8*/], Local_235[iParam0 /*8*/].f_2))
		{
			func_1241(iParam0, -1, -1, 1);
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_235[iParam0 /*8*/], Local_235[iParam0 /*8*/].f_2, true);
		}
	}
	if (ANIMSCENE::_0x1F0E401031E20146(Local_235[iParam0 /*8*/], Local_235[iParam0 /*8*/].f_2))
	{
		return true;
	}
	return false;
}

char* func_1243(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			return "pl_Arthur_Detonates_Bridge_Enter";
		case 3:
			return "pl_Arthur_Detonates_Bridge_Loop";
		case 4:
			return "pl_Arthur_Detonates_Bridge_Enter";
		case 5:
			return "pl_Arthur_Detonates_Bridge_Loop";
		case 6:
			return "pl_Arthur_Detonates_Bridge";
		case 7:
			return "pl_leadout";
		case 8:
			return func_1675(iParam0);
		case 9:
			return func_1676(iParam0);
		case 10:
			return "pbl_leadout_to_idle";
		case 12:
			return "pl_IG15_ArthurPushesCrate";
		case 11:
			return "pl_IG17_ENTER";
		case 13:
			return "pl_IG17_IDLE";
		case 14:
			return "pl_IG17_BECKON_ONE_HAND";
		case 15:
			return "pl_IG17_BECKON_TWO_HAND";
		case 16:
			return "pl_IG18_TAKE_FIRST_BOX";
		case 17:
			return "pl_IG19_TAKE_SECOND_BOX";
		case 18:
			return "pl_IG17_LINE_DOWN_HERE";
		case 19:
			return "pl_IG17_LINE_KEEP_IT_COMIN";
		case 20:
			return "pl_IG18_LINE_KEEP_MOVIN";
		case 21:
			return "pl_IG18_LINE_COME_ON";
		case 22:
			return "pl_IG19_IDLE";
		case 23:
			return "pl_IG20_R_Turn";
		case 24:
			return "pl_IG20_L_Turn";
		case 25:
			return "pl_IG14_PlacesBox_Front";
		case 26:
			return "pl_IG14_PlacesBox_Left";
		case 27:
			return "pl_IG14_PlacesBox_Right";
		case 28:
			return "pl_IG14_PlacesBox_Idle";
		case 30:
			return "pl_IG11_ARTHUR_GRAB_TOP_BOX_RF_RIGHT";
		case 29:
			return "pl_IG11_ARTHUR_GRAB_BOT_BOX_RF_RIGHT";
		case 31:
			return "pl_IG21_TAKE_DYNAMITE_FRONT";
		case 32:
			return "pl_IG11_ENTER";
		case 33:
			return "pl_IG23_HandCartJump";
		case 34:
			return "pl_IG18_IG19_OPEN_BOXES";
		case 35:
			return "pbl_p1_crouch_to_stand_FuseStartPose";
		case 36:
			return "pbl_p2_stand_set_dynamite_FuseStartPose";
		case 37:
			return "pbl_p3_stand_set_dynamite_FuseFirstPose";
		case 38:
			return "pbl_p4_stand_set_dynamite_FuseStartPose";
		default:
			break;
	}
	return "";
}

void func_1244(var uParam0)
{
	if (iLocal_665 < 3)
	{
		if (!__LIB_0__::func_75(&uLocal_661))
		{
			__LIB_1__::func_148(&uLocal_661);
		}
		else if (__LIB_0__::func_264(&uLocal_661) >= 15f)
		{
			if (__LIB_5__::func_314(uParam0, func_1173(40), 0))
			{
				iLocal_665++;
				__LIB_1__::func_148(&uLocal_661);
			}
		}
	}
}

int func_1245()
{
	struct<31> Var0;
	struct<31> Var34;
	vector3 vVar68;
	vector3 vVar71;
	int iVar74;
	Var0.f_6 = -1082130432;
	Var0.f_9 = -1082130432;
	Var34.f_6 = -1082130432;
	Var34.f_9 = -1082130432;
	switch (iLocal_654)
	{
		case 0:
			STREAMING::_REQUEST_MOVE_NETWORK_DEF("Script_TRN3_Dynamite_Plunger");
			STREAMING::REQUEST_ANIM_DICT("MINI_GAMES@STORY@TRN3@DYNAMITE_PLUNGER@ARTHUR");
			STREAMING::REQUEST_ANIM_DICT("MINI_GAMES@STORY@TRN3@DYNAMITE_PLUNGER@DETONATOR");
			iLocal_654 = 1;
			break;
		case 1:
			if (!STREAMING::_HAS_MOVE_NETWORK_DEF_LOADED("Script_TRN3_Dynamite_Plunger"))
			{
				return 0;
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED("MINI_GAMES@STORY@TRN3@DYNAMITE_PLUNGER@ARTHUR"))
			{
				return 0;
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED("MINI_GAMES@STORY@TRN3@DYNAMITE_PLUNGER@DETONATOR"))
			{
				return 0;
			}
			if (bLocal_653)
			{
				iLocal_654 = 2;
			}
			break;
		case 2:
			Var0.f_1 = joaat("DEFAULT");
			Var0 = 784124497;
			Var0.f_4 = "Plunger";
			Var0.f_5 = 0f;
			Var0.f_7 = "Stress";
			Var0.f_8 = 0f;
			Var0.f_30 = "Wait";
			Var34.f_1 = joaat("DEFAULT");
			Var34 = 843040589;
			Var34.f_4 = "Plunger";
			Var34.f_5 = 0f;
			Var34.f_30 = "Wait";
			vVar68 = { 568.33f, 1691.87f, 185.92f };
			vVar71 = { 0f, 0f, 6.979f };
			TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(Global_35, "Script_TRN3_Dynamite_Plunger", &Var0, vVar68, vVar71, 2, 4f, 0, 0, 0, 0);
			TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(Local_14.f_10[0], "Script_TRN3_Dynamite_Plunger", &Var34, vVar68, vVar71, 2, 4f, 0, 0, 0, 0);
			PED::_0x2208438012482A1A(Global_35, false, false);
			ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_14.f_10[0], true);
			iLocal_654 = 3;
			break;
		case 3:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_235[2 /*8*/]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_235[2 /*8*/]);
			}
			if (!TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_35))
			{
				return 0;
			}
			PED::_0x2208438012482A1A(Global_35, false, false);
			ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_14.f_10[0], true);
			iLocal_654 = 4;
			break;
		case 4:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "Plunger", fLocal_656);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "Stress", fLocal_655);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Local_14.f_10[0], "Plunger", fLocal_656);
			fLocal_655 = fLocal_656;
			iVar74 = BUILTIN::ROUND((fLocal_655 * 100f));
			PAD::SET_PAD_SHAKE(0, 10, iVar74);
			if (__LIB_0__::func_139(iLocal_651))
			{
				fLocal_656 = __LIB_0__::func_486(iLocal_651, 1);
				if (fLocal_656 == 1f)
				{
					iLocal_654 = 5;
				}
			}
			break;
	}
	return 0;
}

void func_1247(var uParam0)
{
	if (__LIB_0__::func_486(iLocal_651, 1) < 0.7f && !__LIB_1__::func_530(iLocal_651, 1))
	{
		if (iLocal_664 < 3)
		{
			if (!__LIB_0__::func_75(&uLocal_661))
			{
				__LIB_1__::func_148(&uLocal_661);
			}
			else if (__LIB_0__::func_264(&uLocal_661) >= 15f)
			{
				if (__LIB_5__::func_314(uParam0, func_1173(41), 0))
				{
					iLocal_664++;
					__LIB_1__::func_148(&uLocal_661);
				}
			}
		}
	}
}

void func_1249(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_511[iVar0]))
		{
			func_1679(&(iLocal_511[iVar0]), bParam0);
		}
		iVar0++;
	}
}

int func_1252()
{
	float fVar0;
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_235[4 /*8*/], false))
	{
		fVar0 = ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_235[4 /*8*/]);
		if ((((fVar0 >= 0f && fVar0 <= 4.5f) || (fVar0 >= 5.5f && fVar0 <= 16.5f)) || (fVar0 >= 17.5f && fVar0 <= 25f)) || (fVar0 >= 26.5f && fVar0 <= 31.5f))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 0;
	}
	return 0;
}

float func_1253(int iParam0, int iParam1)
{
	return func_919(iParam0, iParam1);
}

void func_1258()
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
	iVar0 = func_1684(6291456, 0);
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

int func_1282(var uParam0, int iParam1, int iParam2)
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
		return func_1282(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_1313(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;
	if (!__LIB_0__::func_31(iParam0))
	{
		return 0;
	}
	vVar0.x = iParam3;
	vVar0.f_1 = iParam4;
	vVar0.f_2 = iParam5;
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
				func_822(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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
			__LIB_1__::func_799(iParam0, Global_1360165[iParam0 /*1157*/]);
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

void func_1314(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	vector3 vVar0;
	__LIB_4__::func_787(iParam1, bParam3, bParam4, bParam6);
	if (!__LIB_4__::func_948(uParam0, 512))
	{
		if (__LIB_4__::func_948(uParam0, 4) && bParam4)
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 5f, 0f, 0f) };
			__LIB_1__::func_338(iParam1, vVar0);
		}
	}
	else
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_10781);
	}
	func_1705(uParam0, iParam1, iParam2, __LIB_1__::func_464(iParam2, 0));
	__LIB_5__::func_572(uParam0, iParam1, 512);
	if (bParam5)
	{
		__LIB_5__::func_572(uParam0, iParam1, 128);
	}
	else
	{
		__LIB_5__::func_571(uParam0, iParam1, 128);
	}
	switch (iParam2)
	{
		case 1:
		case default:
	}
}

bool func_1348(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_4__::func_562(uParam0, 32768))
	{
		return true;
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		uParam0->f_2286 = __LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_2287 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_2289 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_2287)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_2288 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_2288 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_2289)
		{
			uParam0->f_2291 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_2292 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		__LIB_5__::func_62(uParam0);
	}
	if (__LIB_0__::func_78(uParam0) < 10)
	{
		if (__LIB_0__::func_78(uParam0) == 3)
		{
			__LIB_9__::func_911(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_4__::func_562(uParam0, 524288))
				{
					__LIB_8__::func_804(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_4__::func_574(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_5__::func_382(uParam0, iParam5);
					return true;
				}
			}
			if (!__LIB_4__::func_562(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2074 /*41*/]), 16))
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
			if (uParam0->f_2074 >= 0)
			{
				if (!__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2078 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (__LIB_4__::func_575(uParam0, uParam0->f_2074))
				{
					if (__LIB_4__::func_576(uParam0) < 7 && uParam0->f_2078 >= 0)
					{
						__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2078 /*41*/].f_27, uParam0->f_1735[uParam0->f_2078 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_2078 >= 0)
				{
					__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2078 /*41*/].f_27, uParam0->f_1735[uParam0->f_2078 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				__LIB_9__::func_54(uParam0);
			}
		}
	}
	bVar0 = __LIB_5__::func_500(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!__LIB_4__::func_562(uParam0, 268435456) && bVar1) && !__LIB_4__::func_562(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_2292);
			if (uParam0->f_2074 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_1406[uParam0->f_2074 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_2292)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				__LIB_4__::func_532(uParam0, 131072);
				__LIB_4__::func_532(uParam0, 268435456);
			}
		}
		if (__LIB_4__::func_577(uParam0, 64) || (uParam0->f_2074 >= 0 && !__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2074 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || __LIB_0__::func_81(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) == 3 || __LIB_4__::func_562(uParam0, 131072))
	{
		__LIB_4__::func_984(uParam0);
		if (!__LIB_4__::func_562(uParam0, 262144))
		{
			if ((bVar0 && __LIB_4__::func_562(uParam0, 65536)) || __LIB_4__::func_562(uParam0, 131072))
			{
				__LIB_4__::func_532(uParam0, 32768);
				__LIB_4__::func_574(uParam0, 4);
				__LIB_0__::func_115(uParam0, 10);
				uParam0->f_2159 = 1;
				__LIB_5__::func_382(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_9__::func_165(uParam0, iParam5);
		__LIB_4__::func_578(uParam0);
		if (!__LIB_4__::func_579(uParam0, 1))
		{
			__LIB_5__::func_63(uParam0);
		}
		__LIB_4__::func_580(uParam0);
	}
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_5__::func_501(uParam0, Param1, iParam5);
			break;
		case 1:
			__LIB_6__::func_920(uParam0);
			break;
		case 2:
			__LIB_5__::func_502(uParam0);
			break;
		case 3:
			if (__LIB_4__::func_581(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2074 /*41*/].f_27, uParam0->f_1735[uParam0->f_2074 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_1__::func_148(&(uParam0->f_2262));
				__LIB_4__::func_574(uParam0, 1);
				__LIB_4__::func_582();
				__LIB_0__::func_115(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!__LIB_4__::func_562(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (__LIB_0__::func_78(uParam0) == 5)
			{
				if (__LIB_4__::func_985(uParam0))
				{
					__LIB_4__::func_574(uParam0, 2);
					__LIB_0__::func_115(uParam0, 6);
				}
			}
			if (__LIB_0__::func_78(uParam0) == 6)
			{
				if (__LIB_4__::func_986(uParam0))
				{
					__LIB_4__::func_574(uParam0, 3);
					__LIB_0__::func_115(uParam0, 8);
				}
			}
			if (uParam0->f_2075 >= 0 || __LIB_0__::func_264(&(uParam0->f_2262)) >= 15f)
			{
				if (__LIB_5__::func_308(uParam0, iParam5))
				{
					if (__LIB_4__::func_583(uParam0))
					{
						uParam0->f_2075 = __LIB_5__::func_64(uParam0);
						__LIB_1__::func_148(&(uParam0->f_2262));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						__LIB_4__::func_574(uParam0, 6);
						__LIB_0__::func_115(uParam0, 9);
					}
					else
					{
						__LIB_4__::func_574(uParam0, 4);
						__LIB_0__::func_115(uParam0, 10);
						__LIB_5__::func_382(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_5__::func_308(uParam0, iParam5))
			{
				__LIB_5__::func_382(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_1354(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	__LIB_5__::func_68(uParam4, &uParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		__LIB_9__::func_345(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (__LIB_0__::func_81(uParam4))
	{
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_804, true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_804, false))
				{
					__LIB_10__::func_966(uParam4, &uParam0, uParam5);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804))
				{
					__LIB_1__::func_747(uParam4, 4);
					return false;
				}
				else
				{
					if (__LIB_4__::func_584(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_797);
					}
					__LIB_5__::func_265(uParam5);
				}
				__LIB_1__::func_747(uParam4, 3);
			}
			else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (__LIB_5__::func_331(uParam5, __LIB_4__::func_939(uParam5), 262144))
				{
					if (!__LIB_0__::func_84(uParam4, 2097152))
					{
						__LIB_5__::func_69(uParam4);
					}
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_806)) && (!__LIB_4__::func_937(uParam5, 8) || __LIB_0__::func_84(uParam4, 134217728)))
				{
				}
				else
				{
					__LIB_5__::func_309(uParam4);
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
				__LIB_5__::func_350(uParam4);
				if (!__LIB_0__::func_75(&(uParam4->f_1)))
				{
					__LIB_1__::func_283(&(uParam4->f_1), 0);
				}
				else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_804);
					}
					__LIB_1__::func_747(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) || !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_804, true, false))
			{
				if (__LIB_5__::func_577(uParam4, &uParam0, 1, 1))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_804, true, false))
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
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_804);
					}
					__LIB_1__::func_747(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (__LIB_5__::func_253(uParam5) != 0 || (__LIB_0__::func_81(uParam5) == 1 && __LIB_5__::func_279(uParam5, __LIB_4__::func_939(uParam5)) >= 3))
				{
					if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
					{
						MISC::_0xA565FAC215CBC77D();
						__LIB_0__::func_722(1, 0);
						__LIB_10__::func_966(uParam4, &uParam0, uParam5);
						__LIB_1__::func_747(uParam4, 3);
					}
					else
					{
						SCRIPTS::SHUTDOWN_LOADING_SCREEN();
					}
				}
			}
			else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_804);
				}
				__LIB_1__::func_747(uParam4, 4);
			}
			break;
		case 3:
			func_378(uParam4);
			if (__LIB_4__::func_584(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_797);
			}
			__LIB_5__::func_265(uParam5);
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_804, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804) || __LIB_0__::func_84(uParam4, 512)))
			{
				if (!__LIB_0__::func_84(uParam4, 1024) && __LIB_4__::func_987(uParam4, 1))
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
				__LIB_9__::func_345(uParam4);
			}
			if (__LIB_0__::func_84(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((__LIB_4__::func_585(uParam4) - __LIB_4__::func_586(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (__LIB_4__::func_988(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && __LIB_4__::func_586(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (__LIB_4__::func_989(uParam4))
			{
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
				{
				}
				__LIB_6__::func_921(uParam4);
				return true;
			}
			else
			{
				if (__LIB_0__::func_84(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_804);
						}
						__LIB_1__::func_148(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_4__::func_550(uParam4, 67108864, 1);
						__LIB_1__::func_747(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!__LIB_0__::func_84(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804)) && CAM::IS_SCREEN_FADED_OUT()) && __LIB_4__::func_586(uParam4) <= 5000) && __LIB_4__::func_586(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!__LIB_0__::func_84(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					__LIB_5__::func_129(&(uParam4->f_861), 0);
					__LIB_0__::func_88(uParam4, 536870912);
				}
				if (__LIB_4__::func_586(uParam4) >= 5000 && __LIB_4__::func_586(uParam4) <= (__LIB_4__::func_585(uParam4) - 5000))
				{
					__LIB_0__::func_89();
				}
			}
			break;
		case 6:
			if (__LIB_4__::func_989(uParam4))
			{
				__LIB_6__::func_921(uParam4);
				return true;
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
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
					{
						__LIB_0__::func_88(uParam4, 1073741824 /* Float: 2f */);
					}
				}
			}
			else
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, true);
						if (UIFEED::_0xC17F69E1418CD11F(9) != 0)
						{
							UIFEED::_0xDD1232B332CBB9E7(9, 1, 0);
						}
						return false;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam4->f_804))
					{
						return false;
					}
				}
				iVar0 = 1;
				if (__LIB_0__::func_81(uParam5) == 1 && __LIB_5__::func_279(uParam5, __LIB_4__::func_939(uParam5)) >= 3)
				{
					if (__LIB_5__::func_266(uParam5))
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, false);
						}
						__LIB_1__::func_747(uParam4, 3);
					}
					else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, false);
						}
						__LIB_1__::func_747(uParam4, 3);
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!__LIB_4__::func_584(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_798);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, false);
						}
						__LIB_1__::func_747(uParam4, 3);
					}
					else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, false);
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
	return false;
}

void func_1381()
{
	int iVar0;
	int iVar1;
	switch (iLocal_510)
	{
		case 1:
			if (Local_235[19 /*8*/].f_4)
			{
				if (func_1198(19, 32, 1065017672 /* Float: 0.98f */))
				{
					func_1180(3);
				}
			}
			break;
		case 3:
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_127, 242628503, true) == 8 || __LIB_0__::func_94(iLocal_127, func_1159(0, 5), 1) < 2.5f)
			{
				func_1180(5);
			}
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_127, sLocal_140))
			{
				iVar0 = TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_127);
				if (iVar0 < 1)
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_127, 1.5f, 0, -1082130432 /* Float: -1f */, 0);
				}
				else if (iVar0 < 3)
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_127, 1.5f, 0, -1082130432 /* Float: -1f */, 0);
				}
				else if (iVar0 > 17)
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_127, 1f, 0, -1082130432 /* Float: -1f */, 0);
				}
				else
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_127, 1.5f, 0, -1082130432 /* Float: -1f */, 0);
				}
			}
			break;
		case 6:
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_130[0]))
			{
				iLocal_130[0] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), VOLUME::_GET_VOLUME_COORDS(Local_27.f_14), VOLUME::_GET_VOLUME_ROTATION(Local_27.f_14), VOLUME::_GET_VOLUME_SCALE(Local_27.f_14));
			}
			if (__LIB_6__::func_903(func_1173(13)))
			{
				if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(func_1173(13)) > 0 || __LIB_0__::func_48(Global_35, iLocal_127, 1.3f, 1))
				{
					func_1180(8);
				}
			}
			break;
		case 8:
			__LIB_4__::func_982(iLocal_127, 1.35f);
			if (ANIMSCENE::_0x337F1CC8EE895601(Local_235[9 /*8*/], "player_zero"))
			{
				func_1180(9);
			}
			break;
		case 10:
			__LIB_4__::func_982(iLocal_127, 2f);
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_130[0]))
			{
				VOLUME::_DELETE_VOLUME(iLocal_130[0]);
			}
			if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_489, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &iVar1) && TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_489, ENTITY::GET_ENTITY_COORDS(iLocal_127, true, false), &iVar0))
			{
				if (iVar1 + 10 > iVar0 || __LIB_0__::func_48(iLocal_127, Global_35, 6f, 1))
				{
					func_1180(11);
				}
			}
			break;
		case 4:
			break;
		case 11:
			if (__LIB_6__::func_903(func_1173(15)))
			{
				if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(func_1173(15)) > 0)
				{
					func_1180(12);
				}
			}
			break;
		case 12:
			__LIB_4__::func_982(iLocal_127, 2f);
			break;
		case 17:
			TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("Trn3_WagonLeave", ENTITY::GET_ENTITY_COORDS(iLocal_127, true, false), &iVar0);
			if (iVar0 >= 10)
			{
				iLocal_161 = 1;
			}
			break;
	}
}

int func_1383(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;
	iVar0 = __LIB_4__::func_939(uParam0);
	iVar1 = 1;
	if (iVar0 < 3)
	{
		vVar2 = { Global_36 };
		vVar2.f_2 = (vVar2.z - 10f);
		iVar5 = 0;
		while (iVar5 < 4)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_101[iVar5 /*4*/].f_1))
			{
				Local_101[iVar5 /*4*/].f_1 = OBJECT::CREATE_OBJECT(joaat("P_CS_FUSEDYNAMITE01X"), vVar2, true, true, false, false, true);
				iVar1 = 0;
			}
			iVar5++;
		}
		if (!func_1203(10, 35, 0, -1, 1, 0))
		{
			iVar1 = 0;
		}
		if (!func_1203(11, 36, 1, -1, 1, 0))
		{
			iVar1 = 0;
		}
		if (!func_1203(12, 37, 2, -1, 1, 0))
		{
			iVar1 = 0;
		}
		if (!func_1203(13, 38, 3, -1, 1, 0))
		{
			iVar1 = 0;
		}
	}
	return iVar1;
}

void func_1395(var uParam0)
{
	struct<8> Var0;
	func_1829(uParam0);
	if (__LIB_5__::func_253(uParam0) == 1 && CAM::IS_SCREEN_FADED_OUT())
	{
		GRAPHICS::_0x297B72E2AF094742(6);
	}
	else if (__LIB_5__::func_253(uParam0) == 0 && !__LIB_4__::func_937(uParam0, 8))
	{
		__LIB_5__::func_284(uParam0);
	}
	__LIB_5__::func_326(&(uParam0->f_10792));
	__LIB_5__::func_74(uParam0);
	__LIB_4__::func_992(uParam0, 67108864);
	__LIB_4__::func_992(uParam0, 8192);
	__LIB_4__::func_969(uParam0, 4);
	__LIB_4__::func_969(uParam0, 512);
	__LIB_4__::func_969(uParam0, 65536);
	__LIB_4__::func_969(uParam0, 1024);
	__LIB_4__::func_969(uParam0, 262144);
	__LIB_4__::func_969(uParam0, 16777216);
	__LIB_4__::func_969(uParam0, 64);
	__LIB_4__::func_958(uParam0, 128);
	__LIB_4__::func_944(uParam0, -2147483648);
	__LIB_4__::func_993(uParam0, 1);
	if (__LIB_4__::func_948(uParam0, 4194304))
	{
		__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 1073741824 /* Float: 2f */);
	}
	__LIB_4__::func_958(uParam0, 4194304);
	__LIB_4__::func_958(uParam0, 8388608);
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2048))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	if (__LIB_0__::func_2() == 0)
	{
		__LIB_1__::func_965(8);
		__LIB_5__::func_103(1);
	}
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 64) || !__LIB_4__::func_947(uParam0))
	{
		__LIB_0__::func_267(0);
	}
	else
	{
		__LIB_0__::func_267(1);
	}
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	if (!__LIB_4__::func_937(uParam0, 131072))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::GET_PLAYER_INDEX(), false);
	}
	__LIB_0__::func_37(&(uParam0->f_13106));
	__LIB_1__::func_148(&(uParam0->f_13112));
	__LIB_5__::func_598(uParam0, __LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1));
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1024))
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 32768))
	{
		__LIB_0__::func_733(1);
	}
	if (__LIB_5__::func_285(uParam0, __LIB_5__::func_475(uParam0)) != -1 && PED::_0x62DE46F061CAA468() < __LIB_5__::func_285(uParam0, __LIB_5__::func_475(uParam0)))
	{
		PED::_0xF008E0BA1FE1D644((__LIB_5__::func_285(uParam0, __LIB_5__::func_475(uParam0)) - PED::_0x62DE46F061CAA468()));
	}
	if (MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_EXISTS())
	{
		MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_DELETE();
	}
	Var0 = { __LIB_5__::func_310(uParam0) };
	MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_SET_MODIFIER(&Var0);
	Global_43805 = -1;
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1))
	{
		__LIB_0__::func_7(&Global_1935630, 2097152);
	}
	else
	{
		__LIB_0__::func_8(&Global_1935630, 2097152);
	}
	__LIB_5__::func_472(uParam0);
	if (__LIB_4__::func_939(uParam0) == 25 && __LIB_0__::func_13(32768))
	{
		__LIB_5__::func_490(uParam0, 16);
	}
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 512))
	{
		__LIB_4__::func_587(1f, 0f, 0f, 0f);
	}
	else
	{
		__LIB_4__::func_680();
	}
}

void func_1551(int iParam0)
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
	func_621(iParam0, 1, 1, -142743235, 1);
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
		func_621(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_1556(struct<6> Param0)
{
	if (!func_1959(Param0.f_4, 1))
	{
	}
	if (!func_1959(Param0, 1))
	{
	}
	if (!func_1959(Param0.f_2, 1))
	{
	}
	if (!func_1959(Param0.f_5, 1))
	{
	}
	if (!func_1959(Param0.f_3, 1))
	{
	}
	if (!func_1959(Param0.f_1, 1))
	{
	}
}

var func_1609(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, float fParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, int iParam10)
{
	var uVar0;
	char* sVar1;
	func_1161(uParam0, sParam1, fParam5, sParam6, sParam7, sParam8, sParam9, iParam10);
	if (bParam4)
	{
		UILOG::_UILOG_SET_HAS_DISPLAYED_CACHED_OBJECTIVE();
		uVar0 = __LIB_1__::func_422(sParam1, iParam3, bParam4, 1, sParam6, sParam7, sParam8, sParam9, iParam10);
	}
	else if (!__LIB_5__::func_491(uParam0, sParam1))
	{
		sVar1 = __LIB_0__::func_958(iParam10, sParam1, sParam6, sParam7, sParam8, sParam9);
		UILOG::_UILOG_SET_HAS_DISPLAYED_CACHED_OBJECTIVE();
		uVar0 = __LIB_0__::func_565(sVar1, iParam3, 0, 0, 0, 1);
	}
	return uVar0;
}

void func_1617(int iParam0, int iParam1)
{
	struct<9> Var0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		func_2005(iParam0);
		Var0.f_4 = -1;
		Var0.f_8 = 2;
		Var0.f_9 = 1;
		Var0.f_10 = 1;
		Var0.f_11 = 1;
		Var0.f_13 = 1;
		Var0.f_14 = 2;
		Var0.f_15 = 2;
		Var0.f_16 = 3;
		Var0.f_19 = 3;
		Var0.f_20 = 1;
		Var0.f_21 = 3;
		Var0.f_22 = 3;
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1) == Global_35)
			{
				Var0 = { 0f, 0f, 1f };
			}
		}
		Var0.f_3 = iParam1;
		Var0.f_7 = -1;
		Var0.f_8 = 4;
		_NAMESPACE29::_0x66F9EB44342BB4C5(iParam0, &Var0);
	}
}

void func_1620(int iParam0)
{
	if (iParam0 != iLocal_598)
	{
		iLocal_598 = iParam0;
	}
}

int func_1621()
{
	switch (iLocal_594)
	{
		case 0:
			return 21;
		case 1:
			return 19;
		case 2:
			return 20;
		case 3:
			return 18;
		default:
			break;
	}
	return 39;
}

void func_1624()
{
	ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_121, false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_ACTION"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_PC"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ACCURATE_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_CRAFTING_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_EMOTE_WHEEL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_ITEM_WHEEL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER_TRANSITION"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
	if (!PED::GET_PED_CONFIG_FLAG(Global_35, 43, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, true);
	}
	WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
}

void func_1625(int iParam0)
{
	if ((PED::IS_PED_ON_SPECIFIC_VEHICLE(Global_35, iLocal_121) || PED::IS_PED_IN_COVER(Global_35, false, false)) || __LIB_0__::func_103())
	{
		__LIB_1__::func_281(&iLocal_152, 1, 1);
	}
	else if (!__LIB_0__::func_139(iLocal_152))
	{
		iLocal_152 = __LIB_1__::func_745("TRN3_UC_CRATE", joaat("INPUT_PICKUP_CARRIABLE"), iParam0, 3, 1, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
		__LIB_4__::func_12(iLocal_152, joaat("TRN3_G_CRATE"), 0, 1);
	}
}

void func_1626()
{
	if (bLocal_495)
	{
		if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_125, Global_35))
		{
			ENTITY::DETACH_ENTITY(iLocal_125, false, true);
			PED::_0xCE7A6C1D5CDE1F9D(Global_35, iLocal_125, "P_CS_CRATETNT01X_PH_R_HAND", "LOCO_ATTACH_CRATE_TNT");
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_125, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			PED::_0xE8ABE3B73FC7FE17(Global_35, iLocal_125, "P_CS_CRATETNT01X_PH_R_HAND", "LOCO_ATTACH_CRATE_TNT");
		}
	}
	else if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_124, Global_35))
	{
		ENTITY::DETACH_ENTITY(iLocal_124, false, true);
		PED::_0xCE7A6C1D5CDE1F9D(Global_35, iLocal_124, "P_CS_CRATETNT01X_PH_R_HAND", "LOCO_ATTACH_CRATE_TNT");
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_124, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
		PED::_0xE8ABE3B73FC7FE17(Global_35, iLocal_124, "P_CS_CRATETNT01X_PH_R_HAND", "LOCO_ATTACH_CRATE_TNT");
	}
}

bool func_1627(int iParam0)
{
	switch (iLocal_600)
	{
		case 0:
			if (bLocal_495)
			{
				Local_235[16 /*8*/].f_2 = func_1243(16, 29);
			}
			else
			{
				Local_235[16 /*8*/].f_2 = func_1243(16, 30);
			}
			if (!Local_235[16 /*8*/].f_3)
			{
				Local_235[16 /*8*/].f_3 = func_1202(16, 0, 0);
				return false;
			}
			else
			{
				func_1241(16, -1, -1, 1);
				iLocal_600 = 2;
				WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
			}
			break;
		case 2:
			if (func_2007())
			{
				iLocal_600 = 1;
			}
			break;
		case 1:
			if (bLocal_495)
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_235[16 /*8*/], "player_zero", func_1243(16, 29), 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
			}
			else
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_235[16 /*8*/], "player_zero", func_1243(16, 30), 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
			}
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_35, iLocal_121, false);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_125))
			{
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_125, iLocal_121, false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_124))
			{
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_124, iLocal_121, false);
			}
			iLocal_600 = 3;
			break;
		case 3:
			if (ANIMSCENE::_0x337F1CC8EE895601(Local_235[16 /*8*/], "player_zero"))
			{
				iLocal_600 = 4;
				if (bLocal_495)
				{
					__LIB_2__::func_919(iLocal_125, 0, 1);
				}
				else
				{
					__LIB_2__::func_919(iLocal_124, 0, 1);
				}
			}
			break;
		case 4:
			if (bLocal_495)
			{
				if (func_1203(16, 29, -1, -1, 1, 0))
				{
					iLocal_600 = 5;
				}
			}
			else if (func_1203(16, 30, -1, -1, 1, 0))
			{
				iLocal_600 = 5;
			}
			break;
		case 5:
			if (bLocal_495)
			{
				if (func_1198(16, 29, 0.5f))
				{
					PED::_0xCE7A6C1D5CDE1F9D(Global_35, iLocal_125, "P_CS_CRATETNT01X_PH_R_HAND", "LOCO_ATTACH_CRATE_TNT");
				}
			}
			else if (func_1198(16, 30, 0.5f))
			{
				PED::_0xCE7A6C1D5CDE1F9D(Global_35, iLocal_124, "P_CS_CRATETNT01X_PH_R_HAND", "LOCO_ATTACH_CRATE_TNT");
			}
			if ((bLocal_495 && (func_1198(16, 29, 0.95f) || ANIMSCENE::_0xB89FCFF19DAFFF28(Local_235[16 /*8*/], "player_zero"))) || (!bLocal_495 && (func_1198(16, 30, 0.95f) || ANIMSCENE::_0xB89FCFF19DAFFF28(Local_235[16 /*8*/], "player_zero"))))
			{
				iLocal_600 = 0;
				WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_35, iLocal_121, true);
				return true;
			}
			break;
	}
	return false;
}

void func_1628()
{
	int iVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	iVar0 = -1;
	fVar1 = 10000f;
	if (!bLocal_609)
	{
		vVar3 = { func_1159(0, 16) };
		vVar3.f_2 = 186.7598f;
		vVar3 = { vVar3 - Vector(186.7598f, 1749.519f, 524.4124f) };
		__LIB_0__::func_173(vVar3);
		vVar3 = { vVar3 * Vector(1f, 1f, 1f) };
		vLocal_497[0 /*3*/] = { Vector(186.7598f, 1749.519f, 524.4124f) + vVar3 };
		vVar3 = { func_1159(0, 17) };
		vVar3.f_2 = 186.7598f;
		vVar3 = { vVar3 - Vector(186.7598f, 1749.519f, 524.4124f) };
		__LIB_0__::func_173(vVar3);
		vVar3 = { vVar3 * Vector(1.25f, 1.25f, 1.25f) };
		vLocal_497[1 /*3*/] = { Vector(186.7598f, 1749.519f, 524.4124f) + vVar3 };
		vVar3 = { func_1159(0, 15) };
		vVar3.f_2 = 186.7598f;
		vVar3 = { vVar3 - Vector(186.7598f, 1749.519f, 524.4124f) };
		__LIB_0__::func_173(vVar3);
		vVar3 = { vVar3 * Vector(1.25f, 1.25f, 1.25f) };
		vLocal_497[2 /*3*/] = { Vector(186.7598f, 1749.519f, 524.4124f) + vVar3 };
		bLocal_609 = true;
	}
	if (__LIB_0__::func_266(Global_35, 524.4124f, 1749.519f, 186.7598f, 3f, 1, 1))
	{
		fVar2 = __LIB_0__::func_94(Global_35, vLocal_497[0 /*3*/], 1);
		if (fVar2 < fVar1)
		{
			fVar1 = fVar2;
			iVar0 = 0;
		}
		fVar2 = __LIB_0__::func_94(Global_35, vLocal_497[1 /*3*/], 1);
		if (fVar2 < fVar1)
		{
			fVar1 = fVar2;
			iVar0 = 1;
		}
		fVar2 = __LIB_0__::func_94(Global_35, vLocal_497[2 /*3*/], 1);
		if (fVar2 < fVar1)
		{
			fVar1 = fVar2;
			iVar0 = 2;
		}
		switch (iVar0)
		{
			case 0:
				iLocal_496 = 3;
				break;
			case 1:
				iLocal_496 = 1;
				break;
			case 2:
				iLocal_496 = 2;
				break;
		}
	}
	else
	{
		iLocal_496 = 0;
	}
}

void func_1629(int iParam0)
{
	if (!bLocal_611)
	{
		ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
		if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
		{
			ENTITY::DETACH_ENTITY(*iParam0, true, true);
		}
		PED::_0x3A50753042B6891B(Global_35, "P_CS_CRATETNT01X_PH_R_HAND");
		PHYSICS::ACTIVATE_PHYSICS(*iParam0);
		ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(*iParam0, 1, Vector(-1f, 0f, 0f) * Vector(10f, 10f, 10f), false, false, true, false);
		bLocal_611 = true;
	}
}

void func_1630(var uParam0, int* iParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		if (bParam3)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_127, false);
			ENTITY::_SET_ENTITY_HEALTH(iLocal_127, 1, 0);
			__LIB_1__::func_864(iLocal_127, 0, 0);
			FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(*iParam1, true, false), 25, 0.5f, true, false, 1f);
			__LIB_8__::func_824(uParam0, 1, iLocal_127, 0, 0, 1, 1);
		}
		else
		{
			__LIB_1__::func_864(Global_35, 0, 0);
		}
		if (CAM::DOES_CAM_EXIST(iLocal_570) && CAM::IS_CAM_ACTIVE(iLocal_570))
		{
			CAM::SHAKE_CAM(iLocal_570, "SMALL_EXPLOSION_SHAKE", 1f);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		PHYSICS::ACTIVATE_PHYSICS(*iParam1);
		ENTITY::FREEZE_ENTITY_POSITION(*iParam1, false);
		if (bParam2)
		{
			FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(*iParam1, true, false), 25, 0.5f, true, false, 1f);
		}
		else
		{
			OBJECT::DELETE_OBJECT(iParam1);
		}
	}
}

void func_1631(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	fVar0 = __LIB_0__::func_94(Global_35, func_1159(0, 3), 1);
	fVar1 = __LIB_0__::func_94(Global_35, func_1159(0, 10), 1);
	fVar2 = __LIB_0__::func_94(Global_35, func_1159(0, 11), 1);
	fVar3 = __LIB_0__::func_94(Global_35, func_1159(0, 12), 1);
	if (!bLocal_560)
	{
		if (fVar0 < 1.6f)
		{
			__LIB_5__::func_372(uParam0, 3);
		}
	}
	else
	{
		if (!bLocal_561)
		{
			if (fVar1 < fVar0)
			{
				__LIB_5__::func_372(uParam0, 4);
			}
		}
		if (!bLocal_562)
		{
			if (fVar2 < fVar0)
			{
				__LIB_5__::func_372(uParam0, 5);
			}
		}
		if (!bLocal_563)
		{
			if (fVar3 < fVar0)
			{
				__LIB_5__::func_372(uParam0, 6);
			}
		}
	}
}

void func_1632()
{
	bLocal_559 = false;
	bLocal_560 = false;
	bLocal_561 = false;
	bLocal_562 = false;
	bLocal_563 = false;
}

int func_1633()
{
	struct<31> Var0;
	char* sVar34;
	char* sVar35;
	char* sVar36;
	char* sVar37;
	char* sVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	vector3 vVar42;
	vector3 vVar45;
	char* sVar48;
	int iVar49;
	Var0.f_6 = -1082130432;
	Var0.f_9 = -1082130432;
	sVar34 = "MINI_GAMES@STORY@TRN3@LOWER_TNT@ARTHUR";
	sVar35 = "MINI_GAMES@STORY@TRN3@LOWER_TNT@CRATE";
	sVar36 = "MINI_GAMES@STORY@TRN3@LOWER_TNT@ROPE";
	sVar37 = "Script_TRN3_Lowering_TNT_Refactored";
	sVar38 = "Script_TRN3_Lowering_TNT_Rope";
	iVar39 = -860058268;
	iVar40 = 1676626193;
	iVar41 = 1017451252;
	switch (iLocal_587)
	{
		case 0:
			STREAMING::_REQUEST_MOVE_NETWORK_DEF(sVar37);
			STREAMING::_REQUEST_MOVE_NETWORK_DEF(sVar38);
			STREAMING::REQUEST_ANIM_DICT(sVar34);
			STREAMING::REQUEST_ANIM_DICT(sVar36);
			STREAMING::REQUEST_ANIM_DICT(sVar35);
			func_1637(1);
			break;
		case 1:
			if (!STREAMING::_HAS_MOVE_NETWORK_DEF_LOADED(sVar37) || !STREAMING::_HAS_MOVE_NETWORK_DEF_LOADED(sVar38))
			{
				return 0;
			}
			if ((!STREAMING::HAS_ANIM_DICT_LOADED(sVar34) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar36)) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar35))
			{
				return 0;
			}
			break;
		case 2:
			Var0.f_1 = joaat("DEFAULT");
			Var0 = iVar39;
			Var0.f_30 = "GameStart";
			vVar45 = { 568.96f, 1691.38f, 185.92f };
			vVar42 = { 0f, 0f, 0f };
			TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(Global_35, sVar37, &Var0, vVar45, vVar42, 2, 0, 0, 0, 16512, 0);
			Var0 = iVar40;
			if (bLocal_495)
			{
				TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(iLocal_125, sVar37, &Var0, vVar45, vVar42, 2, 0, 0, 0, 16512, 0);
			}
			else
			{
				TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(iLocal_124, sVar37, &Var0, vVar45, vVar42, 2, 0, 0, 0, 16512, 0);
			}
			Var0 = iVar41;
			TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(iLocal_126, sVar38, &Var0, vVar45, vVar42, 2, 0, 0, 0, 16512, 0);
			func_1637(3);
			break;
		case 3:
			if (!TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_35))
			{
				return 0;
			}
			iLocal_588 = 0;
			bLocal_589 = true;
			func_1637(4);
			break;
		case 4:
			if (!bLocal_589)
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, func_2010(iLocal_588));
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iLocal_126, func_2010(iLocal_588));
				if (bLocal_495)
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iLocal_125, func_2010(iLocal_588));
				}
				else
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iLocal_124, func_2010(iLocal_588));
				}
				bLocal_589 = true;
				bLocal_593 = false;
			}
			else if (!bLocal_593)
			{
				if (func_2011(func_2010(iLocal_588)))
				{
					bLocal_593 = true;
				}
			}
			if (!bLocal_593)
			{
				return 0;
			}
			sVar48 = TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35);
			iVar49 = func_2012(sVar48);
			if (!bLocal_592)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 408192877) || (TASK::GET_TASK_MOVE_NETWORK_EVENT(Global_35, "Trans_7") && (func_2013() || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -951768523))))
				{
					bLocal_592 = true;
				}
			}
			switch (iVar49)
			{
				case 0:
					if (func_2013() || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2000250066))
					{
						bLocal_590 = true;
					}
					break;
				case 4:
					if (func_2013())
					{
						bLocal_590 = true;
					}
					break;
				case 2:
					if (func_2013())
					{
						bLocal_590 = true;
					}
					break;
				case 5:
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2000250066))
					{
						if (func_2013())
						{
							bLocal_590 = true;
							if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -951768523))
							{
								func_2014(2);
							}
						}
					}
					break;
				case 6:
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2000250066))
					{
						if (func_2013())
						{
							bLocal_590 = true;
							if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -951768523))
							{
								func_2014(4);
							}
						}
					}
					break;
			}
			break;
		case 5:
			break;
	}
	return 0;
}

void func_1634(var uParam0, int iParam1)
{
	if (iLocal_567 != iParam1)
	{
		iLocal_567 = iParam1;
	}
	else
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			break;
		case 1:
			func_1180(5);
			func_1620(4);
			CAM::SHAKE_CAM(iLocal_570, "HAND_SHAKE", 0.2f);
			bLocal_592 = false;
			fLocal_578 = 0f;
			break;
		case 2:
			break;
		case 3:
			if (iLocal_584 != 0 && UIFEED::_0x59FA676177DBE4C9(iLocal_584) < 4)
			{
				__LIB_0__::func_105(1);
			}
			iLocal_584 = __LIB_4__::func_981(func_2015(0), 0, 0, 1);
			CAM::STOP_CAM_SHAKING(iLocal_570, false);
			__LIB_0__::func_489(0, 0);
			CAM::SHAKE_CAM(iLocal_570, "HAND_SHAKE", 0.1f);
			break;
		case 4:
			__LIB_4__::func_353();
			func_1179(1);
			__LIB_1__::func_281(&iLocal_565, 0, 1);
			__LIB_1__::func_281(&iLocal_566, 0, 1);
			__LIB_0__::func_105(1);
			break;
		case 5:
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			func_168(&iLocal_570);
			__LIB_1__::func_281(&iLocal_152, 1, 1);
			PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
			PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
			break;
	}
}

void func_1635(var uParam0, float fParam1, float fParam2, float fParam3)
{
	bool bVar0;
	bool bVar1;
	bVar0 = __LIB_1__::func_530(iLocal_565, 1);
	bVar1 = __LIB_1__::func_530(iLocal_566, 1);
	switch (iLocal_568)
	{
		case 0:
			func_1638(uParam0, 1);
			break;
		case 1:
			func_1638(uParam0, 2);
			break;
		case 2:
			if (iLocal_567 > 2)
			{
				if (iLocal_588 != 5 && iLocal_588 != 2)
				{
					func_2014(5);
				}
				func_1638(uParam0, 4);
			}
			break;
		case 4:
		case 6:
			if (bLocal_590)
			{
				if (iLocal_568 == 4)
				{
					if (iLocal_588 != 5 && iLocal_588 != 2)
					{
						func_2014(5);
					}
				}
				else if (iLocal_588 != 6 && iLocal_588 != 4)
				{
					func_2014(6);
				}
			}
			fLocal_578 = (fLocal_578 - fParam3);
			if (fLocal_578 <= 0f)
			{
				fLocal_578 = 0f;
			}
			if (bLocal_590)
			{
				if (iLocal_568 == 4)
				{
					if (!bLocal_591)
					{
						func_2017(&iLocal_565, 1);
						func_2017(&iLocal_566, 0);
						bLocal_591 = true;
					}
					else if (bVar0 && PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MINIGAME_RIGHT_TRIGGER")) < 0.2f)
					{
						func_1638(uParam0, 5);
						iLocal_564++;
					}
				}
				else if (iLocal_568 == 6)
				{
					if (!bLocal_591)
					{
						func_2017(&iLocal_565, 0);
						func_2017(&iLocal_566, 1);
						bLocal_591 = true;
					}
					else if (PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MINIGAME_LEFT_TRIGGER")) < 0.2f && bVar1)
					{
						func_1638(uParam0, 7);
						iLocal_564++;
					}
				}
			}
			break;
		case 5:
		case 7:
			if (iLocal_568 == 5)
			{
				if (iLocal_588 != 6 && iLocal_588 != 4)
				{
					func_2014(6);
				}
			}
			else if (iLocal_588 != 5 && iLocal_588 != 2)
			{
				func_2014(5);
			}
			fLocal_583 = (fLocal_582 - vLocal_572.z);
			func_2018(0);
			if (fLocal_583 < 0.35f)
			{
				fLocal_578 = (fLocal_578 + fParam2);
				if (fLocal_578 >= fParam1)
				{
					fLocal_578 = fParam1;
				}
			}
			else
			{
				fLocal_578 = 0f;
			}
			if (bLocal_590)
			{
				if (iLocal_568 == 5)
				{
					func_1638(uParam0, 6);
				}
				else if (iLocal_568 == 7)
				{
					func_1638(uParam0, 4);
				}
			}
			break;
	}
}

void func_1636(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	if (iParam0 != iLocal_569)
	{
		iLocal_569 = iParam0;
	}
	switch (iParam0)
	{
		case 3:
		case 4:
			vVar0 = { 523.5775f, 1749.527f, 190.4541f };
			vVar3 = { -80.3525f, -0.0008f, -145.5838f };
			fVar6 = 35f;
			break;
	}
	if (CAM::DOES_CAM_EXIST(iLocal_570))
	{
		CAM::SET_CAM_COORD(iLocal_570, vVar0);
		CAM::SET_CAM_ROT(iLocal_570, vVar3, 2);
		CAM::SET_CAM_FOV(iLocal_570, fVar6);
		CAM::SET_CAM_ACTIVE(iLocal_570, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}
}

void func_1637(int iParam0)
{
	if (iLocal_587 != iParam0)
	{
		iLocal_587 = iParam0;
	}
}

void func_1638(var uParam0, int iParam1)
{
	if (iLocal_568 != iParam1)
	{
		fLocal_582 = vLocal_572.z;
		fLocal_583 = 0f;
		__LIB_1__::func_148(&uLocal_579);
		if (!__LIB_0__::func_139(iLocal_565))
		{
			iLocal_565 = __LIB_1__::func_746("TRN3_UC_GRIPL", joaat("INPUT_MINIGAME_LEFT_TRIGGER"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
		}
		if (!__LIB_0__::func_139(iLocal_566))
		{
			iLocal_566 = __LIB_1__::func_746("TRN3_UC_GRIPR", joaat("INPUT_MINIGAME_RIGHT_TRIGGER"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
		}
		__LIB_8__::func_754(iLocal_566, 1);
		__LIB_8__::func_754(iLocal_565, 1);
	}
	else
	{
		return;
	}
	iLocal_568 = iParam1;
	bLocal_591 = false;
	switch (iLocal_568)
	{
		case 0:
		case 8:
			break;
		case 1:
			func_2014(1);
			__LIB_1__::func_148(&uLocal_595);
			func_2017(&iLocal_565, 1);
			func_2017(&iLocal_566, 1);
			break;
		case 2:
			func_2017(&iLocal_565, 0);
			func_2017(&iLocal_566, 0);
			break;
		case 4:
		case 6:
			__LIB_1__::func_148(&uLocal_595);
			func_2017(&iLocal_565, 0);
			func_2017(&iLocal_566, 0);
			break;
		case 5:
		case 7:
			if (iLocal_568 == 5)
			{
				func_2017(&iLocal_565, 1);
				func_2017(&iLocal_566, 0);
			}
			else
			{
				func_2017(&iLocal_565, 0);
				func_2017(&iLocal_566, 1);
			}
			__LIB_0__::func_37(&uLocal_595);
			break;
	}
}

Vector3 func_1639(int iParam0, bool bParam1)
{
	vector3 vVar0;
	vVar0 = { func_2021(iParam0, bParam1) };
	return vVar0;
}

float func_1640(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -30.67f;
		case 1:
			return 41.61f;
		case 2:
			return -30.67f;
		case 3:
			return 41.61f;
		default:
			break;
	}
	return 0f;
}

Vector3 func_1641(int iParam0)
{
	vector3 vVar0;
	vVar0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
			return 521.72f, 1756.14f, 182.93f;
		case 1:
			return 508.65f, 1764.6f, 181.96f;
		case 2:
			return 491.28f, 1774.14f, 182.88f;
		case 3:
			return 476.33f, 1779.99f, 182.5f;
		default:
			break;
	}
	return vVar0;
}

Vector3 func_1642(int iParam0)
{
	vector3 vVar0;
	vVar0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
			return 73.06f, -84.61f, 65.2f;
		case 1:
			return 166.58f, -87.97f, -36.53f;
		case 2:
			return 176.93f, -88.79f, -107.95f;
		case 3:
			return 134.69f, -88.45f, -68.81f;
		default:
			break;
	}
	return vVar0;
}

char* func_1643(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@story@trn3@IG@IG_1_PullLever";
		case 1:
			return "script@story@trn3@IG@IG_9_Detonate";
		case 2:
			return "script@story@trn3@ig@ig_9_detonate_arthur";
		case 3:
			return "script@story@trn3@Leadout@MCS1@Leadout";
		case 4:
			return "script@story@trn3@Leadout@EXT@Leadout";
		case 5:
			return "cutscene@trn3_ext";
		case 6:
			return "script@story@trn3@ig@ig_8_setdynamite_p1";
		case 7:
			return "script@story@trn3@ig@ig_8_setdynamite_p2";
		case 8:
			return "script@story@trn3@ig@ig_8_setdynamite_p3";
		case 9:
			return "script@story@trn3@ig@ig_8_setdynamite_p4";
		case 10:
			return "script@story@trn3@ig@ig_8_setdynamite_p1";
		case 11:
			return "script@story@trn3@ig@ig_8_setdynamite_p2";
		case 12:
			return "script@story@trn3@ig@ig_8_setdynamite_p3";
		case 13:
			return "script@story@trn3@ig@ig_8_setdynamite_p4";
		case 16:
			return "script@story@trn3@ig@ig_11_arthurtakeboxesfromhandcart";
		case 19:
			return "script@story@trn3@ig@ig_11_arthurtakeboxesfromhandcart";
		case 14:
			return "script@story@trn3@ig@ig_17_johnbeckonforcrate";
		case 15:
			return "script@story@trn3@ig@ig20_arthrdropsropetojohn";
		case 17:
			return "script@story@trn3@ig@ig_14_placesbox";
		case 18:
			return "script@story@trn3@ig@ig_21_takedynamite";
		case 20:
			return "script@story@trn3@ig@ig23_handcartjump";
		case 22:
			return "script@story@trn3@ig@ig_17_johnbeckonforcrate";
		default:
			break;
	}
	return "INVALID TRN3 SYNCH SCENE!";
}

Vector3 func_1644(int iParam0, int iParam1)
{
	return func_2022(iParam0, iParam1);
}

bool func_1646(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = VEHICLE::_0x635423D55CA84FC8(iParam0);
	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_511[iVar0]))
		{
			iLocal_511[iVar0] = VEHICLE::GET_TRAIN_CARRIAGE(iLocal_120, iVar0);
			iVar2 = 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_511[iVar0]))
		{
			ENTITY::_0x6C31B06E91518269(iLocal_511[iVar0], 1);
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_511[iVar0], false))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_511[iVar0], true, false);
			}
			if (!ENTITY::_0xC2E71D7E0A7B4C89(iLocal_511[iVar0]))
			{
				iVar2 = 0;
			}
			VEHICLE::_SET_VEHICLE_LOD_LEVEL(iLocal_511[iVar0], 0);
			VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_511[iVar0], true);
		}
		iVar0++;
	}
	return iVar2;
}

void func_1647(var uParam0)
{
	if (!Local_235[9 /*8*/].f_7)
	{
		Local_235[9 /*8*/].f_7 = func_2023(9, 3, 3);
	}
	if (iLocal_510 == 9)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_101[3 /*4*/].f_1))
		{
			Local_101[3 /*4*/].f_1 = OBJECT::CREATE_OBJECT(joaat("P_CS_FUSEDYNAMITE01X"), ENTITY::GET_ENTITY_COORDS(iLocal_127, true, false), true, true, false, false, true);
		}
		else if (!Local_235[9 /*8*/].f_4)
		{
			Local_235[9 /*8*/].f_4 = func_1203(9, 8, 3, 3, 0, 0);
		}
		else
		{
			if (func_1198(9, 8, 0.01f))
			{
				STREAMING::_REMOVE_IMAP(-200959126);
			}
			if (func_1198(9, 8, 1065017672 /* Float: 0.98f */))
			{
				func_1180(10);
				Local_101[3 /*4*/] = 1;
				STREAMING::_REQUEST_IMAP(777001839);
				__LIB_1__::func_951(&(Local_101[3 /*4*/].f_1));
			}
		}
	}
	if (iLocal_510 == 11)
	{
		if (!bLocal_632)
		{
			if (!bLocal_633)
			{
				__LIB_5__::func_20(1, 0);
				bLocal_633 = true;
			}
			if (func_1171(uParam0, &iLocal_127, 15, 0, 200f, 300f))
			{
				bLocal_632 = true;
			}
		}
	}
	else if (bLocal_632)
	{
		func_1171(uParam0, &iLocal_127, 16, 1, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */);
	}
}

void func_1648(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	if (!__LIB_0__::func_27(iLocal_135, 8))
	{
		vVar0 = { func_1159(0, 9) };
		fVar3 = __LIB_0__::func_94(iLocal_127, vVar0, 1);
		fVar4 = __LIB_0__::func_94(Global_35, vVar0, 1);
		if ((((Global_36.f_2 < (vVar0.z - 1f) && iLocal_510 == 6) && __LIB_0__::func_163(iLocal_127, 242628503)) && IntToFloat(TASK::GET_SEQUENCE_PROGRESS(iLocal_127)) > 3f) && fVar3 < fVar4)
		{
			__LIB_1__::func_683(&iLocal_135, 8);
		}
	}
}

int func_1649()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_2025(iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_1650(var uParam0)
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	int iVar3;
	vector3 vVar4;
	bVar1 = false;
	func_2026(uParam0);
	switch (iLocal_618)
	{
		case 0:
			iLocal_624 = 0;
			if (func_1649() < 4)
			{
				if (iLocal_420[37] >= 2)
				{
					Local_235[18 /*8*/].f_3 = 0;
					Local_235[18 /*8*/].f_4 = 0;
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_235[18 /*8*/]))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(Local_235[18 /*8*/]);
					}
					StringCopy(&Local_163, "trn3_dynamite_cam", 64);
					StringCopy(&(Local_163.f_8), "DYNAMITE_ORBIT_REQUEST", 64);
					if (!CAM::_0xDD0B7C5AE58F721D(&Local_163))
					{
						CAM::_0x6A4D224FC7643941(&Local_163);
					}
					iLocal_618 = 1;
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (!Local_64[iVar0 /*9*/].f_1)
						{
							Local_64[iVar0 /*9*/].f_8 = __LIB_1__::func_282("TRN3_C_TBUND", joaat("INPUT_PICKUP_CARRIABLE"), ENTITY::GET_ENTITY_COORDS(Local_64[iVar0 /*9*/], true, false), 2f, 3, 1, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
							__LIB_4__::func_12(Local_64[iVar0 /*9*/].f_8, joaat("TRN3_G_DYNAM"), 0, 1);
						}
						iVar0++;
					}
				}
			}
			else
			{
				iLocal_618 = 13;
			}
			break;
		case 1:
			if (!MAP::DOES_BLIP_EXIST(iLocal_123))
			{
				iLocal_123 = __LIB_4__::func_983(408396114, func_1644(0, 0), 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_123, "TRN3_B_DYN");
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!Local_64[iVar0 /*9*/].f_1)
				{
					if (__LIB_0__::func_139(Local_64[iVar0 /*9*/].f_8))
					{
						HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Local_64[iVar0 /*9*/], 1.6f, 1, 1, joaat("TRN3_G_DYNAM"), "TRN3_G_DYNAM", 0);
					}
				}
				iVar0++;
			}
			if (bLocal_630)
			{
				func_1172(6, 30000);
				__LIB_5__::func_372(uParam0, 12);
				if (iLocal_628 < 3)
				{
					if (__LIB_0__::func_264(&uLocal_621) > 20f)
					{
						func_1171(uParam0, &iLocal_127, 49, 0, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */);
						__LIB_1__::func_148(&uLocal_621);
						iLocal_420[49] = 0;
						iLocal_628++;
					}
				}
			}
			if (bLocal_619)
			{
				if (__LIB_0__::func_264(&uLocal_621) > 10f)
				{
					if (__LIB_0__::func_48(Global_35, iLocal_127, 2f, 1))
					{
						func_1171(uParam0, &iLocal_127, 51, 0, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */);
					}
				}
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (__LIB_0__::func_486(Local_64[iVar0 /*9*/].f_8, 1) >= 0.25f)
				{
					TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_64[iVar0 /*9*/], -1, 0, 51, 0);
					bVar1 = true;
					if (__LIB_0__::func_567(Local_64[iVar0 /*9*/].f_8, 1))
					{
						iLocal_119 = iVar0;
						if (!bLocal_619)
						{
							__LIB_5__::func_372(uParam0, 4);
							bLocal_619 = true;
						}
						__LIB_0__::func_325(&iLocal_123);
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
						iLocal_618 = 3;
						return false;
					}
				}
				iVar0++;
			}
			if (!bVar1)
			{
				__LIB_3__::func_10(Global_35);
				TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
			}
			break;
		case 3:
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (__LIB_0__::func_139(Local_64[iVar0 /*9*/].f_8))
				{
					__LIB_1__::func_281(&(Local_64[iVar0 /*9*/].f_8), 1, 1);
				}
				iVar0++;
			}
			if (func_2007())
			{
				iLocal_618 = 4;
			}
			break;
		case 4:
			if (!Local_235[18 /*8*/].f_3)
			{
				if (func_1202(18, 0, func_1243(18, 31)))
				{
					func_1241(18, -1, iLocal_119, 1);
					Local_235[18 /*8*/].f_3 = 1;
				}
			}
			else
			{
				iLocal_624 = 0;
				iLocal_618 = 5;
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_235[18 /*8*/], "ARTHUR", func_1243(18, 31), 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
			}
			break;
		case 5:
			if (!__LIB_0__::func_163(Global_35, 1369124074))
			{
				if (iLocal_624 > 10)
				{
					TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_235[18 /*8*/], "ARTHUR", func_1243(18, 31), 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
					iLocal_624 = 0;
				}
			}
			iLocal_624++;
			if (ANIMSCENE::_0x337F1CC8EE895601(Local_235[18 /*8*/], "ARTHUR"))
			{
				iLocal_618 = 6;
			}
			break;
		case 6:
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (__LIB_0__::func_139(Local_64[iVar0 /*9*/].f_8))
				{
					__LIB_1__::func_281(&(Local_64[iVar0 /*9*/].f_8), 1, 1);
				}
				iVar0++;
			}
			if (func_1203(18, 31, -1, iLocal_119, 1, 0))
			{
				WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
				Local_235[18 /*8*/].f_4 = 1;
			}
			if (Local_235[18 /*8*/].f_4 == 1)
			{
				if (func_1198(18, 31, 0.95f) || ANIMSCENE::_0xB89FCFF19DAFFF28(Local_235[18 /*8*/], "ARTHUR"))
				{
					__LIB_5__::func_372(uParam0, 5);
					TASK::TASK_CARRIABLE(Local_64[iLocal_119 /*9*/], joaat("LARGE_DYNAMITE_BUNDLE"), Global_35, 1, 0);
					iLocal_618 = 2;
				}
			}
			break;
		case 2:
			func_2028();
			__LIB_5__::func_372(uParam0, 11);
			func_1172(7, 10000);
			iLocal_618 = 7;
			__LIB_1__::func_148(&uLocal_621);
			break;
		case 7:
			func_1171(uParam0, &iLocal_127, 52, 1, 5f, 10f);
			if (func_2029(0))
			{
				iLocal_618 = 8;
			}
			if (func_2029(1))
			{
				iLocal_618 = 8;
			}
			if (func_2029(2))
			{
				iLocal_618 = 8;
			}
			if (__LIB_0__::func_264(&uLocal_621) > 20f)
			{
				func_1171(uParam0, &iLocal_127, 50, 1, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */);
			}
			func_1172(7, 25000);
			break;
		case 8:
			iVar3 = func_2030(iLocal_118);
			if (func_2023(iVar3, iLocal_118, iLocal_119) && func_2007())
			{
				iLocal_618 = 9;
			}
			break;
		case 9:
			func_1177(1, 0, 1);
			if (func_2030(iLocal_118) == 6)
			{
				sVar2 = "ARTHUR";
			}
			else
			{
				sVar2 = "player_zero";
			}
			if (!__LIB_0__::func_163(Global_35, 1369124074))
			{
				if (iLocal_624 > 10)
				{
					TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_235[func_2030(iLocal_118) /*8*/], sVar2, Local_235[func_2030(iLocal_118) /*8*/].f_2, 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
					iLocal_624 = 0;
				}
			}
			iLocal_624++;
			if (ANIMSCENE::_0x337F1CC8EE895601(Local_235[func_2030(iLocal_118) /*8*/], sVar2))
			{
				iLocal_618 = 11;
			}
			break;
		case 10:
			func_1177(1, 0, 1);
			if (ANIMSCENE::_0x337F1CC8EE895601(Local_235[func_2030(iLocal_118) /*8*/], sVar2))
			{
				iLocal_618 = 11;
			}
			break;
		case 11:
			func_1177(1, 0, 1);
			ENTITY::_0x18FF3110CF47115D(Local_64[iLocal_119 /*9*/], 4, 1);
			PED::_0xED00D72F81CF7278(Local_64[iLocal_119 /*9*/], 0, 1);
			TASK::_0x9EBD34958AB6F824(Local_64[iLocal_119 /*9*/]);
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
			if (!ENTITY::DOES_ENTITY_EXIST(Local_101[iLocal_118 /*4*/].f_1))
			{
				vVar4 = { Global_36 };
				vVar4.f_2 = (vVar4.z - 15f);
				Local_101[iLocal_118 /*4*/].f_1 = OBJECT::CREATE_OBJECT(joaat("P_CS_FUSEDYNAMITE01X"), vVar4, true, true, false, false, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_101[iLocal_118 /*4*/].f_1))
			{
				if (func_2031(iLocal_118, iLocal_119))
				{
					iLocal_618 = 12;
				}
			}
			break;
		case 12:
			if (CAM::_0x927B810E43E99932(&Local_163))
			{
				CAM::_0x8370D34BD2E60B73();
				CAM::_0xAC77757C05DE9E5A(&Local_163);
			}
			else
			{
				CAM::_0xB8B207C34285E978(&Local_163);
				Local_163.f_16 = Global_35;
				CAM::_0xAC77757C05DE9E5A(&Local_163);
			}
			if (func_1649() == 3)
			{
				func_1179(1);
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_235[func_2030(iLocal_118) /*8*/]) > 0.01f)
			{
				if (iLocal_118 == 0)
				{
					STREAMING::_REMOVE_IMAP(-437187151);
					ENTITY::SET_ENTITY_VISIBLE(Local_101[0 /*4*/].f_1, true);
				}
				else if (iLocal_118 == 1)
				{
					STREAMING::_REMOVE_IMAP(1424964403);
					ENTITY::SET_ENTITY_VISIBLE(Local_101[1 /*4*/].f_1, true);
				}
				else if (iLocal_118 == 2)
				{
					STREAMING::_REMOVE_IMAP(-163787010);
					ENTITY::SET_ENTITY_VISIBLE(Local_101[2 /*4*/].f_1, true);
				}
				else if (iLocal_118 == 3)
				{
					STREAMING::_REMOVE_IMAP(-200959126);
					ENTITY::SET_ENTITY_VISIBLE(Local_101[3 /*4*/].f_1, true);
				}
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_235[func_2030(iLocal_118) /*8*/]) > 0.85f)
			{
				if (iLocal_118 == 0)
				{
					STREAMING::_REQUEST_IMAP(920612809);
				}
				else if (iLocal_118 == 1)
				{
					STREAMING::_REQUEST_IMAP(820079465);
				}
				else if (iLocal_118 == 2)
				{
					STREAMING::_REQUEST_IMAP(423891836);
				}
				else if (iLocal_118 == 3)
				{
					STREAMING::_REQUEST_IMAP(777001839);
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_235[func_2030(iLocal_118) /*8*/], false) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_235[func_2030(iLocal_118) /*8*/]) > 0.99f)
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, Local_235[func_2030(iLocal_118) /*8*/].f_7, 0, false);
				ENTITY::FREEZE_ENTITY_POSITION(Local_64[iLocal_118 /*9*/], true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				if (CAM::_0x927B810E43E99932(&Local_163))
				{
					CAM::_0x0A5A4F1979ABB40E(&Local_163);
				}
				__LIB_1__::func_951(&(Local_101[iLocal_118 /*4*/].f_1));
				__LIB_1__::func_148(&uLocal_621);
				iLocal_118 = -1;
				iLocal_618 = 0;
			}
			break;
		case 13:
			return true;
	}
	return false;
}

Vector3 func_1652()
{
	int iVar0;
	var uVar1;
	struct<2> Var4;
	if (__LIB_4__::func_257(iLocal_120))
	{
		return 0f, 0f, 0f;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_120);
	MISC::GET_MODEL_DIMENSIONS(iVar0, &uVar1, &Var4);
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_120, 0f, Var4.f_1, 0f);
}

Vector3 func_1653()
{
	int iVar0;
	struct<2> Var1;
	var uVar4;
	if (__LIB_4__::func_257(iLocal_121))
	{
		return 0f, 0f, 0f;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_121);
	MISC::GET_MODEL_DIMENSIONS(iVar0, &Var1, &uVar4);
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_121, 0f, Var1.f_1, 0f);
}

Vector3 func_1654()
{
	int iVar0;
	var uVar1;
	struct<2> Var4;
	if (__LIB_4__::func_257(iLocal_121))
	{
		return 0f, 0f, 0f;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_121);
	MISC::GET_MODEL_DIMENSIONS(iVar0, &uVar1, &Var4);
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_121, 0f, Var4.f_1, 0f);
}

void func_1655()
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_4__::func_257(iLocal_121))
	{
		return;
	}
	if ((MISC::GET_FRAME_COUNT() % 2) == 0)
	{
		return;
	}
	fVar0 = ENTITY::GET_ENTITY_SPEED(iLocal_121);
	iVar1 = 0;
	while (iVar1 < 30)
	{
		iVar2 = ((30 - iVar1) - 1);
		iVar3 = (iVar2 - 1);
		if (iVar2 == 0)
		{
			fLocal_203[iVar2] = fVar0;
		}
		else
		{
			fLocal_203[iVar2] = fLocal_203[iVar3];
		}
		iVar1++;
	}
}

float func_1656()
{
	float fVar0;
	int iVar1;
	float fVar2;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		fVar0 = (fVar0 + fLocal_203[iVar1]);
		iVar1++;
	}
	fVar2 = (fVar0 / 30f);
	return fVar2;
}

void func_1657(int iParam0)
{
	if (iLocal_196 != iParam0)
	{
		iLocal_196 = iParam0;
	}
}

void func_1659(float fParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	char* sVar3;
	float fVar4;
	fVar0 = 0f;
	fVar1 = 1f;
	fVar0 = (1f - ((fParam0 - 5f) / fVar1));
	iVar2 = BUILTIN::ROUND((fVar0 * 100f));
	if (iVar2 < 0)
	{
		iVar2 = 0;
	}
	if (iVar2 > 100)
	{
		iVar2 = 100;
	}
	PAD::SET_PAD_SHAKE(0, 10, iVar2);
	if (bParam1)
	{
		sVar3 = "TRN3_TRAIN_SHAKE";
		fVar4 = (1f - __LIB_0__::func_251((fParam0 / 9f), 0f, 1f));
		fVar4 = (fVar4 * fVar4);
		if (!bLocal_234)
		{
			if (fVar4 > 0f)
			{
				CAM::SHAKE_GAMEPLAY_CAM(sVar3, 0.3f);
				CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(fVar4);
				bLocal_234 = true;
			}
		}
		else
		{
			CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(fVar4);
		}
	}
	else if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

void func_1660()
{
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_235[3 /*8*/], false))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_235[3 /*8*/], "InternalLoop", true, false);
	}
}

void func_1670(int iParam0)
{
	if (iParam0 == 1)
	{
		if (__LIB_0__::func_272(iLocal_127, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_235[iParam0 /*8*/], "JohnMarston", iLocal_127, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_235[iParam0 /*8*/], "ARTHUR", Global_35, 0);
		}
	}
	if (iParam0 == 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_10[0]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_235[iParam0 /*8*/], "p_cs_detonator01x", Local_14.f_10[0], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_235[iParam0 /*8*/], "ARTHUR", Global_35, 0);
		}
	}
}

void func_1671()
{
	if (__LIB_0__::func_272(iLocal_127, 0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_127, true);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_235[3 /*8*/], "JohnMarston", iLocal_127, 0);
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_235[3 /*8*/], 609.05f, 1668f, 185.896f, 0f, 0f, 8f, 2);
}

void func_1672()
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_235[4 /*8*/], "ARTHUR", Global_35, 0);
	}
}

void func_1673(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, true);
		if (iParam0 == 6)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_235[iParam0 /*8*/], "ARTHUR", Global_35, 0);
		}
		else if (bParam3)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_235[iParam0 /*8*/], "player_zero", Global_35, 0);
		}
		else
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_235[iParam0 /*8*/], "player_zero", iLocal_127, 0);
		}
	}
	if (iParam2 > -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_64[iParam2 /*9*/]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_235[iParam0 /*8*/], "p_dynamite01x", Local_64[iParam2 /*9*/], 0);
		}
	}
	if (bLocal_194)
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_101[iParam1 /*4*/].f_1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_235[iParam0 /*8*/], "p_cs_fusedynamite01x", Local_101[iParam1 /*4*/].f_1, 0);
	}
}

void func_1674()
{
	if (__LIB_0__::func_272(iLocal_127, 0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_127, true);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_235[14 /*8*/], "ARTHUR", Global_35, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_235[14 /*8*/], "IG_JohnMarston", iLocal_127, 0);
	}
}

char* func_1675(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return "pbl_p1_stand_set_dynamite";
		case 7:
			return "pbl_p2_stand_set_dynamite";
		case 8:
			return "pbl_p3_stand_set_dynamite";
		case 9:
			return "pbl_p4_stand_set_dynamite";
		default:
			break;
	}
	return "INVALID DYNAMITE ID";
}

char* func_1676(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return "pbl_p1_crouch_set_dynamite";
		case 7:
			return "pbl_p2_crouch_set_dynamite";
		case 8:
			return "pbl_p3_crouch_set_dynamite";
		case 9:
			return "pbl_p4_crouch_set_dynamite";
		default:
			break;
	}
	return "INVALID DYNAMITE ID";
}

void func_1679(int* iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (bParam1)
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
	}
	else
	{
		func_2044(iParam0);
		VEHICLE::DELETE_VEHICLE(iParam0);
	}
}

int func_1684(int iParam0, int iParam1)
{
	var uVar0;
	return func_2046(&uVar0, iParam0, iParam1);
}

void func_1705(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (!__LIB_3__::func_358(__LIB_4__::func_998(uParam0)))
	{
		__LIB_5__::func_25(uParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		if (__LIB_0__::func_31(iParam2))
		{
			sParam3 = __LIB_1__::func_464(iParam2, 0);
		}
		else
		{
			sParam3 = __LIB_4__::func_608(iParam2);
		}
	}
	if (!__LIB_5__::func_570(uParam0, iParam1))
	{
		func_2069(uParam0, iParam1, 343610, 0, sParam3, 67108863, 1023, 3, iParam2);
	}
	if (!__LIB_4__::func_610(uParam0->f_5421, iParam1))
	{
		__LIB_4__::func_999(uParam0->f_5421, iParam1);
	}
	DECORATOR::DECOR_SET_INT(iParam1, __LIB_4__::func_611(), iParam2);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, joaat("REL_GANG_DUTCHS"));
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam1, false);
	PED::_0x15F4732C357B1D6D(iParam1, PLAYER::GET_PLAYER_INDEX(), 10);
	PED::_0x15F4732C357B1D6D(iParam1, PLAYER::GET_PLAYER_INDEX(), 11);
}

void func_1829(var uParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_4__::func_939(uParam0) == 25 || __LIB_4__::func_939(uParam0) == 26)
	{
		return;
	}
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 4096))
	{
		if (__LIB_4__::func_948(uParam0, 4) && !__LIB_4__::func_937(uParam0, 8))
		{
			if (!Global_1935630.f_12)
			{
				if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1))
				{
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
					{
						if (iVar0 == 0 || iVar0 == joaat("WEAPON_UNARMED"))
						{
							iVar1 = func_2172(128);
							if (__LIB_0__::func_154(iVar1))
							{
								if (!WEAPON::_0x2387D6E9C6B478AA(Global_35))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar1, true, 0, false, false);
								}
							}
						}
					}
				}
			}
		}
		else
		{
			func_2173(uParam0);
		}
	}
	if (!Global_1935630.f_12)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, __LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 33));
	}
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 8192))
	{
		if (__LIB_4__::func_937(uParam0, 1024) || __LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 4))
		{
			if (!Global_1935630.f_12)
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, false);
			}
		}
	}
}

bool func_1959(int iParam0, int iParam1)
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
				if (func_1959(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_1959(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_1959(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_1959(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

void func_2005(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		_NAMESPACE29::_0x0EABF182FBB63D72(iParam0, 6, 1);
	}
}

bool func_2007()
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_399(Global_35, 1, 0, 0);
	iVar1 = __LIB_0__::func_399(Global_35, 1, 1, 0);
	if (iVar0 == joaat("WEAPON_UNARMED") && iVar1 == joaat("WEAPON_UNARMED"))
	{
		return true;
	}
	return false;
}

char* func_2010(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "GameStart";
		case 1:
			return "LeftAndRight";
		case 3:
			return "RightAndLeft";
		case 4:
			return "Left";
		case 2:
			return "Right";
		case 6:
			return "ToLeft";
		case 5:
			return "ToRight";
		case 7:
			return "Slip";
		default:
			break;
	}
	return "WHYYYYY?";
}

bool func_2011(char* sParam0)
{
	int iVar0;
	iVar0 = 0;
	if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), sParam0) && MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(iLocal_126), sParam0))
	{
		if (bLocal_495)
		{
			if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(iLocal_125), sParam0))
			{
				iVar0 = 1;
			}
		}
		else if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(iLocal_124), sParam0))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_2012(char* sParam0)
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "GameStart"))
	{
		return 0;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "Left"))
	{
		return 4;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "Right"))
	{
		return 2;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "ToLeft"))
	{
		return 6;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "ToRight"))
	{
		return 5;
	}
	return 8;
}

bool func_2013()
{
	int iVar0;
	iVar0 = 0;
	if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Global_35) && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(iLocal_126))
	{
		if (bLocal_495)
		{
			if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(iLocal_125))
			{
				iVar0 = 1;
			}
		}
		else if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(iLocal_124))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_2014(int iParam0)
{
	if (iLocal_588 != iParam0 && bLocal_590)
	{
		bLocal_589 = false;
		bLocal_590 = false;
		iLocal_588 = iParam0;
	}
	else
	{
		return;
	}
}

char* func_2015(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TRN3_H_START";
		case 1:
			return "TRN3_H_GRAB";
		case 2:
			return "TRN3_H_LOWER";
		case 3:
			return "TRN3_H_WIND";
		case 4:
			return "TRN3_H_LEFT";
		case 5:
			return "TRN3_H_RIGHT";
		case 6:
			return "TRN3_H_HEAVY";
		case 7:
			return "TRN3_HELP";
		case 8:
			return "TRN3_HELP2";
		case 9:
			return "TRN3_T_START";
		case 10:
			return "TRN3_T_RELEASE";
		case 11:
			return "TRN3_T_HOLD_LT";
		case 12:
			return "TRN3_T_HOLD_RT";
		default:
			break;
	}
	return "";
}

void func_2017(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_139(*iParam0))
	{
		__LIB_1__::func_221(*iParam0, bParam1, 0);
	}
}

void func_2018(bool bParam0)
{
	int iVar0;
	iVar0 = BUILTIN::ROUND((IntToFloat(__LIB_1__::func_871(&uLocal_579)) / 10f));
	if (iVar0 > 100 || bParam0)
	{
		iVar0 = 100;
	}
	PAD::SET_PAD_SHAKE(0, 1, iVar0);
}

struct<4> func_2021(int iParam0, bool bParam1)
{
	struct<4> Var0;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				Var0 = { func_210(1, 11) };
				break;
			case 1:
				Var0 = { func_210(1, 12) };
				break;
			case 2:
				Var0 = { func_210(1, 13) };
				break;
			case 3:
				Var0 = { func_210(1, 14) };
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				Var0 = { 523.13f, 1749.83f, 181.47f };
				break;
			case 1:
				Var0 = { 523f, 1748.73f, 181.47f };
				break;
			case 2:
				Var0 = { 522.92f, 1749.53f, 181.47f };
				break;
			case 3:
				Var0 = { 523.2f, 1748.47f, 181.47f };
				break;
		}
	}
	return Var0;
}

Vector3 func_2022(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 523.1491f, 1748.671f, 181.5133f;
				case 1:
					return 523.0504f, 1749.613f, 181.4919f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 549.8099f, 1711.209f, 184.7516f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_2023(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	int iVar3;
	vVar0 = { Global_36 };
	vVar0.f_2 = (vVar0.z - 30f);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_101[iParam1 /*4*/].f_1))
	{
		Local_101[iParam1 /*4*/].f_1 = OBJECT::CREATE_OBJECT(joaat("P_CS_FUSEDYNAMITE01X"), vVar0, true, true, false, false, true);
		return false;
	}
	Local_235[iParam0 /*8*/].f_1 = func_1643(iParam0);
	if (!Local_235[iParam0 /*8*/].f_6)
	{
		Local_235[iParam0 /*8*/].f_7 = PED::GET_PED_STEALTH_MOVEMENT(Global_35);
		Local_235[iParam0 /*8*/].f_6 = 1;
	}
	if (Local_235[iParam0 /*8*/].f_7)
	{
		iVar3 = 9;
	}
	else
	{
		iVar3 = 8;
	}
	Local_235[iParam0 /*8*/].f_2 = func_1243(iParam0, iVar3);
	if (func_1202(iParam0, 0, 0))
	{
		func_1241(iParam0, iParam1, iParam2, 1);
		Local_235[iParam0 /*8*/].f_3 = 1;
		return true;
	}
	return false;
}

bool func_2025(int iParam0)
{
	if (Local_101[iParam0 /*4*/])
	{
		return true;
	}
	return false;
}

void func_2026(var uParam0)
{
	if (PED::IS_PED_IN_VEHICLE(iLocal_127, iLocal_121, false))
	{
		if (Global_36.f_2 > 185.5f)
		{
			if (!__LIB_0__::func_75(&uLocal_625))
			{
				__LIB_1__::func_148(&uLocal_625);
			}
			else if (__LIB_0__::func_264(&uLocal_625) > 10f)
			{
				if (func_1171(uParam0, &iLocal_127, 56, 1, 10f, 1112014848 /* Float: 50f */))
				{
					__LIB_1__::func_148(&uLocal_625);
				}
				if (func_1171(uParam0, &iLocal_127, 57, 1, 10f, 1112014848 /* Float: 50f */))
				{
					__LIB_1__::func_148(&uLocal_625);
				}
			}
		}
		else
		{
			func_1171(uParam0, &iLocal_127, 55, 1, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */);
			__LIB_0__::func_37(&uLocal_625);
		}
	}
}

void func_2028()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!func_2025(iVar0))
		{
			if (!__LIB_0__::func_139(Local_101[iVar0 /*4*/].f_2))
			{
				Local_101[iVar0 /*4*/].f_2 = __LIB_1__::func_282("TRN3_PLANT", joaat("INPUT_PICKUP_CARRIABLE"), func_1639(iVar0, 1), 1.8f, 3, 1, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
				__LIB_4__::func_12(Local_101[iVar0 /*4*/].f_2, (joaat("TRN3_G_DYNAM") + iVar0), 0, 1);
			}
			if (!MAP::DOES_BLIP_EXIST(Local_101[iVar0 /*4*/].f_3))
			{
				Local_101[iVar0 /*4*/].f_3 = __LIB_4__::func_983(203020899, func_1639(iVar0, 1), 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_101[iVar0 /*4*/].f_3, "TRN3_B_PILL");
			}
		}
		iVar0++;
	}
}

bool func_2029(int iParam0)
{
	if (__LIB_0__::func_139(Local_101[iParam0 /*4*/].f_2))
	{
		if (__LIB_0__::func_266(Global_35, func_1639(iParam0, 1), 1.8f, 1, 1))
		{
			HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Local_101[iParam0 /*4*/].f_1, 1.8f, 1, 1, (joaat("TRN3_G_DYNAM") + iParam0), "TRN3_G_DYNAM", 0);
		}
		if (__LIB_0__::func_486(Local_101[iParam0 /*4*/].f_2, 1) > 0f)
		{
		}
		if (__LIB_0__::func_567(Local_101[iParam0 /*4*/].f_2, 1))
		{
			func_2268();
			HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Local_101[iParam0 /*4*/].f_1, 1.8f, 1, 1, (joaat("TRN3_G_DYNAM") + iParam0), "TRN3_G_DYNAM", 0);
			iLocal_118 = iParam0;
			Local_64[iLocal_119 /*9*/].f_1 = 1;
			Local_101[iLocal_118 /*4*/] = 1;
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
			return true;
		}
	}
	return false;
}

int func_2030(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 7;
		case 2:
			return 8;
		case 3:
			return 9;
		default:
			break;
	}
	return 6;
}

bool func_2031(int iParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	vVar0 = { Global_36 };
	vVar0.f_2 = (vVar0.z - 30f);
	iVar3 = func_2030(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_101[iParam0 /*4*/].f_1))
	{
		Local_101[iParam0 /*4*/].f_1 = OBJECT::CREATE_OBJECT(joaat("P_CS_FUSEDYNAMITE01X"), vVar0, true, true, false, false, true);
		return false;
	}
	Local_235[iVar3 /*8*/].f_1 = func_1643(iVar3);
	if (!Local_235[iVar3 /*8*/].f_6)
	{
		Local_235[iVar3 /*8*/].f_7 = PED::GET_PED_STEALTH_MOVEMENT(Global_35);
		Local_235[iVar3 /*8*/].f_6 = 1;
	}
	if (Local_235[iVar3 /*8*/].f_7)
	{
		iVar4 = 9;
	}
	else
	{
		iVar4 = 8;
	}
	if (func_1203(iVar3, iVar4, iParam0, iParam1, 1, 0))
	{
		return true;
	}
	return false;
}

void func_2044(int* iParam0)
{
	int iVar0;
	int iVar1[9];
	int iVar11;
	int iVar12;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar11 = (-1 + iVar0);
		iVar12 = iVar11;
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false, false))
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam0, iVar12))
			{
				iVar1[iVar0] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, iVar12);
				if (!ENTITY::IS_ENTITY_DEAD(iVar1[iVar0]))
				{
					PED::_0xF9ACF4A08098EA25(iVar1[iVar0], true);
					func_822(iVar1[iVar0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*iParam0, 3f, 3f, 0f), ENTITY::GET_ENTITY_HEADING(*iParam0), 2, 1073741824 /* Float: 2f */);
				}
			}
		}
		iVar0++;
	}
}

int func_2046(var uParam0, int iParam1, int iParam2)
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
		return func_2046(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_2069(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!__LIB_5__::func_570(uParam0, iParam1))
	{
		if (!__LIB_5__::func_306(uParam0, iParam1, &iVar0))
		{
			if (!__LIB_5__::func_307(uParam0, &iVar0))
			{
				return;
			}
		}
	}
	else
	{
		return;
	}
	__LIB_5__::func_72(&(uParam0->f_5423[iVar0 /*65*/]), 1);
	uParam0->f_5423[iVar0 /*65*/] = iParam1;
	if (ENTITY::IS_ENTITY_A_PED(iParam1) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
	{
		__LIB_5__::func_72(&(uParam0->f_5423[iVar0 /*65*/]), 128);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		if (__LIB_0__::func_125(iParam3))
		{
			uParam0->f_5423[iVar0 /*65*/].f_1 = iParam3;
			__LIB_5__::func_72(&(uParam0->f_5423[iVar0 /*65*/]), 4);
			__LIB_5__::func_72(&(uParam0->f_5423[iVar0 /*65*/]), 16);
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam3))
		{
			uParam0->f_5423[iVar0 /*65*/].f_1 = iParam3;
			__LIB_5__::func_72(&(uParam0->f_5423[iVar0 /*65*/]), 4);
			__LIB_5__::func_72(&(uParam0->f_5423[iVar0 /*65*/]), 8);
		}
	}
	uParam0->f_5423[iVar0 /*65*/].f_4 = sParam4;
	uParam0->f_5423[iVar0 /*65*/].f_7 = iParam5;
	uParam0->f_5423[iVar0 /*65*/].f_6 = iParam6;
	if (ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		if (iParam8 == -1)
		{
			if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1) == __LIB_0__::func_398(7))
			{
				uParam0->f_5423[iVar0 /*65*/].f_9 = 40;
			}
			else
			{
				uParam0->f_5423[iVar0 /*65*/].f_9 = __LIB_4__::func_633(iParam1);
			}
		}
		else
		{
			uParam0->f_5423[iVar0 /*65*/].f_9 = iParam8;
		}
		if (iParam8 > -1 && iParam8 < 27)
		{
			uParam0->f_5423[iVar0 /*65*/].f_10 = iParam8;
		}
		if (__LIB_0__::func_31(uParam0->f_5423[iVar0 /*65*/].f_10))
		{
		}
	}
	uParam0->f_13145++;
	if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
	{
		if (EVENT::_0x26054EB81AC0893B(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
		{
			EVENT::_0x2DD42FAD06E6F19E(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1), 1, 1);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			uParam0->f_5423[iVar0 /*65*/].f_23[iVar1 /*4*/].f_3 = 343610;
			iVar1++;
		}
		__LIB_5__::func_561(uParam0, iParam1, 2, 4);
		__LIB_5__::func_562(uParam0, iParam1, 2500, 8);
		__LIB_5__::func_562(uParam0, iParam1, 2500, 512);
		__LIB_5__::func_563(uParam0, iParam1, 5000, 512);
		if (uParam0->f_5423[iVar0 /*65*/].f_9 == 14)
		{
			__LIB_5__::func_564(uParam0, iParam1, -2147483648);
		}
	}
}

int func_2172(int iParam0)
{
	var uVar0;
	var uVar4;
	int iVar8;
	int iVar9;
	iVar8 = func_1282(&uVar0, iParam0, 0);
	iVar9 = func_2046(&uVar4, iParam0, 0);
	if (iVar8 == 0)
	{
		if (iVar9 == 0)
		{
			if (__LIB_0__::func_27(iParam0, 256))
			{
				return joaat("WEAPON_UNARMED");
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return iVar9;
		}
	}
	else if (iVar9 == 0)
	{
		return iVar8;
	}
	if (WEAPON::_0xA2091482ED42EF85(Global_35, &uVar0) > WEAPON::_0xA2091482ED42EF85(Global_35, &uVar4) && !__LIB_0__::func_27(iParam0, 64))
	{
		return iVar8;
	}
	return iVar9;
}

void func_2173(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!Global_1935630.f_12)
	{
		if (uParam0->f_7374 != 0 && uParam0->f_7374 != joaat("WEAPON_UNARMED"))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
			{
				if (iVar0 != uParam0->f_7374)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, uParam0->f_7374, true, 0, false, false);
				}
			}
			else if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, uParam0->f_7374, 0, false))
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, uParam0->f_7374) > 0)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, uParam0->f_7374, true, 0, false, false);
				}
			}
		}
		else if ((__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1) && !__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 4)) && __LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 0, false))
			{
				if (iVar1 == 0 || iVar1 == joaat("WEAPON_UNARMED"))
				{
					iVar2 = func_2172(128);
					if (__LIB_0__::func_154(iVar2))
					{
						if (!WEAPON::_0x2387D6E9C6B478AA(Global_35))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar2, false, 0, false, false);
						}
					}
				}
			}
			else
			{
				iVar3 = func_2172(128);
				if (__LIB_0__::func_154(iVar3))
				{
					if (!WEAPON::_0x2387D6E9C6B478AA(Global_35))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar3, false, 0, false, false);
					}
				}
			}
		}
	}
}

void func_2268()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_0__::func_139(Local_101[iVar0 /*4*/].f_2))
		{
			__LIB_1__::func_281(&(Local_101[iVar0 /*4*/].f_2), 1, 1);
		}
		__LIB_0__::func_325(&(Local_101[iVar0 /*4*/].f_3));
		iVar0++;
	}
}

