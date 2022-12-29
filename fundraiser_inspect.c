#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	bool bLocal_2 = false;
	bool bLocal_3 = false;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	int iLocal_10 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion
void __EntryFunction__()
{
	bLocal_3 = true;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		SCRIPTS::_0xE7282390542F570D(vScriptParam_0.x);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(vScriptParam_0.y))
	{
		SCRIPTS::_0xE7282390542F570D(vScriptParam_0.x);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!func_1(vScriptParam_0))
	{
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			SCRIPTS::_0xE7282390542F570D(vScriptParam_0.x);
			SCRIPTS::TERMINATE_THIS_THREAD();
		}
		BUILTIN::WAIT(0);
	}
	SCRIPTS::_0xE7282390542F570D(vScriptParam_0.x);
}

bool func_1(struct<2> Param0, var uParam2)
{
	switch (iLocal_10)
	{
		case 0:
			if (__LIB_0__::func_181() && STREAMING::_IS_IMAP_ACTIVE_2(204868257))
			{
				iLocal_0 = __LIB_1__::func_282("INSPECT_GENERIC", joaat("INPUT_CONTEXT_Y"), TASK::_GET_SCENARIO_POINT_COORDS(Param0.f_1, true), 4f, 1, 1, 0, 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
				iLocal_1 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2511.907f, -1160.024f, 52.5668f, -3.9115f, 0f, -90.0969f, 51.282f, false, 2);
				iLocal_10 = 1;
			}
			break;
		case 1:
			if (!bLocal_2)
			{
				if (__LIB_1__::func_530(iLocal_0, 1))
				{
					CAM::SET_CAM_ACTIVE(iLocal_1, true);
					ENTITY::_0x80FDEB3A9E9AA578(Global_35, 0);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					bLocal_2 = true;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
					if (bLocal_3 && __LIB_3__::func_564(93, 0) == 0)
					{
						bLocal_3 = false;
						__LIB_1__::func_148(&uLocal_4);
						__LIB_1__::func_148(&uLocal_7);
						__LIB_3__::func_461(93, 0, 1);
					}
				}
			}
			else if (!__LIB_1__::func_530(iLocal_0, 1) && (__LIB_1__::func_285(&uLocal_4, 2f) || !__LIB_0__::func_75(&uLocal_4)))
			{
				CAM::SET_CAM_ACTIVE(iLocal_1, false);
				bLocal_2 = false;
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			}
			else
			{
				ENTITY::_0x80FDEB3A9E9AA578(Global_35, 0);
			}
			if (__LIB_1__::func_313(&uLocal_7, 1f))
			{
				__LIB_1__::func_265(Global_35, "RE_FND_STD_V1_JOHN_FINDS", -417894478, 0, 1, 0, 0, 1);
			}
			break;
	}
	return false;
}

