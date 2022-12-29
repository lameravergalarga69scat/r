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
	struct<94> Local_9 = { 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 1, 0, 4 } ;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
#endregion
void __EntryFunction__()
{
	bool bVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}
	func_2();
	bVar0 = false;
	while (!SCRIPTS::_0x9E4EF615E307FBBE() && !bVar0)
	{
		func_3(&bVar0);
		BUILTIN::WAIT(0);
	}
	func_1();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	func_4();
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Local_9);
}

void func_2()
{
	int iVar0;
	func_5();
	Local_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "cheats");
	Local_9.f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Local_9, "currentSelection");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(Local_9.f_3, func_6(12), MISC::GET_HASH_KEY(""));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(Local_9.f_3, func_6(13), MISC::GET_HASH_KEY(""));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(Local_9.f_3, func_6(16), MISC::GET_HASH_KEY(""));
	Local_9.f_2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Local_9, "currentGroup");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(Local_9.f_2, func_6(14), MISC::GET_HASH_KEY("PM_SCR_CHEATS"));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(Local_9.f_2, func_6(15), MISC::GET_HASH_KEY(""));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(Local_9.f_2, func_6(16), MISC::GET_HASH_KEY(""));
	Local_9.f_1 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(Local_9, "dynamicList");
	iVar0 = 0;
	while (iVar0 <= 36)
	{
		func_7(iVar0);
		iVar0++;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(Local_9.f_3, func_6(13), MISC::GET_HASH_KEY(func_8(0)));
	func_9();
	func_10();
}

void func_3(bool bParam0)
{
	vector3 vVar0;
	int iVar4;
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(76559005))
	{
		if (!UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(76559005, &vVar0))
		{
		}
		else
		{
			switch (vVar0.x)
			{
				case -1740156697:
					if (vVar0.y < 0 || vVar0.y >= 37)
					{
					}
					else
					{
						if (Local_9.f_43 != vVar0.y)
						{
							if (Local_9.f_43 != -1)
							{
								func_11(Local_9.f_43);
							}
						}
						Local_9.f_43 = vVar0.y;
						func_12(Local_9.f_43);
						Jump @459; //curOff = 147
						switch (vVar0.z)
						{
							case -1943062401:
								*bParam0 = 1;
								break;
							case 172361245:
								func_13();
								break;
							case -1761800988:
								__LIB_16__::func_321();
								func_15();
								func_12(Local_9.f_43);
								Local_9.f_47 = 1;
								break;
						}
						Jump @459; //curOff = 216
						Jump @459; //curOff = 219
						if (__LIB_8__::func_974() || Local_9.f_47)
						{
							func_15();
							func_12(Local_9.f_43);
						}
						else
						{
							UIAPPS::_REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("SETTINGS_MENU"), -1882247919);
						}
						Jump @459; //curOff = 269
						func_17();
						if (func_18(Local_9.f_43))
						{
							UIAPPS::_REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("SETTINGS_MENU"), -1882247919);
						}
						else
						{
							func_12(Local_9.f_43);
						}
						Jump @459; //curOff = 313
						iVar4 = func_19(vVar0.z);
						if (iVar4 == -1)
						{
							if (vVar0.z == 0)
							{
								Jump @459; //curOff = 340
							}
							else
							{
								UIAPPS::_REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("SETTINGS_MENU"), 415950302);
							}
							else
							{
								Jump @453; //curOff = 364
								if (__LIB_16__::func_283(iVar4))
								{
									UIAPPS::_REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("SETTINGS_MENU"), -1954024225);
								}
								else if (func_21(iVar4) == 0)
								{
									if (!func_22(iVar4))
									{
										UIAPPS::_REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("SETTINGS_MENU"), -1001071426);
									}
									else
									{
										UIAPPS::_REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("SETTINGS_MENU"), 526258797);
										func_23(iVar4);
									}
									UIEVENTS::_EVENT_MANAGER_POP_EVENT(76559005);
								}
							}
						}
					}
					default:
						break;
			}
		}
	}
}

void func_4()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 <= (Local_9.f_42 - 1))
	{
		iVar3 = Local_9.f_4[iVar0];
		if (iVar3 == 0)
		{
		}
		else
		{
			iVar1 = func_24(iVar3);
			if (func_25(iVar3) == 369178237 || func_25(iVar3) == 1726108579)
			{
			}
			else if (__LIB_16__::func_374(iVar1))
			{
			}
			else
			{
				iVar2 = func_27(iVar1);
				switch (iVar2)
				{
					case 0:
						func_28(iVar3);
						break;
					case 1:
						func_29(iVar3);
						break;
					case 2:
						func_30(iVar3);
						break;
					default:
						break;
				}
			}
		}
		iVar0++;
	}
}

void func_5()
{
	Local_9.f_49 = (999999900 - __LIB_0__::func_492(1));
	if (__LIB_16__::func_230() != -1)
	{
		Local_9.f_48 = (__LIB_16__::func_230() / 50000);
	}
}

char* func_6(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "name";
		case 1:
			return "description";
		case 2:
			return "tipText";
		case 3:
			return "infoBox";
		case 4:
			return "converter";
		case 5:
			return "lockedState";
		case 6:
			return "recentlyUnlocked";
		case 7:
			return "active";
		case 8:
			return "activeText";
		case 9:
			return "value";
		case 10:
			return "minimum";
		case 11:
			return "maximum";
		case 12:
			return "infoBox";
		case 13:
			return "description";
		case 14:
			return "name";
		case 15:
			return "description";
		case 16:
			return "tipText";
		case 17:
			return "cheat";
		case 18:
			return "textValue";
		default:
			break;
	}
	return "";
}

