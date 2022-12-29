#region Local Var
	struct<6> Local_0 = { 0, 0, 0, 1088421888, 0, 0 } ;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion
void __EntryFunction__()
{
	Local_0.f_4 = __LIB_0__::func_449(ScriptParam_0.f_1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_2();
	}
	if (Local_0.f_4 != -1 && Local_0.f_4 != Global_40.f_7729)
	{
		Local_0.f_5 = __LIB_9__::func_891(Local_0.f_4);
		if (__LIB_0__::func_205(Global_35, Local_0.f_5))
		{
			if (DECORATOR::DECOR_EXIST_ON(Global_35, "playerChangeOutfits"))
			{
				Local_0.f_2 = DECORATOR::DECOR_GET_BOOL(Global_35, "playerChangeOutfits");
			}
			Global_1905943 = 1;
			Local_0.f_1 = 1;
			Global_1905941 = Local_0.f_4;
			if ((((Local_0.f_2 || Global_1935630.f_2 != Global_40.f_39) || ENTITY::GET_ENTITY_MODEL(Global_35) != Global_40.f_39) || PLAYER::IS_PLAYER_TELEPORT_ACTIVE()) || Global_1879534.f_1)
			{
				__LIB_1__::func_649(&Local_0, 3);
			}
			while (Local_0 < 3)
			{
				func_6(&Local_0);
				BUILTIN::WAIT(0);
			}
		}
	}
	func_2();
}

void func_2()
{
	if (Local_0.f_1)
	{
		Global_1905943 = 0;
		__LIB_0__::func_194(2);
		__LIB_0__::func_194(1);
		STREAMING::REMOVE_ANIM_DICT(__LIB_0__::func_687());
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_6(int iParam0)
{
	switch (*iParam0)
	{
		case 0:
			iParam0->f_3 = (iParam0->f_3 - MISC::GET_FRAME_TIME());
			if (func_9() || iParam0->f_3 <= 0f)
			{
				__LIB_0__::func_155(1);
				__LIB_0__::func_194(2);
				__LIB_1__::func_649(iParam0, 1);
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				return;
			}
			__LIB_18__::func_937();
			if (__LIB_3__::func_105(__LIB_0__::func_223(iParam0->f_4)))
			{
				INVENTORY::_0x46743BBFEDBC859E(__LIB_0__::func_162(0), __LIB_0__::func_223(iParam0->f_4), 1);
			}
			__LIB_18__::func_30(Global_35, iParam0->f_4, 0, 1, 0);
			__LIB_11__::func_871(iParam0->f_4);
			__LIB_0__::func_45(MISC::_CREATE_VAR_STRING(10, "OUT_SWAP", MISC::_CREATE_VAR_STRING(0, __LIB_0__::func_223(iParam0->f_4))), 10000, 0, 0, 0, 1);
			__LIB_1__::func_649(iParam0, 2);
			break;
		case 2:
			if (ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				return;
			}
			__LIB_0__::func_806(Global_1905941, 4096);
			__LIB_0__::func_828(Global_40.f_7729, 4096);
			Global_40.f_7729 = iParam0->f_4;
			__LIB_5__::func_801(26, 0, 0, 0, 0);
			__LIB_1__::func_649(iParam0, 3);
			break;
	}
}

bool func_9()
{
	STREAMING::REQUEST_ANIM_DICT(__LIB_0__::func_687());
	if (STREAMING::HAS_ANIM_DICT_LOADED(__LIB_0__::func_687()))
	{
		__LIB_0__::func_155(1);
		return true;
	}
	return false;
}

