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
	struct<52> Local_15[8];
	struct<21> Local_432[8];
	int iLocal_601 = 0;
	int iLocal_602 = 0;
	int iLocal_603 = 0;
	int iLocal_604 = 0;
	var uLocal_605 = 0;
	int iLocal_606 = 0;
	int iLocal_607 = 0;
	var uLocal_608 = 0;
	int iLocal_609 = 0;
	int iLocal_610 = 0;
	int iLocal_611 = 0;
	int iLocal_612 = 0;
	int iLocal_613 = 0;
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	bool bLocal_616 = false;
	bool bLocal_617 = false;
	bool bLocal_618 = false;
	bool bLocal_619 = false;
	float fLocal_620 = 0f;
	float fLocal_621 = 0f;
	int iLocal_622[4] = { 0, 0, 0, 0 };
	vector3 vLocal_627[22] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_694 = 0f;
	float fLocal_695 = 0f;
	vector3 vLocal_696 = { 0f, 0f, 0f };
	var uLocal_699 = 2;
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
	int iLocal_716 = 0;
	var uLocal_717 = 0;
	struct<1110> Local_718 = { 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 45, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 3, -1, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, -1, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, -1, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	int iLocal_1836 = 0;
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
	var uLocal_1847 = -1;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 1097859072;
	var uLocal_1857 = 1000;
	var uLocal_1858 = 1067450368;
	var uLocal_1859 = 5000;
	var uLocal_1860 = 42;
	var uLocal_1861 = 1103626240;
	var uLocal_1862 = 1077936128;
	var uLocal_1863 = 1106247680;
	var uLocal_1864 = 1103101952;
	var uLocal_1865 = 1097859072;
	var uLocal_1866 = 1103626240;
	int iLocal_1867 = 0;
	int iLocal_1868 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_603 = -1;
	iLocal_604 = -1;
	iLocal_606 = -1;
	iLocal_607 = -1;
	iLocal_610 = -1;
	iLocal_614 = -1;
	fLocal_620 = 0f;
	fLocal_621 = 0f;
	if (__LIB_0__::func_34(vScriptParam_0.x) || vScriptParam_0.x == 14)
	{
		Local_718 = vScriptParam_0.x;
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("TRAIN_AMB_BOX01"), true);
		__LIB_1__::func_402(&uLocal_1839, 1);
		__LIB_1__::func_401(&uLocal_1839, 1);
		__LIB_2__::func_828(&uLocal_1839, 1);
		__LIB_1__::func_404(&uLocal_1839, 1);
		__LIB_1__::func_406(&uLocal_1839, 1);
		__LIB_1__::func_398(&uLocal_1839, 1);
		__LIB_10__::func_590(&uLocal_1839, 1);
		__LIB_1__::func_393(&uLocal_1839, 1);
		__LIB_2__::func_507(&uLocal_1839, 0);
		if (__LIB_0__::func_27(Global_1392581.f_3, 8))
		{
			func_12(&iLocal_716, 1, 1);
		}
		if (vScriptParam_0.x != 14 && __LIB_10__::func_35(vScriptParam_0.x, 65536))
		{
			func_14(&uLocal_717, -2147483648);
		}
		__LIB_0__::func_11();
		iLocal_611 = __LIB_0__::func_645(joaat("JUMPS_FROM_HORSE_TO"), joaat("TRAIN"));
	}
	if (Local_718 == 14)
	{
		Local_718.f_1[0 /*22*/] = vScriptParam_0.z;
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_616 = true;
		bLocal_617 = __LIB_2__::func_108(PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP());
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_616, 1859, bLocal_618);
		if (__LIB_0__::func_58())
		{
			func_18();
		}
		__LIB_0__::func_11();
		if (func_22(&vScriptParam_0))
		{
			func_23(&iLocal_14, 5);
		}
		if ((MISC::GET_FRAME_COUNT() % 10) == 0)
		{
			fLocal_695 = func_24();
		}
		func_12(&iLocal_716, 128, 0);
		iLocal_607 = -1;
		func_12(&iLocal_716, 268435456, 0);
		func_25(&Local_718, &uLocal_717, iLocal_603);
		func_26(iLocal_603, &iLocal_716);
		if (func_27(&Local_718, &iLocal_716, iLocal_603))
		{
			bLocal_618 = true;
			bLocal_616 = true;
		}
		if (iLocal_14 != 5 && Local_718 != 14)
		{
			func_28();
		}
		func_29();
		switch (iLocal_14)
		{
			case 0:
				if (!ENTITY::DOES_ENTITY_EXIST(Local_718.f_1[0 /*22*/]))
				{
					if (Local_718 == 14)
					{
						Local_718.f_1[0 /*22*/] = vScriptParam_0.z;
					}
					else
					{
						Local_718.f_1[0 /*22*/] = __LIB_13__::func_707(Local_718);
					}
				}
				else if (VEHICLE::_0xBD3C4A2ED509205E(Local_718.f_1[0 /*22*/]))
				{
					func_14(&uLocal_717, 536870912);
					__LIB_17__::func_507(ENTITY::GET_ENTITY_COORDS(Local_718.f_1[0 /*22*/], true, false), 225f, 0);
					func_32(Local_718, 1, 0, 0);
					func_33(&Local_718, &(Local_718.f_1102));
					__LIB_0__::func_7(&(Global_40.f_8863[87]), 4);
					func_35();
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("LEVDES_CMPTRAINROB_2"), true);
					func_36(&Local_718);
					func_37(&Local_718);
					func_38(&Local_718);
					func_39(&uLocal_699);
					iLocal_1836 = 0;
					func_23(&iLocal_14, 1);
				}
				break;
			case 1:
				if (func_40(&Local_718, &uLocal_699, &iLocal_1836))
				{
					func_41(&Local_718);
					BUILTIN::SETTIMERA(0);
					func_23(&iLocal_14, 2);
				}
				break;
			case 2:
				if (!__LIB_0__::func_27(Global_1392581.f_3, 8))
				{
					if (func_42(&Local_718))
					{
						if (__LIB_13__::func_666(iLocal_716, 1))
						{
							func_44();
							func_45(&Local_718, iLocal_603);
						}
						func_23(&iLocal_14, 3);
					}
				}
				break;
			case 3:
				if (func_46(&Local_718, 125f))
				{
					func_47();
					func_12(&iLocal_716, 64, func_48());
					func_49();
					if (__LIB_13__::func_666(iLocal_716, 64))
					{
						if (func_44())
						{
							func_12(&iLocal_716, 268435456, 1);
						}
						func_50(iLocal_603);
					}
					else
					{
						iLocal_603 = -1;
						func_12(&iLocal_716, 64, 0);
						func_12(&iLocal_716, 8, 0);
						EVENT::REMOVE_SHOCKING_EVENT(iLocal_610);
					}
					if (func_51(&Local_718, iLocal_603))
					{
						func_52(&Local_718, iLocal_603);
					}
					func_53();
					func_54();
					func_42(&Local_718);
					func_55(&Local_718, 1);
					func_56();
					func_57();
					func_58();
					func_59();
					func_60();
					func_61(1);
					func_62();
					if (func_63())
					{
						func_64();
						func_65(&iLocal_609);
						func_23(&iLocal_14, 4);
					}
				}
				break;
			case 4:
				if (!__LIB_10__::func_35(Local_718, 32768))
				{
					__LIB_0__::func_714(Local_718, 32768);
					__LIB_0__::func_714(Local_718, 65536);
				}
				func_47();
				PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
				func_67(&iLocal_716, &vLocal_627);
				func_68(&Local_718, &vLocal_627, &iLocal_716, &uLocal_717, iLocal_603, &uLocal_605, &iLocal_609);
				func_59();
				func_60();
				func_61(0);
				func_69(&iLocal_716);
				func_58();
				func_49();
				func_70();
				if (func_44())
				{
					if (!__LIB_0__::func_27(Local_718.f_1[iLocal_603 /*22*/].f_4, 2))
					{
						__LIB_0__::func_7(&(Local_718.f_1[iLocal_603 /*22*/].f_4), 2);
					}
					func_12(&iLocal_716, 268435456, 1);
				}
				if (func_51(&Local_718, iLocal_603))
				{
					func_52(&Local_718, iLocal_603);
				}
				func_53();
				func_71(iLocal_603);
				func_50(iLocal_603);
				func_54();
				func_72();
				func_42(&Local_718);
				func_55(&Local_718, 0);
				func_62();
				func_73();
				break;
			case 5:
				func_18();
				break;
		}
		BUILTIN::WAIT(0);
	}
}

void func_12(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!__LIB_0__::func_27(*uParam0, iParam1))
		{
			__LIB_0__::func_7(uParam0, iParam1);
		}
	}
	else if (__LIB_0__::func_27(*uParam0, iParam1))
	{
		__LIB_0__::func_8(uParam0, iParam1);
	}
}

void func_14(var uParam0, int iParam1)
{
	if (!__LIB_8__::func_747(uParam0, iParam1))
	{
		__LIB_0__::func_7(uParam0, iParam1);
	}
}

void func_18()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar0 = ENTITY::DOES_ENTITY_EXIST(Local_718.f_1[0 /*22*/]);
	__LIB_0__::func_8(&(Global_1392581.f_3), 4);
	__LIB_0__::func_8(&(Global_1392581.f_3), 16);
	if (ITEMSET::IS_ITEMSET_VALID(iLocal_602))
	{
		ITEMSET::DESTROY_ITEMSET(iLocal_602);
	}
	if (__LIB_8__::func_747(&uLocal_717, 134217728))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	if (!bLocal_618)
	{
		if (__LIB_10__::func_35(Local_718, 16))
		{
			func_78();
			__LIB_17__::func_513(Local_718);
			__LIB_8__::func_981(Local_718, 32768);
		}
	}
	Global_1430221.f_2 = 0;
	if (!bLocal_618)
	{
		func_32(Local_718, 0, 0, 0);
		if (__LIB_10__::func_35(Local_718, 65536))
		{
			__LIB_1__::func_148(&(Global_1392581.f_4[Local_718 /*3*/]));
		}
	}
	__LIB_0__::func_769();
	if (__LIB_13__::func_666(iLocal_716, 536870912))
	{
		func_83(1);
		func_12(&iLocal_716, 536870912, 0);
	}
	__LIB_0__::func_8(&(Global_40.f_8863[87]), 4);
	iVar2 = 0;
	while (iVar2 < Local_718.f_1099)
	{
		iVar3 = Local_718.f_310[iVar2 /*14*/];
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar3, false))
			{
				if (__LIB_0__::func_27(Local_718.f_310[iVar2 /*14*/].f_7, 32))
				{
					PED::_0x3088634CF8C819CF(iVar3);
				}
				PED::SET_PED_FLEE_ATTRIBUTES(iVar3, 32768, false);
				if (Local_718.f_310[iVar2 /*14*/].f_8 == Local_718.f_1102)
				{
					PED::SET_PED_KEEP_TASK(iVar3, true);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar3);
				}
				else if (((bLocal_617 || bLocal_618) || !bVar0) && (Local_718.f_310[iVar2 /*14*/].f_3 != 0 || !bVar0))
				{
					__LIB_2__::func_426(&iVar3);
				}
				else
				{
					PED::SET_PED_KEEP_TASK(iVar3, true);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar3);
					PED::_0x39A2FC5AF55A52B1(iVar3, 5000);
				}
			}
		}
		iVar2++;
	}
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (PED::_0x91A5F9CBEBB9D936(Local_718.f_1[iVar1 /*22*/].f_5))
		{
			iVar4 = PED::_0x6F46F8ACB44C4FC1(Local_718.f_1[iVar1 /*22*/].f_5);
			POPULATION::_0xA1CFB35069D23C23(iVar4);
			__LIB_0__::func_172(iVar4);
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Local_718.f_1[iVar1 /*22*/].f_5, false);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(Local_718.f_1[iVar1 /*22*/].f_1))
		{
			__LIB_0__::func_172(Local_718.f_1[iVar1 /*22*/].f_1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_718.f_1[iVar1 /*22*/]))
		{
			if (bVar0)
			{
				VEHICLE::_0xD4907EF4334C7602(Local_718.f_1[iVar1 /*22*/], 0);
				VEHICLE::_0x68830738A6BFB370(Local_718.f_1[iVar1 /*22*/], 0);
			}
			ENTITY::_0x119A5714578F4E05(Local_718.f_1[iVar1 /*22*/], 0);
		}
		iVar5 = PED::_0x5C16855277819BBF();
		if (iVar5 > 0)
		{
			iVar6 = (func_86(&Local_718, iVar1) - Local_718.f_1[iVar1 /*22*/].f_9);
			if (iVar6 > 0)
			{
				if (iVar6 > iVar5)
				{
					iVar6 = iVar5;
				}
				PED::_0x7D4E70A67A651C71(iVar6);
			}
		}
		iVar1++;
	}
	if (!bLocal_618)
	{
		if (bVar0)
		{
			VEHICLE::_0x4182C037AA1F0091(Local_718.f_1[0 /*22*/], 1);
			VEHICLE::_0xA72B1BF3857B94D7(Local_718.f_1[0 /*22*/], 0);
		}
	}
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("TRAIN_AMB_BOX01"), true);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("LEVDES_CMPTRAINROB_2"), false);
	iVar7 = 0;
	while (iVar7 < 4)
	{
		__LIB_0__::func_172(iLocal_622[iVar7]);
		iVar7++;
	}
	if (ITEMSET::IS_ITEMSET_VALID(iLocal_601))
	{
		ITEMSET::DESTROY_ITEMSET(iLocal_601);
	}
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_610);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1868);
	if (__LIB_0__::func_474(162))
	{
		__LIB_2__::func_355(162);
	}
	if (!bLocal_618)
	{
		LAW::_0x710448D44A64C213(1);
		if (LAW::_0xAD401C63158ACBAA(PLAYER::PLAYER_ID()))
		{
			LAW::_0x987BE590FB9D41E5(0);
			LAW::_0xDCF12B89624AAC96(0);
		}
	}
	__LIB_11__::func_10(2, 0, 0);
	__LIB_11__::func_10(1, 0, 0);
	Global_1392581.f_44 = 0;
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_22(int iParam0)
{
	float fVar0;
	if (__LIB_8__::func_747(&uLocal_717, 536870912))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_718.f_1[0 /*22*/]))
		{
			return true;
		}
	}
	if (__LIB_0__::func_296(0, 0, 1) && __LIB_0__::func_298(0) != Global_1392581.f_1)
	{
		return true;
	}
	else if (*iParam0 == 14)
	{
		return false;
	}
	if (!__LIB_0__::func_34(*iParam0))
	{
		return true;
	}
	if (!VEHICLE::_0x0516FAE561276EFC(Global_1425371[*iParam0 /*373*/].f_1))
	{
		return true;
	}
	fVar0 = 300f;
	if (__LIB_13__::func_666(iLocal_716, 65536))
	{
		if (!func_93(&Local_718) || (Local_718.f_1099 - Local_718.f_1101) < (Local_718.f_1099 / 2))
		{
			fVar0 = 100f;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_718.f_1[0 /*22*/]) || __LIB_10__::func_35(*iParam0, 8192))
	{
		if (!func_46(&Local_718, fVar0))
		{
			return true;
		}
	}
	else if (func_94(*iParam0, fVar0, 0))
	{
		return true;
	}
	return false;
}

void func_23(int iParam0, int iParam1)
{
	if (iParam1 != *iParam0)
	{
		*iParam0 = iParam1;
	}
}

float func_24()
{
	var uVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar8;
	float fVar11;
	if (!ENTITY::DOES_ENTITY_EXIST(Local_718.f_1[0 /*22*/]))
	{
		return 9999f;
	}
	if (VEHICLE::_0xDE8C5B9F65017FA1(Local_718.f_1[0 /*22*/]) <= 0)
	{
		return 9999f;
	}
	uVar0 = VEHICLE::_0xAF787E081AC4A8EE(Local_718.f_1[0 /*22*/]);
	iVar1 = VEHICLE::_0x86FA6D8B48667D75(Local_718.f_1[0 /*22*/]);
	iVar2 = VEHICLE::_0x1180A2974D251B7B(Local_718.f_1[0 /*22*/]);
	fVar3 = 9999f;
	fVar4 = 9999f;
	if (iVar1 >= 0)
	{
		vVar5 = { VEHICLE::_0xBA958F68031DDBFC(uVar0, iVar1) };
		if (func_95(vVar5, 500f, 1))
		{
			fVar3 = __LIB_0__::func_94(Local_718.f_1[0 /*22*/], vVar5, 1);
		}
	}
	if (iVar2 >= 0)
	{
		vVar8 = { VEHICLE::_0xBA958F68031DDBFC(uVar0, iVar2) };
		if (func_95(vVar8, 500f, 1))
		{
			fVar4 = __LIB_0__::func_94(Local_718.f_1[0 /*22*/], vVar8, 1);
		}
	}
	if (fVar4 < fVar3)
	{
		fVar11 = fVar4;
		vLocal_696 = { vVar8 };
	}
	else
	{
		fVar11 = fVar3;
		vLocal_696 = { vVar5 };
	}
	return fVar11;
}

void func_25(int iParam0, var uParam1, int iParam2)
{
	bool bVar0;
	if ((MISC::GET_FRAME_COUNT() % 60) != 0 || __LIB_8__::func_747(uParam1, 268435456))
	{
		return;
	}
	if (func_97())
	{
		if (!__LIB_8__::func_747(uParam1, 1073741824 /* Float: 2f */))
		{
			func_14(uParam1, 1073741824 /* Float: 2f */);
			bVar0 = true;
		}
	}
	else if (__LIB_8__::func_747(uParam1, 1073741824 /* Float: 2f */))
	{
		func_98(uParam1, 1073741824 /* Float: 2f */);
		bVar0 = true;
	}
	if (bVar0)
	{
		func_45(iParam0, iParam2);
	}
}

void func_26(int iParam0, var uParam1)
{
	if (iParam0 > -1 && TASK::_DOES_SCENARIO_POINT_EXIST(TASK::_0xD04241BBF6D03A5E(Global_35)))
	{
		func_99(uParam1);
	}
}

bool func_27(int iParam0, var uParam1, int iParam2)
{
	if (!__LIB_13__::func_666(*uParam1, 1))
	{
		if (__LIB_0__::func_27(Global_1392581.f_3, 8))
		{
			func_12(uParam1, 1, 1);
			return true;
		}
	}
	else if (!__LIB_0__::func_27(Global_1392581.f_3, 8))
	{
		if (!__LIB_13__::func_666(*uParam1, 64))
		{
			func_12(uParam1, 1, 0);
		}
		if (!__LIB_13__::func_666(*uParam1, -2147483648))
		{
			func_45(iParam0, iParam2);
			func_12(uParam1, -2147483648, 1);
		}
	}
	return false;
}

void func_28()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = (MISC::GET_FRAME_COUNT() % Local_718.f_1098);
	if ((iVar0 >= 0 && iVar0 < Local_718.f_1098) && !ENTITY::DOES_ENTITY_EXIST(Local_718.f_1[iVar0 /*22*/]))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Local_718.f_1105))
		{
			VOLUME::_DELETE_VOLUME(Local_718.f_1105);
		}
		iVar0 = 1;
		while (iVar0 <= 13)
		{
			if (VOLUME::_DOES_VOLUME_EXIST(Local_718.f_1[iVar0 /*22*/].f_1))
			{
				VOLUME::_DELETE_VOLUME(Local_718.f_1[iVar0 /*22*/].f_1);
			}
			if (VOLUME::_DOES_VOLUME_EXIST(Local_718.f_1[iVar0 /*22*/].f_2))
			{
				VOLUME::_DELETE_VOLUME(Local_718.f_1[iVar0 /*22*/].f_2);
			}
			Local_718.f_1[iVar0 /*22*/].f_8 = 0;
			Local_718.f_1[iVar0 /*22*/].f_3 = 0;
			iVar1 = 0;
			while (iVar1 < 8)
			{
				Local_718.f_1[iVar0 /*22*/].f_11[iVar1] = 0;
				iVar1++;
			}
			iVar0++;
		}
		iVar2 = 0;
		while (iVar2 < 45)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_718.f_310[iVar2 /*14*/]))
			{
				PED::SET_PED_KEEP_TASK(Local_718.f_310[iVar2 /*14*/], true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_718.f_310[iVar2 /*14*/]));
				__LIB_0__::func_8(&(Local_718.f_310[iVar2 /*14*/].f_7), 16);
				Local_718.f_310[iVar2 /*14*/].f_4 = 0;
				Local_718.f_310[iVar2 /*14*/].f_6 = 0;
			}
			iVar2++;
		}
		iVar3 = 0;
		while (iVar3 < 4)
		{
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_622[iVar3]))
			{
				VOLUME::_DELETE_VOLUME(iLocal_622[iVar3]);
			}
			iVar3++;
		}
		iLocal_1836 = 0;
		Local_718.f_1099 = 0;
		func_23(&iLocal_14, 0);
	}
}

void func_29()
{
	if (!__LIB_8__::func_747(&uLocal_717, 268435456))
	{
		if (func_100() && !func_46(&Local_718, 100f))
		{
			func_14(&uLocal_717, 268435456);
		}
	}
	else if (!func_100() || func_46(&Local_718, 75f))
	{
		func_98(&uLocal_717, 268435456);
	}
}

void func_32(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_0__::func_34(iVar0))
		{
			if (iVar0 != iParam0)
			{
				if (bParam1)
				{
					__LIB_0__::func_714(iVar0, 2);
					if (bParam3)
					{
						if (VEHICLE::_0xC29996A337BDD099(Global_1425371[iVar0 /*373*/].f_1))
						{
							VEHICLE::_0x0D5FDF0D36FA10CD(Global_1425371[iVar0 /*373*/].f_1);
						}
					}
				}
				else
				{
					__LIB_8__::func_981(iVar0, 2);
				}
			}
			else
			{
				__LIB_8__::func_981(iVar0, 2);
				if (VEHICLE::_0xC29996A337BDD099(Global_1425371[iVar0 /*373*/].f_1))
				{
					if (bParam2)
					{
						VEHICLE::_0x718EB706B6E998A0(Global_1425371[iVar0 /*373*/].f_1);
					}
					else
					{
						VEHICLE::_0xE682002DB1F30669(Global_1425371[iVar0 /*373*/].f_1);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_33(int iParam0, var uParam1)
{
	var uVar0[14];
	int iVar15;
	uVar0[0] = iParam0->f_1[0 /*22*/];
	func_103(iParam0, 0);
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_1[0 /*22*/].f_1))
	{
		func_104(&(iParam0->f_1[0 /*22*/]), &(iParam0->f_1[0 /*22*/].f_1), 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 0, 0, 0, 0);
	}
	iParam0->f_1098 = func_105(&uVar0);
	iVar15 = 1;
	while (iVar15 <= 13)
	{
		func_106(iParam0, iVar15);
		if (ENTITY::DOES_ENTITY_EXIST(uVar0[iVar15]))
		{
			iParam0->f_1[iVar15 /*22*/] = uVar0[iVar15];
			func_103(iParam0, iVar15);
			if (iParam0->f_1[iVar15 /*22*/].f_6 == 3)
			{
				*uParam1 = iVar15;
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_1[iVar15 /*22*/].f_1))
			{
				func_104(&(iParam0->f_1[iVar15 /*22*/]), &(iParam0->f_1[iVar15 /*22*/].f_1), iVar15, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 0, 0, 0, 0);
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_1[iVar15 /*22*/].f_2))
			{
				func_104(&(iParam0->f_1[iVar15 /*22*/]), &(iParam0->f_1[iVar15 /*22*/].f_2), iVar15, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 0, 0, 0);
			}
			if (iParam0->f_1[iVar15 /*22*/].f_6 == 3)
			{
				func_104(&(iParam0->f_1[iVar15 /*22*/]), &(iParam0->f_1105), iVar15, 14f, 5f, 15f, 0, -4f, 1, "NOCABOOSEJUMP");
			}
			if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar15]))
			{
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1[iVar15 /*22*/]))
			{
			}
		}
		iVar15++;
	}
}

void func_35()
{
	if (iLocal_1868 == 0)
	{
		PED::ADD_RELATIONSHIP_GROUP("amb_train_guards", &iLocal_1868);
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_1868, joaat("REL_GANG_LEMOYNE_RAIDERS"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("REL_GANG_LEMOYNE_RAIDERS"), iLocal_1868);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_1868, joaat("REL_GANG_DUTCHS"));
}

void func_36(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	if (func_93(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < iParam0->f_1098)
		{
			if (func_51(iParam0, iVar1))
			{
				if (iVar0 >= 3)
				{
				}
				else
				{
					iParam0->f_941[iVar0 /*52*/] = iVar1;
					iVar0++;
					iVar1++;
				}
				iVar0 = iVar0;
				while (iVar0 <= 2)
				{
					iParam0->f_941[iVar0 /*52*/] = -1;
					iVar0++;
				}
			}
		}
	}
}

void func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (func_93(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam0->f_941[iVar0 /*52*/] >= 0)
			{
				iVar1 = func_107();
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
				switch (iVar2)
				{
					case 3:
						iParam0->f_941[iVar0 /*52*/].f_3[3 /*12*/].f_7 = iVar1;
						iParam0->f_941[iVar0 /*52*/].f_3[3 /*12*/] = { 1.51f, -0.77f, 1.77f };
						iParam0->f_941[iVar0 /*52*/].f_3[3 /*12*/].f_3 = 92f;
						__LIB_1__::func_581(&(iParam0->f_941[iVar0 /*52*/].f_3[3 /*12*/].f_11), 11);
					case 2:
						iParam0->f_941[iVar0 /*52*/].f_3[2 /*12*/].f_7 = iVar1;
						iParam0->f_941[iVar0 /*52*/].f_3[2 /*12*/] = { 1.51f, -0.69f, 1.77f };
						iParam0->f_941[iVar0 /*52*/].f_3[2 /*12*/].f_3 = 92f;
						__LIB_1__::func_581(&(iParam0->f_941[iVar0 /*52*/].f_3[2 /*12*/].f_11), 11);
					case 1:
						iParam0->f_941[iVar0 /*52*/].f_3[1 /*12*/].f_7 = iVar1;
						iParam0->f_941[iVar0 /*52*/].f_3[1 /*12*/] = { 1.54f, -0.29f, 1.77f };
						iParam0->f_941[iVar0 /*52*/].f_3[1 /*12*/].f_3 = 92f;
						__LIB_1__::func_581(&(iParam0->f_941[iVar0 /*52*/].f_3[1 /*12*/].f_11), 11);
						break;
				}
			}
			iVar0++;
		}
	}
}

void func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = func_109(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar2 = func_110(iParam0, (iVar0 - 1), 0);
	iParam0->f_1[(iVar0 - 1) /*22*/].f_5 = func_111(iVar2);
	iVar1 = func_112(iParam0);
	if (iVar1 == -1 || iVar1 == iVar0)
	{
		return;
	}
	if (iVar1 + 1 >= iParam0->f_1098)
	{
		return;
	}
	if (iParam0->f_1[iVar1 + 1 /*22*/].f_6 != 3)
	{
		iVar2 = func_110(iParam0, iVar1 + 1, 1);
		iParam0->f_1[iVar1 + 1 /*22*/].f_5 = func_111(iVar2);
	}
}

void func_39(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		StringCopy(uParam0[iVar0 /*8*/], "", 64);
		iVar0++;
	}
}

bool func_40(int iParam0, var uParam1, int iParam2)
{
	switch (*iParam2)
	{
		case 0:
			HUD::_TEXT_DATABASE_REQUEST("TNRB");
			func_113(iParam0);
			func_114(uParam1);
			func_115();
			*iParam2 = 1;
			break;
		case 1:
			if (!HUD::_TEXT_DATABASE_HAS_LOADED("TNRB"))
			{
				return false;
			}
			if (!func_116(iParam0))
			{
				return false;
			}
			if (!func_115())
			{
				return false;
			}
			*iParam2 = 2;
			return true;
		case 2:
			return true;
	}
	return false;
}

void func_41(int iParam0)
{
	int iVar0;
	if (func_93(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam0->f_941[iVar0 /*52*/] >= 0)
			{
				__LIB_4__::func_375(0f, 0f, 0f, &(iParam0->f_941[iVar0 /*52*/].f_3), 0, 0, 0, -1, 0);
				func_118(iParam0, iVar0);
			}
			iVar0++;
		}
	}
}

bool func_42(int iParam0)
{
	int iVar0;
	if (!__LIB_8__::func_747(&uLocal_717, -2147483648) || iParam0->f_1103 == 0)
	{
		if (iParam0->f_1103 != 1)
		{
			func_119(iParam0, iParam0->f_1103);
		}
		else
		{
			func_120(iParam0, iParam0->f_1103, 1);
		}
	}
	else
	{
		func_120(iParam0, iParam0->f_1103, 1);
	}
	iParam0->f_1103++;
	if (iParam0->f_1103 >= iParam0->f_1098)
	{
		iParam0->f_1103 = 0;
		if (__LIB_0__::func_27(iParam0->f_1[iParam0->f_1103 /*22*/].f_4, 4))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_44()
{
	bool bVar0;
	var uVar1;
	int iVar3;
	vector3 vVar4;
	bool bVar7;
	float fVar8;
	int iVar9;
	if (iLocal_603 >= 0)
	{
		if (!__LIB_0__::func_27(Local_718.f_1[iLocal_603 /*22*/].f_4, 2))
		{
			if (PED::IS_PED_SHOOTING(Global_35))
			{
				if (!__LIB_13__::func_666(iLocal_716, 4096) && !__LIB_13__::func_666(iLocal_716, 1048576))
				{
					func_64();
				}
				__LIB_0__::func_7(&(Local_718.f_1[iLocal_603 /*22*/].f_4), 2);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 5) == 0)
	{
		if (!__LIB_13__::func_666(iLocal_716, 524288))
		{
			bVar0 = false;
			if (iLocal_610 >= 0)
			{
				uVar1 = 1;
				if (PED::_0xF4860514AD354226(iLocal_610, Global_36, 40f, &uVar1) > 0)
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				fLocal_620 = (fLocal_620 + (5f * BUILTIN::TIMESTEP()));
				if (fLocal_620 >= 10f)
				{
					LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), joaat("CRIME_DISTURBANCE"), 0, 0, 0, 0, 0, 0, 0);
					func_12(&iLocal_716, 524288, 1);
				}
			}
			else
			{
				fLocal_620 = (fLocal_620 - (5f * BUILTIN::TIMESTEP()));
				if (fLocal_620 < 0f)
				{
					fLocal_620 = 0f;
				}
			}
		}
		iVar3 = 0;
		while (iVar3 < 14)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_718.f_1[iVar3 /*22*/]))
			{
				if (PED::IS_PED_ON_SPECIFIC_VEHICLE(Global_35, Local_718.f_1[iVar3 /*22*/]) || (VOLUME::_DOES_VOLUME_EXIST(Local_718.f_1[iVar3 /*22*/].f_1) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_718.f_1[iVar3 /*22*/].f_1, true, 0)))
				{
					vVar4 = { ENTITY::GET_ENTITY_COORDS(Local_718.f_1[iVar3 /*22*/], true, false) };
					func_12(&iLocal_716, 64, 1);
					fVar8 = (Global_36.f_2 - vVar4.z);
					if (fVar8 > 4f)
					{
						if (!__LIB_13__::func_666(iLocal_716, 8))
						{
							EVENT::REMOVE_SHOCKING_EVENT(iLocal_610);
							iLocal_610 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_SURPRISING"), Global_35, 0f, 30f, 40f, -1f, -1f, 180f, false, false, -1, -1);
							func_12(&iLocal_716, 8, 1);
						}
					}
					else if (__LIB_13__::func_666(iLocal_716, 8))
					{
						EVENT::REMOVE_SHOCKING_EVENT(iLocal_610);
						iLocal_610 = -1;
						func_12(&iLocal_716, 8, 0);
						EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_SURPRISING"), Global_35, 10f, 10f, 15f, -1f, -1f, 180f, false, false, -1, -1);
						bVar7 = true;
					}
					if (iVar3 != iLocal_603 || bVar7)
					{
						iLocal_604 = iLocal_603;
						iLocal_603 = iVar3;
						__LIB_0__::func_37(&(vLocal_627[1 /*3*/]));
						func_45(&Local_718, iLocal_603);
						if (iLocal_603 == 1)
						{
							func_45(&Local_718, 0);
						}
						iVar9 = 0;
						while (iVar9 < 8)
						{
							__LIB_2__::func_480(&(Local_15[iVar9 /*52*/]), 0, 0, 1, 0);
							iVar9++;
						}
						__LIB_1__::func_148(&(vLocal_627[11 /*3*/]));
						return true;
					}
					else
					{
						return false;
					}
				}
			}
			iVar3++;
		}
		if (iLocal_603 != -1)
		{
			func_12(&iLocal_716, 64, 0);
			func_12(&iLocal_716, 8, 0);
			iLocal_603 = -1;
			EVENT::REMOVE_SHOCKING_EVENT(iLocal_610);
			iLocal_610 = -1;
			__LIB_1__::func_148(&(vLocal_627[11 /*3*/]));
		}
	}
	return false;
}

void func_45(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (iParam1 < 0 || iParam1 >= iParam0->f_1098)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_1[iParam1 /*22*/].f_8)
	{
		iVar1 = iParam0->f_1[iParam1 /*22*/].f_11[iVar0];
		if (iVar1 >= 0)
		{
			__LIB_0__::func_7(&(iParam0->f_310[iVar1 /*14*/].f_7), 2048);
		}
		iVar0++;
	}
}

bool func_46(int iParam0, float fParam1)
{
	if (!__LIB_17__::func_505(*iParam0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_1[0 /*22*/]) && *iParam0 != 14)
		{
			iParam0->f_1[0 /*22*/] = __LIB_13__::func_707(*iParam0);
		}
		return __LIB_17__::func_508(*iParam0, &(iParam0->f_1[0 /*22*/]), fParam1, iParam0->f_1102);
	}
	return false;
}

void func_47()
{
	float fVar0;
	bLocal_619 = false;
	if (__LIB_13__::func_666(iLocal_716, 1))
	{
		__LIB_0__::func_37(&(vLocal_627[17 /*3*/]));
		return;
	}
	if (ENTITY::GET_ENTITY_SPEED(Local_718.f_1[0 /*22*/]) <= 0.2f)
	{
		if (!__LIB_0__::func_75(&(vLocal_627[17 /*3*/])))
		{
			__LIB_1__::func_148(&(vLocal_627[17 /*3*/]));
		}
	}
	else
	{
		__LIB_0__::func_37(&(vLocal_627[17 /*3*/]));
		return;
	}
	if (func_126())
	{
		return;
	}
	if (__LIB_13__::func_666(iLocal_716, 16384))
	{
		fVar0 = 130f;
	}
	else
	{
		fVar0 = 15f;
	}
	if (!__LIB_1__::func_285(&(vLocal_627[17 /*3*/]), fVar0))
	{
		return;
	}
	bLocal_619 = true;
}

bool func_48()
{
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		return true;
	}
	return func_128(&Local_718, &Global_35);
}

void func_49()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_718.f_1[0 /*22*/]))
	{
		if (!__LIB_13__::func_666(iLocal_716, 16384))
		{
			if (func_129(&Local_718))
			{
				if (!__LIB_0__::func_75(&(vLocal_627[16 /*3*/])))
				{
					__LIB_1__::func_148(&(vLocal_627[16 /*3*/]));
				}
				if (__LIB_0__::func_75(&(vLocal_627[5 /*3*/])))
				{
					__LIB_0__::func_37(&(vLocal_627[5 /*3*/]));
				}
				func_12(&iLocal_716, 16384, 1);
			}
		}
		else if (!func_129(&Local_718))
		{
			if (!__LIB_0__::func_75(&(vLocal_627[5 /*3*/])))
			{
				__LIB_1__::func_148(&(vLocal_627[5 /*3*/]));
			}
			if (__LIB_0__::func_75(&(vLocal_627[16 /*3*/])))
			{
				__LIB_0__::func_37(&(vLocal_627[16 /*3*/]));
			}
			if (__LIB_1__::func_313(&(vLocal_627[5 /*3*/]), 5f))
			{
				func_12(&iLocal_716, 16384, 0);
			}
		}
	}
}

