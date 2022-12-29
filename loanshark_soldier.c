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
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	struct<16> Local_18[2];
	int iLocal_51 = 0;
	struct<8> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<43> Local_60[6];
	struct<6> Local_319[5];
	struct<6> Local_350 = { 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_356 = { 0, 0, 0, 0, 0 } ;
	struct<8> Local_361[1];
	struct<8> Local_370[1];
	struct<8> Local_379[12];
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_506 = 0;
	int iLocal_507 = 0;
	int iLocal_508 = 0;
	vector3 vLocal_509 = { 0f, 0f, 0f };
	vector3 vLocal_512 = { 0f, 0f, 0f };
	float fLocal_515 = 0f;
	float fLocal_516 = 0f;
	vector3 vLocal_517 = { 0f, 0f, 0f };
	vector3 vLocal_520 = { 0f, 0f, 0f };
	int iLocal_523 = 0;
	int iLocal_524 = 0;
	int iLocal_525 = 0;
	int iLocal_526 = 0;
	int iLocal_527 = 0;
	char* sLocal_528 = NULL;
	char* sLocal_529 = NULL;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
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
	var uLocal_556 = 0;
	var uLocal_557 = 0;
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
	var uLocal_577 = -1;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 1097859072;
	var uLocal_587 = 1000;
	var uLocal_588 = 1067450368;
	var uLocal_589 = 5000;
	var uLocal_590 = 42;
	var uLocal_591 = 1103626240;
	var uLocal_592 = 1077936128;
	var uLocal_593 = 1106247680;
	var uLocal_594 = 1103101952;
	var uLocal_595 = 1097859072;
	var uLocal_596 = 1103626240;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = -1;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 1097859072;
	var uLocal_615 = 1000;
	var uLocal_616 = 1067450368;
	var uLocal_617 = 5000;
	var uLocal_618 = 42;
	var uLocal_619 = 1103626240;
	var uLocal_620 = 1077936128;
	var uLocal_621 = 1106247680;
	var uLocal_622 = 1103101952;
	var uLocal_623 = 1097859072;
	var uLocal_624 = 1103626240;
	int iLocal_625 = 0;
	int iLocal_626 = 0;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	struct<2> Local_629[14];
	int iLocal_658 = 0;
	int iLocal_659 = 0;
	bool bLocal_660 = false;
	bool bLocal_661 = false;
	bool bLocal_662 = false;
	bool bLocal_663 = false;
	bool bLocal_664 = false;
	bool bLocal_665 = false;
	bool bLocal_666 = false;
	bool bLocal_667 = false;
	bool bLocal_668 = false;
	bool bLocal_669 = false;
	bool bLocal_670 = false;
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
	float fLocal_681 = 0f;
	float fLocal_682 = 0f;
	float fLocal_683 = 0f;
	float fLocal_684 = 0f;
	struct<17> Local_685[1];
	vector3 vLocal_703 = { 0f, NaNf, 0f };
	var uLocal_706 = -1;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = -1;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 1073741824;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 1;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 1106247680;
	var uLocal_730 = 1067450368;
	var uLocal_731 = 0;
	var uLocal_732 = 1092616192;
	var uLocal_733 = 1112014848;
	var uLocal_734 = 1106247680;
	var uLocal_735 = 1101529088;
	var uLocal_736 = 1101004800;
	var uLocal_737 = 1084227584;
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
	int iLocal_764 = 0;
	bool bLocal_765 = false;
	bool bLocal_766 = false;
	bool bLocal_767 = false;
	bool bLocal_768 = false;
	bool bLocal_769 = false;
	var uScriptParam_0 = 0;
#endregion
void __EntryFunction__()
{
	struct<2278> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	vLocal_509 = { 1410.53f, 1168.41f, 183.697f };
	vLocal_512 = { 1413.379f, 1169.363f, 183.9591f };
	fLocal_515 = 200.3303f;
	fLocal_516 = 150f;
	vLocal_517 = { 1417.59f, 1171.82f, 184.09f };
	vLocal_520 = { 0f, 0f, 55.58f };
	iLocal_526 = joaat("PG_LS_SOLDIER2_01X");
	iLocal_527 = joaat("PG_TEAMSTER_WAGON05X_LIGHTUPGRADE1");
	sLocal_528 = "ls_soldier2_mountL";
	sLocal_529 = "ls_soldier2_mountR";
	bLocal_666 = true;
	fLocal_681 = 20f;
	fLocal_682 = 15f;
	fLocal_683 = 12f;
	fLocal_684 = 9f;
	iLocal_764 = -1;
	Var0.f_3.f_5 = 1065353216;
	Var0.f_3.f_6 = 1119092736;
	Var0.f_3.f_7 = 1092616192;
	Var0.f_3.f_8 = 1085276160;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_17.f_2 = 1106247680;
	Var0.f_17.f_3 = 1101004800;
	Var0.f_17.f_4 = 1099431936;
	Var0.f_17.f_5 = 1098907648;
	Var0.f_17.f_6 = 1082130432;
	Var0.f_32 = 1;
	Var0.f_32.f_13 = 17;
	Var0.f_32.f_218 = 1097859072;
	Var0.f_32.f_219 = 1101004800;
	Var0.f_32.f_246 = 4;
	Var0.f_352.f_3 = 17;
	Var0.f_352.f_3.f_1.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_225.f_15 = 1;
	Var0.f_352.f_241 = 30;
	Var0.f_352.f_241.f_1 = -1;
	Var0.f_352.f_241.f_1.f_2 = 1;
	Var0.f_352.f_241.f_1.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_782 = 8;
	Var0.f_352.f_1111 = 8;
	Var0.f_352.f_1111.f_1.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1288 = 11;
	Var0.f_352.f_1399 = 2;
	Var0.f_352.f_1434 = 2;
	Var0.f_352.f_1451 = -1;
	Var0.f_352.f_1454 = -1;
	Var0.f_352.f_1455 = -1082130432;
	Var0.f_352.f_1537 = 24;
	Var0.f_352.f_1661 = -1;
	Var0.f_2041 = 10;
	Var0.f_2052 = 11;
	Var0.f_2077.f_8 = -1;
	Var0.f_2077.f_17 = 1097859072;
	Var0.f_2077.f_18 = 1000;
	Var0.f_2077.f_19 = 1067450368;
	Var0.f_2077.f_20 = 5000;
	Var0.f_2077.f_21 = 42;
	Var0.f_2077.f_22 = 1103626240;
	Var0.f_2077.f_23 = 1077936128;
	Var0.f_2077.f_24 = 1106247680;
	Var0.f_2077.f_25 = 1103101952;
	Var0.f_2077.f_26 = 1097859072;
	Var0.f_2077.f_27 = 1103626240;
	Var0.f_2106 = 24;
	Var0.f_2204 = -1;
	Var0.f_2210 = 2;
	Var0.f_2213 = 2;
	Var0.f_2216.f_1 = -1;
	Var0.f_2216.f_3 = -1;
	Var0.f_2216.f_6 = -1;
	Var0.f_2216.f_12 = 1073741824;
	Var0.f_2216.f_16 = 1;
	Var0.f_2216.f_26 = 1106247680;
	Var0.f_2216.f_27 = 1067450368;
	Var0.f_2216.f_29 = 1092616192;
	Var0.f_2216.f_30 = 1112014848;
	Var0.f_2216.f_31 = 1106247680;
	Var0.f_2216.f_32 = 1101529088;
	Var0.f_2216.f_33 = 1101004800;
	Var0.f_2216.f_34 = 1084227584;
	Var0.f_2277 = 1;
	Var0.f_2277.f_1.f_2 = 570;
	Var0.f_2277.f_1.f_3 = 1065353216;
	Var0.f_2277.f_1.f_4 = -1082130432;
	Var0.f_2277.f_1.f_9 = 3;
	Var0 = uScriptParam_0;
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(554))
	{
		func_1(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_2(&Var0);
	while (true)
	{
		func_3(&Var0);
		if (__LIB_0__::func_1(Var0.f_16, 12))
		{
			func_5(&Var0);
		}
		else
		{
			switch (Var0.f_1)
			{
				case 0:
					__LIB_10__::func_536(&Var0);
					break;
				case 1:
					func_7(&Var0);
					break;
				case 3:
					func_8(&Var0);
					break;
				case 2:
					__LIB_10__::func_253(&Var0, func_10(&Var0, __LIB_4__::func_513()));
					if (Var0.f_1 == 8 || Var0.f_1 == 9)
					{
						HUD::DISPLAY_HUD(true);
						MAP::DISPLAY_RADAR(true);
					}
					break;
				case 6:
					func_12(&Var0);
					break;
				case 7:
					func_13(&Var0);
					break;
				case 8:
					func_14(&Var0);
					break;
				case 9:
					func_15(&Var0);
					break;
				case 10:
					func_16(&Var0, 0);
					break;
				case 11:
					func_17(&Var0);
					break;
				case 12:
					func_18(&Var0);
					break;
				case 13:
					func_19(&Var0, 0);
					break;
			}
		}
		BUILTIN::WAIT(0);
	}
}

void func_1(var uParam0)
{
	int iVar0;
	if (Global_1879534 == 1)
	{
	}
	if (__LIB_0__::func_1(Global_1392626[*uParam0 /*32*/].f_9, 4))
	{
		iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
		__LIB_0__::func_11(uParam0, iVar0);
		if (iVar0 == 32)
		{
			func_15(uParam0);
		}
		else
		{
			func_16(uParam0, 1);
			return;
		}
	}
	if (uParam0->f_1 == 11)
	{
		__LIB_0__::func_11(uParam0);
	}
	func_23(uParam0);
}

void func_2(char[4] cParam0)
{
	__LIB_4__::func_228(&(cParam0->f_2077));
	__LIB_1__::func_402(&(cParam0->f_2077), 1);
	__LIB_2__::func_828(&(cParam0->f_2077), 1);
	__LIB_1__::func_413(&(cParam0->f_2077), 1);
	if (*cParam0 == __LIB_10__::func_367())
	{
		__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_9), 512);
		__LIB_0__::func_145(0, 0);
	}
	HUD::_TEXT_DATABASE_REQUEST("LOAN");
	func_31(cParam0);
	__LIB_10__::func_254(cParam0);
	__LIB_10__::func_253(cParam0, 0);
}

void func_3(char[4] cParam0)
{
	struct<4> Var0;
	if (__LIB_0__::func_1(cParam0->f_16, 12))
	{
		return;
	}
	if (__LIB_10__::func_255())
	{
		__LIB_0__::func_7(&(cParam0->f_16), 4);
		if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 4))
		{
			__LIB_10__::func_256(cParam0, 8);
		}
		return;
	}
	else if (__LIB_10__::func_257())
	{
		__LIB_0__::func_7(&(cParam0->f_16), 8);
		if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 4))
		{
			__LIB_10__::func_256(cParam0, 9);
		}
		return;
	}
	__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 256);
	if (cParam0->f_1 != 12 && cParam0->f_1 != 11)
	{
		if (!__LIB_0__::func_1(cParam0->f_16, 1) && cParam0->f_1 <= 3)
		{
			if (func_38(cParam0))
			{
				func_39(cParam0);
				if (cParam0->f_15 == 2 || cParam0->f_15 == 6)
				{
					func_23(cParam0);
				}
				else
				{
					__LIB_10__::func_253(cParam0, 11);
				}
				return;
			}
			__LIB_10__::func_613(cParam0);
		}
		if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 4))
		{
			if (__LIB_0__::func_1(cParam0->f_16, 128))
			{
				if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 512))
				{
					Var0 = { func_41(0) };
					if (func_42(&Var0))
					{
						__LIB_0__::func_8(&(cParam0->f_16), 128);
					}
				}
				else
				{
					__LIB_0__::func_8(&(cParam0->f_16), 128);
				}
			}
			if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 2048))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					PED::SET_PED_RESET_FLAG(Global_35, 187, true);
				}
			}
			if (!__LIB_0__::func_1(cParam0->f_16, 32))
			{
				__LIB_4__::func_515();
			}
			if (!__LIB_0__::func_1(cParam0->f_16, 64))
			{
				POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
			}
			if (!__LIB_0__::func_1(cParam0->f_16, 256))
			{
				__LIB_4__::func_516(1, 0);
			}
			if (func_46(cParam0))
			{
				__LIB_10__::func_253(cParam0, 10);
				return;
			}
		}
		func_47(cParam0);
		__LIB_18__::func_242(cParam0);
	}
}

void func_5(var uParam0)
{
	if (__LIB_0__::func_1(Global_1392626[*uParam0 /*32*/].f_9, 4))
	{
		func_16(uParam0, 0);
	}
	else
	{
		if (!__LIB_0__::func_75(&(uParam0->f_2070)))
		{
			__LIB_1__::func_283(&(uParam0->f_2070), 0);
		}
		__LIB_0__::func_11(uParam0);
		if (__LIB_1__::func_871(&(uParam0->f_2070)) >= 2500 || CAM::IS_SCREEN_FADED_OUT())
		{
			if (uParam0->f_1 == 11)
			{
				__LIB_0__::func_11(uParam0);
			}
			else
			{
				func_39(uParam0);
			}
			func_23(uParam0);
		}
	}
}

void func_7(char[4] cParam0)
{
	if (func_57(cParam0))
	{
		if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 512))
		{
			func_58(cParam0);
			__LIB_10__::func_253(cParam0, 2);
		}
		else
		{
			func_59(cParam0);
			__LIB_10__::func_253(cParam0, 3);
		}
	}
}

void func_8(char[4] cParam0)
{
	if (func_60(cParam0))
	{
		func_61(cParam0);
	}
}

int func_10(char[4] cParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam1;
	PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
	if (PED::IS_PED_USING_ACTION_MODE(Global_35))
	{
		PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_370[0 /*8*/]))
	{
		OBJECT::DELETE_OBJECT(&(Local_370[0 /*8*/]));
	}
	MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_506))
	{
		__LIB_13__::func_71(&iLocal_506, 1430.027f, 1192.439f, 182.8754f, 359.7534f, 0, 1, 1, 1);
	}
	if (iVar0 == 0)
	{
		if (PED::_0xA0BC8FAED8CFEB3C(Local_52))
		{
			iLocal_51 = 1;
			func_59(cParam0);
			if (__LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("GROUP_PISTOL") || __LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("GROUP_REVOLVER"))
			{
				iVar1 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_35, 0);
				__LIB_10__::func_564(cParam0, iVar1, "w_revolver_cattleman01^1", 0, 0, 0);
			}
			else
			{
				iVar1 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_35, 2);
				__LIB_10__::func_564(cParam0, iVar1, "w_revolver_cattleman01^1", 0, 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_379[0 /*8*/]))
			{
				__LIB_10__::func_564(cParam0, Local_379[0 /*8*/], "w_revolver_cattleman01", 0, 0, 0);
			}
			__LIB_3__::func_353("LSSLD2_START", 0);
			__LIB_10__::func_260(1, 0);
			return 6;
		}
	}
	else if (iVar0 == 1)
	{
		if (!__LIB_0__::func_75(&uLocal_554))
		{
			if (func_67(cParam0, 1))
			{
				__LIB_1__::func_148(&uLocal_554);
			}
		}
		else if (__LIB_0__::func_264(&uLocal_554) > 2f)
		{
			__LIB_10__::func_378(*cParam0, func_41(1), func_41(2), 1, 2);
			__LIB_10__::func_260(0, 1);
			__LIB_3__::func_353("LSSLD2_START", 0);
			return 8;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_71(cParam0))
		{
			__LIB_10__::func_260(1, 1);
			__LIB_3__::func_353("LSSLD2_START", 0);
			return 6;
		}
	}
	return 2;
}

void func_12(char[4] cParam0)
{
	if (func_72(cParam0))
	{
		if (__LIB_10__::func_261(cParam0->f_346))
		{
			__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
			__LIB_10__::func_464(&(cParam0->f_32), &(cParam0->f_352));
			func_75(cParam0);
		}
		else
		{
			__LIB_10__::func_262(cParam0);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			__LIB_10__::func_263(0, 1, 1);
		}
		__LIB_10__::func_253(cParam0, 7);
	}
}

void func_13(char[4] cParam0)
{
	int iVar0;
	if (__LIB_10__::func_261(cParam0->f_346))
	{
		if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 32))
		{
			__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
			if (func_75(cParam0))
			{
				__LIB_10__::func_465(cParam0, 1);
				iVar0 = func_79(cParam0);
				__LIB_10__::func_253(cParam0, iVar0);
			}
		}
	}
	else
	{
		__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
		if (__LIB_0__::func_58(cParam0))
		{
			__LIB_10__::func_264(cParam0);
			__LIB_10__::func_465(cParam0, 0);
			iVar0 = func_79(cParam0);
			__LIB_10__::func_253(cParam0, iVar0);
		}
		else
		{
			__LIB_10__::func_263(0, 1, 1);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), true);
			__LIB_0__::func_11(cParam0);
		}
	}
}

void func_14(char[4] cParam0)
{
	int iVar0;
	iVar0 = func_83(cParam0);
	if (iVar0 != 8)
	{
		__LIB_10__::func_253(cParam0, iVar0);
	}
}

void func_15(char[4] cParam0)
{
	bool bVar0;
	if (cParam0->f_1 != 9)
	{
		__LIB_10__::func_253(cParam0, 9);
	}
	__LIB_10__::func_256(cParam0, 0);
	func_84(*cParam0, 1, 1);
	if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		__LIB_5__::func_109(cParam0, 0, 1);
		MISC::_0x1096603B519C905F("");
		if (MISC::GET_MISSION_FLAG())
		{
			MISC::SET_MISSION_FLAG(false);
		}
		__LIB_0__::func_769();
		__LIB_0__::func_867(0);
		__LIB_0__::func_8(&Global_1935630, 4);
	}
	if (__LIB_10__::func_341(*cParam0))
	{
		if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_8, 8))
		{
			__LIB_1__::func_422("OBJ_COMPLETE_NOT", 7500, 0, 1, 0, 0, -1, -1, 0);
		}
		else if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_8, 16))
		{
			__LIB_1__::func_422("OBJ_COMPLETE_AB", 7500, 0, 1, 0, 0, -1, -1, 0);
		}
		else
		{
			__LIB_1__::func_422("OBJ_COMPLETE_REC", 7500, 0, 1, 0, 0, -1, -1, 0);
		}
	}
	func_39(cParam0);
	__LIB_0__::func_8(&(cParam0->f_16), 1);
	bVar0 = false;
	bVar0 = true;
	if (bVar0)
	{
		__LIB_0__::func_297();
		__LIB_1__::func_140();
	}
	__LIB_10__::func_253(cParam0, 11);
}

