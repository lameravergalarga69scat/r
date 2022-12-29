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
	var uLocal_18[3] = { 0, 0, 0 };
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	struct<20> Local_32 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	int iLocal_55 = 0;
	float fLocal_56 = 0f;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
	struct<75> Local_65[4];
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	struct<16> Local_369[8];
	var uLocal_498 = 0;
	var uLocal_499 = 2;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 2;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = -1;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 1106247680;
	var uLocal_530 = 0;
	var uLocal_531 = 1072064102;
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
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
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
	int iLocal_592 = 0;
	int iLocal_593 = 0;
	int iLocal_594 = 0;
	int iLocal_595 = 0;
	int iLocal_596 = 0;
	int iLocal_597 = 0;
	int iLocal_598 = 0;
	var uLocal_599 = 0;
	int iLocal_600 = 0;
	int iLocal_601 = 0;
	var uLocal_602[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_613 = 0;
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	char* sLocal_616 = NULL;
	char* sLocal_617 = NULL;
	char* sLocal_618 = NULL;
	char* sLocal_619 = NULL;
	char* sLocal_620 = NULL;
	char* sLocal_621 = NULL;
	char* sLocal_622 = NULL;
	char* sLocal_623 = NULL;
	bool bLocal_624 = false;
	bool bLocal_625 = false;
	int iLocal_626 = 0;
	bool bLocal_627 = false;
	int iLocal_628 = 0;
	bool bLocal_629 = false;
	bool bLocal_630 = false;
	bool bLocal_631 = false;
	bool bLocal_632 = false;
	bool bLocal_633 = false;
	int iLocal_634 = 0;
	float fLocal_635 = 0f;
	float fLocal_636 = 0f;
	float fLocal_637 = 0f;
	float fLocal_638 = 0f;
	float fLocal_639 = 0f;
	float fLocal_640 = 0f;
	float fLocal_641 = 0f;
	float fLocal_642 = 0f;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	char* sLocal_646 = NULL;
	vector3 vLocal_647 = { 0f, 0f, 0f };
	int iLocal_650 = 0;
	int iLocal_651 = 0;
	int iLocal_652 = 0;
	var uScriptParam_0 = 0;
#endregion
void __EntryFunction__()
{
	struct<2238> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_56 = -1f;
	iLocal_366 = joaat("LOANSHARKING_HORSECHASE1_MALES_01");
	iLocal_367 = joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY");
	iLocal_368 = joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
	sLocal_616 = "script@proc@loansharking@horsechase@ig1_farm_debtor";
	sLocal_617 = "script@proc@loansharking@horsechase@ig1_farm_debtor_arthur";
	sLocal_618 = "script@proc@loansharking@horsechase@ig2_debt_chase";
	sLocal_619 = "script@proc@loansharking@horsechase@ig3_return_debt";
	sLocal_620 = "script@proc@loansharking@horsechase@ig2_debt_chase_chickmatthews";
	sLocal_621 = "script@proc@loansharking@horsechase@ig2_debt_chase_rideoff";
	sLocal_622 = "script_proc@loansharking@horse_chase@ig3_return_debt";
	sLocal_623 = "ls_horse_chase_ranch_hand3";
	sLocal_646 = "script@proc@loansharking@horsechase2@tree";
	vLocal_647 = { 1444.9f, 897.85f, 122.5f };
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
	Var0.f_2237 = 1;
	Var0.f_2237.f_1.f_2 = 570;
	Var0.f_2237.f_1.f_3 = 1065353216;
	Var0.f_2237.f_1.f_4 = -1082130432;
	Var0.f_2237.f_1.f_9 = 2;
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
		__LIB_0__::func_11(cParam0);
		__LIB_19__::func_175(cParam0);
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
			__LIB_18__::func_231(cParam0);
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

int func_10(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		func_62(joaat("DOCUMENT_TREASURE_MAP_LS_HORSECHASE"), 1, 0, -142743235, 0);
		__LIB_18__::func_241(5);
		__LIB_18__::func_228(8192);
		PED::SET_PED_CONFIG_FLAG(Local_65[0 /*75*/], 297, false);
		PED::SET_PED_CONFIG_FLAG(Local_65[0 /*75*/], 315, true);
		if (!__LIB_0__::func_272(iLocal_614, 0))
		{
			if (__LIB_12__::func_637(&iLocal_614, 1112.061f, 499.5253f, 94.7495f, 286.3102f, 1, 1, 1, 1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_614, true);
				TASK::TASK_STAND_STILL(iLocal_614, -1);
			}
		}
		if (!func_67())
		{
			return 2;
		}
		PED::SET_PED_CONFIG_FLAG(Local_65[2 /*75*/], 136, false);
		PED::_SET_PED_ON_MOUNT(Local_65[0 /*75*/], Local_65[2 /*75*/], -1, true);
		if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Local_65[0 /*75*/], true) && !__LIB_0__::func_163(Local_65[0 /*75*/], 658540077))
		{
			func_69();
			__LIB_18__::func_241(7);
		}
		if (!MAP::DOES_BLIP_EXIST(Local_65[0 /*75*/].f_1))
		{
			__LIB_10__::func_259(&(Local_65[0 /*75*/].f_1), Local_65[0 /*75*/], joaat("BLIP_STYLE_COMPANION"), 0);
			MAP::_BLIP_SET_MODIFIER(Local_65[0 /*75*/].f_1, -546708623);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_65[0 /*75*/].f_1, "BLIP_CHICK");
		}
		__LIB_3__::func_353("LSHSC_START", 0);
		__LIB_10__::func_378(*uParam0, func_41(0), func_41(1), 0, 1);
		__LIB_10__::func_260(1, 1);
		return 8;
	}
	else if (iVar0 == 1)
	{
		__LIB_18__::func_228(8192);
		__LIB_18__::func_241(8);
		func_74(joaat("DOCUMENT_TREASURE_MAP_LS_HORSECHASE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_10__::func_260(1, 1);
		__LIB_10__::func_378(*uParam0, func_41(1), func_41(2), 1, 2);
		return 8;
	}
	else if (iVar0 == 2)
	{
		func_74(joaat("MONEY_LOANSHARK_HORSE_CHASE_DEBT"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_10__::func_260(1, 1);
		return 9;
	}
	return 2;
}

void func_12(char[4] cParam0)
{
	if (func_75(cParam0))
	{
		if (__LIB_10__::func_261(cParam0->f_346))
		{
			__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
			__LIB_10__::func_464(&(cParam0->f_32), &(cParam0->f_352));
			func_78(cParam0);
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
			if (func_78(cParam0))
			{
				__LIB_10__::func_465(cParam0, 1);
				iVar0 = __LIB_9__::func_872(cParam0);
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
			iVar0 = __LIB_9__::func_872(cParam0);
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
	iVar0 = func_86(cParam0);
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
	func_87(*cParam0, 1, 1);
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
	else if (!__LIB_0__::func_75(&(cParam0->f_2064)) || IntToFloat(__LIB_1__::func_871(&(cParam0->f_2064))) > __LIB_13__::func_475(cParam0))
	{
		__LIB_1__::func_283(&(cParam0->f_2064), 1);
		if (func_108(cParam0))
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
	func_110(cParam0);
	__LIB_10__::func_342(cParam0);
	func_112(cParam0);
	if ((cParam0->f_1 != 12 && __LIB_10__::func_266(cParam0) != 2) && !__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_10, 2))
	{
		__LIB_8__::func_985(*cParam0);
	}
	func_112(cParam0);
	__LIB_3__::func_525(&(cParam0->f_2210[0]), &(cParam0->f_2213[0]));
	__LIB_3__::func_525(&(cParam0->f_2210[1]), &(cParam0->f_2213[1]));
	if (__LIB_10__::func_266(cParam0) == 0)
	{
		__LIB_10__::func_435(*cParam0);
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
	int iVar0;
	__LIB_0__::func_7(&(Global_1392626[*uParam0 /*32*/].f_8), 512);
	__LIB_0__::func_7(&(Global_1392626[*uParam0 /*32*/].f_8), 128);
	__LIB_10__::func_267(uParam0, "LSHRCAU");
	__LIB_10__::func_268(uParam0, 7);
	__LIB_10__::func_269(uParam0, 7);
	func_133(uParam0, 1094934838);
	STREAMING::REQUEST_ANIM_DICT(sLocal_622);
	__LIB_10__::func_497(&(uParam0->f_2041), iLocal_366);
	__LIB_10__::func_497(&(uParam0->f_2041), iLocal_367);
	__LIB_10__::func_497(&(uParam0->f_2041), iLocal_368);
	Local_65[1 /*75*/].f_2 = { 1107.073f, 507.3737f, 94.89444f };
	Local_65[1 /*75*/].f_5 = 191.6874f;
	Local_65[3 /*75*/].f_2 = { 1128.369f, 504.9968f, 95.4331f };
	Local_65[3 /*75*/].f_5 = 306.9715f;
	if (*uParam0 == __LIB_10__::func_367())
	{
		Local_65[2 /*75*/].f_2 = { 1140.01f, 491.879f, 94.9783f };
		Local_65[2 /*75*/].f_5 = -75.38f;
		Local_65[0 /*75*/].f_2 = { 1140.01f, 491.879f, 94.9783f };
		Local_65[0 /*75*/].f_5 = -75.38f;
	}
	else
	{
		Local_65[2 /*75*/].f_2 = { 1130.996f, 501.6529f, 96.2545f };
		Local_65[2 /*75*/].f_5 = 310.3113f;
		Local_65[0 /*75*/].f_2 = { 1130.114f, 502.0255f, 96.2224f };
		Local_65[0 /*75*/].f_5 = 203.7678f;
	}
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_623);
	iLocal_592 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1350.202f, -1365.132f, 78.619f, 0f, 0f, -9.934977f, 10f, 10f, 5f, "m_volMissionLaunch");
	iLocal_593 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1351.93f, -1355.268f, 78.619f, 0f, 0f, -9.934977f, 30f, 30f, 5f, "m_volInitialConversation");
	iLocal_594 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1116.18f, 496.0392f, 95.4485f, 0f, 0f, 44.58749f, 47.82171f, 40.50388f, 15.31202f, "m_volScenarioBlock");
	iLocal_595 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1117.883f, 485.0335f, 97.58239f, 0f, 0f, 39.23502f, 5.179276f, 3.044432f, 2.75114f, "m_volClimbBlock");
	iLocal_596 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1128.757f, 499.7383f, 96.33897f, 0f, 0f, -49.34036f, 7.976662f, 4.923555f, 2.762501f, "m_volShedBlock");
	iLocal_597 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(1443.95f, 899.7013f, 122.7398f, 0f, 0f, 0f, 3f, 3f, 3f, "m_volTreeTrigger");
	iLocal_598 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1136.361f, 496.686f, 96.339f, 0f, 0f, 42f, 18f, 18f, 5f, "m_volChaseStart");
	__LIB_2__::func_261(iLocal_594, "LS_BANKONMISS", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
	__LIB_3__::func_229(873);
	__LIB_3__::func_229(874);
	MISC::_0x2FCD528A397E5C88(iLocal_594, 16384);
	__LIB_3__::func_729(iLocal_594, 0, 0);
	MISC::_0x2FCD528A397E5C88(iLocal_594, 8);
	MISC::_0x2FCD528A397E5C88(iLocal_594, 1048576);
	uLocal_599 = PED::_0x4C39C95AE5DB1329(iLocal_594, 0, 15);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_594, 0, 262144, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iLocal_594, 0, 262144, 0, -1, -1, 2);
	__LIB_1__::func_948(joaat("DOOR_CRO_FARMHOUSE_01"), 1, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(joaat("DOOR_CRO_FARMHOUSE_03"), 1, 0f, 0, 0, 0, 1, 0);
	iVar0 = 0;
	while (iVar0 < Local_65)
	{
		__LIB_1__::func_402(&(Local_65[iVar0 /*75*/].f_7), 1);
		__LIB_1__::func_403(&(Local_65[iVar0 /*75*/].f_7), 0);
		__LIB_1__::func_398(&(Local_65[iVar0 /*75*/].f_7), 1);
		__LIB_1__::func_401(&(Local_65[iVar0 /*75*/].f_7), 1);
		__LIB_1__::func_404(&(Local_65[iVar0 /*75*/].f_7), 1);
		__LIB_1__::func_393(&(Local_65[iVar0 /*75*/].f_7), 0);
		iVar0++;
	}
}

bool func_38(char[4] cParam0)
{
	int iVar0;
	float fVar1;
	if (cParam0->f_1 == 3)
	{
		if (func_141(cParam0))
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
			if (!__LIB_10__::func_363(*cParam0, (Global_1392626[*cParam0 /*32*/].f_5 + 10f)) && !__LIB_10__::func_373(Global_1392626[*cParam0 /*32*/].f_11, 0, &(cParam0->f_2077), &(cParam0->f_2105), 0, 0))
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
	func_150(cParam0);
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
	func_112(cParam0);
	if (__LIB_10__::func_266(cParam0) == 0)
	{
		__LIB_10__::func_435(*cParam0);
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
	if (iVar0 == 0)
	{
		Var1 = { 1107.63f, 504.6122f, 94.6026f };
		Var1.f_3 = 272.8669f;
	}
	else if (iVar0 == 1)
	{
		Var1 = { 1200.719f, 522.0459f, 89.9569f };
		Var1.f_3 = 269.5601f;
	}
	else if (iVar0 == 2)
	{
		Var1 = { 1443.651f, 898.7614f, 121.2004f };
		Var1.f_3 = 181.6813f;
	}
	return Var1;
}

bool func_42(var uParam0)
{
	return func_158(*uParam0, uParam0->f_3);
}

bool func_46(char[4] cParam0)
{
	if (cParam0->f_1 == 8)
	{
		if (func_159(cParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_57(var uParam0)
{
	if (func_174(uParam0, 0, 3, 1) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_623))
	{
		__LIB_0__::func_928(&(uParam0->f_2106), Global_35, "ARTHUR", 0);
		__LIB_0__::func_928(&(uParam0->f_2106), Local_65[0 /*75*/], "LSHRC_RANCH_HAND", 0);
		__LIB_0__::func_928(&(uParam0->f_2106), Local_65[1 /*75*/], "LSHRC_RANCH_DECOY", 0);
		Global_1392626[*uParam0 /*32*/].f_11 = Local_65[0 /*75*/];
		if (ENTITY::DOES_ENTITY_EXIST(Local_65[1 /*75*/]))
		{
			func_176(1);
		}
		else
		{
			return false;
		}
		if (!func_177(&iLocal_600, joaat("P_BRUSHHORSE02X"), 1107.143f, 507.3958f, 94.34319f, 0f, 0f, 0f, 0))
		{
			return false;
		}
		if (!func_177(&iLocal_601, joaat("S_TWOFOLDMAP01X"), 0f, 0f, 0f, 0f, 0f, 0f, 0))
		{
			return false;
		}
		return true;
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
				func_193(&(cParam0->f_352), cParam0->f_348, 0, 0);
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
			__LIB_0__::func_11(cParam0);
			if ((!PED::IS_PED_RAGDOLL(Global_35) && !PED::IS_PED_JUMPING(Global_35)) && !PED::IS_PED_INJURED(Global_1392626[*cParam0 /*32*/].f_11))
			{
				if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 1024))
				{
					func_196(&(Global_1392626[*cParam0 /*32*/].f_11), &(cParam0->f_2216), cParam0->f_2255, &(cParam0->f_2237), 0.1f, 3, 0, cParam0->f_2256, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
					if (__LIB_9__::func_754(&(cParam0->f_2216)))
					{
						func_112(cParam0);
						__LIB_10__::func_345(cParam0);
						__LIB_10__::func_342(cParam0);
						return true;
					}
				}
			}
		}
	}
	if (func_199(cParam0))
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
	__LIB_2__::func_624(&(cParam0->f_2237), 0, 0, 1, 0);
	func_112(cParam0);
	__LIB_0__::func_7(&(cParam0->f_16), 1);
	__LIB_0__::func_11(cParam0);
	__LIB_10__::func_253(cParam0, func_202(cParam0));
	iVar0 = func_202(cParam0);
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

int func_62(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_62(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

bool func_67()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (__LIB_0__::func_272(Local_65[iVar1 /*75*/], 0))
		{
			if (!PED::_0xA0BC8FAED8CFEB3C(Local_65[iVar1 /*75*/]))
			{
				return false;
			}
		}
		if (__LIB_0__::func_272(iLocal_614, 0))
		{
			if (!PED::_0xA0BC8FAED8CFEB3C(iLocal_614))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_69()
{
	int iVar0;
	func_219(&uLocal_602, 750.1129f, 723.1831f, 113.1959f, 0);
	VEHICLE::_0xE6C5E2125EB210C1(joaat("TRAINS3"), 2, 1);
	VEHICLE::SET_TRAIN_SPEED(uLocal_602[0], 0f);
	VEHICLE::SET_TRAIN_CRUISE_SPEED(uLocal_602[0], 0f);
	func_220(iLocal_598, 5f);
	iVar0 = 2054;
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_613);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_613);
	if (__LIB_8__::func_332(8192))
	{
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_623, 0, iVar0 | 8, -1, 0, 0, -1);
	}
	else
	{
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_623, 0, iVar0, -1, 0, 0, -1);
	}
	TASK::CLOSE_SEQUENCE_TASK(iLocal_613);
	TASK::TASK_PERFORM_SEQUENCE(Local_65[0 /*75*/], iLocal_613);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_613);
	__LIB_9__::func_903(&(Local_65[0 /*75*/].f_57[0 /*17*/]));
	__LIB_9__::func_903(&(Local_65[1 /*75*/].f_57[0 /*17*/]));
	__LIB_18__::func_228(4194304);
	iLocal_626 = 0;
}

bool func_74(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_74(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_74(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_74(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_74(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_74(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_74(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_74(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_74(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_74(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_74(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_74(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

bool func_75(char[4] cParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(cParam0->f_348)))
	{
		if (!func_193(&(cParam0->f_352), cParam0->f_348, 0, 0))
		{
			return false;
		}
	}
	else
	{
		__LIB_10__::func_263(1, 1, 1);
		__LIB_0__::func_11(cParam0);
		if (!__LIB_10__::func_605(cParam0))
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

int func_78(char[4] cParam0)
{
	char cVar0[32];
	StringCopy(&cVar0, cParam0->f_346, 32);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return 1;
	}
	return func_317(cVar0, &(cParam0->f_32), cParam0);
}

int func_86(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	struct<4> Var8;
	func_321(iLocal_55, fLocal_56);
	if (__LIB_1__::func_205(Global_35, iLocal_595, 1, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 168, true);
	}
	if (iLocal_14 != 7)
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		}
	}
	if (iLocal_14 >= 7)
	{
		if (__LIB_0__::func_272(Local_65[3 /*75*/], 0) && !__LIB_0__::func_163(Local_65[3 /*75*/], 518218985))
		{
			if (__LIB_0__::func_665(Global_35, Local_65[3 /*75*/], 1, 1) < 30f && PED::IS_PED_SHOOTING(Global_35))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(Local_65[3 /*75*/], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
			}
		}
	}
	if (iLocal_14 >= 8)
	{
		if (__LIB_1__::func_285(&uLocal_577, 2f))
		{
			__LIB_0__::func_37(&uLocal_577);
			if (__LIB_0__::func_272(Local_65[0 /*75*/], 0) && ENTITY::GET_ENTITY_HEALTH(Local_65[0 /*75*/]) > iLocal_634)
			{
				ENTITY::_SET_ENTITY_HEALTH(Local_65[0 /*75*/], iLocal_634, 0);
			}
		}
	}
	if (__LIB_10__::func_282(8) && !__LIB_10__::func_282(262144))
	{
		if (!__LIB_8__::func_684("LSHRC_TIEDUP"))
		{
			__LIB_3__::func_732(0);
			__LIB_10__::func_364(&(cParam0->f_2106), "LSHRC_TAKE_MAP", 0);
			func_329(262144);
		}
	}
	if (iLocal_14 >= 8)
	{
		func_330(cParam0);
	}
	if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_LS_HORSECHASE"), 1, 0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_8__::func_332(1048576))
		{
			__LIB_0__::func_45("HELP_SATCHEL_HSC", -1, 0, 0, 0, 1);
			__LIB_1__::func_324("OBJ_VIEW_MAP_HSC");
			__LIB_1__::func_422("OBJ_VIEW_MAP_HSC", -1, 0, 1, 0, 0, -1, -1, 0);
			if (MAP::DOES_BLIP_EXIST(Local_65[0 /*75*/].f_1))
			{
				MAP::REMOVE_BLIP(&(Local_65[0 /*75*/].f_1));
			}
			ENTITY::_0x18FF3110CF47115D(Local_65[0 /*75*/], 2, 1);
			ENTITY::_0x18FF3110CF47115D(Local_65[0 /*75*/], 3, 1);
			ENTITY::_0x18FF3110CF47115D(Local_65[0 /*75*/], 7, 1);
			__LIB_3__::func_552(Local_65[0 /*75*/]);
			AUDIO::SET_AUDIO_FLAG("ForceUrgentPlayerHorseSpurs", false);
			__LIB_18__::func_241(8);
			__LIB_18__::func_228(1048576);
			func_334(32768);
		}
	}
	switch (__LIB_10__::func_532())
	{
		case 1:
			__LIB_18__::func_241(2);
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				iVar2 = iVar0;
				iVar3 = iVar0;
				if (!Local_65[iVar2 /*75*/].f_6 && iVar2 != 2)
				{
					iVar1 = __LIB_0__::func_57(Local_65[iVar2 /*75*/]);
					if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, false, false))
					{
						if (Local_65[iVar2 /*75*/] == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1))
						{
							if (func_196(&(Local_65[iVar2 /*75*/]), &(Local_65[iVar2 /*75*/].f_36), 8f, &(Local_65[iVar2 /*75*/].f_57), 0, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */) == 0)
							{
								__LIB_1__::func_281(&(uLocal_18[iVar3]), 1, 1);
								Local_65[iVar2 /*75*/].f_6 = 1;
								PED::SET_PED_CONFIG_FLAG(Local_65[iVar2 /*75*/], 297, false);
								PED::SET_PED_CONFIG_FLAG(Local_65[iVar2 /*75*/], 130, false);
								MISC::_0xE98D55C5983F2509(Local_65[iVar2 /*75*/]);
								switch (iVar2)
								{
									case 0:
										break;
									case 1:
										iLocal_626 = 1;
										bLocal_632 = func_337();
										PLAYER::_0xBBADFB5E5E5766FB(PLAYER::GET_PLAYER_INDEX(), 0.5f);
										__LIB_18__::func_241(5);
										break;
								}
							}
						}
						else
						{
							__LIB_1__::func_281(&(uLocal_18[iVar3]), 1, 1);
						}
					}
					else
					{
						__LIB_1__::func_281(&(uLocal_18[iVar3]), 1, 1);
					}
				}
				iVar0++;
			}
			break;
		case 5:
			func_338(cParam0);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_369[1 /*16*/]))
			{
				if (ANIMSCENE::_0xB89FCFF19DAFFF28(Local_369[1 /*16*/], "ChickMatthews"))
				{
					func_339(1);
				}
			}
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Local_65[1 /*75*/], 0))
			{
			}
			MISC::_0xE98D55C5983F2509(Local_65[0 /*75*/]);
			MISC::_0xE98D55C5983F2509(Local_65[1 /*75*/]);
			__LIB_1__::func_281(&(uLocal_18[0]), 1, 1);
			__LIB_1__::func_281(&(uLocal_18[1]), 1, 1);
			if (!__LIB_8__::func_332(32768))
			{
				__LIB_3__::func_353("LSHSC_START", 0);
				__LIB_18__::func_228(32768);
			}
			if (iLocal_626 == 1)
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_613);
				func_339(1);
				iLocal_24 = 11;
				if (bLocal_632)
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(Local_65[0 /*75*/], Global_35, 3, 1, -1082130432 /* Float: -1f */, -1, 0);
					iLocal_22 = 1;
					iLocal_626 = 0;
				}
				else if (func_340())
				{
					PED::SET_PED_CONFIG_FLAG(Local_65[2 /*75*/], 136, false);
					PED::_SET_PED_ON_MOUNT(Local_65[0 /*75*/], Local_65[2 /*75*/], -1, true);
					func_69();
				}
			}
			if (__LIB_8__::func_332(4194304))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_65[0 /*75*/], 0))
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_65[0 /*75*/]) >= 3)
					{
						if (func_341())
						{
							func_334(4194304);
						}
					}
				}
			}
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_65[0 /*75*/], 0))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_65[0 /*75*/], 2f, 0, -1082130432 /* Float: -1f */, 0);
			}
			if (__LIB_8__::func_332(8192))
			{
				TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_623, 11, &uLocal_643);
				if (!bLocal_624)
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_65[0 /*75*/], false, true);
					bLocal_624 = true;
				}
				PED::_SET_PED_ON_MOUNT(Local_65[0 /*75*/], Local_65[2 /*75*/], -1, true);
			}
			if (bLocal_629)
			{
				if (!__LIB_0__::func_75(&uLocal_547))
				{
					__LIB_1__::func_283(&uLocal_547, 0);
				}
				else if (__LIB_0__::func_265(&uLocal_547) >= 1f)
				{
					if (!__LIB_8__::func_332(268435456))
					{
						if (!__LIB_0__::func_163(Global_35, -875674219))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Local_65[0 /*75*/], 0, 100000f, -1f, -1f);
						}
						else
						{
							__LIB_18__::func_228(268435456);
						}
					}
				}
			}
			if (__LIB_8__::func_684("LSHRC_IG2_ENT"))
			{
				if ((CAM::IS_GAMEPLAY_HINT_ACTIVE() && ENTITY::IS_ENTITY_ON_SCREEN(Local_65[0 /*75*/])) && (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_LOOK_LR")) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_LOOK_UD"))))
				{
					__LIB_1__::func_539();
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_369[3 /*16*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_369[3 /*16*/], false))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_369[3 /*16*/]) > 4.2f)
					{
						func_344(Local_65[0 /*75*/], 3f, 1048576);
						bLocal_629 = true;
					}
				}
				if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("LSHRC_IG2_ENT") == 0)
				{
					__LIB_1__::func_283(&uLocal_535, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 4992, false);
					bLocal_625 = true;
				}
				if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("LSHRC_IG2_ENT") == 1)
				{
				}
				if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("LSHRC_IG2_ENT") >= 2)
				{
					if (bLocal_625)
					{
						if (!MAP::DOES_BLIP_EXIST(Local_65[0 /*75*/].f_1))
						{
							__LIB_10__::func_259(&(Local_65[0 /*75*/].f_1), Local_65[0 /*75*/], joaat("BLIP_STYLE_COMPANION"), 0);
							MAP::_BLIP_SET_MODIFIER(Local_65[0 /*75*/].f_1, -546708623);
							MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_65[0 /*75*/].f_1, "BLIP_CHICK");
						}
						if (MAP::DOES_BLIP_EXIST(Local_65[1 /*75*/].f_1))
						{
							MAP::REMOVE_BLIP(&(Local_65[1 /*75*/].f_1));
						}
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 4992, false);
						bLocal_625 = false;
					}
					else
					{
						__LIB_1__::func_283(&uLocal_532, 0);
					}
				}
			}
			else
			{
				if (!bLocal_632)
				{
					if ((__LIB_0__::func_163(Local_65[0 /*75*/], 242628503) && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Local_65[0 /*75*/], true)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_369[3 /*16*/], false))
					{
						iVar4 = 1;
					}
				}
				else if (__LIB_0__::func_163(Local_65[0 /*75*/], 518218985) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_369[3 /*16*/], false))
				{
					iVar4 = 1;
				}
				if (iVar4 == 1)
				{
					if (!MAP::DOES_BLIP_EXIST(Local_65[0 /*75*/].f_1))
					{
						__LIB_10__::func_259(&(Local_65[0 /*75*/].f_1), Local_65[0 /*75*/], joaat("BLIP_STYLE_COMPANION"), 0);
						MAP::_BLIP_SET_MODIFIER(Local_65[0 /*75*/].f_1, -546708623);
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_65[0 /*75*/].f_1, "BLIP_CHICK");
					}
					if (MAP::DOES_BLIP_EXIST(Local_65[1 /*75*/].f_1))
					{
						MAP::REMOVE_BLIP(&(Local_65[1 /*75*/].f_1));
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 4992, false);
					bLocal_625 = false;
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						PLAYER::_0x77B0B6D17A3AC9AA(PLAYER::GET_PLAYER_INDEX(), 1f);
					}
					else if (__LIB_0__::func_272(iLocal_614, 0))
					{
						PED::_RESTORE_PED_STAMINA(iLocal_614, 100f);
					}
					__LIB_18__::func_241(7);
				}
			}
			break;
		case 7:
			if (!__LIB_10__::func_282(131072))
			{
				if (!__LIB_0__::func_75(&uLocal_586))
				{
					__LIB_1__::func_283(&uLocal_586, 0);
					AUDIO::SET_AUDIO_FLAG("ForceUrgentPlayerHorseSpurs", true);
				}
				else if (__LIB_1__::func_285(&uLocal_586, 20f))
				{
					__LIB_0__::func_37(&uLocal_586);
					AUDIO::SET_AUDIO_FLAG("ForceUrgentPlayerHorseSpurs", false);
					func_329(131072);
				}
			}
			if (!__LIB_8__::func_332(512))
			{
				PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CHICK_MATTHEWS"));
				iLocal_615 = MAP::_0x3E593DF9C2962EC6(-936216634);
				MAP::SET_BLIP_SPRITE(iLocal_615, joaat("BLIP_AMBIENT_LOAN_SHARK"), true);
				MAP::_0x97F6F158CC5B5CA2(Local_65[0 /*75*/], iLocal_615);
				__LIB_10__::func_588(cParam0, "OBJ_CHASE_HSC", ENTITY::GET_ENTITY_COORDS(Local_65[0 /*75*/], true, false));
				__LIB_4__::func_490(Local_65[0 /*75*/]);
				__LIB_13__::func_312(Local_65[0 /*75*/], joaat("DOCUMENT_TREASURE_MAP_LS_HORSECHASE"), 1);
				ENTITY::_0x18FF3110CF47115D(Local_65[0 /*75*/], 2, 0);
				ENTITY::_0x18FF3110CF47115D(Local_65[0 /*75*/], 3, 0);
				ENTITY::_0x18FF3110CF47115D(Local_65[0 /*75*/], 7, 0);
				__LIB_1__::func_991(Local_65[0 /*75*/], joaat("HONOR_EVENT_LOOT_INNOCENT"));
				__LIB_1__::func_283(&uLocal_583, 0);
				__LIB_18__::func_228(512);
			}
			else if (__LIB_1__::func_313(&uLocal_583, 3f))
			{
				__LIB_1__::func_422("OBJ_CHASE_HSC", 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			PLAYER::_0xBBADFB5E5E5766FB(PLAYER::GET_PLAYER_INDEX(), 0.5f);
			bVar5 = PED::_IS_PED_HOGTIED(Local_65[0 /*75*/]);
			bVar6 = ENTITY::IS_ENTITY_DEAD(Local_65[0 /*75*/]);
			if (bVar5 || bVar6)
			{
				if (!__LIB_8__::func_332(16777216))
				{
					__LIB_3__::func_353("LSHSC_END", 0);
					__LIB_18__::func_228(16777216);
				}
			}
			if (bVar6)
			{
				if (!__LIB_10__::func_282(4096))
				{
					__LIB_1__::func_283(&uLocal_565, 0);
					__LIB_3__::func_732(0);
					if (__LIB_1__::func_285(&uLocal_565, 2f))
					{
						__LIB_10__::func_364(&(cParam0->f_2106), "LSHRC_KILL_HAND", 0);
						func_329(4096);
					}
				}
			}
			if (!__LIB_10__::func_282(2))
			{
				if (bVar5)
				{
					if (!__LIB_0__::func_75(&uLocal_562))
					{
						__LIB_1__::func_283(&uLocal_562, 1);
					}
				}
				else if (__LIB_0__::func_75(&uLocal_562))
				{
					__LIB_0__::func_37(&uLocal_562);
				}
			}
			if (bVar5 && !bVar6)
			{
				if (__LIB_1__::func_285(&uLocal_562, 3f))
				{
					if (!__LIB_10__::func_282(2))
					{
						__LIB_10__::func_364(&(cParam0->f_2106), "LSHRC_TIEDUP", 0);
						func_329(2);
						__LIB_10__::func_588(cParam0, "OBJ_COLLECT_HSC", ENTITY::GET_ENTITY_COORDS(Local_65[0 /*75*/], true, false));
						TASK::CLEAR_PED_TASKS(Local_65[0 /*75*/], true, false);
						__LIB_0__::func_37(&uLocal_562);
					}
				}
				if (__LIB_10__::func_282(2))
				{
					if ((!__LIB_10__::func_282(4) && __LIB_8__::func_684("LSHRC_TIEDUP")) && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("LSHRC_TIEDUP") == 4)
					{
						__LIB_1__::func_148(&uLocal_550);
						__LIB_1__::func_283(&uLocal_550, 0);
						func_329(4);
					}
					if ((__LIB_10__::func_282(4) && !__LIB_8__::func_684("LSHRC_TIEDUP")) && __LIB_1__::func_313(&uLocal_550, 8f))
					{
						__LIB_10__::func_364(&(cParam0->f_2106), "LSHRC_REP_MAP", 0);
					}
				}
				if (!__LIB_10__::func_282(8))
				{
					if (__LIB_3__::func_996(Global_35) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(__LIB_5__::func_264(Global_35)) == Local_65[0 /*75*/])
					{
						if (__LIB_8__::func_684("LSHRC_TIEDUP"))
						{
							__LIB_3__::func_732(1);
						}
						func_329(8);
					}
				}
				if (__LIB_4__::func_215(Global_35) && __LIB_5__::func_60(Global_35, 3) == Local_65[0 /*75*/])
				{
					if (__LIB_8__::func_684("LSHRC_TIEDUP") || __LIB_8__::func_684("LSHRC_REP_MAP"))
					{
						__LIB_3__::func_732(1);
					}
				}
			}
			func_354();
			func_355(&(Local_65[1 /*75*/]), cParam0);
			fLocal_635 = __LIB_0__::func_665(Local_65[0 /*75*/], Global_35, 1, 1);
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (!__LIB_8__::func_332(65536))
				{
					__LIB_3__::func_353("LSHSC_CHASE", 0);
					__LIB_0__::func_45("HELP_CAPTURE", 10000, 0, 0, 0, 1);
					__LIB_18__::func_228(65536);
				}
			}
			if (!__LIB_8__::func_332(64))
			{
				if (!__LIB_5__::func_463())
				{
					if (PED::IS_PED_ON_MOUNT(Local_65[0 /*75*/]))
					{
						__LIB_10__::func_364(&(cParam0->f_2106), "LSHRC_RHESCAPE", 0);
					}
					__LIB_18__::func_228(64);
				}
			}
			if (__LIB_8__::func_332(64) && !__LIB_8__::func_332(128))
			{
				if ((!__LIB_8__::func_684("LSHRC_RHESCAPE") && !__LIB_8__::func_684("LSHRC_IG2_ENT")) && !__LIB_8__::func_684("LSHRC_DECY_FLEE"))
				{
					__LIB_10__::func_364(&(cParam0->f_2106), "LSHRC_STOP_HAND", 0);
					__LIB_18__::func_228(128);
				}
			}
			if (bVar6 == 0 && PED::_IS_PED_LASSOED(Local_65[0 /*75*/]))
			{
				if ((__LIB_8__::func_684("LSHRC_RHESCAPE") || __LIB_8__::func_684("LSHRC_CHASE_ELY")) || __LIB_8__::func_684("LSHRC_CHASE_LTE"))
				{
					__LIB_3__::func_732(0);
				}
			}
			if (!__LIB_0__::func_272(Local_65[0 /*75*/], 0))
			{
				if (!__LIB_8__::func_332(1048576))
				{
					if (!MAP::DOES_BLIP_EXIST(Local_65[0 /*75*/].f_1))
					{
						__LIB_10__::func_259(&(Local_65[0 /*75*/].f_1), Local_65[0 /*75*/], joaat("BLIP_STYLE_COMPANION"), 0);
						MAP::_BLIP_SET_MODIFIER(Local_65[0 /*75*/].f_1, -546708623);
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_65[0 /*75*/].f_1, "BLIP_CHICK");
					}
				}
				else
				{
					__LIB_0__::func_325(&(Local_65[0 /*75*/].f_1));
				}
				if (!__LIB_8__::func_332(4096))
				{
					__LIB_10__::func_588(cParam0, "OBJ_SEARCH_HSC", 0f, 0f, 0f);
					__LIB_18__::func_228(4096);
				}
			}
			switch (iLocal_22)
			{
				case 0:
					if (__LIB_0__::func_272(Local_65[0 /*75*/], 0) && __LIB_0__::func_272(Local_65[2 /*75*/], 0))
					{
						if (__LIB_0__::func_163(Local_65[0 /*75*/], 242628503) || TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_65[0 /*75*/], sLocal_623))
						{
							func_358();
							func_359();
						}
						else if (!__LIB_10__::func_282(65536))
						{
							PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_65[0 /*75*/], 2.5f);
							PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_65[2 /*75*/], 2.5f);
							if (PED::IS_PED_ON_MOUNT(Local_65[0 /*75*/]))
							{
								PED::_0x2208438012482A1A(Local_65[0 /*75*/], false, false);
								PED::_0x2208438012482A1A(Local_65[2 /*75*/], false, false);
								TASK::TASK_SMART_FLEE_PED(Local_65[0 /*75*/], Global_35, 1000f, -1, 8448, 2.5f, 0);
							}
							func_329(65536);
						}
					}
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_65[0 /*75*/], sLocal_623))
					{
						switch (iLocal_57)
						{
							case 0:
								iVar7 = TASK::GET_PED_WAYPOINT_PROGRESS(Local_65[0 /*75*/]);
								if (iVar7 > 32 && __LIB_1__::func_348(Global_35, Local_65[0 /*75*/]) < 40f)
								{
									iLocal_57 = 1;
								}
								break;
							case 1:
								if (__LIB_8__::func_684("LSHRC_STOP_HAND"))
								{
									__LIB_1__::func_283(&uLocal_61, 1);
								}
								if ((!__LIB_0__::func_75(&uLocal_61) || __LIB_1__::func_285(&uLocal_61, 4f)) && !__LIB_5__::func_463())
								{
									if (iLocal_58 < 4)
									{
										__LIB_10__::func_364(&(cParam0->f_2106), "LSHRC_CHASE", 0);
										iLocal_58++;
										__LIB_1__::func_148(&uLocal_61);
										__LIB_1__::func_283(&uLocal_61, 0);
										iLocal_57 = 2;
									}
								}
								break;
							case 2:
								if (__LIB_1__::func_285(&uLocal_61, 3f) && !__LIB_5__::func_463())
								{
									iLocal_57 = 3;
								}
								break;
							case 3:
								if (!__LIB_5__::func_463())
								{
									iVar7 = TASK::GET_PED_WAYPOINT_PROGRESS(Local_65[0 /*75*/]);
									if (iVar7 < 300)
									{
										if (iLocal_59 < 3)
										{
											__LIB_10__::func_364(&(cParam0->f_2106), "LSHRC_CHASE_ELY", 0);
											iLocal_59++;
										}
									}
									else if (iLocal_60 < 3)
									{
										__LIB_10__::func_364(&(cParam0->f_2106), "LSHRC_CHASE_LTE", 0);
										iLocal_60++;
									}
									__LIB_1__::func_148(&uLocal_61);
									__LIB_1__::func_283(&uLocal_61, 0);
									iLocal_57 = 4;
								}
								break;
							case 4:
								if (__LIB_1__::func_285(&uLocal_61, 8f))
								{
									__LIB_0__::func_37(&uLocal_61);
									iLocal_57 = 0;
								}
								break;
						}
					}
					if (__LIB_0__::func_163(Local_65[0 /*75*/], 518218985))
					{
						PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_65[0 /*75*/], 1.75f);
						PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_65[2 /*75*/], 1.75f);
					}
					if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_65[0 /*75*/]) >= 11)
					{
						PED::SET_PED_CAN_BE_TARGETTED(Local_65[0 /*75*/], true);
					}
					if (!PED::IS_PED_ON_MOUNT(Local_65[0 /*75*/]) && __LIB_0__::func_272(Local_65[2 /*75*/], 0))
					{
						if (!__LIB_0__::func_163(Local_65[2 /*75*/], 518218985))
						{
							TASK::TASK_SMART_FLEE_PED(Local_65[2 /*75*/], Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
						}
					}
					if (!PED::IS_PED_ON_MOUNT(Local_65[0 /*75*/]))
					{
						if (!__LIB_8__::func_332(2097152))
						{
							TASK::CLEAR_PED_TASKS(Local_65[0 /*75*/], true, false);
							__LIB_18__::func_228(2097152);
						}
					}
					if (!PED::IS_PED_ON_MOUNT(Local_65[0 /*75*/]))
					{
						__LIB_3__::func_353("LSHSC_OFF_HORSE", 0);
						func_361(&(Local_65[0 /*75*/].f_1), Local_65[0 /*75*/], 0);
						PED::SET_PED_CAN_BE_TARGETTED(Local_65[0 /*75*/], true);
						iLocal_22 = 1;
					}
					break;
				case 1:
					if (__LIB_0__::func_272(Local_65[0 /*75*/], 0))
					{
						if (!__LIB_8__::func_332(131072))
						{
							func_362(12, 4, sLocal_619, 64);
							if (((((((((!PED::IS_PED_ON_MOUNT(Local_65[0 /*75*/]) && !PED::_IS_PED_LASSOED(Local_65[0 /*75*/])) && !PED::_IS_PED_HOGTIED(Local_65[0 /*75*/])) && !PED::IS_PED_RAGDOLL(Local_65[0 /*75*/])) && !TASK::IS_PED_GETTING_UP(Local_65[0 /*75*/])) && !__LIB_3__::func_996(Global_35)) && !__LIB_4__::func_214(Global_35)) && !PED::_0x3BDFCF25B58B0415(Global_35)) && !PED::_0x3BDFCF25B58B0415(Local_65[0 /*75*/])) && !__LIB_5__::func_463())
							{
								if (!__LIB_0__::func_75(&uLocal_559) || __LIB_0__::func_264(&uLocal_559) > 10f)
								{
									if (fLocal_635 < 5f && !PED::IS_PED_ON_MOUNT(Global_35))
									{
										if (!__LIB_8__::func_332(16777216))
										{
											__LIB_3__::func_353("LSHSC_END", 0);
											__LIB_18__::func_228(16777216);
										}
										iLocal_23 = 0;
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
										TASK::TASK_LOOK_AT_ENTITY(Local_65[0 /*75*/], Global_35, -1, 0, 51, 0);
										__LIB_18__::func_228(131072);
									}
									else if (__LIB_0__::func_272(Local_65[0 /*75*/], 0))
									{
										if (!__LIB_0__::func_163(Local_65[0 /*75*/], 518218985))
										{
											TASK::TASK_SMART_FLEE_PED(Local_65[0 /*75*/], Global_35, 1000f, -1, 0, 1.5f, 0);
										}
									}
								}
							}
						}
						else if (func_365(4, cParam0, &(Local_65[0 /*75*/])))
						{
							if (__LIB_0__::func_272(Local_65[0 /*75*/], 0))
							{
								if (!__LIB_0__::func_163(Local_65[0 /*75*/], 518218985))
								{
									TASK::TASK_SMART_FLEE_PED(Local_65[0 /*75*/], Global_35, 1000f, -1, 0, 2f, 0);
								}
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
						}
					}
					break;
			}
			break;
		case 8:
			if (!__LIB_8__::func_332(32768))
			{
				__LIB_10__::func_378(*cParam0, func_41(1), func_41(2), 1, 2);
				__LIB_18__::func_228(32768);
			}
			if (__LIB_0__::func_895(Global_1392626[7 /*32*/].f_3) == 1)
			{
				UIFEED::_0xDD1232B332CBB9E7(1, 1, 0);
				__LIB_0__::func_769();
				__LIB_1__::func_390("OBJ_VIEW_MAP_HSC", 1);
				__LIB_18__::func_241(9);
			}
			if (__LIB_0__::func_255(Local_65[0 /*75*/], 0))
			{
				if (!__LIB_10__::func_282(8) && !__LIB_8__::func_684("LSHRC_KILL_HAND"))
				{
					__LIB_3__::func_732(0);
					__LIB_10__::func_364(&(cParam0->f_2106), "LSHRC_DEAD", 0);
					func_329(8);
					func_329(262144);
				}
			}
			break;
		case 9:
			__LIB_1__::func_283(&uLocal_571, 0);
			if (!__LIB_10__::func_282(128) && __LIB_1__::func_285(&uLocal_571, 2f))
			{
				__LIB_10__::func_588(cParam0, "OBJ_GO_DEBT_HSC2", vLocal_647);
				__LIB_10__::func_570(&iLocal_651, vLocal_647, 408396114, 0, 0, 0);
				func_329(128);
			}
			if (__LIB_10__::func_282(128) && !__LIB_10__::func_282(32768))
			{
				if (!TASK::_0xEC7E480FF8BD0BED(Global_35))
				{
					__LIB_1__::func_422("OBJ_GO_DEBT_HSC2", 7500, 0, 1, 0, 0, -1, -1, 0);
					func_329(32768);
				}
			}
			if (__LIB_0__::func_94(Global_35, vLocal_647, 1) < 30f)
			{
				__LIB_10__::func_588(cParam0, "OBJ_LOCATE_DEBT_HSC2", vLocal_647);
				__LIB_0__::func_325(&iLocal_651);
				__LIB_10__::func_570(&iLocal_651, vLocal_647, -308585968, 0, 1, 30f);
				__LIB_18__::func_241(10);
			}
			break;
		case 10:
			if (!__LIB_10__::func_282(256))
			{
				if (!__LIB_10__::func_598())
				{
					__LIB_0__::func_45("HELP_DEBT_HSC2", 10000, 0, 0, 0, 1);
					func_329(256);
				}
			}
			func_372();
			if (iLocal_64 > 0)
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_369[7 /*16*/], "CASH", &Var8, true, "pbl_Action", 2))
				{
					func_177(&iLocal_650, joaat("P_CS_BILLSTACK01X"), Var8, Var8.f_3, 1);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_650))
			{
				if (__LIB_0__::func_266(Global_35, vLocal_647, 15f, 1, 1) && (ENTITY::_0x0C9DBF48C6BA6E4C(Global_35, vLocal_647, 17) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_597, true, 0)))
				{
					iLocal_29 = 0;
					iLocal_30 = 0;
					iLocal_64 = 0;
					__LIB_0__::func_325(&iLocal_651);
					iLocal_651 = MAP::_BLIP_ADD_FOR_COORD(408396114, vLocal_647);
					UIFEED::_0xDD1232B332CBB9E7(1, 1, 0);
					__LIB_18__::func_241(11);
				}
			}
			break;
		case 11:
			func_372();
			if (!__LIB_10__::func_282(512))
			{
				__LIB_10__::func_588(cParam0, "OBJ_TREE_DEBT_HSC2", vLocal_647);
				func_329(512);
			}
			else
			{
				func_373(cParam0, "OBJ_TREE_DEBT_HSC2", 0f, 0f, 0f, 5, 5f);
			}
			if (!__LIB_10__::func_282(1024))
			{
				if (__LIB_0__::func_139(iLocal_652))
				{
					__LIB_4__::func_12(iLocal_652, joaat("DEBT_CXT2_HSC"), 0, 1);
					HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_650, 2.5f, 1, 1, joaat("DEBT_CXT2_HSC"), "DEBT_CXT2_HSC", 0);
					if (__LIB_1__::func_732(iLocal_652, 1))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_650, false);
						__LIB_1__::func_281(&iLocal_652, 1, 1);
						func_329(1024);
						iLocal_64 = 2;
					}
				}
				else
				{
					iLocal_652 = __LIB_1__::func_282("DEBT_CXT1_HSC", joaat("INPUT_CONTEXT_Y"), ENTITY::GET_ENTITY_COORDS(iLocal_650, true, false), 2.5f, 3, 1, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
				}
			}
			if (__LIB_1__::func_707(joaat("MONEY_LOANSHARK_HORSE_CHASE_DEBT"), 1, 0))
			{
				__LIB_18__::func_241(12);
			}
			break;
		case 12:
			return 9;
	}
	return 8;
}