void func_50(int iParam0)
{
	int iVar0;
	vector3 vVar1[24];
	int iVar4;
	if (!__LIB_13__::func_666(iLocal_716, 8) && iParam0 > -1)
	{
		if (iParam0 != 0)
		{
			if ((__LIB_13__::func_666(iLocal_716, 4096) && func_131(iParam0)) && __LIB_13__::func_666(iLocal_716, 268435456))
			{
				iVar0 = func_132(iParam0);
				if (iVar0 != 0)
				{
					if (Local_718.f_1[iParam0 /*22*/].f_8 > 1)
					{
						StringCopy(&cVar1, func_133(1), 24);
					}
					else
					{
						StringCopy(&cVar1, func_133(0), 24);
					}
					func_65(&iLocal_609);
					__LIB_2__::func_478(iVar0, Global_35, &cVar1, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
			else if (!__LIB_0__::func_27(Local_718.f_1[iParam0 /*22*/].f_4, 2))
			{
				if (bLocal_619)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_613)
					{
						iVar4 = func_132(iParam0);
						if (iVar4 != 0)
						{
							func_65(&iLocal_609);
							__LIB_2__::func_478(iVar4, Global_35, func_135(__LIB_0__::func_27(Local_718.f_1[iParam0 /*22*/].f_4, 32)), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
							__LIB_0__::func_7(&(Local_718.f_1[iParam0 /*22*/].f_4), 32);
							iLocal_613 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 13000));
						}
					}
				}
			}
		}
	}
}

bool func_51(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_1[iParam1 /*22*/]))
	{
		return false;
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0->f_1[iParam1 /*22*/]) == joaat("PRIVATEBAGGAGE01X"))
	{
		return true;
	}
	return false;
}

void func_52(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	if (iParam1 < 0)
	{
		return;
	}
	if (!func_93(iParam0))
	{
		return;
	}
	iVar0 = -1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iParam0->f_941[iVar0 /*52*/] == iParam1)
		{
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar0 < 0)
	{
		return;
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_941[iVar0 /*52*/].f_1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_941[iVar0 /*52*/].f_3[0 /*12*/].f_8))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_1[iParam0->f_941[iVar0 /*52*/] /*22*/]))
		{
			return;
		}
		if (!PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(iParam0->f_1[iParam0->f_941[iVar0 /*52*/] /*22*/]))
		{
			return;
		}
		iParam0->f_941[iVar0 /*52*/].f_2 = PROPSET::_GET_VEHICLE_PROPSET(iParam0->f_1[iParam0->f_941[iVar0 /*52*/] /*22*/]);
		if (!PROPSET::_DOES_PROPSET_EXIST(iParam0->f_941[iVar0 /*52*/].f_2))
		{
			return;
		}
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0->f_1[iParam0->f_941[iVar0 /*52*/] /*22*/], iParam0->f_941[iVar0 /*52*/].f_3[0 /*12*/]) };
		func_137(iParam0->f_941[iVar0 /*52*/].f_2, func_136(), &(iParam0->f_941[iVar0 /*52*/].f_3[0 /*12*/].f_8), vVar1, -1082130432 /* Float: -1f */);
	}
	if (PROPSET::_DOES_PROPSET_EXIST(iParam0->f_941[iVar0 /*52*/].f_2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_941[iVar0 /*52*/].f_3[0 /*12*/].f_8))
		{
			iParam0->f_941[iVar0 /*52*/].f_1 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(iParam0->f_941[iVar0 /*52*/].f_3[0 /*12*/].f_8, joaat("RANSACK_SAFE"), func_138(0), 0f, 0, 0, 0);
		}
		else
		{
			iParam0->f_941[iVar0 /*52*/].f_1 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(iParam0->f_1[iParam0->f_941[iVar0 /*52*/] /*22*/], joaat("RANSACK_SAFE"), func_138(1), -90f, 0, 0, 0);
		}
	}
}

void func_53()
{
	if (__LIB_13__::func_666(iLocal_716, 64) && !__LIB_13__::func_666(iLocal_716, 8))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 275, true);
	}
}

void func_54()
{
	int iVar0;
	int iVar1;
	if (__LIB_13__::func_666(iLocal_716, 2097152))
	{
		iVar0 = 0;
		while (iVar0 < 14)
		{
			iVar1 = 0;
			while (iVar1 < Local_718.f_1[iVar0 /*22*/].f_8)
			{
				if (Local_718.f_310[Local_718.f_1[iVar0 /*22*/].f_11[iVar1] /*14*/].f_3 == 1)
				{
					func_139(&Local_718, iVar0, &vLocal_627, &uLocal_1839, &iLocal_1867, &iLocal_716, &uLocal_717, &iLocal_606, &(Local_15[iVar1 /*52*/]), &(Local_432[iVar1 /*21*/]), 1, 1);
				}
				iVar1++;
			}
			iVar0++;
		}
	}
}

void func_55(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	func_140(iParam0);
	if (func_141(&iLocal_716))
	{
		func_142(iParam0, iParam0->f_1104);
	}
	func_143(iParam0->f_1104, &bVar0, bParam1);
	if (iLocal_603 != -1)
	{
		if (iLocal_603 != 1)
		{
			if (iParam0->f_1104 != iLocal_603)
			{
				func_143(iLocal_603, &bVar0, bParam1);
			}
		}
		else if (iParam0->f_1104 != 0)
		{
			func_143(0, &bVar0, bParam1);
		}
	}
	else
	{
		iVar1 = -1;
		if (Local_718.f_1[0 /*22*/].f_11[0] >= 0 && !ENTITY::IS_ENTITY_DEAD(iParam0->f_310[Local_718.f_1[0 /*22*/].f_11[0] /*14*/]))
		{
			if (iParam0->f_310[Local_718.f_1[0 /*22*/].f_11[0] /*14*/].f_9 < 27f)
			{
				iVar1 = 0;
			}
		}
		if ((iVar1 < 0 && Local_718.f_1[iParam0->f_1102 /*22*/].f_11[0] >= 0) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_310[Local_718.f_1[iParam0->f_1102 /*22*/].f_11[0] /*14*/]))
		{
			if (iParam0->f_310[iParam0->f_1[iParam0->f_1102 /*22*/].f_11[0] /*14*/].f_9 < 27f)
			{
				iVar1 = iParam0->f_1102;
			}
		}
		if ((iVar1 >= 0 && iVar1 < iParam0->f_1098) && iParam0->f_1104 != iVar1)
		{
			func_143(iVar1, &bVar0, bParam1);
		}
	}
	if (__LIB_8__::func_747(&uLocal_717, 268435456))
	{
		if (!__LIB_0__::func_27(Local_718.f_1[iParam0->f_1104 /*22*/].f_4, 65536) && func_144(&Local_718, iParam0->f_1104))
		{
			func_145(&Local_718, iParam0->f_1104);
		}
	}
	else if (__LIB_0__::func_27(Local_718.f_1[iParam0->f_1104 /*22*/].f_4, 65536))
	{
		func_146(&Local_718, &uLocal_717, iParam0->f_1104);
	}
	iParam0->f_1104++;
	if (iParam0->f_1104 >= iParam0->f_1098)
	{
		iParam0->f_1104 = 0;
	}
	if (bVar0)
	{
		if (!__LIB_0__::func_75(&(vLocal_627[0 /*3*/])))
		{
			__LIB_1__::func_148(&(vLocal_627[0 /*3*/]));
		}
	}
	if (__LIB_1__::func_313(&(vLocal_627[0 /*3*/]), 0.5f))
	{
		func_147(iLocal_603);
	}
}

void func_56()
{
	int iVar0;
	int iVar1;
	if (VOLUME::_DOES_VOLUME_EXIST(Local_718.f_1105))
	{
		if (__LIB_1__::func_205(Global_35, Local_718.f_1105, 1, 0))
		{
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				iVar0 = 0;
				while (iVar0 <= 7)
				{
					iVar1 = Local_718.f_1[Local_718.f_1102 /*22*/].f_11[iVar0];
					if (iVar1 >= 0)
					{
						if (!PED::IS_PED_INJURED(Local_718.f_310[iVar1 /*14*/]))
						{
							PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
						}
					}
					iVar0++;
				}
			}
		}
	}
}

void func_57()
{
	int iVar0;
	vector3 vVar1;
	iVar0 = __LIB_0__::func_645(joaat("JUMPS_FROM_HORSE_TO"), joaat("TRAIN"));
	if (iLocal_603 >= 0)
	{
		if (iVar0 != iLocal_611)
		{
			iLocal_612 = MISC::GET_GAME_TIMER();
			iLocal_611 = iVar0;
			func_149(iLocal_603, 1);
			vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_718.f_1[iLocal_603 /*22*/], Global_36) };
			if (vVar1.y >= 7f)
			{
				if ((iLocal_603 - 1) >= 0)
				{
					func_149((iLocal_603 - 1), 0);
				}
			}
			else if (vVar1.y <= -7f)
			{
				if (iLocal_603 + 1 < 14)
				{
					func_149(iLocal_603 + 1, 0);
				}
			}
		}
	}
}

void func_58()
{
	if (!__LIB_0__::func_27(Local_718.f_1[0 /*22*/].f_4, 4096))
	{
		if (VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(Local_718.f_1[0 /*22*/]) == Global_35)
		{
			VEHICLE::_0x9F29999DFDF2AEB8(Local_718.f_1[0 /*22*/], 10f);
			__LIB_0__::func_7(&(Local_718.f_1[0 /*22*/].f_4), 4096);
		}
	}
	else if (VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(Local_718.f_1[0 /*22*/]) != Global_35)
	{
		__LIB_0__::func_8(&(Local_718.f_1[0 /*22*/].f_4), 4096);
	}
}

void func_59()
{
	if (__LIB_13__::func_666(iLocal_716, 64))
	{
		if (LAW::_0xA22C46F16359471C())
		{
			LAW::_0x710448D44A64C213(0);
		}
	}
	else if (!LAW::_0xA22C46F16359471C())
	{
		LAW::_0x710448D44A64C213(1);
	}
}

void func_60()
{
	if (bLocal_619)
	{
		if (!__LIB_13__::func_666(iLocal_716, 262144) && !__LIB_13__::func_666(iLocal_716, 1073741824 /* Float: 2f */))
		{
			if (!func_150())
			{
				return;
			}
			func_12(&iLocal_716, 262144, 1);
			__LIB_1__::func_148(&(vLocal_627[6 /*3*/]));
			fLocal_694 = MISC::GET_RANDOM_FLOAT_IN_RANGE(20f, 30f);
		}
	}
}

void func_61(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	char* sVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	if (__LIB_13__::func_666(iLocal_716, 2048))
	{
		return;
	}
	if (!__LIB_0__::func_75(&(vLocal_627[2 /*3*/])))
	{
		__LIB_1__::func_148(&(vLocal_627[2 /*3*/]));
	}
	if (__LIB_13__::func_666(iLocal_716, 32768))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_718.f_1[0 /*22*/], -1) != Global_35)
		{
			VEHICLE::SET_TRAIN_CRUISE_SPEED(Local_718.f_1[0 /*22*/], 0f);
		}
	}
	if (__LIB_13__::func_666(iLocal_716, 32768))
	{
		if (__LIB_2__::func_227(0, 1, Local_718.f_310[Local_718.f_1[0 /*22*/].f_11[0] /*14*/], 1))
		{
			if (!__LIB_0__::func_75(&(vLocal_627[21 /*3*/])))
			{
				__LIB_1__::func_148(&(vLocal_627[21 /*3*/]));
			}
			if (__LIB_1__::func_313(&(vLocal_627[21 /*3*/]), 8.5f))
			{
				if (iLocal_615 < 4)
				{
					__LIB_2__::func_478(Local_718.f_310[Local_718.f_1[0 /*22*/].f_11[0] /*14*/], Global_35, func_152(iLocal_615), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_615++;
				}
				else if (func_46(&Local_718, 50f) && __LIB_13__::func_666(iLocal_716, 2))
				{
					func_12(&iLocal_716, 2048, 1);
				}
			}
		}
	}
	if (__LIB_1__::func_313(&(vLocal_627[2 /*3*/]), 1.5f))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_718.f_1[0 /*22*/]))
		{
			if (!__LIB_13__::func_666(iLocal_716, 2048))
			{
				if (bParam0 || (!bParam0 && (!ENTITY::IS_ENTITY_DEAD(Local_718.f_310[Local_718.f_1[0 /*22*/].f_11[0] /*14*/]) || !ENTITY::DOES_ENTITY_EXIST(Local_718.f_310[Local_718.f_1[0 /*22*/].f_11[0] /*14*/]))))
				{
					if (!ITEMSET::IS_ITEMSET_VALID(iLocal_602))
					{
						iLocal_602 = ITEMSET::CREATE_ITEMSET(true);
					}
					bVar2 = false;
					if (ENTITY::GET_ENTITY_SPEED(Local_718.f_1[0 /*22*/]) <= 10f)
					{
						iVar3 = 3;
					}
					else
					{
						iVar3 = 4;
					}
					iVar1 = 0;
					while (iVar1 < iVar3)
					{
						if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_622[iVar1]))
						{
							switch (iVar1)
							{
								case 0:
									sVar4 = "TrainRob - volProbe0";
									fVar5 = 0f;
									fVar6 = 0f;
									fVar7 = 20f;
									fVar8 = 45f;
									fVar9 = 10f;
									break;
								case 1:
									sVar4 = "TrainRob - volProbe1";
									fVar5 = 20f;
									fVar6 = -3f;
									fVar7 = 20f;
									fVar8 = 45f;
									fVar9 = 10f;
									break;
								case 2:
									sVar4 = "TrainRob - volProbe2";
									fVar5 = -20f;
									fVar6 = 3f;
									fVar7 = 20f;
									fVar8 = 45f;
									fVar9 = 10f;
									break;
								case 3:
									sVar4 = "TrainRob - volProbefast";
									fVar5 = 0f;
									fVar6 = 0f;
									fVar7 = 32f;
									fVar8 = 50f;
									fVar9 = 14f;
									break;
							}
							iLocal_622[iVar1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(Local_718.f_1[0 /*22*/], true, false), ENTITY::GET_ENTITY_ROTATION(Local_718.f_1[0 /*22*/], 2), fVar9, fVar8, 8f, sVar4);
							PED::_0x7C00CFC48A782DC0(iLocal_622[iVar1], Local_718.f_1[0 /*22*/], fVar6, fVar7, 0f, 0f, 0f, fVar5, 2, 1);
						}
						ITEMSET::_CLEAR_ITEMSET(iLocal_602);
						ENTITY::_0x886171A12F400B89(iLocal_622[iVar1], iLocal_602, 2);
						iVar10 = 0;
						while (iVar10 < ITEMSET::GET_ITEMSET_SIZE(iLocal_602))
						{
							iVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar10, iLocal_602)));
							if (!__LIB_17__::func_506(iVar0) && Local_718.f_1[0 /*22*/] != iVar0)
							{
								if (ENTITY::_IS_ENTITY_ON_TRAIN_TRACK(iVar0))
								{
									if (iVar0 == VEHICLE::GET_LAST_DRIVEN_VEHICLE())
									{
										if (!__LIB_13__::func_666(iLocal_716, 2))
										{
											if (iLocal_615 > 1)
											{
												iLocal_615 = (iLocal_615 - 1);
											}
											func_12(&iLocal_716, 2, 1);
											if (__LIB_0__::func_75(&(vLocal_627[17 /*3*/])))
											{
												__LIB_1__::func_148(&(vLocal_627[17 /*3*/]));
											}
											if (__LIB_0__::func_75(&(vLocal_627[21 /*3*/])))
											{
												__LIB_1__::func_148(&(vLocal_627[21 /*3*/]));
											}
										}
									}
									bVar2 = true;
								}
								else
								{
									iVar10++;
								}
								iVar1++;
								if (bVar2)
								{
									if (!__LIB_13__::func_666(iLocal_716, 32768))
									{
										__LIB_2__::func_478(Local_718.f_310[Local_718.f_1[0 /*22*/].f_11[0] /*14*/], Global_35, func_152(iLocal_615), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
										iLocal_615++;
										PED::SET_PED_CONFIG_FLAG(Local_718.f_310[Local_718.f_1[0 /*22*/].f_11[0] /*14*/], 492, true);
										func_12(&iLocal_716, 32768, 1);
									}
								}
								else if (__LIB_13__::func_666(iLocal_716, 32768))
								{
									if (!__LIB_13__::func_666(iLocal_716, 1073741824 /* Float: 2f */))
									{
										__LIB_0__::func_37(&(vLocal_627[21 /*3*/]));
										iLocal_615 = 0;
										PED::SET_PED_CONFIG_FLAG(Local_718.f_310[Local_718.f_1[0 /*22*/].f_11[0] /*14*/], 492, false);
										func_12(&iLocal_716, 32768, 0);
										func_12(&iLocal_716, 2, 0);
										if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_718.f_1[0 /*22*/], -1) != Global_35)
										{
											VEHICLE::SET_TRAIN_CRUISE_SPEED(Local_718.f_1[0 /*22*/], __LIB_11__::func_127(Local_718));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_62()
{
	if (!__LIB_8__::func_747(&uLocal_717, 1073741824 /* Float: 2f */))
	{
		return;
	}
	if (__LIB_13__::func_666(iLocal_716, 1))
	{
		return;
	}
	if (Local_718 == 14 && !__LIB_13__::func_666(iLocal_716, 65536))
	{
		return;
	}
	if (func_155(&uLocal_717))
	{
		__LIB_1__::func_240(162, 0);
		func_14(&uLocal_717, 2);
	}
	if (__LIB_2__::func_410(25))
	{
		if (func_158(&Local_718, iLocal_603, &uLocal_717))
		{
			__LIB_1__::func_240(153, 0);
			func_14(&uLocal_717, 4);
		}
		if (func_159(&Local_718, &uLocal_717))
		{
			__LIB_1__::func_240(154, 0);
			func_14(&uLocal_717, 8);
		}
		if (func_160(&Local_718, iLocal_603, &iLocal_716, &uLocal_717))
		{
			__LIB_1__::func_240(160, 0);
			func_14(&uLocal_717, 16);
		}
		if (func_161(&Local_718, &iLocal_716, &uLocal_717))
		{
			__LIB_1__::func_240(155, 0);
			func_14(&uLocal_717, 32);
		}
		if (func_162(iLocal_603, &uLocal_717))
		{
			__LIB_1__::func_240(157, 0);
			func_14(&uLocal_717, 64);
		}
	}
}

bool func_63()
{
	if (!__LIB_13__::func_666(iLocal_716, 64))
	{
		return false;
	}
	if (__LIB_13__::func_666(iLocal_716, 4096))
	{
		return true;
	}
	if (func_163())
	{
		return true;
	}
	if (func_164())
	{
		LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), joaat("CRIME_BURGLARY"), 0, 0, -1);
		return true;
	}
	if (__LIB_13__::func_666(iLocal_716, 8388608))
	{
		return true;
	}
	if (VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(Local_718.f_1[0 /*22*/]) == Global_35)
	{
		LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), joaat("CRIME_BURGLARY"), 0, 0, -1);
		return true;
	}
	return false;
}

int func_64()
{
	if (!__LIB_13__::func_666(iLocal_716, 4096))
	{
		__LIB_1__::func_148(&(vLocal_627[3 /*3*/]));
	}
	Global_1430221.f_2 = 1;
	func_139(&Local_718, iLocal_603, &vLocal_627, &uLocal_1839, &iLocal_1867, &iLocal_716, &uLocal_717, &iLocal_606, &(Local_15[0 /*52*/]), &(Local_432[0 /*21*/]), 1, !func_165(&Local_718, iLocal_603));
	EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_ALARMING"), Global_35, 5f, 20f, 10f, -1f, -1f, 180f, false, false, -1, -1);
	__LIB_1__::func_148(&(Local_718.f_1106));
	func_12(&iLocal_716, 65536, 1);
	__LIB_1__::func_148(&(vLocal_627[14 /*3*/]));
	return 1;
}

void func_65(int iParam0)
{
	*iParam0 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 11000));
}

void func_67(var uParam0, var uParam1)
{
	if (func_166(uParam0, uParam1))
	{
		__LIB_1__::func_148(uParam1[18 /*3*/]);
		PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::GET_PLAYER_INDEX());
	}
}

void func_68(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, int iParam6)
{
	int iVar0;
	if (iParam4 < 0 || iParam4 >= iParam0->f_1098)
	{
		return;
	}
	if (__LIB_13__::func_666(*uParam2, 512) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		if (ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			return;
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("GUNSHOT")))
		{
			func_167(Global_35, 0, 0, 1, 1, 0);
			__LIB_0__::func_7(&(iParam0->f_1[iParam4 /*22*/].f_4), 2);
			if (!__LIB_0__::func_75(uParam1[19 /*3*/]))
			{
				__LIB_1__::func_148(uParam1[19 /*3*/]);
			}
		}
		if (func_168(uParam1, uParam2, uParam5) && iParam4 > -1)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iParam0->f_1[iParam4 /*22*/].f_8);
			iVar0 = iParam0->f_1[iParam4 /*22*/].f_11[iVar0];
			if (iVar0 > -1)
			{
				func_65(iParam6);
				__LIB_2__::func_478(iParam0->f_310[iVar0 /*14*/], Global_35, func_169(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
			}
		}
		if (func_170(uParam1))
		{
			__LIB_0__::func_37(uParam1[15 /*3*/]);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			func_98(uParam3, 134217728);
			func_12(uParam2, 512, 0);
		}
		else
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, func_171(), false);
			func_14(uParam3, 134217728);
			HUD::_DISPLAY_HUD_COMPONENT(724769646);
		}
	}
}

void func_69(var uParam0)
{
	if (__LIB_13__::func_666(*uParam0, 536870912) && func_172(uParam0, 0))
	{
		func_83(1);
		func_12(uParam0, 536870912, 0);
	}
}

void func_70()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_718.f_1[0 /*22*/]))
	{
		if (func_173())
		{
			__LIB_0__::func_267(1);
			LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), joaat("CRIME_TRAIN_ROBBERY"), 0, 0, 0, 0, 0, 0, 0);
			if (!LAW::_0xAD401C63158ACBAA(PLAYER::PLAYER_ID()))
			{
				if (__LIB_1__::func_923())
				{
					LAW::_0x75CBF20BA47E4F89(Global_36, 0);
				}
				else
				{
					LAW::_0x75CBF20BA47E4F89(Global_36, joaat("LAW_CUSTOM_TRAIN_ROBBERY"));
				}
			}
			LAW::_0x987BE590FB9D41E5(1);
			LAW::_0xDCF12B89624AAC96(1);
			__LIB_1__::func_148(&(vLocal_627[18 /*3*/]));
			__LIB_1__::func_148(&(vLocal_627[19 /*3*/]));
			if (func_176())
			{
				if (func_177(&Local_718))
				{
					VEHICLE::_0x787E43477746876F(Local_718.f_1[0 /*22*/]);
					VEHICLE::_0x4182C037AA1F0091(Local_718.f_1[0 /*22*/], 0);
					VEHICLE::_0x9F29999DFDF2AEB8(Local_718.f_1[0 /*22*/], 7f);
				}
			}
			else if (func_177(&Local_718))
			{
				__LIB_8__::func_917(Local_718.f_1[0 /*22*/], 0f);
				func_179();
			}
			func_12(&iLocal_716, 4, 1);
		}
		if (func_180())
		{
			func_179();
			func_12(&iLocal_716, 1024, 1);
		}
	}
}

void func_71(int iParam0)
{
	int iVar0;
	if (MISC::GET_GAME_TIMER() >= iLocal_609)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35))
		{
			func_65(&iLocal_609);
		}
		else if (!__LIB_13__::func_666(iLocal_716, 8) && iParam0 > -1)
		{
			if (iParam0 != 0)
			{
				if (__LIB_13__::func_666(iLocal_716, 4096))
				{
					iVar0 = func_132(iParam0);
					if (iVar0 != 0)
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iVar0))
						{
							if (__LIB_2__::func_478(iVar0, Global_35, func_181(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0))
							{
								func_65(&iLocal_609);
							}
						}
						else
						{
							func_65(&iLocal_609);
						}
					}
				}
			}
		}
	}
}

void func_72()
{
	bool bVar0;
	if ((__LIB_0__::func_75(&(Local_718.f_1109)) && __LIB_13__::func_666(iLocal_716, 33554432)) && !__LIB_1__::func_285(&(Local_718.f_1109), 3f))
	{
		return;
	}
	bVar0 = __LIB_5__::func_656(4);
	if (__LIB_13__::func_666(iLocal_716, 33554432))
	{
		if (!bVar0)
		{
			func_12(&iLocal_716, 33554432, 0);
			__LIB_1__::func_148(&(Local_718.f_1109));
		}
	}
	else if (bVar0)
	{
		func_12(&iLocal_716, 33554432, 1);
		__LIB_1__::func_148(&(Local_718.f_1109));
	}
}

void func_73()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!__LIB_13__::func_666(iLocal_716, 8192))
	{
		if (LAW::_0x9D5C9A5A3321B128(PLAYER::PLAYER_ID()))
		{
			func_12(&iLocal_716, 8192, 1);
			func_12(&iLocal_716, 16, 1);
			return;
		}
	}
	if (__LIB_13__::func_666(iLocal_716, 64))
	{
		return;
	}
	if (!__LIB_13__::func_666(iLocal_716, 16))
	{
		if (func_94(Local_718, 60f, 1))
		{
			if (!__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				iVar2 = (MISC::GET_FRAME_COUNT() % 7) * 7;
				iVar3 = (iVar2 + 7 - 1);
				if (iVar3 >= Local_718.f_1099)
				{
					iVar3 = (Local_718.f_1099 - 1);
				}
				iVar1 = iVar2;
				while (iVar1 <= iVar3)
				{
					iVar0 = Local_718.f_310[iVar1 /*14*/];
					if (!ENTITY::IS_ENTITY_DEAD(iVar0))
					{
					}
					else
					{
						iVar1++;
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					TASK::CLEAR_PED_TASKS(iVar0, true, false);
					PED::SET_PED_CONFIG_FLAG(iVar0, 146, false);
					PED::SET_PED_CONFIG_FLAG(iVar0, 190, true);
					PED::_0xC6C4E15CF7D52FEA(iVar0, 1000f);
					__LIB_0__::func_267(1);
					LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_TRAIN_ROBBERY"), 0, 0, 0, 0, 0, 0, 0);
					if (!LAW::_0xAD401C63158ACBAA(PLAYER::PLAYER_ID()))
					{
						if (__LIB_1__::func_923())
						{
							LAW::_0x75CBF20BA47E4F89(Global_36, 0);
						}
						else
						{
							LAW::_0x75CBF20BA47E4F89(Global_36, joaat("LAW_CUSTOM_TRAIN_ROBBERY"));
						}
					}
					LAW::_0x987BE590FB9D41E5(1);
					LAW::_0xDCF12B89624AAC96(1);
					LAW::_0xD7494DED50C6EF52(PLAYER::PLAYER_ID(), joaat("CRIME_TRAIN_ROBBERY"), 2);
					LAW::_0xF0B67BAD53C35BD9(iVar0, Global_35, iVar0, Global_36, joaat("CRIME_TRAIN_ROBBERY"));
					PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 32768, false);
					func_12(&iLocal_716, 16, 1);
				}
			}
		}
	}
}

void func_78()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_718.f_1[0 /*22*/]))
	{
		VEHICLE::_0x4182C037AA1F0091(Local_718.f_1[0 /*22*/], 1);
		VEHICLE::_0xDC69F6913CCA0B99(Local_718.f_1[0 /*22*/], 0);
		VEHICLE::SET_TRAIN_CRUISE_SPEED(Local_718.f_1[0 /*22*/], 10f);
		VEHICLE::_0x9F29999DFDF2AEB8(Local_718.f_1[0 /*22*/], 10f);
	}
}

void func_83(int iParam0)
{
	char* sVar0;
	sVar0 = func_185(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		__LIB_3__::func_353(sVar0, 0);
	}
}

int func_86(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 1;
	}
	else if (iParam0->f_1[iParam1 /*22*/].f_6 == 3)
	{
		return 2;
	}
	else if (iParam0->f_1[iParam1 /*22*/].f_6 == 1)
	{
		return 2;
	}
	else if (iParam0->f_1[iParam1 /*22*/].f_6 == 2)
	{
		return 7;
	}
	return 0;
}

bool func_93(int iParam0)
{
	if ((*iParam0 == 0 || *iParam0 == 1) || *iParam0 == 14)
	{
		return true;
	}
	return false;
}

bool func_94(int iParam0, float fParam1, bool bParam2)
{
	if (iParam0 != 14 && !bParam2)
	{
		return __LIB_7__::func_831(iParam0, Global_36) > fParam1;
	}
	return !__LIB_17__::func_508(iParam0, &(Local_718.f_1[0 /*22*/]), fParam1, -1);
}

bool func_95(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	vParam0.f_2 = 0f;
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Global_1888801[iVar0 /*35*/].f_3))
		{
			if (Global_1888801[iVar0 /*35*/].f_20 == 1 || (!bParam4 && Global_1888801[iVar0 /*35*/].f_20 == 2))
			{
				vVar1 = { VOLUME::_GET_VOLUME_COORDS(Global_1888801[iVar0 /*35*/].f_3) };
				vVar1.f_2 = 0f;
				fVar4 = BUILTIN::VDIST2(vParam0, vVar1);
				if (fVar4 < (fParam3 * fParam3))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_97()
{
	int iVar0;
	iVar0 = func_200(0, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		return true;
	}
	iVar0 = func_202(0, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		return true;
	}
	return false;
}

void func_98(var uParam0, int iParam1)
{
	if (__LIB_8__::func_747(uParam0, iParam1))
	{
		__LIB_0__::func_8(uParam0, iParam1);
	}
}

void func_99(var uParam0)
{
	if (!__LIB_13__::func_666(*uParam0, 4194304))
	{
		__LIB_0__::func_15(__LIB_0__::func_38(joaat("ROB_COMPLETED"), joaat("TRAIN")), 1);
		func_12(uParam0, 4194304, 1);
	}
}

bool func_100()
{
	if (__LIB_13__::func_666(iLocal_716, 65536))
	{
		return false;
	}
	if (func_204())
	{
		return true;
	}
	return false;
}

void func_103(int iParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_1[iParam1 /*22*/]))
	{
		return;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0->f_1[iParam1 /*22*/]);
	iParam0->f_1[iParam1 /*22*/].f_6 = func_205(iVar0);
	iParam0->f_1[iParam1 /*22*/].f_7 = func_206(iVar0);
}

void func_104(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4, float fParam5, bool bParam6, int iParam7, bool bParam8, char* sParam9)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	char cVar9[16];
	char cVar11[16];
	int iVar15;
	vector3 vVar16;
	vector3 vVar19;
	vVar6 = { ENTITY::GET_ENTITY_ROTATION(*uParam0, 2) };
	vVar6.x = 0f;
	vVar6.f_1 = 0f;
	StringCopy(&cVar9, "Car_", 16);
	if (!bParam8)
	{
		MISC::_INT_TO_STRING(iParam2, "%d", &cVar11);
		StringConCat(&cVar9, &cVar11, 16);
		if (bParam6)
		{
			StringConCat(&cVar9, "def", 16);
		}
	}
	else
	{
		StringCopy(&cVar9, sParam9, 16);
	}
	if ((fParam3 != -1f || fParam4 != -1f) || fParam5 != -1f)
	{
		*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), vVar6, fParam3, fParam4, fParam5, &cVar9);
	}
	else
	{
		iVar15 = ENTITY::GET_ENTITY_MODEL(*uParam0);
		MISC::GET_MODEL_DIMENSIONS(iVar15, &vVar0, &vVar3);
		vVar16 = { (1f * (vVar3.x - vVar0.x)), (1f * (vVar3.y - vVar0.y)), (vVar3.z - vVar0.z) };
		if (bParam6)
		{
			if (iVar15 != joaat("CABOOSE01X"))
			{
				vVar16.x = (vVar16.x - 1.2f);
				vVar16.f_1 = (vVar16.y - 4f);
			}
			else
			{
				vVar16.x = (vVar16.x - 1.2f);
				vVar16.f_1 = (vVar16.y - 2.2f);
			}
			vVar16.f_2 = 2f;
		}
		*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), vVar6, vVar16, &cVar9);
	}
	vVar19 = { 0f, iParam7, ((vVar3.z - vVar0.z) / 2f) };
	if (bParam6)
	{
		vVar19.f_2 = 2f;
	}
	PED::_0x7C00CFC48A782DC0(*uParam1, *uParam0, vVar19, 0f, 0f, 0f, 2, 1);
}

int func_105(var uParam0)
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[0]))
	{
		if (ENTITY::IS_ENTITY_DEAD((*uParam0)[0]))
		{
		}
		iVar1 = 1;
		while (iVar1 <= (*uParam0 - 1))
		{
			iVar0 = VEHICLE::GET_TRAIN_CARRIAGE((*uParam0)[0], iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				(*uParam0)[iVar1] = iVar0;
			}
			else
			{
				return iVar1;
			}
			iVar1++;
		}
	}
	else
	{
		return 0;
	}
	return *uParam0;
}

void func_106(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iParam0->f_1[iParam1 /*22*/].f_11[iVar0] = -1;
		iVar0++;
	}
}

int func_107()
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	switch (iVar0)
	{
		case 0:
			return joaat("P_CS_BILLSTACK01X");
		case 1:
			return joaat("P_FOLDEDBILLS01X");
		case 2:
			return joaat("P_MONEYBAG01X");
		default:
			break;
	}
	return joaat("P_CS_BILLSTACK01X");
}

int func_109(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (iParam0->f_1[iVar0 /*22*/].f_6 != 2)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_110(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	char cVar13[32];
	char cVar17[32];
	int iVar21;
	int iVar22;
	vector3 vVar23;
	iVar21 = iParam0->f_1[iParam1 /*22*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar21))
	{
		return 0;
	}
	StringCopy(&cVar13, "Car_", 32);
	MISC::_INT_TO_STRING(iParam1, "%d", &cVar17);
	StringConCat(&cVar13, &cVar17, 32);
	StringConCat(&cVar13, "_ScenarioBlocker", 32);
	vVar7 = { ENTITY::GET_ENTITY_ROTATION(iVar21, 2) };
	iVar22 = ENTITY::GET_ENTITY_MODEL(iVar21);
	MISC::GET_MODEL_DIMENSIONS(iVar22, &vVar1, &vVar4);
	vVar23 = { (vVar4.x - vVar1.x), (vVar4.y - vVar1.y), (vVar4.z - vVar1.z) };
	vVar23.f_1 = (vVar23.y / 2f);
	if (bParam2)
	{
		vVar10 = { 0f, ((vVar23.y / 2f) - (vVar23.y / 4f)), 0f };
	}
	else
	{
		vVar10 = { 0f, ((-vVar23.y / 2f) + (vVar23.y / 4f)), 0f };
	}
	iVar0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(iVar21, true, false), vVar7, vVar23, &cVar13);
	PED::_0x7C00CFC48A782DC0(iVar0, iVar21, vVar10, 0f, 0f, 0f, 2, 1);
	return iVar0;
}

var func_111(int iParam0)
{
	__LIB_0__::func_566(iParam0, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 0, 0, 0, -1, -1, 32);
	POPULATION::_0xB56D41A694E42E86(iParam0, 0, 0, 0, -1, -1, 32);
	return PED::_0x4C39C95AE5DB1329(iParam0, 0, 15);
}

int func_112(int iParam0)
{
	int iVar0;
	iVar0 = (iParam0->f_1098 - 1);
	while (iVar0 >= 0)
	{
		if (iParam0->f_1[iVar0 /*22*/].f_6 != 2)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0 = (iVar0 + -1);
	}
	return -1;
}

