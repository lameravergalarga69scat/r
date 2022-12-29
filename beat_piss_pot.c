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
	vector3 vLocal_14 = { 0f, 0f, 0f };
	vector3 vLocal_17 = { 0f, 0f, 0f };
	vector3 vLocal_20 = { 0f, 0f, 0f };
	vector3 vLocal_23 = { 0f, 0f, 0f };
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	bool bLocal_32 = false;
	bool bLocal_33 = false;
	bool bLocal_34 = false;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37[3] = { 0, 0, 0 };
	var uLocal_41 = 3;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	vector3 vLocal_45[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_55[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_65 = { 0f, 0f, 0f };
	vector3 vLocal_68 = { 0f, 0f, 0f };
	struct<12> Local_71[1];
	struct<193> Local_84 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 1176256512;
	struct<32> Local_281[3];
	struct<6> Local_378 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	struct<21> Local_386[2];
	struct<52> Local_429[2];
	int iLocal_534 = 0;
	int iLocal_535 = 0;
	var uLocal_536[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_543 = 0;
	int iLocal_544 = 0;
	int iLocal_545 = 0;
	int iLocal_546 = 0;
	int iLocal_547 = 0;
	var uLocal_548 = 15;
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
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
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
	var uLocal_644 = 0;
	var uLocal_645 = 0;
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
	var uLocal_666 = 0;
	var uLocal_667 = 0;
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
	int iLocal_685 = 0;
	int iLocal_686 = 0;
	int iLocal_687 = 0;
	var uLocal_688 = 0;
	bool bLocal_689 = false;
	char[] cLocal_690[8] = 0;
	float fLocal_691 = 0f;
	float fLocal_692 = 0f;
	float fLocal_693 = 0f;
	int iLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	int iLocal_699 = 0;
	int iLocal_700 = 0;
	vector3 vLocal_701 = { 0f, 0f, 0f };
	var uLocal_704 = 0;
	int iLocal_705 = 0;
	var uLocal_706 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	vLocal_14 = { 5f, 5f, 15f };
	vLocal_17 = { 5f, 5f, 15f };
	iLocal_534 = -1;
	iLocal_535 = -1;
	cLocal_690 = "RE_PP";
	vLocal_701 = { 0.35f, 0.35f, 2.5f };
	Local_84.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_689 = true;
	}
	if (!bLocal_689)
	{
		Local_84.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
		Local_84.f_3 = __LIB_0__::func_81(&vScriptParam_0);
		Local_84.f_43 = __LIB_0__::func_12();
		uLocal_543 = uLocal_543;
		__LIB_3__::func_368(&Local_84, 1);
		func_5();
		__LIB_2__::func_433(&(Local_84.f_5));
		__LIB_2__::func_104(&(Local_84.f_5), 1);
		__LIB_2__::func_105(&(Local_84.f_5), 1);
		__LIB_2__::func_110(&(Local_84.f_5), 1);
		__LIB_2__::func_111(&(Local_84.f_5), 1);
		__LIB_2__::func_182(&(Local_84.f_5), 1);
		__LIB_2__::func_662(&(Local_84.f_5), 0);
		__LIB_2__::func_715(&(Local_84.f_5), 1);
		__LIB_3__::func_230(&(Local_84.f_5), 1);
		__LIB_2__::func_51(&(Local_84.f_5), 1);
		__LIB_2__::func_180(&(Local_84.f_5), 1);
		Local_84.f_176 = 1;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_689, 1306, 0);
		if (bLocal_689)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_546)
			{
				case 0:
					if (func_19())
					{
						iLocal_546 = 1;
					}
					break;
				case 1:
					if (__LIB_3__::func_454(&Local_84, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						__LIB_4__::func_219(&Local_84, &uLocal_706, &uLocal_704);
						func_22(&Local_84, &uLocal_706, &uLocal_704);
						func_23();
						func_24();
						func_25();
						if (VOLUME::_DOES_VOLUME_EXIST(iLocal_26))
						{
							__LIB_4__::func_220(iLocal_26, 10);
							__LIB_3__::func_729(iLocal_26, 0, 0);
							uLocal_698 = __LIB_1__::func_391(iLocal_26, 0, 0, 0);
						}
						if (VOLUME::_DOES_VOLUME_EXIST(Local_84.f_173))
						{
							__LIB_1__::func_572(Local_84.f_51, 4f, 0, 1, 1, 1, 0);
						}
						iLocal_546 = 3;
					}
					else if (Local_84.f_160)
					{
						func_17();
					}
					break;
				case 3:
					if (func_30())
					{
						if (func_31())
						{
							func_32();
							__LIB_10__::func_244(&uLocal_695, &uLocal_697, Local_84.f_51, 0f, 0f, 0f, vLocal_14, 1, 0, 1, 0, 0);
							iLocal_546 = 4;
						}
					}
					break;
				case 4:
					func_34();
					if (!__LIB_3__::func_617(&Local_84, &uLocal_37, iLocal_35, !__LIB_0__::func_27(iLocal_686, 1024), 1, 0, 1, 0))
					{
						func_17();
					}
					if (!Local_84.f_46)
					{
						func_37();
						if ((Local_84.f_46 || func_38()) || func_39())
						{
							Local_84.f_46 = 1;
							if (iLocal_685 != 16384)
							{
								iLocal_545 = 2;
							}
							else
							{
								__LIB_2__::func_461(0);
								iLocal_545 = 5;
							}
						}
					}
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_378) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_378, false))
					{
						fLocal_691 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_378);
						fLocal_691 = fLocal_691;
					}
					if (func_41())
					{
						Local_84.f_50 = 1;
						func_17();
					}
					if (__LIB_2__::func_774(30))
					{
						if (__LIB_3__::func_431(&Local_84, &uLocal_37, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0))
						{
							func_17();
						}
					}
					else if (__LIB_3__::func_431(&Local_84, &uLocal_37, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						func_17();
					}
					break;
			}
			BUILTIN::WAIT(Local_84.f_158);
		}
	}
}

void func_5()
{
	iLocal_36 = __LIB_3__::func_390(Local_84.f_3, 3, 0);
	if (__LIB_2__::func_774(30))
	{
		iLocal_36 = 1;
	}
	iLocal_35 = iLocal_36;
}

void func_17()
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_699))
	{
		VOLUME::_DELETE_VOLUME(iLocal_699);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_700))
	{
		VOLUME::_DELETE_VOLUME(iLocal_700);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_26))
	{
		VOLUME::_DELETE_VOLUME(iLocal_26);
	}
	if (__LIB_0__::func_30(iLocal_27))
	{
		__LIB_3__::func_123(iLocal_27, 1);
	}
	if (__LIB_0__::func_30(iLocal_28))
	{
		__LIB_3__::func_123(iLocal_28, 1);
	}
	if (__LIB_2__::func_1(uLocal_37[0], 0, 1))
	{
		TASK::_TASK_START_SCENARIO_IN_PLACE(uLocal_37[0], joaat("WORLD_HUMAN_FAN"), -1, true, 0, -1f, false);
		PED::SET_PED_KEEP_TASK(uLocal_37[0], true);
		__LIB_3__::func_141(uLocal_37[0], 1088421888 /* Float: 7f */, 1, 1);
		PED::_0x39A2FC5AF55A52B1(uLocal_37[0], -1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_37[0]));
		if (__LIB_2__::func_1(uLocal_37[1], 0, 1))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_37[1], Global_35, 6, 256, -1082130432 /* Float: -1f */, -1, 0);
			PED::SET_PED_KEEP_TASK(uLocal_37[1], true);
			__LIB_3__::func_141(uLocal_37[1], 1088421888 /* Float: 7f */, 1, 1);
			PED::_0x39A2FC5AF55A52B1(uLocal_37[1], -1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_37[1]));
		}
		if (__LIB_2__::func_1(uLocal_37[2], 0, 1))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_37[2], Global_35, 6, 256, -1082130432 /* Float: -1f */, -1, 0);
			PED::SET_PED_KEEP_TASK(uLocal_37[2], true);
			__LIB_3__::func_141(uLocal_37[2], 1088421888 /* Float: 7f */, 1, 1);
			PED::_0x39A2FC5AF55A52B1(uLocal_37[2], -1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_37[2]));
		}
		Local_84.f_50 = 1;
	}
	__LIB_3__::func_493(&Local_84, &uLocal_37, &uLocal_41, iLocal_35, uLocal_706, uLocal_704, 0, 1, 0, 1);
	func_55();
	__LIB_3__::func_525(&uLocal_695, &uLocal_697);
	__LIB_3__::func_525(&uLocal_696, &uLocal_698);
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_71[0 /*12*/].f_8));
	if (iLocal_687 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_687);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_19()
{
	int iVar0;
	iVar0 = 1;
	switch (iLocal_544)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_84))
			{
				func_59();
				func_60();
				func_61();
				func_62();
				__LIB_3__::func_314(&Local_71);
				Local_378 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_378.f_4, 0, "PBL_NORMAL", false, true);
				Local_378.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_378.f_5, 0, "PBL_NORMAL", false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(Local_378);
				ANIMSCENE::LOAD_ANIM_SCENE(Local_378.f_1);
				iLocal_544 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_0(&uLocal_543, cLocal_690))
			{
				return false;
			}
			if (!__LIB_3__::func_316(&Local_71))
			{
				return false;
			}
			if (!__LIB_3__::func_449(&Local_281))
			{
				return false;
			}
			if (!func_67())
			{
				return false;
			}
			iVar0 = 1;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_378.f_4))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_378, true, false))
				{
					iVar0 = 0;
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_378.f_5))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_378.f_1, true, false))
				{
					iVar0 = 0;
				}
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(Local_378, false))
			{
				iVar0 = 0;
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(Local_378.f_1, false))
			{
				iVar0 = 0;
			}
			if (iVar0 == 0)
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_22(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 0:
			switch (*uParam2)
			{
				case 0:
					uParam0->f_173 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2663.13f, -1213.915f, 53.3178f, 0f, 0f, 0f, 83.7422f, 13.0435f, 6.4911f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2665.778f, -1178.708f, 52.8252f, 0f, 0f, 0f, 11.4248f, 60.5283f, 7.5828f);
					break;
				case 1:
					uParam0->f_173 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2514.995f, -1252.154f, 51.1361f, 0f, 0f, 0f, 53.7495f, 43.0997f, 8.0363f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2466.635f, -1254.307f, 47.8598f, 0f, 0f, -15.0381f, 54.4846f, 26.8234f, 14.8605f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2548.249f, -1261.118f, 52.2334f, 0f, 0f, 0f, 14.0436f, 24.2246f, 8.8268f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2498.64f, -1221.029f, 50.3406f, 0f, 0f, 0f, 21.0024f, 20.4929f, 6.4938f);
					break;
				case 2:
					uParam0->f_173 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2869.837f, -1198.849f, 47.0872f, 0f, 0f, 5.0134f, 13.3964f, 66.7883f, 4.7158f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2880.193f, -1243.177f, 47.985f, 0f, 0f, -19.2557f, 42.4481f, 39.6014f, 7.6006f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2889.204f, -1225.71f, 47.4091f, 0f, 0f, 5.3433f, 25.7292f, 9.3016f, 5.2172f);
					break;
			}
			break;
	}
}