void func_7(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar3 = __LIB_11__::func_819(iParam0);
	if (iVar3 != 0 && __LIB_0__::func_694(&(Local_9.f_91), iVar3, 1))
	{
		Local_9.f_50[iParam0] = Local_9.f_88[iVar3];
		return;
	}
	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Local_9.f_1, func_35(iParam0));
	iVar1 = func_27(iParam0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, func_6(0), MISC::GET_HASH_KEY(func_36(iParam0)));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, func_6(1), MISC::GET_HASH_KEY(func_37(iParam0)));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, func_6(2), MISC::GET_HASH_KEY(""));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, func_6(3), MISC::GET_HASH_KEY(""));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, func_6(4), func_38(iVar1));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, func_6(5), func_39(iParam0));
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar0, func_6(6), 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, func_6(17), iParam0);
	switch (iVar1)
	{
		case 0:
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar0, func_6(9), 0);
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar0, func_6(10), 0);
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar0, func_6(11), 1);
			if (iParam0 == 6)
			{
				DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar0, func_6(7), 0);
				if (__LIB_16__::func_230() == -1)
				{
					if (Local_9.f_49 <= 0)
					{
						DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar0, func_6(8), MISC::_CREATE_VAR_STRING(2, "CHEAT_TIP_AMOUNT_ADDED_MAX"));
					}
					else
					{
						DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar0, func_6(8), "");
					}
				}
				else
				{
					if (__LIB_16__::func_230() >= Local_9.f_49)
					{
						DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar0, func_6(8), MISC::_CREATE_VAR_STRING(2, "CHEAT_TIP_AMOUNT_ADDED_MAX"));
					}
					else
					{
						DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar0, func_6(8), MISC::_CREATE_VAR_STRING(2, "CHEAT_TIP_AMOUNT_ADDED", __LIB_16__::func_230()));
					}
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uVar0, func_6(9), 1);
				}
			}
			else
			{
				DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar0, func_6(7), __LIB_6__::func_666(iParam0));
			}
			break;
		case 1:
			DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, func_6(9), __LIB_0__::func_55(__LIB_6__::func_666(iParam0), 1, 0));
			DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, func_6(10), 0);
			DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, func_6(11), 1);
			break;
		case 2:
			Local_9.f_44[iVar3] = func_42(iVar3) + 1;
			if (Local_9.f_44[iVar3] == 0)
			{
				iVar2 = func_43(iVar3);
				if (iVar2 != -1)
				{
					Local_9.f_44[iVar3] = func_44(iVar3, iVar2) + 1;
				}
			}
			DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, func_6(9), Local_9.f_44[iVar3]);
			DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, func_6(10), 0);
			DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, func_6(11), func_45(iVar3));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, func_6(18), func_46(Local_9.f_44[iVar3]));
			if (func_47(iVar3))
			{
				if (Local_9.f_44[iVar3] == 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uVar0, func_6(5), joaat("UNLOCKED"));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uVar0, func_6(5), func_39(func_48(iVar3)));
				}
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uVar0, func_6(5), 369178237);
			}
			break;
		default:
			break;
	}
	if (iVar3 != 0)
	{
		__LIB_1__::func_959(&(Local_9.f_91), iVar3, 1);
		Local_9.f_88[iVar3] = Local_9.f_42;
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(Local_9.f_1, Local_9.f_42, func_50(iVar1), uVar0);
	Local_9.f_4[Local_9.f_42] = uVar0;
	Local_9.f_50[iParam0] = Local_9.f_42;
	Local_9.f_42++;
}

char* func_8(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	iVar1 = func_24(Local_9.f_4[iParam0]);
	iVar0 = func_25(Local_9.f_4[iParam0]);
	bVar3 = func_51(Local_9.f_4[iParam0]);
	switch (iVar0)
	{
		case joaat("UNLOCKED"):
			if (__LIB_6__::func_666(iVar1) || bVar3)
			{
				if (func_52(iVar1))
				{
					return "CHEAT_ACTIVATED_ONE_TIME_USE";
				}
				else if (__LIB_16__::func_284(iVar1))
				{
					iVar2 = func_48(__LIB_11__::func_819(iVar1));
					if (iVar2 == -1)
					{
						return func_54(__LIB_11__::func_819(iVar1));
					}
					else
					{
						return func_37(iVar2);
					}
				}
				else if (iVar1 == 6)
				{
					return func_37(iVar1);
				}
				else
				{
					return "CHEAT_ACTIVATED_DESCRIPTION";
				}
			}
			else
			{
				return func_37(iVar1);
			}
			break;
		case 369178237:
		case 1726108579:
			return "CHEAT_UNLOCK_DESCRIPTION";
		case 866112557:
			if (__LIB_16__::func_374(iVar1))
			{
				return "CHEAT_DISABLED_DESCRIPTION";
			}
			else if (__LIB_6__::func_666(iVar1) || bVar3)
			{
				if (func_52(iVar1))
				{
					return "CHEAT_ACTIVATED_ONE_TIME_USE";
				}
				else if (iVar1 == 6)
				{
					return "CHEAT_ACTIVATED_MONEY_MAX";
				}
				else
				{
					return "CHEAT_ACTIVATED_DESCRIPTION";
				}
			}
			else if (iVar1 == 6)
			{
				return "CHEAT_ACTIVATED_MONEY_MAX";
			}
			else
			{
				return "CHEAT_DISABLED_DESCRIPTION";
			}
			break;
		default:
			break;
	}
	return "CHEATS_GROUP_DESC";
}