void func_113(int iParam0)
{
	int iVar0;
	int iVar1;
	if (func_93(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam0->f_941[iVar0 /*52*/] >= 0)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (iParam0->f_941[iVar0 /*52*/].f_3[iVar1 /*12*/].f_7 != 0)
					{
						STREAMING::REQUEST_MODEL(iParam0->f_941[iVar0 /*52*/].f_3[iVar1 /*12*/].f_7, false);
					}
					iVar1++;
				}
			}
			iVar0++;
		}
		STREAMING::REQUEST_MODEL(func_136(), false);
	}
}

void func_114(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		__LIB_3__::func_318(func_209(iVar0), uParam0);
		iVar0++;
	}
}

bool func_115()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!AUDIO::PREPARE_MUSIC_EVENT(func_185(iVar0)))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_116(int iParam0)
{
	int iVar0;
	int iVar1;
	if (func_93(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam0->f_941[iVar0 /*52*/] >= 0)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (iParam0->f_941[iVar0 /*52*/].f_3[iVar1 /*12*/].f_7 != 0 && !STREAMING::HAS_MODEL_LOADED(iParam0->f_941[iVar0 /*52*/].f_3[iVar1 /*12*/].f_7))
					{
						return false;
					}
					iVar1++;
				}
			}
			iVar0++;
		}
		if (!STREAMING::HAS_MODEL_LOADED(func_136()))
		{
			return false;
		}
	}
	return true;
}

void func_118(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	if (iParam1 < 0)
	{
		return;
	}
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		if (iParam0->f_941[iParam1 /*52*/].f_3[iVar0 /*12*/].f_7 != 0)
		{
			vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0->f_1[iParam0->f_941[iParam1 /*52*/] /*22*/], iParam0->f_941[iParam1 /*52*/].f_3[iVar0 /*12*/]) };
			fVar4 = (ENTITY::GET_ENTITY_HEADING(iParam0->f_1[iParam0->f_941[iParam1 /*52*/] /*22*/]) + iParam0->f_941[iParam1 /*52*/].f_3[iVar0 /*12*/].f_3);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0->f_941[iParam1 /*52*/].f_3[iVar0 /*12*/].f_8, vVar1, fVar4, true, false, true);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam0->f_941[iParam1 /*52*/].f_3[iVar0 /*12*/].f_8, iParam0->f_1[iParam0->f_941[iParam1 /*52*/] /*22*/], 0, iParam0->f_941[iParam1 /*52*/].f_3[iVar0 /*12*/], 0f, 0f, iParam0->f_941[iParam1 /*52*/].f_3[iVar0 /*12*/].f_3, false, false, false, false, 2, true, false, false);
			ENTITY::SET_ENTITY_PROOFS(iParam0->f_941[iParam1 /*52*/].f_3[iVar0 /*12*/].f_8, 6, false);
		}
		iVar0++;
	}
}

void func_119(int iParam0, int iParam1)
{
	if (__LIB_0__::func_27(iParam0->f_1[iParam1 /*22*/].f_4, 65536))
	{
		return;
	}
	switch (iParam0->f_1[iParam1 /*22*/].f_3)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1[iParam1 /*22*/]))
			{
				if (func_215(iParam0, iParam1))
				{
					ENTITY::_0x119A5714578F4E05(iParam0->f_1[iParam1 /*22*/], 1);
				}
				__LIB_0__::func_8(&(iParam0->f_1[iParam1 /*22*/].f_4), 4);
				if (!__LIB_0__::func_27(iParam0->f_1[iParam1 /*22*/].f_4, 131072))
				{
					PED::_0xF008E0BA1FE1D644(func_86(iParam0, iParam1));
					__LIB_0__::func_7(&(iParam0->f_1[iParam1 /*22*/].f_4), 131072);
				}
				iParam0->f_1[iParam1 /*22*/].f_3 = 2;
			}
			break;
		case 2:
			func_216(iParam0, iParam1);
			__LIB_0__::func_7(&(iParam0->f_1[iParam1 /*22*/].f_4), 4);
			func_217(iParam1);
			break;
	}
}

void func_120(int iParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_1[iParam1 /*22*/].f_1))
	{
		return;
	}
	if (!__LIB_0__::func_27(iParam0->f_1[iParam1 /*22*/].f_4, 16))
	{
		if (bParam2)
		{
			__LIB_0__::func_566(iParam0->f_1[iParam1 /*22*/].f_1, 0);
		}
		VEHICLE::_0xD4907EF4334C7602(iParam0->f_1[iParam1 /*22*/], 1);
		VEHICLE::_0x68830738A6BFB370(iParam0->f_1[iParam1 /*22*/], 1);
		ENTITY::_0x119A5714578F4E05(iParam0->f_1[iParam1 /*22*/], 0);
		__LIB_0__::func_7(&(iParam0->f_1[iParam1 /*22*/].f_4), 16);
	}
	else if (bParam2 && !__LIB_0__::func_27(iParam0->f_1[iParam1 /*22*/].f_4, 8192))
	{
		__LIB_0__::func_566(iParam0->f_1[iParam1 /*22*/].f_1, 0);
		__LIB_0__::func_7(&(iParam0->f_1[iParam1 /*22*/].f_4), 8192);
	}
}

bool func_126()
{
	var uVar0;
	if (!__LIB_0__::func_34(Local_718) && Local_718 != 14)
	{
		return false;
	}
	if (Local_718 == 14)
	{
		uVar0 = VEHICLE::_0x45853F4E17D847D5(Local_718.f_1[0 /*22*/]);
	}
	else
	{
		uVar0 = Global_1425371[Local_718 /*373*/].f_1;
	}
	if (!VEHICLE::_0x0516FAE561276EFC(uVar0))
	{
		return false;
	}
	return !VEHICLE::_0x37D238BE69F7378A(uVar0);
}

bool func_128(int iParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1[iVar0 /*22*/]))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				return false;
			}
			if (PED::IS_PED_ON_SPECIFIC_VEHICLE(*uParam1, iParam0->f_1[iVar0 /*22*/]))
			{
				return true;
			}
			if (__LIB_3__::func_330(*uParam1, iParam0->f_1[iVar0 /*22*/], 0))
			{
				return true;
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_1[iVar0 /*22*/].f_1) && ENTITY::IS_ENTITY_IN_VOLUME(*uParam1, iParam0->f_1[iVar0 /*22*/].f_1, true, 0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_129(int iParam0)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	float fVar5;
	if (VEHICLE::_0xE887BD31D97793F6(iParam0->f_1[0 /*22*/]))
	{
		return true;
	}
	if (ENTITY::GET_ENTITY_SPEED(iParam0->f_1[0 /*22*/]) > 0.2f)
	{
		return false;
	}
	if (VEHICLE::_0xDE8C5B9F65017FA1(iParam0->f_1[0 /*22*/]) <= 0)
	{
		return false;
	}
	uVar1 = VEHICLE::_0xAF787E081AC4A8EE(iParam0->f_1[0 /*22*/]);
	iVar0 = VEHICLE::_0x86FA6D8B48667D75(iParam0->f_1[0 /*22*/]);
	if (iVar0 >= 0)
	{
		vVar2 = { VEHICLE::_0xBA958F68031DDBFC(uVar1, iVar0) };
		fVar5 = __LIB_0__::func_94(iParam0->f_1[0 /*22*/], vVar2, 1);
		if (fVar5 < 25f)
		{
			return true;
		}
	}
	iVar0 = VEHICLE::_0x1180A2974D251B7B(iParam0->f_1[0 /*22*/]);
	if (iVar0 >= 0)
	{
		vVar2 = { VEHICLE::_0xBA958F68031DDBFC(uVar1, iVar0) };
		fVar5 = __LIB_0__::func_94(iParam0->f_1[0 /*22*/], vVar2, 1);
		if (fVar5 < 25f)
		{
			return true;
		}
	}
	return false;
}

bool func_131(int iParam0)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_27(Local_718.f_1[iParam0 /*22*/].f_4, 1))
	{
		if (__LIB_0__::func_27(Local_718.f_1[iParam0 /*22*/].f_4, 4))
		{
			if (Local_718.f_1[iParam0 /*22*/].f_8 <= 0 || Local_718.f_1[iParam0 /*22*/].f_9 >= Local_718.f_1[iParam0 /*22*/].f_8)
			{
				return true;
			}
			iVar0 = 0;
			while (iVar0 < Local_718.f_1[iParam0 /*22*/].f_8)
			{
				iVar1 = Local_718.f_1[iParam0 /*22*/].f_11[iVar0];
				if (func_226(iParam0, iVar1))
				{
					return false;
				}
				iVar0++;
			}
			__LIB_0__::func_7(&(Local_718.f_1[iParam0 /*22*/].f_4), 1);
		}
		else
		{
			return false;
		}
	}
	return true;
}

int func_132(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Local_718.f_1[iParam0 /*22*/].f_8 == 0)
	{
		return 0;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Local_718.f_1[iParam0 /*22*/].f_8);
	iVar2 = 0;
	while (!func_227(iParam0, iVar0) && iVar1 < 10)
	{
		iVar0 = __LIB_9__::func_844(0, Local_718.f_1[iParam0 /*22*/].f_8, iVar0);
		iVar1++;
	}
	iVar3 = Local_718.f_1[iParam0 /*22*/].f_11[iVar0];
	if (func_227(iParam0, iVar0))
	{
		iVar2 = Local_718.f_310[iVar3 /*14*/];
	}
	return iVar2;
}

char* func_133(bool bParam0)
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	if (bParam0)
	{
		switch (iVar0)
		{
			case 0:
			case default:
				return "PLEAD";
			case 1:
				return "INTIMIDATED_AGAIN_GEN";
			case 2:
				return "GENERIC_FRIGHTENED_HIGH";
				switch (iVar0)
				{
					case 0:
					case default:
						return "INTIMIDATED_AGAIN_ROB";
					case 1:
						return "SCARED_HELP";
					case 2:
						return "GENERIC_FRIGHTENED_HIGH";
						default:
							break;
				}
				default:
					break;
		}
	}
}

char* func_135(bool bParam0)
{
	if (bParam0)
	{
		return "GENERIC_CURSE_MED";
	}
	return "WHATS_GOING_ON";
}

int func_136()
{
	return joaat("S_VAULT_SML_L_VAL01X");
}

int func_137(int iParam0, int iParam1, var uParam2, vector3 vParam3, float fParam6)
{
	int iVar0;
	int iVar1[4];
	int iVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		return 1;
	}
	if (!PROPSET::_IS_PROPSET_VALID(iParam0))
	{
		return 0;
	}
	iVar8 = -1;
	fVar10 = 99999.9f;
	iVar0 = ITEMSET::CREATE_ITEMSET(false);
	iVar6 = PROPSET::_GET_ENTITIES_FROM_PROPSET(iParam0, iVar0, iParam1, false, false);
	iVar7 = 0;
	while (iVar7 < iVar6)
	{
		if (iVar7 < iVar1)
		{
			iVar1[iVar7] = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar7, iVar0));
			fVar9 = __LIB_0__::func_94(iVar1[iVar7], vParam3, 1);
			if (fVar9 < fVar10 && (fParam6 < 0f || fVar9 < fParam6))
			{
				fVar10 = fVar9;
				iVar8 = iVar7;
			}
		}
	else
	{
		}
		else
		{
			iVar7++;
		}
	}
	ITEMSET::_CLEAR_ITEMSET(iVar0);
	ITEMSET::CLEAN_ITEMSET(iVar0);
	ITEMSET::DESTROY_ITEMSET(iVar0);
	if (iVar8 >= 0)
	{
		*uParam2 = iVar1[iVar8];
		return 1;
	}
	return 0;
}

Vector3 func_138(bool bParam0)
{
	if (!bParam0)
	{
		return -0.3f, -0.025f, -0.8f;
	}
	return 1.35f, -0.52f, 0.94f;
}

int func_139(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, var uParam6, int iParam7, var uParam8, int* iParam9, bool bParam10, bool bParam11)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	if (__LIB_13__::func_666(*uParam5, 4096))
	{
		return 0;
	}
	if (!__LIB_0__::func_27(iParam0->f_1[iParam1 /*22*/].f_4, 2))
	{
		if (!__LIB_13__::func_666(*uParam5, 536870912))
		{
			func_83(0);
			func_12(uParam5, 536870912, 1);
		}
		if (bParam10 || bParam11)
		{
			if (func_230(iParam0, uParam5, iParam1, bParam10) && !bParam11)
			{
				if (iParam0->f_1[iParam1 /*22*/].f_6 == 2)
				{
					func_231(iParam0->f_1[iParam1 /*22*/].f_8, iParam0->f_1[iParam1 /*22*/].f_7);
				}
			}
			func_232(uParam5);
			__LIB_0__::func_7(&(iParam0->f_1[iParam1 /*22*/].f_4), 2);
			if (!__LIB_0__::func_75(uParam2[12 /*3*/]))
			{
				__LIB_1__::func_148(uParam2[12 /*3*/]);
			}
			__LIB_1__::func_148(uParam2[15 /*3*/]);
			func_45(iParam0, iParam1);
			if (*iParam4 != 0)
			{
				__LIB_9__::func_898(uParam3, iParam4);
			}
			return 1;
		}
		if (!func_230(iParam0, uParam5, iParam1, 0))
		{
			return 0;
		}
		if (!__LIB_13__::func_666(*uParam5, 134217728))
		{
			func_234(iParam0, iParam1, uParam2, uParam5, uParam6, iParam7, uParam8, iParam9);
			if (iParam0->f_1[iParam1 /*22*/].f_6 == 2)
			{
				func_231(iParam0->f_1[iParam1 /*22*/].f_8, iParam0->f_1[iParam1 /*22*/].f_7);
			}
			func_232(uParam5);
			__LIB_0__::func_7(&(iParam0->f_1[iParam1 /*22*/].f_4), 2);
			if (!__LIB_0__::func_75(uParam2[12 /*3*/]))
			{
				__LIB_1__::func_148(uParam2[12 /*3*/]);
			}
			func_45(iParam0, iParam1);
			if (*iParam4 != 0)
			{
				__LIB_9__::func_898(uParam3, iParam4);
			}
		}
		return 1;
	}
	return 0;
}

void func_140(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_1098)
	{
		if (__LIB_0__::func_27(iParam0->f_1[iVar0 /*22*/].f_4, 32768))
		{
			func_12(&iLocal_716, 16777216, 1);
			return;
		}
		iVar0++;
	}
	func_12(&iLocal_716, 16777216, 0);
}

bool func_141(var uParam0)
{
	if (__LIB_13__::func_666(*uParam0, 64))
	{
		return true;
	}
	if (__LIB_13__::func_666(*uParam0, 4096))
	{
		return true;
	}
	if (__LIB_13__::func_666(*uParam0, 1048576))
	{
		return true;
	}
	if (__LIB_13__::func_666(*uParam0, 67108864))
	{
		return true;
	}
	if (__LIB_13__::func_666(*uParam0, 2048))
	{
		return true;
	}
	if (__LIB_13__::func_666(*uParam0, 2097152))
	{
		return true;
	}
	if (__LIB_13__::func_666(*uParam0, 1024))
	{
		return true;
	}
	if (__LIB_13__::func_666(*uParam0, 8192))
	{
		return true;
	}
	if (__LIB_13__::func_666(*uParam0, 256))
	{
		return true;
	}
	if (__LIB_13__::func_666(*uParam0, 2))
	{
		return true;
	}
	if (__LIB_13__::func_666(*uParam0, 16384))
	{
		return true;
	}
	if (__LIB_13__::func_666(*uParam0, 65536))
	{
		return true;
	}
	if (__LIB_13__::func_666(*uParam0, 32768))
	{
		return true;
	}
	if (__LIB_13__::func_666(*uParam0, 4))
	{
		return true;
	}
	return false;
}

void func_142(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_27(iParam0->f_1[iParam1 /*22*/].f_4, 16384) && *iParam0 == 14)
	{
		func_235(iParam0->f_1[iParam1 /*22*/]);
		__LIB_0__::func_7(&(iParam0->f_1[iParam1 /*22*/].f_4), 16384);
	}
}

void func_143(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	func_236(&Local_718, &iLocal_716, &vLocal_627, iParam0);
	func_237(&Local_718, &iLocal_716, &vLocal_627, iParam0);
	func_238(&Local_718, &iLocal_716, &uLocal_717, iParam0);
	if (Local_718.f_1[iParam0 /*22*/].f_8 == 0)
	{
		return;
	}
	func_239(iParam0);
	iVar0 = 0;
	iVar1 = (Local_718.f_1[iParam0 /*22*/].f_8 - 1);
	if ((!__LIB_0__::func_27(Local_718.f_1[iParam0 /*22*/].f_4, 2) && !__LIB_13__::func_666(iLocal_716, 8388608)) && __LIB_0__::func_75(&(vLocal_627[8 /*3*/])))
	{
		Local_718.f_1[iParam0 /*22*/].f_21 = func_240(iParam0);
	}
	else
	{
		Local_718.f_1[iParam0 /*22*/].f_21 = 0;
	}
	iVar3 = iVar0;
	while (iVar3 <= iVar1)
	{
		iVar2 = Local_718.f_1[iParam0 /*22*/].f_11[iVar3];
		if (iVar2 < 0)
		{
			return;
		}
		if (__LIB_8__::func_747(&uLocal_717, 268435456) && func_144(&Local_718, iParam0))
		{
			func_241(&Local_718, iVar2, iParam0);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Local_718.f_310[iVar2 /*14*/]))
		{
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(Local_718.f_310[iVar2 /*14*/].f_6) && PED::IS_PED_USING_ANY_SCENARIO(Local_718.f_310[iVar2 /*14*/]))
			{
				Local_718.f_310[iVar2 /*14*/].f_6 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Local_718.f_310[iVar2 /*14*/], false);
			}
			func_242(&Local_718, iVar2);
			func_243(iParam0, iVar2);
			if (__LIB_0__::func_27(Local_718.f_310[iVar2 /*14*/].f_7, 16))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_718.f_310[iVar2 /*14*/]))
				{
					if (Local_718.f_310[iVar2 /*14*/].f_4 != 19)
					{
						*bParam1 = func_244(iParam0, iVar2);
						if (*bParam1)
						{
							func_245(&Local_718, iVar2, iLocal_603);
						}
						func_246(&(Local_718.f_310[iVar2 /*14*/]), 19);
					}
				}
				else if (LAW::_0x0EAF918F751F27BA(Local_718.f_310[iVar2 /*14*/]))
				{
					if (Local_718.f_310[iVar2 /*14*/].f_4 != 14)
					{
						func_246(&(Local_718.f_310[iVar2 /*14*/]), 14);
					}
				}
				else if (Local_718.f_310[iVar2 /*14*/].f_4 > 0)
				{
					if (((((((Local_718.f_310[iVar2 /*14*/].f_4 != 16 && Local_718.f_310[iVar2 /*14*/].f_4 != 15) && Local_718.f_310[iVar2 /*14*/].f_4 != 19) && Local_718.f_310[iVar2 /*14*/].f_4 != 14) && Local_718.f_310[iVar2 /*14*/].f_4 != 20) && Local_718.f_310[iVar2 /*14*/].f_3 != 1) && Local_718.f_310[iVar2 /*14*/].f_3 != 0) && func_247(&Local_718, &iLocal_716, &vLocal_627, iParam0, iVar2, iLocal_603))
					{
						func_246(&(Local_718.f_310[iVar2 /*14*/]), 15);
					}
					else if (((((((((Local_718.f_310[iVar2 /*14*/].f_4 != 19 && Local_718.f_310[iVar2 /*14*/].f_4 != 14) && Local_718.f_310[iVar2 /*14*/].f_4 != 16) && Local_718.f_310[iVar2 /*14*/].f_4 != 15) && Local_718.f_310[iVar2 /*14*/].f_4 != 20) && Local_718.f_310[iVar2 /*14*/].f_4 != 11) && Local_718.f_310[iVar2 /*14*/].f_4 != 12) && Local_718.f_310[iVar2 /*14*/].f_4 != 13) && Local_718.f_310[iVar2 /*14*/].f_3 != 1) && Local_718.f_310[iVar2 /*14*/].f_3 != 0)
					{
						if (!PED::IS_PED_USING_ANY_SCENARIO(Local_718.f_310[iVar2 /*14*/]))
						{
							if (((!PED::IS_PED_ON_VEHICLE(Local_718.f_310[iVar2 /*14*/], false) && !PED::IS_PED_IN_ANY_VEHICLE(Local_718.f_310[iVar2 /*14*/], false)) && !PED::IS_PED_ON_SPECIFIC_VEHICLE(Local_718.f_310[iVar2 /*14*/], Local_718.f_1[iParam0 /*22*/])) && !__LIB_1__::func_205(Local_718.f_310[iVar2 /*14*/], Local_718.f_1[iParam0 /*22*/].f_1, 1, 0))
							{
								func_246(&(Local_718.f_310[iVar2 /*14*/]), 16);
							}
							else if (func_248(&Local_718, iVar2, iParam0, iLocal_603))
							{
								func_249(&Local_718, iVar2, iParam0);
							}
						}
					}
				}
				switch (Local_718.f_310[iVar2 /*14*/].f_4)
				{
					case 0:
						func_250(&Local_718, iVar2);
						if (func_251(iParam0, iVar2))
						{
							Local_718.f_1[0 /*22*/].f_11[0] = Local_718.f_1[iParam0 /*22*/].f_11[iVar3];
							__LIB_0__::func_7(&(Local_718.f_310[iVar2 /*14*/].f_7), 2);
							Local_718.f_310[iVar2 /*14*/].f_3 = 0;
							PED::SET_PED_CONFIG_FLAG(Local_718.f_310[iVar2 /*14*/], 233, true);
							PED::SET_PED_CONFIG_FLAG(Local_718.f_310[iVar2 /*14*/], 21, true);
							func_246(&(Local_718.f_310[iVar2 /*14*/]), 4);
						}
						else if (Local_718.f_310[iVar2 /*14*/].f_3 == 1)
						{
							func_246(&(Local_718.f_310[iVar2 /*14*/]), 2);
						}
						else
						{
							func_246(&(Local_718.f_310[iVar2 /*14*/]), 1);
						}
						break;
					case 4:
						func_252(&Local_718, &iLocal_716, iParam0, iVar2, iLocal_603, &vLocal_627, &(Local_432[iVar3 /*21*/]), &(Local_15[iVar3 /*52*/]), &uLocal_1838, &uLocal_1839, &iLocal_1867);
						bVar4 = func_253(&Local_718, iVar2, &iLocal_716, 0);
						if (func_254(&Local_718, iVar2, &uLocal_1839, &iLocal_1867, &iLocal_716, iLocal_603) || bVar4)
						{
							if (__LIB_0__::func_27(Local_718.f_310[iVar2 /*14*/].f_7, 512) || func_172(&iLocal_716, 0))
							{
								func_255(&Local_718, &uLocal_1839, &iLocal_1867, &iLocal_716, iVar2);
							}
							else if ((__LIB_3__::func_894(iLocal_1867) || bVar4) || iLocal_1867 == 0)
							{
								func_257(&Local_718, &iLocal_716, iLocal_603, &uLocal_1839, &iLocal_1867, __LIB_13__::func_666(iLocal_716, 64), 0, 0);
							}
						}
						func_258(&Local_718, &vLocal_627, iLocal_603, &uLocal_1839, &iLocal_1867, &iLocal_716, 1);
						func_259(&Local_718, Local_718.f_310[iVar2 /*14*/], iParam0, iVar2, 0);
						func_260(&Local_718, iVar2);
						break;
					case 5:
						func_258(&Local_718, &vLocal_627, iLocal_603, &uLocal_1839, &iLocal_1867, &iLocal_716, 0);
						func_252(&Local_718, &iLocal_716, iParam0, iVar2, iLocal_603, &vLocal_627, &(Local_432[iVar3 /*21*/]), &(Local_15[iVar3 /*52*/]), &uLocal_1838, &uLocal_1839, &iLocal_1867);
						if (!__LIB_0__::func_75(&(vLocal_627[7 /*3*/])))
						{
							__LIB_1__::func_148(&(vLocal_627[7 /*3*/]));
						}
						if (!__LIB_0__::func_27(Local_718.f_310[iVar2 /*14*/].f_7, -2147483648) && __LIB_2__::func_227(0, 1, Global_35, 1))
						{
							func_261(&Local_718);
							__LIB_0__::func_7(&(Local_718.f_310[iVar2 /*14*/].f_7), -2147483648);
						}
						if (__LIB_1__::func_313(&(vLocal_627[7 /*3*/]), 15f))
						{
							TASK::_0xE7FA07624574B79A(Local_718.f_310[iVar2 /*14*/], Global_35, 2, 1, 0.5f, 1, 0, 0, 0);
						}
						bVar5 = ENTITY::GET_ENTITY_SPEED(Local_718.f_1[0 /*22*/]) < 1f;
						if (!__LIB_0__::func_75(&(vLocal_627[7 /*3*/])) || __LIB_0__::func_265(&(vLocal_627[7 /*3*/])) > 4f)
						{
							bVar6 = true;
						}
						if (func_262(&Local_718, iVar2, 10f, &uLocal_1839, &iLocal_1867, &iLocal_716, iLocal_603) && (__LIB_3__::func_894(iLocal_1867) || iLocal_1867 == 0))
						{
							if (bVar6 || iLocal_1867 != 4)
							{
								bVar7 = true;
							}
						}
						if ((((bVar7 || VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(Local_718.f_1[0 /*22*/]) == Global_35) || (ENTITY::DOES_ENTITY_EXIST(Local_718.f_310[iVar2 /*14*/]) && PED::_0xE33F98BD76490ABC(Local_718.f_310[iVar2 /*14*/], PLAYER::PLAYER_ID(), 0))) || (bVar6 && func_253(&Local_718, iVar2, &iLocal_716, 0))) || bVar5)
						{
							func_257(&Local_718, &iLocal_716, iLocal_603, &uLocal_1839, &iLocal_1867, (!bVar5 && (__LIB_13__::func_666(iLocal_716, 64) || func_253(&Local_718, iVar2, &iLocal_716, 0))), 1, 0);
						}
						func_260(&Local_718, iVar2);
						func_259(&Local_718, Local_718.f_310[iVar2 /*14*/], iParam0, iVar2, 0);
						break;
					case 6:
						func_258(&Local_718, &vLocal_627, iLocal_603, &uLocal_1839, &iLocal_1867, &iLocal_716, 0);
						func_252(&Local_718, &iLocal_716, iParam0, iVar2, iLocal_603, &vLocal_627, &(Local_432[iVar3 /*21*/]), &(Local_15[iVar3 /*52*/]), &uLocal_1838, &uLocal_1839, &iLocal_1867);
						if (__LIB_2__::func_227(-3.5f, 1, Global_35, 1))
						{
							func_261(&Local_718);
							PED::PED_COWER_IN_PLACE(Local_718.f_310[iVar2 /*14*/], Global_35);
							if (iLocal_1867 != 0)
							{
								__LIB_9__::func_898(&uLocal_1839, &iLocal_1867);
							}
							VEHICLE::SET_TRAIN_CRUISE_SPEED(Local_718.f_1[0 /*22*/], 0f);
							VEHICLE::_0x4182C037AA1F0091(Local_718.f_1[0 /*22*/], 1);
							VEHICLE::_0x160C1B5AB48AB87C(Local_718.f_1[0 /*22*/], 9999f);
							func_12(&iLocal_716, 2048, 1);
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
								func_98(&uLocal_717, 134217728);
							}
							func_246(&(Local_718.f_310[iVar2 /*14*/]), 7);
						}
						func_260(&Local_718, iVar2);
						func_259(&Local_718, Local_718.f_310[iVar2 /*14*/], iParam0, iVar2, 0);
						break;
					case 7:
						func_258(&Local_718, &vLocal_627, iLocal_603, &uLocal_1839, &iLocal_1867, &iLocal_716, 0);
						func_252(&Local_718, &iLocal_716, iParam0, iVar2, iLocal_603, &vLocal_627, &(Local_432[iVar3 /*21*/]), &(Local_15[iVar3 /*52*/]), &uLocal_1838, &uLocal_1839, &iLocal_1867);
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_718.f_1[0 /*22*/], -1) != Global_35)
						{
							VEHICLE::SET_TRAIN_CRUISE_SPEED(Local_718.f_1[0 /*22*/], 0f);
						}
						if (!__LIB_0__::func_27(Local_718.f_310[iVar2 /*14*/].f_7, 256))
						{
							PED::PED_COWER_IN_PLACE(Local_718.f_310[iVar2 /*14*/], Global_35);
							__LIB_0__::func_7(&(Local_718.f_310[iVar2 /*14*/].f_7), 256);
						}
						func_260(&Local_718, iVar2);
						func_259(&Local_718, Local_718.f_310[iVar2 /*14*/], iParam0, iVar2, 1);
						break;
					case 1:
						if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_718.f_310[iVar2 /*14*/], true))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_718.f_310[iVar2 /*14*/], true, true);
						}
						func_263(&Local_718, iVar2, iLocal_716);
						if (__LIB_0__::func_27(Local_718.f_310[iVar2 /*14*/].f_7, 64))
						{
							if (MISC::GET_GAME_TIMER() >= Local_718.f_310[iVar2 /*14*/].f_13)
							{
								if (__LIB_0__::func_27(Local_718.f_310[iVar2 /*14*/].f_7, 1073741824 /* Float: 2f */))
								{
									__LIB_2__::func_478(Local_718.f_310[iVar2 /*14*/], Global_35, "GENERIC_SHOCKED_MED", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1808677283, 0, 0, 0);
								}
								PED::_0x62FDAD5E01D2DD47(Local_718.f_310[iVar3 /*14*/], Global_36, 3, 0);
								TASK::_0xE7FA07624574B79A(Local_718.f_310[iVar2 /*14*/], Global_35, 3, 2, MISC::GET_RANDOM_FLOAT_IN_RANGE(4f, 7f), 1, 0, 0, 0);
								__LIB_0__::func_8(&(Local_718.f_310[iVar2 /*14*/].f_7), 64);
							}
						}
						if (__LIB_13__::func_666(iLocal_716, 256))
						{
							func_264(&Local_718, iVar2, &iLocal_716, &uLocal_717, iLocal_603);
						}
						if (!bParam2)
						{
							if (!__LIB_0__::func_27(Local_718.f_310[iVar2 /*14*/].f_7, 8))
							{
								if (((__LIB_0__::func_27(Local_718.f_1[iParam0 /*22*/].f_4, 2) || func_265(iVar2)) || func_262(&Local_718, iVar2, 10f, &uLocal_1839, &iLocal_1867, &iLocal_716, iLocal_603)) || (ENTITY::DOES_ENTITY_EXIST(Local_718.f_310[iVar2 /*14*/]) && PED::_0xE33F98BD76490ABC(Local_718.f_310[iVar2 /*14*/], PLAYER::PLAYER_ID(), 0)))
								{
									__LIB_0__::func_7(&(Local_718.f_310[iVar2 /*14*/].f_7), 8);
									__LIB_0__::func_7(&(Local_718.f_310[iVar2 /*14*/].f_7), 512);
									func_139(&Local_718, iParam0, &vLocal_627, &uLocal_1839, &iLocal_1867, &iLocal_716, &uLocal_717, &iLocal_606, &(Local_15[iVar3 /*52*/]), &(Local_432[iVar3 /*21*/]), 1, !func_165(&Local_718, iLocal_603));
								}
							}
							if (!__LIB_0__::func_27(Local_718.f_310[iVar2 /*14*/].f_7, 2))
							{
								if (iParam0 == iLocal_603 && Local_718.f_310[iVar2 /*14*/].f_3 != 1)
								{
									if (!MAP::DOES_BLIP_EXIST(Local_718.f_310[iVar2 /*14*/].f_1))
									{
										__LIB_2__::func_73(Local_718.f_310[iVar2 /*14*/], &(Local_718.f_310[iVar2 /*14*/].f_1), -1749618580, 0, 0, "BLIP_TNRB_PASSENGER");
									}
								}
								else if (MAP::DOES_BLIP_EXIST(Local_718.f_310[iVar2 /*14*/].f_1))
								{
									__LIB_0__::func_325(&(Local_718.f_310[iVar2 /*14*/].f_1));
								}
								if (!__LIB_13__::func_666(iLocal_716, 8))
								{
									func_268(iParam0, iVar3);
								}
							}
							else
							{
								func_246(&(Local_718.f_310[iVar2 /*14*/]), 12);
							}
						}
						else if (!__LIB_13__::func_666(iLocal_716, 8))
						{
							if (func_268(iParam0, iVar3))
							{
								__LIB_0__::func_7(&(Local_718.f_310[iVar2 /*14*/].f_7), 8);
							}
						}
						break;
					case 2:
						func_269(&Local_718, iVar2);
						func_270(&Local_718, &iLocal_716, iParam0, iVar2, iLocal_603, &vLocal_627, &(Local_432[iVar3 /*21*/]), &(Local_15[iVar3 /*52*/]), &uLocal_1837);
						if (!__LIB_0__::func_27(Local_718.f_310[iVar2 /*14*/].f_7, 8))
						{
							if (func_271(iParam0, iVar2))
							{
								__LIB_0__::func_7(&(Local_718.f_310[iVar2 /*14*/].f_7), 8);
								func_272(&Local_718, iParam0, &vLocal_627, &uLocal_1839, &iLocal_1867, &iLocal_716);
								func_246(&(Local_718.f_310[iVar2 /*14*/]), 17);
								__LIB_0__::func_7(&(Local_718.f_310[iVar2 /*14*/].f_7), 2);
							}
						}
						if (__LIB_0__::func_27(Local_718.f_310[iVar2 /*14*/].f_7, 8))
						{
							if (iParam0 == iLocal_603 || Local_718.f_310[iVar2 /*14*/].f_9 < 10f)
							{
								__LIB_0__::func_7(&(Local_718.f_310[iVar2 /*14*/].f_7), 2);
								func_272(&Local_718, iParam0, &vLocal_627, &uLocal_1839, &iLocal_1867, &iLocal_716);
								func_246(&(Local_718.f_310[iVar2 /*14*/]), 17);
							}
						}
						else
						{
							if ((iLocal_603 != iParam0 && iLocal_603 < 0) && Local_718.f_1[iParam0 /*22*/].f_6 == 3)
							{
								func_273(&Local_718, &iLocal_716, iVar2, &fLocal_621);
							}
							else
							{
								func_274(&Local_718, &vLocal_627, &iLocal_716, &uLocal_1839, &iLocal_1867, &iLocal_606, iVar2, iParam0, iLocal_603, iLocal_604, &uLocal_608);
							}
							if (func_275(&Local_718, iParam0) && func_271(iParam0, iVar2))
							{
								func_246(&(Local_718.f_310[iVar2 /*14*/]), 3);
							}
						}
						if (__LIB_13__::func_666(iLocal_716, 262144) && IntToFloat(MISC::GET_GAME_TIMER()) >= fLocal_694)
						{
							func_12(&iLocal_716, 262144, 0);
							func_12(&iLocal_716, 1073741824 /* Float: 2f */, 1);
						}
						break;
					case 3:
						func_269(&Local_718, iVar2);
						func_246(&(Local_718.f_310[iVar2 /*14*/]), 17);
						break;
					case 8:
						func_268(iParam0, iVar3);
						if (__LIB_2__::func_227(0, 1, Global_35, 1))
						{
							if (__LIB_0__::func_27(Local_718.f_310[iVar2 /*14*/].f_7, 8192))
							{
								__LIB_2__::func_478(Local_718.f_310[iVar2 /*14*/], Global_35, "INSULT_RESPONSE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							else if (__LIB_0__::func_27(Local_718.f_310[iVar2 /*14*/].f_7, 4096))
							{
								__LIB_2__::func_478(Local_718.f_310[iVar2 /*14*/], Global_35, "GREET_GENERAL_STRANGER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							if (Local_718.f_310[iVar2 /*14*/].f_3 == 1)
							{
								func_246(&(Local_718.f_310[iVar2 /*14*/]), 2);
							}
							else if (Local_718.f_310[iVar2 /*14*/].f_3 == 0)
							{
								func_246(&(Local_718.f_310[iVar2 /*14*/]), 4);
							}
							else
							{
								func_246(&(Local_718.f_310[iVar2 /*14*/]), 1);
							}
							__LIB_0__::func_8(&(Local_718.f_310[iVar2 /*14*/].f_7), 134217728);
							__LIB_0__::func_7(&(Local_718.f_310[iVar2 /*14*/].f_7), 2048);
						}
						break;
					case 9:
						func_268(iParam0, iVar3);
						func_263(&Local_718, iVar2, iLocal_716);
						if (func_276(&Local_718, &vLocal_627, iVar2) && func_277(&Local_718, &vLocal_627, &iLocal_716, &uLocal_717, iParam0, iVar2, &iLocal_606, &iLocal_609))
						{
							__LIB_0__::func_37(&(vLocal_627[1 /*3*/]));
							func_246(&(Local_718.f_310[iVar2 /*14*/]), 11);
						}
						break;
					case 11:
						func_268(iParam0, iVar3);
						func_263(&Local_718, iVar2, iLocal_716);
						if (!__LIB_0__::func_75(&(vLocal_627[13 /*3*/])))
						{
							__LIB_1__::func_148(&(vLocal_627[13 /*3*/]));
						}
						func_278(&(Local_718.f_310[iVar2 /*14*/]), &iLocal_609, &uLocal_717);
						__LIB_0__::func_37(&(vLocal_627[13 /*3*/]));
						func_279(&(Local_718.f_310[iVar2 /*14*/]));
						func_246(&(Local_718.f_310[iVar2 /*14*/]), 12);
						break;
					case 12:
						func_268(iParam0, iVar3);
						func_278(&(Local_718.f_310[iVar2 /*14*/]), &iLocal_609, &uLocal_717);
						func_263(&Local_718, iVar2, iLocal_716);
						__LIB_0__::func_7(&(Local_718.f_310[iVar2 /*14*/].f_7), 2);
						__LIB_0__::func_8(&(Local_718.f_310[iVar2 /*14*/].f_7), 134217728);
						func_45(&Local_718, iParam0);
						if (__LIB_2__::func_227(0, 1, Local_718.f_310[iVar2 /*14*/], 1))
						{
							PED::_0x9A77DFD295E29B09(Local_718.f_310[iVar2 /*14*/], true);
							func_246(&(Local_718.f_310[iVar2 /*14*/]), 13);
						}
						if (MAP::DOES_BLIP_EXIST(Local_718.f_310[iVar2 /*14*/].f_1))
						{
							__LIB_0__::func_325(&(Local_718.f_310[iVar2 /*14*/].f_1));
						}
						break;
					case 13:
						func_268(iParam0, iVar3);
						func_278(&(Local_718.f_310[iVar2 /*14*/]), &iLocal_609, &uLocal_717);
						func_263(&Local_718, iVar2, iLocal_716);
						if (MAP::DOES_BLIP_EXIST(Local_718.f_310[iVar2 /*14*/].f_1))
						{
							__LIB_0__::func_325(&(Local_718.f_310[iVar2 /*14*/].f_1));
						}
						break;
					case 17:
						func_269(&Local_718, iVar2);
						if (Local_718.f_310[iVar2 /*14*/].f_3 == 1)
						{
							func_12(&iLocal_716, 1048576, 1);
						}
						if (!__LIB_0__::func_27(Local_718.f_1[iParam0 /*22*/].f_4, 2))
						{
							__LIB_0__::func_7(&(Local_718.f_1[iParam0 /*22*/].f_4), 2);
						}
						func_280(&Local_718, &iLocal_716, iVar2, iParam0, iLocal_603, &iLocal_1868, &uLocal_608, &(Local_432[iVar3 /*21*/]), &(Local_15[iVar3 /*52*/]));
						func_246(&(Local_718.f_310[iVar2 /*14*/]), 18);
						break;
					case 18:
						func_269(&Local_718, iVar2);
						if (!__LIB_0__::func_27(Local_718.f_1[iParam0 /*22*/].f_4, 2))
						{
							__LIB_0__::func_7(&(Local_718.f_1[iParam0 /*22*/].f_4), 2);
						}
						func_280(&Local_718, &iLocal_716, iVar2, iParam0, iLocal_603, &iLocal_1868, &uLocal_608, &(Local_432[iVar3 /*21*/]), &(Local_15[iVar3 /*52*/]));
						break;
					case 14:
						func_263(&Local_718, iVar2, iLocal_716);
						break;
					case 15:
						func_268(iParam0, iVar3);
						func_263(&Local_718, iVar2, iLocal_716);
						func_246(&(Local_718.f_310[iVar2 /*14*/]), 16);
						break;
					case 16:
						func_268(iParam0, iVar3);
						func_281(&Local_718, iParam0, iVar2);
						break;
					case 19:
						if (!__LIB_0__::func_27(Local_718.f_310[iVar2 /*14*/].f_7, 2))
						{
							__LIB_0__::func_7(&(Local_718.f_310[iVar2 /*14*/].f_7), 2);
						}
						if (MAP::DOES_BLIP_EXIST(Local_718.f_310[iVar2 /*14*/].f_1))
						{
							__LIB_0__::func_325(&(Local_718.f_310[iVar2 /*14*/].f_1));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_718.f_310[iVar2 /*14*/]))
						{
							Local_718.f_310[iVar2 /*14*/].f_1 = MAP::GET_BLIP_FROM_ENTITY(Local_718.f_310[iVar2 /*14*/]);
							if (MAP::DOES_BLIP_EXIST(Local_718.f_310[iVar2 /*14*/].f_1))
							{
								__LIB_0__::func_325(&(Local_718.f_310[iVar2 /*14*/].f_1));
							}
						}
						if (!__LIB_0__::func_27(Local_718.f_310[iVar2 /*14*/].f_7, 128))
						{
							__LIB_0__::func_7(&(Local_718.f_310[iVar2 /*14*/].f_7), 128);
						}
						__LIB_0__::func_7(&(Local_718.f_310[iVar2 /*14*/].f_7), 2048);
						__LIB_2__::func_480(&(Local_15[iVar3 /*52*/]), 0, 0, 1, 0);
						if (Local_718.f_310[iVar2 /*14*/].f_3 == 1)
						{
							func_45(&Local_718, iLocal_603);
						}
						func_246(&(Local_718.f_310[iVar2 /*14*/]), 20);
						func_244(iParam0, iVar2);
						if (__LIB_0__::func_27(Local_718.f_310[iVar2 /*14*/].f_7, 32))
						{
							PED::_0x3088634CF8C819CF(Local_718.f_310[iVar2 /*14*/]);
						}
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_718.f_310[iVar2 /*14*/]));
						Local_718.f_1[iParam0 /*22*/].f_9++;
						PED::_0x7D4E70A67A651C71(1);
						break;
				}
			}
			else
			{
				func_282(iParam0, iVar3);
			}
		}
		else if (!__LIB_0__::func_27(Local_718.f_310[iVar2 /*14*/].f_7, 2))
		{
			__LIB_0__::func_7(&(Local_718.f_310[iVar2 /*14*/].f_7), 2);
		}
		iVar3++;
	}
}