void func_23()
{
	switch (__LIB_0__::func_12())
	{
		case 38:
			break;
		case 5:
			switch (Local_84.f_51.f_4)
			{
				case 0:
					if (iLocal_35 == 0)
					{
						Local_84.f_51.f_3 = 2.736f;
						Local_281[0 /*32*/].f_6 = { 2663.406f, -1218.514f, 56.735f };
						Local_281[0 /*32*/].f_9 = 0.912f;
						vLocal_65 = { 2658.072f, -1219.6f, 56.66819f };
						vLocal_68 = { 2658.116f, -1225.227f, 56.71788f };
						vLocal_14 = { 5f, 5f, 9f };
						vLocal_17 = { 10.948f, 2.102f, 4.703f };
						vLocal_20 = { 2662.256f, -1219.119f, 58.733f };
						vLocal_23 = { 0f, 0f, 0f };
						iLocal_27 = 1059692064;
						iLocal_28 = -359893753;
						__LIB_3__::func_124(iLocal_27, 1);
						__LIB_3__::func_124(iLocal_28, 1);
						iLocal_26 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_20, vLocal_23, vLocal_17, "REPS - volClearBalcony");
						vLocal_45[2 /*3*/] = { 2661.37f, -1209.022f, 52.33669f };
						vLocal_55[2 /*3*/] = { 2660.332f, -1149.55f, 49.85461f };
						Local_281[2 /*32*/].f_6 = { Local_84.f_51 };
					}
					else if (iLocal_35 == 1)
					{
						Local_84.f_51.f_3 = -69.02f;
						Local_281[0 /*32*/].f_6 = { 2662.974f, -1218.56f, 56.735f };
						Local_281[0 /*32*/].f_9 = 6.544f;
						vLocal_65 = { 2658.072f, -1219.6f, 56.66819f };
						vLocal_68 = { 2658.116f, -1225.227f, 56.71788f };
						vLocal_14 = { 5f, 5f, 9f };
						vLocal_17 = { 10.948f, 2.102f, 4.703f };
						vLocal_20 = { 2662.256f, -1219.119f, 58.733f };
						vLocal_23 = { 0f, 0f, 0f };
						iLocal_27 = 1059692064;
						iLocal_28 = -359893753;
						__LIB_3__::func_124(iLocal_27, 1);
						__LIB_3__::func_124(iLocal_28, 1);
						iLocal_26 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_20, vLocal_23, vLocal_17, "REPS - volClearBalcony");
						Local_281[2 /*32*/].f_6 = { Local_84.f_51 };
						Local_281[1 /*32*/].f_6 = { Local_281[2 /*32*/].f_6 + Vector(0f, 0f, 1f) };
						vLocal_45[1 /*3*/] = { 2676.668f, -1217.01f, 52.18956f };
						vLocal_45[2 /*3*/] = { 2672.237f, -1218.652f, 52.30123f };
						vLocal_55[1 /*3*/] = { 2713.988f, -1205.209f, 50.74175f };
						vLocal_55[2 /*3*/] = { 2756.561f, -1247.488f, 48.49338f };
					}
					else if (iLocal_35 == 2)
					{
						Local_84.f_51.f_3 = -47.714f;
						Local_281[0 /*32*/].f_6 = { 2663.258f, -1218.545f, 56.735f };
						Local_281[0 /*32*/].f_9 = 0.406f;
						vLocal_65 = { 2658.072f, -1219.6f, 56.66819f };
						vLocal_68 = { 2658.116f, -1225.227f, 56.71788f };
						vLocal_14 = { 5f, 5f, 9f };
						vLocal_17 = { 10.948f, 2.102f, 4.703f };
						vLocal_20 = { 2662.256f, -1219.119f, 58.733f };
						vLocal_23 = { 0f, 0f, 0f };
						iLocal_27 = 1059692064;
						iLocal_28 = -359893753;
						__LIB_3__::func_124(iLocal_27, 1);
						__LIB_3__::func_124(iLocal_28, 1);
						iLocal_26 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_20, vLocal_23, vLocal_17, "REPS - volClearBalcony");
						Local_281[2 /*32*/].f_6 = { Local_84.f_51 };
						Local_281[1 /*32*/].f_6 = { Local_281[2 /*32*/].f_6 + Vector(0f, 0f, 1f) };
						vLocal_45[2 /*3*/] = { 2654.091f, -1217.198f, 52.30483f };
						vLocal_45[1 /*3*/] = { 2678.891f, -1217.977f, 52.10874f };
						vLocal_55[2 /*3*/] = { 2592.1f, -1175.982f, 52.3105f };
						vLocal_55[1 /*3*/] = { 2738.177f, -1247.727f, 48.83985f };
					}
					break;
				case 1:
					if (iLocal_35 == 0)
					{
						Local_84.f_51.f_3 = 9.687f;
						Local_281[0 /*32*/].f_6 = { 2497.502f, -1270.647f, 53.234f };
						Local_281[0 /*32*/].f_9 = 7.738f;
						vLocal_65 = { 2492.632f, -1270.9f, 53.3694f };
						vLocal_68 = { 2493.313f, -1272.858f, 54.409f };
						vLocal_14 = { 5f, 5f, 9f };
						vLocal_17 = { 13.869f, 1.489f, 3.65f };
						vLocal_20 = { 2494.406f, -1271.045f, 54.879f };
						vLocal_23 = { 0f, 0f, 0f };
						iLocal_27 = 1949746976;
						iLocal_28 = -1049337434;
						__LIB_3__::func_124(iLocal_27, 1);
						__LIB_3__::func_124(iLocal_28, 1);
						iLocal_26 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_20, vLocal_23, vLocal_17, "REPS - volClearBalcony");
						Local_281[2 /*32*/].f_6 = { Local_84.f_51 };
						vLocal_45[2 /*3*/] = { 2488.745f, -1256.881f, 48.20708f };
						vLocal_55[2 /*3*/] = { 2421.722f, -1239.377f, 44.7325f };
					}
					else if (iLocal_35 == 1)
					{
						Local_84.f_51.f_3 = -67.839f;
						Local_281[0 /*32*/].f_6 = { 2497.154f, -1270.702f, 53.234f };
						Local_281[0 /*32*/].f_9 = 6.142f;
						vLocal_65 = { 2492.751f, -1272.804f, 53.41405f };
						vLocal_68 = { 2493.313f, -1272.858f, 54.409f };
						vLocal_14 = { 5f, 5f, 9f };
						vLocal_17 = { 13.869f, 1.489f, 3.65f };
						vLocal_20 = { 2494.406f, -1271.045f, 54.879f };
						vLocal_23 = { 0f, 0f, 0f };
						iLocal_27 = 1949746976;
						iLocal_28 = -1049337434;
						__LIB_3__::func_124(iLocal_27, 1);
						__LIB_3__::func_124(iLocal_28, 1);
						iLocal_26 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_20, vLocal_23, vLocal_17, "REPS - volClearBalcony");
						Local_281[2 /*32*/].f_6 = { Local_84.f_51 };
						Local_281[1 /*32*/].f_6 = { Local_281[2 /*32*/].f_6 + Vector(0f, 0f, 1f) };
						vLocal_45[1 /*3*/] = { 2597.994f, -1270.784f, 51.46727f };
						vLocal_45[2 /*3*/] = { 2595.68f, -1255.716f, 51.66747f };
						vLocal_55[2 /*3*/] = { 2417.642f, -1248.713f, 44.56108f };
						vLocal_55[1 /*3*/] = { 2597.095f, -1270.554f, 51.41447f };
					}
					else if (iLocal_35 == 2)
					{
						Local_84.f_51.f_3 = -50.887f;
						Local_281[0 /*32*/].f_6 = { 2497.154f, -1270.702f, 53.234f };
						Local_281[0 /*32*/].f_9 = 6.46f;
						vLocal_65 = { 2492.751f, -1272.804f, 53.41405f };
						vLocal_68 = { 2493.313f, -1272.858f, 54.409f };
						vLocal_14 = { 5f, 5f, 9f };
						vLocal_17 = { 13.869f, 1.489f, 3.65f };
						vLocal_20 = { 2494.406f, -1271.045f, 54.879f };
						vLocal_23 = { 0f, 0f, 0f };
						iLocal_27 = 1949746976;
						iLocal_28 = -1049337434;
						__LIB_3__::func_124(iLocal_27, 1);
						__LIB_3__::func_124(iLocal_28, 1);
						iLocal_26 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_20, vLocal_23, vLocal_17, "REPS - volClearBalcony");
						Local_281[2 /*32*/].f_6 = { Local_84.f_51 };
						Local_281[1 /*32*/].f_6 = { Local_281[2 /*32*/].f_6 + Vector(0f, 0f, 1f) };
						vLocal_45[2 /*3*/] = { 2486.505f, -1269.98f, 48.16777f };
						vLocal_45[1 /*3*/] = { 2510.891f, -1270.31f, 48.18351f };
						vLocal_55[2 /*3*/] = { 2417.642f, -1248.713f, 44.56108f };
						vLocal_55[1 /*3*/] = { 2597.095f, -1270.554f, 51.41447f };
					}
					break;
				case 2:
					if (iLocal_35 == 0)
					{
						Local_84.f_51.f_3 = -88.327f;
						Local_281[0 /*32*/].f_6 = { 2865.503f, -1211.614f, 49.518f };
						Local_281[0 /*32*/].f_9 = -84.269f;
						vLocal_65 = { 2864.197f, -1209.512f, 49.62901f };
						vLocal_68 = { 2861.269f, -1209.808f, 49.61028f };
						vLocal_14 = { 5f, 5f, 9f };
						vLocal_17 = { 2.264f, 11.188f, 3.147f };
						vLocal_20 = { 2864.895f, -1210.885f, 50.898f };
						vLocal_23 = { 0f, 0f, 4.351f };
						iLocal_27 = -1268973804;
						iLocal_28 = 1043141302;
						__LIB_3__::func_124(iLocal_27, 1);
						__LIB_3__::func_124(iLocal_28, 1);
						iLocal_26 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_20, vLocal_23, vLocal_17, "REPS - volClearBalcony");
						Local_281[2 /*32*/].f_6 = { Local_84.f_51 };
						vLocal_45[2 /*3*/] = { 2873.815f, -1210.418f, 45.04704f };
						vLocal_55[2 /*3*/] = { 2872.546f, -1181.935f, 44.92761f };
					}
					else if (iLocal_35 == 1)
					{
						Local_84.f_51.f_3 = -153.216f;
						Local_281[0 /*32*/].f_6 = { 2865.534f, -1211.583f, 49.518f };
						Local_281[0 /*32*/].f_9 = -76.422f;
						vLocal_65 = { 2864.426f, -1209.367f, 49.62704f };
						vLocal_68 = { 2861.269f, -1209.808f, 49.61028f };
						vLocal_14 = { 5f, 5f, 9f };
						vLocal_17 = { 2.264f, 11.188f, 3.147f };
						vLocal_20 = { 2864.895f, -1210.885f, 50.898f };
						vLocal_23 = { 0f, 0f, 4.351f };
						iLocal_27 = -1268973804;
						iLocal_28 = 1043141302;
						__LIB_3__::func_124(iLocal_27, 1);
						__LIB_3__::func_124(iLocal_28, 1);
						iLocal_26 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_20, vLocal_23, vLocal_17, "REPS - volClearBalcony");
						Local_281[2 /*32*/].f_6 = { Local_84.f_51 };
						Local_281[1 /*32*/].f_6 = { Local_281[2 /*32*/].f_6 + Vector(0f, 0f, 1f) };
						vLocal_45[2 /*3*/] = { 2865.652f, -1227.812f, 45.34529f };
						vLocal_45[1 /*3*/] = { 2860.442f, -1222.509f, 46.62189f };
						vLocal_55[2 /*3*/] = { 2830.709f, -1283.015f, 45.8672f };
						vLocal_55[1 /*3*/] = { 2815.199f, -1226.221f, 46.52655f };
					}
					else if (iLocal_35 == 2)
					{
						Local_84.f_51.f_3 = -137.648f;
						Local_281[0 /*32*/].f_6 = { 2865.522f, -1211.691f, 49.518f };
						Local_281[0 /*32*/].f_9 = -76.422f;
						vLocal_65 = { 2864.197f, -1209.512f, 49.62901f };
						vLocal_68 = { 2861.269f, -1209.808f, 49.61028f };
						vLocal_14 = { 5f, 5f, 9f };
						vLocal_17 = { 2.264f, 11.188f, 3.147f };
						vLocal_20 = { 2864.895f, -1210.885f, 50.898f };
						vLocal_23 = { 0f, 0f, 4.351f };
						iLocal_27 = -1268973804;
						iLocal_28 = 1043141302;
						__LIB_3__::func_124(iLocal_27, 1);
						__LIB_3__::func_124(iLocal_28, 1);
						iLocal_26 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_20, vLocal_23, vLocal_17, "REPS - volClearBalcony");
						Local_281[2 /*32*/].f_6 = { Local_84.f_51 };
						Local_281[1 /*32*/].f_6 = { Local_281[2 /*32*/].f_6 + Vector(0f, 0f, 1f) };
						vLocal_45[2 /*3*/] = { 2654.091f, -1217.198f, 52.30483f };
						vLocal_45[1 /*3*/] = { 2678.891f, -1217.977f, 52.10874f };
						vLocal_55[2 /*3*/] = { 2849.686f, -1079.653f, 44.31217f };
						vLocal_55[1 /*3*/] = { 2830.709f, -1283.015f, 45.8672f };
					}
					break;
			}
			break;
	}
}