void func_9()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iVar1 = iVar0;
		if (iVar1 == 0 || iVar1 == -1)
		{
		}
		else
		{
			func_55(iVar1);
		}
		iVar0++;
	}
}

void func_10()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar2 = iVar0;
		if (iVar2 == -1 || iVar2 == 0)
		{
			Local_9.f_93[iVar0] = -1;
		}
		else
		{
			iVar1 = func_56(iVar2);
			if (iVar1 == -1)
			{
				Local_9.f_93[iVar0] = -1;
			}
			else
			{
				Local_9.f_93[iVar0] = Local_9.f_50[iVar1];
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Local_9.f_4[Local_9.f_93[iVar0]], func_6(9), 1);
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Local_9.f_4[Local_9.f_93[iVar0]], func_6(7), 1);
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(Local_9.f_4[Local_9.f_93[iVar0]], func_6(5), 866112557);
			}
		}
		iVar0++;
	}
}

void func_11(int iParam0)
{
	if (0 == Local_9.f_4[iParam0])
	{
		return;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(Local_9.f_4[iParam0], func_6(6)))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Local_9.f_4[iParam0], func_6(6), 0);
	}
}

void func_12(int iParam0)
{
	int iVar0;
	iVar0 = func_24(Local_9.f_4[iParam0]);
	if (__LIB_16__::func_284(iVar0))
	{
		func_55(__LIB_11__::func_819(iVar0));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(Local_9.f_3, func_6(13), func_57(Local_9.f_4[iParam0]));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(Local_9.f_3, func_6(13), MISC::GET_HASH_KEY(func_8(iParam0)));
	}
}

void func_13()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = func_24(Local_9.f_4[Local_9.f_43]);
	iVar1 = func_27(iVar0);
	switch (iVar1)
	{
		case 0:
			break;
		case 1:
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(Local_9.f_4[Local_9.f_43], func_6(9), 0);
			break;
		case 2:
			if (!__LIB_16__::func_284(iVar0))
			{
			}
			else
			{
				iVar2 = __LIB_11__::func_819(iVar0);
				Local_9.f_44[iVar2] = 0;
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(Local_9.f_4[Local_9.f_43], func_6(9), 0);
			}
			default:
				break;
	}
}

void func_15()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = func_24(Local_9.f_4[Local_9.f_43]);
	iVar2 = func_27(iVar0);
	switch (iVar2)
	{
		case 0:
			if (func_58(iVar0))
			{
				iVar3 = func_59(iVar0);
				if (iVar3 != -1 && iVar3 != 0)
				{
					if (Local_9.f_93[iVar3] != -1)
					{
						if (__LIB_16__::func_286(iVar0) != 0)
						{
							if (func_61())
							{
							}
							else
							{
								iVar1 = func_24(Local_9.f_4[Local_9.f_93[iVar3]]);
								DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Local_9.f_4[Local_9.f_93[iVar3]], func_6(9), 0);
								DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Local_9.f_4[Local_9.f_93[iVar3]], func_6(7), 0);
								if (__LIB_16__::func_374(iVar1))
								{
									DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(Local_9.f_4[Local_9.f_93[iVar3]], func_6(5), 866112557);
								}
								else if (__LIB_16__::func_283(iVar1))
								{
									DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(Local_9.f_4[Local_9.f_93[iVar3]], func_6(5), joaat("UNLOCKED"));
								}
								else
								{
									DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(Local_9.f_4[Local_9.f_93[iVar3]], func_6(5), 369178237);
								}
								Local_9.f_93[iVar3] = Local_9.f_43;
								DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Local_9.f_4[Local_9.f_43], func_6(6), 0);
								DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Local_9.f_4[Local_9.f_43], func_6(9), 1);
								if (iVar0 == 6)
								{
									Local_9.f_48++;
									iVar4 = (50000 * Local_9.f_48);
									iVar4 = __LIB_0__::func_309(iVar4, 0, Local_9.f_49);
									func_63(iVar4);
									if (iVar4 >= Local_9.f_49)
									{
										DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(Local_9.f_4[Local_9.f_43], func_6(8), MISC::_CREATE_VAR_STRING(2, "CHEAT_TIP_AMOUNT_ADDED_MAX"));
										DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(Local_9.f_4[Local_9.f_43], func_6(5), 866112557);
									}
									else
									{
										DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(Local_9.f_4[Local_9.f_43], func_6(8), MISC::_CREATE_VAR_STRING(2, "CHEAT_TIP_AMOUNT_ADDED", iVar4));
									}
								}
								else
								{
									DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Local_9.f_4[Local_9.f_43], func_6(7), 1);
									DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(Local_9.f_4[Local_9.f_43], func_6(5), 866112557);
								}
								Jump @549; //curOff = 537
								Jump @549; //curOff = 540
							}
						}
					}
				}
			}
			default:
				break;
	}
}

void func_17()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = Local_9.f_43;
	iVar1 = func_24(Local_9.f_4[iVar0]);
	if (!__LIB_16__::func_284(iVar1))
	{
		return;
	}
	iVar2 = __LIB_11__::func_819(iVar1);
	Local_9.f_44[__LIB_11__::func_819(iVar1)] = func_64(Local_9.f_4[iVar0]);
	func_65(iVar0, Local_9.f_44[iVar2], iVar2);
}

bool func_18(int iParam0)
{
	if (__LIB_8__::func_974())
	{
		return false;
	}
	if (Local_9.f_47)
	{
		return false;
	}
	if (func_64(Local_9.f_4[iParam0]) == 0)
	{
		return false;
	}
	return func_25(Local_9.f_4[iParam0]) == joaat("UNLOCKED");
}