void func_87(int iParam0, bool bParam1, bool bParam2)
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
	func_383(Global_1392626[iParam0 /*32*/].f_3, bParam2, bParam1, 0, 1);
	if (Global_1392626[iParam0 /*32*/].f_7 != -1)
	{
		__LIB_10__::func_376(Global_1392626[iParam0 /*32*/].f_7);
	}
}

bool func_108(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	func_409(uParam0);
	PLAYER::_0xBBADFB5E5E5766FB(PLAYER::GET_PLAYER_INDEX(), 1f);
	iVar1 = __LIB_10__::func_266(uParam0);
	if (((iVar1 == 0 || iVar1 == 1) || iVar1 == 5) || iVar1 == 4)
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, true, 0, false))
			{
				if (!WEAPON::_0x5809DBCA0A37C82B(uVar0))
				{
					if (!__LIB_0__::func_163(Local_65[2 /*75*/], 518218985))
					{
						TASK::TASK_SMART_FLEE_PED(Local_65[2 /*75*/], Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
					}
					if (!__LIB_0__::func_163(Local_65[3 /*75*/], 518218985))
					{
						TASK::TASK_SMART_FLEE_PED(Local_65[3 /*75*/], Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
					}
				}
			}
		}
		__LIB_0__::func_325(&(Local_65[0 /*75*/].f_1));
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if ((Local_65[iVar2 /*75*/] != Local_65[3 /*75*/] && Local_65[iVar2 /*75*/] != Local_65[0 /*75*/]) && Local_65[iVar2 /*75*/] != Local_65[2 /*75*/])
			{
				if (!__LIB_10__::func_283(Local_65[iVar2 /*75*/], -1082130432 /* Float: -1f */, 1116471296 /* Float: 70f */))
				{
					return false;
				}
				__LIB_0__::func_325(&(Local_65[iVar2 /*75*/].f_1));
			}
			iVar2++;
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_65[3 /*75*/]));
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_65[0 /*75*/]));
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_65[2 /*75*/]));
		if (!__LIB_10__::func_598())
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
	return true;
}