void func_24()
{
	STREAMING::REQUEST_COLLISION_AT_COORD(Local_281[0 /*32*/].f_6);
	STREAMING::REQUEST_COLLISION_FOR_MODEL(Local_281[0 /*32*/].f_1);
}

void func_25()
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	if (Local_84.f_51.f_5 == 2)
	{
		iVar0 = 1;
	}
	func_74(0, iVar0, &uVar1, &uVar2);
	Local_281[0 /*32*/].f_3 = uVar2;
	iVar3 = func_75(0, iVar0);
	if (iVar3 != -1)
	{
		Local_281[0 /*32*/].f_5 = uLocal_536[iVar3];
	}
	func_74(1, iVar0, &uVar1, &uVar2);
	Local_281[1 /*32*/].f_3 = uVar2;
	iVar3 = func_75(1, iVar0);
	if (iVar3 != -1)
	{
		Local_281[1 /*32*/].f_5 = uLocal_536[iVar3];
	}
	func_74(2, iVar0, &uVar1, &uVar2);
	Local_281[2 /*32*/].f_3 = uVar2;
	iVar3 = func_75(2, iVar0);
	if (iVar3 != -1)
	{
		Local_281[2 /*32*/].f_5 = uLocal_536[iVar3];
	}
}

bool func_30()
{
	switch (iLocal_547)
	{
		case 0:
			if (!__LIB_4__::func_224(&Local_84, &uLocal_548, &Local_281, 0, 1, 1, 0, -1))
			{
				func_17();
			}
			iLocal_547 = 1;
			break;
		case 1:
			if (!__LIB_17__::func_841(&uLocal_548, &Local_281, &uLocal_37, 1, 1, 0, -1))
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_31()
{
	if (!__LIB_0__::func_27(iLocal_686, 2048) && __LIB_2__::func_1(uLocal_37[0], 0, 1))
	{
		__LIB_3__::func_567(uLocal_37[0], 1);
		func_80(uLocal_37[0], Local_281[0 /*32*/].f_6, Local_281[0 /*32*/].f_9, 2, 1073741824 /* Float: 2f */);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_281[0 /*32*/].f_23)))
		{
			__LIB_2__::func_133(uLocal_37[0], &(Local_281[0 /*32*/].f_23), 0);
		}
		PED::SET_PED_CONFIG_FLAG(uLocal_37[0], 178, false);
		if (__LIB_2__::func_1(uLocal_37[2], 0, 1))
		{
			PED::_0xAAB050DA48B57978(uLocal_37[0], func_82(), uLocal_37[2], -1, 4);
		}
		Local_84.f_98[0] = __LIB_2__::func_118(uLocal_37[0], 1, 1);
		__LIB_1__::func_683(&iLocal_686, 2048);
		if (Local_84.f_51.f_4 == 1)
		{
			if (__LIB_0__::func_30(iLocal_27))
			{
				__LIB_1__::func_948(iLocal_27, 0, -1f, 1, 0, 0f, 0, 0);
			}
			if (__LIB_0__::func_30(iLocal_28))
			{
				__LIB_1__::func_948(iLocal_28, 0, 1f, 1, 0, 0f, 0, 0);
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_686, 8192) && __LIB_2__::func_1(uLocal_37[2], 0, 1))
	{
		ENTITY::SET_ENTITY_HEADING(uLocal_37[2], Local_84.f_51.f_3);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_281[2 /*32*/].f_23)))
		{
			__LIB_2__::func_133(uLocal_37[2], &(Local_281[2 /*32*/].f_23), 0);
		}
		PED::SET_PED_CONFIG_FLAG(uLocal_37[2], 178, false);
		Local_84.f_98[2] = __LIB_2__::func_118(uLocal_37[2], 1, 1);
		__LIB_1__::func_683(&iLocal_686, 8192);
	}
	if (!__LIB_0__::func_27(iLocal_686, 4096) && (__LIB_2__::func_1(uLocal_37[1], 0, 1) || iLocal_35 == 0))
	{
		if (iLocal_35 == 1 || iLocal_35 == 2)
		{
			ENTITY::SET_ENTITY_HEADING(uLocal_37[1], Local_84.f_51.f_3);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_281[1 /*32*/].f_23)))
			{
				__LIB_2__::func_133(uLocal_37[1], &(Local_281[1 /*32*/].f_23), 0);
			}
			PED::SET_PED_CONFIG_FLAG(uLocal_37[1], 178, false);
			Local_84.f_98[1] = __LIB_2__::func_118(uLocal_37[1], 1, 1);
			__LIB_1__::func_683(&iLocal_686, 4096);
		}
		else
		{
			PED::DELETE_PED(&(uLocal_37[1]));
			__LIB_1__::func_683(&iLocal_686, 4096);
		}
	}
	if ((__LIB_0__::func_27(iLocal_686, 2048) && __LIB_0__::func_27(iLocal_686, 4096)) && __LIB_0__::func_27(iLocal_686, 8192))
	{
		iLocal_699 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), Local_84.f_51, 0f, 0f, 0f, vLocal_701);
		iLocal_700 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), Local_84.f_51, 0f, 0f, 0f, vLocal_701);
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_699) && __LIB_2__::func_1(uLocal_37[1], 0, 1))
		{
			PED::_0x7C00CFC48A782DC0(iLocal_699, uLocal_37[1], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_700) && __LIB_2__::func_1(uLocal_37[2], 0, 1))
		{
			PED::_0x7C00CFC48A782DC0(iLocal_700, uLocal_37[2], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
		__LIB_3__::func_285(uLocal_37[2], &Local_84, 0);
		return true;
	}
	return false;
}