int func_19(int iParam0)
{
	switch (iParam0)
	{
		case 581914968:
			return 0;
		case -1135265458:
			return 1;
		case -204990980:
			return 2;
		case 191810668:
			return 3;
		case 811595622:
			return 4;
		case -1622621761:
			return 5;
		case -607335704:
			return 6;
		case 1610351013:
			return 7;
		case -1591149431:
			return 8;
		case joaat("SHARE"):
			return 9;
		case 628479678:
			return 10;
		case 51531122:
			return 11;
		case 1176666639:
			return 12;
		case -947916363:
			return 13;
		case 1129394776:
			return 14;
		case 754345461:
			return 15;
		case -307358511:
			return 16;
		case 2110824426:
			return 17;
		case -568384875:
			return 18;
		case -372443002:
			return 19;
		case -398091677:
			return 20;
		case 1398216266:
			return 21;
		case 1376520660:
			return 22;
		case -1761439609:
			return 23;
		case -1815939956:
			return 24;
		case -55979384:
			return 25;
		case 849826687:
			return 26;
		case -1241222984:
			return 27;
		case 532296387:
			return 28;
		case 230711733:
			return 29;
		case 1287277822:
			return 30;
		case 1783177390:
			return 31;
		case -2101408762:
			return 32;
		case -1738520838:
			return 33;
		case 1006082220:
			return 34;
		case 741921176:
			return 35;
		case 1956723308:
			return 36;
		default:
			break;
	}
	return -1;
}