bool func_144(int iParam0, int iParam1)
{
	if (iParam1 == 0 || iParam1 == iParam0->f_1102)
	{
		return false;
	}
	return true;
}

void func_145(int iParam0, int iParam1)
{
	iParam0->f_1[iParam1 /*22*/].f_4 = 0;
	iParam0->f_1[iParam1 /*22*/].f_3 = 0;
	iParam0->f_1[iParam1 /*22*/].f_9 = 0;
	iParam0->f_1[iParam1 /*22*/].f_8 = 0;
	iParam0->f_1[iParam1 /*22*/].f_10 = 0;
	iParam0->f_1[iParam1 /*22*/].f_20 = -1;
	func_106(iParam0, iParam1);
	ENTITY::_0x119A5714578F4E05(iParam0->f_1[iParam1 /*22*/], 0);
	VEHICLE::_0xD4907EF4334C7602(iParam0->f_1[iParam1 /*22*/], 1);
	VEHICLE::_0x68830738A6BFB370(iParam0->f_1[iParam1 /*22*/], 1);
	PED::_0x7D4E70A67A651C71(func_86(iParam0, iParam1));
	__LIB_0__::func_7(&(iParam0->f_1[iParam1 /*22*/].f_4), 65536);
}

void func_146(int iParam0, var uParam1, int iParam2)
{
	if (!__LIB_8__::func_747(uParam1, -2147483648))
	{
		VEHICLE::_0xD4907EF4334C7602(iParam0->f_1[iParam2 /*22*/], 0);
		VEHICLE::_0x68830738A6BFB370(iParam0->f_1[iParam2 /*22*/], 0);
	}
	__LIB_0__::func_8(&(iParam0->f_1[iParam2 /*22*/].f_4), 65536);
}

void func_147(int iParam0)
{
	int iVar0;
	iVar0 = func_132(iParam0);
	if (iVar0 != 0)
	{
		__LIB_2__::func_478(iVar0, Global_35, "GENERIC_FRIGHTENED_HIGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1808677283, 0, 0, 0);
		func_65(&iLocal_609);
	}
}

void func_149(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar2 = -1;
	if (bParam1)
	{
		func_283(&Local_718, iLocal_603, &iVar2);
	}
	iVar1 = 0;
	while (iVar1 < Local_718.f_1[iParam0 /*22*/].f_8)
	{
		iVar0 = Local_718.f_1[iParam0 /*22*/].f_11[iVar1];
		if (iVar0 >= 0)
		{
			if (Local_718.f_310[iVar0 /*14*/].f_3 != 1 && Local_718.f_310[iVar0 /*14*/].f_3 != 0)
			{
				__LIB_0__::func_7(&(Local_718.f_310[iVar0 /*14*/].f_7), 64);
				if (iVar2 == iVar0)
				{
					iVar3 = 300;
					__LIB_0__::func_7(&(Local_718.f_310[iVar0 /*14*/].f_7), 1073741824 /* Float: 2f */);
				}
				else
				{
					iVar3 = (300 + MISC::GET_RANDOM_INT_IN_RANGE(300, 1000));
				}
				Local_718.f_310[iVar0 /*14*/].f_13 = (iLocal_612 + iVar3);
			}
		}
		iVar1++;
	}
}

bool func_150()
{
	int iVar0;
	if (__LIB_13__::func_666(iLocal_716, 2))
	{
		return true;
	}
	iVar0 = Local_718.f_1[0 /*22*/].f_11[0];
	if (ENTITY::IS_ENTITY_DEAD(Local_718.f_310[iVar0 /*14*/]) && ENTITY::_0x3EC28DA1FFAC9DDD(Local_718.f_310[iVar0 /*14*/], Global_35, 0, 0))
	{
		return true;
	}
	if (VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(Local_718.f_1[0 /*22*/]) != Local_718.f_310[iVar0 /*14*/])
	{
		return true;
	}
	if (__LIB_0__::func_27(Local_718.f_310[iVar0 /*14*/].f_7, 4194304) || __LIB_0__::func_27(Local_718.f_310[iVar0 /*14*/].f_7, 512))
	{
		return true;
	}
	return false;
}

char* func_152(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "GENERIC_CURSE_MED";
		case 1:
			return "BLOCKED_GENERIC";
		case 2:
			return "GENERIC_ANGRY_REACTION";
		case 3:
			return "GENERIC_CURSE_HIGH";
		default:
			break;
	}
	return "BLOCKED_GENERIC";
}

bool func_155(var uParam0)
{
	if (__LIB_8__::func_747(uParam0, 2))
	{
		return false;
	}
	if (__LIB_0__::func_474(162))
	{
		return false;
	}
	if (!__LIB_8__::func_747(uParam0, 1))
	{
		return false;
	}
	return true;
}

bool func_158(int iParam0, int iParam1, var uParam2)
{
	if (__LIB_8__::func_747(uParam2, 4))
	{
		return false;
	}
	if (__LIB_0__::func_474(153))
	{
		return false;
	}
	if (*iParam0 == 2 || *iParam0 == 3)
	{
		return false;
	}
	if (!func_290(iParam0, iParam1))
	{
		return false;
	}
	return true;
}

bool func_159(int iParam0, var uParam1)
{
	if (__LIB_8__::func_747(uParam1, 8))
	{
		return false;
	}
	if (__LIB_0__::func_474(154))
	{
		return false;
	}
	if (!func_291(iParam0, 1097859072 /* Float: 15f */))
	{
		return false;
	}
	if (!__LIB_0__::func_71(Global_35))
	{
		return false;
	}
	return true;
}

bool func_160(int iParam0, int iParam1, var uParam2, var uParam3)
{
	if (__LIB_8__::func_747(uParam3, 16))
	{
		return false;
	}
	if (__LIB_0__::func_474(160))
	{
		return false;
	}
	if (iParam1 < 0 || !__LIB_13__::func_666(*uParam2, 64))
	{
		return false;
	}
	if (!iParam0->f_1[iParam1 /*22*/].f_6 == 2)
	{
		return false;
	}
	if (iParam0->f_1[iParam1 /*22*/].f_8 <= 0)
	{
		return false;
	}
	return true;
}

bool func_161(int iParam0, var uParam1, var uParam2)
{
	if (__LIB_8__::func_747(uParam2, 32))
	{
		return false;
	}
	if (*iParam0 == 2 || *iParam0 == 3)
	{
		return false;
	}
	if (__LIB_0__::func_474(155))
	{
		return false;
	}
	if (!__LIB_13__::func_666(*uParam1, 64))
	{
		return false;
	}
	return true;
}

bool func_162(int iParam0, var uParam1)
{
	if (__LIB_8__::func_747(uParam1, 64))
	{
		return false;
	}
	if (__LIB_0__::func_474(157))
	{
		return false;
	}
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 1)
	{
		return false;
	}
	return true;
}

bool func_163()
{
	if (!WEAPON::_0xCB690F680A3EA971(Global_35, 4))
	{
		return false;
	}
	if (!PED::GET_PED_RESET_FLAG(Global_35, 0))
	{
		return false;
	}
	if (!__LIB_13__::func_666(iLocal_716, 128))
	{
		return false;
	}
	if (iLocal_607 < 0)
	{
		return false;
	}
	if (Local_718.f_310[iLocal_607 /*14*/].f_3 == 1)
	{
		return false;
	}
	return true;
}

bool func_164()
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(Local_718.f_1[0 /*22*/])))
	{
		iVar0 = VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(Local_718.f_1[0 /*22*/]);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && FIRE::IS_EXPLOSION_IN_SPHERE(25, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 8.25f))
		{
			func_12(&iLocal_716, 2097152, 1);
			VEHICLE::SET_TRAIN_CRUISE_SPEED(Local_718.f_1[0 /*22*/], 0f);
			return true;
		}
	}
	return false;
}

bool func_165(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return false;
	}
	if (iParam0->f_1[iParam1 /*22*/].f_8 < 1)
	{
		return false;
	}
	return true;
}

bool func_166(var uParam0, var uParam1)
{
	if (!__LIB_13__::func_666(*uParam0, 4))
	{
		return false;
	}
	if (!__LIB_13__::func_666(*uParam0, 64))
	{
		return false;
	}
	return true;
}

int func_167(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	return __LIB_9__::func_234(iParam0, 0f, 0f, 0f, iParam1, iParam2, bParam3, iParam4, bParam5);
}

bool func_168(var uParam0, var uParam1, var uParam2)
{
	if (__LIB_13__::func_666(*uParam1, 134217728))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -808813879))
		{
			return true;
		}
	}
	else if (__LIB_1__::func_285(uParam0[15 /*3*/], func_294(*uParam2)))
	{
		*uParam2++;
		return true;
	}
	return false;
}

char* func_169()
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iVar0)
	{
		case 0:
		case default:
			return "GENERIC_FRIGHTENED_MED";
		case 1:
			return "GENERIC_SHOCKED_MED";
			default:
				break;
	}
}

bool func_170(var uParam0)
{
	if (!__LIB_0__::func_75(uParam0[15 /*3*/]))
	{
		return true;
	}
	if (__LIB_1__::func_285(uParam0[15 /*3*/], 8f))
	{
		return true;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2019359053))
	{
		return true;
	}
	return false;
}

int func_171()
{
	return 4992;
}

bool func_172(var uParam0, bool bParam1)
{
	struct<17> Var0;
	if (__LIB_13__::func_666(*uParam0, 1))
	{
		return false;
	}
	if (LAW::_0xAD401C63158ACBAA(PLAYER::GET_PLAYER_INDEX()))
	{
		LAW::_0x9C5BD8C562565CE6(&Var0);
		if (Var0.f_11 == 6)
		{
			return true;
		}
		else if (!bParam1 && (Var0.f_15 || Var0.f_16))
		{
			return true;
		}
	}
	return false;
}

bool func_173()
{
	float fVar0;
	vector3 vVar1;
	var uVar4;
	var uVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	vector3 vVar11;
	if (__LIB_13__::func_666(iLocal_716, 4))
	{
		return false;
	}
	if (!__LIB_13__::func_666(iLocal_716, 131072) && Local_718.f_1100 > 0)
	{
		return false;
	}
	fVar0 = 120f;
	if (__LIB_13__::func_666(iLocal_716, 8388608))
	{
		fVar0 = 60f;
	}
	if (__LIB_1__::func_285(&(vLocal_627[14 /*3*/]), fVar0))
	{
		return true;
	}
	fVar0 = 60f;
	if (__LIB_13__::func_666(iLocal_716, 8388608))
	{
		fVar0 = 30f;
	}
	if (__LIB_1__::func_285(&(vLocal_627[14 /*3*/]), fVar0))
	{
		iVar10 = func_295();
		if ((iVar10 > 0 && iVar10 < 14) && ENTITY::DOES_ENTITY_EXIST(Local_718.f_1[iVar10 /*22*/]))
		{
			vVar11 = { ENTITY::GET_ENTITY_COORDS(Local_718.f_1[iVar10 /*22*/], true, false) };
			if (PATHFIND::GET_CLOSEST_ROAD(vVar11, 100f, 1, &vVar1, &uVar4, &uVar7, &uVar8, &uVar9, true))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar11, vVar1, true) < 75f)
				{
					return true;
				}
			}
		}
	}
	fVar0 = 15f;
	if (__LIB_13__::func_666(iLocal_716, 8388608))
	{
		fVar0 = 7.5f;
	}
	if (!__LIB_1__::func_285(&(vLocal_627[14 /*3*/]), fVar0))
	{
		return false;
	}
	if (fLocal_695 < 300f)
	{
		return true;
	}
	return false;
}

bool func_176()
{
	if (!__LIB_13__::func_666(iLocal_716, 16384))
	{
		return true;
	}
	if (!VEHICLE::_0xE887BD31D97793F6(Local_718.f_1[0 /*22*/]))
	{
		return true;
	}
	if (fLocal_695 > 300f)
	{
		return true;
	}
	return false;
}

bool func_177(int iParam0)
{
	int iVar0;
	iVar0 = VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iParam0->f_1[0 /*22*/]);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (iVar0 == Global_35)
	{
		return false;
	}
	return true;
}

void func_179()
{
	VEHICLE::_0x4182C037AA1F0091(Local_718.f_1[0 /*22*/], 1);
	VEHICLE::_0x160C1B5AB48AB87C(Local_718.f_1[0 /*22*/], -1f);
	VEHICLE::_0xDC69F6913CCA0B99(Local_718.f_1[0 /*22*/], 1);
	VEHICLE::SET_TRAIN_CRUISE_SPEED(Local_718.f_1[0 /*22*/], 0f);
	VEHICLE::_0x9F29999DFDF2AEB8(Local_718.f_1[0 /*22*/], 0f);
}

bool func_180()
{
	float fVar0;
	if (__LIB_13__::func_666(iLocal_716, 1024))
	{
		return false;
	}
	if (VEHICLE::_0xE887BD31D97793F6(Local_718.f_1[0 /*22*/]) && fLocal_695 < 100f)
	{
		return true;
	}
	if (!func_299())
	{
		return false;
	}
	if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_718.f_1[0 /*22*/], -1) == Global_35)
	{
		return false;
	}
	if (iLocal_603 < 0)
	{
		return false;
	}
	if ((!__LIB_13__::func_666(iLocal_716, 131072) && !__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1)) && Local_718.f_1100 > 0)
	{
		return false;
	}
	fVar0 = 45f;
	if (__LIB_13__::func_666(iLocal_716, 8388608))
	{
		fVar0 = 35f;
	}
	else if (__LIB_13__::func_666(iLocal_716, 32))
	{
		fVar0 = 40f;
	}
	if (__LIB_1__::func_285(&(vLocal_627[19 /*3*/]), fVar0))
	{
		return true;
	}
	if (!func_172(&iLocal_716, 1))
	{
		return false;
	}
	if (!__LIB_1__::func_285(&(vLocal_627[19 /*3*/]), 30f))
	{
		return false;
	}
	return true;
}

char* func_181()
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	switch (iVar0)
	{
		case 0:
		case default:
			return "PLEAD";
		case 1:
			return "DONT_HURT_ME";
		case 2:
			return "SCARED_HELP";
		case 3:
			return "GENERIC_FRIGHTENED_HIGH";
			default:
				break;
	}
}

char* func_185(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PRTRN_START";
		case 1:
			return "PRTRN_IDLE";
		default:
			break;
	}
	return "";
}

int func_200(int iParam0, int iParam1)
{
	var uVar0;
	return func_306(&uVar0, iParam0, iParam1);
}

int func_202(int iParam0, int iParam1)
{
	var uVar0;
	return func_307(&uVar0, iParam0, iParam1);
}

bool func_204()
{
	int iVar0;
	if (__LIB_1__::func_120(__LIB_0__::func_12()))
	{
		return true;
	}
	if (Local_718 != 14)
	{
		if (__LIB_1__::func_120(__LIB_1__::func_447(VEHICLE::_0x1E8A921112891651(Global_1425371[Local_718 /*373*/].f_1), 1)))
		{
			return true;
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_718.f_1[0 /*22*/]) && __LIB_1__::func_120(__LIB_1__::func_447(ENTITY::GET_ENTITY_COORDS(Local_718.f_1[0 /*22*/], true, false), 1)))
		{
			return true;
		}
		if (Local_718.f_1102 > 0)
		{
			iVar0 = Local_718.f_1102;
		}
		else if (Local_718.f_1098 > 0)
		{
			iVar0 = (Local_718.f_1098 - 1);
		}
		if (iVar0 > 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_718.f_1[Local_718.f_1102 /*22*/]) && __LIB_1__::func_120(__LIB_1__::func_447(ENTITY::GET_ENTITY_COORDS(Local_718.f_1[Local_718.f_1102 /*22*/], true, false), 1)))
			{
				return true;
			}
		}
	}
	return false;
}

int func_205(int iParam0)
{
	switch (iParam0)
	{
		case joaat("NORTHCOALCAR01X"):
		case joaat("NORTHSTEAMER01X"):
		case joaat("PRIVATESTEAMER01X"):
		case joaat("WINTERCOALCAR"):
		case joaat("PRIVATECOALCAR01X"):
		case joaat("WINTERSTEAMER"):
			return 0;
		case joaat("PRIVATEBOXCAR01X"):
		case joaat("MIDLANDREFRIGERATORCAR"):
		case joaat("PRIVATEFLATCAR01X"):
		case joaat("PRIVATEBOXCAR04X"):
		case joaat("ARMOREDCAR03X"):
		case joaat("PRIVATEARMOURED"):
		case joaat("MIDLANDBOXCAR05X"):
		case joaat("PRIVATEBOXCAR02X"):
		case joaat("COALHOPPER01X"):
		case joaat("PRIVATEBAGGAGE01X"):
			return 1;
		case joaat("NORTHPASSENGER03X"):
		case joaat("PRIVATEOPENSLEEPER01X"):
		case joaat("PRIVATEOBSERVATIONCAR"):
		case joaat("PRIVATEPASSENGER01X"):
		case joaat("PRIVATEDINING01X"):
		case joaat("NORTHPASSENGER01X"):
		case joaat("PRIVATEOPENSLEEPER02X"):
			return 2;
		case joaat("CABOOSE01X"):
			return 3;
		default:
			break;
	}
	return -1;
}

int func_206(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PRIVATEOPENSLEEPER01X"):
		case joaat("PRIVATEOBSERVATIONCAR"):
		case joaat("PRIVATEPASSENGER01X"):
		case joaat("PRIVATEDINING01X"):
		case joaat("NORTHPASSENGER01X"):
		case joaat("PRIVATEOPENSLEEPER02X"):
			return 0;
		case joaat("NORTHPASSENGER03X"):
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_209(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SCRIPT_PROC@ROBBERIES@TRAIN@ROB_PASSENGERS@LONG_ARMS";
		case 1:
			return "SCRIPT_PROC@ROBBERIES@TRAIN@ROB_PASSENGERS@PISTOLS";
		default:
			break;
	}
	return "SCRIPT_PROC@ROBBERIES@TRAIN@ROB_PASSENGERS@LONG_ARMS";
	return "";
}

bool func_215(int iParam0, int iParam1)
{
	if (iParam0->f_1[iParam1 /*22*/].f_6 == 1)
	{
		if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) >= 0.6f)
		{
			return false;
		}
	}
	return true;
}

int func_216(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1[iParam1 /*22*/]))
	{
		if (iParam0->f_1099 < 45 && iParam0->f_1[iParam1 /*22*/].f_8 < 8)
		{
			if (!ITEMSET::IS_ITEMSET_VALID(iLocal_601))
			{
				iLocal_601 = ITEMSET::CREATE_ITEMSET(true);
			}
			ITEMSET::_CLEAR_ITEMSET(iLocal_601);
			iVar2 = VEHICLE::_0x0E558D3A49D759D6(iParam0->f_1[iParam1 /*22*/], iLocal_601);
			iVar4 = VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iParam0->f_1[iParam1 /*22*/]);
			if (ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
				__LIB_5__::func_510(iVar4, iLocal_601);
				iVar2++;
			}
			if ((func_312(iLocal_603, iParam1) || __LIB_13__::func_666(iLocal_716, 4096)) || __LIB_13__::func_666(iLocal_716, 1048576))
			{
				ENTITY::_0x119A5714578F4E05(iParam0->f_1[iParam1 /*22*/], 0);
				func_120(iParam0, iParam1, 0);
			}
			if (iVar2 <= iParam0->f_1[iParam1 /*22*/].f_8)
			{
				if (ITEMSET::IS_ITEMSET_VALID(iLocal_601))
				{
					ITEMSET::_CLEAR_ITEMSET(iLocal_601);
				}
				return iParam0->f_1[iParam1 /*22*/].f_8;
			}
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				iVar5 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iLocal_601));
				if (!ENTITY::IS_ENTITY_DEAD(iVar5))
				{
					if (PED::IS_PED_HUMAN(iVar5))
					{
						if (iVar5 == Global_35)
						{
						}
						else if (!LAW::_0x40851BCC33ACD9AB(iVar5) && !LAW::_0x0EAF918F751F27BA(iVar5))
						{
							if (!func_313(&iVar5))
							{
								if (iParam0->f_1099 >= 45)
								{
									if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar5))
									{
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar5, true, false);
									}
									__LIB_2__::func_426(&iVar5);
									Jump @520; //curOff = 363
								}
								else if (iParam0->f_1[iParam1 /*22*/].f_8 >= 8)
								{
									if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar5))
									{
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar5, true, false);
									}
									__LIB_2__::func_426(&iVar5);
								}
								else
								{
									iVar3 = iParam0->f_1[iParam1 /*22*/].f_8;
									iParam0->f_310[iParam0->f_1099 /*14*/] = iVar5;
									iParam0->f_1[iParam1 /*22*/].f_11[iVar3] = iParam0->f_1099;
									__LIB_0__::func_7(&(iParam0->f_1[iParam1 /*22*/].f_4), 4);
									iVar0++;
									iParam0->f_1[iParam1 /*22*/].f_8++;
									iParam0->f_1099++;
								}
								iVar1++;
								if (ITEMSET::IS_ITEMSET_VALID(iLocal_601))
								{
									ITEMSET::_CLEAR_ITEMSET(iLocal_601);
								}
								Jump @561; //curOff = 546
								iVar0 = iParam0->f_1[iParam1 /*22*/].f_8;
								if (ITEMSET::IS_ITEMSET_VALID(iLocal_601))
								{
									ITEMSET::_CLEAR_ITEMSET(iLocal_601);
								}
								return iVar0;
							}
						}
					}
				}
			}
		}
	}
}

void func_217(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_718.f_1[iParam0 /*22*/].f_8)
	{
		iVar1 = Local_718.f_1[iParam0 /*22*/].f_11[iVar0];
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_718.f_310[iVar1 /*14*/], true))
		{
		}
		else
		{
			if (__LIB_0__::func_27(Local_718.f_310[iVar1 /*14*/].f_7, 16))
			{
				__LIB_0__::func_8(&(Local_718.f_310[iVar1 /*14*/].f_7), 16);
			}
			if (func_314(iParam0, iVar0))
			{
				func_282(iParam0, iVar0);
			}
		}
		iVar0++;
	}
}

bool func_226(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return false;
	}
	if (!__LIB_1__::func_205(Local_718.f_310[iParam1 /*14*/], Local_718.f_1[iParam0 /*22*/].f_1, 1, 0))
	{
		return false;
	}
	if (Local_718.f_310[iParam1 /*14*/].f_4 > 1)
	{
		return false;
	}
	if (__LIB_0__::func_27(Local_718.f_310[iParam1 /*14*/].f_7, 2))
	{
		return false;
	}
	return true;
}

bool func_227(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = Local_718.f_1[iParam0 /*22*/].f_11[iParam1];
	if (iVar0 < 0)
	{
		return false;
	}
	if (!__LIB_0__::func_272(Local_718.f_310[iVar0 /*14*/], 0))
	{
		return false;
	}
	if (Local_718.f_310[iVar0 /*14*/].f_3 == 1)
	{
		return false;
	}
	if (LAW::_0x0EAF918F751F27BA(Local_718.f_310[iVar0 /*14*/]))
	{
		return false;
	}
	return true;
}

bool func_230(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!__LIB_13__::func_666(*uParam1, 64))
	{
		return false;
	}
	if (__LIB_13__::func_666(*uParam1, 256))
	{
		return false;
	}
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam0->f_1[iParam2 /*22*/].f_8 < 1)
	{
		return false;
	}
	if (iParam2 == 0)
	{
		return false;
	}
	if (__LIB_13__::func_666(*uParam1, 8))
	{
		return false;
	}
	if (bParam3)
	{
		return true;
	}
	if (func_172(uParam1, 0))
	{
		return false;
	}
	return true;
}

void func_231(int iParam0, int iParam1)
{
	if (iParam0 > 1)
	{
		if (iParam1 == 0)
		{
			__LIB_2__::func_478(Global_35, Global_35, "ROB_WEALTHY_GROUP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
		}
		else
		{
			__LIB_2__::func_478(Global_35, Global_35, "ROB_GROUP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
		}
	}
	else if (iParam0 > 0)
	{
		__LIB_2__::func_478(Global_35, Global_35, "ROB_GENERAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
	}
}

void func_232(var uParam0)
{
	func_12(uParam0, 4096, 1);
	__LIB_0__::func_7(&(Global_1392581.f_3), 4);
	__LIB_11__::func_10(2, 1, 0);
	__LIB_11__::func_10(1, 1, 0);
}

void func_234(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, int* iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, func_171(), false);
	func_14(uParam4, 134217728);
	HUD::_DISPLAY_HUD_COMPONENT(724769646);
	PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, false, false);
	TASK::OPEN_SEQUENCE_TASK(&iVar3);
	if (!func_328())
	{
		iVar0 = func_329(iParam5, 1);
	}
	else
	{
		iVar0 = __LIB_0__::func_153(Global_35, 0, 1, 0);
	}
	if (__LIB_0__::func_154(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			iVar1 = 0;
		}
		else
		{
			iVar1 = 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iVar2, 0, -1f, -1f, -1f);
		}
		TASK::TASK_PLAY_ANIM(0, func_209(iVar1), func_331(iVar1), 2f, -2f, -1, 67108880, 0f, false, 65536, false, 0, false);
	}
	TASK::CLOSE_SEQUENCE_TASK(iVar3);
	TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar3);
	TASK::CLEAR_SEQUENCE_TASK(&iVar3);
	__LIB_2__::func_480(uParam6, 0, 0, 1, 0);
	__LIB_1__::func_491(iParam7, 1);
	__LIB_1__::func_148(uParam2[15 /*3*/]);
	func_12(uParam3, 134217728, 1);
	func_12(uParam3, 512, 1);
	__LIB_0__::func_7(&(iParam0->f_1[iParam1 /*22*/].f_4), 2);
}

void func_235(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		VEHICLE::_0xCBF88256E44D5D39(iParam0, 1);
		ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(iParam0, true);
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(iParam0, true);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iParam0, true);
		AITRANSPORT::_0xBA8818212633500A(iParam0, 0, 0);
	}
}

void func_236(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (__LIB_2__::func_84())
	{
		if (__LIB_0__::func_75(uParam2[19 /*3*/]))
		{
			__LIB_0__::func_37(uParam2[19 /*3*/]);
		}
		return;
	}
	if (PED::IS_PED_SHOOTING(Global_35))
	{
		LAW::_0x785177E4D57D7389(PLAYER::GET_PLAYER_INDEX(), joaat("CRIME_DISTURBANCE"), 0, 0, -1);
		if (!__LIB_0__::func_75(uParam2[19 /*3*/]))
		{
			__LIB_1__::func_148(uParam2[19 /*3*/]);
		}
	}
	if (!__LIB_13__::func_666(*uParam1, 32))
	{
		if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0->f_1[iParam3 /*22*/], true, false), (19f / 2f), true))
		{
			func_12(uParam1, 32, 1);
		}
	}
}

void func_237(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	if (!__LIB_13__::func_666(*uParam1, 1048576))
	{
		if (__LIB_0__::func_27(iParam0->f_1[iParam3 /*22*/].f_4, 256))
		{
			iVar1 = 0;
			while (iVar1 < iParam0->f_1[iParam3 /*22*/].f_8)
			{
				iVar0 = iParam0->f_1[iParam3 /*22*/].f_11[iVar1];
				if ((iVar0 >= 0 && iParam0->f_310[iVar0 /*14*/].f_3 == 1) && PED::IS_PED_SHOOTING(iParam0->f_310[iVar0 /*14*/]))
				{
					func_12(uParam1, 1048576, 1);
					if (!__LIB_0__::func_75(uParam2[19 /*3*/]))
					{
						__LIB_1__::func_148(uParam2[19 /*3*/]);
					}
				}
				iVar1++;
			}
		}
	}
}

void func_238(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (__LIB_8__::func_747(uParam2, 268435456))
	{
		if (__LIB_0__::func_27(iParam0->f_1[iParam3 /*22*/].f_4, 32768))
		{
			__LIB_0__::func_8(&(iParam0->f_1[iParam3 /*22*/].f_4), 32768);
		}
		return;
	}
	if (func_334(iParam0, uParam1, uParam2, iParam3))
	{
		if (func_335(iParam0, iParam3))
		{
			__LIB_0__::func_7(&(iParam0->f_1[iParam3 /*22*/].f_4), 32768);
		}
		else
		{
			__LIB_0__::func_8(&(iParam0->f_1[iParam3 /*22*/].f_4), 32768);
		}
	}
}

void func_239(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(Local_718.f_1[iParam0 /*22*/].f_1) && FIRE::_IS_EXPLOSION_IN_VOLUME(-1, Local_718.f_1[iParam0 /*22*/].f_1))
	{
		LAW::_0x785177E4D57D7389(PLAYER::GET_PLAYER_INDEX(), joaat("CRIME_VANDALISM_VEHICLE"), 0, 0, -1);
		LAW::_0x785177E4D57D7389(PLAYER::GET_PLAYER_INDEX(), joaat("CRIME_VEHICLE_DESTRUCTION"), 0, 0, -1);
		__LIB_0__::func_267(1);
		LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), joaat("CRIME_TRAIN_ROBBERY"), 0, 0, 0, 0, 0, 0, 0);
		if (!LAW::_0xAD401C63158ACBAA(PLAYER::PLAYER_ID()))
		{
			if (__LIB_1__::func_923())
			{
				LAW::_0x75CBF20BA47E4F89(Global_36, 0);
			}
			else
			{
				LAW::_0x75CBF20BA47E4F89(Global_36, joaat("LAW_CUSTOM_TRAIN_ROBBERY"));
			}
		}
		LAW::_0x987BE590FB9D41E5(1);
		LAW::_0xDCF12B89624AAC96(1);
	}
}