void func_32()
{
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_378, Local_84.f_51, 0f, 0f, Local_84.f_51.f_3, 2);
	if (iLocal_35 == 0)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_378, "PED_MALE_B", uLocal_37[2], 0);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_378, "PED_MALE_A", uLocal_37[1], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_378, "PED_MALE_B", uLocal_37[2], 0);
	}
	Local_71[0 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_71[0 /*12*/].f_7, Local_281[0 /*32*/].f_6 + Vector(0f, 0.25f, 0.25f), true, true, false, false, true);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_378.f_1, Local_281[0 /*32*/].f_6, 0f, 0f, Local_281[0 /*32*/].f_9, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_378.f_1, "PED_WOMAN", uLocal_37[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_378.f_1, "CHAMBER_POT", Local_71[0 /*12*/].f_8, 0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_378.f_4))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_378, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_378);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_378.f_5))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_378.f_1, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_378.f_1);
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_378, "ACTION", false, false);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_378.f_1, "ACTION", false, false);
}

void func_34()
{
	if (!Local_84.f_48 && __LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
	{
		func_17();
	}
}

void func_37()
{
	int iVar0;
	if (func_101(&uLocal_37, &(Local_84.f_5), &iLocal_685, &uLocal_688, 0, (3 - 1), 1))
	{
		if (iLocal_685 == 8)
		{
			iVar0 = __LIB_0__::func_153(Global_35, 0, 1, 0);
			if (iVar0 == joaat("WEAPON_LASSO") || iVar0 == joaat("WEAPON_UNARMED"))
			{
				__LIB_3__::func_237(&(Local_84.f_5), &iLocal_685);
				return;
			}
		}
		if (Local_84.f_5.f_10 == uLocal_37[1])
		{
			if (__LIB_2__::func_1(uLocal_37[1], 0, 1))
			{
				__LIB_2__::func_461(0);
				__LIB_2__::func_478(uLocal_37[1], Global_35, func_104("MALE_B_AGGRO"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			Local_84.f_46 = 1;
		}
		if (Local_84.f_5.f_10 == uLocal_37[2])
		{
			if (__LIB_2__::func_1(uLocal_37[2], 0, 1))
			{
				__LIB_2__::func_461(0);
				__LIB_2__::func_478(uLocal_37[2], Global_35, func_104("MALE_A_AGGRO"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			Local_84.f_46 = 1;
		}
		if (Local_84.f_5.f_10 == uLocal_37[0])
		{
			if (__LIB_2__::func_1(uLocal_37[0], 0, 1))
			{
				__LIB_2__::func_461(0);
				__LIB_2__::func_478(uLocal_37[0], Global_35, func_104("WOMAN_AGGRO"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			Local_84.f_46 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_37[1]))
	{
		if (PED::IS_PED_RAGDOLL(uLocal_37[1]) && __LIB_0__::func_665(uLocal_37[1], Global_35, 1, 1) < 5f)
		{
			Local_84.f_46 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_37[2]))
	{
		if (PED::IS_PED_RAGDOLL(uLocal_37[2]) && __LIB_0__::func_665(uLocal_37[1], Global_35, 1, 1) < 5f)
		{
			Local_84.f_46 = 1;
		}
	}
}

int func_38()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_2__::func_1(uLocal_37[iVar0], 0, 1))
		{
			LAW::_0x21213B833EF4DAE7(PLAYER::GET_PLAYER_INDEX(), uLocal_37[iVar0], &iVar1);
			if (iVar1 != 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_39()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_2__::func_1(uLocal_37[iVar0], 0, 1))
		{
			if (Local_84.f_98[iVar0] < 1f)
			{
				__LIB_1__::func_683(&iLocal_686, 16);
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_41()
{
	if (iLocal_545 != 1 && iLocal_545 != 0)
	{
		func_110();
		func_111();
		func_112();
		func_113();
	}
	func_114();
	func_115();
	func_116();
	func_117();
	func_118();
	switch (iLocal_545)
	{
		case 0:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_378, true, false) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_378.f_1, true, false))
			{
				ANIMSCENE::START_ANIM_SCENE(Local_378);
				ANIMSCENE::START_ANIM_SCENE(Local_378.f_1);
				if (iLocal_35 != 0)
				{
					func_119(0);
					func_120(0, 1);
				}
				func_119(1);
				func_120(1, 1);
				iLocal_545 = 1;
			}
			break;
		case 1:
			if (!func_121())
			{
			}
			else
			{
				if (__LIB_3__::func_647(&Local_84, &uLocal_278, 3f, 1114636288 /* Float: 60f */, fLocal_693, 1350, 2.5f, 1065353216 /* Float: 1f */, 1, 0, 1, -1082130432 /* Float: -1f */, 0, 0, 1))
				{
					if (iLocal_35 != 0)
					{
						func_119(0);
						func_120(0, 1);
					}
					func_119(1);
					func_120(1, 1);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_378, "ACTION", true, false);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_378.f_1, "ACTION", true, false);
					iLocal_545 = 3;
				}
				Jump @476; //curOff = 291
				func_123();
				func_124();
				if (func_125())
				{
					EVENT::REMOVE_SHOCKING_EVENT(iLocal_687);
					iLocal_545 = 5;
				}
				Jump @476; //curOff = 321
				if (!__LIB_0__::func_27(iLocal_686, 32768))
				{
					__LIB_1__::func_683(&iLocal_686, 32768);
					if (!__LIB_0__::func_27(iLocal_686, 1024))
					{
						__LIB_1__::func_681(&iLocal_686, 1);
					}
				}
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				func_127();
				func_123();
				if (__LIB_2__::func_1(uLocal_37[1], 0, 1))
				{
					__LIB_2__::func_461(0);
					__LIB_2__::func_478(uLocal_37[1], Global_35, func_104("MALE_B_AGGRO"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				Local_84.f_46 = 1;
				iLocal_545 = 5;
				Jump @476; //curOff = 455
				func_123();
				if (func_128())
				{
					return true;
				}
			}
			return false;
			default:
				break;
	}
}

void func_55()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_378))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_378);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_378.f_1))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_378.f_1);
	}
}

void func_59()
{
	switch (__LIB_0__::func_12())
	{
		case 5:
			if (iLocal_35 == 0)
			{
				Local_281[0 /*32*/].f_1 = joaat("RE_PISSPOT_FEMALES_01");
				Local_281[0 /*32*/] = 5;
				Local_281[2 /*32*/].f_1 = joaat("RE_PISSPOT_MALES_01");
				Local_281[2 /*32*/] = 4;
				StringCopy(&(Local_281[2 /*32*/].f_23), "0923_A_M_M_Civ_Poor_White_AVOID_06", 64);
			}
			else if (iLocal_35 == 1)
			{
				Local_281[0 /*32*/].f_1 = joaat("RE_PISSPOT_FEMALES_01");
				Local_281[0 /*32*/] = 5;
				StringCopy(&(Local_281[0 /*32*/].f_23), "0864_A_F_M_Civ_Poor_White_AVOID_02", 64);
				Local_281[1 /*32*/].f_1 = joaat("RE_PISSPOT_MALES_01");
				Local_281[1 /*32*/] = 4;
				StringCopy(&(Local_281[1 /*32*/].f_23), "0901_A_M_M_Civ_Poor_White_AGGRESSIVE_01", 64);
				Local_281[2 /*32*/].f_1 = joaat("RE_PISSPOT_MALES_01");
				Local_281[2 /*32*/] = 4;
				StringCopy(&(Local_281[2 /*32*/].f_23), "0904_A_M_M_Civ_Poor_White_AGGRESSIVE_04", 64);
			}
			else if (iLocal_35 == 2)
			{
				Local_281[0 /*32*/].f_1 = joaat("RE_PISSPOT_FEMALES_01");
				Local_281[0 /*32*/] = 5;
				StringCopy(&(Local_281[0 /*32*/].f_23), "0873_A_F_M_Civ_White_TIMID_02", 64);
				Local_281[1 /*32*/].f_1 = joaat("RE_PISSPOT_MALES_01");
				Local_281[1 /*32*/] = 4;
				StringCopy(&(Local_281[1 /*32*/].f_23), "0418_A_M_M_SclRoughTravellers_01_WHITE_01", 64);
				Local_281[2 /*32*/].f_1 = joaat("RE_PISSPOT_MALES_01");
				Local_281[2 /*32*/] = 4;
				StringCopy(&(Local_281[2 /*32*/].f_23), "0050_A_M_M_BiVRoughTravellers_01_WHITE_01", 64);
			}
			break;
		case 38:
			break;
	}
}

void func_60()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		__LIB_3__::func_950(&(Local_281[iVar0 /*32*/]));
		iVar0++;
	}
}