void func_16(char[4] cParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	if (cParam0->f_1 != 10)
	{
		__LIB_10__::func_253(cParam0, 10);
	}
	__LIB_10__::func_256(cParam0, 1);
	if (bParam1 == 1)
	{
		__LIB_0__::func_297();
		__LIB_1__::func_140();
	}
	else
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!__LIB_0__::func_75(&(cParam0->f_2070)))
			{
				__LIB_1__::func_283(&(cParam0->f_2070), 0);
			}
			__LIB_0__::func_11(cParam0);
			bVar0 = CAM::_0x139EFB0A71DD9011();
			bVar1 = CAM::_0x7CE9DC58E3E4755F();
			if (!__LIB_0__::func_1(cParam0->f_16, 16) && !bVar1)
			{
				if (!bVar0)
				{
					__LIB_1__::func_193(1, 1);
					__LIB_0__::func_7(&(Global_1347343.f_11), 131072);
					return;
				}
				else
				{
					__LIB_0__::func_7(&(cParam0->f_16), 16);
				}
			}
			if (bVar1)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
			}
			else if (__LIB_1__::func_871(&(cParam0->f_2070)) >= 2500)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				return;
			}
		}
		iVar2 = 1;
		if (__LIB_0__::func_1(cParam0->f_16, 4))
		{
			iVar2 = 2;
			if (PED::GET_PED_CONFIG_FLAG(Global_35, 11, true))
			{
				StringCopy(&(cParam0->f_2208), "PLAYER_KO", 16);
			}
			else
			{
				StringCopy(&(cParam0->f_2208), "PLAYER_DEAD", 16);
			}
		}
		else if (__LIB_0__::func_1(cParam0->f_16, 8))
		{
			iVar2 = 6;
			StringCopy(&(cParam0->f_2208), "PLAYER_ARRESTED", 16);
		}
		__LIB_1__::func_611(Global_1392626[*cParam0 /*32*/].f_3, iVar2, &(cParam0->f_2208), __LIB_0__::func_58(), 0, 0);
	}
	if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		MISC::_0x1096603B519C905F("");
		if (MISC::GET_MISSION_FLAG())
		{
			MISC::SET_MISSION_FLAG(false);
		}
		__LIB_0__::func_867(0);
		__LIB_0__::func_769();
		__LIB_0__::func_8(&Global_1935630, 4);
	}
	__LIB_10__::func_375(*cParam0);
	bParam1 = true;
	if (__LIB_0__::func_1(cParam0->f_16, 12))
	{
		bParam1 = true;
	}
	else
	{
		func_39(cParam0);
	}
	if (bParam1)
	{
		func_23(cParam0);
	}
	else
	{
		__LIB_0__::func_8(&(cParam0->f_16), 1);
		__LIB_10__::func_253(cParam0, 11);
	}
}

void func_17(char[4] cParam0)
{
	int iVar0;
	if (Global_1392626[*cParam0 /*32*/].f_9 & 4096 != 0)
	{
		__LIB_10__::func_361(*cParam0);
	}
	if (__LIB_0__::func_296(64, 1, 1))
	{
		iVar0 = __LIB_0__::func_298(0);
		if (__LIB_0__::func_6(iVar0))
		{
			__LIB_0__::func_11(cParam0);
			func_23(cParam0);
			return;
		}
	}
	if (__LIB_10__::func_265())
	{
		__LIB_0__::func_11(cParam0);
		func_23(cParam0);
		return;
	}
	else if (!__LIB_0__::func_75(&(cParam0->f_2064)) || IntToFloat(__LIB_1__::func_871(&(cParam0->f_2064))) > __LIB_2__::func_18(cParam0))
	{
		__LIB_1__::func_283(&(cParam0->f_2064), 1);
		if (func_105(cParam0))
		{
			__LIB_10__::func_253(cParam0, 12);
		}
	}
}

void func_18(var uParam0)
{
	func_19(uParam0, 1);
	if (__LIB_0__::func_1(Global_1392626[*uParam0 /*32*/].f_9, 512))
	{
		__LIB_0__::func_297();
		__LIB_1__::func_140();
	}
}

void func_19(var uParam0, int iParam1)
{
	__LIB_10__::func_249(*uParam0, iParam1);
	func_23(uParam0);
}

void func_23(char[4] cParam0)
{
	func_107(cParam0);
	__LIB_10__::func_342(cParam0);
	__LIB_10__::func_479(cParam0);
	if ((cParam0->f_1 != 12 && __LIB_10__::func_266(cParam0) != 2) && !__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_10, 2))
	{
		__LIB_8__::func_985(*cParam0);
	}
	__LIB_10__::func_479(cParam0);
	__LIB_3__::func_525(&(cParam0->f_2210[0]), &(cParam0->f_2213[0]));
	__LIB_3__::func_525(&(cParam0->f_2210[1]), &(cParam0->f_2213[1]));
	if (__LIB_10__::func_266(cParam0) == 0)
	{
		__LIB_10__::func_471(*cParam0);
	}
	__LIB_2__::func_788(&(Global_1392626[*cParam0 /*32*/].f_11), 1, 0, 1);
	HUD::_TEXT_DATABASE_DELETE("LOAN");
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(cParam0->f_2205)))
	{
		HUD::_TEXT_DATABASE_DELETE(&(cParam0->f_2205));
	}
	__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 8);
	if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
	}
	if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		__LIB_0__::func_769();
	}
	__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 4);
	__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 512);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_31(var uParam0)
{
	__LIB_10__::func_267(uParam0, "LSSOLAU");
	__LIB_10__::func_268(uParam0, 15);
	__LIB_10__::func_269(uParam0, 15);
	func_129(uParam0);
	__LIB_10__::func_497(&(uParam0->f_2041), Local_52.f_6);
	__LIB_10__::func_497(&(uParam0->f_2041), joaat("S_M_Y_ARMY_01"));
	__LIB_10__::func_497(&(uParam0->f_2041), Local_350.f_5);
	__LIB_10__::func_497(&(uParam0->f_2041), Local_361[0 /*8*/].f_7);
	__LIB_10__::func_497(&(uParam0->f_2041), joaat("P_HAMMER03X"));
	__LIB_10__::func_497(&(uParam0->f_2041), joaat("WAGON05X"));
	__LIB_10__::func_497(&(uParam0->f_2041), Local_319[0 /*6*/].f_5);
	__LIB_10__::func_497(&(uParam0->f_2041), Local_319[1 /*6*/].f_5);
	__LIB_10__::func_497(&(uParam0->f_2041), joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"));
	PROPSET::_REQUEST_PROPSET(iLocal_526);
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_528);
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_529);
	PED::ADD_RELATIONSHIP_GROUP("weathersRel", &iLocal_479);
	PED::ADD_RELATIONSHIP_GROUP("soldiersRel", &iLocal_480);
	MISC::CLEAR_AREA(Local_356.f_1, 50f, 2097152);
	HUD::_TEXT_DATABASE_DELETE(&(uParam0->f_2205));
}

bool func_38(char[4] cParam0)
{
	int iVar0;
	float fVar1;
	if (cParam0->f_1 == 3)
	{
		if (func_131(cParam0))
		{
			__LIB_10__::func_234(*cParam0, 1024);
			__LIB_10__::func_256(cParam0, 5);
			return true;
		}
	}
	if (__LIB_0__::func_296(0, 1, 0))
	{
		iVar0 = __LIB_0__::func_298(0);
		if (__LIB_0__::func_6(iVar0) && Global_1392626[*cParam0 /*32*/].f_3 != __LIB_0__::func_298(0))
		{
			__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_8), 1);
			__LIB_10__::func_256(cParam0, 6);
			return true;
		}
	}
	if (Global_1392626[*cParam0 /*32*/].f_12 != -1)
	{
		if (__LIB_0__::func_730(Global_1392626[*cParam0 /*32*/].f_12))
		{
			__LIB_10__::func_234(*cParam0, 2048);
			return true;
		}
	}
	if (Global_1392626[*cParam0 /*32*/].f_22 != -1)
	{
		if (!__LIB_2__::func_117(Global_1392626[*cParam0 /*32*/].f_22))
		{
			__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_8), 1);
			__LIB_10__::func_256(cParam0, 3);
			return true;
		}
	}
	if (__LIB_10__::func_362(*cParam0))
	{
		__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_8), 1);
		__LIB_10__::func_256(cParam0, 7);
		return true;
	}
	if (__LIB_7__::func_411(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		__LIB_10__::func_234(*cParam0, 16384);
		__LIB_10__::func_256(cParam0, 4);
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1392626[*cParam0 /*32*/].f_11))
	{
		if (!__LIB_10__::func_363(*cParam0, (Global_1392626[*cParam0 /*32*/].f_5 + 10f)))
		{
			__LIB_10__::func_256(cParam0, 2);
			return true;
		}
	}
	else if (__LIB_0__::func_272(Global_1392626[*cParam0 /*32*/].f_11, 1))
	{
		if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_8, 256))
		{
			if (!__LIB_10__::func_363(*cParam0, (Global_1392626[*cParam0 /*32*/].f_5 + 10f)) && !__LIB_13__::func_45(Global_1392626[*cParam0 /*32*/].f_11, 0, &(cParam0->f_2077), &(cParam0->f_2105), 0, 0))
			{
				__LIB_10__::func_256(cParam0, 2);
				return true;
			}
		}
	}
	fVar1 = BUILTIN::VDIST2(Global_1392626[*cParam0 /*32*/].f_24, Global_36);
	if (__LIB_10__::func_270(fVar1))
	{
		__LIB_10__::func_234(*cParam0, 8192);
		__LIB_10__::func_256(cParam0, 5);
		return true;
	}
	return false;
}

void func_39(char[4] cParam0)
{
	func_142(cParam0);
	if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		__LIB_0__::func_769();
		__LIB_1__::func_723(0);
		if (!Global_1935630.f_12)
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
		}
		UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
		__LIB_5__::func_102();
	}
	__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 4);
	if (__LIB_10__::func_266(cParam0) != 2 && !__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_10, 2))
	{
		__LIB_8__::func_985(*cParam0);
	}
	__LIB_10__::func_479(cParam0);
	if (__LIB_10__::func_266(cParam0) == 0)
	{
		__LIB_10__::func_471(*cParam0);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	__LIB_1__::func_345();
	__LIB_3__::func_525(&(cParam0->f_2210[0]), &(cParam0->f_2213[0]));
	__LIB_3__::func_525(&(cParam0->f_2210[1]), &(cParam0->f_2213[1]));
	__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_9), 8);
	__LIB_10__::func_384(cParam0);
}

struct<4> func_41(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	if (iVar0 == 1 || iVar0 == 0)
	{
		Var1 = { 1410.855f, 1171.282f, 183.6008f };
		Var1.f_3 = 188.2421f;
	}
	else if (iVar0 == 2)
	{
		Var1 = { 1410.844f, 1170.692f, 183.6964f };
		Var1.f_3 = 302.8225f;
	}
	return Var1;
}

bool func_42(var uParam0)
{
	return func_150(*uParam0, uParam0->f_3);
}

bool func_46(char[4] cParam0)
{
	if (cParam0->f_1 == 8)
	{
		if (func_151(cParam0))
		{
			return true;
		}
	}
	return false;
}

void func_47(char[4] cParam0)
{
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	if (cParam0->f_1 > 3)
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (cParam0->f_1 <= 3 && HUD::_TEXT_DATABASE_HAS_LOADED("LOAN"))
	{
		if (!__LIB_10__::func_235(*cParam0, 4))
		{
			func_152(cParam0);
		}
	}
}

bool func_57(var uParam0)
{
	if (func_166(536870912))
	{
		return true;
	}
	if (func_167(uParam0))
	{
		if (func_168())
		{
			if (func_169())
			{
				if (func_170())
				{
					if (func_171(0, 4, "pl_Leadin"))
					{
						__LIB_0__::func_928(&(uParam0->f_2106), Global_35, "ARTHUR", 0);
						__LIB_0__::func_928(&(uParam0->f_2106), Local_52, "LOAN_JWEATHERS", 0);
						func_173(536870912);
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_58(char[4] cParam0)
{
	struct<4> Var0;
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
	if (!__LIB_1__::func_44(Global_1392626[*cParam0 /*32*/].f_3))
	{
		if (!__LIB_0__::func_702(Global_1392626[*cParam0 /*32*/].f_3))
		{
			__LIB_1__::func_298(Global_1392626[*cParam0 /*32*/].f_3, 1);
		}
		__LIB_1__::func_821(Global_1392626[*cParam0 /*32*/].f_3, 1, 1);
		__LIB_0__::func_7(&Global_1935630, 4);
		__LIB_10__::func_237(4);
	}
	__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_9), 4);
	__LIB_8__::func_985(*cParam0);
	MISC::_0x1096603B519C905F(__LIB_10__::func_274(*cParam0));
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	__LIB_5__::func_109(cParam0, 1, 0);
	AUDIO::_0x33D51F801CB16E4F();
	__LIB_1__::func_723(1);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	__LIB_1__::func_716(1);
	__LIB_10__::func_275(cParam0);
	if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 512))
	{
		Var0 = { func_41(0) };
		if (!func_42(&Var0))
		{
			__LIB_0__::func_7(&(cParam0->f_16), 128);
		}
		__LIB_10__::func_378(*cParam0, func_41(0), func_41(1), 0, 1);
	}
}

void func_59(char[4] cParam0)
{
	cParam0->f_346 = func_183();
	__LIB_10__::func_401(cParam0, Local_52.f_1);
	func_185(cParam0, &(uLocal_499[2]));
	__LIB_10__::func_564(cParam0, Global_35, 0, 0, 0, 0);
	__LIB_10__::func_564(cParam0, Local_52, 0, 0, 0, 0);
	__LIB_10__::func_564(cParam0, Local_356, "WAGON05X", 0, 0, 0);
	__LIB_10__::func_564(cParam0, Local_370[0 /*8*/], "p_hammer03x", 0, 0, 0);
	__LIB_10__::func_564(cParam0, Local_379[0 /*8*/], "w_revolver_cattleman01", 0, 0, 0);
	__LIB_10__::func_564(cParam0, Local_361[0 /*8*/], "p_cratetools01x", 0, 0, 0);
	__LIB_10__::func_564(cParam0, Local_319[0 /*6*/], "Horse_01", 0, 0, 0);
	__LIB_10__::func_564(cParam0, Local_319[1 /*6*/], "Horse_01^1", 0, 0, 0);
	if (__LIB_0__::func_871())
	{
		if (iLocal_51 == 0)
		{
			__LIB_10__::func_301(&(cParam0->f_32), "1-HighHonor");
		}
		else
		{
			__LIB_10__::func_301(&(cParam0->f_32), "1-HighHonor-MultiStart");
		}
		func_189(&(cParam0->f_32), __LIB_0__::func_482("1-HighHonor-MultiStart"));
	}
	else
	{
		if (iLocal_51 == 0)
		{
			__LIB_10__::func_301(&(cParam0->f_32), "2-LowHonor");
		}
		else
		{
			__LIB_10__::func_301(&(cParam0->f_32), "2-LowHonor-MultiStart");
		}
		func_189(&(cParam0->f_32), __LIB_0__::func_482("2-LowHonor-MultiStart"));
	}
	__LIB_10__::func_599(cParam0, 26600);
	__LIB_10__::func_558(cParam0, 26686);
	__LIB_10__::func_554(&(cParam0->f_32), 27352);
	__LIB_0__::func_88(&(cParam0->f_32), 131072);
	__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
}

bool func_60(char[4] cParam0)
{
	if (!__LIB_10__::func_344(cParam0))
	{
		return false;
	}
	__LIB_10__::func_374(cParam0);
	if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_8, 512))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(cParam0->f_348)) && __LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 16))
		{
			if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_8, 2))
			{
				__LIB_10__::func_565(&(cParam0->f_352), cParam0->f_348, 0);
			}
			else
			{
				__LIB_18__::func_244(&(cParam0->f_352), cParam0->f_348, 0, 0);
				if (__LIB_10__::func_277(&(cParam0->f_352)))
				{
					return true;
				}
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(cParam0->f_346))
		{
			if (__LIB_10__::func_261(cParam0->f_346))
			{
				if (!__LIB_0__::func_86(cParam0->f_32.f_5))
				{
					if (VOLUME::_DOES_VOLUME_EXIST(cParam0->f_2040))
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, cParam0->f_2040, true, 0))
						{
							if (cParam0->f_17 == 2)
							{
								__LIB_10__::func_342(cParam0);
								return true;
							}
						}
					}
					else if (BUILTIN::VDIST2(Global_36, cParam0->f_32.f_5) < 6f)
					{
						if (cParam0->f_17 == 2)
						{
							__LIB_10__::func_342(cParam0);
							return true;
						}
					}
				}
				else if (BUILTIN::VDIST2(Global_36, cParam0->f_32.f_5) < 6f)
				{
					__LIB_10__::func_342(cParam0);
					return true;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_1392626[*cParam0 /*32*/].f_11))
		{
			func_202(cParam0);
			if ((!PED::IS_PED_RAGDOLL(Global_35) && !PED::IS_PED_JUMPING(Global_35)) && !PED::IS_PED_INJURED(Global_1392626[*cParam0 /*32*/].f_11))
			{
				if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 1024))
				{
					func_203(&(Global_1392626[*cParam0 /*32*/].f_11), &(cParam0->f_2216), cParam0->f_2295, &(cParam0->f_2277), 0.1f, 3, 0, cParam0->f_2296, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
					if (__LIB_9__::func_754(&(cParam0->f_2216)))
					{
						__LIB_10__::func_479(cParam0);
						__LIB_10__::func_345(cParam0);
						__LIB_10__::func_342(cParam0);
						return true;
					}
				}
			}
		}
	}
	if (func_206(cParam0))
	{
		if (cParam0->f_17 == 2)
		{
			__LIB_10__::func_342(cParam0);
			return true;
		}
	}
	return false;
}

void func_61(char[4] cParam0)
{
	int iVar0;
	func_58(cParam0);
	__LIB_2__::func_480(&(cParam0->f_2277), 0, 0, 1, 0);
	__LIB_10__::func_479(cParam0);
	__LIB_0__::func_7(&(cParam0->f_16), 1);
	func_208(cParam0);
	__LIB_10__::func_253(cParam0, func_209(cParam0));
	iVar0 = func_209(cParam0);
	if (iVar0 == 7)
	{
		func_12(cParam0);
		if (cParam0->f_1 != 7)
		{
			iVar0 = 6;
		}
	}
	else if (iVar0 == 8)
	{
		SCRIPTS::SHUTDOWN_LOADING_SCREEN();
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(0);
		}
	}
}