int func_21(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 0;
		case 3:
			return 2;
		case 4:
			return 2;
		case 5:
			return 0;
		case 6:
			return 2;
		case 7:
			return 1;
		case 8:
			return 2;
		case 9:
			return 1;
		case 10:
			return 0;
		case 11:
			return 2;
		case 12:
			return 2;
		case 13:
			return 2;
		case 14:
			return 0;
		case 15:
			return 2;
		case 16:
			return 2;
		case 17:
			return 2;
		case 18:
			return 2;
		case 19:
			return 2;
		case 20:
			return 1;
		case 21:
			return 2;
		case 22:
			return 0;
		case 23:
			return 2;
		case 24:
			return 2;
		case 25:
			return 2;
		case 26:
			return 2;
		case 27:
			return 0;
		case 28:
			return 1;
		case 29:
			return 2;
		case 30:
			return 2;
		case 31:
			return 2;
		case 32:
			return 1;
		case 33:
			return 0;
		case 34:
			return 1;
		case 35:
			return 2;
		case 36:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_22(int iParam0)
{
	int iVar0;
	if (__LIB_16__::func_283(iParam0))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 <= (func_66(iParam0) - 1))
	{
		if (func_68(func_67(iParam0, iVar0)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_23(int iParam0)
{
	int iVar0;
	iVar0 = Local_9.f_50[iParam0];
	if (0 == Local_9.f_4[iVar0])
	{
		return;
	}
	func_69(iParam0);
	if (__LIB_16__::func_284(iParam0))
	{
		if (func_25(Local_9.f_4[iVar0]) != 369178237)
		{
			if (!func_70(iParam0, Local_9.f_44[__LIB_11__::func_819(iParam0)]))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Local_9.f_4[iVar0], func_6(6), 1);
				return;
			}
		}
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(Local_9.f_4[iVar0], func_6(5), func_39(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Local_9.f_4[iVar0], func_6(6), 1);
}

int func_24(int iParam0)
{
	return DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_6(17));
}

int func_25(int iParam0)
{
	return DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(iParam0, func_6(5));
}

int func_27(int iParam0)
{
	if (__LIB_16__::func_284(iParam0))
	{
		return 2;
	}
	if (func_74(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_28(int iParam0)
{
	int iVar0;
	iVar0 = func_24(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (!__LIB_16__::func_283(iVar0))
	{
		return;
	}
	if (!func_75(iParam0))
	{
		if (!func_52(iVar0))
		{
			if (__LIB_6__::func_666(iVar0))
			{
				func_76(iVar0);
			}
		}
		return;
	}
	func_77(iVar0);
	switch (iVar0)
	{
		case 5:
			__LIB_19__::func_524();
			break;
	}
}

void func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = func_24(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (!__LIB_16__::func_283(iVar0))
	{
		return;
	}
	iVar1 = func_64(iParam0);
	if (__LIB_6__::func_666(iVar0))
	{
		if (iVar1 <= 0)
		{
			__LIB_18__::func_935(iVar0);
		}
	}
	else if (iVar1 == 1)
	{
		func_77(iVar0);
	}
}

void func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar3 = func_24(iParam0);
	if (!__LIB_16__::func_284(iVar3))
	{
		return;
	}
	iVar0 = __LIB_11__::func_819(iVar3);
	iVar1 = func_48(iVar0);
	iVar2 = __LIB_16__::func_232(iVar0);
	if (iVar1 == iVar2 && iVar2 != -1)
	{
		return;
	}
	iVar4 = func_43(iVar0);
	if (iVar1 == iVar4 && iVar4 != -1)
	{
		return;
	}
	if (iVar1 == -1)
	{
		if (iVar2 == -1)
		{
			if (iVar4 != -1)
			{
				func_76(iVar4);
			}
		}
		else
		{
			__LIB_18__::func_935(iVar2);
		}
	}
	else if (__LIB_16__::func_283(iVar1) && !__LIB_16__::func_374(iVar1))
	{
		if (iVar4 != -1)
		{
			func_76(iVar4);
		}
		func_77(iVar1);
	}
}

char* func_35(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CHEAT_INFINITE_AMMO";
		case 1:
			return "CHEAT_BASIC_WEAPONS";
		case 2:
			return "CHEAT_HEAVY_WEAPONS";
		case 3:
			return "CHEAT_STEALTH_WEAPONS";
		case 4:
			return "CHEAT_GUNSLINGER";
		case 5:
			return "CHEAT_REMOVE_FOG_OF_WAR";
		case 6:
			return "CHEAT_ADD_MONEY";
		case 7:
			return "CHEAT_UNLOCK_ALL_PLAYER_OUTFITS";
		case 8:
			return "CHEAT_UNLOCK_ALL_RECIPES";
		case 9:
			return "CHEAT_INCREASE_CAMP_UPGRADES_TO_MAX";
		case 10:
			return "CHEAT_INCREASE_HONOR_TO_MAX";
		case 11:
			return "CHEAT_DECREASE_HONOR_TO_MIN";
		case 12:
			return "CHEAT_RESET_HONOR_TO_NEUTRAL";
		case 13:
			return "CHEAT_INFINITE_DEADEYE";
		case 14:
			return "CHEAT_INFINITE_STAMINA";
		case 15:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_1";
		case 16:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_2";
		case 17:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_3";
		case 18:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_4";
		case 19:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_5";
		case 20:
			return "CHEAT_SET_RPG_TANKS_TO_FULL";
		case 21:
			return "CHEAT_SET_RPG_TANK_STAT_LEVEL_TO_FULL";
		case 22:
			return "CHEAT_SET_RPG_TANKS_TO_FULL_AND_OVERPOWERED";
		case 23:
			return "CHEAT_INCREASE_HORSE_BOND_TO_MAX";
		case 24:
			return "CHEAT_SET_HORSE_TO_SPAWN_NEAR_PLAYER_ON_WHISTLE";
		case 25:
			return "CHEAT_BECOME_DRUNK";
		case 26:
			return "CHEAT_SPAWN_RACE_HORSE";
		case 27:
			return "CHEAT_SPAWN_WAR_HORSE";
		case 28:
			return "CHEAT_SPAWN_SUPERIOR_HORSE";
		case 29:
			return "CHEAT_SPAWN_RANDOM_HORSE";
		case 30:
			return "CHEAT_SPAWN_STAGECOACH";
		case 31:
			return "CHEAT_SPAWN_WAGON";
		case 32:
			return "CHEAT_SPAWN_BUGGY";
		case 33:
			return "CHEAT_SPAWN_CIRCUS_WAGON";
		case 34:
			return "CHEAT_INCREASE_WANTED_LEVEL_BY_1";
		case 35:
			return "CHEAT_DECREASE_WANTED_LEVEL_BY_1";
		case 36:
			return "CHEAT_CLEAR_ALL_BOUNTIES_AND_LOCKDOWN_AREAS";
		default:
			break;
	}
	return "UNKNOWN_CHEAT";
}

char* func_36(int iParam0)
{
	switch (__LIB_11__::func_819(iParam0))
	{
		case 0:
			return func_35(iParam0);
		case 1:
			return "CHEAT_DEADEYE_LEVEL";
		default:
			break;
	}
	return "";
}

char* func_37(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CHEAT_INFINITE_AMMO_DESC";
		case 1:
			return "CHEAT_BASIC_WEAPONS_DESC";
		case 2:
			return "CHEAT_HEAVY_WEAPONS_DESC";
		case 3:
			return "CHEAT_STEALTH_WEAPONS_DESC";
		case 4:
			return "CHEAT_GUNSLINGER_DESC";
		case 5:
			return "CHEAT_REMOVE_FOG_OF_WAR_DESC";
		case 6:
			return "CHEAT_ADD_MONEY_DESC";
		case 7:
			return "CHEAT_UNLOCK_ALL_PLAYER_OUTFITS_DESC";
		case 8:
			return "CHEAT_UNLOCK_ALL_RECIPES_DESC";
		case 9:
			return "CHEAT_INCREASE_CAMP_UPGRADES_TO_MAX_DESC";
		case 10:
			return "CHEAT_INCREASE_HONOR_TO_MAX_DESC";
		case 11:
			return "CHEAT_DECREASE_HONOR_TO_MIN_DESC";
		case 12:
			return "CHEAT_RESET_HONOR_TO_NEUTRAL_DESC";
		case 13:
			return "CHEAT_INFINITE_DEADEYE_DESC";
		case 14:
			return "CHEAT_INFINITE_STAMINA_DESC";
		case 15:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_1_DESC";
		case 16:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_2_DESC";
		case 17:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_3_DESC";
		case 18:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_4_DESC";
		case 19:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_5_DESC";
		case 20:
			return "CHEAT_SET_RPG_TANKS_TO_FULL_DESC";
		case 21:
			return "CHEAT_SET_RPG_TANK_STAT_LEVEL_TO_FULL_DESC";
		case 22:
			return "CHEAT_SET_RPG_TANKS_TO_FULL_AND_OVERPOWERED_DESC";
		case 23:
			return "CHEAT_INCREASE_HORSE_BOND_TO_MAX_DESC";
		case 24:
			return "CHEAT_SET_HORSE_TO_SPAWN_NEAR_PLAYER_ON_WHISTLE_DESC";
		case 25:
			return "CHEAT_BECOME_DRUNK_DESC";
		case 26:
			return "CHEAT_SPAWN_RACE_HORSE_DESC";
		case 27:
			return "CHEAT_SPAWN_WAR_HORSE_DESC";
		case 28:
			return "CHEAT_SPAWN_SUPERIOR_HORSE_DESC";
		case 29:
			return "CHEAT_SPAWN_RANDOM_HORSE_DESC";
		case 30:
			return "CHEAT_SPAWN_STAGECOACH_DESC";
		case 31:
			return "CHEAT_SPAWN_WAGON_DESC";
		case 32:
			return "CHEAT_SPAWN_BUGGY_DESC";
		case 33:
			return "CHEAT_SPAWN_CIRCUS_WAGON_DESC";
		case 34:
			return "CHEAT_INCREASE_WANTED_LEVEL_BY_1_DESC";
		case 35:
			return "CHEAT_DECREASE_WANTED_LEVEL_BY_1_DESC";
		case 36:
			return "CHEAT_CLEAR_ALL_BOUNTIES_AND_LOCKDOWN_AREAS_DESC";
		default:
			break;
	}
	return "UNKNOWN_CHEAT";
}

int func_38(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PAUSE/SETTINGS/ON_OFF");
		case 1:
			return joaat("PAUSE/SETTINGS/ON_OFF");
		case 2:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_16__::func_284(iParam0))
	{
		iVar0 = __LIB_11__::func_819(iParam0);
		if (func_47(iVar0))
		{
			if (__LIB_16__::func_374(iParam0))
			{
				return 866112557;
			}
			else if (__LIB_16__::func_283(iParam0))
			{
				return joaat("UNLOCKED");
			}
			else
			{
				return 1726108579;
			}
		}
		else
		{
			return 369178237;
		}
	}
	if (__LIB_16__::func_283(iParam0))
	{
		if (__LIB_16__::func_374(iParam0))
		{
			return 866112557;
		}
		else if (iParam0 == 6)
		{
			if (Local_9.f_49 <= 0 || __LIB_16__::func_230() >= Local_9.f_49)
			{
				return 866112557;
			}
			else
			{
				return joaat("UNLOCKED");
			}
		}
		else if (__LIB_16__::func_286(iParam0) != 0)
		{
			if (func_61())
			{
				return 866112557;
			}
			else
			{
				return joaat("UNLOCKED");
			}
		}
		else if (__LIB_6__::func_666(iParam0))
		{
			iVar1 = func_27(iParam0);
			if (iVar1 == 0)
			{
				return 866112557;
			}
			else
			{
				return joaat("UNLOCKED");
			}
		}
		else
		{
			return joaat("UNLOCKED");
		}
	}
	return 369178237;
}

int func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_16__::func_232(iParam0);
	if (iVar1 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= (__LIB_11__::func_820(iParam0) - 1))
	{
		if (__LIB_17__::func_378(iParam0, iVar0) == iVar1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = __LIB_11__::func_820(iParam0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = __LIB_17__::func_378(iParam0, iVar0);
		if (iVar2 == -1)
		{
		}
		else if (__LIB_11__::func_821(iVar2) == 4)
		{
			return iVar2;
		}
		iVar0++;
	}
	return -1;
}

int func_44(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_11__::func_820(iParam0);
	if (iParam1 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (iParam1 == __LIB_17__::func_378(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_45(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 <= 36)
	{
		iVar2 = iVar0;
		if (__LIB_11__::func_819(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_46(int iParam0)
{
	int iVar0;
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("CHEAT_OFF");
			break;
		case 1:
			iVar0 = joaat("CHEAT_LEVEL_1");
			break;
		case 2:
			iVar0 = joaat("CHEAT_LEVEL_2");
			break;
		case 3:
			iVar0 = joaat("CHEAT_LEVEL_3");
			break;
		case 4:
			iVar0 = joaat("CHEAT_LEVEL_4");
			break;
		case 5:
			iVar0 = joaat("CHEAT_LEVEL_5");
			break;
	}
	return iVar0;
}

bool func_47(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = __LIB_11__::func_820(iParam0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = __LIB_17__::func_378(iParam0, iVar0);
		if (iVar2 == -1)
		{
		}
		else if (__LIB_16__::func_283(iVar2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_48(int iParam0)
{
	if (Local_9.f_44[iParam0] == 0)
	{
		return -1;
	}
	return __LIB_17__::func_378(iParam0, (Local_9.f_44[iParam0] - 1));
}

int func_50(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2093359759;
		case 1:
			return -949812163;
		case 2:
			return 401446359;
		default:
			break;
	}
	return 0;
}

bool func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = func_24(iParam0);
	iVar1 = func_27(iVar0);
	switch (iVar1)
	{
		case 0:
			return func_75(iParam0);
		case 1:
			return func_64(iParam0) != 0;
		case 2:
			return func_64(iParam0) != 0;
		default:
			break;
	}
	return false;
}

bool func_52(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
		case 1:
			return false;
		case 2:
			return false;
		case 3:
			return false;
		case 4:
			return false;
		case 5:
			return true;
		case 6:
			return false;
		case 7:
			return true;
		case 8:
			return true;
		case 9:
			return true;
		case 10:
			return false;
		case 11:
			return false;
		case 12:
			return false;
		case 13:
			return false;
		case 14:
			return false;
		case 15:
			return false;
		case 16:
			return false;
		case 17:
			return false;
		case 18:
			return false;
		case 19:
			return false;
		case 20:
			return false;
		case 21:
			return true;
		case 22:
			return false;
		case 23:
			return false;
		case 24:
			return false;
		case 25:
			return false;
		case 26:
			return false;
		case 27:
			return false;
		case 28:
			return false;
		case 29:
			return false;
		case 30:
			return false;
		case 31:
			return false;
		case 32:
			return false;
		case 33:
			return false;
		case 34:
			return false;
		case 35:
			return false;
		case 36:
			return false;
		default:
			break;
	}
	return false;
}

char* func_54(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_DESC";
		default:
			break;
	}
	return "";
}

void func_55(int iParam0)
{
	int iVar0;
	var uVar1;
	uVar1 = Local_9.f_4[Local_9.f_88[iParam0]];
	iVar0 = func_48(iParam0);
	if (iVar0 == -1)
	{
		if (func_47(iParam0))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uVar1, func_6(1), MISC::GET_HASH_KEY(func_54(iParam0)));
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uVar1, func_6(18), func_46(0));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uVar1, func_6(1), MISC::GET_HASH_KEY("CHEAT_UNLOCK_DESCRIPTION"));
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uVar1, func_6(1), MISC::GET_HASH_KEY(func_8(Local_9.f_88[iParam0])));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uVar1, func_6(18), func_46(Local_9.f_44[iParam0]));
	}
}

int func_56(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 <= 36)
	{
		iVar1 = iVar0;
		iVar2 = func_59(iVar1);
		if (iVar2 != iParam0)
		{
		}
		else if (!__LIB_6__::func_666(iVar1))
		{
		}
		else
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

var func_57(int iParam0)
{
	return DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_6(1));
}

bool func_58(int iParam0)
{
	int iVar0;
	iVar0 = func_59(iParam0);
	return (iVar0 != -1 && iVar0 != 0);
}

int func_59(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 0;
		case 9:
			return 0;
		case 10:
			return 2;
		case 11:
			return 2;
		case 12:
			return 2;
		case 13:
			return 0;
		case 14:
			return 0;
		case 15:
			return 0;
		case 16:
			return 0;
		case 17:
			return 0;
		case 18:
			return 0;
		case 19:
			return 0;
		case 20:
			return 0;
		case 21:
			return 0;
		case 22:
			return 0;
		case 23:
			return 0;
		case 24:
			return 0;
		case 25:
			return 0;
		case 26:
			return 1;
		case 27:
			return 1;
		case 28:
			return 1;
		case 29:
			return 1;
		case 30:
			return 1;
		case 31:
			return 1;
		case 32:
			return 1;
		case 33:
			return 1;
		case 34:
			return 3;
		case 35:
			return 3;
		case 36:
			return 3;
		default:
			break;
	}
	return -1;
}

bool func_61()
{
	return Global_1425247.f_76.f_1 != -1;
}

void func_63(int iParam0)
{
	Global_1425247.f_58 = iParam0;
}

int func_64(int iParam0)
{
	return DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_6(9));
}

void func_65(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = func_25(Local_9.f_4[iParam0]);
	if (iParam1 == 0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(Local_9.f_4[iParam0], func_6(5), joaat("UNLOCKED"));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(Local_9.f_4[iParam0], func_6(18), func_46(iParam1));
		return;
	}
	iVar1 = __LIB_17__::func_378(iParam2, (iParam1 - 1));
	if (iVar1 == -1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(Local_9.f_4[iParam0], func_6(5), 369178237);
		return;
	}
	if (__LIB_16__::func_283(iVar1))
	{
		if (iVar0 != joaat("UNLOCKED"))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(Local_9.f_4[iParam0], func_6(5), joaat("UNLOCKED"));
		}
	}
	else if (iVar0 != 1726108579)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(Local_9.f_4[iParam0], func_6(5), 1726108579);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(Local_9.f_4[iParam0], func_6(18), func_46(iParam1));
}

int func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 2:
			return 3;
		case 5:
			return 3;
		case 10:
			return 3;
		case 14:
			return 3;
		case 22:
			return 3;
		case 27:
			return 3;
		case 33:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_67(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return func_84(iParam1);
		case 2:
			return func_85(iParam1);
		case 5:
			return func_86(iParam1);
		case 10:
			return func_87(iParam1);
		case 14:
			return func_88(iParam1);
		case 22:
			return func_89(iParam1);
		case 27:
			return func_90(iParam1);
		case 33:
			return func_91(iParam1);
		default:
			break;
	}
	return 0;
}

bool func_68(int iParam0)
{
	return __LIB_3__::func_463(iParam0, 1, 0);
}

void func_69(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	if (__LIB_1__::func_959(&(Global_40.f_12000), iVar0, 2))
	{
	}
	__LIB_10__::func_633(iParam0, 2);
}

bool func_70(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_11__::func_819(iParam0);
	if (iParam1 == 0)
	{
		return false;
	}
	return __LIB_17__::func_378(iVar0, (iParam1 - 1)) == iParam0;
}

bool func_74(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return true;
		case 4:
			return true;
		case 5:
			return false;
		case 6:
			return false;
		case 7:
			return false;
		case 8:
			return false;
		case 9:
			return false;
		case 10:
			return false;
		case 11:
			return false;
		case 12:
			return false;
		case 13:
			return true;
		case 14:
			return true;
		case 15:
			return true;
		case 16:
			return true;
		case 17:
			return true;
		case 18:
			return true;
		case 19:
			return true;
		case 20:
			return false;
		case 21:
			return false;
		case 22:
			return false;
		case 23:
			return false;
		case 24:
			return true;
		case 25:
			return true;
		case 26:
			return false;
		case 27:
			return false;
		case 28:
			return false;
		case 29:
			return false;
		case 30:
			return false;
		case 31:
			return false;
		case 32:
			return false;
		case 33:
			return false;
		case 34:
			return false;
		case 35:
			return false;
		case 36:
			return false;
		default:
			break;
	}
	return true;
}