void func_110(char[4] cParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_2__::func_788(&(Local_65[iVar0 /*75*/]), 1, 0, 1);
		__LIB_0__::func_325(&(Local_65[iVar0 /*75*/].f_1));
		if (ENTITY::DOES_ENTITY_EXIST(Local_65[iVar0 /*75*/]))
		{
			__LIB_3__::func_552(Local_65[iVar0 /*75*/]);
			TASK::CLEAR_PED_TASKS(Local_65[iVar0 /*75*/], true, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		__LIB_1__::func_281(&(uLocal_18[iVar0]), 1, 1);
		iVar0++;
	}
	__LIB_0__::func_8(&(Global_1392626[7 /*32*/].f_8), 256);
	__LIB_0__::func_769();
	__LIB_0__::func_484(&uLocal_599, iLocal_594, 0);
	__LIB_0__::func_172(iLocal_592);
	__LIB_0__::func_172(iLocal_593);
	__LIB_0__::func_172(iLocal_594);
	__LIB_0__::func_172(iLocal_596);
	__LIB_0__::func_172(iLocal_597);
	iVar0 = 0 + 1;
	while (iVar0 <= (10 - 1))
	{
		__LIB_10__::func_284(&(uLocal_602[iVar0]));
		iVar0++;
	}
	func_339(0);
	func_339(1);
	func_339(2);
	func_339(3);
	func_339(4);
	__LIB_4__::func_193(873);
	__LIB_4__::func_193(874);
	PLAYER::_0xBBADFB5E5E5766FB(PLAYER::GET_PLAYER_INDEX(), 1f);
	if (iLocal_23 >= 10)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_650))
	{
		OBJECT::DELETE_OBJECT(&iLocal_650);
	}
	__LIB_0__::func_325(&iLocal_651);
	if (__LIB_0__::func_139(iLocal_652))
	{
		__LIB_1__::func_281(&iLocal_652, 1, 1);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CS_BILLSTACK01X"));
	func_339(7);
	AUDIO::SET_AUDIO_FLAG("ForceUrgentPlayerHorseSpurs", false);
}

