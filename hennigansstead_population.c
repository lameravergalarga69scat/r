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
#endregion
void __EntryFunction__()
{
	bool bVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	__LIB_9__::func_265();
	func_2();
	bVar0 = true;
	while (bVar0)
	{
		func_3();
		BUILTIN::WAIT(0);
	}
	__LIB_0__::func_11();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2()
{
	iLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2395f, -2410f, 35f, 0f, 0f, 0f, 150f, 120f, 50f, "m_volMacFarlanesRanch_Restriction");
	__LIB_3__::func_941(iLocal_14, 1);
	iLocal_15 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1405.399f, -2279.227f, 70f, 0f, 0f, 7f, 65f, 107.5f, 40f, "m_volThievesLanding_Restriction");
	__LIB_4__::func_859(iLocal_15, 0, 0, 1);
}

void func_3()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	if ((MISC::GET_FRAME_COUNT() % 20) != 0)
	{
		return;
	}
	uVar0 = PERSCHAR::_0x112DDF56300BC6E5(joaat("HEN_MFR_BLACKSMITH"));
	uVar1 = PERSCHAR::_0x112DDF56300BC6E5(joaat("HEN_MFR_RANCHER"));
	uVar2 = PERSCHAR::_0x112DDF56300BC6E5(joaat("HEN_MFR_RANCH_HAND"));
	uVar3 = PERSCHAR::_0x112DDF56300BC6E5(joaat("HEN_MFR_RANCH_HAND_2"));
	uVar4 = PERSCHAR::_0x112DDF56300BC6E5(joaat("HEN_MFR_RANCH_HAND_3"));
	uVar5 = PERSCHAR::_0x112DDF56300BC6E5(joaat("HEN_MFR_RANCH_HAND_4"));
	if (((((!PERSCHAR::_0x800DF3FC913355F3(uVar0) || !PERSCHAR::_0x800DF3FC913355F3(uVar1)) || !PERSCHAR::_0x800DF3FC913355F3(uVar2)) || !PERSCHAR::_0x800DF3FC913355F3(uVar3)) || !PERSCHAR::_0x800DF3FC913355F3(uVar4)) || !PERSCHAR::_0x800DF3FC913355F3(uVar5))
	{
		return;
	}
	if (((((PERSCHAR::_0xEB98B38CA60742D7(uVar0) && PERSCHAR::_0xEB98B38CA60742D7(uVar1)) && PERSCHAR::_0xEB98B38CA60742D7(uVar2)) && PERSCHAR::_0xEB98B38CA60742D7(uVar3)) && PERSCHAR::_0xEB98B38CA60742D7(uVar4)) && PERSCHAR::_0xEB98B38CA60742D7(uVar5))
	{
		if (!__LIB_0__::func_898(1167397384))
		{
			if (!STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(1736386364, Global_36))
			{
				__LIB_0__::func_803(1167397384);
			}
		}
	}
	else if (__LIB_0__::func_898(1167397384))
	{
		if (!STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(1736386364, Global_36))
		{
			__LIB_0__::func_804(1167397384);
		}
	}
}