void func_61()
{
	if (iLocal_35 == 0)
	{
		Local_378.f_4 = "script@beat@town@pissPot@normalMale";
		Local_378.f_5 = "script@beat@town@pissPot@normalWoman";
	}
	else if (iLocal_35 == 1)
	{
		Local_378.f_4 = "script@beat@town@pissPot@purposefulBystanders";
		Local_378.f_5 = "script@beat@town@pissPot@purposefulWoman";
	}
	else if (iLocal_35 == 2)
	{
		Local_378.f_4 = "script@beat@town@pissPot@accidentalBystanders";
		Local_378.f_5 = "script@beat@town@pissPot@accidentalWoman";
	}
}

void func_62()
{
	Local_71[0 /*12*/].f_7 = joaat("P_CHAMBERPOT_POT");
}

bool func_67()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iVar4 = func_75(iVar1, iVar0);
			if (iVar4 == -1)
			{
				return false;
			}
			func_74(iVar1, iVar0, &iVar2, &iVar3);
			if (iVar2 != 0)
			{
				if (!__LIB_4__::func_222(iVar2, iVar3, &(uLocal_536[iVar4])))
				{
					return false;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	return true;
}

void func_74(int iParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam2 = 0;
	switch (iParam0)
	{
		case 0:
			switch (iLocal_35)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							*iParam2 = joaat("RE_PISSPOT_FEMALES_01");
							*iParam3 = 260897019;
							break;
						case 1:
							*iParam2 = joaat("RE_PISSPOT_FEMALES_01");
							*iParam3 = 1828290413;
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							*iParam2 = joaat("RE_PISSPOT_FEMALES_01");
							*iParam3 = -2145160455;
							break;
						case 1:
							*iParam2 = joaat("RE_PISSPOT_FEMALES_01");
							*iParam3 = 39510090;
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							*iParam2 = joaat("RE_PISSPOT_FEMALES_01");
							*iParam3 = -613577747;
							break;
						case 1:
							*iParam2 = joaat("RE_PISSPOT_FEMALES_01");
							*iParam3 = -899329072;
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iLocal_35)
			{
				case 1:
					switch (iParam1)
					{
						case 0:
							*iParam2 = joaat("RE_PISSPOT_MALES_01");
							*iParam3 = 108996907;
							break;
						case 1:
							*iParam2 = joaat("RE_PISSPOT_MALES_01");
							*iParam3 = 1913024510;
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							*iParam2 = joaat("RE_PISSPOT_MALES_01");
							*iParam3 = -1921806981;
							break;
						case 1:
							*iParam2 = joaat("RE_PISSPOT_MALES_01");
							*iParam3 = -2070333690;
							break;
					}
					break;
			}
			break;
		case 2:
			switch (iLocal_35)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							*iParam2 = joaat("RE_PISSPOT_MALES_01");
							*iParam3 = 1460043843;
							break;
						case 1:
							*iParam2 = joaat("RE_PISSPOT_MALES_01");
							*iParam3 = -598424688;
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							*iParam2 = joaat("RE_PISSPOT_MALES_01");
							*iParam3 = 1369849696;
							break;
						case 1:
							*iParam2 = joaat("RE_PISSPOT_MALES_01");
							*iParam3 = 1581828227;
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							*iParam2 = joaat("RE_PISSPOT_MALES_01");
							*iParam3 = -1204952337;
							break;
						case 1:
							*iParam2 = joaat("RE_PISSPOT_MALES_01");
							*iParam3 = -1178197665;
							break;
					}
					break;
			}
			break;
	}
}

int func_75(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1;
				case 1:
					return 0;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
				case 1:
					return 2;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 5;
				case 1:
					return 4;
				default:
					break;
			}
			break;
	}
	return -1;
}