bool func_67(char[4] cParam0, bool bParam1)
{
	int iVar0;
	if (bParam1)
	{
		if (!bLocal_769)
		{
			func_212();
			return false;
		}
		else if (!bLocal_670)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_524))
			{
				func_213(&iLocal_524, joaat("S_VEH_LANTERN_RF"));
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_525))
			{
				func_213(&iLocal_525, joaat("S_VEH_LANTERN_LF"));
			}
			else
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_525, false, false);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_525, false);
				ENTITY::SET_ENTITY_PROOFS(iLocal_524, 5, false);
				ENTITY::SET_ENTITY_PROOFS(iLocal_525, 5, false);
				bLocal_670 = true;
			}
			return false;
		}
	}
	if (!func_166(1))
	{
		if (func_214())
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_356))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(Local_356, 1412.128f, 1167.481f, 184.8345f, 283.7457f, false, true);
				ENTITY::_0x9587913B9E772D29(Local_356, 0);
			}
			func_173(1);
		}
		return false;
	}
	if (!func_166(8192))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_60[iVar0 /*43*/]))
			{
				func_215(Local_60[iVar0 /*43*/]);
				if (iVar0 != 3)
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_60[iVar0 /*43*/], Local_60[iVar0 /*43*/].f_1, Local_60[iVar0 /*43*/].f_10, true, false, true);
				}
			}
			iVar0++;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_319[2 /*6*/]))
		{
			func_215(Local_319[2 /*6*/]);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_319[2 /*6*/], Local_60[3 /*43*/].f_1, Local_60[3 /*43*/].f_10, true, false, true);
		}
		func_173(8192);
		return false;
	}
	if (!func_166(-2147483648))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_60[iVar0 /*43*/]))
			{
				TASK::TASK_SEEK_COVER_TO_COORDS(Local_60[iVar0 /*43*/], Local_60[iVar0 /*43*/].f_4, Global_36, 10000, 0, 0, 0);
			}
			iVar0++;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_60[3 /*43*/]))
		{
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Local_60[3 /*43*/], Local_60[3 /*43*/].f_4, Global_35, 1.25f, 1, 4f, 5f, 0, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), -1, 0);
		}
		func_173(-2147483648);
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_52))
	{
		PED::SET_PED_CONFIG_FLAG(Local_52, 363, true);
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 363, true);
	if (!MISC::_DOES_ITEM_HAVE_VALID_BASE(iLocal_508))
	{
		iLocal_508 = TASK::ADD_COVER_POINT(vLocal_512, fLocal_515, 1, 2, 0, false);
		return false;
	}
	__LIB_2__::func_298();
	func_217(1430.027f, 1192.439f, 182.8754f, 359.7534f);
	func_218();
	iLocal_17 = 1;
	func_173(8);
	__LIB_0__::func_568(Local_52.f_1, 200f, 0);
	__LIB_1__::func_572(Local_52.f_1, 200f, 0, 0, 0, 0, 0);
	__LIB_0__::func_145(0, 0);
	func_221();
	return true;
}

bool func_71(char[4] cParam0)
{
	if (!bLocal_769)
	{
		bLocal_769 = true;
	}
	if (!func_226())
	{
		return false;
	}
	if (!func_166(8))
	{
		__LIB_0__::func_8(&(Global_1392626[4 /*32*/].f_9), 16);
		func_67(cParam0, 0);
	}
	else if (!func_166(131072))
	{
		if (func_227())
		{
			func_173(131072);
		}
	}
	else if (!func_166(64))
	{
		if (func_171(1, 4, "PL_LOOP"))
		{
			func_228();
			func_173(64);
			func_173(1048576);
		}
	}
	else if (!__LIB_0__::func_1(Global_1392626[4 /*32*/].f_9, 16))
	{
		if (!func_166(16))
		{
			__LIB_2__::func_426(&(Local_319[0 /*6*/]));
			__LIB_2__::func_426(&(Local_319[1 /*6*/]));
			func_230();
			__LIB_2__::func_426(&(Local_319[2 /*6*/]));
			__LIB_2__::func_426(&(Local_319[3 /*6*/]));
			__LIB_2__::func_426(&(Local_319[4 /*6*/]));
		}
		else if (func_231())
		{
			__LIB_10__::func_564(cParam0, iLocal_507, "Horse_01", 0, 0, 0);
			__LIB_0__::func_568(Local_52.f_1, 200f, 0);
			__LIB_1__::func_572(Local_52.f_1, 200f, 0, 0, 0, 0, 0);
			iLocal_17 = 1;
			func_232(cParam0);
		}
	}
	else if (__LIB_0__::func_1(Global_1392626[4 /*32*/].f_9, 32))
	{
		return true;
	}
	return false;
}

bool func_72(char[4] cParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(cParam0->f_348)))
	{
		if (!__LIB_18__::func_244(&(cParam0->f_352), cParam0->f_348, 0, 0))
		{
			return false;
		}
	}
	else
	{
		__LIB_10__::func_263(1, 1, 1);
		func_233(cParam0);
		if (!__LIB_0__::func_0(cParam0))
		{
			return false;
		}
		if (__LIB_6__::func_904())
		{
			__LIB_3__::func_732(1);
			return false;
		}
	}
	if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 32))
	{
		return false;
	}
	return true;
}

int func_75(char[4] cParam0)
{
	char cVar0[32];
	StringCopy(&cVar0, cParam0->f_346, 32);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return 1;
	}
	return func_245(cVar0, &(cParam0->f_32), cParam0);
}

int func_79(char[4] cParam0)
{
	int iVar0;
	if (iLocal_17 == 0)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 1)
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_361[iVar0 /*8*/], Local_361[iVar0 /*8*/].f_1, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(Local_361[iVar0 /*8*/], Local_361[iVar0 /*8*/].f_4, 2, false);
			iVar0++;
		}
		func_217(1430.027f, 1192.439f, 182.8754f, 359.7534f);
		func_218();
		iLocal_17 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(Local_356))
		{
			ENTITY::SET_ENTITY_PROOFS(Local_356, 0, false);
		}
		AICOVERPOINT::_0x1A7A802B2301EDC0(Global_35);
		bLocal_666 = true;
		bLocal_668 = false;
		__LIB_10__::func_378(*cParam0, func_41(1), func_41(2), 1, 2);
		return 8;
	}
	else if (iLocal_17 == 1)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 1)
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_361[iVar0 /*8*/], Local_361[iVar0 /*8*/].f_1, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(Local_361[iVar0 /*8*/], Local_361[iVar0 /*8*/].f_4, 2, false);
			iVar0++;
		}
		func_217(1420.327f, 1191.839f, 182.4411f, 199.9238f);
		func_218();
		__LIB_2__::func_426(&Local_52);
		__LIB_2__::func_426(&Local_350);
		__LIB_2__::func_426(&iLocal_507);
		__LIB_2__::func_426(&(Local_319[0 /*6*/]));
		__LIB_2__::func_426(&(Local_319[1 /*6*/]));
		return 9;
	}
	else if (iLocal_17 == 2)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 1)
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_361[iVar0 /*8*/], Local_361[iVar0 /*8*/].f_1, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(Local_361[iVar0 /*8*/], Local_361[iVar0 /*8*/].f_4, 2, false);
			iVar0++;
		}
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, 1420.332f, 1178.28f, 183.6531f, 141.6994f, true, false, true);
		func_217(1420.327f, 1191.839f, 182.4411f, 199.9238f);
		func_218();
		__LIB_2__::func_426(&Local_52);
		__LIB_2__::func_426(&Local_350);
		__LIB_2__::func_426(&iLocal_507);
		__LIB_2__::func_426(&(Local_319[0 /*6*/]));
		__LIB_2__::func_426(&(Local_319[1 /*6*/]));
		return 9;
	}
	return 8;
}

int func_83(var uParam0)
{
	int iVar0;
	if (!func_166(134217728))
	{
		AUDIO::_0x6339C1EA3979B5F7("Gunfight", "LSSLD1_Scenes");
		func_173(134217728);
	}
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vLocal_509, 15f) > 0)
	{
		FIRE::STOP_FIRE_IN_RANGE(vLocal_509, 15f);
	}
	func_249();
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_250(uParam0, iVar0);
		iVar0++;
	}
	if (__LIB_0__::func_75(&uLocal_560))
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	}
	switch (iLocal_15)
	{
		case 0:
			func_251(uParam0);
			break;
		case 1:
			func_252(uParam0);
			break;
		case 2:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (__LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("GROUP_PISTOL") || __LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("GROUP_REVOLVER"))
			{
				__LIB_10__::func_564(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_35, 0), "w_revolver_cattleman01^1", 0, 0, 0);
			}
			else
			{
				__LIB_10__::func_564(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_35, 2), "w_revolver_cattleman01^1", 0, 0, 0);
			}
			__LIB_10__::func_564(uParam0, iLocal_507, "Horse_01", 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_356))
			{
				ENTITY::SET_ENTITY_PROOFS(Local_356, 0, false);
			}
			__LIB_0__::func_37(&uLocal_560);
			return 7;
	}
	return 8;
}

void func_84(int iParam0, bool bParam1, bool bParam2)
{
	if (!__LIB_4__::func_810(iParam0))
	{
		return;
	}
	else if (!__LIB_0__::func_6(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	if (!__LIB_8__::func_779(1))
	{
		__LIB_10__::func_226(1);
	}
	__LIB_8__::func_985(iParam0);
	if (iParam0 == 0)
	{
		MISC::_0xCC3EDC5614B03F61(29);
	}
	else if (iParam0 == 6)
	{
		MISC::_0xCC3EDC5614B03F61(28);
	}
	else if (iParam0 == 3)
	{
		MISC::_0xCC3EDC5614B03F61(30);
	}
	MISC::CLEAR_BIT(&(Global_40.f_9052), iParam0);
	if (iParam0 == 2)
	{
		Global_40.f_9422[2 /*7*/] = __LIB_0__::func_23();
		__LIB_1__::func_446(&(Global_40.f_9422[2 /*7*/]), 0, 0, 0, 3, 0, 0, 0);
	}
	func_259(Global_1392626[iParam0 /*32*/].f_3, bParam2, bParam1, 0, 1);
	if (Global_1392626[iParam0 /*32*/].f_7 != -1)
	{
		__LIB_10__::func_376(Global_1392626[iParam0 /*32*/].f_7);
	}
}

bool func_105(char[4] cParam0)
{
	bool bVar0;
	bVar0 = false;
	if (__LIB_10__::func_266(cParam0) == 0)
	{
		bVar0 = true;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		if (!func_166(2097152))
		{
			if (func_171(1, 4, "PL_POST_CUTSCENE"))
			{
				if (__LIB_0__::func_264(&uLocal_539) > 3f)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_356))
					{
						ENTITY::SET_ENTITY_PROOFS(Local_356, 0, false);
						FIRE::START_ENTITY_FIRE(Local_356, 0f, -1, 6);
						__LIB_1__::func_148(&uLocal_539);
						func_173(2097152);
					}
				}
			}
		}
		else if (!func_166(4194304))
		{
			if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_356, false, false), 8f))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[1 /*16*/]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_18[1 /*16*/]);
				}
			}
			if (__LIB_0__::func_264(&uLocal_539) > 170f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[1 /*16*/]))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_18[1 /*16*/], "Bool", true, false);
				}
				func_287();
				__LIB_0__::func_37(&uLocal_539);
				func_173(4194304);
			}
		}
	}
	else if (bLocal_663)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[0 /*16*/]))
		{
			if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_18[0 /*16*/], "cs_JohnWeathers"))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_52))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(Local_52, Global_35, 3, 256, -1082130432 /* Float: -1f */, -1, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_52, false);
				}
				func_288(0);
				bLocal_663 = false;
			}
			else
			{
				TASK::_0x2E1D6D87346BB7D2(Local_52, Global_35, 1, 0);
			}
		}
	}
	else if (__LIB_10__::func_266(cParam0) == 5 || __LIB_10__::func_266(cParam0) == 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_52))
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[0 /*16*/]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_18[0 /*16*/], true, false))
			{
				if (func_289(0, "pl_exit"))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_52, Global_35, 7000, 0, 51, 0);
					bLocal_663 = true;
				}
			}
		}
	}
	if (!func_290(2097152))
	{
		if (!func_290(1048576))
		{
			if (func_290(262144))
			{
				__LIB_10__::func_525(2, -1349931633, 1, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				func_292(1048576);
			}
			else if (func_290(524288))
			{
				__LIB_10__::func_525(13, -1349931633, 1, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				func_292(1048576);
			}
		}
	}
	if (__LIB_10__::func_266(cParam0) == 0)
	{
		if (!__LIB_0__::func_266(Global_35, Global_1392626[*cParam0 /*32*/].f_24, 150f, 1, 1))
		{
			if (bVar0)
			{
				if (func_290(1048576) || func_290(2097152))
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
				return true;
			}
		}
		else
		{
			return false;
		}
	}
	else if (!__LIB_0__::func_266(Global_35, Global_1392626[*cParam0 /*32*/].f_24, 250f, 1, 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_52))
		{
			if (__LIB_10__::func_549(Local_52, 1117782016 /* Float: 80f */))
			{
				__LIB_2__::func_426(&Local_52);
			}
			return false;
		}
		return true;
	}
	else
	{
		return false;
	}
	return true;
}

void func_107(char[4] cParam0)
{
	if (!func_166(65536))
	{
		func_288(0);
	}
	func_295(1);
	PED::SET_PED_CONFIG_FLAG(Global_35, 363, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 276, false);
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[1 /*16*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_18[1 /*16*/]);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[0 /*16*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_18[0 /*16*/]);
	}
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_528);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_529);
	FIRE::_0x68F6A75FDF5A70D6(Local_356.f_1, 0f);
	func_287();
	FIRE::STOP_FIRE_IN_RANGE(Local_356.f_1, 20f);
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_356.f_1, 20f);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_524))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_524);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_525))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_525);
	}
	__LIB_2__::func_353(&uLocal_671, 1);
	__LIB_2__::func_353(&uLocal_672, 1);
	__LIB_2__::func_353(&uLocal_673, 1);
	__LIB_10__::func_284(&Local_356);
	PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(iLocal_523);
	if (func_166(134217728))
	{
		AUDIO::_0x9428447DED71FC7E("LSSLD1_Scenes");
		func_298(134217728);
	}
	__LIB_10__::func_515(&uLocal_481);
	__LIB_3__::func_353("LSSLD2_END", 0);
}

void func_129(var uParam0)
{
	func_306();
	func_307();
	func_308();
	func_309();
	func_310();
	func_311();
	func_312();
	func_313();
	func_314();
	iLocal_476 = __LIB_3__::func_430(285212672, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
	STREAMING::REQUEST_MODEL(WEAPON::_GET_WEAPONTYPE_MODEL(iLocal_476), false);
	iLocal_477 = __LIB_3__::func_672(7340032, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
	STREAMING::REQUEST_MODEL(WEAPON::_GET_WEAPONTYPE_MODEL(iLocal_477), false);
	iLocal_478 = __LIB_3__::func_672(7340032, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
	STREAMING::REQUEST_MODEL(WEAPON::_GET_WEAPONTYPE_MODEL(iLocal_478), false);
	__LIB_10__::func_458(uParam0, Local_52.f_1, 0f, 0f, 0f, 15f, 15f, 15f);
	__LIB_10__::func_550(uParam0, fLocal_681, fLocal_682, fLocal_683, fLocal_684, 1f, 0);
	__LIB_0__::func_7(&(Global_1392626[*uParam0 /*32*/].f_8), 512);
	__LIB_0__::func_7(&(Global_1392626[*uParam0 /*32*/].f_8), 128);
	__LIB_4__::func_228(&uLocal_569);
	__LIB_4__::func_228(&uLocal_597);
	__LIB_1__::func_402(&uLocal_597, 0);
}

bool func_131(var uParam0)
{
	if (func_320())
	{
		return true;
	}
	return false;
}

void func_142(char[4] cParam0)
{
	int iVar0;
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	__LIB_10__::func_285(cParam0, 1);
	__LIB_0__::func_769();
	__LIB_2__::func_480(&Local_685, 1, 1, 1, 0);
	vLocal_703.f_2 = 0;
	__LIB_1__::func_480(&Local_52);
	if (__LIB_10__::func_266(cParam0) == 0)
	{
		FIRE::_0x68F6A75FDF5A70D6(Local_356.f_1, 0f);
		VEHICLE::_0x850CE59DEC2028F3(Local_356, 1);
		__LIB_1__::func_148(&uLocal_539);
		if (func_290(262144))
		{
			func_358(joaat("PROVISION_LOCKET_SILVER"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		}
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_60[iVar0 /*43*/]))
			{
				ENTITY::_0x18FF3110CF47115D(Local_60[iVar0 /*43*/], 2, 1);
				ENTITY::_0x18FF3110CF47115D(Local_60[iVar0 /*43*/], 3, 1);
			}
			iVar0++;
		}
		func_288(1);
	}
	else if (__LIB_10__::func_266(cParam0) == 5 || __LIB_10__::func_266(cParam0) == 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_524))
		{
			ENTITY::SET_ENTITY_PROOFS(iLocal_524, 0, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_356))
		{
			if (ENTITY::_IS_ENTITY_FROZEN(Local_356))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_356, false);
			}
		}
		func_288(0);
	}
	if (func_166(134217728))
	{
		AUDIO::_0x9428447DED71FC7E("LSSLD1_Scenes");
		func_298(134217728);
	}
	__LIB_3__::func_353("LSSLD2_END", 0);
}

int func_150(vector3 vParam0, var uParam3)
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
		iVar0 = func_366(0, 0);
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

bool func_151(char[4] cParam0)
{
	if (cParam0->f_1 == 8)
	{
		if (Local_52.f_5 == 5)
		{
			if (!CAM::_0x1204EB53A5FBC63D())
			{
				StringCopy(&(cParam0->f_2208), "SOL2_FAIL_1", 16);
				return true;
			}
		}
		if (__LIB_13__::func_45(Local_52, 0, &uLocal_569, &iLocal_625, 1, 0))
		{
			if (iLocal_625 == 8)
			{
				if (iLocal_628 < 3)
				{
					if (!__LIB_0__::func_75(&uLocal_542))
					{
						__LIB_1__::func_148(&uLocal_542);
					}
					else if (iLocal_628 == 0 || __LIB_0__::func_264(&uLocal_542) > 10f)
					{
						__LIB_8__::func_111(Local_629[3 /*2*/], 0);
						if (func_371(cParam0, Local_629[13 /*2*/], 0))
						{
							if (func_290(2048))
							{
								__LIB_1__::func_148(&uLocal_536);
							}
							__LIB_1__::func_148(&uLocal_542);
							iLocal_628++;
						}
					}
				}
			}
			else if (iLocal_625 == 2)
			{
				StringCopy(&(cParam0->f_2208), "SOL2_FAIL_3", 16);
				return true;
			}
		}
		if (func_372(cParam0, "SOL2_RETURN", "SOL2_FAIL_2", 1416.263f, 1150.719f, 183.66f, 0, 50f, 70f, 30f))
		{
			return true;
		}
	}
	return false;
}