void func_112(char[4] cParam0)
{
	if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 1024))
	{
		__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 1024);
		if (__LIB_0__::func_272(Global_1392626[*cParam0 /*32*/].f_11, 0))
		{
			__LIB_2__::func_624(&(cParam0->f_2237), 0, 0, 1, 0);
			__LIB_2__::func_344(&(Global_1392626[*cParam0 /*32*/].f_11));
		}
	}
}

void func_133(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = VEHICLE::_0x635423D55CA84FC8(iParam1);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		__LIB_10__::func_497(&(uParam0->f_2041), VEHICLE::_0x8DF5F6A19F99F0D5(iParam1, iVar0));
		iVar0++;
	}
}

bool func_141(var uParam0)
{
	if (__LIB_10__::func_532() == 13)
	{
		__LIB_0__::func_325(&(Local_65[1 /*75*/].f_1));
		MISC::_0xE98D55C5983F2509(Local_65[0 /*75*/]);
		MISC::_0xE98D55C5983F2509(Local_65[1 /*75*/]);
		PED::SET_PED_CONFIG_FLAG(Local_65[1 /*75*/], 315, true);
		PED::SET_PED_CONFIG_FLAG(Local_65[0 /*75*/], 315, true);
		if (!__LIB_0__::func_163(Local_65[0 /*75*/], 518218985))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(Local_65[0 /*75*/], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
		if (!__LIB_0__::func_163(Local_65[1 /*75*/], 518218985))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(Local_65[1 /*75*/], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
		if (!__LIB_0__::func_163(Local_65[2 /*75*/], 518218985))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(Local_65[2 /*75*/], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
		if (!__LIB_0__::func_163(Local_65[3 /*75*/], 518218985))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(Local_65[3 /*75*/], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
		func_436();
		func_437();
		return true;
	}
	if (__LIB_0__::func_665(Global_35, Local_65[0 /*75*/], 1, 1) >= 250f)
	{
		if (!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_LS_HORSECHASE"), 1, 0))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_65[0 /*75*/]) || !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, Local_65[0 /*75*/], 17))
			{
				return true;
			}
		}
	}
	return false;
}

void func_150(char[4] cParam0)
{
	__LIB_18__::func_246(&uLocal_498);
	__LIB_10__::func_285(cParam0, 4);
	func_475();
}

int func_158(vector3 vParam0, var uParam3)
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
		iVar0 = func_484(0, 0);
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

bool func_159(char[4] cParam0)
{
	if (iLocal_14 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_65[0 /*75*/]) && FIRE::IS_ENTITY_ON_FIRE(Local_65[0 /*75*/]))
		{
			__LIB_10__::func_531(cParam0, "FAIL_BURN_DBT");
			return true;
		}
	}
	if (cParam0->f_1 == 8)
	{
		if (iLocal_14 == 7)
		{
			if (fLocal_635 >= 150f && __LIB_0__::func_272(Local_65[0 /*75*/], 0))
			{
				__LIB_10__::func_531(cParam0, "FAIL_ESCAPED");
				return true;
			}
		}
	}
	return false;
}

bool func_174(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		iVar1 = iVar0;
		if (!ENTITY::DOES_ENTITY_EXIST(Local_65[iVar1 /*75*/]))
		{
			switch (iVar1)
			{
				case 0:
					iVar2 = iLocal_366;
					break;
				case 1:
					iVar2 = iLocal_366;
					break;
				case 2:
					iVar2 = iLocal_367;
					break;
				case 3:
					iVar2 = iLocal_368;
					break;
			}
			Local_65[iVar1 /*75*/] = __LIB_1__::func_545(iVar2, Local_65[iVar1 /*75*/].f_2, Local_65[iVar1 /*75*/].f_5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_65[iVar1 /*75*/], true);
			PED::SET_PED_CONFIG_FLAG(Local_65[iVar1 /*75*/], 186, false);
			PED::SET_PED_CONFIG_FLAG(Local_65[iVar1 /*75*/], 230, true);
			PED::SET_PED_CONFIG_FLAG(Local_65[iVar1 /*75*/], 146, true);
			if (iVar1 == 1)
			{
				PED::_0xEEED8FAFEC331A70(Local_65[iVar1 /*75*/], 1108.619f, 503.5174f, 94.6871f, 3);
				PED::_SET_PED_BODY_COMPONENT(Local_65[iVar1 /*75*/], 960056836);
				PED::_UPDATE_PED_VARIATION(Local_65[iVar1 /*75*/], false, true, true, true, false);
			}
			if (iVar1 == 0)
			{
				PED::_0x3088634CF8C819CF(Local_65[iVar1 /*75*/]);
				PED::_SET_PED_BODY_COMPONENT(Local_65[iVar1 /*75*/], 42186812);
				PED::_UPDATE_PED_VARIATION(Local_65[iVar1 /*75*/], false, true, true, true, false);
			}
			if (iVar1 == 2)
			{
				PED::_0x2EB75FB86C41F026(Local_65[2 /*75*/], 3, 1);
				PED::_0x06D26A96CA1BCA75(Local_65[2 /*75*/], 3, 0f, 0);
				PED::SET_PED_CONFIG_FLAG(Local_65[2 /*75*/], 136, true);
				AITRANSPORT::_0xBA8818212633500A(Local_65[2 /*75*/], 0, 1);
				__LIB_10__::func_290(Local_65[2 /*75*/], 1);
			}
			if (iVar1 != 2 && iVar1 != 3)
			{
				PED::SET_PED_CONFIG_FLAG(Local_65[iVar1 /*75*/], 297, true);
				PED::SET_PED_CONFIG_FLAG(Local_65[iVar1 /*75*/], 130, true);
				MISC::_0x870708A6E147A9AD(Local_65[iVar1 /*75*/], "", 8f, 0, 0, 0, 0, 0, 0, -1);
				PED::SET_PED_CAN_BE_TARGETTED(Local_65[iVar1 /*75*/], true);
			}
			else
			{
				PED::SET_PED_CAN_BE_TARGETTED(Local_65[iVar1 /*75*/], false);
			}
			if (bParam3)
			{
				return false;
			}
		}
		else if (bParam3)
		{
			if (iVar1 == iParam2)
			{
				return true;
			}
		}
		iVar0++;
	}
	return true;
}

void func_176(bool bParam0)
{
	if (!__LIB_0__::func_163(Local_65[1 /*75*/], -1098463898))
	{
		__LIB_2__::func_915(Local_65[1 /*75*/], joaat("PROP_HUMAN_SEAT_BENCH"), 1106.123f, 506.718f, 94.9074f, 200.52f, -1, !bParam0, bParam0, 0, -1082130432 /* Float: -1f */);
	}
}

bool func_177(int iParam0, int iParam1, vector3 vParam2, vector3 vParam5, bool bParam8)
{
	STREAMING::REQUEST_MODEL(iParam1, false);
	if (STREAMING::HAS_MODEL_LOADED(iParam1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			*iParam0 = OBJECT::CREATE_OBJECT(iParam1, vParam2, true, true, false, false, true);
			if (!__LIB_0__::func_138(vParam5, 0f, 0f, 0f))
			{
				ENTITY::SET_ENTITY_ROTATION(*iParam0, vParam5, 2, true);
			}
			if (bParam8)
			{
				ENTITY::FREEZE_ENTITY_POSITION(*iParam0, true);
			}
			return false;
		}
	}
	else
	{
		return false;
	}
	return true;
}

bool func_193(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_10__::func_278(uParam0, 32768))
	{
		return true;
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		uParam0->f_1662 = __LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_1663 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_1665 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_1663)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_1664 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_1664 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_1665)
		{
			uParam0->f_1667 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_1668 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		__LIB_10__::func_406(uParam0);
	}
	if (__LIB_0__::func_78(uParam0) < 10)
	{
		if (__LIB_0__::func_78(uParam0) == 3)
		{
			func_542(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_10__::func_278(uParam0, 524288))
				{
					__LIB_18__::func_229(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_10__::func_291(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_18__::func_232(uParam0, iParam5);
					return true;
				}
			}
			if (!__LIB_10__::func_278(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 16))
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
			if (uParam0->f_1450 >= 0)
			{
				if (!__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_1454 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (__LIB_10__::func_292(uParam0, uParam0->f_1450))
				{
					if (__LIB_4__::func_576(uParam0) < 7 && uParam0->f_1454 >= 0)
					{
						__LIB_10__::func_436(uParam0, uParam0->f_782[uParam0->f_1454 /*41*/].f_27, uParam0->f_1111[uParam0->f_1454 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_1454 >= 0)
				{
					__LIB_10__::func_436(uParam0, uParam0->f_782[uParam0->f_1454 /*41*/].f_27, uParam0->f_1111[uParam0->f_1454 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				__LIB_10__::func_582(uParam0);
			}
		}
	}
	bVar0 = __LIB_10__::func_473(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!__LIB_10__::func_278(uParam0, 268435456) && bVar1) && !__LIB_10__::func_278(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_1668);
			if (uParam0->f_1450 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_782[uParam0->f_1450 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_1668)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				__LIB_10__::func_293(uParam0, 131072);
				__LIB_10__::func_293(uParam0, 268435456);
			}
		}
		if (__LIB_10__::func_280(uParam0, 64) || (uParam0->f_1450 >= 0 && !__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || __LIB_0__::func_81(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) == 3 || __LIB_10__::func_278(uParam0, 131072))
	{
		__LIB_10__::func_386(uParam0);
		if (!__LIB_10__::func_278(uParam0, 262144))
		{
			if ((bVar0 && __LIB_10__::func_278(uParam0, 65536)) || __LIB_10__::func_278(uParam0, 131072))
			{
				__LIB_10__::func_293(uParam0, 32768);
				__LIB_10__::func_291(uParam0, 4);
				__LIB_0__::func_115(uParam0, 10);
				uParam0->f_1535 = 1;
				__LIB_18__::func_232(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_18__::func_234(uParam0, iParam5);
		__LIB_10__::func_294(uParam0);
		if (!__LIB_10__::func_295(uParam0, 1))
		{
			__LIB_10__::func_350(uParam0);
		}
		__LIB_10__::func_296(uParam0);
	}
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_10__::func_540(uParam0, Param1, iParam5);
			break;
		case 1:
			__LIB_10__::func_480(uParam0);
			break;
		case 2:
			__LIB_10__::func_541(uParam0);
			break;
		case 3:
			if (__LIB_10__::func_277(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_10__::func_436(uParam0, uParam0->f_782[uParam0->f_1450 /*41*/].f_27, uParam0->f_1111[uParam0->f_1450 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_1__::func_148(&(uParam0->f_1638));
				__LIB_10__::func_291(uParam0, 1);
				__LIB_4__::func_582();
				__LIB_0__::func_115(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!__LIB_10__::func_278(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (__LIB_0__::func_78(uParam0) == 5)
			{
				if (__LIB_10__::func_297(uParam0))
				{
					__LIB_10__::func_291(uParam0, 2);
					__LIB_0__::func_115(uParam0, 6);
				}
			}
			if (__LIB_0__::func_78(uParam0) == 6)
			{
				if (__LIB_10__::func_298(uParam0))
				{
					__LIB_10__::func_291(uParam0, 3);
					__LIB_0__::func_115(uParam0, 8);
				}
			}
			if (uParam0->f_1451 >= 0 || __LIB_0__::func_264(&(uParam0->f_1638)) >= 15f)
			{
				if (__LIB_10__::func_467(uParam0, iParam5))
				{
					if (__LIB_10__::func_299(uParam0))
					{
						uParam0->f_1451 = __LIB_10__::func_351(uParam0);
						__LIB_1__::func_148(&(uParam0->f_1638));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						__LIB_10__::func_291(uParam0, 6);
						__LIB_0__::func_115(uParam0, 9);
					}
					else
					{
						__LIB_10__::func_291(uParam0, 4);
						__LIB_0__::func_115(uParam0, 10);
						__LIB_18__::func_232(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_10__::func_467(uParam0, iParam5))
			{
				__LIB_18__::func_232(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

int func_196(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		if (__LIB_9__::func_905(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_15__::func_483(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_196(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_15__::func_92(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_15__::func_93(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_6__::func_698(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						__LIB_2__::func_624(uParam3, 0, 0, 1, 1);
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
					__LIB_11__::func_791(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_15__::func_93(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_15__::func_92(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						__LIB_2__::func_624(uParam3, 0, 0, 1, 1);
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
			__LIB_6__::func_699(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

bool func_199(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (__LIB_10__::func_532() == 2 || __LIB_10__::func_532() == 6)
	{
		if ((((((((((__LIB_10__::func_532() == 6 && __LIB_8__::func_332(4)) && bLocal_631 == 0) && bLocal_630 == 0) || PED::IS_PED_SHOOTING(Global_35)) || !__LIB_0__::func_272(Local_65[0 /*75*/], 2)) || !__LIB_0__::func_272(Local_65[1 /*75*/], 2)) || PED::_IS_PED_LASSOED(Local_65[0 /*75*/])) || PED::_IS_PED_LASSOED(Local_65[1 /*75*/])) || func_586()) || bLocal_633)
		{
			__LIB_4__::func_490(Local_65[0 /*75*/]);
			__LIB_0__::func_769();
			__LIB_1__::func_390("OBJ_LS_HSC", 1);
			MAP::_BLIP_SET_MODIFIER(Global_1392626[7 /*32*/].f_1, -1186550032);
			__LIB_0__::func_7(&(Global_1392626[7 /*32*/].f_8), 256);
			__LIB_9__::func_903(&(Local_65[0 /*75*/].f_57[0 /*17*/]));
			__LIB_9__::func_903(&(Local_65[1 /*75*/].f_57[0 /*17*/]));
			__LIB_18__::func_241(13);
			return false;
		}
	}
	func_587(cParam0);
	func_409(cParam0);
	func_588(cParam0);
	if (__LIB_0__::func_266(Global_35, Global_1392626[*cParam0 /*32*/].f_27, Global_1392626[*cParam0 /*32*/].f_4, 1, 1))
	{
		if (!__LIB_0__::func_474(169))
		{
			__LIB_1__::func_240(169, 0);
		}
		else if (!__LIB_1__::func_262(169) && !__LIB_3__::func_829(169))
		{
			func_592();
		}
	}
	func_321(iLocal_55, fLocal_56);
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar4 = PED::GET_MOUNT(Global_35);
		if (!__LIB_0__::func_272(iLocal_614, 0))
		{
			iLocal_614 = iVar4;
		}
		else if (iLocal_614 != iVar4)
		{
			iLocal_614 = iVar4;
		}
	}
	if (__LIB_1__::func_205(Global_35, iLocal_595, 1, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 168, true);
	}
	if (!__LIB_8__::func_332(1073741824 /* Float: 2f */))
	{
		if (!__LIB_1__::func_588("OBJ_LS_HSC", 0, 0, -1, -1, 0))
		{
			__LIB_1__::func_324("OBJ_LS_HSC");
		}
		__LIB_18__::func_228(1073741824 /* Float: 2f */);
	}
	if (iLocal_628 == 0)
	{
		__LIB_1__::func_600(0);
		iLocal_628 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_355(&(Local_65[iVar0 /*75*/]), cParam0);
		iVar0++;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (__LIB_0__::func_272(Local_65[0 /*75*/], 0))
		{
			__LIB_1__::func_448(Global_35, ENTITY::GET_ENTITY_COORDS(Local_65[0 /*75*/], true, false), 0, 30f, 20f, 15f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
		}
		if (__LIB_0__::func_272(Local_65[1 /*75*/], 0))
		{
			__LIB_1__::func_448(Global_35, ENTITY::GET_ENTITY_COORDS(Local_65[1 /*75*/], true, false), 0, 30f, 20f, 15f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
		}
	}
	if (__LIB_8__::func_332(4))
	{
		if (__LIB_10__::func_532() != 6 && __LIB_10__::func_532() != 13)
		{
			func_334(4);
			__LIB_18__::func_241(6);
		}
	}
	switch (__LIB_10__::func_532())
	{
		case 0:
			if (__LIB_1__::func_205(Global_35, iLocal_592, 1, 0))
			{
				func_596(cParam0, &(cParam0->f_2237[0 /*17*/]), 0, 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 1090519040 /* Float: 8f */, 0);
			}
			if (func_597(&Local_65, 0, 2) && func_598(15f, 1))
			{
				__LIB_18__::func_241(1);
			}
			break;
		case 1:
			__LIB_3__::func_157(&(Local_65[0 /*75*/].f_57[0 /*17*/]), "OBJ_INVESTI", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_3__::func_157(&(Local_65[1 /*75*/].f_57[0 /*17*/]), "OBJ_INVESTI", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_18__::func_241(2);
			break;
		case 2:
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				iVar2 = iVar0;
				iVar3 = iVar0;
				if ((!Local_65[iVar2 /*75*/].f_6 && iVar2 != 3) && iVar2 != 2)
				{
					iVar1 = __LIB_0__::func_57(Local_65[iVar2 /*75*/]);
					if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, false, false))
					{
						if (Local_65[iVar2 /*75*/] == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1))
						{
							if (func_196(&(Local_65[iVar2 /*75*/]), &(Local_65[iVar2 /*75*/].f_36), 8f, &(Local_65[iVar2 /*75*/].f_57), 0, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */) == 0)
							{
								__LIB_1__::func_281(&(uLocal_18[iVar3]), 1, 1);
								Local_65[iVar2 /*75*/].f_6 = 1;
								PED::SET_PED_CONFIG_FLAG(Local_65[iVar2 /*75*/], 297, false);
								PED::SET_PED_CONFIG_FLAG(Local_65[iVar2 /*75*/], 130, false);
								MISC::_0xE98D55C5983F2509(Local_65[iVar2 /*75*/]);
							}
						}
					}
				}
				iVar0++;
			}
			if (Local_65[0 /*75*/].f_6 == 1)
			{
				if (!__LIB_8__::func_332(32))
				{
					if (!__LIB_5__::func_463())
					{
						if (iLocal_28 == 0)
						{
							iLocal_29 = 0;
							iLocal_30 = 0;
							iLocal_28 = 1;
						}
						__LIB_18__::func_241(4);
						__LIB_18__::func_228(32);
					}
					else
					{
						__LIB_3__::func_732(0);
					}
				}
			}
			if (Local_65[1 /*75*/].f_6 == 1)
			{
				if (!__LIB_8__::func_332(16))
				{
					if (!__LIB_5__::func_463())
					{
						PED::SET_PED_CONFIG_FLAG(Local_65[0 /*75*/], 297, false);
						MISC::_0xE98D55C5983F2509(Local_65[0 /*75*/]);
						PLAYER::_0xBBADFB5E5E5766FB(PLAYER::GET_PLAYER_INDEX(), 0.5f);
						__LIB_18__::func_241(5);
						__LIB_18__::func_228(16);
						cParam0->f_17 = 2;
						bLocal_632 = func_337();
						func_220(iLocal_598, 5f);
						return true;
					}
					else
					{
						__LIB_3__::func_732(0);
					}
				}
			}
			break;
		case 6:
			if (__LIB_8__::func_332(256))
			{
				__LIB_18__::func_241(7);
				iLocal_22 = 1;
				return true;
			}
			break;
		case 4:
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			}
			if (!__LIB_10__::func_282(4194304))
			{
				if (__LIB_8__::func_684("LSHRC_IG1"))
				{
					func_344(Local_65[0 /*75*/], 2f, 524288);
					func_329(4194304);
				}
			}
			else
			{
				if (!MAP::DOES_BLIP_EXIST(Local_65[1 /*75*/].f_1))
				{
					__LIB_10__::func_259(&(Local_65[1 /*75*/].f_1), Local_65[1 /*75*/], joaat("BLIP_STYLE_COMPANION"), 0);
					MAP::_BLIP_SET_MODIFIER(Local_65[1 /*75*/].f_1, -546708623);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_65[1 /*75*/].f_1, "BLIP_STRANGER");
				}
				__LIB_10__::func_588(cParam0, "OBJ_QUEST_HSC", ENTITY::GET_ENTITY_COORDS(Local_65[1 /*75*/], true, false));
				MAP::_BLIP_SET_MODIFIER(Global_1392626[7 /*32*/].f_1, -1186550032);
				__LIB_18__::func_241(2);
			}
			break;
		case 13:
			return false;
		case 12:
			if (!__LIB_8__::func_332(16384))
			{
				__LIB_18__::func_228(16384);
				return true;
			}
			break;
	}
	return false;
}

int func_202(char[4] cParam0)
{
	if (__LIB_8__::func_332(16384))
	{
		return 9;
	}
	return 8;
}

void func_219(var uParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;
	int iVar1;
	iVar1 = VEHICLE::_0x635423D55CA84FC8(1094934838);
	if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[0]))
	{
		(*uParam0)[0] = VEHICLE::_CREATE_MISSION_TRAIN(1094934838, vParam1, bParam4, false, true, true);
		VEHICLE::_0xCBF88256E44D5D39(uLocal_602[0], 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD((*uParam0)[0]))
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
				{
					(*uParam0)[iVar0] = VEHICLE::GET_TRAIN_CARRIAGE((*uParam0)[0], iVar0);
					if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
					{
						VEHICLE::_0xCBF88256E44D5D39(uLocal_602[iVar0], 0);
					}
				}
				iVar0++;
			}
		}
	}
}

void func_220(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	float fVar14;
	vector3 vVar15;
	bool bVar18;
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar1 = __LIB_14__::func_233(iParam0, &iVar0);
	if (iVar1 == -1)
	{
		ITEMSET::DESTROY_ITEMSET(iVar0);
		return;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = __LIB_14__::func_234(iVar3, iVar0);
		if (!__LIB_0__::func_272(iVar4, 0))
		{
		}
		else if (iVar4 == Local_65[2 /*75*/] || iVar4 == Local_65[3 /*75*/])
		{
		}
		else
		{
			vVar5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 1f, 0f, 0f) - Global_36 };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar4, true, false) };
			vVar11 = { vVar8 - Global_36 };
			vVar5.f_2 = 0f;
			vVar11.f_2 = 0f;
			vVar5 = { vVar5 / FtoV(BUILTIN::VMAG(vVar5)) };
			vVar11 = { vVar11 / FtoV(BUILTIN::VMAG(vVar11)) };
			fVar14 = __LIB_2__::func_977(vVar5, vVar11);
			fVar14 = (fVar14 / MISC::ABSF(fVar14));
			vVar15 = { vVar8 + Vector(fVar14, fVar14, fVar14) * vVar5 * Vector(fParam1, fParam1, fParam1) };
			bVar18 = PED::_0x268B3AEBF032A88D(iVar4);
			TASK::CLEAR_SEQUENCE_TASK(&iVar2);
			TASK::OPEN_SEQUENCE_TASK(&iVar2);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar15, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, bVar18);
			TASK::CLOSE_SEQUENCE_TASK(iVar2);
			TASK::TASK_PERFORM_SEQUENCE(iVar4, iVar2);
		}
		iVar3++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

int func_317(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4, char[4] cParam5)
{
	int iVar0;
	__LIB_10__::func_348(uParam4, &cParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		__LIB_18__::func_230(uParam4);
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
					__LIB_18__::func_250(uParam4, &cParam0);
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
				if (__LIB_18__::func_248(uParam4, &cParam0, 1, 1))
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
					__LIB_18__::func_250(uParam4, &cParam0);
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
			func_783(uParam4);
			if (__LIB_10__::func_302(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_221);
			}
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_228, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228) || __LIB_0__::func_84(uParam4, 512)))
			{
				if (!__LIB_0__::func_84(uParam4, 1024) && __LIB_10__::func_460(uParam4, 1))
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
				__LIB_18__::func_230(uParam4);
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
				__LIB_18__::func_233(uParam4);
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
				__LIB_18__::func_233(uParam4);
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

void func_321(int iParam0, float fParam1)
{
	if (!__LIB_14__::func_364())
	{
		return;
	}
	if (!__LIB_0__::func_272(iParam0, 0))
	{
		return;
	}
	if (fParam1 <= 0f)
	{
		return;
	}
	switch (iLocal_31)
	{
		case 0:
			StringCopy(&Local_32, "generic_hint_cam", 64);
			StringCopy(&(Local_32.f_8), "GENERIC_HINT_CAM", 64);
			Local_32.f_19 = iParam0;
			CAM::_0x6A4D224FC7643941(&Local_32);
			iLocal_31 = 1;
			break;
		case 1:
			if (CAM::_0xDD0B7C5AE58F721D(&Local_32))
			{
				iLocal_31 = 2;
			}
			break;
		case 2:
			__LIB_1__::func_283(&uLocal_52, 0);
			if (__LIB_1__::func_285(&uLocal_52, fParam1))
			{
				if (CAM::_0x927B810E43E99932(&Local_32))
				{
					CAM::_0x0A5A4F1979ABB40E(&Local_32);
				}
				__LIB_0__::func_37(&uLocal_52);
				iLocal_31 = 3;
			}
			else if (!CAM::_0x927B810E43E99932(&Local_32))
			{
				CAM::_0xB8B207C34285E978(&Local_32);
			}
			else
			{
				CAM::_0x7B0279170961A73F(&Local_32);
			}
			break;
		case 3:
			break;
	}
}

void func_329(int iParam0)
{
	if (!__LIB_10__::func_282(iParam0))
	{
		__LIB_1__::func_683(&iLocal_16, iParam0);
	}
}

void func_330(char[4] cParam0)
{
	if (__LIB_0__::func_272(Local_65[0 /*75*/], 0))
	{
		if (PED::_IS_PED_HOGTIED(Local_65[0 /*75*/]))
		{
			if (__LIB_0__::func_665(Global_35, Local_65[0 /*75*/], 1, 1) < 12f)
			{
				if (!__LIB_10__::func_282(16) && !__LIB_5__::func_463())
				{
					__LIB_2__::func_462(&uLocal_553, 5f, 0);
					func_329(16);
				}
				if (((__LIB_10__::func_282(16) && !__LIB_5__::func_463()) && !__LIB_4__::func_215(Global_35)) && __LIB_1__::func_285(&uLocal_553, 10f))
				{
					__LIB_10__::func_364(&(cParam0->f_2106), "LSHRC_HOGTIED", 0);
					__LIB_1__::func_148(&uLocal_553);
					__LIB_1__::func_283(&uLocal_553, 0);
				}
			}
		}
		else
		{
			if (!__LIB_0__::func_163(Local_65[0 /*75*/], 518218985))
			{
				TASK::TASK_SMART_FLEE_PED(Local_65[0 /*75*/], Global_35, 1000f, -1, 1, 2f, 0);
			}
			if (__LIB_0__::func_665(Global_35, Local_65[0 /*75*/], 1, 1) < 12f)
			{
				if (!__LIB_10__::func_282(32) && !__LIB_5__::func_463())
				{
					__LIB_2__::func_462(&uLocal_556, 7f, 0);
					func_329(32);
				}
				if ((((__LIB_10__::func_282(32) && !__LIB_5__::func_463()) && !__LIB_4__::func_215(Global_35)) && __LIB_0__::func_163(Local_65[0 /*75*/], 518218985)) && __LIB_1__::func_285(&uLocal_556, 8f))
				{
					__LIB_10__::func_364(&(cParam0->f_2106), "LSHRC_COWER", 0);
					__LIB_1__::func_148(&uLocal_556);
					__LIB_1__::func_283(&uLocal_556, 0);
				}
			}
		}
	}
}

void func_334(int iParam0)
{
	if (__LIB_8__::func_332(iParam0))
	{
		__LIB_1__::func_681(&iLocal_15, iParam0);
	}
}

int func_337()
{
	if (func_801(iLocal_596) > 0)
	{
		return 1;
	}
	return 0;
}

void func_338(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bVar2 = false;
	if (bVar2)
	{
	}
	switch (iLocal_25)
	{
		case 0:
			iVar0 = __LIB_3__::func_112(Local_65[1 /*75*/], Global_35, 1060437492 /* Float: 0.707f */);
			switch (iVar0)
			{
				case 0:
					iVar1 = 8;
					break;
				case 1:
					iVar1 = 9;
					break;
				case 2:
					iVar1 = 10;
					break;
				case 3:
					iVar1 = 11;
					break;
			}
			if (func_362(iVar1, 3, sLocal_618, 0))
			{
				func_803(3);
				iLocal_29 = 0;
				iLocal_30 = 0;
				iLocal_25 = 1;
			}
			break;
		case 1:
			if (func_804(Global_35, 0f, 0f, 0f) && func_805(Global_35, 1))
			{
				if (!__LIB_0__::func_163(Global_35, -875674219))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Local_65[1 /*75*/], 0, -1f, -1f, -1f);
				}
				iLocal_25 = 2;
			}
			break;
		case 2:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_369[3 /*16*/], true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_369[3 /*16*/], false))
				{
					if (!__LIB_0__::func_163(Global_35, 713668775))
					{
						iLocal_626 = 1;
						ANIMSCENE::START_ANIM_SCENE(Local_369[3 /*16*/]);
						TASK::TASK_LOOK_AT_ENTITY(Local_65[1 /*75*/], Global_35, 5000, 0, 51, 0);
						iLocal_25 = 3;
					}
				}
			}
			break;
		case 3:
			if (__LIB_3__::func_439(Local_369[3 /*16*/]))
			{
				func_339(3);
				func_176(0);
			}
			break;
	}
}

void func_339(int iParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_369[iParam0 /*16*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_369[iParam0 /*16*/]);
	}
}

bool func_340()
{
	switch (iLocal_26)
	{
		case 0:
			if (func_362(20, 5, sLocal_620, 0))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_369[1 /*16*/], "HorseBrush", iLocal_600);
				PED::SET_PED_CONFIG_FLAG(Local_65[2 /*75*/], 136, false);
				func_803(5);
				iLocal_26 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_369[5 /*16*/], true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_369[5 /*16*/], false))
				{
					ANIMSCENE::SET_ANIM_SCENE_RATE(Local_369[5 /*16*/], 1.5f);
					ANIMSCENE::START_ANIM_SCENE(Local_369[5 /*16*/]);
					iLocal_26 = 2;
				}
			}
			break;
		case 2:
			if (__LIB_3__::func_439(Local_369[5 /*16*/]))
			{
				func_339(5);
				return true;
			}
			break;
	}
	return false;
}

bool func_341()
{
	switch (iLocal_27)
	{
		case 0:
			if (func_362(21, 6, sLocal_621, 0))
			{
				func_803(6);
				iLocal_27 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_369[6 /*16*/], true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_369[6 /*16*/], false))
				{
					ANIMSCENE::START_ANIM_SCENE(Local_369[6 /*16*/]);
					iLocal_27 = 2;
				}
			}
			break;
		case 2:
			if (__LIB_3__::func_439(Local_369[6 /*16*/]))
			{
				func_339(6);
				return true;
			}
			break;
	}
	return false;
}

void func_344(int iParam0, float fParam1, int iParam2)
{
	if (!__LIB_10__::func_282(iParam2))
	{
		__LIB_1__::func_539();
		func_808();
		iLocal_55 = iParam0;
		fLocal_56 = fParam1;
		CAM::SET_GAMEPLAY_PED_HINT(iParam0, 0f, 0f, 0f, true, BUILTIN::FLOOR((fParam1 * 1000f)), 2000, 2000);
		__LIB_1__::func_283(&uLocal_52, 1);
		func_329(iParam2);
	}
}

void func_354()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	vector3 vVar11;
	if ((__LIB_0__::func_272(Local_65[0 /*75*/], 0) && __LIB_4__::func_215(Global_35)) && __LIB_5__::func_60(Global_35, 3) == Local_65[0 /*75*/])
	{
		if (!__LIB_10__::func_282(8192))
		{
			__LIB_0__::func_37(&uLocal_559);
			func_329(8192);
		}
	}
	if (__LIB_10__::func_282(8192) && !__LIB_10__::func_282(16384))
	{
		if (!__LIB_4__::func_215(Global_35))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
			vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
			vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_65[0 /*75*/], -1.5f, 0f, 0f) };
			vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_65[0 /*75*/], 1.5f, 0f, 0f) };
			fVar9 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, true);
			fVar10 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar6, true);
			if (fVar9 < fVar10)
			{
				vVar11 = { vVar3 };
			}
			else
			{
				vVar11 = { vVar6 };
			}
			WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_613);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_613);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar11, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_65[0 /*75*/], -1, -1f, -1f, -1f);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_613);
			TASK::TASK_PERFORM_SEQUENCE(Global_35, iLocal_613);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_613);
			func_329(16384);
		}
	}
}

