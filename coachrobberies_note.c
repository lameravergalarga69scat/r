#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	char* sLocal_4 = NULL;
	bool bLocal_5 = false;
#endregion
void __EntryFunction__()
{
	sLocal_4 = "SCRB";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	while (true)
	{
		switch (iLocal_0)
		{
			case 0:
				HUD::_TEXT_DATABASE_REQUEST(sLocal_4);
				iLocal_0 = 1;
				break;
			case 1:
				if (HUD::_TEXT_DATABASE_HAS_LOADED(sLocal_4))
				{
					__LIB_1__::func_148(&uLocal_1);
					iLocal_0 = 2;
				}
				break;
			case 2:
				if (__LIB_0__::func_265(&uLocal_1) > 15f)
				{
					func_1();
					iLocal_0 = 3;
				}
				else if (!bLocal_5)
				{
					func_4();
					bLocal_5 = true;
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
}

void func_1()
{
	__LIB_0__::func_105(1);
	HUD::_TEXT_DATABASE_DELETE(sLocal_4);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_4()
{
	int iVar0;
	char* sVar1;
	iVar0 = Global_40.f_9146.f_3;
	switch (iVar0)
	{
		case 4:
			sVar1 = "CR_RHD_R1";
			break;
		case 5:
			sVar1 = "CR_RHD_R2";
			break;
		case 6:
			sVar1 = "CR_RHD_R3";
			break;
		case 13:
			sVar1 = "CR_RHD_RTL";
			break;
		case 0:
			sVar1 = "CR_STR_R1";
			break;
		case 1:
			sVar1 = "CR_STR_R2";
			break;
		case 2:
			sVar1 = "CR_STR_R3";
			break;
	}
	__LIB_4__::func_981(sVar1, 0, 0, 1);
}