void func_152(char[4] cParam0)
{
	if (!func_290(2))
	{
		if ((__LIB_0__::func_266(Global_35, Global_1392626[*cParam0 /*32*/].f_27, Global_1392626[*cParam0 /*32*/].f_4, 1, 1) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_IN())
		{
			__LIB_10__::func_561(cParam0, "OBJ_SEARCH_SOL2", Local_52.f_1);
			func_292(2);
		}
	}
	else if (!func_290(4))
	{
		__LIB_0__::func_565("OBJ_SEARCH_SOL2", 7500, 0, 0, 0, 1);
		MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), false, true, true, 60f, false);
		func_292(4);
	}
}

bool func_166(int iParam0)
{
	return __LIB_0__::func_27(iLocal_658, iParam0);
}

bool func_167(var uParam0)
{
	if (func_166(512))
	{
		return true;
	}
	if (!func_393())
	{
		return false;
	}
	if (__LIB_0__::func_272(Local_52, 1))
	{
		Global_1392626[*uParam0 /*32*/].f_11 = Local_52;
		ENTITY::_0x9587913B9E772D29(Local_52, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_52, true);
		WEAPON::_GIVE_WEAPON_TO_PED_2(Local_52, iLocal_476, 200, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_52, false, 0f);
		PED::SET_PED_CAN_BE_TARGETTED(Local_52, false);
		PED::SET_PED_CONFIG_FLAG(Local_52, 253, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_52, false);
		PED::SET_PED_CONFIG_FLAG(Local_52, 66, true);
		PED::_0xAE6004120C18DF97(Local_52, 0, 0);
		ENTITY::_0x18FF3110CF47115D(Local_52, 7, 0);
		ENTITY::_0x18FF3110CF47115D(Local_52, 0, 0);
		ENTITY::_0x18FF3110CF47115D(Local_52, 1, 0);
		PED::SET_PED_COMBAT_ABILITY(Local_52, 1);
		PED::SET_PED_COMBAT_MOVEMENT(Local_52, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_52, 0, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_52, 58, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_52, 30, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_52, 111, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_52, iLocal_479);
		PED::SET_PED_CONFIG_FLAG(Local_52, 263, true);
		AUDIO::STOP_PED_SPEAKING(Local_52, true);
		ENTITY::SET_ENTITY_PROOFS(Local_52, 2, true);
		ENTITY::SET_ENTITY_PROOFS(Local_52, 64, true);
		func_173(512);
		return true;
	}
	return false;
}

bool func_168()
{
	int iVar0;
	int iVar1;
	if (func_166(2048))
	{
		return true;
	}
	if (func_394())
	{
		if (((!ENTITY::IS_ENTITY_DEAD(Local_319[0 /*6*/]) && !ENTITY::IS_ENTITY_DEAD(Local_319[1 /*6*/])) && PED::_0xA0BC8FAED8CFEB3C(Local_319[0 /*6*/])) && PED::_0xA0BC8FAED8CFEB3C(Local_319[1 /*6*/]))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_319[0 /*6*/], 48, true);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_319[1 /*6*/], 48, true);
			ENTITY::_0x9587913B9E772D29(Local_319[0 /*6*/], 0);
			ENTITY::_0x9587913B9E772D29(Local_319[1 /*6*/], 0);
			PED::SET_PED_CONFIG_FLAG(Local_319[0 /*6*/], 136, true);
			PED::SET_PED_CONFIG_FLAG(Local_319[1 /*6*/], 136, true);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), Local_319[0 /*6*/], 33, 0, 1);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), Local_319[1 /*6*/], 33, 0, 1);
			__LIB_7__::func_345(Local_319[0 /*6*/], 1);
			__LIB_7__::func_345(Local_319[1 /*6*/], 1);
			PED::_0xA2B8E47442C76CEC(Local_319[0 /*6*/], -1758176869);
			PED::_0xA2B8E47442C76CEC(Local_319[1 /*6*/], -1758176869);
			PED::_UPDATE_PED_VARIATION(Local_319[0 /*6*/], false, true, true, true, false);
			PED::_UPDATE_PED_VARIATION(Local_319[1 /*6*/], false, true, true, true, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_PAUSE(0, MISC::GET_RANDOM_INT_IN_RANGE(10000, 18000));
			TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("WORLD_ANIMAL_HORSE_GRAZING_DOMESTIC"), MISC::GET_RANDOM_INT_IN_RANGE(10000, 20000), true, 0, -1f, false);
			TASK::SET_SEQUENCE_TO_REPEAT(iVar0, true);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("WORLD_ANIMAL_HORSE_GRAZING_DOMESTIC"), MISC::GET_RANDOM_INT_IN_RANGE(9000, 15000), true, 0, -1f, false);
			TASK::TASK_PAUSE(0, MISC::GET_RANDOM_INT_IN_RANGE(10000, 22000));
			TASK::SET_SEQUENCE_TO_REPEAT(iVar1, true);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::TASK_PERFORM_SEQUENCE(Local_319[0 /*6*/], iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			TASK::TASK_PERFORM_SEQUENCE(Local_319[1 /*6*/], iVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
			func_173(2048);
			return true;
		}
	}
	return false;
}

bool func_169()
{
	if (func_166(1024))
	{
		return true;
	}
	if (func_396())
	{
		if (func_397())
		{
			func_398(1);
			FIRE::_0x68F6A75FDF5A70D6(Local_356.f_1, 10f);
			ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_356, false);
			func_173(1024);
			return true;
		}
	}
	return false;
}

bool func_170()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_370[0 /*8*/]))
	{
		Local_370[0 /*8*/] = OBJECT::CREATE_OBJECT(joaat("P_HAMMER03X"), 1414.409f, 1170.342f, 184.176f, true, true, false, false, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_370[0 /*8*/]) && ENTITY::DOES_ENTITY_EXIST(Local_356))
	{
		return true;
	}
	return false;
}

bool func_171(int iParam0, int iParam1, char* sParam2)
{
	if (!Local_18[iParam0 /*16*/].f_14)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[iParam0 /*16*/]))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_18[iParam0 /*16*/], true, false))
			{
				Local_18[iParam0 /*16*/].f_14 = 1;
				return Local_18[iParam0 /*16*/].f_14;
			}
		}
		else
		{
			if (MISC::IS_STRING_NULL(sParam2))
			{
				Local_18[iParam0 /*16*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_18[iParam0 /*16*/].f_1, iParam1, Local_18[iParam0 /*16*/].f_15, false, true);
			}
			else
			{
				Local_18[iParam0 /*16*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_18[iParam0 /*16*/].f_1, iParam1, sParam2, false, true);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[iParam0 /*16*/]))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_18[iParam0 /*16*/]);
				if (iParam0 == 0)
				{
					func_399();
				}
			}
		}
	}
	return Local_18[iParam0 /*16*/].f_14;
}

void func_173(int iParam0)
{
	__LIB_1__::func_683(&iLocal_658, iParam0);
}

char* func_183()
{
	switch (iLocal_17)
	{
		case 0:
			return "LSSOL_INT";
		case 1:
			return "LSSOL_EXT";
	}
	return "";
}

void func_185(char[4] cParam0, var uParam1)
{
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
	{
		cParam0->f_32.f_4 = *uParam1;
	}
}

void func_189(var uParam0, struct<8> Param1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param1))
	{
		return;
	}
	uParam0->f_238 = { Param1 };
}

void func_190(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_52))
	{
		PED::SET_PED_CONFIG_FLAG(Local_52, 363, true);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[0 /*16*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_18[0 /*16*/]);
	}
	AICOVERPOINT::_0x140B3CB1D424A945(Global_35, -1);
	PED::SET_PED_CONFIG_FLAG(Global_35, 363, true);
}

void func_192(var uParam0)
{
	int iVar0;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[0 /*16*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_18[0 /*16*/]);
	}
	if (__LIB_10__::func_551(uParam0, "LSSOL_INT"))
	{
		if (!bLocal_668)
		{
			func_217(1430.027f, 1192.439f, 182.8754f, 359.7534f);
			bLocal_668 = true;
		}
		if (!bLocal_666)
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_356, -102255056))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_361[0 /*8*/], Local_361[0 /*8*/].f_1, false, true, true);
				ENTITY::SET_ENTITY_ROTATION(Local_361[0 /*8*/], Local_361[0 /*8*/].f_4, 2, false);
				bLocal_666 = true;
			}
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_356, -979415648))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_361[0 /*8*/], vLocal_517, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(Local_361[0 /*8*/], vLocal_520, 2, false);
			bLocal_666 = false;
		}
		if (!func_166(16384))
		{
			__LIB_0__::func_568(Local_52.f_1, 100f, 0);
			func_173(16384);
		}
		else if (!func_166(32768))
		{
			__LIB_1__::func_572(Local_52.f_1, 100f, 0, 0, 0, 0, 0);
			func_173(32768);
		}
		if (!func_166(1))
		{
			if (func_214())
			{
				func_173(1);
			}
		}
		else if (!func_166(8192))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_60[iVar0 /*43*/]))
				{
					func_215(Local_60[iVar0 /*43*/]);
				}
				iVar0++;
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_319[2 /*6*/]))
			{
				func_215(Local_319[2 /*6*/]);
			}
			func_173(8192);
		}
		else if (!func_166(-2147483648))
		{
			if (ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_228, "LSSOL_INT_P1A1_T06_Shot_1", 1) || ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_228, "LSSOL_INT_P1_T06_Shot_4", 1))
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_60[iVar0 /*43*/]))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_60[iVar0 /*43*/], Local_60[iVar0 /*43*/].f_1, Local_60[iVar0 /*43*/].f_10, true, false, true);
						TASK::TASK_SEEK_COVER_TO_COORDS(Local_60[iVar0 /*43*/], Local_60[iVar0 /*43*/].f_4, Global_36, 10000, 0, 0, 0);
					}
					iVar0++;
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_319[2 /*6*/]))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_319[2 /*6*/], Local_60[iVar0 /*43*/].f_1, Local_60[iVar0 /*43*/].f_10, true, false, true);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_60[3 /*43*/]))
				{
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Local_60[3 /*43*/], Local_60[3 /*43*/].f_4, Global_35, 1.25f, 1, 4f, 5f, 0, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), -1, 0);
				}
				func_173(-2147483648);
			}
		}
	}
	func_429(uParam0, 0);
}

int func_194(var uParam0)
{
	int iVar0;
	if (!func_166(16384))
	{
		__LIB_0__::func_568(Local_52.f_1, 100f, 0);
		__LIB_1__::func_572(Local_52.f_1, 100f, 0, 0, 0, 0, 0);
		func_173(16384);
	}
	if (!func_166(1))
	{
		if (func_214())
		{
			func_173(1);
		}
	}
	else if (!func_166(8192))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_60[iVar0 /*43*/]))
			{
				func_215(Local_60[iVar0 /*43*/]);
			}
			iVar0++;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_319[2 /*6*/]))
		{
			func_215(Local_319[2 /*6*/]);
		}
		func_173(8192);
	}
	else if (!func_166(-2147483648))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_60[iVar0 /*43*/]))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_60[iVar0 /*43*/], Local_60[iVar0 /*43*/].f_1, Local_60[iVar0 /*43*/].f_10, true, false, true);
				TASK::TASK_SEEK_COVER_TO_COORDS(Local_60[iVar0 /*43*/], Local_60[iVar0 /*43*/].f_4, Global_36, 10000, 0, 0, 0);
			}
			iVar0++;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_319[2 /*6*/]))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_319[2 /*6*/], Local_60[iVar0 /*43*/].f_1, Local_60[iVar0 /*43*/].f_10, true, false, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_60[3 /*43*/]))
		{
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Local_60[3 /*43*/], Local_60[3 /*43*/].f_4, Global_35, 1.25f, 1, 4f, 5f, 0, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), -1, 0);
		}
		func_173(-2147483648);
	}
	else if (!func_166(262144))
	{
		if (AICOVERPOINT::_0x8CBE916CFC64AD5C(Global_35))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_356))
			{
				__LIB_1__::func_338(Local_356, Local_356.f_1);
				ENTITY::SET_ENTITY_HEADING(Local_356, Local_356.f_4);
			}
			__LIB_1__::func_148(&uLocal_554);
			func_173(262144);
		}
	}
	else
	{
		MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
		return 1;
	}
	return 0;
}

void func_202(char[4] cParam0)
{
	float fVar0;
	vector3 vVar1;
	fVar0 = 20f;
	if (!__LIB_0__::func_1(cParam0->f_16, 2))
	{
		if (__LIB_0__::func_272(Global_1392626[*cParam0 /*32*/].f_11, 0))
		{
			if (__LIB_0__::func_266(Global_1392626[*cParam0 /*32*/].f_11, Global_36, 40f, 1, 1))
			{
				vVar1 = { ENTITY::GET_ENTITY_COORDS(Global_1392626[*cParam0 /*32*/].f_11, true, false) };
				if (!__LIB_2__::func_640(Global_1392626[*cParam0 /*32*/].f_11, fVar0, 1075838976 /* Float: 2.5f */, 0, 1, 1084227584 /* Float: 5f */) && __LIB_2__::func_524(vVar1, &(cParam0->f_3), fVar0))
				{
					__LIB_0__::func_7(&(cParam0->f_16), 2);
				}
			}
		}
	}
	else
	{
		__LIB_4__::func_151(Global_1392626[*cParam0 /*32*/].f_11, &(cParam0->f_3), -0.75f, 0f, 0f, 0, 35f, fVar0, -1, 3000, 3000, 1075838976 /* Float: 2.5f */, 0, 1, 1084227584 /* Float: 5f */);
	}
}

int func_203(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
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
		bVar8 = __LIB_5__::func_439(bParam12 >= 0f, bParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
		__LIB_14__::func_141(iParam0, iParam1, uParam3, fParam2, bVar8, sParam7);
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
					if (__LIB_13__::func_892(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, bVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_203(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !bVar8 <= (fParam2 + 5f))
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
					if (__LIB_14__::func_139(iParam0, iParam1, bVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					__LIB_10__::func_577(iParam1, uParam3, bVar8);
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
					__LIB_14__::func_139(iParam0, iParam1, bVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
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
					else if (!__LIB_19__::func_312(iParam1))
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
				if (__LIB_13__::func_317(iParam0, iParam1, fParam4, bVar6))
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
					__LIB_14__::func_139(iParam0, iParam1, bVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
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
				__LIB_10__::func_577(iParam1, uParam3, bVar8);
				if (__LIB_13__::func_317(iParam0, iParam1, fParam4, bVar6))
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

bool func_206(char[4] cParam0)
{
	func_495(cParam0);
	if (!bLocal_769)
	{
		func_212();
	}
	else if (!bLocal_670)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_524))
		{
			func_213(&iLocal_524, joaat("S_VEH_LANTERN_RF"));
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_525))
		{
			func_213(&iLocal_525, joaat("S_VEH_LANTERN_LF"));
		}
		else
		{
			ENTITY::SET_ENTITY_COLLISION(iLocal_525, false, false);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_525, false);
			ENTITY::SET_ENTITY_PROOFS(iLocal_524, 5, false);
			ENTITY::SET_ENTITY_PROOFS(iLocal_525, 5, false);
			bLocal_670 = true;
		}
	}
	if (__LIB_0__::func_71(Global_35))
	{
		__LIB_1__::func_448(Global_35, Local_52.f_1, 0, 20f, 15f, 12f, 9f, 1, 1, 1, 0);
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		__LIB_1__::func_448(Global_35, Local_52.f_1, 0, 20f, 15f, 12f, 9f, 1, 1, 1, 0);
		if (!bLocal_664)
		{
			if (__LIB_0__::func_94(Global_35, Local_52.f_1, 1) < 10f)
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, 0);
				bLocal_664 = true;
			}
		}
	}
	if (__LIB_0__::func_48(Global_35, Local_52, 11f, 1))
	{
		TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_52, 500, 0, 51, 0);
	}
	if (!bLocal_766)
	{
		if (__LIB_0__::func_266(Global_35, Local_52.f_1, 18f, 1, 1) && MAP::DOES_BLIP_EXIST(Global_1392626[4 /*32*/]))
		{
			__LIB_6__::func_736(&vLocal_703, &Local_685, 0, Global_1392626[4 /*32*/], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			__LIB_2__::func_602(&(Local_685[0 /*17*/]), "OBJ_INTERACT", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			__LIB_2__::func_411(&(Local_685[0 /*17*/]), 0, 0);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), Local_52, 8, 0, 1);
			bLocal_766 = true;
		}
	}
	else if (!bLocal_765)
	{
		iLocal_764 = func_203(&Local_52, &vLocal_703, 5f, &Local_685, 0.1f, 3, 0, 0, 2049, 0, 0, 2, -1082130432 /* Float: -1f */);
		if ((__LIB_0__::func_48(Global_35, Local_52, 5f, 1) && __LIB_0__::func_393(Global_35, uLocal_499[3], 0, 1)) || __LIB_0__::func_393(Global_35, uLocal_499[4], 0, 1))
		{
			if (!bLocal_767)
			{
				__LIB_2__::func_411(&(Local_685[0 /*17*/]), 1, 0);
				bLocal_767 = true;
			}
		}
		else if (bLocal_767)
		{
			__LIB_2__::func_411(&(Local_685[0 /*17*/]), 0, 0);
			bLocal_767 = false;
		}
		if (iLocal_764 == 0)
		{
			if (__LIB_0__::func_393(Global_35, uLocal_499[4], 0, 1) || !__LIB_0__::func_393(Global_35, uLocal_499[3], 0, 1))
			{
				if (__LIB_0__::func_871())
				{
					__LIB_10__::func_404(&(cParam0->f_32), "1-HighHonor-MultiStart");
				}
				else
				{
					__LIB_10__::func_404(&(cParam0->f_32), "2-LowHonor-MultiStart");
				}
				__LIB_3__::func_732(0);
				func_502(1);
				__LIB_6__::func_815(&vLocal_703, Local_52);
				return true;
			}
			__LIB_3__::func_732(1);
			__LIB_2__::func_480(&Local_685, 1, 1, 1, 0);
			vLocal_703.f_2 = 0;
			__LIB_1__::func_480(&Local_52);
			TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_52, 5000, 0, 51, 0);
			WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 1, 0);
			if (__LIB_0__::func_71(Global_35))
			{
				func_504();
				TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, 0);
			}
			bLocal_765 = true;
		}
	}
	else if (!bLocal_768)
	{
		__LIB_14__::func_141(&Local_52, &vLocal_703, &Local_685, 5f, -1082130432 /* Float: -1f */, 0);
		if (!PED::IS_PED_ON_FOOT(Global_35))
		{
			func_502(0);
			return false;
		}
		if (!__LIB_0__::func_163(iLocal_506, 713668775))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_506, 1420.438f, 1156.196f, 183.8919f, 1f, -1, 0.25f, 0, 40000f);
		}
		if (!bLocal_665)
		{
			func_502(0);
			if (!__LIB_0__::func_266(Global_35, 1413.068f, 1164.715f, 185.1305f, 0.8f, 1, 1))
			{
				if (__LIB_0__::func_264(&uLocal_563) > 6f)
				{
					__LIB_0__::func_37(&uLocal_563);
					__LIB_1__::func_148(&uLocal_566);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Local_52, 2000, -1f, -1f, -1f);
					bLocal_665 = true;
					return false;
				}
				if (!__LIB_0__::func_163(Global_35, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, 1413.068f, 1164.715f, 184.1305f, 1f, 20000, 0.25f, 0, 40000f);
					TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_52, 10000, 0, 51, 0);
					if (!__LIB_0__::func_75(&uLocal_563))
					{
						__LIB_1__::func_148(&uLocal_563);
					}
				}
			}
			else
			{
				__LIB_0__::func_37(&uLocal_563);
				__LIB_1__::func_148(&uLocal_566);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Local_52, 2000, -1f, -1f, -1f);
				bLocal_665 = true;
				return false;
			}
		}
		else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[0 /*16*/]))
		{
			if (__LIB_0__::func_264(&uLocal_566) > 1f)
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_18[0 /*16*/], "b_breakout", true, false);
				func_505();
				func_502(1);
				__LIB_0__::func_37(&uLocal_566);
				bLocal_768 = true;
			}
			else
			{
				func_502(0);
			}
		}
	}
	else if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_18[0 /*16*/]) >= 0.99f)
	{
		__LIB_14__::func_141(&Local_52, &vLocal_703, &Local_685, 5f, -1082130432 /* Float: -1f */, 0);
		__LIB_3__::func_732(0);
		func_502(1);
		__LIB_6__::func_815(&vLocal_703, Local_52);
		return true;
	}
	else if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_18[0 /*16*/]) > 0.3f)
	{
		__LIB_14__::func_141(&Local_52, &vLocal_703, &Local_685, 5f, -1082130432 /* Float: -1f */, 0);
		TASK::TASK_LOOK_AT_ENTITY(Local_52, Global_35, 500, 16, 51, 0);
		func_502(1);
	}
	else
	{
		__LIB_14__::func_141(&Local_52, &vLocal_703, &Local_685, 5f, -1082130432 /* Float: -1f */, 0);
		func_502(1);
	}
	return false;
}