void func_355(var uParam0, char[4] cParam1)
{
	if (func_813(uParam0))
	{
		if ((__LIB_0__::func_272(*uParam0, 0) && !PED::IS_PED_FLEEING(*uParam0)) && !__LIB_0__::func_163(*uParam0, 518218985))
		{
			PED::SET_PED_CAN_BE_TARGETTED(*uParam0, true);
			if (*uParam0 == Local_65[0 /*75*/])
			{
				__LIB_9__::func_903(&(Local_65[0 /*75*/].f_57[0 /*17*/]));
				if (__LIB_2__::func_401(*uParam0, 1, 1, 1, 0, 0))
				{
					bLocal_630 = true;
				}
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_369[1 /*16*/], false))
				{
					iLocal_24 = 7;
				}
				else
				{
					if (bLocal_630)
					{
						TASK::_TASK_INTIMIDATED_2(*uParam0, Global_35, 2, 0, 0, 0, 1, 0, 0);
					}
					else
					{
						func_815();
					}
					__LIB_18__::func_228(4);
				}
			}
			else if (*uParam0 == Local_65[1 /*75*/])
			{
				PED::_0xEEED8FAFEC331A70(*uParam0, 1108.619f, 503.5174f, 94.6871f, 3);
				if (__LIB_2__::func_401(*uParam0, 1, 1, 1, 0, 0))
				{
					TASK::_TASK_INTIMIDATED_2(*uParam0, Global_35, 2, 0, 0, 0, 1, 0, 0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(*uParam0, Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
				}
				__LIB_18__::func_228(4);
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(*uParam0, Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
				bLocal_633 = true;
			}
		}
	}
	if (__LIB_10__::func_532() != 13)
	{
		if (__LIB_0__::func_272(*uParam0, 0))
		{
			if (*uParam0 == Local_65[1 /*75*/])
			{
				if (__LIB_2__::func_401(*uParam0, 1, 1, 1, 0, 0))
				{
					bLocal_631 = true;
				}
				if (__LIB_0__::func_163(*uParam0, joaat("SCRIPT_TASK_INTIMIDATED")))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_INTIMIDATED"), true) == 1)
					{
						if (!__LIB_0__::func_27(iLocal_17, 2))
						{
							__LIB_9__::func_903(&(Local_65[1 /*75*/].f_57[0 /*17*/]));
							if (bLocal_631)
							{
								func_437();
								__LIB_10__::func_364(&(cParam1->f_2106), "LSHRC_DECY_FLEE", 0);
							}
							if (!MAP::DOES_BLIP_EXIST(Local_65[0 /*75*/].f_1))
							{
								__LIB_10__::func_259(&(Local_65[0 /*75*/].f_1), Local_65[0 /*75*/], joaat("BLIP_STYLE_COMPANION"), 0);
								MAP::_BLIP_SET_MODIFIER(Local_65[0 /*75*/].f_1, -546708623);
								MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_65[0 /*75*/].f_1, "BLIP_CHICK");
							}
							if (!__LIB_0__::func_163(Local_65[0 /*75*/], 518218985))
							{
								func_815();
								__LIB_18__::func_228(256);
								func_339(1);
							}
							__LIB_1__::func_683(&iLocal_17, 2);
						}
					}
				}
			}
		}
	}
}