void func_80(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_80(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_80(iVar2, vParam1, fParam4, iParam5, iParam6);
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

char* func_82()
{
	switch (iLocal_35)
	{
		case 0:
			return "";
		case 1:
			return "Default_Angry";
		case 2:
			return "Default_Panic";
		default:
			break;
	}
	return "";
}

bool func_101(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = __LIB_0__::func_259(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_3__::func_605((*uParam0)[*uParam3], 0, iParam1, iParam2, 0, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

char* func_104(char* sParam0)
{
	int iVar0;
	if (iLocal_35 == 0)
	{
		iVar0 = 1;
	}
	else if (iLocal_35 == 1)
	{
		iVar0 = 2;
	}
	else if (iLocal_35 == 2)
	{
		iVar0 = 3;
	}
	switch (__LIB_1__::func_898())
	{
		case 0:
			return __LIB_3__::func_394("PISS", "NBX", sParam0, iVar0);
		default:
			break;
	}
	return "INVALID";
}

void func_110()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar2 = __LIB_4__::func_221(iVar0);
		if (__LIB_3__::func_643(&Local_84, iVar2, 10f))
		{
			iVar1 = func_244(&(uLocal_37[iVar2]), &(Local_386[iVar0 /*21*/]), 8f, &(Local_429[iVar0 /*52*/]), &(Local_84.f_192), 0, 1, 0, 0, __LIB_2__::func_340(1, 0, 0) | 64, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
			if (iVar1 == -1)
			{
			}
			else if (iLocal_534 <= -1)
			{
				iLocal_534 = iVar1;
				iLocal_535 = iVar0;
			}
		}
		iVar0++;
	}
}

void func_111()
{
	func_245();
	switch (iLocal_35)
	{
		case 0:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_37[2], -526417022))
			{
				__LIB_2__::func_461(0);
				__LIB_2__::func_478(uLocal_37[2], uLocal_37[2], func_104("DUMP_REACT_C"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			break;
		case 1:
		case 2:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_37[1], 1285642699))
			{
				if (AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_37[1]) || AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_37[2]))
				{
					PED::SET_PED_RESET_FLAG(uLocal_37[1], 290, true);
				}
			}
			break;
	}
}

void func_112()
{
	if (__LIB_2__::func_1(uLocal_37[2], 0, 1) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_37[2], -685797094))
	{
		func_246(&(uLocal_37[2]));
		__LIB_1__::func_683(&iLocal_686, 524288);
		if (__LIB_2__::func_1(uLocal_37[1], 0, 1))
		{
			func_246(&(uLocal_37[1]));
		}
	}
}

void func_113()
{
	if (!__LIB_0__::func_27(iLocal_686, 8))
	{
		if (__LIB_2__::func_1(uLocal_37[2], 0, 1) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_37[2], joaat("DUMP")))
		{
			__LIB_1__::func_683(&iLocal_686, 65536);
			iLocal_687 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_AMUSING"), uLocal_37[2], -1f, 15f, 15f, -1f, -1f, 180f, false, false, -1, -1);
			if ((!__LIB_4__::func_223(uLocal_37[0], BUILTIN::FLOOR(20f)) && !__LIB_4__::func_223(uLocal_37[2], BUILTIN::FLOOR(20f))) && (iLocal_35 == 0 || !__LIB_4__::func_223(uLocal_37[1], BUILTIN::FLOOR(20f))))
			{
				Local_84.f_45 = 0;
			}
			__LIB_1__::func_683(&iLocal_686, 8);
		}
	}
}

void func_114()
{
	float fVar0;
	vector3 vVar1;
	bool bVar4;
	float fVar5;
	if (__LIB_0__::func_27(iLocal_686, 8) || __LIB_0__::func_27(iLocal_686, 32))
	{
		return;
	}
	bVar4 = PED::IS_PED_ON_MOUNT(Global_35);
	switch (iLocal_35)
	{
		case 0:
			if (bVar4)
			{
				fLocal_692 = 15f;
				fLocal_693 = 35f;
			}
			else
			{
				fLocal_692 = 12f;
				fLocal_693 = 15f;
			}
			break;
		case 1:
			if (bVar4)
			{
				fLocal_692 = 27f;
				fLocal_693 = 50f;
			}
			else
			{
				fLocal_692 = 12f;
				fLocal_693 = 50f;
			}
			break;
		case 2:
			if (bVar4)
			{
				fLocal_692 = 35f;
				fLocal_693 = 50f;
			}
			else
			{
				fLocal_692 = 15f;
				fLocal_693 = 50f;
			}
			break;
	}
	if ((!__LIB_2__::func_1(uLocal_37[1], 0, 1) || !__LIB_2__::func_1(uLocal_37[2], 0, 1)) || !__LIB_2__::func_1(uLocal_37[0], 0, 1))
	{
		return;
	}
	fVar5 = 1f;
	if (bVar4)
	{
		fVar5 = 2f;
	}
	vVar1 = { __LIB_2__::func_114(Global_35, fVar5) };
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, Local_84.f_51, true);
	if (fVar0 < fLocal_692 && __LIB_1__::func_472(uLocal_37[2], 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
	{
		__LIB_1__::func_683(&iLocal_686, 32);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_378, "PBL_QUICK_DUMP", true);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_378.f_1, "PBL_QUICK_DUMP", true);
	}
}

void func_115()
{
	if (__LIB_0__::func_27(iLocal_686, 256) || iLocal_35 == 0)
	{
		return;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_378) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_378, false))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_378, "PBL_QUICK_DUMP");
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_378, "PBL_QUICK_DUMP"))
		{
			__LIB_1__::func_681(&iLocal_686, 64);
		}
		__LIB_1__::func_683(&iLocal_686, 64);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_378.f_1) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_378.f_1, false))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_378.f_1, "PBL_QUICK_DUMP");
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_378.f_1, "PBL_QUICK_DUMP"))
		{
			__LIB_1__::func_681(&iLocal_686, 128);
		}
		__LIB_1__::func_683(&iLocal_686, 128);
	}
	if (__LIB_0__::func_27(iLocal_686, 64) && __LIB_0__::func_27(iLocal_686, 128))
	{
		__LIB_1__::func_683(&iLocal_686, 256);
	}
}

void func_116()
{
	if (__LIB_0__::func_27(iLocal_686, 65536))
	{
		__LIB_3__::func_699(&Global_35, 0, uLocal_37[2], 0, 0, 0, 0, 1);
	}
}

void func_117()
{
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_37[2]) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_37[2], 1384389773))
	{
		__LIB_2__::func_315(joaat("SONAR_OVERHEARD_BEAT_BIG"), uLocal_37[2], 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_37[1]) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_37[1], 1384389773))
	{
		__LIB_2__::func_315(joaat("SONAR_OVERHEARD_BEAT_BIG"), uLocal_37[1], 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_37[0]) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_37[0], 1384389773))
	{
		__LIB_2__::func_315(joaat("SONAR_OVERHEARD_BEAT_BIG"), uLocal_37[0], 1);
	}
}

void func_118()
{
	if (!Local_84.f_45 && __LIB_0__::func_27(iLocal_686, 524288))
	{
		if (__LIB_0__::func_27(iLocal_686, 512) || (!func_125() && func_252()))
		{
			Local_84.f_44 = 1;
			Local_84.f_45 = 1;
		}
	}
}

void func_119(int iParam0)
{
	__LIB_2__::func_602(&(Local_429[iParam0 /*52*/][0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
	__LIB_2__::func_602(&(Local_429[iParam0 /*52*/][1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
	__LIB_2__::func_602(&(Local_429[iParam0 /*52*/][2 /*17*/]), __LIB_2__::func_460(12), "", joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 0, 0);
}

void func_120(int iParam0, bool bParam1)
{
	func_255(iParam0, 0);
	if (bParam1)
	{
		iLocal_534 = -1;
		iLocal_535 = -1;
	}
}

bool func_121()
{
	if (__LIB_1__::func_472(uLocal_37[2], 50f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
	{
		return true;
	}
	return false;
}

void func_123()
{
	float fVar0;
	float fVar1;
	if (!__LIB_0__::func_27(iLocal_686, 1))
	{
		if (Local_84.f_46 || ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_37[0], joaat("ENDS_IN_WALK")))
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_378.f_1) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_378.f_1, false))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_378.f_1, "PED_WOMAN", uLocal_37[0]);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_378.f_1, "CHAMBER_POT", Local_71[0 /*12*/].f_8);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_378.f_1))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_378.f_1);
			}
			if (!Local_84.f_46 || iLocal_685 == 2048)
			{
				PED::FORCE_PED_MOTION_STATE(uLocal_37[0], joaat("MOTIONSTATE_WALK"), false, 0, false);
			}
			PED::SET_PED_KEEP_TASK(uLocal_37[0], true);
			if (Local_84.f_46 && iLocal_685 != 2048)
			{
				fVar0 = 2f;
			}
			else
			{
				fVar0 = 1f;
			}
			if (Local_84.f_51.f_4 == 1)
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_694);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, 2492.681f, -1270.89f, 53.3694f, fVar0, 20000, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, 0);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, vLocal_65, fVar0, 20000, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, 0);
				__LIB_1__::func_474(uLocal_37[0], &iLocal_694, 0, 0, 1, 1);
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_37[0], vLocal_65, fVar0, 20000, 0.25f, 1, 40000f);
			}
			__LIB_1__::func_683(&iLocal_686, 1);
		}
	}
	else if (!__LIB_0__::func_27(iLocal_686, 1024))
	{
		if (__LIB_0__::func_175(vLocal_65, ENTITY::GET_ENTITY_COORDS(uLocal_37[0], true, false), 0.25f, 0))
		{
			__LIB_1__::func_683(&iLocal_686, 1024);
			if (!__LIB_0__::func_86(vLocal_68))
			{
				if (Local_84.f_46)
				{
					fVar1 = 2f;
				}
				else
				{
					fVar1 = 1f;
				}
				TASK::TASK_GO_STRAIGHT_TO_COORD(uLocal_37[0], vLocal_68, fVar1, 20000, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, 0);
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_686, 16384))
	{
		if (__LIB_0__::func_175(vLocal_68, ENTITY::GET_ENTITY_COORDS(uLocal_37[0], true, false), 0.2f, 0))
		{
			__LIB_1__::func_683(&iLocal_686, 16384);
			if (__LIB_0__::func_30(iLocal_27))
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_27, 0f, false);
				OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(iLocal_27, 25f);
				OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iLocal_27, 5f);
				OBJECT::_0x1BC47A9DEDC8DF5D(iLocal_27, 0);
			}
			if (__LIB_0__::func_30(iLocal_28))
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_28, 0f, false);
				OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(iLocal_28, 25f);
				OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iLocal_28, 5f);
				OBJECT::_0x1BC47A9DEDC8DF5D(iLocal_28, 0);
			}
			if (__LIB_0__::func_30(iLocal_27))
			{
				__LIB_1__::func_948(iLocal_27, 1, 0f, 1, 0, 3f, 0, 0);
			}
			if (__LIB_0__::func_30(iLocal_28))
			{
				__LIB_1__::func_948(iLocal_28, 1, 0f, 1, 0, 3f, 0, 0);
			}
		}
	}
}

