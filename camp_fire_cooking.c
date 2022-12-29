#region Local Var
	bool bLocal_0 = false;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	var uLocal_4 = 0;
	bool bLocal_5 = false;
	struct<8> Local_6 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion
void __EntryFunction__()
{
	bLocal_0 = true;
	iLocal_2 = vScriptParam_0.x;
	iLocal_3 = vScriptParam_0.y;
	uLocal_4 = vScriptParam_0.z;
	__LIB_0__::func_11();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		__LIB_5__::func_616();
	}
	while (!SCRIPTS::_0x9E4EF615E307FBBE() && func_3())
	{
		__LIB_0__::func_11();
		__LIB_3__::func_126();
		func_6();
		BUILTIN::WAIT(0);
	}
	__LIB_5__::func_616();
}

bool func_3()
{
	if (iLocal_1 != 0)
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iLocal_1) == 0)
		{
			return bLocal_0;
		}
		else
		{
			return true;
		}
	}
	return bLocal_0;
}

void func_6()
{
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_3))
	{
		bLocal_0 = false;
	}
	if (bLocal_5)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_6.f_3))
		{
			bLocal_0 = false;
		}
		else if (PED::IS_PED_DEAD_OR_DYING(Local_6.f_3, true))
		{
			bLocal_0 = false;
		}
		else if (!PED::_IS_PED_USING_SCENARIO_POINT(Local_6.f_3, iLocal_3))
		{
			bLocal_0 = false;
		}
	}
	if (!bLocal_0)
	{
		return;
	}
	switch (Local_6.f_7)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_6.f_3))
			{
				Local_6.f_3 = TASK::_GET_PED_USING_SCENARIO_POINT(iLocal_3);
				bLocal_5 = true;
			}
			else
			{
				Local_6.f_7 = 1;
			}
			break;
		case 1:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_6.f_3, -1134697563))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_6.f_2))
				{
					Local_6.f_2 = PED::_0x4D0D2E3D8BC000EB(Local_6.f_3, "s_meatbit_Chunck_small01x_PH_L_HAND", 0);
				}
				Local_6.f_7 = 2;
			}
			break;
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Local_6.f_2))
			{
				Local_6.f_1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(Local_6.f_2);
				OBJECT::_SET_OBJECT_BURN_LEVEL(Local_6.f_1, 0f, true);
				Local_6.f_7 = 3;
			}
			else
			{
				bLocal_0 = false;
			}
			break;
		case 3:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_6.f_3, -1334721097))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_6.f_2))
				{
					if (!__LIB_0__::func_75(&(Local_6.f_4)))
					{
						__LIB_1__::func_148(&(Local_6.f_4));
					}
					Local_6.f_7 = 4;
				}
				else
				{
					bLocal_0 = false;
				}
			}
			break;
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(Local_6.f_2))
			{
				Local_6 = __LIB_0__::func_265(&(Local_6.f_4));
				if (Local_6 > 0f && Local_6 <= 10f)
				{
					OBJECT::_SET_OBJECT_BURN_LEVEL(Local_6.f_1, (Local_6 / 10f), true);
				}
				else
				{
					bLocal_0 = false;
				}
			}
			break;
	}
}

