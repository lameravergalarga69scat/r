void __EntryFunction__()
{
	var uVar0;
	int iVar3;
	var uVar4;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
	}
	iVar3 = 0;
	while (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		if (func_1(&iVar3, &uVar4, 1, &uVar0))
		{
		}
		else
		{
			BUILTIN::WAIT(0);
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_1(int iParam0, var uParam1, bool bParam2, var uParam3)
{
	if (*iParam0 < 5)
	{
		if (((__LIB_0__::func_91() || (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, *uParam1))) || !__LIB_9__::func_303()) || !PED::IS_PED_ON_FOOT(Global_35))
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(*uParam1);
			}
			return true;
		}
		else
		{
			Global_1935496.f_127 = 1;
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (bParam2)
			{
				__LIB_1__::func_283(uParam3, 0);
			}
			if (__LIB_0__::func_75(uParam3) && __LIB_0__::func_265(uParam3) > 2f)
			{
				__LIB_1__::func_649(iParam0, 1);
				__LIB_0__::func_37(uParam3);
			}
			break;
		case 1:
			*uParam1 = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@sal1@ig@sal1_ig12_wake_up@sal1_ig12_wake_up", 0, "Herb_PL", false, true);
			__LIB_1__::func_649(iParam0, 2);
			break;
		case 2:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
				__LIB_1__::func_649(iParam0, 3);
			}
			break;
		case 3:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam1, true, false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "ARTHUR", Global_35, 0);
				ANIMSCENE::START_ANIM_SCENE(*uParam1);
				__LIB_1__::func_649(iParam0, 5);
			}
			break;
		case 5:
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam1, false))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*uParam1, "ARTHUR", Global_35);
				__LIB_1__::func_649(iParam0, 0);
				return true;
			}
			break;
	}
	return false;
}