void func_124()
{
	struct<5> Var0;
	switch (iLocal_35)
	{
		case 0:
			if (!__LIB_0__::func_27(iLocal_686, 4))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_37[1], joaat("ENDS_IN_WALK")) || (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_378) || ANIMSCENE::_0xB89FCFF19DAFFF28(Local_378, "PED_MALE_B")))
				{
					if (!__LIB_0__::func_75(&uLocal_29))
					{
						__LIB_1__::func_148(&uLocal_29);
					}
					PED::FORCE_PED_MOTION_STATE(uLocal_37[2], joaat("MOTIONSTATE_WALK"), false, 0, false);
					Var0.f_3 = 1065353216;
					Var0.f_4 = -1;
					Var0.f_5 = 1048576000;
					Var0.f_6 = 1193033728;
					Var0 = { vLocal_55[2 /*3*/] };
					Var0.f_4 = -1;
					Var0.f_3 = 1f;
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_694);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_694);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_45[2 /*3*/], 1f, -1, 0.25f, 0, 40000f);
					TASK::TASK_FOLLOW_PAVEMENT_TO_COORD(0, &Var0);
					TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 0, 1, 500f, -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_694);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_37[2], iLocal_694);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_694);
					PED::SET_PED_KEEP_TASK(uLocal_37[2], true);
					__LIB_0__::func_172(iLocal_699);
					__LIB_0__::func_172(iLocal_700);
					if (__LIB_0__::func_27(iLocal_686, 8))
					{
						PED::_0x923583741DC87BCE(uLocal_37[2], "DEFAULT");
						PED::_0x89F5E7ADECCCB49C(uLocal_37[2], "piss_pot_b");
					}
					bLocal_34 = true;
					__LIB_1__::func_683(&iLocal_686, 4);
				}
			}
			break;
		case 1:
			func_264();
			break;
		case 2:
			func_264();
			break;
	}
}

bool func_125()
{
	if (iLocal_35 == 0)
	{
		if (__LIB_0__::func_27(iLocal_686, 1) && __LIB_0__::func_27(iLocal_686, 4))
		{
			return true;
		}
	}
	else if ((__LIB_0__::func_27(iLocal_686, 1) && __LIB_0__::func_27(iLocal_686, 4)) && __LIB_0__::func_27(iLocal_686, 2))
	{
		return true;
	}
	return false;
}

void func_127()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_2__::func_1(uLocal_37[iVar0], 0, 1))
		{
			if (iVar0 == 0)
			{
				func_123();
			}
			else
			{
				if (__LIB_0__::func_27(iLocal_686, 16) && !ENTITY::DOES_ENTITY_EXIST(Local_84.f_5.f_10))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_37[iVar0], Global_35, 0, 0, 500f, -1, 0);
				}
				else
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_37[iVar0], Global_35, 4, 0, 500f, -1, 0);
				}
				PED::SET_PED_KEEP_TASK(uLocal_37[iVar0], true);
			}
		}
		iVar0++;
	}
	__LIB_0__::func_172(iLocal_699);
	__LIB_0__::func_172(iLocal_700);
	if (__LIB_0__::func_27(iLocal_686, 8))
	{
		if (__LIB_2__::func_1(uLocal_37[1], 0, 1))
		{
			PED::_0x923583741DC87BCE(uLocal_37[1], "DEFAULT");
			PED::_0x89F5E7ADECCCB49C(uLocal_37[1], "piss_pot_a");
		}
		if (__LIB_2__::func_1(uLocal_37[2], 0, 1))
		{
			PED::_0x923583741DC87BCE(uLocal_37[2], "DEFAULT");
			PED::_0x89F5E7ADECCCB49C(uLocal_37[2], "piss_pot_b");
		}
	}
}

bool func_128()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_2__::func_1(uLocal_37[iVar0], 0, 1))
		{
			if (Local_84.f_98[iVar0] < 20f || __LIB_1__::func_472(uLocal_37[iVar0], 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
			{
				return false;
			}
			else if (!__LIB_1__::func_472(uLocal_37[iVar0], 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
			{
				PED::DELETE_PED(&(uLocal_37[iVar0]));
			}
		}
		iVar0++;
	}
	return true;
}

int func_244(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_399(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

void func_245()
{
	func_403();
	if (func_404())
	{
		if (__LIB_0__::func_27(iLocal_686, 8))
		{
			__LIB_0__::func_172(iLocal_699);
			__LIB_0__::func_172(iLocal_700);
			PED::_0x923583741DC87BCE(uLocal_37[2], "DEFAULT");
			PED::_0x89F5E7ADECCCB49C(uLocal_37[2], "piss_pot_b");
		}
		__LIB_1__::func_683(&iLocal_686, 512);
		__LIB_1__::func_681(&iLocal_686, 65536);
	}
	if (bLocal_34)
	{
		if (iLocal_35 != 0)
		{
			func_405(0);
		}
		func_405(1);
	}
	if ((__LIB_0__::func_27(iLocal_686, 65536) && __LIB_2__::func_1(uLocal_37[2], 0, 1)) && Local_84.f_98[2] > 30f)
	{
		__LIB_1__::func_681(&iLocal_686, 65536);
	}
}

void func_246(var uParam0)
{
	if (__LIB_1__::func_985())
	{
		PED::_0x58D32261AE0F0843(*uParam0, 30226, 0.20517f, 0.046563f, 0.507389f, 0.241037f, 0.105917f, 0.964716f, "Pissing");
	}
	else
	{
		PED::_0x58D32261AE0F0843(*uParam0, 54802, -0.13956f, 0.026992f, 0.522096f, -0.17646f, 0.034832f, 0.983688f, "Pissing");
	}
	if (__LIB_1__::func_985())
	{
		PED::_0x58D32261AE0F0843(*uParam0, 14414, 0.087967f, 0.117107f, 0.48965f, 0.035033f, 0.843737f, 0.535608f, "Pissing");
	}
	else
	{
		PED::_0x58D32261AE0F0843(*uParam0, 54802, -0.238967f, -0.009972f, 0.453114f, -0.700396f, -0.680935f, 0.213934f, "Pissing");
	}
	if (__LIB_1__::func_985())
	{
		PED::_0x58D32261AE0F0843(*uParam0, 14414, 0.125488f, -0.053184f, 0.485976f, 0.391717f, -0.771753f, 0.50095f, "Vomit");
	}
	else
	{
		PED::_0x58D32261AE0F0843(*uParam0, 14283, -0.055569f, 0.019992f, 0.565456f, -0.998232f, 0.057524f, 0.014761f, "Vomit");
	}
	PED::APPLY_PED_DAMAGE_PACK(*uParam0, "PD_ANM_piss_pot", 0f, 1f);
}

bool func_252()
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_37[iLocal_705]) && !ENTITY::IS_ENTITY_DEAD(uLocal_37[iLocal_705]))
	{
		__LIB_3__::func_336(&(Local_84.f_121[iLocal_705 /*9*/]), 20f, 1082130432 /* Float: 4f */, 0, 90f, 1, Local_84.f_98[iLocal_705]);
		if (__LIB_3__::func_280(&(Local_84.f_121), Local_84.f_120, 2f))
		{
			__LIB_3__::func_164(&(Local_84.f_121));
			iVar0 = 1;
		}
	}
	iLocal_705++;
	if (iLocal_705 >= 3)
	{
		iLocal_705 = 0;
	}
	return iVar0;
}

void func_255(int iParam0, bool bParam1)
{
	func_416(iParam0, 0, bParam1);
	func_416(iParam0, 1, bParam1);
	func_416(iParam0, 2, bParam1);
}

void func_264()
{
	struct<5> Var0;
	struct<5> Var7;
	if (!__LIB_0__::func_27(iLocal_686, 4))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_37[2], joaat("ENDS_IN_WALK")) || (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_378) || ANIMSCENE::_0xB89FCFF19DAFFF28(Local_378, "PED_MALE_B")))
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_378) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_378, false))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_378, "PED_MALE_B", uLocal_37[2]);
			}
			if (!__LIB_0__::func_75(&uLocal_29))
			{
				__LIB_1__::func_148(&uLocal_29);
			}
			PED::FORCE_PED_MOTION_STATE(uLocal_37[2], joaat("MOTIONSTATE_WALK"), false, 0, false);
			Var0.f_3 = 1065353216;
			Var0.f_4 = -1;
			Var0.f_5 = 1048576000;
			Var0.f_6 = 1193033728;
			Var0 = { vLocal_55[2 /*3*/] };
			Var0.f_4 = -1;
			Var0.f_3 = 1f;
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_694);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_694);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_45[2 /*3*/], 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_PAVEMENT_TO_COORD(0, &Var0);
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 0, 0, 500f, -1, 0);
			__LIB_1__::func_474(uLocal_37[2], &iLocal_694, 0, 0, 1, 1);
			if (__LIB_0__::func_27(iLocal_686, 8))
			{
				__LIB_0__::func_172(iLocal_700);
				PED::_0x923583741DC87BCE(uLocal_37[2], "DEFAULT");
				PED::_0x89F5E7ADECCCB49C(uLocal_37[2], "piss_pot_b");
			}
			__LIB_1__::func_683(&iLocal_686, 4);
			bLocal_34 = true;
		}
	}
	if (!__LIB_0__::func_27(iLocal_686, 2))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_37[1], joaat("ENDS_IN_WALK")) || (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_378) || ANIMSCENE::_0xB89FCFF19DAFFF28(Local_378, "PED_MALE_A")))
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_378) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_378, false))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_378, "PED_MALE_A", uLocal_37[1]);
			}
			if (!__LIB_0__::func_75(&uLocal_29))
			{
				__LIB_1__::func_148(&uLocal_29);
			}
			PED::FORCE_PED_MOTION_STATE(uLocal_37[1], joaat("MOTIONSTATE_WALK"), false, 0, false);
			Var7.f_3 = 1065353216;
			Var7.f_4 = -1;
			Var7.f_5 = 1048576000;
			Var7.f_6 = 1193033728;
			Var7 = { vLocal_55[1 /*3*/] };
			Var7.f_4 = -1;
			Var7.f_3 = 1f;
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_694);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_694);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_45[1 /*3*/], 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_PAVEMENT_TO_COORD(0, &Var7);
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 0, 0, 500f, -1, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_694);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_37[1], iLocal_694);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_694);
			if (__LIB_0__::func_27(iLocal_686, 8))
			{
				__LIB_0__::func_172(iLocal_699);
				PED::_0x923583741DC87BCE(uLocal_37[1], "DEFAULT");
				PED::_0x89F5E7ADECCCB49C(uLocal_37[1], "piss_pot_a");
			}
			__LIB_1__::func_683(&iLocal_686, 2);
			bLocal_34 = true;
		}
	}
}