bool func_75(int iParam0)
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iParam0, func_6(9));
}

void func_76(int iParam0)
{
	__LIB_10__::func_685(iParam0);
	if (__LIB_16__::func_283(iParam0))
	{
		__LIB_10__::func_633(iParam0, 2);
	}
	else
	{
		__LIB_10__::func_633(iParam0, 0);
	}
}

void func_77(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	if (__LIB_16__::func_374(iParam0))
	{
		__LIB_13__::func_480(12);
		return;
	}
	if (!__LIB_16__::func_283(iParam0))
	{
		return;
	}
	iVar1 = func_96(iParam0);
	if (iVar1 != 0)
	{
		switch (iVar1)
		{
			case 0:
				break;
			case 1:
				__LIB_13__::func_480(5);
				break;
			case 2:
				__LIB_13__::func_480(6);
				break;
			case 4:
				if (__LIB_2__::func_410(59))
				{
					__LIB_13__::func_480(9);
				}
				else
				{
					__LIB_13__::func_480(8);
				}
				break;
			case 3:
				__LIB_13__::func_480(7);
				break;
			case 5:
				__LIB_13__::func_480(11);
				break;
			default:
				break;
		}
		return;
	}
	if (__LIB_16__::func_286(iParam0) != 0)
	{
		if (__LIB_16__::func_285() != iParam0)
		{
			__LIB_16__::func_287(iParam0);
		}
	}
	else if (__LIB_11__::func_821(iParam0) == 4)
	{
		return;
	}
	if (__LIB_1__::func_959(&Global_1425247, iVar0, 2))
	{
	}
	else
	{
		return;
	}
	__LIB_10__::func_633(iParam0, 4);
}