void func_208(char[4] cParam0)
{
	int iVar0;
	if (__LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("GROUP_PISTOL") || __LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("GROUP_REVOLVER"))
	{
		iVar0 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_35, 0);
		__LIB_10__::func_564(cParam0, iVar0, "w_revolver_cattleman01^1", 0, 0, 0);
	}
	else
	{
		iVar0 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_35, 2);
		__LIB_10__::func_564(cParam0, iVar0, "w_revolver_cattleman01^1", 0, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_379[0 /*8*/]))
	{
		__LIB_10__::func_564(cParam0, Local_379[0 /*8*/], "w_revolver_cattleman01", 0, 0, 0);
	}
	__LIB_3__::func_353("LSSLD2_START", 0);
}

int func_209(char[4] cParam0)
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0) && __LIB_0__::func_266(iVar0, vLocal_509, 150f, 1, 1))
	{
		__LIB_10__::func_552(&(cParam0->f_32), 1397.69f, 1200.02f, 178.52f, 303.24f, 1);
	}
	return 7;
}

void func_212()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_356))
	{
		if (PROPSET::_HAS_PROPSET_LOADED(iLocal_527))
		{
			PROPSET::_ADD_LIGHT_PROPSET_TO_VEHICLE(Local_356, iLocal_527);
			bLocal_769 = true;
		}
		else
		{
			PROPSET::_REQUEST_PROPSET(iLocal_527);
		}
	}
}

void func_213(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = 0;
	iVar2 = ITEMSET::CREATE_ITEMSET(true);
	iVar3 = PROPSET::_GET_ENTITIES_FROM_PROPSET(PROPSET::_GET_VEHICLE_LIGHT_PROPSET(Local_356), iVar2, iParam1, true, false);
	iVar1 = 0;
	while (iVar1 < iVar3)
	{
		iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar2);
		*iParam0 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
		}
		iVar1++;
	}
}

bool func_214()
{
	if (func_545())
	{
		return true;
	}
	return false;
}

void func_215(int iParam0)
{
	ENTITY::SET_ENTITY_VISIBLE(iParam0, true);
	ENTITY::SET_ENTITY_COLLISION(iParam0, true, false);
	AUDIO::STOP_PED_SPEAKING(iParam0, false);
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
}

void func_217(vector3 vParam0, float fParam3)
{
	if (iLocal_506 == 0)
	{
		func_504();
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_506) && __LIB_0__::func_48(iLocal_506, Global_35, 100f, 1))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_506, vParam0, fParam3, true, false, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_506, 48, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_506, true);
	}
}

void func_218()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_506))
	{
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_506, 48, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_506, false);
	}
}

void func_221()
{
	func_547();
	TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Global_35, vLocal_509, -1, 1, 0f, 1, 0, 0, 0, 1, 0);
	PED::_0x2208438012482A1A(Global_35, false, false);
	PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), func_366(16777216, 0), 0);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, func_366(16777216, 0), true, 0, false, false);
	WEAPON::_0x72D4CB5DB927009C(func_366(16777216, 0), -1, 0);
	__LIB_2__::func_615(Local_60[0 /*43*/].f_4);
}

bool func_226()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_507))
	{
		if (__LIB_10__::func_562(4, &iLocal_507, joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), 1323.181f, 1349.004f, 173.5631f, 0, 1, 1, 0, 1, 0, 1, 1))
		{
			TASK::TASK_STAND_STILL(iLocal_507, -1);
		}
	}
	else if (PED::_0xA0BC8FAED8CFEB3C(iLocal_507))
	{
		if (!bLocal_669)
		{
			__LIB_0__::func_862(iLocal_507, -961634645);
			bLocal_669 = true;
		}
		return true;
	}
	return false;
}

bool func_227()
{
	if (func_557())
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_60[4 /*43*/]))
		{
			func_558(4);
			__LIB_1__::func_571(Local_60[4 /*43*/], Local_319[3 /*6*/], 0, -1, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_60[5 /*43*/]))
		{
			func_558(5);
			__LIB_1__::func_571(Local_60[5 /*43*/], Local_319[4 /*6*/], 0, -1, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_319[3 /*6*/]))
		{
			PED::_0x2EB75FB86C41F026(Local_319[3 /*6*/], 3, 0);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_319[3 /*6*/], Local_60[4 /*43*/].f_7, Local_60[4 /*43*/].f_10, true, false, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_319[4 /*6*/]))
		{
			PED::_0x2EB75FB86C41F026(Local_319[4 /*6*/], 3, 0);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_319[4 /*6*/], Local_60[5 /*43*/].f_7, Local_60[5 /*43*/].f_10, true, false, true);
		}
		return true;
	}
	return false;
}

void func_228()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar2 = 0;
	iVar3 = ITEMSET::CREATE_ITEMSET(true);
	iVar4 = PROPSET::_GET_ENTITIES_FROM_PROPSET(iLocal_523, iVar3, 0, false, false);
	iVar2 = 0;
	while (iVar2 < iVar4)
	{
		iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar3);
		iVar1 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(iVar0);
		if (!ENTITY::IS_ENTITY_DEAD(Local_356))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				ENTITY::SET_ENTITY_PROOFS(iVar1, 0, false);
				if (FIRE::IS_ENTITY_ON_FIRE(iVar1))
				{
					FIRE::STOP_ENTITY_FIRE(iVar1, 0);
				}
				FIRE::START_ENTITY_FIRE(iVar1, 0f, -1, 10);
			}
		}
		iVar2++;
	}
}

void func_230()
{
	vector3 vVar0;
	int iVar3;
	iVar3 = 0;
	while (iVar3 < 6)
	{
		if (iVar3 == 0)
		{
			vVar0 = { 1420.412f, 1148.344f, 184.912f };
		}
		else if (iVar3 == 1)
		{
			vVar0 = { 1422.869f, 1158.009f, 184.3722f };
		}
		else if (iVar3 == 2)
		{
			vVar0 = { 1420.032f, 1153.267f, 184.9992f };
		}
		else if (iVar3 == 3)
		{
			vVar0 = { 1411.948f, 1149.544f, 184.7963f };
		}
		else if (iVar3 == 4)
		{
			vVar0 = { 1409.688f, 1143.213f, 184.7164f };
		}
		else if (iVar3 == 5)
		{
			vVar0 = { 1412.838f, 1133.55f, 184.2095f };
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_60[iVar3 /*43*/]))
		{
			__LIB_6__::func_891(Local_60[iVar3 /*43*/]);
			__LIB_1__::func_338(Local_60[iVar3 /*43*/], vVar0);
			AUDIO::DISABLE_PED_PAIN_AUDIO(Local_60[iVar3 /*43*/], true);
			ENTITY::_SET_ENTITY_HEALTH(Local_60[iVar3 /*43*/], 0, 0);
			func_215(Local_60[iVar3 /*43*/]);
		}
		iVar3++;
	}
	func_173(16);
}

bool func_231()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_60[iVar0 /*43*/]) || PED::IS_PED_RAGDOLL(Local_60[iVar0 /*43*/]))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_232(char[4] cParam0)
{
	cParam0->f_346 = func_183();
	__LIB_10__::func_401(cParam0, Local_52.f_1);
	func_185(cParam0, &(uLocal_499[2]));
	__LIB_10__::func_564(cParam0, Global_35, 0, 0, 0, 0);
	__LIB_10__::func_564(cParam0, Local_52, 0, 0, 0, 0);
	__LIB_10__::func_564(cParam0, Local_356, "WAGON05X", 0, 0, 0);
	__LIB_10__::func_564(cParam0, Local_379[0 /*8*/], "w_revolver_cattleman01", 0, 0, 0);
	__LIB_10__::func_564(cParam0, Local_361[0 /*8*/], "p_cratetools01x", 0, 0, 0);
	__LIB_10__::func_599(cParam0, 90610);
	__LIB_10__::func_558(cParam0, 90690);
	__LIB_10__::func_552(&(cParam0->f_32), 1397.69f, 1200.02f, 178.52f, 303.24f, 0);
	__LIB_10__::func_301(&(cParam0->f_32), "1-Start");
	__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
}

void func_233(char[4] cParam0)
{
	if (iLocal_17 == 1)
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	}
}

int func_245(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4, char[4] cParam5)
{
	int iVar0;
	__LIB_10__::func_348(uParam4, &cParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		__LIB_10__::func_476(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (__LIB_0__::func_81(uParam4))
	{
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_228, true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_228, false))
				{
					__LIB_10__::func_563(uParam4, &cParam0);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228))
				{
					__LIB_1__::func_747(uParam4, 4);
					return 0;
				}
				else if (__LIB_10__::func_302(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_221);
				}
				__LIB_1__::func_747(uParam4, 3);
			}
			else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_230)) && __LIB_0__::func_84(uParam4, 134217728))
				{
				}
				else
				{
					__LIB_10__::func_459(uParam4);
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
				__LIB_10__::func_466(uParam4);
				if (!__LIB_0__::func_75(&(uParam4->f_1)))
				{
					__LIB_1__::func_283(&(uParam4->f_1), 0);
				}
				else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_228);
					}
					__LIB_1__::func_747(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228) || !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_228, true, false))
			{
				if (__LIB_10__::func_560(uParam4, &cParam0, 1, 1))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_228, true, false))
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
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_228);
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
					__LIB_10__::func_563(uParam4, &cParam0);
					__LIB_1__::func_747(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_228);
				}
				__LIB_1__::func_747(uParam4, 4);
			}
			break;
		case 3:
			func_578(uParam4);
			if (__LIB_10__::func_302(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_221);
			}
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_228, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228) || __LIB_0__::func_84(uParam4, 512)))
			{
				if (!__LIB_0__::func_84(uParam4, 1024) && __LIB_10__::func_407(uParam4, 1))
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
				__LIB_10__::func_476(uParam4);
			}
			if (__LIB_0__::func_84(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((__LIB_10__::func_303(uParam4) - __LIB_10__::func_304(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (__LIB_10__::func_352(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && __LIB_10__::func_304(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (__LIB_10__::func_305(uParam4))
			{
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228))
				{
				}
				__LIB_0__::func_488(uParam4);
				__LIB_10__::func_547(uParam4);
				return 1;
			}
			else
			{
				if (__LIB_0__::func_84(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_228);
						}
						__LIB_1__::func_148(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_10__::func_288(uParam4, 67108864, 1);
						__LIB_1__::func_747(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!__LIB_0__::func_84(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228)) && CAM::IS_SCREEN_FADED_OUT()) && __LIB_10__::func_304(uParam4) <= 5000) && __LIB_10__::func_304(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!__LIB_0__::func_84(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					__LIB_6__::func_726(&(uParam4->f_285), 0);
					__LIB_0__::func_88(uParam4, 536870912);
				}
				if (__LIB_10__::func_304(uParam4) >= 5000 && __LIB_10__::func_304(uParam4) <= (__LIB_10__::func_303(uParam4) - 5000))
				{
					__LIB_0__::func_89();
				}
			}
			break;
		case 6:
			if (__LIB_10__::func_305(uParam4))
			{
				__LIB_0__::func_488(uParam4);
				__LIB_10__::func_547(uParam4);
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
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228))
					{
						__LIB_0__::func_88(uParam4, 1073741824 /* Float: 2f */);
					}
				}
			}
			else
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_228, true);
						if (UIFEED::_0xC17F69E1418CD11F(9) != 0)
						{
							UIFEED::_0xDD1232B332CBB9E7(9, 1, 0);
						}
						return 0;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam4->f_228))
					{
						return 0;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!__LIB_10__::func_302(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_222);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_228, false);
						}
						__LIB_1__::func_747(uParam4, 3);
					}
					else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_228, false);
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

void func_249()
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_52))
	{
		switch (Local_52.f_5)
		{
			case 0:
				__LIB_0__::func_11();
				break;
			case 1:
				func_590();
				break;
			case 2:
				__LIB_0__::func_11();
				break;
			case 3:
				__LIB_0__::func_11();
				break;
			case 4:
				__LIB_0__::func_11();
				break;
		}
	}
	else
	{
		if (func_166(1) && !func_166(256))
		{
			func_173(256);
		}
		func_594(5);
	}
}

void func_250(var uParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_60[iParam1 /*43*/]))
	{
		switch (Local_60[iParam1 /*43*/].f_40)
		{
			case 0:
				__LIB_0__::func_11(iParam1);
				break;
			case 1:
				func_596(iParam1);
				break;
			case 2:
				func_597(uParam0, iParam1);
				break;
			case 3:
				__LIB_0__::func_11(iParam1);
				break;
		}
	}
	else
	{
		func_599(iParam1, 4);
	}
}

void func_251(char[4] cParam0)
{
	int iVar0;
	if (!func_166(64))
	{
		if (!func_290(64))
		{
			if (__LIB_0__::func_264(&uLocal_545) > 2.5f && !__LIB_6__::func_904())
			{
				if (func_371(cParam0, Local_629[1 /*2*/], 1))
				{
					__LIB_1__::func_148(&uLocal_536);
				}
			}
		}
		if (!func_290(65536))
		{
			if (__LIB_0__::func_264(&uLocal_545) > 13f && !__LIB_6__::func_904())
			{
				if (func_371(cParam0, Local_629[5 /*2*/], 1))
				{
					__LIB_1__::func_148(&uLocal_536);
				}
			}
		}
	}
	else if (!func_290(2048))
	{
	}
	else if (!func_290(4096))
	{
	}
	if (func_166(131072))
	{
		if ((__LIB_0__::func_264(&uLocal_548) > 5f && !__LIB_6__::func_904()) && __LIB_0__::func_264(&uLocal_536) > 5f)
		{
			if (func_371(cParam0, Local_629[12 /*2*/], 0))
			{
				__LIB_0__::func_37(&uLocal_548);
				__LIB_1__::func_148(&uLocal_536);
			}
		}
	}
	if (func_290(16384))
	{
		if (((__LIB_0__::func_264(&uLocal_536) > 22f && iLocal_627 < 3) && __LIB_0__::func_48(Local_52, Global_35, 20f, 0)) && !__LIB_6__::func_904())
		{
			if (func_371(cParam0, Local_629[3 /*2*/], 0))
			{
				__LIB_1__::func_148(&uLocal_536);
				iLocal_627++;
			}
		}
	}
	func_600();
	func_601();
	if (!func_166(32))
	{
		func_173(32);
	}
	switch (iLocal_14)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (Local_60[iVar0 /*43*/].f_40 != 4)
				{
					func_602(iVar0);
				}
				iVar0++;
			}
			VEHICLE::_0x850CE59DEC2028F3(Local_356, 0);
			__LIB_3__::func_353("LSSLD2_FIGHT_START", 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_356))
			{
				ENTITY::SET_ENTITY_PROOFS(Local_356, 0, false);
				ENTITY::SET_ENTITY_PROOFS(Local_356, 4, false);
			}
			__LIB_10__::func_263(0, 0, 1);
			func_232(cParam0);
			func_603(cParam0);
			__LIB_10__::func_488();
			break;
		case 1:
			func_605(cParam0);
			if (func_606())
			{
				func_607();
				__LIB_1__::func_148(&uLocal_530);
				__LIB_10__::func_488();
				__LIB_3__::func_353("LSSLD2_FIGHT_END", 0);
			}
			break;
		case 2:
			if (!CAM::_0x1204EB53A5FBC63D())
			{
				if (!func_166(4096))
				{
					if (__LIB_0__::func_264(&uLocal_530) > 3f)
					{
						func_608(1);
					}
				}
				else
				{
					func_608(1);
				}
			}
			else if (!func_166(4096))
			{
				func_173(4096);
			}
			break;
	}
}

void func_252(var uParam0)
{
	switch (iLocal_14)
	{
		case 0:
			__LIB_10__::func_561(uParam0, "SOL2_RETURN_2", Local_52.f_1);
			func_292(65536);
			if (!__LIB_1__::func_205(Global_35, uLocal_499[0], 1, 0) && !__LIB_0__::func_48(Global_35, Local_52, 8f, 1))
			{
				__LIB_1__::func_422("SOL2_RETURN_2", 7500, 0, 1, 0, 0, -1, -1, 0);
				if (MAP::DOES_BLIP_EXIST(Local_52.f_7))
				{
					MAP::_BLIP_SET_MODIFIER(Local_52.f_7, -546708623);
				}
			}
			__LIB_4__::func_63(Local_52, 100);
			func_611();
			__LIB_10__::func_488();
			break;
		case 1:
			func_226();
			func_605(uParam0);
			if (!__LIB_0__::func_75(&uLocal_560))
			{
				if (__LIB_1__::func_205(Global_35, uLocal_499[0], 1, 0) || __LIB_0__::func_48(Global_35, Local_52, 10f, 1))
				{
					__LIB_1__::func_148(&uLocal_560);
				}
				else if (!__LIB_0__::func_270())
				{
					func_371(uParam0, Local_629[11 /*2*/], 1);
				}
			}
			else if (__LIB_0__::func_264(&uLocal_560) > 1f && func_226())
			{
				__LIB_3__::func_732(0);
				__LIB_10__::func_488();
			}
			break;
		case 2:
			func_608(2);
			break;
	}
}