int func_240(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = iParam0;
	while (iVar0 >= 1)
	{
		if (__LIB_0__::func_27(Local_718.f_1[iVar0 /*22*/].f_4, 2))
		{
			iVar1 = MISC::ABSI((iParam0 - iVar0));
			Jump @87; //curOff = 51
		}
		else if (Local_718.f_1[iVar0 /*22*/].f_8 == 0)
		{
			iVar3++;
		}
		iVar0 = (iVar0 + -1);
	}
	if (iVar1 > -1 && iVar3 > 0)
	{
		iVar1 = (iVar1 + iVar3 * 1);
	}
	iVar3 = 0;
	iVar0 = iParam0;
	while (iVar0 <= (Local_718.f_1098 - 1))
	{
		if (__LIB_0__::func_27(Local_718.f_1[iVar0 /*22*/].f_4, 2))
		{
			iVar2 = MISC::ABSI((iParam0 - iVar0));
			Jump @198; //curOff = 162
		}
		else if (Local_718.f_1[iVar0 /*22*/].f_8 == 0)
		{
			iVar3++;
		}
		iVar0++;
	}
	if (iVar2 > -1 && iVar3 > 0)
	{
		iVar2 = (iVar2 + iVar3 * 1);
	}
	if (iVar1 >= 0 && iVar2 < 0)
	{
		return iVar1;
	}
	else if (iVar2 >= 0 && iVar1 < 0)
	{
		return iVar2;
	}
	return __LIB_0__::func_55(iVar1 < iVar2, iVar1, iVar2);
}

void func_241(int iParam0, int iParam1, int iParam2)
{
	__LIB_0__::func_325(&(iParam0->f_310[iParam1 /*14*/].f_1));
	iParam0->f_310[iParam1 /*14*/].f_2 = 0;
	iParam0->f_310[iParam1 /*14*/].f_4 = 0;
	iParam0->f_310[iParam1 /*14*/].f_7 = 0;
	iParam0->f_310[iParam1 /*14*/].f_3 = -1;
	iParam0->f_310[iParam1 /*14*/].f_10 = 0f;
	iParam0->f_310[iParam1 /*14*/].f_9 = -1f;
	iParam0->f_310[iParam1 /*14*/].f_8 = -1;
	iParam0->f_310[iParam1 /*14*/].f_11 = -1;
	iParam0->f_310[iParam1 /*14*/].f_13 = 0;
	iParam0->f_310[iParam1 /*14*/].f_12 = 0;
	iParam0->f_310[iParam1 /*14*/].f_6 = 0;
	PED::SET_PED_KEEP_TASK(iParam0->f_310[iParam1 /*14*/], true);
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iParam0->f_310[iParam1 /*14*/]));
	iParam0->f_310[iParam1 /*14*/] = 0;
	iParam0->f_1[iParam2 /*22*/].f_8 = (iParam0->f_1[iParam2 /*22*/].f_8 - 1);
	iParam0->f_1099 = (iParam0->f_1099 - 1);
}

void func_242(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_310[iParam1 /*14*/]))
	{
		iParam0->f_310[iParam1 /*14*/].f_9 = __LIB_2__::func_118(iParam0->f_310[iParam1 /*14*/], 1, 1);
	}
	else
	{
		iParam0->f_310[iParam1 /*14*/].f_9 = 9999.9f;
	}
}

void func_243(int iParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	float fVar2;
	if (!__LIB_0__::func_75(&(vLocal_627[8 /*3*/])))
	{
		__LIB_1__::func_148(&(vLocal_627[8 /*3*/]));
	}
	if (!__LIB_0__::func_27(Local_718.f_310[iParam1 /*14*/].f_7, 512))
	{
		if (__LIB_0__::func_27(Local_718.f_1[iParam0 /*22*/].f_4, 2))
		{
			__LIB_0__::func_7(&(Local_718.f_310[iParam1 /*14*/].f_7), 512);
			__LIB_0__::func_7(&(Local_718.f_310[iParam1 /*14*/].f_7), 2048);
		}
		else if (__LIB_13__::func_666(iLocal_716, 8388608))
		{
			__LIB_0__::func_7(&(Local_718.f_310[iParam1 /*14*/].f_7), 512);
			__LIB_0__::func_7(&(Local_718.f_310[iParam1 /*14*/].f_7), 2048);
		}
		else if (__LIB_1__::func_285(&(vLocal_627[8 /*3*/]), 3f))
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
			iVar1 = Local_718.f_1[iParam0 /*22*/].f_21;
			if (iVar1 == 0)
			{
				__LIB_0__::func_7(&(Local_718.f_310[iParam1 /*14*/].f_7), 512);
				__LIB_0__::func_7(&(Local_718.f_310[iParam1 /*14*/].f_7), 2048);
			}
			else
			{
				fVar2 = (1f / BUILTIN::TO_FLOAT(iVar1));
				if (fVar0 < fVar2)
				{
					__LIB_0__::func_7(&(Local_718.f_310[iParam1 /*14*/].f_7), 512);
					__LIB_0__::func_7(&(Local_718.f_310[iParam1 /*14*/].f_7), 2048);
					__LIB_0__::func_37(&(vLocal_627[8 /*3*/]));
				}
			}
		}
	}
}

int func_244(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_27(Local_718.f_310[iParam1 /*14*/].f_7, 128) && __LIB_2__::func_901(Local_718.f_310[iParam1 /*14*/], Global_35))
	{
		__LIB_0__::func_7(&(Local_718.f_1[iParam0 /*22*/].f_4), 8);
		func_12(&iLocal_716, 8388608, 1);
		__LIB_0__::func_7(&(Local_718.f_310[iParam1 /*14*/].f_7), 128);
		return 1;
	}
	return 0;
}

void func_245(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < iParam0->f_1098)
	{
		if (__LIB_1__::func_205(iParam0->f_310[iParam1 /*14*/], iParam0->f_1[iVar1 /*22*/].f_1, 0, 0))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if (iParam2 >= 0)
	{
		if (iParam2 > iVar0)
		{
			iVar2 = iVar0;
			iVar3 = iParam2;
		}
		else
		{
			iVar2 = iParam2;
			iVar3 = iVar0;
		}
		iVar1 = iVar2;
		while (iVar1 <= iVar3)
		{
			func_337(iParam0, iVar1);
			iVar1++;
		}
	}
	else
	{
		func_337(iParam0, iVar1);
	}
}

void func_246(var uParam0, int iParam1)
{
	if (iParam1 != uParam0->f_4)
	{
		uParam0->f_4 = iParam1;
	}
}

bool func_247(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	if (!__LIB_0__::func_75(uParam2[9 /*3*/]))
	{
		__LIB_1__::func_148(uParam2[9 /*3*/]);
	}
	if (!__LIB_0__::func_27(iParam0->f_1[iParam3 /*22*/].f_4, 2) && !(__LIB_13__::func_666(*uParam1, 1024) || __LIB_13__::func_666(*uParam1, 32768)))
	{
		return false;
	}
	iVar0 = (iParam0->f_1[iParam3 /*22*/].f_8 - iParam0->f_1[iParam3 /*22*/].f_9);
	if (iVar0 <= 3 && !(__LIB_13__::func_666(*uParam1, 1024) || __LIB_13__::func_666(*uParam1, 32768)))
	{
		return false;
	}
	if (iParam0->f_310[iParam4 /*14*/].f_9 < 19f && __LIB_13__::func_666(*uParam1, 64))
	{
		return false;
	}
	if ((iParam0->f_310[iParam4 /*14*/].f_4 == 11 || iParam0->f_310[iParam4 /*14*/].f_4 == 12) || iParam0->f_310[iParam4 /*14*/].f_4 == 9)
	{
		return false;
	}
	bVar1 = func_338(iParam0, uParam1, iParam3, iParam4);
	if ((!__LIB_13__::func_666(*uParam1, 1024) && !bVar1) && (((iParam5 == -1 || iParam5 == iParam3) || iParam3 == iParam5 + 1) || iParam3 == (iParam5 - 1)))
	{
		return false;
	}
	if ((__LIB_13__::func_666(*uParam1, 1024) || __LIB_13__::func_666(*uParam1, 32768)) || func_172(uParam1, 1))
	{
		fVar2 = 4f;
	}
	else if ((__LIB_13__::func_666(*uParam1, 8388608) || __LIB_0__::func_27(iParam0->f_1[iParam3 /*22*/].f_4, 8)) || bVar1)
	{
		fVar2 = 15f;
	}
	else if (__LIB_0__::func_27(iParam0->f_1[iParam3 /*22*/].f_4, 64))
	{
		fVar2 = 20f;
	}
	else if (iParam5 > iParam3 + 1 || iParam5 < (iParam3 - 1))
	{
		fVar2 = 15f;
	}
	else
	{
		fVar2 = 25f;
	}
	if (iParam5 != -1)
	{
		iVar3 = MISC::ABSI((iParam5 - iParam3));
		if (iVar3 > 0)
		{
			iVar3 = (iVar3 - 1);
		}
		fVar2 = (fVar2 - (fVar2 * (0.33f * IntToFloat(iVar3))));
	}
	if (!__LIB_1__::func_285(uParam2[9 /*3*/], fVar2))
	{
		return false;
	}
	__LIB_0__::func_37(uParam2[9 /*3*/]);
	iParam0->f_1[iParam3 /*22*/].f_9++;
	__LIB_0__::func_7(&(iParam0->f_1[iParam3 /*22*/].f_4), 64);
	return true;
}

bool func_248(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0->f_310[iParam1 /*14*/].f_3 == 0)
	{
		return false;
	}
	if ((iParam3 == -1 || iParam2 > iParam3 + 1) || iParam2 < (iParam3 - 1))
	{
		return true;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0->f_310[iParam1 /*14*/]))
	{
		return true;
	}
	return false;
}

void func_249(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_310[iParam1 /*14*/].f_6))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_310[iParam1 /*14*/], true, false) };
		iParam0->f_310[iParam1 /*14*/].f_6 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vVar0, joaat("PROP_VEHICHLE_SEAT_PASSENGER_TRAIN_TG"), 4f, 1, false);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_310[iParam1 /*14*/].f_6))
	{
		if (__LIB_0__::func_27(iParam0->f_310[iParam1 /*14*/].f_7, 256))
		{
			TASK::_TASK_USE_SCENARIO_POINT_2(iParam0->f_310[iParam1 /*14*/], Global_35, iParam0->f_310[iParam1 /*14*/].f_6, 0, -1, 0, -1f, false);
		}
		else
		{
			TASK::_TASK_USE_SCENARIO_POINT(iParam0->f_310[iParam1 /*14*/], iParam0->f_310[iParam1 /*14*/].f_6, 0, -1, false, true, 0, false, -1f, false);
		}
	}
}

void func_250(int iParam0, int iParam1)
{
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iParam0->f_310[iParam1 /*14*/], false, 0f);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_310[iParam1 /*14*/], true);
	PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam1 /*14*/], 178, false);
	PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam1 /*14*/], 315, true);
	PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam1 /*14*/], 297, false);
	PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam1 /*14*/], 301, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0->f_310[iParam1 /*14*/], 17, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iParam0->f_310[iParam1 /*14*/], 32768, true);
	PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam1 /*14*/], 162, false);
	if (iParam0->f_310[iParam1 /*14*/].f_3 != 1)
	{
		PED::_0xAE6004120C18DF97(iParam0->f_310[iParam1 /*14*/], 0, 0);
		func_339(iParam0, iParam1);
	}
	if (iParam0->f_310[iParam1 /*14*/].f_3 == 2)
	{
		PED::_0xD355E2F1BB41087E(iParam0->f_310[iParam1 /*14*/], 0.5f);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam1 /*14*/], 138, true);
		PED::_0xC163DAC52AC975D3(iParam0->f_310[iParam1 /*14*/], 32);
		PED::_0xC163DAC52AC975D3(iParam0->f_310[iParam1 /*14*/], 1);
		PED::_0xC163DAC52AC975D3(iParam0->f_310[iParam1 /*14*/], 31);
		PED::_0xC163DAC52AC975D3(iParam0->f_310[iParam1 /*14*/], 6);
		PED::_0xC163DAC52AC975D3(iParam0->f_310[iParam1 /*14*/], 5);
		PED::_0xC163DAC52AC975D3(iParam0->f_310[iParam1 /*14*/], 26);
		PED::_0xC163DAC52AC975D3(iParam0->f_310[iParam1 /*14*/], 33);
		PED::_0xC163DAC52AC975D3(iParam0->f_310[iParam1 /*14*/], 15);
		PED::_0xC163DAC52AC975D3(iParam0->f_310[iParam1 /*14*/], 27);
		PED::_0xC163DAC52AC975D3(iParam0->f_310[iParam1 /*14*/], 28);
		PED::_0xC163DAC52AC975D3(iParam0->f_310[iParam1 /*14*/], 3);
		PED::_0xC163DAC52AC975D3(iParam0->f_310[iParam1 /*14*/], 14);
		PED::_0xC163DAC52AC975D3(iParam0->f_310[iParam1 /*14*/], 16);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam1 /*14*/], 1, true);
	}
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0->f_310[iParam1 /*14*/], 24592);
	PED::_0x52A24D8A1DA89658(iParam0->f_310[iParam1 /*14*/], 2, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam1 /*14*/], 186, false);
}

bool func_251(int iParam0, int iParam1)
{
	if (VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(Local_718.f_1[0 /*22*/]) == Local_718.f_310[iParam1 /*14*/])
	{
		return true;
	}
	if (Local_718.f_310[iParam1 /*14*/].f_3 == 0)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return false;
}

void func_252(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int* iParam6, var uParam7, var uParam8, var uParam9, int iParam10)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	if (!func_340(iParam0, iParam3, iParam4))
	{
		*uParam8 = 0;
		return;
	}
	if (iParam3 >= 45)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_310[iParam3 /*14*/]))
	{
		return;
	}
	if (iParam4 < 0)
	{
		if (*uParam8 != 1)
		{
			func_341(uParam7, iParam6);
			func_342(uParam7, 0);
			*uParam8 = 1;
		}
	}
	if (__LIB_0__::func_27(iParam0->f_310[iParam3 /*14*/].f_7, 2048))
	{
		func_341(uParam7, iParam6);
		bVar0 = (__LIB_13__::func_666(*uParam1, 2048) || __LIB_0__::func_27(iParam0->f_310[iParam3 /*14*/].f_7, 134217728));
		if (__LIB_0__::func_27(iParam0->f_310[iParam3 /*14*/].f_7, 268435456))
		{
			func_343(uParam7, bVar0);
		}
		else if (__LIB_0__::func_27(iParam0->f_310[iParam3 /*14*/].f_7, 32768))
		{
			func_344(uParam7, bVar0);
		}
		else
		{
			func_342(uParam7, bVar0);
		}
		__LIB_0__::func_8(&(iParam0->f_310[iParam3 /*14*/].f_7), 2048);
	}
	iVar1 = __LIB_2__::func_340(1, 0, 0) | 2048 | 16384 | 256;
	iVar2 = func_346(&(iParam0->f_310[iParam3 /*14*/]), iParam6, 19f, uParam7, 0, 3, 0, 0, iVar1, 0, 0, 2, iParam0->f_310[iParam3 /*14*/].f_9);
	if (iVar2 != -1)
	{
		__LIB_0__::func_7(&(iParam0->f_310[iParam3 /*14*/].f_7), 134217728);
		__LIB_0__::func_7(&(iParam0->f_310[iParam3 /*14*/].f_7), 2048);
	}
	switch (iVar2)
	{
		case 0:
			func_341(uParam7, iParam6);
			func_45(iParam0, iParam2);
			if (__LIB_0__::func_27(iParam0->f_310[iParam3 /*14*/].f_7, 32768))
			{
				__LIB_2__::func_478(Global_35, iParam0->f_310[iParam3 /*14*/], "DEFUSE_LEFT_PROPERTY", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				__LIB_1__::func_148(uParam5[3 /*3*/]);
				__LIB_0__::func_7(&(iParam0->f_310[iParam3 /*14*/].f_7), 268435456);
				__LIB_0__::func_8(&(iParam0->f_310[iParam3 /*14*/].f_7), 134217728);
			}
			else if (!__LIB_0__::func_27(iParam0->f_310[iParam3 /*14*/].f_7, 512))
			{
				if (__LIB_1__::func_985())
				{
					__LIB_2__::func_478(Global_35, iParam0->f_310[iParam3 /*14*/], "GREET_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(Global_35, iParam0->f_310[iParam3 /*14*/], "GREET_GENERAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				func_246(&(iParam0->f_310[iParam3 /*14*/]), 8);
				__LIB_0__::func_7(&(iParam0->f_310[iParam3 /*14*/].f_7), 4096);
			}
			break;
		case 1:
			if (!__LIB_0__::func_27(iParam0->f_310[iParam3 /*14*/].f_7, 512))
			{
				func_341(uParam7, iParam6);
				func_45(iParam0, iParam2);
				if (PED::IS_PED_MALE(iParam0->f_310[iParam3 /*14*/]))
				{
					__LIB_2__::func_478(Global_35, iParam0->f_310[iParam3 /*14*/], func_347(&(iParam0->f_310[iParam3 /*14*/])), 0, -1082130432 /* Float: -1f */, iParam0->f_310[iParam3 /*14*/].f_11, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(Global_35, iParam0->f_310[iParam3 /*14*/], func_347(&(iParam0->f_310[iParam3 /*14*/])), 0, -1082130432 /* Float: -1f */, iParam0->f_310[iParam3 /*14*/].f_11, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				func_246(&(iParam0->f_310[iParam3 /*14*/]), 8);
				__LIB_0__::func_7(&(iParam0->f_310[iParam3 /*14*/].f_7), 8192);
			}
			break;
		case 2:
			func_329(&uVar3, 0);
			func_257(iParam0, uParam1, iParam4, uParam9, iParam10, 1, 0, 1);
			break;
	}
}

bool func_253(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	bool bVar0;
	float fVar1;
	bVar0 = __LIB_13__::func_666(*uParam2, 64);
	fVar1 = 3f;
	if (__LIB_2__::func_84() && !bVar0)
	{
		fVar1 = (fVar1 / 2f);
	}
	if (iParam1 > -1 && !ENTITY::IS_ENTITY_DEAD(iParam0->f_310[iParam1 /*14*/]))
	{
		if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0->f_310[iParam1 /*14*/], true, false), fVar1, true))
		{
			return true;
		}
		if (MISC::_0xDC416CA762BC4F43(ENTITY::GET_ENTITY_COORDS(iParam0->f_310[iParam1 /*14*/], true, false), fVar1, 1, 1) > 0)
		{
			return true;
		}
	}
	if (!bVar0 || (bVar0 && bParam3))
	{
		if (MISC::_0x7A76104CC2CC69E8(iParam0->f_1[0 /*22*/], 1, 1))
		{
			return true;
		}
		if (ENTITY::_0x3EC28DA1FFAC9DDD(iParam0->f_1[0 /*22*/], Global_35, 0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_254(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, int iParam5)
{
	int iVar0;
	if (iParam0->f_310[iParam1 /*14*/].f_4 == 19)
	{
		return false;
	}
	if (func_262(iParam0, iParam1, 10f, uParam2, iParam3, uParam4, iParam5))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
		if (*iParam3 != 8 || WEAPON::_0x705BE297EEBDB95D(iVar0))
		{
			return true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_310[iParam1 /*14*/]) && PED::_0xE33F98BD76490ABC(iParam0->f_310[iParam1 /*14*/], PLAYER::PLAYER_ID(), 0))
	{
		return true;
	}
	if (__LIB_0__::func_27(iParam0->f_310[iParam1 /*14*/].f_7, 512))
	{
		return true;
	}
	if (func_172(uParam4, 1) && (iParam5 != -1 || __LIB_2__::func_215(iParam0->f_310[iParam1 /*14*/], Global_35, 0, 1114636288 /* Float: 60f */, 0)))
	{
		return true;
	}
	return false;
}

void func_255(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4)
{
	if (__LIB_13__::func_666(*uParam3, 67108864))
	{
		return;
	}
	if (*iParam2 != 0)
	{
		__LIB_9__::func_898(uParam1, iParam2);
	}
	TASK::_0xE7FA07624574B79A(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/], Global_35, 3, 1, 0f, 1, 0, 0, 0);
	if (!__LIB_13__::func_666(*uParam3, 1024) && !func_338(iParam0, uParam3, 0, iParam0->f_1[0 /*22*/].f_11[0]))
	{
		VEHICLE::_0x4182C037AA1F0091(iParam0->f_1[0 /*22*/], 0);
		VEHICLE::_0x160C1B5AB48AB87C(iParam0->f_1[0 /*22*/], 0f);
		VEHICLE::_0x787E43477746876F(iParam0->f_1[0 /*22*/]);
	}
	func_246(&(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/]), 5);
	__LIB_0__::func_8(&(iParam0->f_310[iParam4 /*14*/].f_7), 32768);
	__LIB_0__::func_8(&(iParam0->f_310[iParam4 /*14*/].f_7), 65536);
	__LIB_0__::func_8(&(iParam0->f_310[iParam4 /*14*/].f_7), 131072);
	func_12(uParam3, 67108864, 1);
}

void func_257(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	PED::_0xAAB050DA48B57978(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/], "Default_Panic", 0, -1, 4);
	if (bParam5 && (iParam7 || func_349(iParam0, uParam1, iParam2)))
	{
		func_350(iParam0);
	}
	if (!__LIB_13__::func_666(*uParam1, 64) && !bParam6)
	{
		func_255(iParam0, uParam3, iParam4, uParam1, iParam0->f_1[0 /*22*/].f_11[0]);
		__LIB_0__::func_7(&(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7), 512);
		__LIB_0__::func_7(&(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7), 2048);
		return;
	}
	else
	{
		__LIB_0__::func_7(&(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7), 2048);
		func_12(uParam1, 2048, 1);
		func_246(&(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/]), 6);
	}
}

void func_258(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, var uParam5, bool bParam6)
{
	bool bVar0;
	vector3 vVar1;
	char* sVar4;
	float fVar5;
	char* sVar6;
	char* sVar7;
	bVar0 = false;
	if (VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iParam0->f_1[0 /*22*/]) == iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/])
	{
		if (iParam2 == 0)
		{
			vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0->f_1[0 /*22*/], Global_36) };
			if (vVar1.z >= 1f)
			{
				bVar0 = true;
			}
			bVar0 = true;
		}
		else if (iParam2 == 1)
		{
			vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0->f_1[1 /*22*/], Global_36) };
			if (vVar1.z >= 2f)
			{
				bVar0 = true;
			}
		}
		else if (!bParam6 && (iParam2 == 2 || iParam2 == 3))
		{
			bVar0 = true;
		}
	}
	if (bParam6)
	{
		if (bVar0 && __LIB_1__::func_285(uParam1[11 /*3*/], 1.5f))
		{
			if (!__LIB_0__::func_27(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7, 32768))
			{
				sVar4 = func_351();
				if (*iParam0 == 2 || *iParam0 == 3)
				{
					sVar4 = "STOP_THAT";
				}
				__LIB_2__::func_478(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/], Global_35, sVar4, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
				__LIB_0__::func_7(&(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7), 32768);
				__LIB_0__::func_7(&(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7), 2048);
				__LIB_1__::func_148(uParam1[7 /*3*/]);
			}
			else if (!__LIB_0__::func_27(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7, 65536))
			{
				fVar5 = 7.5f;
				if (__LIB_0__::func_27(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7, 268435456) && !__LIB_0__::func_27(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7, 67108864))
				{
					fVar5 = 8.5f;
				}
				if (__LIB_1__::func_285(uParam1[7 /*3*/], fVar5))
				{
					if (__LIB_0__::func_27(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7, 268435456) && !__LIB_0__::func_27(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7, 67108864))
					{
						__LIB_2__::func_478(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/], Global_35, func_352(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
						__LIB_0__::func_7(&(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7), 67108864);
					}
					else
					{
						__LIB_2__::func_478(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/], Global_35, func_353(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
						__LIB_0__::func_7(&(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7), 65536);
					}
					__LIB_0__::func_7(&(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7), 2048);
					__LIB_1__::func_148(uParam1[7 /*3*/]);
				}
			}
			else if (__LIB_1__::func_285(uParam1[7 /*3*/], 8.5f))
			{
				func_255(iParam0, uParam3, iParam4, uParam5, iParam0->f_1[0 /*22*/].f_11[0]);
				__LIB_0__::func_7(&(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7), 2048);
			}
		}
	}
	else
	{
		if (iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_9 < 15f)
		{
			if (!__LIB_0__::func_163(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/], 150319005))
			{
				TASK::TASK_LOOK_AT_ENTITY(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/], Global_35, -1, 4, 51, 1);
			}
		}
		if (!__LIB_0__::func_75(uParam1[7 /*3*/]) && __LIB_2__::func_227(0, 1, iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/], 1))
		{
			__LIB_1__::func_148(uParam1[7 /*3*/]);
		}
		if (bVar0 && __LIB_1__::func_285(uParam1[7 /*3*/], 10f))
		{
			if (iParam2 == 2 || iParam2 == 3)
			{
				if (!__LIB_0__::func_27(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7, 32768))
				{
					__LIB_2__::func_478(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/], Global_35, func_355(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
					__LIB_0__::func_7(&(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7), 32768);
					__LIB_0__::func_37(uParam1[7 /*3*/]);
				}
			}
			else if (iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_9 > 5f)
			{
				sVar6 = func_356();
				__LIB_2__::func_478(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/], Global_35, sVar6, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
				__LIB_0__::func_37(uParam1[7 /*3*/]);
			}
			else if (iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_9 < 15f)
			{
				if (!__LIB_0__::func_27(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7, 65536))
				{
					__LIB_2__::func_478(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/], Global_35, func_357(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
					__LIB_0__::func_37(uParam1[7 /*3*/]);
				}
				else
				{
					sVar7 = func_356();
					__LIB_2__::func_478(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/], Global_35, sVar7, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
					__LIB_0__::func_37(uParam1[7 /*3*/]);
				}
			}
		}
	}
}

void func_259(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	vector3 vVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
	{
		PED::_0x16F798A05BB9E3B5(iParam1);
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, 518218985, true) == 8)
		{
			func_358(iParam1);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 32768, false);
			TASK::_TASK_SMART_FLEE_STYLE_PED(iParam1, Global_35, 3, 0, 1000f, 1000000, 0);
		}
		return;
	}
	if (!bParam4)
	{
		return;
	}
	if (func_359(iParam0, iParam3))
	{
		vVar0 = { func_360(iParam0) };
		if (__LIB_0__::func_86(vVar0))
		{
			return;
		}
		func_361(iParam0, iParam1, iParam2, iParam3, vVar0);
	}
}

void func_260(int iParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_310[iParam1 /*14*/]))
	{
		return;
	}
	if (!__LIB_0__::func_27(iParam0->f_310[iParam1 /*14*/].f_7, 512))
	{
		return;
	}
	if (!__LIB_2__::func_227(3f, 1, 0, 0))
	{
		return;
	}
	if (!__LIB_0__::func_75(&(iParam0->f_1112)))
	{
		__LIB_1__::func_283(&(iParam0->f_1112), 0);
		return;
	}
	if (__LIB_1__::func_285(&(iParam0->f_1112), 20f))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 11);
		switch (iVar0)
		{
			case 0:
				sVar1 = "SCARED_HELP";
				break;
			case 1:
				sVar1 = "GENERIC_FRIGHTENED_HIGH";
				break;
			case 2:
				sVar1 = "GET_AWAY_FROM_ME";
				break;
			case 3:
				sVar1 = "STOP_THAT";
				break;
			case 4:
				sVar1 = "SICK_BASTARD";
				break;
			case 5:
				sVar1 = "PLEAD";
				break;
			case 6:
				sVar1 = "PANIC_HELP";
				break;
			case 7:
				sVar1 = "NEED_HELP";
				break;
			case 8:
				sVar1 = "LEAVE_ME";
				break;
			case 9:
				sVar1 = "GENERIC_SHOCKED_HIGH";
				break;
			case 10:
				sVar1 = "GENERIC_ANGRY_SHOUT";
				break;
			default:
				sVar1 = "GENERIC_CURSE_HIGH";
				break;
		}
		__LIB_2__::func_478(iParam0->f_310[iParam1 /*14*/], Global_35, sVar1, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
		__LIB_1__::func_148(&(iParam0->f_1112));
	}
}

void func_261(int iParam0)
{
	__LIB_2__::func_478(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/], Global_35, "SCARED_HELP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 0, 1744022339, 0, 0, 0);
	VEHICLE::_0xCFE122EC635CC2B2(iParam0->f_1[0 /*22*/], "DANGER", 0, 0);
}

bool func_262(int iParam0, int iParam1, float fParam2, var uParam3, int iParam4, var uParam5, int iParam6)
{
	if (func_363(&(iParam0->f_310[iParam1 /*14*/]), fParam2))
	{
		*iParam4 = 8;
		return true;
	}
	else if (func_364(iParam0->f_310[iParam1 /*14*/], 0, uParam3, iParam4, 0, 0) || (iParam0->f_310[iParam1 /*14*/].f_8 == iParam6 && __LIB_4__::func_235(iParam0->f_310[iParam1 /*14*/], uParam3)))
	{
		if (*iParam4 == 256)
		{
			if (__LIB_2__::func_84())
			{
				return false;
			}
			if ((((!__LIB_13__::func_666(*uParam5, 64) && iParam0->f_310[iParam1 /*14*/].f_8 >= 0) && iParam0->f_310[iParam1 /*14*/].f_8 < 14) && ENTITY::DOES_ENTITY_EXIST(iParam0->f_1[iParam0->f_310[iParam1 /*14*/].f_8 /*22*/])) && MISC::_0x970339EFA4FDE518(iParam0->f_1[iParam0->f_310[iParam1 /*14*/].f_8 /*22*/], 1, 1) == 0)
			{
				__LIB_9__::func_898(uParam3, iParam4);
				return false;
			}
		}
		else if (*iParam4 == 16384)
		{
			if (!func_172(uParam5, 1))
			{
				__LIB_9__::func_898(uParam3, iParam4);
				return false;
			}
		}
		return true;
	}
	return false;
}

void func_263(int iParam0, int iParam1, var uParam2)
{
	if (((__LIB_0__::func_27(iParam0->f_310[iParam1 /*14*/].f_7, 512) || __LIB_13__::func_666(uParam2, 1048576)) && (!__LIB_0__::func_27(iParam0->f_310[iParam1 /*14*/].f_7, 256) || (MISC::GET_FRAME_COUNT() % 10) == 0)) && PED::IS_PED_USING_ANY_SCENARIO(iParam0->f_310[iParam1 /*14*/]))
	{
		if (iParam0->f_310[iParam1 /*14*/].f_12 < 0)
		{
			if (__LIB_1__::func_996(iParam0->f_310[iParam1 /*14*/], 1, 1, 1, 0))
			{
				iParam0->f_310[iParam1 /*14*/].f_12 = 0;
			}
			else
			{
				iParam0->f_310[iParam1 /*14*/].f_12 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(100, 980));
			}
		}
		if (MISC::GET_GAME_TIMER() >= iParam0->f_310[iParam1 /*14*/].f_12)
		{
			PED::_0xAAB050DA48B57978(iParam0->f_310[iParam1 /*14*/], "Default_Panic", 0, -1, 4);
			if (func_367(iParam0, iParam1))
			{
				PED::_0xD8CEEED54C672B5D(iParam0->f_310[iParam1 /*14*/], Global_35, 0f, 0f, 0f, 3, 3);
			}
			else
			{
				PED::_0xD8CEEED54C672B5D(iParam0->f_310[iParam1 /*14*/], iParam0->f_310[iParam1 /*14*/], 0f, 3f, 0.5f, 3, 3);
			}
			PED::_0x9A77DFD295E29B09(iParam0->f_310[iParam1 /*14*/], true);
			PED::_0xEEED8FAFEC331A70(iParam0->f_310[iParam1 /*14*/], Global_36, 3);
			__LIB_0__::func_7(&(iParam0->f_310[iParam1 /*14*/].f_7), 256);
		}
	}
}

void func_264(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	bool bVar0;
	bVar0 = __LIB_0__::func_27(iParam0->f_310[iParam1 /*14*/].f_7, 1);
	if (__LIB_13__::func_666(*uParam2, 33554432) || iParam0->f_310[iParam1 /*14*/].f_8 != iParam4)
	{
		if (!__LIB_8__::func_747(uParam3, 1) && __LIB_2__::func_401(iParam0->f_310[iParam1 /*14*/], 1, 1, 1, 0, 0))
		{
			func_14(uParam3, 1);
		}
		if (!bVar0 && MAP::DOES_BLIP_EXIST(iParam0->f_310[iParam1 /*14*/].f_1))
		{
			MAP::_BLIP_SET_MODIFIER(iParam0->f_310[iParam1 /*14*/].f_1, -1186550032);
			__LIB_0__::func_7(&(iParam0->f_310[iParam1 /*14*/].f_7), 1);
		}
	}
	else if (iParam0->f_310[iParam1 /*14*/].f_8 == iParam4)
	{
		if (bVar0 && MAP::DOES_BLIP_EXIST(iParam0->f_310[iParam1 /*14*/].f_1))
		{
			MAP::_BLIP_REMOVE_MODIFIER(iParam0->f_310[iParam1 /*14*/].f_1, -1186550032);
			__LIB_0__::func_8(&(iParam0->f_310[iParam1 /*14*/].f_7), 1);
		}
	}
}

bool func_265(int iParam0)
{
	if (__LIB_1__::func_285(&(Local_718.f_1106), 5f))
	{
		return false;
	}
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_BEAT_ALARMING"), Global_36, 1f) && EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_BEAT_ALARMING"), ENTITY::GET_ENTITY_COORDS(Local_718.f_310[iParam0 /*14*/], true, false), 10f))
	{
		return true;
	}
	return false;
}

bool func_268(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam0 == iLocal_603)
	{
		iVar0 = Local_718.f_1[iParam0 /*22*/].f_11[iParam1];
		if (func_369(&Local_718, &iLocal_716, &uLocal_717, iParam0, iVar0, &(Local_432[iParam1 /*21*/]), &(Local_15[iParam1 /*52*/]), &vLocal_627, &uLocal_1839, &iLocal_1867, &iLocal_606, &iLocal_607))
		{
			func_263(&Local_718, iParam1, iLocal_716);
			return true;
		}
	}
	return false;
}

void func_269(int iParam0, int iParam1)
{
	bool bVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_310[iParam1 /*14*/]) || iParam0->f_310[iParam1 /*14*/].f_4 == 19)
	{
		return;
	}
	if (func_370(iParam0, iParam1, &bVar0))
	{
		__LIB_2__::func_426(&(iParam0->f_310[iParam1 /*14*/]));
		func_246(&(iParam0->f_310[iParam1 /*14*/]), 19);
	}
	else if (bVar0)
	{
		if (!PED::IS_PED_IN_COMBAT(iParam0->f_310[iParam1 /*14*/], 0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0->f_310[iParam1 /*14*/], true, true);
			WEAPON::SET_CURRENT_PED_WEAPON(iParam0->f_310[iParam1 /*14*/], joaat("WEAPON_UNARMED"), false, 0, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(iParam0->f_310[iParam1 /*14*/], joaat("WEAPON_UNARMED"), false, 1, false, false);
			TASK::TASK_SWAP_WEAPON(iParam0->f_310[iParam1 /*14*/], 0, 1, 0, 0);
			__LIB_3__::func_475(iParam0->f_310[iParam1 /*14*/], 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iParam0->f_310[iParam1 /*14*/]));
			func_246(&(iParam0->f_310[iParam1 /*14*/]), 20);
		}
	}
}