int func_84(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_NEWSPAPER_ED_01");
		case 1:
			return joaat("DOCUMENT_NEWSPAPER_ED_01_NH");
		case 2:
			return joaat("DOCUMENT_NEWSPAPER_ED_01_SD");
		default:
			break;
	}
	return 0;
}

int func_85(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_NEWSPAPER_ED_04");
		case 1:
			return joaat("DOCUMENT_NEWSPAPER_ED_04_NH");
		case 2:
			return joaat("DOCUMENT_NEWSPAPER_ED_04_SD");
		default:
			break;
	}
	return 0;
}

int func_86(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_NEWSPAPER_ED_05");
		case 1:
			return joaat("DOCUMENT_NEWSPAPER_ED_05_NH");
		case 2:
			return joaat("DOCUMENT_NEWSPAPER_ED_05_SD");
		default:
			break;
	}
	return 0;
}

int func_87(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_NEWSPAPER_ED_06");
		case 1:
			return joaat("DOCUMENT_NEWSPAPER_ED_06_NH");
		case 2:
			return joaat("DOCUMENT_NEWSPAPER_ED_06_SD");
		default:
			break;
	}
	return 0;
}

int func_88(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_NEWSPAPER_ED_07");
		case 1:
			return joaat("DOCUMENT_NEWSPAPER_ED_07_NH");
		case 2:
			return joaat("DOCUMENT_NEWSPAPER_ED_07_SD");
		default:
			break;
	}
	return 0;
}