int func_399(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
					if (__LIB_3__::func_374(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_399(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_3__::func_375(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_3__::func_376(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
				if (__LIB_3__::func_888(uParam0, iParam1, fParam4, bVar6))
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
					__LIB_3__::func_377(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_3__::func_376(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_3__::func_375(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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
				if (__LIB_3__::func_888(uParam0, iParam1, fParam4, bVar6))
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

void func_403()
{
	if (__LIB_0__::func_27(iLocal_686, 131072))
	{
		if (!__LIB_2__::func_136(Global_35, 0))
		{
			if (iLocal_535 != -1)
			{
				if (!func_510())
				{
					switch (iLocal_534)
					{
						case 0:
							func_511(__LIB_4__::func_221(iLocal_535));
							func_120(iLocal_535, 1);
							__LIB_1__::func_681(&iLocal_686, 131072);
							__LIB_1__::func_683(&iLocal_686, 262144);
							break;
						case 1:
							func_512(__LIB_4__::func_221(iLocal_535));
							func_120(iLocal_535, 1);
							__LIB_1__::func_681(&iLocal_686, 131072);
							__LIB_1__::func_683(&iLocal_686, 262144);
							break;
					}
				}
			}
		}
	}
	else if (iLocal_534 > -1)
	{
		if (iLocal_535 != -1)
		{
			switch (iLocal_534)
			{
				case 0:
					__LIB_2__::func_478(Global_35, uLocal_37[__LIB_4__::func_221(iLocal_535)], func_513("GREET"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_686, 131072);
					bLocal_32 = true;
					break;
				case 1:
					__LIB_2__::func_478(Global_35, uLocal_37[__LIB_4__::func_221(iLocal_535)], func_513("ANT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_686, 131072);
					bLocal_32 = true;
					bLocal_33 = true;
					break;
			}
		}
	}
}

bool func_404()
{
	if (Local_84.f_46)
	{
		return false;
	}
	if (!__LIB_2__::func_598(uLocal_37[2], Local_378, "PED_MALE_B", 0, 0, 1, 0))
	{
		return false;
	}
	if (!__LIB_2__::func_215(uLocal_37[2], Global_35, 0, 10f, 0))
	{
		return false;
	}
	if (!__LIB_1__::func_285(&uLocal_29, 1f))
	{
		return false;
	}
	return true;
}

void func_405(int iParam0)
{
	func_416(iParam0, 0, (!bLocal_32 && bLocal_34));
	func_416(iParam0, 1, (!bLocal_33 && bLocal_34));
	func_416(iParam0, 2, 0);
}

void func_416(int iParam0, int iParam1, bool bParam2)
{
	__LIB_2__::func_411(&(Local_429[iParam0 /*52*/][iParam1 /*17*/]), bParam2, 0);
}

bool func_510()
{
	if (__LIB_2__::func_136(uLocal_37[2], 0))
	{
		return true;
	}
	if (iLocal_35 != 0)
	{
		if (__LIB_2__::func_136(uLocal_37[1], 0))
		{
			return true;
		}
	}
	return false;
}

char* func_511(int iParam0)
{
	switch (iLocal_35)
	{
		case 0:
			__LIB_2__::func_478(uLocal_37[__LIB_4__::func_221(iLocal_535)], Global_35, "VICTIMIZED_REACT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
			break;
		case 1:
			switch (iParam0)
			{
				case 1:
					__LIB_2__::func_478(uLocal_37[__LIB_4__::func_221(iLocal_535)], Global_35, "DEFUSE_RESPONSE", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
					break;
				case 2:
					__LIB_2__::func_478(uLocal_37[__LIB_4__::func_221(iLocal_535)], Global_35, "VICTIMIZED_REACT", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 1:
					__LIB_2__::func_478(uLocal_37[__LIB_4__::func_221(iLocal_535)], Global_35, "GENERIC_INSULT_MED_NEUTRAL", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
					break;
				case 2:
					__LIB_2__::func_478(uLocal_37[__LIB_4__::func_221(iLocal_535)], Global_35, "SORRY_TO_HEAR_THAT", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
					break;
			}
			break;
	}
	return "";
}

char* func_512(int iParam0)
{
	switch (iLocal_35)
	{
		case 0:
			__LIB_2__::func_478(uLocal_37[__LIB_4__::func_221(iLocal_535)], Global_35, "SHAME_ON_YOU", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
			break;
		case 1:
			switch (iParam0)
			{
				case 1:
					__LIB_2__::func_478(uLocal_37[__LIB_4__::func_221(iLocal_535)], Global_35, "GENERIC_INSULT_MED_MALE", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
					break;
				case 2:
					__LIB_2__::func_478(uLocal_37[__LIB_4__::func_221(iLocal_535)], Global_35, "GENERIC_CURSE_MED", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 1:
					__LIB_2__::func_478(uLocal_37[__LIB_4__::func_221(iLocal_535)], Global_35, "TEASE_RESPONSE", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
					break;
				case 2:
					__LIB_2__::func_478(uLocal_37[__LIB_4__::func_221(iLocal_535)], Global_35, "PLAYER_STARING", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
					break;
			}
			break;
	}
	return "";
}

var func_513(char[4] cParam0)
{
	char[] cVar0[8];
	char[] cVar1[8];
	int iVar2;
	StringCopy(&cVar0, "PISS", 8);
	switch (__LIB_0__::func_12())
	{
		case 5:
			StringCopy(&cVar1, "NBX", 8);
			break;
	}
	switch (iLocal_35)
	{
		case 0:
			iVar2 = 1;
			break;
		case 1:
			iVar2 = 2;
			break;
		case 2:
			iVar2 = 3;
			break;
	}
	return __LIB_3__::func_394(&cVar0, &cVar1, cParam0, iVar2);
}