void func_270(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int* iParam6, var uParam7, var uParam8)
{
	int iVar0;
	int iVar1;
	if (iParam4 != iParam2)
	{
		if (iParam4 < 0 && iParam0->f_1[iParam2 /*22*/].f_6 == 3)
		{
			if (iParam0->f_310[iParam3 /*14*/].f_9 < 40f)
			{
				func_372(iParam0, iParam3, iParam2, iParam6, uParam7, uParam8);
			}
			else
			{
				*uParam8 = 0;
			}
		}
		return;
	}
	if (iParam3 >= 45)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_310[iParam3 /*14*/]))
	{
		return;
	}
	if (__LIB_0__::func_27(iParam0->f_310[iParam3 /*14*/].f_7, 512))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam3 /*14*/], 297, false);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam3 /*14*/], 315, true);
		return;
	}
	if (__LIB_0__::func_27(iParam0->f_310[iParam3 /*14*/].f_7, 2048))
	{
		func_341(uParam7, iParam6);
		if (((iParam0->f_310[iParam3 /*14*/].f_4 == 17 || iParam0->f_310[iParam3 /*14*/].f_4 == 18) || iParam0->f_310[iParam3 /*14*/].f_4 == 19) || iParam0->f_310[iParam3 /*14*/].f_4 == 20)
		{
		}
		else if (__LIB_0__::func_27(iParam0->f_310[iParam3 /*14*/].f_7, 32768))
		{
			func_373(uParam7, (__LIB_0__::func_27(iParam0->f_310[iParam3 /*14*/].f_7, 268435456) || __LIB_0__::func_27(iParam0->f_310[iParam3 /*14*/].f_7, 134217728)));
		}
		else
		{
			func_374(uParam7, (__LIB_0__::func_27(iParam0->f_310[iParam3 /*14*/].f_7, 268435456) || __LIB_0__::func_27(iParam0->f_310[iParam3 /*14*/].f_7, 134217728)));
		}
		__LIB_0__::func_8(&(iParam0->f_310[iParam3 /*14*/].f_7), 2048);
	}
	iVar0 = __LIB_2__::func_340(1, 0, 0) | 16384;
	iVar1 = func_346(&(iParam0->f_310[iParam3 /*14*/]), iParam6, 19f, uParam7, 0, 3, 0, 0, iVar0, 0, 0, 2, iParam0->f_310[iParam3 /*14*/].f_9);
	if (iVar1 != -1)
	{
		__LIB_0__::func_7(&(iParam0->f_310[iParam3 /*14*/].f_7), 134217728);
		__LIB_0__::func_7(&(iParam0->f_310[iParam3 /*14*/].f_7), 2048);
	}
	switch (iVar1)
	{
		case 0:
			func_341(uParam7, iParam6);
			func_45(iParam0, iParam2);
			if (__LIB_0__::func_27(iParam0->f_310[iParam3 /*14*/].f_7, 32768))
			{
				if (__LIB_0__::func_27(iParam0->f_310[iParam3 /*14*/].f_7, 524288))
				{
					__LIB_2__::func_478(Global_35, iParam0->f_310[iParam3 /*14*/], "DEFUSE_LEFT_PROPERTY_KEEP_GOING", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(Global_35, iParam0->f_310[iParam3 /*14*/], "DEFUSE_LEFT_PROPERTY", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				__LIB_1__::func_148(uParam5[3 /*3*/]);
				__LIB_0__::func_7(&(iParam0->f_310[iParam3 /*14*/].f_7), 268435456);
				__LIB_0__::func_8(&(iParam0->f_310[iParam3 /*14*/].f_7), 134217728);
			}
			else if (!__LIB_0__::func_27(iParam0->f_310[iParam3 /*14*/].f_7, 512))
			{
				if (__LIB_1__::func_985())
				{
					__LIB_2__::func_478(Global_35, iParam0->f_310[iParam3 /*14*/], "GREET_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(Global_35, iParam0->f_310[iParam3 /*14*/], "GREET_GENERAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				func_246(&(iParam0->f_310[iParam3 /*14*/]), 8);
				__LIB_0__::func_7(&(iParam0->f_310[iParam3 /*14*/].f_7), 4096);
			}
			break;
		case 1:
			if (!__LIB_0__::func_27(iParam0->f_310[iParam3 /*14*/].f_7, 512))
			{
				func_341(uParam7, iParam6);
				func_45(iParam0, iParam2);
				if (PED::IS_PED_MALE(iParam0->f_310[iParam3 /*14*/]))
				{
					__LIB_2__::func_478(Global_35, iParam0->f_310[iParam3 /*14*/], func_347(&(iParam0->f_310[iParam3 /*14*/])), 0, -1082130432 /* Float: -1f */, iParam0->f_310[iParam3 /*14*/].f_11, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(Global_35, iParam0->f_310[iParam3 /*14*/], func_347(&(iParam0->f_310[iParam3 /*14*/])), 0, -1082130432 /* Float: -1f */, iParam0->f_310[iParam3 /*14*/].f_11, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				func_246(&(iParam0->f_310[iParam3 /*14*/]), 8);
				__LIB_0__::func_7(&(iParam0->f_310[iParam3 /*14*/].f_7), 4096);
				__LIB_0__::func_7(&(iParam0->f_310[iParam3 /*14*/].f_7), 8192);
			}
			break;
		case 2:
			break;
	}
}

bool func_271(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	if (Local_718.f_310[iParam1 /*14*/].f_4 == 19)
	{
		return false;
	}
	if (!__LIB_0__::func_27(Local_718.f_310[iParam1 /*14*/].f_7, 4))
	{
		if (func_262(&Local_718, iParam1, 10f, &uLocal_1839, &iLocal_1867, &iLocal_716, iLocal_603))
		{
			if (iLocal_1867 != 256 || iLocal_603 < 0)
			{
				__LIB_0__::func_7(&(Local_718.f_310[iParam1 /*14*/].f_7), 4);
			}
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		if (__LIB_0__::func_27(Local_718.f_310[iParam1 /*14*/].f_7, 16384))
		{
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		if (__LIB_13__::func_666(iLocal_716, 67108864))
		{
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		if (__LIB_13__::func_666(iLocal_716, 2048))
		{
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		if (__LIB_13__::func_666(iLocal_716, 1048576))
		{
			bVar0 = true;
		}
	}
	if (!bVar0 && __LIB_0__::func_27(Local_718.f_1[iParam0 /*22*/].f_4, 2))
	{
		bVar0 = true;
	}
	if (!bVar0 && func_265(iParam1))
	{
		bVar0 = true;
	}
	if ((!bVar0 && ENTITY::DOES_ENTITY_EXIST(Local_718.f_310[iParam1 /*14*/])) && PED::_0xE33F98BD76490ABC(Local_718.f_310[iParam1 /*14*/], PLAYER::PLAYER_ID(), 0))
	{
		bVar0 = true;
	}
	if (!bVar0 && __LIB_13__::func_666(iLocal_716, 1024))
	{
		bVar0 = true;
	}
	if ((!bVar0 && func_172(&iLocal_716, 1)) && (iLocal_603 != -1 || __LIB_2__::func_215(Local_718.f_310[iParam1 /*14*/], Global_35, 0, 1114636288 /* Float: 60f */, 0)))
	{
		bVar0 = true;
	}
	if (!bVar0 && __LIB_0__::func_27(Local_718.f_310[iParam1 /*14*/].f_7, 512))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if ((__LIB_13__::func_666(iLocal_716, 1073741824 /* Float: 2f */) && !__LIB_13__::func_666(iLocal_716, 16384)) && ((Local_718.f_310[iParam1 /*14*/].f_9 < 60f || iLocal_603 >= 0) && __LIB_1__::func_285(&(vLocal_627[17 /*3*/]), 30f)))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (iLocal_614 < 0)
		{
			iLocal_614 = MISC::GET_GAME_TIMER();
		}
		if (!__LIB_0__::func_27(Local_718.f_310[iParam1 /*14*/].f_7, 32))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(Local_718.f_310[iParam1 /*14*/]);
			__LIB_0__::func_7(&(Local_718.f_310[iParam1 /*14*/].f_7), 32);
		}
		iVar1 = 0;
		bVar2 = false;
		if (iLocal_603 >= 0)
		{
			iVar1 = (iParam0 - iLocal_603);
			if (iVar1 < 0)
			{
				iVar1 = (iVar1 * -1);
			}
			if (Local_718.f_1[iLocal_603 /*22*/].f_6 == 1 || Local_718.f_1[iLocal_603 /*22*/].f_6 == 3)
			{
				bVar2 = true;
			}
		}
		if (Local_718.f_310[iParam1 /*14*/].f_12 < 0)
		{
			if (((iVar1 == 0 && iLocal_603 >= 0) || __LIB_0__::func_27(Local_718.f_310[iParam1 /*14*/].f_7, 4)) || (bVar2 && iVar1 == 1))
			{
				Local_718.f_310[iParam1 /*14*/].f_12 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(100, 600));
			}
			else if (__LIB_13__::func_666(iLocal_716, 2048))
			{
				Local_718.f_310[iParam1 /*14*/].f_12 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6500, 8500));
			}
			else if (iVar1 == 1)
			{
				Local_718.f_310[iParam1 /*14*/].f_12 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(16000, 18000));
			}
			else if (iVar1 == 2)
			{
				Local_718.f_310[iParam1 /*14*/].f_12 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(23000, 25000));
			}
			else
			{
				Local_718.f_310[iParam1 /*14*/].f_12 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(30000, 32000));
			}
		}
		else
		{
			bVar3 = false;
			if (((iVar1 == 0 || __LIB_0__::func_27(Local_718.f_310[iParam1 /*14*/].f_7, 4)) || (bVar2 && iVar1 == 1)) && iLocal_603 >= 0)
			{
				bVar3 = true;
			}
			else if (iVar1 >= 1)
			{
				if (PED::_0x164CECC59E70DF86(Local_718.f_310[iParam1 /*14*/], 50f))
				{
					Local_718.f_310[iParam1 /*14*/].f_10 = (Local_718.f_310[iParam1 /*14*/].f_10 + (1f * BUILTIN::TIMESTEP()));
				}
				else
				{
					Local_718.f_310[iParam1 /*14*/].f_10 = 0f;
				}
				if (Local_718.f_310[iParam1 /*14*/].f_10 >= 1.4f && (__LIB_13__::func_666(iLocal_716, 131072) || __LIB_13__::func_666(iLocal_716, 8388608)))
				{
					bVar3 = true;
				}
				fVar4 = BUILTIN::TO_FLOAT(iVar1 * 5);
				if (__LIB_13__::func_666(iLocal_716, 32))
				{
					fVar4 = (IntToFloat(iVar1) * 3.5f);
				}
				if (Local_718.f_310[iParam1 /*14*/].f_9 > 15f && iVar1 == 1)
				{
					fVar4 = (fVar4 * 1.5f);
				}
				if (Local_718.f_310[iParam1 /*14*/].f_10 >= fVar4)
				{
					bVar3 = true;
				}
			}
			if (bVar3)
			{
				func_12(&iLocal_716, 131072, 1);
				if ((Local_718.f_310[iParam1 /*14*/].f_12 - MISC::GET_GAME_TIMER()) >= 1000)
				{
					Local_718.f_310[iParam1 /*14*/].f_12 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(100, 900));
				}
			}
		}
		if ((iLocal_603 != iParam0 && iLocal_603 < 0) && Local_718.f_1[iParam0 /*22*/].f_6 == 3)
		{
			if (Local_718.f_310[iParam1 /*14*/].f_12 < 0)
			{
				Local_718.f_310[iParam1 /*14*/].f_12 = MISC::GET_GAME_TIMER() + 200;
			}
		}
		__LIB_0__::func_7(&(Local_718.f_310[iParam1 /*14*/].f_7), 16384);
		if (MISC::GET_GAME_TIMER() >= Local_718.f_310[iParam1 /*14*/].f_12)
		{
			func_12(&iLocal_716, 131072, 1);
			return true;
		}
	}
	return false;
}

int func_272(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	func_45(iParam0, iParam1);
	if (*iParam4 != 0)
	{
		__LIB_9__::func_898(uParam3, iParam4);
	}
	if (!__LIB_0__::func_75(uParam2[12 /*3*/]))
	{
		__LIB_1__::func_148(uParam2[12 /*3*/]);
	}
	func_12(uParam5, 256, 1);
	return 1;
}

void func_273(int iParam0, var uParam1, int iParam2, float fParam3)
{
	bool bVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	if (((iParam0->f_310[iParam2 /*14*/].f_9 < 17f && !__LIB_13__::func_666(*uParam1, 16384)) && !__LIB_0__::func_27(iParam0->f_310[iParam2 /*14*/].f_7, 16384)) && (ENTITY::GET_ENTITY_SPEED(Global_35) >= 1f || ENTITY::GET_ENTITY_SPEED(iParam0->f_1[0 /*22*/]) < 1f))
	{
		bVar0 = true;
	}
	if ((bVar0 || __LIB_0__::func_27(iParam0->f_310[iParam2 /*14*/].f_7, 8192)) && (PED::IS_PED_FACING_PED(iParam0->f_310[iParam2 /*14*/], Global_35, 180f) || __LIB_0__::func_393(Global_35, iParam0->f_1105, 148, 1)))
	{
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0->f_310[iParam2 /*14*/], ENTITY::GET_ENTITY_COORDS(Global_35, true, false)) };
		if (vVar1.y < 0f)
		{
			return;
		}
		*fParam3 = (*fParam3 + (1f * BUILTIN::TIMESTEP()));
		fVar4 = *fParam3;
		if (__LIB_0__::func_27(iParam0->f_310[iParam2 /*14*/].f_7, 268435456))
		{
			fVar4 = (fVar4 - 4f);
		}
		if (!__LIB_0__::func_27(iParam0->f_310[iParam2 /*14*/].f_7, 32768))
		{
			if ((*fParam3 >= 5f || (*fParam3 >= 1.3f && iParam0->f_310[iParam2 /*14*/].f_9 < 8f)) || __LIB_0__::func_27(iParam0->f_310[iParam2 /*14*/].f_7, 8192))
			{
				TASK::_0xE7FA07624574B79A(iParam0->f_310[iParam2 /*14*/], Global_35, 2, 2, 100f, 1, 0, 0, 0);
				__LIB_2__::func_478(iParam0->f_310[iParam2 /*14*/], Global_35, "GUARD_PLAYER_LOITERING", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
				__LIB_0__::func_7(&(iParam0->f_310[iParam2 /*14*/].f_7), 32768);
				__LIB_0__::func_7(&(iParam0->f_310[iParam2 /*14*/].f_7), 2048);
				*fParam3 = 0f;
			}
		}
		else if (!__LIB_0__::func_27(iParam0->f_310[iParam2 /*14*/].f_7, 65536))
		{
			if (fVar4 >= 7f)
			{
				TASK::_0xE7FA07624574B79A(iParam0->f_310[iParam2 /*14*/], Global_35, 2, 2, 100f, 1, 0, 0, 0);
				__LIB_2__::func_478(iParam0->f_310[iParam2 /*14*/], Global_35, "WARNED_ALREADY", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
				__LIB_0__::func_7(&(iParam0->f_310[iParam2 /*14*/].f_7), 65536);
				*fParam3 = 0f;
			}
		}
		else if (!__LIB_0__::func_27(iParam0->f_310[iParam2 /*14*/].f_7, 131072))
		{
			if (fVar4 >= 7f)
			{
				TASK::TASK_LOOK_AT_ENTITY(iParam0->f_310[iParam2 /*14*/], Global_35, 3000, 0, 51, 0);
				PED::_0x802092B07E3B1EEA(iParam0->f_310[iParam2 /*14*/], Global_36, 3);
				TASK::CLEAR_PED_TASKS(iParam0->f_310[iParam2 /*14*/], true, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar5);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
				TASK::CLOSE_SEQUENCE_TASK(iVar5);
				TASK::TASK_PERFORM_SEQUENCE(iParam0->f_310[iParam2 /*14*/], iVar5);
				TASK::CLEAR_SEQUENCE_TASK(&iVar5);
				__LIB_2__::func_478(iParam0->f_310[iParam2 /*14*/], Global_35, func_376(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
				__LIB_0__::func_7(&(iParam0->f_310[iParam2 /*14*/].f_7), 131072);
				*fParam3 = 0f;
			}
		}
		else if (fVar4 >= 6f)
		{
			func_246(&(iParam0->f_310[iParam2 /*14*/]), 17);
		}
	}
	else
	{
		*fParam3 = (*fParam3 - (1f * BUILTIN::TIMESTEP()));
		if (*fParam3 < 0f)
		{
			if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0->f_310[iParam2 /*14*/]))
			{
				TASK::CLEAR_PED_TASKS(iParam0->f_310[iParam2 /*14*/], true, false);
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(iParam0->f_310[iParam2 /*14*/], ENTITY::GET_ENTITY_COORDS(iParam0->f_310[iParam2 /*14*/], true, false), 3f, -1, false, false, false, false);
			}
			*fParam3 = 0f;
		}
	}
}

void func_274(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	if (__LIB_0__::func_27(iParam0->f_310[iParam6 /*14*/].f_7, 32768) && !func_377(iParam0, uParam2, iParam8))
	{
		if (__LIB_0__::func_75(uParam1[3 /*3*/]) && !__LIB_0__::func_33(uParam1[3 /*3*/]))
		{
			__LIB_2__::func_113(uParam1[3 /*3*/]);
			if (!__LIB_0__::func_27(iParam0->f_310[iParam6 /*14*/].f_7, 262144))
			{
				__LIB_0__::func_7(&(iParam0->f_310[iParam6 /*14*/].f_7), 262144);
			}
			__LIB_0__::func_8(&(iParam0->f_1[iParam7 /*22*/].f_4), 128);
		}
		if (!__LIB_0__::func_75(uParam1[4 /*3*/]))
		{
			__LIB_1__::func_148(uParam1[4 /*3*/]);
		}
		if (!__LIB_0__::func_27(iParam0->f_310[iParam6 /*14*/].f_7, 16777216))
		{
			if (!__LIB_0__::func_27(iParam0->f_1[iParam7 /*22*/].f_4, 1024) && __LIB_0__::func_27(iParam0->f_310[iParam6 /*14*/].f_7, 131072))
			{
				if (__LIB_1__::func_285(uParam1[4 /*3*/], (10.5f / 2f)))
				{
					TASK::TASK_CLEAR_LOOK_AT(iParam0->f_310[iParam6 /*14*/]);
					TASK::_0x541E5B41DCA45828(iParam0->f_310[iParam6 /*14*/], 2, 0);
					if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0->f_310[iParam6 /*14*/]))
					{
						TASK::CLEAR_PED_TASKS(iParam0->f_310[iParam6 /*14*/], true, false);
						if (TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_310[iParam6 /*14*/].f_6))
						{
							TASK::_TASK_USE_SCENARIO_POINT(iParam0->f_310[iParam6 /*14*/], iParam0->f_310[iParam6 /*14*/].f_6, 0, 0, true, false, 0, false, -1f, false);
						}
						else
						{
							TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(iParam0->f_310[iParam6 /*14*/], ENTITY::GET_ENTITY_COORDS(iParam0->f_310[iParam6 /*14*/], true, false), 3f, -1, false, false, false, false);
						}
					}
					else if (!TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_310[iParam6 /*14*/].f_6))
					{
						iParam0->f_310[iParam6 /*14*/].f_6 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(iParam0->f_310[iParam6 /*14*/], false);
					}
					__LIB_0__::func_8(&(iParam0->f_310[iParam6 /*14*/].f_7), 32768);
					__LIB_0__::func_8(&(iParam0->f_310[iParam6 /*14*/].f_7), 524288);
					__LIB_0__::func_8(&(iParam0->f_310[iParam6 /*14*/].f_7), 67108864);
					__LIB_0__::func_8(&(iParam0->f_310[iParam6 /*14*/].f_7), 131072);
				}
			}
		}
		func_379(iParam0, iParam6);
		if (__LIB_1__::func_313(uParam1[4 /*3*/], 10.5f))
		{
			if (__LIB_0__::func_27(iParam0->f_310[iParam6 /*14*/].f_7, 262144))
			{
				__LIB_0__::func_8(&(iParam0->f_310[iParam6 /*14*/].f_7), 262144);
				__LIB_0__::func_8(&(iParam0->f_1[iParam7 /*22*/].f_4), 1024);
				__LIB_0__::func_8(&(iParam0->f_1[iParam7 /*22*/].f_4), 512);
				__LIB_0__::func_7(&(iParam0->f_310[iParam6 /*14*/].f_7), 2048);
			}
			else if (__LIB_0__::func_27(iParam0->f_310[iParam6 /*14*/].f_7, 131072))
			{
				__LIB_0__::func_8(&(iParam0->f_310[iParam6 /*14*/].f_7), 131072);
				__LIB_0__::func_8(&(iParam0->f_310[iParam6 /*14*/].f_7), 16777216);
				__LIB_0__::func_8(&(iParam0->f_1[iParam7 /*22*/].f_4), 2048);
				__LIB_0__::func_8(&(iParam0->f_1[iParam7 /*22*/].f_4), 1024);
				__LIB_0__::func_7(&(iParam0->f_310[iParam6 /*14*/].f_7), 2048);
				iParam0->f_1[iParam7 /*22*/].f_20 = -1;
			}
			else if (__LIB_0__::func_27(iParam0->f_310[iParam6 /*14*/].f_7, 65536))
			{
				__LIB_0__::func_8(&(iParam0->f_310[iParam6 /*14*/].f_7), 65536);
				__LIB_0__::func_8(&(iParam0->f_310[iParam6 /*14*/].f_7), 16777216);
				__LIB_0__::func_8(&(iParam0->f_1[iParam7 /*22*/].f_4), 2048);
				__LIB_0__::func_8(&(iParam0->f_1[iParam7 /*22*/].f_4), 1024);
				__LIB_0__::func_7(&(iParam0->f_310[iParam6 /*14*/].f_7), 2048);
				iParam0->f_1[iParam7 /*22*/].f_20 = -1;
			}
			else if (__LIB_0__::func_27(iParam0->f_310[iParam6 /*14*/].f_7, 32768))
			{
				__LIB_0__::func_8(&(iParam0->f_310[iParam6 /*14*/].f_7), 16777216);
				__LIB_0__::func_8(&(iParam0->f_1[iParam7 /*22*/].f_4), 2048);
				__LIB_0__::func_8(&(iParam0->f_310[iParam6 /*14*/].f_7), 32768);
				__LIB_0__::func_8(&(iParam0->f_310[iParam6 /*14*/].f_7), 524288);
				__LIB_0__::func_8(&(iParam0->f_310[iParam6 /*14*/].f_7), 67108864);
				__LIB_0__::func_8(&(iParam0->f_1[iParam7 /*22*/].f_4), 1024);
				__LIB_0__::func_8(&(iParam0->f_1[iParam7 /*22*/].f_4), 512);
				__LIB_0__::func_7(&(iParam0->f_310[iParam6 /*14*/].f_7), 2048);
				iParam0->f_1[iParam7 /*22*/].f_20 = -1;
			}
			if (__LIB_0__::func_75(uParam1[3 /*3*/]))
			{
				__LIB_0__::func_37(uParam1[3 /*3*/]);
			}
			TASK::_0x541E5B41DCA45828(iParam0->f_310[iParam6 /*14*/], 2, 0);
			if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0->f_310[iParam6 /*14*/]))
			{
				TASK::TASK_CLEAR_LOOK_AT(iParam0->f_310[iParam6 /*14*/]);
				TASK::CLEAR_PED_TASKS(iParam0->f_310[iParam6 /*14*/], true, false);
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_310[iParam6 /*14*/].f_6))
				{
					TASK::_TASK_USE_SCENARIO_POINT(iParam0->f_310[iParam6 /*14*/], iParam0->f_310[iParam6 /*14*/].f_6, 0, 0, true, false, 0, false, -1f, false);
				}
				else
				{
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(iParam0->f_310[iParam6 /*14*/], ENTITY::GET_ENTITY_COORDS(iParam0->f_310[iParam6 /*14*/], true, false), 3f, -1, false, false, false, false);
				}
			}
			else if (!TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_310[iParam6 /*14*/].f_6))
			{
				iParam0->f_310[iParam6 /*14*/].f_6 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(iParam0->f_310[iParam6 /*14*/], false);
			}
		}
	}
	if (iParam8 == iParam7 && func_377(iParam0, uParam2, iParam8))
	{
		if (!__LIB_0__::func_27(iParam0->f_1[iParam7 /*22*/].f_4, 2048))
		{
			if (func_380(iParam0, iParam7, iParam6))
			{
				func_381(iParam0, iParam6, iParam7);
				bVar0 = true;
			}
		}
		else
		{
			iVar1 = iParam0->f_1[iParam7 /*22*/].f_20;
			if (iParam6 == iVar1)
			{
				bVar0 = true;
			}
			else if (iParam0->f_310[iParam6 /*14*/].f_9 < iParam0->f_310[iVar1 /*14*/].f_9)
			{
				func_382(iParam0, iParam7);
				func_381(iParam0, iParam6, iParam7);
				func_383(iParam0, iParam6, iVar1);
				bVar0 = true;
			}
		}
		if (!__LIB_0__::func_27(iParam0->f_310[iParam6 /*14*/].f_7, 16777216))
		{
			if (bVar0 && TASK::_DOES_SCENARIO_POINT_EXIST(TASK::_0xD04241BBF6D03A5E(Global_35)))
			{
				func_272(iParam0, iParam7, uParam1, uParam3, iParam4, uParam2);
				__LIB_0__::func_7(&(iParam0->f_1[iParam7 /*22*/].f_4), 128);
				__LIB_0__::func_7(&(iParam0->f_310[iParam6 /*14*/].f_7), 2048);
				__LIB_0__::func_8(&(iParam0->f_310[iParam6 /*14*/].f_7), 268435456);
				func_246(&(iParam0->f_310[iParam6 /*14*/]), 17);
				func_83(0);
				func_12(uParam2, 536870912, 1);
			}
			if (!__LIB_0__::func_27(iParam0->f_310[iParam6 /*14*/].f_7, 32768))
			{
				if (__LIB_0__::func_27(iParam0->f_1[iParam7 /*22*/].f_4, 512))
				{
					TASK::_0xE7FA07624574B79A(iParam0->f_310[iParam6 /*14*/], Global_35, 2, 2, 100f, 1, 0, 0, 0);
					__LIB_0__::func_7(&(iParam0->f_310[iParam6 /*14*/].f_7), 32768);
					__LIB_0__::func_7(&(iParam0->f_310[iParam6 /*14*/].f_7), 2048);
				}
			}
			else if (!__LIB_0__::func_27(iParam0->f_310[iParam6 /*14*/].f_7, 131072))
			{
				if (__LIB_0__::func_27(iParam0->f_1[iParam7 /*22*/].f_4, 1024))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0->f_310[iParam6 /*14*/], Global_35, 3000, 0, 51, 0);
					PED::_0x802092B07E3B1EEA(iParam0->f_310[iParam6 /*14*/], Global_36, 3);
					TASK::CLEAR_PED_TASKS(iParam0->f_310[iParam6 /*14*/], true, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					TASK::TASK_SEEK_CLEAR_LOS_TO_ENTITY(0, Global_35, (19f / 2f), 1f, -1082130432 /* Float: -1f */);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
					TASK::CLOSE_SEQUENCE_TASK(iVar2);
					TASK::TASK_PERFORM_SEQUENCE(iParam0->f_310[iParam6 /*14*/], iVar2);
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
					__LIB_0__::func_7(&(iParam0->f_310[iParam6 /*14*/].f_7), 131072);
					__LIB_0__::func_7(&(iParam0->f_310[iParam6 /*14*/].f_7), 2048);
					__LIB_1__::func_148(uParam1[3 /*3*/]);
				}
			}
			return;
		}
		if (!__LIB_0__::func_75(uParam1[3 /*3*/]))
		{
			__LIB_1__::func_148(uParam1[3 /*3*/]);
		}
		else if (__LIB_0__::func_33(uParam1[3 /*3*/]))
		{
			__LIB_2__::func_112(uParam1[3 /*3*/]);
		}
		if (__LIB_0__::func_75(uParam1[4 /*3*/]))
		{
			__LIB_0__::func_37(uParam1[4 /*3*/]);
		}
		if (__LIB_1__::func_285(uParam1[3 /*3*/], 1f))
		{
			if (__LIB_13__::func_666(*uParam2, 1073741824 /* Float: 2f */))
			{
				func_246(&(iParam0->f_310[iParam6 /*14*/]), 17);
				return;
			}
			if (bVar0 && TASK::_DOES_SCENARIO_POINT_EXIST(TASK::_0xD04241BBF6D03A5E(Global_35)))
			{
				__LIB_0__::func_7(&(iParam0->f_310[iParam6 /*14*/].f_7), 131072);
				__LIB_0__::func_7(&(iParam0->f_310[iParam6 /*14*/].f_7), 524288);
			}
			if (func_385(iParam0, iParam6, iParam7, iParam9))
			{
				__LIB_0__::func_7(&(iParam0->f_310[iParam6 /*14*/].f_7), 65536);
				if (iParam0->f_1[iParam7 /*22*/].f_6 == 3 && iParam0->f_310[iParam6 /*14*/].f_9 < 5f)
				{
					__LIB_0__::func_7(&(iParam0->f_310[iParam6 /*14*/].f_7), 32768);
					__LIB_0__::func_7(&(iParam0->f_310[iParam6 /*14*/].f_7), 131072);
					__LIB_0__::func_7(&(iParam0->f_310[iParam6 /*14*/].f_7), 524288);
				}
			}
			if (!__LIB_0__::func_27(iParam0->f_310[iParam6 /*14*/].f_7, 32768))
			{
				if (bVar0)
				{
					PED::_0x62FDAD5E01D2DD47(iParam0->f_310[iParam6 /*14*/], Global_36, 1, 0);
					TASK::_0xE7FA07624574B79A(iParam0->f_310[iParam6 /*14*/], Global_35, 2, 2, 100f, 1, 0, 0, 0);
					__LIB_2__::func_478(iParam0->f_310[iParam6 /*14*/], Global_35, func_386(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
					__LIB_0__::func_7(&(iParam0->f_310[iParam6 /*14*/].f_7), 32768);
					__LIB_0__::func_7(&(iParam0->f_1[iParam7 /*22*/].f_4), 128);
					__LIB_0__::func_8(&(iParam0->f_310[iParam6 /*14*/].f_7), 268435456);
					__LIB_0__::func_7(&(iParam0->f_310[iParam6 /*14*/].f_7), 2048);
					__LIB_0__::func_7(&(iParam0->f_1[iParam7 /*22*/].f_4), 512);
					__LIB_1__::func_148(uParam1[3 /*3*/]);
				}
			}
			else
			{
				fVar3 = 6.5f;
				if (__LIB_0__::func_27(iParam0->f_310[iParam6 /*14*/].f_7, 268435456))
				{
					fVar3 = 9.5f;
				}
				if ((__LIB_1__::func_285(uParam1[3 /*3*/], fVar3) || !__LIB_0__::func_27(iParam0->f_1[iParam7 /*22*/].f_4, 128)) || TASK::_DOES_SCENARIO_POINT_EXIST(TASK::_0xD04241BBF6D03A5E(Global_35)))
				{
					if (func_387(iParam0, iParam6, iParam8, iParam9, 1, uParam2))
					{
						__LIB_2__::func_478(iParam0->f_310[iParam6 /*14*/], Global_35, func_388(1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
						__LIB_0__::func_7(&(iParam0->f_310[iParam6 /*14*/].f_7), 524288);
						__LIB_0__::func_7(&(iParam0->f_1[iParam7 /*22*/].f_4), 128);
						__LIB_0__::func_8(&(iParam0->f_310[iParam6 /*14*/].f_7), 268435456);
						__LIB_0__::func_7(&(iParam0->f_1[iParam7 /*22*/].f_4), 512);
						__LIB_0__::func_7(&(iParam0->f_310[iParam6 /*14*/].f_7), 2048);
						__LIB_1__::func_148(uParam1[3 /*3*/]);
					}
					else if (func_387(iParam0, iParam6, iParam8, iParam9, 0, uParam2))
					{
						__LIB_2__::func_478(iParam0->f_310[iParam6 /*14*/], Global_35, func_388(0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
						__LIB_0__::func_7(&(iParam0->f_310[iParam6 /*14*/].f_7), 67108864);
						__LIB_0__::func_7(&(iParam0->f_1[iParam7 /*22*/].f_4), 128);
						__LIB_0__::func_8(&(iParam0->f_310[iParam6 /*14*/].f_7), 134217728);
						__LIB_0__::func_7(&(iParam0->f_1[iParam7 /*22*/].f_4), 512);
						__LIB_0__::func_7(&(iParam0->f_310[iParam6 /*14*/].f_7), 2048);
						__LIB_1__::func_148(uParam1[3 /*3*/]);
					}
					else if (!__LIB_0__::func_27(iParam0->f_310[iParam6 /*14*/].f_7, 65536))
					{
						if (bVar0)
						{
							__LIB_2__::func_478(iParam0->f_310[iParam6 /*14*/], Global_35, func_389(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
							__LIB_0__::func_7(&(iParam0->f_310[iParam6 /*14*/].f_7), 65536);
							__LIB_0__::func_7(&(iParam0->f_1[iParam7 /*22*/].f_4), 128);
							__LIB_0__::func_7(&(iParam0->f_310[iParam6 /*14*/].f_7), 2048);
							__LIB_0__::func_7(&(iParam0->f_1[iParam7 /*22*/].f_4), 512);
							__LIB_0__::func_8(&(iParam0->f_310[iParam6 /*14*/].f_7), 268435456);
							PED::_0x62FDAD5E01D2DD47(iParam0->f_310[iParam6 /*14*/], Global_36, 1, 0);
							TASK::CLEAR_PED_TASKS(iParam0->f_310[iParam6 /*14*/], true, false);
							TASK::TASK_LOOK_AT_ENTITY(iParam0->f_310[iParam6 /*14*/], Global_35, 3000, 0, 51, 0);
							TASK::OPEN_SEQUENCE_TASK(&iVar2);
							TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
							TASK::TASK_SEEK_CLEAR_LOS_TO_ENTITY(0, Global_35, (19f / 2f), 1f, -1082130432 /* Float: -1f */);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
							TASK::CLOSE_SEQUENCE_TASK(iVar2);
							TASK::TASK_PERFORM_SEQUENCE(iParam0->f_310[iParam6 /*14*/], iVar2);
							TASK::CLEAR_SEQUENCE_TASK(&iVar2);
							__LIB_1__::func_148(uParam1[3 /*3*/]);
						}
					}
					else if (!__LIB_0__::func_27(iParam0->f_310[iParam6 /*14*/].f_7, 131072))
					{
						if (bVar0)
						{
							PED::_0x802092B07E3B1EEA(iParam0->f_310[iParam6 /*14*/], Global_36, 3);
							TASK::CLEAR_PED_TASKS(iParam0->f_310[iParam6 /*14*/], true, false);
							TASK::TASK_LOOK_AT_ENTITY(iParam0->f_310[iParam6 /*14*/], Global_35, 3000, 0, 51, 0);
							TASK::OPEN_SEQUENCE_TASK(&iVar2);
							TASK::TASK_SEEK_CLEAR_LOS_TO_ENTITY(0, Global_35, (19f / 2f), 1f, -1082130432 /* Float: -1f */);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
							TASK::CLOSE_SEQUENCE_TASK(iVar2);
							TASK::TASK_PERFORM_SEQUENCE(iParam0->f_310[iParam6 /*14*/], iVar2);
							TASK::CLEAR_SEQUENCE_TASK(&iVar2);
							__LIB_2__::func_478(iParam0->f_310[iParam6 /*14*/], Global_35, func_376(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
							__LIB_0__::func_7(&(iParam0->f_310[iParam6 /*14*/].f_7), 131072);
							__LIB_0__::func_7(&(iParam0->f_1[iParam7 /*22*/].f_4), 128);
							__LIB_0__::func_7(&(iParam0->f_1[iParam7 /*22*/].f_4), 512);
							__LIB_0__::func_7(&(iParam0->f_1[iParam7 /*22*/].f_4), 1024);
							__LIB_0__::func_8(&(iParam0->f_310[iParam6 /*14*/].f_7), 268435456);
							__LIB_0__::func_7(&(iParam0->f_310[iParam6 /*14*/].f_7), 2048);
							__LIB_1__::func_148(uParam1[3 /*3*/]);
						}
					}
					else if (bVar0)
					{
						PED::_0x802092B07E3B1EEA(iParam0->f_310[iParam6 /*14*/], Global_36, 3);
						__LIB_2__::func_478(iParam0->f_310[iParam6 /*14*/], Global_35, func_390(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
						*uParam10 = MISC::GET_GAME_TIMER() + 8000;
						__LIB_0__::func_7(&(iParam0->f_310[iParam6 /*14*/].f_7), 536870912);
						func_272(iParam0, iParam7, uParam1, uParam3, iParam4, uParam2);
						__LIB_0__::func_7(&(iParam0->f_1[iParam7 /*22*/].f_4), 128);
						__LIB_0__::func_7(&(iParam0->f_310[iParam6 /*14*/].f_7), 2048);
						__LIB_0__::func_8(&(iParam0->f_310[iParam6 /*14*/].f_7), 268435456);
						func_246(&(iParam0->f_310[iParam6 /*14*/]), 17);
						func_83(0);
						func_12(uParam2, 536870912, 1);
					}
				}
			}
		}
	}
}

bool func_275(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_0__::func_55((iParam1 - 1) < 0, -1, (iParam1 - 1));
	iVar0 = __LIB_0__::func_55(iParam1 + 1 >= iParam0->f_1098, -1, iParam1 + 1);
	if (iParam1 != -1 && __LIB_0__::func_27(iParam0->f_1[iParam1 /*22*/].f_4, 2))
	{
		return true;
	}
	if (iVar1 != -1 && __LIB_0__::func_27(iParam0->f_1[iVar1 /*22*/].f_4, 2))
	{
		return true;
	}
	if (iVar0 != -1 && __LIB_0__::func_27(iParam0->f_1[iVar0 /*22*/].f_4, 2))
	{
		return true;
	}
	return false;
}

int func_276(int iParam0, var uParam1, int iParam2)
{
	if (__LIB_2__::func_227(0, 1, Global_35, 1))
	{
		return 1;
	}
	if (__LIB_0__::func_75(uParam1[1 /*3*/]) && !__LIB_1__::func_285(uParam1[1 /*3*/], 2.5f))
	{
		return 0;
	}
	return 1;
}

int func_277(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_310[iParam5 /*14*/]))
	{
		return 0;
	}
	if ((!func_328() && !__LIB_1__::func_285(uParam1[20 /*3*/], 1.5f)) && !func_391(iParam0, iParam5, uParam2))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, func_171(), false);
		func_14(uParam3, 134217728);
		HUD::_DISPLAY_HUD_COMPONENT(724769646);
		func_329(iParam6, 0);
		if (!__LIB_0__::func_75(uParam1[20 /*3*/]))
		{
			__LIB_1__::func_148(uParam1[20 /*3*/]);
		}
		return 0;
	}
	if ((!PED::_0x82CB0F3F0C7785E5(iParam0->f_310[iParam5 /*14*/]) && !__LIB_1__::func_285(uParam1[20 /*3*/], 1.5f)) && !func_391(iParam0, iParam5, uParam2))
	{
		if (iParam0->f_310[iParam5 /*14*/].f_12 == 0)
		{
			iParam0->f_310[iParam5 /*14*/].f_12 = MISC::GET_GAME_TIMER();
		}
		PED::_0xD8CEEED54C672B5D(iParam0->f_310[iParam5 /*14*/], Global_35, 0f, 0f, 0f, 3, 3);
		PED::_0x9A77DFD295E29B09(iParam0->f_310[iParam5 /*14*/], true);
		return 0;
	}
	__LIB_0__::func_37(uParam1[20 /*3*/]);
	PED::_0xE735A7DA22E88359(iParam0->f_310[iParam5 /*14*/]);
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && !__LIB_13__::func_666(*uParam2, 512))
	{
		func_98(uParam3, 134217728);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	func_65(iParam7);
	__LIB_2__::func_478(iParam0->f_310[iParam5 /*14*/], Global_35, "HAND_OVER_MONEY", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
	return 1;
}

void func_278(var uParam0, int iParam1, var uParam2)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 25446659))
	{
		__LIB_2__::func_478(Global_35, *uParam0, "ROB_ESCALATED_HIT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1506116031, 1, 0, 0);
		func_65(iParam1);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 60809731))
	{
		AUDIO::STOP_CURRENT_PLAYING_SPEECH(*uParam0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam0, -2007843936))
	{
		__LIB_2__::func_478(*uParam0, Global_35, "HAND_OVER_MONEY", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
		func_65(iParam1);
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			func_98(uParam2, 134217728);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
	}
}

void func_279(var uParam0)
{
	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("PROP_HUMAN_SEAT_CHAIR_TRAIN"), 8193, ENTITY::GET_ENTITY_MODEL(*uParam0), 0);
}

void func_280(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, var uParam6, var uParam7, var uParam8)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_310[iParam2 /*14*/]))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_310[iParam2 /*14*/], 780511057, true) == 8 && iParam0->f_310[iParam2 /*14*/].f_5 != 4)
		{
			TASK::TASK_CLEAR_LOOK_AT(iParam0->f_310[iParam2 /*14*/]);
			PED::_0x802092B07E3B1EEA(iParam0->f_310[iParam2 /*14*/], Global_36, 3);
			TASK::TASK_COMBAT_PED(iParam0->f_310[iParam2 /*14*/], Global_35, 16777216, 16);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_310[iParam2 /*14*/], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0->f_310[iParam2 /*14*/], *iParam5);
			PED::REGISTER_TARGET(iParam0->f_310[iParam2 /*14*/], Global_35, 1);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iParam0->f_310[iParam2 /*14*/], true, 15f);
			PED::SET_PED_TARGET_LOSS_RESPONSE(iParam0->f_310[iParam2 /*14*/], 1);
			PED::SET_PED_KEEP_TASK(iParam0->f_310[iParam2 /*14*/], true);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam2 /*14*/], 297, false);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam2 /*14*/], 315, true);
			if (iParam4 == iParam3)
			{
				__LIB_2__::func_480(uParam8, 0, 0, 1, 0);
			}
		}
		if (MISC::GET_GAME_TIMER() >= *uParam6)
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) == 0)
			{
				if (iParam0->f_310[iParam2 /*14*/].f_9 < 50f)
				{
					if (!__LIB_0__::func_27(iParam0->f_310[iParam2 /*14*/].f_7, 536870912))
					{
						sVar0 = func_390();
					}
					else
					{
						sVar0 = func_392();
					}
					if (__LIB_2__::func_478(iParam0->f_310[iParam2 /*14*/], Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 0, 0, 0))
					{
						__LIB_0__::func_7(&(iParam0->f_310[iParam2 /*14*/].f_7), 536870912);
						*uParam6 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000));
					}
				}
			}
		}
		if (MISC::GET_GAME_TIMER() >= iParam0->f_310[iParam2 /*14*/].f_12)
		{
			iVar1 = 0;
			iVar2 = -1;
			if (func_128(iParam0, &(iParam0->f_310[iParam2 /*14*/])) && ENTITY::GET_ENTITY_SPEED(iParam0->f_1[0 /*22*/]) > 0.2f)
			{
				if (!func_128(iParam0, &Global_35) || iParam4 < 0)
				{
					iVar1 = 1;
				}
				else if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_1[iParam4 /*22*/].f_1) && ENTITY::IS_ENTITY_IN_VOLUME(iParam0->f_310[iParam2 /*14*/], iParam0->f_1[iParam4 /*22*/].f_1, true, 0))
				{
					iVar1 = 2;
					iVar2 = iParam4;
				}
				else if (iParam4 > 0)
				{
					iVar1 = 3;
				}
				else
				{
					iVar3 = func_393(iParam0, iParam2);
					if (iVar3 > 1)
					{
						iVar1 = 3;
					}
					else
					{
						iVar1 = 3;
						if (iVar3 >= 0)
						{
							vVar4 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0->f_1[iVar3 /*22*/], ENTITY::GET_ENTITY_COORDS(iParam0->f_310[iParam2 /*14*/], true, false)) };
							if (vVar4.z < 2.3f)
							{
								iVar1 = 4;
							}
						}
					}
				}
			}
			else if (iParam4 != -1 || func_46(iParam0, 30f))
			{
				iVar1 = 0;
			}
			else
			{
				iVar1 = 5;
			}
			if (iVar1 != iParam0->f_310[iParam2 /*14*/].f_5)
			{
				func_394(iParam0, iParam2, iVar1, iVar2);
			}
			switch (iParam0->f_310[iParam2 /*14*/].f_5)
			{
				case 1:
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0->f_310[iParam2 /*14*/], 1f);
					break;
			}
			iParam0->f_310[iParam2 /*14*/].f_12 = MISC::GET_GAME_TIMER() + 1000;
		}
		if (!MAP::DOES_BLIP_EXIST(iParam0->f_310[iParam2 /*14*/].f_1))
		{
			iParam0->f_310[iParam2 /*14*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iParam0->f_310[iParam2 /*14*/]);
		}
	}
}

