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
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	vector3 vLocal_59 = { 0f, 0f, 0f };
	struct<1636> Local_62 = { 0, 0, 0, 2, 0, 0, 0, 0, 1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 1, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, -2, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 3, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, -1, 0, 1103626240, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 3, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 3, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 3, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 3, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 3, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 3, 0, 0, 0, 2, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 1, 2, 0, 0, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<55> Local_1698 = { 0, 0, 0, 0, 0, 0, 0, 20, 10, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2000, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	int iLocal_1755 = 0;
	bool bLocal_1756 = false;
	bool bLocal_1757 = false;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = -1;
	var uLocal_1766 = 0;
	char* sLocal_1767 = NULL;
	int iLocal_1768 = 0;
	int iLocal_1769 = 0;
	int iLocal_1770 = 0;
	int iLocal_1771 = 0;
	int iLocal_1772 = 0;
	int iLocal_1773 = 0;
	int iLocal_1774 = 0;
	int iLocal_1775 = 0;
	int iLocal_1776 = 0;
	int iLocal_1777 = 0;
	int iLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	vLocal_59 = { 0f, 0f, 0f };
	bLocal_1756 = true;
	sLocal_1767 = "beat_gang_camp_reminder";
	iLocal_1768 = 23;
	iLocal_1772 = joaat("STR_03_P_MILLWINDOW_A");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
		func_2();
		if (iLocal_39 < 1)
		{
			iLocal_39 = 1;
		}
		iLocal_30 = 3;
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() != 2)
		{
			func_3(&vScriptParam_0);
		}
		else
		{
			func_4(&vScriptParam_0);
		}
	}
	func_5(vScriptParam_0);
	while (true)
	{
		func_6();
		if ((Local_62.f_1620 % 2) == 0)
		{
			func_7();
		}
		else
		{
			func_8();
		}
		if (iLocal_30 != 3)
		{
			if (func_9(vScriptParam_0))
			{
				__LIB_9__::func_742(3);
			}
		}
		func_11(vScriptParam_0);
		func_12();
		switch (iLocal_30)
		{
			case 0:
				func_13();
				break;
			case 1:
				func_14(&vScriptParam_0);
				break;
			case 2:
				func_15(&vScriptParam_0);
				break;
			case 3:
				func_16(&vScriptParam_0);
				break;
		}
		Local_62.f_1620++;
		BUILTIN::WAIT(0);
	}
}

void func_1()
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() != 1)
	{
		return;
	}
	switch (iLocal_29)
	{
		case 1:
			vVar0 = { func_17(1217.249f, -1200.055f, 75.33141f, &uVar3, &uVar4, 0, 0, 0, 0, 0, 0) };
			__LIB_0__::func_321(vVar0, uVar4, uVar3, 0);
			break;
	}
}

void func_2()
{
	switch (iLocal_29)
	{
		case 1:
			break;
		case 0:
			func_19("SR_ST_DENIS_GUN_FAIL", 64);
			break;
		case 3:
			func_19("SR_VALENTINE_DOCTOR_FAIL", 128);
			break;
	}
}

void func_3(var uParam0)
{
	if (!func_20(uParam0))
	{
		return;
	}
	if (!func_21())
	{
		return;
	}
	if (!func_22())
	{
		return;
	}
	if (!func_23())
	{
		return;
	}
	switch (Local_62.f_1631)
	{
		case 0:
			func_24();
			Local_62.f_1631 = 1;
			return;
		case 1:
			func_25();
			Local_62.f_1631 = 2;
			return;
		default:
			break;
	}
	__LIB_3__::func_820(Local_62, 0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_4(var uParam0)
{
	func_20(uParam0);
	func_21();
	func_22();
	func_23();
	func_24();
	func_25();
	__LIB_3__::func_820(Local_62, 0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_5(vector3 vParam0)
{
	iLocal_29 = func_27(vParam0);
	Local_62 = vParam0.z;
	Local_62.f_170.f_8 = vParam0.x;
	Local_62.f_1.f_51 = Local_62;
	if (__LIB_4__::func_265(Local_62))
	{
		func_29(8388608);
		func_29(16777216);
		__LIB_16__::func_215(iLocal_29, 8);
	}
	else
	{
		func_31(8388608);
	}
	if (__LIB_14__::func_267(Local_62, 1, 0))
	{
		func_29(2);
	}
	if (__LIB_14__::func_267(Local_62, 0, 1))
	{
		func_29(256);
	}
	else
	{
		switch (iLocal_29)
		{
			case 1:
				if (func_33(Local_62))
				{
					__LIB_4__::func_261(29, 8);
				}
				else if (__LIB_3__::func_610(Local_62, 256) || __LIB_14__::func_126(Local_62, 8388608))
				{
					__LIB_4__::func_261(29, 8);
				}
				break;
		}
	}
	func_37();
	func_38();
	if (Global_20710.f_2402)
	{
		func_39(4);
	}
	if (__LIB_16__::func_217(vParam0.z) && !__LIB_14__::func_433(vParam0.y, -1))
	{
		func_29(4);
		__LIB_9__::func_742(2);
	}
	if ((__LIB_14__::func_605(iLocal_29, 1) || (__LIB_3__::func_751(7) && iLocal_29 == 3)) || __LIB_3__::func_610(73, 1))
	{
		func_29(1);
	}
}

void func_6()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!func_44(4))
	{
		return;
	}
	iVar0 = Local_62.f_170;
	iVar1 = __LIB_0__::func_120(Local_62.f_170.f_8);
	if (!PERSCHAR::_0x800DF3FC913355F3(iVar1))
	{
		return;
	}
	iVar2 = PERSCHAR::_0x31C70A716CAE1FEE(iVar1);
	iVar3 = iVar2;
	if (iVar0 != iVar3)
	{
		Local_62.f_170 = __LIB_2__::func_963(Local_62.f_170.f_8);
		func_49(Local_62.f_170, 1, func_47(), 1, func_48());
		if (__LIB_0__::func_51(&(Local_62.f_170.f_13), 1))
		{
			__LIB_3__::func_544(&(Local_62.f_170.f_67), 0);
		}
		if (ENTITY::IS_ENTITY_DEAD(Local_62.f_170))
		{
		}
		else
		{
			POPULATION::_0xF74E134F40192884(Local_62.f_170, 2);
		}
	}
}

void func_7()
{
	vector3 vVar0;
	vVar0 = { __LIB_3__::func_613(Local_62) };
	if (!__LIB_0__::func_138(vVar0, vLocal_59))
	{
		Local_62.f_97 = __LIB_0__::func_94(Global_35, vVar0, 1);
	}
	if (!func_55(32))
	{
		if (func_56(Global_35, 1))
		{
			func_57(32);
		}
	}
	else if (!func_56(Global_35, 1))
	{
		func_58(32);
	}
}

void func_8()
{
	vector3 vVar0;
	if (func_59())
	{
		return;
	}
	if (func_60(8388608) || func_60(256))
	{
		__LIB_0__::func_325(&(Local_62.f_1390));
		return;
	}
	if (func_62(1))
	{
		return;
	}
	if (!__LIB_14__::func_640(Local_62.f_1391))
	{
		if (!func_64())
		{
			return;
		}
	}
	switch (iLocal_29)
	{
		case 0:
			if (!func_65())
			{
				return;
			}
			break;
	}
	vVar0 = { func_66() };
	if (__LIB_0__::func_86(vVar0))
	{
		return;
	}
	__LIB_3__::func_652(vVar0, &(Local_62.f_1390), -757657449, 0, 0, 0);
	func_39(1);
}

bool func_9(vector3 vParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	if ((Local_62.f_1620 % 10) != 0)
	{
		return false;
	}
	if (func_69(vParam0))
	{
		return true;
	}
	if (func_70(vParam0))
	{
		return true;
	}
	switch (iLocal_29)
	{
		case 1:
			if (func_71())
			{
				__LIB_11__::func_636(2);
				return true;
			}
			if (!func_65())
			{
				if (func_62(16777216))
				{
					if (!func_62(33554432))
					{
						return true;
					}
				}
				else if (Local_62.f_97 > 30f && func_73())
				{
					ENTITY::SET_ENTITY_ROTATION(Local_62.f_1226[0], 0f, 0f, 165f, 2, true);
					if (Local_62.f_1247[8 /*2*/].f_1 || __LIB_14__::func_606(Local_62.f_170, Local_62.f_1247[8 /*2*/]))
					{
						__LIB_2__::func_426(&(Local_62.f_390[0 /*126*/]));
						PERSCHAR::_0x7B204F88F6C3D287(__LIB_0__::func_120(Local_62.f_170.f_8));
					}
					return true;
				}
			}
			break;
		default:
			iVar0 = func_76(iLocal_29);
			if (iVar0 != 0)
			{
				bVar1 = func_77(iVar0);
				if (__LIB_16__::func_218(iVar0))
				{
					if (bVar1)
					{
						__LIB_11__::func_636(2);
						return true;
					}
					else
					{
						func_79(iVar0);
					}
				}
				else if (bVar1)
				{
					if (__LIB_14__::func_605(iLocal_29, 8))
					{
						__LIB_1__::func_309(-1, 0, 0, 0, 0);
						__LIB_0__::func_747(60, 0, 1);
					}
				}
			}
			break;
	}
	bVar2 = func_82();
	if (func_83(&bVar2))
	{
		if (func_60(64))
		{
			func_84(&vParam0);
			if (__LIB_14__::func_267(vParam0.z, 1, 1))
			{
				__LIB_14__::func_669(vParam0.z);
			}
			__LIB_11__::func_636(2);
		}
		else if (!func_82())
		{
			__LIB_11__::func_636(2);
		}
		if (func_62(33554432))
		{
			if (iLocal_29 == 1)
			{
				__LIB_2__::func_426(&(Local_62.f_390[0 /*126*/]));
			}
		}
		return true;
	}
	if (func_86())
	{
		__LIB_11__::func_636(2);
		return true;
	}
	if (!bVar2 && !func_65())
	{
		if ((!__LIB_14__::func_433(vParam0.y, -1) && !func_60(4)) && !func_44(16))
		{
			return true;
		}
	}
	return false;
}

void func_11(var uParam0, var uParam1, var uParam2)
{
	if (func_60(4) && !func_60(8))
	{
		return;
	}
	func_87();
	func_88(&uParam0);
}

void func_12()
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	if (func_82())
	{
		return;
	}
	if (iLocal_30 < 0)
	{
		return;
	}
	if (func_44(4096))
	{
		return;
	}
	if (!__LIB_14__::func_605(iLocal_29, 8))
	{
		return;
	}
	iVar0 = func_89();
	sVar1 = func_90();
	sVar2 = PERSCHAR::_0xCEB40B678E403759(iVar0);
	if (!MISC::ARE_STRINGS_EQUAL(sVar2, sVar1))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_62.f_170, false, true);
		PERSCHAR::_0x187D65F3AEC5D679(iVar0, sVar1);
	}
	func_91(4096);
}

void func_13()
{
	switch (iLocal_37)
	{
		case 0:
			if (func_92())
			{
				__LIB_9__::func_755(1);
			}
			break;
		case 1:
			func_94();
			__LIB_9__::func_755(2);
			break;
		case 2:
			if (func_95())
			{
				__LIB_9__::func_755(4);
			}
			break;
		case 3:
			func_96();
			__LIB_9__::func_755(4);
			break;
		case 4:
			if (func_97(1))
			{
				Local_62.f_1 = Local_62.f_170;
				if (ENTITY::DOES_ENTITY_EXIST(Local_62.f_1))
				{
					PED::_REQUEST_PED_EMOTIONAL_PRESET(Local_62.f_1, "TaskIntimidated_OnFoot");
					PED::SET_PED_CONFIG_FLAG(Local_62.f_1, 448, true);
				}
				func_98(4);
				__LIB_9__::func_755(5);
			}
			break;
		case 5:
			__LIB_9__::func_742(1);
			break;
	}
}

void func_14(var uParam0)
{
	if (!func_99(16))
	{
		return;
	}
	if (Global_1393521.f_1)
	{
		func_95();
	}
	func_100(uParam0);
	func_101();
	func_102();
	if ((Local_62.f_1620 % 10) == 0)
	{
		func_103(uParam0);
	}
	switch (iLocal_38)
	{
		case 0:
			if (iLocal_40 >= 7)
			{
				func_104();
			}
			func_105(uParam0);
			break;
		case 1:
			func_104();
			func_106(uParam0);
			break;
		case 2:
			func_104();
			func_107(uParam0);
			break;
		case 3:
			func_108();
			break;
	}
}

void func_15(var uParam0)
{
	switch (iLocal_29)
	{
		case 2:
			func_109(uParam0);
			break;
		case 3:
			func_110(uParam0);
			break;
	}
}

void func_16(var uParam0)
{
	switch (iLocal_39)
	{
		case 0:
			if (func_111(uParam0))
			{
				func_112(&(Local_62.f_1));
				__LIB_11__::func_636(1);
			}
			break;
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(Local_62.f_1))
			{
				PED::SET_PED_CONFIG_FLAG(Local_62.f_1, 448, false);
			}
			switch (iLocal_29)
			{
				case 1:
					if (ENTITY::IS_ENTITY_DEAD(Local_62.f_390[0 /*126*/]) || __LIB_14__::func_607(Local_62.f_1216[0], "COWER_LOOP", "SCENE_RHDGUN_HELP"))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_62.f_390[0 /*126*/]))
						{
							PED::DELETE_PED(&(Local_62.f_390[0 /*126*/]));
						}
					}
					__LIB_11__::func_636(2);
					break;
				default:
					__LIB_11__::func_636(2);
					break;
			}
			break;
		case 2:
			func_3(uParam0);
			break;
	}
}

Vector3 func_17(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	vVar0 = { func_114(vParam0, uParam3, uParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { func_114(vParam0, uParam3, uParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

void func_19(char* sParam0, int iParam1)
{
	if (func_115(iParam1))
	{
		return;
	}
	AUDIO::TRIGGER_MUSIC_EVENT(sParam0);
	func_116(iParam1);
}

bool func_20(var uParam0)
{
	if (Local_62.f_1635)
	{
		return true;
	}
	func_117(&(Local_62.f_1));
	switch (iLocal_29)
	{
		case 1:
			if (func_62(16777216))
			{
				__LIB_4__::func_261(Local_62, 256);
				__LIB_11__::func_395(Local_62, 8388608);
			}
			else if (!Global_1935630.f_12)
			{
				if (__LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 64) || func_120(4))
				{
					__LIB_18__::func_843(29);
				}
			}
			else
			{
				func_122(0);
				func_123();
			}
			if (func_73())
			{
				func_122(1);
			}
			break;
	}
	func_124(uParam0);
	Local_62.f_1635 = 1;
	return true;
}

bool func_21()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (Local_62.f_1629 == 4)
	{
		return true;
	}
	switch (Local_62.f_1629)
	{
		case 0:
			func_125();
			Local_62.f_1629 = 1;
			switch (iLocal_29)
			{
				case 1:
					__LIB_0__::func_172(Local_62.f_1247[11 /*2*/]);
					break;
			}
			if (VOLUME::_DOES_VOLUME_EXIST(Local_62.f_1290))
			{
				POPULATION::_0x74C2B3DC0B294102(Local_62.f_1290);
				POPULATION::_0xA1CFB35069D23C23(Local_62.f_1290);
			}
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < iLocal_55)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_62.f_390[iVar0 /*126*/]))
				{
				}
				else
				{
					__LIB_0__::func_325(&(Local_62.f_390[iVar0 /*126*/].f_1));
					if (iLocal_29 == 3)
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_62.f_390[iVar0 /*126*/], joaat("REL_PLAYER_DISLIKE"));
					}
					PED::SET_PED_KEEP_TASK(Local_62.f_390[iVar0 /*126*/], true);
					__LIB_3__::func_475(Local_62.f_390[iVar0 /*126*/], 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_62.f_390[iVar0 /*126*/]));
				}
				iVar0++;
			}
			Local_62.f_1629 = 2;
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_62.f_1479[iVar0]))
				{
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_62.f_1479[iVar0]));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < iLocal_54)
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_62.f_1021[iVar0 /*63*/]))
				{
				}
				else
				{
					PED::SET_PED_KEEP_TASK(Local_62.f_1021[iVar0 /*63*/], true);
					__LIB_3__::func_475(Local_62.f_1021[iVar0 /*63*/], 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_62.f_1021[iVar0 /*63*/]));
				}
				iVar0++;
			}
			Local_62.f_1629 = 3;
			break;
		case 3:
			iVar1 = 0;
			while (iVar1 < Local_62.f_1189)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_62.f_1189[iVar1 /*8*/].f_5))
				{
					__LIB_0__::func_325(&(Local_62.f_1189[iVar1 /*8*/].f_6));
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_62.f_1189[iVar1 /*8*/].f_5));
				}
				iVar1++;
			}
			iVar2 = 0;
			while (iVar2 < Local_62.f_1198)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_62.f_1198[iVar2 /*8*/]))
				{
					__LIB_0__::func_325(&(Local_62.f_1198[iVar2 /*8*/].f_1));
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_62.f_1198[iVar2 /*8*/]));
				}
				iVar2++;
			}
			iVar3 = 0;
			while (iVar3 < Local_62.f_1241)
			{
				if (Local_62.f_1241[iVar3] == 0)
				{
				}
				else if (ENTITY::_0x1FF441D7954F8709(Local_62.f_1241[iVar3]))
				{
					ENTITY::_0xD2B9C78537ED5759(Local_62.f_1241[iVar3]);
				}
				iVar3++;
			}
			Local_62.f_1629 = 4;
			return true;
	}
	return false;
}

bool func_22()
{
	func_128(&(Local_62.f_1388), "spiHeadLook0_0");
	func_128(&(Local_62.f_1387), "spiInvestigate0_0");
	Local_62.f_1633 = 1;
	return true;
}

bool func_23()
{
	int iVar0;
	if (Local_62.f_1634)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < Local_62.f_1355)
	{
		__LIB_3__::func_525(&(Local_62.f_1355[iVar0 /*2*/]), &(Local_62.f_1355[iVar0 /*2*/].f_1));
		iVar0++;
	}
	switch (iLocal_29)
	{
		case 3:
			func_130();
			break;
	}
	Local_62.f_1634 = 1;
	return false;
}

void func_24()
{
	__LIB_6__::func_675();
	func_132(0);
	func_133();
	func_134();
	func_135();
}

void func_25()
{
	int iVar0;
	func_136();
	func_137(1, 1);
	func_138(1);
	func_139(1);
	func_140(1, 0);
	func_141(0, 0, 0);
	func_142();
	func_143(1024, 0);
	func_144();
	if (__LIB_2__::func_1(Global_35, 0, 1))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_62.f_1512[iVar0]))
		{
			TASK::_DELETE_SCENARIO_POINT(Local_62.f_1512[iVar0]);
		}
		iVar0++;
	}
	func_146(1);
	__LIB_16__::func_216(iLocal_29, 8);
	__LIB_1__::func_979(2048);
	__LIB_11__::func_405(Local_62, 1);
	func_150();
	func_151(&(Local_62.f_95));
	func_151(&(Local_62.f_96));
	Global_1914319.f_17371 = 0;
	if (__LIB_1__::func_917(Local_62))
	{
		if (__LIB_1__::func_935(Local_62, 1024))
		{
			__LIB_2__::func_754(Local_62, 0);
		}
	}
}

int func_27(vector3 vParam0)
{
	switch (vParam0.z)
	{
		case 43:
			return 0;
		case 29:
			return 1;
		case 61:
			return 2;
		case 73:
			return 3;
		default:
			break;
	}
	return -1;
}

void func_29(int iParam0)
{
	if (func_60(iParam0))
	{
		return;
	}
	Local_62.f_1621 = (Local_62.f_1621 || iParam0);
}

void func_31(int iParam0)
{
	if (!func_60(iParam0))
	{
		return;
	}
	Local_62.f_1621 = (Local_62.f_1621 - (Local_62.f_1621 && iParam0));
}

bool func_33(int iParam0)
{
	if (!__LIB_0__::func_181())
	{
		return false;
	}
	if (!__LIB_3__::func_610(iParam0, 64) && !__LIB_14__::func_126(iParam0, 2097152))
	{
		return false;
	}
	return true;
}

void func_37()
{
	switch (iLocal_29)
	{
		case 0:
			Local_62.f_1391 = 2;
			break;
		case 1:
			Local_62.f_1391 = 1;
			break;
		case 2:
			Local_62.f_1391 = 4;
			break;
		case 3:
			Local_62.f_1391 = 8;
			break;
	}
}

void func_38()
{
	switch (iLocal_29)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_98(1);
			break;
	}
}

void func_39(int iParam0)
{
	if (func_62(iParam0))
	{
		return;
	}
	Local_62.f_1624 = (Local_62.f_1624 || iParam0);
}

bool func_44(int iParam0)
{
	return (Local_62.f_170.f_11 && iParam0) != 0;
}

char* func_47()
{
	switch (iLocal_29)
	{
		case 0:
			return "NBX_Gunsmith";
		case 1:
			return "RHD_Gunsmith";
		case 2:
			return "STR_General_Store";
		case 3:
			return "VAL_Doctor";
		default:
			break;
	}
	return "NULL";
}

char* func_48()
{
	switch (iLocal_29)
	{
		case 0:
			return "0319_U_M_M_NbxGunsmith_01";
		case 1:
			return "0401_U_M_M_RhdGunsmith_01";
		case 2:
			return "0678_U_M_M_StrGenStoreOwner_01";
		case 3:
			return "0477_U_M_M_ValDoctor_01";
		default:
			break;
	}
	return "NULL";
}

void func_49(int iParam0, bool bParam1, char* sParam2, bool bParam3, char* sParam4)
{
	if (bParam1)
	{
		__LIB_0__::func_928(&(Local_62.f_1518), iParam0, sParam2, 0);
	}
	if (bParam3)
	{
		func_173(iParam0, sParam4);
	}
}

bool func_55(int iParam0)
{
	return (Local_62.f_1625 && iParam0) != 0;
}

bool func_56(int iParam0, bool bParam1)
{
	if (__LIB_14__::func_606(iParam0, Local_62.f_1284))
	{
		if (!Local_62.f_1284.f_1)
		{
			Local_62.f_1284.f_1 = 1;
		}
		return true;
	}
	if (bParam1)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Local_62.f_1288))
		{
			if (__LIB_14__::func_606(iParam0, Local_62.f_1288))
			{
				if (!Local_62.f_1288.f_1)
				{
					Local_62.f_1288.f_1 = 1;
				}
				return true;
			}
		}
	}
	return false;
}

void func_57(int iParam0)
{
	if (func_55(iParam0))
	{
		return;
	}
	Local_62.f_1625 = (Local_62.f_1625 || iParam0);
}

void func_58(int iParam0)
{
	if (!func_55(iParam0))
	{
		return;
	}
	Local_62.f_1625 = (Local_62.f_1625 - (Local_62.f_1625 && iParam0));
}

bool func_59()
{
	if (iLocal_29 == 1)
	{
		if (__LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 128))
		{
			return true;
		}
	}
	return false;
}

bool func_60(int iParam0)
{
	return (Local_62.f_1621 && iParam0) != 0;
}

bool func_62(int iParam0)
{
	return (Local_62.f_1624 && iParam0) != 0;
}

bool func_64()
{
	bool bVar0;
	switch (iLocal_29)
	{
		case 1:
			bVar0 = __LIB_3__::func_610(29, -2147483648);
			break;
		case 0:
			bVar0 = __LIB_3__::func_610(43, -2147483648);
			break;
		case 2:
			bVar0 = __LIB_3__::func_610(61, -2147483648);
			break;
		case 3:
			bVar0 = __LIB_3__::func_610(73, -2147483648);
			break;
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

bool func_65()
{
	return func_55(32);
}

Vector3 func_66()
{
	switch (iLocal_29)
	{
		case 1:
			return 1317.158f, -1320.1f, 75.9239f;
		case 0:
			return 2710.407f, -1290.718f, 48.63041f;
		case 2:
			return -1787.94f, -384.9225f, 157.8571f;
		case 3:
			return -286.6232f, 818.6595f, 118.2486f;
		default:
			break;
	}
	return vLocal_59;
}

bool func_69(struct<2> Param0, var uParam2)
{
	int iVar0;
	if (!__LIB_0__::func_296(-26, 1, 1))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_298(0);
	if (((iVar0 != Global_1914319.f_3[Param0.f_1 /*446*/].f_20 && iVar0 != -1) && iVar0 != -1) && iVar0 != 0)
	{
		func_29(1073741824 /* Float: 2f */);
		__LIB_11__::func_636(2);
		return true;
	}
	return false;
}

bool func_70(struct<2> Param0, var uParam2)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1914319.f_3[Param0.f_1 /*446*/].f_23))
	{
		return false;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1914319.f_3[Param0.f_1 /*446*/].f_23);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (!PED::_IS_PED_HOGTIED(iVar0) && !PED::_IS_PED_LASSOED(iVar0))
	{
		return false;
	}
	if (func_82())
	{
		return false;
	}
	__LIB_14__::func_608(65536);
	__LIB_1__::func_936(Global_1914319.f_3[Param0.f_1 /*446*/].f_10, 1024);
	return true;
}

bool func_71()
{
	if (((__LIB_1__::func_187(30) && !__LIB_1__::func_187(31)) && SCRIPTS::_DOES_THREAD_EXIST(Global_1347702[31 /*49*/].f_42)) && SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[31 /*49*/].f_42, false))
	{
		return true;
	}
	return false;
}

bool func_73()
{
	if (func_60(128))
	{
		return true;
	}
	return false;
}

int func_76(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		case 0:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_77(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_179(iParam0))
	{
		if (__LIB_1__::func_988(__LIB_0__::func_749(iParam0, iVar0)))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_79(int iParam0)
{
	__LIB_1__::func_993(&(Global_1310750.f_16109), iParam0);
}

bool func_82()
{
	if (iLocal_38 < 1)
	{
		return false;
	}
	return true;
}

bool func_83(bool bParam0)
{
	if (Local_62.f_97 == 0f)
	{
		return false;
	}
	if (Local_62.f_97 > func_190(bParam0))
	{
		return true;
	}
	return false;
}

void func_84(var uParam0)
{
	switch (uParam0->f_2)
	{
		case 73:
			if (__LIB_14__::func_267(uParam0->f_2, 0, 1))
			{
				__LIB_18__::func_204(0, 2);
			}
			break;
	}
}

bool func_86()
{
	bool bVar0;
	if (!func_44(4))
	{
		return false;
	}
	if (func_60(4))
	{
		return false;
	}
	if (iLocal_29 == 1 && func_60(8388608))
	{
		return false;
	}
	if (func_99(1))
	{
		if (iLocal_31 > 12 && (iLocal_30 == 1 && !func_82()))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_62.f_170))
			{
				bVar0 = false;
			}
		}
	}
	else if (iLocal_30 == 1 && !func_82())
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_62.f_170))
		{
			bVar0 = false;
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

void func_87()
{
	bool bVar0;
	switch (iLocal_31)
	{
		case 0:
			if (func_99(4))
			{
				__LIB_9__::func_740(1);
			}
			break;
		case 1:
			if (!func_194())
			{
				return;
			}
			__LIB_9__::func_740(2);
			break;
		case 2:
			if (func_195())
			{
				__LIB_9__::func_740(3);
			}
			break;
		case 3:
			if (func_197(func_196(0)))
			{
				__LIB_9__::func_740(4);
			}
			break;
		case 4:
			if (func_198())
			{
				__LIB_9__::func_740(5);
			}
			break;
		case 5:
			if (func_199())
			{
				func_98(8);
				__LIB_9__::func_740(6);
			}
			break;
		case 6:
			if (func_200())
			{
				__LIB_9__::func_740(7);
			}
			break;
		case 7:
			if (__LIB_0__::func_94(Global_35, __LIB_3__::func_613(Local_62), 1) < 50f)
			{
				__LIB_9__::func_740(8);
			}
			break;
		case 8:
			if (func_201())
			{
				__LIB_9__::func_740(9);
			}
			break;
		case 9:
			if (func_202())
			{
				__LIB_9__::func_740(10);
			}
			break;
		case 10:
			if (func_197(func_196(1)))
			{
				__LIB_9__::func_740(11);
			}
			break;
		case 11:
			if (func_203())
			{
				__LIB_9__::func_740(12);
			}
			break;
		case 12:
			if (func_204())
			{
				func_98(16);
				__LIB_9__::func_740(13);
			}
			break;
		case 13:
			if (__LIB_0__::func_94(Global_35, __LIB_3__::func_613(Local_62), 1) < 30f)
			{
				__LIB_9__::func_740(14);
			}
			break;
		case 14:
			if (func_205())
			{
				__LIB_9__::func_740(15);
			}
			break;
		case 15:
			if (func_206())
			{
				__LIB_9__::func_740(16);
			}
			break;
		case 16:
			if (func_197(func_196(2)))
			{
				__LIB_9__::func_740(17);
			}
			break;
		case 17:
			if (func_207())
			{
				__LIB_9__::func_740(18);
			}
			break;
		case 18:
			if (func_208())
			{
				func_98(32);
				__LIB_9__::func_740(19);
			}
			break;
		case 19:
			if (!func_60(1024) && __LIB_0__::func_94(Global_35, __LIB_3__::func_613(Local_62), 1) < 20f)
			{
				bVar0 = true;
			}
			else if (__LIB_14__::func_606(Global_35, Local_62.f_1284))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				__LIB_9__::func_740(20);
			}
			break;
		case 20:
			if (func_209())
			{
				__LIB_9__::func_740(21);
			}
			break;
		case 21:
			if (func_210())
			{
				__LIB_9__::func_740(22);
			}
			break;
		case 22:
			if (func_197(func_196(3)))
			{
				__LIB_9__::func_740(23);
			}
			break;
		case 23:
			if (func_211())
			{
				__LIB_9__::func_740(24);
			}
			break;
		case 24:
			if (func_212())
			{
				func_98(64);
				__LIB_9__::func_740(25);
			}
			break;
		case 25:
			if (func_99(128))
			{
				__LIB_9__::func_740(26);
			}
			break;
		case 26:
			if (func_213())
			{
				__LIB_9__::func_740(27);
			}
			break;
		case 27:
			if (func_214())
			{
				__LIB_9__::func_740(28);
			}
			break;
		case 28:
			if (func_197(func_196(4)))
			{
				__LIB_9__::func_740(29);
			}
			break;
		case 29:
			if (func_215())
			{
				__LIB_9__::func_740(30);
			}
			break;
		case 30:
			if (func_216())
			{
				func_98(256);
				__LIB_9__::func_740(31);
			}
			break;
		case 31:
			if (func_99(512))
			{
				__LIB_9__::func_740(32);
			}
			break;
		case 32:
			if (func_217())
			{
				__LIB_9__::func_740(33);
			}
			break;
		case 33:
			if (func_218())
			{
				__LIB_9__::func_740(34);
			}
			break;
		case 34:
			if (func_197(func_196(5)))
			{
				__LIB_9__::func_740(35);
			}
			break;
		case 35:
			if (func_219())
			{
				__LIB_9__::func_740(36);
			}
			break;
		case 36:
			if (func_220())
			{
				__LIB_9__::func_740(37);
			}
			break;
		case 37:
			break;
	}
}

void func_88(var uParam0)
{
	if (!func_99(8))
	{
		return;
	}
	if (__LIB_14__::func_606(Global_35, Local_62.f_1247[3 /*2*/]))
	{
		if (!func_55(128))
		{
			func_57(128);
		}
	}
	else if (func_55(128))
	{
		func_58(128);
	}
	switch (iLocal_29)
	{
		case 3:
			if (func_60(1))
			{
				return;
			}
			if (!func_221(128))
			{
				if ((Local_62.f_1620 % 10) == 0)
				{
					if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 0, 1))
					{
						if (!__LIB_14__::func_606(Global_35, Local_62.f_1247[2 /*2*/]))
						{
							func_223(&(Local_62.f_1021[0 /*63*/]), 0);
						}
						func_224(128);
					}
				}
			}
			if (!__LIB_14__::func_606(Global_35, Local_62.f_1247[2 /*2*/]))
			{
				return;
			}
			func_225();
			func_226(&(Local_62.f_1021[0 /*63*/]), uParam0);
			break;
		case 1:
			func_225();
			func_227(&(Local_62.f_1021[0 /*63*/]), &(Local_62.f_390[0 /*126*/]));
			break;
	}
}

int func_89()
{
	switch (iLocal_29)
	{
		case 0:
			return joaat("SDN_GUNSMITH");
		case 1:
			return joaat("RHD_GUNSMITH");
		case 2:
			return joaat("STR_GENERAL_STORE");
		case 3:
			return joaat("VAL_DOCTOR");
		default:
			break;
	}
	return 0;
}

char* func_90()
{
	char* sVar0;
	sVar0 = "ERROR: NO schedule found.";
	switch (iLocal_29)
	{
		case 0:
			sVar0 = "SaintDenis/SDN_Gunsmith";
			break;
		case 1:
			sVar0 = "Rhodes/rhd_gunsmith";
			break;
		case 2:
			sVar0 = "Strawberry/Str_General_Store";
			break;
		case 3:
			sVar0 = "Valentine/Val_Doctor";
			break;
	}
	return sVar0;
}

void func_91(int iParam0)
{
	if (func_44(iParam0))
	{
		return;
	}
	Local_62.f_170.f_11 = (Local_62.f_170.f_11 || iParam0);
}

bool func_92()
{
	if (!func_228())
	{
		return false;
	}
	return true;
}

void func_94()
{
	__LIB_4__::func_228(&(Local_62.f_124));
	__LIB_1__::func_398(&(Local_62.f_124), 1);
	__LIB_2__::func_507(&(Local_62.f_124), 1000);
	func_232(&Local_62);
	if (func_60(256))
	{
		iLocal_54 = 0;
		iLocal_55 = 0;
	}
}

bool func_95()
{
	if (func_233())
	{
		Global_1393521.f_1 = 0;
		return true;
	}
	switch (iLocal_29)
	{
		case 0:
			Local_62.f_95 = INTERIOR::GET_INTERIOR_AT_COORDS(2716.914f, -1283.87f, 50.30908f);
			Local_62.f_96 = INTERIOR::GET_INTERIOR_AT_COORDS(2715.813f, -1290.3f, 61.49492f);
			break;
		case 1:
			Local_62.f_95 = INTERIOR::GET_INTERIOR_AT_COORDS(1325.901f, -1323.493f, 78.78179f);
			break;
		case 2:
			Local_62.f_95 = INTERIOR::GET_INTERIOR_AT_COORDS(-1790.006f, -388.0617f, 160.8222f);
			break;
		case 3:
			Local_62.f_95 = INTERIOR::GET_INTERIOR_AT_COORDS(-286.4784f, 806.8078f, 119.8955f);
			break;
	}
	return false;
}

void func_96()
{
	int iVar0;
	if (func_99(67108864))
	{
		return;
	}
	iVar0 = func_234();
	if (iVar0 == 0)
	{
		return;
	}
	PED::_0xF008E0BA1FE1D644(iVar0);
	if (func_99(33554432))
	{
		func_98(67108864);
	}
}

bool func_97(bool bParam0)
{
	int iVar0;
	if (func_44(4))
	{
		return true;
	}
	if (!__LIB_0__::func_29(Local_62.f_170.f_8))
	{
		return false;
	}
	Local_62.f_170 = __LIB_2__::func_963(Local_62.f_170.f_8);
	iVar0 = __LIB_0__::func_120(Local_62.f_170.f_8);
	if (!__LIB_2__::func_1(Local_62.f_170, 0, 1))
	{
		PERSCHAR::_0x49A8C2CD97815215(iVar0);
		return false;
	}
	if (bParam0)
	{
		PERSCHAR::_0x6759BEE6762E140B(iVar0);
		POPULATION::_0xF74E134F40192884(Local_62.f_170, 2);
		func_91(4);
	}
	__LIB_14__::func_658(Local_62.f_170, 1);
	__LIB_1__::func_393(&(Local_62.f_170.f_14), 1);
	return true;
}

void func_98(int iParam0)
{
	if (func_99(iParam0))
	{
		return;
	}
	Local_62.f_1626 = (Local_62.f_1626 || iParam0);
}

bool func_99(int iParam0)
{
	return (Local_62.f_1626 && iParam0) != 0;
}

void func_100(var uParam0)
{
	int iVar0;
	func_237();
	if (!func_65())
	{
		if (func_60(536870912))
		{
			iVar0 = __LIB_1__::func_921(Local_62);
			func_239(iVar0);
		}
	}
	switch (iLocal_29)
	{
		case 0:
			func_240(&(Local_62.f_170));
			break;
		case 1:
			func_241(uParam0, &(Local_62.f_170), &(Local_62.f_390[0 /*126*/]));
			break;
		case 2:
			func_242(uParam0);
			break;
		case 3:
			func_243();
			break;
	}
}

void func_101()
{
	if (!func_55(32))
	{
		return;
	}
	if (func_60(262144))
	{
		return;
	}
	if (PED::_IS_PED_USING_SCENARIO_HASH(Global_35, func_244()) || PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_PLAYER_CASH_REGISTER_CLERK_OPENED")))
	{
		__LIB_2__::func_478(Local_62.f_170, Global_35, "HOLDUP_GIVE_CASH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		func_246();
		func_29(262144);
	}
}

void func_102()
{
	if (func_44(32768))
	{
		return;
	}
	if (!func_44(16384))
	{
		if (!func_82())
		{
			return;
		}
		switch (iLocal_29)
		{
			case 0:
				if (func_247())
				{
					return;
				}
				if (__LIB_14__::func_606(Global_35, Local_62.f_1288))
				{
					return;
				}
				break;
			case 1:
				if (func_247())
				{
					if ((iLocal_46 > 0 || __LIB_14__::func_606(Global_35, Local_62.f_1288)) || __LIB_14__::func_606(Global_35, Local_62.f_1284))
					{
						return;
					}
				}
				break;
			case 2:
				if (func_247())
				{
					return;
				}
				break;
			case 3:
				if (func_221(262144) || func_247())
				{
					return;
				}
				break;
		}
		func_91(16384);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_62.f_170) && (func_248(&(Local_62.f_1), __LIB_0__::func_94(Local_62.f_170, Global_36, 1)) || !func_65()))
	{
		func_249();
	}
}

void func_103(var uParam0)
{
	if (func_60(64))
	{
		return;
	}
	if (!func_82())
	{
		return;
	}
	if (!func_250(Global_35))
	{
		return;
	}
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		if (!func_247())
		{
			func_29(64);
		}
		return;
	}
	if (func_247())
	{
		if (Local_62.f_97 < 22f)
		{
			return;
		}
	}
	func_251(uParam0->f_1);
	func_29(64);
}

void func_104()
{
	if (func_65() || __LIB_14__::func_606(Global_35, Local_62.f_1290))
	{
		func_141(1, 1, 1);
		func_252(1);
		if (iLocal_29 == 1)
		{
			func_253();
		}
	}
	else
	{
		func_141(0, 0, 0);
		func_254();
		func_252(0);
	}
}

void func_105(var uParam0)
{
	var uVar0;
	int iVar17;
	bool bVar18;
	func_255(uParam0);
	switch (iLocal_40)
	{
		case 0:
			__LIB_11__::func_627(1);
			break;
		case 1:
			if (func_99(16))
			{
				func_257();
				__LIB_11__::func_627(2);
			}
			break;
		case 2:
			if (func_99(32))
			{
				if (func_258())
				{
					__LIB_11__::func_627(3);
				}
			}
			break;
		case 3:
			if (func_99(64) || func_60(1024))
			{
				__LIB_11__::func_627(4);
			}
			break;
		case 4:
			if (func_65())
			{
				if (func_259(&(Local_62.f_1), 0))
				{
					if (!func_60(512))
					{
					}
				}
				func_260();
				func_139(0);
				func_261(&(Local_62.f_1));
				func_252(1);
				__LIB_14__::func_304(0);
				__LIB_11__::func_627(7);
			}
			if (!func_60(8388608) || func_60(33554432))
			{
				if (func_263())
				{
					func_264(21);
					func_29(4194304);
					__LIB_11__::func_627(5);
				}
			}
			break;
		case 5:
			if (iLocal_29 == 3)
			{
				if (func_65() && !__LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 0, 1))
				{
					if (func_259(&(Local_62.f_1), 0))
					{
						if (!func_60(512))
						{
						}
					}
					func_260();
					func_139(0);
					func_261(&(Local_62.f_1));
					func_252(1);
					__LIB_14__::func_304(0);
					__LIB_11__::func_627(7);
					return;
				}
			}
			if (func_265(uParam0))
			{
				func_266();
				__LIB_11__::func_627(6);
			}
			break;
		case 6:
			func_31(33554432);
			__LIB_11__::func_627(4);
			break;
		case 7:
			func_267(&(Local_62.f_1));
			func_268();
			func_269();
			PED::SET_PED_RESET_FLAG(Local_62.f_170, 49, true);
			if (!func_65())
			{
				func_252(0);
				func_112(&(Local_62.f_1));
				__LIB_1__::func_480(&(Local_62.f_1));
				__LIB_17__::func_921(&(Local_62.f_1.f_7[0 /*18*/]), &(Local_62.f_1.f_26));
				__LIB_11__::func_627(4);
				return;
			}
			if (ENTITY::IS_ENTITY_DEAD(Local_62.f_170))
			{
				func_272();
			}
			func_273(&(Local_62.f_1));
			LAW::_0x21213B833EF4DAE7(PLAYER::GET_PLAYER_INDEX(), Local_62.f_170, &uVar0);
			func_274(&(Local_62.f_1));
			if (func_275())
			{
				if (func_276(&(Local_62.f_1392[4 /*3*/]), 3f, 1, "TIMER_VALDOC_REVENGE_GRAB_GUN"))
				{
					func_277(Local_62.f_1216[8], "bGrabShotgun", 1, "SCENE_VALDOC_DOC_REVENGE");
					__LIB_9__::func_793(Local_62.f_1216[8], "PBL_GRAB_SHOTGUN", "SCENE_VALDOC_DOC_REVENGE", 1);
				}
				else if (__LIB_14__::func_609(Local_62.f_1216[8], "bGrabShotgun", "SCENE_VALDOC_DOC_REVENGE"))
				{
					if (!MAP::DOES_BLIP_EXIST(Local_62.f_170.f_1) && func_280(Local_62.f_1216[8], "SCENE_VALDOC_DOC_REVENGE", 0.95f))
					{
						__LIB_8__::func_336(&(Local_62.f_1518), "SRVD_C_HATEPLY", Local_62.f_170, Global_35, 0, 0, 1, 1);
						func_282(Local_62.f_170, Local_62.f_170.f_1, Global_35, Local_62.f_1226[13], joaat("WEAPON_REPEATER_CARBINE"));
					}
				}
			}
			else
			{
				func_283();
			}
			if (func_60(8388608))
			{
				func_141(1, 1, 1);
			}
			if (func_284())
			{
				PED::SET_PED_CONFIG_FLAG(Local_62.f_1, 235, true);
				PED::SET_PED_CONFIG_FLAG(Local_62.f_1, 234, true);
				func_285();
				__LIB_14__::func_304(1);
				if (__LIB_2__::func_1(Local_62.f_170, 0, 1))
				{
					__LIB_18__::func_852(Local_62.f_170, 1, 0, 0, 1, 0);
					func_287(1);
					__LIB_11__::func_627(10);
				}
				else
				{
					__LIB_11__::func_627(8);
				}
				func_288(Local_62.f_170, Local_62.f_170.f_8);
			}
			else if (func_289(&(Local_62.f_1), 0))
			{
				PED::SET_PED_CONFIG_FLAG(Local_62.f_1, 235, true);
				PED::SET_PED_CONFIG_FLAG(Local_62.f_1, 234, true);
				__LIB_14__::func_304(1);
				__LIB_18__::func_852(Local_62.f_170, 1, 0, 0, 1, 0);
				func_287(1);
				__LIB_11__::func_627(10);
			}
			else if (func_290())
			{
				__LIB_14__::func_304(1);
				__LIB_0__::func_82(0, 1, 0);
				if (!__LIB_3__::func_339(Local_62.f_1.f_51))
				{
					func_293(&(Local_62.f_1), 0, 0, 0, 0);
					__LIB_14__::func_610(3);
					return;
				}
				PED::SET_PED_CONFIG_FLAG(Local_62.f_1, 235, true);
				PED::SET_PED_CONFIG_FLAG(Local_62.f_1, 234, true);
				if (func_60(8388608))
				{
					if (iLocal_29 == 0 || iLocal_29 == 1)
					{
						bVar18 = true;
					}
				}
				func_293(&(Local_62.f_1), 0, 0, 0, bVar18);
				__LIB_1__::func_936(Local_62.f_1.f_51, 1024);
				if ((func_60(8388608) && !func_60(256)) && func_295())
				{
					func_296(uParam0->f_1, uParam0->f_2);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_62.f_170, true);
				func_297(Local_62.f_170, Global_35, &(Local_62.f_170.f_42), -1, vLocal_59, 1, 0);
				func_298(1);
				func_299(0);
				func_287(0);
				func_300(&(Local_62.f_170), 32);
				if (!func_275())
				{
					func_301(100);
				}
				__LIB_3__::func_732(0);
				func_303();
				func_304();
				func_305();
				func_306();
				__LIB_0__::func_37(&(Local_62.f_170.f_214));
				__LIB_11__::func_627(10);
				__LIB_14__::func_610(1);
			}
			else if (func_308(Local_62.f_170, 0, &(Local_62.f_170.f_14), &iVar17, 1, 0))
			{
				if (iVar17 == 8)
				{
					return;
				}
				PED::SET_PED_CONFIG_FLAG(Local_62.f_1, 235, true);
				PED::SET_PED_CONFIG_FLAG(Local_62.f_1, 234, true);
				__LIB_2__::func_754(Local_62, 1);
				__LIB_14__::func_304(1);
				func_309(&(Local_62.f_1), __LIB_1__::func_921(Local_62), Local_62.f_170.f_1, Local_62.f_1284);
				func_91(268435456);
				func_285();
				__LIB_11__::func_627(8);
			}
			break;
		case 8:
			if (!func_310())
			{
				return;
			}
			func_57(131072);
			__LIB_11__::func_627(9);
			break;
		case 9:
			func_269();
			break;
		case 10:
			break;
	}
}

void func_106(var uParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	if (ENTITY::IS_ENTITY_DEAD(Local_62.f_170))
	{
		func_254();
	}
	func_311(&Local_62);
	func_312();
	if (func_313(&(Local_62.f_1), 256) && !func_60(8388608))
	{
		if (func_310())
		{
			func_57(131072);
		}
	}
	func_314(&(Local_62.f_1));
	func_315(&(Local_62.f_1));
	func_269();
	if (func_316())
	{
		func_141(1, 1, 1);
		__LIB_1__::func_148(&(Local_62.f_1468));
		__LIB_3__::func_820(Local_62, 1);
		func_98(128);
		func_318();
		__LIB_14__::func_611(&(Local_62.f_170), 171, 1);
		__LIB_14__::func_612(10);
		__LIB_14__::func_610(2);
		if (iLocal_29 == 3)
		{
			__LIB_7__::func_55(625, 1);
		}
		return;
	}
	if (!func_313(&(Local_62.f_1), 8388608))
	{
		if (func_313(&(Local_62.f_1), 4194304))
		{
			if (func_322(&(Local_62.f_1)))
			{
				PED::_0xAAB050DA48B57978(Local_62.f_1, "TaskIntimidated_OnFoot", Global_35, -1, 4);
				func_323(&(Local_62.f_1), 8388608);
			}
		}
	}
	if (!func_60(8388608))
	{
		if (!func_44(131072))
		{
			if (func_308(Local_62.f_170, 0, &(Local_62.f_170.f_14), &iVar0, 1, 0))
			{
				if (iVar0 != 8 && iVar0 != 16384)
				{
					bVar1 = true;
				}
			}
			if (func_324(&(Local_62.f_1)))
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_325();
				func_91(131072);
				__LIB_14__::func_612(7);
			}
		}
	}
	if (!func_326())
	{
		if (func_327())
		{
			func_328();
		}
	}
	if (__LIB_2__::func_1(Global_35, 0, 1))
	{
		if (!PED::GET_PED_CONFIG_FLAG(Global_35, 141, true))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 141, true);
		}
	}
	if (func_65())
	{
		func_273(&(Local_62.f_1));
		func_268();
	}
	switch (iLocal_41)
	{
		case 0:
			if (func_275())
			{
				func_329(Global_35);
				__LIB_14__::func_612(1);
			}
			else if (func_313(&(Local_62.f_1), 256))
			{
				__LIB_1__::func_390("HLP_SR_INTRO", 1);
				func_331();
				func_332();
				__LIB_14__::func_612(1);
			}
			else
			{
				func_333();
				func_334();
				if (func_335(8))
				{
					if (func_276(&(Local_62.f_170.f_214), 5f, 0, "shoprob.clerkData.timerGeneric"))
					{
						func_309(&(Local_62.f_1), __LIB_1__::func_921(Local_62), Local_62.f_170.f_1, Local_62.f_1284);
						func_91(268435456);
						__LIB_14__::func_612(10);
					}
				}
			}
			if (!func_60(8388608))
			{
				__LIB_1__::func_402(&(Local_62.f_170.f_14), 0);
			}
			func_337(&(Local_62.f_170.f_42), Global_35, 5000, vLocal_59, 0);
			break;
		case 1:
			__LIB_14__::func_612(2);
			__LIB_14__::func_304(1);
			break;
		case 2:
			func_338();
			if (!func_339(&(Local_62.f_170)))
			{
				return;
			}
			__LIB_14__::func_612(3);
			break;
		case 3:
			func_338();
			if (!func_340(&(Local_62.f_170)))
			{
				return;
			}
			TASK::CLEAR_PED_TASKS(Local_62.f_170, true, false);
			__LIB_14__::func_612(4);
			break;
		case 4:
			func_338();
			if (!func_341(&(Local_62.f_1)))
			{
				return;
			}
			__LIB_14__::func_304(0);
			__LIB_14__::func_612(5);
			break;
		case 5:
			if (!func_342(&(Local_62.f_1)))
			{
				return;
			}
			if (!func_343(&(Local_62.f_1), 0))
			{
				return;
			}
			__LIB_0__::func_37(&(Local_62.f_170.f_214));
			func_246();
			func_344();
			func_345();
			func_346(&(Local_62.f_1));
			__LIB_14__::func_612(6);
			break;
		case 6:
			func_347();
			func_348();
			if (!func_44(128))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_62.f_1.f_82[0]) > 0.95f)
				{
					bVar2 = true;
				}
				else if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_62.f_170, -1))
				{
					bVar2 = true;
				}
				else if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_62.f_1.f_82[0]) > func_349())
				{
					func_350();
				}
				if (bVar2)
				{
					func_350();
					__LIB_14__::func_679(&(Local_62.f_170), &uVar3, 1114636288 /* Float: 60f */, -1);
					func_91(128);
				}
			}
			else
			{
				func_334();
			}
			if (!func_352(&(Local_62.f_1), Local_62.f_170.f_14, iVar0))
			{
				return;
			}
			if (((iVar0 != 4 && iVar0 != 2048) && iVar0 != 2) && !func_324(&(Local_62.f_1)))
			{
				return;
			}
			func_91(131072);
			__LIB_14__::func_612(7);
			break;
		case 7:
			if (ANIMSCENE::_0x1F0E401031E20146(Local_62.f_1.f_82[0], "pblMain"))
			{
				if (func_343(&(Local_62.f_1), 0))
				{
					func_246();
					func_344();
					func_345();
					func_346(&(Local_62.f_1));
				}
				else
				{
					__LIB_14__::func_304(1);
				}
			}
			func_285();
			func_91(131072);
			__LIB_14__::func_612(10);
			break;
		case 9:
			if (!__LIB_2__::func_227(-2.5f, 1, 0, 0))
			{
				return;
			}
			func_350();
			__LIB_14__::func_612(10);
			break;
		case 10:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_62.f_1.f_82[0]))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_62.f_1.f_82[0], false))
				{
					if (ANIMSCENE::_0x1F0E401031E20146(Local_62.f_1.f_82[0], "pblMain"))
					{
						if (func_343(&(Local_62.f_1), 0))
						{
							func_246();
							func_344();
							func_345();
							func_346(&(Local_62.f_1));
						}
					}
				}
			}
			if (func_44(131072))
			{
				if (!func_44(268435456))
				{
					if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
					{
						func_309(&(Local_62.f_1), __LIB_1__::func_921(Local_62), Local_62.f_170.f_1, Local_62.f_1284);
						func_91(268435456);
					}
				}
			}
			break;
	}
}

void func_107(var uParam0)
{
	bool bVar0;
	func_312();
	func_314(&(Local_62.f_1));
	func_315(&(Local_62.f_1));
	if (iLocal_29 == 1 || iLocal_29 == 2)
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_62.f_170))
		{
			func_254();
		}
	}
	func_354();
	if (func_65())
	{
		func_273(&(Local_62.f_1));
	}
	if (!func_313(&(Local_62.f_1), 8388608))
	{
		if (func_313(&(Local_62.f_1), 4194304))
		{
			if (func_322(&(Local_62.f_1)))
			{
				PED::_0xAAB050DA48B57978(Local_62.f_1, "TaskIntimidated_OnFoot", Global_35, -1, 4);
				func_323(&(Local_62.f_1), 8388608);
			}
		}
	}
	func_355();
	switch (iLocal_42)
	{
		case 0:
			func_356();
			func_272();
			__LIB_11__::func_395(Local_62, 1);
			__LIB_14__::func_641();
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(Global_35, 0);
			func_358(1);
			if (!ENTITY::_0x88AD6CC10D8D35B2(Local_62.f_170))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_62.f_170, true, false);
			}
			func_359();
			func_360();
			func_361();
			__LIB_1__::func_393(&(Local_62.f_170.f_14), 0);
			__LIB_11__::func_634(1);
			break;
		case 1:
			if (!func_363())
			{
				return;
			}
			__LIB_0__::func_325(&(Local_62.f_170.f_1));
			func_364();
			__LIB_11__::func_634(2);
			break;
		case 2:
			func_365(uParam0);
			if (func_366())
			{
				bVar0 = true;
			}
			if (func_367())
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_266();
				__LIB_11__::func_634(3);
			}
			break;
		case 3:
			func_366();
			if (!func_326())
			{
				if (func_56(Local_62.f_170, 0) && func_327())
				{
					func_328();
				}
			}
			func_365(uParam0);
			if (!func_65())
			{
				if (iLocal_29 == 0)
				{
					if (__LIB_14__::func_606(Global_35, Local_62.f_1288) || __LIB_14__::func_606(Global_35, Local_62.f_1290))
					{
						return;
					}
				}
				func_368(1);
				func_298(1);
				__LIB_11__::func_634(4);
			}
			break;
		case 4:
			func_366();
			func_139(1);
			func_365(uParam0);
			__LIB_11__::func_634(5);
			break;
		case 5:
			func_365(uParam0);
			break;
	}
}

void func_108()
{
	switch (iLocal_43)
	{
		case 0:
			if (func_65())
			{
				if (__LIB_2__::func_227(-3f, 1, 0, 0))
				{
					if (__LIB_14__::func_652(&(Local_62.f_1), __LIB_1__::func_921(Local_62)))
					{
						__LIB_18__::func_853(&(Local_62.f_1));
						__LIB_11__::func_635(3);
					}
					else
					{
						__LIB_18__::func_854(&(Local_62.f_1));
						if (__LIB_2__::func_1(Local_62.f_170, 0, 1))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_62.f_170, Global_35, 0, -1f, -1f, -1f);
						}
						__LIB_11__::func_635(1);
					}
				}
			}
			break;
		case 1:
			if (func_65())
			{
				if (__LIB_2__::func_227(-1f, 1, 0, 0))
				{
					__LIB_14__::func_683(&(Local_62.f_1));
					__LIB_11__::func_635(2);
				}
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-1f, 1, 0, 0) || func_374(Local_62.f_170, 1))
			{
				__LIB_18__::func_855(&(Local_62.f_1));
				func_376(&(Local_62.f_1), &(Local_62.f_170.f_1), Local_62.f_1284, joaat("GROUP_SHOTGUN"));
				__LIB_11__::func_635(5);
			}
			break;
		case 3:
			if (__LIB_2__::func_227(-4.5f, 1, 0, 0))
			{
				if (func_377(&(Local_62.f_1)))
				{
					func_29(512);
					__LIB_11__::func_635(4);
				}
			}
			break;
		case 4:
			if (func_276(&(Local_62.f_1462), 3f, 1, "timerReopenHoldupBuffer"))
			{
				__LIB_11__::func_627(4);
				__LIB_14__::func_610(0);
				__LIB_11__::func_635(5);
			}
			break;
		case 5:
			break;
	}
}

void func_109(var uParam0)
{
	switch (iLocal_52)
	{
		case 0:
			func_378();
			__LIB_9__::func_790(joaat("P_REGISTER03X"));
			__LIB_11__::func_632(2);
			break;
		case 2:
			if ((((!__LIB_9__::func_791(joaat("P_REGISTER03X")) || !func_95()) || !func_200()) || !func_382()) || !__LIB_14__::func_613(&(Local_62.f_1226[0]), joaat("P_REGISTER03X"), &(Local_62.f_1241[0]), -1789.69f, -386.63f, 160.38f, 4, 0))
			{
				return;
			}
			__LIB_11__::func_632(4);
			break;
		case 4:
			__LIB_14__::func_614(18);
			func_385();
			func_386();
			__LIB_11__::func_632(7);
			break;
		case 7:
			func_387(uParam0);
			break;
		case 9:
			break;
	}
}

void func_110(var uParam0)
{
	if (__LIB_14__::func_433(uParam0->f_1, -1))
	{
		__LIB_9__::func_742(0);
		func_29(8);
	}
	switch (iLocal_52)
	{
		case 0:
			HUD::_TEXT_DATABASE_REQUEST("SHRB");
			__LIB_11__::func_632(5);
			break;
		case 1:
			if (func_388())
			{
				func_389();
				__LIB_11__::func_632(2);
			}
			break;
		case 2:
			if (PED::_0x5C16855277819BBF() < 1)
			{
				return;
			}
			if (!func_390())
			{
				return;
			}
			__LIB_11__::func_632(3);
			break;
		case 3:
			if (func_62(128))
			{
				func_391();
			}
			else
			{
				__LIB_11__::func_632(4);
			}
			break;
		case 4:
			func_224(4);
			__LIB_11__::func_632(6);
			break;
		case 5:
			func_224(4);
			__LIB_11__::func_632(7);
			break;
		case 6:
			if (!__LIB_14__::func_613(&(Local_62.f_1226[10]), joaat("P_CHAIR02X"), &(Local_62.f_1241[0]), Local_62.f_390[0 /*126*/].f_2, 4, 0))
			{
				return;
			}
			func_392(&(Local_62.f_1226[10]), 1);
			func_393();
			ANIMSCENE::START_ANIM_SCENE(Local_62.f_1216[1]);
			__LIB_11__::func_632(7);
			break;
		case 7:
			if (iLocal_1755 < 2)
			{
				func_394();
			}
			else if (iLocal_1755 < 6)
			{
				func_395(uParam0);
			}
			else
			{
				func_31(33554432);
				__LIB_11__::func_632(9);
			}
			break;
		case 9:
			break;
	}
}

bool func_111(var uParam0)
{
	switch (iLocal_29)
	{
		case 1:
			if (!func_396())
			{
				return false;
			}
			break;
		case 3:
			if (!func_82())
			{
				if (__LIB_14__::func_606(Global_35, Local_62.f_1247[16 /*2*/]))
				{
					func_395(uParam0);
					return false;
				}
			}
			break;
	}
	return true;
}

void func_112(var uParam0)
{
	if (!func_313(uParam0, 131072))
	{
		return;
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 141, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 308, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 308, false);
	}
	func_397(uParam0, 131072);
}

Vector3 func_114(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
		bVar10 = __LIB_1__::func_699();
		if (VOLUME::_DOES_VOLUME_EXIST(bVar10))
		{
		}
	}
	if (!__LIB_1__::func_120(Global_1310720.f_21))
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
				if (func_408(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
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

bool func_115(int iParam0)
{
	return (Local_62.f_1628 && iParam0) != 0;
}

void func_116(int iParam0)
{
	if (func_115(iParam0))
	{
		return;
	}
	Local_62.f_1628 = (Local_62.f_1628 || iParam0);
}

void func_117(var uParam0)
{
	int iVar0;
	if ((!func_313(uParam0, 4096) && !func_313(uParam0, 16)) && !func_313(uParam0, 8192))
	{
		return;
	}
	iVar0 = __LIB_14__::func_668(uParam0->f_51);
	if (iVar0 != __LIB_11__::func_454())
	{
		MISC::_0xCC3EDC5614B03F61(iVar0);
	}
}

bool func_120(int iParam0)
{
	return (Local_62.f_1623 && iParam0) != 0;
}

void func_122(bool bParam0)
{
	if (bParam0)
	{
		func_412();
		func_239(6);
	}
	else
	{
		func_251(6);
	}
	func_29(64);
}

void func_123()
{
	func_31(128);
}

void func_124(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = Global_1914319.f_3[uParam0->f_1 /*446*/].f_20;
	if (__LIB_1__::func_44(iVar0))
	{
		func_251(uParam0->f_1);
	}
	iVar1 = __LIB_0__::func_298(0);
	if (iVar1 == iVar0)
	{
		__LIB_1__::func_470(iVar0);
	}
	if (func_82())
	{
		Global_1914319.f_17371 = 0;
	}
}

void func_125()
{
	int iVar0;
	if (Local_62.f_1632)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_62.f_170))
		{
			AUDIO::STOP_PED_SPEAKING(Local_62.f_170, false);
			Local_62.f_1632 = 0;
		}
	}
	iVar0 = __LIB_0__::func_120(Local_62.f_170.f_8);
	if (func_44(4))
	{
		if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
		{
			PERSCHAR::_0xB65E7F733956CF25(iVar0);
		}
	}
	func_358(0);
	if (func_62(65536))
	{
		__LIB_14__::func_611(&(Local_62.f_170), 171, 0);
	}
	func_288(Local_62.f_170, Local_62.f_170.f_8);
	__LIB_0__::func_325(&(Local_62.f_170.f_1));
	func_415(Local_62, 0);
}

void func_128(var uParam0, char* sParam1)
{
	if (TASK::_DOES_SCENARIO_POINT_EXIST(*uParam0))
	{
		TASK::_DELETE_SCENARIO_POINT(*uParam0);
	}
}

void func_130()
{
	if (!func_221(256))
	{
		return;
	}
	if (func_221(512))
	{
		return;
	}
	__LIB_1__::func_222(func_416(), 0);
	func_224(512);
	func_418(512);
}

void func_132(bool bParam0)
{
	switch (iLocal_29)
	{
		case 0:
			func_419("NBX_GUN_PICKUPS", bParam0);
			break;
		case 1:
			func_419("RHO_GUN_PICKUPS", bParam0);
			break;
		case 2:
			func_419("STR_GEN_PICKUPS", bParam0);
			break;
		case 3:
			func_419("VAL_DOC_PICKUPS", bParam0);
			break;
	}
}

void func_133()
{
	HUD::_TEXT_DATABASE_DELETE("SHRB");
	switch (iLocal_29)
	{
		case 0:
			HUD::_TEXT_DATABASE_DELETE("SRNGAUD");
			break;
		case 1:
			HUD::_TEXT_DATABASE_DELETE("SRRGAUD");
			break;
		case 2:
			HUD::_TEXT_DATABASE_DELETE("SRSGAUD");
			break;
		case 3:
			HUD::_TEXT_DATABASE_DELETE("SRVDAUD");
			break;
	}
}

void func_134()
{
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	switch (iLocal_29)
	{
		case 1:
			if ((func_115(32) && !func_115(512)) && !func_115(256))
			{
				func_2();
			}
			func_420();
			break;
	}
}

void func_135()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_62.f_1482)
	{
		__LIB_0__::func_325(&(Local_62.f_1482[iVar0]));
		iVar0++;
	}
}

void func_136()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_62.f_1616)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Local_62.f_1616[iVar0]);
		iVar0++;
	}
}

void func_137(bool bParam0, bool bParam1)
{
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1) && bParam1)
	{
		return;
	}
	if (bParam0)
	{
		if (func_62(256))
		{
			LAW::_0xC805EB785824F712(1);
			LAW::_0x710448D44A64C213(1);
			__LIB_0__::func_267(1);
			func_422(256);
		}
	}
	else if (!func_62(256))
	{
		LAW::_0xC805EB785824F712(0);
		LAW::_0x710448D44A64C213(0);
		__LIB_0__::func_267(0);
		func_39(256);
	}
}

void func_138(bool bParam0)
{
	if (bParam0)
	{
		if (func_62(512))
		{
			PED::_0x949B2F9ED2917F5D(Global_35, 1);
			func_422(512);
		}
	}
	else if (!func_62(512))
	{
		PED::_0xB8DE69D9473B7593(Global_35, 1);
		func_39(512);
	}
}

void func_139(bool bParam0)
{
	if (bParam0)
	{
		AUDIO::_0x87E6302FC61208CC("BLOCKED_CONTEXTS_SHOP_ROBBERY");
	}
	else
	{
		AUDIO::_0x6378A235374B852F("BLOCKED_CONTEXTS_SHOP_ROBBERY", 0);
	}
}

void func_140(bool bParam0, int iParam1)
{
	if (!func_55(67108864))
	{
		return;
	}
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), iParam1);
	func_58(67108864);
	if (bParam0)
	{
		func_57(134217728);
	}
}

void func_141(int iParam0, int iParam1, int iParam2)
{
	PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 3, 2, iParam0);
	PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 4, 2, iParam1);
	PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 7, 2, iParam2);
}

void func_142()
{
	if (!func_62(16))
	{
		return;
	}
	__LIB_2__::func_298();
}

void func_143(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = iVar0;
		if (!__LIB_8__::func_747(&(Global_1396257[iVar1 /*638*/].f_626), iParam0))
		{
			if (bParam1)
			{
				__LIB_11__::func_399(&(Global_1396257[iVar1 /*638*/].f_626), iParam0, bParam1);
			}
		}
		else if (!bParam1)
		{
			__LIB_11__::func_399(&(Global_1396257[iVar1 /*638*/].f_626), iParam0, bParam1);
		}
		iVar0++;
	}
}

void func_144()
{
	int iVar0;
	switch (iLocal_29)
	{
		case 1:
			__LIB_3__::func_525(&(Local_62.f_1368), &(Local_62.f_1369));
			__LIB_3__::func_525(&(Local_62.f_1373[0]), &(Local_62.f_1370[0]));
			if (iLocal_38 > 0)
			{
				func_254();
			}
			break;
		case 3:
			func_368(1);
			__LIB_3__::func_525(&(Local_62.f_1373[0]), &(Local_62.f_1370[0]));
			__LIB_3__::func_525(&(Local_62.f_1373[1]), &(Local_62.f_1370[1]));
			if (!ENTITY::IS_ENTITY_DEAD(Local_62.f_1198[0 /*8*/]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_62.f_1198[0 /*8*/], false);
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_62.f_1226[11]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_62.f_1226[11], false);
			}
			__LIB_1__::func_948(-706941207, 0, 0f, 0, 1, 0, 0, 0);
			__LIB_0__::func_403();
			EVENT::REMOVE_SHOCKING_EVENT(Local_62.f_1616[1]);
			break;
		case 0:
		case 2:
			__LIB_3__::func_525(&(Local_62.f_1368), &(Local_62.f_1369));
			__LIB_3__::func_525(&(Local_62.f_1373[0]), &(Local_62.f_1370[0]));
			if (iLocal_38 > 0)
			{
				func_254();
				if (ENTITY::DOES_ENTITY_EXIST(Local_62.f_170))
				{
					PED::_0xAE6004120C18DF97(Local_62.f_170, 0, 1);
					if (ENTITY::IS_ENTITY_OCCLUDED(Local_62.f_170))
					{
						iVar0 = PERSCHAR::_0x32A1E3B83D501096(Local_62.f_170);
						PERSCHAR::_0x7B204F88F6C3D287(iVar0);
						PERSCHAR::_0x4F81EAD1DE8FA19B(iVar0);
					}
				}
			}
			if (iLocal_29 == 0)
			{
				__LIB_1__::func_408(544152906, 0, 0);
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_62.f_170))
				{
					PED::_0x949B2F9ED2917F5D(Local_62.f_170, 23);
					PED::_0x949B2F9ED2917F5D(Local_62.f_170, 24);
				}
				if (PED::GET_PED_CONFIG_FLAG(Global_35, 26, false))
				{
					PED::SET_PED_CONFIG_FLAG(Global_35, 26, false);
				}
			}
			break;
	}
	switch (iLocal_29)
	{
		case 0:
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_SMOKE", true);
			TASK::SET_SCENARIO_TYPE_ENABLED("PROP_HUMAN_SEAT_BENCH_PORCH", true);
			func_429(joaat("DOOR_NEW_GUNSHOP_INT_BACK"), 0, "DOOR_NEW_GUNSHOP_INT_BACK");
			break;
		case 2:
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_STR_GEN_BSMT_PEEK", false);
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1840199757, false);
			break;
		case 3:
			func_429(joaat("DOOR_VAL_DOC_BACK"), 0, "DOOR_VAL_DOC_BACK");
			func_429(joaat("DOOR_VAL_DOC_BACK_RM"), 0, "DOOR_VAL_DOC_BACK_RM");
			break;
	}
}

void func_146(bool bParam0)
{
	switch (iLocal_29)
	{
		case 1:
		case 3:
			if (!TASK::IS_SCENARIO_TYPE_ENABLED(func_431()) != bParam0)
			{
				TASK::SET_SCENARIO_TYPE_ENABLED(func_431(), bParam0);
				if (!TASK::IS_SCENARIO_TYPE_ENABLED(func_431()))
				{
				}
			}
			break;
	}
}

void func_150()
{
	if (func_55(33554432))
	{
		func_432(1, 0, 1);
	}
	if (func_60(268435456))
	{
		func_433(1);
	}
}

void func_151(var uParam0)
{
	if (INTERIOR::IS_VALID_INTERIOR(*uParam0))
	{
		INTERIOR::UNPIN_INTERIOR(*uParam0);
	}
}

void func_173(int iParam0, char* sParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
}

int func_179(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (true)
	{
		if (__LIB_0__::func_749(iParam0, iVar0) != -1)
		{
			iVar0++;
		}
		else
		{
			return iVar0;
		}
	}
	return iVar0;
}

float func_190(bool bParam0)
{
	if (!*bParam0)
	{
		return 80f;
	}
	return 80f;
}

bool func_194()
{
	switch (iLocal_29)
	{
		case 0:
			if (func_456())
			{
				return true;
			}
			break;
		case 1:
			if (func_457())
			{
				return true;
			}
			break;
		case 2:
			if (func_458())
			{
				return true;
			}
			break;
		case 3:
			if (func_459())
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_195()
{
	switch (iLocal_29)
	{
		case 0:
			if (func_460())
			{
				return true;
			}
			break;
		case 1:
			if (func_461())
			{
				return true;
			}
			break;
		case 2:
			if (func_462())
			{
				return true;
			}
			break;
		case 3:
			if (func_463())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

int func_196(int iParam0)
{
	switch (iLocal_29)
	{
		case 3:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 2;
				case 2:
				case 3:
					return 1;
				case 4:
					return 2;
				case 5:
					return 4;
				default:
					break;
			}
			break;
		case 1:
			return iLocal_55;
	}
	return 0;
}

bool func_197(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	if (PED::_0x5C16855277819BBF() >= iParam0)
	{
		return true;
	}
	return false;
}

bool func_198()
{
	switch (iLocal_29)
	{
		case 0:
			if (!func_464())
			{
				return false;
			}
			break;
		case 1:
			if (!func_465())
			{
				return false;
			}
			break;
		case 2:
			if (!func_466())
			{
				return false;
			}
			break;
		case 3:
			if (!func_467())
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_199()
{
	switch (iLocal_29)
	{
		case 0:
			if (func_468())
			{
				return true;
			}
			break;
		case 1:
			if (__LIB_0__::func_0())
			{
				return true;
			}
			break;
		case 2:
			if (__LIB_0__::func_0())
			{
				return true;
			}
			break;
		case 3:
			if (func_471())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_200()
{
	if (!func_472(&(Local_62.f_95)))
	{
		return false;
	}
	if (func_99(2))
	{
		if (!func_472(&(Local_62.f_96)))
		{
			return false;
		}
	}
	return true;
}

bool func_201()
{
	switch (iLocal_29)
	{
		case 0:
			if (func_473())
			{
				return true;
			}
			break;
		case 1:
			if (func_474())
			{
				return true;
			}
			break;
		case 2:
			if (func_475())
			{
				return true;
			}
			break;
		case 3:
			if (func_476())
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_202()
{
	switch (iLocal_29)
	{
		case 0:
			if (func_477())
			{
				return true;
			}
			break;
		case 1:
			if (func_478())
			{
				return true;
			}
			break;
		case 2:
			if (func_479())
			{
				return true;
			}
			break;
		case 3:
			if (func_480())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_203()
{
	switch (iLocal_29)
	{
		case 0:
			if (!func_481())
			{
				return false;
			}
			break;
		case 1:
			if (!func_482())
			{
				return false;
			}
			break;
		case 2:
			if (!func_483())
			{
				return false;
			}
			break;
		case 3:
			if (!func_484())
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_204()
{
	switch (iLocal_29)
	{
		case 0:
			if (__LIB_0__::func_0())
			{
				return true;
			}
			break;
		case 1:
			if (func_486())
			{
				return true;
			}
			break;
		case 2:
			if (func_487())
			{
				return true;
			}
			break;
		case 3:
			if (func_488())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_205()
{
	switch (iLocal_29)
	{
		case 3:
			if (func_388())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_206()
{
	switch (iLocal_29)
	{
		case 3:
			if (func_390())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_207()
{
	switch (iLocal_29)
	{
		case 3:
			if (func_489())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_208()
{
	switch (iLocal_29)
	{
		case 3:
			if (func_490())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_209()
{
	switch (iLocal_29)
	{
		case 0:
			if (func_491())
			{
				return true;
			}
			break;
		case 1:
			if (func_492())
			{
				return true;
			}
			break;
		case 3:
			if (func_493())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_210()
{
	switch (iLocal_29)
	{
		case 0:
			if (func_494())
			{
				return true;
			}
			break;
		case 1:
			if (func_495())
			{
				return true;
			}
			break;
		case 3:
			if (func_496())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_211()
{
	switch (iLocal_29)
	{
		case 0:
			if (func_497())
			{
				return true;
			}
			break;
		case 1:
			if (func_498())
			{
				return true;
			}
			break;
		case 3:
			if (func_499())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_212()
{
	switch (iLocal_29)
	{
		case 0:
			if (func_500())
			{
				return true;
			}
			break;
		case 3:
			if (func_501())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_213()
{
	switch (iLocal_29)
	{
		case 1:
			if (func_502())
			{
				return true;
			}
			break;
		case 3:
			if (func_503())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_214()
{
	switch (iLocal_29)
	{
		case 1:
			if (func_504())
			{
				return true;
			}
			break;
		case 3:
			if (func_505())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_215()
{
	switch (iLocal_29)
	{
		case 1:
			if (func_506())
			{
				return true;
			}
			break;
		case 3:
			if (func_507())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_216()
{
	switch (iLocal_29)
	{
		case 1:
			if (func_508())
			{
				return true;
			}
			break;
		case 3:
			if (__LIB_0__::func_0())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_217()
{
	switch (iLocal_29)
	{
		case 0:
			if (func_510())
			{
				return true;
			}
			break;
		case 3:
			if (func_511())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_218()
{
	switch (iLocal_29)
	{
		case 0:
			if (func_512())
			{
				return true;
			}
			break;
		case 3:
			if (func_513())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_219()
{
	switch (iLocal_29)
	{
		case 0:
			if (!func_514())
			{
				return false;
			}
			break;
		default:
			return true;
	}
	return true;
}

bool func_220()
{
	switch (iLocal_29)
	{
		case 0:
			if (!func_515())
			{
				return false;
			}
			break;
	}
	func_98(1024);
	return true;
}

bool func_221(int iParam0)
{
	return (Local_62.f_1622 && iParam0) != 0;
}

void func_223(int* iParam0, bool bParam1)
{
	if (func_120(2))
	{
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
	if (bParam1)
	{
		PED::SET_PED_KEEP_TASK(*iParam0, true);
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
	func_517(2);
}

void func_224(int iParam0)
{
	if (func_221(iParam0))
	{
		return;
	}
	Local_62.f_1622 = (Local_62.f_1622 || iParam0);
}

void func_225()
{
	int iVar0;
	int iVar1;
	if (func_65())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_54)
	{
		if (!func_308(Local_62.f_1021[iVar0 /*63*/], 0, &(Local_62.f_1021[iVar0 /*63*/].f_10), &iVar1, 0, 0))
		{
			return;
		}
		if (iVar1 == 2048)
		{
			func_518(&(Local_62.f_1021[iVar0 /*63*/].f_9), 1024);
		}
		else if (iVar1 == 4 || iVar1 == 256)
		{
			func_518(&(Local_62.f_1021[iVar0 /*63*/].f_9), 2048);
		}
		else if (((iVar1 == 2 || iVar1 == 8192) || iVar1 == 1) || iVar1 == 16)
		{
			func_518(&(Local_62.f_1021[iVar0 /*63*/].f_9), 4096);
		}
		else if (iVar1 == 16384)
		{
			func_518(&(Local_62.f_1021[iVar0 /*63*/].f_9), 4096);
		}
		else
		{
			return;
		}
		iVar0++;
	}
}

void func_226(int* iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	float fVar3;
	int iVar4;
	if (func_275())
	{
		return;
	}
	iVar0 = 0;
	iVar1 = Local_62.f_1216[0];
	sVar2 = "SCENE_VALDOC_DEPUTYKNOCK";
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		fVar3 = __LIB_0__::func_665(Global_35, *iParam0, 1, 1);
	}
	else
	{
		if (!func_120(2))
		{
			return;
		}
		fVar3 = 20f;
	}
	if (!__LIB_2__::func_1(*iParam0, 0, 1))
	{
		func_520(iParam0);
		if (!func_120(2))
		{
			return;
		}
	}
	func_521(iParam0, fVar3, uParam1);
	if (func_522(iParam0))
	{
		func_523(iParam0);
		func_524(17, 0);
	}
	else if (func_525(iParam0))
	{
		if (func_526(iParam0))
		{
			func_524(15, iVar0);
			return;
		}
		else if (func_527(iParam0))
		{
			func_524(14, iVar0);
			return;
		}
	}
	func_528(iParam0);
	if (func_529(iParam0, fVar3))
	{
		func_524(8, iVar0);
	}
	if (func_530())
	{
		if (__LIB_14__::func_606(Global_35, Local_62.f_1247[4 /*2*/]))
		{
			if (!func_335(1024))
			{
				if (__LIB_2__::func_470())
				{
					__LIB_8__::func_111("SVD_DEP_KNOCK", 0);
					__LIB_8__::func_336(&(Local_62.f_1518), "SRVD_O3_SEEAIM", Local_62.f_1479[1], *iParam0, 0, 0, 1, 1);
					func_533(1024);
					func_524(12, iVar0);
				}
			}
		}
	}
	switch (iParam0->f_8)
	{
		case 0:
			if (!PED::_0x5102307CE88798EB(*iParam0))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(*iParam0);
			}
			func_524(1, iVar0);
			break;
		case 1:
			if (!func_534())
			{
				return;
			}
			__LIB_14__::func_616(iVar1, sVar2);
			func_536(*iParam0, joaat("WEAPON_UNARMED"), 1, 0);
			func_524(2, iVar0);
			break;
		case 2:
			if ((Local_62.f_1620 % 2) == 0)
			{
				return;
			}
			if (func_537(iParam0, fVar3))
			{
				__LIB_2__::func_862(func_416(), 7f, "AMBRST_SHOPROB_RE_PEEPTOM", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
				func_224(256);
				func_277(iVar1, "bDeputyActionKnock", 1, sVar2);
				func_429(joaat("DOOR_VAL_DOC_BACK"), 1, "DOOR_VAL_DOC_BACK");
				__LIB_4__::func_261(73, 1);
				__LIB_9__::func_786(0, 0);
				__LIB_8__::func_336(&(Local_62.f_1518), "SVD_DEP_KNOCK", *iParam0, Local_62.f_1479[1], 0, 0, 1, 1);
				func_524(5, iVar0);
			}
			else if (func_82())
			{
				func_540(iParam0, 0);
				func_524(19, iVar0);
			}
			break;
		case 5:
			if (!__LIB_2__::func_1(*iParam0, 0, 1))
			{
				__LIB_3__::func_525(&(Local_62.f_1373[1]), &(Local_62.f_1370[1]));
				func_541();
				func_524(19, iVar0);
				return;
			}
			if (!func_280(iVar1, sVar2, 0.929f))
			{
				return;
			}
			if (__LIB_2__::func_227(-3f, 1, 0, 0))
			{
				__LIB_3__::func_525(&(Local_62.f_1373[1]), &(Local_62.f_1370[1]));
				func_541();
				func_524(6, iVar0);
			}
			break;
		case 6:
			if (!func_221(8) && !__LIB_0__::func_51(&(iParam0->f_9), 65536))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_62.f_1216[0]) > 0.976f)
				{
					if (__LIB_2__::func_215(*iParam0, Global_35, 1, 5.25f, 0))
					{
						if (__LIB_2__::func_227(-5.5f, 1, 0, 0))
						{
							TASK::TASK_LOOK_AT_ENTITY(*iParam0, Global_35, 4000, 0, 51, 0);
							__LIB_8__::func_336(&(Local_62.f_1518), "SRVDDEPWALK", *iParam0, Global_35, 0, 0, 1, 1);
							func_224(8);
						}
					}
				}
			}
			if (func_280(iVar1, sVar2, 0.993f) || !__LIB_14__::func_617(iParam0))
			{
				func_429(joaat("DOOR_VAL_DOC_BACK"), 0, "DOOR_VAL_DOC_BACK");
				func_540(iParam0, 0);
				if (!ENTITY::IS_ENTITY_DEAD(Local_62.f_1226[0]))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_62.f_1226[0], false);
				}
				func_524(10, iVar0);
			}
			break;
		case 14:
			func_523(iParam0);
			if (PED::IS_PED_RAGDOLL(*iParam0))
			{
				return;
			}
			__LIB_3__::func_732(0);
			__LIB_8__::func_336(&(Local_62.f_1518), "SRVDDEPPUSH", *iParam0, Global_35, 0, 0, 1, 1);
			func_524(9, iVar0);
			break;
		case 8:
			if (!__LIB_2__::func_227(-3f, 1, 0, 0))
			{
				return;
			}
			func_541();
			__LIB_14__::func_618(&(Local_62.f_1226[0]), 0);
			__LIB_2__::func_506(Local_62.f_1216[0], "SCENE_VALDOC_DEPUTYKNOCK");
			__LIB_8__::func_336(&(Local_62.f_1518), "SRVDDEPCLOSE", *iParam0, Global_35, 0, 0, 1, 1);
			func_524(9, iVar0);
			break;
		case 9:
			func_540(iParam0, 0);
			func_524(19, iVar0);
			break;
		case 10:
			if (!func_276(&(Local_62.f_1392[3 /*3*/]), 1f, 0, "TIMER_VALDOC_DELETE_DEPUTY_FEM_LOITER"))
			{
				return;
			}
			__LIB_2__::func_506(iVar1, sVar2);
			func_524(19, iVar0);
			break;
		case 12:
			TASK::OPEN_SEQUENCE_TASK(&iVar4);
			TASK::TASK_REACT(0, Global_35, vLocal_59, "Default_Shocked", 2f, 0, 4);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(*iParam0, &iVar4, 0, 0, 1, 1);
			__LIB_4__::func_261(Local_62, 16);
			__LIB_11__::func_395(Local_62, 524288);
			func_523(iParam0);
			func_524(13, iVar0);
			break;
		case 13:
			if (__LIB_14__::func_642(*iParam0, 242628503, 0))
			{
				if (TASK::GET_SEQUENCE_PROGRESS(*iParam0) < 1)
				{
					return;
				}
			}
			func_223(iParam0, 1);
			func_524(17, iVar0);
			break;
		case 16:
			break;
		case 15:
			if (func_530())
			{
				__LIB_8__::func_111("SVD_DEP_KNOCK", 0);
				func_549();
			}
			__LIB_4__::func_261(Local_62, 16);
			__LIB_11__::func_395(Local_62, 524288);
			func_523(iParam0);
			func_223(iParam0, 0);
			func_524(17, iVar0);
			break;
		case 17:
			if (!__LIB_14__::func_619(iVar1, sVar2))
			{
				func_524(19, iVar0);
				return;
			}
			if (__LIB_14__::func_607(iVar1, "Idle", sVar2))
			{
				func_524(19, iVar0);
				return;
			}
			if (!func_280(iVar1, sVar2, 0.64f) || func_280(iVar1, sVar2, 0.99f))
			{
				func_524(19, iVar0);
				return;
			}
			if (func_280(iVar1, sVar2, 0.956f))
			{
				if (__LIB_2__::func_227(-3f, 1, 0, 0))
				{
					func_549();
				}
				func_524(19, iVar0);
				return;
			}
			func_524(18, iVar0);
			break;
		case 18:
			if (__LIB_2__::func_227(-3f, 1, 0, 0))
			{
				func_549();
			}
			if (func_280(iVar1, sVar2, 0.666f))
			{
				if (__LIB_2__::func_227(-5f, 1, 0, 0))
				{
					func_549();
					__LIB_2__::func_506(iVar1, sVar2);
					ENTITY::PLAY_ENTITY_ANIM(Local_62.f_1198[1 /*8*/], "S_DOORSLDPRTNBRD01X", "s_lev_des", 0f, false, true, false, 0f, 0);
					ENTITY::_SET_ENTITY_ANIM_SPEED(Local_62.f_1198[1 /*8*/], "s_lev_des", "S_DOORSLDPRTNBRD01X", -1f);
					func_524(19, iVar0);
				}
			}
			break;
		case 19:
			break;
	}
}

void func_227(int* iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	float fVar3;
	int iVar4;
	if (func_275())
	{
		return;
	}
	iVar0 = 0;
	iVar1 = Local_62.f_1216[0];
	sVar2 = "SCENE_RHDGUN_HELP";
	if (__LIB_0__::func_51(&(Local_62.f_390[1 /*126*/].f_10), 2))
	{
		func_552(&(Local_62.f_1021[0 /*63*/]), &(Local_62.f_390[1 /*126*/].f_12), 15f, &(Local_62.f_390[1 /*126*/].f_30), 0, 1, 0, 0, 3, 0, 2, -1082130432 /* Float: -1f */);
	}
	if (!__LIB_0__::func_51(&(iParam0->f_9), 64))
	{
		if (__LIB_0__::func_51(&(iParam0->f_9), 1024))
		{
			if (!PED::IS_PED_RAGDOLL(*iParam0))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(*iParam0, Global_35, 0, 0, -1082130432 /* Float: -1f */, -1, 0);
				PED::SET_PED_KEEP_TASK(*iParam0, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
				func_518(&(iParam0->f_9), 64);
			}
		}
	}
	switch (iParam0->f_8)
	{
		case 0:
			AUDIO::SET_PORTAL_SETTINGS_OVERRIDE("RHO_GUNSMITH_BASEMENT_WINDOW_BLOCKED", "RHO_GUNSMITH_BASEMENT_WINDOW_OPEN");
			func_524(2, iVar0);
			break;
		case 2:
			if (__LIB_3__::func_610(29, 1) || func_62(2))
			{
				func_553(iVar1, "PBL_bars_callover_01", sVar2);
				func_524(19, iVar0);
				return;
			}
			if (func_554())
			{
				func_524(8, iVar0);
				return;
			}
			if (__LIB_0__::func_94(*iParam0, func_555(), 1) > 0.15f)
			{
				return;
			}
			func_556();
			__LIB_14__::func_616(iVar1, sVar2);
			PED::_0xAAB050DA48B57978(*iParam0, "Default_Nervous", 0, -1, 4);
			func_524(5, iVar0);
			break;
		case 5:
			if (func_82() || ENTITY::IS_ENTITY_DEAD(Local_62.f_170))
			{
				if (__LIB_2__::func_1(*iParam0, 0, 1))
				{
					TASK::CLEAR_PED_TASKS(*iParam0, true, false);
					TASK::TASK_SMART_FLEE_PED(*iParam0, *uParam1, 1000f, -1, 0, 1.5f, 0);
				}
				func_524(11, iVar0);
				return;
			}
			if (func_554())
			{
				func_524(8, iVar0);
				return;
			}
			if (func_557())
			{
				return;
			}
			if (!__LIB_14__::func_606(Global_35, Local_62.f_1247[1 /*2*/]))
			{
				return;
			}
			fVar3 = __LIB_0__::func_665(Global_35, *uParam1, 1, 1);
			if (fVar3 > 20f)
			{
				return;
			}
			if (!PED::_0x164CECC59E70DF86(*iParam0, 35f))
			{
				if (fVar3 > 10f)
				{
					__LIB_0__::func_37(&(Local_62.f_1392[2 /*3*/]));
					return;
				}
			}
			else if (!func_276(&(Local_62.f_1392[2 /*3*/]), 1.5f, 0, "TIMER_RHDGUN_PASSERBY_VISIBLE_TO_WALK_AWAY"))
			{
				return;
			}
			func_91(16);
			__LIB_8__::func_336(&(Local_62.f_1518), "PRRGS_IG3_LEAVE", *uParam1, *iParam0, 0, 0, 1, 1);
			__LIB_2__::func_315(249295937, *uParam1, 1);
			__LIB_9__::func_793(iVar1, "PBL_intro_action", sVar2, 1);
			func_277(iVar1, "BOOL_intro_loop", 1, sVar2);
			__LIB_2__::func_315(249295937, *uParam1, 1);
			func_39(1);
			__LIB_4__::func_261(29, 1);
			__LIB_9__::func_786(0, 0);
			func_524(7, iVar0);
			break;
		case 7:
			if (__LIB_0__::func_51(&(iParam0->f_9), 64))
			{
				func_524(9, iVar0);
				return;
			}
			if (!func_280(iVar1, sVar2, 0.591f))
			{
				if (!func_62(4096))
				{
					if (func_280(iVar1, sVar2, 0.515f))
					{
						__LIB_2__::func_315(249295937, *uParam1, 1);
						func_39(4096);
					}
				}
				return;
			}
			PED::FORCE_PED_MOTION_STATE(*iParam0, joaat("MOTIONSTATE_WALK"), false, 0, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar4);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1322.545f, -1310.427f, 75.56776f, 1f, 20000, 0.25f, 1, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1326.135f, -1292.982f, 76.04255f, 1f, 20000, 0.25f, 1, 40000f);
			TASK::TASK_WANDER_STANDARD(0, 40000f, 1);
			__LIB_1__::func_474(*iParam0, &iVar4, 0, 0, 1, 1);
			func_524(8, iVar0);
			break;
		case 8:
			PED::SET_PED_KEEP_TASK(*iParam0, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
			__LIB_17__::func_921(&(Local_62.f_390[1 /*126*/].f_12), &(Local_62.f_390[1 /*126*/].f_30));
			if (!__LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 512))
			{
				func_524(9, iVar0);
			}
			else
			{
				func_524(11, iVar0);
			}
			break;
		case 9:
			if (func_120(1))
			{
				if (!func_559(iVar1, "PBL_bars_loop_reset", sVar2, 0))
				{
					return;
				}
			}
			else if (!func_560())
			{
				return;
			}
			func_561(16);
			func_562();
			func_553(iVar1, "PBL_bars_callover_01", sVar2);
			func_524(10, iVar0);
			break;
		case 10:
			if (!func_276(&(Local_62.f_1392[0 /*3*/]), 3f, 1, "TIMER_RHDGUN_FREE_PASSER_N_CLERK_AMBUSH"))
			{
				return;
			}
			func_524(19, iVar0);
			break;
		case 11:
			if (!func_559(iVar1, "PBL_react_to_gunfire", sVar2, 0))
			{
				return;
			}
			func_418(4);
			func_563(&(uParam1->f_10), &(uParam1->f_30), 0, 0);
			__LIB_9__::func_793(iVar1, "PBL_react_to_gunfire", sVar2, 1);
			func_524(19, iVar0);
			break;
		case 19:
			break;
	}
}

bool func_228()
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_120(Local_62.f_170.f_8);
	if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		iVar1 = PERSCHAR::_0x31C70A716CAE1FEE(iVar0);
	}
	else
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (!__LIB_7__::func_291(iVar1, Global_35, 22, __LIB_0__::func_12(), 0, 1, 10080))
	{
	}
	else
	{
		func_91(2);
	}
	return true;
}

void func_232(int iParam0)
{
	func_572(iParam0);
}

bool func_233()
{
	if (func_60(32))
	{
		return true;
	}
	if (!func_573(&(Local_62.f_95)))
	{
		return false;
	}
	if (func_99(2))
	{
		if (!func_573(&(Local_62.f_96)))
		{
			return false;
		}
	}
	return true;
}

int func_234()
{
	if (func_60(256))
	{
		return 0;
	}
	switch (iLocal_29)
	{
		case 3:
			if (!func_99(8))
			{
				return 2;
			}
			else if (!func_99(16))
			{
				return 0;
			}
			else if (!func_99(32))
			{
				return 1;
			}
			else if (!func_99(64))
			{
				return 0;
			}
			else if (!func_99(256))
			{
				return 2;
			}
			else if (!func_99(1024))
			{
				func_98(33554432);
				return iLocal_57;
			}
			break;
		case 0:
			if (!func_99(8))
			{
				return 0;
			}
			else if (!func_99(16))
			{
				return 0;
			}
			else if (!func_99(32))
			{
				return 0;
			}
			else if (!func_99(64))
			{
				return 1;
			}
			else if (!func_99(256))
			{
				return 0;
			}
			else if (!func_99(1024))
			{
				func_98(33554432);
				return (iLocal_57 + (iLocal_55 - 1));
			}
			break;
		default:
			func_98(33554432);
			return ((iLocal_55 + iLocal_54) + iLocal_57) + 1;
	}
	return 0;
}

void func_237()
{
	if (!func_62(4))
	{
		return;
	}
	if (func_60(256))
	{
		return;
	}
	if (__LIB_0__::func_474(152))
	{
		return;
	}
	if (!func_65())
	{
		return;
	}
	__LIB_1__::func_240(152, 0);
}

void func_239(int iParam0)
{
	if (func_55(1))
	{
		return;
	}
	func_576(iParam0);
	func_57(1);
}

void func_240(var uParam0)
{
	func_577(uParam0);
	func_578(uParam0);
	if (func_82())
	{
		if (!func_221(2))
		{
			if (__LIB_14__::func_620(*uParam0, "GunsmithKnock"))
			{
				func_224(2);
			}
		}
	}
	func_580();
	if (func_65() && __LIB_14__::func_606(Global_35, Local_62.f_1247[1 /*2*/]))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 108, true);
	}
}

void func_241(var uParam0, var uParam1, int* iParam2)
{
	func_581(uParam1);
	func_582(iParam2, uParam0);
	if (__LIB_14__::func_643(Local_62.f_170, "script_proc@robberies@shop@rhodes@gunsmith@inside_upstairs", "trans_2_trap_door_owner") || __LIB_14__::func_643(Local_62.f_170, "script_proc@robberies@shop@rhodes@gunsmith@inside_upstairs", "door_loop_owner"))
	{
		func_337(&(Local_62.f_170.f_42), Global_35, 10000, vLocal_59, 4);
		_NAMESPACE29::_0x66F9EB44342BB4C5(Local_62.f_170, &(Local_62.f_170.f_42));
	}
	if (!func_62(65536) && !func_62(131072))
	{
		if (__LIB_14__::func_643(Local_62.f_170, "script_proc@robberies@shop@rhodes@gunsmith@inside_upstairs", "idle_2_register_owner"))
		{
			func_224(1);
		}
	}
	else if (__LIB_14__::func_643(Local_62.f_170, "script_proc@robberies@shop@rhodes@gunsmith@inside_upstairs", "handsup_register_owner") || __LIB_14__::func_643(Local_62.f_170, "script_proc@robberies@shop@rhodes@gunsmith@inside_upstairs", "door_loop_owner"))
	{
		func_418(1);
	}
	if (!func_335(2))
	{
		if (func_60(262144))
		{
			if (!__LIB_3__::func_138(Global_35, joaat("PROP_PLAYER_CASH_REGISTER_CLERK_OPENED")))
			{
				__LIB_8__::func_336(&(Local_62.f_1518), "SRGKREGMON", Local_62.f_170, Global_35, 0, 0, 1, 1);
				func_533(2);
			}
		}
	}
	if (!func_221(256))
	{
		if (__LIB_14__::func_620(Local_62.f_170, "UnlockedSideDoor"))
		{
			Local_62.f_1247[11 /*2*/] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 1289.607f, -1306.01f, 82.22049f, 0f, 0f, 0f, func_585());
			PED::_0x7C00CFC48A782DC0(Local_62.f_1247[11 /*2*/], *uParam1, vLocal_59, vLocal_59, 2, 1);
			__LIB_1__::func_948(Local_62.f_1189[0 /*8*/], 0, 0, 0, 1, 0, 0, 0);
			func_586();
			func_587(&(Local_62.f_1247[12 /*2*/]), 1325.172f, -1322.377f, 74.8764f, 0f, 0f, 0f, 0.62068f, 0.480134f, 0.972615f, "VOL_RHDGUN_PLAYER_BLOCK_GUNSMITH_AFRAID");
			func_533(131072);
			func_588(Local_62.f_390[0 /*126*/], &(Local_62.f_390[0 /*126*/].f_10), &(Local_62.f_390[0 /*126*/].f_30), 0, 0);
			PED::_0xAE6004120C18DF97(*uParam1, 0, 0);
			func_224(256);
		}
		else if (ENTITY::IS_ENTITY_DEAD(*uParam1))
		{
			if (func_559(Local_62.f_1216[0], "PBL_react_to_gunfire", "SCENE_RHDGUN_HELP", 0))
			{
				func_418(4);
				__LIB_9__::func_793(Local_62.f_1216[0], "PBL_react_to_gunfire", "SCENE_RHDGUN_HELP", 1);
				func_563(&(Local_62.f_390[0 /*126*/].f_10), &(Local_62.f_390[0 /*126*/].f_30), 0, 0);
			}
			__LIB_0__::func_325(&(iParam2->f_1));
		}
	}
	if (!func_221(1024))
	{
		if (__LIB_14__::func_620(Local_62.f_170, "TrapDoorStartOpen"))
		{
			AUDIO::SET_PORTAL_SETTINGS_OVERRIDE("RHO_GUNSMITH_TRAP_DOOR_CLOSED", "RHO_GUNSMITH_TRAP_DOOR_OPEN");
			func_591(*iParam2, func_589(), func_590(), 2, 1073741824 /* Float: 2f */);
			TASK::TASK_PLAY_ANIM_ADVANCED(*iParam2, "script_proc@robberies@shop@rhodes@gunsmith@inside_downstairs", "bed_loop_victim", func_589(), 0f, 0f, func_590(), 8f, -8f, -1, 1, 0f, 2, 0, 0);
			func_392(&(Local_62.f_1226[0]), 1);
			PED::SET_PED_CONFIG_FLAG(*uParam1, 137, false);
			PED::SET_PED_CONFIG_FLAG(*uParam1, 169, false);
			PED::SET_PED_CONFIG_FLAG(*uParam1, 170, false);
			PED::SET_PED_CONFIG_FLAG(*uParam1, 302, false);
			ENTITY::SET_ENTITY_PROOFS(*uParam1, 0, false);
			func_224(1024);
			func_592(*uParam1, "PRRGS_STAIRS", 0);
			__LIB_2__::func_279(*uParam1, 1);
			func_594("PROP_PLAYER_RHO_GUN_TRAP_DOOR", 0);
			func_595("LevDes_RhoGunTrapDoor", 0);
		}
		else if (!__LIB_2__::func_1(Local_62.f_170, 0, 1))
		{
			if (!func_221(512))
			{
				func_594("PROP_PLAYER_RHO_GUN_TRAP_DOOR", 1);
				func_595("LevDes_RhoGunTrapDoor", 1);
				func_224(512);
			}
		}
		if (func_221(512))
		{
			if (!func_335(262144))
			{
				if (__LIB_3__::func_138(Global_35, joaat("PROP_PLAYER_RHO_GUN_TRAP_DOOR")))
				{
					func_596(&Global_35, "SRGAOPEN", "SRGJOPEN", 1);
					func_392(&(Local_62.f_1226[0]), 1);
					func_533(262144);
				}
			}
		}
	}
	if (func_221(256))
	{
		if (!func_221(8192))
		{
			if ((__LIB_14__::func_606(Global_35, Local_62.f_1247[7 /*2*/]) || __LIB_14__::func_606(Global_35, Local_62.f_1247[6 /*2*/])) || __LIB_14__::func_606(Global_35, Local_62.f_1247[8 /*2*/]))
			{
				__LIB_4__::func_794(&(Local_62.f_153), 16, 1, 1065353216 /* Float: 1f */);
			}
			else
			{
				__LIB_0__::func_200(&(Local_62.f_153));
			}
		}
		else
		{
			__LIB_0__::func_200(&(Local_62.f_153));
		}
	}
}

void func_242(var uParam0)
{
	func_599(&(Local_62.f_170));
	func_387(uParam0);
	if (!__LIB_14__::func_654())
	{
		__LIB_14__::func_649(1);
	}
	if (iLocal_1777 == 1)
	{
		if ((func_65() || __LIB_14__::func_606(Global_35, Local_62.f_1290)) || __LIB_16__::func_422(3, 5f, 1))
		{
			__LIB_1__::func_948(1854467923, 0, 0f, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(1595373759, 0, 0f, 0, 0, 0, 0, 0);
		}
		else
		{
			iLocal_1777 = 0;
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_62.f_1376))
	{
		func_603(0);
	}
	__LIB_11__::func_568(3);
	if (PED::_0x29FCE825613FEFCA(Local_62.f_170, 500))
	{
		if (__LIB_1__::func_322("PRSGS_C_GETSTH1"))
		{
			__LIB_5__::func_239("PRSGS_C_GETSTH1", 0, 0);
		}
		if (__LIB_1__::func_322("PRSGS_C_GETSTH2"))
		{
			__LIB_5__::func_239("PRSGS_C_GETSTH2", 0, 0);
		}
		if (__LIB_1__::func_322("PRSGS_C_GETSTH3"))
		{
			__LIB_5__::func_239("PRSGS_C_GETSTH3", 0, 0);
		}
		if (__LIB_1__::func_322("PRSGS_C_GETSTH4"))
		{
			__LIB_5__::func_239("PRSGS_C_GETSTH4", 0, 0);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1771) && VOLUME::_DOES_VOLUME_EXIST(Local_62.f_1376))
	{
		if (__LIB_14__::func_606(Global_35, iLocal_1771))
		{
			if (iLocal_1776 == 0)
			{
				PED::SET_PED_CONFIG_FLAG(Local_62.f_170, 137, true);
				PED::SET_PED_CONFIG_FLAG(Local_62.f_170, 169, true);
				PED::SET_PED_CONFIG_FLAG(Local_62.f_170, 170, true);
				ENTITY::SET_ENTITY_PROOFS(Local_62.f_170, 16, false);
				PED::SET_PED_CONFIG_FLAG(Global_35, 26, true);
				iLocal_1776 = 1;
			}
		}
		else if (iLocal_1776 == 1)
		{
			iLocal_1776 = 0;
			PED::SET_PED_CONFIG_FLAG(Local_62.f_170, 137, false);
			PED::SET_PED_CONFIG_FLAG(Local_62.f_170, 169, false);
			PED::SET_PED_CONFIG_FLAG(Local_62.f_170, 170, false);
			ENTITY::SET_ENTITY_PROOFS(Local_62.f_170, 0, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 26, false);
		}
	}
	else if (iLocal_1776 == 1)
	{
		iLocal_1776 = 0;
		PED::SET_PED_CONFIG_FLAG(Local_62.f_170, 137, false);
		PED::SET_PED_CONFIG_FLAG(Local_62.f_170, 169, false);
		PED::SET_PED_CONFIG_FLAG(Local_62.f_170, 170, false);
		ENTITY::SET_ENTITY_PROOFS(Local_62.f_170, 0, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 26, false);
	}
	if (__LIB_2__::func_1(Local_62.f_170, 0, 0))
	{
		if (PED::_IS_PED_HOGTIED(Local_62.f_170) || PED::_IS_PED_LASSOED(Local_62.f_170))
		{
			if (__LIB_14__::func_606(Local_62.f_170, Local_62.f_1290))
			{
				if (!__LIB_0__::func_491(Local_62.f_170, joaat("SCRIPT_TASK_INTIMIDATED")))
				{
					TASK::_TASK_INTIMIDATED_2(Local_62.f_170, Global_35, 2, 0, 0, 1, 0, 0, 0);
					TASK::_0x41D1331AFAD5A091(Local_62.f_170, 1, 0);
				}
			}
			else if (!__LIB_0__::func_491(Local_62.f_170, 518218985))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(Local_62.f_170, Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
			}
		}
	}
	if (func_221(1024))
	{
		if (!func_221(2048))
		{
			if (!__LIB_2__::func_1(Local_62.f_170, 0, 1))
			{
				ENTITY::_0x18FF3110CF47115D(Local_62.f_170, 2, 1);
				ENTITY::_0x18FF3110CF47115D(Local_62.f_170, 7, 1);
			}
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1769) && PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_PLAYER_STR_GEN_TRAP_DOOR")))
		{
			func_224(2048);
			func_57(262144);
			__LIB_0__::func_172(iLocal_1769);
			__LIB_0__::func_172(iLocal_1771);
			func_412();
			func_239(3);
			func_29(64);
			__LIB_4__::func_261(Local_62, 524288);
			func_608();
		}
		if (!func_221(2048))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_62.f_170) && VOLUME::_DOES_VOLUME_EXIST(iLocal_1769))
			{
				if (TASK::IS_SCENARIO_TYPE_ENABLED(func_609()))
				{
					if (__LIB_1__::func_205(Local_62.f_170, iLocal_1769, 0, 0) && PED::_GET_PED_HEIGHT(Local_62.f_170) > 159f)
					{
						TASK::SET_SCENARIO_TYPE_ENABLED(func_609(), false);
					}
				}
				else if (!__LIB_1__::func_205(Local_62.f_170, iLocal_1769, 0, 0))
				{
					TASK::SET_SCENARIO_TYPE_ENABLED(func_609(), true);
				}
			}
		}
	}
	if (!func_221(2048))
	{
		if (__LIB_14__::func_620(Local_62.f_170, "OpenedTrapDoor"))
		{
			AUDIO::SET_PORTAL_SETTINGS_OVERRIDE("STR_GENST_TRAP_DOOR_CLOSED", "STR_GENST_TRAP_DOOR_OPEN");
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_62.f_170, joaat("REL_CIVMALE"));
			ENTITY::SET_ENTITY_INVINCIBLE(Local_62.f_170, false);
			ENTITY::SET_ENTITY_PROOFS(Local_62.f_170, 0, false);
			VOLUME::_SET_VOLUME_SCALE(Local_62.f_1376, 2f, 1.6f, 5f);
			func_594(func_611(), 0);
			func_224(2048);
		}
		else if (!func_221(1024))
		{
			if (func_82() || (func_60(8388608) && !__LIB_2__::func_1(Local_62.f_170, 0, 1)))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_62.f_1216[0], false))
				{
					if (ANIMSCENE::_0x1F0E401031E20146(Local_62.f_1216[0], "pbOpenToBasement_Alt"))
					{
						if (__LIB_2__::func_1(Local_62.f_170, 0, 1))
						{
							if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_62.f_170) != joaat("REL_GANG_DUTCHS"))
							{
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_62.f_170, joaat("REL_GANG_DUTCHS"));
								ENTITY::SET_ENTITY_INVINCIBLE(Local_62.f_170, true);
								ENTITY::SET_ENTITY_PROOFS(Local_62.f_170, 2, false);
							}
						}
					}
					else if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_62.f_170) == joaat("REL_GANG_DUTCHS"))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_62.f_170, joaat("REL_CIVMALE"));
						ENTITY::SET_ENTITY_INVINCIBLE(Local_62.f_170, false);
						ENTITY::SET_ENTITY_PROOFS(Local_62.f_170, 0, false);
					}
				}
				if (!__LIB_2__::func_1(Local_62.f_170, 0, 1))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_62.f_1216[0], false))
					{
						if (ANIMSCENE::_0x1F0E401031E20146(Local_62.f_1216[0], "pbOpenToBasement_Alt"))
						{
							if (ANIMSCENE::_0x8D81E7824B7753F7(Local_62.f_1216[0], "OPEN_DOOR_ALT", 1))
							{
								ANIMSCENE::SET_ANIM_SCENE_RATE(Local_62.f_1216[0], 1.5f);
							}
						}
						return;
					}
					func_224(1024);
					ENTITY::_0x18FF3110CF47115D(Local_62.f_170, 2, 1);
					ENTITY::_0x18FF3110CF47115D(Local_62.f_170, 7, 1);
					TASK::FORCE_SCENARIO_GROUP_PRIORITY(func_612(), 1);
					if (ENTITY::DOES_ENTITY_EXIST(Local_62.f_1226[1]))
					{
						TASK::SET_SCENARIO_TYPE_ENABLED(func_609(), true);
						TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(Local_62.f_1226[1], joaat("PROP_PLAYER_STR_GEN_TRAP_DOOR"), 0f, 0f, 0f, 0f, 0, 0, 0);
					}
					if (VOLUME::_DOES_VOLUME_EXIST(Local_62.f_1376))
					{
						__LIB_0__::func_172(Local_62.f_1376);
						__LIB_0__::func_172(iLocal_1771);
						__LIB_0__::func_172(iLocal_1770);
						Local_62.f_1376 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), -1788.569f, -385.934f, 157.475f, 0f, 0f, -35f, 0.9f, 2.182f, 3f);
					}
				}
			}
		}
	}
}

void func_243()
{
	func_613(&(Local_62.f_170));
	func_614(&(Local_62.f_390[0 /*126*/]));
	func_615();
	func_391();
	if (func_221(32768))
	{
		if (!func_221(65536))
		{
			__LIB_1__::func_948(joaat("DOOR_VAL_DOC_MID_RM"), 0, 0f, 0, 0, 0, 0, 0);
			func_224(65536);
		}
	}
	if (func_82())
	{
		if (!func_44(32768))
		{
			if (!func_247())
			{
				if (__LIB_14__::func_606(Global_35, Local_62.f_1292))
				{
					func_249();
				}
			}
		}
		if (!func_60(65536))
		{
			func_128(&(Local_62.f_1512[1]), "SPI_VALDOC_INT_DOOR_KNOCK");
			func_128(&(Local_62.f_1512[3]), "SPI_VALDOC_EXT_DOOR_KNOCK");
			func_29(65536);
		}
	}
	else if (Local_62.f_1198[0 /*8*/].f_7 == 7)
	{
		func_128(&(Local_62.f_1512[1]), "SPI_VALDOC_INT_DOOR_KNOCK");
	}
	else if (Local_62.f_1198[1 /*8*/].f_7 == 7)
	{
		func_128(&(Local_62.f_1512[3]), "SPI_VALDOC_EXT_DOOR_KNOCK");
	}
}

int func_244()
{
	return joaat("PROP_PLAYER_ROB_CASH_REGISTER");
}

void func_246()
{
	if (!__LIB_14__::func_267(Local_62, 1, 0))
	{
		__LIB_14__::func_670(Local_62, 1, 0);
	}
}

bool func_247()
{
	if (func_82() && func_60(8388608))
	{
		return true;
	}
	return false;
}

bool func_248(var uParam0, float fParam1)
{
	int iVar0;
	if (!func_313(uParam0, 16))
	{
		if (func_618(uParam0))
		{
			func_323(uParam0, 16);
		}
	}
	else if (!func_313(uParam0, 32))
	{
		if (func_618(uParam0))
		{
			func_323(uParam0, 32);
		}
	}
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, 0) && Global_1935630.f_24)
	{
		uParam0->f_86 = 1;
		return true;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_90))
	{
		if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_90, Global_36))
		{
			return true;
		}
	}
	if (Global_1935630.f_24)
	{
		iVar0 = PED::_0x336B3D200AB007CB(Global_35, Global_36, 10f, 16896);
		if (iVar0 >= 1)
		{
			uParam0->f_86 = 1;
			return true;
		}
	}
	if (Global_1935630.f_44 == joaat("WEAPON_UNARMED"))
	{
		__LIB_1__::func_283(&(uParam0->f_72), 0);
		if (__LIB_1__::func_285(&(uParam0->f_72), 1.5f))
		{
			if (fParam1 > 4f)
			{
				return true;
			}
			else
			{
				__LIB_1__::func_148(&(uParam0->f_72));
			}
		}
	}
	else if (__LIB_0__::func_75(&(uParam0->f_72)))
	{
		__LIB_0__::func_37(&(uParam0->f_72));
	}
	if (!func_313(uParam0, 16))
	{
		if ((fParam1 < 4f || __LIB_14__::func_681(*uParam0)) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Global_35, *uParam0, 17))
		{
			if (__LIB_0__::func_75(&(uParam0->f_67)))
			{
				__LIB_0__::func_37(&(uParam0->f_67));
			}
			return false;
		}
	}
	__LIB_1__::func_283(&(uParam0->f_67), 0);
	if (__LIB_1__::func_285(&(uParam0->f_67), 3f))
	{
		return true;
	}
	if (func_313(uParam0, 16))
	{
		return true;
	}
	if (func_289(uParam0, 0))
	{
		return true;
	}
	return false;
}

void func_249()
{
	if (func_44(16777216))
	{
		return;
	}
	if (iLocal_29 == 1 && __LIB_0__::func_293(44))
	{
		return;
	}
	func_344();
	func_299(1);
	func_623(1);
	func_266();
	func_268();
	func_91(16777216);
}

bool func_250(int iParam0)
{
	if (func_56(iParam0, 0))
	{
		return false;
	}
	if (__LIB_14__::func_606(Global_35, func_624()))
	{
		return false;
	}
	if (iLocal_29 == 0 && __LIB_14__::func_606(Global_35, Local_62.f_1288))
	{
		return false;
	}
	return true;
}

void func_251(int iParam0)
{
	__LIB_0__::func_8(&Global_1935630, 16);
	if (__LIB_0__::func_746(Global_1914319.f_3[iParam0 /*446*/].f_20) == 3 || __LIB_0__::func_746(Global_1914319.f_3[iParam0 /*446*/].f_20) == 1)
	{
		__LIB_1__::func_559(Global_1914319.f_3[iParam0 /*446*/].f_20, 0, 2);
	}
	Global_1914319.f_17371 = 0;
}

void func_252(bool bParam0)
{
	if (iLocal_29 != 1)
	{
		return;
	}
	if (!func_60(8388608) && bParam0)
	{
		return;
	}
	if (bParam0)
	{
		if (!func_55(64))
		{
			__LIB_2__::func_29(2048);
			func_57(64);
		}
	}
	else if (func_55(64))
	{
		__LIB_1__::func_979(2048);
		func_58(64);
	}
}

void func_253()
{
	if (!Local_62.f_1247[8 /*2*/].f_1)
	{
		if (!__LIB_0__::func_73(2048) && func_60(8388608))
		{
			__LIB_2__::func_29(2048);
		}
	}
	else if (__LIB_14__::func_606(Global_35, Local_62.f_1247[8 /*2*/]))
	{
		if (!__LIB_0__::func_73(2048))
		{
			__LIB_2__::func_29(2048);
		}
	}
	else if (__LIB_0__::func_73(2048))
	{
		__LIB_1__::func_979(2048);
	}
}

void func_254()
{
	switch (iLocal_29)
	{
		case 1:
			func_19("SR_RHODES_GUN_STOP", 256);
			break;
		case 0:
			func_19("SR_ST_DENIS_GUN_STOP", 64);
			break;
		case 2:
			func_19("SR_STRAWBERRY_GEN_STOP", 64);
			break;
		case 3:
			func_19("SR_VALENTINE_DOCTOR_STOP", 64);
			break;
	}
}

void func_255(var uParam0)
{
	switch (iLocal_29)
	{
		case 3:
			if (func_65())
			{
				if (__LIB_14__::func_606(Global_35, Local_62.f_1247[5 /*2*/]))
				{
					func_632(joaat("DOOR_VAL_DOC_BACK_RM"), &(Local_62.f_1198[0 /*8*/]), &(Local_62.f_1198[0 /*8*/].f_7), Local_62.f_1479[1], Local_62.f_1373[0], Local_62.f_1370[0], func_629(), func_630(), func_631(), Local_62.f_390[2 /*126*/].f_2, &(Local_62.f_1377[0 /*9*/]), -290.3143f, 813.4089f, 120.0726f, 1, uParam0, "FAKE_DOOR_VALDOC_INTERIOR");
				}
			}
			else if (func_55(128))
			{
				func_632(joaat("DOOR_VAL_DOC_BACK"), &(Local_62.f_1198[1 /*8*/]), &(Local_62.f_1198[1 /*8*/].f_7), Local_62.f_1479[1], Local_62.f_1373[1], Local_62.f_1370[1], func_633(), func_634(), func_635(), Local_62.f_390[2 /*126*/].f_2, &(Local_62.f_1377[0 /*9*/]), -281.0829f, 815.7888f, 120.0644f, 1, uParam0, "FAKE_DOOR_VALDOC_EXTERIOR");
			}
			break;
		case 0:
			if (!func_65())
			{
				return;
			}
			func_632(joaat("DOOR_NEW_GUNSHOP_INT_BACK"), &(Local_62.f_1198[0 /*8*/]), &(Local_62.f_1198[0 /*8*/].f_7), Local_62.f_390[0 /*126*/], Local_62.f_1373[0], Local_62.f_1370[0], func_629(), func_630(), func_631(), Local_62.f_390[0 /*126*/].f_2, &(Local_62.f_1377[0 /*9*/]), 2710.383f, -1290.707f, 50.28196f, 1, uParam0, "FAKE_DOOR_SDNGUN_SHOP_BACK");
			break;
	}
}

void func_257()
{
	if (ENTITY::IS_ENTITY_DEAD(Local_62.f_170))
	{
		return;
	}
	switch (iLocal_29)
	{
		case 3:
			if (func_275())
			{
				func_636();
				__LIB_14__::func_616(Local_62.f_1216[8], "SCENE_VALDOC_DOC_REVENGE");
				__LIB_9__::func_793(Local_62.f_1216[8], "PBL_IDLE", "SCENE_VALDOC_DOC_REVENGE", 1);
			}
			break;
	}
}

bool func_258()
{
	if (iLocal_55 <= 0)
	{
		return true;
	}
	switch (iLocal_29)
	{
		case 1:
			func_637();
			return true;
		default:
			break;
	}
	return true;
	return false;
}

bool func_259(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (__LIB_14__::func_267(uParam0->f_51, 1, 0))
		{
			return true;
		}
	}
	return false;
}

void func_260()
{
	if (iLocal_29 != 1 && iLocal_29 != 0)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_62.f_170))
	{
		return;
	}
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_62.f_170, 5, true);
}

void func_261(var uParam0)
{
	if (func_313(uParam0, 131072))
	{
		return;
	}
	if (!PED::GET_PED_CONFIG_FLAG(Global_35, 141, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, true);
	}
	if (!PED::GET_PED_CONFIG_FLAG(Global_35, 308, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 308, true);
	}
	func_323(uParam0, 131072);
}

bool func_263()
{
	if (func_60(4194304))
	{
		return false;
	}
	switch (iLocal_29)
	{
		case 1:
			if (func_638())
			{
				return true;
			}
			break;
		case 2:
			if (func_639())
			{
				return true;
			}
			break;
		case 3:
			if (func_394())
			{
				return true;
			}
			break;
	}
	return false;
}

void func_264(int iParam0)
{
	__LIB_1__::func_309(-1, 0, 0, 0, 0);
	__LIB_1__::func_924();
	__LIB_0__::func_747(iParam0, 0, 1);
}

bool func_265(var uParam0)
{
	switch (iLocal_29)
	{
		case 1:
			if (__LIB_0__::func_0())
			{
				return true;
			}
			break;
		case 2:
			if (func_642())
			{
				return true;
			}
			break;
		case 3:
			if (func_395(uParam0))
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

void func_266()
{
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_62.f_1387))
	{
		TASK::_DELETE_SCENARIO_POINT(Local_62.f_1387);
	}
}

void func_267(var uParam0)
{
	if (func_643(uParam0))
	{
		__LIB_1__::func_240(499, 0);
	}
}

void func_268()
{
	if (func_313(&(Local_62.f_1), 16777216))
	{
		return;
	}
	if (!Global_1935630.f_25)
	{
		return;
	}
	func_644(&(Local_62.f_1), 35f, 1f, 1);
	func_323(&(Local_62.f_1), 16777216);
}

void func_269()
{
	switch (iLocal_29)
	{
		case 1:
			if (!__LIB_0__::func_293(44))
			{
				func_645(&(Local_62.f_1), Local_62.f_1021[1 /*63*/]);
			}
			break;
		case 0:
			func_645(&(Local_62.f_1), Local_62.f_1479[0]);
			break;
		case 2:
			func_645(&(Local_62.f_1), Local_62.f_1479[0]);
			break;
		case 3:
			func_645(&(Local_62.f_1), Local_62.f_1479[0]);
			break;
	}
}

void func_272()
{
	if (__LIB_0__::func_51(&(Local_62.f_170.f_13), 64))
	{
		return;
	}
	__LIB_3__::func_158(&(Local_62.f_1.f_26[0 /*11*/]), 1);
	__LIB_3__::func_158(&(Local_62.f_1.f_26[1 /*11*/]), 1);
	func_518(&(Local_62.f_170.f_13), 64);
}

void func_273(var uParam0)
{
	int iVar0;
	int iVar1;
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_90))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_90, true, 0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_492(1);
	if (uParam0->f_84 < 0)
	{
		uParam0->f_84 = iVar0;
	}
	if (iVar0 > uParam0->f_84)
	{
		iVar1 = (iVar0 - uParam0->f_84);
		if (__LIB_4__::func_807(0))
		{
		}
		else
		{
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("LOOTED"), joaat("CASH")), iVar1);
		}
		uParam0->f_84 = iVar0;
	}
}

void func_274(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (uParam0->f_50 == 2)
	{
		iVar0 = func_654(uParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			func_655(uParam0);
			return;
		}
	}
	switch (uParam0->f_50)
	{
		case 0:
			iVar1 = func_656(uParam0);
			iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			uParam0->f_91 = ENTITY::_0x6F3068258A499E52(iVar2, uParam0->f_64, 7);
			if (uParam0->f_91 != 0)
			{
				uParam0->f_50 = 1;
			}
			break;
		case 1:
			if (ENTITY::_0x1FF441D7954F8709(uParam0->f_91))
			{
				func_655(uParam0);
				if (func_313(uParam0, 33554432))
				{
					uParam0->f_50 = 2;
				}
			}
			break;
		case 2:
			break;
	}
}

bool func_275()
{
	if (func_60(131072))
	{
		return false;
	}
	if (func_44(2))
	{
		return false;
	}
	return false;
}

bool func_276(var uParam0, float fParam1, bool bParam2, char* sParam3)
{
	if (!__LIB_0__::func_75(uParam0))
	{
		__LIB_1__::func_148(uParam0);
	}
	else if (bParam2)
	{
		if (__LIB_1__::func_313(uParam0, fParam1))
		{
			return true;
		}
	}
	else if (__LIB_1__::func_285(uParam0, fParam1))
	{
		return true;
	}
	return false;
}

void func_277(int iParam0, char* sParam1, bool bParam2, char* sParam3)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0, sParam1, bParam2, false);
}

bool func_280(int iParam0, char* sParam1, float fParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return false;
	}
	if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0) > fParam2)
	{
		return true;
	}
	return false;
}

void func_282(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam3, false);
	}
	WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iParam4, 100, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iParam4, true, 0, false, false);
	TASK::TASK_AIM_GUN_AT_ENTITY(iParam0, iParam2, -1, true, 1);
	__LIB_2__::func_73(iParam0, &iParam1, joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
}

void func_283()
{
	if ((Local_62.f_1620 % 10) != 0)
	{
		return;
	}
	if (Local_62.f_1292.f_1)
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_62.f_1292))
	{
		Local_62.f_1292.f_1 = 1;
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_661()))
	{
		Local_62.f_1292.f_1 = 1;
		return;
	}
	if (!__LIB_14__::func_606(Global_35, Local_62.f_1292))
	{
		return;
	}
	__LIB_8__::func_336(&(Local_62.f_1518), func_661(), Local_62.f_170, Global_35, 0, 0, 1, 1);
	Local_62.f_1292.f_1 = 1;
}

bool func_284()
{
	if (!__LIB_2__::func_1(Local_62.f_170, 0, 1))
	{
		return true;
	}
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_SHOP_ROBBED"), Global_36, 4f))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_62.f_170, false);
		return true;
	}
	return false;
}

void func_285()
{
	switch (iLocal_29)
	{
		case 1:
			break;
		case 0:
			func_128(&(Local_62.f_1512[1]), "SPI_SDNGUN_BACK_DOOR_KNOCK");
			func_128(&(Local_62.f_1512[0]), "SPI_SDNGUN_BACK_DOOR_PEEK");
			break;
		case 2:
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_STR_GEN_BSMT_PEEK", false);
			break;
		case 3:
			break;
	}
}

void func_287(bool bParam0)
{
	__LIB_14__::func_673(Local_62.f_170, bParam0);
}

void func_288(int iParam0, int iParam1)
{
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
	}
	if (!__LIB_0__::func_29(iParam1))
	{
		return;
	}
	if (!__LIB_2__::func_763(iParam1, 0))
	{
		return;
	}
	if (!__LIB_0__::func_122(iParam1))
	{
		return;
	}
	__LIB_2__::func_753(iParam1, 0, 1, 0, 0);
}

bool func_289(var uParam0, bool bParam1)
{
	int iVar0;
	if (__LIB_2__::func_1(Global_35, 0, 1))
	{
		if (__LIB_3__::func_138(Global_35, joaat("PROP_PLAYER_CASH_REGISTER")) || __LIB_3__::func_138(Global_35, joaat("PROP_PLAYER_CASH_REGISTER_CLERK_OPENED")))
		{
			iVar0 = func_654(uParam0);
			func_668(uParam0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[0]))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_2[0]));
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[1]))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_2[1]));
				}
			}
			if (bParam1)
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 384, false);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!ENTITY::_IS_ENTITY_FROZEN(iVar0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
				}
			}
			return true;
		}
	}
	return false;
}

bool func_290()
{
	func_311(&Local_62);
	func_334();
	if (func_669())
	{
		if (func_313(&(Local_62.f_1), 256) || func_313(&(Local_62.f_1), 65536))
		{
			if (!LAW::_0x856CE8FDE2416602(Local_62.f_170))
			{
				return true;
			}
		}
		else
		{
			__LIB_2__::func_754(Local_62, 1);
			__LIB_14__::func_304(1);
			func_309(&(Local_62.f_1), __LIB_1__::func_921(Local_62), Local_62.f_170.f_1, Local_62.f_1284);
			func_91(268435456);
			func_285();
			__LIB_11__::func_627(8);
			return false;
		}
	}
	if (func_275() && func_670())
	{
		return true;
	}
	return false;
}

void func_293(var uParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	if ((MISC::IS_STRING_NULL_OR_EMPTY(sParam1) || MISC::IS_STRING_NULL_OR_EMPTY(sParam2)) || MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		sVar0 = __LIB_14__::func_661();
		sVar1 = __LIB_14__::func_662();
		sVar2 = __LIB_14__::func_663();
	}
	else
	{
		sVar0 = sParam1;
		sVar1 = sParam2;
		sVar2 = sParam3;
	}
	if (!uParam0->f_87 || bParam4)
	{
		if (uParam0->f_75 < 0f)
		{
			uParam0->f_75 = __LIB_0__::func_36();
		}
		func_323(uParam0, 4194304);
	}
	func_668(uParam0, 1);
	__LIB_14__::func_677(*uParam0, sVar0, sVar1, sVar2, 1);
	func_323(uParam0, 16384);
}

bool func_295()
{
	switch (iLocal_29)
	{
		case 1:
			if (__LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 128))
			{
				return false;
			}
			if (ENTITY::IS_ENTITY_DEAD(Local_62.f_390[0 /*126*/]))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_296(int iParam0, int iParam1)
{
	func_676(iParam0);
	if (iParam1 == 29 && __LIB_3__::func_751(17))
	{
		__LIB_7__::func_448(__LIB_3__::func_918(17), 1);
	}
}

void func_297(int iParam0, var uParam1, var uParam2, int iParam3, vector3 vParam4, bool bParam7, bool bParam8)
{
	uParam2->f_3 = uParam1;
	uParam2->f_7 = iParam3;
	*uParam2 = { vParam4 };
	uParam2->f_13 = 1;
	uParam2->f_14 = 1;
	uParam2->f_15 = 2;
	uParam2->f_8 = 4;
	uParam2->f_19 = 3;
	uParam2->f_21 = 3;
	if (bParam7)
	{
		uParam2->f_17 = 0;
		uParam2->f_18 = 2;
	}
	else
	{
		uParam2->f_17 = 0;
		uParam2->f_18 = 0;
	}
	if (bParam8)
	{
		uParam2->f_22 = 4;
		uParam2->f_20 = 4;
	}
	_NAMESPACE29::_0x66F9EB44342BB4C5(iParam0, uParam2);
}

void func_298(bool bParam0)
{
	__LIB_0__::func_267(bParam0);
}

void func_299(bool bParam0)
{
	__LIB_14__::func_674(Local_62.f_170, bParam0);
}

void func_300(var uParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return;
	}
	PED::_0xC163DAC52AC975D3(*uParam0, 32);
}

void func_301(int iParam0)
{
	int iVar0;
	if (!func_44(2))
	{
		func_29(131072);
	}
	iVar0 = __LIB_1__::func_921(Local_62);
	if (func_680(iVar0, Global_35, 1, iParam0))
	{
	}
}

void func_303()
{
	char* sVar0;
	switch (iLocal_29)
	{
		case 1:
			sVar0 = "Robberies_Shopkeeper_Group";
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_62.f_170, sVar0, 0f);
			break;
		default:
			break;
	}
}

void func_304()
{
	char* sVar0;
	switch (iLocal_29)
	{
		case 1:
			sVar0 = "Robberies_Shop_Hold_Up_Scene";
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sVar0))
			{
				AUDIO::START_AUDIO_SCENE(sVar0);
			}
			break;
		default:
			break;
	}
}

void func_305()
{
	switch (iLocal_29)
	{
		case 1:
			func_19("SR_RHODES_GUN_START", 32);
			break;
		case 0:
			func_19("SR_ST_DENIS_GUN_START", 32);
			break;
		case 2:
			func_19("SR_STRAWBERRY_GEN_START", 32);
			break;
		case 3:
			func_19("SR_VALENTINE_DOCTOR_START", 32);
			break;
	}
}

void func_306()
{
	switch (iLocal_29)
	{
		case 3:
			func_681();
			break;
	}
}

bool func_308(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
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
		if (Global_1935630.f_26 && __LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
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
					if ((__LIB_4__::func_172(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && __LIB_11__::func_404(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
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
				if ((__LIB_4__::func_172(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && __LIB_11__::func_404(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
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
				if (__LIB_2__::func_228(iParam0, uParam2))
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

void func_309(var uParam0, int iParam1, int iParam2, int iParam3)
{
	__LIB_17__::func_921(&(uParam0->f_7[0 /*18*/]), &(uParam0->f_26));
	__LIB_18__::func_851(*uParam0);
	if (func_712(uParam0))
	{
		__LIB_2__::func_357(*uParam0, Global_36, 3, 0, 3);
		func_714(uParam0, &iParam2, iParam3, joaat("WEAPON_REVOLVER_CATTLEMAN"));
	}
	else
	{
		__LIB_2__::func_357(*uParam0, Global_36, 5, 0, 3);
		__LIB_14__::func_608(4194304);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 44, false);
		__LIB_18__::func_852(*uParam0, 1, 0, 0, 1, 0);
		if (!LAW::_0x0EAF918F751F27BA(*uParam0))
		{
			PED::_0x935CF6E42BAF7F4D(*uParam0);
			TASK::_TASK_SMART_FLEE_STYLE_PED(*uParam0, Global_35, 3, 176128, -1082130432 /* Float: -1f */, -1, 0);
		}
	}
}

bool func_310()
{
	switch (iLocal_29)
	{
		case 1:
			if (!func_716(&(Local_62.f_1), &(Local_62.f_1465), 29f, Local_62, __LIB_14__::func_650(Local_62), &(Local_62.f_1021[1 /*63*/])))
			{
				return false;
			}
			break;
		case 0:
			if (!func_716(&(Local_62.f_1), &(Local_62.f_1465), 29f, Local_62, __LIB_14__::func_650(Local_62), &(Local_62.f_1479[0])))
			{
				return false;
			}
			break;
		case 2:
			if (!func_716(&(Local_62.f_1), &(Local_62.f_1465), 29f, Local_62, __LIB_14__::func_650(Local_62), &(Local_62.f_1479[0])))
			{
				return false;
			}
			break;
		case 3:
			if (!func_716(&(Local_62.f_1), &(Local_62.f_1465), 29f, Local_62, __LIB_14__::func_650(Local_62), &(Local_62.f_1479[0])))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_311(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bVar0 = false;
	bVar1 = false;
	if (func_60(8388608))
	{
		bVar0 = true;
		bVar1 = true;
	}
	iParam0->f_170.f_119 = func_717(&(iParam0->f_1), iParam0->f_1284, func_60(8388608), bVar0, 1069547520 /* Float: 1.5f */, bVar1, 40f);
}

void func_312()
{
	if (!func_82())
	{
		return;
	}
	if (func_65())
	{
		return;
	}
	func_344();
	func_718();
	func_719();
}

bool func_313(var uParam0, int iParam1)
{
	return (uParam0->f_52 && iParam1) != 0;
}

void func_314(var uParam0)
{
	if (uParam0->f_53.f_6)
	{
		return;
	}
	if (__LIB_0__::func_75(&(uParam0->f_53.f_3)))
	{
		if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 1, 0))
		{
			__LIB_0__::func_37(&(uParam0->f_53.f_3));
		}
	}
	if (__LIB_1__::func_285(&(uParam0->f_53.f_3), uParam0->f_53.f_2) && __LIB_2__::func_800())
	{
		__LIB_19__::func_511(uParam0, uParam0->f_53, 0, uParam0->f_53.f_1, 1, 0);
		uParam0->f_53.f_6 = 1;
	}
}

void func_315(var uParam0)
{
	if (func_313(uParam0, 1048576))
	{
		return;
	}
	if (func_313(uParam0, 4096) || func_313(uParam0, 16))
	{
		if (Global_1935630.f_13)
		{
			func_323(uParam0, 1048576);
		}
	}
}

bool func_316()
{
	if (!func_60(8388608))
	{
		return false;
	}
	switch (iLocal_44)
	{
		case 0:
			if (!func_313(&(Local_62.f_1), 16384))
			{
				return false;
			}
			__LIB_11__::func_643(2);
			break;
		case 1:
			if (!func_60(524288))
			{
				return false;
			}
			__LIB_11__::func_643(2);
			break;
		case 2:
			if (!func_723())
			{
				func_397(&(Local_62.f_1), 32768);
				__LIB_11__::func_643(1);
				return false;
			}
			if (func_724())
			{
				func_397(&(Local_62.f_1), 32768);
				func_39(131072);
				__LIB_11__::func_643(3);
				return false;
			}
			if (!func_725())
			{
				return false;
			}
			__LIB_11__::func_643(3);
			func_39(65536);
			return true;
		case 3:
			break;
	}
	return false;
}

void func_318()
{
	switch (iLocal_29)
	{
		case 1:
			func_727();
			break;
		case 0:
			func_728();
			break;
		case 2:
			func_729();
			break;
		case 3:
			func_730();
			break;
	}
}

bool func_322(var uParam0)
{
	if (((!TASK::IS_PED_ACTIVE_IN_SCENARIO(*uParam0, 1) && !TASK::_0x0C3CB2E600C8977D(*uParam0, 1)) && uParam0->f_75 > 0f) && (__LIB_0__::func_36() - uParam0->f_75) >= 1f)
	{
		return true;
	}
	return false;
}

void func_323(var uParam0, int iParam1)
{
	uParam0->f_52 = (uParam0->f_52 || iParam1);
}

bool func_324(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_1__::func_921(uParam0->f_51);
	if (iVar0 == 6 || uParam0->f_51 == 82)
	{
		if (__LIB_0__::func_12() == 105 && __LIB_2__::func_230())
		{
			return false;
		}
		else if (!uParam0->f_87)
		{
			uParam0->f_87 = 1;
		}
	}
	if (uParam0->f_87)
	{
		if ((__LIB_2__::func_227(0f, 1, *uParam0, 1) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(*uParam0, 1)) && PED::IS_PED_FACING_PED(*uParam0, Global_35, 45f))
		{
			return true;
		}
	}
	return false;
}

void func_325()
{
	if (iLocal_29 == 1)
	{
		__LIB_0__::func_325(&(Local_62.f_390[0 /*126*/].f_1));
	}
}

bool func_326()
{
	if (__LIB_2__::func_1(Local_62.f_170, 0, 1))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(Local_62.f_170, 518218985, true) == 1)
		{
			return true;
		}
	}
	return false;
}

bool func_327()
{
	if (func_733(Global_35))
	{
		return true;
	}
	return false;
}

void func_328()
{
	TASK::CLEAR_PED_TASKS(Local_62.f_170, true, false);
	TASK::TASK_SMART_FLEE_PED(Local_62.f_170, Global_35, 1000f, -1, 0, 3f, 0);
}

void func_329(int iParam0)
{
	if (!__LIB_2__::func_1(Local_62.f_170, 0, 1))
	{
		return;
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_62.f_170, joaat("REL_COP"));
	PED::_0xFC3DB99C8144CD81(Local_62.f_170, Local_62.f_1284, 0, 0, 0);
	TASK::TASK_COMBAT_PED(Local_62.f_170, iParam0, 0, 0);
}

void func_331()
{
	func_735(&(Local_62.f_1616[0]));
}

void func_332()
{
	char* sVar0;
	if (func_736(&(Local_62.f_1), 3f))
	{
		sVar0 = "PLAYER_HOLDUP_ROB_FAR";
	}
	else
	{
		sVar0 = "PLAYER_HOLDUP_ROB";
	}
	__LIB_2__::func_478(Global_35, Local_62.f_170, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
}

void func_333()
{
	if (func_44(1024))
	{
		func_737();
		return;
	}
	if (!__LIB_2__::func_227(-2f, 1, 0, 0))
	{
		return;
	}
	__LIB_0__::func_37(&(Local_62.f_170.f_214));
	if (iLocal_29 != 0 && iLocal_29 != 1)
	{
		__LIB_2__::func_478(Local_62.f_170, Global_35, "HOLDUP_DONT_KILL_ME", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	func_91(1024);
}

void func_334()
{
	if (!func_313(&(Local_62.f_1), 256))
	{
		if (__LIB_14__::func_653(&(Local_62.f_1), Local_62.f_170.f_119))
		{
			func_91(64);
			if (func_60(8388608))
			{
				__LIB_2__::func_411(&(Local_62.f_1.f_26[1 /*11*/]), 0, 0);
				func_397(&(Local_62.f_1), 32768);
			}
			func_323(&(Local_62.f_1), 256);
		}
	}
	if (!func_60(8388608))
	{
		return;
	}
	if (func_313(&(Local_62.f_1), 65536))
	{
		return;
	}
	if (!func_313(&(Local_62.f_1), 32768))
	{
		return;
	}
	if (!func_740(&(Local_62.f_1), Local_62.f_170.f_119))
	{
		return;
	}
	func_397(&(Local_62.f_1), 32768);
	func_323(&(Local_62.f_1), 65536);
	func_741(&(Local_62.f_1), 0, 1);
}

bool func_335(int iParam0)
{
	return (Local_62.f_1627 && iParam0) != 0;
}

void func_337(var uParam0, var uParam1, int iParam2, vector3 vParam3, int iParam6)
{
	uParam0->f_3 = uParam1;
	uParam0->f_7 = iParam2;
	*uParam0 = { vParam3 };
	uParam0->f_19 = 4;
	uParam0->f_21 = 4;
	uParam0->f_17 = iParam6;
	uParam0->f_8 = 4;
	uParam0->f_4 = 21030;
}

void func_338()
{
	if (func_44(256))
	{
		return;
	}
	if (!func_276(&(Local_62.f_170.f_214), 4f, 0, "shoprob.clerkData.timerGeneric"))
	{
		return;
	}
	__LIB_0__::func_37(&(Local_62.f_170.f_214));
	__LIB_2__::func_478(Local_62.f_170, Global_35, "HOLDUP_REGISTER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	func_91(256);
}

bool func_339(var uParam0)
{
	if (!func_276(&(Local_62.f_1450), 3f, 1, "shopRob.timerGeneric"))
	{
		return false;
	}
	__LIB_0__::func_37(&(Local_62.f_1450));
	func_742(uParam0);
	func_743(5);
	return true;
}

bool func_340(var uParam0)
{
	if (!__LIB_2__::func_1(*uParam0, 0, 1))
	{
		return false;
	}
	switch (uParam0->f_9)
	{
		case 5:
			if (!ENTITY::IS_ENTITY_AT_COORD(*uParam0, Local_62.f_1.f_60, 0.3f, 0.3f, 2f, false, true, 0))
			{
				if (!__LIB_14__::func_642(*uParam0, 1435919172, 1))
				{
					func_743(6);
					return false;
				}
				return false;
			}
			func_744();
			return true;
		case 6:
			if (PED::IS_PED_RAGDOLL(*uParam0))
			{
				return false;
			}
			if (!func_276(&(Local_62.f_1450), 1f, 0, "shopRob.timerGeneric"))
			{
				return false;
			}
			func_742(uParam0);
			func_743(7);
			break;
		case 7:
			if (!__LIB_14__::func_642(*uParam0, 1435919172, 1))
			{
				func_743(6);
				return false;
			}
			func_743(5);
			break;
	}
	return false;
}

bool func_341(var uParam0)
{
	if (func_745(uParam0))
	{
		__LIB_14__::func_304(0);
		func_746(uParam0);
		return true;
	}
	return false;
}

bool func_342(var uParam0)
{
	char* sVar0;
	sVar0 = func_747(uParam0);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_82[0]))
	{
		return false;
	}
	ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_82[0], sVar0);
	if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_82[0], sVar0))
	{
		return true;
	}
	return false;
}

bool func_343(var uParam0, bool bParam1)
{
	var uVar0;
	__LIB_14__::func_649(1);
	if (__LIB_2__::func_448(*uParam0, joaat("BSWITCHTOEXIT"), "bSwitchToExit", 1, 1067030938 /* Float: 1.2f */, 1))
	{
		if (!func_313(uParam0, 4))
		{
			if (bParam1)
			{
				__LIB_14__::func_679(uParam0, &uVar0, 1114636288 /* Float: 60f */, -1);
			}
			func_323(uParam0, 4);
		}
		if (func_313(uParam0, 16384))
		{
			func_397(uParam0, 16384);
		}
		return true;
	}
	return false;
}

void func_344()
{
	char* sVar0;
	switch (iLocal_29)
	{
		case 1:
			sVar0 = "Robberies_Shop_Hold_Up_Scene";
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sVar0))
			{
				AUDIO::STOP_AUDIO_SCENE(sVar0);
			}
			break;
		default:
			break;
	}
}

void func_345()
{
	char* sVar0;
	switch (iLocal_29)
	{
		case 1:
			sVar0 = "Robberies_Shop_Take_Money_Scene";
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sVar0))
			{
				AUDIO::START_AUDIO_SCENE(sVar0);
			}
			break;
		default:
			break;
	}
}

void func_346(var uParam0)
{
	char* sVar0;
	__LIB_14__::func_665(uParam0);
	sVar0 = func_747(uParam0);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_82[0], sVar0, true);
}

void func_347()
{
	if (func_44(512))
	{
		return;
	}
	if (func_60(262144))
	{
		__LIB_0__::func_37(&(Local_62.f_170.f_214));
		func_91(512);
		return;
	}
	if (!func_276(&(Local_62.f_170.f_214), 10f, 0, "shoprob.clerkData.timerGeneric"))
	{
		return;
	}
	if (!__LIB_2__::func_227(-2f, 1, 0, 0))
	{
		return;
	}
	__LIB_0__::func_37(&(Local_62.f_170.f_214));
	__LIB_2__::func_478(Local_62.f_170, Global_35, "HOLDUP_WAITING_ROBBERY", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	func_91(512);
}

void func_348()
{
	if (func_44(2048))
	{
		return;
	}
	if (!func_60(262144))
	{
		return;
	}
	if (!func_276(&(Local_62.f_170.f_214), 15f, 0, "shoprob.clerkData.pedData.pedIndex"))
	{
		return;
	}
	if (!__LIB_2__::func_227(-2f, 1, 0, 0))
	{
		return;
	}
	__LIB_0__::func_37(&(Local_62.f_170.f_214));
	__LIB_2__::func_478(Local_62.f_170, Global_35, "HOLDUP_DONE_GO_AWAY", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	func_91(2048);
}

float func_349()
{
	switch (iLocal_29)
	{
		case 1:
			return 0.6121f;
		case 0:
			return 0.0733f;
		case 2:
			return 0.6264f;
		case 3:
			return 0.6757f;
		default:
			break;
	}
	return 0.95f;
}

void func_350()
{
	if (!func_60(8388608))
	{
		return;
	}
	if (func_60(2048))
	{
		return;
	}
	func_29(524288);
	func_561(64);
	__LIB_2__::func_411(&(Local_62.f_1.f_26[1 /*11*/]), 1, 0);
	func_323(&(Local_62.f_1), 32768);
	func_29(2048);
}

bool func_352(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, int iParam29)
{
	if (func_313(uParam0, 4) && func_308(*uParam0, 0, &uParam1, &iParam29, 0, 0))
	{
		if (__LIB_14__::func_651(iParam29))
		{
			return true;
		}
	}
	return false;
}

void func_354()
{
	float fVar0;
	int iVar1;
	iVar1 = __LIB_14__::func_650(Local_62);
	if (func_313(&(Local_62.f_1), 32))
	{
		fVar0 = 0f;
	}
	else if (func_313(&(Local_62.f_1), 16))
	{
		fVar0 = 5f;
	}
	else
	{
		fVar0 = 23f;
	}
	switch (iLocal_29)
	{
		case 1:
			if (!__LIB_0__::func_293(44))
			{
				func_753(&(Local_62.f_1021[1 /*63*/]), iVar1, fVar0);
			}
			break;
		case 0:
			if (!func_221(-2147483648))
			{
				func_753(&(Local_62.f_1479[0]), iVar1, fVar0);
			}
			break;
		case 2:
			func_753(&(Local_62.f_1479[0]), iVar1, fVar0);
			break;
		case 3:
			func_753(&(Local_62.f_1479[0]), iVar1, fVar0);
			break;
	}
}

void func_355()
{
	if (!__LIB_0__::func_75(&(Local_62.f_1468)))
	{
		return;
	}
	if (!__LIB_1__::func_285(&(Local_62.f_1468), 0.75f))
	{
		return;
	}
	AUDIO::STOP_PED_SPEAKING(Local_62.f_170, true);
	__LIB_3__::func_648(Local_62.f_170, 0);
	Local_62.f_1632 = 1;
	__LIB_0__::func_37(&(Local_62.f_1468));
}

void func_356()
{
	if (__LIB_3__::func_610(Local_62, 262144))
	{
		return;
	}
	__LIB_0__::func_15(__LIB_0__::func_38(joaat("ROB_COMPLETED"), joaat("SHOP")), 1);
	__LIB_4__::func_261(Local_62, 262144);
	__LIB_9__::func_786(0, 0);
}

void func_358(bool bParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_120(Local_62.f_170.f_8);
	if (!PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_60(-2147483648))
		{
			PERSCHAR::_0x406808610220405B(iVar0);
			func_29(-2147483648);
		}
	}
	else if (func_60(-2147483648))
	{
		PERSCHAR::_0xA2B18FF8D39F6D87(iVar0);
		func_31(-2147483648);
	}
}

void func_359()
{
	switch (iLocal_29)
	{
		case 1:
			func_757();
			break;
		case 2:
			func_758();
			break;
	}
}

void func_360()
{
	switch (iLocal_29)
	{
		case 1:
			__LIB_14__::func_644(26, 2048);
			break;
		case 2:
			__LIB_14__::func_644(18, 2048);
			break;
		default:
			break;
	}
}

void func_361()
{
	char* sVar0;
	switch (iLocal_29)
	{
		case 1:
			sVar0 = "Robberies_Occlusion_Damping";
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_62.f_170, sVar0, 0f);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_62.f_390[0 /*126*/], sVar0, 0f);
			break;
		default:
			break;
	}
}

bool func_363()
{
	switch (iLocal_29)
	{
		case 0:
			if (func_760(&(Local_62.f_170), &(Local_62.f_390[0 /*126*/])))
			{
				return true;
			}
			break;
		case 1:
			if (func_761(&(Local_62.f_170)))
			{
				return true;
			}
			break;
		case 2:
			if (func_762(&(Local_62.f_170)))
			{
				return true;
			}
			break;
		case 3:
			if (func_763(&(Local_62.f_170), &(Local_62.f_390[0 /*126*/]), &(Local_62.f_390[2 /*126*/])))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_364()
{
	switch (iLocal_29)
	{
		case 1:
			func_764();
			break;
	}
}

void func_365(var uParam0)
{
	func_765();
	switch (iLocal_29)
	{
		case 0:
			func_766(&(Local_62.f_170), &(Local_62.f_390[0 /*126*/]), &(Local_62.f_390[1 /*126*/]), &(Local_62.f_390[2 /*126*/]), &(Local_62.f_390[3 /*126*/]), &(Local_62.f_390[4 /*126*/]), uParam0);
			break;
		case 1:
			func_767(&(Local_62.f_170), &(Local_62.f_390[0 /*126*/]));
			break;
		case 2:
			func_768(&(Local_62.f_170));
			break;
		case 3:
			func_769(&(Local_62.f_390[0 /*126*/]), &(Local_62.f_390[1 /*126*/]), &(Local_62.f_390[2 /*126*/]), &(Local_62.f_390[3 /*126*/]));
			func_770();
			break;
	}
}

bool func_366()
{
	return func_771(Global_35);
}

bool func_367()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_55)
	{
		if (func_308(Local_62.f_390[iVar0 /*126*/], 0, &(Local_62.f_124), &(Local_62.f_152), 0, 0))
		{
			func_518(&(Local_62.f_390[iVar0 /*126*/].f_9), 8192);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_368(bool bParam0)
{
	if (bParam0)
	{
		PED::SET_CREATE_RANDOM_COPS(true);
		MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(15, false);
		MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(6, false);
	}
	else
	{
		__LIB_3__::func_688(Global_36, 300f, 0);
		PED::SET_CREATE_RANDOM_COPS(false);
		MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(15, true);
		MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(6, true);
		PERSCHAR::_0xE0E65E0D261F7507(__LIB_0__::func_120(3));
		__LIB_3__::func_229(3);
		__LIB_1__::func_949(3, 0);
	}
}

bool func_374(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	if (__LIB_1__::func_372(Global_35, 0) == joaat("WEAPON_UNARMED"))
	{
		return false;
	}
	if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM")))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	}
	else
	{
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), true);
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	iVar1 = __LIB_0__::func_17(iParam0);
	if (__LIB_14__::func_681(iParam0) && !PLAYER::_0x3EE1F7A8C32F24E1(iVar0, &iVar1, false, false))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, bParam1);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
		return true;
	}
	if (PED::_IS_PED_HOGTIED(iParam0) || PED::_IS_PED_LASSOED(iParam0))
	{
		__LIB_14__::func_608(65536);
		return true;
	}
	return false;
}

void func_376(var uParam0, int* iParam1, int iParam2, int iParam3)
{
	WEAPON::REMOVE_ALL_PED_WEAPONS(*uParam0, true, true);
	__LIB_4__::func_7(*uParam0, iParam3, -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	__LIB_14__::func_672(uParam0, iParam1, iParam2);
}

bool func_377(var uParam0)
{
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam0, Global_35, 0, -1f, -1f, -1f);
	__LIB_1__::func_936(uParam0->f_51, 2048);
	func_782(uParam0, 1);
	return true;
}

void func_378()
{
	HUD::_TEXT_DATABASE_REQUEST("SHRB");
	switch (iLocal_29)
	{
		case 0:
			HUD::_TEXT_DATABASE_REQUEST("SRNGAUD");
			break;
		case 1:
			HUD::_TEXT_DATABASE_REQUEST("SRRGAUD");
			break;
		case 2:
			HUD::_TEXT_DATABASE_REQUEST("SRSGAUD");
			break;
		case 3:
			HUD::_TEXT_DATABASE_REQUEST("SRVDAUD");
			break;
	}
}

bool func_382()
{
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("SHRB"))
	{
		return false;
	}
	switch (iLocal_29)
	{
		case 0:
			if (!HUD::_TEXT_DATABASE_HAS_LOADED("SRNGAUD"))
			{
				return false;
			}
			break;
		case 1:
			if (!HUD::_TEXT_DATABASE_HAS_LOADED("SRRGAUD"))
			{
				return false;
			}
			break;
		case 2:
			if (!HUD::_TEXT_DATABASE_HAS_LOADED("SRSGAUD"))
			{
				return false;
			}
			break;
		case 3:
			if (!HUD::_TEXT_DATABASE_HAS_LOADED("SRVDAUD"))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_385()
{
	func_587(&(Local_62.f_1284), -1791.912f, -385.9921f, 159.101f, 0f, 0f, -125.1316f, 6.2f, 8.788111f, 6.267331f, "volShop");
	Local_62.f_1.f_90 = Local_62.f_1284;
	POPULATION::_0x18262CAFEBB5FBE1(Local_62.f_1284, 10208, 540672, 0, -1, -1, 2);
	POPULATION::_0xB56D41A694E42E86(Local_62.f_1284, 10208, 540672, 0, -1, -1, 2);
}

void func_386()
{
	Local_62.f_1247[1 /*2*/] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("VOL_STRGEN_HEAD_TURN_WINDOW_PEEK");
	VOLUME::_0x39816F6F94F385AD(Local_62.f_1247[1 /*2*/], -1786.382f, -382.6097f, 158.3665f, 0f, 0f, -36.00836f, 6.435352f, 2.245356f, 2.63436f);
	VOLUME::_0x39816F6F94F385AD(Local_62.f_1247[1 /*2*/], -1787.392f, -383.9998f, 157.6915f, 0f, 0f, -36.00836f, 3.441334f, 2.245356f, 2.63436f);
}

void func_387(var uParam0)
{
	if (func_65())
	{
		return;
	}
	switch (iLocal_26)
	{
		case 18:
			if (func_60(16))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_62.f_1226[0]))
				{
					TASK::SET_SCENARIO_TYPE_ENABLED(func_783(), true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1840199757, true);
					__LIB_14__::func_614(19);
				}
			}
			break;
		case 19:
			if (__LIB_3__::func_138(Global_35, MISC::GET_HASH_KEY(func_783())))
			{
				func_433(0);
				func_608();
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
				WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
				if (__LIB_0__::func_399(Global_35, 1, 0, 1) == joaat("WEAPON_KIT_BINOCULARS"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
				}
				__LIB_14__::func_614(21);
			}
			else if (__LIB_14__::func_606(Global_35, Local_62.f_1247[1 /*2*/]))
			{
				if (!TASK::_DOES_SCENARIO_POINT_EXIST(Local_62.f_1388))
				{
					func_785();
				}
			}
			else if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_62.f_1388))
			{
				TASK::_DELETE_SCENARIO_POINT(Local_62.f_1388);
			}
			break;
		case 21:
			func_786();
			func_603(1);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
			PED::SET_PED_RESET_FLAG(Global_35, 175, true);
			if (!func_221(4))
			{
				if (__LIB_14__::func_620(Global_35, func_787()))
				{
					func_224(4);
				}
			}
			if (__LIB_14__::func_620(Global_35, "WipeIdleMiddle"))
			{
				func_788(uParam0);
				__LIB_14__::func_614(36);
				if (STREAMING::_0xFC464598F6EE97B0())
				{
					STREAMING::_0x31108BB5715D035F();
				}
				iLocal_1773 = joaat("STR_03_P_MILLWINDOW_D");
				func_786();
			}
			else if (__LIB_14__::func_620(Global_35, "WipeExitStart"))
			{
				__LIB_14__::func_614(36);
				iLocal_1773 = joaat("STR_03_P_MILLWINDOW_D");
				func_786();
			}
			else if (__LIB_14__::func_620(Global_35, "WipeIdleStart"))
			{
				iLocal_1773 = joaat("STR_03_P_MILLWINDOW_D");
				func_786();
			}
			break;
		case 36:
			func_786();
			func_603(1);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
			PED::SET_PED_RESET_FLAG(Global_35, 175, true);
			if (__LIB_14__::func_620(Global_35, "WipeExitStart"))
			{
				__LIB_14__::func_614(37);
				iLocal_1773 = joaat("STR_03_P_MILLWINDOW_D");
				func_786();
			}
			break;
		case 37:
			func_786();
			func_433(1);
			func_432(1, 0, 1);
			func_788(uParam0);
			__LIB_16__::func_215(2, 8);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
			func_789(&(Local_62.f_1368), -1791.912f, -385.9921f, 159.101f, 0f, 0f, -125.1316f, 6.2f, 8.788111f, 6.267331f, 1, 0, 524288);
			if (VOLUME::_DOES_VOLUME_EXIST(Local_62.f_1368))
			{
				__LIB_3__::func_378(Local_62.f_1368, 0);
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(Local_62.f_1376))
			{
				Local_62.f_1376 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), -1790.353f, -389.5667f, 159.3297f, 0f, 0f, -35f, 2f, 2.5f, 5f);
			}
			iLocal_1773 = joaat("STR_03_P_MILLWINDOW_D");
			func_786();
			func_791();
			__LIB_14__::func_614(50);
			break;
		case 50:
			func_786();
			if (!__LIB_3__::func_138(Global_35, MISC::GET_HASH_KEY(func_783())))
			{
				TASK::SET_SCENARIO_TYPE_ENABLED(func_783(), false);
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1840199757, false);
				if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_62.f_1512[0]))
				{
					TASK::_DELETE_SCENARIO_POINT(Local_62.f_1512[0]);
				}
			}
			__LIB_14__::func_614(53);
			break;
		case 53:
			break;
	}
}

bool func_388()
{
	switch (iLocal_32)
	{
		case 0:
			func_96();
			__LIB_9__::func_741(1);
			return false;
		case 1:
			if (func_275())
			{
				__LIB_9__::func_741(16);
			}
			else if (func_60(256))
			{
				__LIB_9__::func_741(16);
			}
			else
			{
				func_39(128);
				__LIB_9__::func_741(16);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

void func_389()
{
	func_587(&(Local_62.f_1247[1 /*2*/]), -287.972f, 820.2338f, 119.601f, 0f, 0f, 9.583434f, 25.76275f, 19.94318f, 11.1f, "VOL_VALDOC_LOAD_COUNT_CASH_SCENE");
}

bool func_390()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_275())
			{
				__LIB_9__::func_741(16);
			}
			else
			{
				__LIB_9__::func_741(16);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

void func_391()
{
	if (func_82())
	{
		return;
	}
	if (!func_62(128))
	{
		return;
	}
	switch (iLocal_36)
	{
		case 0:
			if (!__LIB_14__::func_606(Global_35, Local_62.f_1247[1 /*2*/]))
			{
				return;
			}
			__LIB_9__::func_790(Local_62.f_390[0 /*126*/].f_6);
			func_794(1, &iLocal_36);
			return;
		case 1:
			__LIB_9__::func_790(joaat("P_COINSTACK01"));
			__LIB_9__::func_790(joaat("P_COINSTACK02"));
			func_794(2, &iLocal_36);
			return;
		case 2:
			__LIB_9__::func_790(joaat("P_COIN01X"));
			__LIB_9__::func_790(joaat("P_COIN02X"));
			func_794(3, &iLocal_36);
			return;
		case 3:
			__LIB_9__::func_790(joaat("P_CS_BILLSTACK01X"));
			__LIB_9__::func_790(joaat("P_CS_LEDGER01X"));
			func_794(4, &iLocal_36);
			return;
		case 4:
			__LIB_9__::func_790(joaat("P_MONEYSTACK01X"));
			__LIB_9__::func_790(joaat("P_PEN01X"));
			__LIB_9__::func_790(joaat("P_CHAIR02X"));
			func_794(5, &iLocal_36);
			return;
		case 5:
			func_796(1, func_795(1), 0, "PB_COUNT");
			func_794(6, &iLocal_36);
			return;
		case 6:
			if (__LIB_9__::func_791(Local_62.f_390[0 /*126*/].f_6))
			{
				if (__LIB_2__::func_633(0))
				{
					func_798(joaat("G_M_M_UNICRIMINALS_01"), -1658670882, &(Local_62.f_390[0 /*126*/].f_8));
				}
				else
				{
					func_798(joaat("G_M_M_UNIDUSTER_01"), 1755543207, &(Local_62.f_390[0 /*126*/].f_8));
				}
				func_794(7, &iLocal_36);
			}
			return;
		case 7:
			if (__LIB_9__::func_791(joaat("P_COINSTACK01")) && __LIB_9__::func_791(joaat("P_COINSTACK02")))
			{
				func_794(8, &iLocal_36);
			}
			return;
		case 8:
			if (__LIB_9__::func_791(joaat("P_COIN01X")) && __LIB_9__::func_791(joaat("P_COIN02X")))
			{
				func_794(9, &iLocal_36);
			}
			return;
		case 9:
			if (__LIB_9__::func_791(joaat("P_CS_BILLSTACK01X")) && __LIB_9__::func_791(joaat("P_CS_LEDGER01X")))
			{
				func_794(10, &iLocal_36);
			}
			return;
		case 10:
			if ((__LIB_9__::func_791(joaat("P_MONEYSTACK01X")) && __LIB_9__::func_791(joaat("P_PEN01X"))) && __LIB_9__::func_791(joaat("P_CHAIR02X")))
			{
				func_794(11, &iLocal_36);
			}
			return;
		case 11:
			if (func_799(1) && func_800(&(Local_62.f_390[0 /*126*/].f_8)))
			{
				func_553(Local_62.f_1216[1], "PB_BREAKOUT", "SCENE_VALDOC_COUNTMONEY");
				func_794(12, &iLocal_36);
			}
			return;
		case 12:
			if (func_801())
			{
				func_794(13, &iLocal_36);
			}
			return;
		case 13:
			func_802(&(Local_62.f_1226[2]), joaat("P_CS_BILLSTACK01X"), Local_62.f_390[0 /*126*/].f_2, 0, 1, 0);
			func_794(14, &iLocal_36);
			return;
		case 14:
			func_802(&(Local_62.f_1226[3]), joaat("P_MONEYSTACK01X"), func_803(Local_62.f_390[0 /*126*/].f_2, 0f, vLocal_59), 0, 1, 0);
			func_794(15, &iLocal_36);
			return;
		case 15:
			func_802(&(Local_62.f_1226[4]), joaat("P_COINSTACK01"), Local_62.f_390[0 /*126*/].f_2, 0, 1, 0);
			func_794(16, &iLocal_36);
			return;
		case 16:
			func_802(&(Local_62.f_1226[5]), joaat("P_COINSTACK02"), Local_62.f_390[0 /*126*/].f_2, 0, 1, 0);
			func_794(17, &iLocal_36);
			return;
		case 17:
			func_802(&(Local_62.f_1226[6]), joaat("P_COIN01X"), Local_62.f_390[0 /*126*/].f_2, 0, 1, 0);
			func_794(18, &iLocal_36);
			return;
		case 18:
			func_802(&(Local_62.f_1226[7]), joaat("P_COIN02X"), Local_62.f_390[0 /*126*/].f_2, 0, 1, 0);
			func_794(19, &iLocal_36);
			return;
		case 19:
			func_802(&(Local_62.f_1226[9]), joaat("P_CS_LEDGER01X"), Local_62.f_390[0 /*126*/].f_2, 0, 1, 0);
			func_794(20, &iLocal_36);
			return;
		case 20:
			func_802(&(Local_62.f_1226[1]), joaat("P_CS_BILLSTACK01X"), Local_62.f_390[0 /*126*/].f_2, 0, 1, 0);
			func_794(21, &iLocal_36);
			return;
		case 21:
			func_802(&(Local_62.f_1226[8]), joaat("P_PEN01X"), Local_62.f_390[0 /*126*/].f_2, 0, 1, 0);
			func_794(22, &iLocal_36);
			return;
		case 22:
			if (__LIB_14__::func_613(&(Local_62.f_1226[10]), joaat("P_CHAIR02X"), &(Local_62.f_1241[0]), Local_62.f_390[0 /*126*/].f_2, 4, 0))
			{
				func_392(&(Local_62.f_1226[10]), 1);
				func_794(23, &iLocal_36);
			}
			return;
		case 23:
			if (func_393())
			{
				ANIMSCENE::START_ANIM_SCENE(Local_62.f_1216[1]);
				func_794(26, &iLocal_36);
			}
			return;
		default:
			break;
	}
	func_422(128);
	func_804(&iLocal_36);
}

void func_392(var uParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return;
	}
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, bParam1);
}

bool func_393()
{
	int iVar0;
	char* sVar1;
	iVar0 = Local_62.f_1216[1];
	sVar1 = func_795(1);
	switch (iLocal_33)
	{
		case 0:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar0))
			{
				func_794(1, &iLocal_33);
			}
			return false;
		case 1:
			__LIB_9__::func_798(iVar0, "pedGangCountCash", Local_62.f_390[0 /*126*/], sVar1, 1);
			func_794(2, &iLocal_33);
			return false;
		case 2:
			__LIB_14__::func_621(iVar0, "objCountCoinStack01", Local_62.f_1226[4], sVar1, 1);
			__LIB_14__::func_621(iVar0, "objCountCoinStack02", Local_62.f_1226[5], sVar1, 1);
			func_794(3, &iLocal_33);
			return false;
		case 3:
			__LIB_14__::func_621(iVar0, "objCountCoin01", Local_62.f_1226[6], sVar1, 1);
			__LIB_14__::func_621(iVar0, "objCountCoin02", Local_62.f_1226[7], sVar1, 1);
			func_794(4, &iLocal_33);
			return false;
		case 4:
			__LIB_14__::func_621(iVar0, "objCountPen", Local_62.f_1226[8], sVar1, 1);
			__LIB_14__::func_621(iVar0, "objCountLedger", Local_62.f_1226[9], sVar1, 1);
			func_794(5, &iLocal_33);
			return false;
		case 5:
			__LIB_14__::func_621(iVar0, "objCountMoneyStack01", Local_62.f_1226[1], sVar1, 1);
			__LIB_14__::func_621(iVar0, "objCountMoneyStack02", Local_62.f_1226[2], sVar1, 1);
			__LIB_14__::func_621(iVar0, "objCountMoneyStack03", Local_62.f_1226[3], sVar1, 1);
			func_794(6, &iLocal_33);
			return false;
		case 6:
			__LIB_14__::func_621(iVar0, "objCountChair", Local_62.f_1226[10], sVar1, 1);
			func_794(7, &iLocal_33);
			return false;
		case 7:
			func_277(iVar0, "bGangActionDoor", 0, "SCENE_VALDOC_COUNTMONEY");
			func_794(26, &iLocal_33);
			return false;
		case 8:
			func_277(iVar0, "bGangActionDoor", 0, "SCENE_VALDOC_COUNTMONEY");
			func_277(iVar0, "COUNT_BOOL", 0, "SCENE_VALDOC_COUNTMONEY");
			func_794(26, &iLocal_33);
			return false;
		default:
			break;
	}
	func_804(&iLocal_33);
	return true;
}

bool func_394()
{
	func_807();
	if (iLocal_1755 < 2)
	{
		return false;
	}
	return true;
}

bool func_395(var uParam0)
{
	func_807();
	if (iLocal_1755 < 6)
	{
		return false;
	}
	func_808(1);
	func_788(uParam0);
	__LIB_0__::func_200(&(Local_62.f_153));
	func_22();
	return true;
}

bool func_396()
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	if (func_221(8) || __LIB_14__::func_622("SRGMCUT1_ALT"))
	{
		return false;
	}
	if (func_60(256))
	{
		return true;
	}
	if (func_82())
	{
		return true;
	}
	if (func_60(1073741824 /* Float: 2f */))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_62.f_390[0 /*126*/]))
	{
		return true;
	}
	iVar0 = Local_62.f_1216[0];
	sVar1 = func_810(0);
	sVar2 = "PBL_react_to_gunfire";
	if (!__LIB_14__::func_619(iVar0, sVar1))
	{
		return true;
	}
	if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_62.f_390[0 /*126*/], -1))
	{
		__LIB_11__::func_640(2);
	}
	switch (iLocal_53)
	{
		case 0:
			if (__LIB_14__::func_623(iVar0, sVar1, sVar2))
			{
				__LIB_11__::func_640(3);
				return false;
			}
			func_553(iVar0, sVar2, sVar1);
			__LIB_11__::func_640(1);
			break;
		case 1:
			if (__LIB_14__::func_623(iVar0, sVar1, sVar2))
			{
				__LIB_11__::func_640(3);
				return false;
			}
			if (!func_559(iVar0, sVar2, sVar2, 0))
			{
				return false;
			}
			__LIB_9__::func_793(iVar0, sVar2, sVar1, 1);
			__LIB_11__::func_640(3);
			break;
		case 3:
			if (Local_62.f_97 < 40f)
			{
				return false;
			}
			return true;
		case 2:
			func_813(Local_62.f_390[0 /*126*/], 1321.971f, -1325.122f, 73.94165f, 0f, 1065353216 /* Float: 1f */, 1050253722 /* Float: 0.3f */, 0, 20000);
			return true;
	}
	return false;
}

void func_397(var uParam0, int iParam1)
{
	uParam0->f_52 = (uParam0->f_52 - (uParam0->f_52 && iParam1));
}

bool func_408(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	if (bParam5)
	{
		if (__LIB_0__::func_562(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || __LIB_1__::func_128(5))
	{
		if (__LIB_0__::func_978(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = __LIB_0__::func_979(vParam0);
	if (bParam6)
	{
		iVar1 = __LIB_1__::func_447(vParam0, 1);
		if (__LIB_0__::func_730(iVar1) || __LIB_0__::func_980(iVar0, 1))
		{
			return false;
		}
	}
	if (!__LIB_1__::func_769(iParam3, iParam4))
	{
		return false;
	}
	if (!__LIB_1__::func_689())
	{
		if (__LIB_0__::func_981(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(bParam8))
	{
		if (!__LIB_1__::func_129(iVar0))
		{
			return false;
		}
		if (Global_1310720.f_23 >= 3)
		{
			if (Global_1310720.f_21 != -1)
			{
				if (Global_1310720.f_21 == __LIB_1__::func_447(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!__LIB_1__::func_460(iParam3, iParam4))
	{
		return false;
	}
	if (__LIB_0__::func_982(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!__LIB_0__::func_563(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return false;
		}
	}
	if (__LIB_0__::func_28())
	{
		if (VOLUME::_DOES_VOLUME_EXIST(bParam8))
		{
			if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(bParam8, vParam0))
			{
				return false;
			}
		}
		if (__LIB_6__::func_185(vParam0, iParam10) || __LIB_1__::func_624(vParam0, iParam10))
		{
			return false;
		}
	}
	else if (bParam9)
	{
		if (vParam0.x < -450f && vParam0.y < -600f)
		{
			return false;
		}
	}
	return true;
}

void func_412()
{
	if (__LIB_14__::func_267(Local_62, 0, 1))
	{
		return;
	}
	__LIB_14__::func_670(Local_62, 0, 1);
}

void func_415(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_936(iParam0, 33554432);
	}
	else
	{
		__LIB_1__::func_937(iParam0, 33554432);
	}
}

Vector3 func_416()
{
	return -286.228f, 865.626f, 121.0702f;
}

void func_418(int iParam0)
{
	if (!func_221(iParam0))
	{
		return;
	}
	Local_62.f_1622 = (Local_62.f_1622 - (Local_62.f_1622 && iParam0));
}

void func_419(char* sParam0, bool bParam1)
{
	if (TASK::DOES_SCENARIO_GROUP_EXIST(sParam0))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED(sParam0, bParam1);
	}
}

void func_420()
{
	if (func_115(2))
	{
		return;
	}
	switch (iLocal_29)
	{
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(Local_62.f_170))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_62.f_170, 0f);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_62.f_390[0 /*126*/]))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_62.f_390[0 /*126*/], 0f);
			}
			func_116(2);
			break;
	}
}

void func_422(int iParam0)
{
	if (!func_62(iParam0))
	{
		return;
	}
	Local_62.f_1624 = (Local_62.f_1624 - (Local_62.f_1624 && iParam0));
}

void func_429(int iParam0, int iParam1, char* sParam2)
{
	OBJECT::_0x276AAF0F1C7F2494(iParam0, iParam1);
}

char* func_431()
{
	return "PROP_PLAYER_CASH_REGISTER";
}

void func_432(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	if (bParam0)
	{
		func_58(33554432);
		__LIB_4__::func_896(1);
		__LIB_7__::func_723();
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_BLOCK"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SCRIPT_PAD_UP"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SCRIPT_RUP"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SCRIPT_RDOWN"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_NEG"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_POS"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_ROB"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_NEG"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_POS"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_OPTION1"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_OPTION2"), true);
		PED::SET_PED_CONFIG_FLAG(Global_35, 249, false);
	}
	else
	{
		func_57(33554432);
		__LIB_4__::func_896(0);
		__LIB_14__::func_624();
		if (bParam1)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_BLOCK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SCRIPT_PAD_UP"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SCRIPT_RUP"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SCRIPT_RDOWN"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_NEG"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_POS"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_ROB"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_NEG"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_POS"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_OPTION1"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_OPTION2"), false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 249, true);
		}
	}
	iVar0 = 0;
	if (bParam2)
	{
		iVar0 = 256;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), bParam0, iVar0, false);
}

void func_433(bool bParam0)
{
	MAP::DISPLAY_RADAR(bParam0);
	if (bParam0)
	{
		func_31(268435456);
	}
	else
	{
		func_29(268435456);
	}
}

bool func_456()
{
	func_96();
	func_378();
	return true;
}

bool func_457()
{
	switch (iLocal_32)
	{
		case 0:
			func_96();
			func_378();
			__LIB_9__::func_741(1);
			return false;
		case 1:
			if (func_60(256))
			{
				__LIB_9__::func_741(16);
				return false;
			}
			else
			{
				__LIB_9__::func_741(2);
			}
			if (__LIB_3__::func_610(29, 8))
			{
				func_31(8388608);
				func_518(&(Local_62.f_390[0 /*126*/].f_9), 128);
			}
			else if (__LIB_3__::func_610(29, 4))
			{
				func_518(&(Local_62.f_390[0 /*126*/].f_9), 64);
			}
			else if (__LIB_3__::func_610(29, 2))
			{
				func_518(&(Local_62.f_390[0 /*126*/].f_9), 32);
			}
			else
			{
				func_870(&(Local_62.f_390[0 /*126*/].f_9), 32);
			}
			return false;
		case 2:
			__LIB_9__::func_790(Local_62.f_390[0 /*126*/].f_6);
			__LIB_9__::func_790(joaat("A_M_M_RHDUPPERCLASS_01"));
			__LIB_9__::func_741(3);
			return false;
		case 3:
			if (__LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 128))
			{
				__LIB_9__::func_741(4);
				return false;
			}
			func_796(0, func_810(0), 0, "PBL_BARS_LOOP");
			__LIB_9__::func_741(4);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_458()
{
	switch (iLocal_32)
	{
		case 0:
			func_96();
			func_378();
			__LIB_9__::func_741(1);
			return false;
		case 1:
			if (func_275())
			{
				__LIB_9__::func_741(16);
			}
			else if (func_60(256))
			{
				__LIB_9__::func_741(16);
			}
			else
			{
				__LIB_9__::func_741(2);
			}
			return false;
		case 2:
			__LIB_9__::func_741(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_459()
{
	if (func_275())
	{
		func_96();
		func_378();
		func_793();
		return true;
	}
	if (func_60(256))
	{
		func_378();
		func_793();
		return true;
	}
	switch (iLocal_32)
	{
		case 0:
			func_96();
			func_378();
			__LIB_9__::func_741(1);
			return false;
		case 1:
			if (!func_60(1))
			{
				__LIB_9__::func_790(Local_62.f_1021[0 /*63*/].f_6);
			}
			__LIB_9__::func_741(2);
			return false;
		case 2:
			__LIB_9__::func_790(joaat("A_M_M_VALTOWNFOLK_01"));
			__LIB_9__::func_741(3);
			return false;
		case 3:
			if (!func_60(1))
			{
				__LIB_9__::func_790(joaat("P_MONEYSTACK01X"));
			}
			__LIB_9__::func_741(4);
			return false;
		case 4:
			__LIB_9__::func_790(joaat("S_DOORSLDPRTN01X"));
			__LIB_9__::func_741(5);
			return false;
		case 5:
			__LIB_9__::func_790(joaat("S_DOORSLDPRTNBRD01X"));
			__LIB_9__::func_741(6);
			return false;
		case 6:
			if (!func_60(1))
			{
				func_796(0, func_795(0), 0, "PBL_PAY_MONEY");
			}
			__LIB_9__::func_741(7);
			return false;
		case 7:
			__LIB_14__::func_625("s_lev_des");
			__LIB_9__::func_741(16);
			return false;
		default:
			break;
	}
	TASK::SET_SCENARIO_TYPE_ENABLED("PROP_PLAYER_KNOCK_SECURITY_DOOR", true);
	TASK::SET_SCENARIO_TYPE_ENABLED("PROP_PLAYER_PEEK_SECURITY_DOOR", true);
	func_793();
	return true;
}

bool func_460()
{
	if (!func_382())
	{
		return false;
	}
	return true;
}

bool func_461()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_382())
			{
				__LIB_9__::func_741(1);
			}
			return false;
		case 1:
			if (func_60(256))
			{
				__LIB_9__::func_741(8);
			}
			else
			{
				__LIB_9__::func_741(2);
			}
			return false;
		case 2:
			if (__LIB_9__::func_791(Local_62.f_390[0 /*126*/].f_6))
			{
				func_798(Local_62.f_390[0 /*126*/].f_6, joaat("META_OUTFIT_DEFAULT"), &(Local_62.f_390[0 /*126*/].f_8));
				__LIB_9__::func_741(3);
			}
			return false;
		case 3:
			if (func_800(&(Local_62.f_390[0 /*126*/].f_8)))
			{
				if (__LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 128))
				{
					__LIB_9__::func_741(8);
					return false;
				}
				else
				{
					__LIB_9__::func_741(4);
				}
			}
			return false;
		case 4:
			if (func_799(0))
			{
				__LIB_9__::func_741(5);
			}
			return false;
		case 5:
			if (!__LIB_3__::func_610(29, 1))
			{
				__LIB_9__::func_741(6);
			}
			else
			{
				__LIB_9__::func_741(7);
			}
			return false;
		case 6:
			if (__LIB_9__::func_791(joaat("A_M_M_RHDUPPERCLASS_01")))
			{
				__LIB_9__::func_741(7);
			}
			return false;
		case 7:
			func_872();
			func_553(Local_62.f_1216[0], "PBL_intro_action", "SCENE_RHDGUN_HELP");
			__LIB_9__::func_741(8);
			return false;
		case 8:
			if (func_873())
			{
				__LIB_9__::func_741(16);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_462()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_382())
			{
				__LIB_9__::func_741(1);
			}
			return false;
		case 1:
			if (func_275())
			{
				__LIB_9__::func_741(2);
			}
			else
			{
				__LIB_9__::func_741(2);
			}
			return false;
		case 2:
			if (func_873())
			{
				__LIB_9__::func_741(16);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_463()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_382())
			{
				__LIB_9__::func_741(1);
			}
			return false;
		case 1:
			if (func_275())
			{
				__LIB_9__::func_741(9);
			}
			else if (func_60(256))
			{
				__LIB_9__::func_741(9);
			}
			else
			{
				__LIB_9__::func_741(2);
			}
			return false;
		case 2:
			if (func_60(1) || __LIB_9__::func_791(Local_62.f_1021[0 /*63*/].f_6))
			{
				__LIB_9__::func_741(3);
			}
			return false;
		case 3:
			if (__LIB_9__::func_791(joaat("A_M_M_VALTOWNFOLK_01")))
			{
				__LIB_9__::func_741(4);
			}
			return false;
		case 4:
			if (func_60(1) || __LIB_9__::func_791(joaat("P_MONEYSTACK01X")))
			{
				__LIB_9__::func_741(5);
			}
			return false;
		case 5:
			if (__LIB_9__::func_791(joaat("S_DOORSLDPRTN01X")))
			{
				__LIB_9__::func_741(6);
			}
			return false;
		case 6:
			if (__LIB_9__::func_791(joaat("S_DOORSLDPRTNBRD01X")))
			{
				__LIB_9__::func_741(7);
			}
			return false;
		case 7:
			if (func_60(1) || func_799(0))
			{
				__LIB_9__::func_741(8);
			}
			return false;
		case 8:
			if (__LIB_14__::func_626("s_lev_des"))
			{
				__LIB_9__::func_741(9);
			}
			return false;
		case 9:
			if (func_873())
			{
				__LIB_9__::func_741(16);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_464()
{
	if (!__LIB_18__::func_844())
	{
		func_876(1, 0);
	}
	return true;
}

bool func_465()
{
	bool bVar0;
	switch (iLocal_32)
	{
		case 0:
			if (func_60(256))
			{
				__LIB_9__::func_741(16);
			}
			else if (__LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 128))
			{
				__LIB_9__::func_741(1);
				return false;
			}
			else
			{
				Local_62.f_1355[2 /*2*/] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("AMBRES_RHDGUN_SHERIFF");
				VOLUME::_0x39816F6F94F385AD(Local_62.f_1355[2 /*2*/], 1322.834f, -1320.092f, 77.81014f, 0f, 0f, -96.14533f, 0.830112f, 0.641855f, 1.943815f);
				VOLUME::_0x39816F6F94F385AD(Local_62.f_1355[2 /*2*/], 1317.49f, -1311.854f, 76.7239f, 0f, 0f, -75.76812f, 2.358398f, 2.570984f, 2.7956f);
				Local_62.f_1355[2 /*2*/].f_1 = PED::_0x4C39C95AE5DB1329(Local_62.f_1355[2 /*2*/], 0, 15);
				__LIB_9__::func_741(1);
			}
			return false;
		case 1:
			if (!func_33(Local_62))
			{
				if (func_877(&(Local_62.f_390[0 /*126*/]), 0, 0, 1, 1))
				{
					func_49(Local_62.f_390[0 /*126*/], 1, "RGM_CAPTIVE1", 0, "");
					func_878(&(Local_62.f_390[0 /*126*/]), joaat("META_OUTFIT_DEFAULT"), 1);
					__LIB_14__::func_611(&(Local_62.f_390[0 /*126*/]), 371, 1);
					PED::_0xAE6004120C18DF97(Local_62.f_390[0 /*126*/], 0, 0);
					__LIB_2__::func_829(&(Local_62.f_390[0 /*126*/].f_89), 1);
					__LIB_2__::func_279(Local_62.f_390[0 /*126*/], 1);
					func_880(Local_62.f_390[0 /*126*/], 0);
					__LIB_3__::func_686(Local_62.f_390[0 /*126*/], 3);
					func_556();
					__LIB_14__::func_616(Local_62.f_1216[0], "SCENE_RHDGUN_HELP");
					__LIB_9__::func_741(2);
				}
			}
			else
			{
				__LIB_9__::func_741(8);
			}
			return false;
		case 2:
			if (__LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 128))
			{
				func_591(Local_62.f_390[0 /*126*/], 1323.757f, -1319.015f, 74.36577f, 166.31f, 2, 1073741824 /* Float: 2f */);
				__LIB_1__::func_864(Local_62.f_390[0 /*126*/], 0, 0);
				__LIB_9__::func_741(8);
			}
			else if (!__LIB_3__::func_610(29, 1))
			{
				Local_62.f_1247[1 /*2*/] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("VOL_RHDGUN_CHECK_PASSERBY_VISIBLE");
				VOLUME::_0x39816F6F94F385AD(Local_62.f_1247[1 /*2*/], 1307.35f, -1265.237f, 76.6246f, 0f, 0f, -10.22604f, 10.1483f, 12.07671f, 2.499944f);
				VOLUME::_0x39816F6F94F385AD(Local_62.f_1247[1 /*2*/], 1316.843f, -1278.853f, 76.08128f, 0f, 0f, -10.2274f, 14.24559f, 30.68045f, 3.612149f);
				VOLUME::_0x39816F6F94F385AD(Local_62.f_1247[1 /*2*/], 1308.272f, -1278.972f, 76.45083f, 0f, 0f, -10.39573f, 4.055381f, 15.04287f, 3.600636f);
				VOLUME::_0x39816F6F94F385AD(Local_62.f_1247[1 /*2*/], 1303.855f, -1317.837f, 76.91208f, 0f, 0f, -14.58524f, 56.84571f, 57.99078f, 9.163401f);
				VOLUME::_0x39816F6F94F385AD(Local_62.f_1247[1 /*2*/], 1336.173f, -1291.99f, 79.10609f, 0f, 0f, 64.07844f, 13.74457f, 8.099354f, 7.920187f);
				VOLUME::_0x39816F6F94F385AD(Local_62.f_1247[1 /*2*/], 1298.393f, -1355.957f, 78.31953f, 0f, 0f, -15.10845f, 13.3449f, 19.66159f, 7.310696f);
				func_587(&(Local_62.f_1247[2 /*2*/]), 1315.198f, -1317.177f, 77.26284f, 0f, 0f, 72.39614f, 22.72217f, 16.51685f, 5.088609f, "VOL_RHDGUN_TOO_LATE_TO_SPAWN_PASSERBY");
				__LIB_9__::func_741(3);
			}
			else
			{
				__LIB_9__::func_741(6);
			}
			return false;
		case 3:
			if (func_883())
			{
				if (func_62(2))
				{
					func_884();
					__LIB_9__::func_741(6);
				}
				else
				{
					func_553(Local_62.f_1216[0], "PBL_INTRO_LOOP", "SCENE_RHDGUN_HELP");
					func_884();
					__LIB_9__::func_741(4);
				}
			}
			return false;
		case 4:
			if (func_885(&(Local_62.f_1021[0 /*63*/]), 0))
			{
				func_49(Local_62.f_1021[0 /*63*/], 1, "RGM_PASSERBY", 0, "");
				__LIB_2__::func_830(&(Local_62.f_1021[0 /*63*/].f_10), 1);
				func_887(&(Local_62.f_390[1 /*126*/].f_10), &(Local_62.f_390[1 /*126*/].f_30), 0, 0);
				__LIB_9__::func_741(5);
			}
			return false;
		case 5:
			if (!func_559(Local_62.f_1216[0], "PBL_INTRO_LOOP", "SCENE_RHDGUN_HELP", 0))
			{
				return false;
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_62.f_1021[0 /*63*/]))
			{
				__LIB_9__::func_798(Local_62.f_1216[0], "pedPasserby", Local_62.f_1021[0 /*63*/], "SCENE_RHDGUN_HELP", 1);
				__LIB_9__::func_793(Local_62.f_1216[0], "PBL_INTRO_LOOP", "SCENE_RHDGUN_HELP", 1);
				PED::REQUEST_PED_VISIBILITY_TRACKING(Local_62.f_1021[0 /*63*/]);
				__LIB_9__::func_741(6);
			}
			else
			{
				__LIB_9__::func_741(3);
			}
			return false;
		case 6:
			if (ENTITY::IS_ENTITY_DEAD(Local_62.f_1021[0 /*63*/]))
			{
				bVar0 = true;
			}
			if (bVar0 || PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(Local_62.f_1021[0 /*63*/], "Default_Nervous"))
			{
				func_888(&(Local_62.f_390[0 /*126*/]), joaat("REL_NO_RELATIONSHIP"), "CAPTIVE");
				func_888(&(Local_62.f_1021[0 /*63*/]), joaat("REL_NO_RELATIONSHIP"), "PASSERBY");
				__LIB_9__::func_741(7);
			}
			return false;
		case 7:
			func_587(&(Local_62.f_1247[0 /*2*/]), 1318.132f, -1319.71f, 77.01476f, 0f, 0f, -104.9335f, 5.422277f, 6.354905f, 2.807442f, "VOL_RHDGUN_PEEK_LEADIN");
			func_587(&(Local_62.f_1247[3 /*2*/]), 1319.128f, -1317.149f, 77.42981f, 0f, 0f, 17.5725f, 2.765507f, 2.906999f, 2.873742f, "VOL_RHDGUN_PLAYER_VISIBLE_OUTSIDE_1");
			func_587(&(Local_62.f_1355[1 /*2*/]), 1317.986f, -1319.349f, 77.26328f, 0f, 0f, 72.46517f, 13.67834f, 6.216187f, 4.012191f, "AMBRES_RHDGUN_WINDOW_PEEK");
			POPULATION::_0xB56D41A694E42E86(Local_62.f_1355[1 /*2*/], 0, 0, 0, -1, -1, 0);
			func_587(&(Local_62.f_1247[4 /*2*/]), 1320.753f, -1318.809f, 77.195f, 0f, 0f, -15.95497f, 2.108063f, 2.544107f, 2.806283f, "VOL_RHDGUN_CAPTIVE_FOCUS");
			func_587(&(Local_62.f_1355[0 /*2*/]), 1323.69f, -1316.367f, 78.29865f, 0f, 0f, 75.23973f, 3.96383f, 4.050902f, 2.796783f, "AMBRES_RHDGUN_PORCH");
			Local_62.f_1355[0 /*2*/].f_1 = PED::_0x4C39C95AE5DB1329(Local_62.f_1355[0 /*2*/], 0, 15);
			__LIB_9__::func_741(8);
			return false;
		case 8:
			func_889();
			__LIB_9__::func_741(9);
			return false;
		case 9:
			if (__LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 128))
			{
				func_591(Local_62.f_390[0 /*126*/], 1323.757f, -1319.015f, 74.36577f, 166.31f, 2, 1073741824 /* Float: 2f */);
				__LIB_1__::func_864(Local_62.f_390[0 /*126*/], 0, 0);
				func_518(&(Local_62.f_390[0 /*126*/].f_9), 128);
			}
			__LIB_9__::func_741(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_466()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_275())
			{
				__LIB_9__::func_741(16);
			}
			else if (func_60(256))
			{
				__LIB_9__::func_741(16);
			}
			else
			{
				__LIB_9__::func_741(1);
			}
			return false;
		case 1:
			func_386();
			__LIB_9__::func_741(2);
			return false;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(Local_62.f_170))
			{
				POPULATION::_0xF74E134F40192884(Local_62.f_170, 2);
			}
			__LIB_9__::func_741(3);
			return false;
		case 3:
			func_890(&(Local_62.f_1373[0]), &(Local_62.f_1370[0]), -1791.986f, -385.9403f, 157.6018f, 0f, 0f, -125.1316f, 6f, 8.745212f, 3.254201f, 1, 0, 1, 0, 0);
			__LIB_3__::func_378(Local_62.f_1373[0], 0);
			__LIB_9__::func_741(4);
			return false;
		case 4:
			func_594(func_609(), 0);
			func_595(func_612(), 1);
			func_594(func_611(), 0);
			__LIB_9__::func_741(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_467()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_275())
			{
				__LIB_9__::func_741(16);
			}
			else if (func_60(256))
			{
				__LIB_9__::func_741(16);
			}
			else
			{
				__LIB_9__::func_741(1);
			}
			return false;
		case 1:
			if (func_891(&(Local_62.f_1479[1]), joaat("A_M_M_VALTOWNFOLK_01"), -283.2007f, 816.0656f, 118.3861f, -77.39f))
			{
				__LIB_14__::func_611(&(Local_62.f_1479[1]), 277, 1);
				func_880(Local_62.f_1479[1], 0);
				__LIB_9__::func_741(2);
			}
			return false;
		case 2:
			if (func_60(1))
			{
			}
			else if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				func_29(1);
			}
			else if (!LAW::_0x9EF07CFBB19A9733())
			{
				Local_62.f_1021[0 /*63*/] = __LIB_1__::func_545(Local_62.f_1021[0 /*63*/].f_6, Local_62.f_1021[0 /*63*/].f_2, Local_62.f_1021[0 /*63*/].f_5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				func_49(Local_62.f_1021[0 /*63*/], 1, "DEPUTY", 0, "");
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_62.f_1021[0 /*63*/], true);
				PED::SET_PED_CAN_BE_TARGETTED(Local_62.f_1021[0 /*63*/], true);
				__LIB_2__::func_829(&(Local_62.f_1021[0 /*63*/].f_10), 1);
				__LIB_1__::func_401(&(Local_62.f_1021[0 /*63*/].f_10), 1);
				__LIB_1__::func_975(&(Local_62.f_1021[0 /*63*/].f_10), 5f);
				__LIB_2__::func_906(&(Local_62.f_1021[0 /*63*/].f_10), 20);
				__LIB_2__::func_956(&(Local_62.f_1021[0 /*63*/].f_10), 1);
			}
			__LIB_9__::func_741(3);
			return false;
		case 3:
			if (!func_60(1))
			{
				func_802(&(Local_62.f_1226[0]), joaat("P_MONEYSTACK01X"), Local_62.f_390[2 /*126*/].f_2, 0, 1, 0);
			}
			func_389();
			__LIB_9__::func_741(4);
			return false;
		case 4:
			Local_62.f_1247[3 /*2*/] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("VOL_VALDOC_CHECK_DEPUTY_KNOCK");
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1247[3 /*2*/], -273.6081f, 821.0761f, 119.601f, 0f, 0f, 9.583434f, 22.85014f, 16.92304f, 11.1f);
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1247[3 /*2*/], -269.9438f, 812.7717f, 119.601f, 0f, 0f, 9.583435f, 2.39609f, 1.990658f, 8.577932f);
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1247[3 /*2*/], -264.6964f, 812.715f, 120.2832f, 0f, 0f, -80.73006f, 4.448303f, 8.415604f, 5.437867f);
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1247[3 /*2*/], -282.5073f, 819.7449f, 119.601f, 0f, 0f, 9.583435f, 2.39609f, 1.990658f, 8.577932f);
			func_587(&(Local_62.f_1247[4 /*2*/]), -278.1527f, 816.4172f, 119.4482f, 0f, 0f, -80.19256f, 3.109009f, 3.917801f, 3.041739f, "VOL_VALDOC_CAN_SEE_DEPUTY_BEING_AGGROED");
			func_587(&(Local_62.f_1247[16 /*2*/]), -287.0357f, 818.6874f, 119.7394f, 0f, 0f, -170.1158f, 2.741058f, 1.425305f, 2.927403f, "VOL_VALDOC_AROUND_PEEK_WINDOW");
			func_587(&(Local_62.f_1355[0 /*2*/]), -281.1141f, 821.2005f, 119.1334f, 0f, 0f, 7.545725f, 6.448517f, 4.457336f, 2.770967f, "AMBRES_VALDOC_WINDOW_PEEK_1");
			Local_62.f_1355[0 /*2*/].f_1 = PED::_0x4C39C95AE5DB1329(Local_62.f_1355[0 /*2*/], 0, 15);
			func_587(&(Local_62.f_1355[1 /*2*/]), -293.6778f, 818.3525f, 119.0992f, 0f, 0f, -75.86052f, 5.404907f, 2.330322f, 2.332623f, "AMBRES_VALDOC_WINDOW_PEEK_2");
			Local_62.f_1355[0 /*2*/].f_1 = PED::_0x4C39C95AE5DB1329(Local_62.f_1355[1 /*2*/], 0, 15);
			__LIB_9__::func_741(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_468()
{
	if (func_275())
	{
		return true;
	}
	else if (func_60(256))
	{
		__LIB_9__::func_741(16);
		return true;
	}
	return true;
}

bool func_471()
{
	var uVar0;
	if (func_275())
	{
		return true;
	}
	else if (func_60(256))
	{
		return true;
	}
	if (func_897(&(Local_62.f_1198[1 /*8*/]), joaat("S_DOORSLDPRTNBRD01X"), &(Local_62.f_1241[2]), -281.0726f, 815.2385f, 118.4169f, joaat("DOOR_VAL_DOC_BACK"), 1, 0f, 0, "DOOR_VAL_DOC_BACK", &uVar0, 4))
	{
		func_898(&(Local_62.f_1373[1]), &(Local_62.f_1370[1]), func_633(), func_634(), func_635(), "Exterior Back Room Door");
		OBJECT::_0xC07B91B996C1DE89(joaat("DOOR_VAL_DOC_BACK"), 0);
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_472(var uParam0)
{
	if (func_60(32))
	{
		return true;
	}
	if (func_60(16))
	{
		return true;
	}
	if (!INTERIOR::IS_VALID_INTERIOR(*uParam0))
	{
		return false;
	}
	if (INTERIOR::IS_INTERIOR_READY(*uParam0))
	{
		func_29(16);
		return true;
	}
	return false;
}

bool func_473()
{
	switch (iLocal_32)
	{
		case 0:
			func_96();
			__LIB_9__::func_741(1);
			return false;
		case 1:
			func_899(&(Local_62.f_1));
			__LIB_9__::func_741(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_474()
{
	switch (iLocal_32)
	{
		case 0:
			func_96();
			__LIB_9__::func_741(1);
			return false;
		case 1:
			func_899(&(Local_62.f_1));
			__LIB_9__::func_741(2);
			return false;
		case 2:
			if (func_275())
			{
				__LIB_9__::func_741(16);
			}
			else if (func_60(256))
			{
				__LIB_9__::func_741(16);
			}
			else
			{
				__LIB_9__::func_741(3);
			}
			return false;
		case 3:
			if (__LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 128))
			{
				__LIB_9__::func_741(16);
				return false;
			}
			func_796(1, func_810(1), 0, "pbCounterToDoor");
			__LIB_9__::func_741(4);
			return false;
		case 4:
			__LIB_9__::func_790(joaat("P_GUNSMITHTRAPDOOR01X"));
			__LIB_9__::func_741(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_475()
{
	switch (iLocal_32)
	{
		case 0:
			func_96();
			__LIB_9__::func_741(1);
			return false;
		case 1:
			func_899(&(Local_62.f_1));
			__LIB_9__::func_741(2);
			return false;
		case 2:
			if (func_275())
			{
				__LIB_9__::func_741(16);
			}
			else if (func_60(256))
			{
				__LIB_9__::func_741(16);
			}
			else
			{
				__LIB_9__::func_741(3);
			}
			return false;
		case 3:
			func_796(0, func_900(0), 0, "pbIdleToDoor");
			__LIB_9__::func_741(4);
			return false;
		case 4:
			__LIB_9__::func_790(joaat("P_REGISTER03X"));
			__LIB_9__::func_790(joaat("P_TRAPDOOR01X"));
			__LIB_9__::func_790(joaat("P_STRGENSTORE_BOARD01"));
			__LIB_9__::func_790(joaat("P_BUCKET03X"));
			__LIB_9__::func_741(5);
			return false;
		case 5:
			__LIB_14__::func_625(__LIB_14__::func_661());
			__LIB_9__::func_741(6);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_476()
{
	switch (iLocal_32)
	{
		case 0:
			func_96();
			func_899(&(Local_62.f_1));
			__LIB_9__::func_741(1);
			return false;
		case 1:
			if (func_275())
			{
				__LIB_14__::func_627(joaat("WEAPON_REPEATER_CARBINE"));
				func_796(8, func_795(8), 0, 0);
			}
			__LIB_9__::func_741(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_477()
{
	if (!func_902(&(Local_62.f_1)))
	{
		return false;
	}
	func_903(&(Local_62.f_1));
	return true;
}

bool func_478()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_902(&(Local_62.f_1)))
			{
				func_903(&(Local_62.f_1));
				if (__LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 128))
				{
					__LIB_9__::func_741(16);
				}
				else
				{
					__LIB_9__::func_741(1);
				}
			}
			return false;
		case 1:
			if (func_275())
			{
				__LIB_9__::func_741(16);
			}
			else if (func_60(256))
			{
				__LIB_9__::func_741(16);
			}
			else
			{
				__LIB_9__::func_741(2);
			}
			return false;
		case 2:
			if (func_799(1))
			{
				__LIB_9__::func_741(3);
			}
			return false;
		case 3:
			if (__LIB_9__::func_791(joaat("P_GUNSMITHTRAPDOOR01X")))
			{
				__LIB_9__::func_741(16);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_479()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_902(&(Local_62.f_1)))
			{
				func_903(&(Local_62.f_1));
				__LIB_9__::func_741(1);
			}
			return false;
		case 1:
			if (func_275())
			{
				__LIB_9__::func_741(16);
			}
			else if (func_60(256))
			{
				__LIB_9__::func_741(16);
			}
			else
			{
				__LIB_9__::func_741(2);
			}
			return false;
		case 2:
			if (func_799(0))
			{
				__LIB_9__::func_741(3);
			}
			return false;
		case 3:
			if (((__LIB_9__::func_791(joaat("P_TRAPDOOR01X")) && __LIB_9__::func_791(joaat("P_STRGENSTORE_BOARD01"))) && __LIB_9__::func_791(joaat("P_REGISTER03X"))) && __LIB_9__::func_791(joaat("P_BUCKET03X")))
			{
				__LIB_9__::func_741(4);
			}
			return false;
		case 4:
			if (__LIB_14__::func_626(__LIB_14__::func_661()))
			{
				__LIB_9__::func_741(16);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_480()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_902(&(Local_62.f_1)))
			{
				func_903(&(Local_62.f_1));
				__LIB_9__::func_741(1);
			}
			return false;
		case 1:
			if (func_275())
			{
				__LIB_9__::func_741(2);
			}
			else if (func_60(256))
			{
				__LIB_9__::func_741(16);
			}
			else
			{
				__LIB_9__::func_741(16);
			}
			return false;
		case 2:
			if (func_904(joaat("WEAPON_REPEATER_CARBINE")) && func_799(8))
			{
				__LIB_9__::func_741(16);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_481()
{
	if (func_60(256))
	{
		func_905();
		__LIB_9__::func_741(16);
		return true;
	}
	switch (iLocal_32)
	{
		case 0:
			func_905();
			Local_62.f_1290 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volPrivateArea");
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1290, 2713.375f, -1290.984f, 61.18057f, 0f, 0f, -65.06339f, 6.10498f, 5.006104f, 3.666298f);
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1290, 2718.117f, -1287.013f, 61.17699f, 0f, 0f, 25.02346f, 7.541645f, 9.158936f, 3.663948f);
			func_587(&(Local_62.f_1247[7 /*2*/]), 2718.117f, -1287.013f, 61.17699f, 0f, 0f, 25.02346f, 7.541645f, 9.158936f, 3.663948f, "VOL_SDNGUN_GAMBLING_ROOM_MAIN");
			func_587(&(Local_62.f_1247[8 /*2*/]), 2711.42f, -1290.34f, 61.10517f, 0f, 0f, -64.08247f, 3.241211f, 2.089122f, 3.61668f, "VOL_SDNGUN_GAMBLING_ROOM_TO_BAR");
			__LIB_9__::func_741(1);
			return false;
		case 1:
			Local_62.f_1288 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volExterior");
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1288, 2706.178f, -1290.983f, 56.07883f, 0f, 0f, 24.99879f, 8.808282f, 12.41846f, 14.92454f);
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1288, 2697.768f, -1294.845f, 49.96861f, 0f, 0f, 25.25522f, 17.61353f, 13.00342f, 2.718853f);
			func_587(&(Local_62.f_1247[5 /*2*/]), 2706.151f, -1284.987f, 60.27311f, 0f, 0f, -154.9999f, 2.620117f, 1.492676f, 3.053375f, "VOL_SDNGUN_3F_COMMENT");
			__LIB_9__::func_741(2);
			return false;
		case 2:
			func_889();
			__LIB_9__::func_741(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_482()
{
	switch (iLocal_32)
	{
		case 0:
			func_49(Local_62.f_170, 1, func_47(), 1, func_48());
			if (func_60(8388608))
			{
				__LIB_1__::func_991(Local_62.f_170, 0);
			}
			Local_62.f_1284 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volShop");
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1284, 1325.235f, -1323.54f, 76.9392f, 0f, 0f, -15.05438f, 9.013779f, 9.165242f, 6.735411f);
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1284, 1328.74f, -1328.339f, 78.29915f, 0f, 0f, -104.645f, 1.71709f, 2.490459f, 2.80703f);
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1284, 1320.236f, -1325.07f, 78.29175f, 0f, 0f, -103.7906f, 3.611328f, 1.394653f, 2.807442f);
			Local_62.f_1.f_90 = Local_62.f_1284;
			__LIB_9__::func_741(1);
			return false;
		case 1:
			__LIB_9__::func_741(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_483()
{
	switch (iLocal_32)
	{
		case 0:
			func_889();
			func_49(Local_62.f_170, 1, func_47(), 1, func_48());
			func_385();
			__LIB_9__::func_741(1);
			return false;
		case 1:
			if (func_275())
			{
				__LIB_9__::func_741(16);
			}
			else if (func_60(256))
			{
				__LIB_9__::func_741(16);
			}
			else
			{
				__LIB_9__::func_741(2);
			}
			return false;
		case 2:
			func_587(&(Local_62.f_1290), -1791.986f, -385.9403f, 157.7425f, 0f, 0f, -125.1316f, 6f, 8.745212f, 3.254201f, "volPrivate");
			func_587(&(Local_62.f_1247[0 /*2*/]), -1790.269f, -389.4696f, 158.6499f, 0f, 0f, -126.254f, 1.417891f, 1.031865f, 1.238304f, "VOL_STRGEN_LADDER_UPPER_HALF");
			__LIB_9__::func_741(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_484()
{
	char* sVar0;
	if (func_60(256) && !func_275())
	{
		func_907();
		return true;
	}
	switch (iLocal_32)
	{
		case 0:
			func_889();
			func_49(Local_62.f_170, 1, func_47(), 1, func_48());
			func_907();
			if (func_275())
			{
				__LIB_9__::func_741(1);
				return false;
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_62.f_1479[1]))
			{
				if (__LIB_2__::func_633(0))
				{
					sVar0 = "1060_G_M_M_UniCriminals_01_WHITE_07";
				}
				else
				{
					sVar0 = "0362_G_M_M_UniDuster_03_WHITE_02";
				}
				func_49(Local_62.f_1479[1], 1, "ODR_PED3", 1, sVar0);
			}
			Local_62.f_1290 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volPrivateArea");
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1290, -289.3508f, 815.4742f, 119.902f, 0f, 0f, -169.6823f, 4.789f, 3.748076f, 2.998f);
			func_587(&(Local_62.f_1247[2 /*2*/]), -257.8614f, 833.8792f, 119.601f, 0f, 0f, 9.583434f, 70.68808f, 51.89944f, 27.56162f, "VOL_VALDOC_GENERAL_DEPUTY_CHECK");
			func_132(1);
			__LIB_9__::func_741(1);
			return false;
		case 1:
			if (func_275())
			{
				func_908(&(Local_62.f_1226[13]), joaat("WEAPON_REPEATER_CARBINE"), Local_62.f_170.f_2, -1, 0);
			}
			__LIB_9__::func_741(2);
			return false;
		case 2:
			__LIB_9__::func_741(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_486()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_275())
			{
				__LIB_9__::func_741(16);
			}
			else if (func_60(256))
			{
				__LIB_9__::func_741(16);
			}
			else if (__LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 128))
			{
				__LIB_9__::func_741(16);
			}
			else
			{
				__LIB_9__::func_741(1);
			}
			return false;
		case 1:
			if (func_897(&(Local_62.f_1189[0 /*8*/].f_5), joaat("P_DOOR33X"), &(Local_62.f_1241[2]), 1325.214f, -1323.639f, 76.8924f, Local_62.f_1189[0 /*8*/], Local_62.f_1189[0 /*8*/].f_2, Local_62.f_1189[0 /*8*/].f_4, Local_62.f_1189[0 /*8*/].f_3, Local_62.f_1189[0 /*8*/].f_1, &(Local_62.f_1189[0 /*8*/].f_7), 4))
			{
				__LIB_9__::func_741(2);
			}
			return false;
		case 2:
			if (__LIB_14__::func_613(&(Local_62.f_1226[0]), joaat("P_GUNSMITHTRAPDOOR01X"), &(Local_62.f_1241[0]), 1327.48f, -1326.23f, 76.92f, 4, 0))
			{
				__LIB_9__::func_741(16);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_487()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_275())
			{
				__LIB_9__::func_741(16);
			}
			else if (func_60(256))
			{
				__LIB_9__::func_741(16);
			}
			else
			{
				__LIB_9__::func_741(1);
			}
			return false;
		case 1:
			if (__LIB_14__::func_613(&(Local_62.f_1226[0]), joaat("P_REGISTER03X"), &(Local_62.f_1241[0]), -1789.69f, -386.63f, 160.38f, 4, 0))
			{
				__LIB_9__::func_741(2);
			}
			return false;
		case 2:
			if (__LIB_14__::func_613(&(Local_62.f_1226[1]), joaat("P_STRGENSTORE_BOARD01"), &(Local_62.f_1241[2]), -1790.02f, -389.12f, 159.32f, 4, 0))
			{
				__LIB_9__::func_741(3);
			}
			return false;
		case 3:
			if (__LIB_14__::func_613(&(Local_62.f_1226[2]), joaat("P_TRAPDOOR01X"), &(Local_62.f_1241[1]), -1790.75f, -390.16f, 159.29f, 4, 0))
			{
				__LIB_9__::func_741(4);
				if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1769))
				{
					func_587(&iLocal_1769, -1790.353f, -389.5667f, 159.3297f, 0f, 0f, -35f, 2f, 2f, 5f, "volTrapdoor");
					func_587(&iLocal_1771, -1789.845f, -388.492f, 159.3297f, 0f, 0f, -35f, 2.221f, 3.521f, 5f, "volBehindCounter");
				}
			}
			return false;
		case 4:
			if (__LIB_14__::func_613(&(Local_62.f_1226[3]), joaat("P_BUCKET03X"), &(Local_62.f_1241[3]), -1789.762f, -387.8745f, 156.1009f, 5, 0))
			{
				__LIB_9__::func_741(16);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_488()
{
	var uVar0;
	if (func_275())
	{
		__LIB_4__::func_389(joaat("DOOR_VAL_DOC_BACK_RM"), 1, 1);
		__LIB_9__::func_741(16);
	}
	else if (func_60(256))
	{
		__LIB_4__::func_389(joaat("DOOR_VAL_DOC_BACK_RM"), 1, 1);
		__LIB_9__::func_741(16);
	}
	switch (iLocal_32)
	{
		case 0:
			if (func_897(&(Local_62.f_1198[0 /*8*/]), joaat("S_DOORSLDPRTN01X"), &(Local_62.f_1241[3]), -290.8315f, 813.4535f, 118.4155f, joaat("DOOR_VAL_DOC_BACK_RM"), 0, 0f, 0, "DOOR_VAL_DOC_BACK_RM", &uVar0, 4))
			{
				OBJECT::_0xC07B91B996C1DE89(joaat("DOOR_VAL_DOC_BACK_RM"), 0);
				__LIB_9__::func_741(1);
			}
			return false;
		case 1:
			__LIB_4__::func_389(joaat("DOOR_VAL_DOC_BACK_RM"), 1, 1);
			func_910();
			__LIB_9__::func_741(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_489()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_275())
			{
				__LIB_9__::func_741(16);
			}
			else if (func_60(256))
			{
				__LIB_9__::func_741(16);
			}
			else
			{
				__LIB_9__::func_741(1);
			}
			return false;
		case 1:
			Local_62.f_1292 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volExamRoom");
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1292, -289.4254f, 811.4766f, 119.8436f, 0f, 0f, -79.27305f, 4.243592f, 3.22765f, 2.880867f);
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1292, -287.0865f, 810.6581f, 119.8476f, 0f, 0f, 7.438104f, 1.767105f, 1.835083f, 2.892097f);
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1292, -287.8211f, 811.3001f, 119.8509f, 0f, 0f, 56.65289f, 2.219849f, 1.859558f, 2.895981f);
			__LIB_9__::func_741(2);
			return false;
		case 2:
			if (func_60(1))
			{
				func_541();
			}
			__LIB_9__::func_741(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_490()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_275())
			{
				__LIB_9__::func_741(16);
			}
			else
			{
				__LIB_9__::func_741(16);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_491()
{
	switch (iLocal_32)
	{
		case 0:
			func_96();
			__LIB_9__::func_741(1);
			return false;
		case 1:
			if (func_275())
			{
				__LIB_9__::func_741(16);
			}
			else if (func_60(256))
			{
				__LIB_9__::func_741(16);
			}
			else
			{
				__LIB_9__::func_741(2);
			}
			return false;
		case 2:
			__LIB_9__::func_790(Local_62.f_390[0 /*126*/].f_6);
			__LIB_9__::func_741(3);
			return false;
		case 3:
			__LIB_9__::func_790(joaat("P_CHAIR02X"));
			__LIB_9__::func_790(Local_62.f_1198[0 /*8*/].f_6);
			__LIB_9__::func_741(4);
			return false;
		case 4:
			__LIB_14__::func_625(__LIB_14__::func_661());
			__LIB_9__::func_741(5);
			return false;
		case 5:
			func_796(0, func_911(0), 0, "PBL_holdup");
			__LIB_9__::func_741(6);
			return false;
		case 6:
			__LIB_2__::func_312(func_912(), 15, 0, 0);
			__LIB_9__::func_741(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_492()
{
	switch (iLocal_32)
	{
		case 0:
			func_96();
			__LIB_9__::func_741(1);
			return false;
		case 1:
			if (func_275())
			{
				__LIB_9__::func_741(16);
			}
			else if (func_60(256))
			{
				__LIB_9__::func_741(16);
			}
			else if (__LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 128))
			{
				__LIB_9__::func_741(16);
			}
			else
			{
				__LIB_9__::func_741(2);
			}
			return false;
		case 2:
			__LIB_14__::func_625(__LIB_14__::func_661());
			__LIB_9__::func_741(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_493()
{
	switch (iLocal_32)
	{
		case 0:
			func_96();
			__LIB_9__::func_741(1);
			return false;
		case 1:
			if (func_275())
			{
				__LIB_9__::func_741(16);
			}
			else if (func_60(256))
			{
				__LIB_9__::func_741(16);
			}
			else
			{
				__LIB_9__::func_741(2);
			}
			return false;
		case 2:
			__LIB_9__::func_790(joaat("P_DOOR62X"));
			__LIB_9__::func_741(3);
			return false;
		case 3:
			__LIB_14__::func_625(__LIB_14__::func_661());
			__LIB_14__::func_625("SCRIPT_COMMON@GESTURES@UNAPPROVED");
			__LIB_9__::func_741(4);
			return false;
		case 4:
			func_796(4, func_795(4), 0, "PBL_GREET");
			__LIB_9__::func_741(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_494()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_275())
			{
				__LIB_9__::func_741(16);
			}
			else if (func_60(256))
			{
				__LIB_9__::func_741(16);
			}
			else
			{
				__LIB_9__::func_741(1);
			}
			return false;
		case 1:
			if (__LIB_9__::func_791(Local_62.f_390[0 /*126*/].f_6))
			{
				__LIB_9__::func_741(3);
			}
			return false;
		case 3:
			if (__LIB_9__::func_791(joaat("P_CHAIR02X")) && __LIB_9__::func_791(Local_62.f_1198[0 /*8*/].f_6))
			{
				__LIB_9__::func_741(4);
			}
			return false;
		case 4:
			if (__LIB_14__::func_626(__LIB_14__::func_661()))
			{
				__LIB_9__::func_741(5);
			}
			return false;
		case 5:
			if (func_799(0))
			{
				func_553(Local_62.f_1216[0], "PBL_holdup", "SCENE_SDNGUN_HOLDUP");
				func_553(Local_62.f_1216[0], "PBL_Breakout", "SCENE_SDNGUN_HOLDUP");
				__LIB_9__::func_741(6);
			}
			return false;
		case 6:
			if (__LIB_2__::func_313(func_912()))
			{
				__LIB_9__::func_741(16);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_495()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_275())
			{
				__LIB_9__::func_741(16);
			}
			else if (func_60(256))
			{
				__LIB_9__::func_741(16);
			}
			else if (__LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 128))
			{
				__LIB_9__::func_741(16);
			}
			else
			{
				__LIB_9__::func_741(1);
			}
			return false;
		case 1:
			if (__LIB_14__::func_626(__LIB_14__::func_661()))
			{
				__LIB_9__::func_741(2);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_496()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_275())
			{
				__LIB_9__::func_741(16);
			}
			else if (func_60(256))
			{
				__LIB_9__::func_741(16);
			}
			else
			{
				__LIB_9__::func_741(1);
			}
			return false;
		case 1:
			if (__LIB_9__::func_791(joaat("P_DOOR62X")))
			{
				__LIB_9__::func_741(2);
			}
			return false;
		case 2:
			if (__LIB_14__::func_626(__LIB_14__::func_661()) && __LIB_14__::func_626("SCRIPT_COMMON@GESTURES@UNAPPROVED"))
			{
				__LIB_9__::func_741(3);
			}
			return false;
		case 3:
			if (func_799(4))
			{
				func_553(Local_62.f_1216[4], "PBL_WALK_TO_DOOR", "SCENE_VALDOC_HOLDUPBACKROOM");
				__LIB_9__::func_741(16);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_497()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_60(256))
			{
				__LIB_9__::func_741(16);
			}
			else
			{
				__LIB_9__::func_741(1);
			}
			return false;
		case 1:
			if (func_877(&(Local_62.f_390[0 /*126*/]), 0, 1, 1, 0))
			{
				func_878(&(Local_62.f_390[0 /*126*/]), -1416131140, 1);
				func_49(Local_62.f_390[0 /*126*/], 1, "PRNBG_GUARD_1", 0, "");
				func_536(Local_62.f_390[0 /*126*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, 1);
				__LIB_3__::func_548(&(Local_62.f_390[0 /*126*/].f_30[0 /*11*/]), "INTERACT_QUESTION", "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_3__::func_548(&(Local_62.f_390[0 /*126*/].f_30[1 /*11*/]), "INTERACT_THREATEN", "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				func_563(&(Local_62.f_390[0 /*126*/].f_10), &(Local_62.f_390[0 /*126*/].f_30), 0, 0);
				func_518(&(Local_62.f_390[0 /*126*/].f_10), 2);
				func_518(&(Local_62.f_390[0 /*126*/].f_10), 32);
				__LIB_9__::func_741(2);
			}
			return false;
		case 2:
			func_802(&(Local_62.f_1226[0]), joaat("P_CHAIR02X"), 2709.35f, -1289.55f, 48.62f, -70f, 1, 0);
			__LIB_9__::func_741(3);
			return false;
		case 3:
			func_49(Local_62.f_170, 1, func_47(), 1, func_48());
			func_587(&(Local_62.f_1247[1 /*2*/]), 2711.697f, -1290.09f, 49.9692f, 0f, 0f, -151.821f, 2.977051f, 3.062256f, 2.693279f, "VOL_SDNGUN_KNOCK_CAM");
			Local_62.f_1247[3 /*2*/] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 2709.911f, -1290.879f, 49.72172f, 0f, 0f, 117.4804f, 1.434951f, 0.75693f, 2.464767f);
			func_587(&(Local_62.f_1247[4 /*2*/]), 2707.785f, -1290.242f, 49.95722f, 0f, 0f, -64.94954f, 12.39771f, 4.004883f, 3.524149f, "VOL_SDNGUN_BACK_ALLEY");
			func_587(&(Local_62.f_1247[0 /*2*/]), 2706.972f, -1289.491f, 49.96861f, 0f, 0f, 25.25522f, 36.79766f, 16.82365f, 3.811966f, "VOL_SDNGUN_CLERK_WITNESS");
			func_587(&(Local_62.f_1292), 2710.613f, -1287.53f, 50.06406f, 0f, 0f, 24.96952f, 2.986572f, 2.919629f, 2.867367f, "volPrivateAreaWarning");
			__LIB_9__::func_741(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_498()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_275())
			{
				__LIB_9__::func_741(16);
			}
			else if (func_60(256))
			{
				__LIB_9__::func_741(16);
			}
			else if (__LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 128))
			{
				__LIB_9__::func_741(16);
			}
			else
			{
				__LIB_9__::func_741(1);
			}
			return false;
		case 1:
			func_587(&(Local_62.f_1247[6 /*2*/]), 1324.466f, -1324.087f, 78.08858f, 0f, 0f, -14.18379f, 1.293191f, 1.327865f, 2.428375f, "VOL_RHDGUN_ENTRANCE_TO_SIDE_ROOM");
			Local_62.f_1247[7 /*2*/] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("VOL_RHDGUN_SIDE_ROOM");
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1247[7 /*2*/], 1327.023f, -1325.328f, 78.28873f, 0f, 0f, -14.72711f, 4.625021f, 2.69853f, 2.959683f);
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1247[7 /*2*/], 1326.515f, -1325.87f, 75.39394f, 0f, 0f, -14.70922f, 4.504533f, 1.480919f, 3.065648f);
			func_587(&(Local_62.f_1247[5 /*2*/]), 1327.292f, -1317.316f, 78.29865f, 0f, 0f, 75.23973f, 3.96383f, 11.51292f, 2.796783f, "VOL_RHDGUN_CLERK_WITNESS");
			__LIB_9__::func_741(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_499()
{
	switch (iLocal_32)
	{
		case 0:
			func_587(&(Local_62.f_1247[0 /*2*/]), -285.2596f, 800.9596f, 119.3838f, 0f, 0f, 99.30715f, 9.906407f, 10.96855f, 4.142431f, "VOL_VALDOC_CLERK_WITNESS");
			func_587(&(Local_62.f_1247[5 /*2*/]), -290.1873f, 812.7155f, 119.7612f, 0f, 0f, 99.6392f, 1.270813f, 2.118591f, 2.750534f, "VOL_VALDOC_EXAM_ROOM_PLAYER_KNOCK");
			__LIB_9__::func_741(1);
			return false;
		case 1:
			if (func_275())
			{
				__LIB_9__::func_741(16);
			}
			else if (func_60(256))
			{
				__LIB_9__::func_741(16);
			}
			else
			{
				__LIB_9__::func_741(2);
			}
			return false;
		case 2:
			__LIB_9__::func_741(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_500()
{
	var uVar0;
	switch (iLocal_32)
	{
		case 0:
			if (func_275())
			{
				__LIB_9__::func_741(16);
			}
			else if (func_60(256))
			{
				__LIB_9__::func_741(16);
			}
			else
			{
				__LIB_9__::func_741(1);
			}
			return false;
		case 1:
			if (func_897(&(Local_62.f_1198[0 /*8*/]), joaat("S_DOORSLDPRTN01X"), &(Local_62.f_1241[4]), 2710.566f, -1291.204f, 48.6323f, joaat("DOOR_NEW_GUNSHOP_INT_BACK"), 1, 0f, 0, "DOOR_NEW_GUNSHOP_INT_BACK", &uVar0, 4))
			{
				ENTITY::SET_ENTITY_ROTATION(Local_62.f_1198[0 /*8*/], 0f, 0f, 115f, 2, true);
				__LIB_9__::func_741(2);
			}
			return false;
		case 2:
			func_917();
			func_587(&(Local_62.f_1247[6 /*2*/]), 2707.534f, -1289.635f, 58.71498f, 0f, 0f, -154.9999f, 4.130923f, 9.709765f, 7.954615f, "VOL_SDNGUN_LOAD_GAMBLING_ASSETS");
			__LIB_9__::func_741(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_501()
{
	var uVar0;
	switch (iLocal_32)
	{
		case 0:
			if (func_275())
			{
				__LIB_9__::func_741(16);
			}
			else if (func_60(256))
			{
				__LIB_9__::func_741(16);
			}
			else
			{
				__LIB_9__::func_741(1);
			}
			return false;
		case 1:
			if (func_897(&(Local_62.f_1226[11]), joaat("P_DOOR62X"), &(Local_62.f_1241[1]), -286.642f, 809.7845f, 118.4212f, joaat("DOOR_VAL_DOC_MID_RM"), 0, 0f, 0, "DOOR_VAL_DOC_MID_RM", &uVar0, 4))
			{
				__LIB_9__::func_741(2);
			}
			return false;
		case 2:
			__LIB_9__::func_741(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_502()
{
	switch (iLocal_32)
	{
		case 0:
			func_96();
			__LIB_9__::func_741(1);
			return false;
		case 1:
			if (func_275())
			{
				__LIB_9__::func_741(16);
			}
			else if (func_60(256))
			{
				__LIB_9__::func_741(16);
			}
			else
			{
				__LIB_9__::func_741(2);
			}
			return false;
		case 2:
			func_796(3, func_810(3), 0, "PBL_enter_basement");
			__LIB_9__::func_741(3);
			return false;
		case 3:
			func_796(2, func_810(2), 0, "PBL_enter_basement");
			__LIB_9__::func_741(4);
			return false;
		case 4:
			func_796(4, func_810(4), 0, "pbLeave");
			__LIB_9__::func_741(5);
			return false;
		case 5:
			__LIB_9__::func_790(joaat("P_CEILINGHOOK01X"));
			__LIB_9__::func_790(joaat("S_PIC_RHODESGUNSMITH01X"));
			__LIB_9__::func_741(6);
			return false;
		case 6:
			__LIB_9__::func_790(joaat("A_M_M_RHDUPPERCLASS_01"));
			__LIB_14__::func_625("script_proc@robberies@shop@rhodes@gunsmith@inside_downstairs");
			__LIB_9__::func_741(7);
			return false;
		case 7:
			PED::_0xF7EA250B9A919E03(joaat("INTIMIDATED_ON_KNEES"), Local_62.f_170);
			PED::_0xF7EA250B9A919E03(joaat("INTIMIDATED_ON_ASS"), Local_62.f_170);
			PED::_0xF7EA250B9A919E03(joaat("INTIMIDATED_ON_FEET_REACTION"), Local_62.f_170);
			__LIB_9__::func_741(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_503()
{
	switch (iLocal_32)
	{
		case 0:
			func_918(Local_62.f_1479[1]);
			func_96();
			__LIB_9__::func_741(1);
			return false;
		case 1:
			__LIB_9__::func_790(Local_62.f_390[0 /*126*/].f_6);
			__LIB_14__::func_627(joaat("WEAPON_REVOLVER_CATTLEMAN"));
			__LIB_14__::func_627(joaat("WEAPON_REPEATER_CARBINE"));
			__LIB_9__::func_741(2);
			return false;
		case 2:
			__LIB_9__::func_790(Local_62.f_390[1 /*126*/].f_6);
			__LIB_9__::func_741(3);
			return false;
		case 3:
			__LIB_9__::func_790(Local_62.f_390[2 /*126*/].f_6);
			__LIB_9__::func_741(4);
			return false;
		case 4:
			__LIB_9__::func_790(Local_62.f_390[3 /*126*/].f_6);
			__LIB_9__::func_741(5);
			return false;
		case 5:
			func_796(5, func_795(5), 0, "PBL_OPEN_DOOR");
			__LIB_9__::func_741(6);
			return false;
		case 6:
			func_796(2, func_795(2), 0, 0);
			__LIB_9__::func_741(7);
			return false;
		case 7:
			func_796(3, func_795(3), 0, 0);
			__LIB_9__::func_741(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_504()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_799(3))
			{
				__LIB_9__::func_741(1);
			}
			return false;
		case 1:
			if (func_799(2))
			{
				__LIB_9__::func_741(2);
			}
			return false;
		case 2:
			if (func_799(4))
			{
				__LIB_9__::func_741(3);
			}
			return false;
		case 3:
			if (__LIB_9__::func_791(joaat("P_CEILINGHOOK01X")) && __LIB_9__::func_791(joaat("S_PIC_RHODESGUNSMITH01X")))
			{
				__LIB_9__::func_741(4);
			}
			return false;
		case 4:
			if (__LIB_9__::func_791(joaat("A_M_M_RHDUPPERCLASS_01")))
			{
				__LIB_9__::func_741(16);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_505()
{
	switch (iLocal_32)
	{
		case 0:
			if (__LIB_9__::func_791(Local_62.f_390[0 /*126*/].f_6))
			{
				if (__LIB_2__::func_633(0))
				{
					func_798(joaat("G_M_M_UNICRIMINALS_01"), -1658670882, &(Local_62.f_390[0 /*126*/].f_8));
				}
				else
				{
					func_798(joaat("G_M_M_UNIDUSTER_01"), 1755543207, &(Local_62.f_390[0 /*126*/].f_8));
				}
				__LIB_9__::func_741(1);
			}
			return false;
		case 1:
			if (func_800(&(Local_62.f_390[0 /*126*/].f_8)))
			{
				__LIB_9__::func_741(2);
			}
			return false;
		case 2:
			if (__LIB_9__::func_791(Local_62.f_390[1 /*126*/].f_6))
			{
				if (__LIB_2__::func_633(0))
				{
					func_798(joaat("G_M_M_UNICRIMINALS_01"), -1269768390, &(Local_62.f_390[1 /*126*/].f_8));
				}
				else
				{
					func_798(joaat("G_M_M_UNIDUSTER_01"), 54111189, &(Local_62.f_390[1 /*126*/].f_8));
				}
				__LIB_9__::func_741(3);
			}
			return false;
		case 3:
			if (func_800(&(Local_62.f_390[1 /*126*/].f_8)))
			{
				__LIB_9__::func_741(4);
			}
			return false;
		case 4:
			if (__LIB_9__::func_791(Local_62.f_390[2 /*126*/].f_6))
			{
				if (__LIB_2__::func_633(0))
				{
					func_798(joaat("G_M_M_UNICRIMINALS_01"), -1046054427, &(Local_62.f_390[2 /*126*/].f_8));
				}
				else
				{
					func_798(joaat("G_M_M_UNIDUSTER_01"), 1296547824, &(Local_62.f_390[2 /*126*/].f_8));
				}
				__LIB_9__::func_741(5);
			}
			return false;
		case 5:
			if (func_800(&(Local_62.f_390[2 /*126*/].f_8)))
			{
				__LIB_9__::func_741(6);
			}
			return false;
		case 6:
			if (__LIB_9__::func_791(Local_62.f_390[3 /*126*/].f_6))
			{
				func_798(joaat("AM_VALENTINEDOCTORS_FEMALES_01"), 1755543207, &(Local_62.f_390[3 /*126*/].f_8));
				__LIB_9__::func_741(7);
			}
			return false;
		case 7:
			if (func_800(&(Local_62.f_390[3 /*126*/].f_8)))
			{
				__LIB_9__::func_741(8);
			}
			return false;
		case 8:
			if (func_904(joaat("WEAPON_REVOLVER_CATTLEMAN")))
			{
				__LIB_9__::func_741(9);
			}
			return false;
		case 9:
			if (func_799(5))
			{
				func_553(Local_62.f_1216[5], "PBL_CLOSE_SLIT", "SCENE_VALDOC_GANGOPENBACKROOM");
				func_553(Local_62.f_1216[5], "PBL_BREAKOUT", "SCENE_VALDOC_GANGOPENBACKROOM");
				__LIB_9__::func_741(10);
			}
			return false;
		case 10:
			if (func_799(2))
			{
				__LIB_9__::func_741(11);
			}
			return false;
		case 11:
			if (func_799(3))
			{
				__LIB_9__::func_741(16);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_506()
{
	switch (iLocal_32)
	{
		case 0:
			func_587(&(Local_62.f_1247[8 /*2*/]), 1323.171f, -1322.009f, 75.27171f, 0f, 0f, 74.70825f, 7.163685f, 4.187109f, 2.689134f, "VOL_RHDGUN_BASEMENT_MAIN");
			Local_62.f_1290 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volPrivateArea");
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1290, 2713.375f, -1290.984f, 61.18057f, 0f, 0f, -65.06339f, 6.10498f, 5.006104f, 3.666298f);
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1290, 1323.171f, -1322.009f, 75.27171f, 0f, 0f, 74.70825f, 7.163685f, 4.187109f, 2.689134f);
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1290, 1326.515f, -1325.87f, 75.39394f, 0f, 0f, -14.70922f, 4.504533f, 1.480919f, 3.065648f);
			func_587(&(Local_62.f_1247[10 /*2*/]), 1323.746f, -1320.139f, 75.21092f, 0f, 0f, -16.4689f, 4.153564f, 3.284973f, 2.540016f, "VOL_RHDGUN_CAPTIVE_BASEMENT_MELEE_BLOCK");
			__LIB_9__::func_741(1);
			return false;
		case 1:
			func_802(&(Local_62.f_1226[1]), joaat("S_PIC_RHODESGUNSMITH01X"), 1320.542f, -1324.328f, 73.94167f, -2.34f, 1, 1);
			__LIB_9__::func_741(2);
			return false;
		case 2:
			func_553(Local_62.f_1216[4], "pbBedLoop", "SCENE_RHDGUN_VICTIM_ALONE");
			func_553(Local_62.f_1216[4], "pbLeaveCorner", "SCENE_RHDGUN_VICTIM_ALONE");
			func_553(Local_62.f_1216[4], "pbSawPlayer", "SCENE_RHDGUN_VICTIM_ALONE");
			__LIB_9__::func_741(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_507()
{
	char* sVar0;
	switch (iLocal_32)
	{
		case 0:
			if (func_877(&(Local_62.f_390[1 /*126*/]), 1, 0, 1, 1))
			{
				if (!__LIB_2__::func_633(0))
				{
					func_878(&(Local_62.f_390[1 /*126*/]), 54111189, 1);
				}
				else
				{
					func_878(&(Local_62.f_390[1 /*126*/]), -1269768390, 1);
				}
				if (__LIB_2__::func_633(0))
				{
					sVar0 = "0130_G_M_M_UniCriminals_01_WHITE_01";
				}
				else
				{
					sVar0 = "0361_G_M_M_UniDuster_03_WHITE_01";
				}
				func_880(Local_62.f_390[1 /*126*/], 0);
				func_49(Local_62.f_390[1 /*126*/], 1, "ODR_PED4", 1, sVar0);
				func_919(&(Local_62.f_390[1 /*126*/]), joaat("WEAPON_REVOLVER_CATTLEMAN"), 99);
				__LIB_9__::func_741(1);
			}
			return false;
		case 1:
			if (func_877(&(Local_62.f_390[3 /*126*/]), 3, 0, 1, 1))
			{
				func_878(&(Local_62.f_390[3 /*126*/]), 1755543207, 1);
				func_49(Local_62.f_390[3 /*126*/], 1, "ODR_WHORE", 0, "");
				func_919(&(Local_62.f_390[3 /*126*/]), joaat("WEAPON_REVOLVER_CATTLEMAN"), 99);
				__LIB_14__::func_611(&(Local_62.f_390[3 /*126*/]), 317, 1);
				func_880(Local_62.f_390[3 /*126*/], 0);
				__LIB_9__::func_741(2);
			}
			return false;
		case 2:
			if (func_877(&(Local_62.f_390[2 /*126*/]), 2, 0, 1, 1))
			{
				if (__LIB_2__::func_633(0))
				{
					sVar0 = "1058_G_M_M_UniCriminals_01_WHITE_05";
				}
				else
				{
					sVar0 = "0362_G_M_M_UniDuster_03_WHITE_02";
				}
				func_49(Local_62.f_390[2 /*126*/], 1, "ODR_PED3", 1, sVar0);
				if (!__LIB_2__::func_633(0))
				{
					func_878(&(Local_62.f_390[2 /*126*/]), 1296547824, 1);
				}
				else
				{
					func_878(&(Local_62.f_390[2 /*126*/]), -1046054427, 1);
				}
				func_880(Local_62.f_390[2 /*126*/], 0);
				__LIB_9__::func_741(3);
			}
			return false;
		case 3:
			if (func_801())
			{
				__LIB_9__::func_741(4);
			}
			return false;
		case 4:
			func_908(&(Local_62.f_1226[12]), joaat("WEAPON_REVOLVER_CATTLEMAN"), Local_62.f_390[3 /*126*/].f_2, -1, 1);
			__LIB_9__::func_741(5);
			return false;
		case 5:
			func_536(Local_62.f_390[0 /*126*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, 1);
			__LIB_9__::func_741(6);
			return false;
		case 6:
			func_536(Local_62.f_390[1 /*126*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, 1);
			__LIB_9__::func_741(7);
			return false;
		case 7:
			func_536(Local_62.f_390[2 /*126*/], joaat("WEAPON_REPEATER_CARBINE"), 0, 1);
			__LIB_9__::func_741(8);
			return false;
		case 8:
			func_536(Local_62.f_390[3 /*126*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, 1);
			__LIB_9__::func_741(9);
			return false;
		case 9:
			func_587(&(Local_62.f_1247[6 /*2*/]), -289.9398f, 811.4566f, 119.5628f, 0f, 0f, 100.8478f, 3.798035f, 1.370138f, 2.379475f, "VOL_VALDOC_EXAM_ROOM_PLAYER_VISIBLE");
			Local_62.f_1290 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volPrivateArea");
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1290, -289.3508f, 815.4742f, 119.902f, 0f, 0f, -169.6823f, 4.789f, 3.748076f, 2.998f);
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1290, -285.237f, 814.137f, 119.901f, 0f, 0f, -169.702f, 3.176f, 8.058f, 3f);
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1290, -282.699f, 816.189f, 119.674f, 0f, 0f, -169.938f, 2.737f, 4.614f, 2.543f);
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1290, -287.059f, 813.608f, 119.902f, 0f, 0f, -81.668f, 1.195f, 1.81f, 3.076f);
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1290, -286.577f, 813.088f, 119.902f, 0f, 0f, -34.083f, 1.932f, 1.81f, 3.076f);
			func_587(&(Local_62.f_1247[7 /*2*/]), -285.237f, 814.137f, 119.901f, 0f, 0f, -169.702f, 3.176f, 8.058f, 3f, "VOL_VALDOC_BACK_ROOM_TABLE");
			func_587(&(Local_62.f_1247[8 /*2*/]), -285.7814f, 813.7166f, 119.902f, 0f, 0f, -80.51717f, 0.979869f, 4.291668f, 3.076f, "VOL_VALDOC_BACK_ROOM_FEMALE_ATTACKS");
			func_587(&(Local_62.f_1247[9 /*2*/]), -286.748f, 813.5681f, 119.5226f, 0f, 0f, -169.9803f, 2.398071f, 0.985474f, 2.273331f, "VOL_VALDOC_DEF_BACKROOM_WALL_OPPOSITE_WINDOW");
			func_587(&(Local_62.f_1247[10 /*2*/]), -284.858f, 816.3049f, 119.5226f, 0f, 0f, -169.9803f, 1.167563f, 2.149611f, 2.273331f, "VOL_VALDOC_DEF_BACKROOM_BEHIND_TABLE");
			func_587(&(Local_62.f_1247[11 /*2*/]), -283.5127f, 817.321f, 119.5226f, 0f, 0f, -169.9803f, 1.167563f, 2.149611f, 2.273331f, "VOL_VALDOC_DEF_BACKROOM_CORNER_OPPOSITE_BED");
			Local_62.f_1247[12 /*2*/] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("VOL_VALDOC_DEF_BACK_AREA");
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1247[12 /*2*/], -289.3508f, 815.4742f, 119.902f, 0f, 0f, -169.6823f, 4.789f, 3.748076f, 2.998f);
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1247[12 /*2*/], -285.237f, 814.137f, 119.901f, 0f, 0f, -169.702f, 3.176f, 8.058f, 3f);
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1247[12 /*2*/], -282.699f, 816.189f, 119.674f, 0f, 0f, -169.938f, 2.737f, 4.614f, 2.543f);
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1247[12 /*2*/], -287.059f, 813.608f, 119.902f, 0f, 0f, -81.668f, 1.195f, 1.81f, 3.076f);
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1247[12 /*2*/], -286.577f, 813.088f, 119.902f, 0f, 0f, -34.083f, 1.932f, 1.81f, 3.076f);
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1247[12 /*2*/], -289.4254f, 811.4766f, 119.8436f, 0f, 0f, -79.27305f, 4.243592f, 3.22765f, 2.880867f);
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1247[12 /*2*/], -287.0865f, 810.6581f, 119.8476f, 0f, 0f, 7.438104f, 1.767105f, 1.835083f, 2.892097f);
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1247[12 /*2*/], -287.8211f, 811.3001f, 119.8509f, 0f, 0f, 56.65289f, 2.219849f, 1.859558f, 2.895981f);
			func_587(&(Local_62.f_1247[13 /*2*/]), -283.0507f, 789.9854f, 118.3405f, 0f, 0f, 8.791835f, 10.69513f, 8.034945f, 4.109662f, "VOL_VALDOC_DEF_FRONT_OF_SHOP");
			Local_62.f_1247[14 /*2*/] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("VOL_VALDOC_FLEE_BACKROOM_DOC");
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1247[14 /*2*/], -282.699f, 816.189f, 119.674f, 0f, 0f, -169.938f, 2.737f, 4.614f, 2.543f);
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1247[14 /*2*/], -284.964f, 812.634f, 119.901f, 0f, 0f, -169.702f, 3.176f, 5.009279f, 3f);
			Local_62.f_1247[15 /*2*/] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("VOL_VALDOC_FLEE_BACKROOM_FEMALE");
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1247[15 /*2*/], -282.699f, 816.189f, 119.674f, 0f, 0f, -169.938f, 2.737f, 4.614f, 2.543f);
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1247[15 /*2*/], -286.224f, 816.8489f, 119.901f, 0f, 0f, -169.702f, 3.519681f, 2.151833f, 3.106757f);
			func_587(&(Local_62.f_1247[17 /*2*/]), -291.0381f, 812.6501f, 119.6215f, 0f, 0f, 9.668242f, 0.509896f, 1f, 2.541101f, "VOL_VALDOC_DOC_KNOCK_LEFT_CORNER");
			__LIB_9__::func_741(10);
			return false;
		case 10:
			func_920();
			__LIB_9__::func_741(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_508()
{
	switch (iLocal_32)
	{
		case 0:
			if (__LIB_14__::func_613(&(Local_62.f_1226[2]), joaat("P_CEILINGHOOK01X"), &(Local_62.f_1241[1]), 1321.729f, -1319.462f, 74.2913f, 4, 0))
			{
				ENTITY::SET_ENTITY_COLLISION(Local_62.f_1226[2], true, false);
				__LIB_9__::func_741(16);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_510()
{
	switch (iLocal_32)
	{
		case 0:
			func_96();
			__LIB_1__::func_408(544152906, 1, 0);
			__LIB_9__::func_741(1);
			return false;
		case 1:
			__LIB_9__::func_790(Local_62.f_390[1 /*126*/].f_6);
			__LIB_9__::func_741(2);
			return false;
		case 2:
			__LIB_9__::func_790(Local_62.f_390[2 /*126*/].f_6);
			__LIB_9__::func_741(3);
			return false;
		case 3:
			__LIB_9__::func_790(Local_62.f_390[3 /*126*/].f_6);
			__LIB_9__::func_741(4);
			return false;
		case 4:
			__LIB_9__::func_790(Local_62.f_390[4 /*126*/].f_6);
			__LIB_9__::func_741(5);
			return false;
		case 5:
			__LIB_9__::func_790(joaat("S_M_M_AMBIENTSDPOLICE_01"));
			__LIB_9__::func_741(6);
			return false;
		case 6:
			__LIB_9__::func_790(joaat("S_VAULT_SML_L_VAL01X"));
			__LIB_9__::func_790(joaat("P_CHAIR12X"));
			__LIB_9__::func_741(7);
			return false;
		case 7:
			func_796(1, func_911(1), 0, "PBL_react_calm_guard");
			__LIB_9__::func_741(8);
			return false;
		case 8:
			func_796(2, func_911(2), 0, "PBL_gamblers_react");
			__LIB_9__::func_741(9);
			return false;
		case 9:
			func_796(3, func_911(3), 0, "PBL_cower_idle_pos_01");
			__LIB_9__::func_741(10);
			return false;
		case 10:
			func_796(4, func_911(4), 0, "PBL_cower_idle");
			__LIB_9__::func_741(11);
			return false;
		case 11:
			func_796(5, func_911(5), 0, "PBL_cower_idle");
			__LIB_9__::func_741(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_511()
{
	switch (iLocal_32)
	{
		case 0:
			func_96();
			__LIB_9__::func_741(1);
			return false;
		case 1:
			__LIB_9__::func_790(joaat("S_M_M_AMBIENTLAWRURAL_01"));
			__LIB_9__::func_741(2);
			return false;
		case 2:
			func_796(6, func_795(6), 0, 0);
			__LIB_9__::func_741(3);
			return false;
		case 3:
			func_796(7, func_795(7), 0, "pbLoopToGun");
			__LIB_9__::func_741(4);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_512()
{
	switch (iLocal_32)
	{
		case 0:
			if (__LIB_4__::func_545())
			{
				return false;
			}
			if (__LIB_9__::func_791(Local_62.f_390[1 /*126*/].f_6))
			{
				__LIB_9__::func_741(1);
			}
			return false;
		case 1:
			if (__LIB_9__::func_791(Local_62.f_390[2 /*126*/].f_6))
			{
				func_798(joaat("AMSP_ROBSDGUNSMITH_MALES_01"), -1867922363, &(Local_62.f_390[2 /*126*/].f_8));
				__LIB_9__::func_741(4);
			}
			return false;
		case 2:
			if (func_922(Local_62.f_390[2 /*126*/].f_8))
			{
				__LIB_9__::func_741(3);
			}
			return false;
		case 3:
			if (func_800(&(Local_62.f_390[2 /*126*/].f_8)))
			{
				__LIB_9__::func_741(4);
			}
			return false;
		case 4:
			if (__LIB_9__::func_791(Local_62.f_390[3 /*126*/].f_6))
			{
				func_798(joaat("AMSP_ROBSDGUNSMITH_MALES_01"), -1088446160, &(Local_62.f_390[3 /*126*/].f_8));
				__LIB_9__::func_741(5);
			}
			return false;
		case 5:
			if (func_800(&(Local_62.f_390[3 /*126*/].f_8)))
			{
				__LIB_9__::func_741(6);
			}
			return false;
		case 6:
			if (__LIB_9__::func_791(Local_62.f_390[4 /*126*/].f_6))
			{
				func_798(joaat("AMSP_ROBSDGUNSMITH_MALES_01"), -721892122, &(Local_62.f_390[4 /*126*/].f_8));
				__LIB_9__::func_741(7);
			}
			return false;
		case 7:
			if (func_800(&(Local_62.f_390[4 /*126*/].f_8)))
			{
				__LIB_9__::func_741(8);
			}
			return false;
		case 8:
			if (__LIB_9__::func_791(joaat("S_M_M_AMBIENTSDPOLICE_01")))
			{
				__LIB_9__::func_741(9);
			}
			return false;
		case 9:
			if (__LIB_9__::func_791(joaat("S_VAULT_SML_L_VAL01X")) && __LIB_9__::func_791(joaat("P_CHAIR12X")))
			{
				__LIB_9__::func_741(10);
			}
			return false;
		case 10:
			if (func_799(1))
			{
				__LIB_9__::func_741(11);
			}
			return false;
		case 11:
			if (func_799(2))
			{
				__LIB_9__::func_741(12);
			}
			return false;
		case 12:
			if (func_799(3))
			{
				__LIB_9__::func_741(13);
			}
			return false;
		case 13:
			if (func_799(4))
			{
				__LIB_9__::func_741(14);
			}
			return false;
		case 14:
			if (func_799(5))
			{
				__LIB_9__::func_741(15);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_513()
{
	switch (iLocal_32)
	{
		case 0:
			if (__LIB_9__::func_791(joaat("S_M_M_AMBIENTLAWRURAL_01")))
			{
				__LIB_9__::func_741(1);
			}
			return false;
		case 1:
			if (func_799(6))
			{
				__LIB_9__::func_741(2);
			}
			return false;
		case 2:
			if (func_799(7))
			{
				__LIB_9__::func_741(16);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_514()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_877(&(Local_62.f_390[1 /*126*/]), 1, 1, 1, 0))
			{
				func_878(&(Local_62.f_390[1 /*126*/]), -1187370751, 1);
				func_49(Local_62.f_390[1 /*126*/], 1, "PRNBG_GUARD_2", 0, "");
				func_536(Local_62.f_390[1 /*126*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 1, 0);
				__LIB_3__::func_548(&(Local_62.f_390[1 /*126*/].f_30[0 /*11*/]), "INTERACT_DEFUSE", "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_3__::func_548(&(Local_62.f_390[1 /*126*/].f_30[1 /*11*/]), "INTERACT_INSULT", "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				func_563(&(Local_62.f_390[1 /*126*/].f_10), &(Local_62.f_390[1 /*126*/].f_30), 0, 0);
				func_518(&(Local_62.f_390[1 /*126*/].f_10), 2);
				__LIB_2__::func_830(&(Local_62.f_390[1 /*126*/].f_89), 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_62.f_390[1 /*126*/], 46, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_62.f_390[1 /*126*/], 5, true);
				__LIB_9__::func_741(1);
			}
			return false;
		case 1:
			if (func_877(&(Local_62.f_390[2 /*126*/]), 2, 1, 1, 0))
			{
				func_878(&(Local_62.f_390[2 /*126*/]), -1867922363, 1);
				func_49(Local_62.f_390[2 /*126*/], 1, "NBG_GAMBLER1", 0, "");
				func_880(Local_62.f_390[2 /*126*/], 0);
				func_923(&(Local_62.f_390[2 /*126*/].f_10), &(Local_62.f_390[2 /*126*/].f_30), 0);
				func_924(&(Local_62.f_390[2 /*126*/]));
				__LIB_2__::func_830(&(Local_62.f_390[2 /*126*/].f_89), 1);
				__LIB_1__::func_975(&(Local_62.f_390[2 /*126*/].f_89), (3f + 1f));
				__LIB_9__::func_741(2);
			}
			return false;
		case 2:
			if (func_877(&(Local_62.f_390[3 /*126*/]), 3, 1, 1, 0))
			{
				func_878(&(Local_62.f_390[3 /*126*/]), -1088446160, 1);
				func_49(Local_62.f_390[3 /*126*/], 1, "NBG_GAMBLER2", 0, "");
				func_880(Local_62.f_390[3 /*126*/], 0);
				func_923(&(Local_62.f_390[3 /*126*/].f_10), &(Local_62.f_390[3 /*126*/].f_30), 0);
				func_924(&(Local_62.f_390[3 /*126*/]));
				__LIB_2__::func_830(&(Local_62.f_390[3 /*126*/].f_89), 1);
				__LIB_1__::func_975(&(Local_62.f_390[3 /*126*/].f_89), (3f + 1f));
				__LIB_9__::func_741(3);
			}
			return false;
		case 3:
			if (func_877(&(Local_62.f_390[4 /*126*/]), 4, 1, 1, 0))
			{
				func_878(&(Local_62.f_390[4 /*126*/]), -721892122, 1);
				func_49(Local_62.f_390[4 /*126*/], 1, "NBG_GAMBLER3", 0, "");
				func_880(Local_62.f_390[4 /*126*/], 0);
				func_923(&(Local_62.f_390[4 /*126*/].f_10), &(Local_62.f_390[4 /*126*/].f_30), 0);
				func_924(&(Local_62.f_390[4 /*126*/]));
				__LIB_2__::func_830(&(Local_62.f_390[4 /*126*/].f_89), 1);
				__LIB_1__::func_975(&(Local_62.f_390[4 /*126*/].f_89), (3f + 1f));
				__LIB_9__::func_741(4);
			}
			return false;
		case 4:
			Local_62.f_1512[3] = TASK::CREATE_SCENARIO_POINT(__LIB_14__::func_628(), 2718.19f, -1286.58f, 59.37f, 22.686f, 0, 0, 0);
			__LIB_9__::func_741(5);
			return false;
		case 5:
			func_587(&(Local_62.f_1247[9 /*2*/]), 2715.572f, -1291.827f, 60.88309f, 0f, 0f, 24.69529f, 8.219811f, 2.651759f, 3.022896f, "VOL_SDNGUN_GR_NO_FLEE_HALLWAY");
			func_587(&(Local_62.f_1247[10 /*2*/]), 2718.81f, -1289.097f, 60.79719f, 0f, 0f, 116.026f, 4.957567f, 6.470684f, 2.932401f, "VOL_SDNGUN_GR_NO_FLEE_MIDDLE_WUSS");
			func_587(&(Local_62.f_1247[11 /*2*/]), 2719.053f, -1284.771f, 60.46312f, 0f, 0f, -65.15909f, 2.596404f, 2.529723f, 2.15635f, "VOL_SDNGUN_GR_NO_FLEE_MIDDLE");
			__LIB_9__::func_741(6);
			return false;
		case 6:
			Local_62.f_1247[12 /*2*/] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("VOL_SDNGUN_GR_NO_FLEE_SAFE");
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1247[12 /*2*/], 2715.935f, -1285.487f, 60.83199f, 0f, 0f, -65.15154f, 4.618412f, 4.339547f, 2.99431f);
			VOLUME::_0x39816F6F94F385AD(Local_62.f_1247[12 /*2*/], 2716.459f, -1288.716f, 60.74099f, 0f, 0f, 24.56141f, 2.685233f, 3.350766f, 3.057338f);
			__LIB_1__::func_975(&(Local_62.f_390[2 /*126*/].f_89), 1f);
			__LIB_1__::func_975(&(Local_62.f_390[3 /*126*/].f_89), 1f);
			__LIB_1__::func_975(&(Local_62.f_390[4 /*126*/].f_89), 1f);
			__LIB_0__::func_37(&(Local_62.f_1392[6 /*3*/]));
			__LIB_9__::func_741(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_515()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_927(&(Local_62.f_1226[1]), joaat("S_VAULT_SML_L_VAL01X"), func_926(), 1073741824 /* Float: 2f */, 1, 0))
			{
				__LIB_9__::func_741(1);
			}
			return false;
		case 1:
			if (func_927(&(Local_62.f_1226[2]), joaat("P_CHAIR12X"), 2717.07f, -1284.59f, 59.35f, 1073741824 /* Float: 2f */, 1, 0))
			{
				__LIB_9__::func_741(2);
			}
			return false;
		case 2:
			if (func_927(&(Local_62.f_1226[3]), joaat("P_CHAIR12X"), 2718.74f, -1285.69f, 59.35f, 1073741824 /* Float: 2f */, 1, 0))
			{
				__LIB_9__::func_741(3);
			}
			return false;
		case 3:
			if (func_927(&(Local_62.f_1226[4]), joaat("P_CHAIR12X"), 2718.1f, -1286.65f, 59.35f, 1073741824 /* Float: 2f */, 1, 0))
			{
				__LIB_9__::func_741(4);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

void func_517(int iParam0)
{
	if (func_120(iParam0))
	{
		return;
	}
	Local_62.f_1623 = (Local_62.f_1623 || iParam0);
}

void func_518(var uParam0, int iParam1)
{
	if (__LIB_0__::func_51(uParam0, iParam1))
	{
		return;
	}
	*uParam0 = (*uParam0 || iParam1);
}

void func_520(int* iParam0)
{
	if (func_221(16))
	{
		return;
	}
	ENTITY::SET_ENTITY_VISIBLE(Local_62.f_1226[0], false);
	func_523(iParam0);
	func_224(16);
}

void func_521(int* iParam0, float fParam1, var uParam2)
{
	if (func_60(8388608))
	{
		return;
	}
	if (!func_55(128))
	{
		return;
	}
	if (!__LIB_14__::func_620(*iParam0, "DeputyHasRaisedHandToMoney"))
	{
		return;
	}
	if (fParam1 > 12f)
	{
		__LIB_0__::func_37(&(Local_62.f_1392[1 /*3*/]));
		__LIB_0__::func_37(&(Local_62.f_1392[2 /*3*/]));
	}
	if (PED::_0x164CECC59E70DF86(*iParam0, 45f))
	{
		__LIB_0__::func_37(&(Local_62.f_1392[2 /*3*/]));
		if (func_276(&(Local_62.f_1392[1 /*3*/]), 5f, 1, "TIMER_VALDOC_SEEING_DEPUTY"))
		{
			func_29(33554432);
			func_788(uParam2);
			func_808(1);
		}
	}
	else if (func_276(&(Local_62.f_1392[2 /*3*/]), 2f, 1, "TIMER_VALDOC_NOT_SEEING_DEPUTY"))
	{
		__LIB_0__::func_37(&(Local_62.f_1392[1 /*3*/]));
		__LIB_0__::func_37(&(Local_62.f_1392[2 /*3*/]));
	}
}

bool func_522(int* iParam0)
{
	bool bVar0;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return false;
	}
	if (func_221(128))
	{
		bVar0 = true;
	}
	if (LAW::_0x7351DA734F989F4E(*iParam0))
	{
		bVar0 = true;
	}
	if (__LIB_0__::func_51(&(iParam0->f_9), 2048))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		__LIB_8__::func_111("SVD_DEP_KNOCK", 0);
		func_130();
		func_223(iParam0, 0);
		return true;
	}
	return false;
}

void func_523(int* iParam0)
{
	if (func_221(32))
	{
		return;
	}
	func_130();
	func_928(Local_62.f_1216[0], "objMoney", Local_62.f_1226[0], "SCENE_VALDOC_DEPUTYKNOCK", 1, 0);
	func_928(Local_62.f_1216[0], "pedDeputy", *iParam0, "SCENE_VALDOC_DEPUTYKNOCK", 1, 0);
	func_224(32);
}

void func_524(int iParam0, int iParam1)
{
	Local_62.f_1021[iParam1 /*63*/].f_8 = iParam0;
}

bool func_525(int* iParam0)
{
	if (((iParam0->f_8 == 19 || iParam0->f_8 == 15) || iParam0->f_8 == 17) || iParam0->f_8 == 18)
	{
		return false;
	}
	return true;
}

bool func_526(int* iParam0)
{
	if (__LIB_0__::func_51(&(iParam0->f_9), 131072))
	{
		return false;
	}
	if (__LIB_0__::func_51(&(iParam0->f_9), 4096))
	{
		func_130();
		__LIB_8__::func_336(&(Local_62.f_1518), "SRVDDEPCOMBT", *iParam0, Global_35, 0, 0, 1, 1);
		func_518(&(iParam0->f_9), 131072);
		return true;
	}
	return false;
}

bool func_527(int* iParam0)
{
	if (__LIB_0__::func_51(&(iParam0->f_9), 32768))
	{
		return false;
	}
	if (!__LIB_0__::func_51(&(iParam0->f_9), 1024))
	{
		return false;
	}
	func_130();
	__LIB_8__::func_336(&(Local_62.f_1518), "SRVDDEPSHOCK", *iParam0, Global_35, 0, 0, 1, 1);
	func_518(&(iParam0->f_9), 32768);
	return true;
}

void func_528(int* iParam0)
{
	if (__LIB_0__::func_51(&(iParam0->f_9), 1048576))
	{
		return;
	}
	if (!func_280(Local_62.f_1216[0], "SCENE_VALDOC_DEPUTYKNOCK", 0.737f))
	{
		return;
	}
	__LIB_2__::func_190(*iParam0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 1200));
	func_518(&(iParam0->f_9), 1048576);
}

bool func_529(int* iParam0, float fParam1)
{
	if (!func_55(128))
	{
		return false;
	}
	if (__LIB_0__::func_51(&(iParam0->f_9), 65536))
	{
		return false;
	}
	if (iParam0->f_8 == 19)
	{
		return false;
	}
	if (__LIB_0__::func_51(&(iParam0->f_9), 32768) || func_221(8))
	{
		return false;
	}
	if (fParam1 > 2f)
	{
		return false;
	}
	__LIB_8__::func_111("SVD_DEP_KNOCK", 0);
	if (func_530())
	{
		__LIB_4__::func_261(Local_62, 16);
		__LIB_11__::func_395(Local_62, 524288);
	}
	func_130();
	func_518(&(iParam0->f_9), 65536);
	return true;
}

bool func_530()
{
	if (func_280(Local_62.f_1216[0], "SCENE_VALDOC_DEPUTYKNOCK", 0.666f) && !func_280(Local_62.f_1216[0], "SCENE_VALDOC_DEPUTYKNOCK", 0.956f))
	{
		return true;
	}
	return false;
}

void func_533(int iParam0)
{
	if (func_335(iParam0))
	{
		return;
	}
	Local_62.f_1627 = (Local_62.f_1627 || iParam0);
}

bool func_534()
{
	int iVar0;
	char* sVar1;
	iVar0 = Local_62.f_1216[0];
	sVar1 = func_795(0);
	switch (iLocal_34)
	{
		case 0:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_62.f_1216[0]))
			{
				func_794(1, &iLocal_34);
			}
			return false;
		case 1:
			__LIB_9__::func_798(iVar0, "pedDeputy", Local_62.f_1021[0 /*63*/], sVar1, 1);
			func_794(2, &iLocal_34);
			return false;
		case 2:
			__LIB_9__::func_798(iVar0, "pedMoney", Local_62.f_1479[1], sVar1, 1);
			func_794(3, &iLocal_34);
			return false;
		case 3:
			__LIB_14__::func_621(iVar0, "objDoorMoney", Local_62.f_1198[1 /*8*/], sVar1, 1);
			func_794(4, &iLocal_34);
			return false;
		case 4:
			__LIB_14__::func_621(iVar0, "objMoney", Local_62.f_1226[0], sVar1, 1);
			func_794(5, &iLocal_34);
			return false;
		case 5:
			func_277(Local_62.f_1216[0], "bDeputyActionKnock", 0, "SCENE_VALDOC_DEPUTYKNOCK");
			func_794(26, &iLocal_34);
			return false;
		default:
			break;
	}
	func_804(&iLocal_34);
	return true;
}

void func_536(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return;
	}
	WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iParam1, 12, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	if (bParam3)
	{
		return;
	}
	WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iParam1, bParam2, 0, false, false);
	WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(iParam0, bParam2, true, true, false);
}

bool func_537(int* iParam0, float fParam1)
{
	if (!func_55(128))
	{
		__LIB_0__::func_37(&(Local_62.f_1392[0 /*3*/]));
		return false;
	}
	if (fParam1 > 17f)
	{
		__LIB_0__::func_37(&(Local_62.f_1392[0 /*3*/]));
		return false;
	}
	if (PED::_0x164CECC59E70DF86(*iParam0, 45f))
	{
		if (func_276(&(Local_62.f_1392[0 /*3*/]), 2.5f, 0, "TIMER_VALDOC_START_KNOCKING_SCENE"))
		{
			__LIB_16__::func_215(3, 8);
			return true;
		}
	}
	else
	{
		__LIB_0__::func_37(&(Local_62.f_1392[0 /*3*/]));
	}
	return false;
}

void func_540(int* iParam0, bool bParam1)
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -272.4044f, 817.3405f, 118.2066f, 1f, -1, 0.5f, 1, 40000f);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -262.8275f, 783.2795f, 117.3997f, 1f, -1, 0.5f, 1, 40000f);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -262.4757f, 762.1805f, 117.1513f, 1f, -1, 0.5f, 1, 40000f);
	TASK::TASK_ACHIEVE_HEADING(0, 101.08f, 0);
	__LIB_1__::func_473(0, joaat("WORLD_HUMAN_SHOP_BROWSE"), 0, 0, 0, -1082130432 /* Float: -1f */);
	__LIB_1__::func_474(*iParam0, &iVar0, 0, 0, 1, 1);
	func_130();
	func_223(iParam0, bParam1);
}

void func_541()
{
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(Local_62.f_1512[3]))
	{
		Local_62.f_1512[3] = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(Local_62.f_1198[1 /*8*/], func_937(), vLocal_59, 0f, 0, 0, 0);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(Local_62.f_1512[2]))
	{
		Local_62.f_1512[2] = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(Local_62.f_1198[1 /*8*/], joaat("PROP_PLAYER_PEEK_SECURITY_DOOR"), vLocal_59, 0f, 0, 0, 0);
	}
}

void func_549()
{
	if (func_335(2048))
	{
		return;
	}
	__LIB_8__::func_336(&(Local_62.f_1518), "SRVD_O3_SEEATK", Local_62.f_1479[1], Global_35, 0, 0, 1, 1);
	func_533(2048);
}

int func_552(int* iParam0, int* iParam1, float fParam2, var uParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, float fParam11)
{
	return func_941(iParam0, iParam1, fParam2, uParam3, iParam4, iParam5, iParam6, sParam7, __LIB_2__::func_340(iParam8, 0, 0), iParam9, 0, iParam10, fParam11);
}

int func_553(int iParam0, char* sParam1, char* sParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0) && !ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iParam0, false))
	{
		return 0;
	}
	ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sParam1);
	return 1;
}

bool func_554()
{
	if (__LIB_2__::func_84())
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_62.f_1021[0 /*63*/]))
		{
			func_928(Local_62.f_1216[0], "pedPasserby", Local_62.f_1021[0 /*63*/], "SCENE_RHDGUN_HELP", 1, 0);
			TASK::_TASK_SMART_FLEE_STYLE_PED(Local_62.f_1021[0 /*63*/], Global_35, 0, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
		func_553(Local_62.f_1216[0], "PBL_react_to_gunfire", "SCENE_RHDGUN_HELP");
		func_517(1);
		func_518(&(Local_62.f_390[0 /*126*/].f_9), 512);
		return true;
	}
	if (((__LIB_0__::func_51(&(Local_62.f_1021[0 /*63*/].f_9), 4096) || __LIB_0__::func_51(&(Local_62.f_1021[0 /*63*/].f_9), 1024)) || __LIB_0__::func_51(&(Local_62.f_1021[0 /*63*/].f_9), 2048)) || __LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
	{
		__LIB_14__::func_629("PRRGS_IG3_PASS", 1);
		__LIB_14__::func_629("PRRGS_IG3_LEAVE", 1);
		func_928(Local_62.f_1216[0], "pedPasserby", Local_62.f_1021[0 /*63*/], "SCENE_RHDGUN_HELP", 1, 0);
		TASK::_TASK_SMART_FLEE_STYLE_PED(Local_62.f_1021[0 /*63*/], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		func_553(Local_62.f_1216[0], "PBL_bars_loop_reset", "SCENE_RHDGUN_HELP");
		func_553(Local_62.f_1216[0], "PBL_react_to_gunfire", "SCENE_RHDGUN_HELP");
		func_517(1);
		return true;
	}
	return false;
}

Vector3 func_555()
{
	return 1319.66f, -1318.6f, 76.92f;
}

void func_556()
{
	int iVar0;
	char* sVar1;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_62.f_1216[0]))
	{
		return;
	}
	iVar0 = Local_62.f_1216[0];
	sVar1 = func_810(0);
	__LIB_9__::func_798(iVar0, "pedCaptive", Local_62.f_390[0 /*126*/], sVar1, 1);
	if (!__LIB_3__::func_610(29, 1))
	{
		__LIB_9__::func_798(iVar0, "pedPasserby", Local_62.f_1021[0 /*63*/], sVar1, 1);
	}
	func_277(iVar0, "BOOL_bars_loop", 0, sVar1);
	func_277(iVar0, "BOOL_bars_loop_reset", 0, sVar1);
}

bool func_557()
{
	if (__LIB_0__::func_27(Global_1396257[14 /*638*/].f_626, 32768))
	{
		__LIB_14__::func_629("PRRGS_IG3_PASS", 0);
		__LIB_14__::func_629("PRRGS_IG3_GEST", 0);
		__LIB_14__::func_629("PRRGS_IG3_LEAVE", 0);
		return true;
	}
	else if (__LIB_5__::func_657() == 114)
	{
		__LIB_14__::func_629("PRRGS_IG3_PASS", 0);
		__LIB_14__::func_629("PRRGS_IG3_GEST", 0);
		__LIB_14__::func_629("PRRGS_IG3_LEAVE", 0);
		return true;
	}
	return false;
}

bool func_559(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0, true, bParam3))
	{
		return false;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sParam1);
		return false;
	}
	return true;
}

bool func_560()
{
	if (__LIB_14__::func_607(Local_62.f_1216[0], "bars_loop_reset", "SCENE_RHDGUN_HELP"))
	{
		return true;
	}
	return false;
}

void func_561(int iParam0)
{
	if (!func_44(iParam0))
	{
		return;
	}
	Local_62.f_170.f_11 = (Local_62.f_170.f_11 - (Local_62.f_170.f_11 && iParam0));
}

void func_562()
{
	__LIB_9__::func_793(Local_62.f_1216[0], "PBL_bars_loop_reset", "SCENE_RHDGUN_HELP", 1);
	func_277(Local_62.f_1216[0], "BOOL_bars_loop", 0, "SCENE_RHDGUN_HELP");
	func_277(Local_62.f_1216[0], "BOOL_bars_loop_reset", 1, "SCENE_RHDGUN_HELP");
}

void func_563(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		__LIB_5__::func_687(uParam1, 1, 0);
		func_518(uParam0, 4);
		func_518(uParam0, 8);
		func_518(uParam0, 16);
	}
	else
	{
		__LIB_5__::func_687(uParam1, 0, 0);
		if (bParam3)
		{
			func_946(uParam1, 1);
		}
		func_870(uParam0, 4);
		func_870(uParam0, 8);
		func_870(uParam0, 16);
	}
}

void func_572(int iParam0)
{
	int iVar0;
	func_29(32);
	switch (iLocal_29)
	{
		case 0:
			func_948(&(iParam0->f_170), 2717.7f, -1286.76f, 49.64f, 28.94f, 4, joaat("U_M_M_NBXGUNSMITH_01"));
			func_949(&(iParam0->f_1198[0 /*8*/]), 2710.52f, -1291.24f, 48.63f, 115f, joaat("S_DOORSLDPRTN01X"));
			iLocal_55 = 5;
			func_948(&(iParam0->f_390[0 /*126*/]), 2709.501f, -1289.789f, 48.61686f, 120.23f, 4, joaat("AMSP_ROBSDGUNSMITH_MALES_01"));
			func_948(&(iParam0->f_390[1 /*126*/]), 2718.709f, -1290.507f, 59.79968f, 117f, 4, joaat("AMSP_ROBSDGUNSMITH_MALES_01"));
			func_948(&(iParam0->f_390[2 /*126*/]), 2717.1f, -1284.647f, 59.8014f, -156.3f, 4, joaat("AMSP_ROBSDGUNSMITH_MALES_01"));
			func_948(&(iParam0->f_390[3 /*126*/]), 2718.664f, -1285.685f, 59.80194f, 100.2f, 4, joaat("AMSP_ROBSDGUNSMITH_MALES_01"));
			func_948(&(iParam0->f_390[4 /*126*/]), 2718.076f, -1286.574f, 59.80174f, 25.72f, 4, joaat("AMSP_ROBSDGUNSMITH_MALES_01"));
			iLocal_57 = 3;
			func_948(&(iParam0->f_1148[0 /*8*/]), 2736.385f, -1261.81f, 48.7461f, 120.0673f, 6, joaat("S_M_M_AMBIENTSDPOLICE_01"));
			func_948(&(iParam0->f_1148[1 /*8*/]), 2733.991f, -1284.971f, 48.34156f, 119.73f, 6, joaat("S_M_M_AMBIENTSDPOLICE_01"));
			func_948(&(iParam0->f_1148[2 /*8*/]), 2720.63f, -1277.923f, 48.61246f, -159.81f, 6, joaat("S_M_M_AMBIENTSDPOLICE_01"));
			iLocal_58 = 3;
			func_950(&(iParam0->f_1322[0 /*8*/]), 2727.511f, -1268.382f, 48.6951f, 116.7662f, 1, 2, 3);
			func_950(&(iParam0->f_1322[1 /*8*/]), 2728.385f, -1287.191f, 48.1483f, 112.7224f, 0, 0, 3);
			func_950(&(iParam0->f_1322[2 /*8*/]), 2722.92f, -1286.642f, 48.2701f, 110.571f, 1, 2, 3);
			__LIB_0__::func_7(&(Local_62.f_1377[0 /*9*/].f_3), 2);
			func_29(1024);
			break;
		case 1:
			func_948(&(iParam0->f_170), 1323.01f, -1323.315f, 76.8785f, -15.48f, 4, joaat("U_M_M_RHDGUNSMITH_01"));
			iLocal_55 = 1;
			func_948(&(iParam0->f_390[0 /*126*/]), 1322.08f, -1318.69f, 74.94f, 86.34f, 4, joaat("CS_RHODESKIDNAPVICTIM"));
			iLocal_54 = 2;
			func_948(&(iParam0->f_1021[0 /*63*/]), 1319.66f, -1318.6f, 75.92f, 74.97f, 4, joaat("A_M_M_RHDUPPERCLASS_01"));
			func_948(&(iParam0->f_1021[1 /*63*/]), 1330.274f, -1325.169f, 76.10938f, -104.47f, 4, joaat("A_M_M_RHDUPPERCLASS_01"));
			func_952(&(iParam0->f_1189[0 /*8*/]), "DOOR_RHO_GUNSMITH_HALL", joaat("DOOR_RHO_GUNSMITH_HALL"), 1, 0, 0);
			break;
		case 2:
			func_31(32);
			func_948(&(iParam0->f_170), -1789.386f, -387.3255f, 159.3286f, 54.6488f, 4, joaat("U_M_M_STRGENSTOREOWNER_01"));
			__LIB_14__::func_614(18);
			break;
		case 3:
			iLocal_54 = 1;
			func_948(&(iParam0->f_1021[0 /*63*/]), -280.3181f, 815.7234f, 118.3201f, 109.92f, 6, joaat("S_M_M_AMBIENTLAWRURAL_01"));
			func_518(&(iParam0->f_1021[0 /*63*/].f_9), 1);
			func_948(&(iParam0->f_170), -288.2166f, 805.022f, 118.3859f, -73.32f, 4, joaat("U_M_M_VALDOCTOR_01"));
			func_949(&(iParam0->f_1198[0 /*8*/]), -290.86f, 813.36f, 118.41f, 10f, joaat("S_DOORSLDPRTN01X"));
			func_949(&(iParam0->f_1198[1 /*8*/]), -281.15f, 816.34f, 118.41f, 100f, joaat("S_DOORSLDPRTNBRD01X"));
			iLocal_55 = 4;
			iVar0 = joaat("G_M_M_UNIDUSTER_01");
			if (__LIB_2__::func_633(0))
			{
				iVar0 = joaat("G_M_M_UNICRIMINALS_01");
			}
			func_948(&(iParam0->f_390[0 /*126*/]), -286.6212f, 815.0412f, 118.4032f, 11.81f, 22, iVar0);
			func_948(&(iParam0->f_390[1 /*126*/]), -283.8656f, 812.5018f, 118.804f, 99.15f, 22, iVar0);
			func_948(&(iParam0->f_390[2 /*126*/]), -282.21f, 814.5786f, 118.9627f, 11.12f, 22, iVar0);
			func_948(&(iParam0->f_390[3 /*126*/]), -285.24f, 810.89f, 118.4f, 11.12f, 5, joaat("AM_VALENTINEDOCTORS_FEMALES_01"));
			iLocal_56 = 3;
			func_950(&(iParam0->f_1297[0 /*8*/]), -287.5924f, 813.6237f, 118.3859f, 104.776f, 0, 2, 4);
			func_950(&(iParam0->f_1297[1 /*8*/]), -284.9759f, 816.2691f, 118.4031f, 99.0577f, 3, 0, 0);
			func_950(&(iParam0->f_1297[2 /*8*/]), -283.7409f, 817.7656f, 118.3863f, 88.1278f, 1, 2, 7);
			iLocal_57 = 4;
			func_948(&(iParam0->f_1148[0 /*8*/]), -276.3302f, 785.9387f, 121.4299f, 13.9461f, 6, joaat("S_M_M_AMBIENTLAWRURAL_01"));
			func_948(&(iParam0->f_1148[1 /*8*/]), -281.3563f, 785.8112f, 121.4299f, 358.6695f, 6, joaat("S_M_M_AMBIENTLAWRURAL_01"));
			func_948(&(iParam0->f_1148[2 /*8*/]), -283.4632f, 787.2012f, 121.4299f, 10.7127f, 6, joaat("S_M_M_AMBIENTLAWRURAL_01"));
			func_948(&(iParam0->f_1148[3 /*8*/]), -284.9185f, 774.9724f, 117.8383f, 0.11f, 6, joaat("S_M_M_AMBIENTLAWRURAL_01"));
			iLocal_58 = 3;
			func_950(&(iParam0->f_1322[0 /*8*/]), -275.8201f, 787.2756f, 121.4299f, 359.5503f, 3, 0, 0);
			func_950(&(iParam0->f_1322[1 /*8*/]), -281.3504f, 787.3623f, 121.4299f, 357.3743f, 3, 0, 0);
			func_950(&(iParam0->f_1322[2 /*8*/]), -283.0443f, 787.2126f, 121.4295f, 358.7795f, 3, 0, 0);
			break;
	}
}

bool func_573(var uParam0)
{
	if (INTERIOR::IS_VALID_INTERIOR(*uParam0))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(*uParam0);
		return true;
	}
	return false;
}

void func_576(int iParam0)
{
	if (iParam0 == 4)
	{
		func_956(Global_1914319.f_3[iParam0 /*446*/].f_20, 0, 0, 0, 1);
	}
	else
	{
		func_956(Global_1914319.f_3[iParam0 /*446*/].f_20, 1, 1, 0, 1);
	}
	Global_1914319.f_17371 = 0;
}

void func_577(var uParam0)
{
	if (!__LIB_0__::func_51(&(uParam0->f_13), 1))
	{
		return;
	}
	func_552(uParam0, &(uParam0->f_67), 15f, &(uParam0->f_85), 0, 1, 0, 0, 3, 0, 2, -1082130432 /* Float: -1f */);
}

void func_578(var uParam0)
{
	if (!func_65())
	{
		return;
	}
	if (Local_62.f_1198[0 /*8*/].f_7 != 7)
	{
		return;
	}
	func_128(&(Local_62.f_1512[1]), "SPI_SDNGUN_BACK_DOOR_KNOCK");
	if (func_82())
	{
		return;
	}
	if (!__LIB_14__::func_606(Global_35, Local_62.f_1292))
	{
		__LIB_0__::func_37(&(Local_62.f_1392[0 /*3*/]));
		return;
	}
	if (!__LIB_2__::func_227(0, 1, 0, 0))
	{
		return;
	}
	if (!func_276(&(Local_62.f_1392[0 /*3*/]), 1.5f, 0, "TIMER_SDNGUN_GUNSMITH_NOTICES_PLAYER_LOITERING_ON_BACK_AREA"))
	{
		return;
	}
	if (!func_44(536870912))
	{
		__LIB_8__::func_336(&(Local_62.f_1518), "SRNG_C_BACKRCT1", *uParam0, Global_35, 0, 0, 1, 1);
		func_91(536870912);
	}
	else if (!func_44(1073741824 /* Float: 2f */))
	{
		__LIB_8__::func_336(&(Local_62.f_1518), "SRNG_C_BACKRCT2", *uParam0, Global_35, 0, 0, 1, 1);
		func_91(1073741824 /* Float: 2f */);
	}
}

void func_580()
{
	bool bVar0;
	if (((func_120(1) || func_120(2)) || func_120(8)) || func_120(16))
	{
		__LIB_0__::func_200(&(Local_62.f_153));
		return;
	}
	if (!__LIB_14__::func_606(Global_35, Local_62.f_1247[1 /*2*/]))
	{
		__LIB_0__::func_200(&(Local_62.f_153));
		return;
	}
	if (!func_82())
	{
		if (Local_62.f_1198[0 /*8*/].f_7 != 7)
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		__LIB_4__::func_794(&(Local_62.f_153), 0, 2, 1065353216 /* Float: 1f */);
	}
	else
	{
		__LIB_0__::func_200(&(Local_62.f_153));
	}
}

void func_581(var uParam0)
{
	if (!__LIB_0__::func_51(&(uParam0->f_13), 1))
	{
		return;
	}
	uParam0->f_209 = func_552(uParam0, &(uParam0->f_67), 15f, &(uParam0->f_85), 0, 1, 0, 0, 3, 0, 2, -1082130432 /* Float: -1f */);
}

void func_582(int* iParam0, var uParam1)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	iVar0 = Local_62.f_1216[0];
	sVar1 = func_810(0);
	if (func_82())
	{
		return;
	}
	if (Local_62.f_1247[8 /*2*/].f_1)
	{
		return;
	}
	if (!func_957() && iLocal_26 != 53)
	{
		if (func_308(*iParam0, 0, &(iParam0->f_89), &iVar2, 0, 0))
		{
			if (iVar2 == 8 || iVar2 == 16)
			{
				__LIB_3__::func_732(0);
				func_39(16384);
				__LIB_14__::func_614(46);
			}
			else if (iVar2 == 1)
			{
				func_517(4);
				func_958(0, 1);
				__LIB_14__::func_614(53);
			}
		}
		else if (__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
		{
			__LIB_3__::func_732(0);
			func_553(iVar0, "PBL_react_to_gunfire", sVar1);
			__LIB_14__::func_614(47);
		}
	}
	if (!__LIB_2__::func_1(*iParam0, 0, 1))
	{
		func_143(1024, 0);
		func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 1);
		return;
	}
	func_959();
	func_960(iParam0);
	if (func_65())
	{
		if (iLocal_26 > 1 && !func_221(8))
		{
			return;
		}
	}
	if (func_221(16777216))
	{
		return;
	}
	if (__LIB_14__::func_606(Global_35, Local_62.f_1247[5 /*2*/]))
	{
		return;
	}
	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		if (__LIB_3__::func_587(Local_62.f_1294, 1, 1))
		{
			__LIB_3__::func_969(&(Local_62.f_1294), 1);
		}
		return;
	}
	PED::SET_PED_RESET_FLAG(*iParam0, 281, true);
	if (func_963(iParam0, uParam1))
	{
		__LIB_14__::func_614(26);
	}
	if (__LIB_0__::func_75(&(Local_62.f_1392[3 /*3*/])))
	{
		if (__LIB_1__::func_285(&(Local_62.f_1392[3 /*3*/]), 11.5f))
		{
			func_964(uParam1);
			__LIB_0__::func_37(&(Local_62.f_1392[3 /*3*/]));
		}
	}
	switch (iLocal_26)
	{
		case 0:
			__LIB_14__::func_611(iParam0, 297, 1);
			MAP::ALLOW_SONAR_BLIPS(true);
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(func_965(), true);
			func_553(iVar0, "PBL_react_to_gunfire", sVar1);
			__LIB_2__::func_830(&(iParam0->f_89), 1);
			__LIB_14__::func_614(1);
			break;
		case 1:
			if (!func_62(2))
			{
				if (!func_966(iParam0, "PBL_bars_callover_01"))
				{
					if (__LIB_14__::func_607(iVar0, "intro_action", sVar1))
					{
						if (func_280(iVar0, sVar1, 0.61f))
						{
							func_224(4);
						}
					}
					return;
				}
			}
			func_224(4);
			__LIB_14__::func_614(4);
			break;
		case 2:
			if (func_557())
			{
				return;
			}
			if (!__LIB_2__::func_227(-3f, 1, 0, 0))
			{
				return;
			}
			if (!func_335(64))
			{
				__LIB_8__::func_336(&(Local_62.f_1518), "SRG_C_BARLEAVE1", *iParam0, Global_35, 0, 0, 1, 1);
				func_533(64);
				__LIB_14__::func_614(3);
			}
			else if (!func_335(128))
			{
				__LIB_8__::func_336(&(Local_62.f_1518), "SRG_C_BARLEAVE2", *iParam0, Global_35, 0, 0, 1, 1);
				func_533(128);
				__LIB_14__::func_614(3);
			}
			break;
		case 3:
			if (!func_967())
			{
				return;
			}
			if (!func_276(&(iParam0->f_123), 3f, 0, "captive.timerGenericB"))
			{
				return;
			}
			__LIB_0__::func_37(&(iParam0->f_123));
			__LIB_14__::func_614(iLocal_27);
			break;
		case 4:
			if (func_557())
			{
				return;
			}
			if (!func_967())
			{
				return;
			}
			if (!__LIB_3__::func_610(29, 2))
			{
				__LIB_4__::func_261(29, 2);
			}
			else if (!__LIB_3__::func_610(29, 4))
			{
				__LIB_4__::func_261(29, 4);
			}
			else if (!__LIB_3__::func_610(29, 8))
			{
				__LIB_4__::func_261(29, 8);
			}
			__LIB_2__::func_73(*iParam0, &(iParam0->f_1), -89429847, 580546400, 0, 0);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iParam0->f_1, "SR_RG_BLIP_CAPTIVE1");
			__LIB_2__::func_315(249295937, *iParam0, 1);
			Local_62.f_1294 = __LIB_4__::func_173(*iParam0, Local_62.f_1247[4 /*2*/], 0);
			func_969(iParam0, "SRGMHELP1", "SRGMHELP4", "SRGMBEGRT", "PRRGS_CALL_3_1", 256, 2048);
			func_39(8192);
			func_970();
			__LIB_9__::func_793(iVar0, "PBL_bars_callover_01", sVar1, 1);
			__LIB_14__::func_614(5);
			break;
		case 5:
			if (!func_560())
			{
				return;
			}
			func_562();
			func_553(iVar0, "PBL_bars_callover_02", sVar1);
			__LIB_14__::func_614(6);
			break;
		case 6:
			if (!func_966(iParam0, "PBL_bars_callover_02"))
			{
				return;
			}
			if (!func_967())
			{
				iLocal_27 = 6;
				__LIB_14__::func_614(2);
				return;
			}
			func_969(iParam0, "SRGMHELP2", "SRGMHELP5", "SRGMURGE1", "PRRGS_CALL_3_2", 512, 4096);
			func_970();
			__LIB_9__::func_793(iVar0, "PBL_bars_callover_02", sVar1, 1);
			__LIB_2__::func_315(249295937, *iParam0, 1);
			__LIB_14__::func_614(7);
			break;
		case 7:
			if (!func_560())
			{
				return;
			}
			func_562();
			func_553(iVar0, "PBL_bars_callover_03", sVar1);
			__LIB_14__::func_614(8);
			break;
		case 8:
			if (!func_966(iParam0, "PBL_bars_callover_03"))
			{
				return;
			}
			if (!func_967())
			{
				iLocal_27 = 8;
				__LIB_14__::func_614(2);
				return;
			}
			func_969(iParam0, "SRGMHELP3", "SRGMHELP6", "SRGMURGE2", "PRRGS_CALL_3_3", 1024, 8192);
			__LIB_2__::func_315(249295937, *iParam0, 1);
			func_970();
			__LIB_9__::func_793(iVar0, "PBL_bars_callover_03", sVar1, 1);
			__LIB_14__::func_614(9);
			break;
		case 9:
			if (!func_560())
			{
				return;
			}
			func_562();
			func_553(iVar0, "PBL_bars_callover_04", sVar1);
			__LIB_14__::func_614(10);
			break;
		case 10:
			if (!func_966(iParam0, "PBL_bars_callover_04"))
			{
				return;
			}
			if (!func_967())
			{
				iLocal_27 = 10;
				__LIB_14__::func_614(2);
				return;
			}
			func_964(uParam1);
			func_969(iParam0, "SRGMHELP7", "SRGMHELP7", "SRGMURGE3", "PRRGS_CALL_3_4", 16384, 16384);
			func_970();
			__LIB_9__::func_793(iVar0, "PBL_bars_callover_04", sVar1, 1);
			__LIB_14__::func_614(11);
			break;
		case 11:
			if (!func_560())
			{
				return;
			}
			func_562();
			func_553(iVar0, "PBL_bars_callover_05", sVar1);
			__LIB_14__::func_614(12);
			break;
		case 12:
			if (!func_966(iParam0, "PBL_bars_callover_05"))
			{
				return;
			}
			if (!func_967())
			{
				iLocal_27 = 12;
				__LIB_14__::func_614(2);
				return;
			}
			func_964(uParam1);
			__LIB_8__::func_336(&(Local_62.f_1518), "PRRGS_IG3_GEST", *iParam0, Global_35, 0, 0, 1, 1);
			func_970();
			__LIB_9__::func_793(iVar0, "PBL_bars_callover_05", sVar1, 1);
			__LIB_14__::func_614(13);
			break;
		case 13:
			if (!func_560())
			{
				return;
			}
			func_562();
			func_553(iVar0, "PBL_bars_callover_06", sVar1);
			__LIB_14__::func_614(14);
			break;
		case 14:
			if (!func_966(iParam0, "PBL_bars_callover_06"))
			{
				return;
			}
			if (!func_967())
			{
				iLocal_27 = 14;
				__LIB_14__::func_614(2);
				return;
			}
			if (func_971(iParam0))
			{
				func_970();
				__LIB_9__::func_793(iVar0, "PBL_bars_callover_06", sVar1, 1);
			}
			__LIB_14__::func_614(15);
			break;
		case 15:
			if (!func_560())
			{
				return;
			}
			func_562();
			func_553(iVar0, "PBL_bars_callover_06", sVar1);
			__LIB_14__::func_614(14);
			break;
		case 26:
			PED::SET_PED_RESET_FLAG(Global_35, 53, true);
			if (!func_559(iVar0, "PBL_bars_line_01", sVar1, 0))
			{
				return;
			}
			if (!__LIB_2__::func_227(-3f, 1, 0, 0))
			{
				return;
			}
			func_970();
			if (!__LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 32) && !__LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 64))
			{
				__LIB_8__::func_336(&(Local_62.f_1518), "SRGMCUT1_ALT", *iParam0, Global_35, 0, 0, 1, 1);
			}
			__LIB_9__::func_793(iVar0, "PBL_bars_line_01", sVar1, 1);
			__LIB_14__::func_614(27);
			break;
		case 27:
			PED::SET_PED_RESET_FLAG(Global_35, 53, true);
			if (!func_560())
			{
				return;
			}
			func_964(uParam1);
			func_562();
			func_553(iVar0, "PBL_bars_line_02", sVar1);
			func_890(&(Local_62.f_1368), &(Local_62.f_1369), 1322.678f, -1320.722f, 77.88906f, 0f, 0f, 0f, 1.145978f, 1.10736f, 2.194725f, 1, 0, 1, 0, 0);
			__LIB_0__::func_16();
			func_418(8);
			func_561(16);
			__LIB_0__::func_37(&(iParam0->f_123));
			__LIB_14__::func_614(35);
			break;
		case 35:
			if (!func_973(iParam0, 5f))
			{
				return;
			}
			if (!__LIB_2__::func_227(-3f, 1, 0, 0))
			{
				return;
			}
			__LIB_0__::func_37(&(iParam0->f_123));
			__LIB_3__::func_969(&(Local_62.f_1294), 1);
			__LIB_8__::func_336(&(Local_62.f_1518), "SRGM_REACT", *iParam0, Global_35, 0, 0, 1, 1);
			__LIB_14__::func_614(40);
			break;
		case 40:
			if (!func_973(iParam0, 1092616192 /* Float: 10f */))
			{
				return;
			}
			__LIB_0__::func_37(&(iParam0->f_123));
			__LIB_8__::func_336(&(Local_62.f_1518), "SRG_C_OUTLOIT1", *iParam0, Global_35, 0, 0, 1, 1);
			__LIB_14__::func_614(41);
			break;
		case 41:
			if (!func_973(iParam0, 1092616192 /* Float: 10f */))
			{
				return;
			}
			__LIB_0__::func_37(&(iParam0->f_123));
			__LIB_8__::func_336(&(Local_62.f_1518), "SRG_C_OUTLOIT2", *iParam0, Global_35, 0, 0, 1, 1);
			__LIB_14__::func_614(42);
			break;
		case 42:
			if (!func_973(iParam0, 1092616192 /* Float: 10f */))
			{
				return;
			}
			__LIB_0__::func_37(&(iParam0->f_123));
			__LIB_8__::func_336(&(Local_62.f_1518), "SRG_C_OUTLOIT3", *iParam0, Global_35, 0, 0, 1, 1);
			__LIB_14__::func_614(43);
			break;
		case 43:
			if (!func_973(iParam0, 1092616192 /* Float: 10f */))
			{
				return;
			}
			__LIB_0__::func_37(&(iParam0->f_123));
			__LIB_8__::func_336(&(Local_62.f_1518), "SRGM_REPLY", *iParam0, Global_35, 0, 0, 1, 1);
			__LIB_14__::func_614(44);
			break;
		case 44:
			if (!func_973(iParam0, 1092616192 /* Float: 10f */))
			{
				return;
			}
			__LIB_0__::func_37(&(iParam0->f_123));
			__LIB_8__::func_336(&(Local_62.f_1518), "SRGM_BARS4", *iParam0, Global_35, 0, 0, 1, 1);
			__LIB_14__::func_614(45);
			break;
		case 45:
			break;
		case 46:
			func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
			__LIB_3__::func_544(&(iParam0->f_12), 0);
			func_418(4);
			__LIB_8__::func_336(&(Local_62.f_1518), "SRGM_AIM", *iParam0, Global_35, 0, 0, 1, 1);
			__LIB_9__::func_793(Local_62.f_1216[0], "PBL_react_to_gunfire", "SCENE_RHDGUN_HELP", 1);
			func_418(4);
			func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
			__LIB_14__::func_614(51);
			break;
		case 51:
			if (__LIB_14__::func_643(*iParam0, func_974(), "cower_on_bed_idle_captive"))
			{
				func_964(uParam1);
				__LIB_3__::func_544(&(iParam0->f_12), 0);
				func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
				func_418(4);
				func_224(2);
				__LIB_14__::func_614(53);
			}
			break;
		case 47:
			if (!func_559(iVar0, "PBL_react_to_gunfire", sVar1, 0))
			{
				return;
			}
			func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
			func_418(4);
			__LIB_9__::func_793(iVar0, "PBL_react_to_gunfire", sVar1, 1);
			__LIB_14__::func_614(53);
			break;
		case 53:
			break;
	}
}

Vector3 func_585()
{
	return 0.431611f, 0.496073f, 1f;
}

void func_586()
{
	if (VOLUME::_DOES_VOLUME_EXIST(Local_62.f_1247[13 /*2*/]))
	{
		return;
	}
	Local_62.f_1247[13 /*2*/] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 1325.586f, -1325.658f, 78.09632f, 0f, 0f, 0f, 1.024458f, 0.93935f, 1.324957f);
}

void func_587(int iParam0, vector3 vParam1, char[12] cParam4, vector3 vParam7, char* sParam10)
{
	*iParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, cParam4, vParam7, sParam10);
}

void func_588(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	__LIB_3__::func_548(uParam2[0 /*11*/], "INTERACT_QUESTION", "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_3__::func_548(uParam2[1 /*11*/], "INTERACT_INSULT", "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	func_563(uParam1, uParam2, bParam3, bParam4);
	__LIB_14__::func_611(&iParam0, 297, 1);
	func_518(uParam1, 2);
}

Vector3 func_589()
{
	return 1323.27f, -1319.04f, 74.94f;
}

float func_590()
{
	return 162.01f;
}

void func_591(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_591(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_591(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_592(var uParam0, char* sParam1, int iParam2)
{
	if (func_55(134217728))
	{
		return;
	}
	if (func_55(67108864))
	{
		return;
	}
	PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), uParam0, sParam1, vLocal_59, 0, 0);
	func_57(67108864);
}

void func_594(char* sParam0, bool bParam1)
{
	TASK::SET_SCENARIO_TYPE_ENABLED(sParam0, bParam1);
}

void func_595(char* sParam0, bool bParam1)
{
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(MISC::GET_HASH_KEY(sParam0), bParam1);
}

void func_596(int* iParam0, char[4] cParam1, char[4] cParam2, bool bParam3)
{
	if (__LIB_0__::func_181())
	{
		__LIB_8__::func_336(&(Local_62.f_1518), cParam2, Global_35, *iParam0, 0, 0, 1, bParam3);
	}
	else
	{
		__LIB_8__::func_336(&(Local_62.f_1518), cParam1, Global_35, *iParam0, 0, 0, 1, bParam3);
	}
}

void func_599(var uParam0)
{
	if (!__LIB_0__::func_51(&(uParam0->f_13), 1))
	{
		return;
	}
	uParam0->f_209 = func_552(uParam0, &(uParam0->f_67), 15f, &(uParam0->f_85), 0, 1, 0, 0, 3, 0, 2, -1082130432 /* Float: -1f */);
}

void func_603(int iParam0)
{
	if ((func_65() || __LIB_14__::func_606(Global_35, Local_62.f_1290)) || iParam0 == 1)
	{
		__LIB_8__::func_197(0.5f, 1028443341 /* Float: 0.05f */, 0, 106);
	}
}

void func_608()
{
	var uVar0[1];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	TASK::_GET_SCENARIO_POINT_CLOSE_TO_COORDS(-1792.063f, -382.0621f, 157.4387f, 0.5f, &uVar0, 1);
	iVar2 = TASK::_GET_SCENARIO_POINT_ENTITY(uVar0[0], "p_brickplug01x");
	iVar3 = TASK::_GET_SCENARIO_POINT_ENTITY(uVar0[0], "MONEY");
	iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(-1791.451f, -386.297f, 157.0676f);
	if (ENTITY::DOES_ENTITY_EXIST(Local_62.f_1226[3]))
	{
		iVar5 = Local_62.f_1226[3];
	}
	else
	{
		iVar5 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1789.762f, -387.8745f, 156.1009f, 0.25f, joaat("P_BUCKET03X"), true, false, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		iVar6 = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar5);
		if (iVar6 == 0)
		{
			iVar6 = 408691631;
		}
	}
	else
	{
		iVar6 = 408691631;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		INTERIOR::FORCE_ROOM_FOR_ENTITY(iVar2, iVar4, iVar6);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		INTERIOR::FORCE_ROOM_FOR_ENTITY(iVar3, iVar4, iVar6);
	}
}

char* func_609()
{
	return "PROP_PLAYER_STR_GEN_TRAP_DOOR";
}

char* func_611()
{
	return "PROP_PLAYER_STR_GEN_BSMT_LOOT";
}

char* func_612()
{
	return "LevDes_STR_Gen_Basement";
}

void func_613(var uParam0)
{
	if (!__LIB_0__::func_51(&(uParam0->f_13), 1))
	{
		return;
	}
	uParam0->f_209 = func_552(uParam0, &(uParam0->f_67), 15f, &(uParam0->f_85), 0, 1, 0, 0, 3, 0, 2, -1082130432 /* Float: -1f */);
}

void func_614(int* iParam0)
{
	int iVar0;
	if (func_82())
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	switch (iLocal_26)
	{
		case 0:
			__LIB_8__::func_732(&(iParam0->f_89), 1);
			__LIB_2__::func_22(&(iParam0->f_89), *iParam0);
			__LIB_1__::func_401(&(iParam0->f_89), 1);
			__LIB_1__::func_975(&(iParam0->f_89), 4f);
			__LIB_2__::func_906(&(iParam0->f_89), 15);
			__LIB_14__::func_614(48);
			break;
		case 48:
			if (!func_308(*iParam0, 0, &(iParam0->f_89), &iVar0, 0, 0))
			{
				return;
			}
			if ((((iVar0 != 2 && iVar0 != 16384) && iVar0 != 4) && iVar0 != 256) && iVar0 != 4096)
			{
				return;
			}
			func_39(16384);
			__LIB_14__::func_614(49);
			break;
		case 49:
			__LIB_9__::func_793(Local_62.f_1216[1], "PB_BREAKOUT", "SCENE_VALDOC_COUNTMONEY", 1);
			__LIB_14__::func_614(51);
			break;
		case 51:
			if (__LIB_14__::func_617(iParam0))
			{
				return;
			}
			func_813(*iParam0, func_988(), -118.69f, 2f, 1050253722 /* Float: 0.3f */, 0, 20000);
			PED::SET_PED_KEEP_TASK(*iParam0, true);
			__LIB_14__::func_614(52);
			break;
		case 52:
			if (__LIB_14__::func_642(*iParam0, 1435919172, 0))
			{
				return;
			}
			if (__LIB_0__::func_94(*iParam0, func_988(), 1) > 1.5f)
			{
				__LIB_14__::func_614(51);
			}
			else
			{
				__LIB_14__::func_614(53);
			}
			break;
		case 53:
			break;
	}
}

void func_615()
{
	if (func_62(32))
	{
		return;
	}
	if (!func_62(64))
	{
		return;
	}
	switch (iLocal_35)
	{
		case 0:
			func_789(&(Local_62.f_1355[3 /*2*/]), -284.5789f, 806.2164f, 119.6776f, 0f, 0f, -78.11449f, 4.971252f, 4.778488f, 2.892029f, 1, 0, 0);
			func_794(1, &iLocal_35);
			return;
		case 1:
			if (Local_62.f_1475[0])
			{
				__LIB_3__::func_378(Local_62.f_1355[3 /*2*/], 0);
			}
			func_794(2, &iLocal_35);
			return;
		case 2:
			func_789(&(Local_62.f_1355[4 /*2*/]), -288.1165f, 807.6514f, 119.7524f, 0f, 0f, -169.9943f, 4.573074f, 3.492065f, 2.898163f, 1, 0, 0);
			func_794(3, &iLocal_35);
			return;
		case 3:
			if (Local_62.f_1475[0])
			{
				__LIB_3__::func_378(Local_62.f_1355[4 /*2*/], 0);
			}
			func_794(26, &iLocal_35);
			return;
		default:
			break;
	}
	func_39(32);
	func_422(64);
	func_804(&iLocal_35);
}

bool func_618(var uParam0)
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0) == -1730772208)
		{
			bVar1 = __LIB_14__::func_655(uParam0, iVar0);
			if (bVar1)
			{
				func_323(uParam0, 8192);
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_623(bool bParam0)
{
	if (__LIB_18__::func_852(Local_62.f_170, bParam0, 0, 0, 1, 0))
	{
		func_91(32768);
	}
}

int func_624()
{
	switch (iLocal_29)
	{
		case 0:
			return Local_62.f_1247[0 /*2*/];
		case 1:
			return Local_62.f_1247[5 /*2*/];
		case 2:
			return 0;
		case 3:
			return Local_62.f_1247[0 /*2*/];
		default:
			break;
	}
	return 0;
}

Vector3 func_629()
{
	switch (iLocal_29)
	{
		case 3:
			return -290.8588f, 813.3577f, 118.4116f;
		case 0:
			return 2711.83f, -1294.13f, 59.46f;
		default:
			break;
	}
	return vLocal_59;
}

Vector3 func_630()
{
	switch (iLocal_29)
	{
		case 3:
			return 0f, 0f, 10f;
		case 0:
			return 0f, 0f, 115f;
		default:
			break;
	}
	return vLocal_59;
}

Vector3 func_631()
{
	return 0.5f, 0.5f, 1f;
}

void func_632(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, vector3 vParam6, vector3 vParam9, vector3 vParam12, vector3 vParam15, var uParam18, float fParam19, float fParam20, float fParam21, bool bParam22, var uParam23, char* sParam24)
{
	int iVar0;
	float fVar1;
	if (*uParam2 == 7)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam1))
	{
		return;
	}
	if (!__LIB_2__::func_1(iParam3, 0, 1))
	{
		return;
	}
	if (__LIB_14__::func_605(iLocal_29, 8))
	{
		if ((Local_62.f_1620 % 10) == 0)
		{
			func_1012();
		}
	}
	switch (*uParam2)
	{
		case 0:
			if (!PED::_IS_PED_USING_SCENARIO_HASH(Global_35, func_937()))
			{
				return;
			}
			__LIB_16__::func_215(iLocal_29, 8);
			__LIB_0__::func_19(uParam2, 1);
			break;
		case 1:
			if (!__LIB_14__::func_620(Global_35, "Knock"))
			{
			}
			iVar0 = func_1014();
			if (ENTITY::IS_ENTITY_DEAD(iVar0))
			{
			}
			if (*uParam1 == iVar0)
			{
				ENTITY::SET_ENTITY_VISIBLE(iParam3, false);
				TASK::CLEAR_PED_TASKS(iParam3, true, false);
				ENTITY::SET_ENTITY_COORDS(iParam3, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam1, 0.620003f, 0.264954f, -0.0340958f), true, false, true, true);
				PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iParam3, 0, 1);
				if (iLocal_29 == 0)
				{
					func_1015(0);
				}
				func_429(iParam0, 1, sParam24);
				__LIB_0__::func_19(uParam2, 2);
			}
			else
			{
				__LIB_0__::func_19(uParam2, 5);
			}
			break;
		case 2:
			ENTITY::SET_ENTITY_HEADING(iParam3, __LIB_0__::func_152(ENTITY::GET_ENTITY_COORDS(iParam3, true, false), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1));
			PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iParam3, 0, 1);
			__LIB_0__::func_19(uParam2, 3);
			break;
		case 3:
			PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iParam3, 0, 1);
			if (!__LIB_14__::func_620(*uParam1, "DoorSlitStartOpen"))
			{
				return;
			}
			ENTITY::SET_ENTITY_VISIBLE(iParam3, true);
			func_1017();
			__LIB_0__::func_19(uParam2, 4);
			break;
		case 4:
			PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iParam3, 0, 1);
			if (__LIB_14__::func_620(*uParam1, "DoorSlitFullyOpen"))
			{
				__LIB_0__::func_19(uParam2, 6);
			}
			break;
		case 5:
			if (PED::_IS_PED_USING_SCENARIO_HASH(Global_35, func_937()))
			{
				return;
			}
			func_1018();
			__LIB_0__::func_19(uParam2, 0);
			break;
		case 6:
			PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iParam3, 0, 1);
			if (__LIB_14__::func_620(*uParam1, "DoorSlitClosed"))
			{
				func_1018();
			}
			if (!func_60(32768))
			{
				fVar1 = 1f;
				if (iLocal_29 == 0)
				{
					fVar1 = 0f;
				}
				if (func_276(&(Local_62.f_170.f_214), fVar1, 1, "shopRob.clerkData.timerGeneric"))
				{
					__LIB_0__::func_37(&(Local_62.f_170.f_214));
					if (!func_60(8192))
					{
						if (iLocal_29 == 0)
						{
							__LIB_8__::func_336(&(Local_62.f_1518), "SRNG_R1_PLKNOCK", iParam3, Global_35, 0, 0, 1, 1);
						}
						else if (iLocal_29 == 3)
						{
							if (!__LIB_3__::func_610(Local_62, 16) && !__LIB_14__::func_126(Local_62, 524288))
							{
								__LIB_8__::func_336(&(Local_62.f_1518), "SRVDOKNC1", iParam3, Global_35, 0, 0, 1, 1);
							}
							else
							{
								__LIB_8__::func_336(&(Local_62.f_1518), "SRVDOKNC3", iParam3, Global_35, 0, 0, 1, 1);
							}
						}
						func_29(8192);
					}
					else if (!func_60(16384))
					{
						if (!__LIB_3__::func_610(Local_62, 16) && !__LIB_14__::func_126(Local_62, 524288))
						{
							__LIB_8__::func_336(&(Local_62.f_1518), "SRVDOKNC2", iParam3, Global_35, 0, 0, 1, 1);
						}
						else
						{
							__LIB_8__::func_336(&(Local_62.f_1518), "SRVDOKNC4", iParam3, Global_35, 0, 0, 1, 1);
						}
						func_29(16384);
					}
					func_29(32768);
				}
			}
			if (PED::_IS_PED_USING_SCENARIO_HASH(Global_35, func_937()))
			{
				return;
			}
			__LIB_0__::func_37(&(Local_62.f_170.f_214));
			func_1018();
			func_429(iParam0, 0, sParam24);
			func_898(&uParam4, &uParam5, vParam6, vParam9, vParam12, sParam24);
			func_1019(iParam3, vParam15);
			if (bParam22)
			{
				func_788(uParam23);
				if (iLocal_29 == 3)
				{
					func_29(33554432);
					if (func_56(Global_35, 0))
					{
						func_808(0);
					}
					else
					{
						func_808(1);
					}
				}
			}
			func_31(32768);
			__LIB_0__::func_19(uParam2, 7);
			break;
		case 7:
			break;
	}
}

Vector3 func_633()
{
	switch (iLocal_29)
	{
		case 3:
			return -281.0128f, 815.1832f, 118.3586f;
		default:
			break;
	}
	return vLocal_59;
}

Vector3 func_634()
{
	switch (iLocal_29)
	{
		case 3:
			return 0f, 0f, 100f;
		default:
			break;
	}
	return vLocal_59;
}

Vector3 func_635()
{
	switch (iLocal_29)
	{
		case 3:
			return 0.5f, 0.5f, 1f;
		default:
			break;
	}
	return vLocal_59;
}

void func_636()
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_62.f_1216[8]))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_62.f_1226[13]))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_62.f_1226[13], true);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_62.f_1216[8], "objShotgunDoctor", Local_62.f_1226[13], 0);
	}
	if (__LIB_2__::func_1(Local_62.f_170, 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_62.f_1216[8], "pedDoctor", Local_62.f_170, 0);
	}
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_62.f_1216[8], "bGrabShotgun", false, false);
}

void func_637()
{
	if (func_275())
	{
		return;
	}
	func_556();
	__LIB_14__::func_616(Local_62.f_1216[0], "SCENE_RHDGUN_HELP");
	if (func_62(2))
	{
		__LIB_9__::func_793(Local_62.f_1216[0], "PBL_BARS_LOOP", "SCENE_RHDGUN_HELP", 1);
	}
}

bool func_638()
{
	if (!func_221(8))
	{
		return false;
	}
	return true;
}

bool func_639()
{
	if (!func_221(2))
	{
		return false;
	}
	return true;
}

bool func_642()
{
	if (func_221(2))
	{
		return false;
	}
	return true;
}

bool func_643(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_474(499))
	{
		return false;
	}
	if (!Global_20710.f_2400)
	{
		return false;
	}
	if (__LIB_0__::func_296(80, 0, 1))
	{
		return false;
	}
	iVar1 = __LIB_1__::func_921(uParam0->f_51);
	if (!__LIB_14__::func_630(iVar1))
	{
		return false;
	}
	if (__LIB_14__::func_660(iVar1))
	{
		if (__LIB_2__::func_804(iVar1, 32768))
		{
			return false;
		}
		return true;
	}
	if (uParam0->f_85 == -1)
	{
		iVar2 = 0;
		uParam0->f_85 = 0;
	}
	else
	{
		iVar2 = uParam0->f_85;
	}
	iVar0 = iVar2;
	while (iVar0 <= 25)
	{
		if (!__LIB_14__::func_660(iVar0))
		{
			if (__LIB_2__::func_804(iVar0, 32768))
			{
				__LIB_1__::func_943(iVar0, 32768);
			}
		}
		uParam0->f_85++;
		return false;
		iVar0++;
	}
	uParam0->f_85 = -1;
	return false;
}

void func_644(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 1, 0))
	{
		__LIB_0__::func_37(&(uParam0->f_53.f_3));
		return;
	}
	uParam0->f_53 = fParam1;
	uParam0->f_53.f_2 = fParam2;
	uParam0->f_53.f_1 = iParam3;
	__LIB_1__::func_148(&(uParam0->f_53.f_3));
}

void func_645(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_0__::func_12();
	switch (iVar0)
	{
		case 92:
		case 120:
			return;
	}
	if (func_313(uParam0, 512) && !func_313(uParam0, 1024))
	{
		if (!__LIB_2__::func_1(iParam1, 0, 1))
		{
			return;
		}
		iVar1 = __LIB_1__::func_921(uParam0->f_51);
		if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, 0))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(iParam1, Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
			__LIB_2__::func_788(&iParam1, 1, 1, 0);
			func_323(uParam0, 1024);
		}
		if (ENTITY::IS_ENTITY_IN_VOLUME(iParam1, Global_1914319.f_3[iVar1 /*446*/].f_25, true, 0) || __LIB_2__::func_215(iParam1, Global_35, 1, 12f, 0))
		{
			bVar2 = false;
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && ENTITY::IS_ENTITY_DEAD(*uParam0))
			{
				bVar2 = true;
			}
			if (__LIB_4__::func_10(iVar1))
			{
				TASK::CLEAR_PED_TASKS(iParam1, true, false);
				__LIB_18__::func_852(iParam1, 1, 0, 0, 1, bVar2);
				__LIB_2__::func_788(&iParam1, 1, 1, 1);
			}
			else
			{
				TASK::CLEAR_PED_TASKS(iParam1, true, false);
				__LIB_18__::func_852(iParam1, 1, 0, 0, 1, bVar2);
				__LIB_2__::func_788(&iParam1, 1, 1, 1);
			}
			func_323(uParam0, 1024);
		}
		else if (!TASK::IS_PED_WALKING(iParam1) && !PED::IS_PED_FLEEING(iParam1))
		{
			if (!func_313(uParam0, 2048))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam1, __LIB_14__::func_657(uParam0->f_51), 1.5f, -1, 0.25f, 0, 40000f);
				func_323(uParam0, 2048);
			}
		}
	}
}

int func_654(var uParam0)
{
	int iVar0;
	if (uParam0->f_91 != 0)
	{
		if (ENTITY::_0x1FF441D7954F8709(uParam0->f_91))
		{
			iVar0 = ENTITY::_0x4735E2A4BB83D9DA(uParam0->f_91);
			return iVar0;
		}
	}
	return 0;
}

void func_655(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if (!func_313(uParam0, 33554432))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_82[0], true, false) || ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_82[0], true))
		{
			iVar0 = func_654(uParam0);
			vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_82[0], ENTITY::GET_ENTITY_COORDS(iVar0, true, false), ENTITY::GET_ENTITY_ROTATION(iVar0, 2), 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_82[0], "CLERK", *uParam0, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_82[0], "REGISTER", iVar0, 0);
			uParam0->f_60 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0.02f, -0.88f, 0f) };
			uParam0->f_63 = ENTITY::GET_ENTITY_HEADING(iVar0);
			__LIB_3__::func_409(&(uParam0->f_60), 0f);
			func_323(uParam0, 33554432);
		}
	}
}

int func_656(var uParam0)
{
	var uVar0[1];
	var uVar2;
	int iVar9;
	vector3 vVar10;
	uVar2 = 6;
	vVar10 = { ENTITY::GET_ENTITY_COORDS(*uParam0, false, false) };
	__LIB_14__::func_631(&uVar2, 0);
	uParam0->f_64 = { __LIB_14__::func_657(uParam0->f_51) };
	if (__LIB_0__::func_86(uParam0->f_64))
	{
		iVar9 = __LIB_14__::func_671(&uVar0, &uVar2, 1, vVar10, 4f);
	}
	else
	{
		iVar9 = __LIB_14__::func_671(&uVar0, &uVar2, 1, uParam0->f_64, 1.5f);
	}
	if (iVar9 <= 0)
	{
		if (!func_313(uParam0, 2))
		{
			func_323(uParam0, 2);
		}
	}
	else
	{
		if (func_313(uParam0, 2))
		{
			func_397(uParam0, 2);
		}
		return uVar0[0];
	}
	return 0;
}

char* func_661()
{
	switch (iLocal_29)
	{
		case 3:
			if (__LIB_14__::func_267(Local_62, 0, 1))
			{
				return "SVD_C_SNOOPPOST";
			}
			else
			{
				return "SVD_C_SNOOPPRE";
			}
			break;
	}
	return "";
}

void func_668(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_313(uParam0, 262144))
		{
			func_323(uParam0, 262144);
		}
	}
	else if (func_313(uParam0, 262144))
	{
		func_397(uParam0, 262144);
	}
}

bool func_669()
{
	if (func_313(&(Local_62.f_1), 256) || func_313(&(Local_62.f_1), 65536))
	{
		return true;
	}
	if (!func_276(&(Local_62.f_1459), 0.2f, 0, "shopRob.timerHoldupChecks"))
	{
		return false;
	}
	if (__LIB_11__::func_164(Local_62))
	{
		return false;
	}
	if (func_374(Local_62.f_170, 1))
	{
		return true;
	}
	return false;
}

bool func_670()
{
	if (!func_65())
	{
	}
	else if (!__LIB_0__::func_75(&(Local_62.f_1453)))
	{
		__LIB_1__::func_283(&(Local_62.f_1453), 0);
	}
	else if (__LIB_1__::func_285(&(Local_62.f_1453), 10f))
	{
		return true;
	}
	return false;
}

void func_676(int iParam0)
{
	int iVar0;
	iVar0 = Global_1914319.f_3[iParam0 /*446*/].f_20;
	if (!__LIB_0__::func_6(iVar0))
	{
		return;
	}
	__LIB_0__::func_7(&Global_1935630, 16);
	__LIB_1__::func_298(iVar0, 1);
	__LIB_1__::func_821(iVar0, 1, 0);
	Global_1914319.f_17371 = 1;
	__LIB_1__::func_936(Global_1914319.f_3[iParam0 /*446*/].f_10, 1024);
}

bool func_680(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	if (!__LIB_1__::func_918(iParam0))
	{
		return false;
	}
	if (!__LIB_2__::func_803(iParam0, &iVar0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return false;
	}
	if (__LIB_0__::func_2() == -1)
	{
		iVar1 = Global_1914319.f_3[iParam0 /*446*/].f_10;
	}
	else
	{
		iVar1 = Global_1051260.f_48[iParam0 /*78*/].f_16;
	}
	__LIB_14__::func_680(iVar0, uParam1, iVar0, bParam2, __LIB_14__::func_632(iVar1), 0, iParam3);
	return true;
}

void func_681()
{
	func_898(&(Local_62.f_1373[0]), &(Local_62.f_1370[0]), func_629(), func_630(), func_631(), "Interior Back Door");
}

bool func_712(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_1__::func_921(uParam0->f_51);
	if (iVar0 != 6 && __LIB_0__::func_12() != 92)
	{
		return false;
	}
	if (__LIB_0__::func_12() == 105 && __LIB_2__::func_230())
	{
		return false;
	}
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, 0))
	{
		return false;
	}
	if (__LIB_2__::func_157(uParam0->f_90, Global_36))
	{
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_90, __LIB_2__::func_114(Global_35, 0.5f)))
		{
			return true;
		}
	}
	return false;
}

void func_714(var uParam0, int* iParam1, int iParam2, int iParam3)
{
	__LIB_14__::func_664(*uParam0);
	func_376(uParam0, iParam1, iParam2, iParam3);
}

bool func_716(var uParam0, var uParam1, float fParam2, int iParam3, int iParam4, var uParam5)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = __LIB_0__::func_12();
	switch (iVar0)
	{
		case 92:
		case 120:
			return false;
	}
	if (!func_313(uParam0, 512))
	{
		if (!__LIB_0__::func_75(uParam1))
		{
			__LIB_1__::func_283(uParam1, 0);
			return false;
		}
		if (__LIB_1__::func_285(uParam1, fParam2) && __LIB_4__::func_10(__LIB_1__::func_921(iParam3)))
		{
			__LIB_3__::func_651(iParam4);
			vVar1 = { __LIB_14__::func_656(iParam3) };
			if (!STREAMING::HAS_MODEL_LOADED(iParam4))
			{
				STREAMING::REQUEST_MODEL(iParam4, false);
				return false;
			}
			if (__LIB_4__::func_10(__LIB_1__::func_921(iParam3)) || ENTITY::WOULD_ENTITY_BE_OCCLUDED(iParam4, vVar1, true))
			{
				*uParam5 = __LIB_1__::func_545(iParam4, vVar1, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			if (__LIB_2__::func_1(*uParam5, 0, 1))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam5))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam5, true, true);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam5, true);
				PED::SET_PED_CONFIG_FLAG(*uParam5, 146, false);
				PED::SET_PED_CONFIG_FLAG(*uParam5, 148, false);
				PED::SET_PED_CONFIG_FLAG(*uParam5, 113, true);
				func_323(uParam0, 512);
				return true;
			}
		}
	}
	else if (__LIB_2__::func_1(*uParam5, 0, 1))
	{
		return true;
	}
	return false;
}

int func_717(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!__LIB_2__::func_341(&(uParam0->f_7[0 /*18*/])))
	{
		switch (uParam0->f_49)
		{
			case 0:
				if (!__LIB_4__::func_807(0))
				{
					if (__LIB_2__::func_470())
					{
						func_1092(uParam0, "PLAYER_HOLDUP_ROB", bParam2);
						uParam0->f_49 = 1;
					}
				}
				break;
			case 1:
				if ((__LIB_4__::func_807(0) || !__LIB_2__::func_470()) || func_313(uParam0, 128))
				{
					func_1093(uParam0, bParam2);
					uParam0->f_49 = 2;
				}
				break;
			case 2:
				if (!__LIB_4__::func_807(0) && __LIB_2__::func_470())
				{
					func_1092(uParam0, "PLAYER_HOLDUP_ROB", bParam2);
					func_397(uParam0, 128);
					uParam0->f_49 = 1;
				}
				break;
		}
	}
	iVar2 = 1;
	iVar3 = 2;
	if (func_313(uParam0, 256))
	{
		if (!func_313(uParam0, 67108864) && !bParam5)
		{
			iVar3 = 3;
			__LIB_3__::func_544(&(uParam0->f_7[0 /*18*/]), 0);
			func_323(uParam0, 67108864);
		}
	}
	iVar0 = func_1094(uParam0, &(uParam0->f_7[0 /*18*/]), 30f, &(uParam0->f_26), &iVar2, iParam4, 1, 0, uParam0->f_92, 65792 | __LIB_2__::func_340(iVar3, 0, 0), iParam1, 0, 2, 0, -1082130432 /* Float: -1f */, 1);
	iVar1 = iVar0;
	if (__LIB_2__::func_341(&(uParam0->f_7[0 /*18*/])))
	{
		if (!uParam0->f_88)
		{
			if (uParam0->f_7[0 /*18*/].f_1 == 0)
			{
				__LIB_3__::func_648(*uParam0, 500);
				func_1095(uParam0, &(uParam0->f_7[0 /*18*/]), &(uParam0->f_26), 30f, 65792 | __LIB_2__::func_340(3, 0, 0), uParam0->f_92, 2, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
				__LIB_18__::func_851(*uParam0);
				func_741(uParam0, 0, 0);
			}
			else if (uParam0->f_7[0 /*18*/].f_1 == 1)
			{
				__LIB_3__::func_648(*uParam0, 500);
				__LIB_18__::func_851(*uParam0);
				func_741(uParam0, 0, 1);
			}
			__LIB_1__::func_283(&(uParam0->f_79), 0);
			uParam0->f_88 = 1;
		}
	}
	if (__LIB_1__::func_285(&(uParam0->f_79), 1f) && !__LIB_1__::func_285(&(uParam0->f_79), 2f))
	{
		if (!__LIB_0__::func_163(*uParam0, -875674219))
		{
			if (TASK::_0x916B8E075ABC8B4E(*uParam0, 1) || !TASK::_0x02EBBB3989B7E695(*uParam0))
			{
				__LIB_2__::func_357(*uParam0, Global_36, 1, 0, 3);
			}
			else
			{
				__LIB_2__::func_357(*uParam0, Global_36, 5, 0, 3);
			}
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam0, Global_35, -1, -1f, -1f, -1f);
		}
	}
	if (uParam0->f_88)
	{
	}
	switch (iVar1)
	{
		case 0:
			if (!bParam3)
			{
				func_644(uParam0, 14f, fParam6, 1);
			}
			EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DANGEROUS_NEW"), Global_35, 10f, 10f, 10f, -1f, -1f, 180f, true, false, -1, -1);
			func_323(uParam0, 524288);
			__LIB_0__::func_37(&(uParam0->f_79));
			uParam0->f_88 = 0;
			break;
		case 1:
			func_323(uParam0, 65536);
			__LIB_0__::func_37(&(uParam0->f_79));
			uParam0->f_88 = 0;
			break;
	}
	return iVar1;
}

void func_718()
{
	char* sVar0;
	switch (iLocal_29)
	{
		case 1:
			sVar0 = "Robberies_Shop_Take_Money_Scene";
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sVar0))
			{
				AUDIO::STOP_AUDIO_SCENE(sVar0);
			}
			break;
		default:
			break;
	}
}

void func_719()
{
	if (func_115(1))
	{
		return;
	}
	switch (iLocal_29)
	{
		case 1:
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_62.f_170, 0f);
			func_116(1);
			break;
	}
}

bool func_723()
{
	if (func_60(256))
	{
		return false;
	}
	if (!func_65())
	{
		return false;
	}
	if (func_44(64))
	{
		return false;
	}
	switch (iLocal_29)
	{
		case 1:
			if (!func_295())
			{
				return false;
			}
			break;
	}
	if (func_60(8388608))
	{
		return true;
	}
	if (!func_1100())
	{
		return false;
	}
	return true;
}

bool func_724()
{
	if (ENTITY::IS_ENTITY_DEAD(Local_62.f_170))
	{
		return true;
	}
	return false;
}

bool func_725()
{
	if (!func_313(&(Local_62.f_1), 32768))
	{
		func_323(&(Local_62.f_1), 32768);
	}
	if (!func_313(&(Local_62.f_1), 65536))
	{
		return false;
	}
	return true;
}

void func_727()
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1103(), 1f, 30000, 0.1f, 0, 40000f);
	TASK::TASK_ACHIEVE_HEADING(0, -102.87f, 0);
	__LIB_1__::func_474(Local_62.f_170, &iVar0, 4f, 4f, 1, 1);
	if (!func_60(2048))
	{
		func_596(&(Local_62.f_170), "SRGA_A_HOLDUP", "SRGA_J_HOLDUP", 1);
	}
	else
	{
		func_596(&(Local_62.f_170), "SRG_IG4_P1_a", "SRG_IG4_P1_J", 1);
	}
	func_553(Local_62.f_1216[1], "pbAIToSideDoor", "SCENE_RHDGUN_HOLDUP");
	__LIB_1__::func_148(&(Local_62.f_1456));
	func_418(8);
	func_1104(&(Local_62.f_170.f_13), &(Local_62.f_170.f_85), 0);
	__LIB_3__::func_544(&(Local_62.f_390[0 /*126*/].f_12), 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_62.f_170, 46, true);
}

void func_728()
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1105(), 1f, -1, 0.1f, 2097153, 40000f);
	TASK::TASK_ACHIEVE_HEADING(0, -5.31f, 0);
	__LIB_1__::func_474(Local_62.f_170, &iVar0, 4f, 4f, 1, 1);
	func_596(&(Local_62.f_170), "PRNBG_IG1_AIM", "PRNBG_IG1_AIMJ", 0);
	func_297(Local_62.f_170, Global_35, &(Local_62.f_170.f_42), 9000, vLocal_59, 1, 0);
	func_553(Local_62.f_1216[0], "PBL_holdup", "SCENE_SDNGUN_HOLDUP");
	__LIB_1__::func_148(&(Local_62.f_1456));
	func_128(&(Local_62.f_1512[1]), "SPI_SDNGUN_BACK_DOOR_KNOCK");
	__LIB_2__::func_829(&(Local_62.f_170.f_14), 1);
	__LIB_2__::func_956(&(Local_62.f_170.f_14), 1);
	func_1104(&(Local_62.f_170.f_13), &(Local_62.f_170.f_85), 0);
}

void func_729()
{
	int iVar0;
	PED::_0xB8DE69D9473B7593(Local_62.f_170, 23);
	PED::_0xB8DE69D9473B7593(Local_62.f_170, 24);
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_62.f_1376))
	{
		Local_62.f_1376 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), -1790.353f, -389.5667f, 159.3297f, 0f, 0f, -35f, 2f, 2.5f, 5f);
	}
	iLocal_1777 = 1;
	func_608();
	func_412();
	func_239(3);
	func_29(64);
	__LIB_4__::func_261(Local_62, 524288);
	func_1104(&(Local_62.f_170.f_13), &(Local_62.f_170.f_85), 0);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1106(), 1f, 30000, 0.1f, 0, 40000f);
	TASK::TASK_ACHIEVE_HEADING(0, 147.08f, 0);
	__LIB_1__::func_474(Local_62.f_170, &iVar0, 4f, 4f, 1, 1);
	func_596(&(Local_62.f_170), "PRSGS_DOWN", "PRSGS_DOWNJ", 1);
	func_553(Local_62.f_1216[0], "pbOpenToBasement", "SCENE_STRGEN_HOLDUP");
	func_553(Local_62.f_1216[0], "pbOpenToBasement_Alt", "SCENE_STRGEN_HOLDUP");
	__LIB_1__::func_148(&(Local_62.f_1456));
}

void func_730()
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1107(), 1f, 30000, 0.1f, 0, 40000f);
	TASK::TASK_ACHIEVE_HEADING(0, 6.31f, 0);
	__LIB_1__::func_474(Local_62.f_170, &iVar0, 4f, 4f, 1, 1);
	func_596(&(Local_62.f_170), "SRVD_A_HUPBACK", "SRVD_J_HUPBACK", 1);
	func_553(Local_62.f_1216[4], "PBL_KNOCK_DOOR", "SCENE_VALDOC_HOLDUPBACKROOM");
	func_1104(&(Local_62.f_170.f_13), &(Local_62.f_170.f_85), 0);
	__LIB_1__::func_148(&(Local_62.f_1456));
}

bool func_733(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(Local_62.f_1286))
	{
		if (__LIB_14__::func_606(iParam0, Local_62.f_1286))
		{
			if (!Local_62.f_1286.f_1)
			{
				Local_62.f_1286.f_1 = 1;
			}
			return true;
		}
	}
	return false;
}

void func_735(var uParam0)
{
	*uParam0 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), Global_36, 0f, -1f, -1f, -1f, -1f, -1, -1);
}

bool func_736(var uParam0, float fParam1)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	float fVar7;
	float fVar8;
	float fVar9;
	if (!func_313(uParam0, 33554432))
	{
		return true;
	}
	if (!__LIB_2__::func_1(*uParam0, 0, 1))
	{
		return true;
	}
	if (fParam1 != 30f)
	{
		fParam1 = 30f;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
	iVar3 = func_654(uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar3, true, false) };
	}
	fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, uParam0->f_60, false);
	fVar8 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_60, false);
	fVar9 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar4, false);
	if (fVar8 < 2f && fVar8 < fVar7)
	{
		if (fVar8 < fVar9)
		{
			return true;
		}
	}
	if ((fVar7 > 4f && fVar8 < 4f) && fVar8 < fVar7)
	{
		return true;
	}
	if (PED::_IS_PED_HOGTIED(*uParam0))
	{
		return true;
	}
	return false;
}

void func_737()
{
	if (func_335(4))
	{
		func_1108();
		return;
	}
	if (!func_276(&(Local_62.f_170.f_214), 10f, 0, "shoprob.clerkData.timerGeneric"))
	{
		return;
	}
	__LIB_0__::func_37(&(Local_62.f_170.f_214));
	if (iLocal_29 != 0 && iLocal_29 != 1)
	{
		__LIB_2__::func_478(Local_62.f_170, Global_35, "HOLDUP_DONT_SHOOT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	func_533(4);
}

bool func_740(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		return true;
	}
	return false;
}

void func_741(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!__LIB_1__::func_489(&(uParam0->f_26[0 /*11*/]), 0))
		{
			__LIB_2__::func_411(&(uParam0->f_26[0 /*11*/]), 1, 0);
		}
		if (bParam2)
		{
			if (!__LIB_1__::func_489(&(uParam0->f_26[1 /*11*/]), 0))
			{
				__LIB_2__::func_411(&(uParam0->f_26[1 /*11*/]), 1, 0);
			}
		}
	}
	else
	{
		if (__LIB_1__::func_489(&(uParam0->f_26[0 /*11*/]), 0))
		{
			__LIB_2__::func_411(&(uParam0->f_26[0 /*11*/]), 0, 0);
		}
		if (bParam2)
		{
			if (__LIB_1__::func_489(&(uParam0->f_26[1 /*11*/]), 0))
			{
				__LIB_2__::func_411(&(uParam0->f_26[1 /*11*/]), 0, 0);
			}
		}
	}
}

void func_742(var uParam0)
{
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, Local_62.f_1.f_60, 1f, 20000, 0.1f, 0, Local_62.f_1.f_63);
}

void func_743(int iParam0)
{
	Local_62.f_170.f_9 = iParam0;
}

void func_744()
{
	Local_62.f_170.f_9 = 0;
}

bool func_745(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_82[0], "pblExitB");
	if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_82[0], "pblExitB"))
	{
		iVar0 = func_654(uParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (uParam0->f_70 < 0f)
			{
				vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0.074814f, -0.117756f, 0.059386f) };
				uParam0->f_2[0] = OBJECT::CREATE_OBJECT(joaat("P_CS_BILLSINGLE01BX"), vVar1, true, true, false, false, true);
				vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -0.082664f, -0.117757f, 0.059386f) };
				uParam0->f_2[1] = OBJECT::CREATE_OBJECT(joaat("P_CS_BILLSINGLE01BX"), vVar1, true, true, false, false, true);
				uParam0->f_5 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(iVar0, joaat("PROP_PLAYER_CASH_REGISTER_CLERK_OPENED"), 0f, 0f, 0f, 0f, 0, 0, 1);
				if (!__LIB_0__::func_138(__LIB_14__::func_666(uParam0->f_82[0], "pblExitB"), ENTITY::GET_ENTITY_COORDS(iVar0, true, false)))
				{
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_82[0], ENTITY::GET_ENTITY_COORDS(iVar0, true, false), ENTITY::GET_ENTITY_ROTATION(iVar0, 2), 2);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_82[0], "CLERK", *uParam0, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_82[0], "REGISTER", iVar0, 0);
				}
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_82[0], "OOXO", uParam0->f_2[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_82[0], "OXOO", uParam0->f_2[1], 0);
				PED::SET_PED_MOVE_ANIMS_BLEND_OUT(*uParam0);
				uParam0->f_70 = __LIB_0__::func_36();
			}
			else if ((__LIB_0__::func_36() - uParam0->f_70) >= 0.2f)
			{
				TASK::CLEAR_PED_TASKS(*uParam0, true, false);
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_82[0]);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_82[0], "pblExitB", true);
				return true;
			}
		}
		else
		{
			if (func_313(uParam0, 33554432))
			{
				func_397(uParam0, 33554432);
			}
			func_274(uParam0);
		}
	}
	return false;
}

void func_746(var uParam0)
{
	int iVar0[2];
	if (!func_313(uParam0, 1))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_2[0], true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_2[1], true);
		TASK::_0x8360C47380B6F351(uParam0->f_5, uParam0->f_2[0], "OOXO", 1);
		TASK::_0x8360C47380B6F351(uParam0->f_5, uParam0->f_2[1], "OXOO", 1);
		iVar0[0] = TASK::_GET_SCENARIO_POINT_ENTITY(uParam0->f_5, "OXOO");
		iVar0[1] = TASK::_GET_SCENARIO_POINT_ENTITY(uParam0->f_5, "OOXO");
		if (ENTITY::DOES_ENTITY_EXIST(iVar0[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0[0], true);
			ENTITY::SET_ENTITY_COLLISION(iVar0[0], true, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0[1]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0[1], true);
			ENTITY::SET_ENTITY_COLLISION(iVar0[1], true, false);
		}
		func_323(uParam0, 1);
	}
}

char* func_747(var uParam0)
{
	char* sVar0;
	if (uParam0->f_93 == -2)
	{
		uParam0->f_93 = func_1110(uParam0);
	}
	sVar0 = "pblExitB";
	switch (uParam0->f_93)
	{
		case 0:
			sVar0 = "pblExitB";
			break;
		case 1:
			sVar0 = "pblExitL";
			break;
		case 2:
			sVar0 = "pblExitR";
			break;
		case 3:
			sVar0 = "pblExitBFar";
			break;
		case 4:
			sVar0 = "pblExitLFar";
			break;
		case 5:
			sVar0 = "pblExitRFar";
			break;
		case 7:
			sVar0 = "pblExitL45";
			break;
		case 6:
			sVar0 = "pblExitR45";
			break;
	}
	return sVar0;
}

void func_753(var uParam0, int iParam1, float fParam2)
{
	if (func_55(131072))
	{
		func_645(&(Local_62.f_1), *uParam0);
		return;
	}
	if (!func_55(65536))
	{
		if (!func_65())
		{
			return;
		}
		if (__LIB_14__::func_606(Global_35, Local_62.f_1290) || __LIB_14__::func_606(Global_35, Local_62.f_1292))
		{
			return;
		}
		if (!func_55(32768))
		{
			if (func_618(&(Local_62.f_1)))
			{
				Local_62.f_1619++;
			}
			if (Local_62.f_1619 < 10)
			{
				return;
			}
			func_57(32768);
		}
	}
	if (!func_276(&(Local_62.f_1465), fParam2, 0, "timerTriggerLoiterWitness"))
	{
		return;
	}
	func_57(65536);
	if (!func_716(&(Local_62.f_1), &(Local_62.f_1465), 1f, Local_62, iParam1, uParam0))
	{
		return;
	}
	__LIB_0__::func_37(&(Local_62.f_1465));
	func_57(131072);
}

void func_757()
{
	func_553(Local_62.f_1216[1], "pbToTrapDoor", "SCENE_RHDGUN_HOLDUP");
	func_553(Local_62.f_1216[1], "pbNoWaitOpenTrap", "SCENE_RHDGUN_HOLDUP");
	func_553(Local_62.f_1216[1], "pbTrapDoorWait", "SCENE_RHDGUN_HOLDUP");
}

void func_758()
{
	func_553(Local_62.f_1216[0], "pbOpenToBasement", "SCENE_STRGEN_HOLDUP");
	func_553(Local_62.f_1216[0], "pbLadderToCorner", "SCENE_STRGEN_HOLDUP");
	func_553(Local_62.f_1216[0], "pbOpenToBasement_Alt", "SCENE_STRGEN_HOLDUP");
}

bool func_760(var uParam0, var uParam1)
{
	int iVar0;
	char* sVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	float fVar6;
	iVar0 = Local_62.f_1216[0];
	sVar1 = "SCENE_SDNGUN_HOLDUP";
	if (func_308(*uParam0, 0, &(uParam0->f_14), &uVar2, 0, 0))
	{
	}
	if (func_308(*uParam1, 0, &(uParam1->f_89), &uVar3, 0, 0))
	{
	}
	func_1112(uParam1, 0);
	bVar4 = false;
	bVar5 = false;
	func_1113(iVar0, sVar1, &bVar4, &bVar5);
	if (!func_1114(iVar0, sVar1))
	{
		if (__LIB_14__::func_606(*uParam0, Local_62.f_1247[1 /*2*/]))
		{
			func_297(Local_62.f_170, Global_35, &(Local_62.f_170.f_42), 0, vLocal_59, 1, 0);
		}
	}
	if (!func_120(1) && !func_120(2))
	{
		if (!bVar4 && !bVar5)
		{
			if (func_1115(iVar0, sVar1, uParam0, &uVar2))
			{
				func_91(67108864);
				__LIB_13__::func_869(1);
			}
		}
		else if (bVar4)
		{
			if (func_1117(uParam0, &uVar2))
			{
				__LIB_13__::func_869(10);
			}
		}
	}
	if (func_1118(iVar0, sVar1, &uVar2, &uVar3))
	{
		__LIB_14__::func_633(0);
		__LIB_2__::func_506(iVar0, sVar1);
		func_517(1);
		__LIB_13__::func_869(12);
	}
	else if (func_1120(iVar0, sVar1, &uVar2, &uVar3))
	{
		__LIB_14__::func_633(0);
		func_517(2);
		__LIB_13__::func_869(11);
	}
	if (iLocal_45 < 9)
	{
		if (!__LIB_2__::func_1(*uParam0, 0, 1))
		{
			__LIB_0__::func_172(Local_62.f_1247[2 /*2*/]);
			func_254();
		}
	}
	switch (iLocal_45)
	{
		case 0:
			if (!func_799(0))
			{
				return false;
			}
			if (!func_221(32))
			{
				return false;
			}
			func_813(*uParam0, __LIB_3__::func_508(*uParam0, iVar0, "PED_GUNSMITH", "PBL_holdup", 0), __LIB_3__::func_656(*uParam0, iVar0, "PED_GUNSMITH", "PBL_holdup", 0), 1f, 0.1f, 0, -1);
			__LIB_0__::func_568(2698.255f, -1295.365f, 53.11724f, 12.9f, 0);
			__LIB_0__::func_568(2712.037f, -1293.516f, 48.61661f, 1.42f, 0);
			__LIB_0__::func_568(2721.891f, -1289.936f, 48.68741f, 1.54f, 0);
			func_890(&(Local_62.f_1355[1 /*2*/]), &(Local_62.f_1355[1 /*2*/].f_1), 2697.768f, -1294.845f, 49.96861f, 0f, 0f, 25.25522f, 17.61353f, 13.00342f, 2.718853f, 1, 0, 1, 0, 0);
			func_890(&(Local_62.f_1355[2 /*2*/]), &(Local_62.f_1355[2 /*2*/].f_1), 2707.785f, -1290.242f, 49.95722f, 0f, 0f, -64.94954f, 12.39771f, 4.004883f, 3.524149f, 1, 0, 1, 0, 0);
			func_890(&(Local_62.f_1355[3 /*2*/]), &(Local_62.f_1355[3 /*2*/].f_1), 2715.482f, -1291.959f, 49.88335f, 0f, 0f, -65.30489f, 2.770508f, 16.50281f, 3.328354f, 1, 0, 1, 0, 0);
			func_890(&(Local_62.f_1355[4 /*2*/]), &(Local_62.f_1355[4 /*2*/].f_1), 2706.833f, -1290.677f, 56.07883f, 0f, 0f, 24.99879f, 6.821086f, 12.41846f, 14.92454f, 1, 0, 1, 0, 0);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_SMOKE", false);
			TASK::SET_SCENARIO_TYPE_ENABLED("PROP_HUMAN_SEAT_BENCH_PORCH", false);
			PED::_0xF7EA250B9A919E03(joaat("INTIMIDATED_ON_KNEES"), *uParam1);
			PED::_0xF7EA250B9A919E03(joaat("INTIMIDATED_ON_ASS"), *uParam1);
			PED::_0xF7EA250B9A919E03(joaat("INTIMIDATED_ON_FEET_REACTION"), *uParam1);
			Local_62.f_1247[2 /*2*/] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 2711.144f, -1290.38f, 49.9692f, 0f, 0f, -155.136f, 1.539864f, 2.14116f, 2.693279f);
			__LIB_13__::func_869(3);
			break;
		case 1:
			if (PED::IS_PED_RAGDOLL(*uParam0))
			{
				return false;
			}
			if (PED::_0x3BDFCF25B58B0415(*uParam0))
			{
				return false;
			}
			if (!func_799(0))
			{
				return false;
			}
			func_813(*uParam0, __LIB_3__::func_508(*uParam0, iVar0, "PED_GUNSMITH", "PBL_holdup", 0), __LIB_3__::func_656(*uParam0, iVar0, "PED_GUNSMITH", "PBL_holdup", 0), 1f, 0.1f, 0, -1);
			func_91(67108864);
			__LIB_13__::func_869(2);
			break;
		case 2:
			fVar6 = 3f;
			if (PED::IS_PED_RAGDOLL(*uParam0))
			{
				func_91(67108864);
				__LIB_13__::func_869(1);
			}
			else if (PED::_0x3BDFCF25B58B0415(*uParam0))
			{
				func_91(67108864);
				__LIB_13__::func_869(1);
			}
			else if (func_1124(*uParam0, iVar0, "PED_GUNSMITH", "PBL_holdup", 0.4f, 55f, 0))
			{
				if (func_799(0))
				{
					func_1125();
					func_561(67108864);
					__LIB_13__::func_869(6);
				}
			}
			else if (!__LIB_14__::func_634(uParam0) && !__LIB_14__::func_642(Local_62.f_170, 1435919172, 0))
			{
				if (!func_276(&(uParam0->f_217), fVar6, 1, "gunsmith.timerIsInterrupted"))
				{
					return false;
				}
				__LIB_0__::func_37(&(uParam0->f_217));
				func_91(67108864);
				__LIB_13__::func_869(1);
			}
			break;
		case 3:
			if (!func_799(0))
			{
				return false;
			}
			if (!func_1124(*uParam0, iVar0, "PED_GUNSMITH", "PBL_holdup", 0.4f, 55f, 0))
			{
				return false;
			}
			func_1125();
			__LIB_13__::func_869(6);
			break;
		case 6:
			if (!__LIB_14__::func_607(iVar0, "wait_at_door_idle", sVar1))
			{
				return false;
			}
			__LIB_13__::func_869(7);
			break;
		case 7:
			if (!__LIB_2__::func_227(-2.5f, 1, 0, 0))
			{
				return false;
			}
			__LIB_8__::func_336(&(Local_62.f_1518), "PRNBG_IG1_OPEN", *uParam0, *uParam1, 0, 0, 1, 1);
			func_553(iVar0, "PBL_pistol_whip", sVar1);
			func_553(iVar0, "PBL_butt_stock_hit", sVar1);
			func_553(iVar0, "PBL_alert_guard", sVar1);
			__LIB_13__::func_869(8);
			break;
		case 8:
			if (__LIB_14__::func_607(iVar0, "wait_at_door_passin", sVar1))
			{
				return false;
			}
			else if (__LIB_14__::func_607(iVar0, "wait_at_door_idle", sVar1))
			{
				func_277(iVar0, "BOOL_STOP_WAIT_AT_DOOR_LOOP", 1, sVar1);
			}
			if (bVar4)
			{
				if (!func_280(iVar0, sVar1, 0.159f))
				{
					return false;
				}
			}
			else
			{
				return false;
			}
			func_297(*uParam0, *uParam1, &(uParam0->f_42), -1, vLocal_59, 1, 0);
			__LIB_13__::func_869(9);
			break;
		case 9:
			if (!bVar5)
			{
				return false;
			}
			__LIB_0__::func_172(Local_62.f_1247[2 /*2*/]);
			func_224(8);
			__LIB_13__::func_869(30);
			break;
		case 10:
			if (func_280(iVar0, sVar1, 0.399f))
			{
				__LIB_0__::func_172(Local_62.f_1247[2 /*2*/]);
				__LIB_0__::func_172(Local_62.f_1247[3 /*2*/]);
				func_224(64);
				__LIB_13__::func_869(11);
			}
			else
			{
				__LIB_2__::func_506(iVar0, sVar1);
				__LIB_13__::func_869(20);
			}
			break;
		case 11:
			if (!func_280(iVar0, sVar1, 0.451f) && __LIB_14__::func_634(uParam0))
			{
				return false;
			}
			__LIB_0__::func_172(Local_62.f_1247[2 /*2*/]);
			__LIB_0__::func_172(Local_62.f_1247[3 /*2*/]);
			func_1127(*uParam1, 0);
			__LIB_2__::func_73(*uParam1, &(uParam1->f_1), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
			__LIB_13__::func_869(20);
			break;
		case 12:
			__LIB_8__::func_336(&(Local_62.f_1518), "PRNBG_NOOPEN2", *uParam1, Global_35, 0, 0, 1, 1);
			__LIB_2__::func_506(iVar0, sVar1);
			__LIB_13__::func_869(20);
			break;
		case 20:
			if (ENTITY::IS_ENTITY_DEAD(*uParam0))
			{
				if (!func_120(32))
				{
					__LIB_13__::func_869(31);
					return false;
				}
				else
				{
					__LIB_13__::func_869(32);
					return false;
				}
			}
			func_1128(uParam0, "GUNSMITH");
			__LIB_13__::func_869(21);
			break;
		case 21:
			if (!__LIB_2__::func_227(-2f, 1, 0, 0))
			{
				return false;
			}
			if (ENTITY::IS_ENTITY_DEAD(*uParam0))
			{
				if (!func_120(32))
				{
					__LIB_13__::func_869(31);
					return false;
				}
				else
				{
					__LIB_13__::func_869(32);
					return false;
				}
			}
			if (!func_120(2))
			{
				__LIB_8__::func_336(&(Local_62.f_1518), "PRNBG_NOOPEN1", *uParam0, Global_35, 0, 0, 1, 1);
				__LIB_13__::func_869(31);
			}
			break;
		case 30:
			if (__LIB_2__::func_1(*uParam0, 0, 1))
			{
				PED::SET_PED_CAN_BE_TARGETTED(*uParam0, false);
			}
			__LIB_8__::func_336(&(Local_62.f_1518), "PRNBG_IG1_NERV", *uParam0, *uParam1, 0, 0, 1, 1);
			func_533(2048);
			__LIB_13__::func_869(32);
			break;
		case 31:
			return false;
		case 32:
			return true;
	}
	return false;
}

bool func_761(var uParam0)
{
	float fVar0;
	var uVar1;
	fVar0 = 158.09f;
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		__LIB_0__::func_172(Local_62.f_1247[13 /*2*/]);
		func_254();
	}
	func_1129();
	func_1130(*uParam0);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0) && !func_221(1024))
	{
		if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_62.f_1216[1]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_62.f_1216[1], false)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(*uParam0, Local_62.f_1216[1])) && func_65())
		{
			if ((((__LIB_14__::func_607(Local_62.f_1216[1], "ToTrapDoor", "SCENE_RHDGUN_HOLDUP") || __LIB_14__::func_607(Local_62.f_1216[1], "AIToDoor", "SCENE_RHDGUN_HOLDUP")) || __LIB_14__::func_607(Local_62.f_1216[1], "NoWaitOpenTrap", "SCENE_RHDGUN_HOLDUP")) || __LIB_14__::func_607(Local_62.f_1216[1], "OpenTrapDoor", "SCENE_RHDGUN_HOLDUP")) || __LIB_14__::func_607(Local_62.f_1216[1], "AIToTrapDoor", "SCENE_RHDGUN_HOLDUP"))
			{
				PED::SET_PED_CONFIG_FLAG(Local_62.f_170, 137, true);
				PED::SET_PED_CONFIG_FLAG(Local_62.f_170, 169, true);
				PED::SET_PED_CONFIG_FLAG(Local_62.f_170, 170, true);
				PED::SET_PED_CONFIG_FLAG(Local_62.f_170, 302, true);
				ENTITY::SET_ENTITY_PROOFS(Local_62.f_170, 16, false);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(Local_62.f_170, 137, false);
				PED::SET_PED_CONFIG_FLAG(Local_62.f_170, 169, false);
				PED::SET_PED_CONFIG_FLAG(Local_62.f_170, 170, false);
				PED::SET_PED_CONFIG_FLAG(Local_62.f_170, 302, false);
				ENTITY::SET_ENTITY_PROOFS(Local_62.f_170, 0, false);
			}
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(Local_62.f_170, 137, false);
			PED::SET_PED_CONFIG_FLAG(Local_62.f_170, 169, false);
			PED::SET_PED_CONFIG_FLAG(Local_62.f_170, 170, false);
			PED::SET_PED_CONFIG_FLAG(Local_62.f_170, 302, false);
			ENTITY::SET_ENTITY_PROOFS(Local_62.f_170, 0, false);
		}
	}
	if (func_221(256) && !func_221(1024))
	{
		if (ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			return true;
		}
	}
	func_308(*uParam0, 0, &(uParam0->f_14), &uVar1, 0, 0);
	if (__LIB_18__::func_845(*uParam0))
	{
		if (!func_221(256))
		{
			if (iLocal_45 != 5 && iLocal_45 != 6)
			{
				func_1132(Local_62.f_1216[1], "SCENE_RHDGUN_HOLDUP", 1);
				__LIB_2__::func_506(Local_62.f_1216[1], "SCENE_RHDGUN_HOLDUP");
				func_796(1, func_810(1), 0, "pbAIToSideDoor");
				__LIB_13__::func_869(5);
			}
		}
		else if (!func_221(1024))
		{
			if (iLocal_45 != 10 && iLocal_45 != 11)
			{
				__LIB_2__::func_506(Local_62.f_1216[1], "SCENE_RHDGUN_HOLDUP");
				func_796(1, func_810(1), 0, "pbAIToDoor");
				__LIB_13__::func_869(10);
			}
		}
	}
	switch (iLocal_45)
	{
		case 0:
			if (!__LIB_2__::func_227(-3f, 1, 0, 0))
			{
				return false;
			}
			if (__LIB_14__::func_623(Local_62.f_1216[1], "SCENE_RHDGUN_HOLDUP", "pbToTrapDoor"))
			{
				__LIB_13__::func_869(1);
			}
			else if (__LIB_14__::func_643(*uParam0, "script_proc@robberies@shop@rhodes@gunsmith@inside_upstairs", "door_loop_owner"))
			{
				_NAMESPACE29::_0x66F9EB44342BB4C5(*uParam0, &(uParam0->f_42));
				__LIB_9__::func_793(Local_62.f_1216[1], "pbToTrapDoor", "SCENE_RHDGUN_HOLDUP", 1);
				func_596(&(Local_62.f_390[0 /*126*/]), "SRGKNOOPN", "SRGKNOOPNJ", 1);
				__LIB_13__::func_869(1);
			}
			break;
		case 1:
			_NAMESPACE29::_0x66F9EB44342BB4C5(*uParam0, &(uParam0->f_42));
			__LIB_13__::func_869(2);
			break;
		case 2:
			if (func_280(Local_62.f_1216[1], "SCENE_RHDGUN_HOLDUP", 0.99f))
			{
				if (func_1133(uParam0))
				{
					func_586();
					__LIB_9__::func_793(Local_62.f_1216[1], "pbNoWaitOpenTrap", "SCENE_RHDGUN_HOLDUP", 1);
					__LIB_8__::func_336(&(Local_62.f_1518), "SRG_OPEN_TRAP2", Local_62.f_170, Global_35, 0, 0, 1, 1);
					__LIB_13__::func_869(32);
				}
				else
				{
					__LIB_9__::func_793(Local_62.f_1216[1], "pbTrapDoorWait", "SCENE_RHDGUN_HOLDUP", 1);
					__LIB_13__::func_869(3);
				}
			}
			break;
		case 3:
			if (func_1133(uParam0))
			{
				func_586();
				func_277(Local_62.f_1216[1], "bStopWaitTrapDoorLoop", 1, "SCENE_RHDGUN_HOLDUP");
				__LIB_8__::func_336(&(Local_62.f_1518), "SRG_OPEN_TRAP", *uParam0, Global_35, 0, 0, 1, 1);
				__LIB_13__::func_869(32);
			}
			break;
		case 5:
			if (PED::IS_PED_RAGDOLL(*uParam0))
			{
				return false;
			}
			func_1134(*uParam0, &uVar1);
			func_813(*uParam0, func_1103(), -102.87f, 1f, 0.1f, 0, 20000);
			__LIB_13__::func_869(6);
			break;
		case 6:
			if (PED::IS_PED_RAGDOLL(*uParam0))
			{
				__LIB_13__::func_869(5);
			}
			else if (__LIB_3__::func_501(*uParam0, func_1103(), -102.87f, 0.15f, 90f, 1))
			{
				if (func_799(1))
				{
					func_1136();
					__LIB_14__::func_616(Local_62.f_1216[1], "SCENE_RHDGUN_HOLDUP");
					func_757();
					__LIB_13__::func_869(2);
				}
			}
			else if (!__LIB_14__::func_642(*uParam0, 1435919172, 1))
			{
				__LIB_13__::func_869(5);
			}
			break;
		case 10:
			if (PED::IS_PED_RAGDOLL(Local_62.f_170))
			{
				return false;
			}
			func_1134(*uParam0, &uVar1);
			func_813(*uParam0, 1326.555f, -1324.745f, 76.88701f, fVar0, 1065353216 /* Float: 1f */, 1050253722 /* Float: 0.3f */, 0, 20000);
			__LIB_13__::func_869(11);
			break;
		case 11:
			if (PED::IS_PED_RAGDOLL(Local_62.f_170))
			{
				__LIB_13__::func_869(10);
			}
			else if (__LIB_3__::func_501(Local_62.f_170, 1326.555f, -1324.745f, 77.88701f, fVar0, 0.4f, 20f, 1))
			{
				if (func_799(1))
				{
					func_1136();
					__LIB_14__::func_616(Local_62.f_1216[1], "SCENE_RHDGUN_HOLDUP");
					func_757();
					__LIB_13__::func_869(12);
				}
			}
			else if (!__LIB_14__::func_642(Local_62.f_170, 1435919172, 1))
			{
				__LIB_13__::func_869(10);
			}
			break;
		case 12:
			if (func_221(1024))
			{
				__LIB_13__::func_869(32);
			}
			break;
		case 32:
			if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
			{
				PED::SET_PED_CAN_BE_TARGETTED(*uParam0, false);
			}
			__LIB_1__::func_948(934926308, 0, 0, 0, 1, 0, 0, 0);
			return true;
	}
	return false;
}

bool func_762(int* iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return false;
	}
	if (func_1137(iParam0))
	{
		__LIB_13__::func_869(2);
	}
	switch (iLocal_45)
	{
		case 0:
			if (!__LIB_2__::func_227(-3f, 1, 0, 0))
			{
				return false;
			}
			if (__LIB_14__::func_643(*iParam0, func_1138(), "trapdoor_idle"))
			{
				__LIB_9__::func_793(Local_62.f_1216[0], "pbOpenToBasement_Alt", "SCENE_STRGEN_HOLDUP", 1);
				__LIB_13__::func_869(3);
				PED::_0xAE6004120C18DF97(Local_62.f_170, 0, 0);
			}
			break;
		case 1:
			if (!PED::IS_PED_RAGDOLL(Local_62.f_170))
			{
				if (!func_335(2048))
				{
					__LIB_8__::func_336(&(Local_62.f_1518), "PRSGS_HURT1", Local_62.f_170, Global_35, 0, 0, 1, 1);
					func_533(2048);
				}
				func_813(Local_62.f_170, func_1106(), 147.08f, 1065353216 /* Float: 1f */, 1050253722 /* Float: 0.3f */, 0, 20000);
				__LIB_13__::func_869(2);
			}
			break;
		case 2:
			if (PED::IS_PED_RAGDOLL(Local_62.f_170))
			{
				__LIB_13__::func_869(1);
			}
			else if (__LIB_3__::func_501(Local_62.f_170, func_1106(), 147.08f, 0.4f, 20f, 1))
			{
				if (func_799(0))
				{
					func_1139();
					__LIB_14__::func_616(Local_62.f_1216[0], "SCENE_STRGEN_HOLDUP");
					__LIB_9__::func_793(Local_62.f_1216[0], "pbOpenToBasement_Alt", "SCENE_STRGEN_HOLDUP", 1);
					__LIB_13__::func_869(3);
					PED::_0xAE6004120C18DF97(Local_62.f_170, 0, 0);
					__LIB_2__::func_279(Local_62.f_170, 1);
				}
			}
			else if (!__LIB_14__::func_642(Local_62.f_170, 1435919172, 1))
			{
				__LIB_13__::func_869(1);
			}
			break;
		case 3:
			if (__LIB_14__::func_643(*iParam0, func_1138(), "descend_ladder"))
			{
				if (func_56(Global_35, 0))
				{
					func_596(iParam0, "PRSGS_LADDER", "PRSGS_LADDERJ", 1);
				}
				return true;
			}
			break;
	}
	return false;
}

bool func_763(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	if (iLocal_45 == 31)
	{
		return false;
	}
	iVar0 = Local_62.f_1216[5];
	sVar1 = "SCENE_VALDOC_GANGOPENBACKROOM";
	iVar2 = Local_62.f_1216[4];
	sVar3 = "SCENE_VALDOC_HOLDUPBACKROOM";
	if (func_771(Global_35))
	{
		func_553(iVar0, "PBL_BREAKOUT", sVar1);
		func_1140();
		func_517(16);
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		func_254();
	}
	if (!func_44(4194304))
	{
		if (PED::_IS_PED_HOGTIED(*iParam0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
			func_91(4194304);
		}
	}
	if (func_1141())
	{
		if (func_308(*uParam1, 0, &(uParam1->f_89), &iVar6, 0, 0))
		{
			if ((iVar6 == 2 || iVar6 == 4) || iVar6 == 256)
			{
				func_1018();
				__LIB_13__::func_869(14);
			}
			else if (iVar6 == 1)
			{
				__LIB_13__::func_869(14);
			}
		}
	}
	if (func_308(*iParam0, 0, &(iParam0->f_14), &iVar5, 0, 0))
	{
		if (iVar5 == 2)
		{
			if (!func_44(33554432))
			{
				if (func_276(&(Local_62.f_1392[9 /*3*/]), 3f, 0, "TIMER_VALDOC_RESET_AGGRO"))
				{
					__LIB_9__::func_898(&(iParam0->f_14), &iVar5);
					func_91(33554432);
				}
			}
			bVar4 = true;
		}
		else if (iVar5 == 2048 || iVar5 == 1)
		{
			bVar4 = true;
		}
		else if (iVar5 == 8 || __LIB_1__::func_996(*iParam0, 1, 1, 1, 0))
		{
		}
	}
	else
	{
		func_561(33554432);
	}
	if (!func_221(131072))
	{
		if (func_1143(iParam0, iVar2, sVar3))
		{
			if (bVar4 && func_1144(&iVar5))
			{
				__LIB_13__::func_869(21);
			}
			else
			{
				func_91(67108864);
				__LIB_13__::func_869(1);
			}
		}
	}
	else if (func_1145())
	{
		if (func_1146(iParam0, &iVar5))
		{
			AUDIO::SET_PORTAL_SETTINGS_OVERRIDE("VAL_DOCTOR_STEEL_DOOR_SLAT_CLOSED", "VAL_DOCTOR_STEEL_DOOR_SLAT_OPEN");
			__LIB_13__::func_869(10);
		}
		else if (func_1147(uParam2, bVar4, &iVar5))
		{
			func_1018();
			__LIB_13__::func_869(14);
		}
		else if (func_1148(bVar4, &iVar5))
		{
			__LIB_13__::func_869(20);
		}
	}
	if (!func_221(16384) && !__LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 0, 1))
	{
		if (__LIB_14__::func_606(Global_35, Local_62.f_1290) || __LIB_14__::func_606(Global_35, Local_62.f_1292))
		{
			func_298(0);
			func_224(16384);
		}
	}
	if (func_335(4096))
	{
		if (__LIB_14__::func_606(Global_35, Local_62.f_1292))
		{
			__LIB_8__::func_336(&(Local_62.f_1518), "SVD_IG4_CONVO", Local_62.f_390[1 /*126*/], Local_62.f_390[3 /*126*/], 0, 0, 1, 1);
			func_1149(4096);
		}
	}
	if (!func_120(4))
	{
		if (!func_120(8))
		{
			if (!func_65() && __LIB_0__::func_665(Global_35, Local_62.f_170, 1, 1) > 18f)
			{
				__LIB_8__::func_111("SRVD_A_HUPBACK", 1);
				__LIB_2__::func_506(iVar2, sVar3);
				__LIB_2__::func_506(iVar0, sVar1);
				func_309(&(Local_62.f_1), __LIB_1__::func_921(Local_62), Local_62.f_170.f_1, Local_62.f_1284);
				func_517(8);
				__LIB_13__::func_869(31);
			}
		}
	}
	func_1150(iVar0, sVar1);
	switch (iLocal_45)
	{
		case 0:
			if (!func_99(256))
			{
				func_91(67108864);
				return false;
			}
			func_533(4096);
			func_1151(&(iParam0->f_14));
			func_1152();
			ANIMSCENE::START_ANIM_SCENE(Local_62.f_1216[2]);
			func_561(67108864);
			__LIB_13__::func_869(3);
			break;
		case 1:
			func_91(67108864);
			if (PED::IS_PED_RAGDOLL(*iParam0))
			{
				return false;
			}
			if (!func_335(32768))
			{
				__LIB_8__::func_336(&(Local_62.f_1518), "SRVD_K_HURT_1", *iParam0, *uParam1, 0, 0, 1, 1);
				func_533(32768);
			}
			if (!func_799(4))
			{
				return false;
			}
			func_813(*iParam0, __LIB_3__::func_508(*iParam0, iVar2, "pedDoctor", "PBL_KNOCK_DOOR", 0), __LIB_3__::func_656(*iParam0, iVar2, "pedDoctor", "PBL_KNOCK_DOOR", 0), 1f, 0.1f, 0, 20000);
			__LIB_13__::func_869(2);
			break;
		case 2:
			if (PED::IS_PED_RAGDOLL(*iParam0))
			{
				__LIB_13__::func_869(1);
			}
			else if (func_1124(*iParam0, iVar2, "pedDoctor", "PBL_KNOCK_DOOR", 0.35f, 45f, 0))
			{
				if (func_799(4))
				{
					func_224(4096);
					__LIB_13__::func_869(4);
				}
			}
			else if (!__LIB_14__::func_642(*iParam0, 1435919172, 1))
			{
				__LIB_13__::func_869(1);
			}
			break;
		case 3:
			if (!func_1124(*iParam0, iVar2, "pedDoctor", "PBL_KNOCK_DOOR", 0.35f, 45f, 0))
			{
				return false;
			}
			if (!func_799(4))
			{
				return false;
			}
			func_224(4096);
			func_517(4);
			func_1153();
			__LIB_9__::func_793(iVar2, "PBL_KNOCK_DOOR", sVar3, 0);
			func_429(joaat("DOOR_VAL_DOC_BACK_RM"), 1, "DOOR_VAL_DOC_BACK_RM");
			__LIB_13__::func_869(5);
			break;
		case 4:
			func_1153();
			func_561(67108864);
			func_429(joaat("DOOR_VAL_DOC_BACK_RM"), 1, "DOOR_VAL_DOC_BACK_RM");
			__LIB_13__::func_869(5);
			break;
		case 5:
			if (!func_1154())
			{
				return false;
			}
			__LIB_3__::func_732(1);
			__LIB_8__::func_336(&(Local_62.f_1518), "SRVDDKNCK0", *iParam0, *uParam1, 0, 0, 1, 1);
			func_224(131072);
			func_898(&(Local_62.f_1373[0]), &(Local_62.f_1370[0]), func_629(), func_630(), func_631(), "Interior Back Room Door");
			__LIB_13__::func_869(6);
			break;
		case 6:
			if (!func_1155())
			{
				return false;
			}
			func_1017();
			func_418(4096);
			func_224(262144);
			func_1149(4096);
			func_1156();
			__LIB_14__::func_616(iVar0, sVar1);
			__LIB_13__::func_869(7);
			break;
		case 7:
			if (__LIB_14__::func_620(*uParam1, "DLG_GangGreetsClerk"))
			{
				func_533(8192);
				__LIB_8__::func_336(&(Local_62.f_1518), "SRVD_DOPEN1", *uParam1, *iParam0, 0, 0, 1, 0);
				func_98(512);
				__LIB_13__::func_869(8);
			}
			break;
		case 8:
			if (!func_221(8192))
			{
				if (func_1157())
				{
					if (__LIB_2__::func_227(-3.5f, 1, 0, 0))
					{
						func_596(iParam0, "SRVD_A_AIMWRN", "SRVD_J_AIMWRN", 1);
						func_418(4096);
						func_224(8192);
					}
				}
			}
			if (!func_120(16))
			{
				if (func_280(iVar0, sVar1, 0.17f))
				{
					func_1018();
					func_553(iVar0, "PBL_BREAKOUT", sVar1);
					func_1140();
					func_517(16);
				}
			}
			if (!__LIB_14__::func_620(*uParam1, "GangWalksBack"))
			{
				return false;
			}
			func_553(Local_62.f_1216[3], "pbLoopToWakeUp", "SCENE_VALDOC_ONBED");
			__LIB_8__::func_336(&(Local_62.f_1518), func_1158(), *uParam1, *iParam0, 0, 0, 1, 0);
			__LIB_13__::func_869(9);
			break;
		case 9:
			if (func_1159() || !__LIB_2__::func_1(*iParam0, 0, 1))
			{
				__LIB_13__::func_869(12);
			}
			break;
		case 10:
			if (!func_221(262144))
			{
				if (func_1155())
				{
					func_418(4096);
					func_1149(4096);
					func_1156();
					__LIB_14__::func_616(iVar0, sVar1);
					func_224(262144);
				}
				return false;
			}
			if (func_1160(uParam1))
			{
				if (!func_60(8192))
				{
					__LIB_8__::func_336(&(Local_62.f_1518), "SRVDOSEENT", *uParam1, Global_35, 0, 0, 1, 1);
				}
				else
				{
					__LIB_8__::func_336(&(Local_62.f_1518), "SRVDOSEENTP", *uParam1, Global_35, 0, 0, 1, 1);
				}
				__LIB_13__::func_869(11);
			}
			else if (__LIB_2__::func_215(Local_62.f_390[0 /*126*/], Global_35, 1, 4.5f, 0) || __LIB_14__::func_606(Global_35, Local_62.f_1247[6 /*2*/]))
			{
				if (!func_60(8192))
				{
					__LIB_8__::func_336(&(Local_62.f_1518), "SRVDOSEEP", *uParam1, Global_35, 0, 0, 1, 1);
				}
				else
				{
					__LIB_8__::func_336(&(Local_62.f_1518), "SRVDOSEEPA", *uParam1, Global_35, 0, 0, 1, 1);
				}
				__LIB_13__::func_869(13);
			}
			break;
		case 11:
			if (func_1161(uParam1))
			{
				__LIB_13__::func_869(12);
			}
			else
			{
				__LIB_13__::func_869(13);
			}
			break;
		case 12:
			func_299(0);
			AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE("VAL_DOCTOR_STEEL_DOOR_SLAT_OPEN");
			__LIB_13__::func_869(32);
			break;
		case 13:
			if (!func_1162(uParam1))
			{
				return false;
			}
			AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE("VAL_DOCTOR_STEEL_DOOR_SLAT_OPEN");
			__LIB_2__::func_506(iVar0, sVar1);
			__LIB_13__::func_869(31);
			break;
		case 14:
			func_224(1024);
			func_1163(*uParam1, uParam1->f_2, 0f, 2f, 20000, 2f);
			func_1164(*iParam0, -1);
			__LIB_13__::func_869(15);
			break;
		case 15:
			if (!func_276(&(iParam0->f_214), 2.5f, 1, "doctor.timerGeneric"))
			{
				return false;
			}
			if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
			{
				__LIB_8__::func_336(&(Local_62.f_1518), "SRV_K_NOOPEN3", *iParam0, Global_35, 0, 0, 1, 1);
			}
			else
			{
				__LIB_8__::func_336(&(Local_62.f_1518), "SRV_C_NOOPEN1", *uParam1, Global_35, 0, 0, 1, 1);
			}
			__LIB_13__::func_869(21);
			break;
		case 20:
			if (__LIB_14__::func_620(*uParam1, "DoorOpen") || __LIB_14__::func_606(Global_35, Local_62.f_1290))
			{
				func_328();
				__LIB_13__::func_869(32);
			}
			break;
		case 21:
			if (PED::IS_PED_RAGDOLL(*iParam0))
			{
				return false;
			}
			if (!__LIB_2__::func_227(-2f, 1, 0, 0))
			{
				return false;
			}
			__LIB_8__::func_336(&(Local_62.f_1518), "SVD_C_FLEE", *iParam0, Global_35, 0, 0, 1, 1);
			func_328();
			func_254();
			__LIB_13__::func_869(31);
			break;
		case 31:
			return false;
		case 32:
			return true;
	}
	return false;
}

void func_764()
{
	if (!__LIB_2__::func_1(Local_62.f_390[0 /*126*/], 0, 1))
	{
		return;
	}
	TASK::TASK_START_SCENARIO_AT_POSITION(Local_62.f_390[0 /*126*/], joaat("PROP_HUMAN_SEAT_CHAIR"), 1322.946f, -1320.105f, 74.32765f, 178.62f, 0, false, true, 0, -1f, false);
}

void func_765()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_62.f_390)
	{
		if (!__LIB_2__::func_1(Local_62.f_390[iVar0 /*126*/], 0, 1))
		{
			__LIB_0__::func_325(&(Local_62.f_390[iVar0 /*126*/].f_1));
		}
		iVar0++;
	}
}

void func_766(int* iParam0, int* iParam1, int* iParam2, int* iParam3, int* iParam4, int* iParam5, var uParam6)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar4;
	char[] cVar5[8];
	int iVar6;
	char[] cVar7[8];
	int iVar8;
	char[] cVar9[8];
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	float fVar16;
	bool bVar17;
	int iVar18;
	bool bVar19;
	vector3 vVar20;
	char* sVar23;
	int iVar24;
	bool bVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	float fVar30;
	float fVar31;
	if (!ENTITY::IS_ENTITY_DEAD(*iParam2))
	{
		if (PED::GET_PED_CONFIG_FLAG(*iParam2, 273, true))
		{
			PED::SET_PED_CONFIG_FLAG(*iParam2, 273, false);
		}
	}
	iVar0 = Local_62.f_1216[0];
	sVar1 = "SCENE_SDNGUN_HOLDUP";
	iVar2 = Local_62.f_1216[2];
	cVar3 = "SCENE_SDNGUN_GAMBLER_GROUP";
	iVar4 = Local_62.f_1216[3];
	cVar5 = "SCENE_SDNGUN_GAMBLER_OWNER";
	iVar6 = Local_62.f_1216[4];
	cVar7 = "SCENE_SDNGUN_GAMBLER_MIDDLE";
	iVar8 = Local_62.f_1216[5];
	cVar9 = "SCENE_SDNGUN_GAMBLER_WUSS";
	func_1165(*iParam1, &(iParam1->f_12), &(iParam1->f_30), &iVar11, &(iParam1->f_10), 0);
	func_1165(*iParam2, &(iParam2->f_12), &(iParam2->f_30), &iVar12, &(iParam2->f_10), 0);
	func_1165(*iParam3, &(iParam3->f_12), &(iParam3->f_30), &uVar13, &(iParam3->f_10), 0);
	func_1165(*iParam4, &(iParam4->f_12), &(iParam4->f_30), &uVar14, &(iParam4->f_10), 0);
	func_1165(*iParam5, &(iParam5->f_12), &(iParam5->f_30), &uVar15, &(iParam5->f_10), 1);
	if ((Local_62.f_1620 % 10) != 0)
	{
		func_1112(iParam1, 0);
		func_1166(iParam3, iParam4, iParam5);
		func_1167();
		if (!ENTITY::IS_ENTITY_DEAD(*iParam3))
		{
			fVar16 = __LIB_0__::func_665(Global_35, *iParam3, 1, 1);
			if (fVar16 < 3f)
			{
				func_297(*iParam3, Global_35, &(iParam3->f_64), 7000, vLocal_59, 1, 0);
			}
		}
		if (ENTITY::IS_ENTITY_DEAD(*iParam3))
		{
			if (__LIB_0__::func_75(&(Local_62.f_1392[12 /*3*/])))
			{
				if (__LIB_1__::func_285(&(Local_62.f_1392[12 /*3*/]), 5f))
				{
					if (__LIB_2__::func_227(0, 1, 0, 0))
					{
						func_1168(*iParam4);
						__LIB_0__::func_37(&(Local_62.f_1392[12 /*3*/]));
					}
				}
			}
		}
	}
	if (func_1169())
	{
		__LIB_11__::func_629(95);
	}
	if (func_1171())
	{
		__LIB_11__::func_629(32);
	}
	func_1172(iParam2);
	func_1173();
	func_1174();
	if (func_335(1048576))
	{
		if (__LIB_2__::func_227(-3f, 1, 0, 0))
		{
			__LIB_8__::func_336(&(Local_62.f_1518), "PRNBH_GAM_CMBT", *iParam4, Global_35, 0, 0, 1, 1);
			func_1149(1048576);
		}
	}
	func_1175(iParam3, iVar4, cVar5);
	func_1176();
	func_1177();
	func_1178();
	func_1179(&iVar2, cVar3);
	func_1180(&iVar4, cVar5, &iVar6, cVar7, &iVar8, cVar9);
	func_1181(iParam3);
	func_1182();
	if (((func_99(1024) && !func_62(2097152)) && !func_120(512)) && !func_120(2048))
	{
		if (func_1183(iParam3, iParam4, iParam5, 0))
		{
			__LIB_0__::func_325(&(Local_62.f_1482[1]));
			func_517(1024);
			if (!__LIB_14__::func_623(iVar2, cVar3, "PBL_gamblers_react"))
			{
				func_1184(iVar2, cVar3);
			}
			if (func_308(*iParam3, 0, &(iParam3->f_89), &iVar18, 0, 0))
			{
				if (iVar18 == 2)
				{
					bVar17 = true;
				}
			}
			if ((ENTITY::IS_ENTITY_DEAD(*iParam3) || ENTITY::IS_ENTITY_DEAD(*iParam4)) || ENTITY::IS_ENTITY_DEAD(*iParam5))
			{
				func_39(4194304);
				func_39(2097152);
				func_224(524288);
				__LIB_11__::func_629(76);
			}
			else if (__LIB_0__::func_51(&(iParam3->f_9), 16777216) || bVar17)
			{
				__LIB_0__::func_769();
				func_517(512);
				func_2();
				func_1186(0);
				func_1187();
				__LIB_11__::func_629(95);
			}
		}
	}
	func_1188();
	func_1189();
	func_1190();
	if (__LIB_14__::func_606(Global_35, Local_62.f_1290))
	{
		CAM::_0xE2BB2D6A9FE2ECDE(1);
	}
	switch (iLocal_46)
	{
		case 0:
			if (!MAP::DOES_BLIP_EXIST(iParam0->f_1))
			{
				__LIB_2__::func_73(*iParam0, &(iParam0->f_1), -89429847, 580546400, 0, 0);
			}
			if (!PED::GET_PED_CONFIG_FLAG(*iParam0, 169, true))
			{
				PED::SET_PED_CONFIG_FLAG(*iParam0, 169, true);
			}
			if (func_308(*iParam0, 0, &(iParam0->f_14), &iVar10, 0, 0))
			{
				if ((((iVar10 == 2 || iVar10 == 2048) || iVar10 == 1) || iVar10 == 4) || iVar10 == 256)
				{
					bVar19 = true;
				}
			}
			if (func_221(64))
			{
				__LIB_0__::func_172(Local_62.f_1247[3 /*2*/]);
				__LIB_11__::func_629(25);
			}
			else if (__LIB_0__::func_94(Global_35, func_1191(), 1) < 0.5f)
			{
				func_298(0);
				func_1192(iParam0);
				func_224(16);
				__LIB_11__::func_629(1);
			}
			else if (func_276(&(Local_62.f_1392[2 /*3*/]), 25f, 1, "TIMER_SDNGUN_GUNSMITH_KNOCKOUT_WINDOW"))
			{
				func_298(0);
				func_1193("PRNBG_IG1_ALERT", *iParam0, *iParam1);
				func_517(2);
				__LIB_0__::func_172(Local_62.f_1247[3 /*2*/]);
				__LIB_9__::func_793(iVar0, "PBL_alert_guard", sVar1, 1);
				__LIB_11__::func_629(15);
			}
			else if (bVar19)
			{
				__LIB_14__::func_629("PRNBG_IG1_NERV", 0);
				__LIB_14__::func_629("PRNBG_IG1_NERVB", 0);
				__LIB_14__::func_629("PRNBG_AWKWARD", 0);
				func_1128(iParam0, "GUNSMITH");
				__LIB_0__::func_172(Local_62.f_1247[3 /*2*/]);
				func_517(16);
				__LIB_11__::func_629(5);
			}
			else if (func_335(2048))
			{
				if (!func_335(4096))
				{
					if (__LIB_2__::func_227(0, 1, 0, 0))
					{
						func_1193("PRNBG_IG1_NERVB", *iParam0, *iParam1);
						func_533(4096);
						func_533(8192);
						func_1149(2048);
					}
				}
			}
			else if (func_335(8192))
			{
				if (!func_335(16384))
				{
					if (__LIB_2__::func_227(0, 1, 0, 0))
					{
						func_1193("PRNBG_AWKWARD", *iParam0, *iParam1);
						func_533(16384);
						func_1149(8192);
					}
				}
			}
			break;
		case 1:
			iVar24 = __LIB_3__::func_619(Global_35, 0, 0);
			if (!WEAPON::_IS_WEAPON_ONE_HANDED(iVar24) && iVar24 != joaat("WEAPON_UNARMED"))
			{
				vVar20 = { func_1195() };
				sVar23 = "PBL_butt_stock_hit";
			}
			else
			{
				vVar20 = { func_1191() };
				sVar23 = "PBL_pistol_whip";
			}
			if (__LIB_18__::func_846(Global_35, vVar20, 0.15f, 1))
			{
				__LIB_0__::func_172(Local_62.f_1247[3 /*2*/]);
				__LIB_3__::func_732(0);
				func_517(8);
				__LIB_9__::func_793(iVar0, sVar23, sVar1, 1);
				func_297(*iParam1, Global_35, &(iParam1->f_64), -1, vLocal_59, 1, 0);
				func_536(Global_35, iVar24, 1, 0);
				func_433(1);
				__LIB_11__::func_629(3);
			}
			break;
		case 2:
			if (!__LIB_14__::func_617(&Global_35))
			{
				return;
			}
			__LIB_11__::func_629(3);
			break;
		case 3:
			func_1197(iParam1);
			if (__LIB_14__::func_617(&Global_35))
			{
				return;
			}
			__LIB_14__::func_641();
			func_432(1, 0, 1);
			__LIB_3__::func_732(0);
			__LIB_8__::func_336(&(Local_62.f_1518), "PRNBG_PLRTHRT1", *iParam1, Global_35, 0, 0, 1, 1);
			__LIB_2__::func_73(*iParam1, &(iParam1->f_1), -89429847, 580546400, 0, 0);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iParam1->f_1, "SR_SD_BLIP_DOWNGUARD");
			__LIB_0__::func_325(&(iParam0->f_1));
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam1, joaat("REL_PLAYER_DISLIKE"));
			PED::REGISTER_TARGET(Global_35, *iParam1, 1);
			PED::SET_PED_CONFIG_FLAG(*iParam1, 273, false);
			__LIB_11__::func_629(4);
			break;
		case 4:
			func_1197(iParam1);
			func_1198(iParam1, iVar11);
			if (!func_1199(iParam1))
			{
				return;
			}
			if (!__LIB_0__::func_51(&(iParam1->f_10), 16384))
			{
				__LIB_3__::func_732(0);
				func_596(iParam1, "SRNG_A_UPSTAIRS", "SRNG_J_UPSTAIRS", 1);
			}
			func_563(&(iParam1->f_10), &(iParam1->f_30), 0, 0);
			func_297(*iParam1, Global_35, &(iParam1->f_64), -1, 0f, 0.5f, 0f, 1, 0);
			__LIB_11__::func_629(18);
			break;
		case 5:
			if (!__LIB_14__::func_607(iVar0, "open_door_idle", sVar1) && __LIB_14__::func_617(iParam1))
			{
				return;
			}
			__LIB_8__::func_336(&(Local_62.f_1518), "PRNBG_GD_SEEKNK", *iParam1, Global_35, 0, 0, 1, 1);
			__LIB_9__::func_793(iVar0, "PBL_Breakout", sVar1, 1);
			__LIB_11__::func_629(6);
			break;
		case 6:
			if (__LIB_14__::func_617(iParam1))
			{
				return;
			}
			func_1127(*iParam1, 0);
			__LIB_2__::func_73(*iParam1, &(iParam1->f_1), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
			func_297(*iParam0, Global_35, &(iParam0->f_42), -1, vLocal_59, 1, 0);
			__LIB_11__::func_629(7);
			break;
		case 15:
			if (!func_280(iVar0, sVar1, 0.176f))
			{
				return;
			}
			PED::SET_PED_CONFIG_FLAG(*iParam0, 169, false);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 273, false);
			__LIB_11__::func_629(16);
			break;
		case 16:
			func_1127(*iParam1, 0);
			__LIB_2__::func_73(*iParam1, &(iParam1->f_1), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
			func_297(*iParam0, Global_35, &(iParam0->f_42), -1, vLocal_59, 1, 0);
			__LIB_11__::func_629(17);
			break;
		case 17:
			if (__LIB_2__::func_1(*iParam1, 0, 1))
			{
				return;
			}
			if (!MAP::DOES_BLIP_EXIST(iParam0->f_1) && !ENTITY::IS_ENTITY_DEAD(*iParam0))
			{
				__LIB_2__::func_73(*iParam0, &(iParam0->f_1), -89429847, 580546400, 0, 0);
			}
			if (!__LIB_14__::func_606(Global_35, Local_62.f_1247[4 /*2*/]))
			{
				return;
			}
			__LIB_14__::func_611(iParam0, 297, 1);
			__LIB_8__::func_336(&(Local_62.f_1518), "PRNBG_IG3", *iParam0, Global_35, 0, 0, 1, 1);
			func_1200(*iParam0, "LINE_01_SHOPKEEP");
			Local_62.f_1473[0] = 10f;
			func_224(512);
			__LIB_11__::func_629(30);
			break;
		case 18:
			if (__LIB_0__::func_51(&(iParam1->f_10), 16384))
			{
				Local_62.f_1473[0] = 14f;
				__LIB_11__::func_629(30);
				return;
			}
			if (!__LIB_2__::func_227(-2.5f, 1, 0, 0))
			{
				return;
			}
			__LIB_8__::func_336(&(Local_62.f_1518), "PRNBG_PLRTHRT2", *iParam1, Global_35, 0, 0, 1, 1);
			Local_62.f_1473[0] = 6f;
			__LIB_11__::func_629(30);
			break;
		case 25:
			break;
		case 30:
			bVar25 = func_1201();
			if (!func_276(&(Local_62.f_1392[3 /*3*/]), Local_62.f_1473[0], 1, "FLOAT_SDNGUN_REVEAL_GAMBLING_ROOM_SECS"))
			{
				return;
			}
			if (!bVar25)
			{
				func_1202(iParam0, iParam1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				PED::_0xA180FBD502A03125(*iParam1, 1.5f, 1f);
				__LIB_14__::func_635(&(iParam1->f_89), iVar26);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*iParam1);
				__LIB_2__::func_828(&(iParam1->f_89), 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
			{
				__LIB_14__::func_635(&(iParam0->f_14), iVar26);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*iParam0);
			}
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::GET_PLAYER_INDEX());
			Global_1935630.f_30 = 0;
			__LIB_11__::func_629(31);
			break;
		case 31:
			if (func_221(16))
			{
				if (func_308(*iParam1, 0, &(iParam1->f_89), &iVar27, 0, 0))
				{
					if ((iVar27 == 4 || iVar27 == 256) || iVar27 == 8)
					{
						func_1205();
						func_1206();
					}
				}
				func_1207(iParam1, &(iParam1->f_89));
			}
			else
			{
				if (func_308(*iParam0, 0, &(iParam0->f_14), &iVar10, 0, 0))
				{
					if ((((iVar10 == 4 || iVar10 == 256) || iVar10 == 2) || iVar10 == 2048) || FIRE::IS_ENTITY_ON_FIRE(*iParam0))
					{
						func_1208();
					}
				}
				func_1207(iParam0, &(iParam0->f_14));
			}
			break;
		case 32:
			if (!__LIB_14__::func_606(Global_35, Local_62.f_1247[6 /*2*/]))
			{
				return;
			}
			__LIB_11__::func_629(35);
			break;
		case 35:
			if (!func_99(1024))
			{
				return;
			}
			func_920();
			func_1209();
			__LIB_0__::func_37(&(Local_62.f_1392[4 /*3*/]));
			func_1210();
			__LIB_11__::func_629(39);
			break;
		case 39:
			func_1211(iParam2);
			__LIB_11__::func_629(40);
			break;
		case 40:
			func_1212(iParam2);
			func_308(*iParam2, 0, &(iParam2->f_89), &iVar28, 0, 0);
			if (!__LIB_14__::func_606(Global_35, Local_62.f_1290))
			{
				if (iVar28 != 2 && iVar28 != 1)
				{
					return;
				}
				Local_62.f_1290.f_1 = 1;
				func_517(64);
			}
			__LIB_14__::func_641();
			__LIB_0__::func_769();
			Local_62.f_1292.f_1 = 1;
			__LIB_0__::func_325(&(Local_62.f_1482[0]));
			__LIB_1__::func_390("SR_NG_O_GOTHIRDFLOOR", 1);
			__LIB_1__::func_406(&(iParam2->f_89), 1);
			if (!func_221(2048))
			{
				func_1213();
				__LIB_14__::func_616(Local_62.f_1216[1], "SCENE_SDNGUN_GUARD_UPSTAIRS");
				__LIB_11__::func_629(42);
			}
			else if (func_120(64))
			{
				__LIB_11__::func_629(53);
			}
			else
			{
				__LIB_11__::func_629(41);
			}
			break;
		case 41:
			if (!func_1214(iParam2))
			{
				return;
			}
			if (func_1215(iParam2, 0))
			{
				__LIB_11__::func_629(53);
				return;
			}
			__LIB_8__::func_336(&(Local_62.f_1518), "PRNBG_GU_AIM1", *iParam2, Global_35, 0, 0, 1, 1);
			__LIB_11__::func_629(43);
			break;
		case 42:
			func_1216(iParam2);
			if (func_1215(iParam2, 1))
			{
				__LIB_11__::func_629(53);
				return;
			}
			if (!func_276(&(iParam2->f_120), 1f, 0, "guardUpstairs.timerGenericA"))
			{
				return;
			}
			__LIB_0__::func_37(&(iParam2->f_120));
			if (func_1217(Global_35))
			{
				func_596(iParam2, "PRNBG_LEAVENOW", "PRNBG_LEAVENOW", 1);
				__LIB_11__::func_629(44);
			}
			else
			{
				__LIB_8__::func_336(&(Local_62.f_1518), "PRNBG_GU_AIM1", *iParam2, Global_35, 0, 0, 1, 1);
				__LIB_11__::func_629(49);
			}
			break;
		case 43:
			if (func_1215(iParam2, 0))
			{
				__LIB_11__::func_629(53);
				return;
			}
			if (func_276(&(iParam2->f_120), 8f, 0, "guardUpstairs.timerGenericA"))
			{
				__LIB_11__::func_629(53);
				return;
			}
			if (!__LIB_14__::func_606(Global_35, Local_62.f_1290))
			{
				func_1218(iParam2);
				__LIB_11__::func_629(52);
			}
			break;
		case 44:
			if (!__LIB_2__::func_227(-3f, 1, 0, 0))
			{
				if (func_1215(iParam2, 1))
				{
					__LIB_0__::func_37(&(Local_62.f_1392[6 /*3*/]));
					__LIB_11__::func_629(53);
				}
				return;
			}
			if (!__LIB_0__::func_51(&(iParam2->f_10), 4))
			{
				func_563(&(iParam2->f_10), &(iParam2->f_30), 1, 0);
				func_518(&(iParam2->f_10), 4);
			}
			if (iVar12 == 0)
			{
				func_596(iParam2, "PRNBH_IG4_GEST", "PRNBH_IG4_GESTJ", 1);
				func_563(&(iParam2->f_10), &(iParam2->f_30), 0, 0);
				__LIB_0__::func_37(&(Local_62.f_1392[6 /*3*/]));
				__LIB_11__::func_629(49);
				return;
			}
			else if (iVar12 == 1)
			{
				func_596(iParam2, "PRNBH_OFFLIM_A", "PRNBH_OFFLIM_J", 1);
				func_563(&(iParam2->f_10), &(iParam2->f_30), 0, 0);
				__LIB_0__::func_37(&(Local_62.f_1392[6 /*3*/]));
				__LIB_11__::func_629(51);
				return;
			}
			else if (func_276(&(Local_62.f_1392[6 /*3*/]), 5f, 0, "TIMER_SDNGUN_ILO_OPTION_AVAILABLE"))
			{
				__LIB_8__::func_336(&(Local_62.f_1518), "PRNBH_NOTLEAVE", *iParam2, Global_35, 0, 0, 1, 1);
				__LIB_0__::func_37(&(Local_62.f_1392[6 /*3*/]));
				__LIB_11__::func_629(51);
				return;
			}
			else if (func_1215(iParam2, 0))
			{
				__LIB_0__::func_37(&(Local_62.f_1392[6 /*3*/]));
				__LIB_11__::func_629(53);
				return;
			}
			else if (!__LIB_14__::func_606(Global_35, Local_62.f_1290))
			{
				func_1218(iParam2);
				__LIB_11__::func_629(52);
				return;
			}
			break;
		case 49:
			if (func_1215(iParam2, 1))
			{
				__LIB_11__::func_629(53);
				return;
			}
			if (!func_1219(iParam2))
			{
				return;
			}
			if (!__LIB_2__::func_227(-5f, 1, 0, 0))
			{
				return;
			}
			if (!__LIB_0__::func_51(&(iParam2->f_10), 4))
			{
				func_563(&(iParam2->f_10), &(iParam2->f_30), 1, 0);
				func_518(&(iParam2->f_10), 4);
			}
			if (iVar12 == 0)
			{
				func_596(iParam2, "PRNBG_A_GUILOD1", "PRNBG_J_GUILOD1", 1);
				__LIB_5__::func_687(&(iParam2->f_30), 0, 0);
				__LIB_11__::func_629(50);
				return;
			}
			else if (iVar12 == 1)
			{
				func_596(iParam2, "PRNBG_A_GUILOA1", "PRNBG_J_GUILOA1", 1);
				__LIB_5__::func_687(&(iParam2->f_30), 0, 0);
				__LIB_11__::func_629(51);
				return;
			}
			else if (func_276(&(Local_62.f_1392[6 /*3*/]), 5f, 0, "TIMER_SDNGUN_ILO_OPTION_AVAILABLE"))
			{
				__LIB_0__::func_37(&(Local_62.f_1392[6 /*3*/]));
				__LIB_11__::func_629(51);
				return;
			}
			if (!__LIB_14__::func_606(Global_35, Local_62.f_1290))
			{
				__LIB_14__::func_629("PRNBH_IG4_GESTJ", 1);
				__LIB_14__::func_629("PRNBH_IG4_GEST", 1);
				func_1218(iParam2);
				__LIB_11__::func_629(52);
				return;
			}
			if (!func_276(&(iParam2->f_120), 5f, 0, "guardUpstairs.timerGenericA"))
			{
				return;
			}
			iVar29 = 0;
			if (__LIB_14__::func_642(*iParam2, -1073489615, 0))
			{
				iVar29 = 33554432;
			}
			func_1220(*iParam2, iVar29);
			__LIB_11__::func_629(53);
			break;
		case 50:
			if (func_1215(iParam2, 0))
			{
				__LIB_11__::func_629(53);
				return;
			}
			if (func_1221(iParam2))
			{
				__LIB_11__::func_629(51);
				return;
			}
			if (!__LIB_14__::func_606(Global_35, Local_62.f_1290))
			{
				func_1218(iParam2);
				__LIB_11__::func_629(52);
			}
			break;
		case 51:
			if (!__LIB_2__::func_227(-3.5f, 1, 0, 0))
			{
				return;
			}
			__LIB_11__::func_629(53);
			break;
		case 52:
			if (!func_335(524288))
			{
				if (__LIB_2__::func_227(-3f, 1, 0, 0))
				{
					__LIB_3__::func_732(0);
					__LIB_8__::func_336(&(Local_62.f_1518), "PRNBH_IG4_LEAVE", *iParam2, Global_35, 0, 0, 1, 1);
					func_533(524288);
				}
			}
			if (func_1215(iParam2, 0))
			{
				__LIB_11__::func_629(53);
				return;
			}
			if (__LIB_14__::func_606(Global_35, Local_62.f_1290))
			{
				__LIB_8__::func_336(&(Local_62.f_1518), "PRNBG_GU_WRN3", *iParam2, Global_35, 0, 0, 1, 1);
				__LIB_11__::func_629(53);
			}
			break;
		case 53:
			func_1222(iParam2);
			func_533(1048576);
			__LIB_2__::func_73(*iParam2, &(iParam2->f_1), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
			func_1223();
			__LIB_11__::func_629(54);
			break;
		case 54:
			func_1222(iParam2);
			func_1224(iParam3, iParam4, iParam5);
			if (__LIB_2__::func_1(*iParam2, 0, 1))
			{
				return;
			}
			func_518(&(Local_62.f_390[2 /*126*/].f_10), 2);
			func_1209();
			__LIB_11__::func_629(55);
			break;
		case 55:
			if (!func_1224(iParam3, iParam4, iParam5))
			{
				return;
			}
			func_553(iVar6, "PBL_line_01", cVar7);
			func_297(*iParam3, Global_35, &(iParam3->f_64), -1, vLocal_59, 1, 0);
			func_297(*iParam4, Global_35, &(iParam3->f_64), -1, vLocal_59, 1, 0);
			func_297(*iParam5, Global_35, &(iParam3->f_64), -1, vLocal_59, 1, 0);
			__LIB_11__::func_629(60);
			break;
		case 60:
			if (!__LIB_2__::func_227(-2f, 1, 0, 0))
			{
				return;
			}
			if (!func_559(iVar6, "PBL_line_01", cVar7, 0))
			{
				return;
			}
			func_517(1024);
			func_1225(iParam4, &Global_35, "PRNBH_IG5_STAL1", &(iParam4->f_64), iVar6, "PBL_line_01", cVar7, "BOOL_STOP_COWER_IDLE", 65536, -1);
			func_553(iVar4, "PBL_line_01", cVar5);
			func_553(iVar6, "PBL_line_02", cVar7);
			__LIB_11__::func_629(61);
			break;
		case 61:
			if (!PED::_IS_PED_USING_SCENARIO_HASH(Global_35, __LIB_14__::func_628()))
			{
				func_1226(iParam3, iParam5);
				func_1227(iParam3, &uVar13, iParam4, &uVar14, iParam5, &uVar15);
				return;
			}
			func_1209();
			func_563(&(iParam3->f_10), &(iParam3->f_30), 0, 0);
			func_563(&(iParam4->f_10), &(iParam4->f_30), 0, 0);
			func_563(&(iParam5->f_10), &(iParam5->f_30), 0, 0);
			__LIB_0__::func_37(&(Local_62.f_1392[4 /*3*/]));
			__LIB_1__::func_390("SR_NG_O_ROBTABLE", 1);
			__LIB_0__::func_769();
			__LIB_0__::func_325(&(Local_62.f_1482[1]));
			__LIB_11__::func_629(62);
			break;
		case 62:
			if (PED::_IS_PED_USING_SCENARIO_HASH(Global_35, __LIB_14__::func_628()))
			{
				return;
			}
			func_412();
			func_224(2097152);
			func_1225(iParam4, &Global_35, "PRNBH_IG5_TAKE", &(iParam4->f_64), iVar6, "PBL_line_02", cVar7, "BOOL_STOP_COWER_IDLE", 65536, -1);
			func_553(iVar4, "PBL_line_02", cVar5);
			func_1184(iVar2, cVar3);
			func_224(524288);
			func_923(&(iParam3->f_10), &(iParam3->f_30), 0);
			func_923(&(iParam4->f_10), &(iParam4->f_30), 0);
			func_923(&(iParam5->f_10), &(iParam5->f_30), 0);
			func_1228(iParam3, iParam4, iParam5);
			__LIB_11__::func_629(70);
			break;
		case 70:
			if (!func_1183(iParam3, iParam4, iParam5, 1))
			{
				func_1229(iParam3, &uVar13, iParam4, &uVar14, iParam5, &uVar15);
				return;
			}
			func_39(4194304);
			func_39(2097152);
			__LIB_11__::func_629(76);
			break;
		case 76:
			if (__LIB_14__::func_623(iVar2, cVar3, "PBL_gamblers_react"))
			{
				func_1224(iParam3, iParam4, iParam5);
			}
			if (!__LIB_2__::func_227(-6f, 1, 0, 0))
			{
				return;
			}
			if (!func_221(8388608))
			{
				func_596(iParam3, "PRNBH_AIM_A", "PRNBH_AIM_J", 1);
			}
			__LIB_11__::func_629(77);
			break;
		case 77:
			if (__LIB_14__::func_623(iVar2, cVar3, "PBL_gamblers_react"))
			{
				if (!func_1224(iParam3, iParam4, iParam5))
				{
					return;
				}
				else
				{
					func_1184(iVar2, cVar3);
				}
			}
			if (!__LIB_2__::func_227(-3.5f, 1, 0, 0))
			{
				return;
			}
			if (func_1230(iParam3, iParam4, iParam5))
			{
				if (func_559(iVar2, "PBL_open_safe_A", cVar3, 1))
				{
					__LIB_8__::func_336(&(Local_62.f_1518), "PRNBH_IG6_ALL", *iParam3, Global_35, 0, 0, 1, 1);
					func_1231();
					func_1232();
					__LIB_9__::func_793(iVar2, "PBL_open_safe_A", cVar3, 1);
					func_1184(iVar4, cVar5);
					func_1184(iVar6, cVar7);
					func_1184(iVar8, cVar9);
					func_796(3, func_911(3), 0, "PBL_cower_idle_pos_02");
					func_796(4, func_911(4), 0, "PBL_cower_idle");
					func_796(5, func_911(5), 0, "PBL_cower_idle");
					func_224(1048576);
					__LIB_11__::func_629(78);
				}
			}
			else if (func_1233(iParam3, iParam4, iParam5))
			{
				if (func_559(iVar2, "PBL_open_safe_B", cVar3, 0))
				{
					__LIB_8__::func_336(&(Local_62.f_1518), "PRNBH_IG6_KILL3", *iParam3, Global_35, 0, 0, 1, 1);
					func_1231();
					func_1232();
					__LIB_9__::func_793(iVar2, "PBL_open_safe_B", cVar3, 1);
					func_1184(iVar4, cVar5);
					func_1184(iVar6, cVar7);
					func_796(3, func_911(3), 0, "PBL_cower_idle_pos_02");
					func_796(4, func_911(4), 0, "PBL_cower_idle");
					__LIB_11__::func_629(78);
				}
			}
			else if (func_1234(iParam3, iParam4, iParam5))
			{
				if (func_559(iVar2, "PBL_open_safe_C", cVar3, 0))
				{
					__LIB_8__::func_336(&(Local_62.f_1518), "PRNBH_IG6_KILL2", *iParam3, Global_35, 0, 0, 1, 1);
					func_1231();
					func_1232();
					__LIB_9__::func_793(iVar2, "PBL_open_safe_C", cVar3, 1);
					func_1184(iVar4, cVar5);
					func_1184(iVar8, cVar9);
					func_796(3, func_911(3), 0, "PBL_cower_idle_pos_02");
					func_796(5, func_911(5), 0, "PBL_cower_idle");
					func_224(1048576);
					__LIB_11__::func_629(78);
				}
			}
			else if (func_1235(iParam3, iParam4, iParam5))
			{
				if (func_559(iVar2, "PBL_open_safe_D", cVar3, 0))
				{
					func_224(67108864);
					func_1231();
					func_1232();
					__LIB_9__::func_793(iVar2, "PBL_open_safe_D", cVar3, 1);
					func_1184(iVar6, cVar7);
					func_1184(iVar8, cVar9);
					func_796(3, func_911(3), 0, "PBL_cower_idle_pos_02");
					func_796(4, func_911(4), 0, "PBL_cower_idle");
					__LIB_11__::func_629(78);
				}
			}
			else if (func_559(iVar2, "PBL_open_safe_E", cVar3, 0))
			{
				__LIB_8__::func_336(&(Local_62.f_1518), "PRNBH_IG6_KILLB", *iParam3, Global_35, 0, 0, 1, 1);
				func_1231();
				func_1232();
				__LIB_9__::func_793(iVar2, "PBL_open_safe_E", cVar3, 1);
				func_796(3, func_911(3), 0, "PBL_cower_idle_pos_02");
				func_796(4, func_911(4), 0, "PBL_cower_idle");
				func_796(5, func_911(5), 0, "PBL_cower_idle");
				__LIB_11__::func_629(78);
			}
			__LIB_14__::func_635(&(iParam3->f_89), iVar10);
			__LIB_14__::func_635(&(iParam4->f_89), iVar10);
			__LIB_14__::func_635(&(iParam5->f_89), iVar10);
			break;
		case 78:
			if (func_1236(iParam4, iParam5, iVar2, cVar3))
			{
				__LIB_8__::func_336(&(Local_62.f_1518), "PRNBH_K23_SAFE1", *iParam3, Global_35, 0, 0, 1, 1);
				func_224(268435456);
			}
			if (func_1237(iVar2, cVar3, &fVar30))
			{
				fVar31 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iVar2);
				if (!func_221(67108864))
				{
					if (!func_221(33554432))
					{
						if (fVar31 > fVar30)
						{
							func_595(func_1238(), 1);
							func_224(16777216);
							func_224(33554432);
						}
					}
					else
					{
						func_1239(0);
					}
				}
				else
				{
					func_595(func_1238(), 0);
				}
				if (fVar31 < 0.99f)
				{
					return;
				}
			}
			func_1239(0);
			if (!func_1240(iParam3, iParam4, iParam5))
			{
				return;
			}
			__LIB_2__::func_506(iVar2, cVar3);
			func_553(iVar4, "PBL_relaxed_idle_pos_02", cVar5);
			func_553(iVar4, "PBL_exit_pos_02", cVar5);
			func_553(iVar6, "PBL_relaxed_idle", cVar7);
			func_553(iVar6, "PBL_EXIT", cVar7);
			func_553(iVar8, "PBL_relaxed_idle", cVar9);
			func_553(iVar8, "PBL_EXIT", cVar9);
			func_297(*iParam3, Global_35, &(iParam3->f_64), -1, vLocal_59, 1, 0);
			func_297(*iParam4, Global_35, &(iParam4->f_64), -1, vLocal_59, 1, 0);
			func_297(*iParam5, Global_35, &(iParam5->f_64), -1, vLocal_59, 1, 0);
			__LIB_14__::func_635(&(iParam3->f_89), iVar10);
			__LIB_14__::func_635(&(iParam4->f_89), iVar10);
			__LIB_14__::func_635(&(iParam5->f_89), iVar10);
			func_422(4194304);
			__LIB_11__::func_629(79);
			break;
		case 79:
			func_1241(iParam3, iParam4, iParam5);
			func_1242();
			if (!func_221(536870912))
			{
				if (func_1243(&(iParam4->f_9), &(Local_62.f_1475[1]), 1) || func_1243(&(iParam5->f_9), &(Local_62.f_1475[2]), 1))
				{
					__LIB_8__::func_336(&(Local_62.f_1518), "PRNBH_K23_SAFE2", *iParam3, Global_35, 0, 0, 1, 1);
					func_224(536870912);
				}
			}
			if (func_1244())
			{
				__LIB_11__::func_629(80);
			}
			else if (func_221(67108864))
			{
				__LIB_11__::func_629(86);
			}
			break;
		case 80:
			if (!func_1245())
			{
				return;
			}
			__LIB_11__::func_629(85);
			break;
		case 85:
			func_1186(1);
			__LIB_11__::func_629(90);
			break;
		case 86:
			__LIB_11__::func_629(90);
			break;
		case 90:
			func_1241(iParam3, iParam4, iParam5);
			func_1242();
			break;
		case 95:
			func_1246(iParam4, &(Local_62.f_1216[4]), "SCENE_SDNGUN_GAMBLER_MIDDLE", "PBL_EXIT", "BOOL_STOP_COWER_IDLE", 0.955f);
			func_1246(iParam5, &(Local_62.f_1216[5]), "SCENE_SDNGUN_GAMBLER_WUSS", "PBL_EXIT", "BOOL_STOP_COWER_IDLE", 0.8664f);
			break;
	}
}

void func_767(int* iParam0, int* iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	char* sVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	int iVar13;
	func_1247();
	func_1129();
	iVar0 = -1;
	if (__LIB_0__::func_51(&(iParam1->f_10), 2))
	{
		iVar1 = 1;
		iVar2 = __LIB_2__::func_340(iVar1, 0, 0);
		iVar2 |= 256;
		iVar0 = func_941(iParam1, &(iParam1->f_12), 15f, &(iParam1->f_30), 0, 3, 0, "", iVar2, 0, 0, 2, -1082130432 /* Float: -1f */);
	}
	if (func_308(*iParam0, 0, &(iParam0->f_14), &iVar3, 0, 0))
	{
	}
	if (func_308(*iParam1, 0, &(iParam1->f_89), &iVar4, 0, 0))
	{
	}
	func_1248(iParam0, iParam1);
	func_1249();
	func_1250(iParam0);
	func_1251(iParam1);
	func_1252(iParam0, iParam1, &(Local_62.f_1021[1 /*63*/]), 1);
	func_1253();
	if (__LIB_0__::func_51(&(iParam1->f_9), 1))
	{
		ENTITY::_0xC3ABCFBC7D74AFA5(*iParam1, 5, 1);
	}
	else
	{
		func_1254(iParam1);
	}
	if (iLocal_46 == 100)
	{
		if (!func_44(268435456))
		{
			return;
		}
		if (func_335(-2147483648))
		{
			return;
		}
		if (!__LIB_2__::func_227(3f, 1, 0, 0))
		{
			return;
		}
		__LIB_8__::func_336(&(Local_62.f_1518), "SRGK_ATTACK2", *iParam0, Global_35, 0, 0, 1, 1);
		func_533(-2147483648);
		return;
	}
	iVar5 = Local_62.f_1216[3];
	iVar6 = Local_62.f_1216[2];
	sVar7 = "SCENE_RHDGUN_BASEMENT_GUNSMITH";
	sVar8 = "SCENE_RHDGUN_BASEMENT_CAPTIVE";
	func_1255(iParam1);
	func_1256(iParam1);
	if (func_1257(iParam0, iParam1))
	{
		func_422(8388608);
		__LIB_0__::func_172(Local_62.f_1247[14 /*2*/]);
		func_1258(&(iParam0->f_13), &(iParam0->f_85), 0);
		func_563(&(iParam1->f_10), &(iParam1->f_30), 0, 0);
		func_958(1, 1);
		PED::_0xAE6004120C18DF97(Local_62.f_390[0 /*126*/], 0, 1);
		if (__LIB_2__::func_1(*iParam0, 0, 1))
		{
			func_1259(iParam1);
			__LIB_11__::func_629(50);
		}
		else
		{
			if (!__LIB_14__::func_619(Local_62.f_1216[4], "SCENE_RHDGUN_VICTIM_ALONE"))
			{
				func_1260();
				__LIB_14__::func_616(Local_62.f_1216[4], "SCENE_RHDGUN_VICTIM_ALONE");
			}
			__LIB_8__::func_336(&(Local_62.f_1518), "PRRGS_IG6d", *iParam1, Global_35, 0, 0, 1, 1);
			__LIB_9__::func_793(Local_62.f_1216[4], "pbLeave", "SCENE_RHDGUN_VICTIM_ALONE", 1);
			func_277(Local_62.f_1216[4], "bStopAfraidLoop", 1, "SCENE_RHDGUN_VICTIM_ALONE");
			__LIB_14__::func_616(Local_62.f_1216[4], "SCENE_RHDGUN_VICTIM_ALONE");
			__LIB_11__::func_629(86);
		}
	}
	else
	{
		func_1261(*iParam0);
	}
	if (func_1262(iParam1))
	{
		__LIB_11__::func_629(30);
	}
	if (func_1263())
	{
		__LIB_11__::func_629(40);
	}
	func_1264(iParam0, iVar3);
	func_1265(iParam1, iVar4);
	func_1266(iParam0, iParam1);
	func_1267(iVar6, sVar8);
	if (func_1268(iParam1, iParam0, iVar5, sVar7))
	{
		__LIB_11__::func_629(60);
	}
	if (func_1269(iParam1))
	{
		__LIB_11__::func_629(60);
	}
	func_1270(iParam0, iParam1, iParam0->f_209, iVar0);
	func_1271(iParam0, iParam1);
	if (func_1272(iParam0, iParam1))
	{
		__LIB_11__::func_629(75);
	}
	if (!func_221(67108864))
	{
		if (func_221(16777216))
		{
			if (__LIB_1__::func_285(&(iParam0->f_214), (1f + 1f)))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam1))
				{
					if (func_308(*iParam0, 0, &(iParam0->f_14), &iVar9, 0, 0))
					{
						if (((iVar9 != 1 && iVar9 != 16) && iVar9 != 8) && iVar9 != 2048)
						{
							__LIB_3__::func_732(0);
							func_928(Local_62.f_1216[3], "objPhoto", Local_62.f_1226[1], "SCENE_RHDGUN_BASEMENT_GUNSMITH", 1, 1);
							func_1273(Local_62.f_1226[1]);
							func_140(1, 0);
							__LIB_0__::func_172(Local_62.f_1247[11 /*2*/]);
							__LIB_0__::func_172(Local_62.f_1247[12 /*2*/]);
							func_224(67108864);
							__LIB_11__::func_629(88);
						}
					}
					else if (func_308(*iParam1, 0, &(iParam1->f_89), &iVar10, 0, 0))
					{
						if (((iVar10 != 1 && iVar10 != 16) && iVar10 != 8) && iVar10 != 2048)
						{
							__LIB_3__::func_732(0);
							func_928(Local_62.f_1216[3], "objPhoto", Local_62.f_1226[1], "SCENE_RHDGUN_BASEMENT_GUNSMITH", 1, 0);
							func_1273(Local_62.f_1226[1]);
							func_140(1, 0);
							__LIB_0__::func_172(Local_62.f_1247[11 /*2*/]);
							__LIB_0__::func_172(Local_62.f_1247[12 /*2*/]);
							func_224(67108864);
							__LIB_11__::func_629(88);
						}
					}
				}
				else if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
				{
					if (func_308(*iParam1, 0, &(iParam1->f_89), &iVar11, 0, 0))
					{
						if ((iVar11 != 1 && iVar11 != 16) && iVar11 != 2048)
						{
							__LIB_3__::func_732(0);
							func_224(67108864);
							__LIB_11__::func_629(89);
						}
					}
				}
			}
		}
	}
	if (func_221(33554432))
	{
		if (!TASK::GET_IS_TASK_ACTIVE(*iParam0, 3))
		{
			func_928(Local_62.f_1216[3], "objPhoto", Local_62.f_1226[1], "SCENE_RHDGUN_BASEMENT_GUNSMITH", 1, 0);
			func_1273(Local_62.f_1226[1]);
			func_1274(0);
			func_418(33554432);
		}
	}
	if (func_1275(iParam0, iParam1))
	{
		func_958(1, 1);
		func_252(0);
		__LIB_11__::func_629(100);
	}
	func_1276(*iParam0, *iParam1);
	func_1277(*iParam1);
	func_1278(iParam1);
	func_1279(iParam0);
	if (func_1280())
	{
		__LIB_11__::func_629(95);
	}
	func_1281();
	switch (iLocal_46)
	{
		case 0:
			if (func_1282(*iParam0))
			{
				__LIB_0__::func_37(&(Local_62.f_1392[0 /*3*/]));
				__LIB_11__::func_629(5);
				return;
			}
			if ((__LIB_14__::func_623(Local_62.f_1216[1], "SCENE_RHDGUN_HOLDUP", "pbTrapDoorWait") || __LIB_14__::func_623(Local_62.f_1216[1], "SCENE_RHDGUN_HOLDUP", "pbNoWaitOpenTrap")) || __LIB_14__::func_623(Local_62.f_1216[1], "SCENE_RHDGUN_HOLDUP", "pbAIToDoor"))
			{
				if (func_280(Local_62.f_1216[1], "SCENE_RHDGUN_HOLDUP", 0.99f))
				{
					__LIB_8__::func_336(&(Local_62.f_1518), "SRGKHESIT_ALT", *iParam0, Global_35, 0, 0, 1, 1);
					PED::_0xAAB050DA48B57978(*iParam0, "TaskIntimidated_OnFoot", 0, -1, 4);
					__LIB_2__::func_507(&(iParam1->f_89), 500);
					__LIB_2__::func_507(&(iParam0->f_14), 500);
					func_1283();
					__LIB_0__::func_172(Local_62.f_1247[13 /*2*/]);
					func_1284();
					func_553(Local_62.f_1216[3], "PBL_captive_shot_01", "SCENE_RHDGUN_BASEMENT_GUNSMITH");
					func_553(iVar6, "PBL_react_to_gunfire_a", sVar8);
					func_553(iVar6, "PBL_react_to_gunfire_b", sVar8);
					func_553(iVar5, "PBL_stand_cower_left", sVar7);
					func_553(iVar5, "PBL_stand_cower_right", sVar7);
					func_553(iVar5, "PBL_flinch_right", sVar7);
					func_553(iVar5, "PBL_flinch_left", sVar7);
					func_553(iVar5, "PBL_enter_intimidation", sVar7);
					func_553(iVar5, "PBL_intimidate", sVar7);
					func_337(&(iParam0->f_42), Global_35, 5000, vLocal_59, 0);
					func_337(&(iParam1->f_64), Global_35, 5000, vLocal_59, 0);
					__LIB_2__::func_956(&(iParam0->f_14), 0);
					__LIB_1__::func_413(&(iParam0->f_14), 0);
					__LIB_2__::func_956(&(iParam1->f_89), 0);
					__LIB_1__::func_413(&(iParam1->f_89), 0);
					func_224(65536);
					__LIB_0__::func_37(&(iParam1->f_123));
					__LIB_0__::func_37(&(Local_62.f_1392[0 /*3*/]));
					__LIB_11__::func_629(1);
				}
			}
			break;
		case 1:
			if (func_1282(*iParam0))
			{
				__LIB_11__::func_629(5);
				return;
			}
			else if (!__LIB_14__::func_606(Global_35, Local_62.f_1247[8 /*2*/]))
			{
				return;
			}
			PED::_0xAE6004120C18DF97(*iParam0, 0, 1);
			Local_62.f_1247[8 /*2*/].f_1 = 1;
			func_19("SR_RHODES_GUN_BASEMENT", 64);
			func_517(2);
			if (!VOLUME::_DOES_VOLUME_EXIST(Local_62.f_1247[14 /*2*/]))
			{
				Local_62.f_1247[14 /*2*/] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 1323.178f, -1319.122f, 74.88023f, 0f, 0f, 0f, 1f, 1f, 1f);
			}
			__LIB_14__::func_641();
			__LIB_13__::func_858(10);
			func_1287(&(Local_62.f_1482[0]), func_1286(), joaat("WEAPON_REPEATER_WINCHESTER"));
			__LIB_11__::func_629(10);
			break;
		case 5:
			if (PED::IS_PED_RAGDOLL(*iParam0))
			{
				return;
			}
			func_308(*iParam0, 0, &(iParam0->f_14), &uVar12, 0, 0);
			func_1134(*iParam0, &uVar12);
			func_813(*iParam0, func_1288(), 84.79f, 1065353216 /* Float: 1f */, 1050253722 /* Float: 0.3f */, 0, 20000);
			func_1288();
			__LIB_11__::func_629(6);
			break;
		case 6:
			if (PED::IS_PED_RAGDOLL(*iParam0))
			{
				__LIB_11__::func_629(5);
			}
			else if (__LIB_3__::func_501(*iParam0, func_1288(), 84.79f, 0.4f, 20f, 1))
			{
				if (func_799(3))
				{
					func_1289();
					__LIB_14__::func_616(Local_62.f_1216[3], "SCENE_RHDGUN_BASEMENT_GUNSMITH");
					func_553(Local_62.f_1216[3], "PBL_captive_shot_01", "SCENE_RHDGUN_BASEMENT_GUNSMITH");
					if (!func_221(65536))
					{
						__LIB_11__::func_629(0);
					}
					else if (!Local_62.f_1247[8 /*2*/].f_1)
					{
						__LIB_11__::func_629(1);
					}
					else
					{
						__LIB_11__::func_629(10);
					}
				}
			}
			else if (!__LIB_14__::func_642(*iParam0, 1435919172, 1))
			{
				__LIB_11__::func_629(5);
			}
			break;
		case 10:
			if (func_1282(*iParam0))
			{
				__LIB_11__::func_629(5);
				return;
			}
			else if ((__LIB_14__::func_643(*iParam0, func_1290(), "wait_loop_captor") || __LIB_14__::func_643(*iParam0, func_1290(), "afraid_loop_a_captor")) || ENTITY::IS_ENTITY_DEAD(*iParam0))
			{
				_NAMESPACE29::_0x66F9EB44342BB4C5(*iParam0, &(iParam0->f_42));
				_NAMESPACE29::_0x66F9EB44342BB4C5(*iParam1, &(iParam1->f_64));
				__LIB_2__::func_360(&(iParam0->f_85[0 /*11*/]), "INTERACT_QUESTION");
				PED::SET_PED_CONFIG_FLAG(*iParam0, 6, true);
				PED::SET_PED_CONFIG_FLAG(*iParam1, 6, true);
				PED::SET_PED_CAN_BE_TARGETTED(*iParam0, true);
				PED::SET_PED_CAN_BE_TARGETTED(*iParam1, true);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*iParam1, 315, false);
				__LIB_8__::func_336(&(Local_62.f_1518), "SRGKHESIT2", *iParam1, Global_35, 0, 0, 1, 1);
				func_1292();
				func_224(8192);
				func_553(iVar5, "PBL_explain_01", sVar7);
				__LIB_11__::func_629(11);
			}
			break;
		case 11:
			if (!__LIB_2__::func_227(-2f, 1, 0, 0))
			{
				return;
			}
			if (!func_1293("PBL_explain_01"))
			{
				return;
			}
			func_224(16384);
			func_140(1, 0);
			func_1294();
			__LIB_8__::func_336(&(Local_62.f_1518), "SRGKIGP3e1", *iParam0, Global_35, 0, 0, 1, 1);
			__LIB_9__::func_793(iVar5, "PBL_explain_01", sVar7, 1);
			func_337(&(iParam0->f_42), Global_35, 6000, vLocal_59, 0);
			func_337(&(iParam1->f_64), *iParam0, 6000, vLocal_59, 0);
			func_553(iVar6, "PBL_plead_01", sVar8);
			__LIB_11__::func_629(12);
			break;
		case 12:
			if (!func_1295() && !__LIB_14__::func_607(iVar5, "afraid_loop_a", sVar7))
			{
				return;
			}
			if (!__LIB_2__::func_227(-2f, 1, 0, 0))
			{
				return;
			}
			if (!func_276(&(Local_62.f_1392[12 /*3*/]), Local_62.f_1473[0], 0, "TIMER_RHDGUN_COOLDOWN_BASEMENT_IDLE_DLG"))
			{
				return;
			}
			if (!func_1296("PBL_plead_01", 0))
			{
				return;
			}
			func_224(16384);
			func_1297(0f);
			func_1298();
			func_1299();
			__LIB_8__::func_336(&(Local_62.f_1518), "SRGKIG4d", *iParam1, Global_35, 0, 0, 1, 1);
			__LIB_9__::func_793(iVar6, "PBL_plead_01", sVar8, 1);
			func_337(&(iParam0->f_42), *iParam1, 6000, vLocal_59, 0);
			func_337(&(iParam1->f_64), Global_35, 6000, vLocal_59, 0);
			func_553(iVar5, "PBL_explain_02", sVar7);
			__LIB_11__::func_629(15);
			break;
		case 15:
			if (!func_1300())
			{
				return;
			}
			if (!__LIB_2__::func_227(-2f, 1, 0, 0))
			{
				return;
			}
			if (!func_276(&(Local_62.f_1392[12 /*3*/]), Local_62.f_1473[0], 0, "TIMER_RHDGUN_COOLDOWN_BASEMENT_IDLE_DLG"))
			{
				return;
			}
			if (!func_1293("PBL_explain_02"))
			{
				return;
			}
			func_1297(0f);
			func_1301();
			func_1294();
			__LIB_8__::func_336(&(Local_62.f_1518), "SRGKIGP3e2", *iParam0, Global_35, 0, 0, 1, 1);
			__LIB_9__::func_793(iVar5, "PBL_explain_02", sVar7, 1);
			func_337(&(iParam0->f_42), Global_35, 6000, vLocal_59, 0);
			func_337(&(iParam1->f_64), *iParam0, 6000, vLocal_59, 0);
			func_553(iVar6, "PBL_plead_02", sVar8);
			__LIB_11__::func_629(16);
			break;
		case 16:
			if (!func_1295() && !__LIB_14__::func_607(iVar5, "afraid_loop_a", sVar7))
			{
				return;
			}
			if (!__LIB_2__::func_227(-2f, 1, 0, 0))
			{
				return;
			}
			if (!func_276(&(Local_62.f_1392[12 /*3*/]), Local_62.f_1473[0], 0, "TIMER_RHDGUN_COOLDOWN_BASEMENT_IDLE_DLG"))
			{
				return;
			}
			if (!func_1296("PBL_plead_02", 0))
			{
				return;
			}
			func_1297(0f);
			func_1298();
			func_1299();
			__LIB_8__::func_336(&(Local_62.f_1518), "SRGKIG4d1", *iParam1, Global_35, 0, 0, 1, 1);
			__LIB_9__::func_793(iVar6, "PBL_plead_02", sVar8, 1);
			func_337(&(iParam0->f_42), *iParam1, 6000, vLocal_59, 0);
			func_337(&(iParam1->f_64), Global_35, 6000, vLocal_59, 0);
			func_553(iVar5, "PBL_explain_03", sVar7);
			__LIB_11__::func_629(20);
			break;
		case 20:
			if (!func_1300())
			{
				return;
			}
			if (!__LIB_2__::func_227(-2f, 1, 0, 0))
			{
				return;
			}
			if (!func_276(&(Local_62.f_1392[12 /*3*/]), Local_62.f_1473[0], 0, "TIMER_RHDGUN_COOLDOWN_BASEMENT_IDLE_DLG"))
			{
				return;
			}
			if (!func_1293("PBL_explain_03"))
			{
				return;
			}
			func_1297(0f);
			func_1301();
			func_1294();
			__LIB_8__::func_336(&(Local_62.f_1518), "SRGKIGP3e3", *iParam0, Global_35, 0, 0, 1, 1);
			__LIB_9__::func_793(iVar5, "PBL_explain_03", sVar7, 1);
			func_533(8388608);
			func_337(&(iParam0->f_42), Global_35, 6000, vLocal_59, 0);
			func_337(&(iParam1->f_64), *iParam0, 6000, vLocal_59, 0);
			func_553(iVar6, "PBL_plead_04", sVar8);
			__LIB_11__::func_629(21);
			break;
		case 21:
			if (!func_1295() && !__LIB_14__::func_607(iVar5, "afraid_loop_a", sVar7))
			{
				return;
			}
			if (!__LIB_2__::func_227(-2f, 1, 0, 0))
			{
				return;
			}
			if (!func_276(&(Local_62.f_1392[12 /*3*/]), Local_62.f_1473[0], 0, "TIMER_RHDGUN_COOLDOWN_BASEMENT_IDLE_DLG"))
			{
				return;
			}
			if (!func_1296("PBL_plead_03", 0))
			{
				return;
			}
			func_1297(0f);
			func_1298();
			func_1299();
			__LIB_8__::func_336(&(Local_62.f_1518), "SRGKIG4d2", *iParam1, Global_35, 0, 0, 1, 1);
			__LIB_9__::func_793(iVar6, "PBL_plead_04", sVar8, 1);
			func_337(&(iParam0->f_42), *iParam1, 6000, vLocal_59, 0);
			func_337(&(iParam1->f_64), Global_35, 6000, vLocal_59, 0);
			func_553(iVar6, "PBL_plead_01", sVar8);
			__LIB_11__::func_629(22);
			break;
		case 22:
			if (!func_1300())
			{
				return;
			}
			if (!__LIB_2__::func_227(-2f, 1, 0, 0))
			{
				return;
			}
			if (!func_276(&(Local_62.f_1392[12 /*3*/]), Local_62.f_1473[0], 0, "TIMER_RHDGUN_COOLDOWN_BASEMENT_IDLE_DLG"))
			{
				return;
			}
			if (!func_1296("PBL_plead_01", 1))
			{
				return;
			}
			func_1297(0f);
			func_1299();
			__LIB_8__::func_336(&(Local_62.f_1518), "SRGKIG4d3", *iParam1, Global_35, 0, 0, 1, 1);
			__LIB_9__::func_793(iVar6, "PBL_plead_01", sVar8, 1);
			func_533(4194304);
			__LIB_11__::func_629(23);
			break;
		case 23:
			__LIB_11__::func_629(25);
			break;
		case 25:
			if (!func_1300())
			{
				return;
			}
			if (!__LIB_2__::func_227(-2f, 1, 0, 0))
			{
				return;
			}
			func_224(32768);
			_NAMESPACE29::_0x66F9EB44342BB4C5(*iParam0, &(iParam0->f_42));
			_NAMESPACE29::_0x66F9EB44342BB4C5(*iParam1, &(iParam1->f_64));
			__LIB_11__::func_629(30);
			break;
		case 30:
			if (!func_221(131072))
			{
				return;
			}
			if (!func_1302())
			{
				return;
			}
			if (!__LIB_14__::func_607(iVar6, "afraid_loop_a", sVar8) && !__LIB_14__::func_607(iVar6, "afraid_loop_a_reset", sVar8))
			{
				if (!func_1303())
				{
					return;
				}
			}
			__LIB_8__::func_336(&(Local_62.f_1518), "PRRGS_IG9_CAP", *iParam1, Global_35, 0, 0, 1, 1);
			func_39(8388608);
			func_1283();
			func_1304();
			func_1305();
			__LIB_11__::func_629(31);
			break;
		case 31:
			if (!__LIB_14__::func_643(*iParam0, func_1290(), func_1306()) || !__LIB_14__::func_643(*iParam1, func_1290(), func_1307()))
			{
				return;
			}
			func_418(65536);
			func_553(iVar6, "PBL_wait_line_captive", sVar8);
			__LIB_11__::func_629(32);
			break;
		case 32:
			if (!func_1308("PBL_wait_line_captive"))
			{
				return;
			}
			func_1309();
			__LIB_9__::func_793(iVar6, "PBL_wait_line_captive", sVar8, 1);
			__LIB_11__::func_629(33);
			break;
		case 33:
			if (!func_1310())
			{
				return;
			}
			func_1311();
			func_553(iVar5, "PBL_wait_line_captor", sVar7);
			__LIB_11__::func_629(34);
			break;
		case 34:
			if (!func_1312("PBL_wait_line_captor"))
			{
				return;
			}
			if (__LIB_14__::func_606(Global_35, Local_62.f_1247[8 /*2*/]))
			{
				func_1313();
				__LIB_9__::func_793(iVar5, "PBL_wait_line_captor", sVar7, 1);
			}
			__LIB_11__::func_629(35);
			break;
		case 35:
			if (!__LIB_2__::func_227(0, 1, 0, 0))
			{
				return;
			}
			__LIB_8__::func_336(&(Local_62.f_1518), "SRGMCUT_CRYIDLE", *iParam1, Global_35, 0, 0, 1, 1);
			__LIB_11__::func_629(36);
			break;
		case 36:
			func_1314(iParam0, iParam1);
			if (!func_1315())
			{
				return;
			}
			func_1316();
			__LIB_11__::func_629(40);
			break;
		case 40:
			func_1314(iParam0, iParam1);
			if (!func_221(262144))
			{
				return;
			}
			if (!func_1317())
			{
				return;
			}
			__LIB_3__::func_732(0);
			__LIB_8__::func_336(&(Local_62.f_1518), "PRRGS_RETURN_B", *iParam1, Global_35, 0, 0, 1, 1);
			func_1283();
			func_1318();
			func_1284();
			__LIB_11__::func_629(41);
			break;
		case 41:
			if (!__LIB_2__::func_227(-2f, 1, 0, 0))
			{
				return;
			}
			if (__LIB_14__::func_643(*iParam1, func_1290(), func_1319()))
			{
				return;
			}
			func_224(65536);
			__LIB_11__::func_629(42);
			break;
		case 42:
			break;
		case 50:
			if (__LIB_14__::func_643(*iParam0, func_1290(), "speech_captor"))
			{
				func_19("SR_RHODES_GUN_SPEECH_START", 128);
				__LIB_8__::func_336(&(Local_62.f_1518), "SRGKIGP3g", *iParam0, *iParam1, 0, 0, 1, 1);
				func_224(8388608);
				__LIB_1__::func_402(&(Local_62.f_170.f_14), 1);
				__LIB_2__::func_507(&(iParam0->f_14), 5000);
				__LIB_2__::func_507(&(iParam1->f_89), 5000);
				func_297(*iParam0, *iParam1, &(Local_62.f_170.f_42), -1, vLocal_59, 0, 0);
				__LIB_11__::func_629(51);
			}
			if (PED::IS_PED_RAGDOLL(*iParam1))
			{
				__LIB_3__::func_732(0);
				__LIB_11__::func_629(55);
			}
			break;
		case 51:
			if (func_335(134217728) && !__LIB_1__::func_322("PRRGS_MISSHIM"))
			{
				func_1320(iParam1);
			}
			if (!func_221(33554432))
			{
				if (func_280(iVar5, sVar7, 0.056f) && __LIB_14__::func_643(*iParam0, func_1290(), "speech_captor"))
				{
					__LIB_14__::func_618(&(Local_62.f_1226[1]), 1);
					func_224(33554432);
				}
			}
			if ((!__LIB_14__::func_617(iParam1) && func_335(134217728)) && !__LIB_1__::func_322("PRRGS_MISSHIM"))
			{
				__LIB_11__::func_629(52);
			}
			if (!func_65())
			{
				__LIB_3__::func_732(1);
				func_254();
				func_533(268435456);
				__LIB_11__::func_629(52);
			}
			if (PED::IS_PED_RAGDOLL(*iParam1))
			{
				__LIB_3__::func_732(0);
				__LIB_11__::func_629(55);
			}
			if (!func_221(268435456))
			{
				if (iVar3 == 4)
				{
					if (__LIB_14__::func_607(iVar5, "cry_loop", sVar7))
					{
						if (func_559(iVar5, "PBL_trans_cry_intimidation", sVar7, 0))
						{
							__LIB_9__::func_793(iVar5, "PBL_trans_cry_intimidation", sVar7, 1);
							func_277(iVar5, "BOOL_cry_loop", 1, sVar7);
						}
					}
					else if (__LIB_14__::func_607(iVar5, "stand_cry_2_intimidation", sVar7))
					{
						if (func_280(iVar5, sVar7, 0.989f))
						{
							PED::_0xA180FBD502A03125(*iParam0, 2.75f, 1.75f);
							TASK::_TASK_INTIMIDATED_2(*iParam0, Global_35, 0, 0, 0, 1, 0, 0, 0);
							TASK::_0x41D1331AFAD5A091(*iParam0, 1, 0);
							PED::_0x2208438012482A1A(*iParam0, true, false);
							PED::SET_PED_KEEP_TASK(*iParam0, true);
							func_928(iVar5, "pedGunsmith", *iParam0, sVar7, 1, 0);
						}
					}
				}
				if (PED::_0x57779B55B83E2BEA(*iParam0))
				{
					__LIB_14__::func_611(iParam0, 273, 0);
					__LIB_14__::func_611(&Global_35, 249, 0);
					func_224(268435456);
				}
			}
			break;
		case 52:
			if (AUDIO::_0x1ECC76792F661CF5("SRGKIGP3h") && !((func_280(iVar6, sVar8, 0.99f) || !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar6)) || ANIMSCENE::_0x34A0671BE613D3D0(iVar6)))
			{
				return;
			}
			else if (!func_335(268435456))
			{
				return;
			}
			func_254();
			func_1321(iParam1);
			__LIB_11__::func_629(53);
			break;
		case 53:
			if (!__LIB_14__::func_606(Global_35, Local_62.f_1247[8 /*2*/]))
			{
				return;
			}
			if (func_1322() || func_276(&(iParam0->f_214), 10f, 1, "gunsmith.timerGeneric"))
			{
				__LIB_8__::func_336(&(Local_62.f_1518), "SRGKSORR3", *iParam1, Global_35, 0, 0, 1, 1);
				func_418(134217728);
				func_533(16);
				__LIB_11__::func_629(54);
			}
			break;
		case 54:
			if (func_1323(iParam0))
			{
				func_553(iVar5, "PBL_enter_intimidation", sVar7);
				func_140(1, 0);
				__LIB_0__::func_172(Local_62.f_1247[11 /*2*/]);
				__LIB_0__::func_172(Local_62.f_1247[12 /*2*/]);
				__LIB_11__::func_629(63);
			}
			break;
		case 55:
			if (!PED::IS_PED_RAGDOLL(*iParam1))
			{
				func_1321(iParam1);
				if (__LIB_14__::func_643(*iParam0, "script_proc@robberies@shop@rhodes@gunsmith@inside_downstairs", "cry_loop_owner"))
				{
				}
				else
				{
					func_1324(iParam0, 1, 0);
					__LIB_11__::func_629(66);
				}
				func_958(1, 1);
				__LIB_11__::func_629(100);
			}
			break;
		case 60:
			__LIB_3__::func_732(0);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 46, true);
			if (((__LIB_14__::func_643(*iParam0, func_1290(), func_1325()) || __LIB_14__::func_643(*iParam0, func_1290(), "explain_01_captor")) || __LIB_14__::func_643(*iParam0, func_1290(), "explain_02_captor")) || __LIB_14__::func_643(*iParam0, func_1290(), "explain_03_captor"))
			{
				func_1326(iParam0, iParam1, "PBL_captive_shot_01");
				func_553(iVar5, "PBL_trans_cry_intimidation", sVar7);
				func_928(iVar5, "objPhoto", Local_62.f_1226[1], sVar7, 1, 0);
				func_1273(Local_62.f_1226[1]);
				__LIB_11__::func_629(61);
			}
			else if (__LIB_14__::func_620(*iParam0, "safeToBreakoutA"))
			{
				func_1326(iParam0, iParam1, "PBL_captive_shot_03");
				__LIB_11__::func_629(62);
			}
			else if (__LIB_14__::func_620(*iParam0, "safeToBreakoutB"))
			{
				func_1326(iParam0, iParam1, "PBL_captive_shot_04");
				__LIB_11__::func_629(62);
			}
			else if (__LIB_14__::func_620(*iParam0, "safeToBreakoutC"))
			{
				func_1326(iParam0, iParam1, "PBL_captive_shot_05");
				__LIB_11__::func_629(62);
			}
			else
			{
				func_1326(iParam0, iParam1, 0);
				func_1324(iParam0, 1, 0);
				__LIB_11__::func_629(66);
			}
			break;
		case 61:
			if (iVar3 == 2 || iVar3 == 2048)
			{
				__LIB_3__::func_732(0);
				__LIB_11__::func_629(64);
			}
			else if (iVar3 == 4)
			{
				if (__LIB_14__::func_607(iVar5, "cry_loop_captive_dead", sVar7))
				{
					if (func_559(iVar5, "PBL_enter_intimidation", sVar7, 0))
					{
						__LIB_9__::func_793(iVar5, "PBL_enter_intimidation", sVar7, 1);
						func_277(iVar5, "BOOL_cry_loop_captive_dead", 1, sVar7);
					}
				}
			}
			if (!func_221(268435456))
			{
				if (PED::_0x57779B55B83E2BEA(*iParam0))
				{
					__LIB_14__::func_611(iParam0, 273, 0);
					__LIB_14__::func_611(&Global_35, 249, 0);
					func_224(268435456);
				}
			}
			if (__LIB_14__::func_607(iVar5, "enter_intimidation", sVar7))
			{
				if (func_280(iVar5, sVar7, 0.991f) || !__LIB_14__::func_634(iParam0))
				{
					PED::_0x935CF6E42BAF7F4D(*iParam0);
					PED::_0xA180FBD502A03125(*iParam0, 2.75f, 1.75f);
					TASK::_TASK_INTIMIDATED_2(*iParam0, Global_35, 0, 0, 0, 1, 0, 0, 0);
					TASK::_0x41D1331AFAD5A091(*iParam0, 1, 0);
					PED::_0x2208438012482A1A(*iParam0, true, false);
					PED::SET_PED_KEEP_TASK(*iParam0, true);
					func_928(iVar5, "pedGunsmith", *iParam0, sVar7, 1, 0);
				}
			}
			break;
		case 62:
			if (__LIB_14__::func_617(iParam0))
			{
				return;
			}
			__LIB_11__::func_629(64);
			break;
		case 63:
			if (func_308(*iParam0, 0, &(iParam0->f_14), &iVar13, 0, 0))
			{
				if (iVar13 == 2)
				{
					__LIB_11__::func_629(64);
				}
				else if (iVar13 == 4 && func_559(iVar5, "PBL_enter_intimidation", sVar7, 0))
				{
					__LIB_9__::func_793(iVar5, "PBL_enter_intimidation", sVar7, 1);
					func_277(iVar5, "BOOL_cry_loop_captive_dead", 1, sVar7);
					__LIB_11__::func_629(65);
				}
			}
			break;
		case 64:
			if (PED::IS_PED_RAGDOLL(*iParam0))
			{
				return;
			}
			func_1324(iParam0, 0, 0);
			__LIB_11__::func_629(66);
			break;
		case 65:
			if (func_280(iVar5, sVar7, 0.998f))
			{
				TASK::_TASK_INTIMIDATED_2(*iParam0, Global_35, 0, 0, 0, 1, 0, 0, 0);
				TASK::_0x41D1331AFAD5A091(*iParam0, 1, 0);
				PED::_0x2208438012482A1A(*iParam0, true, false);
				PED::SET_PED_KEEP_TASK(*iParam0, true);
				__LIB_11__::func_629(66);
			}
			break;
		case 66:
			if (!func_221(268435456))
			{
				if (PED::_0x57779B55B83E2BEA(*iParam0))
				{
					PED::_0xA180FBD502A03125(*iParam0, 2.75f, 1.75f);
					__LIB_14__::func_611(iParam0, 273, 0);
					__LIB_14__::func_611(&Global_35, 249, 0);
					func_224(268435456);
				}
			}
			if (ENTITY::IS_ENTITY_DEAD(*iParam0))
			{
				func_254();
				__LIB_0__::func_325(&(iParam0->f_1));
				func_958(1, 1);
				__LIB_11__::func_629(100);
			}
			else if (!__LIB_14__::func_606(Global_35, Local_62.f_1247[8 /*2*/]))
			{
				PED::_0xA180FBD502A03125(*iParam0, 1.5f, 1f);
				func_958(1, 1);
				__LIB_11__::func_629(100);
			}
			else if (func_44(268435456))
			{
				if (!func_335(-2147483648))
				{
					if (__LIB_2__::func_227(3f, 1, 0, 0))
					{
						__LIB_8__::func_336(&(Local_62.f_1518), "SRGK_ATTACK2", *iParam0, Global_35, 0, 0, 1, 1);
						func_533(-2147483648);
					}
				}
			}
			break;
		case 75:
			func_553(Local_62.f_1216[4], "pbLeave", "SCENE_RHDGUN_VICTIM_ALONE");
			func_553(Local_62.f_1216[4], "pbAskFree2", "SCENE_RHDGUN_VICTIM_ALONE");
			func_553(Local_62.f_1216[4], "pbAskFree3", "SCENE_RHDGUN_VICTIM_ALONE");
			func_553(Local_62.f_1216[4], "pbAskFree4", "SCENE_RHDGUN_VICTIM_ALONE");
			func_140(1, 0);
			__LIB_0__::func_172(Local_62.f_1247[11 /*2*/]);
			__LIB_0__::func_172(Local_62.f_1247[12 /*2*/]);
			if (!Local_62.f_1247[8 /*2*/].f_1)
			{
				__LIB_2__::func_506(Local_62.f_1216[2], "SCENE_RHDGUN_BASEMENT_CAPTIVE");
				__LIB_2__::func_506(Local_62.f_1216[3], "SCENE_RHDGUN_BASEMENT_GUNSMITH");
				func_1260();
				__LIB_14__::func_616(Local_62.f_1216[4], "SCENE_RHDGUN_VICTIM_ALONE");
				__LIB_9__::func_793(Local_62.f_1216[4], "pbBedLoop", "SCENE_RHDGUN_VICTIM_ALONE", 1);
				__LIB_11__::func_629(76);
			}
			else if (func_221(16777216))
			{
				if (__LIB_14__::func_643(*iParam1, func_1290(), "speech_captive"))
				{
					__LIB_9__::func_793(iVar6, "PBL_captor_shot_02", sVar8, 1);
					__LIB_11__::func_629(87);
				}
				else
				{
					func_1321(iParam1);
					func_958(1, 1);
					__LIB_11__::func_629(100);
				}
				__LIB_3__::func_732(0);
				__LIB_8__::func_336(&(Local_62.f_1518), "SRGKAFTER", *iParam1, Global_35, 0, 0, 1, 1);
			}
			else
			{
				__LIB_3__::func_732(0);
				__LIB_8__::func_336(&(Local_62.f_1518), "PRRGS_IG6c1", *iParam1, Global_35, 0, 0, 1, 1);
				if (func_221(65536))
				{
					__LIB_11__::func_629(78);
				}
				else
				{
					func_553(iVar6, "PBL_captor_shot_01", sVar8);
					__LIB_11__::func_629(77);
				}
			}
			break;
		case 76:
			if (__LIB_14__::func_606(Global_35, Local_62.f_1247[8 /*2*/]))
			{
				__LIB_8__::func_336(&(Local_62.f_1518), "PRRGS_IG6a", *iParam1, Global_35, 0, 0, 1, 1);
				func_277(Local_62.f_1216[4], "bStopBedLoop", 1, "SCENE_RHDGUN_VICTIM_ALONE");
				__LIB_9__::func_793(Local_62.f_1216[4], "pbSawPlayer", "SCENE_RHDGUN_VICTIM_ALONE", 1);
				func_1287(&(Local_62.f_1482[0]), func_1286(), joaat("WEAPON_REPEATER_WINCHESTER"));
				func_224(8192);
				PED::SET_PED_CONFIG_FLAG(*iParam1, 6, true);
				__LIB_11__::func_629(79);
			}
			break;
		case 77:
			if (!func_559(iVar6, "PBL_captor_shot_01", sVar8, 0))
			{
				return;
			}
			func_224(262144);
			__LIB_14__::func_616(iVar6, sVar8);
			__LIB_9__::func_793(iVar6, "PBL_captor_shot_01", sVar8, 1);
			func_224(65536);
			func_277(iVar6, "BOOL_afraid_loop_b", 1, sVar8);
			func_277(iVar6, "BOOL_afraid_loop_a", 0, sVar8);
			__LIB_11__::func_629(79);
			break;
		case 78:
			if (!func_559(iVar6, "PBL_react_to_gunfire_a", sVar8, 0))
			{
				return;
			}
			if (!__LIB_14__::func_623(iVar6, sVar8, "PBL_react_to_gunfire_a"))
			{
				__LIB_9__::func_793(iVar6, "PBL_react_to_gunfire_a", sVar8, 1);
				return;
			}
			else
			{
				func_277(iVar6, "BOOL_afraid_loop_a", 1, "PBL_react_to_gunfire_a");
			}
			if (!__LIB_14__::func_643(*iParam1, func_1290(), "cower_loop_a_captive"))
			{
				return;
			}
			if (!func_276(&(iParam1->f_123), 3f, 0, "captive.timerGenericB"))
			{
				return;
			}
			func_277(iVar6, "BOOL_cower_loop_a", 1, sVar8);
			func_277(iVar6, "BOOL_afraid_loop_a", 0, sVar8);
			__LIB_9__::func_793(iVar6, "PBL_cower_to_afraid_a", sVar8, 1);
			__LIB_11__::func_629(79);
			break;
		case 79:
			if (!__LIB_2__::func_227(0, 1, 0, 0) || __LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 262144))
			{
				return;
			}
			__LIB_9__::func_793(Local_62.f_1216[4], "pbAskFree2", sVar8, 1);
			func_224(16384);
			func_337(&(iParam1->f_64), Global_35, 6000, vLocal_59, 0);
			__LIB_8__::func_336(&(Local_62.f_1518), "PRRGS_IG6c2", *iParam1, Global_35, 0, 0, 1, 1);
			__LIB_11__::func_629(80);
			break;
		case 80:
			if (!__LIB_2__::func_227(4f, 1, 0, 0) || __LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 262144))
			{
				return;
			}
			__LIB_9__::func_793(Local_62.f_1216[4], "pbAskFree3", sVar8, 1);
			func_337(&(iParam1->f_64), Global_35, 6000, vLocal_59, 0);
			__LIB_8__::func_336(&(Local_62.f_1518), "PRRGS_IG6c3", *iParam1, Global_35, 0, 0, 1, 1);
			__LIB_11__::func_629(81);
			break;
		case 81:
			if (!__LIB_2__::func_227(4f, 1, 0, 0) || __LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 262144))
			{
				return;
			}
			__LIB_9__::func_793(Local_62.f_1216[4], "pbAskFree4", sVar8, 1);
			func_337(&(iParam1->f_64), Global_35, 6000, vLocal_59, 0);
			__LIB_8__::func_336(&(Local_62.f_1518), "PRRGS_IG6c4", *iParam1, Global_35, 0, 0, 1, 1);
			__LIB_11__::func_629(85);
			break;
		case 82:
			if (!__LIB_2__::func_227(4f, 1, 0, 0) || __LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 262144))
			{
				return;
			}
			func_337(&(iParam1->f_64), Global_35, 6000, vLocal_59, 0);
			__LIB_8__::func_336(&(Local_62.f_1518), "PRCSHRG_IG6_P1", *iParam1, Global_35, 0, 0, 1, 1);
			__LIB_11__::func_629(85);
			break;
		case 85:
			break;
		case 86:
			if (func_280(Local_62.f_1216[4], "SCENE_RHDGUN_VICTIM_ALONE", 0.5703f))
			{
				func_1321(iParam1);
				func_958(1, 1);
				__LIB_11__::func_629(100);
			}
			break;
		case 87:
			if (!__LIB_14__::func_617(iParam1))
			{
				func_1321(iParam1);
				func_958(1, 1);
				__LIB_11__::func_629(100);
			}
			break;
		case 88:
			func_1274(0);
			if (!PED::_IS_PED_HOGTIED(*iParam1))
			{
				__LIB_8__::func_336(&(Local_62.f_1518), "SRGH_REAATTK", *iParam1, Global_35, 0, 0, 1, 1);
			}
			func_1321(iParam1);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 46, true);
			func_1327(*iParam0, &(Local_62.f_1616[1]), iParam1->f_117, 3000, Global_35);
			func_57(268435456);
			__LIB_2__::func_73(*iParam0, &(iParam0->f_1), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
			func_958(1, 1);
			__LIB_11__::func_629(100);
			break;
		case 89:
			func_1274(0);
			if (!PED::_IS_PED_HOGTIED(*iParam1))
			{
				__LIB_8__::func_336(&(Local_62.f_1518), "SRGH_REAATTK", *iParam1, Global_35, 0, 0, 1, 1);
			}
			func_1321(iParam1);
			func_958(1, 1);
			__LIB_11__::func_629(100);
			break;
		case 95:
			func_958(1, 1);
			ENTITY::SET_ENTITY_ROTATION(Local_62.f_1226[0], 0f, 0f, 165f, 2, true);
			if (!func_62(33554432))
			{
				__LIB_2__::func_426(iParam1);
			}
			PERSCHAR::_0x7B204F88F6C3D287(__LIB_0__::func_120(iParam0->f_8));
			func_517(8);
			func_591(*iParam0, 1322.407f, -1324.66f, 73.94173f, -16.56f, 2, 1073741824 /* Float: 2f */);
			func_1258(&(iParam0->f_13), &(iParam0->f_85), 0);
			func_563(&(iParam1->f_10), &(iParam1->f_30), 0, 0);
			__LIB_11__::func_629(100);
			break;
		case 100:
			break;
	}
}

void func_768(int* iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		if (iLocal_46 <= 21)
		{
			func_254();
		}
		if (VOLUME::_DOES_VOLUME_EXIST(Local_62.f_1376))
		{
			__LIB_0__::func_172(Local_62.f_1376);
			__LIB_0__::func_172(iLocal_1771);
			__LIB_0__::func_172(iLocal_1770);
		}
	}
	iVar0 = Local_62.f_1216[0];
	sVar1 = "SCENE_STRGEN_HOLDUP";
	if (!func_221(-2147483648))
	{
		if ((PED::_IS_PED_LASSOED(*iParam0) || PED::_IS_PED_HOGTIED(*iParam0)) || __LIB_1__::func_358(Global_35, *iParam0))
		{
			TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
			func_224(-2147483648);
		}
	}
	if (__LIB_2__::func_1(*iParam0, 0, 0))
	{
		if (!__LIB_2__::func_800() && !__LIB_14__::func_606(Global_35, Local_62.f_1290))
		{
			if (__LIB_1__::func_322("PRSGS_LADDER"))
			{
				if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("PRSGS_LADDER") >= 4)
				{
					__LIB_8__::func_111("PRSGS_LADDER", 0);
				}
			}
			__LIB_3__::func_648(*iParam0, 0);
		}
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(*iParam0, iVar0))
		{
			__LIB_0__::func_172(Local_62.f_1376);
			__LIB_0__::func_172(iLocal_1770);
		}
	}
	else
	{
		__LIB_0__::func_172(iLocal_1770);
	}
	func_308(*iParam0, 0, &(iParam0->f_14), &iVar2, 0, 0);
	if (!func_55(262144))
	{
		if (__LIB_14__::func_606(Global_35, Local_62.f_1290))
		{
			if (iVar2 == 8 && __LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_LASSO"))
			{
				func_1329(iParam0);
				__LIB_11__::func_629(19);
			}
			else if (iVar2 == 2)
			{
				if (PED::_0x29FCE825613FEFCA(*iParam0, 1000) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, Global_35, 1, 1))
				{
				}
				else
				{
					func_1330(*iParam0);
				}
			}
			else
			{
				func_1331(iParam0);
			}
		}
	}
	else
	{
		if (iVar2 == 8)
		{
			if ((iLocal_46 != 19 && iLocal_46 != 20) && iLocal_46 != 21)
			{
				if (__LIB_14__::func_607(iVar0, "BasementIdle1", sVar1))
				{
					func_277(iVar0, "COWER_BOOL", 0, sVar1);
					if (!ANIMSCENE::_0x1F0E401031E20146(iVar0, "PB_COWER_L_BASE1"))
					{
						func_553(iVar0, "PB_COWER_L_BASE1", sVar1);
						__LIB_9__::func_793(iVar0, "PB_COWER_L_BASE1", sVar1, 1);
					}
					else
					{
						func_553(iVar0, "PB_COWER_R_BASE1", sVar1);
						__LIB_9__::func_793(iVar0, "PB_COWER_R_BASE1", sVar1, 1);
					}
				}
				else if (__LIB_14__::func_607(iVar0, "BasementIdle2", sVar1))
				{
					func_277(iVar0, "COWER_BOOL", 0, sVar1);
					if (!ANIMSCENE::_0x1F0E401031E20146(iVar0, "PB_COWER_L_BASE2"))
					{
						func_553(iVar0, "PB_COWER_L_BASE2", sVar1);
						__LIB_9__::func_793(iVar0, "PB_COWER_L_BASE2", sVar1, 1);
					}
					else
					{
						func_553(iVar0, "PB_COWER_R_BASE2", sVar1);
						__LIB_9__::func_793(iVar0, "PB_COWER_R_BASE2", sVar1, 1);
					}
				}
			}
		}
		else
		{
			if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iVar0, "COWER_BOOL") == 0)
			{
				func_277(iVar0, "COWER_BOOL", 1, sVar1);
			}
			if (!func_62(134217728))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(*iParam0) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					func_1331(iParam0);
				}
			}
		}
		if (!func_55(1048576))
		{
			if (__LIB_3__::func_138(Global_35, MISC::GET_HASH_KEY(func_611())))
			{
				__LIB_0__::func_325(&(Local_62.f_1482[0]));
				func_57(1048576);
				__LIB_11__::func_629(30);
			}
			else
			{
				func_1332(iParam0, iParam0->f_209);
			}
		}
	}
	if (!__LIB_14__::func_606(Global_35, Local_62.f_1290))
	{
		if (iLocal_1774 == 0)
		{
			if (func_313(&(Local_62.f_1), 32))
			{
				__LIB_0__::func_268(&(Local_62.f_1465), 45f);
				func_57(65536);
			}
			if (func_248(&(Local_62.f_1), 1f))
			{
				iLocal_1774 = 1;
			}
		}
	}
	if (iLocal_1775 == 0)
	{
		if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			iVar3 = ITEMSET::CREATE_ITEMSET(false);
			LAW::_0x0C392DB374655176(-1791.771f, -386.0641f, 159.3286f, 5.5f, iVar3);
			bVar4 = ITEMSET::GET_ITEMSET_SIZE(iVar3) > 0;
			if (bVar4 == 1)
			{
			}
			ITEMSET::_CLEAR_ITEMSET(iVar3);
			ITEMSET::CLEAN_ITEMSET(iVar3);
			ITEMSET::DESTROY_ITEMSET(iVar3);
			if (!__LIB_14__::func_606(Global_35, Local_62.f_1290) || bVar4 == 1)
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(*iParam0, Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
				PED::SET_PED_KEEP_TASK(*iParam0, true);
				iLocal_1775 = 1;
				__LIB_0__::func_172(iLocal_1770);
			}
		}
	}
	func_1333(iParam0, iVar0, sVar1);
	func_1334(iParam0, iVar0, sVar1, iVar2);
	func_1335(iParam0);
	func_1336(iParam0);
	func_1337(iParam0, iVar2);
	func_1338(iParam0, iVar0, sVar1);
	if ((Local_62.f_1620 % 10) != 0)
	{
		func_1339();
	}
	if (__LIB_0__::func_75(&uLocal_1782))
	{
		if (__LIB_1__::func_313(&uLocal_1782, 5f))
		{
			__LIB_0__::func_172(iLocal_1770);
		}
	}
	switch (iLocal_46)
	{
		case 0:
			if (!__LIB_0__::func_51(&(iParam0->f_13), 1))
			{
				func_553(iVar0, "PB_B2_TRANS_B1", sVar1);
				func_553(iVar0, "PB_B1_TRANS_B2", sVar1);
				func_1340(iVar0, sVar1);
				__LIB_3__::func_548(&(iParam0->f_85[0 /*11*/]), "INTERACT_QUESTION", "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_3__::func_548(&(iParam0->f_85[1 /*11*/]), "INTERACT_THREATEN", "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				func_1258(&(iParam0->f_13), &(iParam0->f_85), 0);
				func_518(&(iParam0->f_13), 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, -1010274343))
			{
				if (VOLUME::_DOES_VOLUME_EXIST(Local_62.f_1376))
				{
					__LIB_0__::func_172(Local_62.f_1376);
					__LIB_0__::func_172(iLocal_1771);
					Local_62.f_1376 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), -1788.569f, -385.934f, 157.475f, 0f, 0f, -35f, 0.9f, 2.182f, 3f);
					PED::_0xAE6004120C18DF97(Local_62.f_170, 0, 1);
					iLocal_1770 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), -1791.637f, -388.958f, 157.475f, 0f, 0f, -58.115f, 1f, 2.767f, 3f);
				}
			}
			if (__LIB_14__::func_643(*iParam0, func_1138(), "ladder_idle"))
			{
				if (!func_221(8388608))
				{
					if (VOLUME::_DOES_VOLUME_EXIST(Local_62.f_1376))
					{
						__LIB_0__::func_172(Local_62.f_1376);
						__LIB_0__::func_172(iLocal_1771);
						Local_62.f_1376 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), -1788.569f, -385.934f, 157.475f, 0f, 0f, -35f, 0.9f, 2.182f, 3f);
						func_224(8388608);
					}
				}
				if (__LIB_14__::func_606(Global_35, Local_62.f_1290))
				{
					func_277(iVar0, "bStopLadderLoop", 1, sVar1);
					__LIB_2__::func_507(&(iParam0->f_14), 500);
					__LIB_11__::func_629(10);
					func_1341(&(iParam0->f_85[1 /*11*/]), "INTERACT_THREATEN", 1);
					func_1258(&(iParam0->f_13), &(iParam0->f_85), 1);
					__LIB_1__::func_283(&uLocal_1782, 0);
				}
				else
				{
					func_1342(*iParam0);
				}
			}
			else if (!TASK::GET_IS_TASK_ACTIVE(Local_62.f_170, 3))
			{
				__LIB_2__::func_506(iVar0, sVar1);
				func_796(0, func_900(0), 0, "pbLadderToCorner");
				__LIB_11__::func_629(1);
				__LIB_0__::func_172(iLocal_1770);
			}
			break;
		case 1:
			if (!PED::IS_PED_RAGDOLL(Local_62.f_170))
			{
				func_813(Local_62.f_170, func_1343(), func_1344(), 1065353216 /* Float: 1f */, 1050253722 /* Float: 0.3f */, 0, 20000);
				__LIB_11__::func_629(2);
			}
			break;
		case 2:
			if (PED::IS_PED_RAGDOLL(Local_62.f_170))
			{
				__LIB_11__::func_629(1);
			}
			else if (__LIB_3__::func_501(Local_62.f_170, func_1343(), func_1344(), 0.4f, 20f, 1))
			{
				if (func_799(0))
				{
					func_1139();
					__LIB_14__::func_616(iVar0, sVar1);
					__LIB_9__::func_793(iVar0, "pbLadderToCorner", sVar1, 1);
					__LIB_11__::func_629(0);
				}
			}
			else if (!__LIB_14__::func_642(Local_62.f_170, 1435919172, 1))
			{
				__LIB_11__::func_629(1);
			}
			break;
		case 10:
			if (__LIB_14__::func_643(*iParam0, func_1138(), "basement_idle_01"))
			{
				func_224(65536);
				__LIB_11__::func_629(11);
				__LIB_0__::func_172(iLocal_1770);
			}
			if (__LIB_14__::func_643(*iParam0, func_1138(), "walk_backwards"))
			{
				if (func_1345(*iParam0, func_1138(), "walk_backwards") >= 0.22f)
				{
					if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1770))
					{
						__LIB_0__::func_172(iLocal_1770);
					}
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, 810481058))
			{
				__LIB_0__::func_172(iLocal_1770);
			}
			if (iParam0->f_209 == 0)
			{
				__LIB_0__::func_37(&(Local_62.f_1392[0 /*3*/]));
				Local_62.f_1473[0] = 20f;
				__LIB_3__::func_732(0);
				func_596(iParam0, "PRSGS_A_ILO1_P1", "PRSGS_J_ILO1_P1", 1);
				func_1258(&(iParam0->f_13), &(iParam0->f_85), 0);
				__LIB_11__::func_629(12);
				__LIB_0__::func_172(iLocal_1770);
			}
			else if (iParam0->f_209 == 1)
			{
				func_1329(iParam0);
				func_1258(&(iParam0->f_13), &(iParam0->f_85), 0);
				func_518(&(iParam0->f_13), 4096);
				__LIB_11__::func_629(19);
				__LIB_0__::func_172(iLocal_1770);
			}
			break;
		case 11:
			if (iParam0->f_209 == 0)
			{
				__LIB_0__::func_37(&(Local_62.f_1392[0 /*3*/]));
				Local_62.f_1473[0] = 20f;
				__LIB_3__::func_732(0);
				func_596(iParam0, "PRSGS_A_ILO1_P1", "PRSGS_J_ILO1_P1", 1);
				func_1258(&(iParam0->f_13), &(iParam0->f_85), 0);
				__LIB_11__::func_629(12);
			}
			else if (iParam0->f_209 == 1)
			{
				func_1329(iParam0);
				func_1258(&(iParam0->f_13), &(iParam0->f_85), 0);
				func_518(&(iParam0->f_13), 4096);
				__LIB_11__::func_629(19);
			}
			break;
		case 12:
			if (!__LIB_2__::func_227(-2f, 1, 0, 0))
			{
				return;
			}
			__LIB_8__::func_336(&(Local_62.f_1518), "PRSGS_C_ILO1_P1", *iParam0, Global_35, 0, 0, 1, 1);
			__LIB_11__::func_629(13);
			break;
		case 13:
			if (!__LIB_2__::func_227(-2f, 1, 0, 0))
			{
				return;
			}
			__LIB_0__::func_37(&(Local_62.f_1392[0 /*3*/]));
			Local_62.f_1473[0] = 0f;
			__LIB_11__::func_629(14);
			break;
		case 14:
			if (!__LIB_0__::func_51(&(iParam0->f_13), 8))
			{
				func_1341(&(iParam0->f_85[1 /*11*/]), "INTERACT_THREATEN", 1);
				__LIB_2__::func_411(&(iParam0->f_85[1 /*11*/]), 1, 0);
				func_518(&(iParam0->f_13), 8);
			}
			if (iParam0->f_209 != 1)
			{
				return;
			}
			func_1329(iParam0);
			func_1258(&(iParam0->f_13), &(iParam0->f_85), 0);
			func_518(&(iParam0->f_13), 4096);
			__LIB_11__::func_629(19);
			break;
		case 19:
			PED::APPLY_PED_DAMAGE_PACK(*iParam0, "PD_Pissing_Pants", 0f, 1f);
			if (!PED::_IS_PED_HOGTIED(Local_62.f_170) && !PED::_IS_PED_LASSOED(Local_62.f_170))
			{
				TASK::TASK_PLAY_ANIM(*iParam0, func_1138(), "basement_idle_flinch", 2f, -2f, -1, 67108880, 0f, false, 65536, false, 0, false);
			}
			__LIB_11__::func_629(20);
			break;
		case 20:
			if (!__LIB_2__::func_227(-3f, 1, 0, 0))
			{
				return;
			}
			if (!__LIB_0__::func_51(&(iParam0->f_13), 4096))
			{
				func_1346("basement_line_10", "PRSGS_BASE10");
			}
			else
			{
				func_1346("basement_line_10", "PRSGS_BASE10_2");
			}
			func_594(func_611(), 1);
			__LIB_11__::func_629(21);
			break;
		case 21:
			if (__LIB_2__::func_227(-1f, 1, 0, 0) && !ENTITY::IS_ENTITY_DEAD(*iParam0))
			{
				func_596(iParam0, "PRSGS_BETTER", "PRSGS_BETTERJ", 1);
				__LIB_3__::func_652(-1792.26f, -382.182f, 157.5527f, &(Local_62.f_1482[0]), 408396114, 0, 0, 0);
				__LIB_11__::func_629(22);
			}
			break;
		case 30:
			if (!__LIB_14__::func_620(Global_35, "objectExchange"))
			{
				return;
			}
			func_1347(1);
			__LIB_14__::func_615(Local_62, 524288);
			func_553(iVar0, "pbToKnees", sVar1);
			func_553(iVar0, "pbToKnees02", sVar1);
			PED::_0xF7EA250B9A919E03(joaat("INTIMIDATED_ON_KNEES"), *iParam0);
			PED::_0xF7EA250B9A919E03(joaat("INTIMIDATED_ON_ASS"), *iParam0);
			PED::_0xF7EA250B9A919E03(joaat("INTIMIDATED_ON_FEET_REACTION"), *iParam0);
			__LIB_1__::func_616(5000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
			__LIB_11__::func_629(31);
			break;
		case 31:
			if (__LIB_2__::func_227(2f, 1, 0, 0))
			{
				func_1346("basement_line_14", "PRSGS_BASE14");
				__LIB_11__::func_629(32);
				if (!func_62(134217728))
				{
					func_1149(65536);
				}
			}
			break;
		case 32:
			if (!__LIB_2__::func_227(-3f, 1, 0, 0))
			{
				return;
			}
			if (!__LIB_14__::func_606(Global_35, Local_62.f_1247[0 /*2*/]))
			{
				func_1349(iParam0, &(iParam0->f_209));
				return;
			}
			func_1258(&(iParam0->f_13), &(iParam0->f_85), 0);
			__LIB_11__::func_629(41);
			break;
		case 41:
			if (!__LIB_2__::func_1(*iParam0, 0, 1))
			{
				__LIB_8__::func_336(&(Local_62.f_1518), "PRSGS_BASE13", *iParam0, Global_35, 0, 0, 1, 1);
				func_297(Local_62.f_170, Global_35, &(Local_62.f_170.f_42), -1, vLocal_59, 1, 0);
				__LIB_11__::func_629(100);
				return;
			}
			if (func_1350(iVar0, sVar1))
			{
				__LIB_9__::func_793(iVar0, "pbToKnees", sVar1, 1);
				func_277(iVar0, "bStopBasementLoop2", 1, sVar1);
				func_224(131072);
				__LIB_11__::func_629(42);
				__LIB_2__::func_360(&(iParam0->f_85[0 /*11*/]), "RE_INTER_POS");
			}
			else if (func_1351(iVar0, sVar1))
			{
				__LIB_9__::func_793(iVar0, "pbToKnees02", sVar1, 1);
				func_277(iVar0, "bStopBasementLoop1", 1, sVar1);
				func_224(131072);
				__LIB_11__::func_629(42);
				__LIB_2__::func_360(&(iParam0->f_85[0 /*11*/]), "RE_INTER_POS");
			}
			break;
		case 42:
			if (!__LIB_14__::func_607(iVar0, "ToKnees", sVar1))
			{
				return;
			}
			__LIB_8__::func_336(&(Local_62.f_1518), "PRSGS_BASE13", *iParam0, Global_35, 0, 0, 1, 1);
			func_297(Local_62.f_170, Global_35, &(Local_62.f_170.f_42), -1, vLocal_59, 1, 0);
			__LIB_11__::func_629(43);
			break;
		case 43:
			if (!__LIB_14__::func_606(Global_35, Local_62.f_1290))
			{
				return;
			}
			if (!__LIB_2__::func_227(-4.5f, 1, 0, 0))
			{
				return;
			}
			if (!__LIB_14__::func_643(*iParam0, func_1138(), "Crying"))
			{
				return;
			}
			func_277(iVar0, "bStopCryLoop", 1, sVar1);
			__LIB_3__::func_732(0);
			__LIB_8__::func_336(&(Local_62.f_1518), "PRSGS_C_SORRY", *iParam0, Global_35, 0, 0, 1, 1);
			__LIB_11__::func_629(44);
			break;
		case 44:
			if (!__LIB_2__::func_227(-2.5f, 1, 0, 0))
			{
				if (__LIB_0__::func_51(&(iParam0->f_13), 2))
				{
					func_1258(&(iParam0->f_13), &(iParam0->f_85), 0);
				}
				return;
			}
			if (!__LIB_0__::func_51(&(iParam0->f_13), 2))
			{
				func_1341(&(iParam0->f_85[0 /*11*/]), "INTERACT_GREET", 0);
				func_1341(&(iParam0->f_85[1 /*11*/]), "INTERACT_THREATEN", 1);
				func_1258(&(iParam0->f_13), &(iParam0->f_85), 1);
			}
			if (iParam0->f_209 == 0)
			{
				func_596(iParam0, "PRSGS_A_ILO4_P1", "PRSGS_J_ILO4_P1", 1);
				func_297(*iParam0, Global_35, &(iParam0->f_42), -1, vLocal_59, 1, 0);
				func_1258(&(iParam0->f_13), &(iParam0->f_85), 0);
				__LIB_11__::func_629(100);
			}
			else if (iParam0->f_209 == 1)
			{
				func_596(iParam0, "PRSGS_A_ILO4_N1", "PRSGS_J_ILO4_N1", 1);
				func_297(*iParam0, Global_35, &(iParam0->f_42), -1, vLocal_59, 1, 0);
				func_1258(&(iParam0->f_13), &(iParam0->f_85), 0);
				__LIB_11__::func_629(100);
			}
			break;
		case 100:
			break;
	}
}

void func_769(var uParam0, var uParam1, int* iParam2, int* iParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	char* sVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	iVar0 = -1;
	if (__LIB_0__::func_51(&(iParam3->f_10), 2))
	{
		iVar0 = func_552(iParam3, &(iParam3->f_12), 15f, &(iParam3->f_30), 0, 1, 0, 0, 3, 0, 2, -1082130432 /* Float: -1f */);
	}
	iVar1 = Local_62.f_1216[5];
	sVar2 = "SCENE_VALDOC_GANGOPENBACKROOM";
	iVar3 = Local_62.f_1216[7];
	sVar4 = "SCENE_VALDOC_FEMALEPANIC";
	iVar5 = Local_62.f_1216[6];
	sVar6 = "SCENE_VALDOC_COUPLEFLIRTBREAKOUT";
	if (ENTITY::IS_ENTITY_DEAD(Local_62.f_170))
	{
		func_254();
	}
	if (__LIB_14__::func_620(*uParam0, "DoorOpen"))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Local_62.f_1198[0 /*8*/], true);
	}
	if (!func_221(-2147483648))
	{
		if (iLocal_46 > 2)
		{
			__LIB_1__::func_948(-706941207, 0, 1f, 1, 1, 0, 0, 0);
			func_224(-2147483648);
		}
	}
	func_1352(&uVar7, &uVar8, &uVar9);
	func_1353();
	func_1354();
	func_1355();
	func_1356();
	func_1357();
	if ((Local_62.f_1620 % 10) == 0)
	{
		func_1358();
		if (func_1359(3))
		{
			if (!__LIB_2__::func_633(0))
			{
				if (!func_120(32))
				{
					__LIB_4__::func_40(0, 0);
					COMPENDIUM::COMPENDIUM_GANG_ENCOUNTERED(joaat("GANG_ODRISCOLL"));
					func_517(32);
				}
			}
			else
			{
				func_517(32);
			}
			iVar10 = 1;
		}
		func_1360(uParam0, uParam1, iParam2, iParam3, &iVar10);
		func_1361(uParam0, uParam1, iParam2, &iVar10);
	}
	if (iLocal_46 > 1)
	{
		__LIB_11__::func_228(joaat("DOOR_VAL_DOC_BACK_RM"), 1f, 1);
	}
	func_1363();
	func_1364();
	switch (iLocal_46)
	{
		case 0:
			func_1365();
			ANIMSCENE::START_ANIM_SCENE(Local_62.f_1216[3]);
			__LIB_9__::func_793(Local_62.f_1216[3], "pbLoopToWakeUp", "SCENE_VALDOC_ONBED", 1);
			__LIB_2__::func_426(&(Local_62.f_1021[0 /*63*/]));
			__LIB_2__::func_279(Local_62.f_390[3 /*126*/], 1);
			if (ENTITY::DOES_ENTITY_EXIST(Local_62.f_1226[0]))
			{
				OBJECT::DELETE_OBJECT(&(Local_62.f_1226[0]));
			}
			__LIB_11__::func_629(1);
			break;
		case 1:
			__LIB_0__::func_37(&(Local_62.f_1392[3 /*3*/]));
			if (func_771(Global_35))
			{
				__LIB_14__::func_641();
				__LIB_1__::func_948(joaat("DOOR_VAL_DOC_BACK_RM"), 0, 0, 0, 1, 0, 0, 0);
				func_596(iParam2, "SRVDPLABAKRM", "SRVDPLJBAKRM", 1);
				func_533(16384);
				func_1366();
				__LIB_11__::func_629(2);
			}
			else if (((((func_1367() || func_44(262144)) || func_44(1048576)) || __LIB_0__::func_51(&(uParam0->f_9), 16384)) || __LIB_0__::func_51(&(uParam1->f_9), 16384)) || __LIB_0__::func_51(&(iParam2->f_9), 16384))
			{
				__LIB_14__::func_641();
				if (iLocal_47 < 1)
				{
					__LIB_8__::func_336(&(Local_62.f_1518), "SRVDOPREP", *uParam0, Global_35, 0, 0, 1, 1);
					__LIB_9__::func_745(1);
				}
				__LIB_1__::func_948(joaat("DOOR_VAL_DOC_BACK_RM"), 0, 0, 0, 1, 0, 0, 0);
				func_1366();
				if (!__LIB_14__::func_606(Global_35, Local_62.f_1290) && !__LIB_14__::func_606(Global_35, Local_62.f_1292))
				{
					func_224(1048576);
				}
				__LIB_11__::func_629(3);
			}
			else if (func_1369())
			{
				__LIB_1__::func_948(joaat("DOOR_VAL_DOC_BACK_RM"), 0, 0, 0, 1, 0, 0, 0);
				__LIB_2__::func_506(Local_62.f_1216[1], "SCENE_VALDOC_COUNTMONEY");
				__LIB_2__::func_506(Local_62.f_1216[2], "SCENE_VALDOC_COUPLEFLIRT");
				__LIB_2__::func_506(iVar5, sVar6);
				__LIB_2__::func_506(iVar1, sVar2);
				__LIB_2__::func_506(Local_62.f_1216[4], "SCENE_VALDOC_HOLDUPBACKROOM");
				__LIB_2__::func_506(Local_62.f_1216[3], "SCENE_VALDOC_ONBED");
				func_1370();
				func_1371(uParam0, uParam1, iParam2, iParam3);
				__LIB_11__::func_629(6);
			}
			break;
		case 2:
			if (!__LIB_0__::func_75(&(Local_62.f_1450)))
			{
				__LIB_1__::func_148(&(Local_62.f_1450));
			}
			if (__LIB_1__::func_313(&(Local_62.f_1450), 0.5f))
			{
				__LIB_11__::func_629(3);
			}
			else if (func_1367() || __LIB_9__::func_365(Local_62.f_390[2 /*126*/]))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_62.f_1216[3]))
				{
					__LIB_8__::func_336(&(Local_62.f_1518), "SRVDODR3SEEP", *iParam2, Global_35, 0, 0, 1, 1);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_62.f_1216[3], "bActionBreakoutBed", true, false);
				}
				__LIB_11__::func_629(3);
			}
			break;
		case 3:
			func_368(0);
			__LIB_0__::func_325(&(Local_62.f_1482[1]));
			func_254();
			func_1373(uParam0, iVar1, sVar2);
			__LIB_11__::func_629(4);
			break;
		case 4:
			__LIB_2__::func_73(Local_62.f_390[0 /*126*/], &(Local_62.f_390[0 /*126*/].f_1), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
			__LIB_2__::func_73(Local_62.f_390[1 /*126*/], &(Local_62.f_390[1 /*126*/].f_1), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
			__LIB_2__::func_73(Local_62.f_390[2 /*126*/], &(Local_62.f_390[2 /*126*/].f_1), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
			func_1374();
			__LIB_11__::func_629(5);
			break;
		case 5:
			iVar11 = func_1375(uParam0);
			iVar12 = func_1376(uParam1, iParam3);
			iVar13 = func_1377(iParam2);
			if ((iVar11 && iVar12) && iVar13)
			{
				__LIB_11__::func_629(20);
			}
			break;
		case 6:
			if (!func_366())
			{
				func_1378(uParam0);
				return;
			}
			func_1374();
			func_533(16384);
			func_1379(uParam0, 0, uParam1, 1, iParam2, 2);
			__LIB_3__::func_548(&(Local_62.f_170.f_85[0 /*11*/]), "INTERACT_GREET", "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_3__::func_548(&(Local_62.f_170.f_85[1 /*11*/]), "INTERACT_THREATEN", "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			func_1258(&(Local_62.f_170.f_13), &(Local_62.f_170.f_85), 0);
			func_518(&(Local_62.f_170.f_13), 1);
			func_518(&(Local_62.f_390[0 /*126*/].f_9), 8192);
			func_518(&(Local_62.f_390[1 /*126*/].f_9), 8192);
			func_518(&(Local_62.f_390[2 /*126*/].f_9), 8192);
			func_518(&(Local_62.f_390[0 /*126*/].f_9), 1048576);
			func_518(&(Local_62.f_390[1 /*126*/].f_9), 1048576);
			func_518(&(Local_62.f_390[2 /*126*/].f_9), 1048576);
			__LIB_11__::func_629(20);
			break;
		case 20:
			if (!__LIB_0__::func_51(&(iParam3->f_10), 1))
			{
				__LIB_3__::func_548(&(iParam3->f_30[0 /*11*/]), "INTERACT_LET_GO", "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_3__::func_548(&(iParam3->f_30[1 /*11*/]), "INTERACT_THREATEN", "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				func_563(&(iParam3->f_10), &(iParam3->f_30), 0, 0);
				func_518(&(iParam3->f_10), 2);
				func_518(&(iParam3->f_10), 1);
			}
			func_1380(&(Local_62.f_170));
			func_1381(iParam3, &iVar0);
			func_1382(iParam3);
			__LIB_2__::func_506(iVar5, sVar6);
			if (!__LIB_2__::func_1(*iParam3, 0, 1))
			{
				__LIB_11__::func_629(100);
				return;
			}
			if (!__LIB_0__::func_51(&(iParam3->f_10), 1024) && !__LIB_0__::func_51(&(iParam3->f_10), 2048))
			{
				if (func_1383())
				{
					__LIB_11__::func_629(30);
				}
				else if (func_1217(Global_35) && PED::_0x7F9B9791D4CB71F6(*iParam3, Global_35, true, 0) == 1)
				{
					__LIB_11__::func_629(21);
				}
				else if (func_221(4194304))
				{
					__LIB_11__::func_629(22);
				}
				else if (__LIB_0__::func_51(&(iParam3->f_10), 2048))
				{
					__LIB_11__::func_629(23);
				}
			}
			else
			{
				__LIB_11__::func_629(35);
			}
			break;
		case 21:
			func_1384(iParam3);
			func_1382(iParam3);
			if (!__LIB_0__::func_75(&(iParam3->f_120)))
			{
				__LIB_1__::func_148(&(iParam3->f_120));
			}
			if (__LIB_1__::func_313(&(iParam3->f_120), 1f))
			{
				if (func_221(4194304))
				{
					__LIB_11__::func_629(22);
				}
				else
				{
					__LIB_11__::func_629(30);
				}
			}
			break;
		case 22:
			func_1382(iParam3);
			if (func_221(4194304))
			{
				if (func_221(8388608))
				{
					if (__LIB_1__::func_313(&(Local_62.f_390[3 /*126*/].f_120), 2f))
					{
						__LIB_11__::func_629(30);
					}
				}
			}
			else
			{
				__LIB_11__::func_629(30);
			}
			break;
		case 23:
			func_1382(iParam3);
			if (!__LIB_2__::func_227(-1.5f, 1, 0, 0))
			{
				return;
			}
			__LIB_11__::func_629(30);
			break;
		case 30:
			func_1382(iParam3);
			func_563(&(iParam3->f_10), &(iParam3->f_30), 0, 0);
			if (!__LIB_0__::func_51(&(iParam3->f_10), 64))
			{
				func_1385(&(iParam3->f_30));
				func_1386(&(iParam3->f_30), 0);
				func_518(&(iParam3->f_10), 64);
			}
			if (__LIB_14__::func_619(iVar3, sVar4))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iVar3, "bFemaleGrabGun", true, false);
				__LIB_11__::func_629(31);
			}
			else if (__LIB_14__::func_619(iVar5, sVar6))
			{
			}
			else
			{
				__LIB_11__::func_629(35);
			}
			break;
		case 31:
			func_1382(iParam3);
			if (!func_280(iVar3, sVar4, 0.996f))
			{
				return;
			}
			func_536(*iParam3, joaat("WEAPON_REVOLVER_CATTLEMAN"), 1, 0);
			__LIB_14__::func_618(&(Local_62.f_1226[12]), 0);
			TASK::TASK_AIM_GUN_AT_ENTITY(*iParam3, Global_35, -1, true, 1);
			__LIB_2__::func_73(*iParam3, &(iParam3->f_1), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
			__LIB_11__::func_629(32);
			break;
		case 32:
			func_1382(iParam3);
			if (!__LIB_0__::func_75(&(iParam3->f_120)))
			{
				if (__LIB_2__::func_1(*iParam3, 0, 1))
				{
					__LIB_14__::func_629("SRVDWBEG1", 0);
					__LIB_14__::func_629("SRVDWBEG2", 0);
					__LIB_14__::func_629("SRVDWBEG3", 0);
					__LIB_8__::func_336(&(Local_62.f_1518), "SRVDWHRATTCK", *iParam3, Global_35, 0, 0, 1, 1);
					__LIB_1__::func_148(&(iParam3->f_120));
				}
			}
			else if (__LIB_1__::func_313(&(iParam3->f_120), 0f))
			{
				if (__LIB_2__::func_1(*iParam3, 0, 1))
				{
					TASK::TASK_COMBAT_PED(*iParam3, Global_35, 0, 0);
					__LIB_11__::func_629(35);
				}
			}
			break;
		case 35:
			func_1384(iParam3);
			func_1382(iParam3);
			if (func_1387(iParam3))
			{
				__LIB_11__::func_629(23);
			}
			func_1380(&(Local_62.f_170));
			break;
		case 100:
			func_1384(iParam3);
			func_1380(&(Local_62.f_170));
			break;
	}
}

void func_770()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	if (func_221(536870912))
	{
		if (iLocal_50 < 16)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, -289.4323f, 805.3393f, 118.4419f, -282.3666f, 806.5512f, 121.2961f, 1.52f, false, true, 0))
			{
				__LIB_7__::func_206(16);
			}
		}
		func_1389();
	}
	if (func_120(64))
	{
		LAW::_0xC310239ACCCF5579();
	}
	switch (iLocal_50)
	{
		case 0:
			if (func_221(536870912))
			{
				__LIB_7__::func_206(5);
			}
			break;
		case 5:
			if (func_1359(3))
			{
				func_928(Local_62.f_1216[5], "objCountChair", Local_62.f_1226[10], "SCENE_VALDOC_GANGOPENBACKROOM", 1, 0);
				func_392(&(Local_62.f_1226[10]), 0);
				func_224(2097152);
				__LIB_7__::func_206(6);
			}
			break;
		case 6:
			if (func_771(Global_35) || __LIB_14__::func_606(Global_35, Local_62.f_1292))
			{
				if (func_276(&(Local_62.f_1392[7 /*3*/]), 25f, 1, "TIMER_VALDOC_LAW_WARNING"))
				{
					func_517(64);
					func_1390(&(Local_62.f_1148[3 /*8*/]), 3);
					if (__LIB_2__::func_1(Local_62.f_1148[3 /*8*/], 0, 1))
					{
						ENTITY::SET_ENTITY_COORDS(Local_62.f_1148[3 /*8*/], -285.7319f, 780.6429f, 117.7988f, true, false, true, true);
						func_49(Local_62.f_1148[3 /*8*/], 1, "VALLAW2", 0, "");
						__LIB_14__::func_636(Local_62.f_1148[3 /*8*/], func_1391(), func_1392());
					}
					__LIB_7__::func_206(7);
				}
			}
			break;
		case 7:
			if (__LIB_2__::func_227(-3f, 1, 0, 0))
			{
				func_596(&(Local_62.f_1148[0 /*8*/]), "SRVDL1WRN1A", "SRVDL1WRN1J", 1);
				__LIB_7__::func_206(8);
			}
			break;
		case 8:
			if (__LIB_2__::func_227(0, 1, 0, 0))
			{
				__LIB_7__::func_206(9);
			}
			break;
		case 9:
			if (__LIB_2__::func_227(3.5f, 1, 0, 0))
			{
				__LIB_8__::func_336(&(Local_62.f_1518), "SRVDL1WRN2", Local_62.f_1148[0 /*8*/], Global_35, 0, 0, 1, 1);
				__LIB_7__::func_206(10);
			}
			break;
		case 10:
			if (__LIB_2__::func_1(Local_62.f_1148[3 /*8*/], 0, 1))
			{
				__LIB_1__::func_766(Local_62.f_1148[3 /*8*/], joaat("GROUP_PISTOL"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -285.3035f, 789.7344f, 117.3547f, 2f, 20000, 0.25f, 0, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -284.1398f, 796.0361f, 117.5927f, 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -283.8506f, 806.4141f, 118.3859f, 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -288.3323f, 811.5166f, 118.3859f, 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -290.0516f, 812.3234f, 118.3859f, 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -290.6452f, 814.8721f, 118.3859f, 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_62.f_1226[10], 3000, -1f, -1f, -1f);
				TASK::TASK_GO_TO_ENTITY(0, Global_35, 20000, 0.5f, 2f, 2f, 0);
				__LIB_1__::func_474(Local_62.f_1148[3 /*8*/], &iVar1, 1f, 1f, 1, 1);
				PED::SET_PED_USING_ACTION_MODE(Local_62.f_1148[3 /*8*/], true, -1, 0);
				__LIB_7__::func_206(11);
			}
			break;
		case 11:
			if (__LIB_2__::func_1(Local_62.f_1148[3 /*8*/], 0, 1) && __LIB_2__::func_215(Local_62.f_1148[3 /*8*/], Global_35, 1, 20f, 0))
			{
				__LIB_8__::func_336(&(Local_62.f_1518), "SRVDL2SEEP", Local_62.f_1148[3 /*8*/], Global_35, 0, 0, 1, 1);
				__LIB_7__::func_206(13);
			}
			else if (func_771(Local_62.f_1148[3 /*8*/]))
			{
				__LIB_8__::func_336(&(Local_62.f_1518), "SRVDL2SEEDE", Local_62.f_1148[3 /*8*/], Global_35, 0, 0, 1, 1);
				__LIB_7__::func_206(12);
			}
			break;
		case 12:
			if (!__LIB_2__::func_1(Local_62.f_1148[3 /*8*/], 0, 1))
			{
				__LIB_7__::func_206(15);
				return;
			}
			if (__LIB_2__::func_215(Local_62.f_1148[3 /*8*/], Global_35, 1, 20f, 0))
			{
				bVar3 = true;
			}
			else if (func_276(&(Local_62.f_1392[10 /*3*/]), 25f, 1, "TIMER_VALDOC_INVESTIGATOR_SPOTS_PLY"))
			{
				bVar3 = true;
			}
			if (!bVar3)
			{
				return;
			}
			__LIB_8__::func_336(&(Local_62.f_1518), "SRVDL2SEEP", Local_62.f_1148[3 /*8*/], Global_35, 0, 0, 1, 1);
			__LIB_7__::func_206(13);
			break;
		case 13:
			if (__LIB_2__::func_1(Local_62.f_1148[3 /*8*/], 0, 1))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 1500, false, 1);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(Local_62.f_1148[3 /*8*/], &iVar2, 0, 0, 1, 1);
				__LIB_7__::func_206(14);
			}
			else
			{
				func_1395();
				__LIB_7__::func_206(15);
			}
			break;
		case 14:
			if (PED::IS_PED_SHOOTING(Global_35) || (__LIB_2__::func_1(Local_62.f_1148[3 /*8*/], 0, 1) && PED::IS_PED_SHOOTING(Local_62.f_1148[3 /*8*/])))
			{
				func_1395();
				__LIB_8__::func_336(&(Local_62.f_1518), "SRVDL1SHOT", Local_62.f_1148[0 /*8*/], Global_35, 0, 0, 1, 1);
				__LIB_7__::func_206(15);
			}
			break;
		case 15:
			break;
		case 16:
			if (!__LIB_0__::func_75(&(Local_62.f_1392[6 /*3*/])))
			{
				__LIB_1__::func_148(&(Local_62.f_1392[6 /*3*/]));
				__LIB_1__::func_148(&(Local_62.f_1392[5 /*3*/]));
				__LIB_8__::func_336(&(Local_62.f_1518), "SRVDL1SEEP", Local_62.f_1148[0 /*8*/], Global_35, 0, 0, 1, 1);
				func_1396(&(Local_62.f_1148[0 /*8*/]), 1f);
				func_1396(&(Local_62.f_1148[1 /*8*/]), 1f);
				func_1396(&(Local_62.f_1148[2 /*8*/]), 1f);
				func_1396(&(Local_62.f_1148[4 /*8*/]), 1f);
				func_1397(Local_62.f_1148[0 /*8*/], 0, -284.8098f, 803.5356f, 118.8895f);
				func_1397(Local_62.f_1148[1 /*8*/], 1, -285.5588f, 803.402f, 118.8054f);
				func_1397(Local_62.f_1148[2 /*8*/], 2, -286.1571f, 803.3037f, 119.6755f);
				func_1397(Local_62.f_1148[4 /*8*/], 4, -286.1571f, 803.3037f, 119.6755f);
			}
			else if (!__LIB_1__::func_313(&(Local_62.f_1392[6 /*3*/]), 3.5f))
			{
				func_1398();
			}
			else
			{
				func_1396(&(Local_62.f_1148[0 /*8*/]), 0.2f);
				func_1396(&(Local_62.f_1148[1 /*8*/]), 0.2f);
				func_1396(&(Local_62.f_1148[2 /*8*/]), 0.2f);
				func_1396(&(Local_62.f_1148[4 /*8*/]), 0.2f);
				func_1399(&(Local_62.f_1148[2 /*8*/]), 0);
				func_1395();
				__LIB_7__::func_206(17);
			}
			break;
		case 17:
			if (!__LIB_0__::func_75(&(Local_62.f_1392[6 /*3*/])))
			{
				__LIB_1__::func_148(&(Local_62.f_1392[6 /*3*/]));
			}
			else if (__LIB_1__::func_313(&(Local_62.f_1392[6 /*3*/]), 15f))
			{
				iVar0 = func_1400(-1);
				if (__LIB_2__::func_1(iVar0, 0, 1))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 50, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 51, true);
				}
				__LIB_7__::func_206(18);
			}
			break;
		case 18:
			break;
	}
}

bool func_771(int iParam0)
{
	if (!__LIB_14__::func_606(iParam0, Local_62.f_1290))
	{
		return false;
	}
	if (!Local_62.f_1290.f_1)
	{
		if (iParam0 == Global_35)
		{
			Local_62.f_1290.f_1 = 1;
		}
	}
	return true;
}

int func_782(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_937(uParam0->f_51, 1024);
	}
	else
	{
		__LIB_1__::func_936(uParam0->f_51, 1024);
	}
	if (bParam1)
	{
		__LIB_14__::func_673(*uParam0, 1);
		return 1;
	}
	return 0;
}

char* func_783()
{
	return "WORLD_PLAYER_STR_GEN_BSMT_PEEK";
}

void func_785()
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	iVar4 = joaat("WORLD_PLAYER_LOOKAT_POINT");
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(Local_62.f_1388))
	{
		vVar0 = { func_1405() };
		fVar3 = (func_1406() * 2f);
		if (!__LIB_0__::func_86(vVar0))
		{
			__LIB_3__::func_409(&vVar0, 0f);
			vVar0 = { vVar0 + Vector(1.25f, 0f, 0f) };
			Local_62.f_1388 = __LIB_3__::func_408(iVar4, vVar0, 0, fVar3, -1f, 0);
		}
	}
}

void func_786()
{
	if (!__LIB_0__::func_30(iLocal_1772) || !__LIB_0__::func_30(iLocal_1773))
	{
		return;
	}
	if (STREAMING::_IS_IMAP_ACTIVE(iLocal_1773) && !STREAMING::_0xFC464598F6EE97B0())
	{
		return;
	}
	if (!STREAMING::_0xFC464598F6EE97B0())
	{
		if (!STREAMING::_IS_IMAP_ACTIVE(iLocal_1773))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(iLocal_1772))
			{
				STREAMING::_0x20D504994FDC4412("STR_03_P_MILLWINDOW_A", "STR_03_P_MILLWINDOW_D");
			}
		}
	}
	if (STREAMING::_0xFC464598F6EE97B0())
	{
		if (STREAMING::_0xC2C05DEFE85A0B64())
		{
			iLocal_1772 = iLocal_1773;
			STREAMING::_0x040EE319EFD1D3B5();
		}
	}
}

char* func_787()
{
	return "WIPE_START";
}

void func_788(var uParam0)
{
	if (func_60(8388608))
	{
		return;
	}
	func_29(8388608);
	func_1409(uParam0->f_2);
	func_1410(Local_62);
	__LIB_0__::func_325(&(Local_62.f_1482[0]));
	if (!func_60(67108864))
	{
		switch (uParam0->f_1)
		{
			case 0:
				if (__LIB_10__::func_696(Local_62))
				{
					__LIB_0__::func_45("HLP_SR_FOUNDD_N", 10000, 0, 0, 0, 1);
				}
				else if (ENTITY::IS_ENTITY_DEAD(Local_62.f_170))
				{
					__LIB_0__::func_45("HLP_SR_FOUNDD_D", 10000, 0, 0, 0, 1);
				}
				else
				{
					__LIB_0__::func_45("HLP_SR_FOUNDD", 10000, 0, 0, 0, 1);
				}
				break;
			case 3:
				if (__LIB_10__::func_696(Local_62))
				{
					__LIB_0__::func_45("HLP_SR_FOUNDGS_STR_N", 10000, 0, 0, 0, 1);
				}
				else if (ENTITY::IS_ENTITY_DEAD(Local_62.f_170))
				{
					__LIB_0__::func_45("HLP_SR_FOUNDGS_STR_D", 10000, 0, 0, 0, 1);
				}
				else
				{
					__LIB_0__::func_45("HLP_SR_FOUNDGS_STR", 10000, 0, 0, 0, 1);
				}
				break;
			case 6:
				if (iLocal_29 == 1)
				{
					if (ENTITY::IS_ENTITY_DEAD(Local_62.f_170))
					{
						__LIB_0__::func_45("HLP_SR_FOUNDGURH_D", 10000, 0, 0, 0, 1);
					}
					else
					{
						__LIB_0__::func_45("HLP_SR_FOUNDGURH", 10000, 0, 0, 0, 1);
					}
				}
				else if (ENTITY::IS_ENTITY_DEAD(Local_62.f_170))
				{
					__LIB_0__::func_45("HLP_SR_FOUNDGU_D", 10000, 0, 0, 0, 1);
				}
				else
				{
					__LIB_0__::func_45("HLP_SR_FOUNDGU", 10000, 0, 0, 0, 1);
				}
				break;
			default:
				if (ENTITY::IS_ENTITY_DEAD(Local_62.f_170))
				{
					__LIB_0__::func_45("HLP_SR_FOUNDGS_D", 10000, 0, 0, 0, 1);
				}
				else
				{
					__LIB_0__::func_45("HLP_SR_FOUNDGS", 10000, 0, 0, 0, 1);
				}
				break;
		}
		func_29(67108864);
	}
	if (__LIB_10__::func_666(uParam0->f_2) != -1)
	{
		__LIB_3__::func_559(__LIB_10__::func_666(uParam0->f_2), 580546400);
	}
}

void func_789(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, bool bParam10, int iParam11, int iParam12)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		if (bParam10)
		{
			func_1415(iParam0, vParam1, vParam4, vParam7);
		}
		else
		{
			func_1416(iParam0, vParam1, vParam4, vParam7);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		POPULATION::_0x18262CAFEBB5FBE1(*iParam0, iParam11, iParam12, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(*iParam0, iParam11, iParam12, 0, -1, -1, 0);
	}
}

int func_791()
{
	func_1417("SR_STRAWBERRY_GEN_START");
	func_1417("SR_STRAWBERRY_GEN_STOP");
	return 1;
}

void func_793()
{
	if (iLocal_32 == 0)
	{
		return;
	}
	__LIB_9__::func_741(0);
}

void func_794(int iParam0, int iParam1)
{
	*iParam1 = iParam0;
}

char* func_795(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@proc@shoprobberies@valentinedoctor@deputyknock";
		case 4:
			return "script@proc@shoprobberies@valentinedoctor@doctorBackRoom";
		case 1:
			return "script@proc@shoprobberies@valentinedoctor@gangCountMoney";
		case 2:
			return "script@proc@shoprobberies@valentinedoctor@coupleFlirt";
		case 3:
			return "script@proc@shoprobberies@valentinedoctor@gangBedSleepWithBreakouts";
		case 5:
			return "script@proc@shoprobberies@valentinedoctor@gangOpenDoorShortLoop";
		case 6:
			return "script@proc@shoprobberies@valentinedoctor@coupleFlirtBreakout";
		case 7:
			return "script@proc@shoprobberies@valentinedoctor@coupleFlirtFemalePanic";
		case 8:
			return "scenario@MECH@PLAYER_PICKUP_GUNRACK_DBSHOTGUN_COUNTER@CounterLoop";
		default:
			break;
	}
	return "NULL STRING";
}

void func_796(int iParam0, char* sParam1, int iParam2, char* sParam3)
{
	int iVar0;
	iVar0 = iParam0;
	Local_62.f_1216[iVar0] = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, iParam2, sParam3, false, true);
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_62.f_1216[iParam0], true, false))
	{
		return;
	}
	ANIMSCENE::LOAD_ANIM_SCENE(Local_62.f_1216[iVar0]);
}

void func_798(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 != 0)
	{
		*uParam2 = PED::_REQUEST_METAPED_OUTFIT(iParam0, iParam1);
	}
}

bool func_799(int iParam0)
{
	char* sVar0;
	switch (iLocal_29)
	{
		case 0:
			sVar0 = func_1418(iParam0);
			break;
		case 1:
			sVar0 = func_1419(iParam0);
			break;
		case 2:
			sVar0 = func_1420(iParam0);
			break;
		case 3:
			sVar0 = func_1421(iParam0);
			break;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_62.f_1216[iParam0], true, false))
	{
		return false;
	}
	return true;
}

bool func_800(var uParam0)
{
	if (!PED::_0x610438375E5D1801(*uParam0))
	{
		return false;
	}
	return true;
}

bool func_801()
{
	char* sVar0;
	if (!__LIB_2__::func_633(0))
	{
		if (!func_877(&(Local_62.f_390[0 /*126*/]), 0, 0, 1, 1))
		{
			return false;
		}
	}
	else if (!func_877(&(Local_62.f_390[0 /*126*/]), 0, 1, 1, 0))
	{
		return false;
	}
	if (!__LIB_2__::func_633(0))
	{
		func_878(&(Local_62.f_390[0 /*126*/]), 1755543207, 1);
	}
	if (__LIB_2__::func_633(0))
	{
		sVar0 = "1056_G_M_M_UniCriminals_01_WHITE_03";
	}
	else
	{
		sVar0 = "0360_G_M_M_UniDuster_03_IRISH_01";
	}
	func_49(Local_62.f_390[0 /*126*/], 1, "ODR_PED8", 1, sVar0);
	func_880(Local_62.f_390[0 /*126*/], 0);
	func_919(&(Local_62.f_390[0 /*126*/]), joaat("WEAPON_REVOLVER_CATTLEMAN"), 99);
	return true;
}

void func_802(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return;
	}
	*uParam0 = OBJECT::CREATE_OBJECT(iParam1, vParam2, false, bParam6, false, false, true);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		ENTITY::SET_ENTITY_HEADING(*uParam0, fParam5);
		if (bParam7)
		{
			ENTITY::SET_ENTITY_VISIBLE(*uParam0, false);
		}
	}
}

Vector3 func_803(vector3 vParam0, float fParam3, vector3 vParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	vVar3 = { vParam4 - vParam0 };
	fVar6 = BUILTIN::COS(fParam3);
	fVar7 = BUILTIN::SIN(fParam3);
	vVar0.x = ((vVar3.x * fVar6) + (vVar3.y * fVar7));
	vVar0.f_1 = ((vVar3.y * fVar6) - (vVar3.x * fVar7));
	vVar0.f_2 = vVar3.z;
	return vVar0;
}

void func_804(int iParam0)
{
	if (*iParam0 == 0)
	{
		return;
	}
	func_794(0, iParam0);
}

void func_807()
{
	if (iLocal_1755 != 5 && iLocal_1755 != 4)
	{
		if ((Local_62.f_1620 % 10) == 0)
		{
			if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 0, 1))
			{
				if (func_1422())
				{
					func_1423(5);
				}
				else
				{
					func_1423(4);
				}
			}
		}
	}
	switch (iLocal_1755)
	{
		case 0:
			func_1424();
			func_1423(1);
			break;
		case 1:
			__LIB_18__::func_847(&Local_1698, 0, 0, 1, 0, 0);
			if (Local_1698 == 4)
			{
				func_1423(2);
			}
			break;
		case 2:
			__LIB_18__::func_847(&Local_1698, 0, 0, bLocal_1756, __LIB_1__::func_530(Local_1698.f_17, 1), 0);
			if (func_1422())
			{
				bLocal_1757 = true;
				func_1423(3);
			}
			break;
		case 3:
			__LIB_18__::func_847(&Local_1698, bLocal_1757, 1, bLocal_1756, 0, 0);
			func_1423(6);
			break;
		case 4:
			__LIB_18__::func_847(&Local_1698, 0, 1, 0, 0, 0);
			if (func_1422())
			{
				func_1423(5);
			}
			break;
		case 5:
			__LIB_18__::func_847(&Local_1698, 1, 1, 0, 0, 0);
			break;
		case 6:
			__LIB_18__::func_847(&Local_1698, bLocal_1757, 1, bLocal_1756, 0, 0);
			break;
	}
}

void func_808(int iParam0)
{
	func_39(64);
	Local_62.f_1475[0] = iParam0;
}

char* func_810(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@proc@shoprobberies@rhodesgun@pleadforhelp";
		case 1:
			return "script@proc@shoprobberies@rhodesgun@holdup";
		case 3:
			return "script@proc@shoprobberies@rhodesgun@basement_captor";
		case 2:
			return "script@proc@shoprobberies@rhodesgun@basement_captive";
		case 4:
			return "script@proc@shoprobberies@rhodesgun@victimAloneAskFree";
		default:
			break;
	}
	return "NULL STRING";
}

void func_813(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, bool bParam7, int iParam8)
{
	int iVar0;
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return;
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam1, fParam5, iParam8, fParam6, 0, 40000f);
	TASK::TASK_ACHIEVE_HEADING(0, fParam4, 0);
	if (bParam7)
	{
		TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
	}
	__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
}

void func_870(var uParam0, int iParam1)
{
	if (!__LIB_0__::func_51(uParam0, iParam1))
	{
		return;
	}
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_872()
{
	func_553(Local_62.f_1216[0], "PBL_bars_loop_reset", "SCENE_RHDGUN_HELP");
}

bool func_873()
{
	if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROBBERIES"))
	{
		return true;
	}
	return false;
}

void func_876(bool bParam0, bool bParam1)
{
	float fVar0;
	if (bParam1)
	{
		fVar0 = 1f;
	}
	else
	{
		fVar0 = 0f;
	}
	__LIB_1__::func_948(-1800976001, bParam0, fVar0, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(1589140898, bParam0, -fVar0, 0, 0, 0, 0, 0);
}

bool func_877(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return true;
	}
	func_1447(uParam0, iParam1, bParam2, bParam3, bParam4);
	return false;
}

void func_878(var uParam0, int iParam1, bool bParam2)
{
	PED::_SET_PED_BODY_COMPONENT(*uParam0, iParam1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(*uParam0, false, true, true, true, false);
	}
}

void func_880(int iParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 146, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 148, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 190, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 146, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 148, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 190, false);
	}
}

bool func_883()
{
	float fVar0;
	if ((Local_62.f_1620 % 10) != 0)
	{
		return false;
	}
	if (__LIB_3__::func_610(29, 1))
	{
		func_39(2);
		return true;
	}
	if (!__LIB_14__::func_606(Global_35, Local_62.f_1247[1 /*2*/]))
	{
		return false;
	}
	if (__LIB_14__::func_606(Global_35, Local_62.f_1247[2 /*2*/]))
	{
		func_39(2);
		return true;
	}
	if (!CAM::IS_SPHERE_VISIBLE(func_1449(), 0.15f))
	{
		return true;
	}
	fVar0 = 5f;
	if (!func_276(&(Local_62.f_1392[1 /*3*/]), fVar0, 0, "TIMER_RHDGUN_PASSERBY_CREATE_SPOT_IS_VISIBLE"))
	{
		return false;
	}
	func_39(2);
	return true;
}

void func_884()
{
	__LIB_0__::func_172(Local_62.f_1247[1 /*2*/]);
	Local_62.f_1247[1 /*2*/] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("VOL_RHDGUN_CHECK_PASSERBY_VISIBLE");
	VOLUME::_0x39816F6F94F385AD(Local_62.f_1247[1 /*2*/], 1308.391f, -1318.011f, 77.48446f, 0f, 0f, -16.12928f, 25.4035f, 53.44992f, 5.216788f);
	VOLUME::_0x39816F6F94F385AD(Local_62.f_1247[1 /*2*/], 1318.446f, -1337.647f, 77.48446f, 0f, 0f, -16.12928f, 4.914396f, 21.50976f, 5.216788f);
	VOLUME::_0x39816F6F94F385AD(Local_62.f_1247[1 /*2*/], 1326.23f, -1310.449f, 77.48446f, 0f, 0f, -16.12928f, 4.914396f, 16.26018f, 5.216788f);
	VOLUME::_0x39816F6F94F385AD(Local_62.f_1247[1 /*2*/], 1318.628f, -1292.115f, 77.4948f, 0f, 0f, -24.96486f, 3.788264f, 4.466151f, 5.216788f);
}

bool func_885(var uParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return true;
	}
	func_1450(uParam0, iParam1);
	return false;
}

void func_887(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	__LIB_3__::func_548(uParam1[0 /*11*/], "INTERACT_GREET", "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_3__::func_548(uParam1[1 /*11*/], "INTERACT_INSULT", "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	func_563(uParam0, uParam1, bParam2, bParam3);
	func_518(uParam0, 2);
}

void func_888(var uParam0, int iParam1, char* sParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return;
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iParam1);
}

void func_889()
{
	if (__LIB_0__::func_181())
	{
		func_49(Global_35, 1, "JOHN", 0, "");
	}
	else
	{
		func_49(Global_35, 1, "ARTHUR", 0, "");
	}
}

void func_890(int iParam0, var uParam1, vector3 vParam2, char[12] cParam5, vector3 vParam8, bool bParam11, int iParam12, bool bParam13, int iParam14, char* sParam15)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		if (bParam11)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
			{
				func_1415(iParam0, vParam2, cParam5, vParam8);
			}
			else
			{
				func_587(iParam0, vParam2, cParam5, vParam8, sParam15);
			}
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
		{
			func_1416(iParam0, vParam2, cParam5, vParam8);
		}
		else
		{
			func_1451(iParam0, vParam2, cParam5, vParam8, sParam15);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		POPULATION::_0x18262CAFEBB5FBE1(*iParam0, iParam12, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(*iParam0, iParam12, 0, 0, -1, -1, iParam14);
		if (bParam13)
		{
			*uParam1 = PED::_0x4C39C95AE5DB1329(*iParam0, 0, 15);
		}
	}
}

bool func_891(var uParam0, int iParam1, vector3 vParam2, float fParam5)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return true;
	}
	*uParam0 = __LIB_1__::func_545(iParam1, vParam2, fParam5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(*uParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, true, false);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 243, true);
	}
	return false;
}

bool func_897(var uParam0, int iParam1, var uParam2, vector3 vParam3, int iParam6, bool bParam7, float fParam8, bool bParam9, char* sParam10, var uParam11, int iParam12)
{
	if (*uParam11)
	{
		return true;
	}
	if (!__LIB_14__::func_613(uParam0, iParam1, uParam2, vParam3, iParam12, 0))
	{
		return false;
	}
	__LIB_1__::func_948(iParam6, bParam7, fParam8, 0, bParam9, 0, 0, 0);
	*uParam11 = 1;
	return true;
}

void func_898(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, char* sParam11)
{
	func_890(iParam0, uParam1, vParam2, vParam5, vParam8, 0, 0, 1, 0, 0);
}

int func_899(var uParam0)
{
	STREAMING::REQUEST_ANIM_DICT(__LIB_14__::func_661());
	STREAMING::REQUEST_MODEL(joaat("P_CS_BILLSINGLE01BX"), false);
	func_1453(uParam0);
	return 1;
}

char* func_900(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@proc@shoprobberies@strgen@holdup";
		default:
			break;
	}
	return "[SHOPROB_GET_STRGEN_ANIM_SCENE_BY_ENUM] ERROR: No filename string paired with the passed enum.";
}

bool func_902(var uParam0)
{
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_82[0], true, false) || !ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_82[0], false))
	{
		return false;
	}
	return true;
}

void func_903(var uParam0)
{
	char* sVar0;
	ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_82[0], "pblExitB");
	sVar0 = func_747(uParam0);
	ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_82[0], sVar0);
}

bool func_904(int iParam0)
{
	if (!WEAPON::_0xFF07CF465F48B830(iParam0))
	{
		return false;
	}
	return true;
}

void func_905()
{
	func_587(&(Local_62.f_1284), 2714.67f, -1285.224f, 50.22264f, 0f, 0f, -155.1647f, 12.23877f, 9.310059f, 3.184456f, "volShop");
	Local_62.f_1.f_90 = Local_62.f_1284;
}

void func_907()
{
	Local_62.f_1284 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volShop");
	VOLUME::_0x39816F6F94F385AD(Local_62.f_1284, -286.9611f, 810.6585f, 119.8961f, 0f, 0f, -80.04012f, 14.35107f, 7.733414f, 2.988747f);
	VOLUME::_0x39816F6F94F385AD(Local_62.f_1284, -282.699f, 816.189f, 119.674f, 0f, 0f, -169.938f, 2.737f, 4.614f, 2.543f);
	Local_62.f_1.f_90 = Local_62.f_1284;
}

void func_908(var uParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return;
	}
	*uParam0 = WEAPON::_CREATE_WEAPON_OBJECT(iParam1, iParam5, vParam2, true, 1f);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (bParam6)
		{
			ENTITY::SET_ENTITY_VISIBLE(*uParam0, false);
		}
	}
}

void func_910()
{
	Local_62.f_1512[1] = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(Local_62.f_1198[0 /*8*/], func_937(), vLocal_59, 0f, 0, 0, 0);
}

char* func_911(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@proc@shoprobberies@nbxgunsmith@downstairs";
		case 1:
			return "script@proc@shoprobberies@nbxgunsmith@gamblingroom_guard";
		case 2:
			return "script@proc@shoprobberies@nbxgunsmith@gamblingroom";
		case 3:
			return "script@proc@shoprobberies@nbxgunsmith@gambler_a";
		case 4:
			return "script@proc@shoprobberies@nbxgunsmith@gambler_b";
		case 5:
			return "script@proc@shoprobberies@nbxgunsmith@gambler_c";
		default:
			break;
	}
	return "NULL STRING";
}

int func_912()
{
	return joaat("WORLD_HUMAN_SHOPKEEPER_MALE_A");
}

void func_917()
{
	Local_62.f_1512[1] = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(Local_62.f_1198[0 /*8*/], func_937(), vLocal_59, 0f, 0, 0, 0);
	TASK::_SET_SCENARIO_POINT_FLAG(Local_62.f_1512[1], 22, true);
}

void func_918(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	PED::DELETE_PED(&iParam0);
}

void func_919(var uParam0, int iParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return;
	}
	WEAPON::REMOVE_ALL_PED_WEAPONS(*uParam0, true, true);
	WEAPON::_GIVE_WEAPON_TO_PED_2(*uParam0, iParam1, iParam2, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
}

void func_920()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_58)
	{
		Local_62.f_1322[iVar0 /*8*/] = TASK::ADD_COVER_POINT(Local_62.f_1322[iVar0 /*8*/].f_1, Local_62.f_1322[iVar0 /*8*/].f_4, Local_62.f_1322[iVar0 /*8*/].f_5, Local_62.f_1322[iVar0 /*8*/].f_6, Local_62.f_1322[iVar0 /*8*/].f_7, false);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_56)
	{
		Local_62.f_1297[iVar0 /*8*/] = TASK::ADD_COVER_POINT(Local_62.f_1297[iVar0 /*8*/].f_1, Local_62.f_1297[iVar0 /*8*/].f_4, Local_62.f_1297[iVar0 /*8*/].f_5, Local_62.f_1297[iVar0 /*8*/].f_6, Local_62.f_1322[iVar0 /*8*/].f_7, false);
		iVar0++;
	}
}

bool func_922(int iParam0)
{
	if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iParam0))
	{
		return false;
	}
	return true;
}

void func_923(var uParam0, var uParam1, bool bParam2)
{
	__LIB_3__::func_548(uParam1[0 /*11*/], "INTERACT_QUESTION", "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_3__::func_548(uParam1[1 /*11*/], "INTERACT_THREATEN", "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	func_563(uParam0, uParam1, bParam2, 0);
	func_518(uParam0, 2);
}

void func_924(int* iParam0)
{
	func_1341(&(iParam0->f_30[0 /*11*/]), "INTERACT_QUESTION", 0);
	func_1341(&(iParam0->f_30[1 /*11*/]), "INTERACT_THREATEN", 1);
}

Vector3 func_926()
{
	return 2717.08f, -1282.43f, 60.28f;
}

bool func_927(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (bParam7)
		{
			if (!ENTITY::DOES_ENTITY_HAVE_PHYSICS(*uParam0))
			{
				return false;
			}
		}
		return true;
	}
	*uParam0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(vParam2, fParam5, iParam1, bParam6, false, true);
	return false;
}

void func_928(int iParam0, char* sParam1, int iParam2, char* sParam3, bool bParam4, bool bParam5)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam0, sParam1, iParam2);
	if (bParam4)
	{
		PHYSICS::ACTIVATE_PHYSICS(iParam2);
	}
	if (bParam5)
	{
		__LIB_2__::func_919(iParam2, 1, 1);
	}
}

int func_937()
{
	return joaat("PROP_PLAYER_KNOCK_SECURITY_DOOR");
}

int func_941(int* iParam0, int* iParam1, float fParam2, var uParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		if (__LIB_9__::func_781(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_1095(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_941(iParam0, iParam1, fParam2, uParam3, iParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					func_1476(iParam0, 1, iParam1, fParam2, uParam3, bVar3, iParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (func_1478(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, iParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*11*/], 20))
								{
									__LIB_5__::func_666(uParam3);
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
					__LIB_5__::func_680(iParam1, uParam3, fVar8);
					if (__LIB_17__::func_919(*iParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						__LIB_5__::func_684(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				break;
			case 2:
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			__LIB_17__::func_921(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_946(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		__LIB_3__::func_158(uParam0[iVar0 /*11*/], bParam1);
		iVar0++;
	}
}

void func_948(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	uParam0->f_2 = { vParam1 };
	uParam0->f_5 = fParam4;
	uParam0->f_6 = iParam6;
	uParam0->f_7 = iParam5;
}

void func_949(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	uParam0->f_2 = { vParam1 };
	uParam0->f_5 = fParam4;
	uParam0->f_6 = iParam5;
}

void func_950(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = fParam4;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = iParam6;
	uParam0->f_7 = iParam7;
}

void func_952(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	uParam0->f_1 = sParam1;
	*uParam0 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
}

void func_956(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
						func_1508(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1508(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1508(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1508(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1508(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1508(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1508(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1508(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1508(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1508(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_1508(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_1508(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_1508(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_1508(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_1508(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_1508(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_1508(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_1508(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_1508(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_1508(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_1508(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_1508(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1508(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1508(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1508(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1510();
						func_1511(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_1508(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_956(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_956(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_956(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_1508(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1508(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_1546();
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
							func_1508(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

bool func_957()
{
	if ((iLocal_26 == 46 || iLocal_26 == 51) || iLocal_26 == 47)
	{
		return true;
	}
	return false;
}

void func_958(bool bParam0, bool bParam1)
{
	int iVar0;
	func_29(128);
	if (bParam0)
	{
		if (!bParam1)
		{
			iVar0 = __LIB_1__::func_921(Local_62);
			func_239(iVar0);
		}
		else
		{
			func_29(536870912);
		}
	}
}

void func_959()
{
	if ((Local_62.f_1620 % 30) != 0)
	{
		return;
	}
	if (!__LIB_14__::func_606(Global_35, Local_62.f_1355[1 /*2*/]))
	{
		func_143(1024, 0);
		return;
	}
	func_143(1024, 1);
}

void func_960(var uParam0)
{
	float fVar0;
	if ((Local_62.f_1620 % 10) != 0)
	{
		return;
	}
	if (func_557())
	{
		return;
	}
	if (!(func_221(4) && !func_221(2)) || !func_62(8192))
	{
		__LIB_0__::func_325(&(uParam0->f_1));
		return;
	}
	fVar0 = __LIB_0__::func_665(Global_35, *uParam0, 1, 1);
	if (fVar0 < 30f)
	{
		if (!MAP::DOES_BLIP_EXIST(uParam0->f_1))
		{
			__LIB_2__::func_73(*uParam0, &(uParam0->f_1), -89429847, 580546400, 0, 0);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_1, "SR_RG_BLIP_CAPTIVE1");
		}
	}
	else if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_1));
	}
}

bool func_963(int* iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	if (func_82())
	{
		return false;
	}
	iVar0 = -1;
	if (__LIB_0__::func_51(&(iParam0->f_10), 2))
	{
		if (__LIB_0__::func_51(&(iParam0->f_10), 1024))
		{
			iVar1 = 3;
			if (!__LIB_0__::func_51(&(iParam0->f_10), 2048))
			{
				__LIB_3__::func_544(&(iParam0->f_12), 0);
				__LIB_3__::func_548(&(iParam0->f_30[0 /*11*/]), "INTERACT_QUESTION", "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_3__::func_548(&(iParam0->f_30[1 /*11*/]), "INTERACT_INSULT", "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
				func_518(&(iParam0->f_10), 2048);
			}
		}
		else if (__LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 32) || __LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 64))
		{
			iVar1 = 3;
		}
		else
		{
			iVar1 = 2;
		}
		iVar2 = __LIB_2__::func_340(iVar1, 0, 0);
		if (!func_62(16384) && !ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			iVar2 |= 2048;
		}
		else
		{
			iVar2 |= -2147483648;
			__LIB_3__::func_544(&(iParam0->f_12), 0);
		}
		iVar0 = func_941(iParam0, &(iParam0->f_12), 5f, &(iParam0->f_30), 0, 3, 0, "", iVar2, 0, 0, 2, -1082130432 /* Float: -1f */);
	}
	if (!func_1557())
	{
		return false;
	}
	if (!__LIB_0__::func_51(&(iParam0->f_10), 2))
	{
		__LIB_3__::func_548(&(iParam0->f_30[0 /*11*/]), "INTERACT_QUESTION", "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		__LIB_3__::func_548(&(iParam0->f_30[1 /*11*/]), "INTERACT_INSULT", "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
		func_518(&(iParam0->f_10), 2);
	}
	bVar3 = false;
	if (iVar0 == 0)
	{
		if (__LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 32) || __LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 64))
		{
			__LIB_14__::func_633(0);
			func_596(iParam0, "PRRGS_AILO_PKP2", "PRRGS_JILO_PKP2", 1);
		}
		else
		{
			__LIB_14__::func_633(0);
			func_596(iParam0, "SRGMCUT1_ART", "SRGMCUT1_ARTJ", 1);
		}
		__LIB_5__::func_687(&(iParam0->f_30), 0, 0);
		bVar3 = true;
	}
	else if (iVar0 == 1)
	{
		if (__LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 32) || __LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 64))
		{
			__LIB_14__::func_633(0);
			func_596(iParam0, "PRRGS_AILO_PKN2", "PRRGS_JILO_PKN2", 1);
		}
		else
		{
			__LIB_14__::func_633(0);
			func_596(iParam0, "PRRGS_AILO_PKN1", "PRRGS_JILO_PKN1", 1);
		}
		__LIB_5__::func_687(&(iParam0->f_30), 0, 0);
		bVar3 = true;
	}
	if (!bVar3)
	{
		return false;
	}
	func_518(&(iParam0->f_10), 1024);
	__LIB_0__::func_747(70, 0, 1);
	func_297(Global_35, *iParam0, &(Local_62.f_99), 0, vLocal_59, 1, 0);
	if (!func_559(Local_62.f_1216[0], "PBL_bars_line_01", "SCENE_RHDGUN_HELP", 0))
	{
		func_553(Local_62.f_1216[0], "PBL_bars_line_01", "SCENE_RHDGUN_HELP");
	}
	func_91(16);
	func_224(8);
	func_418(4);
	func_224(2);
	__LIB_16__::func_215(1, 8);
	func_587(&(Local_62.f_1355[3 /*2*/]), 1324.981f, -1323.507f, 78.32263f, 0f, 0f, 164.3203f, 9.572388f, 9.145508f, 2.818016f, "AMBRES_RHDGUN_MAIN_SHOP");
	POPULATION::_0xB56D41A694E42E86(Local_62.f_1355[3 /*2*/], 0, 0, 0, -1, joaat("SHOP_PEDS_RHODES"), 0);
	__LIB_1__::func_148(&(Local_62.f_1392[3 /*3*/]));
	PED::SET_PED_RESET_FLAG(Global_35, 53, true);
	return true;
}

void func_964(var uParam0)
{
	if (func_221(16))
	{
		return;
	}
	func_788(uParam0);
	__LIB_1__::func_991(Local_62.f_170, 0);
	func_224(16);
}

int func_965()
{
	return -254374895;
}

bool func_966(int* iParam0, char* sParam1)
{
	int iVar0;
	if ((!func_62(1024) && !__LIB_2__::func_84()) && func_967())
	{
		iVar0 = 60;
		__LIB_1__::func_309(-1, 0, 0, 0, 0);
		__LIB_0__::func_747(iVar0, 0, 1);
		func_39(1024);
	}
	if (!func_1558())
	{
		return false;
	}
	if (!func_559(Local_62.f_1216[0], sParam1, "SCENE_RHDGUN_HELP", 0))
	{
		return false;
	}
	if (!__LIB_2__::func_227(0, 1, 0, 0))
	{
		return false;
	}
	return true;
}

bool func_967()
{
	if (__LIB_14__::func_606(Global_35, Local_62.f_1247[0 /*2*/]) || __LIB_14__::func_606(Global_35, Local_62.f_1247[3 /*2*/]))
	{
		return true;
	}
	func_143(1024, 0);
	return false;
}

void func_969(int* iParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, int iParam5, int iParam6)
{
	if (__LIB_0__::func_51(&(iParam0->f_9), 64))
	{
		if (!func_335(iParam5))
		{
			__LIB_8__::func_336(&(Local_62.f_1518), cParam4, *iParam0, Global_35, 0, 0, 1, 1);
		}
	}
	else if (__LIB_0__::func_51(&(iParam0->f_9), 32))
	{
		if (!func_335(iParam5))
		{
			__LIB_8__::func_336(&(Local_62.f_1518), cParam3, *iParam0, Global_35, 0, 0, 1, 1);
			func_533(iParam5);
		}
	}
	else if (__LIB_0__::func_665(Global_35, *iParam0, 1, 1) > 5f)
	{
		if (!func_335(iParam5))
		{
			__LIB_8__::func_336(&(Local_62.f_1518), cParam1, *iParam0, Global_35, 0, 0, 1, 1);
			func_533(iParam5);
		}
	}
	else if (!func_335(iParam6))
	{
		__LIB_8__::func_336(&(Local_62.f_1518), cParam2, *iParam0, Global_35, 0, 0, 1, 1);
		func_533(iParam6);
	}
}

void func_970()
{
	func_277(Local_62.f_1216[0], "BOOL_bars_loop", 1, "SCENE_RHDGUN_HELP");
	func_277(Local_62.f_1216[0], "BOOL_bars_loop_reset", 0, "SCENE_RHDGUN_HELP");
	func_872();
}

bool func_971(int* iParam0)
{
	if (__LIB_0__::func_51(&(iParam0->f_9), 32))
	{
		return false;
	}
	if (__LIB_0__::func_665(Global_35, *iParam0, 1, 1) > 5f)
	{
		if (!func_335(256))
		{
			__LIB_8__::func_336(&(Local_62.f_1518), "SRGMHELP1", *iParam0, Global_35, 0, 0, 1, 1);
			func_533(256);
			return true;
		}
		else if (!func_335(512))
		{
			__LIB_8__::func_336(&(Local_62.f_1518), "SRGMHELP2", *iParam0, Global_35, 0, 0, 1, 1);
			func_533(512);
			return true;
		}
		else if (!func_335(1024))
		{
			__LIB_8__::func_336(&(Local_62.f_1518), "SRGMHELP3", *iParam0, Global_35, 0, 0, 1, 1);
			func_533(1024);
			return true;
		}
	}
	else if (!func_335(2048))
	{
		__LIB_8__::func_336(&(Local_62.f_1518), "SRGMHELP4", *iParam0, Global_35, 0, 0, 1, 1);
		func_533(2048);
		return true;
	}
	else if (!func_335(4096))
	{
		__LIB_8__::func_336(&(Local_62.f_1518), "SRGMHELP5", *iParam0, Global_35, 0, 0, 1, 1);
		func_533(4096);
		return true;
	}
	else if (!func_335(8192))
	{
		__LIB_8__::func_336(&(Local_62.f_1518), "SRGMHELP6", *iParam0, Global_35, 0, 0, 1, 1);
		func_533(8192);
		return true;
	}
	return false;
}

bool func_973(int* iParam0, float fParam1)
{
	if (!func_276(&(iParam0->f_123), fParam1, 0, "captive.timerGenericB") || !func_967())
	{
		return false;
	}
	return true;
}

char* func_974()
{
	return "SCRIPT_PROC@ROBBERIES@shop@rhodes@gunsmith@OUTSIDE_RESHOOT";
}

Vector3 func_988()
{
	return -291.3659f, 816.3725f, 118.3859f;
}

int func_1012()
{
	vector3 vVar0;
	if (func_62(32768))
	{
		return 1;
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_62.f_1389))
	{
		func_39(32768);
		return 1;
	}
	switch (iLocal_29)
	{
		case 0:
			vVar0 = { 2716.44f, -1287.035f, 48.632f };
			break;
		default:
			func_39(32768);
			return 1;
	}
	Local_62.f_1389 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vVar0, func_912(), 0.4f, 0, false);
	return 0;
}

int func_1014()
{
	float fVar0;
	float fVar1;
	switch (iLocal_29)
	{
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Local_62.f_1198[0 /*8*/]))
			{
				fVar0 = __LIB_0__::func_665(Global_35, Local_62.f_1198[0 /*8*/], 1, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_62.f_1198[1 /*8*/]))
			{
				fVar1 = __LIB_0__::func_665(Global_35, Local_62.f_1198[1 /*8*/], 1, 1);
			}
			if (fVar0 < fVar1)
			{
				return Local_62.f_1198[0 /*8*/];
			}
			else if (fVar0 > fVar1)
			{
				return Local_62.f_1198[1 /*8*/];
			}
			else
			{
				return 0;
			}
			break;
		case 0:
			return Local_62.f_1198[0 /*8*/];
	}
	return 0;
}

void func_1015(bool bParam0)
{
	if (func_62(32))
	{
		return;
	}
	func_789(&(Local_62.f_1355[0 /*2*/]), 2714.67f, -1285.224f, 50.22264f, 0f, 0f, -155.1647f, 12.23877f, 9.310059f, 3.184456f, 1, 0, 0);
	if (bParam0)
	{
		__LIB_3__::func_378(Local_62.f_1355[0 /*2*/], 0);
	}
	func_39(32);
}

void func_1017()
{
	char* sVar0;
	char* sVar1;
	switch (iLocal_29)
	{
		case 0:
			sVar0 = "SD_GUNSMITH_STEEL_DOOR_SLAT_CLOSED";
			sVar1 = "SD_GUNSMITH_STEEL_DOOR_SLAT_OPEN";
			break;
		case 3:
			sVar0 = "VAL_DOCTOR_STEEL_DOOR_SLAT_CLOSED";
			sVar1 = "VAL_DOCTOR_STEEL_DOOR_SLAT_OPEN";
			break;
	}
	AUDIO::SET_PORTAL_SETTINGS_OVERRIDE(sVar0, sVar1);
}

void func_1018()
{
	char* sVar0;
	switch (iLocal_29)
	{
		case 0:
			sVar0 = "SD_GUNSMITH_STEEL_DOOR_SLAT_CLOSED";
			break;
		case 3:
			sVar0 = "VAL_DOCTOR_STEEL_DOOR_SLAT_CLOSED";
			break;
	}
	AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE(sVar0);
}

void func_1019(int iParam0, vector3 vParam1)
{
	int iVar0;
	ENTITY::SET_ENTITY_COORDS(iParam0, vParam1, true, false, true, true);
	switch (iLocal_29)
	{
		case 0:
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_ACHIEVE_HEADING(0, 273.3403f, 0);
			__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
			break;
	}
}

void func_1092(var uParam0, char* sParam1, bool bParam2)
{
	char[] cVar0[8];
	if (!func_313(uParam0, 524288))
	{
		__LIB_3__::func_158(&(uParam0->f_26[0 /*11*/]), 0);
		__LIB_3__::func_548(&(uParam0->f_26[0 /*11*/]), "ROB_REGISTER", sParam1, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
		uParam0->f_26[0 /*11*/].f_9 = 3;
	}
	if (!bParam2)
	{
		return;
	}
	switch (uParam0->f_51)
	{
		case 29:
		case 61:
			cVar0 = "SR_ROB_ILO_BASEMENT";
			break;
		case 43:
		case 73:
			cVar0 = "SR_ROB_ILO_BACKROOM";
			break;
	}
	if (!func_313(uParam0, 65536))
	{
		__LIB_3__::func_158(&(uParam0->f_26[1 /*11*/]), 0);
		__LIB_3__::func_548(&(uParam0->f_26[1 /*11*/]), cVar0, "", joaat("INPUT_INTERACT_OPTION1"), 0, 0, 0, 1, 0);
		uParam0->f_26[1 /*11*/].f_9 = 3;
	}
}

void func_1093(var uParam0, bool bParam1)
{
	__LIB_3__::func_158(&(uParam0->f_26[0 /*11*/]), 1);
	if (bParam1)
	{
		__LIB_3__::func_158(&(uParam0->f_26[1 /*11*/]), 1);
	}
}

int func_1094(int* iParam0, int* iParam1, float fParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_941(iParam0, iParam1, fParam2, uParam3, iParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_0__::func_11(iParam1, uParam3, iParam0);
	}
	if (!*iParam4)
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

bool func_1095(int* iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		MISC::_0xE98D55C5983F2509(*iParam0);
		bVar4 = __LIB_0__::func_27(iParam4, 32);
		__LIB_14__::func_648(iParam1, uParam2, 0);
		iVar5 = __LIB_18__::func_848(*iParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
			return true;
		}
		__LIB_5__::func_684(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!__LIB_0__::func_27(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (__LIB_0__::func_27(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (__LIB_0__::func_27(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (__LIB_0__::func_27(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (__LIB_0__::func_27(iParam4, 8388608) || __LIB_0__::func_27(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (__LIB_0__::func_27(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (__LIB_0__::func_27(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (__LIB_1__::func_489(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*iParam0, "IloGeneralEvents", 2);
		}
		if (!__LIB_1__::func_489(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (__LIB_0__::func_27(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::_0x870708A6E147A9AD(*iParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = __LIB_3__::func_101(iParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*iParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*iParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*iParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 301, false);
			if (__LIB_0__::func_27(iParam4, 268435456))
			{
				iVar8 = __LIB_5__::func_674(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					__LIB_2__::func_394(iParam1, uParam2[iVar8 /*11*/]);
				}
			}
			if (__LIB_1__::func_489(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*iParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 493, false);
			}
			if (__LIB_0__::func_27(iParam4, 2) || __LIB_0__::func_27(iParam4, 16))
			{
				__LIB_1__::func_488(*iParam0, 1, 1);
			}
			else
			{
				__LIB_1__::func_488(*iParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

bool func_1100()
{
	if (func_65())
	{
		if (func_374(Local_62.f_170, 1))
		{
			return true;
		}
	}
	if (func_308(Local_62.f_170, 0, &(Local_62.f_124), &(Local_62.f_152), 0, 0))
	{
		if (Local_62.f_152 != 256)
		{
			return true;
		}
	}
	return false;
}

Vector3 func_1103()
{
	return 1324.463f, -1323.992f, 76.88768f;
}

void func_1104(var uParam0, var uParam1, bool bParam2)
{
	__LIB_3__::func_548(uParam1[0 /*11*/], "INTERACT_GREET", "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_3__::func_548(uParam1[1 /*11*/], "INTERACT_INSULT", "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	func_1258(uParam0, uParam1, bParam2);
	func_518(uParam0, 1);
	Local_62.f_170.f_209 = -1;
}

Vector3 func_1105()
{
	return 2711.24f, -1290.74f, 49.63f;
}

Vector3 func_1106()
{
	return -1789.88f, -388.55f, 160.32f;
}

Vector3 func_1107()
{
	return -290.16f, 812.8f, 119.43f;
}

void func_1108()
{
	if (func_335(8))
	{
		return;
	}
	if (__LIB_2__::func_401(Local_62.f_170, 1, 1, 1, 0, 0))
	{
		if (!func_276(&(Local_62.f_170.f_214), 7.5f, 0, "shoprob.clerkData.timerGeneric"))
		{
			return;
		}
	}
	else
	{
		__LIB_0__::func_37(&(Local_62.f_170.f_214));
		return;
	}
	__LIB_0__::func_37(&(Local_62.f_170.f_214));
	__LIB_2__::func_478(Local_62.f_170, Global_35, "GUN_AIMED_AT_LINGERING", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	func_533(8);
}

int func_1110(var uParam0)
{
	int iVar0[8];
	int iVar9;
	iVar0[0] = 0;
	iVar0[1] = 2;
	iVar0[2] = 1;
	iVar0[3] = 0;
	iVar0[4] = 0;
	iVar0[5] = 0;
	iVar0[7] = 0;
	iVar0[6] = 0;
	switch (uParam0->f_51)
	{
		case 0:
			iVar0[0] = 1;
			iVar0[1] = 2;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 3;
			iVar0[5] = 2;
			break;
		case 7:
			iVar0[0] = 1;
			iVar0[1] = 1;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 2;
			iVar0[5] = 0;
			iVar0[6] = 3;
			break;
		case 8:
			iVar0[0] = 1;
			iVar0[1] = 3;
			iVar0[2] = 0;
			iVar0[3] = 0;
			iVar0[4] = 0;
			iVar0[5] = 0;
			break;
		case 17:
			iVar0[0] = 1;
			iVar0[1] = 0;
			iVar0[2] = 1;
			iVar0[3] = 2;
			iVar0[4] = 0;
			iVar0[5] = 3;
			break;
		case 19:
			iVar0[0] = 1;
			iVar0[1] = 0;
			iVar0[2] = 3;
			iVar0[3] = 0;
			iVar0[4] = 0;
			iVar0[5] = 0;
			break;
		case 22:
			break;
		case 28:
			iVar0[0] = 0;
			iVar0[1] = 2;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 3;
			iVar0[5] = 1;
			break;
		case 29:
			iVar0[0] = 2;
			iVar0[1] = 1;
			iVar0[2] = 1;
			iVar0[3] = 3;
			iVar0[4] = 2;
			iVar0[5] = 1;
			break;
		case 39:
			iVar0[0] = 0;
			iVar0[1] = 2;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 3;
			iVar0[5] = 1;
			break;
		case 42:
			iVar0[0] = 0;
			iVar0[1] = 2;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 3;
			iVar0[5] = 1;
			break;
		case 41:
			iVar0[0] = 0;
			iVar0[1] = 2;
			iVar0[2] = 2;
			iVar0[3] = 0;
			iVar0[4] = 3;
			iVar0[5] = 1;
			break;
		case 43:
			iVar0[0] = 1;
			iVar0[1] = 1;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 2;
			iVar0[5] = 0;
			iVar0[6] = 3;
			break;
		case 47:
			iVar0[0] = 2;
			iVar0[1] = 1;
			iVar0[2] = 2;
			iVar0[3] = 2;
			iVar0[4] = 3;
			iVar0[5] = 0;
			break;
		case 61:
			iVar0[0] = 0;
			iVar0[1] = 2;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 3;
			iVar0[5] = 1;
			break;
		case 73:
			iVar0[0] = 2;
			iVar0[1] = 1;
			iVar0[2] = 2;
			iVar0[3] = 2;
			iVar0[4] = 1;
			iVar0[5] = 3;
			break;
		case 74:
			iVar0[0] = 1;
			iVar0[1] = 1;
			iVar0[2] = 2;
			iVar0[3] = 3;
			iVar0[4] = 2;
			iVar0[5] = 2;
			break;
		case 75:
			iVar0[0] = 1;
			iVar0[1] = 2;
			iVar0[2] = 1;
			iVar0[3] = 1;
			iVar0[4] = 3;
			iVar0[5] = 1;
			break;
		case 82:
			iVar0[0] = 0;
			iVar0[1] = 1;
			iVar0[2] = 2;
			iVar0[3] = 0;
			iVar0[4] = 0;
			iVar0[5] = 3;
			break;
		case 87:
			iVar0[0] = 1;
			iVar0[1] = 0;
			iVar0[2] = 2;
			iVar0[3] = 0;
			iVar0[4] = 0;
			iVar0[5] = 3;
			break;
		case 90:
			iVar0[0] = 1;
			iVar0[1] = 2;
			iVar0[2] = 0;
			iVar0[3] = 1;
			iVar0[4] = 3;
			iVar0[5] = 0;
			break;
		case 91:
			iVar0[0] = 0;
			iVar0[1] = 1;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 1;
			iVar0[5] = 2;
			iVar0[6] = 3;
			break;
		case 95:
			iVar0[0] = 1;
			iVar0[1] = 0;
			iVar0[2] = 2;
			iVar0[3] = 0;
			iVar0[4] = 0;
			iVar0[5] = 3;
			break;
	}
	iVar9 = __LIB_19__::func_352(uParam0, &iVar0);
	return iVar9;
}

void func_1112(int* iParam0, int iParam1)
{
	if (__LIB_0__::func_51(&(iParam0->f_9), 2048))
	{
		return;
	}
	if (!PED::_IS_PED_HOGTIED(*iParam0))
	{
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
	func_518(&(iParam0->f_9), 2048);
}

void func_1113(int iParam0, char* sParam1, bool bParam2, bool bParam3)
{
	if (__LIB_14__::func_607(iParam0, "open_door", sParam1))
	{
		*bParam2 = 1;
	}
	else if (__LIB_14__::func_607(iParam0, "open_door_idle", sParam1))
	{
		*bParam3 = 1;
	}
}

bool func_1114(int iParam0, char* sParam1)
{
	if (!func_280(iParam0, sParam1, 0.399f))
	{
		return false;
	}
	func_517(32);
	return true;
}

bool func_1115(int iParam0, char* sParam1, int* iParam2, var uParam3)
{
	float fVar0;
	if (func_221(2))
	{
		return false;
	}
	func_1616(*iParam2, uParam3);
	if (!func_1617())
	{
		return false;
	}
	if (func_44(67108864))
	{
		return false;
	}
	if (__LIB_14__::func_634(iParam2) || __LIB_14__::func_642(*iParam2, 1435919172, 0))
	{
		__LIB_0__::func_37(&(iParam2->f_217));
		return false;
	}
	else
	{
		fVar0 = 3f;
		if (!func_276(&(iParam2->f_217), fVar0, 1, "gunsmith.timerIsInterrupted"))
		{
			return false;
		}
	}
	__LIB_0__::func_37(&(iParam2->f_217));
	__LIB_2__::func_506(iParam0, sParam1);
	func_796(0, func_911(0), 0, "PBL_holdup");
	return true;
}

bool func_1117(int* iParam0, var uParam1)
{
	if (func_221(8))
	{
		return false;
	}
	if (iLocal_45 == 10)
	{
		return false;
	}
	if (__LIB_14__::func_634(iParam0) || __LIB_14__::func_642(*iParam0, 1435919172, 1))
	{
		return false;
	}
	__LIB_3__::func_732(0);
	func_1616(*iParam0, uParam1);
	return true;
}

bool func_1118(int iParam0, char* sParam1, var uParam2, var uParam3)
{
	if (func_120(1))
	{
		return false;
	}
	if (func_1114(iParam0, sParam1))
	{
		return false;
	}
	if ((*uParam2 == 256 || *uParam2 == 4) || *uParam2 == 1)
	{
		return true;
	}
	if (*uParam3 == 256 || *uParam3 == 4)
	{
		return true;
	}
	return false;
}

bool func_1120(int iParam0, char* sParam1, var uParam2, var uParam3)
{
	if (func_120(2))
	{
		return false;
	}
	if (!func_1114(iParam0, sParam1))
	{
		return false;
	}
	if (((*uParam2 == 256 || *uParam2 == 4) || *uParam2 == 1) || *uParam2 == 2)
	{
		return true;
	}
	if (*uParam3 == 256 || *uParam3 == 4)
	{
		return true;
	}
	return false;
}

bool func_1124(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, float fParam5, bool bParam6)
{
	struct<4> Var0;
	if (!bParam6 && PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1))
	{
		return false;
	}
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam1, sParam2, &Var0, true, sParam3, 2))
	{
		if (__LIB_3__::func_501(iParam0, Var0, Var0.f_3.f_2, fParam4, fParam5, 1))
		{
			return true;
		}
	}
	return false;
}

void func_1125()
{
	func_1618();
	__LIB_14__::func_616(Local_62.f_1216[0], "SCENE_SDNGUN_HOLDUP");
}

void func_1127(int iParam0, int iParam1)
{
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return;
	}
	TASK::TASK_COMBAT_PED(iParam0, Global_35, iParam1, 0);
}

void func_1128(int* iParam0, char* sParam1)
{
	if (!__LIB_2__::func_1(*iParam0, 0, 1))
	{
		return;
	}
	TASK::TASK_SMART_FLEE_PED(*iParam0, Global_35, 1000f, -1, 0, 3f, 0);
}

void func_1129()
{
	if (__LIB_14__::func_606(Global_35, Local_62.f_1247[8 /*2*/]) || __LIB_14__::func_606(Global_35, Local_62.f_1247[7 /*2*/]))
	{
		LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), joaat("CRIME_VANDALISM"), 0, 0, -1);
		func_137(0, 1);
		func_138(0);
	}
	else
	{
		func_137(1, 1);
		func_138(1);
	}
}

void func_1130(int iParam0)
{
	if (!func_335(65536))
	{
		if (!__LIB_2__::func_227(0, 1, 0, 0))
		{
			return;
		}
		if (func_1619())
		{
			return;
		}
		func_596(&iParam0, "SRGKNOOPN", "SRGKNOOPNJ", 1);
		func_533(65536);
	}
	else if (func_221(256))
	{
		if (!func_335(131072))
		{
			return;
		}
		if (!__LIB_2__::func_227(3f, 1, 0, 0))
		{
			return;
		}
		if (AUDIO::_0x1ECC76792F661CF5("SRGKNOOPN") || AUDIO::_0x1ECC76792F661CF5("SRGKNOOPNJ"))
		{
			return;
		}
		__LIB_8__::func_336(&(Local_62.f_1518), "SRG_TRAP_SLEEP", Local_62.f_390[0 /*126*/], Global_35, 0, 0, 1, 1);
		func_1149(131072);
	}
}

void func_1132(int iParam0, char* sParam1, bool bParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_PAUSED(iParam0, bParam2);
}

bool func_1133(var uParam0)
{
	if (AUDIO::_0x1ECC76792F661CF5("SRGKNOOPN") || AUDIO::_0x1ECC76792F661CF5("SRGKNOOPNJ"))
	{
		return false;
	}
	if ((!__LIB_14__::func_606(Global_35, Local_62.f_1247[7 /*2*/]) && !__LIB_14__::func_606(Global_35, Local_62.f_1247[6 /*2*/])) && !func_1620(*uParam0, &(uParam0->f_14)))
	{
		return false;
	}
	return true;
}

void func_1134(int iParam0, var uParam1)
{
	bool bVar0;
	if (func_44(-2147483648))
	{
		return;
	}
	if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
	{
		bVar0 = true;
	}
	if (*uParam1 == 2 || *uParam1 == 2048)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		return;
	}
	__LIB_3__::func_732(1);
	__LIB_8__::func_336(&(Local_62.f_1518), "SRGK_HURT1", iParam0, Global_35, 0, 0, 1, 1);
	func_91(-2147483648);
}

void func_1136()
{
	int iVar0;
	char* sVar1;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_62.f_1216[1]))
	{
		return;
	}
	iVar0 = Local_62.f_1216[1];
	sVar1 = func_810(1);
	__LIB_9__::func_798(iVar0, "pedGunsmith", Local_62.f_170, sVar1, 1);
	__LIB_14__::func_621(iVar0, "objRoomDoor", Local_62.f_1189[0 /*8*/].f_5, sVar1, 1);
	__LIB_14__::func_621(iVar0, "objTrapDoor", Local_62.f_1226[0], sVar1, 1);
	func_277(iVar0, "bHandsUpLoop", 0, sVar1);
	func_277(iVar0, "bStopAtDoorLoop", 0, sVar1);
	func_277(iVar0, "bStopWaitTrapDoorLoop", 0, sVar1);
}

bool func_1137(int* iParam0)
{
	if (__LIB_0__::func_75(&(Local_62.f_1456)))
	{
		if (!__LIB_1__::func_313(&(Local_62.f_1456), 6f))
		{
			return false;
		}
	}
	if (__LIB_14__::func_617(iParam0) || __LIB_14__::func_642(*iParam0, 1435919172, 1))
	{
		__LIB_0__::func_37(&(iParam0->f_217));
		return false;
	}
	if (func_221(2048))
	{
		return false;
	}
	if (iLocal_45 == 1 || iLocal_45 == 2)
	{
		return false;
	}
	__LIB_2__::func_506(Local_62.f_1216[1], "SCENE_STRGEN_HOLDUP");
	func_796(0, func_900(0), 0, "pbOpenToBasement_Alt");
	return true;
}

char* func_1138()
{
	return "script_proc@robberies@shop@strgen";
}

void func_1139()
{
	int iVar0;
	char* sVar1;
	iVar0 = Local_62.f_1216[0];
	sVar1 = func_900(0);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar0))
	{
		return;
	}
	__LIB_9__::func_798(iVar0, "pedClerk", Local_62.f_170, sVar1, 1);
	__LIB_9__::func_798(iVar0, "pedPlayer", Global_35, sVar1, 1);
	__LIB_14__::func_621(iVar0, "objFloorboard", Local_62.f_1226[1], sVar1, 1);
	__LIB_14__::func_621(iVar0, "objTrapDoor", Local_62.f_1226[2], sVar1, 1);
	func_277(iVar0, "bStopIdleLoop", 0, sVar1);
	func_277(iVar0, "bStopHandsUpLoop", 0, sVar1);
	func_277(iVar0, "bStopTrapDoorLoop", 0, sVar1);
	func_277(iVar0, "bStopLadderLoop", 0, sVar1);
	func_277(iVar0, "bStopBasementLoop1", 0, sVar1);
	func_277(iVar0, "bStopBasementLoop2", 0, sVar1);
	func_277(iVar0, "bStopCryLoop", 0, sVar1);
	func_277(iVar0, "COWER_LOOP", 0, sVar1);
}

void func_1140()
{
	func_277(Local_62.f_1216[4], "bActionCower", 1, "SCENE_VALDOC_HOLDUPBACKROOM");
}

bool func_1141()
{
	if (func_280(Local_62.f_1216[5], "SCENE_VALDOC_GANGOPENBACKROOM", 0.058f) && !func_280(Local_62.f_1216[5], "SCENE_VALDOC_GANGOPENBACKROOM", 0.145f))
	{
		return true;
	}
	return false;
}

bool func_1143(int* iParam0, int iParam1, char* sParam2)
{
	if (__LIB_0__::func_75(&(Local_62.f_1456)))
	{
		if (!__LIB_1__::func_313(&(Local_62.f_1456), 6f))
		{
			return false;
		}
	}
	if (__LIB_14__::func_617(iParam0) || __LIB_14__::func_642(*iParam0, 1435919172, 0))
	{
		__LIB_0__::func_37(&(iParam0->f_217));
		return false;
	}
	else if (!func_276(&(iParam0->f_217), 3f, 1, "doc.timerIsInterrupted"))
	{
		return false;
	}
	if (func_44(67108864))
	{
		return false;
	}
	__LIB_0__::func_37(&(iParam0->f_217));
	__LIB_2__::func_506(iParam1, sParam2);
	func_796(4, func_795(4), 0, "PBL_KNOCK_DOOR");
	return true;
}

bool func_1144(int iParam0)
{
	if (*iParam0 != 2)
	{
		return false;
	}
	if (PED::_0x285D36C5C72B0569(Global_35) > 1f)
	{
		return false;
	}
	return true;
}

bool func_1145()
{
	if (func_44(262144))
	{
		return false;
	}
	if (func_44(524288))
	{
		return false;
	}
	if (func_44(1048576))
	{
		return false;
	}
	return true;
}

bool func_1146(int* iParam0, int iParam1)
{
	if (!func_1622())
	{
		return false;
	}
	if (__LIB_2__::func_1(*iParam0, 0, 1) && !PED::_IS_PED_LASSOED(*iParam0))
	{
		return false;
	}
	func_91(524288);
	return true;
}

bool func_1147(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	if (!func_1141())
	{
		return false;
	}
	if (!bParam1)
	{
		return false;
	}
	if (*iParam2 == 4)
	{
		bVar0 = true;
		__LIB_14__::func_633(0);
		__LIB_8__::func_336(&(Local_62.f_1518), "SRVDOSEEMA", *uParam0, Global_35, 0, 0, 1, 1);
	}
	else if (*iParam2 == 2048)
	{
		bVar0 = true;
		__LIB_14__::func_633(0);
		__LIB_8__::func_336(&(Local_62.f_1518), "SRVDOSEEAT", *uParam0, Global_35, 0, 0, 1, 1);
	}
	else if (*iParam2 == 2)
	{
		bVar0 = true;
		__LIB_14__::func_633(0);
		__LIB_8__::func_336(&(Local_62.f_1518), "SRVDOSEEKL", *uParam0, Global_35, 0, 0, 1, 1);
	}
	else if (*iParam2 == 1)
	{
		bVar0 = true;
		__LIB_14__::func_633(0);
		__LIB_8__::func_336(&(Local_62.f_1518), "SRV_G3_NOOPEN2", *uParam0, Global_35, 0, 0, 1, 1);
	}
	if (bVar0)
	{
		func_91(262144);
		return true;
	}
	return false;
}

bool func_1148(bool bParam0, int iParam1)
{
	bool bVar0;
	if (!func_1157())
	{
		return false;
	}
	if (!bParam0)
	{
		return false;
	}
	if (*iParam1 == 4)
	{
		bVar0 = true;
	}
	else if (*iParam1 == 2048)
	{
		bVar0 = true;
	}
	else if (*iParam1 == 2)
	{
		bVar0 = true;
	}
	else if (*iParam1 == 1)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_91(1048576);
		return true;
	}
	return false;
}

void func_1149(int iParam0)
{
	if (!func_335(iParam0))
	{
		return;
	}
	Local_62.f_1627 = (Local_62.f_1627 - (Local_62.f_1627 && iParam0));
}

void func_1150(int iParam0, char* sParam1)
{
	if (func_221(2048))
	{
		if (!__LIB_14__::func_619(iParam0, sParam1))
		{
			__LIB_2__::func_506(iParam0, sParam1);
		}
	}
	else if (func_221(1024))
	{
		if (func_1141())
		{
			__LIB_9__::func_793(iParam0, "PBL_CLOSE_SLIT", sParam1, 1);
			func_224(2048);
		}
		else if (func_1623())
		{
			func_224(2048);
		}
	}
}

void func_1151(var uParam0)
{
	__LIB_2__::func_887(uParam0, 0);
	__LIB_2__::func_828(uParam0, 1);
	__LIB_2__::func_829(uParam0, 1);
	__LIB_1__::func_402(uParam0, 1);
	__LIB_1__::func_401(uParam0, 1);
}

void func_1152()
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_62.f_1216[2]))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_62.f_1226[12]))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_62.f_1226[12], true);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_62.f_1216[2], "weapPistolFemale", Local_62.f_1226[12], 0);
	}
	if (__LIB_2__::func_1(Local_62.f_390[1 /*126*/], 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_62.f_1216[2], "pedFlirtMale", Local_62.f_390[1 /*126*/], 0);
	}
	if (__LIB_2__::func_1(Local_62.f_390[3 /*126*/], 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_62.f_1216[2], "pedFlirtFemale", Local_62.f_390[3 /*126*/], 0);
	}
}

void func_1153()
{
	func_1625();
	__LIB_14__::func_616(Local_62.f_1216[4], "SCENE_VALDOC_HOLDUPBACKROOM");
}

bool func_1154()
{
	if (func_280(Local_62.f_1216[4], "SCENE_VALDOC_HOLDUPBACKROOM", 0.034f))
	{
		return true;
	}
	return false;
}

bool func_1155()
{
	if (func_280(Local_62.f_1216[4], "SCENE_VALDOC_HOLDUPBACKROOM", 0.24f))
	{
		return true;
	}
	return false;
}

void func_1156()
{
	int iVar0;
	char* sVar1;
	iVar0 = Local_62.f_1216[5];
	sVar1 = func_795(5);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_62.f_1216[5]))
	{
		return;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_62.f_1216[1]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_62.f_1216[1]);
	}
	__LIB_14__::func_618(&(Local_62.f_1226[1]), 0);
	__LIB_14__::func_618(&(Local_62.f_1226[6]), 0);
	__LIB_14__::func_618(&(Local_62.f_1226[7]), 0);
	__LIB_14__::func_618(&(Local_62.f_1226[4]), 0);
	__LIB_14__::func_618(&(Local_62.f_1226[5]), 0);
	__LIB_14__::func_618(&(Local_62.f_1226[2]), 0);
	__LIB_14__::func_618(&(Local_62.f_1226[3]), 0);
	Local_62.f_1512[4] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_TAKE_MONEY_PILE_TABLE"), -287.3691f, 815.6423f, 118.392f, __LIB_3__::func_804(-1.416f), 0f, 0, 0);
	TASK::_SET_SCENARIO_POINT_FLAG(Local_62.f_1512[4], 22, true);
	__LIB_14__::func_621(iVar0, "objCountPen", Local_62.f_1226[8], sVar1, 1);
	__LIB_14__::func_621(iVar0, "objCountLedger", Local_62.f_1226[9], sVar1, 1);
	__LIB_14__::func_621(iVar0, "objCountChair", Local_62.f_1226[10], sVar1, 1);
	__LIB_14__::func_621(iVar0, "objDoor", Local_62.f_1198[0 /*8*/], sVar1, 1);
	__LIB_9__::func_798(iVar0, "pedGangCountCash", Local_62.f_390[0 /*126*/], sVar1, 1);
	func_277(Local_62.f_1216[5], "bStopCountLoop", 0, "SCENE_VALDOC_GANGOPENBACKROOM");
}

bool func_1157()
{
	if (func_280(Local_62.f_1216[5], "SCENE_VALDOC_GANGOPENBACKROOM", 0.145f))
	{
		return true;
	}
	return false;
}

char* func_1158()
{
	if (!func_60(8192))
	{
		return "SRVD_DOPEN2";
	}
	else
	{
		return "SRVD_DOPEN3";
	}
	return "";
}

bool func_1159()
{
	if (func_280(Local_62.f_1216[4], "SCENE_VALDOC_HOLDUPBACKROOM", 0.56f))
	{
		return true;
	}
	return false;
}

bool func_1160(var uParam0)
{
	if (__LIB_14__::func_620(*uParam0, "DLG_GangNoSeeClerk"))
	{
		return true;
	}
	return false;
}

bool func_1161(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_62.f_1216[5]))
	{
		return false;
	}
	if (__LIB_14__::func_620(*uParam0, "DoorOpen"))
	{
		return true;
	}
	return false;
}

bool func_1162(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_62.f_1216[5]))
	{
		return false;
	}
	if (__LIB_14__::func_620(*uParam0, "SlitClosed"))
	{
		return true;
	}
	return false;
}

void func_1163(int iParam0, vector3 vParam1, float fParam4, float fParam5, int iParam6, float fParam7)
{
	int iVar0;
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return;
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_GO_STRAIGHT_TO_COORD(0, vParam1, fParam5, iParam6, 40000f, fParam7, 0);
	if (fParam4 != -1f)
	{
		TASK::TASK_ACHIEVE_HEADING(0, fParam4, 0);
	}
	__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
}

void func_1164(int iParam0, int iParam1)
{
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return;
	}
	TASK::TASK_COWER(iParam0, iParam1, 0, 0);
}

void func_1165(int iParam0, int* iParam1, var uParam2, int iParam3, var uParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	*iParam3 = -1;
	if (__LIB_0__::func_51(uParam4, 2))
	{
		iVar0 = 3;
		iVar1 = __LIB_2__::func_340(iVar0, 0, 0);
		if (__LIB_0__::func_51(uParam4, 32))
		{
			iVar1 |= 65792;
		}
		*iParam3 = func_941(&iParam0, iParam1, 15f, uParam2, 0, 3, 0, "", iVar1, 0, 0, 2, -1082130432 /* Float: -1f */);
	}
}

void func_1166(int* iParam0, int* iParam1, int* iParam2)
{
	func_1627(iParam0, 2);
	func_1627(iParam1, 3);
	func_1627(iParam2, 4);
}

void func_1167()
{
	int iVar0;
	int iVar1;
	if (func_62(1048576))
	{
		return;
	}
	if (!func_221(512))
	{
		return;
	}
	if (func_221(16))
	{
		iVar0 = Local_62.f_390[0 /*126*/];
		iVar1 = Local_62.f_390[0 /*126*/].f_1;
	}
	else
	{
		iVar0 = Local_62.f_170;
		iVar1 = Local_62.f_170.f_1;
	}
	if (!__LIB_2__::func_1(iVar0, 0, 1))
	{
		return;
	}
	if (__LIB_14__::func_606(Global_35, Local_62.f_1355[2 /*2*/]) || __LIB_0__::func_665(Global_35, iVar0, 1, 1) < 6f)
	{
		__LIB_0__::func_37(&(Local_62.f_1392[5 /*3*/]));
		return;
	}
	if (!func_276(&(Local_62.f_1392[5 /*3*/]), 7.5f, 1, "TIMER_SDNGUN_PLAYER_ABANDONED_DOWNSTAIRS_SURVIVOR"))
	{
		return;
	}
	func_1628(&iVar0, 2710.067f, -1290.767f, 48.61687f, 2f, -1, 0.5f);
	__LIB_0__::func_325(&iVar1);
	func_39(1048576);
}

void func_1168(int iParam0)
{
	if (func_335(-2147483648))
	{
		return;
	}
	__LIB_8__::func_336(&(Local_62.f_1518), "PRNBH_IG6_KILL1", iParam0, Global_35, 0, 0, 1, 1);
	func_533(-2147483648);
}

bool func_1169()
{
	if (func_120(2048) || func_120(512))
	{
		return false;
	}
	if (!func_120(1024))
	{
		return false;
	}
	if (!__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return false;
	}
	if (!Global_1935630.f_23)
	{
		return false;
	}
	if (!func_120(4096))
	{
		return false;
	}
	if (func_221(134217728))
	{
		func_224(67108864);
	}
	func_1187();
	__LIB_14__::func_633(1);
	__LIB_0__::func_769();
	TASK::_TASK_SMART_FLEE_STYLE_PED(Local_62.f_390[2 /*126*/], Global_35, 3, 32768, -1082130432 /* Float: -1f */, -1, 0);
	func_517(2048);
	return true;
}

bool func_1171()
{
	if (func_99(512))
	{
		return false;
	}
	if (!__LIB_14__::func_606(Global_35, Local_62.f_1247[6 /*2*/]))
	{
		return false;
	}
	__LIB_0__::func_568(2715.568f, -1287.846f, 59.34501f, 7.87f, 0);
	func_890(&(Local_62.f_1368), &(Local_62.f_1369), 2713.375f, -1290.984f, 61.18057f, 0f, 0f, -65.06339f, 6.10498f, 5.006104f, 3.666298f, 1, 0, 1, 0, 0);
	if (func_221(16))
	{
		func_1128(&(Local_62.f_390[0 /*126*/]), "HIDDENPED_SDNGUN_GUARDDOWN");
		__LIB_0__::func_325(&(Local_62.f_390[0 /*126*/].f_1));
		func_39(1048576);
	}
	else
	{
		func_1128(&(Local_62.f_170), "GUNSMITH");
		__LIB_0__::func_325(&(Local_62.f_170.f_1));
		func_39(1048576);
	}
	__LIB_1__::func_948(1057071735, 0, 0f, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(-1011766303, 0, 0f, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(joaat("DOOR_NEW_GUNSHOP_INT_BACK"), 0, 0f, 0, 0, 0, 0, 0);
	__LIB_2__::func_829(&(Local_62.f_390[2 /*126*/].f_89), 1);
	__LIB_2__::func_829(&(Local_62.f_390[3 /*126*/].f_89), 1);
	__LIB_2__::func_829(&(Local_62.f_390[4 /*126*/].f_89), 1);
	func_224(1024);
	iLocal_28 = 0;
	func_98(512);
	return true;
}

void func_1172(int* iParam0)
{
	if (Local_62.f_1290.f_1)
	{
		return;
	}
	if (!Local_62.f_1247[4 /*2*/].f_1)
	{
		if (__LIB_14__::func_606(Global_35, Local_62.f_1247[4 /*2*/]))
		{
			Local_62.f_1247[4 /*2*/].f_1 = 1;
		}
		return;
	}
	if (!func_55(4096))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			func_57(4096);
		}
		return;
	}
	if (!func_99(1024))
	{
		return;
	}
	if (!func_221(1024))
	{
		return;
	}
	if (func_221(2048))
	{
		return;
	}
	func_1629(iParam0);
	func_224(2048);
}

void func_1173()
{
	if (!func_99(1024))
	{
		return;
	}
	if (!func_221(8192))
	{
		return;
	}
	func_1630(&(Local_62.f_390[2 /*126*/]), 2, &(Local_62.f_390[2 /*126*/].f_89), &(Local_62.f_390[2 /*126*/].f_9), Local_62.f_1475[0]);
	func_1630(&(Local_62.f_390[3 /*126*/]), 3, &(Local_62.f_390[3 /*126*/].f_89), &(Local_62.f_390[3 /*126*/].f_9), Local_62.f_1475[1]);
	func_1630(&(Local_62.f_390[4 /*126*/]), 4, &(Local_62.f_390[4 /*126*/].f_89), &(Local_62.f_390[4 /*126*/].f_9), Local_62.f_1475[2]);
}

void func_1174()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
		{
			case joaat("EVENT_ENTITY_DAMAGED"):
				func_1631(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_1175(int* iParam0, int iParam1, char* sParam2)
{
	int iVar0;
	int iVar1;
	if (!__LIB_14__::func_607(iParam1, func_1632(), sParam2))
	{
		return;
	}
	if (__LIB_14__::func_623(iParam1, sParam2, func_1633()))
	{
		__LIB_9__::func_793(iParam1, func_1634(), sParam2, 1);
		func_1635(iParam1, sParam2);
		return;
	}
	else if (__LIB_14__::func_623(iParam1, sParam2, func_1636()))
	{
		__LIB_9__::func_793(iParam1, func_1634(), sParam2, 1);
		func_1635(iParam1, sParam2);
		return;
	}
	if (!func_559(iParam1, func_1633(), sParam2, 0) || !func_559(iParam1, func_1636(), sParam2, 0))
	{
		return;
	}
	if (__LIB_0__::func_75(&(Local_62.f_1392[10 /*3*/])))
	{
		if (!func_276(&(Local_62.f_1392[10 /*3*/]), 5f, 0, "TIMER_SDNGUN_OWNER_FLINCH_COWER_COOLDOWN"))
		{
			return;
		}
		else
		{
			__LIB_0__::func_37(&(Local_62.f_1392[10 /*3*/]));
		}
	}
	if (!func_308(*iParam0, 0, &(iParam0->f_89), &iVar0, 0, 0))
	{
		return;
	}
	if (iVar0 != 256 && iVar0 != 4)
	{
		return;
	}
	iVar1 = __LIB_3__::func_547(*iParam0, Global_35, 1f);
	if (iVar1 == 2)
	{
		__LIB_9__::func_793(iParam1, func_1633(), sParam2, 1);
		func_1638(*iParam0);
		func_553(iParam1, func_1634(), sParam2);
		__LIB_1__::func_148(&(Local_62.f_1392[10 /*3*/]));
	}
	else if (iVar1 == 3)
	{
		__LIB_9__::func_793(iParam1, func_1636(), sParam2, 1);
		func_1638(*iParam0);
		func_553(iParam1, func_1634(), sParam2);
		__LIB_1__::func_148(&(Local_62.f_1392[10 /*3*/]));
	}
}

void func_1176()
{
	if (!func_99(1024))
	{
		return;
	}
	if (!__LIB_0__::func_51(&(Local_62.f_390[2 /*126*/].f_9), 1))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_62.f_390[2 /*126*/]))
		{
			if (!func_221(16777216))
			{
				func_1187();
				__LIB_1__::func_148(&(Local_62.f_1392[12 /*3*/]));
				func_928(Local_62.f_1216[2], "OBJ_SAFE", Local_62.f_1226[1], "SCENE_SDNGUN_GAMBLER_GROUP", 1, 0);
				func_224(67108864);
			}
			func_518(&(Local_62.f_390[2 /*126*/].f_9), 1);
		}
	}
	if (!__LIB_0__::func_51(&(Local_62.f_390[3 /*126*/].f_9), 1))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_62.f_390[3 /*126*/]))
		{
			func_518(&(Local_62.f_390[3 /*126*/].f_9), 1);
		}
	}
	if (!__LIB_0__::func_51(&(Local_62.f_390[4 /*126*/].f_9), 1))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_62.f_390[4 /*126*/]))
		{
			func_518(&(Local_62.f_390[4 /*126*/].f_9), 1);
		}
	}
}

void func_1177()
{
	func_1639(16384, "BOOL_STOP_COWER_IDLE_POS_01", Local_62.f_1216[3], "SCENE_SDNGUN_GAMBLER_OWNER");
	func_1639(32768, "BOOL_STOP_COWER_IDLE_POS_02", Local_62.f_1216[3], "SCENE_SDNGUN_GAMBLER_OWNER");
	func_1639(65536, "BOOL_STOP_COWER_IDLE", Local_62.f_1216[4], "SCENE_SDNGUN_GAMBLER_MIDDLE");
	func_1639(131072, "BOOL_STOP_COWER_IDLE", Local_62.f_1216[5], "SCENE_SDNGUN_GAMBLER_WUSS");
}

void func_1178()
{
	int iVar0;
	float fVar1;
	bool bVar2;
	PED::SET_PED_RESET_FLAG(Global_35, 275, true);
	if (!Local_62.f_1290.f_1)
	{
		return;
	}
	iVar0 = joaat("CRIME_ASSAULT");
	if (!func_221(1073741824 /* Float: 2f */))
	{
		if (PED::IS_PED_SHOOTING(Global_35) || __LIB_4__::func_136(&(Local_62.f_390[1 /*126*/])))
		{
			__LIB_1__::func_148(&(Local_62.f_1392[9 /*3*/]));
			func_224(1073741824 /* Float: 2f */);
		}
	}
	switch (iLocal_50)
	{
		case 0:
			__LIB_1__::func_403(&(Local_62.f_390[2 /*126*/].f_89), 0);
			__LIB_1__::func_403(&(Local_62.f_390[3 /*126*/].f_89), 0);
			__LIB_1__::func_403(&(Local_62.f_390[4 /*126*/].f_89), 0);
			__LIB_7__::func_206(6);
			break;
		case 6:
			if (!func_221(1073741824 /* Float: 2f */))
			{
				return;
			}
			if (func_62(4194304))
			{
				if (!__LIB_0__::func_33(&(Local_62.f_1392[8 /*3*/])))
				{
					__LIB_2__::func_113(&(Local_62.f_1392[8 /*3*/]));
				}
				return;
			}
			if (__LIB_0__::func_33(&(Local_62.f_1392[8 /*3*/])))
			{
				__LIB_2__::func_112(&(Local_62.f_1392[8 /*3*/]));
			}
			fVar1 = 40f;
			if (!func_276(&(Local_62.f_1392[8 /*3*/]), fVar1, 0, "TIMER_SDNGUN_GAMBLING_ROOM_LAW"))
			{
				if (__LIB_1__::func_285(&(Local_62.f_1392[9 /*3*/]), 3f))
				{
					if (PED::IS_PED_SHOOTING(Global_35) || __LIB_4__::func_136(&(Local_62.f_390[1 /*126*/])))
					{
						bVar2 = true;
					}
				}
				if (!bVar2)
				{
					return;
				}
			}
			func_298(1);
			__LIB_0__::func_37(&(Local_62.f_1392[8 /*3*/]));
			func_876(0, 1);
			__LIB_7__::func_206(1);
			break;
		case 1:
			if (!func_276(&(Local_62.f_1392[7 /*3*/]), 2f, 0, "TIMER_SDNGUN_TRIGGER_WITNESS_AFTER_SAFE_OPEN"))
			{
				return;
			}
			__LIB_0__::func_37(&(Local_62.f_1392[7 /*3*/]));
			func_298(1);
			Local_62.f_1479[0] = __LIB_1__::func_545(joaat("A_M_M_NBXUPPERCLASS_01"), 2732.307f, -1274.234f, 48.58568f, 27.26f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			__LIB_7__::func_206(3);
			break;
		case 2:
			if (!func_276(&(Local_62.f_1392[7 /*3*/]), 1f, 0, "TIMER_SDNGUN_TRIGGER_WITNESS_AFTER_SAFE_OPEN"))
			{
				return;
			}
			LAW::_0xF0B67BAD53C35BD9(Local_62.f_1479[0], Global_35, Local_62.f_1479[0], Global_36, iVar0);
			func_224(-2147483648);
			__LIB_7__::func_206(3);
			break;
		case 3:
			if (!func_276(&(Local_62.f_1392[8 /*3*/]), 5f, 0, "TIMER_SDNGUN_GAMBLING_ROOM_LAW"))
			{
				return;
			}
			if (!func_1643(-1))
			{
				return;
			}
			LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), iVar0, 50, 0, true);
			func_1644(0);
			__LIB_7__::func_206(4);
			break;
		case 4:
			__LIB_7__::func_206(18);
			break;
		case 18:
			break;
	}
}

void func_1179(int iParam0, char* sParam1)
{
	if (!func_221(524288))
	{
		return;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(*iParam0, false))
	{
		return;
	}
	func_553(*iParam0, "PBL_open_safe_A", sParam1);
	func_553(*iParam0, "PBL_open_safe_B", sParam1);
	func_553(*iParam0, "PBL_open_safe_C", sParam1);
	func_553(*iParam0, "PBL_open_safe_D", sParam1);
	func_553(*iParam0, "PBL_open_safe_E", sParam1);
	func_418(524288);
}

void func_1180(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5)
{
	if (!func_221(1048576))
	{
		return;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(*iParam0, false))
	{
		func_553(*iParam0, "PBL_cower_idle_pos_02", sParam1);
	}
	else
	{
		return;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(*iParam2, false))
	{
		func_553(*iParam2, "PBL_cower_idle", sParam3);
	}
	else
	{
		return;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(*iParam4, false))
	{
		func_553(*iParam4, "PBL_cower_idle", sParam5);
	}
	else
	{
		return;
	}
	func_418(1048576);
}

void func_1181(int* iParam0)
{
	if (__LIB_0__::func_51(&(iParam0->f_9), 268435456))
	{
		return;
	}
	if (!__LIB_0__::func_51(&(iParam0->f_9), 16777216))
	{
		return;
	}
	if (PED::IS_PED_RAGDOLL(*iParam0))
	{
		return;
	}
	func_1187();
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		TASK::_TASK_SMART_FLEE_STYLE_PED(*iParam0, Global_35, 3, 32768, -1082130432 /* Float: -1f */, -1, 0);
	}
	func_518(&(iParam0->f_9), 268435456);
}

void func_1182()
{
	if (func_120(8192))
	{
		return;
	}
	if (!Local_62.f_1290.f_1)
	{
		return;
	}
	if (!PED::_IS_PED_USING_SCENARIO_HASH(Global_35, __LIB_14__::func_628()))
	{
		return;
	}
	func_412();
	func_517(8192);
}

bool func_1183(int* iParam0, int* iParam1, int* iParam2, int iParam3)
{
	int iVar0;
	if (func_1645(iParam0, iParam1, iParam2))
	{
		iVar0 = 1;
	}
	if ((func_1243(&(iParam0->f_9), &(Local_62.f_1475[0]), iParam3) || func_1243(&(iParam1->f_9), &(Local_62.f_1475[1]), iParam3)) || func_1243(&(iParam2->f_9), &(Local_62.f_1475[2]), iParam3))
	{
		__LIB_3__::func_732(0);
		iVar0 = 1;
	}
	if (func_221(4194304))
	{
		if (__LIB_2__::func_227(-3f, 1, 0, 0))
		{
			func_224(8388608);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_1184(int iParam0, char[4] cParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return;
	}
	ANIMSCENE::RESET_ANIM_SCENE(iParam0, 0);
	ANIMSCENE::LOAD_ANIM_SCENE(iParam0);
}

void func_1186(bool bParam0)
{
	if (bParam0)
	{
		func_412();
		func_239(6);
		__LIB_6__::func_765(10, 1);
	}
	else
	{
		func_251(6);
	}
	func_298(1);
	func_876(0, 0);
	if (!ENTITY::IS_ENTITY_DEAD(Local_62.f_390[0 /*126*/]))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_62.f_390[0 /*126*/]));
	}
	func_29(64);
}

void func_1187()
{
	if (func_221(134217728))
	{
		return;
	}
	if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_62.f_1216[2], "b_DisableAudio"))
	{
		func_277(Local_62.f_1216[2], "b_DisableAudio", 1, "SCENE_SDNGUN_GAMBLER_GROUP");
	}
}

void func_1188()
{
	if (!func_221(8192))
	{
		return;
	}
	if (func_120(512) || func_120(2048))
	{
		return;
	}
	func_1647(&(Local_62.f_390[2 /*126*/]), "PED_GAMBLER_OWNER", &(Local_62.f_1216[3]), 0);
	func_1647(&(Local_62.f_390[3 /*126*/]), "PED_GAMBLER_MIDDLE", &(Local_62.f_1216[4]), 1);
	func_1647(&(Local_62.f_390[4 /*126*/]), "PED_GAMBLER_WUSS", &(Local_62.f_1216[5]), 1);
}

void func_1189()
{
	if (!func_221(33554432))
	{
		return;
	}
	if (func_221(67108864))
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Local_62.f_1482[2]) && !func_120(16384))
	{
		__LIB_3__::func_652(func_926(), &(Local_62.f_1482[2]), 408396114, 0, 0, 0);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_62.f_1482[2], "SR_SD_BLIP_SAFE");
	}
	func_1239(1);
	func_224(134217728);
}

void func_1190()
{
	if (func_120(16384))
	{
		func_1245();
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_62.f_1226[1]))
	{
		if (OBJECT::HAS_OBJECT_BEEN_BROKEN(Local_62.f_1226[1]))
		{
			func_595(func_1238(), 1);
			func_224(33554432);
			func_1239(1);
			func_517(32768);
		}
	}
	if (func_120(32768))
	{
		if (func_1244())
		{
		}
	}
}

Vector3 func_1191()
{
	return 2710.35f, -1290.6f, 49.62f;
}

void func_1192(int* iParam0)
{
	int iVar0;
	int iVar1;
	if (!__LIB_2__::func_1(*iParam0, 0, 1))
	{
		return;
	}
	func_432(0, 0, 1);
	HUD::_DISPLAY_HUD_COMPONENT(724769646);
	iVar0 = WEAPON::GET_BEST_PED_WEAPON(Global_35, true, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, false, 0, false, false);
	TASK::OPEN_SEQUENCE_TASK(&iVar1);
	if (Global_1935630.f_44 != iVar0)
	{
		TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
	}
	if (!WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1195(), 1f, 20000, 0.1f, 0, 123.68f);
	}
	else
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1191(), 1f, 20000, 0.1f, 0, 111.08f);
	}
	__LIB_1__::func_474(Global_35, &iVar1, 0, 0, 1, 1);
	func_433(1);
}

void func_1193(char[4] cParam0, int iParam1, int iParam2)
{
	__LIB_8__::func_336(&(Local_62.f_1518), cParam0, iParam1, iParam2, 0, 0, 1, 0);
}

Vector3 func_1195()
{
	return 2710.77f, -1290.48f, 49.62f;
}

void func_1197(int* iParam0)
{
	if (func_221(128))
	{
		if (!func_221(256))
		{
			if (PED::_0x57779B55B83E2BEA(*iParam0))
			{
				PED::_0xA180FBD502A03125(*iParam0, 2.75f, 1.75f);
				func_224(256);
			}
		}
		return;
	}
	if (func_1648(Local_62.f_1216[0], "SCENE_SDNGUN_HOLDUP", 0f, 0.5f))
	{
		return;
	}
	if (__LIB_14__::func_617(iParam0) && !func_280(Local_62.f_1216[0], "SCENE_SDNGUN_HOLDUP", 0.957f))
	{
		return;
	}
	if (!__LIB_2__::func_1(*iParam0, 0, 1))
	{
		return;
	}
	TASK::_TASK_INTIMIDATED_2(*iParam0, Global_35, 0, 0, 0, 1, 0, 0, 0);
	PED::_0x2208438012482A1A(*iParam0, true, false);
	TASK::_0x41D1331AFAD5A091(*iParam0, 1, 0);
	PED::SET_PED_KEEP_TASK(*iParam0, true);
	func_297(*iParam0, Global_35, &(iParam0->f_64), -1, 0f, 0f, 0.5f, 1, 0);
	func_224(512);
	func_224(128);
}

void func_1198(int* iParam0, int iParam1)
{
	if (__LIB_0__::func_51(&(iParam0->f_10), 16384))
	{
		return;
	}
	if (__LIB_0__::func_75(&(Local_62.f_1392[6 /*3*/])))
	{
		if (!__LIB_1__::func_285(&(Local_62.f_1392[6 /*3*/]), 7.5f))
		{
			func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
			return;
		}
	}
	if ((!__LIB_0__::func_51(&(iParam0->f_10), 4096) && !__LIB_0__::func_51(&(iParam0->f_10), 8192)) && !__LIB_0__::func_51(&(iParam0->f_10), 16384))
	{
		if (!__LIB_2__::func_227(-4f, 1, 0, 0))
		{
			func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
			return;
		}
	}
	else if (!__LIB_2__::func_227(-3f, 1, 0, 0))
	{
		func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
	}
	if (!__LIB_0__::func_51(&(iParam0->f_10), 2048))
	{
		if (!__LIB_0__::func_51(&(iParam0->f_10), 8))
		{
			__LIB_2__::func_411(&(iParam0->f_30[0 /*11*/]), 1, 0);
			func_518(&(iParam0->f_10), 8);
		}
	}
	if (func_1649(&(iParam0->f_10)))
	{
		if (!__LIB_0__::func_51(&(iParam0->f_10), 16))
		{
			__LIB_2__::func_411(&(iParam0->f_30[1 /*11*/]), 1, 0);
			func_518(&(iParam0->f_10), 16);
		}
	}
	if (iParam1 == 0)
	{
		__LIB_0__::func_37(&(Local_62.f_1392[4 /*3*/]));
		__LIB_1__::func_148(&(Local_62.f_1392[6 /*3*/]));
		__LIB_3__::func_732(0);
		func_596(iParam0, "SRNG_ILO_DG_AT1", "SRNG_ILO_DG_JT1", 1);
		func_518(&(iParam0->f_10), 2048);
		func_518(&(iParam0->f_10), 4096);
		func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
	}
	else if (iParam1 == 1)
	{
		__LIB_0__::func_37(&(Local_62.f_1392[4 /*3*/]));
		func_870(&(iParam0->f_10), 16);
		if (!__LIB_0__::func_51(&(iParam0->f_10), 8192))
		{
			__LIB_0__::func_37(&(Local_62.f_1392[4 /*3*/]));
			__LIB_1__::func_148(&(Local_62.f_1392[6 /*3*/]));
			__LIB_3__::func_732(0);
			func_596(iParam0, "SRNG_ILO_DG_AT2", "SRNG_ILO_DG_JT2", 1);
			func_518(&(iParam0->f_10), 8192);
			func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
		}
		else
		{
			__LIB_0__::func_37(&(Local_62.f_1392[4 /*3*/]));
			func_1209();
			__LIB_3__::func_732(0);
			func_596(iParam0, "SRNG_ILO_DG_AT3", "SRNG_ILO_DG_JT3", 1);
			func_518(&(iParam0->f_10), 16384);
			func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
		}
	}
	else if (!__LIB_0__::func_51(&(iParam0->f_10), 2048) || !__LIB_0__::func_51(&(iParam0->f_10), 4096))
	{
		func_1650(iParam0);
	}
}

bool func_1199(int* iParam0)
{
	int iVar0;
	if (func_308(*iParam0, 0, &(iParam0->f_89), &iVar0, 0, 0))
	{
		if (iVar0 == 2 || iVar0 == 4)
		{
			return true;
		}
		else if (iVar0 == 8)
		{
			if (!__LIB_0__::func_481(1))
			{
				if (!func_335(131072))
				{
					__LIB_8__::func_336(&(Local_62.f_1518), "SRNG_DG_AIM1", *iParam0, Global_35, 0, 0, 1, 1);
					func_533(131072);
				}
			}
		}
	}
	if (__LIB_0__::func_51(&(iParam0->f_10), 16384))
	{
		return true;
	}
	return false;
}

void func_1200(int iParam0, char* sParam1)
{
	TASK::TASK_PLAY_ANIM(iParam0, "SCRIPT_PROC@ROBBERIES@SHOP@NBX_GUNSMITH@DOWNSTAIRS", sParam1, 4f, -4f, -1, 67108880, 0f, false, 65536, false, 0, false);
}

int func_1201()
{
	if (func_120(16))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_62.f_170))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (ENTITY::IS_ENTITY_DEAD(Local_62.f_390[0 /*126*/]))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_1202(int* iParam0, int* iParam1)
{
	__LIB_3__::func_662("SR_NG_O_GOTHIRDFLOOR", 7500, 0, 0, -1, -1, 0);
	__LIB_3__::func_652(2711.768f, -1293.569f, 59.46251f, &(Local_62.f_1482[0]), 408396114, 0, 0, 0);
	__LIB_0__::func_325(&(iParam0->f_1));
	__LIB_0__::func_325(&(iParam1->f_1));
}

void func_1205()
{
	__LIB_14__::func_629("PRNBG_PTOOLONG", 0);
	__LIB_14__::func_629("PRNBG_PTOOLONG2", 0);
	__LIB_14__::func_629("PRNBG_PTOOLONG3", 0);
}

void func_1206()
{
	if (func_335(262144))
	{
		return;
	}
	__LIB_3__::func_732(0);
	__LIB_8__::func_336(&(Local_62.f_1518), "PRNBG_GD_AIM2", Local_62.f_390[0 /*126*/], Global_35, 0, 0, 1, 1);
	func_533(262144);
}

void func_1207(int* iParam0, var uParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	if (!__LIB_14__::func_606(Global_35, Local_62.f_1247[4 /*2*/]))
	{
		return;
	}
	if (iLocal_28 == 0)
	{
		if (__LIB_4__::func_172(*iParam0, 0, 0, 0, 1))
		{
			func_533(32768);
		}
	}
	else if (__LIB_4__::func_172(*iParam0, 0, 0, 0, 1))
	{
		if (!func_276(&(Local_62.f_1392[4 /*3*/]), 5f, 0, "TIMER_SDNGUN_PLAYER_LOITER_REACT_LINE_READY"))
		{
			return;
		}
	}
	if (((__LIB_14__::func_622("PRNBG_GD_AIM2") || __LIB_14__::func_622("SRNG_ILO_DG_AT3")) || __LIB_14__::func_622("SRNG_ILO_DG_JT3")) || __LIB_14__::func_622("PRNBG_PLRTHRT2"))
	{
		return;
	}
	if (!func_335(32768))
	{
		if (!func_276(&(Local_62.f_1392[4 /*3*/]), 10f, 0, "TIMER_SDNGUN_PLAYER_LOITER_REACT_LINE_READY"))
		{
			return;
		}
	}
	__LIB_0__::func_37(&(Local_62.f_1392[4 /*3*/]));
	switch (iLocal_28)
	{
		case 0:
			if (func_221(16))
			{
				__LIB_8__::func_336(&(Local_62.f_1518), "PRNBG_PTOOLONG", *iParam0, Global_35, 0, 0, 1, 1);
			}
			else
			{
				__LIB_8__::func_336(&(Local_62.f_1518), "PRNBG_IG3_WAIT1", *iParam0, Global_35, 0, 0, 1, 1);
				func_1200(*iParam0, "LINE_02_SHOPKEEP");
			}
			__LIB_2__::func_828(uParam1, 1);
			func_1149(32768);
			__LIB_9__::func_758(1);
			break;
		case 1:
			if (func_221(16))
			{
				__LIB_8__::func_336(&(Local_62.f_1518), "PRNBG_PTOOLONG2", *iParam0, Global_35, 0, 0, 1, 1);
			}
			else
			{
				__LIB_8__::func_336(&(Local_62.f_1518), "PRNBG_IG3_WAIT2", *iParam0, Global_35, 0, 0, 1, 1);
				func_1200(*iParam0, "LINE_03_SHOPKEEP");
			}
			__LIB_9__::func_758(2);
			break;
		case 2:
			if (func_221(16))
			{
				__LIB_8__::func_336(&(Local_62.f_1518), "PRNBG_PTOOLONG3", *iParam0, Global_35, 0, 0, 1, 1);
			}
			else
			{
				__LIB_8__::func_336(&(Local_62.f_1518), "PRNBG_IG3_WAIT3", *iParam0, Global_35, 0, 0, 1, 1);
				func_1200(*iParam0, "LINE_02_SHOPKEE4");
			}
			__LIB_9__::func_758(6);
			break;
		case 6:
			break;
	}
}

void func_1208()
{
	__LIB_14__::func_629("PRNBG_IG3_WAIT1", 0);
	__LIB_14__::func_629("PRNBG_IG3_WAIT2", 0);
	__LIB_14__::func_629("PRNBG_IG3_WAIT3", 0);
}

void func_1209()
{
	if (iLocal_28 == 0)
	{
		return;
	}
	__LIB_9__::func_758(0);
}

void func_1210()
{
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_62.f_1512[2]))
	{
		return;
	}
	Local_62.f_1512[2] = __LIB_3__::func_408(__LIB_8__::func_39(), func_1654(), 36.57f, 0f, -1f, 1);
	TASK::_SET_SCENARIO_POINT_FLAG(Local_62.f_1512[2], 23, true);
	TASK::_SET_SCENARIO_POINT_FLAG(Local_62.f_1512[2], 25, true);
}

void func_1211(int* iParam0)
{
	func_1232();
	if (func_221(2048))
	{
		return;
	}
	func_591(*iParam0, 2717.313f, -1290.773f, 59.34498f, -151.47f, 2, 1073741824 /* Float: 2f */);
	TASK::_TASK_START_SCENARIO_IN_PLACE_2(*iParam0, Local_62.f_1512[2], __LIB_8__::func_46(), -1, false, -1f, false);
}

void func_1212(int* iParam0)
{
	if (func_335(65536))
	{
		return;
	}
	if (!__LIB_14__::func_606(Global_35, Local_62.f_1247[5 /*2*/]))
	{
		return;
	}
	if (!__LIB_0__::func_181())
	{
		__LIB_8__::func_336(&(Local_62.f_1518), "SRNG_A_3F", Global_35, *iParam0, 0, 0, 1, 1);
	}
	else
	{
		__LIB_8__::func_336(&(Local_62.f_1518), "SRNG_J_3F", Global_35, *iParam0, 0, 0, 1, 1);
	}
	func_533(65536);
}

void func_1213()
{
	int iVar0;
	char* sVar1;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_62.f_1216[1]))
	{
		return;
	}
	iVar0 = Local_62.f_1216[1];
	sVar1 = func_911(1);
	__LIB_9__::func_798(iVar0, "PED_GUARD_UPSTAIRS", Local_62.f_390[1 /*126*/], sVar1, 1);
}

bool func_1214(int* iParam0)
{
	if (__LIB_0__::func_51(&(iParam0->f_9), 1024))
	{
		return true;
	}
	if (__LIB_14__::func_642(*iParam0, 1435919172, 0))
	{
		return false;
	}
	if (!__LIB_14__::func_606(Global_35, Local_62.f_1290))
	{
		return false;
	}
	func_1656(*iParam0, Global_35, -1);
	func_518(&(iParam0->f_9), 1024);
	return true;
}

bool func_1215(int* iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	if (PED::IS_PED_SHOOTING(Global_35))
	{
		iVar0 = 1;
	}
	if (__LIB_14__::func_606(Global_35, Local_62.f_1247[7 /*2*/]))
	{
		iVar0 = 1;
	}
	if (__LIB_14__::func_606(Global_35, Local_62.f_1247[8 /*2*/]))
	{
		func_517(256);
		iVar0 = 1;
	}
	if (func_308(*iParam0, 0, &(iParam0->f_89), &iVar1, 0, 0))
	{
		if ((((iVar1 == 2 || iVar1 == 8) || iVar1 == 4) || iVar1 == 1) || (bParam1 && iVar1 == 8192))
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 1)
	{
		__LIB_3__::func_732(0);
		if (!__LIB_14__::func_607(Local_62.f_1216[1], "react_calm", "SCENE_RHDGUN_HOLDUP"))
		{
			func_1220(*iParam0, 0);
		}
		func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
		return true;
	}
	return false;
}

void func_1216(int* iParam0)
{
	if (__LIB_0__::func_51(&(iParam0->f_9), 1024))
	{
		return;
	}
	if (__LIB_14__::func_617(iParam0) && !func_280(Local_62.f_1216[1], "SCENE_SDNGUN_GUARD_UPSTAIRS", 0.985f))
	{
		return;
	}
	PED::_0x923583741DC87BCE(*iParam0, "arthur_healthy");
	PED::_0x89F5E7ADECCCB49C(*iParam0, "Brave");
	func_518(&(iParam0->f_9), 1024);
}

bool func_1217(int iParam0)
{
	int iVar0;
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, 0, false);
	if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		return true;
	}
	return false;
}

void func_1218(int* iParam0)
{
	int iVar0;
	__LIB_2__::func_357(*iParam0, Global_36, 3, 1, 3);
	WEAPON::SET_CURRENT_PED_WEAPON(*iParam0, joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("WORLD_HUMAN_GUARD_LAZY"), -1, true, 0, -1f, false);
	__LIB_1__::func_474(*iParam0, &iVar0, 2f, 2f, 1, 1);
}

bool func_1219(int* iParam0)
{
	int iVar0;
	int iVar1;
	if (func_221(4096))
	{
		return true;
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(*iParam0, -1))
	{
		return false;
	}
	if (!func_276(&(iParam0->f_120), 1f, 0, "guardUpstairs.timerGenericA"))
	{
		return false;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(*iParam0, &iVar0, true, 0, true);
	if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(*iParam0, joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
		WEAPON::SET_CURRENT_PED_WEAPON(*iParam0, joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
		return false;
	}
	if (__LIB_0__::func_665(Global_35, *iParam0, 1, 1) < 1.5f)
	{
		TASK::TASK_CONFRONT(*iParam0, Global_35, 2);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
		__LIB_1__::func_474(*iParam0, &iVar1, 0, 0, 1, 1);
	}
	__LIB_0__::func_37(&(iParam0->f_120));
	func_224(4096);
	return true;
}

void func_1220(int iParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return;
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (func_120(256))
	{
	}
	TASK::TASK_COMBAT_PED(0, Global_35, iParam1, 0);
	__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
}

bool func_1221(int* iParam0)
{
	if (!__LIB_2__::func_227(3f, 1, 0, 0))
	{
		return false;
	}
	switch (iLocal_28)
	{
		case 0:
			__LIB_8__::func_336(&(Local_62.f_1518), "PRNBG_GU_WRN1", *iParam0, Global_35, 0, 0, 1, 1);
			__LIB_9__::func_758(1);
			break;
		case 1:
			__LIB_8__::func_336(&(Local_62.f_1518), "PRNBG_GU_WRN2", *iParam0, Global_35, 0, 0, 1, 1);
			__LIB_9__::func_758(2);
			break;
		case 2:
			__LIB_8__::func_336(&(Local_62.f_1518), "PRNBG_GU_WRN3", *iParam0, Global_35, 0, 0, 1, 1);
			__LIB_9__::func_758(6);
			return true;
	}
	return false;
}

void func_1222(int* iParam0)
{
	int iVar0;
	if (func_120(128))
	{
		return;
	}
	if (__LIB_14__::func_623(Local_62.f_1216[1], "SCENE_SDNGUN_GUARD_UPSTAIRS", "PBL_react_calm_guard"))
	{
		if (__LIB_14__::func_617(iParam0))
		{
			if (!func_280(Local_62.f_1216[1], "SCENE_SDNGUN_GUARD_UPSTAIRS", 0.313f))
			{
				return;
			}
		}
	}
	if (!__LIB_2__::func_65(*iParam0, 0))
	{
		iVar0 = 0;
		func_1220(*iParam0, iVar0);
		func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
	}
	func_517(128);
}

void func_1223()
{
	if (func_221(8192))
	{
		return;
	}
	func_277(Local_62.f_1216[2], "BOOL_STOP_TABLE_IDLE", 1, "SCENE_SDNGUN_GAMBLER_GROUP");
	__LIB_14__::func_611(&(Local_62.f_390[2 /*126*/]), 273, 0);
	__LIB_14__::func_611(&(Local_62.f_390[3 /*126*/]), 273, 0);
	__LIB_14__::func_611(&(Local_62.f_390[4 /*126*/]), 273, 0);
	func_224(8192);
}

bool func_1224(int* iParam0, int* iParam1, int* iParam2)
{
	if ((func_1658(iParam0, &(Local_62.f_1216[3]), "SCENE_SDNGUN_GAMBLER_OWNER", "HIDDENPED_SDNGUN_GAMBLER_OWNER") && func_1658(iParam1, &(Local_62.f_1216[4]), "SCENE_SDNGUN_GAMBLER_MIDDLE", "HIDDENPED_SDNGUN_GAMBLER_MIDDLE")) && func_1658(iParam2, &(Local_62.f_1216[5]), "SCENE_SDNGUN_GAMBLER_WUSS", "HIDDENPED_SDNGUN_GAMBLER_WUSS"))
	{
		return true;
	}
	return false;
}

void func_1225(int* iParam0, int* iParam1, char[4] cParam2, var uParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	__LIB_9__::func_793(iParam4, sParam5, sParam6, 1);
	func_277(iParam4, sParam7, 1, sParam6);
	__LIB_8__::func_336(&(Local_62.f_1518), cParam2, *iParam0, *iParam1, 0, 0, 1, 1);
	func_297(*iParam0, *iParam1, uParam3, iParam9, vLocal_59, 1, 0);
	if (iParam8 != 262144)
	{
		func_224(iParam8);
	}
}

void func_1226(int* iParam0, int* iParam1)
{
	float fVar0;
	if (iLocal_28 == 6)
	{
		return;
	}
	if (!__LIB_14__::func_606(Global_35, Local_62.f_1290))
	{
		return;
	}
	fVar0 = 8f;
	if (iLocal_28 == 0)
	{
		fVar0 = 3f;
	}
	if (!func_276(&(Local_62.f_1392[4 /*3*/]), fVar0, 0, "TIMER_SDNGUN_PLAYER_LOITER_REACT_LINE_READY"))
	{
		return;
	}
	switch (iLocal_28)
	{
		case 0:
			__LIB_3__::func_662("SR_NG_O_ROBTABLE", 7500, 0, 0, -1, -1, 0);
			__LIB_3__::func_652(2717.586f, -1286.138f, 60.15688f, &(Local_62.f_1482[1]), 408396114, 0, 0, 0);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_62.f_1482[1], "SR_SD_BLIP_MONEY");
			__LIB_0__::func_37(&(Local_62.f_1392[4 /*3*/]));
			__LIB_9__::func_758(1);
			break;
		case 1:
			if (!func_559(Local_62.f_1216[3], "PBL_line_01", "SCENE_SDNGUN_GAMBLER_OWNER", 0))
			{
				return;
			}
			func_1225(iParam0, &Global_35, "PRNBH_IG5_STAL2", &(iParam0->f_64), Local_62.f_1216[3], "PBL_line_01", "SCENE_SDNGUN_GAMBLER_OWNER", "BOOL_STOP_COWER_IDLE_POS_01", 16384, -1);
			func_553(Local_62.f_1216[5], "PBL_line_01", "SCENE_SDNGUN_GAMBLER_WUSS");
			__LIB_0__::func_37(&(Local_62.f_1392[4 /*3*/]));
			__LIB_9__::func_758(2);
			break;
		case 2:
			if (!func_559(Local_62.f_1216[5], "PBL_line_01", "SCENE_SDNGUN_GAMBLER_WUSS", 0))
			{
				return;
			}
			func_1225(iParam1, &Global_35, "PRNBH_IG5_OFFER", &(iParam1->f_64), Local_62.f_1216[5], "PBL_line_01", "SCENE_SDNGUN_GAMBLER_WUSS", "BOOL_STOP_COWER_IDLE", 131072, -1);
			func_553(Local_62.f_1216[5], "PBL_line_01", "SCENE_SDNGUN_GAMBLER_WUSS");
			__LIB_0__::func_37(&(Local_62.f_1392[4 /*3*/]));
			__LIB_9__::func_758(3);
			break;
		case 3:
			if (!func_559(Local_62.f_1216[5], "PBL_line_02", "SCENE_SDNGUN_GAMBLER_WUSS", 0))
			{
				return;
			}
			func_1225(iParam1, &Global_35, "PRNBH_IG5_STAL3", &(iParam1->f_64), Local_62.f_1216[5], "PBL_line_02", "SCENE_SDNGUN_GAMBLER_WUSS", "BOOL_STOP_COWER_IDLE", 131072, -1);
			__LIB_0__::func_37(&(Local_62.f_1392[4 /*3*/]));
			__LIB_9__::func_758(6);
			break;
		case 6:
			break;
	}
}

void func_1227(int* iParam0, var uParam1, int* iParam2, var uParam3, int* iParam4, var uParam5)
{
	func_1659(iParam0, uParam1, "SSG_AILOG1_G0", "SSG_JILOG1_G0", "SSG_AILOG1_A0", "SSG_JILOG1_A0");
	func_1659(iParam2, uParam3, "SSG_AILOG2_G0", "SSG_JILOG2_G0", "SSG_AILOG2_A0", "SSG_JILOG2_A0");
	func_1659(iParam4, uParam5, "SSG_AILOG3_G0", "SSG_JILOG3_G0", "SSG_AILOG3_A0", "SSG_JILOG3_A0");
}

void func_1228(int* iParam0, int* iParam1, int* iParam2)
{
	func_924(iParam0);
	func_924(iParam1);
	func_924(iParam2);
}

void func_1229(int* iParam0, var uParam1, int* iParam2, var uParam3, int* iParam4, var uParam5)
{
	func_1660(iParam0, uParam1, "PRNBG_AILO_QG1", "PRNBG_JILO_QG1", "PRNBG_AILO_TG1", "PRNBG_JILO_TG1");
	func_1660(iParam2, uParam3, "PRNBG_AILO_QG2", "PRNBG_JILO_QG2", "PRNBG_AILO_TG2", "PRNBG_JILO_TG2");
	func_1660(iParam4, uParam5, "PRNBG_AILO_QG3", "PRNBG_JILO_QG3", "PRNBG_AILO_TG3", "PRNBG_JILO_TG3");
}

bool func_1230(int* iParam0, int* iParam1, int* iParam2)
{
	if ((!__LIB_0__::func_51(&(iParam0->f_9), 1) && !__LIB_0__::func_51(&(iParam1->f_9), 1)) && !__LIB_0__::func_51(&(iParam2->f_9), 1))
	{
		return true;
	}
	return false;
}

void func_1231()
{
	func_928(Local_62.f_1216[3], "PED_GAMBLER_OWNER", Local_62.f_390[2 /*126*/], "SCENE_SDNGUN_GAMBLER_OWNER", 1, 0);
	func_928(Local_62.f_1216[4], "PED_GAMBLER_MIDDLE", Local_62.f_390[3 /*126*/], "SCENE_SDNGUN_GAMBLER_MIDDLE", 1, 0);
	func_928(Local_62.f_1216[5], "PED_GAMBLER_WUSS", Local_62.f_390[4 /*126*/], "SCENE_SDNGUN_GAMBLER_WUSS", 1, 0);
}

void func_1232()
{
	func_1661();
	__LIB_14__::func_616(Local_62.f_1216[2], "SCENE_SDNGUN_GAMBLER_GROUP");
}

bool func_1233(int* iParam0, int* iParam1, int* iParam2)
{
	if ((!__LIB_0__::func_51(&(iParam0->f_9), 1) && !__LIB_0__::func_51(&(iParam1->f_9), 1)) && __LIB_0__::func_51(&(iParam2->f_9), 1))
	{
		return true;
	}
	return false;
}

bool func_1234(int* iParam0, int* iParam1, int* iParam2)
{
	if ((!__LIB_0__::func_51(&(iParam0->f_9), 1) && __LIB_0__::func_51(&(iParam1->f_9), 1)) && !__LIB_0__::func_51(&(iParam2->f_9), 1))
	{
		return true;
	}
	return false;
}

bool func_1235(int* iParam0, int* iParam1, int* iParam2)
{
	if ((__LIB_0__::func_51(&(iParam0->f_9), 1) && !__LIB_0__::func_51(&(iParam1->f_9), 1)) && !__LIB_0__::func_51(&(iParam2->f_9), 1))
	{
		return true;
	}
	return false;
}

bool func_1236(int* iParam0, int* iParam1, int iParam2, char* sParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	if (func_221(268435456))
	{
		return false;
	}
	if (__LIB_14__::func_623(iParam2, "PBL_open_safe_A", sParam3))
	{
		bVar0 = true;
	}
	else if (__LIB_14__::func_623(iParam2, "PBL_open_safe_B", sParam3))
	{
		bVar1 = true;
	}
	else if (__LIB_14__::func_623(iParam2, "PBL_open_safe_C", sParam3))
	{
		bVar2 = true;
	}
	if ((!bVar0 && !bVar1) && !bVar2)
	{
		return false;
	}
	if (func_1243(&(iParam0->f_9), &(Local_62.f_1475[1]), 0) && bVar1)
	{
		__LIB_14__::func_629("PRNBH_IG6_KILL2", 0);
		return true;
	}
	if (func_1243(&(iParam1->f_9), &(Local_62.f_1475[2]), 0) && bVar2)
	{
		__LIB_14__::func_629("PRNBH_IG6_KILL3", 0);
		return true;
	}
	return false;
}

bool func_1237(int iParam0, char* sParam1, float fParam2)
{
	if (__LIB_14__::func_623(iParam0, sParam1, "PBL_open_safe_A"))
	{
		*fParam2 = 0.876f;
		return true;
	}
	else if (__LIB_14__::func_623(iParam0, sParam1, "PBL_open_safe_B"))
	{
		*fParam2 = 0.874f;
		return true;
	}
	else if (__LIB_14__::func_623(iParam0, sParam1, "PBL_open_safe_C"))
	{
		*fParam2 = 0.737f;
		return true;
	}
	else if (__LIB_14__::func_623(iParam0, sParam1, "PBL_open_safe_D"))
	{
		*fParam2 = 1f;
		return true;
	}
	else if (__LIB_14__::func_623(iParam0, sParam1, "PBL_open_safe_E"))
	{
		*fParam2 = 0.718f;
		return true;
	}
	return false;
}

char* func_1238()
{
	return "LevDes_NBX_GunSafe";
}

void func_1239(int iParam0)
{
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(Local_62.f_1512[4]))
	{
		Local_62.f_1512[4] = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(func_926(), func_1662(), 2f, 0, false);
		return;
	}
}

bool func_1240(int* iParam0, int* iParam1, int* iParam2)
{
	if ((func_1663(iParam0, &(Local_62.f_1216[3]), "SCENE_SDNGUN_GAMBLER_OWNER") && func_1663(iParam1, &(Local_62.f_1216[4]), "SCENE_SDNGUN_GAMBLER_MIDDLE")) && func_1663(iParam2, &(Local_62.f_1216[5]), "SCENE_SDNGUN_GAMBLER_WUSS"))
	{
		return true;
	}
	return false;
}

void func_1241(int* iParam0, int* iParam1, int* iParam2)
{
	if (__LIB_14__::func_606(Global_35, Local_62.f_1247[9 /*2*/]))
	{
		return;
	}
	if (!__LIB_14__::func_606(Global_35, Local_62.f_1247[12 /*2*/]))
	{
		if (!func_221(134217728))
		{
			func_1664(iParam0, 10f, 10f, &(Local_62.f_1216[3]), "SCENE_SDNGUN_GAMBLER_OWNER", "PBL_relaxed_idle_pos_01", "PBL_exit_pos_01", "BOOL_STOP_COWER_IDLE_POS_01", 16384, 0.8607f);
		}
		else
		{
			func_1664(iParam0, 10f, 10f, &(Local_62.f_1216[3]), "SCENE_SDNGUN_GAMBLER_OWNER", "PBL_relaxed_idle_pos_02", "PBL_exit_pos_02", "BOOL_STOP_COWER_IDLE_POS_02", 32768, 0.87f);
		}
	}
	if (__LIB_14__::func_606(Global_35, Local_62.f_1247[10 /*2*/]))
	{
		return;
	}
	if (!__LIB_14__::func_606(Global_35, Local_62.f_1247[11 /*2*/]))
	{
		func_1664(iParam1, 12f, 10f, &(Local_62.f_1216[4]), "SCENE_SDNGUN_GAMBLER_MIDDLE", "PBL_relaxed_idle", "PBL_EXIT", "BOOL_STOP_COWER_IDLE", 65536, 0.955f);
	}
	func_1664(iParam2, 20f, 12f, &(Local_62.f_1216[5]), "SCENE_SDNGUN_GAMBLER_WUSS", "PBL_relaxed_idle", "PBL_EXIT", "BOOL_STOP_COWER_IDLE", 131072, 0.8664f);
}

void func_1242()
{
	func_1665(&(Local_62.f_390[2 /*126*/]), "PRNBG_G1_SHOTN1");
	func_1665(&(Local_62.f_390[3 /*126*/]), "PRNBG_G2_SHOTN1");
	func_1665(&(Local_62.f_390[4 /*126*/]), "PRNBG_G3_SHOTN1");
}

bool func_1243(var uParam0, var uParam1, int iParam2)
{
	*uParam1 = iParam2;
	if (!__LIB_0__::func_51(uParam0, 16384))
	{
		return false;
	}
	return true;
}

bool func_1244()
{
	if (!PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_PLAYER_NBX_GUN_GAMB_SAFE")))
	{
		return false;
	}
	if (!func_120(16384))
	{
		func_412();
		func_517(16384);
		__LIB_0__::func_325(&(Local_62.f_1482[2]));
		func_1666();
		func_254();
	}
	return true;
}

bool func_1245()
{
	if (func_120(65536))
	{
		return false;
	}
	if (!__LIB_14__::func_620(Global_35, "ObjectExchange"))
	{
		return false;
	}
	__LIB_1__::func_616(__LIB_1__::func_760(joaat("REWARD_BANKROB_SAFE_LARGE"), 0, -1), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
	func_517(65536);
	return true;
}

void func_1246(int* iParam0, var uParam1, char* sParam2, char* sParam3, char* sParam4, float fParam5)
{
	if (__LIB_0__::func_51(&(iParam0->f_9), 1))
	{
		return;
	}
	if (!__LIB_0__::func_51(&(iParam0->f_9), 8388608))
	{
		if (func_559(*uParam1, sParam3, sParam2, 0))
		{
			__LIB_9__::func_793(*uParam1, sParam3, sParam2, 1);
			func_277(*uParam1, sParam4, 1, sParam2);
			func_518(&(iParam0->f_9), 8388608);
		}
	}
	else if (!__LIB_0__::func_51(&(iParam0->f_9), 4194304))
	{
		if (__LIB_14__::func_623(*uParam1, sParam2, sParam3))
		{
			if (func_280(*uParam1, sParam2, fParam5))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(*iParam0, Global_35, 3, 32768, -1082130432 /* Float: -1f */, -1, 0);
				}
				__LIB_2__::func_506(*uParam1, sParam2);
				func_518(&(iParam0->f_9), 4194304);
			}
		}
		else if (!__LIB_14__::func_617(iParam0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(*iParam0, Global_35, 3, 32768, -1082130432 /* Float: -1f */, -1, 0);
			}
			__LIB_2__::func_506(*uParam1, sParam2);
			func_518(&(iParam0->f_9), 4194304);
		}
	}
}

void func_1247()
{
	if (!MAP::DOES_BLIP_EXIST(Local_62.f_1482[0]))
	{
		return;
	}
	if (__LIB_3__::func_138(Global_35, MISC::GET_HASH_KEY(func_1668())) || WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_REPEATER_WINCHESTER"), 0, false))
	{
		__LIB_0__::func_915(joaat("WEAPON_REPEATER_WINCHESTER"));
		__LIB_0__::func_325(&(Local_62.f_1482[0]));
	}
}

void func_1248(int* iParam0, int* iParam1)
{
	if (!func_44(1) && !func_221(32))
	{
		if (FIRE::IS_ENTITY_ON_FIRE(*iParam0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
			func_928(Local_62.f_1216[3], "pedGunsmith", *iParam0, "SCENE_RHDGUN_BASEMENT_GUNSMITH", 1, 0);
			func_928(Local_62.f_1216[1], "pedGunsmith", *iParam0, "SCENE_RHDGUN_HOLDUP", 1, 0);
			func_224(32);
		}
	}
	if (!__LIB_0__::func_51(&(iParam1->f_9), 1) && !__LIB_0__::func_51(&(iParam1->f_9), 131072))
	{
		if (FIRE::IS_ENTITY_ON_FIRE(*iParam1))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
			func_928(Local_62.f_1216[2], "pedCaptive", *iParam1, "SCENE_RHDGUN_BASEMENT_CAPTIVE", 1, 0);
			func_518(&(iParam1->f_9), 131072);
		}
	}
}

void func_1249()
{
	if ((Local_62.f_1620 % 30) != 0)
	{
		return;
	}
	if (!func_221(1024))
	{
		return;
	}
	if (func_55(134217728))
	{
		return;
	}
	if (__LIB_14__::func_606(Global_35, Local_62.f_1247[8 /*2*/]) || __LIB_14__::func_606(Global_35, Local_62.f_1247[7 /*2*/]))
	{
		func_592(Local_62.f_170, "PRRGS_STAIRS", 0);
	}
	else
	{
		func_140(0, 0);
		__LIB_0__::func_172(Local_62.f_1247[11 /*2*/]);
		__LIB_0__::func_172(Local_62.f_1247[12 /*2*/]);
	}
}

void func_1250(int* iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	if (!func_44(8388608))
	{
		if (PED::_IS_PED_HOGTIED(*iParam0) || PED::_IS_PED_LASSOED(*iParam0))
		{
			func_140(1, 0);
			__LIB_0__::func_172(Local_62.f_1247[11 /*2*/]);
			__LIB_0__::func_172(Local_62.f_1247[12 /*2*/]);
			func_91(8388608);
			func_1258(&(iParam0->f_13), &(iParam0->f_85), 0);
			__LIB_2__::func_351(&(iParam0->f_85[0 /*11*/]), 0);
			__LIB_2__::func_351(&(iParam0->f_85[1 /*11*/]), 0);
		}
	}
	else if (!func_44(268435456) || !__LIB_14__::func_642(*iParam0, 1435919172, 0))
	{
		if ((!PED::_IS_PED_HOGTIED(*iParam0) && !PED::_IS_PED_LASSOED(*iParam0)) && !PED::IS_PED_RAGDOLL(*iParam0))
		{
			func_1324(iParam0, 0, 0);
		}
	}
}

void func_1251(int* iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	if (!__LIB_0__::func_51(&(iParam0->f_9), 2048))
	{
		if (PED::_IS_PED_HOGTIED(*iParam0) || PED::_IS_PED_LASSOED(*iParam0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
			func_518(&(iParam0->f_9), 2048);
		}
	}
	else if (!__LIB_0__::func_51(&(iParam0->f_9), 4194304) || !__LIB_14__::func_642(*iParam0, 1435919172, 0))
	{
		if ((!PED::_IS_PED_HOGTIED(*iParam0) && !PED::_IS_PED_LASSOED(*iParam0)) && !PED::IS_PED_RAGDOLL(*iParam0))
		{
			func_1321(iParam0);
		}
	}
	if (__LIB_1__::func_322("SRGH_REAATTK"))
	{
		if (PED::_IS_PED_HOGTIED(*iParam0) || PED::_IS_PED_LASSOED(*iParam0))
		{
			__LIB_8__::func_111("SRGH_REAATTK", 0);
		}
	}
}

void func_1252(int* iParam0, int* iParam1, var uParam2, int iParam3)
{
	int iVar0;
	if (__LIB_0__::func_293(44))
	{
		return;
	}
	switch (uParam2->f_8)
	{
		case 0:
			if (!Local_62.f_1247[8 /*2*/].f_1)
			{
				return;
			}
			func_524(2, iParam3);
			break;
		case 2:
			if (!__LIB_0__::func_51(&(iParam1->f_9), 1) && !func_221(16777216))
			{
				return;
			}
			func_524(3, iParam3);
			break;
		case 3:
			if (!func_1671(Global_35))
			{
				return;
			}
			if (!func_276(&(Local_62.f_1392[18 /*3*/]), 15f, 0, "TIMER_RHDGUN_CREATE_WITNESS"))
			{
				return;
			}
			func_524(4, iParam3);
			break;
		case 4:
			if (!func_1671(Global_35))
			{
				return;
			}
			if (!func_885(uParam2, iParam3))
			{
				return;
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1323.764f, -1321.145f, 76.88058f, 1f, -1, 0.25f, 0, -178.27f);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, 3f, 0.25f, -1f);
			__LIB_1__::func_474(*uParam2, &iVar0, 0, 0, 1, 1);
			func_524(5, iParam3);
			break;
		case 5:
			if (!func_1671(Global_35))
			{
				return;
			}
			if (!__LIB_14__::func_606(*uParam2, Local_62.f_1284))
			{
				return;
			}
			__LIB_0__::func_267(1);
			LAW::_0x710448D44A64C213(1);
			PED::SET_PED_CONFIG_FLAG(*uParam2, 146, false);
			PED::SET_PED_CONFIG_FLAG(*uParam2, 148, false);
			LAW::_0xD7494DED50C6EF52(PLAYER::PLAYER_ID(), joaat("CRIME_ROBBERY"), 2);
			PED::_0xC6C4E15CF7D52FEA(*uParam2, 1000f);
			LAW::_0x10827B5A0AAC56A7(PLAYER::PLAYER_ID(), joaat("CRIME_ROBBERY"), *uParam2);
			LAW::_0xF0B67BAD53C35BD9(*uParam2, Global_35, *uParam2, Global_36, joaat("CRIME_ROBBERY"));
			func_524(6, iParam3);
			break;
		case 6:
			if (__LIB_14__::func_606(Global_35, Local_62.f_1247[7 /*2*/]) || __LIB_14__::func_606(Global_35, Local_62.f_1247[8 /*2*/]))
			{
				return;
			}
			if (!func_56(Global_35, 0))
			{
				return;
			}
			if (!__LIB_2__::func_215(*uParam2, Global_35, 0, 8f, 0))
			{
				return;
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam2, false);
			PED::SET_PED_CONFIG_FLAG(*uParam2, 146, false);
			PED::SET_PED_CONFIG_FLAG(*uParam2, 190, true);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam2, Global_35, 0, -1f, -1f, -1f);
			func_297(*uParam2, Global_35, &(uParam2->f_38), 5000, vLocal_59, 1, 0);
			func_524(7, iParam3);
			break;
		case 7:
			__LIB_0__::func_267(1);
			LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_ROBBERY"), 0, 0, 0, 0, 0, 0, 0);
			LAW::_0xD7494DED50C6EF52(PLAYER::PLAYER_ID(), joaat("CRIME_ROBBERY"), 1);
			PED::_0xC6C4E15CF7D52FEA(*uParam2, 1000f);
			LAW::_0x10827B5A0AAC56A7(PLAYER::PLAYER_ID(), joaat("CRIME_ROBBERY"), *uParam2);
			func_524(19, iParam3);
			break;
		case 19:
			break;
	}
}

void func_1253()
{
	bool bVar0;
	if (__LIB_14__::func_606(Global_35, Local_62.f_1247[8 /*2*/]) && func_221(16384))
	{
		bVar0 = true;
	}
	else if (__LIB_14__::func_606(Global_35, Local_62.f_1247[10 /*2*/]))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_BLOCK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
	else
	{
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_BLOCK"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), true);
	}
}

void func_1254(int* iParam0)
{
	float fVar0;
	if ((Local_62.f_1620 % 10) != 0)
	{
		return;
	}
	if (func_221(16777216))
	{
		__LIB_0__::func_325(&(iParam0->f_1));
		return;
	}
	fVar0 = __LIB_0__::func_665(Global_35, *iParam0, 1, 1);
	if (!__LIB_0__::func_51(&(iParam0->f_9), -2147483648))
	{
		if (fVar0 > 30f)
		{
			__LIB_0__::func_325(&(iParam0->f_1));
			func_518(&(iParam0->f_9), -2147483648);
		}
	}
	else if (fVar0 < 25f)
	{
		__LIB_2__::func_73(*iParam0, &(iParam0->f_1), -89429847, 580546400, 0, 0);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iParam0->f_1, "SR_RG_BLIP_CAPTIVE1");
		func_870(&(iParam0->f_9), -2147483648);
	}
}

void func_1255(int* iParam0)
{
	if (func_221(4096))
	{
		return;
	}
	if (!func_99(256))
	{
		return;
	}
	__LIB_2__::func_279(*iParam0, 1);
	func_1672(iParam0, &(Local_62.f_1226[2]), &(Local_62.f_1215));
	func_224(4096);
	PED::_0xAE6004120C18DF97(*iParam0, 0, 0);
}

void func_1256(int* iParam0)
{
	if (!func_221(4096))
	{
		return;
	}
	if (func_221(4194304))
	{
		return;
	}
	if (((!__LIB_14__::func_620(*iParam0, "CaptiveUpFromBed") && !__LIB_14__::func_643(*iParam0, func_1290(), "afraid_loop_a_captive")) && !__LIB_14__::func_643(*iParam0, func_1290(), "afraid_loop_b_captive")) && !__LIB_14__::func_643(*iParam0, "script_proc@robberies@shop@rhodes@gunsmith@inside_downstairs", "afraid_loop_victim"))
	{
		return;
	}
	PHYSICS::_0x522FA3F490E2F7AC(Local_62.f_1215, 1, 1);
	func_224(4194304);
}

bool func_1257(int* iParam0, int* iParam1)
{
	int iVar0;
	if (!func_221(4096))
	{
		return false;
	}
	if (func_221(16777216))
	{
		return false;
	}
	if (PHYSICS::DOES_ROPE_EXIST(Local_62.f_1215))
	{
		return false;
	}
	__LIB_3__::func_732(0);
	AUDIO::_PLAY_SOUND_FROM_POSITION("RHODES_SHACKLE_BULLET", 1322.188f, -1319.516f, 74.04163f, "PRRGS_Sounds", false, 0, false, 0);
	__LIB_0__::func_325(&(iParam1->f_1));
	func_224(16777216);
	__LIB_4__::func_261(Local_62, 4096);
	PED::_0xAE6004120C18DF97(*iParam1, 0, 1);
	func_553(Local_62.f_1216[2], "PBL_captor_shot_02", "SCENE_RHDGUN_BASEMENT_CAPTIVE");
	__LIB_14__::func_635(&(iParam1->f_89), iVar0);
	__LIB_14__::func_635(&(iParam0->f_14), iVar0);
	__LIB_1__::func_148(&(iParam0->f_214));
	func_587(&(Local_62.f_1247[9 /*2*/]), 1324.447f, -1324.27f, 74.87282f, 0f, 0f, 4.138497f, 1.968806f, 3.670543f, 1.865833f, "VOL_RHDGUN_BETWEEN_SPEECH_SPEAKERS");
	return true;
}

void func_1258(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		__LIB_5__::func_687(uParam1, 1, 0);
		func_518(uParam0, 2);
		func_518(uParam0, 4);
		func_518(uParam0, 8);
	}
	else
	{
		__LIB_5__::func_687(uParam1, 0, 0);
		func_870(uParam0, 2);
		func_870(uParam0, 4);
		func_870(uParam0, 8);
	}
}

void func_1259(int* iParam0)
{
	if (func_221(65536))
	{
		__LIB_9__::func_793(Local_62.f_1216[3], "PBL_shoot_chains_standing", "SCENE_RHDGUN_BASEMENT_GUNSMITH", 1);
		if (__LIB_14__::func_607(Local_62.f_1216[2], "cower_loop_a", "SCENE_RHDGUN_BASEMENT_CAPTIVE"))
		{
			__LIB_9__::func_793(Local_62.f_1216[2], "PBL_shoot_chains_standing_cower", "SCENE_RHDGUN_BASEMENT_CAPTIVE", 1);
			func_277(Local_62.f_1216[2], "BOOL_cower_loop_a", 1, "SCENE_RHDGUN_BASEMENT_CAPTIVE");
		}
		else
		{
			__LIB_9__::func_793(Local_62.f_1216[2], "PBL_shoot_chains_standing", "SCENE_RHDGUN_BASEMENT_CAPTIVE", 1);
		}
		func_277(Local_62.f_1216[3], "BOOL_afraid_loop_a", 1, "SCENE_RHDGUN_BASEMENT_GUNSMITH");
		func_277(Local_62.f_1216[2], "BOOL_afraid_loop_a", 1, "SCENE_RHDGUN_BASEMENT_CAPTIVE");
	}
	else
	{
		__LIB_9__::func_793(Local_62.f_1216[3], "PBL_shoot_chains_sitting", "SCENE_RHDGUN_BASEMENT_GUNSMITH", 1);
		__LIB_9__::func_793(Local_62.f_1216[2], "PBL_shoot_chains_sitting", "SCENE_RHDGUN_BASEMENT_CAPTIVE", 1);
		func_277(Local_62.f_1216[3], "BOOL_afraid_loop_b", 1, "SCENE_RHDGUN_BASEMENT_GUNSMITH");
		func_277(Local_62.f_1216[2], "BOOL_afraid_loop_b", 1, "SCENE_RHDGUN_BASEMENT_CAPTIVE");
	}
	func_1674();
	__LIB_8__::func_336(&(Local_62.f_1518), "SRGKIGP3f", *iParam0, Global_35, 0, 0, 1, 0);
	func_297(Local_62.f_170, *iParam0, &(Local_62.f_170.f_42), 10000, vLocal_59, 0, 0);
	func_1274(1);
}

void func_1260()
{
	int iVar0;
	char* sVar1;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_62.f_1216[4]))
	{
		return;
	}
	iVar0 = Local_62.f_1216[4];
	sVar1 = func_810(4);
	__LIB_9__::func_798(iVar0, "pedCaptive", Local_62.f_390[0 /*126*/], sVar1, 1);
	func_277(iVar0, "bStopBedLoop", 0, sVar1);
	func_277(iVar0, "bStopAfraidLoop", 0, sVar1);
}

void func_1261(int iParam0)
{
	bool bVar0;
	if (!func_221(1073741824 /* Float: 2f */))
	{
		return;
	}
	if (func_44(1) || PED::_IS_PED_HOGTIED(iParam0))
	{
		bVar0 = true;
	}
	else
	{
		if (!func_276(&(Local_62.f_1392[13 /*3*/]), 5f, 0, "TIMER_RHDGUN_CHECK_SHACKLES_CAN_BREAK_AFTER_ATTACK"))
		{
			return;
		}
		if (!PED::IS_PED_IN_COMBAT(iParam0, 0))
		{
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		return;
	}
	if (PHYSICS::DOES_ROPE_EXIST(Local_62.f_1215))
	{
		PHYSICS::_0x522FA3F490E2F7AC(Local_62.f_1215, 1, 1);
		func_418(1073741824 /* Float: 2f */);
	}
}

bool func_1262(int* iParam0)
{
	bool bVar0;
	if (func_221(16777216))
	{
		return false;
	}
	if (func_221(131072))
	{
		return false;
	}
	if (!func_221(16384))
	{
		return false;
	}
	if (!__LIB_14__::func_606(Global_35, Local_62.f_1247[8 /*2*/]) && func_221(8192))
	{
		if (func_276(&(Local_62.f_1392[7 /*3*/]), 2f, 1, "TIMER_RHDGUN_CAPTIVE_SITS_AGAIN_AFTER_PLAYER_LEAVE"))
		{
			__LIB_3__::func_732(0);
			__LIB_8__::func_336(&(Local_62.f_1518), "PRRGS_LEAVE_B", *iParam0, Global_35, 0, 0, 1, 1);
			func_224(1048576);
			bVar0 = true;
		}
	}
	else
	{
		__LIB_0__::func_37(&(Local_62.f_1392[7 /*3*/]));
	}
	if (func_221(32768))
	{
		if (func_276(&(Local_62.f_1392[4 /*3*/]), 5f, 1, "TIMER_RHDGUN_PLAYER_DOES_NOTHING_AFTER_PLEAS"))
		{
			bVar0 = true;
		}
	}
	if (func_1322())
	{
		func_517(16);
	}
	if (func_120(16))
	{
		if (!func_1675())
		{
			func_224(524288);
			__LIB_14__::func_633(0);
			__LIB_8__::func_336(&(Local_62.f_1518), "PRRGS_STEALB1", *iParam0, Global_35, 0, 0, 1, 1);
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		func_1676();
		func_224(131072);
		return true;
	}
	return false;
}

bool func_1263()
{
	if (func_221(262144))
	{
		return false;
	}
	if (func_221(65536))
	{
		return false;
	}
	if (!func_221(1048576))
	{
		return false;
	}
	if (__LIB_14__::func_606(Global_35, Local_62.f_1247[8 /*2*/]))
	{
		if (func_276(&(Local_62.f_1392[8 /*3*/]), 2f, 1, "TIMER_RHDGUN_CAPTIVE_STANDS_UP_AFTER_PLAYER_RETURN"))
		{
			func_1677();
			func_224(262144);
			return true;
		}
	}
	else
	{
		__LIB_0__::func_37(&(Local_62.f_1392[8 /*3*/]));
	}
	return false;
}

void func_1264(int* iParam0, int iParam1)
{
	if (__LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 1))
	{
		return;
	}
	if (!func_221(16384))
	{
		return;
	}
	if (func_221(16777216))
	{
		return;
	}
	if (!func_221(8192))
	{
		return;
	}
	if (!func_1678(32) && !func_1678(64))
	{
		if (iParam1 == 8 && Global_1935630.f_44 != joaat("WEAPON_LASSO"))
		{
			if (__LIB_0__::func_75(&(Local_62.f_1392[15 /*3*/])))
			{
				if (!__LIB_1__::func_285(&(Local_62.f_1392[15 /*3*/]), 3f))
				{
					return;
				}
			}
			__LIB_0__::func_37(&(Local_62.f_1392[15 /*3*/]));
			func_1679(32);
		}
		else if (iParam1 == 4)
		{
			if (__LIB_0__::func_75(&(Local_62.f_1392[16 /*3*/])))
			{
				if (!__LIB_1__::func_285(&(Local_62.f_1392[16 /*3*/]), 1.5f))
				{
					return;
				}
			}
			__LIB_0__::func_37(&(Local_62.f_1392[16 /*3*/]));
			func_1679(64);
		}
		else
		{
			return;
		}
	}
	if (!func_335(67108864))
	{
		func_1680();
		__LIB_8__::func_336(&(Local_62.f_1518), "SRGK_AIMDOWN1", *iParam0, Global_35, 0, 0, 1, 1);
		func_533(67108864);
	}
	if (func_1678(32))
	{
		func_1681(iParam0, iParam1);
	}
	else if (func_1678(64))
	{
		func_1682(iParam0);
	}
}

void func_1265(int* iParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	if (!func_221(16384))
	{
		return;
	}
	if (func_221(16777216))
	{
		return;
	}
	if (!func_221(8192))
	{
		return;
	}
	if (AUDIO::_0x1ECC76792F661CF5("SRGKHESIT2"))
	{
		return;
	}
	if (!__LIB_0__::func_51(&(iParam0->f_9), 262144))
	{
		if (iParam1 != 8 && iParam1 != 4)
		{
			return;
		}
		if (Global_1935630.f_44 == joaat("WEAPON_LASSO"))
		{
			return;
		}
		if (__LIB_0__::func_75(&(Local_62.f_1392[17 /*3*/])))
		{
			if (!__LIB_1__::func_285(&(Local_62.f_1392[17 /*3*/]), 3f))
			{
				return;
			}
		}
	}
	func_518(&(iParam0->f_9), 262144);
	if (!func_335(33554432))
	{
		func_1683();
		__LIB_8__::func_336(&(Local_62.f_1518), "SRGH_AIMDOWN1", *iParam0, Global_35, 0, 0, 1, 1);
		func_533(33554432);
	}
	iVar0 = Local_62.f_1216[2];
	sVar1 = "SCENE_RHDGUN_BASEMENT_CAPTIVE";
	switch (iParam0->f_11)
	{
		case 0:
			if (func_221(65536))
			{
				if (!func_559(iVar0, "PBL_react_to_gunfire_a", sVar1, 0))
				{
					return;
				}
				func_1684();
				__LIB_9__::func_793(iVar0, "PBL_react_to_gunfire_a", sVar1, 1);
				func_553(iVar0, "PBL_cower_flinch_a", sVar1);
				func_553(iVar0, "PBL_cower_to_afraid_a", sVar1);
				func_277(iVar0, "BOOL_afraid_loop_a", 1, sVar1);
				func_277(iVar0, "BOOL_cower_loop_a", 0, sVar1);
				__LIB_14__::func_638(1, &(iParam0->f_11), "CAPTIVE");
			}
			else
			{
				if (!func_559(iVar0, "PBL_react_to_gunfire_b", sVar1, 0))
				{
					return;
				}
				func_1684();
				__LIB_9__::func_793(iVar0, "PBL_react_to_gunfire_b", sVar1, 1);
				func_553(iVar0, "PBL_cower_flinch_b", sVar1);
				func_553(iVar0, "PBL_cower_to_afraid_b", sVar1);
				func_277(iVar0, "BOOL_afraid_loop_b", 1, sVar1);
				func_277(iVar0, "BOOL_cower_loop_b", 0, sVar1);
				__LIB_14__::func_638(1, &(iParam0->f_11), "CAPTIVE");
			}
			break;
		case 1:
			if (func_221(65536))
			{
				if (!__LIB_14__::func_643(*iParam0, func_1290(), "cower_loop_a_captive"))
				{
					return;
				}
				if (func_276(&(Local_62.f_1392[9 /*3*/]), 6f, 0, "TIMER_RHDGUN_CAPTIVE_RETURNS_TO_AFRAID_LOOP_FROM_AIM"))
				{
					__LIB_9__::func_793(iVar0, "PBL_cower_to_afraid_a", sVar1, 1);
					func_277(iVar0, "BOOL_afraid_loop_a", 0, sVar1);
					func_277(iVar0, "BOOL_cower_loop_a", 1, sVar1);
					__LIB_14__::func_638(2, &(iParam0->f_11), "CAPTIVE");
				}
				else if (!func_221(2097152))
				{
					if (func_1686(*iParam0, &(iParam0->f_89)))
					{
						__LIB_0__::func_37(&(Local_62.f_1392[9 /*3*/]));
						__LIB_9__::func_793(iVar0, "PBL_cower_flinch_a", sVar1, 1);
						func_224(2097152);
					}
				}
			}
			else
			{
				if (!__LIB_14__::func_643(*iParam0, func_1290(), "cower_loop_b_captive"))
				{
					return;
				}
				if (func_276(&(Local_62.f_1392[9 /*3*/]), 6f, 0, "TIMER_RHDGUN_CAPTIVE_RETURNS_TO_AFRAID_LOOP_FROM_AIM"))
				{
					__LIB_9__::func_793(iVar0, "PBL_cower_to_afraid_b", sVar1, 1);
					func_277(iVar0, "BOOL_afraid_loop_b", 0, sVar1);
					func_277(iVar0, "BOOL_cower_loop_b", 1, sVar1);
					__LIB_14__::func_638(2, &(iParam0->f_11), "CAPTIVE");
				}
				else if (!func_221(2097152))
				{
					if (func_1686(*iParam0, &(iParam0->f_89)))
					{
						__LIB_0__::func_37(&(Local_62.f_1392[9 /*3*/]));
						__LIB_9__::func_793(iVar0, "PBL_cower_flinch_b", sVar1, 1);
						func_224(2097152);
					}
				}
			}
			break;
		case 2:
			if (func_221(65536))
			{
				if (!func_1687())
				{
					return;
				}
				__LIB_14__::func_638(3, &(iParam0->f_11), "CAPTIVE");
			}
			else
			{
				if (!func_1688())
				{
					return;
				}
				__LIB_14__::func_638(3, &(iParam0->f_11), "CAPTIVE");
			}
			break;
		case 3:
			func_870(&(iParam0->f_9), 262144);
			__LIB_1__::func_148(&(Local_62.f_1392[17 /*3*/]));
			func_553(iVar0, "PBL_cower_flinch_a", sVar1);
			func_553(iVar0, "PBL_cower_to_afraid_a", sVar1);
			func_553(iVar0, "PBL_cower_flinch_b", sVar1);
			func_553(iVar0, "PBL_cower_to_afraid_b", sVar1);
			func_1301();
			__LIB_14__::func_638(0, &(iParam0->f_11), "CAPTIVE");
			break;
	}
}

void func_1266(int* iParam0, int* iParam1)
{
	if (!func_1322())
	{
		return;
	}
	if (!__LIB_2__::func_227(-3f, 1, 0, 0))
	{
		return;
	}
	if ((__LIB_14__::func_607(Local_62.f_1216[3], "Speech", "SCENE_RHDGUN_BASEMENT_GUNSMITH") || __LIB_14__::func_607(Local_62.f_1216[3], "shoot_chains_standing", "SCENE_RHDGUN_BASEMENT_GUNSMITH")) || __LIB_14__::func_607(Local_62.f_1216[3], "shoot_chains_sitting", "SCENE_RHDGUN_BASEMENT_GUNSMITH"))
	{
		return;
	}
	if (__LIB_0__::func_51(&(iParam1->f_9), 1) || !__LIB_14__::func_606(*iParam1, Local_62.f_1290))
	{
		if (func_44(2097152))
		{
			return;
		}
		if (func_335(16))
		{
			return;
		}
		__LIB_8__::func_336(&(Local_62.f_1518), "SRGK_STEAL_2", *iParam0, Global_35, 0, 0, 1, 1);
		func_91(2097152);
	}
	else
	{
		if (!func_221(16384))
		{
			return;
		}
		if (!func_44(2097152))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
			{
				__LIB_8__::func_336(&(Local_62.f_1518), "SRGK_STEAL_1", *iParam0, Global_35, 0, 0, 1, 1);
				func_91(2097152);
			}
		}
		if (!__LIB_0__::func_51(&(iParam1->f_9), 524288))
		{
			if (ENTITY::IS_ENTITY_DEAD(*iParam0))
			{
				__LIB_8__::func_336(&(Local_62.f_1518), "SRGH_STEAL_1", *iParam1, Global_35, 0, 0, 1, 1);
				func_518(&(iParam1->f_9), 524288);
			}
		}
	}
}

void func_1267(int iParam0, char* sParam1)
{
	float fVar0;
	fVar0 = 1f;
	if (func_1689(iParam0, sParam1))
	{
		fVar0 = 0.5f;
	}
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0, false)) && ANIMSCENE::_GET_ANIM_SCENE_RATE(iParam0) != fVar0)
	{
		ANIMSCENE::SET_ANIM_SCENE_RATE(iParam0, fVar0);
	}
}

bool func_1268(int* iParam0, int* iParam1, int iParam2, char* sParam3)
{
	if (__LIB_0__::func_51(&(iParam0->f_9), 1))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(*iParam1))
	{
		return false;
	}
	__LIB_0__::func_172(Local_62.f_1247[14 /*2*/]);
	__LIB_2__::func_506(Local_62.f_1216[2], "SCENE_RHDGUN_BASEMENT_CAPTIVE");
	func_1690(*iParam0, &(iParam0->f_117), "Captive");
	func_1289();
	__LIB_14__::func_616(iParam2, sParam3);
	func_1274(0);
	func_518(&(iParam0->f_9), 1);
	return true;
}

bool func_1269(int* iParam0)
{
	if (!__LIB_14__::func_643(*iParam0, func_1290(), "speech_captive"))
	{
		return false;
	}
	if (!__LIB_14__::func_606(Global_35, Local_62.f_1247[9 /*2*/]))
	{
		__LIB_0__::func_37(&(Local_62.f_1392[11 /*3*/]));
		return false;
	}
	if (!func_276(&(Local_62.f_1392[11 /*3*/]), 3f, 1, "TIMER_RHDGUN_PLAYER_IN_WAY_OF_SPEECH"))
	{
		return false;
	}
	func_1321(iParam0);
	__LIB_2__::func_506(Local_62.f_1216[2], "SCENE_RHDGUN_BASEMENT_CAPTIVE");
	__LIB_0__::func_172(Local_62.f_1247[9 /*2*/]);
	return true;
}

void func_1270(int* iParam0, int* iParam1, int iParam2, int iParam3)
{
	if (!func_221(16384))
	{
		return;
	}
	func_1691(*iParam0, &(iParam0->f_85), &(iParam0->f_13), iParam2);
	func_1692(*iParam1, &(iParam1->f_30), &(iParam1->f_10), iParam3);
}

void func_1271(int* iParam0, int* iParam1)
{
	if (func_221(2048))
	{
		return;
	}
	if (Local_62.f_1247[8 /*2*/].f_1)
	{
		return;
	}
	if (!func_221(1024))
	{
		return;
	}
	if (__LIB_0__::func_94(*iParam0, 1323.024f, -1324.815f, 73.94163f, 1) > 3.43f)
	{
		return;
	}
	if (!__LIB_2__::func_1(*iParam0, 0, 1))
	{
		__LIB_8__::func_336(&(Local_62.f_1518), "PRRGS_STAIRSDIE", *iParam1, Global_35, 0, 0, 1, 1);
		func_224(2048);
	}
}

bool func_1272(int* iParam0, int* iParam1)
{
	if (func_44(1))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(*iParam1))
	{
		return false;
	}
	__LIB_2__::func_506(Local_62.f_1216[3], "SCENE_RHDGUN_BASEMENT_GUNSMITH");
	func_1690(*iParam0, &(iParam0->f_210), "Gunsmith");
	__LIB_0__::func_172(Local_62.f_1247[13 /*2*/]);
	if (__LIB_14__::func_619(Local_62.f_1216[2], "SCENE_RHDGUN_BASEMENT_CAPTIVE"))
	{
		func_553(Local_62.f_1216[2], "PBL_react_to_gunfire_a", "SCENE_RHDGUN_BASEMENT_CAPTIVE");
		func_553(Local_62.f_1216[2], "PBL_cower_to_afraid_a", "SCENE_RHDGUN_BASEMENT_CAPTIVE");
	}
	func_1274(0);
	func_91(1);
	return true;
}

void func_1273(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	OBJECT::DELETE_OBJECT(&iParam0);
}

void func_1274(bool bParam0)
{
	if (bParam0)
	{
		Local_62.f_1247[15 /*2*/] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 1324.354f, -1324.107f, 74.83517f, 0f, 0f, 4.721779f, 0.652349f, 0.72217f, 0.912012f);
		Local_62.f_1247[16 /*2*/] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 1324.724f, -1323.136f, 74.92301f, 0f, 0f, -15.92929f, 1.390828f, 1.667549f, 1.001023f);
	}
	else
	{
		__LIB_0__::func_172(Local_62.f_1247[15 /*2*/]);
		__LIB_0__::func_172(Local_62.f_1247[16 /*2*/]);
	}
}

bool func_1275(int* iParam0, int* iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0) || !ENTITY::IS_ENTITY_DEAD(*iParam1))
	{
		return false;
	}
	func_518(&(iParam1->f_9), 1);
	func_91(1);
	__LIB_0__::func_172(Local_62.f_1247[14 /*2*/]);
	__LIB_0__::func_172(Local_62.f_1247[11 /*2*/]);
	__LIB_0__::func_172(Local_62.f_1247[12 /*2*/]);
	func_254();
	func_928(Local_62.f_1216[2], "pedCaptive", *iParam1, "SCENE_RHDGUN_BASEMENT_CAPTIVE", 1, 0);
	func_928(Local_62.f_1216[4], "pedCaptive", *iParam1, "SCENE_RHDGUN_VICTIM_ALONE", 1, 0);
	func_928(Local_62.f_1216[3], "pedGunsmith", *iParam0, "SCENE_RHDGUN_BASEMENT_GUNSMITH", 1, 0);
	func_140(1, 0);
	return true;
}

void func_1276(int iParam0, int iParam1)
{
	if (!func_221(8388608))
	{
		return;
	}
	if (func_221(67108864))
	{
		return;
	}
	if (func_44(268435456))
	{
		return;
	}
	if (__LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 4194304))
	{
		return;
	}
	if (!func_335(134217728))
	{
		if (AUDIO::_0x1ECC76792F661CF5("SRGKIGP3g"))
		{
			return;
		}
		if ((func_1671(Global_35) || __LIB_14__::func_606(Global_35, Local_62.f_1247[7 /*2*/])) || __LIB_14__::func_606(Global_35, Local_62.f_1247[8 /*2*/]))
		{
			__LIB_8__::func_336(&(Local_62.f_1518), "PRRGS_MISSHIM", iParam0, iParam1, 0, 0, 1, 1);
		}
		func_533(134217728);
	}
	else if (!func_335(268435456))
	{
		if (AUDIO::_0x1ECC76792F661CF5("PRRGS_MISSHIM"))
		{
			return;
		}
		if ((func_1671(Global_35) || __LIB_14__::func_606(Global_35, Local_62.f_1247[7 /*2*/])) || __LIB_14__::func_606(Global_35, Local_62.f_1247[8 /*2*/]))
		{
			__LIB_8__::func_336(&(Local_62.f_1518), "SRGKIGP3h", iParam1, iParam0, 0, 0, 1, 1);
		}
		func_533(268435456);
	}
}

void func_1277(int iParam0)
{
	if (func_335(536870912))
	{
		return;
	}
	if (!func_221(8388608))
	{
		return;
	}
	if (__LIB_14__::func_606(Global_35, Local_62.f_1247[8 /*2*/]) || __LIB_14__::func_606(Global_35, Local_62.f_1247[7 /*2*/]))
	{
		return;
	}
	func_596(&iParam0, "PRRGS_A_DONE", "PRRGS_J_DONE", 1);
	func_533(536870912);
}

void func_1278(int* iParam0)
{
	if ((Local_62.f_1620 % 30) != 0)
	{
		return;
	}
	if (func_221(16777216))
	{
		return;
	}
	if (__LIB_0__::func_665(Global_35, *iParam0, 1, 1) < 2.3f)
	{
		func_297(*iParam0, Global_35, &(iParam0->f_64), -1, vLocal_59, 1, 0);
	}
}

void func_1279(int* iParam0)
{
	bool bVar0;
	if (func_44(1))
	{
		return;
	}
	if ((Local_62.f_1620 % 15) != 0)
	{
		return;
	}
	if (func_44(268435456))
	{
		return;
	}
	if (func_221(16777216))
	{
		return;
	}
	if (!func_221(16384))
	{
		return;
	}
	if (__LIB_14__::func_623(Local_62.f_1216[3], "PBL_enter_intimidation", "SCENE_RHDGUN_BASEMENT_GUNSMITH") || iLocal_46 != 61)
	{
		return;
	}
	if (func_335(16777216))
	{
		if (func_276(&(Local_62.f_1392[14 /*3*/]), 5f, 0, "TIMER_RHDGUN_GUNSMITH_AMBUSH_FROM_LOITER"))
		{
			bVar0 = true;
		}
	}
	if (!PED::IS_PED_FACING_PED(Global_35, *iParam0, 90f))
	{
		if (func_276(&(Local_62.f_1392[0 /*3*/]), 17f, 0, "TIMER_RHDGUN_FREE_PASSER_N_CLERK_AMBUSH"))
		{
			bVar0 = true;
		}
	}
	else
	{
		__LIB_0__::func_37(&(Local_62.f_1392[0 /*3*/]));
	}
	if (!bVar0)
	{
		return;
	}
	__LIB_0__::func_37(&(Local_62.f_1392[0 /*3*/]));
	func_536(*iParam0, joaat("WEAPON_MELEE_KNIFE"), 1, 0);
	func_1324(iParam0, 0, 0);
}

bool func_1280()
{
	if (func_62(16777216))
	{
		return false;
	}
	if ((Local_62.f_1620 % 10) != 0)
	{
		return false;
	}
	if (!func_62(8388608))
	{
		return false;
	}
	if (func_65())
	{
		return false;
	}
	func_39(16777216);
	return true;
}

void func_1281()
{
	if (__LIB_14__::func_620(Local_62.f_390[0 /*126*/], "stand"))
	{
		func_224(65536);
	}
	else if (__LIB_14__::func_620(Local_62.f_390[0 /*126*/], "sit"))
	{
		func_418(65536);
	}
}

bool func_1282(int iParam0)
{
	if (!__LIB_18__::func_845(iParam0))
	{
		return false;
	}
	__LIB_2__::func_506(Local_62.f_1216[3], "SCENE_RHDGUN_BASEMENT_GUNSMITH");
	func_796(3, func_810(3), 0, "PBL_afraid_loop_a");
	func_91(33554432);
	return true;
}

void func_1283()
{
	func_1693();
	func_1684();
}

void func_1284()
{
	func_553(Local_62.f_1216[3], "PBL_shoot_chains_standing", "SCENE_RHDGUN_BASEMENT_GUNSMITH");
	func_553(Local_62.f_1216[2], "PBL_shoot_chains_standing", "SCENE_RHDGUN_BASEMENT_CAPTIVE");
	func_553(Local_62.f_1216[2], "PBL_shoot_chains_standing_cower", "SCENE_RHDGUN_BASEMENT_CAPTIVE");
}

Vector3 func_1286()
{
	return 1321.206f, -1322.903f, 74.742f;
}

void func_1287(var uParam0, vector3 vParam1, int iParam4)
{
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam4, 0, false))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(*uParam0))
	{
		return;
	}
	*uParam0 = MAP::_BLIP_ADD_FOR_COORD(-1383961727, vParam1);
}

Vector3 func_1288()
{
	return 1324.2f, -1322.66f, 74.94f;
}

void func_1289()
{
	int iVar0;
	char* sVar1;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_62.f_1216[3]))
	{
		return;
	}
	iVar0 = Local_62.f_1216[3];
	sVar1 = func_810(3);
	__LIB_9__::func_798(iVar0, "pedGunsmith", Local_62.f_170, sVar1, 1);
	__LIB_9__::func_798(iVar0, "pedCaptive", Local_62.f_390[0 /*126*/], sVar1, 1);
	__LIB_14__::func_621(iVar0, "objPhoto", Local_62.f_1226[1], sVar1, 1);
	func_277(iVar0, "BOOL_wait_loop", 0, sVar1);
	func_277(iVar0, "BOOL_afraid_loop_a", 0, sVar1);
	func_277(iVar0, "BOOL_afraid_loop_b", 0, sVar1);
	func_277(iVar0, "BOOL_cry_loop", 0, sVar1);
	func_277(iVar0, "BOOL_cry_loop_captive_dead", 0, sVar1);
}

char* func_1290()
{
	return "script_proc@robberies@shop@rhodes@gunsmith@inside_basement_reshoot";
}

void func_1292()
{
	func_277(Local_62.f_1216[3], "BOOL_wait_loop", 1, "SCENE_RHDGUN_BASEMENT_GUNSMITH");
	func_277(Local_62.f_1216[2], "BOOL_wait_loop", 1, "SCENE_RHDGUN_BASEMENT_CAPTIVE");
}

bool func_1293(char* sParam0)
{
	if (!func_1694())
	{
		return false;
	}
	if (!func_559(Local_62.f_1216[3], sParam0, "SCENE_RHDGUN_BASEMENT_GUNSMITH", 0))
	{
		return false;
	}
	if (__LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 262144))
	{
		return false;
	}
	if (func_1678(32) || func_1678(64))
	{
		return false;
	}
	return true;
}

void func_1294()
{
	func_277(Local_62.f_1216[3], "BOOL_afraid_loop_a", 1, "SCENE_RHDGUN_BASEMENT_GUNSMITH");
	func_277(Local_62.f_1216[3], "BOOL_afraid_loop_a_reset", 0, "SCENE_RHDGUN_BASEMENT_GUNSMITH");
	func_1695();
}

bool func_1295()
{
	if (__LIB_14__::func_607(Local_62.f_1216[3], "afraid_loop_a_reset", "SCENE_RHDGUN_BASEMENT_GUNSMITH"))
	{
		return true;
	}
	return false;
}

bool func_1296(char* sParam0, bool bParam1)
{
	if (!func_1696())
	{
		if (!bParam1)
		{
			return false;
		}
		if (!func_1300())
		{
			return false;
		}
	}
	if (!func_559(Local_62.f_1216[2], sParam0, "SCENE_RHDGUN_BASEMENT_CAPTIVE", 0))
	{
		return false;
	}
	if (__LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 262144))
	{
		return false;
	}
	if (func_1678(32) || func_1678(64))
	{
		return false;
	}
	return true;
}

void func_1297(int iParam0)
{
	__LIB_0__::func_37(&(Local_62.f_1392[12 /*3*/]));
	Local_62.f_1473[0] = iParam0;
}

void func_1298()
{
	__LIB_9__::func_793(Local_62.f_1216[3], "PBL_afraid_loop_a_reset", "SCENE_RHDGUN_BASEMENT_GUNSMITH", 1);
	func_277(Local_62.f_1216[3], "BOOL_afraid_loop_a", 0, "SCENE_RHDGUN_BASEMENT_GUNSMITH");
	func_277(Local_62.f_1216[3], "BOOL_afraid_loop_a_reset", 1, "SCENE_RHDGUN_BASEMENT_GUNSMITH");
}

void func_1299()
{
	func_277(Local_62.f_1216[2], "BOOL_afraid_loop_a", 1, "SCENE_RHDGUN_BASEMENT_CAPTIVE");
	func_277(Local_62.f_1216[2], "BOOL_afraid_loop_a_reset", 0, "SCENE_RHDGUN_BASEMENT_CAPTIVE");
	func_1697();
}

bool func_1300()
{
	if (__LIB_14__::func_607(Local_62.f_1216[2], "afraid_loop_a_reset", "SCENE_RHDGUN_BASEMENT_CAPTIVE"))
	{
		return true;
	}
	return false;
}

void func_1301()
{
	__LIB_9__::func_793(Local_62.f_1216[2], "PBL_afraid_loop_a_reset", "SCENE_RHDGUN_BASEMENT_CAPTIVE", 1);
	func_277(Local_62.f_1216[2], "BOOL_afraid_loop_a", 0, "SCENE_RHDGUN_BASEMENT_CAPTIVE");
	func_277(Local_62.f_1216[2], "BOOL_afraid_loop_a_reset", 1, "SCENE_RHDGUN_BASEMENT_CAPTIVE");
}

bool func_1302()
{
	if (__LIB_2__::func_1(Local_62.f_170, 0, 1))
	{
		if (!func_559(Local_62.f_1216[3], "PBL_plr_leaves", "SCENE_RHDGUN_BASEMENT_GUNSMITH", 0))
		{
			return false;
		}
	}
	if (!func_559(Local_62.f_1216[2], "PBL_plr_leaves", "SCENE_RHDGUN_BASEMENT_CAPTIVE", 0))
	{
		return false;
	}
	return true;
}

bool func_1303()
{
	if (func_65())
	{
		return false;
	}
	if (func_221(16777216))
	{
		return false;
	}
	func_39(33554432);
	return true;
}

void func_1304()
{
	__LIB_9__::func_793(Local_62.f_1216[3], "PBL_plr_leaves", "SCENE_RHDGUN_BASEMENT_GUNSMITH", 1);
	__LIB_9__::func_793(Local_62.f_1216[2], "PBL_plr_leaves", "SCENE_RHDGUN_BASEMENT_CAPTIVE", 1);
	func_277(Local_62.f_1216[3], "BOOL_afraid_loop_a", 1, "SCENE_RHDGUN_BASEMENT_GUNSMITH");
	func_277(Local_62.f_1216[2], "BOOL_afraid_loop_a", 1, "SCENE_RHDGUN_BASEMENT_CAPTIVE");
}

void func_1305()
{
	func_553(Local_62.f_1216[3], "PBL_shoot_chains_sitting", "SCENE_RHDGUN_BASEMENT_GUNSMITH");
	func_553(Local_62.f_1216[2], "PBL_shoot_chains_sitting", "SCENE_RHDGUN_BASEMENT_CAPTIVE");
}

char* func_1306()
{
	return "afraid_loop_b_captor";
}

char* func_1307()
{
	return "afraid_loop_b_captive";
}

bool func_1308(char* sParam0)
{
	if (!func_1698())
	{
		return false;
	}
	if (!func_559(Local_62.f_1216[2], sParam0, "SCENE_RHDGUN_BASEMENT_CAPTIVE", 0))
	{
		return false;
	}
	if (__LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 262144))
	{
		return false;
	}
	if (func_1678(32) || func_1678(64))
	{
		return false;
	}
	return true;
}

void func_1309()
{
	func_277(Local_62.f_1216[2], "BOOL_afraid_loop_b", 1, "SCENE_RHDGUN_BASEMENT_CAPTIVE");
	func_277(Local_62.f_1216[2], "BOOL_afraid_loop_b_reset", 0, "SCENE_RHDGUN_BASEMENT_CAPTIVE");
	func_1699();
}

bool func_1310()
{
	if (__LIB_14__::func_607(Local_62.f_1216[2], "afraid_loop_b_reset", "SCENE_RHDGUN_BASEMENT_CAPTIVE"))
	{
		return true;
	}
	return false;
}

void func_1311()
{
	__LIB_9__::func_793(Local_62.f_1216[2], "PBL_afraid_loop_b_reset", "SCENE_RHDGUN_BASEMENT_CAPTIVE", 1);
	func_277(Local_62.f_1216[2], "BOOL_afraid_loop_b", 0, "SCENE_RHDGUN_BASEMENT_CAPTIVE");
	func_277(Local_62.f_1216[2], "BOOL_afraid_loop_b_reset", 1, "SCENE_RHDGUN_BASEMENT_CAPTIVE");
}

bool func_1312(char* sParam0)
{
	if (!func_1700())
	{
		return false;
	}
	if (!func_559(Local_62.f_1216[3], sParam0, "SCENE_RHDGUN_BASEMENT_GUNSMITH", 0))
	{
		return false;
	}
	return true;
}

void func_1313()
{
	func_277(Local_62.f_1216[3], "BOOL_bars_loop", 1, "SCENE_RHDGUN_BASEMENT_GUNSMITH");
	func_277(Local_62.f_1216[3], "BOOL_bars_loop_reset", 0, "SCENE_RHDGUN_BASEMENT_GUNSMITH");
	func_1701();
}

void func_1314(int* iParam0, int* iParam1)
{
	if (!__LIB_14__::func_606(Global_35, Local_62.f_1247[8 /*2*/]))
	{
		return;
	}
	if (!__LIB_2__::func_227(0, 1, 0, 0))
	{
		return;
	}
	if (__LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 262144))
	{
		return;
	}
	if (func_1678(32) || func_1678(64))
	{
		return;
	}
	switch (iLocal_48)
	{
		case 10:
			__LIB_13__::func_858(11);
			break;
		case 11:
			if (!func_1702(*iParam0, "PRRGS_G_LOIT1", 5f, &(iParam0->f_42), 6000))
			{
				return;
			}
			__LIB_13__::func_858(12);
			break;
		case 12:
			if (!func_1702(*iParam0, "PRRGS_G_LOIT2", 5f, &(iParam0->f_42), 4000))
			{
				return;
			}
			__LIB_13__::func_858(13);
			break;
		case 13:
			if (!func_1702(*iParam1, "PRRGS_C_LOIT1", 5f, &(iParam1->f_64), 8000))
			{
				return;
			}
			__LIB_13__::func_858(14);
			break;
		case 14:
			if (!func_1702(*iParam1, "PRRGS_C_LOIT2", 5f, &(iParam1->f_64), 7000))
			{
				return;
			}
			__LIB_13__::func_858(15);
			break;
		case 15:
			if (!func_1702(*iParam0, "PRRGS_G_LOIT3", 5f, &(iParam0->f_42), 8000))
			{
				return;
			}
			__LIB_13__::func_858(16);
			break;
		case 16:
			if (!func_1702(*iParam1, "PRRGS_C_LOIT3", 3f, &(iParam1->f_64), 8000))
			{
				return;
			}
			func_533(16777216);
			__LIB_13__::func_858(20);
			break;
		case 20:
			break;
	}
}

bool func_1315()
{
	if (__LIB_14__::func_607(Local_62.f_1216[3], "afraid_loop_b_reset", "SCENE_RHDGUN_BASEMENT_GUNSMITH"))
	{
		return true;
	}
	return false;
}

void func_1316()
{
	__LIB_9__::func_793(Local_62.f_1216[3], "PBL_afraid_loop_b_reset", "SCENE_RHDGUN_BASEMENT_GUNSMITH", 1);
	func_277(Local_62.f_1216[3], "BOOL_afraid_loop_b", 0, "SCENE_RHDGUN_BASEMENT_GUNSMITH");
	func_277(Local_62.f_1216[3], "BOOL_afraid_loop_b_reset", 1, "SCENE_RHDGUN_BASEMENT_GUNSMITH");
}

bool func_1317()
{
	if (func_559(Local_62.f_1216[3], "PBL_plr_returns", "SCENE_RHDGUN_BASEMENT_GUNSMITH", 0) && func_559(Local_62.f_1216[2], "PBL_plr_returns", "SCENE_RHDGUN_BASEMENT_CAPTIVE", 0))
	{
		return true;
	}
	return false;
}

void func_1318()
{
	__LIB_9__::func_793(Local_62.f_1216[3], "PBL_plr_returns", "SCENE_RHDGUN_BASEMENT_GUNSMITH", 1);
	__LIB_9__::func_793(Local_62.f_1216[2], "PBL_plr_returns", "SCENE_RHDGUN_BASEMENT_CAPTIVE", 1);
	func_277(Local_62.f_1216[3], "BOOL_afraid_loop_b", 1, "SCENE_RHDGUN_BASEMENT_GUNSMITH");
	func_277(Local_62.f_1216[2], "BOOL_afraid_loop_b", 1, "SCENE_RHDGUN_BASEMENT_CAPTIVE");
}

char* func_1319()
{
	return "afraid_loop_a_captive";
}

void func_1320(int* iParam0)
{
	if (func_221(536870912))
	{
		return;
	}
	if (func_335(268435456))
	{
		return;
	}
	if (!__LIB_14__::func_643(*iParam0, func_1290(), "exit_captive"))
	{
		return;
	}
	__LIB_8__::func_336(&(Local_62.f_1518), "SRGKIGP3h", *iParam0, Local_62.f_170, 0, 0, 1, 1);
	func_224(536870912);
	func_533(268435456);
}

void func_1321(int* iParam0)
{
	vector3 vVar0;
	int iVar3;
	if (!__LIB_2__::func_1(*iParam0, 0, 1))
	{
		return;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(*iParam0, false, false) };
	TASK::OPEN_SEQUENCE_TASK(&iVar3);
	if (vVar0.z < 76f && BUILTIN::VDIST(vVar0, 1328.591f, -1326.324f, 76.8759f) > 1.5f)
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1328.591f, -1326.324f, 76.8759f, 2f, 20000, 0.25f, 1, 40000f);
	}
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1322.038f, -1324.203f, 76.8871f, 2f, 20000, 0.25f, 1, 40000f);
	TASK::TASK_SMART_FLEE_COORD(0, func_1703(), 1000f, -1, false, 1077936128);
	__LIB_1__::func_474(*iParam0, &iVar3, 0, 0, 1, 1);
	__LIB_14__::func_629("PRRGS_MISSHIM", 0);
	__LIB_14__::func_629("SRGKIGP3h", 0);
	func_518(&(iParam0->f_9), 4194304);
}

bool func_1322()
{
	if (TASK::_0xD04241BBF6D03A5E(Global_35) != 0)
	{
		return true;
	}
	if (iLocal_29 == 1)
	{
		if (__LIB_3__::func_138(Global_35, joaat("PROP_PLAYER_OPEN_RIFLECHEST_WINCHESTER")))
		{
			return true;
		}
	}
	return false;
}

bool func_1323(int* iParam0)
{
	if (!__LIB_14__::func_620(*iParam0, "ClerkEndOfSpeech") && !__LIB_14__::func_643(*iParam0, func_1290(), "cry_loop_captor"))
	{
		return false;
	}
	if (!__LIB_2__::func_1(*iParam0, 0, 1))
	{
		return false;
	}
	if (!__LIB_2__::func_227(0f, 1, 0, 0))
	{
		return false;
	}
	__LIB_8__::func_336(&(Local_62.f_1518), "SRG_CRY", *iParam0, Global_35, 0, 0, 1, 1);
	func_224(134217728);
	return true;
}

void func_1324(int* iParam0, bool bParam1, bool bParam2)
{
	vector3 vVar0;
	if (func_44(268435456) && __LIB_14__::func_642(*iParam0, 1435919172, 0))
	{
		return;
	}
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 46, true);
	__LIB_2__::func_73(*iParam0, &(iParam0->f_1), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
	if (bParam1)
	{
		if (!__LIB_2__::func_1(Local_62.f_390[0 /*126*/], 0, 1))
		{
			vVar0 = { Local_62.f_390[0 /*126*/].f_117 };
		}
		else
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_62.f_390[0 /*126*/], true, false) };
		}
		func_1327(*iParam0, &(Local_62.f_1616[1]), vVar0, 3000, Global_35);
	}
	else
	{
		if (bParam2)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(*iParam0, joaat("WEAPON_MELEE_KNIFE"), true, 0, false, false);
		}
		TASK::TASK_COMBAT_PED(*iParam0, Global_35, 0, 0);
	}
	PED::_0xFC3DB99C8144CD81(*iParam0, Local_62.f_1247[8 /*2*/], 0, 0, 0);
	PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 2);
	if (!func_335(1073741824 /* Float: 2f */))
	{
		__LIB_3__::func_732(0);
		__LIB_8__::func_336(&(Local_62.f_1518), "SRGK_ATTACK1", *iParam0, Global_35, 0, 0, 1, 1);
		func_533(1073741824 /* Float: 2f */);
	}
	func_140(1, 0);
	__LIB_0__::func_172(Local_62.f_1247[11 /*2*/]);
	__LIB_0__::func_172(Local_62.f_1247[12 /*2*/]);
	func_928(Local_62.f_1216[3], "pedGunsmith", *iParam0, "SCENE_RHDGUN_BASEMENT_GUNSMITH", 1, 0);
	func_57(268435456);
	if (!func_221(16777216))
	{
		if (PHYSICS::DOES_ROPE_EXIST(Local_62.f_1215))
		{
			PHYSICS::_0x522FA3F490E2F7AC(Local_62.f_1215, 0, 1);
			func_224(1073741824 /* Float: 2f */);
		}
	}
	func_91(268435456);
}

char* func_1325()
{
	return "afraid_loop_a_captor";
}

void func_1326(int* iParam0, int* iParam1, char* sParam2)
{
	if (!__LIB_0__::func_51(&(iParam1->f_9), 1))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			__LIB_8__::func_336(&(Local_62.f_1518), "PRRGS_IG10", *iParam1, Global_35, 0, 0, 1, 1);
		}
		else
		{
			__LIB_8__::func_336(&(Local_62.f_1518), "PRRGS_IG10_GUN", *iParam1, Global_35, 0, 0, 1, 1);
			return;
		}
	}
	else
	{
		__LIB_8__::func_336(&(Local_62.f_1518), "SRGKKILLP", *iParam0, Global_35, 0, 0, 1, 1);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		__LIB_9__::func_793(Local_62.f_1216[3], sParam2, "SCENE_RHDGUN_BASEMENT_GUNSMITH", 1);
	}
}

void func_1327(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return;
	}
	*uParam1 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), Global_35, 3f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_SHOCKING_EVENT_REACT(0, *uParam1, 0);
	TASK::TASK_COMBAT_PED(0, iParam6, 0, 0);
	__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
	func_91(268435456);
}

void func_1329(int* iParam0)
{
	__LIB_0__::func_37(&(Local_62.f_1392[0 /*3*/]));
	func_1704(iParam0);
	func_57(262144);
	__LIB_13__::func_858(11);
	iLocal_48 = 20;
}

void func_1330(int iParam0)
{
	if (!func_335(8192))
	{
		__LIB_3__::func_732(0);
		__LIB_3__::func_648(iParam0, 0);
		__LIB_8__::func_336(&(Local_62.f_1518), "PRSGS_C_THREAT1", iParam0, Global_35, 0, 0, 1, 1);
		func_533(8192);
	}
	else if (!func_335(16384))
	{
		__LIB_3__::func_732(0);
		__LIB_3__::func_648(iParam0, 0);
		__LIB_8__::func_336(&(Local_62.f_1518), "PRSGS_C_THREAT2", iParam0, Global_35, 0, 0, 1, 1);
		func_533(16384);
	}
}

void func_1331(int* iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	if (iLocal_48 != 19)
	{
		if (!func_335(65536))
		{
			if (func_1322())
			{
				if (!func_62(67108864))
				{
					func_533(65536);
					__LIB_13__::func_858(17);
				}
				else if (!func_62(134217728))
				{
					func_533(65536);
					__LIB_13__::func_858(18);
				}
			}
		}
	}
	if (iLocal_46 >= 32)
	{
		if (iLocal_48 != 17 && iLocal_48 != 18)
		{
			return;
		}
	}
	if (!func_276(&(Local_62.f_1392[0 /*3*/]), Local_62.f_1473[0], 0, "TIMER_STRGEN_PLAY_LOITER_DLG"))
	{
		return;
	}
	__LIB_0__::func_37(&(Local_62.f_1392[0 /*3*/]));
	switch (iLocal_48)
	{
		case 0:
			if (__LIB_14__::func_643(Local_62.f_170, func_1138(), "basement_idle_01"))
			{
				if (__LIB_2__::func_227(5f, 1, 0, 0))
				{
					__LIB_13__::func_858(1);
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_227(5f, 1, 0, 0))
			{
				func_1346("BASEMENT_LINE_03", "PRSGS_BASE3");
				__LIB_7__::func_221(2);
				__LIB_13__::func_858(2);
			}
			break;
		case 2:
			if (__LIB_2__::func_227(10f, 1, 0, 0))
			{
				func_1346("BASEMENT_LINE_04", "PRSGS_BASE4");
				__LIB_7__::func_221(3);
				__LIB_13__::func_858(3);
			}
			break;
		case 3:
			if (__LIB_2__::func_227(10f, 1, 0, 0))
			{
				func_1346("BASEMENT_LINE_05", "PRSGS_BASE5");
				__LIB_7__::func_221(4);
				__LIB_13__::func_858(4);
			}
			break;
		case 4:
			if (__LIB_2__::func_227(10f, 1, 0, 0) && __LIB_14__::func_606(Global_35, Local_62.f_1290))
			{
				func_1346("BASEMENT_LINE_06", "PRSGS_BASE6");
				__LIB_7__::func_221(5);
				__LIB_13__::func_858(5);
			}
			break;
		case 5:
			if (__LIB_14__::func_606(Global_35, Local_62.f_1290) && !__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
			{
				__LIB_13__::func_858(6);
			}
			break;
		case 6:
			if ((__LIB_2__::func_227(-3f, 1, 0, 0) && __LIB_14__::func_606(Global_35, Local_62.f_1290)) && !__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
			{
				if (!__LIB_0__::func_181())
				{
					__LIB_8__::func_336(&(Local_62.f_1518), "PRSGS_OPER", Global_35, Local_62.f_170, 0, 0, 1, 1);
				}
				else
				{
					__LIB_8__::func_336(&(Local_62.f_1518), "PRSGS_OPERJ", Global_35, Local_62.f_170, 0, 0, 1, 1);
				}
				__LIB_7__::func_221(7);
				__LIB_13__::func_858(7);
			}
			break;
		case 7:
			if (__LIB_2__::func_227(-3f, 1, 0, 0) && !__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
			{
				func_1346("BASEMENT_LINE_01", "PRSGS_BASE1");
				__LIB_7__::func_221(8);
				__LIB_13__::func_858(8);
			}
			break;
		case 8:
			if ((__LIB_2__::func_227(-3f, 1, 0, 0) && __LIB_14__::func_606(Global_35, Local_62.f_1290)) && !__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
			{
				func_596(&(Local_62.f_170), "PRSGS_PROF", "PRSGS_PROFJ", 1);
				__LIB_7__::func_221(9);
				__LIB_13__::func_858(9);
			}
			break;
		case 9:
			if (__LIB_2__::func_227(-3f, 1, 0, 0) && !__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
			{
				func_1346("BASEMENT_LINE_02", "PRSGS_BASE2");
				__LIB_7__::func_221(10);
				__LIB_13__::func_858(10);
			}
			break;
		case 10:
			if (func_276(&(iParam0->f_214), 10f, 1, "clerkData.timerGeneric"))
			{
				__LIB_7__::func_221(11);
				__LIB_13__::func_858(11);
			}
			break;
		case 11:
			if (__LIB_14__::func_639() == 11)
			{
				if (!func_276(&(iParam0->f_214), 10f, 1, "clerkData.timerGeneric"))
				{
					return;
				}
			}
			if (__LIB_2__::func_227(-3f, 1, 0, 0))
			{
				func_1346("BASEMENT_LINE_07", "PRSGS_BASE7");
				__LIB_7__::func_221(12);
				__LIB_13__::func_858(12);
			}
			break;
		case 12:
			if (__LIB_14__::func_639() == 12)
			{
				if (!func_276(&(iParam0->f_214), 10f, 1, "clerkData.timerGeneric"))
				{
					return;
				}
			}
			if (__LIB_2__::func_227(3f, 1, 0, 0))
			{
				func_1346("BASEMENT_LINE_08", "PRSGS_BASE8");
				__LIB_7__::func_221(13);
				__LIB_13__::func_858(13);
			}
			break;
		case 13:
			if (__LIB_14__::func_639() == 13)
			{
				if (!func_276(&(iParam0->f_214), 10f, 1, "clerkData.timerGeneric"))
				{
					return;
				}
			}
			if (__LIB_2__::func_227(3f, 1, 0, 0))
			{
				func_1346("BASEMENT_LINE_09", "PRSGS_BASE9");
				__LIB_7__::func_221(20);
				__LIB_13__::func_858(20);
			}
			break;
		case 17:
			if (__LIB_2__::func_227(3f, 1, 0, 0))
			{
				func_1346("BASEMENT_LINE_11", "PRSGS_BASE11");
				func_39(67108864);
				__LIB_13__::func_858(19);
			}
			break;
		case 18:
			if (__LIB_2__::func_227(3f, 1, 0, 0))
			{
				func_1346("BASEMENT_LINE_12", "PRSGS_BASE12");
				func_39(134217728);
				__LIB_13__::func_858(19);
			}
			break;
		case 19:
			if (!func_276(&(Local_62.f_1392[1 /*3*/]), 10f, 0, "TIMER_STRGEN_REACT_STEAL_DLG_COOLDOWN"))
			{
				return;
			}
			__LIB_0__::func_37(&(Local_62.f_1392[1 /*3*/]));
			if (__LIB_14__::func_639() != 20)
			{
				func_1149(65536);
				__LIB_13__::func_858(iLocal_49);
			}
			break;
		case 20:
			break;
	}
}

void func_1332(int* iParam0, int iParam1)
{
	if (!__LIB_2__::func_227(-2.5f, 1, 0, 0))
	{
		if (__LIB_0__::func_51(&(iParam0->f_13), 8))
		{
			__LIB_2__::func_411(&(iParam0->f_85[1 /*11*/]), 0, 0);
			func_870(&(iParam0->f_13), 8);
		}
		return;
	}
	if (!__LIB_0__::func_51(&(iParam0->f_13), 1024))
	{
		if (!__LIB_0__::func_51(&(iParam0->f_13), 8))
		{
			__LIB_2__::func_411(&(iParam0->f_85[1 /*11*/]), 1, 0);
			func_518(&(iParam0->f_13), 8);
		}
		if (iParam1 == 1)
		{
			func_596(iParam0, "PRSGS_A_ILO2_N1", "PRSGS_J_ILO2_N1", 1);
			func_1258(&(iParam0->f_13), &(iParam0->f_85), 0);
			__LIB_0__::func_37(&(Local_62.f_1392[0 /*3*/]));
			func_518(&(iParam0->f_13), 1024);
		}
	}
	if (!func_276(&(Local_62.f_1392[0 /*3*/]), 20f, 0, "TIMER_STRGEN_PLAY_LOITER_DLG"))
	{
		return;
	}
	__LIB_0__::func_37(&(Local_62.f_1392[0 /*3*/]));
	switch (iLocal_48)
	{
		case 11:
			__LIB_8__::func_336(&(Local_62.f_1518), "PRSGS_C_GETSTH1", *iParam0, Global_35, 0, 0, 1, 1);
			__LIB_13__::func_858(12);
			break;
		case 12:
			__LIB_8__::func_336(&(Local_62.f_1518), "PRSGS_C_GETSTH2", *iParam0, Global_35, 0, 0, 1, 1);
			__LIB_13__::func_858(13);
			break;
		case 13:
			__LIB_8__::func_336(&(Local_62.f_1518), "PRSGS_C_GETSTH3", *iParam0, Global_35, 0, 0, 1, 1);
			__LIB_13__::func_858(14);
			break;
		case 14:
			__LIB_8__::func_336(&(Local_62.f_1518), "PRSGS_C_GETSTH4", *iParam0, Global_35, 0, 0, 1, 1);
			__LIB_13__::func_858(20);
			break;
		case 20:
			break;
	}
}

void func_1333(int* iParam0, int iParam1, char* sParam2)
{
	int iVar0;
	if (func_221(131072))
	{
		return;
	}
	if (!func_221(65536))
	{
		if (__LIB_14__::func_643(*iParam0, func_1138(), "basement_idle_01"))
		{
			func_224(65536);
		}
		return;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1))
	{
		if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iParam1, "COWER_BOOL") == 0)
		{
			return;
		}
	}
	iVar0 = __LIB_3__::func_547(*iParam0, Global_35, 1060437492 /* Float: 0.707f */);
	if (func_1350(iParam1, sParam2))
	{
		if (iVar0 == 3 || iVar0 == 1)
		{
			if (!func_559(iParam1, "PB_B2_TRANS_B1", sParam2, 0))
			{
				return;
			}
			__LIB_9__::func_793(iParam1, "PB_B2_TRANS_B1", sParam2, 1);
			func_277(iParam1, "bStopBasementLoop1", 0, sParam2);
			func_277(iParam1, "bStopBasementLoop2", 1, sParam2);
			func_553(iParam1, "PB_B1_TRANS_B2", sParam2);
			func_297(Local_62.f_170, Global_35, &(Local_62.f_170.f_42), -1, vLocal_59, 1, 0);
		}
	}
	else if (func_1351(iParam1, sParam2))
	{
		if (iVar0 == 2)
		{
			if (!func_559(iParam1, "PB_B1_TRANS_B2", sParam2, 0))
			{
				return;
			}
			__LIB_9__::func_793(iParam1, "PB_B1_TRANS_B2", sParam2, 1);
			func_277(iParam1, "bStopBasementLoop1", 1, sParam2);
			func_277(iParam1, "bStopBasementLoop2", 0, sParam2);
			func_553(iParam1, "PB_B2_TRANS_B1", sParam2);
			func_297(Local_62.f_170, Global_35, &(Local_62.f_170.f_42), -1, vLocal_59, 1, 0);
		}
	}
}

void func_1334(int* iParam0, int iParam1, char* sParam2, int iParam3)
{
	int iVar0;
	if (!__LIB_14__::func_607(iParam1, "BasementIdle1", sParam2) && !__LIB_14__::func_607(iParam1, "BasementIdle2", sParam2))
	{
		return;
	}
	if (__LIB_14__::func_623(iParam1, sParam2, func_1707()))
	{
		__LIB_9__::func_793(iParam1, func_1708(), sParam2, 1);
		func_1340(iParam1, sParam2);
		return;
	}
	else if (__LIB_14__::func_623(iParam1, sParam2, func_1709()))
	{
		__LIB_9__::func_793(iParam1, func_1708(), sParam2, 1);
		func_1340(iParam1, sParam2);
		return;
	}
	else if (__LIB_14__::func_623(iParam1, sParam2, func_1710()))
	{
		__LIB_9__::func_793(iParam1, func_1711(), sParam2, 1);
		func_1340(iParam1, sParam2);
		return;
	}
	else if (__LIB_14__::func_623(iParam1, sParam2, func_1712()))
	{
		__LIB_9__::func_793(iParam1, func_1711(), sParam2, 1);
		func_1340(iParam1, sParam2);
		return;
	}
	if (__LIB_0__::func_75(&(Local_62.f_1392[2 /*3*/])))
	{
		if (!func_276(&(Local_62.f_1392[2 /*3*/]), 5f, 0, "TIMER_STRGEN_FLINCH_COWER_COOLDOWN"))
		{
			return;
		}
		else
		{
			__LIB_0__::func_37(&(Local_62.f_1392[2 /*3*/]));
		}
	}
	if (iParam3 != 256 && iParam3 != 4)
	{
		return;
	}
	iVar0 = __LIB_3__::func_547(*iParam0, Global_35, 1f);
	if (__LIB_14__::func_607(iParam1, "BasementIdle1", sParam2))
	{
		if (iVar0 == 2)
		{
			__LIB_9__::func_793(iParam1, func_1707(), sParam2, 1);
			func_1330(*iParam0);
			func_1713(iParam1, sParam2);
			__LIB_1__::func_148(&(Local_62.f_1392[2 /*3*/]));
		}
		else if (iVar0 == 3)
		{
			__LIB_9__::func_793(iParam1, func_1709(), sParam2, 1);
			func_1330(*iParam0);
			func_1713(iParam1, sParam2);
			__LIB_1__::func_148(&(Local_62.f_1392[2 /*3*/]));
		}
	}
	else if (__LIB_14__::func_607(iParam1, "BasementIdle2", sParam2))
	{
		if (iVar0 == 2)
		{
			__LIB_9__::func_793(iParam1, func_1710(), sParam2, 1);
			func_1330(*iParam0);
			func_1713(iParam1, sParam2);
			__LIB_1__::func_148(&(Local_62.f_1392[2 /*3*/]));
		}
		else if (iVar0 == 3)
		{
			__LIB_9__::func_793(iParam1, func_1712(), sParam2, 1);
			func_1330(*iParam0);
			func_1713(iParam1, sParam2);
			__LIB_1__::func_148(&(Local_62.f_1392[2 /*3*/]));
		}
	}
}

void func_1335(int* iParam0)
{
	if (func_335(1024))
	{
		return;
	}
	if (!func_221(65536))
	{
		return;
	}
	if (!__LIB_2__::func_227(-3.5f, 1, 0, 0))
	{
		return;
	}
	if (__LIB_0__::func_665(Global_35, *iParam0, 1, 1) > 2f)
	{
		return;
	}
	if (__LIB_0__::func_75(&uLocal_1779) && __LIB_0__::func_264(&uLocal_1779) < 7.5f)
	{
		return;
	}
	if (PED::_0x29FCE825613FEFCA(*iParam0, 2000))
	{
		return;
	}
	switch (iLocal_1778)
	{
		case 0:
			__LIB_8__::func_336(&(Local_62.f_1518), "PRSGS_C_CLOSE1", *iParam0, Global_35, 3, 0, 1, 1);
			iLocal_1778++;
			if (!__LIB_0__::func_75(&uLocal_1779))
			{
				__LIB_1__::func_283(&uLocal_1779, 0);
			}
			break;
		case 1:
			__LIB_8__::func_336(&(Local_62.f_1518), "PRSGS_C_CLOSE1", *iParam0, Global_35, 2, 0, 1, 1);
			iLocal_1778++;
			__LIB_1__::func_148(&uLocal_1779);
			break;
		case 2:
			__LIB_8__::func_336(&(Local_62.f_1518), "PRSGS_C_CLOSE1", *iParam0, Global_35, 1, 0, 1, 1);
			iLocal_1778++;
			func_533(1024);
			break;
	}
}

void func_1336(int* iParam0)
{
	if (func_335(4096))
	{
		return;
	}
	if (PED::_0x29FCE825613FEFCA(*iParam0, 1000))
	{
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(*iParam0))
		{
			__LIB_3__::func_732(0);
			__LIB_8__::func_336(&(Local_62.f_1518), "PRSGS_C_PUSH", *iParam0, Global_35, 0, 0, 1, 1);
			func_533(4096);
			__LIB_0__::func_172(iLocal_1770);
		}
	}
}

void func_1337(int* iParam0, int iParam1)
{
	int iVar0;
	if ((Local_62.f_1620 % 10) != 0)
	{
		return;
	}
	if (func_335(32768))
	{
		return;
	}
	if (!PED::_IS_PED_HOGTIED(*iParam0))
	{
		return;
	}
	if (iParam1 != 8)
	{
		return;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	if (!WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		return;
	}
	__LIB_8__::func_336(&(Local_62.f_1518), "PRSGS_C_TIEDAIM", *iParam0, Global_35, 0, 0, 1, 1);
	func_533(32768);
}

void func_1338(int* iParam0, int iParam1, char* sParam2)
{
	if (func_221(2097152))
	{
		if (!func_221(4194304))
		{
			if (PED::_0x57779B55B83E2BEA(*iParam0))
			{
				PED::_0xA180FBD502A03125(*iParam0, 2.75f, 1.75f);
				func_224(4194304);
			}
		}
		return;
	}
	if (!__LIB_14__::func_609(iParam1, "bStopCryLoop", sParam2))
	{
		return;
	}
	if (!PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(Local_62.f_1, "intimidated_on_ass"))
	{
		PED::_0xF7EA250B9A919E03(joaat("INTIMIDATED_ON_ASS"), *iParam0);
	}
	if (__LIB_14__::func_623(iParam1, sParam2, "pbToKnees"))
	{
		if (!func_280(iParam1, sParam2, 0.989f))
		{
			return;
		}
	}
	else if (__LIB_14__::func_623(iParam1, sParam2, "pbToKnees02"))
	{
		if (!func_280(iParam1, sParam2, 0.992f))
		{
			return;
		}
	}
	PED::_0x935CF6E42BAF7F4D(*iParam0);
	TASK::_TASK_INTIMIDATED_2(*iParam0, Global_35, 0, 0, 0, 1, 0, 0, 0);
	TASK::_0x41D1331AFAD5A091(*iParam0, 1, 0);
	PED::_0xAAB050DA48B57978(*iParam0, "TaskIntimidated_OnAss", Global_35, -1, 4);
	PED::_0x2208438012482A1A(*iParam0, true, false);
	PED::SET_PED_KEEP_TASK(*iParam0, true);
	func_224(2097152);
}

void func_1339()
{
	if (__LIB_14__::func_606(Global_35, Local_62.f_1290))
	{
		if (!func_221(32768))
		{
			if (iLocal_1774 == 0)
			{
				func_137(0, 1);
			}
			func_224(32768);
		}
	}
	else if (func_221(32768))
	{
		func_137(1, 1);
		func_418(32768);
	}
}

void func_1340(int iParam0, char* sParam1)
{
	func_553(iParam0, func_1707(), sParam1);
	func_553(iParam0, func_1709(), sParam1);
	func_553(iParam0, func_1710(), sParam1);
	func_553(iParam0, func_1712(), sParam1);
	func_553(iParam0, func_1715(), sParam1);
	func_553(iParam0, func_1716(), sParam1);
	func_553(iParam0, func_1717(), sParam1);
	func_553(iParam0, func_1718(), sParam1);
}

void func_1341(int* iParam0, char* sParam1, int iParam2)
{
	__LIB_2__::func_411(iParam0, 1, 0);
	if (!__LIB_0__::func_139(iParam0->f_6))
	{
		return;
	}
	else
	{
		__LIB_1__::func_484(iParam0->f_6, sParam1, 1);
	}
}

void func_1342(int iParam0)
{
	if (!__LIB_2__::func_227(14f, 1, 0, 0))
	{
		return;
	}
	switch (iLocal_47)
	{
		case 0:
			__LIB_8__::func_336(&(Local_62.f_1518), "PRSGS_WAITLADR1", iParam0, Global_35, 0, 0, 1, 1);
			__LIB_9__::func_745(1);
			break;
		case 1:
			__LIB_8__::func_336(&(Local_62.f_1518), "PRSGS_WAITLADR2", iParam0, Global_35, 0, 0, 1, 1);
			__LIB_9__::func_745(2);
			break;
		case 2:
			__LIB_8__::func_336(&(Local_62.f_1518), "PRSGS_WAITLADR3", iParam0, Global_35, 0, 0, 1, 1);
			__LIB_9__::func_745(3);
			break;
	}
}

Vector3 func_1343()
{
	return -1791.48f, -388.46f, 157.11f;
}

float func_1344()
{
	return -160.89f;
}

float func_1345(int iParam0, char* sParam1, char* sParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -0.1f;
	}
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, sParam1, sParam2, 1))
	{
		return -0.1f;
	}
	return ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iParam0, sParam1, sParam2);
}

void func_1346(char* sParam0, char[4] cParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(Local_62.f_170))
	{
		return;
	}
	__LIB_8__::func_336(&(Local_62.f_1518), cParam1, Local_62.f_170, Global_35, 0, 0, 1, 1);
	if (!PED::_IS_PED_HOGTIED(Local_62.f_170) && !PED::_IS_PED_LASSOED(Local_62.f_170))
	{
		TASK::TASK_PLAY_ANIM(Local_62.f_170, func_1138(), sParam0, 4f, 4f, -1, 67108880, 0f, false, 65536, false, 0, false);
	}
	func_297(Local_62.f_170, Global_35, &(Local_62.f_170.f_42), -1, vLocal_59, 1, 0);
}

void func_1347(bool bParam0)
{
	if (bParam0)
	{
		func_412();
		func_239(3);
	}
	else
	{
		func_251(3);
	}
	func_29(64);
}

void func_1349(int* iParam0, var uParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	switch (iLocal_51)
	{
		case 0:
			if (__LIB_0__::func_51(&(iParam0->f_13), 2048))
			{
				return;
			}
			if (!__LIB_2__::func_227(-2.5f, 1, 0, 0))
			{
				if (__LIB_0__::func_51(&(iParam0->f_13), 8))
				{
					__LIB_2__::func_411(&(iParam0->f_85[1 /*11*/]), 0, 0);
					func_870(&(iParam0->f_13), 8);
				}
				return;
			}
			if (!__LIB_0__::func_51(&(iParam0->f_13), 8))
			{
				__LIB_2__::func_411(&(iParam0->f_85[1 /*11*/]), 1, 0);
				func_518(&(iParam0->f_13), 8);
			}
			if (*uParam1 != 1)
			{
				return;
			}
			func_596(iParam0, "PRSGS_PLYR1", "PRSGS_PLYR1J", 1);
			func_1258(&(iParam0->f_13), &(iParam0->f_85), 0);
			__LIB_0__::func_37(&(Local_62.f_1392[0 /*3*/]));
			func_518(&(iParam0->f_13), 2048);
			__LIB_9__::func_759(1);
			break;
		case 1:
			if (!__LIB_2__::func_227(-3f, 1, 0, 0))
			{
				return;
			}
			func_1346("basement_line_15", "PRSGS_BASE15");
			__LIB_9__::func_759(2);
			break;
		case 2:
			if (!__LIB_2__::func_227(-3f, 1, 0, 0))
			{
				return;
			}
			func_596(iParam0, "PRSGS_PLYR2", "PRSGS_PLYR2J", 1);
			func_297(Local_62.f_170, Global_35, &(Local_62.f_170.f_42), -1, vLocal_59, 1, 0);
			__LIB_9__::func_759(7);
			break;
	}
}

bool func_1350(int iParam0, char* sParam1)
{
	if (__LIB_14__::func_607(iParam0, "BasementIdle2", sParam1))
	{
		return true;
	}
	return false;
}

bool func_1351(int iParam0, char* sParam1)
{
	if (!__LIB_14__::func_607(iParam0, "BasementIdle1", sParam1))
	{
		return false;
	}
	return true;
}

void func_1352(int iParam0, int iParam1, int iParam2)
{
	func_1722(&(Local_62.f_390[0 /*126*/]), iParam0, 0);
	func_1722(&(Local_62.f_390[1 /*126*/]), iParam1, 1);
	func_1722(&(Local_62.f_390[2 /*126*/]), iParam2, 2);
}

void func_1353()
{
	if (!__LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 33554432))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_62.f_1216[5]))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_62.f_1216[5], false))
			{
				if (PED::IS_PED_RAGDOLL(Local_62.f_390[0 /*126*/]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_62.f_1216[5]);
					func_518(&(Local_62.f_390[0 /*126*/].f_9), 33554432);
				}
			}
		}
	}
}

void func_1354()
{
	if (!__LIB_2__::func_1(Local_62.f_390[0 /*126*/], 0, 1))
	{
		func_1723(&(Local_62.f_390[1 /*126*/]), Local_62.f_1297[2 /*8*/], 0.5f, 1);
	}
	else
	{
		func_1723(&(Local_62.f_390[0 /*126*/]), Local_62.f_1297[2 /*8*/], 0f, 0);
	}
	func_1723(&(Local_62.f_390[2 /*126*/]), Local_62.f_1297[1 /*8*/], 2f, 2);
}

void func_1355()
{
	int iVar0;
	if (__LIB_0__::func_51(&(Local_62.f_390[2 /*126*/].f_9), 1073741824 /* Float: 2f */))
	{
		return;
	}
	if (!__LIB_0__::func_51(&(Local_62.f_390[2 /*126*/].f_9), 33554432))
	{
		return;
	}
	if (__LIB_2__::func_1(Local_62.f_390[2 /*126*/], 0, 1))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Local_62.f_390[2 /*126*/], &iVar0, true, 0, false);
		if (iVar0 != joaat("GROUP_REPEATER"))
		{
			func_518(&(Local_62.f_390[2 /*126*/].f_9), 1073741824 /* Float: 2f */);
		}
	}
	else
	{
		func_518(&(Local_62.f_390[2 /*126*/].f_9), 1073741824 /* Float: 2f */);
	}
}

void func_1356()
{
	if (!func_221(134217728))
	{
		if (iLocal_46 > 2)
		{
			if (func_65() && (__LIB_14__::func_606(Global_35, Local_62.f_1290) || __LIB_14__::func_606(Global_35, Local_62.f_1292)))
			{
				if (PED::IS_PED_SHOOTING(Global_35) || func_1724())
				{
					func_890(&(Local_62.f_1355[5 /*2*/]), &(Local_62.f_1355[5 /*2*/].f_1), -279.0437f, 786.0427f, 122.6199f, 0f, 0f, -90.53087f, 3.413217f, 10.78276f, 2.667443f, 1, 0, 1, 0, 0);
					__LIB_3__::func_378(Local_62.f_1355[5 /*2*/], 0);
					func_224(134217728);
					func_224(268435456);
					Local_62.f_1616[1] = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), -283.5968f, 800.7466f, 118.372f, 0f, 21f, 21f, -1f, -1f, -1, -1);
				}
			}
		}
	}
	if (func_221(268435456))
	{
		if (func_1643(3))
		{
			func_1725();
			__LIB_1__::func_283(&uLocal_1785, 0);
			func_49(Local_62.f_1148[0 /*8*/], 1, "VALLAW1", 0, "");
			func_418(268435456);
			func_224(536870912);
		}
	}
	if (__LIB_1__::func_313(&uLocal_1785, 6f))
	{
		__LIB_2__::func_701(3);
	}
}

void func_1357()
{
	if (func_221(33554432))
	{
		return;
	}
	if (!func_221(4194304))
	{
		if (!PED::_IS_PED_USING_SCENARIO_HASH(Global_35, __LIB_14__::func_628()))
		{
			return;
		}
		else
		{
			func_224(4194304);
		}
		return;
	}
	else
	{
		if (!PED::_IS_PED_USING_SCENARIO_HASH(Global_35, __LIB_14__::func_628()))
		{
			func_418(4194304);
			func_224(33554432);
			return;
		}
		if (__LIB_14__::func_620(Global_35, "StartGrab"))
		{
			func_224(8388608);
		}
		if (!func_221(16777216))
		{
			if (__LIB_14__::func_620(Global_35, "ObjectExchange"))
			{
				func_1728(1);
				func_224(16777216);
			}
		}
	}
}

void func_1358()
{
	var uVar0;
	int iVar3;
	float fVar4;
	if (!__LIB_14__::func_606(Global_35, Local_62.f_1290))
	{
		return;
	}
	MISC::_GET_PROJECTILE_NEAR_PED(Global_35, joaat("WEAPON_THROWN_DYNAMITE"), 10f, &uVar0, &iVar3, 0, 1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return;
	}
	fVar4 = 2f;
	WEAPON::_0x74C9080FDD1BB48F(iVar3, fVar4);
	WEAPON::_0x74C2365FDD1BB48F(iVar3, 1);
}

bool func_1359(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_62.f_390)
	{
		if (__LIB_2__::func_1(Local_62.f_390[iVar0 /*126*/], 0, 1))
		{
			if (iParam0 == -1 || iParam0 != iVar0)
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_1360(var uParam0, var uParam1, int* iParam2, int* iParam3, int iParam4)
{
	if (func_335(16384))
	{
		if (__LIB_2__::func_227(-4f, 1, 0, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
			{
				if (__LIB_2__::func_633(0))
				{
					__LIB_2__::func_478(*uParam0, Global_35, "TAUNT_GEN_MALE", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(*uParam0, Global_35, "GANG_TAUNT_GEN", 0, -1082130432 /* Float: -1f */, 3, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
			{
				__LIB_2__::func_478(*uParam1, Global_35, "GENERIC_SHOCKED_MED", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(*iParam2))
			{
				__LIB_2__::func_478(*iParam2, Global_35, "GENERIC_SHOCKED_HIGH", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			func_1149(16384);
		}
		return;
	}
	if (!func_1729(3))
	{
		return;
	}
	if (iLocal_51 < 4)
	{
		if (*iParam4)
		{
			__LIB_9__::func_759(4);
		}
	}
	switch (iLocal_51)
	{
		case 0:
			if (!__LIB_2__::func_227(10f, 1, 0, 0))
			{
				return;
			}
			__LIB_8__::func_336(&(Local_62.f_1518), "SRVDO1CMB", *uParam0, Global_35, 0, 0, 1, 1);
			__LIB_9__::func_759(1);
			break;
		case 1:
			if (!__LIB_2__::func_227(10f, 1, 0, 0))
			{
				return;
			}
			__LIB_8__::func_336(&(Local_62.f_1518), "SRVDO2CMB", *uParam1, Global_35, 0, 0, 1, 1);
			__LIB_9__::func_759(2);
			break;
		case 2:
			if (!__LIB_2__::func_227(10f, 1, 0, 0))
			{
				return;
			}
			__LIB_8__::func_336(&(Local_62.f_1518), "SRVDO3CMB", *iParam2, Global_35, 0, 0, 1, 1);
			__LIB_9__::func_759(3);
			break;
		case 3:
			break;
		case 4:
			if (!func_1730(-2f))
			{
				return;
			}
			__LIB_8__::func_336(&(Local_62.f_1518), "SRVDWBEG1", *iParam3, Global_35, 0, 0, 1, 1);
			__LIB_9__::func_759(5);
			break;
		case 5:
			if (!func_1730(1084227584 /* Float: 5f */))
			{
				return;
			}
			__LIB_8__::func_336(&(Local_62.f_1518), "SRVDWBEG2", *iParam3, Global_35, 0, 0, 1, 1);
			__LIB_9__::func_759(6);
			break;
		case 6:
			if (!func_1730(1084227584 /* Float: 5f */))
			{
				return;
			}
			if (WEAPON::_0x705BE297EEBDB95D(Global_1935630.f_44))
			{
				__LIB_8__::func_336(&(Local_62.f_1518), "SRVDWBEG3", *iParam3, Global_35, 0, 0, 1, 1);
			}
			__LIB_9__::func_759(7);
			break;
		case 7:
			break;
	}
}

void func_1361(var uParam0, var uParam1, int* iParam2, int iParam3)
{
	if (!func_1729(3))
	{
		return;
	}
	if (iLocal_51 < 4)
	{
		if (*iParam3)
		{
			return;
		}
	}
	func_1731(uParam0);
	func_1731(uParam1);
	func_1731(iParam2);
}

void func_1363()
{
	int iVar0;
	if (func_44(134217728))
	{
		return;
	}
	if (!__LIB_2__::func_1(Local_62.f_170, 0, 1))
	{
		return;
	}
	if (!func_1732())
	{
		return;
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -282.9875f, 802.5005f, 118.3846f, 2f, 20000, 0.25f, 0, 40000f);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -298.8157f, 795.3381f, 117.5196f, 2f, 20000, 0.25f, 0, 40000f);
	TASK::TASK_SMART_FLEE_PED(0, Global_35, 500f, -1, 0, 3f, 0);
	__LIB_1__::func_474(Local_62.f_170, &iVar0, 0, 0, 1, 1);
	func_928(Local_62.f_1216[4], "pedDoctor", Local_62.f_170, "SCENE_VALDOC_HOLDUPBACKROOM", 1, 0);
	func_91(134217728);
	PED::SET_PED_KEEP_TASK(Local_62.f_170, true);
}

void func_1364()
{
	int iVar0;
	if (func_44(134217728) || ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_62.f_1216[4], "bDoctorFlee"))
	{
		return;
	}
	if (!__LIB_14__::func_606(Global_35, Local_62.f_1247[17 /*2*/]))
	{
		return;
	}
	if (__LIB_14__::func_607(Local_62.f_1216[4], "cower_enter", "SCENE_VALDOC_HOLDUPBACKROOM"))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -282.9875f, 802.5005f, 118.3846f, 2f, 20000, 0.25f, 0, 40000f);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -298.8157f, 795.3381f, 117.5196f, 2f, 20000, 0.25f, 0, 40000f);
		TASK::TASK_SMART_FLEE_PED(0, Global_35, 500f, -1, 0, 3f, 0);
		__LIB_1__::func_474(Local_62.f_170, &iVar0, 0, 0, 1, 1);
		func_928(Local_62.f_1216[4], "pedDoctor", Local_62.f_170, "SCENE_VALDOC_HOLDUPBACKROOM", 1, 0);
		func_91(134217728);
		PED::SET_PED_KEEP_TASK(Local_62.f_170, true);
		func_91(134217728);
	}
	else if (__LIB_14__::func_607(Local_62.f_1216[4], "COWER_LOOP", "SCENE_VALDOC_HOLDUPBACKROOM"))
	{
		func_277(Local_62.f_1216[4], "bDoctorFlee", 1, "SCENE_VALDOC_HOLDUPBACKROOM");
	}
}

void func_1365()
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_62.f_1216[3]))
	{
		return;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_62.f_1216[0]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_62.f_1216[0]);
	}
	if (__LIB_2__::func_1(Local_62.f_390[2 /*126*/], 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_62.f_1216[3], "pedMoney", Local_62.f_390[2 /*126*/], 0);
	}
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_62.f_1216[3], "bActionBreakoutBed", false, false);
}

void func_1366()
{
	func_277(Local_62.f_1216[4], "bDoctorFlee", 1, "SCENE_VALDOC_HOLDUPBACKROOM");
}

bool func_1367()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_55)
	{
		if (__LIB_0__::func_51(&(Local_62.f_390[iVar0 /*126*/].f_9), 8192))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1369()
{
	if ((__LIB_14__::func_606(Local_62.f_170, Local_62.f_1292) && !__LIB_14__::func_606(Global_35, Local_62.f_1292)) && !__LIB_14__::func_606(Global_35, Local_62.f_1290))
	{
		return true;
	}
	return false;
}

void func_1370()
{
	int iVar0;
	if (!__LIB_2__::func_1(Local_62.f_170, 0, 1))
	{
		return;
	}
	__LIB_3__::func_732(0);
	__LIB_8__::func_336(&(Local_62.f_1518), "SRVDDWARN", Local_62.f_170, Global_35, 0, 0, 1, 1);
	TASK::CLEAR_PED_TASKS(Local_62.f_170, true, false);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -285.317f, 817.5923f, 118.3859f, 2f, 20000, 0.25f, 0, 40000f);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
	TASK::TASK_COWER(0, -1, 0, 0);
	__LIB_1__::func_474(Local_62.f_170, &iVar0, 0, 0, 1, 1);
	func_224(524288);
}

void func_1371(var uParam0, var uParam1, int* iParam2, int* iParam3)
{
	func_1733(uParam0, &(Local_62.f_1297[0 /*8*/]), joaat("WEAPON_REVOLVER_CATTLEMAN"), 0);
	func_1733(uParam1, &(Local_62.f_1297[1 /*8*/]), joaat("WEAPON_REVOLVER_CATTLEMAN"), 0);
	func_1733(iParam2, &(Local_62.f_1297[2 /*8*/]), joaat("WEAPON_REPEATER_CARBINE"), 0);
	if (__LIB_2__::func_1(*iParam3, 0, 1))
	{
		func_1734();
		__LIB_14__::func_616(Local_62.f_1216[7], "SCENE_VALDOC_FEMALEPANIC");
	}
}

void func_1373(var uParam0, int iParam1, char* sParam2)
{
	int iVar0;
	if ((!func_1735(uParam0) || __LIB_0__::func_51(&(uParam0->f_9), 8192)) || __LIB_0__::func_51(&(uParam0->f_9), 33554432))
	{
		if (__LIB_2__::func_1(*uParam0, 0, 1))
		{
			__LIB_1__::func_766(*uParam0, joaat("GROUP_PISTOL"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			__LIB_2__::func_45(0, Global_35, 0);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 3000, false, 1);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(*uParam0, &iVar0, 0f, 0f, 1, 1);
		}
		func_518(&(uParam0->f_9), 8192);
	}
	else if (!__LIB_14__::func_620(*uParam0, "GangStartsSitting"))
	{
	}
	else
	{
		func_277(iParam1, "bStopCountLoop", 1, sParam2);
		__LIB_9__::func_793(iParam1, "PBL_BREAKOUT", sParam2, 1);
	}
}

void func_1374()
{
	__LIB_18__::func_204(0, 2);
	__LIB_3__::func_525(&(Local_62.f_1373[1]), &(Local_62.f_1370[1]));
	func_541();
	func_898(&(Local_62.f_1373[0]), &(Local_62.f_1370[0]), func_629(), func_630(), func_631(), "Interior Back Room Door");
}

int func_1375(var uParam0)
{
	if (__LIB_0__::func_51(&(uParam0->f_9), 8192))
	{
		return 1;
	}
	if (!__LIB_2__::func_1(*uParam0, 0, 1))
	{
		return 1;
	}
	if (__LIB_0__::func_51(&(uParam0->f_9), 33554432))
	{
		TASK::TASK_COMBAT_PED(*uParam0, Global_35, 0, 0);
		func_518(&(uParam0->f_9), 8192);
		func_392(&(Local_62.f_1226[10]), 0);
		return 1;
	}
	if (func_1735(uParam0))
	{
		func_277(Local_62.f_1216[5], "bStopCountLoop", 1, "SCENE_VALDOC_GANGOPENBACKROOM");
		__LIB_9__::func_793(Local_62.f_1216[5], "PBL_BREAKOUT", "SCENE_VALDOC_GANGOPENBACKROOM", 1);
		return 0;
	}
	else if (__LIB_14__::func_643(*uParam0, "script_proc@robberies@shop@valdoc@ig_4", "count_breakout_gang"))
	{
		if (func_280(Local_62.f_1216[5], "SCENE_VALDOC_GANGOPENBACKROOM", 0.99f))
		{
			TASK::TASK_COMBAT_PED(*uParam0, Global_35, 100663296, 0);
			func_392(&(Local_62.f_1226[10]), 0);
			func_518(&(uParam0->f_9), 8192);
			return 1;
		}
	}
	else
	{
		func_392(&(Local_62.f_1226[10]), 0);
		TASK::TASK_COMBAT_PED(*uParam0, Global_35, 0, 0);
		func_518(&(uParam0->f_9), 8192);
		return 1;
	}
	return 0;
}

int func_1376(var uParam0, int* iParam1)
{
	int iVar0;
	char* sVar1;
	if (__LIB_0__::func_51(&(uParam0->f_9), 8192))
	{
		return 1;
	}
	iVar0 = Local_62.f_1216[6];
	sVar1 = "SCENE_VALDOC_COUPLEFLIRTBREAKOUT";
	if (!__LIB_14__::func_619(iVar0, sVar1))
	{
		if ((func_276(&(uParam0->f_120), 1f, 1, "couch male's timerGenericA") || __LIB_9__::func_365(*uParam0)) || func_1367())
		{
			if (func_1737(6))
			{
				func_1738();
				__LIB_14__::func_616(iVar0, sVar1);
				if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					if (!func_335(65536))
					{
						__LIB_8__::func_336(&(Local_62.f_1518), "SRVDODR2SEEP", *uParam0, Global_35, 0, 0, 1, 1);
						func_533(65536);
					}
				}
			}
			else
			{
				func_518(&(uParam0->f_9), 8192);
			}
		}
	}
	else
	{
		__LIB_2__::func_506(Local_62.f_1216[2], "SCENE_VALDOC_COUPLEFLIRT");
		if (__LIB_14__::func_619(iVar0, "SCENE_VALDOC_COUPLEFLIRTBREAKOUT"))
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iVar0) > 0.841f)
			{
				if (func_1737(7))
				{
					func_1734();
					__LIB_14__::func_616(Local_62.f_1216[7], "SCENE_VALDOC_FEMALEPANIC");
				}
				func_518(&(uParam0->f_9), 8192);
			}
			else if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iVar0) > 0.555f)
			{
				if (!__LIB_0__::func_51(&(uParam0->f_9), 268435456))
				{
					if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
					{
						TASK::TASK_COMBAT_PED(*uParam0, Global_35, 100663296, 0);
					}
					func_518(&(uParam0->f_9), 268435456);
				}
			}
		}
	}
	return 0;
}

int func_1377(int* iParam0)
{
	bool bVar0;
	float fVar1;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return 1;
	}
	if (__LIB_0__::func_51(&(iParam0->f_9), 8192))
	{
		return 1;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_62.f_1216[3]))
	{
		if (ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_62.f_1216[3], "bActionBreakoutBed"))
		{
			fVar1 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_62.f_1216[3]);
			if (fVar1 > 0.861f)
			{
				TASK::TASK_COMBAT_PED(*iParam0, Global_35, 100663296, 0);
				__LIB_0__::func_37(&(iParam0->f_120));
				func_518(&(iParam0->f_9), 8192);
			}
		}
		else
		{
			if (func_276(&(iParam0->f_120), 2.5f, 0, "gangBed.timerGenericA"))
			{
				bVar0 = true;
			}
			else if (__LIB_9__::func_365(*iParam0))
			{
				bVar0 = true;
			}
			else if (func_1367())
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				__LIB_8__::func_336(&(Local_62.f_1518), "SRVDODR3SEEP", *iParam0, Global_35, 0, 0, 1, 1);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_62.f_1216[3], "bActionBreakoutBed", true, false);
			}
		}
	}
	if (__LIB_0__::func_51(&(iParam0->f_9), 33554432))
	{
		func_1127(*iParam0, 0);
		func_518(&(iParam0->f_9), 8192);
		__LIB_0__::func_37(&(iParam0->f_120));
	}
	return 0;
}

void func_1378(var uParam0)
{
	switch (iLocal_47)
	{
		case 0:
			if (__LIB_2__::func_227(-2f, 1, 0, 0))
			{
				func_1739();
				__LIB_8__::func_336(&(Local_62.f_1518), "SRVDOPREP", *uParam0, Global_35, 0, 0, 1, 1);
				__LIB_9__::func_745(1);
			}
			break;
		case 1:
			if (__LIB_2__::func_227(14f, 1, 0, 0))
			{
				func_1739();
				__LIB_8__::func_336(&(Local_62.f_1518), "SRVDOTNT1", *uParam0, Global_35, 0, 0, 1, 1);
				__LIB_9__::func_745(2);
			}
			break;
		case 2:
			if (__LIB_2__::func_227(14f, 1, 0, 0))
			{
				func_1739();
				__LIB_8__::func_336(&(Local_62.f_1518), "SRVDOTNT2", *uParam0, Global_35, 0, 0, 1, 1);
				__LIB_9__::func_745(3);
			}
			break;
		case 3:
			break;
	}
}

void func_1379(var uParam0, int iParam1, var uParam2, int iParam3, int* iParam4, int iParam5)
{
	func_1740(uParam0, Local_62.f_1297[0 /*8*/], iParam1, Local_62.f_1247[9 /*2*/]);
	func_1740(uParam2, Local_62.f_1297[1 /*8*/], iParam3, Local_62.f_1247[11 /*2*/]);
	func_1740(iParam4, Local_62.f_1297[2 /*8*/], iParam5, Local_62.f_1247[10 /*2*/]);
}

void func_1380(int* iParam0)
{
	func_1741(iParam0);
	func_1742(iParam0);
}

void func_1381(int* iParam0, int iParam1)
{
	if (!__LIB_0__::func_51(&(iParam0->f_10), 2))
	{
		return;
	}
	if (!func_221(2097152))
	{
		return;
	}
	if (!__LIB_2__::func_227(-4f, 1, 0, 0))
	{
		func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
		return;
	}
	if (!__LIB_0__::func_51(&(iParam0->f_10), 4))
	{
		func_563(&(iParam0->f_10), &(iParam0->f_30), 1, 0);
	}
	if (*iParam1 == 0)
	{
		__LIB_3__::func_732(0);
		func_596(iParam0, "SRVD_W_AILOG1", "SRVD_W_JILOG1", 1);
		func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
		WEAPON::_0x4820A6939D7CEF28(Global_35, 0);
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
		TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
		func_518(&(iParam0->f_10), 1024);
	}
	else if (*iParam1 == 1)
	{
		__LIB_3__::func_732(0);
		func_596(iParam0, "SRVD_W_AILOT1", "SRVD_W_JILOT1", 1);
		func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
		func_518(&(iParam0->f_10), 2048);
	}
}

void func_1382(int* iParam0)
{
	if (__LIB_0__::func_51(&(iParam0->f_9), 33554432))
	{
		return;
	}
	if (__LIB_14__::func_642(*iParam0, 1435919172, 1) || __LIB_14__::func_617(iParam0))
	{
		return;
	}
	TASK::TASK_SMART_FLEE_PED(*iParam0, Global_35, 150f, -1, 0, 3f, 0);
	__LIB_0__::func_325(&(iParam0->f_1));
	func_518(&(iParam0->f_9), 33554432);
}

bool func_1383()
{
	if (!__LIB_2__::func_1(Local_62.f_390[3 /*126*/], 0, 1))
	{
		return false;
	}
	if (__LIB_14__::func_606(Global_35, Local_62.f_1247[7 /*2*/]) || (__LIB_0__::func_665(Global_35, Local_62.f_390[3 /*126*/], 1, 1) < 3.06f && !func_221(4194304)))
	{
		return true;
	}
	return false;
}

void func_1384(int* iParam0)
{
	if (__LIB_0__::func_51(&(iParam0->f_9), 4194304))
	{
		return;
	}
	if (!__LIB_0__::func_51(&(iParam0->f_10), 1024))
	{
		return;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_62.f_1216[7]))
	{
		if (ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_62.f_1216[7], "bFemaleGrabGun"))
		{
			return;
		}
	}
	if (!func_221(2097152))
	{
		return;
	}
	if (!__LIB_14__::func_606(Global_35, Local_62.f_1247[15 /*2*/]))
	{
		return;
	}
	func_1128(iParam0, "FEMALE");
	func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
	if (!__LIB_0__::func_51(&(iParam0->f_10), 64))
	{
		func_1385(&(iParam0->f_30));
		func_1386(&(iParam0->f_30), 0);
		func_518(&(iParam0->f_10), 64);
	}
	func_518(&(iParam0->f_9), 4194304);
}

void func_1385(var uParam0)
{
	__LIB_2__::func_360(uParam0[0 /*11*/], "INTERACT_GREET");
	__LIB_2__::func_360(uParam0[1 /*11*/], "INTERACT_INSULT");
}

void func_1386(var uParam0, int iParam1)
{
	__LIB_2__::func_351(uParam0[0 /*11*/], iParam1);
	__LIB_2__::func_351(uParam0[0 /*11*/], iParam1);
}

bool func_1387(int* iParam0)
{
	if (__LIB_0__::func_51(&(iParam0->f_9), 33554432))
	{
		return false;
	}
	if (func_221(67108864))
	{
		return false;
	}
	if (!__LIB_14__::func_606(Global_35, Local_62.f_1247[8 /*2*/]))
	{
		return false;
	}
	func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
	func_224(67108864);
	return true;
}

void func_1389()
{
	if (!__LIB_14__::func_606(Global_35, Local_62.f_1290) && !__LIB_14__::func_606(Global_35, Local_62.f_1292))
	{
		func_1743(Local_62.f_1148[0 /*8*/], 1);
		func_1743(Local_62.f_1148[1 /*8*/], 1);
		func_1743(Local_62.f_1148[2 /*8*/], 1);
	}
	else
	{
		func_1743(Local_62.f_1148[0 /*8*/], 0);
		func_1743(Local_62.f_1148[1 /*8*/], 0);
		func_1743(Local_62.f_1148[2 /*8*/], 0);
	}
}

void func_1390(var uParam0, int iParam1)
{
	*uParam0 = __LIB_1__::func_545(uParam0->f_6, uParam0->f_2, uParam0->f_5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	if (!__LIB_2__::func_1(*uParam0, 0, 1))
	{
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
	if (!ENTITY::_0x88AD6CC10D8D35B2(*uParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, true, false);
	}
	PED::SET_PED_CAN_BE_TARGETTED(*uParam0, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 0, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 30, true);
	__LIB_2__::func_73(*uParam0, &(uParam0->f_1), joaat("BLIP_STYLE_COP"), 580546400, 0, 0);
}

char* func_1391()
{
	return "cowboy_b";
}

char* func_1392()
{
	return "incombat_low_intensity_aiming_shortarm";
}

void func_1395()
{
	int iVar0;
	func_1749();
	func_1750();
	func_298(1);
	LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), joaat("CRIME_ROBBERY"), 50, 0, true);
	func_224(1073741824 /* Float: 2f */);
	__LIB_0__::func_403();
	if (__LIB_0__::func_75(&uLocal_1785))
	{
		__LIB_0__::func_37(&uLocal_1785);
	}
	LAW::_0x0E3BDEED21BEB945(PLAYER::GET_PLAYER_INDEX(), 100);
	iVar0 = 0;
	while (iVar0 < Local_62.f_1148)
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_62.f_1148[iVar0 /*8*/]))
		{
		}
		else
		{
			__LIB_14__::func_611(&(Local_62.f_1148[iVar0 /*8*/]), 188, 1);
		}
		iVar0++;
	}
	func_1751(64);
}

void func_1396(var uParam0, float fParam1)
{
	if (!__LIB_2__::func_1(*uParam0, 0, 1))
	{
		return;
	}
	PED::SET_COMBAT_FLOAT(*uParam0, 6, fParam1);
}

void func_1397(int iParam0, int iParam1, vector3 vParam2)
{
	int iVar0;
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return;
	}
	__LIB_1__::func_766(iParam0, joaat("GROUP_PISTOL"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
	if (iParam1 != 2)
	{
		TASK::TASK_SHOOT_AT_COORD(0, vParam2, BUILTIN::CEIL((3.5f * 1000f)), joaat("FIRING_PATTERN_SLOW_SHOT"), 0);
	}
	else
	{
		TASK::TASK_AIM_GUN_AT_COORD(0, vParam2, BUILTIN::CEIL((3.5f * 1000f)), false, false);
	}
	__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
}

void func_1398()
{
	float fVar0;
	struct<16> Var1;
	if (!__LIB_0__::func_75(&(Local_62.f_1392[5 /*3*/])))
	{
		return;
	}
	if (!__LIB_1__::func_313(&(Local_62.f_1392[5 /*3*/]), 3f))
	{
		fVar0 = __LIB_0__::func_265(&(Local_62.f_1392[5 /*3*/]));
		Var1.f_8 = -1082130432;
		Var1 = { -285.0529f, 800.9851f, 120.1334f };
		Var1.f_12 = 1;
		Var1.f_6 = joaat("WEAPON_REVOLVER_CATTLEMAN");
		Var1.f_13 = 0;
		Var1.f_14 = 0;
		Var1.f_11 = Global_35;
		Var1.f_15 = 1;
		switch (Local_62.f_98)
		{
			case 0:
				if (fVar0 > 0.25f)
				{
					Var1.f_3 = { -285.5563f, 803.4608f, 120.4116f };
					Var1.f_7 = 20f;
					MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var1);
					Local_62.f_98++;
				}
				break;
			case 1:
				if (fVar0 > 1f)
				{
					Var1.f_3 = { -285.3181f, 803.5599f, 119.7571f };
					Var1.f_7 = 80f;
					MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var1);
					Local_62.f_98++;
				}
				break;
			case 2:
				if (fVar0 > 1.5f)
				{
					Var1.f_3 = { -285.1213f, 803.5945f, 119.7719f };
					Var1.f_7 = 20f;
					MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var1);
					Local_62.f_98++;
				}
				break;
			case 3:
				if (fVar0 > 2.5f)
				{
					Var1.f_3 = { -285.3235f, 803.5018f, 120.1629f };
					Var1.f_7 = 80f;
					MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var1);
					Local_62.f_98++;
				}
				break;
			case 4:
				if (fVar0 > 3.3f)
				{
					Var1.f_3 = { -285.54f, 803.5208f, 119.4203f };
					Var1.f_7 = 80f;
					MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var1);
					Local_62.f_98++;
				}
				break;
		}
	}
}

void func_1399(var uParam0, bool bParam1)
{
	if (!__LIB_2__::func_1(*uParam0, 0, 1))
	{
		return;
	}
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 30, bParam1);
}

int func_1400(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_57)
	{
		if (iVar0 != iParam0)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_62.f_1148[iVar0 /*8*/]))
			{
				return Local_62.f_1148[iVar0 /*8*/];
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_1405()
{
	switch (iLocal_29)
	{
		case 0:
			return 2710.102f, -1290.725f, 60.39987f;
		case 1:
			return 1321.746f, -1318.87f, 75.93783f;
		case 2:
			return -1787.652f, -384.9637f, 157.0498f;
		case 3:
			return -286.8831f, 818.0349f, 119.2403f;
		default:
			break;
	}
	return vLocal_59;
}

float func_1406()
{
	switch (iLocal_29)
	{
		case 0:
			return 3f;
		case 1:
			return 2f;
		case 2:
			return 4f;
		case 3:
			return 2.25f;
		default:
			break;
	}
	return 0f;
}

void func_1409(int iParam0)
{
	if (!__LIB_1__::func_917(iParam0))
	{
		return;
	}
	if (!__LIB_3__::func_610(iParam0, 2048))
	{
		__LIB_0__::func_15(__LIB_0__::func_14(joaat("SECRET_SHOP_ROB_DISCOVERED")), 1);
		__LIB_4__::func_261(iParam0, 2048);
	}
	__LIB_4__::func_261(iParam0, 32);
	__LIB_11__::func_395(iParam0, 1048576);
	if (__LIB_0__::func_181())
	{
		__LIB_4__::func_261(iParam0, 128);
		__LIB_11__::func_395(iParam0, 4194304);
	}
	else
	{
		__LIB_4__::func_261(iParam0, 64);
		__LIB_11__::func_395(iParam0, 2097152);
	}
	__LIB_9__::func_786(0, 0);
}

void func_1410(int iParam0)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(4, __LIB_3__::func_612(iParam0)))
	{
		return;
	}
	UILOG::_UILOG_REMOVE_ENTRY(4, __LIB_3__::func_612(iParam0));
	__LIB_14__::func_615(iParam0, -2147483648);
	__LIB_0__::func_703(0, -1);
}

void func_1415(int iParam0, vector3 vParam1, char[12] cParam4, vector3 vParam7)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		*iParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, cParam4, vParam7, __LIB_0__::func_93());
	}
}

void func_1416(int iParam0, vector3 vParam1, char[12] cParam4, vector3 vParam7)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		*iParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, cParam4, vParam7, __LIB_0__::func_93());
	}
}

int func_1417(char* sParam0)
{
	if (!AUDIO::PREPARE_MUSIC_EVENT(sParam0))
	{
		return 0;
	}
	return 1;
}

char* func_1418(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_911(iVar0);
}

char* func_1419(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_810(iVar0);
}

char* func_1420(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_900(iVar0);
}

char* func_1421(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return func_795(iVar0);
}

bool func_1422()
{
	if ((Local_1698 < 2 || Local_1698 == 7) || Local_1698 == 8)
	{
		return true;
	}
	return false;
}

void func_1423(int iParam0)
{
	iLocal_1755 = iParam0;
}

void func_1424()
{
	Local_1698.f_16 = "RE_WINDOW_PEEK";
	Local_1698.f_45 = 3f;
	Local_1698.f_51 = { -286.9f, 818.645f, 119.31f };
	Local_1698.f_54 = { 0f, 0f, -170f };
	Local_1698.f_31 = { -287.7f, 819.4f, 119.8f };
	Local_1698.f_34 = { -4f, 0.1f, -167.8f };
	Local_1698.f_39 = -167.8f;
	Local_1698.f_40 = -4.2f;
	Local_1698.f_41 = { -287.1f, 818f, 119.7f };
	Local_1698.f_1 = "script@proc@shoprobberies@valentinedoctor@windowPeek";
	__LIB_14__::func_645(&Local_1698, 256);
	__LIB_14__::func_645(&Local_1698, 512);
	__LIB_14__::func_645(&Local_1698, 8192);
	Local_1698.f_48 = { -286.9271f, 819.4828f, 118.3271f };
	bLocal_1756 = false;
}

void func_1447(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return;
	}
	*uParam0 = __LIB_1__::func_545(uParam0->f_6, uParam0->f_2, uParam0->f_5, 1, 1, 0, 1, 1, bParam2, bParam3, bParam4, 0, 0);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
		if (!ENTITY::_0x88AD6CC10D8D35B2(*uParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, true, false);
		}
		PED::SET_PED_CONFIG_FLAG(*uParam0, 243, true);
		func_1775(uParam0, iParam1);
	}
}

Vector3 func_1449()
{
	return 1319.398f, -1318.505f, 77.00304f;
}

void func_1450(var uParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return;
	}
	*uParam0 = __LIB_1__::func_545(uParam0->f_6, uParam0->f_2, uParam0->f_5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
		if (!ENTITY::_0x88AD6CC10D8D35B2(*uParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, true, false);
		}
		PED::SET_PED_CONFIG_FLAG(*uParam0, 243, true);
	}
}

void func_1451(int iParam0, vector3 vParam1, char[12] cParam4, vector3 vParam7, char* sParam10)
{
	*iParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, cParam4, vParam7, sParam10);
}

void func_1453(var uParam0)
{
	uParam0->f_82[0] = ANIMSCENE::_CREATE_ANIM_SCENE(__LIB_14__::func_659(0), 0, 0, false, true);
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_82[0], true, false))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_82[0]);
	}
}

void func_1476(int* iParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT(uParam4[iVar0 /*11*/], 14);
					iVar0++;
				}
			}
			__LIB_18__::func_849(*iParam0, uParam4, fParam3, iParam7, iParam8, iParam12, __LIB_0__::func_27(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

bool func_1478(int* iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
	bool bVar9;
	float fVar10;
	bVar1 = false;
	bVar2 = false;
	bVar3 = false;
	bVar4 = iParam10 & 128 != false;
	bVar5 = iParam10 & 64 != false;
	bVar6 = iParam10 & 512 != false;
	bVar7 = PED::IS_PED_ON_FOOT(Global_35);
	bVar8 = PED::IS_PED_INJURED(*iParam0);
	bVar9 = (((PED::_IS_PED_CARRYING(Global_35) || __LIB_2__::func_365(Global_35)) || __LIB_1__::func_869(Global_35)) || __LIB_2__::func_366(Global_35));
	fVar10 = -1f;
	if (__LIB_0__::func_75(&(iParam1->f_13)))
	{
		fVar10 = __LIB_0__::func_265(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*11*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*11*/])->f_8;
		}
		bVar2 = __LIB_0__::func_139((uParam4[iVar0 /*11*/])->f_6);
		__LIB_18__::func_850(*iParam0, uParam4[iVar0 /*11*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*11*/], 20))
		{
			bVar1 = true;
		}
		if (__LIB_3__::func_878(*iParam0, iParam1, uParam4[iVar0 /*11*/], bVar2, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar7, bVar8, bParam15, fVar10, bVar9))
		{
			if (!bParam18 && !bVar3)
			{
				if (__LIB_2__::func_367(iParam12, (uParam4[iVar0 /*11*/])->f_6))
				{
					if (!bVar5)
					{
						__LIB_5__::func_684(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar4)
					{
						__LIB_5__::func_687(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*11*/], 11))
					{
						__LIB_14__::func_648(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar3 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*11*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar6)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar3 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		__LIB_1__::func_501(iParam1, fParam2);
	}
	return bVar3;
}

bool func_1508(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
	if (!func_1840(iParam0, iParam1, bParam2, iParam5))
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
				func_1508(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			if (!func_1864(iParam0, iParam5, &bParam2, bParam3, bParam4))
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
			__LIB_1__::func_833(iParam0);
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
						func_1508(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_1508(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_1508(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_1508(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_1508(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_1508(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1508(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_1508(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_1508(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1508(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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
		func_1912(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_1510()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1920();
	func_1921();
	func_1922();
	func_1923();
	func_1924();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_1511(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1927(iParam0, 1, 1, -142743235, 1);
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

void func_1546()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1962(&uVar4, &iVar1, &iVar2, &iVar3)))
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

bool func_1557()
{
	if (!func_221(4))
	{
		return false;
	}
	if (func_957() && iLocal_26 != 53)
	{
		return false;
	}
	if (PED::_IS_PED_CARRYING(Global_35))
	{
		return false;
	}
	if (PED::_GET_LASSO_TARGET(Global_35) != 0)
	{
		return false;
	}
	return true;
}

bool func_1558()
{
	if (__LIB_14__::func_607(Local_62.f_1216[0], "bars_loop", "SCENE_RHDGUN_HELP"))
	{
		return true;
	}
	return false;
}

void func_1616(int iParam0, var uParam1)
{
	bool bVar0;
	if (func_335(1024))
	{
		return;
	}
	if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
	{
		bVar0 = true;
	}
	if (*uParam1 == 2 || *uParam1 == 2048)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		return;
	}
	__LIB_3__::func_732(0);
	func_1193("SRNG_C_HURT1", iParam0, Global_35);
	func_533(1024);
}

bool func_1617()
{
	float fVar0;
	float fVar1;
	if (!__LIB_0__::func_75(&(Local_62.f_1456)))
	{
		return true;
	}
	fVar0 = 6f;
	if (!__LIB_1__::func_313(&(Local_62.f_1456), fVar0))
	{
		fVar1 = __LIB_0__::func_265(&(Local_62.f_1456));
		if (fVar1 > 4f)
		{
			func_224(32);
		}
		return false;
	}
	__LIB_0__::func_37(&(Local_62.f_1456));
	return true;
}

void func_1618()
{
	int iVar0;
	char* sVar1;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_62.f_1216[0]))
	{
		return;
	}
	iVar0 = Local_62.f_1216[0];
	sVar1 = func_911(0);
	__LIB_9__::func_798(iVar0, "PED_PLAYER", Global_35, sVar1, 1);
	__LIB_9__::func_798(iVar0, "PED_GUNSMITH", Local_62.f_170, sVar1, 1);
	__LIB_9__::func_798(iVar0, "PED_GUARD_DOWNSTAIRS", Local_62.f_390[0 /*126*/], sVar1, 1);
	__LIB_14__::func_621(iVar0, "DOOR_DOWNSTAIRS", Local_62.f_1198[0 /*8*/], sVar1, 1);
	func_277(iVar0, "BOOL_STOP_WAIT_AT_DOOR_LOOP", 0, sVar1);
	func_277(iVar0, "BOOL_STOP_DOOR_OPEN_LOOP", 0, sVar1);
	func_277(iVar0, "BOOL_STOP_SCARED_LOOP", 0, sVar1);
}

bool func_1619()
{
	if (__LIB_0__::func_113())
	{
		if (AUDIO::_0x1ECC76792F661CF5("SRGA_A_HOLDUP") || AUDIO::_0x1ECC76792F661CF5("SRG_IG4_P1_a"))
		{
			return true;
		}
	}
	else if (AUDIO::_0x1ECC76792F661CF5("SRGA_J_HOLDUP") || AUDIO::_0x1ECC76792F661CF5("SRG_IG4_P1_J"))
	{
		return true;
	}
	return false;
}

bool func_1620(int iParam0, var uParam1)
{
	int iVar0;
	if (func_308(iParam0, 0, uParam1, &iVar0, 0, 0))
	{
		if (iVar0 == 8)
		{
			return true;
		}
	}
	return false;
}

bool func_1622()
{
	if (!func_1154())
	{
		return false;
	}
	if (func_280(Local_62.f_1216[5], "SCENE_VALDOC_GANGOPENBACKROOM", 0.039f))
	{
		return false;
	}
	return true;
}

bool func_1623()
{
	if (func_280(Local_62.f_1216[5], "SCENE_VALDOC_GANGOPENBACKROOM", 0.145f))
	{
		return true;
	}
	return false;
}

void func_1625()
{
	int iVar0;
	char* sVar1;
	iVar0 = Local_62.f_1216[4];
	sVar1 = func_795(4);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_62.f_1216[4]))
	{
		return;
	}
	__LIB_14__::func_621(iVar0, "objDoor01", Local_62.f_1226[11], sVar1, 1);
	__LIB_9__::func_798(iVar0, "pedDoctor", Local_62.f_170, sVar1, 1);
	func_277(iVar0, "bNoWaitAtDoor", 1, sVar1);
	func_277(iVar0, "bActionCower", 0, sVar1);
	func_277(iVar0, "bDoctorFlee", 0, sVar1);
	func_277(iVar0, "INVENTORY_BOOL", 0, sVar1);
	func_277(iVar0, "COUNTER_LOOP_BOOL", 0, sVar1);
}

void func_1627(int* iParam0, int iParam1)
{
	if (__LIB_0__::func_51(&(iParam0->f_9), 2048))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	if (!PED::_IS_PED_HOGTIED(*iParam0))
	{
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
	func_518(&(iParam0->f_9), 2048);
}

void func_1628(int iParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6)
{
	int iVar0;
	if (!__LIB_2__::func_1(*iParam0, 0, 1))
	{
		return;
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam1, fParam4, iParam5, fParam6, 0, 40000f);
	TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 0, 3f, 0);
	__LIB_1__::func_474(*iParam0, &iVar0, 0, 0, 1, 1);
}

void func_1629(int* iParam0)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	__LIB_2__::func_357(*iParam0, Global_36, 5, 1, 3);
	WEAPON::SET_CURRENT_PED_WEAPON(*iParam0, joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2716.023f, -1291.615f, 59.34498f, 1f, 20000, 0.25f, 0, 40000f);
	TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
	__LIB_1__::func_474(*iParam0, &iVar0, 0, 0, 1, 1);
}

void func_1630(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	if (!func_308(*uParam0, 0, uParam2, &iVar0, 0, 0))
	{
		func_870(uParam3, 65536);
		func_870(uParam3, 16384);
		return;
	}
	if (iVar0 == 16)
	{
		if (FIRE::IS_ENTITY_ON_FIRE(*uParam0))
		{
			func_2010(uParam0);
			func_870(uParam3, 65536);
			func_518(uParam3, 131072);
			func_518(uParam3, 16384);
			return;
		}
	}
	if (iVar0 == 8)
	{
		func_297(*uParam0, Global_35, &(Local_62.f_390[iParam1 /*126*/].f_64), 7000, vLocal_59, 1, 0);
		if (bParam4)
		{
			if (!__LIB_0__::func_51(uParam3, 4096))
			{
				if (*uParam0 == Local_62.f_390[2 /*126*/])
				{
					__LIB_8__::func_336(&(Local_62.f_1518), "PRNBG_G1_AIM1", *uParam0, Global_35, 0, 0, 1, 1);
				}
				else if (*uParam0 == Local_62.f_390[3 /*126*/])
				{
					__LIB_8__::func_336(&(Local_62.f_1518), "PRNBG_G2_AIM1", *uParam0, Global_35, 0, 0, 1, 1);
				}
				else if (*uParam0 == Local_62.f_390[4 /*126*/])
				{
					__LIB_8__::func_336(&(Local_62.f_1518), "PRNBG_G3_AIM1", *uParam0, Global_35, 0, 0, 1, 1);
				}
				func_518(uParam3, 4096);
				func_870(uParam3, 65536);
				func_870(uParam3, 16384);
				return;
			}
		}
	}
	if (iVar0 == 2 || iVar0 == 1)
	{
		func_518(uParam3, 16384);
		return;
	}
	if (iVar0 == 4)
	{
		func_518(uParam3, 65536);
		func_518(uParam3, 16384);
		return;
	}
	func_870(uParam3, 65536);
	func_870(uParam3, 16384);
}

void func_1631(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	if (Local_62.f_1471[0] != -1)
	{
		if (MISC::GET_FRAME_COUNT() <= Local_62.f_1471[0] + 10)
		{
			return;
		}
	}
	SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var2, 9);
	if (!ENTITY::DOES_ENTITY_EXIST(Var2) || !ENTITY::IS_ENTITY_A_PED(Var2))
	{
		func_1751(4096);
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var2.f_1) || !ENTITY::IS_ENTITY_A_PED(Var2.f_1))
	{
		func_1751(4096);
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var2);
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var2.f_1);
	if (!func_2011(iVar1))
	{
		func_1751(4096);
		return;
	}
	if (iVar0 != Global_35)
	{
		func_1751(4096);
		return;
	}
	func_517(4096);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		Local_62.f_1471[0] = MISC::GET_FRAME_COUNT();
	}
}

char* func_1632()
{
	return "cower_idle_pos_01";
}

char* func_1633()
{
	return "PBL_flinch_01";
}

char* func_1634()
{
	return "PBL_cower_idle_pos_01";
}

void func_1635(int iParam0, char* sParam1)
{
	func_553(iParam0, func_1633(), sParam1);
	func_553(iParam0, func_1636(), sParam1);
}

char* func_1636()
{
	return "PBL_flinch_02";
}

void func_1638(int iParam0)
{
	if (!func_335(2097152))
	{
		__LIB_8__::func_336(&(Local_62.f_1518), "PRNBG_G1_SHOTN1", iParam0, Global_35, 0, 0, 1, 1);
		func_533(2097152);
	}
}

void func_1639(int iParam0, char* sParam1, int iParam2, char* sParam3)
{
	if (!func_221(iParam0))
	{
		return;
	}
	func_277(iParam2, sParam1, 0, sParam3);
	func_418(iParam0);
}

bool func_1643(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_57)
	{
		if (iVar0 != iParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_62.f_1148[iVar0 /*8*/]))
			{
				func_1390(&(Local_62.f_1148[iVar0 /*8*/]), iVar0);
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_1644(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_62.f_1148)
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_62.f_1148[iVar0 /*8*/]))
		{
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_62.f_1148[iVar0 /*8*/], bParam0);
		}
		iVar0++;
	}
}

bool func_1645(int* iParam0, int* iParam1, int* iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_62.f_390[1 /*126*/]))
	{
		return false;
	}
	if (func_120(512) || func_120(2048))
	{
		return false;
	}
	if (!func_221(2097152))
	{
		return false;
	}
	if (!__LIB_14__::func_606(Global_35, Local_62.f_1290))
	{
		return false;
	}
	if (!__LIB_2__::func_227(-2f, 1, 0, 0))
	{
		return false;
	}
	if (!func_276(&(Local_62.f_1392[4 /*3*/]), 5f, 0, "TIMER_SDNGUN_PLAYER_LOITER_REACT_LINE_READY"))
	{
		return false;
	}
	__LIB_0__::func_37(&(Local_62.f_1392[4 /*3*/]));
	switch (iLocal_28)
	{
		case 0:
			func_1225(iParam0, &Global_35, "PRNBH_IG5_GO1", &(iParam0->f_64), Local_62.f_1216[3], "PBL_line_02", "SCENE_SDNGUN_GAMBLER_OWNER", "BOOL_STOP_COWER_IDLE_POS_01", 16384, -1);
			func_553(Local_62.f_1216[4], "PBL_line_03", "SCENE_SDNGUN_GAMBLER_MIDDLE");
			__LIB_9__::func_758(1);
			break;
		case 1:
			func_1225(iParam1, &Global_35, "PRNBH_IG5_GO2", &(iParam1->f_64), Local_62.f_1216[4], "PBL_line_03", "SCENE_SDNGUN_GAMBLER_MIDDLE", "BOOL_STOP_COWER_IDLE", 65536, -1);
			func_553(Local_62.f_1216[5], "PBL_line_03", "SCENE_SDNGUN_GAMBLER_WUSS");
			__LIB_9__::func_758(2);
			break;
		case 2:
			func_1225(iParam2, &Global_35, "PRNBH_IG5_GO3", &(iParam2->f_64), Local_62.f_1216[5], "PBL_line_03", "SCENE_SDNGUN_GAMBLER_WUSS", "BOOL_STOP_COWER_IDLE", 131072, -1);
			func_553(Local_62.f_1216[3], "PBL_line_03", "SCENE_SDNGUN_GAMBLER_OWNER");
			__LIB_9__::func_758(3);
			break;
		case 3:
			func_1225(iParam0, &Global_35, "PRNBH_IG5_OUT1", &(iParam0->f_64), Local_62.f_1216[3], "PBL_line_03", "SCENE_SDNGUN_GAMBLER_OWNER", "BOOL_STOP_COWER_IDLE_POS_01", 16384, -1);
			func_553(Local_62.f_1216[4], "PBL_line_04", "SCENE_SDNGUN_GAMBLER_MIDDLE");
			__LIB_9__::func_758(4);
			break;
		case 4:
			func_1225(iParam1, iParam0, "PRNBH_IG5_OUT2", &(iParam1->f_64), Local_62.f_1216[4], "PBL_line_04", "SCENE_SDNGUN_GAMBLER_MIDDLE", "BOOL_STOP_COWER_IDLE", 65536, 5000);
			func_553(Local_62.f_1216[5], "PBL_line_04", "SCENE_SDNGUN_GAMBLER_WUSS");
			__LIB_9__::func_758(5);
			break;
		case 5:
			func_1225(iParam2, &Global_35, "PRNBH_IG5_OUT3", &(iParam2->f_64), Local_62.f_1216[5], "PBL_line_04", "SCENE_SDNGUN_GAMBLER_WUSS", "BOOL_STOP_COWER_IDLE", 131072, -1);
			__LIB_9__::func_758(6);
			break;
		case 6:
			return true;
	}
	return false;
}

void func_1647(int* iParam0, char* sParam1, var uParam2, bool bParam3)
{
	if (__LIB_0__::func_51(&(iParam0->f_9), 268435456))
	{
		return;
	}
	if (!__LIB_0__::func_51(&(iParam0->f_9), 16777216))
	{
		if (__LIB_14__::func_617(iParam0))
		{
			return;
		}
		if (!func_221(67108864))
		{
			if (*iParam0 == Local_62.f_390[2 /*126*/])
			{
				if (!func_221(134217728))
				{
					__LIB_1__::func_148(&(Local_62.f_1392[12 /*3*/]));
					func_928(Local_62.f_1216[2], "OBJ_SAFE", Local_62.f_1226[1], "SCENE_SDNGUN_GAMBLER_GROUP", 1, 0);
					func_224(67108864);
				}
			}
		}
		func_518(&(iParam0->f_9), 16777216);
	}
	if (PED::IS_PED_RAGDOLL(*iParam0))
	{
		return;
	}
	func_928(*uParam2, sParam1, *iParam0, "Individual Scene", 1, 0);
	func_928(Local_62.f_1216[2], sParam1, *iParam0, "SCENE_SDNGUN_GAMBLER_GROUP", 1, 0);
	if (!func_221(67108864))
	{
		if (*iParam0 == Local_62.f_390[2 /*126*/])
		{
			if (!func_221(134217728))
			{
				func_1187();
				__LIB_1__::func_148(&(Local_62.f_1392[12 /*3*/]));
				func_928(Local_62.f_1216[2], "OBJ_SAFE", Local_62.f_1226[1], "SCENE_SDNGUN_GAMBLER_GROUP", 1, 0);
				func_224(67108864);
			}
		}
	}
	if (bParam3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			PED::_0xA180FBD502A03125(*iParam0, 1.5f, 1f);
			TASK::_TASK_INTIMIDATED_2(*iParam0, Global_35, 0, 0, 0, 0, 0, 0, 0);
			TASK::_0x41D1331AFAD5A091(*iParam0, 1, 0);
		}
		func_518(&(iParam0->f_9), 268435456);
		return;
	}
	__LIB_3__::func_732(1);
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		TASK::_TASK_SMART_FLEE_STYLE_PED(*iParam0, Global_35, 3, 32768, -1082130432 /* Float: -1f */, -1, 0);
	}
	func_518(&(iParam0->f_9), 268435456);
}

bool func_1648(int iParam0, char* sParam1, float fParam2, float fParam3)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return false;
	}
	if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0) > fParam2 && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0) < fParam3)
	{
		return true;
	}
	return false;
}

bool func_1649(var uParam0)
{
	if (!__LIB_0__::func_51(uParam0, 2048))
	{
		return false;
	}
	if ((__LIB_0__::func_51(uParam0, 4096) && __LIB_0__::func_51(uParam0, 8192)) && __LIB_0__::func_51(uParam0, 16384))
	{
		return false;
	}
	return true;
}

void func_1650(int* iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	if (!__LIB_14__::func_606(Global_35, Local_62.f_1247[4 /*2*/]))
	{
		return;
	}
	if (!func_276(&(Local_62.f_1392[4 /*3*/]), 10f, 0, "TIMER_SDNGUN_PLAYER_LOITER_REACT_LINE_READY"))
	{
		return;
	}
	__LIB_0__::func_37(&(Local_62.f_1392[4 /*3*/]));
	switch (iLocal_28)
	{
		case 0:
			__LIB_8__::func_336(&(Local_62.f_1518), "PRNBG_GD_KNK1", *iParam0, Global_35, 0, 0, 1, 1);
			__LIB_9__::func_758(1);
			break;
		case 1:
			__LIB_8__::func_336(&(Local_62.f_1518), "PRNBG_GD_KNK2", *iParam0, Global_35, 0, 0, 1, 1);
			__LIB_9__::func_758(2);
			break;
		case 2:
			__LIB_8__::func_336(&(Local_62.f_1518), "PRNBG_GD_KNK3", *iParam0, Global_35, 0, 0, 1, 1);
			__LIB_9__::func_758(6);
			break;
		case 6:
			break;
	}
}

Vector3 func_1654()
{
	return 2718.06f, -1291.69f, 59.84f;
}

void func_1656(int iParam0, int iParam1, int iParam2)
{
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return;
	}
	TASK::TASK_AIM_GUN_AT_ENTITY(iParam0, iParam1, iParam2, false, 1);
}

int func_1658(int* iParam0, var uParam1, char* sParam2, char* sParam3)
{
	var uVar0;
	if (!__LIB_2__::func_1(*iParam0, 0, 1))
	{
		return 1;
	}
	if (__LIB_0__::func_51(&(iParam0->f_9), 67108864))
	{
		return 1;
	}
	if (__LIB_14__::func_617(iParam0) && !func_280(Local_62.f_1216[2], "SCENE_SDNGUN_GAMBLER_GROUP", 0.9677f))
	{
		return 0;
	}
	if (func_1237(Local_62.f_1216[2], "SCENE_SDNGUN_GAMBLER_GROUP", &uVar0))
	{
		func_518(&(iParam0->f_9), 67108864);
		return 1;
	}
	if (__LIB_0__::func_51(&(iParam0->f_9), 268435456))
	{
		return 1;
	}
	if (*iParam0 == Local_62.f_390[2 /*126*/])
	{
		func_2015();
	}
	else if (*iParam0 == Local_62.f_390[3 /*126*/])
	{
		func_2016();
	}
	else
	{
		func_2017();
	}
	__LIB_14__::func_616(*uParam1, sParam2);
	func_518(&(iParam0->f_9), 67108864);
	return 1;
}

int func_1659(int* iParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5)
{
	bool bVar0;
	if (__LIB_0__::func_51(&(iParam0->f_10), 1024))
	{
		return 1;
	}
	if (!__LIB_0__::func_51(&(iParam0->f_10), 4))
	{
		func_563(&(iParam0->f_10), &(iParam0->f_30), 1, 0);
	}
	if (*uParam1 == 0)
	{
		func_596(iParam0, cParam2, cParam3, 1);
		bVar0 = true;
	}
	else if (*uParam1 == 1)
	{
		func_596(iParam0, cParam4, cParam5, 1);
		bVar0 = true;
	}
	if (!bVar0)
	{
		return 0;
	}
	__LIB_0__::func_37(&(Local_62.f_1392[4 /*3*/]));
	func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
	func_518(&(iParam0->f_10), 1024);
	return 1;
}

int func_1660(int* iParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5)
{
	if (__LIB_0__::func_51(&(iParam0->f_10), 65536))
	{
		return 1;
	}
	if (!__LIB_2__::func_227(-2.5f, 1, 0, 0))
	{
		func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
		return 0;
	}
	if (!__LIB_0__::func_51(&(iParam0->f_10), 32768))
	{
		if (!__LIB_0__::func_51(&(iParam0->f_10), 4))
		{
			func_563(&(iParam0->f_10), &(iParam0->f_30), 1, 0);
		}
	}
	else if (!__LIB_0__::func_51(&(iParam0->f_10), 16))
	{
		__LIB_2__::func_411(&(iParam0->f_30[1 /*11*/]), 1, 0);
	}
	if (*uParam1 == 0)
	{
		__LIB_0__::func_37(&(Local_62.f_1392[4 /*3*/]));
		func_596(iParam0, cParam2, cParam3, 1);
		func_870(&(iParam0->f_10), 8);
		func_518(&(iParam0->f_10), 32768);
	}
	else if (*uParam1 == 1)
	{
		if (*iParam0 == Local_62.f_390[4 /*126*/])
		{
			func_224(4194304);
		}
		__LIB_0__::func_37(&(Local_62.f_1392[4 /*3*/]));
		func_596(iParam0, cParam4, cParam5, 1);
		func_518(&(iParam0->f_10), 65536);
		func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
		return 1;
	}
	return 0;
}

void func_1661()
{
	int iVar0;
	char* sVar1;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_62.f_1216[2]))
	{
		return;
	}
	iVar0 = Local_62.f_1216[2];
	sVar1 = func_911(2);
	__LIB_9__::func_798(iVar0, "PED_GAMBLER_OWNER", Local_62.f_390[2 /*126*/], sVar1, 1);
	if (!__LIB_0__::func_51(&(Local_62.f_390[3 /*126*/].f_9), 268435456))
	{
		__LIB_9__::func_798(iVar0, "PED_GAMBLER_MIDDLE", Local_62.f_390[3 /*126*/], sVar1, 1);
	}
	if (!__LIB_0__::func_51(&(Local_62.f_390[4 /*126*/].f_9), 268435456))
	{
		__LIB_9__::func_798(iVar0, "PED_GAMBLER_WUSS", Local_62.f_390[4 /*126*/], sVar1, 1);
	}
	__LIB_9__::func_798(iVar0, "PED_PLAYER", Global_35, sVar1, 1);
	__LIB_14__::func_621(iVar0, "OBJ_CHAIR_GAMBLER_OWNER", Local_62.f_1226[2], sVar1, 1);
	__LIB_14__::func_621(iVar0, "OBJ_CHAIR_GAMBLER_MIDDLE", Local_62.f_1226[3], sVar1, 1);
	__LIB_14__::func_621(iVar0, "OBJ_CHAIR_GAMBLER_WUSS", Local_62.f_1226[4], sVar1, 1);
	__LIB_14__::func_621(iVar0, "OBJ_SAFE", Local_62.f_1226[1], sVar1, 1);
}

int func_1662()
{
	return joaat("PROP_PLAYER_NBX_GUN_GAMB_SAFE");
}

int func_1663(int* iParam0, var uParam1, char* sParam2)
{
	if (!__LIB_2__::func_1(*iParam0, 0, 1))
	{
		return 1;
	}
	if (__LIB_0__::func_51(&(iParam0->f_9), 134217728))
	{
		return 1;
	}
	if (__LIB_14__::func_617(iParam0) && !func_280(Local_62.f_1216[2], "SCENE_SDNGUN_GAMBLER_GROUP", 0.985f))
	{
		func_559(*uParam1, "PBL_cower_idle_pos_02", sParam2, 0);
		func_559(*uParam1, "PBL_cower_idle", sParam2, 0);
		return 0;
	}
	if (*iParam0 == Local_62.f_390[2 /*126*/] && !__LIB_0__::func_51(&(Local_62.f_390[2 /*126*/].f_9), 268435456))
	{
		func_2015();
		__LIB_14__::func_616(*uParam1, sParam2);
		__LIB_9__::func_793(*uParam1, "PBL_cower_idle_pos_02", sParam2, 1);
	}
	else if (*iParam0 == Local_62.f_390[3 /*126*/] && !__LIB_0__::func_51(&(Local_62.f_390[3 /*126*/].f_9), 268435456))
	{
		func_2016();
		__LIB_14__::func_616(*uParam1, sParam2);
		__LIB_9__::func_793(*uParam1, "PBL_cower_idle", sParam2, 1);
	}
	else if (!__LIB_0__::func_51(&(Local_62.f_390[4 /*126*/].f_9), 268435456))
	{
		func_2017();
		__LIB_14__::func_616(*uParam1, sParam2);
		__LIB_9__::func_793(*uParam1, "PBL_cower_idle", sParam2, 1);
	}
	func_518(&(iParam0->f_9), 134217728);
	return 1;
}

void func_1664(int* iParam0, float fParam1, float fParam2, var uParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8, float fParam9)
{
	if (__LIB_0__::func_51(&(iParam0->f_9), 1))
	{
		return;
	}
	if (!__LIB_0__::func_51(&(iParam0->f_9), 2097152) && !__LIB_0__::func_51(&(iParam0->f_9), 32768))
	{
		if (func_276(&(iParam0->f_120), fParam1, 1, "gambler.timerGenericA"))
		{
			__LIB_0__::func_37(&(iParam0->f_120));
			__LIB_9__::func_793(*uParam3, sParam5, sParam4, 1);
			func_277(*uParam3, sParam7, 1, sParam4);
			func_224(iParam8);
			func_518(&(iParam0->f_9), 2097152);
		}
	}
	else if (!__LIB_0__::func_51(&(iParam0->f_9), 8388608))
	{
		if (func_276(&(iParam0->f_120), fParam2, 1, "gambler.timerGenericA") || __LIB_0__::func_51(&(iParam0->f_9), 32768))
		{
			__LIB_0__::func_37(&(iParam0->f_120));
			__LIB_9__::func_793(*uParam3, sParam6, sParam4, 1);
			func_277(*uParam3, sParam7, 1, sParam4);
			func_518(&(iParam0->f_9), 8388608);
		}
	}
	else if (!__LIB_0__::func_51(&(iParam0->f_9), 4194304))
	{
		if (__LIB_14__::func_623(*uParam3, sParam4, sParam6))
		{
			if (func_280(*uParam3, sParam4, fParam9))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(*iParam0, Global_35, 3, 32768, -1082130432 /* Float: -1f */, -1, 0);
				}
				__LIB_2__::func_506(*uParam3, sParam4);
				func_518(&(iParam0->f_9), 4194304);
			}
		}
		else if (!__LIB_14__::func_617(iParam0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(*iParam0, Global_35, 3, 32768, -1082130432 /* Float: -1f */, -1, 0);
			}
			__LIB_2__::func_506(*uParam3, sParam4);
			func_518(&(iParam0->f_9), 4194304);
		}
	}
}

void func_1665(var uParam0, char[4] cParam1)
{
	if (__LIB_0__::func_51(&(uParam0->f_9), 32768))
	{
		return;
	}
	if (__LIB_0__::func_75(&(Local_62.f_1392[11 /*3*/])))
	{
		if (!__LIB_1__::func_285(&(Local_62.f_1392[11 /*3*/]), 4f))
		{
			return;
		}
		else
		{
			__LIB_0__::func_37(&(Local_62.f_1392[11 /*3*/]));
		}
	}
	if (!__LIB_0__::func_51(&(uParam0->f_9), 65536))
	{
		return;
	}
	if ((__LIB_0__::func_51(&(uParam0->f_9), 2097152) || __LIB_0__::func_51(&(uParam0->f_9), 8388608)) || __LIB_0__::func_51(&(uParam0->f_9), 4194304))
	{
		return;
	}
	if (__LIB_2__::func_227(0, 1, 0, 0))
	{
		__LIB_8__::func_336(&(Local_62.f_1518), cParam1, *uParam0, Global_35, 0, 0, 1, 1);
		return;
	}
	__LIB_1__::func_148(&(Local_62.f_1392[11 /*3*/]));
	func_518(&(uParam0->f_9), 32768);
}

void func_1666()
{
	__LIB_0__::func_37(&(Local_62.f_390[2 /*126*/].f_120));
	__LIB_0__::func_37(&(Local_62.f_390[3 /*126*/].f_120));
	__LIB_0__::func_37(&(Local_62.f_390[4 /*126*/].f_120));
}

char* func_1668()
{
	return "PROP_PLAYER_OPEN_RIFLECHEST_WINCHESTER";
}

bool func_1671(int iParam0)
{
	if (!__LIB_14__::func_606(iParam0, Local_62.f_1284))
	{
		return false;
	}
	if (__LIB_14__::func_606(iParam0, Local_62.f_1247[7 /*2*/]) || __LIB_14__::func_606(iParam0, Local_62.f_1247[8 /*2*/]))
	{
		return false;
	}
	return true;
}

void func_1672(int* iParam0, var uParam1, var uParam2)
{
	*uParam2 = PHYSICS::_ADD_ROPE_2(0f, 0f, 1f, 0f, 0f, 0f, 0.32f, 7, false, 31, -1f);
	PHYSICS::_0x522FA3F490E2F7AC(*uParam2, 1, 1);
	PHYSICS::_0xBB3E9B073E66C3C9(*uParam2, 1, 0, 1, 0);
	PHYSICS::_0xF27F1A8DE4F50A1B(*uParam2, 0.025f, -0.025f, 0.9993f, 1321.729f, -1319.462f, 73.95f);
	PHYSICS::_0x5A989B7EE3672A56(*uParam2, 1);
	PHYSICS::ATTACH_ENTITIES_TO_ROPE(*uParam2, *uParam1, *iParam0, 1321.729f, -1319.462f, 74.2913f, -0.04f, 0f, 0.05f, 1.31f, 0, 0, "", "", 0, -1, 33646, 0, 0, 1, 1);
	PHYSICS::_0x522FA3F490E2F7AC(*uParam2, 0, 1);
}

void func_1674()
{
	func_553(Local_62.f_1216[3], "PBL_captive_shot_03", "SCENE_RHDGUN_BASEMENT_GUNSMITH");
	func_553(Local_62.f_1216[3], "PBL_captive_shot_04", "SCENE_RHDGUN_BASEMENT_GUNSMITH");
	func_553(Local_62.f_1216[3], "PBL_captive_shot_05", "SCENE_RHDGUN_BASEMENT_GUNSMITH");
}

bool func_1675()
{
	if (__LIB_0__::func_113())
	{
		if (__LIB_14__::func_622("PRRGS_AILO_QG1") || __LIB_14__::func_622("PRRGS_AILO_QC1"))
		{
			return true;
		}
	}
	else if (__LIB_14__::func_622("PRRGS_JILO_QG1") || __LIB_14__::func_622("PRRGS_JILO_QC1"))
	{
		return true;
	}
	return false;
}

void func_1676()
{
	func_553(Local_62.f_1216[3], "PBL_plr_leaves", "SCENE_RHDGUN_BASEMENT_GUNSMITH");
	func_553(Local_62.f_1216[2], "PBL_plr_leaves", "SCENE_RHDGUN_BASEMENT_CAPTIVE");
}

void func_1677()
{
	func_553(Local_62.f_1216[3], "PBL_plr_returns", "SCENE_RHDGUN_BASEMENT_GUNSMITH");
	func_553(Local_62.f_1216[2], "PBL_plr_returns", "SCENE_RHDGUN_BASEMENT_CAPTIVE");
}

bool func_1678(int iParam0)
{
	return (Local_62.f_170.f_12 && iParam0) != 0;
}

void func_1679(int iParam0)
{
	if (func_1678(iParam0))
	{
		return;
	}
	Local_62.f_170.f_12 = (Local_62.f_170.f_12 || iParam0);
}

void func_1680()
{
	bool bVar0;
	__LIB_14__::func_629("SRGKREGMON", 0);
	if (__LIB_1__::func_322("PRRGS_AILO_QG1"))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_62.f_170) && AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_62.f_170))
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		__LIB_14__::func_629("PRRGS_AILO_QG1", bVar0);
	}
	if (__LIB_1__::func_322("PRRGS_JILO_QG1"))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_62.f_170) && AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_62.f_170))
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		__LIB_14__::func_629("PRRGS_JILO_QG1", bVar0);
	}
	if (!func_335(8388608))
	{
		__LIB_14__::func_629("SRGKIGP3e1", 0);
		__LIB_14__::func_629("SRGKIGP3e2", 0);
		__LIB_14__::func_629("SRGKIGP3e3", 0);
	}
	else if (!func_335(16777216))
	{
		__LIB_14__::func_629("PRRGS_G_LOIT1", 0);
		__LIB_14__::func_629("PRRGS_G_LOIT2", 0);
		__LIB_14__::func_629("PRRGS_G_LOIT3", 0);
	}
	__LIB_14__::func_629("SRGK_STEAL_1", 0);
	__LIB_14__::func_629("SRGK_STEAL_2", 0);
}

void func_1681(int* iParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	iVar0 = Local_62.f_1216[3];
	sVar1 = "SCENE_RHDGUN_BASEMENT_GUNSMITH";
	switch (iParam0->f_10)
	{
		case 0:
			iVar4 = __LIB_3__::func_547(*iParam0, Global_35, 1f);
			if (iVar4 == 2)
			{
				sVar2 = func_2018();
				func_1679(1);
			}
			else if (iVar4 == 3)
			{
				sVar2 = func_2019();
				func_1679(2);
			}
			else
			{
				return;
			}
			if (!func_559(iVar0, sVar2, sVar1, 0))
			{
				return;
			}
			func_1693();
			__LIB_9__::func_793(iVar0, sVar2, sVar1, 1);
			func_277(iVar0, "Stand_cower_bool", 0, sVar1);
			func_2020(1);
			break;
		case 1:
			if (func_1678(1))
			{
				sVar3 = func_2021();
			}
			else if (func_1678(2))
			{
				sVar3 = func_2022();
			}
			else
			{
				return;
			}
			if (!__LIB_14__::func_607(iVar0, sVar3, sVar1))
			{
				return;
			}
			if (func_276(&(Local_62.f_1392[10 /*3*/]), 3.5f, 0, "TIMER_RHDGUN_GUNSMITH_RETURNS_TO_AFRAID_LOOP_FROM_AIM"))
			{
				func_277(iVar0, "Stand_cower_bool", 1, sVar1);
				func_2020(2);
			}
			else if (iParam1 == 4)
			{
				__LIB_0__::func_37(&(Local_62.f_1392[10 /*3*/]));
			}
			break;
		case 2:
			if (!__LIB_14__::func_607(iVar0, "afraid_loop_a", sVar1))
			{
				return;
			}
			func_2020(3);
			break;
		case 3:
			func_2023(1);
			func_2023(2);
			func_2023(32);
			__LIB_1__::func_148(&(Local_62.f_1392[15 /*3*/]));
			func_553(iVar0, "PBL_stand_cower_left", sVar1);
			func_553(iVar0, "PBL_stand_cower_right", sVar1);
			func_553(iVar0, "PBL_flinch_right", sVar1);
			func_553(iVar0, "PBL_flinch_left", sVar1);
			func_1298();
			func_2020(0);
			break;
	}
}

void func_1682(int* iParam0)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	iVar0 = Local_62.f_1216[3];
	sVar1 = "SCENE_RHDGUN_BASEMENT_GUNSMITH";
	switch (iParam0->f_10)
	{
		case 0:
			iVar3 = __LIB_3__::func_547(*iParam0, Global_35, 1f);
			if (iVar3 == 2)
			{
				sVar2 = "PBL_stand_flinch_right";
				func_1679(1);
			}
			else if (iVar3 == 3)
			{
				sVar2 = "PBL_stand_flinch_left";
				func_1679(2);
			}
			else
			{
				return;
			}
			if (!func_559(iVar0, sVar2, sVar1, 0))
			{
				return;
			}
			func_1693();
			__LIB_9__::func_793(iVar0, sVar2, sVar1, 1);
			func_2020(2);
			break;
		case 2:
			if (!__LIB_14__::func_607(iVar0, "afraid_loop_a", sVar1))
			{
				return;
			}
			func_2020(3);
			break;
		case 3:
			func_2023(1);
			func_2023(2);
			func_2023(64);
			__LIB_1__::func_148(&(Local_62.f_1392[16 /*3*/]));
			func_553(iVar0, "PBL_stand_cower_left", sVar1);
			func_553(iVar0, "PBL_stand_cower_right", sVar1);
			func_553(iVar0, "PBL_flinch_right", sVar1);
			func_553(iVar0, "PBL_flinch_left", sVar1);
			func_1298();
			func_2020(0);
			break;
	}
}

void func_1683()
{
	if (__LIB_0__::func_113())
	{
		__LIB_14__::func_629("PRRGS_AILO_QC1", 0);
		__LIB_14__::func_629("PRRGS_JILO_QC1", 0);
	}
	else
	{
		__LIB_14__::func_629("PRRGS_AILO_QC1", 0);
		__LIB_14__::func_629("PRRGS_JILO_QG1", 0);
	}
	if (!func_335(4194304))
	{
		__LIB_14__::func_629("SRGKIG4d", 0);
		__LIB_14__::func_629("SRGKIG4d1", 0);
		__LIB_14__::func_629("SRGKIG4d2", 0);
		__LIB_14__::func_629("SRGKIG4d3", 0);
	}
	else if (!func_335(16777216))
	{
		__LIB_14__::func_629("PRRGS_C_LOIT1", 0);
		__LIB_14__::func_629("PRRGS_C_LOIT2", 0);
		__LIB_14__::func_629("PRRGS_C_LOIT3", 0);
	}
	if (func_44(1) || PED::_IS_PED_HOGTIED(Local_62.f_170))
	{
		__LIB_14__::func_629("PRRGS_IG6c1", 0);
		__LIB_14__::func_629("PRRGS_IG6c2", 0);
		__LIB_14__::func_629("PRRGS_IG6c3", 0);
		__LIB_14__::func_629("PRRGS_IG6c4", 0);
	}
	__LIB_14__::func_629("PRRGS_STEALB1", 0);
	__LIB_14__::func_629("SRGH_STEAL_1", 0);
	__LIB_14__::func_629("PRRGS_IG9_CAP", 0);
	__LIB_14__::func_629("PRRGS_RETURN_B", 0);
}

void func_1684()
{
	func_2024();
	__LIB_14__::func_616(Local_62.f_1216[2], "SCENE_RHDGUN_BASEMENT_CAPTIVE");
}

bool func_1686(int iParam0, var uParam1)
{
	int iVar0;
	if (func_308(iParam0, 0, uParam1, &iVar0, 0, 0))
	{
		if (iVar0 == 4)
		{
			return true;
		}
	}
	return false;
}

bool func_1687()
{
	int iVar0;
	char* sVar1;
	iVar0 = Local_62.f_1216[2];
	sVar1 = "SCENE_RHDGUN_BASEMENT_CAPTIVE";
	if (!__LIB_14__::func_607(iVar0, "afraid_loop_a", sVar1) && !__LIB_14__::func_607(iVar0, "afraid_loop_a_reset", sVar1))
	{
		return false;
	}
	return true;
}

bool func_1688()
{
	int iVar0;
	char* sVar1;
	iVar0 = Local_62.f_1216[2];
	sVar1 = "SCENE_RHDGUN_BASEMENT_CAPTIVE";
	if (!__LIB_14__::func_607(iVar0, "afraid_loop_b", sVar1) && !__LIB_14__::func_607(iVar0, "afraid_loop_b_reset", sVar1))
	{
		return false;
	}
	return true;
}

bool func_1689(int iParam0, char* sParam1)
{
	if (iLocal_46 != 51)
	{
		return false;
	}
	if (func_335(134217728) && !__LIB_1__::func_322("PRRGS_MISSHIM"))
	{
		return false;
	}
	if (!(__LIB_14__::func_623(iParam0, sParam1, "PBL_shoot_chains_standing") && func_1648(iParam0, sParam1, 0.456f, 0.592f)) && !(__LIB_14__::func_623(iParam0, sParam1, "PBL_shoot_chains_standing_cower") && func_1648(iParam0, sParam1, 0.492f, 0.62f)))
	{
		return false;
	}
	return true;
}

void func_1690(int iParam0, var uParam1, char* sParam2)
{
	vector3 vVar0;
	vVar0 = { PED::GET_DEAD_PED_PICKUP_COORDS(iParam0, 1.2f, 1.5f) };
	*uParam1 = { vVar0.x, vVar0.y, (vVar0.z + 1f) };
}

int func_1691(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_221(16777216))
	{
		__LIB_2__::func_411(uParam1[0 /*11*/], 0, 0);
		return 0;
	}
	if (__LIB_0__::func_51(uParam2, 1024))
	{
		return 1;
	}
	if (__LIB_0__::func_51(&(Local_62.f_390[0 /*126*/].f_9), 1))
	{
		__LIB_2__::func_411(uParam1[0 /*11*/], 0, 0);
		func_518(uParam2, 1024);
		return 0;
	}
	if ((!__LIB_0__::func_51(uParam2, 4) && !PED::_IS_PED_LASSOED(iParam0)) && !PED::_IS_PED_HOGTIED(iParam0))
	{
		__LIB_2__::func_411(uParam1[0 /*11*/], 1, 0);
		func_518(uParam2, 4);
	}
	if (iParam3 != 0)
	{
		return 0;
	}
	if (__LIB_2__::func_1(Local_62.f_170, 0, 0))
	{
		AUDIO::STOP_CURRENT_PLAYING_SPEECH(Local_62.f_170, 400);
	}
	func_596(&iParam0, "PRRGS_AILO_QG1", "PRRGS_JILO_QG1", 1);
	func_1297(1084227584 /* Float: 5f */);
	__LIB_2__::func_411(uParam1[0 /*11*/], 0, 0);
	func_870(uParam2, 4);
	func_518(uParam2, 1024);
	return 1;
}

int func_1692(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_221(16777216))
	{
		__LIB_2__::func_411(uParam1[0 /*11*/], 0, 0);
		return 0;
	}
	if (func_44(1))
	{
		__LIB_2__::func_411(uParam1[0 /*11*/], 0, 0);
		return 0;
	}
	if (__LIB_0__::func_51(uParam2, 4096))
	{
		if (func_335(1048576))
		{
			func_297(Local_62.f_170, Local_62.f_390[0 /*126*/], &(Local_62.f_170.f_42), 20000, vLocal_59, 1, 0);
			__LIB_1__::func_148(&(Local_62.f_390[0 /*126*/].f_120));
			func_533(2097152);
			func_1149(1048576);
		}
		else if (func_335(2097152))
		{
			if (__LIB_1__::func_313(&(Local_62.f_390[0 /*126*/].f_120), 11f))
			{
				__LIB_0__::func_37(&(Local_62.f_390[0 /*126*/].f_120));
				func_297(Local_62.f_170, Global_35, &(Local_62.f_170.f_42), 10000, vLocal_59, 1, 0);
				func_1149(2097152);
			}
		}
		return 1;
	}
	if (!__LIB_0__::func_51(uParam2, 8))
	{
		func_1341(uParam1[0 /*11*/], "INTERACT_QUESTION", 0);
		func_518(uParam2, 8);
	}
	if (iParam3 != 0)
	{
		return 0;
	}
	__LIB_3__::func_732(0);
	func_596(&iParam0, "PRRGS_AILO_QC1", "PRRGS_JILO_QC1", 1);
	func_533(1048576);
	func_1297(1084227584 /* Float: 5f */);
	__LIB_2__::func_411(uParam1[0 /*11*/], 0, 0);
	func_870(uParam2, 8);
	func_518(uParam2, 4096);
	return 1;
}

void func_1693()
{
	func_1289();
	__LIB_14__::func_616(Local_62.f_1216[3], "SCENE_RHDGUN_BASEMENT_GUNSMITH");
}

bool func_1694()
{
	if (__LIB_14__::func_607(Local_62.f_1216[3], "afraid_loop_a", "SCENE_RHDGUN_BASEMENT_GUNSMITH"))
	{
		return true;
	}
	return false;
}

void func_1695()
{
	func_553(Local_62.f_1216[3], "PBL_afraid_loop_a_reset", "SCENE_RHDGUN_BASEMENT_GUNSMITH");
}

bool func_1696()
{
	if (__LIB_14__::func_607(Local_62.f_1216[2], "afraid_loop_a", "SCENE_RHDGUN_BASEMENT_CAPTIVE"))
	{
		return true;
	}
	return false;
}

void func_1697()
{
	func_553(Local_62.f_1216[2], "PBL_afraid_loop_a_reset", "SCENE_RHDGUN_BASEMENT_CAPTIVE");
}

bool func_1698()
{
	if (__LIB_14__::func_607(Local_62.f_1216[2], "afraid_loop_b", "SCENE_RHDGUN_BASEMENT_CAPTIVE"))
	{
		return true;
	}
	return false;
}

void func_1699()
{
	func_553(Local_62.f_1216[2], "PBL_afraid_loop_b_reset", "SCENE_RHDGUN_BASEMENT_CAPTIVE");
}

bool func_1700()
{
	if (__LIB_14__::func_607(Local_62.f_1216[3], "afraid_loop_b", "SCENE_RHDGUN_BASEMENT_GUNSMITH"))
	{
		return true;
	}
	return false;
}

void func_1701()
{
	func_553(Local_62.f_1216[3], "PBL_afraid_loop_b_reset", "SCENE_RHDGUN_BASEMENT_GUNSMITH");
}

bool func_1702(int iParam0, char[4] cParam1, float fParam2, var uParam3, int iParam4)
{
	if (!func_276(&(Local_62.f_1392[5 /*3*/]), fParam2, 0, "TIMER_RHDGUN_PLAY_DLG_PLAYER_LOITER"))
	{
		return false;
	}
	__LIB_0__::func_37(&(Local_62.f_1392[5 /*3*/]));
	func_1193(cParam1, iParam0, Global_35);
	func_297(iParam0, Global_35, uParam3, iParam4, vLocal_59, 1, 0);
	return true;
}

Vector3 func_1703()
{
	return 1324.013f, -1319.592f, 74.51466f;
}

void func_1704(int* iParam0)
{
	__LIB_3__::func_732(0);
	func_596(iParam0, "PRSGS_MONEY", "PRSGS_MONEYJ", 1);
}

char* func_1707()
{
	return "PB_FLINCH_L_BASE1";
}

char* func_1708()
{
	return "pbBasementIdle1";
}

char* func_1709()
{
	return "PB_FLINCH_R_BASE1";
}

char* func_1710()
{
	return "PB_FLINCH_L_BASE2";
}

char* func_1711()
{
	return "pbBasementIdle2";
}

char* func_1712()
{
	return "PB_FLINCH_R_BASE2";
}

void func_1713(int iParam0, char* sParam1)
{
	func_553(iParam0, func_1708(), sParam1);
	func_553(iParam0, func_1711(), sParam1);
}

char* func_1715()
{
	return "PB_COWER_R_BASE1";
}

char* func_1716()
{
	return "PB_COWER_L_BASE1";
}

char* func_1717()
{
	return "PB_COWER_R_BASE2";
}

char* func_1718()
{
	return "PB_COWER_L_BASE2";
}

void func_1722(var uParam0, int iParam1, int iParam2)
{
	if (!func_308(*uParam0, 0, &(uParam0->f_89), iParam1, 0, 0))
	{
		func_870(&(uParam0->f_9), 16384);
		return;
	}
	if (*iParam1 == 8 || *iParam1 == 16384)
	{
		func_870(&(uParam0->f_9), 16384);
		return;
	}
	func_518(&(uParam0->f_9), 16384);
}

void func_1723(var uParam0, struct<2> Param1, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9, int iParam10)
{
	int iVar0;
	if (!__LIB_0__::func_51(&(uParam0->f_9), 8192))
	{
		return;
	}
	if (__LIB_0__::func_51(&(uParam0->f_9), 1048576))
	{
		return;
	}
	if (!__LIB_0__::func_75(&(uParam0->f_123)))
	{
		__LIB_1__::func_148(&(uParam0->f_123));
	}
	else if (__LIB_1__::func_313(&(uParam0->f_123), fParam9))
	{
		if (__LIB_2__::func_1(*uParam0, 0, 1))
		{
			TASK::CLEAR_PED_TASKS(*uParam0, true, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (iParam10 != 2)
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -284.7688f, 815.3671f, 118.3863f, Global_35, 2f, 1, 1f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -283.2133f, 816.1548f, 118.3863f, Global_35, 2f, 1, 1f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -283.1447f, 817.402f, 118.3863f, Global_35, 2f, 1, 1f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
			}
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Param1.f_1, 4000, 0, 0f, 0, 0, Param1, 1, 0, 0);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(*uParam0, &iVar0, 0, 0, 1, 1);
		}
		func_518(&(uParam0->f_9), 1048576);
	}
}

bool func_1724()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_55)
	{
		if (__LIB_2__::func_1(Local_62.f_390[iVar0 /*126*/], 0, 1))
		{
			if (PED::IS_PED_SHOOTING(Local_62.f_390[iVar0 /*126*/]))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_1725()
{
	int iVar0;
	switch (iLocal_29)
	{
		case 3:
			iVar0 = 0;
			while (iVar0 < iLocal_57)
			{
				if (iVar0 > 2)
				{
					return;
				}
				if (__LIB_2__::func_1(Local_62.f_1148[iVar0 /*8*/], 0, 1))
				{
					if (!__LIB_0__::func_86(Local_62.f_1322[iVar0 /*8*/].f_1))
					{
						TASK::TASK_SEEK_COVER_TO_COVER_POINT(Local_62.f_1148[iVar0 /*8*/], Local_62.f_1322[iVar0 /*8*/], Global_36, -1, 0, 0, 0);
					}
				}
				iVar0++;
			}
			break;
	}
}

void func_1728(bool bParam0)
{
	if (bParam0)
	{
		func_412();
		func_239(0);
	}
	else
	{
		func_251(0);
	}
	func_29(64);
}

bool func_1729(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_55)
	{
		if (iVar0 != iParam0)
		{
			if (__LIB_0__::func_51(&(Local_62.f_390[iVar0 /*126*/].f_9), 1048576))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1730(float fParam0)
{
	if (__LIB_14__::func_609(Local_62.f_1216[7], "bFemaleGrabGun", "SCENE_VALDOC_FEMALEPANIC"))
	{
		return false;
	}
	if (!func_771(Global_35))
	{
		return false;
	}
	if (!func_771(Local_62.f_390[3 /*126*/]))
	{
		return false;
	}
	if (!__LIB_2__::func_227(0, 1, 0, 0))
	{
		return false;
	}
	if (!func_276(&(Local_62.f_1392[3 /*3*/]), fParam0, 0, "TIMER_VALDOC_DELETE_DEPUTY_FEM_LOITER"))
	{
		return false;
	}
	__LIB_0__::func_37(&(Local_62.f_1392[3 /*3*/]));
	return true;
}

void func_1731(int* iParam0)
{
	if (__LIB_0__::func_51(&(iParam0->f_9), 256))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	if (__LIB_14__::func_606(*iParam0, Local_62.f_1290))
	{
		return;
	}
	func_2028(*iParam0, Local_62.f_1247[12 /*2*/], 1);
	func_518(&(iParam0->f_9), 256);
}

bool func_1732()
{
	if (func_280(Local_62.f_1216[4], "SCENE_VALDOC_HOLDUPBACKROOM", 0.93f))
	{
		return true;
	}
	return false;
}

void func_1733(int* iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!__LIB_2__::func_1(*iParam0, 0, 1))
	{
		return;
	}
	WEAPON::SET_CURRENT_PED_WEAPON(*iParam0, iParam2, false, 0, false, false);
	TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(*iParam0, uParam1->f_1, -1, 0, 0f, 0, 0, *uParam1, 0, iParam3, 0);
}

void func_1734()
{
	int iVar0;
	char* sVar1;
	iVar0 = Local_62.f_1216[7];
	sVar1 = "SCENE_VALDOC_FEMALEPANIC";
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar0))
	{
		return;
	}
	__LIB_9__::func_798(iVar0, "pedFlirtFemale", Local_62.f_390[3 /*126*/], sVar1, 1);
	__LIB_14__::func_621(iVar0, "weapPistolFemale", Local_62.f_1226[12], sVar1, 1);
	func_277(iVar0, "bFemaleGrabGun", 0, sVar1);
}

bool func_1735(var uParam0)
{
	if (__LIB_14__::func_620(*uParam0, "GangStartsSitting") || __LIB_14__::func_643(*uParam0, "script_proc@robberies@shop@valdoc@ig_4", "count_loop_short_gang"))
	{
		return true;
	}
	return false;
}

bool func_1737(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (__LIB_2__::func_1(Local_62.f_1021[0 /*63*/], 0, 1))
			{
				return true;
			}
			return false;
		case 4:
		case 8:
			if (__LIB_2__::func_1(Local_62.f_170, 0, 1))
			{
				return true;
			}
			return false;
		case 1:
		case 5:
			if (__LIB_2__::func_1(Local_62.f_390[0 /*126*/], 0, 1))
			{
				return true;
			}
			return false;
		case 2:
		case 6:
			if (__LIB_2__::func_1(Local_62.f_390[1 /*126*/], 0, 1) || __LIB_2__::func_1(Local_62.f_390[3 /*126*/], 0, 1))
			{
				return true;
			}
			return false;
		case 3:
			if (__LIB_2__::func_1(Local_62.f_390[2 /*126*/], 0, 1))
			{
				return true;
			}
			return false;
		case 7:
			if (__LIB_2__::func_1(Local_62.f_390[3 /*126*/], 0, 1))
			{
				return true;
			}
			return false;
		default:
			break;
	}
	return false;
}

void func_1738()
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_62.f_1216[6]))
	{
		return;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_62.f_1216[2]))
	{
		ANIMSCENE::SET_ANIM_SCENE_PAUSED(Local_62.f_1216[2], true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_62.f_1226[12]))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_62.f_1226[12], true);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_62.f_1216[6], "weapPistolFemale", Local_62.f_1226[12], 0);
	}
	if (__LIB_2__::func_1(Local_62.f_390[1 /*126*/], 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_62.f_1216[6], "pedFlirtMale", Local_62.f_390[1 /*126*/], 0);
	}
	if (__LIB_2__::func_1(Local_62.f_390[3 /*126*/], 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_62.f_1216[6], "pedFlirtFemale", Local_62.f_390[3 /*126*/], 0);
	}
}

void func_1739()
{
	__LIB_14__::func_629("SRVD_DOPEN2", 0);
	__LIB_14__::func_629("SRVD_DOPEN3", 0);
}

void func_1740(int* iParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
	__LIB_1__::func_474(*iParam0, &iVar0, 0, 0, 1, 1);
	if (VOLUME::_DOES_VOLUME_EXIST(iParam10))
	{
		PED::_0xFC3DB99C8144CD81(*iParam0, iParam10, 0, 0, 0);
	}
	__LIB_2__::func_73(*iParam0, &(iParam0->f_1), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
}

void func_1741(int* iParam0)
{
	bool bVar0;
	int iVar1;
	if (__LIB_0__::func_51(&(iParam0->f_13), 128))
	{
		return;
	}
	if (PED::IS_PED_RAGDOLL(*iParam0))
	{
		bVar0 = true;
	}
	if (func_308(*iParam0, 0, &(iParam0->f_14), &iVar1, 0, 0))
	{
		if ((iVar1 == 2 || iVar1 == 2048) || FIRE::IS_ENTITY_ON_FIRE(*iParam0))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		func_1258(&(iParam0->f_13), &(iParam0->f_85), 0);
		func_2029();
		return;
	}
	if (!__LIB_0__::func_51(&(iParam0->f_13), 1))
	{
		return;
	}
	if (!func_221(2097152))
	{
		return;
	}
	if (!func_221(524288))
	{
		return;
	}
	if (__LIB_0__::func_75(&(Local_62.f_1392[8 /*3*/])))
	{
		if (!__LIB_1__::func_285(&(Local_62.f_1392[8 /*3*/]), 10f))
		{
			return;
		}
	}
	if (!__LIB_0__::func_51(&(iParam0->f_13), 2))
	{
		if (__LIB_0__::func_113())
		{
			func_1258(&(iParam0->f_13), &(iParam0->f_85), 1);
		}
		else
		{
			__LIB_2__::func_411(&(iParam0->f_85[0 /*11*/]), 1, 0);
			func_518(&(iParam0->f_13), 2);
			func_518(&(iParam0->f_13), 4);
		}
	}
	else if ((!__LIB_0__::func_51(&(iParam0->f_13), 2048) && __LIB_0__::func_51(&(iParam0->f_13), 1024)) && __LIB_0__::func_113())
	{
		if (!__LIB_2__::func_466(&(iParam0->f_85[1 /*11*/]), 1, 0))
		{
			__LIB_2__::func_411(&(iParam0->f_85[1 /*11*/]), 1, 0);
			func_518(&(iParam0->f_13), 8);
		}
	}
	else if (!__LIB_0__::func_51(&(iParam0->f_13), 1024) && __LIB_0__::func_51(&(iParam0->f_13), 2048))
	{
		if (!__LIB_2__::func_466(&(iParam0->f_85[0 /*11*/]), 1, 0))
		{
			__LIB_2__::func_411(&(iParam0->f_85[0 /*11*/]), 1, 0);
			func_518(&(iParam0->f_13), 4);
		}
	}
	if (iParam0->f_209 == 0)
	{
		if (!__LIB_0__::func_51(&(iParam0->f_13), 1024))
		{
			__LIB_3__::func_732(0);
			func_596(iParam0, "SRVD_K_AILOG1", "SRVD_K_JILOG1", 1);
			__LIB_2__::func_411(&(iParam0->f_85[0 /*11*/]), 0, 0);
			func_870(&(iParam0->f_13), 4);
			func_518(&(iParam0->f_13), 1024);
			__LIB_1__::func_148(&(Local_62.f_1392[8 /*3*/]));
			if (__LIB_0__::func_51(&(iParam0->f_13), 2048) || __LIB_0__::func_181())
			{
				func_870(&(iParam0->f_13), 128);
			}
		}
	}
	else if (iParam0->f_209 == 1 && __LIB_0__::func_113())
	{
		if (!__LIB_0__::func_51(&(iParam0->f_13), 2048))
		{
			__LIB_3__::func_732(0);
			func_596(iParam0, "SRVD_K_AILOT1", "SRVD_K_JILOT1", 1);
			__LIB_2__::func_411(&(iParam0->f_85[1 /*11*/]), 0, 0);
			func_870(&(iParam0->f_13), 8);
			func_518(&(iParam0->f_13), 2048);
			__LIB_1__::func_148(&(Local_62.f_1392[8 /*3*/]));
			if (__LIB_0__::func_51(&(iParam0->f_13), 1024))
			{
				func_870(&(iParam0->f_13), 128);
			}
		}
	}
}

void func_1742(int* iParam0)
{
	if (func_44(134217728))
	{
		return;
	}
	if (!__LIB_14__::func_606(Global_35, Local_62.f_1247[14 /*2*/]))
	{
		return;
	}
	func_328();
	func_1258(&(iParam0->f_13), &(iParam0->f_85), 0);
	func_870(&(iParam0->f_13), 128);
	func_91(134217728);
}

void func_1743(int iParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::_0xCC2B20596E29E4E3(iParam0, 30) == bParam1)
	{
		return;
	}
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 30, bParam1);
}

void func_1749()
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < iLocal_57)
	{
		if (!__LIB_2__::func_1(Local_62.f_1148[iVar1 /*8*/], 0, 1))
		{
		}
		else if (iVar1 == 0 || iVar1 == 1)
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(0, Local_62.f_1322[iVar1 /*8*/].f_1, 1f);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_62.f_1148[iVar1 /*8*/], &iVar0, 0, 0, 1, 1);
		}
		else if (iVar1 == 2)
		{
			PED::_0xFC3DB99C8144CD81(Local_62.f_1148[iVar1 /*8*/], Local_62.f_1247[13 /*2*/], 0, 0, 0);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::SET_SEQUENCE_TO_REPEAT(iVar0, true);
			TASK::TASK_COMBAT_PED_TIMED(0, Global_35, 5000, 0);
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -282.4849f, 792.5594f, 117.4793f, Global_35, 2f, 1, 1f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
			TASK::TASK_COMBAT_PED_TIMED(0, Global_35, 7000, 0);
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -284.657f, 788.2574f, 117.5464f, Global_35, 2f, 1, 1f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
			TASK::TASK_COMBAT_PED_TIMED(0, Global_35, 6000, 0);
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -280.3936f, 789.9613f, 117.3537f, Global_35, 2f, 1, 1f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
			__LIB_1__::func_474(Local_62.f_1148[iVar1 /*8*/], &iVar0, 0, 0, 1, 1);
		}
		else if (iVar1 == 3)
		{
			TASK::TASK_COMBAT_PED(Local_62.f_1148[iVar1 /*8*/], Global_35, 0, 0);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -282.3903f, 782.9296f, 118.5073f, Global_35, 2f, 1, 1f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
			TASK::TASK_SHOOT_AT_ENTITY(0, Global_35, -1, 0, 0);
			__LIB_1__::func_474(Local_62.f_1148[iVar1 /*8*/], &iVar0, 0, 0, 1, 1);
		}
		iVar1++;
	}
}

void func_1750()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_57)
	{
		__LIB_0__::func_325(&(Local_62.f_1148[iVar0 /*8*/].f_1));
		iVar0++;
	}
}

void func_1751(int iParam0)
{
	if (!func_120(iParam0))
	{
		return;
	}
	Local_62.f_1623 = (Local_62.f_1623 - (Local_62.f_1623 && iParam0));
}

void func_1775(var uParam0, int iParam1)
{
	switch (iLocal_29)
	{
		case 3:
			PED::SET_PED_CONFIG_FLAG(*uParam0, 6, true);
			if (__LIB_2__::func_633(0))
			{
			}
			else
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, joaat("REL_GANG_ODRISCOLL"));
			}
			PED::SET_PED_CAN_BE_TARGETTED(*uParam0, true);
			PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 28, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 24, false);
			PED::SET_PED_SHOOT_RATE(*uParam0, 80);
			break;
	}
}

bool func_1840(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_787(iParam0) && __LIB_1__::func_800(iParam0))
		{
			func_2089(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == joaat("CUSTOM_SATCHEL"))
	{
		bParam2 = true;
	}
	else if (iParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}
	return true;
}

bool func_1864(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;
	iVar0 = __LIB_0__::func_775(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_915(iVar0);
			if (iParam1 == 1248274121)
			{
				__LIB_1__::func_618(iVar0);
			}
		}
		if (!__LIB_1__::func_761(iParam0, &uVar1, 1, 0, 0))
		{
			func_2089(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = __LIB_0__::func_940(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				__LIB_1__::func_708(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				__LIB_1__::func_708(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				__LIB_1__::func_708(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_MELEE(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !__LIB_0__::func_181())
				{
					return false;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!__LIB_0__::func_216(iVar0))
				{
					__LIB_1__::func_708(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					__LIB_1__::func_708(iVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = __LIB_0__::func_153(Global_35, 2, 0, 1);
				if ((((__LIB_0__::func_154(iVar7) && !Global_43891) && iVar7 != iVar0) && !__LIB_0__::func_293(24)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				bVar8 = true;
				if (__LIB_0__::func_154(iVar7) && __LIB_0__::func_293(24))
				{
					if (!__LIB_1__::func_708(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!__LIB_1__::func_708(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!__LIB_1__::func_708(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		__LIB_1__::func_240(480, 1);
	}
	return true;
}

void func_1912(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	char* sVar13;
	int iVar14;
	char* sVar15;
	if (iParam0 == joaat("AMMO_MOONSHINEJUG"))
	{
		return;
	}
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return;
	}
	if (iParam0 == joaat("KIT_HANDHELD_CATALOG"))
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!__LIB_0__::func_455())
	{
		__LIB_0__::func_456(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, __LIB_0__::func_196(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, __LIB_0__::func_196(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && __LIB_0__::func_774(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = __LIB_0__::func_356(iParam0);
	iVar10 = 0;
	iVar11 = joaat("INVENTORY");
	if ((iVar6 == joaat("AMMO") && iParam0 != joaat("AMMO_HATCHET")) && iParam0 != joaat("AMMO_HATCHET_CLEAVER"))
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	if (iVar6 == joaat("WEAPON_MOD") || iVar6 == joaat("WEAPON_DECORATION"))
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_2175(iParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar12 = joaat("COLOR_PURE_WHITE");
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = joaat("COLOR_GREYMID");
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = joaat("COLOR_RPG_SPECIAL_1");
		}
		else
		{
			iVar12 = joaat("COLOR_YELLOWDARK");
		}
	}
	sVar15 = __LIB_0__::func_54(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, __LIB_0__::func_776(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || __LIB_0__::func_192(iParam0, 1443104131)) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, __LIB_0__::func_776(iParam0));
	}
	__LIB_0__::func_924(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

void func_1920()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_2179(0);
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
	func_2179(1);
}

void func_1921()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_1508(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1922()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_2182(0);
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
	func_2182(1);
}

void func_1923()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_2182(0);
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
	func_2182(1);
}

void func_1924()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_1508(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1508(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1927(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1927(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1927(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1912(iParam0, -iParam1, bVar0, bVar1, bVar2);
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
			func_1927(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
		func_1912(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	__LIB_1__::func_879(iParam0, iParam1);
	return 1;
}

int func_1962(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_2223(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_1508(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_2010(var uParam0)
{
	if (*uParam0 == Local_62.f_390[2 /*126*/])
	{
		func_1187();
		func_928(Local_62.f_1216[2], "PED_GAMBLER_OWNER", Local_62.f_390[2 /*126*/], "SCENE_SDNGUN_GAMBLER_GROUP", 1, 0);
		func_928(Local_62.f_1216[3], "PED_GAMBLER_OWNER", Local_62.f_390[2 /*126*/], "SCENE_SDNGUN_GAMBLER_OWNER", 1, 0);
	}
	else if (*uParam0 == Local_62.f_390[3 /*126*/])
	{
		func_928(Local_62.f_1216[2], "PED_GAMBLER_MIDDLE", Local_62.f_390[3 /*126*/], "SCENE_SDNGUN_GAMBLER_GROUP", 1, 0);
		func_928(Local_62.f_1216[4], "PED_GAMBLER_MIDDLE", Local_62.f_390[3 /*126*/], "SCENE_SDNGUN_GAMBLER_MIDDLE", 1, 0);
	}
	else if (*uParam0 == Local_62.f_390[4 /*126*/])
	{
		func_928(Local_62.f_1216[2], "PED_GAMBLER_WUSS", Local_62.f_390[4 /*126*/], "SCENE_SDNGUN_GAMBLER_GROUP", 1, 0);
		func_928(Local_62.f_1216[5], "PED_GAMBLER_WUSS", Local_62.f_390[4 /*126*/], "SCENE_SDNGUN_GAMBLER_WUSS", 1, 0);
	}
}

bool func_2011(int iParam0)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0);
	switch (iVar0)
	{
		case joaat("REL_COP"):
			return true;
		case joaat("REL_GUAMA_LAW"):
			return true;
		default:
			break;
	}
	return false;
}

void func_2015()
{
	int iVar0;
	char* sVar1;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_62.f_1216[3]))
	{
		return;
	}
	iVar0 = Local_62.f_1216[3];
	sVar1 = func_911(3);
	__LIB_9__::func_798(iVar0, "PED_GAMBLER_OWNER", Local_62.f_390[2 /*126*/], sVar1, 1);
	func_277(iVar0, "BOOL_STOP_COWER_IDLE_POS_01", 0, sVar1);
	func_277(iVar0, "BOOL_STOP_COWER_IDLE_POS_02", 0, sVar1);
}

void func_2016()
{
	int iVar0;
	char* sVar1;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_62.f_1216[4]))
	{
		return;
	}
	iVar0 = Local_62.f_1216[4];
	sVar1 = func_911(4);
	__LIB_9__::func_798(iVar0, "PED_GAMBLER_MIDDLE", Local_62.f_390[3 /*126*/], sVar1, 1);
	func_277(iVar0, "BOOL_STOP_COWER_IDLE", 0, sVar1);
}

void func_2017()
{
	int iVar0;
	char* sVar1;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_62.f_1216[4]))
	{
		return;
	}
	iVar0 = Local_62.f_1216[5];
	sVar1 = func_911(5);
	__LIB_9__::func_798(iVar0, "PED_GAMBLER_WUSS", Local_62.f_390[4 /*126*/], sVar1, 1);
	func_277(iVar0, "BOOL_STOP_COWER_IDLE", 0, sVar1);
}

char* func_2018()
{
	return "PBL_stand_cower_right";
}

char* func_2019()
{
	return "PBL_stand_cower_left";
}

void func_2020(int iParam0)
{
	Local_62.f_170.f_10 = iParam0;
}

char* func_2021()
{
	return "stand_cower_right_loop";
}

char* func_2022()
{
	return "stand_cower_left_loop";
}

void func_2023(int iParam0)
{
	if (!func_1678(iParam0))
	{
		return;
	}
	Local_62.f_170.f_12 = (Local_62.f_170.f_12 - (Local_62.f_170.f_12 && iParam0));
}

void func_2024()
{
	int iVar0;
	char* sVar1;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_62.f_1216[2]))
	{
		return;
	}
	iVar0 = Local_62.f_1216[2];
	sVar1 = func_810(2);
	__LIB_9__::func_798(iVar0, "pedGunsmith", Local_62.f_170, sVar1, 1);
	__LIB_9__::func_798(iVar0, "pedCaptive", Local_62.f_390[0 /*126*/], sVar1, 1);
	func_277(iVar0, "BOOL_wait_loop", 0, sVar1);
	func_277(iVar0, "BOOL_afraid_loop_a", 0, sVar1);
	func_277(iVar0, "BOOL_afraid_loop_b", 0, sVar1);
	func_277(iVar0, "BOOL_cower_loop_a", 0, sVar1);
	func_277(iVar0, "BOOL_cower_loop_b", 0, sVar1);
}

void func_2028(int iParam0, int iParam1, bool bParam2)
{
	PED::_0xFC3DB99C8144CD81(iParam0, iParam1, 0, 0, 0);
	if (!bParam2)
	{
		PED::SET_PED_COMBAT_MOVEMENT(iParam0, 2);
	}
}

void func_2029()
{
	if (__LIB_0__::func_113())
	{
		__LIB_14__::func_629("SRVD_K_AILOG1", 0);
		__LIB_14__::func_629("SRVD_K_AILOT1", 0);
	}
	else
	{
		__LIB_14__::func_629("SRVD_K_JILOG1", 0);
		__LIB_14__::func_629("SRVD_K_JILOT1", 0);
	}
}

void func_2089(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	if (__LIB_0__::func_356(iParam0) != joaat("WEAPON"))
	{
		return;
	}
	iVar0 = __LIB_0__::func_775(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !__LIB_0__::func_214(iVar0))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_915(iVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, false) && __LIB_1__::func_614(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_1912(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

bool func_2175(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
				Jump @229; //curOff = 56
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
					Jump @229; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @229; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @229; //curOff = 185
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { Var3.f_2[iVar0 /*3*/] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_2179(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_1508(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1508(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1508(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2354(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_1511(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1927(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2360(Var0);
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

void func_2182(bool bParam0)
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
		func_1508(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1508(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1508(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1508(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1508(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1508(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1508(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1508(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1508(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1508(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1508(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1927(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1927(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1927(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1927(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1927(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1927(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1927(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1927(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1927(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1927(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1927(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_2223(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_2223(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_2223(iVar63, -915411861, 1, 0, 0));
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

void func_2354(int iParam0)
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
	func_1927(iParam0, 1, 1, -142743235, 1);
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
		func_1927(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_2360(struct<6> Param0)
{
	if (!func_2457(Param0.f_4, 1))
	{
	}
	if (!func_2457(Param0, 1))
	{
	}
	if (!func_2457(Param0.f_2, 1))
	{
	}
	if (!func_2457(Param0.f_5, 1))
	{
	}
	if (!func_2457(Param0.f_3, 1))
	{
	}
	if (!func_2457(Param0.f_1, 1))
	{
	}
}

bool func_2457(int iParam0, int iParam1)
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
				if (func_2457(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2457(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2457(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2457(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