void func_358()
{
	fLocal_636 = (fLocal_641 / fLocal_635);
	fLocal_637 = (4f * fLocal_636);
	if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_65[0 /*75*/]) <= 20)
	{
		fLocal_637 = 2.5f;
	}
	if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_65[0 /*75*/]) <= 141)
	{
		fLocal_641 = 30f;
	}
	else if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_65[0 /*75*/]) >= 313)
	{
		fLocal_641 = 6f;
	}
	else if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_65[0 /*75*/]) >= 303)
	{
		fLocal_641 = 10f;
	}
	else if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_65[0 /*75*/]) > 239)
	{
		fLocal_641 = 18f;
	}
	else if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_65[0 /*75*/]) >= 142)
	{
		fLocal_641 = 25f;
	}
	if (fLocal_637 < 1.501f)
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_65[0 /*75*/], 1.501f, 0, -1082130432 /* Float: -1f */, 0);
	}
	else if (fLocal_637 > 3f)
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_65[0 /*75*/], 3f, 0, -1082130432 /* Float: -1f */, 0);
	}
	else
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_65[0 /*75*/], fLocal_637, 0, -1082130432 /* Float: -1f */, 0);
	}
}

void func_359()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	if (!bLocal_627)
	{
		fLocal_638 = __LIB_0__::func_94(uLocal_602[0], 1174.338f, 793.8918f, 102.6291f, 1);
		fVar0 = __LIB_0__::func_94(Global_35, 1152.352f, 770.4551f, 95.8763f, 1);
		if (fLocal_639 != 0f && fLocal_639 < 8f)
		{
			if (fVar0 > fLocal_639)
			{
				fVar0 = fLocal_639;
			}
		}
		fLocal_639 = fVar0;
		fVar1 = ((fLocal_638 + 25f) / fLocal_639);
		fVar2 = (7f * fVar1);
		fVar3 = (fLocal_640 - fVar2);
		if (fVar3 > 0.05f)
		{
			fVar2 = (fLocal_640 - 0.05f);
		}
		fLocal_640 = fVar2;
	}
	else
	{
		__LIB_1__::func_283(&uLocal_574, 0);
		if (!__LIB_1__::func_285(&uLocal_574, 10f))
		{
			fVar4 = (__LIB_0__::func_265(&uLocal_574) / 10f);
			fLocal_640 = __LIB_0__::func_667(fLocal_642, 8f, fVar4);
		}
	}
	if (fLocal_640 < 8f)
	{
		fLocal_640 = 8f;
	}
	if (fLocal_640 >= 20f)
	{
		fLocal_640 = 20f;
	}
	if (bLocal_627 == 0 && fLocal_638 <= 1.5f)
	{
		bLocal_627 = true;
		fLocal_642 = fLocal_640;
	}
	VEHICLE::SET_TRAIN_SPEED(uLocal_602[0], fLocal_640);
	VEHICLE::SET_TRAIN_CRUISE_SPEED(uLocal_602[0], fLocal_640);
}

void func_361(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = 408396114;
	if (bParam2)
	{
		iVar0 = joaat("BLIP_STYLE_COMPANION");
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		__LIB_0__::func_325(&(Local_65[iVar1 /*75*/].f_1));
		iVar1++;
	}
	if (!MAP::DOES_BLIP_EXIST(*uParam0) && __LIB_0__::func_272(iParam1, 0))
	{
		__LIB_10__::func_259(uParam0, iParam1, iVar0, 0);
		if (iParam1 == Local_65[1 /*75*/])
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_65[0 /*75*/].f_1, "BLIP_STRANGER");
		}
		else
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_65[0 /*75*/].f_1, "BLIP_CHICK");
		}
	}
}

bool func_362(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	if (Local_369[iParam1 /*16*/].f_2 == 0)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_369[iParam1 /*16*/]))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_369[iParam1 /*16*/], true, false))
			{
				Local_369[iParam1 /*16*/].f_2 = 1;
			}
		}
		else
		{
			Local_369[iParam1 /*16*/].f_1 = sParam2;
			Local_369[iParam1 /*16*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_369[iParam1 /*16*/].f_1, iParam3, func_818(iParam0), false, true);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_369[iParam1 /*16*/]))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_369[iParam1 /*16*/]);
			}
		}
	}
	return Local_369[iParam1 /*16*/].f_2;
}

bool func_365(int iParam0, char[4] cParam1, var uParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	int iVar10;
	fVar9 = ENTITY::GET_ENTITY_HEADING(*uParam2);
	if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_622))
	{
		vVar0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_622, "money_handover_t02_arthur", ENTITY::GET_ENTITY_COORDS(*uParam2, true, false), ENTITY::GET_ENTITY_ROTATION(*uParam2, 2), 0f, 2) };
	}
	switch (iLocal_23)
	{
		case 0:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_369[iParam0 /*16*/], false))
			{
				func_339(iParam0);
				Local_369[iParam0 /*16*/].f_2 = 0;
			}
			else if (func_362(12, iParam0, sLocal_619, 0))
			{
				func_803(iParam0);
				__LIB_1__::func_281(&(uLocal_18[0]), 1, 1);
				__LIB_1__::func_281(&(uLocal_18[1]), 1, 1);
				MISC::_0xE98D55C5983F2509(*uParam2);
				PED::SET_PED_CONFIG_FLAG(*uParam2, 297, false);
				PED::SET_PED_CONFIG_FLAG(*uParam2, 130, false);
				MISC::_0xE98D55C5983F2509(*uParam2);
				WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_613);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_613);
				TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
				if (__LIB_0__::func_665(Global_35, *uParam2, 1, 1) > 3f)
				{
					TASK::TASK_GO_TO_ENTITY(0, *uParam2, -1, 3f, 1f, 2f, 0);
				}
				TASK::CLOSE_SEQUENCE_TASK(iLocal_613);
				TASK::TASK_PERFORM_SEQUENCE(Global_35, iLocal_613);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_613);
				TASK::CLEAR_PED_TASKS(*uParam2, true, false);
				iLocal_634 = ENTITY::GET_ENTITY_HEALTH(Local_65[0 /*75*/]);
				iVar10 = ENTITY::GET_ENTITY_MAX_HEALTH(Local_65[0 /*75*/], false);
				ENTITY::_SET_ENTITY_HEALTH(Local_65[0 /*75*/], iVar10, 0);
				iLocal_23 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_369[iParam0 /*16*/], true, false))
			{
				if ((!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_369[iParam0 /*16*/], false) && !PED::IS_PED_RAGDOLL(*uParam2)) && !TASK::IS_PED_GETTING_UP(*uParam2))
				{
					if (PED::IS_PED_FACING_PED(*uParam2, Global_35, 10f))
					{
						vVar3 = { ENTITY::GET_ENTITY_COORDS(*uParam2, true, false) };
						MISC::GET_GROUND_Z_FOR_3D_COORD(vVar3, &(vVar6.f_2), false);
						vVar3.f_2 = vVar6.z;
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_369[iParam0 /*16*/], vVar3, 0f, 0f, fVar9, 2);
						TASK::CLEAR_PED_TASKS(*uParam2, true, false);
						TASK::CLEAR_PED_SECONDARY_TASK(*uParam2);
						PED::SET_PED_CONFIG_FLAG(*uParam2, 297, false);
						PED::SET_PED_CONFIG_FLAG(*uParam2, 130, false);
						MISC::_0xE98D55C5983F2509(*uParam2);
						WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_613);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_613);
						TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 1f, 20000, 0.15f, 512, 40000f);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, *uParam2, 0, -1f, -1f, -1f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_613);
						TASK::TASK_PERFORM_SEQUENCE(Global_35, iLocal_613);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_613);
						__LIB_3__::func_732(0);
						__LIB_10__::func_364(&(cParam1->f_2106), "LSHRC_IG3_HAND", 0);
						ANIMSCENE::START_ANIM_SCENE(Local_369[iParam0 /*16*/]);
						iLocal_23 = 3;
					}
					else if (!__LIB_0__::func_163(Local_65[0 /*75*/], 242628503) && (!__LIB_0__::func_75(&uLocal_589) || __LIB_1__::func_285(&uLocal_589, 0.5f)))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_613);
						TASK::TASK_STAND_STILL(0, 100);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_613);
						TASK::TASK_PERFORM_SEQUENCE(*uParam2, iLocal_613);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_613);
						__LIB_1__::func_148(&uLocal_589);
					}
				}
			}
			break;
		case 3:
			func_819(4, 13);
			func_819(4, 19);
			__LIB_1__::func_148(&uLocal_538);
			__LIB_1__::func_283(&uLocal_538, 0);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_369[iParam0 /*16*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_369[iParam0 /*16*/], false))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(Local_369[iParam0 /*16*/], "s_idle", 1))
				{
					iLocal_23 = 4;
				}
			}
			break;
		case 4:
			func_819(4, 19);
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_369[iParam0 /*16*/], func_818(19)))
			{
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_369[iParam0 /*16*/], "ARTHUR", func_818(19), 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
				iLocal_23 = 5;
			}
			break;
		case 5:
			__LIB_18__::func_228(8388608);
			func_819(4, 19);
			func_819(4, 14);
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_369[iParam0 /*16*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_369[iParam0 /*16*/], false)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_369[iParam0 /*16*/]) > 0.288f)
			{
				if (ANIMSCENE::_0x337F1CC8EE895601(Local_369[iParam0 /*16*/], "ARTHUR"))
				{
					iLocal_23 = 10;
				}
			}
			if (fLocal_635 > 10f)
			{
				iLocal_23 = 6;
			}
			break;
		case 6:
			if (func_820(iParam0, 14))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_369[iParam0 /*16*/], false))
				{
					if (!__LIB_0__::func_163(Local_65[0 /*75*/], 518218985))
					{
						TASK::TASK_CLEAR_LOOK_AT(Local_65[0 /*75*/]);
						TASK::TASK_SMART_FLEE_PED(Local_65[0 /*75*/], Global_35, 1000f, -1, 0, 1.5f, 0);
						func_334(131072);
					}
				}
			}
			break;
		case 10:
			if (!__LIB_0__::func_163(Global_35, 242628503))
			{
				if (func_820(iParam0, 19))
				{
					iLocal_23 = 2;
				}
			}
			break;
		case 2:
			if (__LIB_3__::func_439(Local_369[iParam0 /*16*/]))
			{
				func_339(iParam0);
				__LIB_1__::func_951(&iLocal_601);
				__LIB_1__::func_283(&uLocal_577, 0);
				return true;
			}
			else if (ANIMSCENE::_0x1F0E401031E20146(Local_369[iParam0 /*16*/], "pl_Action_02") && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_369[iParam0 /*16*/]) > 0.652f)
			{
				if (!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_LS_HORSECHASE"), 1, 0))
				{
					func_74(joaat("DOCUMENT_TREASURE_MAP_LS_HORSECHASE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					__LIB_3__::func_459(Local_65[0 /*75*/], 0);
				}
			}
			break;
	}
	return false;
}

void func_372()
{
	switch (iLocal_64)
	{
		case 0:
			if (func_362(22, 7, sLocal_646, 0))
			{
				func_803(7);
				iLocal_64 = 1;
			}
			break;
		case 2:
			if (func_804(Global_35, 0f, 0f, 0f) && func_805(Global_35, 1))
			{
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_369[7 /*16*/], "player", "pbl_Action", 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
				iLocal_64 = 3;
			}
			break;
		case 3:
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_369[7 /*16*/], false) && ANIMSCENE::_0x337F1CC8EE895601(Local_369[7 /*16*/], "player"))
			{
				ANIMSCENE::START_ANIM_SCENE(Local_369[7 /*16*/]);
				iLocal_64 = 4;
			}
			break;
		case 4:
			if (__LIB_3__::func_439(Local_369[7 /*16*/]))
			{
				func_339(7);
				func_74(joaat("MONEY_LOANSHARK_HORSE_CHASE_DEBT"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iLocal_650) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_369[7 /*16*/]) > 0.898f)
			{
				OBJECT::DELETE_OBJECT(&iLocal_650);
			}
			break;
	}
}