void func_259(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
					__LIB_10__::func_525(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
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
						func_358(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_358(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_358(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_358(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_358(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_358(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_358(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_358(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_358(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_358(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_358(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_358(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_358(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_358(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_358(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_358(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_358(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_358(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_358(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_358(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_358(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_358(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_358(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_358(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_358(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_640();
						func_641(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_358(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_259(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_259(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_259(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_358(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_358(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_677();
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
							func_358(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

void func_287()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar2 = 0;
	iVar3 = ITEMSET::CREATE_ITEMSET(true);
	iVar4 = PROPSET::_GET_ENTITIES_FROM_PROPSET(iLocal_523, iVar3, 0, false, false);
	iVar2 = 0;
	while (iVar2 < iVar4)
	{
		iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar3);
		iVar1 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(iVar0);
		if (!ENTITY::IS_ENTITY_DEAD(Local_356))
		{
			if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_VISIBLE(iVar1)) && FIRE::IS_ENTITY_ON_FIRE(iVar1))
			{
				FIRE::STOP_ENTITY_FIRE(iVar1, 0);
			}
		}
		iVar2++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_356) && FIRE::IS_ENTITY_ON_FIRE(Local_356))
	{
		FIRE::STOP_ENTITY_FIRE(Local_356, 0);
	}
}

void func_288(bool bParam0)
{
	__LIB_6__::func_815(&vLocal_703, Local_52);
	PED::SET_PED_CONFIG_FLAG(Global_35, 363, false);
	__LIB_0__::func_267(1);
	TASK::REMOVE_COVER_POINT(iLocal_508);
	func_701();
	if (bParam0)
	{
		func_295(1);
	}
	else
	{
		func_295(0);
	}
	func_218();
	func_702();
	func_173(65536);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	__LIB_2__::func_480(&Local_685, 1, 1, 1, 0);
	vLocal_703.f_2 = 0;
}

bool func_289(int iParam0, char* sParam1)
{
	if (func_703(iParam0, sParam1))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_18[iParam0 /*16*/], sParam1, true);
		Local_18[iParam0 /*16*/].f_15 = sParam1;
		return true;
	}
	return false;
}

bool func_290(int iParam0)
{
	return __LIB_0__::func_27(iLocal_659, iParam0);
}

void func_292(int iParam0)
{
	__LIB_1__::func_683(&iLocal_659, iParam0);
}

void func_295(bool bParam0)
{
	int iVar0;
	if (bParam0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_319[0 /*6*/]))
		{
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), Local_319[0 /*6*/], 33, 0, 0);
			PED::SET_PED_CONFIG_FLAG(Local_319[0 /*6*/], 136, false);
			__LIB_7__::func_345(Local_319[0 /*6*/], 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_319[1 /*6*/]))
		{
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), Local_319[1 /*6*/], 33, 0, 0);
			PED::SET_PED_CONFIG_FLAG(Local_319[1 /*6*/], 136, false);
			__LIB_7__::func_345(Local_319[1 /*6*/], 0);
		}
		__LIB_2__::func_788(&Local_52, 1, 0, 1);
		__LIB_2__::func_788(&(Local_319[0 /*6*/]), 1, 0, 1);
		__LIB_2__::func_788(&(Local_319[1 /*6*/]), 1, 0, 1);
	}
	__LIB_2__::func_788(&Local_350, 1, 0, 1);
	__LIB_2__::func_788(&(Local_319[2 /*6*/]), 1, 0, 1);
	__LIB_2__::func_788(&(Local_319[3 /*6*/]), 1, 0, 1);
	__LIB_2__::func_788(&(Local_319[4 /*6*/]), 1, 0, 1);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		__LIB_2__::func_788(&(Local_60[iVar0 /*43*/]), 1, 0, 1);
		__LIB_0__::func_325(&(Local_60[iVar0 /*43*/].f_42));
		iVar0++;
	}
}

void func_298(int iParam0)
{
	__LIB_1__::func_681(&iLocal_658, iParam0);
}

void func_306()
{
	Local_52.f_1 = { 1413.079f, 1166.25f, 184.1042f };
	Local_52.f_4 = 0f;
	Local_52.f_6 = joaat("CS_JOHNWEATHERS");
	Local_52.f_5 = 0;
}

void func_307()
{
	Local_60[0 /*43*/].f_1 = { 1414.398f, 1139.17f, 183.6895f };
	Local_60[0 /*43*/].f_4 = { 1410.575f, 1147.983f, 183.558f };
	Local_60[0 /*43*/].f_7 = { 1462.395f, 1099.259f, 188.6942f };
	Local_60[0 /*43*/].f_10 = 26.1434f;
	Local_60[0 /*43*/].f_41 = joaat("S_M_Y_ARMY_01");
	Local_60[0 /*43*/].f_40 = 0;
	Local_60[1 /*43*/].f_1 = { 1414.136f, 1132.298f, 183.9324f };
	Local_60[1 /*43*/].f_4 = { 1408.493f, 1137.189f, 184.312f };
	Local_60[1 /*43*/].f_7 = { 1464.988f, 1095.982f, 188.4954f };
	Local_60[1 /*43*/].f_10 = 21.3641f;
	Local_60[1 /*43*/].f_41 = joaat("S_M_Y_ARMY_01");
	Local_60[1 /*43*/].f_40 = 0;
	Local_60[2 /*43*/].f_1 = { 1418.034f, 1132.949f, 183.5892f };
	Local_60[2 /*43*/].f_4 = { 1420.603f, 1138.341f, 184.1985f };
	Local_60[2 /*43*/].f_7 = { 1469.595f, 1093.98f, 188.5695f };
	Local_60[2 /*43*/].f_10 = 339.3573f;
	Local_60[2 /*43*/].f_41 = joaat("S_M_Y_ARMY_01");
	Local_60[2 /*43*/].f_40 = 0;
	Local_60[3 /*43*/].f_1 = { 1418.476f, 1126.303f, 183.4368f };
	Local_60[3 /*43*/].f_4 = { 1413.13f, 1135.967f, 183.6986f };
	Local_60[3 /*43*/].f_7 = { 1468.512f, 1088.785f, 187.4044f };
	Local_60[3 /*43*/].f_10 = 18.2313f;
	Local_60[3 /*43*/].f_41 = joaat("S_M_Y_ARMY_01");
	Local_60[3 /*43*/].f_40 = 0;
	Local_60[4 /*43*/].f_1 = { 1418.322f, 1137.054f, 183.813f };
	Local_60[4 /*43*/].f_4 = { 1415.467f, 1129.905f, 183.4647f };
	Local_60[4 /*43*/].f_7 = { 1444.072f, 1074.533f, 181.7294f };
	Local_60[4 /*43*/].f_10 = 38.9395f;
	Local_60[4 /*43*/].f_41 = joaat("S_M_Y_ARMY_01");
	Local_60[4 /*43*/].f_40 = 0;
	Local_60[5 /*43*/].f_1 = { 1416.879f, 1144.731f, 183.5307f };
	Local_60[5 /*43*/].f_4 = { 1418.203f, 1132.504f, 183.6696f };
	Local_60[5 /*43*/].f_7 = { 1441.523f, 1082.701f, 182.834f };
	Local_60[5 /*43*/].f_10 = 44.8533f;
	Local_60[5 /*43*/].f_41 = joaat("S_M_Y_ARMY_01");
	Local_60[5 /*43*/].f_40 = 0;
}

void func_308()
{
	Local_319[0 /*6*/].f_1 = { 1413.76f, 1171.73f, 184.91f };
	Local_319[0 /*6*/].f_4 = -145.75f;
	Local_319[0 /*6*/].f_5 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
	Local_319[1 /*6*/].f_1 = { 1415.97f, 1171.44f, 185f };
	Local_319[1 /*6*/].f_4 = -179.32f;
	Local_319[1 /*6*/].f_5 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
	Local_319[2 /*6*/].f_1 = { 1464.079f, 1092.902f, 183.1848f };
	Local_319[2 /*6*/].f_4 = 17.9074f;
	Local_319[2 /*6*/].f_5 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
	Local_319[3 /*6*/].f_1 = { 1464.079f, 1092.902f, 183.1848f };
	Local_319[3 /*6*/].f_4 = 17.9074f;
	Local_319[3 /*6*/].f_5 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
	Local_319[4 /*6*/].f_1 = { 1464.079f, 1092.902f, 183.1848f };
	Local_319[4 /*6*/].f_4 = 17.9074f;
	Local_319[4 /*6*/].f_5 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
}

void func_309()
{
	Local_350.f_1 = { 1418.463f, 1179.922f, 183.5101f };
	Local_350.f_4 = 160.1241f;
	Local_350.f_5 = joaat("CS_MRSWEATHERS");
}

void func_310()
{
	Local_356.f_1 = { 1412.126f, 1167.47f, 184.843f };
	Local_356.f_4 = 283.34f;
}

void func_311()
{
	Local_361[0 /*8*/].f_1 = { 1415.31f, 1167.53f, 184.14f };
	Local_361[0 /*8*/].f_4 = { 0f, 0f, 25.21f };
	Local_361[0 /*8*/].f_7 = joaat("P_CRATETOOLS01X");
}

void func_312()
{
	Local_629[0 /*2*/] = { __LIB_13__::func_265("LS_SOL2_LOOPS", 32) };
	Local_629[1 /*2*/] = { __LIB_13__::func_265("LS_SOL2_JJ_HRSE", 64) };
	Local_629[2 /*2*/] = { __LIB_13__::func_265("LS_SOL2_JJ_SHOT", 128) };
	Local_629[3 /*2*/] = { __LIB_13__::func_265("LS_SOL2_JJ_FGHT", 256) };
	Local_629[4 /*2*/] = { __LIB_13__::func_265("LS_SOL2_JJ_SCTR", 512) };
	Local_629[11 /*2*/] = { __LIB_13__::func_265("LS_SOL2_JJ_RTRN", 1024) };
	Local_629[5 /*2*/] = { __LIB_13__::func_265("LS_SOL2_JJ_EXPL", 65536) };
	Local_629[6 /*2*/] = { __LIB_13__::func_265("LS_SOL2_JJ_FIRE", 2048) };
	Local_629[7 /*2*/] = { __LIB_13__::func_265("LS_SOL2_JJ_FIR2", 4096) };
	Local_629[8 /*2*/] = { __LIB_13__::func_265("LS_SOL2_JJ_FIR3", 8192) };
	Local_629[9 /*2*/] = { __LIB_13__::func_265("LS_SOL2_JJ_FIR4", 16384) };
	Local_629[10 /*2*/] = { __LIB_13__::func_265("LS_SOL2_JJ_FAR", 32768) };
	Local_629[12 /*2*/] = { __LIB_13__::func_265("LS_SOL2_JJ_WAVE", 131072) };
	Local_629[13 /*2*/] = { __LIB_13__::func_265("LS_SOL2_JJ_AIM", 256) };
}

void func_313()
{
	Local_18[0 /*16*/] = { __LIB_10__::func_449("script@proc@loansharking@soldier@leadin@int@leadin_ilo", "pl_Leadin") };
	Local_18[1 /*16*/] = { __LIB_10__::func_449("script@proc@loansharking@soldier@wagonfire@wagonfire", 0) };
}

void func_314()
{
	__LIB_3__::func_573(&(uLocal_499[0]), 1413.438f, 1171.715f, 185.7091f, 0f, 0f, 12.99997f, 10.5f, 6f, 5f, "MV_BEHIND_WAGON");
	__LIB_3__::func_573(&(uLocal_499[1]), 1425.042f, 1121.301f, 184.2452f, 0f, 0f, 17.5f, 261.5f, 98.25f, 84.25f, "MV_INFRONT_WAGON");
	__LIB_3__::func_139(&(uLocal_499[2]), 1413.079f, 1166.25f, 184.104f, 0f, 0f, 0f, 30f, 30f, 30f, "MV_CUTSCENE_RESTRICT");
	__LIB_3__::func_139(&(uLocal_499[3]), 1413.016f, 1165.55f, 184.104f, 0f, 0f, 104f, 2f, 1.8f, 5.25f, "MV_ILO_VOLUME");
	__LIB_3__::func_139(&(uLocal_499[4]), 1412.015f, 1169.562f, 184.104f, 0f, 0f, 104f, 1.8f, 1.8f, 5.25f, "MV_ILO_MULTISTART_VOLUME");
	if (!VOLUME::_DOES_VOLUME_EXIST(uLocal_499[5]))
	{
		uLocal_499[5] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 1412.662f, 1166.301f, 185.2112f, 0f, 0f, 102.75f, 1.2f, 1.4f, 4.25f);
	}
}

bool func_320()
{
	if (ENTITY::IS_ENTITY_DEAD(Local_52))
	{
		return true;
	}
	else if (__LIB_13__::func_45(Local_52, 0, &uLocal_569, &iLocal_625, 1, 0))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_319[0 /*6*/]))
	{
		return true;
	}
	else if (__LIB_13__::func_45(Local_319[0 /*6*/], 0, &uLocal_597, &iLocal_625, 1, 0) || PED::IS_PED_FLEEING(Local_319[0 /*6*/]))
	{
		return true;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, Local_356))
		{
			return true;
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_319[1 /*6*/]))
	{
		return true;
	}
	else if (__LIB_13__::func_45(Local_319[1 /*6*/], 0, &uLocal_597, &iLocal_625, 1, 0) || PED::IS_PED_FLEEING(Local_319[1 /*6*/]))
	{
		return true;
	}
	return false;
}

bool func_358(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_358(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		__LIB_10__::func_252(28);
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
			__LIB_1__::func_847(iParam0, iParam1);
			__LIB_1__::func_759(iParam0);
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
						func_358(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_358(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_358(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_358(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_358(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_358(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_358(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_10__::func_252(24);
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
					func_358(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_358(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_10__::func_379(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_10__::func_485(iParam0);
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
				func_358(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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
			func_843(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		__LIB_1__::func_158(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

int func_366(int iParam0, int iParam1)
{
	var uVar0;
	return func_852(&uVar0, iParam0, iParam1);
}

bool func_371(char[4] cParam0, struct<2> Param1, bool bParam3)
{
	if (!func_290(Param1.f_1))
	{
		if (__LIB_10__::func_513(&(cParam0->f_2106), Param1, 0))
		{
			if (bParam3)
			{
				func_292(Param1.f_1);
			}
			return true;
		}
	}
	return false;
}

bool func_372(char[4] cParam0, char* sParam1, char* sParam2, vector3 vParam3, int iParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	bool bVar1;
	bVar1 = false;
	if (!iParam6 == 0)
	{
		fVar0 = __LIB_0__::func_665(Global_35, iParam6, 1, 1);
		bVar1 = true;
	}
	else
	{
		fVar0 = __LIB_0__::func_94(Global_35, vParam3, 1);
	}
	if (fVar0 > 28f)
	{
		if (!func_290(32768))
		{
			if (__LIB_0__::func_264(&uLocal_536) > 1f && !__LIB_6__::func_904())
			{
				if (func_371(cParam0, Local_629[10 /*2*/], 1))
				{
					__LIB_1__::func_148(&uLocal_536);
				}
			}
		}
	}
	if (iLocal_15 != 1)
	{
		if (!__LIB_1__::func_325())
		{
			if (fVar0 > 35f)
			{
				__LIB_1__::func_422("SOL2_OBJ_1", 7500, 0, 1, 0, 0, -1, -1, 0);
			}
		}
	}
	if (!bLocal_660)
	{
		if (fVar0 > fParam7)
		{
			__LIB_1__::func_422(sParam1, 7500, 0, 0, 0, 0, -1, -1, 0);
			bLocal_660 = true;
		}
	}
	else if (fVar0 < fParam9)
	{
		__LIB_10__::func_597(sParam1);
		bLocal_660 = false;
	}
	else if (fVar0 > fParam8)
	{
		if (bVar1)
		{
			StringCopy(&(cParam0->f_2208), sParam2, 16);
			return true;
		}
		else
		{
			StringCopy(&(cParam0->f_2208), sParam2, 16);
			return true;
		}
	}
	return false;
}

bool func_393()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_52))
	{
		Local_52 = __LIB_8__::func_931(Local_52.f_6, Local_52.f_1, Local_52.f_4, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0);
	}
	else
	{
		return true;
	}
	return false;
}

bool func_394()
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(Local_319[0 /*6*/]))
	{
		__LIB_10__::func_562(4, &(Local_319[0 /*6*/]), Local_319[0 /*6*/].f_5, Local_319[0 /*6*/].f_1, Local_319[0 /*6*/].f_4, 1, 1, 0, 1, 0, 0, 1);
	}
	else
	{
		iVar0++;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_319[1 /*6*/]))
	{
		__LIB_10__::func_562(4, &(Local_319[1 /*6*/]), Local_319[1 /*6*/].f_5, Local_319[1 /*6*/].f_1, Local_319[1 /*6*/].f_4, 1, 1, 0, 1, 0, 0, 1);
	}
	else
	{
		iVar0++;
	}
	if (iVar0 == 2)
	{
		return true;
	}
	return false;
}

bool func_396()
{
	if (func_166(1073741824 /* Float: 2f */))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_356))
	{
		Local_356 = VEHICLE::CREATE_VEHICLE(joaat("WAGON05X"), Local_356.f_1, Local_356.f_4, true, true, true, false);
		ENTITY::_0x9587913B9E772D29(Local_356, 0);
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Local_356))
	{
		if (PROPSET::_HAS_PROPSET_LOADED(iLocal_526))
		{
			if (!PROPSET::_DOES_PROPSET_EXIST(iLocal_523))
			{
				if (!PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(Local_356))
				{
					PROPSET::_0xD80FAF919A2E56EA(Local_356, iLocal_526);
				}
				else
				{
					iLocal_523 = PROPSET::_GET_VEHICLE_PROPSET(Local_356);
				}
			}
			else if (PROPSET::_IS_PROPSET_VALID(iLocal_523))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_356, false);
				VEHICLE::SET_VEHICLE_PROVIDES_COVER(Local_356, true);
				VEHICLE::SET_VEHICLE_HANDBRAKE(Local_356, true);
				func_173(1073741824 /* Float: 2f */);
				return true;
			}
		}
		else
		{
			PROPSET::_REQUEST_PROPSET(iLocal_526);
		}
	}
	return false;
}

bool func_397()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_361[iVar0 /*8*/]))
		{
			__LIB_1__::func_206(Local_361[iVar0 /*8*/].f_1, 1f, 0);
			Local_361[iVar0 /*8*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_361[iVar0 /*8*/].f_7, Local_361[iVar0 /*8*/].f_1, true, true, false, false);
			ENTITY::SET_ENTITY_ROTATION(Local_361[iVar0 /*8*/], Local_361[iVar0 /*8*/].f_4, 2, false);
			ENTITY::FREEZE_ENTITY_POSITION(Local_361[iVar0 /*8*/], true);
			ENTITY::SET_ENTITY_PROOFS(Local_361[iVar0 /*8*/], 4, false);
			__LIB_3__::func_414(&uLocal_671, Local_361[iVar0 /*8*/].f_1, 1.25f, 1, -1, 0);
			__LIB_3__::func_414(&uLocal_672, vLocal_517, 1f, 1, -1, 0);
			__LIB_3__::func_414(&uLocal_673, 1412.485f, 1167.037f, 184.0549f, 1.5f, 1, -1, 0);
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		return true;
	}
	return false;
}

void func_398(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!ENTITY::IS_ENTITY_DEAD(Local_356))
	{
		if (bParam0)
		{
		}
		ENTITY::SET_ENTITY_PROOFS(Local_356, 4, false);
		ENTITY::SET_ENTITY_PROOFS(Local_356, 2, false);
		ENTITY::SET_ENTITY_PROOFS(Local_356, 64, false);
	}
	iVar2 = 0;
	iVar3 = ITEMSET::CREATE_ITEMSET(true);
	iVar4 = PROPSET::_GET_ENTITIES_FROM_PROPSET(iLocal_523, iVar3, 0, false, false);
	iVar2 = 0;
	while (iVar2 < iVar4)
	{
		iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar3);
		iVar1 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(iVar0);
		if (!ENTITY::IS_ENTITY_DEAD(Local_356))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(iVar1, false);
			}
		}
		iVar2++;
	}
}

void func_399()
{
	func_875("ARTHUR", Global_35);
	func_875("CS_JohnWeathers", Local_52);
	func_875("WAGON05X", Local_356);
	func_875("p_hammer03x", Local_370[0 /*8*/]);
}

void func_429(var uParam0, bool bParam1)
{
	bool bVar0;
	bVar0 = false;
	bVar0 = CAM::_0xA24C1D341C6E0D53(0, 0, 0);
	if (bParam1 || __LIB_10__::func_407(uParam0, 1))
	{
		if (!func_166(8388608))
		{
			if (bVar0)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, 1409.629f, 1168.742f, 183.5563f, 213.6526f, true, false, true);
				__LIB_8__::func_895(1415.768f, 1136.341f, 185.4908f, 0);
			}
			func_173(8388608);
		}
	}
	if (bParam1 || __LIB_19__::func_174(uParam0, Global_35, 0, 0, 1, 1))
	{
		if (!func_166(16777216))
		{
			func_547();
			if (!bVar0)
			{
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Global_35, vLocal_509, -1, 1, 0f, 1, 0, 0, 0, 0, 0);
				PED::_0x2208438012482A1A(Global_35, false, false);
			}
			func_173(16777216);
		}
	}
}

void func_495(char[4] cParam0)
{
	if (__LIB_0__::func_272(Local_52, 0))
	{
		if (__LIB_10__::func_477(Local_52, &uLocal_674, &uLocal_679, &uLocal_680, 2f, 20f, 0, 0, 1092616192 /* Float: 10f */, 1))
		{
			if (!__LIB_10__::func_235(*cParam0, 4))
			{
				__LIB_10__::func_561(cParam0, "OBJ_TALK_SOL2", Local_52.f_1);
				__LIB_10__::func_415(*cParam0);
			}
			else
			{
				switch (iLocal_16)
				{
					case 0:
						if (__LIB_0__::func_665(Local_52, Global_35, 1, 1) <= 5f && ENTITY::IS_ENTITY_ON_SCREEN(Local_52))
						{
							iLocal_16 = 1;
						}
						else if (__LIB_0__::func_665(Local_52, Global_35, 1, 1) <= 20f)
						{
							if (iLocal_626 < 3)
							{
								if (!__LIB_0__::func_75(&uLocal_536) || __LIB_0__::func_264(&uLocal_536) > 21f)
								{
									func_371(cParam0, Local_629[0 /*2*/], 0);
									__LIB_1__::func_148(&uLocal_536);
									iLocal_626++;
								}
							}
						}
						break;
				}
				if (!func_290(8))
				{
					__LIB_1__::func_422("OBJ_TALK_SOL2", 7500, 0, 1, 0, 0, -1, -1, 0);
					func_292(8);
				}
			}
		}
	}
}

void func_502(bool bParam0)
{
	if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
	{
		PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
	}
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), true);
	__LIB_1__::func_538(0);
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 0.5f);
	if (bParam0)
	{
		if (!__LIB_0__::func_163(Global_35, -875674219))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Local_52, -1, -1f, -1f, -1f);
		}
	}
}

void func_504()
{
	int iVar0;
	iLocal_506 = __LIB_0__::func_398(7);
	iVar0 = PED::_GET_LAST_MOUNT(Global_35);
	if (iVar0 != iLocal_506)
	{
		iLocal_506 = iVar0;
	}
}

int func_505()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_379[0 /*8*/]))
	{
		func_1027(0, ENTITY::GET_ENTITY_COORDS(Local_52, false, false), iLocal_476);
		return 0;
	}
	return 1;
}

bool func_545()
{
	int iVar0;
	if (func_1071())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_60[iVar0 /*43*/]) && !ENTITY::IS_ENTITY_DEAD(Local_52))
			{
				WEAPON::_GIVE_WEAPON_TO_PED_2(Local_60[iVar0 /*43*/], iLocal_478, 200, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				WEAPON::SET_CURRENT_PED_WEAPON(Local_60[iVar0 /*43*/], iLocal_478, false, 0, false, false);
				PED::SET_PED_COMBAT_ABILITY(Local_60[iVar0 /*43*/], 1);
				PED::SET_PED_COMBAT_MOVEMENT(Local_60[iVar0 /*43*/], 1);
				PED::SET_PED_ACCURACY(Local_60[iVar0 /*43*/], 50);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_60[iVar0 /*43*/], 35, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_60[iVar0 /*43*/], 0, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_60[iVar0 /*43*/], 67, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_60[iVar0 /*43*/], 30, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_60[iVar0 /*43*/], 111, false);
				ENTITY::_0x18FF3110CF47115D(Local_60[iVar0 /*43*/], 1, 0);
				ENTITY::_0x18FF3110CF47115D(Local_60[iVar0 /*43*/], 2, 0);
				ENTITY::_0x18FF3110CF47115D(Local_60[iVar0 /*43*/], 3, 0);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_60[iVar0 /*43*/], true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_60[iVar0 /*43*/], iLocal_480);
				PED::SET_PED_CONFIG_FLAG(Local_60[iVar0 /*43*/], 6, true);
				PED::SET_PED_CONFIG_FLAG(Local_60[iVar0 /*43*/], 186, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_60[iVar0 /*43*/], false);
				AUDIO::STOP_PED_SPEAKING(Local_60[iVar0 /*43*/], true);
				func_1072(Local_60[iVar0 /*43*/]);
				if (iVar0 == 3 && !ENTITY::IS_ENTITY_DEAD(Local_319[2 /*6*/]))
				{
					__LIB_1__::func_571(Local_60[iVar0 /*43*/], Local_319[2 /*6*/], 0, -1, 1);
					__LIB_2__::func_279(Local_60[iVar0 /*43*/], 1);
					func_1072(Local_319[2 /*6*/]);
				}
			}
			iVar0++;
		}
		return true;
	}
	return false;
}

