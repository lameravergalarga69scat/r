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
	struct<55> Local_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	struct<4> Local_87[3];
	struct<4> Local_100[5];
	struct<4> Local_121[12];
	struct<4> Local_170[15];
	struct<4> Local_231[6];
	struct<4> Local_256[3];
	struct<4> Local_269[5];
	int iLocal_290[4] = { 0, 0, 0, 0 };
	int iLocal_295[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_302[3] = { 0, 0, 0 };
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_319 = 5;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326[2] = { 0, 0 };
	var uLocal_329[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_338 = 0;
	var uLocal_339[4] = { 0, 0, 0, 0 };
	int iLocal_344 = 0;
	vector3 vLocal_345[15] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = -1;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 1097859072;
	var uLocal_409 = 1000;
	var uLocal_410 = 1067450368;
	var uLocal_411 = 5000;
	var uLocal_412 = 42;
	var uLocal_413 = 1103626240;
	var uLocal_414 = 1077936128;
	var uLocal_415 = 1106247680;
	var uLocal_416 = 1103101952;
	var uLocal_417 = 1097859072;
	var uLocal_418 = 1103626240;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	int iLocal_423 = 0;
	int iLocal_424 = 0;
	int iLocal_425 = 0;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int iLocal_429 = 0;
	int iLocal_430 = 0;
	int iLocal_431[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 21;
	var uLocal_446 = 6;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 21;
	var uLocal_458 = 6;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	int iLocal_462 = 0;
	var uLocal_463[5] = { 0, 0, 0, 0, 0 };
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	var uLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	var uLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	int iLocal_482 = 0;
	int iLocal_483 = 0;
	int iLocal_484 = 0;
	int iLocal_485 = 0;
	int iLocal_486 = 0;
	int iLocal_487 = 0;
	int iLocal_488 = 0;
	int iLocal_489 = 0;
	int iLocal_490 = 0;
	int iLocal_491 = 0;
	int iLocal_492 = 0;
	int iLocal_493 = 0;
	int iLocal_494 = 0;
	int iLocal_495 = 0;
	int iLocal_496 = 0;
	int iLocal_497 = 0;
	int iLocal_498 = 0;
	int iLocal_499 = 0;
	int iLocal_500 = 0;
	int iLocal_501 = 0;
	int iLocal_502 = 0;
	int iLocal_503 = 0;
	char* sLocal_504 = NULL;
	char* sLocal_505 = NULL;
	char* sLocal_506 = NULL;
	char* sLocal_507 = NULL;
	char* sLocal_508 = NULL;
	float fLocal_509 = 0f;
	var uLocal_510 = 3;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	bool bLocal_514 = false;
	int iLocal_515 = 0;
	int iLocal_516 = 0;
	struct<9> Local_517 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 27;
	var uLocal_535 = 8;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
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
	var uLocal_556 = -1;
	var uLocal_557 = 8;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = -1;
	var uLocal_579 = 8;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = -1;
	var uLocal_601 = 8;
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
	var uLocal_622 = -1;
	var uLocal_623 = 8;
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
	var uLocal_644 = -1;
	var uLocal_645 = 8;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
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
	var uLocal_666 = -1;
	var uLocal_667 = 8;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
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
	var uLocal_688 = -1;
	var uLocal_689 = 8;
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
	var uLocal_710 = -1;
	var uLocal_711 = 8;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
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
	var uLocal_732 = -1;
	var uLocal_733 = 8;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
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
	var uLocal_754 = -1;
	var uLocal_755 = 8;
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
	var uLocal_776 = -1;
	var uLocal_777 = 8;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
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
	var uLocal_798 = -1;
	var uLocal_799 = 8;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
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
	var uLocal_820 = -1;
	var uLocal_821 = 8;
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
	var uLocal_842 = -1;
	var uLocal_843 = 8;
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
	var uLocal_864 = -1;
	var uLocal_865 = 8;
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
	var uLocal_886 = -1;
	var uLocal_887 = 8;
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
	var uLocal_908 = -1;
	var uLocal_909 = 8;
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
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = -1;
	var uLocal_931 = 8;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
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
	var uLocal_952 = -1;
	var uLocal_953 = 8;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
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
	var uLocal_974 = -1;
	var uLocal_975 = 8;
	var uLocal_976 = 0;
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
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = -1;
	var uLocal_997 = 8;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
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
	var uLocal_1018 = -1;
	var uLocal_1019 = 8;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
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
	var uLocal_1040 = -1;
	var uLocal_1041 = 8;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
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
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = -1;
	var uLocal_1063 = 8;
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
	var uLocal_1084 = -1;
	var uLocal_1085 = 8;
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
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = -1;
	var uLocal_1107 = 8;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
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
	var uLocal_1128 = -1;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
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
	var uLocal_1167 = 2;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 60;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
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
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
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
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
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
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
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
	var uLocal_1268 = 0;
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
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
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
	var uLocal_1352 = 40;
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
	var uLocal_1492 = 0;
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
	var uLocal_1553 = 20;
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
	var uLocal_1614 = 14;
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
	var uLocal_1659 = 60;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 20;
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
	var uLocal_1693 = 0;
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
	var uLocal_1731 = 20;
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
	var uLocal_1754 = 0;
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
	var uLocal_1798 = 20;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
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
	var uLocal_1865 = 20;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
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
	var uLocal_1932 = 20;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
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
	var uLocal_1999 = 20;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
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
	var uLocal_2066 = 20;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
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
	var uLocal_2133 = 20;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
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
	var uLocal_2200 = 20;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
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
	var uLocal_2267 = 20;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
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
	var uLocal_2334 = 20;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
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
	var uLocal_2401 = 20;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
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
	var uLocal_2468 = 20;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
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
	var uLocal_2535 = 20;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
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
	var uLocal_2602 = 20;
	var uLocal_2603 = 0;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	var uLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 0;
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
	var uLocal_2669 = 20;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
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
	var uLocal_2736 = 20;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
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
	var uLocal_2803 = 20;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
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
	var uLocal_2870 = 20;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
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
	var uLocal_2937 = 20;
	var uLocal_2938 = 0;
	var uLocal_2939 = 0;
	var uLocal_2940 = 0;
	var uLocal_2941 = 0;
	var uLocal_2942 = 0;
	var uLocal_2943 = 0;
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
	var uLocal_3004 = 20;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
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
	var uLocal_3071 = 20;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
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
	var uLocal_3138 = 20;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
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
	var uLocal_3205 = 20;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 0;
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
	var uLocal_3272 = 20;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 0;
	var uLocal_3278 = 0;
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
	var uLocal_3339 = 20;
	var uLocal_3340 = 0;
	var uLocal_3341 = 0;
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
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
	var uLocal_3406 = 20;
	var uLocal_3407 = 0;
	var uLocal_3408 = 0;
	var uLocal_3409 = 0;
	var uLocal_3410 = 0;
	var uLocal_3411 = 0;
	var uLocal_3412 = 0;
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
	var uLocal_3473 = 20;
	var uLocal_3474 = 0;
	var uLocal_3475 = 0;
	var uLocal_3476 = 0;
	var uLocal_3477 = 0;
	var uLocal_3478 = 0;
	var uLocal_3479 = 0;
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
	var uLocal_3540 = 20;
	var uLocal_3541 = 0;
	var uLocal_3542 = 0;
	var uLocal_3543 = 0;
	var uLocal_3544 = 0;
	var uLocal_3545 = 0;
	var uLocal_3546 = 0;
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
	var uLocal_3607 = 20;
	var uLocal_3608 = 0;
	var uLocal_3609 = 0;
	var uLocal_3610 = 0;
	var uLocal_3611 = 0;
	var uLocal_3612 = 0;
	var uLocal_3613 = 0;
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
	var uLocal_3674 = 20;
	var uLocal_3675 = 0;
	var uLocal_3676 = 0;
	var uLocal_3677 = 0;
	var uLocal_3678 = 0;
	var uLocal_3679 = 0;
	var uLocal_3680 = 0;
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
	var uLocal_3741 = 20;
	var uLocal_3742 = 0;
	var uLocal_3743 = 0;
	var uLocal_3744 = 0;
	var uLocal_3745 = 0;
	var uLocal_3746 = 0;
	var uLocal_3747 = 0;
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
	var uLocal_3808 = 20;
	var uLocal_3809 = 0;
	var uLocal_3810 = 0;
	var uLocal_3811 = 0;
	var uLocal_3812 = 0;
	var uLocal_3813 = 0;
	var uLocal_3814 = 0;
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
	var uLocal_3875 = 20;
	var uLocal_3876 = 0;
	var uLocal_3877 = 0;
	var uLocal_3878 = 0;
	var uLocal_3879 = 0;
	var uLocal_3880 = 0;
	var uLocal_3881 = 0;
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
	var uLocal_3942 = 20;
	var uLocal_3943 = 0;
	var uLocal_3944 = 0;
	var uLocal_3945 = 0;
	var uLocal_3946 = 0;
	var uLocal_3947 = 0;
	var uLocal_3948 = 0;
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
	var uLocal_4009 = 20;
	var uLocal_4010 = 0;
	var uLocal_4011 = 0;
	var uLocal_4012 = 0;
	var uLocal_4013 = 0;
	var uLocal_4014 = 0;
	var uLocal_4015 = 0;
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
	var uLocal_4076 = 20;
	var uLocal_4077 = 0;
	var uLocal_4078 = 0;
	var uLocal_4079 = 0;
	var uLocal_4080 = 0;
	var uLocal_4081 = 0;
	var uLocal_4082 = 0;
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
	var uLocal_4143 = 20;
	var uLocal_4144 = 0;
	var uLocal_4145 = 0;
	var uLocal_4146 = 0;
	var uLocal_4147 = 0;
	var uLocal_4148 = 0;
	var uLocal_4149 = 0;
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
	var uLocal_4210 = 20;
	var uLocal_4211 = 0;
	var uLocal_4212 = 0;
	var uLocal_4213 = 0;
	var uLocal_4214 = 0;
	var uLocal_4215 = 0;
	var uLocal_4216 = 0;
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
	var uLocal_4277 = 20;
	var uLocal_4278 = 0;
	var uLocal_4279 = 0;
	var uLocal_4280 = 0;
	var uLocal_4281 = 0;
	var uLocal_4282 = 0;
	var uLocal_4283 = 0;
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
	var uLocal_4344 = 20;
	var uLocal_4345 = 0;
	var uLocal_4346 = 0;
	var uLocal_4347 = 0;
	var uLocal_4348 = 0;
	var uLocal_4349 = 0;
	var uLocal_4350 = 0;
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
	var uLocal_4411 = 20;
	var uLocal_4412 = 0;
	var uLocal_4413 = 0;
	var uLocal_4414 = 0;
	var uLocal_4415 = 0;
	var uLocal_4416 = 0;
	var uLocal_4417 = 0;
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
	var uLocal_4478 = 20;
	var uLocal_4479 = 0;
	var uLocal_4480 = 0;
	var uLocal_4481 = 0;
	var uLocal_4482 = 0;
	var uLocal_4483 = 0;
	var uLocal_4484 = 0;
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
	var uLocal_4545 = 20;
	var uLocal_4546 = 0;
	var uLocal_4547 = 0;
	var uLocal_4548 = 0;
	var uLocal_4549 = 0;
	var uLocal_4550 = 0;
	var uLocal_4551 = 0;
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
	var uLocal_4612 = 20;
	var uLocal_4613 = 0;
	var uLocal_4614 = 0;
	var uLocal_4615 = 0;
	var uLocal_4616 = 0;
	var uLocal_4617 = 0;
	var uLocal_4618 = 0;
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
	var uLocal_4679 = 20;
	var uLocal_4680 = 0;
	var uLocal_4681 = 0;
	var uLocal_4682 = 0;
	var uLocal_4683 = 0;
	var uLocal_4684 = 0;
	var uLocal_4685 = 0;
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
	var uLocal_4746 = 20;
	var uLocal_4747 = 0;
	var uLocal_4748 = 0;
	var uLocal_4749 = 0;
	var uLocal_4750 = 0;
	var uLocal_4751 = 0;
	var uLocal_4752 = 0;
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
	var uLocal_4813 = 20;
	var uLocal_4814 = 0;
	var uLocal_4815 = 0;
	var uLocal_4816 = 0;
	var uLocal_4817 = 0;
	var uLocal_4818 = 0;
	var uLocal_4819 = 0;
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
	var uLocal_4880 = 20;
	var uLocal_4881 = 0;
	var uLocal_4882 = 0;
	var uLocal_4883 = 0;
	var uLocal_4884 = 0;
	var uLocal_4885 = 0;
	var uLocal_4886 = 0;
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
	var uLocal_4947 = 20;
	var uLocal_4948 = 0;
	var uLocal_4949 = 0;
	var uLocal_4950 = 0;
	var uLocal_4951 = 0;
	var uLocal_4952 = 0;
	var uLocal_4953 = 0;
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
	var uLocal_5014 = 20;
	var uLocal_5015 = 0;
	var uLocal_5016 = 0;
	var uLocal_5017 = 0;
	var uLocal_5018 = 0;
	var uLocal_5019 = 0;
	var uLocal_5020 = 0;
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
	var uLocal_5081 = 20;
	var uLocal_5082 = 0;
	var uLocal_5083 = 0;
	var uLocal_5084 = 0;
	var uLocal_5085 = 0;
	var uLocal_5086 = 0;
	var uLocal_5087 = 0;
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
	var uLocal_5148 = 20;
	var uLocal_5149 = 0;
	var uLocal_5150 = 0;
	var uLocal_5151 = 0;
	var uLocal_5152 = 0;
	var uLocal_5153 = 0;
	var uLocal_5154 = 0;
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
	var uLocal_5215 = 20;
	var uLocal_5216 = 0;
	var uLocal_5217 = 0;
	var uLocal_5218 = 0;
	var uLocal_5219 = 0;
	var uLocal_5220 = 0;
	var uLocal_5221 = 0;
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
	var uLocal_5282 = 20;
	var uLocal_5283 = 0;
	var uLocal_5284 = 0;
	var uLocal_5285 = 0;
	var uLocal_5286 = 0;
	var uLocal_5287 = 0;
	var uLocal_5288 = 0;
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
	var uLocal_5349 = 20;
	var uLocal_5350 = 0;
	var uLocal_5351 = 0;
	var uLocal_5352 = 0;
	var uLocal_5353 = 0;
	var uLocal_5354 = 0;
	var uLocal_5355 = 0;
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
	var uLocal_5416 = 20;
	var uLocal_5417 = 0;
	var uLocal_5418 = 0;
	var uLocal_5419 = 0;
	var uLocal_5420 = 0;
	var uLocal_5421 = 0;
	var uLocal_5422 = 0;
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
	var uLocal_5483 = 20;
	var uLocal_5484 = 0;
	var uLocal_5485 = 0;
	var uLocal_5486 = 0;
	var uLocal_5487 = 0;
	var uLocal_5488 = 0;
	var uLocal_5489 = 0;
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
	var uLocal_5550 = 20;
	var uLocal_5551 = 0;
	var uLocal_5552 = 0;
	var uLocal_5553 = 0;
	var uLocal_5554 = 0;
	var uLocal_5555 = 0;
	var uLocal_5556 = 0;
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
	var uLocal_5617 = 20;
	var uLocal_5618 = 0;
	var uLocal_5619 = 0;
	var uLocal_5620 = 0;
	var uLocal_5621 = 0;
	var uLocal_5622 = 0;
	var uLocal_5623 = 0;
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
	var uLocal_5680 = 10;
	var uLocal_5681 = 0;
	var uLocal_5682 = 0;
	var uLocal_5683 = 0;
	var uLocal_5684 = 0;
	var uLocal_5685 = 0;
	var uLocal_5686 = 0;
	var uLocal_5687 = 0;
	var uLocal_5688 = 0;
	var uLocal_5689 = 0;
	var uLocal_5690 = 0;
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
	var uLocal_5721 = 10;
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
	var uLocal_5757 = 0;
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
	var uLocal_5772 = 3;
	var uLocal_5773 = 0;
	var uLocal_5774 = 0;
	var uLocal_5775 = 0;
	var uLocal_5776 = 0;
	var uLocal_5777 = 0;
	var uLocal_5778 = 0;
	var uLocal_5779 = 0;
	var uLocal_5780 = 0;
	var uLocal_5781 = 0;
	var uLocal_5782 = 5;
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
	var uLocal_5798 = 5;
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
	var uLocal_5819 = 5;
	var uLocal_5820 = 0;
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
	var uLocal_5843 = 24;
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
	var uLocal_5861 = 0;
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
	var uLocal_5912 = 0;
	var uLocal_5913 = 0;
	var uLocal_5914 = 0;
	var uLocal_5915 = 0;
	var uLocal_5916 = 0;
	var uLocal_5917 = 0;
	var uLocal_5918 = 0;
	var uLocal_5919 = 0;
	var uLocal_5920 = 0;
	var uLocal_5921 = 0;
	var uLocal_5922 = 0;
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
	var uLocal_5938 = 0;
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
	var uLocal_5956 = 30;
	var uLocal_5957 = 0;
	var uLocal_5958 = 0;
	var uLocal_5959 = 0;
	var uLocal_5960 = 0;
	var uLocal_5961 = 0;
	var uLocal_5962 = 3;
	var uLocal_5963 = 0;
	var uLocal_5964 = 0;
	var uLocal_5965 = 0;
	var uLocal_5966 = 0;
	var uLocal_5967 = -1;
	var uLocal_5968 = 0;
	var uLocal_5969 = 5;
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
	var uLocal_5980 = 10;
	var uLocal_5981 = 3;
	var uLocal_5982 = 500;
	var uLocal_5983 = 10000;
	var uLocal_5984 = 0;
	var uLocal_5985 = 3;
	var uLocal_5986 = 500;
	var uLocal_5987 = 10000;
	var uLocal_5988 = 0;
	var uLocal_5989 = 3;
	var uLocal_5990 = 500;
	var uLocal_5991 = 10000;
	var uLocal_5992 = 0;
	var uLocal_5993 = 3;
	var uLocal_5994 = 500;
	var uLocal_5995 = 10000;
	var uLocal_5996 = 0;
	var uLocal_5997 = 3;
	var uLocal_5998 = 500;
	var uLocal_5999 = 10000;
	var uLocal_6000 = 0;
	var uLocal_6001 = 3;
	var uLocal_6002 = 500;
	var uLocal_6003 = 10000;
	var uLocal_6004 = 0;
	var uLocal_6005 = 3;
	var uLocal_6006 = 500;
	var uLocal_6007 = 10000;
	var uLocal_6008 = 0;
	var uLocal_6009 = 3;
	var uLocal_6010 = 500;
	var uLocal_6011 = 10000;
	var uLocal_6012 = 0;
	var uLocal_6013 = 3;
	var uLocal_6014 = 500;
	var uLocal_6015 = 10000;
	var uLocal_6016 = 0;
	var uLocal_6017 = 3;
	var uLocal_6018 = 500;
	var uLocal_6019 = 10000;
	var uLocal_6020 = 0;
	var uLocal_6021 = 0;
	var uLocal_6022 = 0;
	var uLocal_6023 = 0;
	var uLocal_6024 = 0;
	var uLocal_6025 = 0;
	var uLocal_6026 = 0;
	var uLocal_6027 = 3;
	var uLocal_6028 = 0;
	var uLocal_6029 = 0;
	var uLocal_6030 = 0;
	var uLocal_6031 = 0;
	var uLocal_6032 = -1;
	var uLocal_6033 = 0;
	var uLocal_6034 = 5;
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
	var uLocal_6045 = 10;
	var uLocal_6046 = 3;
	var uLocal_6047 = 500;
	var uLocal_6048 = 10000;
	var uLocal_6049 = 0;
	var uLocal_6050 = 3;
	var uLocal_6051 = 500;
	var uLocal_6052 = 10000;
	var uLocal_6053 = 0;
	var uLocal_6054 = 3;
	var uLocal_6055 = 500;
	var uLocal_6056 = 10000;
	var uLocal_6057 = 0;
	var uLocal_6058 = 3;
	var uLocal_6059 = 500;
	var uLocal_6060 = 10000;
	var uLocal_6061 = 0;
	var uLocal_6062 = 3;
	var uLocal_6063 = 500;
	var uLocal_6064 = 10000;
	var uLocal_6065 = 0;
	var uLocal_6066 = 3;
	var uLocal_6067 = 500;
	var uLocal_6068 = 10000;
	var uLocal_6069 = 0;
	var uLocal_6070 = 3;
	var uLocal_6071 = 500;
	var uLocal_6072 = 10000;
	var uLocal_6073 = 0;
	var uLocal_6074 = 3;
	var uLocal_6075 = 500;
	var uLocal_6076 = 10000;
	var uLocal_6077 = 0;
	var uLocal_6078 = 3;
	var uLocal_6079 = 500;
	var uLocal_6080 = 10000;
	var uLocal_6081 = 0;
	var uLocal_6082 = 3;
	var uLocal_6083 = 500;
	var uLocal_6084 = 10000;
	var uLocal_6085 = 0;
	var uLocal_6086 = 0;
	var uLocal_6087 = 0;
	var uLocal_6088 = 0;
	var uLocal_6089 = 0;
	var uLocal_6090 = 0;
	var uLocal_6091 = 0;
	var uLocal_6092 = 3;
	var uLocal_6093 = 0;
	var uLocal_6094 = 0;
	var uLocal_6095 = 0;
	var uLocal_6096 = 0;
	var uLocal_6097 = -1;
	var uLocal_6098 = 0;
	var uLocal_6099 = 5;
	var uLocal_6100 = 0;
	var uLocal_6101 = 0;
	var uLocal_6102 = 0;
	var uLocal_6103 = 0;
	var uLocal_6104 = 0;
	var uLocal_6105 = 0;
	var uLocal_6106 = 0;
	var uLocal_6107 = 0;
	var uLocal_6108 = 0;
	var uLocal_6109 = 0;
	var uLocal_6110 = 10;
	var uLocal_6111 = 3;
	var uLocal_6112 = 500;
	var uLocal_6113 = 10000;
	var uLocal_6114 = 0;
	var uLocal_6115 = 3;
	var uLocal_6116 = 500;
	var uLocal_6117 = 10000;
	var uLocal_6118 = 0;
	var uLocal_6119 = 3;
	var uLocal_6120 = 500;
	var uLocal_6121 = 10000;
	var uLocal_6122 = 0;
	var uLocal_6123 = 3;
	var uLocal_6124 = 500;
	var uLocal_6125 = 10000;
	var uLocal_6126 = 0;
	var uLocal_6127 = 3;
	var uLocal_6128 = 500;
	var uLocal_6129 = 10000;
	var uLocal_6130 = 0;
	var uLocal_6131 = 3;
	var uLocal_6132 = 500;
	var uLocal_6133 = 10000;
	var uLocal_6134 = 0;
	var uLocal_6135 = 3;
	var uLocal_6136 = 500;
	var uLocal_6137 = 10000;
	var uLocal_6138 = 0;
	var uLocal_6139 = 3;
	var uLocal_6140 = 500;
	var uLocal_6141 = 10000;
	var uLocal_6142 = 0;
	var uLocal_6143 = 3;
	var uLocal_6144 = 500;
	var uLocal_6145 = 10000;
	var uLocal_6146 = 0;
	var uLocal_6147 = 3;
	var uLocal_6148 = 500;
	var uLocal_6149 = 10000;
	var uLocal_6150 = 0;
	var uLocal_6151 = 0;
	var uLocal_6152 = 0;
	var uLocal_6153 = 0;
	var uLocal_6154 = 0;
	var uLocal_6155 = 0;
	var uLocal_6156 = 0;
	var uLocal_6157 = 3;
	var uLocal_6158 = 0;
	var uLocal_6159 = 0;
	var uLocal_6160 = 0;
	var uLocal_6161 = 0;
	var uLocal_6162 = -1;
	var uLocal_6163 = 0;
	var uLocal_6164 = 5;
	var uLocal_6165 = 0;
	var uLocal_6166 = 0;
	var uLocal_6167 = 0;
	var uLocal_6168 = 0;
	var uLocal_6169 = 0;
	var uLocal_6170 = 0;
	var uLocal_6171 = 0;
	var uLocal_6172 = 0;
	var uLocal_6173 = 0;
	var uLocal_6174 = 0;
	var uLocal_6175 = 10;
	var uLocal_6176 = 3;
	var uLocal_6177 = 500;
	var uLocal_6178 = 10000;
	var uLocal_6179 = 0;
	var uLocal_6180 = 3;
	var uLocal_6181 = 500;
	var uLocal_6182 = 10000;
	var uLocal_6183 = 0;
	var uLocal_6184 = 3;
	var uLocal_6185 = 500;
	var uLocal_6186 = 10000;
	var uLocal_6187 = 0;
	var uLocal_6188 = 3;
	var uLocal_6189 = 500;
	var uLocal_6190 = 10000;
	var uLocal_6191 = 0;
	var uLocal_6192 = 3;
	var uLocal_6193 = 500;
	var uLocal_6194 = 10000;
	var uLocal_6195 = 0;
	var uLocal_6196 = 3;
	var uLocal_6197 = 500;
	var uLocal_6198 = 10000;
	var uLocal_6199 = 0;
	var uLocal_6200 = 3;
	var uLocal_6201 = 500;
	var uLocal_6202 = 10000;
	var uLocal_6203 = 0;
	var uLocal_6204 = 3;
	var uLocal_6205 = 500;
	var uLocal_6206 = 10000;
	var uLocal_6207 = 0;
	var uLocal_6208 = 3;
	var uLocal_6209 = 500;
	var uLocal_6210 = 10000;
	var uLocal_6211 = 0;
	var uLocal_6212 = 3;
	var uLocal_6213 = 500;
	var uLocal_6214 = 10000;
	var uLocal_6215 = 0;
	var uLocal_6216 = 0;
	var uLocal_6217 = 0;
	var uLocal_6218 = 0;
	var uLocal_6219 = 0;
	var uLocal_6220 = 0;
	var uLocal_6221 = 0;
	var uLocal_6222 = 3;
	var uLocal_6223 = 0;
	var uLocal_6224 = 0;
	var uLocal_6225 = 0;
	var uLocal_6226 = 0;
	var uLocal_6227 = -1;
	var uLocal_6228 = 0;
	var uLocal_6229 = 5;
	var uLocal_6230 = 0;
	var uLocal_6231 = 0;
	var uLocal_6232 = 0;
	var uLocal_6233 = 0;
	var uLocal_6234 = 0;
	var uLocal_6235 = 0;
	var uLocal_6236 = 0;
	var uLocal_6237 = 0;
	var uLocal_6238 = 0;
	var uLocal_6239 = 0;
	var uLocal_6240 = 10;
	var uLocal_6241 = 3;
	var uLocal_6242 = 500;
	var uLocal_6243 = 10000;
	var uLocal_6244 = 0;
	var uLocal_6245 = 3;
	var uLocal_6246 = 500;
	var uLocal_6247 = 10000;
	var uLocal_6248 = 0;
	var uLocal_6249 = 3;
	var uLocal_6250 = 500;
	var uLocal_6251 = 10000;
	var uLocal_6252 = 0;
	var uLocal_6253 = 3;
	var uLocal_6254 = 500;
	var uLocal_6255 = 10000;
	var uLocal_6256 = 0;
	var uLocal_6257 = 3;
	var uLocal_6258 = 500;
	var uLocal_6259 = 10000;
	var uLocal_6260 = 0;
	var uLocal_6261 = 3;
	var uLocal_6262 = 500;
	var uLocal_6263 = 10000;
	var uLocal_6264 = 0;
	var uLocal_6265 = 3;
	var uLocal_6266 = 500;
	var uLocal_6267 = 10000;
	var uLocal_6268 = 0;
	var uLocal_6269 = 3;
	var uLocal_6270 = 500;
	var uLocal_6271 = 10000;
	var uLocal_6272 = 0;
	var uLocal_6273 = 3;
	var uLocal_6274 = 500;
	var uLocal_6275 = 10000;
	var uLocal_6276 = 0;
	var uLocal_6277 = 3;
	var uLocal_6278 = 500;
	var uLocal_6279 = 10000;
	var uLocal_6280 = 0;
	var uLocal_6281 = 0;
	var uLocal_6282 = 0;
	var uLocal_6283 = 0;
	var uLocal_6284 = 0;
	var uLocal_6285 = 0;
	var uLocal_6286 = 0;
	var uLocal_6287 = 3;
	var uLocal_6288 = 0;
	var uLocal_6289 = 0;
	var uLocal_6290 = 0;
	var uLocal_6291 = 0;
	var uLocal_6292 = -1;
	var uLocal_6293 = 0;
	var uLocal_6294 = 5;
	var uLocal_6295 = 0;
	var uLocal_6296 = 0;
	var uLocal_6297 = 0;
	var uLocal_6298 = 0;
	var uLocal_6299 = 0;
	var uLocal_6300 = 0;
	var uLocal_6301 = 0;
	var uLocal_6302 = 0;
	var uLocal_6303 = 0;
	var uLocal_6304 = 0;
	var uLocal_6305 = 10;
	var uLocal_6306 = 3;
	var uLocal_6307 = 500;
	var uLocal_6308 = 10000;
	var uLocal_6309 = 0;
	var uLocal_6310 = 3;
	var uLocal_6311 = 500;
	var uLocal_6312 = 10000;
	var uLocal_6313 = 0;
	var uLocal_6314 = 3;
	var uLocal_6315 = 500;
	var uLocal_6316 = 10000;
	var uLocal_6317 = 0;
	var uLocal_6318 = 3;
	var uLocal_6319 = 500;
	var uLocal_6320 = 10000;
	var uLocal_6321 = 0;
	var uLocal_6322 = 3;
	var uLocal_6323 = 500;
	var uLocal_6324 = 10000;
	var uLocal_6325 = 0;
	var uLocal_6326 = 3;
	var uLocal_6327 = 500;
	var uLocal_6328 = 10000;
	var uLocal_6329 = 0;
	var uLocal_6330 = 3;
	var uLocal_6331 = 500;
	var uLocal_6332 = 10000;
	var uLocal_6333 = 0;
	var uLocal_6334 = 3;
	var uLocal_6335 = 500;
	var uLocal_6336 = 10000;
	var uLocal_6337 = 0;
	var uLocal_6338 = 3;
	var uLocal_6339 = 500;
	var uLocal_6340 = 10000;
	var uLocal_6341 = 0;
	var uLocal_6342 = 3;
	var uLocal_6343 = 500;
	var uLocal_6344 = 10000;
	var uLocal_6345 = 0;
	var uLocal_6346 = 0;
	var uLocal_6347 = 0;
	var uLocal_6348 = 0;
	var uLocal_6349 = 0;
	var uLocal_6350 = 0;
	var uLocal_6351 = 0;
	var uLocal_6352 = 3;
	var uLocal_6353 = 0;
	var uLocal_6354 = 0;
	var uLocal_6355 = 0;
	var uLocal_6356 = 0;
	var uLocal_6357 = -1;
	var uLocal_6358 = 0;
	var uLocal_6359 = 5;
	var uLocal_6360 = 0;
	var uLocal_6361 = 0;
	var uLocal_6362 = 0;
	var uLocal_6363 = 0;
	var uLocal_6364 = 0;
	var uLocal_6365 = 0;
	var uLocal_6366 = 0;
	var uLocal_6367 = 0;
	var uLocal_6368 = 0;
	var uLocal_6369 = 0;
	var uLocal_6370 = 10;
	var uLocal_6371 = 3;
	var uLocal_6372 = 500;
	var uLocal_6373 = 10000;
	var uLocal_6374 = 0;
	var uLocal_6375 = 3;
	var uLocal_6376 = 500;
	var uLocal_6377 = 10000;
	var uLocal_6378 = 0;
	var uLocal_6379 = 3;
	var uLocal_6380 = 500;
	var uLocal_6381 = 10000;
	var uLocal_6382 = 0;
	var uLocal_6383 = 3;
	var uLocal_6384 = 500;
	var uLocal_6385 = 10000;
	var uLocal_6386 = 0;
	var uLocal_6387 = 3;
	var uLocal_6388 = 500;
	var uLocal_6389 = 10000;
	var uLocal_6390 = 0;
	var uLocal_6391 = 3;
	var uLocal_6392 = 500;
	var uLocal_6393 = 10000;
	var uLocal_6394 = 0;
	var uLocal_6395 = 3;
	var uLocal_6396 = 500;
	var uLocal_6397 = 10000;
	var uLocal_6398 = 0;
	var uLocal_6399 = 3;
	var uLocal_6400 = 500;
	var uLocal_6401 = 10000;
	var uLocal_6402 = 0;
	var uLocal_6403 = 3;
	var uLocal_6404 = 500;
	var uLocal_6405 = 10000;
	var uLocal_6406 = 0;
	var uLocal_6407 = 3;
	var uLocal_6408 = 500;
	var uLocal_6409 = 10000;
	var uLocal_6410 = 0;
	var uLocal_6411 = 0;
	var uLocal_6412 = 0;
	var uLocal_6413 = 0;
	var uLocal_6414 = 0;
	var uLocal_6415 = 0;
	var uLocal_6416 = 0;
	var uLocal_6417 = 3;
	var uLocal_6418 = 0;
	var uLocal_6419 = 0;
	var uLocal_6420 = 0;
	var uLocal_6421 = 0;
	var uLocal_6422 = -1;
	var uLocal_6423 = 0;
	var uLocal_6424 = 5;
	var uLocal_6425 = 0;
	var uLocal_6426 = 0;
	var uLocal_6427 = 0;
	var uLocal_6428 = 0;
	var uLocal_6429 = 0;
	var uLocal_6430 = 0;
	var uLocal_6431 = 0;
	var uLocal_6432 = 0;
	var uLocal_6433 = 0;
	var uLocal_6434 = 0;
	var uLocal_6435 = 10;
	var uLocal_6436 = 3;
	var uLocal_6437 = 500;
	var uLocal_6438 = 10000;
	var uLocal_6439 = 0;
	var uLocal_6440 = 3;
	var uLocal_6441 = 500;
	var uLocal_6442 = 10000;
	var uLocal_6443 = 0;
	var uLocal_6444 = 3;
	var uLocal_6445 = 500;
	var uLocal_6446 = 10000;
	var uLocal_6447 = 0;
	var uLocal_6448 = 3;
	var uLocal_6449 = 500;
	var uLocal_6450 = 10000;
	var uLocal_6451 = 0;
	var uLocal_6452 = 3;
	var uLocal_6453 = 500;
	var uLocal_6454 = 10000;
	var uLocal_6455 = 0;
	var uLocal_6456 = 3;
	var uLocal_6457 = 500;
	var uLocal_6458 = 10000;
	var uLocal_6459 = 0;
	var uLocal_6460 = 3;
	var uLocal_6461 = 500;
	var uLocal_6462 = 10000;
	var uLocal_6463 = 0;
	var uLocal_6464 = 3;
	var uLocal_6465 = 500;
	var uLocal_6466 = 10000;
	var uLocal_6467 = 0;
	var uLocal_6468 = 3;
	var uLocal_6469 = 500;
	var uLocal_6470 = 10000;
	var uLocal_6471 = 0;
	var uLocal_6472 = 3;
	var uLocal_6473 = 500;
	var uLocal_6474 = 10000;
	var uLocal_6475 = 0;
	var uLocal_6476 = 0;
	var uLocal_6477 = 0;
	var uLocal_6478 = 0;
	var uLocal_6479 = 0;
	var uLocal_6480 = 0;
	var uLocal_6481 = 0;
	var uLocal_6482 = 3;
	var uLocal_6483 = 0;
	var uLocal_6484 = 0;
	var uLocal_6485 = 0;
	var uLocal_6486 = 0;
	var uLocal_6487 = -1;
	var uLocal_6488 = 0;
	var uLocal_6489 = 5;
	var uLocal_6490 = 0;
	var uLocal_6491 = 0;
	var uLocal_6492 = 0;
	var uLocal_6493 = 0;
	var uLocal_6494 = 0;
	var uLocal_6495 = 0;
	var uLocal_6496 = 0;
	var uLocal_6497 = 0;
	var uLocal_6498 = 0;
	var uLocal_6499 = 0;
	var uLocal_6500 = 10;
	var uLocal_6501 = 3;
	var uLocal_6502 = 500;
	var uLocal_6503 = 10000;
	var uLocal_6504 = 0;
	var uLocal_6505 = 3;
	var uLocal_6506 = 500;
	var uLocal_6507 = 10000;
	var uLocal_6508 = 0;
	var uLocal_6509 = 3;
	var uLocal_6510 = 500;
	var uLocal_6511 = 10000;
	var uLocal_6512 = 0;
	var uLocal_6513 = 3;
	var uLocal_6514 = 500;
	var uLocal_6515 = 10000;
	var uLocal_6516 = 0;
	var uLocal_6517 = 3;
	var uLocal_6518 = 500;
	var uLocal_6519 = 10000;
	var uLocal_6520 = 0;
	var uLocal_6521 = 3;
	var uLocal_6522 = 500;
	var uLocal_6523 = 10000;
	var uLocal_6524 = 0;
	var uLocal_6525 = 3;
	var uLocal_6526 = 500;
	var uLocal_6527 = 10000;
	var uLocal_6528 = 0;
	var uLocal_6529 = 3;
	var uLocal_6530 = 500;
	var uLocal_6531 = 10000;
	var uLocal_6532 = 0;
	var uLocal_6533 = 3;
	var uLocal_6534 = 500;
	var uLocal_6535 = 10000;
	var uLocal_6536 = 0;
	var uLocal_6537 = 3;
	var uLocal_6538 = 500;
	var uLocal_6539 = 10000;
	var uLocal_6540 = 0;
	var uLocal_6541 = 0;
	var uLocal_6542 = 0;
	var uLocal_6543 = 0;
	var uLocal_6544 = 0;
	var uLocal_6545 = 0;
	var uLocal_6546 = 0;
	var uLocal_6547 = 3;
	var uLocal_6548 = 0;
	var uLocal_6549 = 0;
	var uLocal_6550 = 0;
	var uLocal_6551 = 0;
	var uLocal_6552 = -1;
	var uLocal_6553 = 0;
	var uLocal_6554 = 5;
	var uLocal_6555 = 0;
	var uLocal_6556 = 0;
	var uLocal_6557 = 0;
	var uLocal_6558 = 0;
	var uLocal_6559 = 0;
	var uLocal_6560 = 0;
	var uLocal_6561 = 0;
	var uLocal_6562 = 0;
	var uLocal_6563 = 0;
	var uLocal_6564 = 0;
	var uLocal_6565 = 10;
	var uLocal_6566 = 3;
	var uLocal_6567 = 500;
	var uLocal_6568 = 10000;
	var uLocal_6569 = 0;
	var uLocal_6570 = 3;
	var uLocal_6571 = 500;
	var uLocal_6572 = 10000;
	var uLocal_6573 = 0;
	var uLocal_6574 = 3;
	var uLocal_6575 = 500;
	var uLocal_6576 = 10000;
	var uLocal_6577 = 0;
	var uLocal_6578 = 3;
	var uLocal_6579 = 500;
	var uLocal_6580 = 10000;
	var uLocal_6581 = 0;
	var uLocal_6582 = 3;
	var uLocal_6583 = 500;
	var uLocal_6584 = 10000;
	var uLocal_6585 = 0;
	var uLocal_6586 = 3;
	var uLocal_6587 = 500;
	var uLocal_6588 = 10000;
	var uLocal_6589 = 0;
	var uLocal_6590 = 3;
	var uLocal_6591 = 500;
	var uLocal_6592 = 10000;
	var uLocal_6593 = 0;
	var uLocal_6594 = 3;
	var uLocal_6595 = 500;
	var uLocal_6596 = 10000;
	var uLocal_6597 = 0;
	var uLocal_6598 = 3;
	var uLocal_6599 = 500;
	var uLocal_6600 = 10000;
	var uLocal_6601 = 0;
	var uLocal_6602 = 3;
	var uLocal_6603 = 500;
	var uLocal_6604 = 10000;
	var uLocal_6605 = 0;
	var uLocal_6606 = 0;
	var uLocal_6607 = 0;
	var uLocal_6608 = 0;
	var uLocal_6609 = 0;
	var uLocal_6610 = 0;
	var uLocal_6611 = 0;
	var uLocal_6612 = 3;
	var uLocal_6613 = 0;
	var uLocal_6614 = 0;
	var uLocal_6615 = 0;
	var uLocal_6616 = 0;
	var uLocal_6617 = -1;
	var uLocal_6618 = 0;
	var uLocal_6619 = 5;
	var uLocal_6620 = 0;
	var uLocal_6621 = 0;
	var uLocal_6622 = 0;
	var uLocal_6623 = 0;
	var uLocal_6624 = 0;
	var uLocal_6625 = 0;
	var uLocal_6626 = 0;
	var uLocal_6627 = 0;
	var uLocal_6628 = 0;
	var uLocal_6629 = 0;
	var uLocal_6630 = 10;
	var uLocal_6631 = 3;
	var uLocal_6632 = 500;
	var uLocal_6633 = 10000;
	var uLocal_6634 = 0;
	var uLocal_6635 = 3;
	var uLocal_6636 = 500;
	var uLocal_6637 = 10000;
	var uLocal_6638 = 0;
	var uLocal_6639 = 3;
	var uLocal_6640 = 500;
	var uLocal_6641 = 10000;
	var uLocal_6642 = 0;
	var uLocal_6643 = 3;
	var uLocal_6644 = 500;
	var uLocal_6645 = 10000;
	var uLocal_6646 = 0;
	var uLocal_6647 = 3;
	var uLocal_6648 = 500;
	var uLocal_6649 = 10000;
	var uLocal_6650 = 0;
	var uLocal_6651 = 3;
	var uLocal_6652 = 500;
	var uLocal_6653 = 10000;
	var uLocal_6654 = 0;
	var uLocal_6655 = 3;
	var uLocal_6656 = 500;
	var uLocal_6657 = 10000;
	var uLocal_6658 = 0;
	var uLocal_6659 = 3;
	var uLocal_6660 = 500;
	var uLocal_6661 = 10000;
	var uLocal_6662 = 0;
	var uLocal_6663 = 3;
	var uLocal_6664 = 500;
	var uLocal_6665 = 10000;
	var uLocal_6666 = 0;
	var uLocal_6667 = 3;
	var uLocal_6668 = 500;
	var uLocal_6669 = 10000;
	var uLocal_6670 = 0;
	var uLocal_6671 = 0;
	var uLocal_6672 = 0;
	var uLocal_6673 = 0;
	var uLocal_6674 = 0;
	var uLocal_6675 = 0;
	var uLocal_6676 = 0;
	var uLocal_6677 = 3;
	var uLocal_6678 = 0;
	var uLocal_6679 = 0;
	var uLocal_6680 = 0;
	var uLocal_6681 = 0;
	var uLocal_6682 = -1;
	var uLocal_6683 = 0;
	var uLocal_6684 = 5;
	var uLocal_6685 = 0;
	var uLocal_6686 = 0;
	var uLocal_6687 = 0;
	var uLocal_6688 = 0;
	var uLocal_6689 = 0;
	var uLocal_6690 = 0;
	var uLocal_6691 = 0;
	var uLocal_6692 = 0;
	var uLocal_6693 = 0;
	var uLocal_6694 = 0;
	var uLocal_6695 = 10;
	var uLocal_6696 = 3;
	var uLocal_6697 = 500;
	var uLocal_6698 = 10000;
	var uLocal_6699 = 0;
	var uLocal_6700 = 3;
	var uLocal_6701 = 500;
	var uLocal_6702 = 10000;
	var uLocal_6703 = 0;
	var uLocal_6704 = 3;
	var uLocal_6705 = 500;
	var uLocal_6706 = 10000;
	var uLocal_6707 = 0;
	var uLocal_6708 = 3;
	var uLocal_6709 = 500;
	var uLocal_6710 = 10000;
	var uLocal_6711 = 0;
	var uLocal_6712 = 3;
	var uLocal_6713 = 500;
	var uLocal_6714 = 10000;
	var uLocal_6715 = 0;
	var uLocal_6716 = 3;
	var uLocal_6717 = 500;
	var uLocal_6718 = 10000;
	var uLocal_6719 = 0;
	var uLocal_6720 = 3;
	var uLocal_6721 = 500;
	var uLocal_6722 = 10000;
	var uLocal_6723 = 0;
	var uLocal_6724 = 3;
	var uLocal_6725 = 500;
	var uLocal_6726 = 10000;
	var uLocal_6727 = 0;
	var uLocal_6728 = 3;
	var uLocal_6729 = 500;
	var uLocal_6730 = 10000;
	var uLocal_6731 = 0;
	var uLocal_6732 = 3;
	var uLocal_6733 = 500;
	var uLocal_6734 = 10000;
	var uLocal_6735 = 0;
	var uLocal_6736 = 0;
	var uLocal_6737 = 0;
	var uLocal_6738 = 0;
	var uLocal_6739 = 0;
	var uLocal_6740 = 0;
	var uLocal_6741 = 0;
	var uLocal_6742 = 3;
	var uLocal_6743 = 0;
	var uLocal_6744 = 0;
	var uLocal_6745 = 0;
	var uLocal_6746 = 0;
	var uLocal_6747 = -1;
	var uLocal_6748 = 0;
	var uLocal_6749 = 5;
	var uLocal_6750 = 0;
	var uLocal_6751 = 0;
	var uLocal_6752 = 0;
	var uLocal_6753 = 0;
	var uLocal_6754 = 0;
	var uLocal_6755 = 0;
	var uLocal_6756 = 0;
	var uLocal_6757 = 0;
	var uLocal_6758 = 0;
	var uLocal_6759 = 0;
	var uLocal_6760 = 10;
	var uLocal_6761 = 3;
	var uLocal_6762 = 500;
	var uLocal_6763 = 10000;
	var uLocal_6764 = 0;
	var uLocal_6765 = 3;
	var uLocal_6766 = 500;
	var uLocal_6767 = 10000;
	var uLocal_6768 = 0;
	var uLocal_6769 = 3;
	var uLocal_6770 = 500;
	var uLocal_6771 = 10000;
	var uLocal_6772 = 0;
	var uLocal_6773 = 3;
	var uLocal_6774 = 500;
	var uLocal_6775 = 10000;
	var uLocal_6776 = 0;
	var uLocal_6777 = 3;
	var uLocal_6778 = 500;
	var uLocal_6779 = 10000;
	var uLocal_6780 = 0;
	var uLocal_6781 = 3;
	var uLocal_6782 = 500;
	var uLocal_6783 = 10000;
	var uLocal_6784 = 0;
	var uLocal_6785 = 3;
	var uLocal_6786 = 500;
	var uLocal_6787 = 10000;
	var uLocal_6788 = 0;
	var uLocal_6789 = 3;
	var uLocal_6790 = 500;
	var uLocal_6791 = 10000;
	var uLocal_6792 = 0;
	var uLocal_6793 = 3;
	var uLocal_6794 = 500;
	var uLocal_6795 = 10000;
	var uLocal_6796 = 0;
	var uLocal_6797 = 3;
	var uLocal_6798 = 500;
	var uLocal_6799 = 10000;
	var uLocal_6800 = 0;
	var uLocal_6801 = 0;
	var uLocal_6802 = 0;
	var uLocal_6803 = 0;
	var uLocal_6804 = 0;
	var uLocal_6805 = 0;
	var uLocal_6806 = 0;
	var uLocal_6807 = 3;
	var uLocal_6808 = 0;
	var uLocal_6809 = 0;
	var uLocal_6810 = 0;
	var uLocal_6811 = 0;
	var uLocal_6812 = -1;
	var uLocal_6813 = 0;
	var uLocal_6814 = 5;
	var uLocal_6815 = 0;
	var uLocal_6816 = 0;
	var uLocal_6817 = 0;
	var uLocal_6818 = 0;
	var uLocal_6819 = 0;
	var uLocal_6820 = 0;
	var uLocal_6821 = 0;
	var uLocal_6822 = 0;
	var uLocal_6823 = 0;
	var uLocal_6824 = 0;
	var uLocal_6825 = 10;
	var uLocal_6826 = 3;
	var uLocal_6827 = 500;
	var uLocal_6828 = 10000;
	var uLocal_6829 = 0;
	var uLocal_6830 = 3;
	var uLocal_6831 = 500;
	var uLocal_6832 = 10000;
	var uLocal_6833 = 0;
	var uLocal_6834 = 3;
	var uLocal_6835 = 500;
	var uLocal_6836 = 10000;
	var uLocal_6837 = 0;
	var uLocal_6838 = 3;
	var uLocal_6839 = 500;
	var uLocal_6840 = 10000;
	var uLocal_6841 = 0;
	var uLocal_6842 = 3;
	var uLocal_6843 = 500;
	var uLocal_6844 = 10000;
	var uLocal_6845 = 0;
	var uLocal_6846 = 3;
	var uLocal_6847 = 500;
	var uLocal_6848 = 10000;
	var uLocal_6849 = 0;
	var uLocal_6850 = 3;
	var uLocal_6851 = 500;
	var uLocal_6852 = 10000;
	var uLocal_6853 = 0;
	var uLocal_6854 = 3;
	var uLocal_6855 = 500;
	var uLocal_6856 = 10000;
	var uLocal_6857 = 0;
	var uLocal_6858 = 3;
	var uLocal_6859 = 500;
	var uLocal_6860 = 10000;
	var uLocal_6861 = 0;
	var uLocal_6862 = 3;
	var uLocal_6863 = 500;
	var uLocal_6864 = 10000;
	var uLocal_6865 = 0;
	var uLocal_6866 = 0;
	var uLocal_6867 = 0;
	var uLocal_6868 = 0;
	var uLocal_6869 = 0;
	var uLocal_6870 = 0;
	var uLocal_6871 = 0;
	var uLocal_6872 = 3;
	var uLocal_6873 = 0;
	var uLocal_6874 = 0;
	var uLocal_6875 = 0;
	var uLocal_6876 = 0;
	var uLocal_6877 = -1;
	var uLocal_6878 = 0;
	var uLocal_6879 = 5;
	var uLocal_6880 = 0;
	var uLocal_6881 = 0;
	var uLocal_6882 = 0;
	var uLocal_6883 = 0;
	var uLocal_6884 = 0;
	var uLocal_6885 = 0;
	var uLocal_6886 = 0;
	var uLocal_6887 = 0;
	var uLocal_6888 = 0;
	var uLocal_6889 = 0;
	var uLocal_6890 = 10;
	var uLocal_6891 = 3;
	var uLocal_6892 = 500;
	var uLocal_6893 = 10000;
	var uLocal_6894 = 0;
	var uLocal_6895 = 3;
	var uLocal_6896 = 500;
	var uLocal_6897 = 10000;
	var uLocal_6898 = 0;
	var uLocal_6899 = 3;
	var uLocal_6900 = 500;
	var uLocal_6901 = 10000;
	var uLocal_6902 = 0;
	var uLocal_6903 = 3;
	var uLocal_6904 = 500;
	var uLocal_6905 = 10000;
	var uLocal_6906 = 0;
	var uLocal_6907 = 3;
	var uLocal_6908 = 500;
	var uLocal_6909 = 10000;
	var uLocal_6910 = 0;
	var uLocal_6911 = 3;
	var uLocal_6912 = 500;
	var uLocal_6913 = 10000;
	var uLocal_6914 = 0;
	var uLocal_6915 = 3;
	var uLocal_6916 = 500;
	var uLocal_6917 = 10000;
	var uLocal_6918 = 0;
	var uLocal_6919 = 3;
	var uLocal_6920 = 500;
	var uLocal_6921 = 10000;
	var uLocal_6922 = 0;
	var uLocal_6923 = 3;
	var uLocal_6924 = 500;
	var uLocal_6925 = 10000;
	var uLocal_6926 = 0;
	var uLocal_6927 = 3;
	var uLocal_6928 = 500;
	var uLocal_6929 = 10000;
	var uLocal_6930 = 0;
	var uLocal_6931 = 0;
	var uLocal_6932 = 0;
	var uLocal_6933 = 0;
	var uLocal_6934 = 0;
	var uLocal_6935 = 0;
	var uLocal_6936 = 0;
	var uLocal_6937 = 3;
	var uLocal_6938 = 0;
	var uLocal_6939 = 0;
	var uLocal_6940 = 0;
	var uLocal_6941 = 0;
	var uLocal_6942 = -1;
	var uLocal_6943 = 0;
	var uLocal_6944 = 5;
	var uLocal_6945 = 0;
	var uLocal_6946 = 0;
	var uLocal_6947 = 0;
	var uLocal_6948 = 0;
	var uLocal_6949 = 0;
	var uLocal_6950 = 0;
	var uLocal_6951 = 0;
	var uLocal_6952 = 0;
	var uLocal_6953 = 0;
	var uLocal_6954 = 0;
	var uLocal_6955 = 10;
	var uLocal_6956 = 3;
	var uLocal_6957 = 500;
	var uLocal_6958 = 10000;
	var uLocal_6959 = 0;
	var uLocal_6960 = 3;
	var uLocal_6961 = 500;
	var uLocal_6962 = 10000;
	var uLocal_6963 = 0;
	var uLocal_6964 = 3;
	var uLocal_6965 = 500;
	var uLocal_6966 = 10000;
	var uLocal_6967 = 0;
	var uLocal_6968 = 3;
	var uLocal_6969 = 500;
	var uLocal_6970 = 10000;
	var uLocal_6971 = 0;
	var uLocal_6972 = 3;
	var uLocal_6973 = 500;
	var uLocal_6974 = 10000;
	var uLocal_6975 = 0;
	var uLocal_6976 = 3;
	var uLocal_6977 = 500;
	var uLocal_6978 = 10000;
	var uLocal_6979 = 0;
	var uLocal_6980 = 3;
	var uLocal_6981 = 500;
	var uLocal_6982 = 10000;
	var uLocal_6983 = 0;
	var uLocal_6984 = 3;
	var uLocal_6985 = 500;
	var uLocal_6986 = 10000;
	var uLocal_6987 = 0;
	var uLocal_6988 = 3;
	var uLocal_6989 = 500;
	var uLocal_6990 = 10000;
	var uLocal_6991 = 0;
	var uLocal_6992 = 3;
	var uLocal_6993 = 500;
	var uLocal_6994 = 10000;
	var uLocal_6995 = 0;
	var uLocal_6996 = 0;
	var uLocal_6997 = 0;
	var uLocal_6998 = 0;
	var uLocal_6999 = 0;
	var uLocal_7000 = 0;
	var uLocal_7001 = 0;
	var uLocal_7002 = 3;
	var uLocal_7003 = 0;
	var uLocal_7004 = 0;
	var uLocal_7005 = 0;
	var uLocal_7006 = 0;
	var uLocal_7007 = -1;
	var uLocal_7008 = 0;
	var uLocal_7009 = 5;
	var uLocal_7010 = 0;
	var uLocal_7011 = 0;
	var uLocal_7012 = 0;
	var uLocal_7013 = 0;
	var uLocal_7014 = 0;
	var uLocal_7015 = 0;
	var uLocal_7016 = 0;
	var uLocal_7017 = 0;
	var uLocal_7018 = 0;
	var uLocal_7019 = 0;
	var uLocal_7020 = 10;
	var uLocal_7021 = 3;
	var uLocal_7022 = 500;
	var uLocal_7023 = 10000;
	var uLocal_7024 = 0;
	var uLocal_7025 = 3;
	var uLocal_7026 = 500;
	var uLocal_7027 = 10000;
	var uLocal_7028 = 0;
	var uLocal_7029 = 3;
	var uLocal_7030 = 500;
	var uLocal_7031 = 10000;
	var uLocal_7032 = 0;
	var uLocal_7033 = 3;
	var uLocal_7034 = 500;
	var uLocal_7035 = 10000;
	var uLocal_7036 = 0;
	var uLocal_7037 = 3;
	var uLocal_7038 = 500;
	var uLocal_7039 = 10000;
	var uLocal_7040 = 0;
	var uLocal_7041 = 3;
	var uLocal_7042 = 500;
	var uLocal_7043 = 10000;
	var uLocal_7044 = 0;
	var uLocal_7045 = 3;
	var uLocal_7046 = 500;
	var uLocal_7047 = 10000;
	var uLocal_7048 = 0;
	var uLocal_7049 = 3;
	var uLocal_7050 = 500;
	var uLocal_7051 = 10000;
	var uLocal_7052 = 0;
	var uLocal_7053 = 3;
	var uLocal_7054 = 500;
	var uLocal_7055 = 10000;
	var uLocal_7056 = 0;
	var uLocal_7057 = 3;
	var uLocal_7058 = 500;
	var uLocal_7059 = 10000;
	var uLocal_7060 = 0;
	var uLocal_7061 = 0;
	var uLocal_7062 = 0;
	var uLocal_7063 = 0;
	var uLocal_7064 = 0;
	var uLocal_7065 = 0;
	var uLocal_7066 = 0;
	var uLocal_7067 = 3;
	var uLocal_7068 = 0;
	var uLocal_7069 = 0;
	var uLocal_7070 = 0;
	var uLocal_7071 = 0;
	var uLocal_7072 = -1;
	var uLocal_7073 = 0;
	var uLocal_7074 = 5;
	var uLocal_7075 = 0;
	var uLocal_7076 = 0;
	var uLocal_7077 = 0;
	var uLocal_7078 = 0;
	var uLocal_7079 = 0;
	var uLocal_7080 = 0;
	var uLocal_7081 = 0;
	var uLocal_7082 = 0;
	var uLocal_7083 = 0;
	var uLocal_7084 = 0;
	var uLocal_7085 = 10;
	var uLocal_7086 = 3;
	var uLocal_7087 = 500;
	var uLocal_7088 = 10000;
	var uLocal_7089 = 0;
	var uLocal_7090 = 3;
	var uLocal_7091 = 500;
	var uLocal_7092 = 10000;
	var uLocal_7093 = 0;
	var uLocal_7094 = 3;
	var uLocal_7095 = 500;
	var uLocal_7096 = 10000;
	var uLocal_7097 = 0;
	var uLocal_7098 = 3;
	var uLocal_7099 = 500;
	var uLocal_7100 = 10000;
	var uLocal_7101 = 0;
	var uLocal_7102 = 3;
	var uLocal_7103 = 500;
	var uLocal_7104 = 10000;
	var uLocal_7105 = 0;
	var uLocal_7106 = 3;
	var uLocal_7107 = 500;
	var uLocal_7108 = 10000;
	var uLocal_7109 = 0;
	var uLocal_7110 = 3;
	var uLocal_7111 = 500;
	var uLocal_7112 = 10000;
	var uLocal_7113 = 0;
	var uLocal_7114 = 3;
	var uLocal_7115 = 500;
	var uLocal_7116 = 10000;
	var uLocal_7117 = 0;
	var uLocal_7118 = 3;
	var uLocal_7119 = 500;
	var uLocal_7120 = 10000;
	var uLocal_7121 = 0;
	var uLocal_7122 = 3;
	var uLocal_7123 = 500;
	var uLocal_7124 = 10000;
	var uLocal_7125 = 0;
	var uLocal_7126 = 0;
	var uLocal_7127 = 0;
	var uLocal_7128 = 0;
	var uLocal_7129 = 0;
	var uLocal_7130 = 0;
	var uLocal_7131 = 0;
	var uLocal_7132 = 3;
	var uLocal_7133 = 0;
	var uLocal_7134 = 0;
	var uLocal_7135 = 0;
	var uLocal_7136 = 0;
	var uLocal_7137 = -1;
	var uLocal_7138 = 0;
	var uLocal_7139 = 5;
	var uLocal_7140 = 0;
	var uLocal_7141 = 0;
	var uLocal_7142 = 0;
	var uLocal_7143 = 0;
	var uLocal_7144 = 0;
	var uLocal_7145 = 0;
	var uLocal_7146 = 0;
	var uLocal_7147 = 0;
	var uLocal_7148 = 0;
	var uLocal_7149 = 0;
	var uLocal_7150 = 10;
	var uLocal_7151 = 3;
	var uLocal_7152 = 500;
	var uLocal_7153 = 10000;
	var uLocal_7154 = 0;
	var uLocal_7155 = 3;
	var uLocal_7156 = 500;
	var uLocal_7157 = 10000;
	var uLocal_7158 = 0;
	var uLocal_7159 = 3;
	var uLocal_7160 = 500;
	var uLocal_7161 = 10000;
	var uLocal_7162 = 0;
	var uLocal_7163 = 3;
	var uLocal_7164 = 500;
	var uLocal_7165 = 10000;
	var uLocal_7166 = 0;
	var uLocal_7167 = 3;
	var uLocal_7168 = 500;
	var uLocal_7169 = 10000;
	var uLocal_7170 = 0;
	var uLocal_7171 = 3;
	var uLocal_7172 = 500;
	var uLocal_7173 = 10000;
	var uLocal_7174 = 0;
	var uLocal_7175 = 3;
	var uLocal_7176 = 500;
	var uLocal_7177 = 10000;
	var uLocal_7178 = 0;
	var uLocal_7179 = 3;
	var uLocal_7180 = 500;
	var uLocal_7181 = 10000;
	var uLocal_7182 = 0;
	var uLocal_7183 = 3;
	var uLocal_7184 = 500;
	var uLocal_7185 = 10000;
	var uLocal_7186 = 0;
	var uLocal_7187 = 3;
	var uLocal_7188 = 500;
	var uLocal_7189 = 10000;
	var uLocal_7190 = 0;
	var uLocal_7191 = 0;
	var uLocal_7192 = 0;
	var uLocal_7193 = 0;
	var uLocal_7194 = 0;
	var uLocal_7195 = 0;
	var uLocal_7196 = 0;
	var uLocal_7197 = 3;
	var uLocal_7198 = 0;
	var uLocal_7199 = 0;
	var uLocal_7200 = 0;
	var uLocal_7201 = 0;
	var uLocal_7202 = -1;
	var uLocal_7203 = 0;
	var uLocal_7204 = 5;
	var uLocal_7205 = 0;
	var uLocal_7206 = 0;
	var uLocal_7207 = 0;
	var uLocal_7208 = 0;
	var uLocal_7209 = 0;
	var uLocal_7210 = 0;
	var uLocal_7211 = 0;
	var uLocal_7212 = 0;
	var uLocal_7213 = 0;
	var uLocal_7214 = 0;
	var uLocal_7215 = 10;
	var uLocal_7216 = 3;
	var uLocal_7217 = 500;
	var uLocal_7218 = 10000;
	var uLocal_7219 = 0;
	var uLocal_7220 = 3;
	var uLocal_7221 = 500;
	var uLocal_7222 = 10000;
	var uLocal_7223 = 0;
	var uLocal_7224 = 3;
	var uLocal_7225 = 500;
	var uLocal_7226 = 10000;
	var uLocal_7227 = 0;
	var uLocal_7228 = 3;
	var uLocal_7229 = 500;
	var uLocal_7230 = 10000;
	var uLocal_7231 = 0;
	var uLocal_7232 = 3;
	var uLocal_7233 = 500;
	var uLocal_7234 = 10000;
	var uLocal_7235 = 0;
	var uLocal_7236 = 3;
	var uLocal_7237 = 500;
	var uLocal_7238 = 10000;
	var uLocal_7239 = 0;
	var uLocal_7240 = 3;
	var uLocal_7241 = 500;
	var uLocal_7242 = 10000;
	var uLocal_7243 = 0;
	var uLocal_7244 = 3;
	var uLocal_7245 = 500;
	var uLocal_7246 = 10000;
	var uLocal_7247 = 0;
	var uLocal_7248 = 3;
	var uLocal_7249 = 500;
	var uLocal_7250 = 10000;
	var uLocal_7251 = 0;
	var uLocal_7252 = 3;
	var uLocal_7253 = 500;
	var uLocal_7254 = 10000;
	var uLocal_7255 = 0;
	var uLocal_7256 = 0;
	var uLocal_7257 = 0;
	var uLocal_7258 = 0;
	var uLocal_7259 = 0;
	var uLocal_7260 = 0;
	var uLocal_7261 = 0;
	var uLocal_7262 = 3;
	var uLocal_7263 = 0;
	var uLocal_7264 = 0;
	var uLocal_7265 = 0;
	var uLocal_7266 = 0;
	var uLocal_7267 = -1;
	var uLocal_7268 = 0;
	var uLocal_7269 = 5;
	var uLocal_7270 = 0;
	var uLocal_7271 = 0;
	var uLocal_7272 = 0;
	var uLocal_7273 = 0;
	var uLocal_7274 = 0;
	var uLocal_7275 = 0;
	var uLocal_7276 = 0;
	var uLocal_7277 = 0;
	var uLocal_7278 = 0;
	var uLocal_7279 = 0;
	var uLocal_7280 = 10;
	var uLocal_7281 = 3;
	var uLocal_7282 = 500;
	var uLocal_7283 = 10000;
	var uLocal_7284 = 0;
	var uLocal_7285 = 3;
	var uLocal_7286 = 500;
	var uLocal_7287 = 10000;
	var uLocal_7288 = 0;
	var uLocal_7289 = 3;
	var uLocal_7290 = 500;
	var uLocal_7291 = 10000;
	var uLocal_7292 = 0;
	var uLocal_7293 = 3;
	var uLocal_7294 = 500;
	var uLocal_7295 = 10000;
	var uLocal_7296 = 0;
	var uLocal_7297 = 3;
	var uLocal_7298 = 500;
	var uLocal_7299 = 10000;
	var uLocal_7300 = 0;
	var uLocal_7301 = 3;
	var uLocal_7302 = 500;
	var uLocal_7303 = 10000;
	var uLocal_7304 = 0;
	var uLocal_7305 = 3;
	var uLocal_7306 = 500;
	var uLocal_7307 = 10000;
	var uLocal_7308 = 0;
	var uLocal_7309 = 3;
	var uLocal_7310 = 500;
	var uLocal_7311 = 10000;
	var uLocal_7312 = 0;
	var uLocal_7313 = 3;
	var uLocal_7314 = 500;
	var uLocal_7315 = 10000;
	var uLocal_7316 = 0;
	var uLocal_7317 = 3;
	var uLocal_7318 = 500;
	var uLocal_7319 = 10000;
	var uLocal_7320 = 0;
	var uLocal_7321 = 0;
	var uLocal_7322 = 0;
	var uLocal_7323 = 0;
	var uLocal_7324 = 0;
	var uLocal_7325 = 0;
	var uLocal_7326 = 0;
	var uLocal_7327 = 3;
	var uLocal_7328 = 0;
	var uLocal_7329 = 0;
	var uLocal_7330 = 0;
	var uLocal_7331 = 0;
	var uLocal_7332 = -1;
	var uLocal_7333 = 0;
	var uLocal_7334 = 5;
	var uLocal_7335 = 0;
	var uLocal_7336 = 0;
	var uLocal_7337 = 0;
	var uLocal_7338 = 0;
	var uLocal_7339 = 0;
	var uLocal_7340 = 0;
	var uLocal_7341 = 0;
	var uLocal_7342 = 0;
	var uLocal_7343 = 0;
	var uLocal_7344 = 0;
	var uLocal_7345 = 10;
	var uLocal_7346 = 3;
	var uLocal_7347 = 500;
	var uLocal_7348 = 10000;
	var uLocal_7349 = 0;
	var uLocal_7350 = 3;
	var uLocal_7351 = 500;
	var uLocal_7352 = 10000;
	var uLocal_7353 = 0;
	var uLocal_7354 = 3;
	var uLocal_7355 = 500;
	var uLocal_7356 = 10000;
	var uLocal_7357 = 0;
	var uLocal_7358 = 3;
	var uLocal_7359 = 500;
	var uLocal_7360 = 10000;
	var uLocal_7361 = 0;
	var uLocal_7362 = 3;
	var uLocal_7363 = 500;
	var uLocal_7364 = 10000;
	var uLocal_7365 = 0;
	var uLocal_7366 = 3;
	var uLocal_7367 = 500;
	var uLocal_7368 = 10000;
	var uLocal_7369 = 0;
	var uLocal_7370 = 3;
	var uLocal_7371 = 500;
	var uLocal_7372 = 10000;
	var uLocal_7373 = 0;
	var uLocal_7374 = 3;
	var uLocal_7375 = 500;
	var uLocal_7376 = 10000;
	var uLocal_7377 = 0;
	var uLocal_7378 = 3;
	var uLocal_7379 = 500;
	var uLocal_7380 = 10000;
	var uLocal_7381 = 0;
	var uLocal_7382 = 3;
	var uLocal_7383 = 500;
	var uLocal_7384 = 10000;
	var uLocal_7385 = 0;
	var uLocal_7386 = 0;
	var uLocal_7387 = 0;
	var uLocal_7388 = 0;
	var uLocal_7389 = 0;
	var uLocal_7390 = 0;
	var uLocal_7391 = 0;
	var uLocal_7392 = 3;
	var uLocal_7393 = 0;
	var uLocal_7394 = 0;
	var uLocal_7395 = 0;
	var uLocal_7396 = 0;
	var uLocal_7397 = -1;
	var uLocal_7398 = 0;
	var uLocal_7399 = 5;
	var uLocal_7400 = 0;
	var uLocal_7401 = 0;
	var uLocal_7402 = 0;
	var uLocal_7403 = 0;
	var uLocal_7404 = 0;
	var uLocal_7405 = 0;
	var uLocal_7406 = 0;
	var uLocal_7407 = 0;
	var uLocal_7408 = 0;
	var uLocal_7409 = 0;
	var uLocal_7410 = 10;
	var uLocal_7411 = 3;
	var uLocal_7412 = 500;
	var uLocal_7413 = 10000;
	var uLocal_7414 = 0;
	var uLocal_7415 = 3;
	var uLocal_7416 = 500;
	var uLocal_7417 = 10000;
	var uLocal_7418 = 0;
	var uLocal_7419 = 3;
	var uLocal_7420 = 500;
	var uLocal_7421 = 10000;
	var uLocal_7422 = 0;
	var uLocal_7423 = 3;
	var uLocal_7424 = 500;
	var uLocal_7425 = 10000;
	var uLocal_7426 = 0;
	var uLocal_7427 = 3;
	var uLocal_7428 = 500;
	var uLocal_7429 = 10000;
	var uLocal_7430 = 0;
	var uLocal_7431 = 3;
	var uLocal_7432 = 500;
	var uLocal_7433 = 10000;
	var uLocal_7434 = 0;
	var uLocal_7435 = 3;
	var uLocal_7436 = 500;
	var uLocal_7437 = 10000;
	var uLocal_7438 = 0;
	var uLocal_7439 = 3;
	var uLocal_7440 = 500;
	var uLocal_7441 = 10000;
	var uLocal_7442 = 0;
	var uLocal_7443 = 3;
	var uLocal_7444 = 500;
	var uLocal_7445 = 10000;
	var uLocal_7446 = 0;
	var uLocal_7447 = 3;
	var uLocal_7448 = 500;
	var uLocal_7449 = 10000;
	var uLocal_7450 = 0;
	var uLocal_7451 = 0;
	var uLocal_7452 = 0;
	var uLocal_7453 = 0;
	var uLocal_7454 = 0;
	var uLocal_7455 = 0;
	var uLocal_7456 = 0;
	var uLocal_7457 = 3;
	var uLocal_7458 = 0;
	var uLocal_7459 = 0;
	var uLocal_7460 = 0;
	var uLocal_7461 = 0;
	var uLocal_7462 = -1;
	var uLocal_7463 = 0;
	var uLocal_7464 = 5;
	var uLocal_7465 = 0;
	var uLocal_7466 = 0;
	var uLocal_7467 = 0;
	var uLocal_7468 = 0;
	var uLocal_7469 = 0;
	var uLocal_7470 = 0;
	var uLocal_7471 = 0;
	var uLocal_7472 = 0;
	var uLocal_7473 = 0;
	var uLocal_7474 = 0;
	var uLocal_7475 = 10;
	var uLocal_7476 = 3;
	var uLocal_7477 = 500;
	var uLocal_7478 = 10000;
	var uLocal_7479 = 0;
	var uLocal_7480 = 3;
	var uLocal_7481 = 500;
	var uLocal_7482 = 10000;
	var uLocal_7483 = 0;
	var uLocal_7484 = 3;
	var uLocal_7485 = 500;
	var uLocal_7486 = 10000;
	var uLocal_7487 = 0;
	var uLocal_7488 = 3;
	var uLocal_7489 = 500;
	var uLocal_7490 = 10000;
	var uLocal_7491 = 0;
	var uLocal_7492 = 3;
	var uLocal_7493 = 500;
	var uLocal_7494 = 10000;
	var uLocal_7495 = 0;
	var uLocal_7496 = 3;
	var uLocal_7497 = 500;
	var uLocal_7498 = 10000;
	var uLocal_7499 = 0;
	var uLocal_7500 = 3;
	var uLocal_7501 = 500;
	var uLocal_7502 = 10000;
	var uLocal_7503 = 0;
	var uLocal_7504 = 3;
	var uLocal_7505 = 500;
	var uLocal_7506 = 10000;
	var uLocal_7507 = 0;
	var uLocal_7508 = 3;
	var uLocal_7509 = 500;
	var uLocal_7510 = 10000;
	var uLocal_7511 = 0;
	var uLocal_7512 = 3;
	var uLocal_7513 = 500;
	var uLocal_7514 = 10000;
	var uLocal_7515 = 0;
	var uLocal_7516 = 0;
	var uLocal_7517 = 0;
	var uLocal_7518 = 0;
	var uLocal_7519 = 0;
	var uLocal_7520 = 0;
	var uLocal_7521 = 0;
	var uLocal_7522 = 3;
	var uLocal_7523 = 0;
	var uLocal_7524 = 0;
	var uLocal_7525 = 0;
	var uLocal_7526 = 0;
	var uLocal_7527 = -1;
	var uLocal_7528 = 0;
	var uLocal_7529 = 5;
	var uLocal_7530 = 0;
	var uLocal_7531 = 0;
	var uLocal_7532 = 0;
	var uLocal_7533 = 0;
	var uLocal_7534 = 0;
	var uLocal_7535 = 0;
	var uLocal_7536 = 0;
	var uLocal_7537 = 0;
	var uLocal_7538 = 0;
	var uLocal_7539 = 0;
	var uLocal_7540 = 10;
	var uLocal_7541 = 3;
	var uLocal_7542 = 500;
	var uLocal_7543 = 10000;
	var uLocal_7544 = 0;
	var uLocal_7545 = 3;
	var uLocal_7546 = 500;
	var uLocal_7547 = 10000;
	var uLocal_7548 = 0;
	var uLocal_7549 = 3;
	var uLocal_7550 = 500;
	var uLocal_7551 = 10000;
	var uLocal_7552 = 0;
	var uLocal_7553 = 3;
	var uLocal_7554 = 500;
	var uLocal_7555 = 10000;
	var uLocal_7556 = 0;
	var uLocal_7557 = 3;
	var uLocal_7558 = 500;
	var uLocal_7559 = 10000;
	var uLocal_7560 = 0;
	var uLocal_7561 = 3;
	var uLocal_7562 = 500;
	var uLocal_7563 = 10000;
	var uLocal_7564 = 0;
	var uLocal_7565 = 3;
	var uLocal_7566 = 500;
	var uLocal_7567 = 10000;
	var uLocal_7568 = 0;
	var uLocal_7569 = 3;
	var uLocal_7570 = 500;
	var uLocal_7571 = 10000;
	var uLocal_7572 = 0;
	var uLocal_7573 = 3;
	var uLocal_7574 = 500;
	var uLocal_7575 = 10000;
	var uLocal_7576 = 0;
	var uLocal_7577 = 3;
	var uLocal_7578 = 500;
	var uLocal_7579 = 10000;
	var uLocal_7580 = 0;
	var uLocal_7581 = 0;
	var uLocal_7582 = 0;
	var uLocal_7583 = 0;
	var uLocal_7584 = 0;
	var uLocal_7585 = 0;
	var uLocal_7586 = 0;
	var uLocal_7587 = 3;
	var uLocal_7588 = 0;
	var uLocal_7589 = 0;
	var uLocal_7590 = 0;
	var uLocal_7591 = 0;
	var uLocal_7592 = -1;
	var uLocal_7593 = 0;
	var uLocal_7594 = 5;
	var uLocal_7595 = 0;
	var uLocal_7596 = 0;
	var uLocal_7597 = 0;
	var uLocal_7598 = 0;
	var uLocal_7599 = 0;
	var uLocal_7600 = 0;
	var uLocal_7601 = 0;
	var uLocal_7602 = 0;
	var uLocal_7603 = 0;
	var uLocal_7604 = 0;
	var uLocal_7605 = 10;
	var uLocal_7606 = 3;
	var uLocal_7607 = 500;
	var uLocal_7608 = 10000;
	var uLocal_7609 = 0;
	var uLocal_7610 = 3;
	var uLocal_7611 = 500;
	var uLocal_7612 = 10000;
	var uLocal_7613 = 0;
	var uLocal_7614 = 3;
	var uLocal_7615 = 500;
	var uLocal_7616 = 10000;
	var uLocal_7617 = 0;
	var uLocal_7618 = 3;
	var uLocal_7619 = 500;
	var uLocal_7620 = 10000;
	var uLocal_7621 = 0;
	var uLocal_7622 = 3;
	var uLocal_7623 = 500;
	var uLocal_7624 = 10000;
	var uLocal_7625 = 0;
	var uLocal_7626 = 3;
	var uLocal_7627 = 500;
	var uLocal_7628 = 10000;
	var uLocal_7629 = 0;
	var uLocal_7630 = 3;
	var uLocal_7631 = 500;
	var uLocal_7632 = 10000;
	var uLocal_7633 = 0;
	var uLocal_7634 = 3;
	var uLocal_7635 = 500;
	var uLocal_7636 = 10000;
	var uLocal_7637 = 0;
	var uLocal_7638 = 3;
	var uLocal_7639 = 500;
	var uLocal_7640 = 10000;
	var uLocal_7641 = 0;
	var uLocal_7642 = 3;
	var uLocal_7643 = 500;
	var uLocal_7644 = 10000;
	var uLocal_7645 = 0;
	var uLocal_7646 = 0;
	var uLocal_7647 = 0;
	var uLocal_7648 = 0;
	var uLocal_7649 = 0;
	var uLocal_7650 = 0;
	var uLocal_7651 = 0;
	var uLocal_7652 = 3;
	var uLocal_7653 = 0;
	var uLocal_7654 = 0;
	var uLocal_7655 = 0;
	var uLocal_7656 = 0;
	var uLocal_7657 = -1;
	var uLocal_7658 = 0;
	var uLocal_7659 = 5;
	var uLocal_7660 = 0;
	var uLocal_7661 = 0;
	var uLocal_7662 = 0;
	var uLocal_7663 = 0;
	var uLocal_7664 = 0;
	var uLocal_7665 = 0;
	var uLocal_7666 = 0;
	var uLocal_7667 = 0;
	var uLocal_7668 = 0;
	var uLocal_7669 = 0;
	var uLocal_7670 = 10;
	var uLocal_7671 = 3;
	var uLocal_7672 = 500;
	var uLocal_7673 = 10000;
	var uLocal_7674 = 0;
	var uLocal_7675 = 3;
	var uLocal_7676 = 500;
	var uLocal_7677 = 10000;
	var uLocal_7678 = 0;
	var uLocal_7679 = 3;
	var uLocal_7680 = 500;
	var uLocal_7681 = 10000;
	var uLocal_7682 = 0;
	var uLocal_7683 = 3;
	var uLocal_7684 = 500;
	var uLocal_7685 = 10000;
	var uLocal_7686 = 0;
	var uLocal_7687 = 3;
	var uLocal_7688 = 500;
	var uLocal_7689 = 10000;
	var uLocal_7690 = 0;
	var uLocal_7691 = 3;
	var uLocal_7692 = 500;
	var uLocal_7693 = 10000;
	var uLocal_7694 = 0;
	var uLocal_7695 = 3;
	var uLocal_7696 = 500;
	var uLocal_7697 = 10000;
	var uLocal_7698 = 0;
	var uLocal_7699 = 3;
	var uLocal_7700 = 500;
	var uLocal_7701 = 10000;
	var uLocal_7702 = 0;
	var uLocal_7703 = 3;
	var uLocal_7704 = 500;
	var uLocal_7705 = 10000;
	var uLocal_7706 = 0;
	var uLocal_7707 = 3;
	var uLocal_7708 = 500;
	var uLocal_7709 = 10000;
	var uLocal_7710 = 0;
	var uLocal_7711 = 0;
	var uLocal_7712 = 0;
	var uLocal_7713 = 0;
	var uLocal_7714 = 0;
	var uLocal_7715 = 0;
	var uLocal_7716 = 0;
	var uLocal_7717 = 3;
	var uLocal_7718 = 0;
	var uLocal_7719 = 0;
	var uLocal_7720 = 0;
	var uLocal_7721 = 0;
	var uLocal_7722 = -1;
	var uLocal_7723 = 0;
	var uLocal_7724 = 5;
	var uLocal_7725 = 0;
	var uLocal_7726 = 0;
	var uLocal_7727 = 0;
	var uLocal_7728 = 0;
	var uLocal_7729 = 0;
	var uLocal_7730 = 0;
	var uLocal_7731 = 0;
	var uLocal_7732 = 0;
	var uLocal_7733 = 0;
	var uLocal_7734 = 0;
	var uLocal_7735 = 10;
	var uLocal_7736 = 3;
	var uLocal_7737 = 500;
	var uLocal_7738 = 10000;
	var uLocal_7739 = 0;
	var uLocal_7740 = 3;
	var uLocal_7741 = 500;
	var uLocal_7742 = 10000;
	var uLocal_7743 = 0;
	var uLocal_7744 = 3;
	var uLocal_7745 = 500;
	var uLocal_7746 = 10000;
	var uLocal_7747 = 0;
	var uLocal_7748 = 3;
	var uLocal_7749 = 500;
	var uLocal_7750 = 10000;
	var uLocal_7751 = 0;
	var uLocal_7752 = 3;
	var uLocal_7753 = 500;
	var uLocal_7754 = 10000;
	var uLocal_7755 = 0;
	var uLocal_7756 = 3;
	var uLocal_7757 = 500;
	var uLocal_7758 = 10000;
	var uLocal_7759 = 0;
	var uLocal_7760 = 3;
	var uLocal_7761 = 500;
	var uLocal_7762 = 10000;
	var uLocal_7763 = 0;
	var uLocal_7764 = 3;
	var uLocal_7765 = 500;
	var uLocal_7766 = 10000;
	var uLocal_7767 = 0;
	var uLocal_7768 = 3;
	var uLocal_7769 = 500;
	var uLocal_7770 = 10000;
	var uLocal_7771 = 0;
	var uLocal_7772 = 3;
	var uLocal_7773 = 500;
	var uLocal_7774 = 10000;
	var uLocal_7775 = 0;
	var uLocal_7776 = 0;
	var uLocal_7777 = 0;
	var uLocal_7778 = 0;
	var uLocal_7779 = 0;
	var uLocal_7780 = 0;
	var uLocal_7781 = 0;
	var uLocal_7782 = 3;
	var uLocal_7783 = 0;
	var uLocal_7784 = 0;
	var uLocal_7785 = 0;
	var uLocal_7786 = 0;
	var uLocal_7787 = -1;
	var uLocal_7788 = 0;
	var uLocal_7789 = 5;
	var uLocal_7790 = 0;
	var uLocal_7791 = 0;
	var uLocal_7792 = 0;
	var uLocal_7793 = 0;
	var uLocal_7794 = 0;
	var uLocal_7795 = 0;
	var uLocal_7796 = 0;
	var uLocal_7797 = 0;
	var uLocal_7798 = 0;
	var uLocal_7799 = 0;
	var uLocal_7800 = 10;
	var uLocal_7801 = 3;
	var uLocal_7802 = 500;
	var uLocal_7803 = 10000;
	var uLocal_7804 = 0;
	var uLocal_7805 = 3;
	var uLocal_7806 = 500;
	var uLocal_7807 = 10000;
	var uLocal_7808 = 0;
	var uLocal_7809 = 3;
	var uLocal_7810 = 500;
	var uLocal_7811 = 10000;
	var uLocal_7812 = 0;
	var uLocal_7813 = 3;
	var uLocal_7814 = 500;
	var uLocal_7815 = 10000;
	var uLocal_7816 = 0;
	var uLocal_7817 = 3;
	var uLocal_7818 = 500;
	var uLocal_7819 = 10000;
	var uLocal_7820 = 0;
	var uLocal_7821 = 3;
	var uLocal_7822 = 500;
	var uLocal_7823 = 10000;
	var uLocal_7824 = 0;
	var uLocal_7825 = 3;
	var uLocal_7826 = 500;
	var uLocal_7827 = 10000;
	var uLocal_7828 = 0;
	var uLocal_7829 = 3;
	var uLocal_7830 = 500;
	var uLocal_7831 = 10000;
	var uLocal_7832 = 0;
	var uLocal_7833 = 3;
	var uLocal_7834 = 500;
	var uLocal_7835 = 10000;
	var uLocal_7836 = 0;
	var uLocal_7837 = 3;
	var uLocal_7838 = 500;
	var uLocal_7839 = 10000;
	var uLocal_7840 = 0;
	var uLocal_7841 = 0;
	var uLocal_7842 = 0;
	var uLocal_7843 = 0;
	var uLocal_7844 = 0;
	var uLocal_7845 = 0;
	var uLocal_7846 = 0;
	var uLocal_7847 = 3;
	var uLocal_7848 = 0;
	var uLocal_7849 = 0;
	var uLocal_7850 = 0;
	var uLocal_7851 = 0;
	var uLocal_7852 = -1;
	var uLocal_7853 = 0;
	var uLocal_7854 = 5;
	var uLocal_7855 = 0;
	var uLocal_7856 = 0;
	var uLocal_7857 = 0;
	var uLocal_7858 = 0;
	var uLocal_7859 = 0;
	var uLocal_7860 = 0;
	var uLocal_7861 = 0;
	var uLocal_7862 = 0;
	var uLocal_7863 = 0;
	var uLocal_7864 = 0;
	var uLocal_7865 = 10;
	var uLocal_7866 = 3;
	var uLocal_7867 = 500;
	var uLocal_7868 = 10000;
	var uLocal_7869 = 0;
	var uLocal_7870 = 3;
	var uLocal_7871 = 500;
	var uLocal_7872 = 10000;
	var uLocal_7873 = 0;
	var uLocal_7874 = 3;
	var uLocal_7875 = 500;
	var uLocal_7876 = 10000;
	var uLocal_7877 = 0;
	var uLocal_7878 = 3;
	var uLocal_7879 = 500;
	var uLocal_7880 = 10000;
	var uLocal_7881 = 0;
	var uLocal_7882 = 3;
	var uLocal_7883 = 500;
	var uLocal_7884 = 10000;
	var uLocal_7885 = 0;
	var uLocal_7886 = 3;
	var uLocal_7887 = 500;
	var uLocal_7888 = 10000;
	var uLocal_7889 = 0;
	var uLocal_7890 = 3;
	var uLocal_7891 = 500;
	var uLocal_7892 = 10000;
	var uLocal_7893 = 0;
	var uLocal_7894 = 3;
	var uLocal_7895 = 500;
	var uLocal_7896 = 10000;
	var uLocal_7897 = 0;
	var uLocal_7898 = 3;
	var uLocal_7899 = 500;
	var uLocal_7900 = 10000;
	var uLocal_7901 = 0;
	var uLocal_7902 = 3;
	var uLocal_7903 = 500;
	var uLocal_7904 = 10000;
	var uLocal_7905 = 0;
	var uLocal_7906 = 0;
	var uLocal_7907 = 0;
	var uLocal_7908 = 1;
	var uLocal_7909 = 0;
	var uLocal_7910 = 0;
	var uLocal_7911 = 0;
	var uLocal_7912 = 0;
	var uLocal_7913 = 0;
	var uLocal_7914 = 0;
	var uLocal_7915 = 0;
	var uLocal_7916 = 0;
	var uLocal_7917 = 0;
	var uLocal_7918 = 0;
	var uLocal_7919 = 0;
	var uLocal_7920 = 0;
	var uLocal_7921 = 65;
	var uLocal_7922 = 0;
	var uLocal_7923 = 0;
	var uLocal_7924 = 0;
	var uLocal_7925 = 0;
	var uLocal_7926 = 0;
	var uLocal_7927 = 0;
	var uLocal_7928 = 0;
	var uLocal_7929 = 0;
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
	var uLocal_7940 = 0;
	var uLocal_7941 = 0;
	var uLocal_7942 = 0;
	var uLocal_7943 = 0;
	var uLocal_7944 = 0;
	var uLocal_7945 = 0;
	var uLocal_7946 = 0;
	var uLocal_7947 = 0;
	var uLocal_7948 = 0;
	var uLocal_7949 = 0;
	var uLocal_7950 = 0;
	var uLocal_7951 = 0;
	var uLocal_7952 = 0;
	var uLocal_7953 = 0;
	var uLocal_7954 = 0;
	var uLocal_7955 = 0;
	var uLocal_7956 = 0;
	var uLocal_7957 = 0;
	var uLocal_7958 = 0;
	var uLocal_7959 = 0;
	var uLocal_7960 = 0;
	var uLocal_7961 = 0;
	var uLocal_7962 = 0;
	var uLocal_7963 = 0;
	var uLocal_7964 = 0;
	var uLocal_7965 = 0;
	var uLocal_7966 = 0;
	var uLocal_7967 = 0;
	var uLocal_7968 = 0;
	var uLocal_7969 = 0;
	var uLocal_7970 = 0;
	var uLocal_7971 = 0;
	var uLocal_7972 = 0;
	var uLocal_7973 = 0;
	var uLocal_7974 = 0;
	var uLocal_7975 = 0;
	var uLocal_7976 = 0;
	var uLocal_7977 = 0;
	var uLocal_7978 = 0;
	var uLocal_7979 = 0;
	var uLocal_7980 = 0;
	var uLocal_7981 = 0;
	var uLocal_7982 = 0;
	var uLocal_7983 = 0;
	var uLocal_7984 = 0;
	var uLocal_7985 = 0;
	var uLocal_7986 = 0;
	var uLocal_7987 = 0;
	var uLocal_7988 = 0;
	var uLocal_7989 = 0;
	var uLocal_7990 = 0;
	var uLocal_7991 = 0;
	var uLocal_7992 = 0;
	var uLocal_7993 = 0;
	var uLocal_7994 = 0;
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
	var uLocal_8005 = 0;
	var uLocal_8006 = 0;
	var uLocal_8007 = 0;
	var uLocal_8008 = 0;
	var uLocal_8009 = 0;
	var uLocal_8010 = 0;
	var uLocal_8011 = 0;
	var uLocal_8012 = 0;
	var uLocal_8013 = 0;
	var uLocal_8014 = 0;
	var uLocal_8015 = 0;
	var uLocal_8016 = 0;
	var uLocal_8017 = 0;
	var uLocal_8018 = 0;
	var uLocal_8019 = 0;
	var uLocal_8020 = 0;
	var uLocal_8021 = 0;
	var uLocal_8022 = 0;
	var uLocal_8023 = 0;
	var uLocal_8024 = 0;
	var uLocal_8025 = 0;
	var uLocal_8026 = 0;
	var uLocal_8027 = 0;
	var uLocal_8028 = 0;
	var uLocal_8029 = 0;
	var uLocal_8030 = 0;
	var uLocal_8031 = 0;
	var uLocal_8032 = 0;
	var uLocal_8033 = 0;
	var uLocal_8034 = 0;
	var uLocal_8035 = 0;
	var uLocal_8036 = 0;
	var uLocal_8037 = 0;
	var uLocal_8038 = 0;
	var uLocal_8039 = 0;
	var uLocal_8040 = 0;
	var uLocal_8041 = 0;
	var uLocal_8042 = 0;
	var uLocal_8043 = 0;
	var uLocal_8044 = 0;
	var uLocal_8045 = 0;
	var uLocal_8046 = 0;
	var uLocal_8047 = 0;
	var uLocal_8048 = 0;
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
	var uLocal_8061 = 0;
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
	var uLocal_8702 = 1097859072;
	var uLocal_8703 = 1101004800;
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
	var uLocal_8730 = 4;
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
	var uLocal_8802 = 40;
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
	var uLocal_8842 = 0;
	var uLocal_8843 = 0;
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
	var uLocal_8870 = 0;
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
	var uLocal_8942 = 0;
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
	var uLocal_9443 = 40;
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
	var uLocal_9583 = 0;
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
	var uLocal_10084 = 60;
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
	var uLocal_10224 = 0;
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
	var uLocal_11045 = 15;
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
	var uLocal_11185 = 0;
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
	var uLocal_11286 = 10;
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
	var uLocal_11316 = -1;
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
	var uLocal_11328 = 65;
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
	var uLocal_11339 = -1569615261;
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
	var uLocal_11352 = -1569615261;
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
	var uLocal_11365 = -1569615261;
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
	var uLocal_11378 = -1569615261;
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
	var uLocal_11391 = -1569615261;
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
	var uLocal_11404 = -1569615261;
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
	var uLocal_11417 = -1569615261;
	var uLocal_11418 = 0;
	var uLocal_11419 = 0;
	var uLocal_11420 = 0;
	var uLocal_11421 = 0;
	var uLocal_11422 = 0;
	var uLocal_11423 = 0;
	var uLocal_11424 = 0;
	var uLocal_11425 = 0;
	var uLocal_11426 = 0;
	var uLocal_11427 = 0;
	var uLocal_11428 = 0;
	var uLocal_11429 = 0;
	var uLocal_11430 = -1569615261;
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
	var uLocal_11443 = -1569615261;
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
	var uLocal_11456 = -1569615261;
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
	var uLocal_11468 = 0;
	var uLocal_11469 = -1569615261;
	var uLocal_11470 = 0;
	var uLocal_11471 = 0;
	var uLocal_11472 = 0;
	var uLocal_11473 = 0;
	var uLocal_11474 = 0;
	var uLocal_11475 = 0;
	var uLocal_11476 = 0;
	var uLocal_11477 = 0;
	var uLocal_11478 = 0;
	var uLocal_11479 = 0;
	var uLocal_11480 = 0;
	var uLocal_11481 = 0;
	var uLocal_11482 = -1569615261;
	var uLocal_11483 = 0;
	var uLocal_11484 = 0;
	var uLocal_11485 = 0;
	var uLocal_11486 = 0;
	var uLocal_11487 = 0;
	var uLocal_11488 = 0;
	var uLocal_11489 = 0;
	var uLocal_11490 = 0;
	var uLocal_11491 = 0;
	var uLocal_11492 = 0;
	var uLocal_11493 = 0;
	var uLocal_11494 = 0;
	var uLocal_11495 = -1569615261;
	var uLocal_11496 = 0;
	var uLocal_11497 = 0;
	var uLocal_11498 = 0;
	var uLocal_11499 = 0;
	var uLocal_11500 = 0;
	var uLocal_11501 = 0;
	var uLocal_11502 = 0;
	var uLocal_11503 = 0;
	var uLocal_11504 = 0;
	var uLocal_11505 = 0;
	var uLocal_11506 = 0;
	var uLocal_11507 = 0;
	var uLocal_11508 = -1569615261;
	var uLocal_11509 = 0;
	var uLocal_11510 = 0;
	var uLocal_11511 = 0;
	var uLocal_11512 = 0;
	var uLocal_11513 = 0;
	var uLocal_11514 = 0;
	var uLocal_11515 = 0;
	var uLocal_11516 = 0;
	var uLocal_11517 = 0;
	var uLocal_11518 = 0;
	var uLocal_11519 = 0;
	var uLocal_11520 = 0;
	var uLocal_11521 = -1569615261;
	var uLocal_11522 = 0;
	var uLocal_11523 = 0;
	var uLocal_11524 = 0;
	var uLocal_11525 = 0;
	var uLocal_11526 = 0;
	var uLocal_11527 = 0;
	var uLocal_11528 = 0;
	var uLocal_11529 = 0;
	var uLocal_11530 = 0;
	var uLocal_11531 = 0;
	var uLocal_11532 = 0;
	var uLocal_11533 = 0;
	var uLocal_11534 = -1569615261;
	var uLocal_11535 = 0;
	var uLocal_11536 = 0;
	var uLocal_11537 = 0;
	var uLocal_11538 = 0;
	var uLocal_11539 = 0;
	var uLocal_11540 = 0;
	var uLocal_11541 = 0;
	var uLocal_11542 = 0;
	var uLocal_11543 = 0;
	var uLocal_11544 = 0;
	var uLocal_11545 = 0;
	var uLocal_11546 = 0;
	var uLocal_11547 = -1569615261;
	var uLocal_11548 = 0;
	var uLocal_11549 = 0;
	var uLocal_11550 = 0;
	var uLocal_11551 = 0;
	var uLocal_11552 = 0;
	var uLocal_11553 = 0;
	var uLocal_11554 = 0;
	var uLocal_11555 = 0;
	var uLocal_11556 = 0;
	var uLocal_11557 = 0;
	var uLocal_11558 = 0;
	var uLocal_11559 = 0;
	var uLocal_11560 = -1569615261;
	var uLocal_11561 = 0;
	var uLocal_11562 = 0;
	var uLocal_11563 = 0;
	var uLocal_11564 = 0;
	var uLocal_11565 = 0;
	var uLocal_11566 = 0;
	var uLocal_11567 = 0;
	var uLocal_11568 = 0;
	var uLocal_11569 = 0;
	var uLocal_11570 = 0;
	var uLocal_11571 = 0;
	var uLocal_11572 = 0;
	var uLocal_11573 = -1569615261;
	var uLocal_11574 = 0;
	var uLocal_11575 = 0;
	var uLocal_11576 = 0;
	var uLocal_11577 = 0;
	var uLocal_11578 = 0;
	var uLocal_11579 = 0;
	var uLocal_11580 = 0;
	var uLocal_11581 = 0;
	var uLocal_11582 = 0;
	var uLocal_11583 = 0;
	var uLocal_11584 = 0;
	var uLocal_11585 = 0;
	var uLocal_11586 = -1569615261;
	var uLocal_11587 = 0;
	var uLocal_11588 = 0;
	var uLocal_11589 = 0;
	var uLocal_11590 = 0;
	var uLocal_11591 = 0;
	var uLocal_11592 = 0;
	var uLocal_11593 = 0;
	var uLocal_11594 = 0;
	var uLocal_11595 = 0;
	var uLocal_11596 = 0;
	var uLocal_11597 = 0;
	var uLocal_11598 = 0;
	var uLocal_11599 = -1569615261;
	var uLocal_11600 = 0;
	var uLocal_11601 = 0;
	var uLocal_11602 = 0;
	var uLocal_11603 = 0;
	var uLocal_11604 = 0;
	var uLocal_11605 = 0;
	var uLocal_11606 = 0;
	var uLocal_11607 = 0;
	var uLocal_11608 = 0;
	var uLocal_11609 = 0;
	var uLocal_11610 = 0;
	var uLocal_11611 = 0;
	var uLocal_11612 = -1569615261;
	var uLocal_11613 = 0;
	var uLocal_11614 = 0;
	var uLocal_11615 = 0;
	var uLocal_11616 = 0;
	var uLocal_11617 = 0;
	var uLocal_11618 = 0;
	var uLocal_11619 = 0;
	var uLocal_11620 = 0;
	var uLocal_11621 = 0;
	var uLocal_11622 = 0;
	var uLocal_11623 = 0;
	var uLocal_11624 = 0;
	var uLocal_11625 = -1569615261;
	var uLocal_11626 = 0;
	var uLocal_11627 = 0;
	var uLocal_11628 = 0;
	var uLocal_11629 = 0;
	var uLocal_11630 = 0;
	var uLocal_11631 = 0;
	var uLocal_11632 = 0;
	var uLocal_11633 = 0;
	var uLocal_11634 = 0;
	var uLocal_11635 = 0;
	var uLocal_11636 = 0;
	var uLocal_11637 = 0;
	var uLocal_11638 = -1569615261;
	var uLocal_11639 = 0;
	var uLocal_11640 = 0;
	var uLocal_11641 = 0;
	var uLocal_11642 = 0;
	var uLocal_11643 = 0;
	var uLocal_11644 = 0;
	var uLocal_11645 = 0;
	var uLocal_11646 = 0;
	var uLocal_11647 = 0;
	var uLocal_11648 = 0;
	var uLocal_11649 = 0;
	var uLocal_11650 = 0;
	var uLocal_11651 = -1569615261;
	var uLocal_11652 = 0;
	var uLocal_11653 = 0;
	var uLocal_11654 = 0;
	var uLocal_11655 = 0;
	var uLocal_11656 = 0;
	var uLocal_11657 = 0;
	var uLocal_11658 = 0;
	var uLocal_11659 = 0;
	var uLocal_11660 = 0;
	var uLocal_11661 = 0;
	var uLocal_11662 = 0;
	var uLocal_11663 = 0;
	var uLocal_11664 = -1569615261;
	var uLocal_11665 = 0;
	var uLocal_11666 = 0;
	var uLocal_11667 = 0;
	var uLocal_11668 = 0;
	var uLocal_11669 = 0;
	var uLocal_11670 = 0;
	var uLocal_11671 = 0;
	var uLocal_11672 = 0;
	var uLocal_11673 = 0;
	var uLocal_11674 = 0;
	var uLocal_11675 = 0;
	var uLocal_11676 = 0;
	var uLocal_11677 = -1569615261;
	var uLocal_11678 = 0;
	var uLocal_11679 = 0;
	var uLocal_11680 = 0;
	var uLocal_11681 = 0;
	var uLocal_11682 = 0;
	var uLocal_11683 = 0;
	var uLocal_11684 = 0;
	var uLocal_11685 = 0;
	var uLocal_11686 = 0;
	var uLocal_11687 = 0;
	var uLocal_11688 = 0;
	var uLocal_11689 = 0;
	var uLocal_11690 = -1569615261;
	var uLocal_11691 = 0;
	var uLocal_11692 = 0;
	var uLocal_11693 = 0;
	var uLocal_11694 = 0;
	var uLocal_11695 = 0;
	var uLocal_11696 = 0;
	var uLocal_11697 = 0;
	var uLocal_11698 = 0;
	var uLocal_11699 = 0;
	var uLocal_11700 = 0;
	var uLocal_11701 = 0;
	var uLocal_11702 = 0;
	var uLocal_11703 = -1569615261;
	var uLocal_11704 = 0;
	var uLocal_11705 = 0;
	var uLocal_11706 = 0;
	var uLocal_11707 = 0;
	var uLocal_11708 = 0;
	var uLocal_11709 = 0;
	var uLocal_11710 = 0;
	var uLocal_11711 = 0;
	var uLocal_11712 = 0;
	var uLocal_11713 = 0;
	var uLocal_11714 = 0;
	var uLocal_11715 = 0;
	var uLocal_11716 = -1569615261;
	var uLocal_11717 = 0;
	var uLocal_11718 = 0;
	var uLocal_11719 = 0;
	var uLocal_11720 = 0;
	var uLocal_11721 = 0;
	var uLocal_11722 = 0;
	var uLocal_11723 = 0;
	var uLocal_11724 = 0;
	var uLocal_11725 = 0;
	var uLocal_11726 = 0;
	var uLocal_11727 = 0;
	var uLocal_11728 = 0;
	var uLocal_11729 = -1569615261;
	var uLocal_11730 = 0;
	var uLocal_11731 = 0;
	var uLocal_11732 = 0;
	var uLocal_11733 = 0;
	var uLocal_11734 = 0;
	var uLocal_11735 = 0;
	var uLocal_11736 = 0;
	var uLocal_11737 = 0;
	var uLocal_11738 = 0;
	var uLocal_11739 = 0;
	var uLocal_11740 = 0;
	var uLocal_11741 = 0;
	var uLocal_11742 = -1569615261;
	var uLocal_11743 = 0;
	var uLocal_11744 = 0;
	var uLocal_11745 = 0;
	var uLocal_11746 = 0;
	var uLocal_11747 = 0;
	var uLocal_11748 = 0;
	var uLocal_11749 = 0;
	var uLocal_11750 = 0;
	var uLocal_11751 = 0;
	var uLocal_11752 = 0;
	var uLocal_11753 = 0;
	var uLocal_11754 = 0;
	var uLocal_11755 = -1569615261;
	var uLocal_11756 = 0;
	var uLocal_11757 = 0;
	var uLocal_11758 = 0;
	var uLocal_11759 = 0;
	var uLocal_11760 = 0;
	var uLocal_11761 = 0;
	var uLocal_11762 = 0;
	var uLocal_11763 = 0;
	var uLocal_11764 = 0;
	var uLocal_11765 = 0;
	var uLocal_11766 = 0;
	var uLocal_11767 = 0;
	var uLocal_11768 = -1569615261;
	var uLocal_11769 = 0;
	var uLocal_11770 = 0;
	var uLocal_11771 = 0;
	var uLocal_11772 = 0;
	var uLocal_11773 = 0;
	var uLocal_11774 = 0;
	var uLocal_11775 = 0;
	var uLocal_11776 = 0;
	var uLocal_11777 = 0;
	var uLocal_11778 = 0;
	var uLocal_11779 = 0;
	var uLocal_11780 = 0;
	var uLocal_11781 = -1569615261;
	var uLocal_11782 = 0;
	var uLocal_11783 = 0;
	var uLocal_11784 = 0;
	var uLocal_11785 = 0;
	var uLocal_11786 = 0;
	var uLocal_11787 = 0;
	var uLocal_11788 = 0;
	var uLocal_11789 = 0;
	var uLocal_11790 = 0;
	var uLocal_11791 = 0;
	var uLocal_11792 = 0;
	var uLocal_11793 = 0;
	var uLocal_11794 = -1569615261;
	var uLocal_11795 = 0;
	var uLocal_11796 = 0;
	var uLocal_11797 = 0;
	var uLocal_11798 = 0;
	var uLocal_11799 = 0;
	var uLocal_11800 = 0;
	var uLocal_11801 = 0;
	var uLocal_11802 = 0;
	var uLocal_11803 = 0;
	var uLocal_11804 = 0;
	var uLocal_11805 = 0;
	var uLocal_11806 = 0;
	var uLocal_11807 = -1569615261;
	var uLocal_11808 = 0;
	var uLocal_11809 = 0;
	var uLocal_11810 = 0;
	var uLocal_11811 = 0;
	var uLocal_11812 = 0;
	var uLocal_11813 = 0;
	var uLocal_11814 = 0;
	var uLocal_11815 = 0;
	var uLocal_11816 = 0;
	var uLocal_11817 = 0;
	var uLocal_11818 = 0;
	var uLocal_11819 = 0;
	var uLocal_11820 = -1569615261;
	var uLocal_11821 = 0;
	var uLocal_11822 = 0;
	var uLocal_11823 = 0;
	var uLocal_11824 = 0;
	var uLocal_11825 = 0;
	var uLocal_11826 = 0;
	var uLocal_11827 = 0;
	var uLocal_11828 = 0;
	var uLocal_11829 = 0;
	var uLocal_11830 = 0;
	var uLocal_11831 = 0;
	var uLocal_11832 = 0;
	var uLocal_11833 = -1569615261;
	var uLocal_11834 = 0;
	var uLocal_11835 = 0;
	var uLocal_11836 = 0;
	var uLocal_11837 = 0;
	var uLocal_11838 = 0;
	var uLocal_11839 = 0;
	var uLocal_11840 = 0;
	var uLocal_11841 = 0;
	var uLocal_11842 = 0;
	var uLocal_11843 = 0;
	var uLocal_11844 = 0;
	var uLocal_11845 = 0;
	var uLocal_11846 = -1569615261;
	var uLocal_11847 = 0;
	var uLocal_11848 = 0;
	var uLocal_11849 = 0;
	var uLocal_11850 = 0;
	var uLocal_11851 = 0;
	var uLocal_11852 = 0;
	var uLocal_11853 = 0;
	var uLocal_11854 = 0;
	var uLocal_11855 = 0;
	var uLocal_11856 = 0;
	var uLocal_11857 = 0;
	var uLocal_11858 = 0;
	var uLocal_11859 = -1569615261;
	var uLocal_11860 = 0;
	var uLocal_11861 = 0;
	var uLocal_11862 = 0;
	var uLocal_11863 = 0;
	var uLocal_11864 = 0;
	var uLocal_11865 = 0;
	var uLocal_11866 = 0;
	var uLocal_11867 = 0;
	var uLocal_11868 = 0;
	var uLocal_11869 = 0;
	var uLocal_11870 = 0;
	var uLocal_11871 = 0;
	var uLocal_11872 = -1569615261;
	var uLocal_11873 = 0;
	var uLocal_11874 = 0;
	var uLocal_11875 = 0;
	var uLocal_11876 = 0;
	var uLocal_11877 = 0;
	var uLocal_11878 = 0;
	var uLocal_11879 = 0;
	var uLocal_11880 = 0;
	var uLocal_11881 = 0;
	var uLocal_11882 = 0;
	var uLocal_11883 = 0;
	var uLocal_11884 = 0;
	var uLocal_11885 = -1569615261;
	var uLocal_11886 = 0;
	var uLocal_11887 = 0;
	var uLocal_11888 = 0;
	var uLocal_11889 = 0;
	var uLocal_11890 = 0;
	var uLocal_11891 = 0;
	var uLocal_11892 = 0;
	var uLocal_11893 = 0;
	var uLocal_11894 = 0;
	var uLocal_11895 = 0;
	var uLocal_11896 = 0;
	var uLocal_11897 = 0;
	var uLocal_11898 = -1569615261;
	var uLocal_11899 = 0;
	var uLocal_11900 = 0;
	var uLocal_11901 = 0;
	var uLocal_11902 = 0;
	var uLocal_11903 = 0;
	var uLocal_11904 = 0;
	var uLocal_11905 = 0;
	var uLocal_11906 = 0;
	var uLocal_11907 = 0;
	var uLocal_11908 = 0;
	var uLocal_11909 = 0;
	var uLocal_11910 = 0;
	var uLocal_11911 = -1569615261;
	var uLocal_11912 = 0;
	var uLocal_11913 = 0;
	var uLocal_11914 = 0;
	var uLocal_11915 = 0;
	var uLocal_11916 = 0;
	var uLocal_11917 = 0;
	var uLocal_11918 = 0;
	var uLocal_11919 = 0;
	var uLocal_11920 = 0;
	var uLocal_11921 = 0;
	var uLocal_11922 = 0;
	var uLocal_11923 = 0;
	var uLocal_11924 = -1569615261;
	var uLocal_11925 = 0;
	var uLocal_11926 = 0;
	var uLocal_11927 = 0;
	var uLocal_11928 = 0;
	var uLocal_11929 = 0;
	var uLocal_11930 = 0;
	var uLocal_11931 = 0;
	var uLocal_11932 = 0;
	var uLocal_11933 = 0;
	var uLocal_11934 = 0;
	var uLocal_11935 = 0;
	var uLocal_11936 = 0;
	var uLocal_11937 = -1569615261;
	var uLocal_11938 = 0;
	var uLocal_11939 = 0;
	var uLocal_11940 = 0;
	var uLocal_11941 = 0;
	var uLocal_11942 = 0;
	var uLocal_11943 = 0;
	var uLocal_11944 = 0;
	var uLocal_11945 = 0;
	var uLocal_11946 = 0;
	var uLocal_11947 = 0;
	var uLocal_11948 = 0;
	var uLocal_11949 = 0;
	var uLocal_11950 = -1569615261;
	var uLocal_11951 = 0;
	var uLocal_11952 = 0;
	var uLocal_11953 = 0;
	var uLocal_11954 = 0;
	var uLocal_11955 = 0;
	var uLocal_11956 = 0;
	var uLocal_11957 = 0;
	var uLocal_11958 = 0;
	var uLocal_11959 = 0;
	var uLocal_11960 = 0;
	var uLocal_11961 = 0;
	var uLocal_11962 = 0;
	var uLocal_11963 = -1569615261;
	var uLocal_11964 = 0;
	var uLocal_11965 = 0;
	var uLocal_11966 = 0;
	var uLocal_11967 = 0;
	var uLocal_11968 = 0;
	var uLocal_11969 = 0;
	var uLocal_11970 = 0;
	var uLocal_11971 = 0;
	var uLocal_11972 = 0;
	var uLocal_11973 = 0;
	var uLocal_11974 = 0;
	var uLocal_11975 = 0;
	var uLocal_11976 = -1569615261;
	var uLocal_11977 = 0;
	var uLocal_11978 = 0;
	var uLocal_11979 = 0;
	var uLocal_11980 = 0;
	var uLocal_11981 = 0;
	var uLocal_11982 = 0;
	var uLocal_11983 = 0;
	var uLocal_11984 = 0;
	var uLocal_11985 = 0;
	var uLocal_11986 = 0;
	var uLocal_11987 = 0;
	var uLocal_11988 = 0;
	var uLocal_11989 = -1569615261;
	var uLocal_11990 = 0;
	var uLocal_11991 = 0;
	var uLocal_11992 = 0;
	var uLocal_11993 = 0;
	var uLocal_11994 = 0;
	var uLocal_11995 = 0;
	var uLocal_11996 = 0;
	var uLocal_11997 = 0;
	var uLocal_11998 = 0;
	var uLocal_11999 = 0;
	var uLocal_12000 = 0;
	var uLocal_12001 = 0;
	var uLocal_12002 = -1569615261;
	var uLocal_12003 = 0;
	var uLocal_12004 = 0;
	var uLocal_12005 = 0;
	var uLocal_12006 = 0;
	var uLocal_12007 = 0;
	var uLocal_12008 = 0;
	var uLocal_12009 = 0;
	var uLocal_12010 = 0;
	var uLocal_12011 = 0;
	var uLocal_12012 = 0;
	var uLocal_12013 = 0;
	var uLocal_12014 = 0;
	var uLocal_12015 = -1569615261;
	var uLocal_12016 = 0;
	var uLocal_12017 = 0;
	var uLocal_12018 = 0;
	var uLocal_12019 = 0;
	var uLocal_12020 = 0;
	var uLocal_12021 = 0;
	var uLocal_12022 = 0;
	var uLocal_12023 = 0;
	var uLocal_12024 = 0;
	var uLocal_12025 = 0;
	var uLocal_12026 = 0;
	var uLocal_12027 = 0;
	var uLocal_12028 = -1569615261;
	var uLocal_12029 = 0;
	var uLocal_12030 = 0;
	var uLocal_12031 = 0;
	var uLocal_12032 = 0;
	var uLocal_12033 = 0;
	var uLocal_12034 = 0;
	var uLocal_12035 = 0;
	var uLocal_12036 = 0;
	var uLocal_12037 = 0;
	var uLocal_12038 = 0;
	var uLocal_12039 = 0;
	var uLocal_12040 = 0;
	var uLocal_12041 = -1569615261;
	var uLocal_12042 = 0;
	var uLocal_12043 = 0;
	var uLocal_12044 = 0;
	var uLocal_12045 = 0;
	var uLocal_12046 = 0;
	var uLocal_12047 = 0;
	var uLocal_12048 = 0;
	var uLocal_12049 = 0;
	var uLocal_12050 = 0;
	var uLocal_12051 = 0;
	var uLocal_12052 = 0;
	var uLocal_12053 = 0;
	var uLocal_12054 = -1569615261;
	var uLocal_12055 = 0;
	var uLocal_12056 = 0;
	var uLocal_12057 = 0;
	var uLocal_12058 = 0;
	var uLocal_12059 = 0;
	var uLocal_12060 = 0;
	var uLocal_12061 = 0;
	var uLocal_12062 = 0;
	var uLocal_12063 = 0;
	var uLocal_12064 = 0;
	var uLocal_12065 = 0;
	var uLocal_12066 = 0;
	var uLocal_12067 = -1569615261;
	var uLocal_12068 = 0;
	var uLocal_12069 = 0;
	var uLocal_12070 = 0;
	var uLocal_12071 = 0;
	var uLocal_12072 = 0;
	var uLocal_12073 = 0;
	var uLocal_12074 = 0;
	var uLocal_12075 = 0;
	var uLocal_12076 = 0;
	var uLocal_12077 = 0;
	var uLocal_12078 = 0;
	var uLocal_12079 = 0;
	var uLocal_12080 = -1569615261;
	var uLocal_12081 = 0;
	var uLocal_12082 = 0;
	var uLocal_12083 = 0;
	var uLocal_12084 = 0;
	var uLocal_12085 = 0;
	var uLocal_12086 = 0;
	var uLocal_12087 = 0;
	var uLocal_12088 = 0;
	var uLocal_12089 = 0;
	var uLocal_12090 = 0;
	var uLocal_12091 = 0;
	var uLocal_12092 = 0;
	var uLocal_12093 = -1569615261;
	var uLocal_12094 = 0;
	var uLocal_12095 = 0;
	var uLocal_12096 = 0;
	var uLocal_12097 = 0;
	var uLocal_12098 = 0;
	var uLocal_12099 = 0;
	var uLocal_12100 = 0;
	var uLocal_12101 = 0;
	var uLocal_12102 = 0;
	var uLocal_12103 = 0;
	var uLocal_12104 = 0;
	var uLocal_12105 = 0;
	var uLocal_12106 = -1569615261;
	var uLocal_12107 = 0;
	var uLocal_12108 = 0;
	var uLocal_12109 = 0;
	var uLocal_12110 = 0;
	var uLocal_12111 = 0;
	var uLocal_12112 = 0;
	var uLocal_12113 = 0;
	var uLocal_12114 = 0;
	var uLocal_12115 = 0;
	var uLocal_12116 = 0;
	var uLocal_12117 = 0;
	var uLocal_12118 = 0;
	var uLocal_12119 = -1569615261;
	var uLocal_12120 = 0;
	var uLocal_12121 = 0;
	var uLocal_12122 = 0;
	var uLocal_12123 = 0;
	var uLocal_12124 = 0;
	var uLocal_12125 = 0;
	var uLocal_12126 = 0;
	var uLocal_12127 = 0;
	var uLocal_12128 = 0;
	var uLocal_12129 = 0;
	var uLocal_12130 = 0;
	var uLocal_12131 = 0;
	var uLocal_12132 = -1569615261;
	var uLocal_12133 = 0;
	var uLocal_12134 = 0;
	var uLocal_12135 = 0;
	var uLocal_12136 = 0;
	var uLocal_12137 = 0;
	var uLocal_12138 = 0;
	var uLocal_12139 = 0;
	var uLocal_12140 = 0;
	var uLocal_12141 = 0;
	var uLocal_12142 = 0;
	var uLocal_12143 = 0;
	var uLocal_12144 = 0;
	var uLocal_12145 = -1569615261;
	var uLocal_12146 = 0;
	var uLocal_12147 = 0;
	var uLocal_12148 = 0;
	var uLocal_12149 = 0;
	var uLocal_12150 = 0;
	var uLocal_12151 = 0;
	var uLocal_12152 = 0;
	var uLocal_12153 = 0;
	var uLocal_12154 = 0;
	var uLocal_12155 = 0;
	var uLocal_12156 = 0;
	var uLocal_12157 = 0;
	var uLocal_12158 = -1569615261;
	var uLocal_12159 = 0;
	var uLocal_12160 = 0;
	var uLocal_12161 = 0;
	var uLocal_12162 = 0;
	var uLocal_12163 = 0;
	var uLocal_12164 = 0;
	var uLocal_12165 = 0;
	var uLocal_12166 = 0;
	var uLocal_12167 = 0;
	var uLocal_12168 = 0;
	var uLocal_12169 = 0;
	var uLocal_12170 = 0;
	var uLocal_12171 = -1569615261;
	var uLocal_12172 = 0;
	var uLocal_12173 = 0;
	var uLocal_12174 = 0;
	var uLocal_12175 = 0;
	var uLocal_12176 = 0;
	var uLocal_12177 = 0;
	var uLocal_12178 = 0;
	var uLocal_12179 = 0;
	var uLocal_12180 = 0;
	var uLocal_12181 = 0;
	var uLocal_12182 = 0;
	var uLocal_12183 = 0;
	var uLocal_12184 = 0;
	var uLocal_12185 = 0;
	var uLocal_12186 = 0;
	var uLocal_12187 = 0;
	var uLocal_12188 = 0;
	var uLocal_12189 = 1;
	var uLocal_12190 = 30;
	var uLocal_12191 = -1;
	var uLocal_12192 = 0;
	var uLocal_12193 = 1;
	var uLocal_12194 = 0;
	var uLocal_12195 = 0;
	var uLocal_12196 = 0;
	var uLocal_12197 = 0;
	var uLocal_12198 = 0;
	var uLocal_12199 = 0;
	var uLocal_12200 = 0;
	var uLocal_12201 = 0;
	var uLocal_12202 = 0;
	var uLocal_12203 = 1065353216;
	var uLocal_12204 = 0;
	var uLocal_12205 = 0;
	var uLocal_12206 = 1065353216;
	var uLocal_12207 = 1;
	var uLocal_12208 = 0;
	var uLocal_12209 = -1;
	var uLocal_12210 = 0;
	var uLocal_12211 = 1;
	var uLocal_12212 = 0;
	var uLocal_12213 = 0;
	var uLocal_12214 = 0;
	var uLocal_12215 = 0;
	var uLocal_12216 = 0;
	var uLocal_12217 = 0;
	var uLocal_12218 = 0;
	var uLocal_12219 = 0;
	var uLocal_12220 = 0;
	var uLocal_12221 = 1065353216;
	var uLocal_12222 = 0;
	var uLocal_12223 = 0;
	var uLocal_12224 = 1065353216;
	var uLocal_12225 = 1;
	var uLocal_12226 = 0;
	var uLocal_12227 = -1;
	var uLocal_12228 = 0;
	var uLocal_12229 = 1;
	var uLocal_12230 = 0;
	var uLocal_12231 = 0;
	var uLocal_12232 = 0;
	var uLocal_12233 = 0;
	var uLocal_12234 = 0;
	var uLocal_12235 = 0;
	var uLocal_12236 = 0;
	var uLocal_12237 = 0;
	var uLocal_12238 = 0;
	var uLocal_12239 = 1065353216;
	var uLocal_12240 = 0;
	var uLocal_12241 = 0;
	var uLocal_12242 = 1065353216;
	var uLocal_12243 = 1;
	var uLocal_12244 = 0;
	var uLocal_12245 = -1;
	var uLocal_12246 = 0;
	var uLocal_12247 = 1;
	var uLocal_12248 = 0;
	var uLocal_12249 = 0;
	var uLocal_12250 = 0;
	var uLocal_12251 = 0;
	var uLocal_12252 = 0;
	var uLocal_12253 = 0;
	var uLocal_12254 = 0;
	var uLocal_12255 = 0;
	var uLocal_12256 = 0;
	var uLocal_12257 = 1065353216;
	var uLocal_12258 = 0;
	var uLocal_12259 = 0;
	var uLocal_12260 = 1065353216;
	var uLocal_12261 = 1;
	var uLocal_12262 = 0;
	var uLocal_12263 = -1;
	var uLocal_12264 = 0;
	var uLocal_12265 = 1;
	var uLocal_12266 = 0;
	var uLocal_12267 = 0;
	var uLocal_12268 = 0;
	var uLocal_12269 = 0;
	var uLocal_12270 = 0;
	var uLocal_12271 = 0;
	var uLocal_12272 = 0;
	var uLocal_12273 = 0;
	var uLocal_12274 = 0;
	var uLocal_12275 = 1065353216;
	var uLocal_12276 = 0;
	var uLocal_12277 = 0;
	var uLocal_12278 = 1065353216;
	var uLocal_12279 = 1;
	var uLocal_12280 = 0;
	var uLocal_12281 = -1;
	var uLocal_12282 = 0;
	var uLocal_12283 = 1;
	var uLocal_12284 = 0;
	var uLocal_12285 = 0;
	var uLocal_12286 = 0;
	var uLocal_12287 = 0;
	var uLocal_12288 = 0;
	var uLocal_12289 = 0;
	var uLocal_12290 = 0;
	var uLocal_12291 = 0;
	var uLocal_12292 = 0;
	var uLocal_12293 = 1065353216;
	var uLocal_12294 = 0;
	var uLocal_12295 = 0;
	var uLocal_12296 = 1065353216;
	var uLocal_12297 = 1;
	var uLocal_12298 = 0;
	var uLocal_12299 = -1;
	var uLocal_12300 = 0;
	var uLocal_12301 = 1;
	var uLocal_12302 = 0;
	var uLocal_12303 = 0;
	var uLocal_12304 = 0;
	var uLocal_12305 = 0;
	var uLocal_12306 = 0;
	var uLocal_12307 = 0;
	var uLocal_12308 = 0;
	var uLocal_12309 = 0;
	var uLocal_12310 = 0;
	var uLocal_12311 = 1065353216;
	var uLocal_12312 = 0;
	var uLocal_12313 = 0;
	var uLocal_12314 = 1065353216;
	var uLocal_12315 = 1;
	var uLocal_12316 = 0;
	var uLocal_12317 = -1;
	var uLocal_12318 = 0;
	var uLocal_12319 = 1;
	var uLocal_12320 = 0;
	var uLocal_12321 = 0;
	var uLocal_12322 = 0;
	var uLocal_12323 = 0;
	var uLocal_12324 = 0;
	var uLocal_12325 = 0;
	var uLocal_12326 = 0;
	var uLocal_12327 = 0;
	var uLocal_12328 = 0;
	var uLocal_12329 = 1065353216;
	var uLocal_12330 = 0;
	var uLocal_12331 = 0;
	var uLocal_12332 = 1065353216;
	var uLocal_12333 = 1;
	var uLocal_12334 = 0;
	var uLocal_12335 = -1;
	var uLocal_12336 = 0;
	var uLocal_12337 = 1;
	var uLocal_12338 = 0;
	var uLocal_12339 = 0;
	var uLocal_12340 = 0;
	var uLocal_12341 = 0;
	var uLocal_12342 = 0;
	var uLocal_12343 = 0;
	var uLocal_12344 = 0;
	var uLocal_12345 = 0;
	var uLocal_12346 = 0;
	var uLocal_12347 = 1065353216;
	var uLocal_12348 = 0;
	var uLocal_12349 = 0;
	var uLocal_12350 = 1065353216;
	var uLocal_12351 = 1;
	var uLocal_12352 = 0;
	var uLocal_12353 = -1;
	var uLocal_12354 = 0;
	var uLocal_12355 = 1;
	var uLocal_12356 = 0;
	var uLocal_12357 = 0;
	var uLocal_12358 = 0;
	var uLocal_12359 = 0;
	var uLocal_12360 = 0;
	var uLocal_12361 = 0;
	var uLocal_12362 = 0;
	var uLocal_12363 = 0;
	var uLocal_12364 = 0;
	var uLocal_12365 = 1065353216;
	var uLocal_12366 = 0;
	var uLocal_12367 = 0;
	var uLocal_12368 = 1065353216;
	var uLocal_12369 = 1;
	var uLocal_12370 = 0;
	var uLocal_12371 = -1;
	var uLocal_12372 = 0;
	var uLocal_12373 = 1;
	var uLocal_12374 = 0;
	var uLocal_12375 = 0;
	var uLocal_12376 = 0;
	var uLocal_12377 = 0;
	var uLocal_12378 = 0;
	var uLocal_12379 = 0;
	var uLocal_12380 = 0;
	var uLocal_12381 = 0;
	var uLocal_12382 = 0;
	var uLocal_12383 = 1065353216;
	var uLocal_12384 = 0;
	var uLocal_12385 = 0;
	var uLocal_12386 = 1065353216;
	var uLocal_12387 = 1;
	var uLocal_12388 = 0;
	var uLocal_12389 = -1;
	var uLocal_12390 = 0;
	var uLocal_12391 = 1;
	var uLocal_12392 = 0;
	var uLocal_12393 = 0;
	var uLocal_12394 = 0;
	var uLocal_12395 = 0;
	var uLocal_12396 = 0;
	var uLocal_12397 = 0;
	var uLocal_12398 = 0;
	var uLocal_12399 = 0;
	var uLocal_12400 = 0;
	var uLocal_12401 = 1065353216;
	var uLocal_12402 = 0;
	var uLocal_12403 = 0;
	var uLocal_12404 = 1065353216;
	var uLocal_12405 = 1;
	var uLocal_12406 = 0;
	var uLocal_12407 = -1;
	var uLocal_12408 = 0;
	var uLocal_12409 = 1;
	var uLocal_12410 = 0;
	var uLocal_12411 = 0;
	var uLocal_12412 = 0;
	var uLocal_12413 = 0;
	var uLocal_12414 = 0;
	var uLocal_12415 = 0;
	var uLocal_12416 = 0;
	var uLocal_12417 = 0;
	var uLocal_12418 = 0;
	var uLocal_12419 = 1065353216;
	var uLocal_12420 = 0;
	var uLocal_12421 = 0;
	var uLocal_12422 = 1065353216;
	var uLocal_12423 = 1;
	var uLocal_12424 = 0;
	var uLocal_12425 = -1;
	var uLocal_12426 = 0;
	var uLocal_12427 = 1;
	var uLocal_12428 = 0;
	var uLocal_12429 = 0;
	var uLocal_12430 = 0;
	var uLocal_12431 = 0;
	var uLocal_12432 = 0;
	var uLocal_12433 = 0;
	var uLocal_12434 = 0;
	var uLocal_12435 = 0;
	var uLocal_12436 = 0;
	var uLocal_12437 = 1065353216;
	var uLocal_12438 = 0;
	var uLocal_12439 = 0;
	var uLocal_12440 = 1065353216;
	var uLocal_12441 = 1;
	var uLocal_12442 = 0;
	var uLocal_12443 = -1;
	var uLocal_12444 = 0;
	var uLocal_12445 = 1;
	var uLocal_12446 = 0;
	var uLocal_12447 = 0;
	var uLocal_12448 = 0;
	var uLocal_12449 = 0;
	var uLocal_12450 = 0;
	var uLocal_12451 = 0;
	var uLocal_12452 = 0;
	var uLocal_12453 = 0;
	var uLocal_12454 = 0;
	var uLocal_12455 = 1065353216;
	var uLocal_12456 = 0;
	var uLocal_12457 = 0;
	var uLocal_12458 = 1065353216;
	var uLocal_12459 = 1;
	var uLocal_12460 = 0;
	var uLocal_12461 = -1;
	var uLocal_12462 = 0;
	var uLocal_12463 = 1;
	var uLocal_12464 = 0;
	var uLocal_12465 = 0;
	var uLocal_12466 = 0;
	var uLocal_12467 = 0;
	var uLocal_12468 = 0;
	var uLocal_12469 = 0;
	var uLocal_12470 = 0;
	var uLocal_12471 = 0;
	var uLocal_12472 = 0;
	var uLocal_12473 = 1065353216;
	var uLocal_12474 = 0;
	var uLocal_12475 = 0;
	var uLocal_12476 = 1065353216;
	var uLocal_12477 = 1;
	var uLocal_12478 = 0;
	var uLocal_12479 = -1;
	var uLocal_12480 = 0;
	var uLocal_12481 = 1;
	var uLocal_12482 = 0;
	var uLocal_12483 = 0;
	var uLocal_12484 = 0;
	var uLocal_12485 = 0;
	var uLocal_12486 = 0;
	var uLocal_12487 = 0;
	var uLocal_12488 = 0;
	var uLocal_12489 = 0;
	var uLocal_12490 = 0;
	var uLocal_12491 = 1065353216;
	var uLocal_12492 = 0;
	var uLocal_12493 = 0;
	var uLocal_12494 = 1065353216;
	var uLocal_12495 = 1;
	var uLocal_12496 = 0;
	var uLocal_12497 = -1;
	var uLocal_12498 = 0;
	var uLocal_12499 = 1;
	var uLocal_12500 = 0;
	var uLocal_12501 = 0;
	var uLocal_12502 = 0;
	var uLocal_12503 = 0;
	var uLocal_12504 = 0;
	var uLocal_12505 = 0;
	var uLocal_12506 = 0;
	var uLocal_12507 = 0;
	var uLocal_12508 = 0;
	var uLocal_12509 = 1065353216;
	var uLocal_12510 = 0;
	var uLocal_12511 = 0;
	var uLocal_12512 = 1065353216;
	var uLocal_12513 = 1;
	var uLocal_12514 = 0;
	var uLocal_12515 = -1;
	var uLocal_12516 = 0;
	var uLocal_12517 = 1;
	var uLocal_12518 = 0;
	var uLocal_12519 = 0;
	var uLocal_12520 = 0;
	var uLocal_12521 = 0;
	var uLocal_12522 = 0;
	var uLocal_12523 = 0;
	var uLocal_12524 = 0;
	var uLocal_12525 = 0;
	var uLocal_12526 = 0;
	var uLocal_12527 = 1065353216;
	var uLocal_12528 = 0;
	var uLocal_12529 = 0;
	var uLocal_12530 = 1065353216;
	var uLocal_12531 = 1;
	var uLocal_12532 = 0;
	var uLocal_12533 = -1;
	var uLocal_12534 = 0;
	var uLocal_12535 = 1;
	var uLocal_12536 = 0;
	var uLocal_12537 = 0;
	var uLocal_12538 = 0;
	var uLocal_12539 = 0;
	var uLocal_12540 = 0;
	var uLocal_12541 = 0;
	var uLocal_12542 = 0;
	var uLocal_12543 = 0;
	var uLocal_12544 = 0;
	var uLocal_12545 = 1065353216;
	var uLocal_12546 = 0;
	var uLocal_12547 = 0;
	var uLocal_12548 = 1065353216;
	var uLocal_12549 = 1;
	var uLocal_12550 = 0;
	var uLocal_12551 = -1;
	var uLocal_12552 = 0;
	var uLocal_12553 = 1;
	var uLocal_12554 = 0;
	var uLocal_12555 = 0;
	var uLocal_12556 = 0;
	var uLocal_12557 = 0;
	var uLocal_12558 = 0;
	var uLocal_12559 = 0;
	var uLocal_12560 = 0;
	var uLocal_12561 = 0;
	var uLocal_12562 = 0;
	var uLocal_12563 = 1065353216;
	var uLocal_12564 = 0;
	var uLocal_12565 = 0;
	var uLocal_12566 = 1065353216;
	var uLocal_12567 = 1;
	var uLocal_12568 = 0;
	var uLocal_12569 = -1;
	var uLocal_12570 = 0;
	var uLocal_12571 = 1;
	var uLocal_12572 = 0;
	var uLocal_12573 = 0;
	var uLocal_12574 = 0;
	var uLocal_12575 = 0;
	var uLocal_12576 = 0;
	var uLocal_12577 = 0;
	var uLocal_12578 = 0;
	var uLocal_12579 = 0;
	var uLocal_12580 = 0;
	var uLocal_12581 = 1065353216;
	var uLocal_12582 = 0;
	var uLocal_12583 = 0;
	var uLocal_12584 = 1065353216;
	var uLocal_12585 = 1;
	var uLocal_12586 = 0;
	var uLocal_12587 = -1;
	var uLocal_12588 = 0;
	var uLocal_12589 = 1;
	var uLocal_12590 = 0;
	var uLocal_12591 = 0;
	var uLocal_12592 = 0;
	var uLocal_12593 = 0;
	var uLocal_12594 = 0;
	var uLocal_12595 = 0;
	var uLocal_12596 = 0;
	var uLocal_12597 = 0;
	var uLocal_12598 = 0;
	var uLocal_12599 = 1065353216;
	var uLocal_12600 = 0;
	var uLocal_12601 = 0;
	var uLocal_12602 = 1065353216;
	var uLocal_12603 = 1;
	var uLocal_12604 = 0;
	var uLocal_12605 = -1;
	var uLocal_12606 = 0;
	var uLocal_12607 = 1;
	var uLocal_12608 = 0;
	var uLocal_12609 = 0;
	var uLocal_12610 = 0;
	var uLocal_12611 = 0;
	var uLocal_12612 = 0;
	var uLocal_12613 = 0;
	var uLocal_12614 = 0;
	var uLocal_12615 = 0;
	var uLocal_12616 = 0;
	var uLocal_12617 = 1065353216;
	var uLocal_12618 = 0;
	var uLocal_12619 = 0;
	var uLocal_12620 = 1065353216;
	var uLocal_12621 = 1;
	var uLocal_12622 = 0;
	var uLocal_12623 = -1;
	var uLocal_12624 = 0;
	var uLocal_12625 = 1;
	var uLocal_12626 = 0;
	var uLocal_12627 = 0;
	var uLocal_12628 = 0;
	var uLocal_12629 = 0;
	var uLocal_12630 = 0;
	var uLocal_12631 = 0;
	var uLocal_12632 = 0;
	var uLocal_12633 = 0;
	var uLocal_12634 = 0;
	var uLocal_12635 = 1065353216;
	var uLocal_12636 = 0;
	var uLocal_12637 = 0;
	var uLocal_12638 = 1065353216;
	var uLocal_12639 = 1;
	var uLocal_12640 = 0;
	var uLocal_12641 = -1;
	var uLocal_12642 = 0;
	var uLocal_12643 = 1;
	var uLocal_12644 = 0;
	var uLocal_12645 = 0;
	var uLocal_12646 = 0;
	var uLocal_12647 = 0;
	var uLocal_12648 = 0;
	var uLocal_12649 = 0;
	var uLocal_12650 = 0;
	var uLocal_12651 = 0;
	var uLocal_12652 = 0;
	var uLocal_12653 = 1065353216;
	var uLocal_12654 = 0;
	var uLocal_12655 = 0;
	var uLocal_12656 = 1065353216;
	var uLocal_12657 = 1;
	var uLocal_12658 = 0;
	var uLocal_12659 = -1;
	var uLocal_12660 = 0;
	var uLocal_12661 = 1;
	var uLocal_12662 = 0;
	var uLocal_12663 = 0;
	var uLocal_12664 = 0;
	var uLocal_12665 = 0;
	var uLocal_12666 = 0;
	var uLocal_12667 = 0;
	var uLocal_12668 = 0;
	var uLocal_12669 = 0;
	var uLocal_12670 = 0;
	var uLocal_12671 = 1065353216;
	var uLocal_12672 = 0;
	var uLocal_12673 = 0;
	var uLocal_12674 = 1065353216;
	var uLocal_12675 = 1;
	var uLocal_12676 = 0;
	var uLocal_12677 = -1;
	var uLocal_12678 = 0;
	var uLocal_12679 = 1;
	var uLocal_12680 = 0;
	var uLocal_12681 = 0;
	var uLocal_12682 = 0;
	var uLocal_12683 = 0;
	var uLocal_12684 = 0;
	var uLocal_12685 = 0;
	var uLocal_12686 = 0;
	var uLocal_12687 = 0;
	var uLocal_12688 = 0;
	var uLocal_12689 = 1065353216;
	var uLocal_12690 = 0;
	var uLocal_12691 = 0;
	var uLocal_12692 = 1065353216;
	var uLocal_12693 = 1;
	var uLocal_12694 = 0;
	var uLocal_12695 = -1;
	var uLocal_12696 = 0;
	var uLocal_12697 = 1;
	var uLocal_12698 = 0;
	var uLocal_12699 = 0;
	var uLocal_12700 = 0;
	var uLocal_12701 = 0;
	var uLocal_12702 = 0;
	var uLocal_12703 = 0;
	var uLocal_12704 = 0;
	var uLocal_12705 = 0;
	var uLocal_12706 = 0;
	var uLocal_12707 = 1065353216;
	var uLocal_12708 = 0;
	var uLocal_12709 = 0;
	var uLocal_12710 = 1065353216;
	var uLocal_12711 = 1;
	var uLocal_12712 = 0;
	var uLocal_12713 = -1;
	var uLocal_12714 = 0;
	var uLocal_12715 = 1;
	var uLocal_12716 = 0;
	var uLocal_12717 = 0;
	var uLocal_12718 = 0;
	var uLocal_12719 = 0;
	var uLocal_12720 = 0;
	var uLocal_12721 = 0;
	var uLocal_12722 = 0;
	var uLocal_12723 = 0;
	var uLocal_12724 = 0;
	var uLocal_12725 = 1065353216;
	var uLocal_12726 = 0;
	var uLocal_12727 = 0;
	var uLocal_12728 = 1065353216;
	var uLocal_12729 = 1;
	var uLocal_12730 = 0;
	var uLocal_12731 = 8;
	var uLocal_12732 = 0;
	var uLocal_12733 = 0;
	var uLocal_12734 = 0;
	var uLocal_12735 = 0;
	var uLocal_12736 = 0;
	var uLocal_12737 = 0;
	var uLocal_12738 = 0;
	var uLocal_12739 = 0;
	var uLocal_12740 = 0;
	var uLocal_12741 = 0;
	var uLocal_12742 = 0;
	var uLocal_12743 = 0;
	var uLocal_12744 = 0;
	var uLocal_12745 = 0;
	var uLocal_12746 = 0;
	var uLocal_12747 = 0;
	var uLocal_12748 = 0;
	var uLocal_12749 = 0;
	var uLocal_12750 = 0;
	var uLocal_12751 = 0;
	var uLocal_12752 = 0;
	var uLocal_12753 = 0;
	var uLocal_12754 = 0;
	var uLocal_12755 = 0;
	var uLocal_12756 = 0;
	var uLocal_12757 = 0;
	var uLocal_12758 = 0;
	var uLocal_12759 = 0;
	var uLocal_12760 = 0;
	var uLocal_12761 = 0;
	var uLocal_12762 = 0;
	var uLocal_12763 = 0;
	var uLocal_12764 = 0;
	var uLocal_12765 = 0;
	var uLocal_12766 = 0;
	var uLocal_12767 = 0;
	var uLocal_12768 = 0;
	var uLocal_12769 = 0;
	var uLocal_12770 = 0;
	var uLocal_12771 = 0;
	var uLocal_12772 = 0;
	var uLocal_12773 = 0;
	var uLocal_12774 = 0;
	var uLocal_12775 = 0;
	var uLocal_12776 = 0;
	var uLocal_12777 = 0;
	var uLocal_12778 = 0;
	var uLocal_12779 = 0;
	var uLocal_12780 = 0;
	var uLocal_12781 = 0;
	var uLocal_12782 = 0;
	var uLocal_12783 = 0;
	var uLocal_12784 = 0;
	var uLocal_12785 = 0;
	var uLocal_12786 = 0;
	var uLocal_12787 = 0;
	var uLocal_12788 = 0;
	var uLocal_12789 = 0;
	var uLocal_12790 = 0;
	var uLocal_12791 = 0;
	var uLocal_12792 = 0;
	var uLocal_12793 = 0;
	var uLocal_12794 = 0;
	var uLocal_12795 = 0;
	var uLocal_12796 = 0;
	var uLocal_12797 = 0;
	var uLocal_12798 = 0;
	var uLocal_12799 = 0;
	var uLocal_12800 = 0;
	var uLocal_12801 = 0;
	var uLocal_12802 = 0;
	var uLocal_12803 = 0;
	var uLocal_12804 = 0;
	var uLocal_12805 = 0;
	var uLocal_12806 = 0;
	var uLocal_12807 = 0;
	var uLocal_12808 = 0;
	var uLocal_12809 = 0;
	var uLocal_12810 = 0;
	var uLocal_12811 = 0;
	var uLocal_12812 = 0;
	var uLocal_12813 = 0;
	var uLocal_12814 = 0;
	var uLocal_12815 = 0;
	var uLocal_12816 = 0;
	var uLocal_12817 = 0;
	var uLocal_12818 = 0;
	var uLocal_12819 = 0;
	var uLocal_12820 = 0;
	var uLocal_12821 = 0;
	var uLocal_12822 = 0;
	var uLocal_12823 = 0;
	var uLocal_12824 = 0;
	var uLocal_12825 = 0;
	var uLocal_12826 = 0;
	var uLocal_12827 = 0;
	var uLocal_12828 = 0;
	var uLocal_12829 = 0;
	var uLocal_12830 = 0;
	var uLocal_12831 = 0;
	var uLocal_12832 = 0;
	var uLocal_12833 = 0;
	var uLocal_12834 = 0;
	var uLocal_12835 = 0;
	var uLocal_12836 = 0;
	var uLocal_12837 = 0;
	var uLocal_12838 = 0;
	var uLocal_12839 = 0;
	var uLocal_12840 = 0;
	var uLocal_12841 = 0;
	var uLocal_12842 = 0;
	var uLocal_12843 = 0;
	var uLocal_12844 = 0;
	var uLocal_12845 = 0;
	var uLocal_12846 = 0;
	var uLocal_12847 = 0;
	var uLocal_12848 = 0;
	var uLocal_12849 = 0;
	var uLocal_12850 = 0;
	var uLocal_12851 = 0;
	var uLocal_12852 = 0;
	var uLocal_12853 = 0;
	var uLocal_12854 = 0;
	var uLocal_12855 = 0;
	var uLocal_12856 = 0;
	var uLocal_12857 = 0;
	var uLocal_12858 = 0;
	var uLocal_12859 = 0;
	var uLocal_12860 = 0;
	var uLocal_12861 = 0;
	var uLocal_12862 = 0;
	var uLocal_12863 = 0;
	var uLocal_12864 = 0;
	var uLocal_12865 = 0;
	var uLocal_12866 = 0;
	var uLocal_12867 = 0;
	var uLocal_12868 = 0;
	var uLocal_12869 = 0;
	var uLocal_12870 = 0;
	var uLocal_12871 = 0;
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
	var uLocal_13060 = 8;
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
	var uLocal_13081 = -1;
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
	var uLocal_13103 = -1;
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
	var uLocal_13125 = -1;
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
	var uLocal_13147 = -1;
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
	var uLocal_13169 = -1;
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
	var uLocal_13191 = -1;
	var uLocal_13192 = 0;
	var uLocal_13193 = 0;
	var uLocal_13194 = 0;
	var uLocal_13195 = 0;
	var uLocal_13196 = 0;
	var uLocal_13197 = 0;
	var uLocal_13198 = 0;
	var uLocal_13199 = 0;
	var uLocal_13200 = 0;
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
	var uLocal_13213 = -1;
	var uLocal_13214 = 0;
	var uLocal_13215 = 0;
	var uLocal_13216 = 0;
	var uLocal_13217 = 0;
	var uLocal_13218 = 0;
	var uLocal_13219 = 0;
	var uLocal_13220 = 0;
	var uLocal_13221 = 0;
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
	var uLocal_13235 = -1;
	var uLocal_13236 = 0;
	var uLocal_13237 = 11;
	var uLocal_13238 = 0;
	var uLocal_13239 = 0;
	var uLocal_13240 = 0;
	var uLocal_13241 = 0;
	var uLocal_13242 = 0;
	var uLocal_13243 = 0;
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
	var uLocal_13265 = 0;
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
	var uLocal_13287 = 0;
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
	var uLocal_13309 = 0;
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
	var uLocal_13331 = 0;
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
	var uLocal_13348 = 2;
	var uLocal_13349 = 0;
	var uLocal_13350 = 0;
	var uLocal_13351 = 0;
	var uLocal_13352 = 0;
	var uLocal_13353 = 0;
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
	var uLocal_13375 = 0;
	var uLocal_13376 = 0;
	var uLocal_13377 = 0;
	var uLocal_13378 = 0;
	var uLocal_13379 = 0;
	var uLocal_13380 = 0;
	var uLocal_13381 = 0;
	var uLocal_13382 = 0;
	var uLocal_13383 = 2;
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
	var uLocal_13400 = -1;
	var uLocal_13401 = 0;
	var uLocal_13402 = 0;
	var uLocal_13403 = -1;
	var uLocal_13404 = -1082130432;
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
	var uLocal_13486 = 24;
	var uLocal_13487 = 0;
	var uLocal_13488 = 0;
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
	var uLocal_13523 = 0;
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
	var uLocal_13540 = 0;
	var uLocal_13541 = 0;
	var uLocal_13542 = 0;
	var uLocal_13543 = 0;
	var uLocal_13544 = 0;
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
	var uLocal_13610 = -1;
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
	var uLocal_13626 = 0;
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
	var uLocal_13637 = -1;
	var uLocal_13638 = 20;
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
	var uLocal_13666 = 1028443341;
	var uLocal_13667 = 1038174126;
	var uLocal_13668 = 1065353216;
	var uLocal_13669 = 1065353216;
	var uLocal_13670 = 1086324736;
	var uLocal_13671 = 1082130432;
	var uLocal_13672 = 1073741824;
	var uLocal_13673 = 1065353216;
	var uLocal_13674 = 1108082688;
	var uLocal_13675 = 1108082688;
	var uLocal_13676 = 3000;
	var uLocal_13677 = 1092616192;
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
	var uLocal_13712 = -1;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_72 = 1;
	iLocal_73 = 2;
	iLocal_74 = 3;
	iLocal_75 = 4;
	iLocal_76 = 5;
	iLocal_77 = 6;
	iLocal_78 = 25;
	iLocal_79 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
	iLocal_80 = joaat("MES_SADIE5_MALES_01");
	iLocal_81 = joaat("G_M_M_UNILANGSTONBOYS_01");
	iLocal_82 = 2058044619;
	iLocal_83 = 1288562961;
	iLocal_84 = 1594854804;
	iLocal_85 = 2145312194;
	iLocal_86 = -2013410069;
	iLocal_516 = 4295;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4642))
	{
		__LIB_4__::func_935(&uLocal_533, 1073741824 /* Float: 2f */);
		func_2(&uLocal_533, 1);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!__LIB_0__::func_382(64))
	{
		BUILTIN::WAIT(0);
	}
	func_4(&uScriptParam_0, &uLocal_533);
	func_5(&uLocal_533);
	while (!__LIB_4__::func_936(&uLocal_533, -2147483648))
	{
		func_7(&uLocal_533);
		BUILTIN::WAIT(0);
	}
	while (!func_2(&uLocal_533, 0))
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
			__LIB_1__::func_748(&Global_43801, 1, 1);
		}
		UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
		MISC::_0x1096603B519C905F("");
		__LIB_1__::func_559(__LIB_3__::func_918(uParam0->f_607), 0, 2);
		__LIB_1__::func_140();
		__LIB_4__::func_797(1);
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
	__LIB_4__::func_797(1);
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
					__LIB_1__::func_809(__LIB_3__::func_918(uParam0->f_607), bVar3);
				}
				__LIB_5__::func_324(uParam0, bParam1);
				if (uParam0->f_607 != 77)
				{
					UILOG::_UILOG_MARK_MISSION_COMPLETED(__LIB_5__::func_104(uParam0));
				}
				__LIB_1__::func_140();
				if (__LIB_0__::func_13(32768))
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					func_86();
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
				func_93();
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
				func_93();
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
	iLocal_70 = __LIB_4__::func_950(uParam0);
	iLocal_70 = iLocal_70;
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
	__LIB_5__::func_332(uParam0);
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
	__LIB_14__::func_334(uParam0);
	__LIB_8__::func_800(uParam0, __LIB_4__::func_939(uParam0));
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
	if (ITEMSET::IS_ITEMSET_VALID(iLocal_338))
	{
		ITEMSET::DESTROY_ITEMSET(iLocal_338);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_100[4 /*4*/]))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(Local_100[4 /*4*/]))
		{
			ENTITY::DETACH_ENTITY(Local_100[4 /*4*/], true, true);
		}
		PED::DELETE_PED(&(Local_100[4 /*4*/]));
	}
	if (iLocal_325 != 0)
	{
		if (ENTITY::_0x1FF441D7954F8709(iLocal_325))
		{
			ENTITY::_0xD2B9C78537ED5759(iLocal_325);
		}
	}
	func_163();
	PLAYER::_0xBBADFB5E5E5766FB(PLAYER::PLAYER_ID(), 1f);
	CLOCK::PAUSE_CLOCK(false, 0);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_87[2 /*4*/], false);
	__LIB_1__::func_721(7);
	__LIB_2__::func_145(Local_87[2 /*4*/], 0);
	__LIB_14__::func_316(11, 0);
	PED::_0x949B2F9ED2917F5D(Global_35, 2);
	PED::SET_PED_CONFIG_FLAG(Global_35, 469, false);
	PED::SET_PED_CONFIG_FLAG(Local_87[0 /*4*/], 301, false);
	PED::SET_PED_CONFIG_FLAG(Local_87[0 /*4*/], 512, false);
	PED::SET_PED_CONFIG_FLAG(Local_87[0 /*4*/], 249, false);
	__LIB_8__::func_824(uParam0, 11, Local_87[0 /*4*/], 0, 0, 0, 0);
	__LIB_1__::func_463(Local_87[1 /*4*/], 11, 0, 0, 0);
	HUD::_0x160825DADF1B04B3();
	if (PATHFIND::_0x5AC0944C156E5F44("sad5_nav_rockblock"))
	{
		PATHFIND::_0x527B97C203BB8606("sad5_nav_rockblock");
	}
	__LIB_4__::func_269(0);
	SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_SHOOTOUT"));
	CAM::_0x0A5A4F1979ABB40E(&Local_517);
	CAM::_0x798BE43C9393632B(&Local_517);
	if (SCRIPTS::_0x7409669C5ED50144(joaat("CHAL_CTX_SHOOTOUT")))
	{
		SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_SHOOTOUT"));
	}
	__LIB_9__::func_407(38, 1);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	STREAMING::END_SRL();
	return true;
}

struct<4> func_34(int iParam0)
{
	struct<4> Var0;
	if (iParam0 == iLocal_71)
	{
		__LIB_8__::func_857(&Var0, -831.7222f, -1325.755f, 42.6021f, 201.4829f);
	}
	else if (iParam0 == iLocal_72)
	{
		__LIB_8__::func_857(&Var0, -2768.344f, -2555.074f, 61.6605f, 103.9571f);
	}
	else if (iParam0 == iLocal_73)
	{
		__LIB_8__::func_857(&Var0, -3197.432f, -2537.462f, 66.8072f, 102.7321f);
	}
	else if (iParam0 == iLocal_74)
	{
		__LIB_8__::func_857(&Var0, -3079.574f, -2489.374f, 72.7761f, 70.4902f);
	}
	else if (iParam0 == iLocal_75)
	{
		__LIB_8__::func_857(&Var0, -2739.983f, -2421.259f, 71.1905f, 343.657f);
	}
	else if (iParam0 == iLocal_76)
	{
		__LIB_8__::func_857(&Var0, -2740.29f, -2423.842f, 71.5532f, 2.781f);
	}
	else if (iParam0 == iLocal_77)
	{
		__LIB_8__::func_857(&Var0, -1238.892f, -1709.501f, 77.9122f, 309.0114f);
	}
	else if (iParam0 == iLocal_78)
	{
		__LIB_8__::func_857(&Var0, -760.2289f, -1269.325f, 43.0413f, 89.3178f);
	}
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
		func_261(uParam0);
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
		func_285(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871(), __LIB_0__::func_113());
	}
	if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
	{
		iVar9 = func_286(iParam0, &uVar7, &iVar8);
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
					__LIB_9__::func_212(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
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
						func_298(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_298(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_298(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_298(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_298(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_298(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_298(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_298(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_298(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_298(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_298(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_298(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_298(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_300();
						func_301(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_298(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_298(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_339();
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
							func_298(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

void func_86()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	__LIB_0__::func_319(4112);
	__LIB_0__::func_320(6);
	vVar2 = { func_349(Global_2621440[0 /*12066*/].f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	__LIB_0__::func_321(vVar2, uVar1, uVar0, 0);
	__LIB_0__::func_322(vVar2);
	Global_40.f_9.f_15 = __LIB_1__::func_447(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_93()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!ITEMSET::IS_ITEMSET_VALID(iLocal_69))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(iLocal_69))
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iLocal_69);
		iVar2 = MISC::_GET_ENTITY_FROM_ITEM(iVar1);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && ENTITY::_0x88AD6CC10D8D35B2(iVar2)) && !ENTITY::_0xA7E51B53309EAC97(iVar2))
		{
			ENTITY::DELETE_ENTITY(&iVar2);
		}
		iVar0++;
	}
	ITEMSET::DESTROY_ITEMSET(iLocal_69);
}

void func_108(var uParam0, var uParam1)
{
	uParam0->f_607 = -1;
	__LIB_19__::func_331(uParam0);
	uParam0->f_634[0] = 55398;
	uParam0->f_634[1] = 55398;
	uParam0->f_637 = 0;
	__LIB_4__::func_960(uParam0, *uParam1);
	func_366(uParam0);
}

void func_109(var uParam0)
{
	__LIB_8__::func_762(uParam0, 30);
}

void func_123(var uParam0)
{
	if (__LIB_0__::func_91())
	{
		func_370(&(uParam0->f_7375));
	}
}

bool func_127(struct<4> Param0)
{
	if (__LIB_0__::func_13(32768))
	{
		return true;
	}
	return func_372(Param0, Param0.f_3);
}

void func_138(var uParam0)
{
	if (!ITEMSET::IS_ITEMSET_VALID(iLocal_69))
	{
		iLocal_69 = ITEMSET::CREATE_ITEMSET(true);
	}
}

int func_139(var uParam0)
{
	__LIB_5__::func_338(uParam0, iLocal_80, ((((((__LIB_0__::func_178(iLocal_72) || __LIB_0__::func_178(iLocal_73)) || __LIB_0__::func_178(iLocal_74)) || __LIB_0__::func_178(iLocal_75)) || __LIB_0__::func_178(iLocal_76)) || __LIB_0__::func_178(iLocal_77)) || __LIB_0__::func_178(iLocal_78)));
	__LIB_5__::func_338(uParam0, iLocal_81, (((((__LIB_0__::func_178(iLocal_72) || __LIB_0__::func_178(iLocal_73)) || __LIB_0__::func_178(iLocal_74)) || __LIB_0__::func_178(iLocal_75)) || __LIB_0__::func_178(iLocal_74)) || __LIB_0__::func_178(iLocal_76)));
	__LIB_5__::func_338(uParam0, iLocal_79, (((((__LIB_0__::func_178(iLocal_72) || __LIB_0__::func_178(iLocal_73)) || __LIB_0__::func_178(iLocal_74)) || __LIB_0__::func_178(iLocal_75)) || __LIB_0__::func_178(iLocal_76)) || __LIB_0__::func_178(iLocal_77)));
	__LIB_5__::func_338(uParam0, joaat("P_BINOCULARS01X"), __LIB_0__::func_178(iLocal_73));
	__LIB_5__::func_565(uParam0, "sad5_ride_to_new_austin", __LIB_0__::func_178(iLocal_71), 2, -1);
	__LIB_5__::func_565(uParam0, "sad5_ride_to_pikes_basin_shot1", __LIB_0__::func_178(iLocal_71), 2, -1);
	__LIB_5__::func_565(uParam0, "sad5_ride_to_pikes_basin_shot3", __LIB_0__::func_178(iLocal_71), 2, -1);
	__LIB_5__::func_565(uParam0, "sad5_ride_to_ridge_line", __LIB_0__::func_178(iLocal_72), 2, -1);
	__LIB_5__::func_565(uParam0, "sad5_posse_ride_to_pikes_basin", __LIB_0__::func_178(iLocal_73), 2, -1);
	__LIB_5__::func_565(uParam0, "sad5_posse_ride_in_pikes_basin", __LIB_0__::func_178(iLocal_74), 2, -1);
	__LIB_5__::func_565(uParam0, "sad5_follow_posse", __LIB_0__::func_178(iLocal_74), 2, -1);
	__LIB_5__::func_565(uParam0, "sad5_follow_posse2", __LIB_0__::func_178(iLocal_73), 2, -1);
	__LIB_5__::func_565(uParam0, "sad5_sadie_sneak_1", __LIB_0__::func_178(iLocal_75), 2, -1);
	__LIB_5__::func_565(uParam0, "sad5_john_horse_whistle", __LIB_0__::func_178(iLocal_75), 2, -1);
	__LIB_5__::func_565(uParam0, "sad5_to_bounty", __LIB_0__::func_178(iLocal_75), 2, -1);
	__LIB_5__::func_565(uParam0, "sad5_enemy_bridge_1", __LIB_0__::func_178(iLocal_76), 2, -1);
	__LIB_5__::func_565(uParam0, "sad5_enemy_ride_1", __LIB_0__::func_178(iLocal_76), 2, -1);
	__LIB_5__::func_565(uParam0, "sad5_enemy_ride_2", __LIB_0__::func_178(iLocal_76), 2, -1);
	__LIB_5__::func_565(uParam0, "sad5_enemy_ride_3", __LIB_0__::func_178(iLocal_76), 2, -1);
	__LIB_5__::func_565(uParam0, "sad5_sadie_escape", __LIB_0__::func_178(iLocal_76), 2, -1);
	__LIB_5__::func_565(uParam0, "sad5_return_to_blackwater_cme_shot1", __LIB_0__::func_178(iLocal_76), 2, -1);
	__LIB_5__::func_565(uParam0, "sad5_return_to_blackwater_cme_shot2", __LIB_0__::func_178(iLocal_76), 2, -1);
	__LIB_5__::func_565(uParam0, "sad5_return_to_blackwater_cme_shot4", __LIB_0__::func_178(iLocal_76), 2, -1);
	__LIB_5__::func_565(uParam0, "sad5_ride_to_bank", (__LIB_0__::func_178(iLocal_76) || __LIB_0__::func_178(iLocal_77)), 2, -1);
	__LIB_5__::func_565(uParam0, "sad5_outro", __LIB_0__::func_178(iLocal_78), 2, -1);
	__LIB_8__::func_792(uParam0, "script@story@sad5@ig@ig_1_scope@wnt", &(uLocal_463[0]), __LIB_0__::func_178(iLocal_72), 0, "PL_A_WNT", 0, 1);
	__LIB_8__::func_792(uParam0, "script@story@sad5@ig@ig_1_scope@action", &(uLocal_463[1]), (__LIB_0__::func_178(iLocal_72) || __LIB_0__::func_178(iLocal_73)), 0, "PL_B_ENTER", 0, 1);
	__LIB_8__::func_792(uParam0, "script@story@sad5@ig@IG_2_bountymeets@posse@action", &(uLocal_463[2]), (__LIB_0__::func_178(iLocal_75) || __LIB_0__::func_178(iLocal_74)), 0, "PL_A_ENTER", 0, 1);
	__LIB_8__::func_792(uParam0, "script@story@sad5@ig@IG_2_bountymeets@sadie_player@action", &(uLocal_463[3]), __LIB_0__::func_178(iLocal_75), 0, "PL_A_ENTER", 0, 1);
	__LIB_8__::func_792(uParam0, "script@story@sad5@leadin@ext@leadin", &(uLocal_463[4]), __LIB_0__::func_178(iLocal_77), 0, "PL_BOUNTY_ALIVE", 50f, 1);
	__LIB_5__::func_567(uParam0, "script_story@bou1@ig@ig4_discipline", __LIB_0__::func_178(iLocal_77));
	__LIB_5__::func_567(uParam0, "script_proc@bounty@riding_punch", __LIB_0__::func_178(iLocal_77));
	__LIB_5__::func_566(uParam0, uLocal_463[0], "PL_A_WNT", __LIB_0__::func_178(iLocal_72));
	__LIB_5__::func_566(uParam0, uLocal_463[1], "PL_B_ENTER", __LIB_0__::func_178(iLocal_73));
	__LIB_5__::func_566(uParam0, uLocal_463[1], "PL_C_LOOP", __LIB_0__::func_178(iLocal_73));
	__LIB_5__::func_566(uParam0, uLocal_463[1], "PL_D_CO_LEFT", __LIB_0__::func_178(iLocal_73));
	__LIB_5__::func_566(uParam0, uLocal_463[1], "PL_D_CO_RIGHT", __LIB_0__::func_178(iLocal_73));
	__LIB_5__::func_566(uParam0, uLocal_463[1], "PL_D_FLINCH_FRONT", __LIB_0__::func_178(iLocal_73));
	__LIB_5__::func_566(uParam0, uLocal_463[1], "PL_D_FLINCH_LEFT", __LIB_0__::func_178(iLocal_73));
	__LIB_5__::func_566(uParam0, uLocal_463[1], "PL_D_FLINCH_RIGHT", __LIB_0__::func_178(iLocal_73));
	__LIB_5__::func_566(uParam0, uLocal_463[1], "PL_E_ACTION", __LIB_0__::func_178(iLocal_73));
	__LIB_5__::func_566(uParam0, uLocal_463[1], "PL_F_ENTER_CLOSE", __LIB_0__::func_178(iLocal_73));
	__LIB_5__::func_566(uParam0, uLocal_463[3], "PL_A_ENTER", __LIB_0__::func_178(iLocal_75));
	return 1;
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
		if (__LIB_8__::func_808(uParam0, __LIB_5__::func_475(uParam0), 0))
		{
			__LIB_5__::func_334(uParam0, __LIB_5__::func_475(uParam0), 536870912);
		}
	}
	if (__LIB_4__::func_937(uParam0, 8192))
	{
		if (!__LIB_4__::func_937(uParam0, 536870912))
		{
			if (__LIB_5__::func_569(&(uParam0->f_1126), __LIB_4__::func_939(uParam0)))
			{
				__LIB_4__::func_944(uParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (__LIB_8__::func_808(uParam0, __LIB_4__::func_939(uParam0), 1))
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
		func_405(uParam0, __LIB_4__::func_951(uParam0, 3), !__LIB_4__::func_937(uParam0, 2097152), uParam0->f_5410, !__LIB_4__::func_937(uParam0, 32), 0);
		func_406(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1);
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
				func_407(uParam0);
			}
		}
		if (__LIB_4__::func_948(uParam0, 32))
		{
			func_408(uParam0);
		}
	}
	switch (__LIB_4__::func_962(uParam0))
	{
		case -1:
		case 0:
			__LIB_4__::func_963(uParam0, 1);
			break;
		case 1:
			if (func_410(uParam0))
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
			if (func_412(uParam0))
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
	if (func_414(uParam0))
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
			func_414(uParam0);
		}
	}
	return false;
}

void func_163()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(uLocal_339[iVar0]))
		{
			VOLUME::_DELETE_VOLUME(uLocal_339[iVar0]);
		}
		iVar0++;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_344))
	{
		VOLUME::_DELETE_VOLUME(iLocal_344);
	}
}

void func_261(var uParam0)
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
		if (func_406(uParam0, 0, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

void func_285(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
			Jump @4290; //curOff = 645
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
			Jump @4290; //curOff = 701
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
			Jump @4290; //curOff = 780
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
			Jump @4290; //curOff = 1061
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_3_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_3_JN"), iParam1);
			}
			Jump @4290; //curOff = 1095
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_4_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_4_JN"), iParam1);
			}
			Jump @4290; //curOff = 1129
			__LIB_1__::func_465(joaat("JOURNAL_GT_COACH_ROB_RSC"), iParam1);
			Jump @4290; //curOff = 1143
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
			Jump @4290; //curOff = 1199
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT2_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT2_1_JN"), iParam1);
			}
			Jump @4290; //curOff = 1233
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
			Jump @4290; //curOff = 1290
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CIG1_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CIG1_1_JN"), iParam1);
			}
			Jump @4290; //curOff = 1324
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_DINO1_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_DINO1_1_JN"), iParam1);
			}
			Jump @4290; //curOff = 1358
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
			Jump @4290; //curOff = 1415
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
			Jump @4290; //curOff = 1481
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
			Jump @4290; //curOff = 1538
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FISH1_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FISH1_1_JN"), iParam1);
			}
			Jump @4290; //curOff = 1572
			if (__LIB_0__::func_343(41))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FISH2_1_JN_B"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FISH2_1_JN_A"), iParam1);
			}
			Jump @4290; //curOff = 1609
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ROCKCARV1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ROCKCARV1_JN"), iParam1);
			}
			Jump @4290; //curOff = 1643
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
			Jump @4290; //curOff = 1711
			__LIB_1__::func_465(joaat("JOURNAL_RC_TAX1_1_JN"), iParam1);
			Jump @4290; //curOff = 1725
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
			Jump @4290; //curOff = 1793
			__LIB_1__::func_465(joaat("JOURNAL_CHAP2_DOWNES1_1"), iParam1);
			Jump @4290; //curOff = 1807
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_DOWNES2_1"), iParam1);
			Jump @4290; //curOff = 1821
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_ODRISCOLL2_2B"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_GT_ODRISCOLL_2"), iParam1);
			Jump @4290; //curOff = 1846
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_3"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_4"), iParam1);
			Jump @4290; //curOff = 1893
			__LIB_1__::func_465(joaat("JOURNAL_CHAP3_CLEMENS"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_DUTCH1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_DUTCH1_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_DUTCH1_3"), iParam1);
			__LIB_1__::func_199(1);
			Jump @4290; //curOff = 1945
			__LIB_1__::func_465(joaat("JOURNAL_CHAP4_SHADYBELLE"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_DUTCH2_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_DUTCH2_2"), iParam1);
			Jump @4290; //curOff = 1981
			__LIB_1__::func_465(joaat("JOURNAL_CHAP6_BEAVERHOLLOW"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_DUTCH3_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_DUTCH3_2B"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_DUTCH3_3"), iParam1);
			__LIB_1__::func_199(0);
			Jump @4290; //curOff = 2033
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_EDITHDOWNE2_1"), iParam1);
			Jump @4290; //curOff = 2047
			__LIB_1__::func_465(joaat("JOURNAL_RC_MILLER1_JN"), iParam1);
			Jump @4290; //curOff = 2061
			__LIB_1__::func_465(joaat("JOURNAL_RC_MILLER3_JN"), iParam1);
			Jump @4290; //curOff = 2075
			__LIB_1__::func_465(joaat("JOURNAL_RC_MILLER4_JN"), iParam1);
			Jump @4290; //curOff = 2089
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA1_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA1_1_JN"), iParam1);
			}
			Jump @4290; //curOff = 2123
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
			Jump @4290; //curOff = 2191
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
			Jump @4290; //curOff = 2247
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER1_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER1_1_JN"), iParam1);
			}
			Jump @4290; //curOff = 2281
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER2_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER2_1_JN"), iParam1);
			}
			Jump @4290; //curOff = 2315
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER3_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER3_1_JN"), iParam1);
			}
			Jump @4290; //curOff = 2349
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER5_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER5_1_JN"), iParam1);
			}
			Jump @4290; //curOff = 2383
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK1_JN"), iParam1);
			}
			Jump @4290; //curOff = 2417
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
			Jump @4290; //curOff = 2473
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK5_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK5_JN"), iParam1);
			}
			Jump @4290; //curOff = 2507
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
			Jump @4290; //curOff = 2565
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MARY3X1_1"), iParam1);
			Jump @4290; //curOff = 2579
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
			Jump @4290; //curOff = 2668
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
			Jump @4290; //curOff = 2725
			__LIB_1__::func_465(joaat("JOURNAL_RC_MASON3_1_AR"), iParam1);
			Jump @4290; //curOff = 2739
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
			Jump @4290; //curOff = 2807
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
			Jump @4290; //curOff = 2864
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_MONROE_1"), iParam1);
			Jump @4290; //curOff = 2878
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
			Jump @4290; //curOff = 2934
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
			Jump @4290; //curOff = 2991
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
			Jump @4290; //curOff = 3136
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_NATIVERSC1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_NATIVERSC1_2"), iParam1);
			Jump @4290; //curOff = 3161
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ODDF1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ODDF1_JN"), iParam1);
			}
			Jump @4290; //curOff = 3195
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ODDF2_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ODDF2_JN"), iParam1);
			}
			Jump @4290; //curOff = 3229
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO1_1_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO1_2_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO1_1_JN"), iParam1);
			}
			Jump @4290; //curOff = 3274
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
			Jump @4290; //curOff = 3331
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
			Jump @4290; //curOff = 3388
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW1_JN"), iParam1);
			}
			Jump @4290; //curOff = 3422
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
			Jump @4290; //curOff = 3479
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
			Jump @4290; //curOff = 3536
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
			Jump @4290; //curOff = 3592
			__LIB_1__::func_465(joaat("JOURNAL_RC_RTL1_AR"), iParam1);
			Jump @4290; //curOff = 3606
			__LIB_1__::func_465(joaat("JOURNAL_RC_RTL3_AR"), iParam1);
			Jump @4290; //curOff = 3620
			__LIB_1__::func_465(joaat("JOURNAL_RC_RTL5_AR"), iParam1);
			Jump @4290; //curOff = 3634
			__LIB_1__::func_465(joaat("JOURNAL_RC_RTL7_AR"), iParam1);
			Jump @4290; //curOff = 3648
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_SADIE1_1"), iParam1);
			Jump @4290; //curOff = 3662
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
			Jump @4290; //curOff = 3816
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_SLVC1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_SLVC1_JN"), iParam1);
			}
			Jump @4290; //curOff = 3850
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
			Jump @4290; //curOff = 3940
			if (bParam2 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_STRAUSS3_3A"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_STRAUSS3_3B"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_STRAUSS3_3C"), iParam1);
			}
			Jump @4290; //curOff = 3985
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
			Jump @4290; //curOff = 4079
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET1_JN"), iParam1);
			}
			Jump @4290; //curOff = 4113
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
			Jump @4290; //curOff = 4170
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
			Jump @4290; //curOff = 4227
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
int func_286(int iParam0, var uParam1, int iParam2)
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

bool func_298(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_298(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_9__::func_355(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(2);
					}
					else
					{
						__LIB_9__::func_355(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(1);
					}
				}
			}
			else if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
				{
					__LIB_9__::func_355(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(2);
				}
				else
				{
					__LIB_9__::func_355(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
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
			__LIB_10__::func_444(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1718133314))
		{
			__LIB_10__::func_445(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1738650224))
		{
			__LIB_10__::func_446(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_11__::func_618(iParam0);
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
			__LIB_11__::func_619(iParam0, iParam1);
			__LIB_4__::func_466(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_11__::func_620(iParam0, 0, 0, 0);
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
						func_298(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_298(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_298(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_298(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_298(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_298(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_298(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_298(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_298(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_298(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_300()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_617();
	func_618();
	func_619();
	func_620();
	func_621();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_301(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_624(iParam0, 1, 1, -142743235, 1);
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

void func_339()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_665(&uVar4, &iVar1, &iVar2, &iVar3)))
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

Vector3 func_349(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	vVar0 = { func_681(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { func_681(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

void func_366(var uParam0)
{
	__LIB_5__::func_476(uParam0, iLocal_71, iLocal_72, 104886, 105100, 105238, 105324, 106650, "SAD5_INT", 2, -1);
	__LIB_5__::func_476(uParam0, iLocal_72, iLocal_73, 106836, 107069, 107107, 107178, 108782, "", 64, -1);
	__LIB_5__::func_476(uParam0, iLocal_73, iLocal_74, 108842, 109100, 109109, 109137, 110671, "", 64, -1);
	__LIB_5__::func_476(uParam0, iLocal_74, iLocal_75, 110718, 111057, 111066, 111084, 113010, "", 64, -1);
	__LIB_5__::func_476(uParam0, iLocal_75, iLocal_76, 113314, 113926, 114002, 114135, 114820, "", 64, -1);
	__LIB_5__::func_476(uParam0, iLocal_76, iLocal_77, 114929, 115311, 115330, 115370, 117176, "", 64, -1);
	__LIB_5__::func_476(uParam0, iLocal_77, iLocal_78, 117245, 117685, 117694, 117942, 119276, "", 256, -1);
	__LIB_5__::func_476(uParam0, iLocal_78, 26, 119296, 119528, 119592, 119601, 119668, "SAD5_EXT", 66, -1);
}

void func_370(var uParam0)
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
		func_750(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_4__::func_535(uParam0, 0f, 0f, 0f);
		func_752(uParam0);
		func_753(uParam0);
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

int func_372(vector3 vParam0, var uParam3)
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
		iVar0 = func_761(0, 0);
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

bool func_405(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
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
	if (func_820(uParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		uParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_406(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8)
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
						func_828(iVar13, vVar14, fParam5, 2, 1073741824 /* Float: 2f */);
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

void func_407(var uParam0)
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
		if (func_830(&(uParam0->f_609), uParam0->f_607))
		{
			__LIB_4__::func_945(uParam0, 32);
		}
	}
}

void func_408(var uParam0)
{
	struct<4> Var0;
	if (!__LIB_4__::func_948(uParam0, 128))
	{
		if (__LIB_4__::func_948(uParam0, 16384))
		{
			__LIB_5__::func_284(uParam0);
			if (func_832(uParam0))
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
			if (func_834(uParam0, Var0))
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

bool func_410(var uParam0)
{
	int iVar0;
	char[] cVar1[8];
	iVar0 = 1;
	if (!__LIB_8__::func_910(uParam0))
	{
		iVar0 = 0;
	}
	if (!func_405(uParam0, __LIB_4__::func_951(uParam0, 3), !__LIB_4__::func_937(uParam0, 2097152), uParam0->f_5410, !__LIB_4__::func_937(uParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_406(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
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

bool func_412(var uParam0)
{
	if (!func_840(uParam0))
	{
		return false;
	}
	if (!func_841(uParam0))
	{
		return false;
	}
	if (!func_842(uParam0))
	{
		return false;
	}
	if (!__LIB_1__::func_707(joaat("WEAPON_KIT_BINOCULARS"), 1, 0))
	{
		func_298(joaat("WEAPON_KIT_BINOCULARS"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 469, true);
	__LIB_5__::func_106(uParam0, Local_87[0 /*4*/], "SADIE_ADLER", 0);
	iLocal_338 = ITEMSET::CREATE_ITEMSET(true);
	func_843();
	__LIB_9__::func_407(38, 0);
	__LIB_14__::func_316(11, 1);
	STREAMING::_REQUEST_IMAP(1184975829);
	if (PATHFIND::_0x495CFAB2924237C7("sad5_nav_rockblock"))
	{
		PATHFIND::_0x7C334FF4D9215912("sad5_nav_rockblock");
	}
	func_844();
	sLocal_506 = "script_story@bou1@ig@ig4_discipline";
	sLocal_507 = "script_proc@bounty@riding_punch";
	sLocal_508 = "punch_ped";
	bLocal_514 = __LIB_0__::func_895(Global_1835011[69 /*74*/].f_1) != true;
	__LIB_6__::func_905(&uLocal_391);
	__LIB_4__::func_228(&uLocal_391);
	__LIB_9__::func_261(&uLocal_391);
	__LIB_1__::func_396(&uLocal_391, 1);
	__LIB_4__::func_22(&uLocal_391, 1000f, 1);
	__LIB_9__::func_262(&uLocal_391, 1);
	__LIB_2__::func_906(&uLocal_391, 80);
	StringCopy(&Local_517, "camera_treatments", 64);
	StringCopy(&(Local_517.f_8), "GENERIC_CME_PULL_OUT_TREATMENT_REQUEST", 64);
	CAM::_0x6A4D224FC7643941(&Local_517);
	__LIB_5__::func_550(uParam0, 136178);
	__LIB_5__::func_256(uParam0, 136410);
	__LIB_5__::func_257(uParam0, 136682);
	sLocal_504 = "script@Story@SAD5@RidetoPikesBasin";
	sLocal_505 = "script@Story@SAD5@ReturnToBlackwater";
	CAM::_0x1B3C2D961F5FC0E1(sLocal_504);
	CAM::_0x1B3C2D961F5FC0E1(sLocal_505);
	return true;
}

bool func_414(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	func_858(uParam0);
	func_859(uParam0);
	iVar0 = __LIB_4__::func_939(uParam0);
	iVar1 = __LIB_5__::func_475(uParam0);
	iVar2 = __LIB_5__::func_279(uParam0, iVar0);
	if (__LIB_4__::func_937(uParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_832(uParam0);
		}
	}
	__LIB_5__::func_477(uParam0);
	__LIB_8__::func_801(uParam0);
	__LIB_5__::func_478(uParam0);
	__LIB_5__::func_479(uParam0);
	__LIB_5__::func_480(uParam0);
	func_865(uParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		__LIB_5__::func_575(uParam0);
	}
	if ((__LIB_4__::func_939(uParam0) == 0 && iVar2 < 3) && __LIB_5__::func_253(uParam0) == 0)
	{
		func_408(uParam0);
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
			if (__LIB_8__::func_910(uParam0))
			{
				if (func_872(uParam0))
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
					if (func_875(uParam0, iVar0, iVar1))
					{
						__LIB_5__::func_286(uParam0, iVar0, 5);
					}
				}
				else
				{
					__LIB_5__::func_482(uParam0);
					__LIB_5__::func_286(uParam0, iVar0, 3);
					if (func_877(uParam0, iVar0))
					{
						__LIB_5__::func_286(uParam0, iVar0, 4);
						if (func_875(uParam0, iVar0, iVar1))
						{
							__LIB_5__::func_286(uParam0, iVar0, 5);
						}
					}
				}
			}
			else if (__LIB_5__::func_52(uParam0))
			{
				func_877(uParam0, iVar0);
			}
			break;
		case 3:
			if (func_877(uParam0, iVar0))
			{
				__LIB_5__::func_286(uParam0, iVar0, 4);
				if (func_875(uParam0, iVar0, iVar1))
				{
					__LIB_5__::func_286(uParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_875(uParam0, iVar0, iVar1))
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
						__LIB_9__::func_449(uParam0, iVar1);
					}
				}
			}
			if (__LIB_5__::func_481(uParam0, iVar0, 5))
			{
				if (__LIB_5__::func_481(uParam0, iVar0, 7))
				{
					if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 67108864))
					{
						__LIB_8__::func_905(uParam0, __LIB_4__::func_939(uParam0));
					}
					__LIB_5__::func_582(uParam0, iVar1);
					func_859(uParam0);
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
						__LIB_8__::func_710(0);
					}
					__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 4194304);
				}
				if ((__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) && !__LIB_4__::func_948(uParam0, 8192)) && !__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 8))
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
						__LIB_9__::func_449(uParam0, __LIB_5__::func_475(uParam0));
					}
				}
			}
			if ((!__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) || __LIB_4__::func_948(uParam0, 8192)) || __LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 8))
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
					__LIB_8__::func_905(uParam0, __LIB_4__::func_939(uParam0));
				}
				__LIB_5__::func_582(uParam0, iVar1);
				func_859(uParam0);
				return true;
			}
			break;
		default:
			__LIB_5__::func_286(uParam0, iVar0, 7);
			break;
	}
	return false;
}

void func_617()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1080(0);
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
	func_1080(1);
}

void func_618()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_298(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_619()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1083(0);
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
	func_1083(1);
}

void func_620()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_2__::func_522(15000, 0, 0, 0, 1);
			func_1083(0);
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
	func_1083(1);
}

void func_621()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_298(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_298(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_624(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_624(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_624(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_624(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	__LIB_11__::func_837(iParam0, iParam1);
	return 1;
}

int func_665(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1128(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_298(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_2__::func_522(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

Vector3 func_681(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	bool bVar2;
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
	bVar2 = 9999999f;
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
		bVar10 = func_1142();
		if (VOLUME::_DOES_VOLUME_EXIST(bVar10))
		{
		}
	}
	if (!func_1143(Global_1310720.f_21))
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
			if (((((bVar3 < bVar2 && bVar3 > bParam10) && !__LIB_0__::func_86(vVar7)) && __LIB_1__::func_172(iVar0, bParam8, iParam12)) && !__LIB_0__::func_955(iVar0)) || bVar11)
			{
				if (__LIB_9__::func_68(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
				{
					vVar4 = { vVar7 };
					bVar2 = BUILTIN::VDIST(vParam0, vVar7);
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

int func_705(var uParam0)
{
	if (__LIB_5__::func_253(uParam0) == 3)
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(-811.6449f, -1320.908f, 43.0856f)) && INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(-811.6449f, -1320.908f, 43.0856f)))
		{
			if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(INTERIOR::GET_INTERIOR_AT_COORDS(-811.6449f, -1320.908f, 43.0856f), "bla_saloon_sadie5setdressing"))
			{
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(INTERIOR::GET_INTERIOR_AT_COORDS(-811.6449f, -1320.908f, 43.0856f), "bla_saloon_sadie5setdressing", 0);
				return 0;
			}
		}
	}
	if (__LIB_5__::func_253(uParam0) == 1)
	{
		func_828(Global_35, -831.7222f, -1325.755f, 42.6021f, 201.4829f, 2, 1073741824 /* Float: 2f */);
		func_828(Local_87[0 /*4*/], -829.9572f, -1332.049f, 42.4453f, 325.7074f, 2, 1073741824 /* Float: 2f */);
	}
	return 1;
}

int func_706(var uParam0)
{
	__LIB_0__::func_203(Local_87[0 /*4*/]);
	__LIB_5__::func_33(uParam0, 1024);
	func_828(Local_87[2 /*4*/], -829.5126f, -1327.814f, 43.6612f, -102.79f, 2, 1073741824 /* Float: 2f */);
	if (__LIB_0__::func_266(__LIB_0__::func_177(4), -828.2353f, -1330.542f, 42.4965f, 5f, 1, 1))
	{
		func_828(__LIB_0__::func_177(4), -751.3215f, -1296.156f, 42.3455f, 95.7014f, 2, 1073741824 /* Float: 2f */);
	}
	PATHFIND::_0xE5EF9DE716FF737E(Local_14.f_51, 0, 1);
	return 1;
}

int func_707(var uParam0)
{
	int iVar0;
	__LIB_0__::func_568(-830.1144f, -1328.595f, 42.5883f, 10f, 0);
	iVar0 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(-829.5126f, -1327.817f, 42.5839f, joaat("PROP_HITCHINGPOST"), 2f, 0, false);
	TASK::_TASK_USE_SCENARIO_POINT(Local_87[2 /*4*/], iVar0, 0, -1, true, true, 0, false, -1f, false);
	return 1;
}

int func_708(var uParam0)
{
	if (__LIB_4__::func_971(uParam0) > 1 && __LIB_4__::func_971(uParam0) < 4)
	{
		if (func_1160(536870912))
		{
			if (!__LIB_14__::func_312(uParam0, Local_87[2 /*4*/], 60f, 0, 0, 1, joaat("BLIP_STYLE_PLAYER_HORSE"), 1084227584 /* Float: 5f */, 1103626240 /* Float: 25f */))
			{
				func_1162(uParam0, 11, "sad5_ride_to_new_austin", 30f, 60f, 0, 1, 1, 1117126656 /* Float: 75f */, joaat("BLIP_STYLE_COMPANION"));
			}
			__LIB_6__::func_713(Local_87[0 /*4*/], 1071644672 /* Float: 1.75f */, 0, 1045220557 /* Float: 0.2f */, 1, 1077936128 /* Float: 3f */, 15f, 30f, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 1, 1045220557 /* Float: 0.2f */, 0);
		}
	}
	func_1164(uParam0);
	__LIB_8__::func_797(Local_87[0 /*4*/], &(vLocal_345[9 /*3*/]));
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
	PED::_0xAB0D553FE20A6E25(0.5f);
	__LIB_8__::func_875(Local_87[0 /*4*/], "SAD5_NEWHORSE", 1, 1);
	__LIB_8__::func_875(Local_87[0 /*4*/], "SAD5_RBNT_NBCH", 1, 1);
	__LIB_8__::func_875(Local_87[0 /*4*/], "SAD5_RBNT_NUNC", 1, 1);
	__LIB_8__::func_875(Local_87[0 /*4*/], "SAD5_RBNT_CONT", 1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_87[1 /*4*/]) && !PED::IS_PED_DEAD_OR_DYING(Local_87[1 /*4*/], true))
	{
		PED::SET_PED_RESET_FLAG(Local_87[1 /*4*/], 317, true);
	}
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			if (func_1167(uParam0))
			{
				__LIB_1__::func_538(0);
				func_1169(uParam0, 20000, 1f);
				iLocal_326[0] = PED::CREATE_GROUP(2);
				PED::SET_GROUP_FORMATION(iLocal_326[0], 10);
				PED::SET_PED_CONFIG_FLAG(Local_87[0 /*4*/], 279, true);
				PED::SET_PED_CONFIG_FLAG(Local_87[0 /*4*/], 167, true);
				PED::SET_PED_AS_GROUP_LEADER(Local_87[0 /*4*/], iLocal_326[0], false);
				func_1170(uParam0, "SAD5_S1_OBJ1", 0);
				__LIB_5__::func_590(uParam0, "SAD5_OBJ1", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_4__::func_952(uParam0, 1);
				__LIB_1__::func_718(7);
				__LIB_1__::func_148(&(vLocal_345[0 /*3*/]));
			}
			break;
		case 1:
			__LIB_1__::func_538(0);
			if (func_1167(uParam0))
			{
				__LIB_5__::func_372(uParam0, 0);
			}
			if (!__LIB_0__::func_71(Global_35))
			{
				__LIB_11__::func_812(uParam0, Local_87[2 /*4*/], "HORSE_RET", "HORSE_FAIL", 30f, 60f, 0, 1, 0, joaat("BLIP_STYLE_PLAYER_HORSE"), 0);
			}
			if (__LIB_0__::func_394(Global_35, Local_87[2 /*4*/], 0) && __LIB_0__::func_71(Local_87[0 /*4*/]))
			{
				__LIB_5__::func_511(3);
				__LIB_1__::func_721(7);
				AUDIO::_0x2B9C37C01BF25EDB("ride_to_New_Austin");
				__LIB_10__::func_930(uParam0, Local_87[0 /*4*/], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_4__::func_952(uParam0, 2);
				__LIB_5__::func_372(uParam0, 1);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_87[0 /*4*/], "sad5_ride_to_new_austin", 2, 9280, -1, 0, 1, -1);
				PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), Local_87[1 /*4*/], -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 4, 2, 0);
				func_1178();
			}
			else if (PED::IS_PED_ON_MOUNT(Local_87[0 /*4*/]) && !__LIB_5__::func_463())
			{
				if (__LIB_0__::func_265(&(vLocal_345[0 /*3*/])) > 12f)
				{
					func_1170(uParam0, "SAD5_MOUNT", 0);
				}
			}
			else
			{
				__LIB_1__::func_148(&(vLocal_345[0 /*3*/]));
			}
			break;
		case 2:
			if (!func_1160(536870912))
			{
				if (__LIB_0__::func_396(Global_35))
				{
					func_1181(536870912, 1);
				}
			}
			if (func_1167(uParam0))
			{
				if (__LIB_0__::func_265(&(vLocal_345[0 /*3*/])) >= 2f)
				{
					func_1170(uParam0, "SAD5_S1_OBJ2", 0);
					__LIB_4__::func_952(uParam0, 3);
					func_1182("script@cme@SAD5_CME_SHOT1");
				}
			}
			break;
		case 3:
			if (!func_1160(536870912))
			{
				if (__LIB_0__::func_396(Global_35))
				{
					func_1181(536870912, 1);
				}
			}
			__LIB_5__::func_486(uParam0, "SAD5_OBJ3", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_87[0 /*4*/], 0))
			{
				if (!__LIB_8__::func_684("SAD5_S1_OBJ2") && TASK::GET_PED_WAYPOINT_PROGRESS(Local_87[0 /*4*/]) < 30)
				{
					__LIB_5__::func_590(uParam0, "SAD5_OBJ3", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
				func_1185(uParam0);
				if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_87[0 /*4*/]) > 600 && !__LIB_8__::func_684("SAD5_RBNT_CONT"))
				{
					if (CAM::_0xDD0B7C5AE58F721D(&Local_517))
					{
						CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
						CAM::_0xB8B207C34285E978(&Local_517);
						__LIB_4__::func_952(uParam0, 4);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, true);
					}
				}
				else
				{
					__LIB_1__::func_148(&(vLocal_345[7 /*3*/]));
				}
			}
			else if (__LIB_0__::func_265(&(vLocal_345[7 /*3*/])) > 3f)
			{
				if (CAM::_0xDD0B7C5AE58F721D(&Local_517))
				{
					CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
					CAM::_0xB8B207C34285E978(&Local_517);
					__LIB_4__::func_952(uParam0, 4);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, true);
				}
			}
			break;
		case 4:
			CAM::_0xE296208C273BD7F0(-1, 3000, 0, 17, 1, 0);
			if ((__LIB_0__::func_265(&(vLocal_345[7 /*3*/])) > 2f || __LIB_0__::func_266(Local_87[0 /*4*/], -1964.229f, -2120.066f, 49.4617f, 9f, 1, 1)) && CAM::_0xA2B1C7EF759A63CE() >= 1f)
			{
				__LIB_4__::func_952(uParam0, 5);
			}
			break;
		case 5:
			CAM::_0xE296208C273BD7F0(-1, 3000, 0, 17, 1, 0);
			if (func_1186(uParam0))
			{
				WEAPON::_GIVE_WEAPON_TO_PED_2(Local_87[0 /*4*/], joaat("WEAPON_REPEATER_CARBINE_SADIE"), -1, false, true, 10, false, 0.5f, 1f, 752097756, true, 0f, false);
				return 1;
			}
			break;
	}
	return 0;
}

int func_709(var uParam0)
{
	PED::REMOVE_PED_FROM_GROUP(Local_87[0 /*4*/]);
	PED::REMOVE_GROUP(iLocal_326[0]);
	PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
	PED::SET_PED_CONFIG_FLAG(Local_87[0 /*4*/], 167, false);
	func_1181(536870912, 0);
	return 1;
}

int func_711(var uParam0)
{
	if (__LIB_5__::func_253(uParam0) != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_87[1 /*4*/]) || !ENTITY::DOES_ENTITY_EXIST(Local_87[0 /*4*/]))
		{
			return 0;
		}
		func_828(Local_87[1 /*4*/], -2772.807f, -2553.204f, 61.4095f, 105.3268f, 2, 1073741824 /* Float: 2f */);
		if (!PED::IS_PED_ON_MOUNT(Local_87[0 /*4*/]))
		{
			PED::_SET_PED_ON_MOUNT(Local_87[0 /*4*/], Local_87[1 /*4*/], -1, true);
		}
		func_828(Local_87[2 /*4*/], -2768.344f, -2555.074f, 61.6605f, 103.9571f, 2, 1073741824 /* Float: 2f */);
		if (!PED::IS_PED_ON_MOUNT(Global_35))
		{
			PED::_SET_PED_ON_MOUNT(Global_35, Local_87[2 /*4*/], -1, true);
		}
		__LIB_5__::func_511(3);
		__LIB_10__::func_930(uParam0, Local_87[0 /*4*/], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
		CLOCK::SET_CLOCK_TIME(18, 30, 0);
		MISC::_SET_WEATHER_TYPE(joaat("HIGHPRESSURE"), true, true, false, 0f, false);
		CLOCK::PAUSE_CLOCK(true, 0);
	}
	return 1;
}

int func_712(var uParam0)
{
	if (__LIB_4__::func_937(uParam0, 8))
	{
		__LIB_5__::func_490(uParam0, 1024);
		__LIB_5__::func_490(uParam0, 2048);
	}
	return 1;
}

int func_713(var uParam0)
{
	if ((!ENTITY::DOES_ENTITY_EXIST(Local_87[1 /*4*/]) || !ENTITY::DOES_ENTITY_EXIST(Local_87[0 /*4*/])) || !ENTITY::DOES_ENTITY_EXIST(Local_87[2 /*4*/]))
	{
		return 0;
	}
	if (!func_1192(0))
	{
		return 0;
	}
	return 1;
}

int func_714(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	func_1193(uParam0);
	WEAPON::_0xB832F1A686B9B810(Local_87[0 /*4*/], true, 1);
	WEAPON::_0xB832F1A686B9B810(Global_35, true, 1);
	__LIB_8__::func_797(Local_87[0 /*4*/], &(vLocal_345[9 /*3*/]));
	if (__LIB_4__::func_971(uParam0) < 3)
	{
		if ((PED::IS_PED_ON_MOUNT(Local_87[0 /*4*/]) && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_87[0 /*4*/], 0)) && TASK::GET_PED_WAYPOINT_PROGRESS(Local_87[0 /*4*/]) < 226)
		{
			if (!__LIB_14__::func_312(uParam0, Local_87[2 /*4*/], 60f, 0, 0, 1, joaat("BLIP_STYLE_PLAYER_HORSE"), 1084227584 /* Float: 5f */, 1103626240 /* Float: 25f */))
			{
				func_1162(uParam0, 11, "sad5_ride_to_ridge_line", 30f, 60f, 0, 1, 1, 1117126656 /* Float: 75f */, joaat("BLIP_STYLE_COMPANION"));
			}
			__LIB_6__::func_713(Local_87[0 /*4*/], 1071644672 /* Float: 1.75f */, 0, 1045220557 /* Float: 0.2f */, 1, 1077936128 /* Float: 3f */, 15f, 30f, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 1, 1045220557 /* Float: 0.2f */, 0);
		}
	}
	else
	{
		__LIB_11__::func_812(uParam0, Local_87[0 /*4*/], "SADIE_RETURN", "SADIE_ABANDON", 20f, 40f, 0, 1, 0, joaat("BLIP_STYLE_COMPANION"), 1);
	}
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			if (func_1194(uParam0))
			{
				AUDIO::_0x2B9C37C01BF25EDB("ride_to_ridge");
				iLocal_326[0] = PED::CREATE_GROUP(2);
				PED::SET_GROUP_FORMATION(iLocal_326[0], 9);
				PED::SET_PED_CONFIG_FLAG(Local_87[0 /*4*/], 279, true);
				PED::SET_PED_CONFIG_FLAG(Local_87[0 /*4*/], 167, true);
				PED::SET_PED_AS_GROUP_LEADER(Local_87[0 /*4*/], iLocal_326[0], false);
				__LIB_6__::func_713(Local_87[0 /*4*/], 1.75f, 0, 1045220557 /* Float: 0.2f */, 1, 1077936128 /* Float: 3f */, 1106247680 /* Float: 30f */, 1114636288 /* Float: 60f */, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 0, 1045220557 /* Float: 0.2f */, 0);
				__LIB_4__::func_952(uParam0, 1);
			}
			break;
		case 1:
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_87[0 /*4*/], "sad5_ride_to_ridge_line", 0, 9216, -1, 0, 1, -1);
			PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), Local_87[1 /*4*/], -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 4, 2, 0);
			func_1178();
			func_1170(uParam0, "SAD5_S2_OBJ3", 0);
			__LIB_4__::func_952(uParam0, 2);
			break;
		case 2:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_87[0 /*4*/], "sad5_ride_to_ridge_line"))
			{
				if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_87[0 /*4*/]) == 200)
				{
					func_1170(uParam0, "SAD5_S2_OBJ3_A", 0);
					func_1195();
				}
				if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_87[0 /*4*/]) == 123 && !__LIB_5__::func_463())
				{
					if (((((((((__LIB_1__::func_187(20) || __LIB_1__::func_187(19)) || __LIB_1__::func_187(11)) || __LIB_1__::func_187(12)) || __LIB_1__::func_187(13)) || __LIB_1__::func_187(16)) || __LIB_1__::func_187(15)) || __LIB_1__::func_187(17)) || __LIB_1__::func_187(18)) || __LIB_1__::func_187(14))
					{
						func_1170(uParam0, "SAD5_DONEBH", 0);
					}
				}
				if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_87[0 /*4*/]) == 157)
				{
					func_1170(uParam0, "SAD5_S1_CUTOFF", 0);
					func_1194(uParam0);
				}
			}
			__LIB_1__::func_448(Global_35, -3189.389f, -2539.622f, 67.221f, 0, 1112014848 /* Float: 50f */, 18f, 6f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
			__LIB_1__::func_448(Local_87[0 /*4*/], -3189.389f, -2539.622f, 67.221f, 0, 1112014848 /* Float: 50f */, 18f, 6f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_42, false, 0))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_87[2 /*4*/], 1f);
			}
			if ((((TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_87[0 /*4*/], "sad5_ride_to_ridge_line") && TASK::GET_PED_WAYPOINT_PROGRESS(Local_87[0 /*4*/]) >= 235) && __LIB_0__::func_665(Global_35, Local_87[0 /*4*/], 0, 0) < 6f) || ((__LIB_0__::func_665(Global_35, Local_87[0 /*4*/], 0, 0) < 6f && __LIB_0__::func_94(Local_87[0 /*4*/], -3189.389f, -2539.622f, 67.221f, 1) < 5f) && !TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_87[0 /*4*/], 0))) || __LIB_0__::func_94(Global_35, -3189.389f, -2539.622f, 67.221f, 1) < 7f)
			{
				PED::SET_PED_CONFIG_FLAG(Local_87[0 /*4*/], 167, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar4);
				TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
				__LIB_1__::func_474(Local_87[0 /*4*/], &iVar4, 0, 0, 1, 1);
				__LIB_4__::func_952(uParam0, 3);
				PED::REMOVE_PED_FROM_GROUP(Local_87[0 /*4*/]);
				PED::REMOVE_GROUP(iLocal_326[0]);
				PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
				AUDIO::_0x2B9C37C01BF25EDB("survey_Armadillo");
			}
			break;
		case 3:
			ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_463[0], "PL_A_WNT");
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_87[2 /*4*/], 1f);
			if (ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_463[0], "PL_A_WNT"))
			{
				if (!PED::IS_PED_ON_MOUNT(Local_87[0 /*4*/]))
				{
					vVar0 = { __LIB_9__::func_81(uLocal_463[1], "Sadie", "PL_B_ENTER") };
					fVar3 = __LIB_9__::func_82(uLocal_463[1], "Sadie", "PL_B_ENTER");
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_87[0 /*4*/], vVar0, 1.5f, 20000, 0.25f, 1, fVar3);
					ANIMSCENE::START_ANIM_SCENE(uLocal_463[0]);
					__LIB_4__::func_952(uParam0, 4);
				}
			}
			break;
		case 4:
			func_1194(uParam0);
			__LIB_1__::func_448(Global_35, -3189.389f, -2539.622f, 67.221f, 0, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 12f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
			func_1202(uParam0);
			func_1203(uParam0);
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_87[2 /*4*/], 1f);
				if (!func_1160(65536))
				{
					TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
					func_1204(Global_35);
					func_1181(65536, 1);
				}
			}
			vVar0 = { __LIB_9__::func_81(uLocal_463[1], "Sadie", "PL_B_ENTER") };
			if (((!__LIB_0__::func_163(Local_87[0 /*4*/], 713668775) && __LIB_0__::func_266(Local_87[0 /*4*/], vVar0, 1f, 1, 1)) && !PED::IS_PED_RAGDOLL(Local_87[0 /*4*/])) && !PED::IS_PED_ON_MOUNT(Global_35))
			{
				return 1;
			}
			else if (!__LIB_0__::func_163(Local_87[0 /*4*/], 713668775) && !__LIB_0__::func_266(Local_87[0 /*4*/], vVar0, 1f, 1, 1))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_87[0 /*4*/], vVar0, 1.5f, 20000, 0.25f, 1, fVar3);
			}
			break;
	}
	return 0;
}

int func_715(var uParam0)
{
	func_1181(65536, 0);
	__LIB_10__::func_935(uParam0, Local_87[0 /*4*/], 1);
	__LIB_10__::func_935(uParam0, Local_87[0 /*4*/], 1);
	__LIB_1__::func_721(7);
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	CLOCK::PAUSE_CLOCK(false, 0);
	return 1;
}

int func_716(var uParam0)
{
	if (__LIB_5__::func_253(uParam0) != 0)
	{
		if (((!ENTITY::DOES_ENTITY_EXIST(Local_87[1 /*4*/]) || !ENTITY::DOES_ENTITY_EXIST(Local_87[0 /*4*/])) || !func_1202(uParam0)) || !func_1203(uParam0))
		{
			return 0;
		}
		func_828(Local_87[1 /*4*/], -3187.453f, -2538.023f, 68.5978f, 66.7838f, 2, 1073741824 /* Float: 2f */);
		func_828(Local_87[0 /*4*/], -3198.062f, -2539.699f, 67.6044f, 104.8097f, 2, 1073741824 /* Float: 2f */);
		func_828(Local_87[2 /*4*/], -3188.65f, -2544.531f, 66.7838f, 60.8257f, 2, 1073741824 /* Float: 2f */);
		func_828(Global_35, -3197.432f, -2537.462f, 66.8072f, 102.7321f, 2, 1073741824 /* Float: 2f */);
		iLocal_427 = 5;
		CLOCK::SET_CLOCK_TIME(18, 30, 0);
		MISC::_SET_WEATHER_TYPE(joaat("HIGHPRESSURE"), true, true, false, 0f, false);
		func_1204(Global_35);
	}
	PED::REQUEST_PED_VISIBILITY_TRACKING(Local_100[0 /*4*/]);
	return 1;
}

int func_718(var uParam0)
{
	__LIB_5__::func_521(0.6f);
	__LIB_1__::func_148(&(vLocal_345[0 /*3*/]));
	return 1;
}

int func_719(var uParam0)
{
	int iVar0;
	func_1208(uParam0);
	func_1209();
	func_1210();
	__LIB_8__::func_797(Local_87[0 /*4*/], &(vLocal_345[9 /*3*/]));
	PATHFIND::_0xCF213A5FC3ABFC08(-3642.366f, -2607.699f, -14.7634f);
	if (__LIB_4__::func_971(uParam0) < 2)
	{
		PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
	}
	if (__LIB_4__::func_971(uParam0) < 3)
	{
		if (__LIB_11__::func_812(uParam0, Local_87[0 /*4*/], "SADIE_RETURN", "SADIE_ABANDON", 20f, 40f, iLocal_338, 1, 1, joaat("BLIP_STYLE_COMPANION"), 1))
		{
			if (!func_1160(268435456))
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_309[3]))
				{
					MAP::REMOVE_BLIP(&(iLocal_309[3]));
				}
			}
		}
		else if (!func_1160(268435456))
		{
			if (!MAP::DOES_BLIP_EXIST(iLocal_309[3]))
			{
				iLocal_309[3] = MAP::_BLIP_ADD_FOR_RADIUS(408396114, -3630.674f, -2591.092f, -15.2805f, 8f);
			}
		}
	}
	else if (__LIB_4__::func_971(uParam0) >= 3)
	{
		if (func_1160(536870912))
		{
			if (!__LIB_14__::func_312(uParam0, Local_87[2 /*4*/], 60f, 0, 0, 1, joaat("BLIP_STYLE_PLAYER_HORSE"), 1084227584 /* Float: 5f */, 1103626240 /* Float: 25f */))
			{
				func_1162(uParam0, 11, "sad5_follow_posse2", 30f, 80f, 0, 1, 1, 1117126656 /* Float: 75f */, joaat("BLIP_STYLE_COMPANION"));
			}
		}
		__LIB_6__::func_713(Local_87[0 /*4*/], 1071644672 /* Float: 1.75f */, 0, 1045220557 /* Float: 0.2f */, 1, 1077936128 /* Float: 3f */, 15f, 30f, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 1, 1045220557 /* Float: 0.2f */, 0);
	}
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			if (func_1211(uParam0))
			{
				if ((func_1202(uParam0) && func_1203(uParam0)) && func_1192(1))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_100[3 /*4*/], 1);
					func_1212(uParam0);
					PATHFIND::_0xCF213A5FC3ABFC08(-3642.366f, -2607.699f, 20f);
					__LIB_4__::func_952(uParam0, 1);
					__LIB_5__::func_590(uParam0, "SAD5_OBJ4", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
			}
			break;
		case 1:
			func_1213(uParam0);
			func_1214();
			if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE() || CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				__LIB_1__::func_382(iLocal_431[3], 0, 0);
			}
			else
			{
				__LIB_1__::func_382(iLocal_431[3], 1, 0);
			}
			break;
		case 2:
			if (func_1211(uParam0))
			{
				__LIB_1__::func_748(&(iLocal_431[3]), 0, 1);
				__LIB_1__::func_748(&(iLocal_431[5]), 1, 1);
				iLocal_497 = 2;
				__LIB_4__::func_952(uParam0, 3);
				__LIB_5__::func_372(uParam0, 2);
				__LIB_5__::func_590(uParam0, "SAD5_OBJ1", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_1__::func_718(7);
				__LIB_1__::func_148(&(vLocal_345[2 /*3*/]));
			}
			break;
		case 3:
			if (func_1211(uParam0))
			{
			}
			if (PED::IS_PED_ON_MOUNT(Global_35) && PED::IS_PED_ON_MOUNT(Local_87[0 /*4*/]))
			{
				__LIB_1__::func_721(7);
				func_1204(Global_35);
				__LIB_10__::func_930(uParam0, Local_87[0 /*4*/], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
				__LIB_5__::func_372(uParam0, 3);
				__LIB_5__::func_590(uParam0, "SAD5_OBJ3", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				HUD::_0x160825DADF1B04B3();
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_87[0 /*4*/], "sad5_follow_posse2", 0, 25608, -1, 0, 0, -1);
				if (!PED::DOES_GROUP_EXIST(iLocal_326[0]))
				{
					iLocal_326[0] = PED::CREATE_GROUP(2);
				}
				PED::SET_GROUP_FORMATION(iLocal_326[0], 10);
				PED::SET_PED_CONFIG_FLAG(Local_87[0 /*4*/], 279, true);
				PED::SET_PED_CONFIG_FLAG(Local_87[0 /*4*/], 167, true);
				PED::SET_PED_AS_GROUP_LEADER(Local_87[0 /*4*/], iLocal_326[0], false);
				PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), Local_87[1 /*4*/], -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 4, 2, 0);
				PED::_0xD5BD1B5318A81994(iLocal_326[0], 1);
				WEAPON::SET_CURRENT_PED_WEAPON(Local_87[0 /*4*/], joaat("WEAPON_REPEATER_CARBINE_SADIE"), true, 10, false, false);
				__LIB_4__::func_952(uParam0, 4);
				func_1178();
			}
			else
			{
				switch (iLocal_491)
				{
					case 0:
						if (!__LIB_5__::func_463() && __LIB_0__::func_265(&(vLocal_345[2 /*3*/])) > 7f)
						{
							func_1170(uParam0, "SAD5_S2_MOUNT", 0);
							__LIB_1__::func_148(&(vLocal_345[2 /*3*/]));
							iLocal_491++;
						}
						break;
					case 1:
						if (__LIB_0__::func_265(&(vLocal_345[2 /*3*/])) > 13f && !TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_100[0 /*4*/], 0))
						{
							__LIB_5__::func_505(uParam0, "SAD5_P_FAIL", "", 1, 0);
						}
						break;
				}
			}
			break;
		case 4:
			if (!func_1160(536870912))
			{
				if (__LIB_0__::func_396(Global_35))
				{
					func_1181(536870912, 1);
				}
			}
			if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_100[0 /*4*/], 0) || (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_100[0 /*4*/], 0) && TASK::GET_PED_WAYPOINT_PROGRESS(Local_100[0 /*4*/]) > 210))
			{
				if (!__LIB_5__::func_463())
				{
					func_1170(uParam0, "SAD5_S2_OBJ3_E", 0);
				}
				__LIB_4__::func_952(uParam0, 5);
				__LIB_1__::func_148(&(vLocal_345[2 /*3*/]));
			}
			break;
		case 5:
			if (!func_1160(536870912))
			{
				if (__LIB_0__::func_396(Global_35))
				{
					func_1181(536870912, 1);
				}
			}
			if ((TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_87[0 /*4*/], 0) && TASK::GET_PED_WAYPOINT_PROGRESS(Local_87[0 /*4*/]) >= 48) && !__LIB_0__::func_27(iLocal_462, 4))
			{
				func_1170(uParam0, "SAD5_S4_THROGH", 0);
				__LIB_1__::func_683(&iLocal_462, 4);
			}
			if (__LIB_0__::func_266(Global_35, -3085.376f, -2487.183f, 71.5158f, 6f, 1, 1) || (__LIB_0__::func_266(Local_87[0 /*4*/], -3085.376f, -2487.183f, 71.5158f, 6f, 1, 1) && __LIB_0__::func_665(Global_35, Local_87[0 /*4*/], 0, 0) < 10f))
			{
				if (func_1211(uParam0))
				{
					iVar0 = 0;
					while (iVar0 < 5)
					{
						func_1217(&(Local_100[iVar0 /*4*/]), joaat("BLIP_STYLE_ENEMY"), -662251075);
						iVar0++;
					}
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_87[0 /*4*/], Local_100[0 /*4*/], 10000, -1f, -1f, -1f);
					return 1;
				}
			}
			else if (__LIB_0__::func_265(&(vLocal_345[2 /*3*/])) > 60f)
			{
				__LIB_5__::func_505(uParam0, "SAD5_P_FAIL", "", 1, 0);
			}
			break;
	}
	return 0;
}

int func_720(var uParam0)
{
	PED::REMOVE_PED_FROM_GROUP(Local_87[0 /*4*/]);
	PED::REMOVE_GROUP(iLocal_326[0]);
	PED::_0x3088634CF8C819CF(Local_100[0 /*4*/]);
	func_1181(536870912, 0);
	return 1;
}

int func_721(var uParam0)
{
	struct<4> Var0;
	if (__LIB_5__::func_253(uParam0) != 0)
	{
		if (!func_1202(uParam0))
		{
			return 0;
		}
		func_828(iLocal_290[0], -3146.258f, -2423.694f, 22.7859f, 244.5583f, 2, 1073741824 /* Float: 2f */);
		func_828(iLocal_290[1], -3148.537f, -2421.352f, 22.83451f, 248.9164f, 2, 1073741824 /* Float: 2f */);
		func_828(iLocal_290[2], -3151.241f, -2422.371f, 22.83916f, 240.7146f, 2, 1073741824 /* Float: 2f */);
		func_828(iLocal_290[3], -3153.34f, -2419.713f, 22.76173f, 269.2332f, 2, 1073741824 /* Float: 2f */);
		func_1212(uParam0);
		Var0 = { func_1218(1, 3) };
		func_1219(Local_87[1 /*4*/], Var0, 2, 1073741824 /* Float: 2f */);
		__LIB_1__::func_571(Local_87[0 /*4*/], Local_87[1 /*4*/], 0, -1, 1);
		func_828(Local_87[2 /*4*/], -3076.883f, -2481.913f, 71.5397f, 331.3401f, 2, 1073741824 /* Float: 2f */);
		__LIB_1__::func_571(Global_35, Local_87[2 /*4*/], 0, -1, 1);
		__LIB_10__::func_930(uParam0, Local_87[0 /*4*/], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
		PED::SET_PED_CONFIG_FLAG(Local_87[0 /*4*/], 167, true);
		CLOCK::SET_CLOCK_TIME(18, 30, 0);
		MISC::_SET_WEATHER_TYPE(joaat("HIGHPRESSURE"), true, true, false, 0f, false);
	}
	return 1;
}

int func_723(var uParam0)
{
	__LIB_5__::func_521(0.6f);
	return 1;
}

int func_724(var uParam0)
{
	struct<23> Var0;
	int iVar25;
	int iVar26;
	func_1210();
	func_1221(uParam0);
	__LIB_8__::func_797(Local_87[0 /*4*/], &(vLocal_345[9 /*3*/]));
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_31, true, 0))
	{
		if (!__LIB_14__::func_312(uParam0, Local_87[2 /*4*/], 60f, iLocal_338, 0, 1, joaat("BLIP_STYLE_PLAYER_HORSE"), 1084227584 /* Float: 5f */, 1103626240 /* Float: 25f */))
		{
			func_1162(uParam0, 11, "sad5_follow_posse", 30f, 60f, iLocal_338, 0, 1, 1117126656 /* Float: 75f */, joaat("BLIP_STYLE_COMPANION"));
		}
		__LIB_6__::func_713(Local_87[0 /*4*/], 1071644672 /* Float: 1.75f */, 0, 1045220557 /* Float: 0.2f */, 1, 1077936128 /* Float: 3f */, 15f, 30f, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 1, 1045220557 /* Float: 0.2f */, 0);
	}
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Local_100[0 /*4*/], Local_14.f_22, false, 0))
			{
				__LIB_5__::func_372(uParam0, 1);
				__LIB_1__::func_148(&(vLocal_345[2 /*3*/]));
				if ((func_1203(uParam0) && func_1222(uParam0)) && func_1223(uParam0))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_100[0 /*4*/], "sad5_posse_ride_in_pikes_basin", 0, 71305216, -1, 0, 0, -1);
					__LIB_4__::func_952(uParam0, 1);
				}
			}
			break;
		case 1:
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
			Var0.f_8 = 3;
			Var0.f_4 = 21030;
			Var0.f_19 = 4;
			Var0.f_20 = 4;
			Var0.f_21 = 4;
			Var0.f_22 = 4;
			_NAMESPACE29::_0x66F9EB44342BB4C5(Local_87[0 /*4*/], &Var0);
			if (__LIB_0__::func_75(&(vLocal_345[2 /*3*/])))
			{
				if (__LIB_0__::func_265(&(vLocal_345[2 /*3*/])) > 3f)
				{
					func_1170(uParam0, "SAD5_S4_OBJ6", 0);
					__LIB_0__::func_37(&(vLocal_345[2 /*3*/]));
				}
			}
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_100[0 /*4*/], 0))
			{
				func_1224();
			}
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_100[0 /*4*/], 0) && TASK::GET_PED_WAYPOINT_PROGRESS(Local_100[0 /*4*/]) > 45)
			{
				func_1178();
				if (!PED::DOES_GROUP_EXIST(iLocal_326[0]))
				{
					iLocal_326[0] = PED::CREATE_GROUP(2);
				}
				PED::SET_PED_CONFIG_FLAG(Local_87[0 /*4*/], 279, true);
				PED::SET_PED_AS_GROUP_LEADER(Local_87[0 /*4*/], iLocal_326[0], false);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_87[0 /*4*/], "sad5_follow_posse", 0, 1032, -1, 0, 0, -1);
				TASK::TASK_LOOK_AT_ENTITY(Local_87[0 /*4*/], Local_100[0 /*4*/], -1, 1024, 51, 0);
				PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), Local_87[1 /*4*/], -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 4, 2, 0);
				PED::SET_GROUP_FORMATION(iLocal_326[0], 10);
				PED::_0xD5BD1B5318A81994(iLocal_326[0], 1);
				PED::_0x9BBEAF8B0C007F1E(Local_87[0 /*4*/], 0);
				TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("sad5_follow_posse", 1, 0.1f, 0.5f, 0);
				__LIB_4__::func_952(uParam0, 2);
			}
			break;
		case 2:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_100[0 /*4*/], 0))
			{
				func_1224();
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_45, true, 0))
				{
					if (!__LIB_5__::func_463() && !__LIB_0__::func_27(iLocal_462, 8))
					{
						func_1170(uParam0, "SAD5_S4_OBJ6_A", 0);
						__LIB_1__::func_683(&iLocal_462, 8);
					}
				}
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_46, true, 0))
				{
					if (!__LIB_5__::func_463() && !__LIB_0__::func_27(iLocal_462, 16))
					{
						func_1170(uParam0, "SAD5_S4_OBJ6_A", 0);
						__LIB_1__::func_683(&iLocal_462, 16);
					}
				}
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_87[0 /*4*/], "sad5_follow_posse"))
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_87[0 /*4*/]) >= 40)
					{
						if (!__LIB_5__::func_463() && !__LIB_0__::func_27(iLocal_462, 32))
						{
							func_1170(uParam0, "SAD5_S4_OBSERVE", 0);
							__LIB_1__::func_683(&iLocal_462, 32);
						}
					}
					if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_87[0 /*4*/]) >= 110)
					{
						if (!__LIB_5__::func_463() && !__LIB_0__::func_27(iLocal_462, 64))
						{
							func_1170(uParam0, "SAD5_S4_SECLOOK", 0);
							__LIB_1__::func_683(&iLocal_462, 64);
						}
					}
				}
				if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_100[0 /*4*/]) >= 230)
				{
					if (!__LIB_5__::func_463())
					{
						func_1170(uParam0, "SAD5_S4_OBJ6_B", 0);
						TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("sad5_follow_posse", 0, 0.5f, 0.5f, 1);
						PED::_0x9BBEAF8B0C007F1E(Local_87[0 /*4*/], 1);
					}
					iVar25 = 0;
					while (iVar25 < 5)
					{
						if (MAP::DOES_BLIP_EXIST(Local_100[iVar25 /*4*/].f_2))
						{
							__LIB_0__::func_325(&(Local_100[iVar25 /*4*/].f_2));
						}
						iVar25++;
					}
					if (func_1223(uParam0))
					{
						__LIB_4__::func_952(uParam0, 3);
						__LIB_1__::func_148(&(vLocal_345[3 /*3*/]));
						AUDIO::_0x2B9C37C01BF25EDB("follow_posse");
					}
				}
			}
			break;
		case 3:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_100[0 /*4*/], 0))
			{
				func_1224();
				if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_100[0 /*4*/]) >= 308)
				{
					TASK::WAYPOINT_PLAYBACK_PAUSE(Local_100[0 /*4*/], 0, 0, 0);
				}
			}
			if (func_1223(uParam0))
			{
				__LIB_1__::func_148(&(vLocal_345[3 /*3*/]));
				if (!__LIB_14__::func_476(Global_35, -2734.526f, -2422.661f, 71.9038f, &(vLocal_345[3 /*3*/]), 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 10f, 7f, 1f, 0, 1, 1, 1, 1))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_87[2 /*4*/], 1f);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_87[0 /*4*/], 1f);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_87[1 /*4*/], 1f);
				}
				if (!func_1160(65536))
				{
					PED::SET_PED_CONFIG_FLAG(Local_87[0 /*4*/], 167, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar26);
					TASK::CLEAR_PED_TASKS(0, true, false);
					TASK::TASK_DISMOUNT_ANIMAL(0, 262144, 0, 0, 0, 0);
					__LIB_1__::func_474(Local_87[0 /*4*/], &iVar26, 0.3f, 0.3f, 1, 1);
					func_1181(65536, 1);
					func_1170(uParam0, "SAD5_S4_SECARVE", 0);
					func_1195();
					AUDIO::_0x2B9C37C01BF25EDB("decide_approach");
				}
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_100[0 /*4*/], 0) && TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_100[0 /*4*/]))
				{
					PED::SET_GROUP_FORMATION(iLocal_326[1], 10);
					TASK::WAYPOINT_PLAYBACK_RESUME(Local_100[0 /*4*/], false, -1, 0);
				}
				else if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_100[0 /*4*/], 0))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_100[0 /*4*/], 1.75f, 0, -1082130432 /* Float: -1f */, 0);
				}
				if (!PED::IS_PED_ON_MOUNT(Local_87[0 /*4*/]) && (__LIB_0__::func_266(Global_35, -2737.095f, -2428.279f, 72.556f, 8f, 1, 1) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_31, true, 0)))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 0f);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_87[2 /*4*/], 0f);
					if (func_1192(2))
					{
						TASK::TASK_ENTER_ANIM_SCENE(Local_87[0 /*4*/], uLocal_463[3], "SADIE", "PL_A_ENTER", 1.48f, 1, 3, 20000, -1082130432 /* Float: -1f */);
						WEAPON::_HIDE_PED_WEAPONS(Local_87[0 /*4*/], 2, true);
						if (PED::IS_PED_ON_MOUNT(Global_35))
						{
							TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
							func_1204(Global_35);
						}
						func_828(iLocal_290[0], -2712.642f, -2363.377f, 46.113f, -107.85f, 2, 1073741824 /* Float: 2f */);
						func_828(iLocal_290[1], -2715.088f, -2361.924f, 46.1111f, -75.95f, 2, 1073741824 /* Float: 2f */);
						func_828(iLocal_290[2], -2716.589f, -2365.964f, 46.0648f, -61.63f, 2, 1073741824 /* Float: 2f */);
						func_828(iLocal_290[3], -2719.973f, -2373.665f, 45.0891f, -155.93f, 2, 1073741824 /* Float: 2f */);
						func_1227(uParam0);
						__LIB_4__::func_952(uParam0, 4);
					}
				}
			}
			break;
		case 4:
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
			func_1227(uParam0);
			if (__LIB_0__::func_266(Local_87[0 /*4*/], -2738.392f, -2421.548f, 71.3189f, 4.5f, 0, 0))
			{
				__LIB_5__::func_20(0, 0);
				func_1170(uParam0, "SAD5_S4_OBJ7", 0);
				func_1204(Global_35);
				return 1;
			}
			break;
	}
	return 0;
}

int func_725(var uParam0)
{
	int iVar0;
	if (iLocal_325 == 0)
	{
		iLocal_325 = ENTITY::_0x6F3068258A499E52(joaat("P_NEW_AUS_PIKEBR01"), -2816.099f, -2367.828f, 57.4812f, 9);
	}
	if (!ENTITY::_0x1FF441D7954F8709(iLocal_325))
	{
		return 0;
	}
	if (!PATHFIND::_0x19C7567D2F2287D6(Local_14.f_6, 7))
	{
		return 0;
	}
	PED::REMOVE_PED_FROM_GROUP(Local_87[0 /*4*/]);
	PED::REMOVE_GROUP(iLocal_326[0]);
	PED::SET_PED_CONFIG_FLAG(Local_87[0 /*4*/], 279, false);
	func_1228();
	func_1229();
	__LIB_1__::func_721(7);
	func_828(iLocal_290[0], -2712.642f, -2363.377f, 46.113f, -107.85f, 2, 1073741824 /* Float: 2f */);
	func_828(iLocal_290[1], -2715.088f, -2361.924f, 46.1111f, -75.95f, 2, 1073741824 /* Float: 2f */);
	func_828(iLocal_290[2], -2716.589f, -2365.964f, 46.0648f, -61.63f, 2, 1073741824 /* Float: 2f */);
	func_828(iLocal_290[3], -2719.973f, -2373.665f, 45.0891f, -155.93f, 2, 1073741824 /* Float: 2f */);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_1217(&(Local_100[iVar0 /*4*/]), joaat("BLIP_STYLE_ENEMY"), -662251075);
		iVar0++;
	}
	return 1;
}

int func_726(var uParam0)
{
	int iVar0;
	struct<4> Var1;
	if (__LIB_5__::func_253(uParam0) == 1)
	{
		iLocal_429 = 10;
		iLocal_428 = 6;
	}
	if (__LIB_5__::func_253(uParam0) != 0)
	{
		if ((!func_1202(uParam0) || !func_1203(uParam0)) || !func_1222(uParam0))
		{
			return 0;
		}
		if (iLocal_325 == 0)
		{
			iLocal_325 = ENTITY::_0x6F3068258A499E52(joaat("P_NEW_AUS_PIKEBR01"), -2816.099f, -2367.828f, 57.4812f, 9);
		}
		if (!ENTITY::_0x1FF441D7954F8709(iLocal_325))
		{
			return 0;
		}
		WEAPON::_0x72D4CB5DB927009C(joaat("WEAPON_REPEATER_CARBINE"), -1, 0);
		if (!WEAPON::_0xFF07CF465F48B830(joaat("WEAPON_REPEATER_CARBINE")))
		{
			return 0;
		}
		if (!PATHFIND::_0x19C7567D2F2287D6(Local_14.f_6, 7))
		{
			return 0;
		}
		func_828(iLocal_290[0], -2712.642f, -2363.377f, 46.113f, -107.85f, 2, 1073741824 /* Float: 2f */);
		func_828(iLocal_290[1], -2715.088f, -2361.924f, 46.1111f, -75.95f, 2, 1073741824 /* Float: 2f */);
		func_828(iLocal_290[2], -2716.589f, -2365.964f, 46.0648f, -61.63f, 2, 1073741824 /* Float: 2f */);
		func_828(iLocal_290[3], -2719.973f, -2373.665f, 45.0891f, -155.93f, 2, 1073741824 /* Float: 2f */);
		Var1 = { func_1218(1, 4) };
		func_1219(Local_87[1 /*4*/], Var1, 2, 1073741824 /* Float: 2f */);
		func_828(Local_87[0 /*4*/], -2738.392f, -2421.548f, 71.3189f, 3.3657f, 2, 1073741824 /* Float: 2f */);
		func_828(Local_87[2 /*4*/], -2746.484f, -2425.412f, 71.6492f, 338.0404f, 2, 1073741824 /* Float: 2f */);
		func_828(Local_100[4 /*4*/], -2729.931f, -2370.952f, 44.1134f, 83.6627f, 2, 1073741824 /* Float: 2f */);
		TASK::TASK_CARRIABLE(Local_100[4 /*4*/], joaat("HOGTIED_PED"), iLocal_290[0], 0, 0);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 1, false, false);
		PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, false);
		__LIB_10__::func_930(uParam0, Local_87[0 /*4*/], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
		func_1228();
		func_1229();
		iVar0 = 0;
		while (iVar0 < 4)
		{
			func_1217(&(Local_100[iVar0 /*4*/]), joaat("BLIP_STYLE_ENEMY"), -662251075);
			iVar0++;
		}
		CLOCK::SET_CLOCK_TIME(18, 58, 0);
		MISC::_SET_WEATHER_TYPE(joaat("HIGHPRESSURE"), true, true, false, 0f, false);
		iLocal_515 = 1;
	}
	return 1;
}

int func_727(var uParam0)
{
	PED::_REQUEST_PED_EMOTIONAL_PRESET(Local_121[3 /*4*/], "Default_Shocked");
	PED::_REQUEST_PED_EMOTIONAL_PRESET(Local_121[4 /*4*/], "Default_Shocked");
	if (!PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(Local_121[3 /*4*/], "Default_Shocked") || !PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(Local_121[4 /*4*/], "Default_Shocked"))
	{
		return 0;
	}
	return 1;
}

int func_728(var uParam0)
{
	int iVar0;
	TASK::_0xFF745B0346E19E2C(joaat("HOGTIED_PED"));
	if (!TASK::_0xB8F52A3F84A7CC59(joaat("HOGTIED_PED")))
	{
		return 0;
	}
	__LIB_5__::func_521(0.6f);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_100[iVar0 /*4*/], joaat("REL_PLAYER_ENEMY"));
		iVar0++;
	}
	iLocal_309[7] = MAP::_0x3E593DF9C2962EC6(953018525);
	MAP::SET_BLIP_SPRITE(iLocal_309[7], joaat("BLIP_AMBIENT_BOUNTY_TARGET"), true);
	MAP::_0x97F6F158CC5B5CA2(Local_100[4 /*4*/], iLocal_309[7]);
	__LIB_1__::func_148(&(vLocal_345[2 /*3*/]));
	return 1;
}

int func_729(var uParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(Local_100[4 /*4*/]))
	{
		__LIB_1__::func_532(Global_1835011[72 /*74*/].f_1, 1);
	}
	__LIB_8__::func_769(joaat("HONOR_EVENT_KILL_HORSE"));
	if (__LIB_4__::func_971(uParam0) > 4)
	{
		__LIB_11__::func_812(uParam0, Local_87[0 /*4*/], "SADIE_RETURN", "SADIE_ABANDON", 80f, 100f, 0, 1, 1, joaat("BLIP_STYLE_COMPANION"), 1);
		if (__LIB_5__::func_484(&(vLocal_345[14 /*3*/]), 60f))
		{
			__LIB_8__::func_795(uParam0, Local_87[0 /*4*/], 1, 1);
		}
		else
		{
			__LIB_8__::func_795(uParam0, Local_87[0 /*4*/], 0, 1);
		}
	}
	if (__LIB_4__::func_971(uParam0) < 5)
	{
		func_1234(uParam0);
		PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 47, 1);
	}
	if (__LIB_4__::func_971(uParam0) < 6)
	{
		func_1235(uParam0);
		func_1236();
	}
	if (__LIB_4__::func_971(uParam0) > 5)
	{
		func_1237();
	}
	if (__LIB_4__::func_971(uParam0) < 7)
	{
		PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
		func_1238(Local_121[6 /*4*/]);
		func_1238(Local_121[7 /*4*/]);
		func_1238(Local_121[8 /*4*/]);
		__LIB_1__::func_538(0);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LEAD_ANIMAL"), false);
	}
	func_1239(uParam0);
	func_1240();
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			__LIB_11__::func_812(uParam0, Local_87[0 /*4*/], "SADIE_RETURN", "SADIE_ABANDON", 13f, 20f, 0, 1, 1, joaat("BLIP_STYLE_COMPANION"), 1);
			if (func_1192(3) && func_1192(2))
			{
				func_1241(uParam0);
				func_1227(uParam0);
				func_1242(uParam0);
			}
			func_1243(uParam0);
			break;
		case 1:
		case 2:
			func_1162(uParam0, 11, "sad5_sadie_sneak_1", 25f, 50f, 0, 0, 1, 1117126656 /* Float: 75f */, joaat("BLIP_STYLE_COMPANION"));
			func_1244(uParam0);
			break;
		case 3:
			break;
		case 4:
			__LIB_11__::func_812(uParam0, Local_87[0 /*4*/], "SADIE_RETURN", "SADIE_ABANDON", 12f, 28f, 0, 1, 1, joaat("BLIP_STYLE_COMPANION"), 1);
			if (!func_1160(131072))
			{
				func_1181(131072, 1);
			}
			break;
		case 5:
			if (ANIMSCENE::_0x005E6F28DD7ED58D(uLocal_463[2], "MALE_BOUNTY"))
			{
				TASK::TASK_CARRIABLE(Local_100[4 /*4*/], joaat("HOGTIED_PED"), 0, 0, 0);
			}
			func_1245(uParam0);
			func_1246(uParam0);
			break;
		case 6:
			__LIB_10__::func_935(uParam0, Local_87[0 /*4*/], 1);
			func_1247(uParam0);
			func_1248();
			break;
		case 7:
			func_1249(uParam0);
			func_1248();
			func_1250();
			break;
		case 8:
			__LIB_10__::func_930(uParam0, Local_87[0 /*4*/], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_87[0 /*4*/], 30, false);
			__LIB_0__::func_37(&(vLocal_345[14 /*3*/]));
			return 1;
	}
	return 0;
}

int func_730(var uParam0)
{
	if (PATHFIND::_0xDE0EA444735C1368(Local_14.f_9))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(Local_14.f_9);
	}
	if (PATHFIND::_0xDE0EA444735C1368(Local_14.f_10))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(Local_14.f_10);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_121[3 /*4*/]) && ENTITY::DOES_ENTITY_EXIST(Local_121[4 /*4*/]))
	{
		PED::_REMOVE_PED_EMOTIONAL_PRESET(Local_121[3 /*4*/], "Default_Shocked");
		PED::_REMOVE_PED_EMOTIONAL_PRESET(Local_121[3 /*4*/], "Default_Shocked");
	}
	PED::REMOVE_PED_DEFENSIVE_AREA(Local_87[0 /*4*/], false);
	return 1;
}

int func_731(var uParam0)
{
	if (__LIB_5__::func_253(uParam0) != 0)
	{
		if (iLocal_325 == 0)
		{
			iLocal_325 = ENTITY::_0x6F3068258A499E52(joaat("P_NEW_AUS_PIKEBR01"), -2816.099f, -2367.828f, 57.4812f, 9);
		}
		if (!ENTITY::_0x1FF441D7954F8709(iLocal_325))
		{
			return 0;
		}
		if ((!func_1203(uParam0) || !func_1251(uParam0)) || !func_1252(uParam0))
		{
			return 0;
		}
		TASK::_0xFF745B0346E19E2C(joaat("HOGTIED_PED"));
		if (!TASK::_0xB8F52A3F84A7CC59(joaat("HOGTIED_PED")))
		{
			return 0;
		}
		func_828(Local_87[1 /*4*/], -2719.5f, -2366.439f, 45.0118f, 120.2631f, 2, 1073741824 /* Float: 2f */);
		__LIB_1__::func_571(Local_87[0 /*4*/], Local_87[1 /*4*/], 0, -1, 1);
		func_828(Local_87[2 /*4*/], -2711.091f, -2367.396f, 45.1172f, 87.9848f, 2, 1073741824 /* Float: 2f */);
		__LIB_1__::func_571(Global_35, Local_87[2 /*4*/], 0, -1, 1);
		if (__LIB_0__::func_895(Global_1835011[72 /*74*/].f_1) == 1)
		{
			TASK::TASK_CARRIABLE(Local_100[4 /*4*/], joaat("DEAD_HOGTIED_CARRIABLE_HUMAN"), Local_87[2 /*4*/], 0, 0);
		}
		else
		{
			TASK::TASK_CARRIABLE(Local_100[4 /*4*/], joaat("HOGTIED_PED"), Local_87[2 /*4*/], 0, 0);
		}
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_100[4 /*4*/], 3);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_87[0 /*4*/], 30, false);
		__LIB_10__::func_930(uParam0, Local_87[0 /*4*/], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
		__LIB_5__::func_511(3);
		CLOCK::SET_CLOCK_TIME(19, 0, 0);
		MISC::_SET_WEATHER_TYPE_TRANSITION(joaat("HIGHPRESSURE"), joaat("MISTY"), 0.5f, 1);
	}
	return 1;
}

int func_732(var uParam0)
{
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_87[2 /*4*/], true);
	return 1;
}

int func_733(var uParam0)
{
	__LIB_5__::func_521(0.6f);
	if (__LIB_8__::func_684("SAD5_WARN"))
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION("SAD5_WARN", true, true);
	}
	return 1;
}

int func_734(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	func_1253(uParam0);
	func_1254();
	func_1255();
	func_1256();
	func_1257(uParam0);
	func_1248();
	func_1258(uParam0);
	func_1259(uParam0);
	POPULATION::_0xF45E46DEECF7DF6E(2048, 0, 0, -1, -1);
	PED::_0xC0258742B034DFAF(0f);
	PED::_0xAB0D553FE20A6E25(0f);
	__LIB_8__::func_769(joaat("HONOR_EVENT_KILL_HORSE"));
	if (__LIB_4__::func_971(uParam0) < 6)
	{
		func_1240();
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_100[4 /*4*/]))
	{
		__LIB_1__::func_532(Global_1835011[72 /*74*/].f_1, 1);
	}
	if (!PED::IS_PED_ON_MOUNT(Local_87[0 /*4*/]) && !func_1160(4))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::CLEAR_PED_TASKS(0, true, false);
		TASK::TASK_MOUNT_ANIMAL(0, Local_87[1 /*4*/], 20000, -1, 2f, 1, 0, 0);
		__LIB_1__::func_474(Local_87[0 /*4*/], &iVar0, 0, 0, 1, 1);
		func_1181(4, 1);
	}
	if (PED::IS_PED_ON_MOUNT(Local_87[0 /*4*/]) && func_1160(4))
	{
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_87[0 /*4*/], "sad5_sadie_escape", 0, 1032, -1, 0, 1, -1);
		func_1181(4, 0);
	}
	if (__LIB_4__::func_971(uParam0) < 5)
	{
		func_1260();
		if (__LIB_5__::func_484(&(vLocal_345[14 /*3*/]), 50f))
		{
			__LIB_8__::func_795(uParam0, Local_87[0 /*4*/], 1, 1);
		}
		else
		{
			__LIB_8__::func_795(uParam0, Local_87[0 /*4*/], 0, 1);
		}
	}
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			if ((func_1251(uParam0) && func_1252(uParam0)) && !__LIB_5__::func_463())
			{
				__LIB_2__::func_761(-3005.524f, -2471.565f, 29.9084f, 60f, 0, 0);
				POPULATION::_0x18262CAFEBB5FBE1(Local_14.f_26, 0, 0, 0, -1, -1, 0);
				AUDIO::_0x2B9C37C01BF25EDB("escape_basin");
				POPULATION::_0xC6DCC2A3A8825C85(1);
				__LIB_4__::func_952(uParam0, 1);
				func_1170(uParam0, "SAD5_S7_LETSGO", 0);
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_5__::func_590(uParam0, "SAD5_OBJ9", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_1__::func_148(&(vLocal_345[0 /*3*/]));
				iLocal_326[0] = PED::CREATE_GROUP(2);
				PED::SET_PED_CONFIG_FLAG(Local_87[0 /*4*/], 279, true);
				PED::SET_PED_AS_GROUP_LEADER(Local_87[0 /*4*/], iLocal_326[0], false);
				PED::SET_GROUP_FORMATION(iLocal_326[0], 10);
				PED::_0xD5BD1B5318A81994(iLocal_326[0], 1);
				PED::_0x9BBEAF8B0C007F1E(Global_35, 0);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_87[0 /*4*/], "sad5_sadie_escape", 0, 1024, -1, 0, 1, -1);
				PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), Local_87[1 /*4*/], -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 4, 2, 0);
				PED::SET_PED_ACCURACY(Local_87[0 /*4*/], 10);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_87[0 /*4*/], true);
				PLAYER::_0xBBADFB5E5E5766FB(PLAYER::PLAYER_ID(), 0.6f);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, __LIB_0__::func_664(), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
				TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("sad5_sadie_escape", 1, 0.1f, 1f, 0);
				__LIB_1__::func_148(&(vLocal_345[12 /*3*/]));
			}
			break;
		case 1:
			func_1263(uParam0);
			__LIB_4__::func_952(uParam0, 2);
			break;
		case 2:
			if (!func_1160(536870912))
			{
				if (__LIB_0__::func_396(Global_35))
				{
					func_1181(536870912, 1);
				}
			}
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_15, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Local_87[0 /*4*/], Local_14.f_15, true, 0))
			{
				if (!__LIB_5__::func_463() && !__LIB_0__::func_27(iLocal_462, 16777216))
				{
					func_1170(uParam0, "SAD5_S7_ENEM_B", 0);
					__LIB_1__::func_683(&iLocal_462, 16777216);
				}
				if (!PED::_0xCC2B20596E29E4E3(Local_87[0 /*4*/], 30))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_87[0 /*4*/], 30, true);
				}
			}
			if ((!__LIB_5__::func_463() && __LIB_0__::func_265(&(vLocal_345[0 /*3*/])) > 10f) && __LIB_0__::func_27(iLocal_462, 16777216))
			{
				if (iVar1 == 0)
				{
					func_1170(uParam0, "SAD5_S7_TAKEOT1", 0);
				}
				else if (iVar1 == 1)
				{
					func_1170(uParam0, "SAD5_S7_ABOVE", 0);
				}
				else
				{
					func_1170(uParam0, "SAD5_S7_TAKEOT2", 0);
				}
				__LIB_1__::func_148(&(vLocal_345[0 /*3*/]));
			}
			if (__LIB_0__::func_266(Global_35, -2811.751f, -2465.927f, 38.7394f, 7f, 1, 1))
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					if (func_1264(uParam0, iVar2, 2))
					{
					}
					iVar2++;
				}
				func_1217(&(Local_170[7 /*4*/]), joaat("BLIP_STYLE_ENEMY"), 942020339);
				func_1217(&(Local_170[8 /*4*/]), joaat("BLIP_STYLE_ENEMY"), 942020339);
				func_1217(&(Local_170[9 /*4*/]), joaat("BLIP_STYLE_ENEMY"), 942020339);
				func_1170(uParam0, "SAD5_S7_ENEM_C", 0);
				__LIB_4__::func_952(uParam0, 3);
				__LIB_1__::func_148(&(vLocal_345[0 /*3*/]));
			}
			break;
		case 3:
			if (!__LIB_5__::func_463())
			{
				if (!__LIB_0__::func_27(iLocal_462, 8388608))
				{
					func_1170(uParam0, "SAD5_S7_EVERYWH", 0);
					__LIB_1__::func_683(&iLocal_462, 8388608);
				}
				if (__LIB_0__::func_265(&(vLocal_345[0 /*3*/])) > 12f)
				{
					func_1170(uParam0, "SAD5_S7_CHASE", 0);
					__LIB_1__::func_148(&(vLocal_345[0 /*3*/]));
				}
			}
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_38, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_39, true, 0))
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					if (func_1264(uParam0, iVar2, 3))
					{
					}
					iVar2++;
				}
				func_1170(uParam0, "SAD5_S7_ENEM_D", 0);
				__LIB_4__::func_952(uParam0, 4);
				func_1217(&(Local_170[12 /*4*/]), joaat("BLIP_STYLE_ENEMY"), 942020339);
				func_1217(&(Local_170[13 /*4*/]), joaat("BLIP_STYLE_ENEMY"), 942020339);
				func_1217(&(Local_170[14 /*4*/]), joaat("BLIP_STYLE_ENEMY"), 942020339);
			}
			break;
		case 4:
			if ((!__LIB_5__::func_463() && __LIB_0__::func_265(&(vLocal_345[0 /*3*/])) > 12f) && iLocal_426 < 3)
			{
				func_1170(uParam0, "SAD5_S7_CHASE", 0);
				__LIB_1__::func_148(&(vLocal_345[0 /*3*/]));
			}
			func_1265(uParam0);
			break;
		case 5:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (__LIB_0__::func_266(Local_87[0 /*4*/], -3152.226f, -2420.067f, 22.79447f, 4f, 1, 1) || CAM::_0xA2B1C7EF759A63CE() == 1f)
			{
				PED::REMOVE_PED_FROM_GROUP(Local_87[0 /*4*/]);
				PED::REMOVE_GROUP(iLocal_326[0]);
				func_1266();
				__LIB_4__::func_952(uParam0, 6);
				__LIB_5__::func_20(1, 0);
				if (!func_1160(-2147483648))
				{
					__LIB_9__::func_101(uParam0, joaat("SAD5_KILLALLPEDS"));
				}
			}
			break;
		case 6:
			CAM::_0xE296208C273BD7F0(-1, 3000, 0, 17, 1, 0);
			if (func_1268(uParam0))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				iLocal_326[0] = PED::CREATE_GROUP(2);
				PED::SET_PED_CONFIG_FLAG(Local_87[0 /*4*/], 279, true);
				PED::SET_PED_AS_GROUP_LEADER(Local_87[0 /*4*/], iLocal_326[0], false);
				PED::SET_GROUP_FORMATION(iLocal_326[0], 10);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_87[0 /*4*/], "sad5_ride_to_bank", 0, 9224, -1, 0, 1, -1);
				PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), Local_87[1 /*4*/], -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 4, 2, 0);
				PED::SET_PED_CONFIG_FLAG(Local_87[0 /*4*/], 167, true);
				__LIB_4__::func_952(uParam0, 7);
				__LIB_5__::func_372(uParam0, 1);
			}
			break;
		case 7:
			if (!CAM::IS_CINEMATIC_CAM_RENDERING())
			{
				CAM::_0x0A5A4F1979ABB40E(&Local_517);
				__LIB_5__::func_590(uParam0, "SAD5_OBJ3", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_10__::func_930(uParam0, Local_87[0 /*4*/], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

int func_735(var uParam0)
{
	__LIB_1__::func_721(7);
	PED::SET_PED_CONFIG_FLAG(Local_87[0 /*4*/], 301, false);
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	func_1269();
	iLocal_480 = 0;
	if (ENTITY::_0x1FF441D7954F8709(iLocal_325))
	{
		ENTITY::_0xD2B9C78537ED5759(iLocal_325);
	}
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_87[2 /*4*/], false);
	return 1;
}

int func_736(var uParam0)
{
	if (__LIB_5__::func_253(uParam0) != 0)
	{
		if (!func_1203(uParam0))
		{
			return 0;
		}
		TASK::_0xFF745B0346E19E2C(joaat("HOGTIED_PED"));
		if (!TASK::_0xB8F52A3F84A7CC59(joaat("HOGTIED_PED")))
		{
			return 0;
		}
		func_828(Local_87[2 /*4*/], -1238.892f, -1709.501f, 77.9122f, 309.0114f, 2, 1073741824 /* Float: 2f */);
		__LIB_1__::func_571(Global_35, Local_87[2 /*4*/], 0, -1, 1);
		func_828(Local_87[1 /*4*/], -1235.115f, -1706.25f, 77.6666f, 314.4818f, 2, 1073741824 /* Float: 2f */);
		__LIB_1__::func_571(Local_87[0 /*4*/], Local_87[1 /*4*/], 0, -1, 1);
		func_828(Local_100[4 /*4*/], -1233.002f, -1710.905f, 77.9985f, 0f, 2, 1073741824 /* Float: 2f */);
		if (__LIB_0__::func_895(Global_1835011[72 /*74*/].f_1) == 1)
		{
			TASK::TASK_CARRIABLE(Local_100[4 /*4*/], joaat("DEAD_HOGTIED_CARRIABLE_HUMAN"), Local_87[2 /*4*/], 0, 0);
		}
		else
		{
			TASK::TASK_CARRIABLE(Local_100[4 /*4*/], joaat("HOGTIED_PED"), Local_87[2 /*4*/], 0, 0);
		}
		iLocal_326[0] = PED::CREATE_GROUP(2);
		PED::SET_PED_CONFIG_FLAG(Local_87[0 /*4*/], 279, true);
		PED::SET_PED_AS_GROUP_LEADER(Local_87[0 /*4*/], iLocal_326[0], false);
		PED::SET_GROUP_FORMATION(iLocal_326[0], 10);
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_87[0 /*4*/], "sad5_ride_to_bank", 0, 9224, -1, 0, 1, -1);
		PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), Local_87[1 /*4*/], -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 4, 2, 0);
		PED::SET_PED_CONFIG_FLAG(Local_87[0 /*4*/], 167, true);
		__LIB_10__::func_930(uParam0, Local_87[0 /*4*/], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
		WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 1, 0);
		__LIB_4__::func_269(1);
		func_1181(536870912, 1);
		CLOCK::SET_CLOCK_TIME(22, 0, 0);
		MISC::_SET_WEATHER_TYPE(joaat("HIGHPRESSURE"), true, true, false, 0f, false);
	}
	return 1;
}

int func_738(var uParam0)
{
	int iVar0;
	WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 1, 1, 0);
	__LIB_6__::func_357();
	AUDIO::_0x2B9C37C01BF25EDB("ride_to_sheriff");
	WEAPON::GET_CURRENT_PED_WEAPON(Local_87[0 /*4*/], &iVar0, true, 10, false);
	WEAPON::_0xE9BD19F8121ADE3E(Local_87[0 /*4*/], iVar0);
	iLocal_500 = 0;
	if (!VOLUME::_DOES_VOLUME_EXIST(uLocal_339[2]))
	{
		uLocal_339[2] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -756.2629f, -1269.135f, 43.51353f, 0f, 0f, 0f, 1.042981f, 1.038342f, 1f);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uLocal_339[3]))
	{
		uLocal_339[3] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), -766.5726f, -1263.6f, 43.19844f, 0f, 0f, 0f, 1f, 2.681231f, 1f);
	}
	PED::_0xB8DE69D9473B7593(Global_35, 2);
	if (PED::_GET_CARRIER_AS_MOUNT(Local_100[4 /*4*/]) == Local_87[2 /*4*/])
	{
		__LIB_14__::func_316(11, 0);
	}
	MISC::CLEAR_AREA(-751.6022f, -1266.138f, 43.2892f, 8f, 2442122);
	PED::_0x4C39C95AE5DB1329(Local_14.f_54, 0, 15);
	return 1;
}

int func_739(var uParam0)
{
	int iVar0;
	WEAPON::_0xB832F1A686B9B810(Local_87[0 /*4*/], true, 1);
	func_1271(uParam0);
	__LIB_1__::func_948(-1779971138, 0, 1f, 1, 1, 0, 0, 0);
	func_1248();
	func_1273(uParam0);
	func_1274(uParam0);
	func_1275(uParam0);
	PED::SET_PED_RESET_FLAG(Local_100[4 /*4*/], 147, true);
	__LIB_8__::func_797(Local_87[0 /*4*/], &(vLocal_345[9 /*3*/]));
	if (ENTITY::IS_ENTITY_DEAD(Local_100[4 /*4*/]))
	{
		__LIB_1__::func_532(Global_1835011[72 /*74*/].f_1, 1);
	}
	if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-1484165375) != 1)
	{
		__LIB_3__::func_123(-1484165375, 1);
	}
	if (ENTITY::_0x61914209C36EFDDB(Local_100[4 /*4*/]) != 7 && ENTITY::_0x61914209C36EFDDB(Local_100[4 /*4*/]) != 5)
	{
		if (ENTITY::_0xD4E5C1E93C466127(Local_100[4 /*4*/], 1))
		{
			__LIB_5__::func_505(uParam0, "SAD5_B_FAIL", "", 1, 0);
		}
	}
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			if (!ENTITY::IS_ENTITY_IN_VOLUME(Local_87[0 /*4*/], Local_14.f_24, true, 0))
			{
				func_1277(uParam0);
				__LIB_6__::func_713(Local_87[0 /*4*/], 1071644672 /* Float: 1.75f */, 0, 1045220557 /* Float: 0.2f */, 1, 1077936128 /* Float: 3f */, 10f, 20f, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 0, 1, 1045220557 /* Float: 0.2f */, 0);
			}
			else
			{
				if (PED::DOES_GROUP_EXIST(iLocal_326[0]))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_87[0 /*4*/]);
					PED::REMOVE_GROUP(iLocal_326[0]);
					PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
				}
				if (__LIB_5__::func_463())
				{
					__LIB_5__::func_20(1, 1);
				}
			}
			if ((!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_87[0 /*4*/], "sad5_ride_to_bank") && __LIB_0__::func_665(Global_35, Local_87[0 /*4*/], 0, 0) < 20f) && __LIB_0__::func_266(Global_35, -751.7415f, -1271.275f, 42.3808f, 50f, 1, 1))
			{
				__LIB_10__::func_935(uParam0, Local_87[0 /*4*/], 1);
				__LIB_4__::func_952(uParam0, 1);
			}
			break;
		case 1:
			__LIB_11__::func_812(uParam0, Local_87[0 /*4*/], "SADIE_RETURN", "SADIE_ABANDON", 30f, 50f, 0, 1, 1, joaat("BLIP_STYLE_COMPANION"), 1);
			if (func_1278(uParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_100[4 /*4*/]))
				{
					func_1181(1073741824 /* Float: 2f */, 1);
				}
				PED::SET_PED_CONFIG_FLAG(Local_87[0 /*4*/], 167, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_DISMOUNT_ANIMAL(0, 131072, 0, 0, 0, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -756.8797f, -1269.252f, 43.0332f, 1f, -1, 0.25f, 131072, 40000f);
				__LIB_1__::func_474(Local_87[0 /*4*/], &iVar0, 0, 0, 1, 1);
				if (ENTITY::IS_ENTITY_DEAD(Local_100[4 /*4*/]))
				{
					func_1170(uParam0, "SAD5_S8_JAIL", 0);
				}
				else
				{
					func_1170(uParam0, "SAD5_DISMOUNT", 0);
				}
				__LIB_5__::func_372(uParam0, 1);
				__LIB_5__::func_590(uParam0, "SAD5_OBJ11", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_4__::func_952(uParam0, 2);
			}
			break;
		case 2:
			func_1279(uParam0);
			__LIB_11__::func_812(uParam0, Local_87[0 /*4*/], "SADIE_RETURN", "SADIE_ABANDON", 30f, 50f, 0, 1, 1, joaat("BLIP_STYLE_COMPANION"), 1);
			if (ENTITY::_0x61914209C36EFDDB(Local_100[4 /*4*/]) == 5 && iLocal_490 > 2)
			{
				UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
				AUDIO::_0x2B9C37C01BF25EDB("jail_bounty");
				__LIB_5__::func_372(uParam0, 2);
				__LIB_5__::func_590(uParam0, "SAD5_OBJ12", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_4__::func_952(uParam0, 3);
				__LIB_0__::func_172(uLocal_339[2]);
				__LIB_1__::func_148(&(vLocal_345[12 /*3*/]));
				__LIB_1__::func_148(&(vLocal_345[0 /*3*/]));
			}
			break;
		case 3:
			func_1278(uParam0);
			if (__LIB_0__::func_265(&(vLocal_345[12 /*3*/])) > 6f && !__LIB_5__::func_463())
			{
				func_1170(uParam0, "SAD5_FINGRUMBLE", 0);
				__LIB_1__::func_148(&(vLocal_345[12 /*3*/]));
			}
			if (__LIB_0__::func_265(&(vLocal_345[0 /*3*/])) > 12f)
			{
				if (TASK::IS_PED_STILL(Global_35) && __LIB_0__::func_665(Global_35, Local_87[0 /*4*/], 1, 1) > 15f)
				{
					func_1170(uParam0, "SAD5_S8_HURRY", 0);
					__LIB_1__::func_148(&(vLocal_345[0 /*3*/]));
				}
			}
			if (__LIB_0__::func_265(&(vLocal_345[0 /*3*/])) > 12f)
			{
				if ((TASK::IS_PED_STILL(Global_35) && !ENTITY::IS_ENTITY_DEAD(Local_100[4 /*4*/])) && __LIB_0__::func_665(Global_35, iLocal_307, 1, 1) < 7f)
				{
					func_1170(uParam0, "SAD5_INTOCELL", 0);
					__LIB_1__::func_148(&(vLocal_345[0 /*3*/]));
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_100[4 /*4*/]))
			{
				if (ENTITY::_0x61914209C36EFDDB(Local_100[4 /*4*/]) == 5)
				{
					__LIB_1__::func_148(&(vLocal_345[7 /*3*/]));
				}
				if (ENTITY::IS_ENTITY_IN_VOLUME(Local_100[4 /*4*/], Local_14.f_7, false, 0) && ENTITY::_0x61914209C36EFDDB(Local_100[4 /*4*/]) != 5)
				{
					if (__LIB_1__::func_871(&(vLocal_345[7 /*3*/])) > 1000)
					{
						__LIB_4__::func_952(uParam0, 4);
						__LIB_1__::func_532(Global_1835011[72 /*74*/].f_1, 0);
					}
				}
			}
			else
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DROP"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLACE_CARRIABLE_ONTO_PARENT"), false);
				func_1281(uParam0);
				__LIB_8__::func_787(uParam0, "2-BountyKilled");
				__LIB_10__::func_949(uParam0, __LIB_0__::func_482("2-BountyKilled"));
				__LIB_5__::func_580(uParam0, Local_100[4 /*4*/], "mes_sadie5_males_01^1", 0, 0, 1, 0);
				__LIB_4__::func_952(uParam0, 5);
			}
			break;
		case 4:
			return 1;
		case 5:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DROP"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLACE_CARRIABLE_ONTO_PARENT"), false);
			if (func_1285(uParam0, 0))
			{
				func_832(uParam0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_740(var uParam0)
{
	__LIB_4__::func_389(-1484165375, 0, 1);
	return 1;
}

int func_741(var uParam0)
{
	if (__LIB_5__::func_253(uParam0) != 0)
	{
		if (!func_1273(uParam0))
		{
			return 0;
		}
		if (!func_1203(uParam0))
		{
			return 0;
		}
		if (__LIB_0__::func_895(Global_1835011[72 /*74*/].f_1) == 1)
		{
			__LIB_10__::func_949(uParam0, __LIB_0__::func_482("2-BountyKilled"));
		}
		else
		{
			__LIB_10__::func_949(uParam0, __LIB_0__::func_482("1-BountyCaught"));
		}
		func_828(Local_100[4 /*4*/], -765.1541f, -1264.903f, 43.02451f, 89.3178f, 2, 1073741824 /* Float: 2f */);
		__LIB_0__::func_203(Local_87[0 /*4*/]);
		__LIB_5__::func_580(uParam0, Global_35, "John", 0, 0, 0, 0);
		__LIB_5__::func_580(uParam0, Local_87[0 /*4*/], "MrsAdler", 0, 0, 0, 0);
		__LIB_5__::func_580(uParam0, Local_87[1 /*4*/], "Horse_01", 0, 0, 0, 0);
		__LIB_5__::func_580(uParam0, Local_100[4 /*4*/], "mes_sadie5_males_01", 0, 0, 1, 0);
		__LIB_5__::func_580(uParam0, iLocal_307, "U_M_O_BLWPOLICECHIEF_01", 0, 0, 0, 0);
	}
	return 1;
}

int func_742(var uParam0)
{
	if (__LIB_0__::func_895(Global_1835011[72 /*74*/].f_1) != 1)
	{
		return 1;
	}
	else if (__LIB_5__::func_253(uParam0) == 0)
	{
		if (func_832(uParam0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_744(var uParam0)
{
	func_1287(uParam0);
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			return 1;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	return 0;
}

int func_745(var uParam0)
{
	__LIB_9__::func_99(uParam0, -1, 0);
	return 1;
}

void func_750(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
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
		func_1292();
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

void func_752(var uParam0)
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
			func_828(iVar1, __LIB_4__::func_548(uParam0), __LIB_4__::func_549(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_828(iVar3, __LIB_4__::func_548(uParam0), __LIB_4__::func_549(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_753(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_4__::func_548(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_4__::func_548(uParam0) };
			func_828(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

int func_761(int iParam0, int iParam1)
{
	var uVar0;
	return func_1316(&uVar0, iParam0, iParam1);
}

bool func_820(var uParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!__LIB_0__::func_31(iParam1))
	{
		return false;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(*uParam2) && __LIB_1__::func_22(iParam1)) && __LIB_0__::func_167(iParam1) == *uParam2)
	{
		return true;
	}
	*uParam2 = func_1347(iParam1, 1, 0, iParam4, iParam5, iParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		func_1348(uParam0, *uParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		__LIB_4__::func_703(iParam1);
		return true;
	}
	return false;
}

void func_828(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == __LIB_0__::func_17(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
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
				func_828(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_828(iVar2, vParam1, fParam4, iParam5, iParam6);
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

bool func_830(var uParam0, int iParam1)
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
			func_750(&iVar0, 0, 2, 0, 0, 0, 0);
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

bool func_832(var uParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = __LIB_5__::func_475(uParam0);
	if (__LIB_5__::func_279(uParam0, __LIB_4__::func_939(uParam0)) <= 3)
	{
		iVar0 = __LIB_4__::func_939(uParam0);
	}
	Var1 = { __LIB_5__::func_299(uParam0, iVar0) };
	if (__LIB_14__::func_478(&(uParam0->f_10792), Var1, __LIB_0__::func_81(&(uParam0->f_10792)), 0))
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

bool func_834(var uParam0, struct<4> Param1)
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
	if (func_1388(Param1, &(uParam0->f_7375), uParam0))
	{
		return true;
	}
	if (__LIB_0__::func_81(uParam0) == 0)
	{
		func_859(uParam0);
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

bool func_840(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_87[0 /*4*/]))
	{
		if (func_820(uParam0, 11, &(Local_87[0 /*4*/]), 0, 0, 0, 0, 0, 1, -1248623443, 1, 0, 1, 0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_87[0 /*4*/], true);
		}
		return false;
	}
	PED::SET_PED_CONFIG_FLAG(Local_87[0 /*4*/], 512, true);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_87[0 /*4*/], true);
	PED::SET_PED_COMBAT_MOVEMENT(Local_87[0 /*4*/], 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_87[0 /*4*/], 0, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_87[0 /*4*/], 12, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_87[0 /*4*/], 119, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_87[0 /*4*/], 30, true);
	PED::SET_PED_COMBAT_RANGE(Local_87[0 /*4*/], 3);
	TASK::_0x013A7BA5015C1372(Local_87[0 /*4*/], 1);
	__LIB_5__::func_510(Local_87[0 /*4*/], iLocal_338);
	return true;
}

bool func_841(var uParam0)
{
	int iVar0;
	struct<11> Var1;
	if (!ENTITY::DOES_ENTITY_EXIST(Local_87[2 /*4*/]))
	{
		Var1.f_10 = 7;
		Var1 = 1;
		Var1.f_3 = 1;
		Var1.f_4 = 1;
		Var1.f_1 = 1;
		Var1.f_2 = 0;
		Var1.f_6 = { -829.5126f, -1327.814f, 43.6612f };
		Var1.f_9 = -102.79f;
		Local_87[2 /*4*/] = __LIB_4__::func_720(&iVar0, &Var1);
		if (iVar0 == 2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_87[2 /*4*/], true);
			TASK::TASK_STAND_STILL(Local_87[2 /*4*/], -1);
		}
		return false;
	}
	return true;
}

bool func_842(var uParam0)
{
	struct<4> Var0;
	int iVar4;
	Var0 = { func_1218(1, 0) };
	if (!ENTITY::DOES_ENTITY_EXIST(Local_87[1 /*4*/]))
	{
		iVar4 = 0;
		Local_87[1 /*4*/] = func_1396(&iVar4, 11, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0);
		if (iVar4 == 2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_87[1 /*4*/]))
			{
				TASK::TASK_STAND_STILL(Local_87[1 /*4*/], -1);
				AITRANSPORT::_0xBA8818212633500A(Local_87[1 /*4*/], 0, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_87[1 /*4*/], true);
				func_1219(Local_87[1 /*4*/], Var0, 2, 1073741824 /* Float: 2f */);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_87[1 /*4*/], true);
				ENTITY::_0x18FF3110CF47115D(Local_87[1 /*4*/], 15, 0);
				return true;
			}
		}
	}
	return false;
}

void func_843()
{
	Local_14 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0xBCE668AAF83608BE(Local_14, -2720.235f, -2353.766f, 51.6078f, 0f, 0f, 0f, 32.65249f, 15.68318f, 13.72411f);
	VOLUME::_0x39816F6F94F385AD(Local_14, -2749.015f, -2363.836f, 43.43331f, 0f, 0f, 0f, 22.03694f, 17.4668f, 19.58423f);
	Local_14.f_1 = VOLUME::_CREATE_VOLUME_BOX(-2789.789f, -2468.4f, 54.55906f, 0f, 0f, 27.8795f, 19.3534f, 46.33356f, 5.278236f);
	Local_14.f_2 = VOLUME::_CREATE_VOLUME_BOX(-2819.726f, -2382.09f, 56.65366f, 0f, 0f, -15.46253f, 2.67286f, 5.586782f, 3.324727f);
	Local_14.f_3 = VOLUME::_CREATE_VOLUME_BOX(-2801.167f, -2403.202f, 54.8082f, 0f, 0f, -24.90395f, 4.369807f, 2.536772f, 2.782657f);
	Local_14.f_4 = VOLUME::_CREATE_VOLUME_BOX(-2790.248f, -2343.007f, 57.52201f, 1.920898f, 2.259917f, 5.455704f, 37.42035f, 11.90207f, 5.038476f);
	Local_14.f_5 = VOLUME::_CREATE_VOLUME_BOX(-2791.813f, -2418.551f, 52.50488f, 0f, 0f, -28.84677f, 1f, 17.54247f, 1f);
	Local_14.f_6 = VOLUME::_CREATE_VOLUME_BOX(-2759.754f, -2403.01f, 48.39059f, -3.557896f, 9.999774f, -2.100693f, 46.5004f, 14.31934f, 4.436661f);
	Local_14.f_7 = VOLUME::_CREATE_VOLUME_BOX(-767.0812f, -1263.576f, 43.78212f, 0f, 0f, 0f, 2.35386f, 3.087987f, 1.613597f);
	Local_14.f_8 = VOLUME::_CREATE_VOLUME_BOX(-2661.853f, -2370.768f, 67.06388f, 0f, 0f, 33.04316f, 18.77518f, 9.818606f, 4.523866f);
	Local_14.f_9 = VOLUME::_CREATE_VOLUME_BOX(-2791.519f, -2370.957f, 42.86507f, 0f, 0f, 0f, 21.45861f, 27.12404f, 4.239011f);
	Local_14.f_10 = VOLUME::_CREATE_VOLUME_BOX(-2811.269f, -2344.216f, 58.55957f, 0f, 0f, 0f, 3.590642f, 25.02935f, 3.909245f);
	Local_14.f_11 = VOLUME::_CREATE_VOLUME_BOX(-2748.114f, -2330.148f, 59.40601f, 0f, 0f, 0f, 15.5368f, 26.70801f, 8.576861f);
	Local_14.f_12 = VOLUME::_CREATE_VOLUME_BOX(-2677.193f, -2336.843f, 63.47247f, 0f, 0f, 48.38916f, 12.19947f, 5.37469f, 2.455117f);
	Local_14.f_13 = VOLUME::_CREATE_VOLUME_BOX(-2802.642f, -2345.425f, 59.64118f, 0f, 0f, 0f, 3.72014f, 25.44231f, 5.341343f);
	Local_14.f_14 = VOLUME::_CREATE_VOLUME_BOX(-2692.474f, -2436.385f, 75.33958f, 0f, 0f, 0f, 14.8065f, 39.24123f, 11.52532f);
	Local_14.f_15 = VOLUME::_CREATE_VOLUME_BOX(-2770.675f, -2367.906f, 46.85521f, 0f, 0f, 0f, 3.568264f, 26.0004f, 14.67645f);
	Local_14.f_16 = VOLUME::_CREATE_VOLUME_BOX(-2820.14f, -2518.194f, 38.476f, 0f, 0f, -84.74986f, 20.3315f, 1f, 3.896676f);
	Local_14.f_17 = VOLUME::_CREATE_VOLUME_BOX(-2802.062f, -2406.628f, 42.87963f, 0f, 0f, -25.8675f, 20.76441f, 3.845607f, 8.51895f);
	Local_14.f_18 = VOLUME::_CREATE_VOLUME_BOX(-2840.202f, -2512.209f, 39.06749f, 0f, 0f, 48.15711f, 22.81948f, 3.413797f, 6.230327f);
	Local_14.f_19 = VOLUME::_CREATE_VOLUME_BOX(-760.8427f, -1269.178f, 43.87416f, 0f, 0f, 0f, 1f, 2.103934f, 1.7453f);
	Local_14.f_20 = VOLUME::_CREATE_VOLUME_BOX(-3080.262f, -2461.817f, 25.59641f, 0f, 0f, -31.74742f, 18.63701f, 36.71526f, 7.861099f);
	Local_14.f_21 = VOLUME::_CREATE_VOLUME_BOX(-2714.6f, -2337.748f, 52.39336f, -5.71365f, -23.75678f, 27.148f, 8.174301f, 4.811382f, 4.387151f);
	Local_14.f_22 = VOLUME::_CREATE_VOLUME_BOX(-3161.297f, -2414.597f, 24.63908f, 0f, 0f, 50.9721f, 14.96698f, 42.698f, 4.525029f);
	Local_14.f_23 = VOLUME::_CREATE_VOLUME_BOX(-756.9919f, -1269.172f, 43.70572f, 0f, 0f, 0f, 0.71334f, 1.361463f, 1.562403f);
	Local_14.f_24 = VOLUME::_CREATE_VOLUME_BOX(-749.1956f, -1268.913f, 44.23194f, 0f, 0f, 0f, 20.18839f, 20.82689f, 5.230138f);
	Local_14.f_25 = VOLUME::_CREATE_VOLUME_BOX(-2660.015f, -2412.301f, 71.63377f, 0f, 0f, -48.55428f, 10.19631f, 12.97064f, 4.565388f);
	Local_14.f_26 = VOLUME::_CREATE_VOLUME_BOX(-3014.116f, -2463.033f, 30.88814f, 0f, 0f, 0f, 159.9375f, 64.93492f, 18.13462f);
	Local_14.f_27 = VOLUME::_CREATE_VOLUME_BOX(-2776.473f, -2343.265f, 58.65861f, 0f, 0f, 14.68737f, 5.06197f, 20.20286f, 3.637412f);
	Local_14.f_28 = VOLUME::_CREATE_VOLUME_BOX(-2766.182f, -2338.019f, 58.65861f, 0f, 0f, 14.68737f, 5.06197f, 20.20286f, 3.637412f);
	Local_14.f_29 = VOLUME::_CREATE_VOLUME_BOX(-2756.152f, -2334.007f, 57.97224f, 8.440642f, 0f, 19.75209f, 5.06197f, 20.20286f, 3.637412f);
	Local_14.f_30 = VOLUME::_CREATE_VOLUME_BOX(-2737.006f, -2329.266f, 59.62546f, 0f, 0f, -0.573473f, 5.06197f, 20.20286f, 3.637412f);
	Local_14.f_31 = VOLUME::_CREATE_VOLUME_CYLINDER(-2737.085f, -2432.301f, 73.76219f, 0f, 0f, 0f, 16.84569f, 15.62807f, 4.241618f);
	Local_14.f_32 = VOLUME::_CREATE_VOLUME_BOX(-2715.768f, -2442.817f, 71.08864f, 0f, 0f, -6.510634f, 5.618355f, 54.11932f, 14.17528f);
	Local_14.f_33 = VOLUME::_CREATE_VOLUME_BOX(-2660.868f, -2428.659f, 72.03545f, 0f, 0f, 30.6443f, 5.618355f, 41.1833f, 14.17528f);
	Local_14.f_34 = VOLUME::_CREATE_VOLUME_BOX(-2663.589f, -2392.264f, 66.58978f, 0f, 0f, 87.599f, 5.618355f, 19.35569f, 7.307092f);
	Local_14.f_35 = VOLUME::_CREATE_VOLUME_BOX(-2668.066f, -2350.071f, 64.06395f, 0f, 0f, 109.2868f, 5.618355f, 16.26812f, 14.17528f);
	Local_14.f_36 = VOLUME::_CREATE_VOLUME_BOX(-2683.212f, -2328.172f, 59.86478f, 0f, 0f, 143.1565f, 5.618355f, 16.26812f, 14.17528f);
	Local_14.f_37 = VOLUME::_CREATE_VOLUME_BOX(-3202.466f, -2539.449f, 66.55681f, 0f, 0f, 0f, 9.701925f, 14.10914f, 4.066996f);
	Local_14.f_38 = VOLUME::_CREATE_VOLUME_BOX(-2916.061f, -2434.232f, 39.71122f, 0f, 0f, 17.45934f, 3.25891f, 23.37606f, 13.33462f);
	Local_14.f_39 = VOLUME::_CREATE_VOLUME_BOX(-2872.886f, -2458.423f, 46.40185f, 0f, 0f, -35.39407f, 9.551745f, 10.35364f, 4.489205f);
	Local_14.f_40 = VOLUME::_CREATE_VOLUME_BOX(-2849.785f, -2487.095f, 43.77666f, 0f, 0f, 26.06351f, 31.42303f, 3.620792f, 11.29342f);
	Local_14.f_41 = VOLUME::_CREATE_VOLUME_BOX(-2749.917f, -2370.15f, 45.28716f, 0f, 0f, 6.604427f, 4.766083f, 22.43424f, 10.47609f);
	Local_14.f_42 = VOLUME::_CREATE_VOLUME_CYLINDER(-3185.295f, -2539.507f, 68.11393f, 0f, 0f, 0f, 4.58551f, 8.048754f, 1.892178f);
	Local_14.f_43 = VOLUME::_CREATE_VOLUME_BOX(-3055.575f, -2668.908f, 72.29948f, 0f, 0f, 0f, 7.215348f, 8.426028f, 8.868847f);
	Local_14.f_44 = VOLUME::_CREATE_VOLUME_BOX(-2600.139f, -2530.532f, 74.7732f, 0f, 0f, 0f, 11.5134f, 12.75917f, 4.716755f);
	Local_14.f_45 = VOLUME::_CREATE_VOLUME_BOX(-3035.946f, -2500.65f, 70.93914f, 0f, 0f, 0f, 4.807927f, 4.844409f, 1f);
	Local_14.f_46 = VOLUME::_CREATE_VOLUME_BOX(-2873.987f, -2494.91f, 66.14851f, -2.084306f, -3.040229f, -173.6698f, 5.166996f, 8.072818f, 1.907518f);
	Local_14.f_47 = VOLUME::_CREATE_VOLUME_BOX(-3408.268f, -2264.735f, -3.514832f, 0f, 0f, 0f, 5.839575f, 5.99361f, 5.129572f);
	Local_14.f_48 = VOLUME::_CREATE_VOLUME_BOX(-3546.416f, -2594.592f, -11.19082f, 0f, 0f, 0f, 16.17458f, 15.55434f, 7.021197f);
	Local_14.f_49 = VOLUME::_CREATE_VOLUME_BOX(-2053.423f, -2289.921f, 56.73574f, 0f, 0f, 0f, 6.57985f, 8.479733f, 2.90172f);
	Local_14.f_50 = VOLUME::_CREATE_VOLUME_BOX(-1831.765f, -2072.354f, 50.92165f, 0f, 0f, 0f, 10.80442f, 7.396026f, 5.47714f);
	Local_14.f_51 = VOLUME::_CREATE_VOLUME_BOX(-855.1484f, -1352.582f, 42.84392f, 0f, 0f, 0f, 4.218606f, 7.812524f, 2.900364f);
	Local_14.f_52 = VOLUME::_CREATE_VOLUME_CYLINDER(-2745.937f, -2421.726f, 71.54613f, 0f, 0f, 14.42272f, 1.988405f, 1.855594f, 1.293864f);
	Local_14.f_53 = VOLUME::_CREATE_VOLUME_CYLINDER(-2730.154f, -2418.075f, 72.19292f, 0f, 0f, -142.2437f, 1.988405f, 1.855594f, 1.293864f);
	Local_14.f_54 = VOLUME::_CREATE_VOLUME_BOX(-752.5781f, -1266.392f, 42.58972f, 0f, 0f, 0f, 5.25255f, 3.965318f, 1.489184f);
}

void func_844()
{
	PATHFIND::_0xC1799FAFD2FDF52B(Local_14.f_43, 0, 0, 0);
	PATHFIND::_0xC1799FAFD2FDF52B(Local_14.f_44, 0, 0, 0);
	PATHFIND::_0xC1799FAFD2FDF52B(Local_14.f_47, 0, 0, 0);
	PATHFIND::_0xC1799FAFD2FDF52B(Local_14.f_48, 0, 0, 0);
	PATHFIND::_0xC1799FAFD2FDF52B(Local_14.f_49, 0, 0, 0);
	PATHFIND::_0xC1799FAFD2FDF52B(Local_14.f_50, 0, 0, 0);
}

int func_852(var uParam0)
{
	switch (__LIB_4__::func_939(uParam0))
	{
		case 0:
			__LIB_5__::func_298(uParam0, "MultiStart");
			__LIB_5__::func_580(uParam0, Global_35, "John", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_87[0 /*4*/], "MrsAdler", 0, 0, 0, 0);
			__LIB_4__::func_992(uParam0, 512);
			__LIB_4__::func_992(uParam0, 2);
			break;
		case 25:
			__LIB_5__::func_580(uParam0, Global_35, "John", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_87[0 /*4*/], "MrsAdler", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_87[1 /*4*/], "Horse_01", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_100[4 /*4*/], "mes_sadie5_males_01", 0, 0, 1, 0);
			__LIB_5__::func_580(uParam0, iLocal_307, "U_M_O_BLWPOLICECHIEF_01", 0, 0, 0, 0);
			__LIB_4__::func_992(uParam0, 512);
			__LIB_4__::func_992(uParam0, 2);
			break;
	}
	return 1;
}

int func_854(var uParam0)
{
	switch (__LIB_4__::func_939(uParam0))
	{
		case 0:
			if (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_7375.f_804, "John"))
			{
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
			}
			if (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_7375.f_804, "MrsAdler"))
			{
				func_1169(uParam0, 20000, 1f);
			}
			break;
		case 25:
			if (!func_1160(1024))
			{
				func_828(Local_87[2 /*4*/], -752.0693f, -1274.69f, 42.3767f, 57.3391f, 2, 1073741824 /* Float: 2f */);
				func_1181(1024, 1);
			}
			if (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_7375.f_804, "John"))
			{
				PED::SET_IK_TARGET(Global_35, 1, Local_87[0 /*4*/], -1, 0f, 0f, 0f, 0, -1, 1000);
			}
			if (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_7375.f_804, "MrsAdler"))
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_87[0 /*4*/], "sad5_outro", 0, 9224, -1, 0, 0, -1);
				PED::SET_PED_KEEP_TASK(Local_87[0 /*4*/], true);
			}
			break;
	}
	return 1;
}

int func_856(var uParam0)
{
	switch (__LIB_4__::func_939(uParam0))
	{
		case 0:
			func_828(Global_35, -810.4977f, -1329.327f, 42.669f, 104.3142f, 2, 1073741824 /* Float: 2f */);
			func_828(Local_87[0 /*4*/], -811.8963f, -1330.204f, 42.6665f, 104.3142f, 2, 1073741824 /* Float: 2f */);
			PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_WALK"), false, 0, true);
			PED::FORCE_PED_MOTION_STATE(Local_87[0 /*4*/], joaat("MOTIONSTATE_WALK"), false, 0, true);
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
			__LIB_0__::func_489(0, 0);
			break;
		case 25:
			break;
	}
	return 1;
}

void func_858(var uParam0)
{
	POPULATION::_0xF45E46DEECF7DF6E(iLocal_516, 0, 0, -1, -1);
	func_1414(uParam0);
	func_1415(uParam0);
	if (__LIB_4__::func_939(uParam0) == iLocal_73)
	{
		if (__LIB_4__::func_971(uParam0) < 2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
		}
	}
	if (__LIB_4__::func_939(uParam0) == iLocal_76 || __LIB_4__::func_939(uParam0) == iLocal_77)
	{
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			__LIB_1__::func_448(Global_35, -750.675f, -1266.354f, 42.2502f, 0, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 7f, 1084227584 /* Float: 5f */, 1, 1, 0, 0);
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_87[1 /*4*/]))
	{
		__LIB_5__::func_505(uParam0, "ALLY_MOUNT_DEAD_SADIE", "", 1, 0);
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_87[2 /*4*/]) || PED::IS_PED_FATALLY_INJURED(Local_87[2 /*4*/]))
	{
		__LIB_5__::func_505(uParam0, "ALLY_DEAD_HORSE_PLAYER", "", 1, 0);
	}
}

void func_859(var uParam0)
{
	if (!__LIB_4__::func_505(&(uParam0->f_8269)))
	{
		return;
	}
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 268435456))
	{
		return;
	}
	func_1416(uParam0);
}

void func_865(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!ITEMSET::IS_ITEMSET_VALID(iLocal_69))
	{
		return;
	}
	iVar0 = ITEMSET::GET_ITEMSET_SIZE(iLocal_69);
	if (uParam0->f_13179 == -1 || uParam0->f_13179 > (iVar0 - 1))
	{
		uParam0->f_13179 = (iVar0 - 1);
	}
	iVar1 = uParam0->f_13179;
	while (iVar1 >= 0)
	{
		iVar3 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iLocal_69));
		if (ENTITY::DOES_ENTITY_EXIST(iVar3) && ENTITY::IS_ENTITY_DEAD(iVar3))
		{
			ITEMSET::REMOVE_FROM_ITEMSET(iVar3, iLocal_69);
		}
		iVar2++;
		if (iVar2 > 5)
		{
		}
		else
		{
			iVar1 = (iVar1 + -1);
		}
	}
	uParam0->f_13179 = (iVar1 - 1);
	if (iVar1 <= 0)
	{
		uParam0->f_13179 = (ITEMSET::GET_ITEMSET_SIZE(iLocal_69) - 1);
	}
}

bool func_872(var uParam0)
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
	int iVar10;
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		return true;
	}
	if (!__LIB_0__::func_75(&(uParam0->f_13109)))
	{
		__LIB_1__::func_283(&(uParam0->f_13109), 0);
	}
	else if (__LIB_0__::func_265(&(uParam0->f_13109)) >= 10f)
	{
		return true;
	}
	iVar0 = 1;
	if (__LIB_3__::func_358(uParam0->f_5421))
	{
		iVar1 = 0;
		while (iVar1 < __LIB_4__::func_955(uParam0->f_5421))
		{
			iVar2 = __LIB_4__::func_956(uParam0->f_5421, iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar2))
				{
					iVar3 = __LIB_4__::func_956(uParam0->f_5421, iVar1);
					if (!ENTITY::IS_ENTITY_DEAD(iVar3) && !PED::_0xA0BC8FAED8CFEB3C(iVar3))
					{
						iVar0 = 0;
					}
				}
				else if ((!ENTITY::IS_ENTITY_DEAD(iVar2) && ENTITY::IS_ENTITY_A_VEHICLE(iVar2)) && VEHICLE::_IS_DRAFT_VEHICLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar2)))
				{
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < 6)
					{
						iVar5 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar2), iVar4);
						if (!ENTITY::IS_ENTITY_DEAD(iVar5))
						{
							if (!PED::_0xA0BC8FAED8CFEB3C(iVar5))
							{
								iVar0 = 0;
							}
						}
						iVar4++;
					}
				}
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < ITEMSET::GET_ITEMSET_SIZE(iLocal_69))
	{
		iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iLocal_69);
		iVar7 = MISC::_GET_ENTITY_FROM_ITEM(iVar6);
		if (ENTITY::DOES_ENTITY_EXIST(iVar7))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar7))
			{
				iVar8 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar7);
				if (!ENTITY::IS_ENTITY_DEAD(iVar8) && !PED::_0xA0BC8FAED8CFEB3C(iVar8))
				{
					iVar0 = 0;
				}
			}
			else if ((!ENTITY::IS_ENTITY_DEAD(iVar7) && ENTITY::IS_ENTITY_A_VEHICLE(iVar7)) && VEHICLE::_IS_DRAFT_VEHICLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar7)))
			{
				iVar9 = 0;
				iVar9 = 0;
				while (iVar9 < 6)
				{
					iVar10 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar7), iVar9);
					if (!ENTITY::IS_ENTITY_DEAD(iVar10))
					{
						if (!PED::_0xA0BC8FAED8CFEB3C(iVar10))
						{
							iVar0 = 0;
						}
					}
					iVar9++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_875(var uParam0, int iParam1, int iParam2)
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
		func_1426(uParam0);
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

bool func_877(var uParam0, int iParam1)
{
	struct<4> Var0;
	if (__LIB_4__::func_948(uParam0, 16384))
	{
		if (func_832(uParam0))
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
			if (func_832(uParam0))
			{
				__LIB_4__::func_969(uParam0, 2097152);
				func_834(uParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_834(uParam0, Var0);
		}
	}
	else if (__LIB_4__::func_937(uParam0, 2097152))
	{
		if (func_832(uParam0))
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
		return func_834(uParam0, Var0);
	}
	return true;
}

void func_1080(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_298(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_298(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_298(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1584(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_301(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_624(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1589(Var0);
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

void func_1083(bool bParam0)
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
		func_298(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_298(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_298(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_298(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_298(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_298(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_298(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_298(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_298(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_298(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_298(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_624(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_624(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_624(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_624(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_624(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_624(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_624(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_624(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_624(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_624(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_624(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1128(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1128(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1128(iVar63, -915411861, 1, 0, 0));
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

int func_1142()
{
	if (__LIB_0__::func_28())
	{
		if (!__LIB_1__::func_185(3))
		{
			return __LIB_0__::func_559(43);
		}
		if (__LIB_1__::func_185(38) && !__LIB_1__::func_185(43))
		{
			return func_1621(8);
		}
	}
	return 0;
}

bool func_1143(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	return ((Global_1888801[iParam0 /*35*/].f_20 == 1 || Global_1888801[iParam0 /*35*/].f_20 == 2) && !func_1622(iParam0));
}

bool func_1160(int iParam0)
{
	return __LIB_0__::func_27(uLocal_420, iParam0);
}

bool func_1162(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	char cVar2[64];
	struct<8> Var10;
	iVar1 = __LIB_0__::func_271(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return false;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam2))
	{
		return false;
	}
	StringCopy(&cVar2, __LIB_0__::func_323(iParam1), 64);
	Var10 = { __LIB_0__::func_865(iParam1) };
	if (__LIB_6__::func_912(iVar1, PLAYER::PLAYER_PED_ID(), sParam2, iParam8))
	{
		StringConCat(&cVar2, "_CATCH_UP", 64);
	}
	else
	{
		StringConCat(&cVar2, "_RETURN", 64);
	}
	bVar0 = __LIB_8__::func_818(uParam0, ENTITY::GET_ENTITY_COORDS(iVar1, true, false), &cVar2, &Var10, 1, sParam3, iParam4, fParam6, fParam7);
	if (__LIB_4__::func_938(uParam0) != 1 && __LIB_4__::func_937(uParam0, 64))
	{
		__LIB_10__::func_936(uParam0, iVar1, iParam9, bVar0, iParam5);
		__LIB_4__::func_969(uParam0, 64);
	}
	return bVar0;
}

void func_1164(var uParam0)
{
	switch (__LIB_4__::func_979(uParam0))
	{
		case 0:
			__LIB_5__::func_486(uParam0, "SAD5_OBJ1", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
		case 1:
			__LIB_5__::func_486(uParam0, "SAD5_OBJ3", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
		case 2:
			break;
	}
}

bool func_1167(var uParam0)
{
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
		case 1:
			return true;
		case 2:
			return true;
	}
	return false;
}

int func_1169(var uParam0, int iParam1, float fParam2)
{
	if (!__LIB_0__::func_71(Local_87[0 /*4*/]))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_87[0 /*4*/]) && !ENTITY::DOES_ENTITY_EXIST(Local_87[1 /*4*/]))
		{
			return 0;
		}
		else
		{
			TASK::TASK_MOUNT_ANIMAL(Local_87[0 /*4*/], Local_87[1 /*4*/], iParam1, -1, fParam2, 1, 0, 0);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_1170(var uParam0, char* sParam1, bool bParam2)
{
	vector3 vVar0[24];
	StringCopy(&cVar0, sParam1, 24);
	if (__LIB_1__::func_104(&(uParam0->f_5310), cVar0, 0, -1, bParam2, 0))
	{
		return 1;
	}
	return 0;
}

void func_1178()
{
	if (!PED::_0x7C8AA850617651D9(Local_87[0 /*4*/], joaat("SAD5_RIDE1")))
	{
		PED::_0x1E017404784AA6A3(Local_87[0 /*4*/], joaat("SAD5_RIDE1"));
		AUDIO::_0x0D7FD6A55FD63AEF(7, 3, 1);
		AUDIO::_0x0D7FD6A55FD63AEF(25, 3, 1);
		AUDIO::_0x0D7FD6A55FD63AEF(21, 3, 1);
		AUDIO::_0x0D7FD6A55FD63AEF(19, 3, 1);
		AUDIO::_0x0D7FD6A55FD63AEF(23, 3, 1);
		AUDIO::_0x0D7FD6A55FD63AEF(22, 3, 1);
		AUDIO::_0x0D7FD6A55FD63AEF(2, 3, 1);
	}
}

void func_1181(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_7(&uLocal_420, iParam0);
	}
	else
	{
		__LIB_0__::func_8(&uLocal_420, iParam0);
	}
}

void func_1182(char* sParam0)
{
	STREAMING::END_SRL();
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		STREAMING::PREFETCH_SRL(sParam0);
		STREAMING::_0xAE00387E53B1E9FC();
	}
}

void func_1185(var uParam0)
{
	switch (iLocal_500)
	{
		case 0:
			if ((TASK::GET_PED_WAYPOINT_PROGRESS(Local_87[0 /*4*/]) >= 28 && !__LIB_5__::func_463()) && !__LIB_6__::func_904())
			{
				func_1170(uParam0, "SAD5_NEWHORSE", 0);
				iLocal_500++;
			}
			break;
		case 1:
			if ((TASK::GET_PED_WAYPOINT_PROGRESS(Local_87[0 /*4*/]) >= 90 && !__LIB_5__::func_463()) && !__LIB_6__::func_904())
			{
				if (!bLocal_514)
				{
					func_1170(uParam0, "SAD5_RBNT_NBCH", 0);
				}
				else
				{
					func_1170(uParam0, "SAD5_RBNT_YBCH", 0);
				}
				iLocal_500++;
			}
			break;
		case 2:
			if ((TASK::GET_PED_WAYPOINT_PROGRESS(Local_87[0 /*4*/]) >= 210 && !__LIB_5__::func_463()) && !__LIB_6__::func_904())
			{
				if (!bLocal_514)
				{
					func_1170(uParam0, "SAD5_RBNT_NUNC", 0);
				}
				else
				{
					func_1170(uParam0, "SAD5_RBNT_YUNC", 0);
				}
				iLocal_500++;
			}
			break;
		case 3:
			if ((TASK::GET_PED_WAYPOINT_PROGRESS(Local_87[0 /*4*/]) >= 300 && !__LIB_5__::func_463()) && !__LIB_6__::func_904())
			{
				func_1170(uParam0, "SAD5_RBNT_CONT", 0);
				iLocal_500++;
			}
			break;
		case 4:
			if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_87[0 /*4*/]) >= 920 && __LIB_5__::func_463())
			{
				__LIB_5__::func_20(1, 1);
				iLocal_500++;
			}
			break;
		case 5:
			break;
	}
}

bool func_1186(var uParam0)
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
	POPULATION::_0xC6DCC2A3A8825C85(1);
	switch (iLocal_479)
	{
		case 0:
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_87[2 /*4*/], 1);
			__LIB_1__::func_148(&(vLocal_345[7 /*3*/]));
			iLocal_479++;
			__LIB_0__::func_105(1);
			break;
		case 1:
			if (STREAMING::IS_SRL_LOADED())
			{
				CAM::_0x0A5A4F1979ABB40E(&Local_517);
				func_1663(Global_35, Local_87[2 /*4*/], -2051.898f, -2277.301f, 55.3548f, 169.6f, joaat("MOTIONSTATE_RUN"));
				func_1663(Local_87[0 /*4*/], Local_87[1 /*4*/], -2055.302f, -2284.587f, 56.616f, 175.3f, joaat("MOTIONSTATE_RUN"));
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Global_35, "sad5_ride_to_pikes_basin_shot1", 0, 0, -1, 0, 0, -1);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_87[0 /*4*/], "sad5_ride_to_pikes_basin_shot1", 0, 0, -1, 0, 0, -1);
				CAM::_0xBC016635D6A73B31(sLocal_504, "1_NewAustin_1", 5);
				AUDIO::_0x5E3CCF03995388B5(-964734954, -2048.3f, -2312f, 58.7f);
				iLocal_479++;
			}
			else
			{
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_87[2 /*4*/], 2f);
			}
			break;
		case 2:
			func_1182("script@cme@SAD5_CME_SHOT2");
			iLocal_479++;
			__LIB_1__::func_148(&(vLocal_345[7 /*3*/]));
			break;
		case 3:
			iLocal_486 = (CAM::_0xEA113BF9B0C0C5D7(sLocal_504, "1_NewAustin_1", 5) - __LIB_1__::func_871(&(vLocal_345[7 /*3*/])));
			iLocal_487 = (CAM::_0x465F04F68AD38197(sLocal_504, "1_NewAustin_1", 5) - __LIB_1__::func_871(&(vLocal_345[7 /*3*/])));
			if (AUDIO::_0xFFE9C53DEEA3DB0B(iLocal_486, -821301652, -1957.5f, -2721.3f, 67.7f, STREAMING::IS_SRL_LOADED(), iLocal_487))
			{
				func_1663(Global_35, Local_87[2 /*4*/], -1949.9f, -2712.9f, 68.4f, -126.7f, joaat("MOTIONSTATE_RUN"));
				CLOCK::SET_CLOCK_TIME(11, 9, 0);
				CAM::_0xA54D643D0773EB65(sLocal_504, "1_NewAustin_1", 5);
				CAM::_0xBC016635D6A73B31(sLocal_504, "2_ScenicShot_1", 5);
				iLocal_479++;
			}
			break;
		case 4:
			func_1182("script@cme@SAD5_CME_SHOT3");
			__LIB_1__::func_148(&(vLocal_345[7 /*3*/]));
			iLocal_486 = (CAM::_0xEA113BF9B0C0C5D7(sLocal_504, "2_ScenicShot_1", 5) - __LIB_1__::func_871(&(vLocal_345[7 /*3*/])));
			iLocal_487 = (CAM::_0x465F04F68AD38197(sLocal_504, "2_ScenicShot_1", 5) - __LIB_1__::func_871(&(vLocal_345[7 /*3*/])));
			AUDIO::_0xFFE9C53DEEA3DB0B(iLocal_486, 1792623879, -2591.1f, -2502f, 70.5f, false, iLocal_487);
			iLocal_479++;
			break;
		case 5:
			iLocal_486 = (CAM::_0xEA113BF9B0C0C5D7(sLocal_504, "2_ScenicShot_1", 5) - __LIB_1__::func_871(&(vLocal_345[7 /*3*/])));
			iLocal_487 = (CAM::_0x465F04F68AD38197(sLocal_504, "2_ScenicShot_1", 5) - __LIB_1__::func_871(&(vLocal_345[7 /*3*/])));
			if (AUDIO::_0xFFE9C53DEEA3DB0B(iLocal_486, 1792623879, -2591.1f, -2502f, 70.5f, STREAMING::IS_SRL_LOADED(), iLocal_487))
			{
				CLOCK::SET_CLOCK_TIME(16, 9, 0);
				MISC::_SET_WEATHER_TYPE(joaat("HIGHPRESSURE"), true, true, false, 0f, false);
				func_1663(Global_35, Local_87[2 /*4*/], -2578.977f, -2502.619f, 68.3201f, 148.1101f, joaat("MOTIONSTATE_RUN"));
				func_1663(Local_87[0 /*4*/], Local_87[1 /*4*/], -2581.65f, -2508.004f, 69.2761f, 143.1731f, joaat("MOTIONSTATE_RUN"));
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Global_35, "sad5_ride_to_pikes_basin_shot3", 0, 0, -1, 0, 0, -1);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_87[0 /*4*/], "sad5_ride_to_pikes_basin_shot3", 0, 0, -1, 0, 0, -1);
				CAM::_0xA54D643D0773EB65(sLocal_504, "2_ScenicShot_1", 5);
				CAM::_0xBC016635D6A73B31(sLocal_504, "3_SignShot_1", 5);
				iLocal_479++;
			}
			break;
		case 6:
			__LIB_1__::func_148(&(vLocal_345[7 /*3*/]));
			func_1182("script@cme@SAD5_CME_RETURN");
			STREAMING::_0xEF1A8A484118735E();
			iLocal_486 = (CAM::_0xEA113BF9B0C0C5D7(sLocal_504, "3_SignShot_1", 5) - __LIB_1__::func_871(&(vLocal_345[7 /*3*/])));
			iLocal_487 = (CAM::_0x465F04F68AD38197(sLocal_504, "3_SignShot_1", 5) - __LIB_1__::func_871(&(vLocal_345[7 /*3*/])));
			AUDIO::_0xFFE9C53DEEA3DB0B(iLocal_486, 0, -2696.8f, -2543.5f, 71.6f, STREAMING::IS_SRL_LOADED(), iLocal_487);
			iLocal_479++;
			break;
		case 7:
			iLocal_486 = (CAM::_0xEA113BF9B0C0C5D7(sLocal_504, "3_SignShot_1", 5) - __LIB_1__::func_871(&(vLocal_345[7 /*3*/])));
			iLocal_487 = (CAM::_0x465F04F68AD38197(sLocal_504, "3_SignShot_1", 5) - __LIB_1__::func_871(&(vLocal_345[7 /*3*/])));
			if (AUDIO::_0xFFE9C53DEEA3DB0B(iLocal_486, 0, -2696.8f, -2543.5f, 71.6f, STREAMING::IS_SRL_LOADED(), iLocal_487))
			{
				__LIB_0__::func_489(0, 0);
				func_1663(Global_35, Local_87[2 /*4*/], -2709.8f, -2546.5f, 66.4f, 100.4f, joaat("MOTIONSTATE_RUN"));
				func_1663(Local_87[0 /*4*/], Local_87[1 /*4*/], -2717.6f, -2546.6f, 64.9f, 100.4f, joaat("MOTIONSTATE_RUN"));
				CLOCK::SET_CLOCK_TIME(18, 30, 0);
				MISC::_SET_WEATHER_TYPE(joaat("HIGHPRESSURE"), true, true, false, 0f, false);
				CLOCK::PAUSE_CLOCK(true, 0);
				iLocal_479++;
			}
			break;
		case 8:
			__LIB_1__::func_148(&(vLocal_345[7 /*3*/]));
			AUDIO::_0x43037ABFE214A851();
			STREAMING::END_SRL();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			POPULATION::_0xBC90BDF4E5228EA1();
			CAM::_0xA54D643D0773EB65(sLocal_504, "3_SignShot_1", 5);
			CAM::_0x702B75DC9D3EDE56(false);
			iLocal_479 = 0;
			return true;
	}
	if (iLocal_479 > 1)
	{
		CAM::_0x702B75DC9D3EDE56(true);
	}
	return false;
}

bool func_1192(int iParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_463[iParam0]))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			if (__LIB_2__::func_1(Local_87[0 /*4*/], 0, 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_463[iParam0], "Sadie", Local_87[0 /*4*/], 0);
				return true;
			}
			break;
		case 1:
			if (__LIB_2__::func_1(Local_87[0 /*4*/], 0, 1) && __LIB_2__::func_1(Global_35, 0, 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_463[iParam0], "Sadie", Local_87[0 /*4*/], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_463[iParam0], "John", Global_35, 0);
				return true;
			}
			break;
		case 2:
			if (__LIB_2__::func_1(iLocal_290[0], 0, 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_463[iParam0], "HORSE", iLocal_290[0], 0);
			}
			if (__LIB_2__::func_1(iLocal_290[1], 0, 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_463[iParam0], "HORSE1", iLocal_290[1], 0);
			}
			if (__LIB_2__::func_1(iLocal_290[2], 0, 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_463[iParam0], "HORSE2", iLocal_290[2], 0);
			}
			if (__LIB_2__::func_1(iLocal_290[3], 0, 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_463[iParam0], "HORSE3", iLocal_290[3], 0);
			}
			if (__LIB_2__::func_1(Local_100[0 /*4*/], 0, 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_463[iParam0], "MALE", Local_100[0 /*4*/], 0);
			}
			if (__LIB_2__::func_1(Local_100[1 /*4*/], 0, 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_463[iParam0], "MALE1", Local_100[1 /*4*/], 0);
			}
			if (__LIB_2__::func_1(Local_100[2 /*4*/], 0, 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_463[iParam0], "MALE2", Local_100[2 /*4*/], 0);
			}
			if (__LIB_2__::func_1(Local_100[3 /*4*/], 0, 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_463[iParam0], "MALE3", Local_100[3 /*4*/], 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_100[4 /*4*/]))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_463[iParam0], "MALE_BOUNTY", Local_100[4 /*4*/], 0);
			}
			return true;
		case 3:
			if (__LIB_2__::func_1(Local_87[0 /*4*/], 0, 1) && __LIB_2__::func_1(Global_35, 0, 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_463[iParam0], "Sadie", Local_87[0 /*4*/], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_463[iParam0], "John", Global_35, 0);
				return true;
			}
			break;
	}
	return false;
}

void func_1193(var uParam0)
{
	switch (__LIB_4__::func_979(uParam0))
	{
		case 0:
			__LIB_5__::func_486(uParam0, "SAD5_OBJ3", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
		case 1:
			break;
	}
}

bool func_1194(var uParam0)
{
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			return true;
		case 2:
			return true;
		case 4:
			if (MAP::DOES_BLIP_EXIST(iLocal_309[2]))
			{
				MAP::REMOVE_BLIP(&(iLocal_309[2]));
			}
			else
			{
				return true;
			}
			break;
	}
	return false;
}

void func_1195()
{
	if (PED::_0x7C8AA850617651D9(Local_87[0 /*4*/], joaat("SAD5_RIDE1")))
	{
		PED::_0x2B4CE170DE09F346(Local_87[0 /*4*/], joaat("SAD5_RIDE1"));
		AUDIO::_0x660A8F876DF1D4F8(7);
		AUDIO::_0x660A8F876DF1D4F8(25);
		AUDIO::_0x660A8F876DF1D4F8(21);
		AUDIO::_0x660A8F876DF1D4F8(19);
		AUDIO::_0x660A8F876DF1D4F8(23);
		AUDIO::_0x660A8F876DF1D4F8(22);
		AUDIO::_0x660A8F876DF1D4F8(2);
	}
}

bool func_1202(var uParam0)
{
	if (!func_1667(uParam0))
	{
		return false;
	}
	if (!func_1668(uParam0))
	{
		return false;
	}
	return true;
}

bool func_1203(var uParam0)
{
	if (iLocal_498 == MISC::GET_FRAME_COUNT())
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_100[4 /*4*/]))
	{
		Local_100[4 /*4*/] = __LIB_1__::func_545(iLocal_80, func_1669(3, 4), func_1670(3, 4), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		TASK::TASK_CARRIABLE(Local_100[4 /*4*/], joaat("HOGTIED_PED"), iLocal_290[0], 0, 0);
		PED::_SET_PED_BODY_COMPONENT(Local_100[4 /*4*/], iLocal_86);
		PED::_UPDATE_PED_VARIATION(Local_100[4 /*4*/], true, true, true, true, false);
		ENTITY::_0x18FF3110CF47115D(Local_100[4 /*4*/], 1, 0);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_100[4 /*4*/], true);
		PED::SET_PED_CAN_BE_TARGETTED(Local_100[4 /*4*/], false);
		__LIB_5__::func_106(uParam0, Local_100[4 /*4*/], "SAD5_FINLEY", 0);
		PED::SET_PED_CONFIG_FLAG(Local_100[4 /*4*/], 6, true);
		PED::SET_PED_CONFIG_FLAG(Local_100[4 /*4*/], 305, true);
		PED::SET_PED_CONFIG_FLAG(Local_100[4 /*4*/], 306, true);
		__LIB_1__::func_991(Local_100[4 /*4*/], 0);
		PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(Local_100[4 /*4*/], joaat("SAD5_FINLEY"));
		PED::_0x6569F31A01B4C097(Local_100[4 /*4*/], 4, 0);
		ENTITY::_0x18FF3110CF47115D(Local_100[4 /*4*/], 10, 0);
		iLocal_498 = MISC::GET_FRAME_COUNT();
	}
	return true;
}

void func_1204(int iParam0)
{
	WEAPON::_HIDE_PED_WEAPONS(iParam0, 2, false);
}

void func_1208(var uParam0)
{
	switch (__LIB_4__::func_979(uParam0))
	{
		case 0:
			__LIB_5__::func_486(uParam0, "SAD5_OBJ4", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
		case 1:
			__LIB_5__::func_486(uParam0, "SAD5_OBJ5", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
		case 2:
			__LIB_5__::func_486(uParam0, "SAD5_OBJ1", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
		case 3:
			__LIB_5__::func_486(uParam0, "SAD5_OBJ3", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
	}
}

void func_1209()
{
	switch (iLocal_497)
	{
		case 0:
			if (!__LIB_0__::func_139(iLocal_431[5]))
			{
				iLocal_431[5] = __LIB_1__::func_877("SAD5_BINO", joaat("INPUT_QUICK_EQUIP_ITEM"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				__LIB_4__::func_862(iLocal_431[5], joaat("INPUT_OPEN_WHEEL_MENU"));
				__LIB_4__::func_862(iLocal_431[5], joaat("INPUT_SELECT_ITEM_WHEEL"));
			}
			else
			{
				if (__LIB_1__::func_514(iLocal_431[5], 1) || __LIB_5__::func_777(iLocal_431[5], 1))
				{
					__LIB_1__::func_748(&(iLocal_431[5]), 1, 1);
					iLocal_497++;
				}
				else
				{
					PAD::_SET_CONTROL_CONTEXT(5, joaat("QUICKEQUIPALT"));
				}
				if (__LIB_0__::func_153(Global_35, 0, 1, 1) == joaat("WEAPON_KIT_BINOCULARS"))
				{
					__LIB_1__::func_748(&(iLocal_431[5]), 1, 1);
					iLocal_497 = 2;
				}
			}
			break;
		case 1:
			INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), joaat("WEAPON_KIT_BINOCULARS"));
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_KIT_BINOCULARS"), false, 0, false, false);
			TASK::TASK_SWAP_WEAPON(Global_35, 1, 1, 0, 0);
			iLocal_497++;
			break;
		case 2:
			break;
	}
}

void func_1210()
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(-3189.389f, -2539.622f, 67.221f, -2737.264f, -2433.474f, 73.18085f, true);
	fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_87[0 /*4*/], true, false), -2737.264f, -2433.474f, 73.18085f, true);
	fVar2 = __LIB_0__::func_251(((fVar0 - fVar1) / fVar0), 0f, 1f);
	__LIB_5__::func_375(19, 0, fVar2, &uLocal_438);
}

bool func_1211(var uParam0)
{
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			if (!MAP::DOES_BLIP_EXIST(iLocal_309[3]))
			{
				iLocal_309[3] = MAP::_BLIP_ADD_FOR_RADIUS(408396114, -3630.674f, -2591.092f, -15.2805f, 8f);
				__LIB_10__::func_935(uParam0, Local_87[0 /*4*/], 1);
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_309[3]))
			{
				return true;
			}
			break;
		case 1:
			break;
		case 2:
			if (MAP::DOES_BLIP_EXIST(iLocal_309[3]))
			{
				MAP::REMOVE_BLIP(&(iLocal_309[3]));
				return true;
			}
			break;
		case 5:
			if (MAP::DOES_BLIP_EXIST(iLocal_309[3]))
			{
				MAP::REMOVE_BLIP(&(iLocal_309[3]));
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_309[3]))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_1212(var uParam0)
{
	int iVar0;
	if (__LIB_14__::func_335(&(iLocal_326[1]), 3, 10, 1))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (iVar0 == 0)
			{
				__LIB_2__::func_665(&(Local_100[iVar0 /*4*/]), &(iLocal_326[1]), 1, 1, 1, 0, 0);
			}
			else
			{
				__LIB_2__::func_665(&(Local_100[iVar0 /*4*/]), &(iLocal_326[1]), 0, 1, 1, 1, 0);
			}
			iVar0++;
		}
		PED::_0xD5BD1B5318A81994(iLocal_326[1], 1);
	}
}

void func_1213(var uParam0)
{
	if (!PED::IS_PED_ON_MOUNT(Local_87[0 /*4*/]))
	{
		switch (iLocal_427)
		{
			case 0:
				__LIB_1__::func_640(11);
				__LIB_1__::func_148(&(vLocal_345[2 /*3*/]));
				ANIMSCENE::START_ANIM_SCENE(uLocal_463[1]);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_100[0 /*4*/], "sad5_posse_ride_to_pikes_basin", 0, 4196360, -1, 0, 0, -1);
				iLocal_427 = 4;
				break;
			case 1:
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_100[0 /*4*/], 0))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_100[0 /*4*/], 1.001f, 0, -1082130432 /* Float: -1f */, 0);
				}
				if (ANIMSCENE::_0x1F0E401031E20146(uLocal_463[1], "PL_D_CO_LEFT") && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_463[1], "S_C_LOOP", 1))
				{
					func_1684(uParam0);
				}
				break;
			case 2:
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_100[0 /*4*/], 0))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_100[0 /*4*/], 1.001f, 0, -1082130432 /* Float: -1f */, 0);
				}
				if (ANIMSCENE::_0x1F0E401031E20146(uLocal_463[1], "PL_D_CO_RIGHT") && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_463[1], "S_C_LOOP", 1))
				{
					func_1684(uParam0);
				}
				break;
			case 3:
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_100[0 /*4*/], 0))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_100[0 /*4*/], 2.5f, 0, -1082130432 /* Float: -1f */, 0);
				}
				iLocal_427 = 7;
				break;
			case 4:
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_100[0 /*4*/], 0))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_100[0 /*4*/], 1f, 0, -1082130432 /* Float: -1f */, 0);
				}
				if ((ANIMSCENE::_0x1F0E401031E20146(uLocal_463[1], "PL_B_ENTER") && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_463[1], "S_C_LOOP", 1)) || (ANIMSCENE::_0x1F0E401031E20146(uLocal_463[1], "PL_F_ENTER_CLOSE") && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_463[1], "S_C_LOOP", 1)))
				{
					if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_37, false, 0))
					{
						if (__LIB_3__::func_547(Local_87[0 /*4*/], Global_35, 0.85f) == 3)
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_463[1], "PL_D_CO_LEFT");
							if (ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_463[1], "PL_D_CO_LEFT"))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_463[1], "PL_D_CO_LEFT", true);
								iLocal_427 = 1;
							}
						}
						else
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_463[1], "PL_D_CO_RIGHT");
							if (ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_463[1], "PL_D_CO_RIGHT"))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_463[1], "PL_D_CO_RIGHT", true);
								iLocal_427 = 2;
							}
						}
					}
					else
					{
						func_1684(uParam0);
					}
				}
				break;
			case 7:
				if (ANIMSCENE::_0x1F0E401031E20146(uLocal_463[1], "PL_E_ACTION"))
				{
					if (ANIMSCENE::_0x005E6F28DD7ED58D(uLocal_463[1], "Sadie") && !__LIB_0__::func_75(&(vLocal_345[1 /*3*/])))
					{
						func_1169(uParam0, -1, 1.5f);
						__LIB_4__::func_952(uParam0, 2);
					}
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_100[0 /*4*/], 0))
					{
						if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_100[0 /*4*/]) > 70 && TASK::GET_PED_WAYPOINT_PROGRESS(Local_100[0 /*4*/]) < 77)
						{
						}
						if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_100[0 /*4*/]) > 80)
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_100[0 /*4*/], 2.5f, 0, -1082130432 /* Float: -1f */, 0);
						}
					}
				}
				break;
			case 6:
				if (ANIMSCENE::_0x1F0E401031E20146(uLocal_463[1], "PL_B_ENTER") && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_463[1], "S_C_LOOP", 1))
				{
					if (__LIB_3__::func_547(Local_87[0 /*4*/], Global_35, 0.85f) == 3)
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_463[1], "PL_D_FLINCH_LEFT");
						if (ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_463[1], "PL_D_CO_LEFT"))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_463[1], "PL_D_CO_LEFT", true);
							iLocal_427 = 1;
						}
					}
					else
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_463[1], "PL_D_CO_LEFT");
						if (ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_463[1], "PL_D_CO_LEFT"))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_463[1], "PL_D_CO_LEFT", true);
							iLocal_427 = 1;
						}
					}
				}
				break;
			case 5:
				ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_463[1], "PL_F_ENTER_CLOSE");
				if (ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_463[1], "PL_F_ENTER_CLOSE"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_463[1], "PL_F_ENTER_CLOSE", true);
					ANIMSCENE::START_ANIM_SCENE(uLocal_463[1]);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_100[0 /*4*/], "sad5_posse_ride_to_pikes_basin", 0, 8, -1, 0, 0, -1);
					__LIB_1__::func_640(11);
					iLocal_427 = 4;
					__LIB_1__::func_148(&(vLocal_345[2 /*3*/]));
				}
				break;
		}
	}
}

int func_1214()
{
	if (__LIB_1__::func_732(iLocal_431[3], 1))
	{
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::SET_GAMEPLAY_ENTITY_HINT(Local_100[0 /*4*/], 0f, 0f, 0f, true, 2000, 2000, 2000, 0);
		}
		return 1;
	}
	return 0;
}

void func_1217(var uParam0, int iParam1, int iParam2)
{
	if (!__LIB_2__::func_1(*uParam0, 0, 1))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_2))
	{
		__LIB_0__::func_325(&(uParam0->f_2));
	}
	uParam0->f_2 = MAP::_BLIP_ADD_FOR_ENTITY(iParam1, *uParam0);
	if (iParam2 != 0)
	{
		MAP::_BLIP_SET_MODIFIER(uParam0->f_2, iParam2);
	}
}

struct<4> func_1218(int iParam0, int iParam1)
{
	return func_1688(iParam0, iParam1);
}

void func_1219(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_828(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_1221(var uParam0)
{
	switch (__LIB_4__::func_979(uParam0))
	{
		case 0:
			__LIB_5__::func_486(uParam0, "SAD5_OBJ3", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
		case 1:
			__LIB_5__::func_486(uParam0, "SAD5_OBJ3", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
	}
}

bool func_1222(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (iLocal_498 == MISC::GET_FRAME_COUNT())
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_121[iVar0 /*4*/]))
		{
			Local_121[iVar0 /*4*/] = __LIB_1__::func_545(iLocal_81, func_1669(4, iVar0), func_1670(4, iVar0), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			iLocal_498 = MISC::GET_FRAME_COUNT();
			PED::SET_PED_CONFIG_FLAG(Local_121[iVar0 /*4*/], 307, true);
			ENTITY::_0x18FF3110CF47115D(Local_121[iVar0 /*4*/], 2, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_121[iVar0 /*4*/], joaat("REL_PLAYER_ENEMY"));
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_121[iVar0 /*4*/], true);
			__LIB_4__::func_7(Local_121[iVar0 /*4*/], joaat("WEAPON_REPEATER_CARBINE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			PED::_0xF1C03A5352243A30(Local_121[iVar0 /*4*/]);
		}
		if ((iVar0 == 3 || iVar0 == 4) || iVar0 == 0)
		{
			__LIB_2__::func_279(Local_121[iVar0 /*4*/], 1);
		}
		if ((iVar0 == 6 || iVar0 == 7) || iVar0 == 8)
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_121[iVar0 /*4*/], false);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_121[iVar0 /*4*/], true);
			ENTITY::FREEZE_ENTITY_POSITION(Local_121[iVar0 /*4*/], true);
		}
		if (iVar0 == (12 - 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1223(var uParam0)
{
	int iVar0;
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (!MAP::DOES_BLIP_EXIST(Local_100[iVar0 /*4*/].f_2))
				{
					func_1217(&(Local_100[iVar0 /*4*/]), joaat("BLIP_STYLE_ENEMY"), -662251075);
				}
				iVar0++;
			}
			return true;
		case 2:
			return true;
		case 3:
			if (__LIB_0__::func_266(Global_35, -2737.095f, -2428.279f, 72.556f, 15f, 1, 1))
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_309[4]))
				{
					MAP::REMOVE_BLIP(&(iLocal_309[4]));
				}
				if (!MAP::DOES_BLIP_EXIST(iLocal_309[4]))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

void func_1224()
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_100[0 /*4*/]))
	{
		if (__LIB_3__::func_547(Local_100[0 /*4*/], Global_35, 0f) == 1 && __LIB_0__::func_665(Global_35, Local_100[0 /*4*/], 0, 0) > 30f)
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_100[0 /*4*/], 1.501f, 0, -1082130432 /* Float: -1f */, 0);
		}
		else
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_100[0 /*4*/], 2f, 0, -1082130432 /* Float: -1f */, 0);
		}
		if (ENTITY::IS_ENTITY_OCCLUDED(Local_100[0 /*4*/]) && TASK::GET_PED_WAYPOINT_PROGRESS(Local_100[0 /*4*/]) < 45)
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_100[0 /*4*/], 3f, 0, -1082130432 /* Float: -1f */, 0);
		}
	}
}

void func_1227(var uParam0)
{
	int iVar0;
	switch (iLocal_428)
	{
		case 0:
			ANIMSCENE::START_ANIM_SCENE(uLocal_463[2]);
			iLocal_428 = 1;
			break;
		case 4:
			break;
		case 1:
			if ((ANIMSCENE::_0x1F0E401031E20146(uLocal_463[2], "PL_A_ENTER") && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_463[2], "S_B_WALT_LOOP", 1)) || (ANIMSCENE::_0x1F0E401031E20146(uLocal_463[2], "PL_B_WAIT_LOOP") && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_463[2], "S_B_WALT_LOOP", 1)))
			{
				if ((ANIMSCENE::_0x1F0E401031E20146(uLocal_463[3], "PL_E_RESP_THREAT_L") || ANIMSCENE::_0x1F0E401031E20146(uLocal_463[3], "PL_E_RESP_THREAT_R")) && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_463[3], "S_F_THREAT2", 1))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_463[2], "PL_C_REACT_ENTER");
					if (ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_463[2], "PL_C_REACT_ENTER"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_463[2], "PL_C_REACT_ENTER", true);
						iLocal_428 = 3;
					}
				}
			}
			break;
		case 3:
			if (ANIMSCENE::_0x1F0E401031E20146(uLocal_463[2], "PL_C_REACT_ENTER") && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_463[2], "S_D_REACT_LOOP", 1))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_463[2], "PL_E_REACT_EXIT");
				if ((ANIMSCENE::_0x1F0E401031E20146(uLocal_463[3], "PL_E_RESP_THREAT_L") || ANIMSCENE::_0x1F0E401031E20146(uLocal_463[3], "PL_E_RESP_THREAT_R")) && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_463[3], "S_H_THREAT_END", 1))
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_463[2], "PL_E_REACT_EXIT"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_463[2], "PL_E_REACT_EXIT", true);
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(0, false, true);
						TASK::TASK_AIM_AT_ENTITY(0, Local_87[0 /*4*/], -1, 0, 0);
						__LIB_1__::func_474(Local_100[3 /*4*/], &iVar0, 0, 0, 1, 1);
						iLocal_428 = 7;
					}
				}
			}
			break;
		case 7:
			break;
		case 6:
			ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_463[2], "PL_B_WAIT_LOOP");
			if (ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_463[2], "PL_B_WAIT_LOOP"))
			{
				ANIMSCENE::START_ANIM_SCENE(uLocal_463[2]);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_463[2], "PL_B_WAIT_LOOP", true);
				iLocal_428 = 1;
			}
			break;
		case 5:
			break;
	}
}

void func_1228()
{
	int iVar0;
	TASK::_TASK_START_SCENARIO_IN_PLACE(Local_121[3 /*4*/], joaat("WORLD_HUMAN_SMOKE_CIGAR"), -1, false, 0, -1f, false);
	TASK::_TASK_START_SCENARIO_IN_PLACE(Local_121[4 /*4*/], joaat("WORLD_HUMAN_SMOKE_CIGAR"), -1, false, 0, -1f, false);
	TASK::_TASK_START_SCENARIO_IN_PLACE(Local_121[1 /*4*/], joaat("WORLD_HUMAN_GUARD_SCOUT"), -1, false, 0, -1f, false);
	TASK::_TASK_START_SCENARIO_IN_PLACE(Local_121[2 /*4*/], joaat("WORLD_HUMAN_GUARD_SCOUT"), -1, false, 0, -1f, false);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("WORLD_HUMAN_GUARD_MILITARY"), 14000, false, 0, -1f, false);
	TASK::TASK_WANDER_IN_VOLUME(0, Local_14.f_4, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
	__LIB_1__::func_474(Local_121[5 /*4*/], &iVar0, 0, 0, 1, 1);
}

void func_1229()
{
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_329[0]))
	{
		uLocal_329[0] = TASK::CREATE_SCENARIO_POINT(joaat("TEETER"), -2812.493f, -2329.375f, 69.71915f, 172f, 4f, 0, 0);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_329[1]))
	{
		uLocal_329[1] = TASK::CREATE_SCENARIO_POINT(joaat("TEETER"), -2806.231f, -2330.737f, 69.57687f, 172f, 4f, 0, 0);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_329[2]))
	{
		uLocal_329[2] = TASK::CREATE_SCENARIO_POINT(joaat("TEETER"), -2762.968f, -2324.594f, 71.83273f, 172f, 4f, 0, 0);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_329[3]))
	{
		uLocal_329[3] = TASK::CREATE_SCENARIO_POINT(joaat("TEETER"), -2823.64f, -2380.43f, 54.99247f, 5f, 4f, 0, 0);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_329[4]))
	{
		uLocal_329[4] = TASK::CREATE_SCENARIO_POINT(joaat("TEETER"), -2818.067f, -2386.374f, 55.05733f, 5f, 4f, 0, 0);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_329[5]))
	{
		uLocal_329[5] = TASK::CREATE_SCENARIO_POINT(joaat("TEETER"), -2691.709f, -2314.583f, 78.95918f, 201.0984f, 4f, 0, 0);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_329[6]))
	{
		uLocal_329[6] = TASK::CREATE_SCENARIO_POINT(joaat("TEETER"), -2701.848f, -2314.413f, 78.10107f, 201.0984f, 4f, 0, 0);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_329[7]))
	{
		uLocal_329[7] = TASK::CREATE_SCENARIO_POINT(joaat("TEETER"), -2716.668f, -2316f, 77.64304f, 201.0984f, 4f, 0, 0);
	}
}

void func_1234(var uParam0)
{
	int iVar0;
	int iVar1;
	if (func_1696(&Local_100, 5, 0, 0) || func_1696(&Local_121, 6, 0, 0))
	{
		if (__LIB_5__::func_463())
		{
			__LIB_5__::func_20(0, 0);
		}
		if (func_1160(16))
		{
			if (iLocal_425 < 2)
			{
				__LIB_5__::func_505(uParam0, "SAD5_P_GALERT", "", 1, 0);
			}
		}
		if (!func_1160(8))
		{
			func_1170(uParam0, "SAD5_S4_DECSHT", 0);
		}
		if (!func_1160(16) && !func_1160(67108864))
		{
			func_1697();
			iLocal_424 = 0;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (func_1698(iVar0))
				{
				}
				iVar0++;
			}
			iLocal_424 = 15;
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
			{
				func_1170(uParam0, "SAD5_TO_COMBAT", 0);
			}
			else
			{
				func_1170(uParam0, "SAD5_TO_COMBATJ", 0);
			}
		}
		if (!SCRIPTS::_0x7409669C5ED50144(joaat("CHAL_CTX_SHOOTOUT")))
		{
			SCRIPTS::_0x7D654266025E921B(joaat("CHAL_CTX_SHOOTOUT"));
		}
		PED::SET_PED_CONFIG_FLAG(Local_87[0 /*4*/], 249, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_87[0 /*4*/], 27, false);
		PED::SET_PED_ACCURACY(Local_87[0 /*4*/], 25);
		PED::_SET_PED_CROUCH_MOVEMENT(Local_87[0 /*4*/], false, 0, false);
		func_1699();
		UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
		__LIB_4__::func_952(uParam0, 5);
		__LIB_5__::func_372(uParam0, 2);
		__LIB_1__::func_148(&(vLocal_345[6 /*3*/]));
		__LIB_10__::func_935(uParam0, Local_87[0 /*4*/], 1);
		WEAPON::SET_CURRENT_PED_WEAPON(Local_87[0 /*4*/], joaat("WEAPON_REPEATER_CARBINE_SADIE"), false, 0, false, false);
		HUD::_0x160825DADF1B04B3();
		AUDIO::_0x2B9C37C01BF25EDB("shootout");
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0, 64);
		__LIB_1__::func_474(Local_87[0 /*4*/], &iVar1, 0, 0, 1, 1);
		PED::_0x411189E51B8020BA(Local_87[0 /*4*/], "Stealth");
		PED::_0x411189E51B8020BA(Global_35, "Stealth");
		if (__LIB_0__::func_139(iLocal_431[0]))
		{
			if (!__LIB_9__::func_331(PLAYER::PLAYER_ID(), Local_87[0 /*4*/]))
			{
				__LIB_1__::func_748(&(iLocal_431[0]), 1, 1);
			}
		}
		if (__LIB_0__::func_139(iLocal_431[2]))
		{
			if (!__LIB_9__::func_331(PLAYER::PLAYER_ID(), Local_87[0 /*4*/]))
			{
				__LIB_1__::func_748(&(iLocal_431[2]), 1, 1);
			}
		}
		if (__LIB_0__::func_139(iLocal_431[1]))
		{
			if (!__LIB_9__::func_331(PLAYER::PLAYER_ID(), Local_87[0 /*4*/]))
			{
				__LIB_1__::func_748(&(iLocal_431[1]), 1, 1);
			}
		}
		MISC::_0xE98D55C5983F2509(Global_35);
		MISC::_0xE98D55C5983F2509(Local_87[0 /*4*/]);
		func_1217(&(Local_100[0 /*4*/]), joaat("BLIP_STYLE_ENEMY"), 0);
		func_1217(&(Local_100[1 /*4*/]), joaat("BLIP_STYLE_ENEMY"), 0);
		func_1217(&(Local_100[2 /*4*/]), joaat("BLIP_STYLE_ENEMY"), 0);
		func_1217(&(Local_100[3 /*4*/]), joaat("BLIP_STYLE_ENEMY"), 0);
		if (MAP::DOES_BLIP_EXIST(iLocal_309[8]))
		{
			MAP::REMOVE_BLIP(&(iLocal_309[8]));
		}
		func_1248();
		func_163();
	}
	if (func_1160(32))
	{
		if ((((ANIMSCENE::_0x005E6F28DD7ED58D(uLocal_463[3], "SADIE") || ANIMSCENE::_0x005E6F28DD7ED58D(uLocal_463[2], "MALE")) || ANIMSCENE::_0x005E6F28DD7ED58D(uLocal_463[2], "MALE1")) || ANIMSCENE::_0x005E6F28DD7ED58D(uLocal_463[2], "MALE2")) || ANIMSCENE::_0x005E6F28DD7ED58D(uLocal_463[2], "MALE3"))
		{
			if (__LIB_2__::func_1(Local_100[1 /*4*/], 0, 1))
			{
				__LIB_14__::func_337(Local_100[1 /*4*/], ENTITY::GET_ENTITY_COORDS(Local_87[0 /*4*/], false, false), 0, 0, 0, 0, 0);
				TASK::TASK_COMBAT_PED(Local_100[3 /*4*/], Local_87[0 /*4*/], 0, 0);
				func_1697();
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_4__::func_952(uParam0, 5);
				__LIB_5__::func_372(uParam0, 2);
				func_1699();
				iLocal_424 = 0;
				WEAPON::SET_CURRENT_PED_WEAPON(Local_87[0 /*4*/], joaat("WEAPON_REPEATER_CARBINE_SADIE"), false, 0, false, false);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_87[0 /*4*/], 200f, 0, 64);
				func_163();
				__LIB_10__::func_935(uParam0, Local_87[0 /*4*/], 1);
				AUDIO::_0x2B9C37C01BF25EDB("shootout");
				if (MAP::DOES_BLIP_EXIST(iLocal_309[8]))
				{
					MAP::REMOVE_BLIP(&(iLocal_309[8]));
				}
			}
		}
	}
}

void func_1235(var uParam0)
{
	if (func_1160(16))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_2, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Local_87[0 /*4*/], Local_14.f_2, true, 0))
		{
			if (!func_1160(2048))
			{
				func_1702(6, -2806.072f, -2329.897f, 69.6374f);
				func_1702(7, -2812.668f, -2329.184f, 69.5638f);
				CAM::_0x986F7A51EE3E1F92(Local_121[6 /*4*/], 1);
				CAM::_0x986F7A51EE3E1F92(Local_121[7 /*4*/], 1);
				PED::SET_PED_ACCURACY(Local_121[6 /*4*/], 35);
				PED::SET_PED_ACCURACY(Local_121[7 /*4*/], 30);
				func_1181(2048, 1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_290[2], -2799.543f, -2373.335f, 41.2332f, 2.5f, 20000, 0.25f, 0, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_290[3], -2799.543f, -2368.335f, 41.2332f, 2.5f, 20000, 0.25f, 0, 40000f);
			}
		}
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_2, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Local_87[0 /*4*/], Local_14.f_2, true, 0))
		{
			if (!func_1160(4096))
			{
				func_1702(8, -2762.45f, -2323.869f, 71.9093f);
				PED::SET_PED_ACCURACY(Local_121[8 /*4*/], 30);
				func_1181(4096, 1);
			}
		}
		if (__LIB_0__::func_266(Local_121[6 /*4*/], -2806.072f, -2329.897f, 69.6374f, 2f, 1, 1) || __LIB_0__::func_266(Local_121[7 /*4*/], -2812.668f, -2329.184f, 69.5638f, 2f, 1, 1))
		{
			if (!__LIB_8__::func_684("SAD5_C_LINES") && !__LIB_0__::func_27(iLocal_462, 1073741824 /* Float: 2f */))
			{
				func_1170(uParam0, "SAD5_S6_OBJ8_D", 0);
				__LIB_1__::func_683(&iLocal_462, 1073741824 /* Float: 2f */);
			}
		}
	}
	else if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_8, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Local_87[0 /*4*/], Local_14.f_8, true, 0)) || ((!__LIB_2__::func_1(Local_121[9 /*4*/], 0, 1) && !__LIB_2__::func_1(Local_121[10 /*4*/], 0, 1)) && !__LIB_2__::func_1(Local_121[11 /*4*/], 0, 1)))
	{
		if (!func_1160(4194304))
		{
			func_1702(6, -2692.354f, -2314.217f, 79.0802f);
			func_1702(7, -2702.677f, -2313.861f, 78.2563f);
			func_1702(8, -2717.451f, -2315.715f, 77.7153f);
			PED::SET_PED_COMBAT_MOVEMENT(Local_121[6 /*4*/], 1);
			PED::SET_PED_COMBAT_MOVEMENT(Local_121[7 /*4*/], 1);
			PED::SET_PED_COMBAT_MOVEMENT(Local_121[8 /*4*/], 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_121[6 /*4*/], -2692.354f, -2314.217f, 79.0802f, 2.5f, 0, 0, 0);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_121[7 /*4*/], -2702.677f, -2313.861f, 78.2563f, 2.5f, 0, 0, 0);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_121[8 /*4*/], -2717.451f, -2315.715f, 77.7153f, 2.5f, 0, 0, 0);
			PED::SET_PED_ACCURACY(Local_121[8 /*4*/], 30);
			func_1170(uParam0, "SAD5_S6_OBJ8_D", 0);
			__LIB_1__::func_148(&(vLocal_345[0 /*3*/]));
			func_1181(4194304, 1);
		}
		else
		{
			if (!__LIB_0__::func_27(iLocal_462, 32768) && !__LIB_8__::func_684("SAD5_S6_OBJ8_D"))
			{
				func_1170(uParam0, "SAD5_S6_COMPL", 0);
				__LIB_1__::func_683(&iLocal_462, 32768);
			}
			if ((__LIB_0__::func_27(iLocal_462, 32768) && !__LIB_0__::func_27(iLocal_462, 131072)) && !__LIB_5__::func_463())
			{
				func_1170(uParam0, "SAD5_S7_ENEM_E", 0);
				__LIB_1__::func_683(&iLocal_462, 131072);
			}
		}
	}
}

void func_1236()
{
	int iVar0;
	if ((func_1160(16) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_13, true, 0)) || ENTITY::IS_ENTITY_IN_VOLUME(Local_87[0 /*4*/], Local_14.f_13, true, 0))
	{
		if (!func_1160(33554432))
		{
			func_1703(9, -2665.494f, -2380.611f, 67.70519f, 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_121[9 /*4*/], -2665.494f, -2380.611f, 67.70519f, 3f, 0, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_121[9 /*4*/], 35, true);
			PED::SET_PED_ACCURACY(Local_121[9 /*4*/], 5);
			func_1703(10, -2671.551f, -2352.448f, 65.3812f, 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_121[10 /*4*/], -2671.551f, -2352.448f, 65.3812f, 3f, 0, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_121[10 /*4*/], 35, true);
			PED::SET_PED_ACCURACY(Local_121[10 /*4*/], 5);
			func_1703(11, -2682.249f, -2329.415f, 62.05298f, 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_121[11 /*4*/], -2682.249f, -2329.415f, 62.05298f, 5f, 0, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_121[11 /*4*/], 35, true);
			PED::SET_PED_ACCURACY(Local_121[11 /*4*/], 5);
			func_1181(33554432, 1);
		}
	}
	else if (func_1704())
	{
		if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_14, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Local_87[0 /*4*/], Local_14.f_14, true, 0)) || (func_1705() && (!Local_121[9 /*4*/].f_3 && iLocal_424 < 4)))
		{
			func_1703(9, -2661.857f, -2385.321f, 67.96801f, 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_121[9 /*4*/], -2661.857f, -2385.321f, 67.96801f, 2f, 0, 0, 0);
			func_1217(&(Local_121[9 /*4*/]), joaat("BLIP_STYLE_ENEMY"), -1034486097);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_121[9 /*4*/], 35, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_121[9 /*4*/], 30, false);
			PED::SET_PED_ACCURACY(Local_121[9 /*4*/], 5);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_121[9 /*4*/], true);
			Local_121[9 /*4*/].f_3 = 1;
			__LIB_1__::func_148(&(vLocal_345[11 /*3*/]));
		}
		if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_14, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Local_87[0 /*4*/], Local_14.f_14, true, 0)) && !Local_121[10 /*4*/].f_3)
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(0, -2656.863f, -2423.32f, 74.7549f, Global_35, 2f, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_121[10 /*4*/], &iVar0, 0, 0, 1, 1);
			func_1217(&(Local_121[10 /*4*/]), joaat("BLIP_STYLE_ENEMY"), -1034486097);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_121[10 /*4*/], -2656.863f, -2423.32f, 74.7549f, 3f, 0, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_121[10 /*4*/], 35, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_121[10 /*4*/], 30, false);
			PED::SET_PED_ACCURACY(Local_121[10 /*4*/], 5);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_121[10 /*4*/], true);
			Local_121[10 /*4*/].f_3 = 1;
			__LIB_1__::func_148(&(vLocal_345[11 /*3*/]));
		}
		if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_14, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Local_87[0 /*4*/], Local_14.f_14, true, 0)) && !Local_121[11 /*4*/].f_3)
		{
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_121[11 /*4*/], -2667.005f, -2366.903f, 66.96308f, 4f, 0, 0, 0);
			func_1703(11, -2667.005f, -2366.903f, 66.96308f, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_121[11 /*4*/], 35, true);
			PED::SET_PED_ACCURACY(Local_121[11 /*4*/], 5);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_121[11 /*4*/], true);
			Local_121[11 /*4*/].f_3 = 1;
			func_1181(33554432, 1);
		}
	}
}

void func_1237()
{
	if (fLocal_509 < 0.5f)
	{
		fLocal_509 = (fLocal_509 + (__LIB_0__::func_265(&(vLocal_345[10 /*3*/])) / 10000f));
		MISC::_SET_WEATHER_TYPE_TRANSITION(joaat("HIGHPRESSURE"), joaat("MISTY"), fLocal_509, 1);
	}
}

void func_1238(int iParam0)
{
	if (__LIB_2__::func_1(iParam0, 0, 1))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iParam0, true);
		}
		else
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
		}
	}
}

void func_1239(var uParam0)
{
	switch (__LIB_4__::func_979(uParam0))
	{
		case 0:
			break;
		case 1:
			__LIB_5__::func_486(uParam0, "SAD5_OBJ3", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
		case 2:
			__LIB_5__::func_486(uParam0, "SAD5_OBJ10", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
		case 3:
			__LIB_5__::func_486(uParam0, "SAD5_OBJ11", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
		case 4:
			__LIB_5__::func_486(uParam0, "SAD5_OBJ8", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
		case 5:
			__LIB_5__::func_486(uParam0, "SAD5_OBJ7", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
		case 6:
			__LIB_5__::func_486(uParam0, "SAD5_OBJ1", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
		case 7:
			__LIB_5__::func_486(uParam0, "SAD5_OBJ13", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_5__::func_372(uParam0, 0);
			break;
		case 8:
			__LIB_5__::func_486(uParam0, "SAD5_OBJ14", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_5__::func_372(uParam0, 0);
			break;
	}
}

void func_1240()
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(-2719.5f, -2366.439f, 45.0118f, -3093.115f, -2453.512f, 23.2469f, true);
	fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, -3093.115f, -2453.512f, 23.2469f, true);
	fVar2 = __LIB_0__::func_251(((fVar0 - fVar1) / fVar0), 0f, 1f);
	__LIB_5__::func_375(19, 30, fVar2, &uLocal_450);
}

void func_1241(var uParam0)
{
	switch (iLocal_429)
	{
		case 0:
			if (iLocal_515 == 1 && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_463[3], false))
			{
				ANIMSCENE::START_ANIM_SCENE(uLocal_463[3]);
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_463[3], false))
			{
				iLocal_429 = 1;
				__LIB_5__::func_372(uParam0, 1);
			}
			break;
		case 1:
			if (ANIMSCENE::_0x1F0E401031E20146(uLocal_463[3], "PL_A_ENTER") && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_463[3], "S_B_LOOP", 1))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_463[3], "PL_B_LOOP");
				if ((ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_463[3], "PL_B_LOOP") && !__LIB_5__::func_463()) && __LIB_0__::func_665(Global_35, Local_87[0 /*4*/], 0, 0) < 4f)
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_463[3], "PL_B_LOOP", true);
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(uLocal_463[3], "PL_A_ENTER");
					iLocal_429 = 2;
				}
				else if (__LIB_0__::func_665(Global_35, Local_87[0 /*4*/], 0, 0) > 4f)
				{
					if (!__LIB_5__::func_463() && __LIB_0__::func_265(&(vLocal_345[2 /*3*/])) > 7f)
					{
						func_1170(uParam0, "SAD5_S4_DAWD", 0);
						__LIB_1__::func_148(&(vLocal_345[2 /*3*/]));
					}
				}
			}
			break;
		case 2:
			switch (iLocal_482)
			{
				case 0:
					if (ANIMSCENE::_0x1F0E401031E20146(uLocal_463[3], "PL_B_LOOP") && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_463[3], "S_B_LOOP", 1))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_463[3], "PL_C_INTRO");
						if (ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_463[3], "PL_C_INTRO"))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_463[3], "PL_C_INTRO", true);
							ANIMSCENE::_0xAE6ADA8FE7E84ACC(uLocal_463[3], "PL_B_LOOP");
							iLocal_482++;
						}
					}
					break;
				case 1:
					if (ANIMSCENE::_0x1F0E401031E20146(uLocal_463[3], "PL_C_INTRO") && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_463[3], "S_B_LOOP", 1))
					{
						if (__LIB_3__::func_547(Local_87[0 /*4*/], Global_35, 0.85f) == 3)
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_463[3], "PL_C_RESP_LT");
							if (ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_463[3], "PL_C_RESP_LT"))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_463[3], "PL_C_RESP_LT", true);
								ANIMSCENE::_0xAE6ADA8FE7E84ACC(uLocal_463[3], "PL_C_INTRO");
								iLocal_482++;
							}
						}
						else
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_463[3], "PL_C_RESP_RT");
							if (ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_463[3], "PL_C_RESP_RT"))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_463[3], "PL_C_RESP_RT", true);
								ANIMSCENE::_0xAE6ADA8FE7E84ACC(uLocal_463[3], "PL_C_INTRO");
								iLocal_482++;
							}
						}
					}
					break;
				case 2:
					if ((ANIMSCENE::_0x1F0E401031E20146(uLocal_463[3], "PL_C_RESP_LT") || ANIMSCENE::_0x1F0E401031E20146(uLocal_463[3], "PL_C_RESP_RT")) && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_463[3], "S_B_LOOP", 1))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_463[3], "PL_D_ASK1");
						if (ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_463[3], "PL_D_ASK1"))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_463[3], "PL_D_ASK1", true);
							ANIMSCENE::_0xAE6ADA8FE7E84ACC(uLocal_463[3], "PL_C_RESP_LT");
							ANIMSCENE::_0xAE6ADA8FE7E84ACC(uLocal_463[3], "PL_C_RESP_RT");
							iLocal_482++;
						}
					}
					break;
				case 3:
					if (ANIMSCENE::_0x1F0E401031E20146(uLocal_463[3], "PL_D_ASK1") && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_463[3], "S_B_LOOP", 1))
					{
						if (__LIB_3__::func_547(Local_87[0 /*4*/], Global_35, 0.85f) == 3)
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_463[3], "PL_D_ASK2_LT");
							if (ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_463[3], "PL_D_ASK2_LT"))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_463[3], "PL_D_ASK2_LT", true);
								ANIMSCENE::_0xAE6ADA8FE7E84ACC(uLocal_463[3], "PL_D_ASK1");
								iLocal_482++;
							}
						}
						else
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_463[3], "PL_D_ASK2_RT");
							if (ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_463[3], "PL_D_ASK2_RT"))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_463[3], "PL_D_ASK2_RT", true);
								ANIMSCENE::_0xAE6ADA8FE7E84ACC(uLocal_463[3], "PL_D_ASK1");
								iLocal_482++;
							}
						}
					}
					break;
				case 4:
					iLocal_429 = 4;
					__LIB_5__::func_372(uParam0, 5);
					__LIB_10__::func_935(uParam0, Local_87[0 /*4*/], 1);
					func_1204(Global_35);
					__LIB_1__::func_148(&(vLocal_345[8 /*3*/]));
					break;
			}
			break;
		case 4:
			if (!func_1160(8388608) && __LIB_0__::func_265(&(vLocal_345[8 /*3*/])) > 2f)
			{
				__LIB_5__::func_590(uParam0, "SAD5_OBJ7", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				func_1181(8388608, 1);
			}
			if (__LIB_0__::func_265(&(vLocal_345[8 /*3*/])) > 10f && iLocal_483 > 2)
			{
				__LIB_1__::func_683(&iLocal_462, 128);
			}
			if (func_1160(8388608))
			{
				func_1706(uParam0);
			}
			if (__LIB_0__::func_665(Global_35, Local_87[0 /*4*/], 0, 0) > 5f)
			{
				if ((!__LIB_5__::func_463() && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_463[3], "S_B_LOOP", 1)) && __LIB_0__::func_265(&(vLocal_345[2 /*3*/])) > 9f)
				{
					func_1170(uParam0, "SAD5_S4_DECGO", 0);
					__LIB_1__::func_148(&(vLocal_345[2 /*3*/]));
				}
			}
			switch (iLocal_483)
			{
				case 0:
					if (__LIB_0__::func_265(&(vLocal_345[8 /*3*/])) > 10f)
					{
						if ((ANIMSCENE::_0x1F0E401031E20146(uLocal_463[3], "PL_D_ASK2_LT") || ANIMSCENE::_0x1F0E401031E20146(uLocal_463[3], "PL_D_ASK2_RT")) && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_463[3], "S_B_LOOP", 1))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_463[3], "PL_D_UNDECIDED1");
							if (ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_463[3], "PL_D_UNDECIDED1"))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_463[3], "PL_D_UNDECIDED1", true);
								iLocal_483++;
								__LIB_1__::func_148(&(vLocal_345[8 /*3*/]));
							}
						}
					}
					break;
				case 1:
					if (__LIB_0__::func_265(&(vLocal_345[8 /*3*/])) > 15f)
					{
						if (ANIMSCENE::_0x1F0E401031E20146(uLocal_463[3], "PL_D_UNDECIDED1") && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_463[3], "S_B_LOOP", 1))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_463[3], "PL_D_UNDECIDED2");
							if (ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_463[3], "PL_D_UNDECIDED2") && !__LIB_5__::func_463())
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_463[3], "PL_D_UNDECIDED2", true);
								iLocal_483++;
								__LIB_1__::func_148(&(vLocal_345[8 /*3*/]));
							}
						}
					}
					break;
				case 2:
					if (__LIB_0__::func_265(&(vLocal_345[8 /*3*/])) > 15f)
					{
						if (ANIMSCENE::_0x1F0E401031E20146(uLocal_463[3], "PL_D_UNDECIDED2") && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_463[3], "S_B_LOOP", 1))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_463[3], "PL_D_UNDECIDED3");
							if (ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_463[3], "PL_D_UNDECIDED3") && !__LIB_5__::func_463())
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_463[3], "PL_D_UNDECIDED3", true);
								iLocal_483++;
								__LIB_1__::func_148(&(vLocal_345[8 /*3*/]));
							}
						}
					}
					break;
				case 3:
					break;
			}
			break;
		case 3:
			switch (iLocal_488)
			{
				case 0:
					func_1204(Global_35);
					iLocal_488++;
					break;
				case 1:
					func_1706(uParam0);
					break;
			}
			break;
		case 5:
			if ((((((ANIMSCENE::_0x1F0E401031E20146(uLocal_463[3], "PL_D_UNDECIDED1") || ANIMSCENE::_0x1F0E401031E20146(uLocal_463[3], "PL_D_UNDECIDED2")) || ANIMSCENE::_0x1F0E401031E20146(uLocal_463[3], "PL_D_UNDECIDED3")) || ANIMSCENE::_0x1F0E401031E20146(uLocal_463[3], "PL_D_ASK2_LT")) || ANIMSCENE::_0x1F0E401031E20146(uLocal_463[3], "PL_D_ASK2_RT")) && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_463[3], "S_B_LOOP", 1)) && !__LIB_5__::func_463())
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_463[3], "PL_E_RESP_SHOOT");
				if (ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_463[3], "PL_E_RESP_SHOOT"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_463[3], "PL_E_RESP_SHOOT", true);
					iLocal_429 = 11;
				}
			}
			break;
		case 6:
			if ((((((ANIMSCENE::_0x1F0E401031E20146(uLocal_463[3], "PL_D_UNDECIDED1") || ANIMSCENE::_0x1F0E401031E20146(uLocal_463[3], "PL_D_UNDECIDED2")) || ANIMSCENE::_0x1F0E401031E20146(uLocal_463[3], "PL_D_UNDECIDED3")) || ANIMSCENE::_0x1F0E401031E20146(uLocal_463[3], "PL_D_ASK2_LT")) || ANIMSCENE::_0x1F0E401031E20146(uLocal_463[3], "PL_D_ASK2_RT")) && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_463[3], "S_B_LOOP", 1)) && !__LIB_5__::func_463())
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_463[3], "PL_E_RESP_SNEAK");
				if (ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_463[3], "PL_E_RESP_SNEAK"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_463[3], "PL_E_RESP_SNEAK", true);
					iLocal_429 = 11;
					AUDIO::_0x2B9C37C01BF25EDB("stealth");
				}
			}
			break;
		case 7:
			switch (iLocal_481)
			{
				case 0:
					if ((((((ANIMSCENE::_0x1F0E401031E20146(uLocal_463[3], "PL_D_UNDECIDED1") || ANIMSCENE::_0x1F0E401031E20146(uLocal_463[3], "PL_D_UNDECIDED2")) || ANIMSCENE::_0x1F0E401031E20146(uLocal_463[3], "PL_D_UNDECIDED3")) || ANIMSCENE::_0x1F0E401031E20146(uLocal_463[3], "PL_D_ASK2_LT")) || ANIMSCENE::_0x1F0E401031E20146(uLocal_463[3], "PL_D_ASK2_RT")) && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_463[3], "S_B_LOOP", 1)) && !__LIB_5__::func_463())
					{
						if (__LIB_3__::func_547(Local_87[0 /*4*/], Global_35, 0.85f) == 3)
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_463[3], "PL_E_RESP_THREAT_L");
							if (ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_463[3], "PL_E_RESP_THREAT_L"))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_463[3], "PL_E_RESP_THREAT_L", true);
								__LIB_1__::func_148(&(vLocal_345[13 /*3*/]));
								iLocal_481++;
							}
						}
						else
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_463[3], "PL_E_RESP_THREAT_R");
							if (ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_463[3], "PL_E_RESP_THREAT_R"))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_463[3], "PL_E_RESP_THREAT_R", true);
								__LIB_1__::func_148(&(vLocal_345[13 /*3*/]));
								iLocal_481++;
							}
						}
					}
					break;
				case 1:
					if ((ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_463[3], "PL_E_RESP_THREAT_R") || ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_463[3], "PL_E_RESP_THREAT_L")) && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_463[3], "S_F_THREAT2", 1))
					{
						iLocal_429 = 11;
						AUDIO::_0x2B9C37C01BF25EDB("threaten");
					}
					break;
				case 2:
					break;
			}
			break;
		case 10:
			ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_463[3], "PL_D_ASK2_RT");
			if (ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_463[3], "PL_D_ASK2_RT"))
			{
				ANIMSCENE::START_ANIM_SCENE(uLocal_463[3]);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_463[3], "PL_D_ASK2_RT", true);
				iLocal_429 = 4;
				__LIB_10__::func_935(uParam0, Local_87[0 /*4*/], 1);
				__LIB_1__::func_148(&(vLocal_345[8 /*3*/]));
			}
			break;
		case 11:
			if (func_1160(16))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_463[3], false))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uLocal_463[3]) > 0.51f)
					{
						if (!__LIB_0__::func_27(iLocal_462, 128))
						{
							func_1170(uParam0, "SAD5_S5_REACTSN", 0);
						}
					}
				}
			}
			else if (func_1160(64))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_463[3], false))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uLocal_463[3]) > 0.71f)
					{
						func_1170(uParam0, "SAD5_S5_REACTSH", 0);
					}
				}
			}
			break;
	}
}

void func_1242(var uParam0)
{
	switch (iLocal_503)
	{
		case 0:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_463[3], false))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(uLocal_463[3], "S_F_THREAT1_LT", 1))
				{
					if (__LIB_1__::func_871(&(vLocal_345[13 /*3*/])) > 6000)
					{
						if (!MAP::DOES_BLIP_EXIST(iLocal_309[8]))
						{
							iLocal_309[8] = MAP::_0xA6EF0C54A3443E70(1247852480, Local_14.f_52);
							__LIB_5__::func_372(uParam0, 8);
							__LIB_5__::func_590(uParam0, "SAD5_OBJ14", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							iLocal_503 = 1;
						}
					}
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(uLocal_463[3], "S_F_THREAT1_RT", 1))
				{
					if (__LIB_1__::func_871(&(vLocal_345[13 /*3*/])) > 6000)
					{
						if (!MAP::DOES_BLIP_EXIST(iLocal_309[8]))
						{
							iLocal_309[8] = MAP::_0xA6EF0C54A3443E70(1247852480, Local_14.f_53);
							__LIB_5__::func_372(uParam0, 8);
							__LIB_5__::func_590(uParam0, "SAD5_OBJ14", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							iLocal_503 = 2;
						}
					}
				}
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_52, true, 0))
			{
				__LIB_0__::func_325(&(iLocal_309[8]));
				iLocal_503 = 3;
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_53, true, 0))
			{
				__LIB_0__::func_325(&(iLocal_309[8]));
				iLocal_503 = 3;
			}
			break;
		case 3:
			break;
	}
}

void func_1243(var uParam0)
{
	switch (iLocal_485)
	{
		case 0:
			iLocal_485++;
			break;
		case 1:
			__LIB_14__::func_476(Global_35, -2734.526f, -2422.661f, 71.9038f, &(vLocal_345[3 /*3*/]), 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 9f, 8f, 0.5f, 0, 1, 1, 1, 1);
			if (func_1160(8))
			{
				if (ANIMSCENE::_0x005E6F28DD7ED58D(uLocal_463[3], "Sadie"))
				{
					if (func_1160(16))
					{
						UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
						__LIB_5__::func_372(uParam0, 1);
						__LIB_5__::func_590(uParam0, "SAD5_OBJ3", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						__LIB_4__::func_952(uParam0, 1);
						iLocal_425 = 0;
						iLocal_489 = 3;
						__LIB_10__::func_930(uParam0, Local_87[0 /*4*/], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
					}
					else if (func_1160(32))
					{
						UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
						__LIB_4__::func_952(uParam0, 3);
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, __LIB_0__::func_664(), false, 0, false, false);
						TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
					}
					else if (func_1160(64))
					{
						UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
						__LIB_4__::func_952(uParam0, 4);
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, __LIB_0__::func_664(), false, 0, false, false);
						TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
						WEAPON::SET_CURRENT_PED_WEAPON(Local_87[0 /*4*/], joaat("WEAPON_REPEATER_CARBINE_SADIE"), false, 0, false, false);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_87[0 /*4*/], -2734.828f, -2419.007f, 71.0783f, 1f, 20000, 0.25f, 0, 40000f);
						TASK::TASK_SWAP_WEAPON(Local_87[0 /*4*/], 1, 1, 0, 0);
					}
				}
				SCRIPTS::_0x7D654266025E921B(joaat("CHAL_CTX_SHOOTOUT"));
				PED::SET_PED_CONFIG_FLAG(Local_87[0 /*4*/], 301, true);
				MISC::_0xE98D55C5983F2509(Global_35);
				MISC::_0xE98D55C5983F2509(Local_87[0 /*4*/]);
				if (ENTITY::IS_ENTITY_DEAD(Local_100[4 /*4*/]))
				{
					MAP::_0xBD62D98799A3DAF0(MAP::GET_BLIP_FROM_ENTITY(Local_100[4 /*4*/]), 455691738);
				}
				else if (!MAP::DOES_BLIP_EXIST(iLocal_309[4]))
				{
					iLocal_309[4] = MAP::_BLIP_ADD_FOR_ENTITY(455691738, Local_100[4 /*4*/]);
				}
			}
			break;
	}
}

void func_1244(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	int iVar19;
	struct<14> Var20;
	int iVar37;
	int iVar38;
	struct<12> Var39;
	int iVar56;
	if (iLocal_425 < 4)
	{
		if (__LIB_0__::func_665(Global_35, Local_87[0 /*4*/], 0, 0) > 17f)
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_87[0 /*4*/], 0) && !TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_87[0 /*4*/]))
			{
				TASK::WAYPOINT_PLAYBACK_PAUSE(Local_87[0 /*4*/], 1, 0, 0);
				if (!__LIB_5__::func_463())
				{
					func_1170(uParam0, "SAD5_S5_SNK_WLK", 0);
				}
			}
		}
		else if (__LIB_0__::func_665(Global_35, Local_87[0 /*4*/], 0, 0) < 11f)
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_87[0 /*4*/], 0))
			{
				if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_87[0 /*4*/]))
				{
					TASK::WAYPOINT_PLAYBACK_RESUME(Local_87[0 /*4*/], false, -1, 0);
					if (!__LIB_5__::func_463())
					{
						func_1170(uParam0, "SAD5_S5_SNK_FOL", 0);
					}
				}
				if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_87[0 /*4*/]) >= 33)
				{
					if (!__LIB_0__::func_27(iLocal_462, 256))
					{
						func_1170(uParam0, "SAD5_S5_DWNHERE", 0);
						__LIB_1__::func_683(&iLocal_462, 256);
					}
				}
				if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_87[0 /*4*/]) >= 58)
				{
					if (!__LIB_0__::func_27(iLocal_462, 512))
					{
						func_1170(uParam0, "SAD5_S5_SNK_2GR", 0);
						__LIB_1__::func_683(&iLocal_462, 512);
					}
				}
			}
		}
	}
	switch (iLocal_425)
	{
		case 0:
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 2f);
			__LIB_10__::func_930(uParam0, Local_87[0 /*4*/], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
			PED::FORCE_PED_MOTION_STATE(Local_87[0 /*4*/], joaat("MOTIONSTATE_RUN"), true, 0, false);
			PED::_SET_PED_BLACKBOARD_FLOAT(Local_87[0 /*4*/], "Stealth", 1f, -1);
			PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Stealth", 1f, -1);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_87[0 /*4*/], "sad5_sadie_sneak_1", 0, 64, -1, 0, 0, -1);
			WEAPON::_ADD_AMMO_TO_PED(Global_35, joaat("WEAPON_THROWN_THROWING_KNIVES"), 10, 752097756);
			WEAPON::_GIVE_WEAPON_TO_PED_2(Local_87[0 /*4*/], joaat("WEAPON_THROWN_THROWING_KNIVES"), 10, true, false, 0, true, 0.5f, 1f, 752097756, false, 0f, false);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_87[0 /*4*/], joaat("WEAPON_THROWN_THROWING_KNIVES"), false, 0, false, false);
			TASK::TASK_SWAP_WEAPON(Local_87[0 /*4*/], 1, 1, 0, 0);
			PED::SET_PED_CONFIG_FLAG(Local_87[0 /*4*/], 249, true);
			func_1707();
			func_1708(&(Local_100[0 /*4*/]));
			func_1708(&(Local_100[1 /*4*/]));
			func_1708(&(Local_100[2 /*4*/]));
			func_1708(&(Local_100[3 /*4*/]));
			iLocal_425 = 1;
			break;
		case 1:
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 2f);
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_1, true, 0) && ENTITY::IS_ENTITY_IN_VOLUME(Local_87[0 /*4*/], Local_14.f_1, true, 0))
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					func_1217(&(Local_121[iVar0 /*4*/]), joaat("BLIP_STYLE_ENEMY"), -662251075);
					iVar0++;
				}
				if (func_1709(uParam0))
				{
					iLocal_425 = 2;
				}
			}
			break;
		case 2:
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 2f);
			if (!func_1160(262144))
			{
				if ((__LIB_0__::func_266(Global_35, -2804.281f, -2446.335f, 51.8601f, 24f, 1, 1) || __LIB_0__::func_266(Local_87[0 /*4*/], -2804.281f, -2446.335f, 51.8601f, 24f, 1, 1)) && (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_1, true, 0) && ENTITY::IS_ENTITY_IN_VOLUME(Local_87[0 /*4*/], Local_14.f_1, true, 0)))
				{
					PED::SET_PED_HEARING_RANGE(Local_121[0 /*4*/], 2f);
					PED::SET_PED_SEEING_RANGE(Local_121[0 /*4*/], 2f);
					PED::SET_PED_SEEING_RANGE(Local_121[2 /*4*/], 40f);
					PED::SET_PED_HEARING_RANGE(Local_121[2 /*4*/], 30f);
					PED::SET_PED_SEEING_RANGE(Local_121[1 /*4*/], 40f);
					PED::SET_PED_HEARING_RANGE(Local_121[1 /*4*/], 20f);
					PED::SET_PED_SEEING_RANGE(Local_121[5 /*4*/], 30f);
					PED::SET_PED_HEARING_RANGE(Local_121[5 /*4*/], 20f);
					TASK::OPEN_SEQUENCE_TASK(&iVar1);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2788.151f, -2410.912f, 53.504f, 1f, -1, 0.25f, 0, 343.8961f);
					TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("WORLD_HUMAN_LEAN_POST_LEFT_HAND_PLANTED"), 0, true, 0, -1f, false);
					__LIB_1__::func_474(Local_121[0 /*4*/], &iVar1, 0, 0, 1, 1);
					func_1181(262144, 1);
					iLocal_425 = 3;
				}
			}
			break;
		case 3:
			if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_1, true, 0) && ENTITY::IS_ENTITY_IN_VOLUME(Local_87[0 /*4*/], Local_14.f_1, true, 0)) && (__LIB_0__::func_266(Global_35, -2804.281f, -2446.335f, 51.8601f, 15f, 1, 1) && __LIB_0__::func_266(Local_87[0 /*4*/], -2804.281f, -2446.335f, 51.8601f, 15f, 1, 1)))
			{
				func_1170(uParam0, "SAD5_S5_SNK_C2", 0);
				__LIB_5__::func_372(uParam0, 7);
				__LIB_4__::func_952(uParam0, 2);
				__LIB_10__::func_935(uParam0, Local_87[0 /*4*/], 1);
				__LIB_1__::func_148(&(vLocal_345[2 /*3*/]));
				iLocal_425 = 4;
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_121[3 /*4*/], Global_35, 1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_121[4 /*4*/], Global_35, 1, 1))
			{
				iLocal_425 = 4;
				__LIB_1__::func_148(&(vLocal_345[2 /*3*/]));
			}
			break;
		case 4:
			if ((!__LIB_0__::func_27(iLocal_462, 1024) && !__LIB_5__::func_463()) && __LIB_0__::func_265(&(vLocal_345[2 /*3*/])) > 8f)
			{
				func_1170(uParam0, "SAD5_S5_SNK_PMT", 0);
				__LIB_1__::func_683(&iLocal_462, 1024);
				__LIB_1__::func_148(&(vLocal_345[2 /*3*/]));
			}
			if (!__LIB_5__::func_463() && __LIB_0__::func_265(&(vLocal_345[2 /*3*/])) > 10f)
			{
				func_1170(uParam0, "SAD5_S5_SNK_JGT", 0);
				__LIB_1__::func_148(&(vLocal_345[2 /*3*/]));
			}
			if (!func_1160(128))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_121[3 /*4*/], Global_35, 1, 1))
				{
					Var2.f_4 = 4000;
					Var2.f_8 = 1;
					Var2.f_13 = 1;
					Var2 = Local_121[4 /*4*/];
					Var2.f_11 = 1f;
					Var2.f_10 = 1;
					TASK::OPEN_SEQUENCE_TASK(&iVar19);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(0, false, true);
					TASK::TASK_SHOOT_WITH_WEAPON(0, &Var2);
					__LIB_1__::func_474(Local_87[0 /*4*/], &iVar19, 0, 0, 1, 1);
					if (__LIB_2__::func_1(Local_121[4 /*4*/], 0, 1))
					{
						TASK::TASK_REACT(Local_121[4 /*4*/], Global_35, Global_36, "Default_Shocked", 1.2f, 0, 4);
					}
					func_1181(128, 1);
				}
			}
			if (!func_1160(256))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_121[4 /*4*/], Global_35, 1, 1))
				{
					Var20.f_4 = 4000;
					Var20.f_8 = 1;
					Var20.f_13 = 1;
					Var20 = Local_121[3 /*4*/];
					Var20.f_11 = 1f;
					Var20.f_10 = 1;
					TASK::OPEN_SEQUENCE_TASK(&iVar37);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(0, false, true);
					TASK::TASK_SHOOT_WITH_WEAPON(0, &Var20);
					__LIB_1__::func_474(Local_87[0 /*4*/], &iVar37, 0, 0, 1, 1);
					if (__LIB_2__::func_1(Local_121[3 /*4*/], 0, 1))
					{
						TASK::TASK_REACT(Local_121[3 /*4*/], Global_35, Global_36, "Default_Shocked", 1.2f, 0, 4);
					}
					func_1181(256, 1);
				}
			}
			if (!func_1160(524288))
			{
				if (!__LIB_2__::func_1(Local_121[3 /*4*/], 0, 1) && !__LIB_2__::func_1(Local_121[4 /*4*/], 0, 1))
				{
					if (__LIB_5__::func_463())
					{
						__LIB_5__::func_20(0, 0);
					}
					func_1170(uParam0, "SAD5_S5_SNK_JK", 0);
					func_1181(524288, 1);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_87[0 /*4*/], joaat("WEAPON_THROWN_THROWING_KNIVES"), false, 0, false, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar38);
					TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2787.032f, -2416.737f, 53.1438f, 2f, -1, 0.25f, 0, 40000f);
					__LIB_1__::func_474(Local_87[0 /*4*/], &iVar38, 0, 0, 1, 1);
					__LIB_1__::func_148(&(vLocal_345[2 /*3*/]));
					iLocal_425 = 5;
				}
			}
			break;
		case 5:
			if (!__LIB_5__::func_463())
			{
				if (!__LIB_0__::func_27(iLocal_462, 2048))
				{
					func_1170(uParam0, "SAD5_S5_SNK_C1", 0);
					__LIB_1__::func_683(&iLocal_462, 2048);
					__LIB_1__::func_148(&(vLocal_345[2 /*3*/]));
				}
			}
			if (!__LIB_5__::func_463() && __LIB_0__::func_265(&(vLocal_345[2 /*3*/])) > 2f)
			{
				if (!__LIB_0__::func_27(iLocal_462, 4096))
				{
					func_1170(uParam0, "SAD5_S5_SNK_SGT", 0);
					__LIB_1__::func_683(&iLocal_462, 4096);
					__LIB_1__::func_148(&(vLocal_345[2 /*3*/]));
				}
			}
			if ((__LIB_0__::func_266(Local_87[0 /*4*/], -2787.032f, -2416.737f, 53.1438f, 4f, 0, 0) || __LIB_0__::func_665(Local_87[0 /*4*/], Local_121[0 /*4*/], 0, 0) < 8f) && __LIB_2__::func_1(Local_121[0 /*4*/], 0, 1))
			{
				Var39.f_4 = 3000;
				Var39.f_8 = 1;
				Var39 = Local_121[0 /*4*/];
				Var39.f_11 = 1f;
				Var39.f_10 = 1;
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_87[0 /*4*/], 27, true);
				PED::SET_PED_ACCURACY(Local_87[0 /*4*/], 100);
				TASK::OPEN_SEQUENCE_TASK(&iVar56);
				TASK::TASK_SHOOT_WITH_WEAPON(0, &Var39);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2810.604f, -2398.792f, 54.4282f, 1.5f, -1, 0.25f, 0, 40000f);
				__LIB_1__::func_474(Local_87[0 /*4*/], &iVar56, 0, 0, 1, 1);
				__LIB_1__::func_683(&iLocal_462, 8192);
				iLocal_425 = 6;
			}
			else if (!__LIB_2__::func_1(Local_121[0 /*4*/], 0, 1))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_87[0 /*4*/], -2810.604f, -2398.792f, 54.4282f, 2f, 20000, 0.25f, 0, 40000f);
				iLocal_425 = 6;
			}
			break;
		case 6:
			if (!__LIB_2__::func_1(Local_121[0 /*4*/], 0, 1))
			{
				if (!__LIB_5__::func_463())
				{
					if (__LIB_0__::func_27(iLocal_462, 8192))
					{
						func_1170(uParam0, "SAD5_S5_SNK_SK", 0);
					}
					else
					{
						func_1170(uParam0, "SAD5_S5_SNK_JK", 0);
					}
					iLocal_425 = 7;
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_87[0 /*4*/], 27, false);
					PED::SET_PED_ACCURACY(Local_87[0 /*4*/], 25);
					__LIB_1__::func_148(&(vLocal_345[2 /*3*/]));
				}
			}
			break;
		case 7:
			if (!__LIB_5__::func_463() && __LIB_0__::func_265(&(vLocal_345[2 /*3*/])) > 4f)
			{
				func_1170(uParam0, "SAD5_S5_SNK_BRG", 0);
				iLocal_425 = 8;
			}
			break;
		case 8:
			if (__LIB_0__::func_266(Local_87[0 /*4*/], -2810.604f, -2398.792f, 54.4282f, 3f, 1, 1) && __LIB_0__::func_266(Global_35, -2810.604f, -2398.792f, 54.4282f, 3f, 1, 1))
			{
				iLocal_425 = 11;
			}
			break;
		case 11:
			break;
	}
}

void func_1245(var uParam0)
{
	if (!func_1160(16))
	{
		if (iLocal_489 > 0)
		{
			func_1710(uParam0);
		}
	}
	else
	{
		func_1711(uParam0);
	}
	func_1712(uParam0);
}

void func_1246(var uParam0)
{
	int iVar0;
	int iVar1;
	func_1713(uParam0);
	func_1714(uParam0);
	func_1715(uParam0);
	func_1259(uParam0);
	switch (iLocal_489)
	{
		case 0:
			if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_8, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Local_87[0 /*4*/], Local_14.f_8, true, 0)) || ((!__LIB_2__::func_1(Local_121[9 /*4*/], 0, 1) && !__LIB_2__::func_1(Local_121[10 /*4*/], 0, 1)) && !__LIB_2__::func_1(Local_121[11 /*4*/], 0, 1)))
			{
				if (func_1716(uParam0))
				{
					iLocal_489++;
				}
			}
			break;
		case 1:
			iLocal_489++;
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_1717(iVar0, 0))
				{
					func_1217(&(Local_231[iVar0 /*4*/]), joaat("BLIP_STYLE_ENEMY"), -1034486097);
				}
				iVar0++;
			}
			if (__LIB_2__::func_1(Local_121[3 /*4*/], 0, 1))
			{
				PED::_0x8ACC0506743A8A5C(Local_121[3 /*4*/], joaat("SCRIPT_STARTOFCOMBAT_COVERINGFIRE"), 1, -1082130432 /* Float: -1f */);
				PED::_0xFC3DB99C8144CD81(Local_121[3 /*4*/], Local_14.f_21, 1, 0, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_121[3 /*4*/], 30, true);
				TASK::TASK_COMBAT_PED(Local_121[3 /*4*/], Global_35, 0, 0);
			}
			if (__LIB_2__::func_1(Local_121[4 /*4*/], 0, 1))
			{
				PED::_0x8ACC0506743A8A5C(Local_121[4 /*4*/], joaat("SCRIPT_STARTOFCOMBAT_COVERINGFIRE"), 1, -1082130432 /* Float: -1f */);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_121[4 /*4*/], -2708.555f, -2330.262f, 57.87279f, 2.5f, 0, 0, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_121[4 /*4*/], 30, true);
				TASK::TASK_COMBAT_PED(Local_121[4 /*4*/], Global_35, 0, 0);
			}
			if (__LIB_2__::func_1(Local_121[5 /*4*/], 0, 1))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_121[5 /*4*/], -2731.214f, -2332.405f, 57.51025f, 3f, 1, 0, 0);
			}
			iLocal_489++;
			break;
		case 3:
			if ((func_1718() || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14, true, 0)) || ENTITY::IS_ENTITY_IN_VOLUME(Local_87[0 /*4*/], Local_14, true, 0))
			{
				func_1248();
				if (func_1718())
				{
					__LIB_5__::func_20(1, 0);
					func_1170(uParam0, "SAD5_S6_DOWN", 0);
				}
				else if (!__LIB_5__::func_463())
				{
					func_1170(uParam0, "SAD5_S6_OBJ8_B", 0);
				}
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "sad5_to_bounty", 0, 9224, -1, 0, 1, -1);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0, 64);
				__LIB_1__::func_474(Local_87[0 /*4*/], &iVar1, 0, 0, 1, 1);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_87[0 /*4*/], -2722.627f, -2365.342f, 44.6814f, 10f, 0, 0, 0);
				iLocal_424 = 30;
				iLocal_489++;
			}
			break;
		case 4:
			if (func_1719(uParam0))
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (func_1720(iVar0, 0))
					{
						func_1217(&(Local_256[iVar0 /*4*/]), joaat("BLIP_STYLE_ENEMY"), -1034486097);
					}
					iVar0++;
				}
				func_1181(1, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_87[0 /*4*/], 30, false);
				iLocal_489++;
			}
			break;
		case 5:
			if (!__LIB_0__::func_27(iLocal_462, 1048576))
			{
				if (!__LIB_5__::func_463())
				{
					if (__LIB_0__::func_265(&(vLocal_345[0 /*3*/])) > 3f)
					{
						func_1170(uParam0, "SAD5_S7_MORE", 0);
						__LIB_1__::func_683(&iLocal_462, 1048576);
					}
				}
				else
				{
					__LIB_1__::func_148(&(vLocal_345[0 /*3*/]));
				}
			}
			if (func_1718())
			{
				func_1248();
				__LIB_5__::func_372(uParam0, 3);
				__LIB_4__::func_952(uParam0, 6);
				AUDIO::_0x2B9C37C01BF25EDB("catch_bounty");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				__LIB_5__::func_20(0, 0);
				func_1170(uParam0, "SAD5_S7_OBJ10", 0);
				__LIB_1__::func_148(&(vLocal_345[10 /*3*/]));
				__LIB_1__::func_148(&(vLocal_345[12 /*3*/]));
			}
			break;
	}
}

void func_1247(var uParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_4__::func_377(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_WHISTLE")) || PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_WHISTLE")))
		{
			__LIB_1__::func_326(Global_35, 869278708, joaat("UNSPECIFIED"));
		}
	}
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_87[2 /*4*/], "sad5_john_horse_whistle"))
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_87[2 /*4*/], 2.001f, 0, -1082130432 /* Float: -1f */, 0);
	}
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_87[1 /*4*/], "sad5_john_horse_whistle"))
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_87[1 /*4*/], 2.001f, 0, -1082130432 /* Float: -1f */, 0);
	}
	if (ENTITY::_0x61914209C36EFDDB(Local_100[4 /*4*/]) == 5)
	{
		__LIB_5__::func_372(uParam0, 4);
	}
	if (!__LIB_5__::func_463())
	{
		func_1259(uParam0);
	}
	switch (iLocal_494)
	{
		case 0:
			iLocal_494++;
			break;
		case 1:
			if (!func_1160(32768) && !__LIB_5__::func_463())
			{
				func_1170(uParam0, "SAD5_S6_OBJ8", 0);
				TASK::TASK_GOTO_ENTITY_OFFSET(Local_87[0 /*4*/], Local_100[4 /*4*/], 20000, 2f, 0f, 2f, 0);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "sad5_john_horse_whistle", 0, 4198402, -1, 0, 0, -1);
				TASK::TASK_STAND_STILL(0, -1);
				__LIB_1__::func_474(Local_87[2 /*4*/], &iVar0, 0, 0, 1, 1);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "sad5_john_horse_whistle", 0, 5122, 86, 0, 0, -1);
				TASK::TASK_STAND_STILL(0, -1);
				__LIB_1__::func_474(Local_87[1 /*4*/], &iVar0, 0, 0, 1, 1);
				func_1181(32768, 1);
				__LIB_1__::func_148(&(vLocal_345[2 /*3*/]));
				iLocal_494++;
			}
			break;
		case 2:
			if (!__LIB_5__::func_463())
			{
				func_1170(uParam0, "SAD5_S7_CALLH", 0);
				iLocal_494++;
			}
			break;
		case 3:
			if (__LIB_0__::func_265(&(vLocal_345[2 /*3*/])) > 20f || (__LIB_0__::func_265(&(vLocal_345[2 /*3*/])) > 4f && __LIB_0__::func_665(Local_87[0 /*4*/], Local_100[4 /*4*/], 0, 0) < 4f))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::CLEAR_PED_TASKS(0, true, false);
				TASK::TASK_AIM_GUN_AT_COORD(0, -2773.457f, -2370.379f, 43.1723f, -1, true, false);
				__LIB_1__::func_474(Local_87[0 /*4*/], &iVar1, 0, 0, 1, 1);
				PED::_SET_PED_BLACKBOARD_FLOAT(Local_87[0 /*4*/], "Cautious", 1f, -1);
				if (!__LIB_5__::func_463())
				{
					if (func_1160(16))
					{
						func_1170(uParam0, "SAD5_S7_LDEAD", 0);
					}
					else
					{
						func_1170(uParam0, "SAD5_S6_LINE_T", 0);
					}
					iLocal_494++;
				}
			}
			break;
		case 4:
			if ((ENTITY::IS_ENTITY_IN_VOLUME(Local_87[1 /*4*/], Local_14, true, 0) && !TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_87[1 /*4*/], 0)) || (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_87[1 /*4*/], 0) && TASK::GET_PED_WAYPOINT_PROGRESS(Local_87[1 /*4*/]) >= 80))
			{
				if (__LIB_0__::func_866(11, 0))
				{
					__LIB_1__::func_640(11);
				}
				if (!__LIB_5__::func_463())
				{
					func_1170(uParam0, "SAD5_S7_BOUNTY", 0);
					PED::_0x411189E51B8020BA(Local_87[0 /*4*/], "Cautious");
					func_1169(uParam0, -1, 1073741824 /* Float: 2f */);
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					iLocal_494++;
				}
			}
			break;
		case 5:
			if (!__LIB_5__::func_463())
			{
				func_1170(uParam0, "SAD5_S6_OBJ8_A", 0);
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_4__::func_952(uParam0, 7);
				__LIB_5__::func_372(uParam0, 4);
				__LIB_5__::func_590(uParam0, "SAD5_OBJ8", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_1__::func_148(&(vLocal_345[2 /*3*/]));
				__LIB_1__::func_148(&(vLocal_345[12 /*3*/]));
			}
			break;
	}
}

void func_1248()
{
	if (ENTITY::IS_ENTITY_DEAD(Local_100[4 /*4*/]) && ENTITY::_0x61914209C36EFDDB(Local_100[4 /*4*/]) != 7)
	{
		if (!MAP::DOES_BLIP_EXIST(iLocal_309[4]))
		{
			iLocal_309[4] = MAP::_BLIP_ADD_FOR_ENTITY(455691738, Local_100[4 /*4*/]);
		}
	}
	else if (!MAP::DOES_BLIP_EXIST(iLocal_309[4]))
	{
		iLocal_309[4] = MAP::_BLIP_ADD_FOR_ENTITY(455691738, Local_100[4 /*4*/]);
	}
}

void func_1249(var uParam0)
{
	if (!__LIB_5__::func_463())
	{
		func_1259(uParam0);
	}
	switch (iLocal_484)
	{
		case 0:
			if (ENTITY::_0x61914209C36EFDDB(Local_100[4 /*4*/]) == 7)
			{
				__LIB_1__::func_718(7);
				__LIB_5__::func_372(uParam0, 6);
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_5__::func_590(uParam0, "SAD5_OBJ1", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iLocal_484++;
				if (!PED::IS_PED_ON_MOUNT(Local_87[0 /*4*/]))
				{
					TASK::CLEAR_PED_TASKS(Local_87[0 /*4*/], true, false);
					func_1169(uParam0, -1, 1073741824 /* Float: 2f */);
				}
				if (MAP::DOES_BLIP_EXIST(iLocal_309[7]))
				{
					MAP::REMOVE_BLIP(&(iLocal_309[7]));
				}
			}
			else if (!__LIB_5__::func_463() && __LIB_0__::func_265(&(vLocal_345[2 /*3*/])) > 10f)
			{
				if (!__LIB_0__::func_27(iLocal_462, 33554432))
				{
					func_1170(uParam0, "SAD5_S6_OBJ9", 0);
					__LIB_1__::func_683(&iLocal_462, 33554432);
				}
			}
			break;
		case 1:
			if ((__LIB_0__::func_394(Global_35, Local_87[2 /*4*/], 0) && PED::IS_PED_ON_MOUNT(Local_87[0 /*4*/])) && ENTITY::_0x61914209C36EFDDB(Local_100[4 /*4*/]) == 7)
			{
				__LIB_1__::func_721(7);
				__LIB_4__::func_952(uParam0, 8);
				iLocal_326[0] = PED::CREATE_GROUP(2);
				PED::SET_GROUP_FORMATION(iLocal_326[0], 10);
				PED::SET_PED_CONFIG_FLAG(Local_87[0 /*4*/], 279, true);
				PED::SET_PED_AS_GROUP_LEADER(Local_87[0 /*4*/], iLocal_326[0], false);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_87[0 /*4*/], "sad5_sadie_escape", 0, 0, -1, 0, 0, -1);
				PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), Local_87[1 /*4*/], -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 4, 2, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_87[0 /*4*/], true);
			}
			break;
	}
}

void func_1250()
{
	int iVar0;
	switch (iLocal_492)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (__LIB_2__::func_1(iLocal_290[iVar0], 0, 1) && !__LIB_4__::func_303(iLocal_290[iVar0]))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_290[iVar0], -2815.241f, -2217.909f, 49.159f, 2.5f, -1, 0.25f, 0, 40000f);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (__LIB_2__::func_1(iLocal_302[iVar0], 0, 1) && !__LIB_4__::func_303(iLocal_302[iVar0]))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_302[iVar0], -2815.241f, -2217.909f, 49.159f, 2.5f, -1, 0.25f, 0, 40000f);
				}
				iVar0++;
			}
			iLocal_492++;
			break;
		case 1:
			if (func_1160(16))
			{
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (__LIB_2__::func_1(iLocal_290[iVar0], 0, 1) && ENTITY::IS_ENTITY_OCCLUDED(iLocal_290[iVar0]))
					{
						PED::DELETE_PED(&(iLocal_290[iVar0]));
					}
					iVar0++;
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (__LIB_2__::func_1(iLocal_290[iVar0], 0, 1) && !__LIB_4__::func_303(iLocal_290[iVar0]))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_290[iVar0], -2815.241f, -2217.909f, 49.159f, 2.5f, -1, 0.25f, 0, 40000f);
					}
					iVar0++;
				}
			}
			break;
	}
}

bool func_1251(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iLocal_498 == MISC::GET_FRAME_COUNT())
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_295[iVar0]))
		{
			iLocal_295[iVar0] = __LIB_1__::func_545(iLocal_79, func_1669(6, iVar0), func_1670(6, iVar0), 1, 1, 0, 1, 1, 0, 0, 0, 0, 0);
			__LIB_1__::func_991(iLocal_295[iVar0], 0);
			iLocal_498 = MISC::GET_FRAME_COUNT();
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_295[iVar0], true);
			TASK::TASK_STAND_STILL(iLocal_295[iVar0], -1);
		}
		if (iVar0 == (6 - 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1252(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (iLocal_498 == MISC::GET_FRAME_COUNT())
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_170[iVar0 /*4*/]))
		{
			Local_170[iVar0 /*4*/] = __LIB_1__::func_545(iLocal_81, func_1669(5, iVar0), func_1670(5, iVar0), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			iLocal_498 = MISC::GET_FRAME_COUNT();
			PED::SET_PED_CONFIG_FLAG(Local_170[iVar0 /*4*/], 307, true);
			ENTITY::_0x18FF3110CF47115D(Local_170[iVar0 /*4*/], 2, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_170[iVar0 /*4*/], joaat("REL_PLAYER_ENEMY"));
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_170[iVar0 /*4*/], true);
		}
		if ((((((iVar0 == 7 || iVar0 == 8) || iVar0 == 9) || iVar0 == 12) || iVar0 == 13) || iVar0 == 14) || iVar0 == 3)
		{
			__LIB_4__::func_7(Local_170[iVar0 /*4*/], joaat("WEAPON_REPEATER_CARBINE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		}
		else
		{
			__LIB_4__::func_7(Local_170[iVar0 /*4*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		}
		if (iVar0 == (15 - 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1253(var uParam0)
{
	switch (__LIB_4__::func_979(uParam0))
	{
		case 0:
			__LIB_5__::func_486(uParam0, "SAD5_OBJ9", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
		case 1:
			__LIB_5__::func_486(uParam0, "SAD5_OBJ3", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
		case 3:
			__LIB_5__::func_486(uParam0, "SAD5_OBJ8", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
		case 10:
			break;
	}
}

void func_1254()
{
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_170[7 /*4*/], 0))
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_170[7 /*4*/], 3f, 0, -1082130432 /* Float: -1f */, 0);
	}
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_170[8 /*4*/], 0))
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_170[8 /*4*/], 3f, 0, -1082130432 /* Float: -1f */, 0);
	}
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_170[9 /*4*/], 0))
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_170[9 /*4*/], 3f, 0, -1082130432 /* Float: -1f */, 0);
	}
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_170[12 /*4*/], 0))
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_170[12 /*4*/], 3f, 0, -1082130432 /* Float: -1f */, 0);
	}
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_170[13 /*4*/], 0))
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_170[13 /*4*/], 3f, 0, -1082130432 /* Float: -1f */, 0);
	}
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_170[14 /*4*/], 0))
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_170[14 /*4*/], 3f, 0, -1082130432 /* Float: -1f */, 0);
	}
}

void func_1255()
{
	int iVar0;
	if (!func_1160(1048576))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_38, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_39, true, 0))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if ((((((iVar0 != 7 && iVar0 != 8) && iVar0 != 9) && iVar0 != 12) && iVar0 != 13) && iVar0 != 14) && iVar0 != 3)
				{
					if (__LIB_2__::func_1(Local_170[iVar0 /*4*/], 0, 1))
					{
						if (MAP::DOES_BLIP_EXIST(Local_170[iVar0 /*4*/].f_2))
						{
							MAP::REMOVE_BLIP(&(Local_170[iVar0 /*4*/].f_2));
						}
					}
				}
				iVar0++;
			}
			func_1181(1048576, 1);
		}
	}
}

void func_1256()
{
	switch (iLocal_421)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_15, true, 0))
			{
				func_1217(&(Local_170[0 /*4*/]), joaat("BLIP_STYLE_ENEMY"), 942020339);
				func_1217(&(Local_170[1 /*4*/]), joaat("BLIP_STYLE_ENEMY"), 942020339);
				func_1217(&(Local_170[2 /*4*/]), joaat("BLIP_STYLE_ENEMY"), 942020339);
				func_1217(&(Local_170[4 /*4*/]), joaat("BLIP_STYLE_ENEMY"), 942020339);
				func_1217(&(Local_170[5 /*4*/]), joaat("BLIP_STYLE_ENEMY"), 942020339);
				func_1181(2, 1);
				iLocal_421 = 1;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_16, true, 0))
			{
				func_1217(&(Local_170[3 /*4*/]), joaat("BLIP_STYLE_ENEMY"), 942020339);
				func_1217(&(Local_170[6 /*4*/]), joaat("BLIP_STYLE_ENEMY"), 942020339);
				func_1217(&(Local_170[10 /*4*/]), joaat("BLIP_STYLE_ENEMY"), 942020339);
				func_1217(&(Local_170[11 /*4*/]), joaat("BLIP_STYLE_ENEMY"), 942020339);
				func_1708(&(Local_170[0 /*4*/]));
				func_1708(&(Local_170[1 /*4*/]));
				func_1708(&(Local_170[2 /*4*/]));
				func_1708(&(Local_170[4 /*4*/]));
				func_1708(&(Local_170[5 /*4*/]));
				iLocal_421 = 2;
			}
			break;
		case 2:
			break;
	}
}

void func_1257(var uParam0)
{
	int iVar0;
	switch (iLocal_422)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Local_87[0 /*4*/], Local_14.f_41, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_41, true, 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "sad5_enemy_bridge_1", 0, 1024, 30, 0, 1, -1);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(Local_170[2 /*4*/], &iVar0, 0, 0, 1, 1);
				func_1217(&(Local_170[2 /*4*/]), joaat("BLIP_STYLE_ENEMY"), 942020339);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_170[2 /*4*/], 30, true);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "sad5_enemy_bridge_1", 0, 1024, -1, 0, 1, -1);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(Local_170[0 /*4*/], &iVar0, 0, 0, 1, 1);
				func_1217(&(Local_170[0 /*4*/]), joaat("BLIP_STYLE_ENEMY"), 942020339);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_170[0 /*4*/], 30, true);
				iLocal_422 = 1;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_17, true, 0))
			{
				func_1725(1, -2826.712f, -2441.998f, 52.15996f, 1073741824 /* Float: 2f */);
				func_1725(4, -2827.508f, -2457.784f, 50.15545f, 1073741824 /* Float: 2f */);
				func_1725(5, -2819.946f, -2476.545f, 50.1152f, 1.5f);
				iLocal_422 = 2;
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_18, true, 0))
			{
				func_1725(11, -2843.697f, -2463.61f, 49.89164f, 1.5f);
				func_1725(3, -2855.813f, -2441.371f, 52.52027f, 1.5f);
				func_1725(6, -2855.2f, -2483.326f, 48.01059f, 1.5f);
				iLocal_422 = 3;
			}
			break;
		case 3:
			iLocal_422 = 5;
			break;
		case 5:
			break;
	}
}

void func_1258(var uParam0)
{
	if (__LIB_4__::func_971(uParam0) < 6)
	{
		if (ENTITY::_0x61914209C36EFDDB(Local_100[4 /*4*/]) == 7)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_EXIT"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HITCH_ANIMAL"), false);
			__LIB_5__::func_372(uParam0, 0);
			if (func_1160(536870912))
			{
				if (!__LIB_14__::func_312(uParam0, Local_87[2 /*4*/], 30f, iLocal_338, 0, 1, joaat("BLIP_STYLE_PLAYER_HORSE"), 1084227584 /* Float: 5f */, 1103626240 /* Float: 25f */))
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_87[0 /*4*/], 0) && TASK::GET_PED_WAYPOINT_PROGRESS(Local_87[0 /*4*/]) >= 78)
					{
						if (__LIB_11__::func_812(uParam0, Local_87[0 /*4*/], "SADIE_RETURN", "SADIE_ABANDON", 40f, 50f, 0, 1, 1, joaat("BLIP_STYLE_COMPANION"), 1))
						{
							if (!__LIB_5__::func_463())
							{
								if (iLocal_474 == 0)
								{
									if (__LIB_0__::func_265(&(vLocal_345[0 /*3*/])) > 1f)
									{
										func_1170(uParam0, "SAD5_S7_KEEPUP", 0);
										__LIB_1__::func_148(&(vLocal_345[0 /*3*/]));
										iLocal_474++;
									}
								}
								else if (__LIB_0__::func_265(&(vLocal_345[0 /*3*/])) > 7f)
								{
									func_1170(uParam0, "SAD5_S7_KEEPUP", 0);
									__LIB_1__::func_148(&(vLocal_345[0 /*3*/]));
								}
							}
						}
						else
						{
							iLocal_474 = 0;
						}
					}
					else if (__LIB_11__::func_812(uParam0, Local_87[0 /*4*/], "SADIE_RETURN", "SADIE_ABANDON", 40f, 100f, 0, 1, 1, joaat("BLIP_STYLE_COMPANION"), 1))
					{
						if (!__LIB_5__::func_463())
						{
							if (!__LIB_5__::func_463())
							{
								if (iLocal_474 == 0)
								{
									if (__LIB_0__::func_265(&(vLocal_345[0 /*3*/])) > 1f)
									{
										func_1170(uParam0, "SAD5_S7_KEEPUP", 0);
										__LIB_1__::func_148(&(vLocal_345[0 /*3*/]));
										iLocal_474++;
									}
								}
								else if (__LIB_0__::func_265(&(vLocal_345[0 /*3*/])) > 7f)
								{
									func_1170(uParam0, "SAD5_S7_KEEPUP", 0);
									__LIB_1__::func_148(&(vLocal_345[0 /*3*/]));
								}
							}
						}
					}
					else
					{
						iLocal_474 = 0;
					}
				}
			}
		}
		else
		{
			switch (iLocal_480)
			{
				case 0:
					if (ENTITY::_0x61914209C36EFDDB(Local_100[4 /*4*/]) != 7 && ENTITY::_0x61914209C36EFDDB(Local_100[4 /*4*/]) != 8)
					{
						UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
						iLocal_480++;
					}
					break;
				case 1:
					if (ENTITY::_0x61914209C36EFDDB(Local_100[4 /*4*/]) != 7 && ENTITY::_0x61914209C36EFDDB(Local_100[4 /*4*/]) != 8)
					{
						__LIB_5__::func_372(uParam0, 3);
						__LIB_5__::func_590(uParam0, "SAD5_OBJ8", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						__LIB_1__::func_721(7);
						iLocal_480++;
					}
					break;
				case 2:
					if (!__LIB_14__::func_340(uParam0, 11, 35f, 50f, 0, 1, 1, joaat("BLIP_STYLE_COMPANION")))
					{
						if (ENTITY::_0x61914209C36EFDDB(Local_100[4 /*4*/]) == 7 || ENTITY::_0x61914209C36EFDDB(Local_100[4 /*4*/]) == 8)
						{
							iLocal_480 = 0;
							UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
							__LIB_5__::func_372(uParam0, 4);
							__LIB_5__::func_590(uParam0, "SAD5_OBJ1", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							__LIB_1__::func_718(7);
						}
						else
						{
							__LIB_8__::func_799(uParam0, 0, 0);
							if (__LIB_0__::func_665(Global_35, Local_100[4 /*4*/], 1, 1) > 20f)
							{
								__LIB_5__::func_505(uParam0, "SAD5_B_FAIL", "", 1, 0);
							}
						}
					}
					else
					{
						__LIB_8__::func_799(uParam0, 1, 0);
					}
					break;
			}
		}
	}
	if (__LIB_4__::func_971(uParam0) < 5)
	{
		__LIB_6__::func_713(Local_87[0 /*4*/], 1071644672 /* Float: 1.75f */, 0, 1045220557 /* Float: 0.2f */, 1, 1077936128 /* Float: 3f */, 10f, 20f, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 0, 1, 1045220557 /* Float: 0.2f */, 0);
	}
}

void func_1259(var uParam0)
{
	if (__LIB_4__::func_939(uParam0) == iLocal_75)
	{
		if (__LIB_4__::func_971(uParam0) == 5 && !ENTITY::IS_ENTITY_DEAD(Local_100[4 /*4*/]))
		{
			if (!__LIB_0__::func_75(&(vLocal_345[12 /*3*/])))
			{
				__LIB_1__::func_148(&(vLocal_345[12 /*3*/]));
				func_1728(uParam0, "SAD5_HOGTIE", Local_100[4 /*4*/], 0, 0);
			}
			if (__LIB_0__::func_265(&(vLocal_345[12 /*3*/])) > 20f)
			{
				if (__LIB_0__::func_665(Local_87[0 /*4*/], Local_100[4 /*4*/], 1, 1) > 20f)
				{
					func_1728(uParam0, "SAD5_HOGTIE", Local_100[4 /*4*/], 0, 0);
				}
				else
				{
					func_1728(uParam0, "SAD5_FINRAGE", Local_100[4 /*4*/], 0, 0);
				}
				__LIB_1__::func_148(&(vLocal_345[12 /*3*/]));
			}
		}
		if (__LIB_4__::func_971(uParam0) == 6 || __LIB_4__::func_971(uParam0) == 7)
		{
			if (ENTITY::_0x61914209C36EFDDB(Local_100[4 /*4*/]) == 4 || ENTITY::_0x61914209C36EFDDB(Local_100[4 /*4*/]) == 5)
			{
				if (!func_1160(16777216) && !__LIB_5__::func_463())
				{
					if (ENTITY::IS_ENTITY_DEAD(Local_100[4 /*4*/]))
					{
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) == 0)
						{
							func_1170(uParam0, "SAD5_BNT_DEAD", 0);
						}
						else if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) == 1)
						{
							func_1170(uParam0, "SAD5_SBNT_DEAD", 0);
						}
						else
						{
							func_1170(uParam0, "SAD5_BNT_DPICK", 0);
						}
					}
					else
					{
						func_1170(uParam0, "SAD5_GETFIN", 0);
					}
					func_1181(16777216, 1);
				}
			}
		}
		if (__LIB_4__::func_971(uParam0) == 6 && !ENTITY::IS_ENTITY_DEAD(Local_100[4 /*4*/]))
		{
			if (iLocal_494 > 2)
			{
				if ((__LIB_0__::func_265(&(vLocal_345[12 /*3*/])) > 10f && __LIB_0__::func_665(Global_35, Local_100[4 /*4*/], 1, 1) < 20f) && !__LIB_0__::func_27(iLocal_462, 67108864))
				{
					func_1728(uParam0, "SAD5_SEESAD", Local_100[4 /*4*/], 0, 0);
					__LIB_1__::func_148(&(vLocal_345[12 /*3*/]));
					__LIB_1__::func_683(&iLocal_462, 67108864);
				}
			}
		}
		if (__LIB_4__::func_971(uParam0) == 7 && !ENTITY::IS_ENTITY_DEAD(Local_100[4 /*4*/]))
		{
			if (iLocal_484 == 1)
			{
				if ((__LIB_0__::func_27(iLocal_462, 67108864) && !__LIB_0__::func_27(iLocal_462, 134217728)) && !__LIB_5__::func_463())
				{
					func_1728(uParam0, "SAD5_WARN", Local_100[4 /*4*/], 0, 0);
					__LIB_1__::func_683(&iLocal_462, 134217728);
				}
			}
		}
	}
	else if (__LIB_4__::func_939(uParam0) == iLocal_76)
	{
		if ((__LIB_4__::func_971(uParam0) > 0 && __LIB_4__::func_971(uParam0) < 5) && !ENTITY::IS_ENTITY_DEAD(Local_100[4 /*4*/]))
		{
			if (!__LIB_0__::func_75(&(vLocal_345[12 /*3*/])))
			{
				__LIB_1__::func_148(&(vLocal_345[12 /*3*/]));
			}
		}
		if (__LIB_4__::func_971(uParam0) < 5 && !ENTITY::IS_ENTITY_DEAD(Local_100[4 /*4*/]))
		{
			if (__LIB_0__::func_265(&(vLocal_345[12 /*3*/])) > 20f)
			{
				func_1170(uParam0, "SAD5_FINCHASE", 0);
				__LIB_1__::func_148(&(vLocal_345[12 /*3*/]));
			}
		}
	}
}

void func_1260()
{
	if (((!ENTITY::IS_ENTITY_DEAD(Global_35) && !ENTITY::IS_ENTITY_DEAD(Local_87[2 /*4*/])) && !ENTITY::IS_ENTITY_DEAD(Local_87[0 /*4*/])) && !ENTITY::IS_ENTITY_DEAD(Local_87[1 /*4*/]))
	{
		if (!func_1160(2097152))
		{
			if (((__LIB_0__::func_665(Global_35, Local_87[0 /*4*/], 0, 0) > 13f && PED::IS_PED_ON_MOUNT(Global_35)) && PED::IS_PED_ON_MOUNT(Local_87[0 /*4*/])) && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_87[0 /*4*/], 0))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_87[0 /*4*/], 2.001f);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_87[1 /*4*/], 2.001f);
			}
			else if (((__LIB_0__::func_665(Global_35, Local_87[0 /*4*/], 0, 0) < 13f && PED::IS_PED_ON_MOUNT(Global_35)) && PED::IS_PED_ON_MOUNT(Local_87[0 /*4*/])) && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_87[0 /*4*/], 0))
			{
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_87[0 /*4*/], 2.5f);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_87[1 /*4*/], 2.5f);
			}
		}
		if (((!func_1160(2097152) && PED::IS_PED_ON_MOUNT(Global_35)) && ENTITY::_0x61914209C36EFDDB(Local_100[4 /*4*/]) == 7) && func_1160(2))
		{
			if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM")))
			{
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(Global_35, 1.7f);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_87[2 /*4*/], 1.6f);
			}
		}
	}
}

void func_1263(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_1264(uParam0, iVar0, 1))
		{
		}
		iVar0++;
	}
	PED::_SET_PED_ON_MOUNT(Local_170[7 /*4*/], iLocal_295[0], -1, true);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_295[0], false);
	PED::_SET_PED_ON_MOUNT(Local_170[8 /*4*/], iLocal_295[1], -1, true);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_295[1], false);
	PED::_SET_PED_ON_MOUNT(Local_170[9 /*4*/], iLocal_295[2], -1, true);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_295[2], false);
	PED::_SET_PED_ON_MOUNT(Local_170[12 /*4*/], iLocal_295[3], -1, true);
	PED::_SET_PED_ON_MOUNT(Local_170[13 /*4*/], iLocal_295[4], -1, true);
	PED::_SET_PED_ON_MOUNT(Local_170[14 /*4*/], iLocal_295[5], -1, true);
}

bool func_1264(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (iParam2 == 1)
	{
		iVar0 = iParam1;
		if (!__LIB_2__::func_1(Local_170[iVar0 /*4*/], 0, 1))
		{
			return false;
		}
		switch (iVar0)
		{
			case 0:
				TASK::TASK_COMBAT_PED(Local_170[iVar0 /*4*/], Global_35, 0, 0);
				break;
			case 1:
				TASK::TASK_COMBAT_PED(Local_170[iVar0 /*4*/], Global_35, 0, 0);
				break;
			case 2:
				TASK::TASK_COMBAT_PED(Local_170[iVar0 /*4*/], Global_35, 0, 0);
				break;
			case 3:
				TASK::TASK_COMBAT_PED(Local_170[iVar0 /*4*/], Global_35, 0, 0);
				break;
			case 4:
				TASK::TASK_COMBAT_PED(Local_170[iVar0 /*4*/], Global_35, 0, 0);
				break;
			case 5:
				TASK::TASK_COMBAT_PED(Local_170[iVar0 /*4*/], Global_35, 0, 0);
				break;
			case 6:
				TASK::TASK_COMBAT_PED(Local_170[iVar0 /*4*/], Global_35, 0, 0);
				break;
			case 10:
				TASK::TASK_COMBAT_PED(Local_170[iVar0 /*4*/], Global_35, 0, 0);
				break;
			case 11:
				TASK::TASK_COMBAT_PED(Local_170[iVar0 /*4*/], Global_35, 0, 0);
				break;
			default:
				break;
		}
		PED::SET_PED_ACCURACY(Local_170[iVar0 /*4*/], 90);
		PED::SET_PED_COMBAT_MOVEMENT(Local_170[iVar0 /*4*/], 0);
		PED::SET_PED_COMBAT_RANGE(Local_170[iVar0 /*4*/], 2);
		__LIB_2__::func_279(Local_170[iVar0 /*4*/], 1);
		return true;
	}
	else if (iParam2 == 2)
	{
		iVar1 = iParam1;
		if (!__LIB_2__::func_1(Local_170[iVar1 /*4*/], 0, 1))
		{
			return false;
		}
		switch (iVar1)
		{
			case 7:
				PED::SET_PED_COMBAT_RANGE(Local_170[iVar1 /*4*/], 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_170[iVar1 /*4*/], 30, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_170[iVar1 /*4*/], 126, true);
				PED::SET_PED_COMBAT_MOVEMENT(Local_170[iVar1 /*4*/], 2);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_295[0], true);
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "sad5_enemy_ride_1", 11, 4196352, -1, 0, 1, -1);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(Local_170[iVar1 /*4*/], &iVar2, 0, 0, 1, 1);
				break;
			case 8:
				PED::SET_PED_COMBAT_RANGE(Local_170[iVar1 /*4*/], 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_170[iVar1 /*4*/], 30, true);
				PED::SET_PED_COMBAT_MOVEMENT(Local_170[iVar1 /*4*/], 2);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_170[iVar1 /*4*/], 126, true);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_295[1], true);
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "sad5_enemy_ride_1", 6, 4196352, -1, 0, 1, -1);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(Local_170[iVar1 /*4*/], &iVar2, 0, 0, 1, 1);
				break;
			case 9:
				PED::SET_PED_COMBAT_RANGE(Local_170[iVar1 /*4*/], 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_170[iVar1 /*4*/], 30, true);
				PED::SET_PED_COMBAT_MOVEMENT(Local_170[iVar1 /*4*/], 2);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_170[iVar1 /*4*/], 126, true);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_295[2], true);
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "sad5_enemy_ride_1", 0, 4196352, -1, 0, 1, -1);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(Local_170[iVar1 /*4*/], &iVar2, 0, 0, 1, 1);
				break;
		}
		PED::SET_PED_ACCURACY(Local_170[iVar1 /*4*/], 90);
		return true;
	}
	else if (iParam2 == 3)
	{
		iVar3 = iParam1;
		if (!__LIB_2__::func_1(Local_170[iVar3 /*4*/], 0, 1))
		{
			return false;
		}
		switch (iVar3)
		{
			case 12:
				PED::SET_PED_COMBAT_RANGE(Local_170[iVar3 /*4*/], 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_170[iVar3 /*4*/], 30, true);
				PED::SET_PED_COMBAT_MOVEMENT(Local_170[iVar3 /*4*/], 2);
				TASK::OPEN_SEQUENCE_TASK(&iVar4);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "sad5_enemy_ride_2", 6, 4196352, -1, 0, 1, -1);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(Local_170[iVar3 /*4*/], &iVar4, 0, 0, 1, 1);
				break;
			case 13:
				PED::SET_PED_COMBAT_RANGE(Local_170[iVar3 /*4*/], 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_170[iVar3 /*4*/], 30, true);
				PED::SET_PED_COMBAT_MOVEMENT(Local_170[iVar3 /*4*/], 2);
				TASK::OPEN_SEQUENCE_TASK(&iVar4);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "sad5_enemy_ride_2", 2, 4196352, -1, 0, 1, -1);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(Local_170[iVar3 /*4*/], &iVar4, 0, 0, 1, 1);
				break;
			case 14:
				PED::SET_PED_COMBAT_RANGE(Local_170[iVar3 /*4*/], 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_170[iVar3 /*4*/], 30, true);
				PED::SET_PED_COMBAT_MOVEMENT(Local_170[iVar3 /*4*/], 2);
				TASK::OPEN_SEQUENCE_TASK(&iVar4);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "sad5_enemy_ride_2", 0, 4196352, -1, 0, 1, -1);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(Local_170[iVar3 /*4*/], &iVar4, 0, 0, 1, 1);
				break;
			default:
				break;
		}
		PED::SET_PED_ACCURACY(Local_170[iVar3 /*4*/], 90);
		return true;
	}
	return false;
}

void func_1265(var uParam0)
{
	int iVar0;
	int iVar1;
	switch (iLocal_426)
	{
		case 0:
			if (__LIB_0__::func_266(Local_87[0 /*4*/], -3015.375f, -2470.549f, 28.9004f, 10f, 1, 1))
			{
				func_1729();
				iLocal_426 = 1;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Local_87[0 /*4*/], Local_14.f_20, false, 0))
			{
				iLocal_426 = 2;
			}
			break;
		case 2:
			if (func_1729() || __LIB_0__::func_266(Global_35, -3152.226f, -2420.067f, 22.79447f, 5f, 1, 1))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_87[0 /*4*/], 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::CLEAR_PED_TASKS(0, true, false);
					TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
					__LIB_1__::func_474(Local_87[0 /*4*/], &iVar0, 0, 0, 1, 1);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_87[0 /*4*/], ENTITY::GET_ENTITY_COORDS(Local_87[0 /*4*/], true, false), 6f, 0, 0, 0);
					func_1181(2097152, 1);
				}
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::CLEAR_PED_TASKS(0, true, false);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "sad5_sadie_escape", 0, 8, -1, 0, 0, -1);
				__LIB_1__::func_474(Local_87[0 /*4*/], &iVar1, 0, 0, 1, 1);
				__LIB_5__::func_372(uParam0, 10);
				func_1170(uParam0, "SAD5_S7_CANYON", 0);
				iLocal_426 = 3;
			}
			break;
		case 3:
			if ((!__LIB_8__::func_684("SAD5_S7_CANYON") || __LIB_0__::func_266(Local_87[0 /*4*/], -3152.226f, -2420.067f, 22.79447f, 4f, 1, 1)) || __LIB_0__::func_266(Global_35, -3152.226f, -2420.067f, 22.79447f, 4f, 1, 1))
			{
				iLocal_426 = 4;
			}
			break;
		case 4:
			if ((__LIB_1__::func_373(-3152.226f, -2420.067f, 22.79447f, 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */, 0, 1061158912 /* Float: 0.75f */) || __LIB_0__::func_266(Global_35, -3152.226f, -2420.067f, 22.79447f, 4f, 1, 1)) || __LIB_0__::func_266(Local_87[0 /*4*/], -3152.226f, -2420.067f, 22.79447f, 4f, 1, 1))
			{
				if (CAM::_0xDD0B7C5AE58F721D(&Local_517))
				{
					CAM::_0xB8B207C34285E978(&Local_517);
					CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, true);
					__LIB_4__::func_952(uParam0, 5);
					iLocal_426 = 5;
				}
			}
			break;
		case 5:
			break;
	}
}

void func_1266()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (__LIB_2__::func_1(Local_170[iVar0 /*4*/], 0, 1))
		{
			__LIB_1__::func_864(Local_170[iVar0 /*4*/], 1, 0);
			if (!func_1160(-2147483648))
			{
				func_1181(-2147483648, 1);
			}
		}
		iVar0++;
	}
}

bool func_1268(var uParam0)
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
	POPULATION::_0xC6DCC2A3A8825C85(1);
	switch (iLocal_479)
	{
		case 0:
			if (SCRIPTS::_0x7409669C5ED50144(joaat("CHAL_CTX_SHOOTOUT")))
			{
				SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_SHOOTOUT"));
			}
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_87[2 /*4*/], 1);
			func_1182("script@cme@SAD5_CME_SHOT5");
			__LIB_1__::func_148(&(vLocal_345[7 /*3*/]));
			iLocal_479++;
			__LIB_0__::func_105(1);
			break;
		case 1:
			if (STREAMING::IS_SRL_LOADED())
			{
				CLOCK::SET_CLOCK_TIME(19, 30, 0);
				func_1663(Global_35, Local_87[2 /*4*/], -3151.3f, -2419.6f, 24.2f, 58f, joaat("MOTIONSTATE_RUN"));
				func_1663(Local_87[0 /*4*/], Local_87[1 /*4*/], -3161.599f, -2412.1f, 22.77576f, 53.2f, joaat("MOTIONSTATE_RUN"));
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Global_35, "sad5_return_to_blackwater_cme_shot1", 0, 4194312, -1, 0, 0, -1);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_87[0 /*4*/], "sad5_return_to_blackwater_cme_shot1", 0, 4194312, -1, 0, 0, -1);
				CAM::_0xBC016635D6A73B31(sLocal_505, "1_PikesBasin_1", 5);
				AUDIO::_0x5E3CCF03995388B5(-314510559, -3198.4f, -2387.5f, 21f);
				iLocal_479++;
			}
			break;
		case 2:
			func_1182("script@cme@SAD5_CME_SHOT6");
			iLocal_479++;
			__LIB_1__::func_148(&(vLocal_345[7 /*3*/]));
			break;
		case 3:
			iLocal_486 = (CAM::_0xEA113BF9B0C0C5D7(sLocal_505, "1_PikesBasin_1", 5) - __LIB_1__::func_871(&(vLocal_345[7 /*3*/])));
			iLocal_487 = (CAM::_0x465F04F68AD38197(sLocal_505, "1_PikesBasin_1", 5) - __LIB_1__::func_871(&(vLocal_345[7 /*3*/])));
			if (AUDIO::_0xFFE9C53DEEA3DB0B(iLocal_486, 2893133, -3168.7f, -2611.7f, 9.8f, STREAMING::IS_SRL_LOADED(), iLocal_487))
			{
				CLOCK::SET_CLOCK_TIME(19, 45, 0);
				CLOCK::PAUSE_CLOCK(false, 0);
				func_1663(Global_35, Local_87[2 /*4*/], -3163.6f, -2610.5f, 10.1f, -126.7f, joaat("MOTIONSTATE_RUN"));
				func_1663(Local_87[0 /*4*/], Local_87[1 /*4*/], -3155.733f, -2614.386f, 9.3143f, 239.7663f, joaat("MOTIONSTATE_RUN"));
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Global_35, "sad5_return_to_blackwater_cme_shot2", 0, 4194312, -1, 0, 0, -1);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_87[0 /*4*/], "sad5_return_to_blackwater_cme_shot2", 0, 4194312, -1, 0, 0, -1);
				CAM::_0xA54D643D0773EB65(sLocal_505, "1_PikesBasin_1", 5);
				CAM::_0xBC016635D6A73B31(sLocal_505, "2_PikesBasin_2", 5);
				iLocal_479++;
			}
			break;
		case 4:
			__LIB_1__::func_148(&(vLocal_345[7 /*3*/]));
			func_1182("script@cme@SAD5_CME_SHOT7");
			iLocal_486 = (CAM::_0xEA113BF9B0C0C5D7(sLocal_505, "2_PikesBasin_2", 5) - __LIB_1__::func_871(&(vLocal_345[7 /*3*/])));
			iLocal_487 = (CAM::_0x465F04F68AD38197(sLocal_505, "2_PikesBasin_2", 5) - __LIB_1__::func_871(&(vLocal_345[7 /*3*/])));
			AUDIO::_0xFFE9C53DEEA3DB0B(iLocal_486, -309084198, -1012.1f, -1721.4f, 92.5f, false, iLocal_487);
			iLocal_479++;
			break;
		case 5:
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_87[0 /*4*/], 2f);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_87[1 /*4*/], 2f);
			iLocal_486 = (CAM::_0xEA113BF9B0C0C5D7(sLocal_505, "2_PikesBasin_2", 5) - __LIB_1__::func_871(&(vLocal_345[7 /*3*/])));
			iLocal_487 = (CAM::_0x465F04F68AD38197(sLocal_505, "2_PikesBasin_2", 5) - __LIB_1__::func_871(&(vLocal_345[7 /*3*/])));
			if (AUDIO::_0xFFE9C53DEEA3DB0B(iLocal_486, -309084198, -1012.1f, -1721.4f, 92.5f, STREAMING::IS_SRL_LOADED(), iLocal_487))
			{
				func_1663(Global_35, Local_87[2 /*4*/], -1023f, -1692f, 78.5f, -126.7f, joaat("MOTIONSTATE_RUN"));
				CLOCK::SET_CLOCK_TIME(21, 30, 0);
				CLOCK::PAUSE_CLOCK(false, 0);
				MISC::_SET_WEATHER_TYPE(joaat("HIGHPRESSURE"), true, true, false, 0f, false);
				CAM::_0xA54D643D0773EB65(sLocal_505, "2_PikesBasin_2", 5);
				CAM::_0xBC016635D6A73B31(sLocal_505, "4_StaticShot_1", 5);
				STREAMING::END_SRL();
				func_1182("script@cme@SAD5_CME_SHOT8");
				STREAMING::_0xEF1A8A484118735E();
				iLocal_479++;
			}
			break;
		case 6:
			__LIB_1__::func_148(&(vLocal_345[7 /*3*/]));
			iLocal_486 = (CAM::_0xEA113BF9B0C0C5D7(sLocal_505, "4_StaticShot_1", 5) - __LIB_1__::func_871(&(vLocal_345[7 /*3*/])));
			iLocal_487 = (CAM::_0x465F04F68AD38197(sLocal_505, "4_StaticShot_1", 5) - __LIB_1__::func_871(&(vLocal_345[7 /*3*/])));
			AUDIO::_0xFFE9C53DEEA3DB0B(iLocal_486, 0, -1252.1f, -1720.6f, 84.4f, true, iLocal_487);
			iLocal_479++;
			break;
		case 7:
			iLocal_486 = (CAM::_0xEA113BF9B0C0C5D7(sLocal_505, "4_StaticShot_1", 5) - __LIB_1__::func_871(&(vLocal_345[7 /*3*/])));
			iLocal_487 = (CAM::_0x465F04F68AD38197(sLocal_505, "4_StaticShot_1", 5) - __LIB_1__::func_871(&(vLocal_345[7 /*3*/])));
			if (AUDIO::_0xFFE9C53DEEA3DB0B(iLocal_486, 0, -1252.1f, -1720.6f, 84.4f, true, iLocal_487))
			{
				func_1663(Global_35, Local_87[2 /*4*/], -1238.893f, -1709.505f, 77.9125f, 307.1067f, joaat("MOTIONSTATE_RUN"));
				func_1663(Local_87[0 /*4*/], Local_87[1 /*4*/], -1235.115f, -1706.25f, 77.6666f, 314.4818f, joaat("MOTIONSTATE_RUN"));
				CLOCK::SET_CLOCK_TIME(22, 0, 0);
				__LIB_0__::func_489(0, 0);
				CAM::_0xA54D643D0773EB65(sLocal_505, "4_StaticShot_1", 5);
				AUDIO::_0x43037ABFE214A851();
				POPULATION::_0xBC90BDF4E5228EA1();
				STREAMING::END_SRL();
				return true;
			}
			break;
	}
	if (iLocal_479 > 1)
	{
		CAM::_0x702B75DC9D3EDE56(true);
	}
	return false;
}

void func_1269()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_295[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_295[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_170[iVar0 /*4*/]))
		{
			PED::DELETE_PED(&(Local_170[iVar0 /*4*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_290[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_290[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_100[iVar0 /*4*/]))
		{
			PED::DELETE_PED(&(Local_100[iVar0 /*4*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_269[iVar0 /*4*/]))
		{
			PED::DELETE_PED(&(Local_269[iVar0 /*4*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_121[iVar0 /*4*/]))
		{
			PED::DELETE_PED(&(Local_121[iVar0 /*4*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_231[iVar0 /*4*/]))
		{
			PED::DELETE_PED(&(Local_231[iVar0 /*4*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_256[iVar0 /*4*/]))
		{
			PED::DELETE_PED(&(Local_256[iVar0 /*4*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_302[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_302[iVar0]));
		}
		iVar0++;
	}
}

void func_1271(var uParam0)
{
	switch (__LIB_4__::func_979(uParam0))
	{
		case 0:
			__LIB_5__::func_486(uParam0, "SAD5_OBJ3", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
		case 1:
			__LIB_5__::func_486(uParam0, "SAD5_OBJ11", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
		case 2:
			__LIB_5__::func_486(uParam0, "SAD5_OBJ12", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
		case 3:
			__LIB_5__::func_486(uParam0, "SAD5_OBJ8", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
		case 4:
			__LIB_5__::func_486(uParam0, "SAD5_OBJ1", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
	}
}

bool func_1273(var uParam0)
{
	switch (iLocal_495)
	{
		case 0:
			__LIB_4__::func_269(1);
			if (__LIB_8__::func_783(512))
			{
				iLocal_495++;
			}
			break;
		case 1:
			if (__LIB_0__::func_266(Global_35, -751.7415f, -1271.275f, 42.3808f, 50f, 1, 1))
			{
				if (__LIB_3__::func_397(509, 1))
				{
					func_1743(509, 0, 0);
					if (iLocal_307 == 0 && !ENTITY::DOES_ENTITY_EXIST(iLocal_307))
					{
						iLocal_307 = __LIB_2__::func_965(509, 1, 0, 0, 1, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_307))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_307, -762.9124f, -1266.573f, 43.0505f, 104.0773f, false, true, true);
						__LIB_5__::func_580(uParam0, iLocal_307, "U_M_O_BLWPOLICECHIEF_01", 0, 0, 0, 0);
						__LIB_5__::func_106(uParam0, iLocal_307, "blw_police_chief", 0);
						iLocal_495++;
					}
				}
			}
			break;
		case 2:
			if (__LIB_3__::func_397(510, 1))
			{
				func_1743(510, 0, 0);
				if (iLocal_308 == 0 && !ENTITY::DOES_ENTITY_EXIST(iLocal_308))
				{
					iLocal_308 = __LIB_2__::func_965(510, 1, 0, 0, 1, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_308))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_308, -765.6063f, -1268.14f, 43.0413f, 73.5805f, false, true, true);
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_308, -765.6063f, -1268.14f, 43.0413f, 2f, -1, false, false, false, false);
					iLocal_495++;
				}
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_1274(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_100[4 /*4*/]))
	{
		__LIB_5__::func_298(uParam0, "1-BountyCaught");
	}
	else
	{
		__LIB_10__::func_925(uParam0, "2-BountyKilled");
		__LIB_5__::func_298(uParam0, "2-BountyKilled");
	}
}

void func_1275(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_100[4 /*4*/]))
	{
		func_1746(uParam0);
	}
	else if (ENTITY::IS_ENTITY_DEAD(Local_100[4 /*4*/]) && (__LIB_0__::func_394(Global_35, Local_87[2 /*4*/], 1) || __LIB_0__::func_394(Global_35, Local_87[1 /*4*/], 1)))
	{
		switch (iLocal_500)
		{
			case 0:
				if (!__LIB_5__::func_463() || !__LIB_6__::func_904())
				{
					func_1170(uParam0, "SAD5_S7_RBANT1", 0);
					iLocal_500++;
				}
				break;
			case 1:
				if (!__LIB_5__::func_463() || !__LIB_6__::func_904())
				{
					func_1170(uParam0, "SAD5_S7_RBANT2", 0);
					iLocal_500++;
				}
				break;
			case 2:
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_87[0 /*4*/], 0) && TASK::GET_PED_WAYPOINT_PROGRESS(Local_87[0 /*4*/]) > 360)
				{
					if (!__LIB_5__::func_463() || !__LIB_6__::func_904())
					{
						func_1170(uParam0, "SAD5_S8_BDEAD", 0);
						iLocal_500++;
					}
				}
				break;
			case 3:
				break;
			case 4:
				break;
		}
	}
}

void func_1277(var uParam0)
{
	if (__LIB_4__::func_971(uParam0) < 1)
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Local_87[0 /*4*/], Local_14.f_24, true, 0))
		{
			if (ENTITY::_0x61914209C36EFDDB(Local_100[4 /*4*/]) == 7)
			{
				if (func_1160(536870912))
				{
					if (!__LIB_14__::func_312(uParam0, Local_87[2 /*4*/], 30f, 0, 0, 1, joaat("BLIP_STYLE_PLAYER_HORSE"), 1084227584 /* Float: 5f */, 1103626240 /* Float: 25f */))
					{
						func_1162(uParam0, 11, "sad5_ride_to_bank", 35f, 60f, 0, 0, 1, 1117126656 /* Float: 75f */, joaat("BLIP_STYLE_COMPANION"));
					}
				}
			}
			else
			{
				switch (iLocal_480)
				{
					case 0:
						if (ENTITY::_0x61914209C36EFDDB(Local_100[4 /*4*/]) != 7 && ENTITY::_0x61914209C36EFDDB(Local_100[4 /*4*/]) != 8)
						{
							UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
							iLocal_480++;
						}
						break;
					case 1:
						if (ENTITY::_0x61914209C36EFDDB(Local_100[4 /*4*/]) != 7 && ENTITY::_0x61914209C36EFDDB(Local_100[4 /*4*/]) != 8)
						{
							__LIB_5__::func_372(uParam0, 3);
							__LIB_5__::func_590(uParam0, "SAD5_OBJ8", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							__LIB_1__::func_721(7);
							iLocal_480++;
						}
						break;
					case 2:
						if (!__LIB_14__::func_340(uParam0, 11, 35f, 50f, 0, 1, 1, joaat("BLIP_STYLE_COMPANION")))
						{
							if (ENTITY::_0x61914209C36EFDDB(Local_100[4 /*4*/]) == 7 || ENTITY::_0x61914209C36EFDDB(Local_100[4 /*4*/]) == 8)
							{
								iLocal_480 = 0;
								UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
								__LIB_5__::func_372(uParam0, 4);
								__LIB_5__::func_590(uParam0, "SAD5_OBJ1", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
								__LIB_1__::func_718(7);
							}
							else
							{
								__LIB_8__::func_799(uParam0, 0, 0);
								if (__LIB_0__::func_665(Global_35, Local_100[4 /*4*/], 1, 1) > 20f)
								{
									__LIB_5__::func_505(uParam0, "SAD5_B_FAIL", "", 1, 0);
								}
							}
						}
						else
						{
							__LIB_8__::func_799(uParam0, 1, 0);
						}
						break;
				}
			}
		}
	}
}

bool func_1278(var uParam0)
{
	switch (__LIB_4__::func_971(uParam0))
	{
		case 1:
			return true;
		case 3:
			if (!__LIB_11__::func_812(uParam0, Local_87[0 /*4*/], "SADIE_RETURN", "SADIE_ABANDON", 30f, 50f, 0, 1, 1, joaat("BLIP_STYLE_COMPANION"), 1))
			{
				if (!MAP::DOES_BLIP_EXIST(iLocal_309[6]))
				{
					iLocal_309[6] = MAP::_BLIP_ADD_FOR_COORD(408396114, -766.6113f, -1263.211f, 43.0245f);
				}
				if (MAP::DOES_BLIP_EXIST(iLocal_309[6]))
				{
					return true;
				}
			}
			else
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_309[6]))
				{
					MAP::REMOVE_BLIP(&(iLocal_309[6]));
				}
				if (!MAP::DOES_BLIP_EXIST(iLocal_309[6]))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

void func_1279(var uParam0)
{
	switch (iLocal_490)
	{
		case 0:
			if (ENTITY::IS_ENTITY_DEAD(Local_100[4 /*4*/]))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_463[4], "PL_BOUNTY_DEAD");
				if (ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_463[4], "PL_BOUNTY_DEAD"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_463[4], "PL_BOUNTY_DEAD", true);
					iLocal_490++;
				}
			}
			else
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_463[4], "PL_BOUNTY_ALIVE");
				if (ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_463[4], "PL_BOUNTY_ALIVE"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_463[4], "PL_BOUNTY_ALIVE", true);
					iLocal_490++;
				}
			}
			break;
		case 1:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_463[4], "JOHN", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_463[4], "U_M_O_BLWPOLICECHIEF_01", iLocal_307, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_463[4], "MrsAdler", Local_87[0 /*4*/], 0);
			iLocal_490++;
			break;
		case 2:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Local_87[0 /*4*/], Local_14.f_23, true, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(uLocal_463[4], "b_breakout", true, false);
				ANIMSCENE::START_ANIM_SCENE(uLocal_463[4]);
				iLocal_490++;
			}
			break;
		case 3:
			ANIMSCENE::SET_ANIM_SCENE_BOOL(uLocal_463[4], "b_breakout", false, false);
			iLocal_490++;
			break;
		case 4:
			break;
	}
}

void func_1281(var uParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = __LIB_5__::func_475(uParam0);
	if (__LIB_5__::func_279(uParam0, __LIB_4__::func_939(uParam0)) <= 3)
	{
		iVar0 = __LIB_4__::func_939(uParam0);
	}
	Var1 = { __LIB_5__::func_299(uParam0, iVar0) };
	__LIB_14__::func_339(&(uParam0->f_10792), Var1, __LIB_0__::func_81(&(uParam0->f_10792)));
}

bool func_1285(var uParam0, bool bParam1)
{
	func_832(uParam0);
	if (((bParam1 && __LIB_4__::func_576(&(uParam0->f_10792)) != 11) && !__LIB_4__::func_562(&(uParam0->f_10792), 131072)) && !__LIB_4__::func_562(&(uParam0->f_10792), 32768))
	{
		return false;
	}
	return __LIB_4__::func_581(&(uParam0->f_10792));
}

void func_1287(var uParam0)
{
	switch (__LIB_4__::func_979(uParam0))
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
	}
}

void func_1292()
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
	iVar0 = func_1756(6291456, 0);
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

int func_1316(var uParam0, int iParam1, int iParam2)
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
		return func_1316(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_1347(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
				func_828(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

void func_1348(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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
	func_1777(uParam0, iParam1, iParam2, __LIB_1__::func_464(iParam2, 0));
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

bool func_1388(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	__LIB_5__::func_68(uParam4, &uParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		__LIB_9__::func_250(uParam4);
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
					__LIB_8__::func_938(uParam4, &uParam0, uParam5);
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
				if (__LIB_8__::func_930(uParam4, &uParam0, 1, 1))
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
						__LIB_8__::func_938(uParam4, &uParam0, uParam5);
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
			func_370(uParam4);
			if (__LIB_4__::func_584(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_797);
			}
			__LIB_5__::func_265(uParam5);
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_804, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804) || __LIB_0__::func_84(uParam4, 512)))
			{
				if (!__LIB_0__::func_84(uParam4, 1024) && __LIB_5__::func_448(uParam4, 1))
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
				__LIB_9__::func_250(uParam4);
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
				__LIB_8__::func_942(uParam4);
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
				__LIB_8__::func_942(uParam4);
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

int func_1396(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
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
				iVar0 = func_1876(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, fParam12, bParam7, bParam15, bParam16, iParam17);
			}
			else
			{
				*iParam0 = 1;
				return 0;
			}
		}
		else
		{
			*iParam0 = 1;
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && __LIB_0__::func_272(iVar0, 0))
	{
		*iParam0 = 2;
		Global_1360165[iParam1 /*1157*/].f_70.f_2 = 0;
		__LIB_0__::func_834(iParam1, iVar0);
		__LIB_1__::func_434(iParam1, bParam13, bParam14, 1);
		return iVar0;
	}
	else
	{
		*iParam0 = 0;
		return 0;
	}
	return 0;
}

void func_1414(var uParam0)
{
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, 1) && !__LIB_5__::func_52(uParam0))
	{
		__LIB_5__::func_505(uParam0, "SAD5_WANTED", "", 1, 0);
	}
	if (__LIB_0__::func_75(&(vLocal_345[1 /*3*/])))
	{
		if (__LIB_0__::func_265(&(vLocal_345[1 /*3*/])) > 2f)
		{
			if (__LIB_4__::func_939(uParam0) == iLocal_77)
			{
				__LIB_5__::func_505(uParam0, "SAD5_WANTED", "", 1, 0);
			}
			else if (!__LIB_5__::func_463())
			{
				__LIB_5__::func_505(uParam0, "SAD5_P_ALERT", "", 1, 0);
			}
		}
	}
	if (__LIB_4__::func_939(uParam0) == iLocal_73 || __LIB_4__::func_939(uParam0) == iLocal_74)
	{
		if (func_1696(&Local_100, 5, 0, 0) || PED::IS_PED_SHOOTING(Global_35))
		{
			if (PED::IS_TRACKED_PED_VISIBLE(Local_100[0 /*4*/]) || func_1880(&Local_100, 5, 0, 0))
			{
				__LIB_1__::func_283(&(vLocal_345[1 /*3*/]), 0);
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_463[1], false))
				{
					ANIMSCENE::ABORT_ANIM_SCENE(uLocal_463[1], false);
					func_1170(uParam0, "SAD5_FAIL_A", 0);
				}
			}
		}
	}
	if (__LIB_4__::func_939(uParam0) == iLocal_77)
	{
		if (func_1160(1073741824 /* Float: 2f */) && (ENTITY::IS_ENTITY_DEAD(Local_100[4 /*4*/]) || PED::IS_PED_FATALLY_INJURED(Local_100[4 /*4*/])))
		{
			__LIB_1__::func_283(&(vLocal_345[1 /*3*/]), 0);
		}
	}
}

void func_1415(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_4__::func_939(uParam0);
	if (iVar0 == iLocal_72 || iVar0 == iLocal_73)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(uLocal_339[0]))
		{
			uLocal_339[0] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -3201.827f, -2540.255f, 66.5733f, 0f, 0f, 0f, 2.816432f, 1.419679f, 1f);
		}
	}
	else if (iVar0 == iLocal_74 || iVar0 == iLocal_75)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(uLocal_339[1]))
		{
			uLocal_339[1] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -2738.36f, -2420.315f, 72.06582f, 0f, 0f, -29.52003f, 1.416714f, 1.59991f, 1f);
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_344))
		{
			iLocal_344 = VOLUME::_CREATE_VOLUME_BOX(-2738.364f, -2420.308f, 71.5254f, 0f, 0f, 0f, 2.832924f, 2.732678f, 1.633567f);
			TASK::_0xEB2ED1DC3AEC0654(iLocal_344, 1, 1, 1, 1);
		}
	}
}

void func_1416(var uParam0)
{
	var uVar0;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	iVar16 = __LIB_4__::func_939(uParam0);
	iVar17 = __LIB_5__::func_24(iVar16);
	iVar18 = __LIB_5__::func_279(uParam0, iVar16);
	if (uParam0->f_8269.f_2504 > 0)
	{
		iVar19 = 0;
		while (iVar19 < uParam0->f_8269.f_2504)
		{
			if (__LIB_0__::func_755(&(uParam0->f_8269[iVar19 /*16*/]), 1048576))
			{
				if (__LIB_5__::func_583(uParam0, &(uParam0->f_8269[iVar19 /*16*/]), iVar16, iVar17, iVar18))
				{
					__LIB_4__::func_972(&(uParam0->f_8269[iVar19 /*16*/]));
				}
				else if (__LIB_5__::func_584(uParam0, &(uParam0->f_8269[iVar19 /*16*/]), iVar16, iVar17, iVar18))
				{
					__LIB_5__::func_29(&(uParam0->f_8269[iVar19 /*16*/]));
					if (iVar19 < (uParam0->f_8269.f_2504 - 1))
					{
						MISC::_COPY_MEMORY(&(uParam0->f_8269[iVar19 /*16*/]), &(uParam0->f_8269[(uParam0->f_8269.f_2504 - 1) /*16*/]), 16);
						MISC::_COPY_MEMORY(&(uParam0->f_8269[uParam0->f_8269.f_2504 /*16*/]), &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						MISC::_COPY_MEMORY(&(uParam0->f_8269[iVar19 /*16*/]), &uVar0, 16);
					}
					uParam0->f_8269.f_2504 = (uParam0->f_8269.f_2504 - 1);
				}
			}
			iVar19++;
		}
	}
	if (uParam0->f_8269.f_2505 > 0)
	{
		iVar19 = 0;
		while (iVar19 < uParam0->f_8269.f_2505)
		{
			if (__LIB_0__::func_755(&(uParam0->f_8269.f_641[iVar19 /*16*/]), 1048576))
			{
				if (__LIB_5__::func_489(uParam0, &(uParam0->f_8269.f_641[iVar19 /*16*/]), iVar16, iVar17, iVar18, 1))
				{
					__LIB_4__::func_990(&(uParam0->f_8269.f_641[iVar19 /*16*/]));
					if (iVar19 < (uParam0->f_8269.f_2505 - 1))
					{
						MISC::_COPY_MEMORY(&(uParam0->f_8269.f_641[iVar19 /*16*/]), &(uParam0->f_8269.f_641[(uParam0->f_8269.f_2505 - 1) /*16*/]), 16);
						MISC::_COPY_MEMORY(&(uParam0->f_8269.f_641[(uParam0->f_8269.f_2505 - 1) /*16*/]), &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						MISC::_COPY_MEMORY(&(uParam0->f_8269.f_641[iVar19 /*16*/]), &uVar0, 16);
					}
					uParam0->f_8269.f_2505 = (uParam0->f_8269.f_2505 - 1);
				}
			}
			iVar19++;
		}
	}
	if (uParam0->f_8269.f_2506 > 0)
	{
		iVar19 = 0;
		while (iVar19 < uParam0->f_8269.f_2506)
		{
			if (__LIB_0__::func_755(&(uParam0->f_8269.f_1282[iVar19 /*16*/]), 1048576))
			{
				if (__LIB_5__::func_489(uParam0, &(uParam0->f_8269.f_1282[iVar19 /*16*/]), iVar16, iVar17, iVar18, 0))
				{
					if (__LIB_1__::func_388(&(uParam0->f_8269.f_1282[iVar19 /*16*/]), 1))
					{
						if (__LIB_0__::func_755(&(uParam0->f_8269.f_1282[iVar19 /*16*/]), 4))
						{
							__LIB_4__::func_991(&(uParam0->f_8269));
						}
						if (iVar19 < (uParam0->f_8269.f_2506 - 1))
						{
							MISC::_COPY_MEMORY(&(uParam0->f_8269.f_1282[iVar19 /*16*/]), &(uParam0->f_8269.f_1282[(uParam0->f_8269.f_2506 - 1) /*16*/]), 16);
							MISC::_COPY_MEMORY(&(uParam0->f_8269.f_1282[(uParam0->f_8269.f_2506 - 1) /*16*/]), &uVar0, 16);
							iVar19 = (iVar19 - 1);
						}
						else
						{
							MISC::_COPY_MEMORY(&(uParam0->f_8269.f_1282[iVar19 /*16*/]), &uVar0, 16);
						}
						uParam0->f_8269.f_2506 = (uParam0->f_8269.f_2506 - 1);
					}
				}
			}
			iVar19++;
		}
	}
	if (uParam0->f_8269.f_2507 > 0)
	{
		iVar19 = 0;
		while (iVar19 < uParam0->f_8269.f_2507)
		{
			if (__LIB_0__::func_755(&(uParam0->f_8269.f_2243[iVar19 /*16*/]), 1048576))
			{
				if (__LIB_5__::func_583(uParam0, &(uParam0->f_8269.f_2243[iVar19 /*16*/]), iVar16, iVar17, iVar18))
				{
					func_1886(uParam0, &(uParam0->f_8269.f_2243[iVar19 /*16*/]), 1);
					__LIB_0__::func_324(&(uParam0->f_8269.f_2243[iVar19 /*16*/]), 1);
				}
				else if (__LIB_5__::func_584(uParam0, &(uParam0->f_8269.f_2243[iVar19 /*16*/]), iVar16, iVar17, iVar18))
				{
					func_1886(uParam0, &(uParam0->f_8269.f_2243[iVar19 /*16*/]), 0);
					__LIB_0__::func_324(&(uParam0->f_8269.f_2243[iVar19 /*16*/]), 2);
					if (iVar19 < (uParam0->f_8269.f_2507 - 1))
					{
						MISC::_COPY_MEMORY(&(uParam0->f_8269.f_2243[iVar19 /*16*/]), &(uParam0->f_8269.f_2243[iVar19 + 1 /*16*/]), 16);
						MISC::_COPY_MEMORY(&(uParam0->f_8269.f_2243[iVar19 + 1 /*16*/]), &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						MISC::_COPY_MEMORY(&(uParam0->f_8269.f_2243[iVar19 /*16*/]), &uVar0, 16);
					}
					uParam0->f_8269.f_2507 = (uParam0->f_8269.f_2507 - 1);
				}
			}
			iVar19++;
		}
	}
}

void func_1426(var uParam0)
{
	struct<8> Var0;
	func_1893(uParam0);
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

void func_1584(int iParam0)
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
	func_624(iParam0, 1, 1, -142743235, 1);
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
		func_624(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_1589(struct<6> Param0)
{
	if (!func_2014(Param0.f_4, 1))
	{
	}
	if (!func_2014(Param0, 1))
	{
	}
	if (!func_2014(Param0.f_2, 1))
	{
	}
	if (!func_2014(Param0.f_5, 1))
	{
	}
	if (!func_2014(Param0.f_3, 1))
	{
	}
	if (!func_2014(Param0.f_1, 1))
	{
	}
}

int func_1621(int iParam0)
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
			break;
		case 10:
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
			break;
		case 11:
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
			break;
		case 12:
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
			break;
		case 15:
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
			break;
		case 13:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GAPTOOTH_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, -5420f, -3447.5f, 150f, 0f, 0f, 175f, 300f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5837.5f, -3530f, 150f, 0f, 0f, -32f, 1000f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -6142.5f, -3665f, 150f, 0f, 0f, -8f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5747.5f, -2905f, 150f, 0f, 0f, 136.5f, 1300f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5407.5f, -2487.5f, 150f, 0f, 0f, -148f, 550f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5232.5f, -2825f, 150f, 0f, 0f, -178f, 400f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5667.5f, -2040f, 150f, 0f, 0f, 175f, 1100f, 800f, 700f);
			break;
		case 16:
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
			break;
		case 14:
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
bool func_1622(int iParam0)
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

void func_1663(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6)
{
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, false, true);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam1, vParam2, fParam5, true, false, true);
	ENTITY::_0x9587913B9E772D29(iParam1, 1);
	if (!PED::IS_PED_ON_MOUNT(iParam0))
	{
		PED::_SET_PED_ON_MOUNT(iParam0, iParam1, -1, true);
	}
	PED::FORCE_PED_MOTION_STATE(iParam1, iParam6, false, 0, false);
	PED::_0x2208438012482A1A(iParam1, true, true);
	WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), true, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), true, 1, false, false);
}

bool func_1667(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iLocal_498 == MISC::GET_FRAME_COUNT())
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_290[iVar0]))
		{
			iLocal_290[iVar0] = __LIB_1__::func_545(iLocal_79, func_1669(2, iVar0), func_1670(2, iVar0), 1, 1, 0, 1, 1, 0, 0, 0, 0, 0);
			__LIB_1__::func_991(iLocal_290[iVar0], 0);
			iLocal_498 = MISC::GET_FRAME_COUNT();
		}
		if (iVar0 == 3)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1668(var uParam0)
{
	int iVar0;
	if (((!PED::_0xA0BC8FAED8CFEB3C(iLocal_290[0]) || !PED::_0xA0BC8FAED8CFEB3C(iLocal_290[1])) || !PED::_0xA0BC8FAED8CFEB3C(iLocal_290[2])) || !PED::_0xA0BC8FAED8CFEB3C(iLocal_290[3]))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iLocal_498 == MISC::GET_FRAME_COUNT())
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_100[iVar0 /*4*/]))
		{
			Local_100[iVar0 /*4*/] = __LIB_1__::func_545(iLocal_80, func_1669(3, iVar0), func_1670(3, iVar0), 1, 1, 0, 1, 1, 0, 0, 0, 0, 0);
			iLocal_498 = MISC::GET_FRAME_COUNT();
			ENTITY::_0x18FF3110CF47115D(Local_100[iVar0 /*4*/], 2, 0);
			PED::_SET_PED_ON_MOUNT(Local_100[iVar0 /*4*/], iLocal_290[iVar0], -1, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_100[iVar0 /*4*/], joaat("REL_PLAYER_ENEMY"));
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_100[iVar0 /*4*/], true);
			__LIB_4__::func_7(Local_100[iVar0 /*4*/], joaat("WEAPON_REPEATER_CARBINE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			__LIB_5__::func_510(Local_100[iVar0 /*4*/], iLocal_338);
			PED::SET_PED_CONFIG_FLAG(Local_100[iVar0 /*4*/], 307, true);
			if (iVar0 == 0)
			{
				PED::_SET_PED_BODY_COMPONENT(Local_100[iVar0 /*4*/], iLocal_85);
				PED::_UPDATE_PED_VARIATION(Local_100[iVar0 /*4*/], true, true, true, true, false);
				PED::SET_PED_NAME_DEBUG(Local_100[iVar0 /*4*/], "POSSE_PED_A");
				PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(Local_100[iVar0 /*4*/], joaat("SAD5_LANGTON"));
			}
			if (iVar0 == 1)
			{
				PED::_SET_PED_BODY_COMPONENT(Local_100[iVar0 /*4*/], iLocal_82);
				PED::_UPDATE_PED_VARIATION(Local_100[iVar0 /*4*/], true, true, true, true, false);
				PED::SET_PED_NAME_DEBUG(Local_100[iVar0 /*4*/], "POSSE_PED_B");
			}
			if (iVar0 == 2)
			{
				PED::_SET_PED_BODY_COMPONENT(Local_100[iVar0 /*4*/], iLocal_83);
				PED::_UPDATE_PED_VARIATION(Local_100[iVar0 /*4*/], true, true, true, true, false);
				PED::SET_PED_NAME_DEBUG(Local_100[iVar0 /*4*/], "POSSE_PED_C");
			}
			if (iVar0 == 3)
			{
				PED::_SET_PED_BODY_COMPONENT(Local_100[iVar0 /*4*/], iLocal_84);
				PED::_UPDATE_PED_VARIATION(Local_100[iVar0 /*4*/], true, true, true, true, false);
				PED::SET_PED_NAME_DEBUG(Local_100[iVar0 /*4*/], "POSSE_PED_D");
			}
		}
		if (iVar0 == 3)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

Vector3 func_1669(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -804.4f, -1317.086f, 42.5675f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -829.8738f, -1329.84f, 42.5455f;
				case 1:
					return -2772.807f, -2553.204f, 61.4095f;
				case 2:
					return -3185.018f, -2540.273f, 67.6244f;
				case 3:
					return -3076.339f, -2491.332f, 73.4423f;
				case 4:
					return -2739.418f, -2427.205f, 72.2018f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -3637.739f, -2603.658f, -14.7448f;
				case 1:
					return -3638.21f, -2606.452f, -14.7323f;
				case 2:
					return -3639.68f, -2605.414f, -14.7324f;
				case 3:
					return -3639.337f, -2607.912f, -14.7324f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -3672.251f, -2622.207f, -14.7598f;
				case 1:
					return -3672.639f, -2623.073f, -14.7599f;
				case 2:
					return -3674.717f, -2623.387f, -14.7659f;
				case 3:
					return -3674.657f, -2622.373f, -14.7757f;
				case 4:
					return -2731.189f, -2368.453f, 44.1135f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -2803.602f, -2443.715f, 51.8615f;
				case 1:
					return -2818.486f, -2387.059f, 55.1414f;
				case 2:
					return -2834.32f, -2377.921f, 55.31f;
				case 3:
					return -2803.515f, -2446.384f, 51.9242f;
				case 4:
					return -2805.151f, -2446.439f, 51.9646f;
				case 5:
					return -2810.688f, -2347.888f, 57.8118f;
				case 6:
					return -2803.573f, -2321.987f, 70.0705f;
				case 7:
					return -2806.094f, -2321.589f, 69.9537f;
				case 8:
					return -2759.115f, -2316.725f, 71.5484f;
				case 9:
					return -2659.276f, -2414.809f, 71.7495f;
				case 10:
					return -2659.142f, -2416.71f, 72.4382f;
				case 11:
					return -2663.314f, -2410.905f, 70.403f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -2811.518f, -2345.702f, 57.8195f;
				case 1:
					return -2827.887f, -2447.925f, 51.212f;
				case 2:
					return -2811.156f, -2348.997f, 57.9023f;
				case 3:
					return -2852.976f, -2428.146f, 56.6768f;
				case 4:
					return -2829.886f, -2458.003f, 49.9732f;
				case 5:
					return -2813.164f, -2483.683f, 50.894f;
				case 6:
					return -2853.982f, -2488.55f, 48.1898f;
				case 7:
					return -2781.822f, -2484.838f, 50.1869f;
				case 8:
					return -2784.931f, -2484.93f, 50.2454f;
				case 9:
					return -2783.447f, -2489.717f, 49.2431f;
				case 10:
					return -2835.837f, -2499.825f, 48.8072f;
				case 11:
					return -2841.227f, -2474.958f, 49.5629f;
				case 12:
					return -2904.827f, -2453.709f, 47.0458f;
				case 13:
					return -2905.641f, -2450.431f, 46.929f;
				case 14:
					return -2908.2f, -2453.025f, 46.7698f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -2784.829f, -2501.164f, 47.4407f;
				case 1:
					return -2784.484f, -2492.849f, 48.7047f;
				case 2:
					return -2784.854f, -2482.502f, 50.6915f;
				case 3:
					return -2915.652f, -2457.63f, 46.4288f;
				case 4:
					return -2910.354f, -2452.972f, 46.7438f;
				case 5:
					return -2903.286f, -2448.942f, 47.1102f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -2651.684f, -2429.233f, 75.0642f;
				case 1:
					return -2652.553f, -2428.068f, 75.0816f;
				case 2:
					return -2650.851f, -2428.632f, 74.8443f;
				case 3:
					return -2785.762f, -2377.124f, 42.983f;
				case 4:
					return -2786.009f, -2377.932f, 43.4058f;
				case 5:
					return -2691.395f, -2300.589f, 81.2545f;
				case 6:
					return -2718.846f, -2305.587f, 78.4577f;
				case 7:
					return -2691.22f, -2301.781f, 81.1524f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return -2820.114f, -2324.348f, 58.8391f;
				case 1:
					return -2821.844f, -2324.245f, 58.6022f;
				case 2:
					return -2820.255f, -2322.618f, 58.8501f;
				case 3:
					return -2822.023f, -2322.746f, 58.6171f;
				case 4:
					return -2735.197f, -2312.251f, 75.3492f;
				case 5:
					return -2747.16f, -2312.18f, 73.0341f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return -2735.486f, -2332.609f, 57.4138f;
				case 1:
					return -2705.319f, -2321.769f, 59.8954f;
				case 2:
					return -2716.572f, -2331.323f, 57.423f;
				case 3:
					return -2687.722f, -2344.553f, 57.7585f;
				case 4:
					return -2680.414f, -2365.808f, 53.3978f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return -2824.209f, -2357.82f, 41.6231f;
				case 1:
					return -2825.983f, -2353.122f, 42.6995f;
				case 2:
					return -2829.274f, -2353.754f, 41.7281f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_1670(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -98.64f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -84.96f;
				case 1:
					return 105.3268f;
				case 2:
					return 78.71f;
				case 3:
					return 51.1825f;
				case 4:
					return 348.8281f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -34.56f;
				case 1:
					return -43.92f;
				case 2:
					return -34.56f;
				case 3:
					return 314.64f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 275.76f;
				case 1:
					return 273.1507f;
				case 2:
					return 273.1507f;
				case 3:
					return 273.1507f;
				case 4:
					return 95.5804f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 5.2532f;
				case 1:
					return -25.92f;
				case 2:
					return -95.04f;
				case 3:
					return 25.92f;
				case 4:
					return -25.92f;
				case 5:
					return -15.84f;
				case 6:
					return -195.84f;
				case 7:
					return -180f;
				case 8:
					return 151.2f;
				case 9:
					return 8.9483f;
				case 10:
					return 8.9483f;
				case 11:
					return 8.9483f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -53.28f;
				case 1:
					return 303.84f;
				case 2:
					return -20.88f;
				case 3:
					return 8.64f;
				case 4:
					return 15.84f;
				case 5:
					return 91.2319f;
				case 6:
					return 234.72f;
				case 7:
					return 177.12f;
				case 8:
					return 187.92f;
				case 9:
					return 177.12f;
				case 10:
					return 102.96f;
				case 11:
					return 164.88f;
				case 12:
					return 105.84f;
				case 13:
					return -255.6f;
				case 14:
					return -249.12f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 182.88f;
				case 1:
					return 187.2f;
				case 2:
					return 182.88f;
				case 3:
					return 122.4f;
				case 4:
					return 125.28f;
				case 5:
					return 125.28f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 210.24f;
				case 1:
					return 219.6f;
				case 2:
					return 171.36f;
				case 3:
					return -118.8f;
				case 4:
					return 296.1602f;
				case 5:
					return 180.72f;
				case 6:
					return 177.84f;
				case 7:
					return 177.84f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return -177.84f;
				case 1:
					return -180.72f;
				case 2:
					return 180f;
				case 3:
					return 186.48f;
				case 4:
					return 148.32f;
				case 5:
					return 189.36f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 116.64f;
				case 1:
					return 120.24f;
				case 2:
					return 74.16f;
				case 3:
					return 264.7783f;
				case 4:
					return 264.7783f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return -147.6f;
				case 1:
					return 212.4f;
				case 2:
					return 195.12f;
			}
			break;
	}
	return 0f;
}

void func_1684(var uParam0)
{
	switch (iLocal_493)
	{
		case 0:
			if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
			{
				if (__LIB_2__::func_0(Local_100[0 /*4*/], 0.3f, 0.7f, 0, 1061158912 /* Float: 0.75f */) && !__LIB_5__::func_463())
				{
					func_1170(uParam0, "SAD5_S2_SEESMTH", 0);
					iLocal_493++;
				}
			}
			else
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_100[0 /*4*/], 0))
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_100[0 /*4*/]) >= 35 && !__LIB_0__::func_27(iLocal_462, 1))
					{
						func_1170(uParam0, "SAD5_S2_OBJ3_B", 0);
						__LIB_1__::func_683(&iLocal_462, 1);
					}
					if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_100[0 /*4*/]) > 50)
					{
						iLocal_493++;
					}
				}
				if (!__LIB_5__::func_463())
				{
					if (__LIB_0__::func_265(&(vLocal_345[0 /*3*/])) > 6f)
					{
						func_1170(uParam0, "SAD5_S2_BINOC", 0);
					}
				}
				else
				{
					__LIB_1__::func_148(&(vLocal_345[0 /*3*/]));
				}
			}
			break;
		case 1:
			if (!__LIB_8__::func_684("SAD5_S2_SEESMTH"))
			{
				__LIB_5__::func_20(0, 0);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_463[1], "PL_E_ACTION", true);
				iLocal_427 = 3;
				if (ENTITY::IS_ENTITY_OCCLUDED(Local_87[2 /*4*/]))
				{
					func_828(Local_87[2 /*4*/], -3188.65f, -2544.531f, 66.7838f, 60.8257f, 34, 1073741824 /* Float: 2f */);
				}
				if (MAP::DOES_BLIP_EXIST(iLocal_309[3]))
				{
					MAP::REMOVE_BLIP(&(iLocal_309[3]));
				}
				if (!MAP::DOES_BLIP_EXIST(iLocal_309[3]))
				{
					iLocal_309[3] = MAP::_BLIP_ADD_FOR_ENTITY(-839369609, Local_100[0 /*4*/]);
					MAP::_BLIP_SET_MODIFIER(iLocal_309[3], -401963276);
				}
				func_2077();
				func_1181(268435456, 1);
				__LIB_5__::func_372(uParam0, 1);
				iLocal_493++;
			}
			break;
		case 2:
			break;
	}
}

struct<4> func_1688(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_1669(iParam0, iParam1) };
	Var0.f_3 = func_1670(iParam0, iParam1);
	return Var0;
}

bool func_1696(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	if (iParam3 == 0)
	{
		iParam3 = (iParam1 - 1);
	}
	iVar0 = iParam2;
	while (iVar0 <= iParam3)
	{
		if (__LIB_2__::func_1((*iParam0)[iVar0 /*4*/], 0, 1))
		{
			if (func_2080((*iParam0)[iVar0 /*4*/], 0, &uLocal_391, &uLocal_419, 0, 0) || __LIB_8__::func_819((*iParam0)[iVar0 /*4*/], &uLocal_391, &uLocal_419, 0))
			{
				if ((*iParam0)[iVar0 /*4*/] == Local_121[3 /*4*/] || (*iParam0)[iVar0 /*4*/] == Local_121[4 /*4*/])
				{
					iLocal_306 = (*iParam0)[iVar0 /*4*/];
					if (!func_1160(8192))
					{
						__LIB_1__::func_148(&(vLocal_345[4 /*3*/]));
						func_1181(8192, 1);
					}
					if (__LIB_0__::func_75(&(vLocal_345[4 /*3*/])) && __LIB_0__::func_265(&(vLocal_345[4 /*3*/])) > 3f)
					{
						if (__LIB_2__::func_1(iLocal_306, 0, 1))
						{
							return true;
						}
					}
					return false;
				}
				else
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_1697()
{
	int iVar0;
	func_828(Local_121[0 /*4*/], func_2082(7, 0), func_2083(7, 0), 2, 1073741824 /* Float: 2f */);
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_121[0 /*4*/], func_2082(7, 0), 2f, 0, 0, 0);
	func_828(Local_121[1 /*4*/], func_2082(7, 1), func_2083(7, 1), 2, 1073741824 /* Float: 2f */);
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_121[1 /*4*/], func_2082(7, 1), 2f, 0, 0, 0);
	func_828(Local_121[2 /*4*/], func_2082(7, 2), func_2083(7, 2), 2, 1073741824 /* Float: 2f */);
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_121[2 /*4*/], func_2082(7, 2), 2f, 0, 0, 0);
	func_828(Local_121[3 /*4*/], func_2082(7, 3), func_2083(7, 3), 2, 1073741824 /* Float: 2f */);
	Local_121[3 /*4*/].f_3 = 1;
	func_828(Local_121[4 /*4*/], func_2082(7, 4), func_2083(7, 4), 2, 1073741824 /* Float: 2f */);
	Local_121[4 /*4*/].f_3 = 1;
	func_828(Local_121[6 /*4*/], func_2082(7, 5), func_2083(7, 5), 2, 1073741824 /* Float: 2f */);
	func_828(Local_121[7 /*4*/], func_2082(7, 6), func_2083(7, 6), 2, 1073741824 /* Float: 2f */);
	func_828(Local_121[8 /*4*/], func_2082(7, 7), func_2083(7, 7), 2, 1073741824 /* Float: 2f */);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_1217(&(Local_121[iVar0 /*4*/]), joaat("BLIP_STYLE_ENEMY"), -1034486097);
		iVar0++;
	}
	func_1181(67108864, 1);
}

bool func_1698(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	if (!__LIB_2__::func_1(Local_269[iVar0 /*4*/], 0, 1))
	{
		return false;
	}
	switch (iVar0)
	{
		case 0:
			TASK::TASK_COMBAT_PED(Local_269[iVar0 /*4*/], Global_35, 0, 0);
			PED::SET_PED_COMBAT_MOVEMENT(Local_269[iVar0 /*4*/], 1);
			PED::SET_PED_COMBAT_RANGE(Local_269[iVar0 /*4*/], 2);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_269[iVar0 /*4*/], -2735.236f, -2332.605f, 57.45842f, 2f, 0, 0, 0);
			break;
		case 1:
			TASK::TASK_COMBAT_PED(Local_269[iVar0 /*4*/], Global_35, 0, 0);
			PED::SET_PED_COMBAT_MOVEMENT(Local_269[iVar0 /*4*/], 1);
			PED::SET_PED_COMBAT_RANGE(Local_269[iVar0 /*4*/], 2);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_269[iVar0 /*4*/], -2705.385f, -2321.831f, 59.8521f, 2f, 0, 0, 0);
			break;
		case 2:
			TASK::TASK_COMBAT_PED(Local_269[iVar0 /*4*/], Global_35, 0, 0);
			PED::SET_PED_COMBAT_MOVEMENT(Local_269[iVar0 /*4*/], 1);
			PED::SET_PED_COMBAT_RANGE(Local_269[iVar0 /*4*/], 2);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_269[iVar0 /*4*/], -2716.425f, -2331.527f, 57.41849f, 2f, 0, 0, 0);
			break;
		case 3:
			TASK::TASK_COMBAT_PED(Local_269[iVar0 /*4*/], Global_35, 0, 0);
			PED::SET_PED_COMBAT_MOVEMENT(Local_269[iVar0 /*4*/], 1);
			PED::SET_PED_COMBAT_RANGE(Local_269[iVar0 /*4*/], 2);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_269[iVar0 /*4*/], -2688.229f, -2344.593f, 57.75985f, 2f, 0, 0, 0);
			break;
		case 4:
			TASK::TASK_COMBAT_PED(Local_269[iVar0 /*4*/], Global_35, 0, 0);
			PED::SET_PED_COMBAT_MOVEMENT(Local_269[iVar0 /*4*/], 1);
			PED::SET_PED_COMBAT_RANGE(Local_269[iVar0 /*4*/], 2);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_269[iVar0 /*4*/], -2680.537f, -2365.332f, 53.5011f, 2f, 0, 0, 0);
			break;
		default:
			break;
	}
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_269[iVar0 /*4*/], 30, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_269[iVar0 /*4*/], 46, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_269[iVar0 /*4*/], 12, true);
	PED::SET_PED_ACCURACY(Local_269[iVar0 /*4*/], 35);
	return true;
}

void func_1699()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_2084(iVar0))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_2085(iVar0))
		{
		}
		iVar0++;
	}
	func_1181(512, 1);
	if (func_1160(512))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_463[3], false))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(uLocal_463[3], "b_loop", true, false);
			ANIMSCENE::ABORT_ANIM_SCENE(uLocal_463[3], true);
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_463[2], false))
		{
			ANIMSCENE::ABORT_ANIM_SCENE(uLocal_463[2], true);
		}
	}
}

void func_1702(int iParam0, vector3 vParam1)
{
	int iVar0;
	ENTITY::SET_ENTITY_VISIBLE(Local_121[iParam0 /*4*/], true);
	ENTITY::SET_ENTITY_INVINCIBLE(Local_121[iParam0 /*4*/], false);
	ENTITY::FREEZE_ENTITY_POSITION(Local_121[iParam0 /*4*/], false);
	PED::SET_PED_COMBAT_MOVEMENT(Local_121[iParam0 /*4*/], 0);
	PED::SET_PED_COMBAT_RANGE(Local_121[iParam0 /*4*/], 2);
	__LIB_2__::func_279(Local_121[iParam0 /*4*/], 1);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vParam1, Global_35, 2f, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
	TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
	__LIB_1__::func_474(Local_121[iParam0 /*4*/], &iVar0, 0, 0, 1, 1);
	func_1217(&(Local_121[iParam0 /*4*/]), joaat("BLIP_STYLE_ENEMY"), -1034486097);
}

void func_1703(int iParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;
	if (__LIB_2__::func_1(Local_121[iParam0 /*4*/], 0, 1))
	{
		PED::SET_PED_COMBAT_MOVEMENT(Local_121[iParam0 /*4*/], 1);
		PED::SET_PED_COMBAT_RANGE(Local_121[iParam0 /*4*/], 3);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_121[iParam0 /*4*/], 30, bParam4);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_121[iParam0 /*4*/], 12, true);
		PED::_0x8ACC0506743A8A5C(Local_121[iParam0 /*4*/], joaat("SCRIPT_STARTOFCOMBAT_COVERINGFIRE"), 1, -1082130432 /* Float: -1f */);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::CLEAR_PED_TASKS(0, true, false);
		TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(0, vParam1, Global_35, 3f, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		__LIB_1__::func_474(Local_121[iParam0 /*4*/], &iVar0, 0, 0, 1, 1);
		func_1217(&(Local_121[iParam0 /*4*/]), joaat("BLIP_STYLE_ENEMY"), -1034486097);
	}
}

bool func_1704()
{
	return __LIB_0__::func_27(uLocal_420, 512);
}

bool func_1705()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_2__::func_1(Local_100[iVar0 /*4*/], 0, 1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_1706(var uParam0)
{
	if (!func_1160(8))
	{
		__LIB_1__::func_573(Local_87[0 /*4*/], "", 3f, 0, 0, 324);
		if (__LIB_9__::func_331(PLAYER::PLAYER_ID(), Local_87[0 /*4*/]))
		{
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_ROB"), true);
			if (!__LIB_0__::func_139(iLocal_431[0]))
			{
				iLocal_431[0] = __LIB_1__::func_877("SAD5_SNEAK", joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				__LIB_9__::func_332(&(iLocal_431[0]), Local_87[0 /*4*/]);
				__LIB_1__::func_522(iLocal_431[0], 14, 1, 1);
			}
			if (!__LIB_0__::func_139(iLocal_431[2]))
			{
				iLocal_431[2] = __LIB_1__::func_877("SAD5_THREATEN", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				__LIB_9__::func_332(&(iLocal_431[2]), Local_87[0 /*4*/]);
				__LIB_1__::func_522(iLocal_431[2], 14, 1, 1);
			}
			if (!__LIB_0__::func_139(iLocal_431[1]))
			{
				iLocal_431[1] = __LIB_1__::func_877("SAD5_SHOOT", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				__LIB_9__::func_332(&(iLocal_431[1]), Local_87[0 /*4*/]);
				__LIB_1__::func_522(iLocal_431[1], 14, 1, 1);
			}
		}
		else
		{
			__LIB_1__::func_748(&(iLocal_431[0]), 1, 1);
			__LIB_1__::func_748(&(iLocal_431[2]), 1, 1);
			__LIB_1__::func_748(&(iLocal_431[1]), 1, 1);
		}
		if (__LIB_1__::func_732(iLocal_431[0], 1) || __LIB_0__::func_27(iLocal_462, 128))
		{
			if (__LIB_5__::func_463())
			{
				__LIB_5__::func_20(0, 0);
			}
			if (__LIB_0__::func_27(iLocal_462, 128))
			{
				func_1170(uParam0, "SAD5_S5_BACKUP", 0);
			}
			iLocal_429 = 6;
			func_1181(8, 1);
			func_1181(16, 1);
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(joaat("INPUT_INTERACT_LOCKON_ROB"), "RDCH31_U_SNEAK");
			__LIB_5__::func_372(uParam0, 1);
		}
		if (__LIB_1__::func_732(iLocal_431[2], 1))
		{
			if (__LIB_5__::func_463())
			{
				__LIB_5__::func_20(0, 0);
			}
			iLocal_429 = 7;
			func_1181(8, 1);
			func_1181(32, 1);
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(joaat("INPUT_INTERACT_LOCKON_POS"), "SAD5_THREATEN");
			__LIB_5__::func_372(uParam0, 1);
		}
		if (__LIB_1__::func_732(iLocal_431[1], 1))
		{
			if (__LIB_5__::func_463())
			{
				__LIB_5__::func_20(0, 0);
			}
			iLocal_429 = 5;
			func_1181(8, 1);
			func_1181(64, 1);
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(joaat("INPUT_INTERACT_LOCKON_NEG"), "SAD5_SHOOT");
			__LIB_10__::func_935(uParam0, Local_87[0 /*4*/], 1);
			__LIB_5__::func_372(uParam0, 2);
		}
	}
	if ((__LIB_1__::func_514(iLocal_431[0], 1) || __LIB_1__::func_514(iLocal_431[2], 1)) || __LIB_1__::func_514(iLocal_431[1], 1))
	{
		__LIB_13__::func_520(&iLocal_431);
	}
}

void func_1707()
{
	struct<2> Var0;
	Var0 = 1;
	Var0.f_1 = joaat("WEAPON_THROWN_THROWING_KNIVES");
	HUD::_0x8A59D44189AF2BC5(&Var0, 1856029758);
	PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("WEAPON_THROWN_THROWING_KNIVES"), 0);
}

void func_1708(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_2))
	{
		__LIB_0__::func_325(&(uParam0->f_2));
	}
}

bool func_1709(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iLocal_498 == MISC::GET_FRAME_COUNT())
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_269[iVar0 /*4*/]))
		{
			Local_269[iVar0 /*4*/] = __LIB_1__::func_545(iLocal_81, func_1669(9, iVar0), func_1670(9, iVar0), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			iLocal_498 = MISC::GET_FRAME_COUNT();
			PED::SET_PED_CONFIG_FLAG(Local_269[iVar0 /*4*/], 307, true);
			ENTITY::_0x18FF3110CF47115D(Local_269[iVar0 /*4*/], 2, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_269[iVar0 /*4*/], joaat("REL_PLAYER_ENEMY"));
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_269[iVar0 /*4*/], true);
			__LIB_4__::func_7(Local_269[iVar0 /*4*/], joaat("WEAPON_REPEATER_CARBINE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			func_1217(&(Local_269[iVar0 /*4*/]), joaat("BLIP_STYLE_ENEMY"), -1034486097);
		}
		if (iVar0 == (5 - 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1710(var uParam0)
{
	int iVar0;
	iLocal_470 = 6;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!__LIB_2__::func_1(Local_231[iVar0 /*4*/], 0, 1))
		{
			iLocal_470 = (iLocal_470 - 1);
		}
		iVar0++;
	}
	switch (iLocal_476)
	{
		case 0:
			if (iLocal_470 < 4)
			{
				iLocal_476++;
			}
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (__LIB_2__::func_1(Local_231[iVar0 /*4*/], 0, 1))
				{
					if (iVar0 != 4 || iVar0 != 5)
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(Local_231[iVar0 /*4*/], false);
						PED::SET_PED_COMBAT_MOVEMENT(Local_231[iVar0 /*4*/], 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_231[iVar0 /*4*/], 50, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_231[iVar0 /*4*/], 42, true);
					}
					if (MAP::DOES_BLIP_EXIST(Local_231[iVar0 /*4*/].f_2))
					{
						MAP::_BLIP_SET_MODIFIER(Local_231[iVar0 /*4*/].f_2, 942020339);
					}
				}
				iVar0++;
			}
			if (__LIB_2__::func_1(Local_231[1 /*4*/], 0, 1))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_231[1 /*4*/], -2744.598f, -2326.523f, 58.6071f, 2.5f, 0, 0, 0);
			}
			if (__LIB_2__::func_1(Local_121[5 /*4*/], 0, 1))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_121[5 /*4*/], -2731.12f, -2325.577f, 58.4492f, 3f, 1, 0, 0);
			}
			if (__LIB_2__::func_1(Local_231[4 /*4*/], 0, 1))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_231[4 /*4*/], true);
				TASK::TASK_COMBAT_PED(Local_231[4 /*4*/], Global_35, 0, 0);
				PED::SET_PED_COMBAT_MOVEMENT(Local_231[4 /*4*/], 1);
				PED::SET_PED_COMBAT_RANGE(Local_231[4 /*4*/], 2);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_231[4 /*4*/], -2755.827f, -2321.74f, 71.32714f, 2.5f, 0, 0, 0);
				__LIB_2__::func_279(Local_231[4 /*4*/], 1);
			}
			if (__LIB_2__::func_1(Local_231[5 /*4*/], 0, 1))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_231[5 /*4*/], true);
				TASK::TASK_COMBAT_PED(Local_231[5 /*4*/], Global_35, 0, 0);
				PED::SET_PED_COMBAT_MOVEMENT(Local_231[5 /*4*/], 1);
				PED::SET_PED_COMBAT_RANGE(Local_231[5 /*4*/], 2);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_231[5 /*4*/], -2744.87f, -2318.364f, 72.86698f, 2.5f, 0, 0, 0);
				__LIB_2__::func_279(Local_231[5 /*4*/], 1);
			}
			iLocal_476++;
			break;
		case 2:
			func_2092(uParam0);
			if (iLocal_470 < 2)
			{
				iLocal_476++;
				if (__LIB_2__::func_1(Local_231[1 /*4*/], 0, 1))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_231[1 /*4*/], -2731.096f, -2332.546f, 57.48946f, 2.5f, 0, 0, 0);
				}
			}
			break;
		case 3:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (__LIB_2__::func_1(Local_231[iVar0 /*4*/], 0, 1))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_231[iVar0 /*4*/], 0, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_231[iVar0 /*4*/], 28, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_231[iVar0 /*4*/], 35, true);
					iLocal_476++;
				}
				iVar0++;
			}
			break;
		case 4:
			break;
	}
}

void func_1711(var uParam0)
{
	int iVar0;
	iLocal_473 = 5;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!__LIB_2__::func_1(Local_269[iVar0 /*4*/], 0, 1))
		{
			iLocal_473 = (iLocal_473 - 1);
		}
		iVar0++;
	}
	switch (iLocal_478)
	{
		case 0:
			if (iLocal_473 < 3)
			{
				iLocal_478++;
			}
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (__LIB_2__::func_1(Local_269[iVar0 /*4*/], 0, 1))
				{
					PED::REMOVE_PED_DEFENSIVE_AREA(Local_269[iVar0 /*4*/], false);
					PED::SET_PED_COMBAT_MOVEMENT(Local_269[iVar0 /*4*/], 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_269[iVar0 /*4*/], 0, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_269[iVar0 /*4*/], 50, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_269[iVar0 /*4*/], 42, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_269[iVar0 /*4*/], 35, true);
					PED::SET_PED_COMBAT_RANGE(Local_269[iVar0 /*4*/], 0);
					if (MAP::DOES_BLIP_EXIST(Local_269[iVar0 /*4*/].f_2))
					{
						MAP::_BLIP_SET_MODIFIER(Local_269[iVar0 /*4*/].f_2, 942020339);
					}
				}
				iVar0++;
			}
			iLocal_478++;
			break;
		case 2:
			func_2092(uParam0);
			break;
	}
}

void func_1712(var uParam0)
{
	int iVar0;
	iLocal_469 = 12;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!__LIB_2__::func_1(Local_121[iVar0 /*4*/], 0, 1))
		{
			iLocal_469 = (iLocal_469 - 1);
		}
		iVar0++;
	}
	switch (iLocal_475)
	{
		case 0:
			if (iLocal_469 < 3 || iLocal_424 == 21)
			{
				iLocal_475++;
			}
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (__LIB_2__::func_1(Local_121[iVar0 /*4*/], 0, 1))
				{
					if ((iVar0 != 6 || iVar0 != 7) || iVar0 != 8)
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(Local_121[iVar0 /*4*/], false);
						PED::SET_PED_COMBAT_MOVEMENT(Local_121[iVar0 /*4*/], 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_121[iVar0 /*4*/], 50, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_121[iVar0 /*4*/], 42, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_121[iVar0 /*4*/], 0, false);
					}
					if (MAP::DOES_BLIP_EXIST(Local_121[iVar0 /*4*/].f_2))
					{
						MAP::_BLIP_SET_MODIFIER(Local_121[iVar0 /*4*/].f_2, 942020339);
					}
				}
				iVar0++;
			}
			if (!func_1160(16))
			{
				if (__LIB_2__::func_1(Local_121[3 /*4*/], 0, 1))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_121[3 /*4*/], -2703.78f, -2322.803f, 59.58163f, 2.5f, 0, 0, 0);
				}
				if (__LIB_2__::func_1(Local_121[4 /*4*/], 0, 1))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_121[4 /*4*/], -2708.187f, -2330.17f, 57.92666f, 2.5f, 0, 0, 0);
				}
			}
			iLocal_475++;
			break;
		case 2:
			func_2092(uParam0);
			break;
	}
}

void func_1713(var uParam0)
{
	switch (iLocal_424)
	{
		case 0:
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_87[0 /*4*/], -2738.204f, -2421.442f, 72.3337f, 2f, 0, 0, 0);
			iLocal_424 = 1;
			__LIB_1__::func_148(&(vLocal_345[6 /*3*/]));
			__LIB_1__::func_148(&(vLocal_345[2 /*3*/]));
			break;
		case 1:
			if ((func_1705() || func_2093() == 1) || __LIB_0__::func_265(&(vLocal_345[6 /*3*/])) > 30f)
			{
				if (Local_87[0 /*4*/].f_3 == 0)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_87[0 /*4*/], 30, false);
					Local_87[0 /*4*/].f_3 = 1;
				}
				if (func_2094() || func_2095())
				{
					__LIB_5__::func_20(1, 0);
					func_2096(uParam0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_87[0 /*4*/], -2731.083f, -2430.762f, 73.4f, 1.5f, 1, 0, 0);
					__LIB_5__::func_372(uParam0, 1);
					__LIB_5__::func_590(uParam0, "SAD5_OBJ3", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_10__::func_930(uParam0, Local_87[0 /*4*/], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
					iLocal_424 = 2;
					__LIB_1__::func_148(&(vLocal_345[6 /*3*/]));
					Local_87[0 /*4*/].f_3 = 0;
				}
				if (func_2097())
				{
					__LIB_5__::func_372(uParam0, 1);
					__LIB_10__::func_930(uParam0, Local_87[0 /*4*/], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
					iLocal_424 = 2;
					func_2098(uParam0);
					Local_87[0 /*4*/].f_3 = 0;
					__LIB_1__::func_148(&(vLocal_345[6 /*3*/]));
				}
			}
			else
			{
				switch (iLocal_501)
				{
					case 0:
						if (!__LIB_5__::func_463() && __LIB_0__::func_265(&(vLocal_345[2 /*3*/])) > 10f)
						{
							if (!__LIB_0__::func_27(iLocal_462, 65536))
							{
								func_1170(uParam0, "SAD5_S7_DOWN", 0);
								__LIB_1__::func_683(&iLocal_462, 65536);
								iLocal_501++;
							}
							else
							{
								func_1170(uParam0, "SAD5_S5_SHT_SAD", 0);
								iLocal_501++;
							}
						}
						break;
					case 1:
						if (!__LIB_8__::func_684("SAD5_S5_SHT_SAD"))
						{
							func_1170(uParam0, "SAD5_S6_AGREE", 0);
							__LIB_1__::func_148(&(vLocal_345[2 /*3*/]));
							iLocal_501 = 0;
						}
						break;
				}
			}
			break;
		case 2:
			if ((func_2097() || func_2095()) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_32, true, 0))
			{
				__LIB_1__::func_148(&(vLocal_345[6 /*3*/]));
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_87[0 /*4*/], -2698.901f, -2432.448f, 76.8211f, 2f, 1, 0, 0);
				iLocal_424 = 3;
				__LIB_5__::func_20(1, 1);
				func_2098(uParam0);
			}
			break;
		case 3:
			if (func_2097() || func_2095())
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_87[0 /*4*/], -2669.519f, -2428.529f, 77.3989f, 2f, 1, 0, 0);
				iLocal_424 = 4;
				__LIB_1__::func_148(&(vLocal_345[6 /*3*/]));
				func_2098(uParam0);
				Local_87[0 /*4*/].f_3 = 0;
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_87[0 /*4*/], 30, false);
			}
			break;
		case 4:
			if (Local_87[0 /*4*/].f_3 == 0)
			{
				if (!__LIB_2__::func_1(Local_121[10 /*4*/], 0, 1))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_87[0 /*4*/], -2658.611f, -2426.031f, 76.00927f, 2f, 1, 0, 0);
					Local_87[0 /*4*/].f_3 = 1;
					Local_121[9 /*4*/].f_3 = 0;
				}
				else if (__LIB_0__::func_665(Local_121[10 /*4*/], Local_87[0 /*4*/], 1, 1) < 5f)
				{
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_121[10 /*4*/], false);
				}
			}
			else
			{
				if ((__LIB_2__::func_1(Local_121[9 /*4*/], 0, 1) && CAM::IS_SPHERE_VISIBLE(-2663.998f, -2407.055f, 71.9866f, 6f)) && Local_121[9 /*4*/].f_3 == 0)
				{
					func_1703(9, -2670.04f, -2395.271f, 68.09741f, 1);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_121[9 /*4*/], -2670.04f, -2395.271f, 68.09741f, 2f, 0, 0, 0);
					Local_121[9 /*4*/].f_3 = 1;
				}
				if ((((__LIB_0__::func_265(&(vLocal_345[6 /*3*/])) > 10f || __LIB_0__::func_266(Global_35, -2657.951f, -2414.277f, 71.6441f, 10f, 0, 0)) || __LIB_0__::func_266(Global_35, -2680.347f, -2420.612f, 76.8295f, 8f, 0, 0)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_33, true, 0)) && !__LIB_2__::func_1(Local_121[9 /*4*/], 0, 1))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_87[0 /*4*/], -2668.927f, -2398.43f, 68.34834f, 2f, 1, 0, 0);
					iLocal_424 = 5;
					__LIB_1__::func_148(&(vLocal_345[6 /*3*/]));
					if (__LIB_2__::func_1(Local_121[10 /*4*/], 0, 1))
					{
						if (MAP::DOES_BLIP_EXIST(Local_121[10 /*4*/].f_2))
						{
							MAP::_BLIP_SET_MODIFIER(Local_121[10 /*4*/].f_2, 942020339);
						}
					}
					if (__LIB_2__::func_1(Local_121[11 /*4*/], 0, 1))
					{
						if (MAP::DOES_BLIP_EXIST(Local_121[11 /*4*/].f_2))
						{
							MAP::_BLIP_SET_MODIFIER(Local_121[11 /*4*/].f_2, 942020339);
							func_1703(11, -2665.135f, -2381.236f, 67.70982f, 1);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_121[11 /*4*/], -2665.135f, -2381.236f, 67.70982f, 2f, 0, 0, 0);
						}
					}
				}
			}
			break;
		case 5:
			if (Local_87[0 /*4*/].f_3 == 0)
			{
				if (!__LIB_2__::func_1(Local_121[10 /*4*/], 0, 1) && !__LIB_2__::func_1(Local_121[9 /*4*/], 0, 1))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_87[0 /*4*/], -2667.159f, -2409.206f, 69.7335f, 2f, 1, 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_87[0 /*4*/], 30, true);
					Local_87[0 /*4*/].f_3 = 1;
					Local_121[11 /*4*/].f_3 = 0;
				}
			}
			else if (!__LIB_2__::func_1(Local_121[11 /*4*/], 0, 1))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_87[0 /*4*/], -2664.937f, -2384.096f, 67.838f, 2f, 0, 0, 0);
				iLocal_424 = 6;
				__LIB_1__::func_148(&(vLocal_345[6 /*3*/]));
				func_2098(uParam0);
				Local_87[0 /*4*/].f_3 = 0;
			}
			else if (Local_121[11 /*4*/].f_3 == 0)
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_121[11 /*4*/], -2665.159f, -2351.601f, 65.50131f, 2f, 0, 0, 0);
				PED::SET_PED_COMBAT_MOVEMENT(Local_121[11 /*4*/], 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_121[11 /*4*/], 0, false);
				Local_121[11 /*4*/].f_3 = 1;
			}
			break;
		case 6:
			if (((!__LIB_2__::func_1(Local_121[11 /*4*/], 0, 1) && !__LIB_2__::func_1(Local_121[9 /*4*/], 0, 1)) && !__LIB_2__::func_1(Local_121[10 /*4*/], 0, 1)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_8, true, 0) && !__LIB_2__::func_1(Local_121[10 /*4*/], 0, 1)))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_87[0 /*4*/], -2669.709f, -2357.082f, 65.9859f, 2f, 0, 0, 0);
				iLocal_424 = 7;
				__LIB_1__::func_148(&(vLocal_345[6 /*3*/]));
				func_2098(uParam0);
				func_2099();
			}
			break;
		case 7:
			if (((!__LIB_2__::func_1(Local_121[6 /*4*/], 0, 1) && !__LIB_2__::func_1(Local_121[7 /*4*/], 0, 1)) && !__LIB_2__::func_1(Local_121[8 /*4*/], 0, 1)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_35, true, 0))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_87[0 /*4*/], -2681.201f, -2335.607f, 62.5098f, 2f, 0, 0, 0);
				iLocal_424 = 8;
				__LIB_1__::func_148(&(vLocal_345[6 /*3*/]));
				if (!__LIB_5__::func_463() && __LIB_0__::func_265(&(vLocal_345[0 /*3*/])) > 10f)
				{
					__LIB_1__::func_148(&(vLocal_345[0 /*3*/]));
					func_1170(uParam0, "SAD5_S7_ENEM_A", 0);
				}
			}
			break;
		case 8:
			if ((iLocal_470 < 6 && !__LIB_2__::func_1(Local_121[3 /*4*/], 0, 1)) && !__LIB_2__::func_1(Local_121[4 /*4*/], 0, 1))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_87[0 /*4*/], -2717.127f, -2328.933f, 57.5596f, 2f, 0, 0, 0);
				iLocal_424 = 9;
				__LIB_1__::func_148(&(vLocal_345[6 /*3*/]));
			}
			break;
		case 9:
			iLocal_424 = 30;
			break;
		case 15:
			if (__LIB_0__::func_265(&(vLocal_345[6 /*3*/])) > 2f || (!__LIB_2__::func_1(Local_121[1 /*4*/], 0, 1) && !__LIB_2__::func_1(Local_121[2 /*4*/], 0, 1)))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_87[0 /*4*/], -2818.018f, -2376.816f, 55.2167f, 6f, 1, 0, 0);
				iLocal_424 = 16;
				__LIB_1__::func_148(&(vLocal_345[6 /*3*/]));
				func_2099();
			}
			break;
		case 16:
			if (__LIB_0__::func_265(&(vLocal_345[6 /*3*/])) > 15f || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_2, false, 0))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_87[0 /*4*/], -2804.448f, -2353.337f, 57.7642f, 6f, 1, 0, 0);
				iLocal_424 = 17;
				__LIB_1__::func_148(&(vLocal_345[6 /*3*/]));
			}
			break;
		case 17:
			if (__LIB_0__::func_265(&(vLocal_345[6 /*3*/])) > 30f || (!__LIB_2__::func_1(Local_121[6 /*4*/], 0, 1) && !__LIB_2__::func_1(Local_121[7 /*4*/], 0, 1)))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_87[0 /*4*/], -2778.742f, -2353.344f, 57.5375f, 2f, 1, 0, 0);
				iLocal_424 = 18;
				__LIB_1__::func_148(&(vLocal_345[6 /*3*/]));
			}
			break;
		case 18:
			if ((__LIB_0__::func_265(&(vLocal_345[6 /*3*/])) > 30f || __LIB_0__::func_266(Global_35, -2775.446f, -2341.298f, 58.0408f, 5f, 0, 0)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_27, false, 0))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_87[0 /*4*/], -2766.465f, -2349.046f, 57.2093f, 2f, 1, 0, 0);
				iLocal_424 = 19;
				__LIB_1__::func_148(&(vLocal_345[6 /*3*/]));
				func_2098(uParam0);
			}
			break;
		case 19:
			if (__LIB_0__::func_265(&(vLocal_345[6 /*3*/])) > 30f || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_28, false, 0))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_87[0 /*4*/], -2759.655f, -2339.971f, 57.2655f, 2f, 1, 0, 0);
				iLocal_424 = 20;
				__LIB_1__::func_148(&(vLocal_345[6 /*3*/]));
				func_2098(uParam0);
			}
			break;
		case 20:
			if (__LIB_0__::func_265(&(vLocal_345[6 /*3*/])) > 40f || (!__LIB_2__::func_1(Local_121[8 /*4*/], 0, 1) && (__LIB_0__::func_266(Global_35, -2759.74f, -2334.078f, 58.0482f, 5f, 0, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_29, false, 0))))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_87[0 /*4*/], -2739.835f, -2333.789f, 57.5195f, 2f, 1, 0, 0);
				iLocal_424 = 21;
				__LIB_1__::func_148(&(vLocal_345[6 /*3*/]));
				func_2098(uParam0);
			}
			break;
		case 21:
			if (__LIB_0__::func_266(Local_87[0 /*4*/], -2739.835f, -2333.789f, 57.5195f, 2f, 1, 1))
			{
				if (__LIB_0__::func_265(&(vLocal_345[6 /*3*/])) > 20f || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_30, false, 0))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_87[0 /*4*/], -2718.592f, -2331.149f, 57.449f, 2f, 1, 0, 0);
					iLocal_424 = 22;
					__LIB_1__::func_148(&(vLocal_345[6 /*3*/]));
				}
			}
			else
			{
				__LIB_1__::func_148(&(vLocal_345[6 /*3*/]));
			}
			break;
		case 22:
			if (__LIB_0__::func_265(&(vLocal_345[6 /*3*/])) > 90f || func_1718())
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_87[0 /*4*/], -2722.627f, -2365.342f, 44.6814f, 2f, 0, 0, 0);
				iLocal_424 = 30;
			}
			break;
		case 30:
			break;
	}
}

void func_1714(var uParam0)
{
	switch (iLocal_430)
	{
		case 0:
			__LIB_1__::func_148(&(vLocal_345[0 /*3*/]));
			iLocal_430 = 1;
			break;
		case 1:
			if (!__LIB_5__::func_463() && !__LIB_0__::func_27(iLocal_462, 536870912))
			{
				if (iLocal_476 > 1)
				{
					if (__LIB_0__::func_266(Local_231[4 /*4*/], -2755.827f, -2321.74f, 71.32714f, 2f, 1, 1) || __LIB_0__::func_266(Local_231[5 /*4*/], -2744.87f, -2318.364f, 72.86698f, 2f, 1, 1))
					{
						func_1170(uParam0, "SAD5_S7_ABOVE", 0);
						__LIB_1__::func_148(&(vLocal_345[0 /*3*/]));
						__LIB_1__::func_683(&iLocal_462, 536870912);
					}
				}
			}
			if (!__LIB_5__::func_463() && !__LIB_0__::func_27(iLocal_462, 268435456))
			{
				if (__LIB_2__::func_901(Local_100[0 /*4*/], Global_35))
				{
					func_1170(uParam0, "SAD5_S6_LINEJ", 0);
					__LIB_1__::func_683(&iLocal_462, 268435456);
					__LIB_1__::func_148(&(vLocal_345[0 /*3*/]));
				}
				else if (__LIB_2__::func_901(Local_100[0 /*4*/], Local_87[0 /*4*/]))
				{
					func_1170(uParam0, "SAD5_S6_LINE", 0);
					__LIB_1__::func_148(&(vLocal_345[0 /*3*/]));
					__LIB_1__::func_683(&iLocal_462, 268435456);
				}
			}
			if (iLocal_424 == 8 || iLocal_424 == 22)
			{
				if ((!__LIB_5__::func_463() && !__LIB_0__::func_27(iLocal_462, 2097152)) && __LIB_0__::func_265(&(vLocal_345[0 /*3*/])) > 25f)
				{
					func_1170(uParam0, "SAD5_S7_DEFEND", 0);
					__LIB_1__::func_683(&iLocal_462, 2097152);
					__LIB_1__::func_148(&(vLocal_345[0 /*3*/]));
				}
				if ((!__LIB_5__::func_463() && __LIB_0__::func_27(iLocal_462, 2097152)) && !__LIB_0__::func_27(iLocal_462, 4194304))
				{
					func_1170(uParam0, "SAD5_S7_AGITATE", 0);
					__LIB_1__::func_148(&(vLocal_345[0 /*3*/]));
					__LIB_1__::func_683(&iLocal_462, 4194304);
				}
			}
			if (iLocal_424 == 18 || iLocal_424 == 19)
			{
				if (!__LIB_5__::func_463() && !__LIB_0__::func_27(iLocal_462, 262144))
				{
					func_1170(uParam0, "SAD5_S7_PATHS", 0);
					__LIB_1__::func_683(&iLocal_462, 262144);
				}
			}
			if (__LIB_1__::func_285(&(vLocal_345[0 /*3*/]), 25f) && !__LIB_5__::func_463())
			{
				func_1170(uParam0, "SAD5_C_LINES", 0);
				iLocal_430 = 2;
			}
			break;
		case 2:
			iLocal_430 = 0;
			break;
	}
}

void func_1715(var uParam0)
{
	switch (iLocal_502)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_32, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_27, false, 0))
			{
				if (!__LIB_5__::func_463())
				{
					func_1170(uParam0, "SAD5_S7_JADVNCE", 0);
				}
				iLocal_502++;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_33, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_28, false, 0))
			{
				if (!__LIB_5__::func_463())
				{
					func_1170(uParam0, "SAD5_S7_JADVNCE", 0);
				}
				iLocal_502++;
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_34, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_29, false, 0))
			{
				if (!__LIB_5__::func_463())
				{
					func_1170(uParam0, "SAD5_S7_JADVNCE", 0);
				}
				iLocal_502++;
			}
			break;
		case 3:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_35, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_30, false, 0))
			{
				if (!__LIB_5__::func_463())
				{
					func_1170(uParam0, "SAD5_S7_JADVNCE", 0);
				}
				iLocal_502++;
			}
			break;
		case 4:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_30, false, 0))
			{
				if (!__LIB_5__::func_463())
				{
					func_1170(uParam0, "SAD5_S7_JADVNCE", 0);
				}
				iLocal_502++;
			}
			break;
		case 5:
			break;
	}
}

bool func_1716(var uParam0)
{
	if (func_2102(uParam0))
	{
		return true;
	}
	return false;
}

bool func_1717(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = iParam0;
	if (!__LIB_2__::func_1(Local_231[iVar0 /*4*/], 0, 1))
	{
		return false;
	}
	switch (iParam1)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					TASK::TASK_COMBAT_PED(Local_231[iVar0 /*4*/], Global_35, 0, 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_231[iVar0 /*4*/], 1);
					PED::SET_PED_COMBAT_RANGE(Local_231[iVar0 /*4*/], 2);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_231[iVar0 /*4*/], -2739.597f, -2333.607f, 57.51916f, 2f, 0, 0, 0);
					break;
				case 1:
					TASK::TASK_COMBAT_PED(Local_231[iVar0 /*4*/], Global_35, 0, 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_231[iVar0 /*4*/], 1);
					PED::SET_PED_COMBAT_RANGE(Local_231[iVar0 /*4*/], 2);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_231[iVar0 /*4*/], -2744.598f, -2326.523f, 58.6071f, 2f, 0, 0, 0);
					break;
				case 2:
					TASK::TASK_COMBAT_PED(Local_231[iVar0 /*4*/], Global_35, 0, 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_231[iVar0 /*4*/], 1);
					PED::SET_PED_COMBAT_RANGE(Local_231[iVar0 /*4*/], 2);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_231[iVar0 /*4*/], -2730.325f, -2325.151f, 58.53201f, 2.5f, 0, 0, 0);
					break;
				case 3:
					TASK::TASK_COMBAT_PED(Local_231[iVar0 /*4*/], Global_35, 0, 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_231[iVar0 /*4*/], 1);
					PED::SET_PED_COMBAT_RANGE(Local_231[iVar0 /*4*/], 2);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_231[iVar0 /*4*/], -2759.581f, -2340.896f, 57.09518f, 2f, 0, 0, 0);
					break;
				case 4:
					break;
				case 5:
					break;
				default:
					break;
			}
			PED::SET_PED_ACCURACY(Local_231[iVar0 /*4*/], 35);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_231[iVar0 /*4*/], 12, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_231[iVar0 /*4*/], 46, true);
			break;
		case 1:
			break;
	}
	return true;
}

bool func_1718()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_2__::func_1(Local_100[iVar0 /*4*/], 0, 1))
		{
			return false;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (__LIB_2__::func_1(Local_121[iVar0 /*4*/], 0, 1))
		{
			return false;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_2__::func_1(Local_256[iVar0 /*4*/], 0, 1))
		{
			return false;
		}
		iVar0++;
	}
	if (!func_1160(16))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (__LIB_2__::func_1(Local_231[iVar0 /*4*/], 0, 1))
			{
				return false;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (__LIB_2__::func_1(Local_269[iVar0 /*4*/], 0, 1))
			{
				return false;
			}
			iVar0++;
		}
	}
	if (func_1160(1))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (__LIB_2__::func_1(Local_256[iVar0 /*4*/], 0, 1))
			{
				return false;
			}
			iVar0++;
		}
	}
	return true;
}

bool func_1719(var uParam0)
{
	if (func_2103(uParam0) && func_2104(uParam0))
	{
		return true;
	}
	return false;
}

bool func_1720(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	if (!__LIB_2__::func_1(Local_256[iVar0 /*4*/], 0, 1))
	{
		return false;
	}
	switch (iParam1)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					PED::_SET_PED_ON_MOUNT(Local_256[iVar0 /*4*/], iLocal_302[0], -1, true);
					TASK::OPEN_SEQUENCE_TASK(&iVar1);
					TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, -2729.063f, -2370.655f, 44.1131f, -2729.063f, -2370.655f, 44.1131f, 2.5f, true, 0.5f, 4f, true, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"));
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 300f, 0, 64);
					__LIB_1__::func_474(Local_256[iVar0 /*4*/], &iVar1, 0, 0, 1, 1);
					PED::SET_PED_COMBAT_MOVEMENT(Local_256[iVar0 /*4*/], 2);
					PED::SET_PED_COMBAT_RANGE(Local_256[iVar0 /*4*/], 2);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_256[iVar0 /*4*/], -2729.063f, -2370.655f, 44.1131f, 20f, 0, 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_256[iVar0 /*4*/], 45, true);
					break;
				case 1:
					PED::_SET_PED_ON_MOUNT(Local_256[iVar0 /*4*/], iLocal_302[1], -1, true);
					TASK::OPEN_SEQUENCE_TASK(&iVar1);
					TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, -2734.724f, -2384.296f, 43.81214f, -2729.063f, -2370.655f, 44.1131f, 2.5f, true, 0.5f, 4f, true, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"));
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 300f, 0, 64);
					__LIB_1__::func_474(Local_256[iVar0 /*4*/], &iVar1, 0, 0, 1, 1);
					PED::SET_PED_COMBAT_MOVEMENT(Local_256[iVar0 /*4*/], 2);
					PED::SET_PED_COMBAT_RANGE(Local_256[iVar0 /*4*/], 2);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_256[iVar0 /*4*/], -2729.063f, -2370.655f, 44.1131f, 20f, 0, 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_256[iVar0 /*4*/], 45, true);
					break;
				case 2:
					PED::_SET_PED_ON_MOUNT(Local_256[iVar0 /*4*/], iLocal_302[2], -1, true);
					TASK::OPEN_SEQUENCE_TASK(&iVar1);
					TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, -2738.372f, -2375.803f, 43.86157f, -2729.063f, -2370.655f, 44.1131f, 2.5f, true, 0.5f, 4f, true, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"));
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 300f, 0, 64);
					__LIB_1__::func_474(Local_256[iVar0 /*4*/], &iVar1, 0, 0, 1, 1);
					PED::SET_PED_COMBAT_MOVEMENT(Local_256[iVar0 /*4*/], 2);
					PED::SET_PED_COMBAT_RANGE(Local_256[iVar0 /*4*/], 2);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_256[iVar0 /*4*/], -2729.063f, -2370.655f, 44.1131f, 20f, 0, 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_256[iVar0 /*4*/], 45, true);
					break;
			}
			break;
		case 1:
			break;
	}
	return true;
}

void func_1725(int iParam0, vector3 vParam1, float fParam4)
{
	int iVar0;
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_170[iParam0 /*4*/], 30, true);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vParam1, Global_35, fParam4, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
	TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
	__LIB_1__::func_474(Local_170[iParam0 /*4*/], &iVar0, 0, 0, 1, 1);
}

int func_1728(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
{
	vector3 vVar0[24];
	if (__LIB_9__::func_335(iParam2))
	{
		if (bParam3)
		{
			__LIB_6__::func_900(sParam1, bParam4, 0);
		}
		StringCopy(&cVar0, sParam1, 24);
		__LIB_1__::func_104(&(uParam0->f_5310), cVar0, 0, -1, 0, 0);
		return 1;
	}
	return 0;
}

bool func_1729()
{
	int iVar0;
	iVar0 = 7;
	while (iVar0 <= 9)
	{
		if ((__LIB_2__::func_1(Local_170[iVar0 /*4*/], 0, 1) && __LIB_0__::func_665(Local_170[iVar0 /*4*/], Global_35, 1, 1) > 40f) && ENTITY::IS_ENTITY_OCCLUDED(Local_170[iVar0 /*4*/]))
		{
			__LIB_1__::func_864(Local_170[iVar0 /*4*/], 1, 0);
			if (!func_1160(-2147483648))
			{
				func_1181(-2147483648, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 12;
	while (iVar0 <= 14)
	{
		if ((__LIB_2__::func_1(Local_170[iVar0 /*4*/], 0, 1) && __LIB_0__::func_665(Local_170[iVar0 /*4*/], Global_35, 1, 1) > 50f) && ENTITY::IS_ENTITY_OCCLUDED(Local_170[iVar0 /*4*/]))
		{
			__LIB_1__::func_864(Local_170[iVar0 /*4*/], 1, 0);
			if (!func_1160(-2147483648))
			{
				func_1181(-2147483648, 1);
			}
		}
		iVar0++;
	}
	if ((__LIB_2__::func_1(Local_170[3 /*4*/], 0, 1) && __LIB_0__::func_665(Local_170[3 /*4*/], Global_35, 1, 1) > 50f) && ENTITY::IS_ENTITY_OCCLUDED(Local_170[3 /*4*/]))
	{
		__LIB_1__::func_864(Local_170[3 /*4*/], 1, 0);
		if (!func_1160(-2147483648))
		{
			func_1181(-2147483648, 1);
		}
	}
	if (((((__LIB_2__::func_1(Local_170[7 /*4*/], 0, 1) || __LIB_2__::func_1(Local_170[8 /*4*/], 0, 1)) || __LIB_2__::func_1(Local_170[9 /*4*/], 0, 1)) || __LIB_2__::func_1(Local_170[12 /*4*/], 0, 1)) || __LIB_2__::func_1(Local_170[13 /*4*/], 0, 1)) || __LIB_2__::func_1(Local_170[14 /*4*/], 0, 1))
	{
		return true;
	}
	return false;
}

int func_1743(int iParam0, bool bParam1, bool bParam2)
{
	vector3 vVar0;
	int iVar3;
	if (!__LIB_0__::func_29(iParam0))
	{
		return 0;
	}
	if (!__LIB_0__::func_30(__LIB_0__::func_118(iParam0)))
	{
		return 1;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iParam0)))
	{
		__LIB_3__::func_397(iParam0, 0);
		return 0;
	}
	if (__LIB_2__::func_767(iParam0, bParam2))
	{
		return 1;
	}
	if (__LIB_0__::func_117(iParam0, 32))
	{
		return 0;
	}
	if (!__LIB_2__::func_767(iParam0, 0))
	{
		return 0;
	}
	vVar0 = { PERSCHAR::_0x5EE6FCCC9C832CA2(__LIB_0__::func_120(iParam0)) };
	if (!__LIB_0__::func_86(vVar0))
	{
		if (NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(vVar0, 2.5f, 1120403456 /* Float: 100f */))
		{
			return 0;
		}
	}
	if (bParam1 && !__LIB_2__::func_767(iParam0, bParam2))
	{
		if (!__LIB_2__::func_760(iParam0))
		{
			return 0;
		}
	}
	iVar3 = PERSCHAR::_0x0CADC3A977997472(__LIB_0__::func_120(iParam0), 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return 1;
	}
	return 0;
}

void func_1746(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_100[4 /*4*/]))
	{
		if ((__LIB_0__::func_163(Global_35, -2017877118) || __LIB_8__::func_684("SAD5_HIT1")) || __LIB_8__::func_684("SAD5_HIT2"))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM_IN_AIR"), false);
		}
		switch (iLocal_496)
		{
			case 0:
				if (PED::_GET_CARRIER_AS_MOUNT(Local_100[4 /*4*/]) != Local_87[2 /*4*/])
				{
					iLocal_496 = 4;
				}
				else if (!__LIB_5__::func_463() && __LIB_0__::func_394(Global_35, Local_87[2 /*4*/], 1))
				{
					if (iLocal_499 == 0)
					{
						func_1170(uParam0, "SAD5_POSTCME", 0);
						iLocal_496++;
					}
					else if (iLocal_499 == 1 && (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_87[0 /*4*/], 0) && TASK::GET_PED_WAYPOINT_PROGRESS(Local_87[0 /*4*/]) < 150))
					{
						func_1170(uParam0, "SAD5_FINCOMP1", 0);
						iLocal_496++;
					}
					else
					{
						iLocal_496 = 4;
					}
				}
				break;
			case 1:
				if (!__LIB_5__::func_463() && __LIB_0__::func_394(Global_35, Local_87[2 /*4*/], 1))
				{
					if (iLocal_499 == 0)
					{
						func_1170(uParam0, "SAD5_HITWAIT1", 0);
					}
					else if (iLocal_499 == 1)
					{
						func_1170(uParam0, "SAD5_HITWAIT2", 0);
					}
					iLocal_496++;
				}
				break;
			case 2:
				if (!__LIB_5__::func_463() && __LIB_0__::func_394(Global_35, Local_87[2 /*4*/], 1))
				{
					if (iLocal_499 < 2)
					{
						if (iLocal_499 == 0 && (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_87[0 /*4*/], 0) && TASK::GET_PED_WAYPOINT_PROGRESS(Local_87[0 /*4*/]) > 150))
						{
							iLocal_496 = 4;
						}
						if (iLocal_499 == 1 && (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_87[0 /*4*/], 0) && TASK::GET_PED_WAYPOINT_PROGRESS(Local_87[0 /*4*/]) > 280))
						{
							iLocal_496 = 4;
						}
						if (!__LIB_0__::func_139(iLocal_431[4]) && !PED::GET_PED_CONFIG_FLAG(Global_35, 12, true))
						{
							iLocal_431[4] = __LIB_2__::func_403("SAD5_B_HIT", joaat("INPUT_INTERACT_HIT_CARRIABLE"), Local_100[4 /*4*/], 2, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
							__LIB_9__::func_332(&(iLocal_431[4]), Local_100[4 /*4*/]);
						}
						else if (__LIB_1__::func_514(iLocal_431[4], 1) || __LIB_5__::func_777(iLocal_431[4], 1))
						{
							TASK::TASK_PLAY_ANIM(Global_35, sLocal_506, func_2126(), 8f, -8f, -1, 24, 0f, false, 0, false, 0, false);
							__LIB_1__::func_748(&(iLocal_431[4]), 1, 1);
							if (iLocal_499 == 0)
							{
								func_1170(uParam0, "SAD5_HIT1", 0);
							}
							else if (iLocal_499 == 1)
							{
								func_1170(uParam0, "SAD5_HIT2", 0);
							}
							iLocal_496++;
							iLocal_499++;
						}
						if (__LIB_0__::func_139(iLocal_431[4]))
						{
							HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Local_100[4 /*4*/], 5f, 1, 1, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Local_100[4 /*4*/]), "SAD5_FINLEY", 0);
						}
						if (PED::GET_PED_CONFIG_FLAG(Global_35, 12, true))
						{
							__LIB_1__::func_748(&(iLocal_431[4]), 1, 1);
						}
					}
					else
					{
						iLocal_496 = 4;
					}
				}
				break;
			case 3:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("KNOCKOUT")))
				{
					TASK::TASK_PLAY_ANIM(Local_100[4 /*4*/], sLocal_507, sLocal_508, 8f, -8f, -1, 16, 0.695f, false, 0, false, 0, false);
					iLocal_496 = 0;
				}
				break;
			case 4:
				if (!__LIB_5__::func_463())
				{
					__LIB_1__::func_748(&(iLocal_431[4]), 1, 1);
					func_1170(uParam0, "SAD5_RIDEBANT", 0);
					iLocal_496++;
				}
				break;
			case 5:
				if (!__LIB_5__::func_463() && iLocal_499 < 2)
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_87[0 /*4*/], 0) && TASK::GET_PED_WAYPOINT_PROGRESS(Local_87[0 /*4*/]) > 360)
					{
						func_1170(uParam0, "SAD5_ARRIVE", 0);
						iLocal_496++;
					}
				}
				break;
			case 6:
				break;
		}
	}
	else if (__LIB_0__::func_139(iLocal_431[4]) || !__LIB_0__::func_394(Global_35, Local_87[2 /*4*/], 1))
	{
		__LIB_1__::func_748(&(iLocal_431[4]), 1, 1);
	}
}

int func_1756(int iParam0, int iParam1)
{
	var uVar0;
	return func_2128(&uVar0, iParam0, iParam1);
}

void func_1777(var uParam0, int iParam1, int iParam2, char* sParam3)
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
		func_2152(uParam0, iParam1, 378632, 0, sParam3, 67108863, 1023, 3, iParam2);
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

int func_1876(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
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
				if (!__LIB_0__::func_851(iParam0) && __LIB_0__::func_852(iParam0, &uVar4))
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
					return __LIB_0__::func_749();
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
					return __LIB_0__::func_749();
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
				return __LIB_0__::func_749();
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
				return __LIB_0__::func_749();
			}
			if (bParam7)
			{
				if (!__LIB_1__::func_411(iParam0, Global_1360165[iParam0 /*1157*/].f_124, 1))
				{
					return __LIB_0__::func_749();
				}
			}
			if ((bParam2 && !__LIB_0__::func_86(vVar0)) && !__LIB_0__::func_175(vVar0, ENTITY::GET_ENTITY_COORDS(Global_1360165[iParam0 /*1157*/].f_124, true, false), 1056964608 /* Float: 0.5f */, 1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_828(Global_1360165[iParam0 /*1157*/].f_124, vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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
	return __LIB_0__::func_749();
}

bool func_1880(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	if (iParam3 == 0)
	{
		iParam3 = (iParam1 - 1);
	}
	iVar0 = iParam2;
	while (iVar0 <= iParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((*iParam0)[iVar0 /*4*/], Global_35, 1, 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1886(var uParam0, char* sParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_3__::func_358(__LIB_4__::func_998(uParam0)))
	{
		iVar0 = 0;
		while (iVar0 < __LIB_4__::func_955(__LIB_4__::func_998(uParam0)))
		{
			iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, uParam0->f_5421));
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				__LIB_5__::func_360(uParam0, iVar1, sParam1, bParam2);
			}
			iVar0++;
		}
	}
	if (ITEMSET::IS_ITEMSET_VALID(iLocal_69))
	{
		iVar2 = 0;
		while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iLocal_69))
		{
			iVar3 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iLocal_69));
			if (ENTITY::DOES_ENTITY_EXIST(iVar3) && ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				__LIB_5__::func_360(uParam0, iVar3, sParam1, bParam2);
			}
			iVar2++;
		}
	}
}

void func_1893(var uParam0)
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
							iVar1 = func_2266(128);
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
			func_2267(uParam0);
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

bool func_2014(int iParam0, int iParam1)
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
				if (func_2014(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2014(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2014(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2014(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

int func_2077()
{
	if (!__LIB_0__::func_139(iLocal_431[3]))
	{
		iLocal_431[3] = __LIB_1__::func_877("SAD5_FOCUS", joaat("INPUT_CINEMATIC_CAM"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
		return 1;
	}
	return 0;
}

int func_2080(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		__LIB_2__::func_899(uParam2, 1, iVar0);
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
				*uParam3 = 128;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_973(iParam0, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (__LIB_2__::func_969(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_2__::func_970(iParam0, uParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_1__::func_395(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_875(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (__LIB_2__::func_971(iParam0, uParam2))
				{
					*uParam3 = 32;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
					{
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
				{
					*uParam3 = 2;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
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
								*uParam3 = 2;
								__LIB_2__::func_831(iParam0, uParam2, *uParam3);
								return 1;
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
							*uParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
							return 1;
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
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return 1;
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
							*uParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (__LIB_2__::func_833(uParam2, iParam0))
			{
				*uParam3 = 1024;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_867(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (__LIB_2__::func_878(iParam0, uParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, uParam2))
				{
					*uParam3 = 32768;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
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
						*uParam3 = 512;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return 1;
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
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
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
				*uParam3 = 1;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_2082(int iParam0, int iParam1)
{
	return func_1669(iParam0, iParam1);
}

float func_2083(int iParam0, int iParam1)
{
	return func_1670(iParam0, iParam1);
}

bool func_2084(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	if (!__LIB_2__::func_1(Local_100[iVar0 /*4*/], 0, 1))
	{
		return false;
	}
	switch (iVar0)
	{
		case 0:
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_100[iVar0 /*4*/], &iVar1, 0, 0, 1, 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_100[iVar0 /*4*/], -2705.599f, -2369.692f, 45.1171f, 3f, 0, 0, 0);
			break;
		case 1:
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_100[iVar0 /*4*/], &iVar1, 0, 0, 1, 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_100[iVar0 /*4*/], -2705.259f, -2356.158f, 45.1171f, 3f, 0, 0, 0);
			break;
		case 2:
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_100[iVar0 /*4*/], &iVar1, 0, 0, 1, 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_100[iVar0 /*4*/], -2715.029f, -2361.8f, 45.1171f, 3f, 0, 0, 0);
			break;
		case 3:
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_100[iVar0 /*4*/], &iVar1, 0, 0, 1, 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_100[iVar0 /*4*/], -2708.492f, -2363.507f, 45.11708f, 3f, 0, 0, 0);
			break;
		case 4:
			break;
		default:
			break;
	}
	PED::SET_PED_COMBAT_MOVEMENT(Local_100[iVar0 /*4*/], 2);
	PED::SET_PED_COMBAT_RANGE(Local_100[iVar0 /*4*/], 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_100[iVar0 /*4*/], 30, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_100[iVar0 /*4*/], 46, true);
	return true;
}

bool func_2085(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	if (!__LIB_2__::func_1(Local_121[iVar0 /*4*/], 0, 1))
	{
		return false;
	}
	switch (iVar0)
	{
		case 0:
			TASK::TASK_COMBAT_PED(Local_121[iVar0 /*4*/], Global_35, 0, 0);
			PED::SET_PED_COMBAT_MOVEMENT(Local_121[iVar0 /*4*/], 1);
			PED::SET_PED_COMBAT_RANGE(Local_121[iVar0 /*4*/], 2);
			break;
		case 1:
			TASK::TASK_COMBAT_PED(Local_121[iVar0 /*4*/], Global_35, 0, 0);
			PED::SET_PED_COMBAT_MOVEMENT(Local_121[iVar0 /*4*/], 1);
			PED::SET_PED_COMBAT_RANGE(Local_121[iVar0 /*4*/], 2);
			break;
		case 2:
			TASK::TASK_COMBAT_PED(Local_121[iVar0 /*4*/], Global_35, 0, 0);
			PED::SET_PED_COMBAT_MOVEMENT(Local_121[iVar0 /*4*/], 1);
			PED::SET_PED_COMBAT_RANGE(Local_121[iVar0 /*4*/], 2);
			break;
		case 5:
			TASK::TASK_COMBAT_PED(Local_121[iVar0 /*4*/], Global_35, 0, 0);
			PED::SET_PED_COMBAT_MOVEMENT(Local_121[iVar0 /*4*/], 1);
			PED::SET_PED_COMBAT_RANGE(Local_121[iVar0 /*4*/], 2);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_121[iVar0 /*4*/], -2803.636f, -2352.752f, 57.76192f, 1.3f, 1, 0, 0);
			break;
		case 3:
			if (!Local_121[iVar0 /*4*/].f_3)
			{
				TASK::TASK_COMBAT_PED(Local_121[iVar0 /*4*/], Global_35, 0, 0);
				PED::SET_PED_COMBAT_MOVEMENT(Local_121[iVar0 /*4*/], 1);
				PED::SET_PED_COMBAT_RANGE(Local_121[iVar0 /*4*/], 2);
				__LIB_2__::func_279(Local_121[iVar0 /*4*/], 1);
			}
			break;
		case 4:
			if (!Local_121[iVar0 /*4*/].f_3)
			{
				TASK::TASK_COMBAT_PED(Local_121[iVar0 /*4*/], Global_35, 0, 0);
				PED::SET_PED_COMBAT_MOVEMENT(Local_121[iVar0 /*4*/], 1);
				PED::SET_PED_COMBAT_RANGE(Local_121[iVar0 /*4*/], 2);
				__LIB_2__::func_279(Local_121[iVar0 /*4*/], 1);
			}
			break;
		default:
			break;
	}
	PED::SET_PED_ACCURACY(Local_121[iVar0 /*4*/], 35);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_121[iVar0 /*4*/], 46, true);
	return true;
}

void func_2092(var uParam0)
{
	if (!__LIB_5__::func_463() && !__LIB_0__::func_27(iLocal_462, 524288))
	{
		func_1170(uParam0, "SAD5_S7_RUNNING", 0);
		__LIB_1__::func_683(&iLocal_462, 524288);
	}
}

int func_2093()
{
	int iVar0;
	iLocal_472 = 4;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!__LIB_2__::func_1(Local_100[iVar0 /*4*/], 0, 1))
		{
			iLocal_472 = (iLocal_472 - 1);
		}
		iVar0++;
	}
	return iLocal_472;
}

bool func_2094()
{
	if ((ENTITY::IS_ENTITY_IN_VOLUME(Local_121[0 /*4*/], Local_14.f_14, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Local_121[1 /*4*/], Local_14.f_14, true, 0)) || ENTITY::IS_ENTITY_IN_VOLUME(Local_121[2 /*4*/], Local_14.f_14, true, 0))
	{
		return true;
	}
	return false;
}

bool func_2095()
{
	if (!func_1160(16))
	{
		switch (iLocal_423)
		{
			case 0:
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_121[0 /*4*/], -2696.367f, -2440.571f, 76.99246f, 2f, 0, 0, 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_121[1 /*4*/], -2698.845f, -2441.149f, 76.87216f, 2f, 0, 0, 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_121[2 /*4*/], -2698.609f, -2432.689f, 76.84959f, 2f, 0, 0, 0);
				iLocal_423 = 1;
				break;
			case 1:
				if (!__LIB_2__::func_1(Local_121[0 /*4*/], 0, 1) && !__LIB_2__::func_1(Local_121[1 /*4*/], 0, 1))
				{
					if (__LIB_2__::func_1(Local_121[2 /*4*/], 0, 1))
					{
						func_1703(2, -2669.979f, -2395.429f, 68.10667f, 0);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_121[2 /*4*/], -2669.979f, -2395.429f, 68.10667f, 2f, 0, 0, 0);
						iLocal_423 = 2;
					}
				}
				if (!__LIB_2__::func_1(Local_121[0 /*4*/], 0, 1) && !__LIB_2__::func_1(Local_121[2 /*4*/], 0, 1))
				{
					if (__LIB_2__::func_1(Local_121[1 /*4*/], 0, 1))
					{
						func_1703(1, -2669.979f, -2395.429f, 68.10667f, 0);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_121[1 /*4*/], -2669.979f, -2395.429f, 68.10667f, 2f, 0, 0, 0);
						iLocal_423 = 2;
					}
				}
				if (!__LIB_2__::func_1(Local_121[1 /*4*/], 0, 1) && !__LIB_2__::func_1(Local_121[2 /*4*/], 0, 1))
				{
					if (__LIB_2__::func_1(Local_121[0 /*4*/], 0, 1))
					{
						func_1703(0, -2669.979f, -2395.429f, 68.10667f, 0);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_121[0 /*4*/], -2669.979f, -2395.429f, 68.10667f, 2f, 0, 0, 0);
						iLocal_423 = 2;
					}
				}
				break;
			case 2:
				return true;
		}
	}
	return false;
}

void func_2096(var uParam0)
{
	if (!func_1160(134217728))
	{
		func_1170(uParam0, "SAD5_S6_OBJ8_C", 0);
		func_1181(134217728, 1);
	}
}

bool func_2097()
{
	if ((!__LIB_2__::func_1(Local_121[0 /*4*/], 0, 1) && !__LIB_2__::func_1(Local_121[1 /*4*/], 0, 1)) && !__LIB_2__::func_1(Local_121[2 /*4*/], 0, 1))
	{
		return true;
	}
	return false;
}

void func_2098(var uParam0)
{
	if (!__LIB_5__::func_463())
	{
		func_1170(uParam0, "SAD5_S7_SADVNCE", 0);
		__LIB_1__::func_148(&(vLocal_345[0 /*3*/]));
	}
}

void func_2099()
{
	int iVar0;
	func_2403(Local_87[2 /*4*/], 4, 0f, 0f, 0f, 1);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2656.151f, -2415.311f, 72.3521f, 1.5f, 20000, 0.25f, 0, 40000f);
	TASK::TASK_STAND_STILL(0, -1);
	__LIB_1__::func_474(Local_87[2 /*4*/], &iVar0, 0, 0, 1, 1);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2652.268f, -2421.199f, 73.9385f, 1.5f, 20000, 0.25f, 0, 40000f);
	TASK::TASK_STAND_STILL(0, -1);
	__LIB_1__::func_474(Local_87[1 /*4*/], &iVar0, 0, 0, 1, 1);
}

bool func_2102(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iLocal_498 == MISC::GET_FRAME_COUNT())
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_231[iVar0 /*4*/]))
		{
			Local_231[iVar0 /*4*/] = __LIB_1__::func_545(iLocal_81, func_1669(8, iVar0), func_1670(8, iVar0), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			iLocal_498 = MISC::GET_FRAME_COUNT();
			PED::SET_PED_CONFIG_FLAG(Local_231[iVar0 /*4*/], 307, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_231[iVar0 /*4*/], 30, true);
			ENTITY::_0x18FF3110CF47115D(Local_231[iVar0 /*4*/], 2, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_231[iVar0 /*4*/], joaat("REL_PLAYER_ENEMY"));
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_231[iVar0 /*4*/], true);
			__LIB_4__::func_7(Local_231[iVar0 /*4*/], joaat("WEAPON_REPEATER_CARBINE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		}
		if (iVar0 == 4 || iVar0 == 5)
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_231[iVar0 /*4*/], false);
		}
		if (iVar0 == (6 - 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_2103(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iLocal_498 == MISC::GET_FRAME_COUNT())
		{
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_302[iVar0]))
		{
			iLocal_302[iVar0] = __LIB_1__::func_545(iLocal_79, func_1669(10, iVar0), func_1670(10, iVar0), 1, 1, 0, 1, 1, 0, 0, 0, 0, 0);
			iLocal_498 = MISC::GET_FRAME_COUNT();
		}
		if (iVar0 == (3 - 1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_2104(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iLocal_498 == MISC::GET_FRAME_COUNT())
		{
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_256[iVar0 /*4*/]))
		{
			Local_256[iVar0 /*4*/] = __LIB_1__::func_545(iLocal_81, func_1669(10, iVar0), func_1670(10, iVar0), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			iLocal_498 = MISC::GET_FRAME_COUNT();
			PED::SET_PED_CONFIG_FLAG(Local_256[iVar0 /*4*/], 307, true);
			PED::SET_PED_ACCURACY(Local_256[iVar0 /*4*/], 30);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_256[iVar0 /*4*/], 30, true);
			ENTITY::_0x18FF3110CF47115D(Local_256[iVar0 /*4*/], 2, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_256[iVar0 /*4*/], joaat("REL_PLAYER_ENEMY"));
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_256[iVar0 /*4*/], true);
			__LIB_4__::func_7(Local_256[iVar0 /*4*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		}
		if (iVar0 == (3 - 1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

char* func_2126()
{
	int iVar0;
	iVar0 = __LIB_0__::func_399(Global_35, 1, 0, 0);
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
	{
		return func_2409(1);
	}
	if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		return func_2409(2);
	}
	return func_2409(0);
}

int func_2128(var uParam0, int iParam1, int iParam2)
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
		return func_2128(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_2152(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
			uParam0->f_5423[iVar0 /*65*/].f_23[iVar1 /*4*/].f_3 = 378632;
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

int func_2266(int iParam0)
{
	var uVar0;
	var uVar4;
	int iVar8;
	int iVar9;
	iVar8 = func_1316(&uVar0, iParam0, 0);
	iVar9 = func_2128(&uVar4, iParam0, 0);
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

void func_2267(var uParam0)
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
					iVar2 = func_2266(128);
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
				iVar3 = func_2266(128);
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

void func_2403(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	vector3 vVar0;
	int iVar3;
	struct<4> Var4;
	int iVar8;
	int iVar9;
	iVar8 = 1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::_0x608BC6A6AACD5036(&Var4, iParam0, iParam1, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var4.f_3))
			{
				iVar3 = __LIB_14__::func_338(Var4.f_3);
				if (__LIB_0__::func_144(iVar3, 0))
				{
					if (iParam5 == 0)
					{
						PED::_0xED00D72F81CF7278(Var4.f_3, 0, 1);
						vVar0.x = fParam2;
						vVar0.f_1 = fParam3;
						vVar0.f_2 = fParam4;
						if (__LIB_0__::func_86(vVar0))
						{
							vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, -1f, 0f) };
							__LIB_0__::func_634(&vVar0, 50, 10, 0);
						}
						ENTITY::SET_ENTITY_COORDS(Var4.f_3, vVar0, false, false, true, true);
					}
					func_2590(&iParam0, iVar3, &iVar8, 1, -142743235);
				}
				else if (ENTITY::IS_ENTITY_A_PED(Var4.f_3))
				{
					iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var4.f_3);
					if (PED::IS_PED_HUMAN(iVar9))
					{
						PED::_0xED00D72F81CF7278(Var4.f_3, 0, 1);
						vVar0.x = fParam2;
						vVar0.f_1 = fParam3;
						vVar0.f_2 = fParam4;
						if (__LIB_0__::func_86(vVar0))
						{
							vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, -1f, 0f) };
							__LIB_0__::func_634(&vVar0, 50, 10, 0);
						}
						ENTITY::SET_ENTITY_COORDS(Var4.f_3, vVar0, false, PED::_IS_PED_HOGTIED(iVar9), true, true);
					}
				}
			}
		}
	}
}

char* func_2409(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "knockout_fist_player_player";
		case 1:
			return "knockout_pistol_player_player";
		case 2:
			return "complaining_knockout_rifle_player_player";
		default:
			break;
	}
	return "";
}

int func_2590(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(*iParam0);
	iVar1 = __LIB_7__::func_601(iVar0, iParam1);
	if (func_2639(*iParam0, iParam1, *iParam2, bParam3, iParam4))
	{
		Var2 = { __LIB_0__::func_777(iParam1) };
		if (STATS::_STAT_ID_IS_VALID(&Var2))
		{
			STATS::_0xBD861AE8A5181ED7(&Var2, *iParam2);
		}
		if (__LIB_7__::func_599(iParam1))
		{
			__LIB_7__::func_594(*iParam0, iParam1, *iParam2);
		}
		else
		{
			__LIB_7__::func_594(*iParam0, iParam1, *iParam2);
			__LIB_12__::func_579(*iParam0, iParam1, *iParam2, 1);
		}
		iVar4 = (iVar1 - __LIB_7__::func_601(iVar0, iParam1));
		*iParam2 = (*iParam2 - iVar4);
		return 1;
	}
	return 0;
}

int func_2639(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	iVar0 = INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0);
	if (__LIB_1__::func_16(iParam0))
	{
		iVar1 = __LIB_0__::func_402(iParam0);
		if (__LIB_0__::func_144(iParam1, 0))
		{
			if (__LIB_7__::func_599(iParam1))
			{
				__LIB_7__::func_681(iVar1, iParam1, iParam2);
			}
		}
	}
	return func_2666(iVar0, iParam1, iParam2, bParam3, iParam4);
}

int func_2666(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == 562618531;
	bVar1 = iParam4 == 1992602754;
	bVar2 = iParam4 == -1387038764;
	if (!__LIB_7__::func_654(iParam0, iParam1, 1))
	{
		return 0;
	}
	Var3 = { __LIB_0__::func_777(iParam1) };
	if (STATS::_STAT_ID_IS_VALID(&Var3))
	{
		if ((__LIB_7__::func_601(iParam0, iParam1) - iParam2) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var3, iParam2);
		}
		else if ((__LIB_7__::func_601(iParam0, iParam1) - iParam2) < 0)
		{
			func_2666(iParam0, iParam1, __LIB_1__::func_614(iParam1, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!__LIB_7__::func_653(iParam0, iParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!__LIB_0__::func_708(0))
	{
		bParam3 = true;
	}
	if (!bParam3 && iParam1 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		__LIB_2__::func_471(iParam1, -iParam2, bVar0, bVar1, bVar2);
	}
	return 1;
}

