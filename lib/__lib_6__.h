int func_0()
{
	return -1802590239;
}

Vector3 func_1(int iParam0)
{
	vector3 vVar0;
	switch (iParam0)
	{
		case 1:
			vVar0 = { -72.4089f, 2.8532f, -117.5962f };
			break;
		case 2:
			vVar0 = { -77.3119f, -0.0017f, -71.347f };
			break;
		case 3:
			vVar0 = { -73.0725f, -0.1101f, 134.3503f };
			break;
	}
	return vVar0;
}

void func_2(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, int iParam8, int iParam9, float fParam10, float fParam11, int iParam12, int iParam13, float fParam14, bool bParam15, float fParam16, float fParam17)
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = { vParam4 };
	uParam0->f_7 = fParam7;
	uParam0->f_25 = iParam8;
	uParam0->f_26 = iParam9;
	uParam0->f_27 = fParam10;
	uParam0->f_8 = { vParam1 };
	uParam0->f_11 = 1f;
	uParam0->f_12 = 0f;
	uParam0->f_13 = { 0f, 0f, 0f };
	uParam0->f_16 = { 0f, 0f, 0f };
	uParam0->f_19 = { 0f, 0f, 0f };
	uParam0->f_22 = fParam7;
	uParam0->f_23 = (fParam7 + fParam16);
	uParam0->f_28 = iParam12;
	uParam0->f_24 = fParam11;
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_23, 0, 1, 1, 2, 1, 0);
	if (!bParam15)
	{
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", fParam17);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	if (fParam14 > 0f)
	{
		CAM::SET_CAM_NEAR_CLIP(*uParam0, fParam14);
	}
	if (uParam0->f_28)
	{
		MAP::LOCK_MINIMAP_ANGLE(iParam13);
	}
	uParam0->f_34 = 0;
	uParam0->f_35 = 0;
	uParam0->f_36 = 0;
	uParam0->f_38 = 0;
	uParam0->f_37 = 0;
}

void func_3(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			AUDIO::PLAY_SOUND_FRONTEND("NAV_UP", "Ledger_Sounds", true, 0);
			break;
		case 1:
			AUDIO::PLAY_SOUND_FRONTEND("NAV_DOWN", "Ledger_Sounds", true, 0);
			break;
		case 2:
			AUDIO::PLAY_SOUND_FRONTEND("NAV_LEFT", "Ledger_Sounds", true, 0);
			break;
		case 3:
			AUDIO::PLAY_SOUND_FRONTEND("NAV_RIGHT", "Ledger_Sounds", true, 0);
			break;
	}
}

void func_4(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 4)
	{
		return;
	}
	Global_40.f_4283.f_415[iParam0] = 0;
}

void func_5()
{
	AUDIO::PLAY_SOUND_FRONTEND("PURCHASE", "Ledger_Sounds", true, 0);
}

void func_6()
{
	AUDIO::PLAY_SOUND_FRONTEND("UNAFFORDABLE", "Ledger_Sounds", true, 0);
}

int func_7()
{
	if (__LIB_0__::func_317() == 8)
	{
		return 4;
	}
	return 17;
}

bool func_8(vector3 vParam0, int iParam3)
{
	if (iParam3 == 7)
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Global_1357549.f_3[iParam3]))
	{
		return false;
	}
	return VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1357549.f_3[iParam3], vParam0);
}

struct<4> func_9(int iParam0)
{
	char cVar0[32];
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, 0, 32);
	return cVar0;
}

int func_10()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (__LIB_0__::func_317() == Global_1357549.f_12[iVar0 /*14*/])
		{
			if (Global_1357549.f_12[iVar0 /*14*/].f_7 != 0)
			{
				ENTITY::_0xD2B9C78537ED5759(Global_1357549.f_12[iVar0 /*14*/].f_7);
				Global_1357549.f_12[iVar0 /*14*/].f_7 = 0;
				Global_1357549.f_12[iVar0 /*14*/].f_10 = 0;
				Global_1357549.f_12[iVar0 /*14*/].f_8 = 0;
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_11()
{
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1357549.f_1663[1]))
	{
		if (__LIB_1__::func_205(Global_35, Global_1357549.f_1663[1], 1, 0))
		{
			return true;
		}
	}
	return false;
}

var func_12()
{
	return Global_1357549.f_1670;
}

char* func_13(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "horseshoeOverlook/hso_default_horses1";
		case 2:
			return "clemensPoint/clm_default_horses1";
		case 3:
			return "shadyBelle/shb_default_horses1";
		case 5:
			return "lakay/lak_default_horses1";
		case 6:
			return "beaverHollow/bvh_default_horses1";
		default:
			break;
	}
	return "";
}

bool func_14(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return false;
	}
	return (Global_1147326.f_1 && iParam0) != 0;
}

int func_15(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = *uParam0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_62)
	{
		iVar0 = (iVar0 + uParam0->f_1[iVar1 /*5*/].f_4);
		iVar1++;
	}
	return iVar0;
}

bool func_16(var uParam0)
{
	if (!DATABINDING::_DATABINDING_READ_DATA_BOOL(*uParam0))
	{
		return false;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(uParam0->f_5))
	{
		return false;
	}
	return true;
}

int func_17(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 12:
		case 13:
		case 14:
			return 2;
	}
	return 4;
}

void func_18(var uParam0)
{
	if (Global_40.f_4283.f_313 > 1)
	{
		switch (*uParam0)
		{
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_BASE"):
				*uParam0 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_BASE_EGGS");
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_LOW"):
				*uParam0 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_LOW_EGGS");
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_MED"):
				*uParam0 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_MED_EGGS");
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH"):
				*uParam0 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS");
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL"):
				*uParam0 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS");
				break;
		}
	}
}

char* func_19(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "CAMP_UPG_COOP";
		case 3:
			return "CAMP_UPG_PROV";
		case 4:
			return "CAMP_UPG_MED";
		case 5:
			return "CAMP_UPG_ARMO";
		case 12:
			return "CAMP_UPG_TOOLS";
		case 13:
			return "CAMP_UPG_VEH";
		case 14:
			return "CAMP_UPG_HITCH";
		case 10:
			switch (iParam1)
			{
				case 2:
					return "CAMP_UPG_TENT_D";
				case 3:
					return "CAMP_UPG_TENT_A";
				case 4:
					return "CAMP_UPG_TENT_C";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_20(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		case 1:
			return 0;
		case 0:
			return 1;
		case 3:
			return 3;
		default:
			break;
	}
	return -1;
}

bool func_21()
{
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[59 /*49*/].f_42, false) && !__LIB_0__::func_1(Global_1347702[59 /*49*/].f_13, 4))
	{
		return true;
	}
	return false;
}

bool func_22(int iParam0)
{
	if (Global_1327590.f_10 == 14)
	{
		return true;
	}
	return false;
}

void func_23(var uParam0, var uParam1)
{
	var uVar0;
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0, "Visible", 0);
	uParam1->f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0, "Title", 0);
	uParam1->f_2 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0, "Notes", 0);
	uParam1->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0, "SketchTexture", 0);
	uParam1->f_5 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0, "CrossedOut", 0);
	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0, "Price");
	uParam1->f_4 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar0, "Price", "");
	uParam1->f_6 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar0, "CrossedOut", 0);
	uParam1->f_7 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar0, "Highlighted", 0);
}

bool func_24(int iParam0)
{
	return (Global_1914296.f_22 && iParam0) != 0;
}

int func_25(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 2:
				return 491176353 /* GXTEntry: "Arthur\'s Wagon Restock" */;
			case 0:
				return -616621656 /* GXTEntry: "Pearson\'s Wagon Restock" */;
			case 1:
				return -1828628461 /* GXTEntry: "Strauss\'s Wagon Restock" */;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 2:
				return 2128795131;
			case 0:
				return -974808650 /* GXTEntry: "Pearson\'s Wagon Upgrade" */;
			case 1:
				return 7599255 /* GXTEntry: "Strauss\'s Wagon Upgrade" */;
			case 3:
				return -2032628373 /* GXTEntry: "Lodgings Upgrade" */;
			case 4:
				return -1202199859 /* GXTEntry: "Bought Camp Boat" */;
			case 5:
				return 119245970 /* GXTEntry: "Bought Chicken Coop" */;
			case 6:
				return -195936553 /* GXTEntry: "Bought Leather Tools" */;
			case 7:
				return 674858266 /* GXTEntry: "Bought Horse Station" */;
			default:
				break;
		}
	}
	return 0;
}

bool func_26(var uParam0)
{
	if (!DATABINDING::_DATABINDING_READ_DATA_BOOL(*uParam0))
	{
		return false;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(uParam0->f_4))
	{
		return false;
	}
	return true;
}

bool func_27(var uParam0)
{
	if (!DATABINDING::_DATABINDING_READ_DATA_BOOL(*uParam0))
	{
		return false;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(uParam0->f_2))
	{
		return false;
	}
	return true;
}

void func_28(int iParam0)
{
	STREAMING::_REQUEST_IMAP(iParam0);
}

void func_29(int iParam0, bool bParam1, var uParam2)
{
	switch (iParam0)
	{
		case -2000080725:
			if (bParam1)
			{
				*uParam2 = GRAPHICS::_0xFA50F79257745E74(701.0167f, -1247.185f, 43.9899f, 3f, 2, -1, 0);
			}
			else
			{
				GRAPHICS::_0x9CF1836C03FB67A2(uParam2, 0);
			}
			break;
	}
	switch (iParam0)
	{
		case -1563072795:
		case 607574432:
		case 825179479:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-125.9479f, -39.4579f, 94.6035f, 4f);
			break;
		case -2016771661:
		case 202127432:
		case 2072112547:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(653.7093f, -1244.043f, 42.6971f, 4f);
			break;
		case -782359587:
		case 2728487:
		case 1674800958:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(660.9469f, -1255.986f, 42.7088f, 4f);
			break;
		case -1642249622:
		case 1084869405:
		case 1636281938:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(674.1929f, -1266.091f, 42.984f, 4f);
			break;
		case -1451784475:
		case 1028224932:
		case 1128417383:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(673.2328f, -1239.627f, 43.1471f, 4f);
			break;
		case -1123811713:
		case -546137515:
		case 1679038623:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(658.2036f, -1233.099f, 43.2507f, 4f);
			break;
		case -1279618207:
		case -751959361:
		case 1742990618:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(678.267f, -1251.873f, 43.0153f, 4f);
			break;
		case -1620486708:
		case -223906810:
		case 163126540:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-118.3392f, -35.8852f, 94.7422f, 4f);
			break;
		case -379409079:
		case 1808508475:
		case 2015311123:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-111.4885f, -39.7478f, 94.8525f, 4f);
			break;
		case -1920340119:
		case -1576393943:
		case -413795019:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-123.9274f, -22.8559f, 95.0845f, 4f);
			break;
		case -1987982797:
		case -1933895237:
		case -104137172:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-147.6751f, -24.5264f, 95.2101f, 4f);
			break;
		case -1426249148:
		case -182995231:
		case 1267297807:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-142.3644f, -21.2133f, 95.0883f, 4f);
			break;
		case -638481378:
		case -621187540:
		case 1079213989:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(1880.102f, -1880.512f, 41.9323f, 4f);
			break;
		case -882188392:
		case 773757120:
		case 964593693:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(1870.625f, -1872.112f, 41.8191f, 4f);
			break;
		case -2147051362:
		case -997495998:
		case 266022415:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(1887.52f, -1880.757f, 41.9442f, 4f);
			break;
		case -1910456812:
		case -1115840558:
		case 1674493966:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(1877.485f, -1861f, 41.8078f, 4f);
			break;
	}
}

int func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_40.f_4283.f_320;
		case 1:
			return Global_40.f_4283.f_318;
		case 2:
			return Global_40.f_4283.f_319;
	}
	return 1;
}

void func_31(bool bParam0)
{
	int iVar0[3];
	int iVar4;
	if (bParam0)
	{
		iVar0[0] = -1370620659;
		iVar0[1] = -624219879;
		iVar0[2] = 715730031;
	}
	else
	{
		iVar0[0] = 5585502;
		iVar0[1] = -1362716862;
		iVar0[2] = 482931525;
	}
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (STREAMING::_IS_IMAP_ACTIVE(iVar0[iVar4]))
		{
			if (iVar0[iVar4] != __LIB_1__::func_976())
			{
				STREAMING::_REMOVE_IMAP(iVar0[iVar4]);
			}
		}
		iVar4++;
	}
}

void func_32()
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1357549.f_1674))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1357549.f_1674))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1357549.f_1674, true, false);
		}
		if (ENTITY::IS_ENTITY_DEAD(Global_1357549.f_1674) == 0)
		{
			VEHICLE::DELETE_VEHICLE(&(Global_1357549.f_1674));
		}
	}
}

void func_33(int iParam0)
{
	switch (iParam0)
	{
		case 1261237250:
			if (STREAMING::_IS_IMAP_ACTIVE(-109425099))
			{
				STREAMING::_REMOVE_IMAP(-109425099);
			}
			if (STREAMING::_IS_IMAP_ACTIVE(1070723367))
			{
				STREAMING::_REMOVE_IMAP(1070723367);
			}
			break;
		case -109425099:
		case 1070723367:
			if (STREAMING::_IS_IMAP_ACTIVE(1261237250))
			{
				STREAMING::_REMOVE_IMAP(1261237250);
			}
			break;
		case 1475953931:
			if (STREAMING::_IS_IMAP_ACTIVE(-316909020))
			{
				STREAMING::_REMOVE_IMAP(-316909020);
			}
			if (STREAMING::_IS_IMAP_ACTIVE(-1962893335))
			{
				STREAMING::_REMOVE_IMAP(-1962893335);
			}
			if (STREAMING::_IS_IMAP_ACTIVE(1351589798))
			{
				STREAMING::_REMOVE_IMAP(1351589798);
			}
			if (STREAMING::_IS_IMAP_ACTIVE(300868838))
			{
				STREAMING::_REMOVE_IMAP(300868838);
			}
			if (STREAMING::_IS_IMAP_ACTIVE(-1788578071))
			{
				STREAMING::_REMOVE_IMAP(-1788578071);
			}
			if (STREAMING::_IS_IMAP_ACTIVE(1157066259))
			{
				STREAMING::_REMOVE_IMAP(1157066259);
			}
			break;
		case -1962893335:
		case -1788578071:
		case -316909020:
		case 300868838:
		case 1157066259:
		case 1351589798:
			if (STREAMING::_IS_IMAP_ACTIVE(1475953931))
			{
				STREAMING::_REMOVE_IMAP(1475953931);
			}
			break;
	}
}

void func_34(var uParam0, var uParam1)
{
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0, "Visible", 0);
	uParam1->f_1 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0, "Price", "");
}

void func_35(var uParam0, var uParam1)
{
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0, "Visible", 0);
	uParam1->f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0, "Name", 0);
	uParam1->f_2 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0, "Description", 0);
	uParam1->f_3 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0, "Price", "");
}

void func_36(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0, "Visible", 0);
	uParam1->f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0, "Title", 0);
	uParam1->f_2 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0, "Notes", 0);
	uParam1->f_4 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0, "CrossedOut", 0);
	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0, "Price");
	uParam1->f_3 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar0, "Price", "");
	uParam1->f_5 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar0, "Highlighted", 0);
	uVar1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar0, "CrossedOut", 0);
}

void func_37(var uParam0, var uParam1)
{
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0, "Visible", 0);
	uParam1->f_1 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0, "Price", "");
	uParam1->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0, "CrossedOut", 0);
	uParam1->f_3 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0, "Highlighted", 0);
}

float func_38(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	if (iParam1 == -1)
	{
		fVar3 = (fVar2 - fVar1);
		return (fVar3 / 2f);
	}
	switch (iParam0)
	{
		case 0:
			fVar1 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_35));
			fVar2 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false));
			iVar0 = 50;
			break;
		case 1:
			fVar1 = PED::_GET_PED_STAMINA(Global_35);
			fVar2 = PED::_GET_PED_MAX_STAMINA(Global_35);
			iVar0 = 8;
			break;
		case 2:
			fVar1 = PLAYER::_0xA81D24AE0AF99A5E(PLAYER::GET_PLAYER_INDEX());
			fVar2 = PLAYER::_0x592F58BC4D2A2CF3(PLAYER::GET_PLAYER_INDEX(), 0);
			iVar0 = 14;
			break;
	}
	fVar4 = (IntToFloat((iVar0 * iParam1)) + fVar1);
	if (fVar4 > fVar2)
	{
		fVar3 = (fVar2 - fVar1);
	}
	else
	{
		fVar3 = (fVar4 - fVar1);
	}
	return (fVar3 / 2f);
}

float func_39(float fParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return (fParam0 * 0.033f);
		case 1:
			return (fParam0 * 2f);
		case 2:
			return (fParam0 * 120f);
		case 3:
			return (fParam0 * 2880f);
		default:
			break;
	}
	return fParam0;
}

void func_40(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		__LIB_2__::func_998(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (__LIB_2__::func_999(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

float func_41(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 200f);
	}
	return ((fParam0 / 8f) * 200f);
}

bool func_42(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 0:
			return true;
		case 2:
			return true;
		default:
			break;
	}
	return false;
}

char* func_43(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
		case 1:
			return "PlayerOverpower";
		case 2:
			return "PlayerOverpower";
		default:
			break;
	}
	return "";
}

void func_44(float fParam0, float fParam1)
{
	if (!__LIB_0__::func_28())
	{
		*fParam0 = -100f;
		*fParam1 = 100f;
		return;
	}
	*fParam0 = Global_40.f_11095.f_40;
	*fParam1 = Global_40.f_11095.f_41;
}

bool func_45(int iParam0)
{
	if (!__LIB_3__::func_959(iParam0))
	{
		return false;
	}
	return __LIB_4__::func_111(iParam0, 2, 1);
}

void func_46(int iParam0)
{
	struct<2> Var0;
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_324 = iParam0;
	Var0 = { __LIB_0__::func_14(joaat("CAMP_FUNDS_CASH")) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

bool func_47(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return true;
	}
	return false;
}

void func_48(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = PLAYER::PLAYER_PED_ID();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	ENTITY::_0x835F131E7DC8F97A(iParam1, fParam0, 0, 0);
}

void func_49(float fParam0)
{
	int iVar0;
	if (fParam0 == 0f)
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::_CHARGE_PED_STAMINA(iVar0, fParam0);
}

void func_50(float fParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (PLAYER::_0xB16223CB7DA965F0(iVar0) && fParam0 > 0f)
	{
		return;
	}
	if (fParam0 == 0f)
	{
		return;
	}
	fVar2 = PLAYER::_0xAB3773E7AA1E9DCC(iVar0);
	if (fParam0 < 0f && bParam1 == 1)
	{
		bParam1 = false;
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, 1f);
	}
	if (fParam0 > 0f)
	{
		PLAYER::_0x51345AE20F22C261(iVar0, fParam0, 0, 0, 0);
	}
	else
	{
		PLAYER::_0x200114E99552462B(iVar0, fParam0, 0);
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, fVar2);
	}
}

bool func_51(int iParam0)
{
	switch (iParam0)
	{
		case -1959946884:
		case -1784068921:
		case -1642438278:
		case -1349086674:
		case 310186733:
		case 456315479:
		case 471747275:
		case 1166592425:
		case 1486898918:
		case 1500419820:
			return true;
		default:
			break;
	}
	return false;
}

int func_52(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1959946884:
			return 6;
		case -1784068921:
			return 7;
		case -1642438278:
			return 2;
		case -1349086674:
			return 8;
		case 310186733:
			return 5;
		case 456315479:
			return 9;
		case 471747275:
			return 3;
		case 1166592425:
			return 4;
		case 1486898918:
			return 0;
		case 1500419820:
			return 1;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

void func_53()
{
	if (__LIB_4__::func_635(32768))
	{
		__LIB_5__::func_548(2048);
	}
	else
	{
		__LIB_5__::func_547(2048);
	}
	if (__LIB_1__::func_533(4194304))
	{
		__LIB_5__::func_548(8388608);
	}
	else
	{
		__LIB_5__::func_547(8388608);
	}
}

int func_54()
{
	if (!__LIB_1__::func_205(Global_35, Global_1357549.f_3[4], 1, 0))
	{
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		return 0;
	}
	return -1;
}

bool func_55(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_69(iParam0))
	{
		return false;
	}
	return (Global_40.f_9384[iParam0 /*2*/] && iParam1) != 0;
}

bool func_56()
{
	return __LIB_1__::func_516();
}

void func_57(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0) && VOLUME::_IS_POSITION_INSIDE_VOLUME(iParam0, Global_36))
	{
		if (!__LIB_4__::func_635(1073741824 /* Float: 2f */))
		{
			__LIB_0__::func_326(1073741824 /* Float: 2f */);
		}
	}
	else if (__LIB_4__::func_635(1073741824 /* Float: 2f */))
	{
		__LIB_0__::func_698(1073741824 /* Float: 2f */);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam1) && VOLUME::_IS_POSITION_INSIDE_VOLUME(iParam1, Global_36))
	{
		if (!__LIB_4__::func_635(32768))
		{
			__LIB_0__::func_326(32768);
		}
	}
	else if (__LIB_4__::func_635(32768))
	{
		__LIB_0__::func_698(32768);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam2) && VOLUME::_IS_POSITION_INSIDE_VOLUME(iParam2, Global_36))
	{
		if (!__LIB_1__::func_533(512))
		{
			__LIB_5__::func_548(512);
		}
	}
	else if (__LIB_1__::func_533(512))
	{
		__LIB_5__::func_547(512);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam3) && VOLUME::_IS_POSITION_INSIDE_VOLUME(iParam3, Global_36))
	{
		if (!__LIB_1__::func_533(1024))
		{
			__LIB_5__::func_548(1024);
		}
	}
	else if (__LIB_1__::func_533(1024))
	{
		__LIB_5__::func_547(1024);
	}
}

void func_58(int iParam0)
{
	if (!__LIB_1__::func_533(33554432))
	{
		if (__LIB_1__::func_533(1024))
		{
			__LIB_5__::func_548(33554432);
			POPULATION::_0xC6DCC2A3A8825C85(0);
		}
	}
	else
	{
		POPULATION::_0x8EC7CD701F872F87(0f, 4270208, 0, 0, -1, -1);
		POPULATION::_0x8EC7CD701F872F87(0.3f, 1760, 0, 0, -1, -1);
		if (!__LIB_1__::func_533(512))
		{
			POPULATION::_0xBC90BDF4E5228EA1();
			__LIB_5__::func_547(33554432);
		}
	}
}

void func_59(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_69(iParam0))
	{
		return;
	}
	Global_40.f_9384[iParam0 /*2*/] = (Global_40.f_9384[iParam0 /*2*/] || iParam1);
}

void func_60(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_69(iParam0))
	{
		return;
	}
	Global_40.f_9384[iParam0 /*2*/] = (Global_40.f_9384[iParam0 /*2*/] - (Global_40.f_9384[iParam0 /*2*/] && iParam1));
}

void func_61()
{
	__LIB_5__::func_547(4096);
	__LIB_5__::func_547(8192);
}

bool func_62()
{
	return __LIB_4__::func_635(1073741824 /* Float: 2f */);
}

void func_63(int iParam0)
{
	var uVar0;
	var uVar1;
	if (iParam0 <= -1 || iParam0 >= 630)
	{
		return;
	}
	__LIB_0__::func_378(iParam0, &uVar0, &uVar1);
	__LIB_2__::func_447(&uVar0, &uVar1);
}

void func_64()
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PED::_0x86F0B6730C32AC14(Global_35, 0);
	}
	if (__LIB_0__::func_272(__LIB_0__::func_271(0), 0))
	{
		PED::_0x86F0B6730C32AC14(__LIB_0__::func_271(0), 0);
	}
	if (__LIB_0__::func_272(__LIB_0__::func_271(16), 0))
	{
		PED::_0x86F0B6730C32AC14(__LIB_0__::func_271(16), 0);
	}
}

void func_65()
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_0__::func_272(Global_1357549.f_1675[iVar0 /*5*/].f_3, 0))
		{
			if (!__LIB_1__::func_16(Global_1357549.f_1675[iVar0 /*5*/].f_3) && !ENTITY::DOES_ENTITY_EXIST(PED::_GET_RIDER_OF_MOUNT(Global_1357549.f_1675[iVar0 /*5*/].f_3, false)))
			{
				bVar1 = false;
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1357549.f_1675[iVar0 /*5*/].f_3))
				{
					PED::_0xF008E0BA1FE1D644(1);
					bVar1 = true;
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1357549.f_1675[iVar0 /*5*/].f_3, true, true);
				}
				PERSCHAR::_0x7B204F88F6C3D287(Global_1357549.f_1675[iVar0 /*5*/].f_4);
				if (bVar1)
				{
					PED::_0x7D4E70A67A651C71(1);
				}
				PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1357549.f_1675[iVar0 /*5*/].f_4);
			}
		}
		iVar0++;
	}
}

void func_66()
{
	if (Global_40.f_4283.f_567)
	{
		__LIB_2__::func_426(&(Global_1357549.f_1897));
	}
}

int func_67(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = __LIB_0__::func_61();
	if (iParam0 != iVar0)
	{
		return 1;
	}
	vVar1 = { __LIB_2__::func_116(iParam0, 1) };
	if (__LIB_0__::func_86(vVar1))
	{
		return 0;
	}
	STREAMING::_0xA8432A14D4DC2101(vVar1);
	if (STREAMING::_HAS_COLLISION_LOADED_AT_COORD(vVar1))
	{
		return 1;
	}
	return 0;
}

void func_68()
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PED::_0x86F0B6730C32AC14(Global_35, 1);
		PED::_0xEF371232BC6053E1(Global_35);
	}
	if (__LIB_0__::func_272(__LIB_0__::func_271(0), 0))
	{
		PED::_0x86F0B6730C32AC14(__LIB_0__::func_271(0), 1);
		PED::_0xEF371232BC6053E1(__LIB_0__::func_271(0));
	}
	if (__LIB_0__::func_272(__LIB_0__::func_271(16), 0))
	{
		PED::_0x86F0B6730C32AC14(__LIB_0__::func_271(16), 1);
		PED::_0xEF371232BC6053E1(__LIB_0__::func_271(16));
	}
}

void func_69(int iParam0)
{
	int iVar0;
	if (((Global_1898077.f_1 == 2 || Global_1898077.f_1 == 5) || Global_1898077.f_1 == 3) || Global_1898077.f_1 == 1)
	{
		return;
	}
	iVar0 = 0;
	if (__LIB_0__::func_2() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077.f_2 = Global_1898077.f_1;
	Global_1898077.f_13 = Global_1898077.f_12;
	Global_1898077.f_1 = 4;
	Global_1898077.f_7 = iVar0;
	Global_1898077.f_12 = iParam0;
	__LIB_0__::func_336(Global_1898077.f_7, Global_1898077.f_12);
}

Vector3 func_70(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -127.3136f, -23.7866f, 95.356f;
		case 6:
			return 2334.85f, 1351.68f, 105.11f;
		case 3:
			return 1865.22f, -1887.22f, 41.39f;
		case 5:
			return 2275.63f, -729.34f, 40.43f;
		case 2:
			return 663.0678f, -1181.825f, 92.08381f;
		case 8:
			return -1621.825f, -1377.163f, 76.24816f;
		default:
			break;
	}
	return __LIB_2__::func_116(__LIB_1__::func_953(iParam0), 0);
}

Vector3 func_71()
{
	vector3 vVar0;
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(Global_1357549.f_3[5]) };
	return __LIB_0__::func_173(Global_36 - vVar0);
}

void func_72(int iParam0)
{
	int iVar0;
	int iVar1[2];
	int iVar4;
	bool bVar5;
	iVar1[0] = 0;
	iVar1[1] = 1;
	iVar4 = 0;
	while (iVar4 < iVar1)
	{
		iVar0 = __LIB_0__::func_398(iVar1[iVar4]);
		if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
		{
		}
		else if (PED::_GET_RIDER_OF_MOUNT(iVar0, false) != 0)
		{
		}
		else if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
		{
		}
		else if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(iParam0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false)))
		{
		}
		else
		{
			bVar5 = (__LIB_4__::func_635(4) || Global_1357549.f_1614);
			if (__LIB_4__::func_635(2) || bVar5)
			{
				PED::SET_PED_RESET_FLAG(iVar0, 154, true);
			}
		}
		iVar4++;
	}
}

void func_73(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				if (!__LIB_4__::func_635(65536))
				{
					__LIB_0__::func_326(65536);
				}
			}
			else if (__LIB_4__::func_635(65536))
			{
				__LIB_0__::func_698(65536);
			}
			break;
		case 1:
			if (bParam1)
			{
				if (!__LIB_4__::func_635(131072))
				{
					__LIB_0__::func_326(131072);
				}
			}
			else if (__LIB_4__::func_635(131072))
			{
				__LIB_0__::func_698(131072);
			}
			break;
	}
}

bool func_74()
{
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[66 /*49*/].f_42, false) && !__LIB_0__::func_1(Global_1347702[66 /*49*/].f_13, 4))
	{
		return true;
	}
	return false;
}

int func_75(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (__LIB_0__::func_141(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		__LIB_1__::func_223(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 0, iParam2, joaat("SHORT_TIMED_EVENT"), 0);
		return iVar1;
	}
	return 0;
}

bool func_76(int iParam0)
{
	int iVar0;
	if (!__LIB_1__::func_917(iParam0))
	{
		return false;
	}
	if (iParam0 == 41 || iParam0 == 82)
	{
		return false;
	}
	iVar0 = __LIB_1__::func_921(iParam0);
	if ((((((((((iVar0 == 10 || iVar0 == 4) || iVar0 == 17) || iVar0 == 31) || iVar0 == 18) || iVar0 == 19) || iVar0 == 22) || iVar0 == 12) || iVar0 == 13) || iVar0 == 14) || iVar0 == 32)
	{
		return true;
	}
	return false;
}

bool func_77(int iParam0, int iParam1)
{
	if (!__LIB_1__::func_917(iParam0))
	{
		return false;
	}
	return (Global_20710.f_2246[iParam0] && iParam1) != 0;
}

void func_78(int iParam0, int iParam1)
{
	if (!__LIB_1__::func_917(iParam0))
	{
	}
	else
	{
		Global_20710.f_2246[iParam0] = (Global_20710.f_2246[iParam0] || iParam1);
	}
}

void func_79(int iParam0, int iParam1)
{
	if (!__LIB_1__::func_917(iParam0))
	{
	}
	else
	{
		Global_20710.f_2246[iParam0] = (Global_20710.f_2246[iParam0] - (Global_20710.f_2246[iParam0] && iParam1));
	}
}

void func_80(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(iParam0->f_14))
	{
		MAP::REMOVE_BLIP(&(iParam0->f_14));
	}
	if (MAP::DOES_BLIP_EXIST(iParam0->f_15))
	{
		MAP::REMOVE_BLIP(&(iParam0->f_15));
	}
	if (MAP::DOES_BLIP_EXIST(iParam0->f_13))
	{
		MAP::REMOVE_BLIP(&(iParam0->f_13));
	}
	__LIB_5__::func_781(538);
}

int func_81(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				return 0;
			}
			else
			{
				return 7;
			}
			break;
		case 0:
			if (bParam1)
			{
				return 7;
			}
			else
			{
				return 3;
			}
			break;
		case 2:
			if (bParam1)
			{
				return 7;
			}
			else if (__LIB_1__::func_533(262144))
			{
				return 6;
			}
			else
			{
				return 5;
			}
			break;
		case 4:
			if (bParam1)
			{
				return 7;
			}
			else
			{
				return 6;
			}
			break;
	}
	return -1;
}

bool func_82()
{
	if (((__LIB_0__::func_815(0) != 0 || __LIB_0__::func_815(2) != 0) || __LIB_0__::func_815(3) != 0) || __LIB_0__::func_815(4) != 0)
	{
		return true;
	}
	return false;
}

bool func_83()
{
	if (__LIB_0__::func_815(0) == 1)
	{
		return true;
	}
	return false;
}

bool func_84(int iParam0, int iParam1)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;
	if (iParam1 == -1)
	{
		return false;
	}
	iVar0 = __LIB_0__::func_574(iParam1);
	if (!PED::_0x608BC6A6AACD5036(&Var1, iParam0, iVar0, 0))
	{
		return false;
	}
	iVar5 = Var1.f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return false;
	}
	return true;
}

void func_85()
{
	if (Global_1934765.f_286 > 300)
	{
		Global_1934765.f_286 = 300;
	}
	STREAMING::_0x2F9AC754FE179D58(__LIB_5__::func_274());
}

void func_86(int iParam0)
{
	Global_1327590.f_11465[iParam0 /*10*/].f_5 = __LIB_0__::func_23();
}

void func_87(int iParam0)
{
	Global_1327590.f_19692[iParam0] = __LIB_0__::func_23();
}

bool func_88(int iParam0)
{
	return __LIB_0__::func_273(iParam0, 2, 1);
}

bool func_89(int iParam0)
{
	int iVar0;
	if (Global_1934765.f_337 == 0)
	{
		return false;
	}
	iVar0 = __LIB_4__::func_341(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return iVar0 == Global_1934765.f_338;
}

int func_90(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return -1395712024;
		case 1:
			return -1611076340;
		case 2:
			return 2108368013;
		case 6:
			return -1162254606;
		case 3:
			return -412827149;
		default:
			break;
	}
	return __LIB_1__::func_976();
}

void func_91(var uParam0)
{
	switch (__LIB_0__::func_317())
	{
		case 1:
			uParam0->f_14 = MAP::_BLIP_ADD_FOR_COORD(joaat("BLIP_STYLE_SHOP"), -125.3398f, -43.2379f, 94.3833f);
			uParam0->f_15 = MAP::_BLIP_ADD_FOR_COORD(joaat("BLIP_STYLE_SHOP"), -149.5986f, -20.2218f, 95.1022f);
			uParam0->f_13 = MAP::_BLIP_ADD_FOR_COORD(joaat("BLIP_STYLE_SHOP"), -138.8856f, -21.4424f, 95.0883f);
			break;
		case 2:
			uParam0->f_14 = MAP::_BLIP_ADD_FOR_COORD(joaat("BLIP_STYLE_SHOP"), 647.7324f, -1245.42f, 42.7703f);
			uParam0->f_15 = MAP::_BLIP_ADD_FOR_COORD(joaat("BLIP_STYLE_SHOP"), 658.9856f, -1229.287f, 43.2276f);
			uParam0->f_13 = MAP::_BLIP_ADD_FOR_COORD(joaat("BLIP_STYLE_SHOP"), 677.5646f, -1254.409f, 43.0152f);
			break;
		case 3:
			uParam0->f_14 = MAP::_BLIP_ADD_FOR_COORD(joaat("BLIP_STYLE_SHOP"), 1906.91f, -1862.294f, 46.3492f);
			uParam0->f_15 = MAP::_BLIP_ADD_FOR_COORD(joaat("BLIP_STYLE_SHOP"), 1886.88f, -1884.633f, 41.8302f);
			uParam0->f_13 = MAP::_BLIP_ADD_FOR_COORD(joaat("BLIP_STYLE_SHOP"), 1877.423f, -1861.41f, 41.8078f);
			break;
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_14))
	{
		MAP::SET_BLIP_SPRITE(uParam0->f_14, joaat("BLIP_SUPPLIES_AMMO"), true);
		MAP::SET_BLIP_FLASH_TIMER(uParam0->f_14, 69, -1);
		__LIB_5__::func_794(uParam0->f_14, __LIB_0__::func_61());
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_15))
	{
		MAP::SET_BLIP_SPRITE(uParam0->f_15, joaat("BLIP_SUPPLIES_HEALTH"), true);
		MAP::SET_BLIP_FLASH_TIMER(uParam0->f_15, 70, -1);
		__LIB_5__::func_794(uParam0->f_15, __LIB_0__::func_61());
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_13))
	{
		MAP::SET_BLIP_SPRITE(uParam0->f_13, joaat("BLIP_SUPPLIES_FOOD"), true);
		MAP::SET_BLIP_FLASH_TIMER(uParam0->f_13, 71, -1);
		__LIB_5__::func_794(uParam0->f_13, __LIB_0__::func_61());
	}
}

bool func_92(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_83(iParam0))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_80(__LIB_3__::func_918(iParam0));
	if (!__LIB_0__::func_79(iVar0))
	{
		return false;
	}
	return __LIB_3__::func_919(iVar0, 4);
}

void func_93(var uParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	float fVar5;
	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		return;
	}
	uParam0->f_29[2] = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(1, joaat("INPUT_LOOK_LR")) * 127f));
	uParam0->f_29[3] = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(1, joaat("INPUT_LOOK_UD")) * 127f));
	if (PAD::IS_LOOK_INVERTED())
	{
		uParam0->f_29[3] = (uParam0->f_29[3] * -1);
	}
	if (uParam0->f_34 == uParam0->f_29[2] && uParam0->f_35 == uParam0->f_29[3])
	{
		if (uParam0->f_37 < MISC::GET_GAME_TIMER())
		{
			uParam0->f_34 = 0;
			uParam0->f_35 = 0;
		}
	}
	else
	{
		uParam0->f_34 = uParam0->f_29[2];
		uParam0->f_35 = uParam0->f_29[3];
		uParam0->f_37 = MISC::GET_GAME_TIMER() + 4000;
	}
	uParam0->f_13.f_2 = (-(BUILTIN::TO_FLOAT(uParam0->f_29[2]) / 127f) * IntToFloat(uParam0->f_25));
	uParam0->f_13.f_1 = ((-uParam0->f_13.f_2 * uParam0->f_27) / IntToFloat(uParam0->f_25));
	if (PAD::IS_LOOK_INVERTED())
	{
		uParam0->f_13 = ((BUILTIN::TO_FLOAT(uParam0->f_29[3]) / 127f) * IntToFloat(uParam0->f_26));
	}
	else
	{
		uParam0->f_13 = (-(BUILTIN::TO_FLOAT(uParam0->f_29[3]) / 127f) * IntToFloat(uParam0->f_26));
	}
	fVar0 = (30f * BUILTIN::TIMESTEP());
	if (!__LIB_0__::func_138(uParam0->f_1, uParam0->f_8))
	{
		uParam0->f_12 = (uParam0->f_12 + MISC::GET_FRAME_TIME());
		if (uParam0->f_12 > uParam0->f_11)
		{
			uParam0->f_12 = uParam0->f_11;
		}
		fVar1 = (uParam0->f_12 / uParam0->f_11);
		uParam0->f_1 = { __LIB_1__::func_367(uParam0->f_1, uParam0->f_8, fVar1) };
	}
	vVar2 = { uParam0->f_13 + uParam0->f_16 };
	uParam0->f_19 = (uParam0->f_19 + __LIB_0__::func_251((((vVar2.x - uParam0->f_19) * 0.05f) * fVar0), -3f, 3f));
	uParam0->f_19.f_1 = (uParam0->f_19.f_1 + __LIB_0__::func_251((((vVar2.y - uParam0->f_19.f_1) * 0.05f) * fVar0), -3f, 3f));
	uParam0->f_19.f_2 = (uParam0->f_19.f_2 + __LIB_0__::func_251((((vVar2.z - uParam0->f_19.f_2) * 0.05f) * fVar0), -3f, 3f));
	if (uParam0->f_36)
	{
		uParam0->f_19 = __LIB_0__::func_251(uParam0->f_19, BUILTIN::TO_FLOAT(-uParam0->f_26), BUILTIN::TO_FLOAT(uParam0->f_26));
		uParam0->f_19.f_1 = __LIB_0__::func_251(uParam0->f_19.f_1, -uParam0->f_27, uParam0->f_27);
		uParam0->f_19.f_2 = __LIB_0__::func_251(uParam0->f_19.f_2, BUILTIN::TO_FLOAT(-uParam0->f_25), BUILTIN::TO_FLOAT(uParam0->f_25));
	}
	uParam0->f_22 = uParam0->f_7;
	fVar5 = PAD::GET_CONTROL_UNBOUND_NORMAL(0, joaat("INPUT_INSPECT_ZOOM"));
	if (fVar5 > 0f)
	{
		uParam0->f_22 = (uParam0->f_22 - IntToFloat(BUILTIN::ROUND((fVar5 * uParam0->f_24))));
	}
	uParam0->f_23 = (uParam0->f_23 + (((uParam0->f_22 - uParam0->f_23) * MISC::GET_FRAME_TIME()) * (2.5f / 0.65f)));
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_19, uParam0->f_23, 0, 1, 1, 2, 1, 0);
}

bool func_94(int* iParam0)
{
	return !__LIB_0__::func_138(iParam0->f_816.f_1, iParam0->f_816.f_8);
}

int func_95(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, __LIB_1__::func_976());
	return iVar0;
}

int func_96(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, __LIB_0__::func_16());
	return iVar0;
}

int func_97()
{
	if (__LIB_0__::func_273(13, 4, 1))
	{
		return 1036815507;
	}
	if (STREAMING::_IS_IMAP_ACTIVE(1036815507))
	{
		STREAMING::_REMOVE_IMAP(1036815507);
	}
	return __LIB_1__::func_976();
}

void func_98(int iParam0)
{
	if (iParam0 == 1)
	{
		__LIB_5__::func_440("hso_post_caravan");
	}
	if (iParam0 == 2)
	{
		__LIB_5__::func_440("dewclm_post_caravan");
	}
	if (iParam0 == 6)
	{
		__LIB_5__::func_440("bvh_nav_endless_summer");
	}
}

void func_99(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			__LIB_5__::func_440("shb_nav_camp_00");
			__LIB_5__::func_440("shb_nav_camp_01");
			break;
	}
}

int func_100(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 0:
					return __LIB_1__::func_976();
				case 1:
					return -1232260252;
				case 2:
					return 1404611977;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2022451711;
				case 1:
					return joaat("HSO_P_CAMP_02");
				case 2:
					return -1177590512;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1402472902;
				case 1:
					return joaat("DEWCLM_P_CAMP_02");
				case 2:
					return -1458944281;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return __LIB_1__::func_976();
				case 1:
					return -1869016398;
				case 2:
					if (__LIB_4__::func_635(268435456))
					{
						if (STREAMING::_IS_IMAP_ACTIVE(806681228))
						{
							STREAMING::_REMOVE_IMAP(806681228);
						}
						return 1311984381;
					}
					else
					{
						if (STREAMING::_IS_IMAP_ACTIVE(1311984381))
						{
							STREAMING::_REMOVE_IMAP(1311984381);
						}
						return 806681228;
					}
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return __LIB_1__::func_976();
				case 1:
					return joaat("SHB_P_CAMP_02");
				case 2:
					return 557551306;
				default:
					break;
			}
			break;
	}
	return __LIB_1__::func_976();
}

int func_101(int iParam0)
{
	int iVar0;
	if (!DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED())
	{
		return iParam0;
	}
	if (!__LIB_0__::func_26())
	{
		return iParam0;
	}
	iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * 0.8f));
	return iVar0;
}

bool func_102(int iParam0)
{
	return __LIB_0__::func_287(iParam0, 5, 1);
}

Vector3 func_103(vector3 vParam0, vector3 vParam3, vector3 vParam6)
{
	vector3 vVar0;
	vVar0 = { __LIB_5__::func_786(vParam6, vParam3) };
	return vParam0 + vVar0;
}

bool func_104()
{
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_271(1)))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Global_1357549.f_1663[1]))
		{
			if (__LIB_1__::func_205(__LIB_0__::func_271(1), Global_1357549.f_1663[1], 1, 0))
			{
				if ((PED::_IS_PED_USING_SCENARIO_HASH(__LIB_0__::func_271(1), joaat("PROP_HUMAN_SLEEP_BED_PILLOW")) || PED::_IS_PED_USING_SCENARIO_HASH(__LIB_0__::func_271(1), joaat("PROP_HUMAN_SLEEP_BED_PILLOW_RIGHT"))) || PED::_IS_PED_USING_SCENARIO_HASH(__LIB_0__::func_271(1), joaat("WORLD_HUMAN_SLEEP_GROUND_ARM")))
				{
					return true;
				}
			}
		}
	}
	return false;
}

char* func_105(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "setup";
		case 1:
			return "running";
		case 2:
			if (__LIB_4__::func_635(268435456))
			{
				if (PATHFIND::_0x5AC0944C156E5F44("bvh_nav_camp_teardown"))
				{
					PATHFIND::_0x527B97C203BB8606("bvh_nav_camp_teardown");
				}
				return "finale1";
			}
			else
			{
				if (PATHFIND::_0x5AC0944C156E5F44("bvh_nav_camp_finale1"))
				{
					PATHFIND::_0x527B97C203BB8606("bvh_nav_camp_finale1");
				}
				return "teardown";
			}
			break;
	}
	return "";
}

void func_106(int iParam0)
{
	if (!__LIB_0__::func_272(iParam0, 0))
	{
	}
	DECORATOR::DECOR_SET_BOOL(iParam0, "CaravanCommonHorse", true);
	PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0, joaat("REL_GANG_DUTCHS_HORSES"));
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_GANG_DUTCHS_HORSES"));
	PED::SET_PED_CONFIG_FLAG(iParam0, 324, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 331, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 471, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 1, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 54, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 121, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 302, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 412, false);
	PED::_0xAE6004120C18DF97(iParam0, 2, 0);
	PED::_0xAE6004120C18DF97(iParam0, 3, 0);
}

bool func_107(int iParam0)
{
	var uVar0;
	return __LIB_0__::func_554(iParam0, &uVar0);
}

void func_108(var uParam0)
{
	char cVar0[64];
	if (!__LIB_0__::func_139(uParam0->f_1))
	{
		StringCopy(&cVar0, "JOURNAL_INFO_SHOW", 64);
		if (uParam0->f_772)
		{
			StringCopy(&cVar0, "JOURNAL_INFO_HIDE", 64);
		}
		uParam0->f_1 = __LIB_4__::func_450(&cVar0, joaat("INPUT_GAME_MENU_EXTRA_OPTION"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
		__LIB_4__::func_12(uParam0->f_1, -2019190071, 0, 1);
		__LIB_1__::func_221(uParam0->f_1, uParam0->f_773, 1);
	}
}

void func_109(int iParam0, int iParam1)
{
	__LIB_0__::func_11(iParam0);
}

bool func_110()
{
	int iVar0;
	if (__LIB_0__::func_6(Global_1898437) && __LIB_0__::func_700(Global_1898437) == 1)
	{
		iVar0 = __LIB_0__::func_76(Global_1898437);
		if ((__LIB_0__::func_83(iVar0) && SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1835011[iVar0 /*74*/].f_22))) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Global_1835011[iVar0 /*74*/].f_22))) > 0)
		{
			return true;
		}
	}
	return false;
}

int func_111(var uParam0, struct<18> Param1)
{
	if (!__LIB_4__::func_834(uParam0))
	{
		return 0;
	}
	uParam0->f_2[*uParam0 /*18*/] = { Param1 };
	*uParam0++;
	return 1;
}

int func_112(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	Var1 = -961687407;
	if (__LIB_0__::func_2() == -1)
	{
		Var1 = 1444744190;
	}
	Var1.f_1 = iParam0;
	Var1.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var1);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var1))
	{
		return 0;
	}
	if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var1, -624749060))
	{
		return 0;
	}
	return __LIB_0__::func_461(iVar0);
}

bool func_113(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	if (Global_1946804.f_2535.f_1 <= 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		Global_1946804.f_2535.f_2 = 0;
		Global_1946804.f_2535.f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_1946804.f_2535.f_43[iVar0 /*2*/] = { Var2 };
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 39)
		{
			Global_1946804.f_2535.f_3[iVar1] = 0;
			iVar1++;
		}
		return true;
	}
	iVar0 = __LIB_5__::func_784(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	Global_1946804.f_2535.f_2 = (Global_1946804.f_2535.f_2 - (Global_1946804.f_2535.f_2 && Global_1946804.f_2535.f_43[iVar0 /*2*/].f_1));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (__LIB_5__::func_789(iVar1, Global_1946804.f_2535.f_43[iVar0 /*2*/].f_1))
		{
			__LIB_5__::func_790(iVar1, Global_1946804.f_2535.f_43[iVar0 /*2*/].f_1);
		}
		iVar1++;
	}
	Global_1946804.f_2535.f_1 = (Global_1946804.f_2535.f_1 - 1);
	Global_1946804.f_2535.f_43[iVar0 /*2*/] = { Global_1946804.f_2535.f_43[Global_1946804.f_2535.f_1 /*2*/] };
	Global_1946804.f_2535.f_43[Global_1946804.f_2535.f_1 /*2*/].f_1 = 0;
	Global_1946804.f_2535.f_43[Global_1946804.f_2535.f_1 /*2*/] = 0;
	return true;
}

bool func_114(int iParam0)
{
	return (Global_1357549.f_1885 == iParam0 && !__LIB_0__::func_75(&(Global_1357549.f_1901)));
}

bool func_115(int iParam0)
{
	if (!__LIB_3__::func_959(iParam0))
	{
		return false;
	}
	return __LIB_4__::func_111(iParam0, 1, 1);
}

bool func_116(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam0 == -696754231)
	{
		iVar0 = 1742327865;
		if (__LIB_0__::func_357(__LIB_0__::func_802(iVar0)) != 81053684)
		{
			return false;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	*iParam1 = __LIB_0__::func_161(iVar0, 1);
	return true;
}

void func_117(int iParam0)
{
	int iVar0;
	if (Global_1572887.f_13 != 0 || Global_1572887.f_12 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (Global_1058888.f_42357.f_1[iVar0 /*5*/] == 0)
	{
		return;
	}
	__LIB_4__::func_837(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1058888.f_42357.f_1[iVar0 /*5*/] = 0;
}

bool func_118(int iParam0)
{
	if (__LIB_0__::func_34(iParam0))
	{
		return VEHICLE::_0xC29996A337BDD099(Global_1425371[iParam0 /*373*/].f_1);
	}
	return false;
}

int func_119()
{
	if (__LIB_4__::func_601())
	{
		return 1;
	}
	return 0;
}

void func_120(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;
	sVar0 = __LIB_3__::func_133(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(iParam0, __LIB_4__::func_602(iParam1), fParam2, -1);
	}
}

void func_121()
{
	Local_18.f_1862 = 0;
	Local_18.f_1862.f_1 = 0;
	Local_18.f_1862.f_2 = 0;
	Local_18.f_1862.f_3 = -1;
	Local_18.f_1862.f_5 = __LIB_0__::func_749();
	if (Local_18.f_1862.f_4 != -1)
	{
		__LIB_0__::func_783(Local_18.f_1862.f_4, 256);
	}
	Local_18.f_1862.f_4 = -1;
}

int func_122()
{
	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("CamTransitionBlinkSlow") && GRAPHICS::_0xFBF161FCFEC8589E("CamTransitionBlinkSlow", 2, false, &(Local_18.f_1934.f_79)))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(PLAYER::PLAYER_PED_ID(), __LIB_5__::func_263(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_6, Local_18.f_1934.f_67), __LIB_0__::func_514(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_9, Local_18.f_1934.f_67.f_3), true, true, false);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(__LIB_0__::func_514(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_10, Local_18.f_1934.f_67.f_4), 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(__LIB_0__::func_514(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_11, Local_18.f_1934.f_67.f_5), 1f);
		TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, Local_18.f_1934.f_66, 0f, 0f, 0f, 2f, 33);
		return 4;
	}
	if (__LIB_0__::func_75(&(Local_18.f_1934.f_80)) && __LIB_1__::func_871(&(Local_18.f_1934.f_80)) > 5000)
	{
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
		return 0;
	}
	return -1;
}

bool func_123(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (__LIB_0__::func_163(iParam0, 713668775))
	{
		return false;
	}
	if (((__LIB_0__::func_163(iParam0, -76381094) || __LIB_0__::func_163(iParam0, -1098463898)) || __LIB_0__::func_163(iParam0, 993674639)) || TASK::GET_IS_TASK_ACTIVE(iParam0, 7))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(iParam0, Global_1357549.f_3[0], false, 0))
	{
		return false;
	}
	if (!PED::_0x2D64376CF437363E(iParam0))
	{
		return true;
	}
	if (!PED::_IS_MOUNT_SEAT_FREE(iParam0, -1))
	{
		return false;
	}
	if (iParam1 != -1 && __LIB_0__::func_211(iParam1))
	{
		return false;
	}
	return true;
}

void func_124(bool bParam0)
{
	__LIB_0__::func_267(bParam0);
	__LIB_1__::func_142(!bParam0);
}

bool func_125(int iParam0)
{
	return __LIB_1__::func_935(iParam0, 32);
}

bool func_126()
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_PLAYER_OPEN_CASHBOX")))
		{
			return true;
		}
	}
	return false;
}

void func_127(int* iParam0)
{
	vector3 vVar0[24];
	if (Global_1357549.f_1671 == -1)
	{
		return;
	}
	switch (Global_1357549.f_1671)
	{
		case 0:
			StringCopy(&cVar0, "DONATE_M_SMALL", 24);
			break;
		case 1:
			StringCopy(&cVar0, "DONATE_M_MID", 24);
			break;
		case 2:
			StringCopy(&cVar0, "DONATE_M_BIG", 24);
			break;
		case 3:
			StringCopy(&cVar0, "DONATE_FOOD", 24);
			break;
		case 4:
			StringCopy(&cVar0, "DONATE_SUPP", 24);
			break;
		case 5:
			StringCopy(&cVar0, "DONATE_REMIND", 24);
			break;
		case 6:
			StringCopy(&cVar0, "DONATE_LOW", 24);
			break;
		case 7:
			StringCopy(&cVar0, "ASK_ABIGAIL", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(13), "ABIGAIL", 0);
			break;
		case 8:
			StringCopy(&cVar0, "GIVE_ABIGAIL", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(13), "ABIGAIL", 0);
			break;
		case 10:
			StringCopy(&cVar0, "ASK_JACK1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(14), "JACK", 0);
			break;
		case 11:
			StringCopy(&cVar0, "GIVE_JACK1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(14), "JACK", 0);
			break;
		case 13:
			StringCopy(&cVar0, "ASK_JACK2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(14), "JACK", 0);
			break;
		case 14:
			StringCopy(&cVar0, "GIVE_JACK2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(14), "JACK", 0);
			break;
		case 16:
			StringCopy(&cVar0, "ASK_CHARLES1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(7), "CHARLES_SMITH", 0);
			break;
		case 17:
			StringCopy(&cVar0, "GIVE_CHARLES1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(7), "CHARLES_SMITH", 0);
			break;
		case 18:
			StringCopy(&cVar0, "THANK_CHARLES1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(7), "CHARLES_SMITH", 0);
			break;
		case 19:
			StringCopy(&cVar0, "ASK_CHARLES2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(7), "CHARLES_SMITH", 0);
			break;
		case 20:
			StringCopy(&cVar0, "GIVE_CHARLES2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(7), "CHARLES_SMITH", 0);
			break;
		case 21:
			StringCopy(&cVar0, "THANK_CHARLES2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(7), "CHARLES_SMITH", 0);
			break;
		case 22:
			StringCopy(&cVar0, "ASK_CHARLES3", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(7), "CHARLES_SMITH", 0);
			break;
		case 23:
			StringCopy(&cVar0, "GIVE_CHARLES3", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(7), "CHARLES_SMITH", 0);
			break;
		case 24:
			StringCopy(&cVar0, "THANK_CHARLES3", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(7), "CHARLES_SMITH", 0);
			break;
		case 25:
			StringCopy(&cVar0, "ASK_CHARLES4", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(7), "CHARLES_SMITH", 0);
			break;
		case 26:
			StringCopy(&cVar0, "GIVE_CHARLES4", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(7), "CHARLES_SMITH", 0);
			break;
		case 27:
			StringCopy(&cVar0, "THANK_CHARLES4", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(7), "CHARLES_SMITH", 0);
			break;
		case 28:
			StringCopy(&cVar0, "ASK_SUSAN1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(19), "SUSAN", 0);
			break;
		case 29:
			StringCopy(&cVar0, "GIVE_SUSAN1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(19), "SUSAN", 0);
			break;
		case 30:
			StringCopy(&cVar0, "THANK_SUSAN1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(19), "SUSAN", 0);
			break;
		case 31:
			StringCopy(&cVar0, "ASK_SUSAN2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(19), "SUSAN", 0);
			break;
		case 32:
			StringCopy(&cVar0, "GIVE_SUSAN2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(19), "SUSAN", 0);
			break;
		case 33:
			StringCopy(&cVar0, "THANK_SUSAN2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(19), "SUSAN", 0);
			break;
		case 34:
			StringCopy(&cVar0, "ASK_SWANSON", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(21), "SWANSON", 0);
			break;
		case 35:
			StringCopy(&cVar0, "GIVE_SWANSON", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(21), "SWANSON", 0);
			break;
		case 36:
			StringCopy(&cVar0, "THANK_SWANSON", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(21), "SWANSON", 0);
			break;
		case 37:
			StringCopy(&cVar0, "ASK_PEARSON1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(17), "PEARSON", 0);
			break;
		case 38:
			StringCopy(&cVar0, "GIVE_PEARSON1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(17), "PEARSON", 0);
			break;
		case 39:
			StringCopy(&cVar0, "THANK_PEARSON1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(17), "PEARSON", 0);
			break;
		case 40:
			StringCopy(&cVar0, "ASK_PEARSON2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(17), "PEARSON", 0);
			break;
		case 41:
			StringCopy(&cVar0, "GIVE_PEARSON2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(17), "PEARSON", 0);
			break;
		case 42:
			StringCopy(&cVar0, "THANK_PEARSON2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(17), "PEARSON", 0);
			break;
		case 43:
			StringCopy(&cVar0, "ASK_JAVIER", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(2), "JAVIER", 0);
			break;
		case 44:
			StringCopy(&cVar0, "GIVE_JAVIER", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(2), "JAVIER", 0);
			break;
		case 45:
			StringCopy(&cVar0, "THANK_JAVIER", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(2), "JAVIER", 0);
			break;
		case 46:
			StringCopy(&cVar0, "ASK_BILL", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(3), "BILL", 0);
			break;
		case 47:
			StringCopy(&cVar0, "GIVE_BILL", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(3), "BILL", 0);
			break;
		case 48:
			StringCopy(&cVar0, "THANK_BILL", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(3), "BILL", 0);
			break;
		case 49:
			StringCopy(&cVar0, "ASK_SEAN", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(8), "SEAN", 0);
			break;
		case 50:
			StringCopy(&cVar0, "GIVE_SEAN", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(8), "SEAN", 0);
			break;
		case 51:
			StringCopy(&cVar0, "THANK_SEAN", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(8), "SEAN", 0);
			break;
		case 82:
			StringCopy(&cVar0, "ASK_KIERAN", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(10), "KIERAN", 0);
			break;
		case 83:
			StringCopy(&cVar0, "GIVE_KIERAN", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(10), "KIERAN", 0);
			break;
		case 84:
			StringCopy(&cVar0, "THANK_KIERAN", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(10), "KIERAN", 0);
			break;
		case 88:
			StringCopy(&cVar0, "ASK_TILLY", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(22), "TILLY", 0);
			break;
		case 89:
			StringCopy(&cVar0, "GIVE_TILLY", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(22), "TILLY", 0);
			break;
		case 90:
			StringCopy(&cVar0, "THANK_TILLY", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(22), "TILLY", 0);
			break;
		case 52:
			StringCopy(&cVar0, "ASK_LENNY1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(9), "LENNY", 0);
			break;
		case 53:
			StringCopy(&cVar0, "GIVE_LENNY1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(9), "LENNY", 0);
			break;
		case 54:
			StringCopy(&cVar0, "THANK_LENNY1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(9), "LENNY", 0);
			break;
		case 55:
			StringCopy(&cVar0, "ASK_LENNY2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(9), "LENNY", 0);
			break;
		case 56:
			StringCopy(&cVar0, "GIVE_LENNY2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(9), "LENNY", 0);
			break;
		case 57:
			StringCopy(&cVar0, "THANK_LENNY2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(9), "LENNY", 0);
			break;
		case 58:
			StringCopy(&cVar0, "ASK_MARY1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(15), "MARYBETH", 0);
			break;
		case 59:
			StringCopy(&cVar0, "GIVE_MARY1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(15), "MARYBETH", 0);
			break;
		case 60:
			StringCopy(&cVar0, "THANK_MARY1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(15), "MARYBETH", 0);
			break;
		case 61:
			StringCopy(&cVar0, "ASK_MARY2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(15), "MARYBETH", 0);
			break;
		case 62:
			StringCopy(&cVar0, "GIVE_MARY2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(15), "MARYBETH", 0);
			break;
		case 63:
			StringCopy(&cVar0, "THANK_MARY2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(15), "MARYBETH", 0);
			break;
		case 91:
			StringCopy(&cVar0, "ASK_UNCLE", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(4), "UNCLE", 0);
			break;
		case 92:
			StringCopy(&cVar0, "GIVE_UNCLE", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(4), "UNCLE", 0);
			break;
		case 93:
			StringCopy(&cVar0, "THANK_UNCLE", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(4), "UNCLE", 0);
			break;
		case 94:
			StringCopy(&cVar0, "ASK_TRELW", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(23), "TRELAWNY", 0);
			break;
		case 95:
			StringCopy(&cVar0, "GIVE_TRELW", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(23), "TRELAWNY", 0);
			break;
		case 96:
			StringCopy(&cVar0, "THANK_TRELW", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(23), "TRELAWNY", 0);
			break;
		case 64:
			StringCopy(&cVar0, "ASK_HOSEA1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(5), "HOSEA", 0);
			break;
		case 65:
			StringCopy(&cVar0, "GIVE_HOSEA1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(5), "HOSEA", 0);
			break;
		case 66:
			StringCopy(&cVar0, "THANK_HOSEA1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(5), "HOSEA", 0);
			break;
		case 67:
			StringCopy(&cVar0, "ASK_HOSEA2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(5), "HOSEA", 0);
			break;
		case 68:
			StringCopy(&cVar0, "GIVE_HOSEA2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(5), "HOSEA", 0);
			break;
		case 69:
			StringCopy(&cVar0, "THANK_HOSEA2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(5), "HOSEA", 0);
			break;
		case 70:
			StringCopy(&cVar0, "ASK_KAREN", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(20), "KAREN", 0);
			break;
		case 71:
			StringCopy(&cVar0, "GIVE_KAREN", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(20), "KAREN", 0);
			break;
		case 72:
			StringCopy(&cVar0, "THANK_KAREN", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(20), "KAREN", 0);
			break;
		case 73:
			StringCopy(&cVar0, "ASK_DUTCH", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(0), "DUTCH", 0);
			break;
		case 74:
			StringCopy(&cVar0, "GIVE_DUTCH", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(0), "DUTCH", 0);
			break;
		case 75:
			StringCopy(&cVar0, "THANK_DUTCH", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(0), "DUTCH", 0);
			break;
		case 76:
			StringCopy(&cVar0, "ASK_MICAH", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(6), "MICAH_BELL", 0);
			break;
		case 77:
			StringCopy(&cVar0, "GIVE_MICAH", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(6), "MICAH_BELL", 0);
			break;
		case 78:
			StringCopy(&cVar0, "THANK_MICAH", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(6), "MICAH_BELL", 0);
			break;
		case 79:
			StringCopy(&cVar0, "ASK_SADIE", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(11), "SADIE_ADLER", 0);
			break;
		case 80:
			StringCopy(&cVar0, "GIVE_SADIE", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(11), "SADIE_ADLER", 0);
			break;
		case 81:
			StringCopy(&cVar0, "THANK_SADIE", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(11), "SADIE_ADLER", 0);
			break;
		case 85:
			StringCopy(&cVar0, "ASK_MOLLY", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(16), "MOLLY", 0);
			break;
		case 86:
			StringCopy(&cVar0, "GIVE_MOLLY", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(16), "MOLLY", 0);
			break;
		case 87:
			StringCopy(&cVar0, "THANK_MOLLY", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(16), "MOLLY", 0);
			break;
		case 97:
			StringCopy(&cVar0, "CPGEN_DTBOX1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(0), "DUTCH", 0);
			__LIB_1__::func_104(&(iParam0->f_1325), cVar0, 0, -1, 0, 0);
			Global_1357549.f_1671 = -1;
			return;
	}
	Global_1357549.f_1671 = -1;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		__LIB_1__::func_104(&(iParam0->f_1325), cVar0, 0, -1, 0, 0);
	}
}

void func_128(var uParam0)
{
	uParam0->f_8 = __LIB_2__::func_513("BLIP_CAMP_HITCH", joaat("INPUT_SADDLE_TRANSFER"), uParam0->f_5, 1, 0, 0, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
	MISC::SET_BIT(&(uParam0->f_1), 3);
}

void func_129(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!__LIB_0__::func_797(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_398(iParam0);
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		iVar4 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar1));
		if (!ENTITY::IS_ENTITY_A_PED(iVar4))
		{
		}
		else
		{
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4);
			if (!PED::IS_PED_HUMAN(iVar5))
			{
			}
			else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar4))
			{
			}
			else
			{
				ENTITY::_DELETE_CARRIABLE(&iVar4);
			}
		}
		iVar3++;
	}
	if (ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		ITEMSET::DESTROY_ITEMSET(iVar1);
	}
}

void func_130()
{
	int iVar0;
	iVar0 = __LIB_0__::func_398(0);
	if (PED::GET_PED_CONFIG_FLAG(iVar0, 136, true))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 136, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iVar0, 312, true))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 312, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iVar0, 113, true))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 113, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iVar0, 301, true))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 301, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iVar0, 367, true))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 367, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iVar0, 72, true))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 72, false);
	}
	if (!PED::_0x2C76FA0E01681F8D(iVar0, 0))
	{
		PED::_0xAE6004120C18DF97(iVar0, 0, 1);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
	if (FLOCK::GET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 48))
	{
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 48, false);
	}
	if (ENTITY::_IS_ENTITY_FROZEN(iVar0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(iVar0))
	{
		ENTITY::SET_ENTITY_VISIBLE(iVar0, true);
	}
	if (!ENTITY::_GET_ENTITY_CAN_BE_DAMAGED(iVar0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
	}
}

int func_131()
{
	int iVar0;
	struct<15> Var1;
	struct<10> Var30;
	struct<4> Var44;
	iVar0 = -352578118;
	Var1.f_9 = -1591664384;
	Var30.f_9 = -1591664384;
	Var44 = { __LIB_0__::func_949(0) };
	if (!__LIB_0__::func_849(Var44, iVar0, &Var30, 0, 0))
	{
		return 0;
	}
	if (!__LIB_0__::func_850(&Var30, &Var1))
	{
		return 0;
	}
	return Var1.f_14;
}

void func_132(int iParam0)
{
	if (__LIB_0__::func_317() == 3 && iParam0 == 1)
	{
		__LIB_0__::func_68(1163459288, 0, 0);
		__LIB_1__::func_948(1163459288, 0, -1f, 0, 1, 0.4f, 1, 0);
	}
	if (__LIB_0__::func_317() == 3 && iParam0 == 0)
	{
		__LIB_0__::func_68(58833085, 0, 0);
		__LIB_0__::func_68(-629053815, 0, 0);
		__LIB_1__::func_948(58833085, 0, 1f, 0, 1, 0.4f, 1, 0);
		__LIB_1__::func_948(-629053815, 0, -1f, 0, 1, 0.4f, 1, 0);
	}
}

bool func_133(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_4__::func_922(iParam0, 16384) && !__LIB_5__::func_779(iParam0, 1))
	{
		return true;
	}
	if (!__LIB_0__::func_29(iParam1))
	{
		return false;
	}
	iVar0 = __LIB_1__::func_334(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_25))
	{
		iVar1 = VOLUME::_0x7FD78DFD0C5D7B9B(Global_1914319.f_3[iParam0 /*446*/].f_25);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (iVar1 != iVar0)
			{
				VOLUME::_0x6D5F9E69BA1BE783(Global_1914319.f_3[iParam0 /*446*/].f_25);
			}
		}
		__LIB_2__::func_812(iParam1, Global_1914319.f_3[iParam0 /*446*/].f_25, 1);
		VOLUME::_0x4A8FEFC43FD8AC9B(Global_1914319.f_3[iParam0 /*446*/].f_25, 1, 1);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_28))
	{
		iVar2 = VOLUME::_0x7FD78DFD0C5D7B9B(Global_1914319.f_3[iParam0 /*446*/].f_28);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (iVar2 != iVar0)
			{
				VOLUME::_0x6D5F9E69BA1BE783(Global_1914319.f_3[iParam0 /*446*/].f_28);
			}
		}
		__LIB_2__::func_812(iParam1, Global_1914319.f_3[iParam0 /*446*/].f_28, 1);
		VOLUME::_0x4A8FEFC43FD8AC9B(Global_1914319.f_3[iParam0 /*446*/].f_28, 0, 1);
	}
	Global_1914319.f_3[iParam0 /*446*/].f_21 = iParam1;
	Global_1914319.f_3[iParam0 /*446*/].f_23 = iVar0;
	return true;
}

void func_134(int iParam0, float fParam1)
{
	char* sVar0;
	bool bVar1;
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "HORSE_XP_TRUST_EARNED";
			break;
		case 1:
		case 2:
		case 3:
			return;
		case 4:
			sVar0 = "HORSE_XP_LEADING";
			break;
		case 11:
		case 12:
			sVar0 = "HORSE_XP_HITCH";
			break;
		case 5:
			return;
		case 6:
			sVar0 = "HORSE_XP_BREAK_HORSE";
			break;
		case 13:
		case 14:
		case 15:
			sVar0 = "HORSE_XP_FED";
			break;
		case 16:
			sVar0 = "HORSE_XP_TREAT";
			break;
		case 17:
		case 18:
		case 19:
			sVar0 = "HORSE_XP_GROOM";
			break;
		case 20:
			sVar0 = "HORSE_XP_OINTMENT";
			break;
		case 7:
		case 8:
			sVar0 = "HORSE_XP_PATTED";
			break;
		case 9:
		case 10:
			sVar0 = "HORSE_XP_CALM";
			break;
		case 21:
		case 22:
			sVar0 = "HORSE_XP_LIGHT_LOAD";
			break;
		default:
			return;
	}
	bVar1 = false;
	if (bVar1)
	{
		sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::FLOOR(fParam1));
	}
	else
	{
		sVar0 = MISC::_CREATE_VAR_STRING(2, "HORSE_XP_GENERIC_EARNED");
	}
	__LIB_0__::func_924(sVar0, "ITEMTYPE_TEXTURES", joaat("TRANSACTION_HORSE_BOND"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_135(int iParam0)
{
	int iVar0;
	int iVar1[10];
	int iVar12[10];
	int iVar23;
	iVar0 = __LIB_0__::func_592();
	switch (iParam0)
	{
		case 1:
			if (iParam0 != __LIB_0__::func_317())
			{
				iVar1[0] = 633503129;
				iVar12[0] = -697307430;
				iVar12[1] = -1873685184;
				iVar12[2] = -1536198599;
			}
			else
			{
				iVar12[0] = 633503129;
				switch (iVar0)
				{
					case 0:
						iVar1[0] = -697307430;
						iVar12[1] = -1873685184;
						iVar12[2] = -1536198599;
						break;
					case 1:
						iVar1[0] = -1873685184;
						iVar12[1] = -697307430;
						iVar12[2] = -1536198599;
						break;
					case 2:
						iVar1[0] = -1536198599;
						iVar12[1] = -697307430;
						iVar12[2] = -1873685184;
						break;
				}
			}
			break;
		case 3:
			if (iParam0 != __LIB_0__::func_317())
			{
				if (!__LIB_0__::func_898(282809459) && !__LIB_0__::func_898(1626481264))
				{
					iVar1[0] = 2113454609;
					iVar12[0] = __LIB_1__::func_976();
				}
				else
				{
					iVar1[0] = __LIB_1__::func_976();
					iVar12[0] = 2113454609;
				}
				iVar12[1] = __LIB_1__::func_976();
			}
			else
			{
				iVar12[0] = 2113454609;
				switch (iVar0)
				{
					case 0:
						iVar1[0] = __LIB_1__::func_976();
						iVar12[1] = __LIB_1__::func_976();
						break;
					case 1:
						iVar1[0] = __LIB_1__::func_976();
						iVar12[1] = __LIB_1__::func_976();
						break;
				}
			}
			break;
		case 2:
			if (iParam0 != __LIB_0__::func_317())
			{
				iVar1[0] = 1764814553;
				iVar12[0] = 519091847;
				iVar12[1] = -1874720370;
				iVar12[2] = -376056363;
				if (__LIB_0__::func_317() == 0 || __LIB_0__::func_317() == 1)
				{
					iVar1[1] = -1225606266;
					iVar1[2] = -648893593;
					iVar1[3] = -1496619689;
					iVar12[3] = -1936937394;
					iVar12[4] = -61896664;
				}
				else
				{
					iVar1[1] = -1936937394;
					iVar1[2] = -61896664;
					iVar12[3] = -1496619689;
					iVar12[4] = -648893593;
					iVar12[5] = -1225606266;
				}
			}
			else
			{
				iVar12[0] = 1764814553;
				switch (iVar0)
				{
					case 0:
						iVar1[0] = 519091847;
						iVar12[1] = -1874720370;
						iVar12[2] = -376056363;
						break;
					case 1:
						iVar1[0] = -1874720370;
						iVar1[1] = -61896664;
						iVar12[1] = 519091847;
						iVar12[2] = -376056363;
						iVar12[3] = -648893593;
						iVar12[4] = -1225606266;
						iVar12[5] = -1496619689;
						break;
					case 2:
						iVar1[0] = -376056363;
						iVar12[1] = 519091847;
						iVar12[2] = -1874720370;
						break;
				}
			}
			break;
		case 6:
			if (iParam0 != __LIB_0__::func_317())
			{
				if (__LIB_1__::func_25(Global_1347702[68 /*49*/].f_15, 1))
				{
					iVar1[0] = 753181111;
					iVar12[0] = 1475089455;
				}
				else
				{
					iVar1[0] = 1475089455;
					iVar12[0] = 753181111;
				}
				iVar12[1] = 702867922;
				iVar12[2] = 913170302;
				iVar12[3] = 637861796;
			}
			else
			{
				switch (iVar0)
				{
					case 0:
						iVar1[0] = 913170302;
						iVar12[0] = 753181111;
						iVar12[1] = 1475089455;
						iVar12[2] = 702867922;
						iVar12[3] = 637861796;
						break;
					case 1:
						iVar1[0] = 637861796;
						iVar12[0] = 753181111;
						iVar12[1] = 1475089455;
						iVar12[2] = 913170302;
						iVar12[3] = 702867922;
						break;
					case 2:
						iVar1[0] = 702867922;
						iVar12[0] = 753181111;
						iVar12[1] = 1475089455;
						iVar12[2] = 913170302;
						iVar12[3] = 637861796;
						break;
				}
			}
			break;
	}
	iVar23 = 0;
	while (iVar23 < iVar1)
	{
		if (__LIB_0__::func_30(iVar1[iVar23]))
		{
			if (!STREAMING::_IS_IMAP_ACTIVE(iVar1[iVar23]))
			{
				STREAMING::_REQUEST_IMAP(iVar1[iVar23]);
			}
		}
		iVar23++;
	}
	iVar23 = 0;
	while (iVar23 < iVar12)
	{
		if (__LIB_0__::func_30(iVar12[iVar23]))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(iVar12[iVar23]))
			{
				STREAMING::_REMOVE_IMAP(iVar12[iVar23]);
			}
		}
		iVar23++;
	}
}

bool func_136()
{
	int iVar0;
	iVar0 = Global_40.f_4283;
	if (iVar0 == 4 || iVar0 == 7)
	{
		return false;
	}
	if (iVar0 == 0 && Global_40.f_4283.f_4 == 2)
	{
		return false;
	}
	if (iVar0 == 5)
	{
		if (!__LIB_1__::func_25(Global_1835011[44 /*74*/].f_1, 1))
		{
			return false;
		}
	}
	return true;
}

bool func_137()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (Global_1879534)
	{
		return false;
	}
	if (__LIB_0__::func_296(0, 1, 0))
	{
		return true;
	}
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (Global_40.f_4942[iVar1 /*60*/].f_59 != 0)
		{
			iVar0 = __LIB_0__::func_700(Global_40.f_4942[iVar1 /*60*/].f_59);
			bVar2 = false;
			switch (iVar0)
			{
				case 8:
					if (!__LIB_0__::func_627(__LIB_0__::func_957(Global_40.f_4942[iVar1 /*60*/].f_59), 0))
					{
						bVar2 = true;
					}
					break;
				default:
					if (!__LIB_0__::func_702(Global_40.f_4942[iVar1 /*60*/].f_59))
					{
						bVar2 = true;
					}
					break;
			}
			if (bVar2)
			{
				Global_40.f_4942[iVar1 /*60*/].f_59 = 0;
				__LIB_0__::func_176(iVar1, 512, 1);
			}
		}
		iVar1++;
	}
	return true;
}

bool func_138()
{
	int iVar0;
	iVar0 = __LIB_0__::func_786();
	return iVar0 <= -160;
}

bool func_139()
{
	int iVar0;
	iVar0 = __LIB_0__::func_786();
	return iVar0 >= 160;
}

int func_140(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::_0x9A100F1CF4546629(iParam0) || ENTITY::_0xC346A546612C49A9(iParam0))
	{
		iVar0 = __LIB_5__::func_76(iParam0);
		if (!__LIB_0__::func_144(iVar0, 0))
		{
			iVar0 = __LIB_5__::func_797(iParam0);
		}
	}
	else
	{
		iVar0 = __LIB_5__::func_797(iParam0);
	}
	return iVar0;
}

int func_141(int iParam0, int iParam1, int iParam2)
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14[15];
	int iVar45;
	int iVar46;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	*iParam2 = 0;
	Var0 = { __LIB_0__::func_373(-1591664384, -1591664384, 0, 0, iParam1, 0, -1, 0, 0) };
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var0, &iVar10, 1);
	if (iVar11 != -1)
	{
		iVar12 = 0;
		while (iVar12 < iVar10)
		{
			if (ITEMDATABASE::_0x8750F69A720C2E41(iVar11, iVar12, &iVar13))
			{
				if (__LIB_0__::func_976(iVar13, iParam1, &Var14, &iVar45, 1, 0))
				{
					iVar46 = 0;
					while (iVar46 < iVar45)
					{
						if (iParam0 == Var14[iVar46 /*2*/])
						{
							*iParam2 = (*iParam2 + Var14[iVar46 /*2*/].f_1);
						}
						iVar46++;
					}
				}
			}
			iVar12++;
		}
		ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar11);
	}
	return 1;
}

bool func_142(bool bParam0, float fParam1, int iParam2, float fParam3)
{
	int iVar0;
	float fVar1;
	if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		return true;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return true;
	}
	__LIB_5__::func_782(1);
	if (!VEHICLE::IS_VEHICLE_STOPPED(iVar0) && !VEHICLE::_0x404527BC03DA0E6C(iVar0))
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iVar0, fParam1, iParam2, false);
	}
	else
	{
		fVar1 = ENTITY::GET_ENTITY_SPEED(iVar0);
		if (MISC::ABSF(fVar1) <= fParam3)
		{
			__LIB_5__::func_798(&iVar0);
			if (!bParam0)
			{
				return true;
			}
			else if (!__LIB_0__::func_163(Global_35, -828834893))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, 0);
			}
		}
	}
	return false;
}

bool func_143(bool bParam0)
{
	if (bParam0)
	{
		if (((((Global_1357549.f_1672 == -774242862 || Global_1357549.f_1672 == joaat("MONEY_LOANSHARK_WINTON_DEBT")) || Global_1357549.f_1672 == joaat("MONEY_LOANSHARK_GWEN_DEBT")) || Global_1357549.f_1672 == joaat("MONEY_LOANSHARK_CATFISH_DEBT")) || Global_1357549.f_1672 == joaat("MONEY_LOANSHARK_LILLY_DEBT")) || Global_1357549.f_1672 == joaat("MONEY_LOANSHARK_HORSE_CHASE_DEBT"))
		{
			return true;
		}
	}
	if (__LIB_1__::func_25(Global_1347702[61 /*49*/].f_15, 1) || (__LIB_1__::func_44(Global_1347702[61 /*49*/].f_15) && __LIB_1__::func_533(16384)))
	{
		return true;
	}
	return false;
}

void func_144(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 = fParam1;
	iVar0 = __LIB_0__::func_398(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	iVar1 = BUILTIN::FLOOR(Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar0, 7, iVar1);
	iVar2 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar0, 7);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iVar2;
	PED::_0xA69899995997A63B(iVar0, iVar2);
	__LIB_1__::func_17(iVar2);
}

int func_145()
{
	int iVar0;
	if (__LIB_1__::func_44(Global_1347702[134 /*49*/].f_15))
	{
		iVar0 = __LIB_1__::func_976();
		if (STREAMING::_IS_IMAP_ACTIVE(-387018143))
		{
			STREAMING::_REMOVE_IMAP(-387018143);
		}
	}
	else
	{
		iVar0 = -387018143;
	}
	return iVar0;
}

int func_146()
{
	if (__LIB_0__::func_702(Global_1347702[134 /*49*/].f_15))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(126970802))
		{
			STREAMING::_REMOVE_IMAP(126970802);
		}
		return __LIB_1__::func_976();
	}
	return 126970802;
}

int func_147()
{
	if (__LIB_0__::func_702(Global_1835011[6 /*74*/].f_1) || __LIB_1__::func_44(Global_1835011[6 /*74*/].f_1))
	{
		return 1998041523;
	}
	else if (STREAMING::_IS_IMAP_ACTIVE(1998041523))
	{
		STREAMING::_REMOVE_IMAP(1998041523);
	}
	return __LIB_1__::func_976();
}

bool func_148()
{
	if ((SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[134 /*49*/].f_42, false) && !__LIB_1__::func_44(Global_1347702[134 /*49*/].f_15)) && !__LIB_0__::func_1(Global_1347702[134 /*49*/].f_13, 4))
	{
		return true;
	}
	if (__LIB_1__::func_44(Global_1347702[134 /*49*/].f_15))
	{
		return true;
	}
	return false;
}

bool func_149()
{
	int iVar0;
	if (__LIB_0__::func_317() == 6)
	{
		return false;
	}
	if (__LIB_1__::func_44(Global_1347702[68 /*49*/].f_15))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (Global_40.f_450[iVar0] == 68)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_150(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (Global_1946804.f_2535.f_1 <= 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = __LIB_0__::func_158(iVar0, 1);
		if (__LIB_0__::func_555(iVar2, 2))
		{
		}
		else if (Global_1946804.f_2535.f_3[iVar0] == 0)
		{
		}
		else
		{
			if (bParam0 && __LIB_5__::func_791(iVar0) == -1)
			{
				__LIB_1__::func_41(iVar0, 0);
				__LIB_0__::func_240(&(Global_1946804.f_2589.f_2[(Global_1946804.f_2589 - 1) /*2*/]), 2, 6);
			}
			__LIB_0__::func_556(iVar2, 2, 6);
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		return true;
	}
	return false;
}

bool func_151(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = __LIB_0__::func_158(iVar0, 1);
		if (!__LIB_0__::func_555(iVar2, 2))
		{
		}
		else if (Global_1946804.f_2535.f_3[iVar0] != 0)
		{
		}
		else
		{
			if (bParam0 && __LIB_5__::func_791(iVar0) == -1)
			{
				__LIB_1__::func_41(iVar0, 0);
				__LIB_0__::func_240(&(Global_1946804.f_2589.f_2[(Global_1946804.f_2589 - 1) /*2*/]), 2, 6);
			}
			__LIB_0__::func_550(iVar2, 3, 6);
			Global_1946804.f_2456[iVar0 /*2*/] = 0;
			Global_1946804.f_2456[iVar0 /*2*/].f_1 = 0;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 > 0;
}

bool func_152()
{
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	if (Global_1347477.f_200)
	{
		return false;
	}
	if (Global_1347477.f_195 == -15)
	{
		return true;
	}
	return __LIB_1__::func_426(Global_1347477.f_195, 0);
}

int func_153(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return 1;
	}
	if (!__LIB_0__::func_20(iParam0))
	{
		return 1;
	}
	if (__LIB_1__::func_902(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (Global_1897950.f_1 < iVar0 || Global_1897950.f_1 > iVar1)
		{
			Global_1897950.f_1 = iVar0;
		}
		while (true)
		{
			if (!__LIB_0__::func_117(Global_1897950.f_1, 16))
			{
				__LIB_1__::func_949(Global_1897950.f_1, 0);
			}
			Global_1897950.f_1++;
			iVar2++;
			if (Global_1897950.f_1 > iVar1)
			{
				Global_1897950.f_1 = -1;
				return 1;
			}
			if (iVar2 >= 20 && !bParam1)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_154()
{
	__LIB_1__::func_725();
	if (__LIB_0__::func_296(0, 0, 1) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CARAVAN_ABSENCE_SCENE")) > 0)
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		return 0;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 4;
	}
	return -1;
}

bool func_155(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if ((((iParam0 == __LIB_0__::func_398(0) || iParam0 == __LIB_0__::func_398(1)) || iParam0 == __LIB_0__::func_398(2)) || iParam0 == __LIB_0__::func_398(3)) || iParam0 == __LIB_0__::func_398(4))
	{
		return false;
	}
	if (__LIB_1__::func_194() < 1)
	{
		return false;
	}
	return true;
}

bool func_156()
{
	if (HUD::IS_HUD_HIDDEN())
	{
		return false;
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return false;
	}
	if (__LIB_0__::func_91())
	{
		return false;
	}
	if (__LIB_1__::func_198(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"), 1))
	{
		return false;
	}
	if (__LIB_1__::func_198(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), 1))
	{
		return false;
	}
	return true;
}

bool func_157(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return false;
	}
	if (__LIB_0__::func_296(0, 0, 1))
	{
		return false;
	}
	if (iParam0 == 7)
	{
		if (!__LIB_1__::func_185(60))
		{
			return false;
		}
	}
	return true;
}

void func_158(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;
	if (bParam0)
	{
		__LIB_0__::func_326(4096);
		if (bParam1 && VOLUME::_DOES_VOLUME_EXIST(iParam2))
		{
			iVar0 = 0;
			while (iVar0 < 27)
			{
				if (__LIB_0__::func_272(__LIB_0__::func_177(iVar0), 0))
				{
					if (!__LIB_0__::func_211(iVar0))
					{
						if (__LIB_0__::func_273(iVar0, 32768, 1))
						{
							PERSCHAR::_0x7B204F88F6C3D287(__LIB_1__::func_179(iVar0, 0));
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		__LIB_0__::func_698(4096);
	}
}

bool func_159(int iParam0)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return false;
	}
	if (!__LIB_1__::func_269(iParam0, 1, 0))
	{
		if (__LIB_1__::func_217(iParam0))
		{
			if (!__LIB_0__::func_273(iParam0, 512, 1) || !__LIB_0__::func_892(iParam0))
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_160(int iParam0)
{
	if (__LIB_4__::func_635(4096))
	{
		return false;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 6:
			return true;
		case 5:
			if (__LIB_1__::func_185(44))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_161()
{
	if (Global_1392235.f_4 == 1)
	{
		return true;
	}
	else if (__LIB_1__::func_44(Global_1835011[7 /*74*/].f_1))
	{
		return true;
	}
	else if (__LIB_1__::func_44(Global_1835011[69 /*74*/].f_1))
	{
		return true;
	}
	else if (__LIB_1__::func_44(Global_1835011[70 /*74*/].f_1))
	{
		return true;
	}
	else if (__LIB_1__::func_44(Global_1835011[71 /*74*/].f_1))
	{
		return true;
	}
	else if (__LIB_1__::func_44(Global_1835011[72 /*74*/].f_1))
	{
		return true;
	}
	else if (__LIB_1__::func_44(Global_1347702[32 /*49*/].f_15))
	{
		return true;
	}
	else if (__LIB_1__::func_44(Global_1347702[132 /*49*/].f_15))
	{
		return true;
	}
	return false;
}

bool func_162()
{
	return __LIB_1__::func_185(70);
}

void func_163(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	Global_1327590.f_19622[iParam0 /*14*/].f_9 = __LIB_0__::func_23();
	if (bParam1)
	{
		Global_1327590.f_19622[iParam0 /*14*/].f_10 = Global_1327590.f_19622[iParam0 /*14*/].f_11;
	}
	if (iParam2 > 0)
	{
		__LIB_1__::func_446(&(Global_1327590.f_19622[iParam0 /*14*/].f_9), 0, iParam2, 0, 0, 0, 0, 0);
	}
}

void func_164(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_271(iParam0)))
	{
		__LIB_0__::func_290(iParam0, 4, 1);
		__LIB_0__::func_290(iParam0, 17, 1);
		__LIB_0__::func_290(iParam0, 1, 1);
		__LIB_0__::func_290(iParam0, 2, 1);
		return;
	}
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	if (__LIB_5__::func_795(iParam0) && !bParam2)
	{
		return;
	}
	if (__LIB_0__::func_699(iParam0) && !bParam2)
	{
		return;
	}
	if (iParam0 == Global_1357549.f_1497 && !bParam2)
	{
		return;
	}
	if (((!bParam3 && ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_271(iParam0))) && __LIB_0__::func_210(iParam0) < 5000f) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	__LIB_0__::func_290(iParam0, 4, 1);
	__LIB_0__::func_290(iParam0, 17, 1);
	__LIB_0__::func_290(iParam0, 1, 1);
	__LIB_0__::func_290(iParam0, 2, 1);
	__LIB_0__::func_294(iParam0, __LIB_0__::func_271(iParam0));
	__LIB_1__::func_197(iParam0, 1, 1, 1, bParam4);
}

void func_165(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			if (__LIB_5__::func_219(58) || __LIB_1__::func_185(58))
			{
				AUDIO::_0x3743CE6948194349("AZ_camp_dark_mood_zone", 2358f, 1360f, 108f, 0f);
			}
			break;
	}
}

bool func_166(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	iVar0 = 1;
	if (!__LIB_1__::func_902(iParam0, &uVar2, &iVar3, 0, 1))
	{
		return true;
	}
	bVar4 = iParam0 == 22;
	iVar1 = uVar2;
	while (iVar1 <= iVar3)
	{
		if (!__LIB_0__::func_29(iVar1))
		{
		}
		else if (__LIB_0__::func_117(iVar1, 32) && iParam0 != 22)
		{
		}
		else
		{
			iVar5 = __LIB_1__::func_334(iVar1);
			if (!__LIB_0__::func_272(iVar5, 0))
			{
				__LIB_1__::func_940(iVar1, 0);
				PERSCHAR::_0x6759BEE6762E140B(__LIB_0__::func_120(iVar1));
				if (__LIB_2__::func_987(iVar1, 0, 0, 0, 0, 1))
				{
					return false;
				}
				iVar0 = 0;
			}
			else
			{
				if (bVar4 && __LIB_1__::func_356(iVar5))
				{
					if (!DECORATOR::DECOR_EXIST_ON(iVar5, "CaravanLivestock"))
					{
						DECORATOR::DECOR_SET_BOOL(iVar5, "CaravanLivestock", true);
					}
				}
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar5, joaat("REL_PLAYER_ALLY"));
				__LIB_0__::func_121(iVar1, 128);
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_167()
{
	int iVar0;
	iVar0 = __LIB_0__::func_317();
	if (iVar0 == 6 || iVar0 == 5)
	{
		return false;
	}
	if (iVar0 == 3 && !__LIB_1__::func_185(28))
	{
		return false;
	}
	if ((((__LIB_1__::func_198(joaat("CSTAG_PLAYER_DONATED_FOOD"), 0) || __LIB_1__::func_198(joaat("CSTAG_PLAYER_DONATED_MONEY"), 0)) || __LIB_1__::func_198(joaat("CSTAG_CAMP_FOOD_HIGH"), 0)) || __LIB_1__::func_198(joaat("CSTAG_CAMP_MONEY_HIGH"), 0)) || __LIB_1__::func_985())
	{
		return true;
	}
	return false;
}

void func_168(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	int iVar0;
	iVar0 = __LIB_4__::func_341(iParam1);
	if (iVar0 == -1)
	{
		__LIB_4__::func_344(iParam0, iParam1, fParam3);
		__LIB_5__::func_581(bParam2, fParam3);
		return;
	}
	if (iParam0 != Global_1934765.f_318[iVar0 /*3*/])
	{
		__LIB_4__::func_342(iVar0);
		__LIB_4__::func_344(iParam0, iParam1, fParam3);
		Global_1934765.f_338 = -1;
		__LIB_5__::func_581(bParam2, fParam3);
		return;
	}
}

void func_169(int iParam0)
{
	__LIB_1__::func_60(&(Global_1392915[iParam0 /*12*/]));
	__LIB_1__::func_310(&(Global_1392915.f_121[iParam0 /*20*/]));
}

bool func_170()
{
	if (__LIB_1__::func_198(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"), 1) || __LIB_1__::func_198(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), 1))
	{
		if ((PED::_IS_PED_USING_SCENARIO_HASH(__LIB_0__::func_271(0), joaat("PROP_HUMAN_SLEEP_BED_PILLOW_LEFT")) && TASK::IS_PED_ACTIVE_IN_SCENARIO(__LIB_0__::func_271(0), 1)) && __LIB_1__::func_205(__LIB_0__::func_271(0), Global_1357549.f_1663[0], 1, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	switch (__LIB_0__::func_317())
	{
		case 6:
			if (CLOCK::GET_CLOCK_HOURS() < 9)
			{
				return true;
			}
			if (CLOCK::GET_CLOCK_HOURS() == 9)
			{
				if (CLOCK::GET_CLOCK_MINUTES() < 30)
				{
					return true;
				}
			}
			if (CLOCK::GET_CLOCK_HOURS() >= 19)
			{
				if (CLOCK::GET_CLOCK_MINUTES() > 30)
				{
					return true;
				}
			}
			if (CLOCK::GET_CLOCK_HOURS() >= 20)
			{
				return true;
			}
			break;
		default:
			if (CLOCK::GET_CLOCK_HOURS() < 6)
			{
				return true;
			}
			break;
	}
	return false;
}

int func_171(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("COMP_DUTCH");
		case 1:
			return joaat("COMP_JOHN");
		case 2:
			return joaat("COMP_JAVIER");
		case 3:
			return joaat("COMP_BILL");
		case 4:
			return joaat("COMP_UNCLE");
		case 5:
			return joaat("COMP_HOSEA");
		case 6:
			return joaat("COMP_MICAH");
		case 7:
			return joaat("COMP_CHARLES");
		case 8:
			return joaat("COMP_SEAN");
		case 9:
			return joaat("COMP_LENNY");
		case 10:
			return joaat("COMP_KIERAN");
		case 23:
			return joaat("COMP_TRELAWNY");
		case 17:
			return joaat("COMP_PEARSON");
		case 18:
			return joaat("COMP_STRAUSS");
		case 13:
			return joaat("COMP_ABIGAIL");
		case 14:
			return joaat("COMP_JACK");
		case 16:
			return joaat("COMP_MOLLY_OSHEA");
		case 19:
			return joaat("COMP_SUSAN_GRIMSHAW");
		case 15:
			return joaat("COMP_MARY_BETH");
		case 20:
			return joaat("COMP_KAREN");
		case 22:
			return joaat("COMP_TILLY");
		case 11:
			return joaat("COMP_SADIE");
		case 24:
			return joaat("COMP_CLEET");
		case 25:
			return joaat("COMP_JOE");
		case 26:
			return joaat("COMP_EAGLE_FLIES");
		case 12:
			if ((__LIB_1__::func_25(Global_1835011[59 /*74*/].f_1, 1) || __LIB_1__::func_25(Global_1347702[1 /*49*/].f_15, 1)) || __LIB_1__::func_44(Global_1347702[1 /*49*/].f_15))
			{
				return joaat("COMP_RUFUS");
			}
			else if (__LIB_1__::func_198(joaat("CSTAG_FLOW_DOG_IN_CAMP_POST"), 1))
			{
				return joaat("COMP_CAIN");
			}
			return joaat("COMP_DOG");
		case 21:
			if (bParam1)
			{
				return joaat("COMP_SWANSON_S");
			}
			else
			{
				return joaat("COMP_SWANSON");
			}
			break;
	}
	return 0;
}

void func_172(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (!__LIB_0__::func_293(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = __LIB_0__::func_198(BUILTIN::CEIL(Global_40.f_11095[iParam0]));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, __LIB_3__::func_130(iParam0), iVar0);
	__LIB_4__::func_692(__LIB_0__::func_657(iParam0), (100f * (BUILTIN::TO_FLOAT(iVar0) / 100f)), 0);
	if (((fParam1 <= __LIB_3__::func_131(15) && iParam0 == 1) && PED::IS_PED_ON_FOOT(Global_35)) && !PED::IS_PED_SWIMMING(Global_35))
	{
		__LIB_1__::func_240(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		__LIB_1__::func_240(__LIB_3__::func_132(iParam0), 1);
	}
	sVar1 = __LIB_3__::func_133(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, sVar1, BUILTIN::TO_FLOAT(iVar0), -1);
	}
}

bool func_173(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 5:
		case 6:
		case 7:
			if (iParam1 == 1)
			{
				return true;
			}
			break;
		case 8:
			return __LIB_1__::func_185(73);
	}
	return false;
}

void func_174()
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
	if (!__LIB_0__::func_702(__LIB_3__::func_918(44)) && __LIB_0__::func_317() != 0)
	{
		__LIB_1__::func_240(533, 0);
	}
	Local_18.f_1862.f_4 = __LIB_0__::func_402(Local_18.f_1862.f_5);
	if (Local_18.f_1862.f_4 != -1)
	{
		__LIB_0__::func_782(Local_18.f_1862.f_4, 256);
	}
	Local_18.f_1862.f_1 = MISC::GET_GAME_TIMER();
	if (__LIB_0__::func_317() != 0)
	{
		Local_18.f_1862.f_1 += 1200;
	}
}

void func_175()
{
	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	TASK::CLEAR_PED_TASKS(Global_35, true, false);
	GRAPHICS::ANIMPOSTFX_PLAY("CamTransitionBlinkSlow");
	__LIB_1__::func_283(&(Local_18.f_1934.f_80), 1);
}

void func_176()
{
	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	if (Local_18.f_1934.f_79)
	{
		GRAPHICS::_0xA201A3D0AC087C37("CamTransitionBlinkSlow");
		Local_18.f_1934.f_79 = 0;
	}
	__LIB_1__::func_283(&(Local_18.f_1934.f_80), 1);
}

bool func_177(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_271(Global_1357549.f_1659[iParam0]);
	if (__LIB_0__::func_272(iVar0, 0) && __LIB_1__::func_307(Global_1357549.f_1659[iParam0], 1, 1))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Global_1357549.f_1663[iParam0]))
		{
			if (__LIB_1__::func_205(Global_35, Global_1357549.f_1663[iParam0], 1, 0) && __LIB_1__::func_205(iVar0, Global_1357549.f_1663[iParam0], 1, 0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_178(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char[] cVar6[8];
	float fVar7;
	char* sVar8;
	char* sVar9;
	char[] cVar10[8];
	if (!__LIB_2__::func_757())
	{
		return;
	}
	sVar1 = __LIB_5__::func_799(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!__LIB_0__::func_630(iParam4))
	{
		if (__LIB_0__::func_20(iParam0))
		{
			iParam4 = __LIB_1__::func_905(__LIB_1__::func_882(iParam0));
		}
		else
		{
			iParam4 = __LIB_1__::func_905(iParam1);
		}
	}
	if (__LIB_0__::func_630(iParam4))
	{
		iVar3 = __LIB_1__::func_931(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = __LIB_1__::func_907(__LIB_1__::func_906(iParam2));
	}
	else if ((__LIB_0__::func_622(iParam1, 2) || __LIB_1__::func_932(iParam4, 2)) && !Global_1894899.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			}
			else
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
			}
		}
		Global_1894899.f_9 = 1;
	}
	else if ((__LIB_0__::func_20(iParam0) && __LIB_0__::func_21(iParam0, 16777216)) && !Global_1894899.f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1894899.f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1894899.f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "REGION_BOUNTY", iVar3);
		Global_1894899.f_9 = 1;
	}
	else
	{
		iVar4 = __LIB_0__::func_41(__LIB_0__::func_23());
		iVar5 = __LIB_0__::func_42(__LIB_0__::func_23());
		if (iVar5 < 10)
		{
			StringConCat(&cVar6, "0", 8);
		}
		StringIntConCat(&cVar6, iVar5, 8);
		fVar7 = MISC::_GET_TEMPERATURE_AT_COORDS(Global_36);
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			sVar9 = "AM";
			if (iVar4 >= 12)
			{
				sVar9 = "PM";
				if (iVar4 > 12)
				{
					iVar4 = (iVar4 - 12);
				}
			}
			else if (iVar4 == 0)
			{
				iVar4 = 12;
			}
			sVar8 = "TIME_AND_TEMP_C";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = __LIB_1__::func_908(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(674, sVar8, iVar4, __LIB_1__::func_925(&cVar6, joaat("COLOR_PURE_WHITE")), sVar9, __LIB_1__::func_925(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = __LIB_1__::func_908(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(162, sVar8, iVar4, __LIB_1__::func_925(&cVar6, joaat("COLOR_PURE_WHITE")), __LIB_1__::func_925(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		Global_1894899.f_9 = 0;
	}
	Global_1934266.f_148 = __LIB_1__::func_909(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_179()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 26)
	{
		if (__LIB_0__::func_866(iVar0, 1))
		{
			__LIB_1__::func_640(iVar0);
		}
		iVar1 = __LIB_0__::func_271(iVar0);
		if (__LIB_0__::func_255(iVar1, 1))
		{
		}
		else
		{
			if (PED::GET_PED_CONFIG_FLAG(iVar1, 366, true))
			{
				PED::SET_PED_CONFIG_FLAG(iVar1, 366, false);
			}
			if (!__LIB_0__::func_273(iVar0, 4, 0))
			{
			}
			else if (__LIB_0__::func_273(iVar0, 16, 0))
			{
			}
			else
			{
				TASK::TASK_PERSISTENT_CHARACTER(iVar1);
			}
		}
		iVar0++;
	}
}

void func_180(int iParam0, bool bParam1)
{
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1395601.f_5[iParam0 /*28*/].f_23) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Global_1395601.f_5[iParam0 /*28*/].f_23, true, 0))
	{
		return;
	}
	if (__LIB_0__::func_296(242, 1, 1))
	{
		bParam1 = false;
	}
	switch (iParam0)
	{
		case 8:
			__LIB_5__::func_800(238680582, bParam1);
			break;
		case 9:
			__LIB_5__::func_800(1555588463, bParam1);
			__LIB_5__::func_800(1275780106, bParam1);
			__LIB_5__::func_800(-833560428, bParam1);
			__LIB_5__::func_800(-1601174253, bParam1);
			__LIB_5__::func_800(-1295111793, bParam1);
			break;
		case 11:
			__LIB_5__::func_800(-1482639045, bParam1);
			break;
		case 10:
			__LIB_5__::func_800(254520182, bParam1);
			break;
		case 12:
			__LIB_5__::func_800(1997650502, bParam1);
			break;
		case 13:
			__LIB_5__::func_800(1335986638, bParam1);
			break;
		case 14:
			__LIB_5__::func_800(joaat("DOOR_STR_WHORE_INT_2"), bParam1);
			break;
		case 16:
			__LIB_5__::func_800(-1335647241, bParam1);
			break;
		case 15:
			__LIB_5__::func_800(1731691513, !__LIB_1__::func_185(70));
			break;
	}
}

void func_181(int iParam0, bool bParam1, float fParam2)
{
	int iVar0;
	var uVar1;
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = __LIB_4__::func_341(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	__LIB_4__::func_342(iVar0);
	if (iVar0 == Global_1934765.f_338)
	{
		if (Global_1934765.f_337 == 0)
		{
			__LIB_4__::func_343();
		}
		else
		{
			__LIB_5__::func_581(bParam1, fParam2);
		}
	}
	else
	{
		uVar1 = Global_1934765.f_338;
		Global_1934765.f_338 = __LIB_5__::func_291();
	}
}

void func_182(var uParam0)
{
	__LIB_0__::func_37(&(uParam0->f_101));
	if (__LIB_1__::func_22(17))
	{
		__LIB_1__::func_774(17, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(__LIB_0__::func_271(17), false);
	}
}

bool func_183(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!__LIB_1__::func_466(iParam0, 0f, 0f, 0f, 0, iParam1, bParam4, 1, 1, iParam2, iParam3, 1))
	{
		return false;
	}
	return true;
}

void func_184()
{
	int iVar0;
	struct<2> Var1;
	struct<6> Var3;
	iVar0 = __LIB_0__::func_398(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383.f_393))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1900383.f_393))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1900383.f_393, false, true);
		}
		OBJECT::DELETE_OBJECT(&(Global_1900383.f_393));
	}
	Var1 = { __LIB_1__::func_622(0) };
	Var3 = { __LIB_2__::func_229() };
	__LIB_1__::func_163(iVar0, &Var1, &Var3, 0);
	PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(PLAYER::GET_PLAYER_INDEX(), iVar0);
	__LIB_0__::func_149(0);
	__LIB_0__::func_148(0);
}

int func_185(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Global_1898329)
	{
		if (!__LIB_0__::func_6(Global_1898330[iVar0]))
		{
		}
		else
		{
			switch (Global_1898346[iVar0 /*6*/].f_3)
			{
				case 1:
					iVar1 = Global_1898346[iVar0 /*6*/].f_4;
					if (BUILTIN::VDIST(__LIB_1__::func_469(iVar1), vParam0) < __LIB_0__::func_514(__LIB_0__::func_626(iVar1) == 0f, iParam3, __LIB_0__::func_626(iVar1)))
					{
						return 1;
					}
					break;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_186(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	struct<6> Var10;
	int iVar16;
	int iVar17;
	uParam1->f_10 = __LIB_0__::func_97(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*iParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*iParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (__LIB_0__::func_86(uParam1->f_6))
		{
		}
	}
	bVar0 = __LIB_0__::func_28();
	if (*uParam1)
	{
		if (bVar0 && !__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
		{
			if (__LIB_1__::func_105(5))
			{
				__LIB_1__::func_162(5);
				__LIB_1__::func_778(5);
				__LIB_0__::func_149(0);
				__LIB_0__::func_148(0);
			}
		}
	}
	if (__LIB_0__::func_979(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && __LIB_1__::func_25(Global_1835011[37 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[43 /*74*/].f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && __LIB_1__::func_25(Global_1835011[43 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[44 /*74*/].f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = __LIB_0__::func_398(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (__LIB_0__::func_797(iVar1))
	{
		bVar3 = true;
		if (__LIB_1__::func_52(iVar1))
		{
			bVar4 = true;
		}
		if (__LIB_1__::func_53(iVar1))
		{
			bVar5 = true;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !uParam1->f_5)
			{
				__LIB_1__::func_54(uParam1->f_10);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!__LIB_1__::func_105(0) && __LIB_1__::func_105(1))
			{
				__LIB_1__::func_779(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (__LIB_0__::func_988())
			{
				__LIB_0__::func_989();
			}
			__LIB_0__::func_149(0);
			__LIB_0__::func_148(0);
			__LIB_0__::func_150(uParam1->f_6);
		}
	}
	if (!__LIB_0__::func_797(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((__LIB_0__::func_821(uParam1->f_10) == 0 || __LIB_0__::func_809(uParam1->f_10) == 0) || __LIB_0__::func_815(uParam1->f_10) == 0)
			{
				__LIB_2__::func_308(uParam1->f_10);
			}
			__LIB_1__::func_106(uParam1->f_10);
			__LIB_0__::func_822(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = __LIB_0__::func_398(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (__LIB_0__::func_797(iVar1))
	{
		bVar3 = true;
		if (__LIB_1__::func_52(iVar1))
		{
			bVar4 = true;
		}
		if (__LIB_1__::func_53(iVar1))
		{
			bVar5 = true;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (ENTITY::_IS_ENTITY_FROZEN(iVar2))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			}
			if (!__LIB_0__::func_86(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::_0x9587913B9E772D29(iVar2, 0);
			}
		}
	}
	if (__LIB_1__::func_107(uParam1->f_10))
	{
		*iParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!PED::_0xA0BC8FAED8CFEB3C(iVar2))
			{
				*iParam0 = 0;
				return 0;
			}
			iVar6 = PLAYER::PLAYER_ID();
			iVar7 = PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(iVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (iVar7 != iVar2)
				{
					PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, 0);
				}
			}
			Var8 = { __LIB_1__::func_622(uParam1->f_10) };
			Var10 = { __LIB_2__::func_229() };
			__LIB_1__::func_163(iVar2, &Var8, &Var10, 0);
			PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!__LIB_0__::func_823(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		__LIB_0__::func_824(uParam1->f_10);
		if (uParam1->f_2 && !__LIB_0__::func_86(uParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			PHYSICS::_0x0348469DAA17576C(iVar2);
			ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
			ENTITY::_0x9587913B9E772D29(iVar2, 0);
		}
		*iParam0 = 2;
		return iVar2;
	}
	__LIB_1__::func_108(uParam1->f_10);
	if (__LIB_0__::func_823(uParam1->f_10))
	{
		iVar16 = __LIB_0__::func_825(uParam1->f_10);
		iVar17 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (iVar16 != iVar17)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	*iParam0 = 2;
	return iVar2;
}

void func_187(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		__LIB_5__::func_600(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		__LIB_5__::func_600(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		__LIB_5__::func_600(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		__LIB_5__::func_600(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		__LIB_5__::func_600(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		__LIB_5__::func_600(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		__LIB_5__::func_600(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		__LIB_5__::func_600(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		__LIB_5__::func_600(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		__LIB_5__::func_600(-1, iParam0);
	}
}

Vector3 func_188(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1356.339f, 2443.121f, 308.1876f;
		case 1:
			return -125.85f, -39.9599f, 96.0908f;
		case 2:
			return 654.1f, -1245.5f, 43.5f;
		case 3:
			return 1905.086f, -1861.727f, 46.3492f;
		case 5:
			return 2222.172f, -772.852f, 42.662f;
		case 6:
			return 2342.779f, 1359.049f, 106.3936f;
		case 4:
			return 1422.625f, -7332.473f, 80.5977f;
		case 7:
			return -2592.702f, 453.0722f, 146.4588f;
		case 8:
			return -1639.306f, -1361.465f, 83.3963f;
	}
	return 0f, 0f, 0f;
}

void func_189(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	*uParam0 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_1 = PERSCHAR::_0x112DDF56300BC6E5(*uParam0);
	if (!PERSCHAR::_0x800DF3FC913355F3(uParam0->f_1))
	{
		uParam0->f_1 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(*uParam0);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		PERSCHAR::_0x187D65F3AEC5D679(*uParam0, sParam3);
	}
}

void func_190()
{
	if (!__LIB_5__::func_855(8))
	{
		__LIB_0__::func_395(1);
		__LIB_5__::func_873(8);
	}
}

int func_191()
{
	var uVar0;
	MISC::_COPY_MEMORY(&(Local_18.f_1934.f_67), &uVar0, 12);
	switch (__LIB_0__::func_317())
	{
		case 0:
			Local_18.f_1934.f_67 = { -1356.409f, 2433.987f, 307.1412f };
			Local_18.f_1934.f_67.f_3 = 315.3194f;
			Local_18.f_1934.f_67.f_4 = -92.6032f;
			Local_18.f_1934.f_67.f_5 = 0f;
			Local_18.f_1934.f_67.f_6 = { -1355.259f, 2428.821f, 306.6295f };
			Local_18.f_1934.f_67.f_9 = 137.8667f;
			Local_18.f_1934.f_67.f_10 = 27.6689f;
			Local_18.f_1934.f_67.f_11 = -32.8653f;
			return 1;
		case 1:
			Local_18.f_1934.f_67 = { -92.0169f, -46.8868f, 94.6083f };
			Local_18.f_1934.f_67.f_3 = 290.5712f;
			Local_18.f_1934.f_67.f_4 = -163.5061f;
			Local_18.f_1934.f_67.f_5 = -12.8288f;
			Local_18.f_1934.f_67.f_6 = { -127.8335f, -41.6741f, 94.4926f };
			Local_18.f_1934.f_67.f_9 = 343.9563f;
			Local_18.f_1934.f_67.f_10 = -5.4978f;
			Local_18.f_1934.f_67.f_11 = -9.5034f;
			return 1;
		case 2:
			Local_18.f_1934.f_67 = { 656.9079f, -1217.916f, 45.5739f };
			Local_18.f_1934.f_67.f_3 = 118.549f;
			Local_18.f_1934.f_67.f_4 = 108.4593f;
			Local_18.f_1934.f_67.f_5 = -3.7555f;
			Local_18.f_1934.f_67.f_6 = { 652.0198f, -1241.254f, 42.7896f };
			Local_18.f_1934.f_67.f_9 = 226.1829f;
			Local_18.f_1934.f_67.f_10 = -1.8674f;
			Local_18.f_1934.f_67.f_11 = -5.8606f;
			return 1;
		case 3:
			Local_18.f_1934.f_67 = { 1876.795f, -1819.649f, 41.3889f };
			Local_18.f_1934.f_67.f_3 = 146.2366f;
			Local_18.f_1934.f_67.f_4 = 29.2738f;
			Local_18.f_1934.f_67.f_5 = 0f;
			Local_18.f_1934.f_67.f_6 = { 1891.238f, -1852.065f, 41.5036f };
			Local_18.f_1934.f_67.f_9 = 235.0809f;
			Local_18.f_1934.f_67.f_10 = -4.8707f;
			Local_18.f_1934.f_67.f_11 = -31.7036f;
			return 1;
		case 4:
			Local_18.f_1934.f_67 = { 1430.64f, -7326.889f, 80.462f };
			Local_18.f_1934.f_67.f_3 = 39.9393f;
			Local_18.f_1934.f_67.f_4 = 33.7948f;
			Local_18.f_1934.f_67.f_5 = -2.9747f;
			Local_18.f_1934.f_67.f_6 = { 1425.97f, -7322.658f, 80.4454f };
			Local_18.f_1934.f_67.f_9 = 280.6111f;
			Local_18.f_1934.f_67.f_10 = -2.9136f;
			Local_18.f_1934.f_67.f_11 = -3.5024f;
			return 1;
		case 5:
			Local_18.f_1934.f_67 = { 2247.849f, -763.8032f, 41.9284f };
			Local_18.f_1934.f_67.f_3 = 52.0321f;
			Local_18.f_1934.f_67.f_4 = 48.5302f;
			Local_18.f_1934.f_67.f_5 = 2.8185f;
			Local_18.f_1934.f_67.f_6 = { 2238.481f, -776.7674f, 42.7447f };
			Local_18.f_1934.f_67.f_9 = 267.1989f;
			Local_18.f_1934.f_67.f_10 = -0.4043f;
			Local_18.f_1934.f_67.f_11 = -4.3617f;
			return 1;
		case 6:
			Local_18.f_1934.f_67 = { 2339.874f, 1371.26f, 105.2484f };
			Local_18.f_1934.f_67.f_3 = 221.9975f;
			Local_18.f_1934.f_67.f_4 = 16.3205f;
			Local_18.f_1934.f_67.f_5 = 2.6571f;
			Local_18.f_1934.f_67.f_6 = { 2338.244f, 1360.923f, 105.3035f };
			Local_18.f_1934.f_67.f_9 = 243.8945f;
			Local_18.f_1934.f_67.f_10 = 15.1624f;
			Local_18.f_1934.f_67.f_11 = -6.8075f;
			return 1;
		case 7:
			Local_18.f_1934.f_67 = { -2594.485f, 474.4041f, 144.9143f };
			Local_18.f_1934.f_67.f_3 = 93.6876f;
			Local_18.f_1934.f_67.f_4 = 20.3982f;
			Local_18.f_1934.f_67.f_5 = 0f;
			Local_18.f_1934.f_67.f_6 = { -2590.465f, 463.0091f, 145.2393f };
			Local_18.f_1934.f_67.f_9 = 168.0908f;
			Local_18.f_1934.f_67.f_10 = 1.7979f;
			Local_18.f_1934.f_67.f_11 = -5.3603f;
			return 1;
		case 8:
			Local_18.f_1934.f_67 = { -1610.253f, -1357.077f, 81.7792f };
			Local_18.f_1934.f_67.f_3 = 17.8936f;
			Local_18.f_1934.f_67.f_4 = 63.7332f;
			Local_18.f_1934.f_67.f_5 = -6.9619f;
			Local_18.f_1934.f_67.f_6 = { -1642.565f, -1356.53f, 82.9641f };
			Local_18.f_1934.f_67.f_9 = 200.1213f;
			Local_18.f_1934.f_67.f_10 = 77.8545f;
			Local_18.f_1934.f_67.f_11 = 10.0593f;
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_192()
{
	return __LIB_5__::func_862(10, 0) >= 4;
}

int func_193(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (__LIB_5__::func_862(4, 0) - 1);
		case 1:
			return (__LIB_5__::func_862(3, 0) - 1);
		case 2:
			return (__LIB_5__::func_862(5, 0) - 1);
		case 3:
			return (__LIB_5__::func_862(10, 0) - 1);
		default:
			break;
	}
	return 0;
}

void func_194(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((*uParam0)[iVar0 /*8*/] != 0 && ENTITY::_0x1FF441D7954F8709((*uParam0)[iVar0 /*8*/]))
		{
			ENTITY::_0xD2B9C78537ED5759((*uParam0)[iVar0 /*8*/]);
		}
		iVar0++;
	}
}

bool func_195()
{
	if (__LIB_0__::func_317() == 2 || __LIB_0__::func_317() == 3)
	{
		if (__LIB_5__::func_862(13, 0) > 1)
		{
			STREAMING::REQUEST_MODEL(joaat("PIROGUE"), false);
			if (STREAMING::HAS_MODEL_LOADED(joaat("PIROGUE")))
			{
				return true;
			}
			return false;
		}
	}
	return true;
}

int func_196(int iParam0)
{
	int iVar0;
	iVar0 = 1;
	if (iParam0 == 16)
	{
		iVar0 = Global_40.f_4283.f_312;
	}
	else
	{
		iVar0 = __LIB_5__::func_862(iParam0, 0);
	}
	return iVar0;
}

Vector3 func_197(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -137.545f, -19.582f, 95.088f;
		case 2:
			return 679.883f, -1255.265f, 43.027f;
		case 3:
			return 1879.71f, -1862.96f, 41.81f;
		case 6:
			return 2370.86f, 1350.64f, 105.36f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_198(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -133.95f, -18.69f, 95.13f;
		case 2:
			return 672.765f, -1259.633f, 42.989f;
		case 3:
			return 1877.16f, -1869.53f, 41.81f;
		case 6:
			return 2379.08f, 1348.86f, 105.29f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_199(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -133.243f, -18.4795f, 95.2772f;
		case 2:
			return 672.3809f, -1260.012f, 43.252f;
		case 3:
			return 1877.107f, -1869.955f, 42.0489f;
		case 6:
			return 2379.597f, 1348.682f, 105.38f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_200(int iParam0, int iParam1)
{
	Global_1905944.f_22[iParam0 /*9*/].f_2 = (Global_1905944.f_22[iParam0 /*9*/].f_2 || iParam1);
}

bool func_201()
{
	if (STREAMING::_IS_IMAP_ACTIVE(1157066259))
	{
		if (TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-561898433))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-561898433, false);
		}
		return true;
	}
	else if (TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-561898433) == 0)
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-561898433, true);
	}
	if (STREAMING::_IS_IMAP_ACTIVE(1070723367) || STREAMING::_IS_IMAP_ACTIVE(44502487))
	{
		return true;
	}
	return false;
}

bool func_202(var uParam0, var uParam1, var uParam2)
{
	switch (__LIB_0__::func_317())
	{
		case 1:
			*uParam0 = { -131.492f, -31.606f, 94.33f };
			*uParam1 = { 0f, 0f, -4.423f };
			*uParam2 = { 5.85f, 5.99f, 6.343f };
			return true;
		case 2:
			*uParam0 = { 653.8757f, -1253.203f, 43.1254f };
			*uParam1 = { 1.355f, 0f, 124.7791f };
			*uParam2 = { 5.85f, 5.59f, 6.343f };
			return true;
		case 6:
			*uParam0 = { 2359.789f, 1376.458f, 106.883f };
			*uParam1 = { 0f, 0f, -26.9f };
			*uParam2 = { 5.85f, 5.59f, 9.343f };
			return true;
	}
	return false;
}

bool func_203()
{
	if ((STREAMING::_IS_IMAP_ACTIVE(1261237250) || STREAMING::_IS_IMAP_ACTIVE(1102643191)) || STREAMING::_IS_IMAP_ACTIVE(1475953931))
	{
		return true;
	}
	return false;
}

bool func_204(var uParam0, var uParam1, var uParam2)
{
	switch (__LIB_0__::func_317())
	{
		case 1:
			*uParam0 = { -133.3219f, -31.5484f, 94.33f };
			*uParam1 = { 0f, 0f, -4.423f };
			*uParam2 = { 0.75f, 5.9f, 6.343f };
			return true;
		case 2:
			*uParam0 = { 652.0854f, -1254.513f, 43.1254f };
			*uParam1 = { 1.355f, 0f, 124.7791f };
			*uParam2 = { 5.85f, 0.75f, 6.343f };
			return true;
		case 6:
			*uParam0 = { 2360.844f, 1378.205f, 106.883f };
			*uParam1 = { 0f, 0f, -26.9f };
			*uParam2 = { 5.85f, 0.75f, 9.343f };
			return true;
	}
	return false;
}

bool func_205(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PERSCHAR_CAMP_CHICKEN_2"):
		case joaat("PERSCHAR_CAMP_CHICKEN_5"):
		case joaat("PERSCHAR_CAMP_CHICKEN_4"):
		case joaat("PERSCHAR_CAMP_ROOSTER"):
		case joaat("PERSCHAR_CAMP_CHICKEN_1"):
		case joaat("PERSCHAR_CAMP_CHICKEN_3"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_206(int iParam0)
{
	return Global_1327590.f_10 == iParam0;
}

void func_207(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MAP::DOES_BLIP_EXIST((uParam0[iVar0 /*8*/])->f_4))
		{
			MAP::REMOVE_BLIP(&((uParam0[iVar0 /*8*/])->f_4));
		}
		iVar0++;
	}
}

void func_208(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((((uParam0[iVar0 /*8*/])->f_2 == 5 || (uParam0[iVar0 /*8*/])->f_2 == -2) || (uParam0[iVar0 /*8*/])->f_2 == 0) || (uParam0[iVar0 /*8*/])->f_2 == 6)
		{
		}
		else
		{
			(uParam0[iVar0 /*8*/])->f_2 = -1;
			if (MAP::DOES_BLIP_EXIST((uParam0[iVar0 /*8*/])->f_4))
			{
				MAP::REMOVE_BLIP(&((uParam0[iVar0 /*8*/])->f_4));
			}
		}
		iVar0++;
	}
}

bool func_209(var uParam0)
{
	if (uParam0->f_1582.f_2 == 4 || uParam0->f_1582.f_2 == 3)
	{
		return true;
	}
	if (uParam0->f_1590.f_2 == 0)
	{
		return true;
	}
	return false;
}

Vector3 func_210()
{
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_36603, -0.066579f, -2.72744f, -0.856272f);
}

Vector3 func_211(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -0.414f, -0.954f, 0.18f;
		case 1:
			return 0.315f, -0.901f, 0.18f;
		case 2:
			return 0.366f, -1.436f, 0.18f;
		case 3:
			return -0.413f, -1.595f, 0.18f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_212(var uParam0)
{
	if (!STREAMING::HAS_MODEL_LOADED(joaat("SCRIPTEDBALL")))
	{
		return false;
	}
	if (!AUDIO::_0xD9130842D7226045("Chore_Water_Pump_Sounds", 0))
	{
		return false;
	}
	else if (!AUDIO::_0x4AD019591E94C064("Pour_Water_Onto_Water", Global_35, "Chore_Water_Pump_Sounds", -2))
	{
		return false;
	}
	if (GRAPHICS::_0xBF2DD155B2ADCD0A("CamTransition01"))
	{
		return false;
	}
	return true;
}

void func_213(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_1905944[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_1905944[iVar1] = uVar3;
}

void func_214(int* iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { ENTITY::GET_ENTITY_ROTATION(iParam0->f_866, 2) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_866, true, false) };
	if (__LIB_5__::func_826() > 1000)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_11) == 0)
		{
			iParam0->f_11 = OBJECT::CREATE_OBJECT(joaat("P_MONEYSTACK01X"), vVar3.x, vVar3.y, (vVar3.z + 0.03f), true, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iParam0->f_11, vVar0.x, vVar0.y, (vVar0.z + 100f), 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_11, true);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_11))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_11));
	}
	if (__LIB_5__::func_826() > 10000)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_12) == 0)
		{
			iParam0->f_12 = OBJECT::CREATE_OBJECT(joaat("P_MONEYSTACK01X"), vVar3.x, vVar3.y, (vVar3.z + 0.06f), true, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iParam0->f_12, vVar0.x, vVar0.y, (vVar0.z + 90f), 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_12, true);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_12))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_12));
	}
}

void func_215()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_1327590.f_19547)
	{
		if (Global_1327590.f_19547[iVar0 /*5*/] != -1)
		{
			__LIB_5__::func_897(iVar0);
		}
		iVar0++;
	}
}

void func_216(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		VOLUME::_DELETE_VOLUME(*uParam0);
	}
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_1))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_1, false);
	}
}

bool func_217(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_253)
	{
		if (MISC::IS_BIT_SET(*uParam1, iVar0))
		{
		}
		else if (MISC::IS_BIT_SET(uParam0->f_255, iVar0))
		{
		}
		else if (uParam0->f_9[iVar0 /*9*/].f_8 != 0)
		{
			if (!__LIB_5__::func_903(uParam0->f_9[iVar0 /*9*/].f_8))
			{
			}
			else if (uParam0->f_9[iVar0 /*9*/].f_1 == 0)
			{
			}
			else if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_9[iVar0 /*9*/].f_1))
			{
				return false;
			}
			iVar0++;
			return true;
		}
	}
}

bool func_218(int iParam0)
{
	vector3 vVar0;
	vVar0 = { __LIB_5__::func_906(iParam0) };
	if (__LIB_0__::func_86(vVar0))
	{
		return false;
	}
	return true;
}

struct<8> func_219(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	Var0.f_5 = 2;
	switch (iParam0)
	{
		case 0:
			Var0 = joaat("WORLD_PLAYER_CHORES_BALE_PICKUP_1");
			break;
		case 4:
			Var0 = joaat("WORLD_PLAYER_CHORES_SACK_PICKUP_1");
			break;
		case 2:
		case 3:
			Var0 = joaat("WORLD_PLAYER_CHORES_BUCKET_POUR_LOW");
			break;
		case 10:
			Var0 = joaat("WORLD_PLAYER_CHORES_BUCKET_POUR_HIGH");
			break;
		case 6:
			Var0 = joaat("WORLD_PLAYER_CHORES_PICKUP_CHICKEN_EGGS_CRATE");
			break;
		case 5:
			Var0 = joaat("WORLD_PLAYER_CHORES_MILK_JUG_PICKUP_1");
			break;
		case 7:
			Var0 = joaat("PROP_HUMAN_WOOD_CHOP_AND_SHARPEN_AXE");
			break;
		case 1:
			if (__LIB_0__::func_317() == 1)
			{
				Var0 = joaat("WORLD_PLAYER_CHORES_BUCKET_PICKUP_FULL");
			}
			else
			{
				Var0 = joaat("WORLD_PLAYER_CHORES_BUCKET_PICKUP_EMPTY");
			}
			break;
		case 9:
			Var0 = joaat("WORLD_PLAYER_CHORES_PUMP_WATER");
			break;
		case 8:
			Var0 = joaat("WORLD_PLAYER_CHORES_FEED_CHICKENS");
			break;
		case 14:
			Var0 = joaat("WORLD_PLAYER_CHORES_FEEDBAG_PICKUP");
			break;
	}
	Var0.f_2 = -1;
	Var0.f_1 = iParam0;
	Var0.f_5[0] = iParam1;
	Var0.f_5[1] = iParam2;
	return Var0;
}

bool func_220(int iParam0)
{
	return (Global_1935630 && (-1 - iParam0) & 40959) != 0;
}

void func_221(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 0:
			*uParam0 = joaat("WORLD_PLAYER_CHORES_BALE_PICKUP_1");
			break;
		case 4:
			*uParam0 = joaat("WORLD_PLAYER_CHORES_SACK_PICKUP_1");
			break;
		case 2:
		case 3:
			*uParam0 = joaat("WORLD_PLAYER_CHORES_BUCKET_POUR_LOW");
			break;
		case 10:
			*uParam0 = joaat("WORLD_PLAYER_CHORES_BUCKET_POUR_HIGH");
			break;
		case 6:
			*uParam0 = joaat("WORLD_PLAYER_CHORES_PICKUP_CHICKEN_EGGS_CRATE");
			break;
		case 5:
			*uParam0 = joaat("WORLD_PLAYER_CHORES_MILK_JUG_PICKUP_1");
			break;
		case 7:
			*uParam0 = joaat("PROP_HUMAN_WOOD_CHOP_AND_SHARPEN_AXE");
			break;
		case 1:
			if (__LIB_0__::func_317() == 1)
			{
				*uParam0 = joaat("WORLD_PLAYER_CHORES_BUCKET_PICKUP_FULL");
			}
			else
			{
				*uParam0 = joaat("WORLD_PLAYER_CHORES_BUCKET_PICKUP_EMPTY");
			}
			break;
		case 9:
			*uParam0 = joaat("WORLD_PLAYER_CHORES_PUMP_WATER");
			break;
		case 8:
			*uParam0 = joaat("WORLD_PLAYER_CHORES_FEED_CHICKENS");
			break;
		case 14:
			*uParam0 = joaat("WORLD_PLAYER_CHORES_FEEDBAG_PICKUP");
			break;
	}
	uParam0->f_2 = -3;
	uParam0->f_3 = 0;
	if (MAP::DOES_BLIP_EXIST(uParam0->f_4))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_4));
	}
}

bool func_222(var uParam0, int iParam1)
{
	if (uParam0->f_2 > 0 && !__LIB_0__::func_27(uParam0->f_3, iParam1))
	{
		return true;
	}
	if (!__LIB_0__::func_27(uParam0->f_3, iParam1))
	{
	}
	return false;
}

int func_223(var uParam0)
{
	if (__LIB_0__::func_317() == 8)
	{
		return 1560611276;
	}
	return -674883803;
}

int func_224(int iParam0)
{
	if (__LIB_0__::func_317() == 8)
	{
		switch (iParam0)
		{
			case 3:
			case 4:
			case 5:
			case 6:
			case 8:
			case 9:
			case 14:
				return joaat("BLIP_AMBIENT_CHORE");
			default:
				break;
		}
	}
	return joaat("BLIP_AMBIENT_CHORE");
}

float func_225(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 7:
			return 0.5f;
		case 10:
			return 0.05f;
		default:
			break;
	}
	return 0.05f;
}

bool func_226(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 1:
		case 9:
		case 14:
			return true;
		default:
			break;
	}
	return false;
}

float func_227(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 7:
			return 0.75f;
		case 9:
			return 0.25f;
		case 8:
			return 0.05f;
		case 14:
			return 0.45f;
		default:
			break;
	}
	return 0.05f;
}

bool func_228(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 2:
		case 3:
		case 8:
		case 10:
			return false;
		default:
			break;
	}
	return true;
}

void func_229(var uParam0, var uParam1)
{
	if (TASK::_0x0C3CB2E600C8977D(Global_35, 1))
	{
		uParam0->f_1582.f_2 = 4;
		uParam0->f_1581 = 8;
	}
}

void func_230(var uParam0, var uParam1)
{
	if (TASK::_0x0C3CB2E600C8977D(Global_35, 1))
	{
		uParam0->f_1582.f_2 = 5;
		uParam0->f_1581 = 8;
	}
}

bool func_231(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 0:
		case 4:
		case 6:
			return true;
		default:
			break;
	}
	return false;
}

int func_232(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 0:
			return joaat("WORLD_PLAYER_CHORES_BALE_PUT_DOWN_1");
		case 4:
			return joaat("WORLD_PLAYER_CHORES_SACK_PUT_DOWN_1");
		case 2:
		case 3:
		case 10:
			return joaat("WORLD_PLAYER_CHORES_BUCKET_PUT_DOWN_FULL");
		case 6:
			return joaat("WORLD_PLAYER_CHORES_PUTDOWN_CHICKEN_EGGS_CRATE");
		case 5:
			return joaat("WORLD_PLAYER_CHORES_MILK_JUG_PUT_DOWN_1");
		case 1:
		case 9:
			return joaat("WORLD_PLAYER_CHORES_BUCKET_PUT_DOWN_FULL");
		case 8:
			return joaat("WORLD_PLAYER_CHORES_FEED_CHICKENS");
		case 14:
			return joaat("WORLD_PLAYER_CHORES_FEEDBAG_PUTDOWN");
		default:
			break;
	}
	return 0;
}

int func_233(float fParam0)
{
	return BUILTIN::FLOOR((fParam0 / 0.25f));
}

Vector3 func_234()
{
	switch (__LIB_0__::func_317())
	{
		case 2:
			return 681.63f, -1252.7f, 43.02f;
		case 3:
			return 1881.47f, -1859.8f, 41.81f;
		case 1:
			return -139.89f, -17.71f, 95.09f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_235()
{
	switch (__LIB_0__::func_317())
	{
		case 2:
			return 71.322f;
		case 3:
			return 96.059f;
		case 1:
			return 142.428f;
		default:
			break;
	}
	return 0f;
}

void func_236(int iParam0, float fParam1, float fParam2, float fParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		OBJECT::_0xF49574E2332A8F06(iParam0, fParam1);
		OBJECT::_SET_OBJECT_BURN_INTENSITY(iParam0, fParam2);
		OBJECT::_0xCBFBD38F2E0A263B(iParam0, fParam3);
	}
}

char* func_237(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_PEARSON_FOOD";
		case 1:
			return "pl_STRAUSS";
		case 2:
			return "pl_ARTHUR_AMMO";
		case 3:
			switch (__LIB_5__::func_862(10, 0))
			{
				case 2:
					return "pl_DUTCH_TENT";
				case 3:
					return "pl_ARTHUR_FT";
				case 4:
					return "pl_MISC_TENTS";
				default:
					break;
			}
			break;
		case 4:
			return "pl_BOAT";
		case 5:
			return "pl_CHICKEN_COOP";
		case 6:
			return "pl_PEARSON_TOOLS";
		case 7:
			return "pl_HITCHING_POST";
	}
	return "";
}

void func_238(bool bParam0)
{
	int iVar0;
	int iVar1[4];
	int iVar6;
	int iVar7;
	iVar0 = (__LIB_5__::func_862(3, 0) - 1);
	iVar1[0] = -916538063;
	iVar1[1] = -916538063;
	iVar1[2] = 110400393;
	iVar1[3] = 110400393;
	iVar6 = iVar1[iVar0];
	if (bParam0)
	{
		if (STREAMING::_IS_IMAP_ACTIVE(iVar6) == 0)
		{
			STREAMING::_REQUEST_IMAP(iVar6);
		}
		iVar7 = 0;
		while (iVar7 < 4)
		{
			if (STREAMING::_IS_IMAP_ACTIVE(iVar1[iVar7]))
			{
				if (iVar1[iVar7] != iVar6)
				{
					STREAMING::_REMOVE_IMAP(iVar1[iVar7]);
				}
			}
			iVar7++;
		}
	}
	else
	{
		iVar7 = 0;
		while (iVar7 < 4)
		{
			if (STREAMING::_IS_IMAP_ACTIVE(iVar1[iVar7]))
			{
				STREAMING::_REMOVE_IMAP(iVar1[iVar7]);
			}
			iVar7++;
		}
	}
}

Vector3 func_239(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 0:
			switch (uParam0->f_5[0])
			{
				case 0:
					return -109.76f, -35.51f, 94.73f;
				case 1:
					return -108.44f, -35.57f, 94.79f;
				default:
					break;
			}
			break;
		case 10:
			switch (uParam0->f_5[0])
			{
				case 0:
					return -139.6f, -17.75f, 95.09f;
				case 1:
					return -142.41f, -15.92f, 95.09f;
				case 2:
					return -141.64f, -15.97f, 95.09f;
				default:
					break;
			}
			break;
		case 4:
			switch (uParam0->f_5[0])
			{
				case 0:
					return -107.62f, -34.93f, 94.97f;
				case 1:
					return -106.74f, -35.41f, 94.97f;
				default:
					break;
			}
			break;
		case 1:
			switch (uParam0->f_5[0])
			{
				case 0:
					return -106.51f, -38.71f, 94.88f;
				default:
					break;
			}
			break;
		case 7:
			switch (uParam0->f_5[0])
			{
				case 0:
					return -150.02f, -30.87f, 94.83f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_240(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 0:
			switch (uParam0->f_5[0])
			{
				case 0:
					return 1879.567f, -1886.123f, 41.58812f;
				case 1:
					return 1878.288f, -1885.277f, 41.66319f;
				default:
					break;
			}
			break;
		case 10:
			switch (uParam0->f_5[0])
			{
				case 0:
					return 1882.005f, -1858.675f, 41.8089f;
				case 1:
					return 1882.48f, -1857.71f, 41.81f;
				case 2:
					return 1881.248f, -1860.608f, 41.80964f;
				default:
					break;
			}
			break;
		case 4:
			switch (uParam0->f_5[0])
			{
				case 0:
					return 1845.34f, -1832.412f, 42.98955f;
				case 1:
					return 1845.376f, -1831.756f, 43.03001f;
				default:
					break;
			}
			break;
		case 1:
			switch (uParam0->f_5[0])
			{
				case 0:
					return 1877.948f, -1858.837f, 41.80896f;
				default:
					break;
			}
			break;
		case 7:
			switch (uParam0->f_5[0])
			{
				case 0:
					return 1871.9f, -1888.35f, 41.68f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_241(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 7:
			switch (uParam0->f_5[0])
			{
				case 0:
					return 2349.12f, 1353.44f, 104.82f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_242(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 0:
			switch (uParam0->f_5[0])
			{
				case 0:
					return 663.8027f, -1258.995f, 42.79f;
				case 1:
					return 664.1801f, -1257.64f, 42.79277f;
				default:
					break;
			}
			break;
		case 10:
			switch (uParam0->f_5[0])
			{
				case 0:
					return 681.6353f, -1253.254f, 43.01525f;
				default:
					break;
			}
			break;
		case 4:
			switch (uParam0->f_5[0])
			{
				case 0:
					return 680.56f, -1268.37f, 42.98f;
				case 1:
					return 680.24f, -1268.22f, 42.98f;
				default:
					break;
			}
			break;
		case 1:
			switch (uParam0->f_5[0])
			{
				case 0:
					return 678.2181f, -1251.228f, 43.0152f;
				default:
					break;
			}
			break;
		case 7:
			switch (uParam0->f_5[0])
			{
				case 0:
					return 667.0524f, -1274.733f, 43.10425f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_243(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 4:
			return 8;
		case 5:
			return 16;
		case 6:
			return 32;
		case 7:
			return 64;
		case 8:
			return 128;
		case 9:
			return 256;
		case 3:
			return 512;
		case 10:
			return 1024;
		case 11:
			return 2048;
		case 12:
			return 4096;
		case 13:
			return 8192;
		case 14:
			return 16384;
		default:
			break;
	}
	return 32768;
}

bool func_244(int iParam0)
{
	return (iParam0 >= 1 && iParam0 < 13);
}

bool func_245(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_1327590.f_19547)
	{
		if (Global_1327590.f_19547[iVar0 /*5*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_246(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_1327590.f_19547)
	{
		if (Global_1327590.f_19547[iVar0 /*5*/] == iParam0)
		{
			return Global_1327590.f_19547[iVar0 /*5*/].f_1;
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_247(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return -1587.35f, -1393.41f, 80.33f;
		case 6:
			return -1585.48f, -1389.92f, 80.23f;
		case 5:
			return -1608.43f, -1412.61f, 80.94f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_248()
{
	switch (__LIB_0__::func_317())
	{
		case 3:
			return 1899.39f, -1812.21f, 40.5f;
		case 2:
			return 647.92f, -1287.89f, 40.5f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_249(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 0:
			switch (uParam0->f_5[1])
			{
				case 0:
					return -92.02f, -32.22f, 94.89f;
				case 1:
					return -120f, -2.86f, 94.61f;
				default:
					break;
			}
			break;
		case 4:
			switch (uParam0->f_5[1])
			{
				case 0:
					return -144.04f, -20.66f, 95.09f;
				case 1:
					return -143.85f, -15.71f, 95.1f;
				default:
					break;
			}
			break;
		case 1:
			switch (uParam0->f_5[1])
			{
				case 0:
					return -111.01f, -35.73f, 94.73f;
				default:
					break;
			}
			break;
		case 7:
			switch (uParam0->f_5[0])
			{
				case 0:
					return -148.3f, -31.53f, 94.83f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_250(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 0:
			switch (uParam0->f_5[1])
			{
				case 0:
					return 1846.342f, -1845.074f, 42.06758f;
				case 1:
					return 1844.333f, -1846.551f, 42.22015f;
				case 2:
					return 1843.92f, -1843.816f, 42.36208f;
				default:
					break;
			}
			break;
		case 4:
			switch (uParam0->f_5[1])
			{
				case 0:
					return 1881.256f, -1856.487f, 41.80985f;
				case 1:
					return 1880.758f, -1855.836f, 41.80937f;
				default:
					break;
			}
			break;
		case 1:
			switch (uParam0->f_5[1])
			{
				case 0:
					return 1877.955f, -1858.856f, 41.80895f;
				default:
					break;
			}
			break;
		case 7:
			switch (uParam0->f_5[1])
			{
				case 0:
					return 1873.32f, -1798.33f, 41.19f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_251(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 7:
			switch (uParam0->f_5[1])
			{
				case 0:
					return 2349.91f, 1355.19f, 104.77f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_252(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 9:
			return 3;
		case 14:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_253(var uParam0)
{
	int iVar0;
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_102.f_7, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_110.f_7, 0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_55.f_5[iVar0 /*6*/].f_5, 0);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_55.f_30[iVar0 /*4*/].f_3, 0);
		iVar0++;
	}
}

bool func_254(int iParam0)
{
	int iVar0;
	iVar0 = -1;
	if (__LIB_3__::func_87(iParam0, &iVar0))
	{
		return __LIB_3__::func_88(iVar0);
	}
	return false;
}

char* func_255(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 7:
			return "FINISH_CAMP_CHORE_CHOP_WOOD_BEECHERS";
		case 4:
			return "FINISH_CAMP_CHORE_SACK_BEECHERS";
		case 0:
			return "FINISH_CAMP_CHORE_HAY_BALE_BEECHERS";
		case 9:
			return "FINISH_CAMP_CHORE_WATER_BUCKET_BEECHERS_PART_2";
		case 6:
			return "FINISH_CAMP_CHORE_DROP_OFF_EGGS";
		case 5:
			return "FINISH_CAMP_CHORE_DROP_OFF_MILK";
		case 14:
			return "FINISH_CAMP_CHORE_FEED_CHICKENS";
		default:
			break;
	}
	return "FINISH_CAMP_CHORE";
}

char* func_256(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 7:
			return "FINISH_CAMP_CHORE_CHOP_WOOD";
		case 4:
			return "FINISH_CAMP_CHORE_SACK";
		case 0:
			return "FINISH_CAMP_CHORE_HAY_BALE";
		case 1:
			if (*uParam0 == joaat("WORLD_PLAYER_CHORES_BUCKET_PICKUP_EMPTY"))
			{
				return "FINISH_CAMP_CHORE_WATER_PART_1";
			}
			else
			{
				return "FINISH_CAMP_CHORE_WATER_PART_2";
			}
			break;
	}
	return "FINISH_CAMP_CHORE";
}

int func_257(int* iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_5__::func_862(iParam1, 0);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 3:
			iVar1 = iParam0->f_35.f_531[0 /*30*/].f_2[iVar0 /*4*/].f_3;
			break;
		case 4:
			iVar1 = iParam0->f_35.f_531[1 /*30*/].f_2[iVar0 /*4*/].f_3;
			break;
		case 5:
			iVar1 = iParam0->f_35.f_531[2 /*30*/].f_2[iVar0 /*4*/].f_3;
			break;
		case 10:
			iVar1 = iParam0->f_35.f_531[3 /*30*/].f_2[iVar0 /*4*/].f_3;
			break;
		case 12:
			iVar1 = iParam0->f_35.f_531[6 /*30*/].f_2[1 /*4*/].f_3;
			break;
		case 13:
			iVar1 = iParam0->f_35.f_531[4 /*30*/].f_2[1 /*4*/].f_3;
			break;
		case 14:
			iVar1 = iParam0->f_35.f_531[7 /*30*/].f_2[1 /*4*/].f_3;
			break;
		case 0:
			iVar1 = iParam0->f_35.f_531[5 /*30*/].f_2[1 /*4*/].f_3;
			break;
		default:
			return 0;
	}
	return iVar1 * 100;
}

int func_258(int* iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = (__LIB_5__::func_862(iParam1, 0) - 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 3:
			iVar1 = iParam0->f_35.f_531[0 /*30*/].f_24[iVar0];
			break;
		case 4:
			iVar1 = iParam0->f_35.f_531[1 /*30*/].f_24[iVar0];
			break;
		case 5:
			iVar1 = iParam0->f_35.f_531[2 /*30*/].f_24[iVar0];
			break;
		default:
			return 0;
	}
	return iVar1 * 100;
}

void func_259(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = -1;
	if (__LIB_3__::func_87(iParam0, &iVar0))
	{
		__LIB_3__::func_89(iVar0, bParam1);
	}
}

void func_260(var uParam0)
{
	struct<2> Var0;
	Var0.f_1 = 12;
	Var0.f_1.f_1.f_1 = -1;
	Var0.f_1.f_1.f_3 = -1;
	Var0.f_1.f_1.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	MISC::_COPY_MEMORY(uParam0[0 /*63*/], uParam0[1 /*63*/], 63);
	MISC::_COPY_MEMORY(uParam0[1 /*63*/], &Var0, 63);
	(*uParam0)[1 /*63*/] = __LIB_6__::func_15(uParam0[0 /*63*/]);
}

void func_261()
{
	__LIB_5__::func_812(32);
}

bool func_262()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (MISC::IS_BIT_SET(Local_18.f_41, iVar1))
		{
		}
		else
		{
			if (!MISC::IS_BIT_SET(Local_18.f_40, iVar1))
			{
				if (__LIB_5__::func_827(iVar1))
				{
					MISC::SET_BIT(&(Local_18.f_40), iVar1);
					Local_18.f_27[iVar1] = MISC::GET_GAME_TIMER() + 20000;
				}
			}
			if (MISC::IS_BIT_SET(Local_18.f_40, iVar1))
			{
				Call_Loc(Local_18.f_1[iVar1]);
				if (StackVal)
				{
					MISC::SET_BIT(&(Local_18.f_41), iVar1);
				}
				else if (MISC::GET_GAME_TIMER() > Local_18.f_27[iVar1])
				{
					MISC::SET_BIT(&(Local_18.f_41), iVar1);
				}
			}
			if (!MISC::IS_BIT_SET(Local_18.f_41, iVar1))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	if (iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_263(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = (*uParam0)[2];
	if (VOLUME::_DOES_VOLUME_EXIST(iVar0))
	{
		__LIB_5__::func_848(iVar0);
		POPULATION::_0x74C2B3DC0B294102(iVar0);
		POPULATION::_0xA1CFB35069D23C23(iVar0);
		COMPANION::_0x7274F84B1501B523(iVar0);
	}
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (VOLUME::_DOES_VOLUME_EXIST((*uParam0)[iVar1]))
		{
			__LIB_0__::func_172((*uParam0)[iVar1]);
		}
		iVar1++;
	}
}

int func_264()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	iVar1 = MISC::GET_GAME_TIMER();
	iVar2 = NETWORK::NETWORK_GET_TIMEOUT_TIME();
	if (iVar2 < 50000)
	{
		iVar2 = 50000;
	}
	while (iVar0 != 2)
	{
		if (MISC::GET_GAME_TIMER() - iVar1) > (iVar2 - 5000)
		{
		}
		if ((MISC::GET_GAME_TIMER() - iVar1) > 300000)
		{
			__LIB_2__::func_822();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					__LIB_2__::func_822();
					break;
				case 2:
					__LIB_2__::func_822();
					break;
				case 4:
					__LIB_2__::func_822();
					break;
				case 3:
					__LIB_2__::func_822();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			__LIB_2__::func_822();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			__LIB_2__::func_822();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			__LIB_2__::func_822();
		}
		if (__LIB_0__::func_2() == 0)
		{
			if (__LIB_5__::func_872())
			{
				__LIB_2__::func_822();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_2__::func_822();
	}
	return 1;
}

void func_265()
{
	__LIB_0__::func_326(4);
	__LIB_0__::func_326(2);
	__LIB_5__::func_873(32);
	Local_18.f_1718.f_2 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000));
}

void func_266()
{
	Local_18.f_3373 = -1;
	__LIB_0__::func_698(2);
	__LIB_0__::func_698(4);
	__LIB_5__::func_856(32);
}

void func_267()
{
	__LIB_0__::func_326(4);
	__LIB_0__::func_326(2);
	__LIB_5__::func_873(32);
	Local_18.f_1718.f_2 = MISC::GET_GAME_TIMER() + 5000;
}

void func_268(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 20)
	{
		return;
	}
	*uParam0 = iVar0;
	__LIB_5__::func_876(uParam0);
}

void func_269(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_5__::func_884();
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iVar0))
	{
		return;
	}
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, TASK::_GET_SCENARIO_POINT_COORDS(iVar0, true), 1.5f, 20000, 0.25f, 0, 40000f);
}

void func_270(int iParam0)
{
	int iVar0;
	int iVar1;
	__LIB_5__::func_885(iParam0, &iVar0, &iVar1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1357549.f_1886.f_2, iVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1357549.f_1886.f_2.f_1, iVar1);
}

void func_271(int iParam0)
{
	int iVar0;
	int iVar1;
	__LIB_5__::func_885(iParam0, &iVar0, &iVar1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1357549.f_1886.f_4, iVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1357549.f_1886.f_4.f_1, iVar1);
}

bool func_272()
{
	return __LIB_5__::func_862(10, 0) >= 3;
}

int func_273(int iParam0)
{
	switch (__LIB_0__::func_317())
	{
		case 2:
			return __LIB_5__::func_887(iParam0);
		case 1:
			return __LIB_5__::func_888(iParam0);
		case 6:
			return __LIB_5__::func_889(iParam0);
		case 3:
			return __LIB_5__::func_890(iParam0);
	}
	return 0;
}

bool func_274()
{
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return false;
	}
	if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		return false;
	}
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
	{
		return false;
	}
	if (__LIB_5__::func_825())
	{
		return false;
	}
	if (__LIB_1__::func_533(1048576))
	{
		return false;
	}
	return true;
}

bool func_275(int iParam0)
{
	return __LIB_5__::func_895(Global_35, iParam0);
}

bool func_276(int iParam0)
{
	return __LIB_5__::func_895(iParam0, 2);
}

void func_277()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_1327590.f_19547)
	{
		if (Global_1327590.f_19547[iVar0 /*5*/] != -1)
		{
			if (Global_1327590.f_19547[iVar0 /*5*/].f_1 < 5)
			{
				__LIB_5__::func_897(iVar0);
			}
		}
		iVar0++;
	}
}

float func_278(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	if (*uParam0 == 4)
	{
		return 0f;
	}
	iVar2 = 0;
	while (iVar2 < uParam0->f_253)
	{
		if (uParam0->f_9[iVar2 /*9*/].f_8 != 0 && !__LIB_5__::func_903(uParam0->f_9[iVar2 /*9*/].f_8))
		{
			iVar1++;
		}
		else if (!MISC::IS_BIT_SET(Global_40.f_4283.f_415[*uParam0], iVar2))
		{
			iVar0++;
		}
		iVar2++;
	}
	fVar3 = (BUILTIN::TO_FLOAT(iVar0) / IntToFloat((uParam0->f_253 - iVar1)));
	return (fVar3 * 100f);
}

void func_279(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		__LIB_5__::func_926(&(iParam0->f_3402[iVar0]));
		__LIB_5__::func_926(&(iParam0->f_3430[iVar0]));
		iVar0++;
	}
	__LIB_5__::func_926(&(iParam0->f_3478));
	iVar1 = 0;
	while (iVar1 < 3)
	{
		__LIB_5__::func_926(&(iParam0->f_3458[iVar1]));
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 15)
	{
		__LIB_5__::func_926(&(iParam0->f_3462[iVar2]));
		iVar2++;
	}
}

void func_280(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_5__::func_899(uParam0[iVar0 /*257*/]);
		iVar0++;
	}
}

void func_281(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_5__::func_900(uParam0[iVar0 /*257*/]);
		iVar0++;
	}
}

void func_282(int iParam0)
{
	int iVar0;
	if (iParam0 > 150)
	{
		iParam0 = 150;
	}
	if (iParam0 > (Global_1934765.f_286 - 150))
	{
	}
	if (__LIB_5__::func_929(&iVar0))
	{
		if (Global_1934765.f_275[iVar0 /*2*/].f_1 != iParam0)
		{
			Global_1934765.f_286 = (Global_1934765.f_286 + Global_1934765.f_275[iVar0 /*2*/].f_1);
			Global_1934765.f_275[iVar0 /*2*/].f_1 = iParam0;
			Global_1934765.f_286 = (Global_1934765.f_286 - iParam0);
			STREAMING::_0x2F9AC754FE179D58(__LIB_5__::func_274());
		}
		return;
	}
	iVar0 = __LIB_5__::func_275();
	if (iVar0 == -1)
	{
		return;
	}
	Global_1934765.f_275[iVar0 /*2*/].f_1 = iParam0;
	Global_1934765.f_275[iVar0 /*2*/] = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1934765.f_286 = (Global_1934765.f_286 - iParam0);
	STREAMING::_0x2F9AC754FE179D58(__LIB_5__::func_274());
}

int func_283(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!__LIB_5__::func_902(uParam0[iVar0 /*257*/]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_284(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	char cVar0[64];
	struct<8> Var8;
	MemCopy(&cVar0, {Global_1888801[iParam0 /*35*/].f_22}, 8);
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, __LIB_0__::func_323(iParam1), 64);
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, __LIB_5__::func_932(iParam2), 64);
	Var8 = { cVar0 };
	StringConCat(&Var8, "_setup", 64);
	if (TASK::DOES_SCENARIO_GROUP_EXIST(&Var8))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED(&Var8, bParam4);
	}
	else if (bParam4)
	{
		bParam3 = true;
	}
	if (TASK::DOES_SCENARIO_GROUP_EXIST(&cVar0))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED(&cVar0, bParam3);
	}
}

bool func_285()
{
	if (!__LIB_4__::func_635(32768))
	{
		return false;
	}
	if (__LIB_4__::func_635(16384))
	{
		return false;
	}
	if (__LIB_4__::func_635(4))
	{
		return false;
	}
	return true;
}

struct<16> func_286(float fParam0, float fParam1, float fParam2)
{
	char cVar0[128];
	struct<2> Var16;
	Var16 = { __LIB_5__::func_944(fParam0) };
	MemCopy(&cVar0, {Var16}, 16);
	StringConCat(&cVar0, "~BLIP_SUPPLY_ICON_HEALTH~", 128);
	Var16 = { __LIB_5__::func_944(fParam1) };
	StringConCat(&cVar0, &Var16, 128);
	StringConCat(&cVar0, "~BLIP_SUPPLY_ICON_AMMO~", 128);
	Var16 = { __LIB_5__::func_944(fParam2) };
	StringConCat(&cVar0, &Var16, 128);
	StringConCat(&cVar0, "~BLIP_SUPPLY_ICON_FOOD~", 128);
	return cVar0;
}

void func_287(int iParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	fVar0 = 2.5f;
	if (__LIB_1__::func_533(512) && !__LIB_4__::func_635(2))
	{
		fVar0 = 1.25f;
	}
	if (__LIB_5__::func_945(&(iParam0->f_3483)))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3483) && VEHICLE::_IS_DRAFT_VEHICLE(iParam0->f_3483))
		{
			iVar1 = 0;
			while (iVar1 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0->f_3483, iVar1);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, fVar0);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iParam0->f_3483, PED::_0x46BF2A810679D6E6(iVar2, fVar0));
				}
				iVar1++;
			}
		}
	}
}

bool func_288()
{
	return __LIB_5__::func_904(32);
}

bool func_289(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_5__::func_894(uParam0[iVar0 /*257*/], uParam1[iVar0]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_290(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_253)
	{
		__LIB_5__::func_955(iVar0, uParam0);
		iVar0++;
	}
	MISC::CLEAR_BIT(&(uParam0->f_254), 4);
}

void func_291(int iParam0, var uParam1)
{
	int iVar0;
	iVar0 = __LIB_5__::func_956(iParam0);
	if (!DATAFILE::_0x4F9E3ED7617123AC(iVar0))
	{
		return;
	}
	uParam1->f_2 = DATAFILE::_0xD97D8D905F1562F2(iVar0);
	MISC::SET_BIT(&(uParam1->f_254), 1);
}

void func_292(int iParam0, int iParam1, int iParam2, var uParam3)
{
	struct<4> Var0;
	var uVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	if (iParam2 < 0)
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 0, "Supplies");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 1, "Camp");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 2, "Camp(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 3, "UpgradeLevel");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 4, "UpgradeLevel(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 5, "Item");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 6, "Item(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 7, ":id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 8, ":rootPosition");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 9, ":rootRotation");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 10, ":model");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 11, ":offset");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 12, ":rotation");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 13, ":unlock");
	Var0 = uParam3->f_2;
	Var0.f_1 = 0;
	Var0.f_2 = 0;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar5, &Var0))
	{
		return;
	}
	Var0.f_1 = uVar5;
	Var0.f_2 = 1;
	iVar6 = DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
	if (iVar6 == 0)
	{
		return;
	}
	iVar10 = __LIB_5__::func_957(iParam0);
	iVar11 = 0;
	while (iVar11 < iVar6)
	{
		Var0.f_1 = uVar5;
		Var0.f_2 = 2;
		Var0.f_3 = iVar11;
		if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar7, &Var0))
		{
		}
		else
		{
			iVar12 = 0;
			Var0.f_1 = uVar7;
			Var0.f_2 = 7;
			if (!DATAFILE::_DATAFILE_GET_HASH(&iVar12, &Var0))
			{
			}
			else if (iVar12 != iVar10)
			{
			}
			else
			{
				Var0.f_1 = uVar7;
				Var0.f_2 = 8;
				if (!DATAFILE::_DATAFILE_GET_VECTOR(&(uParam3->f_3), &Var0))
				{
				}
				Var0.f_1 = uVar7;
				Var0.f_2 = 9;
				if (!DATAFILE::_DATAFILE_GET_VECTOR(&(uParam3->f_3.f_3), &Var0))
				{
				}
				Var0.f_1 = uVar7;
				Var0.f_2 = 3;
				iVar13 = DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
				if (iVar13 <= iParam2)
				{
					return;
				}
				Var0.f_1 = uVar7;
				Var0.f_2 = 4;
				Var0.f_3 = iParam2;
				if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar8, &Var0))
				{
					return;
				}
				Var0.f_1 = uVar8;
				Var0.f_2 = 5;
				iVar14 = DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
				if (iVar14 == 0)
				{
				}
				if (iVar14 > 27)
				{
				}
				iVar15 = 0;
				while (iVar15 < iVar14)
				{
					if (iVar15 >= 27)
					{
					}
					else
					{
						Var0.f_1 = uVar8;
						Var0.f_2 = 6;
						Var0.f_3 = iVar15;
						if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar9, &Var0))
						{
							uParam3->f_9[iVar15 /*9*/].f_1 = 0;
						}
						else
						{
							iVar16 = 0;
							Var0.f_1 = uVar9;
							Var0.f_2 = 10;
							if (!DATAFILE::_DATAFILE_GET_HASH(&iVar16, &Var0))
							{
							}
							else
							{
								uParam3->f_9[iVar15 /*9*/].f_1 = iVar16;
							}
							Var0.f_1 = uVar9;
							Var0.f_2 = 11;
							if (!DATAFILE::_DATAFILE_GET_VECTOR(&(uParam3->f_9[iVar15 /*9*/].f_2), &Var0))
							{
							}
							Var0.f_1 = uVar9;
							Var0.f_2 = 12;
							if (!DATAFILE::_DATAFILE_GET_VECTOR(&(uParam3->f_9[iVar15 /*9*/].f_5), &Var0))
							{
							}
							Var0.f_1 = uVar9;
							Var0.f_2 = 13;
							if (DATAFILE::_DATAFILE_GET_HASH(&(uParam3->f_9[iVar15 /*9*/].f_8), &Var0))
							{
							}
							else
							{
								uParam3->f_9[iVar15 /*9*/].f_8 = 0;
							}
						}
						iVar15++;
					}
				}
				*uParam3 = iParam1;
				uParam3->f_1 = iParam2;
				uParam3->f_253 = iVar14;
				MISC::SET_BIT(&(uParam3->f_254), 2);
				MISC::SET_BIT(&(uParam3->f_254), 0);
			}
			else
			{
				iVar11++;
			}
		}
	}
}

void func_293(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_253)
	{
		if (MISC::IS_BIT_SET(*uParam1, iVar0))
		{
		}
		else if (uParam0->f_9[iVar0 /*9*/].f_1 == 0)
		{
		}
		else if (uParam0->f_9[iVar0 /*9*/].f_8 != 0)
		{
			if (!__LIB_5__::func_903(uParam0->f_9[iVar0 /*9*/].f_8))
			{
			}
			else
			{
				STREAMING::REQUEST_MODEL(uParam0->f_9[iVar0 /*9*/].f_1, false);
			}
			iVar0++;
			MISC::SET_BIT(&(uParam0->f_254), 3);
		}
	}
}

int func_294()
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (__LIB_5__::func_975(64) || __LIB_5__::func_975(128))
	{
		return 0;
	}
	switch (__LIB_0__::func_317())
	{
		case 2:
			if (CAM::IS_SPHERE_VISIBLE(654.7123f, -1252.524f, 42.8435f, 5f))
			{
				return 1;
			}
			break;
		case 1:
			if (CAM::IS_SPHERE_VISIBLE(-131.7905f, -31.7847f, 95.0884f, 5f))
			{
				return 1;
			}
			break;
		case 6:
			if (CAM::IS_SPHERE_VISIBLE(2358.853f, 1375.151f, 105.5556f, 5f))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_295()
{
	__LIB_5__::func_937(32);
}

void func_296(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		switch (iVar1)
		{
			case 0:
				iVar0 = __LIB_0__::func_167(1);
				break;
			case 1:
				iVar0 = __LIB_0__::func_167(7);
				break;
			case 2:
				iVar0 = __LIB_0__::func_167(9);
				break;
		}
		if (PED::_IS_PED_USING_SCENARIO_HASH(iVar0, joaat("PROP_HUMAN_WOOD_CHOP")))
		{
			uParam0->f_1617 = 1;
			uParam1->f_2 = 6;
		}
		else if (PED::_IS_PED_USING_SCENARIO_HASH(iVar0, joaat("PROP_HUMAN_SEAT_CHAIR_SHARPEN_AXE")))
		{
			uParam0->f_1617 = 1;
		}
		iVar1++;
	}
}

bool func_297()
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_399(Global_35, 1, 0, 0);
	iVar1 = __LIB_0__::func_399(Global_35, 1, 1, 0);
	if (((iVar0 == joaat("OBJECT_1") || iVar0 == joaat("OBJECT_2")) || iVar1 == joaat("OBJECT_1")) || iVar1 == joaat("OBJECT_2"))
	{
		return true;
	}
	return false;
}

int func_298()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_1327590.f_19547)
	{
		if (Global_1327590.f_19547[iVar0 /*5*/].f_1 >= 5)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_5__::func_907(__LIB_5__::func_846()), __LIB_5__::func_977(Global_1327590.f_19547[iVar0 /*5*/]), true) < 3.25f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_299(int iParam0, int iParam1)
{
	float fVar0;
	if (iParam1 == -1)
	{
		return false;
	}
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	fVar0 = __LIB_5__::func_984(iParam1);
	if (fVar0 == 1E+09f)
	{
		return false;
	}
	if (__LIB_5__::func_922(iParam0, iParam1) >= fVar0)
	{
		return true;
	}
	return false;
}

bool func_300(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	if (iParam1 == -1)
	{
		return false;
	}
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	switch (iParam1)
	{
		case 0:
		case 5:
		case 6:
		case 7:
		case 9:
			return false;
	}
	iVar0 = __LIB_0__::func_398(iParam0);
	fVar1 = __LIB_5__::func_985(iVar0);
	if (fVar1 >= 0.1f)
	{
		return true;
	}
	return false;
}

int func_301(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	struct<4> Var5;
	if (__LIB_0__::func_2() == 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { __LIB_0__::func_949(0) };
	Var0.f_4 = __LIB_5__::func_998(iParam1);
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (!__LIB_0__::func_939(iParam0, &Var5, &Var0, iParam2, iParam3, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_302(int iParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar86;
	int iVar87;
	Var0 = 17;
	Var0.f_1 = 4;
	Var0.f_1.f_5 = 4;
	Var0.f_1.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0[15 /*5*/][0] = __LIB_1__::func_976();
	Var0[15 /*5*/][1] = __LIB_1__::func_976();
	Var0[15 /*5*/][2] = 1079303588;
	Var0[15 /*5*/][3] = 1079303588;
	Var0[10 /*5*/][0] = -937893311;
	Var0[10 /*5*/][1] = -937893311;
	Var0[10 /*5*/][2] = -937893311;
	Var0[10 /*5*/][3] = joaat("ABI1_ARRIVE");
	Var0[11 /*5*/][0] = __LIB_1__::func_976();
	Var0[11 /*5*/][1] = __LIB_1__::func_976();
	Var0[11 /*5*/][2] = __LIB_1__::func_976();
	Var0[11 /*5*/][3] = __LIB_1__::func_976();
	Var0[12 /*5*/][0] = __LIB_1__::func_976();
	Var0[12 /*5*/][1] = __LIB_1__::func_976();
	Var0[12 /*5*/][2] = __LIB_1__::func_976();
	Var0[12 /*5*/][3] = __LIB_1__::func_976();
	Var0[13 /*5*/][0] = __LIB_1__::func_976();
	Var0[13 /*5*/][1] = __LIB_1__::func_976();
	Var0[13 /*5*/][2] = __LIB_1__::func_976();
	Var0[13 /*5*/][3] = __LIB_1__::func_976();
	Var0[9 /*5*/][0] = -1365193577;
	Var0[9 /*5*/][1] = -1166561064;
	Var0[9 /*5*/][2] = -1166561064;
	Var0[9 /*5*/][3] = -1166561064;
	Var0[8 /*5*/][0] = -1620486708;
	Var0[8 /*5*/][1] = -1620486708;
	Var0[8 /*5*/][2] = -1620486708;
	Var0[8 /*5*/][3] = 163126540;
	Var0[7 /*5*/][0] = 1808508475;
	Var0[7 /*5*/][1] = 1808508475;
	Var0[7 /*5*/][2] = 1808508475;
	Var0[7 /*5*/][3] = 2015311123;
	Var0[6 /*5*/][0] = -1576393943;
	Var0[6 /*5*/][1] = -1576393943;
	Var0[6 /*5*/][2] = -1576393943;
	Var0[6 /*5*/][3] = -1920340119;
	Var0[5 /*5*/][0] = -1563072795;
	Var0[5 /*5*/][1] = -1563072795;
	Var0[5 /*5*/][2] = 607574432;
	Var0[5 /*5*/][3] = 607574432;
	Var0[4 /*5*/][0] = -1987982797;
	Var0[4 /*5*/][1] = -1987982797;
	Var0[4 /*5*/][2] = -1987982797;
	Var0[4 /*5*/][3] = -1933895237;
	Var0[3 /*5*/][0] = -182995231;
	Var0[3 /*5*/][1] = -182995231;
	Var0[3 /*5*/][2] = 1267297807;
	Var0[3 /*5*/][3] = 1267297807;
	Var0[0 /*5*/][0] = __LIB_1__::func_976();
	Var0[0 /*5*/][1] = -1150137955;
	Var0[0 /*5*/][2] = -1150137955;
	Var0[0 /*5*/][3] = -1150137955;
	Var0[1 /*5*/][0] = __LIB_1__::func_976();
	Var0[1 /*5*/][1] = __LIB_1__::func_976();
	Var0[1 /*5*/][2] = __LIB_1__::func_976();
	Var0[1 /*5*/][3] = __LIB_1__::func_976();
	Var0[2 /*5*/][0] = __LIB_1__::func_976();
	Var0[2 /*5*/][1] = __LIB_1__::func_976();
	Var0[2 /*5*/][2] = __LIB_1__::func_976();
	Var0[2 /*5*/][3] = __LIB_1__::func_976();
	iVar87 = 0;
	while (iVar87 < 17)
	{
		iVar86 = 0;
		while (iVar86 < 4)
		{
			if (Var0[iVar87 /*5*/][iVar86] != __LIB_1__::func_976())
			{
				if ((iVar86 + 1 == __LIB_5__::func_862(iVar87, 1) && iParam0 == 1) && bParam2)
				{
					if (!STREAMING::_IS_IMAP_ACTIVE(Var0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::_REQUEST_IMAP(Var0[iVar87 /*5*/][iVar86]);
						__LIB_6__::func_29(Var0[iVar87 /*5*/][iVar86], 1, uParam1);
					}
				}
				else if ((Var0[iVar87 /*5*/][(__LIB_5__::func_862(iVar87, 1) - 1)] != Var0[iVar87 /*5*/][iVar86] || iParam0 != 1) || bParam2 == 0)
				{
					if (STREAMING::_IS_IMAP_ACTIVE(Var0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::_REMOVE_IMAP(Var0[iVar87 /*5*/][iVar86]);
						__LIB_6__::func_29(Var0[iVar87 /*5*/][iVar86], 0, uParam1);
					}
				}
			}
			iVar86++;
		}
		iVar87++;
	}
}

void func_303(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	struct<16> Var1;
	int iVar50;
	int iVar51;
	int iVar52;
	if (fParam1 < 30f)
	{
		iVar0 = 0;
	}
	else if (fParam1 < 75f)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	Var1 = 3;
	Var1.f_1 = 3;
	Var1.f_1.f_1 = 4;
	Var1.f_1.f_1.f_5 = 4;
	Var1.f_1.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16 = 3;
	Var1.f_1.f_16.f_1 = 4;
	Var1.f_1.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16.f_16 = 3;
	Var1.f_1.f_16.f_16.f_1 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5.f_5 = 4;
	Var1[0 /*16*/][0 /*5*/][0] = __LIB_1__::func_976();
	Var1[1 /*16*/][0 /*5*/][0] = __LIB_1__::func_976();
	Var1[2 /*16*/][0 /*5*/][0] = __LIB_1__::func_976();
	Var1[0 /*16*/][0 /*5*/][1] = -710911638;
	Var1[1 /*16*/][0 /*5*/][1] = -710911638;
	Var1[2 /*16*/][0 /*5*/][1] = -710911638;
	Var1[0 /*16*/][0 /*5*/][2] = -942555699;
	Var1[1 /*16*/][0 /*5*/][2] = -942555699;
	Var1[2 /*16*/][0 /*5*/][2] = -942555699;
	Var1[0 /*16*/][0 /*5*/][3] = -760097927;
	Var1[1 /*16*/][0 /*5*/][3] = -760097927;
	Var1[2 /*16*/][0 /*5*/][3] = -760097927;
	Var1[0 /*16*/][1 /*5*/][0] = __LIB_1__::func_976();
	Var1[1 /*16*/][1 /*5*/][0] = __LIB_1__::func_976();
	Var1[2 /*16*/][1 /*5*/][0] = __LIB_1__::func_976();
	Var1[0 /*16*/][1 /*5*/][1] = 2047954825;
	Var1[1 /*16*/][1 /*5*/][1] = 2047954825;
	Var1[2 /*16*/][1 /*5*/][1] = 2047954825;
	Var1[0 /*16*/][1 /*5*/][2] = -2085723453;
	Var1[1 /*16*/][1 /*5*/][2] = -2085723453;
	Var1[2 /*16*/][1 /*5*/][2] = -2085723453;
	Var1[0 /*16*/][1 /*5*/][3] = 1434945142;
	Var1[1 /*16*/][1 /*5*/][3] = 1434945142;
	Var1[2 /*16*/][1 /*5*/][3] = 1434945142;
	Var1[0 /*16*/][2 /*5*/][0] = 1924209179;
	Var1[1 /*16*/][2 /*5*/][0] = 1924209179;
	Var1[2 /*16*/][2 /*5*/][0] = 1924209179;
	Var1[0 /*16*/][2 /*5*/][1] = -2084193212;
	Var1[1 /*16*/][2 /*5*/][1] = -2084193212;
	Var1[2 /*16*/][2 /*5*/][1] = -2084193212;
	Var1[0 /*16*/][2 /*5*/][2] = -838184752;
	Var1[1 /*16*/][2 /*5*/][2] = -838184752;
	Var1[2 /*16*/][2 /*5*/][2] = -838184752;
	Var1[0 /*16*/][2 /*5*/][3] = -1433138716;
	Var1[1 /*16*/][2 /*5*/][3] = -1433138716;
	Var1[2 /*16*/][2 /*5*/][3] = -1433138716;
	iVar52 = 0;
	while (iVar52 < 3)
	{
		iVar51 = 0;
		while (iVar51 < 3)
		{
			iVar50 = 0;
			while (iVar50 < 4)
			{
				if (Var1[iVar52 /*16*/][iVar51 /*5*/][iVar50] != __LIB_1__::func_976())
				{
					if (((iVar52 == iVar0 && iVar50 + 1 == __LIB_6__::func_30(iVar51)) && iParam0 == 1) && bParam2)
					{
						if (!STREAMING::_IS_IMAP_ACTIVE(Var1[iVar52 /*16*/][iVar51 /*5*/][iVar50]))
						{
							STREAMING::_REQUEST_IMAP(Var1[iVar52 /*16*/][iVar51 /*5*/][iVar50]);
						}
					}
					else if ((Var1[iVar0 /*16*/][iVar51 /*5*/][(__LIB_6__::func_30(iVar51) - 1)] != Var1[iVar52 /*16*/][iVar51 /*5*/][iVar50] || iParam0 != 1) || bParam2 == 0)
					{
						if (STREAMING::_IS_IMAP_ACTIVE(Var1[iVar52 /*16*/][iVar51 /*5*/][iVar50]))
						{
							STREAMING::_REMOVE_IMAP(Var1[iVar52 /*16*/][iVar51 /*5*/][iVar50]);
						}
					}
				}
				iVar50++;
			}
			iVar51++;
		}
		iVar52++;
	}
}

void func_304(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	struct<16> Var1;
	int iVar50;
	int iVar51;
	int iVar52;
	if (fParam1 < 30f)
	{
		iVar0 = 0;
	}
	else if (fParam1 < 75f)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	Var1 = 3;
	Var1.f_1 = 3;
	Var1.f_1.f_1 = 4;
	Var1.f_1.f_1.f_5 = 4;
	Var1.f_1.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16 = 3;
	Var1.f_1.f_16.f_1 = 4;
	Var1.f_1.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16.f_16 = 3;
	Var1.f_1.f_16.f_16.f_1 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5.f_5 = 4;
	Var1[0 /*16*/][0 /*5*/][0] = __LIB_1__::func_976();
	Var1[1 /*16*/][0 /*5*/][0] = __LIB_1__::func_976();
	Var1[2 /*16*/][0 /*5*/][0] = __LIB_1__::func_976();
	Var1[0 /*16*/][0 /*5*/][1] = 626928579;
	Var1[1 /*16*/][0 /*5*/][1] = 626928579;
	Var1[2 /*16*/][0 /*5*/][1] = 626928579;
	Var1[0 /*16*/][0 /*5*/][2] = 313722477;
	Var1[1 /*16*/][0 /*5*/][2] = 313722477;
	Var1[2 /*16*/][0 /*5*/][2] = 313722477;
	Var1[0 /*16*/][0 /*5*/][3] = 976082270;
	Var1[1 /*16*/][0 /*5*/][3] = 976082270;
	Var1[2 /*16*/][0 /*5*/][3] = 976082270;
	if (bParam3)
	{
		Var1[0 /*16*/][1 /*5*/][0] = __LIB_1__::func_976();
		Var1[1 /*16*/][1 /*5*/][0] = __LIB_1__::func_976();
		Var1[2 /*16*/][1 /*5*/][0] = __LIB_1__::func_976();
		Var1[0 /*16*/][1 /*5*/][1] = -1370620659;
		Var1[1 /*16*/][1 /*5*/][1] = -1370620659;
		Var1[2 /*16*/][1 /*5*/][1] = -1370620659;
		Var1[0 /*16*/][1 /*5*/][2] = -624219879;
		Var1[1 /*16*/][1 /*5*/][2] = -624219879;
		Var1[2 /*16*/][1 /*5*/][2] = -624219879;
		Var1[0 /*16*/][1 /*5*/][3] = 715730031;
		Var1[1 /*16*/][1 /*5*/][3] = 715730031;
		Var1[2 /*16*/][1 /*5*/][3] = 715730031;
		__LIB_6__::func_31(1);
	}
	else
	{
		Var1[0 /*16*/][1 /*5*/][0] = __LIB_1__::func_976();
		Var1[1 /*16*/][1 /*5*/][0] = __LIB_1__::func_976();
		Var1[2 /*16*/][1 /*5*/][0] = __LIB_1__::func_976();
		Var1[0 /*16*/][1 /*5*/][1] = 5585502;
		Var1[1 /*16*/][1 /*5*/][1] = 5585502;
		Var1[2 /*16*/][1 /*5*/][1] = 5585502;
		Var1[0 /*16*/][1 /*5*/][2] = -1362716862;
		Var1[1 /*16*/][1 /*5*/][2] = -1362716862;
		Var1[2 /*16*/][1 /*5*/][2] = -1362716862;
		Var1[0 /*16*/][1 /*5*/][3] = 482931525;
		Var1[1 /*16*/][1 /*5*/][3] = 482931525;
		Var1[2 /*16*/][1 /*5*/][3] = 482931525;
		__LIB_6__::func_31(0);
	}
	Var1[0 /*16*/][2 /*5*/][0] = -462274808;
	Var1[1 /*16*/][2 /*5*/][0] = -462274808;
	Var1[2 /*16*/][2 /*5*/][0] = -462274808;
	Var1[0 /*16*/][2 /*5*/][1] = -1906732332;
	Var1[1 /*16*/][2 /*5*/][1] = -1906732332;
	Var1[2 /*16*/][2 /*5*/][1] = -1906732332;
	Var1[0 /*16*/][2 /*5*/][2] = -526829;
	Var1[1 /*16*/][2 /*5*/][2] = -526829;
	Var1[2 /*16*/][2 /*5*/][2] = -526829;
	Var1[0 /*16*/][2 /*5*/][3] = -1754422016;
	Var1[1 /*16*/][2 /*5*/][3] = -1754422016;
	Var1[2 /*16*/][2 /*5*/][3] = -1754422016;
	iVar52 = 0;
	while (iVar52 < 3)
	{
		iVar51 = 0;
		while (iVar51 < 3)
		{
			iVar50 = 0;
			while (iVar50 < 4)
			{
				if (Var1[iVar52 /*16*/][iVar51 /*5*/][iVar50] != __LIB_1__::func_976())
				{
					if (((iVar52 == iVar0 && iVar50 + 1 == __LIB_6__::func_30(iVar51)) && iParam0 == 2) && bParam2)
					{
						if (!STREAMING::_IS_IMAP_ACTIVE(Var1[iVar52 /*16*/][iVar51 /*5*/][iVar50]))
						{
							STREAMING::_REQUEST_IMAP(Var1[iVar52 /*16*/][iVar51 /*5*/][iVar50]);
						}
					}
					else if ((Var1[iVar0 /*16*/][iVar51 /*5*/][(__LIB_6__::func_30(iVar51) - 1)] != Var1[iVar52 /*16*/][iVar51 /*5*/][iVar50] || iParam0 != 2) || bParam2 == 0)
					{
						if (STREAMING::_IS_IMAP_ACTIVE(Var1[iVar52 /*16*/][iVar51 /*5*/][iVar50]))
						{
							STREAMING::_REMOVE_IMAP(Var1[iVar52 /*16*/][iVar51 /*5*/][iVar50]);
						}
					}
				}
				iVar50++;
			}
			iVar51++;
		}
		iVar52++;
	}
}

void func_305(int iParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar86;
	int iVar87;
	Var0 = 17;
	Var0.f_1 = 4;
	Var0.f_1.f_5 = 4;
	Var0.f_1.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0[10 /*5*/][0] = 2036492390;
	Var0[10 /*5*/][1] = 2036492390;
	Var0[10 /*5*/][2] = 2036492390;
	Var0[10 /*5*/][3] = 1865439665;
	Var0[11 /*5*/][0] = __LIB_1__::func_976();
	Var0[11 /*5*/][1] = __LIB_1__::func_976();
	Var0[11 /*5*/][2] = __LIB_1__::func_976();
	Var0[11 /*5*/][3] = __LIB_1__::func_976();
	Var0[12 /*5*/][0] = __LIB_1__::func_976();
	Var0[12 /*5*/][1] = __LIB_1__::func_976();
	Var0[12 /*5*/][2] = __LIB_1__::func_976();
	Var0[12 /*5*/][3] = __LIB_1__::func_976();
	Var0[13 /*5*/][0] = __LIB_1__::func_976();
	Var0[13 /*5*/][1] = __LIB_1__::func_976();
	Var0[13 /*5*/][2] = __LIB_1__::func_976();
	Var0[13 /*5*/][3] = __LIB_1__::func_976();
	Var0[9 /*5*/][0] = __LIB_1__::func_976();
	Var0[9 /*5*/][1] = __LIB_1__::func_976();
	Var0[9 /*5*/][2] = __LIB_1__::func_976();
	Var0[9 /*5*/][3] = __LIB_1__::func_976();
	Var0[8 /*5*/][0] = __LIB_1__::func_976();
	Var0[8 /*5*/][1] = __LIB_1__::func_976();
	Var0[8 /*5*/][2] = __LIB_1__::func_976();
	Var0[8 /*5*/][3] = __LIB_1__::func_976();
	Var0[7 /*5*/][0] = -621187540;
	Var0[7 /*5*/][1] = -621187540;
	Var0[7 /*5*/][2] = -621187540;
	Var0[7 /*5*/][3] = 1079213989;
	Var0[6 /*5*/][0] = -882188392;
	Var0[6 /*5*/][1] = -882188392;
	Var0[6 /*5*/][2] = -882188392;
	Var0[6 /*5*/][3] = 964593693;
	Var0[5 /*5*/][0] = __LIB_1__::func_976();
	Var0[5 /*5*/][1] = __LIB_1__::func_976();
	Var0[5 /*5*/][2] = __LIB_1__::func_976();
	Var0[5 /*5*/][3] = __LIB_1__::func_976();
	Var0[4 /*5*/][0] = -997495998;
	Var0[4 /*5*/][1] = -997495998;
	Var0[4 /*5*/][2] = -997495998;
	Var0[4 /*5*/][3] = -2147051362;
	Var0[3 /*5*/][0] = -1115840558;
	Var0[3 /*5*/][1] = -1115840558;
	Var0[3 /*5*/][2] = 1674493966;
	Var0[3 /*5*/][3] = 1674493966;
	Var0[0 /*5*/][0] = __LIB_1__::func_976();
	Var0[0 /*5*/][1] = -1618574684;
	Var0[0 /*5*/][2] = -1618574684;
	Var0[0 /*5*/][3] = -1618574684;
	Var0[1 /*5*/][0] = __LIB_1__::func_976();
	Var0[1 /*5*/][1] = __LIB_1__::func_976();
	Var0[1 /*5*/][2] = __LIB_1__::func_976();
	Var0[1 /*5*/][3] = __LIB_1__::func_976();
	Var0[2 /*5*/][0] = __LIB_1__::func_976();
	Var0[2 /*5*/][1] = __LIB_1__::func_976();
	Var0[2 /*5*/][2] = __LIB_1__::func_976();
	Var0[2 /*5*/][3] = __LIB_1__::func_976();
	iVar87 = 0;
	while (iVar87 < 17)
	{
		iVar86 = 0;
		while (iVar86 < 4)
		{
			if (Var0[iVar87 /*5*/][iVar86] != __LIB_1__::func_976())
			{
				if ((iVar86 + 1 == __LIB_5__::func_862(iVar87, 1) && iParam0 == 3) && bParam2)
				{
					if (!STREAMING::_IS_IMAP_ACTIVE(Var0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::_REQUEST_IMAP(Var0[iVar87 /*5*/][iVar86]);
						__LIB_6__::func_29(Var0[iVar87 /*5*/][iVar86], 1, uParam1);
					}
				}
				else if ((Var0[iVar87 /*5*/][(__LIB_5__::func_862(iVar87, 1) - 1)] != Var0[iVar87 /*5*/][iVar86] || iParam0 != 3) || bParam2 == 0)
				{
					if (STREAMING::_IS_IMAP_ACTIVE(Var0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::_REMOVE_IMAP(Var0[iVar87 /*5*/][iVar86]);
						__LIB_6__::func_29(Var0[iVar87 /*5*/][iVar86], 0, uParam1);
					}
				}
			}
			iVar86++;
		}
		iVar87++;
	}
}

void func_306(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	struct<16> Var1;
	int iVar50;
	int iVar51;
	int iVar52;
	char* sVar53[4];
	int iVar58;
	if (fParam1 < 30f)
	{
		iVar0 = 0;
	}
	else if (fParam1 < 75f)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	Var1 = 3;
	Var1.f_1 = 3;
	Var1.f_1.f_1 = 4;
	Var1.f_1.f_1.f_5 = 4;
	Var1.f_1.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16 = 3;
	Var1.f_1.f_16.f_1 = 4;
	Var1.f_1.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16.f_16 = 3;
	Var1.f_1.f_16.f_16.f_1 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5.f_5 = 4;
	Var1[0 /*16*/][0 /*5*/][0] = __LIB_1__::func_976();
	Var1[1 /*16*/][0 /*5*/][0] = __LIB_1__::func_976();
	Var1[2 /*16*/][0 /*5*/][0] = __LIB_1__::func_976();
	Var1[0 /*16*/][0 /*5*/][1] = __LIB_1__::func_976();
	Var1[1 /*16*/][0 /*5*/][1] = __LIB_1__::func_976();
	Var1[2 /*16*/][0 /*5*/][1] = __LIB_1__::func_976();
	Var1[0 /*16*/][0 /*5*/][2] = __LIB_1__::func_976();
	Var1[1 /*16*/][0 /*5*/][2] = __LIB_1__::func_976();
	Var1[2 /*16*/][0 /*5*/][2] = __LIB_1__::func_976();
	Var1[0 /*16*/][0 /*5*/][3] = __LIB_1__::func_976();
	Var1[1 /*16*/][0 /*5*/][3] = __LIB_1__::func_976();
	Var1[2 /*16*/][0 /*5*/][3] = __LIB_1__::func_976();
	Var1[0 /*16*/][1 /*5*/][0] = __LIB_1__::func_976();
	Var1[1 /*16*/][1 /*5*/][0] = __LIB_1__::func_976();
	Var1[2 /*16*/][1 /*5*/][0] = __LIB_1__::func_976();
	Var1[0 /*16*/][1 /*5*/][1] = 1155877447;
	Var1[1 /*16*/][1 /*5*/][1] = 1155877447;
	Var1[2 /*16*/][1 /*5*/][1] = 1155877447;
	Var1[0 /*16*/][1 /*5*/][2] = 928165666;
	Var1[1 /*16*/][1 /*5*/][2] = 928165666;
	Var1[2 /*16*/][1 /*5*/][2] = 928165666;
	Var1[0 /*16*/][1 /*5*/][3] = 2048341166;
	Var1[1 /*16*/][1 /*5*/][3] = 2048341166;
	Var1[2 /*16*/][1 /*5*/][3] = 2048341166;
	Var1[0 /*16*/][2 /*5*/][0] = -414377604;
	Var1[1 /*16*/][2 /*5*/][0] = -414377604;
	Var1[2 /*16*/][2 /*5*/][0] = -414377604;
	Var1[0 /*16*/][2 /*5*/][1] = -109593135;
	Var1[1 /*16*/][2 /*5*/][1] = -109593135;
	Var1[2 /*16*/][2 /*5*/][1] = -109593135;
	Var1[0 /*16*/][2 /*5*/][2] = 990134505;
	Var1[1 /*16*/][2 /*5*/][2] = 990134505;
	Var1[2 /*16*/][2 /*5*/][2] = 990134505;
	Var1[0 /*16*/][2 /*5*/][3] = 1279910772;
	Var1[1 /*16*/][2 /*5*/][3] = 1279910772;
	Var1[2 /*16*/][2 /*5*/][3] = 1279910772;
	iVar52 = 0;
	while (iVar52 < 3)
	{
		iVar51 = 0;
		while (iVar51 < 3)
		{
			iVar50 = 0;
			while (iVar50 < 4)
			{
				if (Var1[iVar52 /*16*/][iVar51 /*5*/][iVar50] != __LIB_1__::func_976())
				{
					if (((iVar52 == iVar0 && iVar50 + 1 == __LIB_6__::func_30(iVar51)) && iParam0 == 3) && bParam2)
					{
						if (!STREAMING::_IS_IMAP_ACTIVE(Var1[iVar52 /*16*/][iVar51 /*5*/][iVar50]))
						{
							STREAMING::_REQUEST_IMAP(Var1[iVar52 /*16*/][iVar51 /*5*/][iVar50]);
						}
					}
					else if ((Var1[iVar0 /*16*/][iVar51 /*5*/][(__LIB_6__::func_30(iVar51) - 1)] != Var1[iVar52 /*16*/][iVar51 /*5*/][iVar50] || iParam0 != 3) || bParam2 == 0)
					{
						if (STREAMING::_IS_IMAP_ACTIVE(Var1[iVar52 /*16*/][iVar51 /*5*/][iVar50]))
						{
							STREAMING::_REMOVE_IMAP(Var1[iVar52 /*16*/][iVar51 /*5*/][iVar50]);
						}
					}
				}
				iVar50++;
			}
			iVar51++;
		}
		iVar52++;
	}
	sVar53[0] = "";
	sVar53[1] = "shb_p_ammo01";
	sVar53[2] = "shb_p_ammo02";
	sVar53[3] = "shb_p_ammo03";
	iVar58 = INTERIOR::GET_INTERIOR_AT_COORDS(1906.472f, -1862.567f, 46.362f);
	iVar50 = 0;
	while (iVar50 < 4)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar53[iVar50]) == 0)
		{
			if (((iVar50 + 1 == __LIB_6__::func_30(0) && iParam0 == 3) && bParam2) && Global_1357549.f_1495 & 8 != 0 == 0)
			{
				if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar58, sVar53[iVar50]) == 0)
				{
					INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar58, sVar53[iVar50], 0);
				}
			}
			else if (((iParam0 != 3 || iVar50 + 1 != __LIB_6__::func_30(0)) || bParam2 == 0) || Global_1357549.f_1495 & 8 != 0)
			{
				if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar58, sVar53[iVar50]))
				{
					INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar58, sVar53[iVar50], true);
				}
			}
		}
		iVar50++;
	}
}

void func_307(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;
	int iVar7;
	float fVar8;
	fVar8 = 25f;
	switch (iParam0)
	{
		case 2:
			iVar0 = joaat("PIROGUE");
			iVar1 = 4;
			vVar3 = { 623.54f, -1251.056f, 40.2502f };
			fVar6 = 137.4389f;
			iVar2 = 8194;
			break;
		case 3:
			iVar0 = joaat("PIROGUE");
			iVar1 = 4;
			vVar3 = { 1908.325f, -1816.88f, 40.456f };
			fVar6 = 251.3719f;
			iVar2 = 8194;
			break;
		default:
			iVar0 = 0;
			iVar1 = 100;
			vVar3 = { 0f, 0f, 0f };
			fVar6 = 0f;
			iVar2 = 0;
			break;
	}
	iVar7 = VEHICLE::GET_CLOSEST_VEHICLE(vVar3, fVar8, iVar0, iVar2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar7))
	{
		Global_1357549.f_1674 = iVar7;
		ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(iVar7, fVar6);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1357549.f_1674, true, true);
	}
	if (iParam1 >= iVar1 && iVar0 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1357549.f_1674) == 0 && ENTITY::DOES_ENTITY_EXIST(iVar7) == 0)
		{
			STREAMING::REQUEST_MODEL(iVar0, false);
			if (STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				Global_1357549.f_1674 = VEHICLE::CREATE_VEHICLE(iVar0, vVar3, fVar6, true, true, false, false);
			}
		}
		else
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		}
	}
	else
	{
		__LIB_6__::func_32();
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1357549.f_1674))
	{
		if (iParam0 == 3 || iParam0 == 2)
		{
			VEHICLE::SET_BOAT_ANCHOR(Global_1357549.f_1674, true);
			VEHICLE::_0x6B53F4B811E583D2(Global_1357549.f_1674, 1);
		}
		if (ENTITY::GET_ENTITY_MODEL(Global_1357549.f_1674) != iVar0)
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_1357549.f_1674));
		}
	}
}

bool func_308(float fParam0, bool bParam1)
{
	int iVar0;
	struct<16> Var1;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	if (fParam0 < 30f)
	{
		iVar0 = 0;
	}
	else if (fParam0 < 75f)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	Var1 = 3;
	Var1.f_1 = 3;
	Var1.f_1.f_1 = 4;
	Var1.f_1.f_1.f_5 = 4;
	Var1.f_1.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16 = 3;
	Var1.f_1.f_16.f_1 = 4;
	Var1.f_1.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16.f_16 = 3;
	Var1.f_1.f_16.f_16.f_1 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5.f_5 = 4;
	Var1[0 /*16*/][0 /*5*/][0] = __LIB_1__::func_976();
	Var1[1 /*16*/][0 /*5*/][0] = __LIB_1__::func_976();
	Var1[2 /*16*/][0 /*5*/][0] = __LIB_1__::func_976();
	Var1[0 /*16*/][0 /*5*/][1] = -710911638;
	Var1[1 /*16*/][0 /*5*/][1] = -710911638;
	Var1[2 /*16*/][0 /*5*/][1] = -710911638;
	Var1[0 /*16*/][0 /*5*/][2] = -942555699;
	Var1[1 /*16*/][0 /*5*/][2] = -942555699;
	Var1[2 /*16*/][0 /*5*/][2] = -942555699;
	Var1[0 /*16*/][0 /*5*/][3] = -760097927;
	Var1[1 /*16*/][0 /*5*/][3] = -760097927;
	Var1[2 /*16*/][0 /*5*/][3] = -760097927;
	Var1[0 /*16*/][1 /*5*/][0] = __LIB_1__::func_976();
	Var1[1 /*16*/][1 /*5*/][0] = __LIB_1__::func_976();
	Var1[2 /*16*/][1 /*5*/][0] = __LIB_1__::func_976();
	Var1[0 /*16*/][1 /*5*/][1] = 2047954825;
	Var1[1 /*16*/][1 /*5*/][1] = 2047954825;
	Var1[2 /*16*/][1 /*5*/][1] = 2047954825;
	Var1[0 /*16*/][1 /*5*/][2] = -2085723453;
	Var1[1 /*16*/][1 /*5*/][2] = -2085723453;
	Var1[2 /*16*/][1 /*5*/][2] = -2085723453;
	Var1[0 /*16*/][1 /*5*/][3] = 1434945142;
	Var1[1 /*16*/][1 /*5*/][3] = 1434945142;
	Var1[2 /*16*/][1 /*5*/][3] = 1434945142;
	Var1[0 /*16*/][2 /*5*/][0] = 1924209179;
	Var1[1 /*16*/][2 /*5*/][0] = 1924209179;
	Var1[2 /*16*/][2 /*5*/][0] = 1924209179;
	Var1[0 /*16*/][2 /*5*/][1] = -2084193212;
	Var1[1 /*16*/][2 /*5*/][1] = -2084193212;
	Var1[2 /*16*/][2 /*5*/][1] = -2084193212;
	Var1[0 /*16*/][2 /*5*/][2] = -838184752;
	Var1[1 /*16*/][2 /*5*/][2] = -838184752;
	Var1[2 /*16*/][2 /*5*/][2] = -838184752;
	Var1[0 /*16*/][2 /*5*/][3] = -1433138716;
	Var1[1 /*16*/][2 /*5*/][3] = -1433138716;
	Var1[2 /*16*/][2 /*5*/][3] = -1433138716;
	iVar50 = 0;
	iVar53 = 0;
	while (iVar53 < 3)
	{
		iVar52 = 0;
		while (iVar52 < 3)
		{
			iVar51 = 0;
			while (iVar51 < 4)
			{
				if (Var1[iVar53 /*16*/][iVar52 /*5*/][iVar51] != __LIB_1__::func_976())
				{
					if ((iVar53 == iVar0 && iVar51 + 1 == __LIB_6__::func_30(iVar52)) && bParam1)
					{
						if (STREAMING::_IS_IMAP_ACTIVE(Var1[iVar53 /*16*/][iVar52 /*5*/][iVar51]))
						{
							iVar50++;
						}
					}
				}
				iVar51++;
			}
			iVar52++;
		}
		iVar53++;
	}
	if (iVar50 == 3)
	{
		return true;
	}
	return false;
}

bool func_309(float fParam0, bool bParam1)
{
	int iVar0;
	struct<16> Var1;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	if (fParam0 < 30f)
	{
		iVar0 = 0;
	}
	else if (fParam0 < 75f)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	Var1 = 3;
	Var1.f_1 = 3;
	Var1.f_1.f_1 = 4;
	Var1.f_1.f_1.f_5 = 4;
	Var1.f_1.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16 = 3;
	Var1.f_1.f_16.f_1 = 4;
	Var1.f_1.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16.f_16 = 3;
	Var1.f_1.f_16.f_16.f_1 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5.f_5 = 4;
	Var1[0 /*16*/][0 /*5*/][0] = __LIB_1__::func_976();
	Var1[1 /*16*/][0 /*5*/][0] = __LIB_1__::func_976();
	Var1[2 /*16*/][0 /*5*/][0] = __LIB_1__::func_976();
	Var1[0 /*16*/][0 /*5*/][1] = __LIB_1__::func_976();
	Var1[1 /*16*/][0 /*5*/][1] = __LIB_1__::func_976();
	Var1[2 /*16*/][0 /*5*/][1] = __LIB_1__::func_976();
	Var1[0 /*16*/][0 /*5*/][2] = __LIB_1__::func_976();
	Var1[1 /*16*/][0 /*5*/][2] = __LIB_1__::func_976();
	Var1[2 /*16*/][0 /*5*/][2] = __LIB_1__::func_976();
	Var1[0 /*16*/][0 /*5*/][3] = __LIB_1__::func_976();
	Var1[1 /*16*/][0 /*5*/][3] = __LIB_1__::func_976();
	Var1[2 /*16*/][0 /*5*/][3] = __LIB_1__::func_976();
	Var1[0 /*16*/][1 /*5*/][0] = __LIB_1__::func_976();
	Var1[1 /*16*/][1 /*5*/][0] = __LIB_1__::func_976();
	Var1[2 /*16*/][1 /*5*/][0] = __LIB_1__::func_976();
	Var1[0 /*16*/][1 /*5*/][1] = 1155877447;
	Var1[1 /*16*/][1 /*5*/][1] = 1155877447;
	Var1[2 /*16*/][1 /*5*/][1] = 1155877447;
	Var1[0 /*16*/][1 /*5*/][2] = 928165666;
	Var1[1 /*16*/][1 /*5*/][2] = 928165666;
	Var1[2 /*16*/][1 /*5*/][2] = 928165666;
	Var1[0 /*16*/][1 /*5*/][3] = 2048341166;
	Var1[1 /*16*/][1 /*5*/][3] = 2048341166;
	Var1[2 /*16*/][1 /*5*/][3] = 2048341166;
	Var1[0 /*16*/][2 /*5*/][0] = -414377604;
	Var1[1 /*16*/][2 /*5*/][0] = -414377604;
	Var1[2 /*16*/][2 /*5*/][0] = -414377604;
	Var1[0 /*16*/][2 /*5*/][1] = -109593135;
	Var1[1 /*16*/][2 /*5*/][1] = -109593135;
	Var1[2 /*16*/][2 /*5*/][1] = -109593135;
	Var1[0 /*16*/][2 /*5*/][2] = 990134505;
	Var1[1 /*16*/][2 /*5*/][2] = 990134505;
	Var1[2 /*16*/][2 /*5*/][2] = 990134505;
	Var1[0 /*16*/][2 /*5*/][3] = 1279910772;
	Var1[1 /*16*/][2 /*5*/][3] = 1279910772;
	Var1[2 /*16*/][2 /*5*/][3] = 1279910772;
	iVar50 = 0;
	iVar53 = 0;
	while (iVar53 < 3)
	{
		iVar52 = 0;
		while (iVar52 < 3)
		{
			iVar51 = 0;
			while (iVar51 < 4)
			{
				if (Var1[iVar53 /*16*/][iVar52 /*5*/][iVar51] != __LIB_1__::func_976())
				{
					if ((iVar53 == iVar0 && iVar51 + 1 == __LIB_6__::func_30(iVar52)) && bParam1)
					{
						if (STREAMING::_IS_IMAP_ACTIVE(Var1[iVar53 /*16*/][iVar52 /*5*/][iVar51]))
						{
							iVar50++;
						}
					}
				}
				iVar51++;
			}
			iVar52++;
		}
		iVar53++;
	}
	if (iVar50 == 2)
	{
		return true;
	}
	return false;
}

bool func_310(float fParam0, bool bParam1)
{
	int iVar0;
	struct<16> Var1;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	if (fParam0 < 30f)
	{
		iVar0 = 0;
	}
	else if (fParam0 < 75f)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	Var1 = 3;
	Var1.f_1 = 3;
	Var1.f_1.f_1 = 4;
	Var1.f_1.f_1.f_5 = 4;
	Var1.f_1.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16 = 3;
	Var1.f_1.f_16.f_1 = 4;
	Var1.f_1.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16.f_16 = 3;
	Var1.f_1.f_16.f_16.f_1 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5.f_5 = 4;
	Var1[0 /*16*/][0 /*5*/][0] = __LIB_1__::func_976();
	Var1[1 /*16*/][0 /*5*/][0] = __LIB_1__::func_976();
	Var1[2 /*16*/][0 /*5*/][0] = __LIB_1__::func_976();
	Var1[0 /*16*/][0 /*5*/][1] = 626928579;
	Var1[1 /*16*/][0 /*5*/][1] = 626928579;
	Var1[2 /*16*/][0 /*5*/][1] = 626928579;
	Var1[0 /*16*/][0 /*5*/][2] = 313722477;
	Var1[1 /*16*/][0 /*5*/][2] = 313722477;
	Var1[2 /*16*/][0 /*5*/][2] = 313722477;
	Var1[0 /*16*/][0 /*5*/][3] = 976082270;
	Var1[1 /*16*/][0 /*5*/][3] = 976082270;
	Var1[2 /*16*/][0 /*5*/][3] = 976082270;
	Var1[0 /*16*/][1 /*5*/][0] = __LIB_1__::func_976();
	Var1[1 /*16*/][1 /*5*/][0] = __LIB_1__::func_976();
	Var1[2 /*16*/][1 /*5*/][0] = __LIB_1__::func_976();
	Var1[0 /*16*/][1 /*5*/][1] = 5585502;
	Var1[1 /*16*/][1 /*5*/][1] = 5585502;
	Var1[2 /*16*/][1 /*5*/][1] = 5585502;
	Var1[0 /*16*/][1 /*5*/][2] = -1362716862;
	Var1[1 /*16*/][1 /*5*/][2] = -1362716862;
	Var1[2 /*16*/][1 /*5*/][2] = -1362716862;
	Var1[0 /*16*/][1 /*5*/][3] = 482931525;
	Var1[1 /*16*/][1 /*5*/][3] = 482931525;
	Var1[2 /*16*/][1 /*5*/][3] = 482931525;
	Var1[0 /*16*/][2 /*5*/][0] = -462274808;
	Var1[1 /*16*/][2 /*5*/][0] = -462274808;
	Var1[2 /*16*/][2 /*5*/][0] = -462274808;
	Var1[0 /*16*/][2 /*5*/][1] = -1906732332;
	Var1[1 /*16*/][2 /*5*/][1] = -1906732332;
	Var1[2 /*16*/][2 /*5*/][1] = -1906732332;
	Var1[0 /*16*/][2 /*5*/][2] = -526829;
	Var1[1 /*16*/][2 /*5*/][2] = -526829;
	Var1[2 /*16*/][2 /*5*/][2] = -526829;
	Var1[0 /*16*/][2 /*5*/][3] = -1754422016;
	Var1[1 /*16*/][2 /*5*/][3] = -1754422016;
	Var1[2 /*16*/][2 /*5*/][3] = -1754422016;
	iVar50 = 0;
	iVar53 = 0;
	while (iVar53 < 3)
	{
		iVar52 = 0;
		while (iVar52 < 3)
		{
			iVar51 = 0;
			while (iVar51 < 4)
			{
				if (Var1[iVar53 /*16*/][iVar52 /*5*/][iVar51] != __LIB_1__::func_976())
				{
					if ((iVar53 == iVar0 && iVar51 + 1 == __LIB_6__::func_30(iVar52)) && bParam1)
					{
						if (STREAMING::_IS_IMAP_ACTIVE(Var1[iVar53 /*16*/][iVar52 /*5*/][iVar51]))
						{
							iVar50++;
						}
					}
				}
				iVar51++;
			}
			iVar52++;
		}
		iVar53++;
	}
	if (iVar50 == 3)
	{
		return true;
	}
	return false;
}

bool func_311(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	*bParam3 = 0;
	*iParam2 = 0;
	if (__LIB_3__::func_30(iParam0, iParam1))
	{
		*bParam3 = 1;
	}
	if (__LIB_3__::func_31(iParam0, iParam1, iParam2))
	{
		return true;
	}
	*iParam2 = -1;
	return *bParam3;
}

void func_312(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam1->f_1 == (uParam0[iVar0 /*8*/])->f_1 && uParam1->f_5[0] == (uParam0[iVar0 /*8*/])->f_5[0])
		{
			__LIB_1__::func_681(&((uParam0[iVar0 /*8*/])->f_3), 1);
		}
		iVar0++;
	}
}

void func_313(int iParam0, int iParam1)
{
	__LIB_1__::func_683(iParam0, iParam1);
}

int func_314(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (iParam0 == -15 || iParam0 == 0)
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_40(iParam0);
	switch (__LIB_0__::func_39(iParam0))
	{
		case 0:
			iVar1 = 11;
			break;
		case 1:
			iVar1 = 12;
			break;
		case 2:
			iVar1 = 1;
			break;
		case 3:
			iVar1 = 2;
			break;
		case 4:
			iVar1 = 3;
			break;
		case 5:
			iVar1 = 4;
			break;
		case 6:
			iVar1 = 5;
			break;
		case 7:
			iVar1 = 6;
			break;
		case 8:
			iVar1 = 7;
			break;
		case 9:
			iVar1 = 8;
			break;
		case 10:
			iVar1 = 9;
			break;
		case 11:
			iVar1 = 10;
			break;
	}
	iVar2 = __LIB_0__::func_710(iParam0);
	iVar3 = (iVar2 % 100);
	iVar4 = (iVar2 / 100);
	iVar5 = (((((iVar0 + (((13 * iVar1) - 1) / 5)) + iVar3) + (iVar3 / 4)) + (iVar4 / 4)) - (2 * iVar4));
	iVar6 = (iVar5 % 7);
	if (iVar6 < 0)
	{
		iVar6 += 7;
	}
	switch (iVar6)
	{
		case 0:
			iVar7 = 0;
			break;
		case 1:
			iVar7 = 1;
			break;
		case 2:
			iVar7 = 2;
			break;
		case 3:
			iVar7 = 3;
			break;
		case 4:
			iVar7 = 4;
			break;
		case 5:
			iVar7 = 5;
			break;
		case 6:
			iVar7 = 6;
			break;
	}
	return iVar7;
}

void func_315(var uParam0, var uParam1, vector3 vParam2, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	bool bVar0;
	vector3 vVar1;
	bVar0 = false;
	if (!__LIB_0__::func_86(uParam0->f_1606) && bParam8)
	{
		if (__LIB_0__::func_62(uParam0->f_1606, vParam2) < 16f)
		{
			bVar0 = true;
		}
		else
		{
			uParam0->f_1606 = { vParam2 };
			uParam0->f_1609 = iParam5;
		}
	}
	else
	{
		uParam0->f_1606 = { vParam2 };
		uParam0->f_1609 = iParam5;
	}
	if (!bVar0)
	{
		if (MAP::DOES_BLIP_EXIST((uParam1[uParam0->f_1609 /*8*/])->f_4))
		{
			MAP::REMOVE_BLIP(&((uParam1[uParam0->f_1609 /*8*/])->f_4));
		}
		(uParam1[iParam5 /*8*/])->f_4 = MAP::_BLIP_ADD_FOR_COORD(iParam6, vParam2);
		MAP::SET_BLIP_SPRITE((uParam1[iParam5 /*8*/])->f_4, iParam7, false);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE((uParam1[iParam5 /*8*/])->f_4, "BLIP_CAMP_CHORE");
		__LIB_5__::func_794((uParam1[iParam5 /*8*/])->f_4, __LIB_0__::func_61());
	}
	else
	{
		vVar1 = { __LIB_4__::func_147(vParam2, uParam0->f_1606) };
		if (MAP::DOES_BLIP_EXIST((uParam1[uParam0->f_1609 /*8*/])->f_4))
		{
			MAP::REMOVE_BLIP(&((uParam1[uParam0->f_1609 /*8*/])->f_4));
		}
		(uParam1[uParam0->f_1609 /*8*/])->f_4 = MAP::_BLIP_ADD_FOR_COORD(iParam6, vVar1);
		MAP::SET_BLIP_SPRITE((uParam1[uParam0->f_1609 /*8*/])->f_4, iParam7, false);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE((uParam1[uParam0->f_1609 /*8*/])->f_4, "BLIP_CAMP_CHORE");
		__LIB_5__::func_794((uParam1[uParam0->f_1609 /*8*/])->f_4, __LIB_0__::func_61());
	}
}

void func_316(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam1->f_1 == (uParam0[iVar0 /*8*/])->f_1 && uParam1->f_5[0] == (uParam0[iVar0 /*8*/])->f_5[0])
		{
			__LIB_1__::func_683(&((uParam0[iVar0 /*8*/])->f_3), 1);
		}
		iVar0++;
	}
}

void func_317(var uParam0, int iParam1, vector3 vParam2, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_5__::func_999(iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(*uParam0, vParam2.x);
	iVar1 = __LIB_5__::func_862(iVar0, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_1, MISC::_CREATE_VAR_STRING(0, vParam2.f_2[iVar1 /*4*/].f_2));
	if (vParam2.f_2[iVar1 /*4*/].f_3 > 0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, MISC::_CREATE_VAR_STRING(2, "LDGR_INFO_PRICE"));
		DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_3, vParam2.f_2[iVar1 /*4*/].f_3 * 100);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, "");
	}
}

void func_318(var uParam0, int iParam1, struct<25> Param2, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_5__::func_999(iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(*uParam0, Param2);
	iVar1 = (__LIB_5__::func_862(iVar0, 0) - 1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_1, MISC::_CREATE_VAR_STRING(2, "RESUPPLY_INFO_PANEL"));
	if (Param2.f_24[iVar1] > 0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, MISC::_CREATE_VAR_STRING(2, "LDGR_INFO_PRICE"));
		DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_3, Param2.f_24[iVar1] * 100);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, "");
		DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_3, 0);
	}
}

void func_319(var uParam0)
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
	{
		return;
	}
	UISTATEMACHINE::_UIFLOWBLOCK_ENTER(*uParam0, 0);
	UISTATEMACHINE::_UISTATEMACHINE_CREATE(__LIB_6__::func_0(), *uParam0);
}

void func_320(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	iVar0 = 20;
	iVar1 = 10;
	if (MISC::IS_PC_VERSION())
	{
		iVar0 = 10;
		iVar1 = 2;
	}
	__LIB_6__::func_2(uParam0, __LIB_5__::func_971(iParam1, bParam2), __LIB_6__::func_1(iParam1), 55f, iVar0, iVar1, 0.001f, 15f, 0, 0, -1082130432 /* Float: -1f */, 1, 0, 1044549468 /* Float: 0.19f */);
	uParam0->f_11 = iParam3;
}

bool func_321(int* iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { CAM::GET_CAM_COORD(iParam0->f_816) };
	vVar3 = { __LIB_5__::func_971(__LIB_0__::func_317(), 1) };
	if (vVar0.z == vVar3.z)
	{
		return true;
	}
	return false;
}

void func_322(var uParam0, bool bParam1)
{
	if (MISC::GET_GAME_TIMER() > uParam0->f_774)
	{
		if (uParam0->f_772)
		{
			__LIB_5__::func_974(uParam0, bParam1);
		}
		else
		{
			__LIB_5__::func_970(uParam0, bParam1);
		}
	}
}

bool func_323(vector3 vParam0)
{
	return __LIB_6__::func_8(vParam0, 2);
}

void func_324(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = __LIB_0__::func_821(iParam0);
	iVar1 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 == 1)
	{
		sVar2 = "HORSE_BONDED";
	}
	else if (iParam1 == iVar1)
	{
		sVar2 = "HORSE_BONDING_MAXIMUM";
	}
	else
	{
		sVar2 = "HORSE_BONDING_LEVELUP";
	}
	__LIB_5__::func_785(sVar2, MISC::_CREATE_VAR_STRING(2, "HORSE_BONDING_LEVEL", iParam1), joaat("HUD_TOASTS"), -961843223, -2, "HUD_Toast_Soundset", "horse_bonding", 0, 0, 1, 1);
}

bool func_325()
{
	int iVar0;
	iVar0 = __LIB_5__::func_988();
	if (MAP::DOES_BLIP_EXIST(iVar0))
	{
		return true;
	}
	return false;
}

void func_326()
{
	if (UISTATEMACHINE::_UISTATEMACHINE_EXISTS(__LIB_6__::func_0()))
	{
		UISTATEMACHINE::_UISTATEMACHINE_DESTROY(__LIB_6__::func_0());
	}
}

int func_327(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	var uVar9;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	Var0 = { __LIB_0__::func_949(0) };
	Var0.f_4 = __LIB_5__::func_998(iParam1);
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var5))
	{
		return 0;
	}
	uVar9 = INVENTORY::_0xC97E0D2302382211(__LIB_0__::func_162(0), &Var5, 0);
	return uVar9;
}

bool func_328(int iParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return false;
	}
	if (__LIB_3__::func_30(iParam0, iParam1))
	{
		return __LIB_3__::func_60(iParam0);
	}
	iVar0 = -1;
	if (__LIB_3__::func_31(iParam0, iParam1, &iVar0))
	{
		return __LIB_3__::func_33(iParam0, iVar0);
	}
	return false;
}

var func_329(int iParam0)
{
	if (iParam0 == 2)
	{
		return "dewclm";
	}
	if (iParam0 == 4)
	{
		return "gua";
	}
	return __LIB_0__::func_628(&(Global_1888801[__LIB_1__::func_953(iParam0) /*35*/].f_22));
}

int func_330(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	fVar3 = __LIB_5__::func_941();
	if (fVar3 < 30f)
	{
		iVar1 = 0;
	}
	else if (fVar3 < 75f)
	{
		iVar1 = 1;
	}
	else
	{
		iVar1 = 2;
	}
	if (bParam2)
	{
		iVar0 = (*iParam1)[iVar1];
	}
	else
	{
		iVar0 = (*iParam0)[iVar1];
	}
	if (STREAMING::_IS_IMAP_ACTIVE(iVar0) == 0)
	{
		STREAMING::_REQUEST_IMAP(iVar0);
	}
	else
	{
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar0 != (*iParam1)[iVar2])
			{
				if (STREAMING::_IS_IMAP_ACTIVE((*iParam1)[iVar2]))
				{
					STREAMING::_REMOVE_IMAP((*iParam1)[iVar2]);
				}
			}
			if (iVar0 != (*iParam0)[iVar2])
			{
				if (STREAMING::_IS_IMAP_ACTIVE((*iParam0)[iVar2]))
				{
					STREAMING::_REMOVE_IMAP((*iParam0)[iVar2]);
				}
			}
			__LIB_6__::func_33(iVar0);
			iVar2++;
		}
	}
	return iVar0;
}

void func_331(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	if (__LIB_3__::func_30(iParam0, iParam1))
	{
		__LIB_3__::func_76(iParam0, bParam2);
		return;
	}
	iVar0 = -1;
	if (__LIB_3__::func_31(iParam0, iParam1, &iVar0))
	{
		__LIB_3__::func_34(iParam0, iVar0, bParam2);
	}
}

int func_332(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!__LIB_6__::func_26(&(uParam0->f_5[iVar0 /*6*/])))
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

int func_333(var uParam0)
{
	int iVar0;
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(uParam0->f_4))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!__LIB_6__::func_27(&(uParam0->f_30[iVar0 /*4*/])))
			{
			}
			else
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

void func_334(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	vector3 vVar2[24];
	int iVar5;
	var uVar6;
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0, "Visible", 0);
	uParam1->f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0, "Title", 0);
	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0, "Carried");
	__LIB_6__::func_34(uVar0, &(uParam1->f_2));
	iVar5 = 0;
	while (iVar5 < 12)
	{
		StringCopy(&cVar2, "Contribution", 24);
		StringIntConCat(&cVar2, iVar5, 24);
		uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0, &cVar2);
		__LIB_6__::func_35(uVar1, &(uParam1->f_4[iVar5 /*4*/]));
		iVar5++;
	}
	uVar6 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0, "Total");
	__LIB_6__::func_34(uVar6, &(uParam1->f_53));
}

void func_335(var uParam0, var uParam1)
{
	var uVar0;
	vector3 vVar1[24];
	int iVar4;
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0, "Visible", 1);
	uParam1->f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0, "Title", 0);
	uParam1->f_2 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0, "SubTitle", 0);
	uParam1->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0, "SketchTexture", 0);
	uParam1->f_4 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0, "ShowRestock", 0);
	iVar4 = 0;
	while (iVar4 < 4)
	{
		StringCopy(&cVar1, "Upgrade", 24);
		StringIntConCat(&cVar1, iVar4, 24);
		uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0, &cVar1);
		__LIB_6__::func_36(uVar0, &(uParam1->f_5[iVar4 /*6*/]));
		StringCopy(&cVar1, "Restock", 24);
		StringIntConCat(&cVar1, iVar4, 24);
		uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0, &cVar1);
		__LIB_6__::func_37(uVar0, &(uParam1->f_30[iVar4 /*4*/]));
		iVar4++;
	}
}

void func_336(int iParam0, bool bParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_324 + iParam0) < 0)
	{
		return;
	}
	__LIB_6__::func_46((Global_40.f_4283.f_324 + iParam0));
	if (bParam1)
	{
		__LIB_0__::func_896(9, iParam0);
	}
}

void func_337(int iParam0)
{
	int iVar0;
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = (Global_40.f_4283.f_324 - iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	__LIB_6__::func_46(iVar0);
}

bool func_338(int iParam0)
{
	if (!__LIB_6__::func_51(iParam0))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_40.f_4283.f_307, __LIB_6__::func_52(iParam0, 1));
}

void func_339(int iParam0)
{
	if (!__LIB_6__::func_51(iParam0))
	{
		return;
	}
	MISC::SET_BIT(&(Global_40.f_4283.f_307), __LIB_6__::func_52(iParam0, 1));
}

void func_340()
{
	int iVar0;
	iVar0 = __LIB_0__::func_317();
	if (((iVar0 == 0 || iVar0 == 7) || iVar0 == 4) || iVar0 == 5)
	{
		if (!__LIB_5__::func_831(1024))
		{
			__LIB_1__::func_579(1024);
			__LIB_5__::func_548(-2147483648);
		}
		if (!__LIB_5__::func_831(64))
		{
			__LIB_1__::func_579(64);
			__LIB_5__::func_548(-2147483648);
		}
		if (iVar0 == 7)
		{
			if (!__LIB_1__::func_533(131072))
			{
				__LIB_5__::func_548(131072);
				__LIB_5__::func_548(-2147483648);
			}
		}
	}
	else if (__LIB_2__::func_776() && !__LIB_5__::func_832())
	{
		if (!__LIB_5__::func_831(64))
		{
			__LIB_1__::func_579(64);
			__LIB_5__::func_548(-2147483648);
		}
	}
	else if (__LIB_1__::func_533(-2147483648))
	{
		if (__LIB_5__::func_831(1024))
		{
			__LIB_5__::func_833(1024);
		}
		if (__LIB_5__::func_831(64))
		{
			__LIB_5__::func_833(64);
		}
		if (__LIB_1__::func_533(131072))
		{
			__LIB_5__::func_547(131072);
		}
		__LIB_5__::func_547(-2147483648);
	}
}

int func_341()
{
	return __LIB_6__::func_67(Local_18.f_46);
}

void func_342()
{
	vector3 vVar0;
	vector3 vVar3;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
	vVar0 = { __LIB_6__::func_71() };
	vVar0.f_2 = 0f;
	vVar0 = { vVar0 * Vector(20f, 20f, 20f) };
	vVar3 = { Global_36 - vVar0 };
	TASK::TASK_SMART_FLEE_COORD(Global_35, vVar3, 2000f, -1, 8388608, 1f);
}

void func_343(int iParam0)
{
	int iVar0;
	int iVar1[2];
	int iVar4;
	iVar1[0] = 0;
	iVar1[1] = 1;
	iVar4 = 0;
	while (iVar4 < iVar1)
	{
		iVar0 = __LIB_0__::func_398(iVar1[iVar4]);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VOLUME::_DOES_VOLUME_EXIST(iParam0)) && VOLUME::_IS_POSITION_INSIDE_VOLUME(iParam0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false)))
		{
			__LIB_6__::func_73(iVar1[iVar4], 1);
		}
		else
		{
			__LIB_6__::func_73(iVar1[iVar4], 0);
		}
		iVar4++;
	}
}

void func_344()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	int iVar6;
	if (((MISC::GET_FRAME_COUNT() % 15) != 0 || __LIB_5__::func_886(4)) || __LIB_2__::func_776())
	{
		return;
	}
	iVar0 = __LIB_0__::func_317();
	vVar1 = { __LIB_6__::func_70(iVar0) };
	fVar4 = 50f;
	if ((iVar0 == 7 || iVar0 == 8) || iVar0 == 3)
	{
		fVar4 = 150f;
	}
	iVar5 = PERSISTENCE::_0xBA2C49EA6A8D24FF(vVar1, fVar4, 0, 1, 0);
	iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar5);
	if (((!ENTITY::DOES_ENTITY_EXIST(iVar5) || !ENTITY::DOES_ENTITY_EXIST(iVar6)) || !MISC::_0x5170DDA6D63ACAAA(iVar6)) || ENTITY::IS_ENTITY_ON_SCREEN(iVar5))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(iVar6, 186, false);
	ENTITY::SET_ENTITY_COORDS(iVar5, 523.9103f, -6.4477f, 110.8692f, false, false, false, true);
	PERSISTENCE::_0x9D16896F0DBE78A2(523.9103f, -6.4477f, 110.8692f, 2.5f);
}

bool func_345(int iParam0)
{
	if (__LIB_6__::func_74())
	{
		return false;
	}
	if (AUDIO::_0x54B187F111D9C6F8(Global_35, 0))
	{
		return false;
	}
	if (__LIB_0__::func_272(__LIB_0__::func_271(Global_1357549.f_1659[iParam0]), 0))
	{
		if (PED::_0x9337183FDA2E9035(__LIB_0__::func_271(Global_1357549.f_1659[iParam0]), PLAYER::PLAYER_ID()) || PED::_0xA454D234E45BB6E5(__LIB_0__::func_271(Global_1357549.f_1659[iParam0]), PLAYER::PLAYER_ID()))
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	if (__LIB_3__::func_982())
	{
		return false;
	}
	return true;
}

void func_346()
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	sVar0 = __LIB_5__::func_892(__LIB_0__::func_317());
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	iVar1 = __LIB_5__::func_826();
	sVar2 = MISC::_0x2B6846401D68E563((BUILTIN::TO_FLOAT(iVar1) * 0.01f), 2);
	__LIB_1__::func_909(sVar0, MISC::_CREATE_VAR_STRING(10, "CAMP_INFO_FUNDS", __LIB_1__::func_925(sVar2, joaat("COLOR_PURE_WHITE"))), 4000, 0, 0, 0, 0, 1);
}

void func_347(int iParam0)
{
	if (!__LIB_0__::func_139(Local_18.f_3057[iParam0 /*21*/].f_1))
	{
		Local_18.f_3057[iParam0 /*21*/].f_1 = __LIB_6__::func_75(__LIB_5__::func_834(), joaat("INPUT_GAME_MENU_LEFT"), joaat("INPUT_GAME_MENU_RIGHT"), 0);
		__LIB_4__::func_12(Local_18.f_3057[iParam0 /*21*/].f_1, 799218720, 0, 1);
	}
}

void func_348(int iParam0)
{
	if (!__LIB_0__::func_139(Local_18.f_3057[iParam0 /*21*/].f_2))
	{
		Local_18.f_3057[iParam0 /*21*/].f_2 = __LIB_4__::func_450(__LIB_5__::func_896(), joaat("INPUT_FRONTEND_CANCEL"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
		__LIB_4__::func_12(Local_18.f_3057[iParam0 /*21*/].f_2, 799218720, 0, 1);
	}
}

void func_349(var uParam0)
{
	if (uParam0->f_3 != 0)
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_5))
		{
			if (CAM::IS_CAM_RENDERING(uParam0->f_5))
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			}
			CAM::DESTROY_CAM(uParam0->f_5, false);
		}
		if (__LIB_0__::func_139(uParam0->f_2))
		{
			__LIB_1__::func_748(&(uParam0->f_2), 1, 1);
		}
		if (__LIB_0__::func_139(uParam0->f_1))
		{
			__LIB_1__::func_748(&(uParam0->f_1), 1, 1);
		}
		if (__LIB_0__::func_139(*uParam0))
		{
			__LIB_1__::func_748(uParam0, 1, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			TASK::TASK_CLEAR_LOOK_AT(Global_35);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		}
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
		uParam0->f_3 = 0;
	}
}

void func_350(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (__LIB_6__::func_76(iParam0))
		{
			return;
		}
	}
	if (bParam2)
	{
		if (!__LIB_6__::func_77(iParam0, 4))
		{
			__LIB_6__::func_78(iParam0, 4);
		}
	}
	else
	{
		__LIB_6__::func_79(iParam0, 4);
	}
	__LIB_5__::func_898(iParam0);
}

int func_351(var uParam0, var uParam1, var uParam2, vector3 vParam3, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	if (__LIB_1__::func_992(Global_35, vParam3, 1) > 225f)
	{
		return 1;
	}
	if (*uParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (!DECORATOR::DECOR_EXIST_ON(*uParam1, "letter_item"))
			{
				*uParam0 = 0;
			}
			else
			{
				return 1;
			}
		}
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(*uParam2))
	{
		*uParam2 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vParam3, iParam8, 1f, 0, false);
		return 0;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		iVar0 = TASK::_GET_SCENARIO_POINT_ENTITY(*uParam2, "PrimaryItem");
		*uParam1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0);
		TXD::_REQUEST_STREAMED_TXD(iParam6, false);
		return 0;
	}
	else
	{
		if (!TXD::_HAS_STREAMED_TXD_LOADED(iParam6))
		{
			TXD::_REQUEST_STREAMED_TXD(iParam6, false);
			return 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (!DECORATOR::DECOR_EXIST_ON(*uParam1, "letter_item"))
			{
				DECORATOR::DECOR_SET_INT(*uParam1, "letter_item", iParam7);
				return 0;
			}
			else
			{
				OBJECT::_SET_APPLY_OBJECT_TXD(*uParam1, iParam6, 0, 0);
				TXD::_SET_STREAMED_TXD_AS_NO_LONGER_NEEDED(iParam6);
				*uParam0 = 1;
				return 1;
			}
		}
	}
	return 0;
}

int func_352(var uParam0, var uParam1, vector3 vParam2, int iParam5, int iParam6)
{
	if (__LIB_1__::func_992(Global_35, vParam2, 1) > 225f)
	{
		return 1;
	}
	if (*uParam0)
	{
		if (!DECORATOR::DECOR_EXIST_ON(*uParam1, "letter_item"))
		{
			*uParam0 = 0;
		}
		else
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		TXD::_REQUEST_STREAMED_TXD(iParam5, false);
		if (!TXD::_HAS_STREAMED_TXD_LOADED(iParam5))
		{
			return 0;
		}
		if (!DECORATOR::DECOR_EXIST_ON(*uParam1, "letter_item"))
		{
			DECORATOR::DECOR_SET_INT(*uParam1, "letter_item", iParam6);
			return 0;
		}
		else
		{
			OBJECT::_SET_APPLY_OBJECT_TXD(*uParam1, iParam5, 0, 0);
			TXD::_SET_STREAMED_TXD_AS_NO_LONGER_NEEDED(iParam5);
			*uParam0 = 1;
			return 1;
		}
	}
	return 0;
}

void func_353(int* iParam0, var uParam1)
{
	if (__LIB_0__::func_592() == 1)
	{
		__LIB_5__::func_914(&(iParam0->f_14), (uParam1[2 /*257*/])->f_255);
		__LIB_5__::func_914(&(iParam0->f_15), (uParam1[0 /*257*/])->f_255);
		__LIB_5__::func_914(&(iParam0->f_13), (uParam1[1 /*257*/])->f_255);
	}
	else
	{
		__LIB_6__::func_80(iParam0);
	}
}

void func_354(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, vector3 vParam9, int iParam12, int iParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	int iVar11;
	if (iParam2 < 0 || iParam2 > 4)
	{
		return;
	}
	iVar0 = __LIB_6__::func_81(iParam2, 1);
	iVar1 = __LIB_6__::func_81(iParam2, 0);
	bVar4 = (iParam2 == 0 || iParam2 == 2);
	if (iVar0 != 7)
	{
		if (iVar0 != -1)
		{
			__LIB_5__::func_915(&iVar2, vParam3, vParam6, vParam9, iVar0, iParam12, iParam13, bVar4);
			VOLUME::_0x6E0D3C3F828DA773(*uParam0, iVar2);
		}
	}
	if (iVar1 != 7)
	{
		if (iVar1 != -1)
		{
			__LIB_5__::func_915(&iVar3, vParam3, vParam6, vParam9, iVar1, iParam12, iParam13, bVar4);
			VOLUME::_0x6E0D3C3F828DA773(*uParam0, iVar3);
		}
	}
	if (*iParam1 != 0 && VOLUME::_DOES_VOLUME_EXIST(*iParam1))
	{
		fVar5 = __LIB_5__::func_916(iParam2);
		fVar6 = __LIB_0__::func_649((vParam9.x - fVar5), 0.1f);
		fVar7 = __LIB_0__::func_649((vParam9.y - fVar5), 0.1f);
		vVar8 = { fVar6, fVar7, vParam9.z };
		iVar11 = VOLUME::_CREATE_VOLUME_BY_HASH(iParam12, vParam3, vParam6, vVar8);
		VOLUME::_0x6E0D3C3F828DA773(*iParam1, iVar11);
	}
}

void func_355(var uParam0)
{
	if (__LIB_0__::func_139(uParam0->f_8))
	{
		__LIB_1__::func_748(&(uParam0->f_8), 1, 1);
	}
	MISC::CLEAR_BIT(&(uParam0->f_1), 3);
}

void func_356(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_139(uParam0->f_10))
	{
		__LIB_1__::func_748(&(uParam0->f_10), 1, 1);
	}
	if (__LIB_0__::func_139(uParam0->f_11))
	{
		__LIB_1__::func_748(&(uParam0->f_11), 1, 1);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_0__::func_139(uParam0->f_12[iVar0]))
		{
			__LIB_1__::func_748(&(uParam0->f_12[iVar0]), 1, 1);
		}
		iVar0++;
	}
	if (__LIB_0__::func_139(uParam0->f_9))
	{
		__LIB_1__::func_748(&(uParam0->f_9), 1, 1);
	}
	MISC::CLEAR_BIT(&(uParam0->f_1), 5);
}

void func_357()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1934765.f_275[iVar0 /*2*/] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			Global_1934765.f_286 = (Global_1934765.f_286 + Global_1934765.f_275[iVar0 /*2*/].f_1);
			Global_1934765.f_275[iVar0 /*2*/] = 0;
			Global_1934765.f_275[iVar0 /*2*/].f_1 = 0;
			__LIB_6__::func_85();
			return;
		}
		iVar0++;
	}
}

int func_358()
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	struct<4> Var7;
	iVar0 = __LIB_6__::func_131();
	iVar1 = __LIB_0__::func_553(iVar0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return 0;
	}
	if (!__LIB_0__::func_144(iVar1, 0))
	{
		return 0;
	}
	if (!__LIB_0__::func_831(iVar1))
	{
		return 0;
	}
	Var2 = { __LIB_0__::func_949(0) };
	Var2.f_4 = -352578118;
	Var7 = { __LIB_0__::func_429(iVar1, Var2, Var2.f_4, 0) };
	if (!__LIB_0__::func_939(iVar1, &Var7, &Var2, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_359(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
	if (__LIB_0__::func_139(iParam0->f_6))
	{
		__LIB_1__::func_748(&(iParam0->f_6), 1, 1);
	}
	if (__LIB_0__::func_139(iParam0->f_1))
	{
		__LIB_1__::func_748(&(iParam0->f_1), 1, 1);
	}
}

int func_360(var uParam0)
{
	char* sVar0;
	int iVar1;
	sVar0 = __LIB_0__::func_67(__LIB_5__::func_978(0));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return __LIB_2__::func_513(MISC::_CREATE_VAR_STRING(10, "CAMP_HITCH_MAIN_NAME", sVar0), joaat("INPUT_SADDLE_TRANSFER"), uParam0->f_5, 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
	}
	iVar1 = __LIB_0__::func_809(0);
	sVar0 = HUD::_GET_LABEL_TEXT_BY_HASH(MISC::GET_HASH_KEY(__LIB_5__::func_979(iVar1)));
	return __LIB_2__::func_513(MISC::_CREATE_VAR_STRING(10, "CAMP_HITCH_STABLE", sVar0), joaat("INPUT_SADDLE_TRANSFER"), uParam0->f_5, 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
}

void func_361(int iParam0, int iParam1, var uParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	sVar0 = __LIB_0__::func_67(__LIB_5__::func_978(iParam0));
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		iVar1 = __LIB_0__::func_809(iParam0);
		sVar0 = HUD::_GET_LABEL_TEXT_BY_HASH(MISC::GET_HASH_KEY(__LIB_5__::func_979(iVar1)));
	}
	iVar2 = __LIB_5__::func_982(iParam0);
	if (iVar2 == -1 || iVar2 == 3)
	{
		return;
	}
	uParam2->f_12[iVar2] = __LIB_2__::func_513(MISC::_CREATE_VAR_STRING(10, "CAMP_HITCH_STABLE", sVar0), iParam1, uParam2->f_5, 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
	HUD::_UIPROMPT_SET_GROUP(__LIB_3__::func_66(uParam2->f_12[iVar2]), 1842627646, 0);
}

bool func_362()
{
	if (!__LIB_6__::func_83())
	{
		return false;
	}
	if (__LIB_1__::func_52(0))
	{
		return false;
	}
	if (__LIB_1__::func_53(0))
	{
		return false;
	}
	return true;
}

void func_363(var uParam0)
{
	uParam0->f_531[1 /*30*/] = 1259027903; /* GXTEntry: "Strauss\'s Medicine Wagon" */
	uParam0->f_531[1 /*30*/].f_1 = 0;
	uParam0->f_531[1 /*30*/].f_2[0 /*4*/] = -371380166; /* GXTEntry: "Basics" */
	uParam0->f_531[1 /*30*/].f_2[0 /*4*/].f_1 = 1185646829; /* GXTEntry: "- Basic liquor, health cures & bitters." */
	uParam0->f_531[1 /*30*/].f_2[0 /*4*/].f_2 = 0;
	uParam0->f_531[1 /*30*/].f_2[0 /*4*/].f_3 = -1;
	uParam0->f_531[1 /*30*/].f_2[1 /*4*/] = -681440444; /* GXTEntry: "Sharpen the senses" */
	uParam0->f_531[1 /*30*/].f_2[1 /*4*/].f_1 = 2020699256; /* GXTEntry: "- Snake oil & potent bitters." */
	uParam0->f_531[1 /*30*/].f_2[1 /*4*/].f_2 = 525024705; /* GXTEntry: "Increases total supplies, includes snake oil to restore Dead Eye and bitters to r" +
    "estore Stamina." */
	uParam0->f_531[1 /*30*/].f_2[1 /*4*/].f_3 = __LIB_6__::func_101(30);
	uParam0->f_531[1 /*30*/].f_2[2 /*4*/] = 125037415; /* GXTEntry: "Something with kick" */
	uParam0->f_531[1 /*30*/].f_2[2 /*4*/].f_1 = -1412836568; /* GXTEntry: "- Tonics & premium liquor." */
	uParam0->f_531[1 /*30*/].f_2[2 /*4*/].f_2 = 682446981; /* GXTEntry: "Increases total supplies, includes tonics to refill all stats as well as higher q" +
    "uality liquors." */
	uParam0->f_531[1 /*30*/].f_2[2 /*4*/].f_3 = __LIB_6__::func_101(50);
	uParam0->f_531[1 /*30*/].f_2[3 /*4*/] = -105033734; /* GXTEntry: "The good stuff" */
	uParam0->f_531[1 /*30*/].f_2[3 /*4*/].f_1 = 1568913053; /* GXTEntry: "- Potent health cures & tonics." */
	uParam0->f_531[1 /*30*/].f_2[3 /*4*/].f_2 = 1181715465; /* GXTEntry: "Increases total supplies, includes more effective healing items and tonics." */
	uParam0->f_531[1 /*30*/].f_2[3 /*4*/].f_3 = __LIB_6__::func_101(75);
	uParam0->f_531[1 /*30*/].f_2[4 /*4*/] = 0;
	uParam0->f_531[1 /*30*/].f_2[4 /*4*/].f_1 = 0;
	uParam0->f_531[1 /*30*/].f_2[4 /*4*/].f_2 = 2099654106; /* GXTEntry: "This area of camp is fully upgraded." */
	uParam0->f_531[1 /*30*/].f_2[4 /*4*/].f_3 = -1;
	uParam0->f_531[1 /*30*/].f_23 = 1;
	uParam0->f_531[1 /*30*/].f_24[0] = __LIB_6__::func_101(15);
	uParam0->f_531[1 /*30*/].f_24[1] = __LIB_6__::func_101(25);
	uParam0->f_531[1 /*30*/].f_24[2] = __LIB_6__::func_101(45);
	uParam0->f_531[1 /*30*/].f_24[3] = __LIB_6__::func_101(75);
	uParam0->f_531[0 /*30*/] = 1069539174; /* GXTEntry: "Pearson\'s Provisions Wagon" */
	uParam0->f_531[0 /*30*/].f_1 = 0;
	uParam0->f_531[0 /*30*/].f_2[0 /*4*/] = -1163134641; /* GXTEntry: "Essentials" */
	uParam0->f_531[0 /*30*/].f_2[0 /*4*/].f_1 = -57804606; /* GXTEntry: "- The basics, bread & biscuits." */
	uParam0->f_531[0 /*30*/].f_2[0 /*4*/].f_2 = 0;
	uParam0->f_531[0 /*30*/].f_2[0 /*4*/].f_3 = -1;
	uParam0->f_531[0 /*30*/].f_2[1 /*4*/] = -1946608662; /* GXTEntry: "Less bland" */
	uParam0->f_531[0 /*30*/].f_2[1 /*4*/].f_1 = 926019081; /* GXTEntry: "- Fresh fruit & basic canned goods." */
	uParam0->f_531[0 /*30*/].f_2[1 /*4*/].f_2 = 482064073; /* GXTEntry: "Increases total provisions, adds fresh fruit and basic canned goods." */
	uParam0->f_531[0 /*30*/].f_2[1 /*4*/].f_3 = __LIB_6__::func_101(30);
	uParam0->f_531[0 /*30*/].f_2[2 /*4*/] = -1651982583; /* GXTEntry: "Some real variety" */
	uParam0->f_531[0 /*30*/].f_2[2 /*4*/].f_1 = 552518019; /* GXTEntry: "- Chewing tobacco & premium canned goods." */
	uParam0->f_531[0 /*30*/].f_2[2 /*4*/].f_2 = 905767243; /* GXTEntry: "Increases total provisions, adds chewing tobacco and premium canned goods." */
	uParam0->f_531[0 /*30*/].f_2[2 /*4*/].f_3 = __LIB_6__::func_101(45);
	uParam0->f_531[0 /*30*/].f_2[3 /*4*/] = -542883057; /* GXTEntry: "Treat ourselves!" */
	uParam0->f_531[0 /*30*/].f_2[3 /*4*/].f_1 = 1002010396; /* GXTEntry: "- Cocaine chewing gum & assorted sweets." */
	uParam0->f_531[0 /*30*/].f_2[3 /*4*/].f_2 = 432025806; /* GXTEntry: "Increases total provisions, adds cocaine chewing gum and sweets." */
	uParam0->f_531[0 /*30*/].f_2[3 /*4*/].f_3 = __LIB_6__::func_101(55);
	uParam0->f_531[0 /*30*/].f_2[4 /*4*/] = 0;
	uParam0->f_531[0 /*30*/].f_2[4 /*4*/].f_1 = 0;
	uParam0->f_531[0 /*30*/].f_2[4 /*4*/].f_2 = 2099654106; /* GXTEntry: "This area of camp is fully upgraded." */
	uParam0->f_531[0 /*30*/].f_2[4 /*4*/].f_3 = -1;
	uParam0->f_531[0 /*30*/].f_23 = 1;
	uParam0->f_531[0 /*30*/].f_24[0] = __LIB_6__::func_101(15);
	uParam0->f_531[0 /*30*/].f_24[1] = __LIB_6__::func_101(25);
	uParam0->f_531[0 /*30*/].f_24[2] = __LIB_6__::func_101(40);
	uParam0->f_531[0 /*30*/].f_24[3] = __LIB_6__::func_101(50);
	uParam0->f_531[2 /*30*/] = -2146471150; /* GXTEntry: "Arthur\'s Munitions" */
	uParam0->f_531[2 /*30*/].f_1 = 0;
	uParam0->f_531[2 /*30*/].f_2[0 /*4*/] = 1973763900; /* GXTEntry: "Start simple" */
	uParam0->f_531[2 /*30*/].f_2[0 /*4*/].f_1 = 1507459390; /* GXTEntry: "- Revolver & pistol ammo." */
	uParam0->f_531[2 /*30*/].f_2[0 /*4*/].f_2 = 0;
	uParam0->f_531[2 /*30*/].f_2[0 /*4*/].f_3 = -1;
	uParam0->f_531[2 /*30*/].f_2[1 /*4*/] = 1201857340; /* GXTEntry: "Improve our offense" */
	uParam0->f_531[2 /*30*/].f_2[1 /*4*/].f_1 = 1813751233; /* GXTEntry: "- Repeater ammo & arrows." */
	uParam0->f_531[2 /*30*/].f_2[1 /*4*/].f_2 = -1620504213; /* GXTEntry: "Increases armory supplies, adds repeater ammo and arrows." */
	uParam0->f_531[2 /*30*/].f_2[1 /*4*/].f_3 = __LIB_6__::func_101(60);
	uParam0->f_531[2 /*30*/].f_2[2 /*4*/] = 374407321; /* GXTEntry: "Some real firepower" */
	uParam0->f_531[2 /*30*/].f_2[2 /*4*/].f_1 = 2101200901; /* GXTEntry: "- Throwing knives, shotgun & rifle ammo." */
	uParam0->f_531[2 /*30*/].f_2[2 /*4*/].f_2 = -1314015756; /* GXTEntry: "Increases armory supplies, adds throwing knives, shotgun and rifle ammo." */
	uParam0->f_531[2 /*30*/].f_2[2 /*4*/].f_3 = __LIB_6__::func_101(90);
	uParam0->f_531[2 /*30*/].f_2[3 /*4*/] = 679585018; /* GXTEntry: "Let\'s have some fun" */
	uParam0->f_531[2 /*30*/].f_2[3 /*4*/].f_1 = -1884656418; /* GXTEntry: "- Fire bottles & high velocity repeater ammo." */
	uParam0->f_531[2 /*30*/].f_2[3 /*4*/].f_2 = 2137248097;
	uParam0->f_531[2 /*30*/].f_2[3 /*4*/].f_3 = __LIB_6__::func_101(110);
	uParam0->f_531[2 /*30*/].f_2[4 /*4*/] = 0;
	uParam0->f_531[2 /*30*/].f_2[4 /*4*/].f_1 = 0;
	uParam0->f_531[2 /*30*/].f_2[4 /*4*/].f_2 = 2099654106; /* GXTEntry: "This area of camp is fully upgraded." */
	uParam0->f_531[2 /*30*/].f_2[4 /*4*/].f_3 = -1;
	uParam0->f_531[2 /*30*/].f_23 = 1;
	uParam0->f_531[2 /*30*/].f_24[0] = __LIB_6__::func_101(8);
	uParam0->f_531[2 /*30*/].f_24[1] = __LIB_6__::func_101(10);
	uParam0->f_531[2 /*30*/].f_24[2] = __LIB_6__::func_101(15);
	uParam0->f_531[2 /*30*/].f_24[3] = __LIB_6__::func_101(20);
	uParam0->f_531[3 /*30*/] = -2087690276; /* GXTEntry: "Camp Lodging" */
	uParam0->f_531[3 /*30*/].f_1 = 0;
	uParam0->f_531[3 /*30*/].f_2[0 /*4*/] = 840935239; /* GXTEntry: "Bare-bone shelter" */
	uParam0->f_531[3 /*30*/].f_2[0 /*4*/].f_1 = 1470166745; /* GXTEntry: "- Basic canvas. Old fur for warmth." */
	uParam0->f_531[3 /*30*/].f_2[0 /*4*/].f_2 = 0;
	uParam0->f_531[3 /*30*/].f_2[0 /*4*/].f_3 = -1;
	uParam0->f_531[3 /*30*/].f_2[1 /*4*/] = 2020258780; /* GXTEntry: "First things first" */
	uParam0->f_531[3 /*30*/].f_2[1 /*4*/].f_1 = 1123011959; /* GXTEntry: "- Dutch wants something comfier." */
	uParam0->f_531[3 /*30*/].f_2[1 /*4*/].f_2 = 548799892; /* GXTEntry: "Upgrade Dutch\'s lodging. Encourages others to donate." */
	uParam0->f_531[3 /*30*/].f_2[1 /*4*/].f_3 = __LIB_6__::func_101(220);
	uParam0->f_531[3 /*30*/].f_2[2 /*4*/] = 1187500183; /* GXTEntry: "Next in line" */
	uParam0->f_531[3 /*30*/].f_2[2 /*4*/].f_1 = 742826021; /* GXTEntry: "- Arthur wants a map to help plan journeys." */
	uParam0->f_531[3 /*30*/].f_2[2 /*4*/].f_2 = 1316282641; /* GXTEntry: "Upgrade Arthur\'s lodging. Unlocks the fast travel map, allowing you to quickly tr" +
    "avel to previously discovered locations. Also unlocks grooming supplies." */
	uParam0->f_531[3 /*30*/].f_2[2 /*4*/].f_3 = __LIB_6__::func_101(325);
	uParam0->f_531[3 /*30*/].f_2[3 /*4*/] = 181229727; /* GXTEntry: "For everyone!" */
	uParam0->f_531[3 /*30*/].f_2[3 /*4*/].f_1 = -1952031021; /* GXTEntry: "- Improve the rest of the tents in camp." */
	uParam0->f_531[3 /*30*/].f_2[3 /*4*/].f_2 = -2076291933; /* GXTEntry: "Upgrade all remaining lodgings. Improves overall mood of camp." */
	uParam0->f_531[3 /*30*/].f_2[3 /*4*/].f_3 = __LIB_6__::func_101(300);
	uParam0->f_531[3 /*30*/].f_2[4 /*4*/] = 0;
	uParam0->f_531[3 /*30*/].f_2[4 /*4*/].f_1 = 0;
	uParam0->f_531[3 /*30*/].f_2[4 /*4*/].f_2 = 2099654106; /* GXTEntry: "This area of camp is fully upgraded." */
	uParam0->f_531[3 /*30*/].f_2[4 /*4*/].f_3 = -1;
	uParam0->f_531[3 /*30*/].f_23 = 0;
	uParam0->f_531[4 /*30*/] = 2108789685; /* GXTEntry: "Camp Boat" */
	uParam0->f_531[4 /*30*/].f_1 = 0;
	uParam0->f_531[4 /*30*/].f_2[1 /*4*/].f_1 = -912712840; /* GXTEntry: "- Met a traveler selling an old boat. Useful?" */
	uParam0->f_531[4 /*30*/].f_2[1 /*4*/].f_2 = -1497934411; /* GXTEntry: "Buy a boat for the camp. Easy transport and access to fishing holes." */
	uParam0->f_531[4 /*30*/].f_2[1 /*4*/].f_3 = __LIB_6__::func_101(450);
	uParam0->f_531[4 /*30*/].f_2[2 /*4*/].f_1 = 0;
	uParam0->f_531[4 /*30*/].f_2[2 /*4*/].f_2 = 2099654106; /* GXTEntry: "This area of camp is fully upgraded." */
	uParam0->f_531[4 /*30*/].f_2[2 /*4*/].f_3 = -1;
	uParam0->f_531[4 /*30*/].f_23 = 0;
	uParam0->f_531[5 /*30*/] = -480748016; /* GXTEntry: "Chicken Coop" */
	uParam0->f_531[5 /*30*/].f_1 = 0;
	uParam0->f_531[5 /*30*/].f_2[1 /*4*/].f_1 = -1503751759; /* GXTEntry: "- Some local farms are selling off old coops." */
	uParam0->f_531[5 /*30*/].f_2[1 /*4*/].f_2 = -492500419; /* GXTEntry: "Buy a chicken coop for camp. Add nutrition to all camp stews. Dead Eye boost when" +
    " consuming stew." */
	uParam0->f_531[5 /*30*/].f_2[1 /*4*/].f_3 = __LIB_6__::func_101(175);
	uParam0->f_531[5 /*30*/].f_2[2 /*4*/].f_1 = 0;
	uParam0->f_531[5 /*30*/].f_2[2 /*4*/].f_2 = 2099654106; /* GXTEntry: "This area of camp is fully upgraded." */
	uParam0->f_531[5 /*30*/].f_2[2 /*4*/].f_3 = -1;
	uParam0->f_531[5 /*30*/].f_23 = 0;
	uParam0->f_531[6 /*30*/] = 2011014118; /* GXTEntry: "Leather Working Tools" */
	uParam0->f_531[6 /*30*/].f_1 = 0;
	uParam0->f_531[6 /*30*/].f_2[1 /*4*/].f_1 = 2107034732; /* GXTEntry: "- If we get Pearson better tools he can make extra gear." */
	uParam0->f_531[6 /*30*/].f_2[1 /*4*/].f_2 = 351632167; /* GXTEntry: "Buy some leather working tools for Pearson. Gain access to extra crafting options" +
    "." */
	uParam0->f_531[6 /*30*/].f_2[1 /*4*/].f_3 = __LIB_6__::func_101(225);
	uParam0->f_531[6 /*30*/].f_2[2 /*4*/].f_1 = 0;
	uParam0->f_531[6 /*30*/].f_2[2 /*4*/].f_2 = 2099654106; /* GXTEntry: "This area of camp is fully upgraded." */
	uParam0->f_531[6 /*30*/].f_2[2 /*4*/].f_3 = -1;
	uParam0->f_531[6 /*30*/].f_23 = 0;
	uParam0->f_531[7 /*30*/] = -594525626; /* GXTEntry: "Camp Horse Station" */
	uParam0->f_531[7 /*30*/].f_1 = 0;
	uParam0->f_531[7 /*30*/].f_2[1 /*4*/].f_1 = 2006016232; /* GXTEntry: "- It would be great to have more room to hitch." */
	uParam0->f_531[7 /*30*/].f_2[1 /*4*/].f_2 = 385851330; /* GXTEntry: "Buy a horse station. A place to retrieve horses from the stables or recall your m" +
    "ain horse to camp." */
	uParam0->f_531[7 /*30*/].f_2[1 /*4*/].f_3 = __LIB_6__::func_101(300);
	uParam0->f_531[7 /*30*/].f_2[2 /*4*/].f_1 = 0;
	uParam0->f_531[7 /*30*/].f_2[2 /*4*/].f_2 = 2099654106; /* GXTEntry: "This area of camp is fully upgraded." */
	uParam0->f_531[7 /*30*/].f_2[2 /*4*/].f_3 = -1;
	uParam0->f_531[7 /*30*/].f_23 = 0;
}

bool func_364(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	if (!__LIB_0__::func_31(iParam0))
	{
		return false;
	}
	if (bParam1 && !__LIB_0__::func_903(iParam0))
	{
		return false;
	}
	if (iParam2 == -1)
	{
		return true;
	}
	iVar0 = iParam2;
	if (__LIB_0__::func_27(iVar0, 1))
	{
		if (__LIB_5__::func_995(iParam0) && !__LIB_6__::func_102(iParam0))
		{
			return true;
		}
	}
	if (__LIB_0__::func_27(iVar0, 2))
	{
		if (!__LIB_5__::func_995(iParam0))
		{
			return true;
		}
	}
	if (__LIB_0__::func_27(iVar0, 4))
	{
		if (__LIB_6__::func_102(iParam0))
		{
			return true;
		}
	}
	if (__LIB_0__::func_27(iVar0, 8))
	{
		if (__LIB_5__::func_996(iParam0) && !__LIB_6__::func_102(iParam0))
		{
			return true;
		}
	}
	if (__LIB_0__::func_27(iVar0, 16))
	{
		if (!__LIB_5__::func_996(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_365(int iParam0, var uParam1)
{
	vector3 vVar0;
	vVar0 = { __LIB_6__::func_103(uParam1->f_3, uParam1->f_3.f_3, uParam1->f_9[iParam0 /*9*/].f_2) };
	uParam1->f_9[iParam0 /*9*/] = OBJECT::CREATE_OBJECT(uParam1->f_9[iParam0 /*9*/].f_1, vVar0, false, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(uParam1->f_9[iParam0 /*9*/], uParam1->f_9[iParam0 /*9*/].f_5, 2, true);
	ENTITY::SET_ENTITY_HAS_GRAVITY(uParam1->f_9[iParam0 /*9*/], true);
	ENTITY::SET_ENTITY_COLLISION(uParam1->f_9[iParam0 /*9*/], true, false);
	__LIB_5__::func_997(iParam0, uParam1);
	MISC::SET_BIT(&(uParam1->f_255), iParam0);
}

bool func_366()
{
	if ((Global_16 && __LIB_0__::func_317() == 3) && __LIB_2__::func_774(33) == 0)
	{
		return true;
	}
	return false;
}

bool func_367(int* iParam0, bool bParam1)
{
	if (__LIB_1__::func_44(Global_1347702[61 /*49*/].f_15))
	{
		if (bParam1)
		{
			if (__LIB_5__::func_826() < iParam0->f_5)
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

void func_368(var uParam0)
{
	if (UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("SHOP_BROWSING")))
	{
		UIAPPS::_CLOSE_APP_BY_HASH(joaat("SHOP_BROWSING"));
	}
	if (__LIB_0__::func_139(uParam0->f_1))
	{
		__LIB_1__::func_748(&(uParam0->f_1), 1, 1);
	}
	uParam0->f_772 = 0;
	uParam0->f_773 = 0;
}

int func_369()
{
	int iVar0;
	if (__LIB_6__::func_148())
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-850189983))
		{
			STREAMING::_REMOVE_IMAP(-850189983);
		}
		iVar0 = -172246728;
	}
	else
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-172246728))
		{
			STREAMING::_REMOVE_IMAP(-172246728);
		}
		iVar0 = -850189983;
	}
	return iVar0;
}

bool func_370(int iParam0)
{
	switch (Global_1357549.f_1675[iParam0 /*5*/].f_2)
	{
		case 0:
			if (!PERSCHAR::_0x800DF3FC913355F3(Global_1357549.f_1675[iParam0 /*5*/].f_4))
			{
				Global_1357549.f_1675[iParam0 /*5*/].f_4 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(Global_1357549.f_1675[iParam0 /*5*/]);
				PERSCHAR::_0x187D65F3AEC5D679(Global_1357549.f_1675[iParam0 /*5*/], __LIB_6__::func_13(__LIB_0__::func_317()));
				PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1357549.f_1675[iParam0 /*5*/].f_4);
				return false;
			}
			Global_1357549.f_1675[iParam0 /*5*/].f_2 = 1;
		case 1:
			if (!PERSCHAR::_0xA8120EBEAF290C7A(Global_1357549.f_1675[iParam0 /*5*/].f_4))
			{
				return false;
			}
			if (PERSCHAR::_0xEB98B38CA60742D7(Global_1357549.f_1675[iParam0 /*5*/].f_4))
			{
				PERSCHAR::_0x49A8C2CD97815215(Global_1357549.f_1675[iParam0 /*5*/].f_4);
			}
			if (__LIB_0__::func_272(Global_1357549.f_1675[iParam0 /*5*/].f_3, 0))
			{
				Global_1359489.f_12 = 1;
				Global_1357549.f_1675[iParam0 /*5*/].f_2 = 2;
			}
			else
			{
				if (!Global_1359489.f_12)
				{
					PERSCHAR::_0x4F81EAD1DE8FA19B(Global_1357549.f_1675[iParam0 /*5*/].f_4);
					Global_1357549.f_1675[iParam0 /*5*/].f_3 = PERSCHAR::_0x0CADC3A977997472(Global_1357549.f_1675[iParam0 /*5*/].f_4, 0);
					PERSCHAR::_0x6759BEE6762E140B(Global_1357549.f_1675[iParam0 /*5*/].f_4);
				}
				return false;
			}
		case 2:
			__LIB_6__::func_106(Global_1357549.f_1675[iParam0 /*5*/].f_3);
			Global_1357549.f_1675[iParam0 /*5*/].f_2 = 3;
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

void func_371(int* iParam0)
{
	if (Global_1357549.f_1894 > 0)
	{
		if (!__LIB_0__::func_139(iParam0->f_8))
		{
			iParam0->f_8 = __LIB_4__::func_450("SHOP_PREV_PAGE", joaat("INPUT_GAME_MENU_TAB_LEFT"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			__LIB_4__::func_12(iParam0->f_8, -2019190071, 0, 1);
		}
	}
	else
	{
		__LIB_1__::func_748(&(iParam0->f_8), 1, 1);
	}
	if (Global_1357549.f_1894 < 3)
	{
		if (!__LIB_0__::func_139(iParam0->f_7))
		{
			iParam0->f_7 = __LIB_4__::func_450("SHOP_NEXT_PAGE", joaat("INPUT_GAME_MENU_TAB_RIGHT"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			__LIB_4__::func_12(iParam0->f_7, -2019190071, 0, 1);
		}
	}
	else
	{
		__LIB_1__::func_748(&(iParam0->f_7), 1, 1);
	}
	if (__LIB_0__::func_486(iParam0->f_10, 1) > 0f)
	{
		if (__LIB_0__::func_572(iParam0->f_8, 1))
		{
			__LIB_1__::func_221(iParam0->f_8, 0, 0);
		}
		if (__LIB_0__::func_572(iParam0->f_7, 1))
		{
			__LIB_1__::func_221(iParam0->f_7, 0, 0);
		}
	}
	else
	{
		if (__LIB_0__::func_139(iParam0->f_8) && !__LIB_0__::func_572(iParam0->f_8, 0))
		{
			__LIB_1__::func_221(iParam0->f_8, 1, 0);
		}
		if (__LIB_0__::func_139(iParam0->f_7) && !__LIB_0__::func_572(iParam0->f_7, 0))
		{
			__LIB_1__::func_221(iParam0->f_7, 1, 0);
		}
	}
}

void func_372(int* iParam0)
{
	__LIB_1__::func_748(&(iParam0->f_8), 1, 1);
	__LIB_1__::func_748(&(iParam0->f_7), 1, 1);
}

void func_373(var uParam0)
{
	if (__LIB_0__::func_139(uParam0->f_1))
	{
		__LIB_1__::func_748(&(uParam0->f_1), 1, 1);
	}
}

void func_374(int* iParam0)
{
	__LIB_1__::func_748(&(iParam0->f_10), 1, 1);
}

void func_375(int* iParam0)
{
	__LIB_1__::func_748(&(iParam0->f_9), 1, 1);
}

int func_376(int iParam0)
{
	if (__LIB_0__::func_139(Global_1392915.f_121[iParam0 /*20*/].f_3))
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1744263063);
		__LIB_1__::func_748(&(Global_1392915.f_121[iParam0 /*20*/].f_3), 1, 0);
		Global_1392915.f_121[iParam0 /*20*/].f_3 = 0;
		return 1;
	}
	Global_1392915.f_121[iParam0 /*20*/].f_3 = 0;
	return 0;
}

void func_377(var uParam0)
{
	if (__LIB_0__::func_139(uParam0->f_3))
	{
		__LIB_1__::func_748(&(uParam0->f_3), 1, 0);
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_12 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
	uParam0->f_6 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
}

bool func_378(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	Var3 = -961687407;
	if (__LIB_0__::func_2() == -1)
	{
		Var3 = 1444744190;
	}
	Var3.f_1 = iParam0;
	Var3.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var3);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var3))
	{
		return false;
	}
	if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var3, -2008906477))
	{
		return false;
	}
	iVar2 = __LIB_5__::func_787(iParam0);
	if (__LIB_6__::func_116(iVar0, &iVar1))
	{
		__LIB_5__::func_788(iVar1, iVar2);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var3))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var3, -2008906477))
		{
		}
		else if (!__LIB_6__::func_116(iVar0, &iVar1))
		{
		}
		else
		{
			__LIB_5__::func_788(iVar1, iVar2);
		}
	}
	return true;
}

void func_379()
{
	if (__LIB_4__::func_635(8192) || __LIB_6__::func_126())
	{
		__LIB_5__::func_839(1000);
		return;
	}
	if (Local_18.f_51.f_20 != 0)
	{
		__LIB_5__::func_839(1000);
		return;
	}
	if (__LIB_1__::func_264(Local_18.f_51.f_1, 1) || __LIB_1__::func_264(Local_18.f_51.f_6, 1))
	{
		__LIB_5__::func_839(1000);
		return;
	}
}

int func_380()
{
	bool bVar0;
	bVar0 = true;
	if ((__LIB_5__::func_860(8) || __LIB_5__::func_860(16)) || __LIB_5__::func_860(64))
	{
		bVar0 = __LIB_3__::func_460(Local_18.f_1786.f_5, &(Local_18.f_1786.f_3), 0, 0, 0, 1084227584 /* Float: 5f */, 100, 0, 0);
	}
	if (__LIB_5__::func_860(2048) || __LIB_5__::func_860(1024))
	{
		bVar0 = __LIB_3__::func_460(Local_18.f_1786.f_6, &(Local_18.f_1786.f_4), 0, 0, 0, 1084227584 /* Float: 5f */, 100, 0, 0);
	}
	if (bVar0)
	{
		if (__LIB_5__::func_880(3072))
		{
			return 4;
		}
		else
		{
			return 3;
		}
	}
	return -1;
}

void func_381()
{
	int iVar0;
	if (((__LIB_5__::func_860(2) || __LIB_5__::func_860(4)) || __LIB_5__::func_860(8)) || __LIB_5__::func_860(16))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (__LIB_5__::func_860(2) || __LIB_5__::func_860(4))
		{
			if (PED::_IS_PED_CARRYING(Global_35))
			{
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, Local_18.f_1786.f_7, 0f, 0f, 0f, 2f, 1);
			}
			if (__LIB_5__::func_860(4))
			{
				if (PED::_IS_PED_HOGTIED(Local_18.f_1786.f_7))
				{
					ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_7, 1, 1);
					TASK::_TASK_CUT_FREE_HOGTIED_TARGET_PED(0, Local_18.f_1786.f_7);
				}
			}
		}
		if (__LIB_5__::func_860(8) || __LIB_5__::func_860(16))
		{
			__LIB_3__::func_460(Local_18.f_1786.f_5, &(Local_18.f_1786.f_3), 0, 0, 0, 1084227584 /* Float: 5f */, 100, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_1786.f_5) && !ENTITY::IS_ENTITY_DEAD(Local_18.f_1786.f_5))
			{
				if (PED::_IS_PED_CARRYING(Local_18.f_1786.f_5))
				{
					if (TASK::_0xEFC4303DDC6E60D3(Global_35))
					{
						TASK::_0xED27560703F37258(0);
					}
					if (!PED::IS_PED_ON_MOUNT(Global_35))
					{
						TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, Local_18.f_1786.f_8);
						TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, Local_18.f_1786.f_8, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_18.f_1786.f_5, 0f, -1.5f, 0f), 1f, 8);
					}
					else
					{
						TASK::TASK_DUMP_CARRIABLE_FROM_PARENT(0, Local_18.f_1786.f_5, Local_18.f_1786.f_8);
						if (__LIB_5__::func_860(16))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_18.f_1786.f_5, 0f, 3f, 0f), 1f, 20000, 0.25f, 0, 40000f);
						}
						TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
					}
				}
			}
			if (__LIB_5__::func_860(16))
			{
				if (PED::_IS_PED_HOGTIED(Local_18.f_1786.f_8))
				{
					ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_8, 1, 1);
					TASK::_TASK_CUT_FREE_HOGTIED_TARGET_PED(0, Local_18.f_1786.f_8);
				}
			}
		}
		__LIB_1__::func_474(Global_35, &iVar0, 0, 0, 1, 1);
		Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
	}
	if (__LIB_5__::func_860(32) || __LIB_5__::func_860(64))
	{
		__LIB_3__::func_460(Local_18.f_1786.f_5, &(Local_18.f_1786.f_3), 0, 0, 0, 1084227584 /* Float: 5f */, 100, 0, 0);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PED::SET_PED_RESET_FLAG(Global_35, 295, true);
	}
}

int func_382()
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 5;
	}
	if (__LIB_5__::func_860(128) || __LIB_5__::func_860(256))
	{
		if (!__LIB_5__::func_860(512))
		{
			if (__LIB_1__::func_265(Global_35, "PLAYER_REACTION_CAUGHT_OUT", joaat("SPEECH_PARAMS_STANDARD"), 0, 0, 0, 0, 1))
			{
				__LIB_5__::func_878(512);
			}
		}
	}
	if (__LIB_5__::func_860(2048) || __LIB_5__::func_860(1024))
	{
		__LIB_3__::func_460(Local_18.f_1786.f_6, &(Local_18.f_1786.f_4), 0, 0, 0, 1084227584 /* Float: 5f */, 100, 0, 0);
	}
	__LIB_3__::func_460(Local_18.f_1786.f_5, &(Local_18.f_1786.f_3), 0, 0, 0, 1084227584 /* Float: 5f */, 100, 0, 0);
	if ((((Local_18.f_1786.f_1 > MISC::GET_GAME_TIMER() || __LIB_0__::func_163(Global_35, -208384378)) || __LIB_0__::func_163(Global_35, -1619621311)) || __LIB_0__::func_163(Global_35, joaat("SCRIPT_TASK_CUT_FREE_HOGTIED_TARGET_PED"))) || __LIB_0__::func_163(Global_35, 242628503))
	{
		return -1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_1786.f_7))
	{
		if (TASK::_0x0CCFE72B43C9CF96(Local_18.f_1786.f_7))
		{
			TASK::_0x9EBD34958AB6F824(Local_18.f_1786.f_7);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_18.f_1786.f_7))
		{
			TASK::TASK_SMART_FLEE_COORD(Local_18.f_1786.f_7, __LIB_6__::func_70(Local_18.f_45), 999f, -1, false, 1077936128);
		}
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_7, 0, 0);
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_7, 2, 0);
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_7, 3, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_1786.f_8))
	{
		if (TASK::_0x0CCFE72B43C9CF96(Local_18.f_1786.f_8))
		{
			TASK::TASK_HORSE_ACTION(Local_18.f_1786.f_5, 1, 0, 0);
			TASK::_0x9EBD34958AB6F824(Local_18.f_1786.f_8);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_18.f_1786.f_8))
		{
			TASK::TASK_SMART_FLEE_COORD(Local_18.f_1786.f_8, __LIB_6__::func_70(Local_18.f_45), 999f, -1, false, 1077936128);
		}
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_8, 0, 0);
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_8, 2, 0);
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_8, 3, 0);
	}
	if (__LIB_5__::func_860(2048) || __LIB_5__::func_860(1024))
	{
		return 4;
	}
	if (!__LIB_5__::func_860(1) && !__LIB_1__::func_533(64))
	{
		TASK::_0x816A3ACD265E2297(joaat("DEAD_CARRIABLE_HUMAN"), 0);
		__LIB_5__::func_878(1);
	}
	if (!__LIB_5__::func_860(8192) && !__LIB_1__::func_533(32))
	{
		TASK::_0x816A3ACD265E2297(joaat("HOGTIED_PED"), 0);
		__LIB_5__::func_878(8192);
	}
	return 5;
}

void func_383()
{
	int iVar0;
	__LIB_3__::func_460(Local_18.f_1786.f_6, &(Local_18.f_1786.f_4), 0, 0, 0, 1084227584 /* Float: 5f */, 100, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_1786.f_6) && !ENTITY::IS_ENTITY_DEAD(Local_18.f_1786.f_6))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_1786.f_9))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			}
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, Local_18.f_1786.f_9);
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, Local_18.f_1786.f_9, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_18.f_1786.f_6, 0f, -1.5f, 0f), 1f, 8);
			if (__LIB_5__::func_860(16))
			{
				if (PED::_IS_PED_HOGTIED(Local_18.f_1786.f_9))
				{
					ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_9, 1, 1);
					TASK::_TASK_CUT_FREE_HOGTIED_TARGET_PED(0, Local_18.f_1786.f_9);
				}
			}
			__LIB_1__::func_474(Global_35, &iVar0, 0, 0, 1, 1);
			Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 500;
		}
	}
}

int func_384()
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 5;
	}
	__LIB_3__::func_460(Local_18.f_1786.f_6, &(Local_18.f_1786.f_4), 0, 0, 0, 1084227584 /* Float: 5f */, 100, 0, 0);
	if (__LIB_5__::func_860(128) || __LIB_5__::func_860(256))
	{
		if (!__LIB_5__::func_860(512))
		{
			if (__LIB_1__::func_265(Global_35, "PLAYER_REACTION_CAUGHT_OUT", joaat("SPEECH_PARAMS_STANDARD"), 0, 0, 0, 0, 1))
			{
				__LIB_5__::func_878(512);
			}
		}
	}
	if ((((Local_18.f_1786.f_1 > MISC::GET_GAME_TIMER() || __LIB_0__::func_163(Global_35, -208384378)) || __LIB_0__::func_163(Global_35, -1619621311)) || __LIB_0__::func_163(Global_35, joaat("SCRIPT_TASK_CUT_FREE_HOGTIED_TARGET_PED"))) || __LIB_0__::func_163(Global_35, 242628503))
	{
		return -1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_1786.f_9))
	{
		if (TASK::_0x0CCFE72B43C9CF96(Local_18.f_1786.f_9))
		{
			TASK::TASK_HORSE_ACTION(Local_18.f_1786.f_6, 1, 0, 0);
			TASK::_0x9EBD34958AB6F824(Local_18.f_1786.f_9);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_18.f_1786.f_9))
		{
			TASK::TASK_SMART_FLEE_COORD(Local_18.f_1786.f_9, __LIB_6__::func_70(Local_18.f_45), 999f, -1, false, 1077936128);
		}
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_9, 0, 0);
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_9, 2, 0);
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_9, 3, 0);
	}
	if (!__LIB_5__::func_860(1) && !__LIB_1__::func_533(64))
	{
		TASK::_0x816A3ACD265E2297(joaat("DEAD_CARRIABLE_HUMAN"), 0);
		__LIB_5__::func_878(1);
	}
	if (!__LIB_5__::func_860(8192) && !__LIB_1__::func_533(32))
	{
		TASK::_0x816A3ACD265E2297(joaat("HOGTIED_PED"), 0);
		__LIB_5__::func_878(8192);
	}
	return 5;
}

int func_385()
{
	vector3 vVar0;
	var uVar3;
	if (__LIB_1__::func_533(1))
	{
		if (__LIB_0__::func_296(0, 0, 1))
		{
			return -1;
		}
		else
		{
			__LIB_5__::func_547(1);
		}
	}
	if ((__LIB_0__::func_1(Global_1935630, 16384) || __LIB_6__::func_55(__LIB_5__::func_824(__LIB_0__::func_12()), 256)) || STREAMING::_0x99F92061EFE908BA())
	{
		return -1;
	}
	if (Local_18.f_1721.f_62 > 0)
	{
		return -1;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return -1;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Global_1357549.f_3[0]))
	{
		return -1;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Global_1357549.f_3[0], false, 0))
	{
		return -1;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (__LIB_1__::func_50(__LIB_0__::func_317(), &vVar0, &uVar3) && BUILTIN::VDIST2(vVar0, Global_36) < 4f)
		{
			return -1;
		}
		Local_18.f_1862.f_5 = PED::GET_MOUNT(Global_35);
		__LIB_5__::func_881(1);
	}
	if (TASK::_0xEFC4303DDC6E60D3(Global_35))
	{
		Local_18.f_1862.f_5 = TASK::_0xED1F514AF4732258(Global_35);
		__LIB_5__::func_881(2);
	}
	if (!__LIB_5__::func_882(1) && !__LIB_5__::func_882(2))
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_18.f_1862.f_5) || ENTITY::IS_ENTITY_DEAD(Local_18.f_1862.f_5))
	{
		return -1;
	}
	return 1;
}

int func_386()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HITCH_ANIMAL"), false);
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	PED::SET_PED_RESET_FLAG(Global_35, 184, true);
	if (__LIB_0__::func_1(Global_1935630, 16384) || STREAMING::_0x99F92061EFE908BA())
	{
		return 0;
	}
	if (!__LIB_5__::func_882(4))
	{
		if (__LIB_1__::func_533(1))
		{
			if (__LIB_0__::func_296(0, 0, 1))
			{
				return 0;
			}
		}
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Global_1357549.f_3[0], false, 0))
		{
			return 0;
		}
	}
	if (__LIB_5__::func_882(1))
	{
		if (!PED::IS_PED_ON_MOUNT(Global_35))
		{
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 0f, true, false);
			return 3;
		}
	}
	if (__LIB_5__::func_882(2))
	{
		if (!TASK::_0xEFC4303DDC6E60D3(Global_35))
		{
			return 3;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_18.f_1862.f_5) || ENTITY::IS_ENTITY_DEAD(Local_18.f_1862.f_5))
	{
		return 0;
	}
	__LIB_3__::func_460(Local_18.f_1862.f_5, &(Local_18.f_1862.f_2), 32, 0, 0, 1084227584 /* Float: 5f */, 100, 0, 0);
	if (MISC::GET_GAME_TIMER() < Local_18.f_1862.f_1)
	{
		return -1;
	}
	if (__LIB_5__::func_882(4))
	{
		if (!__LIB_5__::func_882(8))
		{
			if (__LIB_1__::func_265(Global_35, "DEFUSE_ARGUMENT_TOUGH", joaat("SPEECH_PARAMS_STANDARD"), 0, 0, 0, 0, 1))
			{
				__LIB_5__::func_881(8);
				Local_18.f_1862.f_1 = MISC::GET_GAME_TIMER() + 1000;
				return -1;
			}
		}
	}
	if (__LIB_5__::func_882(1))
	{
		if (!__LIB_0__::func_163(Global_35, 501393341))
		{
			TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
		}
	}
	if (__LIB_5__::func_882(2))
	{
		if (!__LIB_5__::func_882(64))
		{
			TASK::_0xED27560703F37258(Global_35);
			__LIB_5__::func_881(64);
		}
	}
	return -1;
}

int func_387()
{
	if (__LIB_5__::func_882(1) && !__LIB_5__::func_882(32))
	{
		if (__LIB_0__::func_665(Global_35, Local_18.f_1862.f_5, 1, 1) > 2f || MISC::GET_GAME_TIMER() > Local_18.f_1862.f_1)
		{
			Local_18.f_1862.f_1 = MISC::GET_GAME_TIMER() + 10000;
			__LIB_5__::func_883(1);
		}
		else
		{
			return -1;
		}
	}
	ENTITY::_0xC3ABCFBC7D74AFA5(Local_18.f_1862.f_5, 6, 1);
	if (__LIB_1__::func_533(1))
	{
		if (__LIB_0__::func_296(0, 0, 1))
		{
			return 0;
		}
	}
	if (__LIB_0__::func_1(Global_1935630, 16384) || STREAMING::_0x99F92061EFE908BA())
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_18.f_1862.f_5) || ENTITY::IS_ENTITY_DEAD(Local_18.f_1862.f_5))
	{
		return 0;
	}
	PED::SET_PED_RESET_FLAG(Global_35, 184, true);
	if (!__LIB_5__::func_882(16))
	{
		if (__LIB_1__::func_265(Global_35, "SPURS_HORSE", joaat("SPEECH_PARAMS_STANDARD"), 0, 0, 0, 0, 1))
		{
			__LIB_5__::func_881(16);
		}
	}
	if (MISC::GET_GAME_TIMER() > Local_18.f_1862.f_1)
	{
		return 0;
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(Local_18.f_1862.f_6))
	{
		Local_18.f_1862.f_6 = __LIB_5__::func_884();
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_18.f_1862.f_6))
	{
		if (!__LIB_5__::func_882(32))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_18.f_1862.f_5, TASK::_GET_SCENARIO_POINT_COORDS(Local_18.f_1862.f_6, true), 1.5f, 35000, 0.25f, 0, 40000f);
			__LIB_5__::func_881(32);
		}
		if (ENTITY::IS_ENTITY_AT_COORD(Local_18.f_1862.f_5, TASK::_GET_SCENARIO_POINT_COORDS(Local_18.f_1862.f_6, true), 0.5f, 0.5f, 2f, false, true, 0))
		{
			return 0;
		}
	}
	return -1;
}

void func_388(bool bParam0)
{
	if (bParam0 == __LIB_6__::func_56())
	{
		return;
	}
	if (bParam0)
	{
		__LIB_0__::func_907(81053684);
		if (!__LIB_0__::func_906(__LIB_0__::func_298(0)))
		{
			__LIB_0__::func_907(-525676072);
		}
	}
	else
	{
		__LIB_0__::func_908(81053684);
		__LIB_0__::func_908(-525676072);
	}
	Global_1946804.f_2792 = bParam0;
}

bool func_389()
{
	return (__LIB_6__::func_136() && !__LIB_4__::func_635(4096));
}

bool func_390(int iParam0)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return !PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else
	{
		iVar0 = __LIB_6__::func_140(iParam0);
		iVar1 = 0;
		__LIB_6__::func_141(iVar0, 761605153, &iVar1);
		if (__LIB_5__::func_796(iVar0) || iVar1 > 0)
		{
			return true;
		}
	}
	return false;
}

int func_391(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return 0;
	}
	bVar2 = ((__LIB_4__::func_635(4) || Global_1357549.f_1614) || bParam3);
	if (bVar2)
	{
		if (VOLUME::_0x666C2F53ABEFC952(iParam1) == joaat("REL_GANG_DUTCHS"))
		{
			VOLUME::_0xFD010A2154B40676(iParam1, joaat("REL_NO_RELATIONSHIP"));
			VOLUME::_0xFD010A2154B40676(iParam2, joaat("REL_NO_RELATIONSHIP"));
		}
		PED::SET_PED_RESET_FLAG(Global_35, 154, true);
		if (__LIB_4__::func_635(8388608))
		{
			__LIB_5__::func_859(0);
		}
		if (__LIB_1__::func_533(2097152) && PED::GET_PED_CONFIG_FLAG(Global_35, 334, true))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 334, false);
			__LIB_5__::func_547(2097152);
		}
		return 0;
	}
	bVar1 = VOLUME::_IS_POSITION_INSIDE_VOLUME(iParam1, Global_36);
	if (bVar1 && !bVar2)
	{
		bVar0 = PED::IS_PED_IN_MELEE_COMBAT(Global_35);
		if (!bVar0)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
		if (!__LIB_5__::func_886(1))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
			if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
			}
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MELEE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_PRIMARY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_SECONDARY"), false);
		if (!PED::GET_PED_CONFIG_FLAG(Global_35, 334, true))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 334, true);
			__LIB_5__::func_548(2097152);
		}
		PED::SET_PED_RESET_FLAG(Global_35, 268, true);
		PED::SET_PED_RESET_FLAG(Global_35, 179, true);
		PED::SET_PED_RESET_FLAG(Global_35, 241, true);
		PED::SET_PED_RESET_FLAG(Global_35, 260, true);
		PED::SET_PED_RESET_FLAG(Global_35, 27, true);
		PED::SET_PED_RESET_FLAG(Global_35, 198, true);
		switch (Global_1935630.f_44)
		{
			case joaat("WEAPON_UNARMED"):
				if (VOLUME::_0x666C2F53ABEFC952(iParam1) != joaat("REL_GANG_DUTCHS"))
				{
					VOLUME::_0xFD010A2154B40676(iParam1, joaat("REL_GANG_DUTCHS"));
					VOLUME::_0xFD010A2154B40676(iParam2, joaat("REL_GANG_DUTCHS"));
				}
				iVar4 = __LIB_0__::func_153(Global_35, 1, 1, 0);
				if (((!__LIB_4__::func_635(536870912) && !__LIB_1__::func_533(4)) && iVar4 != 0) && iVar4 != joaat("WEAPON_UNARMED"))
				{
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
				}
				break;
			case joaat("WEAPON_FISHINGROD"):
			case joaat("WEAPON_KIT_CAMERA"):
			case joaat("WEAPON_MELEE_LANTERN"):
			case joaat("WEAPON_KIT_BINOCULARS"):
			case joaat("WEAPON_MELEE_LANTERN_ELECTRIC"):
			case joaat("OBJECT_2"):
			case joaat("WEAPON_MELEE_DAVY_LANTERN"):
			case joaat("OBJECT_1"):
				bVar3 = true;
				if (VOLUME::_0x666C2F53ABEFC952(iParam1) == joaat("REL_GANG_DUTCHS"))
				{
					VOLUME::_0xFD010A2154B40676(iParam1, joaat("REL_NO_RELATIONSHIP"));
					VOLUME::_0xFD010A2154B40676(iParam2, joaat("REL_NO_RELATIONSHIP"));
				}
				break;
			default:
				if (!__LIB_4__::func_635(536870912) && !__LIB_1__::func_533(4))
				{
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
				}
				if (VOLUME::_0x666C2F53ABEFC952(iParam1) != joaat("REL_GANG_DUTCHS"))
				{
					VOLUME::_0xFD010A2154B40676(iParam1, joaat("REL_GANG_DUTCHS"));
					VOLUME::_0xFD010A2154B40676(iParam2, joaat("REL_GANG_DUTCHS"));
				}
				break;
		}
		if (!bVar3)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		}
		if (!__LIB_4__::func_635(8388608))
		{
			__LIB_5__::func_859(1);
		}
		if (bVar1)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 288, true);
			PED::SET_PED_RESET_FLAG(Global_35, 2, true);
			if (iParam0->f_45 != 8 && iParam0->f_45 != 7)
			{
				iVar5 = PED::GET_MOUNT(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar5))
				{
					PED::SET_PED_RESET_FLAG(iVar5, 223, true);
					PED::SET_PED_RESET_FLAG(Global_35, 287, true);
				}
			}
		}
	}
	else
	{
		if (__LIB_4__::func_635(8388608))
		{
			__LIB_5__::func_859(0);
		}
		if (PED::GET_PED_CONFIG_FLAG(Global_35, 334, true))
		{
			__LIB_5__::func_547(2097152);
			PED::SET_PED_CONFIG_FLAG(Global_35, 334, false);
		}
		if (VOLUME::_0x666C2F53ABEFC952(iParam1) != joaat("REL_GANG_DUTCHS"))
		{
			VOLUME::_0xFD010A2154B40676(iParam1, joaat("REL_GANG_DUTCHS"));
			VOLUME::_0xFD010A2154B40676(iParam2, joaat("REL_GANG_DUTCHS"));
		}
	}
	if (__LIB_4__::func_635(2) || bVar2)
	{
		PED::SET_PED_RESET_FLAG(Global_35, 154, true);
	}
	if ((!bVar2 && !bVar3) && __LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED"))
	{
		if (PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_ATTACK")))
		{
			if (__LIB_0__::func_181())
			{
				if (!__LIB_0__::func_474(556))
				{
					__LIB_1__::func_240(556, 0);
				}
			}
			else if (!__LIB_0__::func_474(555))
			{
				__LIB_1__::func_240(555, 0);
			}
		}
	}
	return 1;
}

void func_392(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	switch (iParam0->f_3483.f_1)
	{
		case 0:
			if (__LIB_5__::func_945(&(iParam0->f_3483)))
			{
				__LIB_5__::func_946(iParam0, 1);
			}
			break;
		case 1:
			if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_3483, false, false))
			{
				iParam0->f_3483 = 0;
				__LIB_5__::func_946(iParam0, 0);
			}
			else
			{
				if (((!__LIB_4__::func_635(2) && VOLUME::_DOES_VOLUME_EXIST(Global_1357549.f_3[4])) && ENTITY::IS_ENTITY_IN_VOLUME(iParam0->f_3483, Global_1357549.f_3[4], true, 0)) && PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, VOLUME::_GET_VOLUME_COORDS(Global_1357549.f_3[4]), 75f))
				{
					__LIB_5__::func_946(iParam0, 2);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
				}
				Jump @404; //curOff = 212
				if (__LIB_6__::func_142(1, 1084227584 /* Float: 5f */, 1, 1056964608 /* Float: 0.5f */))
				{
					if (!__LIB_0__::func_702(__LIB_3__::func_918(44)))
					{
						__LIB_1__::func_240(534, 0);
					}
					TASK::TASK_LEAVE_VEHICLE(Global_35, iParam0->f_3483, 0, 0);
					__LIB_5__::func_946(iParam0, 3);
				}
				Jump @404; //curOff = 277
				if (!PED::IS_PED_IN_VEHICLE(Global_35, iParam0->f_3483, false))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iParam0->f_3483, false);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iParam0->f_3483.f_2[iVar0] == 0)
						{
							iParam0->f_3483.f_2[iVar0] = iParam0->f_3483;
							iParam0->f_3483.f_6[iVar0] = MISC::GET_GAME_TIMER() + 30000;
						}
						else
						{
							if (iVar0 == 2)
							{
							}
							iVar0++;
						}
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					__LIB_5__::func_946(iParam0, 0);
				}
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (iParam0->f_3483.f_2[iVar0] != 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_3483.f_2[iVar0]) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_3483.f_2[iVar0], false, false))
					{
						iParam0->f_3483.f_2[iVar0] = 0;
					}
					else if (MISC::GET_GAME_TIMER() > iParam0->f_3483.f_6[iVar0])
					{
						vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_3483.f_2[iVar0], false, false) };
						if (BUILTIN::VDIST(Global_36, vVar1) > 80f && !CAM::IS_SPHERE_VISIBLE(vVar1, 10f))
						{
							fVar4 = ENTITY::GET_ENTITY_HEADING(iParam0->f_3483.f_2[iVar0]);
							ENTITY::SET_ENTITY_HEADING(iParam0->f_3483.f_2[iVar0], (fVar4 + 180f));
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iParam0->f_3483.f_2[iVar0], true);
							iParam0->f_3483.f_2[iVar0] = 0;
							iParam0->f_3483.f_6[iVar0] = 0;
						}
					}
				}
				iVar0++;
			}
			default:
				break;
	}
}

void func_393(int iParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	fVar0 = 2f;
	iVar1 = 20;
	iVar2 = 0;
	iVar3 = 5;
	iVar4 = CLOCK::GET_CLOCK_HOURS();
	iVar5 = CLOCK::GET_CLOCK_MINUTES();
	__LIB_5__::func_947(iParam0, &iVar7, &iVar8, &iVar9, &iVar10);
	if (__LIB_1__::func_198(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"), 1) || __LIB_1__::func_198(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), 1))
	{
		__LIB_5__::func_948(iParam0, &iVar7, &iVar8, &iVar9, &iVar10);
	}
	else if (__LIB_1__::func_198(1305416676, 1))
	{
		__LIB_5__::func_949(iParam0, &iVar7, &iVar8, &iVar9, &iVar10);
	}
	else if (__LIB_1__::func_198(-1837343824, 1))
	{
		__LIB_5__::func_950(iParam0, &iVar7, &iVar8, &iVar9, &iVar10);
	}
	if (((__LIB_5__::func_219(22) || __LIB_2__::func_774(22)) || __LIB_5__::func_219(23)) || __LIB_2__::func_774(23))
	{
		if (((((iParam0 == 26 || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 31)
		{
			iVar9 = 6;
			iVar10 = 0;
		}
	}
	if (iVar7 < iVar9)
	{
		bVar6 = __LIB_5__::func_951(iVar7, iVar8, iVar9, iVar10);
	}
	else if (iVar9 < iVar7)
	{
		bVar6 = __LIB_5__::func_952(iVar7, iVar8, iVar9, iVar10);
	}
	else
	{
		bVar6 = __LIB_5__::func_953(iVar7, iVar8, iVar9, iVar10);
	}
	if (iVar1 == iVar4)
	{
		if (iVar5 < iVar2)
		{
			bVar6 = false;
		}
	}
	if (iVar4 < iVar1 && iVar4 > iVar3)
	{
		bVar6 = false;
	}
	iVar11 = Global_1357549.f_12[iParam0 /*14*/].f_8;
	if (OBJECT::_0xFA3B61EC249B4674(iVar11) > 0f)
	{
		if (CLOCK::GET_CLOCK_HOURS() <= 20 && CLOCK::GET_CLOCK_HOURS() >= 7)
		{
			OBJECT::_0xF49574E2332A8F06(iVar11, 0f);
			ENTITY::_0x56E0735D6273B227(iVar11, 1);
		}
	}
	if (bVar6)
	{
		ENTITY::_0x56E0735D6273B227(iVar11, 0);
		if (OBJECT::_0xFA3B61EC249B4674(iVar11) < 1f)
		{
			if (Global_1357549.f_12[iParam0 /*14*/].f_9 == 1)
			{
				fVar12 = (__LIB_0__::func_265(&(Global_1357549.f_12[iParam0 /*14*/].f_11)) / fVar0);
				if (fVar12 > 1f)
				{
					fVar12 = 1f;
				}
				OBJECT::_0xF49574E2332A8F06(iVar11, fVar12);
				__LIB_5__::func_954(iVar11, fVar12);
				if (MISC::ABSF((OBJECT::_0xFA3B61EC249B4674(iVar11) - 1f)) < 0.005f)
				{
					OBJECT::_0xF49574E2332A8F06(iVar11, 1f);
				}
			}
			else
			{
				Global_1357549.f_12[iParam0 /*14*/].f_9 = 1;
				__LIB_1__::func_283(&(Global_1357549.f_12[iParam0 /*14*/].f_11), 0);
			}
		}
		else if (Global_1357549.f_12[iParam0 /*14*/].f_9 == 1)
		{
			Global_1357549.f_12[iParam0 /*14*/].f_9 = 0;
			__LIB_0__::func_37(&(Global_1357549.f_12[iParam0 /*14*/].f_11));
			OBJECT::_0xF49574E2332A8F06(iVar11, 1f);
			__LIB_5__::func_954(iVar11, 1f);
		}
	}
	else if (OBJECT::_0xFA3B61EC249B4674(iVar11) > Global_1357549.f_12[iParam0 /*14*/].f_6)
	{
		if (Global_1357549.f_12[iParam0 /*14*/].f_9 == 1)
		{
			fVar12 = (1f - (__LIB_0__::func_265(&(Global_1357549.f_12[iParam0 /*14*/].f_11)) / fVar0));
			if (fVar12 < 0f)
			{
				fVar12 = 0f;
			}
			OBJECT::_0xF49574E2332A8F06(iVar11, fVar12);
			__LIB_5__::func_954(iVar11, fVar12);
			if (MISC::ABSF((OBJECT::_0xFA3B61EC249B4674(iVar11) - Global_1357549.f_12[iParam0 /*14*/].f_6)) < 0.005f)
			{
				OBJECT::_0xF49574E2332A8F06(iVar11, Global_1357549.f_12[iParam0 /*14*/].f_6);
			}
		}
		else
		{
			Global_1357549.f_12[iParam0 /*14*/].f_9 = 1;
			__LIB_1__::func_283(&(Global_1357549.f_12[iParam0 /*14*/].f_11), 0);
		}
	}
	else if (Global_1357549.f_12[iParam0 /*14*/].f_9 == 1)
	{
		Global_1357549.f_12[iParam0 /*14*/].f_9 = 0;
		__LIB_0__::func_37(&(Global_1357549.f_12[iParam0 /*14*/].f_11));
		ENTITY::_0x56E0735D6273B227(iVar11, 1);
		OBJECT::_0xF49574E2332A8F06(iVar11, Global_1357549.f_12[iParam0 /*14*/].f_6);
		__LIB_5__::func_954(iVar11, Global_1357549.f_12[iParam0 /*14*/].f_6);
	}
}

int func_394(var uParam0)
{
	if (!__LIB_3__::func_77(Global_40.f_4283.f_330))
	{
		return 2;
	}
	if (__LIB_2__::func_776() && !(__LIB_1__::func_198(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT_ACTIVE"), 1) || __LIB_1__::func_198(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), 1)))
	{
		return 5;
	}
	if (!__LIB_0__::func_272(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 6;
	}
	return 1;
}

int func_395(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_356(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = __LIB_2__::func_465(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return __LIB_1__::func_428(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(__LIB_0__::func_162(bParam2), iParam0, 0);
	return iVar2;
}

float func_396(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 164.6267f;
		case 2:
			return 253.0561f;
		case 3:
			return 46.2992f;
		case 5:
			return 70.2681f;
		case 6:
			return 109.4813f;
		case 7:
			return 81.6192f;
		case 8:
			if (!__LIB_6__::func_162())
			{
				return 21.0508f;
			}
			else
			{
				return 329.6172f;
			}
			break;
	}
	return 0f;
}

bool func_397(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	int iVar5;
	int iVar6;
	iVar0 = 1;
	if (Global_40.f_4283.f_567)
	{
		vVar1 = { 0f, 0f, 0f };
		iVar6 = 0;
		if (uParam0->f_45 == Global_40.f_4283.f_567.f_1)
		{
			vVar1 = { Global_40.f_4283.f_567.f_2 };
			uVar4 = Global_40.f_4283.f_567.f_5;
			iVar5 = __LIB_5__::func_835(vVar1, 2);
		}
		else
		{
			iVar5 = __LIB_5__::func_884();
			if (!__LIB_0__::func_86(TASK::_GET_SCENARIO_POINT_COORDS(iVar5, true)))
			{
				vVar1 = { TASK::_GET_SCENARIO_POINT_COORDS(iVar5, true) };
			}
		}
		if (!__LIB_0__::func_86(vVar1))
		{
			iVar6 = __LIB_6__::func_131();
			if (!ENTITY::DOES_ENTITY_EXIST(Global_1357549.f_1897))
			{
				if (iVar6 != 0)
				{
					if (STREAMING::HAS_MODEL_LOADED(iVar6))
					{
						Global_1357549.f_1897 = __LIB_1__::func_545(iVar6, vVar1, uVar4, 1, 1, Global_40.f_4283.f_567.f_6, 1, 0, 1, 0, 0, 0, 0);
					}
					else
					{
						STREAMING::REQUEST_MODEL(iVar6, false);
					}
				}
				iVar0 = 0;
			}
			else
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar6);
				PED::_0xC9151483CC06A414(Global_1357549.f_1897);
				TASK::_TASK_USE_SCENARIO_POINT(Global_1357549.f_1897, iVar5, 0, 0, false, true, 0, false, -1f, false);
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_398(int* iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 1;
	iVar1 = __LIB_6__::func_7();
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_271(iVar1)) == 0)
	{
		__LIB_0__::func_11("Camp Butcher: companion does not exist (check if he's locked)", iParam0);
		iVar0 = 0;
	}
	if (__LIB_0__::func_699(iVar1))
	{
		if (((((__LIB_1__::func_22(iVar1) == 0 && __LIB_1__::func_302(iVar1, 8) == 0) && __LIB_1__::func_302(iVar1, 16) == 0) && __LIB_1__::func_302(iVar1, 32) == 0) && __LIB_1__::func_302(iVar1, 2) == 0) && __LIB_1__::func_302(iVar1, 2048) == 0)
		{
			if (__LIB_1__::func_302(iVar1, -2147483648) && __LIB_4__::func_635(33554432) == 0)
			{
				__LIB_0__::func_11("Camp Butcher: stolen (mission critical)", iParam0);
				iVar0 = 0;
			}
			else
			{
				__LIB_0__::func_11("Camp Butcher: stolen", iParam0);
				iVar0 = 0;
			}
		}
	}
	iVar2 = 0;
	while (iVar2 < Global_1327590.f_19547)
	{
		if (Global_1327590.f_19547[iVar2 /*5*/].f_1 >= 5)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_5__::func_913(__LIB_5__::func_846()), __LIB_5__::func_977(Global_1327590.f_19547[iVar2 /*5*/]), true) < 2.25f)
			{
				__LIB_0__::func_11("Camp Butcher: vignette running", iParam0);
				iVar0 = 0;
			}
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < Global_1327590.f_19547)
	{
		if (Global_1327590.f_19547[iVar2 /*5*/] == 486)
		{
			__LIB_0__::func_11("Camp Butcher: special Pearson vig running", iParam0);
			iVar0 = 0;
		}
		iVar2++;
	}
	if (iVar0 == 0)
	{
		if (MAP::DOES_BLIP_EXIST(iParam0->f_879))
		{
			MAP::REMOVE_BLIP(&(iParam0->f_879));
		}
	}
	if (iVar0 == 1)
	{
		__LIB_0__::func_11("Camp Butcher: Available", iParam0);
	}
	return iVar0;
}

Vector3 func_399(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 0:
			switch (uParam0->f_5[0])
			{
				case 0:
					return -1638.25f, -1382.69f, 82.78f;
				case 1:
					return -1636.39f, -1381.87f, 82.76f;
				case 2:
					return -1636.6f, -1382.7f, 82.71f;
				case 3:
					return -1635.53f, -1381.75f, 82.73f;
				default:
					break;
			}
			break;
		case 4:
			switch (uParam0->f_5[0])
			{
				case 0:
					return -1650.74f, -1366.61f, 82.96f;
				case 1:
					return -1650.25f, -1367.01f, 82.96f;
				default:
					break;
			}
			break;
		case 2:
			switch (uParam0->f_5[0])
			{
				case 0:
					return -1607.25f, -1417.54f, 80.96f;
				case 1:
					return -1563.83f, -1424.21f, 81.2f;
				case 2:
					return -1581.57f, -1406.39f, 80.25f;
				default:
					break;
			}
			break;
		case 3:
			switch (uParam0->f_5[0])
			{
				case 0:
					return -1640.1f, -1427.11f, 81.76f;
				case 1:
					return -1628.33f, -1433.02f, 81.46f;
				case 2:
					return -1620.52f, -1436.23f, 81.19f;
				default:
					break;
			}
			break;
		case 10:
			if (__LIB_1__::func_185(76))
			{
				switch (uParam0->f_5[0])
				{
					case 0:
						return -1641.07f, -1354.04f, 83.4f;
					default:
						break;
				}
			}
			else
			{
				switch (uParam0->f_5[0])
				{
					case 0:
						return -1641.4f, -1354.87f, 83.4f;
					default:
						break;
				}
			}
			break;
		case 14:
			switch (uParam0->f_5[0])
			{
				case 0:
					return -1587.35f, -1393.41f, 80.33f;
				default:
					break;
			}
			break;
		case 6:
			switch (uParam0->f_5[0])
			{
				case 0:
					return -1585.48f, -1389.92f, 80.23f;
				case 1:
					return -1586f, -1390.68f, 80.25f;
				default:
					break;
			}
			break;
		case 5:
			switch (uParam0->f_5[0])
			{
				case 0:
					return -1608.26f, -1412.23f, 80.94f;
				case 1:
					return -1608.64f, -1412.9f, 80.94f;
				default:
					break;
			}
			break;
		case 9:
			switch (uParam0->f_5[0])
			{
				case 0:
					return -1626.92f, -1416.33f, 82.27f;
				default:
					break;
			}
			break;
		case 8:
			switch (uParam0->f_5[0])
			{
				case 0:
					return -1584.08f, -1398.66f, 80.27f;
				case 1:
					return -1586.557f, -1398.762f, 80.32503f;
				case 2:
					return -1584.359f, -1397.728f, 80.26461f;
				case 3:
					return -1584.211f, -1399.771f, 80.27618f;
				default:
					break;
			}
			break;
		case 7:
			switch (uParam0->f_5[0])
			{
				case 0:
					return -1655.76f, -1339.93f, 82.97f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_400(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (__LIB_1__::func_110(iParam0, iParam1, 1))
	{
		iVar0 = __LIB_0__::func_39(iParam1);
		iVar1 = __LIB_0__::func_710(iParam0);
		iVar2 = (__LIB_0__::func_710(iParam0) - __LIB_0__::func_710(iParam1));
		iVar3 = (__LIB_0__::func_39(iParam0) - __LIB_0__::func_39(iParam1));
		iVar4 = (__LIB_0__::func_40(iParam0) - __LIB_0__::func_40(iParam1));
		iVar5 = (__LIB_0__::func_41(iParam0) - __LIB_0__::func_41(iParam1));
		iVar6 = (__LIB_0__::func_42(iParam0) - __LIB_0__::func_42(iParam1));
		iVar7 = (__LIB_0__::func_43(iParam0) - __LIB_0__::func_43(iParam1));
	}
	else
	{
		iVar0 = __LIB_0__::func_39(iParam0);
		iVar1 = __LIB_0__::func_710(iParam1);
		iVar2 = (__LIB_0__::func_710(iParam1) - __LIB_0__::func_710(iParam0));
		iVar3 = (__LIB_0__::func_39(iParam1) - __LIB_0__::func_39(iParam0));
		iVar4 = (__LIB_0__::func_40(iParam1) - __LIB_0__::func_40(iParam0));
		iVar5 = (__LIB_0__::func_41(iParam1) - __LIB_0__::func_41(iParam0));
		iVar6 = (__LIB_0__::func_42(iParam1) - __LIB_0__::func_42(iParam0));
		iVar7 = (__LIB_0__::func_43(iParam1) - __LIB_0__::func_43(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + __LIB_0__::func_44(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = BUILTIN::ROUND(__LIB_0__::func_70(BUILTIN::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*iParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

void func_401(bool bParam0)
{
	HUD::_HIDE_HUD_COMPONENT(-950624750);
	if (bParam0 && __LIB_6__::func_156())
	{
		__LIB_5__::func_840();
	}
	else
	{
		__LIB_5__::func_841();
	}
}

void func_402()
{
	if (__LIB_5__::func_855(8))
	{
		__LIB_0__::func_395(0);
		__LIB_5__::func_856(8);
	}
	if (__LIB_5__::func_855(4))
	{
		__LIB_6__::func_124(1);
		__LIB_5__::func_856(4);
	}
	Local_18.f_1718 = 0;
	if (ITEMSET::IS_ITEMSET_VALID(Local_18.f_1718.f_1))
	{
		ITEMSET::DESTROY_ITEMSET(Local_18.f_1718.f_1);
	}
	if (__LIB_5__::func_855(32))
	{
		__LIB_5__::func_856(32);
	}
	Local_18.f_1718.f_1 = ITEMSET::CREATE_ITEMSET(false);
}

int func_403()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	if (__LIB_1__::func_533(64) && __LIB_1__::func_533(32))
	{
		return -1;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return -1;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Global_1357549.f_3[4]))
	{
		return -1;
	}
	if (__LIB_5__::func_860(1))
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Global_1357549.f_3[4], false, 0))
		{
			TASK::_0x816A3ACD265E2297(joaat("DEAD_CARRIABLE_HUMAN"), 1);
			__LIB_5__::func_861(1);
		}
	}
	if (__LIB_5__::func_860(8192))
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Global_1357549.f_3[4], false, 0))
		{
			TASK::_0x816A3ACD265E2297(joaat("HOGTIED_PED"), 1);
			__LIB_5__::func_861(8192);
		}
	}
	if (__LIB_5__::func_860(4096))
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Global_1357549.f_3[4], false, 0))
		{
			__LIB_5__::func_861(4096);
		}
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Global_1357549.f_3[5], false, 0))
	{
		return -1;
	}
	if (__LIB_5__::func_860(4096))
	{
		__LIB_1__::func_538(0);
	}
	bVar0 = false;
	if (__LIB_5__::func_877(Global_35, &(Local_18.f_1786.f_7), &bVar0))
	{
		if (bVar0)
		{
			if (!__LIB_1__::func_533(64))
			{
				__LIB_5__::func_878(2);
			}
		}
		else if (!__LIB_1__::func_533(32))
		{
			__LIB_5__::func_878(4);
		}
	}
	else if (__LIB_5__::func_879(Global_35, &(Local_18.f_1786.f_7), &bVar0))
	{
		if (bVar0)
		{
			if (!__LIB_1__::func_533(64))
			{
				__LIB_5__::func_878(32);
			}
		}
		else if (!__LIB_1__::func_533(32))
		{
			__LIB_5__::func_878(64);
		}
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		Local_18.f_1786.f_5 = PED::GET_MOUNT(Global_35);
		if (__LIB_5__::func_877(Local_18.f_1786.f_5, &(Local_18.f_1786.f_8), &bVar0))
		{
			if (bVar0)
			{
				if (!__LIB_1__::func_533(64))
				{
					__LIB_5__::func_878(8);
				}
			}
			else if (!__LIB_1__::func_533(32))
			{
				__LIB_5__::func_878(16);
			}
		}
	}
	else if (TASK::_0xEFC4303DDC6E60D3(Global_35))
	{
		Local_18.f_1786.f_5 = TASK::_0xED1F514AF4732258(Global_35);
		if (__LIB_5__::func_877(Local_18.f_1786.f_5, &(Local_18.f_1786.f_8), &bVar0))
		{
			if (bVar0)
			{
				if (!__LIB_1__::func_533(64))
				{
					__LIB_5__::func_878(8);
				}
			}
			else if (!__LIB_1__::func_533(32))
			{
				__LIB_5__::func_878(16);
			}
		}
	}
	else
	{
		Local_18.f_1786.f_5 = __LIB_0__::func_398(0);
		if (__LIB_0__::func_272(Local_18.f_1786.f_5, 0) && __LIB_0__::func_163(Local_18.f_1786.f_5, 2043986356))
		{
			if (__LIB_5__::func_877(Local_18.f_1786.f_5, &(Local_18.f_1786.f_8), &bVar0))
			{
				if (bVar0)
				{
					if (!__LIB_1__::func_533(64))
					{
						__LIB_5__::func_878(8);
					}
				}
				else if (!__LIB_1__::func_533(32))
				{
					__LIB_5__::func_878(16);
				}
			}
		}
	}
	bVar1 = false;
	Local_18.f_1786.f_6 = __LIB_0__::func_398(1);
	if ((__LIB_0__::func_272(Local_18.f_1786.f_6, 0) && Local_18.f_1786.f_5 != Local_18.f_1786.f_6) && __LIB_0__::func_163(Local_18.f_1786.f_6, 2043986356))
	{
		bVar1 = true;
	}
	else
	{
		Local_18.f_1786.f_6 = __LIB_0__::func_398(0);
		if ((__LIB_0__::func_272(Local_18.f_1786.f_6, 0) && Local_18.f_1786.f_5 != Local_18.f_1786.f_6) && __LIB_0__::func_163(Local_18.f_1786.f_6, 2043986356))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (__LIB_5__::func_877(Local_18.f_1786.f_6, &(Local_18.f_1786.f_9), &bVar0))
		{
			if (bVar0)
			{
				__LIB_5__::func_878(2048);
			}
			else
			{
				__LIB_5__::func_878(1024);
			}
		}
	}
	if (((((((__LIB_5__::func_860(2) || __LIB_5__::func_860(4)) || __LIB_5__::func_860(8)) || __LIB_5__::func_860(16)) || __LIB_5__::func_860(32)) || __LIB_5__::func_860(64)) || __LIB_5__::func_860(2048)) || __LIB_5__::func_860(1024))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
		if (__LIB_6__::func_161())
		{
			return 6;
		}
		else
		{
			return 1;
		}
	}
	if (!__LIB_5__::func_860(4096) && __LIB_6__::func_161())
	{
		iVar2 = __LIB_0__::func_398(1);
		if (__LIB_5__::func_877(iVar2, &uVar3, &bVar0))
		{
			__LIB_5__::func_878(4096);
		}
		else
		{
			iVar2 = __LIB_0__::func_398(0);
			if (__LIB_5__::func_877(iVar2, &uVar3, &bVar0))
			{
				__LIB_5__::func_878(4096);
			}
		}
	}
	if ((!__LIB_5__::func_860(1) && !__LIB_5__::func_860(4096)) && !__LIB_1__::func_533(64))
	{
		TASK::_0x816A3ACD265E2297(joaat("DEAD_CARRIABLE_HUMAN"), 0);
		__LIB_5__::func_878(1);
	}
	if ((!__LIB_5__::func_860(8192) && !__LIB_5__::func_860(4096)) && !__LIB_1__::func_533(32))
	{
		TASK::_0x816A3ACD265E2297(joaat("HOGTIED_PED"), 0);
		__LIB_5__::func_878(8192);
	}
	return -1;
}

int func_404()
{
	float fVar0;
	var uVar1;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;
	vector3 vVar11;
	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	if (!PED::_IS_PED_CARRYING(Global_35))
	{
		vVar4 = { ENTITY::GET_ENTITY_COORDS(Local_18.f_1934.f_66, true, false) };
		if (MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(vVar4.x, vVar4.y, (vVar4.z + 10f), &fVar0, &uVar1))
		{
			if (vVar4.z < fVar0)
			{
				vVar7 = { __LIB_5__::func_263(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_6, Local_18.f_1934.f_67) };
				fVar10 = __LIB_0__::func_514(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_9, Local_18.f_1934.f_67.f_3);
				vVar11 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar7, fVar10, 0f, 0.75f, 0f) };
				vVar11.f_2 = fVar0;
				ENTITY::SET_ENTITY_COORDS(Local_18.f_1934.f_66, vVar11, true, false, true, true);
				ENTITY::_0x9587913B9E772D29(Local_18.f_1934.f_66, 0);
			}
		}
		if (!__LIB_2__::func_366(PLAYER::PLAYER_PED_ID()))
		{
			if (Local_18.f_1934.f_83 && __LIB_5__::func_847(Local_18.f_45))
			{
				__LIB_1__::func_240(615, 1);
			}
			else if (Local_18.f_45 == 8 || Local_18.f_45 == 7)
			{
				__LIB_1__::func_240(617, 1);
			}
			else
			{
				__LIB_1__::func_240(616, 1);
			}
			Local_18.f_1934.f_83 = 0;
			Local_18.f_1934.f_84 = 0;
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			return 0;
		}
	}
	if (__LIB_0__::func_75(&(Local_18.f_1934.f_80)) && __LIB_1__::func_871(&(Local_18.f_1934.f_80)) > 5000)
	{
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
		return 0;
	}
	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	return -1;
}

void func_405(int iParam0)
{
	__LIB_5__::func_891(iParam0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1357549.f_1669, "ARTHUR", Global_35, 0);
	if (iParam0 == 0)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(__LIB_0__::func_271(0), false, true);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1357549.f_1669, "DUTCH", __LIB_0__::func_271(0), 0);
	}
	else
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(__LIB_0__::func_271(1), false, true);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1357549.f_1669, "JOHN", __LIB_0__::func_271(1), 0);
	}
	__LIB_6__::func_132(iParam0);
}

Vector3 func_406(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -108.5488f, -31.9591f, 94.9533f;
		case 2:
			return 703.402f, -1230.448f, 44.2554f;
		case 3:
			return 1848.78f, -1838.562f, 42.1948f;
		case 5:
			return 2277.974f, -753.376f, 41.0869f;
		case 6:
			return 2370.903f, 1339.88f, 105.1385f;
		case 7:
			return -2591.979f, 464.4913f, 145.3082f;
		case 8:
			if (!__LIB_6__::func_162())
			{
				return -1663.893f, -1331.753f, 82.9211f;
			}
			else
			{
				return -1642.401f, -1376.996f, 82.9705f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_407(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 302.5949f;
		case 2:
			return 25.2604f;
		case 3:
			return 296.4873f;
		case 5:
			return 318.2845f;
		case 6:
			return 350.6767f;
		case 7:
			return 320.8711f;
		case 8:
			if (!__LIB_6__::func_162())
			{
				return 102.5146f;
			}
			else
			{
				return 76.6876f;
			}
			break;
	}
	return 0f;
}

Vector3 func_408(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -107.3742f, -33.2291f, 94.9708f;
		case 2:
			return 704.5956f, -1229.202f, 44.2563f;
		case 3:
			return 1848.884f, -1836.363f, 42.333f;
		case 5:
			return 2277.335f, -751.5715f, 41.0714f;
		case 6:
			return 2369.604f, 1340.72f, 105.1302f;
		case 7:
			return -2590.858f, 468.7466f, 145.054f;
		case 8:
			if (!__LIB_6__::func_162())
			{
				return -1664.295f, -1330.149f, 82.9397f;
			}
			else
			{
				return -1646.427f, -1375.833f, 82.9658f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_409(bool bParam0)
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1360165)
	{
		if ((!__LIB_0__::func_699(iVar0) && !__LIB_5__::func_795(iVar0)) && iVar0 != Global_1357549.f_1497)
		{
			if ((!__LIB_0__::func_287(iVar0, 33, 1) || !ENTITY::DOES_ENTITY_EXIST(Global_1360165[iVar0 /*1157*/])) || !ENTITY::IS_ENTITY_ON_SCREEN(Global_1360165[iVar0 /*1157*/]))
			{
				__LIB_6__::func_164(iVar0, 0, 0, 1, bParam0);
			}
		}
		iVar0++;
	}
}

void func_410()
{
	int iVar0;
	int iVar1;
	if (Local_18.f_3373 != -1)
	{
		if (__LIB_0__::func_273(Local_18.f_3373, 4, 0))
		{
			if (Local_18.f_3373 != 10 || __LIB_1__::func_187(63))
			{
				iVar0 = __LIB_0__::func_271(Local_18.f_3373);
				if (!__LIB_0__::func_255(iVar0, 1))
				{
					if (!__LIB_0__::func_287(Local_18.f_3373, 3, 0) || __LIB_5__::func_943(Local_18.f_3373))
					{
						__LIB_1__::func_551(Local_18.f_3373, 1);
						TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iVar0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 200f, 0, 16);
						PED::SET_PED_CONFIG_FLAG(iVar0, 366, true);
					}
					else
					{
						TASK::_TASK_FLEE_FROM_PED(iVar0, Global_35, 0f, 0f, 0f, 200f, 20000, 0, 1077936128 /* Float: 3f */, 0);
					}
				}
			}
		}
		iVar1 = Local_18.f_3373;
		iVar1++;
		Local_18.f_3373 = iVar1;
		if (Local_18.f_3373 >= 26)
		{
			Local_18.f_3373 = -1;
		}
	}
}

Vector3 func_411(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -107.0047f, -32.0697f, 94.9574f;
		case 2:
			return 703.7057f, -1228.871f, 44.2991f;
		case 3:
			return 1849.943f, -1837.089f, 42.2036f;
		case 5:
			return 2278.213f, -751.9426f, 41.0419f;
		case 6:
			return 2370.389f, 1340.97f, 105.1306f;
		case 7:
			return -2591.632f, 466.4086f, 145.2065f;
		case 8:
			if (!__LIB_6__::func_162())
			{
				return -1665.274f, -1330.899f, 82.9343f;
			}
			else
			{
				return -1643.673f, -1375.62f, 82.9683f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_412(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	__LIB_5__::func_983(iParam0);
	__LIB_2__::func_226(iParam0, 0);
	__LIB_6__::func_144(iParam0, 0f);
}

void func_413(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	__LIB_6__::func_168(iParam0, iParam1, bParam2, fParam3);
}

void func_414(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if ((BUILTIN::VDIST(Global_36, 0f, 0f, 0f) <= 5f || __LIB_0__::func_1(Global_1935630, 16384)) || __LIB_0__::func_1(Global_1935630, 8388608))
	{
		return;
	}
	if (__LIB_1__::func_896(uParam0, 1))
	{
		return;
	}
	uParam0->f_63++;
	if (uParam0->f_63 < 10)
	{
		return;
	}
	uParam0->f_63 = 0;
	bVar0 = false;
	bVar1 = ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT());
	bVar2 = __LIB_1__::func_927();
	iVar3 = 0;
	while (iVar3 < uParam0->f_61)
	{
		switch ((uParam0[iVar3 /*3*/])->f_1)
		{
			case 1:
				if (VOLUME::_DOES_VOLUME_EXIST((*uParam0)[iVar3 /*3*/]))
				{
					if (VOLUME::_IS_POSITION_INSIDE_VOLUME((*uParam0)[iVar3 /*3*/], Global_36))
					{
						if (!bVar1 && !bVar2)
						{
							if ((!__LIB_0__::func_65(uParam0[iVar3 /*3*/], 1) && __LIB_1__::func_120(iParam1)) && !__LIB_1__::func_897(iParam1, 16))
							{
								__LIB_6__::func_178(iParam1, __LIB_1__::func_898(), -1, 0, -1, 0);
								__LIB_0__::func_47(uParam0[iVar3 /*3*/], 1);
							}
							__LIB_2__::func_758(iParam1, 0);
						}
						bVar0 = true;
					}
				}
				break;
			default:
				break;
		}
		iVar3++;
	}
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_1__::func_923() != bVar0)
		{
			iVar4 = 0;
			if (bVar0)
			{
				iVar4 = 2;
			}
			else
			{
				iVar4 = 1;
			}
			__LIB_1__::func_924();
			__LIB_1__::func_309(Global_1310750.f_16071, 0, iVar4, 0, 0);
		}
	}
	__LIB_1__::func_899(bVar0);
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_1__::func_900((iParam1 == __LIB_0__::func_61() && bVar0));
	}
}

void func_415(int iParam0, vector3 vParam1, var uParam4, int iParam5)
{
	if (!__LIB_0__::func_69(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_86(vParam1))
	{
		return;
	}
	Global_1395601.f_5[iParam0 /*28*/].f_15 = { vParam1 };
	Global_1395601.f_5[iParam0 /*28*/].f_18 = uParam4;
	Global_1395601.f_5[iParam0 /*28*/].f_23 = iParam5;
	if (VOLUME::_DOES_VOLUME_EXIST(iParam5))
	{
	}
	if (!__LIB_0__::func_296(242, 1, 1))
	{
		__LIB_6__::func_180(iParam0, 1);
	}
	__LIB_4__::func_913(iParam0);
	__LIB_4__::func_914(iParam0, 1);
	Global_40.f_9384[iParam0 /*2*/].f_1 = __LIB_0__::func_23();
}

void func_416(int iParam0, bool bParam1, float fParam2)
{
	__LIB_6__::func_181(iParam0, bParam1, fParam2);
}

int func_417(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	var uVar7;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = __LIB_0__::func_553(iVar0);
	if (!__LIB_0__::func_144(iVar1, 0))
	{
		return 0;
	}
	if (!__LIB_0__::func_831(iVar1))
	{
		return 0;
	}
	Var2 = { __LIB_0__::func_949(0) };
	Var2.f_4 = -352578118;
	if (__LIB_1__::func_761(iVar1, &Var2, 1, 0, 0))
	{
		return 0;
	}
	if (!__LIB_1__::func_792(iVar1, &uVar7, &Var2, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

void func_418()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bVar0 = __LIB_1__::func_533(16);
	bVar1 = Global_1357549.f_1485 > BUILTIN::TO_FLOAT(5400);
	bVar2 = __LIB_4__::func_635(32768);
	if ((!bVar0 && bVar2) && bVar1)
	{
		__LIB_5__::func_548(16);
		__LIB_3__::func_465(2, joaat("HONOR_EVENT_LONG_ABSENCE"), 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
	}
	if (bVar0 && !bVar2)
	{
		__LIB_5__::func_547(16);
		Global_1357549.f_1485 = 0f;
	}
}

void func_419()
{
	Local_18.f_1934.f_65 = 0;
	Local_18.f_1934.f_66 = 0;
	GRAPHICS::_0x5199405EABFBD7F0("CamTransitionBlinkSlow");
	__LIB_6__::func_191();
}

void func_420(int iParam0)
{
	if (iParam0->f_49 && !ENTITY::IS_ENTITY_DEAD(iParam0->f_48))
	{
		VEHICLE::DELETE_VEHICLE(&(iParam0->f_48));
	}
	__LIB_6__::func_263(&(Global_1357549.f_3));
}

int func_421(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!__LIB_6__::func_217(uParam0[iVar0 /*257*/], uParam1[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_422()
{
	if (!__LIB_6__::func_285())
	{
		return false;
	}
	if (__LIB_0__::func_1(Global_1935630, 16384))
	{
		return false;
	}
	if (__LIB_0__::func_1(Global_1935630, 32768))
	{
		return false;
	}
	if (__LIB_0__::func_1(Global_1935630, 8388608))
	{
		return false;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (!__LIB_6__::func_275(3))
	{
		return false;
	}
	return true;
}

void func_423(int* iParam0)
{
	__LIB_6__::func_214(iParam0);
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
		}
		TASK::_TASK_USE_SCENARIO_POINT(Global_35, iParam0->f_863, 0, 0, true, false, 0, false, -1f, false);
	}
}

void func_424(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	if (__LIB_5__::func_869(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 27)
		{
			iVar1 = 0;
			while (iVar1 < 6)
			{
				__LIB_6__::func_284(iParam1, iVar0, iVar1, bParam2, bParam3);
				iVar1++;
			}
			iVar0++;
		}
	}
}

void func_425(int iParam0, char* sParam1)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	char* sVar6;
	char* sVar7;
	sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
	switch (iParam0)
	{
		case 0:
			sVar1 = "RPG_HEALTH";
			break;
		case 1:
			sVar1 = "RPG_STAMINA";
			break;
		default:
			return;
	}
	sVar2 = MISC::_CREATE_VAR_STRING(2, "HORSE_RPG_LEVEL_PROGRESS", sParam1);
	switch (iParam0)
	{
		case 0:
			iVar3 = joaat("TOAST_RPG_LEVEL_HEALTH_HORSE");
			break;
		case 1:
			iVar3 = joaat("TOAST_RPG_LEVEL_STAMINA_HORSE");
			break;
		default:
			return;
	}
	sVar4 = __LIB_0__::func_67(__LIB_6__::func_9(sParam1));
	iVar5 = MISC::GET_HASH_KEY(sVar4);
	sVar6 = "";
	sVar7 = "HUD_Toast_Soundset";
	__LIB_5__::func_785(MISC::_CREATE_VAR_STRING(10, sVar0, sVar1), sVar2, iVar3, iVar5, -2, sVar7, sVar6, 0, 0, 1, 1);
}

void func_426(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	if (iParam0 == -1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(*uParam1, 0);
		return;
	}
	iVar0 = (__LIB_5__::func_862(__LIB_5__::func_999(iParam0), 0) - 1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(*uParam1, 1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_4, (uParam2[iParam0 /*30*/])->f_23);
	iVar1 = 0;
	while (iVar1 < 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_5[iVar1 /*6*/].f_1, (uParam2[iParam0 /*30*/])->f_2[iVar1 /*4*/]);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_5[iVar1 /*6*/].f_2, (uParam2[iParam0 /*30*/])->f_2[iVar1 /*4*/].f_1);
		if ((uParam2[iParam0 /*30*/])->f_2[iVar1 /*4*/].f_3 != -1)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_5[iVar1 /*6*/].f_3, MISC::_CREATE_VAR_STRING(2, "LDGR_PRICE", (uParam2[iParam0 /*30*/])->f_2[iVar1 /*4*/].f_3));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_5[iVar1 /*6*/].f_3, "");
		}
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_5[iVar1 /*6*/], iVar1 <= iVar0 + 1);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_5[iVar1 /*6*/].f_4, iVar1 <= iVar0);
		if ((uParam2[iParam0 /*30*/])->f_23)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_30[iVar1 /*4*/].f_1, MISC::_CREATE_VAR_STRING(2, "LDGR_PRICE", (uParam2[iParam0 /*30*/])->f_24[iVar1]));
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_30[iVar1 /*4*/], iVar1 <= iVar0);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_30[iVar1 /*4*/].f_2, iVar1 < iVar0);
		}
		iVar1++;
	}
	switch (iParam0)
	{
		case 0:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, -393102324 /* GXTEntry: "Provisions" */);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_2, 2011573789 /* GXTEntry: "Pearson\'s Wagon" */);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_3, joaat("LEDGER_CAMP_PROVISIONS"));
			break;
		case 1:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, -528257027 /* GXTEntry: "Medicine" */);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_2, 1071167867 /* GXTEntry: "Strauss\'s Wagon" */);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_3, joaat("LEDGER_CAMP_MEDICINE"));
			break;
		case 2:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, 283666457 /* GXTEntry: "Ammunition~n~and Arms" */);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_2, 1013492974 /* GXTEntry: "Arthur\'s Wagon" */);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_3, joaat("LEDGER_CAMP_MUNITIONS"));
			break;
		case 3:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, -803999078 /* GXTEntry: "Lodging" */);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_2, 0);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_3, joaat("LEDGER_CAMP_TENT"));
			break;
		default:
			break;
	}
}

void func_427(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	if (iParam0 == -1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(*uParam1, 0);
		return;
	}
	iVar0 = (__LIB_5__::func_862(__LIB_5__::func_999(iParam0), 0) - 1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(*uParam1, 1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_5, iVar0 > 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_6, iVar0 > 0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_2, (uParam2[iParam0 /*30*/])->f_2[1 /*4*/].f_1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_4, MISC::_CREATE_VAR_STRING(2, "LDGR_PRICE", (uParam2[iParam0 /*30*/])->f_2[1 /*4*/].f_3));
	switch (iParam0)
	{
		case 4:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, 61188257 /* GXTEntry: "Camp Boat" */);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_3, joaat("LEDGER_CAMP_BOAT"));
			break;
		case 5:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, -593314660 /* GXTEntry: "Chicken Coop" */);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_3, joaat("LEDGER_CAMP_CHICKENS"));
			break;
		case 7:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, -1156421435 /* GXTEntry: "Horse Station" */);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_3, joaat("LEDGER_CAMP_HORSE_STATION"));
			break;
		case 6:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, -1477784184 /* GXTEntry: "Leather Working~n~Tools" */);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_3, joaat("LEDGER_CAMP_LEATHER_WORKING_TOOLS"));
			break;
		default:
			break;
	}
}

var func_428(int iParam0)
{
	if (iParam0 == 2)
	{
		return "dewclm";
	}
	if (iParam0 == 4)
	{
		return "gua";
	}
	return __LIB_0__::func_57(&(Global_1888801[__LIB_1__::func_953(iParam0) /*35*/].f_22));
}

bool func_429(int iParam0, var uParam1, float fParam2)
{
	return __LIB_6__::func_278(uParam1[iParam0 /*257*/]) >= fParam2;
}

bool func_430(var uParam0, var uParam1)
{
	int iVar0;
	if (!DATABINDING::_DATABINDING_READ_DATA_BOOL(*uParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!__LIB_6__::func_26(&(uParam0->f_5[iVar0 /*6*/])))
		{
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_5[iVar0 /*6*/].f_5, 1);
			uParam1->f_5 = 1;
			uParam1->f_6 = iVar0;
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!__LIB_6__::func_27(&(uParam0->f_30[iVar0 /*4*/])))
		{
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_30[iVar0 /*4*/].f_3, 1);
			uParam1->f_5 = 0;
			uParam1->f_6 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_431(var uParam0, var uParam1)
{
	if (!__LIB_6__::func_16(uParam0))
	{
		return false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_7, 1);
	uParam1->f_5 = 1;
	uParam1->f_6 = -1;
	return true;
}

void func_432(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	struct<5> Var0;
	int iVar86;
	int iVar87;
	Var0 = 17;
	Var0.f_1 = 4;
	Var0.f_1.f_5 = 4;
	Var0.f_1.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0[15 /*5*/][0] = __LIB_1__::func_976();
	Var0[15 /*5*/][1] = __LIB_1__::func_976();
	Var0[15 /*5*/][2] = -1147256587;
	Var0[15 /*5*/][3] = -1147256587;
	Var0[10 /*5*/][0] = -1247551347;
	Var0[10 /*5*/][1] = -1247551347;
	Var0[10 /*5*/][2] = -1247551347;
	Var0[10 /*5*/][3] = -1010466481;
	Var0[11 /*5*/][0] = __LIB_1__::func_976();
	Var0[11 /*5*/][1] = __LIB_1__::func_976();
	Var0[11 /*5*/][2] = __LIB_1__::func_976();
	Var0[11 /*5*/][3] = __LIB_1__::func_976();
	Var0[12 /*5*/][0] = __LIB_1__::func_976();
	Var0[12 /*5*/][1] = __LIB_1__::func_976();
	Var0[12 /*5*/][2] = __LIB_1__::func_976();
	Var0[12 /*5*/][3] = __LIB_1__::func_976();
	Var0[13 /*5*/][0] = __LIB_1__::func_976();
	Var0[13 /*5*/][1] = __LIB_1__::func_976();
	Var0[13 /*5*/][2] = __LIB_1__::func_976();
	Var0[13 /*5*/][3] = __LIB_1__::func_976();
	Var0[9 /*5*/][0] = -160392273;
	Var0[9 /*5*/][1] = 1049842342;
	Var0[9 /*5*/][2] = 1049842342;
	Var0[9 /*5*/][3] = 1049842342;
	Var0[8 /*5*/][0] = 1674800958;
	Var0[8 /*5*/][1] = 1674800958;
	Var0[8 /*5*/][2] = 1674800958;
	Var0[8 /*5*/][3] = 2728487;
	Var0[7 /*5*/][0] = 1636281938;
	Var0[7 /*5*/][1] = 1636281938;
	Var0[7 /*5*/][2] = 1636281938;
	Var0[7 /*5*/][3] = 1084869405;
	Var0[6 /*5*/][0] = -1451784475;
	Var0[6 /*5*/][1] = -1451784475;
	Var0[6 /*5*/][2] = -1451784475;
	Var0[6 /*5*/][3] = 1128417383;
	Var0[5 /*5*/][0] = -2016771661;
	Var0[5 /*5*/][1] = -2016771661;
	Var0[5 /*5*/][2] = 202127432;
	Var0[5 /*5*/][3] = 202127432;
	Var0[4 /*5*/][0] = -546137515;
	Var0[4 /*5*/][1] = -546137515;
	Var0[4 /*5*/][2] = -546137515;
	Var0[4 /*5*/][3] = 1679038623;
	if (bParam3)
	{
		__LIB_6__::func_238(1);
	}
	else
	{
		__LIB_6__::func_238(0);
	}
	Var0[3 /*5*/][0] = 1742990618;
	Var0[3 /*5*/][1] = 1742990618;
	Var0[3 /*5*/][2] = -751959361;
	Var0[3 /*5*/][3] = -751959361;
	Var0[0 /*5*/][0] = __LIB_1__::func_976();
	Var0[0 /*5*/][1] = __LIB_1__::func_976();
	Var0[0 /*5*/][2] = -2000080725;
	Var0[0 /*5*/][3] = -2000080725;
	Var0[1 /*5*/][0] = 2123887232;
	Var0[1 /*5*/][1] = 2123887232;
	Var0[1 /*5*/][2] = 2123887232;
	Var0[1 /*5*/][3] = 2123887232;
	Var0[2 /*5*/][0] = 102652153;
	Var0[2 /*5*/][1] = 102652153;
	Var0[2 /*5*/][2] = 102652153;
	Var0[2 /*5*/][3] = 102652153;
	iVar87 = 0;
	while (iVar87 < 17)
	{
		iVar86 = 0;
		while (iVar86 < 4)
		{
			if (Var0[iVar87 /*5*/][iVar86] != __LIB_1__::func_976())
			{
				if ((iVar86 + 1 == __LIB_5__::func_862(iVar87, 1) && iParam0 == 2) && bParam2)
				{
					if (!STREAMING::_IS_IMAP_ACTIVE(Var0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::_REQUEST_IMAP(Var0[iVar87 /*5*/][iVar86]);
						__LIB_6__::func_29(Var0[iVar87 /*5*/][iVar86], 1, uParam1);
					}
				}
				else if ((Var0[iVar87 /*5*/][(__LIB_5__::func_862(iVar87, 1) - 1)] != Var0[iVar87 /*5*/][iVar86] || iParam0 != 2) || bParam2 == 0)
				{
					if (STREAMING::_IS_IMAP_ACTIVE(Var0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::_REMOVE_IMAP(Var0[iVar87 /*5*/][iVar86]);
						__LIB_6__::func_29(Var0[iVar87 /*5*/][iVar86], 0, uParam1);
					}
				}
			}
			iVar86++;
		}
		iVar87++;
	}
}

void func_433()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_5__::func_810(32, -1);
		__LIB_6__::func_264();
		__LIB_5__::func_811();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	}
}

int func_434()
{
	if (__LIB_1__::func_890(32))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(500);
		}
		__LIB_0__::func_22(32);
	}
	__LIB_5__::func_852(&Local_18);
	__LIB_6__::func_279(&Local_18);
	if (!__LIB_4__::func_635(2048))
	{
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(4000);
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 473, true);
	PED::SET_PED_CONFIG_FLAG(Global_35, 474, true);
	PED::SET_PED_CONFIG_FLAG(Global_35, 475, true);
	__LIB_0__::func_63(&(Global_1391438.f_5), 32, 1);
	__LIB_6__::func_68();
	AUDIO::SET_AUDIO_FLAG("EnableIdleMusic", true);
	__LIB_6__::func_69(0);
	__LIB_0__::func_24(Local_18.f_46, 8);
	__LIB_5__::func_548(1073741824 /* Float: 2f */);
	return 1;
}

void func_435(float fParam0, float fParam1, float fParam2)
{
	struct<16> Var0;
	Var0 = { __LIB_6__::func_286(fParam0, fParam1, fParam2) };
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1357549.f_1886.f_1, &Var0);
}

void func_436()
{
	char* sVar0;
	struct<16> Var1;
	sVar0 = __LIB_5__::func_892(__LIB_0__::func_317());
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	Var1 = { __LIB_6__::func_286(Local_18.f_3054, Local_18.f_3055, Global_1357549.f_1900) };
	__LIB_1__::func_909(sVar0, MISC::_CREATE_VAR_STRING(10, "CAMP_INFO_SUPPLIES", __LIB_1__::func_925(&Var1, joaat("COLOR_PURE_WHITE"))), 4000, 0, 0, 0, 0, 1);
}

void func_437(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	if (!__LIB_6__::func_289(uParam0, uParam1))
	{
		return;
	}
	iVar1 = 0;
	bVar2 = false;
	while (!bVar2 && iVar1 < 20)
	{
		iVar1++;
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		if (__LIB_5__::func_893(iVar0) && __LIB_5__::func_894(uParam0[iVar0 /*257*/], uParam1[iVar0]))
		{
			bVar2 = true;
		}
	}
	if (iVar1 >= 20)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 50)
	{
		iVar1++;
		iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, (uParam0[iVar0 /*257*/])->f_253);
		if (!MISC::IS_BIT_SET((*uParam1)[iVar0], iVar3))
		{
			MISC::SET_BIT(uParam1[iVar0], iVar3);
			return;
		}
	}
	if (iVar1 >= 50)
	{
		return;
	}
}

void func_438(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_6__::func_290(uParam0[iVar0 /*257*/]);
		__LIB_5__::func_899(uParam0[iVar0 /*257*/]);
		__LIB_5__::func_900(uParam0[iVar0 /*257*/]);
		MISC::SET_BIT(&((uParam0[iVar0 /*257*/])->f_254), 0);
		iVar0++;
	}
}

void func_439(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_6__::func_290(uParam0[iVar0 /*257*/]);
		iVar0++;
	}
}

void func_440(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		__LIB_6__::func_291(iVar1, uParam0[iVar0 /*257*/]);
		iVar0++;
	}
}

void func_441(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		__LIB_6__::func_292(iParam0, iVar1, __LIB_6__::func_193(iVar1), uParam1[iVar0 /*257*/]);
		iVar0++;
	}
}

void func_442(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_6__::func_293(uParam0[iVar0 /*257*/], uParam1[iVar0]);
		iVar0++;
	}
}

void func_443(int iParam0, int iParam1)
{
	if (CAM::DOES_CAM_EXIST(Local_18.f_3057[iParam0 /*21*/].f_5))
	{
		if (CAM::IS_CAM_RENDERING(Local_18.f_3057[iParam0 /*21*/].f_5))
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		}
		CAM::DESTROY_CAM(Local_18.f_3057[iParam0 /*21*/].f_5, false);
	}
	if (!CAM::DOES_CAM_EXIST(Local_18.f_3057[iParam1 /*21*/].f_5))
	{
		if (!__LIB_0__::func_86(Local_18.f_3057[iParam1 /*21*/].f_9))
		{
			Local_18.f_3057[iParam1 /*21*/].f_5 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_18.f_3057[iParam1 /*21*/].f_9, Local_18.f_3057[iParam1 /*21*/].f_12, Local_18.f_3057[iParam1 /*21*/].f_15, false, 2);
		}
	}
	if (CAM::DOES_CAM_EXIST(Local_18.f_3057[iParam1 /*21*/].f_5))
	{
		if (!CAM::IS_CAM_RENDERING(Local_18.f_3057[iParam1 /*21*/].f_5))
		{
			CAM::SET_CAM_ACTIVE(Local_18.f_3057[iParam1 /*21*/].f_5, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
	}
	Local_18.f_3057[iParam0 /*21*/].f_3 = 3;
	Local_18.f_3057[iParam1 /*21*/].f_3 = 2;
	if (__LIB_0__::func_139(Local_18.f_3057[iParam0 /*21*/].f_2))
	{
		__LIB_1__::func_748(&(Local_18.f_3057[iParam0 /*21*/].f_2), 1, 1);
	}
	if (__LIB_0__::func_139(Local_18.f_3057[iParam0 /*21*/].f_1))
	{
		__LIB_1__::func_748(&(Local_18.f_3057[iParam0 /*21*/].f_1), 1, 1);
	}
	__LIB_6__::func_347(iParam1);
	__LIB_6__::func_348(iParam1);
	HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 2, 1, 799218720, Local_18.f_3057[iParam1 /*21*/].f_20, 0);
}

bool func_444()
{
	if (!__LIB_5__::func_980())
	{
		return false;
	}
	if (__LIB_6__::func_323(__LIB_5__::func_981()))
	{
		return false;
	}
	switch (__LIB_5__::func_917())
	{
		case 0:
			if (__LIB_0__::func_479() != 5)
			{
				return false;
			}
			break;
		case 1:
			return false;
	}
	return true;
}

void func_445()
{
	var uVar0;
	if (__LIB_6__::func_325())
	{
		uVar0 = __LIB_5__::func_988();
		MAP::REMOVE_BLIP(&uVar0);
		__LIB_5__::func_989(0);
	}
}

bool func_446(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
			if (__LIB_6__::func_327(-1329287819 /* GXTEntry: "Pronghorn Skull" */, 3) == 0)
			{
				return true;
			}
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT"):
			if (__LIB_6__::func_327(765991018 /* GXTEntry: "Wolf Skull" */, 3) == 0)
			{
				return true;
			}
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
			if (__LIB_6__::func_327(-837651311 /* GXTEntry: "Big Horn Ram Skull" */, 3) == 0)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_447(int iParam0, var uParam1, struct<8> Param2, var uParam10)
{
	int iVar0;
	if (!*uParam1)
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			switch (uParam1->f_4)
			{
				case 1:
					return false;
				case 2:
					if (uParam1->f_3 == 0 && Param2.f_2 == -1)
					{
						return false;
					}
					if (uParam1->f_3 == 1 && Param2.f_6 == -1)
					{
						return false;
					}
					if (!__LIB_6__::func_16(&((uParam10[uParam1->f_3 /*118*/])->f_102)))
					{
						return false;
					}
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[uParam1->f_3 /*118*/])->f_110.f_7, 0);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[uParam1->f_3 /*118*/])->f_102.f_7, 1);
					if (uParam1->f_3 == 1)
					{
						uParam1->f_1 = Param2.f_6;
					}
					else
					{
						uParam1->f_1 = Param2.f_2;
					}
					uParam1->f_4 = 1;
					uParam1->f_5 = 1;
					uParam1->f_6 = -1;
					return true;
				case 0:
					if (uParam1->f_5)
					{
						return false;
					}
					iVar0 = __LIB_6__::func_332(&((uParam10[uParam1->f_3 /*118*/])->f_55));
					if (iVar0 == -1)
					{
						return false;
					}
					__LIB_6__::func_253(uParam10[uParam1->f_3 /*118*/]);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[uParam1->f_3 /*118*/])->f_55.f_5[iVar0 /*6*/].f_5, 1);
					uParam1->f_5 = 1;
					uParam1->f_6 = iVar0;
					return true;
				default:
					break;
			}
			break;
		case 1:
			switch (uParam1->f_4)
			{
				case 2:
					return false;
				case 1:
					if (uParam1->f_3 == 0 && Param2.f_3 == -1)
					{
						return false;
					}
					if (uParam1->f_3 == 1 && Param2.f_7 == -1)
					{
						return false;
					}
					if (!__LIB_6__::func_16(&((uParam10[uParam1->f_3 /*118*/])->f_110)))
					{
						return false;
					}
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[uParam1->f_3 /*118*/])->f_102.f_7, 0);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[uParam1->f_3 /*118*/])->f_110.f_7, 1);
					if (uParam1->f_3 == 1)
					{
						uParam1->f_1 = Param2.f_7;
					}
					else
					{
						uParam1->f_1 = Param2.f_3;
					}
					uParam1->f_4 = 2;
					uParam1->f_5 = 1;
					uParam1->f_6 = -1;
					return true;
				case 0:
					if (!uParam1->f_5)
					{
						return false;
					}
					iVar0 = __LIB_6__::func_333(&((uParam10[uParam1->f_3 /*118*/])->f_55));
					if (iVar0 == -1)
					{
						return false;
					}
					__LIB_6__::func_253(uParam10[uParam1->f_3 /*118*/]);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[uParam1->f_3 /*118*/])->f_55.f_30[iVar0 /*4*/].f_3, 1);
					uParam1->f_5 = 0;
					uParam1->f_6 = iVar0;
					return true;
				default:
					break;
			}
			break;
		case 2:
			if (uParam1->f_3 == 0)
			{
				return false;
			}
			switch (uParam1->f_4)
			{
				case 2:
					if (Param2.f_3 != -1 && __LIB_6__::func_16(&((uParam10[0 /*118*/])->f_110)))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[1 /*118*/])->f_110.f_7, 0);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[0 /*118*/])->f_110.f_7, 1);
						uParam1->f_1 = Param2.f_3;
						uParam1->f_3 = 0;
						uParam1->f_4 = 2;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return true;
					}
					else if (Param2.f_2 != -1 && __LIB_6__::func_16(&((uParam10[0 /*118*/])->f_102)))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[1 /*118*/])->f_110.f_7, 0);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[0 /*118*/])->f_102.f_7, 1);
						uParam1->f_1 = Param2.f_2;
						uParam1->f_3 = 0;
						uParam1->f_4 = 1;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return true;
					}
					return false;
				case 1:
					if (Param2.f_2 != -1 && __LIB_6__::func_16(&((uParam10[0 /*118*/])->f_102)))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[1 /*118*/])->f_102.f_7, 0);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[0 /*118*/])->f_102.f_7, 1);
						uParam1->f_1 = Param2.f_2;
						uParam1->f_3 = 0;
						uParam1->f_4 = 1;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return true;
					}
					else if (Param2.f_3 != -1 && __LIB_6__::func_16(&((uParam10[0 /*118*/])->f_110)))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[1 /*118*/])->f_102.f_7, 0);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[0 /*118*/])->f_110.f_7, 1);
						uParam1->f_1 = Param2.f_3;
						uParam1->f_3 = 0;
						uParam1->f_4 = 2;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return true;
					}
					return false;
				case 0:
					if (Param2.f_1 == -1)
					{
						return false;
					}
					if (uParam1->f_5)
					{
						iVar0 = __LIB_6__::func_332(&((uParam10[0 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							__LIB_6__::func_253(uParam10[1 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[0 /*118*/])->f_55.f_5[iVar0 /*6*/].f_5, 1);
							uParam1->f_1 = Param2.f_1;
							uParam1->f_3 = 0;
							uParam1->f_4 = 0;
							uParam1->f_5 = 1;
							uParam1->f_6 = iVar0;
							return true;
						}
						iVar0 = __LIB_6__::func_333(&((uParam10[0 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							__LIB_6__::func_253(uParam10[1 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[0 /*118*/])->f_55.f_30[iVar0 /*4*/].f_3, 1);
							uParam1->f_1 = Param2.f_1;
							uParam1->f_3 = 0;
							uParam1->f_4 = 0;
							uParam1->f_5 = 0;
							uParam1->f_6 = iVar0;
							return true;
						}
					}
					else
					{
						iVar0 = __LIB_6__::func_333(&((uParam10[0 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							__LIB_6__::func_253(uParam10[1 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[0 /*118*/])->f_55.f_30[iVar0 /*4*/].f_3, 1);
							uParam1->f_1 = Param2.f_1;
							uParam1->f_3 = 0;
							uParam1->f_4 = 0;
							uParam1->f_5 = 0;
							uParam1->f_6 = iVar0;
							return true;
						}
						iVar0 = __LIB_6__::func_332(&((uParam10[0 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							__LIB_6__::func_253(uParam10[1 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[0 /*118*/])->f_55.f_5[iVar0 /*6*/].f_5, 1);
							uParam1->f_1 = Param2.f_1;
							uParam1->f_3 = 0;
							uParam1->f_4 = 0;
							uParam1->f_5 = 1;
							uParam1->f_6 = iVar0;
							return true;
						}
					}
					return false;
				default:
					break;
			}
			break;
		case 3:
			if (uParam1->f_3 == 1)
			{
				return false;
			}
			switch (uParam1->f_4)
			{
				case 2:
					if (Param2.f_7 != -1 && __LIB_6__::func_16(&((uParam10[1 /*118*/])->f_110)))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[0 /*118*/])->f_110.f_7, 0);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[1 /*118*/])->f_110.f_7, 1);
						uParam1->f_1 = Param2.f_7;
						uParam1->f_3 = 1;
						uParam1->f_4 = 2;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return true;
					}
					else if (Param2.f_6 != -1 && __LIB_6__::func_16(&((uParam10[1 /*118*/])->f_102)))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[0 /*118*/])->f_110.f_7, 0);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[1 /*118*/])->f_102.f_7, 1);
						uParam1->f_1 = Param2.f_6;
						uParam1->f_3 = 1;
						uParam1->f_4 = 1;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return true;
					}
					return false;
				case 1:
					if (Param2.f_6 != -1 && __LIB_6__::func_16(&((uParam10[1 /*118*/])->f_102)))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[0 /*118*/])->f_102.f_7, 0);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[1 /*118*/])->f_102.f_7, 1);
						uParam1->f_1 = Param2.f_6;
						uParam1->f_3 = 1;
						uParam1->f_4 = 1;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return true;
					}
					else if (Param2.f_7 != -1 && __LIB_6__::func_16(&((uParam10[1 /*118*/])->f_110)))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[0 /*118*/])->f_102.f_7, 0);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[1 /*118*/])->f_110.f_7, 1);
						uParam1->f_1 = Param2.f_7;
						uParam1->f_3 = 1;
						uParam1->f_4 = 2;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return true;
					}
					return false;
				case 0:
					if (Param2.f_5 == -1)
					{
						return false;
					}
					if (uParam1->f_5)
					{
						iVar0 = __LIB_6__::func_332(&((uParam10[1 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							__LIB_6__::func_253(uParam10[0 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[1 /*118*/])->f_55.f_5[iVar0 /*6*/].f_5, 1);
							uParam1->f_1 = Param2.f_5;
							uParam1->f_3 = 1;
							uParam1->f_4 = 0;
							uParam1->f_5 = 1;
							uParam1->f_6 = iVar0;
							return true;
						}
						iVar0 = __LIB_6__::func_333(&((uParam10[1 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							__LIB_6__::func_253(uParam10[0 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[1 /*118*/])->f_55.f_30[iVar0 /*4*/].f_3, 1);
							uParam1->f_1 = Param2.f_5;
							uParam1->f_3 = 1;
							uParam1->f_4 = 0;
							uParam1->f_5 = 0;
							uParam1->f_6 = iVar0;
							return true;
						}
					}
					else
					{
						iVar0 = __LIB_6__::func_333(&((uParam10[1 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							__LIB_6__::func_253(uParam10[0 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[1 /*118*/])->f_55.f_30[iVar0 /*4*/].f_3, 1);
							uParam1->f_1 = Param2.f_5;
							uParam1->f_3 = 1;
							uParam1->f_4 = 0;
							uParam1->f_5 = 0;
							uParam1->f_6 = iVar0;
							return true;
						}
						iVar0 = __LIB_6__::func_332(&((uParam10[1 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							__LIB_6__::func_253(uParam10[0 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[1 /*118*/])->f_55.f_5[iVar0 /*6*/].f_5, 1);
							uParam1->f_1 = Param2.f_5;
							uParam1->f_3 = 1;
							uParam1->f_4 = 0;
							uParam1->f_5 = 1;
							uParam1->f_6 = iVar0;
							return true;
						}
					}
					break;
			}
			break;
	}
	return false;
}

bool func_448(int iParam0, bool bParam1)
{
	float fVar0;
	fVar0 = __LIB_5__::func_941();
	if (((iParam0 == 1 && __LIB_6__::func_308(fVar0, bParam1)) || (iParam0 == 3 && __LIB_6__::func_309(fVar0, bParam1))) || (iParam0 == 2 && __LIB_6__::func_310(fVar0, bParam1)))
	{
		return true;
	}
	return false;
}

void func_449(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0, "ContPage");
	__LIB_6__::func_334(uVar0, uParam1);
	uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0, "FullPage");
	__LIB_6__::func_335(uVar1, &(uParam1->f_55));
	uVar2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0, "HalfPageTop");
	__LIB_6__::func_23(uVar2, &(uParam1->f_102));
	uVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0, "HalfPageBottom");
	__LIB_6__::func_23(uVar3, &(uParam1->f_110));
}

void func_450(int iParam0, bool bParam1)
{
	int iVar0[18];
	int iVar19[18];
	int iVar38[18];
	int iVar57;
	bool bVar58;
	bool bVar59;
	iVar0[0] = -224845272; /* GXTEntry: "Campfire Log Seat Cover" */
	iVar19[0] = -268335331;
	iVar38[0] = __LIB_1__::func_976();
	iVar0[1] = -147867326; /* GXTEntry: "Cougar Pelt Covered Chest" */
	iVar19[1] = 1546110128;
	iVar38[1] = -855912354;
	iVar0[2] = -1262979941; /* GXTEntry: "Ox Hide Rug" */
	iVar19[2] = 324486076;
	iVar38[2] = __LIB_1__::func_976();
	iVar0[3] = -2119627968; /* GXTEntry: "Boar Skin Table Cover" */
	iVar19[3] = -2052582076;
	iVar38[3] = -402976431;
	iVar0[4] = -837651311; /* GXTEntry: "Big Horn Ram Skull" */
	iVar19[4] = 1029525997;
	iVar38[4] = __LIB_1__::func_976();
	iVar0[5] = -2089261255; /* GXTEntry: "Alligator Skull" */
	iVar19[5] = -1472352094;
	iVar38[5] = __LIB_1__::func_976();
	iVar0[6] = -1145367359; /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[6] = -745860880;
	iVar38[6] = __LIB_1__::func_976();
	iVar0[7] = -1145367359; /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[7] = 1219276914;
	iVar38[7] = __LIB_1__::func_976();
	iVar0[8] = -1608451354; /* GXTEntry: "Boar Skin Rug" */
	iVar19[8] = -2104773585;
	iVar38[8] = __LIB_1__::func_976();
	iVar0[9] = 2137149309;
	iVar19[9] = -302735166;
	iVar38[9] = __LIB_1__::func_976();
	iVar0[10] = -1329287819; /* GXTEntry: "Pronghorn Skull" */
	iVar19[10] = -2077690059;
	iVar38[10] = __LIB_1__::func_976();
	iVar0[11] = -848232571; /* GXTEntry: "Elk Antlers" */
	iVar19[11] = 1548546221;
	iVar38[11] = __LIB_1__::func_976();
	iVar0[12] = -804860583; /* GXTEntry: "Scout Fire Ground Cover" */
	iVar19[12] = 2101101756;
	iVar38[12] = __LIB_1__::func_976();
	iVar0[13] = -7810518; /* GXTEntry: "Hanging Bones" */
	iVar19[13] = 1560807181;
	iVar38[13] = __LIB_1__::func_976();
	iVar0[14] = 1510372288; /* GXTEntry: "Moose Antlers" */
	iVar19[14] = 106249677;
	iVar38[14] = __LIB_1__::func_976();
	iVar0[15] = 858182906; /* GXTEntry: "Campfire Seat Cover" */
	iVar19[15] = -723982773;
	iVar38[15] = __LIB_1__::func_976();
	iVar0[16] = 708084994; /* GXTEntry: "Snake Skin Banjo Head" */
	iVar19[16] = 327932996;
	iVar38[16] = __LIB_1__::func_976();
	iVar0[17] = 765991018; /* GXTEntry: "Wolf Skull" */
	iVar19[17] = -15722296;
	iVar38[17] = __LIB_1__::func_976();
	bVar59 = false;
	if (iParam0 == 1)
	{
		iVar57 = __LIB_6__::func_327(iVar0[Global_1357549.f_575], 3);
		bVar58 = __LIB_6__::func_114(iVar0[Global_1357549.f_575]);
		bVar59 = (iVar57 > 0 || bVar58);
		if (bVar59 || bParam1)
		{
			if (__LIB_0__::func_30(iVar19[Global_1357549.f_575]))
			{
				if (!STREAMING::_IS_IMAP_ACTIVE(iVar19[Global_1357549.f_575]))
				{
					__LIB_5__::func_993(iVar19[Global_1357549.f_575], 1);
					__LIB_6__::func_28(iVar19[Global_1357549.f_575]);
				}
				if (__LIB_0__::func_30(iVar38[Global_1357549.f_575]))
				{
					if (STREAMING::_IS_IMAP_ACTIVE(iVar38[Global_1357549.f_575]))
					{
						STREAMING::_REMOVE_IMAP(iVar38[Global_1357549.f_575]);
					}
				}
			}
		}
		else
		{
			if (__LIB_0__::func_30(iVar19[Global_1357549.f_575]))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(iVar19[Global_1357549.f_575]))
				{
					__LIB_5__::func_993(iVar19[Global_1357549.f_575], 0);
					STREAMING::_REMOVE_IMAP(iVar19[Global_1357549.f_575]);
				}
			}
			if (__LIB_0__::func_30(iVar38[Global_1357549.f_575]))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(iVar38[Global_1357549.f_575]) == 0)
				{
					STREAMING::_REQUEST_IMAP(iVar38[Global_1357549.f_575]);
				}
			}
		}
	}
	if (iParam0 != 1 || __LIB_0__::func_592() == 2)
	{
		if (__LIB_0__::func_30(iVar38[Global_1357549.f_575]))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(iVar38[Global_1357549.f_575]))
			{
				STREAMING::_REMOVE_IMAP(iVar38[Global_1357549.f_575]);
			}
		}
		if (__LIB_0__::func_30(iVar19[Global_1357549.f_575]))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(iVar19[Global_1357549.f_575]))
			{
				__LIB_5__::func_993(iVar19[Global_1357549.f_575], 0);
				STREAMING::_REMOVE_IMAP(iVar19[Global_1357549.f_575]);
			}
		}
	}
}

void func_451(int iParam0, bool bParam1)
{
	int iVar0[18];
	int iVar19[18];
	int iVar38[18];
	iVar0[0] = 2137149309;
	iVar19[0] = joaat("CLE_UPG_CAMPFIRE_RUG_COW");
	iVar38[0] = __LIB_1__::func_976();
	iVar0[1] = -147867326; /* GXTEntry: "Cougar Pelt Covered Chest" */
	iVar19[1] = -1774140220;
	iVar38[1] = -262271608;
	iVar0[2] = -1262979941; /* GXTEntry: "Ox Hide Rug" */
	iVar19[2] = 1601820048;
	iVar38[2] = __LIB_1__::func_976();
	iVar0[3] = -2119627968; /* GXTEntry: "Boar Skin Table Cover" */
	iVar19[3] = 2025485344;
	iVar38[3] = 901520480;
	iVar0[4] = -837651311; /* GXTEntry: "Big Horn Ram Skull" */
	iVar19[4] = -1999465365;
	iVar38[4] = __LIB_1__::func_976();
	iVar0[5] = -2089261255; /* GXTEntry: "Alligator Skull" */
	iVar19[5] = 853723410;
	iVar38[5] = __LIB_1__::func_976();
	iVar0[6] = -1145367359; /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[6] = 1169958167;
	iVar38[6] = __LIB_1__::func_976();
	iVar0[7] = -1145367359; /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[7] = -792944828;
	iVar38[7] = __LIB_1__::func_976();
	iVar0[8] = -1608451354; /* GXTEntry: "Boar Skin Rug" */
	iVar19[8] = -2001921071;
	iVar38[8] = __LIB_1__::func_976();
	iVar0[9] = -7810518; /* GXTEntry: "Hanging Bones" */
	iVar19[9] = 157361403;
	iVar38[9] = __LIB_1__::func_976();
	iVar0[10] = -1329287819; /* GXTEntry: "Pronghorn Skull" */
	iVar19[10] = -492479795;
	iVar38[10] = __LIB_1__::func_976();
	iVar0[11] = -848232571; /* GXTEntry: "Elk Antlers" */
	iVar19[11] = -1284301817;
	iVar38[11] = __LIB_1__::func_976();
	iVar0[12] = -804860583; /* GXTEntry: "Scout Fire Ground Cover" */
	iVar19[12] = -1045282549;
	iVar38[12] = __LIB_1__::func_976();
	iVar0[13] = 1510372288; /* GXTEntry: "Moose Antlers" */
	iVar19[13] = -989202374;
	iVar38[13] = __LIB_1__::func_976();
	iVar0[14] = -224845272; /* GXTEntry: "Campfire Log Seat Cover" */
	iVar19[14] = 1538837441;
	iVar38[14] = __LIB_1__::func_976();
	iVar0[15] = 858182906; /* GXTEntry: "Campfire Seat Cover" */
	iVar19[15] = 530288130;
	iVar38[15] = __LIB_1__::func_976();
	iVar0[16] = 708084994; /* GXTEntry: "Snake Skin Banjo Head" */
	iVar19[16] = -1887167048;
	iVar38[16] = __LIB_1__::func_976();
	iVar0[17] = 765991018; /* GXTEntry: "Wolf Skull" */
	iVar19[17] = -347518940;
	iVar38[17] = __LIB_1__::func_976();
	if (iParam0 == 2)
	{
		if ((__LIB_6__::func_327(iVar0[Global_1357549.f_575], 3) > 0 || __LIB_6__::func_114(iVar0[Global_1357549.f_575])) || bParam1)
		{
			if (__LIB_0__::func_30(iVar19[Global_1357549.f_575]))
			{
				if (!STREAMING::_IS_IMAP_ACTIVE(iVar19[Global_1357549.f_575]))
				{
					__LIB_5__::func_993(iVar19[Global_1357549.f_575], 1);
					__LIB_6__::func_28(iVar19[Global_1357549.f_575]);
				}
			}
			if (__LIB_0__::func_30(iVar38[Global_1357549.f_575]))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(iVar38[Global_1357549.f_575]))
				{
					STREAMING::_REMOVE_IMAP(iVar38[Global_1357549.f_575]);
				}
			}
		}
		else
		{
			if (__LIB_0__::func_30(iVar19[Global_1357549.f_575]))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(iVar19[Global_1357549.f_575]))
				{
					__LIB_5__::func_993(iVar19[Global_1357549.f_575], 0);
					STREAMING::_REMOVE_IMAP(iVar19[Global_1357549.f_575]);
				}
			}
			if (__LIB_0__::func_30(iVar38[Global_1357549.f_575]))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(iVar38[Global_1357549.f_575]) == 0)
				{
					STREAMING::_REQUEST_IMAP(iVar38[Global_1357549.f_575]);
				}
			}
		}
	}
	if (iParam0 != 2 || __LIB_0__::func_592() != 1)
	{
		if (__LIB_0__::func_30(iVar38[Global_1357549.f_575]))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(iVar38[Global_1357549.f_575]))
			{
				STREAMING::_REMOVE_IMAP(iVar38[Global_1357549.f_575]);
			}
		}
		if (__LIB_0__::func_30(iVar19[Global_1357549.f_575]))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(iVar19[Global_1357549.f_575]))
			{
				__LIB_5__::func_993(iVar19[Global_1357549.f_575], 0);
				STREAMING::_REMOVE_IMAP(iVar19[Global_1357549.f_575]);
			}
		}
	}
}

void func_452(int iParam0, bool bParam1)
{
	int iVar0[18];
	int iVar19[18];
	int iVar38[18];
	int iVar57;
	bool bVar58;
	bool bVar59;
	iVar0[0] = 2137149309;
	iVar19[0] = 1104800593;
	iVar38[0] = __LIB_1__::func_976();
	iVar0[1] = -1145367359; /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[1] = 968084866;
	iVar38[1] = __LIB_1__::func_976();
	iVar0[2] = -1145367359; /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[2] = -696422730;
	iVar38[2] = __LIB_1__::func_976();
	iVar0[3] = -1329287819; /* GXTEntry: "Pronghorn Skull" */
	iVar19[3] = 1423158124;
	iVar38[3] = __LIB_1__::func_976();
	iVar0[4] = -1608451354; /* GXTEntry: "Boar Skin Rug" */
	iVar19[4] = -1063259251;
	iVar38[4] = __LIB_1__::func_976();
	iVar0[5] = -147867326; /* GXTEntry: "Cougar Pelt Covered Chest" */
	iVar19[5] = -317096325;
	iVar38[5] = 1025787994;
	iVar0[6] = -1262979941; /* GXTEntry: "Ox Hide Rug" */
	iVar19[6] = -1255331540;
	iVar38[6] = __LIB_1__::func_976();
	iVar0[7] = -2119627968; /* GXTEntry: "Boar Skin Table Cover" */
	iVar19[7] = -1063926197;
	iVar38[7] = 629519239;
	iVar0[8] = -837651311; /* GXTEntry: "Big Horn Ram Skull" */
	iVar19[8] = 360408116;
	iVar38[8] = __LIB_1__::func_976();
	iVar0[9] = -2089261255; /* GXTEntry: "Alligator Skull" */
	iVar19[9] = -408234235;
	iVar38[9] = __LIB_1__::func_976();
	iVar0[10] = -848232571; /* GXTEntry: "Elk Antlers" */
	iVar19[10] = -1016007592;
	iVar38[10] = __LIB_1__::func_976();
	iVar0[11] = -804860583; /* GXTEntry: "Scout Fire Ground Cover" */
	iVar19[11] = -763678874;
	iVar38[11] = __LIB_1__::func_976();
	iVar0[12] = 1510372288; /* GXTEntry: "Moose Antlers" */
	iVar19[12] = -1361342903;
	iVar38[12] = __LIB_1__::func_976();
	iVar0[13] = -7810518; /* GXTEntry: "Hanging Bones" */
	iVar19[13] = -483001024;
	iVar38[13] = __LIB_1__::func_976();
	iVar0[14] = -224845272; /* GXTEntry: "Campfire Log Seat Cover" */
	iVar19[14] = 255767990;
	iVar38[14] = __LIB_1__::func_976();
	iVar0[15] = 858182906; /* GXTEntry: "Campfire Seat Cover" */
	iVar19[15] = -2048221620;
	iVar38[15] = __LIB_1__::func_976();
	iVar0[16] = 765991018; /* GXTEntry: "Wolf Skull" */
	iVar19[16] = 339295570;
	iVar38[16] = __LIB_1__::func_976();
	iVar0[17] = 708084994; /* GXTEntry: "Snake Skin Banjo Head" */
	iVar19[17] = 668976634;
	iVar38[17] = __LIB_1__::func_976();
	bVar59 = false;
	if (iParam0 == 6)
	{
		iVar57 = __LIB_6__::func_327(iVar0[Global_1357549.f_575], 3);
		bVar58 = __LIB_6__::func_114(iVar0[Global_1357549.f_575]);
		bVar59 = (iVar57 > 0 || bVar58);
		if (bVar59 || bParam1)
		{
			if (__LIB_0__::func_30(iVar19[Global_1357549.f_575]))
			{
				if (!STREAMING::_IS_IMAP_ACTIVE(iVar19[Global_1357549.f_575]))
				{
					__LIB_5__::func_993(iVar19[Global_1357549.f_575], 1);
					__LIB_6__::func_28(iVar19[Global_1357549.f_575]);
				}
			}
			if (__LIB_0__::func_30(iVar38[Global_1357549.f_575]))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(iVar38[Global_1357549.f_575]))
				{
					STREAMING::_REMOVE_IMAP(iVar38[Global_1357549.f_575]);
				}
			}
		}
		else
		{
			if (__LIB_0__::func_30(iVar19[Global_1357549.f_575]))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(iVar19[Global_1357549.f_575]))
				{
					__LIB_5__::func_993(iVar19[Global_1357549.f_575], 0);
					STREAMING::_REMOVE_IMAP(iVar19[Global_1357549.f_575]);
				}
			}
			if (__LIB_0__::func_30(iVar38[Global_1357549.f_575]))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(iVar38[Global_1357549.f_575]) == 0)
				{
					STREAMING::_REQUEST_IMAP(iVar38[Global_1357549.f_575]);
				}
			}
		}
	}
	if (iParam0 != 6 || __LIB_0__::func_592() != 1)
	{
		if (__LIB_0__::func_30(iVar38[Global_1357549.f_575]))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(iVar38[Global_1357549.f_575]))
			{
				STREAMING::_REMOVE_IMAP(iVar38[Global_1357549.f_575]);
			}
		}
		if (__LIB_0__::func_30(iVar19[Global_1357549.f_575]))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(iVar19[Global_1357549.f_575]))
			{
				__LIB_5__::func_993(iVar19[Global_1357549.f_575], 0);
				STREAMING::_REMOVE_IMAP(iVar19[Global_1357549.f_575]);
			}
		}
	}
}

bool func_453(int iParam0, bool bParam1, int iParam2, var uParam3)
{
	if (uParam3->f_62 >= 12)
	{
		return false;
	}
	if (iParam2 <= 0)
	{
		return false;
	}
	uParam3->f_1[uParam3->f_62 /*5*/] = 0;
	MISC::SET_BIT(&(uParam3->f_1[uParam3->f_62 /*5*/]), 0);
	if (bParam1)
	{
		MISC::SET_BIT(&(uParam3->f_1[uParam3->f_62 /*5*/]), 1);
	}
	uParam3->f_1[uParam3->f_62 /*5*/].f_3 = iParam0;
	uParam3->f_1[uParam3->f_62 /*5*/].f_1 = -1;
	uParam3->f_1[uParam3->f_62 /*5*/].f_2 = 0;
	uParam3->f_1[uParam3->f_62 /*5*/].f_4 = -iParam2;
	uParam3->f_62++;
	__LIB_6__::func_337(iParam2);
	return true;
}

void func_454(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (!__LIB_6__::func_338(310186733))
	{
		Global_40.f_4283.f_307.f_3 = (Global_40.f_4283.f_307.f_3 + iParam0);
		if (Global_40.f_4283.f_307.f_3 >= 5000)
		{
			__LIB_6__::func_339(310186733);
		}
	}
}

void func_455(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (!__LIB_6__::func_338(-1959946884))
	{
		Global_40.f_4283.f_307.f_4 = (Global_40.f_4283.f_307.f_4 + iParam0);
		if (Global_40.f_4283.f_307.f_4 >= 3)
		{
			__LIB_6__::func_339(-1959946884);
		}
	}
}

void func_456()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_1__::func_533(1) && __LIB_0__::func_296(0, 0, 1))
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Global_1357549.f_3[0]) || !VOLUME::_DOES_VOLUME_EXIST(Global_1357549.f_3[2]))
	{
		return;
	}
	if ((__LIB_0__::func_1(Global_1935630, 16384) || __LIB_6__::func_55(__LIB_5__::func_824(__LIB_0__::func_12()), 256)) || STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	iVar0 = __LIB_0__::func_177(Global_1359489.f_10);
	if (__LIB_6__::func_123(iVar0, Global_1359489.f_10))
	{
		__LIB_6__::func_269(iVar0);
	}
	iVar1 = Local_18.f_1712;
	if (__LIB_6__::func_123(Global_1357549.f_1675[iVar1 /*5*/].f_3, -1))
	{
		__LIB_6__::func_269(Global_1357549.f_1675[iVar1 /*5*/].f_3);
	}
	iVar2 = Local_18.f_1712 + 1;
	if (iVar2 >= 3)
	{
		iVar2 = 0;
	}
	Local_18.f_1712 = iVar2;
}

void func_457(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_4))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_4));
	}
	MISC::CLEAR_BIT(&(uParam0->f_1), 2);
	__LIB_6__::func_355(uParam0);
	__LIB_6__::func_356(uParam0);
	if (MISC::IS_BIT_SET(uParam0->f_1, 6))
	{
		__LIB_5__::func_849(1, uParam0);
	}
	if (uParam0->f_6 != -1)
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&(uParam0->f_6), 0);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_5))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_5);
	}
	__LIB_5__::func_850(uParam0);
}

void func_458()
{
	struct<7> Var0;
	Global_40.f_4283.f_567 = { Var0 };
	__LIB_6__::func_358();
	Global_1357549.f_1897 = 0;
}

int func_459(bool bParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return -1;
	}
	iVar0 = -1;
	fVar1 = 9999999f;
	iVar2 = 0;
	while (iVar2 < 26)
	{
		iVar3 = iVar2;
		if (!__LIB_1__::func_307(iVar3, 1, 1))
		{
		}
		else if (!bParam0)
		{
			if (Global_1357549.f_1497 == iVar3)
			{
			}
			else if (!__LIB_6__::func_364(iVar3, 0, iParam1))
			{
			}
			else
			{
				fVar4 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_ENTITY_COORDS(__LIB_0__::func_271(iVar3), true, false));
				if (fVar4 < fVar1)
				{
					fVar1 = fVar4;
					iVar0 = iVar3;
				}
			}
			iVar2++;
			return iVar0;
		}
	}
}

void func_460(var uParam0, var uParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	if (*iParam2)
	{
		return;
	}
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < uParam0->f_253)
	{
		if (MISC::IS_BIT_SET(*uParam1, iVar1))
		{
		}
		else if (MISC::IS_BIT_SET(uParam0->f_255, iVar1))
		{
		}
		else if (uParam0->f_9[iVar1 /*9*/].f_8 != 0)
		{
			if (!__LIB_5__::func_903(uParam0->f_9[iVar1 /*9*/].f_8))
			{
			}
			else if (uParam0->f_9[iVar1 /*9*/].f_1 == 0)
			{
			}
			else if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_9[iVar1 /*9*/].f_1))
			{
				STREAMING::REQUEST_MODEL(uParam0->f_9[iVar1 /*9*/].f_1, false);
				bVar0 = false;
			}
			else
			{
				__LIB_6__::func_365(iVar1, uParam0);
				*iParam2 = 1;
				if (iVar1 != (uParam0->f_253 - 1))
				{
					bVar0 = false;
				}
			}
			else
			{
				iVar1++;
			}
			if (bVar0)
			{
				MISC::SET_BIT(&(uParam0->f_254), 4);
				return;
			}
		}
	}
}

bool func_461()
{
	int iVar0;
	if (!__LIB_6__::func_362())
	{
		return false;
	}
	iVar0 = __LIB_0__::func_398(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (__LIB_6__::func_276(iVar0))
	{
		return false;
	}
	return true;
}

bool func_462(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_356(iParam0);
	if (iVar0 == joaat("WEAPON"))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == joaat("AMMO"))
	{
		if (!__LIB_2__::func_516(iParam0, 1))
		{
			return false;
		}
	}
	return __LIB_6__::func_395(iParam0, 0, bParam2) >= iParam1;
}

int func_463(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_MELEE(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		Var0 = { __LIB_1__::func_615(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = __LIB_0__::func_235((386 + iVar28), 1);
			if (__LIB_1__::func_112(iParam0, &Var0, iVar5, 0))
			{
				if (__LIB_1__::func_429(iParam0, &Var6, iVar5))
				{
					Var29 = { __LIB_0__::func_429(iParam0, Var0, iVar5, 0) };
					__LIB_0__::func_939(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (__LIB_0__::func_708(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					__LIB_1__::func_543(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					__LIB_0__::func_718(iParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}
}

void func_464(var uParam0)
{
	if (uParam0->f_773)
	{
		__LIB_6__::func_108(uParam0);
		if (uParam0->f_772)
		{
			__LIB_1__::func_484(uParam0->f_1, "JOURNAL_INFO_HIDE", 1);
		}
		else
		{
			__LIB_1__::func_484(uParam0->f_1, "JOURNAL_INFO_SHOW", 1);
		}
	}
	else
	{
		__LIB_6__::func_373(uParam0);
	}
}

void func_465(int* iParam0)
{
	if (!__LIB_6__::func_367(iParam0, 1) && !__LIB_0__::func_139(iParam0->f_9))
	{
		iParam0->f_9 = __LIB_4__::func_450("BUTCH_DONE", joaat("INPUT_GAME_MENU_CANCEL"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
		__LIB_4__::func_12(iParam0->f_9, -2019190071, 0, 1);
	}
}

void func_466(int iParam0)
{
	if (((__LIB_1__::func_198(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT_ACTIVE"), 1) || __LIB_1__::func_198(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), 1)) || __LIB_1__::func_198(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT_LATE"), 1)) || __LIB_1__::func_198(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT_LATE"), 1))
	{
		return;
	}
	if (__LIB_0__::func_190())
	{
		if (!__LIB_0__::func_75(&(iParam0->f_3480)))
		{
			__LIB_6__::func_277();
			__LIB_1__::func_283(&(iParam0->f_3480), 0);
		}
		if (__LIB_0__::func_265(&(iParam0->f_3480)) > 10f && !__LIB_2__::func_776())
		{
			__LIB_5__::func_836();
		}
	}
}

void func_467(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_5__::func_837(iParam0);
	if (iVar0 != -1)
	{
		if (__LIB_2__::func_804(19, 4))
		{
			__LIB_2__::func_772(19);
		}
		if (!__LIB_6__::func_125(iVar0))
		{
			__LIB_6__::func_350(iVar0, 19, 1, 1);
		}
	}
}

int func_468()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (__LIB_1__::func_198(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"), 1))
	{
		return -1;
	}
	if (__LIB_4__::func_635(4))
	{
		return -1;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return -1;
	}
	if (PED::_0x5407B7288D0478B7(Global_35, 516) == 0)
	{
		return -1;
	}
	if (PED::_0x336B3D200AB007CB(Global_35, Global_36, 100f, 512) == 0)
	{
		return -1;
	}
	if (__LIB_0__::func_296(0, 0, 1))
	{
		return -1;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CARAVAN_ABSENCE_SCENE")) > 0)
	{
		return -1;
	}
	bVar0 = ((Local_18.f_45 == 7 || Local_18.f_45 == 8) || Local_18.f_45 == 4);
	if (!__LIB_5__::func_855(1))
	{
		if (LAW::_0x9D5C9A5A3321B128(PLAYER::PLAYER_ID()))
		{
			if (bVar0)
			{
				__LIB_0__::func_45("RANCH_LAW_WARN", 10000, 0, 0, 0, 1);
			}
			else
			{
				__LIB_0__::func_45("CAMP_LAW_WARN", 10000, 0, 0, 0, 1);
			}
		}
		else if (bVar0)
		{
			__LIB_0__::func_45("RANCH_COMBAT_WARN", 10000, 0, 0, 0, 1);
		}
		else
		{
			__LIB_0__::func_45("CAMP_COMBAT_WARN", 10000, 0, 0, 0, 1);
		}
		__LIB_5__::func_873(1);
	}
	if (!bVar0)
	{
		__LIB_6__::func_190();
	}
	if (__LIB_1__::func_533(512))
	{
		if (bVar0)
		{
			__LIB_6__::func_190();
			return 2;
		}
		else
		{
			return 1;
		}
	}
	if (Global_1357549.f_1497 != -1)
	{
		iVar1 = __LIB_0__::func_271(Global_1357549.f_1497);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar2 = __LIB_5__::func_874(Local_18.f_1718.f_1);
			iVar3 = 0;
			while (iVar3 < iVar2)
			{
				iVar4 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, Local_18.f_1718.f_1));
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iVar1, iVar4, 17))
				{
					if (bVar0)
					{
						__LIB_6__::func_190();
						return 2;
					}
					else
					{
						return 1;
					}
				}
				iVar3++;
			}
		}
	}
	return -1;
}

void func_469(int iParam0)
{
	__LIB_6__::func_391(iParam0, Global_1357549.f_3[2], Global_1357549.f_3[3], 0);
	__LIB_6__::func_72(Global_1357549.f_3[2]);
	if (((!__LIB_4__::func_635(64) && !__LIB_5__::func_855(4)) && !__LIB_0__::func_1(Global_1935630, 4194304)) && VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1357549.f_3[2], Global_36))
	{
		__LIB_6__::func_124(0);
	}
	if (iParam0->f_49)
	{
		__LIB_6__::func_392(iParam0);
	}
	else
	{
		__LIB_6__::func_287(iParam0);
	}
}

void func_470(int iParam0)
{
	int iVar1;
	if (*iParam0 == -15)
	{
		*iParam0 = __LIB_0__::func_23();
	}
	if (__LIB_6__::func_192())
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(18, 27);
	}
	else
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(7, 21);
	}
	__LIB_1__::func_446(iParam0, 0, 0, iVar1, 0, 0, 0, 0);
}

int func_471(int iParam0, char[32] cParam1, int iParam9)
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam1))
	{
		return 0;
	}
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_59(iParam0);
	if (iVar0 != 0 && __LIB_6__::func_88(iParam0))
	{
		Global_1360165[iParam0 /*1157*/].f_39 = { cParam1 };
		PERSCHAR::_0x187D65F3AEC5D679(iVar0, &cParam1);
		__LIB_0__::func_288(iParam0, 17, 1);
		if (iParam9 != -1)
		{
			iVar1 = __LIB_0__::func_23();
			__LIB_1__::func_446(&iVar1, 0, 0, iParam9, 0, 0, 0, 0);
			Global_40.f_4942[iParam0 /*60*/].f_46 = iVar1;
			Global_40.f_4942[iParam0 /*60*/].f_49 = 4;
		}
		else
		{
			Global_40.f_4942[iParam0 /*60*/].f_46 = -15;
			Global_40.f_4942[iParam0 /*60*/].f_49 = 0;
		}
		Global_1360165[iParam0 /*1157*/].f_56 = 1;
		return 1;
	}
	return 0;
}

bool func_472(int* iParam0)
{
	if (__LIB_0__::func_592() == 1)
	{
		if (__LIB_0__::func_86(__LIB_5__::func_913(__LIB_5__::func_846())) == 0)
		{
			if (__LIB_3__::func_26() == 0)
			{
				if (__LIB_0__::func_293(27))
				{
					if (__LIB_2__::func_776() == 0)
					{
						if (__LIB_6__::func_398(iParam0))
						{
							return true;
						}
					}
					else
					{
						__LIB_0__::func_11("Camp Butcher: mission running", iParam0);
					}
				}
				else
				{
					__LIB_0__::func_11("Camp Butcher: locked feature", iParam0);
				}
			}
			else
			{
				__LIB_0__::func_11("Camp Butcher: walk n talk vig active", iParam0);
			}
		}
		else
		{
			__LIB_0__::func_11("Camp Butcher: no donation point", iParam0);
		}
	}
	else
	{
		__LIB_0__::func_11("Camp Butcher: not in running state", iParam0);
	}
	return false;
}

bool func_473(var uParam0)
{
	int iVar0;
	int iVar1;
	if (!__LIB_6__::func_160(uParam0->f_45))
	{
		return true;
	}
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_1357549.f_1675[iVar1 /*5*/] = __LIB_5__::func_870(iVar1);
		if (Global_1357549.f_1675[iVar1 /*5*/] == 0)
		{
		}
		else if (!__LIB_6__::func_370(iVar1))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

int func_474(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1[3];
	int iVar5[3];
	int iVar9[3];
	int iVar13[3];
	int iVar17;
	iVar0 = __LIB_1__::func_976();
	iVar1[0] = -1687561002;
	iVar1[1] = 1957225320;
	iVar1[2] = -860696938;
	iVar5[0] = -1971474291;
	iVar5[1] = -1425946870;
	iVar5[2] = -1114426126;
	iVar9[0] = -316909020;
	iVar9[1] = -1962893335;
	iVar9[2] = 1351589798;
	iVar13[0] = 300868838;
	iVar13[1] = -1788578071;
	iVar13[2] = 1157066259;
	if (((__LIB_6__::func_21() || __LIB_1__::func_44(Global_1347702[59 /*49*/].f_15)) || __LIB_1__::func_44(Global_1347702[0 /*49*/].f_15)) || __LIB_5__::func_975(64))
	{
		iVar13[0] = -316909020;
		iVar13[1] = -1962893335;
		iVar13[2] = 1351589798;
		if (iParam0 == 0)
		{
			if (STREAMING::_IS_IMAP_ACTIVE(300868838))
			{
				STREAMING::_REMOVE_IMAP(300868838);
			}
			if (STREAMING::_IS_IMAP_ACTIVE(-1788578071))
			{
				STREAMING::_REMOVE_IMAP(-1788578071);
			}
			if (STREAMING::_IS_IMAP_ACTIVE(1157066259))
			{
				STREAMING::_REMOVE_IMAP(1157066259);
			}
		}
		if (__LIB_0__::func_702(Global_1835011[9 /*74*/].f_1) == 0 && __LIB_1__::func_44(Global_1835011[9 /*74*/].f_1) == 0)
		{
			if (iParam0 == 0)
			{
				if (STREAMING::_IS_IMAP_ACTIVE(1475953931))
				{
					STREAMING::_REMOVE_IMAP(1475953931);
				}
				if (STREAMING::_IS_IMAP_ACTIVE(1475953931))
				{
					STREAMING::_REMOVE_IMAP(1475953931);
				}
				if (STREAMING::_IS_IMAP_ACTIVE(1475953931))
				{
					STREAMING::_REMOVE_IMAP(1475953931);
				}
			}
		}
	}
	if (((((__LIB_0__::func_702(Global_1835011[9 /*74*/].f_1) || __LIB_1__::func_44(Global_1835011[9 /*74*/].f_1)) || __LIB_6__::func_74()) || __LIB_0__::func_592() == 2) || __LIB_1__::func_44(Global_1347702[66 /*49*/].f_15)) || ((__LIB_1__::func_44(Global_1835011[10 /*74*/].f_1) && __LIB_1__::func_185(11)) && __LIB_5__::func_975(64) == 0))
	{
		iVar9[0] = 1475953931;
		iVar9[1] = 1475953931;
		iVar9[2] = 1475953931;
		iVar13[0] = 1475953931;
		iVar13[1] = 1475953931;
		iVar13[2] = 1475953931;
	}
	else
	{
		iVar9[0] = -316909020;
		iVar9[1] = -1962893335;
		iVar9[2] = 1351589798;
	}
	if (__LIB_6__::func_11() || __LIB_1__::func_44(Global_1835011[4 /*74*/].f_1))
	{
		iVar5[0] = iVar1[0];
		iVar5[1] = iVar1[1];
		iVar5[2] = iVar1[2];
	}
	if (__LIB_6__::func_22(1) && iParam0 == 1)
	{
		iVar1[0] = -1971474291;
		iVar1[1] = -1425946870;
		iVar1[2] = -1114426126;
		iVar5[0] = -1687561002;
		iVar5[1] = 1957225320;
		iVar5[2] = -860696938;
		iVar17 = 0;
		while (iVar17 < 3)
		{
			if (STREAMING::_IS_IMAP_ACTIVE(iVar1[iVar17]))
			{
				STREAMING::_REMOVE_IMAP(iVar1[iVar17]);
			}
			if (STREAMING::_IS_IMAP_ACTIVE(iVar5[iVar17]))
			{
				STREAMING::_REMOVE_IMAP(iVar5[iVar17]);
			}
			iVar17++;
		}
		return __LIB_1__::func_976();
	}
	switch (iParam0)
	{
		case 1:
			iVar0 = __LIB_6__::func_330(&iVar1, &iVar5, bParam1);
			break;
		case 0:
			iVar0 = __LIB_6__::func_330(&iVar9, &iVar13, bParam1);
			break;
	}
	return iVar0;
}

int func_475(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1[3];
	int iVar5[3];
	int iVar9[3];
	int iVar13[3];
	iVar0 = __LIB_1__::func_976();
	iVar1[0] = 1209017192;
	iVar1[1] = -2143243848;
	iVar1[2] = 510052409;
	iVar5[0] = -644575724;
	iVar5[1] = 291770965;
	iVar5[2] = 1700661865;
	iVar9[0] = 1070723367;
	iVar9[1] = 1070723367;
	iVar9[2] = 1070723367;
	if ((((((__LIB_0__::func_702(Global_1835011[22 /*74*/].f_1) || __LIB_1__::func_44(Global_1835011[22 /*74*/].f_1)) || __LIB_0__::func_702(Global_1835011[26 /*74*/].f_1)) || __LIB_1__::func_44(Global_1835011[26 /*74*/].f_1)) || ((__LIB_1__::func_44(Global_1835011[20 /*74*/].f_1) || __LIB_1__::func_185(20)) && __LIB_1__::func_185(22) == 0)) || (((__LIB_1__::func_44(Global_1835011[19 /*74*/].f_1) || (__LIB_0__::func_76(Global_1898437) == 19 && __LIB_6__::func_110())) || __LIB_1__::func_185(19)) && __LIB_1__::func_185(22) == 0)) && __LIB_5__::func_975(64) == 0)
	{
		if (iParam0 == 0)
		{
			if (STREAMING::_IS_IMAP_ACTIVE(-109425099))
			{
				STREAMING::_REMOVE_IMAP(-109425099);
			}
		}
		iVar13[0] = 1261237250;
		iVar13[1] = 1261237250;
		iVar13[2] = 1261237250;
		iVar9[0] = 1261237250;
		iVar9[1] = 1261237250;
		iVar9[2] = 1261237250;
	}
	else
	{
		if (iParam0 == 0)
		{
			if (STREAMING::_IS_IMAP_ACTIVE(1261237250))
			{
				STREAMING::_REMOVE_IMAP(1261237250);
			}
		}
		iVar13[0] = -109425099;
		iVar13[1] = -109425099;
		iVar13[2] = -109425099;
	}
	if ((((__LIB_0__::func_702(Global_1835011[23 /*74*/].f_1) || __LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) || (((__LIB_1__::func_185(22) && __LIB_1__::func_185(23) == 0) && __LIB_1__::func_185(24)) && (__LIB_2__::func_774(20) || __LIB_1__::func_185(20)))) || (((__LIB_1__::func_185(22) && __LIB_1__::func_185(23) == 0) && __LIB_1__::func_185(20)) && (__LIB_2__::func_774(24) || __LIB_1__::func_185(24)))) || __LIB_5__::func_975(64))
	{
		if (iParam0 == 0)
		{
			if (STREAMING::_IS_IMAP_ACTIVE(1070723367))
			{
				STREAMING::_REMOVE_IMAP(1070723367);
			}
		}
		iVar9[0] = -109425099;
		iVar9[1] = -109425099;
		iVar9[2] = -109425099;
	}
	if (__LIB_6__::func_11())
	{
		iVar5[0] = iVar1[0];
		iVar5[1] = iVar1[1];
		iVar5[2] = iVar1[2];
	}
	switch (iParam0)
	{
		case 1:
			iVar0 = __LIB_6__::func_330(&iVar1, &iVar5, bParam1);
			break;
		case 0:
			iVar0 = __LIB_6__::func_330(&iVar13, &iVar9, bParam1);
			break;
	}
	return iVar0;
}

int func_476(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1[3];
	int iVar5[3];
	int iVar9[3];
	int iVar13[3];
	iVar0 = __LIB_1__::func_976();
	iVar1[0] = 531106429;
	iVar1[1] = 531106429;
	iVar1[2] = 531106429;
	iVar5[0] = 1069611813;
	iVar5[1] = 1069611813;
	iVar5[2] = 1069611813;
	iVar9[0] = 1102643191;
	iVar9[1] = 1102643191;
	iVar9[2] = 1102643191;
	iVar13[0] = 44502487;
	iVar13[1] = 44502487;
	iVar13[2] = 44502487;
	if ((((((__LIB_0__::func_702(Global_1835011[57 /*74*/].f_1) || __LIB_1__::func_44(Global_1835011[57 /*74*/].f_1)) || __LIB_0__::func_702(Global_1835011[59 /*74*/].f_1)) || __LIB_1__::func_44(Global_1835011[59 /*74*/].f_1)) || __LIB_0__::func_702(Global_1835011[58 /*74*/].f_1)) || __LIB_1__::func_44(Global_1835011[58 /*74*/].f_1)) || __LIB_6__::func_149())
	{
		iVar13[0] = 1102643191;
		iVar13[1] = 1102643191;
		iVar13[2] = 1102643191;
		if (iParam0 == 0)
		{
			if (STREAMING::_IS_IMAP_ACTIVE(44502487))
			{
				STREAMING::_REMOVE_IMAP(44502487);
			}
		}
	}
	if (__LIB_6__::func_11())
	{
		iVar5[0] = iVar1[0];
		iVar5[1] = iVar1[1];
		iVar5[2] = iVar1[2];
	}
	switch (iParam0)
	{
		case 1:
			iVar0 = __LIB_6__::func_330(&iVar1, &iVar5, bParam1);
			break;
		case 0:
			iVar0 = __LIB_6__::func_330(&iVar9, &iVar13, bParam1);
			break;
	}
	return iVar0;
}

void func_477(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	if (Global_40.f_4283.f_440[iParam0 /*63*/].f_1[iParam1 /*5*/].f_4 == 0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(*uParam2, 0);
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(*uParam2, 1);
	if (MISC::IS_BIT_SET(Global_40.f_4283.f_440[iParam0 /*63*/].f_1[iParam1 /*5*/], 0))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam2->f_1, 0);
	}
	else if (Global_40.f_4283.f_440[iParam0 /*63*/].f_1[iParam1 /*5*/].f_1 == -1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam2->f_1, joaat("PLYR_ARTHUR"));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam2->f_1, __LIB_6__::func_171(Global_40.f_4283.f_440[iParam0 /*63*/].f_1[iParam1 /*5*/].f_1, 1));
	}
	if (MISC::IS_BIT_SET(Global_40.f_4283.f_440[iParam0 /*63*/].f_1[iParam1 /*5*/], 0))
	{
		if (MISC::IS_BIT_SET(Global_40.f_4283.f_440[iParam0 /*63*/].f_1[iParam1 /*5*/], 1))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam2->f_2, __LIB_6__::func_25(Global_40.f_4283.f_440[iParam0 /*63*/].f_1[iParam1 /*5*/].f_3, 1));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam2->f_2, __LIB_6__::func_25(Global_40.f_4283.f_440[iParam0 /*63*/].f_1[iParam1 /*5*/].f_3, 0));
		}
	}
	else if (Global_40.f_4283.f_440[iParam0 /*63*/].f_1[iParam1 /*5*/].f_2 == 0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam2->f_2, -1328473345 /* GXTEntry: "Cash" */);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam2->f_2, Global_40.f_4283.f_440[iParam0 /*63*/].f_1[iParam1 /*5*/].f_2);
	}
	iVar0 = Global_40.f_4283.f_440[iParam0 /*63*/].f_1[iParam1 /*5*/].f_4;
	if (MISC::IS_BIT_SET(Global_40.f_4283.f_440[iParam0 /*63*/].f_1[iParam1 /*5*/], 0))
	{
		if (iVar0 >= 0)
		{
		}
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam2->f_3, MISC::_CREATE_VAR_STRING(2, "CASH_STRING_NEG", -iVar0));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam2->f_3, MISC::_CREATE_VAR_STRING(2, "CASH_STRING", iVar0));
	}
}

int func_478(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (PED::IS_PED_A_PLAYER(iParam0))
		{
			__LIB_5__::func_801(13, iParam1, 0, 0, 0);
		}
		else
		{
			__LIB_5__::func_801(13, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!__LIB_6__::func_150(0))
	{
	}
	__LIB_1__::func_550(&(Global_1946804.f_1497), iParam0, 1, iParam1, 1, bParam3, 1);
	return 1;
}

int func_479(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (PED::IS_PED_A_PLAYER(iParam0))
		{
			__LIB_5__::func_801(14, iParam1, 0, 0, 0);
		}
		else
		{
			__LIB_5__::func_801(14, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!__LIB_6__::func_151(0))
	{
	}
	__LIB_1__::func_550(&(Global_1946804.f_1497), iParam0, 1, iParam1, 1, bParam3, 1);
	return 1;
}

void func_480()
{
	if (__LIB_6__::func_275(2))
	{
		if (__LIB_0__::func_113())
		{
			if (__LIB_1__::func_185(15))
			{
				if (__LIB_1__::func_185(4) && !__LIB_1__::func_185(37))
				{
					if (!__LIB_0__::func_474(605) && !__LIB_1__::func_262(605))
					{
						__LIB_1__::func_240(605, 0);
					}
				}
				else if (__LIB_1__::func_185(43))
				{
					if (!__LIB_0__::func_474(605) && !__LIB_1__::func_262(605))
					{
						__LIB_1__::func_240(605, 0);
					}
				}
			}
		}
		if (__LIB_0__::func_181() && __LIB_1__::func_185(73))
		{
			if (!__LIB_0__::func_474(606) && !__LIB_1__::func_262(606))
			{
				__LIB_1__::func_240(606, 0);
			}
		}
	}
	if (__LIB_6__::func_62() && !__LIB_0__::func_474(538))
	{
		if ((MAP::DOES_BLIP_EXIST(Local_18.f_51.f_14) && MAP::DOES_BLIP_EXIST(Local_18.f_51.f_15)) && MAP::DOES_BLIP_EXIST(Local_18.f_51.f_13))
		{
			__LIB_1__::func_240(538, 0);
		}
	}
}

int func_481()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bVar0 = __LIB_6__::func_389();
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (__LIB_6__::func_159(iVar1))
		{
			Local_18.f_3402[iVar1] = PERSCHAR::_0xA00DF706C60173D1(__LIB_0__::func_59(iVar1));
			STREAMING::REQUEST_MODEL(Local_18.f_3402[iVar1], false);
			iVar2++;
			if (bVar0 && __LIB_0__::func_273(iVar1, 32768, 1))
			{
				Local_18.f_3430[iVar1] = PERSCHAR::_0xA00DF706C60173D1(__LIB_0__::func_725(iVar1, 1));
				Local_18.f_3430[iVar1] = Local_18.f_3430[iVar1];
				STREAMING::REQUEST_MODEL(Local_18.f_3430[iVar1], false);
				iVar2++;
				if (STREAMING::HAS_MODEL_LOADED(Local_18.f_3430[iVar1]) && Local_18.f_3374[iVar1] == 0)
				{
					iVar3 = __LIB_0__::func_859(iVar1);
					if (PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iVar3, Local_18.f_3430[iVar1]))
					{
						Local_18.f_3374[iVar1] = PED::_REQUEST_METAPED_OUTFIT(Local_18.f_3430[iVar1], iVar3);
					}
				}
			}
		}
		if ((iVar2 - Local_18.f_44) > 5)
		{
			Local_18.f_44 = iVar2;
			return 0;
		}
		iVar1++;
	}
	if (Global_40.f_4283.f_567)
	{
		Local_18.f_3478 = __LIB_6__::func_131();
		if (Local_18.f_3478 != 0)
		{
			STREAMING::REQUEST_MODEL(Local_18.f_3478, false);
			iVar2++;
		}
	}
	if (__LIB_6__::func_160(Local_18.f_45))
	{
		iVar4 = 0;
		while (iVar4 < 3)
		{
			Global_1357549.f_1675[iVar4 /*5*/] = __LIB_5__::func_870(iVar4);
			if (Global_1357549.f_1675[iVar4 /*5*/] == 0)
			{
			}
			else
			{
				Local_18.f_3458[iVar4] = PERSCHAR::_0xA00DF706C60173D1(Global_1357549.f_1675[iVar4 /*5*/]);
				if (Local_18.f_3458[iVar4] != 0)
				{
					STREAMING::REQUEST_MODEL(Local_18.f_3458[iVar4], false);
					iVar2++;
					if ((iVar2 - Local_18.f_44) > 5)
					{
						Local_18.f_44 = iVar2;
						return 0;
					}
				}
			}
			iVar4++;
		}
	}
	if (__LIB_1__::func_902(Local_18.f_46, &iVar6, &iVar7, 0, 1))
	{
		iVar5 = iVar6;
		while (iVar5 <= iVar7)
		{
			if (!__LIB_0__::func_29(iVar5))
			{
			}
			else if (__LIB_0__::func_117(iVar5, 32) && Local_18.f_46 != 22)
			{
			}
			else if (iVar8 < 15)
			{
				Local_18.f_3462[iVar8] = PERSCHAR::_0xA00DF706C60173D1(__LIB_0__::func_118(iVar5));
				if (Local_18.f_3462[iVar8] != 0)
				{
					STREAMING::REQUEST_MODEL(Local_18.f_3462[iVar8], false);
					iVar2++;
					iVar8++;
					if ((iVar2 - Local_18.f_44) > 5)
					{
						Local_18.f_44 = iVar2;
						return 0;
					}
				}
			}
			iVar5++;
		}
	}
	return 1;
}

int func_482()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar20;
	int iVar21;
	__LIB_1__::func_725();
	__LIB_6__::func_410();
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	if (__LIB_0__::func_296(0, 0, 1))
	{
		return 0;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CARAVAN_ABSENCE_SCENE")) > 0)
	{
		return 0;
	}
	iVar0 = __LIB_5__::func_874(Local_18.f_1718.f_1);
	if (iVar0 == 0)
	{
		return 3;
	}
	if (MISC::GET_GAME_TIMER() < Local_18.f_1718.f_2)
	{
		return -1;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, Local_18.f_1718.f_1));
		if (ENTITY::IS_ENTITY_DEAD(iVar2))
		{
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_35, iVar2, 1, 1))
		{
			ENTITY::_SET_ENTITY_HEALTH(Global_35, 0, iVar2);
			__LIB_0__::func_698(4);
			__LIB_0__::func_698(2);
			return -1;
		}
		iVar1++;
	}
	if (!__LIB_5__::func_855(16))
	{
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			iVar20 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, Local_18.f_1718.f_1));
			if (ENTITY::IS_ENTITY_DEAD(iVar20))
			{
			}
			else
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
				{
					case 0:
						iVar21 = 21030;
						break;
					case 1:
						iVar21 = 14284;
						break;
					case 2:
						iVar21 = 65478;
						break;
					case 3:
						iVar21 = 6884;
						break;
					case 4:
						iVar21 = 56200;
						break;
					case 5:
						iVar21 = 0;
						break;
				}
				Var3.f_14 = 1;
				Var3.f_6 = 0;
				Var3.f_4 = 1500;
				Var3.f_5 = 0;
				Var3.f_7 = 1;
				Var3.f_10 = 1;
				Var3.f_11 = 1f;
				Var3.f_1 = { PED::GET_PED_BONE_COORDS(Global_35, iVar21, 0f, 0f, 0f) };
				Var3.f_15 = 1;
				WEAPON::_0x5230D3F6EE56CFE6(iVar20, 0);
				TASK::TASK_SHOOT_WITH_WEAPON(iVar20, &Var3);
			}
			iVar1++;
		}
		__LIB_5__::func_873(16);
	}
	return -1;
}

void func_483()
{
	int iVar0;
	iVar0 = Global_1357549.f_573;
	if (iVar0 >= 0 && iVar0 < 40)
	{
		if (__LIB_0__::func_317() == Global_1357549.f_12[iVar0 /*14*/])
		{
			if (Global_1357549.f_12[iVar0 /*14*/].f_7 == 0)
			{
				if (STREAMING::_IS_IMAP_ACTIVE(Global_1357549.f_12[iVar0 /*14*/].f_1) && __LIB_6__::func_288() == 0)
				{
					Global_1357549.f_12[iVar0 /*14*/].f_7 = ENTITY::_0x6F3068258A499E52(Global_1357549.f_12[iVar0 /*14*/].f_5, Global_1357549.f_12[iVar0 /*14*/].f_2, 15);
				}
			}
			if (Global_1357549.f_12[iVar0 /*14*/].f_7 != 0)
			{
				if (!Global_1357549.f_12[iVar0 /*14*/].f_10)
				{
					Global_1357549.f_12[iVar0 /*14*/].f_10 = ENTITY::_0x1FF441D7954F8709(Global_1357549.f_12[iVar0 /*14*/].f_7);
					if (Global_1357549.f_12[iVar0 /*14*/].f_10)
					{
						Global_1357549.f_12[iVar0 /*14*/].f_8 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(Global_1357549.f_12[iVar0 /*14*/].f_7));
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (Global_1357549.f_573 == iVar0 || Global_1357549.f_12[iVar0 /*14*/].f_9)
		{
			if (Global_1357549.f_12[iVar0 /*14*/].f_10)
			{
				__LIB_6__::func_393(iVar0);
			}
		}
		iVar0++;
	}
	Global_1357549.f_573++;
	if (Global_1357549.f_573 >= 40)
	{
		Global_1357549.f_573 = 0;
	}
}

Vector3 func_484(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case -1:
					return -106.1076f, -31.1365f, 94.9429f;
				case 0:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-106.1076f, -31.1365f, 94.9429f, __LIB_6__::func_396(iParam0), 0.75f, 0f, 0f);
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-106.1076f, -31.1365f, 94.9429f, __LIB_6__::func_396(iParam0), -0.75f, 0f, 0f);
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case -1:
					return 702.1609f, -1228.529f, 44.1236f;
				case 0:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(702.1609f, -1228.529f, 44.1236f, __LIB_6__::func_396(iParam0), 0.75f, 0f, 0f);
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(702.1609f, -1228.529f, 44.1236f, __LIB_6__::func_396(iParam0), -0.75f, 0f, 0f);
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case -1:
					return 1850.179f, -1838.022f, 42.1198f;
				case 0:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(1850.179f, -1838.022f, 42.1198f, __LIB_6__::func_396(iParam0), 0.75f, 0f, 0f);
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(1850.179f, -1838.022f, 42.1198f, __LIB_6__::func_396(iParam0), -0.75f, 0f, 0f);
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case -1:
					return 2279.944f, -751.8282f, 40.9738f;
				case 0:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(2279.944f, -751.8282f, 40.9738f, __LIB_6__::func_396(iParam0), 0.75f, 0f, 0f);
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(2279.944f, -751.8282f, 40.9738f, __LIB_6__::func_396(iParam0), -0.75f, 0f, 0f);
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case -1:
					return 2371.779f, 1341.602f, 105.1376f;
				case 0:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(2371.779f, 1341.602f, 105.1376f, __LIB_6__::func_396(iParam0), 0.75f, 0f, 0f);
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(2371.779f, 1341.602f, 105.1376f, __LIB_6__::func_396(iParam0), -0.75f, 0f, 0f);
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case -1:
					return -2590.321f, 464.9799f, 145.1713f;
				case 0:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-2590.321f, 464.9799f, 145.1713f, __LIB_6__::func_396(iParam0), 0.75f, 0f, 0f);
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-2590.321f, 464.9799f, 145.1713f, __LIB_6__::func_396(iParam0), -0.75f, 0f, 0f);
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case -1:
					if (!__LIB_6__::func_162())
					{
						return -1665.684f, -1332.361f, 82.8786f;
					}
					else
					{
						return -1644.99f, -1376.751f, 82.9679f;
					}
					break;
				case 0:
					if (!__LIB_6__::func_162())
					{
						return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-1665.684f, -1332.361f, 82.8786f, __LIB_6__::func_396(iParam0), 0.75f, 0f, 0f);
					}
					else
					{
						return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-1644.99f, -1376.751f, 82.9679f, __LIB_6__::func_396(iParam0), 0.75f, 0f, 0f);
					}
					break;
				case 1:
					if (!__LIB_6__::func_162())
					{
						return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-1665.684f, -1332.361f, 82.8786f, __LIB_6__::func_396(iParam0), -0.75f, 0f, 0f);
					}
					else
					{
						return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-1644.99f, -1376.751f, 82.9679f, __LIB_6__::func_396(iParam0), -0.75f, 0f, 0f);
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_485()
{
	__LIB_4__::func_253(joaat("CSTAG_GRIEFING_LAW_ENCOUNTER"), 1017034651, -469960592, 4, 1, 1, 1);
	__LIB_6__::func_86(544);
	__LIB_6__::func_86(595);
	__LIB_6__::func_86(548);
	__LIB_6__::func_87(0);
	__LIB_6__::func_87(19);
	__LIB_6__::func_163(1, 1, 0);
	__LIB_6__::func_215();
}

void func_486()
{
	int iVar0;
	float fVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	__LIB_6__::func_363(&(Local_18.f_51.f_35));
	__LIB_0__::func_37(&(Global_1359489.f_52));
	PLAYER::_0xCB61A63AA53D7D22(PLAYER::GET_PLAYER_INDEX(), 0);
	__LIB_1__::func_449(joaat("CSTAG_LOITERING"), 1, 0);
	if (__LIB_6__::func_138())
	{
		__LIB_4__::func_253(joaat("CSTAG_HONOR_LOW"), joaat("CSTP_NEXT_VISIT"), 1120952528, -1, 1, 1, 0);
	}
	else if (__LIB_1__::func_198(joaat("CSTAG_HONOR_LOW"), 1))
	{
		__LIB_1__::func_449(joaat("CSTAG_HONOR_LOW"), 1, 0);
	}
	if (__LIB_6__::func_139())
	{
		__LIB_4__::func_253(joaat("CSTAG_HONOR_HIGH"), joaat("CSTP_NEXT_VISIT"), 1120952528, -1, 1, 1, 0);
	}
	else if (__LIB_1__::func_198(joaat("CSTAG_HONOR_HIGH"), 1))
	{
		__LIB_1__::func_449(joaat("CSTAG_HONOR_HIGH"), 1, 0);
	}
	iVar0 = __LIB_5__::func_940();
	if (iVar0 > Global_40.f_4283.f_323)
	{
		if ((iVar0 - Global_40.f_4283.f_323) > 5)
		{
			__LIB_4__::func_253(joaat("CSTAG_PLAYER_KILLING_INNOCENT"), joaat("CSTP_NEXT_VISIT"), 1120952528, -1, 1, 1, 0);
		}
		if ((iVar0 - Global_40.f_4283.f_323) > 10)
		{
			__LIB_4__::func_253(joaat("CSTAG_PLAYER_OPEN_WORLD_CRAZY"), joaat("CSTP_NEXT_VISIT"), 1120952528, -1, 1, 1, 0);
		}
		Global_40.f_4283.f_323 = iVar0;
	}
	if (__LIB_0__::func_317() == 6)
	{
		if (__LIB_1__::func_187(25))
		{
		}
	}
	if (ATTRIBUTE::GET_ATTRIBUTE_BASE_RANK(Global_35, 22) >= 40 || ATTRIBUTE::GET_ATTRIBUTE_BASE_RANK(Global_35, 16) >= 40)
	{
		__LIB_4__::func_253(joaat("CSTAG_PLAYER_DIRTY"), joaat("CSTP_NEXT_VISIT"), 1120952528, -1, 1, 1, 0);
	}
	else if (__LIB_1__::func_198(joaat("CSTAG_PLAYER_DIRTY"), 1))
	{
		__LIB_1__::func_449(joaat("CSTAG_PLAYER_DIRTY"), 1, 0);
	}
	if (__LIB_1__::func_198(joaat("CSTAG_CAMP_FOOD_HIGH"), 1))
	{
		__LIB_1__::func_449(joaat("CSTAG_CAMP_FOOD_HIGH"), 1, 0);
	}
	if (__LIB_1__::func_198(joaat("CSTAG_CAMP_FOOD_LOW"), 1))
	{
		__LIB_1__::func_449(joaat("CSTAG_CAMP_FOOD_LOW"), 1, 0);
	}
	fVar1 = __LIB_5__::func_941();
	if (fVar1 < 25f)
	{
		if (!__LIB_1__::func_198(joaat("CSTAG_PLAYER_DONATED_FOOD"), 1) && !__LIB_4__::func_635(33554432))
		{
			__LIB_4__::func_253(joaat("CSTAG_CAMP_FOOD_LOW"), joaat("CSTP_NEXT_VISIT"), 1120952528, -1, 1, 1, 0);
		}
	}
	else if (fVar1 > 75f)
	{
		__LIB_4__::func_253(joaat("CSTAG_CAMP_FOOD_HIGH"), joaat("CSTP_NEXT_VISIT"), 1120952528, -1, 1, 1, 0);
	}
	if (__LIB_5__::func_826() < BUILTIN::ROUND((IntToFloat(__LIB_5__::func_942(&(Local_18.f_51.f_35))) * 0.2f)) && !__LIB_1__::func_198(joaat("CSTAG_PLAYER_DONATED_MONEY"), 1))
	{
		if (!__LIB_1__::func_198(joaat("CSTAG_CAMP_MONEY_LOW"), 1))
		{
			__LIB_4__::func_253(joaat("CSTAG_CAMP_MONEY_LOW"), joaat("CSTP_NEXT_VISIT"), 1120952528, -1, 1, 1, 0);
		}
	}
	if (Global_1357549.f_1610)
	{
		return;
	}
	if (Global_40.f_4283.f_4 != 1)
	{
		return;
	}
	bVar2 = true;
	if (__LIB_1__::func_198(joaat("CSTAG_CAMP_FOOD_LOW"), 0) || __LIB_1__::func_198(joaat("CSTAG_CAMP_MONEY_LOW"), 0))
	{
		if (__LIB_1__::func_985())
		{
			switch (__LIB_0__::func_317())
			{
				case 1:
					__LIB_4__::func_253(joaat("CSTAG_EVENT_HSO_LOWKEY"), joaat("CSTP_NEXT_VISIT"), -469960592, -1, 1, 1, 0);
					bVar2 = false;
					break;
				case 2:
					__LIB_4__::func_253(joaat("CSTAG_EVENT_CLM_LOWKEY"), joaat("CSTP_NEXT_VISIT"), -469960592, -1, 1, 1, 0);
					bVar2 = false;
					break;
				case 3:
					__LIB_4__::func_253(joaat("CSTAG_EVENT_SDB_LOWKEY"), joaat("CSTP_NEXT_VISIT"), -469960592, -1, 1, 1, 0);
					bVar2 = false;
					break;
			}
		}
	}
	else if (__LIB_6__::func_167())
	{
		if (__LIB_1__::func_985())
		{
			switch (__LIB_0__::func_317())
			{
				case 1:
					__LIB_4__::func_253(joaat("CSTAG_EVENT_HSO_UPBEAT"), joaat("CSTP_NEXT_VISIT"), -469960592, -1, 1, 1, 0);
					break;
				case 2:
					__LIB_4__::func_253(joaat("CSTAG_EVENT_CLM_UPBEAT"), joaat("CSTP_NEXT_VISIT"), -469960592, -1, 1, 1, 0);
					break;
				case 3:
					__LIB_4__::func_253(joaat("CSTAG_EVENT_SDB_UPBEAT"), joaat("CSTP_NEXT_VISIT"), -469960592, -1, 1, 1, 0);
					break;
			}
		}
	}
	if (bVar2)
	{
		iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
		iVar4 = 176656832;
		iVar5 = 176656832;
		iVar6 = 176656832;
		switch (__LIB_0__::func_317())
		{
			case 1:
				if (__LIB_1__::func_307(2, 0, 0))
				{
					iVar4 = joaat("CSTAG_ARRANGEMENT_HSO_A");
				}
				if (__LIB_1__::func_307(4, 0, 0))
				{
					iVar5 = joaat("CSTAG_ARRANGEMENT_HSO_B");
				}
				if (__LIB_1__::func_307(7, 0, 0))
				{
					iVar6 = joaat("CSTAG_ARRANGEMENT_HSO_C");
				}
				break;
			case 2:
				if (__LIB_1__::func_307(2, 0, 0))
				{
					iVar4 = joaat("CSTAG_ARRANGEMENT_CLM_A");
				}
				if (__LIB_1__::func_307(4, 0, 0))
				{
					iVar5 = joaat("CSTAG_ARRANGEMENT_CLM_B");
				}
				if (__LIB_1__::func_307(7, 0, 0))
				{
					iVar6 = joaat("CSTAG_ARRANGEMENT_CLM_C");
				}
				break;
			case 3:
				if (__LIB_1__::func_307(2, 0, 0))
				{
					iVar4 = joaat("CSTAG_ARRANGEMENT_SDB_A");
				}
				if (__LIB_1__::func_307(4, 0, 0))
				{
					iVar5 = joaat("CSTAG_ARRANGEMENT_SDB_B");
				}
				if (__LIB_1__::func_307(7, 0, 0))
				{
					iVar6 = joaat("CSTAG_ARRANGEMENT_SDB_C");
				}
				break;
			default:
				return;
		}
		switch (iVar3)
		{
			case 0:
				if (iVar4 != 176656832)
				{
					__LIB_4__::func_253(iVar4, joaat("CSTP_NEXT_VISIT"), 1120952528, -1, 1, 1, 0);
				}
				break;
			case 1:
				if (iVar5 != 176656832)
				{
					__LIB_4__::func_253(iVar5, joaat("CSTP_NEXT_VISIT"), 1120952528, -1, 1, 1, 0);
				}
				break;
			case 2:
				if (iVar6 != 176656832)
				{
					__LIB_4__::func_253(iVar6, joaat("CSTP_NEXT_VISIT"), 1120952528, -1, 1, 1, 0);
				}
				break;
		}
	}
}

void func_487(int iParam0)
{
	int iVar0;
	int iVar1;
	VOLUME::_0xFD010A2154B40676(Global_1357549.f_3[2], joaat("REL_GANG_DUTCHS"));
	VOLUME::_0xFD010A2154B40676(Global_1357549.f_3[3], joaat("REL_GANG_DUTCHS"));
	if (iParam0->f_1713 != 0)
	{
		VOLUME::_0xB469CFD9E065EB99(Global_1357549.f_3[4], iParam0->f_1713);
	}
	iVar0 = Global_1357549.f_3[2];
	POPULATION::_0x18262CAFEBB5FBE1(iVar0, 0, 4787584, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iVar0, 0, 4787584, 0, -1, -1, 0);
	__LIB_3__::func_941(iVar0, 0);
	__LIB_4__::func_858(Global_1357549.f_3[4], 0, 0, 0);
	__LIB_0__::func_566(iVar0, 0);
	__LIB_3__::func_729(iVar0, 0, 0);
	iVar1 = 0;
	__LIB_0__::func_495(&iVar1, 0);
	__LIB_0__::func_495(&iVar1, 14);
	__LIB_0__::func_495(&iVar1, 16);
	COMPANION::_0x3CAAD93FA5B9579A(iVar0, 2, iVar1);
	__LIB_6__::func_415(Local_18.f_47, Local_18.f_1714, Local_18.f_1717, Global_1357549.f_3[6]);
}

void func_488()
{
	if (Local_18.f_45 == 7 || Local_18.f_45 == 8)
	{
		if (LAW::_0x9D5C9A5A3321B128(PLAYER::PLAYER_ID()))
		{
			__LIB_0__::func_45("RANCH_LAW_GRIEF", 10000, 0, 0, 0, 1);
			__LIB_3__::func_465(2, joaat("HONOR_EVENT_WANTED_IN_CAMP"), 0, "RANCH_LAW_HON", 0, 0, 1065353216 /* Float: 1f */, 0);
		}
		else
		{
			__LIB_0__::func_45("RANCH_COMBAT_GRIEF", 10000, 0, 0, 0, 1);
			__LIB_3__::func_465(2, joaat("HONOR_EVENT_WANTED_IN_CAMP"), 0, "RANCH_COMBAT_HON", 0, 0, 1065353216 /* Float: 1f */, 0);
		}
	}
	else if (LAW::_0x9D5C9A5A3321B128(PLAYER::PLAYER_ID()))
	{
		__LIB_0__::func_45("CAMP_LAW_GRIEF", 10000, 0, 0, 0, 1);
		__LIB_3__::func_465(2, joaat("HONOR_EVENT_WANTED_IN_CAMP"), 0, "CAMP_LAW_HON", 0, 0, 1065353216 /* Float: 1f */, 0);
	}
	else
	{
		__LIB_0__::func_45("CAMP_COMBAT_GRIEF", 10000, 0, 0, 0, 1);
		__LIB_3__::func_465(2, joaat("HONOR_EVENT_WANTED_IN_CAMP"), 0, "CAMP_COMBAT_HON", 0, 0, 1065353216 /* Float: 1f */, 0);
	}
	__LIB_5__::func_875();
}

int func_489()
{
	int iVar0;
	struct<7> Var1;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	vector3 vVar25;
	__LIB_1__::func_725();
	__LIB_6__::func_410();
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	if (__LIB_0__::func_296(0, 0, 1))
	{
		return 0;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CARAVAN_ABSENCE_SCENE")) > 0)
	{
		return 0;
	}
	if (MISC::GET_GAME_TIMER() < Local_18.f_1718.f_2)
	{
		return -1;
	}
	iVar0 = __LIB_5__::func_874(Local_18.f_1718.f_1);
	if (iVar0 == 0)
	{
		return 3;
	}
	Var1.f_8 = -1082130432;
	iVar21 = 0;
	while (iVar21 < iVar0)
	{
		iVar22 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar21, Local_18.f_1718.f_1));
		if (ENTITY::IS_ENTITY_DEAD(iVar22))
		{
		}
		else
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
			{
				case 0:
					iVar23 = 21030;
					break;
				case 1:
					iVar23 = 14284;
					break;
				case 2:
					iVar23 = 65478;
					break;
				case 3:
					iVar23 = 6884;
					break;
				case 4:
					iVar23 = 56200;
					break;
				case 5:
					iVar23 = 0;
					break;
			}
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
			{
				case 0:
					iVar24 = joaat("WEAPON_REPEATER_CARBINE");
					break;
				case 1:
					iVar24 = joaat("WEAPON_RIFLE_SPRINGFIELD");
					break;
			}
			vVar25 = { __LIB_3__::func_857(__LIB_1__::func_546(__LIB_0__::func_317()), 50f, 2f) };
			Var1.f_14 = 1;
			Var1.f_13 = 0;
			Var1.f_16 = 1;
			Var1.f_18 = 1;
			Var1.f_19 = 0;
			Var1.f_12 = 1;
			Var1.f_7 = 200f;
			Var1.f_10 = iVar22;
			Var1 = { vVar25 };
			Var1.f_3 = { PED::GET_PED_BONE_COORDS(iVar22, iVar23, 0f, 0f, 0f) };
			Var1.f_6 = iVar24;
			MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var1);
			ENTITY::_SET_ENTITY_HEALTH(iVar22, 0, 0);
			if (iVar0 <= 1)
			{
				Local_18.f_1718.f_2 = MISC::GET_GAME_TIMER() + 4000;
			}
			else
			{
				Local_18.f_1718.f_2 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 6000));
			}
		}
		else
		{
			iVar21++;
		}
	}
	return -1;
}

int func_490()
{
	if (MISC::GET_GAME_TIMER() > Local_18.f_1786.f_1)
	{
		if (__LIB_5__::func_860(2))
		{
			__LIB_5__::func_861(2);
			__LIB_3__::func_465(3, joaat("HONOR_EVENT_ANTAGONIZE"), 0, "CAMP_DBODY_HON", 0, 0, 1065353216 /* Float: 1f */, 0);
			if (((((__LIB_5__::func_860(8) || __LIB_5__::func_860(16)) || __LIB_5__::func_860(32)) || __LIB_5__::func_860(64)) || __LIB_5__::func_860(2048)) || __LIB_5__::func_860(1024))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (__LIB_5__::func_860(4))
		{
			__LIB_5__::func_861(4);
			__LIB_3__::func_465(3, joaat("HONOR_EVENT_ANTAGONIZE"), 0, "CAMP_HOGT_HON", 0, 0, 1065353216 /* Float: 1f */, 0);
			if (((((__LIB_5__::func_860(8) || __LIB_5__::func_860(16)) || __LIB_5__::func_860(32)) || __LIB_5__::func_860(64)) || __LIB_5__::func_860(2048)) || __LIB_5__::func_860(1024))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (__LIB_5__::func_860(8))
		{
			__LIB_5__::func_861(8);
			__LIB_3__::func_465(3, joaat("HONOR_EVENT_ANTAGONIZE"), 0, "CAMP_DBODY_HON", 0, 0, 1065353216 /* Float: 1f */, 0);
			if (((__LIB_5__::func_860(32) || __LIB_5__::func_860(64)) || __LIB_5__::func_860(2048)) || __LIB_5__::func_860(1024))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (__LIB_5__::func_860(16))
		{
			__LIB_5__::func_861(16);
			__LIB_3__::func_465(3, joaat("HONOR_EVENT_ANTAGONIZE"), 0, "CAMP_HOGT_HON", 0, 0, 1065353216 /* Float: 1f */, 0);
			if (((__LIB_5__::func_860(32) || __LIB_5__::func_860(64)) || __LIB_5__::func_860(2048)) || __LIB_5__::func_860(1024))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (__LIB_5__::func_860(2048))
		{
			__LIB_5__::func_861(2048);
			__LIB_3__::func_465(3, joaat("HONOR_EVENT_ANTAGONIZE"), 0, "CAMP_DBODY_HON", 0, 0, 1065353216 /* Float: 1f */, 0);
			if (__LIB_5__::func_860(32) || __LIB_5__::func_860(64))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (__LIB_5__::func_860(1024))
		{
			__LIB_5__::func_861(1024);
			__LIB_3__::func_465(3, joaat("HONOR_EVENT_ANTAGONIZE"), 0, "CAMP_HOGT_HON", 0, 0, 1065353216 /* Float: 1f */, 0);
			if (__LIB_5__::func_860(32) || __LIB_5__::func_860(64))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (__LIB_5__::func_860(32))
		{
			__LIB_5__::func_861(32);
			__LIB_3__::func_465(3, joaat("HONOR_EVENT_ANTAGONIZE"), 0, "CAMP_DBODY_HON", 0, 0, 1065353216 /* Float: 1f */, 0);
		}
		if (__LIB_5__::func_860(64))
		{
			__LIB_5__::func_861(64);
			__LIB_3__::func_465(3, joaat("HONOR_EVENT_ANTAGONIZE"), 0, "CAMP_HOGT_HON", 0, 0, 1065353216 /* Float: 1f */, 0);
		}
		return 0;
	}
	return -1;
}

void func_491(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_1357549.f_1897 = iParam0;
	}
	Global_40.f_4283.f_567 = 1;
	Global_40.f_4283.f_567.f_1 = uParam1;
	Global_40.f_4283.f_567.f_2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	Global_40.f_4283.f_567.f_5 = ENTITY::GET_ENTITY_HEADING(iParam0);
	Global_40.f_4283.f_567.f_6 = __LIB_5__::func_773(iParam0);
	__LIB_6__::func_417(iParam0);
}

void func_492(int iParam0, var uParam1)
{
	vector3 vVar0;
	__LIB_5__::func_850(uParam1);
	vVar0 = { __LIB_6__::func_411(iParam0) };
	uParam1->f_5 = VOLUME::_CREATE_VOLUME_CYLINDER(vVar0, 0f, 0f, 0f, 2.25f, 2.25f, 2f);
	uParam1->f_6 = GRAPHICS::_0xFA50F79257745E74(vVar0, 2f, 1, 36, 0);
	if (MAP::DOES_BLIP_EXIST(uParam1->f_4))
	{
		MAP::REMOVE_BLIP(&(uParam1->f_4));
	}
	uParam1->f_4 = MAP::_BLIP_ADD_FOR_COORD(1687768444, __LIB_6__::func_411(iParam0));
	MAP::_BLIP_SET_MODIFIER(uParam1->f_4, 287169430);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_4, "BLIP_CAMP_HITCH");
	MAP::SET_BLIP_FLASH_TIMER(uParam1->f_4, 68, -1);
	__LIB_5__::func_794(uParam1->f_4, __LIB_0__::func_61());
}

void func_493()
{
	__LIB_6__::func_418();
}

void func_494(int iParam0)
{
	bool bVar0;
	int iVar1;
	bVar0 = __LIB_6__::func_362();
	__LIB_1__::func_779(0, iParam0);
	__LIB_0__::func_837(0, 1);
	if (bVar0)
	{
		__LIB_0__::func_837(iParam0, 2);
		if (__LIB_0__::func_797(iParam0))
		{
			__LIB_1__::func_162(iParam0);
		}
	}
	else
	{
		iVar1 = __LIB_0__::func_398(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			__LIB_0__::func_511(iVar1);
			PED::_UPDATE_PED_VARIATION(iVar1, false, true, true, true, true);
		}
		__LIB_6__::func_412(iParam0);
		__LIB_1__::func_778(iParam0);
		__LIB_0__::func_837(iParam0, 0);
	}
	if (__LIB_5__::func_917() == 0)
	{
		__LIB_0__::func_149(0);
		__LIB_0__::func_148(0);
	}
}

void func_495(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = __LIB_0__::func_821(iParam0);
	iVar1 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 == 1)
	{
		sVar2 = "HORSE_BONDED";
	}
	else if (iParam1 == iVar1)
	{
		sVar2 = "HORSE_BONDING_MAXIMUM";
	}
	else
	{
		sVar2 = "HORSE_BONDING_LEVELUP";
	}
	__LIB_0__::func_384(sVar2, MISC::_CREATE_VAR_STRING(2, "HORSE_BONDING_LEVEL", iParam1), joaat("HUD_TOASTS"), -961843223, -2, "HUD_Toast_Soundset", "horse_bonding", 0, 0, 1, 1);
}

void func_496(var uParam0)
{
	int iVar0;
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_102.f_7, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_110.f_7, false);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_55.f_5[iVar0 /*6*/].f_5, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_55.f_30[iVar0 /*4*/].f_3, false);
		iVar0++;
	}
}

bool func_497(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = uParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_1934765.f_21[iVar1], iVar2);
}

void func_498(int iParam0, char* sParam1)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	char* sVar6;
	char* sVar7;
	sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
	switch (iParam0)
	{
		case 0:
			sVar1 = "RPG_HEALTH";
			break;
		case 1:
			sVar1 = "RPG_STAMINA";
			break;
		default:
			return;
	}
	sVar2 = MISC::_CREATE_VAR_STRING(2, "HORSE_RPG_LEVEL_PROGRESS", sParam1);
	switch (iParam0)
	{
		case 0:
			iVar3 = joaat("TOAST_RPG_LEVEL_HEALTH_HORSE");
			break;
		case 1:
			iVar3 = joaat("TOAST_RPG_LEVEL_STAMINA_HORSE");
			break;
		default:
			return;
	}
	sVar4 = __LIB_0__::func_67(__LIB_6__::func_9(sParam1));
	iVar5 = MISC::GET_HASH_KEY(sVar4);
	sVar6 = "";
	sVar7 = "HUD_Toast_Soundset";
	__LIB_0__::func_384(MISC::_CREATE_VAR_STRING(10, sVar0, sVar1), sVar2, iVar3, iVar5, -2, sVar7, sVar6, 0, 0, 1, 1);
}

void func_499(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	if (iParam0 == -1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(*uParam1, false);
		return;
	}
	iVar0 = (__LIB_5__::func_862(__LIB_5__::func_999(iParam0), 0) - 1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(*uParam1, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_4, (uParam2[iParam0 /*30*/])->f_23);
	iVar1 = 0;
	while (iVar1 < 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_5[iVar1 /*6*/].f_1, (uParam2[iParam0 /*30*/])->f_2[iVar1 /*4*/]);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_5[iVar1 /*6*/].f_2, (uParam2[iParam0 /*30*/])->f_2[iVar1 /*4*/].f_1);
		if ((uParam2[iParam0 /*30*/])->f_2[iVar1 /*4*/].f_3 != -1)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_5[iVar1 /*6*/].f_3, MISC::_CREATE_VAR_STRING(2, "LDGR_PRICE", (uParam2[iParam0 /*30*/])->f_2[iVar1 /*4*/].f_3));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_5[iVar1 /*6*/].f_3, "");
		}
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_5[iVar1 /*6*/], iVar1 <= iVar0 + 1);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_5[iVar1 /*6*/].f_4, iVar1 <= iVar0);
		if ((uParam2[iParam0 /*30*/])->f_23)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_30[iVar1 /*4*/].f_1, MISC::_CREATE_VAR_STRING(2, "LDGR_PRICE", (uParam2[iParam0 /*30*/])->f_24[iVar1]));
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_30[iVar1 /*4*/], iVar1 <= iVar0);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_30[iVar1 /*4*/].f_2, iVar1 < iVar0);
		}
		iVar1++;
	}
	switch (iParam0)
	{
		case 0:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, -393102324 /* GXTEntry: "Provisions" */);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_2, 2011573789 /* GXTEntry: "Pearson\'s Wagon" */);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_3, joaat("LEDGER_CAMP_PROVISIONS"));
			break;
		case 1:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, -528257027 /* GXTEntry: "Medicine" */);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_2, 1071167867 /* GXTEntry: "Strauss\'s Wagon" */);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_3, joaat("LEDGER_CAMP_MEDICINE"));
			break;
		case 2:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, 283666457 /* GXTEntry: "Ammunition~n~and Arms" */);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_2, 1013492974 /* GXTEntry: "Arthur\'s Wagon" */);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_3, joaat("LEDGER_CAMP_MUNITIONS"));
			break;
		case 3:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, -803999078 /* GXTEntry: "Lodging" */);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_2, 0);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_3, joaat("LEDGER_CAMP_TENT"));
			break;
		default:
			break;
	}
}

void func_500(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	if (iParam0 == -1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(*uParam1, false);
		return;
	}
	iVar0 = (__LIB_5__::func_862(__LIB_5__::func_999(iParam0), 0) - 1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(*uParam1, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_5, iVar0 > 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_6, iVar0 > 0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_2, (uParam2[iParam0 /*30*/])->f_2[1 /*4*/].f_1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_4, MISC::_CREATE_VAR_STRING(2, "LDGR_PRICE", (uParam2[iParam0 /*30*/])->f_2[1 /*4*/].f_3));
	switch (iParam0)
	{
		case 4:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, 61188257 /* GXTEntry: "Camp Boat" */);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_3, joaat("LEDGER_CAMP_BOAT"));
			break;
		case 5:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, -593314660 /* GXTEntry: "Chicken Coop" */);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_3, joaat("LEDGER_CAMP_CHICKENS"));
			break;
		case 7:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, -1156421435 /* GXTEntry: "Horse Station" */);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_3, joaat("LEDGER_CAMP_HORSE_STATION"));
			break;
		case 6:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, -1477784184 /* GXTEntry: "Leather Working~n~Tools" */);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_3, joaat("LEDGER_CAMP_LEATHER_WORKING_TOOLS"));
			break;
		default:
			break;
	}
}

bool func_501(var uParam0, var uParam1)
{
	int iVar0;
	if (!DATABINDING::_DATABINDING_READ_DATA_BOOL(*uParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!__LIB_6__::func_26(&(uParam0->f_5[iVar0 /*6*/])))
		{
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_5[iVar0 /*6*/].f_5, true);
			uParam1->f_5 = 1;
			uParam1->f_6 = iVar0;
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!__LIB_6__::func_27(&(uParam0->f_30[iVar0 /*4*/])))
		{
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_30[iVar0 /*4*/].f_3, true);
			uParam1->f_5 = 0;
			uParam1->f_6 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_502(var uParam0, var uParam1)
{
	if (!__LIB_6__::func_16(uParam0))
	{
		return false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_7, true);
	uParam1->f_5 = 1;
	uParam1->f_6 = -1;
	return true;
}

int func_503()
{
	float fVar0;
	if (!__LIB_6__::func_422())
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_18.f_1934.f_66))
	{
		return 0;
	}
	if (PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35) != Local_18.f_1934.f_66)
	{
		return 0;
	}
	if (PED::IS_PED_IN_MELEE_COMBAT(Global_35))
	{
		return -1;
	}
	if (__LIB_6__::func_285())
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > 0.5f)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 203, true);
		}
	}
	if (!__LIB_2__::func_366(Global_35))
	{
		return -1;
	}
	if (__LIB_0__::func_163(Global_35, -208384378))
	{
		return -1;
	}
	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	fVar0 = BUILTIN::VDIST2(Global_36, __LIB_5__::func_263(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_6, Local_18.f_1934.f_67));
	if (fVar0 > 3f)
	{
		return 2;
	}
	return 3;
}

struct<8> func_504(int iParam0, int iParam1)
{
	char cVar0[64];
	StringCopy(&cVar0, __LIB_6__::func_428(iParam0), 64);
	StringConCat(&cVar0, "_nav_camp_", 64);
	StringConCat(&cVar0, __LIB_6__::func_105(iParam1), 64);
	return cVar0;
}

void func_505(int* iParam0, var uParam1)
{
	bool bVar0;
	if (iParam0->f_35.f_491)
	{
		if (!__LIB_0__::func_139(iParam0->f_10))
		{
			iParam0->f_10 = __LIB_4__::func_450("PURCHASE_UPGRADE", joaat("INPUT_GAME_MENU_ACCEPT"), 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			__LIB_4__::func_12(iParam0->f_10, -2019190071, 0, 1);
			__LIB_1__::func_221(iParam0->f_10, 0, 1);
		}
		if (iParam0->f_35.f_491.f_5)
		{
			if (__LIB_0__::func_139(iParam0->f_10) && !__LIB_0__::func_572(iParam0->f_10, 0))
			{
				__LIB_1__::func_221(iParam0->f_10, 1, 0);
			}
		}
		else
		{
			bVar0 = true;
			if (__LIB_6__::func_367(iParam0, 0))
			{
				bVar0 = false;
			}
			else if (iParam0->f_35.f_491.f_1 == 2 && __LIB_6__::func_429(2, uParam1, 1120403456 /* Float: 100f */))
			{
				bVar0 = false;
			}
			else if (iParam0->f_35.f_491.f_1 == 1 && __LIB_6__::func_429(0, uParam1, 1120403456 /* Float: 100f */))
			{
				bVar0 = false;
			}
			else if (iParam0->f_35.f_491.f_1 == 0 && __LIB_6__::func_429(1, uParam1, 1120403456 /* Float: 100f */))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (__LIB_0__::func_139(iParam0->f_10) && !__LIB_0__::func_572(iParam0->f_10, 0))
				{
					__LIB_1__::func_221(iParam0->f_10, 1, 0);
				}
			}
			else if (__LIB_0__::func_572(iParam0->f_10, 1))
			{
				__LIB_1__::func_221(iParam0->f_10, 0, 0);
			}
		}
	}
}

void func_506(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	float fVar1;
	iVar0 = __LIB_6__::func_196(16);
	fVar1 = __LIB_5__::func_941();
	if (!bParam4 || iParam0 == 1)
	{
		__LIB_6__::func_302(iParam0, uParam1, bParam2);
		__LIB_6__::func_303(iParam0, fVar1, bParam2);
	}
	if (!bParam4 || iParam0 == 2)
	{
		__LIB_6__::func_432(iParam0, uParam1, bParam2, bParam3);
		__LIB_6__::func_304(iParam0, fVar1, bParam2, bParam3);
	}
	if (!bParam4 || iParam0 == 3)
	{
		__LIB_6__::func_305(iParam0, uParam1, bParam2);
		__LIB_6__::func_306(iParam0, fVar1, bParam2);
	}
	__LIB_6__::func_307(iParam0, Global_40.f_4283.f_314);
	__LIB_6__::func_109(iParam0, iVar0);
}

void func_507()
{
	if (__LIB_4__::func_635(32768) && !__LIB_1__::func_533(2048))
	{
		if (__LIB_1__::func_533(4096))
		{
			return;
		}
		if (MISC::GET_GAME_TIMER() < Local_18.f_50)
		{
			return;
		}
		if (__LIB_0__::func_296(0, 0, 1))
		{
			return;
		}
		__LIB_5__::func_548(4096);
	}
	if (__LIB_1__::func_533(4096))
	{
		if (MISC::GET_GAME_TIMER() < Local_18.f_50)
		{
			return;
		}
		if (!__LIB_6__::func_274())
		{
			return;
		}
		if (!__LIB_1__::func_533(8192))
		{
			__LIB_6__::func_436();
			Local_18.f_50 = MISC::GET_GAME_TIMER() + 5500;
			__LIB_5__::func_548(8192);
		}
		else
		{
			__LIB_6__::func_346();
			__LIB_6__::func_61();
			Local_18.f_50 = (MISC::GET_GAME_TIMER() + 120000);
		}
	}
}

int func_508()
{
	if (__LIB_5__::func_806(Local_18.f_45))
	{
		if (!MISC::IS_BIT_SET(Local_18.f_43, 1))
		{
			__LIB_6__::func_440(&(Local_18.f_2024));
			MISC::SET_BIT(&(Local_18.f_43), 1);
		}
		return __LIB_6__::func_283(&(Local_18.f_2024));
	}
	return 1;
}

int func_509()
{
	if (__LIB_5__::func_806(Local_18.f_45))
	{
		if (!MISC::IS_BIT_SET(Local_18.f_43, 2))
		{
			__LIB_6__::func_441(Local_18.f_45, &(Local_18.f_2024));
			__LIB_6__::func_442(&(Local_18.f_2024), &(Global_40.f_4283.f_415));
			MISC::SET_BIT(&(Local_18.f_43), 2);
		}
		return __LIB_6__::func_421(&(Local_18.f_2024), &(Global_40.f_4283.f_415));
	}
	return 1;
}

bool func_510(int iParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bVar0 = __LIB_5__::func_649(Local_18.f_3057[iParam0 /*21*/].f_1, 1, 1);
	bVar1 = __LIB_5__::func_649(Local_18.f_3057[iParam0 /*21*/].f_1, 0, 1);
	if (bVar0 || bVar1)
	{
		__LIB_1__::func_748(&(Local_18.f_3057[iParam0 /*21*/].f_1), 1, 1);
		iVar2 = iParam0;
		iVar3 = 0;
		while (iVar3 < 15)
		{
			if (bVar0)
			{
				iVar2++;
				if (iVar2 >= 15)
				{
					iVar2 = 0;
				}
			}
			else
			{
				iVar2 = (iVar2 - 1);
				if (iVar2 < 0)
				{
					iVar2 = 14;
				}
			}
			if (Local_18.f_3057[iVar2 /*21*/].f_19 == Local_18.f_3057[iParam0 /*21*/].f_19)
			{
				__LIB_6__::func_443(iParam0, iVar2);
				return true;
			}
			iVar3++;
		}
	}
	return false;
}

bool func_511(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	if (__LIB_0__::func_988())
	{
		__LIB_6__::func_445();
		__LIB_0__::func_989();
	}
	iVar0 = __LIB_5__::func_925();
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		STREAMING::REQUEST_MODEL(iVar0, false);
		return false;
	}
	iVar1 = OBJECT::CREATE_OBJECT(iVar0, vParam0, true, true, false, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	__LIB_0__::func_509(iVar1);
	bVar2 = false;
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
	{
		bVar2 = true;
	}
	bVar3 = false;
	if (ENTITY::_0x88AD6CC10D8D35B2(iVar1))
	{
		bVar3 = true;
	}
	if (!bVar2 || !bVar3)
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
	}
	ENTITY::SET_ENTITY_HEADING(iVar1, fParam3);
	if (bParam4)
	{
		ENTITY::_0x9587913B9E772D29(iVar1, 0);
	}
	TASK::TASK_CARRIABLE(iVar1, joaat("CARRIABLE_SADDLE_BUNDLE"), 0, 0, 0);
	return true;
}

int func_512()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;
	struct<12> Var17;
	int iVar31;
	int iVar32;
	Var3 = { __LIB_0__::func_523(0, 1426626782, -1591664384, -1591664384, 0, 0) };
	if (__LIB_0__::func_801(&Var3, &iVar1, &iVar2, 0))
	{
		Var17.f_9 = -1591664384;
		iVar31 = 0;
		while (iVar31 < iVar2)
		{
			if (__LIB_0__::func_236(&Var17, iVar31, iVar1, iVar2))
			{
				if (__LIB_5__::func_796(Var17.f_4))
				{
					iVar0 = (iVar0 + Var17.f_11);
					if (__LIB_6__::func_446(Var17.f_4))
					{
						iVar0 = (iVar0 - 1);
					}
					if (iVar0 > 30)
					{
						iVar32 = (iVar0 - 30);
						__LIB_6__::func_301(Var17.f_4, 2, iVar32, -142743235);
						iVar0 = 30;
					}
				}
			}
			iVar31++;
		}
		__LIB_0__::func_238(iVar1);
	}
	return iVar0;
}

int func_513()
{
	if (__LIB_1__::func_707(joaat("DOCUMENT_BOOK_FORAGING"), 1, 0))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-1739164071))
		{
			STREAMING::_REMOVE_IMAP(-1739164071);
		}
		return __LIB_1__::func_976();
	}
	return -1739164071;
}

int func_514()
{
	if (__LIB_1__::func_707(joaat("DOCUMENT_BOOK_HUNTING"), 1, 0))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-1331617405))
		{
			STREAMING::_REMOVE_IMAP(-1331617405);
		}
		return __LIB_1__::func_976();
	}
	return -1331617405;
}

int func_515()
{
	if (__LIB_1__::func_707(joaat("DOCUMENT_BOOK_HUNTING"), 1, 0))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-539928451))
		{
			STREAMING::_REMOVE_IMAP(-539928451);
		}
		return __LIB_1__::func_976();
	}
	return -539928451;
}

int func_516()
{
	if (__LIB_1__::func_707(joaat("DOCUMENT_BOOK_FORAGING"), 1, 0))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-293283707))
		{
			STREAMING::_REMOVE_IMAP(-293283707);
		}
		return __LIB_1__::func_976();
	}
	return -293283707;
}

void func_517(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0, "PageLeft");
	__LIB_6__::func_449(uVar0, uParam1[0 /*118*/]);
	uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0, "PageRight");
	__LIB_6__::func_449(uVar1, uParam1[1 /*118*/]);
}

int func_518(int iParam0)
{
	int iVar0;
	struct<11> Var1;
	int iVar95;
	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!__LIB_1__::func_418(&iVar0, 0, iVar95, &Var1) && !__LIB_1__::func_418(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			__LIB_6__::func_40(iVar0, &Var1);
			if (__LIB_0__::func_144(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_519(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if ((iParam0 != 2 && iParam0 != 0) && iParam0 != 1)
		{
			return;
		}
	}
	if (__LIB_6__::func_453(iParam0, bParam1, iParam2, &(Global_40.f_4283.f_440[0 /*63*/])))
	{
		return;
	}
	if (__LIB_6__::func_453(iParam0, bParam1, iParam2, &(Global_40.f_4283.f_440[1 /*63*/])))
	{
		if (Global_40.f_4283.f_440[1 /*63*/] == 0)
		{
			Global_40.f_4283.f_440[1 /*63*/] = __LIB_6__::func_15(&(Global_40.f_4283.f_440[0 /*63*/]));
		}
		return;
	}
	__LIB_6__::func_260(&(Global_40.f_4283.f_440));
	__LIB_6__::func_453(iParam0, bParam1, iParam2, &(Global_40.f_4283.f_440[1 /*63*/]));
}

bool func_520(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	if (uParam3->f_62 >= 12)
	{
		return false;
	}
	if (iParam2 <= 0)
	{
		return false;
	}
	iVar0 = __LIB_5__::func_826();
	__LIB_6__::func_336(iParam2, bParam4);
	if (iVar0 != __LIB_5__::func_826())
	{
		uParam3->f_1[uParam3->f_62 /*5*/] = 0;
		uParam3->f_1[uParam3->f_62 /*5*/].f_3 = -1;
		uParam3->f_1[uParam3->f_62 /*5*/].f_1 = iParam0;
		uParam3->f_1[uParam3->f_62 /*5*/].f_2 = iParam1;
		uParam3->f_1[uParam3->f_62 /*5*/].f_4 = iParam2;
		uParam3->f_62++;
		if (bParam4)
		{
			if (iParam1 == 0)
			{
				__LIB_6__::func_454(iParam2);
			}
			else if (bParam5)
			{
				__LIB_6__::func_455(1);
			}
		}
	}
	return true;
}

void func_521()
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
	Local_18.f_1786.f_10 = __LIB_6__::func_459(1, 8);
	Local_18.f_1786.f_2 = MISC::GET_GAME_TIMER() + 3000;
	if ((__LIB_5__::func_860(2) || __LIB_5__::func_860(8)) || __LIB_5__::func_860(32))
	{
		__LIB_1__::func_240(535, 0);
	}
	if ((__LIB_5__::func_860(4) || __LIB_5__::func_860(16)) || __LIB_5__::func_860(64))
	{
		__LIB_1__::func_240(536, 0);
	}
}

int func_522()
{
	int iVar0;
	if ((__LIB_5__::func_860(8) || __LIB_5__::func_860(16)) || __LIB_5__::func_860(64))
	{
		__LIB_3__::func_460(Local_18.f_1786.f_5, &(Local_18.f_1786.f_3), 0, 0, 0, 1084227584 /* Float: 5f */, 100, 0, 0);
	}
	if (__LIB_5__::func_860(2048) || __LIB_5__::func_860(1024))
	{
		__LIB_3__::func_460(Local_18.f_1786.f_6, &(Local_18.f_1786.f_4), 0, 0, 0, 1084227584 /* Float: 5f */, 100, 0, 0);
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 5;
	}
	if (Local_18.f_1786.f_10 == -1)
	{
		return 2;
	}
	if (MISC::GET_GAME_TIMER() > Local_18.f_1786.f_2)
	{
		return 2;
	}
	iVar0 = __LIB_0__::func_271(Local_18.f_1786.f_10);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		Local_18.f_1786.f_10 = __LIB_6__::func_459(1, 8);
		return -1;
	}
	if (MISC::GET_GAME_TIMER() < Local_18.f_1786.f_1)
	{
		return -1;
	}
	if (!__LIB_5__::func_860(128))
	{
		if (__LIB_1__::func_265(iVar0, "GENERIC_ANGRY_REACTION", -1323320425, Global_35, 0, 0, 0, 1))
		{
			__LIB_5__::func_878(128);
			Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
		}
		if (__LIB_1__::func_265(iVar0, "GENERIC_SHOCKED_DISBELIEF", -1323320425, Global_35, 0, 0, 0, 1))
		{
			__LIB_5__::func_878(128);
			Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
		}
		if (__LIB_1__::func_265(iVar0, "STOP_THAT", -1323320425, Global_35, 0, 0, 0, 1))
		{
			__LIB_5__::func_878(128);
			Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
		}
		if (__LIB_1__::func_265(iVar0, "STOP_THAT_ANNOYED", -1323320425, Global_35, 0, 0, 0, 1))
		{
			__LIB_5__::func_878(128);
			Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
		}
		if (__LIB_1__::func_265(iVar0, "CUT_THAT_OUT", -1323320425, Global_35, 0, 0, 0, 1))
		{
			__LIB_5__::func_878(128);
			Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
		}
		if (__LIB_1__::func_265(iVar0, "GENERIC_INTERRUPT", -1323320425, Global_35, 0, 0, 0, 1))
		{
			__LIB_5__::func_878(128);
			Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
		}
	}
	else if (!__LIB_5__::func_860(256))
	{
		if ((__LIB_5__::func_860(2) || __LIB_5__::func_860(8)) || __LIB_5__::func_860(32))
		{
			if (__LIB_1__::func_265(iVar0, "GREET_PLAYER_DEAD_BODY", -1323320425, Global_35, 0, 0, 0, 1))
			{
				__LIB_5__::func_878(256);
				return 2;
			}
			if (__LIB_1__::func_265(iVar0, "GREET_PLAYER_DEAD_BODY_INNOCENT", -1323320425, Global_35, 0, 0, 0, 1))
			{
				__LIB_5__::func_878(256);
				return 2;
			}
			if (__LIB_1__::func_265(iVar0, "GREET_PLAYER_DEAD_BODY_LONGTIME", -1323320425, Global_35, 0, 0, 0, 1))
			{
				__LIB_5__::func_878(256);
				return 2;
			}
		}
		if ((__LIB_5__::func_860(4) || __LIB_5__::func_860(16)) || __LIB_5__::func_860(64))
		{
			if (__LIB_1__::func_265(iVar0, "GREET_PLAYER_HOGTIED_BODY", -1323320425, Global_35, 0, 0, 0, 1))
			{
				__LIB_5__::func_878(256);
				return 2;
			}
			if (__LIB_1__::func_265(iVar0, "GREET_PLAYER_HOGTIED_BODY_INNOCENT", -1323320425, Global_35, 0, 0, 0, 1))
			{
				__LIB_5__::func_878(256);
				return 2;
			}
		}
		if (__LIB_1__::func_265(iVar0, "SHAME_ON_YOU", -1323320425, Global_35, 0, 0, 0, 1))
		{
			__LIB_5__::func_878(256);
			return 2;
		}
		if (__LIB_1__::func_265(iVar0, "KNOCKOUT_WARNING", -1323320425, Global_35, 0, 0, 0, 1))
		{
			__LIB_5__::func_878(256);
			return 2;
		}
	}
	return -1;
}

void func_523()
{
	Local_18.f_1862.f_3 = __LIB_6__::func_459(1, 8);
	Local_18.f_1862.f_1 = MISC::GET_GAME_TIMER() + 1500;
}

int func_524()
{
	int iVar0;
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HITCH_ANIMAL"), false);
	if (__LIB_1__::func_533(1))
	{
		if (__LIB_0__::func_296(0, 0, 1))
		{
			return 0;
		}
	}
	if (__LIB_0__::func_1(Global_1935630, 16384) || STREAMING::_0x99F92061EFE908BA())
	{
		return 0;
	}
	if (Local_18.f_1721.f_62 > 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	PED::SET_PED_RESET_FLAG(Global_35, 184, true);
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Global_1357549.f_3[0], false, 0))
	{
		return 0;
	}
	if (__LIB_5__::func_882(1))
	{
		if (!PED::IS_PED_ON_MOUNT(Global_35))
		{
			return 3;
		}
	}
	if (__LIB_5__::func_882(2))
	{
		if (!TASK::_0xEFC4303DDC6E60D3(Global_35))
		{
			return 3;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_18.f_1862.f_5) || ENTITY::IS_ENTITY_DEAD(Local_18.f_1862.f_5))
	{
		return 0;
	}
	if (Local_18.f_1862.f_3 == -1)
	{
		return 2;
	}
	if (MISC::GET_GAME_TIMER() > Local_18.f_1862.f_1)
	{
		return 2;
	}
	iVar0 = __LIB_0__::func_271(Local_18.f_1862.f_3);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		Local_18.f_1862.f_3 = __LIB_6__::func_459(1, 8);
		return -1;
	}
	if (!__LIB_5__::func_882(4))
	{
		if (__LIB_1__::func_265(iVar0, "RIDING_HORSE_IN_CAMP", -1323320425, Global_35, 0, 0, 0, 1))
		{
			__LIB_5__::func_881(4);
			return 2;
		}
		if (__LIB_1__::func_265(iVar0, "SHAME_ON_YOU", -1323320425, Global_35, 0, 0, 0, 1))
		{
			__LIB_5__::func_881(4);
			return 2;
		}
		if (__LIB_1__::func_265(iVar0, "SHAME_ON_YOU_DOWN", -1323320425, Global_35, 0, 0, 0, 1))
		{
			__LIB_5__::func_881(4);
			return 2;
		}
		if (__LIB_1__::func_265(iVar0, "PLAYER_ACTING_WEIRD", -1323320425, Global_35, 0, 0, 0, 1))
		{
			__LIB_5__::func_881(4);
			return 2;
		}
		if (__LIB_1__::func_265(iVar0, "PLAYER_ACTING_WEIRD_DOWN", -1323320425, Global_35, 0, 0, 0, 1))
		{
			__LIB_5__::func_881(4);
			return 2;
		}
	}
	return -1;
}

int func_525()
{
	if (__LIB_6__::func_285())
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > 0.5f)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 203, true);
		}
	}
	if (!__LIB_6__::func_422())
	{
		return -1;
	}
	if (!PED::_IS_PED_CARRYING(Global_35))
	{
		return -1;
	}
	Local_18.f_1934.f_66 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
	if ((ENTITY::DOES_ENTITY_EXIST(Local_18.f_1934.f_66) && ENTITY::IS_ENTITY_A_PED(Local_18.f_1934.f_66)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Local_18.f_1934.f_66)))
	{
		return -1;
	}
	else if (__LIB_6__::func_390(Local_18.f_1934.f_66))
	{
		Local_18.f_1934.f_83 = 1;
	}
	else if (__LIB_3__::func_417(Global_35))
	{
		Local_18.f_1934.f_84 = 1;
	}
	return 1;
}

void func_526(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	if (!__LIB_5__::func_901(iParam0, iParam1))
	{
		if (uParam2->f_255 != 0)
		{
			__LIB_6__::func_290(uParam2);
			__LIB_5__::func_899(uParam2);
			__LIB_5__::func_900(uParam2);
		}
		return;
	}
	iVar0 = __LIB_6__::func_193(iParam1);
	if (*uParam2 != iParam1 || uParam2->f_1 != iVar0)
	{
		__LIB_6__::func_290(uParam2);
		__LIB_5__::func_899(uParam2);
		__LIB_5__::func_900(uParam2);
		*uParam2 = iParam1;
		uParam2->f_1 = iVar0;
		MISC::SET_BIT(&(uParam2->f_254), 0);
	}
	if (uParam2->f_256 != Global_40.f_4283.f_415[iParam1])
	{
		MISC::SET_BIT(&(uParam2->f_254), 0);
		MISC::CLEAR_BIT(&(uParam2->f_254), 4);
		uParam2->f_256 = Global_40.f_4283.f_415[iParam1];
	}
	if (MISC::IS_BIT_SET(uParam2->f_254, 0))
	{
		if (!MISC::IS_BIT_SET(uParam2->f_254, 1))
		{
			__LIB_6__::func_291(iParam1, uParam2);
		}
		else if (!MISC::IS_BIT_SET(uParam2->f_254, 2))
		{
			if (__LIB_5__::func_902(uParam2))
			{
				__LIB_6__::func_292(iParam0, iParam1, iVar0, uParam2);
			}
		}
		else if (!MISC::IS_BIT_SET(uParam2->f_254, 3))
		{
			__LIB_6__::func_293(uParam2, &(Global_40.f_4283.f_415[iParam1]));
		}
		else if (!MISC::IS_BIT_SET(uParam2->f_254, 4))
		{
			__LIB_6__::func_460(uParam2, &(Global_40.f_4283.f_415[iParam1]), iParam3);
		}
		else
		{
			__LIB_5__::func_899(uParam2);
			__LIB_5__::func_900(uParam2);
			MISC::CLEAR_BIT(&(uParam2->f_254), 0);
		}
		return;
	}
	iVar1 = 0;
	while (iVar1 < uParam2->f_253)
	{
		if (!MISC::IS_BIT_SET(uParam2->f_255, iVar1) || MISC::IS_BIT_SET(Global_40.f_4283.f_415[iParam1], iVar1))
		{
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam2->f_9[iVar1 /*9*/]))
			{
				MISC::SET_BIT(&(Global_40.f_4283.f_415[iParam1]), iVar1);
				MISC::CLEAR_BIT(&(uParam2->f_255), iVar1);
				__LIB_5__::func_839(5000);
			}
			if (OBJECT::HAS_OBJECT_BEEN_BROKEN(uParam2->f_9[iVar1 /*9*/]))
			{
				MISC::SET_BIT(&(Global_40.f_4283.f_415[iParam1]), iVar1);
				MISC::CLEAR_BIT(&(uParam2->f_255), iVar1);
				__LIB_5__::func_839(5000);
			}
		}
		iVar1++;
	}
	uParam2->f_256 = Global_40.f_4283.f_415[iParam1];
}

void func_527(var uParam0)
{
	if (__LIB_6__::func_461())
	{
		uParam0->f_11 = __LIB_6__::func_360(uParam0);
		HUD::_UIPROMPT_SET_GROUP(__LIB_3__::func_66(uParam0->f_11), 1842627646, 0);
	}
	else if (__LIB_6__::func_444())
	{
		uParam0->f_10 = __LIB_2__::func_513("CAMP_HITCH_SADDLE", joaat("INPUT_SADDLE_TRANSFER"), uParam0->f_5, 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
		HUD::_UIPROMPT_SET_GROUP(__LIB_3__::func_66(uParam0->f_10), 1842627646, 0);
	}
	if (__LIB_0__::func_815(2) == 2)
	{
		__LIB_6__::func_361(2, joaat("INPUT_GAME_MENU_LEFT"), uParam0);
	}
	if (__LIB_0__::func_815(3) == 2)
	{
		__LIB_6__::func_361(3, joaat("INPUT_GAME_MENU_RIGHT"), uParam0);
	}
	if (__LIB_0__::func_815(4) == 2)
	{
		__LIB_6__::func_361(4, joaat("INPUT_GAME_MENU_DOWN"), uParam0);
	}
	uParam0->f_9 = __LIB_2__::func_513("SHOP_EXIT", joaat("INPUT_CONTEXT_B"), uParam0->f_5, 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
	HUD::_UIPROMPT_SET_GROUP(__LIB_3__::func_66(uParam0->f_9), 1842627646, 0);
	MISC::SET_BIT(&(uParam0->f_1), 5);
}

bool func_528(var uParam0)
{
	*uParam0 = -1;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return false;
	}
	if (__LIB_6__::func_444())
	{
		return true;
	}
	if (__LIB_0__::func_815(2) == 2)
	{
		return true;
	}
	if (__LIB_0__::func_815(3) == 2)
	{
		return true;
	}
	if (__LIB_0__::func_815(4) == 2)
	{
		return true;
	}
	if (__LIB_6__::func_461())
	{
		return true;
	}
	else if (!__LIB_6__::func_82())
	{
		*uParam0 = 0;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_398(0)) && __LIB_6__::func_276(__LIB_0__::func_398(0)))
	{
		*uParam0 = 2;
	}
	else if (__LIB_1__::func_52(0) || (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_398(0)) && ENTITY::IS_ENTITY_DEAD(__LIB_0__::func_398(0))))
	{
		*uParam0 = 1;
	}
	return false;
}

int func_529(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 1:
			return __LIB_6__::func_474(iParam1, bParam2);
		case 2:
			return __LIB_6__::func_475(iParam1, bParam2);
		case 6:
			return __LIB_6__::func_476(iParam1, bParam2);
	}
	return __LIB_1__::func_976();
}

void func_530(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	if (Global_40.f_4283.f_440[iParam0 /*63*/].f_1[iParam1 /*5*/].f_4 == 0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(*uParam2, false);
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(*uParam2, true);
	if (MISC::IS_BIT_SET(Global_40.f_4283.f_440[iParam0 /*63*/].f_1[iParam1 /*5*/], 0))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam2->f_1, 0);
	}
	else if (Global_40.f_4283.f_440[iParam0 /*63*/].f_1[iParam1 /*5*/].f_1 == -1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam2->f_1, joaat("PLYR_ARTHUR"));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam2->f_1, __LIB_6__::func_171(Global_40.f_4283.f_440[iParam0 /*63*/].f_1[iParam1 /*5*/].f_1, 1));
	}
	if (MISC::IS_BIT_SET(Global_40.f_4283.f_440[iParam0 /*63*/].f_1[iParam1 /*5*/], 0))
	{
		if (MISC::IS_BIT_SET(Global_40.f_4283.f_440[iParam0 /*63*/].f_1[iParam1 /*5*/], 1))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam2->f_2, __LIB_6__::func_25(Global_40.f_4283.f_440[iParam0 /*63*/].f_1[iParam1 /*5*/].f_3, 1));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam2->f_2, __LIB_6__::func_25(Global_40.f_4283.f_440[iParam0 /*63*/].f_1[iParam1 /*5*/].f_3, 0));
		}
	}
	else if (Global_40.f_4283.f_440[iParam0 /*63*/].f_1[iParam1 /*5*/].f_2 == 0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam2->f_2, -1328473345 /* GXTEntry: "Cash" */);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam2->f_2, Global_40.f_4283.f_440[iParam0 /*63*/].f_1[iParam1 /*5*/].f_2);
	}
	iVar0 = Global_40.f_4283.f_440[iParam0 /*63*/].f_1[iParam1 /*5*/].f_4;
	if (MISC::IS_BIT_SET(Global_40.f_4283.f_440[iParam0 /*63*/].f_1[iParam1 /*5*/], 0))
	{
		if (iVar0 >= 0)
		{
		}
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam2->f_3, MISC::_CREATE_VAR_STRING(2, "CASH_STRING_NEG", -iVar0));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam2->f_3, MISC::_CREATE_VAR_STRING(2, "CASH_STRING", iVar0));
	}
}

int func_531(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (PED::IS_PED_A_PLAYER(iParam0))
		{
			__LIB_1__::func_452(13, iParam1, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_452(13, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!__LIB_6__::func_150(0))
	{
	}
	__LIB_1__::func_550(&(Global_1946804.f_1497), iParam0, 1, iParam1, 1, bParam3, 1);
	return 1;
}

int func_532(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (PED::IS_PED_A_PLAYER(iParam0))
		{
			__LIB_1__::func_452(14, iParam1, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_452(14, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!__LIB_6__::func_151(0))
	{
	}
	__LIB_1__::func_550(&(Global_1946804.f_1497), iParam0, 1, iParam1, 1, bParam3, 1);
	return 1;
}

void func_533(int iParam0)
{
	__LIB_6__::func_469(iParam0);
	__LIB_6__::func_57(Global_1357549.f_3[0], Global_1357549.f_3[2], Global_1357549.f_3[4], Global_1357549.f_3[5]);
	__LIB_6__::func_343(Global_1357549.f_3[2]);
	__LIB_6__::func_58(iParam0);
	__LIB_6__::func_344();
	if (__LIB_4__::func_635(32768))
	{
		if (FIRE::IS_ENTITY_ON_FIRE(Global_35))
		{
			FIRE::STOP_ENTITY_FIRE(Global_35, 1);
		}
		if (!__LIB_1__::func_533(2048))
		{
			if (!__LIB_4__::func_635(64))
			{
				__LIB_6__::func_124(0);
			}
			PLAYER::_0x9461A8FAB0378E5B(PLAYER::PLAYER_ID(), 1);
			if (!__LIB_1__::func_533(67108864))
			{
				FIRE::_0x24DB6B9F2B719043(0.1f);
			}
		}
	}
	else if (__LIB_1__::func_533(2048))
	{
		PLAYER::_0x9461A8FAB0378E5B(PLAYER::PLAYER_ID(), 0);
	}
	if (!__LIB_4__::func_635(32768) && __LIB_1__::func_533(2048))
	{
		if (!__LIB_4__::func_635(64))
		{
			__LIB_6__::func_124(1);
		}
		if (!__LIB_1__::func_533(67108864))
		{
			FIRE::_0x24DB6B9F2B719043(-1f);
		}
	}
	if (__LIB_1__::func_533(512))
	{
		if (!__LIB_1__::func_533(2))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_ROB"), false);
		}
	}
	if (__LIB_2__::func_776())
	{
		if (!__LIB_4__::func_635(1024))
		{
			AUDIO::SET_AUDIO_FLAG("EnableIdleMusic", false);
			__LIB_0__::func_326(1024);
		}
	}
	else if (__LIB_4__::func_635(1024))
	{
		AUDIO::SET_AUDIO_FLAG("EnableIdleMusic", true);
		__LIB_0__::func_698(1024);
	}
	if (MISC::GET_GAME_TIMER() <= Global_1357549.f_1892)
	{
		__LIB_5__::func_548(4194304);
	}
	else
	{
		__LIB_5__::func_547(4194304);
	}
	if ((((!__LIB_4__::func_635(262144) && __LIB_2__::func_157(Global_1357549.f_3[2], Global_36)) && !__LIB_4__::func_635(4)) && !__LIB_4__::func_635(2)) && __LIB_0__::func_317() != 8)
	{
		CAM::_0x632BE8D84846FA56();
	}
	if (Local_18.f_2019 != 0)
	{
		if (!__LIB_1__::func_533(16777216))
		{
			MAP::_0x1392105DA88BBFFB(Local_18.f_2019, Local_18.f_2019.f_3, Local_18.f_2019.f_4, Local_18.f_2019.f_2, Local_18.f_2019.f_1);
			__LIB_5__::func_548(16777216);
		}
	}
	else if (__LIB_1__::func_533(16777216))
	{
		MAP::_0xE057FEA9A22EB3EE(Local_18.f_2019);
		__LIB_5__::func_547(16777216);
	}
	if (__LIB_6__::func_272())
	{
		if (!__LIB_6__::func_55(Local_18.f_47, 64))
		{
			__LIB_6__::func_59(Local_18.f_47, 64);
		}
	}
	else if (__LIB_6__::func_55(Local_18.f_47, 64))
	{
		__LIB_6__::func_60(Local_18.f_47, 64);
	}
	Global_1357549.f_1484 = MISC::GET_GAME_TIMER();
}

void func_534(var uParam0, var uParam1)
{
	if (uParam1->f_5 == -15)
	{
		__LIB_6__::func_470(&(uParam1->f_5));
	}
	if (__LIB_5__::func_771(uParam1->f_5) && __LIB_3__::func_77(uParam1->f_5))
	{
		__LIB_6__::func_437(uParam0, uParam1);
		__LIB_6__::func_470(&(uParam1->f_5));
	}
}

void func_535(var uParam0)
{
	bool bVar0;
	if ((MISC::GET_FRAME_COUNT() % 30) != 0)
	{
		return;
	}
	bVar0 = false;
	if (((((Global_1357549.f_1672 == -774242862 || Global_1357549.f_1672 == joaat("MONEY_LOANSHARK_WINTON_DEBT")) || Global_1357549.f_1672 == joaat("MONEY_LOANSHARK_GWEN_DEBT")) || Global_1357549.f_1672 == joaat("MONEY_LOANSHARK_CATFISH_DEBT")) || Global_1357549.f_1672 == joaat("MONEY_LOANSHARK_LILLY_DEBT")) || Global_1357549.f_1672 == joaat("MONEY_LOANSHARK_HORSE_CHASE_DEBT"))
	{
		if (__LIB_1__::func_198(joaat("CSTAG_FLOW_DEBT_COLLECTED"), 1) == 0)
		{
			bVar0 = true;
			__LIB_4__::func_253(joaat("CSTAG_FLOW_DEBT_COLLECTED"), 1017034651, 1120952528, -1, 1, 1, 0);
		}
	}
	else
	{
		__LIB_1__::func_449(joaat("CSTAG_FLOW_DEBT_COLLECTED"), 1, 0);
	}
	if (bVar0)
	{
		if (__LIB_0__::func_139(uParam0->f_1))
		{
			__LIB_1__::func_484(uParam0->f_1, "MONEY_LOANSHARK_ALL_DEBTS", 1);
		}
	}
	if (Global_1357549.f_1672 == 0)
	{
		if (__LIB_1__::func_614(-774242862 /* GXTEntry: "Wróbel\'s Valuables" */, 0, 0) >= 1)
		{
			__LIB_5__::func_905(-774242862 /* GXTEntry: "Wróbel\'s Valuables" */, joaat("P_MONEYSTACK01X"));
			return;
		}
		if (__LIB_1__::func_614(joaat("MONEY_LOANSHARK_WINTON_DEBT"), 0, 0) >= 1)
		{
			__LIB_5__::func_905(joaat("MONEY_LOANSHARK_WINTON_DEBT"), joaat("P_MONEYSTACK01X"));
			return;
		}
		if (__LIB_1__::func_614(joaat("MONEY_LOANSHARK_GWEN_DEBT"), 0, 0) >= 1)
		{
			__LIB_5__::func_905(joaat("MONEY_LOANSHARK_GWEN_DEBT"), joaat("P_MONEYSTACK01X"));
			return;
		}
		if (__LIB_1__::func_614(joaat("MONEY_LOANSHARK_CATFISH_DEBT"), 0, 0) >= 1)
		{
			__LIB_5__::func_905(joaat("MONEY_LOANSHARK_CATFISH_DEBT"), joaat("P_MONEYSTACK01X"));
			return;
		}
		if (__LIB_1__::func_614(joaat("MONEY_LOANSHARK_LILLY_DEBT"), 0, 0) >= 1)
		{
			__LIB_5__::func_905(joaat("MONEY_LOANSHARK_LILLY_DEBT"), joaat("P_MONEYSTACK01X"));
			return;
		}
		if (__LIB_1__::func_614(joaat("MONEY_LOANSHARK_HORSE_CHASE_DEBT"), 0, 0) >= 1)
		{
			__LIB_5__::func_905(joaat("MONEY_LOANSHARK_HORSE_CHASE_DEBT"), joaat("P_MONEYSTACK01X"));
			return;
		}
	}
}

void func_536(int* iParam0)
{
	int iVar0;
	iVar0 = -1;
	if (__LIB_0__::func_86(__LIB_5__::func_913(__LIB_5__::func_846())) == 0)
	{
		if (__LIB_0__::func_94(Global_35, __LIB_5__::func_913(__LIB_5__::func_846()), 1) < 20f && !__LIB_0__::func_181())
		{
			if (iParam0->f_4 == 1)
			{
				iParam0->f_4 = 0;
				if (__LIB_0__::func_474(256) == 0)
				{
					__LIB_1__::func_240(256, 0);
				}
				else if (__LIB_0__::func_474(257) == 0)
				{
					__LIB_1__::func_240(257, 0);
				}
			}
		}
	}
	switch (__LIB_0__::func_317())
	{
		case 1:
			iVar0 = 56;
			break;
		case 2:
			iVar0 = 57;
			break;
		case 6:
			iVar0 = 59;
			break;
		case 3:
			iVar0 = 58;
			break;
	}
	if (iVar0 != -1)
	{
		if (__LIB_4__::func_635(33554432))
		{
			if (!__LIB_1__::func_198(joaat("CSTAG_EVENT_PEARSON_RESERVED"), 1))
			{
				__LIB_4__::func_253(joaat("CSTAG_EVENT_PEARSON_RESERVED"), joaat("CSTP_NEXT_VISIT"), 1120952528, 2, 1, 1, 0);
			}
		}
		else if (__LIB_1__::func_198(joaat("CSTAG_EVENT_PEARSON_RESERVED"), 1))
		{
			__LIB_1__::func_449(joaat("CSTAG_EVENT_PEARSON_RESERVED"), 1, 0);
		}
		if (__LIB_6__::func_472(iParam0))
		{
			if (__LIB_1__::func_935(iVar0, 16384))
			{
				__LIB_1__::func_937(iVar0, 16384);
			}
		}
		else if (__LIB_1__::func_935(iVar0, 16384) == 0)
		{
			__LIB_1__::func_936(iVar0, 16384);
		}
	}
}

void func_537()
{
	if (__LIB_5__::func_219(26))
	{
		MISC::_SET_WEATHER_TYPE(joaat("FOG"), false, true, true, 10f, false);
		return;
	}
	if (__LIB_5__::func_219(59) || __LIB_2__::func_774(59))
	{
		return;
	}
	if (!__LIB_6__::func_89(1))
	{
		__LIB_6__::func_413(joaat("WEATHER_GROUP_IN_CAMP"), 1, 0, 1103626240 /* Float: 25f */);
	}
}

void func_538()
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	switch (Global_1357549.f_11)
	{
		case 0:
			__LIB_5__::func_830();
			Global_1357549.f_11 = 1;
			break;
		case 1:
			__LIB_6__::func_483();
			break;
		case 2:
			break;
	}
}

void func_539()
{
	if (Local_18.f_45 == 7 || Local_18.f_45 == 8)
	{
		if (LAW::_0x9D5C9A5A3321B128(PLAYER::PLAYER_ID()))
		{
			__LIB_0__::func_45("RANCH_LAW_GRIEF", 10000, 0, 0, 0, 1);
			__LIB_1__::func_715(2, joaat("HONOR_EVENT_WANTED_IN_CAMP"), 0, "RANCH_LAW_HON", 0, 0, 1065353216 /* Float: 1f */, 0);
		}
		else
		{
			__LIB_0__::func_45("RANCH_COMBAT_GRIEF", 10000, 0, 0, 0, 1);
			__LIB_1__::func_715(2, joaat("HONOR_EVENT_WANTED_IN_CAMP"), 0, "RANCH_COMBAT_HON", 0, 0, 1065353216 /* Float: 1f */, 0);
		}
	}
	else if (LAW::_0x9D5C9A5A3321B128(PLAYER::PLAYER_ID()))
	{
		__LIB_0__::func_45("CAMP_LAW_GRIEF", 10000, 0, 0, 0, 1);
		__LIB_1__::func_715(2, joaat("HONOR_EVENT_WANTED_IN_CAMP"), 0, "CAMP_LAW_HON", 0, 0, 1065353216 /* Float: 1f */, 0);
	}
	else
	{
		__LIB_0__::func_45("CAMP_COMBAT_GRIEF", 10000, 0, 0, 0, 1);
		__LIB_1__::func_715(2, joaat("HONOR_EVENT_WANTED_IN_CAMP"), 0, "CAMP_COMBAT_HON", 0, 0, 1065353216 /* Float: 1f */, 0);
	}
	__LIB_5__::func_875();
}

int func_540()
{
	__LIB_1__::func_725();
	if (__LIB_6__::func_274())
	{
		__LIB_6__::func_485();
		return 0;
	}
	return -1;
}

int func_541()
{
	if (MISC::GET_GAME_TIMER() > Local_18.f_1786.f_1)
	{
		if (__LIB_5__::func_860(2))
		{
			__LIB_5__::func_861(2);
			__LIB_1__::func_715(3, joaat("HONOR_EVENT_ANTAGONIZE"), 0, "CAMP_DBODY_HON", 0, 0, 1065353216 /* Float: 1f */, 0);
			if (((((__LIB_5__::func_860(8) || __LIB_5__::func_860(16)) || __LIB_5__::func_860(32)) || __LIB_5__::func_860(64)) || __LIB_5__::func_860(2048)) || __LIB_5__::func_860(1024))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (__LIB_5__::func_860(4))
		{
			__LIB_5__::func_861(4);
			__LIB_1__::func_715(3, joaat("HONOR_EVENT_ANTAGONIZE"), 0, "CAMP_HOGT_HON", 0, 0, 1065353216 /* Float: 1f */, 0);
			if (((((__LIB_5__::func_860(8) || __LIB_5__::func_860(16)) || __LIB_5__::func_860(32)) || __LIB_5__::func_860(64)) || __LIB_5__::func_860(2048)) || __LIB_5__::func_860(1024))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (__LIB_5__::func_860(8))
		{
			__LIB_5__::func_861(8);
			__LIB_1__::func_715(3, joaat("HONOR_EVENT_ANTAGONIZE"), 0, "CAMP_DBODY_HON", 0, 0, 1065353216 /* Float: 1f */, 0);
			if (((__LIB_5__::func_860(32) || __LIB_5__::func_860(64)) || __LIB_5__::func_860(2048)) || __LIB_5__::func_860(1024))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (__LIB_5__::func_860(16))
		{
			__LIB_5__::func_861(16);
			__LIB_1__::func_715(3, joaat("HONOR_EVENT_ANTAGONIZE"), 0, "CAMP_HOGT_HON", 0, 0, 1065353216 /* Float: 1f */, 0);
			if (((__LIB_5__::func_860(32) || __LIB_5__::func_860(64)) || __LIB_5__::func_860(2048)) || __LIB_5__::func_860(1024))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (__LIB_5__::func_860(2048))
		{
			__LIB_5__::func_861(2048);
			__LIB_1__::func_715(3, joaat("HONOR_EVENT_ANTAGONIZE"), 0, "CAMP_DBODY_HON", 0, 0, 1065353216 /* Float: 1f */, 0);
			if (__LIB_5__::func_860(32) || __LIB_5__::func_860(64))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (__LIB_5__::func_860(1024))
		{
			__LIB_5__::func_861(1024);
			__LIB_1__::func_715(3, joaat("HONOR_EVENT_ANTAGONIZE"), 0, "CAMP_HOGT_HON", 0, 0, 1065353216 /* Float: 1f */, 0);
			if (__LIB_5__::func_860(32) || __LIB_5__::func_860(64))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (__LIB_5__::func_860(32))
		{
			__LIB_5__::func_861(32);
			__LIB_1__::func_715(3, joaat("HONOR_EVENT_ANTAGONIZE"), 0, "CAMP_DBODY_HON", 0, 0, 1065353216 /* Float: 1f */, 0);
		}
		if (__LIB_5__::func_860(64))
		{
			__LIB_5__::func_861(64);
			__LIB_1__::func_715(3, joaat("HONOR_EVENT_ANTAGONIZE"), 0, "CAMP_HOGT_HON", 0, 0, 1065353216 /* Float: 1f */, 0);
		}
		return 0;
	}
	return -1;
}

void func_542()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bVar0 = __LIB_1__::func_533(16);
	bVar1 = Global_1357549.f_1485 > BUILTIN::TO_FLOAT(5400);
	bVar2 = __LIB_4__::func_635(32768);
	if ((!bVar0 && bVar2) && bVar1)
	{
		__LIB_5__::func_548(16);
		__LIB_1__::func_715(2, joaat("HONOR_EVENT_LONG_ABSENCE"), 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
	}
	if (bVar0 && !bVar2)
	{
		__LIB_5__::func_547(16);
		Global_1357549.f_1485 = 0f;
	}
}

bool func_543(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
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
	if (!__LIB_1__::func_744())
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

void func_544()
{
	var uVar0;
	struct<4> Var30;
	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	uVar0 = 29;
	__LIB_0__::func_840(Global_35, &uVar0);
	Var30 = { __LIB_0__::func_949(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	__LIB_4__::func_144(0);
	__LIB_1__::func_835(7);
	__LIB_3__::func_916(joaat("KIT_BANDANA"), 1, 1, 0);
	if (__LIB_0__::func_241() == 1160113249)
	{
		__LIB_3__::func_916(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		__LIB_3__::func_916(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	__LIB_0__::func_841(Global_35, &uVar0);
}

void func_545()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	if (__LIB_0__::func_396(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_MOUNT(PLAYER::PLAYER_PED_ID());
	}
	else
	{
		iVar0 = PED::_GET_LAST_MOUNT(PLAYER::PLAYER_PED_ID());
	}
	if (__LIB_6__::func_155(iVar0))
	{
		if (__LIB_6__::func_276(iVar0) && __LIB_0__::func_126(iVar0))
		{
			if (Global_1357549.f_1897 != iVar0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1357549.f_1897))
				{
					__LIB_6__::func_458();
				}
				__LIB_6__::func_491(iVar0, Local_18.f_45, 1);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Global_1357549.f_1897) && Global_1357549.f_1897 == iVar0)
		{
			__LIB_6__::func_458();
		}
		else if ((ENTITY::DOES_ENTITY_EXIST(Global_1357549.f_1897) && Global_1357549.f_1897 != iVar0) && __LIB_0__::func_396(PLAYER::PLAYER_PED_ID()))
		{
			iVar1 = __LIB_5__::func_835(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 2);
			if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar1))
			{
				if (__LIB_0__::func_94(iVar0, TASK::_GET_SCENARIO_POINT_COORDS(iVar1, true), 1) < 8f)
				{
					if (!__LIB_0__::func_474(604))
					{
						__LIB_1__::func_240(604, 0);
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1357549.f_1897))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_1357549.f_1897) && __LIB_6__::func_155(Global_1357549.f_1897))
		{
			if (!MAP::DOES_BLIP_EXIST(Global_1357549.f_1897.f_1))
			{
				if (!MAP::_DOES_ENTITY_HAVE_BLIP(Global_1357549.f_1897))
				{
					Global_1357549.f_1897.f_1 = MAP::_BLIP_ADD_FOR_ENTITY(-1230993421, Global_1357549.f_1897);
					MAP::_BLIP_SET_MODIFIER(Global_1357549.f_1897.f_1, 287169430);
					MAP::_BLIP_SET_MODIFIER(Global_1357549.f_1897.f_1, -201249929);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1357549.f_1897.f_1, "BLIP_CAMP_HORSE");
				}
			}
			else if (MAP::GET_BLIP_FROM_ENTITY(Global_1357549.f_1897) != Global_1357549.f_1897.f_1)
			{
				MAP::REMOVE_BLIP(&(Global_1357549.f_1897.f_1));
			}
		}
		else
		{
			if (MAP::DOES_BLIP_EXIST(Global_1357549.f_1897.f_1))
			{
				MAP::REMOVE_BLIP(&(Global_1357549.f_1897.f_1));
			}
			if (Global_40.f_4283.f_567)
			{
				__LIB_6__::func_458();
			}
		}
	}
	else if (MAP::DOES_BLIP_EXIST(Global_1357549.f_1897.f_1))
	{
		MAP::REMOVE_BLIP(&(Global_1357549.f_1897.f_1));
	}
}

bool func_546(int iParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	vector3 vVar10;
	vector3 vVar13;
	int iVar16;
	struct<11> Var17;
	if (!__LIB_6__::func_83())
	{
		return true;
	}
	vVar0 = { __LIB_6__::func_484(iParam0, -1) };
	if (__LIB_0__::func_86(vVar0))
	{
		return false;
	}
	iVar6 = __LIB_0__::func_398(0);
	iVar7 = __LIB_0__::func_398(1);
	bVar8 = false;
	if (ENTITY::DOES_ENTITY_EXIST(iVar7))
	{
		if (__LIB_0__::func_266(iVar7, vVar0, 2f, 1, 0))
		{
			bVar8 = true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar6) && PED::_0xA0BC8FAED8CFEB3C(iVar6))
	{
		if (PED::_GET_RIDER_OF_MOUNT(iVar6, true) != 0 || PED::GET_MOUNT(Global_35) == iVar6)
		{
			return true;
		}
		__LIB_6__::func_184();
		__LIB_1__::func_643();
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar6, false, true);
		MISC::CLEAR_AREA(vVar0, 1f, 2442122);
		if (bVar8)
		{
			vVar3 = { __LIB_6__::func_484(iParam0, 1) };
		}
		else
		{
			vVar3 = { vVar0 };
		}
		ENTITY::SET_ENTITY_COORDS(iVar6, vVar3, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(iVar6, __LIB_6__::func_396(iParam0));
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iVar6, vVar0, 0.25f, -1, false, false, false, false);
		iVar9 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vVar0, joaat("PROP_HITCHINGPOST"), 0.5f, 0, false);
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar9))
		{
			vVar10 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(TASK::_GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO(iVar9), __LIB_5__::func_918(2, 1)) };
			PHYSICS::_0x06AADE17334F7A40(iVar6, vVar10);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar7) && bVar8)
		{
			vVar3 = { __LIB_6__::func_484(iParam0, 0) };
			ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, true, false, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar7, __LIB_6__::func_396(iParam0));
			TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iVar7, vVar0, 0.25f, -1, false, false, false, false);
			if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar9))
			{
				vVar13 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(TASK::_GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO(iVar9), __LIB_5__::func_918(2, 0)) };
				PHYSICS::_0x06AADE17334F7A40(iVar7, vVar13);
			}
		}
		uParam1->f_3 = iVar6;
		return true;
	}
	Var17.f_10 = 7;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_3))
	{
		Var17.f_10 = 0;
		Var17.f_6 = { vVar0 };
		Var17.f_9 = 0f;
		Var17.f_1 = 0;
		Var17 = 1;
		Var17.f_2 = 1;
		iVar6 = __LIB_6__::func_186(&iVar16, &Var17);
		switch (iVar16)
		{
			case 0:
				return false;
			case 1:
				return true;
			case 2:
				break;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_547(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return MISC::IS_BIT_SET(Global_40.f_6563.f_271, iVar0);
}

int func_548()
{
	switch (Global_40.f_6563.f_272)
	{
		case joaat("DOCUMENT_BOOK_FRANK_HECK"):
			return joaat("P_CS_BOOKHARDCV06X_A");
		case joaat("DOCUMENT_BOOK_BOY_NEW_YORK"):
			return joaat("P_CS_BOOKHARDCV07X_A");
		case joaat("DOCUMENT_BOOK_BLACK_HEART_LADY"):
			return joaat("P_CS_BOOKHARDCV08X_A");
		case joaat("DOCUMENT_BOOK_ARABIAN_PRINCE"):
			return joaat("P_CS_BOOKHARDCV09X_A");
		case joaat("DOCUMENT_BOOK_JIM_BOY"):
			return joaat("P_CS_BOOKHARDCV11X_A");
	}
	return joaat("P_CS_BOOKHARDCV08X_A");
}

void func_549(int iParam0)
{
	switch (__LIB_0__::func_2())
	{
		case -1:
			Global_1357549.f_1496 = (Global_1357549.f_1496 || iParam0);
			break;
	}
}

void func_550(var uParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1357549.f_1626))
	{
		OBJECT::DELETE_OBJECT(&(Global_1357549.f_1626));
	}
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1357549.f_1625 = 0;
}

int func_551()
{
	if (__LIB_0__::func_317() == -1)
	{
		return 1;
	}
	return __LIB_6__::func_196(16);
}

int func_552()
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5 + 1);
	return iVar0;
}

void func_553(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		__LIB_6__::func_221(uParam0[iVar0 /*8*/]);
		iVar0++;
	}
}

Vector3 func_554(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 0:
			switch (uParam0->f_5[1])
			{
				case 0:
					return -1601.94f, -1431.2f, 80.41f;
				case 1:
					return -1596.57f, -1409.89f, 80.95f;
				case 2:
					return -1599.88f, -1417.56f, 80.94f;
				case 3:
					return -1576.5f, -1422.16f, 80.67f;
				default:
					break;
			}
			break;
		case 4:
			switch (uParam0->f_5[1])
			{
				case 0:
					return -1578.51f, -1393.98f, 80.02f;
				case 1:
					return -1578.16f, -1393.13f, 80f;
				default:
					break;
			}
			break;
		case 6:
			switch (uParam0->f_5[1])
			{
				case 0:
					return __LIB_6__::func_210();
				case 1:
					return __LIB_6__::func_210();
				default:
					break;
			}
			break;
		case 14:
			switch (uParam0->f_5[1])
			{
				case 0:
					return -1587.35f, -1393.41f, 80.33f;
				default:
					break;
			}
			break;
		case 5:
			switch (uParam0->f_5[1])
			{
				case 0:
					return __LIB_6__::func_210();
				case 1:
					return __LIB_6__::func_210();
				default:
					break;
			}
			break;
		case 9:
			switch (uParam0->f_5[1])
			{
				case 0:
					return -1628.88f, -1413.65f, 81.41f;
				default:
					break;
			}
			break;
		case 7:
			switch (uParam0->f_5[1])
			{
				case 0:
					return -1655.68f, -1341.21f, 82.96f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_555(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 0:
			switch (uParam0->f_5[1])
			{
				case 0:
					return 665.99f, -1205.8f, 45.44f;
				case 1:
					return 666.86f, -1205.71f, 45.4f;
				case 3:
					return 671.08f, -1205.93f, 45.36f;
				case 4:
					return 714.82f, -1250.56f, 44.09f;
				case 2:
					return 712.4f, -1251f, 44.1f;
				default:
					break;
			}
			break;
		case 4:
			switch (uParam0->f_5[1])
			{
				case 0:
					return 679.32f, -1246.59f, 42.99f;
				case 1:
					return 678.38f, -1249.08f, 43.01f;
				default:
					break;
			}
			break;
		case 1:
			switch (uParam0->f_5[1])
			{
				case 0:
					return 678.1966f, -1251.232f, 43.0152f;
				default:
					break;
			}
			break;
		case 7:
			switch (uParam0->f_5[1])
			{
				case 0:
					return 667.7363f, -1273.373f, 42.98447f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_556(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	iVar1 = __LIB_6__::func_196(16);
	bVar2 = iVar1 == *iParam2;
	bVar3 = true;
	if (!bVar2)
	{
		*uParam1 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			if (PERSCHAR::_0x800DF3FC913355F3((uParam0[iVar0 /*4*/])->f_1))
			{
				if (iVar1 >= (uParam0[iVar0 /*4*/])->f_3)
				{
					if (bParam3)
					{
						if (__LIB_6__::func_205((*uParam0)[iVar0 /*4*/]))
						{
							iVar4++;
							bVar5 = true;
						}
					}
					if ((bParam3 && bVar5) && iVar4 <= 2)
					{
						if (!ENTITY::DOES_ENTITY_EXIST((uParam0[iVar0 /*4*/])->f_2))
						{
							(uParam0[iVar0 /*4*/])->f_2 = PERSCHAR::_0x08FC896D2CB31FCC((uParam0[iVar0 /*4*/])->f_1, 0);
							if (!ENTITY::DOES_ENTITY_EXIST((uParam0[iVar0 /*4*/])->f_2))
							{
								bVar3 = false;
							}
						}
					}
					else
					{
						PERSCHAR::_0x4F81EAD1DE8FA19B((uParam0[iVar0 /*4*/])->f_1);
					}
				}
				else
				{
					PERSCHAR::_0xFCC6DB8DBE709BC8((uParam0[iVar0 /*4*/])->f_1);
				}
			}
			iVar0++;
		}
	}
	if (!*uParam1)
	{
		*uParam1 = 1;
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			if (ENTITY::DOES_ENTITY_EXIST((uParam0[iVar0 /*4*/])->f_2))
			{
				if (!DECORATOR::DECOR_EXIST_ON((uParam0[iVar0 /*4*/])->f_2, "CaravanLivestock"))
				{
					DECORATOR::DECOR_SET_BOOL((uParam0[iVar0 /*4*/])->f_2, "CaravanLivestock", true);
				}
			}
			else if (iVar1 >= (uParam0[iVar0 /*4*/])->f_3 && (uParam0[iVar0 /*4*/])->f_1 != 0)
			{
				(uParam0[iVar0 /*4*/])->f_2 = PERSCHAR::_0x31C70A716CAE1FEE((uParam0[iVar0 /*4*/])->f_1);
				*uParam1 = 0;
			}
			iVar0++;
		}
	}
	if (!bVar3)
	{
		return;
	}
	if (!bVar2)
	{
		*iParam2 = iVar1;
	}
}

void func_557(int iParam0, int iParam1, vector3 vParam2)
{
	int iVar0;
	if (!CAM::IS_SPHERE_VISIBLE(vParam2, 0.5f))
	{
		iVar0 = CLOCK::GET_CLOCK_HOURS();
		if (iVar0 >= 7 && iVar0 < 10)
		{
			ENTITY::_0x56E0735D6273B227(iParam0, 0);
			__LIB_6__::func_236(iParam1, 0.33f, 0.2f, 0.2f);
		}
		else if (iVar0 >= 10 && iVar0 < 12)
		{
			ENTITY::_0x56E0735D6273B227(iParam0, 0);
			__LIB_6__::func_236(iParam1, 0.33f, 0.33f, 0.33f);
		}
		else if (iVar0 >= 12 && iVar0 < 20)
		{
			ENTITY::_0x56E0735D6273B227(iParam0, 0);
			__LIB_6__::func_236(iParam1, 0.75f, 0.5f, 0.5f);
		}
		else if (iVar0 >= 20 && iVar0 < 21)
		{
			ENTITY::_0x56E0735D6273B227(iParam0, 1);
			__LIB_6__::func_236(iParam1, 0.33f, 0.1f, 0.1f);
		}
		else if (iVar0 >= 21 && iVar0 < 22)
		{
			ENTITY::_0x56E0735D6273B227(iParam0, 1);
			__LIB_6__::func_236(iParam1, 0.01f, 0.005f, 0.005f);
		}
		else
		{
			ENTITY::_0x56E0735D6273B227(iParam0, 1);
			__LIB_6__::func_236(iParam1, 0f, 0f, 0f);
		}
	}
}

void func_558(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (__LIB_0__::func_27(iParam1, __LIB_6__::func_243((uParam0[iVar0 /*8*/])->f_1)))
		{
			if ((((uParam0[iVar0 /*8*/])->f_2 == 5 || (uParam0[iVar0 /*8*/])->f_2 == -2) || (uParam0[iVar0 /*8*/])->f_2 == 0) || (uParam0[iVar0 /*8*/])->f_2 == 6)
			{
			}
			else if (bParam2)
			{
				(uParam0[iVar0 /*8*/])->f_2 = 2;
			}
			else
			{
				(uParam0[iVar0 /*8*/])->f_2 = -1;
			}
		}
		iVar0++;
	}
}

void func_559(int iParam0)
{
	int iVar0;
	if (Global_1899528.f_213 && iParam0 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (__LIB_6__::func_244(__LIB_3__::func_322(iVar0)))
		{
			if (!__LIB_3__::func_323(iVar0) == -1)
			{
				if (__LIB_3__::func_324(iVar0) != 0)
				{
					if (MAP::DOES_BLIP_EXIST(Global_36308[iVar0]))
					{
						if (MAP::_BLIP_REMOVE_MODIFIER(Global_36308[iVar0], -1186550032))
						{
						}
					}
				}
			}
		}
		iVar0++;
	}
	Global_1899528.f_213 = 1;
}

void func_560(var uParam0, var uParam1)
{
	if (__LIB_5__::func_904(262144))
	{
		return;
	}
	if (!__LIB_0__::func_27(uParam0->f_1598, 8192) && !__LIB_0__::func_27(uParam0->f_1598, 2))
	{
		if (__LIB_0__::func_62(Global_36, __LIB_6__::func_247(8)) <= 3f && UIFEED::_0xC17F69E1418CD11F(1) == 0)
		{
			__LIB_0__::func_45("CAMP_CHORE_FEED_LOCKED_MESSAGE", 10000, 0, 0, 0, 1);
			__LIB_1__::func_683(&(uParam0->f_1598), 8192);
		}
	}
	if ((!__LIB_0__::func_27(uParam0->f_1598, 32768) && __LIB_0__::func_27(uParam0->f_1598, 2)) && !__LIB_0__::func_27(uParam0->f_1598, 4))
	{
		if (__LIB_0__::func_62(Global_36, __LIB_6__::func_247(6)) <= 3f && UIFEED::_0xC17F69E1418CD11F(1) == 0)
		{
			__LIB_0__::func_45("CAMP_CHORE_EGGS_LOCKED_MESSAGE", 10000, 0, 0, 0, 1);
			__LIB_1__::func_683(&(uParam0->f_1598), 32768);
		}
	}
	if (!__LIB_0__::func_27(uParam0->f_1598, 16384) && !__LIB_0__::func_27(uParam0->f_1598, 8))
	{
		if (__LIB_0__::func_62(Global_36, -1603.485f, -1414.838f, 81.1f) <= 3f && UIFEED::_0xC17F69E1418CD11F(1) == 0)
		{
			__LIB_0__::func_45("CAMP_CHORE_COW_LOCKED_MESSAGE", 10000, 0, 0, 0, 1);
			__LIB_1__::func_683(&(uParam0->f_1598), 16384);
		}
	}
	if ((!__LIB_0__::func_27(uParam0->f_1598, 65536) && !Global_40.f_4283.f_408.f_6) && !__LIB_0__::func_27(uParam0->f_1598, 16))
	{
		if (__LIB_0__::func_62(Global_36, __LIB_6__::func_247(5)) <= 3f && UIFEED::_0xC17F69E1418CD11F(1) == 0)
		{
			__LIB_0__::func_45("CAMP_CHORE_MILK_LOCKED_MESSAGE", 10000, 0, 0, 0, 1);
			__LIB_1__::func_683(&(uParam0->f_1598), 65536);
		}
	}
}

void func_561(int iParam0)
{
	int iVar0;
	if (Global_1899528.f_213 == 0 && iParam0 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (__LIB_6__::func_244(__LIB_3__::func_322(iVar0)))
		{
			if (!__LIB_3__::func_323(iVar0) == -1)
			{
				if (__LIB_3__::func_324(iVar0) != 0)
				{
					if (MAP::DOES_BLIP_EXIST(Global_36308[iVar0]))
					{
						if (MAP::_BLIP_SET_MODIFIER(Global_36308[iVar0], -1186550032))
						{
						}
					}
				}
			}
		}
		iVar0++;
	}
	Global_1899528.f_213 = 0;
}

int func_562(int iParam0)
{
	switch (__LIB_0__::func_317())
	{
		case 8:
			return __LIB_6__::func_252(iParam0);
		default:
			break;
	}
	return 1;
}

struct<8> func_563(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			return __LIB_0__::func_482("inworld_music_wax_cylinder");
		case 6:
			return __LIB_0__::func_482("inworld_music_wax_cylinder_camp_dancing");
		default:
			break;
	}
	return __LIB_0__::func_482("");
}

Vector3 func_564(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_1__::func_344("1");
		case 1:
			return __LIB_1__::func_344("2");
		case 2:
			return __LIB_1__::func_344("3");
		case 3:
			return __LIB_1__::func_344("4");
		case 4:
			return __LIB_1__::func_344("5");
		case 5:
			return __LIB_1__::func_344("6");
		case 6:
			return __LIB_1__::func_344("1");
		default:
			break;
	}
	return __LIB_1__::func_344("");
}

char* func_565(var uParam0)
{
	switch (__LIB_0__::func_317())
	{
		case 8:
			return __LIB_6__::func_255(uParam0);
		default:
			break;
	}
	return __LIB_6__::func_256(uParam0);
	return "FINISH_CAMP_CHORE";
}

void func_566(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		PED::_0x2B4CE170DE09F346(Global_35, iParam0);
	}
	__LIB_6__::func_259(iParam0, 0);
}

int func_567(var uParam0, var uParam1, var uParam2, vector3 vParam3, int iParam6, int iParam7)
{
	int iVar0;
	if (__LIB_1__::func_992(Global_35, vParam3, 1) > 900f)
	{
		return 1;
	}
	if (*uParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (!DECORATOR::DECOR_EXIST_ON(*uParam1, "letter_item"))
			{
				*uParam0 = 0;
			}
			else
			{
				return 1;
			}
		}
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(*uParam2))
	{
		*uParam2 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vParam3, iParam7, 1f, 0, false);
		return 0;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		iVar0 = TASK::_GET_SCENARIO_POINT_ENTITY(*uParam2, "PrimaryItem");
		*uParam1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0);
		return 0;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		if (!DECORATOR::DECOR_EXIST_ON(*uParam1, "letter_item"))
		{
			DECORATOR::DECOR_SET_INT(*uParam1, "letter_item", iParam6);
		}
		else
		{
			*uParam0 = 1;
			return 1;
		}
	}
	return 0;
}

void func_568(var uParam0, var uParam1)
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
	if (TASK::_0x0C3CB2E600C8977D(Global_35, 1))
	{
		uParam0->f_1582.f_2 = 4;
		if (__LIB_0__::func_139(uParam0->f_1610))
		{
			__LIB_1__::func_748(&(uParam0->f_1610), 1, 1);
		}
		uParam0->f_1581 = 8;
		return;
	}
}

struct<8> func_569(int iParam0, int iParam1)
{
	char cVar0[64];
	StringCopy(&cVar0, __LIB_6__::func_329(iParam0), 64);
	StringConCat(&cVar0, "_nav_camp_", 64);
	StringConCat(&cVar0, __LIB_6__::func_105(iParam1), 64);
	return cVar0;
}

void func_570(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_0__::func_271(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		PED::_0x2B4CE170DE09F346(iVar0, iParam1);
	}
	__LIB_6__::func_331(iParam0, iParam1, 0);
}

float func_571(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5f;
		case 2:
			return 20f;
		case 3:
			return 10f;
		case 4:
			return 10f;
		case 5:
			return 20f;
		case 6:
			return 10f;
		case 7:
			return 15f;
		case 8:
			return 15f;
		case 9:
			return 20f;
		case 10:
			return 5f;
		case 11:
			return 5f;
		case 12:
			return 10f;
		case 13:
			return 20f;
		case 14:
			return 30f;
		case 15:
			return 5f;
		case 16:
			return 5f;
		case 17:
			return 3f;
		case 18:
			return 20f;
		case 19:
			return __LIB_4__::func_383(iParam0);
		case 20:
			return 25f;
		case 21:
			return 50f;
		case 22:
			return 100f;
		case 23:
			return 150f;
		case 24:
			return 20f;
		case 25:
			return 10f;
		case 26:
			return 20f;
		case 27:
			return 20f;
		case 28:
			return 20f;
		case 29:
			return 20f;
		case 30:
			return __LIB_4__::func_383(iParam0);
		case 31:
			return 25f;
		case 32:
			return 50f;
		case 33:
			return 100f;
		case 34:
			return 150f;
		case 35:
			return 1f;
		case 36:
			return 5f;
		case 37:
			return 1f;
		case 38:
			return 3f;
		case 39:
			return 1f;
		case 40:
			return 1f;
		case 41:
			return 1f;
		case 42:
			return 5f;
		case 43:
			return 10f;
		case 49:
			return 20f;
		case 44:
			return 5f;
		case 45:
			return 5f;
		case 46:
			return 10f;
		case 47:
			return 10f;
		case 48:
			return 5f;
		case 50:
			return __LIB_4__::func_383(iParam0);
		case 51:
			return 25f;
		case 52:
			return 50f;
		case 53:
			return 100f;
		case 54:
			return 150f;
		case 55:
			return 5f;
		default:
			break;
	}
	return 0f;
}

bool func_572(var uParam0, var uParam1)
{
	if (__LIB_6__::func_430(&(uParam0->f_55), uParam1))
	{
		uParam1->f_4 = 0;
		return true;
	}
	if (__LIB_6__::func_431(&(uParam0->f_102), uParam1))
	{
		uParam1->f_4 = 1;
		return true;
	}
	if (__LIB_6__::func_431(&(uParam0->f_110), uParam1))
	{
		uParam1->f_4 = 2;
		return true;
	}
	return false;
}

void func_573(float fParam0, float fParam1, float fParam2)
{
	__LIB_6__::func_435(fParam0, fParam1, fParam2);
	__LIB_6__::func_270(__LIB_5__::func_826());
	__LIB_6__::func_271(MONEY::_MONEY_GET_CASH_BALANCE());
}

bool func_574(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	iVar0 = 1;
	*uParam0 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(__LIB_6__::func_197(__LIB_0__::func_317()), joaat("PROP_HUMAN_FOODPREP_STEW"), 3f, 0, true);
	*uParam2 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(__LIB_6__::func_197(__LIB_0__::func_317()), joaat("WORLD_HUMAN_CAULDRON_PUT_DOWN_TABLE"), 5f, 0, true);
	if (__LIB_1__::func_198(joaat("CSTAG_FLOW_FIRST_VISIT_MUD1_POST"), 1))
	{
		*uParam1 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(__LIB_6__::func_198(__LIB_0__::func_317()), joaat("WORLD_HUMAN_CAULDRON_ALWAYS"), 3f, 0, true);
	}
	else
	{
		*uParam1 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(__LIB_6__::func_198(__LIB_0__::func_317()), joaat("WORLD_HUMAN_CAULDRON"), 3f, 0, true);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(*uParam0))
	{
		iVar0 = 0;
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(*uParam1))
	{
		iVar0 = 0;
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(*uParam2))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_575(var uParam0)
{
	if (__LIB_0__::func_317() == 1)
	{
		if (__LIB_6__::func_206(14))
		{
			return false;
		}
	}
	if (__LIB_5__::func_61(18, 6) && !__LIB_1__::func_533(4))
	{
		return false;
	}
	if (__LIB_0__::func_1(Global_1347702[134 /*49*/].f_13, 64))
	{
		return false;
	}
	if (__LIB_4__::func_635(67108864))
	{
		return false;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return false;
	}
	switch (__LIB_0__::func_317())
	{
		case 8:
			if (!__LIB_1__::func_187(1))
			{
				return false;
			}
			if (__LIB_0__::func_592() != 1)
			{
				return false;
			}
			break;
		default:
			if (__LIB_0__::func_592() != 1)
			{
				return false;
			}
			break;
	}
	if (__LIB_0__::func_296(0, 0, 1))
	{
		return false;
	}
	if (Global_18 || __LIB_0__::func_1(Global_1935630, 32768))
	{
		return false;
	}
	if (__LIB_6__::func_220(0))
	{
		return false;
	}
	return true;
}

void func_576(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = __LIB_0__::func_821(iParam0);
	iVar1 = __LIB_0__::func_819(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iVar1 >= iVar2)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 = (Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 + fParam1);
	iVar3 = __LIB_0__::func_398(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar3) || PED::IS_PED_INJURED(iVar3))
	{
		return;
	}
	__LIB_5__::func_986(iVar3, BUILTIN::FLOOR(Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1));
	iVar4 = __LIB_5__::func_987(iVar3);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iVar4;
	PED::_0xA69899995997A63B(iVar3, iVar4);
	__LIB_1__::func_17(iVar4);
	if (iVar4 > iVar1)
	{
		__LIB_6__::func_324(iParam0, iVar4);
		if (iParam0 == 6)
		{
			if (iVar4 == 1)
			{
				if (__LIB_0__::func_293(42))
				{
					__LIB_1__::func_240(19, 1);
				}
				else
				{
					__LIB_1__::func_240(20, 1);
				}
			}
		}
		if (iVar4 == 2)
		{
			__LIB_1__::func_240(21, 1);
		}
		else if (iVar4 == 3)
		{
			__LIB_1__::func_240(22, 1);
		}
		else if (iVar4 == 4)
		{
			__LIB_1__::func_240(23, 1);
		}
		if (iVar4 >= 2)
		{
			iVar5 = __LIB_6__::func_95(iVar3);
			iVar6 = __LIB_1__::func_976();
			__LIB_6__::func_425(iVar6, iVar5 + 1);
			iVar7 = __LIB_6__::func_96(iVar3);
			iVar8 = __LIB_0__::func_16();
			__LIB_6__::func_425(iVar8, iVar7 + 1);
		}
		COMPENDIUM::COMPENDIUM_HORSE_BONDING(iVar3, iVar4);
		__LIB_0__::func_15(__LIB_0__::func_358(joaat("HORSE_BOND_INCREASED")), 1);
		if (iVar4 == iVar2)
		{
			__LIB_0__::func_15(__LIB_0__::func_358(joaat("HORSES_REACHED_MAX_BOND")), 1);
		}
		__LIB_0__::func_703(0, -1);
	}
}

int func_577()
{
	if (__LIB_6__::func_462(joaat("DOCUMENT_BOOK_FORAGING"), 1, 0))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-1739164071))
		{
			STREAMING::_REMOVE_IMAP(-1739164071);
		}
		return __LIB_1__::func_976();
	}
	return -1739164071;
}

int func_578()
{
	if (__LIB_6__::func_462(joaat("DOCUMENT_BOOK_HUNTING"), 1, 0))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-1331617405))
		{
			STREAMING::_REMOVE_IMAP(-1331617405);
		}
		return __LIB_1__::func_976();
	}
	return -1331617405;
}

int func_579()
{
	if (__LIB_6__::func_462(joaat("DOCUMENT_BOOK_HUNTING"), 1, 0))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-539928451))
		{
			STREAMING::_REMOVE_IMAP(-539928451);
		}
		return __LIB_1__::func_976();
	}
	return -539928451;
}

int func_580()
{
	if (__LIB_6__::func_462(joaat("DOCUMENT_BOOK_FORAGING"), 1, 0))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-293283707))
		{
			STREAMING::_REMOVE_IMAP(-293283707);
		}
		return __LIB_1__::func_976();
	}
	return -293283707;
}

void func_581(int iParam0)
{
	__LIB_1__::func_60(&(Global_1392915[iParam0 /*12*/]));
	__LIB_6__::func_377(&(Global_1392915.f_121[iParam0 /*20*/]));
}

bool func_582(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;
	int iVar6;
	int iVar7;
	struct<4> Var8;
	__LIB_0__::func_720(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	__LIB_0__::func_720(15, &Var8);
	Var8.f_2 = -1222062814;
	Var8.f_3 = uVar5;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var8.f_1), &Var8))
	{
		Var8.f_2 = 939842437;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar6, &Var8))
		{
			iVar7 = iVar6;
			return __LIB_6__::func_462(iVar7, 1, 0);
		}
	}
	return true;
}

void func_583()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		iVar1 = 0;
		while (iVar1 < 15)
		{
			switch (Local_18.f_3057[iVar1 /*21*/].f_3)
			{
				case 0:
					if (__LIB_1__::func_533(4))
					{
						if (__LIB_0__::func_139(Local_18.f_3057[iVar1 /*21*/]))
						{
							__LIB_1__::func_748(&(Local_18.f_3057[iVar1 /*21*/]), 1, 1);
						}
					}
					else if (VOLUME::_DOES_VOLUME_EXIST(Local_18.f_3057[iVar1 /*21*/].f_4))
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_18.f_3057[iVar1 /*21*/].f_4, false, 0))
						{
							if (!__LIB_0__::func_86(Local_18.f_3057[iVar1 /*21*/].f_6))
							{
								if (!__LIB_0__::func_139(Local_18.f_3057[iVar1 /*21*/]))
								{
									Local_18.f_3057[iVar1 /*21*/] = __LIB_2__::func_513(__LIB_5__::func_834(), Local_18.f_3057[iVar1 /*21*/].f_16, Local_18.f_3057[iVar1 /*21*/].f_4, 2, 1, 0, Local_18.f_3057[iVar1 /*21*/].f_17, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
									if ((iVar1 == 0 || iVar1 == 8) || iVar1 == 4)
									{
										__LIB_1__::func_522(Local_18.f_3057[iVar1 /*21*/], 26, 1, 1);
									}
									if (Local_18.f_3057[iVar1 /*21*/].f_18 != -1)
									{
										__LIB_4__::func_12(Local_18.f_3057[iVar1 /*21*/], Local_18.f_3057[iVar1 /*21*/].f_18, 0, 1);
									}
								}
								else if ((Local_18.f_3057[iVar1 /*21*/].f_17 == 0 && __LIB_1__::func_514(Local_18.f_3057[iVar1 /*21*/], 1)) || (Local_18.f_3057[iVar1 /*21*/].f_17 != 0 && __LIB_0__::func_567(Local_18.f_3057[iVar1 /*21*/], 1)))
								{
									__LIB_1__::func_748(&(Local_18.f_3057[iVar1 /*21*/]), 1, 1);
									Local_18.f_3057[iVar1 /*21*/].f_3 = 1;
								}
							}
						}
					}
					break;
				case 1:
					if (__LIB_0__::func_153(Global_35, 0, 1, 1) == joaat("WEAPON_KIT_BINOCULARS"))
					{
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_LOOK_AT_COORD(0, Local_18.f_3057[iVar1 /*21*/].f_6, -1, 1, 51, 1);
					TASK::TASK_PAUSE(0, 400);
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_18.f_3057[iVar1 /*21*/].f_6, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
					Local_18.f_3057[iVar1 /*21*/].f_3 = 2;
					break;
				case 2:
					if (!CAM::DOES_CAM_EXIST(Local_18.f_3057[iVar1 /*21*/].f_5))
					{
						if (!__LIB_0__::func_86(Local_18.f_3057[iVar1 /*21*/].f_9))
						{
							Local_18.f_3057[iVar1 /*21*/].f_5 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_18.f_3057[iVar1 /*21*/].f_9, Local_18.f_3057[iVar1 /*21*/].f_12, Local_18.f_3057[iVar1 /*21*/].f_15, false, 2);
						}
					}
					if (Local_18.f_3057[iVar1 /*21*/].f_19 != -1)
					{
						__LIB_6__::func_347(iVar1);
						if (__LIB_0__::func_139(Local_18.f_3057[iVar1 /*21*/].f_1))
						{
							if (__LIB_6__::func_510(iVar1))
							{
							}
							else
							{
								if (__LIB_0__::func_86(Local_18.f_3057[iVar1 /*21*/].f_9))
								{
									if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
									{
										CAM::SET_GAMEPLAY_COORD_HINT(Local_18.f_3057[iVar1 /*21*/].f_6, -1, 2000, 2000, 0);
									}
								}
								else if (CAM::DOES_CAM_EXIST(Local_18.f_3057[iVar1 /*21*/].f_5))
								{
									if (!CAM::IS_CAM_RENDERING(Local_18.f_3057[iVar1 /*21*/].f_5))
									{
										CAM::SET_CAM_ACTIVE(Local_18.f_3057[iVar1 /*21*/].f_5, true);
										CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
									}
								}
								__LIB_6__::func_348(iVar1);
								HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 2, 1, 799218720, Local_18.f_3057[iVar1 /*21*/].f_20, 0);
								if (__LIB_0__::func_139(Local_18.f_3057[iVar1 /*21*/].f_2))
								{
									if (__LIB_1__::func_732(Local_18.f_3057[iVar1 /*21*/].f_2, 1))
									{
										if (Local_18.f_3057[iVar1 /*21*/].f_19 != -1)
										{
											iVar2 = 0;
											while (iVar2 < 15)
											{
												Local_18.f_3057[iVar2 /*21*/].f_3 = 0;
												__LIB_1__::func_748(&(Local_18.f_3057[iVar2 /*21*/]), 1, 1);
												__LIB_1__::func_748(&(Local_18.f_3057[iVar2 /*21*/].f_1), 1, 1);
												__LIB_1__::func_748(&(Local_18.f_3057[iVar2 /*21*/].f_2), 1, 1);
												iVar2++;
											}
										}
										Local_18.f_3057[iVar1 /*21*/].f_3 = 4;
									}
								}
								Jump @1081; //curOff = 1059
								Jump @1081; //curOff = 1062
								__LIB_6__::func_349(&(Local_18.f_3057[iVar1 /*21*/]));
							}
							iVar1++;
						}
					}
					default:
						break;
			}
		}
	}
}

float func_584()
{
	int iVar0;
	iVar0 = __LIB_6__::func_512();
	return __LIB_0__::func_646((IntToFloat(iVar0) * __LIB_5__::func_774()), 100f);
}

void func_585(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(*uParam0))
	{
		return;
	}
	bVar0 = OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(*uParam0, true), 2f, joaat("P_KETTLE03X"), false);
	if (bVar0)
	{
		iVar1 = __LIB_6__::func_394(uParam0);
		switch (iVar1)
		{
			case 1:
				if (PED::_0x91A5F9CBEBB9D936(uParam1->f_1) && VOLUME::_DOES_VOLUME_EXIST(*uParam1))
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam1->f_1, false);
				}
				if (!MAP::DOES_BLIP_EXIST(Global_1357549.f_1624))
				{
					Global_1357549.f_1624 = MAP::_BLIP_ADD_FOR_COORD(joaat("BLIP_STYLE_SHOP"), __LIB_6__::func_199(__LIB_0__::func_317()));
					MAP::SET_BLIP_SPRITE(Global_1357549.f_1624, joaat("BLIP_GRUB"), true);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1357549.f_1624, "BLIP_CAMP_EAT");
					MAP::SET_BLIP_FLASH_TIMER(Global_1357549.f_1624, 65, -1);
					__LIB_5__::func_794(Global_1357549.f_1624, __LIB_0__::func_61());
				}
				if (PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_HUMAN_CAULDRON_SERVE_STEW_PLAYER")) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
				{
					Global_40.f_4283.f_330 = __LIB_0__::func_23();
					__LIB_1__::func_446(&(Global_40.f_4283.f_330), 0, 0, 0, 1, 0, 0, 0);
					if (!PED::_0x91A5F9CBEBB9D936(uParam1->f_1))
					{
						uParam1->f_1 = PED::_0x4C39C95AE5DB1329(*uParam1, 0, 2);
					}
					__LIB_6__::func_63(552);
					if (!__LIB_0__::func_474(553))
					{
						__LIB_1__::func_240(553, 0);
					}
				}
				if (__LIB_6__::func_62())
				{
					if (!__LIB_0__::func_474(550))
					{
						__LIB_1__::func_240(550, 0);
					}
				}
				break;
			case 2:
				if (MAP::DOES_BLIP_EXIST(Global_1357549.f_1624))
				{
					MAP::REMOVE_BLIP(&(Global_1357549.f_1624));
				}
				if (!PED::_0x91A5F9CBEBB9D936(uParam1->f_1) && VOLUME::_DOES_VOLUME_EXIST(*uParam1))
				{
					uParam1->f_1 = PED::_0x4C39C95AE5DB1329(*uParam1, 0, 2);
				}
				if (!__LIB_0__::func_474(552) && !__LIB_1__::func_262(552))
				{
					if (__LIB_0__::func_62(Global_36, __LIB_6__::func_198(__LIB_0__::func_317())) <= 9f)
					{
						__LIB_6__::func_200(552, 128);
						__LIB_1__::func_240(552, 0);
					}
				}
				break;
			case 5:
			case 6:
				if (MAP::DOES_BLIP_EXIST(Global_1357549.f_1624))
				{
					MAP::REMOVE_BLIP(&(Global_1357549.f_1624));
				}
				if (!PED::_0x91A5F9CBEBB9D936(uParam1->f_1) && VOLUME::_DOES_VOLUME_EXIST(*uParam1))
				{
					uParam1->f_1 = PED::_0x4C39C95AE5DB1329(*uParam1, 0, 2);
				}
				break;
		}
	}
	else
	{
		if (MAP::DOES_BLIP_EXIST(Global_1357549.f_1624))
		{
			MAP::REMOVE_BLIP(&(Global_1357549.f_1624));
		}
		if (!__LIB_0__::func_474(551) && !__LIB_1__::func_262(551))
		{
			if (__LIB_0__::func_62(Global_36, __LIB_6__::func_198(__LIB_0__::func_317())) <= 9f)
			{
				__LIB_1__::func_240(551, 0);
			}
		}
	}
}

bool func_586(int iParam0)
{
	if (__LIB_3__::func_104())
	{
		return false;
	}
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_6__::func_462(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

bool func_587(vector3 vParam0)
{
	if ((__LIB_1__::func_992(Global_35, vParam0, 1) < 900f && !__LIB_6__::func_366()) && CAM::IS_SCREEN_FADED_IN())
	{
		return true;
	}
	return false;
}

void func_588(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_1612, false) && !uParam0->f_1613)
	{
		MAP::DISPLAY_RADAR(false);
		uParam0->f_1581 = 10;
		__LIB_1__::func_681(&(uParam0->f_1598), 2048);
		__LIB_1__::func_683(&(uParam0->f_1598), 4096);
		__LIB_5__::func_812(262144);
		uParam0->f_1618 = 1;
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_1612);
		uParam0->f_1613 = 1;
		return;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_1612, false) && uParam0->f_1618)
	{
		if (CLOCK::GET_CLOCK_HOURS() < 16)
		{
			CLOCK::ADVANCE_CLOCK_TIME_TO(16, 0, 0);
		}
		__LIB_6__::func_215();
		if ((!__LIB_0__::func_699(13) || __LIB_0__::func_287(13, 45, 1)) || __LIB_0__::func_287(13, 46, 1))
		{
			PERSCHAR::_0xD4B614179BCD0654(__LIB_0__::func_748(13, 0));
		}
		if ((!__LIB_0__::func_699(4) || __LIB_0__::func_287(4, 45, 1)) || __LIB_0__::func_287(4, 46, 1))
		{
			PERSCHAR::_0xD4B614179BCD0654(__LIB_0__::func_748(4, 0));
		}
		if ((!__LIB_0__::func_699(14) || __LIB_0__::func_287(14, 45, 1)) || __LIB_0__::func_287(14, 46, 1))
		{
			PERSCHAR::_0xD4B614179BCD0654(__LIB_0__::func_748(14, 0));
		}
		if ((!__LIB_0__::func_699(7) || __LIB_0__::func_287(7, 45, 1)) || __LIB_0__::func_287(7, 46, 1))
		{
			PERSCHAR::_0xD4B614179BCD0654(__LIB_0__::func_748(7, 0));
		}
		ENTITY::SET_ENTITY_COORDS(Global_35, -1621.328f, -1390.344f, 81.839f, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(Global_35, 75.2354f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-39.9676f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-1.0538f, 1f);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1619[iVar0]))
			{
				OBJECT::DELETE_OBJECT(&(uParam0->f_1619[iVar0]));
			}
			iVar0++;
		}
		TASK::_0x4161648394262FDF(__LIB_6__::func_210(), 2f);
		uParam0->f_1618 = 0;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uParam0->f_1612, false))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_1612, 0);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1612);
		fVar1 = 0f;
		fVar1 = (2.5f * IntToFloat(__LIB_6__::func_233(Global_40.f_4283.f_408.f_2)));
		Global_40.f_4283.f_408.f_2 = 0f;
		fVar1 = (fVar1 + (1.5f * IntToFloat(__LIB_6__::func_233(Global_40.f_4283.f_408.f_3))));
		Global_40.f_4283.f_408.f_3 = 0f;
		__LIB_0__::func_45(MISC::_CREATE_VAR_STRING(2, "CAMP_CHORE_DEMO_SOLD_PRODUCT", BUILTIN::CEIL((fVar1 * 100f))), 10000, 0, 0, 0, 1);
		MAP::DISPLAY_RADAR(true);
		__LIB_1__::func_616(BUILTIN::CEIL((fVar1 * 100f)), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
		uParam0->f_1581 = 4;
		return;
	}
}

void func_589(var uParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Ledger");
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "CampId", 1);
	uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar0, "RtSpreadTop");
	__LIB_6__::func_517(uVar1, &(uParam0->f_1[0 /*237*/]));
	uVar2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar0, "RtSpreadBottom");
	__LIB_6__::func_517(uVar2, &(uParam0->f_1[1 /*237*/]));
	uVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "DynamicCatalogItems");
	uVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar3, "CatalogItemInspection");
	__LIB_5__::func_994(uVar3, &(uParam0->f_476));
	uParam0->f_487 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "CampMoneyDonated", __LIB_5__::func_826());
	uParam0->f_488 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar0, "CampMoneyLevel", "");
}

Vector3 func_590(var uParam0)
{
	switch (__LIB_0__::func_317())
	{
		case 8:
			return __LIB_6__::func_399(uParam0);
		case 1:
			return __LIB_6__::func_239(uParam0);
		case 3:
			return __LIB_6__::func_240(uParam0);
		case 6:
			return __LIB_6__::func_241(uParam0);
		case 2:
			return __LIB_6__::func_242(uParam0);
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_591(int* iParam0, var uParam1)
{
	switch (iParam0->f_20)
	{
		case 6:
			__LIB_6__::func_371(iParam0);
			__LIB_6__::func_464(&(iParam0->f_35));
			__LIB_6__::func_505(iParam0, uParam1);
			__LIB_6__::func_465(iParam0);
			break;
		default:
			__LIB_6__::func_372(iParam0);
			__LIB_6__::func_373(&(iParam0->f_35));
			__LIB_6__::func_374(iParam0);
			__LIB_6__::func_375(iParam0);
			break;
	}
}

void func_592(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (__LIB_6__::func_520(-1, 0, iParam0, &(Global_40.f_4283.f_440[0 /*63*/]), 1, 1))
	{
		return;
	}
	if (__LIB_6__::func_520(-1, 0, iParam0, &(Global_40.f_4283.f_440[1 /*63*/]), 1, 1))
	{
		if (Global_40.f_4283.f_440[1 /*63*/] == 0)
		{
			Global_40.f_4283.f_440[1 /*63*/] = __LIB_6__::func_15(&(Global_40.f_4283.f_440[0 /*63*/]));
		}
		return;
	}
	__LIB_6__::func_260(&(Global_40.f_4283.f_440));
	__LIB_6__::func_520(-1, 0, iParam0, &(Global_40.f_4283.f_440[1 /*63*/]), 1, 1);
}

void func_593(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	if (__LIB_1__::func_533(8))
	{
		if (!uParam1->f_1029)
		{
			__LIB_6__::func_438(uParam1);
			uParam1->f_1029 = 1;
		}
		return;
	}
	else if (uParam1->f_1029)
	{
		uParam1->f_1029 = 0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		__LIB_6__::func_526(iParam0, iVar1, uParam1[iVar1 /*257*/], &iVar0);
		iVar1++;
	}
}

void func_594(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	if (iParam0 == 11)
	{
		return;
	}
	iVar0 = __LIB_0__::func_560(iParam3, iParam0);
	vVar1 = { __LIB_4__::func_846(iVar0) };
	vVar4 = { __LIB_4__::func_847(iVar0) };
	if (__LIB_0__::func_86(vVar1))
	{
		return;
	}
	if (!__LIB_4__::func_922(19, 16384))
	{
		if (!__LIB_0__::func_29(iParam1))
		{
			return;
		}
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam2))
	{
		return;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	__LIB_2__::func_772(iParam0);
	Global_1914319.f_3[iParam0 /*446*/].f_22 = -1;
	Global_1914319.f_3[iParam0 /*446*/].f_11 = { vVar1 };
	if (__LIB_0__::func_86(vVar4))
	{
		Global_1914319.f_3[iParam0 /*446*/].f_11 = { vVar1 };
	}
	else
	{
		Global_1914319.f_15936[iVar0 /*6*/].f_2 = { vVar4 };
	}
	Global_1914319.f_3[iParam0 /*446*/].f_10 = iVar0;
	Global_1914319.f_3[iParam0 /*446*/].f_25 = iParam2;
	Global_1914319.f_3[iParam0 /*446*/].f_26 = iParam4;
	Global_1914319.f_3[iParam0 /*446*/].f_28 = iParam5;
	Global_1914319.f_3[iParam0 /*446*/].f_29 = iParam9;
	Global_1914319.f_3[iParam0 /*446*/].f_9 = iParam3;
	Global_1914319.f_3[iParam0 /*446*/].f_409 = iParam8;
	if (__LIB_2__::func_779(iVar0) || __LIB_2__::func_780(iVar0, iParam0))
	{
		switch (iVar0)
		{
			case 29:
				iVar7 = joaat("SHOP_RHO_GUNSMITH");
				break;
			case 61:
				iVar7 = joaat("SHOP_STR_GENERAL_STORE");
				break;
			case 73:
				iVar7 = joaat("SHOP_VAL_DOCTOR");
				break;
			case 43:
				iVar7 = joaat("SHOP_SDN_GUNSMITH");
				break;
			case 41:
				iVar7 = joaat("SHOP_SDN_FENCE");
				break;
		}
		Global_1914319.f_3[iParam0 /*446*/].f_20 = __LIB_1__::func_293(5, Global_1914319.f_3[iParam0 /*446*/].f_10, 2, iVar7);
	}
	Global_1393529.f_114[iParam0 /*3*/] = { 0f, 0f, 0f };
	Global_1393529.f_220[iParam0] = 0f;
	Global_1393529.f_569[iParam0] = 0;
	StringCopy(&(Global_1393529.f_288[iParam0 /*8*/]), "", 64);
	if (fParam7 <= 0f)
	{
		fParam7 = __LIB_2__::func_781(iParam0);
	}
	Global_1914319.f_3[iParam0 /*446*/].f_19 = fParam7;
	Global_1914319.f_3[iParam0 /*446*/].f_8 = iParam6;
	if (!__LIB_6__::func_133(iParam0, iParam1))
	{
	}
	switch (iParam0)
	{
		case 1:
		case 2:
			__LIB_2__::func_820(iParam3);
			break;
		case 10:
			__LIB_2__::func_782(iParam3);
			break;
		case 18:
			__LIB_2__::func_783();
			break;
		case 9:
			__LIB_2__::func_784();
			break;
		case 22:
			__LIB_2__::func_785();
			break;
	}
	__LIB_2__::func_809(Global_1914319.f_3[iParam0 /*446*/].f_10);
	__LIB_1__::func_943(iParam0, 16);
	__LIB_2__::func_810(iParam0, 4);
	VOLUME::_0x748C5F51A18CB8F0(1);
}

void func_595(var uParam0)
{
	bool bVar0;
	if ((MISC::GET_FRAME_COUNT() % 30) != 0)
	{
		return;
	}
	bVar0 = false;
	if (((((Global_1357549.f_1672 == -774242862 || Global_1357549.f_1672 == joaat("MONEY_LOANSHARK_WINTON_DEBT")) || Global_1357549.f_1672 == joaat("MONEY_LOANSHARK_GWEN_DEBT")) || Global_1357549.f_1672 == joaat("MONEY_LOANSHARK_CATFISH_DEBT")) || Global_1357549.f_1672 == joaat("MONEY_LOANSHARK_LILLY_DEBT")) || Global_1357549.f_1672 == joaat("MONEY_LOANSHARK_HORSE_CHASE_DEBT"))
	{
		if (__LIB_1__::func_198(joaat("CSTAG_FLOW_DEBT_COLLECTED"), 1) == 0)
		{
			bVar0 = true;
			__LIB_4__::func_253(joaat("CSTAG_FLOW_DEBT_COLLECTED"), 1017034651, 1120952528, -1, 1, 1, 0);
		}
	}
	else
	{
		__LIB_1__::func_449(joaat("CSTAG_FLOW_DEBT_COLLECTED"), 1, 0);
	}
	if (bVar0)
	{
		if (__LIB_0__::func_139(uParam0->f_1))
		{
			__LIB_1__::func_484(uParam0->f_1, "MONEY_LOANSHARK_ALL_DEBTS", 1);
		}
	}
	if (Global_1357549.f_1672 == 0)
	{
		if (__LIB_6__::func_395(-774242862 /* GXTEntry: "Wróbel\'s Valuables" */, 0, 0) >= 1)
		{
			__LIB_5__::func_905(-774242862 /* GXTEntry: "Wróbel\'s Valuables" */, joaat("P_MONEYSTACK01X"));
			return;
		}
		if (__LIB_6__::func_395(joaat("MONEY_LOANSHARK_WINTON_DEBT"), 0, 0) >= 1)
		{
			__LIB_5__::func_905(joaat("MONEY_LOANSHARK_WINTON_DEBT"), joaat("P_MONEYSTACK01X"));
			return;
		}
		if (__LIB_6__::func_395(joaat("MONEY_LOANSHARK_GWEN_DEBT"), 0, 0) >= 1)
		{
			__LIB_5__::func_905(joaat("MONEY_LOANSHARK_GWEN_DEBT"), joaat("P_MONEYSTACK01X"));
			return;
		}
		if (__LIB_6__::func_395(joaat("MONEY_LOANSHARK_CATFISH_DEBT"), 0, 0) >= 1)
		{
			__LIB_5__::func_905(joaat("MONEY_LOANSHARK_CATFISH_DEBT"), joaat("P_MONEYSTACK01X"));
			return;
		}
		if (__LIB_6__::func_395(joaat("MONEY_LOANSHARK_LILLY_DEBT"), 0, 0) >= 1)
		{
			__LIB_5__::func_905(joaat("MONEY_LOANSHARK_LILLY_DEBT"), joaat("P_MONEYSTACK01X"));
			return;
		}
		if (__LIB_6__::func_395(joaat("MONEY_LOANSHARK_HORSE_CHASE_DEBT"), 0, 0) >= 1)
		{
			__LIB_5__::func_905(joaat("MONEY_LOANSHARK_HORSE_CHASE_DEBT"), joaat("P_MONEYSTACK01X"));
			return;
		}
	}
}

int func_596(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		return 0;
	}
	iVar1 = __LIB_0__::func_317();
	iVar0 = __LIB_6__::func_529(iVar1, iParam0, bParam1);
	if (!__LIB_0__::func_30(iVar0))
	{
		return 1;
	}
	return 1;
}

void func_597(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	if (iParam0 == -1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(*uParam1, 0);
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(*uParam1, 1);
	if (iParam0 == 0)
	{
		switch (__LIB_0__::func_317())
		{
			case 1:
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, 160827397 /* GXTEntry: "Horseshoe Overlook" */);
				break;
			case 2:
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, 1003809922 /* GXTEntry: "Clemens Point" */);
				break;
			case 3:
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, -518834432 /* GXTEntry: "Shady Belle" */);
				break;
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, 0);
	}
	if (Global_40.f_4283.f_440[iParam0 /*63*/] > 0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_2, 1);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_2.f_1, MISC::_CREATE_VAR_STRING(2, "CASH_STRING", Global_40.f_4283.f_440[iParam0 /*63*/]));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_2, 0);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		__LIB_6__::func_477(iParam0, iVar0, &(uParam1->f_4[iVar0 /*4*/]));
		iVar0++;
	}
	switch (iParam0)
	{
		case 0:
			if (Global_40.f_4283.f_440[1 /*63*/].f_62 == 0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_53, 1);
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_53, 0);
			}
			break;
		case 1:
			if (Global_40.f_4283.f_440[1 /*63*/].f_62 > 0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_53, 1);
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_53, 0);
			}
			break;
	}
	iVar1 = __LIB_6__::func_15(&(Global_40.f_4283.f_440[iParam0 /*63*/]));
	sVar2 = "CASH_STRING";
	if (iVar1 < 0)
	{
		sVar2 = "CASH_STRING_NEG";
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_53.f_1, MISC::_CREATE_VAR_STRING(2, sVar2, iVar1));
}

int func_598(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	if (Global_1946804.f_2535.f_1 >= 5)
	{
		return 0;
	}
	if (!__LIB_6__::func_378(iParam0))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = __LIB_6__::func_112(iParam0);
	return __LIB_6__::func_478(iParam1, iVar0, bParam2, 1);
}

int func_599(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	if (!__LIB_6__::func_113(iParam1))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = __LIB_6__::func_112(iParam1);
	return __LIB_6__::func_479(iParam0, iVar0, bParam2, bParam2);
}

void func_600(int iParam0)
{
	var uVar0;
	var uVar1;
	__LIB_5__::func_885(iParam0, &uVar0, &uVar1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1357549.f_1886.f_2, uVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1357549.f_1886.f_2.f_1, uVar1);
}

void func_601(int iParam0)
{
	var uVar0;
	var uVar1;
	__LIB_5__::func_885(iParam0, &uVar0, &uVar1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1357549.f_1886.f_4, uVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1357549.f_1886.f_4.f_1, uVar1);
}

int func_602(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return 1;
	}
	if (!__LIB_0__::func_20(iParam0))
	{
		return 1;
	}
	if (__LIB_1__::func_680(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (Global_1897950.f_1 < iVar0 || Global_1897950.f_1 > iVar1)
		{
			Global_1897950.f_1 = iVar0;
		}
		while (true)
		{
			if (!__LIB_0__::func_117(Global_1897950.f_1, 16))
			{
				__LIB_1__::func_949(Global_1897950.f_1, 0);
			}
			Global_1897950.f_1++;
			iVar2++;
			if (Global_1897950.f_1 > iVar1)
			{
				Global_1897950.f_1 = -1;
				return 1;
			}
			if (iVar2 >= 20 && !bParam1)
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_603(int iParam0)
{
	struct<8> Var0;
	int iVar8;
	int iVar9;
	__LIB_6__::func_98(iParam0);
	iVar9 = 0;
	while (iVar9 <= 2)
	{
		if (__LIB_5__::func_992(iParam0, iVar9))
		{
			__LIB_6__::func_99(iParam0);
			Var0 = { __LIB_6__::func_504(iParam0, iVar9) };
			iVar8 = __LIB_6__::func_100(iParam0, iVar9);
			__LIB_5__::func_993(iVar8, 1);
			if (__LIB_0__::func_592() == iVar9)
			{
				if (!PATHFIND::_0x5AC0944C156E5F44(&Var0))
				{
					PATHFIND::_0x7C334FF4D9215912(&Var0);
				}
				if (!STREAMING::_IS_IMAP_ACTIVE(iVar8))
				{
					STREAMING::_REQUEST_IMAP(iVar8);
				}
			}
			else
			{
				if (PATHFIND::_0x5AC0944C156E5F44(&Var0))
				{
					PATHFIND::_0x527B97C203BB8606(&Var0);
				}
				if (STREAMING::_IS_IMAP_ACTIVE(iVar8))
				{
					STREAMING::_REMOVE_IMAP(iVar8);
				}
			}
		}
		iVar9++;
	}
}

bool func_604(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	iVar0 = 1;
	if (!__LIB_1__::func_680(iParam0, &uVar2, &iVar3, 0, 1))
	{
		return true;
	}
	bVar4 = iParam0 == 22;
	iVar1 = uVar2;
	while (iVar1 <= iVar3)
	{
		if (!__LIB_0__::func_29(iVar1))
		{
		}
		else if (__LIB_0__::func_117(iVar1, 32) && iParam0 != 22)
		{
		}
		else
		{
			iVar5 = __LIB_1__::func_334(iVar1);
			if (!__LIB_0__::func_272(iVar5, 0))
			{
				__LIB_1__::func_940(iVar1, 0);
				PERSCHAR::_0x6759BEE6762E140B(__LIB_0__::func_120(iVar1));
				if (__LIB_2__::func_987(iVar1, 0, 0, 0, 0, 1))
				{
					return false;
				}
				iVar0 = 0;
			}
			else
			{
				if (bVar4 && __LIB_1__::func_356(iVar5))
				{
					if (!DECORATOR::DECOR_EXIST_ON(iVar5, "CaravanLivestock"))
					{
						DECORATOR::DECOR_SET_BOOL(iVar5, "CaravanLivestock", true);
					}
				}
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar5, joaat("REL_PLAYER_ALLY"));
				__LIB_0__::func_121(iVar1, 128);
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_605(struct<8> Param0, int iParam8, var uParam9, var uParam10)
{
	if (__LIB_6__::func_572(&(uParam9->f_1[iParam8 /*237*/][0 /*118*/]), uParam10))
	{
		switch (uParam10->f_4)
		{
			case 0:
				uParam10->f_1 = Param0.f_1;
				break;
			case 1:
				uParam10->f_1 = Param0.f_2;
				break;
			case 2:
				uParam10->f_1 = Param0.f_3;
				break;
		}
		uParam10->f_2 = iParam8;
		uParam10->f_3 = 0;
		*uParam10 = 1;
		return true;
	}
	if (__LIB_6__::func_572(&(uParam9->f_1[iParam8 /*237*/][1 /*118*/]), uParam10))
	{
		switch (uParam10->f_4)
		{
			case 0:
				uParam10->f_1 = Param0.f_5;
				break;
			case 1:
				uParam10->f_1 = Param0.f_6;
				break;
			case 2:
				uParam10->f_1 = Param0.f_7;
				break;
		}
		uParam10->f_2 = iParam8;
		uParam10->f_3 = 1;
		*uParam10 = 1;
		return true;
	}
	*uParam10 = 0;
	return false;
}

int func_606()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bVar0 = __LIB_6__::func_389();
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (__LIB_6__::func_159(iVar1))
		{
			Local_18.f_3402[iVar1] = PERSCHAR::_0xA00DF706C60173D1(__LIB_0__::func_59(iVar1));
			STREAMING::REQUEST_MODEL(Local_18.f_3402[iVar1], false);
			iVar2++;
			if (bVar0 && __LIB_0__::func_273(iVar1, 32768, 1))
			{
				Local_18.f_3430[iVar1] = PERSCHAR::_0xA00DF706C60173D1(__LIB_0__::func_725(iVar1, 1));
				Local_18.f_3430[iVar1] = Local_18.f_3430[iVar1];
				STREAMING::REQUEST_MODEL(Local_18.f_3430[iVar1], false);
				iVar2++;
				if (STREAMING::HAS_MODEL_LOADED(Local_18.f_3430[iVar1]) && Local_18.f_3374[iVar1] == 0)
				{
					iVar3 = __LIB_0__::func_859(iVar1);
					if (PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iVar3, Local_18.f_3430[iVar1]))
					{
						Local_18.f_3374[iVar1] = PED::_REQUEST_METAPED_OUTFIT(Local_18.f_3430[iVar1], iVar3);
					}
				}
			}
		}
		if ((iVar2 - Local_18.f_44) > 5)
		{
			Local_18.f_44 = iVar2;
			return 0;
		}
		iVar1++;
	}
	if (Global_40.f_4283.f_567)
	{
		Local_18.f_3478 = __LIB_6__::func_131();
		if (Local_18.f_3478 != 0)
		{
			STREAMING::REQUEST_MODEL(Local_18.f_3478, false);
			iVar2++;
		}
	}
	if (__LIB_6__::func_160(Local_18.f_45))
	{
		iVar4 = 0;
		while (iVar4 < 3)
		{
			Global_1357549.f_1675[iVar4 /*5*/] = __LIB_5__::func_870(iVar4);
			if (Global_1357549.f_1675[iVar4 /*5*/] == 0)
			{
			}
			else
			{
				Local_18.f_3458[iVar4] = PERSCHAR::_0xA00DF706C60173D1(Global_1357549.f_1675[iVar4 /*5*/]);
				if (Local_18.f_3458[iVar4] != 0)
				{
					STREAMING::REQUEST_MODEL(Local_18.f_3458[iVar4], false);
					iVar2++;
					if ((iVar2 - Local_18.f_44) > 5)
					{
						Local_18.f_44 = iVar2;
						return 0;
					}
				}
			}
			iVar4++;
		}
	}
	if (__LIB_1__::func_680(Local_18.f_46, &iVar6, &iVar7, 0, 1))
	{
		iVar5 = iVar6;
		while (iVar5 <= iVar7)
		{
			if (!__LIB_0__::func_29(iVar5))
			{
			}
			else if (__LIB_0__::func_117(iVar5, 32) && Local_18.f_46 != 22)
			{
			}
			else if (iVar8 < 15)
			{
				Local_18.f_3462[iVar8] = PERSCHAR::_0xA00DF706C60173D1(__LIB_0__::func_118(iVar5));
				if (Local_18.f_3462[iVar8] != 0)
				{
					STREAMING::REQUEST_MODEL(Local_18.f_3462[iVar8], false);
					iVar2++;
					iVar8++;
					if ((iVar2 - Local_18.f_44) > 5)
					{
						Local_18.f_44 = iVar2;
						return 0;
					}
				}
			}
			iVar5++;
		}
	}
	return 1;
}

void func_607(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	if (iParam1 == -1)
	{
		return;
	}
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (iParam0 != 0)
	{
		if (!__LIB_0__::func_293(43))
		{
			return;
		}
	}
	iVar0 = __LIB_0__::func_821(iParam0);
	if (__LIB_5__::func_919(iVar0) || __LIB_5__::func_920(iVar0))
	{
		return;
	}
	iVar1 = __LIB_0__::func_819(iParam0);
	if (iVar1 >= __LIB_5__::func_921(iVar0))
	{
		return;
	}
	if (__LIB_6__::func_299(iParam0, iParam1))
	{
		return;
	}
	if (__LIB_6__::func_300(iParam0, iParam1))
	{
		return;
	}
	fVar2 = __LIB_5__::func_922(iParam0, iParam1);
	fVar3 = __LIB_5__::func_923(iParam1);
	fVar3 = (fVar3 * (1f + Global_40.f_11095.f_68));
	switch (iParam1)
	{
		case 1:
			iVar4 = __LIB_0__::func_398(iParam0);
			if (__LIB_6__::func_84(iVar4, 0))
			{
				fVar3 = (fVar3 * 0.5f);
			}
			Global_1900383.f_317.f_2[iParam0 /*5*/].f_2 = (Global_1900383.f_317.f_2[iParam0 /*5*/].f_2 + fVar3);
			break;
		case 2:
		case 3:
			if (__LIB_5__::func_778())
			{
				fVar3 = (fVar3 * 2f);
			}
			Global_1900383.f_317.f_2[iParam0 /*5*/].f_2 = (Global_1900383.f_317.f_2[iParam0 /*5*/].f_2 + fVar3);
			break;
		case 4:
			Global_1900383.f_317.f_2[iParam0 /*5*/].f_4 = (Global_1900383.f_317.f_2[iParam0 /*5*/].f_4 + fVar3);
			break;
		case 5:
			if (iVar1 < 1)
			{
				fVar5 = __LIB_0__::func_833(iParam0);
				fVar6 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
				fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1 + 1));
				fVar3 = (fVar7 - (fVar6 + fVar5));
			}
			else
			{
				fVar3 = 0f;
			}
			break;
		default:
			__LIB_6__::func_134(iParam1, fVar3);
			break;
	}
	__LIB_6__::func_576(iParam0, fVar3);
	__LIB_5__::func_924(iParam0, iParam1, (fVar2 + fVar3));
}

int func_608(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
		__LIB_6__::func_463(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		__LIB_0__::func_215(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (__LIB_0__::func_216(iVar0))
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

int func_609()
{
	if (__LIB_0__::func_317() == 2 || __LIB_0__::func_317() == 3)
	{
		if (__LIB_5__::func_862(13, 0) > 1)
		{
			if (!STREAMING::HAS_MODEL_LOADED(joaat("PIROGUE")))
			{
				return 0;
			}
		}
	}
	if (__LIB_0__::func_0())
	{
		if (!__LIB_0__::func_296(0, 0, 1))
		{
			__LIB_0__::func_568(__LIB_1__::func_546(__LIB_0__::func_317()), __LIB_1__::func_496(), 0);
			__LIB_1__::func_206(__LIB_1__::func_546(__LIB_0__::func_317()), __LIB_1__::func_496(), 0);
		}
		return 1;
	}
	return 0;
}

void func_610(var uParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	if (__LIB_0__::func_592() == 1)
	{
		__LIB_6__::func_91(uParam0);
	}
	uParam0->f_859 = 1;
	if (Global_1357549.f_1721 == 0)
	{
		uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549.f_1724, "camp_detail");
		uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar1, __LIB_4__::func_73(0));
		Global_1357549.f_1726[0 /*3*/] = uVar0;
		Global_1357549.f_1726[0 /*3*/].f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, "label", 1820034266);
		Global_1357549.f_1726[0 /*3*/].f_2 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "value_string", 0);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1357549.f_1725, 0, "camp_item", uVar0);
		uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549.f_1724, "camp_detail");
		uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar1, __LIB_4__::func_73(1));
		Global_1357549.f_1726[1 /*3*/] = uVar0;
		Global_1357549.f_1726[1 /*3*/].f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, "label", 156970377);
		Global_1357549.f_1726[1 /*3*/].f_2 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "value_string", 0);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1357549.f_1725, 1, "camp_item", uVar0);
		uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549.f_1724, "camp_detail");
		uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar1, __LIB_4__::func_73(2));
		Global_1357549.f_1726[2 /*3*/] = uVar0;
		Global_1357549.f_1726[2 /*3*/].f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, "label", -609488505);
		Global_1357549.f_1726[2 /*3*/].f_2 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "value_string", 0);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1357549.f_1725, 2, "camp_item", uVar0);
		uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549.f_1724, "camp_detail");
		uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar1, __LIB_4__::func_73(3));
		Global_1357549.f_1726[3 /*3*/] = uVar0;
		Global_1357549.f_1726[3 /*3*/].f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, "label", 1967383862);
		Global_1357549.f_1726[3 /*3*/].f_2 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "value_string", 0);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1357549.f_1725, 3, "camp_item", uVar0);
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < 31)
		{
			if (Global_40.f_4283.f_335[iVar4] == 1)
			{
				__LIB_5__::func_933(&uVar2, iVar4);
				uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549.f_1724, "camp_detail");
				uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar1, __LIB_4__::func_73(iVar4 + 4));
				Global_1357549.f_1726[iVar4 + 4 /*3*/] = uVar0;
				Global_1357549.f_1726[iVar4 + 4 /*3*/].f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, "label", MISC::GET_HASH_KEY(&uVar2));
				Global_1357549.f_1726[iVar4 + 4 /*3*/].f_2 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "value", 0);
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1357549.f_1725, iVar4 + 4, "camp_item", uVar0);
			}
			iVar4++;
		}
		Global_1357549.f_1721 = 1;
	}
	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 < 31)
	{
		__LIB_5__::func_934(iVar7, &iVar5);
		__LIB_5__::func_935(iVar7, &iVar6);
		if (__LIB_5__::func_936(uParam0->f_1425, iVar5))
		{
			__LIB_0__::func_516(&(uParam0->f_1425), iVar5);
		}
		if (__LIB_0__::func_51(&(Global_1360165[iVar6 /*1157*/].f_12), 512))
		{
			__LIB_0__::func_289(iVar6, 512, 0);
		}
		if (__LIB_0__::func_139(uParam0->f_885[uParam0->f_1426]))
		{
			__LIB_1__::func_748(&(uParam0->f_885[uParam0->f_1426]), 1, 1);
		}
		iVar7++;
	}
	STREAMING::REQUEST_ANIM_DICT("script_common@handover@generic@player_handover@money");
	__LIB_5__::func_937(128);
	__LIB_0__::func_928(&(uParam0->f_1325), Global_35, "ARTHUR", 0);
	HUD::_TEXT_DATABASE_REQUEST("CPGENAU");
	__LIB_5__::func_845();
	if (__LIB_6__::func_218(__LIB_0__::func_317()))
	{
		__LIB_6__::func_589(&(uParam0->f_35.f_2));
		__LIB_5__::func_938(&(uParam0->f_35));
	}
	iVar8 = __LIB_5__::func_939(__LIB_0__::func_317());
	if (__LIB_6__::func_272())
	{
		if (!__LIB_6__::func_55(iVar8, 64))
		{
			__LIB_6__::func_59(iVar8, 64);
			__LIB_6__::func_59(iVar8, 262144);
		}
	}
	else if (__LIB_6__::func_55(iVar8, 64))
	{
		__LIB_6__::func_60(iVar8, 64);
	}
}

void func_611(int iParam0, int iParam1)
{
	int iVar0;
	struct<8> Var1;
	int iVar9;
	int iVar10;
	int iVar11;
	if (__LIB_5__::func_869(iParam0))
	{
		*iParam1 = __LIB_6__::func_90(iParam0);
		if (__LIB_0__::func_30(*iParam1))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(*iParam1))
			{
				STREAMING::_REMOVE_IMAP(*iParam1);
			}
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (__LIB_5__::func_992(iParam0, iVar0))
			{
				Var1 = { __LIB_6__::func_504(iParam0, iVar0) };
				*iParam1 = __LIB_6__::func_100(iParam0, iVar0);
				__LIB_5__::func_993(*iParam1, 0);
				if (PATHFIND::_0x5AC0944C156E5F44(&Var1))
				{
					PATHFIND::_0x527B97C203BB8606(&Var1);
				}
				if (__LIB_0__::func_30(*iParam1))
				{
					if (STREAMING::_IS_IMAP_ACTIVE(*iParam1))
					{
						STREAMING::_REMOVE_IMAP(*iParam1);
					}
				}
			}
			iVar0++;
		}
		iVar11 = 0;
		while (iVar11 < 27)
		{
			iVar9 = __LIB_6__::func_529(iParam0, iVar11, 0);
			iVar10 = __LIB_6__::func_529(iParam0, iVar11, 1);
			if (__LIB_0__::func_30(iVar9))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(iVar9))
				{
					STREAMING::_REMOVE_IMAP(iVar9);
				}
			}
			if (__LIB_0__::func_30(iVar10))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(iVar10))
				{
					STREAMING::_REMOVE_IMAP(iVar10);
				}
			}
			iVar11++;
		}
	}
}

void func_612(int* iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
			break;
		default:
			return;
	}
	iVar0 = __LIB_6__::func_258(iParam0, iParam2);
	if (__LIB_5__::func_826() < iVar0)
	{
		iVar1 = (iVar0 - __LIB_5__::func_826());
		if (__LIB_0__::func_492(1) >= iVar1)
		{
			__LIB_1__::func_432(iVar1, 0, 0, 1, 1);
			__LIB_6__::func_592(iVar1);
		}
	}
	if (__LIB_5__::func_826() >= iVar0)
	{
		*bParam3 = 1;
		__LIB_1__::func_221(iParam0->f_10, 0, 1);
		__LIB_6__::func_4(__LIB_6__::func_20(iParam1));
		__LIB_6__::func_4(3);
		__LIB_6__::func_519(iParam1, 1, iVar0);
		iVar2 = __LIB_3__::func_38(__LIB_0__::func_317());
		TELEMETRY::_TELEMETRY_CAMP_SUPPLIES(iVar2, iParam1, __LIB_5__::func_862(iParam2, 0), iVar0, 1);
	}
	else
	{
		__LIB_0__::func_45("CAMP_UPG_BROKE", 9000, 0, 0, 0, 1);
	}
}

void func_613(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_5__::func_837(iParam0);
	if (iVar0 != -1)
	{
		if (!__LIB_2__::func_804(19, 4))
		{
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1914319.f_3[19 /*446*/].f_26))
			{
				VOLUME::_DELETE_VOLUME(Global_1914319.f_3[19 /*446*/].f_26);
			}
			switch (iParam0)
			{
				case 1:
					iVar1 = VOLUME::_CREATE_VOLUME_BOX(-142.2027f, -23.89317f, 95.0883f, 0f, 0f, -19.50431f, 2f, 1.8f, 5f);
					break;
				case 2:
					iVar1 = VOLUME::_CREATE_VOLUME_BOX(674.9565f, -1251.201f, 43.0152f, 0f, 0f, -101.9433f, 2f, 1.8f, 5f);
					break;
				case 3:
					iVar1 = VOLUME::_CREATE_VOLUME_BOX(1874.646f, -1859.152f, 41.8f, 0f, 0f, -99.40799f, 2f, 1.8f, 5f);
					break;
				case 6:
					iVar1 = VOLUME::_CREATE_VOLUME_BOX(2365.858f, 1346.675f, 105.1305f, 0f, 0f, -22.49011f, 2f, 1.8f, 5f);
					break;
			}
			__LIB_5__::func_792(19, 16384);
			__LIB_5__::func_792(19, 32768);
			__LIB_6__::func_594(19, -1, Global_1357549.f_3[4], iParam1, iVar1, 0, 12, -1082130432 /* Float: -1f */, 0, 0);
		}
		if (__LIB_6__::func_125(iVar0))
		{
			__LIB_6__::func_350(iVar0, 19, 0, 1);
		}
	}
}

void func_614(var uParam0, var uParam1, var uParam2)
{
	__LIB_6__::func_253(uParam0[0 /*118*/]);
	__LIB_6__::func_253(uParam0[1 /*118*/]);
	__LIB_6__::func_597(*uParam1, uParam0[0 /*118*/]);
	__LIB_6__::func_426(uParam1->f_1, &((uParam0[0 /*118*/])->f_55), uParam2);
	__LIB_6__::func_427(uParam1->f_2, &((uParam0[0 /*118*/])->f_102), uParam2);
	__LIB_6__::func_427(uParam1->f_3, &((uParam0[0 /*118*/])->f_110), uParam2);
	__LIB_6__::func_597(uParam1->f_4, uParam0[1 /*118*/]);
	__LIB_6__::func_426(uParam1->f_5, &((uParam0[1 /*118*/])->f_55), uParam2);
	__LIB_6__::func_427(uParam1->f_6, &((uParam0[1 /*118*/])->f_102), uParam2);
	__LIB_6__::func_427(uParam1->f_7, &((uParam0[1 /*118*/])->f_110), uParam2);
}

int func_615(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	return __LIB_6__::func_598(iParam0, iParam1, bParam2, bParam3);
}

void func_616(int iParam0, int iParam1, bool bParam2)
{
	__LIB_6__::func_599(iParam0, iParam1, bParam2, 1);
}

void func_617()
{
	Global_40.f_4283.f_322 = 2;
}

void func_618(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
	}
}

Vector3 func_619(int iParam0)
{
	switch (iParam0)
	{
		case 32768:
			return 2118.586f, -1836.796f, 40.5503f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_620(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1553.069f, 254.0002f, 113.7989f;
		case 4:
			return 1457.149f, -1578.779f, 72.1939f;
		case 8:
			return 1783.498f, 462.5527f, 112.0378f;
		case 16:
			return 1982.539f, 1192.392f, 170.408f;
		case 32:
			return -155.8262f, 1491.054f, 111.7707f;
		case 64:
			return -2054.879f, -1912.227f, 111.2719f;
		case 128:
			return -1021.743f, 1692.386f, 243.3139f;
		case 256:
			return 32.3207f, 2092.403f, 276.5115f;
		case 512:
			return 1888.854f, 301.6055f, 76.1451f;
		case 1024:
			return -2370.078f, 472.8013f, 131.228f;
		case 2048:
			return 1666.794f, 2180.789f, 316.349f;
		case 4096:
			return 1134.444f, -979.7666f, 68.4026f;
		case 8192:
			return -1728.583f, -83.1805f, 180.4762f;
		case 16384:
			return -1961.996f, 2159.51f, 327.3775f;
		case 32768:
			return 2089.364f, -1816.956f, 42.7298f;
		case 65536:
			return 1389.751f, -2083.81f, 56.0727f;
		case 131072:
			return -690.1562f, 1043.87f, 134.0042f;
		case 262144:
			return 1184.4f, -101.4f, 97.3f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_621(var uParam0, int iParam1)
{
	return __LIB_0__::func_27(uParam0->f_19, iParam1);
}

float func_622(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_3__::func_577(iParam0);
	if (iVar0 == 0)
	{
		return 0f;
	}
	return Global_40.f_11959.f_20[iVar0];
}

bool func_623(int iParam0)
{
	if (!__LIB_1__::func_917(iParam0))
	{
		return false;
	}
	return __LIB_0__::func_27(Global_1914319.f_18594[iParam0], 2);
}

bool func_624(int iParam0, float fParam1)
{
	int iVar0;
	iVar0 = __LIB_3__::func_577(iParam0);
	if (iVar0 != 0)
	{
		*fParam1 = __LIB_5__::func_669(iParam0);
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_625(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_2__::func_797(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	iVar1 = (iVar0 * 10 + iParam1);
	return __LIB_0__::func_27(Global_23118.f_1651[iVar1], iParam2);
}

void func_626(int iParam0, bool bParam1)
{
	int iVar0[18];
	int iVar19[18];
	int iVar38[6];
	int iVar45[6];
	int iVar52;
	int iVar53;
	bool bVar54;
	bool bVar55;
	iVar0[0] = 2137149309;
	iVar19[0] = -134624703;
	iVar0[1] = -147867326; /* GXTEntry: "Cougar Pelt Covered Chest" */
	iVar19[1] = __LIB_1__::func_976();
	iVar0[2] = -1262979941; /* GXTEntry: "Ox Hide Rug" */
	iVar19[2] = __LIB_1__::func_976();
	iVar0[3] = -2119627968; /* GXTEntry: "Boar Skin Table Cover" */
	iVar19[3] = __LIB_1__::func_976();
	iVar0[4] = -837651311; /* GXTEntry: "Big Horn Ram Skull" */
	iVar19[4] = __LIB_1__::func_976();
	iVar0[5] = -2089261255; /* GXTEntry: "Alligator Skull" */
	iVar19[5] = __LIB_1__::func_976();
	iVar0[6] = -1145367359; /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[6] = -1535722316;
	iVar0[7] = -1145367359; /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[7] = 1547994518;
	iVar0[8] = -1608451354; /* GXTEntry: "Boar Skin Rug" */
	iVar19[8] = __LIB_1__::func_976();
	iVar0[9] = -1329287819; /* GXTEntry: "Pronghorn Skull" */
	iVar19[9] = -910918420;
	iVar0[10] = -848232571; /* GXTEntry: "Elk Antlers" */
	iVar19[10] = 495480888;
	iVar0[11] = -804860583; /* GXTEntry: "Scout Fire Ground Cover" */
	iVar19[11] = 2004706822;
	iVar0[12] = 1510372288; /* GXTEntry: "Moose Antlers" */
	iVar19[12] = 884576413;
	iVar0[13] = -7810518; /* GXTEntry: "Hanging Bones" */
	iVar19[13] = 778703691;
	iVar0[14] = -224845272; /* GXTEntry: "Campfire Log Seat Cover" */
	iVar19[14] = -421730990;
	iVar0[15] = 858182906; /* GXTEntry: "Campfire Seat Cover" */
	iVar19[15] = 514406510;
	iVar0[16] = 765991018; /* GXTEntry: "Wolf Skull" */
	iVar19[16] = -327708229;
	iVar0[17] = 708084994; /* GXTEntry: "Snake Skin Banjo Head" */
	iVar19[17] = 1048845581;
	if (iParam0 == 3 && ((__LIB_6__::func_462(iVar0[Global_1357549.f_575], 1, 0) || __LIB_6__::func_114(iVar0[Global_1357549.f_575])) || bParam1))
	{
		if (__LIB_0__::func_30(iVar19[Global_1357549.f_575]))
		{
			if (!STREAMING::_IS_IMAP_ACTIVE(iVar19[Global_1357549.f_575]))
			{
				__LIB_5__::func_993(iVar19[Global_1357549.f_575], 1);
				__LIB_6__::func_28(iVar19[Global_1357549.f_575]);
			}
		}
	}
	else if (__LIB_0__::func_30(iVar19[Global_1357549.f_575]))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(iVar19[Global_1357549.f_575]))
		{
			__LIB_5__::func_993(iVar19[Global_1357549.f_575], 0);
			STREAMING::_REMOVE_IMAP(iVar19[Global_1357549.f_575]);
		}
	}
	iVar38[0] = -1608451354; /* GXTEntry: "Boar Skin Rug" */
	iVar45[0] = 11;
	iVar38[1] = -147867326; /* GXTEntry: "Cougar Pelt Covered Chest" */
	iVar45[1] = 12;
	iVar38[2] = -1262979941; /* GXTEntry: "Ox Hide Rug" */
	iVar45[2] = 13;
	iVar38[3] = -837651311; /* GXTEntry: "Big Horn Ram Skull" */
	iVar45[3] = 14;
	iVar38[4] = -2119627968; /* GXTEntry: "Boar Skin Table Cover" */
	iVar45[4] = 16;
	iVar38[5] = -2089261255; /* GXTEntry: "Alligator Skull" */
	iVar45[5] = 15;
	bVar55 = false;
	iVar52 = 0;
	while (iVar52 < 6)
	{
		if (iParam0 == 3)
		{
			iVar53 = __LIB_6__::func_327(iVar38[iVar52], 3);
			bVar54 = __LIB_6__::func_114(iVar38[iVar52]);
			bVar55 = (iVar53 > 0 || bVar54);
		}
		if (bVar55 || bParam1)
		{
			if (__LIB_5__::func_783(iVar45[iVar52]) == 0)
			{
				__LIB_4__::func_495(iVar45[iVar52]);
			}
		}
		else if (__LIB_5__::func_783(iVar45[iVar52]))
		{
			__LIB_4__::func_524(iVar45[iVar52]);
		}
		iVar52++;
	}
}

void func_627(bool bParam0)
{
	if ((MISC::GET_FRAME_COUNT() % 60) == 0 || bParam0)
	{
		Local_18.f_3054 = __LIB_6__::func_278(&(Local_18.f_2024[0 /*257*/]));
		Local_18.f_3055 = __LIB_6__::func_278(&(Local_18.f_2024[2 /*257*/]));
		Local_18.f_3056 = __LIB_6__::func_278(&(Local_18.f_2024[1 /*257*/]));
		Global_1357549.f_1899 = __LIB_6__::func_584();
		Global_1357549.f_1900 = __LIB_5__::func_838(Local_18.f_3056, Global_1357549.f_1899);
	}
}

void func_628(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if (Global_40.f_4942[iParam0 /*60*/].f_3 == -1341683964)
			{
				__LIB_6__::func_608(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE"), 0, 0, 2, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				__LIB_6__::func_608(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE_DUALWIELD"), 0, 0, 3, 1, 1, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 1, 0, 0);
			}
			break;
	}
}

bool func_629(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
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
	if (!__LIB_6__::func_582(iParam3, iParam4))
	{
		return false;
	}
	if (!__LIB_1__::func_744())
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

int func_630()
{
	int iVar0;
	if (!__LIB_1__::func_516())
	{
		return 0;
	}
	if (!__LIB_1__::func_610(&iVar0))
	{
		return 0;
	}
	if (!__LIB_6__::func_586(iVar0))
	{
		return 0;
	}
	return __LIB_3__::func_630(iVar0, 0);
}

void func_631(int* iParam0, int iParam1)
{
	if (iParam0->f_20 != iParam1)
	{
		if (__LIB_0__::func_272(Global_35, 0))
		{
			switch (iParam1)
			{
				case 6:
				case 9:
				case 10:
				case 11:
				case 12:
				case 13:
				case 14:
				case 15:
					if (__LIB_4__::func_385(&Global_35) && __LIB_5__::func_784(joaat("MPC_HIDE_ACTION_HAT")) == -1)
					{
						__LIB_6__::func_615(joaat("MPC_HIDE_ACTION_HAT"), Global_35, 0, 1);
					}
					break;
				default:
					__LIB_6__::func_616(Global_35, joaat("MPC_HIDE_ACTION_HAT"), 1);
					break;
			}
		}
	}
	iParam0->f_20 = iParam1;
}

void func_632(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	switch (*uParam1)
	{
		case 0:
			if (__LIB_6__::func_157(iParam0))
			{
				__LIB_6__::func_492(iParam0, uParam1);
				__LIB_5__::func_851(uParam1, 2);
			}
			break;
		case 2:
			if (__LIB_6__::func_157(iParam0))
			{
				if (!MISC::IS_BIT_SET(uParam1->f_1, 2))
				{
					if (MISC::IS_BIT_SET(uParam1->f_1, 5))
					{
						__LIB_6__::func_356(uParam1);
					}
					if (!MISC::IS_BIT_SET(uParam1->f_1, 3))
					{
						__LIB_6__::func_128(uParam1);
					}
					if ((!ENTITY::IS_ENTITY_DEAD(Global_35) && VOLUME::_DOES_VOLUME_EXIST(uParam1->f_5)) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam1->f_5, true, 0))
					{
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE"), false);
					}
					if (!PED::IS_PED_ON_MOUNT(Global_35))
					{
						if (MISC::IS_BIT_SET(uParam1->f_1, 4))
						{
							__LIB_5__::func_793(uParam1->f_8, 0);
							MISC::CLEAR_BIT(&(uParam1->f_1), 4);
						}
					}
					else if (!MISC::IS_BIT_SET(uParam1->f_1, 4))
					{
						__LIB_5__::func_793(uParam1->f_8, 1);
						MISC::SET_BIT(&(uParam1->f_1), 4);
					}
				}
				else
				{
					if (MISC::IS_BIT_SET(uParam1->f_1, 3))
					{
						__LIB_6__::func_355(uParam1);
					}
					if (!MISC::IS_BIT_SET(uParam1->f_1, 5))
					{
						__LIB_6__::func_527(uParam1);
					}
					if ((ENTITY::IS_ENTITY_DEAD(Global_35) || !VOLUME::_DOES_VOLUME_EXIST(uParam1->f_5)) || !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam1->f_5, true, 0))
					{
						MISC::CLEAR_BIT(&(uParam1->f_1), 2);
					}
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), false);
					HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(1842627646, "BLIP_CAMP_HITCH", 1, 0, 0, 0);
				}
			}
			else
			{
				if (MISC::IS_BIT_SET(uParam1->f_1, 5))
				{
					__LIB_6__::func_356(uParam1);
				}
				if (MISC::IS_BIT_SET(uParam1->f_1, 3))
				{
					__LIB_6__::func_355(uParam1);
				}
				if (MISC::IS_BIT_SET(uParam1->f_1, 2))
				{
					MISC::CLEAR_BIT(&(uParam1->f_1), 2);
				}
			}
			if (MISC::IS_BIT_SET(uParam1->f_1, 3))
			{
				if (!MISC::IS_BIT_SET(uParam1->f_1, 4))
				{
					if (__LIB_0__::func_567(uParam1->f_8, 1))
					{
						if (__LIB_6__::func_528(&iVar0))
						{
							__LIB_1__::func_515(uParam1->f_8, 1);
							MISC::SET_BIT(&(uParam1->f_1), 2);
						}
						else
						{
							switch (iVar0)
							{
								case -1:
									break;
								case 0:
									if (!__LIB_0__::func_474(611))
									{
										__LIB_0__::func_45("TF_CAMP_HITCH_MANAGE_HORSES_NO_HORSES", 10000, 0, 0, 0, 1);
										__LIB_6__::func_63(611);
									}
									break;
								case 1:
									if (!__LIB_0__::func_474(612))
									{
										__LIB_0__::func_45("TF_CAMP_HITCH_MANAGE_HORSES_HORSE_DEAD", 10000, 0, 0, 0, 1);
										__LIB_6__::func_63(612);
									}
									break;
								case 2:
									if (!__LIB_2__::func_453())
									{
										if (iParam0 == 7 || iParam0 == 8)
										{
											__LIB_0__::func_45("TF_CAMP_HITCH_MANAGE_HORSES_UNAVAILABLE_RANCH", 10000, 0, 0, 0, 1);
										}
										else
										{
											__LIB_0__::func_45("TF_CAMP_HITCH_MANAGE_HORSES_UNAVAILABLE_CAMP", 10000, 0, 0, 0, 1);
										}
									}
									break;
							}
						}
					}
				}
			}
			if (MISC::IS_BIT_SET(uParam1->f_1, 5))
			{
				if (__LIB_1__::func_732(uParam1->f_10, 1))
				{
					MISC::SET_BIT(&(uParam1->f_1), 7);
					MISC::CLEAR_BIT(&(uParam1->f_1), 2);
					__LIB_5__::func_849(0, uParam1);
					__LIB_6__::func_356(uParam1);
					__LIB_5__::func_851(uParam1, 3);
					return;
				}
				if (__LIB_1__::func_732(uParam1->f_11, 1))
				{
					uParam1->f_7 = 0;
					MISC::CLEAR_BIT(&(uParam1->f_1), 2);
					MISC::CLEAR_BIT(&(uParam1->f_1), 7);
					__LIB_5__::func_849(0, uParam1);
					__LIB_6__::func_356(uParam1);
					__LIB_5__::func_851(uParam1, 3);
					return;
				}
				iVar1 = 0;
				while (iVar1 < 3)
				{
					if (__LIB_1__::func_732(uParam1->f_12[iVar1], 1))
					{
						uParam1->f_7 = __LIB_5__::func_772(iVar1);
						MISC::CLEAR_BIT(&(uParam1->f_1), 2);
						MISC::CLEAR_BIT(&(uParam1->f_1), 7);
						__LIB_5__::func_849(0, uParam1);
						__LIB_6__::func_356(uParam1);
						__LIB_5__::func_851(uParam1, 3);
						return;
					}
					iVar1++;
				}
				if (__LIB_1__::func_732(uParam1->f_9, 1))
				{
					__LIB_6__::func_356(uParam1);
					MISC::CLEAR_BIT(&(uParam1->f_1), 2);
				}
			}
			break;
		case 3:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(800);
				}
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(Global_35, __LIB_6__::func_406(iParam0), true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, __LIB_6__::func_407(iParam0));
				if (MISC::IS_BIT_SET(uParam1->f_1, 7))
				{
					__LIB_5__::func_851(uParam1, 6);
				}
				else
				{
					__LIB_5__::func_851(uParam1, 4);
				}
			}
			break;
		case 4:
			if (!MISC::IS_BIT_SET(uParam1->f_1, 1))
			{
				if (uParam1->f_7 != 0)
				{
					__LIB_6__::func_494(uParam1->f_7);
				}
				__LIB_3__::func_618(__LIB_6__::func_484(iParam0, -1), 0.5f, 1, 1, 0, 0, 0);
				uParam1->f_7 = -1;
				MISC::SET_BIT(&(uParam1->f_1), 1);
				return;
			}
			if (__LIB_6__::func_546(iParam0, uParam1))
			{
				__LIB_6__::func_129(0);
				__LIB_6__::func_130();
				if (__LIB_0__::func_819(0) == 0)
				{
					__LIB_6__::func_607(0, 5);
				}
				ENTITY::SET_ENTITY_COORDS(Global_35, __LIB_6__::func_406(iParam0), true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, __LIB_6__::func_407(iParam0));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				uParam1->f_2 = MISC::GET_GAME_TIMER() + 500;
				__LIB_5__::func_851(uParam1, 5);
			}
			break;
		case 6:
			if (!MISC::IS_BIT_SET(uParam1->f_1, 8))
			{
				if (__LIB_0__::func_988())
				{
					__LIB_0__::func_989();
				}
				__LIB_0__::func_148(2);
				__LIB_0__::func_150(__LIB_6__::func_408(iParam0));
				PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
				MISC::CLEAR_AREA(__LIB_6__::func_408(iParam0), 0.4f, 2442122);
				MISC::SET_BIT(&(uParam1->f_1), 8);
			}
			if (__LIB_6__::func_511(__LIB_6__::func_408(iParam0), 0f, 1))
			{
				PHYSICS::ACTIVATE_PHYSICS(Global_1900383.f_393);
				ENTITY::SET_ENTITY_COORDS(Global_35, __LIB_6__::func_406(iParam0), true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, __LIB_6__::func_407(iParam0));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				MISC::CLEAR_BIT(&(uParam1->f_1), 8);
				MISC::CLEAR_BIT(&(uParam1->f_1), 7);
				uParam1->f_2 = MISC::GET_GAME_TIMER() + 500;
				__LIB_5__::func_851(uParam1, 5);
			}
			break;
		case 5:
			if (MISC::GET_GAME_TIMER() > uParam1->f_2)
			{
				__LIB_5__::func_849(1, uParam1);
				__LIB_5__::func_851(uParam1, 7);
			}
			break;
		case 7:
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
			else
			{
				uParam1->f_3 = 0;
				MISC::CLEAR_BIT(&(uParam1->f_1), 2);
				__LIB_5__::func_851(uParam1, 2);
			}
			break;
	}
}

void func_633(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (PERSCHAR::_0x800DF3FC913355F3((uParam0[iVar0 /*4*/])->f_1))
		{
			PERSCHAR::_0xFCC6DB8DBE709BC8((uParam0[iVar0 /*4*/])->f_1);
		}
		iVar0++;
	}
}

Vector3 func_634(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			switch (__LIB_6__::func_551())
			{
				case 1:
					return -132.3208f, -32.346f, 96.2655f;
				case 2:
				case 3:
					return -132.5762f, -30.9136f, 96.1698f;
				case 4:
					return -132.6248f, -30.9491f, 96.653f;
				default:
					break;
			}
			break;
		case 2:
			return 652.4932f, -1253.537f, 44.3558f;
		case 3:
			return 1889.93f, -1866.695f, 47.658f;
		case 6:
			return 2360.978f, 1377.182f, 107.1004f;
	}
	return 0f, 0f, 0f;
}

Vector3 func_635(var uParam0)
{
	switch (__LIB_0__::func_317())
	{
		case 8:
			return __LIB_6__::func_554(uParam0);
		case 1:
			return __LIB_6__::func_249(uParam0);
		case 3:
			return __LIB_6__::func_250(uParam0);
		case 6:
			return __LIB_6__::func_251(uParam0);
		case 2:
			return __LIB_6__::func_555(uParam0);
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_636(var uParam0)
{
	__LIB_1__::func_225(3);
}

void func_637(var uParam0, var uParam1)
{
	int iVar0;
	__LIB_6__::func_208(uParam1);
	uParam0->f_1642 = 0;
	uParam0->f_1606 = { 0f, 0f, 0f };
	uParam0->f_1609 = 0;
	switch (uParam0->f_1590.f_1)
	{
		case 1:
		case 9:
			__LIB_1__::func_683(&iVar0, 1798);
			__LIB_6__::func_558(uParam1, iVar0, 1);
			uParam0->f_1590 = joaat("WORLD_PLAYER_CHORES_BUCKET_PUT_DOWN_FULL");
			if (MAP::DOES_BLIP_EXIST(uParam0->f_1590.f_4))
			{
				MAP::REMOVE_BLIP(&(uParam0->f_1590.f_4));
			}
			break;
		case 14:
			__LIB_1__::func_683(&iVar0, 16512);
			__LIB_6__::func_558(uParam1, iVar0, 1);
			uParam0->f_1590 = joaat("WORLD_PLAYER_CHORES_FEEDBAG_PUTDOWN");
			if (MAP::DOES_BLIP_EXIST(uParam0->f_1590.f_4))
			{
				MAP::REMOVE_BLIP(&(uParam0->f_1590.f_4));
			}
			break;
	}
	uParam0->f_1581 = 2;
}

void func_638(int iParam0, int iParam1)
{
	if (__LIB_4__::func_635(1048576))
	{
		return;
	}
	Global_1357549.f_1833 = { __LIB_6__::func_563(iParam0) };
	Global_1357549.f_1841 = { __LIB_6__::func_564(iParam0) };
	Global_1357549.f_1844 = iParam1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1357549.f_1833)) || MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1357549.f_1841)))
	{
		return;
	}
	__LIB_0__::func_326(1048576);
}

void func_639(var uParam0, var uParam1)
{
	__LIB_1__::func_422(__LIB_6__::func_565(&(uParam0->f_1582)), 7500, 0, 1, 0, 0, -1, -1, 0);
	uParam0->f_1582 = joaat("WORLD_PLAYER_CHORES_SACK_PUT_DOWN_1");
	uParam0->f_1582.f_2 = 4;
	uParam0->f_1581 = 6;
}

void func_640(var uParam0, var uParam1)
{
	__LIB_1__::func_422(__LIB_6__::func_565(&(uParam0->f_1582)), 7500, 0, 1, 0, 0, -1, -1, 0);
	uParam0->f_1582 = joaat("WORLD_PLAYER_CHORES_BALE_PUT_DOWN_1");
	uParam0->f_1582.f_2 = 4;
	uParam0->f_1581 = 6;
}

void func_641(var uParam0, var uParam1)
{
	bool bVar0;
	bVar0 = PED::IS_PED_USING_ANY_SCENARIO(Global_35);
	if (!__LIB_0__::func_139(uParam0->f_1610) && !bVar0)
	{
		uParam0->f_1610 = __LIB_2__::func_512("EXIT_CHORE", joaat("INPUT_CONTEXT_B"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
		__LIB_0__::func_629(__LIB_0__::func_17(uParam0->f_1610), 0);
	}
	if (bVar0 && __LIB_1__::func_264(uParam0->f_1610, 1))
	{
		__LIB_0__::func_629(__LIB_0__::func_17(uParam0->f_1610), 0);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
	}
	else if (!bVar0 && !__LIB_1__::func_264(uParam0->f_1610, 1))
	{
		__LIB_0__::func_629(__LIB_0__::func_17(uParam0->f_1610), 1);
	}
	else if (!__LIB_1__::func_264(uParam0->f_1610, 1))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
	}
	switch (uParam0->f_1582)
	{
		case joaat("WORLD_PLAYER_CHORES_BUCKET_PICKUP_FULL"):
			if (__LIB_0__::func_317() == 1)
			{
				if (TASK::_0x0C3CB2E600C8977D(Global_35, 1))
				{
					__LIB_1__::func_422(__LIB_6__::func_565(&(uParam0->f_1582)), 7500, 0, 1, 0, 0, -1, -1, 0);
					uParam0->f_1582.f_2 = 4;
					uParam0->f_1581 = 8;
				}
			}
			else if (TASK::_0x0C3CB2E600C8977D(Global_35, 1))
			{
				__LIB_1__::func_422("FINISH_CAMP_CHORE_WATER_PART_1", 7500, 0, 1, 0, 0, -1, -1, 0);
				uParam0->f_1582 = joaat("WORLD_PLAYER_CHORES_BUCKET_FILL");
				if (MAP::DOES_BLIP_EXIST(uParam0->f_1582.f_4))
				{
					MAP::REMOVE_BLIP(&(uParam0->f_1582.f_4));
				}
				uParam0->f_1582.f_4 = MAP::_BLIP_ADD_FOR_COORD(408396114, __LIB_6__::func_248());
				MAP::SET_BLIP_SPRITE(uParam0->f_1590.f_4, joaat("BLIP_OBJECTIVE"), false);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_1590.f_4, "BLIP_CAMP_CHORE");
			}
			break;
		case joaat("WORLD_PLAYER_CHORES_BUCKET_PICKUP_EMPTY"):
			if (TASK::_0x0C3CB2E600C8977D(Global_35, 1))
			{
				__LIB_1__::func_422(__LIB_6__::func_565(&(uParam0->f_1582)), 7500, 0, 1, 0, 0, -1, -1, 0);
				uParam0->f_1582 = joaat("WORLD_PLAYER_CHORES_BUCKET_FILL");
				if (MAP::DOES_BLIP_EXIST(uParam0->f_1582.f_4))
				{
					MAP::REMOVE_BLIP(&(uParam0->f_1582.f_4));
				}
				uParam0->f_1582.f_4 = MAP::_BLIP_ADD_FOR_COORD(408396114, __LIB_6__::func_248());
				MAP::SET_BLIP_SPRITE(uParam0->f_1590.f_4, joaat("BLIP_OBJECTIVE"), false);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_1590.f_4, "BLIP_CAMP_CHORE");
			}
			break;
		case joaat("WORLD_PLAYER_CHORES_BUCKET_FILL"):
			if (TASK::_0x0C3CB2E600C8977D(Global_35, 1) && PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_CHORES_BUCKET_FILL")))
			{
				__LIB_1__::func_422("FINISH_CAMP_CHORE_WATER_PART_2", 7500, 0, 1, 0, 0, -1, -1, 0);
				uParam0->f_1582.f_2 = 4;
				uParam0->f_1581 = 8;
				if (MAP::DOES_BLIP_EXIST(uParam0->f_1582.f_4))
				{
					MAP::REMOVE_BLIP(&(uParam0->f_1582.f_4));
				}
			}
			break;
	}
}

void func_642(var uParam0, var uParam1)
{
	if (TASK::_0x0C3CB2E600C8977D(Global_35, 1))
	{
		__LIB_1__::func_422(__LIB_6__::func_565(&(uParam0->f_1582)), 7500, 0, 1, 0, 0, -1, -1, 0);
		uParam0->f_1582.f_2 = 4;
		uParam0->f_1581 = 8;
	}
}

void func_643(var uParam0, var uParam1)
{
	__LIB_1__::func_422(__LIB_6__::func_565(&(uParam0->f_1582)), 7500, 0, 1, 0, 0, -1, -1, 0);
	uParam0->f_1582 = joaat("WORLD_PLAYER_CHORES_VEHICLE_MILKJUG_LOAD");
	uParam0->f_1582.f_2 = 4;
	uParam0->f_1581 = 6;
}

void func_644(var uParam0, var uParam1)
{
	__LIB_1__::func_422(__LIB_6__::func_565(&(uParam0->f_1582)), 7500, 0, 1, 0, 0, -1, -1, 0);
	uParam0->f_1582 = joaat("WORLD_PLAYER_CHORES_VEHICLE_BOX_LOAD");
	uParam0->f_1582.f_2 = 4;
	uParam0->f_1581 = 6;
}

void func_645(var uParam0)
{
	if ((__LIB_0__::func_272(Global_35, 0) && __LIB_6__::func_254(*uParam0)) && PED::_0x7C8AA850617651D9(Global_35, *uParam0))
	{
		__LIB_6__::func_566(*uParam0);
	}
	if ((!__LIB_0__::func_272(Global_35, 0) || !__LIB_6__::func_254(*uParam0)) || !PED::_0x7C8AA850617651D9(Global_35, *uParam0))
	{
		__LIB_3__::func_32(uParam0);
	}
}

void func_646(int iParam0)
{
	struct<8> Var0;
	int iVar8;
	int iVar9;
	__LIB_6__::func_98(iParam0);
	iVar9 = 0;
	while (iVar9 <= 2)
	{
		if (__LIB_5__::func_992(iParam0, iVar9))
		{
			__LIB_6__::func_99(iParam0);
			Var0 = { __LIB_6__::func_569(iParam0, iVar9) };
			iVar8 = __LIB_6__::func_100(iParam0, iVar9);
			__LIB_5__::func_993(iVar8, 1);
			if (__LIB_0__::func_592() == iVar9)
			{
				if (!PATHFIND::_0x5AC0944C156E5F44(&Var0))
				{
					PATHFIND::_0x7C334FF4D9215912(&Var0);
				}
				if (!STREAMING::_IS_IMAP_ACTIVE(iVar8))
				{
					STREAMING::_REQUEST_IMAP(iVar8);
				}
			}
			else
			{
				if (PATHFIND::_0x5AC0944C156E5F44(&Var0))
				{
					PATHFIND::_0x527B97C203BB8606(&Var0);
				}
				if (STREAMING::_IS_IMAP_ACTIVE(iVar8))
				{
					STREAMING::_REMOVE_IMAP(iVar8);
				}
			}
		}
		iVar9++;
	}
}

void func_647(int iParam0, var uParam1)
{
	int iVar0;
	iVar0 = __LIB_0__::func_271(iParam0);
	if ((__LIB_0__::func_272(iVar0, 0) && __LIB_6__::func_328(iParam0, *uParam1)) && PED::_0x7C8AA850617651D9(iVar0, *uParam1))
	{
		__LIB_6__::func_570(iParam0, *uParam1);
	}
	if ((!__LIB_0__::func_272(iVar0, 0) || !__LIB_6__::func_328(iParam0, *uParam1)) || !PED::_0x7C8AA850617651D9(iVar0, *uParam1))
	{
		__LIB_3__::func_32(uParam1);
	}
}

void func_648(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	iVar0 = joaat("P_KETTLE03X_NOBOIL");
	iVar1 = joaat("P_KETTLE03X");
	if (Global_1357549.f_1625 > 1 && Global_1357549.f_1625 != 6)
	{
		if ((!TASK::_DOES_SCENARIO_POINT_EXIST(*uParam0) || !TASK::_DOES_SCENARIO_POINT_EXIST(*uParam1)) || !TASK::_DOES_SCENARIO_POINT_EXIST(*uParam2))
		{
			Global_1357549.f_1625 = 1;
		}
	}
	switch (Global_1357549.f_1625)
	{
		case 0:
			if (__LIB_0__::func_12() == __LIB_0__::func_61())
			{
				Global_1357549.f_1625 = 1;
			}
			break;
		case 1:
			if (__LIB_6__::func_574(uParam0, uParam1, uParam2))
			{
				if (!VOLUME::_DOES_VOLUME_EXIST(*uParam3) && TASK::_DOES_SCENARIO_POINT_EXIST(*uParam1))
				{
					*uParam3 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(TASK::_GET_SCENARIO_POINT_COORDS(*uParam1, true), 0f, 0f, 0f, 1f, 1f, 1f, "StewBlocking");
				}
				Global_1357549.f_1625 = 2;
			}
			else
			{
				Global_1357549.f_1625 = 6;
			}
			break;
		case 2:
			if (MISC::GET_GAME_TIMER() > Global_1357549.f_1631 + 10000)
			{
				Global_1357549.f_1625 = 3;
			}
			break;
		case 3:
			if (__LIB_5__::func_61(0, 9))
			{
				Global_1357549.f_1629 = 0;
				Global_1357549.f_1630 = 0;
				Global_1357549.f_1627 = 0;
				return;
			}
			bVar3 = OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(*uParam0, true), 2f, iVar0, false);
			bVar4 = OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(*uParam2, true), 2f, iVar0, false);
			bVar5 = OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(*uParam1, true), 2f, iVar1, false);
			if (__LIB_5__::func_61(9, 12) && !__LIB_1__::func_198(joaat("CSTAG_FLOW_FIRST_VISIT_MUD1_POST"), 1))
			{
				Global_1357549.f_1629 = 1;
				Global_1357549.f_1630 = 0;
			}
			else
			{
				Global_1357549.f_1630 = 1;
				Global_1357549.f_1629 = 0;
			}
			if (Global_1357549.f_1629)
			{
				if (!bVar3 && !bVar4)
				{
					bVar2 = true;
				}
				if (bVar5)
				{
					bVar2 = true;
				}
				if (!bVar2)
				{
					Global_1357549.f_1627 = 1;
				}
			}
			Global_1357549.f_1628 = 0;
			if (Global_1357549.f_1630)
			{
				if (!bVar5)
				{
					bVar2 = true;
				}
				if (bVar3 || bVar4)
				{
					bVar2 = true;
				}
				if (!bVar2)
				{
					Global_1357549.f_1628 = 1;
					if (__LIB_1__::func_262(551))
					{
						__LIB_1__::func_263(551);
						__LIB_2__::func_355(551);
					}
					if (__LIB_1__::func_262(552))
					{
						__LIB_1__::func_263(552);
						__LIB_2__::func_355(552);
					}
				}
			}
			if ((bVar2 && CLOCK::GET_CLOCK_HOURS() != 12) && CLOCK::GET_CLOCK_HOURS() != 13)
			{
				Global_1357549.f_1625 = 5;
			}
			else
			{
				Global_1357549.f_1625 = 2;
				Global_1357549.f_1631 = MISC::GET_GAME_TIMER();
			}
			break;
		case 5:
			if ((TASK::_GET_PED_USING_SCENARIO_POINT(*uParam0) == 0 && TASK::_GET_PED_USING_SCENARIO_POINT(*uParam1) == 0) && TASK::_GET_PED_USING_SCENARIO_POINT(*uParam2) == 0)
			{
				TASK::_0x4161648394262FDF(__LIB_6__::func_197(__LIB_0__::func_317()), 2f);
				TASK::_0x4161648394262FDF(__LIB_6__::func_198(__LIB_0__::func_317()), 3f);
				Global_1357549.f_1631 = MISC::GET_GAME_TIMER();
				Global_1357549.f_1625 = 2;
			}
			break;
		case 6:
			break;
	}
}

void func_649(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || iParam0 == 1)
	{
		__LIB_6__::func_450(iParam0, 0);
	}
	if (!bParam1 || iParam0 == 2)
	{
		__LIB_6__::func_451(iParam0, 0);
	}
	if (!bParam1 || iParam0 == 3)
	{
		__LIB_6__::func_626(iParam0, 0);
	}
	if (!bParam1 || iParam0 == 6)
	{
		__LIB_6__::func_452(iParam0, 0);
	}
	if (bParam2)
	{
		Global_1357549.f_575++;
		if (Global_1357549.f_575 >= 18)
		{
			Global_1357549.f_575 = 0;
		}
	}
}

void func_650(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, var uParam6)
{
	__LIB_6__::func_400(__LIB_0__::func_23(), iParam0, uParam1, uParam2, uParam3, iParam4, uParam5, uParam6);
}

void func_651(var uParam0, var uParam1)
{
	vector3 vVar0;
	int iVar3;
	if (uParam1->f_2 == 2)
	{
		vVar0 = { __LIB_6__::func_590(uParam1) };
		switch (uParam0->f_1641)
		{
			case 0:
				iVar3 = __LIB_0__::func_167(1);
				break;
			case 1:
				iVar3 = __LIB_0__::func_167(7);
				break;
			case 2:
				iVar3 = __LIB_0__::func_167(9);
				break;
		}
		if (PED::_IS_PED_USING_SCENARIO_HASH(iVar3, joaat("PROP_HUMAN_WOOD_CHOP")))
		{
			uParam0->f_1617 = 1;
			uParam1->f_2 = 6;
			if (MAP::DOES_BLIP_EXIST(uParam1->f_4))
			{
				MAP::REMOVE_BLIP(&(uParam1->f_4));
			}
		}
		else if (PED::_IS_PED_USING_SCENARIO_HASH(iVar3, joaat("PROP_HUMAN_SEAT_CHAIR_SHARPEN_AXE")))
		{
			uParam0->f_1617 = 1;
			if (MAP::DOES_BLIP_EXIST(uParam1->f_4))
			{
				MAP::REMOVE_BLIP(&(uParam1->f_4));
			}
		}
		else if (PED::_IS_PED_USING_SCENARIO_HASH(iVar3, joaat("PROP_HUMAN_SEAT_BENCH_HARMONICA_UPBEAT")) && __LIB_0__::func_62(ENTITY::GET_ENTITY_COORDS(iVar3, true, false), vVar0) < 1f)
		{
			if (MAP::DOES_BLIP_EXIST(uParam1->f_4))
			{
				MAP::REMOVE_BLIP(&(uParam1->f_4));
			}
		}
		else if (!uParam0->f_1617)
		{
			uParam0->f_1617 = 0;
			if (!MAP::DOES_BLIP_EXIST(uParam1->f_4))
			{
				uParam1->f_4 = MAP::_BLIP_ADD_FOR_COORD(-674883803, vVar0);
				MAP::SET_BLIP_SPRITE(uParam1->f_4, joaat("BLIP_AMBIENT_CHORE"), false);
			}
		}
		uParam0->f_1641++;
		if (uParam0->f_1641 > 2)
		{
			uParam0->f_1641 = 0;
		}
		if (__LIB_6__::func_245(52) && __LIB_6__::func_246(52) < 7)
		{
			if (MAP::DOES_BLIP_EXIST(uParam1->f_4))
			{
				MAP::REMOVE_BLIP(&(uParam1->f_4));
			}
		}
		else if (!uParam0->f_1617)
		{
			if (!MAP::DOES_BLIP_EXIST(uParam1->f_4))
			{
				uParam1->f_4 = MAP::_BLIP_ADD_FOR_COORD(-674883803, vVar0);
				MAP::SET_BLIP_SPRITE(uParam1->f_4, joaat("BLIP_AMBIENT_CHORE"), false);
			}
			if (!TASK::IS_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES_WOOD_CHOP"))
			{
				TASK::SET_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES_WOOD_CHOP", true);
			}
		}
	}
}

void func_652(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = uParam0->f_1642;
	if ((uParam1[iVar0 /*8*/])->f_1 == 7)
	{
		uParam0->f_1645 = iVar0;
	}
	vVar1 = { __LIB_6__::func_590(uParam1[iVar0 /*8*/]) };
	if (__LIB_6__::func_222(uParam1[iVar0 /*8*/], 1) && (uParam1[iVar0 /*8*/])->f_2 != 6)
	{
		if (!__LIB_0__::func_86(vVar1))
		{
			if (__LIB_0__::func_27(uParam0->f_1598, 32))
			{
				if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1649))
				{
					VOLUME::_0x39816F6F94F385AD(uParam0->f_1649, vVar1, 0f, 0f, 0f, 2f, 2f, 3f);
				}
				__LIB_6__::func_315(uParam0, uParam1, vVar1, iVar0, 408396114, joaat("BLIP_OBJECTIVE"), 0);
			}
			else
			{
				__LIB_6__::func_315(uParam0, uParam1, vVar1, iVar0, __LIB_6__::func_223((uParam1[iVar0 /*8*/])->f_1), __LIB_6__::func_224((uParam1[iVar0 /*8*/])->f_1), 1);
			}
			if ((uParam1[iVar0 /*8*/])->f_1 == 7)
			{
				TASK::SET_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES_WOOD_CHOP", true);
				if (TASK::IS_SCENARIO_OCCUPIED(vVar1, 0.25f, true))
				{
					(uParam1[iVar0 /*8*/])->f_2 = 6;
					if (MAP::DOES_BLIP_EXIST((uParam1[iVar0 /*8*/])->f_4))
					{
						MAP::REMOVE_BLIP(&((uParam1[iVar0 /*8*/])->f_4));
					}
				}
			}
			else if ((*uParam1)[iVar0 /*8*/] != 0)
			{
				iVar4 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vVar1, (*uParam1)[iVar0 /*8*/], __LIB_6__::func_225(uParam1[iVar0 /*8*/]), 0, true);
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar4))
				{
					if (!TASK::_IS_SCENARIO_POINT_ACTIVE(iVar4))
					{
						TASK::_SET_SCENARIO_POINT_ACTIVE(iVar4, true);
					}
				}
			}
		}
		else if (MAP::DOES_BLIP_EXIST((uParam1[iVar0 /*8*/])->f_4))
		{
			MAP::REMOVE_BLIP(&((uParam1[iVar0 /*8*/])->f_4));
		}
	}
	else
	{
		if (__LIB_0__::func_27(uParam0->f_1598, 32))
		{
			if (uParam0->f_1590.f_1 == 14)
			{
				if ((uParam1[iVar0 /*8*/])->f_1 == 8)
				{
					uParam0->f_1599++;
				}
			}
			else if (uParam0->f_1590.f_1 == 9)
			{
				if ((uParam1[iVar0 /*8*/])->f_1 == 2)
				{
					uParam0->f_1599++;
				}
			}
		}
		if (MAP::DOES_BLIP_EXIST((uParam1[iVar0 /*8*/])->f_4))
		{
			MAP::REMOVE_BLIP(&((uParam1[iVar0 /*8*/])->f_4));
		}
		if ((uParam1[iVar0 /*8*/])->f_2 != 0)
		{
			if ((uParam1[iVar0 /*8*/])->f_1 == 7)
			{
				if (!uParam0->f_1617)
				{
					TASK::SET_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES_WOOD_CHOP", false);
					if ((uParam1[iVar0 /*8*/])->f_2 == 6 && !CAM::IS_SPHERE_VISIBLE(vVar1, 1.5f))
					{
						__LIB_1__::func_206(vVar1, 0.5f, 2);
					}
				}
				else
				{
					(uParam1[iVar0 /*8*/])->f_2 = 6;
				}
			}
			else if ((*uParam1)[iVar0 /*8*/] != 0)
			{
				if (!__LIB_0__::func_86(vVar1))
				{
					if ((uParam1[iVar0 /*8*/])->f_2 == 6)
					{
						iVar5 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vVar1, (*uParam1)[iVar0 /*8*/], __LIB_6__::func_225(uParam1[iVar0 /*8*/]), 0, true);
						if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar5))
						{
							TASK::_SET_SCENARIO_POINT_ACTIVE(iVar5, false);
							TASK::_0x4161648394262FDF(vVar1, 0.05f);
						}
					}
					else if ((uParam1[iVar0 /*8*/])->f_2 == -1)
					{
						iVar6 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vVar1, (*uParam1)[iVar0 /*8*/], __LIB_6__::func_225(uParam1[iVar0 /*8*/]), 0, true);
						if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar6))
						{
							TASK::_SET_SCENARIO_POINT_ACTIVE(iVar6, false);
						}
					}
				}
			}
		}
	}
	uParam0->f_1642++;
	if (uParam0->f_1642 >= *uParam1)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1649))
		{
			POPULATION::_0xB56D41A694E42E86(uParam0->f_1649, 10208, 0, 0, -1, -1, 0);
		}
		uParam0->f_1642 = 0;
		uParam0->f_1609 = 0;
		uParam0->f_1606 = { 0f, 0f, 0f };
		uParam0->f_1581 = 4;
	}
}

void func_653(int iParam0, int iParam1)
{
	int iVar0;
	struct<8> Var1;
	int iVar9;
	int iVar10;
	int iVar11;
	if (__LIB_5__::func_869(iParam0))
	{
		*iParam1 = __LIB_6__::func_90(iParam0);
		if (__LIB_0__::func_30(*iParam1))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(*iParam1))
			{
				STREAMING::_REMOVE_IMAP(*iParam1);
			}
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (__LIB_5__::func_992(iParam0, iVar0))
			{
				Var1 = { __LIB_6__::func_569(iParam0, iVar0) };
				*iParam1 = __LIB_6__::func_100(iParam0, iVar0);
				__LIB_5__::func_993(*iParam1, 0);
				if (PATHFIND::_0x5AC0944C156E5F44(&Var1))
				{
					PATHFIND::_0x527B97C203BB8606(&Var1);
				}
				if (__LIB_0__::func_30(*iParam1))
				{
					if (STREAMING::_IS_IMAP_ACTIVE(*iParam1))
					{
						STREAMING::_REMOVE_IMAP(*iParam1);
					}
				}
			}
			iVar0++;
		}
		iVar11 = 0;
		while (iVar11 < 27)
		{
			iVar9 = __LIB_6__::func_529(iParam0, iVar11, 0);
			iVar10 = __LIB_6__::func_529(iParam0, iVar11, 1);
			if (__LIB_0__::func_30(iVar9))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(iVar9))
				{
					STREAMING::_REMOVE_IMAP(iVar9);
				}
			}
			if (__LIB_0__::func_30(iVar10))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(iVar10))
				{
					STREAMING::_REMOVE_IMAP(iVar10);
				}
			}
			iVar11++;
		}
	}
}

void func_654(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = 0;
	TASK::SET_SCENARIO_GROUP_ENABLED("BCH_BASE_CHORES", true);
	__LIB_6__::func_313(&iVar0, 331);
	if (__LIB_1__::func_533(268435456))
	{
		vVar1 = -1;
		vVar1.f_1 = -1;
		vVar1.f_2 = -1;
		__LIB_1__::func_65(21, &vVar1, 1);
		__LIB_1__::func_806(&vVar1, 1, 1);
	}
	if (__LIB_0__::func_27(uParam0->f_1598, 256))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("BCH_GATHER_MILK_CHORES", true);
		__LIB_6__::func_313(&iVar0, 16);
	}
	if (__LIB_0__::func_27(uParam0->f_1598, 512))
	{
		__LIB_6__::func_313(&iVar0, 16384);
	}
	if (__LIB_0__::func_27(uParam0->f_1598, 64))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("BCH_GATHER_EGGS_CHORES", true);
		__LIB_6__::func_313(&iVar0, 32);
	}
	if (iVar0 != 0)
	{
		__LIB_6__::func_558(uParam1, iVar0, 1);
	}
	uParam0->f_1581 = 2;
}

void func_655()
{
	var uVar0;
	if (__LIB_5__::func_825())
	{
		if (!__LIB_6__::func_56())
		{
			__LIB_6__::func_388(1);
			__LIB_0__::func_698(32);
		}
	}
	else if (__LIB_4__::func_635(32768))
	{
		if (__LIB_1__::func_750(&uVar0))
		{
			if (!__LIB_6__::func_56())
			{
				__LIB_6__::func_388(1);
			}
			__LIB_6__::func_630();
			__LIB_0__::func_326(32);
			__LIB_6__::func_388(0);
		}
		if (__LIB_6__::func_56())
		{
			__LIB_6__::func_388(0);
		}
		if ((__LIB_0__::func_317() == 7 && __LIB_0__::func_181()) && !__LIB_1__::func_185(67))
		{
			if (!__LIB_1__::func_18(-999503751))
			{
				__LIB_0__::func_908(-999503751);
			}
			if (!__LIB_1__::func_18(81053684))
			{
				__LIB_0__::func_908(81053684);
			}
			if (!__LIB_1__::func_18(-1719060085))
			{
				__LIB_0__::func_908(-1719060085);
			}
			if (!__LIB_1__::func_18(-2061583405))
			{
				__LIB_0__::func_908(-2061583405);
			}
		}
	}
	else
	{
		if (!__LIB_6__::func_56())
		{
			__LIB_6__::func_388(1);
			__LIB_0__::func_698(32);
		}
		if ((__LIB_0__::func_317() == 7 && __LIB_0__::func_181()) && !__LIB_1__::func_185(67))
		{
			if (__LIB_1__::func_18(-999503751))
			{
				__LIB_0__::func_907(-999503751);
			}
			if (__LIB_1__::func_18(81053684))
			{
				__LIB_0__::func_907(81053684);
			}
			if (__LIB_1__::func_18(-1719060085))
			{
				__LIB_0__::func_907(-1719060085);
			}
			if (__LIB_1__::func_18(-2061583405))
			{
				__LIB_0__::func_907(-2061583405);
			}
		}
	}
}

int func_656(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_1__::func_47(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = __LIB_1__::func_55(iVar0);
	if (iVar1 == -1)
	{
		return 0;
	}
	if (__LIB_1__::func_214(iParam0))
	{
		return 1;
	}
	__LIB_1__::func_229(iParam0);
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1392915.f_121[iVar0 /*20*/].f_7))
	{
		VOLUME::_DELETE_VOLUME(Global_1392915.f_121[iVar0 /*20*/].f_7);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1392915.f_121[iVar0 /*20*/].f_8))
	{
		VOLUME::_DELETE_VOLUME(Global_1392915.f_121[iVar0 /*20*/].f_8);
	}
	Global_1392915.f_121[iVar0 /*20*/].f_1 = 0;
	__LIB_6__::func_376(iVar0);
	iVar2 = __LIB_0__::func_80(Global_1392915[iVar0 /*12*/].f_4);
	if (iVar2 != -1)
	{
		if (iParam1 == 1)
		{
			__LIB_1__::func_722(Global_1392915[iVar0 /*12*/].f_4);
		}
		if (MAP::DOES_BLIP_EXIST(Global_1898346[iVar2 /*6*/]))
		{
			MAP::REMOVE_BLIP(&(Global_1898346[iVar2 /*6*/]));
		}
		__LIB_1__::func_109(iVar2, 0);
		return 1;
	}
	return 0;
}

void func_657(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	if (__LIB_5__::func_862(iParam2, 0) < __LIB_6__::func_17(iParam2))
	{
		iVar0 = __LIB_6__::func_257(iParam0, iParam2);
		if (__LIB_5__::func_826() < iVar0)
		{
			iVar1 = (iVar0 - __LIB_5__::func_826());
			if (__LIB_0__::func_492(1) >= iVar1)
			{
				__LIB_1__::func_432(iVar1, 0, 0, 1, 1);
				__LIB_6__::func_592(iVar1);
			}
		}
		if (__LIB_5__::func_826() >= iVar0)
		{
			*bParam4 = 1;
			if (iParam1 == 3)
			{
				if (__LIB_5__::func_862(10, 0) == 1)
				{
					__LIB_5__::func_775(64);
				}
			}
			__LIB_6__::func_519(iParam1, 0, iVar0);
			iVar2 = (__LIB_5__::func_862(iParam2, 0) + iParam3);
			if (iParam2 == 10)
			{
				if (iVar2 >= 3)
				{
					iVar3 = __LIB_5__::func_939(__LIB_0__::func_317());
					if (!__LIB_6__::func_55(iVar3, 64))
					{
						__LIB_6__::func_59(iVar3, 64);
						__LIB_6__::func_59(iVar3, 262144);
					}
				}
			}
			__LIB_5__::func_823(iParam2, iVar2);
			__LIB_6__::func_261();
			__LIB_0__::func_326(134217728);
			if (iParam1 == 5)
			{
				__LIB_6__::func_18(&(Global_1357549.f_1492));
			}
			if (iParam1 == 2)
			{
				if (iVar2 >= 3 && !__LIB_0__::func_214(joaat("WEAPON_THROWN_THROWING_KNIVES")))
				{
					__LIB_0__::func_915(joaat("WEAPON_THROWN_THROWING_KNIVES"));
				}
				if (iVar2 >= 4 && !__LIB_0__::func_214(joaat("WEAPON_THROWN_MOLOTOV")))
				{
					__LIB_0__::func_915(joaat("WEAPON_THROWN_MOLOTOV"));
				}
			}
			__LIB_1__::func_748(&(iParam0->f_7), 1, 1);
			__LIB_1__::func_748(&(iParam0->f_8), 1, 1);
			__LIB_1__::func_748(&(iParam0->f_35.f_1), 1, 1);
			__LIB_1__::func_748(&(iParam0->f_10), 1, 1);
			__LIB_1__::func_748(&(iParam0->f_9), 1, 1);
			__LIB_5__::func_963(&(iParam0->f_35), 0);
			__LIB_1__::func_283(&(iParam0->f_810), 0);
			sVar4 = __LIB_6__::func_19(iParam2, iVar2);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar4) == 0)
			{
				__LIB_0__::func_45(sVar4, 14500, 0, 0, 0, 1);
			}
			__LIB_6__::func_631(iParam0, 14);
			iVar5 = __LIB_3__::func_38(__LIB_0__::func_317());
			TELEMETRY::_TELEMETRY_CAMP_SUPPLIES(iVar5, iParam1, iVar2, iVar0, 0);
		}
		else
		{
			__LIB_0__::func_45("CAMP_UPG_BROKE", 9000, 0, 0, 0, 1);
		}
	}
}

void func_658(int* iParam0)
{
	if (MISC::IS_BIT_SET(Global_1357549.f_1893, 0))
	{
		if (iParam0->f_3)
		{
			__LIB_5__::func_780(&(iParam0->f_816));
		}
		MAP::DISPLAY_RADAR(true);
		Global_1357549.f_1894 = 0;
		ANIMSCENE::RESET_ANIM_SCENE(iParam0->f_18, 0);
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_18);
		__LIB_0__::func_698(8192);
		__LIB_0__::func_698(67108864);
		__LIB_6__::func_326();
		__LIB_6__::func_368(&(iParam0->f_35));
		__LIB_5__::func_990(&(iParam0->f_35));
		__LIB_5__::func_991();
		__LIB_5__::func_962(2);
		if (__LIB_5__::func_975(128))
		{
			__LIB_5__::func_976(128);
		}
		ENTITY::SET_ENTITY_COORDS(iParam0->f_864, __LIB_5__::func_958(), true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iParam0->f_864, __LIB_5__::func_960(), 2, true);
		MISC::CLEAR_BIT(&(Global_1357549.f_1893), 0);
		MISC::CLEAR_BIT(&(Global_1357549.f_1893), 4);
		__LIB_6__::func_631(iParam0, 0);
	}
}

bool func_659(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;
	Var4 = __LIB_0__::func_790(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return false;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*bParam2 = bVar2;
	Global_1946804.f_2652 = 0;
	if (!bVar2 && !bParam3)
	{
		__LIB_0__::func_947(uParam0, __LIB_0__::func_461(iVar0), 1);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = __LIB_0__::func_161(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, joaat("COMPONENT")))
			{
			}
			else
			{
				Global_1946804.f_2612[Global_1946804.f_2652] = iVar1;
				Global_1946804.f_2652++;
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
					}
					else
					{
						Jump @343; //curOff = 278
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (__LIB_4__::func_829(iVar3) && __LIB_4__::func_830(uParam0->f_1[iVar1 /*3*/], iVar3, &iVar0))
							{
								uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
							}
						}
						else
						{
							uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
						}
					}
					if (bVar2)
					{
						iVar1 = 0;
						while (iVar1 < Global_1946804.f_2652)
						{
							__LIB_1__::func_455(uParam0, uParam0->f_1[Global_1946804.f_2612[iVar1] /*3*/], Global_1946804.f_2612[iVar1], 0, 0);
							iVar1++;
						}
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return true;
				}
			}
		}
	}
}

void func_660(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_768(iParam0, iParam1))
	{
		return;
	}
	Global_1392240.f_1[iParam0 /*18*/].f_15 = (Global_1392240.f_1[iParam0 /*18*/].f_15 - (Global_1392240.f_1[iParam0 /*18*/].f_15 && iParam1));
}

void func_661(int iParam0, int iParam1)
{
	if (__LIB_0__::func_768(iParam0, iParam1))
	{
		return;
	}
	Global_1392240.f_1[iParam0 /*18*/].f_15 = (Global_1392240.f_1[iParam0 /*18*/].f_15 || iParam1);
}

void func_662(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (!bParam1)
	{
		__LIB_5__::func_685(iParam0);
	}
	__LIB_5__::func_689(iParam0);
	Global_1392240.f_146 = 0;
	__LIB_4__::func_58(iParam0, 512);
}

void func_663(int iParam0, int iParam1)
{
	Global_1392240.f_1[iParam0 /*18*/].f_3 = iParam1;
}

void func_664(int iParam0, int iParam1)
{
	if (__LIB_0__::func_770(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9422[iParam0 /*7*/].f_5 = (Global_40.f_9422[iParam0 /*7*/].f_5 || iParam1);
}

int func_665(int iParam0)
{
	int iVar0;
	if (__LIB_0__::func_117(iParam0, 32))
	{
		return 1;
	}
	if (!__LIB_0__::func_29(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_120(iParam0);
	if (!PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		return 0;
	}
	PERSCHAR::_0x7B204F88F6C3D287(iVar0);
	__LIB_0__::func_123(iParam0, 32);
	return 1;
}

bool func_666(int iParam0)
{
	return __LIB_0__::func_694(&Global_1425247, iParam0, 2);
}

bool func_667()
{
	return Global_1956584;
}

int func_668()
{
	return Global_1391438.f_414;
}

void func_669(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
	}
	Global_1392240.f_1[iParam0 /*18*/].f_6[iParam1] = __LIB_0__::func_68(iParam2, 0, 0);
}

void func_670(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (__LIB_1__::func_110(iParam0, iParam1, 1))
	{
		iVar0 = __LIB_0__::func_39(iParam1);
		iVar1 = __LIB_0__::func_710(iParam0);
		iVar2 = (__LIB_0__::func_710(iParam0) - __LIB_0__::func_710(iParam1));
		iVar3 = (__LIB_0__::func_39(iParam0) - __LIB_0__::func_39(iParam1));
		iVar4 = (__LIB_0__::func_40(iParam0) - __LIB_0__::func_40(iParam1));
		iVar5 = (__LIB_0__::func_41(iParam0) - __LIB_0__::func_41(iParam1));
		iVar6 = (__LIB_0__::func_42(iParam0) - __LIB_0__::func_42(iParam1));
		iVar7 = (__LIB_0__::func_43(iParam0) - __LIB_0__::func_43(iParam1));
	}
	else
	{
		iVar0 = __LIB_0__::func_39(iParam0);
		iVar1 = __LIB_0__::func_710(iParam1);
		iVar2 = (__LIB_0__::func_710(iParam1) - __LIB_0__::func_710(iParam0));
		iVar3 = (__LIB_0__::func_39(iParam1) - __LIB_0__::func_39(iParam0));
		iVar4 = (__LIB_0__::func_40(iParam1) - __LIB_0__::func_40(iParam0));
		iVar5 = (__LIB_0__::func_41(iParam1) - __LIB_0__::func_41(iParam0));
		iVar6 = (__LIB_0__::func_42(iParam1) - __LIB_0__::func_42(iParam0));
		iVar7 = (__LIB_0__::func_43(iParam1) - __LIB_0__::func_43(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + __LIB_0__::func_44(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = BUILTIN::ROUND(__LIB_0__::func_70(BUILTIN::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

void func_671(int iParam0, bool bParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, 2229503, 0, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 2229503, 0, 0, -1, -1, 0);
	if (bParam1)
	{
		POPULATION::_0x2161278C6322F740(2229503, 0, 0, -1, -1, iParam0);
	}
}

void func_672(var uParam0)
{
	if (SCRIPTS::IS_THREAD_ACTIVE(*uParam0, false))
	{
		SCRIPTS::TERMINATE_THREAD(*uParam0);
	}
}

bool func_673(int iParam0, float fParam1)
{
	int iVar0;
	iVar0 = __LIB_3__::func_577(iParam0);
	if (iVar0 != 0)
	{
		*fParam1 = __LIB_6__::func_622(iParam0);
		return true;
	}
	return false;
}

int func_674(var uParam0, var uParam1)
{
	if (__LIB_0__::func_6(*uParam0))
	{
		*uParam1 = __LIB_0__::func_895(*uParam0);
		if (!__LIB_0__::func_1(*uParam1, 2))
		{
			__LIB_1__::func_581(uParam1, 2);
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_675()
{
	PLAYER::_0x93624B36E8851B42(PLAYER::GET_PLAYER_INDEX());
}

int func_676(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("ST_DOCTOR");
		case 3:
			return joaat("ST_GENERAL");
		case 4:
			return joaat("ST_FENCE");
		case 6:
			return joaat("ST_GUNSMITH");
		case 7:
			return joaat("ST_TAILOR");
		case 8:
			return joaat("ST_BARBER");
		case 1:
			return joaat("ST_TRAIN_STATION");
		case 2:
			return joaat("ST_POST_OFFICE");
		case 9:
			return joaat("ST_HORSE_SHOP");
		case 10:
			return joaat("ST_BUTCHER");
		case 11:
			return joaat("ST_DYNAMIC");
		case 26:
			return joaat("ST_QUARTERMASTER");
		case 27:
			return joaat("ST_HORSE_TRAINER");
		case 28:
			return joaat("ST_BLACKSMITH");
		case 29:
			return joaat("ST_BOUNTYHUNTING_MP_RETURN");
		case 30:
			return joaat("ST_COACH");
		case 31:
			return -732027686;
		case 5:
			return joaat("ST_HORSE_FENCE");
		case 15:
			return joaat("ST_BANK");
		case 17:
			return joaat("ST_BAIT");
		case 33:
			return joaat("ST_BARTENDER");
		case 12:
			return joaat("ST_MARKET");
		case 13:
			return joaat("ST_FRENCH_MARKET");
		case 14:
			return -1227686818;
		case 18:
			return joaat("ST_TRAPPER");
		case 19:
			return joaat("ST_PEARSON");
		case 22:
			return joaat("ST_NEWSPAPER_BOY");
		case 20:
			return joaat("ST_HOTEL");
		case 32:
			return joaat("ST_WILDERNESS_SUPPLIES");
		case 34:
			return joaat("ST_HANDHELD");
		case 23:
			return joaat("ST_WEAPON_MOD_STORE");
		case 24:
			return joaat("ST_CLOTHING");
		case 25:
			return joaat("ST_CAMP_SHAVING");
		case 21:
			return joaat("ST_PHOTO_STUDIO");
		default:
			break;
	}
	return 0;
}

int func_677(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return __LIB_0__::func_23();
	}
	if (!__LIB_0__::func_29(iParam0))
	{
		return __LIB_0__::func_23();
	}
	return Global_24887[iParam0 /*2*/].f_1;
}

int func_678(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_BEAVER_FUR");
		case 1:
			return joaat("PROVISION_BEAVER_FUR_POOR");
		case 2:
			return joaat("PROVISION_BEAVER_FUR_PRISTINE");
		case 3:
			return joaat("PROVISION_BEAVER_LEGENDARY_FUR_PRISTINE");
		case 4:
			return joaat("PROVISION_BOAR_LEGENDARY_SKIN_PRISTINE");
		case 5:
			return joaat("PROVISION_BOAR_SKIN");
		case 6:
			return joaat("PROVISION_BOAR_SKIN_POOR");
		case 7:
			return joaat("PROVISION_BOAR_SKIN_PRISTINE");
		case 8:
			return joaat("PROVISION_BUCK_FUR");
		case 9:
			return joaat("PROVISION_BUCK_FUR_POOR");
		case 10:
			return joaat("PROVISION_BUCK_FUR_PRISTINE");
		case 11:
			return joaat("PROVISION_BUCK_LEGENDARY_FUR_PRISTINE");
		case 12:
			return joaat("PROVISION_COUGAR_FUR");
		case 13:
			return joaat("PROVISION_COUGAR_FUR_POOR");
		case 14:
			return joaat("PROVISION_COUGAR_FUR_PRISTINE");
		case 15:
			return joaat("PROVISION_COUGAR_LEGENDARY_FUR_PRISTINE");
		case 16:
			return joaat("PROVISION_COYOTE_FUR");
		case 17:
			return joaat("PROVISION_COYOTE_FUR_POOR");
		case 18:
			return joaat("PROVISION_COYOTE_FUR_PRISTINE");
		case 19:
			return joaat("PROVISION_COYOTE_LEGENDARY_FUR_PRISTINE");
		case 20:
			return joaat("PROVISION_DEER_HIDE");
		case 21:
			return joaat("PROVISION_DEER_HIDE_POOR");
		case 22:
			return joaat("PROVISION_DEER_HIDE_PRISTINE");
		case 23:
			return joaat("PROVISION_FOX_FUR");
		case 24:
			return joaat("PROVISION_FOX_FUR_POOR");
		case 25:
			return joaat("PROVISION_FOX_FUR_PRISTINE");
		case 26:
			return joaat("PROVISION_FOX_LEGENDARY_FUR_PRISTINE");
		case 27:
			return joaat("PROVISION_GOAT_HAIR");
		case 28:
			return joaat("PROVISION_GOAT_HAIR_POOR");
		case 29:
			return joaat("PROVISION_GOAT_HAIR_PRISTINE");
		case 30:
			return joaat("PROVISION_JAVELINA_SKIN");
		case 31:
			return joaat("PROVISION_JAVELINA_SKIN_POOR");
		case 32:
			return joaat("PROVISION_JAVELINA_SKIN_PRISTINE");
		case 33:
			return joaat("PROVISION_LOANSHARK_SKINS");
		case 34:
			return joaat("PROVISION_PANTHER_FUR");
		case 35:
			return joaat("PROVISION_PANTHER_FUR_POOR");
		case 36:
			return joaat("PROVISION_PANTHER_FUR_PRISTINE");
		case 37:
			return joaat("PROVISION_PANTHER_LEGENDARY_FUR_PRISTINE");
		case 38:
			return joaat("PROVISION_PIG_SKIN");
		case 39:
			return joaat("PROVISION_PIG_SKIN_POOR");
		case 40:
			return joaat("PROVISION_PIG_SKIN_PRISTINE");
		case 41:
			return joaat("PROVISION_PRONGHORN_FUR");
		case 42:
			return joaat("PROVISION_PRONGHORN_FUR_POOR");
		case 43:
			return joaat("PROVISION_PRONGHORN_FUR_PRISTINE");
		case 44:
			return joaat("PROVISION_PRONGHORN_LEGENDARY_FUR_PRISTINE");
		case 45:
			return joaat("PROVISION_RAM_HIDE");
		case 46:
			return joaat("PROVISION_RAM_HIDE_POOR");
		case 47:
			return joaat("PROVISION_RAM_HIDE_PRISTINE");
		case 48:
			return joaat("PROVISION_RAM_LEGENDARY_HIDE_PRISTINE");
		case 49:
			return joaat("PROVISION_SHEEP_WOOL");
		case 50:
			return joaat("PROVISION_SHEEP_WOOL_POOR");
		case 51:
			return joaat("PROVISION_SHEEP_WOOL_PRISTINE");
		case 52:
			return joaat("PROVISION_WOLF_FUR");
		case 53:
			return joaat("PROVISION_WOLF_FUR_POOR");
		case 54:
			return joaat("PROVISION_WOLF_FUR_PRISTINE");
		case 55:
			return joaat("PROVISION_WOLF_LEGENDARY_FUR_PRISTINE");
		case 56:
			return 0;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

bool func_679(int iParam0)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x4AEF1FB5B9011D75(iParam0);
}

int func_680(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BEAVER_FUR"):
			return 0;
		case joaat("PROVISION_BOAR_SKIN_PRISTINE"):
			return 7;
		case joaat("PROVISION_DEER_HIDE"):
			return 20;
		case joaat("PROVISION_COUGAR_FUR_PRISTINE"):
			return 14;
		case joaat("PROVISION_GOAT_HAIR_PRISTINE"):
			return 29;
		case joaat("PROVISION_BEAVER_FUR_POOR"):
			return 1;
		case joaat("PROVISION_COYOTE_FUR_POOR"):
			return 17;
		case joaat("PROVISION_PRONGHORN_FUR_PRISTINE"):
			return 43;
		case joaat("PROVISION_COYOTE_LEGENDARY_FUR_PRISTINE"):
			return 19;
		case joaat("PROVISION_JAVELINA_SKIN"):
			return 30;
		case joaat("PROVISION_SHEEP_WOOL"):
			return 49;
		case joaat("PROVISION_PIG_SKIN_PRISTINE"):
			return 40;
		case joaat("PROVISION_DEER_HIDE_PRISTINE"):
			return 22;
		case joaat("PROVISION_PRONGHORN_FUR_POOR"):
			return 42;
		case joaat("PROVISION_BUCK_LEGENDARY_FUR_PRISTINE"):
			return 11;
		case joaat("PROVISION_BUCK_FUR"):
			return 8;
		case joaat("PROVISION_COYOTE_FUR_PRISTINE"):
			return 18;
		case joaat("PROVISION_RAM_LEGENDARY_HIDE_PRISTINE"):
			return 48;
		case joaat("PROVISION_BUCK_FUR_PRISTINE"):
			return 10;
		case joaat("PROVISION_DEER_HIDE_POOR"):
			return 21;
		case joaat("PROVISION_RAM_HIDE"):
			return 45;
		case joaat("PROVISION_PANTHER_FUR"):
			return 34;
		case joaat("PROVISION_PIG_SKIN_POOR"):
			return 39;
		case joaat("PROVISION_BEAVER_LEGENDARY_FUR_PRISTINE"):
			return 3;
		case joaat("PROVISION_PRONGHORN_LEGENDARY_FUR_PRISTINE"):
			return 44;
		case joaat("PROVISION_JAVELINA_SKIN_POOR"):
			return 31;
		case joaat("PROVISION_PIG_SKIN"):
			return 38;
		case 0:
			return 56;
		case joaat("PROVISION_WOLF_FUR_POOR"):
			return 53;
		case joaat("PROVISION_FOX_FUR"):
			return 23;
		case joaat("PROVISION_COUGAR_FUR"):
			return 12;
		case joaat("PROVISION_FOX_FUR_PRISTINE"):
			return 25;
		case joaat("PROVISION_WOLF_LEGENDARY_FUR_PRISTINE"):
			return 55;
		case joaat("PROVISION_PRONGHORN_FUR"):
			return 41;
		case joaat("PROVISION_WOLF_FUR_PRISTINE"):
			return 54;
		case joaat("PROVISION_PANTHER_LEGENDARY_FUR_PRISTINE"):
			return 37;
		case joaat("PROVISION_GOAT_HAIR_POOR"):
			return 28;
		case joaat("PROVISION_BEAVER_FUR_PRISTINE"):
			return 2;
		case joaat("PROVISION_WOLF_FUR"):
			return 52;
		case joaat("PROVISION_COYOTE_FUR"):
			return 16;
		case joaat("PROVISION_BOAR_SKIN_POOR"):
			return 6;
		case joaat("PROVISION_SHEEP_WOOL_PRISTINE"):
			return 51;
		case joaat("PROVISION_COUGAR_LEGENDARY_FUR_PRISTINE"):
			return 15;
		case joaat("PROVISION_PANTHER_FUR_POOR"):
			return 35;
		case joaat("PROVISION_BUCK_FUR_POOR"):
			return 9;
		case joaat("PROVISION_FOX_LEGENDARY_FUR_PRISTINE"):
			return 26;
		case joaat("PROVISION_FOX_FUR_POOR"):
			return 24;
		case joaat("PROVISION_GOAT_HAIR"):
			return 27;
		case joaat("PROVISION_SHEEP_WOOL_POOR"):
			return 50;
		case joaat("PROVISION_RAM_HIDE_PRISTINE"):
			return 47;
		case joaat("PROVISION_RAM_HIDE_POOR"):
			return 46;
		case joaat("PROVISION_COUGAR_FUR_POOR"):
			return 13;
		case joaat("PROVISION_JAVELINA_SKIN_PRISTINE"):
			return 32;
		case joaat("PROVISION_PANTHER_FUR_PRISTINE"):
			return 36;
		case joaat("PROVISION_LOANSHARK_SKINS"):
			return 33;
		case joaat("PROVISION_BOAR_LEGENDARY_SKIN_PRISTINE"):
			return 4;
		case joaat("PROVISION_BOAR_SKIN"):
			return 5;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

bool func_681(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam1))
	{
		return false;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam0, &uParam1, uParam5, !bParam6))
	{
		return false;
	}
	return true;
}

struct<4> func_682(int iParam0, int iParam1)
{
	struct<5> Var0;
	Var0 = { __LIB_5__::func_96(iParam0) };
	return __LIB_3__::func_0(iParam0, iParam1, Var0, Var0.f_4);
}

bool func_683(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_923(iParam1) || !__LIB_0__::func_923(iParam0))
	{
		return true;
	}
	return iParam0 >= iParam1;
}

bool func_684(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (__LIB_6__::func_621(uParam0, 128))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = __LIB_1__::func_334(uParam0->f_3[iVar0 /*3*/]);
			if (__LIB_0__::func_272(iVar1, 0) && __LIB_0__::func_665(iVar1, iParam1, 1, 1) <= 4f)
			{
				uParam0->f_21 = iVar0;
				return true;
			}
			iVar0++;
		}
	}
	if (!__LIB_6__::func_621(uParam0, 512) && !__LIB_6__::func_621(uParam0, 256))
	{
		return true;
	}
	if (__LIB_6__::func_621(uParam0, 512))
	{
		if (__LIB_2__::func_815(uParam0))
		{
			return true;
		}
	}
	if (__LIB_6__::func_621(uParam0, 256))
	{
		if (__LIB_2__::func_816(Global_35, uParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_685(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!__LIB_6__::func_625(iParam0, iParam1, iParam2))
	{
		if (bParam3)
		{
			__LIB_4__::func_849(iParam0, iParam1, iParam2);
		}
		return true;
	}
	return false;
}

void func_686(int* iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	iParam0->f_14 = iParam2;
	__LIB_1__::func_471(iParam0, 1);
	__LIB_3__::func_157(iParam0, sParam1, iParam3, iParam4, iParam5, iParam6, iParam7, bParam8, 0);
}

void func_687()
{
	if (__LIB_2__::func_774(5))
	{
		__LIB_2__::func_801(2);
		__LIB_2__::func_801(4);
	}
	if ((((__LIB_2__::func_774(6) || __LIB_2__::func_774(14)) || __LIB_2__::func_774(26)) || __LIB_2__::func_774(9)) || __LIB_2__::func_774(21))
	{
		__LIB_2__::func_801(4);
	}
	if (((__LIB_1__::func_200(26) || __LIB_1__::func_200(27)) || __LIB_1__::func_200(28)) || __LIB_1__::func_200(29))
	{
		__LIB_2__::func_801(4);
	}
	if (((__LIB_3__::func_563(3, 61) || __LIB_3__::func_563(3, 29)) || __LIB_3__::func_563(3, 73)) || __LIB_3__::func_563(3, 43))
	{
		__LIB_2__::func_801(4);
	}
	if (__LIB_2__::func_84())
	{
		if (__LIB_1__::func_988(101) || __LIB_1__::func_988(79))
		{
			__LIB_2__::func_801(4);
		}
		if (((((__LIB_1__::func_988(88) || __LIB_1__::func_988(89)) || __LIB_1__::func_988(108)) || __LIB_1__::func_988(98)) || __LIB_1__::func_988(106)) || __LIB_1__::func_988(110))
		{
			__LIB_2__::func_801(8);
		}
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("GENERIC_WAGON_FENCE_CORE")) > 0)
	{
		__LIB_2__::func_801(4);
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1396257[16 /*638*/].f_635, false) || SCRIPTS::IS_THREAD_ACTIVE(Global_1396257[13 /*638*/].f_635, false))
	{
		__LIB_2__::func_801(4);
	}
}

bool func_688(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HIGHPRESSURE"):
		case joaat("SUNNY"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_689(int iParam0)
{
	if (iParam0 == 0)
	{
		__LIB_0__::func_11();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		__LIB_0__::func_24(iLocal_21, 2048);
		if (__LIB_0__::func_69(__LIB_1__::func_898()))
		{
			__LIB_1__::func_883(__LIB_1__::func_898(), 8);
		}
		__LIB_0__::func_25(iLocal_21, 4);
		__LIB_0__::func_25(iLocal_21, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
		__LIB_0__::func_11(iLocal_21);
		__LIB_0__::func_18();
		return false;
	}
	else
	{
		__LIB_2__::func_770(iLocal_21);
		__LIB_2__::func_819(iLocal_21);
		__LIB_2__::func_755(iLocal_21);
		if (!__LIB_2__::func_756(iLocal_21, 0))
		{
			return false;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

bool func_690(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return true;
	}
	return false;
}

char* func_691(int iParam0)
{
	return "";
}

bool func_692(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0, iVar0);
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, Global_35, 0, 0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_693(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, iParam2) == iParam0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_694(var uParam0, vector3 vParam1, int iParam4, int iParam5, var uParam6, var uParam7)
{
	if (!__LIB_1__::func_565(uParam0))
	{
		*uParam0 = GRAPHICS::_0xFA50F79257745E74(vParam1, iParam4, iParam5, uParam6, uParam7);
		if (__LIB_1__::func_565(uParam0))
		{
		}
	}
}

void func_695(int* iParam0)
{
	MISC::_COPY_MEMORY(iParam0, &(Global_1879534.f_7301), 243);
}

bool func_696(int iParam0, float fParam1)
{
	return DECORATOR::DECOR_SET_FLOAT(iParam0, "fLoot_money", fParam1);
}

void func_697(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !__LIB_0__::func_139(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		__LIB_0__::func_184(iParam0, 128);
	}
	else
	{
		__LIB_0__::func_186(iParam0, 128);
	}
}

bool func_698(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (__LIB_2__::func_349(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				__LIB_1__::func_471(iParam1, 0);
				__LIB_4__::func_452(iParam1, uParam2, __LIB_1__::func_489(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

void func_699(int* iParam0, var uParam1)
{
	int iVar0;
	struct<17> Var1;
	struct<10> Var22;
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	__LIB_4__::func_452(iParam0, uParam1, 1);
	__LIB_2__::func_624(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

void func_700()
{
	int iVar0;
	struct<4> Var30;
	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	iVar0 = 29;
	__LIB_3__::func_150(Global_35, &iVar0);
	Var30 = { __LIB_0__::func_949(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	__LIB_1__::func_828(0);
	__LIB_1__::func_835(7);
	__LIB_1__::func_853(joaat("KIT_BANDANA"), 1, 1, 0);
	if (__LIB_0__::func_241() == 1160113249)
	{
		__LIB_1__::func_853(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		__LIB_1__::func_853(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	__LIB_3__::func_228(Global_35, &iVar0);
}

void func_701(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (__LIB_0__::func_192(iParam0, 606799272))
		{
			__LIB_1__::func_852(iParam0, iParam1);
		}
		if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_4__::func_130(iParam0, iParam1, 1, 0);
		}
	}
}

bool func_702(int iParam0)
{
	return (Global_1392388.f_4 && iParam0) != 0;
}

bool func_703(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return true;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return true;
	}
	if (PED::IS_PED_FATALLY_INJURED(iParam0))
	{
		return true;
	}
	return false;
}

void func_704(int iParam0)
{
	Global_1392388.f_4 = (Global_1392388.f_4 - (Global_1392388.f_4 && iParam0));
}

void func_705(int iParam0)
{
	Global_1392388.f_4 = (Global_1392388.f_4 || iParam0);
}

bool func_706(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 14);
}

float func_707(int iParam0)
{
	switch (iParam0)
	{
		case 13:
			return 70f;
		default:
			break;
	}
	return 75f;
}

bool func_708(int iParam0)
{
	if (iParam0 != -1 && iParam0 < 8)
	{
		return true;
	}
	return false;
}

int func_709()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (Global_40.f_9479[iVar0 /*4*/] == -1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_710(int iParam0)
{
	vector3 vVar0;
	switch (iParam0)
	{
		case 26:
			vVar0 = { -1763.9f, -385.1f, 156.74f };
			break;
		case 105:
			vVar0 = { 1226.5f, -1294.9f, 75.9f };
			break;
	}
	if (__LIB_0__::func_86(vVar0))
	{
	}
	return vVar0;
}

Vector3 func_711(int iParam0)
{
	vector3 vVar0;
	switch (iParam0)
	{
		case 0:
			vVar0 = { -1410.191f, -963.1737f, 60.5407f };
			break;
		case 1:
			vVar0 = { -1535.618f, 160.3011f, 100.1231f };
			break;
		case 2:
			vVar0 = { -2731.802f, -255.3586f, 148.6638f };
			break;
		case 4:
			vVar0 = { 1103.741f, -390.8806f, 93.3573f };
			break;
		case 5:
			vVar0 = { 1443.614f, -1845.664f, 53.1259f };
			break;
		case 6:
			vVar0 = { 1502.723f, -714.6039f, 47.6706f };
			break;
		case 8:
			vVar0 = { 1701.657f, -746.2404f, 40.7819f };
			break;
		case 9:
			vVar0 = { 1111.63f, -615.53f, 87.37f };
			break;
		case 10:
			vVar0 = { 685.9935f, -170.3752f, 135.5994f };
			break;
		case 11:
			vVar0 = { 1518.102f, -2117.535f, 42.7516f };
			break;
		case 12:
			vVar0 = { 1381.61f, -807.13f, 64.12f };
			break;
		case 13:
			vVar0 = { 2538.571f, -263.3733f, 41.1397f };
			break;
	}
	if (__LIB_0__::func_86(vVar0))
	{
	}
	return vVar0;
}

int func_712(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -113733662;
		case 1:
			return 594732118;
		case 2:
			return 348276469;
		case 3:
			return 95401549;
		case 4:
			return 1235783774;
		case 5:
			return 1763233598;
		case 6:
			return 775149941;
		case 7:
			return 1954629188;
		case 8:
			return -840809348;
		case 9:
			return 381638197;
		case 10:
			return -1303933625;
		case 11:
			return 618820223;
		case 12:
			return -561714800;
		case 13:
			return -135395907;
		default:
			break;
	}
	return 0;
}

void func_713(int iParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam0, 0))
			{
				if (bParam4)
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam0, fParam1, iParam2, iParam3, 0);
				}
				TASK::SET_ENABLE_SPEED_RESTRAIN_FOR_WAYPOINT_RECORDING_LEADER(iParam0, 1);
				TASK::SET_UP_SPEED_RESTRAIN_INFORMATION_FOR_PLAYER_FOLLOWER(iParam0, iParam5, fParam6, fParam7, iParam8, iParam9, iParam11, iParam12, iParam13);
			}
		}
	}
	if (bParam10)
	{
		if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MELEE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_PRIMARY"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_SECONDARY"), false);
		}
	}
}

char* func_714(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return "CRRH1";
		case 5:
			return "CRRH2";
		case 6:
			return "CRRH3";
		case 0:
			return "CRST1";
		case 1:
			return "CRST2";
		case 2:
			return "CRST3";
		default:
			break;
	}
	return "PRCCH";
}

void func_715(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0, iVar0);
		if (__LIB_0__::func_272(iVar1, 1))
		{
			PED::_0x06D26A96CA1BCA75(iVar1, 3, fParam1, 0);
		}
		iVar0++;
	}
}

void func_716(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0, iVar0);
		if (__LIB_0__::func_272(iVar1, 1))
		{
			VEHICLE::_0xB36D3EC70963BE60(iParam0, iVar1);
		}
		iVar0++;
	}
}

void func_717(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0, iVar0);
		if (__LIB_0__::func_272(iVar1, 1))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, bParam1);
			if (bParam1)
			{
			}
		}
		iVar0++;
	}
}

void func_718(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0, iVar0);
		if (__LIB_0__::func_272(iVar1, 1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 72, bParam1);
			if (bParam1)
			{
			}
		}
		iVar0++;
	}
}

bool func_719(var uParam0, bool bParam1)
{
	if (__LIB_0__::func_84(uParam0, 262144))
	{
		return false;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_156))
	{
		return false;
	}
	if (!ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_156, "ExportCamera"))
	{
		return false;
	}
	if ((ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_156, "ExportCamera") || (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_156, "ExportCamera") && bParam1)) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uParam0->f_156))
	{
		__LIB_0__::func_88(uParam0, 262144);
		__LIB_0__::func_106(uParam0, 1);
		return true;
	}
	return false;
}

void func_720(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (__LIB_0__::func_86(Global_1392388.f_10[iParam0 /*13*/].f_5))
	{
		return;
	}
	if (!PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(Global_1392388.f_10[iParam0 /*13*/].f_5, 1, 1, 3f, 0f)))
	{
		__LIB_2__::func_165(Global_1392388.f_10[iParam0 /*13*/].f_5, 125f, 0, 0, 5);
	}
}

float func_721(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	fVar0 = ENTITY::GET_ENTITY_SPEED(iParam1);
	vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, vParam2) };
	fVar4 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), vVar1);
	fVar6 = 1f;
	fVar7 = 20f;
	if (fVar0 > 10f)
	{
		fVar5 = 6.2f;
	}
	else
	{
		fVar5 = 4.2f;
	}
	if (fVar4 > fVar6)
	{
		fVar8 = (fVar4 - fVar6);
		fVar8 = (fVar8 / fVar7);
		if (fVar8 > 1f)
		{
			fVar8 = 1f;
		}
		if (fVar8 < 0f)
		{
			fVar8 = 0f;
		}
		if (__LIB_3__::func_254(vVar1, iParam0))
		{
			fVar9 = __LIB_0__::func_667((fVar0 / fVar5), 2.5f, fVar8);
		}
		else
		{
			fVar9 = __LIB_0__::func_667((fVar0 / fVar5), 0f, fVar8);
		}
	}
	else
	{
		fVar9 = (fVar0 / fVar5);
	}
	if (fVar9 > 2.5f)
	{
		fVar9 = 2.5f;
	}
	if (fVar9 < 0f)
	{
		fVar9 = 0f;
	}
	return fVar9;
}

void func_722(var uParam0, char* sParam1)
{
	if (((!__LIB_0__::func_84(uParam0, 32) || __LIB_1__::func_741(uParam0)) || __LIB_0__::func_84(uParam0, 268435456)) && !__LIB_0__::func_84(uParam0, 65536))
	{
		__LIB_0__::func_7(&(uParam0->f_212), 256);
	}
}

void func_723()
{
	__LIB_1__::func_164(0);
	HUD::DISPLAY_HUD(true);
	MAP::DISPLAY_RADAR(true);
	__LIB_0__::func_145(0, 0);
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
}

bool func_724(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar3;
	struct<8> Var4;
	int iVar12;
	bool bVar13;
	int iVar14;
	struct<8> Var15;
	if (bParam3)
	{
		uParam0->f_223++;
		if (uParam0->f_223 < 10)
		{
			return (__LIB_0__::func_84(uParam0, 256) && !__LIB_0__::func_84(uParam0, 4194304));
		}
		uParam0->f_223 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	__LIB_1__::func_534(uParam0, sParam1);
	if (!__LIB_0__::func_84(uParam0, 64))
	{
		if (!__LIB_0__::func_86(__LIB_0__::func_85(uParam0)))
		{
			__LIB_0__::func_88(uParam0, 64);
		}
		else
		{
			vVar0 = { __LIB_1__::func_593(uParam0) };
			if (!__LIB_0__::func_86(vVar0))
			{
				__LIB_0__::func_487(uParam0, vVar0);
			}
		}
		return false;
	}
	fVar3 = __LIB_0__::func_94(Global_35, __LIB_0__::func_85(uParam0), 1);
	if (__LIB_0__::func_84(uParam0, 128) || __LIB_0__::func_84(uParam0, 256))
	{
		if ((fVar3 >= __LIB_1__::func_475(uParam0) && !bParam2) || !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_156))
		{
			if (uParam0->f_241)
			{
				__LIB_1__::func_436();
				uParam0->f_241 = 0;
			}
			__LIB_1__::func_476(uParam0);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_156))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_156);
			}
			__LIB_1__::func_594(uParam0);
			__LIB_1__::func_477(uParam0, 128, 1);
			__LIB_1__::func_477(uParam0, 256, 1);
			__LIB_1__::func_477(uParam0, 4096, 1);
			__LIB_1__::func_477(uParam0, 32768, 1);
			__LIB_1__::func_477(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= __LIB_1__::func_478(uParam0) || bParam2)
	{
		if (!__LIB_0__::func_84(uParam0, 128))
		{
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_156))
			{
				if (__LIB_1__::func_478(uParam0) >= __LIB_1__::func_475(uParam0))
				{
				}
				Var4 = { __LIB_1__::func_479(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					__LIB_1__::func_595(uParam0);
				}
				Var4 = { __LIB_1__::func_479(uParam0) };
				iVar12 = 256;
				if (!__LIB_0__::func_84(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_156 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_152), iVar12, &Var4, false, true);
				__LIB_1__::func_737(uParam0, 0, 0, 0, 0);
				__LIB_0__::func_88(uParam0, 128);
			}
		}
	}
	if (__LIB_0__::func_84(uParam0, 128))
	{
		if (__LIB_0__::func_84(uParam0, 256) && !__LIB_0__::func_84(uParam0, 4194304))
		{
			return true;
		}
		__LIB_1__::func_743(uParam0);
		if (!uParam0->f_241)
		{
			if (__LIB_0__::func_95())
			{
				__LIB_1__::func_36(4096);
				uParam0->f_241 = 1;
			}
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_156, true, false))
		{
			bVar13 = true;
			Var15 = { __LIB_1__::func_589(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_174[iVar14 /*9*/])))
				{
					if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_174[iVar14 /*9*/]), &Var15))
					{
						if (!uParam0->f_174[iVar14 /*9*/].f_8)
						{
							uParam0->f_174[iVar14 /*9*/].f_8 = 1;
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_156, &(uParam0->f_174[iVar14 /*9*/]));
							bVar13 = false;
						}
						else if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_156, &(uParam0->f_174[iVar14 /*9*/])))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!__LIB_0__::func_84(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_156, &Var15))
				{
					if (!__LIB_0__::func_84(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_156, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_156, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_156, &Var15))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_156, &Var15);
						}
						__LIB_0__::func_88(uParam0, 16777216);
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_156, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return false;
			}
			__LIB_0__::func_88(uParam0, 256);
			__LIB_1__::func_477(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

void func_725(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_699(iParam0))
	{
		if (Global_1360165[iParam0 /*1157*/].f_129 != 0 && Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		__LIB_0__::func_288(iParam0, 56, 1);
		__LIB_1__::func_283(&(Global_1359489.f_40), 1);
	}
	__LIB_1__::func_684(iParam0, 0);
	__LIB_0__::func_289(iParam0, 4, 0);
	__LIB_0__::func_745(iParam0);
	__LIB_0__::func_706(iParam0);
	__LIB_0__::func_290(iParam0, 37, 1);
	bVar0 = __LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = __LIB_0__::func_748(iParam0, 0);
	bVar2 = PERSCHAR::_0x800DF3FC913355F3(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (__LIB_0__::func_287(iParam0, 64, 1))
	{
		__LIB_0__::func_290(iParam0, 64, 1);
	}
	if (bParam3)
	{
		__LIB_0__::func_290(iParam0, 33, 1);
		__LIB_0__::func_290(iParam0, 34, 1);
		__LIB_1__::func_27(iParam0, 1056964608 /* Float: 0.5f */, -1, 1061158912 /* Float: 0.75f */);
		__LIB_0__::func_707(iParam0, 1, 1, 0);
		if (bParam6)
		{
			__LIB_0__::func_288(iParam0, 30, 1);
		}
		if (bParam7)
		{
			__LIB_0__::func_288(iParam0, 35, 1);
			if (bParam8)
			{
				__LIB_0__::func_288(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			__LIB_0__::func_705(iParam0, 0);
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
			}
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
		}
		if (bVar2)
		{
			PERSCHAR::_0xBB68908CD11AEBDC(iVar1);
		}
		__LIB_0__::func_290(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		__LIB_0__::func_288(iParam0, 33, 1);
		__LIB_0__::func_707(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			Global_1360165[iParam0 /*1157*/].f_133 = fParam4;
			__LIB_1__::func_283(&(Global_1360165[iParam0 /*1157*/].f_130), 1);
		}
		else
		{
			__LIB_0__::func_37(&(Global_1360165[iParam0 /*1157*/].f_130));
		}
		if (bParam9)
		{
			__LIB_0__::func_288(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			__LIB_1__::func_197(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (__LIB_0__::func_287(iParam0, 45, 1))
	{
		__LIB_0__::func_290(iParam0, 45, 1);
	}
	__LIB_0__::func_176(iParam0, 16, 1);
	__LIB_0__::func_290(iParam0, 44, 1);
	Global_1360165[iParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[iParam0 /*60*/].f_4 = 0;
	if (bParam5)
	{
		if (__LIB_0__::func_272(__LIB_0__::func_177(iParam0), 0))
		{
			__LIB_1__::func_463(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_726(var uParam0, int iParam1)
{
	if (Global_1935630.f_12)
	{
		return;
	}
	__LIB_0__::func_732(2000);
	Global_16 = 0;
	__LIB_0__::func_109();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, __LIB_0__::func_1(*uParam0, 8));
	if (!__LIB_0__::func_1(*uParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (__LIB_0__::func_1(*uParam0, 2) || __LIB_0__::func_1(*uParam0, 4))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_0__::func_1(*uParam0, 16))
	{
		__LIB_0__::func_733(1);
	}
	if (__LIB_0__::func_1(*uParam0, 32))
	{
		__LIB_1__::func_775(Global_35, joaat("CLOTHING_ITEM_NECKWEAR_NONE"), 0, 1742327865, 0, 1, 0, 0, 1, 0);
		__LIB_1__::func_704(joaat("KIT_BANDANA"), 0);
	}
	__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489.f_16 & 4194304 != 0)
	{
		Global_1359489.f_16 = (Global_1359489.f_16 - Global_1359489.f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_727(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	char[] cVar0[8];
	Global_1572864.f_8 = iParam0;
	Global_1572864.f_9 = iParam9;
	Global_1572864.f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (__LIB_0__::func_700(iParam0) == 1)
	{
		cVar0 = __LIB_0__::func_631(__LIB_0__::func_909(iParam0));
		TELEMETRY::_TELEMETRY_MISSION_CHECKPOINT(&cVar0, 0, Global_1572864.f_9);
	}
	else if (__LIB_0__::func_700(iParam0) == 8)
	{
		cVar0 = __LIB_0__::func_632(__LIB_0__::func_957(iParam0));
		TELEMETRY::_TELEMETRY_MISSION_CHECKPOINT(&cVar0, 0, Global_1572864.f_9);
	}
	__LIB_1__::func_837(1, 1);
	__LIB_1__::func_617(1, Param1, Param1.f_3);
	Global_1347394 = { Param5 };
	__LIB_0__::func_868(0);
	__LIB_0__::func_869(0);
	__LIB_0__::func_303(1f);
}

void func_728(var uParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_156))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_156);
	}
}

void func_729(var uParam0, char[32] cParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam1))
	{
		return;
	}
	uParam0->f_166 = { cParam1 };
}

void func_730(var uParam0, float fParam1)
{
	uParam0->f_146 = fParam1;
}

void func_731(var uParam0, float fParam1)
{
	uParam0->f_147 = fParam1;
}

void func_732(int iParam0, var uParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_2 = uParam1;
}

bool func_733(int iParam0)
{
	int iVar0;
	if (!__LIB_3__::func_87(iParam0, &iVar0))
	{
		return false;
	}
	return Global_40.f_4237[iVar0 /*3*/].f_2;
}

bool func_734(var uParam0)
{
	return __LIB_3__::func_35(&(uParam0->f_17), CLOCK::GET_CLOCK_HOURS());
}

bool func_735(var uParam0)
{
	bool bVar0;
	bVar0 = true;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_34)))
	{
		if (!__LIB_2__::func_313(MISC::GET_HASH_KEY(&(uParam0->f_34))))
		{
			bVar0 = false;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_67)))
	{
		if (!HUD::_TEXT_DATABASE_HAS_LOADED(&(uParam0->f_67)))
		{
			bVar0 = false;
		}
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("CMPI"))
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
	}
	return bVar0;
}

void func_736(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	iParam0->f_57 = { 0f, 0f, 0f };
	__LIB_3__::func_49(iParam0, iParam3, 0);
	__LIB_3__::func_50(uParam1, iParam2);
	__LIB_3__::func_51(iParam0, iParam4);
	if (!MISC::IS_BIT_SET(iParam0->f_21, 0))
	{
		MISC::SET_BIT(&(iParam0->f_21), 0);
	}
	if (fParam5 > -1f)
	{
		__LIB_3__::func_52(iParam0, fParam5);
	}
	if (iParam6 == 1)
	{
		__LIB_1__::func_471(iParam0, 17);
	}
	if (iParam7 == 1)
	{
		__LIB_1__::func_471(iParam0, 16);
	}
	if (iParam8 == 1)
	{
		__LIB_1__::func_471(iParam0, 15);
	}
	if (iParam9 == 1)
	{
		__LIB_1__::func_471(iParam0, 13);
	}
	if (iParam10 == 1)
	{
		__LIB_1__::func_471(iParam0, 12);
	}
	if (iParam11 == 1)
	{
		__LIB_1__::func_471(iParam0, 11);
	}
	if (iParam12 == 1)
	{
		__LIB_1__::func_471(iParam0, 8);
	}
	if (iParam13 == 1)
	{
		__LIB_1__::func_471(iParam0, 10);
	}
	if (iParam14 == 1)
	{
		__LIB_1__::func_471(iParam0, 9);
	}
	if (iParam15 == 1)
	{
		__LIB_1__::func_471(iParam0, 18);
	}
	if (iParam16 == 1)
	{
		__LIB_1__::func_471(iParam0, 20);
	}
	if (iParam17 == 1)
	{
		__LIB_1__::func_471(iParam0, 19);
	}
}

void func_737(int* iParam0)
{
	if (MISC::IS_BIT_SET(iParam0->f_21, 2) && VOLUME::_DOES_VOLUME_EXIST(iParam0->f_35))
	{
		__LIB_3__::func_59(iParam0->f_35);
		__LIB_0__::func_172(iParam0->f_35);
		MISC::CLEAR_BIT(&(iParam0->f_21), 2);
	}
}

bool func_738(var uParam0, var uParam1, int iParam2)
{
	struct<5> Var0;
	Var0 = Global_1359489.f_21;
	Var0.f_1 = 0;
	Var0.f_2 = 429892159;
	Var0.f_3 = __LIB_3__::func_38(__LIB_0__::func_317());
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 13127246;
		Var0.f_3 = uParam0->f_9;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			Var0.f_3 = __LIB_3__::func_61(iParam2);
			if (__LIB_3__::func_40(Var0, 443199092, uParam1, 0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_739(var uParam0, int* iParam1)
{
	if (MISC::IS_BIT_SET(*iParam1, 21))
	{
		__LIB_3__::func_97(iParam1);
		return;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam1->f_36) || !__LIB_0__::func_272(*uParam0, 0))
	{
		return;
	}
	iParam1->f_36 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), 0f, 0f, 0f, 0.55f, 0.55f, 3f);
	VOLUME::_0x5B23DFF8E0948BB2(iParam1->f_36, 1);
}

void func_740(int* iParam0, var uParam1, int iParam2, char* sParam3)
{
	int iVar0;
	int iVar1;
	if (ENTITY::IS_ENTITY_DEAD(*iParam2))
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		iVar0 = HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(*iParam2, iParam0->f_26, 3, 1, 0, sParam3, 0);
		iVar1 = 0;
		while (iVar1 < *uParam1)
		{
			if (!__LIB_0__::func_139((uParam1[iVar1 /*17*/])->f_6) || __LIB_3__::func_66((uParam1[iVar1 /*17*/])->f_6) == 0)
			{
			}
			else
			{
				HUD::_UIPROMPT_SET_GROUP(__LIB_3__::func_66((uParam1[iVar1 /*17*/])->f_6), iVar0, 0);
			}
			iVar1++;
		}
	}
}

void func_741(int* iParam0)
{
	if (MISC::IS_BIT_SET(*iParam0, 7))
	{
		if (MISC::IS_BIT_SET(iParam0->f_21, 3))
		{
			__LIB_3__::func_28(iParam0, 0);
		}
		return;
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 3))
	{
		__LIB_1__::func_283(&(iParam0->f_22), 0);
		if (iParam0->f_25 == 0f || __LIB_1__::func_285(&(iParam0->f_22), iParam0->f_25))
		{
			MISC::SET_BIT(&(Global_1956580.f_1), 5);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			HUD::_HIDE_HUD_COMPONENT(724769646);
			if (!MISC::IS_BIT_SET(iParam0->f_21, 4))
			{
				MISC::SET_BIT(&(iParam0->f_21), 4);
			}
		}
	}
}

int func_742(int* iParam0, var uParam1)
{
	int iVar0;
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"), false);
	iVar0 = 0;
	if (((((PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_SATCHEL_MENU")) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_JOURNAL"))) || __LIB_3__::func_63()) || __LIB_3__::func_64()) || __LIB_1__::func_499())
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		__LIB_1__::func_148(&(iParam0->f_46));
	}
	if (__LIB_0__::func_75(&(iParam0->f_46)) && !__LIB_1__::func_285(&(iParam0->f_46), 0.25f))
	{
		__LIB_3__::func_102(uParam1);
	}
	if (iVar0 == 1)
	{
		return 0;
	}
	return 1;
}

int func_743(int iParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*iParam0))
		{
			return 0;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			__LIB_1__::func_148(&(iParam1->f_18));
			return 0;
		}
		else if (__LIB_0__::func_75(&(iParam1->f_18)))
		{
			__LIB_0__::func_37(&(iParam1->f_18));
			return 0;
		}
	}
	if (!__LIB_0__::func_75(&(iParam1->f_18)))
	{
		return 1;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return 0;
		}
	}
	return __LIB_3__::func_103(&(iParam1->f_18), fParam2);
	return 1;
}

void func_744(int* iParam0, int iParam1)
{
	if (!__LIB_0__::func_272(*iParam1, 0))
	{
		return;
	}
	iParam0->f_57 = { __LIB_3__::func_114(*iParam1, Global_35, iParam0->f_26) };
	iParam0->f_57 = { iParam0->f_57 + Global_36 };
	iParam0->f_57.f_2 = (iParam0->f_57.f_2 + 10f);
}

int func_745(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (__LIB_0__::func_141(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == Global_1945938[iVar0 /*18*/].f_11 && iParam1 == Global_1945938[iVar0 /*18*/].f_4)
				{
					if (iParam3 <= Global_1945938[iVar0 /*18*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				__LIB_1__::func_578(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_746(int iParam0, int iParam1)
{
	int iVar0;
	__LIB_6__::func_647(iParam0, &(Global_40.f_4942[iParam0 /*60*/].f_11[iParam1 /*3*/]));
	if (__LIB_0__::func_30(Global_40.f_4942[iParam0 /*60*/].f_11[iParam1 /*3*/]))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < iParam1)
		{
		}
		else if (iVar0 < 9 && __LIB_0__::func_30(Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 + 1 /*3*/]))
		{
			Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 /*3*/] = Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 + 1 /*3*/];
			Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 /*3*/].f_1 = Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 + 1 /*3*/].f_1;
			Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 /*3*/].f_2 = Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 + 1 /*3*/].f_2;
			__LIB_3__::func_34(iParam0, iVar0, __LIB_3__::func_33(iParam0, iVar0 + 1));
			__LIB_3__::func_32(&(Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 + 1 /*3*/]));
			__LIB_3__::func_34(iParam0, iVar0 + 1, 0);
		}
		iVar0++;
	}
}

int func_747(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_3__::func_112(uParam0->f_1, Global_35, 1060437492 /* Float: 0.707f */);
	switch (iVar0)
	{
		case 0:
			return -700479906;
		case 3:
			return -630213949;
		case 2:
			return -630705751;
		case 1:
			return -1156705763;
		default:
			break;
	}
	return -700479906;
}

int func_748(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (bParam4 && ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = __LIB_1__::func_435(iParam1);
	}
	if (iParam3 == 0)
	{
		iParam3 = ENTITY::GET_ENTITY_MODEL(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
	}
	if (!__LIB_1__::func_540(uParam0, iParam1, 4))
	{
		if (ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_156, sParam2))
		{
			__LIB_1__::func_580(uParam0, iParam1, 4);
			return 1;
		}
		else if (iParam5 && ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_156, sParam2))
		{
			__LIB_1__::func_580(uParam0, iParam1, 4);
			return 1;
		}
	}
	return 0;
}

int func_749(int* iParam0)
{
	bool bVar0;
	if (MISC::IS_BIT_SET(*iParam0, 8))
	{
		return 1;
	}
	__LIB_3__::func_65(64);
	if (MISC::IS_BIT_SET(iParam0->f_21, 14))
	{
		if (__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && __LIB_0__::func_153(Global_35, 0, 1, 0) == joaat("WEAPON_KIT_CAMERA"))
		{
			MISC::CLEAR_BIT(&(iParam0->f_21), 14);
			MISC::CLEAR_BIT(&(iParam0->f_21), 15);
			return 0;
		}
		return 1;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 15))
	{
		if (((__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && __LIB_0__::func_153(Global_35, 0, 1, 0) == joaat("WEAPON_KIT_CAMERA")) && !__LIB_0__::func_163(Global_35, 716706914)) && !__LIB_0__::func_163(Global_35, 242628503))
		{
			WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
			TASK::TASK_SWAP_WEAPON(Global_35, 0, 0, 0, 0);
			PED::_0x2208438012482A1A(Global_35, false, false);
			__LIB_1__::func_283(&(iParam0->f_49), 0);
			MISC::SET_BIT(&(iParam0->f_21), 15);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 15))
	{
		bVar0 = __LIB_0__::func_264(&(iParam0->f_49)) >= 1.5f;
		if (!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || bVar0)
		{
			__LIB_1__::func_26(0);
			__LIB_0__::func_37(&(iParam0->f_49));
			MISC::SET_BIT(&(iParam0->f_21), 14);
			return 1;
		}
	}
	return 0;
}

void func_750(int* iParam0, var uParam1, int iParam2, float fParam3, char* sParam4)
{
	__LIB_2__::func_480(uParam1, 1, 1, 1, 0);
	__LIB_1__::func_480(iParam2);
	MISC::_0x870708A6E147A9AD(*iParam2, sParam4, fParam3, 0f, 8, 0, 0, 0, 0, -1);
}

void func_751(var uParam0, char* sParam1)
{
	struct<8> Var0;
	char cVar8[32];
	if (__LIB_0__::func_81(uParam0) == 2 && (__LIB_0__::func_1(uParam0->f_212, 16384) || __LIB_0__::func_84(uParam0, 268435456)))
	{
		Var0 = { __LIB_1__::func_589(uParam0) };
		__LIB_1__::func_590(uParam0, &Var0);
	}
	__LIB_6__::func_722(uParam0, sParam1);
	if (__LIB_0__::func_84(uParam0, 131072))
	{
		__LIB_0__::func_99(uParam0, 0);
	}
	if (__LIB_0__::func_100())
	{
		PED::SET_PED_RESET_FLAG(Global_35, 265, true);
		__LIB_0__::func_101();
	}
	if (__LIB_0__::func_102())
	{
		__LIB_1__::func_26(1);
	}
	__LIB_1__::func_737(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 32);
	__LIB_1__::func_517(uParam0, cVar8);
	__LIB_0__::func_722(1, 0);
	__LIB_1__::func_476(uParam0);
	if (__LIB_0__::func_103() && ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_156, __LIB_0__::func_731(Global_35)))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (__LIB_1__::func_503(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_148);
	}
	__LIB_1__::func_740(uParam0);
	__LIB_1__::func_591(uParam0, 1);
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_156);
	Global_43800 = uParam0->f_156;
	StringCopy(&Global_43802, sParam1, 24);
}

void func_752(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	iVar0 = __LIB_3__::func_122(iParam0);
	iVar1 = __LIB_0__::func_161(iVar0, 1);
	if (iVar1 == 39)
	{
		return;
	}
	if (__LIB_0__::func_779(iParam0) && __LIB_3__::func_105(iParam0))
	{
		iParam1 |= 64;
	}
	if (((iVar0 == 1108822547 && __LIB_0__::func_156(32768)) || Global_1946804.f_1497.f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/]) && iParam0 != Global_1946804.f_1497.f_1[iVar1 /*3*/])
	{
		if (__LIB_0__::func_779(Global_1946804.f_1497.f_1[iVar1 /*3*/]) && __LIB_3__::func_105(Global_1946804.f_1497.f_1[iVar1 /*3*/]))
		{
			iParam1 |= 32;
		}
		if (Global_1946804.f_57[iVar1 /*11*/].f_1 > 1)
		{
			iParam1 |= 16;
		}
		iVar2 = 0;
		switch (__LIB_0__::func_357(iParam0))
		{
			case 81053684:
				if (__LIB_1__::func_549(-525676072, &uVar3))
				{
					iVar2 = __LIB_0__::func_161(__LIB_0__::func_997(-525676072), 1);
					if (iVar2 == 39)
					{
					}
					else
					{
						Global_1946804.f_2377[iVar2 /*2*/] = Global_1946804.f_57[iVar2 /*11*/];
						Jump @434; //curOff = 294
						if (__LIB_0__::func_156(32768))
						{
							__LIB_0__::func_968(__LIB_0__::func_158(iVar1, 1));
						}
						if (__LIB_0__::func_156(32768) || (__LIB_1__::func_549(-2061583405, &iVar4) && !__LIB_3__::func_105(iVar4)))
						{
							PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
						}
						if (__LIB_1__::func_549(81053684, &iVar4))
						{
							iVar2 = __LIB_0__::func_161(__LIB_0__::func_997(81053684), 1);
							if (iVar2 == 39)
							{
							}
							else
							{
								Global_1946804.f_2377[iVar2 /*2*/] = Global_1946804.f_57[iVar2 /*11*/];
							}
							Global_1946804.f_2377[iVar1 /*2*/] = iParam0;
							__LIB_3__::func_16(iVar0, iParam1, 6);
						}
					}
				}
				default:
					break;
		}
	}
}

void func_753(int iParam0)
{
	int iVar0;
	__LIB_6__::func_645(&(Global_40.f_4237[iParam0 /*3*/]));
	if (__LIB_0__::func_30(Global_40.f_4237[iParam0 /*3*/]))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (iVar0 < iParam0)
		{
		}
		else if (iVar0 < 14 && __LIB_0__::func_30(Global_40.f_4237[iVar0 + 1 /*3*/]))
		{
			Global_40.f_4237[iVar0 /*3*/] = Global_40.f_4237[iVar0 + 1 /*3*/];
			Global_40.f_4237[iVar0 /*3*/].f_1 = Global_40.f_4237[iVar0 + 1 /*3*/].f_1;
			Global_40.f_4237[iVar0 /*3*/].f_2 = Global_40.f_4237[iVar0 + 1 /*3*/].f_2;
			__LIB_3__::func_89(iVar0, __LIB_3__::func_88(iVar0 + 1));
			__LIB_3__::func_32(&(Global_40.f_4237[iVar0 + 1 /*3*/]));
			__LIB_3__::func_89(iVar0 + 1, 0);
		}
		iVar0++;
	}
}

void func_754(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_156) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_156, false)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_156)) || __LIB_0__::func_84(uParam0, 512))
	{
		if (!__LIB_0__::func_1(uParam0->f_213, 128))
		{
			__LIB_3__::func_120();
		}
		return;
	}
	if ((__LIB_1__::func_540(uParam0, Global_35, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_156, __LIB_0__::func_731(Global_35)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_156, __LIB_0__::func_731(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_156))
	{
		if (!__LIB_0__::func_1(uParam0->f_213, 128))
		{
			__LIB_3__::func_120();
		}
		return;
	}
	bVar0 = true;
	iVar1 = UIFEED::_0xC17F69E1418CD11F(9);
	if (iVar1 != 0)
	{
		if (__LIB_0__::func_269(iVar1))
		{
			if (__LIB_0__::func_572(Global_43801, 0))
			{
				bVar0 = false;
			}
		}
	}
	bVar2 = false;
	if (__LIB_0__::func_1(uParam0->f_213, 512))
	{
		bVar2 = true;
	}
	if (__LIB_4__::func_711(bVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_156);
		__LIB_3__::func_120();
	}
}

void func_755(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_3__::func_37(iParam0, iParam1);
	if ((Global_40.f_4942[iParam0 /*60*/].f_3 == iVar0 && Global_1360165[iParam0 /*1157*/].f_63 == iVar0) && CLOCK::GET_CLOCK_HOURS() >= 6)
	{
		__LIB_1__::func_288(iParam0, __LIB_1__::func_291(iParam0, iParam1, 1, 1), 0);
	}
}

bool func_756(int iParam0, float fParam1)
{
	if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_757(int iParam0)
{
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_35, 1, 1))
	{
		if ((WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, joaat("WEAPON_THROWN_DYNAMITE"), 100) || WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, joaat("WEAPON_THROWN_DYNAMITE"), 100)) || WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, joaat("WEAPON_THROWN_MOLOTOV"), 100))
		{
			return true;
		}
	}
	ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
	return false;
}

Vector3 func_758(int iParam0)
{
	if (!__LIB_6__::func_706(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return Global_1392388.f_10[iParam0 /*13*/].f_5;
}

bool func_759(int iParam0)
{
	if (!__LIB_6__::func_706(iParam0))
	{
		return false;
	}
	return Global_40.f_9146.f_4[iParam0] == 1;
}

bool func_760(int iParam0)
{
	struct<6> Var0;
	SCRIPTS::REQUEST_SCRIPT("coachrobberies");
	if (SCRIPTS::HAS_SCRIPT_LOADED("coachrobberies"))
	{
		Var0.f_3 = iParam0;
		Var0.f_4 = Global_1392388.f_10[iParam0 /*13*/].f_10;
		Var0.f_5 = Global_1392388.f_10[iParam0 /*13*/].f_11;
		Var0.f_2 = Global_40.f_9146.f_64[iParam0];
		Var0 = Global_40.f_9146.f_19[iParam0];
		Var0.f_1 = Global_40.f_9146.f_34[iParam0];
		Global_1392388.f_1 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS("coachrobberies", &Var0, 6, 7300);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("coachrobberies");
		return true;
	}
	return false;
}

void func_761(var uParam0, float fParam1)
{
	uParam0->f_8 = fParam1;
}

void func_762(var uParam0, int iParam1)
{
	int iVar0[1];
	if (CAM::_0xDD0B7C5AE58F721D(uParam0) && !CAM::_0x927B810E43E99932(uParam0))
	{
		CAM::_0xB8B207C34285E978(uParam0);
		iVar0[0] = iParam1;
		CAM::_0xFEB8646818294C75(uParam0, &iVar0);
	}
}

void func_763(int iParam0, char* sParam1)
{
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0, sParam1, true);
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0, false))
	{
		ANIMSCENE::START_ANIM_SCENE(iParam0);
	}
}

bool func_764(int iParam0)
{
	if (!__LIB_6__::func_706(iParam0))
	{
		return false;
	}
	return Global_40.f_9146.f_4[iParam0] == 2;
}

void func_765(int iParam0, bool bParam1)
{
	int iVar0;
	if (iParam0 == -1)
	{
		return;
	}
	switch (Global_40.f_9536[iParam0])
	{
		case -1:
			Global_40.f_9536[iParam0] = 0;
			if (bParam1)
			{
				iVar0 = __LIB_6__::func_709();
				if (iVar0 != -1)
				{
					if (Global_40.f_9479[iVar0 /*4*/].f_1 == -1)
					{
						Global_40.f_9479[iVar0 /*4*/].f_1 = iParam0;
					}
					else if (Global_40.f_9479[iVar0 /*4*/].f_2 == -1)
					{
						Global_40.f_9479[iVar0 /*4*/].f_2 = iParam0;
					}
					else
					{
						Global_40.f_9479[iVar0 /*4*/].f_2 = Global_40.f_9479[iVar0 /*4*/].f_1;
						Global_40.f_9479[iVar0 /*4*/].f_1 = iParam0;
					}
				}
			}
			break;
		case 0:
			break;
		case 1:
			break;
	}
}

void func_766()
{
	__LIB_0__::func_635(1);
}

void func_767()
{
	__LIB_1__::func_579(128);
}

bool func_768(int iParam0, vector3 vParam1, char* sParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	struct<2> Var18;
	vector3 vVar21;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (__LIB_0__::func_86(vParam1))
	{
		return false;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam4))
	{
		return false;
	}
	vVar6 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	if (TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam4, &iVar2))
	{
	}
	if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sParam4, vVar6, &iVar0))
	{
	}
	if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sParam4, vParam1, &iVar1))
	{
	}
	if (iVar0 == iVar1)
	{
		if (TASK::WAYPOINT_RECORDING_GET_COORD(sParam4, iVar0, &vVar9))
		{
			fVar3 = BUILTIN::VDIST(vVar6, vVar9);
		}
		if (TASK::WAYPOINT_RECORDING_GET_COORD(sParam4, iVar1, &vVar12))
		{
			fVar4 = BUILTIN::VDIST(vParam1, vVar12);
		}
		if (fVar3 >= fParam5)
		{
			return false;
		}
		if (fVar4 >= fParam5)
		{
			return true;
		}
		if (iVar0 == (iVar2 - 1))
		{
			if (TASK::WAYPOINT_RECORDING_GET_COORD(sParam4, iVar0, &vVar15))
			{
			}
			if (TASK::WAYPOINT_RECORDING_GET_COORD(sParam4, (iVar0 - 1), &Var18))
			{
			}
			vVar21 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar15, MISC::GET_HEADING_FROM_VECTOR_2D((vVar15.x - Var18), (vVar15.y - Var18.f_1)), 0f, (fParam5 + 1f), 0f) };
			vVar15 = { vVar21 };
		}
		else
		{
			if (iVar0 == 0)
			{
			}
			TASK::WAYPOINT_RECORDING_GET_COORD(sParam4, iVar0 + 1, &vVar15);
		}
		fVar5 = __LIB_1__::func_507(vParam1 - vVar6, vVar15 - vVar6);
		if (fVar5 < 0f)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 > iVar1)
	{
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_769(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]) && DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
	{
		return true;
	}
	if ((((((((((((((((__LIB_5__::func_260(iParam0, 1) || __LIB_5__::func_260(iParam0, 128)) || __LIB_5__::func_260(iParam0, 256)) || __LIB_5__::func_260(iParam0, 512)) || __LIB_5__::func_260(iParam0, 1024)) || __LIB_5__::func_260(iParam0, 2048)) || __LIB_5__::func_260(iParam0, 4096)) || __LIB_5__::func_260(iParam0, 65536)) || __LIB_5__::func_260(iParam0, 16384)) || __LIB_5__::func_260(iParam0, 262144)) || __LIB_5__::func_260(iParam0, 524288)) || __LIB_5__::func_260(iParam0, 1048576)) || __LIB_5__::func_260(iParam0, 2097152)) || __LIB_5__::func_260(iParam0, 32768)) || __LIB_5__::func_260(iParam0, 131072)) || __LIB_5__::func_260(iParam0, 134217728)) || __LIB_5__::func_260(iParam0, 1073741824 /* Float: 2f */))
	{
		return true;
	}
	return false;
}

void func_770(int iParam0)
{
	int iVar0;
	int iVar1;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0, iVar0);
		if (__LIB_0__::func_272(iVar1, 1))
		{
			TASK::CLEAR_PED_TASKS(iVar1, true, false);
			TASK::CLEAR_PED_SECONDARY_TASK(iVar1);
		}
		iVar0++;
	}
}

bool func_771(var uParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	var uVar0;
	var uVar3;
	var uVar6;
	uParam0->f_4 = 0;
	switch (*uParam0)
	{
		case 0:
			__LIB_4__::func_416(uParam0);
			uParam0->f_1 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, vParam4, 83, iParam7, 7);
			SHAPETEST::_0x04AA59CA40571C2E(uParam0->f_1, 15);
			*uParam0 = 1;
			break;
		case 1:
			if (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_1, &(uParam0->f_2), &uVar0, &uVar3, &uVar6) == 2)
			{
				if (uParam0->f_2 == 0)
				{
					*uParam0 = 3;
					return true;
				}
				else
				{
					uParam0->f_4 = 1;
					*uParam0 = 0;
					return false;
				}
			}
			else if (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_1, &(uParam0->f_2), &uVar0, &uVar3, &uVar6) == 0)
			{
				*uParam0 = 3;
			}
			break;
		case 3:
			*uParam0 = 0;
			break;
	}
	return false;
}

void func_772()
{
	int iVar0;
	iVar0 = __LIB_0__::func_23();
	if (__LIB_0__::func_923(iVar0))
	{
		CLOCK::SET_CLOCK_TIME(__LIB_0__::func_41(iVar0), __LIB_0__::func_42(iVar0), __LIB_0__::func_43(iVar0));
	}
}

int func_773(int iParam0)
{
	char[] cVar0[8];
	StringCopy(&cVar0, __LIB_6__::func_714(iParam0), 8);
	return MISC::GET_HASH_KEY(&cVar0);
}

bool func_774(int iParam0)
{
	if (__LIB_0__::func_272(iParam0, 1))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam0, 0))
		{
			return true;
		}
	}
	return false;
}

void func_775()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (!__LIB_0__::func_28())
	{
		return;
	}
	__LIB_6__::func_695(&(Global_40.f_40));
}

int func_776(int iParam0, int iParam1, vector3 vParam2, var uParam5, float fParam6)
{
	int iVar0;
	if (*uParam5 != 5)
	{
		if (__LIB_6__::func_702(2048))
		{
			*uParam5 = 5;
		}
	}
	switch (*uParam5)
	{
		case 0:
			if (!__LIB_0__::func_75(&(uParam5->f_1)))
			{
				uParam5->f_4 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
				__LIB_1__::func_148(&(uParam5->f_1));
			}
			else if (__LIB_0__::func_265(&(uParam5->f_1)) >= fParam6)
			{
				if (__LIB_0__::func_71(iParam0))
				{
					*uParam5 = 3;
				}
				else if (__LIB_0__::func_665(iParam0, iParam1, 1, 1) < 30f)
				{
					*uParam5 = 2;
				}
				else
				{
					TASK::CLEAR_PED_TASKS(iParam0, true, false);
					__LIB_1__::func_326(iParam0, 869278708, joaat("UNSPECIFIED"));
					__LIB_1__::func_148(&(uParam5->f_1));
					uParam5->f_7 = 1;
					if (__LIB_0__::func_272(iParam1, 0))
					{
						TASK::TASK_GO_TO_WHISTLE(iParam1, iParam0, 0);
					}
					*uParam5 = 2;
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_71(iParam0))
			{
				if (__LIB_0__::func_272(iParam1, 0))
				{
					if (uParam5->f_7)
					{
						if (!__LIB_0__::func_163(iParam1, 2043986356))
						{
							TASK::TASK_GO_TO_WHISTLE(iParam1, iParam0, 0);
						}
					}
					if (!__LIB_0__::func_163(iParam0, -859057915))
					{
						if ((uParam5->f_7 && __LIB_0__::func_665(iParam0, iParam1, 1, 1) > 20f) && __LIB_0__::func_265(&(uParam5->f_1)) < 10f)
						{
							if (!__LIB_0__::func_163(iParam0, 1868526510))
							{
								TASK::TASK_MOUNT_ANIMAL(iParam0, iParam1, -1, -1, 1f, 1, 0, 0);
							}
						}
						else
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							TASK::TASK_MOUNT_ANIMAL(0, iParam1, -1, -1, 2f, 1, 0, 0);
							TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vParam2, 1073741824 /* Float: 2f */, 2.5f, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(iVar0);
							TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
							TASK::CLEAR_SEQUENCE_TASK(&iVar0);
							PED::SET_PED_KEEP_TASK(iParam0, true);
							*uParam5 = 5;
						}
					}
				}
			}
			else
			{
				*uParam5 = 3;
			}
			break;
		case 3:
			__LIB_1__::func_148(&(uParam5->f_1));
			TASK::_TASK_MOVE_IN_TRAFFIC_2(iParam0, vParam2, 1073741824 /* Float: 2f */, 2.5f, 0, 0);
			PED::SET_PED_KEEP_TASK(iParam0, true);
			*uParam5 = 5;
			break;
		case 5:
			return 1;
	}
	return 0;
}

void func_777(int iParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6)
{
	if (!__LIB_6__::func_706(iParam0))
	{
		return;
	}
	if (!__LIB_0__::func_20(iParam1))
	{
		return;
	}
	if (__LIB_0__::func_86(vParam3))
	{
		return;
	}
	if (__LIB_0__::func_86(vParam6))
	{
		return;
	}
	Global_1392388.f_10[iParam0 /*13*/].f_1 = iParam1;
	Global_1392388.f_10[iParam0 /*13*/] = iParam2;
	Global_1392388.f_10[iParam0 /*13*/].f_2 = { vParam3 };
	Global_1392388.f_10[iParam0 /*13*/].f_5 = { vParam6 };
	if (__LIB_6__::func_708(iParam0))
	{
		Global_1392388.f_10[iParam0 /*13*/].f_8 = __LIB_1__::func_293(3, iParam0, 2, __LIB_6__::func_712(iParam0));
	}
}

void func_778(int iParam0)
{
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	__LIB_1__::func_242(iParam0, 0);
}

void func_779(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_1__::func_22(iVar0))
		{
			__LIB_6__::func_725(iVar0, bParam1, bParam2, bParam0, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
		}
		iVar0++;
	}
}

void func_780(var uParam0, int iParam1)
{
	if (uParam0->f_8 > 0f && uParam0->f_14 == 1)
	{
		__LIB_6__::func_725(iParam1, 0, 0, 0, uParam0->f_8, 1, 1, 0, 0, 0, 0);
	}
	else
	{
		AUDIO::STOP_PED_SPEAKING(__LIB_0__::func_271(iParam1), false);
		__LIB_6__::func_725(iParam1, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	}
}

void func_781(int iParam0)
{
	if (!__LIB_6__::func_706(iParam0))
	{
		return;
	}
	Global_40.f_9146.f_4[iParam0] = 2;
	if (!__LIB_6__::func_708(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_746(Global_1392388.f_10[iParam0 /*13*/].f_8) != 1)
	{
		__LIB_1__::func_559(Global_1392388.f_10[iParam0 /*13*/].f_8, 0, 2);
		__LIB_1__::func_298(Global_1392388.f_10[iParam0 /*13*/].f_8, 1);
	}
	__LIB_1__::func_821(Global_1392388.f_10[iParam0 /*13*/].f_8, 1, 1);
	if (__LIB_0__::func_746(Global_1392388.f_10[iParam0 /*13*/].f_8) != 4)
	{
		__LIB_0__::func_7(&Global_1935630, 16);
	}
}

void func_782(var uParam0, char* sParam1)
{
	var uVar0;
	struct<5> Var1;
	var uVar6;
	char cVar7[64];
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_34)))
	{
		__LIB_2__::func_312(MISC::GET_HASH_KEY(&(uParam0->f_34)), 1, 0, 0);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_67)))
	{
		if (HUD::_DOES_TEXT_DATABASE_EXIST(&(uParam0->f_67)))
		{
			HUD::_TEXT_DATABASE_REQUEST(&(uParam0->f_67));
		}
	}
	HUD::_TEXT_DATABASE_REQUEST("CMPI");
	Var1 = Global_1359489.f_21;
	Var1.f_2 = 429892159;
	Var1.f_3 = __LIB_3__::func_38(__LIB_0__::func_317());
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var1.f_1), &Var1))
	{
		Var1.f_3 = uParam0->f_9;
		if (__LIB_3__::func_39(Var1, -972717455, &uVar0, 0))
		{
			sParam1->f_471 = uVar0;
		}
		Var1.f_3 = uParam0->f_9;
		if (__LIB_3__::func_39(Var1, -1140954353, &uVar6, 0))
		{
			sParam1->f_472 = uVar6;
		}
		else
		{
			sParam1->f_472 = -1;
		}
		Var1.f_3 = uParam0->f_9;
		Var1.f_4 = joaat("INVITE");
		if (__LIB_3__::func_40(Var1, -2047775528, &(sParam1->f_17), 0))
		{
			if (__LIB_3__::func_41(Var1, -1102408038, &(sParam1->f_375), 0))
			{
				__LIB_3__::func_42(Var1, -1750702392, &(sParam1->f_378), 0);
			}
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(&(sParam1->f_17), "CASEN_DRNK1"))
	{
		__LIB_1__::func_481(&(sParam1->f_35), "CASEN_DRNK1");
	}
	if (MISC::ARE_STRINGS_EQUAL(&(sParam1->f_17), "CAHSH_FSH3"))
	{
		__LIB_1__::func_481(&(sParam1->f_35), "CAHSH_FSH3");
	}
	if (MISC::ARE_STRINGS_EQUAL(&(sParam1->f_17), "PRHM6_INT"))
	{
		__LIB_0__::func_88(&(sParam1->f_35), 8388608);
		if (__LIB_0__::func_317() == 1)
		{
			StringCopy(&cVar7, "HorseshoeCamp", 64);
			__LIB_1__::func_481(&(sParam1->f_35), &cVar7);
			__LIB_0__::func_88(&(sParam1->f_35), 134217728);
		}
		else if (__LIB_0__::func_317() == 2)
		{
			StringCopy(&cVar7, "ClemensCamp", 64);
			__LIB_6__::func_729(&(sParam1->f_35), cVar7);
		}
	}
}

void func_783(int iParam0)
{
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	__LIB_6__::func_732(iParam0, __LIB_0__::func_340(iParam0) + 1);
}

bool func_784(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return false;
	}
	if (!__LIB_6__::func_311(iParam0, iParam1, &iVar0, &bVar1))
	{
		return false;
	}
	if (bVar1)
	{
		return Global_40.f_4942[iParam0 /*60*/].f_8.f_2;
	}
	return Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 /*3*/].f_2;
}

void func_785(int* iParam0, var uParam1, int iParam2, bool bParam3, char* sParam4, float fParam5)
{
	float fVar0;
	if (ENTITY::IS_ENTITY_DEAD(*iParam2))
	{
		return;
	}
	fVar0 = __LIB_0__::func_514(fParam5 >= 0f, fParam5, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam2, true, false)));
	if ((fVar0 >= (iParam0->f_26 + 0.5f) && MISC::IS_BIT_SET(iParam0->f_21, 20)) && MISC::IS_BIT_SET(*iParam0, 18))
	{
		if (!__LIB_0__::func_163(Global_35, -875674219))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, *iParam2, 5000, -1f, -1f, -1f);
		}
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 0f);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 5))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 175, bParam3);
	}
	PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	if (bParam3 == 0)
	{
		__LIB_6__::func_740(iParam0, uParam1, iParam2, sParam4);
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 5))
	{
		PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), *iParam2, "ForcedILO", 0f, 0f, 0f, *iParam2, 0);
		MISC::SET_BIT(&(iParam0->f_21), 5);
	}
}

void func_786(int* iParam0, bool bParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	__LIB_0__::func_37(&(iParam0->f_18));
	if (bParam1)
	{
		iParam0->f_21 = 0;
		iParam0->f_25 = 0f;
		iParam0->f_26 = 30f;
		iParam0->f_27 = 1.25f;
		iParam0->f_29 = 10f;
		iParam0->f_30 = 50f;
		iParam0->f_31 = 30f;
		iParam0->f_32 = 21f;
		iParam0->f_33 = 20f;
		iParam0->f_34 = 5f;
		iParam0->f_28 = 0;
		iParam0->f_60 = 0;
		iParam0->f_57 = { 0f, 0f, 0f };
		iParam0->f_55 = 0;
		__LIB_0__::func_37(&(iParam0->f_22));
		__LIB_0__::func_37(&(iParam0->f_37));
		__LIB_0__::func_37(&(iParam0->f_40));
		__LIB_0__::func_37(&(iParam0->f_43));
		__LIB_0__::func_37(&(iParam0->f_49));
		__LIB_0__::func_37(&(iParam0->f_52));
		__LIB_6__::func_737(iParam0);
		__LIB_3__::func_97(iParam0);
		if (MAP::DOES_BLIP_EXIST(iParam0->f_56))
		{
			MAP::REMOVE_BLIP(&(iParam0->f_56));
		}
	}
}

bool func_787(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return __LIB_6__::func_254(iParam1);
	}
	return __LIB_6__::func_328(iParam0, iParam1);
}

int func_788(int iParam0)
{
	int iVar0;
	if (__LIB_6__::func_733(iParam0))
	{
		return 0;
	}
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return 0;
	}
	iVar0 = -1;
	if (!__LIB_3__::func_87(iParam0, &iVar0))
	{
		return 0;
	}
	if (__LIB_6__::func_254(iParam0))
	{
	}
	if (PED::_0x1E017404784AA6A3(Global_35, iParam0))
	{
		__LIB_6__::func_259(iParam0, 1);
		return 1;
	}
	return 0;
}

bool func_789(int* iParam0, int iParam1)
{
	vector3 vVar0;
	if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		return true;
	}
	if (!PED::_IS_PED_CARRYING(Global_35) && !__LIB_0__::func_163(Global_35, -208384378))
	{
		if (!MISC::IS_BIT_SET(iParam0->f_21, 19) && MISC::IS_BIT_SET(iParam0->f_21, 4))
		{
			vVar0 = { iParam0->f_57 };
			iParam0->f_57 = { __LIB_3__::func_114(*iParam1, Global_35, 2.5f) };
			iParam0->f_57 = { iParam0->f_57 + Global_36 };
			iParam0->f_57.f_2 = (iParam0->f_57.f_2 + 3f);
			__LIB_1__::func_338(iParam0->f_60, iParam0->f_57);
			iParam0->f_57 = { vVar0 };
			MISC::SET_BIT(&(iParam0->f_21), 19);
		}
		return true;
	}
	else if (PED::_IS_PED_CARRYING(Global_35) && !__LIB_0__::func_163(Global_35, -208384378))
	{
		if (__LIB_3__::func_417(Global_35))
		{
			iParam0->f_60 = __LIB_0__::func_147();
		}
		else
		{
			iParam0->f_60 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_60))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iParam0->f_60, Global_36, 2f, 9);
		}
	}
	return false;
}

int func_790(int* iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_60) || !__LIB_0__::func_272(*iParam1, 0))
	{
		return 1;
	}
	if ((ENTITY::IS_ENTITY_ON_SCREEN(iParam0->f_60) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0->f_60)) && iParam2 == 0)
	{
		return 0;
	}
	if (__LIB_0__::func_86(iParam0->f_57))
	{
		__LIB_6__::func_744(iParam0, iParam1);
	}
	__LIB_1__::func_338(iParam0->f_60, iParam0->f_57);
	iParam0->f_57 = { 0f, 0f, 0f };
	iParam0->f_60 = 0;
	return 0;
}

bool func_791(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bParam3)
	{
		if (__LIB_3__::func_31(iParam0, iParam1, iParam2))
		{
			if (iParam4 > 0 || iParam5 > 0)
			{
				iVar0 = __LIB_0__::func_23();
				__LIB_1__::func_446(&iVar0, 0, iParam4, iParam5, 0, 0, 0, 1);
				Global_40.f_4942[iParam0 /*60*/].f_11[*iParam2 /*3*/].f_1 = iVar0;
			}
			else
			{
				Global_40.f_4942[iParam0 /*60*/].f_11[*iParam2 /*3*/].f_1 = -15;
			}
			return true;
		}
	}
	*iParam2 = 0;
	*iParam2 = 0;
	while (*iParam2 < 10)
	{
		if (!__LIB_0__::func_30(Global_40.f_4942[iParam0 /*60*/].f_11[*iParam2 /*3*/]))
		{
			iVar1 = -15;
			if (iParam4 > 0 || iParam5 > 0)
			{
				iVar1 = __LIB_0__::func_23();
				__LIB_1__::func_446(&iVar1, 0, iParam4, iParam5, 0, 0, 0, 1);
			}
			Global_40.f_4942[iParam0 /*60*/].f_11[*iParam2 /*3*/] = iParam1;
			Global_40.f_4942[iParam0 /*60*/].f_11[*iParam2 /*3*/].f_1 = iVar1;
			Global_40.f_4942[iParam0 /*60*/].f_11[*iParam2 /*3*/].f_2 = 0;
			return true;
		}
		*iParam2++;
	}
	__LIB_6__::func_746(iParam0, 0);
	*iParam2 = 9;
	iVar2 = -15;
	if (iParam4 > 0 || iParam5 > 0)
	{
		iVar2 = __LIB_0__::func_23();
		__LIB_1__::func_446(&iVar2, 0, iParam4, iParam5, 0, 0, 0, 1);
	}
	Global_40.f_4942[iParam0 /*60*/].f_11[*iParam2 /*3*/] = iParam1;
	Global_40.f_4942[iParam0 /*60*/].f_11[*iParam2 /*3*/].f_1 = iVar2;
	Global_40.f_4942[iParam0 /*60*/].f_11[*iParam2 /*3*/].f_2 = 0;
	return true;
}

void func_792(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;
	if (__LIB_0__::func_139(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		__LIB_1__::func_748(&(iParam1->f_6), 0, 1);
	}
	if (!__LIB_0__::func_139(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (__LIB_1__::func_502(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = __LIB_6__::func_745(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (__LIB_0__::func_139(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					__LIB_2__::func_369(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					__LIB_1__::func_522(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						__LIB_1__::func_523(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						__LIB_1__::func_483(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					__LIB_1__::func_522(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					__LIB_1__::func_221(iParam1->f_6, 0, 1);
				}
				else
				{
					__LIB_1__::func_221(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_793(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	if (!__LIB_0__::func_30(iParam1))
	{
		return;
	}
	iVar0 = -1;
	bVar1 = false;
	if (__LIB_6__::func_311(iParam0, iParam1, &iVar0, &bVar1))
	{
		if (bVar1)
		{
			__LIB_6__::func_647(iParam0, &(Global_40.f_4942[iParam0 /*60*/].f_8));
		}
		if (iVar0 != -1)
		{
			__LIB_6__::func_746(iParam0, iVar0);
		}
	}
}

bool func_794(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (Global_1391438.f_1)
	{
		return true;
	}
	uParam0->f_98++;
	if (uParam0->f_98 < 10)
	{
		return false;
	}
	uParam0->f_98 = 0;
	if (__LIB_0__::func_296(0, 1, 1) && !__LIB_1__::func_44(uParam0->f_10))
	{
		return true;
	}
	if (bParam4)
	{
		if ((__LIB_0__::func_699(*uParam0) && !__LIB_3__::func_93(*uParam0, Global_1391438.f_206[0], 0)) && !__LIB_3__::func_93(*uParam0, Global_1391438.f_206[1], 0))
		{
			return true;
		}
	}
	if (__LIB_0__::func_592() != 1)
	{
		return true;
	}
	if (__LIB_0__::func_287(*uParam0, 29, 1))
	{
		return true;
	}
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return true;
	}
	if (bParam2)
	{
		if (!__LIB_0__::func_272(__LIB_0__::func_271(*uParam0), 0))
		{
			*bParam1 = 1;
		}
	}
	if (uParam0->f_9 == joaat("HAI_FIVE_FINGER_FILLET_01") || uParam0->f_9 == joaat("HAI_FIVE_FINGER_FILLET_02"))
	{
		if (__LIB_0__::func_492(1) < 10)
		{
			return true;
		}
	}
	if (__LIB_0__::func_272(uParam0->f_1, 0) && PED::_0x331550B212014B92(uParam0->f_1, Global_35))
	{
		return true;
	}
	if (__LIB_0__::func_190())
	{
		return true;
	}
	if (bParam3)
	{
		if (__LIB_0__::func_12() != __LIB_0__::func_61())
		{
			*bParam1 = 1;
		}
		if (!__LIB_0__::func_86(uParam0->f_14) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_14, true) > 200f)
		{
			*bParam1 = 1;
		}
	}
	if (((!__LIB_6__::func_734(&(uParam0->f_78)) && !uParam0->f_78.f_15) && !__LIB_1__::func_198(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"), 1)) && !__LIB_1__::func_198(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), 1))
	{
		__LIB_0__::func_11("Time window expired for ", 0, 1);
		__LIB_0__::func_11(" - Cancelling launch.", 1, 0);
		*bParam1 = 0;
		return true;
	}
	if (bParam5)
	{
		if (!__LIB_0__::func_86(uParam0->f_14))
		{
			if (__LIB_1__::func_261(uParam0->f_14, 6f, 4, 1))
			{
				__LIB_0__::func_11("A lock volume now blocks ", 0, 1);
				__LIB_0__::func_11(" - Cancelling launch.", 1, 0);
				*bParam1 = 0;
				return true;
			}
		}
	}
	if (*bParam1)
	{
		return true;
	}
	return false;
}

bool func_795(var uParam0)
{
	if (!__LIB_0__::func_272(uParam0->f_1, 0))
	{
		return false;
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_33))
	{
		if ((((!PED::_0x68821369A2CEADD5(uParam0->f_1, __LIB_6__::func_747(uParam0)) && !__LIB_0__::func_750(&(uParam0->f_31), 64)) && !STREAMING::_0x99F92061EFE908BA()) && !__LIB_0__::func_1(Global_1935630, 16384)) && uParam0->f_6)
		{
			uParam0->f_6 = 0;
			__LIB_0__::func_63(&(uParam0->f_31), 64, 1);
			PED::_0xD65FDC686A031C83(uParam0->f_1, __LIB_6__::func_747(uParam0), 0.5f);
		}
		else if (__LIB_0__::func_750(&(uParam0->f_31), 64))
		{
			if (!__LIB_0__::func_163(uParam0->f_1, -2017877118))
			{
				__LIB_0__::func_63(&(uParam0->f_31), 64, 0);
				return true;
			}
		}
	}
	return false;
}

int func_796(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5)
{
	return __LIB_6__::func_748(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5);
}

bool func_797(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar10;
	iVar0 = 1;
	if (__LIB_0__::func_30(sParam1->f_471))
	{
		if (Global_1391438.f_594 == sParam1->f_471)
		{
			Global_1391438.f_594 = __LIB_1__::func_976();
		}
		if (!STREAMING::_IS_IMAP_ACTIVE(sParam1->f_471))
		{
			if (((!STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(sParam1->f_471, Global_36) || __LIB_0__::func_750(&(Global_1391438.f_5), 8)) || __LIB_0__::func_13(32768)) || CAM::IS_SCREEN_FADED_OUT())
			{
				STREAMING::_REQUEST_IMAP(sParam1->f_471);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_34)))
	{
		if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_33))
		{
			iVar1 = MISC::GET_HASH_KEY(&(uParam0->f_34));
			uParam0->f_33 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(uParam0->f_14, iVar1, 1f, 0, false);
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_33))
			{
				uParam0->f_33 = __LIB_3__::func_44(iVar1, uParam0->f_14, uParam0->f_17, 2f, -1f, 0);
				iVar0 = 0;
			}
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(sParam1->f_17)))
	{
	}
	__LIB_1__::func_772(&(sParam1->f_35), PLAYER::PLAYER_PED_ID(), sParam1, 0, 0, 0);
	iVar10 = 0;
	while (iVar10 < 27)
	{
		if (__LIB_1__::func_482(iVar10, &(uParam0->f_3)))
		{
			if (__LIB_6__::func_738(uParam0, &uVar2, iVar10))
			{
				if (__LIB_0__::func_272(__LIB_0__::func_271(iVar10), 0))
				{
					__LIB_1__::func_772(&(sParam1->f_35), __LIB_0__::func_271(iVar10), &uVar2, 0, 0, 0);
				}
			}
		}
		iVar10++;
	}
	__LIB_6__::func_730(&(sParam1->f_35), 50f);
	__LIB_6__::func_731(&(sParam1->f_35), 75f);
	if (!__LIB_0__::func_86(sParam1->f_375))
	{
		__LIB_0__::func_487(&(sParam1->f_35), sParam1->f_375);
	}
	return iVar0;
}

void func_798(var uParam0, int* iParam1, var uParam2, float fParam3)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return;
	}
	__LIB_6__::func_739(uParam0, iParam1);
	fVar0 = __LIB_0__::func_514(fParam3 >= 0f, fParam3, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
	if (fVar0 <= iParam1->f_26 || MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		__LIB_6__::func_742(iParam1, uParam2);
		__LIB_6__::func_749(iParam1);
		__LIB_3__::func_113(iParam1);
		if (!MISC::IS_BIT_SET(*iParam1, 17))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (!PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), iParam1->f_27);
				}
				else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID())))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), iParam1->f_27);
				}
			}
		}
		__LIB_1__::func_538(0);
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::GET_PLAYER_INDEX());
		PED::SET_PED_RESET_FLAG(Global_35, 25, true);
		PED::SET_PED_RESET_FLAG(Global_35, 134, true);
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		if (!MISC::IS_BIT_SET(iParam1->f_21, 2))
		{
			if (!VOLUME::_DOES_VOLUME_EXIST(iParam1->f_35))
			{
				iParam1->f_35 = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), 0f, 0f, 0f, iParam1->f_26, iParam1->f_26, 20f);
			}
			else
			{
				__LIB_3__::func_58(iParam1->f_35, 0, 0);
				MISC::SET_BIT(&(iParam1->f_21), 2);
			}
		}
		if ((PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && MISC::IS_BIT_SET(*iParam1, 16)) || (PED::IS_PED_ON_MOUNT(Global_35) && MISC::IS_BIT_SET(*iParam1, 15)))
		{
			iVar1 = 0;
			if (__LIB_3__::func_112(Global_35, *uParam0, 1f) == 3)
			{
				iVar1 = 131072;
			}
			else
			{
				iVar1 = 262144;
			}
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				iParam1->f_28 = PED::GET_MOUNT(Global_35);
			}
			bVar2 = (((PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && MISC::IS_BIT_SET(*iParam1, 16)) || (PED::IS_PED_ON_MOUNT(Global_35) && MISC::IS_BIT_SET(*iParam1, 15))) && !STREAMING::_0x99F92061EFE908BA());
			bVar3 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, false);
			__LIB_1__::func_694(Global_35, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), bVar2, iParam1->f_30, iParam1->f_31, iParam1->f_32, __LIB_0__::func_514(bVar3, iParam1->f_33, iParam1->f_34), 0, 1, 0, iVar1);
		}
		else if (((((MISC::IS_BIT_SET(*iParam1, 15) && !PED::IS_PED_ON_MOUNT(Global_35)) && __LIB_0__::func_272(iParam1->f_28, 0)) && __LIB_0__::func_48(Global_35, iParam1->f_28, (iParam1->f_26 + 1.75f), 1)) && !__LIB_0__::func_163(iParam1->f_28, 518218985)) && !__LIB_0__::func_163(iParam1->f_28, 242628503))
		{
			TASK::CLEAR_PED_TASKS(iParam1->f_28, true, false);
			TASK::TASK_SMART_FLEE_COORD(iParam1->f_28, Global_36, (iParam1->f_26 + 1.75f), -1, 256, 0.101f);
			iParam1->f_28 = 0;
		}
	}
}

void func_799(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_30(iParam0))
	{
		return;
	}
	iVar0 = -1;
	if (__LIB_3__::func_87(iParam0, &iVar0))
	{
		__LIB_6__::func_753(iVar0);
	}
}

int func_800()
{
	int iVar0;
	int iVar1;
	if (!__LIB_1__::func_610(&iVar0))
	{
		return 0;
	}
	PED::_0x2208438012482A1A(Global_35, false, false);
	PED::_0xC494C76A34266E82(Global_35, 13);
	iVar1 = __LIB_3__::func_122(iVar0);
	if (iVar1 == -358215195)
	{
		return 0;
	}
	__LIB_6__::func_752(Global_1946804.f_57[__LIB_0__::func_161(iVar1, 1) /*11*/], 8);
	__LIB_1__::func_452(26, 0, 0, 0, 0);
	return 1;
}

bool func_801()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_1__::func_516())
	{
		return false;
	}
	if (!__LIB_1__::func_610(&iVar0))
	{
		return false;
	}
	if (!__LIB_3__::func_629(iVar0))
	{
		return false;
	}
	iVar1 = __LIB_3__::func_122(iVar0);
	if (iVar1 == -358215195)
	{
		return false;
	}
	__LIB_1__::func_683(&iVar2, 1);
	return __LIB_3__::func_630(iVar0, iVar2);
}

void func_802(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		__LIB_5__::func_430(&(uParam0->f_213), uParam0->f_224);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_1__::func_597(uParam0);
	__LIB_1__::func_747(uParam0, 1);
	__LIB_1__::func_594(uParam0);
	__LIB_1__::func_520(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_1__::func_521(uParam0, 4);
	__LIB_1__::func_595(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_1__::func_476(uParam0);
	__LIB_0__::func_37(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_156) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_156))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_156);
	}
	__LIB_4__::func_797(!__LIB_0__::func_1(uParam0->f_213, 128));
	if (!__LIB_0__::func_1(uParam0->f_213, 128))
	{
		__LIB_3__::func_120();
	}
}

bool func_803()
{
	int iVar0;
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false) && iVar0 != joaat("WEAPON_UNARMED"))
	{
		return true;
	}
	return false;
}

bool func_804(int iParam0)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return true;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return true;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!__LIB_0__::func_205(iParam0, iVar0))
	{
		return true;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

bool func_805(int iParam0, char* sParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(iParam0, true) && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0, true, false))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(iParam0);
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0, true, false))
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return true;
	}
	if (!ANIMSCENE::_0xA9016536015DE29D(iParam0, sParam1))
	{
		return false;
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
	{
		return true;
	}
	if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0, sParam1))
	{
		if (ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sParam1))
		{
		}
	}
	return false;
}

void func_806()
{
	__LIB_5__::func_833(128);
}

void func_807(int iParam0, char* sParam1, char* sParam2, float fParam3)
{
	int iVar0;
	iVar0 = 4;
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, __LIB_6__::func_773(iParam0)))
	{
		return;
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(iVar0, __LIB_6__::func_773(iParam0), MISC::GET_HASH_KEY(sParam1), sParam2, fParam3 >= 0.9f, false, false);
}

void func_808(int iParam0, float fParam1)
{
	if (__LIB_6__::func_774(iParam0))
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam0, fParam1, 0, -1082130432 /* Float: -1f */, 0);
	}
}

bool func_809(int iParam0)
{
	float fVar0;
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1392388.f_1, false))
	{
		return false;
	}
	if (!__LIB_6__::func_759(iParam0))
	{
		return false;
	}
	fVar0 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), Global_1392388.f_10[iParam0 /*13*/].f_5);
	if (fVar0 < 160000f)
	{
		__LIB_6__::func_720(iParam0);
	}
	if (__LIB_6__::func_760(iParam0))
	{
		return true;
	}
	return false;
}

int func_810(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (!__LIB_0__::func_52(iParam2))
	{
		return 0;
	}
	iVar0 = __LIB_1__::func_468(iParam2, -1);
	if (!__LIB_0__::func_205(iParam1, iVar0))
	{
		return 1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "metaped_outfit_request") && DECORATOR::DECOR_EXIST_ON(iParam1, "metaped_outfit_request_name"))
	{
		iVar1 = DECORATOR::DECOR_GET_INT(iParam1, "metaped_outfit_request_name");
		if (iVar1 == iVar0)
		{
			return 1;
		}
		else
		{
			__LIB_0__::func_294(iParam0, iParam1);
		}
	}
	iVar2 = PED::_REQUEST_METAPED_OUTFIT(ENTITY::GET_ENTITY_MODEL(iParam1), iVar0);
	DECORATOR::DECOR_SET_INT(iParam1, "metaped_outfit_request", iVar2);
	DECORATOR::DECOR_SET_INT(iParam1, "metaped_outfit_request_name", iVar0);
	return 1;
}

void func_811(int iParam0, int iParam1, int iParam2)
{
	if (!__LIB_6__::func_706(iParam0))
	{
		return;
	}
	if (__LIB_6__::func_708(iParam0))
	{
		Global_1392388.f_10[iParam0 /*13*/].f_8 = __LIB_1__::func_293(3, iParam0, 2, __LIB_6__::func_712(iParam0));
		if (!__LIB_1__::func_241(Global_1392388.f_10[iParam0 /*13*/].f_8))
		{
			__LIB_1__::func_722(Global_1392388.f_10[iParam0 /*13*/].f_8);
			__LIB_1__::func_559(Global_1392388.f_10[iParam0 /*13*/].f_8, 1, 2);
		}
	}
	Global_40.f_9146.f_4[iParam0] = 1;
	Global_40.f_9146.f_64[iParam0] = __LIB_0__::func_23();
	Global_40.f_9146.f_79[iParam0] = __LIB_0__::func_23();
	__LIB_1__::func_446(&(Global_40.f_9146.f_79[iParam0]), 0, 0, 6, 0, 0, 0, 0);
	Global_40.f_9146.f_19[iParam0] = iParam1;
	Global_40.f_9146.f_34[iParam0] = iParam2;
	if (__LIB_6__::func_708(iParam0))
	{
		Global_40.f_9146.f_3 = iParam0;
		if (__LIB_1__::func_25(Global_1392388.f_10[iParam0 /*13*/].f_8, 1))
		{
			__LIB_6__::func_778(Global_1392388.f_10[iParam0 /*13*/].f_8);
		}
		__LIB_1__::func_319(Global_1392388.f_10[iParam0 /*13*/].f_8);
	}
}

void func_812()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	__LIB_0__::func_319(4112);
	__LIB_0__::func_320(6);
	vVar2 = { __LIB_1__::func_880(Global_2621440[0 /*12066*/].f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	__LIB_0__::func_321(vVar2, uVar1, uVar0, 0);
	__LIB_0__::func_322(vVar2);
	Global_40.f_9.f_15 = __LIB_1__::func_447(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_813(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<4> Var4;
	if (Global_1391438.f_3 != iParam9)
	{
		__LIB_0__::func_304(0);
	}
	uParam0->f_7 = iParam9;
	Global_1391438.f_3 = iParam9;
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	__LIB_6__::func_727(uParam0->f_5, Var0, Var4, iParam9, iParam10);
}

void func_814(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		__LIB_1__::func_748(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			__LIB_6__::func_786(iParam0, 0);
		}
	}
}

void func_815(int* iParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(iParam0->f_21, 20))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 20);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 0))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 0);
	}
	MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
	__LIB_6__::func_790(iParam0, &iParam1, 0);
	__LIB_1__::func_480(&iParam1);
	__LIB_6__::func_786(iParam0, 0);
	if (MISC::IS_BIT_SET(iParam0->f_21, 3))
	{
		__LIB_3__::func_28(iParam0, 0);
	}
	__LIB_3__::func_110(iParam0);
	__LIB_3__::func_96(iParam0, iParam1);
	__LIB_6__::func_737(iParam0);
	__LIB_3__::func_97(iParam0);
}

bool func_816(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	if (!__LIB_0__::func_49(iParam0))
	{
		return false;
	}
	if (__LIB_6__::func_784(iParam0, iParam1))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_271(iParam0);
	if (!__LIB_0__::func_272(iVar0, 0))
	{
		return false;
	}
	iVar1 = -1;
	if (!__LIB_6__::func_311(iParam0, iParam1, &iVar1, &uVar2))
	{
		return false;
	}
	if (__LIB_6__::func_328(iParam0, iParam1))
	{
	}
	if (!__LIB_1__::func_531(iParam0, 512, 0))
	{
		__LIB_3__::func_121(iParam0, 512, 0, -1);
	}
	if (PED::_0x1E017404784AA6A3(iVar0, iParam1))
	{
		__LIB_6__::func_331(iParam0, iParam1, 1);
		return true;
	}
	return false;
}

int func_817(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		__LIB_6__::func_792(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (__LIB_0__::func_139((uParam2[iVar0 /*17*/])->f_6))
		{
			__LIB_1__::func_471(uParam2[iVar0 /*17*/], 11);
			return Global_1945938[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

void func_818(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		__LIB_6__::func_792(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_819(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (__LIB_1__::func_502(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			__LIB_6__::func_792(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

void func_820(int iParam0, int* iParam1, var uParam2, float fParam3, float fParam4, char* sParam5)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0) || !MISC::IS_BIT_SET(iParam1->f_21, 0))
	{
		return;
	}
	__LIB_3__::func_95(iParam1, *iParam0, iParam1->f_56, 0);
	fVar0 = __LIB_0__::func_514(fParam4 >= 0f, fParam4, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
	__LIB_3__::func_27(iParam1, fParam3);
	__LIB_6__::func_798(iParam0, iParam1, uParam2, fVar0);
	__LIB_6__::func_741(iParam1);
	if (MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		bVar1 = MISC::IS_STRING_NULL_OR_EMPTY(sParam5);
		__LIB_6__::func_785(iParam1, uParam2, iParam0, bVar1, sParam5, fVar0);
		if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			bVar2 = true;
			if (!MISC::IS_BIT_SET(*iParam1, 12))
			{
				bVar2 = __LIB_6__::func_789(iParam1, iParam0);
			}
			if (bVar2 && !MISC::IS_BIT_SET(*iParam1, 13))
			{
				__LIB_3__::func_109(iParam1);
			}
		}
	}
}

void func_821(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		__LIB_6__::func_799(iParam1);
	}
	else
	{
		__LIB_6__::func_793(iParam0, iParam1);
	}
}

void func_822(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	if (!__LIB_0__::func_702(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_700(iParam0);
	if (bParam1)
	{
		if (__LIB_0__::func_299(iParam0) == 0)
		{
		}
		else if (!STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != Global_1835011[77 /*74*/].f_1)
			{
				__LIB_1__::func_270(__LIB_0__::func_76(iParam0));
			}
			if (__LIB_0__::func_2() != 0)
			{
				STATS::_0xB2A38826E5886E83(__LIB_0__::func_299(iParam0), 0);
			}
			else
			{
				STATS::_0xB2A38826E5886E83(__LIB_0__::func_299(iParam0), Global_265238.f_79565.f_208.f_17);
			}
		}
	}
	__LIB_6__::func_783(iParam0);
	if (!__LIB_0__::func_6(__LIB_0__::func_298(0)))
	{
		__LIB_1__::func_242(iParam0, 3);
		__LIB_0__::func_267(bParam2);
		if (__LIB_0__::func_2() == -1)
		{
			if (bParam2 == 0)
			{
				LAW::_0x55F37F5F3F2475E1();
			}
			__LIB_1__::func_142(1);
		}
		__LIB_1__::func_318(iParam0, -1);
		if (bParam1 && !__LIB_0__::func_13(2))
		{
			__LIB_0__::func_47(&Global_0, 1024);
		}
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_8(&(Global_1347343.f_11), 536870912);
			__LIB_1__::func_84(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				__LIB_1__::func_312(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				__LIB_1__::func_299(0);
			}
		}
		if (__LIB_0__::func_2() == -1)
		{
			iVar1 = __LIB_1__::func_24(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = __LIB_1__::func_194();
				switch (iVar1)
				{
					case 0:
						__LIB_1__::func_233(0);
						break;
					case 1:
						__LIB_1__::func_233(1);
						break;
					case 2:
						__LIB_1__::func_233(2);
						break;
					case 3:
						__LIB_1__::func_233(3);
						break;
					case 4:
						__LIB_1__::func_233(4);
						break;
					case 5:
						__LIB_1__::func_233(5);
						break;
					case 6:
						__LIB_1__::func_233(5);
						break;
					case 7:
						__LIB_1__::func_233(7);
						break;
					case 8:
						__LIB_1__::func_233(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (__LIB_0__::func_76(iParam0))
				{
					case 7:
					case 8:
					case 36:
						__LIB_1__::func_233(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (__LIB_0__::func_76(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						__LIB_1__::func_233(11);
						break;
					default:
						iVar1 = __LIB_1__::func_194();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									__LIB_1__::func_234(0);
									break;
								case 1:
									__LIB_1__::func_234(1);
									break;
								case 2:
									__LIB_1__::func_234(2);
									break;
								case 3:
									__LIB_1__::func_234(3);
									break;
								case 4:
									__LIB_1__::func_234(4);
									break;
								case 5:
									__LIB_1__::func_234(5);
									break;
								case 6:
									__LIB_1__::func_234(5);
									break;
								case 7:
									__LIB_1__::func_234(7);
									break;
								case 8:
									__LIB_1__::func_234(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		__LIB_0__::func_301(1);
	}
	else
	{
		__LIB_1__::func_318(iParam0, -1);
		__LIB_1__::func_242(iParam0, 4);
	}
	__LIB_1__::func_144(iParam0, 0);
}

bool func_823(int* iParam0)
{
	var uVar0;
	bool bVar1;
	if (MISC::IS_BIT_SET(iParam0->f_21, 8) || MISC::IS_BIT_SET(*iParam0, 11))
	{
		return true;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		if (__LIB_1__::func_750(&uVar0))
		{
			__LIB_1__::func_283(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
			if (__LIB_6__::func_801())
			{
			}
		}
		else
		{
			__LIB_1__::func_283(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		bVar1 = __LIB_0__::func_264(&(iParam0->f_37)) >= 1.5f;
		if ((!__LIB_1__::func_750(&uVar0) || __LIB_6__::func_801()) || bVar1)
		{
			if (bVar1)
			{
				__LIB_6__::func_800();
			}
			MISC::SET_BIT(&(iParam0->f_21), 8);
			return true;
		}
	}
	return false;
}

void func_824()
{
	Global_1393237.f_199 = 0;
}

void func_825()
{
	Global_1393237.f_199 = 1;
}

void func_826(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0, iVar0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			PED::_0x2EB75FB86C41F026(iVar1, 3, !bParam1);
		}
		iVar0++;
	}
}

int func_827()
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1392388.f_5))
	{
		return 0;
	}
	iVar0 = Global_1392388.f_5;
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1);
	}
	if (__LIB_0__::func_272(iVar1, 1))
	{
		return iVar1;
	}
	return 0;
}

void func_828(var uParam0, float fParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), fParam1);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID())))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), fParam1);
		}
	}
	if (!__LIB_0__::func_1(uParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	}
	if (!__LIB_0__::func_1(uParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (!__LIB_0__::func_1(uParam0, 16))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
	}
	if (!__LIB_0__::func_1(uParam0, 128))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	}
	if (!__LIB_0__::func_1(uParam0, 512))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
	if (!__LIB_0__::func_1(uParam0, 64))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
	}
	if (!(__LIB_3__::func_751(17) && __LIB_0__::func_94(Global_35, Global_1835011[17 /*74*/].f_18, 0) < 10f))
	{
		if (!__LIB_0__::func_1(uParam0, 2048))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
		}
	}
	if (!__LIB_0__::func_1(uParam0, 4096))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_SHORTCUT_ABILITIES_MENU"), false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!__LIB_0__::func_1(uParam0, 1024))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 2, true);
			PED::SET_PED_RESET_FLAG(Global_35, 21, true);
		}
		if (!__LIB_0__::func_1(uParam0, 8))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 168, true);
		}
		PED::SET_PED_RESET_FLAG(Global_35, 33, true);
		if (!__LIB_0__::func_1(uParam0, 32))
		{
			if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
			}
		}
	}
}

void func_829(var uParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_156))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_156);
	}
	__LIB_1__::func_594(uParam0);
	if (uParam0->f_241)
	{
		__LIB_1__::func_436();
		uParam0->f_241 = 0;
	}
	__LIB_1__::func_477(uParam0, 128, 1);
	__LIB_1__::func_477(uParam0, 256, 1);
	__LIB_1__::func_477(uParam0, 4096, 1);
}

void func_830(int iParam0, char* sParam1, bool bParam2)
{
	__LIB_1__::func_324(sParam1);
	if (__LIB_6__::func_708(iParam0) && !bParam2)
	{
		__LIB_1__::func_422(sParam1, 7500, 0, 1, 0, 0, -1, -1, 0);
		UILOG::_UILOG_CLEAR_HAS_DISPLAYED_CACHED_OBJECTIVE();
	}
	if (__LIB_6__::func_708(iParam0))
	{
		__LIB_6__::func_807(iParam0, sParam1, sParam1, -1082130432 /* Float: -1f */);
	}
}

void func_831(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	if (bParam4)
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_138(vParam1, 0f, 0f, 0f))
	{
		return;
	}
	if (((bParam5 < 0f || bParam6 < 0f) || bParam7 < 0f) || bParam8 < 0f)
	{
		return;
	}
	if (((((!bParam5 > bParam6 || !bParam5 > bParam7) || !bParam5 > bParam8) || !bParam6 > bParam7) || !bParam6 > bParam8) || !bParam7 > bParam8)
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	bVar3 = __LIB_0__::func_94(iParam0, vParam1, 1);
	if ((bVar3 <= bParam5 && bVar3 > bParam6) && bVar3 > bParam7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.75f);
		}
		if ((__LIB_1__::func_38() && !ENTITY::IS_ENTITY_DEAD(iVar1)) && VEHICLE::_IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.75f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.75f));
				}
				iVar4++;
			}
		}
	}
	if (bVar3 <= bParam6 && bVar3 > bParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1.5f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.25f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::_IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.25f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.25f));
				}
				iVar4++;
			}
		}
	}
	if (bVar3 <= bParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
			if (iParam9 == 1)
			{
				if (PED::_0x33FA048675821DA7(iVar0, 3))
				{
					PED::_0x06D26A96CA1BCA75(iVar0, 3, 0f, 0);
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::_IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1f);
					if (iParam9 == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
						{
							if (PED::_0x33FA048675821DA7(iVar0, 3))
							{
								PED::_0x06D26A96CA1BCA75(iVar2, 3, 0f, 0);
							}
						}
					}
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1f));
				}
				iVar4++;
			}
		}
	}
	if (bParam4)
	{
		if (bVar3 <= bParam8)
		{
			if (iParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !__LIB_0__::func_491(iParam0, 501393341))
			{
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam12, 0, 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !__LIB_0__::func_491(iParam0, -828834893))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, iParam12);
			}
		}
	}
}

void func_832(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		__LIB_6__::func_726(&(uParam0->f_213), uParam0->f_224);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_1__::func_597(uParam0);
	__LIB_1__::func_747(uParam0, 1);
	__LIB_1__::func_594(uParam0);
	__LIB_1__::func_520(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_1__::func_521(uParam0, 4);
	__LIB_1__::func_595(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_1__::func_476(uParam0);
	__LIB_0__::func_37(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_156) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_156))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_156);
	}
	__LIB_4__::func_797(!__LIB_0__::func_1(uParam0->f_213, 128));
	if (!__LIB_0__::func_1(uParam0->f_213, 128))
	{
		__LIB_3__::func_120();
	}
}

void func_833()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	__LIB_0__::func_319(4112);
	__LIB_0__::func_320(6);
	vVar2 = { __LIB_5__::func_597(Global_2621440[0 /*12066*/].f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	__LIB_0__::func_321(vVar2, uVar1, uVar0, 0);
	__LIB_0__::func_322(vVar2);
	Global_40.f_9.f_15 = __LIB_1__::func_447(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

bool func_834(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (__LIB_2__::func_349(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				__LIB_1__::func_471(iParam1, 0);
				__LIB_6__::func_814(iParam1, uParam2, __LIB_1__::func_489(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

void func_835(int* iParam0, var uParam1)
{
	int iVar0;
	struct<35> Var1;
	struct<10> Var62;
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var1.f_26 = 1106247680;
	Var1.f_27 = 1067450368;
	Var1.f_29 = 1092616192;
	Var1.f_30 = 1112014848;
	Var1.f_31 = 1106247680;
	Var1.f_32 = 1101529088;
	Var1.f_33 = 1101004800;
	Var1.f_34 = 1084227584;
	Var62.f_2 = 570;
	Var62.f_3 = 1065353216;
	Var62.f_4 = -1082130432;
	Var62.f_9 = 3;
	__LIB_6__::func_815(iParam0, 0);
	__LIB_6__::func_814(iParam0, uParam1, 1);
	__LIB_2__::func_480(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 61);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var62, 17);
		iVar0++;
	}
}

bool func_836(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return __LIB_6__::func_788(iParam1);
	}
	return __LIB_6__::func_816(iParam0, iParam1);
}

bool func_837(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		__LIB_6__::func_814(iParam1, uParam2, 0);
		iVar5 = __LIB_6__::func_817(*iParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
			return true;
		}
		__LIB_2__::func_480(uParam2, 0, 0, 1, 0);
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
				iVar8 = __LIB_1__::func_498(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					__LIB_2__::func_394(iParam1, uParam2[iVar8 /*17*/]);
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

void func_838(int iParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
					MISC::SET_BIT(uParam4[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			__LIB_6__::func_818(*iParam0, uParam4, fParam3, iParam7, iParam8, iParam12, __LIB_0__::func_27(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

bool func_839(int iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;
	bool bVar13;
	iVar1 = __LIB_0__::func_492(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*iParam0);
	bVar11 = (((PED::_IS_PED_CARRYING(Global_35) || __LIB_2__::func_365(Global_35)) || __LIB_1__::func_869(Global_35)) || __LIB_2__::func_366(Global_35));
	fVar12 = -1f;
	if (__LIB_0__::func_75(&(iParam1->f_13)))
	{
		fVar12 = __LIB_0__::func_265(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = __LIB_0__::func_139((uParam4[iVar0 /*17*/])->f_6);
		__LIB_6__::func_819(*iParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (__LIB_2__::func_475(*iParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (__LIB_2__::func_367(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						__LIB_2__::func_480(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						__LIB_2__::func_526(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						__LIB_6__::func_814(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 12) || MISC::IS_BIT_SET(*iParam1, 20))
					{
						if (!MISC::IS_BIT_SET(*iParam1, 19))
						{
							__LIB_6__::func_750(iParam1, uParam4, iParam0, fParam3, sParam9);
							bVar13 = MISC::IS_STRING_NULL_OR_EMPTY(sParam9);
							__LIB_6__::func_785(iParam1, uParam4, iParam0, bVar13, sParam9, fParam2);
						}
						if (!MISC::IS_BIT_SET(*iParam1, 7))
						{
							MISC::SET_BIT(&(iParam1->f_21), 3);
						}
						MISC::SET_BIT(&(iParam1->f_21), 20);
					}
					if (MISC::IS_BIT_SET(iParam1->f_21, 20))
					{
						if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
						{
							iParam1->f_2 = 3;
						}
						if (!MISC::IS_BIT_SET(*iParam1, 13))
						{
							if (__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || __LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))
							{
								iParam1->f_2 = 3;
							}
						}
						if (!MISC::IS_BIT_SET(*iParam1, 12))
						{
							if (PED::_IS_PED_CARRYING(Global_35))
							{
								iParam1->f_2 = 3;
							}
						}
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, (uParam4[iVar0 /*17*/])->f_11, (uParam4[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (__LIB_1__::func_500(iParam1, fParam6, iParam1->f_9))
					{
						__LIB_1__::func_148(&(iParam1->f_18));
						if (bVar6)
						{
							__LIB_2__::func_526(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		__LIB_1__::func_501(iParam1, fParam2);
	}
	return bVar5;
}

void func_840(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	__LIB_6__::func_819(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_841(int iParam0)
{
	Global_40.f_9146.f_126 = (Global_40.f_9146.f_126 || iParam0);
}

bool func_842(int iParam0)
{
	if (((iParam0 == 0 || iParam0 == 1) || iParam0 == 2) || iParam0 == 3)
	{
		return true;
	}
	return false;
}

bool func_843(int iParam0)
{
	return (Global_40.f_9146.f_126 && iParam0) != 0;
}

bool func_844(int iParam0)
{
	if (((iParam0 == 4 || iParam0 == 5) || iParam0 == 6) || iParam0 == 7)
	{
		return true;
	}
	return false;
}

int func_845(int iParam0)
{
	int iVar0;
	if (!__LIB_1__::func_917(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_1__::func_921(iParam0);
	if ((((((((((iVar0 == 2 && __LIB_0__::func_293(28)) || (iVar0 == 18 && iParam0 != 55)) || iVar0 == 1) || iVar0 == 11) || iParam0 == 69) || iVar0 == 33) || iVar0 == 20) || iVar0 == 19) || iVar0 == 9) || __LIB_2__::func_805(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_846(int iParam0)
{
	switch (*iParam0)
	{
		case joaat("CONSUMABLE_HERB_GINSENG"):
			return 2;
		case joaat("CONSUMABLE_HERB_BAY_BOLETE"):
			return 4;
		case joaat("CONSUMABLE_HERB_BLACK_BERRY"):
			return 5;
		case joaat("CONSUMABLE_HERB_CURRANT"):
			return 6;
		case joaat("CONSUMABLE_HERB_BURDOCK_ROOT"):
			return 7;
		case joaat("CONSUMABLE_HERB_CHANTERELLES"):
			return 8;
		case joaat("CONSUMABLE_HERB_COMMON_BULRUSH"):
			return 11;
		case joaat("CONSUMABLE_HERB_CREEPING_THYME"):
			return 12;
		case joaat("CONSUMABLE_HERB_ENGLISH_MACE"):
			return 15;
		case joaat("CONSUMABLE_HERB_EVERGREEN_HUCKLEBERRY"):
			return 16;
		case joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"):
			return 20;
		case joaat("CONSUMABLE_HERB_MILKWEED"):
			return 23;
		case joaat("CONSUMABLE_HERB_OLEANDER_SAGE"):
			return 26;
		case joaat("CONSUMABLE_HERB_OREGANO"):
			return 27;
		case joaat("CONSUMABLE_HERB_PARASOL_MUSHROOM"):
			return 28;
		case joaat("CONSUMABLE_HERB_PRAIRIE_POPPY"):
			return 29;
		case joaat("CONSUMABLE_HERB_RAMS_HEAD"):
			return 31;
		case joaat("CONSUMABLE_HERB_RED_RASPBERRY"):
			return 33;
		case joaat("CONSUMABLE_HERB_SAGE"):
			return 34;
		case joaat("CONSUMABLE_HERB_VANILLA_FLOWER"):
			return 37;
		case joaat("CONSUMABLE_HERB_VIOLET_SNOWDROP"):
			return 38;
		case joaat("CONSUMABLE_HERB_WILD_CARROTS"):
			return 39;
		case joaat("CONSUMABLE_HERB_WILD_FEVERFEW"):
			return 40;
		case joaat("CONSUMABLE_HERB_WILD_MINT"):
			return 41;
		case joaat("CONSUMABLE_HERB_WINTERGREEN_BERRY"):
			return 42;
		case joaat("CONSUMABLE_HERB_YARROW"):
			return 43;
		case joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"):
			return 1;
		case joaat("PROVISION_RO_FLOWER_CIGAR"):
			return 9;
		case joaat("PROVISION_RO_FLOWER_CLAMSHELL"):
			return 10;
		case joaat("PROVISION_RO_FLOWER_DRAGONS"):
			return 14;
		case joaat("PROVISION_RO_FLOWER_GHOST"):
			return 17;
		case joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"):
			return 21;
		case joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"):
			return 22;
		case joaat("PROVISION_RO_FLOWER_MOCCASIN"):
			return 24;
		case joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"):
			return 25;
		case joaat("PROVISION_RO_FLOWER_QUEENS"):
			return 30;
		case joaat("PROVISION_RO_FLOWER_RAT_TAIL"):
			return 32;
		case joaat("PROVISION_RO_FLOWER_SPARROWS"):
			return 35;
		case joaat("PROVISION_RO_FLOWER_SPIDER"):
			return 36;
	}
	return 0;
}

int func_847(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("HERB_ALASKAN_GINSENG");
		case 3:
			return joaat("HERB_AMERICAN_GINSENG");
		case 4:
			return joaat("HERB_BAY_BOLETE");
		case 5:
			return joaat("HERB_BLACK_BERRY");
		case 6:
			return joaat("HERB_BLACK_CURRANT");
		case 7:
			return joaat("HERB_BURDOCK_ROOT");
		case 8:
			return joaat("HERB_CHANTERELLES");
		case 11:
			return joaat("HERB_COMMON_BULRUSH");
		case 12:
			return joaat("HERB_CREEPING_THYME");
		case 13:
			return joaat("HERB_DESERT_SAGE");
		case 15:
			return joaat("HERB_ENGLISH_MACE");
		case 16:
			return joaat("HERB_EVERGREEN_HUCKLEBERRY");
		case 18:
			return joaat("HERB_GOLDEN_CURRANT");
		case 19:
			return joaat("HERB_HUMMINGBIRD_SAGE");
		case 20:
			return joaat("HERB_INDIAN_TOBACCO");
		case 23:
			return joaat("HERB_MILKWEED");
		case 26:
			return joaat("HERB_OLEANDER_SAGE");
		case 27:
			return joaat("HERB_OREGANO");
		case 28:
			return joaat("HERB_PARASOL_MUSHROOM");
		case 29:
			return joaat("HERB_PRAIRIE_POPPY");
		case 31:
			return joaat("HERB_RAMS_HEAD");
		case 33:
			return joaat("HERB_RED_RASPBERRY");
		case 34:
			return joaat("HERB_RED_SAGE");
		case 37:
			return joaat("HERB_VANILLA_FLOWER");
		case 38:
			return joaat("HERB_VIOLET_SNOWDROP");
		case 39:
			return joaat("HERB_WILD_CARROTS");
		case 40:
			return joaat("HERB_WILD_FEVERFEW");
		case 41:
			return joaat("HERB_WILD_MINT");
		case 42:
			return joaat("HERB_WINTERGREEN_BERRY");
		case 43:
			return joaat("HERB_YARROW");
		case 1:
			return joaat("HERB_ACUNAS_STAR_ORCHID");
		case 9:
			return joaat("HERB_CIGAR_ORCHID");
		case 10:
			return joaat("HERB_CLAMSHELL_ORCHID");
		case 14:
			return joaat("HERB_DRAGONS_MOUTH_ORCHID");
		case 17:
			return joaat("HERB_GHOST_ORCHID");
		case 21:
			return joaat("HERB_LADY_OF_NIGHT_ORCHID");
		case 22:
			return joaat("HERB_LADY_SLIPPER_ORCHID");
		case 24:
			return joaat("HERB_MOCCASIN_FLOWER_ORCHID");
		case 25:
			return joaat("HERB_NIGHT_SCENTED_ORCHID");
		case 30:
			return joaat("HERB_QUEENS_ORCHID");
		case 32:
			return joaat("HERB_RAT_TAIL_ORCHID");
		case 35:
			return joaat("HERB_SPARROWS_EGG_ORCHID");
		case 36:
			return joaat("HERB_SPIDER_ORCHID");
	}
	return 0;
}

void func_848(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = __LIB_6__::func_119();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569.f_753.f_15[iParam0 /*3*/] = iParam1;
			break;
		case 1:
			Global_1955569.f_866.f_2.f_15[iParam0 /*3*/] = iParam1;
			break;
		default:
			break;
	}
}

void func_849(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = __LIB_6__::func_119();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569.f_753.f_5[iParam0 /*3*/] = fParam1;
			break;
		case 1:
			Global_1955569.f_866.f_2.f_5[iParam0 /*3*/] = fParam1;
			break;
		default:
			break;
	}
}

void func_850(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = __LIB_6__::func_119();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569.f_753.f_15[iParam0 /*3*/].f_2 = iParam1;
			break;
		case 1:
			Global_1955569.f_866.f_2.f_15[iParam0 /*3*/].f_2 = iParam1;
			break;
		default:
			break;
	}
}

float func_851(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = __LIB_6__::func_119();
	}
	switch (iParam1)
	{
		case 0:
			return Global_1955569.f_753.f_5[iParam0 /*3*/];
		case 1:
			return Global_1955569.f_866.f_2.f_5[iParam0 /*3*/];
		default:
			break;
	}
	return -1f;
}

int func_852(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = __LIB_6__::func_119();
	}
	switch (iParam1)
	{
		case 0:
			return Global_1955569.f_753.f_5[iParam0 /*3*/].f_2;
		case 1:
			return Global_1955569.f_866.f_2.f_5[iParam0 /*3*/].f_2;
		default:
			break;
	}
	return -1;
}

int func_853(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = __LIB_6__::func_119();
	}
	switch (iParam1)
	{
		case 0:
			return Global_1955569.f_753.f_5[iParam0 /*3*/].f_1;
		case 1:
			return Global_1955569.f_866.f_2.f_5[iParam0 /*3*/].f_1;
		default:
			break;
	}
	return -15;
}

void func_854(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = __LIB_6__::func_119();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569.f_753.f_5[iParam0 /*3*/].f_2 = iParam1;
			break;
		case 1:
			Global_1955569.f_866.f_2.f_5[iParam0 /*3*/].f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_855(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = __LIB_6__::func_119();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569.f_753.f_5[iParam0 /*3*/].f_1 = iParam1;
			break;
		case 1:
			Global_1955569.f_866.f_2.f_5[iParam0 /*3*/].f_1 = iParam1;
			break;
		default:
			break;
	}
}

int func_856(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = __LIB_6__::func_119();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569.f_850;
		case 1:
			return Global_1955569.f_866.f_115;
		default:
			break;
	}
	return -1;
}

int func_857(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = __LIB_6__::func_119();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569.f_850.f_2;
		case 1:
			return Global_1955569.f_866.f_115.f_2;
		default:
			break;
	}
	return -1;
}

int func_858(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = __LIB_6__::func_119();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569.f_850.f_1;
		case 1:
			return Global_1955569.f_866.f_115.f_1;
		default:
			break;
	}
	return -1;
}

void func_859()
{
	int iVar0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		iVar0 = 0;
		while (!__LIB_6__::func_689(iVar0))
		{
			iVar0++;
			BUILTIN::WAIT(0);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_860(char[4] cParam0, int iParam1)
{
	cParam0->f_5309 = (cParam0->f_5309 || iParam1);
}

bool func_861(char[4] cParam0, int iParam1)
{
	return (cParam0->f_5309 && iParam1) != 0;
}

bool func_862(char[4] cParam0, int iParam1)
{
	return (cParam0->f_5307 && iParam1) != 0;
}

int func_863(char[4] cParam0)
{
	return cParam0->f_10783;
}

int func_864(char[4] cParam0)
{
	return cParam0->f_597;
}

void func_865(char[4] cParam0)
{
	if (__LIB_0__::func_2() == 0)
	{
		return;
	}
	switch (cParam0->f_607)
	{
		case 0:
			break;
		case 1:
			break;
		case 31:
			MISC::_SET_WEATHER_TYPE(joaat("HIGHPRESSURE"), false, true, false, 0f, false);
			break;
	}
}

int func_866(char[4] cParam0)
{
	return cParam0->f_607;
}

struct<8> func_867(char[4] cParam0)
{
	return cParam0->f_10784;
}

void func_868(char[4] cParam0, int iParam1)
{
	cParam0->f_5307 = (cParam0->f_5307 || iParam1);
}

void func_869(char[4] cParam0, int iParam1)
{
	cParam0->f_5308 = (cParam0->f_5308 || iParam1);
}

void func_870(char[4] cParam0, int iParam1)
{
	cParam0->f_597 = iParam1;
	BUILTIN::SETTIMERA(0);
}

bool func_871(char[4] cParam0)
{
	switch (cParam0->f_607)
	{
		case 12:
		case 21:
		case 26:
		case 35:
		case 37:
		case 41:
		case 42:
		case 43:
		case 44:
		case 46:
		case 52:
		case 54:
		case 58:
			return false;
	}
	return true;
}

bool func_872(char[4] cParam0, int iParam1)
{
	return (cParam0->f_5308 && iParam1) != 0;
}

void func_873(char[4] cParam0, int iParam1)
{
	if (!PED::_IS_THIS_MODEL_A_HORSE(iParam1))
	{
		return;
	}
	cParam0->f_8268 = iParam1;
}

int func_874(char[4] cParam0)
{
	return cParam0->f_8268;
}

bool func_875(char[4] cParam0, int iParam1)
{
	return (cParam0->f_608 && iParam1) != 0;
}

void func_876(char[4] cParam0, int iParam1)
{
	cParam0->f_598 = iParam1;
}

int func_877(char[4] cParam0)
{
	return *cParam0;
}

var func_878(char[4] cParam0)
{
	return cParam0->f_5408;
}

void func_879(char[4] cParam0, int iParam1)
{
	*cParam0 = iParam1;
}

int func_880(char[4] cParam0)
{
	return cParam0->f_5411;
}

void func_881(char[4] cParam0, int iParam1)
{
	cParam0->f_5308 = (cParam0->f_5308 - (cParam0->f_5308 && iParam1));
}

bool func_882(char[4] cParam0)
{
	return false;
	switch (cParam0->f_607)
	{
		case 11:
		case 12:
			return true;
	}
	return false;
}

void func_883(char[4] cParam0, var uParam1)
{
	cParam0->f_607 = uParam1;
}

int func_884(char[4] cParam0)
{
	return cParam0->f_596;
}

void func_885(char[4] cParam0, int iParam1)
{
	cParam0->f_596 = iParam1;
}

void func_886(char[4] cParam0, int iParam1)
{
	__LIB_0__::func_11(iParam1);
	cParam0->f_10783 = iParam1;
}

void func_887(char[4] cParam0, int iParam1)
{
	cParam0->f_5307 = (cParam0->f_5307 - (cParam0->f_5307 && iParam1));
}

void func_888(int iParam0)
{
	__LIB_0__::func_176(iParam0, 4, 1);
}

int func_889(char[4] cParam0)
{
	return cParam0->f_598;
}

void func_890(char[4] cParam0, vector3 vParam1, float fParam4)
{
	cParam0->f_5417 = { vParam1 };
	cParam0->f_5420 = fParam4;
}

void func_891(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			PED::_REMOVE_PED_FROM_MOUNT(iParam0, true, false);
		}
	}
}

void func_892(char[4] cParam0, char[32] cParam1)
{
	cParam0->f_10784 = { cParam1 };
}

struct<8> func_893()
{
	char cVar0[64];
	StringCopy(&cVar0, "ALLY_DEAD_HORSE_PLAYER", 64);
	return cVar0;
}

int func_894(char* sParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(sParam0) && AUDIO::_0x1ECC76792F661CF5(sParam0))
	{
		return 1;
	}
	return 0;
}

bool func_895(int iParam0, char* sParam1)
{
	if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0, sParam1))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sParam1);
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
	{
		return true;
	}
	return false;
}

void func_896(char[4] cParam0, int iParam1)
{
	cParam0->f_608 = (cParam0->f_608 - (cParam0->f_608 && iParam1));
}

void func_897(char[4] cParam0)
{
	if (!Global_1935630.f_12)
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &(cParam0->f_7374), true, 0, false))
		{
			if (((cParam0->f_7374 == joaat("WEAPON_FISHINGROD") || cParam0->f_7374 == joaat("WEAPON_KIT_BINOCULARS")) || cParam0->f_7374 == joaat("WEAPON_KIT_CAMERA")) || cParam0->f_7374 == joaat("WEAPON_KIT_DETECTOR"))
			{
				cParam0->f_7374 = 0;
			}
		}
		else
		{
			cParam0->f_7374 = 0;
		}
	}
}

void func_898(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*uParam0 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam4) * 127f));
	*uParam1 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam5) * 127f));
	*iParam2 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam6) * 127f));
	*iParam3 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam7) * 127f));
}

float func_899(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	fVar0 = __LIB_0__::func_70(fParam0, 0f, 360f);
	fVar1 = __LIB_0__::func_70(fParam1, 0f, 360f);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 == 0f)
	{
		return fVar0;
	}
	if (iParam3 == 2)
	{
		bVar4 = true;
	}
	else if (iParam3 != 3)
	{
		if (fVar0 <= 180f)
		{
			if (fVar2 >= 0f && fVar2 <= 180f)
			{
				bVar4 = true;
			}
		}
		else if (fVar2 < -180f || fVar2 > 0f)
		{
			bVar4 = true;
		}
		if (iParam3 == 1)
		{
			bVar4 = !bVar4;
		}
	}
	if (bVar4)
	{
		if (fVar2 > 0f)
		{
			fVar3 = fVar2;
		}
		else
		{
			fVar3 = (fVar2 + 360f);
		}
	}
	else if (fVar2 < 0f)
	{
		fVar3 = fVar2;
	}
	else
	{
		fVar3 = (fVar2 - 360f);
	}
	return (fParam0 + (fParam2 * fVar3));
}

void func_900(char* sParam0, bool bParam1, bool bParam2)
{
	__LIB_5__::func_239(sParam0, bParam1, bParam2);
}

void func_901(var uParam0, int iParam1)
{
	__LIB_0__::func_7(&(uParam0->f_7375.f_860), iParam1);
}

void func_902(var uParam0, int iParam1)
{
	__LIB_0__::func_7(&(uParam0->f_7375.f_861), iParam1);
}

bool func_903(char* sParam0)
{
	return __LIB_5__::func_259(sParam0);
}

bool func_904()
{
	return __LIB_5__::func_236(1);
}

void func_905(var uParam0)
{
	__LIB_1__::func_981(uParam0, (__LIB_1__::func_361(uParam0) - 6f));
	__LIB_1__::func_368(uParam0, 1);
}

void func_906(struct<2> Param0, int iParam2)
{
	if (!__LIB_3__::func_358(Param0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (!__LIB_5__::func_512(Param0, iParam2))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam2, Param0);
	}
}

struct<8> func_907(int iParam0)
{
	struct<8> Var0;
	if (!__LIB_0__::func_31(iParam0))
	{
		return Var0;
	}
	StringCopy(&Var0, __LIB_0__::func_323(iParam0), 64);
	StringConCat(&Var0, "_RETURN", 64);
	return Var0;
}

void func_908(var uParam0, int iParam1, char* sParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804))
	{
		return;
	}
	if (!__LIB_4__::func_551(uParam0, iParam1))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = __LIB_5__::func_304(uParam0, iParam1);
	}
	if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_804, sParam2))
	{
		if (((ENTITY::IS_ENTITY_A_PED(iParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(uParam0->f_804, sParam2, false))) || (ENTITY::IS_ENTITY_AN_OBJECT(iParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_804, sParam2, false)))) || (ENTITY::IS_ENTITY_A_VEHICLE(iParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_VEHICLE(uParam0->f_804, sParam2, false))))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_804, sParam2, iParam1);
		}
	}
}

void func_909(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (__LIB_5__::func_459((uParam0[iVar0 /*3*/])->f_2, iParam12))
		{
			__LIB_4__::func_995(&((uParam0[iVar0 /*3*/])->f_2), iParam12);
			if (__LIB_5__::func_560(&((uParam0[iVar0 /*3*/])->f_2), iParam13))
			{
				__LIB_4__::func_589(uParam0[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (__LIB_5__::func_459((uParam1[iVar0 /*5*/])->f_4, iParam12))
		{
			__LIB_4__::func_995(&((uParam1[iVar0 /*5*/])->f_4), iParam12);
			if (__LIB_5__::func_560(&((uParam1[iVar0 /*5*/])->f_4), iParam13))
			{
				__LIB_4__::func_590(uParam1[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (__LIB_5__::func_459((uParam2[iVar0 /*3*/])->f_2, iParam12))
		{
			__LIB_4__::func_995(&((uParam2[iVar0 /*3*/])->f_2), iParam12);
			if (__LIB_5__::func_560(&((uParam2[iVar0 /*3*/])->f_2), iParam13))
			{
				__LIB_4__::func_591(uParam2[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (__LIB_5__::func_459((uParam3[iVar0 /*3*/])->f_2, iParam12))
		{
			__LIB_4__::func_995(&((uParam3[iVar0 /*3*/])->f_2), iParam12);
			if (__LIB_5__::func_560(&((uParam3[iVar0 /*3*/])->f_2), iParam13))
			{
				__LIB_4__::func_592(uParam3[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	if (__LIB_5__::func_459(uParam4->f_1, iParam12))
	{
		__LIB_4__::func_995(&(uParam4->f_1), iParam12);
		if (__LIB_5__::func_560(&(uParam4->f_1), iParam13))
		{
			__LIB_4__::func_593(uParam4);
		}
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (__LIB_5__::func_459((uParam5[iVar0 /*67*/])->f_3, iParam12))
		{
			__LIB_4__::func_995(&((uParam5[iVar0 /*67*/])->f_3), iParam12);
			if (__LIB_5__::func_560(&((uParam5[iVar0 /*67*/])->f_3), iParam13))
			{
				__LIB_4__::func_594(uParam5[iVar0 /*67*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam6)
	{
		if (__LIB_5__::func_459((uParam6[iVar0 /*4*/])->f_3, iParam12))
		{
			__LIB_4__::func_995(&((uParam6[iVar0 /*4*/])->f_3), iParam12);
			if (__LIB_5__::func_560(&((uParam6[iVar0 /*4*/])->f_3), iParam13))
			{
				__LIB_4__::func_595(uParam6[iVar0 /*4*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (__LIB_5__::func_459((uParam7[iVar0 /*5*/])->f_4, iParam12))
		{
			__LIB_4__::func_995(&((uParam7[iVar0 /*5*/])->f_4), iParam12);
			if (__LIB_5__::func_560(&((uParam7[iVar0 /*5*/])->f_4), iParam13))
			{
				__LIB_4__::func_596(uParam7[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (__LIB_5__::func_459((uParam8[iVar0 /*3*/])->f_2, iParam12))
		{
			__LIB_4__::func_995(&((uParam8[iVar0 /*3*/])->f_2), iParam12);
			if (__LIB_5__::func_560(&((uParam8[iVar0 /*3*/])->f_2), iParam13))
			{
				__LIB_4__::func_597(uParam8[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (__LIB_5__::func_459((uParam9[iVar0 /*3*/])->f_2, iParam12))
		{
			__LIB_4__::func_995(&((uParam9[iVar0 /*3*/])->f_2), iParam12);
			if (__LIB_5__::func_560(&((uParam9[iVar0 /*3*/])->f_2), iParam13))
			{
				__LIB_4__::func_598(uParam9[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (__LIB_5__::func_459((uParam10[iVar0 /*4*/])->f_3, iParam12))
		{
			__LIB_4__::func_995(&((uParam10[iVar0 /*4*/])->f_3), iParam12);
			if (__LIB_5__::func_560(&((uParam10[iVar0 /*4*/])->f_3), iParam13))
			{
				__LIB_4__::func_599(uParam10[iVar0 /*4*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (__LIB_5__::func_459((uParam11[iVar0 /*3*/])->f_2, iParam12))
		{
			__LIB_4__::func_995(&((uParam11[iVar0 /*3*/])->f_2), iParam12);
			if (__LIB_5__::func_560(&((uParam11[iVar0 /*3*/])->f_2), iParam13))
			{
				__LIB_4__::func_600(uParam11[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
}

void func_910(char* sParam0, int iParam1, int iParam2)
{
	struct<10> Var0;
	struct<16> Var10;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0) || !SCRIPTS::DOES_SCRIPT_EXIST(sParam0))
	{
		return;
	}
	Var0 = iParam1;
	Var0.f_3 = iParam2;
	Var0.f_1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), sParam0, 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 1;
	__LIB_4__::func_709(Var10, 0);
}

int func_911(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (bParam4 && ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = __LIB_1__::func_435(iParam1);
	}
	if (iParam3 == 0)
	{
		iParam3 = ENTITY::GET_ENTITY_MODEL(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
	}
	if (!__LIB_4__::func_988(uParam0, iParam1, 4))
	{
		if (ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_804, sParam2))
		{
			__LIB_5__::func_17(uParam0, iParam1, 4);
			return 1;
		}
		else if (bParam5 && ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_804, sParam2))
		{
			__LIB_5__::func_17(uParam0, iParam1, 4);
			return 1;
		}
	}
	return 0;
}

bool func_912(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vector3 vVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam2))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	if (__LIB_6__::func_768(iParam0, vVar0, sParam2, iParam3))
	{
		return true;
	}
	return false;
}

bool func_913(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = __LIB_4__::func_139(uParam1);
	if (uParam1->f_12 > (fVar0 + 5f))
	{
		return false;
	}
	if (!PED::_0x5102307CE88798EB(iParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	}
	if (uParam1->f_12 < fVar0 || PED::IS_TRACKED_PED_VISIBLE(iParam0))
	{
		fVar1 = -1f;
		fVar2 = __LIB_0__::func_646(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5f));
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar2, -1f, fVar1) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, 1, 0) == 1)
		{
			return true;
		}
		else if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
		{
			if (WEAPON::_IS_WEAPON_LANTERN(Global_1935630.f_44) || WEAPON::_IS_WEAPON_TORCH(Global_1935630.f_44))
			{
				if (uParam1->f_12 <= 5f)
				{
					if (__LIB_1__::func_380())
					{
						if (PED::IS_PED_FACING_PED(Global_35, iParam0, 110f))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
							{
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

void func_914(var uParam0)
{
	__LIB_5__::func_309(&(uParam0->f_7375));
}

int func_915(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bVar3 = __LIB_5__::func_487(iParam0);
	if (__LIB_0__::func_192(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (__LIB_1__::func_750(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = __LIB_3__::func_115();
			}
			else
			{
				iVar0 = __LIB_3__::func_116();
			}
		}
		else if (__LIB_0__::func_27(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = __LIB_3__::func_117();
		}
		else
		{
			iVar0 = __LIB_3__::func_118();
		}
	}
	else if (__LIB_1__::func_610(&iVar2))
	{
		if (__LIB_0__::func_192(iVar2, -1303648999))
		{
			iVar0 = __LIB_3__::func_115();
		}
		else
		{
			iVar0 = __LIB_3__::func_116();
		}
	}
	else if (bVar1)
	{
		iVar0 = __LIB_3__::func_117();
	}
	else
	{
		iVar0 = __LIB_3__::func_118();
	}
	if (iVar0 != 0)
	{
		Global_1946804.f_2791 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_35, iParam0, iVar0, 1, iParam1, -1082130432 /* Float: -1f */);
		return 1;
	}
	return 0;
}

void func_916(int iParam0)
{
	if (__LIB_0__::func_139(*iParam0))
	{
		__LIB_1__::func_281(iParam0, 1, 1);
	}
}

void func_917(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	float fVar19;
	int iVar20;
	vector3 vVar21;
	if (uParam0->f_865[iParam2 /*18*/].f_4 < 0)
	{
		return;
	}
	iVar0 = uParam0->f_865[iParam2 /*18*/].f_4;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1912[iVar0 /*10*/].f_8))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_1912[iVar0 /*10*/].f_8, true, false))
		{
			__LIB_5__::func_124(uParam0, uParam0->f_1912[iVar0 /*10*/].f_8);
			ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(uParam0->f_1912[iVar0 /*10*/].f_8, &vVar1, &vVar4, 2);
			if (__LIB_0__::func_129(&(uParam0->f_1912[iVar0 /*10*/]), 1))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_1912[iVar0 /*10*/].f_8, __LIB_0__::func_731(Global_35), &vVar7, false, 0, 2))
				{
					fVar19 = (__LIB_0__::func_152(vVar1, Global_36, 1) - __LIB_0__::func_152(vVar1, vVar7, 1));
					vVar4.f_2 = (vVar4.z + fVar19);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1912[iVar0 /*10*/].f_8, vVar1, vVar4, 2);
				}
			}
			if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1912[iVar0 /*10*/].f_8, __LIB_0__::func_731(Global_35)) && uParam0->f_865[iParam2 /*18*/].f_17 != 0)
			{
				if ((__LIB_0__::func_78(uParam0) > 3 && !__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_865[iParam2 /*18*/] /*41*/]), 16)) && !__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_865[iParam2 /*18*/] /*41*/]), 32768))
				{
					__LIB_5__::func_368(uParam0, 1);
				}
				if (uParam0->f_2289)
				{
					if (__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_865[iParam2 /*18*/] /*41*/]), 128))
					{
					}
					else
					{
						__LIB_4__::func_532(uParam0, 131072);
						return;
					}
				}
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_1912[iVar0 /*10*/].f_8, false))
			{
				if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1912[iVar0 /*10*/].f_8, "b_PlayerArthur"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_1912[iVar0 /*10*/].f_8, "b_PlayerArthur", !__LIB_0__::func_181(), false);
				}
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_1912[iVar0 /*10*/].f_8);
				if (uParam0->f_865[iParam2 /*18*/].f_17 == 0)
				{
					__LIB_4__::func_647(&(uParam0->f_1912[iVar0 /*10*/]), 128);
					if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_1912[iVar0 /*10*/].f_8, "pl_breakout"))
					{
						__LIB_4__::func_712(uParam0->f_1912[iVar0 /*10*/].f_8, 10000, 0, -1, 0);
					}
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam0->f_1912[iVar0 /*10*/].f_8))
			{
				ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam0->f_1912[iVar0 /*10*/].f_8, false);
			}
			if (__LIB_0__::func_84(&(uParam0->f_865[iParam2 /*18*/]), 4))
			{
				uParam0->f_2075 = iParam2;
				if (((((__LIB_0__::func_81(uParam0) == 0 && !CAM::_0x81DCFD13CF39920E()) && uParam0->f_865[iParam2 /*18*/].f_17 == 1) && uParam0->f_865[iParam2 /*18*/] < 8) && !__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_865[iParam2 /*18*/] /*41*/]), 32768)) && !__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_865[iParam2 /*18*/] /*41*/]), 524288))
				{
					CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
					__LIB_4__::func_612(uParam0, 64);
				}
			}
			iVar20 = 0;
			while (iVar20 < 65)
			{
				if ((uParam0->f_3[iVar20 /*13*/] && uParam0->f_3[iVar20 /*13*/].f_8 > 0f) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar20 /*13*/].f_2))
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3[iVar20 /*13*/].f_2, false);
				}
				iVar20++;
			}
			if ((ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1912[iVar0 /*10*/].f_8, __LIB_0__::func_731(Global_35)) && uParam0->f_865[iParam2 /*18*/].f_17 != 0) && !__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_865[iParam2 /*18*/] /*41*/]), 32768))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_1912[iVar0 /*10*/].f_8, __LIB_0__::func_731(Global_35), &vVar21, false, 0, 2) && !__LIB_0__::func_86(vVar21))
				{
					__LIB_5__::func_115(uParam0, 0);
				}
			}
			uParam0->f_865[iParam2 /*18*/].f_7 = 1;
		}
	}
}

bool func_918(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	float fVar5;
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			uParam0->f_24 = __LIB_0__::func_23();
			iVar4 = __LIB_0__::func_23();
			__LIB_0__::func_467(&iVar4, uParam0->f_6);
			__LIB_0__::func_468(&iVar4, 0);
			__LIB_0__::func_469(&iVar4, 0);
			if (__LIB_1__::func_110(uParam0->f_24, iVar4, 1))
			{
				__LIB_1__::func_446(&iVar4, 0, 0, 0, 1, 0, 0, 0);
			}
			__LIB_4__::func_704(uParam0->f_24, iVar4, &iVar0, &iVar1, &iVar2, &uVar3, &uVar3, &uVar3);
			uParam0->f_7 = ((iVar0 + iVar1 * 60) + iVar2 * 3600);
			__LIB_0__::func_115(uParam0, 1);
			break;
		case 1:
			fVar5 = __LIB_5__::func_120(uParam0, -1082130432 /* Float: -1f */);
			if (fVar5 >= 0.5f)
			{
				__LIB_0__::func_115(uParam0, 2);
			}
			break;
		case 2:
			fVar5 = __LIB_5__::func_120(uParam0, -1082130432 /* Float: -1f */);
			if (fVar5 >= 0.99f || fVar5 == -1f)
			{
				iVar4 = uParam0->f_24;
				__LIB_1__::func_446(&iVar4, uParam0->f_7, 0, 0, 0, 0, 0, 0);
				CLOCK::SET_CLOCK_TIME(__LIB_0__::func_41(iVar4), __LIB_0__::func_42(iVar4), __LIB_0__::func_43(iVar4));
				__LIB_4__::func_573(CLOCK::GET_CLOCK_HOURS());
				__LIB_5__::func_591(1, 0, 0);
				return true;
			}
			break;
	}
	return false;
}

void func_919(int iParam0)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	if (Global_1360165[iParam0 /*1157*/].f_12 != Global_1360165[iParam0 /*1157*/].f_13 || __LIB_0__::func_287(iParam0, 36, 1))
	{
		__LIB_0__::func_290(iParam0, 36, 1);
		Global_1360165[iParam0 /*1157*/].f_12 = Global_1360165[iParam0 /*1157*/].f_13;
		__LIB_5__::func_588(iParam0, &(Global_1360165[iParam0 /*1157*/].f_2));
	}
}

void func_920(var uParam0)
{
	if (!__LIB_5__::func_315(uParam0))
	{
		return;
	}
	if (!__LIB_4__::func_562(uParam0, 4194304))
	{
		__LIB_5__::func_316(uParam0);
		__LIB_4__::func_532(uParam0, 4194304);
	}
	if (__LIB_5__::func_592(uParam0))
	{
		__LIB_5__::func_81(uParam0);
		__LIB_5__::func_82(uParam0);
		__LIB_0__::func_115(uParam0, 2);
	}
}

void func_921(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		__LIB_5__::func_129(&(uParam0->f_861), uParam0->f_872);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_5__::func_85(uParam0);
	__LIB_1__::func_747(uParam0, 1);
	__LIB_5__::func_67(uParam0);
	__LIB_4__::func_622(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_4__::func_977(uParam0, 4);
	__LIB_5__::func_69(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_4__::func_570(uParam0);
	__LIB_0__::func_37(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_804))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_804);
	}
	__LIB_4__::func_716(!__LIB_0__::func_1(uParam0->f_861, 128));
	if (!__LIB_0__::func_1(uParam0->f_861, 128))
	{
		__LIB_1__::func_625();
	}
}

void func_922(var uParam0)
{
	if (!ITEMSET::IS_ITEMSET_VALID(iLocal_14))
	{
		iLocal_14 = ITEMSET::CREATE_ITEMSET(true);
	}
}

void func_923(var uParam0, int iParam1)
{
	uParam0->f_439 = (uParam0->f_439 || iParam1);
}

void func_924(int iParam0)
{
	__LIB_5__::func_605(&(iParam0->f_428), &(iParam0->f_958));
}

void func_925(var uParam0)
{
	__LIB_4__::func_796(&(uParam0->f_8), &(uParam0->f_24), &(uParam0->f_35), &(uParam0->f_51), &(uParam0->f_55), &(uParam0->f_57), &(uParam0->f_393), &(uParam0->f_398), &(uParam0->f_404), &(uParam0->f_408), &(uParam0->f_412), &(uParam0->f_417), -1);
}

void func_926(int iParam0)
{
	__LIB_5__::func_611(iParam0);
	__LIB_0__::func_8(&Global_1935630, 32768);
	__LIB_5__::func_184(iParam0);
	__LIB_1__::func_148(&(iParam0->f_2884));
	if (__LIB_4__::func_682())
	{
		__LIB_4__::func_782();
	}
	if (__LIB_5__::func_176(iParam0, 524288))
	{
		__LIB_0__::func_7(&Global_1935630, 524288);
	}
	else if (!__LIB_5__::func_176(iParam0, 32768))
	{
		Global_43805 = iParam0->f_958.f_1684;
	}
	__LIB_5__::func_413(&(iParam0->f_428), &(iParam0->f_958));
	if (__LIB_2__::func_27(iParam0, 262144))
	{
		if (__LIB_0__::func_90(&(Global_1835011[*iParam0 /*74*/].f_29), 4))
		{
			CLOCK::SET_CLOCK_TIME(__LIB_4__::func_735(4), 0, 0);
		}
		else if (__LIB_0__::func_90(&(Global_1835011[*iParam0 /*74*/].f_29), 2))
		{
			CLOCK::SET_CLOCK_TIME(__LIB_4__::func_735(2), 0, 0);
		}
		else if (__LIB_0__::func_90(&(Global_1835011[*iParam0 /*74*/].f_29), 8))
		{
			CLOCK::SET_CLOCK_TIME(__LIB_4__::func_735(8), 0, 0);
		}
		else if (__LIB_0__::func_90(&(Global_1835011[*iParam0 /*74*/].f_29), 16))
		{
			CLOCK::SET_CLOCK_TIME(__LIB_4__::func_735(16), 0, 0);
		}
		else if (__LIB_0__::func_90(&(Global_1835011[*iParam0 /*74*/].f_29), 32))
		{
			CLOCK::SET_CLOCK_TIME(__LIB_4__::func_735(32), 0, 0);
		}
	}
}

void func_927(int iParam0)
{
	__LIB_2__::func_759(0.8f, 0.2f, 0f, 0f);
}

void func_928(var uParam0)
{
	if (!uParam0->f_18 && __LIB_2__::func_765(269, 0))
	{
		if (*uParam0 < 7)
		{
			*uParam0 = 8;
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (__LIB_0__::func_86(uParam0->f_13))
			{
				*uParam0 = 9;
			}
			if (!PERSCHAR::_0x800DF3FC913355F3(PERSCHAR::_0x112DDF56300BC6E5(__LIB_0__::func_118(uParam0->f_1))))
			{
				*uParam0 = 9;
			}
			*uParam0 = 1;
			break;
		case 1:
			if (uParam0->f_19 && !ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
			{
				PED::_0x7D4E70A67A651C71(2);
				uParam0->f_19 = 0;
			}
			if (!__LIB_4__::func_903(uParam0))
			{
				return;
			}
			if (uParam0->f_12 != 0)
			{
				STREAMING::REQUEST_MODEL(uParam0->f_12, false);
			}
			else
			{
				*uParam0 = 9;
				return;
			}
			if (uParam0->f_17 != 0)
			{
				PROPSET::_REQUEST_PROPSET(uParam0->f_17);
			}
			*uParam0 = 2;
			break;
		case 2:
			if (__LIB_4__::func_904(uParam0))
			{
				*uParam0 = 3;
			}
			break;
		case 3:
			if (__LIB_4__::func_903(uParam0))
			{
				if (__LIB_4__::func_905(uParam0))
				{
					*uParam0 = 9;
					return;
				}
				if (!uParam0->f_19)
				{
					PED::_0xF008E0BA1FE1D644(2);
					uParam0->f_19 = 1;
				}
				*uParam0 = 4;
			}
			break;
		case 4:
			if (!__LIB_4__::func_904(uParam0))
			{
				*uParam0 = 1;
				return;
			}
			if (__LIB_4__::func_924(uParam0))
			{
				*uParam0 = 5;
			}
			break;
		case 5:
			if (__LIB_4__::func_906(uParam0))
			{
				__LIB_4__::func_907(uParam0);
				*uParam0 = 1;
			}
			if (__LIB_4__::func_908(uParam0))
			{
				*uParam0 = 7;
			}
			break;
		case 7:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
			{
				PERSCHAR::_0x187D65F3AEC5D679(__LIB_0__::func_118(uParam0->f_1), &(uParam0->f_3));
			}
			if (ENTITY::DOES_ENTITY_EXIST(PERSCHAR::_0x31C70A716CAE1FEE(PERSCHAR::_0x112DDF56300BC6E5(__LIB_0__::func_118(uParam0->f_1)))))
			{
				*uParam0 = 6;
			}
			else
			{
				*uParam0 = 9;
			}
			break;
		case 6:
			if (PERSCHAR::_0xF8DE7154F7D1458F(PERSCHAR::_0x112DDF56300BC6E5(__LIB_0__::func_118(uParam0->f_1))) == uParam0->f_11)
			{
				*uParam0 = 9;
			}
			else
			{
				PERSCHAR::_0x669C25840C6F7AE2(PERSCHAR::_0x112DDF56300BC6E5(__LIB_0__::func_118(uParam0->f_1)), uParam0->f_11);
			}
			break;
		case 8:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
			{
				*uParam0 = 9;
				return;
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				__LIB_4__::func_907(uParam0);
				*uParam0 = 9;
				return;
			}
			if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(uParam0->f_11, true, false), 3f))
			{
				__LIB_4__::func_907(uParam0);
				*uParam0 = 9;
			}
			break;
		case 9:
			if (__LIB_4__::func_909(uParam0))
			{
				*uParam0 = 10;
			}
			break;
		case 10:
			return;
	}
}

void func_929(int iParam0)
{
	__LIB_6__::func_672(&uLocal_14);
}

bool func_930(int iParam0, int iParam1, float fParam2)
{
	int iVar0;
	if (!__LIB_0__::func_6(iVar0))
	{
		iVar0 = __LIB_1__::func_293(__LIB_3__::func_574(iParam0), iParam1, 3, __LIB_3__::func_575(iParam0));
	}
	if (__LIB_6__::func_673(iParam0, fParam2))
	{
		*fParam2 = __LIB_6__::func_622(iParam0);
		return true;
	}
	return false;
}

int func_931()
{
	return joaat("P_CRAYFISH01X");
}

int func_932(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("AT_ARMADILLO"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ARMADILLO_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ARMADILLO_JN");
			}
			break;
		case joaat("AT_BADGER"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BADGER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BADGER_JN");
			}
			break;
		case joaat("AT_BAT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BAT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BAT_JN");
			}
			break;
		case joaat("AT_BEAR_BLACK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BLACK_BEAR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BLACK_BEAR_JN");
			}
			break;
		case joaat("AT_BEAR_GRIZZLY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_GRIZZLY_BEAR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_GRIZZLY_BEAR_JN");
			}
			break;
		case joaat("AT_BEAR_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BEAR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BEAR_JN");
			}
			break;
		case joaat("AT_BEAVER"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BEAVER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BEAVER_JN");
			}
			break;
		case joaat("AT_BEAVER_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BEAVER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BEAVER_JN");
			}
			break;
		case joaat("AT_BLUEJAY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BLUE_JAY_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BLUE_JAY_JN");
			}
			break;
		case joaat("AT_BOAR"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_WILD_BOAR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_WILD_BOAR_JN");
			}
			break;
		case joaat("AT_BOAR_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BOAR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BOAR_JN");
			}
			break;
		case joaat("AT_BUCK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_WHITETAIL_BUCK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_WHITETAIL_BUCK_JN");
			}
			break;
		case joaat("AT_BUCK_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BUCK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BUCK_JN");
			}
			break;
		case joaat("AT_BUFFALO"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BISON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BISON_JN");
			}
			break;
		case joaat("AT_BUFFALO_TATANKA"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BUFFALO_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BUFFALO_JN");
			}
			break;
		case joaat("AT_BUFFALO_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_WHITE_BUFFALO_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_WHITE_BUFFALO_JN");
			}
			break;
		case joaat("AT_BULL_ANGUS"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BULL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BULL_JN");
			}
			break;
		case joaat("AT_BULL_DEVON"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DEVON_BULL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DEVON_BULL_JN");
			}
			break;
		case joaat("AT_BULL_HEREFORD"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_HEREFORD_BULL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_HEREFORD_BULL_JN");
			}
			break;
		case joaat("AT_BULLFROG"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BULLFROG_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BULLFROG_JN");
			}
			break;
		case joaat("AT_CALIFORNIACONDOR"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CALIFORNIAN_CONDOR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CALIFORNIAN_CONDOR_JN");
			}
			break;
		case joaat("AT_CARDINAL"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CARDINAL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CARDINAL_JN");
			}
			break;
		case joaat("AT_CAT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CAT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CAT_JN");
			}
			break;
		case joaat("AT_CEDARWAXWING"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CEDAR_WAXWING_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CEDAR_WAXWING_JN");
			}
			break;
		case joaat("AT_CHICKEN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DOMINIQUE_CHICKEN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DOMINIQUE_CHICKEN_JN");
			}
			break;
		case joaat("AT_CHICKEN_PRAIRIE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PRARIE_CHICKEN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PRARIE_CHICKEN_JN");
			}
			break;
		case joaat("AT_CHICKEN_LEGHORN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGHORN_CHICKEN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGHORN_CHICKEN_JN");
			}
			break;
		case joaat("AT_CHICKEN_JAVA"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_JAVA_CHICKEN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_JAVA_CHICKEN_JN");
			}
			break;
		case joaat("AT_CHIPMUNK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CHIPMUNK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CHIPMUNK_JN");
			}
			break;
		case joaat("AT_CORMORANT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DOUBLE_CRESTED_CORMORANT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DOUBLE_CRESTED_CORMORANT_JN");
			}
			break;
		case joaat("AT_CORMORANT_NEO"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_NEOTROPIC_CORMORANT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_NEOTROPIC_CORMORANT_JN");
			}
			break;
		case joaat("AT_COUGAR"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_COUGAR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_COUGAR_JN");
			}
			break;
		case joaat("AT_COUGAR_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_COUGAR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_COUGAR_JN");
			}
			break;
		case joaat("AT_COW"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CRACKER_COW_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CRACKER_COW_JN");
			}
			break;
		case joaat("AT_COYOTE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_COYOTE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_COYOTE_JN");
			}
			break;
		case joaat("AT_COYOTE_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_COYOTE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_COYOTE_JN");
			}
			break;
		case joaat("AT_CRAB"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CRAB_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CRAB_JN");
			}
			break;
		case joaat("AT_CRANE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_WHOOPING_CRANE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_WHOOPING_CRANE_JN");
			}
			break;
		case joaat("AT_CRANE_SAND"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SANDHILL_CRANE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SANDHILL_CRANE_AR");
			}
			break;
		case joaat("AT_CRAYFISH"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CRAYFISH_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CRAYFISH_JN");
			}
			break;
		case joaat("AT_CROW"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_AMERICAN_CROW_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_AMERICAN_CROW_JN");
			}
			break;
		case joaat("AT_DEER"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DEER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DEER_JN");
			}
			break;
		case joaat("AT_DOG_AUSTRALIAN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_AUSTRALIAN_SHEPHERD_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_AUSTRALIAN_SHEPHERD_JN");
			}
			break;
		case joaat("AT_DOG_BLOODHOUND"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BLOODHOUND_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BLOODHOUND_JN");
			}
			break;
		case joaat("AT_DOG_BLUETICK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_COONHOUND_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_COONHOUND_JN");
			}
			break;
		case joaat("AT_DOG_BORDER"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_COLLIE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_COLLIE_JN");
			}
			break;
		case joaat("AT_DOG_CATAHOULA"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CATAHOULA_CUR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CATAHOULA_CUR_JN");
			}
			break;
		case joaat("AT_DOG_CHESAPEAKE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CHESAPEAKEBAY_RET_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CHESAPEAKEBAY_RET_JN");
			}
			break;
		case joaat("AT_DOG_FOXHOUND"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_FOX_HOUND_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_FOX_HOUND_JN");
			}
			break;
		case joaat("AT_DOG_HUSKY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_HUSKY_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_HUSKY_JN");
			}
			break;
		case joaat("AT_DOG_LAB"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LABRADOR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LABRADOR_JN");
			}
			break;
		case joaat("AT_DOG_MUTT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_MUTT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_MUTT_JN");
			}
			break;
		case joaat("AT_DOG"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_MONGREL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_MONGREL_JN");
			}
			break;
		case joaat("AT_DOG_POODLE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_POODLE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_POODLE_JN");
			}
			break;
		case joaat("AT_DONKEY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DONKEY_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DONKEY_JN");
			}
			break;
		case joaat("AT_DUCK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_MALLARD_DUCK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_MALLARD_DUCK_JN");
			}
			break;
		case joaat("AT_DUCK_PEKIN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PEKING_DUCK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PEKING_DUCK_JN");
			}
			break;
		case joaat("AT_EAGLE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BALD_EAGLE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BALD_EAGLE_JN");
			}
			break;
		case joaat("AT_EAGLE_GOLDEN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_GOLDEN_EAGLE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_GOLDEN_EAGLE_JN");
			}
			break;
		case joaat("AT_EGRET"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_REDDISH_EGRET_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_REDDISH_EGRET_JN");
			}
			break;
		case joaat("AT_EGRET_LITTLE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LITTLE_EGRET_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LITTLE_EGRET_JN");
			}
			break;
		case joaat("AT_EGRET_SNOWY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SNOWY_EGRET_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SNOWY_EGRET_JN");
			}
			break;
		case joaat("AT_ELK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ELK_F_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ELK_F_JN");
			}
			break;
		case joaat("AT_ELK_BULL"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ELK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ELK_JN");
			}
			break;
		case joaat("AT_ELK_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_ELK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_ELK_JN");
			}
			break;
		case joaat("AT_FOX"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_FOX_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_FOX_JN");
			}
			break;
		case joaat("AT_FOX_GRAY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_GREY_FOX_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_GREY_FOX_JN");
			}
			break;
		case joaat("AT_FOX_SILVER"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SILVER_FOX_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SILVER_FOX_JN");
			}
			break;
		case joaat("AT_FOX_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_FOX_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_FOX_JN");
			}
			break;
		case joaat("AT_GATOR"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ALIGATOR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ALIGATOR_JN");
			}
			break;
		case joaat("AT_GATOR_BULL"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BULLGATOR_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_BULLGATOR_JN");
			}
			break;
		case joaat("AT_GILAMONSTER"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_GILA_MONSTER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_GILA_MONSTER_JN");
			}
			break;
		case joaat("AT_GOAT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ALPINE_GOAT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ALPINE_GOAT_JN");
			}
			break;
		case joaat("AT_GOOSE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CANADA_GOOSE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CANADA_GOOSE_JN");
			}
			break;
		case joaat("AT_HAWK_RED"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_HAWK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_HAWK_JN");
			}
			break;
		case joaat("AT_HAWK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_FERRUGINIOUS_HAWK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_FERRUGINIOUS_HAWK_JN");
			}
			break;
		case joaat("AT_HAWK_ROUGH"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ROUGH_LEGGED_HAWK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ROUGH_LEGGED_HAWK_JN");
			}
			break;
		case joaat("AT_HERON"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BLUE_HERON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BLUE_HERON_JN");
			}
			break;
		case joaat("AT_HERON_TRI"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BLUE_HERON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BLUE_HERON_JN");
			}
			break;
		case joaat("AT_HORSE"):
			if (((iParam1 == joaat("A_C_HORSE_AMERICANPAINT_OVERO") || iParam1 == joaat("A_C_HORSE_AMERICANPAINT_SPLASHEDWHITE")) || iParam1 == joaat("A_C_HORSE_AMERICANPAINT_TOBIANO")) || iParam1 == joaat("A_C_HORSE_AMERICANPAINT_GREYOVERO"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_AMERICAN_PAINT_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_AMERICAN_PAINT_JN");
				}
			}
			else if (((iParam1 == joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK") || iParam1 == joaat("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN")) || iParam1 == joaat("A_C_HORSE_AMERICANSTANDARDBRED_PALOMINODAPPLE")) || iParam1 == joaat("A_C_HORSE_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_AMERICAN_STANDARDBRED_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_AMERICAN_STANDARDBRED_JN");
				}
			}
			else if ((iParam1 == joaat("A_C_HORSE_ANDALUSIAN_DARKBAY") || iParam1 == joaat("A_C_HORSE_ANDALUSIAN_PERLINO")) || iParam1 == joaat("A_C_HORSE_ANDALUSIAN_ROSEGRAY"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_ANDALUSIAN_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_ANDALUSIAN_JN");
				}
			}
			else if ((((iParam1 == joaat("A_C_HORSE_APPALOOSA_BLANKET") || iParam1 == joaat("A_C_HORSE_APPALOOSA_LEOPARD")) || iParam1 == joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET")) || iParam1 == joaat("A_C_HORSE_APPALOOSA_BROWNLEOPARD")) || iParam1 == joaat("A_C_HORSE_APPALOOSA_FEWSPOTTED_PC"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_APPALOOSA_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_APPALOOSA_JN");
				}
			}
			else if ((((iParam1 == joaat("A_C_HORSE_ARABIAN_BLACK") || iParam1 == joaat("A_C_HORSE_ARABIAN_REDCHESTNUT")) || iParam1 == joaat("A_C_HORSE_ARABIAN_ROSEGREYBAY")) || iParam1 == joaat("A_C_HORSE_ARABIAN_WARPEDBRINDLE_PC")) || iParam1 == joaat("A_C_HORSE_ARABIAN_WHITE"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_ARABIAN_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_ARABIAN_JN");
				}
			}
			else if ((iParam1 == joaat("A_C_HORSE_ARDENNES_BAYROAN") || iParam1 == joaat("A_C_HORSE_ARDENNES_IRONGREYROAN")) || iParam1 == joaat("A_C_HORSE_ARDENNES_STRAWBERRYROAN"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_ARDENNES_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_ARDENNES_JN");
				}
			}
			else if (iParam1 == joaat("A_C_HORSE_BELGIAN_BLONDCHESTNUT") || iParam1 == joaat("A_C_HORSE_BELGIAN_MEALYCHESTNUT"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_BELGIAN_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_BELGIAN_JN");
				}
			}
			else if ((iParam1 == joaat("A_C_HORSE_DUTCHWARMBLOOD_CHOCOLATEROAN") || iParam1 == joaat("A_C_HORSE_DUTCHWARMBLOOD_SEALBROWN")) || iParam1 == joaat("A_C_HORSE_DUTCHWARMBLOOD_SOOTYBUCKSKIN"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_DUTCH_WARMBLOOD_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_DUTCH_WARMBLOOD_JN");
				}
			}
			else if ((iParam1 == joaat("A_C_HORSE_HUNGARIANHALFBRED_DARKDAPPLEGREY") || iParam1 == joaat("A_C_HORSE_HUNGARIANHALFBRED_FLAXENCHESTNUT")) || iParam1 == joaat("A_C_HORSE_HUNGARIANHALFBRED_PIEBALDTOBIANO"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_HUNGARIAN_HALFBRED_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_HUNGARIAN_HALFBRED_JN");
				}
			}
			else if ((((iParam1 == joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK") || iParam1 == joaat("A_C_HORSE_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC")) || iParam1 == joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO")) || iParam1 == joaat("A_C_HORSE_KENTUCKYSADDLE_GREY")) || iParam1 == joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_KENTUCKY_SADDLER_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_KENTUCKY_SADDLER_JN");
				}
			}
			else if (iParam1 == joaat("A_C_HORSE_MISSOURIFOXTROTTER_AMBERCHAMPAGNE") || iParam1 == joaat("A_C_HORSE_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_MISSOURI_FOXTROTTER_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_MISSOURI_FOXTROTTER_JN");
				}
			}
			else if ((((iParam1 == joaat("A_C_HORSE_MORGAN_BAY") || iParam1 == joaat("A_C_HORSE_MORGAN_BAYROAN")) || iParam1 == joaat("A_C_HORSE_MORGAN_LIVERCHESTNUT_PC")) || iParam1 == joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT")) || iParam1 == joaat("A_C_HORSE_MORGAN_PALOMINO"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_MORGAN_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_MORGAN_JN");
				}
			}
			else if ((iParam1 == joaat("A_C_HORSE_MUSTANG_GRULLODUN") || iParam1 == joaat("A_C_HORSE_MUSTANG_TIGERSTRIPEDBAY")) || iParam1 == joaat("A_C_HORSE_MUSTANG_WILDBAY"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_MUSTANG_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_MUSTANG_JN");
				}
			}
			else if ((iParam1 == joaat("A_C_HORSE_NOKOTA_BLUEROAN") || iParam1 == joaat("A_C_HORSE_NOKOTA_REVERSEDAPPLEROAN")) || iParam1 == joaat("A_C_HORSE_NOKOTA_WHITEROAN"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_NOKOTA_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_NOKOTA_JN");
				}
			}
			else if ((iParam1 == joaat("A_C_HORSE_SHIRE_DARKBAY") || iParam1 == joaat("A_C_HORSE_SHIRE_LIGHTGREY")) || iParam1 == joaat("A_C_HORSE_SHIRE_RAVENBLACK"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_SHIRE_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_SHIRE_JN");
				}
			}
			else if (iParam1 == joaat("A_C_HORSE_SUFFOLKPUNCH_REDCHESTNUT") || iParam1 == joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_SUFFOLK_PUNCH_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_SUFFOLK_PUNCH_JN");
				}
			}
			else if ((((((iParam1 == joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO") || iParam1 == joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT")) || iParam1 == joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY")) || iParam1 == joaat("A_C_HORSE_TENNESSEEWALKER_GOLDPALOMINO_PC")) || iParam1 == joaat("A_C_HORSE_TENNESSEEWALKER_MAHOGANYBAY")) || iParam1 == joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN")) || iParam1 == joaat("A_C_HORSE_TENNESSEEWALKER_FLAXENROAN"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_TENNESSEE_WALKER_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_TENNESSEE_WALKER_JN");
				}
			}
			else if ((((iParam1 == joaat("A_C_HORSE_THOROUGHBRED_BLACKCHESTNUT") || iParam1 == joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY")) || iParam1 == joaat("A_C_HORSE_THOROUGHBRED_BRINDLE")) || iParam1 == joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY")) || iParam1 == joaat("A_C_HORSE_THOROUGHBRED_REVERSEDAPPLEBLACK"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_THOROUGHBRED_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_THOROUGHBRED_JN");
				}
			}
			else if ((iParam1 == joaat("A_C_HORSE_TURKOMAN_DARKBAY") || iParam1 == joaat("A_C_HORSE_TURKOMAN_GOLD")) || iParam1 == joaat("A_C_HORSE_TURKOMAN_SILVER"))
			{
				if (iParam2 == 1)
				{
					return joaat("JOURNAL_ANIMAL_TURKOMAN_AR");
				}
				else
				{
					return joaat("JOURNAL_ANIMAL_TURKOMAN_JN");
				}
			}
			break;
		case joaat("AT_IGUANA"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_IGUANA_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_IGUANA_JN");
			}
			break;
		case joaat("AT_IGUANA_DESERT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DESERT_IGUANA_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DESERT_IGUANA_JN");
			}
			break;
		case joaat("AT_JAVELINA"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PECCARY_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PECCARY_JN");
			}
			break;
		case joaat("AT_LOON"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_COMMON_LOON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_COMMON_LOON_JN");
			}
			break;
		case joaat("AT_LOON_PACIFIC"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PACIFIC_LOON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PACIFIC_LOON_JN");
			}
			break;
		case joaat("AT_LOON_YELLOW"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_YELLOW_BILLED_LOON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_YELLOW_BILLED_LOON_JN");
			}
			break;
		case joaat("AT_MOOSE_BULL"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_MOOSE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_MOOSE_JN");
			}
			break;
		case joaat("AT_MOOSE_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_MOOSE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_MOOSE_JN");
			}
			break;
		case joaat("AT_MULE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_MULE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_MULE_JN");
			}
			break;
		case joaat("AT_MUSKRAT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_MUSKRAT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_MUSKRAT_JN");
			}
			break;
		case joaat("AT_ORIOLE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ORIOLE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ORIOLE_JN");
			}
			break;
		case joaat("AT_ORIOLE_HOODED"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_HOODED_ORIOLE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_HOODED_ORIOLE_JN");
			}
			break;
		case joaat("AT_OWL_NORTH"):
		case joaat("AT_OWL"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_HORNED_OWL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_HORNED_OWL_JN");
			}
			break;
		case joaat("AT_OWL_CALI"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_GREAT_HORNED_OWL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_GREAT_HORNED_OWL_JN");
			}
			break;
		case joaat("AT_OX"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_OXEN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_OXEN_JN");
			}
			break;
		case joaat("AT_OX_DEVON"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DEVON_OXEN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DEVON_OXEN_JN");
			}
			break;
		case joaat("AT_PANTHER"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_FLORIDA_PANTHER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_FLORIDA_PANTHER_JN");
			}
			break;
		case joaat("AT_PANTHER_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_PANTHER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_PANTHER_JN");
			}
			break;
		case joaat("AT_PARROT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PARROT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PARROT_JN");
			}
			break;
		case joaat("AT_PARROT_GREEN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_GREAT_GREEN_MACAW_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_GREAT_GREEN_MACAW_JN");
			}
			break;
		case joaat("AT_PARROT_SCARLET"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SCARLET_MACAW_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SCARLET_MACAW_JN");
			}
			break;
		case joaat("AT_PELICAN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PELICAN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PELICAN_JN");
			}
			break;
		case joaat("AT_PELICAN_BROWN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BROWN_PELICAN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BROWN_PELICAN_JN");
			}
			break;
		case joaat("AT_PHEASANT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RING_NECKED_PHEASANT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RING_NECKED_PHEASANT_JN");
			}
			break;
		case joaat("AT_PHEASANT_CHINESE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PHEASANT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PHEASANT_JN");
			}
			break;
		case joaat("AT_PIG"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PIG_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PIG_JN");
			}
			break;
		case joaat("AT_PIG_CHINA"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_CHINA_PIG_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_CHINA_PIG_JN");
			}
			break;
		case joaat("AT_PIG_SPOT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_OLD_SPOT_PIG_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_OLD_SPOT_PIG_JN");
			}
			break;
		case joaat("AT_PIGEON"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PIGEON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PIGEON_JN");
			}
			break;
		case joaat("AT_PIGEON_BAND"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BAND_TAILED_PIGEON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BAND_TAILED_PIGEON_JN");
			}
			break;
		case joaat("AT_POSSUM"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_POSSUM_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_POSSUM_JN");
			}
			break;
		case joaat("AT_PRONGHORN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_PRONGHORN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_PRONGHORN_JN");
			}
			break;
		case joaat("AT_PRONGHORN_BAJA"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BAJA_CALIFORNIAN_PRONGHORN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BAJA_CALIFORNIAN_PRONGHORN_JN");
			}
			break;
		case joaat("AT_PRONGHORN_SONO"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SONORAN_PRONGHORN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SONORAN_PRONGHORN_JN");
			}
			break;
		case joaat("AT_PRONGHORN_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_PRONGHORN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_PRONGHORN_JN");
			}
			break;
		case joaat("AT_QUAIL"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_QUAIL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_QUAIL_JN");
			}
			break;
		case joaat("AT_RABBIT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RABBIT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RABBIT_JN");
			}
			break;
		case joaat("AT_RACCOON"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RACCOON_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RACCOON_JN");
			}
			break;
		case joaat("AT_RAMSHEEP_ROCKY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BIGHORN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BIGHORN_JN");
			}
			break;
		case joaat("AT_RAMSHEEP_DESERT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DESERT_BIG_HORN_SHEEP_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DESERT_BIG_HORN_SHEEP_JN");
			}
			break;
		case joaat("AT_RAM_DESERT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_DESERT_BIGHORN_RAM_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_DESERT_BIGHORN_RAM_JN");
			}
			break;
		case joaat("AT_RAM_ROCKY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ROCKY_MOUNTAIN_BIGHORN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ROCKY_MOUNTAIN_BIGHORN_JN");
			}
			break;
		case joaat("AT_RAM_SIERRA"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SIERRA_NEVADA_BIGHORN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SIERRA_NEVADA_BIGHORN_JN");
			}
			break;
		case joaat("AT_RAMSHEEP_SIERRA"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SIERRA_NEVADA_BIGHORN_SHEEP_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SIERRA_NEVADA_BIGHORN_SHEEP_JN");
			}
			break;
		case joaat("AT_RAM_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_LONG_HORN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_LONG_HORN_JN");
			}
			break;
		case joaat("AT_RAT_BLACK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RAT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RAT_JN");
			}
			break;
		case joaat("AT_RAT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BROWN_RAT_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BROWN_RAT_JN");
			}
			break;
		case joaat("AT_RAVEN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RAVEN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RAVEN_JN");
			}
			break;
		case joaat("AT_REDFOOTEDBOOBY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RED_FOOTED_BOOBY_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RED_FOOTED_BOOBY_JN");
			}
			break;
		case joaat("AT_ROBIN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ROBIN_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ROBIN_JN");
			}
			break;
		case joaat("AT_ROOSTER_JAVA"):
		case joaat("AT_ROOSTER"):
		case joaat("AT_ROOSTER_LEGHORN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_ROOSTER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_ROOSTER_JN");
			}
			break;
		case joaat("AT_ROSESPOONBILL"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SPOONBILL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SPOONBILL_JN");
			}
			break;
		case joaat("AT_SEAGULL"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SEAGULL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SEAGULL_JN");
			}
			break;
		case joaat("AT_SEAGULL_LAUGH"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LAUGHING_GULL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LAUGHING_GULL_JN");
			}
			break;
		case joaat("AT_SEAGULL_RING"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_HERRING_GULL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_HERRING_GULL_JN");
			}
			break;
		case joaat("AT_SHEEP"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SHEEP_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SHEEP_JN");
			}
			break;
		case joaat("AT_SKUNK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SKUNK_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SKUNK_JN");
			}
			break;
		case joaat("AT_SNAKE_BOA"):
		case joaat("AT_SNAKE_BOA_RAINBOW"):
		case joaat("AT_SNAKE_BOA_SUN"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RED_BOA_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RED_BOA_JN");
			}
			break;
		case joaat("AT_SNAKE_FERDELANCE"):
		case joaat("AT_SNAKE_COPPER_NORTH"):
		case joaat("AT_SNAKE_COPPER_SOUTH"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_FERDELANCE_SNAKE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_FERDELANCE_SNAKE_JN");
			}
			break;
		case joaat("AT_SNAKE_BLACK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BLACK_TAIL_RATTLESNAKE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BLACKTAILED_RATTLE_SNAKE_JN");
			}
			break;
		case joaat("AT_SNAKE_COTTON"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_COTTONMOUTH_SNAKE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_COTTONMOUTH_SNAKE_JN");
			}
			break;
		case joaat("AT_SNAKE_DIAMOND"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RATTLESNAKE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RATTLESNAKE_JN");
			}
			break;
		case joaat("AT_SONGBIRD"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SONGBIRD_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SONGBIRD_JN");
			}
			break;
		case joaat("AT_SONGBIRD_SCARLET"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SCARLET_TANAGER_SONGBIRD_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SCARLET_TANAGER_SONGBIRD_JN");
			}
			break;
		case joaat("AT_SPARROW"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SPARROW_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SPARROW_JN");
			}
			break;
		case joaat("AT_SPARROW_EURO"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_EURASIAN_TREE_SPARROW_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_EURASIAN_TREE_SPARROW_JN");
			}
			break;
		case joaat("AT_SPARROW_GOLD"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_GOLDEN_CROWNED_SPARROW_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_GOLDEN_CROWNED_SPARROW_JN");
			}
			break;
		case joaat("AT_SQUIRREL"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SQUIRREL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SQUIRREL_JN");
			}
			break;
		case joaat("AT_SQUIRREL_RED"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RED_SQUIRREL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RED_SQUIRREL_JN");
			}
			break;
		case joaat("AT_SQUIRREL_BLACK"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_BLACK_SQUIRREL_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_BLACK_SQUIRREL_JN");
			}
			break;
		case joaat("AT_TOAD"):
		case joaat("AT_TOAD_DESERT"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_TOAD_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_TOAD_JN");
			}
			break;
		case joaat("AT_TURKEY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_TURKEY_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_TURKEY_JN");
			}
			break;
		case joaat("AT_TURKEY_RIO"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_RIO_GRANDE_TURKEY_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_RIO_GRANDE_TURKEY_JN");
			}
			break;
		case joaat("AT_TURTLE_SEA"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SEA_TURTLE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SEA_TURTLE_JN");
			}
			break;
		case joaat("AT_TURTLE_SNAP"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_SNAPPING_TURTLE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_SNAPPING_TURTLE_JN");
			}
			break;
		case joaat("AT_VULTURE_EAST"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_EASTERN_TURKEY_VULTURE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_EASTERN_TURKEY_VULTURE_JN");
			}
			break;
		case joaat("AT_VULTURE"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_WESTERN_VULTURE_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_WESTERN_VULTURE_JN");
			}
			break;
		case joaat("AT_WOLF"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_WOLF_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_WOLF_JN");
			}
			break;
		case joaat("AT_WOLF_LEGENDARY"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_WOLF_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_LEGENDARY_WOLF_JN");
			}
			break;
		case joaat("AT_WOLF_TIMBER"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_TIMBER_WOLF_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_TIMBER_WOLF_JN");
			}
			break;
		case joaat("AT_WOODPECKER_RED"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_WOOD_PECKER_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_WOOD_PECKER_JN");
			}
			break;
		case joaat("AT_WOODPECKER_PILEATED"):
			if (iParam2 == 1)
			{
				return joaat("JOURNAL_ANIMAL_WOOD_PECKER_02_AR");
			}
			else
			{
				return joaat("JOURNAL_ANIMAL_WOOD_PECKER_02_JN");
			}
			break;
		default:
			break;
	}
	return 0;
}

bool func_933(int iParam0)
{
	return Global_1327590.f_19684 == iParam0;
}

bool func_934()
{
	if (PED::_IS_PED_CARRYING(Global_35) || __LIB_2__::func_365(Global_35))
	{
		return true;
	}
	return false;
}

void func_935(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar0 /*113*/].f_5))
		{
		}
		else
		{
			if (uParam0->f_107[iVar0 /*113*/].f_8 == 3)
			{
				if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_107[iVar0 /*113*/].f_8.f_23))
				{
					TASK::_DELETE_SCENARIO_POINT(uParam0->f_107[iVar0 /*113*/].f_8.f_23);
				}
			}
			if (uParam0->f_107[iVar0 /*113*/].f_32.f_1 == 3)
			{
				if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_107[iVar0 /*113*/].f_32.f_21))
				{
					TASK::_DELETE_SCENARIO_POINT(uParam0->f_107[iVar0 /*113*/].f_32.f_21);
				}
			}
			if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_107[iVar0 /*113*/].f_101))
			{
				VOLUME::_DELETE_VOLUME(uParam0->f_107[iVar0 /*113*/].f_101);
			}
		}
		iVar0++;
	}
}

int func_936(var uParam0, int iParam1)
{
	if (*uParam0 >= 0 && *uParam0 < Global_1327590.f_19547)
	{
		Global_1327590.f_19547[*uParam0 /*5*/].f_1 = iParam1;
		return 1;
	}
	return 0;
}

void func_937(var uParam0)
{
	if (PROPSET::_DOES_PROPSET_EXIST(uParam0->f_1976.f_6))
	{
		PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(uParam0->f_1976.f_6);
	}
}

void func_938(var uParam0)
{
	if (!HUD::_DOES_TEXT_DATABASE_EXIST(&(uParam0->f_2232)))
	{
		return;
	}
	HUD::_TEXT_DATABASE_DELETE(&(uParam0->f_2232));
}

void func_939(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (uParam0->f_107[iVar0 /*113*/].f_32.f_2 != 0)
		{
			STREAMING::_0x4EDDD9E9CA5AF985(uParam0->f_107[iVar0 /*113*/].f_32.f_2);
		}
		if (uParam0->f_107[iVar0 /*113*/].f_8.f_1 != 0)
		{
			STREAMING::_0x4EDDD9E9CA5AF985(uParam0->f_107[iVar0 /*113*/].f_8.f_1);
		}
		iVar0++;
	}
}

void func_940(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2236)
	{
		if (!STREAMING::DOES_ANIM_DICT_EXIST(&(uParam0->f_2236[iVar0 /*8*/])))
		{
		}
		else
		{
			STREAMING::REMOVE_ANIM_DICT(&(uParam0->f_2236[iVar0 /*8*/]));
		}
		iVar0++;
	}
}

void func_941(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1984)
	{
		iVar1 = uParam0->f_1984[iVar0];
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar1))
		{
		}
		else
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iVar1);
		}
		iVar0++;
	}
}

void func_942(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar0 /*113*/].f_5))
		{
		}
		else
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_107[iVar0 /*113*/].f_32.f_23)))
			{
				PED::_REMOVE_PED_EMOTIONAL_PRESET(uParam0->f_107[iVar0 /*113*/].f_5, &(uParam0->f_107[iVar0 /*113*/].f_32.f_23));
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_107[iVar0 /*113*/].f_32.f_28)))
			{
				PED::_0xDE7B2B4144906CDF(MISC::GET_HASH_KEY(&(uParam0->f_107[iVar0 /*113*/].f_32.f_28)), uParam0->f_107[iVar0 /*113*/].f_5);
			}
		}
		iVar0++;
	}
}

bool func_943(int iParam0)
{
	if (Global_1327590.f_19744 == -1)
	{
		return false;
	}
	return Global_1327590.f_19744 == iParam0;
}

void func_944()
{
	Global_1327590.f_19744 = -1;
}

var func_945(int iParam0)
{
	return Global_1327590.f_23[iParam0 /*17*/].f_12;
}

bool func_946(int iParam0)
{
	return (((((((((iParam0 >= 508 && iParam0 <= 635) || iParam0 == 49) || iParam0 == 50) || iParam0 == 51) || iParam0 == 498) || iParam0 == 506) || iParam0 == 502) || iParam0 == 507) || iParam0 == 456);
}

bool func_947(int iParam0)
{
	return (iParam0 >= 342 && iParam0 <= 426);
}

bool func_948(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 22);
}

int func_949(var uParam0)
{
	if (*uParam0 >= 0 && *uParam0 < Global_1327590.f_19547)
	{
		return Global_1327590.f_19547[*uParam0 /*5*/].f_1;
	}
	return 0;
}

void func_950(var uParam0)
{
	Global_1327590.f_19547[*uParam0 /*5*/].f_4 = 1;
}

bool func_951(var uParam0)
{
	return Global_1327590.f_19547[*uParam0 /*5*/].f_4;
}

int func_952(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_107)
	{
		return 0;
	}
	return uParam0->f_107[iParam1 /*113*/].f_5;
}

char* func_953(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "VIG_INVALID";
		case 0:
			return "VIG_AV_BUTCHER_BLEED_DEER";
		case 1:
			return "VIG_AV_BUTCHER_HANG_CARCASS";
		case 2:
			return "VIG_AV_BUTCHER_FEED_DOG_P2";
		case 3:
			return "VIG_AV_DOG_BED_JUMP_DOWN";
		case 4:
			return "VIG_AV_DOG_JUMP_AND_LICK";
		case 5:
			return "VIG_AV_DOG_LICK_TABLE";
		case 6:
			return "VIG_AV_DOG_PET_SITTING_FEMALE";
		case 7:
			return "VIG_AV_DOG_PET_SITTING_MALE";
		case 8:
			return "VIG_AV_DONATE_MALE";
		case 9:
			return "VIG_AV_DONATE_LOOK_MALE";
		case 10:
			return "VIG_AV_DROP_RABBIT_TABLE";
		case 11:
			return "VIG_AV_DRUNK_CAMPFIRE_D";
		case 12:
			return "VIG_AV_FIRE_BLOW";
		case 13:
			return "VIG_AV_FIRE_POKE";
		case 14:
			return "VIG_AV_FIRE_START";
		case 15:
			return "VIG_AV_JACK_LOOK_POT";
		case 16:
			return "VIG_AV_JACK_POKE_FIRE";
		case 17:
			return "VIG_AV_LIGHT_SMOKE";
		case 20:
			return "VIG_AV_START_PHONOGRAPH";
		case 19:
			return "VIG_AV_SORE_JOINTS_FEMALE";
		case 18:
			return "VIG_AV_SORE_JOINTS_MALE";
		case 21:
			return "VIG_AV_WHISPER_SIT";
		case 22:
			return "VIG_AV_WHISPER_STAND";
		case 23:
			return "CCABI_CNV_1";
		case 24:
			return "CCABI_CNV_2";
		case 25:
			return "CCABI_CNV_3";
		case 26:
			return "CCABI_CNV_4";
		case 27:
			return "CCABI_CNV_5";
		case 28:
			return "CCABI_CNV_6";
		case 29:
			return "CCABI_CNV_7";
		case 30:
			return "CCABI_CNV_8";
		case 31:
			return "CCABI_CNV_9";
		case 32:
			return "CCABI_CNV_10";
		case 33:
			return "CCABI_CNV_11";
		case 34:
			return "CCABI_CNV_12";
		case 35:
			return "CCABI_CNV_13";
		case 36:
			return "CCABI_CNV_14";
		case 37:
			return "CCABI_CNV_15";
		case 38:
			return "CCABI_CNV_16";
		case 39:
			return "CCABI_CNV_17";
		case 40:
			return "CCABI_CNV_19";
		case 41:
			return "CCABI_CNV_20";
		case 42:
			return "CCABI_CNV_21";
		case 43:
			return "CCABI_CNV_23";
		case 44:
			return "CCAM_CONF_CNV_1";
		case 45:
			return "CCAM_CONF_CNV_2";
		case 46:
			return "CCAM_CONF_CNV_3";
		case 47:
			return "CCAM_CONF_CNV_4";
		case 48:
			return "CCAM_CONF_CNV_5";
		case 49:
			return "CCAM_CLN_CNV_1";
		case 50:
			return "CCAM_CLN_CNV_2";
		case 51:
			return "CCAM_CLN_CNV_3";
		case 52:
			return "CCBLL_CNV_4";
		case 53:
			return "CCBLL_CNV_5";
		case 54:
			return "CCBLL_CNV_6";
		case 55:
			return "CCBLL_CNV_8";
		case 56:
			return "CCBLL_CNV_9";
		case 57:
			return "CCBLL_CNV_10";
		case 58:
			return "CCBLL_CNV_11";
		case 59:
			return "CCBLL_CNV_13";
		case 60:
			return "CCBLL_CNV_14";
		case 61:
			return "CCBLL_CNV_15";
		case 62:
			return "CCCHR_CNV_1";
		case 63:
			return "CCCHR_CNV_2";
		case 64:
			return "CCCHR_CNV_3";
		case 65:
			return "CCCHR_CNV_5";
		case 66:
			return "CCDNA_CNV_1";
		case 67:
			return "CCDNH_CNV_1";
		case 68:
			return "CCDNH_CNV_2";
		case 69:
			return "CCDNH_CNV_3";
		case 70:
			return "CCDNH_CNV_4";
		case 71:
			return "CCDNH_CNV_5";
		case 72:
			return "CCDNH_CNV_6";
		case 73:
			return "CCDNH_CNV_7";
		case 74:
			return "CCDNH_CNV_8";
		case 75:
			return "CCDNH_CNV_9";
		case 76:
			return "CCDNH_CNV_10";
		case 77:
			return "CCDNH_CNV_11";
		case 78:
			return "CCDNH_CNV_12";
		case 79:
			return "CCDNJ_CNV_1";
		case 80:
			return "CCDNJ_CNV_2";
		case 81:
			return "CCDNJ_CNV_3";
		case 82:
			return "CCDNJ_CNV_4";
		case 83:
			return "CCDNJ_CNV_5";
		case 84:
			return "CCDNJ_CNV_6";
		case 85:
			return "CCDNJ_CNV_7";
		case 86:
			return "CCDNK_CNV_1";
		case 87:
			return "CCDNK_CNV_2";
		case 88:
			return "CCDNK_CNV_3";
		case 89:
			return "CCDNK_CNV_4";
		case 90:
			return "CCDNL_CNV_1";
		case 91:
			return "CCDNL_CNV_2";
		case 92:
			return "CCDNM_CNV_1";
		case 93:
			return "CCDNM_CNV_2";
		case 94:
			return "CCDNM_CNV_3";
		case 95:
			return "CCDNV_CNV_2";
		case 96:
			return "CCDOG_CNV_1";
		case 97:
			return "CCDOG_CNV_4";
		case 98:
			return "CCDOG_CNV_5";
		case 99:
			return "CCDOG_CNV_6";
		case 100:
			return "CCDOG_CNV_8";
		case 101:
			return "CCDTC_CNV_3";
		case 102:
			return "CCDTC_CNV_4";
		case 103:
			return "CCDTC_CNV_6";
		case 104:
			return "CCDTC_CNV_7";
		case 105:
			return "CCDTC_CNV_8";
		case 106:
			return "CCDTC_CNV_10";
		case 107:
			return "CCDTC_CNV_11";
		case 108:
			return "CCDTC_CNV_12";
		case 109:
			return "CCDTC_CNV_13";
		case 110:
			return "CCDTC_CNV_14";
		case 111:
			return "CCDTC_CNV_15";
		case 112:
			return "CCDTC_CNV_17";
		case 113:
			return "CCDTC_CNV_18";
		case 114:
			return "CCDTC_CNV_19";
		case 115:
			return "CCDTC_CNV_20";
		case 116:
			return "CCDTC_CNV_21";
		case 117:
			return "CCDTC_CNV_22";
		case 118:
			return "CCDTC_CNV_23";
		case 119:
			return "CCDTC_CNV_24";
		case 120:
			return "CCDTC_CNV_25";
		case 121:
			return "CCDTC_CNV_28";
		case 122:
			return "CCDTC_CNV_29";
		case 123:
			return "CCDTC_CNV_30";
		case 124:
			return "CCDTC_CNV_31";
		case 125:
			return "CCDTC_CNV_32";
		case 126:
			return "CCDTC_CNV_33";
		case 127:
			return "CCDTC_CNV_34";
		case 128:
			return "CCHSH_CNV_1";
		case 129:
			return "CCHSH_CNV_3";
		case 130:
			return "CCHSH_CNV_4";
		case 131:
			return "CCHSH_CNV_6";
		case 132:
			return "CCHSH_CNV_7";
		case 133:
			return "CCHSH_CNV_8";
		case 134:
			return "CCHSH_CNV_9";
		case 135:
			return "CCHSH_CNV_11";
		case 136:
			return "CCHSH_CNV_12";
		case 137:
			return "CCHSH_CNV_13";
		case 138:
			return "CCHSH_CNV_14";
		case 139:
			return "CCHSH_CNV_15";
		case 140:
			return "CCHSH_CNV_16";
		case 141:
			return "CCHSH_CNV_17";
		case 142:
			return "CCHSH_CNV_18";
		case 143:
			return "CCHSH_CNV_19";
		case 144:
			return "CCJAV_CNV_1";
		case 145:
			return "CCJAV_CNV_2";
		case 146:
			return "CCJAV_CNV_3";
		case 147:
			return "CCJAV_CNV_4";
		case 148:
			return "CCJAV_CNV_5";
		case 149:
			return "CCJAV_CNV_7";
		case 150:
			return "CCJAV_CNV_8";
		case 151:
			return "CCJAV_CNV_9";
		case 152:
			return "CCJAV_CNV_10";
		case 153:
			return "CCJAV_CNV_11";
		case 154:
			return "CCJCK_CNV_1";
		case 155:
			return "CCJCK_CNV_2";
		case 156:
			return "CCJCK_CNV_3";
		case 157:
			return "CCJCK_CNV_4";
		case 158:
			return "CCJCK_CNV_5";
		case 159:
			return "CCJCK_PAR_CNV1";
		case 160:
			return "CCJHN_CNV_1";
		case 161:
			return "CCJHN_CNV_2";
		case 162:
			return "CCJHN_CNV_3";
		case 163:
			return "CCJHN_CNV_4";
		case 164:
			return "CCJHN_CNV_5";
		case 165:
			return "CCJHN_CNV_6";
		case 166:
			return "CCJHN_CNV_7";
		case 167:
			return "CCJHN_CNV_8";
		case 168:
			return "CCJHN_CNV_9";
		case 169:
			return "CCJHN_CNV_10";
		case 170:
			return "CCKAR_CNV_1";
		case 171:
			return "CCKAR_CNV_2";
		case 172:
			return "CCKAR_CNV_3";
		case 173:
			return "CCKAR_CNV_4";
		case 174:
			return "CCKAR_CNV_5";
		case 175:
			return "CCKAR_CNV_6";
		case 176:
			return "CCKAR_CNV_7";
		case 177:
			return "CCKAR_CNV_8";
		case 178:
			return "CCKAR_CNV_9";
		case 179:
			return "CCKAR_CNV_10";
		case 180:
			return "CCKAR_CNV_11";
		case 181:
			return "CCKAR_CNV_12";
		case 182:
			return "CCKAR_CNV_13";
		case 183:
			return "CCKAR_PAR_CNV2";
		case 184:
			return "CCKAR_PAR_CNV3";
		case 185:
			return "CCKIE_CNV_1";
		case 186:
			return "CCKIE_CNV_4";
		case 187:
			return "CCKIE_CNV_5";
		case 188:
			return "CCKIE_CNV_7";
		case 189:
			return "CCKIE_CNV_8";
		case 190:
			return "CCKIE_CNV_9";
		case 191:
			return "CCKIE_CNV_10";
		case 192:
			return "CCKIE_CNV_11";
		case 193:
			return "CCKIE_CNV_12";
		case 194:
			return "CCKIE_CNV_13";
		case 195:
			return "CCKIE_CNV_14";
		case 196:
			return "CCKIE_CNV_15";
		case 197:
			return "CCLEN_CNV_1";
		case 198:
			return "CCLEN_CNV_2";
		case 199:
			return "CCLEN_CNV_3";
		case 200:
			return "CCLEN_CNV_4";
		case 201:
			return "CCLEN_CNV_5";
		case 202:
			return "CCLEN_CNV_6";
		case 203:
			return "CCLEN_CNV_7";
		case 204:
			return "CCLEN_CNV_8";
		case 205:
			return "CCLNSNM_CNV_1";
		case 206:
			return "CCMCH_CNV_2";
		case 207:
			return "CCMCH_CNV_3";
		case 208:
			return "CCMCH_CNV_5";
		case 209:
			return "CCMCH_CNV_6";
		case 210:
			return "CCMCH_CNV_7";
		case 211:
			return "CCMCH_CNV_8";
		case 212:
			return "CCMCH_CNV_10";
		case 213:
			return "CCMCH_CNV_11";
		case 214:
			return "CCMCH_CNV_12";
		case 215:
			return "CCMCH_CNV_13";
		case 216:
			return "CCMCH_CNV_15";
		case 217:
			return "CCMCH_CNV_16";
		case 218:
			return "CCMCH_CNV_17";
		case 219:
			return "CCMCH_CNV_18";
		case 220:
			return "CCMCH_CNV_19";
		case 221:
			return "CCMCH_CNV_20";
		case 222:
			return "CCMCH_CNV_21";
		case 223:
			return "CCMCH_CNV_22";
		case 224:
			return "CCMCH_CNV_24";
		case 225:
			return "CCMCH_CNV_25";
		case 226:
			return "CCMCH_CNV_26";
		case 227:
			return "CCMCH_CNV_27";
		case 228:
			return "CCMCH_CNV_28";
		case 229:
			return "CCMCH_CNV_29";
		case 230:
			return "CCMCH_CNV_30";
		case 231:
			return "CCMCH_CNV_31";
		case 232:
			return "CCMCH_CNV_32";
		case 233:
			return "CCMCH_CNV_33";
		case 234:
			return "CCMLL_CNV_1";
		case 235:
			return "CCMLL_CNV_2";
		case 236:
			return "CCMLL_CNV_3";
		case 237:
			return "CCMLL_CNV_4";
		case 238:
			return "CCMLL_CNV_5";
		case 239:
			return "CCMLL_CNV_6";
		case 240:
			return "CCMLL_CNV_7";
		case 241:
			return "CCMLL_CNV_8";
		case 242:
			return "CCMLL_CNV_9";
		case 243:
			return "CCMRB_CNV_1";
		case 244:
			return "CCMRB_CNV_2";
		case 245:
			return "CCMRB_CNV_3";
		case 246:
			return "CCMRB_CNV_4";
		case 247:
			return "CCMRB_CNV_5";
		case 248:
			return "CCMRB_CNV_6";
		case 249:
			return "CCMRB_CNV_7";
		case 250:
			return "CCMRB_CNV_8";
		case 251:
			return "CCMRB_CNV_9";
		case 252:
			return "CCMRB_CNV_10";
		case 253:
			return "CCMRB_CNV_11";
		case 254:
			return "CCMRB_CNV_12";
		case 255:
			return "CCPRS_CNV_1";
		case 256:
			return "CCPRS_CNV_2";
		case 257:
			return "CCPRS_CNV_3";
		case 258:
			return "CCPRS_CNV_4";
		case 259:
			return "CCPRS_CNV_5";
		case 260:
			return "CCPRS_CNV_7";
		case 261:
			return "CCPRS_CNV_8";
		case 262:
			return "CCPRS_CNV_9";
		case 263:
			return "CCPRS_CNV_10";
		case 264:
			return "CCPRS_CNV_11";
		case 265:
			return "CCPRS_CNV_12";
		case 266:
			return "CCPRS_CNV_13";
		case 267:
			return "CCPRS_CNV_14";
		case 268:
			return "CCPRS_CNV_15";
		case 269:
			return "CCPRS_CNV_16";
		case 270:
			return "CCPRS_CNV_17";
		case 271:
			return "CCPRS_PAR_CNV1";
		case 272:
			return "CCSAD_CNV_1";
		case 273:
			return "CCSAD_CNV_2";
		case 274:
			return "CCSAD_CNV_3";
		case 275:
			return "CCSEN_CNV_1";
		case 276:
			return "CCSEN_CNV_2";
		case 277:
			return "CCSEN_CNV_3";
		case 278:
			return "CCSEN_CNV_4";
		case 279:
			return "CCSEN_CNV_5";
		case 280:
			return "CCSEN_CNV_6";
		case 281:
			return "CCSEN_CNV_7";
		case 282:
			return "CCSEN_CNV_8";
		case 283:
			return "CCSEN_CNV_9";
		case 284:
			return "CCSEN_CNV_10";
		case 285:
			return "CCSEN_CNV_11";
		case 286:
			return "CCSEN_CNV_12";
		case 287:
			return "CCSEN_CNV_13";
		case 288:
			return "CCSEN_CNV_14";
		case 289:
			return "CCSEN_CNV_15";
		case 290:
			return "CCSEN_CNV_16";
		case 291:
			return "CCSEN_CNV_17";
		case 292:
			return "CCSNK_PAR_CNV1";
		case 293:
			return "CCSNK_PAR_CNV2";
		case 294:
			return "CCSNK_PAR_CNV3";
		case 295:
			return "CCSSN_CNV_1";
		case 296:
			return "CCSSN_CNV_2";
		case 297:
			return "CCSSN_CNV_3";
		case 298:
			return "CCSSN_CNV_4";
		case 299:
			return "CCSSN_CNV_5";
		case 300:
			return "CCSSN_CNV_7";
		case 301:
			return "CCSSN_CNV_8";
		case 302:
			return "CCSSN_CNV_10";
		case 303:
			return "CCSSN_CNV_11";
		case 304:
			return "CCSSN_CNV_12";
		case 305:
			return "CCSSN_CNV_13";
		case 306:
			return "CCSSN_CNV_14";
		case 307:
			return "CCSSN_CNV_16";
		case 308:
			return "CCSSNUNC_CNV_1";
		case 309:
			return "CCSTR_CNV_2";
		case 310:
			return "CCSTR_CNV_3";
		case 311:
			return "CCSWN_CNV_6";
		case 312:
			return "CCSWN_CNV_7";
		case 313:
			return "CCSWN_CNV_8";
		case 314:
			return "CCSWN_CNV_9";
		case 315:
			return "CCSWN_CNV_10";
		case 316:
			return "CCSWN_CNV_11";
		case 317:
			return "CCSWN_CNV_12";
		case 318:
			return "CCSWN_CNV_13";
		case 319:
			return "CCSWN_CNV_14";
		case 320:
			return "CCSWN_CNV_15";
		case 321:
			return "CCSWN_CNV_16";
		case 322:
			return "CCSWN_CNV_17";
		case 323:
			return "CCSWN_CNV_19";
		case 324:
			return "CCSWN_CNV_21";
		case 325:
			return "CCSWN_CNV_22";
		case 326:
			return "CCTLL_CNV_1";
		case 327:
			return "CCTLL_CNV_2";
		case 328:
			return "CCTLL_CNV_3";
		case 329:
			return "CCTLL_CNV_4";
		case 330:
			return "CCTLL_CNV_5";
		case 331:
			return "CCTLL_CNV_6";
		case 332:
			return "CCTRL_CNV_1";
		case 333:
			return "CCTRL_CNV_3";
		case 334:
			return "CCUNC_CNV_1";
		case 335:
			return "CCUNC_CNV_2";
		case 336:
			return "CCUNC_CNV_3";
		case 337:
			return "CCUNC_CNV_4";
		case 338:
			return "CCUNC_CNV_5";
		case 339:
			return "CCUNC_CNV_6";
		case 340:
			return "CCUNC_CNV_7";
		case 341:
			return "CCUNC_CNV_8";
		case 342:
			return "CFAM_CNV_1";
		case 343:
			return "CFAR_CNV_1";
		case 344:
			return "CFAR_CNV_2";
		case 345:
			return "CFBW_CNV_1";
		case 346:
			return "CFBW_CNV_2";
		case 347:
			return "CFBW_CNV_3";
		case 348:
			return "CFBW_CNV_4";
		case 349:
			return "CFBW_CNV_5";
		case 350:
			return "CFBW_CNV_6";
		case 351:
			return "CFBLLMCH_CNV_1";
		case 352:
			return "CFCH_CNV_1";
		case 353:
			return "CFDV_CNV_1";
		case 354:
			return "CFDV_CNV_2";
		case 355:
			return "CFDV_CNV_3";
		case 356:
			return "CFDTCBLL_CNV_1";
		case 357:
			return "CFDTCJMBLL_CNV_1";
		case 358:
			return "CFHM_CNV_1";
		case 359:
			return "CFHM_CNV_2";
		case 360:
			return "CFHM_CNV_3";
		case 361:
			return "CFHM_CNV_4";
		case 362:
			return "CFHM_CNV_5";
		case 363:
			return "CFHM_CNV_6";
		case 364:
			return "CFHM_CNV_7";
		case 365:
			return "CFHM_CNV_8";
		case 366:
			return "CFHM_CNV_9";
		case 367:
			return "CFHS_CNV_1";
		case 368:
			return "CFHSHUNC_CNV_1";
		case 369:
			return "CFHSHUNC_CNV_2";
		case 370:
			return "CFHSHUNC_CNV_3";
		case 371:
			return "CFJE_CNV_1";
		case 372:
			return "CFJE_CNV_2";
		case 373:
			return "CFJE_CNV_3";
		case 374:
			return "CFJE_CNV_4";
		case 375:
			return "CFJE_CNV_5";
		case 376:
			return "CFJM_CNV_1";
		case 377:
			return "CFJM_CNV_2";
		case 378:
			return "CFJM_CNV_3";
		case 379:
			return "CFJM_CNV_4";
		case 380:
			return "CFJM_CNV_5";
		case 381:
			return "CFJM_CNV_6";
		case 382:
			return "CFKIESEN_CNV_1";
		case 383:
			return "CFKIESEN_CNV_2";
		case 384:
			return "CFKIESEN_CNV_3";
		case 385:
			return "CFLN_CNV_1";
		case 386:
			return "CFLN_CNV_2";
		case 387:
			return "CFMB_CNV_1";
		case 388:
			return "CFMB_CNV_2";
		case 389:
			return "CFMB_CNV_3";
		case 390:
			return "CFMB_CNV_4";
		case 391:
			return "CFMB_CNV_5";
		case 392:
			return "CFMB_CNV_6";
		case 393:
			return "CFMP_CNV_1";
		case 394:
			return "CFMP_CNV_2";
		case 395:
			return "CFMP_CNV_3";
		case 396:
			return "CFRS_CNV_1";
		case 397:
			return "CFRS_CNV_2";
		case 398:
			return "CFRS_CNV_3";
		case 399:
			return "CFRS_CNV_4";
		case 400:
			return "CFRS_CNV_5";
		case 403:
			return "CFSENLEN_CNV_1";
		case 401:
			return "CFSG_CNV_1";
		case 402:
			return "CFSG_CNV_2";
		case 404:
			return "CFSN_CNV_1";
		case 405:
			return "CFSN_CNV_2";
		case 406:
			return "CFSN_CNV_3";
		case 407:
			return "CFSSNBLL_CNV_1";
		case 408:
			return "CFSSNUNC_CNV_1";
		case 409:
			return "CFTL_CNV_1";
		case 410:
			return "CFTL_CNV_2";
		case 411:
			return "CFTL_CNV_3";
		case 412:
			return "CFTRLUNC_CNV_1";
		case 413:
			return "CFUN_CNV_1";
		case 414:
			return "CFUN_CNV_2";
		case 415:
			return "CFUN_CNV_3";
		case 416:
			return "CFUN_CNV_4";
		case 417:
			return "CFUN_CNV_5";
		case 418:
			return "CFUN_CNV_6";
		case 419:
			return "CFUNCBLL_CNV_1";
		case 420:
			return "CFUNCBLL_CNV_2";
		case 421:
			return "CFUNCBLL_CNV_3";
		case 422:
			return "CFUNCHR_CNV_1";
		case 423:
			return "CFUNCDTC_CNV_1";
		case 424:
			return "CFUNMCH_CNV_1";
		case 425:
			return "CFUNMCH_CNV_2";
		case 426:
			return "CFUNCPRS_CNV_1";
		case 427:
			return "CCABIJCK_SNG1_ES_HELL_BOUND_TRAIN";
		case 428:
			return "CCABIJCK_SNG1_ES_LITTLE_JOE_WRANGLER";
		case 429:
			return "CCABIJCK_SNG1_ES_NEVER_GET_DRUNK";
		case 430:
			return "CCABIJCK_SNG1_ES_WILD_ROVER";
		case 431:
			return "CCCHR_HARM_SNG_4";
		case 432:
			return "CCJAV_GUIT_SNG1";
		case 433:
			return "CCJAV_GUIT_SNG2";
		case 434:
			return "CCJAV_GUIT_SNG4";
		case 435:
			return "CCJAV_GUIT_SNG5";
		case 436:
			return "CCJAV_GUIT_SNG6";
		case 437:
			return "CCJCK_SNG1_ES_CLEMENTINE";
		case 438:
			return "CCJCK_SNG1_ES_LILY_OF_THE_VALLEY";
		case 439:
			return "CCJCK_SNG1_ES_OH_SHENENDOH";
		case 440:
			return "CCJCK_SNG1_ES_OH_SUSANNA";
		case 441:
			return "CCJCK_SNG1_ES_YELLOW_ROSE_OF_TEXAS";
		case 442:
			return "CCKAR_SNG1";
		case 443:
			return "CCKNSNUNJ_SNG1";
		case 444:
			return "CCPNKNJ_SNG1";
		case 445:
			return "CCPNS_CONC_SNG1";
		case 446:
			return "CCPNS_CONC_SNG4";
		case 447:
			return "CCPNS_CONC_SNG7";
		case 448:
			return "CCPRS_CONC_SNG5";
		case 449:
			return "CCPRS_CONC_SNG8";
		case 450:
			return "CCPSN_SNG1";
		case 451:
			return "CCSEN_SNG1_SPRIG_OF_SHILLELAH";
		case 452:
			return "CCSNK_SNG2";
		case 453:
			return "CCSNK_SNG3";
		case 454:
			return "CCSNKNJ_SNG1";
		case 455:
			return "CCSNKNJ_SNG2";
		case 458:
			return "CCSWN_SNG1_SIT_SING";
		case 459:
			return "CCSWN_SNG1_SIT_SING_SLEEP";
		case 457:
			return "CCSWN_SNG1_WANDER";
		case 456:
			return "CCSWN_SNG1_WNT";
		case 460:
			return "CCUNC_SNG1_DRUNK";
		case 461:
			return "CCUNC_SNG1_SOBER";
		case 462:
			return "CCUNC_SNG2";
		case 463:
			return "CCUNJNSNK_SNG1";
		case 464:
			return "CCUNP_SNG1";
		case 465:
			return "CCUNPNKNJ_SNG1";
		case 466:
			return "CCUNPNKNS_SNG1";
		case 467:
			return "CCUNPNSNJ_SNG2";
		case 468:
			return "CCUNPNSNJ_SNG3";
		case 469:
			return "CCUNS_SNG2";
		case 470:
			return "CCUNS_SNG3";
		case 471:
			return "CCUNSNJ_SNG1";
		case 472:
			return "CCUNSNK_SNG1";
		case 473:
			return "CCUNSNKNJ_SNG1";
		case 474:
			return "CCUNSNKNS_SNG1";
		case 475:
			return "CCBLL_WRK_CNV_1";
		case 476:
			return "CCBLL_WRK_CNV_2";
		case 477:
			return "CCHSH_WRK_CNV_1_P1";
		case 478:
			return "CCHSH_WRK_CNV_2";
		case 479:
			return "CCJAV_WRK_CNV_1";
		case 480:
			return "CCMCH_WRK_CNV_1";
		case 481:
			return "CCMCH_WRK_CNV_2";
		case 482:
			return "CCSWN_WRK_CNV_1";
		case 483:
			return "CCDTC_SPEECH_BVH_CNV1";
		case 484:
			return "CCDTC_SPEECH_CLM_CNV1";
		case 485:
			return "CCDTC_SPEECH_SDB_CNV1";
		case 486:
			return "CCPRS_SPEECH_LOW_FOOD_CNV1";
		case 487:
			return "CCSEN_SPEECH_HSO_CNV1";
		case 488:
			return "CCSSN_SPEECH_LOW_FOOD_CNV1";
		case 489:
			return "CCABI_ITM_CNV_1";
		case 490:
			return "CCBLL_ITM_CNV_1";
		case 491:
			return "CCCHR_ITM_CNV_1";
		case 492:
			return "CCCHR_ITM_CNV_2";
		case 493:
			return "CCCHR_ITM_CNV_3";
		case 494:
			return "CCDTC_ITM_CNV_1_GET";
		case 495:
			return "CCDTC_ITM_CNV_1_GOT";
		case 496:
			return "CCHSH_ITM_CNV_1";
		case 497:
			return "CCJAV_ITM_CNV_1";
		case 498:
			return "CCJCK_WLK_HSO_ITM_CNV1";
		case 499:
			return "CCKAR_ITM_CNV_1";
		case 500:
			return "CCKIE_ITM_CNV_1";
		case 501:
			return "CCLEN_ITM_CNV_2";
		case 502:
			return "CCMLL_ITM_CNV_1";
		case 503:
			return "CCMRB_ITM_CNV_2";
		case 504:
			return "CCPRS_ITM_CNV_1";
		case 505:
			return "CCSEN_ITM_CNV_1";
		case 506:
			return "CCSSN_ITM_CNV_2";
		case 507:
			return "CCUNC_ITM_CNV_1";
		case 508:
			return "BCABI_WLK_GEN_CNV1";
		case 509:
			return "BCABI_WLK_GEN_CNV2";
		case 510:
			return "BCABI_WLK_GEN_CNV3";
		case 511:
			return "BCCHR_WLK_GEN_CNV1";
		case 512:
			return "BCCHR_WLK_GEN_CNV2";
		case 513:
			return "BCUNC_WLK_GEN_CNV1";
		case 514:
			return "BCUNC_WLK_GEN_CNV2";
		case 515:
			return "BCUNC_WLK_GEN_CNV3";
		case 516:
			return "BCUNC_WLK_GEN_CNV4";
		case 517:
			return "CCABI_WLK_BVH_CNV1";
		case 518:
			return "CCABI_WLK_BVH_CNV2";
		case 519:
			return "CCABI_WLK_HSO_CNV1";
		case 520:
			return "CCABI_WLK_HSO_CNV2";
		case 521:
			return "CCBLL_WLK_BVH_CNV1";
		case 522:
			return "CCBLL_WLK_BVH_CNV2";
		case 523:
			return "CCBLL_WLK_BVH_CNV3";
		case 524:
			return "CCBLL_WLK_BVH_CNV4";
		case 525:
			return "CCBLL_WLK_COL_CNV1";
		case 526:
			return "CCBLL_WLK_GEN_CNV1";
		case 527:
			return "CCBLL_WLK_GEN_CNV2";
		case 528:
			return "CCBLL_WLK_REP_SOFT_CNV1";
		case 529:
			return "CCCHR_WLK_GEN_CNV1";
		case 530:
			return "CCDTC_CNV_9";
		case 531:
			return "CCDTC_CNV_26";
		case 532:
			return "CCDTC_CNV_27";
		case 533:
			return "CCDTC_WLK_AWAY_CNV1";
		case 534:
			return "CCDTC_WLK_CLM_CNV2";
		case 536:
			return "CCDTC_WLK_CLM_CNV4";
		case 543:
			return "CCDTC_WLK_DOWNES1";
		case 535:
			return "CCDTC_WLK_CLM_CNV3";
		case 537:
			return "CCDTC_WLK_DRK_CNV1";
		case 538:
			return "CCDTC_WLK_GRF_CNV1";
		case 539:
			return "CCDTC_WLK_GRF_CNV2";
		case 540:
			return "CCDTC_WLK_HSO_CNV1";
		case 541:
			return "CCDTC_WLK_HSO_CNV2";
		case 542:
			return "CCDTC_WLK_HSO_CNV3";
		case 544:
			return "CCDTC_WLK_MAYHEM_CNV1";
		case 545:
			return "CCDTC_WLK_MUD4";
		case 546:
			return "CCDTC_WLK_PAR_CNV1";
		case 547:
			return "CCDTC_WLK_REP_CRAZY_CNV1";
		case 548:
			return "CCDTC_WLK_REP_CRAZY_CNV2";
		case 549:
			return "CCDTC_WLK_SDB_CNV1";
		case 550:
			return "CCDTC_WLK_TITHE_CNV1";
		case 551:
			return "CCHSH_WLK_CLM_CNV1";
		case 552:
			return "CCHSH_WLK_HSO_CNV1";
		case 553:
			return "CCHSH_WLK_HSO_CNV2";
		case 554:
			return "CCHSH_WLK_SDB_CNV1";
		case 555:
			return "CCJAV_WLK_BVH_CNV1";
		case 556:
			return "CCJAV_WLK_BVH_CNV2";
		case 557:
			return "CCJAV_WLK_CLM_CNV1";
		case 558:
			return "CCJAV_WLK_SDB_CNV1";
		case 559:
			return "CCKAR_WLK_CLM_CNV1";
		case 560:
			return "CCKAR_WLK_GEN_CNV1";
		case 561:
			return "CCKAR_WLK_GEN_CNV2";
		case 562:
			return "CCKAR_WLK_GEN_CNV3";
		case 563:
			return "CCKIE_WLK_HSO_CNV1";
		case 564:
			return "CCKIE_WLK_PAR_CNV1";
		case 565:
			return "CCKIE_WLK_GEN_CNV1";
		case 566:
			return "CCLEN_WLK_COL_CNV1";
		case 567:
			return "CCMCH_WLK_BVH_CNV1";
		case 568:
			return "CCMCH_WLK_CLM_CNV1";
		case 569:
			return "CCMCH_WLK_COL_CNV1";
		case 570:
			return "CCMCH_WLK_GEN_CNV1";
		case 571:
			return "CCMCH_WLK_GEN_CNV2";
		case 572:
			return "CCMCH_WLK_GEN_CNV3";
		case 573:
			return "CCMCH_WLK_GEN_CNV4";
		case 574:
			return "CCMCH_WLK_GEN_CNV5";
		case 575:
			return "CCMCH_WLK_REP_SOFT_CNV1";
		case 576:
			return "CCMCH_WLK_REP_SOFT_CNV2";
		case 577:
			return "CCMCH_WLK_REP_SOFT_CNV3";
		case 578:
			return "CCMRB_WLK_GEN_CNV1";
		case 579:
			return "CCMRB_WLK_HSO_CNV1";
		case 580:
			return "CCMRB_WLK_HSO_CNV2";
		case 581:
			return "CCMRB_WLK_SDB_CNV1";
		case 582:
			return "CCPRS_WLK_GEN_CNV1";
		case 583:
			return "CCPRS_WLK_LOW_FOOD_CNV1";
		case 584:
			return "CCPRS_WLK_LOW_FOOD_URG_CNV1";
		case 585:
			return "CCSAD_WLK_BVH_CNV1";
		case 586:
			return "CCSAD_WLK_HSO_CNV1";
		case 587:
			return "CCSEN_WLK_PAR_CNV1";
		case 588:
			return "CCSSN_CNV_6";
		case 589:
			return "CCSSN_WLK_AWAY_CNV1";
		case 590:
			return "CCSSN_WLK_AWAY_CNV2";
		case 591:
			return "CCSSN_WLK_BVH_CNV1";
		case 592:
			return "CCSSN_WLK_BVH_CNV2";
		case 593:
			return "CCSSN_WLK_BVH_CNV3";
		case 594:
			return "CCSSN_WLK_GEN_CNV1";
		case 595:
			return "CCSSN_WLK_GRF_MAYHEM_CNV1";
		case 596:
			return "CCSSN_WLK_HOMEROB_CNV1";
		case 597:
			return "CCSSN_WLK_HSO_CNV1";
		case 598:
			return "CCSSN_WLK_HSO_CNV2";
		case 599:
			return "CCSSN_WLK_HSO_CNV3";
		case 600:
			return "CCSSN_WLK_HSO_CNV4";
		case 601:
			return "CCSSN_WLK_HSO_CNV5";
		case 602:
			return "CCSSN_WLK_HSO_CNV6";
		case 603:
			return "CCSSN_WLK_HSO_CNV7";
		case 604:
			return "CCSSN_WLK_LOW_FOOD_CNV1";
		case 605:
			return "CCSSN_WLK_REP_CRAZY_CNV1";
		case 606:
			return "CCSSN_WLK_REP_CRAZY_CNV2";
		case 607:
			return "CCSSN_WLK_REP_CRAZY_CNV3";
		case 608:
			return "CCSSN_WLK_SDB_CNV1";
		case 609:
			return "CCSSN_WLK_SDB_CNV2";
		case 610:
			return "CCSSN_WLK_TITHE_CNV1";
		case 611:
			return "CCSTR_CNV_4";
		case 612:
			return "CCSWN_CNV_18";
		case 613:
			return "CCSWN_WLK_BVH_CNV1";
		case 614:
			return "CCSWN_WLK_GEN_CNV1";
		case 615:
			return "CCSWN_WLK_GEN_CNV2";
		case 616:
			return "CCSWN_WLK_GEN_CNV4";
		case 617:
			return "CCSWN_WLK_GEN_CNV5";
		case 618:
			return "CCSWN_WLK_HSO_CNV1";
		case 619:
			return "CCSWN_WLK_HSO_CNV2";
		case 620:
			return "CCSWN_WLK_HSO_CNV3";
		case 621:
			return "CCSWN_WLK_SDB_CNV1";
		case 622:
			return "CCSWN_WLK_SDB_CNV2";
		case 623:
			return "CCTLL_WLK_GEN_CNV1";
		case 624:
			return "CCTLL_WLK_GEN_CNV2";
		case 625:
			return "CCTLL_WLK_HSO_CNV1";
		case 626:
			return "CCTRL_WLK_BVH_CNV1";
		case 627:
			return "CCTRL_WLK_CLM_CNV1";
		case 628:
			return "CCTRL_WLK_CLM_CNV2";
		case 629:
			return "CCTRL_WLK_CLM_CNV3";
		case 630:
			return "CCTRL_WLK_GEN_CNV1";
		case 631:
			return "CCUNC_WLK_BVH_CNV1";
		case 632:
			return "CCUNC_WLK_CLM_CNV1";
		case 633:
			return "CCUNC_WLK_GEN_CNV1";
		case 634:
			return "CCUNC_WLK_GEN_CNV2";
		case 635:
			return "CCUNC_WLK_GEN_CNV3";
		case 636:
			return "BCABI_CNV_1";
		case 637:
			return "BCABI_CNV_2";
		case 638:
			return "BCABI_CNV_4";
		case 639:
			return "BCABI_CNV_5";
		case 640:
			return "BCABI_CNV_6";
		case 641:
			return "BCABI_CNV_7";
		case 642:
			return "BCABI_SLP_CNV_1";
		case 643:
			return "BCABI_SLP_CNV_2";
		case 644:
			return "BCABI_SLP_CNV_3";
		case 645:
			return "BCABI_SLP_CNV_4";
		case 646:
			return "BCANC_CNV_1";
		case 647:
			return "BCANJ_CNV_1";
		case 648:
			return "BCANJ_CNV_2";
		case 649:
			return "BCANJ_CNV_3";
		case 650:
			return "BCANJ_CNV_4";
		case 651:
			return "BCANU_CNV_1";
		case 652:
			return "BCCHR_CNV_1";
		case 653:
			return "BCCHR_CNV_2";
		case 654:
			return "BCCHR_CNV_3";
		case 655:
			return "BCCHR_CNV_5";
		case 656:
			return "BCCNU_CNV_1";
		case 657:
			return "BCCNU_CNV_2";
		case 658:
			return "BCCNU_CNV_3";
		case 659:
			return "BCCNU_CNV_4";
		case 660:
			return "BCCNU_CNV_5";
		case 661:
			return "BCCNJ_CNV_1";
		case 662:
			return "BCJCK_CNV_1";
		case 663:
			return "BCJCK_CNV_3";
		case 664:
			return "BCJCK_CNV_4";
		case 665:
			return "BCJCK_CNV_5";
		case 666:
			return "BCJCK_CNV_6";
		case 667:
			return "BCUNC_CNV_1";
		case 668:
			return "BCUNC_CNV_2";
		case 669:
			return "BCUNC_CNV_4";
		case 670:
			return "BCUNC_CNV_6";
		case 671:
			return "BCUNC_CNV_7";
		case 672:
			return "BCUNJ_CNV_1";
		default:
			break;
	}
	return "UNDEFINED";
}

bool func_954(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_106)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar1 /*113*/].f_5))
		{
		}
		else
		{
			if (uParam0->f_107[iVar1 /*113*/].f_8 == 3)
			{
				if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_107[iVar1 /*113*/].f_8.f_23))
				{
					if (!PED::_IS_PED_USING_SCENARIO_POINT(uParam0->f_107[iVar1 /*113*/].f_5, uParam0->f_107[iVar1 /*113*/].f_8.f_23))
					{
						TASK::_DELETE_SCENARIO_POINT(uParam0->f_107[iVar1 /*113*/].f_8.f_23);
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
			if (uParam0->f_107[iVar1 /*113*/].f_32.f_1 == 3)
			{
				if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_107[iVar1 /*113*/].f_32.f_21))
				{
					if (!PED::_IS_PED_USING_SCENARIO_POINT(uParam0->f_107[iVar1 /*113*/].f_5, uParam0->f_107[iVar1 /*113*/].f_32.f_21))
					{
						TASK::_DELETE_SCENARIO_POINT(uParam0->f_107[iVar1 /*113*/].f_32.f_21);
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_955(int iParam0)
{
	if (iParam0 >= 9)
	{
		return -2147483648;
	}
	else if (iParam0 >= 6)
	{
		return 32;
	}
	else if (iParam0 >= 3)
	{
		return 16;
	}
	return 8;
}

int func_956(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DUTCH");
		case 1:
			return joaat("JOHN");
		case 2:
			return joaat("JAVIER");
		case 3:
			return joaat("BILL");
		case 4:
			return joaat("UNCLE");
		case 5:
			return joaat("HOSEA");
		case 6:
			return joaat("MICAH");
		case 7:
			return joaat("CHARLES");
		case 8:
			return joaat("SEAN");
		case 9:
			return joaat("LENNY");
		case 10:
			return joaat("KIERAN");
		case 11:
			return joaat("SADIE");
		case 12:
			return 0;
		case 13:
			return joaat("ABIGAIL");
		case 14:
			return joaat("JACK");
		case 15:
			return joaat("MARYBETH");
		case 16:
			return joaat("MOLLY");
		case 17:
			return joaat("PEARSON");
		case 18:
			return joaat("STRAUSS");
		case 19:
			return joaat("GRIMSHAW");
		case 20:
			return joaat("KAREN");
		case 21:
			return joaat("SWANSON");
		case 22:
			return joaat("TILLY");
		case 23:
			return joaat("TRELAWNY");
		case 26:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_957(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar0 /*113*/].f_5))
		{
		}
		else
		{
			if (!__LIB_0__::func_31(uParam0->f_107[iVar0 /*113*/].f_1))
			{
				return false;
			}
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_107[iVar0 /*113*/].f_8.f_23))
			{
				return false;
			}
			if (!PED::_IS_PED_USING_SCENARIO_POINT(uParam0->f_107[iVar0 /*113*/].f_5, uParam0->f_107[iVar0 /*113*/].f_8.f_23))
			{
				return false;
			}
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_107[iVar0 /*113*/].f_5, 0))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

int func_958(var uParam0, int iParam1, vector3 vParam2, char* sParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1711)
	{
		if (STREAMING::IS_MODEL_VALID(uParam0->f_1711[iVar0 /*15*/]))
		{
		}
		else
		{
			uParam0->f_1711[iVar0 /*15*/] = iParam1;
			uParam0->f_1711[iVar0 /*15*/].f_1 = { vParam2 };
			uParam0->f_1711[iVar0 /*15*/].f_4 = sParam5;
			uParam0->f_1711[iVar0 /*15*/].f_5 = iParam6;
			uParam0->f_1711[iVar0 /*15*/].f_6 = iParam7;
			uParam0->f_1711[iVar0 /*15*/].f_8 = iParam8;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_959(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1984)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1984[iVar0]))
		{
		}
		else
		{
			uParam0->f_1984[iVar0] = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, iParam2, 0, false, true);
			if (bParam3)
			{
				uParam0->f_2047 = iVar0;
			}
			if (bParam4)
			{
				uParam0->f_2048 = iVar0;
			}
			if (bParam5)
			{
				uParam0->f_2015[iVar0] = 1;
			}
			uParam0->f_1983++;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_960(var uParam0)
{
	if (!HUD::_DOES_TEXT_DATABASE_EXIST(&(uParam0->f_2232)))
	{
		return;
	}
	HUD::_TEXT_DATABASE_REQUEST(&(uParam0->f_2232));
}

void func_961(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (uParam0->f_107[iVar0 /*113*/].f_32.f_2 != 0)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_107[iVar0 /*113*/].f_32.f_3))
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(uParam0->f_107[iVar0 /*113*/].f_32.f_2, 15, 0, MISC::GET_HASH_KEY(uParam0->f_107[iVar0 /*113*/].f_32.f_3));
			}
			else
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(uParam0->f_107[iVar0 /*113*/].f_32.f_2, 1, 0, 0);
			}
		}
		if (uParam0->f_107[iVar0 /*113*/].f_8.f_1 != 0)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_107[iVar0 /*113*/].f_8.f_2))
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(uParam0->f_107[iVar0 /*113*/].f_8.f_1, 15, 0, MISC::GET_HASH_KEY(uParam0->f_107[iVar0 /*113*/].f_8.f_2));
			}
			else
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(uParam0->f_107[iVar0 /*113*/].f_8.f_1, 1, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_962(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2236)
	{
		if (!STREAMING::DOES_ANIM_DICT_EXIST(&(uParam0->f_2236[iVar0 /*8*/])))
		{
		}
		else
		{
			STREAMING::REQUEST_ANIM_DICT(&(uParam0->f_2236[iVar0 /*8*/]));
		}
		iVar0++;
	}
}

void func_963(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	if (uParam0->f_4)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar0 /*113*/].f_5))
		{
		}
		else if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_107[iVar0 /*113*/].f_5, 1) || TASK::_0x0C3CB2E600C8977D(uParam0->f_107[iVar0 /*113*/].f_5, 1))
		{
			if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_107[iVar0 /*113*/].f_8.f_23))
			{
				if (PED::_IS_PED_USING_SCENARIO_POINT(uParam0->f_107[iVar0 /*113*/].f_5, uParam0->f_107[iVar0 /*113*/].f_8.f_23))
				{
				}
				else
				{
					iVar1 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(uParam0->f_107[iVar0 /*113*/].f_5, true);
					if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar1))
					{
						vVar2 = { TASK::_GET_SCENARIO_POINT_COORDS(iVar1, true) };
						TASK::_0x4161648394262FDF(vVar2, 0.1f);
					}
				}
				iVar0++;
			}
		}
	}
}

int func_964(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar0 /*113*/].f_5))
		{
		}
		else
		{
			fVar1 = uParam0->f_107[iVar0 /*113*/].f_100;
			if (fVar1 <= 0f)
			{
			}
			else
			{
				uParam0->f_107[iVar0 /*113*/].f_101 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), ENTITY::GET_ENTITY_COORDS(uParam0->f_107[iVar0 /*113*/].f_5, true, false), 0f, 0f, 0f, fVar1, fVar1, iParam1);
				if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_107[iVar0 /*113*/].f_101))
				{
				}
				else
				{
					PED::_0x7C00CFC48A782DC0(uParam0->f_107[iVar0 /*113*/].f_101, uParam0->f_107[iVar0 /*113*/].f_5, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_965(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_107[iVar0 /*113*/].f_5))
			{
			}
			else
			{
				iVar2 = uParam0->f_107[iVar0 /*113*/].f_32.f_16[iVar1];
				if (iVar2 >= 0 && iVar2 < uParam0->f_1711)
				{
					iVar3 = uParam0->f_1711[iVar2 /*15*/].f_10;
					sVar4 = uParam0->f_1711[iVar2 /*15*/].f_11;
					if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar4))
					{
						PED::_0xBDED916A9F9B0604(uParam0->f_107[iVar0 /*113*/].f_5, iVar3, sVar4, uParam0->f_107[iVar0 /*113*/].f_32.f_2, uParam0->f_107[iVar0 /*113*/].f_32.f_3, 0);
					}
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_966(var uParam0)
{
	uParam0->f_13 = 0;
	__LIB_0__::func_37(&(uParam0->f_10));
}

void func_967()
{
	var uVar0;
	StringCopy(&(Global_1327590.f_19727), "", 32);
	Global_1327590.f_19727.f_4 = 0;
	Global_1327590.f_19727.f_5 = 0;
	Global_1327590.f_19727.f_6 = uVar0;
}

void func_968()
{
	PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GRAYOUT_ITEM_USE", true, 1);
	PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GRAYOUT_ITEM_DROP", true, 1);
	PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "BLOCK_STEW_DROP_PROMPT", true, 1);
	PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "BLOCK_STEW_EAT_PROMPT", true, 1);
}

bool func_969()
{
	return Global_1327590;
}

Vector3 func_970(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2351.282f, 1362.077f, 104.9752f;
		case 1:
			return 2349.223f, 1361.247f, 104.9467f;
		case 2:
			return 2379.521f, 1348.617f, 105.1838f;
		case 3:
			return 2379.518f, 1348.727f, 105.3143f;
		case 10:
			return 2354.249f, 1370.797f, 105.13f;
		case 4:
			return 2360.46f, 1372.098f, 105.3216f;
		case 5:
			return 2361.062f, 1375.625f, 105.6f;
		case 6:
			return 2360.392f, 1376.124f, 105.3041f;
		case 7:
			return 2369.36f, 1342.757f, 105.2225f;
		case 8:
			return 2342.205f, 1350.963f, 105.36f;
		case 9:
			return 2343.207f, 1350.193f, 105.0427f;
		case 11:
			return 2354.913f, 1342.611f, 104.5543f;
		case 12:
			return 2354.479f, 1347.575f, 104.8036f;
		case 13:
			return 2352.957f, 1346.719f, 104.7566f;
		case 14:
			return 2366.306f, 1347.905f, 105.1304f;
		case 15:
			return 2362.18f, 1352.813f, 105.0625f;
		case 16:
			return 2368.728f, 1350.747f, 105.1249f;
		case 17:
			return 2360.894f, 1377.363f, 106.5266f;
		case 18:
			return 2371.477f, 1356.217f, 105.0569f;
		case 19:
			return 2344.804f, 1367.986f, 105.3134f;
		case 20:
			return 2353.949f, 1371.797f, 105.127f;
		case 21:
			return 2354.013f, 1371.781f, 105.074f;
		case 22:
			return 2337.284f, 1346.015f, 105.179f;
		case 23:
			return 2337.322f, 1346.053f, 105.1803f;
		case 103:
			return -1339.08f, 2397.047f, 306.0378f;
		case 104:
			return -1317.874f, 2439.626f, 308.5981f;
		case 105:
			return -1352.902f, 2440.497f, 307.4951f;
		case 106:
			return -1349.317f, 2442.231f, 307.3924f;
		case 107:
			return -1316.698f, 2435.933f, 308.5595f;
		case 108:
			return -1322.826f, 2441.704f, 308.6064f;
		case 109:
			return -1344.278f, 2405.877f, 306.088f;
		case 49:
			return 690.7682f, -1253.57f, 43.5496f;
		case 50:
			return 652.4066f, -1244.674f, 42.6699f;
		case 51:
			return 653.353f, -1257.616f, 42.6902f;
		case 52:
			return 663.204f, -1266.61f, 42.867f;
		case 53:
			return 670.1622f, -1239.483f, 43.1877f;
		case 54:
			return 683.0387f, -1245.425f, 43.0148f;
		case 55:
			return 684.351f, -1243.633f, 42.9849f;
		case 56:
			return 684.4819f, -1246.863f, 42.9927f;
		case 57:
			return 685.0302f, -1245.902f, 42.9912f;
		case 58:
			return 672.8356f, -1237.325f, 43.134f;
		case 59:
			return 650.8051f, -1251.009f, 42.7005f;
		case 60:
			return 672.4047f, -1259.892f, 42.9838f;
		case 61:
			return 672.4271f, -1259.96f, 43.1188f;
		case 62:
			return 655.894f, -1234.782f, 43.1259f;
		case 63:
			return 654.1125f, -1251.155f, 42.8f;
		case 64:
			return 651.2626f, -1251.937f, 42.6974f;
		case 65:
			return 650.6795f, -1252.114f, 43.1362f;
		case 66:
			return 653.0919f, -1252.156f, 42.8372f;
		case 67:
			return 653.4479f, -1252.911f, 42.599f;
		case 68:
			return 690.4313f, -1259.154f, 43.7104f;
		case 70:
			return 663.0867f, -1231.747f, 43.2655f;
		case 71:
			return 657.1655f, -1243.321f, 42.8214f;
		case 72:
			return 659.59f, -1257.613f, 43.245f;
		case 73:
			return 660.603f, -1253.43f, 42.7f;
		case 74:
			return 659.5897f, -1257.613f, 43.1646f;
		case 75:
			return 660.8477f, -1257.421f, 42.5046f;
		case 79:
			return 678.9159f, -1265.703f, 43.1879f;
		case 77:
			return 674.4503f, -1265.393f, 42.9755f;
		case 78:
			return 674.8731f, -1267.135f, 42.9843f;
		case 76:
			return 675.0228f, -1270.61f, 42.9601f;
		case 80:
			return 679.2578f, -1248.381f, 42.9808f;
		case 82:
			return 681.4078f, -1254.114f, 43.0104f;
		case 83:
			return 679.5405f, -1253.201f, 43.005f;
		case 81:
			return 676.2629f, -1251.483f, 43.0118f;
		case 84:
			return 652.429f, -1253.768f, 43.8068f;
		case 85:
			return 663.2041f, -1266.61f, 42.8666f;
		case 86:
			return 664.6318f, -1266.261f, 42.8638f;
		case 87:
			return 661.7732f, -1267.029f, 42.865f;
		case 89:
			return 665.5107f, -1243.862f, 43.1096f;
		case 90:
			return 664.7734f, -1244.574f, 43.1442f;
		case 92:
			return 666.624f, -1244.745f, 43.1513f;
		case 94:
			return 665.811f, -1243.962f, 43.1096f;
		case 88:
			return 658.7715f, -1230.395f, 43.1212f;
		case 95:
			return 667.0524f, -1274.733f, 43.1042f;
		case 96:
			return 652.5594f, -1256.802f, 42.731f;
		case 97:
			return 683.7f, -1267.15f, 43.44f;
		case 98:
			return 688.7827f, -1247.475f, 43.17f;
		case 99:
			return 654.5885f, -1231.947f, 43.0909f;
		case 100:
			return 682.0446f, -1250.296f, 43.0812f;
		case 101:
			return 682.3f, -1250.1f, 43.2f;
		case 102:
			return 681.875f, -1250.375f, 42.975f;
		case 110:
			return -148.9178f, -14.2616f, 95.3191f;
		case 111:
			return -150.5614f, -16.7691f, 95.2844f;
		case 112:
			return -149.3513f, -15.9276f, 95.314f;
		case 113:
			return -125.0833f, -39.8813f, 94.5479f;
		case 114:
			return -134.5811f, -34.3785f, 95.0469f;
		case 116:
			return -123.8592f, -25.8471f, 94.9403f;
		case 117:
			return -139.9031f, -41.3454f, 94.5271f;
		case 118:
			return -141.9657f, -42.1655f, 94.55f;
		case 119:
			return -140.3628f, -39.3589f, 94.5064f;
		case 120:
			return -141.3333f, -39.8796f, 94.5036f;
		case 121:
			return -142.1689f, -44.2803f, 94.5344f;
		case 122:
			return -132.1766f, -27.8991f, 95.1097f;
		case 123:
			return -133.2737f, -18.5626f, 95.1372f;
		case 124:
			return -133.2647f, -18.4593f, 95.2667f;
		case 125:
			return -148.3239f, -26.4223f, 95.0867f;
		case 126:
			return -129.6888f, -30.2391f, 95.184f;
		case 127:
			return -132.3694f, -28.9374f, 95.0871f;
		case 128:
			return -131.1368f, -30.3165f, 95.1679f;
		case 129:
			return -131.1368f, -30.3165f, 95.048f;
		case 130:
			return -131.3613f, -31.1211f, 94.9242f;
		case 131:
			return -117.945f, -17.21f, 95.035f;
		case 132:
			return -116.5877f, -17.9793f, 94.9923f;
		case 134:
			return -107.1891f, -32.681f, 94.979f;
		case 135:
			return -118.2587f, -37.0856f, 94.8027f;
		case 136:
			return -122.145f, -35.0285f, 94.7612f;
		case 137:
			return -118.2644f, -37.0851f, 95.1889f;
		case 138:
			return -117.631f, -36.1001f, 94.5263f;
		case 139:
			return -120f, -40f, 94.5796f;
		case 140:
			return -138.0953f, -12.0076f, 95.3359f;
		case 146:
			return -110.7765f, -36.8139f, 94.9131f;
		case 144:
			return -112.7059f, -40.8189f, 94.7282f;
		case 145:
			return -110.9286f, -41.0484f, 94.7314f;
		case 141:
			return -109.1067f, -37.2171f, 94.701f;
		case 142:
			return -107.6834f, -42.1638f, 94.6885f;
		case 143:
			return -107.733f, -42.169f, 94.652f;
		case 147:
			return -144.4145f, -19.2364f, 95.0744f;
		case 149:
			return -138.4368f, -17.9037f, 95.0856f;
		case 150:
			return -137.0642f, -20.7528f, 95.087f;
		case 148:
			return -141.7537f, -22.6105f, 95.0878f;
		case 151:
			return -132.6974f, -31.0975f, 96.1266f;
		case 152:
			return -165.216f, -34.132f, 94.1461f;
		case 153:
			return -172.0029f, -25.0604f, 95.099f;
		case 154:
			return -138.7686f, -27.4923f, 95.0878f;
		case 155:
			return -139.3531f, -28.864f, 95.0872f;
		case 156:
			return -85f, -40f, 95.908f;
		case 157:
			return -75f, -40f, 96.05f;
		case 158:
			return -85.6f, -12.6f, 95.55f;
		case 159:
			return -89.4735f, -34.0326f, 95.5727f;
		case 160:
			return -141.1667f, -43.1414f, 95.5075f;
		case 161:
			return -96.3596f, -47.1111f, 94.4287f;
		case 162:
			return -118.0872f, -27.6725f, 94.7697f;
		case 163:
			return -117.0986f, -27.9306f, 94.7973f;
		case 165:
			return -118.4542f, -29.0077f, 94.7992f;
		case 167:
			return -127.236f, -6.6741f, 95.1161f;
		case 169:
			return -88.6625f, -5.193f, 94.1046f;
		case 170:
			return -122.2236f, -8.5306f, 95.1336f;
		case 171:
			return -122.2236f, -8.5306f, 95.1336f;
		case 172:
			return -143.8062f, -56.5505f, 93.6929f;
		case 168:
			return -134.5851f, -33.4737f, 95.0571f;
		case 173:
			return -120.48f, -13.59f, 95.174f;
		case 174:
			return -139.6016f, -19.6172f, 95.0788f;
		case 175:
			return -151.097f, -25.003f, 95.037f;
		case 176:
			return -142.1275f, -16.7126f, 95.0843f;
		case 177:
			return -111.2999f, -37.7f, 94.8994f;
		case 178:
			return 2230.607f, -768.9569f, 42.4874f;
		case 179:
			return 1897.947f, -1867.111f, 46.2557f;
		case 181:
			return 1878.266f, -1824.908f, 42.0577f;
		case 182:
			return 1903.976f, -1862.017f, 46.3581f;
		case 183:
			return 1870.953f, -1874.527f, 41.8405f;
		case 184:
			return 1872.956f, -1872.378f, 41.8184f;
		case 185:
			return 1872.729f, -1871.582f, 41.8031f;
		case 186:
			return 1866.117f, -1858.068f, 42.0334f;
		case 187:
			return 1863.898f, -1858.133f, 42.0048f;
		case 188:
			return 1861.93f, -1862.238f, 42.0131f;
		case 189:
			return 1865.275f, -1856.201f, 42.0099f;
		case 190:
			return 1877.057f, -1869.943f, 41.8052f;
		case 191:
			return 1889.777f, -1879.549f, 41.8147f;
		case 192:
			return 1906.5f, -1818.295f, 38.6799f;
		case 193:
			return 1897.558f, -1858.596f, 46.341f;
		case 194:
			return 1897.12f, -1860.05f, 46.341f;
		case 195:
			return 1891.641f, -1870.441f, 42.1457f;
		case 196:
			return 1895.595f, -1859.388f, 46.2972f;
		case 197:
			return 1881.51f, -1849.799f, 42.4553f;
		case 198:
			return 1882.52f, -1834.448f, 42.9333f;
		case 199:
			return 1876.192f, -1883.639f, 41.7296f;
		case 202:
			return 1882.255f, -1883.146f, 41.8057f;
		case 200:
			return 1879.259f, -1879.515f, 41.8005f;
		case 201:
			return 1878.292f, -1881.024f, 41.8093f;
		case 203:
			return 1898.422f, -1859.928f, 42.1456f;
		case 204:
			return 1903.948f, -1854.875f, 41.0543f;
		case 205:
			return 1895.606f, -1871.699f, 42.1294f;
		case 206:
			return 1891.924f, -1864.679f, 42.1401f;
		case 207:
			return 1878.855f, -1856.19f, 41.7939f;
		case 208:
			return 1875.995f, -1859.396f, 41.8185f;
		case 209:
			return 1881.206f, -1861.845f, 41.8164f;
		case 210:
			return 1879.314f, -1860.996f, 41.8015f;
		case 211:
			return 1888.849f, -1866.193f, 47.1326f;
		case 212:
			return 1892.637f, -1855.759f, 42.1324f;
		case 213:
			return 1871.706f, -1863.183f, 41.8185f;
		case 214:
			return 1873.123f, -1863.577f, 41.8022f;
		case 216:
			return 1881.415f, -1875.467f, 41.824f;
		case 217:
			return 1870.253f, -1862.845f, 41.8179f;
		case 218:
			return 1973.86f, -1868.714f, 41.7978f;
		case 220:
			return 1881.7f, -1874.126f, 41.7769f;
		case 221:
			return 1882.689f, -1874.384f, 41.8045f;
		case 223:
			return 1881.415f, -1875.467f, 41.834f;
		case 224:
			return 1881.8f, -1873.626f, 41.797f;
		case 219:
			return 1886.526f, -1883.668f, 41.8101f;
		case 225:
			return 1869.947f, -1885.672f, 41.6695f;
		case 226:
			return 1859.65f, -1895.84f, 40.5f;
		case 227:
			return 1890.835f, -1882.48f, 41.7655f;
		case 228:
			return 1881.733f, -1858.001f, 41.8096f;
		case 24:
			return -1661.819f, -1336.845f, 83.0075f;
		case 25:
			return -1639.374f, -1354.644f, 82.9775f;
		case 26:
			return -1604.69f, -1408.436f, 80.9404f;
		case 27:
			return -1550.021f, -1457.386f, 92.8075f;
		case 28:
			return -1638.959f, -1361.78f, 83.3962f;
		case 29:
			return -1643.839f, -1359.537f, 83.3962f;
		case 30:
			return -1587.194f, -1407.788f, 80.698f;
		case 31:
			return -1640.616f, -1360.573f, 85.8884f;
		case 32:
			return -1643.254f, -1369.558f, 83.4323f;
		case 34:
			return -1607.022f, -1417.066f, 80.9345f;
		case 33:
			return -1674.691f, -1344.548f, 83.2438f;
		case 35:
			return -1649.057f, -1373.304f, 86.166f;
		case 36:
			return -1608.222f, -1414.939f, 80.9437f;
		case 37:
			return -1598.507f, -1415.938f, 80.8841f;
		case 38:
			return -1595.798f, -1412.841f, 80.936f;
		case 39:
			return -1599.63f, -1418.125f, 80.9514f;
		case 40:
			return -1605.622f, -1412.575f, 80.994f;
		case 41:
			return -1599.027f, -1408.308f, 80.936f;
		case 42:
			return -1598.673f, -1411.331f, 80.9016f;
		case 43:
			return -1634.721f, -1360.413f, 83.3955f;
		case 44:
			return -1581.597f, -1406.162f, 80.3383f;
		case 45:
			return -1598.86f, -1407.787f, 80.9358f;
		case 46:
			return -1603.663f, -1417.489f, 80.8918f;
		case 47:
			return -1603.441f, -1418.861f, 80.8732f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_971(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, -100.7f;
		case 1:
			return 0f, 0f, 114.06f;
		case 2:
			return 0f, 0f, -111.67f;
		case 3:
			return 0f, 0f, -24.11f;
		case 10:
			return 0f, 0f, -161.79f;
		case 4:
			return 0f, 0f, -75.73f;
		case 5:
			return 0f, 0f, -26.12f;
		case 6:
			return 0f, 0f, -26.16f;
		case 7:
			return 0f, 0f, -46.13f;
		case 8:
			return 0f, 0f, 119.85f;
		case 9:
			return 0f, 0f, 119.65f;
		case 11:
			return -1.499f, 4.26f, -135.56f;
		case 12:
			return 0f, 0f, -125.96f;
		case 13:
			return 0f, 0f, 163.12f;
		case 14:
			return 0f, 0f, 65.04f;
		case 15:
			return 0f, 0f, 13.83f;
		case 16:
			return 0f, 0f, 59.28f;
		case 18:
			return 0f, 0f, 0f;
		case 19:
			return 0f, 0f, 0f;
		case 20:
			return 0f, 0f, -161.79f;
		case 21:
			return 0f, 0f, -160.79f;
		case 22:
			return 0f, 0f, -55.99f;
		case 23:
			return 0f, 0f, 34.42f;
		case 103:
			return 0f, 0f, 155f;
		case 104:
			return 0f, 0f, -26.33f;
		case 105:
			return 0f, 0f, 0f;
		case 106:
			return 0f, 0f, -20.65f;
		case 107:
			return 0f, 0f, 153.58f;
		case 108:
			return 0f, 0f, 153.41f;
		case 109:
			return 0f, 0f, 160f;
		case 49:
			return 0f, 0f, -16.89f;
		case 50:
			return 0f, 0f, -125.64f;
		case 51:
			return 0f, 0f, 71.49f;
		case 52:
			return 0f, 0f, -50.603f;
		case 53:
			return 0f, 0f, -16.32f;
		case 54:
			return 0f, 0f, 111.15f;
		case 55:
			return 0f, 0f, -34.16f;
		case 56:
			return 0f, 0f, -144.4f;
		case 57:
			return 0f, 0f, -108.91f;
		case 58:
			return 0f, 0f, -149.02f;
		case 59:
			return 0f, 0f, -143.88f;
		case 60:
			return 0f, 0f, 134.03f;
		case 61:
			return 0f, 0f, -140.8f;
		case 62:
			return 0f, 0f, 33.3f;
		case 63:
			return 0f, 0f, 125.87f;
		case 64:
			return 0f, 0f, -146.38f;
		case 65:
			return 0f, 0f, -40.85f;
		case 66:
			return 0f, 0f, 125.86f;
		case 67:
			return 0f, 0f, 125f;
		case 68:
			return 0f, 0f, -128.67f;
		case 70:
			return 0f, 0f, -15.11f;
		case 71:
			return 0f, 0f, -34.34f;
		case 72:
			return 0f, 0f, 0f;
		case 73:
			return 0f, 0f, -51f;
		case 74:
			return 0f, 0f, -13.02f;
		case 75:
			return 0f, 0f, 165.73f;
		case 79:
			return 0f, 0f, -67.9f;
		case 77:
			return 0f, 0f, -55.95f;
		case 78:
			return 0f, 0f, -134.78f;
		case 76:
			return 0f, 0f, -89.21f;
		case 80:
			return 0f, 0f, -81.13f;
		case 82:
			return 0f, 0f, 70.61f;
		case 83:
			return 0f, 0f, -19.23f;
		case 81:
			return 0f, 0f, -11.26f;
		case 84:
			return 0f, 0f, 125.86f;
		case 85:
			return 0f, 0f, -50.6f;
		case 86:
			return 0f, 0f, -74.94f;
		case 87:
			return 0f, 0f, 106.88f;
		case 89:
			return 0f, 0f, 134.74f;
		case 90:
			return 0f, 0f, 134.43f;
		case 92:
			return 0f, 0f, -138.4f;
		case 94:
			return 0f, 0f, -60.12f;
		case 88:
			return 0f, 0f, -35.88f;
		case 95:
			return 0f, 0f, 1.32f;
		case 96:
			return 0f, 0f, -123.43f;
		case 97:
			return 0f, 0f, 180f;
		case 98:
			return 0f, 0f, -75f;
		case 99:
			return 0f, 0f, 129f;
		case 100:
			return 0f, 0f, 80.79f;
		case 101:
			return 0f, 0f, 70f;
		case 102:
			return 0f, 0f, 84.4f;
		case 110:
			return 0f, 0f, 30.47f;
		case 111:
			return 0f, 0f, 101.58f;
		case 112:
			return 0f, 0f, 79.21f;
		case 113:
			return 0f, 0f, -10.92f;
		case 114:
			return 0f, 0f, 30.63f;
		case 116:
			return 0f, 0f, 75.28f;
		case 117:
			return 0f, 0f, -100.97f;
		case 118:
			return 0f, 0f, 113.79f;
		case 119:
			return 0f, 0f, 3.55f;
		case 120:
			return 0f, 0f, 39.04f;
		case 121:
			return 0f, 0f, 139.07f;
		case 122:
			return 0f, 0f, 178.61f;
		case 123:
			return 0f, 0f, -75.02f;
		case 124:
			return 0f, 0f, 9.63f;
		case 125:
			return 0f, 0f, 71.32f;
		case 126:
			return 0f, 0f, 85f;
		case 127:
			return 0f, 0f, 173.23f;
		case 128:
			return 0f, 0f, 84.96f;
		case 129:
			return 0f, 0f, 84.96f;
		case 130:
			return 0f, 0f, 85f;
		case 131:
			return 0.174f, 3.834f, 0.107f;
		case 132:
			return 0f, 0f, -105.84f;
		case 134:
			return 0f, 0f, -12.98f;
		case 135:
			return 0f, 0f, -121.39f;
		case 136:
			return 0f, 0f, 25.63f;
		case 137:
			return 0f, 0f, 59.67f;
		case 138:
			return 0f, 0f, -121.59f;
		case 139:
			return 0f, 0f, 0f;
		case 140:
			return 0f, 0f, 0f;
		case 146:
			return 0f, 0f, 0f;
		case 144:
			return 0f, 0f, 13.05f;
		case 145:
			return 0f, 0f, -65.78f;
		case 141:
			return 0f, 0f, -4f;
		case 142:
			return 0f, 0f, -22.68f;
		case 143:
			return -0.541f, 1.972f, -23.429f;
		case 147:
			return 0f, 0f, 0.99f;
		case 149:
			return 0f, 0f, 152.86f;
		case 150:
			return 0f, 0f, -90.36f;
		case 148:
			return 0f, 0f, 70.67f;
		case 151:
			return 0f, 0f, 84.96f;
		case 152:
			return 0f, 0f, -51.94f;
		case 153:
			return 0f, 0f, 0f;
		case 154:
			return 0f, 0f, 0f;
		case 155:
			return 0f, 0f, 157.49f;
		case 156:
			return 0f, 0f, -104f;
		case 157:
			return 0f, 0f, -104f;
		case 158:
			return 0f, 0f, -50f;
		case 159:
			return 0f, 0f, 69.12f;
		case 160:
			return 0f, 0f, -37.3f;
		case 161:
			return 0f, 0f, -71.02f;
		case 162:
			return 0f, 0f, -103.99f;
		case 163:
			return 0f, 0f, -104.12f;
		case 165:
			return 0f, 0f, 164.57f;
		case 167:
			return 0f, 0f, 38.63f;
		case 169:
			return 0f, 0f, -134.42f;
		case 170:
			return 0f, 0f, 0f;
		case 171:
			return 0f, 0f, 0f;
		case 172:
			return 0f, 0f, 0f;
		case 168:
			return 0f, 0f, -164.4f;
		case 173:
			return 0f, 0f, 0f;
		case 174:
			return 0f, 0f, 62.89f;
		case 175:
			return 0f, 0f, 166.69f;
		case 176:
			return 0.67f, -1.78f, 162.66f;
		case 177:
			return 0f, 0f, -2.22f;
		case 178:
			return 0f, 0f, 180f;
		case 179:
			return 0f, 0f, -130.17f;
		case 181:
			return 0f, 0f, 93.33f;
		case 182:
			return 0f, 0f, -39.99f;
		case 183:
			return 0f, 0f, 50.99f;
		case 184:
			return 0f, 0f, 177.92f;
		case 185:
			return 0f, 0f, -176.32f;
		case 186:
			return 0f, 0f, -120.97f;
		case 187:
			return 0f, 0f, 93.79f;
		case 188:
			return 0f, 0f, -56.45f;
		case 189:
			return 0f, 0f, 19.04f;
		case 190:
			return 0f, 0f, 165.1f;
		case 191:
			return 0f, 0f, -151.73f;
		case 192:
			return 0f, 0f, 0f;
		case 193:
			return 0f, 0f, 158.13f;
		case 194:
			return 0f, 0f, -50f;
		case 195:
			return 0f, 0f, -31.88f;
		case 196:
			return 0f, 0f, -85f;
		case 197:
			return 0f, 0f, -60f;
		case 198:
			return 0f, 0f, 176.19f;
		case 199:
			return 0f, 0f, -135.47f;
		case 202:
			return 0f, 0f, -115.29f;
		case 200:
			return 0f, 0f, -102.25f;
		case 201:
			return 0f, 0f, 178.92f;
		case 203:
			return 0f, 0f, -124.94f;
		case 204:
			return 0f, 0f, 156.43f;
		case 205:
			return 0f, 0f, 163.55f;
		case 206:
			return 0f, 0f, -29.7f;
		case 207:
			return 0f, 0f, -79.03f;
		case 208:
			return 0f, 0f, -9.33f;
		case 209:
			return 0f, 0f, 72.86f;
		case 210:
			return 0f, 0f, -17.13f;
		case 211:
			return 0f, 0f, 158.515f;
		case 212:
			return 0f, 0f, -85f;
		case 213:
			return 0f, 0f, -80f;
		case 214:
			return 0f, 0f, -104.21f;
		case 216:
			return 0f, 0f, 173.75f;
		case 217:
			return 0f, 0f, 77.49f;
		case 218:
			return 0f, 0f, 180f;
		case 220:
			return 0f, 0f, -103.99f;
		case 221:
			return 0f, 0f, -104.12f;
		case 223:
			return 0f, 0f, 69.12f;
		case 224:
			return 0f, 0f, 54f;
		case 219:
			return 0f, 0f, 139.09f;
		case 225:
			return 0f, 0f, 0f;
		case 226:
			return 0f, 0f, -150.12f;
		case 227:
			return 0f, 0f, -56.37f;
		case 228:
			return 0f, 0f, 82.86f;
		case 24:
			return 0f, 0f, 42.8f;
		case 25:
			return 0f, 0f, -61.86f;
		case 26:
			return 0f, 0f, -115.05f;
		case 27:
			return 0f, 0f, 0f;
		case 28:
			return 0f, 0f, 148.74f;
		case 29:
			return 0f, 0f, 60f;
		case 30:
			return 0f, 0f, 46.5f;
		case 31:
			return 0f, 0f, 0f;
		case 32:
			return 0f, 0f, -42.05f;
		case 34:
			return 0f, 0f, -26.98f;
		case 33:
			return 0f, 0f, 75.43f;
		case 35:
			return 0f, 0f, 0f;
		case 36:
			return 0f, 0f, -115f;
		case 37:
			return 0f, 0f, 6.33f;
		case 38:
			return 0f, 0f, 155f;
		case 39:
			return 0f, 0f, 0f;
		case 40:
			return 0f, 0f, 165f;
		case 41:
			return 0f, 0f, 155f;
		case 42:
			return 0f, 0f, 69f;
		case 43:
			return 0f, 0f, -165.29f;
		case 44:
			return 0f, 0f, 180f;
		case 45:
			return 0f, 0f, 155f;
		case 46:
			return 0f, 0f, -24.82f;
		case 47:
			return 0f, 0f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_972(var uParam0, vector3 vParam1)
{
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_23, uParam0->f_26.f_2, vParam1);
}

float func_973(var uParam0, float fParam1)
{
	float fVar0;
	fVar0 = (fParam1 + uParam0->f_26.f_2);
	if (fVar0 > 180f)
	{
		fVar0 = (fVar0 - 360f);
	}
	else if (fVar0 < -180f)
	{
		fVar0 = (fVar0 + 360f);
	}
	return fVar0;
}

char* func_974(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "BILL";
		case 7:
			return "CHARLES";
		case 0:
			return "DUTCH";
		case 5:
			return "HOSEA";
		case 14:
			return "JACK";
		case 1:
			return "JOHN";
		case 2:
			return "JAVIER";
		case 9:
			return "LENNY";
		case 6:
			return "MICAH";
		case 10:
			return "KIERAN";
		case 17:
			return "PEARSON";
		case 8:
			return "SEAN";
		case 18:
			return "STRAUSS";
		case 21:
			return "SWANSON";
		case 23:
			return "JOSIAH";
		case 4:
			return "UNCLE";
		case 13:
			return "ABIGAIL";
		case 20:
			return "KAREN";
		case 15:
			return "MARYBETH";
		case 16:
			return "MOLLY";
		case 11:
			return "SADIE";
		case 19:
			return "SUSAN";
		case 22:
			return "TILLY";
		case 12:
			return "CAIN";
		default:
			break;
	}
	return "INVALID ENUM";
}

void func_975(var uParam0, int iParam1, float fParam2)
{
	uParam0->f_107[iParam1 /*113*/].f_100 = fParam2;
}

void func_976(var uParam0, int iParam1)
{
	Global_1327590.f_19547[*uParam0 /*5*/].f_3 = iParam1;
}

bool func_977(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_107)
	{
		if (!STREAMING::IS_MODEL_VALID(uParam0->f_107[iVar0 /*113*/].f_3))
		{
		}
		else if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_107[iVar0 /*113*/].f_3))
		{
			return false;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1711)
	{
		if (!STREAMING::IS_MODEL_VALID(uParam0->f_1711[iVar0 /*15*/]))
		{
		}
		else if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_1711[iVar0 /*15*/]))
		{
			return false;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1967)
	{
		if (!WEAPON::IS_WEAPON_VALID(uParam0->f_1967[iVar0 /*4*/]))
		{
		}
		else if (!WEAPON::_0xFF07CF465F48B830(uParam0->f_1967[iVar0 /*4*/]))
		{
			return false;
		}
		iVar0++;
	}
	if (uParam0->f_1976.f_5)
	{
		if (!PROPSET::_HAS_PROPSET_LOADED_2(uParam0->f_1976))
		{
			PROPSET::_REQUEST_PROPSET_2(uParam0->f_1976);
			return false;
		}
	}
	return true;
}

bool func_978(var uParam0)
{
	if (!HUD::_DOES_TEXT_DATABASE_EXIST(&(uParam0->f_2232)))
	{
		return true;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED(&(uParam0->f_2232)))
	{
		return false;
	}
	return true;
}

bool func_979(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (uParam0->f_107[iVar0 /*113*/].f_32.f_2 != 0)
		{
			if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(uParam0->f_107[iVar0 /*113*/].f_32.f_2, false))
			{
				return false;
			}
		}
		if (uParam0->f_107[iVar0 /*113*/].f_8.f_1 != 0)
		{
			if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(uParam0->f_107[iVar0 /*113*/].f_8.f_1, false))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_980(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2236)
	{
		if (!STREAMING::DOES_ANIM_DICT_EXIST(&(uParam0->f_2236[iVar0 /*8*/])))
		{
		}
		else if (!STREAMING::HAS_ANIM_DICT_LOADED(&(uParam0->f_2236[iVar0 /*8*/])))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_981(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar0 /*113*/].f_5))
		{
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_107[iVar0 /*113*/].f_32.f_23)))
		{
			PED::_REQUEST_PED_EMOTIONAL_PRESET(uParam0->f_107[iVar0 /*113*/].f_5, &(uParam0->f_107[iVar0 /*113*/].f_32.f_23));
		}
		iVar0++;
	}
	return true;
}

void func_982(var uParam0, bool bParam1, bool bParam2)
{
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(*uParam0))
	{
		return;
	}
	TASK::_SET_SCENARIO_POINT_FLAG(*uParam0, 23, true);
	TASK::_SET_SCENARIO_POINT_FLAG(*uParam0, 25, true);
	if (bParam1)
	{
		TASK::_SET_SCENARIO_POINT_FLAG(*uParam0, 51, true);
	}
	if (bParam2)
	{
		TASK::_SET_SCENARIO_POINT_FLAG(*uParam0, 60, true);
	}
}

int func_983(int iParam0)
{
	switch (iParam0)
	{
		case joaat("APMS_COMP_BILL"):
			return 3;
		case joaat("APMS_COMP_CHARLES"):
			return 7;
		case joaat("APMS_COMP_DUTCH"):
			return 0;
		case joaat("APMS_COMP_HOSEA"):
			return 5;
		case joaat("APMS_COMP_JACK"):
			return 14;
		case joaat("APMS_COMP_JOHN"):
			return 1;
		case joaat("APMS_COMP_JAVIER"):
			return 2;
		case joaat("APMS_COMP_LENNY"):
			return 9;
		case joaat("APMS_COMP_MICAH"):
			return 6;
		case joaat("APMS_COMP_KIERAN"):
			return 10;
		case joaat("APMS_COMP_PEARSON"):
			return 17;
		case joaat("APMS_COMP_SEAN"):
			return 8;
		case joaat("APMS_COMP_STRAUSS"):
			return 18;
		case joaat("APMS_COMP_SWANSON"):
			return 21;
		case joaat("APMS_COMP_TRELAWNY"):
			return 23;
		case joaat("APMS_COMP_UNCLE"):
			return 4;
		case joaat("APMS_COMP_ABIGAIL"):
			return 13;
		case joaat("APMS_COMP_KAREN"):
			return 20;
		case joaat("APMS_COMP_MARYBETH"):
			return 15;
		case joaat("APMS_COMP_MOLLY"):
			return 16;
		case joaat("APMS_COMP_ADLERS"):
			return 11;
		case joaat("APMS_COMP_GRIMSHAW"):
			return 19;
		case joaat("APMS_COMP_TILLY"):
			return 22;
		case joaat("APMS_DOG_LAB"):
			return 12;
		default:
			break;
	}
	return -1;
}

void func_984(int iParam0, int iParam1, char* sParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(iParam1, false))
	{
		return;
	}
	if (!ANIMSCENE::_0x6F1F0B17109309DA(iParam1, sParam2))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1, sParam2, iParam0, 0);
}

void func_985(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 3)
	{
		return;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_67[iParam1]))
	{
		VOLUME::_0xBE551C2CC421185D(uParam0->f_67[iParam1], iParam2);
		VOLUME::_0x5B23DFF8E0948BB2(uParam0->f_67[iParam1], iParam2);
	}
}

void func_986(int iParam0, int iParam1, char* sParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(iParam1, false))
	{
		return;
	}
	if (!ANIMSCENE::_0x6F1F0B17109309DA(iParam1, sParam2))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1, sParam2, iParam0, 0);
}

int func_987(vector3 vParam0)
{
	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
	{
		if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_988(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 30);
}

void func_989(int iParam0)
{
	Global_1327590.f_19744 = iParam0;
}

bool func_990(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 673);
}

void func_991(int iParam0, float fParam1)
{
	int iVar0;
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_271(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	PED::_0x406CCF555B04FAD3(iVar0, 1, fParam1);
}

float func_992(int iParam0)
{
	return Global_1327590.f_23[iParam0 /*17*/].f_10;
}

float func_993(int iParam0)
{
	return Global_1327590.f_23[iParam0 /*17*/].f_11;
}

int func_994()
{
	return Global_1327590.f_1;
}

float func_995(float fParam0, float fParam1)
{
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam0, fParam1);
}

float func_996(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	return ((((fParam0 - fParam1) / (fParam2 - fParam1)) * (fParam4 - fParam3)) + fParam3);
}

bool func_997(var uParam0, int iParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2046))
	{
		return false;
	}
	if (!ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_2046, uParam0->f_107[iParam1 /*113*/].f_4))
	{
		return false;
	}
	if (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_2046, uParam0->f_107[iParam1 /*113*/].f_4))
	{
		return true;
	}
	return false;
}

bool func_998(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_107)
	{
		if (uParam0->f_107[iVar0 /*113*/].f_1 == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_999(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = uParam0->f_107[iParam1 /*113*/].f_32.f_16[iVar0];
		if (iVar1 >= 0 && iVar1 < uParam0->f_1711)
		{
			iVar2 = uParam0->f_1711[iVar1 /*15*/].f_10;
			sVar3 = uParam0->f_1711[iVar1 /*15*/].f_11;
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
			{
				PED::_0x2B02DB082258625F(uParam0->f_107[iParam1 /*113*/].f_5, iVar2, sVar3, uParam0->f_107[iParam1 /*113*/].f_32.f_2, uParam0->f_107[iParam1 /*113*/].f_32.f_3, 1);
			}
		}
		iVar0++;
	}
}