void func_547()
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_52))
	{
		if (!AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_508))
		{
			iLocal_508 = TASK::ADD_COVER_POINT(vLocal_512, fLocal_515, 1, 2, 0, false);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_52, false, true);
		WEAPON::SET_CURRENT_PED_WEAPON(Local_52, iLocal_476, true, 0, false, false);
		TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_52, vLocal_512, -1, 1, 0f, 1, 1, iLocal_508, 0, 1, 0);
	}
}

bool func_557()
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_10__::func_562(4, &(Local_60[4 /*43*/]), Local_60[4 /*43*/].f_41, Local_60[4 /*43*/].f_7, Local_60[4 /*43*/].f_10, 1, 1, 0, 1, 1, 1, 0))
	{
		iVar0++;
	}
	if (__LIB_10__::func_562(4, &(Local_60[5 /*43*/]), Local_60[5 /*43*/].f_41, Local_60[5 /*43*/].f_7, Local_60[5 /*43*/].f_10, 1, 1, 0, 1, 1, 1, 0))
	{
		iVar0++;
	}
	if (__LIB_10__::func_562(4, &(Local_319[3 /*6*/]), Local_319[3 /*6*/].f_5, Local_60[5 /*43*/].f_7, Local_60[5 /*43*/].f_10, 1, 1, 0, 1, 1, 1, 1))
	{
		iVar0++;
	}
	if (__LIB_10__::func_562(4, &(Local_319[4 /*6*/]), Local_319[4 /*6*/].f_5, Local_60[5 /*43*/].f_7, Local_60[5 /*43*/].f_10, 1, 1, 0, 1, 1, 1, 1))
	{
		iVar0++;
	}
	if (iVar0 == 4)
	{
		return true;
	}
	return false;
}

void func_558(int iParam0)
{
	WEAPON::_GIVE_WEAPON_TO_PED_2(Local_60[iParam0 /*43*/], iLocal_478, 200, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Local_60[iParam0 /*43*/], iLocal_478, false, 0, false, false);
	PED::SET_PED_COMBAT_ABILITY(Local_60[iParam0 /*43*/], 1);
	PED::SET_PED_COMBAT_MOVEMENT(Local_60[iParam0 /*43*/], 1);
	PED::SET_PED_COMBAT_RANGE(Local_60[iParam0 /*43*/], 1);
	PED::SET_PED_ACCURACY(Local_60[iParam0 /*43*/], 50);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_60[iParam0 /*43*/], 42, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_60[iParam0 /*43*/], 0, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_60[iParam0 /*43*/], 50, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_60[iParam0 /*43*/], 43, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_60[iParam0 /*43*/], 67, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_60[iParam0 /*43*/], 30, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_60[iParam0 /*43*/], 111, false);
	ENTITY::_0x18FF3110CF47115D(Local_60[iParam0 /*43*/], 1, 0);
	ENTITY::_0x18FF3110CF47115D(Local_60[iParam0 /*43*/], 2, 0);
	ENTITY::_0x18FF3110CF47115D(Local_60[iParam0 /*43*/], 3, 0);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_60[iParam0 /*43*/], true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_60[iParam0 /*43*/], iLocal_480);
	PED::SET_PED_CONFIG_FLAG(Local_60[iParam0 /*43*/], 6, true);
	PED::SET_PED_CONFIG_FLAG(Local_60[iParam0 /*43*/], 186, false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_60[iParam0 /*43*/], true);
	AUDIO::STOP_PED_SPEAKING(Local_60[iParam0 /*43*/], true);
}

void func_561(var uParam0)
{
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, true);
	__LIB_3__::func_319(Local_18[1 /*16*/]);
	Local_18[1 /*16*/].f_14 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(Local_356))
	{
		ENTITY::SET_ENTITY_PROOFS(Local_356, 0, false);
		func_1079();
	}
	__LIB_3__::func_353("LSSLD2_END", 0);
}

void func_562(var uParam0)
{
	if (__LIB_10__::func_551(uParam0, "LSSOL_EXT"))
	{
		if (!bLocal_668)
		{
			func_217(1430.027f, 1192.439f, 182.8754f, 359.7534f);
			bLocal_668 = true;
		}
		if (!bLocal_667)
		{
			__LIB_1__::func_206(1414.669f, 1167.813f, 184.1296f, 10f, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_524))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_524, false);
			}
			bLocal_667 = true;
		}
		if (!bLocal_666)
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_356, -102255056))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_361[0 /*8*/], Local_361[0 /*8*/].f_1, false, true, true);
				ENTITY::SET_ENTITY_ROTATION(Local_361[0 /*8*/], Local_361[0 /*8*/].f_4, 2, false);
				bLocal_666 = true;
			}
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_356, -979415648) || ENTITY::HAS_ANIM_EVENT_FIRED(Local_356, 610718423))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_361[0 /*8*/], vLocal_517, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(Local_361[0 /*8*/], vLocal_520, 2, false);
			bLocal_666 = false;
		}
		if (!bLocal_661)
		{
			if (ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_228, "LSSOL_EXT_P2A1_T02_Shot_2", 1))
			{
				if (!__LIB_4__::func_813(&uLocal_481))
				{
					__LIB_10__::func_519(&uLocal_481, "CXT_SOL_AB", "CXT_SOL_DMD", __LIB_0__::func_342(), 0, 10000, 1, -1, -1);
					bLocal_661 = true;
				}
			}
		}
		else if (!bLocal_662)
		{
			if (__LIB_10__::func_514(&uLocal_481))
			{
				if (__LIB_8__::func_350(&uLocal_481))
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_228, "LSSOL_EXT_P2A1_T02_Shot_2", 1))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_228, "LOOP", true, false);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_228, "Yes_is", true, false);
					}
					else
					{
						__LIB_8__::func_361(&uLocal_481);
						TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(joaat("INPUT_INTERACT_LOCKON_NEG"), "CXT_SOL_DMD");
						func_292(262144);
						__LIB_0__::func_8(&(Global_1392626[4 /*32*/].f_8), 16);
						bLocal_662 = true;
						__LIB_10__::func_288(uParam0, 512, 1);
						return;
					}
				}
				else if (__LIB_8__::func_349(&uLocal_481))
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_228, "LSSOL_EXT_P2A1_T02_Shot_2", 1))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_228, "LOOP", true, false);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_228, "Yes_is", false, false);
					}
					else
					{
						__LIB_8__::func_361(&uLocal_481);
						TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(joaat("INPUT_INTERACT_LOCKON_POS"), "CXT_SOL_AB");
						func_292(524288);
						bLocal_662 = true;
						__LIB_10__::func_226(4);
						__LIB_10__::func_288(uParam0, 512, 1);
						return;
					}
				}
			}
		}
		if (!func_166(16384))
		{
			__LIB_0__::func_568(Local_52.f_1, 100f, 0);
			func_173(16384);
		}
		else if (!func_166(32768))
		{
			__LIB_1__::func_572(Local_52.f_1, 100f, 0, 0, 0, 0, 0);
			func_173(32768);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_356))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_356, 610718423))
		{
			if (!func_166(33554432))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[1 /*16*/]))
				{
					func_173(33554432);
				}
			}
			else if (!func_166(67108864))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[1 /*16*/]))
				{
					func_173(67108864);
				}
			}
		}
	}
}

void func_578(var uParam0)
{
	vector3 vVar0;
	if (!__LIB_0__::func_84(uParam0, 4))
	{
		if (__LIB_0__::func_1(uParam0->f_284, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { __LIB_10__::func_315(uParam0) };
		if (!__LIB_0__::func_1(uParam0->f_284, 524288))
		{
			__LIB_4__::func_717(&(uParam0->f_296));
		}
		func_1102(&(uParam0->f_284), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_10__::func_316(uParam0, 0f, 0f, 0f);
		func_1104(uParam0);
		func_1105(uParam0);
		__LIB_10__::func_552(uParam0, 0f, 0f, 0f, 0, 0);
		__LIB_10__::func_416(uParam0);
		__LIB_0__::func_88(uParam0, 4);
		__LIB_0__::func_106(uParam0, 0);
		__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_297)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_297));
		}
	}
}

void func_590()
{
	if (iLocal_15 == 1)
	{
		if (!PED::IS_PED_IN_COVER(Local_52, false, false) && !__LIB_0__::func_163(Local_52, -1716541277))
		{
			func_611();
		}
	}
	else if (PED::IS_PED_IN_COVER(Local_52, false, false))
	{
		func_1119();
	}
	else if ((!__LIB_0__::func_163(Local_52, -1716541277) && __LIB_0__::func_264(&uLocal_551) > 1f) && func_166(32))
	{
		func_611();
	}
}

void func_594(int iParam0)
{
	Local_52.f_5 = iParam0;
}

void func_596(int iParam0)
{
	if (PED::_IS_PED_HOGTIED(Local_60[iParam0 /*43*/]) && !__LIB_4__::func_214(Global_35))
	{
		func_1121(iParam0);
		return;
	}
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_60[iParam0 /*43*/], 0))
	{
		if (!TASK::WAYPOINT_PLAYBACK_GET_IS_SHOOTING(Local_60[iParam0 /*43*/]))
		{
			TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED(Local_60[iParam0 /*43*/], Global_35, 1, 0, -1082130432 /* Float: -1f */);
		}
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_60[iParam0 /*43*/], 2f, 0, -1082130432 /* Float: -1f */, 0);
	}
	if (!__LIB_0__::func_71(Local_60[iParam0 /*43*/]))
	{
		TASK::CLEAR_PED_TASKS(Local_60[iParam0 /*43*/], true, false);
		func_602(iParam0);
	}
}

void func_597(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = PED::_0xCD66FEA29400A0B5(Local_60[iParam1 /*43*/]);
	if (PED::_IS_PED_HOGTIED(Local_60[iParam1 /*43*/]) && !__LIB_4__::func_214(Global_35))
	{
		func_1121(iParam1);
		return;
	}
	if (iVar0 != 0)
	{
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == Local_52)
		{
			if (PED::GET_PED_ACCURACY(Local_60[iParam1 /*43*/]) != 50)
			{
				PED::SET_PED_ACCURACY(Local_60[iParam1 /*43*/], 50);
			}
		}
		else if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == Global_35)
		{
			if (PED::GET_PED_ACCURACY(Local_60[iParam1 /*43*/]) != 50)
			{
				PED::SET_PED_ACCURACY(Local_60[iParam1 /*43*/], 50);
			}
		}
	}
	if (iParam1 == 4 || iParam1 == 5)
	{
		if (!__LIB_0__::func_163(Local_60[iParam1 /*43*/], 242628503))
		{
			func_602(iParam1);
		}
	}
	else if (!__LIB_0__::func_163(Local_60[iParam1 /*43*/], 242628503))
	{
		func_602(iParam1);
	}
}

void func_599(int iParam0, int iParam1)
{
	if (Local_60[iParam0 /*43*/].f_40 != iParam1)
	{
		Local_60[iParam0 /*43*/].f_40 = iParam1;
	}
}

void func_600()
{
	func_1122(2, 3);
	func_1122(3, 4);
	func_1122(4, 5);
}

void func_601()
{
	bool bVar0;
	if (!func_166(4))
	{
		if (__LIB_0__::func_264(&uLocal_533) > 60f)
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_52, true, iLocal_480);
		func_173(4);
	}
}