void func_281(int iParam0, int iParam1, int iParam2)
{
	func_395(iParam0, iParam2, iParam1);
}

void func_282(int iParam0, int iParam1)
{
	char* sVar0;
	iParam1 = Local_718.f_1[iParam0 /*22*/].f_11[iParam1];
	PED::SET_PED_CONFIG_FLAG(Local_718.f_310[iParam1 /*14*/], 171, true);
	PED::SET_PED_CONFIG_FLAG(Local_718.f_310[iParam1 /*14*/], 189, true);
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_718.f_310[iParam1 /*14*/]))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_718.f_310[iParam1 /*14*/], true, true);
	}
	if (PED::IS_PED_MALE(Local_718.f_310[iParam1 /*14*/]))
	{
		if (ENTITY::GET_ENTITY_MODEL(Local_718.f_310[iParam1 /*14*/]) == func_396())
		{
			Local_718.f_310[iParam1 /*14*/].f_3 = 1;
			Local_718.f_1100++;
			func_397(Local_718.f_310[iParam1 /*14*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			func_398(&(Local_718.f_310[iParam1 /*14*/]));
			if (!__LIB_0__::func_27(Local_718.f_1[iParam0 /*22*/].f_4, 256))
			{
				__LIB_0__::func_7(&(Local_718.f_1[iParam0 /*22*/].f_4), 256);
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(Local_718.f_310[iParam1 /*14*/]) == func_399())
		{
			Local_718.f_310[iParam1 /*14*/].f_3 = 0;
		}
		else
		{
			Local_718.f_310[iParam1 /*14*/].f_3 = 2;
		}
	}
	else
	{
		Local_718.f_310[iParam1 /*14*/].f_3 = 2;
	}
	Local_718.f_310[iParam1 /*14*/].f_8 = iParam0;
	func_250(&Local_718, iParam1);
	sVar0 = func_400(ENTITY::GET_ENTITY_MODEL(Local_718.f_310[iParam1 /*14*/]));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		func_401(Local_718.f_310[iParam1 /*14*/], sVar0, 0);
	}
	__LIB_0__::func_7(&(Local_718.f_310[iParam1 /*14*/].f_7), 16);
}

var func_283(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	fVar2 = 9999.9f;
	iVar0 = 0;
	while (iVar0 < iParam0->f_1[iParam1 /*22*/].f_8)
	{
		iVar1 = iParam0->f_1[iParam1 /*22*/].f_11[iVar0];
		if (iVar1 >= 0 && iParam0->f_310[iVar1 /*14*/].f_9 < fVar2)
		{
			fVar2 = iParam0->f_310[iVar1 /*14*/].f_9;
			uVar3 = iParam0->f_310[iVar1 /*14*/];
			*iParam2 = iVar1;
		}
		iVar0++;
	}
	return uVar3;
}

bool func_290(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam1 >= 0)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_1098)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1[iVar0 /*22*/]))
		{
			if (!__LIB_0__::func_27(iParam0->f_1[iVar0 /*22*/].f_4, -2147483648))
			{
				VEHICLE::TRACK_VEHICLE_VISIBILITY(iParam0->f_1[iVar0 /*22*/]);
				__LIB_0__::func_7(&(iParam0->f_1[iVar0 /*22*/].f_4), -2147483648);
			}
			if (VEHICLE::IS_VEHICLE_VISIBLE(iParam0->f_1[iVar0 /*22*/]))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_291(int iParam0, float fParam1)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (func_411(iParam0, iVar0, fParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

float func_294(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case default:
			return 10f;
		case 2:
			return 5f;
		case 1:
			return 3f;
		case 0:
			return 1f;
			default:
				break;
	}
}

int func_295()
{
	if ((MISC::GET_FRAME_COUNT() % 5) != 0)
	{
		return -1;
	}
	return ((MISC::GET_FRAME_COUNT() % Local_718.f_1098 * 5) / 5);
}

bool func_299()
{
	if (func_414())
	{
		return false;
	}
	if (__LIB_13__::func_666(iLocal_716, 16777216))
	{
		return false;
	}
	return true;
}

int func_306(var uParam0, int iParam1, int iParam2)
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
		return func_306(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_307(var uParam0, int iParam1, int iParam2)
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
		return func_307(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_312(int iParam0, int iParam1)
{
	if (__LIB_0__::func_27(Global_1392581.f_3, 8))
	{
		return false;
	}
	if (iParam0 != iParam1)
	{
		return false;
	}
	return true;
}

bool func_313(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_718.f_1099)
	{
		if (*iParam0 == Local_718.f_310[iVar0 /*14*/])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_314(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam0 < 0 || iParam0 >= Local_718.f_1098)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 8)
	{
		return false;
	}
	iVar0 = Local_718.f_1[iParam0 /*22*/].f_11[iParam1];
	if (iVar0 < 0 || iVar0 >= 45)
	{
		return false;
	}
	if (__LIB_0__::func_27(Local_718.f_310[iVar0 /*14*/].f_7, 16))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_718.f_310[iVar0 /*14*/]))
	{
		return false;
	}
	if (LAW::_0x40851BCC33ACD9AB(Local_718.f_310[iVar0 /*14*/]))
	{
		return false;
	}
	if (LAW::_0x0EAF918F751F27BA(Local_718.f_310[iVar0 /*14*/]))
	{
		return false;
	}
	return true;
}

bool func_328()
{
	int iVar0;
	iVar0 = __LIB_0__::func_153(Global_35, 0, 1, 0);
	if (((iVar0 == joaat("WEAPON_UNARMED") || iVar0 == joaat("WEAPON_LASSO")) || WEAPON::_IS_WEAPON_MELEE(iVar0)) || !WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return false;
	}
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		return true;
	}
	return false;
}

int func_329(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	if (func_328())
	{
		return __LIB_0__::func_153(Global_35, 0, 1, 0);
	}
	iVar0 = __LIB_0__::func_153(Global_35, 1, 1, 0);
	if (!__LIB_0__::func_154(iVar0))
	{
		iVar0 = __LIB_0__::func_153(Global_35, 2, 1, 0);
	}
	if (!__LIB_0__::func_154(iVar0))
	{
		iVar0 = __LIB_0__::func_153(Global_35, 3, 1, 0);
	}
	if (!__LIB_0__::func_154(iVar0))
	{
		iVar0 = __LIB_0__::func_153(Global_35, 9, 1, 0);
	}
	if (iVar0 != joaat("WEAPON_UNARMED") && !__LIB_0__::func_163(Global_35, 716706914))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, false, 0, false, false);
		if (bParam1)
		{
			*iParam0++;
			iVar1 = 0;
		}
		else
		{
			iVar1 = Global_35;
		}
		TASK::TASK_SWAP_WEAPON(iVar1, 1, 0, 0, 0);
	}
	return iVar0;
}

char* func_331(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TRAIN_ROB_START_RIFLE";
		case 1:
			return "PISTOL_ARMED_ROB_START";
		default:
			break;
	}
	return "";
}

bool func_334(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (__LIB_8__::func_747(uParam2, 268435456))
	{
		return false;
	}
	if (iParam3 == 0)
	{
		return true;
	}
	if (iParam3 == (iParam0->f_1098 - 1))
	{
		return true;
	}
	if (iParam3 == (iParam0->f_1098 / 2))
	{
		return true;
	}
	return false;
}

bool func_335(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0->f_1[iParam1 /*22*/], 6.5f, 0f, 0f) };
	vVar3 = { vVar0 };
	if (__LIB_4__::func_496(&vVar3, 3f))
	{
		vVar6 = { vVar0 - vVar3 };
		if (MISC::ABSF(vVar6.z) < 3f)
		{
			return false;
		}
	}
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0->f_1[iParam1 /*22*/], (-1f * 6.5f), 0f, 0f) };
	vVar3 = { vVar0 };
	if (__LIB_4__::func_496(&vVar3, 3f))
	{
		vVar6 = { vVar0 - vVar3 };
		if (MISC::ABSF(vVar6.z) < 3f)
		{
			return false;
		}
	}
	return true;
}

void func_337(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (iParam1 < 0 || iParam1 >= iParam0->f_1098)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < iParam0->f_1[iParam1 /*22*/].f_8)
	{
		iVar0 = iParam0->f_1[iParam1 /*22*/].f_11[iVar1];
		if (iVar0 >= 0 && iVar0 < 45)
		{
			__LIB_0__::func_7(&(iParam0->f_310[iVar0 /*14*/].f_7), 2048);
		}
		iVar1++;
	}
}

bool func_338(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	if (__LIB_13__::func_666(*uParam1, 2048))
	{
		return true;
	}
	iVar0 = VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iParam0->f_1[0 /*22*/]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return true;
	}
	if (func_95(ENTITY::GET_ENTITY_COORDS(iParam0->f_310[iParam3 /*14*/], true, false), 1140457472 /* Float: 500f */, 0))
	{
		return true;
	}
	return false;
}

void func_339(int iParam0, int iParam1)
{
	int iVar0;
	struct<13> Var1;
	int iVar24;
	iVar0 = 0;
	if (iParam0->f_310[iParam1 /*14*/].f_8 >= 0 && iParam0->f_310[iParam1 /*14*/].f_8 < iParam0->f_1098)
	{
		if (iParam0->f_1[iParam0->f_310[iParam1 /*14*/].f_8 /*22*/].f_7 == 0)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(800, 1200);
		}
		else if (iParam0->f_1[iParam0->f_310[iParam1 /*14*/].f_8 /*22*/].f_7 == 1)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(300, 600);
		}
	}
	if (iVar0 > 0)
	{
		Var1.f_1 = 10;
		Var1.f_12 = 10;
		MISC::_0xAD44856A1CD29635(Global_35, iParam0->f_310[iParam1 /*14*/], &Var1);
		iVar24 = 0;
		while (iVar24 < Var1)
		{
			if (Var1.f_1[iVar24] == joaat("CURRENCY_CASH"))
			{
				Var1.f_12[iVar24] = iVar0;
				MISC::_0xBB282CF5D2333FB8(iParam0->f_310[iParam1 /*14*/], &Var1);
				return;
			}
			iVar24++;
		}
		if (Var1 >= 10)
		{
			Var1.f_12[0] = iVar0;
		}
		else
		{
			Var1.f_12[Var1] = iVar0;
			Var1++;
		}
		MISC::_0xBB282CF5D2333FB8(iParam0->f_310[iParam1 /*14*/], &Var1);
	}
}

bool func_340(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 && iParam0->f_310[iParam1 /*14*/].f_9 < 27f)
	{
		return true;
	}
	if (iParam2 == 0 || iParam2 == 1)
	{
		return true;
	}
	return false;
}

void func_341(var uParam0, int* iParam1)
{
	__LIB_2__::func_451(iParam1, 0);
}

void func_342(var uParam0, bool bParam1)
{
	__LIB_3__::func_157(uParam0[0 /*17*/], __LIB_2__::func_460(7), 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_431(uParam0[0 /*17*/], 1);
	func_432(uParam0[0 /*17*/], 1);
	func_433(uParam0[0 /*17*/], 15f);
	__LIB_3__::func_157(uParam0[1 /*17*/], __LIB_2__::func_460(10), 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	func_431(uParam0[1 /*17*/], 1);
	func_432(uParam0[1 /*17*/], 1);
	func_433(uParam0[1 /*17*/], 15f);
	__LIB_3__::func_157(uParam0[2 /*17*/], "TRB_STOP_DRIVER", 0, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
	func_431(uParam0[2 /*17*/], 1);
	func_432(uParam0[2 /*17*/], bParam1);
	func_433(uParam0[2 /*17*/], 15f);
}

void func_343(var uParam0, bool bParam1)
{
	__LIB_3__::func_157(uParam0[0 /*17*/], __LIB_2__::func_460(8), 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_431(uParam0[0 /*17*/], 1);
	func_432(uParam0[0 /*17*/], 1);
	func_433(uParam0[0 /*17*/], 15f);
	__LIB_3__::func_157(uParam0[1 /*17*/], __LIB_2__::func_460(10), 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	func_431(uParam0[1 /*17*/], 1);
	func_432(uParam0[1 /*17*/], 1);
	func_433(uParam0[1 /*17*/], 15f);
	__LIB_3__::func_157(uParam0[2 /*17*/], "TRB_STOP_DRIVER", 0, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
	func_431(uParam0[2 /*17*/], 1);
	func_432(uParam0[2 /*17*/], bParam1);
	func_433(uParam0[2 /*17*/], 15f);
}

void func_344(var uParam0, bool bParam1)
{
	__LIB_3__::func_157(uParam0[0 /*17*/], __LIB_2__::func_460(8), 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_431(uParam0[0 /*17*/], 1);
	func_432(uParam0[0 /*17*/], bParam1);
	func_433(uParam0[0 /*17*/], 15f);
	__LIB_3__::func_157(uParam0[1 /*17*/], __LIB_2__::func_460(10), 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	func_431(uParam0[1 /*17*/], 1);
	func_432(uParam0[1 /*17*/], 1);
	func_433(uParam0[1 /*17*/], 15f);
	__LIB_3__::func_157(uParam0[2 /*17*/], "TRB_STOP_DRIVER", 0, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
	func_431(uParam0[2 /*17*/], 1);
	func_432(uParam0[2 /*17*/], bParam1);
	func_433(uParam0[2 /*17*/], 15f);
}

int func_346(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		if (__LIB_4__::func_231(*uParam0, iParam1, uParam3))
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
						return func_346(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

char* func_347(var uParam0)
{
	char cVar0[32];
	char cVar4[32];
	if (uParam0->f_11 == 0)
	{
		uParam0->f_11 = MISC::GET_RANDOM_INT_IN_RANGE(1, 20);
	}
	if (PED::IS_PED_MALE(*uParam0))
	{
		StringCopy(&cVar4, "INSULT_MALE_CONV", 32);
	}
	else
	{
		StringCopy(&cVar4, "INSULT_FEMALE_CONV", 32);
	}
	StringConCat(&cVar4, "_PART", 32);
	MISC::_INT_TO_STRING(1, "%d", &cVar0);
	StringConCat(&cVar4, &cVar0, 32);
	return __LIB_1__::func_569(cVar4);
}

int func_349(int iParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	if (VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iParam0->f_1[0 /*22*/]) == Global_35)
	{
		return 0;
	}
	if (__LIB_0__::func_665(iParam0->f_1[0 /*22*/], Global_35, 1, 1) > 27f)
	{
		return 0;
	}
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/]))
	{
		return 0;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/], true, false) };
	if (FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(-1, vVar0 + Vector(30f, 100f, 0f), vVar0 - Vector(30f, 100f, 0f), 30f) == __LIB_0__::func_57(Global_35))
	{
		return 0;
	}
	if (MISC::IS_PROJECTILE_IN_AREA(vVar0 + Vector(100f, 100f, 100f), vVar0 - Vector(100f, 100f, 100f), true))
	{
		return 0;
	}
	if (iParam2 < 2)
	{
		return 1;
	}
	if ((iParam2 < 3 && __LIB_13__::func_666(*uParam1, 8)) && ENTITY::IS_ENTITY_ON_SCREEN(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/]))
	{
		return 1;
	}
	return 0;
}

void func_350(int iParam0)
{
	char* sVar0;
	__LIB_2__::func_461(0);
	if (!VEHICLE::IS_VEHICLE_STOPPED(iParam0->f_1[0 /*22*/]))
	{
		sVar0 = "CALL_OUT_TO_TRAIN_ENGINEER";
	}
	else
	{
		sVar0 = "ROB_SHOUTED";
	}
	__LIB_2__::func_478(Global_35, iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/], sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
}

char* func_351()
{
	return "GET_OUT_CONDUCTOR";
}

char* func_352()
{
	return "GET_OUT";
}

char* func_353()
{
	return "LEAVE_NOW";
}

char* func_355()
{
	return "WHATS_GOING_ON_BACK_THERE";
}

char* func_356()
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (iVar0)
	{
		case 0:
		case default:
			return "GENERIC_ANGRY_REACTION";
		case 1:
			return "GET_AWAY_FROM_ME";
		case 2:
			return "DONT_BE_STUPID";
			default:
				break;
	}
}

char* func_357()
{
	return "NEED_HELP";
}

void func_358(int iParam0)
{
	PED::_0xBBF6D1D07C02D00A(iParam0, 32);
	PED::_0xBBF6D1D07C02D00A(iParam0, 1);
	PED::_0xBBF6D1D07C02D00A(iParam0, 31);
	PED::_0xBBF6D1D07C02D00A(iParam0, 4);
	PED::_0xBBF6D1D07C02D00A(iParam0, 0);
	PED::_0xBBF6D1D07C02D00A(iParam0, 6);
	PED::_0xBBF6D1D07C02D00A(iParam0, 5);
	PED::_0xBBF6D1D07C02D00A(iParam0, 26);
	PED::_0xBBF6D1D07C02D00A(iParam0, 33);
	PED::_0xBBF6D1D07C02D00A(iParam0, 15);
	PED::_0xBBF6D1D07C02D00A(iParam0, 27);
	PED::_0xBBF6D1D07C02D00A(iParam0, 28);
	PED::_0xBBF6D1D07C02D00A(iParam0, 3);
	PED::_0xBBF6D1D07C02D00A(iParam0, 14);
	PED::_0xBBF6D1D07C02D00A(iParam0, 16);
	PED::_0xAE6004120C18DF97(iParam0, 0, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 1, false);
}

bool func_359(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_75(&(iParam0->f_1115)))
	{
		__LIB_1__::func_283(&(iParam0->f_1115), 0);
		return false;
	}
	else if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0->f_310[iParam1 /*14*/]) && iParam0->f_310[iParam1 /*14*/].f_9 < 300f)
	{
		__LIB_1__::func_148(&(iParam0->f_1115));
		return false;
	}
	else if (!__LIB_1__::func_285(&(iParam0->f_1115), 5f))
	{
		return false;
	}
	if (ENTITY::GET_ENTITY_SPEED(iParam0->f_1[0 /*22*/]) > 0.2f)
	{
		return false;
	}
	if (PED::IS_PED_RAGDOLL(iParam0->f_310[iParam1 /*14*/]))
	{
		return false;
	}
	if (iParam0->f_310[iParam1 /*14*/].f_9 < (19f / 2f))
	{
		return false;
	}
	return true;
}

Vector3 func_360(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_1[0 /*22*/], true, false) };
	fVar6 = ENTITY::GET_ENTITY_HEADING(iParam0->f_1[0 /*22*/]);
	if (__LIB_0__::func_195(vVar3, ENTITY::GET_ENTITY_COORDS(iParam0->f_1[1 /*22*/], true, false), Global_36))
	{
		vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar6, -1.83f, -5f, 0f) };
	}
	else
	{
		vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar6, 1.83f, -5f, 0f) };
	}
	vVar0.f_2 = (vVar0.z + 1f);
	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), false))
	{
		return 0f, 0f, 0f;
	}
	if (CAM::IS_SPHERE_VISIBLE(vVar0, 1f))
	{
		return 0f, 0f, 0f;
	}
	return vVar0;
}

void func_361(int iParam0, int iParam1, int iParam2, int iParam3, vector3 vParam4)
{
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam1, true, true);
	ENTITY::SET_ENTITY_COORDS(iParam1, vParam4, true, false, true, true);
	func_281(iParam0, iParam2, iParam3);
}

bool func_363(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_27(uParam0->f_7, 2))
	{
		return false;
	}
	iVar0 = *uParam0;
	if (!func_328())
	{
		return false;
	}
	if (PED::_0xD0B7AEB56229D317(Global_35) == iVar0)
	{
		return true;
	}
	if (!__LIB_0__::func_48(iVar0, Global_35, fParam1, 1))
	{
		return false;
	}
	iVar1 = PED::_0x7F9B9791D4CB71F6(iVar0, Global_35, false, 0);
	if (iVar1 == 0 || iVar1 == 2)
	{
		return false;
	}
	if (__LIB_2__::func_401(iVar0, 1, 1, 1, 0, 0))
	{
		return true;
	}
	if (__LIB_4__::func_207(iVar0, 15f, 35f, 1097859072 /* Float: 15f */, 0))
	{
		return true;
	}
	return false;
}

bool func_364(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		__LIB_5__::func_686(uParam2, 1, iVar0);
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
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (__LIB_4__::func_237(iParam0, uParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
				else if (__LIB_2__::func_969(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_4__::func_235(iParam0, uParam2))
				{
					*iParam3 = 64;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return true;
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
						*iParam3 = 4;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam2))
					{
						*iParam3 = 256;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return true;
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
					*iParam3 = 16;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
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
						*iParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return true;
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
					*iParam3 = 2;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
								__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
							__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
							__LIB_2__::func_831(iParam0, uParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (__LIB_5__::func_678(uParam2, iParam0))
			{
				*iParam3 = 1024;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (__LIB_5__::func_683(iParam0, uParam2))
					{
						*iParam3 = 8192;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (__LIB_2__::func_440(iParam0, uParam2))
				{
					*iParam3 = 32768;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_367(int iParam0, int iParam1)
{
	if (iParam0->f_310[iParam1 /*14*/].f_9 <= 5f)
	{
		return true;
	}
	if (__LIB_10__::func_896(PLAYER::PLAYER_ID(), iParam0->f_310[iParam1 /*14*/]))
	{
		return true;
	}
	if (__LIB_4__::func_207(iParam0->f_310[iParam1 /*14*/], 5f, 15f, 1097859072 /* Float: 15f */, 0))
	{
		return true;
	}
	return false;
}

bool func_369(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int* iParam5, var uParam6, var uParam7, var uParam8, int iParam9, int iParam10, int iParam11)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bVar0 = true;
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_310[iParam4 /*14*/]))
	{
		bVar0 = false;
	}
	else if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0->f_310[iParam4 /*14*/]) && !TASK::GET_IS_TASK_ACTIVE(iParam0->f_310[iParam4 /*14*/], 3))
	{
		bVar0 = false;
	}
	else if (iParam0->f_310[iParam4 /*14*/].f_3 == 1 || iParam0->f_310[iParam4 /*14*/].f_3 == 0)
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		func_492(iParam0, uParam7, uParam1, uParam2, uParam8, iParam9, iParam5, uParam6, iParam3, iParam4, iParam10);
		if (__LIB_0__::func_27(iParam0->f_310[iParam4 /*14*/].f_7, 2048))
		{
			func_341(uParam6, iParam5);
			if (iParam0->f_310[iParam4 /*14*/].f_4 == 19 || iParam0->f_310[iParam4 /*14*/].f_4 == 20)
			{
				__LIB_2__::func_480(uParam6, 0, 0, 1, 0);
			}
			else if (__LIB_0__::func_27(iParam0->f_310[iParam4 /*14*/].f_7, 2) || __LIB_0__::func_27(iParam0->f_310[iParam4 /*14*/].f_7, 4194304))
			{
				func_493(uParam6, __LIB_0__::func_27(iParam0->f_310[iParam4 /*14*/].f_7, 67108864), 1);
			}
			else if (__LIB_0__::func_27(iParam0->f_310[iParam4 /*14*/].f_7, 512))
			{
				func_493(uParam6, __LIB_0__::func_27(iParam0->f_310[iParam4 /*14*/].f_7, 67108864), (__LIB_0__::func_27(iParam0->f_310[iParam4 /*14*/].f_7, 134217728) || !__LIB_8__::func_747(uParam2, 1073741824 /* Float: 2f */)));
			}
			else
			{
				func_494(uParam6, __LIB_0__::func_27(iParam0->f_310[iParam4 /*14*/].f_7, 134217728), __LIB_0__::func_27(iParam0->f_310[iParam4 /*14*/].f_7, 4096), __LIB_0__::func_27(iParam0->f_310[iParam4 /*14*/].f_7, 8192), !__LIB_8__::func_747(uParam2, 1073741824 /* Float: 2f */));
			}
			__LIB_0__::func_8(&(iParam0->f_310[iParam4 /*14*/].f_7), 2048);
		}
		iVar2 = __LIB_2__::func_340(1, 0, 0) | 2048 | 16384 | 256 | 65536 | 2097152;
		iVar1 = func_346(&(iParam0->f_310[iParam4 /*14*/]), iParam5, 19f, uParam6, 0, 3, 0, 0, iVar2, 0, 0, 2, iParam0->f_310[iParam4 /*14*/].f_9);
		__LIB_0__::func_8(&(iParam0->f_310[iParam4 /*14*/].f_7), 33554432);
		if (__LIB_1__::func_489(iParam5, 1))
		{
			func_12(uParam1, 128, 1);
			*iParam11 = iParam4;
			__LIB_0__::func_7(&(iParam0->f_310[iParam4 /*14*/].f_7), 33554432);
		}
		if (iVar1 != -1)
		{
			__LIB_0__::func_7(&(iParam0->f_310[iParam4 /*14*/].f_7), 134217728);
		}
		switch (iVar1)
		{
			case 2:
				__LIB_1__::func_148(uParam7[1 /*3*/]);
				__LIB_0__::func_7(&(iParam0->f_310[iParam4 /*14*/].f_7), 512);
				if (!__LIB_13__::func_666(*uParam1, 65536) || !__LIB_0__::func_27(iParam0->f_310[iParam4 /*14*/].f_7, 512))
				{
					func_139(iParam0, iParam3, uParam7, uParam8, iParam9, uParam1, uParam2, iParam10, uParam6, iParam5, 0, 0);
					iParam0->f_310[iParam4 /*14*/].f_3 = 2;
					bVar3 = true;
				}
				else
				{
					__LIB_0__::func_37(uParam7[15 /*3*/]);
					if (!func_328())
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, func_171(), false);
						func_14(uParam2, 134217728);
						HUD::_DISPLAY_HUD_COMPONENT(724769646);
						func_329(iParam10, 0);
					}
				}
				if (!bVar3)
				{
					func_495(iParam0, uParam1, iParam4, iParam3);
				}
				__LIB_0__::func_8(&(iParam0->f_310[iParam4 /*14*/].f_7), 256);
				func_263(iParam0, iParam4, *uParam1);
				func_45(iParam0, iParam3);
				iParam0->f_310[iParam4 /*14*/].f_3 = 2;
				__LIB_0__::func_7(&(iParam0->f_310[iParam4 /*14*/].f_7), 4194304);
				iParam0->f_1[iParam3 /*22*/].f_10++;
				func_341(uParam6, iParam5);
				func_99(uParam1);
				func_246(&(iParam0->f_310[iParam4 /*14*/]), 9);
				return true;
			case 1:
				if (!__LIB_0__::func_27(iParam0->f_310[iParam4 /*14*/].f_7, 512))
				{
					func_341(uParam6, iParam5);
					func_45(iParam0, iParam3);
					if (PED::IS_PED_MALE(iParam0->f_310[iParam4 /*14*/]))
					{
						__LIB_2__::func_478(Global_35, iParam0->f_310[iParam4 /*14*/], func_347(&(iParam0->f_310[iParam4 /*14*/])), 0, -1082130432 /* Float: -1f */, iParam0->f_310[iParam4 /*14*/].f_11, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(Global_35, iParam0->f_310[iParam4 /*14*/], func_347(&(iParam0->f_310[iParam4 /*14*/])), 0, -1082130432 /* Float: -1f */, iParam0->f_310[iParam4 /*14*/].f_11, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					}
					func_246(&(iParam0->f_310[iParam4 /*14*/]), 8);
					__LIB_0__::func_7(&(iParam0->f_310[iParam4 /*14*/].f_7), 4096);
					__LIB_0__::func_7(&(iParam0->f_310[iParam4 /*14*/].f_7), 8192);
					__LIB_0__::func_7(&(iParam0->f_310[iParam4 /*14*/].f_7), 2048);
				}
				break;
			case 0:
				func_341(uParam6, iParam5);
				func_45(iParam0, iParam3);
				if (!__LIB_0__::func_27(iParam0->f_310[iParam4 /*14*/].f_7, 512))
				{
					if (__LIB_1__::func_985())
					{
						if (PED::IS_PED_MALE(iParam0->f_310[iParam4 /*14*/]))
						{
							__LIB_2__::func_478(Global_35, iParam0->f_310[iParam4 /*14*/], "GREET_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
						}
						else
						{
							__LIB_2__::func_478(Global_35, iParam0->f_310[iParam4 /*14*/], "GREET_FEMALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
						}
					}
					else
					{
						__LIB_2__::func_478(Global_35, iParam0->f_310[iParam4 /*14*/], "GREET_GENERAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					}
					func_246(&(iParam0->f_310[iParam4 /*14*/]), 8);
					__LIB_0__::func_7(&(iParam0->f_310[iParam4 /*14*/].f_7), 4096);
					__LIB_0__::func_7(&(iParam0->f_310[iParam4 /*14*/].f_7), 2048);
				}
				else
				{
					__LIB_2__::func_478(Global_35, iParam0->f_310[iParam4 /*14*/], func_496(&(iParam0->f_310[iParam4 /*14*/])), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					__LIB_0__::func_7(&(iParam0->f_310[iParam4 /*14*/].f_7), 67108864);
				}
				break;
		}
	}
	else if (__LIB_1__::func_489(iParam5, 1))
	{
		__LIB_2__::func_480(uParam6, 0, 0, 1, 0);
		__LIB_1__::func_491(iParam5, 1);
	}
	return false;
}

bool func_370(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (iParam0->f_310[iParam1 /*14*/].f_4 == 20)
	{
		return false;
	}
	if (iParam0->f_310[iParam1 /*14*/].f_3 != 1)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 > 45)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_310[iParam1 /*14*/]))
	{
		return false;
	}
	if (ENTITY::GET_ENTITY_SPEED(iParam0->f_1[0 /*22*/]) < 1f)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_1098)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_1[iVar0 /*22*/].f_1))
		{
			return false;
		}
		if (__LIB_1__::func_205(iParam0->f_310[iParam1 /*14*/], iParam0->f_1[iVar0 /*22*/].f_1, 1, 0))
		{
			iParam0->f_310[iParam1 /*14*/].f_8 = iVar0;
			return false;
		}
		iVar0++;
	}
	if ((ENTITY::IS_ENTITY_ON_SCREEN(iParam0->f_310[iParam1 /*14*/]) && iParam0->f_310[iParam1 /*14*/].f_9 < 300f) || iParam0->f_310[iParam1 /*14*/].f_9 < (19f * 4f))
	{
		*bParam2 = 1;
		return false;
	}
	return true;
}