int func_373(char[4] cParam0, char* sParam1, vector3 vParam2, int iParam5, float fParam6)
{
	float fVar0;
	if (__LIB_1__::func_325())
	{
		if (__LIB_0__::func_75(&(cParam0->f_2067)))
		{
			__LIB_0__::func_37(&(cParam0->f_2067));
		}
		return 0;
	}
	if (!__LIB_0__::func_86(vParam2))
	{
		cParam0->f_2073 = { vParam2 };
	}
	if (__LIB_0__::func_75(&(cParam0->f_2067)))
	{
		if (__LIB_0__::func_265(&(cParam0->f_2067)) >= IntToFloat(iParam5))
		{
			fVar0 = (cParam0->f_2076 - fParam6);
			if (fVar0 <= 0f)
			{
				fVar0 = (cParam0->f_2076 + fParam6);
			}
			if (fVar0 <= MISC::GET_DISTANCE_BETWEEN_COORDS(cParam0->f_2073, Global_36, true))
			{
				__LIB_1__::func_422(sParam1, 7500, 0, 1, 0, 0, -1, -1, 0);
				return 1;
			}
			else
			{
				__LIB_1__::func_148(&(cParam0->f_2067));
			}
		}
	}
	return 0;
}

void func_383(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
						func_74(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_74(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_74(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_74(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_74(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_74(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_74(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_74(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_74(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_74(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_74(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_74(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_74(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_74(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_74(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_74(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_74(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_74(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_74(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_74(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_74(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_74(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_74(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_74(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_74(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_857();
						func_858(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_74(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_383(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_383(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_383(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_74(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_74(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_891();
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
							func_74(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

void func_409(char[4] cParam0)
{
	int iVar0;
	switch (iLocal_24)
	{
		case 0:
			if (func_362(1, 1, sLocal_616, 0))
			{
				func_803(1);
				iLocal_24 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_369[1 /*16*/], true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_369[1 /*16*/], false))
				{
					ANIMSCENE::START_ANIM_SCENE(Local_369[1 /*16*/]);
					iLocal_24 = 2;
				}
			}
			break;
		case 2:
			func_819(1, 2);
			func_819(1, 3);
			func_819(1, 4);
			func_819(1, 5);
			func_819(1, 6);
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_369[1 /*16*/]) > 0.98f)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
				switch (iVar0)
				{
					case 1:
						iLocal_24 = 3;
						break;
					case 2:
						iLocal_24 = 4;
						break;
					case 3:
						iLocal_24 = 5;
						break;
				}
			}
			break;
		case 3:
			func_820(1, 2);
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_369[1 /*16*/], "s_base", 1))
			{
				iLocal_24 = 2;
			}
			break;
		case 4:
			func_820(1, 3);
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_369[1 /*16*/], "s_base", 1))
			{
				iLocal_24 = 2;
			}
			break;
		case 5:
			func_820(1, 4);
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_369[1 /*16*/], "s_base", 1))
			{
				iLocal_24 = 2;
			}
			break;
		case 6:
			func_820(1, 5);
			TASK::TASK_LOOK_AT_ENTITY(Local_65[0 /*75*/], Global_35, 5000, 0, 51, 0);
			iLocal_24 = 2;
			break;
		case 7:
			func_820(1, 6);
			func_437();
			iLocal_24 = 8;
			break;
		case 8:
			if (ANIMSCENE::_0x1F0E401031E20146(Local_369[1 /*16*/], "pl_BreakOut"))
			{
				func_437();
				if (__LIB_10__::func_532() != 13)
				{
					__LIB_10__::func_364(&(cParam0->f_2106), "LSHRC_HAND_FLEE", 0);
				}
				iLocal_24 = 9;
			}
			break;
		case 9:
			if (__LIB_3__::func_439(Local_369[1 /*16*/]))
			{
				if (bLocal_630 == 0)
				{
					if (!__LIB_0__::func_163(Local_65[0 /*75*/], 518218985))
					{
						func_815();
					}
					if (!__LIB_0__::func_163(Local_65[2 /*75*/], 518218985))
					{
						TASK::TASK_SMART_FLEE_PED(Local_65[2 /*75*/], Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
					}
				}
				else if (__LIB_10__::func_532() != 13)
				{
					__LIB_1__::func_283(&uLocal_568, 1);
					TASK::_TASK_INTIMIDATED_2(Local_65[0 /*75*/], Global_35, 2, 0, 0, 0, 0, 0, 0);
				}
				func_339(1);
				__LIB_18__::func_228(4);
				iLocal_24 = 10;
			}
			break;
		case 10:
			if ((AUDIO::_0x1ECC76792F661CF5("LSHRC_HAND_FLEE") && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("LSHRC_HAND_FLEE") >= 1) || (__LIB_1__::func_285(&uLocal_568, 5f) && __LIB_10__::func_532() != 13))
			{
				if (!__LIB_0__::func_163(Local_65[0 /*75*/], 518218985))
				{
					if (!MAP::DOES_BLIP_EXIST(Local_65[0 /*75*/].f_1))
					{
						__LIB_10__::func_259(&(Local_65[0 /*75*/].f_1), Local_65[0 /*75*/], joaat("BLIP_STYLE_COMPANION"), 0);
						MAP::_BLIP_SET_MODIFIER(Local_65[0 /*75*/].f_1, -546708623);
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_65[0 /*75*/].f_1, "BLIP_CHICK");
					}
					func_815();
					__LIB_18__::func_228(256);
					iLocal_24 = 11;
				}
			}
			break;
	}
}

void func_436()
{
	if (__LIB_8__::func_684("LSHRC_HAND_FLEE"))
	{
		__LIB_8__::func_111("LSHRC_HAND_FLEE", 0);
	}
	if (__LIB_8__::func_684("LSHRC_DECY_FLEE"))
	{
		__LIB_8__::func_111("LSHRC_DECY_FLEE", 0);
	}
}

void func_437()
{
	if (__LIB_8__::func_684("LSHRC_PROX_HAND"))
	{
		__LIB_8__::func_111("LSHRC_PROX_HAND", 0);
	}
	if (__LIB_8__::func_684("LSHRC_PROX_DECY"))
	{
		__LIB_8__::func_111("LSHRC_PROX_DECY", 0);
	}
}

void func_475()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_0__::func_272(Local_65[iVar0 /*75*/], 1))
		{
			PED::SET_PED_KEEP_TASK(Local_65[iVar0 /*75*/], true);
		}
		iVar0++;
	}
}

int func_484(int iParam0, int iParam1)
{
	var uVar0;
	return func_965(&uVar0, iParam0, iParam1);
}

void func_542(var uParam0, int iParam1, bool bParam2)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (Global_1935630.f_12)
	{
		return;
	}
	if (!__LIB_10__::func_278(uParam0, 65536))
	{
		if (PED::IS_PED_FALLING(Global_35))
		{
			return;
		}
	}
	if (Global_1430231.f_4)
	{
		return;
	}
	if (!__LIB_10__::func_278(uParam0, 4096) && uParam0->f_1662)
	{
		return;
	}
	if (!__LIB_10__::func_278(uParam0, 16777216))
	{
		return;
	}
	if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	__LIB_10__::func_582(uParam0);
	__LIB_10__::func_469(uParam0, uParam0->f_1663, uParam0->f_1665);
	__LIB_10__::func_412(uParam0);
	if (uParam0->f_1666 && !uParam0->f_1665)
	{
		if (((((uParam0->f_1661 >= 0 && uParam0->f_782[uParam0->f_1661 /*41*/].f_17 > 0f) && uParam0->f_1454 >= 0) && !__LIB_0__::func_266(Global_35, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, (uParam0->f_782[uParam0->f_1661 /*41*/].f_17 + 5f), 1, 1)) && !__LIB_10__::func_278(uParam0, 33554432)) && !__LIB_10__::func_278(uParam0, 4))
		{
			__LIB_10__::func_484(uParam0, uParam0->f_1663);
			return;
		}
	}
	if (!__LIB_10__::func_278(uParam0, 4))
	{
		if (__LIB_10__::func_413(uParam0))
		{
			if (!bParam2)
			{
				uParam0->f_1450 = uParam0->f_1454;
				__LIB_10__::func_293(uParam0, 8);
				return;
			}
		}
		else
		{
			__LIB_10__::func_484(uParam0, uParam0->f_1663);
		}
		if (uParam0->f_782[uParam0->f_1456 /*41*/].f_29)
		{
			fVar0 = __LIB_10__::func_483(uParam0, uParam0->f_1456);
			if (fVar0 < 0f || (uParam0->f_1663 && fVar0 < 1f))
			{
				uParam0->f_1454 = uParam0->f_1456;
				if (!bParam2)
				{
					uParam0->f_1450 = uParam0->f_1456;
					__LIB_10__::func_293(uParam0, 8);
					return;
				}
			}
			else if (fVar0 > 0f && fVar0 < 10000f)
			{
				if ((uParam0->f_1455 == -1f || fVar0 <= uParam0->f_1455) || uParam0->f_1456 == uParam0->f_1454)
				{
					if (uParam0->f_1456 != uParam0->f_1454)
					{
					}
					uParam0->f_1454 = uParam0->f_1456;
					uParam0->f_1455 = fVar0;
					__LIB_10__::func_293(uParam0, 16);
					if (((!__LIB_10__::func_278(uParam0, 32) && iParam1 != 2) && !bParam2) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, true) < (uParam0->f_782[uParam0->f_1454 /*41*/].f_11 + 5f))
					{
						__LIB_10__::func_432(uParam0);
						__LIB_10__::func_293(uParam0, 32);
					}
				}
			}
			else if (uParam0->f_1454 == uParam0->f_1456)
			{
				__LIB_10__::func_279(uParam0, 16);
			}
		}
		if (uParam0->f_1456 + 1 >= 8)
		{
			uParam0->f_1456 = 0;
		}
		else
		{
			bVar1 = false;
			iVar2 = uParam0->f_1456 + 1;
			while (iVar2 <= 7)
			{
				if (uParam0->f_782[iVar2 /*41*/].f_29)
				{
					uParam0->f_1456 = iVar2;
					iVar2 = 7;
					bVar1 = true;
				}
				iVar2++;
			}
			if (!bVar1)
			{
				uParam0->f_1456 = 0;
			}
		}
		if (uParam0->f_1454 < 0)
		{
			return;
		}
		if (__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_1454 /*41*/]), 2) && uParam0->f_1663)
		{
			return;
		}
	}
	if (__LIB_10__::func_278(uParam0, 16))
	{
		fVar4 = __LIB_0__::func_94(Global_35, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, 1);
		if (uParam0->f_1663 && fVar4 <= (uParam0->f_782[uParam0->f_1454 /*41*/].f_17 + 5f))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		}
		fVar5 = __LIB_0__::func_152(Global_36, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, 1);
		fVar6 = 2f;
		if (MISC::ABSF((fVar5 - ENTITY::GET_ENTITY_HEADING(Global_35))) <= 90f)
		{
			fVar6 = 1f;
		}
		if (fVar4 <= uParam0->f_782[uParam0->f_1454 /*41*/].f_17 || VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1641, uParam0->f_1645))
		{
			iVar3 = 1;
			if (Global_36.f_2 >= uParam0->f_782[uParam0->f_1454 /*41*/].f_1.f_2 && Global_36.f_2 <= (uParam0->f_782[uParam0->f_1454 /*41*/].f_1.f_2 + uParam0->f_782[uParam0->f_1454 /*41*/].f_10))
			{
				__LIB_10__::func_436(uParam0, uParam0->f_782[uParam0->f_1454 /*41*/].f_27, uParam0->f_1111[uParam0->f_1454 /*22*/].f_1, fVar6);
			}
			if ((uParam0->f_1665 && VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1641, uParam0->f_1645)) && ENTITY::GET_ENTITY_SPEED(uParam0->f_1667) > 5f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1667) && !VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1667))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1667, 1f, 2000, false);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1667) && VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1667))
			{
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1667);
			}
		}
		else if ((uParam0->f_1663 && fVar4 <= (uParam0->f_782[uParam0->f_1454 /*41*/].f_17 + 5f)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_1664))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_1664, 1f);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		}
	}
	if (((uParam0->f_1663 && iVar3) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_1664) > 1.25f) || __LIB_10__::func_278(uParam0, 4))
	{
		if (((VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1641, uParam0->f_1645) && __LIB_10__::func_483(uParam0, uParam0->f_1454) < 10000f) && __LIB_10__::func_278(uParam0, 16)) || __LIB_10__::func_278(uParam0, 4))
		{
			if (!__LIB_10__::func_278(uParam0, 4))
			{
				__LIB_10__::func_293(uParam0, 4);
			}
			iVar7 = 5152;
			iVar7 |= 32;
			iVar7 |= 4096;
			iVar7 |= 1;
			if (!__LIB_10__::func_292(uParam0, uParam0->f_1454))
			{
				iVar7 |= 2048;
			}
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1452), iVar7, 0, 0, 1084227584 /* Float: 5f */, 100, uParam0->f_782[uParam0->f_1454 /*41*/].f_7, uParam0->f_782[uParam0->f_1454 /*41*/].f_7.f_1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				uParam0->f_1452 = 0;
				__LIB_10__::func_279(uParam0, 4);
			}
		}
	}
	else if (__LIB_10__::func_278(uParam0, 4))
	{
		__LIB_10__::func_279(uParam0, 4);
	}
}

bool func_586()
{
	if (PED::GET_MELEE_TARGET_FOR_PED(Global_35) == Local_65[0 /*75*/] || PED::GET_MELEE_TARGET_FOR_PED(Global_35) == Local_65[1 /*75*/])
	{
		if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 32768, 0))
		{
			return true;
		}
	}
	if (PED::IS_PED_IN_MELEE_COMBAT(Local_65[0 /*75*/]) || PED::IS_PED_IN_MELEE_COMBAT(Local_65[1 /*75*/]))
	{
		return true;
	}
	return false;
}