void func_602(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!MAP::DOES_BLIP_EXIST(Local_60[iParam0 /*43*/].f_42))
	{
		Local_60[iParam0 /*43*/].f_42 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COP"), Local_60[iParam0 /*43*/]);
		if (MAP::DOES_BLIP_EXIST(Local_60[iParam0 /*43*/].f_42))
		{
			MAP::_BLIP_SET_MODIFIER(Local_60[iParam0 /*43*/].f_42, -1034486097);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_60[iParam0 /*43*/].f_42, "BLIP_SOLDIER");
		}
	}
	if (iParam0 < 3)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(0, Local_60[iParam0 /*43*/].f_4, 4f);
		TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, Local_60[iParam0 /*43*/].f_1, 200f, 0, 16);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(Local_60[iParam0 /*43*/], iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
	else if (iParam0 == 3)
	{
		PED::SET_PED_COMBAT_MOVEMENT(Local_60[3 /*43*/], 0);
		PED::SET_PED_CONFIG_FLAG(Local_60[3 /*43*/], 167, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_60[3 /*43*/], 123, true);
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_60[iParam0 /*43*/].f_4, Global_35, 1.25f, 1, 4f, 5f, 0, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), -1, 0);
		TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(0, Local_60[iParam0 /*43*/].f_4, 2f);
		TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, Local_60[iParam0 /*43*/].f_1, 200f, 0, 16);
		TASK::CLOSE_SEQUENCE_TASK(iVar1);
		TASK::TASK_PERFORM_SEQUENCE(Local_60[iParam0 /*43*/], iVar1);
		TASK::CLEAR_SEQUENCE_TASK(&iVar1);
	}
	else if (iParam0 == 4)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar2);
		TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(0, 1410.55f, 1142.516f, 183.7943f, 10f);
		TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, Local_60[iParam0 /*43*/].f_1, 200f, 0, 16);
		TASK::CLOSE_SEQUENCE_TASK(iVar2);
		TASK::TASK_PERFORM_SEQUENCE(Local_60[iParam0 /*43*/], iVar2);
		TASK::CLEAR_SEQUENCE_TASK(&iVar2);
	}
	else if (iParam0 == 5)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar3);
		TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(0, 1422.316f, 1149.653f, 184.7578f, 5f);
		TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, Local_60[iParam0 /*43*/].f_1, 200f, 0, 16);
		TASK::CLOSE_SEQUENCE_TASK(iVar3);
		TASK::TASK_PERFORM_SEQUENCE(Local_60[iParam0 /*43*/], iVar3);
		TASK::CLEAR_SEQUENCE_TASK(&iVar3);
	}
	func_599(iParam0, 2);
}

void func_603(char[4] cParam0)
{
	__LIB_0__::func_267(0);
	PED::SET_PED_CONFIG_FLAG(Global_35, 276, true);
	PED::SET_PED_CONFIG_FLAG(Local_52, 276, true);
	PED::SET_PED_CONFIG_FLAG(Local_52, 229, true);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_479, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_480, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_480, iLocal_479);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_479, iLocal_480);
	if (!ENTITY::IS_ENTITY_DEAD(Local_319[0 /*6*/]))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_319[0 /*6*/], Local_319[0 /*6*/].f_1, (Local_319[0 /*6*/].f_4 + 180f), true, false, true);
		ENTITY::_0x9587913B9E772D29(Local_319[0 /*6*/], 0);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_319[0 /*6*/], 48, false);
		TASK::_TASK_FLEE_FROM_COORD(Local_319[0 /*6*/], 1416.469f, 1166.036f, 183.8655f, 1510.422f, 1396.894f, 156.7776f, 1000f, -1, 1024, 2.5f, 0);
		__LIB_2__::func_788(&(Local_319[0 /*6*/]), 1, 0, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_319[1 /*6*/]))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_319[1 /*6*/], Local_319[1 /*6*/].f_1, (Local_319[1 /*6*/].f_4 + 180f), true, false, true);
		ENTITY::_0x9587913B9E772D29(Local_319[1 /*6*/], 0);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_319[1 /*6*/], 48, false);
		TASK::_TASK_FLEE_FROM_COORD(Local_319[1 /*6*/], 1416.469f, 1166.036f, 183.8655f, 1510.422f, 1396.894f, 156.7776f, 1000f, -1, 1024, 2.5f, 0);
		__LIB_2__::func_788(&(Local_319[1 /*6*/]), 1, 0, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_319[2 /*6*/]))
	{
		PED::_0x2EB75FB86C41F026(Local_319[2 /*6*/], 3, 0);
	}
	func_547();
	__LIB_1__::func_148(&uLocal_551);
	func_594(1);
	__LIB_1__::func_148(&uLocal_533);
	__LIB_1__::func_148(&uLocal_545);
	ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_52, false, iLocal_480);
	__LIB_8__::func_776(Local_52, 150);
	__LIB_10__::func_561(cParam0, "SOL2_OBJ_1", 0f, 0f, 0f);
	if (func_166(262144))
	{
		__LIB_1__::func_422("SOL2_OBJ_1", 7500, 0, 1, 0, 0, -1, -1, 0);
	}
}

void func_605(char[4] cParam0)
{
	if (!func_166(268435456))
	{
		if (func_166(131072))
		{
			if (!__LIB_0__::func_75(&uLocal_557))
			{
				__LIB_1__::func_148(&uLocal_557);
			}
			else if (__LIB_0__::func_264(&uLocal_557) > 2f)
			{
				if (func_1124())
				{
					func_173(268435456);
				}
			}
		}
	}
	else if (!func_166(64))
	{
		if (func_171(1, 4, "PL_MAIN"))
		{
			func_173(64);
			__LIB_1__::func_148(&uLocal_536);
			__LIB_1__::func_148(&uLocal_539);
		}
	}
	else if (!func_290(2048))
	{
		if (__LIB_0__::func_264(&uLocal_536) > 3f && !__LIB_6__::func_904())
		{
			if (func_371(cParam0, Local_629[6 /*2*/], 1))
			{
				__LIB_1__::func_148(&uLocal_536);
			}
		}
	}
	else if (!func_290(4096))
	{
		if (__LIB_0__::func_264(&uLocal_536) > 6f && !__LIB_6__::func_904())
		{
			if (func_371(cParam0, Local_629[7 /*2*/], 1))
			{
				__LIB_1__::func_148(&uLocal_536);
			}
		}
	}
	else if (!func_290(8192))
	{
		if (__LIB_0__::func_264(&uLocal_536) > 2f && !__LIB_6__::func_904())
		{
			if (func_371(cParam0, Local_629[8 /*2*/], 1))
			{
				__LIB_1__::func_148(&uLocal_536);
			}
		}
	}
	else if (!func_290(16384))
	{
		if (__LIB_0__::func_264(&uLocal_536) > 10f && !__LIB_6__::func_904())
		{
			if (func_371(cParam0, Local_629[9 /*2*/], 1))
			{
				__LIB_1__::func_148(&uLocal_536);
			}
		}
	}
	if (!func_166(1048576))
	{
		if (__LIB_0__::func_264(&uLocal_539) > 20f)
		{
			func_228();
			func_173(1048576);
			__LIB_0__::func_37(&uLocal_539);
		}
	}
}

bool func_606()
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Local_60[iVar0 /*43*/].f_40 == 4 || Local_60[iVar0 /*43*/].f_40 == 3)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (!func_166(131072))
	{
		if (iVar1 > 3)
		{
			if ((ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), Local_60[4 /*43*/].f_7, true) && ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), Local_60[5 /*43*/].f_7, true)) || __LIB_0__::func_266(Global_35, Local_356.f_1, 40f, 1, 1))
			{
				if (func_1125())
				{
					func_173(131072);
					__LIB_1__::func_148(&uLocal_548);
					return false;
				}
			}
		}
	}
	if (iVar1 == 6 && func_166(131072))
	{
		return true;
	}
	else if (iVar1 == (6 - 1))
	{
		if (!func_166(128))
		{
			func_1126();
			func_173(128);
		}
	}
	return false;
}

void func_607()
{
	func_594(0);
}

void func_608(int iParam0)
{
	int iVar0;
	if (iParam0 == 3)
	{
		iVar0 = iLocal_15;
		iVar0++;
		iLocal_15 = iVar0;
		if (iLocal_15 == 3)
		{
			iLocal_15 = (iVar0 - 1);
		}
	}
	else
	{
		iLocal_15 = iParam0;
	}
	iLocal_14 = 0;
}

void func_611()
{
	__LIB_1__::func_148(&uLocal_551);
	if (iLocal_15 == 1)
	{
		__LIB_2__::func_542(Local_52, 1413.414f, 1169.4f, 183.958f, 2f, 0, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_52, 11, true);
		TASK::TASK_SEEK_COVER_TO_COVER_POINT(Local_52, iLocal_508, 1414.915f, 1142.732f, 183.5915f, -1, 0, 0, 0);
	}
	else
	{
		TASK::TASK_SEEK_COVER_TO_COVER_POINT(Local_52, iLocal_508, 1414.915f, 1142.732f, 183.5915f, -1, 0, 0, 0);
	}
	func_594(1);
}

void func_640()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1160();
	func_1161();
	func_1162();
	func_1163();
	func_1164();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_641(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1167(iParam0, 1, 1, -142743235, 1);
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

void func_677()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1199(&uVar4, &iVar1, &iVar2, &iVar3)))
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

void func_701()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		__LIB_0__::func_172(uLocal_499[iVar0]);
		iVar0++;
	}
}

void func_702()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_361[iVar0 /*8*/]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_361[iVar0 /*8*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_370[iVar0 /*8*/]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_370[iVar0 /*8*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_379[iVar0 /*8*/]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_379[iVar0 /*8*/]));
		}
		iVar0++;
	}
}

bool func_703(int iParam0, char* sParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[iParam0 /*16*/]))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_18[iParam0 /*16*/], true, false))
	{
		return false;
	}
	if (!ANIMSCENE::_0xA9016536015DE29D(Local_18[iParam0 /*16*/], sParam1))
	{
		return false;
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_18[iParam0 /*16*/], sParam1))
	{
		return true;
	}
	if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_18[iParam0 /*16*/], sParam1))
	{
		if (ANIMSCENE::_0xDF7B5144E25CD3FE(Local_18[iParam0 /*16*/], sParam1))
		{
			if (iParam0 == 0)
			{
				func_399();
			}
		}
	}
	return false;
}

void func_843(int iParam0, char* sParam1)
{
	char* sVar0;
	sVar0 = __LIB_0__::func_454(__LIB_0__::func_453(0));
	__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1340(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_852(var uParam0, int iParam1, int iParam2)
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
		return func_852(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_875(char* sParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_18[0 /*16*/], sParam0, iParam1, 0);
	}
}

int func_1027(int iParam0, vector3 vParam1, int iParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_379[iParam0 /*8*/]))
	{
		if (STREAMING::HAS_MODEL_LOADED(WEAPON::_GET_WEAPONTYPE_MODEL(iParam4)))
		{
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(vParam1, 1f, WEAPON::_GET_WEAPONTYPE_MODEL(iParam4), false))
			{
				Local_379[iParam0 /*8*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(vParam1, 1f, WEAPON::_GET_WEAPONTYPE_MODEL(iParam4), true, false, true);
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_379[iParam0 /*8*/]))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_379[iParam0 /*8*/], true, true);
		return 1;
	}
	return 0;
}

bool func_1071()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (__LIB_10__::func_562(4, &(Local_60[iVar1 /*43*/]), Local_60[iVar1 /*43*/].f_41, Local_60[iVar1 /*43*/].f_7, Local_60[iVar1 /*43*/].f_10, 1, 1, 0, 1, 1, 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_319[2 /*6*/]))
	{
		if (__LIB_10__::func_562(4, &(Local_319[2 /*6*/]), Local_319[2 /*6*/].f_5, Local_319[2 /*6*/].f_1, Local_319[2 /*6*/].f_4, 1, 1, 0, 1, 1, 1, 1))
		{
		}
	}
	if (iVar0 == 4 && ENTITY::DOES_ENTITY_EXIST(Local_319[2 /*6*/]))
	{
		return true;
	}
	return false;
}

void func_1072(int iParam0)
{
	ENTITY::SET_ENTITY_VISIBLE(iParam0, false);
	ENTITY::SET_ENTITY_COLLISION(iParam0, false, false);
	AUDIO::STOP_PED_SPEAKING(iParam0, true);
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
}

void func_1079()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar2 = 0;
	iVar3 = ITEMSET::CREATE_ITEMSET(true);
	iVar4 = PROPSET::_GET_ENTITIES_FROM_PROPSET(iLocal_523, iVar3, 0, false, false);
	iVar2 = 0;
	while (iVar2 < iVar4)
	{
		iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar3);
		iVar1 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(iVar0);
		if (!ENTITY::IS_ENTITY_DEAD(Local_356))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (FIRE::IS_ENTITY_ON_FIRE(iVar1))
				{
					FIRE::STOP_ENTITY_FIRE(iVar1, 0);
				}
				ENTITY::SET_ENTITY_PROOFS(iVar1, 0, false);
				FIRE::START_ENTITY_FIRE(iVar1, 0f, -1, 14);
			}
		}
		iVar2++;
	}
}

void func_1102(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1548();
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

void func_1104(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_84(uParam0, 2048) && !__LIB_0__::func_86(__LIB_10__::func_334(uParam0)))
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
			func_1555(iVar1, __LIB_10__::func_334(uParam0), __LIB_10__::func_335(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1555(iVar3, __LIB_10__::func_334(uParam0), __LIB_10__::func_335(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1105(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_10__::func_334(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_10__::func_334(uParam0) };
			func_1555(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_1119()
{
	__LIB_10__::func_259(&(Local_52.f_7), Local_52, -89429847, "BLIP_WEATHERS");
	__LIB_2__::func_542(Local_52, 1413.414f, 1169.4f, 183.958f, 2f, 0, 0);
	TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_52, 100f, 0, 0);
	func_594(2);
}

void func_1121(int iParam0)
{
	ENTITY::_0x18FF3110CF47115D(Local_60[iParam0 /*43*/], 1, 0);
	func_599(iParam0, 3);
}

void func_1122(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_319[iParam0 /*6*/]))
	{
		if ((!PED::IS_PED_ON_MOUNT(Local_60[iParam1 /*43*/]) && !__LIB_0__::func_163(Local_60[iParam1 /*43*/], 501393341)) && !PED::IS_PED_FLEEING(Local_319[iParam0 /*6*/]))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(Local_319[iParam0 /*6*/], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
	}
}

bool func_1124()
{
	struct<14> Var0;
	if (!ENTITY::DOES_ENTITY_EXIST(Local_356))
	{
		return false;
	}
	Var0.f_8 = -1082130432;
	Var0.f_6 = iLocal_478;
	Var0 = { 1422.245f, 1123.628f, 185.6594f };
	Var0.f_3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_356, 0.8f, -1.95f, 1.05f) };
	Var0.f_7 = 1f;
	Var0.f_12 = 1;
	Var0.f_13 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_524))
	{
		ENTITY::SET_ENTITY_PROOFS(iLocal_524, 0, false);
	}
	MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var0);
	return true;
}

bool func_1125()
{
	if (func_227())
	{
		func_1570(5);
		func_1570(4);
		return true;
	}
	return false;
}

void func_1126()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Local_60[iVar0 /*43*/].f_40 != 4)
		{
			PED::SET_PED_COMBAT_MOVEMENT(Local_60[iVar0 /*43*/], 2);
			PED::REMOVE_PED_DEFENSIVE_AREA(Local_60[iVar0 /*43*/], false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_60[iVar0 /*43*/], 0, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_60[iVar0 /*43*/], 50, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_60[iVar0 /*43*/], 43, true);
			PED::SET_PED_COMBAT_RANGE(Local_60[iVar0 /*43*/], 0);
		}
		iVar0++;
	}
}

void func_1160()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1584(0);
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
	func_1584(1);
}

void func_1161()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_358(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1162()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1587(0);
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
	func_1587(1);
}

void func_1163()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1587(0);
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
	func_1587(1);
}

void func_1164()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_358(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_358(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1167(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1167(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1167(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1167(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	__LIB_1__::func_879(iParam0, iParam1);
	return 1;
}

int func_1199(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1623(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_358(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

int func_1340(int iParam0)
{
	var uVar0;
	if (!func_1737(iParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

void func_1548()
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
	iVar0 = func_1828(6291456, 0);
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

void func_1555(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1555(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1555(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_1570(int iParam0)
{
	int iVar0;
	int iVar1;
	if (iParam0 == 4)
	{
		if (!MAP::DOES_BLIP_EXIST(Local_60[4 /*43*/].f_42))
		{
			Local_60[4 /*43*/].f_42 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COP"), Local_60[4 /*43*/]);
			if (MAP::DOES_BLIP_EXIST(Local_60[4 /*43*/].f_42))
			{
				MAP::_BLIP_SET_MODIFIER(Local_60[4 /*43*/].f_42, -1034486097);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_60[4 /*43*/].f_42, "BLIP_SOLDIER");
			}
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_528, 0, 10, -1, 0, 0, -1);
		TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(Local_60[iParam0 /*43*/], iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
	else if (iParam0 == 5)
	{
		if (!MAP::DOES_BLIP_EXIST(Local_60[5 /*43*/].f_42))
		{
			Local_60[5 /*43*/].f_42 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COP"), Local_60[5 /*43*/]);
			if (MAP::DOES_BLIP_EXIST(Local_60[5 /*43*/].f_42))
			{
				MAP::_BLIP_SET_MODIFIER(Local_60[5 /*43*/].f_42, -1034486097);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_60[5 /*43*/].f_42, "BLIP_SOLDIER");
			}
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_529, 0, 10, -1, 0, 0, -1);
		TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar1);
		TASK::TASK_PERFORM_SEQUENCE(Local_60[iParam0 /*43*/], iVar1);
		TASK::CLEAR_SEQUENCE_TASK(&iVar1);
	}
	func_599(iParam0, 1);
}

void func_1584(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_358(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_358(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_358(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1836(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_641(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1167(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1840(Var0);
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

void func_1587(bool bParam0)
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
		func_358(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_358(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_358(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_358(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_358(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_358(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_358(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_358(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_358(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_358(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_358(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1167(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1167(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1167(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1167(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1167(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1167(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1167(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1167(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1167(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1167(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1167(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1623(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1623(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1623(iVar63, -915411861, 1, 0, 0));
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

bool func_1737(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
				Jump @231; //curOff = 57
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

int func_1828(int iParam0, int iParam1)
{
	var uVar0;
	return func_1931(&uVar0, iParam0, iParam1);
}

void func_1836(int iParam0)
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
	func_1167(iParam0, 1, 1, -142743235, 1);
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
		func_1167(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_1840(struct<6> Param0)
{
	if (!func_1952(Param0.f_4, 1))
	{
	}
	if (!func_1952(Param0, 1))
	{
	}
	if (!func_1952(Param0.f_2, 1))
	{
	}
	if (!func_1952(Param0.f_5, 1))
	{
	}
	if (!func_1952(Param0.f_3, 1))
	{
	}
	if (!func_1952(Param0.f_1, 1))
	{
	}
}

int func_1931(var uParam0, int iParam1, int iParam2)
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
		return func_1931(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_1952(int iParam0, int iParam1)
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
				if (func_1952(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_1952(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_1952(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_1952(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