void func_372(int iParam0, int iParam1, int iParam2, int* iParam3, var uParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bVar0 = __LIB_0__::func_27(iParam0->f_310[iParam1 /*14*/].f_7, 32768);
	iVar1 = func_497(iParam0, iParam1, iParam3, uParam4, uParam5);
	if (iVar1 != -1)
	{
		func_120(iParam0, iParam2, 0);
	}
	switch (iVar1)
	{
		case 0:
			if (bVar0)
			{
				func_341(uParam4, iParam3);
				__LIB_0__::func_7(&(iParam0->f_310[iParam1 /*14*/].f_7), 2048);
				__LIB_2__::func_478(Global_35, iParam0->f_310[iParam1 /*14*/], "DEFUSE_ARGUMENT_TOUGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				__LIB_0__::func_7(&(iParam0->f_310[iParam1 /*14*/].f_7), 268435456);
				__LIB_0__::func_8(&(iParam0->f_310[iParam1 /*14*/].f_7), 134217728);
			}
			else
			{
				func_341(uParam4, iParam3);
				__LIB_0__::func_7(&(iParam0->f_310[iParam1 /*14*/].f_7), 2048);
				__LIB_2__::func_478(iParam0->f_310[iParam1 /*14*/], Global_35, "GREET_GENERAL_STRANGER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			break;
		case 1:
			func_341(uParam4, iParam3);
			__LIB_0__::func_7(&(iParam0->f_310[iParam1 /*14*/].f_7), 2048);
			__LIB_0__::func_7(&(iParam0->f_310[iParam1 /*14*/].f_7), 8192);
			break;
	}
}

void func_373(var uParam0, bool bParam1)
{
	__LIB_3__::func_157(uParam0[0 /*17*/], __LIB_2__::func_460(8), 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_431(uParam0[0 /*17*/], 1);
	func_432(uParam0[0 /*17*/], bParam1);
	func_433(uParam0[0 /*17*/], 15f);
	__LIB_3__::func_157(uParam0[1 /*17*/], __LIB_2__::func_460(10), 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	func_431(uParam0[1 /*17*/], 1);
	func_432(uParam0[1 /*17*/], 1);
	func_433(uParam0[1 /*17*/], 15f);
	__LIB_3__::func_157(uParam0[2 /*17*/], __LIB_2__::func_460(12), 0, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
	func_431(uParam0[2 /*17*/], 0);
	func_433(uParam0[2 /*17*/], 15f);
}

void func_374(var uParam0, bool bParam1)
{
	__LIB_3__::func_157(uParam0[0 /*17*/], __LIB_2__::func_460(7), 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_431(uParam0[0 /*17*/], 1);
	func_432(uParam0[0 /*17*/], 1);
	func_433(uParam0[0 /*17*/], 15f);
	__LIB_3__::func_157(uParam0[1 /*17*/], __LIB_2__::func_460(10), 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	func_431(uParam0[1 /*17*/], 1);
	func_432(uParam0[1 /*17*/], 1);
	func_433(uParam0[1 /*17*/], 15f);
	__LIB_3__::func_157(uParam0[2 /*17*/], __LIB_2__::func_460(12), 0, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
	func_431(uParam0[2 /*17*/], 0);
	func_433(uParam0[2 /*17*/], 15f);
}

char* func_376()
{
	return "FINAL_WARNING";
}

bool func_377(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (!__LIB_13__::func_666(*uParam1, 64))
	{
		return false;
	}
	if (__LIB_13__::func_666(*uParam1, 8))
	{
		return false;
	}
	if (iParam0->f_1[iParam2 /*22*/].f_6 == 2)
	{
		return false;
	}
	return true;
}

void func_379(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_27(iParam0->f_310[iParam1 /*14*/].f_7, 131072))
	{
		if (__LIB_0__::func_163(iParam0->f_310[iParam1 /*14*/], 242628503) && TASK::GET_SEQUENCE_PROGRESS(iParam0->f_310[iParam1 /*14*/]) == 1)
		{
			TASK::CLEAR_PED_TASKS(iParam0->f_310[iParam1 /*14*/], true, false);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0->f_310[iParam1 /*14*/], Global_35, -1, -1f, -1f, -1f);
		}
	}
	else if (__LIB_0__::func_163(iParam0->f_310[iParam1 /*14*/], 242628503) && TASK::GET_SEQUENCE_PROGRESS(iParam0->f_310[iParam1 /*14*/]) == 0)
	{
		TASK::CLEAR_PED_TASKS(iParam0->f_310[iParam1 /*14*/], true, false);
		TASK::TASK_AIM_GUN_AT_ENTITY(iParam0->f_310[iParam1 /*14*/], Global_35, -1, false, 1);
	}
}

bool func_380(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	vector3 vVar1;
	float fVar4;
	if (__LIB_0__::func_27(iParam0->f_310[iParam2 /*14*/].f_7, 32768) || !PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
	{
		bVar0 = __LIB_2__::func_215(iParam0->f_310[iParam2 /*14*/], Global_35, 0, 19f, 0);
	}
	else
	{
		bVar0 = ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0->f_310[iParam2 /*14*/], Global_35, 17);
	}
	if (!bVar0)
	{
		if (__LIB_0__::func_393(Global_35, iParam0->f_1[iParam1 /*22*/].f_2, 148, 1))
		{
			vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0->f_310[iParam2 /*14*/], ENTITY::GET_ENTITY_COORDS(Global_35, true, false)) };
			fVar4 = 2f;
			if (__LIB_0__::func_27(iParam0->f_310[iParam2 /*14*/].f_7, 32768))
			{
				fVar4 = 6f;
			}
			if (vVar1.x < 0f)
			{
				vVar1.x = (vVar1.x * -1f);
			}
			if (vVar1.y > 0f && vVar1.x < fVar4)
			{
				bVar0 = true;
			}
		}
	}
	return bVar0;
}

void func_381(int iParam0, int iParam1, int iParam2)
{
	if (!__LIB_0__::func_27(iParam0->f_1[iParam2 /*22*/].f_4, 2048))
	{
		__LIB_0__::func_7(&(iParam0->f_310[iParam1 /*14*/].f_7), 16777216);
		__LIB_0__::func_7(&(iParam0->f_1[iParam2 /*22*/].f_4), 2048);
		iParam0->f_1[iParam2 /*22*/].f_20 = iParam1;
	}
}

void func_382(int iParam0, int iParam1)
{
	if (__LIB_0__::func_27(iParam0->f_1[iParam1 /*22*/].f_4, 2048))
	{
		__LIB_0__::func_8(&(iParam0->f_310[iParam0->f_1[iParam1 /*22*/].f_20 /*14*/].f_7), 16777216);
		__LIB_0__::func_8(&(iParam0->f_1[iParam1 /*22*/].f_4), 2048);
		iParam0->f_1[iParam1 /*22*/].f_20 = -1;
	}
}

void func_383(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = func_498(iParam0, iParam1);
	iVar1 = func_498(iParam0, iParam2);
	if (iVar0 >= iVar1)
	{
		return;
	}
	switch (iVar1)
	{
		case 3:
			__LIB_0__::func_7(&(iParam0->f_310[iParam1 /*14*/].f_7), 131072);
		case 2:
			__LIB_0__::func_7(&(iParam0->f_310[iParam1 /*14*/].f_7), 65536);
		case 1:
			__LIB_0__::func_7(&(iParam0->f_310[iParam1 /*14*/].f_7), 32768);
		default:
			break;
	}
}

bool func_385(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 != -1)
	{
		return false;
	}
	if (VEHICLE::IS_VEHICLE_STOPPED(iParam0->f_1[0 /*22*/]))
	{
		return false;
	}
	if (__LIB_0__::func_27(iParam0->f_1[iParam2 /*22*/].f_4, 128))
	{
		return false;
	}
	return true;
}

char* func_386()
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (iVar0)
	{
		case 0:
		case default:
			return "SPOTTED_ENTERING_FAR";
		case 1:
			return "GET_LOST";
		case 2:
			return "DISCOVERED_FAR";
			default:
				break;
	}
}

bool func_387(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, var uParam5)
{
	if (__LIB_0__::func_27(iParam0->f_310[iParam1 /*14*/].f_7, 524288))
	{
		return false;
	}
	if (func_499(iParam0, iParam2))
	{
		return true;
	}
	if (!bParam4)
	{
		if (__LIB_0__::func_27(iParam0->f_310[iParam1 /*14*/].f_7, 67108864))
		{
			return false;
		}
		if (__LIB_0__::func_27(iParam0->f_310[iParam1 /*14*/].f_7, 268435456))
		{
			return true;
		}
	}
	else if (__LIB_0__::func_27(iParam0->f_310[iParam1 /*14*/].f_7, 131072) && func_377(iParam0, uParam5, iParam3))
	{
		return true;
	}
	return false;
}

char* func_388(bool bParam0)
{
	if (bParam0)
	{
		return "KEEP_GOING";
	}
	return "GUARD_PLAYER_LOITERING";
}

char* func_389()
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (iVar0)
	{
		case 0:
		case default:
			return "SPOTTED_ENTERING_NEAR";
		case 1:
			return "WARNING";
		case 2:
			return "WARNED_ALREADY";
			default:
				break;
	}
}

char* func_390()
{
	return "OPENS_FIRE";
}

bool func_391(int iParam0, int iParam1, var uParam2)
{
	if (!__LIB_13__::func_666(*uParam2, 64))
	{
		return true;
	}
	if (iParam0->f_310[iParam1 /*14*/].f_9 > (2.75f + 1f))
	{
		return true;
	}
	if (iParam0->f_310[iParam1 /*14*/].f_12 == 0)
	{
		return false;
	}
	if ((MISC::GET_GAME_TIMER() - iParam0->f_310[iParam1 /*14*/].f_12) < 3000)
	{
		return false;
	}
	return true;
}

char* func_392()
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (iVar0)
	{
		case 0:
		case default:
			return "OPENS_FIRE";
		case 1:
			return "TAUNT_GEN_NEUTRAL";
		case 2:
			return "TAUNT_GEN_MALE";
			default:
				break;
	}
}

int func_393(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1[iVar0 /*22*/]))
		{
			if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_1[iVar0 /*22*/].f_1) && ENTITY::IS_ENTITY_IN_VOLUME(iParam0->f_310[iParam1 /*14*/], iParam0->f_1[iVar0 /*22*/].f_1, true, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_394(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	vector3 vVar1;
	switch (iParam2)
	{
		case 5:
			PED::SET_PED_COMBAT_MOVEMENT(iParam0->f_310[iParam1 /*14*/], 1);
			PED::SET_PED_COMBAT_RANGE(iParam0->f_310[iParam1 /*14*/], 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0->f_310[iParam1 /*14*/], 50, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0->f_310[iParam1 /*14*/], 42, false);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam1 /*14*/], 189, true);
			PED::_0x78815FC52832B690(iParam0->f_310[iParam1 /*14*/], 1);
			PED::_0xFC3DB99C8144CD81(iParam0->f_310[iParam1 /*14*/], iParam0->f_1[iParam0->f_310[iParam1 /*14*/].f_8 /*22*/].f_2, 0, 0, 0);
			break;
		case 0:
			PED::SET_PED_COMBAT_MOVEMENT(iParam0->f_310[iParam1 /*14*/], 2);
			PED::SET_PED_COMBAT_RANGE(iParam0->f_310[iParam1 /*14*/], 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0->f_310[iParam1 /*14*/], 50, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0->f_310[iParam1 /*14*/], 42, true);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam1 /*14*/], 189, false);
			PED::_0x78815FC52832B690(iParam0->f_310[iParam1 /*14*/], 1);
			__LIB_1__::func_733(iParam0->f_310[iParam1 /*14*/]);
			break;
		case 1:
			PED::SET_PED_COMBAT_MOVEMENT(iParam0->f_310[iParam1 /*14*/], 1);
			PED::SET_PED_COMBAT_RANGE(iParam0->f_310[iParam1 /*14*/], 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0->f_310[iParam1 /*14*/], 50, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0->f_310[iParam1 /*14*/], 42, false);
			PED::_0x78815FC52832B690(iParam0->f_310[iParam1 /*14*/], 1);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam1 /*14*/], 189, true);
			__LIB_1__::func_733(iParam0->f_310[iParam1 /*14*/]);
			break;
		case 2:
			PED::SET_PED_COMBAT_MOVEMENT(iParam0->f_310[iParam1 /*14*/], 1);
			PED::SET_PED_COMBAT_RANGE(iParam0->f_310[iParam1 /*14*/], 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0->f_310[iParam1 /*14*/], 50, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0->f_310[iParam1 /*14*/], 42, false);
			PED::_0x8ACC0506743A8A5C(iParam0->f_310[iParam1 /*14*/], joaat("ONAMOVINGTRAIN"), 1, -1082130432 /* Float: -1f */);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam1 /*14*/], 189, true);
			__LIB_1__::func_733(iParam0->f_310[iParam1 /*14*/]);
			break;
		case 3:
			PED::SET_PED_COMBAT_MOVEMENT(iParam0->f_310[iParam1 /*14*/], 2);
			PED::SET_PED_COMBAT_RANGE(iParam0->f_310[iParam1 /*14*/], 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0->f_310[iParam1 /*14*/], 50, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0->f_310[iParam1 /*14*/], 42, false);
			PED::_0x8ACC0506743A8A5C(iParam0->f_310[iParam1 /*14*/], joaat("ONAMOVINGTRAIN"), 1, -1082130432 /* Float: -1f */);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam1 /*14*/], 189, true);
			__LIB_1__::func_733(iParam0->f_310[iParam1 /*14*/]);
			break;
		case 4:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_310[iParam1 /*14*/], true);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0->f_1[1 /*22*/], ENTITY::GET_ENTITY_COORDS(iParam0->f_310[iParam1 /*14*/], true, false)) };
			TASK::TASK_GOTO_ENTITY_OFFSET_XY_AIMING(0, iParam0->f_1[1 /*22*/], 0, -1, 0.65f, vVar1.x, -4f, 1073741824 /* Float: 2f */, 17);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam0->f_1[1 /*22*/], 0, 3f, -1f, -1f);
			TASK::TASK_CLIMB(0, true);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0->f_310[iParam1 /*14*/], iVar0);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam1 /*14*/], 189, true);
			break;
	}
	iParam0->f_310[iParam1 /*14*/].f_5 = iParam2;
}

void func_395(int iParam0, int iParam1, int iParam2)
{
	if (func_501(iParam0, iParam1))
	{
		__LIB_2__::func_426(&(iParam0->f_310[iParam1 /*14*/]));
		iParam0->f_310[iParam1 /*14*/].f_4 = 20;
		iParam0->f_1101++;
	}
}

int func_396()
{
	return joaat("S_M_M_UNITRAINGUARDS_01");
}

int func_397(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case joaat("GROUP_SNIPER"):
		case joaat("GROUP_REVOLVER"):
		case joaat("GROUP_REPEATER"):
		case joaat("GROUP_PISTOL"):
		case joaat("GROUP_SHOTGUN"):
		case joaat("GROUP_RIFLE"):
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			iVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(iVar0) || WEAPON::_IS_WEAPON_MELEE(iVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				StringCopy(&cVar5, WEAPON::_GET_WEAPON_NAME(iVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43891 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (__LIB_0__::func_154(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43891)
						{
							if (__LIB_0__::func_154(iVar4) && iVar4 != iVar0)
							{
								iVar0 = iVar4;
							}
						}
						else if (iVar4 == iVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (__LIB_0__::func_2() == -1 && !__LIB_0__::func_214(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar0, 0, false) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == iVar0 && !Global_43891) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
		{
			bVar22 = true;
		}
		else
		{
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
		}
	}
	if (iVar0 == joaat("WEAPON_UNARMED") && iParam1 == joaat("WEAPON_UNARMED"))
	{
		return iVar0;
	}
	else if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		switch (iParam1)
		{
			case joaat("GROUP_REVOLVER"):
			case joaat("GROUP_PISTOL"):
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
			case joaat("GROUP_SNIPER"):
			case joaat("GROUP_REPEATER"):
			case joaat("GROUP_SHOTGUN"):
			case joaat("GROUP_RIFLE"):
				if (__LIB_0__::func_214(joaat("WEAPON_REPEATER_CARBINE")))
				{
					iVar0 = joaat("WEAPON_REPEATER_CARBINE");
				}
				else
				{
					iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				}
				break;
			default:
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
		}
	}
	else if (iVar0 == joaat("WEAPON_MELEE_LANTERN") && iParam0 == Global_35)
	{
		iVar0 = joaat("WEAPON_MELEE_DAVY_LANTERN");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && __LIB_0__::func_154(iVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, iVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_IS_WEAPON_MELEE(iVar0) && iVar0 != joaat("WEAPON_UNARMED")) && !WEAPON::_IS_WEAPON_LANTERN(iVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, iVar0));
			iVar24 = WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		__LIB_2__::func_144(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_504(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_505(iVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, iVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), iVar0, iParam4);
	}
	return iVar0;
}

void func_398(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 307, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 43, true);
	PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 1);
	PED::SET_PED_COMBAT_ABILITY(*uParam0, 2);
	PED::_0xBD75500141E4725C(*uParam0, joaat("LAW"));
	PED::SET_PED_COMBAT_RANGE(*uParam0, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 58, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 6, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 17, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 5, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 3, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 50, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 42, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 30, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 24, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 71, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 73, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 47, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 31, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 1, false);
	PED::SET_COMBAT_FLOAT(*uParam0, 13, 7.5f);
	PED::SET_PED_ACCURACY(*uParam0, 50);
}

int func_399()
{
	return joaat("S_M_M_UNITRAINENGINEER_01");
}

char* func_400(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case joaat("S_M_M_UNITRAINENGINEER_01"):
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar0)
			{
				case 0:
				case default:
					return "0835_S_M_M_GenConductor_01_WHITE_01";
				case 1:
					return "0836_S_M_M_GenConductor_01_WHITE_02";
				case 2:
					return "0837_S_M_M_GenConductor_01_WHITE_03";
					break;
				case joaat("S_M_M_UNITRAINGUARDS_01"):
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
					switch (iVar0)
					{
						case 0:
						case default:
							return "0946_A_M_M_Guard_White_AGGRESSIVE_01";
						case 1:
							return "0947_A_M_M_Guard_White_AGGRESSIVE_02";
						case 2:
							return "0948_A_M_M_Guard_White_AGGRESSIVE_03";
						case 3:
							return "0949_A_M_M_Guard_White_AGGRESSIVE_04";
						case 4:
							return "0950_A_M_M_Guard_White_AGGRESSIVE_05";
						case 5:
							return "0951_A_M_M_Guard_White_AGGRESSIVE_06";
						case 6:
							return "0952_A_M_M_Guard_White_AGGRESSIVE_07";
						case 7:
							return "0953_A_M_M_Guard_White_AGGRESSIVE_08";
						case 8:
							return "0954_A_M_M_Guard_White_AGGRESSIVE_09";
						case 9:
							return "0955_A_M_M_Guard_White_AGGRESSIVE_10";
							break;
					}
					return "";
				}
void func_401(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || __LIB_2__::func_1(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

bool func_411(int iParam0, int iParam1, float fParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_1[iParam1 /*22*/]))
	{
		return false;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_ENTITY_COORDS(iParam0->f_1[iParam1 /*22*/], true, false), true) <= fParam2)
	{
		return true;
	}
	return false;
}

bool func_414()
{
	float fVar0;
	fVar0 = 250f;
	if (__LIB_1__::func_447(vLocal_696, 1) == 5)
	{
		fVar0 = 475f;
	}
	if (fLocal_695 < fVar0)
	{
		return true;
	}
	return false;
}

void func_431(int* iParam0, bool bParam1)
{
	__LIB_3__::func_158(iParam0, !bParam1);
}

void func_432(int* iParam0, bool bParam1)
{
	__LIB_2__::func_411(iParam0, !bParam1, 0);
}

void func_433(int* iParam0, float fParam1)
{
	if (fParam1 <= 0f)
	{
		__LIB_4__::func_168(iParam0, 0);
	}
	else
	{
		__LIB_3__::func_362(iParam0, fParam1);
	}
}

void func_492(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int* iParam6, var uParam7, int iParam8, int iParam9, int iParam10)
{
	if (func_581(iParam0, iParam9))
	{
		func_341(uParam7, iParam6);
		func_99(uParam2);
		if (!__LIB_13__::func_666(*uParam2, 65536) || !__LIB_0__::func_27(iParam0->f_310[iParam9 /*14*/].f_7, 512))
		{
			func_139(iParam0, iParam8, uParam1, uParam4, iParam5, uParam2, uParam3, iParam10, uParam7, iParam6, 0, 0);
		}
		else
		{
			__LIB_0__::func_37(uParam1[15 /*3*/]);
		}
		__LIB_0__::func_7(&(iParam0->f_310[iParam9 /*14*/].f_7), 512);
		func_263(iParam0, iParam9, *uParam2);
		__LIB_0__::func_7(&(iParam0->f_310[iParam9 /*14*/].f_7), 4194304);
		__LIB_0__::func_7(&(iParam0->f_310[iParam9 /*14*/].f_7), 2);
		iParam0->f_1[iParam8 /*22*/].f_10++;
		func_45(iParam0, iParam8);
		__LIB_2__::func_478(Global_35, iParam0->f_310[iParam9 /*14*/], "ROB_COACH_THREATEN_WARNING_SHOT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
		__LIB_1__::func_148(uParam1[1 /*3*/]);
		__LIB_0__::func_37(uParam1[15 /*3*/]);
		func_246(&(iParam0->f_310[iParam9 /*14*/]), 9);
	}
}

void func_493(var uParam0, bool bParam1, bool bParam2)
{
	__LIB_3__::func_157(uParam0[2 /*17*/], __LIB_2__::func_460(12), 0, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
	func_431(uParam0[2 /*17*/], 1);
	func_432(uParam0[2 /*17*/], (bParam1 || bParam2));
	func_433(uParam0[2 /*17*/], 2.75f);
	__LIB_3__::func_157(uParam0[1 /*17*/], __LIB_2__::func_460(10), 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	func_431(uParam0[1 /*17*/], 1);
	func_432(uParam0[1 /*17*/], 1);
	func_433(uParam0[1 /*17*/], 2.75f);
	__LIB_3__::func_157(uParam0[0 /*17*/], __LIB_2__::func_460(7), 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_431(uParam0[0 /*17*/], 1);
	func_432(uParam0[0 /*17*/], 1);
	func_433(uParam0[0 /*17*/], 2.75f);
}

void func_494(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	__LIB_3__::func_157(uParam0[0 /*17*/], __LIB_2__::func_460(7), 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_431(uParam0[0 /*17*/], 1);
	func_432(uParam0[0 /*17*/], (bParam1 || bParam2));
	func_433(uParam0[0 /*17*/], 2.75f);
	__LIB_3__::func_157(uParam0[1 /*17*/], __LIB_2__::func_460(10), 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	func_431(uParam0[1 /*17*/], 1);
	func_432(uParam0[1 /*17*/], (bParam1 || bParam3));
	func_433(uParam0[1 /*17*/], 2.75f);
	__LIB_3__::func_157(uParam0[2 /*17*/], __LIB_2__::func_460(12), 0, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
	func_431(uParam0[2 /*17*/], 1);
	func_432(uParam0[2 /*17*/], (bParam1 || bParam4));
	func_433(uParam0[2 /*17*/], 2.75f);
}

void func_495(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	if (__LIB_0__::func_27(iParam0->f_310[iParam2 /*14*/].f_7, 512))
	{
		if (iParam0->f_1[iParam3 /*22*/].f_10 == 0)
		{
			__LIB_2__::func_478(Global_35, iParam0->f_310[iParam2 /*14*/], "ROB_GENERAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
		}
		else
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			if (iVar0 == 0)
			{
				__LIB_2__::func_478(Global_35, iParam0->f_310[iParam2 /*14*/], "ROB_ESCALATED_GENERAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
			}
			else
			{
				__LIB_2__::func_478(Global_35, iParam0->f_310[iParam2 /*14*/], "ROB_ESCALATED_THREATEN", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
			}
		}
	}
}

char* func_496(var uParam0)
{
	if (__LIB_0__::func_27(uParam0->f_7, 4194304) || __LIB_0__::func_27(uParam0->f_7, 2))
	{
		return "ROB_ACCEPT_OFFER";
	}
	return "ROB_DEFUSE";
}

int func_497(int iParam0, int iParam1, int* iParam2, var uParam3, var uParam4)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bVar0 = __LIB_0__::func_27(iParam0->f_310[iParam1 /*14*/].f_7, 32768);
	if (*uParam4 != 1 || __LIB_0__::func_27(iParam0->f_310[iParam1 /*14*/].f_7, 2048))
	{
		func_341(uParam3, iParam2);
		if (!bVar0)
		{
			func_582(uParam3);
		}
		else
		{
			__LIB_2__::func_482(uParam3[0 /*17*/], 0, 1);
			func_373(uParam3, (__LIB_0__::func_27(iParam0->f_310[iParam1 /*14*/].f_7, 268435456) || __LIB_0__::func_27(iParam0->f_310[iParam1 /*14*/].f_7, 134217728)));
		}
		__LIB_0__::func_8(&(iParam0->f_310[iParam1 /*14*/].f_7), 2048);
		*uParam4 = 1;
	}
	iVar2 = __LIB_2__::func_340(1, 0, 0) | 16384;
	if (bVar0)
	{
		fVar1 = 0f;
	}
	else
	{
		fVar1 = 2f;
	}
	iVar3 = func_346(&(iParam0->f_310[iParam1 /*14*/]), iParam2, 19f, uParam3, fVar1, 3, 0, 0, iVar2, 0, 0, 2, iParam0->f_310[iParam1 /*14*/].f_9);
	if (iVar3 != -1)
	{
		return iVar3;
	}
	if (__LIB_4__::func_366(iParam2))
	{
		iVar4 = __LIB_2__::func_511(iParam2);
		if (iVar4 != -1)
		{
			if (!bVar0)
			{
				switch (iVar4)
				{
					case 0:
						__LIB_2__::func_482(uParam3[0 /*17*/], 1, 1);
						__LIB_2__::func_478(Global_35, iParam0->f_310[iParam1 /*14*/], "GREET_GENERAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						break;
					case 1:
						__LIB_2__::func_482(uParam3[1 /*17*/], 1, 1);
						__LIB_2__::func_478(Global_35, iParam0->f_310[iParam1 /*14*/], func_347(&(iParam0->f_310[iParam1 /*14*/])), 0, -1082130432 /* Float: -1f */, iParam0->f_310[iParam1 /*14*/].f_11, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						break;
				}
			}
		}
	}
	return iVar3;
}

int func_498(int iParam0, int iParam1)
{
	if (__LIB_0__::func_27(iParam0->f_310[iParam1 /*14*/].f_7, 131072))
	{
		return 3;
	}
	if (__LIB_0__::func_27(iParam0->f_310[iParam1 /*14*/].f_7, 65536))
	{
		return 2;
	}
	if (__LIB_0__::func_27(iParam0->f_310[iParam1 /*14*/].f_7, 32768))
	{
		return 1;
	}
	return 0;
}

bool func_499(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	float fVar2;
	if (iParam1 < 0)
	{
		return true;
	}
	iVar0 = __LIB_3__::func_112(Global_35, iParam0->f_1[iParam1 /*22*/], 1060437492 /* Float: 0.707f */);
	if (!PED::_0xF60165E1D2C5370B(Global_35, &uVar1, &fVar2))
	{
		return false;
	}
	if (fVar2 >= 1.5f)
	{
		return true;
	}
	else if (fVar2 >= 1f)
	{
		if (iVar0 == 1)
		{
			return true;
		}
	}
	return false;
}

bool func_501(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_310[iParam1 /*14*/]))
	{
		return false;
	}
	if (iParam0->f_310[iParam1 /*14*/].f_3 == 0)
	{
		return false;
	}
	return true;
}

void func_504(int iParam0, int iParam1, float fParam2)
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((*iParam1 == joaat("WEAPON_REVOLVER_CATTLEMAN_MEXICAN") || *iParam1 == joaat("WEAPON_REVOLVER_CATTLEMAN_PIG")) || *iParam1 == joaat("WEAPON_REVOLVER_DOUBLEACTION_EXOTIC")) || *iParam1 == joaat("WEAPON_REVOLVER_SCHOFIELD_CALLOWAY")) || *iParam1 == joaat("WEAPON_REVOLVER_SCHOFIELD_GOLDEN")) || *iParam1 == joaat("WEAPON_PISTOL_MAUSER_DRUNK")) || *iParam1 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL_EXOTIC")) || *iParam1 == joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK_EXOTIC"))
	{
		*fParam2 = 0f;
		return;
	}
	switch (iVar1)
	{
		case joaat("G_M_M_UNIDUSTER_03"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_03"):
		case joaat("G_M_M_UNIDUSTER_04"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_02"):
		case joaat("G_M_M_UNIDUSTER_02"):
		case joaat("U_M_M_FATDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_01"):
		case joaat("G_M_M_UNIDUSTER_01"):
		case joaat("CS_DISGUISEDDUSTER_01"):
		case joaat("G_F_M_UNIDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERLEADER_01"):
		case joaat("CS_DISGUISEDDUSTER_03"):
		case joaat("G_M_M_UNIDUSTER_05"):
		case joaat("CS_DISGUISEDDUSTER_02"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("G_M_Y_UNIEXCONFEDS_02"):
		case joaat("G_M_Y_UNIEXCONFEDS_01"):
		case joaat("G_M_O_UNIEXCONFEDS_01"):
		case joaat("CS_EXCONFEDSLEADER_01"):
		case joaat("U_M_M_UNIEXCONFEDSBOUNTY_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		case joaat("G_M_M_UNIINBRED_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		case joaat("U_M_M_BHT_SKINNERSEARCH"):
		case joaat("G_M_M_UNIMOUNTAINMEN_01"):
		case joaat("U_M_M_BHT_SKINNERBROTHER"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		case joaat("G_M_M_UNIRANCHERS_01"):
		case joaat("CS_LARAMIE"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		case joaat("U_M_M_BHT_BANDITOSHACK"):
		case joaat("U_M_M_BHT_BANDITOMINE"):
		case joaat("G_M_M_UNIBANDITOS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("U_M_M_NBXBRONTEGOON_01"):
		case joaat("U_M_M_NBXBRONTESECFORM_01"):
		case joaat("U_M_M_NBXBRONTEASC_01"):
		case joaat("G_M_M_UNIBRONTEGOONS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			Jump @522; //curOff = 482
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
			}
		}
bool func_505(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

bool func_581(int iParam0, int iParam1)
{
	if (__LIB_0__::func_27(iParam0->f_310[iParam1 /*14*/].f_7, 4194304))
	{
		return false;
	}
	if (!__LIB_0__::func_27(iParam0->f_310[iParam1 /*14*/].f_7, 33554432))
	{
		return false;
	}
	if (iParam0->f_310[iParam1 /*14*/].f_3 == 1)
	{
		return false;
	}
	if (iParam0->f_310[iParam1 /*14*/].f_9 > (2.75f + 0.5f))
	{
		return false;
	}
	if (!PED::IS_PED_SHOOTING(Global_35))
	{
		return false;
	}
	if (PLAYER::_0x6614F9039BD31931(PLAYER::GET_PLAYER_INDEX(), 7, 0))
	{
		return false;
	}
	if (PED::_0x336B3D200AB007CB(Global_35, Global_36, 19f, 4) > 0)
	{
		return false;
	}
	return true;
}

void func_582(var uParam0)
{
	__LIB_3__::func_157(uParam0[0 /*17*/], __LIB_2__::func_460(7), 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_431(uParam0[0 /*17*/], 1);
	func_432(uParam0[0 /*17*/], 0);
	func_433(uParam0[0 /*17*/], 15f);
	__LIB_3__::func_157(uParam0[1 /*17*/], __LIB_2__::func_460(10), 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	func_431(uParam0[1 /*17*/], 1);
	func_432(uParam0[1 /*17*/], 0);
	func_433(uParam0[1 /*17*/], 15f);
	__LIB_3__::func_157(uParam0[2 /*17*/], __LIB_2__::func_460(12), 0, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
	func_431(uParam0[2 /*17*/], 0);
	func_433(uParam0[2 /*17*/], 15f);
}