int func_89(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_NEWSPAPER_ED_10");
		case 1:
			return joaat("DOCUMENT_NEWSPAPER_ED_10_NH");
		case 2:
			return joaat("DOCUMENT_NEWSPAPER_ED_10_SD");
		default:
			break;
	}
	return 0;
}

int func_90(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_NEWSPAPER_ED_11");
		case 1:
			return joaat("DOCUMENT_NEWSPAPER_ED_11_NH");
		case 2:
			return joaat("DOCUMENT_NEWSPAPER_ED_11_SD");
		default:
			break;
	}
	return 0;
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_NEWSPAPER_ED_12");
		case 1:
			return joaat("DOCUMENT_NEWSPAPER_ED_12_NH");
		case 2:
			return joaat("DOCUMENT_NEWSPAPER_ED_12_SD");
		default:
			break;
	}
	return 0;
}

int func_96(int iParam0)
{
	if (__LIB_6__::func_667())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			break;
		case 5:
		case 6:
		case 7:
		case 8:
			break;
		case 9:
			if (__LIB_7__::func_439())
			{
				return 4;
			}
			if (Global_43891)
			{
				return 3;
			}
			break;
		case 10:
		case 11:
		case 12:
			if (__LIB_4__::func_807(0))
			{
				return 2;
			}
			break;
		case 13:
		case 14:
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			if (__LIB_0__::func_296(0, 0, 1))
			{
				return 1;
			}
			break;
		case 20:
		case 21:
		case 22:
			break;
		case 23:
		case 24:
			if (Global_43891)
			{
				return 3;
			}
			break;
		case 25:
			if (__LIB_0__::func_296(0, 0, 1))
			{
				return 1;
			}
			if (__LIB_6__::func_667())
			{
				return 1;
			}
			break;
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
			if (__LIB_0__::func_296(0, 0, 1))
			{
				return 1;
			}
			if (Global_1394141.f_1328)
			{
				return 1;
			}
			if (Global_43891)
			{
				return 3;
			}
			if (__LIB_7__::func_439())
			{
				return 4;
			}
			if (__LIB_4__::func_807(0))
			{
				return 2;
			}
			if (Global_1430231.f_4)
			{
				return 1;
			}
			break;
		case 34:
			if (__LIB_2__::func_410(59))
			{
				if (__LIB_0__::func_12() == 22)
				{
					return 5;
				}
			}
		case 35:
		case 36:
			if (__LIB_0__::func_296(0, 0, 1))
			{
				return 1;
			}
			if (Global_1394141.f_1328)
			{
				return 1;
			}
			if (__LIB_4__::func_807(0))
			{
				return 2;
			}
			if (Global_1430231.f_4)
			{
				return 1;
			}
			break;
		default:
			break;
	}
	return 0;
}