void func_587(char[4] cParam0)
{
	float fVar0;
	float fVar1;
	struct<23> Var2;
	struct<23> Var27;
	fVar0 = __LIB_0__::func_665(Local_65[0 /*75*/], Global_35, 1, 1);
	fVar1 = __LIB_0__::func_665(Local_65[1 /*75*/], Global_35, 1, 1);
	if (((fVar0 <= 7f && !Local_65[0 /*75*/].f_6) && !__LIB_8__::func_332(4)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, Local_65[0 /*75*/], 17))
	{
		if (!__LIB_0__::func_75(&uLocal_544))
		{
			__LIB_1__::func_283(&uLocal_544, 0);
		}
		if (__LIB_0__::func_265(&uLocal_544) >= 5f && iLocal_24 < 7)
		{
			if (!__LIB_5__::func_463())
			{
				if (!__LIB_8__::func_684("LSHRC_PROX_HAND"))
				{
					__LIB_10__::func_364(&(cParam0->f_2106), "LSHRC_PROX_HAND", 0);
					__LIB_18__::func_228(262144);
					__LIB_1__::func_148(&uLocal_544);
					__LIB_1__::func_283(&uLocal_544, 0);
				}
			}
			Var2.f_4 = -1;
			Var2.f_8 = 2;
			Var2.f_9 = 1;
			Var2.f_10 = 1;
			Var2.f_11 = 1;
			Var2.f_13 = 1;
			Var2.f_14 = 2;
			Var2.f_15 = 2;
			Var2.f_16 = 3;
			Var2.f_19 = 3;
			Var2.f_20 = 1;
			Var2.f_21 = 3;
			Var2.f_22 = 3;
			Var2.f_7 = 8000;
			Var2.f_9 = 1;
			Var2.f_10 = 1;
			Var2.f_11 = 1;
			Var2.f_12 = 0;
			Var2.f_8 = 4;
			Var2.f_17 = 0;
			Var2.f_18 = 0;
			Var2.f_19 = 4;
			Var2.f_20 = 4;
			Var2.f_21 = 4;
			Var2.f_22 = 4;
			Var2.f_3 = Global_35;
			Var2.f_4 = 21030;
			Var2.f_14 = 2;
			Var2.f_15 = 2;
			_NAMESPACE29::_0x66F9EB44342BB4C5(Local_65[0 /*75*/], &Var2);
		}
	}
	else if (__LIB_0__::func_75(&uLocal_544))
	{
		__LIB_0__::func_37(&uLocal_544);
	}
	if (((fVar1 <= 7f && !Local_65[1 /*75*/].f_6) && !__LIB_8__::func_332(4)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, Local_65[1 /*75*/], 17))
	{
		if (!__LIB_0__::func_75(&uLocal_541))
		{
			__LIB_1__::func_283(&uLocal_541, 0);
		}
		if (__LIB_0__::func_265(&uLocal_541) >= 5f)
		{
			if (!__LIB_8__::func_332(524288))
			{
				if (!__LIB_5__::func_463())
				{
					if (!__LIB_8__::func_684("LSHRC_PROX_DECY"))
					{
						__LIB_10__::func_364(&(cParam0->f_2106), "LSHRC_PROX_DECY", 0);
						__LIB_18__::func_228(524288);
					}
				}
			}
			Var27.f_4 = -1;
			Var27.f_8 = 2;
			Var27.f_9 = 1;
			Var27.f_10 = 1;
			Var27.f_11 = 1;
			Var27.f_13 = 1;
			Var27.f_14 = 2;
			Var27.f_15 = 2;
			Var27.f_16 = 3;
			Var27.f_19 = 3;
			Var27.f_20 = 1;
			Var27.f_21 = 3;
			Var27.f_22 = 3;
			Var27.f_7 = 8000;
			Var27.f_9 = 1;
			Var27.f_10 = 1;
			Var27.f_11 = 1;
			Var27.f_12 = 0;
			Var27.f_8 = 4;
			Var27.f_17 = 0;
			Var27.f_18 = 0;
			Var27.f_19 = 4;
			Var27.f_20 = 4;
			Var27.f_21 = 4;
			Var27.f_22 = 4;
			Var27.f_3 = Global_35;
			Var27.f_4 = 21030;
			Var27.f_14 = 2;
			Var27.f_15 = 2;
			_NAMESPACE29::_0x66F9EB44342BB4C5(Local_65[1 /*75*/], &Var27);
		}
	}
	else if (__LIB_0__::func_75(&uLocal_541))
	{
		__LIB_0__::func_37(&uLocal_541);
	}
}

void func_588(char[4] cParam0)
{
	switch (iLocal_28)
	{
		case 0:
			if (func_362(7, 2, sLocal_617, 0))
			{
				func_803(2);
			}
			break;
		case 1:
			if (func_804(Global_35, 0f, 0f, 0f) && func_805(Global_35, 1))
			{
				if (!__LIB_0__::func_163(Global_35, -875674219))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Local_65[0 /*75*/], 0, -1f, -1f, -1f);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 4992, false);
				iLocal_28 = 2;
				iLocal_24 = 6;
			}
			break;
		case 2:
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_369[2 /*16*/], false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_369[2 /*16*/], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0f, 0f, 0f, 2);
				ANIMSCENE::START_ANIM_SCENE(Local_369[2 /*16*/]);
			}
			else
			{
				iLocal_28 = 3;
			}
			break;
		case 3:
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_369[2 /*16*/]) >= 0.649f)
			{
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				}
				if (func_1081() > 0.5f)
				{
					func_339(2);
					iLocal_28 = 4;
				}
			}
			if (__LIB_3__::func_439(Local_369[2 /*16*/]))
			{
				func_339(2);
				iLocal_28 = 4;
			}
			break;
		case 4:
			break;
	}
}

void func_592()
{
	if (!__LIB_8__::func_332(2))
	{
		if (!__LIB_10__::func_598())
		{
			if (__LIB_0__::func_45("INVEST_HELP", 10000, 0, 0, 0, 1) != 0)
			{
				__LIB_18__::func_228(2);
			}
		}
	}
}

void func_596(char[4] cParam0, int* iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 1024))
	{
		__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_9), 1024);
		if (MISC::IS_STRING_NULL(sParam2))
		{
			sParam2 = "OBJ_INTERACT";
		}
		cParam0->f_2256 = iParam6;
		cParam0->f_2255 = iParam5;
		__LIB_3__::func_157(iParam1, sParam2, iParam3, iParam4, 0, 0, 0, 1, 0);
	}
}

int func_597(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		if (ENTITY::IS_ENTITY_DEAD((*iParam0)[iVar0 /*75*/]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_598(float fParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (iVar1 != 2)
		{
			if (__LIB_0__::func_48(Global_35, Local_65[iVar1 /*75*/], fParam0, bParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_783(var uParam0)
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
		func_1261(&(uParam0->f_284), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_10__::func_316(uParam0, 0f, 0f, 0f);
		func_1263(uParam0);
		func_1264(uParam0);
		__LIB_10__::func_455(uParam0, 0f, 0f, 0f, 0, 0);
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

int func_801(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar5 = ENTITY::_0x886171A12F400B89(iParam0, iVar0, 2);
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
		iVar2 = iVar1;
		if (ENTITY::DOES_ENTITY_EXIST(iVar2) && ENTITY::IS_ENTITY_A_VEHICLE(iVar2))
		{
			iVar3++;
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar3;
}

void func_803(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_369[iParam0 /*16*/], "Victim", Local_65[0 /*75*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_369[iParam0 /*16*/], "player", Global_35, 0);
			break;
		case 1:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_369[iParam0 /*16*/], "ChickMatthews", Local_65[0 /*75*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_369[iParam0 /*16*/], "Horse", Local_65[2 /*75*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_369[iParam0 /*16*/], "HorseBrush", iLocal_600, 0);
			break;
		case 3:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_369[iParam0 /*16*/], "Arthur", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_369[iParam0 /*16*/], "FarmHand", Local_65[1 /*75*/], 0);
			break;
		case 2:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_369[iParam0 /*16*/], "Arthur", Global_35, 0);
			break;
		case 4:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_369[iParam0 /*16*/], "Arthur", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_369[iParam0 /*16*/], "ChickMatthews", Local_65[0 /*75*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_369[iParam0 /*16*/], "MAP", iLocal_601, 0);
			break;
		case 5:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_369[iParam0 /*16*/], "ChickMatthews", Local_65[0 /*75*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_369[iParam0 /*16*/], "Horse", Local_65[2 /*75*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_369[iParam0 /*16*/], "HorseBrush", iLocal_600, 0);
			break;
		case 6:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_369[iParam0 /*16*/], "ChickMatthews", Local_65[0 /*75*/], 0);
			break;
		case 7:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_369[iParam0 /*16*/], "player", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_369[iParam0 /*16*/], "CASH", iLocal_650, 0);
			break;
	}
}

int func_804(int iParam0, vector3 vParam1)
{
	int iVar0;
	switch (iLocal_30)
	{
		case 0:
			iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iLocal_30 = 3;
			}
			else
			{
				if (__LIB_0__::func_138(vParam1, 0f, 0f, 0f))
				{
					vParam1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
				}
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(iParam0, iVar0, vParam1, 1f, 0);
				iLocal_30 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_163(iParam0, -208384378))
			{
				iLocal_30 = 2;
			}
			break;
		case 2:
			if (!__LIB_0__::func_163(iParam0, -208384378))
			{
				iLocal_30 = 3;
			}
			break;
		case 3:
			return 1;
	}
	return 0;
}

int func_805(int iParam0, bool bParam1)
{
	switch (iLocal_29)
	{
		case 0:
			if (__LIB_17__::func_572(iParam0))
			{
				iLocal_29 = 3;
			}
			else
			{
				WEAPON::_0x94A3C1B804D291EC(iParam0, 1, 0, 1, 0);
				__LIB_1__::func_283(&uLocal_580, 0);
				iLocal_29 = 1;
			}
			break;
		case 1:
			if (bParam1)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 4992, false);
			}
			iLocal_29 = 2;
			break;
		case 2:
			if (__LIB_1__::func_285(&uLocal_580, 1.5f))
			{
				iLocal_29 = 3;
				__LIB_0__::func_37(&uLocal_580);
			}
			break;
		case 3:
			return 1;
	}
	return 0;
}

void func_808()
{
	if (CAM::_0x927B810E43E99932(&Local_32))
	{
		CAM::_0x0A5A4F1979ABB40E(&Local_32);
	}
	__LIB_0__::func_37(&uLocal_52);
	iLocal_31 = 0;
}

bool func_813(var uParam0)
{
	PED::SET_PED_RESET_FLAG(*uParam0, 42, true);
	if (__LIB_10__::func_373(*uParam0, 0, &(uParam0->f_7), &(uParam0->f_35), 0, 0))
	{
		switch (uParam0->f_7.f_16)
		{
			case 8:
				break;
			case 2:
				if (PED::_IS_PED_LASSOED(*uParam0))
				{
				}
				else if (PED::_IS_PED_HOGTIED(*uParam0))
				{
				}
				break;
		}
		return true;
	}
	else if (__LIB_2__::func_839(*uParam0, &(uParam0->f_7), 0))
	{
		return true;
	}
	return false;
}

void func_815()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	float fVar6;
	__LIB_0__::func_325(&(Local_65[1 /*75*/].f_1));
	iVar0 = 0;
	iVar1 = 0;
	if (__LIB_0__::func_665(Global_35, Local_65[0 /*75*/], 1, 1) < 5f)
	{
		iVar1 = 1;
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(Local_65[2 /*75*/], 136, false);
		iVar0 = Local_65[2 /*75*/];
	}
	vVar2 = { 533.9511f, -213.9088f, 146.8907f };
	fVar5 = __LIB_0__::func_94(Global_35, vVar2, 1);
	fVar6 = __LIB_0__::func_94(Local_65[0 /*75*/], vVar2, 1);
	if (fVar6 < fVar5)
	{
		TASK::_TASK_FLEE_FROM_PED(Local_65[0 /*75*/], Global_35, vVar2, -1f, -1, iVar1 | 1024 | 65536, 3f, iVar0);
	}
	else
	{
		TASK::_TASK_SMART_FLEE_STYLE_PED(Local_65[0 /*75*/], Global_35, 3, iVar1, -1f, -1, iVar0);
	}
	__LIB_1__::func_283(&uLocal_559, 1);
	__LIB_9__::func_903(&(Local_65[0 /*75*/].f_57[0 /*17*/]));
	__LIB_9__::func_903(&(Local_65[1 /*75*/].f_57[0 /*17*/]));
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_600))
	{
		ENTITY::DETACH_ENTITY(iLocal_600, true, true);
	}
}

char* func_818(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "PL_PBL_TAKE_OFFER";
			break;
		case 1:
			sVar0 = "pl_Base";
			break;
		case 2:
			sVar0 = "pl_Idle_01";
			break;
		case 3:
			sVar0 = "pl_Idle_02";
			break;
		case 4:
			sVar0 = "pl_Idle_03";
			break;
		case 5:
			sVar0 = "pl_Action";
			break;
		case 6:
			sVar0 = "pl_BreakOut";
			break;
		case 7:
			sVar0 = "pl_Action";
			break;
		case 8:
			sVar0 = "pl_Action_Front";
			break;
		case 9:
			sVar0 = "pl_Action_Behind";
			break;
		case 10:
			sVar0 = "pl_Action_Left";
			break;
		case 11:
			sVar0 = "pl_Action_Right";
			break;
		case 12:
			sVar0 = "pl_Enter";
			break;
		case 13:
			sVar0 = "pl_Idle";
			break;
		case 14:
			sVar0 = "pl_Exit_01";
			break;
		case 15:
			sVar0 = "pl_Exit_02";
			break;
		case 16:
			sVar0 = "pl_Re-Enter_01";
			break;
		case 17:
			sVar0 = "pl_Re-Enter_02";
			break;
		case 18:
			sVar0 = "pl_Action_01";
			break;
		case 19:
			sVar0 = "pl_Action_02";
			break;
		case 20:
			sVar0 = "pl_Action";
			break;
		case 21:
			sVar0 = "pl_Action";
			break;
		case 22:
			sVar0 = "pbl_Action";
			break;
		default:
			break;
	}
	return sVar0;
}

void func_819(int iParam0, int iParam1)
{
	if ((func_1286(iParam0) && !ANIMSCENE::_0x0DF57F86FE71DBE5(Local_369[iParam0 /*16*/], func_818(iParam1))) && !ANIMSCENE::_0x23E33CB9F4A3F547(Local_369[iParam0 /*16*/], func_818(iParam1)))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_369[iParam0 /*16*/], func_818(iParam1));
	}
}

bool func_820(int iParam0, int iParam1)
{
	if (func_1286(iParam0) && !ANIMSCENE::_0x1F0E401031E20146(Local_369[iParam0 /*16*/], func_818(iParam1)))
	{
		if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_369[iParam0 /*16*/], func_818(iParam1)))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_369[iParam0 /*16*/], func_818(iParam1), true);
			return true;
		}
	}
	return false;
}

void func_857()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1326();
	func_1327();
	func_1328();
	func_1329();
	func_1330();
	__LIB_14__::func_412();
	__LIB_0__::func_376();
}

void func_858(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_62(iParam0, 1, 1, -142743235, 1);
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

void func_891()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1352(&uVar4, &iVar1, &iVar2, &iVar3)))
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

int func_965(var uParam0, int iParam1, int iParam2)
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
		return func_965(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

float func_1081()
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = 0f;
	if (PED::_0xF60165E1D2C5370B(Global_35, &fVar1, &fVar2))
	{
		fVar0 = (MISC::ABSF(fVar1) + MISC::ABSF(fVar2));
	}
	return fVar0;
}

void func_1261(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1591();
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

void func_1263(var uParam0)
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
			func_1598(iVar1, __LIB_10__::func_334(uParam0), __LIB_10__::func_335(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1598(iVar3, __LIB_10__::func_334(uParam0), __LIB_10__::func_335(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1264(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_10__::func_334(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_10__::func_334(uParam0) };
			func_1598(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

bool func_1286(int iParam0)
{
	return ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_369[iParam0 /*16*/], false);
}

void func_1326()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1630(0);
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
	func_1630(1);
}

void func_1327()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_74(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1328()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1633(0);
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
	func_1633(1);
}

void func_1329()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1633(0);
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
	func_1633(1);
}

void func_1330()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_74(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_74(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_62(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_62(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1352(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1649(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_74(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_1591()
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
	iVar0 = func_1770(6291456, 0);
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

void func_1598(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1598(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1598(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_1630(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_74(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_74(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_74(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1784(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_858(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_62(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1788(Var0);
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

void func_1633(bool bParam0)
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
		func_74(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_74(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_74(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_74(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_74(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_74(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_74(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_74(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_74(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_74(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_74(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_62(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_62(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_62(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_62(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_62(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_62(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_62(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_62(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_62(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_62(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_62(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1649(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1649(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1649(iVar63, -915411861, 1, 0, 0));
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

int func_1770(int iParam0, int iParam1)
{
	var uVar0;
	return func_1857(&uVar0, iParam0, iParam1);
}

void func_1784(int iParam0)
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
	func_62(iParam0, 1, 1, -142743235, 1);
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
		func_62(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_1788(struct<6> Param0)
{
	if (!func_1877(Param0.f_4, 1))
	{
	}
	if (!func_1877(Param0, 1))
	{
	}
	if (!func_1877(Param0.f_2, 1))
	{
	}
	if (!func_1877(Param0.f_5, 1))
	{
	}
	if (!func_1877(Param0.f_3, 1))
	{
	}
	if (!func_1877(Param0.f_1, 1))
	{
	}
}

int func_1857(var uParam0, int iParam1, int iParam2)
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
		return func_1857(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_1877(int iParam0, int iParam1)
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
				if (func_1877(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_1877(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_1877(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_1877(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

