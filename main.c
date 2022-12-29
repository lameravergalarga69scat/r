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
	char* sLocal_14 = NULL;
	char* sLocal_15 = NULL;
	char* sLocal_16 = NULL;
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = -1;
	var uLocal_26 = 0;
	char* sLocal_27 = NULL;
	int iLocal_28 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	var uVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	int iVar37;
	bool bVar38;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_14 = "mech_skin@BUCK_BUTCHER";
	sLocal_15 = "PBL_BASE";
	sLocal_16 = "PBL_DUMP";
	sLocal_17 = "PBL_DROP_IN";
	sLocal_27 = "beat_gang_camp_reminder";
	iLocal_28 = 23;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(512))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_35 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
	if (!Global_40)
	{
		CLOCK::SET_CLOCK_TIME(8, 0, 0);
		CLOCK::SET_CLOCK_DATE(5, 1, 1899);
	}
	if (__LIB_0__::func_313())
	{
		func_3(0);
	}
	else
	{
		func_3(1);
		PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_HORSE_ANDALUSIAN_PERLINO"), true);
	}
	__LIB_0__::func_897();
	func_5(-1, 0);
	__LIB_18__::func_429(0);
	func_7(0);
	func_8();
	func_9();
	__LIB_10__::func_731();
	func_11();
	__LIB_17__::func_445();
	__LIB_0__::func_11();
	func_14();
	func_15();
	__LIB_10__::func_614(128);
	if (__LIB_0__::func_13(2))
	{
		__LIB_10__::func_614(32768);
		Global_1347343.f_2 = __LIB_4__::func_533();
		__LIB_0__::func_7(&Global_1935630, 2048);
		__LIB_0__::func_19(&Global_1347343, 5);
	}
	else
	{
		__LIB_10__::func_732(32768);
		__LIB_11__::func_908();
	}
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	if (!ITEMSET::IS_ITEMSET_VALID(Global_43616))
	{
		Global_43616 = ITEMSET::CREATE_ITEMSET(true);
	}
	while (!__LIB_16__::func_207("init_all_sp", 1024))
	{
		BUILTIN::WAIT(0);
	}
	while (!__LIB_0__::func_382(256))
	{
		BUILTIN::WAIT(0);
	}
	MISC::PAUSE_DEATH_ARREST_RESTART(true);
	VEHICLE::SET_RANDOM_TRAINS(false);
	ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	}
	__LIB_0__::func_267(1);
	PED::_0xDC91F22F09BC6C2F(joaat("REL_WILD_ANIMAL"), 0);
	PED::_0xDC91F22F09BC6C2F(joaat("REL_WILD_ANIMAL_PREDATOR"), 0);
	PED::_0xDC91F22F09BC6C2F(joaat("REL_CRIMINALS"), 0);
	PED::_0xDC91F22F09BC6C2F(joaat("REL_GUNSLINGERS"), 0);
	PED::_0xDC91F22F09BC6C2F(joaat("REL_GANG_LARAMIE_GANG"), 0);
	PED::_0xDC91F22F09BC6C2F(joaat("REL_GANG_SKINNER_BROTHERS"), 0);
	PED::_0xDC91F22F09BC6C2F(joaat("REL_GANG_CREOLE"), 0);
	PED::_0xDC91F22F09BC6C2F(joaat("REL_GANG_LEMOYNE_RAIDERS"), 0);
	PED::_0xDC91F22F09BC6C2F(joaat("REL_GANG_SMUGGLERS"), 0);
	PED::_0xDC91F22F09BC6C2F(joaat("REL_GANG_ODRISCOLL"), 0);
	PED::_0xDC91F22F09BC6C2F(joaat("REL_GANG_MURFREE_BROOD"), 0);
	PED::_0xDC91F22F09BC6C2F(joaat("REL_WILD_ANIMAL_BIRD"), 0);
	PED::_0xDC91F22F09BC6C2F(joaat("REL_ALLIGATOR"), 0);
	PED::_0xDC91F22F09BC6C2F(joaat("REL_BOAR"), 0);
	__LIB_11__::func_369();
	__LIB_11__::func_368();
	SCRIPTS::_0x11B0A0B282FA9B10(1);
	SCRIPTS::_0xF9E951A1E5517C06();
	if (!Global_40)
	{
		if (__LIB_0__::func_2() == -1)
		{
			func_29(0, -1, 1);
			if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(__LIB_10__::func_733(joaat("BENCHMARK"))))
			{
				Global_43893 = 1;
			}
		}
		else
		{
			func_29(0, 0, 1);
		}
		func_31(1);
	}
	else if (!__LIB_1__::func_185(0) && !__LIB_0__::func_13(32770))
	{
		func_29(0, -1, 1);
	}
	else if (!__LIB_0__::func_382(32768))
	{
		iVar0 = CLOCK::GET_CLOCK_HOURS();
		if (iVar0 < 6)
		{
			CLOCK::ADVANCE_CLOCK_TIME_TO(6, 0, 0);
		}
	}
	if (Global_43893)
	{
		__LIB_0__::func_319(128);
	}
	MAP::_0xD3F58E9316B7FC2A(1);
	UIFEED::_0xDD1232B332CBB9E7(2, 1, 0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		PED::_0x5CA20FBE49891BBD(PLAYER::PLAYER_PED_ID(), 0);
	}
	while (!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
		}
		else
		{
			if (__LIB_0__::func_13(32))
			{
				MISC::PAUSE_DEATH_ARREST_RESTART(false);
				bVar1 = true;
			}
			Global_35 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
			BUILTIN::WAIT(0);
		}
	}
	if (bVar1)
	{
		MISC::PAUSE_DEATH_ARREST_RESTART(true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	}
	bVar2 = func_34(__LIB_0__::func_382(32768));
	if (Global_40)
	{
		if (__LIB_0__::func_28())
		{
			func_36();
			iVar3 = __LIB_0__::func_153(Global_35, 0, 0, 1);
			if (!__LIB_0__::func_144(__LIB_0__::func_153(Global_35, 2, 0, 1), 0) && (!__LIB_0__::func_154(iVar3) || !WEAPON::_IS_WEAPON_ONE_HANDED(iVar3)))
			{
				iVar4 = func_40(0, 0);
				if (__LIB_0__::func_154(iVar4))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar4, true, 2, false, false);
				}
				else if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN"), true, 2, false, false);
				}
			}
			__LIB_0__::func_11();
			__LIB_0__::func_11();
			__LIB_10__::func_41();
			if (bVar2 && Global_40.f_9 <= 2)
			{
				func_45(__LIB_0__::func_61(), &vVar5, &uVar8);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vVar5, false, false, true, true);
			}
			if (!func_46())
			{
				__LIB_1__::func_811(Global_35, Global_40.f_7729, 1, 0, 0);
			}
			__LIB_11__::func_121();
		}
		else
		{
			func_49();
		}
	}
	Global_1898438 = -5000;
	iVar9 = __LIB_1__::func_447(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), 1);
	bVar10 = func_51(iVar9);
	while ((!func_52() || ((!__LIB_0__::func_382(4096) && !__LIB_0__::func_382(32768)) && !__LIB_0__::func_13(128))) || !bVar10)
	{
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
		}
		else
		{
			func_53();
			func_54();
			iVar9 = __LIB_1__::func_447(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), 1);
			bVar10 = func_51(iVar9);
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
				ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
			}
			BUILTIN::WAIT(0);
		}
	}
	while (!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
		}
		else
		{
			if (__LIB_0__::func_13(32))
			{
				MISC::PAUSE_DEATH_ARREST_RESTART(false);
				bVar1 = true;
			}
			Global_35 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
			BUILTIN::WAIT(0);
		}
	}
	if (bVar1)
	{
		MISC::PAUSE_DEATH_ARREST_RESTART(true);
	}
	func_55();
	__LIB_11__::func_200();
	if (!Global_40 && !__LIB_0__::func_28())
	{
		__LIB_12__::func_21(24);
		func_58();
		while ((ENTITY::IS_ENTITY_DEAD(Global_35) || !PED::_0xA0BC8FAED8CFEB3C(Global_35)) || __LIB_1__::func_529())
		{
			if (SCRIPTS::_0x9E4EF615E307FBBE())
			{
			}
			else
			{
				BUILTIN::WAIT(0);
			}
		}
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_SCHOFIELD"), true, 2, false, false);
		__LIB_0__::func_145(0, 0);
		__LIB_0__::func_146(-1);
		__LIB_9__::func_469(100f);
	}
	if (!__LIB_0__::func_382(32768))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
		MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 200f, 4260352);
		if (func_63())
		{
			__LIB_10__::func_614(8192);
		}
		else
		{
			__LIB_10__::func_732(8192);
		}
	}
	else
	{
		__LIB_10__::func_732(8192);
	}
	if (__LIB_0__::func_13(128) && !func_46())
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Global_2621440[0 /*12066*/].f_9.f_7, Global_2621440[0 /*12066*/].f_9.f_13, true, false, true);
	}
	if (__LIB_0__::func_382(8192))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		MISC::_0xA565FAC215CBC77D();
		SCRIPTS::SHUTDOWN_LOADING_SCREEN();
		__LIB_0__::func_319(1024);
		CAM::DO_SCREEN_FADE_IN(500);
	}
	__LIB_10__::func_614(64);
	Global_40 = 1;
	__LIB_11__::func_882();
	__LIB_1__::func_84(32);
	if (!NETWORK::_GET_LAUNCH_PARAM_EXISTS(__LIB_10__::func_733(joaat("BENCHMARK"))))
	{
		__LIB_1__::func_84(128);
		__LIB_1__::func_84(16);
	}
	else
	{
		__LIB_0__::func_319(128);
	}
	if (__LIB_0__::func_2() != -1)
	{
	}
	else
	{
		func_66();
		if (__LIB_0__::func_6(Global_1879514.f_1) && Global_1879514.f_18)
		{
		}
		else if (__LIB_0__::func_6(Global_1347343.f_2))
		{
		}
		else if (__LIB_0__::func_13(2))
		{
		}
		else
		{
			UILOG::_UILOG_CLEAR_ALL_ENTRIES();
		}
		func_68();
		func_69();
		func_70();
		func_71();
		func_72();
		func_73();
		func_74();
		func_75(0);
		func_76();
		if ((((__LIB_0__::func_1(Global_1935630, 131072) && __LIB_1__::func_185(60)) && !__LIB_1__::func_185(67)) && (CLOCK::GET_CLOCK_HOURS() > 16 || CLOCK::GET_CLOCK_HOURS() < 6)) && __LIB_0__::func_12() == 22)
		{
			__LIB_10__::func_832(9);
		}
		func_80();
		while (!func_81(&uVar11))
		{
			BUILTIN::WAIT(0);
		}
	}
	while (!bVar38)
	{
		bVar38 = SCRIPTS::_0x9E4EF615E307FBBE();
		iVar37 = (1 + iVar37);
		if (iVar37 >= 10)
		{
			func_82();
			iVar37 = 0;
		}
		if (!Global_1572887.f_8)
		{
			func_54();
		}
		if (((Global_43893 && !Global_43889) && !bVar38) && !__LIB_0__::func_13(48))
		{
			if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("BENCHMARK")) <= 0)
			{
				SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("BENCHMARK"));
				if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("BENCHMARK")))
				{
				}
				else
				{
					SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH(joaat("BENCHMARK"), 1024);
					SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("BENCHMARK"));
					Global_43893 = 0;
				}
			}
		}
		BUILTIN::WAIT(0);
	}
	func_1();
	while (!SCRIPTS::_0x380FFA15B72408FB(10))
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	Global_1894899.f_2 = -1;
	if (__LIB_10__::func_644() != 2)
	{
		Global_1572864.f_3 = 0;
		__LIB_17__::func_405();
	}
}

void func_3(bool bParam0)
{
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_HORSE_APPALOOSA_FEWSPOTTED_PC"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_HORSE_ARABIAN_REDCHESTNUT_PC"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_HORSE_ARABIAN_WARPEDBRINDLE_PC"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_HORSE_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_HORSE_MORGAN_LIVERCHESTNUT_PC"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_HORSE_TENNESSEEWALKER_GOLDPALOMINO_PC"), bParam0);
}

void func_5(int iParam0, bool bParam1)
{
	int iVar0;
	if (!Global_40 || bParam1)
	{
		iVar0 = 0;
		while (iVar0 < __LIB_0__::func_388())
		{
			func_89(iVar0, iParam0);
			iVar0++;
		}
	}
}

void func_7(bool bParam0)
{
	int iVar0;
	if (!Global_40 || bParam0)
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			Global_40.f_450[iVar0] = -1;
			iVar0++;
		}
	}
}

void func_8()
{
	var uVar0;
	int iVar1;
	if (__LIB_0__::func_58())
	{
		return;
	}
	func_98(&uVar0);
	iVar1 = 0;
	while (iVar1 < 6)
	{
		func_99(&uVar0, iVar1);
		iVar1++;
	}
	__LIB_17__::func_408(&uVar0);
	func_101();
}

void func_9()
{
	func_102(1, 1442955798 /* GXTEntry: "Your horse is out of whistling range. While out of range, it will be shown as ~1b" +
    "~. You must get closer in order to be able to call it." */, 82949);
	func_102(6, -637613554 /* GXTEntry: "Continue to bond with your horse to increase the range at which it can be called." +
    "" */, 4);
	func_102(2, -491264247 /* GXTEntry: "Your horse is out of whistling range." */, 5);
	func_102(3, -211951838 /* GXTEntry: "Your main horse is out of whistling range. While out of range, it will be shown a" +
    "s ~1b~. You must get closer in order to be able to call it." */, 17413);
	func_102(4, -504561681 /* GXTEntry: "Your temporary horse is out of whistling range. While out of range, it will be sh" +
    "own as ~1b~. You must get closer in order to be able to call it." */, 17412);
	func_102(5, 1989166464 /* GXTEntry: "Your horses are out of whistling range." */, 4);
	func_102(7, 1528898976 /* GXTEntry: "You cannot call or command a horse until you have bonded with it. Continue to spe" +
    "nd time with this horse in order to gain its trust." */, 5);
	func_102(8, 740917367 /* GXTEntry: "Your horse won\'t follow you if you\'re in camp." */, 5);
	func_102(9, -1158474473 /* GXTEntry: "Your horse is hitched nearby. It stays hitched if you whistle for it while in cam" +
    "p." */, 5);
	func_102(10, -641388262 /* GXTEntry: "Your horse is lost." */, 5);
	func_102(11, -580966558 /* GXTEntry: "You do not have a horse available to call. You can steal, purchase, unstable, or " +
    "find a horse in the wild." */, 5);
	func_102(12, -1407195211 /* GXTEntry: "Your horse is not on the island." */, 5);
	func_102(13, -417529492 /* GXTEntry: "Horses do not respond to whistling when you are inside a building." */, 5);
	func_102(14, -1324583934 /* GXTEntry: "Your horse does not respond to whistling while you are in a cave." */, 5);
	func_102(15, -2015497475 /* GXTEntry: "Your horse does not respond to whistling while you are in a tunnel." */, 5);
	func_102(16, 1661723837 /* GXTEntry: "Your horse has been spooked. It has to calm down before it will respond to your c" +
    "ommands." */, 5);
	func_102(17, 1994675293 /* GXTEntry: "Your horse does not respond to commands in camp." */, 5);
	func_102(18, 1225508464 /* GXTEntry: "Your horse does not respond to commands on the ranch." */, 5);
	func_102(19, 1721144768 /* GXTEntry: "You have bonded with this horse and it will now respond to whistles and commands." +
    " To make it your main horse, equip it with your saddle." */, 4);
	func_102(20, 1262746693 /* GXTEntry: "You have bonded with this horse and it will now respond to whistles and commands." +
    "" */, 4);
	func_102(21, 354025617 /* GXTEntry: "You\'ve unlocked Rearing with this horse. Hold ~INPUT_HORSE_STOP ~ and tap ~INPUT_" +
    "HORSE_JUMP~ when stationary to perform this move." */, 581);
	func_102(22, -1855078184 /* GXTEntry: "You\'ve unlocked Skid Turns and Skid Stops with this horse. Hold ~INPUT_HORSE_STOP" +
    "~ + ~INPUT_HORSE_SPRINT~ while moving to perform these moves." */, 581);
	func_102(23, 1421241404 /* GXTEntry: "You\'ve unlocked the ability to Drift with this horse. Hold ~INPUT_HORSE_COLLECT~ " +
    "and use ~INPUT_HORSE_MOVE_LR~ while moving to perform this move." */, 581);
	func_102(24, 1895435813 /* GXTEntry: "." */, 4);
	func_102(25, 357598967 /* GXTEntry: "." */, 4);
	func_102(26, -1605217361 /* GXTEntry: "Your horse is dirty. This will cause its Health Core to drain faster. Brush your " +
    "horse or ride it through water to clean it." */, 4);
	func_102(27, -117368017 /* GXTEntry: "." */, 4);
	func_102(28, -1270089526 /* GXTEntry: "Your horse\'s Health will refill slower while its Health Core is low. Refill your " +
    "horse\'s Health Core by feeding it." */, 65540);
	func_102(29, 443850809 /* GXTEntry: "Your horse\'s Stamina will refill slower while its Stamina Core is low. Refill you" +
    "r horse\'s Stamina Core by feeding it." */, 65540);
	func_102(30, -2141646614 /* GXTEntry: "Your horse\'s Health Core is empty. This will begin to refill if you get off your " +
    "horse and allow it to rest, or lead it on foot using the reins." */, 65540);
	func_102(31, -1958786645 /* GXTEntry: "Your horse\'s Stamina Core is empty. This will begin to refill if you get off your" +
    " horse and allow it to rest, or lead it on foot using the reins." */, 65540);
	func_102(33, -1671091787 /* GXTEntry: "Your horse\'s Stamina Core is empty. If you continue to force it to swim, it will " +
    "buck you off and head for land." */, 65540);
	func_102(32, 1865623514 /* GXTEntry: "Both your horse\'s Cores are empty. These will begin to refill if you get off your" +
    " horse and allow it to rest, or lead it on foot using the reins." */, 65540);
	func_102(34, -271085641 /* GXTEntry: "Galloping causes a horse\'s Stamina to drain. Push the horse too hard and it will " +
    "buck you off." */, 4);
	func_102(35, joaat("TF_HORSE_SPRINT_STAMINA_2"), 4);
	func_103(34, 35);
	func_102(36, joaat("TF_HORSE_BUCK_OVERSPURRED"), 580);
	func_102(37, 1231893470 /* GXTEntry: "Horses become agitated when near predators. Bonding with your horse helps it beco" +
    "me more courageous." */, 580);
	func_102(38, 1045850957 /* GXTEntry: "~1~ belongs to ~2~ and doesn\'t like being ridden by anyone but him." */, 1541);
	func_102(39, 1474802901 /* GXTEntry: "~1~ belongs to ~2~. You cannot own or bond with a gang horse." */, 1025);
	func_102(40, 1437266219 /* GXTEntry: "This horse belongs to ~1~ and cannot be mounted at this time." */, 1025);
	func_102(41, 287196071 /* GXTEntry: "This is now your main horse. It is represented as ~1b~ on the radar." */, 17412);
	func_102(42, -1534873329 /* GXTEntry: "Your saddle has been returned to the nearest stable. You can collect it from any " +
    "stable ~BLIP_SHOP_HORSE~." */, 5);
	func_102(43, -923785888 /* GXTEntry: "Feeding your horse will replenish its Cores." */, 4);
	func_102(44, 107847243 /* GXTEntry: "Hitching your horse will let it rest, and allow its Cores to begin refilling if t" +
    "hey are low." */, 4);
	func_102(45, -874005272 /* GXTEntry: "You can command your horse to Stay, Flee, or Follow by focusing on it with ~INPUT" +
    "_INTERACT_LOCKON~ when it\'s nearby." */, 68);
	func_102(46, 285322508 /* GXTEntry: "You must increase your bond with a new horse before it is able to perform additio" +
    "nal actions, such as rearing." */, 65540);
	func_102(47, -1740675049 /* GXTEntry: "Study the horse to learn information about it. Call to the horse to get its atten" +
    "tion." */, 4);
	func_102(48, 497806156 /* GXTEntry: "Call to the horse to get its attention." */, 4);
	func_102(49, 71529769 /* GXTEntry: "Slowly approach the horse while staying locked on with ~INPUT_INTERACT_LOCKON~. M" +
    "oving quickly will spook the horse and cause it to run off." */, 4);
	func_102(50, 1068274146 /* GXTEntry: "You\'ve spooked the horse. Stop and calm it before continuing your approach." */, 4);
	func_102(51, 1584871165 /* GXTEntry: "Once it allows you to get close, press ~INPUT_ENTER~ to mount the horse." */, 4);
	func_102(52, -1151368854 /* GXTEntry: "Hold ~INPUT_MOVE_DOWN_ONLY~ and use ~INPUT_MOVE_LR~ to steer in the opposite dire" +
    "ction of the horse\'s movement to stay balanced." */, 4);
	func_102(53, 1490608149 /* GXTEntry: "You\'ve successfully broken the horse, but it will still have some wild tendencies" +
    ". Continue to bond with it to make it more obedient." */, 4);
	func_102(54, -1552620374 /* GXTEntry: "You were bucked while breaking a wild horse. Hold ~INPUT_MOVE_DOWN_ONLY~ and use " +
    "~INPUT_MOVE_LR~ to steer in the opposite direction of the horse\'s movement to st" +
    "ay balanced, and break it." */, 65540);
	func_102(55, -1656871326 /* GXTEntry: "Your horse has died. You can remove your saddle and put it on another horse, or p" +
    "urchase a new horse from the stables ~BLIP_SHOP_HORSE~" */, 4);
	func_102(56, 722368711 /* GXTEntry: "Your horse is critically injured. Use a horse reviver to heal your horse, or it w" +
    "ill die." */, 4);
	func_102(57, -1665795073 /* GXTEntry: "You need a Horse Reviver to revive your horse. You can craft one of these, or pur" +
    "chase one from a shop." */, 4);
	func_102(58, -1416617006 /* GXTEntry: "You need a Horse Reviver to revive your horse. These can be purchased from any Ge" +
    "neral Store or stables." */, 4);
	func_102(59, -1373195946 /* GXTEntry: "You now own multiple horses and can store up to 3 at the stables. Your previous h" +
    "orse has been stabled for you." */, 68);
	func_102(60, 1851568687 /* GXTEntry: "Equipping your saddle on a horse makes it your horse. Your weapons and camping eq" +
    "uipment are stored on your saddle." */, 68);
	func_103(59, 60);
	func_102(61, -2104417357 /* GXTEntry: "Your horse is agitated by a predator. Move the horse away or deal with the predat" +
    "or. If the predator gets too close your horse will flee." */, 66052);
	func_102(62, 1166291909 /* GXTEntry: "Your horse is agitated by a predator. If the predator gets too close your horse w" +
    "ill buck you off and flee." */, 66052);
	func_102(63, -688802965 /* GXTEntry: "You cannot remove the saddle from your horse while carrying animal carcasses or h" +
    "ogtied bodies." */, 5);
	func_102(64, -1731420917 /* GXTEntry: "Your saddle has been left behind. You can pick up your saddle ~BLIP_SADDLE~ from " +
    "its current location, or travel to any stable to have it retrieved automatically" +
    "." */, 4);
	func_102(65, 1712039849 /* GXTEntry: "Your saddle is out of reach. Return to the stable to retrieve your saddle." */, 4);
	func_102(66, 1257969622 /* GXTEntry: "Your horse\'s Stamina will drain faster while galloping, if there is an animal or " +
    "person stowed on the back." */, 65540);
	func_102(67, -1230044011 /* GXTEntry: "You are unable to saddle this horse at the moment. Make sure it\'s calm and you ar" +
    "en\'t in view of the owner, law or other witnesses to equip your saddle." */, 4);
	func_102(68, 623122901 /* GXTEntry: "Match speed with a companion by holding or tapping ~INPUT_HORSE_SPRINT~ while rid" +
    "ing near them. Your horse\'s Stamina will not drain while matching their speed." */, 69);
	func_102(69, 116888688 /* GXTEntry: "You have lost your hat. It can be retrieved from your horse or wardrobe." */, 0);
	func_102(71, -879318171 /* GXTEntry: "You have found a special hat. This hat has been added to your wardrobe and can be" +
    " stored on your horse. Special hats glow when lying on the ground." */, 0);
	func_102(72, 1109693541 /* GXTEntry: "You have found a special hat. This hat has been added to your wardrobe and can be" +
    " stored on your horse." */, 65536);
	func_102(73, -1884070406 /* GXTEntry: "This hat cannot be stored and will be lost if left on the ground." */, 65536);
	func_102(74, -1174138158 /* GXTEntry: "You have no outfits suitable for cold weather on your horse." */, 0);
	func_102(75, -508418261 /* GXTEntry: "You have no outfits suitable for hot weather on your horse." */, 0);
	func_102(76, -688557028 /* GXTEntry: "You have no outfits suitable for hot or cold weather on your horse." */, 0);
	func_102(198, -1663681033 /* GXTEntry: "Companions that want to go hunting with you will be marked with a ~BLIP_REGION_HU" +
    "NTING~ on the radar." */, 4);
	func_102(199, 1384944530 /* GXTEntry: "You have entered Legendary Animal Territory. Hunt this Legendary Animal by findin" +
    "g and inspecting clues." */, 4);
	func_102(200, -1030418965 /* GXTEntry: "You have entered Legendary Animal Territory, but there is too much activity in th" +
    "e area to track the animal." */, 4);
	func_102(201, 943325079 /* GXTEntry: "You have entered Legendary Animal Territory, but it will be some time before the " +
    "animal returns to the area." */, 4);
	func_102(78, 1204386981 /* GXTEntry: "You have acquired an ingredient required to craft the ~1~." */, 1028);
	func_102(79, -1858995382 /* GXTEntry: "You have gathered all the ingredients required to make the ~1~. Take these to the" +
    " Fence to craft this Talisman." */, 1028);
	func_102(80, 370447594 /* GXTEntry: "You have gathered the ingredient required to make the ~1~. Take this ingredient t" +
    "o the Fence to craft this Trinket." */, 1028);
	func_102(81, 620517859 /* GXTEntry: "You are now hot. While hot, your Health Core will drain faster. Change clothes to" +
    " cool down." */, 32784);
	func_102(82, 786300880 /* GXTEntry: "You are now cold. While cold, your Health Core will drain faster. Change clothes " +
    "to warm up." */, 32784);
	func_102(83, -1405655995 /* GXTEntry: "You are now drunk. Wait a few minutes to sober up." */, 32768);
	func_102(84, 199112456 /* GXTEntry: "You can rest by holding ~INPUT_DYNAMIC_SCENARIO~. Your Cores will not drain while" +
    " resting, and will refill slightly if they are very low." */, 32768);
	func_102(85, joaat("TF_LOW_STAMINA_CORE_START"), 32768);
	func_102(86, -817307285 /* GXTEntry: "Your Dead Eye Core is empty. You can sleep, smoke cigars, eat food, or drink coff" +
    "ee and alcohol to refill your Dead Eye Core." */, 32768);
	func_102(87, joaat("TF_LOW_HEALTH_CORE_START"), 32768);
	func_102(88, -1258723850 /* GXTEntry: "Your body has grown used to the effect of eating these plants. Stop eating them f" +
    "or a day and you will gain the full benefit from them again." */, 0);
	func_102(0, 1328275845 /* GXTEntry: "You are sick. While sick, you will only gain the benefit from consuming a limited" +
    " amount of food and drink." */, 513);
	func_102(89, -1346179088 /* GXTEntry: "You have been poisoned. This will cause your Health Core to drain. Eat a Health h" +
    "erb, such as Ginseng, to counteract the effects." */, 516);
	func_102(90, -1989120746 /* GXTEntry: "The effects of the poison have worn off." */, 4);
	func_102(91, -743542107 /* GXTEntry: "When you gain or lose weight, ~BLIP_RPG_OVERWEIGHT~ or ~BLIP_RPG_UNDERWEIGHT~ wil" +
    "l be shown in your Health Core." */, 4);
	func_102(92, -1799252769 /* GXTEntry: "You are now at your maximum weight." */, 4);
	func_102(93, 2061289134 /* GXTEntry: "You are now at your minimum weight." */, 4);
	func_102(94, 307558439 /* GXTEntry: "Overeating will cause you to gain weight, while not eating regularly enough will " +
    "cause you to lose weight." */, 0);
	func_102(95, -463004596 /* GXTEntry: "Your weight affects how quickly your Stamina drains, and the amount of damage you" +
    " can take." */, 0);
	func_103(94, 95);
	func_102(96, -997992274 /* GXTEntry: "Animals attached to your horse will decompose. Sell them before this happens." */, 16);
	func_102(97, -707888317 /* GXTEntry: "The animal on your horse is starting to decompose and is losing its value." */, 16);
	func_102(98, -334321697 /* GXTEntry: "The animal has decomposed too much and has lost all its value." */, 16);
	func_102(99, 940276186 /* GXTEntry: "While resting at a camp fire, you can access fire crafting. Fire crafting allows " +
    "you to cook meat and make tonics." */, 32768);
	func_102(100, -234727727 /* GXTEntry: "Ginseng is used to craft items that replenish Health. Use a campfire to craft wit" +
    "h Ginseng." */, 32768);
	func_102(101, 650526530 /* GXTEntry: "Sage is used to craft items that replenish Stamina. Use a campfire to craft with " +
    "Sage." */, 32768);
	func_102(102, -1840254829 /* GXTEntry: "Indian Tobacco is used to craft items that replenish Dead Eye. Use a campfire to " +
    "craft with Indian Tobacco." */, 32768);
	func_102(103, -1399389135 /* GXTEntry: "Yarrow is used to craft items that replenish Health. Use a campfire to craft with" +
    " Yarrow." */, 32768);
	func_102(104, -708925047 /* GXTEntry: "Wild carrots can be eaten or fed to your horse to replenish your Health Core." */, 32768);
	func_102(105, 1910552235 /* GXTEntry: "Common Bulrush is used to craft items for your horse." */, 32768);
	func_102(106, -117450424 /* GXTEntry: "Oleander is a poisonous herb. Use it in crafting to apply poison to weapons like " +
    "throwing knives and arrows." */, 32768);
	func_102(107, -1353351646 /* GXTEntry: "Eating berries refills your Health Core." */, 32768);
	func_102(108, -1169508001 /* GXTEntry: "When you skin or pluck an animal, you take meat from the carcass. You can cook an" +
    "d eat this meat at a campfire to refill your Cores." */, 32768);
	func_102(109, -422501883 /* GXTEntry: "Flight feathers can be used to craft improved or unique arrows." */, 32768);
	func_102(110, -907241368 /* GXTEntry: "Eat food before combat. When your Cores are full your regeneration rate is highes" +
    "t. When in combat, use healing tonics to refill Health quickly." */, 516);
	func_102(111, -273354156 /* GXTEntry: "You lose money when killed by enemies." */, 516);
	func_102(112, -503418783 /* GXTEntry: "The last location you died at is marked ~1b~ on the map." */, 1540);
	func_102(113, -1860078853 /* GXTEntry: "Press ~INPUT_VEH_EXIT~ to stand up in the boat. Hold ~INPUT_VEH_EXIT~ to exit the" +
    " boat." */, 4);
	func_102(77, 1598041226 /* GXTEntry: "You now own the off-hand holster. This allows you to carry two sidearms at once a" +
    "nd dual wield them." */, 5);
	func_102(114, 2065666193 /* GXTEntry: "You can begin more bounty missions from bounty posters found around towns." */, 5);
	func_102(115, 682756528 /* GXTEntry: "~s~A bounty poster has been posted at the ~BLIP_PROC_BOUNTY_POSTER~. Retrieving t" +
    "hese posters will give you the details needed to hunt a bounty target.~s~" */, 4);
	func_102(116, 601181133 /* GXTEntry: "~s~You have captured a criminal. You can take them back to the ~a~ Sheriff\'s Offi" +
    "ce for a small reward.~s~" */, 1028);
	func_102(117, -1160517710 /* GXTEntry: "~s~You are now wanted. You cannot collect on any bounties in this district until " +
    "you have paid your debt to society.~s~" */, 4);
	func_102(118, -1295863724 /* GXTEntry: "~s~Committing serious crimes will cause towns to go into lockdown for a while. Th" +
    "is is shown by a red area on the Pause Map.~s~" */, 5);
	func_102(119, -763105322 /* GXTEntry: "~s~Additional lawmen are patrolling while a town is locked down and you will beco" +
    "me wanted again if spotted before clearing your bounty.~s~" */, 5);
	func_103(118, 119);
	func_102(120, 1415497946 /* GXTEntry: "~s~Blackwater and the surrounding area is in lockdown, shown by a red area on the" +
    " Pause Map. You will become wanted if seen by law in this area.~s~" */, 4);
	func_102(121, -1293582803 /* GXTEntry: "~s~You can now sell stolen wagons to Seamus at the Wagon Fence ~BLIP_SHOP_COACH_F" +
    "ENCING~ in Emerald Ranch.~s~" */, 5);
	func_102(122, 603143905 /* GXTEntry: "~s~You can sell this wagon at the Wagon Fence ~BLIP_SHOP_COACH_FENCING~ in Emeral" +
    "d Ranch.~s~" */, 4);
	func_102(123, -273612239 /* GXTEntry: "~s~You need to wait for the Wagon Fence to return before selling a wagon.~s~" */, 4);
	func_102(124, -563233876 /* GXTEntry: "~s~You are wanted by the law and cannot use the shop at this time. Please try aga" +
    "in later.~s~" */, 4);
	func_102(125, 549692738 /* GXTEntry: "~s~You can no longer drop this wagon off at the Wagon Fence as it has been too he" +
    "avily damaged.~s~" */, 4);
	func_102(127, -1558839150 /* GXTEntry: "You can sell horses to Clay and Clive at Clemen\'s Cove ~BLIP_SHOP_HORSE_FENCING~." +
    " They will pay more than a stable for stolen horses, but less for purchased hors" +
    "es." */, 5);
	func_102(128, -1342271498 /* GXTEntry: "Clay will only accept the horse you are riding or leading." */, 4);
	func_102(129, 1740863586 /* GXTEntry: "~s~You\'ve discovered a home you can break into and rob, which is marked on your m" +
    "ap with ~e~~BLIP_PROC_HOME~~s~ when available.~s~" */, 0);
	func_102(152, 1587580315 /* GXTEntry: "Some shops run an illicit business on the side. Exploring around a shop, or getti" +
    "ng a tip from a stranger may expose a shop\'s unusual activities." */, 0);
	func_102(131, 1590177402 /* GXTEntry: "In addition to buying stolen wagons, Seamus runs a Fence. Visit a Fence to sell v" +
    "aluables, buy illicit goods, or craft Talismans and Trinkets." */, 5);
	func_102(153, 807130733 /* GXTEntry: "~s~Trains can be lucrative robbery targets. You can board the train while it\'s st" +
    "opped or jump on it from horseback to rob it.~s~" */, 4);
	func_102(154, -399307153 /* GXTEntry: "~s~To board the train, ride your horse alongside it and hold ~INPUT_HORSE_SPRINT~" +
    " to match its speed. When the prompt appears, press ~INPUT_JUMP~ to jump to the " +
    "train." */, 4);
	func_102(157, 513607990 /* GXTEntry: "~s~You can stop the train by threatening the engineer or by blocking the tracks.~" +
    "s~" */, 4);
	func_102(158, 356872743 /* GXTEntry: "~s~Forcing the train to stop away from populated areas will decrease the size of " +
    "the law response, should you allow a witness to escape.~s~" */, 4);
	func_102(155, 1205588547 /* GXTEntry: "~s~Acting in a threatening manner to passengers will initiate the robbery.~s~" */, 4);
	func_102(156, -444028358 /* GXTEntry: "~s~If the train passes through town while you are robbing the train, the law will" +
    " be alerted and a patrol will be dispatched after you." */, 4);
	func_102(159, -467846174 /* GXTEntry: "~s~Once the robbery has started, passengers that you have not yet robbed in the c" +
    "ar you are currently in will be marked on the radar.~s~" */, 4);
	func_102(160, -107628785 /* GXTEntry: "~s~Hold ~INPUT_AIM~ to target a passenger and press ~INPUT_INTERACT_LOCKON_ROB~ t" +
    "o rob them.~s~" */, 4);
	func_102(162, -1124101458 /* GXTEntry: "~s~Clear out the guards to give yourself time to rob the passengers.~s~" */, 516);
	func_103(155, 156);
	func_103(160, 159);
	func_103(157, 158);
	func_102(130, -832951255, 1024);
	func_102(138, 145624648 /* GXTEntry: "~s~You have been given a tip about a robbery opportunity. Press ~INPUT_PLAYER_MEN" +
    "U~ and open the log to find more information.~s~" */, 0);
	func_102(139, -1469076539 /* GXTEntry: "~s~You have been given a tip about an Indian holding camp ~BLIP_EVENT_RIGGS_CAMP~" +
    ".~s~" */, 0);
	func_102(132, 719752691 /* GXTEntry: "Poker is now available. Visit ~BLIP_MG_POKER~ to play." */, 0);
	func_102(133, 507790294 /* GXTEntry: "You cannot carry any more ~1~. Buy a bandolier to increase your capacity." */, 1028);
	func_102(134, -1928326675 /* GXTEntry: "You cannot carry any more ~1~. Buy an ammo belt to increase your capacity." */, 1028);
	func_102(135, -1969895912 /* GXTEntry: "You cannot carry any more ~1~. Complete challenges to upgrade your bandolier to i" +
    "ncrease your capacity." */, 1028);
	func_102(136, 730174236 /* GXTEntry: "You cannot carry any more ~1~. Complete challenges to upgrade your ammo belt to i" +
    "ncrease your capacity." */, 1028);
	func_102(137, -770663347 /* GXTEntry: "You cannot carry any more ~1~." */, 1028);
	func_102(163, 697102681 /* GXTEntry: "~s~Individuals that owe the gang money are marked on the map with ~1b~. Seek out " +
    "the debtors and recover the money.~s~" */, 1025);
	func_102(164, -859472440 /* GXTEntry: "~s~Put any collected debts in the camp funds.~s~" */, 0);
	func_102(165, 1492120364 /* GXTEntry: "~s~Arthur must confront certain targets. Press ~INPUT_INTERACT_NEG~ to confront.~" +
    "s~" */, 0);
	func_102(166, -1563370335 /* GXTEntry: "~s~Radar blips that cover large areas are meant to be searched.~s~" */, 1);
	func_102(167, -1893503445 /* GXTEntry: "~s~You can skin dead animals by holding ~INPUT_LOOT~ when standing next to the ca" +
    "rcass. Animal skins, pelts, and hides can be sold at shops.~s~" */, 0);
	func_102(168, -1993236866 /* GXTEntry: "~s~You can loot dead bodies for ammo and items. Stand over the body and hold ~INP" +
    "UT_LOOT~ to search it.~s~" */, 0);
	func_102(169, -861998726 /* GXTEntry: "~s~One of Strauss\' debtors was last seen in this area. Search the area to find th" +
    "em and reclaim the debt.~s~" */, 68);
	func_102(170, 878260591 /* GXTEntry: "~s~Donate the recovered debt to the camp funds ~COLOR_OBJECTIVE~~BLIP_AMBIENT_TIT" +
    "HING~~s~ at camp, or head to one of the other debtors ~BLIP_PROC_LOANSHARK~ to r" +
    "ecover further debts.~s~" */, 581);
	func_102(171, -1309461467 /* GXTEntry: "This table game is unavailable at the moment. Try again later." */, 4);
	func_102(173, 205914143 /* GXTEntry: "When camp requests are fulfilled, they appear as a ~BLIP_CAMP_REQUEST~ with the c" +
    "haracter in question. Check in with them to complete the request." */, 4);
	func_102(172, 1333257018 /* GXTEntry: "Companions will sometimes ask for help retrieving an item. Find and return it to " +
    "them in camp for a reward." */, 4);
	func_102(140, -1880803763 /* GXTEntry: "You have acquired the Lasso. This tool allows you to rope a variety of animals an" +
    "d to immobilize and hogtie people." */, 4);
	func_102(141, 310470683 /* GXTEntry: "To lasso a target, equip your lasso like any other weapon, aim at the target with" +
    " ~INPUT_AIM~ + ~INPUTGROUP_LOOK~, and press ~INPUT_ATTACK~ to hurl your lasso." */, 4);
	func_102(142, joaat("TF_LASSO_ON_HORSE"), 516);
	func_102(143, -1146048144 /* GXTEntry: "To hogtie a target, quickly approach the target and press ~INPUT_HOGTIE~. If you " +
    "don\'t hogtie the lassoed target, that person will break free after a few seconds" +
    "." */, 4);
	func_102(144, 1669998970 /* GXTEntry: "You can place the hogtied person on your horse. Press ~INPUT_PLACE_CARRIABLE_ONTO" +
    "_PARENT~ when next to your horse\'s hind quarter." */, 4);
	func_102(145, 1161166319 /* GXTEntry: "When being grappled, mash ~INPUT_MELEE_ATTACK~ to escape." */, 532);
	func_102(146, joaat("TF_NO_GUNS_IN_RHODES"), 5);
	func_102(147, -1904663526 /* GXTEntry: "You cannot use weapons or cause trouble in Rhodes when you are acting as a deputy" +
    " for Sheriff Gray." */, 5);
	func_102(148, -222321090 /* GXTEntry: "Dutch has asked the gang to not use weapons or cause trouble in Caliga Hall." */, 5);
	func_102(149, 911175212 /* GXTEntry: "You cannot use weapons or cause trouble in Caliga Hall when you are acting as a d" +
    "eputy for Sheriff Gray." */, 5);
	func_102(150, 901098319 /* GXTEntry: "This weapon is in poor condition. Maintain your weapons by pressing ~INPUT_QUICK_" +
    "SELECT_INSPECT~ while they are selected on the Weapon Wheel." */, 4);
	func_102(501, 556962895 /* GXTEntry: "You can interact with the shopkeeper by approaching the catalogue and selecting t" +
    "he appropriate option." */, 128);
	func_102(502, -4732326 /* GXTEntry: "You can interact with the shopkeeper by holding ~INPUT_INTERACT_LOCKON~ and selec" +
    "ting the appropriate option." */, 128);
	func_102(503, -809342316 /* GXTEntry: "You can interact with the foreman by holding ~INPUT_INTERACT_LOCKON~ and selectin" +
    "g the appropriate option." */, 128);
	func_102(504, joaat("TF_SHOP_POST_OFFICE"), 0);
	func_102(505, -1635466248 /* GXTEntry: "The Off-hand Holster is now available for purchase at any Gunsmith store. The Off" +
    "-hand Holster allows you to dual wield." */, 1);
	func_102(506, 323252264 /* GXTEntry: "Many shops allow you to interact with items on shelves, in order to examine or pu" +
    "rchase them directly." */, 128);
	func_102(507, -1792565875 /* GXTEntry: "This General Store does not sell clothing. Clothing can be purchased at the nearb" +
    "y Tailor." */, 65664);
	func_102(508, -2112795848 /* GXTEntry: "You have to be on foot to interact with this shopkeeper." */, 65664);
	func_102(511, -1189716495 /* GXTEntry: "The Trapper is shown by ~BLIP_SHOP_ANIMAL_TRAPPER~ on the map." */, 128);
	func_102(510, -190287083 /* GXTEntry: "You cannot shop while holding an animal pelt or carcass. They can be sold to a Bu" +
    "tcher or the Trapper for cash." */, 128);
	func_102(509, 322258537 /* GXTEntry: "You cannot shop while holding an animal pelt or carcass. They can be sold to a Bu" +
    "tcher for cash." */, 128);
	func_102(512, 542316304 /* GXTEntry: "This is the Trapper. He buys whole animals, skins, furs, hides and feathers. He c" +
    "an also craft various clothing items from the animals and pelts you sell him." */, 128);
	func_102(513, 213395742 /* GXTEntry: "The Trapper has a permanent shop in Saint Denis, in addition to a traveling stall" +
    " that can be found in the wilderness." */, 128);
	func_102(514, 1494443098 /* GXTEntry: "The Trapper can now use ~1~ to craft garments." */, 1152);
	func_102(515, 1234464176 /* GXTEntry: "To sell a pelt stored on the back of your horse, take your horse close to the But" +
    "cher\'s stall, focus on the Butcher, and hold ~INPUT_SHOP_SELL~." */, 65664);
	func_102(516, 706866209 /* GXTEntry: "To sell a pelt stored on the back of your horse, take your horse close to the Tra" +
    "pper\'s stall, focus on the Trapper, and hold ~INPUT_SHOP_SELL~." */, 65664);
	func_102(517, 1707129024 /* GXTEntry: "The catalogue is currently unavailable while working at Pronghorn Ranch." */, 128);
	func_102(518, 1413978366 /* GXTEntry: "The catalogue and weapon customization are currently unavailable while working at" +
    " Pronghorn Ranch." */, 128);
	func_102(519, -1072053682 /* GXTEntry: "You cannot craft or buy items from the Fence while working at Pronghorn Ranch." */, 128);
	func_102(520, -571835808 /* GXTEntry: "You cannot buy items from the Trapper while working at Pronghorn Ranch." */, 128);
	func_102(521, 1562440933 /* GXTEntry: "You have already bought all currently available newspapers." */, 128);
	func_102(522, 1727165432 /* GXTEntry: "You cannot purchase train tickets while carrying something." */, 128);
	func_102(523, -1774924102 /* GXTEntry: "The ~1~ is now available to purchase in shops." */, 1088);
	func_102(524, -477965895 /* GXTEntry: "The ~1~ is now available to modify in shops." */, 1089);
	func_102(525, -825236504 /* GXTEntry: "The ~1~ is now available to purchase and modify in shops." */, 1088);
	func_102(526, -945757107 /* GXTEntry: "New weapons are available to purchase and modify in shops." */, 65);
	func_102(527, -1646996587 /* GXTEntry: "Special lures are now available to purchase at the Bait shop in Lagras. Using the" +
    "se lures will make it easier to catch larger fish." */, 1);
	func_102(174, -1239844062 /* GXTEntry: "You cannot use weapons in camp." */, 0);
	func_102(175, -1024099583 /* GXTEntry: "You cannot use weapons in this area." */, 4);
	func_102(176, 274213443 /* GXTEntry: "You are unable to ride your horse in this town." */, 4);
	func_102(177, 951458700 /* GXTEntry: "You can access basic crafting, without a fire, by selecting the crafting tools fr" +
    "om your Item Wheel." */, 4);
	func_102(178, -1784981781 /* GXTEntry: "You are unable to rest, craft, or sleep when in combat." */, 4);
	func_102(555, 1055679868 /* GXTEntry: "Gunfire near camp may bring unwanted attention. Move further away to a safe dista" +
    "nce." */, 4);
	func_102(556, -1451930162 /* GXTEntry: "You are unable to fire weapons around ranch grounds. Move further away to a safe " +
    "distance." */, 4);
	func_102(151, -1724964058 /* GXTEntry: "You can lock on to the padlock to assist in aiming." */, 5);
	func_102(179, 754006577 /* GXTEntry: "~s~You have discovered a stranger. They are marked with a ~1b~ and will give you " +
    "tasks to perform.~s~" */, 1028);
	func_102(180, -1591427451 /* GXTEntry: "~1b~ blips indicate optional stranger missions. Speak to the stranger in the area" +
    " to begin the strand.~s~" */, 1028);
	func_102(181, -2132053925 /* GXTEntry: "~s~You\'ve received your first task. Tasks can be completed at any time.~s~" */, 4);
	func_102(182, -1840773566 /* GXTEntry: "~s~This task has marked ~q~an area~s~ on your map to search rather than a specifi" +
    "c location. This does not have to be searched immediately.~s~" */, 4);
	func_102(183, -1958980732 /* GXTEntry: "~s~You have received a task from a stranger. These tasks can be completed at any " +
    "time, and are marked with a ~BLIP_RC~.~s~" */, 4);
	func_102(184, -824284931 /* GXTEntry: "~s~You have encountered a stranger ~BLIP_RC~. Some strangers will give you tasks " +
    "to perform. These tasks can be completed at any time .~s~" */, 4);
	func_102(185, -1662190894 /* GXTEntry: "~s~A letter has been left for you at your tent. You can check for mail for the ga" +
    "ng at Post Offices in towns.~s~" */, 4);
	func_102(186, -2044484942 /* GXTEntry: "~s~A letter has arrived for you. Return to camp to read this.~s~" */, 4);
	func_102(187, joaat("TF_JOURNAL_ACCESS0"), 4);
	func_102(188, -2130020923 /* GXTEntry: "~s~The status of any current task can be viewed in your Progress menu or Compendi" +
    "um in the Pause menu, accessed using ~INPUT_FRONTEND_PAUSE~.~s~" */, 4);
	func_102(189, -1926263277 /* GXTEntry: "~s~You can also access your progress menu or Compendium using ~INPUT_FEED_INTERAC" +
    "T~ for a short period after receiving an update.~s~" */, 4);
	func_102(190, -2098628304 /* GXTEntry: "~s~Herbs with special properties are marked with ~BLIP_PLANT~ on your radar. Thes" +
    "e herbs can be used in medicines and tonics or sold to merchants.~s~" */, 4);
	func_102(191, -332901139 /* GXTEntry: "~s~Visit ~BLIP_PROC_COACH~ for information about coaches carrying valuable cargo." +
    "~s~" */, 5);
	func_102(192, 1832946484 /* GXTEntry: "~s~You can hunt and skin any animal, and sell the proceeds in town, or bring them" +
    " back to help the gang.~s~" */, 4);
	func_102(193, -2119444607 /* GXTEntry: "This animal is decomposed and can no longer be skinned." */, 4);
	func_102(194, 982638214 /* GXTEntry: "Use available beds to save progress, change outfits and, once unlocked, fast trav" +
    "el." */, 5);
	func_102(195, 104025434 /* GXTEntry: "Press ~INPUT_SPECIAL_ABILITY~ to engage Dead Eye." */, 4);
	func_102(196, joaat("TF_EAGLE_EYE"), 0);
	func_102(197, -1746780873 /* GXTEntry: "~s~To row forwards, hold ~INPUT_VEH_BOAT_ACCELERATE~. To row backwards, hold ~INP" +
    "UT_VEH_BOAT_BRAKE~. Steer using ~INPUT_VEH_BOAT_MOVE_LR~." */, 4);
	func_102(202, -57221646 /* GXTEntry: "You have been challenged to a duel. If you accept, you will be asked to get into " +
    "position to begin." */, 4);
	func_102(203, 1440543461 /* GXTEntry: "You have challenged someone to a duel. Get into position to begin." */, 4);
	func_102(204, 1659742301 /* GXTEntry: "This person can be challenged to a duel. If you make the challenge, you will be a" +
    "sked to get into position to begin." */, 4);
	func_102(205, -1728520507 /* GXTEntry: "You currently do not have a suitable weapon to accept this duel challenge." */, 4);
	func_102(206, -100261443 /* GXTEntry: "You have discovered a recipe." */, 12);
	func_102(207, 1282359645 /* GXTEntry: "You have discovered a new herb." */, 12);
	func_102(208, -1117426317 /* GXTEntry: "You have discovered the properties of ~1~." */, 1036);
	func_102(209, -2139696785 /* GXTEntry: "You have tasted ~1~, which has taught you a new recipe." */, 1036);
	func_102(210, -79710399 /* GXTEntry: "Blackberry is a Health herb. It can be eaten to refill your Health Core or crafte" +
    "d into Predator Bait." */, 1);
	func_102(211, 1464586970 /* GXTEntry: "Evergreen Huckleberry is a Health herb. It can be eaten to refill your Health Cor" +
    "e or crafted into Predator Bait." */, 1);
	func_102(212, -187882257 /* GXTEntry: "Raspberry is a Health herb. It can be eaten to refill your Health Core or crafted" +
    " into Predator Bait." */, 1);
	func_102(213, 317970992 /* GXTEntry: "Wintergreen Berry is a Health herb. It can be eaten to refill your Health Core or" +
    " crafted into Predator Bait." */, 1);
	func_102(214, -863957205 /* GXTEntry: "Alaskan Ginseng is a Health herb. It can be eaten to refill your Health Core or c" +
    "rafted into a Health Cure." */, 1);
	func_102(215, 2097878939 /* GXTEntry: "American Ginseng is a Health herb. It can be eaten to refill your Health Core or " +
    "crafted into a Health Cure." */, 1);
	func_102(216, -937931736 /* GXTEntry: "Yarrow is a Health herb. It can be eaten to refill your Health Core or crafted in" +
    "to a Health Cure." */, 1);
	func_102(217, 615174536 /* GXTEntry: "English Mace is a Health herb. It can be eaten to refill your Health Core or craf" +
    "ted into a Health Cure." */, 1);
	func_102(218, -1398748526 /* GXTEntry: "Milkweed is a Health herb. It can be eaten to refill your Health Core or crafted " +
    "into special items." */, 1);
	func_102(219, -1569965791 /* GXTEntry: "Vanilla Flower is a Health herb. It can be eaten to refill your Health Core or cr" +
    "afted into Herbivore Bait." */, 1);
	func_102(220, 2019508864 /* GXTEntry: "Oleander Sage is a poisonous herb. It can be crafted into deadly weapons." */, 1);
	func_102(221, -899306442 /* GXTEntry: "Desert Sage is a Stamina herb. It can be eaten to refill your Stamina Core or cra" +
    "fted into Bitters or a Horse Stimulant." */, 1);
	func_102(222, -1934751777 /* GXTEntry: "Hummingbird Sage is a Stamina herb. It can be eaten to refill your Stamina Core o" +
    "r crafted into Bitters or a Horse Stimulant." */, 1);
	func_102(223, 1746273927 /* GXTEntry: "Red Sage is a Stamina herb. It can be eaten to refill your Stamina Core or crafte" +
    "d into Bitters or a Horse Stimulant." */, 1);
	func_102(224, -644567760 /* GXTEntry: "Violet Snowdrop is a Stamina herb. It can be eaten to refill your Stamina Core or" +
    " crafted into Herbivore Bait." */, 1);
	func_102(225, -74448660 /* GXTEntry: "Wild Feverfew is a Stamina herb. It can be eaten to refill your Stamina Core or c" +
    "rafted into Bitters." */, 1);
	func_102(226, 14795803 /* GXTEntry: "Burdock Root is a Stamina herb. It can be eaten to refill your Stamina Core or cr" +
    "afted into Bitters." */, 1);
	func_102(227, -1478852948 /* GXTEntry: "Indian Tobacco is a Dead Eye herb. It can be eaten to refill your Dead Eye Core o" +
    "r crafted into Snake Oil." */, 1);
	func_102(228, -309353715 /* GXTEntry: "Golden Currant is a Dead Eye herb. It can be eaten to refill your Dead Eye Core o" +
    "r crafted into Snake Oil." */, 1);
	func_102(229, 199374245 /* GXTEntry: "Blackcurrant is a Dead Eye herb. It can be eaten to refill your Dead Eye Core or " +
    "crafted into Snake Oil." */, 1);
	func_102(230, -935762660 /* GXTEntry: "Prairie Poppy is a Dead Eye herb. It can be eaten to refill your Dead Eye Core or" +
    " crafted into Snake Oil." */, 1);
	func_102(231, 234082525 /* GXTEntry: "Wild Carrot is a Health herb. It can be eaten to refill your Health Core or craft" +
    "ed into horse items." */, 1);
	func_102(232, 1026737268 /* GXTEntry: "Common Bulrush is a Health herb. It can be crafted into a Horse Stimulant." */, 1);
	func_102(233, 1049796611 /* GXTEntry: "Bay Bolete is a Health herb. It can be eaten to refill your Health Core or crafte" +
    "d into Herbivore Bait." */, 1);
	func_102(234, -281686174 /* GXTEntry: "Chanterelle is a Health herb. It can be eaten to refill your Health Core or craft" +
    "ed into Herbivore Bait." */, 1);
	func_102(235, -1072882472 /* GXTEntry: "Parasol Mushroom is a Health herb. It can be eaten to refill your Health Core or " +
    "crafted into Herbivore Bait." */, 1);
	func_102(236, -1826634801 /* GXTEntry: "Ram\'s Head is a Health herb. It can be eaten to refill your Health Core or crafte" +
    "d into Herbivore Bait." */, 1);
	func_102(237, 1539508377 /* GXTEntry: "Creeping Thyme is a Dead Eye herb. It can be eaten to refill your Dead Eye Core o" +
    "r used as a seasoning in cooking." */, 1);
	func_102(238, -279714506 /* GXTEntry: "Oregano is a Stamina herb. It can be eaten to refill your Stamina Core or used as" +
    " a seasoning in cooking." */, 1);
	func_102(239, 898084375 /* GXTEntry: "Wild Mint is a Health herb. It can be eaten to refill your Health Core or used as" +
    " a seasoning in cooking." */, 1);
	func_102(240, 843093427 /* GXTEntry: "Using ~1~ will increase your Health XP." */, 1028);
	func_102(241, 185035452 /* GXTEntry: "Using ~1~ will increase your Dead Eye XP." */, 1028);
	func_102(242, -744402065 /* GXTEntry: "Using ~1~ will increase your Stamina XP." */, 1028);
	func_102(243, -97628567 /* GXTEntry: "You cannot gain experience from ~1~ because your Dead Eye is at max level." */, 1028);
	func_102(244, -2007846308 /* GXTEntry: "You cannot gain experience from ~1~ because your Health is at max level." */, 1028);
	func_102(245, 379360587 /* GXTEntry: "You cannot gain experience from ~1~ because your Stamina is at max level." */, 1028);
	func_102(246, 979767353 /* GXTEntry: "Your Health bar has increased. Fist fights, bow shots, fishing and other physical" +
    " strength related activities will increase it further." */, 4);
	func_102(247, 1794940017 /* GXTEntry: "Your Dead Eye bar has increased. Trick shots, hunting, crafting and other surviva" +
    "list related activities will increase it further." */, 4);
	func_102(248, -17930993 /* GXTEntry: "Your Stamina bar has increased. Performing strenuous activities such as sprinting" +
    " or swimming will increase it further." */, 4);
	func_102(249, -1090577349 /* GXTEntry: "Whenever you have money set aside for the gang, you can fund the camp at ~p~~BLIP" +
    "_AMBIENT_TITHING~." */, 4);
	func_102(250, 1523477057 /* GXTEntry: "You have taken a companion\'s request. Some companions will request items, these w" +
    "ill be listed in the camp upgrades sub menu." */, 4);
	func_102(251, -1449348514 /* GXTEntry: "You have a companion\'s requested item. Talk to them to deliver it." */, 4);
	func_102(252, 1194521184 /* GXTEntry: "You have fulfilled a companion\'s request. Come back later for a potential reward." +
    "" */, 4);
	func_102(253, 1624444568 /* GXTEntry: "You have collected a requested item. This item is currently wanted by a camp comp" +
    "anion." */, 4);
	func_102(254, -1899809609 /* GXTEntry: "When you give money to the gang, it raises morale, and the money will be used to " +
    "purchase camp upgrades and supplies." */, 4);
	func_102(255, 2068383985 /* GXTEntry: "Animal carcasses can be dropped off to Pearson at ~BLIP_SHOP_BUTCHER~ to contribu" +
    "te to gang supplies." */, 5);
	func_102(256, -692047840 /* GXTEntry: "Bring Pearson animals to supply the camp. He can use the meat for food and the sk" +
    "ins to craft Satchels with increased capacity." */, 4);
	func_102(257, 584304790 /* GXTEntry: "Bring Pearson animals to supply the camp. He can use the meat for food and the sk" +
    "ins to craft Satchels with increased capacity." */, 4);
	func_102(258, 1007934964 /* GXTEntry: "~s~Go to the map screen ~INPUT_FRONTEND_PAUSE~ and press ~INPUT_FRONTEND_ACCEPT~ " +
    "to add or remove a custom waypoint with a route." */, 5);
	func_102(259, -1770595760 /* GXTEntry: "If a nearby civilian sees or hears something suspicious they may come to investig" +
    "ate. Investigating civilians are marked with a white ~BLIP_AMBIENT_EYEWITNESS~." */, 4);
	func_102(260, -1690981711 /* GXTEntry: "If a witness sees you commit a crime they\'ll be marked with a bright red ~BLIP_AM" +
    "BIENT_EYEWITNESS~. If they report your crime then law will be dispatched to hunt" +
    " you down." */, 4);
	func_102(261, -1143104690 /* GXTEntry: "A witness that hasn\'t seen the criminal is marked with a dark red ~BLIP_AMBIENT_E" +
    "YEWITNESS~. They\'ll report this evidence and law will come to investigate furthe" +
    "r." */, 4);
	func_102(262, -2037426830 /* GXTEntry: "Witnesses can be intimidated into forgetting your crimes. Focus on the witness an" +
    "d press ~INPUT_CONTEXT_Y~ to intimidate." */, 4);
	func_102(265, 329339607 /* GXTEntry: "You are wanted. Fussar\'s Guards are now searching for you." */, 516);
	func_102(266, -562783689 /* GXTEntry: "Evade the guards by escaping from the red search area marked on the radar." */, 516);
	func_102(263, 231450604 /* GXTEntry: "You are wanted. Lawmen are now searching for you." */, 516);
	func_102(264, 904198174 /* GXTEntry: "Evade the law by escaping from the red search area marked on the radar." */, 516);
	func_102(267, 1302525821 /* GXTEntry: "The law cannot see you. If you continue to evade them they will eventually stop l" +
    "ooking for you." */, 516);
	func_102(268, -839870815 /* GXTEntry: "If your crimes aren\'t too severe, lawmen may give you an opportunity to surrender" +
    " peacefully. Focus on the lawman and press ~INPUT_SURRENDER~ to surrender." */, 516);
	func_102(269, -363264000 /* GXTEntry: "Lawmen will become suspicious if you loiter in certain areas for too long. Move a" +
    "long quickly to avoid their attention." */, 4);
	func_102(270, -451327186 /* GXTEntry: "Certain areas are private property. Property owners may report you to the law for" +
    " trespassing." */, 4);
	func_102(271, -771574767 /* GXTEntry: "If lawmen haven\'t identified a suspect you may be able to talk your way out of tr" +
    "ouble. Focus on the lawman and press ~INPUT_INTERACT_LOCKON_POS~ to try to bluff" +
    " your way out." */, 4);
	func_102(274, 926789089 /* GXTEntry: "There is still a bounty on your head. Pay it off at a Post Office ~BLIP_POST_OFFI" +
    "CE~." */, 4);
	func_102(272, 211359492 /* GXTEntry: "Your description has been noted by the law. Make yourself harder to recognize by " +
    "wearing a mask or changing your appearance." */, 4);
	func_102(273, 869869151 /* GXTEntry: "Bounty hunters have tracked you down." */, 516);
	func_102(276, 1531107089 /* GXTEntry: "If you cannot pay for your crimes, you will be held in the jail for a time. When " +
    "you get out, they give you your guns back." */, 4);
	func_102(275, 2067898910 /* GXTEntry: "Your bounty has been cleared now that you\'ve served your time. The sheriff has ta" +
    "ken a portion of your total bounty as punishment." */, 516);
	func_102(277, -1537183144 /* GXTEntry: "When you get arrested, the law will take you to the nearest jail. There you must " +
    "pay for your crimes." */, 4);
	func_102(278, -1753314606 /* GXTEntry: "The law in the area is aware of your past misdeeds and will come down on you more" +
    " harshly." */, 4);
	func_102(279, -976689306 /* GXTEntry: "The law in the area is aware of your grave past and will stop at nothing to bring" +
    " you to justice." */, 4);
	func_102(280, -280551512 /* GXTEntry: "The law in the area is aware of your sterling reputation and is unconcerned with " +
    "stories of uncouth behavior." */, 4);
	func_102(281, 1310626790 /* GXTEntry: "Bounty hunters remember previous crimes you committed in their state. Pay off you" +
    "r bounty at a Post Office ~BLIP_POST_OFFICE~." */, 4);
	func_102(282, -1458426020 /* GXTEntry: "The law are no longer pursuing you, but your crimes won\'t be forgotten. If you ar" +
    "e spotted by a lawman in a red area you will become wanted again." */, 4);
	func_102(283, -1521356354 /* GXTEntry: "Lawmen have posted a bounty on your head. Avoid them, or pay off your bounty at a" +
    " Post Office." */, 4);
	func_102(284, 479362125 /* GXTEntry: "Getting away with a crime while wearing a disguise reduces the law\'s heat on you." +
    "" */, 4);
	func_102(289, -1730471781 /* GXTEntry: "Minor crimes anger the population around you. Instead of going for the law, they " +
    "often come to take it out of your hide." */, 4);
	func_102(477, 934523351 /* GXTEntry: "Until you pay your bounty, bounty hunters will continue to track you down. Telegr" +
    "aph services are located within each Post Office ~BLIP_POST_OFFICE~." */, 4);
	func_102(290, 1246561821 /* GXTEntry: "Come back at a later time to see the upgrades." */, 4);
	func_102(291, 1402143862 /* GXTEntry: "Chores can be performed around camp. Go to the ~BLIP_AMBIENT_CHORE~~s~ to complet" +
    "e the chore." */, 4);
	func_102(544, 1427410966 /* GXTEntry: "When crossing state lines, your bounty and Wanted Level will reflect any crimes y" +
    "ou have committed in the state you just entered." */, 516);
	func_102(545, 842295137 /* GXTEntry: "When you commit crimes in a town or region, it will enter lockdown. Lockdown will" +
    " be lifted once enough time has passed, or you pay your bounty." */, 516);
	func_102(546, 1462654506 /* GXTEntry: "You have committed enough crimes that the town has been locked down. Extra patrol" +
    "s have been posted, and you can no longer use local shops." */, 516);
	func_102(547, 1165537983 /* GXTEntry: "Pay off your bounty at a Post Office or stay away from the area for a while to le" +
    "t the law cool off." */, 516);
	func_102(548, 748924890 /* GXTEntry: "Your presence is not welcome in this area. Keep out of the region to avoid troubl" +
    "e." */, 516);
	func_102(285, 1096551697 /* GXTEntry: "Changing your appearance - including clothes, hair, and facial hair - reduces the" +
    " likelihood of lawmen recognizing you as a criminal." */, 4);
	func_102(286, -1119237950 /* GXTEntry: "Taking down your bounty posters delays posses, marshals, and bounty hunters from " +
    "finding you in the wilderness." */, 4);
	func_102(287, 2075914777 /* GXTEntry: "When arrested, you must serve a jail sentence and pay a fine equal to half your s" +
    "tate bounty. Upon release, your state bounty is cleared." */, 4);
	func_102(288, -217483428 /* GXTEntry: "When broken out of jail, you don\'t have to pay a fine to clear your bounty." */, 516);
	func_102(292, -376517445 /* GXTEntry: "The Camp item is now available for purchase at the General Store. With it you can" +
    " save your game from anywhere in the wilderness." */, 4);
	func_102(293, -381895251 /* GXTEntry: "After settling into Beecher\'s Hope, you can help with the upkeep by pitching in a" +
    "round the ranch." */, 4);
	func_102(294, 923523402, 4);
	func_102(295, -35625228, 4);
	func_102(296, 2022461088 /* GXTEntry: "Honor and character attributes can be increased by partaking in daily chores arou" +
    "nd the camp. These efforts will be recognized by the gang." */, 4);
	func_102(297, -428820254 /* GXTEntry: "Honor and character attributes can be increased by partaking in daily chores arou" +
    "nd the ranch." */, 4);
	func_102(298, 854468693 /* GXTEntry: "~s~To plant a placeable explosive, select it from the Weapon Wheel and place it o" +
    "n the ground with ~INPUT_ATTACK~.~s~" */, 4);
	func_102(299, -1005627854 /* GXTEntry: "Look for Legendary Fish locations throughout the world. Once caught, you can mail" +
    " them to Gill for a nice reward." */, 5);
	func_102(300, -1986558213 /* GXTEntry: "To convince the camper to let you sit down, stand next to him and press ~INPUT_CO" +
    "NTEXT_Y~ to give him whiskey." */, 4);
	func_102(301, -1272081633 /* GXTEntry: "To respond to a camper\'s story,~n~Press ~INPUT_INTERACT_POS~ to respond positivel" +
    "y~n~Press ~INPUT_INTERACT_NEG~ to respond negatively." */, 4);
	func_102(302, joaat("TF_SP_GANG_HIDEOUTS"), 4);
	func_102(303, -1470773185 /* GXTEntry: "You have discovered a gang camp. Enemy gang camps can be a good source of supplie" +
    "s." */, 4);
	func_102(304, -2003731674 /* GXTEntry: "Expanded rest time options will become available as you acquire upgrades to your " +
    "camp tent." */, 4);
	func_102(305, -414636663 /* GXTEntry: "To sit at the campfire, dismount your horse, and press ~INPUT_CONTEXT_Y~ near an " +
    "open spot to take a seat." */, 0);
	func_102(306, -504736726 /* GXTEntry: "You have already learned this crafting recipe." */, 8);
	func_102(307, -1361844183 /* GXTEntry: "You have learned the Special Horse Medicine recipe." */, 8);
	func_102(308, 868895700 /* GXTEntry: "You have learned the Special Horse Reviver recipe." */, 8);
	func_102(309, 559911112 /* GXTEntry: "You have learned the Horse Ointment recipe." */, 8);
	func_102(310, 1066071363 /* GXTEntry: "You have learned the Special Horse Stimulant recipe." */, 8);
	func_102(311, 1993508052 /* GXTEntry: "You have learned the Horse Meal recipe." */, 8);
	func_102(312, 1996292318 /* GXTEntry: "You have learned the Special Health Cure recipe." */, 8);
	func_102(313, 374801514 /* GXTEntry: "You have learned the Special Bitters recipe." */, 8);
	func_102(314, -658139838 /* GXTEntry: "You have learned the Special Snake Oil recipe." */, 8);
	func_102(315, 423966992 /* GXTEntry: "You have learned the Special Tonic recipe." */, 8);
	func_102(316, -1092683892 /* GXTEntry: "You have learned the Potent Herbivore Bait recipe." */, 8);
	func_102(317, 1662423691 /* GXTEntry: "You have learned the Potent Predator Bait recipe." */, 8);
	func_102(318, 1384456296 /* GXTEntry: "You have learned the Predator Bait recipe." */, 8);
	func_102(319, -1078914282 /* GXTEntry: "You have learned the Cover Scent recipe." */, 8);
	func_102(320, 916440151 /* GXTEntry: "You have learned the Dynamite Arrow recipe." */, 8);
	func_102(321, 1008252 /* GXTEntry: "You have learned the Fire Arrow recipe." */, 8);
	func_102(322, -863697517 /* GXTEntry: "You have learned the Improved Arrow recipe." */, 8);
	func_102(323, -1520658097 /* GXTEntry: "You have learned the Poison Arrow recipe." */, 8);
	func_102(324, 389581591 /* GXTEntry: "You have learned the Small Game Arrow recipe." */, 8);
	func_102(325, -815118364 /* GXTEntry: "You have learned the Volatile Dynamite recipes." */, 8);
	func_102(326, -2081582655 /* GXTEntry: "You have learned the Fire Bottle recipes." */, 8);
	func_102(327, 1163268602 /* GXTEntry: "You have learned the Volatile Fire Bottle recipe." */, 8);
	func_102(328, 1503394588 /* GXTEntry: "You have learned the Homing Tomahawk recipe." */, 8);
	func_102(329, 511709238 /* GXTEntry: "You have learned the Improved Throwing Knife recipe." */, 8);
	func_102(330, -571060537 /* GXTEntry: "You have learned the Improved Tomahawk recipe." */, 8);
	func_102(331, -373743187 /* GXTEntry: "You have learned the Poison Throwing Knife recipe." */, 8);
	func_102(332, 1580384419 /* GXTEntry: "You have learned the Split Point Ammo recipes." */, 8);
	func_102(333, -271256091 /* GXTEntry: "You have learned the Express Explosive Ammo recipes." */, 8);
	func_102(334, -744708298 /* GXTEntry: "You have learned the Incendiary Buckshot Ammo recipe." */, 8);
	func_102(335, 552259871 /* GXTEntry: "You have learned the Explosive Slug Ammo recipe." */, 8);
	func_102(336, 1378118496 /* GXTEntry: "This bait attracts a herbivore from the surrounding area. For best results, drop " +
    "the bait in remote areas, then crouch nearby and remain still." */, 8);
	func_102(337, 1048616093 /* GXTEntry: "This bait attracts a predator from the surrounding area. For best results, drop t" +
    "he bait in remote areas, then crouch nearby and remain still." */, 8);
	func_102(338, 1959042715 /* GXTEntry: "You\'ve discovered a Treasure Map. Open your Satchel to look at the map and solve " +
    "the clues to find the treasure location." */, 13);
	func_102(339, -750056018 /* GXTEntry: "You\'ve discovered a Treasure Map. Solve the clues to find the location on the map" +
    "." */, 12);
	func_102(340, -1207210341 /* GXTEntry: "You can find treasure maps that lead to new treasure chests. Keep an eye out for " +
    "treasure hunters in the wilderness, and treasure maps for sale." */, 12);
	func_102(341, 830154589 /* GXTEntry: "You have discovered the location of ~1~ out of ~2~ dinosaur bones." */, 12);
	func_102(342, 120752336 /* GXTEntry: "You have discovered the location of a dinosaur bone. You can mail the coordinates" +
    " to Deborah MacGuinness from any Post Office." */, 12);
	func_102(343, -311552075 /* GXTEntry: "You have discovered the location of a dinosaur bone. Someone has been spotted sea" +
    "rching for these in the Heartlands region." */, 12);
	func_102(344, -1797702717 /* GXTEntry: "You have discovered all locations of the dinosaur bones and can now mail the rema" +
    "ining coordinates to Deborah MacGuinness from any Post Office." */, 12);
	func_102(345, -1866285071, 12);
	func_102(346, 413422106 /* GXTEntry: "The Scientist has invited you back to her ranch in Cumberland Forest. Please chec" +
    "k the Pause Map in that region for more information." */, 12);
	func_102(347, -1561454178 /* GXTEntry: "The Legendary Fish Collector has invited you back to his shack in the Heartlands." +
    " Please check the Pause Map in that region for more information." */, 12);
	func_102(348, 689307199 /* GXTEntry: "You have discovered the plume from a little egret. Fine goods like these are of i" +
    "nterest to collectors who can be found in the nicer parts of town." */, 12);
	func_102(349, -1806282340 /* GXTEntry: "You have found the plume from a little egret. The Exotics Collector in Saint Deni" +
    "s has been looking for these." */, 12);
	func_102(350, 1053614726 /* GXTEntry: "You have discovered the plume from a reddish egret. Fine goods like these are of " +
    "interest to collectors who can be found in the nicer parts of town." */, 12);
	func_102(351, 888381014 /* GXTEntry: "You have found the plume from a reddish egret. The Exotics Collector in Saint Den" +
    "is has been looking for these." */, 12);
	func_102(352, 107432890 /* GXTEntry: "You have discovered the plume from a snowy egret. Fine goods like these are of in" +
    "terest to collectors who can be found in the nicer parts of town." */, 12);
	func_102(353, -1111734316 /* GXTEntry: "You have found the plume from a snowy egret. The Exotics Collector in Saint Denis" +
    " has been looking for these." */, 12);
	func_102(354, 1901901467 /* GXTEntry: "You have discovered the feather from a heron. Fine goods like these are of intere" +
    "st to collectors who can be found in the nicer parts of town." */, 12);
	func_102(355, 1075202719 /* GXTEntry: "You have found the feather from a heron. The Exotics Collector in Saint Denis has" +
    " been looking for these." */, 12);
	func_102(356, 1621225785 /* GXTEntry: "You have discovered the feather from a roseate spoonbill. Fine goods like these a" +
    "re of interest to collectors who can be found in the nicer parts of town." */, 12);
	func_102(357, -742698155 /* GXTEntry: "You have found the feather from a roseate spoonbill. The Exotics Collector in Sai" +
    "nt Denis has been looking for these." */, 12);
	func_102(358, -25905133 /* GXTEntry: "You have found everything on the list from the Exotics Collector. Visit him in Sa" +
    "int Denis." */, 12);
	func_102(359, -1664137180 /* GXTEntry: "You have discovered a gator egg. Fine goods like these are of interest to collect" +
    "ors who can be found in the nicer parts of town." */, 12);
	func_102(360, 1729562527 /* GXTEntry: "You have discovered a gator egg. The Exotics Collector in Saint Denis has been lo" +
    "oking for these." */, 12);
	func_102(361, 970343313 /* GXTEntry: "You have found a gator egg. The Exotics Collector in Saint Denis has been looking" +
    " for these." */, 12);
	func_102(362, -478447865 /* GXTEntry: "You have caught a legendary fish. A man living along the coast of Flat Iron Lake " +
    "has been looking for these." */, 12);
	func_102(363, -712121287 /* GXTEntry: "~s~You have caught a legendary fish. Take it to the Post Office ~BLIP_POST_OFFICE" +
    "~ to send to Jeremy Gill.~s~" */, 12);
	func_102(364, joaat("TF_LEGENDARY_FISH_MAILED_ONE"), 12);
	func_102(365, joaat("TF_LEGENDARY_FISH_MAILED_TEN"), 12);
	func_102(366, joaat("TF_LEGENDARY_FISH_MAILED_ALL"), 12);
	func_102(367, joaat("TF_DINO_BONE_MAILED_ONE"), 12);
	func_102(368, joaat("TF_DINO_BONE_MAILED_FIFTEEN"), 12);
	func_102(369, joaat("TF_DINO_BONE_MAILED_ALL"), 12);
	func_102(370, joaat("TF_ROCK_CARVING_MAILED_ONE"), 12);
	func_102(371, joaat("TF_ROCK_CARVING_MAILED_FIVE"), 12);
	func_102(372, joaat("TF_ROCK_CARVING_MAILED_ALL"), 12);
	func_102(373, joaat("TF_TAXIDERMY_MAILED_ONE"), 12);
	func_102(374, joaat("TF_TAXIDERMY_MAILED_TWO"), 12);
	func_102(375, joaat("TF_TAXIDERMY_MAILED_THREE"), 12);
	func_102(376, joaat("TF_TAXIDERMY_MAILED_FOUR"), 12);
	func_102(377, 1467621484 /* GXTEntry: "~s~All orders to obtain animal parts have been filled. Check back to any Post Off" +
    "ice ~BLIP_POST_OFFICE~ in the next couple of days.~s~" */, 12);
	func_102(378, 1935973298 /* GXTEntry: "~s~You have discovered a Legendary Fish location. Go to ~BLIP_RC~ to speak to the" +
    " fish collector.~s~" */, 12);
	func_102(379, joaat("TF_RARE_FISHING_SPOT_FOUND_NO_POLE"), 12);
	func_102(380, 754746483 /* GXTEntry: "You discovered the location of a Legendary Fish. Someone living near Flat Iron La" +
    "ke is known for their interest in fish." */, 12);
	func_102(381, 700674893 /* GXTEntry: "You have found an Acuna\'s Star orchid. The Exotics Collector in Saint Denis has b" +
    "een looking for these." */, 12);
	func_102(382, 622132109 /* GXTEntry: "You have found a Cigar orchid. The Exotics Collector in Saint Denis has been look" +
    "ing for these." */, 12);
	func_102(383, 1850845847 /* GXTEntry: "You have found a Clamshell orchid. The Exotics Collector in Saint Denis has been " +
    "looking for these." */, 12);
	func_102(384, 1898040470 /* GXTEntry: "You have found a Dragon\'s Mouth orchid. The Exotics Collector in Saint Denis has " +
    "been looking for these." */, 12);
	func_102(390, 597254123 /* GXTEntry: "You have found a Queen\'s orchid. The Exotics Collector in Saint Denis has been lo" +
    "oking for these." */, 12);
	func_102(386, 2088680135 /* GXTEntry: "You have found a Lady Slipper orchid. The Exotics Collector in Saint Denis has be" +
    "en looking for these." */, 12);
	func_102(387, -1419809142 /* GXTEntry: "You have found a Lady of the Night orchid. The Exotics Collector in Saint Denis h" +
    "as been looking for these." */, 12);
	func_102(385, 1902211699 /* GXTEntry: "You have found a Ghost orchid. The Exotics Collector in Saint Denis has been look" +
    "ing for these." */, 12);
	func_102(388, -1776248175 /* GXTEntry: "You have found a Moccasin Flower orchid. The Exotics Collector in Saint Denis has" +
    " been looking for these." */, 12);
	func_102(389, 615491862 /* GXTEntry: "You have found a Night Scented orchid. The Exotics Collector in Saint Denis has b" +
    "een looking for these." */, 12);
	func_102(391, -2061650310 /* GXTEntry: "You have found a Rat Tail orchid. The Exotics Collector in Saint Denis has been l" +
    "ooking for these." */, 12);
	func_102(392, 1598599287 /* GXTEntry: "You have found a Sparrow\'s Egg orchid. The Exotics Collector in Saint Denis has b" +
    "een looking for these." */, 12);
	func_102(393, -1384768670 /* GXTEntry: "You have found a Spider\'s orchid. The Exotics Collector in Saint Denis has been l" +
    "ooking for these." */, 12);
	func_102(394, -1263260445 /* GXTEntry: "You have discovered the Acuna\'s Star orchid. Fine goods like these are of interes" +
    "t to collectors who can be found in the nicer parts of town." */, 12);
	func_102(395, -681745701 /* GXTEntry: "You have discovered the Cigar orchid. Fine goods like these are of interest to co" +
    "llectors who can be found in the nicer parts of town." */, 12);
	func_102(396, 1673076308 /* GXTEntry: "You have discovered the Clamshell orchid. Fine goods like these are of interest t" +
    "o collectors who can be found in the nicer parts of town." */, 12);
	func_102(397, 1333248783 /* GXTEntry: "You have discovered the Dragon\'s Mouth orchid. Fine goods like these are of inter" +
    "est to collectors who can be found in the nicer parts of town." */, 12);
	func_102(403, 1971122678 /* GXTEntry: "You have discovered the Queen\'s orchid. Fine goods like these are of interest to " +
    "collectors who can be found in the nicer parts of town." */, 12);
	func_102(399, -1283711700 /* GXTEntry: "You have discovered the Lady Slipper orchid. Fine goods like these are of interes" +
    "t to collectors who can be found in the nicer parts of town." */, 12);
	func_102(400, -411588657 /* GXTEntry: "You have discovered the Lady of the Night orchid. Fine goods like these are of in" +
    "terest to collectors who can be found in the nicer parts of town." */, 12);
	func_102(398, 1640529993 /* GXTEntry: "You have discovered the Ghost orchid. Fine goods like these are of interest to co" +
    "llectors who can be found in the nicer parts of town." */, 12);
	func_102(401, 344731596 /* GXTEntry: "You have discovered the Moccasin Flower orchid. Fine goods like these are of inte" +
    "rest to collectors who can be found in the nicer parts of town." */, 12);
	func_102(402, 535128630 /* GXTEntry: "You have discovered the Night Scented orchid. Fine goods like these are of intere" +
    "st to collectors who can be found in the nicer parts of town." */, 12);
	func_102(404, 942375749 /* GXTEntry: "You have discovered the Rat Tail orchid. Fine goods like these are of interest to" +
    " collectors who can be found in the nicer parts of town." */, 12);
	func_102(405, 866158837 /* GXTEntry: "You have discovered the Sparrow\'s Egg orchid. Fine goods like these are of intere" +
    "st to collectors who can be found in the nicer parts of town." */, 12);
	func_102(406, -732669044 /* GXTEntry: "You have discovered the Spider\'s orchid. Fine goods like these are of interest to" +
    " collectors who can be found in the nicer parts of town." */, 12);
	func_102(407, -650519405 /* GXTEntry: "You have discovered the location of ~1~ out of ~2~ rock carvings." */, 12);
	func_102(408, 2129621514, 12);
	func_102(409, 1236700945 /* GXTEntry: "You have discovered the location of the first rock carving. You can mail the coor" +
    "dinates to Francis Sinclair from any Post Office." */, 12);
	func_102(410, 1370981391 /* GXTEntry: "You have discovered the location of the first rock carving. Someone has been spot" +
    "ted searching for these near Strawberry in Big Valley." */, 12);
	func_102(411, -1254074275 /* GXTEntry: "You have discovered all locations of the rock carvings and can now mail the remai" +
    "ning coordinates to Francis Sinclair from any Post Office." */, 12);
	func_102(412, -1188874649 /* GXTEntry: "Now that you have found all the rock carvings, Francis Sinclair has invited you t" +
    "o his homestead near Strawberry." */, 12);
	func_102(413, 1598712949 /* GXTEntry: "The Taxidermist has invited you to his house to see his completed work." */, 12);
	func_102(414, joaat("TF_LEGEND_OF_EAST_OUTFIT_UNLOCKED"), 12);
	func_102(415, -1354674126 /* GXTEntry: "The Legend of the East outfit bestows multiple benefits, including increasing the" +
    " range of Eagle Eye and decreasing your Health Core drain rate." */, 12);
	func_102(416, -1530394161 /* GXTEntry: "Go to any Gunsmith shop to buy the bandolier and gunbelt equipment so you can hol" +
    "d more ammunition. Completing challenges will allow you to upgrade them." */, 12);
	func_102(417, -989610486 /* GXTEntry: "You have acquired the perfect carcass of a Rabbit. The Taxidermist that lives nea" +
    "r Strawberry has been looking for these." */, 12);
	func_102(418, 742807149 /* GXTEntry: "You have acquired the perfect carcass of a Squirrel. The Taxidermist that lives n" +
    "ear Strawberry has been looking for these." */, 12);
	func_102(419, -2133920725 /* GXTEntry: "You have acquired the perfect carcass of a Cardinal. The Taxidermist that lives n" +
    "ear Strawberry has been looking for these." */, 12);
	func_102(420, 1553996704 /* GXTEntry: "You have acquired the perfect carcass of a Rat. The Taxidermist that lives near S" +
    "trawberry has been looking for these." */, 12);
	func_102(421, 1732430723 /* GXTEntry: "You have acquired the perfect carcass of a Woodpecker. The Taxidermist that lives" +
    " near Strawberry has been looking for these." */, 12);
	func_102(422, 1473826052 /* GXTEntry: "You have acquired the perfect carcass of a Chipmunk. The Taxidermist that lives n" +
    "ear Strawberry has been looking for these." */, 12);
	func_102(423, -34067420 /* GXTEntry: "You have acquired the perfect carcass of an Opossum. The Taxidermist that lives n" +
    "ear Strawberry has been looking for these." */, 12);
	func_102(424, -29199894 /* GXTEntry: "You have acquired the perfect carcass of an Oriole. The Taxidermist that lives ne" +
    "ar Strawberry has been looking for these." */, 12);
	func_102(425, 1585726424 /* GXTEntry: "You have acquired the perfect carcass of a Robin. The Taxidermist that lives near" +
    " Strawberry has been looking for these." */, 12);
	func_102(426, -1379597176 /* GXTEntry: "You have acquired the perfect carcass of a Songbird. The Taxidermist that lives n" +
    "ear Strawberry has been looking for these." */, 12);
	func_102(427, 513661771 /* GXTEntry: "You have acquired the perfect carcass of a Sparrow. The Taxidermist that lives ne" +
    "ar Strawberry has been looking for these." */, 12);
	func_102(428, 1175101656 /* GXTEntry: "You have acquired the perfect carcass of a Toad. The Taxidermist that lives near " +
    "Strawberry has been looking for these." */, 12);
	func_102(429, 1747774401 /* GXTEntry: "You have acquired the perfect carcass of a Skunk. The Taxidermist that lives near" +
    " Strawberry has been looking for these." */, 12);
	func_102(430, -1848239712 /* GXTEntry: "You have acquired the perfect carcass of a Bullfrog. The Taxidermist that lives n" +
    "ear Strawberry has been looking for these." */, 12);
	func_102(431, 1761032615 /* GXTEntry: "You have acquired the perfect carcass of a Cedar Waxwing. The Taxidermist that li" +
    "ves near Strawberry has been looking for these." */, 12);
	func_102(432, -180697003 /* GXTEntry: "You have acquired the perfect carcass of a Bat. The Taxidermist that lives near S" +
    "trawberry has been looking for these." */, 12);
	func_102(433, 609648029 /* GXTEntry: "You have acquired the perfect carcass of a Blue Jay. The Taxidermist that lives n" +
    "ear Strawberry has been looking for these." */, 12);
	func_102(434, -1652586024 /* GXTEntry: "You have acquired the perfect carcass of a Crow. The Taxidermist that lives near " +
    "Strawberry has been looking for these." */, 12);
	func_102(435, -1248948810 /* GXTEntry: "You have acquired the perfect carcass of a Beaver. The Taxidermist that lives nea" +
    "r Strawberry has been looking for these." */, 12);
	func_102(436, 1387759490 /* GXTEntry: "You have acquired all of the animal pelts that the Taxidermist needs for the orde" +
    "r. These items can be mailed directly from any Post Office." */, 12);
	func_102(437, 1025931364 /* GXTEntry: "Mail the requested animals at a Post Office. To get small animal carcasses, you\'l" +
    "l need to use a Small Game arrow or the Varmint Rifle." */, 12);
	func_102(438, 564871348 /* GXTEntry: "You\'ve received the last order to obtain animal parts." */, 12);
	func_102(439, -1281191843 /* GXTEntry: "You\'ve received another order to obtain animal parts." */, 12);
	func_102(440, 282800835 /* GXTEntry: "The Varmint Rifle can be purchased at any Gunsmith. Use Crafting Tools or set up " +
    "a camp to make Small Game Arrows." */, 12);
	func_102(441, -652778061 /* GXTEntry: "You can track your Challenge progress by tapping ~INPUT_PLAYER_MENU~ to open the " +
    "Log." */, 12);
	func_102(442, -1892417555 /* GXTEntry: "You can track your Challenge progress by tapping ~INPUT_PLAYER_MENU~ to open the " +
    "Log." */, 12);
	func_102(443, 212443252 /* GXTEntry: "You have unlocked new Challenges. Check your Log for more information." */, 13);
	func_102(444, 1764583115 /* GXTEntry: "You have unlocked the Bandit Challenge. Check your Log for more information." */, 13);
	func_102(445, -669584681 /* GXTEntry: "You have unlocked the Explorer Challenge. Check your Log for more information." */, 13);
	func_102(446, 1534464445 /* GXTEntry: "You have unlocked the Gambler Challenge. Check your Log for more information." */, 13);
	func_102(447, -2973651 /* GXTEntry: "You have unlocked the Herbalist Challenge. Check your Log for more information." */, 13);
	func_102(448, 9538750 /* GXTEntry: "You have unlocked the Horseman Challenge. Check your Log for more information." */, 13);
	func_102(449, 1035665367 /* GXTEntry: "You have unlocked the Master Hunter Challenge. Check your Log for more informatio" +
    "n." */, 13);
	func_102(450, -1038247998 /* GXTEntry: "You have unlocked the Sharpshooter Challenge. Check your Log for more information" +
    "." */, 13);
	func_102(451, 687504463 /* GXTEntry: "You have unlocked the Survivalist Challenge. Check your Log for more information." +
    "" */, 13);
	func_102(452, -1139541693 /* GXTEntry: "You have unlocked the Weapons Expert Challenge. Check your Log for more informati" +
    "on." */, 13);
	func_102(453, 1263252909 /* GXTEntry: "You have unlocked new reinforced equipment at the Trapper. Visit Pearson for info" +
    "rmation about the Trapper." */, 12);
	func_102(454, 489659542 /* GXTEntry: "You have unlocked new reinforced equipment at the Trapper." */, 12);
	func_102(455, 475429548 /* GXTEntry: "By obtaining this full set of reinforced equipment, you have permanently increase" +
    "d your Health bar by 1 tank." */, 8);
	func_102(456, 97482151 /* GXTEntry: "By obtaining this full set of reinforced equipment, you have permanently increase" +
    "d your Stamina bar by 1 tank." */, 8);
	func_102(457, -1963976206 /* GXTEntry: "By obtaining this full set of reinforced equipment, you have permanently increase" +
    "d your Dead Eye bar by 1 tank." */, 8);
	func_102(458, -909262152 /* GXTEntry: "~s~You have been asked by the Foreman at Castor\'s Ridge to provide wood. You will" +
    " be rewarded if you deliver this wagon to the worksite.~s~" */, 12);
	func_102(459, 1000235946 /* GXTEntry: "~s~This wagon has lost too much lumber to return to Castor\'s Ridge.~s~" */, 12);
	func_102(460, 1715283973 /* GXTEntry: "~1~ Progress Menu entry added. Check the Dutch\'s Gang section for more informatio" +
    "n." */, 1032);
	func_102(461, 671494356 /* GXTEntry: "~1~ Progress Menu entry updated. Check the Dutch\'s Gang section for more informat" +
    "ion." */, 1032);
	func_102(462, 615838792 /* GXTEntry: "You have skinned a new animal type: ~1~." */, 1032);
	func_102(463, -408469321 /* GXTEntry: "You have plucked a new animal type: ~1~." */, 1032);
	func_102(464, 1970236789 /* GXTEntry: "When skinning an animal, you also take meat from the carcass. Set up your camp to" +
    " cook this meat." */, 65536);
	func_102(465, 821861942 /* GXTEntry: "Cooking a carried animal will only reward you with meat." */, 4);
	func_102(466, 2018900854 /* GXTEntry: "You have killed a Legendary Animal. Sell the pelt to the Trapper ~BLIP_SHOP_ANIMA" +
    "L_TRAPPER~ who can then craft it in to a unique outfit." */, 5);
	func_102(467, -660473096 /* GXTEntry: "You abandoned your Legendary Animal. Visit the nearest Fence and Trapper to acces" +
    "s the quality parts and pelt for crafting." */, 5);
	func_102(468, 1368298322 /* GXTEntry: "To put on the bandana, press and hold ~INPUT_OPEN_WHEEL_MENU~, then press ~INPUT_" +
    "SELECT_NEXT_WHEEL~. Select the bandana item with ~INPUTGROUP_RADIAL_MENU_NAV~ to" +
    " toggle the bandana disguise." */, 4);
	func_102(470, 1222713470 /* GXTEntry: "To take off the bandana, press and hold ~INPUT_OPEN_WHEEL_MENU~, then press ~INPU" +
    "T_SELECT_NEXT_WHEEL~. Select the bandana item with ~INPUTGROUP_RADIAL_MENU_NAV~ " +
    "to toggle the bandana disguise." */, 4);
	func_102(471, -292534915 /* GXTEntry: "Take the property sales document to the location owner (marked with ~BLIP_PROC_HO" +
    "ME_KEY~) to complete the property purchase." */, 0);
	func_102(472, 358418309 /* GXTEntry: "To equip your Binoculars, open the Item Wheel and page through the items in the K" +
    "it slot by pressing ~INPUT_RADIAL_MENU_SLOT_NAV_PREV~ or ~INPUT_RADIAL_MENU_SLOT" +
    "_NAV_NEXT~." */, 4);
	func_102(473, -1174847606 /* GXTEntry: "Hold ~INPUT_AIM~ to aim the binoculars in the direction you wish to look." */, 4);
	func_102(474, 312859304 /* GXTEntry: "Use ~INPUT_SNIPER_ZOOM~ to zoom in and out." */, 5);
	func_102(475, 1960454965 /* GXTEntry: "Press ~INPUT_CONTEXT_Y~ to select a location to fast travel to." */, 4);
	func_102(476, 1999760871 /* GXTEntry: "The resources needed to travel across the region are presented as a monetary cost" +
    ". The longer the distance, the higher the price." */, 4);
	func_102(478, -1788636233 /* GXTEntry: "Hold ~INPUT_SPRINT~ to follow your companions." */, 4);
	func_102(479, 1835807439 /* GXTEntry: "To use placed dynamite, hold ~INPUT_AIM~ to aim at the intended location. When cl" +
    "ose, press ~INPUT_ATTACK~ to place the dynamite." */, 4);
	func_102(480, 1785312833 /* GXTEntry: "You are now carrying your purchased weapon(s). Your previous firearms have been s" +
    "towed on your horse." */, 68);
	func_102(481, 1760169707 /* GXTEntry: "When aiming a weapon with a scope attached, use ~INPUT_TOGGLE_WEAPON_SCOPE~ to to" +
    "ggle scope view." */, 5);
	func_102(482, -1159772199 /* GXTEntry: "You found a Cigarette Card. Some hobbyists consider these cards to be valuable co" +
    "llector\'s items. Keep an eye out for more." */, 128);
	func_102(483, 1601895762 /* GXTEntry: "You found a Cigarette Card. Once all cards in a set have been located, you can ma" +
    "il the set to Phineas T. Ramsbottom from any Post Office." */, 128);
	func_102(484, -1684535486 /* GXTEntry: "You\'ve picked up an opened item. Opened items provide half the benefits of new it" +
    "ems." */, 4);
	func_102(485, 1326949609 /* GXTEntry: "You\'ve obtained a Premium Cigarette Pack. Each Premium Cigarette Pack contains a " +
    "collectable Cigarette Card within." */, 4);
	func_102(487, -904526984 /* GXTEntry: "You\'ve picked up Coffee. Brew it at your camp to restore your Dead Eye Core and S" +
    "tamina Core." */, 4);
	func_102(486, 2104273923 /* GXTEntry: "You have picked up Gun Oil which can be used to improve the condition of your wea" +
    "pons. Select a gun in the Weapon Wheel, then press ~INPUT_QUICK_SELECT_INSPECT~ " +
    "to maintain it." */, 4);
	func_102(488, -1931970597 /* GXTEntry: "You\'ve picked up Hair Tonic. Use it to accelerate the growth of your hair." */, 4);
	func_102(489, -1829471519 /* GXTEntry: "Your beard won\'t grow any longer unless you use Hair Tonic. Each use of Hair Toni" +
    "c will allow your beard to grow a little bit longer." */, 4);
	func_102(490, 1818962879 /* GXTEntry: "Hair Tonic has worn off." */, 4);
	func_102(491, 1367171656 /* GXTEntry: "You\'ve picked up Pomade. Use it to grease your hair." */, 4);
	func_102(492, 53603274 /* GXTEntry: "Pomade has worn off." */, 4);
	func_102(493, -1110615762 /* GXTEntry: "Your beard is getting long. You can use the shaving kit beside your tent or visit" +
    " a Barber Shop to maintain your facial hair." */, 4);
	func_102(494, -768196698 /* GXTEntry: "You have just consumed a meal of seasoned meat. This will greatly delay the onset" +
    " of hunger." */, 4);
	func_102(495, 1092157679, 4);
	func_102(496, 605594785 /* GXTEntry: "You\'ve picked up a Coffee Percolator. Use it at your camp to brew Coffee." */, 4);
	func_102(497, 107216183 /* GXTEntry: "You can only use this item while camped." */, 4);
	func_102(498, 44718251 /* GXTEntry: "You\'ve picked up a Valuable. You can use Valuables in crafting, sell them to a Fe" +
    "nce or donate them to the camp funds." */, 4);
	func_102(499, 1178446450 /* GXTEntry: "You can rob any shop by aiming your gun at the clerk." */, 4);
	func_102(500, -1482023523, 4);
	func_102(528, -938630534 /* GXTEntry: "You will receive a discount at this shop because of your high honor." */, 132);
	func_102(529, -1492841353 /* GXTEntry: "You can now sell stolen horses to the auction manager at Valentine while not busy" +
    " with other activities." */, 4);
	func_102(530, -888771407 /* GXTEntry: "You can sell this horse at the Valentine auction yard." */, 4);
	func_102(531, -726690250 /* GXTEntry: "A companion activity is available in camp. Talk to companions marked on your map " +
    "to join in." */, 4);
	func_102(532, 494770882 /* GXTEntry: "Your bonus Bank Robbery mission is available at ~BLIP_ROBBERY_BANK~." */, 4);
	func_102(533, 423259730 /* GXTEntry: "You are unable to ride your horse in camp." */, 5);
	func_102(534, 382417452 /* GXTEntry: "You are unable to bring wagons into camp. They will be available again when you l" +
    "eave." */, 5);
	func_102(535, -960396333 /* GXTEntry: "You are unable to bring dead humans into camp." */, 5);
	func_102(536, -1331259017 /* GXTEntry: "You are unable to bring prisoners into camp." */, 5);
	func_102(537, -45968461 /* GXTEntry: "Your gang\'s camp is shown by ~BLIP_CAMP~ on the map." */, 4);
	func_102(538, 1314256397 /* GXTEntry: "Ammo ~BLIP_SUPPLIES_AMMO~, Provisions ~BLIP_SUPPLIES_FOOD~ and Health supplies ~B" +
    "LIP_SUPPLIES_HEALTH~ can be found around camp. The current stock levels are show" +
    "n when near the Tithing Box." */, 4);
	func_102(539, -316486779 /* GXTEntry: "The gang are celebrating the safe return of Sean and will be unavailable for othe" +
    "r activities for a while." */, 5);
	func_102(540, 819078787 /* GXTEntry: "The gang are celebrating the safe return of Jack and will be unavailable for othe" +
    "r activities for a while." */, 5);
	func_102(550, -281500653 /* GXTEntry: "Each day, Pearson will make stew, which you can eat from the pot at ~BLIP_GRUB~" */, 4);
	func_102(551, -59149683 /* GXTEntry: "The stew is currently being prepared. Check again after noon." */, 4);
	func_102(552, -1360245176 /* GXTEntry: "You\'ve eaten stew recently, try again later." */, 4);
	func_102(553, -583640217 /* GXTEntry: "When you grab a bowl of stew you\'ll need to wait a few days before being able to " +
    "grab another." */, 4);
	func_102(557, 1151299477 /* GXTEntry: "If you haven\'t taken a bath for a while, Miss Grimshaw will insist that you wash " +
    "yourself." */, 4);
	func_102(541, -1449538839 /* GXTEntry: "Your recent actions have attracted the attention of the law. Leave the area befor" +
    "e they can find you." */, 580);
	func_102(542, 970874492 /* GXTEntry: "Your recent actions have attracted the attention of the Fussar\'s guards. Leave th" +
    "e area before they can find you." */, 580);
	func_102(543, -1902016335, 580);
	func_102(549, 876207536 /* GXTEntry: "Any bodies found will be reported and lawmen dispatched to investigate. Hide or d" +
    "ispose of bodies to avoid unwanted attention." */, 68);
	func_102(554, -458935376 /* GXTEntry: "Buy a district camp map to discover unknown camp sites." */, 4);
	func_102(558, -1454291508 /* GXTEntry: "You will need to drop what you\'re carrying in order to perform certain actions." */, 0);
	func_102(559, -189560664 /* GXTEntry: "Herd animals by moving behind the group to encourage them in the desired directio" +
    "n." */, 5);
	func_102(560, -629386182 /* GXTEntry: "Shout at the herd by holding ~INPUT_INTERACT_LOCKON~ and pressing ~INPUT_INTERACT" +
    "_LOCKON_NEG~ to make them move faster." */, 5);
	func_102(561, 783296342 /* GXTEntry: "Shout at the herd by pressing ~INPUT_INTERACT_LOCKON~, and then ~INPUT_INTERACT_L" +
    "OCKON_NEG~ to make them move faster." */, 5);
	func_102(562, -866797587 /* GXTEntry: "While aiming a gun, point it in the air by pressing ~INPUT_AIM_IN_AIR~ and shoot " +
    "to make the herd move faster." */, 5);
	func_102(563, -1173417120 /* GXTEntry: "Try to maintain a constant speed behind the animals. Some animals are naturally s" +
    "lower and you should match their speed to avoid trampling them." */, 5);
	func_102(564, -1937311304 /* GXTEntry: "An animal may break away from the group or be left behind. They will turn into a " +
    "~o~straggler~s~ and no longer move with the rest of the group." */, 5);
	func_102(565, 1917109556 /* GXTEntry: "To round up stragglers, you can shout at or ride close to them to encourage them " +
    "back towards the group." */, 5);
	func_102(567, -758436435 /* GXTEntry: "Rhodes and the surrounding area are now in lockdown. Remaining lawmen in the area" +
    " will be looking for you." */, 5);
	func_102(568, 1771247710 /* GXTEntry: "You have acquired a Gold Ingot. It can be sold at any fence for a large profit." */, 5);
	func_102(569, -1489191516 /* GXTEntry: "To change the camera distance and perspective press ~INPUT_NEXT_CAMERA~." */, 5);
	func_102(566, -1644813909 /* GXTEntry: "The Badger Claw Trinket will prevent Dead Eye from draining for up to ten seconds" +
    " or until you shoot." */, 4);
	func_102(570, -1768696225 /* GXTEntry: "Multiple missions are available in camp. These are shown as ~1b~ on the radar." */, 1028);
	func_102(571, -647510190 /* GXTEntry: "Press ~INPUT_NEXT_CAMERA~ to toggle between first and third person views." */, 4);
	func_102(572, 1354876753 /* GXTEntry: "You gained honor as you captured the bounty and brought him to jail." */, 1028);
	func_102(573, -956226118 /* GXTEntry: "Sometimes you will get a choice to help a companion or not. Your decision will af" +
    "fect your Honor Level." */, 1028);
	func_102(574, -1980846656 /* GXTEntry: "You chose not to help Mary Linton. Your Honor Level will increase or decrease dep" +
    "ending on whether you choose to help companions or not." */, 1028);
	func_102(575, -27462829 /* GXTEntry: "Your honor increased as you returned Jamie to Mary." */, 1028);
	func_102(576, -1596380617, 1028);
	func_102(577, -1669705514 /* GXTEntry: "Your honor increased as you decided to spare Anthony Foreman." */, 1028);
	func_102(578, -863406233 /* GXTEntry: "Your honor decreased as you decided to kill Anthony Foreman." */, 1028);
	func_102(579, -2000372153 /* GXTEntry: "An optional mission is now available ~1b~. Completing them can be a way to gain h" +
    "onor." */, 1092);
	func_102(580, -1677384704 /* GXTEntry: "You have applied Cover Scent to yourself. This blocks your scent for a limited pe" +
    "riod, allowing you to approach animals without them smelling you." */, 65536);
	func_102(581, 1403704658 /* GXTEntry: "The effects of your Cover Scent have worn off. Stay down wind of animals you are " +
    "hunting so they have less chance of detecting you via smell." */, 65536);
	func_102(582, 2082745666 /* GXTEntry: "You cannot stow all looted items as your Satchel is full. Pearson can craft Satch" +
    "els with increased capacity." */, 0);
	func_102(584, 2082745666 /* GXTEntry: "You cannot stow all looted items as your Satchel is full. Pearson can craft Satch" +
    "els with increased capacity." */, 65536);
	func_102(583, 1780796148 /* GXTEntry: "You cannot harvest all of this animal\'s parts, as you have no space to stow them." +
    " Open your Satchel and make space by pressing ~INPUT_GAME_MENU_OPTION~ to discar" +
    "d unwanted items." */, 0);
	func_102(585, -1459293189 /* GXTEntry: "Your Dead Eye is too low. Open the Item Wheel by holding ~INPUT_OPEN_WHEEL_MENU~ " +
    "then pressing ~INPUT_SELECT_NEXT_WHEEL~ and consume a Dead Eye tonic to refill i" +
    "t." */, 98821);
	func_102(586, -725743520 /* GXTEntry: "Your Dead Eye ability has improved. You can now manually tag targets in Dead Eye " +
    "with ~INPUT_SPECIAL_ABILITY_ACTION~." */, 4);
	func_102(587, -1022696190 /* GXTEntry: "Your Dead Eye ability has improved. You will now remain in Dead Eye when you fire" +
    " your weapon if you have not tagged a target." */, 4);
	func_102(588, 198899353 /* GXTEntry: "Your Dead Eye ability has improved. Fatal areas will now be highlighted while you" +
    " are in Dead Eye." */, 4);
	func_102(589, -106868186 /* GXTEntry: "Your Dead Eye ability has improved. Critical areas will now also be highlighted w" +
    "hile you are in Dead Eye." */, 4);
	func_102(590, -573686971 /* GXTEntry: "You can now manually tag targets in Dead Eye with ~INPUT_SPECIAL_ABILITY_ACTION~." +
    "" */, 4);
	func_102(591, -1626499362 /* GXTEntry: "You will now remain in Dead Eye when you fire your weapon if you do not have a ta" +
    "rget tagged." */, 4);
	func_102(592, 1571811637 /* GXTEntry: "Fatal areas will now be highlighted while you are in Dead Eye." */, 4);
	func_102(593, 1279507001 /* GXTEntry: "Critical areas will now also be highlighted while you are in Dead Eye." */, 4);
	func_102(594, -1882496981 /* GXTEntry: "Fortify Bar" */, 492544);
	func_102(595, 2010127730 /* GXTEntry: "Fortify Core" */, 492544);
	func_102(596, -1707737945 /* GXTEntry: "Mission blips covering a large area have to be searched to find your companion\'s " +
    "location." */, 4);
	func_102(600, 1191776810 /* GXTEntry: "You can view, manage and share photos by accessing the Social area from the Pause" +
    " menu or by selecting View Photos when the camera is equipped." */, 8192);
	func_102(601, joaat("TF_KIT_CAMP"), 4);
	func_102(597, joaat("TF_ALT_AMMO"), 98308);
	func_102(598, -63569106 /* GXTEntry: "When using the Compass you can press ~INPUT_SELECT_RADAR_MODE~ to briefly display" +
    " the full Radar again." */, 1);
	func_102(599, -38169362 /* GXTEntry: "With the Radar turned off you can press ~INPUT_SELECT_RADAR_MODE~ to briefly disp" +
    "lay it again." */, 1);
	func_102(602, 86033522 /* GXTEntry: "Plants and Herbs that you can pick will be highlighted in Eagle Eye. You can use " +
    "herbs as ingredients in crafting recipes." */, 98308);
	func_102(603, -958136213 /* GXTEntry: "You can temporarily store one unbonded horse by hitching it in camp." */, 4);
	func_102(604, -1800046437 /* GXTEntry: "An unbonded horse is already hitched at camp. Hitching this new horse will cause " +
    "the previous horse to be lost." */, 4);
	func_102(605, -1282453027 /* GXTEntry: "You can craft items at the crafting fire near the edge of camp." */, 4);
	func_102(606, 486059546 /* GXTEntry: "You can craft items at the main camp fire." */, 4);
	func_102(608, 668424118 /* GXTEntry: "Missions and activities can lock and become unavailable when you are wanted by th" +
    "e law or bounty hunters." */, 4);
	func_102(607, -662684443 /* GXTEntry: "Study and track animals through your Binoculars by holding ~INPUT_INTERACT_LOCKON" +
    "_STUDY_BINOCULARS~ while looking at them." */, 4);
	func_102(611, joaat("TF_CAMP_HITCH_MANAGE_HORSES_NO_HORSES"), 4);
	func_102(612, joaat("TF_CAMP_HITCH_MANAGE_HORSES_HORSE_DEAD"), 4);
	func_102(613, -1474564683 /* GXTEntry: "You cannot leave animal corpses to rot in camp." */, 4);
	func_102(614, 484684935 /* GXTEntry: "You cannot leave animal corpses to rot at the ranch." */, 4);
	func_102(615, 128830014 /* GXTEntry: "Items dropped in camp will always be left in a convenient location. Hunted animal" +
    " carcasses and parts can be handed in at Pearson\'s butcher counter." */, 5);
	func_102(616, 183722917 /* GXTEntry: "Items dropped in camp will always be left in a convenient location." */, 5);
	func_102(617, 948386188 /* GXTEntry: "Items dropped on the ranch will always be left in a convenient location." */, 5);
	func_102(609, joaat("TF_AIM_AMBUSH"), 4);
	func_102(610, -1920992599 /* GXTEntry: "When being robbed, focus on the attacker and press ~INPUT_SURRENDER~ to surrender" +
    "." */, 32772);
	func_102(618, 2821915 /* GXTEntry: "Your Familiarity with a weapon has increased. As you use different weapons certai" +
    "n stats will improve. View your current Familiarity level with discovered weapon" +
    "s in the Compendium." */, 4);
	func_102(620, 1943562780 /* GXTEntry: "New horses are available to purchase in the Valentine, Scarlett Meadows and Straw" +
    "berry stables." */, 5);
	func_102(619, -1886596731 /* GXTEntry: "Each Stable ~BLIP_SHOP_HORSE~ offers a different selection of horse breeds for pu" +
    "rchase." */, 5);
	func_103(620, 619);
	func_102(621, -2017488406 /* GXTEntry: "New horses are available to purchase in the Scarlett Meadows and Strawberry stabl" +
    "es." */, 4);
	func_102(622, -1721289415 /* GXTEntry: "New horses are available to purchase in the Scarlett Meadows and St. Denis stable" +
    "s." */, 4);
	func_102(623, -169021893 /* GXTEntry: "New horses are available to purchase in the Van Horn stables." */, 4);
	func_102(624, -466007340 /* GXTEntry: "New horses are available to purchase in the Blackwater and Tumbleweed stables." */, 4);
	func_102(625, 669666786 /* GXTEntry: "Continue playing to unlock your bonus content." */, 5);
	func_102(626, -1001421270 /* GXTEntry: "Continue playing to unlock your bonus content." */, 5);
	func_102(627, 1127637781 /* GXTEntry: "Continue playing to unlock your bonus content." */, 5);
	func_102(628, 739719858 /* GXTEntry: "Continue playing to unlock your bonus content." */, 5);
	func_102(629, -1151895259 /* GXTEntry: "When you do work for the gang, half the take is set aside for gang savings. The o" +
    "ther half is split between the gang members who worked on the job." */, 4);
	__LIB_2__::func_459();
	__LIB_10__::func_734();
}

void func_11()
{
	__LIB_18__::func_478(0);
}

void func_14()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_40.f_9536[iVar0] = -1;
		iVar0++;
	}
}

void func_15()
{
	int iVar0;
	var uVar1;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 130)
	{
		if ((__LIB_1__::func_972(iVar0) == 4 || __LIB_1__::func_972(iVar0) == 3) || __LIB_1__::func_972(iVar0) == 6)
		{
			Global_1888801[iVar0 /*35*/] = __LIB_1__::func_293(iVar0, 0, 5, __LIB_9__::func_28(iVar0));
			if (__LIB_1__::func_972(iVar0) == 3)
			{
				uVar1 = func_112(__LIB_1__::func_293(iVar0, 0, 5, 0));
			}
		}
		iVar0++;
	}
}

void func_29(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	Global_1879534.f_7301 = 1;
	Global_1879534.f_7301.f_1 = 0;
	__LIB_17__::func_404(iParam2);
	func_115(bParam0, iParam1, 1);
	__LIB_11__::func_942();
	func_117();
	iVar0 = 0;
	if (iParam1 != -1)
	{
		iVar0 = 0;
	}
	MISC::SET_BIT(&(Global_1879534.f_7301.f_2[iVar0 /*4*/]), 1);
	NETWORK::_0xA95470DA137587F5(0);
	NETWORK::_0xBB697756309D77EE(0);
}

void func_31(bool bParam0)
{
	Global_1934765.f_20 = 0;
	Global_1934765 = 0;
	Global_1934765.f_287 = 0;
	while (!func_118(1, bParam0))
	{
	}
	__LIB_10__::func_735();
	Global_1934765 = 0;
}

int func_34(bool bParam0)
{
	if (!Global_40)
	{
		return 0;
	}
	if (!__LIB_0__::func_28())
	{
		return 0;
	}
	if (__LIB_0__::func_58())
	{
		return 0;
	}
	if (__LIB_0__::func_13(2))
	{
		return 0;
	}
	if (bParam0)
	{
		return 0;
	}
	if (!__LIB_1__::func_441())
	{
		return 0;
	}
	if (__LIB_1__::func_195())
	{
		return 0;
	}
	if (_NAMESPACE77::_0xC5C395C60B542A3C(1))
	{
		return 0;
	}
	if (Global_1572864.f_21 != 0)
	{
		return 0;
	}
	if (Global_40.f_9 == 6 || Global_40.f_9 == 3)
	{
		return 0;
	}
	return 1;
}

void func_36()
{
	int iVar0;
	if (Global_1347400.f_76)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	WEAPON::_0xC395355843BE134B(Global_35);
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, false, 0, true))
	{
		if (((iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS")) || iVar0 == joaat("WEAPON_KIT_CAMERA")) || iVar0 == joaat("WEAPON_KIT_DETECTOR"))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
		}
	}
}

int func_40(int iParam0, int iParam1)
{
	var uVar0;
	return func_124(&uVar0, iParam0, iParam1);
}

void func_45(int iParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	if (!__LIB_0__::func_20(iParam0))
	{
		*uParam1 = { Global_36 };
		if (!Global_1935630.f_12)
		{
			*uParam2 = ENTITY::GET_ENTITY_HEADING(Global_35);
		}
		return;
	}
	switch (iParam0)
	{
		case 40:
			*uParam1 = { -600.8126f, 2679.079f, 323.538f };
			*uParam2 = 279.6308f;
			return;
		case 56:
			*uParam1 = { 486f, 2215.8f, 246.9f };
			*uParam2 = 84.159f;
			return;
		case 78:
			*uParam1 = { 2928.327f, 1356.631f, 43.5035f };
			*uParam2 = 261.1208f;
			return;
		case 82:
			*uParam1 = { 2560.459f, 777.5193f, 82.2433f };
			*uParam2 = 291.2065f;
			return;
		case 38:
			*uParam1 = { -800.244f, -1269.308f, 42.5502f };
			*uParam2 = 174.6141f;
			return;
		case 37:
			*uParam1 = { -1692.456f, -1425.278f, 88.5471f };
			*uParam2 = 44.6246f;
			return;
		case 95:
			*uParam1 = { 1698.547f, -1393.736f, 44.893f };
			*uParam2 = 289.3106f;
			return;
		case 105:
			*uParam1 = { 1274.799f, -1279.981f, 74.8681f };
			*uParam2 = 245.3242f;
			return;
		case 93:
			*uParam1 = { 1015.804f, -1316.683f, 55.1469f };
			*uParam2 = 181.2442f;
			return;
		case 5:
			*uParam1 = { 2557.408f, -1202.299f, 53.0907f };
			*uParam2 = 261.1247f;
			return;
		case 8:
			*uParam1 = { 3289.2f, -1275.795f, 44.6127f };
			*uParam2 = 163f;
			return;
		case 35:
			*uParam1 = { 353.8f, 1473f, 179.7f };
			*uParam2 = 46.6903f;
			return;
		case 92:
			*uParam1 = { 2983.202f, 441.7647f, 51.6148f };
			*uParam2 = 27.5833f;
			return;
		case 76:
			*uParam1 = { -250.1652f, 789.0698f, 118.9147f };
			*uParam2 = 88.1256f;
			return;
		case 65:
			*uParam1 = { 482.1f, 660.2f, 117.4f };
			*uParam2 = 144.2493f;
			return;
		case 68:
			*uParam1 = { -805.894f, 305.9081f, 94.4141f };
			*uParam2 = 28.5394f;
			return;
		case 69:
			*uParam1 = { 1429.8f, 319.9f, 88.6f };
			*uParam2 = 280.9084f;
			return;
		case 75:
			*uParam1 = { -365.4675f, -333.9249f, 87.8648f };
			*uParam2 = 239.3198f;
			return;
		case 26:
			*uParam1 = { -1780.331f, -426.5923f, 154.897f };
			*uParam2 = 74.77f;
			return;
		case 22:
			*uParam1 = { -2557.081f, 491.937f, 142.7487f };
			*uParam2 = 177.5235f;
			return;
		case 110:
			*uParam1 = { -1966.645f, -1574.229f, 115.4183f };
			*uParam2 = 177.3636f;
			return;
		case 32:
			*uParam1 = { 3343.871f, -629.7566f, 43.894f };
			*uParam2 = 197.4755f;
			return;
		case 57:
			*uParam1 = { 1471f, -7120f, 77f };
			*uParam2 = 331.1575f;
			return;
		case 120:
			*uParam1 = { -3716.447f, -2622.405f, -14.9813f };
			*uParam2 = 312.5245f;
			return;
		case 115:
			*uParam1 = { -5607f, -3059.301f, 1.8f };
			*uParam2 = -44.3f;
			return;
		case 117:
			*uParam1 = { -5239.2f, -3472.7f, -21.7f };
			*uParam2 = 90f;
			return;
		case 43:
			*uParam1 = { -1320.65f, 2424.004f, 307.8811f };
			*uParam2 = 69.8643f;
			return;
		case 71:
			*uParam1 = { -118.6397f, -32.2501f, 94.7409f };
			*uParam2 = 91.0078f;
			return;
		case 58:
			*uParam1 = { 1418.897f, -7329.16f, 80.562f };
			*uParam2 = 26.5179f;
			return;
		case 98:
			*uParam1 = { 689.6768f, -1222.049f, 43.7435f };
			*uParam2 = 167.6425f;
			return;
		case 6:
			*uParam1 = { 2048.825f, -852.7946f, 41.6127f };
			*uParam2 = 89.9021f;
			return;
		case 18:
			*uParam1 = { -1715.61f, -84.36f, 181.88f };
			*uParam2 = 0f;
			return;
		case 19:
			*uParam1 = { -1515.809f, -477.6617f, 142.8707f };
			*uParam2 = 108.7463f;
			return;
		case 23:
			*uParam1 = { -1066.092f, -584.9856f, 80.8338f };
			*uParam2 = 170.7164f;
			return;
		case 24:
			*uParam1 = { -2455.33f, 831.4f, 140.4909f };
			*uParam2 = 30.7991f;
			return;
		case 27:
			*uParam1 = { -1929.773f, 291.1429f, 166.0626f };
			*uParam2 = 1.2131f;
			return;
		case 49:
			*uParam1 = { -1838.605f, 1312.883f, 220.5665f };
			*uParam2 = 54.1507f;
			return;
		case 30:
			*uParam1 = { 2488.379f, -438.0566f, 40.7284f };
			*uParam2 = 3.9426f;
			return;
		case 31:
			*uParam1 = { 2863.12f, -218.5451f, 41.4376f };
			*uParam2 = 26.5179f;
			return;
		case 122:
			*uParam1 = { -3404.329f, -3293.104f, -6.8233f };
			*uParam2 = 227.0484f;
			return;
		case 33:
			*uParam1 = { 584.8f, 1683f, 187.7f };
			*uParam2 = 26.5179f;
			return;
		case 34:
			*uParam1 = { 223.3f, 996.3f, 189.7f };
			*uParam2 = 218.9453f;
			return;
		case 83:
			*uParam1 = { 2520.18f, 2266.464f, 177.2689f };
			*uParam2 = 170f;
			return;
		case 55:
			*uParam1 = { 1691.5f, 1508f, 146.6f };
			*uParam2 = 297.128f;
			return;
		case 116:
			*uParam1 = { -5213.7f, -2140.6f, 11.8f };
			*uParam2 = 286.744f;
			return;
		case 39:
			*uParam1 = { -1212.897f, -1940.406f, 41.5543f };
			*uParam2 = 271.54f;
			return;
		case 50:
			*uParam1 = { 688.6671f, 2229.267f, 221.7181f };
			*uParam2 = 28.1904f;
			return;
		case 52:
			*uParam1 = { 537.9389f, 3004.24f, 485.7947f };
			*uParam2 = 91.2925f;
			return;
		case 54:
			*uParam1 = { 1942.625f, 1965.863f, 261.5498f };
			*uParam2 = 151.5668f;
			return;
		case 45:
			*uParam1 = { -1396.671f, 1149.936f, 223.108f };
			*uParam2 = 24.5906f;
			return;
		case 46:
			*uParam1 = { -1968.04f, 2158.48f, 328.57f };
			*uParam2 = 0f;
			return;
		case 48:
			*uParam1 = { 718.4495f, 3508.114f, 587.7103f };
			*uParam2 = 249.96f;
			return;
		case 59:
			*uParam1 = { 971.3845f, -6763.39f, 42.8703f };
			*uParam2 = 346.4123f;
			return;
		case 60:
			*uParam1 = { 1178.995f, -7233.543f, 78.9764f };
			*uParam2 = 153.8034f;
			return;
		case 28:
			*uParam1 = { -1304.624f, 406.447f, 95.5907f };
			*uParam2 = 255.3416f;
			return;
		case 62:
			*uParam1 = { 724.3393f, -443.4879f, 78.9597f };
			*uParam2 = 236.3249f;
			return;
		case 66:
			*uParam1 = { 1122f, 482.2f, 94.7f };
			*uParam2 = 42.3615f;
			return;
		case 70:
			*uParam1 = { -76.048f, -401.04f, 70.225f };
			*uParam2 = 316.8146f;
			return;
		case 74:
			*uParam1 = { -600.4578f, 523.9606f, 96.2824f };
			*uParam2 = 79.6536f;
			return;
		case 80:
			*uParam1 = { 2852.53f, 1666.46f, 128.67f };
			*uParam2 = 135.3297f;
			return;
		case 81:
			*uParam1 = { 2641.525f, 2223.522f, 158.1051f };
			*uParam2 = 312.4187f;
			return;
		case 87:
			*uParam1 = { 2313.349f, 353.842f, 65.0149f };
			*uParam2 = 0f;
			return;
		case 119:
			*uParam1 = { -4690.065f, -3731.79f, 11.9774f };
			*uParam2 = 197.302f;
			return;
		case 94:
			*uParam1 = { 1455.848f, -1812.212f, 54.8037f };
			*uParam2 = 304.2492f;
			return;
		case 97:
			*uParam1 = { 677.98f, -821.6f, 48.3f };
			*uParam2 = 0f;
			return;
		case 99:
			*uParam1 = { 1263.5f, -385.8f, 98.6f };
			*uParam2 = 241.3119f;
			return;
		case 100:
			*uParam1 = { 1371.805f, -858.002f, 68.513f };
			*uParam2 = 35.9944f;
			return;
		case 101:
			*uParam1 = { 1185.041f, -212.0238f, 101.1f };
			*uParam2 = 114.1645f;
			return;
		case 1:
			*uParam1 = { 1888f, -745.2f, 41.8f };
			*uParam2 = 155.9022f;
			return;
		case 2:
			*uParam1 = { 1945.44f, -688.74f, 50.83f };
			*uParam2 = 127.4476f;
			return;
		case 104:
			*uParam1 = { 1117.25f, -1315.29f, 64.328f };
			*uParam2 = 0f;
			return;
		case 106:
			*uParam1 = { 1379.382f, -2087.341f, 51.5847f };
			*uParam2 = 255.7824f;
			return;
		case 107:
			*uParam1 = { -2574.174f, -1366.599f, 149.3313f };
			*uParam2 = 175.5364f;
			return;
		case 111:
			*uParam1 = { -1669.9f, -2097.6f, 45.0918f };
			*uParam2 = 0f;
			return;
		case 112:
			*uParam1 = { -2371.444f, -1604.031f, 152.6511f };
			*uParam2 = 10.8752f;
			return;
		case 79:
			*uParam1 = { 2376.457f, 1287.451f, 110.0213f };
			*uParam2 = 14.4916f;
			return;
		case 109:
			if (NETWORK::NETWORK_IS_IN_SESSION())
			{
				*uParam1 = { -2354.916f, -808.9133f, 157.759f };
				*uParam2 = 100.556f;
			}
			else
			{
				*uParam1 = { -2408.241f, -939.9655f, 160.1905f };
				*uParam2 = 157.281f;
			}
			return;
		case 16:
			*uParam1 = { -2145.34f, 599.7288f, 117.0818f };
			*uParam2 = 24.052f;
			return;
		case 4:
			*uParam1 = { 2331.1f, -739.5853f, 41.62f };
			*uParam2 = 121f;
			return;
		case 9:
			*uParam1 = { 1825.357f, -1813.989f, 47.0702f };
			*uParam2 = 218.5782f;
			return;
		case 36:
			*uParam1 = { -32.4394f, 1129.326f, 167.0201f };
			*uParam2 = 353f;
			return;
		case 127:
			*uParam1 = { -1484.448f, -2344.049f, 42.0182f };
			*uParam2 = 295.5278f;
			return;
		case 125:
			*uParam1 = { -3970.96f, -2227.629f, -7.9601f };
			*uParam2 = 4.8f;
			return;
		case 118:
			*uParam1 = { -4107.593f, -3315.498f, 36.3123f };
			*uParam2 = 148.2941f;
			return;
		case 129:
			*uParam1 = { -5300.958f, -3608.817f, -14.6678f };
			*uParam2 = 71.7035f;
			return;
		case 114:
			*uParam1 = { -6028.044f, -3379.058f, -14.9946f };
			*uParam2 = 5.5075f;
			return;
		case 77:
			*uParam1 = { 1797.451f, -96.17f, 55.2f };
			*uParam2 = 64.7894f;
			return;
		case 96:
			*uParam1 = { 1350.713f, -2253.611f, 50.6595f };
			*uParam2 = 132.3174f;
			return;
		case 29:
			*uParam1 = { -1792.309f, 628.2485f, 128.1326f };
			*uParam2 = 39.9216f;
			return;
		case 126:
			*uParam1 = { -2534.852f, -2474.868f, 62.043f };
			*uParam2 = 300.0005f;
			return;
		case 42:
			*uParam1 = { -404.0206f, 1711.73f, 214.8277f };
			*uParam2 = 24.0467f;
			return;
		case 64:
			*uParam1 = { 787.7f, 851.3f, 118.5f };
			*uParam2 = 71.0275f;
			return;
		case 72:
			*uParam1 = { 895.032f, 255.553f, 119.95f };
			*uParam2 = 0f;
			return;
		case 89:
			*uParam1 = { 2962.063f, 2204.987f, 165.3194f };
			*uParam2 = 230.7887f;
			return;
		case 91:
			*uParam1 = { 2819.17f, 301.7715f, 48.8212f };
			*uParam2 = 191.6095f;
			return;
		case 86:
			*uParam1 = { 2244.984f, -140.6945f, 46.6572f };
			*uParam2 = 110.0301f;
			return;
		case 51:
			*uParam1 = { 1988.3f, 1187.8f, 171f };
			*uParam2 = 0f;
			return;
		case 53:
			*uParam1 = { 1599.169f, 2198.761f, 321.9284f };
			*uParam2 = 117.4739f;
			return;
		case 73:
			*uParam1 = { 1472.249f, 802.5236f, 99.2177f };
			*uParam2 = 41.9282f;
			return;
		case 84:
			*uParam1 = { 1902.7f, 294.6f, 75.7f };
			*uParam2 = 34.0605f;
			return;
			*uParam1 = { -1570.748f, 247.7129f, 111.5785f };
			*uParam2 = 304.563f;
			return;
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1888801[iParam0 /*35*/].f_3))
			{
				*uParam1 = { VOLUME::_GET_VOLUME_COORDS(Global_1888801[iParam0 /*35*/].f_3) };
				vVar0 = { VOLUME::_GET_VOLUME_ROTATION(Global_1888801[iParam0 /*35*/].f_3) };
				*uParam2 = vVar0.z;
			}
		}
bool func_46()
{
	return __LIB_0__::func_1(Global_1935630, 4096);
}

void func_49()
{
	struct<2> Var0;
	__LIB_11__::func_947();
	__LIB_1__::func_851();
	__LIB_1__::func_828(1);
	__LIB_9__::func_115(1);
	__LIB_9__::func_967(-2125499975);
	func_144();
	if (__LIB_0__::func_241() == 1160113249)
	{
		Global_40.f_7729 = 62;
		Global_1905941 = 62;
	}
	else
	{
		Global_40.f_7729 = 6;
		Global_1905941 = 6;
	}
	__LIB_18__::func_476();
	if (!__LIB_0__::func_28())
	{
		__LIB_5__::func_131(24);
	}
	else
	{
		__LIB_10__::func_794(24);
	}
	Global_1935630 = 0;
	__LIB_0__::func_11();
	__LIB_11__::func_121();
	__LIB_12__::func_76(1);
	__LIB_1__::func_299(0);
	if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), false, true);
		if (__LIB_0__::func_28())
		{
			func_152(joaat("WEAPON_REVOLVER_CATTLEMAN"), 1, 1, 0, 1, 752097756, 0, 0, 0, 0);
		}
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN"));
		func_152(joaat("CUSTOM_SATCHEL"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_35, joaat("PLAYER"));
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_CHAL_BAND_ROOT"), false);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_CHAL_EXPL_ROOT"), false);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_CHAL_GAMB_ROOT"), false);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_CHAL_HERB_ROOT"), false);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_CHAL_HORSE_ROOT"), false);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_CHAL_HUNT_ROOT"), false);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_CHAL_SHOT_ROOT"), false);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_CHAL_SURV_ROOT"), false);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_CHAL_WEAP_ROOT"), false);
		__LIB_1__::func_427(0);
		if (MONEY::_MONEY_GET_CASH_BALANCE() > 0)
		{
			MONEY::_MONEY_DECREMENT_CASH_BALANCE(MONEY::_MONEY_GET_CASH_BALANCE());
		}
		Var0 = { __LIB_0__::func_14(joaat("CAREER_CASH")) };
		STATS::_0x0FEE2561120F3333(&Var0);
		if (!__LIB_0__::func_28())
		{
			__LIB_5__::func_391(1);
			func_152(joaat("KIT_BANDANA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_152(joaat("KIT_MASK_GREY_CLOTH"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_152(joaat("DOCUMENT_PLAYER_JOURNAL"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_152(joaat("CLOTHING_WINTER_OUTFIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_CHAL_BAND_ROOT"), true);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_CHAL_EXPL_ROOT"), true);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_CHAL_GAMB_ROOT"), true);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_CHAL_HERB_ROOT"), true);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_CHAL_HORSE_ROOT"), true);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_CHAL_HUNT_ROOT"), true);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_CHAL_SHOT_ROOT"), true);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_CHAL_SURV_ROOT"), true);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_CHAL_WEAP_ROOT"), true);
			if (__LIB_0__::func_58())
			{
				func_152(joaat("CONSUMABLE_POTENT_MEDICINE"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(joaat("CONSUMABLE_POTENT_SNAKE_OIL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(joaat("CONSUMABLE_POTENT_TONIC"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(joaat("CONSUMABLE_CORNEDBEEF_CAN"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(joaat("CONSUMABLE_PEACHES_CAN"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(joaat("CONSUMABLE_MOONSHINE"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(joaat("CONSUMABLE_CHOCOLATE_BAR"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(joaat("CONSUMABLE_CHEWING_TOBACCO"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(joaat("PROVISION_FISH_STEELHEAD_TROUT"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(joaat("CONSUMABLE_HERB_OREGANO"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
			}
			else
			{
				func_152(joaat("CONSUMABLE_MEDICINE"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			func_152(joaat("WEAPON_LASSO"), 1, 1, 0, 1, 1543882317, 0, 0, 0, 0);
			func_152(joaat("WEAPON_REPEATER_CARBINE"), 1, 1, 0, 1, 1543882317, 0, 0, 0, 0);
			func_152(joaat("WEAPON_REVOLVER_SCHOFIELD"), 1, 1, 0, 1, 1543882317, 0, 0, 0, 0);
			func_152(joaat("AMMO_REPEATER"), 100, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_152(joaat("AMMO_REVOLVER"), 100, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_152(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_152(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_152(joaat("KIT_WARDROBE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			__LIB_9__::func_952(joaat("GAME_START"), 0, 1065353216 /* Float: 1f */, 1, 0, 0);
			func_152(joaat("DOCUMENT_NEWSPAPER_ED_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_159(1);
			func_152(joaat("KIT_HORSE_BRUSH"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			if (!__LIB_0__::func_58())
			{
				func_152(joaat("CONSUMABLE_APPLE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(joaat("CONSUMABLE_HORSE_STIMULANT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(joaat("CONSUMABLE_POTENT_HORSE_STIMULANT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(joaat("CONSUMABLE_HORSE_REVIVER"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			__LIB_11__::func_948();
			__LIB_0__::func_3(MISC::GET_RANDOM_INT_IN_RANGE(120, 420), 0, 1);
			if (!__LIB_1__::func_707(joaat("CLOTHING_GUNSLINGER_OUTFIT"), 1, 0))
			{
				func_152(joaat("CLOTHING_GUNSLINGER_OUTFIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!__LIB_1__::func_707(joaat("CLOTHING_WARM_WEATHER_OUTFIT"), 1, 0))
			{
				func_152(joaat("CLOTHING_WARM_WEATHER_OUTFIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!__LIB_1__::func_707(joaat("CLOTHING_ROBBERY_OUTFIT"), 1, 0))
			{
				func_152(joaat("CLOTHING_ROBBERY_OUTFIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		PLAYER::_0x76F7E1BCD623A429(PLAYER::GET_PLAYER_INDEX());
	}
	func_163(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), 0);
	__LIB_18__::func_477(0, 1);
	__LIB_18__::func_478(1);
	__LIB_18__::func_479();
	__LIB_11__::func_949();
	__LIB_10__::func_736(1);
	__LIB_10__::func_737(1, 1);
	__LIB_10__::func_819(1);
	__LIB_12__::func_19();
	__LIB_11__::func_950();
	__LIB_18__::func_507();
	__LIB_11__::func_951();
	func_174();
	PED::_0xE6CB36F43A95D75F(0.1f);
}

int func_51(int iParam0)
{
	if (__LIB_0__::func_58())
	{
		return 1;
	}
	if (!__LIB_0__::func_20(iParam0))
	{
		return 1;
	}
	if (__LIB_1__::func_972(iParam0) == 4)
	{
		if (iParam0 != __LIB_0__::func_61())
		{
			return 1;
		}
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1888801[iParam0 /*35*/].f_23)))
	{
		return 1;
	}
	if (__LIB_1__::func_220(iParam0))
	{
		return 1;
	}
	else
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Global_1888801[iParam0 /*35*/].f_3))
		{
			if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1888801[iParam0 /*35*/].f_3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false)))
			{
			}
		}
		if (__LIB_0__::func_21(iParam0, 2))
		{
		}
		if (__LIB_0__::func_21(iParam0, 1))
		{
		}
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1888801[iParam0 /*35*/].f_9, false))
		{
		}
	}
	return 0;
}

bool func_52()
{
	return ((__LIB_0__::func_382(1) && __LIB_0__::func_382(4)) && __LIB_0__::func_382(2));
}

void func_53()
{
	bool bVar0;
	int iVar1;
	if (__LIB_0__::func_58())
	{
		return;
	}
	__LIB_1__::func_511(8);
	__LIB_17__::func_432(Global_1897952.f_35);
	__LIB_19__::func_418(Global_1897952.f_35);
	Global_1897952.f_35++;
	if (Global_1897952.f_35 >= 17)
	{
		Global_1897952.f_35 = 0;
		bVar0 = true;
	}
	if (Global_1897952.f_36 != -1)
	{
		if (Global_1897952.f_36 != __LIB_1__::func_898())
		{
			func_182(Global_1897952.f_36);
		}
		return;
	}
	if (bVar0)
	{
		iVar1 = func_183(Global_36);
		if (iVar1 < 0 || iVar1 >= 17)
		{
			return;
		}
		if (__LIB_1__::func_898() != iVar1)
		{
			Global_1897952.f_37 = 1;
			if (func_182(iVar1))
			{
				return;
			}
		}
		if ((!Global_1897952.f_37 && !SCRIPTS::IS_THREAD_ACTIVE(Global_1897952.f_42, false)) && __LIB_1__::func_898() != -1)
		{
			func_182(__LIB_1__::func_898());
		}
		Global_1897952.f_37 = 0;
	}
}

void func_54()
{
	if (__LIB_0__::func_2() == -1)
	{
		if (func_184())
		{
			__LIB_6__::func_215();
		}
	}
	if (Global_1894899 & 64 != 0)
	{
		__LIB_17__::func_445();
		__LIB_0__::func_300(0);
	}
	func_187();
	__LIB_19__::func_419();
	__LIB_19__::func_26();
}

void func_55()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	iVar1 = 932;
	iVar2 = 952;
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		__LIB_1__::func_940((iVar1 + iVar0), 0);
		iVar0++;
	}
}

void func_58()
{
	if (__LIB_0__::func_241() == 1160113249)
	{
		__LIB_1__::func_811(Global_35, 62, 1, 0, 0);
	}
	else
	{
		__LIB_1__::func_811(Global_35, 6, 1, 0, 0);
	}
}

bool func_63()
{
	if (__LIB_0__::func_13(32))
	{
		return false;
	}
	if (__LIB_14__::func_217() == 3)
	{
		return false;
	}
	if (__LIB_0__::func_13(2))
	{
		return false;
	}
	if (__LIB_0__::func_13(4096))
	{
		return false;
	}
	if (__LIB_0__::func_13(128))
	{
		return false;
	}
	if (_NAMESPACE77::_0xC5C395C60B542A3C(1))
	{
		return false;
	}
	if (Global_1572864.f_21 != 0)
	{
		return false;
	}
	if (__LIB_0__::func_1(Global_1935630, 131072))
	{
		return false;
	}
	if (__LIB_1__::func_195())
	{
		return false;
	}
	if ((__LIB_0__::func_2() == -1 && !Global_40) && Global_40.f_40)
	{
		return false;
	}
	return true;
}

void func_66()
{
	int iVar0;
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = __LIB_0__::func_351(1);
		Global_1898441[iVar0 /*38*/] = 1;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_ENTER_RDR", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_ENTER_RDR_COM", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_24), "AF_RDR", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_5[0 /*3*/]), "", 24);
	}
}

void func_68()
{
	func_198();
	func_199();
	func_200();
}

void func_69()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iVar0 == -1)
		{
		}
		else if (!__LIB_4__::func_259(iVar0, 1073741824 /* Float: 2f */))
		{
		}
		else
		{
			__LIB_10__::func_820(iVar0, 1);
		}
		iVar0++;
	}
}

void func_70()
{
	if (!func_203(4))
	{
		func_205(func_204());
	}
	if (__LIB_0__::func_28() && !__LIB_1__::func_154(40))
	{
		func_208(func_207());
	}
	func_209();
	if (__LIB_0__::func_28() && !__LIB_1__::func_154(48))
	{
		func_211(func_210());
	}
	if (__LIB_0__::func_28() && !__LIB_1__::func_154(42))
	{
		func_213(func_212());
	}
	if (!func_214(4))
	{
		func_216(func_215());
	}
	if (__LIB_0__::func_28() && !__LIB_1__::func_154(50))
	{
		func_218(func_217());
	}
	if (__LIB_0__::func_28() && !__LIB_1__::func_154(51))
	{
		func_220(func_219());
	}
	if (!func_221(8))
	{
		func_223(func_222());
	}
	if (!func_224(8))
	{
		func_226(func_225());
	}
	if (!func_227(8))
	{
		func_229(func_228());
	}
	if (!__LIB_0__::func_458(4))
	{
		func_232(func_231());
	}
	if (!func_233(8))
	{
		func_235(func_234());
	}
	if (!func_236(16))
	{
		func_238(func_237());
	}
}

void func_71()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			iVar1 = func_239(iVar0);
			if (!__LIB_3__::func_610(iVar1, -2147483648))
			{
			}
			else
			{
				__LIB_10__::func_821(iVar1, 1);
			}
		}
		iVar0++;
	}
}

void func_72()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < Global_1347702)
	{
		if (__LIB_0__::func_5(iVar0))
		{
			if (__LIB_3__::func_736(iVar0, 4))
			{
				if (!__LIB_3__::func_736(iVar0, 128))
				{
					if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(__LIB_3__::func_734(iVar0), __LIB_3__::func_733(iVar0)))
					{
						__LIB_7__::func_602(iVar0);
					}
					if (Global_1347702[iVar0 /*49*/].f_12 & 512 != 0)
					{
						__LIB_10__::func_822(iVar0);
					}
					else
					{
						__LIB_10__::func_833(iVar0);
					}
				}
				else
				{
					__LIB_4__::func_683(iVar0, 1);
					__LIB_3__::func_735(iVar0, 4);
					__LIB_3__::func_735(iVar0, 128);
					if (Global_1347702[iVar0 /*49*/].f_48 != -1)
					{
						iVar1 = __LIB_0__::func_700(Global_1347702[iVar0 /*49*/].f_48);
						if (iVar1 == 8)
						{
							iVar2 = __LIB_0__::func_76(Global_1347702[iVar0 /*49*/].f_48);
							if (__LIB_0__::func_5(iVar2))
							{
								if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(__LIB_3__::func_734(iVar2), __LIB_3__::func_733(iVar2)))
								{
									__LIB_7__::func_602(iVar2);
								}
								if (Global_1347702[iVar2 /*49*/].f_12 & 512 != 0)
								{
									__LIB_10__::func_822(iVar2);
								}
								else
								{
									__LIB_10__::func_833(iVar2);
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_73()
{
	func_252();
	func_253();
	func_254();
	func_255();
	func_256();
}

void func_74()
{
	if (!__LIB_1__::func_185(6))
	{
		return;
	}
	if (!__LIB_1__::func_185(37))
	{
		__LIB_0__::func_893(13);
	}
	if (!__LIB_1__::func_25(Global_1347702[112 /*49*/].f_15, 1))
	{
		__LIB_0__::func_893(1);
	}
	if (!__LIB_1__::func_185(21))
	{
		__LIB_0__::func_893(11);
		__LIB_0__::func_893(14);
	}
	if (__LIB_1__::func_25(Global_1347702[67 /*49*/].f_15, 1) && !__LIB_1__::func_185(37))
	{
		if (!__LIB_0__::func_892(6))
		{
			__LIB_0__::func_893(6);
		}
	}
	if (__LIB_1__::func_25(Global_1347702[67 /*49*/].f_15, 1) && !__LIB_1__::func_185(28))
	{
		if (!__LIB_0__::func_892(3))
		{
			__LIB_0__::func_893(3);
		}
	}
}

void func_75(bool bParam0)
{
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_M_Y_ASBMINER_01"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_M_Y_ASBMINER_02"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_M_Y_ASBMINER_03"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_M_Y_ASBMINER_04"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_M_Y_NBXSTREETKIDS_01"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_M_Y_NBXSTREETKIDS_SLUMS_01"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_M_Y_SDSTREETKIDS_SLUMS_02"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_M_Y_UNICORPSE_01"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("S_M_Y_ARMY_01"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("S_M_Y_NEWSPAPERBOY_01"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("S_M_Y_RACRAILWORKER_01"), bParam0);
}

void func_76()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == joaat("CSTAG_MOOD_ARTHUR_COLTER") || Global_40.f_4283.f_6[iVar0 /*5*/] == joaat("CSTAG_MOOD_ARTHUR_BEAVER"))
		{
			return;
		}
		iVar0++;
	}
	iVar1 = __LIB_0__::func_317();
	switch (iVar1)
	{
		case 0:
			__LIB_4__::func_253(joaat("CSTAG_MOOD_ARTHUR_COLTER"), joaat("CSTP_PERSIST_ACROSS_STATES"), -1235532919, -1, 1, 0, 1);
			PLAYER::_0x39BED552DB46FFA9(PLAYER::PLAYER_ID(), 5);
			break;
		case 4:
		case 5:
		case 6:
			__LIB_4__::func_253(joaat("CSTAG_MOOD_ARTHUR_BEAVER"), joaat("CSTP_PERSIST_ACROSS_STATES"), -1235532919, -1, 1, 0, 1);
			PLAYER::_0x39BED552DB46FFA9(PLAYER::PLAYER_ID(), 6);
			break;
		default:
			break;
	}
}

void func_80()
{
	if (!__LIB_0__::func_313())
	{
		return;
	}
	if (__LIB_1__::func_185(17))
	{
		if (!__LIB_0__::func_428(joaat("WEAPON_REPEATER_EVANS")))
		{
			__LIB_0__::func_877(joaat("WEAPON_REPEATER_EVANS"));
		}
	}
	if (__LIB_1__::func_187(67))
	{
		if (!__LIB_0__::func_428(joaat("WEAPON_PISTOL_M1899")))
		{
			__LIB_0__::func_877(joaat("WEAPON_PISTOL_M1899"));
		}
	}
	if (__LIB_1__::func_185(33))
	{
		if (!__LIB_0__::func_428(joaat("WEAPON_REVOLVER_LEMAT")))
		{
			__LIB_0__::func_877(joaat("WEAPON_REVOLVER_LEMAT"));
		}
	}
	if (__LIB_1__::func_185(34))
	{
		if (!__LIB_0__::func_428(joaat("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER")))
		{
			__LIB_0__::func_877(joaat("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER"));
		}
	}
}

bool func_81(var uParam0)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	int iVar3;
	char[] cVar4[8];
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	switch (*uParam0)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 77)
			{
				iVar1 = 1;
				cVar2 = __LIB_1__::func_613(Global_1835011[iVar0 /*74*/].f_1);
				if (__LIB_0__::func_6(Global_1835011[iVar0 /*74*/].f_1) && __LIB_1__::func_25(Global_1835011[iVar0 /*74*/].f_1, 1))
				{
					switch (__LIB_0__::func_334(iVar0))
					{
						case 0:
							uParam0->f_1++;
							break;
						case 1:
							uParam0->f_2++;
							break;
						case 2:
							uParam0->f_3++;
							break;
						case 3:
							uParam0->f_4++;
							break;
						case 4:
							uParam0->f_5++;
							break;
						case 5:
							uParam0->f_6++;
							break;
						case 6:
							uParam0->f_7++;
							break;
						case 7:
							uParam0->f_8++;
							break;
						case 8:
							uParam0->f_9++;
							break;
						default:
							iVar1 = 0;
							break;
					}
					if (iVar0 == 7)
					{
						uParam0->f_11++;
					}
					if (iVar1 && MISSIONDATA::MISSIONDATA_IS_REQUIRED_STORY_MISSION(MISC::GET_HASH_KEY(&(Global_1835011[iVar0 /*74*/].f_8))))
					{
						uParam0->f_10++;
					}
					if (MISSIONDATA::MISSIONDATA_GET_RATING(MISC::GET_HASH_KEY(&cVar2)) >= 5)
					{
						uParam0->f_13++;
					}
				}
				iVar0++;
			}
			*uParam0 = 1;
			break;
		case 1:
			iVar3 = 0;
			while (iVar3 < 156)
			{
				iVar1 = 1;
				cVar4 = __LIB_1__::func_613(Global_1347702[iVar3 /*49*/].f_15);
				if (__LIB_0__::func_6(Global_1347702[iVar3 /*49*/].f_15) && __LIB_1__::func_25(Global_1347702[iVar3 /*49*/].f_15, 1))
				{
					if (__LIB_0__::func_1(Global_1347702[iVar3 /*49*/].f_12, 536870912))
					{
						uParam0->f_12++;
					}
					if (__LIB_0__::func_1(Global_1347702[iVar3 /*49*/].f_12, 1))
					{
						switch (__LIB_0__::func_335(iVar3))
						{
							case 0:
								uParam0->f_1++;
								break;
							case 1:
								uParam0->f_2++;
								break;
							case 2:
								uParam0->f_3++;
								break;
							case 3:
								uParam0->f_4++;
								break;
							case 4:
								uParam0->f_5++;
								break;
							case 5:
								uParam0->f_6++;
								break;
							case 6:
								uParam0->f_7++;
								break;
							case 7:
								uParam0->f_8++;
								break;
							case 8:
								uParam0->f_9++;
								break;
							default:
								iVar1 = 0;
								break;
						}
						if (iVar1 && MISSIONDATA::MISSIONDATA_IS_REQUIRED_STORY_MISSION(MISC::GET_HASH_KEY(&(Global_1347702[iVar3 /*49*/].f_3))))
						{
							uParam0->f_10++;
						}
						if (MISSIONDATA::MISSIONDATA_GET_RATING(MISC::GET_HASH_KEY(&cVar4)) >= 5)
						{
							uParam0->f_13++;
						}
					}
					else if (__LIB_0__::func_1(Global_1347702[iVar3 /*49*/].f_12, 4))
					{
						if (!__LIB_0__::func_1(Global_1347702[iVar3 /*49*/].f_12, 4194304))
						{
							if (!__LIB_0__::func_1(Global_1347702[iVar3 /*49*/].f_12, 512))
							{
								uParam0->f_14++;
							}
							else
							{
								uParam0->f_11++;
							}
						}
					}
				}
				iVar3++;
			}
			*uParam0 = 2;
			break;
		case 2:
			iVar5 = 0;
			while (iVar5 < 19)
			{
				if (iVar5 != 0)
				{
					switch (iVar5)
					{
						case 4:
							iVar6 = -727372692;
							break;
						case 5:
							iVar6 = 532503220;
							break;
						case 6:
							iVar6 = 562599937;
							break;
						case 7:
							iVar6 = 1714554710;
							break;
						case 8:
							iVar6 = 1610646968;
							break;
						case 9:
							iVar6 = -1249289544;
							break;
						case 10:
							iVar6 = -508074447;
							break;
						case 11:
							iVar6 = -1917132299;
							break;
						case 12:
							iVar6 = -763271696;
							break;
						case 13:
							iVar6 = 1116308524;
							break;
						case 14:
							iVar6 = 379859357;
							break;
						case 15:
							iVar6 = 1822876181;
							break;
						case 16:
							iVar6 = 1354284392;
							break;
						case 17:
							iVar6 = 43681669;
							break;
						case 18:
							iVar6 = 1871337449;
							break;
					}
					if (iVar6 != 0)
					{
						if (MAP::_MAP_IS_DISCOVERY_ACTIVE(iVar6))
						{
							uParam0->f_15++;
						}
					}
				}
				iVar5++;
			}
			*uParam0 = 3;
			break;
		case 3:
			iVar7 = 0;
			while (iVar7 < 30)
			{
				if (Global_40.f_11623[iVar7 /*8*/].f_6 > 0)
				{
					uParam0->f_16++;
				}
				iVar7++;
			}
			*uParam0 = 4;
			break;
		case 4:
			iVar8 = 0;
			while (iVar8 < 120)
			{
				if (Global_17504.f_42[iVar8 /*8*/] > 0)
				{
					uParam0->f_17++;
				}
				iVar8++;
			}
			*uParam0 = 5;
			break;
		case 5:
			iVar9 = 0;
			while (iVar9 < 9)
			{
				iVar10 = func_277(iVar9);
				if (__LIB_0__::func_20(iVar10))
				{
					iVar11 = __LIB_4__::func_6(iVar10);
					if (__LIB_0__::func_6(iVar11) && __LIB_1__::func_268(iVar11) > 0)
					{
						uParam0->f_18++;
					}
				}
				iVar9++;
			}
			*uParam0 = 6;
			break;
		case 6:
			iVar12 = 0;
			while (iVar12 < 144)
			{
				iVar13 = func_280(iVar12, 1);
				if (__LIB_7__::func_466(iVar13) && __LIB_7__::func_497(iVar13, 32))
				{
					uParam0->f_19++;
				}
				iVar12++;
			}
			*uParam0 = 7;
			break;
		case 7:
			if (MISC::IS_BIT_SET(Global_40.f_11958, 0))
			{
				uParam0->f_20++;
			}
			if (MISC::IS_BIT_SET(Global_40.f_11958, 1))
			{
				uParam0->f_20++;
			}
			if (MISC::IS_BIT_SET(Global_40.f_11958, 2))
			{
				uParam0->f_20++;
			}
			if (MISC::IS_BIT_SET(Global_40.f_11958, 3))
			{
				uParam0->f_20++;
			}
			iVar14 = 0;
			while (iVar14 < 8)
			{
				if (__LIB_0__::func_770(iVar14, 67108864))
				{
					uParam0->f_21++;
				}
				iVar14++;
			}
			if (__LIB_1__::func_25(__LIB_1__::func_293(0, 1, 11, joaat("HAI_HUNTING_02")), 1))
			{
				uParam0->f_22++;
			}
			if (__LIB_1__::func_25(__LIB_1__::func_293(0, 2, 11, joaat("HAI_FISHING_01")), 1))
			{
				uParam0->f_22++;
			}
			if (__LIB_1__::func_25(__LIB_1__::func_293(0, 3, 11, joaat("HAI_FISHING_02")), 1))
			{
				uParam0->f_22++;
			}
			if (__LIB_1__::func_25(__LIB_1__::func_293(0, 4, 11, joaat("HAI_FIVE_FINGER_FILLET_01")), 1))
			{
				uParam0->f_22++;
			}
			if (__LIB_1__::func_25(__LIB_1__::func_293(0, 5, 11, joaat("HAI_HUNTING_06")), 1))
			{
				uParam0->f_23++;
			}
			if (__LIB_1__::func_25(__LIB_1__::func_293(0, 6, 11, joaat("HAI_DOMINOES_01")), 1))
			{
				uParam0->f_23++;
			}
			if (__LIB_1__::func_25(__LIB_1__::func_293(0, 7, 11, joaat("HAI_COACH_ROBBERY_01")), 1))
			{
				uParam0->f_23++;
			}
			if (__LIB_1__::func_25(__LIB_1__::func_293(0, 8, 11, joaat("HAI_COACH_ROBBERY_02")), 1))
			{
				uParam0->f_23++;
			}
			if (__LIB_1__::func_25(__LIB_1__::func_293(0, 9, 11, joaat("HAI_FIVE_FINGER_FILLET_02")), 1))
			{
				uParam0->f_23++;
			}
			if (__LIB_1__::func_25(__LIB_1__::func_293(0, 10, 11, joaat("CABR01")), 1))
			{
				uParam0->f_24++;
			}
			if (__LIB_1__::func_25(__LIB_1__::func_293(0, 11, 11, joaat("HAI_COACH_ROBBERY_03")), 1))
			{
				uParam0->f_24++;
			}
			if (__LIB_1__::func_25(__LIB_1__::func_293(0, 12, 11, joaat("HAI_COACH_ROBBERY_04")), 1))
			{
				uParam0->f_24++;
			}
			if (__LIB_1__::func_25(__LIB_1__::func_293(0, 13, 11, joaat("HAI_RUSTLING_02")), 1))
			{
				uParam0->f_24++;
			}
			iVar15 = 0;
			while (iVar15 < 16)
			{
				if (Global_40.f_9319[iVar15 /*4*/].f_1)
				{
					uParam0->f_25++;
				}
				iVar15++;
			}
			*uParam0 = 8;
			break;
		case 8:
			func_285(__LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP1")), uParam0->f_1);
			func_285(__LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP2")), uParam0->f_2);
			func_285(__LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP3")), uParam0->f_3);
			func_285(__LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP4")), uParam0->f_4);
			func_285(__LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP5")), uParam0->f_5);
			func_285(__LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP6")), uParam0->f_6);
			func_285(__LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP7")), uParam0->f_7);
			func_285(__LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP8")), uParam0->f_8);
			func_285(__LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP9")), uParam0->f_9);
			func_285(__LIB_0__::func_38(joaat("COMPLETED"), joaat("REQUIRED_MISSIONS")), uParam0->f_10);
			func_285(__LIB_0__::func_38(joaat("COMPLETED"), joaat("RC_STRANDS")), uParam0->f_14);
			func_285(__LIB_0__::func_38(joaat("COMPLETED"), joaat("RC_STRANDS_BOUNTY")), uParam0->f_11);
			func_285(__LIB_0__::func_38(joaat("KILLS"), joaat("LEGENDARY_ANIMALS")), uParam0->f_25);
			func_285(__LIB_0__::func_14(joaat("SHACK_FOUND")), uParam0->f_15);
			func_285(__LIB_0__::func_14(joaat("SPECIAL_PED_INTERACTION")), uParam0->f_16);
			func_285(__LIB_0__::func_14(joaat("UNIQUE_BEATS_COMPLETED")), uParam0->f_17);
			func_285(__LIB_0__::func_14(joaat("GANG_HIDEOUT_COMPLETED")), uParam0->f_18);
			func_285(__LIB_0__::func_14(joaat("DISCOVERABLE_FOUND")), uParam0->f_19);
			func_286(5, uParam0->f_13);
			func_286(6, uParam0->f_20);
			func_286(7, uParam0->f_21);
			func_286(11, uParam0->f_12);
			if (Global_40.f_11095.f_37 == 8 || Global_40.f_11095.f_36 == 8)
			{
				func_286(10, 1);
			}
			if (uParam0->f_22 > 0)
			{
				STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(joaat("ACH_FWB_HOVERLOOK"), 1);
			}
			if (uParam0->f_23 > 0)
			{
				STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(joaat("ACH_FWB_CLEMENS"), 1);
			}
			if (uParam0->f_24 > 0)
			{
				STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(joaat("ACH_FWB_SHADY"), 1);
			}
			if (__LIB_0__::func_895(Global_1835011[36 /*74*/].f_1) < 1 && __LIB_1__::func_185(36))
			{
				STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(joaat("ACH_LEND_HAND"), 1);
			}
			__LIB_1__::func_780();
			return true;
	}
	return false;
}

void func_82()
{
	if (__LIB_0__::func_1(Global_1898164, 2))
	{
		__LIB_0__::func_8(&Global_1898164, 2);
		__LIB_0__::func_8(&Global_1935630, 895);
	}
	if (__LIB_0__::func_1(Global_1898164, 1))
	{
		__LIB_0__::func_8(&Global_1898164, 1);
		__LIB_0__::func_7(&Global_1898164, 2);
	}
}

void func_89(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = 0;
		Global_12106[iParam0 /*7*/] = 0;
		Global_12106[iParam0 /*7*/].f_2 = 0;
		Global_12106[iParam0 /*7*/].f_3 = 0;
		Global_12106[iParam0 /*7*/].f_4 = 0;
		Global_12106[iParam0 /*7*/].f_6 = -15;
		return;
	}
	__LIB_0__::func_931(iParam0);
	Global_1058888.f_498[iParam0 /*2*/] = 0;
	Global_1058888.f_498[iParam0 /*2*/].f_1 = 0;
}

void func_98(var uParam0)
{
	*uParam0 = DATAFILE::_0xD97D8D905F1562F2(-1412413887);
	while (!DATAFILE::_0x603AC35FD4602C76(*uParam0))
	{
		BUILTIN::WAIT(0);
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, 223399367, "regions/state(name=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, 1487863141, "iBountyDecayRate:value");
	DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, -766247814, "iBountyDropToUnrestrict:value");
}

void func_99(var uParam0, int iParam1)
{
	struct<2> Var0;
	if (iParam1 > 6)
	{
		return;
	}
	if (iParam1 <= -1)
	{
		return;
	}
	if (!func_298(uParam0, iParam1, &Var0))
	{
		return;
	}
	Global_1934266.f_7[iParam1 /*3*/] = Var0;
	Global_1934266.f_7[iParam1 /*3*/].f_1 = Var0.f_1;
}

void func_101()
{
	Global_1934266.f_78 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "wanted");
	Global_1934266.f_78.f_55 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1934266.f_78, "showBountyHunterMessage", 0);
	func_299(&(Global_1934266.f_78.f_1), "firstMessage");
	func_299(&(Global_1934266.f_78.f_19), "secondMessage");
	func_299(&(Global_1934266.f_78.f_37), "thirdMessage");
	Global_1934266.f_78.f_62 = -1;
	StringCopy(&(Global_1934266.f_78.f_64), "", 24);
}

void func_102(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 <= -1 || iParam0 >= 630)
	{
		return;
	}
	Global_1905944.f_22[iParam0 /*9*/] = iParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_2 = iParam2;
}

void func_103(int iParam0, int iParam1)
{
	Global_1905944.f_22[iParam0 /*9*/].f_8 = iParam1;
}

var func_112(int iParam0)
{
	char cVar0[64];
	StringCopy(&cVar0, "(", 64);
	StringIntConCat(&cVar0, __LIB_0__::func_76(iParam0), 64);
	StringConCat(&cVar0, ",", 64);
	StringIntConCat(&cVar0, __LIB_0__::func_872(iParam0), 64);
	StringConCat(&cVar0, ",", 64);
	StringConCat(&cVar0, func_310(__LIB_0__::func_700(iParam0)), 64);
	StringConCat(&cVar0, ")", 64);
	return HUD::_0xD8402B858F4DDD88(&cVar0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
}

void func_115(bool bParam0, int iParam1, bool bParam2)
{
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	__LIB_11__::func_998(1);
	__LIB_19__::func_202(0, 0, 1, 0);
	if ((iParam1 == -1 && SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME() != joaat("PAUSE_MENU_REPLAY_LAUNCHER")) && __LIB_0__::func_382(64))
	{
		PLAYER::FORCE_CLEANUP(2);
	}
	if (iParam1 == -1)
	{
		UILOG::_UILOG_CLEAR_ALL_ENTRIES();
		if (bParam2)
		{
			PERSISTENCE::_0x7A1BD123E5CDB6E5();
			__LIB_11__::func_890();
			MISC::CLEAR_BIT(&(Global_1934765.f_301), 1);
		}
	}
	if (iParam1 == -1)
	{
		__LIB_11__::func_891();
		__LIB_11__::func_892();
	}
	func_316(bParam0, iParam1);
	func_317();
	__LIB_4__::func_845(1, 0);
	__LIB_19__::func_203(iParam1);
	func_320(iParam1);
	__LIB_11__::func_893();
	__LIB_19__::func_577(iParam1);
	__LIB_19__::func_464();
	__LIB_18__::func_419();
	__LIB_19__::func_204();
	__LIB_18__::func_262();
	__LIB_10__::func_795(1, 16);
	__LIB_11__::func_894();
	__LIB_10__::func_796(&(Global_1934765.f_402));
	__LIB_11__::func_895();
	__LIB_12__::func_82(1);
	HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	Global_1879534.f_6 = 1;
	Global_1879534.f_7 = 0;
	__LIB_11__::func_998(0);
}

void func_117()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_1879534.f_7300 - 1))
	{
		MISC::CLEAR_BIT(&(Global_1879534.f_7301.f_2[iVar0 /*4*/]), 1);
		iVar0++;
	}
}

bool func_118(bool bParam0, bool bParam1)
{
	int iVar0;
	char cVar1[64];
	if (!bParam0)
	{
		if (STREAMING::_0xCF45DF50C7775F2A())
		{
			return false;
		}
		if (__LIB_17__::func_446())
		{
			return false;
		}
		if (!Global_1934765.f_274 && !__LIB_0__::func_13(32768))
		{
			if (Global_1879534.f_1 || Global_1879534)
			{
				return false;
			}
		}
	}
	switch (Global_1934765)
	{
		case 0:
			__LIB_0__::func_401(666617953);
			__LIB_0__::func_401(1733948592);
			__LIB_0__::func_401(1700234797);
			__LIB_0__::func_401(1305074360);
			__LIB_0__::func_401(-436566493);
			__LIB_0__::func_401(-1995815064);
			__LIB_0__::func_401(-483649675);
			__LIB_0__::func_401(212587871);
			__LIB_0__::func_401(joaat("TAX_SHUTTERS_CLOSED"));
			__LIB_0__::func_401(1190076410);
			__LIB_0__::func_401(350100475);
			__LIB_0__::func_401(2033090463);
			__LIB_0__::func_401(-688011628);
			__LIB_0__::func_401(-787042507);
			__LIB_0__::func_401(1688216398);
			__LIB_0__::func_401(669655585);
			__LIB_0__::func_401(-895099271);
			__LIB_0__::func_401(556610581);
			__LIB_0__::func_401(joaat("ARM_05_CHOLERA"));
			if (__LIB_0__::func_313())
			{
				__LIB_0__::func_401(-693659956);
				__LIB_0__::func_401(joaat("SPPACK_A1SUP_OBELISK"));
				__LIB_0__::func_401(-400238535);
				__LIB_0__::func_401(1416512144);
			}
			__LIB_0__::func_401(joaat("SPPACK_A4SUP_AQUADUCT"));
			__LIB_0__::func_401(-846479900);
			__LIB_0__::func_401(-866774384);
			if (!Global_1934765.f_288)
			{
				__LIB_4__::func_495(229);
			}
			PATHFIND::_0x6C3F12ECEB6D2E2A(-1176.011f, -32.44423f, 38f, -1186.829f, -18.19722f, 45f, 6, 1);
			PATHFIND::_0x6C3F12ECEB6D2E2A(-1177.246f, -19.60884f, 38f, -1170.786f, -12.71267f, 42f, 6, 1);
			PATHFIND::_0x6C3F12ECEB6D2E2A(-1174.544f, -4.74933f, 38f, -1163.424f, -13.43965f, 42f, 6, 1);
			__LIB_19__::func_29();
			__LIB_18__::func_263();
			__LIB_10__::func_738();
			return false;
		case 1:
			__LIB_17__::func_453();
			__LIB_10__::func_738();
			return false;
		case 2:
			func_339();
			__LIB_10__::func_738();
			return false;
		case 3:
			break;
	}
	if (!__LIB_0__::func_898(514932331))
	{
		__LIB_0__::func_401(1892122519);
	}
	if (__LIB_0__::func_898(-1414537028))
	{
		if (!__LIB_0__::func_1(Global_1934765.f_20, 1))
		{
			__LIB_1__::func_883(5, 1);
			__LIB_1__::func_883(7, 1);
			__LIB_1__::func_883(6, 1);
			__LIB_1__::func_883(1, 1);
			__LIB_0__::func_7(&(Global_1934765.f_20), 1);
		}
	}
	else if (__LIB_0__::func_1(Global_1934765.f_20, 1))
	{
		__LIB_1__::func_883(5, 2);
		__LIB_1__::func_883(1, 2);
		__LIB_0__::func_8(&(Global_1934765.f_20), 1);
	}
	if (__LIB_0__::func_898(269047710))
	{
		__LIB_0__::func_400(382484708);
		__LIB_0__::func_401(-910880980);
	}
	else
	{
		__LIB_0__::func_400(-910880980);
		__LIB_0__::func_401(382484708);
	}
	if (__LIB_0__::func_898(-748969569))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_NOTICE", true);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_NOTICE", false);
	}
	if (__LIB_0__::func_898(618699440))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_MARITAL", true);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_MARITAL", false);
	}
	if (__LIB_0__::func_898(-1062490780))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("RARE_ORCHIDS_APPLESEED", true);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("RARE_ORCHIDS_APPLESEED", false);
	}
	if (__LIB_0__::func_898(-683458244))
	{
		__LIB_4__::func_524(203);
		__LIB_4__::func_495(204);
	}
	else
	{
		__LIB_4__::func_524(204);
		__LIB_4__::func_495(203);
	}
	__LIB_17__::func_434(273461605, 79, 2, 4096);
	__LIB_17__::func_434(-868076593, 9, 32, 4096);
	__LIB_17__::func_434(1205826474, 36, 64, 4096);
	if (__LIB_0__::func_898(373691918))
	{
		if (WATER::_GET_WORLD_WATER_TYPE() != 1)
		{
			WATER::_SET_WORLD_WATER_TYPE(1);
		}
		if (!Global_43891)
		{
			STREAMING::_SET_GUARMA_WORLDHORIZON_ACTIVE(true);
			MAP::_0xA657EC9DBC6CC900(joaat("GUARMA"));
		}
		MAP::SET_MINIMAP_HIDE_FOW(true);
		MAP::_SET_FOW_UPDATE_PLAYER_OVERRIDE(false, 0);
		Global_43891 = 1;
	}
	else
	{
		if (__LIB_0__::func_898(657241756))
		{
			if (WATER::_GET_WORLD_WATER_TYPE() != 1)
			{
				WATER::_SET_WORLD_WATER_TYPE(1);
			}
		}
		else if (WATER::_GET_WORLD_WATER_TYPE() != 0)
		{
			WATER::_SET_WORLD_WATER_TYPE(0);
		}
		if (Global_43891)
		{
			STREAMING::_SET_GUARMA_WORLDHORIZON_ACTIVE(false);
			MAP::_0xA657EC9DBC6CC900(joaat("WORLD"));
		}
		MAP::SET_MINIMAP_HIDE_FOW(false);
		if (!__LIB_0__::func_13(128))
		{
			MAP::_SET_FOW_UPDATE_PLAYER_OVERRIDE(true, 0);
		}
		Global_43891 = 0;
	}
	if (__LIB_0__::func_898(-2058120606))
	{
		if (__LIB_0__::func_2() == -1)
		{
		}
	}
	else if (__LIB_0__::func_2() == -1)
	{
	}
	if (__LIB_0__::func_898(311708813))
	{
		__LIB_0__::func_401(-1786365097);
		__LIB_4__::func_495(178);
	}
	else
	{
		__LIB_0__::func_400(-1786365097);
		__LIB_4__::func_524(178);
	}
	if (!__LIB_0__::func_898(1399676951))
	{
		__LIB_0__::func_400(1934919499);
		__LIB_0__::func_400(993595204);
		__LIB_0__::func_400(-515396642);
		__LIB_0__::func_400(1291083725);
		__LIB_0__::func_400(joaat("DES_STR_JAIL"));
		if (__LIB_0__::func_898(-1524512402))
		{
			__LIB_0__::func_401(joaat("DES_STR_JAIL"));
			__LIB_4__::func_495(193);
		}
		else
		{
			iVar0 = __LIB_0__::func_895(__LIB_3__::func_918(11));
			if (__LIB_0__::func_27(iVar0, 1))
			{
				__LIB_0__::func_401(joaat("DES_STR_JAIL"));
				__LIB_4__::func_495(193);
			}
			else
			{
				__LIB_4__::func_524(193);
				if (__LIB_0__::func_27(iVar0, 2))
				{
					__LIB_0__::func_401(1291083725);
				}
				else if (__LIB_0__::func_27(iVar0, 4))
				{
					__LIB_0__::func_401(993595204);
				}
			}
		}
	}
	if (__LIB_0__::func_898(1497516462))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_25(68, 16);
			__LIB_0__::func_121(557, 32);
			__LIB_0__::func_121(563, 32);
			__LIB_0__::func_121(560, 32);
			__LIB_0__::func_121(561, 32);
			__LIB_0__::func_121(562, 32);
			__LIB_0__::func_123(565, 32);
			__LIB_10__::func_823(565, 0);
			__LIB_0__::func_123(564, 32);
			__LIB_10__::func_823(564, 0);
			__LIB_0__::func_123(554, 32);
			__LIB_10__::func_823(554, 0);
			__LIB_0__::func_123(555, 32);
			__LIB_10__::func_823(555, 0);
			__LIB_0__::func_123(556, 32);
			__LIB_10__::func_823(556, 0);
		}
		__LIB_4__::func_524(199);
		__LIB_4__::func_495(198);
	}
	else if (__LIB_0__::func_898(2016141805))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_25(68, 16);
			__LIB_0__::func_121(557, 32);
			__LIB_0__::func_121(563, 32);
			__LIB_0__::func_123(560, 32);
			__LIB_10__::func_823(560, 0);
			__LIB_0__::func_123(561, 32);
			__LIB_10__::func_823(561, 0);
			__LIB_0__::func_123(562, 32);
			__LIB_10__::func_823(562, 0);
			__LIB_0__::func_123(554, 32);
			__LIB_10__::func_823(554, 0);
			__LIB_0__::func_123(555, 32);
			__LIB_10__::func_823(555, 0);
			__LIB_0__::func_123(556, 32);
			__LIB_10__::func_823(556, 0);
			__LIB_0__::func_123(565, 32);
			__LIB_10__::func_823(565, 0);
			__LIB_0__::func_123(564, 32);
			__LIB_10__::func_823(564, 0);
		}
		__LIB_4__::func_524(199);
		__LIB_4__::func_524(198);
	}
	else if (__LIB_0__::func_898(1010885152))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_24(68, 16);
			__LIB_10__::func_823(554, 0);
			__LIB_10__::func_823(555, 0);
			__LIB_10__::func_823(556, 0);
			__LIB_10__::func_823(557, 0);
			__LIB_10__::func_823(563, 0);
			__LIB_10__::func_823(560, 0);
			__LIB_10__::func_823(561, 0);
			__LIB_10__::func_823(562, 0);
			__LIB_10__::func_823(565, 0);
			__LIB_10__::func_823(564, 0);
		}
		__LIB_4__::func_524(199);
		__LIB_4__::func_495(198);
	}
	else if (__LIB_0__::func_898(-502324015))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_25(68, 16);
			__LIB_0__::func_123(554, 32);
			__LIB_0__::func_123(555, 32);
			__LIB_0__::func_123(556, 32);
			__LIB_0__::func_123(557, 32);
			__LIB_0__::func_123(563, 32);
			__LIB_10__::func_823(554, 0);
			__LIB_10__::func_823(555, 0);
			__LIB_10__::func_823(556, 0);
			__LIB_10__::func_823(557, 0);
			__LIB_10__::func_823(563, 0);
			__LIB_0__::func_121(565, 32);
			__LIB_0__::func_121(564, 32);
			__LIB_0__::func_121(560, 32);
			__LIB_0__::func_121(561, 32);
			__LIB_0__::func_121(562, 32);
		}
		__LIB_4__::func_524(198);
		__LIB_4__::func_495(199);
	}
	if (__LIB_0__::func_898(440043364))
	{
		__LIB_0__::func_400(376665102);
	}
	else
	{
		__LIB_0__::func_401(376665102);
	}
	if (__LIB_0__::func_898(-1425209566))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_121(800, 32);
		}
	}
	else if (__LIB_0__::func_2() == -1)
	{
		__LIB_0__::func_123(800, 32);
		__LIB_10__::func_823(800, 0);
	}
	__LIB_10__::func_797();
	if (__LIB_0__::func_898(0))
	{
		__LIB_0__::func_401(1149195254);
		__LIB_0__::func_401(2016081133);
		__LIB_0__::func_401(363257921);
		__LIB_0__::func_401(58066174);
		__LIB_0__::func_401(-1521525254);
		__LIB_0__::func_401(-761186147);
		__LIB_0__::func_401(-1872939092);
		__LIB_0__::func_401(-964156415);
		__LIB_17__::func_435(0);
		TASK::SET_SCENARIO_GROUP_ENABLED("BRA_MANOR_UNTIL_BRAITHWAITES_3", true);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-842138123, false);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1230241088, true);
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_braithwaite_manor_burnt", false, true);
		__LIB_3__::func_124(-434746250, 1);
		if (__LIB_0__::func_898(-699277634))
		{
			__LIB_0__::func_401(-2137633069);
			__LIB_4__::func_495(121);
			__LIB_4__::func_495(123);
			__LIB_4__::func_495(125);
			if (__LIB_0__::func_2() == -1)
			{
				__LIB_0__::func_24(93, 16);
				__LIB_8__::func_922(93);
			}
			if (!PED::_0x91A5F9CBEBB9D936(Global_1934765.f_1) && !bParam1)
			{
				Global_1934765.f_1 = PED::ADD_SCENARIO_BLOCKING_AREA(989.8797f, -1787.977f, 44.5697f, 1034.25f, -1752.225f, 59.7424f, 0, 15);
			}
		}
		else
		{
			__LIB_0__::func_401(1944013855);
			__LIB_4__::func_495(120);
			__LIB_4__::func_495(122);
			__LIB_4__::func_495(124);
			__LIB_0__::func_25(93, 16);
			if (PED::_0x91A5F9CBEBB9D936(Global_1934765.f_1))
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_1, false);
				Global_1934765.f_1 = 0;
			}
		}
	}
	else if (__LIB_0__::func_898(473295046))
	{
		__LIB_0__::func_401(-1643869063);
		__LIB_0__::func_401(-1108618313);
		__LIB_0__::func_401(-787678727);
		__LIB_17__::func_435(0);
		TASK::SET_SCENARIO_GROUP_ENABLED("BRA_MANOR_UNTIL_BRAITHWAITES_3", false);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-842138123, true);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1230241088, true);
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_braithwaite_manor_burnt", true, true);
		__LIB_3__::func_124(-434746250, 1);
		if (__LIB_0__::func_898(-699277634))
		{
			__LIB_5__::func_441("bra_man_burned_bra3");
		}
		else
		{
			__LIB_5__::func_441("bra_man_burned");
		}
		__LIB_0__::func_25(93, 16);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_121(621, 32);
			__LIB_0__::func_121(622, 32);
			__LIB_0__::func_121(623, 32);
			__LIB_0__::func_121(624, 32);
			__LIB_0__::func_123(909, 32);
			__LIB_10__::func_823(909, 0);
			__LIB_0__::func_123(910, 32);
			__LIB_10__::func_823(910, 0);
			__LIB_0__::func_123(911, 32);
			__LIB_10__::func_823(911, 0);
			__LIB_0__::func_123(912, 32);
			__LIB_10__::func_823(912, 0);
			__LIB_0__::func_123(913, 32);
			__LIB_10__::func_823(913, 0);
			__LIB_0__::func_123(914, 32);
			__LIB_10__::func_823(914, 0);
			__LIB_0__::func_123(617, 32);
			__LIB_10__::func_823(617, 0);
			__LIB_0__::func_123(618, 32);
			__LIB_10__::func_823(618, 0);
			__LIB_0__::func_123(619, 32);
			__LIB_10__::func_823(619, 0);
			__LIB_0__::func_123(620, 32);
			__LIB_10__::func_823(620, 0);
			__LIB_0__::func_123(915, 32);
			__LIB_10__::func_823(915, 0);
			__LIB_0__::func_123(916, 32);
			__LIB_10__::func_823(916, 0);
			__LIB_0__::func_123(917, 32);
			__LIB_10__::func_823(917, 0);
			__LIB_0__::func_123(625, 32);
			__LIB_10__::func_823(625, 0);
		}
		if (PED::_0x91A5F9CBEBB9D936(Global_1934765.f_1))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_1, false);
			Global_1934765.f_1 = 0;
		}
	}
	else if (__LIB_0__::func_898(-1738165526))
	{
		__LIB_0__::func_401(-1643869063);
		__LIB_0__::func_401(622597018);
		__LIB_0__::func_401(1649275138);
		__LIB_17__::func_435(1);
		__LIB_5__::func_441("bra_man_endsum");
		TASK::SET_SCENARIO_GROUP_ENABLED("BRA_MANOR_UNTIL_BRAITHWAITES_3", false);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-842138123, true);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1230241088, false);
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_braithwaite_manor_burnt", true, true);
		__LIB_3__::func_123(-434746250, 1);
		__LIB_0__::func_24(93, 16);
		if (!PED::_0x91A5F9CBEBB9D936(Global_1934765.f_1) && !bParam1)
		{
			Global_1934765.f_1 = PED::ADD_SCENARIO_BLOCKING_AREA(989.8797f, -1787.977f, 44.5697f, 1034.25f, -1752.225f, 59.7424f, 0, 15);
		}
	}
	if (!__LIB_0__::func_898(-270094635))
	{
		__LIB_0__::func_401(1355914142);
		if (!VOLUME::_DOES_VOLUME_EXIST(Global_1934765.f_16))
		{
			Global_1934765.f_16 = VOLUME::_CREATE_VOLUME_CYLINDER(2846.517f, -1300.918f, 45.457f, 0f, 0f, -42f, 4.584f, 3.041f, 10.079f);
			PATHFIND::_0x19C7567D2F2287D6(Global_1934765.f_16, 7);
		}
	}
	else
	{
		__LIB_0__::func_400(1355914142);
		if (VOLUME::_DOES_VOLUME_EXIST(Global_1934765.f_16))
		{
			PATHFIND::_0x2C87C3E1C7B96EE2(Global_1934765.f_16);
			VOLUME::_DELETE_VOLUME(Global_1934765.f_16);
		}
	}
	if (__LIB_0__::func_898(-1666278201))
	{
		__LIB_0__::func_400(706203603);
		__LIB_0__::func_401(937192284);
	}
	else
	{
		__LIB_0__::func_400(937192284);
		__LIB_0__::func_401(706203603);
	}
	if (__LIB_0__::func_898(405586984))
	{
		__LIB_0__::func_400(-1052023588);
		__LIB_0__::func_400(-745087561);
		__LIB_5__::func_440("old_nav_wall_hole");
		__LIB_5__::func_440("old_nav_nts3_start");
		__LIB_5__::func_440("old_nav_nts3_end");
		__LIB_0__::func_401(944314155);
		__LIB_5__::func_441("old_nav_wall_fill");
	}
	else if (__LIB_0__::func_898(1509509592))
	{
		__LIB_0__::func_400(-1052023588);
		__LIB_5__::func_440("old_nav_wall_fill");
		__LIB_5__::func_440("old_nav_wall_hole");
		__LIB_5__::func_440("old_nav_nts3_end");
		__LIB_0__::func_401(944314155);
		__LIB_0__::func_401(-745087561);
		__LIB_5__::func_441("old_nav_nts3_start");
	}
	else if (__LIB_0__::func_898(-959357075))
	{
		__LIB_0__::func_400(944314155);
		__LIB_5__::func_440("old_nav_wall_fill");
		__LIB_5__::func_440("old_nav_nts3_start");
		__LIB_5__::func_440("old_nav_wall_hole");
		__LIB_0__::func_401(-1052023588);
		__LIB_0__::func_401(-745087561);
		__LIB_5__::func_441("old_nav_nts3_end");
	}
	else if (__LIB_0__::func_898(-1311865656))
	{
		__LIB_0__::func_400(944314155);
		__LIB_0__::func_400(-745087561);
		__LIB_5__::func_440("old_nav_wall_fill");
		__LIB_5__::func_440("old_nav_nts3_start");
		__LIB_5__::func_440("old_nav_nts3_end");
		__LIB_0__::func_401(-1052023588);
		__LIB_5__::func_441("old_nav_wall_hole");
	}
	if (__LIB_0__::func_898(2091701359))
	{
		__LIB_0__::func_401(joaat("VAN_02_HORSEBOAT"));
	}
	else
	{
		__LIB_0__::func_400(joaat("VAN_02_HORSEBOAT"));
	}
	if (__LIB_0__::func_898(1376646519))
	{
		__LIB_0__::func_400(-920505696);
		__LIB_0__::func_400(281772765);
		__LIB_0__::func_400(-516683274);
		__LIB_4__::func_524(135);
		__LIB_4__::func_524(136);
		__LIB_4__::func_524(137);
		__LIB_4__::func_524(138);
		__LIB_5__::func_440("nav_std_bank_start");
		__LIB_5__::func_440("nav_std_bank_shootout");
		__LIB_5__::func_440("nav_std_bank_dest");
		__LIB_4__::func_495(134);
		__LIB_0__::func_401(1017355491);
		__LIB_0__::func_401(-1004522372);
	}
	else if (__LIB_0__::func_898(931649776))
	{
		__LIB_0__::func_400(-920505696);
		__LIB_0__::func_400(-516683274);
		__LIB_4__::func_524(135);
		__LIB_4__::func_524(136);
		__LIB_4__::func_524(137);
		__LIB_4__::func_524(138);
		__LIB_5__::func_440("nav_std_bank_shootout");
		__LIB_5__::func_440("nav_std_bank_dest");
		__LIB_0__::func_401(-1004522372);
		__LIB_4__::func_495(134);
		__LIB_0__::func_401(1017355491);
		__LIB_0__::func_401(281772765);
		__LIB_5__::func_441("nav_std_bank_start");
	}
	else if (__LIB_0__::func_898(-434590080))
	{
		__LIB_0__::func_400(-920505696);
		__LIB_0__::func_400(-516683274);
		__LIB_4__::func_524(134);
		__LIB_4__::func_524(137);
		__LIB_5__::func_440("nav_std_bank_start");
		__LIB_5__::func_440("nav_std_bank_dest");
		__LIB_0__::func_401(-1004522372);
		__LIB_4__::func_495(135);
		__LIB_4__::func_495(136);
		__LIB_4__::func_495(138);
		__LIB_0__::func_401(1017355491);
		__LIB_0__::func_401(281772765);
		__LIB_5__::func_441("nav_std_bank_shootout");
	}
	else if (__LIB_0__::func_898(1743048395))
	{
		__LIB_0__::func_400(1017355491);
		__LIB_0__::func_400(281772765);
		__LIB_0__::func_400(-1004522372);
		__LIB_4__::func_524(134);
		__LIB_4__::func_524(135);
		__LIB_4__::func_495(137);
		__LIB_4__::func_495(138);
		__LIB_5__::func_440("nav_std_bank_start");
		__LIB_5__::func_440("nav_std_bank_shootout");
		__LIB_0__::func_401(-516683274);
		__LIB_0__::func_401(-920505696);
		__LIB_5__::func_441("nav_std_bank_dest");
	}
	else if (__LIB_0__::func_898(449774763))
	{
		__LIB_0__::func_400(1017355491);
		__LIB_0__::func_400(-516683274);
		__LIB_0__::func_400(281772765);
		__LIB_4__::func_524(134);
		__LIB_4__::func_524(135);
		__LIB_4__::func_524(136);
		__LIB_4__::func_524(138);
		__LIB_0__::func_401(-1004522372);
		__LIB_4__::func_495(137);
	}
	if (__LIB_0__::func_898(-764163380))
	{
		__LIB_4__::func_524(140);
		__LIB_4__::func_495(139);
	}
	else
	{
		__LIB_4__::func_524(139);
		__LIB_4__::func_495(140);
	}
	if (__LIB_0__::func_898(-349064220))
	{
		__LIB_0__::func_401(140744122);
		__LIB_0__::func_401(-1795618779);
		__LIB_5__::func_441("hso_post_caravan");
	}
	else
	{
		__LIB_0__::func_400(140744122);
		__LIB_0__::func_400(-1795618779);
		__LIB_5__::func_440("hso_post_caravan");
	}
	if (__LIB_0__::func_898(1776302352))
	{
		__LIB_0__::func_401(1691578074);
		__LIB_0__::func_401(-1936937394);
		__LIB_5__::func_441("dewclm_post_caravan");
	}
	else
	{
		__LIB_0__::func_400(1691578074);
		__LIB_0__::func_400(-1936937394);
		__LIB_5__::func_440("dewclm_post_caravan");
	}
	if (__LIB_0__::func_898(-523522517))
	{
		__LIB_0__::func_401(-1130111983);
		__LIB_0__::func_401(-1015786727);
	}
	else
	{
		__LIB_0__::func_400(-1130111983);
		__LIB_0__::func_400(-1015786727);
	}
	if (__LIB_0__::func_898(1591451572))
	{
		__LIB_0__::func_401(560821199);
	}
	else
	{
		__LIB_0__::func_400(560821199);
	}
	if (__LIB_0__::func_898(1177464213))
	{
		__LIB_0__::func_400(-313831898);
		__LIB_0__::func_400(634920011);
		__LIB_0__::func_401(1694736240);
		__LIB_0__::func_401(2035758463);
	}
	else
	{
		__LIB_0__::func_400(1694736240);
		__LIB_0__::func_400(2035758463);
		__LIB_0__::func_401(-313831898);
		__LIB_0__::func_401(634920011);
	}
	__LIB_10__::func_686();
	__LIB_10__::func_798();
	if (__LIB_0__::func_898(459290420))
	{
		__LIB_0__::func_401(474287981);
		__LIB_0__::func_401(-338553155);
		__LIB_0__::func_401(-1636879249);
		__LIB_0__::func_401(205214733);
		__LIB_0__::func_400(joaat("WEATHERVOL_CHPT1_SNOWSTORM"));
		__LIB_4__::func_495(186);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		__LIB_0__::func_804(-1170496998);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (__LIB_0__::func_28())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(0);
		}
	}
	else if (__LIB_0__::func_898(1884271742))
	{
		__LIB_0__::func_401(867231253);
		__LIB_0__::func_401(-323126593);
		__LIB_0__::func_401(-1316886711);
		__LIB_0__::func_401(205214733);
		__LIB_0__::func_400(joaat("WEATHERVOL_CHPT1_SNOWSTORM"));
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", false);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		GRAPHICS::_SET_SNOW_COVERAGE_TYPE(0);
	}
	else if (__LIB_0__::func_898(-2038424081))
	{
		__LIB_0__::func_401(867231253);
		__LIB_0__::func_401(-1670453688);
		__LIB_0__::func_401(-323126593);
		__LIB_0__::func_401(-1316886711);
		__LIB_0__::func_401(205214733);
		__LIB_5__::func_441("col_nav_wint_end");
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", false);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (__LIB_0__::func_28())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (__LIB_0__::func_898(753127042))
	{
		__LIB_0__::func_401(1248111234);
		__LIB_0__::func_401(-1670453688);
		__LIB_0__::func_401(-323126593);
		__LIB_0__::func_401(-1316886711);
		__LIB_0__::func_401(205214733);
		__LIB_5__::func_441("col_nav_wint2_post");
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", false);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (__LIB_0__::func_28())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (__LIB_0__::func_898(-1187950766))
	{
		__LIB_0__::func_401(474287981);
		__LIB_0__::func_401(-1670453688);
		__LIB_0__::func_401(-1636879249);
		__LIB_0__::func_401(-338553155);
		__LIB_4__::func_495(186);
		__LIB_5__::func_441("col_nav_wint1_cabin_duringfire");
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (__LIB_0__::func_28())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (__LIB_0__::func_898(356365161))
	{
		__LIB_0__::func_401(474287981);
		__LIB_0__::func_401(-1670453688);
		__LIB_0__::func_401(-338553155);
		__LIB_0__::func_401(-1636879249);
		__LIB_5__::func_441("col_nav_wint1_cabin_prefire");
		__LIB_4__::func_495(186);
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (__LIB_0__::func_28())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (__LIB_0__::func_898(-939420910))
	{
		__LIB_0__::func_401(joaat("WIN1_INTRO_CUTSCENE"));
		__LIB_0__::func_401(474287981);
		__LIB_0__::func_401(-717025835);
		__LIB_0__::func_401(-338553155);
		__LIB_0__::func_401(-1636879249);
		__LIB_4__::func_495(186);
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", true);
		__LIB_0__::func_804(-1170496998);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", false);
		if (__LIB_0__::func_28())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	if (__LIB_0__::func_898(-1170496998))
	{
		__LIB_0__::func_401(-1306375743);
		__LIB_0__::func_401(-743781837);
		__LIB_0__::func_401(2114706334);
		if (!VOLUME::_DOES_VOLUME_EXIST(Global_1934765.f_15))
		{
			Global_1934765.f_15 = VOLUME::_CREATE_VOLUME_CYLINDER(-1353.573f, 2424.476f, 306.385f, 0f, 0f, 0f, 0.4f, 0.4f, 1f);
			PATHFIND::_0x19C7567D2F2287D6(Global_1934765.f_15, 7);
		}
		__LIB_4__::func_495(149);
		__LIB_4__::func_495(150);
		__LIB_4__::func_495(151);
		__LIB_4__::func_495(152);
	}
	else
	{
		__LIB_0__::func_400(-1306375743);
		__LIB_0__::func_400(-743781837);
		__LIB_0__::func_400(2114706334);
		if (VOLUME::_DOES_VOLUME_EXIST(Global_1934765.f_15))
		{
			PATHFIND::_0x2C87C3E1C7B96EE2(Global_1934765.f_15);
			VOLUME::_DELETE_VOLUME(Global_1934765.f_15);
		}
		__LIB_4__::func_524(149);
		__LIB_4__::func_524(150);
		__LIB_4__::func_524(151);
		__LIB_4__::func_524(152);
	}
	__LIB_10__::func_687();
	if (__LIB_0__::func_898(2080210939))
	{
		__LIB_0__::func_401(-1055748784);
	}
	else
	{
		__LIB_0__::func_400(-1055748784);
	}
	if (__LIB_0__::func_898(1485195808))
	{
		__LIB_4__::func_495(147);
		__LIB_4__::func_524(148);
	}
	else
	{
		__LIB_4__::func_524(147);
		__LIB_4__::func_495(148);
	}
	if (__LIB_0__::func_898(-1532284567))
	{
		if (TASK::DOES_SCENARIO_GROUP_EXIST("BVH_GANG_hideout"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("BVH_GANG_hideout", true);
		}
	}
	else if (TASK::DOES_SCENARIO_GROUP_EXIST("BVH_GANG_hideout"))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("BVH_GANG_hideout", false);
	}
	if (__LIB_0__::func_898(2127577956))
	{
		__LIB_0__::func_401(joaat("SHA_EXT_SHUTTERS_ODRISCOLLS4"));
		__LIB_0__::func_400(joaat("SHA_EXT_SHUTTERS_NORMAL"));
	}
	else
	{
		__LIB_0__::func_401(joaat("SHA_EXT_SHUTTERS_NORMAL"));
		__LIB_0__::func_400(joaat("SHA_EXT_SHUTTERS_ODRISCOLLS4"));
	}
	if (__LIB_0__::func_898(-524145696))
	{
		__LIB_0__::func_401(809554858);
		__LIB_0__::func_401(1810083187);
		__LIB_0__::func_400(159921796);
		__LIB_0__::func_400(-1739900853);
		__LIB_0__::func_401(2113454609);
		__LIB_0__::func_401(-520163372);
		__LIB_0__::func_400(-90228526);
		__LIB_4__::func_524(17);
		__LIB_4__::func_524(2);
		__LIB_4__::func_524(4);
		__LIB_4__::func_495(1);
		__LIB_4__::func_495(5);
		__LIB_1__::func_948(931206119, 1, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(1783003505, 1, 0, 0, 0, 0, 0, 0);
		__LIB_0__::func_401(-646014955);
		__LIB_5__::func_440("shb_nav_camp_running");
		__LIB_5__::func_440("shb_nav_camp_teardown");
		__LIB_0__::func_400(1265596420);
		__LIB_5__::func_440("shb_nav_camp_01");
		__LIB_5__::func_441("shb_nav_camp_00");
		if (TASK::DOES_SCENARIO_GROUP_EXIST("SHB_HIDEOUT_CONFEDERATES"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("SHB_HIDEOUT_CONFEDERATES", true);
		}
		if (TASK::DOES_SCENARIO_GROUP_EXIST("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT", false);
		}
	}
	else
	{
		__LIB_5__::func_440("shb_nav_camp_00");
		__LIB_5__::func_440("shb_nav_camp_01");
		__LIB_0__::func_400(809554858);
		__LIB_0__::func_400(1265596420);
		__LIB_0__::func_400(1810083187);
		__LIB_1__::func_948(931206119, 0, 0, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(1783003505, 0, 0, 0, 1, 0, 0, 0);
		__LIB_0__::func_400(-646014955);
		if (__LIB_0__::func_898(282809459))
		{
			__LIB_4__::func_524(5);
			__LIB_4__::func_524(17);
			__LIB_4__::func_524(1);
			__LIB_4__::func_524(2);
			__LIB_4__::func_495(4);
			__LIB_0__::func_400(-520163372);
			__LIB_0__::func_401(-90228526);
			__LIB_0__::func_401(159921796);
			__LIB_0__::func_400(-1739900853);
			__LIB_0__::func_400(2113454609);
		}
		else if (__LIB_0__::func_898(1626481264))
		{
			__LIB_4__::func_524(5);
			__LIB_4__::func_524(4);
			__LIB_4__::func_524(1);
			__LIB_4__::func_524(2);
			__LIB_4__::func_495(17);
			__LIB_0__::func_400(-520163372);
			__LIB_0__::func_401(-90228526);
			__LIB_0__::func_401(159921796);
			__LIB_0__::func_401(-1739900853);
			__LIB_0__::func_400(2113454609);
		}
		else
		{
			__LIB_0__::func_400(-90228526);
			__LIB_0__::func_400(159921796);
			__LIB_0__::func_400(-1739900853);
			__LIB_0__::func_401(2113454609);
		}
		__LIB_4__::func_524(1);
		if (TASK::DOES_SCENARIO_GROUP_EXIST("SHB_HIDEOUT_CONFEDERATES"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("SHB_HIDEOUT_CONFEDERATES", false);
		}
		if (TASK::DOES_SCENARIO_GROUP_EXIST("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT", false);
		}
	}
	if (__LIB_0__::func_898(-63926460))
	{
		__LIB_0__::func_400(1929440211);
		__LIB_0__::func_400(2126897368);
		__LIB_0__::func_401(-833857740);
		__LIB_0__::func_401(-825836321);
		if (__LIB_0__::func_898(1665756137))
		{
			__LIB_0__::func_401(-1718055184);
			__LIB_5__::func_440("han_nav_endless_summer");
			__LIB_5__::func_441("han_nav_endless_summer_marston4");
		}
		else
		{
			__LIB_0__::func_400(-1718055184);
			__LIB_5__::func_440("han_nav_endless_summer_marston4");
			__LIB_5__::func_441("han_nav_endless_summer");
		}
	}
	else
	{
		__LIB_0__::func_400(-833857740);
		__LIB_0__::func_400(-825836321);
		__LIB_0__::func_400(-1718055184);
		__LIB_5__::func_440("han_nav_endless_summer");
		__LIB_5__::func_440("han_nav_endless_summer_marston4");
		__LIB_0__::func_401(1929440211);
	}
	if (__LIB_0__::func_898(374115931))
	{
		__LIB_4__::func_495(164);
		__LIB_5__::func_441("bvh_nav_endless_summer");
	}
	else
	{
		__LIB_4__::func_524(164);
		__LIB_5__::func_440("bvh_nav_endless_summer");
	}
	if (__LIB_0__::func_898(1982676972))
	{
		__LIB_4__::func_495(20);
	}
	else
	{
		__LIB_4__::func_524(20);
	}
	if (__LIB_0__::func_898(-2034257789))
	{
		STREAMING::_REQUEST_IMAP(joaat("SIX_POINT_LIGHTS_ON"));
		__LIB_4__::func_524(22);
		__LIB_4__::func_524(24);
		__LIB_4__::func_495(21);
		__LIB_4__::func_495(23);
	}
	else
	{
		STREAMING::_REMOVE_IMAP(joaat("SIX_POINT_LIGHTS_ON"));
		__LIB_4__::func_524(21);
		__LIB_4__::func_524(23);
		__LIB_4__::func_495(22);
		__LIB_4__::func_495(24);
	}
	if (__LIB_0__::func_898(-1014145132))
	{
		__LIB_4__::func_495(200);
	}
	else
	{
		__LIB_4__::func_524(200);
	}
	if (__LIB_0__::func_898(-1840704908))
	{
		__LIB_4__::func_495(201);
	}
	else
	{
		__LIB_4__::func_524(201);
	}
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_898(-1053549743))
		{
			__LIB_10__::func_739(65536, 1);
		}
		else
		{
			__LIB_10__::func_739(65536, 0);
		}
	}
	__LIB_10__::func_799();
	if (__LIB_0__::func_898(-2073072369))
	{
		__LIB_0__::func_401(1343484786);
		__LIB_0__::func_401(1989074279);
		__LIB_5__::func_441("sad3_nav_rhodes_shootout_00");
	}
	else if (__LIB_0__::func_898(-1674179981))
	{
		if (__LIB_0__::func_898(-1053549743))
		{
			__LIB_0__::func_401(1871051363);
			__LIB_0__::func_401(-2144587490);
			__LIB_0__::func_401(1033721560);
			__LIB_5__::func_441("rho_nav_grave_norm_gry3_on");
		}
		else
		{
			__LIB_0__::func_401(1343484786);
			__LIB_0__::func_401(-1671953459);
			__LIB_0__::func_401(1871051363);
			__LIB_0__::func_401(-2144587490);
			__LIB_5__::func_441("rho_nav_grave_norm_gry3_off");
		}
	}
	else if (__LIB_0__::func_898(-1835851517))
	{
		if (__LIB_0__::func_898(-1053549743))
		{
			__LIB_0__::func_401(-2144587490);
			__LIB_0__::func_401(1033721560);
			__LIB_5__::func_441("rho_nav_grave_dug_gry3_on");
		}
		else
		{
			__LIB_0__::func_401(1343484786);
			__LIB_0__::func_401(-1671953459);
			__LIB_0__::func_401(-2144587490);
			__LIB_5__::func_441("rho_nav_grave_dug_gry3_off");
		}
	}
	else if (__LIB_0__::func_898(-1838352012))
	{
		if (__LIB_0__::func_898(-1053549743))
		{
			__LIB_0__::func_401(146746575);
			__LIB_0__::func_401(1033721560);
			__LIB_5__::func_441("rho_nav_grave_norm_gry3_on");
		}
		else
		{
			__LIB_0__::func_401(1343484786);
			__LIB_0__::func_401(-1671953459);
			__LIB_0__::func_401(146746575);
			__LIB_5__::func_441("rho_nav_grave_norm_gry3_off");
		}
	}
	if (__LIB_0__::func_898(-644722288))
	{
		__LIB_0__::func_400(1882605165);
		__LIB_0__::func_401(869642051);
	}
	else
	{
		__LIB_0__::func_400(869642051);
		__LIB_0__::func_401(1882605165);
	}
	if (__LIB_0__::func_898(1691618738))
	{
		__LIB_0__::func_400(-184821200);
		__LIB_0__::func_401(-490818122);
		__LIB_0__::func_401(1412515639);
		__LIB_0__::func_401(-1377139506);
	}
	else
	{
		__LIB_0__::func_401(-184821200);
		__LIB_0__::func_400(-490818122);
		__LIB_0__::func_400(1412515639);
		__LIB_0__::func_400(-1377139506);
	}
	if (__LIB_0__::func_898(-741351766))
	{
		__LIB_4__::func_524(130);
		__LIB_4__::func_495(131);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_12) && !bParam1)
		{
			Global_1934765.f_12 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(1351.383f, -1380.619f, 84.314f, 1.5f, 3f, 1.5f, 347f, false, 7);
		}
	}
	else
	{
		__LIB_4__::func_524(131);
		__LIB_4__::func_495(130);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_12))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_12));
		}
	}
	if (__LIB_0__::func_898(-1717960576))
	{
		__LIB_4__::func_524(133);
		__LIB_4__::func_495(132);
	}
	else if (__LIB_0__::func_898(210001842))
	{
		__LIB_4__::func_524(132);
		__LIB_4__::func_495(133);
	}
	if (__LIB_0__::func_898(-1164215952))
	{
		__LIB_0__::func_400(1603294144);
		__LIB_0__::func_401(349486662);
		__LIB_4__::func_524(144);
		__LIB_4__::func_495(143);
	}
	else
	{
		__LIB_0__::func_400(349486662);
		__LIB_0__::func_401(1603294144);
		__LIB_4__::func_524(143);
		__LIB_4__::func_495(144);
	}
	if (__LIB_0__::func_898(-1236261996))
	{
		__LIB_0__::func_400(897455211);
		__LIB_0__::func_400(774477221);
		__LIB_0__::func_401(1136898294);
		__LIB_0__::func_401(1097534152);
		__LIB_4__::func_524(146);
		__LIB_4__::func_495(145);
	}
	else
	{
		__LIB_0__::func_400(1136898294);
		__LIB_0__::func_400(1097534152);
		__LIB_0__::func_401(897455211);
		__LIB_0__::func_401(774477221);
		__LIB_4__::func_524(145);
		__LIB_4__::func_495(146);
	}
	if (__LIB_0__::func_898(-1799960545))
	{
		__LIB_4__::func_524(170);
		__LIB_4__::func_495(169);
	}
	else
	{
		__LIB_4__::func_524(169);
		__LIB_4__::func_495(170);
	}
	if (__LIB_0__::func_898(-628542779))
	{
		__LIB_4__::func_495(180);
	}
	else
	{
		__LIB_4__::func_524(180);
	}
	if (__LIB_0__::func_898(1500064347))
	{
		__LIB_0__::func_401(724436573);
		__LIB_0__::func_400(-1475403379);
	}
	else
	{
		__LIB_0__::func_401(-1475403379);
		__LIB_0__::func_400(724436573);
	}
	if (__LIB_0__::func_898(-1741667789))
	{
		__LIB_4__::func_524(179);
	}
	else
	{
		__LIB_4__::func_495(179);
	}
	if (__LIB_0__::func_898(-853383233))
	{
		if (__LIB_0__::func_2() == -1)
		{
			if (!__LIB_0__::func_117(70, 32))
			{
				__LIB_0__::func_123(70, 32);
				__LIB_8__::func_783(70);
			}
		}
	}
	else if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_117(70, 32))
		{
			__LIB_0__::func_121(70, 32);
			__LIB_5__::func_458(70);
		}
	}
	if (__LIB_0__::func_898(-334729750))
	{
		__LIB_0__::func_401(1138093977);
		__LIB_5__::func_441("wat_nav_grave");
	}
	else
	{
		__LIB_0__::func_400(1138093977);
		__LIB_5__::func_440("wat_nav_grave");
	}
	if (__LIB_0__::func_898(1926308480))
	{
		__LIB_0__::func_400(1849913721);
		__LIB_0__::func_401(573576705);
	}
	else if (__LIB_0__::func_898(280705402))
	{
		__LIB_0__::func_401(1849913721);
		__LIB_0__::func_400(573576705);
	}
	else if (__LIB_0__::func_898(1766284049))
	{
		__LIB_0__::func_400(1849913721);
		__LIB_0__::func_400(573576705);
	}
	if (__LIB_0__::func_898(-150493654))
	{
		__LIB_0__::func_400(-848315456);
		__LIB_0__::func_400(105426297);
		__LIB_0__::func_400(2095421392);
		__LIB_0__::func_400(-1614141377);
		__LIB_0__::func_400(45121961);
		__LIB_0__::func_400(-7594117);
		__LIB_0__::func_400(1388161943);
		__LIB_0__::func_401(-642132908);
		PATHFIND::_0xAFE2AE66F6251C66(-1177.246f, -19.60884f, 38f, -1170.786f, -12.71267f, 42f, 6, 1);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[0]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]) && !bParam1)
		{
			Global_1934765.f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1182.66f, -30.405f, 44.453f, 1f, 1f, 6f, 0f, false, 7);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[1]));
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[2]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[2]));
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[3]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[3]));
		}
		__LIB_5__::func_440("utp2_nav_tree_fallen");
	}
	else if (__LIB_0__::func_898(-1271608261))
	{
		__LIB_0__::func_400(-642132908);
		__LIB_0__::func_400(105426297);
		__LIB_0__::func_400(-1614141377);
		__LIB_0__::func_400(45121961);
		__LIB_0__::func_400(-7594117);
		__LIB_0__::func_400(1388161943);
		__LIB_0__::func_401(2095421392);
		__LIB_0__::func_401(-848315456);
		PATHFIND::_0xAFE2AE66F6251C66(-1176.011f, -32.44423f, 38f, -1186.829f, -18.19722f, 45f, 6, 1);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[0]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]) && !bParam1)
		{
			Global_1934765.f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1179.545f, -25.3265f, 42.664f, 1f, 13f, 1f, 15f, false, 7);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[1]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]) && !bParam1)
		{
			Global_1934765.f_5[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1161.862f, -27.8574f, 40.3872f, 1f, 1f, 9f, -7.41f, false, 7);
		}
		__LIB_5__::func_440("utp2_nav_tree_fallen");
	}
	else if (__LIB_0__::func_898(1846061697))
	{
		__LIB_0__::func_400(-642132908);
		__LIB_0__::func_400(2095421392);
		__LIB_0__::func_400(105426297);
		__LIB_0__::func_400(-7594117);
		__LIB_0__::func_401(45121961);
		__LIB_0__::func_401(-1614141377);
		__LIB_0__::func_401(-848315456);
		__LIB_0__::func_401(1388161943);
		PATHFIND::_0xAFE2AE66F6251C66(-1176.011f, -32.44423f, 38f, -1186.829f, -18.19722f, 45f, 6, 1);
		PATHFIND::_0xAFE2AE66F6251C66(-1174.544f, -4.74933f, 38f, -1163.424f, -13.43965f, 42f, 6, 1);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[0]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]) && !bParam1)
		{
			Global_1934765.f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1179.545f, -25.3265f, 41.664f, 1f, 13f, 3f, 15f, false, 7);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[1]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]) && !bParam1)
		{
			Global_1934765.f_5[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1161.862f, -27.8574f, 40.3872f, 1f, 1f, 9f, -7.41f, false, 7);
		}
		__LIB_5__::func_441("utp2_nav_tree_fallen");
	}
	else if (__LIB_0__::func_898(-1145519186))
	{
		__LIB_0__::func_400(-642132908);
		__LIB_0__::func_400(-848315456);
		__LIB_0__::func_400(-1614141377);
		__LIB_0__::func_400(45121961);
		__LIB_0__::func_400(2095421392);
		__LIB_0__::func_400(-7594117);
		__LIB_0__::func_400(1388161943);
		__LIB_0__::func_401(105426297);
		PATHFIND::_0xAFE2AE66F6251C66(-1177.246f, -19.60884f, 38f, -1170.786f, -12.71267f, 42f, 6, 1);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[0]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]) && !bParam1)
		{
			Global_1934765.f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1182.66f, -30.405f, 44.453f, 1f, 1f, 6f, 0f, false, 7);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[1]));
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[2]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[2]));
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[3]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[3]));
		}
		__LIB_5__::func_440("utp2_nav_tree_fallen");
	}
	if (!__LIB_2__::func_774(51))
	{
		if (__LIB_0__::func_898(1485494263))
		{
			__LIB_0__::func_400(1672215059);
			__LIB_0__::func_400(-1177027698);
			__LIB_0__::func_400(23211744);
			__LIB_0__::func_400(604668055);
			__LIB_0__::func_400(joaat("DES_NTVS2_TREEFALL"));
			__LIB_0__::func_401(1708195603);
			__LIB_5__::func_441("nts2_fallen_tree_ridge");
		}
		else
		{
			__LIB_0__::func_400(23211744);
			__LIB_0__::func_400(604668055);
			__LIB_0__::func_400(1708195603);
			__LIB_0__::func_401(joaat("DES_NTVS2_TREEFALL"));
			__LIB_0__::func_401(1672215059);
			__LIB_0__::func_401(-1177027698);
			__LIB_5__::func_440("nts2_fallen_tree_ridge");
		}
	}
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_898(-811637947))
		{
			if (__LIB_0__::func_117(497, 32))
			{
				__LIB_0__::func_121(497, 32);
				__LIB_5__::func_458(497);
			}
			if (__LIB_0__::func_117(498, 32))
			{
				__LIB_0__::func_121(498, 32);
				__LIB_5__::func_458(498);
			}
		}
		else
		{
			if (!__LIB_0__::func_117(497, 32))
			{
				__LIB_0__::func_123(497, 32);
				__LIB_8__::func_783(497);
			}
			if (!__LIB_0__::func_117(498, 32))
			{
				__LIB_0__::func_123(498, 32);
				__LIB_8__::func_783(498);
			}
		}
	}
	if (__LIB_0__::func_898(106479759))
	{
		__LIB_0__::func_400(-1403908542);
		__LIB_0__::func_400(1598834669);
		__LIB_0__::func_400(1299817544);
		__LIB_0__::func_400(1204787444);
		__LIB_0__::func_400(66523468);
		__LIB_0__::func_400(2040259178);
		__LIB_0__::func_400(1947806010);
		__LIB_5__::func_440("str_nav_construction_stage_0");
		__LIB_5__::func_440("str_nav_construction_stage_1");
		__LIB_5__::func_440("str_nav_construction_stage_2");
		__LIB_5__::func_440("str_nav_construction_stage_3");
		__LIB_0__::func_401(1924458218);
		__LIB_5__::func_441("utp1_bridge_cover");
	}
	else
	{
		__LIB_0__::func_400(1924458218);
		__LIB_5__::func_440("utp1_bridge_cover");
		if (__LIB_0__::func_898(198200492))
		{
			__LIB_0__::func_400(1299817544);
			__LIB_0__::func_400(1204787444);
			__LIB_0__::func_400(66523468);
			__LIB_0__::func_400(2040259178);
			__LIB_0__::func_400(1947806010);
			__LIB_5__::func_440("str_nav_construction_stage_1");
			__LIB_5__::func_440("str_nav_construction_stage_2");
			__LIB_5__::func_440("str_nav_construction_stage_3");
			__LIB_0__::func_401(-1403908542);
			__LIB_0__::func_401(1598834669);
			__LIB_5__::func_441("str_nav_construction_stage_0");
			if (__LIB_0__::func_2() == -1)
			{
				PERSCHAR::_0x187D65F3AEC5D679(joaat("STR_WOOD_CHOP_WIFE"), "Strawberry/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", true);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", false);
		}
		else if (__LIB_0__::func_898(-1124061431))
		{
			__LIB_0__::func_400(-1403908542);
			__LIB_0__::func_400(1598834669);
			__LIB_0__::func_400(1204787444);
			__LIB_0__::func_400(66523468);
			__LIB_0__::func_400(2040259178);
			__LIB_0__::func_400(1947806010);
			__LIB_5__::func_440("str_nav_construction_stage_0");
			__LIB_5__::func_440("str_nav_construction_stage_2");
			__LIB_5__::func_440("str_nav_construction_stage_3");
			__LIB_0__::func_401(1299817544);
			__LIB_5__::func_441("str_nav_construction_stage_1");
			if (__LIB_0__::func_2() == -1)
			{
				PERSCHAR::_0x187D65F3AEC5D679(joaat("STR_WOOD_CHOP_WIFE"), "Strawberry/Construction_House_Active/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", false);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", true);
		}
		else if (__LIB_0__::func_898(52706132))
		{
			__LIB_0__::func_400(-1403908542);
			__LIB_0__::func_400(1598834669);
			__LIB_0__::func_400(1299817544);
			__LIB_0__::func_400(66523468);
			__LIB_0__::func_400(2040259178);
			__LIB_0__::func_400(1947806010);
			__LIB_5__::func_440("str_nav_construction_stage_0");
			__LIB_5__::func_440("str_nav_construction_stage_1");
			__LIB_5__::func_440("str_nav_construction_stage_3");
			__LIB_0__::func_401(1204787444);
			__LIB_5__::func_441("str_nav_construction_stage_2");
			if (__LIB_0__::func_2() == -1)
			{
				PERSCHAR::_0x187D65F3AEC5D679(joaat("STR_WOOD_CHOP_WIFE"), "Strawberry/Construction_House_Active/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", false);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", true);
		}
		else if (__LIB_0__::func_898(-259123672))
		{
			__LIB_0__::func_400(-1403908542);
			__LIB_0__::func_400(1598834669);
			__LIB_0__::func_400(1299817544);
			__LIB_0__::func_400(1204787444);
			__LIB_5__::func_440("str_nav_construction_stage_0");
			__LIB_5__::func_440("str_nav_construction_stage_1");
			__LIB_5__::func_440("str_nav_construction_stage_2");
			__LIB_0__::func_401(66523468);
			__LIB_0__::func_401(2040259178);
			__LIB_0__::func_401(1947806010);
			__LIB_5__::func_441("str_nav_construction_stage_3");
			if (__LIB_0__::func_2() == -1)
			{
				PERSCHAR::_0x187D65F3AEC5D679(joaat("STR_WOOD_CHOP_WIFE"), "Strawberry/Construction_House_Active/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", false);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", true);
		}
	}
	if (__LIB_0__::func_898(-356975260))
	{
		__LIB_0__::func_400(73781828);
		__LIB_0__::func_401(-391567710);
	}
	else
	{
		__LIB_0__::func_400(-391567710);
		__LIB_0__::func_401(73781828);
	}
	if (__LIB_0__::func_898(-2106214197))
	{
	}
	else if (__LIB_0__::func_898(-1029225159))
	{
	}
	if (__LIB_0__::func_898(757752139))
	{
		__LIB_4__::func_524(168);
	}
	else
	{
		__LIB_4__::func_495(168);
	}
	if (__LIB_0__::func_898(1609506757))
	{
		__LIB_0__::func_401(-205116461);
		__LIB_0__::func_401(-1490034522);
		__LIB_0__::func_400(-1473336090);
		__LIB_0__::func_400(-1013403664);
		if (!Global_1934765.f_289)
		{
			Global_1934765.f_401 = -1;
			Global_1934765.f_289 = 1;
		}
		__LIB_4__::func_524(158);
		if (!__LIB_2__::func_774(47))
		{
			__LIB_4__::func_495(159);
		}
		else
		{
			__LIB_4__::func_524(159);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_14))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_14));
		}
		if (__LIB_0__::func_898(439465264))
		{
			__LIB_4__::func_495(155);
			__LIB_4__::func_524(154);
			__LIB_4__::func_495(157);
			__LIB_4__::func_524(156);
		}
		else
		{
			__LIB_4__::func_495(156);
			__LIB_9__::func_925(156);
			__LIB_4__::func_495(154);
			__LIB_4__::func_524(155);
			__LIB_4__::func_524(157);
		}
	}
	else
	{
		__LIB_0__::func_401(-1473336090);
		__LIB_0__::func_401(-1013403664);
		__LIB_0__::func_400(-205116461);
		__LIB_0__::func_400(-1490034522);
		Global_1934765.f_289 = 0;
		__LIB_4__::func_524(154);
		__LIB_4__::func_524(155);
		__LIB_4__::func_524(157);
		__LIB_4__::func_524(156);
		__LIB_4__::func_524(159);
		__LIB_4__::func_495(158);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_14) && !bParam1)
		{
			Global_1934765.f_14 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(2698.198f, -1187.154f, 51.26f, 3.878f, 0.326f, 3.352f, __LIB_3__::func_745(-179f), false, 7);
		}
	}
	if (__LIB_0__::func_898(-2021582629) && __LIB_0__::func_181())
	{
		__LIB_0__::func_400(432272547);
		__LIB_0__::func_401(204868257);
		__LIB_5__::func_441("nav_sdn_fundraiser");
	}
	else
	{
		__LIB_0__::func_400(204868257);
		__LIB_0__::func_401(432272547);
		__LIB_5__::func_440("nav_sdn_fundraiser");
	}
	if (__LIB_0__::func_898(-1232809834))
	{
		__LIB_0__::func_400(206289712);
		__LIB_0__::func_401(-1225383143);
	}
	else
	{
		__LIB_0__::func_400(-1225383143);
		__LIB_0__::func_401(206289712);
	}
	if (__LIB_0__::func_898(141950038))
	{
		__LIB_0__::func_400(-473077489);
		__LIB_0__::func_401(619024057);
		__LIB_0__::func_401(-836433697);
		__LIB_3__::func_124(586229709, 1);
	}
	else
	{
		__LIB_0__::func_400(-836433697);
		__LIB_0__::func_400(619024057);
		__LIB_0__::func_401(-473077489);
		__LIB_3__::func_123(586229709, 1);
	}
	if (__LIB_0__::func_898(544152906))
	{
		__LIB_0__::func_400(1821956151);
		__LIB_0__::func_401(-704461521);
	}
	else
	{
		__LIB_0__::func_400(-704461521);
		__LIB_0__::func_401(1821956151);
	}
	if (__LIB_0__::func_898(26054262))
	{
		__LIB_4__::func_495(166);
	}
	else
	{
		__LIB_4__::func_524(166);
	}
	if (__LIB_0__::func_898(-503955743))
	{
		__LIB_4__::func_495(167);
	}
	else
	{
		__LIB_4__::func_524(167);
	}
	if (__LIB_0__::func_898(945612176))
	{
		__LIB_4__::func_495(161);
		__LIB_4__::func_495(163);
		__LIB_4__::func_524(160);
		__LIB_4__::func_524(162);
	}
	else
	{
		__LIB_4__::func_495(160);
		__LIB_4__::func_495(162);
		__LIB_4__::func_524(161);
		__LIB_4__::func_524(163);
	}
	if (__LIB_0__::func_898(-1706438978))
	{
		__LIB_4__::func_495(142);
		__LIB_4__::func_524(141);
	}
	else
	{
		__LIB_4__::func_524(141);
		__LIB_4__::func_524(142);
	}
	if (__LIB_0__::func_898(94263042))
	{
		__LIB_0__::func_401(-1499162505);
		__LIB_0__::func_401(joaat("AMB_CAMP_GRZ_FINALE2"));
		if (__LIB_0__::func_898(-2106445152))
		{
			__LIB_0__::func_400(-1832103801);
			__LIB_4__::func_524(230);
			__LIB_5__::func_440("fin2_micah_hideout");
			__LIB_5__::func_441("fin2_micah_hideout_abandon");
		}
		else
		{
			__LIB_0__::func_401(-1832103801);
			__LIB_4__::func_495(230);
			__LIB_5__::func_440("fin2_micah_hideout_abandon");
			__LIB_5__::func_441("fin2_micah_hideout");
		}
	}
	else
	{
		__LIB_0__::func_400(-1499162505);
		__LIB_0__::func_400(joaat("AMB_CAMP_GRZ_FINALE2"));
		__LIB_0__::func_400(-1832103801);
		__LIB_4__::func_524(230);
		__LIB_5__::func_440("fin2_micah_hideout");
		__LIB_5__::func_440("fin2_micah_hideout_abandon");
	}
	if (__LIB_0__::func_898(-25901845))
	{
		__LIB_0__::func_400(-468702164);
		__LIB_4__::func_524(192);
		__LIB_0__::func_401(-1436188587);
		__LIB_4__::func_495(191);
	}
	else
	{
		__LIB_0__::func_400(-1436188587);
		__LIB_4__::func_524(191);
		__LIB_0__::func_401(-468702164);
		__LIB_4__::func_495(192);
	}
	if (__LIB_0__::func_898(-75024673))
	{
		__LIB_0__::func_401(1573766063);
	}
	else
	{
		__LIB_0__::func_400(1573766063);
	}
	if (__LIB_0__::func_898(1250636944))
	{
		__LIB_0__::func_401(-892659042);
	}
	else
	{
		__LIB_0__::func_400(-892659042);
	}
	if (__LIB_0__::func_898(-1831552326))
	{
		__LIB_4__::func_495(194);
		__LIB_4__::func_524(195);
	}
	else
	{
		__LIB_4__::func_495(195);
		__LIB_4__::func_524(194);
	}
	if (__LIB_0__::func_898(-1151084372))
	{
		__LIB_4__::func_495(196);
	}
	else
	{
		__LIB_4__::func_524(196);
	}
	if (__LIB_0__::func_898(1064154891))
	{
		__LIB_4__::func_495(19);
		__LIB_4__::func_524(18);
	}
	else
	{
		__LIB_4__::func_495(18);
		__LIB_4__::func_524(19);
	}
	if (__LIB_0__::func_898(1822001510))
	{
	}
	else if (__LIB_0__::func_898(-1612662716))
	{
	}
	if (__LIB_0__::func_898(689930684))
	{
		__LIB_4__::func_495(176);
	}
	else
	{
		__LIB_4__::func_524(176);
	}
	if (__LIB_0__::func_898(-1957523409))
	{
		__LIB_4__::func_495(177);
	}
	else
	{
		__LIB_4__::func_524(177);
	}
	if (__LIB_0__::func_898(1306158345))
	{
		__LIB_0__::func_400(943998860);
		__LIB_0__::func_400(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		__LIB_0__::func_400(580700069);
		__LIB_0__::func_400(1347068672);
		__LIB_5__::func_440("HKK_Trashed_Wagons");
		__LIB_5__::func_440("HKK_Part_Fixed");
		__LIB_5__::func_440("HKK_Camp_Only");
		__LIB_10__::func_740(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	else if (__LIB_0__::func_898(1952610440))
	{
		__LIB_0__::func_400(943998860);
		__LIB_0__::func_401(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		__LIB_0__::func_401(580700069);
		__LIB_0__::func_401(1347068672);
		__LIB_5__::func_440("HKK_Part_Fixed");
		__LIB_5__::func_440("HKK_Camp_Only");
		__LIB_5__::func_441("HKK_Trashed_Wagons");
		__LIB_10__::func_741(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	else if (__LIB_0__::func_898(-223469678))
	{
		__LIB_0__::func_401(943998860);
		__LIB_0__::func_401(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		__LIB_0__::func_400(580700069);
		__LIB_0__::func_400(1347068672);
		__LIB_5__::func_440("HKK_Trashed_Wagons");
		__LIB_5__::func_440("HKK_Camp_Only");
		__LIB_5__::func_441("HKK_Part_Fixed");
		__LIB_10__::func_741(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	else if (__LIB_0__::func_898(-404698347))
	{
		__LIB_0__::func_401(943998860);
		__LIB_0__::func_400(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		__LIB_0__::func_400(580700069);
		__LIB_0__::func_400(1347068672);
		__LIB_5__::func_440("HKK_Trashed_Wagons");
		__LIB_5__::func_440("HKK_Part_Fixed");
		__LIB_5__::func_441("HKK_Camp_Only");
		__LIB_10__::func_741(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	else if (__LIB_0__::func_898(1517904467))
	{
		__LIB_0__::func_400(943998860);
		__LIB_0__::func_400(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		__LIB_0__::func_400(580700069);
		__LIB_0__::func_400(1347068672);
		__LIB_5__::func_440("HKK_Trashed_Wagons");
		__LIB_5__::func_440("HKK_Part_Fixed");
		__LIB_5__::func_440("HKK_Camp_Only");
		__LIB_10__::func_740(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	if (__LIB_0__::func_898(-1405998267))
	{
		__LIB_0__::func_401(2015532863);
	}
	else
	{
		__LIB_0__::func_400(2015532863);
	}
	if (__LIB_0__::func_898(-468693731))
	{
		__LIB_0__::func_400(-800942395);
		__LIB_0__::func_401(-741366935);
	}
	else
	{
		__LIB_0__::func_400(-741366935);
		__LIB_0__::func_401(-800942395);
	}
	if (__LIB_0__::func_898(-238080464))
	{
		__LIB_0__::func_401(-1579403437);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_10) && !bParam1)
		{
			Global_1934765.f_10 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-304.439f, 783.08f, 117.11f, 1.909f, 4.17f, 3f, 9.6f, false, 7);
		}
	}
	else
	{
		__LIB_0__::func_400(-1579403437);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_10))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_10));
		}
	}
	if (__LIB_0__::func_898(1607768502))
	{
		__LIB_0__::func_401(808576710);
		__LIB_0__::func_400(-775951892);
		__LIB_0__::func_400(1547403545);
		__LIB_0__::func_400(1431947993);
		__LIB_0__::func_400(137316925);
		__LIB_0__::func_400(-660075384);
	}
	else if (__LIB_0__::func_898(-1852605133))
	{
		__LIB_0__::func_401(1547403545);
		__LIB_0__::func_400(-775951892);
		__LIB_0__::func_400(808576710);
		__LIB_0__::func_400(1431947993);
		__LIB_0__::func_400(137316925);
		__LIB_0__::func_400(-660075384);
	}
	else if (__LIB_0__::func_898(-129643890))
	{
		__LIB_0__::func_401(-660075384);
		__LIB_0__::func_400(-775951892);
		__LIB_0__::func_400(1547403545);
		__LIB_0__::func_400(808576710);
		__LIB_0__::func_400(1431947993);
		__LIB_0__::func_400(137316925);
	}
	else if (__LIB_0__::func_898(-1433686245))
	{
		__LIB_0__::func_401(137316925);
		__LIB_0__::func_400(-775951892);
		__LIB_0__::func_400(1547403545);
		__LIB_0__::func_400(808576710);
		__LIB_0__::func_400(1431947993);
		__LIB_0__::func_400(-660075384);
	}
	else
	{
		__LIB_0__::func_401(-775951892);
		__LIB_0__::func_400(1547403545);
		__LIB_0__::func_400(808576710);
		__LIB_0__::func_400(1431947993);
		__LIB_0__::func_400(137316925);
		__LIB_0__::func_400(-660075384);
	}
	if (__LIB_0__::func_898(192515737))
	{
		__LIB_0__::func_401(1104143966);
		__LIB_0__::func_400(-2142987163);
		__LIB_0__::func_400(1027093524);
		__LIB_0__::func_400(1879779330);
		__LIB_0__::func_400(-1617847332);
		__LIB_0__::func_400(317070801);
	}
	else if (__LIB_0__::func_898(426191476))
	{
		__LIB_0__::func_401(-2142987163);
		__LIB_0__::func_400(1104143966);
		__LIB_0__::func_400(1027093524);
		__LIB_0__::func_400(1879779330);
		__LIB_0__::func_400(-1617847332);
		__LIB_0__::func_400(317070801);
	}
	else if (__LIB_0__::func_898(187862543))
	{
		__LIB_0__::func_401(1027093524);
		__LIB_0__::func_400(1104143966);
		__LIB_0__::func_400(-2142987163);
		__LIB_0__::func_400(1879779330);
		__LIB_0__::func_400(-1617847332);
		__LIB_0__::func_400(317070801);
	}
	else if (__LIB_0__::func_898(417081698))
	{
		__LIB_0__::func_401(1879779330);
		__LIB_0__::func_400(1104143966);
		__LIB_0__::func_400(-2142987163);
		__LIB_0__::func_400(1027093524);
		__LIB_0__::func_400(-1617847332);
		__LIB_0__::func_400(317070801);
	}
	else if (__LIB_0__::func_898(791041526))
	{
		__LIB_0__::func_401(-1617847332);
		__LIB_0__::func_400(1104143966);
		__LIB_0__::func_400(-2142987163);
		__LIB_0__::func_400(1027093524);
		__LIB_0__::func_400(1879779330);
		__LIB_0__::func_400(317070801);
	}
	else
	{
		__LIB_0__::func_401(317070801);
		__LIB_0__::func_400(1104143966);
		__LIB_0__::func_400(-2142987163);
		__LIB_0__::func_400(1027093524);
		__LIB_0__::func_400(1879779330);
		__LIB_0__::func_400(-1617847332);
	}
	if (__LIB_0__::func_293(45))
	{
		if (__LIB_0__::func_898(-1838712533))
		{
			__LIB_0__::func_401(-771786794);
			__LIB_0__::func_400(-1267247536);
			__LIB_0__::func_400(-468635897);
			__LIB_0__::func_400(535384482);
			__LIB_0__::func_400(1088045886);
			__LIB_0__::func_400(-1678761663);
			__LIB_0__::func_400(1724413302);
			__LIB_0__::func_400(-626641013);
		}
		else if (__LIB_0__::func_898(1140218954))
		{
			__LIB_0__::func_401(-1267247536);
			__LIB_0__::func_400(-468635897);
			__LIB_0__::func_400(-771786794);
			__LIB_0__::func_400(535384482);
			__LIB_0__::func_400(1088045886);
			__LIB_0__::func_400(-1678761663);
			__LIB_0__::func_400(1724413302);
			__LIB_0__::func_400(-626641013);
		}
		else
		{
			__LIB_0__::func_401(-468635897);
			__LIB_0__::func_400(-771786794);
			__LIB_0__::func_400(-1267247536);
			__LIB_0__::func_400(535384482);
			__LIB_0__::func_400(1088045886);
			__LIB_0__::func_400(-1678761663);
			__LIB_0__::func_400(1724413302);
			__LIB_0__::func_400(-626641013);
		}
	}
	else if (__LIB_0__::func_898(-1257057567))
	{
		__LIB_0__::func_401(1088045886);
		__LIB_0__::func_400(-1678761663);
		__LIB_0__::func_400(1724413302);
		__LIB_0__::func_400(-626641013);
		__LIB_0__::func_400(535384482);
		__LIB_0__::func_400(-771786794);
		__LIB_0__::func_400(-1267247536);
		__LIB_0__::func_400(-468635897);
	}
	else if (__LIB_0__::func_898(-1419919497))
	{
		__LIB_0__::func_401(-1678761663);
		__LIB_0__::func_400(1724413302);
		__LIB_0__::func_400(-626641013);
		__LIB_0__::func_400(535384482);
		__LIB_0__::func_400(1088045886);
		__LIB_0__::func_400(-771786794);
		__LIB_0__::func_400(-1267247536);
		__LIB_0__::func_400(-468635897);
	}
	else if (__LIB_0__::func_898(-1718674470))
	{
		__LIB_0__::func_401(1724413302);
		__LIB_0__::func_400(-626641013);
		__LIB_0__::func_400(535384482);
		__LIB_0__::func_400(1088045886);
		__LIB_0__::func_400(-1678761663);
		__LIB_0__::func_400(-771786794);
		__LIB_0__::func_400(-1267247536);
		__LIB_0__::func_400(-468635897);
	}
	else if (__LIB_0__::func_898(-35658630))
	{
		__LIB_0__::func_401(-626641013);
		__LIB_0__::func_400(535384482);
		__LIB_0__::func_400(1088045886);
		__LIB_0__::func_400(-1678761663);
		__LIB_0__::func_400(1724413302);
		__LIB_0__::func_400(-771786794);
		__LIB_0__::func_400(-1267247536);
		__LIB_0__::func_400(-468635897);
	}
	else
	{
		__LIB_0__::func_401(535384482);
		__LIB_0__::func_400(1088045886);
		__LIB_0__::func_400(-1678761663);
		__LIB_0__::func_400(1724413302);
		__LIB_0__::func_400(-626641013);
		__LIB_0__::func_400(-771786794);
		__LIB_0__::func_400(-1267247536);
		__LIB_0__::func_400(-468635897);
	}
	if (__LIB_0__::func_898(-108307814))
	{
		__LIB_0__::func_400(-205505701);
		__LIB_0__::func_401(-51262018);
	}
	else
	{
		__LIB_0__::func_400(-51262018);
		__LIB_0__::func_401(-205505701);
	}
	if (__LIB_0__::func_898(-1123615607))
	{
		__LIB_0__::func_400(874022542);
		__LIB_0__::func_400(joaat("DES_DIS_ALCHEMIST"));
		__LIB_0__::func_401(552030279);
		__LIB_5__::func_441("disco_nav_alchemist_house_burnt");
	}
	else
	{
		__LIB_0__::func_400(552030279);
		__LIB_5__::func_440("disco_nav_alchemist_house_burnt");
		__LIB_0__::func_401(874022542);
		__LIB_0__::func_401(joaat("DES_DIS_ALCHEMIST"));
	}
	if (__LIB_0__::func_898(-261141318))
	{
		__LIB_0__::func_401(-531198053);
	}
	else
	{
		__LIB_0__::func_400(-531198053);
	}
	__LIB_0__::func_401(-791673850);
	__LIB_0__::func_401(-395621323);
	__LIB_0__::func_401(-1799943886);
	__LIB_0__::func_401(-1436313374);
	__LIB_0__::func_401(1473078398);
	__LIB_0__::func_400(-2116659774);
	__LIB_0__::func_401(-953275122);
	__LIB_0__::func_401(-893624314);
	__LIB_0__::func_401(1193359531);
	__LIB_0__::func_401(1145227353);
	__LIB_0__::func_401(1915867459);
	__LIB_0__::func_401(98482444);
	__LIB_0__::func_401(26932594);
	__LIB_0__::func_401(-1930879809);
	__LIB_0__::func_401(46370274);
	__LIB_0__::func_401(-1279036865);
	__LIB_0__::func_401(781058494);
	__LIB_0__::func_401(1467466015);
	__LIB_0__::func_401(-363626454);
	__LIB_0__::func_401(-1314125880);
	__LIB_0__::func_401(1763246099);
	__LIB_0__::func_401(-593457329);
	__LIB_0__::func_401(274045919);
	__LIB_0__::func_401(-1047394327);
	__LIB_0__::func_401(-1535282356);
	__LIB_0__::func_401(-1816233372);
	__LIB_0__::func_401(-551038153);
	__LIB_0__::func_401(-1022426685);
	__LIB_0__::func_401(-262759679);
	__LIB_0__::func_401(976641588);
	__LIB_0__::func_401(1601053042);
	__LIB_0__::func_400(453346329);
	__LIB_0__::func_401(-1233192626);
	__LIB_0__::func_400(-620856989);
	__LIB_0__::func_401(1262164851);
	__LIB_0__::func_401(-755250900);
	__LIB_5__::func_440("disco_nav_circus_wagon_off");
	__LIB_0__::func_401(658964321);
	if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_13) && !bParam1)
	{
		Global_1934765.f_13 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(2813.128f, 991.613f, 54.6f, 9.375f, 3.243f, 7.954f, 30.906f, false, 7);
	}
	__LIB_4__::func_495(202);
	__LIB_4__::func_495(231);
	if (__LIB_0__::func_898(1015669983))
	{
		__LIB_0__::func_400(317070801);
		__LIB_0__::func_401(-763477089);
	}
	else
	{
		__LIB_0__::func_400(-763477089);
		__LIB_0__::func_401(317070801);
	}
	if (__LIB_0__::func_898(1867912207))
	{
		__LIB_4__::func_524(175);
		__LIB_4__::func_495(174);
	}
	else
	{
		__LIB_4__::func_524(174);
		__LIB_4__::func_495(175);
	}
	if (__LIB_0__::func_898(-534215902))
	{
		__LIB_4__::func_524(197);
	}
	else
	{
		__LIB_4__::func_495(197);
	}
	if (__LIB_0__::func_898(-9438024))
	{
		__LIB_4__::func_524(173);
		__LIB_4__::func_495(171);
		__LIB_4__::func_495(172);
	}
	else
	{
		__LIB_4__::func_495(173);
		__LIB_4__::func_524(171);
		__LIB_4__::func_524(172);
	}
	if (__LIB_0__::func_898(-1223121209))
	{
		__LIB_0__::func_400(1886602884);
		__LIB_0__::func_400(-1640200357);
		__LIB_0__::func_401(-1280884206);
	}
	else if (__LIB_0__::func_898(630808005))
	{
		__LIB_0__::func_400(-1280884206);
		__LIB_0__::func_401(1886602884);
		__LIB_0__::func_401(-1640200357);
	}
	else
	{
		__LIB_0__::func_400(-1280884206);
		__LIB_0__::func_400(-1640200357);
		__LIB_0__::func_401(1886602884);
	}
	if (__LIB_0__::func_898(1453909576))
	{
		__LIB_0__::func_400(-2127665186);
		__LIB_0__::func_400(-451832572);
		__LIB_0__::func_400(-689352221);
		__LIB_0__::func_400(1854980771);
		__LIB_0__::func_400(325677491);
		__LIB_0__::func_400(-391187090);
		__LIB_0__::func_400(1513363974);
		__LIB_0__::func_400(-1349539327);
		__LIB_0__::func_400(1963724330);
		__LIB_0__::func_401(-1902184438);
		__LIB_0__::func_401(1236921921);
		__LIB_0__::func_401(740012805);
	}
	else if (__LIB_0__::func_898(1643531967))
	{
		__LIB_0__::func_400(-1902184438);
		__LIB_0__::func_400(-689352221);
		__LIB_0__::func_400(1236921921);
		__LIB_0__::func_400(-391187090);
		__LIB_0__::func_400(740012805);
		__LIB_0__::func_400(1963724330);
		__LIB_0__::func_401(-2127665186);
		__LIB_0__::func_401(-451832572);
		__LIB_0__::func_401(1854980771);
		__LIB_0__::func_401(325677491);
		__LIB_0__::func_401(1513363974);
		__LIB_0__::func_401(-1349539327);
	}
	else
	{
		__LIB_0__::func_400(-1902184438);
		__LIB_0__::func_400(-451832572);
		__LIB_0__::func_400(1236921921);
		__LIB_0__::func_400(325677491);
		__LIB_0__::func_400(740012805);
		__LIB_0__::func_400(-1349539327);
		__LIB_0__::func_401(-2127665186);
		__LIB_0__::func_401(-689352221);
		__LIB_0__::func_401(1854980771);
		__LIB_0__::func_401(-391187090);
		__LIB_0__::func_401(1513363974);
		__LIB_0__::func_401(1963724330);
	}
	if (__LIB_0__::func_898(1164928979))
	{
		__LIB_0__::func_400(-1366431554);
		__LIB_0__::func_401(-960136064);
	}
	else
	{
		__LIB_0__::func_400(-960136064);
		__LIB_0__::func_401(-1366431554);
	}
	if (__LIB_0__::func_898(527226204))
	{
		__LIB_0__::func_400(-2122914678);
		__LIB_0__::func_401(-518004776);
	}
	else
	{
		__LIB_0__::func_400(-518004776);
		__LIB_0__::func_401(-2122914678);
	}
	if (__LIB_0__::func_898(1944170089))
	{
		__LIB_0__::func_401(1210820782);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_3) && !bParam1)
		{
			Global_1934765.f_3 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(665.03f, -1252.61f, 42.82f, 0.55f, 0.55f, 1f, 0f, false, 7);
		}
	}
	else
	{
		__LIB_0__::func_400(1210820782);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_3))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_3));
		}
	}
	if (__LIB_0__::func_898(1213993593))
	{
		__LIB_0__::func_401(-520400509);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_4) && !bParam1)
		{
			Global_1934765.f_4 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-112.01f, -36.73f, 95.65f, 0.5f, 0.5f, 0.75f, 0f, false, 7);
		}
	}
	else
	{
		__LIB_0__::func_400(-520400509);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_4))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_4));
		}
	}
	if (__LIB_0__::func_898(1216784232))
	{
		__LIB_0__::func_401(-1813544782);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_11) && !bParam1)
		{
			Global_1934765.f_11 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1593.796f, -181.753f, 138.934f, 6.212f, 2.801f, 5.068f, 220.2273f, false, 7);
		}
	}
	else
	{
		__LIB_0__::func_400(-1813544782);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_11))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_11));
		}
	}
	if (__LIB_0__::func_898(1410198831))
	{
		__LIB_0__::func_401(joaat("REG_HRT_HUNTING02"));
		__LIB_10__::func_741(joaat("REG_HRT_HUNTING02"));
	}
	else
	{
		__LIB_0__::func_400(joaat("REG_HRT_HUNTING02"));
		__LIB_10__::func_740(joaat("REG_HRT_HUNTING02"));
	}
	if (__LIB_0__::func_898(-538889627))
	{
		if (__LIB_1__::func_533(536870912) == 0)
		{
			__LIB_5__::func_548(536870912);
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_PRONGHORNRANCH"), -2550f, 400f, 0, 0);
		}
		__LIB_0__::func_400(1221694281);
		__LIB_0__::func_400(-1552951782);
		__LIB_0__::func_400(-1142569437);
		__LIB_0__::func_400(474113610);
		__LIB_0__::func_400(-297340751);
		__LIB_0__::func_400(1802934313);
		__LIB_0__::func_400(2108112010);
		__LIB_0__::func_400(1208537422);
		__LIB_0__::func_400(361734047);
		__LIB_0__::func_400(446554495);
		__LIB_0__::func_400(-118700196);
		__LIB_0__::func_400(-735136865);
		__LIB_0__::func_400(636278554);
		__LIB_5__::func_440("pro_empty_nav");
		__LIB_5__::func_440("pro_fence_fixed_nav");
		__LIB_5__::func_440("pro_burned_nav");
		__LIB_0__::func_401(1423681694);
		__LIB_0__::func_401(775893260);
		__LIB_0__::func_401(joaat("PRO_MANSION_INT_MILO"));
		__LIB_0__::func_401(joaat("PRO_BARN_INT_MILO"));
		__LIB_0__::func_401(1031662866);
		__LIB_0__::func_401(-1041976064);
		__LIB_0__::func_401(joaat("PRO_ES_01_WORKERHOUSE"));
		__LIB_0__::func_401(-436084091);
		__LIB_0__::func_401(-868830916);
		__LIB_0__::func_401(joaat("PRO_WRKSHP_INT_MILO"));
		__LIB_0__::func_401(-262959893);
		__LIB_0__::func_401(1049886174);
		__LIB_0__::func_401(-1042390616);
		__LIB_0__::func_401(2038589758);
		__LIB_5__::func_441("pro_fence_broken_nav");
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_25(22, 16);
			__LIB_8__::func_784(22);
		}
		if (PED::_0x91A5F9CBEBB9D936(Global_1934765.f_2))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_2, false);
			Global_1934765.f_2 = 0;
		}
	}
	else if (__LIB_0__::func_898(-1056767524))
	{
		if (__LIB_1__::func_533(536870912) == 0)
		{
			__LIB_5__::func_548(536870912);
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_PRONGHORNRANCH"), -2550f, 400f, 0, 0);
		}
		__LIB_0__::func_400(-436084091);
		__LIB_0__::func_400(-1552951782);
		__LIB_0__::func_400(-1142569437);
		__LIB_0__::func_400(474113610);
		__LIB_0__::func_400(-297340751);
		__LIB_0__::func_400(1802934313);
		__LIB_0__::func_400(2108112010);
		__LIB_0__::func_400(1208537422);
		__LIB_0__::func_400(361734047);
		__LIB_0__::func_400(446554495);
		__LIB_0__::func_400(-118700196);
		__LIB_0__::func_400(-735136865);
		__LIB_0__::func_400(636278554);
		__LIB_5__::func_440("pro_empty_nav");
		__LIB_5__::func_440("pro_fence_broken_nav");
		__LIB_5__::func_440("pro_burned_nav");
		__LIB_0__::func_401(1423681694);
		__LIB_0__::func_401(775893260);
		__LIB_0__::func_401(-329355129);
		__LIB_0__::func_401(2117211184);
		__LIB_0__::func_401(joaat("PRO_MANSION_INT_MILO"));
		__LIB_0__::func_401(joaat("PRO_BARN_INT_MILO"));
		__LIB_0__::func_401(1031662866);
		__LIB_0__::func_401(-1041976064);
		__LIB_0__::func_401(joaat("PRO_ES_01_WORKERHOUSE"));
		__LIB_0__::func_401(1221694281);
		__LIB_0__::func_401(-868830916);
		__LIB_0__::func_401(joaat("PRO_WRKSHP_INT_MILO"));
		__LIB_0__::func_401(-262959893);
		__LIB_0__::func_401(1049886174);
		__LIB_0__::func_401(-1042390616);
		__LIB_0__::func_401(2038589758);
		__LIB_5__::func_441("pro_fence_fixed_nav");
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_25(22, 16);
			__LIB_8__::func_784(22);
		}
		if (PED::_0x91A5F9CBEBB9D936(Global_1934765.f_2))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_2, false);
			Global_1934765.f_2 = 0;
		}
	}
	else if (__LIB_0__::func_898(-182889087))
	{
		if (__LIB_1__::func_533(536870912) == 0)
		{
			__LIB_5__::func_548(536870912);
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_PRONGHORNRANCH"), -2550f, 400f, 0, 0);
		}
		__LIB_0__::func_400(-436084091);
		__LIB_0__::func_400(-1552951782);
		__LIB_0__::func_400(-1142569437);
		__LIB_0__::func_400(474113610);
		__LIB_0__::func_400(-297340751);
		__LIB_0__::func_400(1802934313);
		__LIB_0__::func_400(2108112010);
		__LIB_0__::func_400(1208537422);
		__LIB_0__::func_400(361734047);
		__LIB_0__::func_400(446554495);
		__LIB_0__::func_400(-1042390616);
		__LIB_5__::func_440("pro_empty_nav");
		__LIB_5__::func_440("pro_fence_broken_nav");
		__LIB_5__::func_440("pro_fence_fixed_nav");
		__LIB_0__::func_401(1423681694);
		__LIB_0__::func_401(joaat("PRO_MANSION_INT_MILO"));
		__LIB_0__::func_401(joaat("PRO_BARN_INT_MILO"));
		__LIB_0__::func_401(1031662866);
		__LIB_0__::func_401(-1041976064);
		__LIB_0__::func_401(joaat("PRO_ES_01_WORKERHOUSE"));
		__LIB_0__::func_401(1221694281);
		__LIB_0__::func_401(-868830916);
		__LIB_0__::func_401(joaat("PRO_WRKSHP_INT_MILO"));
		__LIB_0__::func_401(-262959893);
		__LIB_0__::func_401(1049886174);
		__LIB_0__::func_401(-118700196);
		__LIB_0__::func_401(-735136865);
		__LIB_0__::func_401(636278554);
		__LIB_0__::func_401(2038589758);
		__LIB_5__::func_441("pro_burned_nav");
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_25(22, 16);
			__LIB_8__::func_784(22);
		}
		if (PED::_0x91A5F9CBEBB9D936(Global_1934765.f_2))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_2, false);
			Global_1934765.f_2 = 0;
		}
	}
	else
	{
		if (__LIB_1__::func_533(536870912))
		{
			__LIB_5__::func_547(536870912);
			MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_PRONGHORNRANCH"));
		}
		__LIB_0__::func_400(1423681694);
		__LIB_0__::func_400(joaat("PRO_MANSION_INT_MILO"));
		__LIB_0__::func_400(joaat("PRO_BARN_INT_MILO"));
		__LIB_0__::func_400(1031662866);
		__LIB_0__::func_400(-1041976064);
		__LIB_0__::func_400(joaat("PRO_ES_01_WORKERHOUSE"));
		__LIB_0__::func_400(1221694281);
		__LIB_0__::func_400(-436084091);
		__LIB_0__::func_400(joaat("PRO_WRKSHP_INT_MILO"));
		__LIB_0__::func_400(-262959893);
		__LIB_0__::func_400(1049886174);
		__LIB_0__::func_400(-1042390616);
		__LIB_0__::func_400(-118700196);
		__LIB_0__::func_400(-735136865);
		__LIB_0__::func_400(636278554);
		__LIB_0__::func_400(2038589758);
		__LIB_0__::func_400(775893260);
		__LIB_5__::func_440("pro_fence_broken_nav");
		__LIB_5__::func_440("pro_fence_fixed_nav");
		__LIB_5__::func_440("pro_burned_nav");
		__LIB_0__::func_401(-1552951782);
		__LIB_0__::func_401(-1142569437);
		__LIB_0__::func_401(474113610);
		__LIB_0__::func_401(-297340751);
		__LIB_0__::func_401(-868830916);
		__LIB_0__::func_401(1802934313);
		__LIB_0__::func_401(2108112010);
		__LIB_0__::func_401(1208537422);
		__LIB_0__::func_401(361734047);
		__LIB_0__::func_401(446554495);
		__LIB_5__::func_441("pro_empty_nav");
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_24(22, 16);
			__LIB_17__::func_447(22);
		}
		if (!PED::_0x91A5F9CBEBB9D936(Global_1934765.f_2) && !bParam1)
		{
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1888801[22 /*35*/].f_3))
			{
				Global_1934765.f_2 = PED::_0x4C39C95AE5DB1329(Global_1888801[22 /*35*/].f_4, 0, 15);
			}
		}
	}
	if (__LIB_0__::func_898(2019386373))
	{
		__LIB_0__::func_400(-217646849);
		__LIB_0__::func_400(-694809996);
		__LIB_0__::func_400(-2053475031);
		__LIB_0__::func_401(-279703229);
		__LIB_0__::func_401(-623091266);
	}
	else if (__LIB_0__::func_898(-664252410))
	{
		__LIB_0__::func_400(-279703229);
		__LIB_0__::func_400(-2053475031);
		__LIB_0__::func_401(-217646849);
		__LIB_0__::func_401(-694809996);
		__LIB_0__::func_401(-623091266);
	}
	else if (__LIB_0__::func_898(2109952320))
	{
		__LIB_0__::func_400(-279703229);
		__LIB_0__::func_400(-217646849);
		__LIB_0__::func_400(-623091266);
		__LIB_0__::func_401(-694809996);
		__LIB_0__::func_401(-2053475031);
	}
	if (__LIB_0__::func_898(2024121624))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("GUA_GUARD_CHAINS", false);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("GUA_GUARD_CHAINS", true);
	}
	if (__LIB_0__::func_898(-1077783786))
	{
		__LIB_0__::func_400(-961488528);
		__LIB_0__::func_401(-1569624057);
	}
	else
	{
		__LIB_0__::func_400(-1569624057);
		__LIB_0__::func_401(-961488528);
	}
	if (__LIB_0__::func_898(-299522880))
	{
		__LIB_0__::func_401(131323483);
		__LIB_0__::func_400(-134556459);
	}
	else
	{
		__LIB_0__::func_400(131323483);
		__LIB_0__::func_401(-134556459);
	}
	if (__LIB_0__::func_293(45))
	{
		__LIB_0__::func_400(joaat("WAP_RAINSFALLS_BASE"));
		__LIB_0__::func_400(661576070);
		__LIB_0__::func_400(795060201);
		__LIB_0__::func_400(1003623269);
		__LIB_0__::func_400(-395621323);
		__LIB_0__::func_400(-924329535);
		__LIB_0__::func_401(739805687);
		__LIB_0__::func_401(-243627670);
		__LIB_0__::func_401(-198004806);
		__LIB_5__::func_441("nav_wapiti_es");
	}
	else
	{
		__LIB_0__::func_400(739805687);
		__LIB_0__::func_400(-243627670);
		__LIB_0__::func_400(-198004806);
		__LIB_5__::func_440("nav_wapiti_es");
		__LIB_0__::func_401(1003623269);
		__LIB_0__::func_401(-924329535);
		__LIB_0__::func_401(-395621323);
		if (__LIB_0__::func_898(-389056691))
		{
			__LIB_0__::func_400(661576070);
			__LIB_0__::func_401(joaat("WAP_RAINSFALLS_BASE"));
			__LIB_0__::func_401(795060201);
		}
		else
		{
			__LIB_0__::func_400(795060201);
			__LIB_0__::func_401(joaat("WAP_RAINSFALLS_BASE"));
			__LIB_0__::func_401(661576070);
		}
	}
	if (__LIB_0__::func_898(-1824738758))
	{
		__LIB_0__::func_401(1489268640);
	}
	else
	{
		__LIB_0__::func_400(1489268640);
	}
	__LIB_10__::func_800();
	if (__LIB_0__::func_898(1221801385))
	{
		if (!Global_1934765.f_297)
		{
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_HOUSEBOAT"), 2300f, -330f, 0, 0);
			Global_1934765.f_297 = 1;
		}
	}
	else if (Global_1934765.f_297)
	{
		MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_HOUSEBOAT"));
		Global_1934765.f_297 = 0;
	}
	if (__LIB_0__::func_898(-306246697))
	{
		if (!Global_1934765.f_298)
		{
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_VANHORNBOAT"), 3012.5f, 507.5f, 0, 0);
			Global_1934765.f_298 = 1;
		}
	}
	else if (Global_1934765.f_298)
	{
		MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_VANHORNBOAT"));
		Global_1934765.f_298 = 0;
	}
	if (__LIB_0__::func_898(-1847672446))
	{
		if (!Global_1934765.f_299)
		{
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_STDENISBOAT"), 2700f, -1600f, 0, 0);
			Global_1934765.f_299 = 1;
		}
	}
	else if (Global_1934765.f_299)
	{
		MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_STDENISBOAT"));
		Global_1934765.f_299 = 0;
	}
	if (!__LIB_0__::func_898(-789397228))
	{
		__LIB_0__::func_401(-614421509);
		__LIB_0__::func_401(604920544);
		__LIB_0__::func_401(joaat("SER_01_GRANDKOR3"));
		if (__LIB_0__::func_898(-2022369555))
		{
			__LIB_0__::func_401(-1716205818);
			__LIB_0__::func_400(-276259505);
		}
		else
		{
			__LIB_0__::func_401(-276259505);
			__LIB_0__::func_400(-1716205818);
		}
		if (!Global_1934765.f_295 && __LIB_3__::func_222(5))
		{
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_GRANDKORRIGANBOAT"), 3290f, -1310f, 0, 0);
			Global_1934765.f_295 = 1;
			MAP::_0xD8C7162AB2E2AF45(1944800674);
		}
	}
	else
	{
		__LIB_0__::func_400(-614421509);
		__LIB_0__::func_400(604920544);
		__LIB_0__::func_400(joaat("SER_01_GRANDKOR3"));
		__LIB_0__::func_400(-276259505);
		__LIB_0__::func_400(-1716205818);
		if (Global_1934765.f_295)
		{
			MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_GRANDKORRIGANBOAT"));
			Global_1934765.f_295 = 0;
			MAP::_MAP_DISCOVERY_SET_ENABLED(1944800674);
		}
	}
	if (__LIB_0__::func_898(1358491857))
	{
		__LIB_0__::func_401(1056170594);
		__LIB_0__::func_401(-873881483);
		__LIB_0__::func_401(146172383);
		if (__LIB_0__::func_898(723021499))
		{
			__LIB_0__::func_401(joaat("NEW_BOATS_01_GRANDKOR3"));
			__LIB_0__::func_400(1157695860);
		}
		else
		{
			__LIB_0__::func_401(1157695860);
			__LIB_0__::func_400(joaat("NEW_BOATS_01_GRANDKOR3"));
		}
		if (!Global_1934765.f_294 && __LIB_3__::func_222(5))
		{
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_GRANDKORRIGANBOATDOCKED"), 2870f, -1400f, 0, 0);
			Global_1934765.f_294 = 1;
			MAP::_0xD8C7162AB2E2AF45(-296815465);
		}
	}
	else
	{
		__LIB_0__::func_400(1056170594);
		__LIB_0__::func_400(-873881483);
		__LIB_0__::func_400(joaat("NEW_BOATS_01_GRANDKOR3"));
		__LIB_0__::func_400(1157695860);
		__LIB_0__::func_400(146172383);
		if (Global_1934765.f_294)
		{
			MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_GRANDKORRIGANBOATDOCKED"));
			Global_1934765.f_294 = 0;
			MAP::_MAP_DISCOVERY_SET_ENABLED(-296815465);
		}
	}
	__LIB_10__::func_742();
	StringCopy(&cVar1, "nav_sdn_docks_", 64);
	if (__LIB_0__::func_898(1358491857))
	{
		StringConCat(&cVar1, "korrigan_", 64);
	}
	if (__LIB_0__::func_898(-1825294305))
	{
		StringConCat(&cVar1, "antenor_", 64);
		__LIB_0__::func_401(-445068262);
		__LIB_0__::func_401(-1688366042);
		if (TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-2024308038))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-2024308038, false);
		}
	}
	else
	{
		__LIB_0__::func_400(-445068262);
		__LIB_0__::func_400(-1688366042);
		if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-2024308038))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-2024308038, true);
		}
	}
	if (__LIB_0__::func_898(522677506))
	{
		__LIB_0__::func_401(1048677741);
		__LIB_0__::func_401(-2035101386);
		__LIB_0__::func_401(1284188544);
		__LIB_0__::func_401(1520435387);
		__LIB_0__::func_401(876228895);
		StringConCat(&cVar1, "trains_", 64);
	}
	else
	{
		__LIB_0__::func_400(1048677741);
		__LIB_0__::func_400(-2035101386);
		__LIB_0__::func_400(1284188544);
		__LIB_0__::func_400(1520435387);
		__LIB_0__::func_400(876228895);
	}
	if (!__LIB_0__::func_293(45))
	{
		__LIB_0__::func_400(-274080837);
		__LIB_0__::func_400(-1036688493);
		__LIB_0__::func_400(-1512794226);
		__LIB_0__::func_400(913995529);
		__LIB_0__::func_401(481139295);
		__LIB_0__::func_401(165972019);
		__LIB_0__::func_401(1679182807);
		__LIB_0__::func_401(-1986089134);
		StringConCat(&cVar1, "pre_es", 64);
	}
	else
	{
		__LIB_0__::func_400(481139295);
		__LIB_0__::func_400(165972019);
		__LIB_0__::func_400(1679182807);
		__LIB_0__::func_400(-1986089134);
		__LIB_0__::func_401(-274080837);
		__LIB_0__::func_401(-1036688493);
		__LIB_0__::func_401(-1512794226);
		__LIB_0__::func_401(913995529);
		StringConCat(&cVar1, "es", 64);
	}
	__LIB_5__::func_441(&cVar1);
	if (__LIB_0__::func_898(171499483))
	{
		__LIB_0__::func_400(-890900091);
		__LIB_0__::func_401(-1758697759);
	}
	else
	{
		__LIB_0__::func_400(-1758697759);
		__LIB_0__::func_401(-890900091);
	}
	if (__LIB_0__::func_898(235928616))
	{
		__LIB_0__::func_400(joaat("COM_MULESHED"));
		__LIB_0__::func_400(1926336063);
		__LIB_0__::func_400(-800534102);
		__LIB_5__::func_440("nav_crn1_barn");
		__LIB_0__::func_401(-886310806);
		__LIB_5__::func_441("nav_crn1_barn_burnt");
	}
	else
	{
		__LIB_0__::func_400(-886310806);
		__LIB_5__::func_440("nav_crn1_barn_burnt");
		__LIB_0__::func_401(joaat("COM_MULESHED"));
		__LIB_0__::func_401(1926336063);
		__LIB_0__::func_401(-800534102);
		__LIB_5__::func_441("nav_crn1_barn");
	}
	if (__LIB_0__::func_898(345808947))
	{
		__LIB_4__::func_524(190);
		__LIB_4__::func_495(189);
	}
	else
	{
		__LIB_4__::func_524(189);
		__LIB_4__::func_495(190);
	}
	if (__LIB_0__::func_898(1167397384))
	{
		__LIB_0__::func_400(1736386364);
	}
	else
	{
		__LIB_0__::func_401(1736386364);
	}
	if (__LIB_0__::func_898(2024769126))
	{
		__LIB_0__::func_400(516817794);
	}
	else
	{
		__LIB_0__::func_401(516817794);
	}
	if (__LIB_0__::func_898(-154581735))
	{
		__LIB_0__::func_400(-262371610);
	}
	else
	{
		__LIB_0__::func_401(-262371610);
	}
	if (__LIB_0__::func_898(-1530132748))
	{
		__LIB_0__::func_400(-389510791);
	}
	else
	{
		__LIB_0__::func_401(-389510791);
	}
	if (__LIB_0__::func_898(976539083))
	{
		__LIB_0__::func_400(71064384);
	}
	else
	{
		__LIB_0__::func_401(71064384);
	}
	__LIB_0__::func_401(579127040);
	__LIB_0__::func_401(-2011620387);
	if (__LIB_0__::func_898(409602249))
	{
		__LIB_0__::func_401(677191274);
	}
	else
	{
		__LIB_0__::func_400(677191274);
	}
	if (__LIB_0__::func_898(651395116))
	{
		__LIB_0__::func_401(joaat("DIS_SCM_00_KIERAN_GRAVE"));
	}
	else
	{
		__LIB_0__::func_400(joaat("DIS_SCM_00_KIERAN_GRAVE"));
	}
	if (__LIB_0__::func_898(1488286867))
	{
		__LIB_0__::func_401(516308968);
	}
	else
	{
		__LIB_0__::func_400(516308968);
	}
	if (__LIB_0__::func_898(665676602))
	{
		__LIB_0__::func_401(1308321372);
	}
	else
	{
		__LIB_0__::func_400(1308321372);
	}
	if (__LIB_0__::func_898(8924991))
	{
		__LIB_0__::func_401(-449454773);
	}
	else
	{
		__LIB_0__::func_400(-449454773);
	}
	if (__LIB_0__::func_898(932909855))
	{
		__LIB_0__::func_401(-1754541271);
		__LIB_0__::func_401(-1363999915);
		__LIB_0__::func_401(-1116430120);
	}
	else
	{
		__LIB_0__::func_400(-1754541271);
		__LIB_0__::func_400(-1363999915);
		__LIB_0__::func_400(-1116430120);
	}
	if (__LIB_0__::func_898(2051822093))
	{
		__LIB_0__::func_401(-163883900);
	}
	else
	{
		__LIB_0__::func_400(-163883900);
	}
	if (__LIB_0__::func_898(-1241340344))
	{
		__LIB_0__::func_401(-1010679388);
	}
	else
	{
		__LIB_0__::func_400(-1010679388);
	}
	if (__LIB_0__::func_898(-1558439474))
	{
		__LIB_0__::func_401(1033367448);
	}
	else
	{
		__LIB_0__::func_400(1033367448);
	}
	if (__LIB_0__::func_898(2077022393))
	{
		__LIB_0__::func_400(391022529);
		__LIB_0__::func_400(-1560636071);
		__LIB_0__::func_400(1870870569);
		__LIB_0__::func_400(-904833761);
		__LIB_0__::func_400(1713084298);
		__LIB_0__::func_400(928528900);
		__LIB_0__::func_401(-2118853492);
		__LIB_0__::func_401(-597126658);
	}
	else
	{
		__LIB_0__::func_400(-2118853492);
		__LIB_0__::func_400(-597126658);
		if (__LIB_0__::func_898(1583012985))
		{
			__LIB_0__::func_400(391022529);
			__LIB_0__::func_400(-1560636071);
			__LIB_0__::func_401(1713084298);
		}
		else
		{
			__LIB_0__::func_400(1713084298);
			__LIB_0__::func_401(391022529);
			__LIB_0__::func_401(-1560636071);
		}
		if (__LIB_0__::func_898(479419429))
		{
			__LIB_0__::func_400(1870870569);
			__LIB_0__::func_400(-904833761);
			__LIB_0__::func_401(928528900);
		}
		else
		{
			__LIB_0__::func_400(928528900);
			__LIB_0__::func_401(1870870569);
			__LIB_0__::func_401(-904833761);
		}
	}
	if (__LIB_0__::func_898(-1556423728))
	{
		__LIB_0__::func_401(-1023331176);
	}
	else
	{
		__LIB_0__::func_400(-1023331176);
	}
	if (__LIB_0__::func_898(-144653976))
	{
		__LIB_0__::func_401(-1809571159);
	}
	else
	{
		__LIB_0__::func_400(-1809571159);
	}
	if (__LIB_0__::func_898(-351362068))
	{
		__LIB_0__::func_401(-2071756699);
	}
	else
	{
		__LIB_0__::func_400(-2071756699);
	}
	if (__LIB_0__::func_898(-939114198))
	{
		__LIB_0__::func_401(-1625703283);
	}
	else
	{
		__LIB_0__::func_400(-1625703283);
	}
	if (__LIB_0__::func_898(-1318987693))
	{
		__LIB_0__::func_401(-1696865897);
	}
	else
	{
		__LIB_0__::func_400(-1696865897);
	}
	if (__LIB_0__::func_898(-545450213))
	{
		__LIB_0__::func_400(-1950049852);
		__LIB_0__::func_401(-724913398);
	}
	else
	{
		__LIB_0__::func_400(-724913398);
		__LIB_0__::func_401(-1950049852);
	}
	__LIB_5__::func_440("railroad_stageMP");
	if (__LIB_0__::func_898(-2101264851))
	{
		__LIB_0__::func_401(1858796535);
		__LIB_0__::func_401(945532872);
		__LIB_0__::func_401(-2043326480);
		__LIB_0__::func_401(992791293);
		__LIB_0__::func_401(-1815023148);
		__LIB_0__::func_401(731209239);
		__LIB_0__::func_401(1531008020);
		__LIB_0__::func_401(-952533419);
		__LIB_0__::func_401(582879672);
		__LIB_0__::func_401(1750312025);
		__LIB_0__::func_401(-759698431);
		__LIB_0__::func_401(59954835);
		__LIB_0__::func_401(-1461922204);
		__LIB_0__::func_401(2079207010);
		__LIB_0__::func_401(-1360840312);
		__LIB_0__::func_401(-816857367);
	}
	else
	{
		__LIB_0__::func_400(1858796535);
		__LIB_0__::func_400(945532872);
		__LIB_0__::func_400(-2043326480);
		__LIB_0__::func_400(992791293);
		__LIB_0__::func_400(-1815023148);
		__LIB_0__::func_400(731209239);
		__LIB_0__::func_400(1531008020);
		__LIB_0__::func_400(-952533419);
		__LIB_0__::func_400(582879672);
		__LIB_0__::func_400(1750312025);
		__LIB_0__::func_400(-759698431);
		__LIB_0__::func_400(59954835);
		__LIB_0__::func_400(-1461922204);
		__LIB_0__::func_400(2079207010);
		__LIB_0__::func_400(-1360840312);
		__LIB_0__::func_400(-816857367);
	}
	if (__LIB_0__::func_898(434558613))
	{
		__LIB_0__::func_401(-715865581);
		__LIB_0__::func_400(-1387511711);
		__LIB_0__::func_400(1901132483);
		__LIB_0__::func_400(-2082345587);
		TASK::SET_SCENARIO_GROUP_ENABLED("TAN_BIRDS", true);
		__LIB_5__::func_440("rmllr_cabin_normal");
		__LIB_5__::func_441("rmllr_cabin_burnt");
	}
	else
	{
		__LIB_0__::func_401(-1387511711);
		__LIB_0__::func_401(1901132483);
		__LIB_0__::func_400(-2082345587);
		__LIB_0__::func_400(-715865581);
		TASK::SET_SCENARIO_GROUP_ENABLED("TAN_BIRDS", false);
		__LIB_5__::func_440("rmllr_cabin_burnt");
		__LIB_5__::func_441("rmllr_cabin_normal");
	}
	if (__LIB_0__::func_898(1186594126))
	{
		__LIB_0__::func_401(joaat("CVB_MURDERTREE"));
	}
	else
	{
		__LIB_0__::func_400(joaat("CVB_MURDERTREE"));
	}
	if (__LIB_0__::func_898(469053995))
	{
		__LIB_0__::func_401(joaat("M_07_P_MURDERROCK"));
	}
	else
	{
		__LIB_0__::func_400(joaat("M_07_P_MURDERROCK"));
	}
	if (__LIB_0__::func_898(476714362))
	{
		__LIB_0__::func_401(joaat("M_09_P_CAMPFIREMURDER"));
	}
	else
	{
		__LIB_0__::func_400(joaat("M_09_P_CAMPFIREMURDER"));
	}
	if (__LIB_0__::func_898(1947931439))
	{
		__LIB_0__::func_401(1628286919);
		__LIB_0__::func_400(joaat("NEW_COM_07_NOHOTEL"));
		__LIB_0__::func_400(joaat("NEW_COM_07_WIN"));
	}
	else
	{
		__LIB_0__::func_401(joaat("NEW_COM_07_NOHOTEL"));
		__LIB_0__::func_401(joaat("NEW_COM_07_WIN"));
		__LIB_0__::func_400(1628286919);
	}
	if (__LIB_0__::func_898(-879507474))
	{
		__LIB_0__::func_400(1928252407);
		__LIB_0__::func_401(-98843293);
	}
	else
	{
		__LIB_0__::func_400(-98843293);
		__LIB_0__::func_401(1928252407);
	}
	if (__LIB_0__::func_898(1050128548))
	{
		__LIB_0__::func_401(joaat("RE_SP_SAVAGEWARNING_01"));
	}
	else
	{
		__LIB_0__::func_400(joaat("RE_SP_SAVAGEWARNING_01"));
	}
	if (__LIB_0__::func_898(868326136))
	{
		__LIB_0__::func_401(joaat("RE_SP_SAVAGEWARNING_02"));
	}
	else
	{
		__LIB_0__::func_400(joaat("RE_SP_SAVAGEWARNING_02"));
	}
	if (__LIB_0__::func_898(-515561750))
	{
		__LIB_0__::func_400(-892659042);
		__LIB_0__::func_400(30201771);
		__LIB_0__::func_401(517553365);
		__LIB_5__::func_441("mud4_saloon_fight");
	}
	else if (__LIB_0__::func_898(26245360))
	{
		__LIB_5__::func_440("mud4_saloon_fight");
		__LIB_0__::func_400(30201771);
		__LIB_0__::func_401(-2083943324);
		__LIB_0__::func_401(517553365);
		__LIB_5__::func_441("mud4_saloon_fight_start");
	}
	else
	{
		__LIB_5__::func_440("mud4_saloon_fight_start");
		__LIB_5__::func_440("mud4_saloon_fight");
		__LIB_0__::func_400(517553365);
		__LIB_0__::func_400(-2083943324);
		__LIB_0__::func_401(30201771);
	}
	if (__LIB_0__::func_898(-1060078174))
	{
		if (__LIB_0__::func_293(45))
		{
			__LIB_0__::func_400(joaat("K_11_P_MARY1_CAMP"));
			__LIB_5__::func_440("MS_MARY1_CAMP");
			__LIB_0__::func_401(joaat("K_11_P_CHELONIAN_CAMP"));
			__LIB_5__::func_441("MS_CHELONIAN_CAMP");
		}
		else
		{
			__LIB_0__::func_400(joaat("K_11_P_CHELONIAN_CAMP"));
			__LIB_5__::func_440("MS_CHELONIAN_CAMP");
			__LIB_0__::func_401(joaat("K_11_P_MARY1_CAMP"));
			__LIB_5__::func_441("MS_MARY1_CAMP");
		}
		__LIB_10__::func_743(&(Global_1934765.f_17), 928.2264f, 1345.357f, 194.5221f, 4.5f);
		__LIB_10__::func_743(&(Global_1934765.f_18), 922.5641f, 1346.623f, 194.7151f, 3f);
		__LIB_10__::func_743(&(Global_1934765.f_19), 920.8331f, 1340.152f, 194.182f, 3.5f);
	}
	else
	{
		__LIB_0__::func_400(joaat("K_11_P_MARY1_CAMP"));
		__LIB_0__::func_400(joaat("K_11_P_CHELONIAN_CAMP"));
		__LIB_10__::func_744(&(Global_1934765.f_17), 1);
		__LIB_10__::func_744(&(Global_1934765.f_18), 1);
		__LIB_10__::func_744(&(Global_1934765.f_19), 1);
	}
	if (__LIB_0__::func_898(817925178))
	{
		__LIB_0__::func_401(-1417469821);
	}
	else
	{
		__LIB_0__::func_400(-1417469821);
	}
	if (__LIB_0__::func_898(-785605431))
	{
	}
	else
	{
		__LIB_0__::func_400(146172383);
	}
	if (__LIB_0__::func_898(1557082963))
	{
		__LIB_0__::func_400(joaat("C_13_NOTRAP_01"));
		__LIB_0__::func_400(765343099);
		__LIB_0__::func_401(-909306169);
	}
	else if (__LIB_0__::func_898(-350863510))
	{
		__LIB_0__::func_400(joaat("C_13_NOTRAP_01"));
		__LIB_0__::func_400(-909306169);
		__LIB_0__::func_401(765343099);
	}
	else
	{
		__LIB_0__::func_400(765343099);
		__LIB_0__::func_400(-909306169);
		__LIB_0__::func_401(joaat("C_13_NOTRAP_01"));
	}
	if (__LIB_0__::func_898(-1952856164))
	{
		__LIB_0__::func_400(-890900091);
		__LIB_0__::func_400(-1758697759);
		__LIB_0__::func_401(591001924);
	}
	else if (__LIB_0__::func_898(249726958))
	{
		__LIB_0__::func_400(-890900091);
		__LIB_0__::func_400(591001924);
		__LIB_0__::func_401(-1758697759);
	}
	else
	{
		__LIB_0__::func_400(-1758697759);
		__LIB_0__::func_400(591001924);
		__LIB_0__::func_401(-890900091);
	}
	if (__LIB_0__::func_898(-99303535))
	{
		__LIB_0__::func_400(-2092712551);
		__LIB_0__::func_401(-1307469679);
	}
	else if (__LIB_0__::func_898(1433244935))
	{
		__LIB_0__::func_400(-1307469679);
		__LIB_0__::func_401(-2092712551);
	}
	else
	{
		__LIB_0__::func_400(-2092712551);
		__LIB_0__::func_400(-1307469679);
	}
	__LIB_10__::func_801(1512816328, joaat("GANG_SKINAFTERMATH_LOC01_01"));
	__LIB_10__::func_801(1207048789, joaat("GANG_SKINAFTERMATH_LOC02_01"));
	__LIB_10__::func_801(-1230112817, joaat("GANG_SKINAFTERMATH_LOC03_01"));
	__LIB_10__::func_801(-1278074582, joaat("GANG_SKINAFTERMATH_LOC01_02"));
	__LIB_10__::func_801(-1436021162, joaat("GANG_SKINAFTERMATH_LOC02_02"));
	__LIB_10__::func_801(407136781, joaat("GANG_SKINAFTERMATH_LOC03_02"));
	if (__LIB_0__::func_898(-978957786))
	{
		__LIB_0__::func_401(1111220101);
		__LIB_0__::func_401(1372565859);
		__LIB_0__::func_401(1644962309);
		if (!Global_1934765.f_296 && __LIB_3__::func_222(127))
		{
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_THIEVESLANDINGBOAT"), -1350f, -2300f, 0, 0);
			Global_1934765.f_296 = 1;
		}
	}
	else
	{
		__LIB_0__::func_400(1111220101);
		__LIB_0__::func_400(1372565859);
		__LIB_0__::func_400(1644962309);
		if (Global_1934765.f_296)
		{
			MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_THIEVESLANDINGBOAT"));
			Global_1934765.f_296 = 0;
		}
	}
	if (__LIB_0__::func_898(559573222))
	{
		__LIB_0__::func_400(1137646647);
		__LIB_0__::func_401(-898081380);
	}
	else
	{
		__LIB_0__::func_400(-898081380);
		__LIB_0__::func_401(1137646647);
	}
	if (__LIB_0__::func_898(-1818850842))
	{
		__LIB_0__::func_400(1584946069);
	}
	else
	{
		__LIB_0__::func_401(1584946069);
	}
	if (__LIB_0__::func_898(-792853067))
	{
		__LIB_0__::func_400(-1828030290);
		__LIB_0__::func_401(827269092);
	}
	else
	{
		__LIB_0__::func_401(-1828030290);
		__LIB_0__::func_400(827269092);
	}
	if (__LIB_0__::func_898(1151197909))
	{
		__LIB_4__::func_495(165);
	}
	else
	{
		__LIB_4__::func_524(165);
	}
	if (__LIB_0__::func_898(-828139293))
	{
		__LIB_0__::func_400(1364392658);
		__LIB_0__::func_401(-794503195);
		__LIB_5__::func_441("nts3_no_bridge");
		if (!Global_1934765.f_293)
		{
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_BRIDGEDESTROYED"), 512f, 1756f, 0, 0);
			Global_1934765.f_293 = 1;
		}
	}
	else
	{
		__LIB_0__::func_400(-794503195);
		__LIB_0__::func_401(1364392658);
		__LIB_5__::func_440("nts3_no_bridge");
		if (Global_1934765.f_293)
		{
			MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_BRIDGEDESTROYED"));
			Global_1934765.f_293 = 0;
		}
	}
	if (__LIB_0__::func_898(-464836488))
	{
		__LIB_0__::func_400(-1192199739);
		__LIB_0__::func_401(-65072454);
	}
	else
	{
		__LIB_0__::func_400(-65072454);
		__LIB_0__::func_401(-1192199739);
	}
	if (__LIB_0__::func_898(-233743613))
	{
		__LIB_0__::func_401(1692451176);
	}
	else
	{
		__LIB_0__::func_400(1692451176);
	}
	if (__LIB_0__::func_898(1203043430))
	{
		__LIB_0__::func_401(-102951407);
	}
	else
	{
		__LIB_0__::func_400(-102951407);
	}
	if (__LIB_0__::func_898(299694527))
	{
		__LIB_0__::func_401(1833824812);
	}
	else
	{
		__LIB_0__::func_400(1833824812);
	}
	if (__LIB_0__::func_317() == 2)
	{
		if (__LIB_0__::func_898(-1949204933))
		{
			__LIB_0__::func_400(1734859244);
			__LIB_0__::func_401(719147410);
		}
		else
		{
			__LIB_0__::func_401(1734859244);
			__LIB_0__::func_400(719147410);
		}
	}
	if (!__LIB_2__::func_774(4))
	{
		if (__LIB_0__::func_317() == 1 && __LIB_0__::func_592() == 1)
		{
			if (__LIB_0__::func_898(442317566))
			{
				__LIB_0__::func_400(1948051928);
				__LIB_0__::func_401(1453569688);
			}
			else
			{
				__LIB_0__::func_401(1948051928);
				__LIB_0__::func_400(1453569688);
			}
		}
		else
		{
			__LIB_0__::func_400(1453569688);
			__LIB_0__::func_400(1948051928);
		}
	}
	if (__LIB_0__::func_898(-736853952))
	{
		__LIB_0__::func_401(joaat("MISSION_SEAN_1"));
		__LIB_10__::func_741(joaat("MISSION_SEAN_1"));
		PATHFIND::_0x4BDEBEA5702B97A9(-1363.724f, -839.4881f, 65.44287f, 20f, 0, 1);
	}
	else
	{
		__LIB_0__::func_400(joaat("MISSION_SEAN_1"));
		__LIB_10__::func_740(joaat("MISSION_SEAN_1"));
		PATHFIND::_0x4BDEBEA5702B97A9(-1363.724f, -839.4881f, 65.44287f, 20f, 1, 1);
	}
	if (__LIB_0__::func_898(1478132521))
	{
		__LIB_0__::func_400(1759143160);
		__LIB_0__::func_401(398639187);
		__LIB_5__::func_440("reservation_abandoned");
		__LIB_5__::func_441("nav_sean1_camp");
	}
	else
	{
		__LIB_0__::func_400(398639187);
		__LIB_0__::func_401(1759143160);
	}
	if (__LIB_0__::func_898(-360036154))
	{
		__LIB_0__::func_400(1136457806);
		__LIB_0__::func_401(1255880931);
	}
	else
	{
		__LIB_0__::func_401(1136457806);
		__LIB_0__::func_400(1255880931);
	}
	if (__LIB_0__::func_898(2024383613))
	{
		__LIB_0__::func_400(-753844687);
		__LIB_0__::func_401(joaat("NAT_NATIVE1_COH_02"));
		__LIB_5__::func_441("ntv1_cohutta");
	}
	else
	{
		__LIB_0__::func_401(-753844687);
		__LIB_0__::func_400(joaat("NAT_NATIVE1_COH_02"));
		__LIB_5__::func_440("ntv1_cohutta");
	}
	if (__LIB_0__::func_898(-622554983))
	{
		__LIB_0__::func_401(joaat("NAT_NATIVE1_ARMY_01"));
		__LIB_5__::func_441("ntv1_armycamp");
		if (!Global_1934765.f_287)
		{
			__LIB_2__::func_862(798.2925f, 1509.681f, 203.7047f, 21f, "native1_camp", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
			Global_1934765.f_287 = 1;
		}
	}
	else
	{
		__LIB_0__::func_400(joaat("NAT_NATIVE1_ARMY_01"));
		__LIB_5__::func_440("ntv1_armycamp");
		if (Global_1934765.f_287)
		{
			__LIB_1__::func_222(798.2925f, 1509.681f, 203.7047f, 0);
			Global_1934765.f_287 = 0;
		}
	}
	if (__LIB_0__::func_898(1954026328))
	{
		__LIB_0__::func_401(-1835067413);
		__LIB_0__::func_400(-1392150519);
		__LIB_4__::func_495(226);
	}
	else
	{
		__LIB_0__::func_401(-1392150519);
		__LIB_0__::func_400(-1835067413);
		__LIB_4__::func_524(226);
	}
	if (__LIB_0__::func_898(-330120947))
	{
		__LIB_0__::func_401(joaat("SDS_WELL_COVER"));
	}
	else
	{
		__LIB_0__::func_400(joaat("SDS_WELL_COVER"));
	}
	if (__LIB_0__::func_898(-1764522338))
	{
		__LIB_0__::func_400(joaat("N_1114_WATERTOWER01_FEUD1"));
		__LIB_0__::func_401(joaat("N_1114_WATERTOWER01_DEFAULT"));
	}
	else
	{
		__LIB_0__::func_401(joaat("N_1114_WATERTOWER01_FEUD1"));
		__LIB_0__::func_400(joaat("N_1114_WATERTOWER01_DEFAULT"));
	}
	if (__LIB_0__::func_898(-76237062))
	{
		__LIB_0__::func_401(-1085363933);
		__LIB_0__::func_401(-537740003);
		__LIB_5__::func_441("trn1_nav_ann_shootout_00");
	}
	else
	{
		__LIB_0__::func_400(-1085363933);
		__LIB_0__::func_400(-537740003);
		__LIB_5__::func_440("trn1_nav_ann_shootout_00");
	}
	if (__LIB_0__::func_898(-333135263))
	{
		__LIB_0__::func_401(728046625);
	}
	else
	{
		__LIB_0__::func_400(728046625);
	}
	if (__LIB_0__::func_898(885203519))
	{
		__LIB_4__::func_495(228);
	}
	else
	{
		__LIB_4__::func_524(228);
	}
	if (__LIB_0__::func_898(-1080627546))
	{
		__LIB_4__::func_495(227);
	}
	else
	{
		__LIB_4__::func_524(227);
	}
	if (__LIB_0__::func_898(1522511407))
	{
		__LIB_0__::func_401(-929277449);
		__LIB_0__::func_401(-723094901);
		__LIB_0__::func_401(-801609437);
	}
	else
	{
		__LIB_0__::func_400(-929277449);
		__LIB_0__::func_400(-723094901);
		__LIB_0__::func_400(-801609437);
	}
	if (__LIB_0__::func_898(1446719356))
	{
		__LIB_0__::func_401(joaat("P_12P_BLACKWHITE_CAMP"));
	}
	else
	{
		__LIB_0__::func_400(joaat("P_12P_BLACKWHITE_CAMP"));
	}
	if (__LIB_0__::func_898(171107021))
	{
		__LIB_0__::func_401(joaat("N_11P_BLACKWHITE_SETUPCAMP"));
	}
	else
	{
		__LIB_0__::func_400(joaat("N_11P_BLACKWHITE_SETUPCAMP"));
	}
	return true;
}

int func_124(var uParam0, int iParam1, int iParam2)
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
		return func_124(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_144()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	__LIB_18__::func_502(&Global_1949604);
	__LIB_19__::func_180();
	iVar2 = 0;
	if (__LIB_0__::func_609(1))
	{
		Global_1946804.f_1 = Global_26796.f_775;
		__LIB_1__::func_828(0);
		if (((Global_1946804.f_1 == -2125499975 || Global_1946804.f_1 == -449205311) && __LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1)) && !__LIB_0__::func_609(16))
		{
			func_419(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
			__LIB_1__::func_101();
			__LIB_9__::func_966(16);
		}
		__LIB_19__::func_179();
		switch (Global_1946804.f_1)
		{
			case -2125499975:
			case -449205311:
				Global_40.f_39 = joaat("PLAYER_ZERO");
				Global_1935630.f_2 = Global_40.f_39;
				break;
			case 1160113249:
				Global_1935630.f_2 = joaat("PLAYER_THREE");
				if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::GET_ENTITY_MODEL(Global_35) != joaat("PLAYER_THREE"))
				{
					Global_40.f_39 = 0;
				}
				break;
		}
	}
	else
	{
		__LIB_1__::func_828(1);
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_26796.f_26[iVar0 /*120*/] = 0;
			Global_26796.f_26[iVar0 /*120*/].f_1 = 0;
			iVar1 = 0;
			while (iVar1 < 39)
			{
				vVar3.x = Global_1946804.f_57[iVar1 /*11*/];
				Global_26796.f_26[iVar0 /*120*/].f_1.f_1[iVar1 /*3*/] = { vVar3 };
				iVar1++;
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 39)
		{
			vVar3.x = Global_1946804.f_57[iVar1 /*11*/];
			Global_1946804.f_1497.f_1[iVar1 /*3*/] = { vVar3 };
			Global_1946804.f_1378.f_1[iVar1 /*3*/] = { vVar3 };
			iVar1++;
		}
		if ((((Global_1946804.f_1 == 0 || Global_1946804.f_1 == -2125499975) || Global_1946804.f_1 == -449205311) || Global_1946804.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE")) || Global_1946804.f_1 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		{
			__LIB_9__::func_967(-2125499975);
			__LIB_1__::func_633(&(Global_1946804.f_1378), 2020890174, &iVar2, 0, 0, 0, 0);
			__LIB_0__::func_921(joaat("MPC_SP_DEFAULT_INTER_OUTFIT_TYPES"));
			__LIB_1__::func_633(&(Global_1946804.f_1378), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &iVar2, 0, 1, 0, 0);
			Global_26796.f_776 = 0;
			__LIB_1__::func_443(-1, 0, 1, 1, 1, 0);
			__LIB_10__::func_824(-1, 0, 0, 6);
			__LIB_18__::func_491(joaat("CLOTHING_MULTI_ITEM_CLEAN"), 3, 3, 3, 0);
			__LIB_18__::func_492(0, 5, 0);
			Global_40.f_39 = joaat("PLAYER_ZERO");
			Global_1935630.f_2 = Global_40.f_39;
			Global_26796.f_775 = Global_1946804.f_1;
		}
		else if (Global_1946804.f_1 == 1160113249)
		{
			__LIB_9__::func_967(Global_1946804.f_1);
			switch (Global_1946804.f_1)
			{
				case 1160113249:
					Global_1935630.f_2 = joaat("PLAYER_THREE");
					Global_40.f_39 = 0;
					break;
			}
		}
		__LIB_9__::func_966(1);
		__LIB_1__::func_835(7);
	}
	Global_1347698 = 0;
	Global_1347698.f_1 = 0;
	Global_1347698.f_2 = 0;
	return 1;
}

bool func_152(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
	if (!__LIB_1__::func_831(iParam0, iParam1, bParam2, iParam5))
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
				func_152(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_9__::func_355(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(2);
					}
					else
					{
						__LIB_9__::func_355(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(1);
					}
				}
			}
			else if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
				{
					__LIB_9__::func_355(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(2);
				}
				else
				{
					__LIB_9__::func_355(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
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
		__LIB_5__::func_391(28);
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
			if (!__LIB_1__::func_823(iParam0, iParam5, &bParam2, bParam3, bParam4))
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
			__LIB_18__::func_763(iParam0);
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
			__LIB_10__::func_444(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1718133314))
		{
			__LIB_10__::func_445(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1738650224))
		{
			__LIB_10__::func_446(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, 949916894))
		{
			func_489(iParam0);
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
			__LIB_10__::func_845(iParam0, iParam1);
			__LIB_1__::func_759(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_11__::func_620(iParam0, 0, 0, 0);
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
						func_152(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_152(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_152(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_152(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_152(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_152(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_152(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_5__::func_391(24);
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
					func_152(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_152(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			func_516(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_6__::func_187(iParam0);
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
				func_152(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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
		__LIB_1__::func_158(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_159(bool bParam0)
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_FISHINGROD"), 0, false))
	{
		func_152(joaat("WEAPON_FISHINGROD"), 1, bParam0, 0, 0, 752097756, 0, 0, 0, 0);
	}
}

void func_163(vector3 vParam0, bool bParam3)
{
	int iVar0;
	if (!__LIB_0__::func_28() || bParam3)
	{
		iVar0 = __LIB_12__::func_59(vParam0, 1);
		Global_40.f_7729 = iVar0;
	}
	else
	{
		iVar0 = Global_40.f_7729;
	}
	Global_1905941 = Global_40.f_7729;
	__LIB_1__::func_811(Global_35, iVar0, 1, !bParam3, 0);
	__LIB_11__::func_867();
}

void func_174()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_541();
	func_542();
	func_543();
	func_544();
	func_545();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

bool func_182(int iParam0)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	sVar0 = __LIB_16__::func_183(iParam0);
	SCRIPTS::REQUEST_SCRIPT(sVar0);
	if (SCRIPTS::HAS_SCRIPT_LOADED(sVar0))
	{
		if (__LIB_0__::func_2() == -1)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1897952.f_42, false))
			{
				PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1897952.f_42, 523);
				return true;
			}
			if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(sVar0)) > 0)
			{
				__LIB_5__::func_234(sVar0, 523);
				return true;
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1897952.f_43)) && NETWORK::NETWORK_IS_SCRIPT_ACTIVE(&(Global_1897952.f_43), Global_1897952.f_51, true, 0))
		{
			SCRIPTS::_0x7DE4643157AD646C(Global_1897952.f_42);
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar0);
			return false;
		}
		Global_1897952.f_42 = SCRIPTS::START_NEW_SCRIPT(sVar0, 1024);
		StringCopy(&(Global_1897952.f_43), sVar0, 64);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar0);
		bVar1 = __LIB_10__::func_38(iParam0);
		LAW::_0x5E6F375CA101C108(PLAYER::PLAYER_ID(), (bVar1 || __LIB_10__::func_853(__LIB_1__::func_905(iParam0))));
		if (__LIB_1__::func_905(iParam0) != __LIB_1__::func_905(__LIB_1__::func_898()) || bVar1)
		{
			__LIB_17__::func_436(__LIB_1__::func_898(), 0);
			iVar2 = __LIB_1__::func_447(Global_36, 1);
			if (!__LIB_1__::func_120(iVar2))
			{
				if (!__LIB_0__::func_1(Global_1935630, 16384) && !func_46())
				{
					if (__LIB_1__::func_931(__LIB_1__::func_905(iParam0)) >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(1))
					{
						__LIB_17__::func_450(-1, -1, -1, 0, __LIB_1__::func_905(iParam0), 0);
					}
					else if (bVar1)
					{
						__LIB_17__::func_450(-1, iParam0, -1, 0, -1, 0);
					}
				}
			}
			if (!__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				__LIB_17__::func_457(iParam0);
			}
			else
			{
				__LIB_17__::func_436(iParam0, 1);
			}
		}
		if (__LIB_1__::func_898() != -1)
		{
			__LIB_19__::func_31(__LIB_1__::func_898());
			__LIB_19__::func_30(__LIB_1__::func_898());
		}
		__LIB_16__::func_193(iParam0);
		if (__LIB_16__::func_429(iParam0))
		{
			PLAYER::_0x14E57F88BA0A07FC(__LIB_16__::func_194(iParam0));
		}
		__LIB_17__::func_451(iParam0);
		__LIB_17__::func_448(iParam0);
		iVar3 = -1000;
		if (__LIB_0__::func_20(__LIB_0__::func_12()))
		{
			iVar3 = Global_1888801[__LIB_0__::func_12() /*35*/].f_1;
		}
		if (iVar3 < (MISC::GET_GAME_TIMER() - 1000))
		{
			iVar4 = __LIB_1__::func_447(Global_36, 1);
			if (__LIB_5__::func_235(iVar4, 1, 0) == 0)
			{
				func_575(__LIB_4__::func_929(iParam0, 1), __LIB_1__::func_905(iParam0));
			}
			__LIB_2__::func_759(0.775f, 0.2f, 0.025f, 0f);
			__LIB_17__::func_449(iParam0);
		}
		if (8 == iParam0 != __LIB_0__::func_898(373691918))
		{
			func_577(373691918, 8 == iParam0, 0);
		}
		return true;
	}
	return false;
}

int func_183(vector3 vParam0)
{
	return func_578(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

bool func_184()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	fVar2 = 4f;
	fVar3 = 3f;
	if ((Global_1357549.f_1641 >= 6 && Global_1357549.f_1641 != 10) || (Global_1357549.f_1641 == 10 && __LIB_0__::func_265(&(Global_1357549.f_1642)) < ((fVar2 + fVar3) + 6.75f)))
	{
		CAM::_0x71D71E08A7ED5BD7(1);
	}
	switch (Global_1357549.f_1641)
	{
		case 2:
		case 4:
		case 5:
		case 6:
			PED::SET_PED_RESET_FLAG(Global_35, 129, true);
			break;
	}
	switch (Global_1357549.f_1641)
	{
		case 0:
			if (__LIB_1__::func_652() == 0 || __LIB_2__::func_776())
			{
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 27)
			{
				if (__LIB_0__::func_272(__LIB_0__::func_271(iVar0), 0))
				{
					iVar1 = PED::_0x89816B58C3466262(__LIB_0__::func_271(iVar0));
					if (iVar1 == 3)
					{
						Global_1357549.f_1645 = __LIB_19__::func_32(iVar0);
						PED::SET_PED_CONFIG_FLAG(__LIB_0__::func_271(iVar0), 343, true);
						if ((Global_1357549.f_1645 != -1 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(__LIB_0__::func_271(iVar0)))
						{
							__LIB_1__::func_265(__LIB_0__::func_271(Global_1357549.f_1645), "KNOCKOUT_WARNING", 334581534, Global_35, 1, 0, 0, 1);
							Global_1357549.f_1646 = 1;
							Global_1357549.f_1647 = 1;
							Global_1357549.f_1641 = 1;
						}
					}
					else if (iVar1 == 1)
					{
						Global_1357549.f_1645 = __LIB_19__::func_32(iVar0);
						if ((Global_1357549.f_1645 != -1 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(__LIB_0__::func_271(iVar0)))
						{
							if (Global_1357549.f_1646 == 1 || ENTITY::_0x9A100F1CF4546629(__LIB_0__::func_271(iVar0)))
							{
								if (ENTITY::_0x9A100F1CF4546629(__LIB_0__::func_271(iVar0)))
								{
									__LIB_1__::func_265(__LIB_0__::func_271(Global_1357549.f_1645), "LEAVE_DOG_ALONE", joaat("SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL"), Global_35, 1, 0, 0, 1);
									PED::_0xA7DC9266ED6A4E51(__LIB_0__::func_271(iVar0));
								}
								else
								{
									Global_1357549.f_1646 = 0;
									if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
									{
										__LIB_1__::func_265(__LIB_0__::func_271(Global_1357549.f_1645), "GENERIC_MOCK", joaat("SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL"), Global_35, 1, 0, 0, 1);
									}
									else
									{
										__LIB_17__::func_437(iVar0);
									}
								}
							}
						}
					}
					else if (iVar1 == 2)
					{
						Global_1357549.f_1645 = __LIB_19__::func_32(iVar0);
						if (((Global_1357549.f_1645 != -1 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(__LIB_0__::func_271(iVar0))) && !AUDIO::IS_ANY_SPEECH_PLAYING(__LIB_0__::func_271(Global_1357549.f_1645)))
						{
							if (Global_1357549.f_1647 == 1)
							{
								Global_1357549.f_1647 = 0;
								if (__LIB_5__::func_995(iVar0))
								{
									__LIB_1__::func_265(__LIB_0__::func_271(Global_1357549.f_1645), "DISPUTE_INTERVENE_CAMP_MALE", 334581534, Global_35, 1, 0, 0, 1);
								}
								else
								{
									__LIB_1__::func_265(__LIB_0__::func_271(Global_1357549.f_1645), "DISPUTE_INTERVENE_CAMP_FEMALE", 334581534, Global_35, 1, 0, 0, 1);
								}
							}
						}
					}
				}
				iVar0++;
			}
			break;
		case 1:
			__LIB_17__::func_409(Global_1357549.f_1635, &(Global_1357549.f_1637), &(Global_1357549.f_1640));
			if ((__LIB_1__::func_652() == 0 || __LIB_2__::func_776()) || __LIB_0__::func_86(Global_1357549.f_1637))
			{
				__LIB_17__::func_438();
				Global_1357549.f_1641 = 0;
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 27)
			{
				if (__LIB_0__::func_272(__LIB_0__::func_271(iVar0), 0))
				{
					iVar1 = PED::_0x89816B58C3466262(__LIB_0__::func_271(iVar0));
					if (iVar1 == 4)
					{
						if (__LIB_0__::func_86(Global_1357549.f_1637) == 0)
						{
							if (PED::IS_PED_ON_MOUNT(Global_35) == 0)
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) == 0 && PED::IS_PED_IN_MELEE_COMBAT(Global_35) == 0)
								{
									Global_1357549.f_1645 = __LIB_17__::func_452(iVar0, 1);
									if (__LIB_0__::func_31(Global_1357549.f_1645) && !AUDIO::IS_ANY_SPEECH_PLAYING(__LIB_0__::func_271(Global_1357549.f_1645)))
									{
										if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_1357549.f_1636))
										{
											ANIMSCENE::_DELETE_ANIM_SCENE(Global_1357549.f_1636);
										}
										__LIB_17__::func_438();
										Global_1357549.f_1636 = ANIMSCENE::_CREATE_ANIM_SCENE(__LIB_17__::func_410(), 0, __LIB_17__::func_411(Global_1357549.f_1635), false, true);
										Global_1357549.f_1641 = 3;
									}
									else
									{
										__LIB_17__::func_438();
										Global_1357549.f_1641 = 0;
									}
								}
							}
							else
							{
								PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_INTERACT_LOCKON_NEG"), false);
							}
						}
					}
				}
				iVar0++;
			}
			break;
		case 3:
			ANIMSCENE::LOAD_ANIM_SCENE(Global_1357549.f_1636);
			ANIMSCENE::_0xDF7B5144E25CD3FE(Global_1357549.f_1636, __LIB_17__::func_411(Global_1357549.f_1635));
			Global_1357549.f_1641 = 2;
			break;
		case 2:
			if (__LIB_0__::func_699(Global_1357549.f_1645))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_1357549.f_1636))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Global_1357549.f_1636, true, false))
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(Global_1357549.f_1636, __LIB_17__::func_411(Global_1357549.f_1635)))
						{
							TASK::CLEAR_PED_TASKS(__LIB_0__::func_271(Global_1357549.f_1645), true, false);
							__LIB_17__::func_439();
							__LIB_0__::func_82(0, 0, 0);
							Global_1357549.f_1641 = 4;
						}
					}
				}
			}
			else
			{
				func_598(Global_1357549.f_1645, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
			}
			break;
		case 4:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1357549.f_1636, false))
			{
				if (__LIB_0__::func_272(Global_35, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				}
				__LIB_17__::func_440();
				STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_PLAYER_SLEEP_GROUND"), 15, 0, 0);
				ENTITY::SET_ENTITY_VISIBLE(__LIB_0__::func_271(Global_1357549.f_1645), true);
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(__LIB_0__::func_271(Global_1357549.f_1645), false, false, true, false);
				__LIB_1__::func_265(__LIB_0__::func_271(Global_1357549.f_1645), __LIB_17__::func_412(), 272211449, Global_35, 1, 0, 0, 1);
				Global_1357549.f_1641 = 5;
			}
			else
			{
				__LIB_12__::func_999();
				ANIMSCENE::START_ANIM_SCENE(Global_1357549.f_1636);
			}
			break;
		case 5:
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Global_1357549.f_1636) > 0.15f)
			{
				if (AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(Global_35, 0);
				}
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Global_1357549.f_1636) > 0.92f || (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Global_35) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Global_1357549.f_1636) > 0.37f))
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				ANIMSCENE::ABORT_ANIM_SCENE(Global_1357549.f_1636, false);
				__LIB_1__::func_283(&(Global_1357549.f_1642), 0);
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(__LIB_0__::func_271(Global_1357549.f_1645), true, false, true, false);
				__LIB_4__::func_253(joaat("CSTAG_GRIEFING_KNOCKOUT_POST"), 1017034651, joaat("CSTAG_PRIORITY_CRITICAL"), 6, 1, 1, 0);
				Global_1357549.f_1641 = 6;
			}
			break;
		case 6:
			if (__LIB_0__::func_265(&(Global_1357549.f_1642)) > fVar2)
			{
				ENTITY::SET_ENTITY_COORDS(Global_35, Global_1357549.f_1637, true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, Global_1357549.f_1640);
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(Global_1357549.f_1636, __LIB_17__::func_411(Global_1357549.f_1635));
				ANIMSCENE::RESET_ANIM_SCENE(Global_1357549.f_1636, 0);
				ANIMSCENE::_DELETE_ANIM_SCENE(Global_1357549.f_1636);
				CLOCK::ADD_TO_CLOCK_TIME(4, 0, 0);
				Global_1357549.f_1641 = 8;
				__LIB_1__::func_774(Global_1357549.f_1645, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				func_604();
				__LIB_19__::func_33(fVar3);
				return true;
			}
			break;
		case 8:
			if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_PLAYER_SLEEP_GROUND"), false))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
				{
					if (__LIB_0__::func_265(&(Global_1357549.f_1642)) > (fVar2 + 2.5f))
					{
						Global_1357549.f_1641 = 7;
					}
				}
			}
			break;
		case 7:
			Global_1357549.f_1635++;
			if (Global_1357549.f_1635 >= 4)
			{
				Global_1357549.f_1635 = 0;
			}
			PED::_0xC494C76A34266E82(Global_35, 3);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(250);
			}
			__LIB_16__::func_772();
			Global_1357549.f_1641 = 9;
			break;
		case 9:
			__LIB_17__::func_413();
			if (__LIB_0__::func_265(&(Global_1357549.f_1642)) > (fVar2 + fVar3))
			{
				Global_1357549.f_1641 = 10;
			}
			break;
		case 10:
			if (PED::IS_PED_USING_ANY_SCENARIO(Global_35) == 0)
			{
				if (__LIB_0__::func_272(Global_35, 0))
				{
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					}
				}
				__LIB_0__::func_37(&(Global_1357549.f_1642));
				STREAMING::_0x4EDDD9E9CA5AF985(joaat("WORLD_PLAYER_SLEEP_GROUND"));
				__LIB_1__::func_715(2, joaat("HONOR_EVENT_ANTAGONIZE"), 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				Global_1357549.f_1641 = 0;
			}
			break;
	}
	return false;
}

int func_187()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	if (Global_1572887.f_8)
	{
		return 1;
	}
	if ((Global_36 == 0f && Global_36.f_1 == 0f) && Global_36.f_2 == 0f)
	{
		return 1;
	}
	if (Global_1894899 & 264 != 0)
	{
		return 1;
	}
	if (Global_1572887.f_12 == -1 && __LIB_0__::func_382(64))
	{
		bVar0 = true;
	}
	else if (Global_1572887.f_12 == 0)
	{
		bVar0 = true;
	}
	bVar1 = false;
	if (__LIB_0__::func_20(Global_1894899.f_2))
	{
		bVar2 = VOLUME::_DOES_VOLUME_EXIST(Global_1888801[Global_1894899.f_2 /*35*/].f_3);
		bVar3 = true;
		if (bVar2)
		{
			bVar1 = VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1888801[Global_1894899.f_2 /*35*/].f_3, Global_36);
		}
	}
	bVar4 = PED::IS_PED_INJURED(Global_35);
	bVar5 = __LIB_0__::func_296(0, 1, 1);
	if (bVar0 && !bVar4)
	{
		if (__LIB_0__::func_20(Global_1894899.f_2))
		{
			__LIB_18__::func_264(Global_1894899.f_2, Global_1894899.f_2, bVar5);
			if (Global_1894899.f_5 != Global_1894899.f_2)
			{
				__LIB_18__::func_264(Global_1894899.f_5, Global_1894899.f_2, bVar5);
			}
		}
		else
		{
			__LIB_18__::func_264(Global_1894899.f_5, Global_1894899.f_2, bVar5);
		}
	}
	Global_1894899.f_5++;
	if (Global_1894899.f_5 >= 130)
	{
		Global_1894899.f_5 = 0;
	}
	if (bVar3)
	{
		func_613(Global_1894899.f_2, bVar1, bVar2);
	}
	else
	{
		iVar6 = 0;
		iVar7 = (130 - 1);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			iVar8 = __LIB_1__::func_447(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), 1);
			if (__LIB_0__::func_20(iVar8))
			{
				iVar6 = iVar8;
				iVar7 = iVar8;
			}
		}
		else if (__LIB_1__::func_510(8))
		{
			if (__LIB_0__::func_69(Global_1897952.f_41))
			{
				if ((Global_1897952.f_41 == 5 || Global_1897952.f_41 == 6) || Global_1897952.f_41 == 7)
				{
					iVar6 = __LIB_17__::func_414(7);
					iVar7 = __LIB_17__::func_415(6);
				}
				else
				{
					iVar6 = __LIB_17__::func_414(Global_1897952.f_41);
					iVar7 = __LIB_17__::func_415(Global_1897952.f_41);
				}
			}
		}
		if (Global_1894899.f_4 < iVar6 || Global_1894899.f_4 > iVar7)
		{
			bVar10 = __LIB_17__::func_416(&bVar9);
			if (!bVar10)
			{
				Global_1894899.f_4 = iVar6;
			}
		}
		func_613(Global_1894899.f_4, bVar1, VOLUME::_DOES_VOLUME_EXIST(Global_1888801[Global_1894899.f_4 /*35*/].f_3));
		if (bVar9)
		{
			Global_1894899.f_4 = iVar6;
		}
		else if (!bVar10)
		{
			Global_1894899.f_4++;
		}
	}
	return 1;
}

int func_198()
{
	return func_636();
}

void func_199()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_40.f_6563[iVar0 /*27*/].f_24 == 0 || Global_40.f_6563[iVar0 /*27*/].f_24 == 19)
		{
		}
		else
		{
			if (Global_40.f_6563[iVar0 /*27*/].f_24 == 1)
			{
				__LIB_7__::func_372(iVar0, 2);
			}
			if (Global_40.f_6563[iVar0 /*27*/].f_24 > 3 && Global_40.f_6563[iVar0 /*27*/].f_24 < 11)
			{
				__LIB_7__::func_372(iVar0, 11);
			}
			if (Global_40.f_6563[iVar0 /*27*/] == 9 || Global_40.f_6563[iVar0 /*27*/] == 11)
			{
				if (Global_40.f_6563[iVar0 /*27*/].f_24 == 16)
				{
					__LIB_7__::func_372(iVar0, 15);
				}
			}
		}
		iVar0++;
	}
}

void func_200()
{
	int iVar0;
	char* sVar1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_40.f_6563[iVar0 /*27*/].f_24 == 0 || Global_40.f_6563[iVar0 /*27*/].f_24 == 19)
		{
		}
		else
		{
			if (Global_40.f_6563[iVar0 /*27*/].f_24 >= 2)
			{
				__LIB_14__::func_137(&(Global_40.f_6563[iVar0 /*27*/]));
				__LIB_7__::func_373();
				__LIB_14__::func_138(&(Global_40.f_6563[iVar0 /*27*/]), 0);
			}
			if (Global_40.f_6563[iVar0 /*27*/].f_24 < 3)
			{
				__LIB_10__::func_834(Global_40.f_6563[iVar0 /*27*/]);
			}
			if (Global_40.f_6563[iVar0 /*27*/].f_24 == 3)
			{
				func_642(&(Global_40.f_6563[iVar0 /*27*/]), 0);
			}
			else if (Global_40.f_6563[iVar0 /*27*/].f_24 > 3 && Global_40.f_6563[iVar0 /*27*/].f_24 <= 11)
			{
				__LIB_12__::func_606(&(Global_40.f_6563[iVar0 /*27*/]), 1896170705 /* GXTEntry: "Find ~1~ some ~2~." */, "ITEM_REQ_RETURN", 0, 0, 0);
			}
			else if (Global_40.f_6563[iVar0 /*27*/].f_24 > 11)
			{
				sVar1 = __LIB_1__::func_464(Global_40.f_6563[iVar0 /*27*/].f_3, 0);
				switch (__LIB_0__::func_317())
				{
					case 1:
					case 2:
					case 6:
						__LIB_12__::func_606(&(Global_40.f_6563[iVar0 /*27*/]), 1896170705 /* GXTEntry: "Find ~1~ some ~2~." */, MISC::_CREATE_VAR_STRING(10, "ITEM_REQ_ITEM_PICKUP_TENT", sVar1), 0, 0, 0);
						break;
					case 3:
					case 8:
						__LIB_12__::func_606(&(Global_40.f_6563[iVar0 /*27*/]), 1896170705 /* GXTEntry: "Find ~1~ some ~2~." */, MISC::_CREATE_VAR_STRING(10, "ITEM_REQ_ITEM_PICKUP_ROOM", sVar1), 0, 0, 0);
						break;
				}
			}
		}
		iVar0++;
	}
}

bool func_203(int iParam0)
{
	return (Global_40.f_12004 && iParam0) != 0;
}

int func_204()
{
	int iVar0;
	iVar0 = 3;
	while (iVar0 >= 0)
	{
		if (func_203(__LIB_10__::func_746(iVar0)))
		{
			return __LIB_10__::func_746(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_205(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			__LIB_9__::func_355(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
			break;
		case 2:
			__LIB_9__::func_355(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
			break;
		case 4:
			break;
	}
}

int func_207()
{
	int iVar0;
	iVar0 = 7;
	while (iVar0 >= 0)
	{
		if (__LIB_7__::func_784(func_652(iVar0)))
		{
			return func_652(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_208(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			__LIB_9__::func_355(39, 0, 0, 0, 0, 0, -1, 0);
			break;
		case 2:
			__LIB_9__::func_355(39, 0, 0, 0, 0, 0, -1, 0);
			break;
		case 4:
			__LIB_9__::func_355(39, 0, 0, 0, 0, 0, 7, 0);
			break;
		case 8:
			__LIB_9__::func_355(39, 0, 0, 0, 0, 0, 0, 0);
			break;
		case 16:
			__LIB_9__::func_355(39, 0, 0, 0, 0, 0, 1, 0);
			break;
		case 32:
			__LIB_9__::func_355(39, 0, 0, 0, 0, 0, 2, 0);
			break;
		case 64:
			break;
	}
}

void func_209()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar4 = __LIB_0__::func_668(iVar0);
		if (__LIB_0__::func_27(Global_40.f_8863.f_148, iVar4))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		iVar3 = MISC::GET_HASH_KEY("DISCO_DREAM");
		iVar2 = 20;
		if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar3))
		{
			UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar3, 0f, 0f, 0f, MISC::GET_HASH_KEY("DISCO_DREAM"), MISC::GET_HASH_KEY("DISCO_DRM_DESC"), 0);
		}
		UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar3, MISC::_CREATE_VAR_STRING(2, "DISCO_DC_FOUND", iVar1, iVar2));
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar3, 0, MISC::_CREATE_VAR_STRING(2, "DISCO_DRM_OBJ", iVar1, iVar2), iVar1 == iVar2, false, false);
		UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar3, MISC::GET_HASH_KEY("TOAST_DREAMCATCHER"), MISC::GET_HASH_KEY("hud_toasts"));
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar3, MISC::GET_HASH_KEY("MISSION_COLLECTDREAM"), MISC::GET_HASH_KEY("SP_MISSIONS_13"));
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar3, 0, "DISCO_DRM_CHECK1", iVar1 == iVar2, true, false);
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar3, 1, "DISCO_DRM_CHECK2", func_655(373034311, 2), true, false);
	}
}

int func_210()
{
	int iVar0;
	int iVar1;
	iVar0 = 6;
	while (iVar0 >= 0)
	{
		iVar1 = func_656(iVar0);
		if (func_657(iVar1))
		{
			return iVar1;
		}
		iVar0 = (iVar0 + -1);
	}
	return func_656(iVar0);
}

void func_211(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			__LIB_9__::func_355(43, 0, 0, joaat("EXOTIC_STAGE_01"), 0, 0, -1, 0);
			break;
		case 2:
			__LIB_9__::func_355(43, 0, 0, joaat("EXOTIC_STAGE_02"), 0, 0, -1, 0);
			break;
		case 4:
			__LIB_9__::func_355(43, 0, 0, joaat("EXOTIC_STAGE_03"), 0, 0, -1, 0);
			break;
		case 8:
			__LIB_9__::func_355(43, 0, 0, joaat("EXOTIC_STAGE_04"), 0, 0, -1, 0);
			break;
		case 16:
			__LIB_9__::func_355(43, 0, 0, joaat("EXOTIC_STAGE_05"), 0, 0, -1, 0);
			break;
		case 32:
			break;
	}
}

int func_212()
{
	int iVar0;
	iVar0 = 6;
	while (iVar0 >= 0)
	{
		if (__LIB_7__::func_786(func_656(iVar0)))
		{
			return func_656(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_213(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			__LIB_9__::func_355(41, 0, 0, 0, 0, 0, -1, 0);
			break;
		case 2:
			__LIB_9__::func_355(41, 0, 0, 0, 0, 0, 7, 0);
			break;
		case 4:
			__LIB_9__::func_355(41, 0, 0, 0, 0, 0, 0, 0);
			break;
		case 8:
			__LIB_9__::func_355(41, 0, 0, 0, 0, 0, 1, 0);
			break;
		case 16:
			__LIB_9__::func_355(41, 0, 0, 0, 0, 0, 2, 0);
			break;
		case 32:
			break;
	}
}

bool func_214(int iParam0)
{
	return (Global_40.f_12004.f_4 && iParam0) != 0;
}

int func_215()
{
	int iVar0;
	iVar0 = 3;
	while (iVar0 >= 0)
	{
		if (func_214(__LIB_10__::func_746(iVar0)))
		{
			return __LIB_10__::func_746(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_216(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_661(1, 0, 0, 0);
			break;
		case 2:
			func_661(15, 1, 0, 0);
			break;
		case 4:
			break;
	}
}

int func_217()
{
	int iVar0;
	iVar0 = 7;
	while (iVar0 >= 0)
	{
		if (__LIB_7__::func_788(func_652(iVar0)))
		{
			return func_652(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_218(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			__LIB_9__::func_355(49, 0, 0, 0, 0, 0, -1, 0);
			break;
		case 2:
			__LIB_9__::func_355(49, 0, 0, 0, 0, 0, -1, 0);
			break;
		case 4:
			__LIB_9__::func_355(49, 0, 0, 0, 0, 0, 7, 0);
			break;
		case 8:
			__LIB_9__::func_355(49, 0, 0, 0, 0, 0, 0, 0);
			break;
		case 16:
			__LIB_9__::func_355(49, 0, 0, 0, 0, 0, 1, 0);
			break;
		case 32:
			__LIB_9__::func_355(49, 0, 0, 0, 0, 0, 2, 0);
			break;
		case 64:
			break;
	}
}

int func_219()
{
	int iVar0;
	iVar0 = 22;
	while (iVar0 >= 0)
	{
		if (__LIB_7__::func_782(func_664(iVar0)))
		{
			return func_664(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_220(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case 1:
			__LIB_8__::func_940(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			break;
		case 2:
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), 0, 0, 7, 0);
			break;
		case 4:
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), 0, 0, 7, 1);
			break;
		case 8:
			__LIB_8__::func_940(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			break;
		case 16:
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), 0, 0, 7, 0);
			break;
		case 32:
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), 0, 0, 7, 1);
			break;
		case 64:
			__LIB_8__::func_940(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			break;
		case 128:
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), 0, 0, 7, 0);
			break;
		case 256:
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), 0, 0, 7, 1);
			break;
		case 512:
			__LIB_8__::func_940(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			break;
		case 1024:
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 7, 0);
			break;
		case 2048:
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 7, 1);
			break;
		case 4096:
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 3, 0);
			break;
		case 8192:
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			break;
		case 16384:
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 5, 0);
			break;
		case 32768:
			__LIB_8__::func_940(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			break;
		case 65536:
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 7, 0);
			break;
		case 262144:
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 0, 0);
			break;
		case 524288:
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			break;
		case 1048576:
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 2, 0);
			break;
		case 2097152:
			break;
	}
}

bool func_221(int iParam0)
{
	return (Global_40.f_12004.f_7 && iParam0) != 0;
}

int func_222()
{
	int iVar0;
	iVar0 = 4;
	while (iVar0 >= 0)
	{
		if (func_221(__LIB_8__::func_76(iVar0)))
		{
			return __LIB_8__::func_76(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_223(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
			break;
		case 2:
			__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
			break;
		case 4:
			__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
			break;
		case 8:
			break;
	}
}

bool func_224(int iParam0)
{
	return (Global_40.f_12004.f_8 && iParam0) != 0;
}

int func_225()
{
	int iVar0;
	iVar0 = 4;
	while (iVar0 >= 0)
	{
		if (func_224(__LIB_8__::func_76(iVar0)))
		{
			return __LIB_8__::func_76(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_226(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
			break;
		case 2:
			__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
			break;
		case 4:
			__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
			break;
		case 8:
			break;
	}
}

bool func_227(int iParam0)
{
	return (Global_40.f_12004.f_9 && iParam0) != 0;
}

int func_228()
{
	int iVar0;
	iVar0 = 4;
	while (iVar0 >= 0)
	{
		if (func_227(__LIB_8__::func_76(iVar0)))
		{
			return __LIB_8__::func_76(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_229(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
			break;
		case 2:
			__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
			break;
		case 4:
			__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
			break;
		case 8:
			break;
	}
}

int func_231()
{
	int iVar0;
	iVar0 = 3;
	while (iVar0 >= 0)
	{
		if (__LIB_0__::func_458(__LIB_10__::func_746(iVar0)))
		{
			return __LIB_10__::func_746(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_232(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
			break;
		case 2:
			__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
			break;
		case 4:
			break;
	}
}

bool func_233(int iParam0)
{
	return (Global_40.f_12004.f_11 && iParam0) != 0;
}

int func_234()
{
	int iVar0;
	iVar0 = 4;
	while (iVar0 >= 0)
	{
		if (func_233(__LIB_8__::func_76(iVar0)))
		{
			return __LIB_8__::func_76(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_235(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
			break;
		case 2:
			__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
			break;
		case 4:
			__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
			break;
		case 8:
			break;
	}
}

bool func_236(int iParam0)
{
	return (Global_40.f_12004.f_12 && iParam0) != 0;
}

int func_237()
{
	int iVar0;
	iVar0 = 5;
	while (iVar0 >= 0)
	{
		if (func_236(__LIB_10__::func_747(iVar0)))
		{
			return __LIB_10__::func_747(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_238(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
			break;
		case 2:
			__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
			break;
		case 4:
			__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
			break;
		case 8:
			__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
			break;
		case 16:
			break;
	}
}

int func_239(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 29;
		case 0:
			return 43;
		case 2:
			return 61;
		case 3:
			return 73;
		default:
			break;
	}
	return -1;
}

void func_252()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_685(iVar0);
		iVar0++;
	}
}

void func_253()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = func_686(iVar0);
		if (iVar1 == 0)
		{
		}
		else
		{
			func_687(iVar1);
		}
		iVar0++;
	}
}

void func_254()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = func_688(iVar0);
		if (iVar1 == 0)
		{
		}
		else
		{
			func_689(iVar1);
		}
		iVar0++;
	}
}

void func_255()
{
	if (!__LIB_1__::func_25(Global_1347702[26 /*49*/].f_15, 1))
	{
		return;
	}
	if (__LIB_1__::func_25(Global_1347702[28 /*49*/].f_15, 1))
	{
		return;
	}
	if (__LIB_1__::func_25(__LIB_3__::func_918(37), 1))
	{
		if (!__LIB_1__::func_25(__LIB_3__::func_918(44), 1))
		{
			return;
		}
	}
	if (__LIB_1__::func_25(__LIB_3__::func_918(59), 1))
	{
		if (!__LIB_1__::func_25(__LIB_3__::func_918(67), 1))
		{
			return;
		}
	}
	func_690();
	func_691();
	func_692();
	func_693();
}

void func_256()
{
	if (Global_43891)
	{
		return;
	}
	else if (__LIB_1__::func_44(__LIB_3__::func_918(23)))
	{
		return;
	}
	func_695();
	func_696();
	func_697();
	func_698();
	func_699();
	func_700();
}

int func_277(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9;
		case 1:
			return 16;
		case 2:
			return 36;
		case 3:
			return 79;
		case 4:
			return 125;
		case 5:
			return 127;
		case 6:
			return 118;
		case 7:
			return 129;
		case 8:
			return 114;
		default:
			break;
	}
	return -1;
}

int func_280(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 373034311;
		case 1:
			return 870958936;
		case 2:
			return -1287911066;
		case 3:
			return -777592153;
		case 4:
			return -1084929085;
		case 5:
			return 1347913620;
		case 6:
			return -1568839185;
		case 7:
			return 1937333853;
		case 8:
			return -780455182;
		case 9:
			return -2019711818;
		case 10:
			return -1636964661;
		case 11:
			return -321841939;
		case 12:
			return 1154568952;
		case 13:
			return -1646022773;
		case 14:
			return 2134589549;
		case 15:
			return -1109016944;
		case 16:
			return -1787770845;
		case 17:
			return -1761578407;
		case 18:
			return 404434344;
		case 19:
			return 503180747;
		case 20:
			return -709811179;
		case 21:
			return -1609238411;
		case 22:
			return 173549940;
		case 23:
			return -1420566543;
		case 24:
			return -1208846034;
		case 25:
			return -986176781;
		case 26:
			return 1048086072;
		case 27:
			return 939555152;
		case 28:
			return -1859413640;
		case 29:
			return -161804536;
		case 30:
			return -30872859;
		case 31:
			return -1505275983;
		case 32:
			return 733338689;
		case 33:
			return 1034793488;
		case 34:
			return -2009137002;
		case 35:
			return 74587361;
		case 36:
			return 2072029413;
		case 37:
			return -261997819;
		case 38:
			return -599506500;
		case 39:
			return 1424723727;
		case 40:
			return -35775921;
		case 41:
			return 2135153015;
		case 42:
			return 1519228573;
		case 43:
			return 1124200691;
		case 44:
			return -357364973;
		case 45:
			return -1308658310;
		case 46:
			return -641229542;
		case 47:
			return -1427565340;
		case 48:
			return -1614148516;
		case 49:
			return -1958832660;
		case 50:
			return -1882503209;
		case 51:
			return -1300082860;
		case 52:
			return 247563739;
		case 53:
			return -1481450947;
		case 54:
			return 233600584;
		case 55:
			return -763376358;
		case 56:
			return 1801731633;
		case 57:
			return 1490223565;
		case 58:
			return 1335921989;
		case 59:
			return -2008558277;
		case 60:
			return 435290930;
		case 61:
			return -1494823099;
		case 62:
			return 1861313914;
		case 63:
			return 1519472817;
		case 64:
			return -1859023693;
		case 65:
			return 1734766691;
		case 66:
			return -1824429070;
		case 67:
			return 149709049;
		case 68:
			return -968854939;
		case 69:
			return 1342653896;
		case 70:
			return 657666087;
		case 71:
			return 1187917501;
		case 72:
			return 58958195;
		case 73:
			return 2072069278;
		case 74:
			return -499529359;
		case 75:
			return 425000526;
		case 76:
			return -1714262909;
		case 77:
			return 1505050944;
		case 78:
			return -1283611369;
		case 79:
			return -919236330;
		case 80:
			return 1431862613;
		case 81:
			return -1243267511;
		case 82:
			return 918206817;
		case 83:
			return -920971071;
		case 84:
			return -1053108445;
		case 85:
			return 1284679164;
		case 86:
			return 1351526287;
		case 87:
			return 397377585;
		case 88:
			return -409986722;
		case 89:
			return -1887999095;
		case 90:
			return 1982045664;
		case 91:
			return -834293086;
		case 92:
			return -849582265;
		case 93:
			return 429544447;
		case 94:
			return -1841331114;
		case 95:
			return -715636193;
		case 96:
			return -1061274876;
		case 97:
			return -148407339;
		case 98:
			return -415839138;
		case 99:
			return 1673499939;
		case 100:
			return -777150535;
		case 101:
			return 118535038;
		case 102:
			return 1833243216;
		case 103:
			return -979575591;
		case 104:
			return -654238687;
		case 105:
			return 1120968795;
		case 106:
			return -544327665;
		case 107:
			return 230001763;
		case 108:
			return 921081956;
		case 109:
			return 949011950;
		case 110:
			return -739986731;
		case 111:
			return -1144800837;
		case 112:
			return -1686810506;
		case 113:
			return -1848895400;
		case 114:
			return -657632;
		case 115:
			return -1761189332;
		case 116:
			return -2060865802;
		case 117:
			return -1923503631;
		case 118:
			return -607940493;
		case 119:
			return 1986618633;
		case 120:
			return 2000209669;
		case 121:
			return 513110082;
		case 122:
			return 1091556515;
		case 123:
			return -1457751321;
		case 124:
			return -1891628345;
		case 125:
			return -1960242214;
		case 126:
			return 1187689415;
		case 127:
			return -1177787273;
		case 128:
			return 464413478;
		case 129:
			return 1464664327;
		case 130:
			return -490142739;
		case 131:
			return 330993088;
		case 132:
			return 221420861;
		case 133:
			return 1535254161;
		case 134:
			return 683269210;
		case 135:
			return -232974724;
		case 136:
			return 308500632;
		case 137:
			return -890175011;
		case 138:
			return -2108030724;
		case 139:
			return -1272862985;
		case 140:
			return -1240932004;
		case 141:
			return -1829339703;
		case 142:
			return 677950956;
		case 143:
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

void func_285(var uParam0, var uParam1, var uParam2)
{
	STATS::_0x91A4F58E01ED5E4C(&uParam0, uParam2);
}

void func_286(int iParam0, int iParam1)
{
	int iVar0;
	if (func_723(iParam0))
	{
		return;
	}
	iVar0 = func_724(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iParam1 > iVar0)
	{
		func_725(iParam0, iParam1);
	}
}

bool func_298(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	Var0 = *uParam0;
	Var0.f_2 = 223399367;
	Var0.f_3 = func_742(iParam1);
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1487863141;
		DATAFILE::_DATAFILE_GET_INT(iParam2, &Var0);
		Var0.f_2 = -766247814;
		DATAFILE::_DATAFILE_GET_INT(&(iParam2->f_1), &Var0);
	}
	else
	{
		return false;
	}
	return true;
}

void func_299(var uParam0, char* sParam1)
{
	char* sVar0;
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1934266.f_78, sParam1);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "showMessage", 0);
	if (__LIB_0__::func_241() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		sVar0 = "LAW_UI_WANTED_F";
	}
	else
	{
		sVar0 = "LAW_UI_WANTED_M";
	}
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "upperLocText", sVar0);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "upperTextStyle", 0);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "lowerText0", "");
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "lowerText1", "");
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "lowerText2", "");
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "lowerText3", "");
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "lowerRawText0", "");
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "lowerRawText1", "");
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "lowerRawText2", "");
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "lowerRawText3", "");
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "switchLowerTextToIndex", 0);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "showKnownPulse", 0);
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "showUnknownPulse", 0);
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "showShortWantedCooldown", 0);
	uParam0->f_17 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "showLongWantedCooldown", 0);
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "showWarningAnimation", 0);
}

char* func_310(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "None";
		case 1:
			return "Story";
		case 2:
			return "Procedural";
		case 3:
			return "Location";
		case 4:
			return "Minigame";
		case 5:
			return "Hideout";
		case 6:
			return "Job";
		case 7:
			return "Beat";
		case 9:
			return "SpecialPed";
		case 11:
			return "CompanionActivity";
		case 8:
			return "RCM";
		case 10:
			return "Versus";
		case 12:
			return "Free Mode Activity";
	}
	return "Unknown";
}

void func_316(bool bParam0, int iParam1)
{
	__LIB_19__::func_202(0, 0, 1, 0);
	__LIB_19__::func_208();
	__LIB_18__::func_428();
	__LIB_18__::func_429(1);
	__LIB_18__::func_430();
	__LIB_11__::func_908();
	if (iParam1 == -1)
	{
		if (!__LIB_0__::func_28() || bParam0)
		{
			func_778(Global_1835011[0 /*74*/].f_1, 0, 0, 0, 1);
		}
		else
		{
			MAP::_MAP_DISCOVERY_SET_ENABLED(-1753910767);
		}
	}
}

void func_317()
{
	func_779();
	__LIB_12__::func_93();
	__LIB_11__::func_892();
}

void func_320(int iParam0)
{
	if (iParam0 == -1)
	{
		func_49();
	}
	else
	{
		__LIB_19__::func_209();
	}
}

void func_339()
{
	vector3 vVar0;
	vector3 vVar10;
	if (__LIB_0__::func_898(-1215445344))
	{
		__LIB_0__::func_400(-661560211);
		__LIB_0__::func_401(joaat("VAL_02_LOCKDOWN_BANK"));
		__LIB_0__::func_401(-784156210);
		if (__LIB_0__::func_293(45))
		{
			__LIB_5__::func_440("nav_val_saloon_lockdown");
			__LIB_5__::func_440("nav_val_full_lockdown");
			__LIB_5__::func_440("nav_val_es_saloon_lockdown");
			__LIB_5__::func_440("nav_val_es");
			__LIB_5__::func_441("nav_val_es_full_lockdown");
		}
		else
		{
			__LIB_5__::func_440("nav_val_saloon_lockdown");
			__LIB_5__::func_440("nav_val_es_saloon_lockdown");
			__LIB_5__::func_440("nav_val_es_full_lockdown");
			__LIB_5__::func_440("nav_val_es");
			__LIB_5__::func_441("nav_val_full_lockdown");
		}
	}
	else
	{
		__LIB_0__::func_400(joaat("VAL_02_LOCKDOWN_BANK"));
		__LIB_0__::func_400(-784156210);
		__LIB_0__::func_401(-661560211);
		if (__LIB_0__::func_293(45))
		{
			__LIB_5__::func_440("nav_val_saloon_lockdown");
			__LIB_5__::func_440("nav_val_full_lockdown");
			__LIB_5__::func_440("nav_val_es_saloon_lockdown");
			__LIB_5__::func_440("nav_val_es_full_lockdown");
			__LIB_5__::func_441("nav_val_es");
		}
		else
		{
			__LIB_5__::func_440("nav_val_saloon_lockdown");
			__LIB_5__::func_440("nav_val_es_saloon_lockdown");
			__LIB_5__::func_440("nav_val_es_full_lockdown");
			__LIB_5__::func_440("nav_val_es");
			__LIB_5__::func_440("nav_val_full_lockdown");
		}
	}
	if (__LIB_0__::func_898(-254562075))
	{
		__LIB_0__::func_400(-1049500949);
		__LIB_0__::func_401(-981203673);
		__LIB_0__::func_401(-2009766528);
	}
	else
	{
		__LIB_0__::func_400(-981203673);
		__LIB_0__::func_400(-2009766528);
		__LIB_0__::func_401(-1049500949);
	}
	if (__LIB_0__::func_898(320943355))
	{
		__LIB_0__::func_400(135886022);
		__LIB_0__::func_401(1228600352);
		__LIB_0__::func_401(406334892);
	}
	else
	{
		__LIB_0__::func_400(1228600352);
		__LIB_0__::func_400(406334892);
		__LIB_0__::func_401(135886022);
	}
	if (__LIB_0__::func_898(689024866))
	{
		__LIB_0__::func_400(-1933617196);
		__LIB_0__::func_401(joaat("VAL_02_LOCKDOWN_GUN"));
		__LIB_0__::func_401(-1905652203);
	}
	else
	{
		__LIB_0__::func_400(joaat("VAL_02_LOCKDOWN_GUN"));
		__LIB_0__::func_400(-1905652203);
		__LIB_0__::func_401(-1933617196);
	}
	if (__LIB_0__::func_898(1160698568))
	{
		__LIB_0__::func_400(-1588793465);
		__LIB_0__::func_401(joaat("VAL_02_LOCKDOWN_HOTEL"));
		__LIB_0__::func_401(1519091923);
		__LIB_1__::func_948(1879307167, 1, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(540459374, 1, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		__LIB_0__::func_400(joaat("VAL_02_LOCKDOWN_HOTEL"));
		__LIB_0__::func_400(1519091923);
		__LIB_0__::func_401(-1588793465);
		__LIB_1__::func_948(1879307167, 0, 0, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(540459374, 0, 0, 0, 1, 0, 0, 0);
	}
	if (__LIB_0__::func_898(-1179948750))
	{
		__LIB_0__::func_400(joaat("VAL_03_DEFAULT_JAIL"));
		__LIB_0__::func_401(-1301569116);
		__LIB_0__::func_401(joaat("VAL_03_PROPS_LOCKDOWN_JAIL"));
	}
	else
	{
		__LIB_0__::func_400(-1301569116);
		__LIB_0__::func_400(joaat("VAL_03_PROPS_LOCKDOWN_JAIL"));
		__LIB_0__::func_401(joaat("VAL_03_DEFAULT_JAIL"));
	}
	if (__LIB_0__::func_898(1713221411))
	{
		__LIB_0__::func_400(924412185);
		__LIB_0__::func_401(joaat("VAL_02_LOCKDOWN_LAW"));
		__LIB_0__::func_401(-156313117);
	}
	else
	{
		__LIB_0__::func_400(joaat("VAL_02_LOCKDOWN_LAW"));
		__LIB_0__::func_400(-156313117);
		__LIB_0__::func_401(924412185);
	}
	if (__LIB_0__::func_898(300221584))
	{
		__LIB_0__::func_400(-1781246069);
		__LIB_0__::func_401(282485265);
		__LIB_0__::func_401(-1744253204);
	}
	else
	{
		__LIB_0__::func_400(282485265);
		__LIB_0__::func_400(-1744253204);
		__LIB_0__::func_401(-1781246069);
	}
	if (__LIB_0__::func_898(-220282381))
	{
		__LIB_0__::func_400(-1892595931);
		__LIB_0__::func_401(56708243);
	}
	else
	{
		__LIB_0__::func_400(56708243);
		__LIB_0__::func_401(-1892595931);
	}
	if (__LIB_0__::func_898(-1329135070))
	{
		__LIB_0__::func_400(-1158072415);
		__LIB_0__::func_401(199047531);
		__LIB_0__::func_401(192173299);
		func_841(32, 1);
	}
	else
	{
		__LIB_0__::func_400(199047531);
		__LIB_0__::func_400(192173299);
		__LIB_0__::func_401(-1158072415);
		if ((!__LIB_2__::func_806(9, 0) && !__LIB_5__::func_219(5)) && !__LIB_6__::func_92(5))
		{
			vVar0 = -1;
			vVar0.f_1 = -1;
			vVar0.f_2 = -1;
			__LIB_1__::func_65(32, &vVar0, 1);
			__LIB_1__::func_806(&vVar0, 1, 1);
		}
	}
	if (__LIB_0__::func_898(-1763509974))
	{
		__LIB_0__::func_401(-776975047);
		__LIB_0__::func_401(1385025009);
		if (!__LIB_0__::func_898(-1215445344))
		{
			if (__LIB_0__::func_293(45))
			{
				__LIB_5__::func_440("nav_val_saloon_lockdown");
				__LIB_5__::func_440("nav_val_full_lockdown");
				__LIB_5__::func_440("nav_val_es");
				__LIB_5__::func_440("nav_val_es_full_lockdown");
				__LIB_5__::func_441("nav_val_es_saloon_lockdown");
			}
			else
			{
				__LIB_5__::func_440("nav_val_saloon_lockdown");
				__LIB_5__::func_440("nav_val_es_saloon_lockdown");
				__LIB_5__::func_440("nav_val_full_lockdown");
				__LIB_5__::func_440("nav_val_es_full_lockdown");
				__LIB_5__::func_440("nav_val_es");
				__LIB_5__::func_441("nav_val_saloon_lockdown");
			}
		}
		__LIB_1__::func_948(-908482159, 1, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(-1147728628, 1, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(968874193, 1, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(1154795503, 1, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(583884620, 1, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(261929195, 1, 0, 0, 0, 0, 0, 0);
		OBJECT::_0x7F458B543006C8FE(-908482159, 28);
		OBJECT::_0x7F458B543006C8FE(-1147728628, 28);
		OBJECT::_0x7F458B543006C8FE(968874193, 28);
		OBJECT::_0x7F458B543006C8FE(1154795503, 28);
		OBJECT::_0x7F458B543006C8FE(583884620, 28);
		OBJECT::_0x7F458B543006C8FE(261929195, 28);
	}
	else
	{
		__LIB_0__::func_400(-776975047);
		__LIB_0__::func_400(1385025009);
		__LIB_1__::func_948(-908482159, 0, 0, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(-1147728628, 0, 0, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(968874193, 0, 0, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(1154795503, 0, 0, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(583884620, 0, 0, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(261929195, 0, 0, 0, 1, 0, 0, 0);
		OBJECT::_0x0C0A373D181BF900(-908482159);
		OBJECT::_0x0C0A373D181BF900(-1147728628);
		OBJECT::_0x0C0A373D181BF900(968874193);
		OBJECT::_0x0C0A373D181BF900(1154795503);
		OBJECT::_0x0C0A373D181BF900(583884620);
		OBJECT::_0x0C0A373D181BF900(261929195);
		if (__LIB_0__::func_293(45))
		{
			__LIB_5__::func_440("nav_val_saloon_lockdown");
			__LIB_5__::func_440("nav_val_full_lockdown");
			__LIB_5__::func_440("nav_val_es_saloon_lockdown");
			__LIB_5__::func_440("nav_val_es_full_lockdown");
			__LIB_5__::func_441("nav_val_es");
		}
		else
		{
			__LIB_5__::func_440("nav_val_saloon_lockdown");
			__LIB_5__::func_440("nav_val_es_saloon_lockdown");
			__LIB_5__::func_440("nav_val_es_full_lockdown");
			__LIB_5__::func_440("nav_val_es");
			__LIB_5__::func_440("nav_val_full_lockdown");
		}
	}
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_898(-1206122982))
		{
			__LIB_0__::func_123(450, 32);
			__LIB_0__::func_123(451, 32);
			__LIB_0__::func_123(452, 32);
			__LIB_0__::func_123(453, 32);
			__LIB_0__::func_123(466, 32);
			__LIB_0__::func_123(467, 32);
			__LIB_0__::func_123(471, 32);
			__LIB_0__::func_123(464, 32);
		}
		else
		{
			__LIB_0__::func_121(450, 32);
			__LIB_0__::func_121(451, 32);
			__LIB_0__::func_121(452, 32);
			__LIB_0__::func_121(453, 32);
			__LIB_0__::func_121(466, 32);
			__LIB_0__::func_121(467, 32);
			__LIB_0__::func_121(471, 32);
			__LIB_0__::func_121(464, 32);
		}
		if (__LIB_0__::func_898(-666014935))
		{
			__LIB_1__::func_948(-1069042457, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(244699522, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-590254598, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-1425307025, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_948(-1069042457, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(244699522, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-590254598, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-1425307025, 0, 0, 0, 1, 0, 0, 0);
		}
		if (__LIB_0__::func_898(1074873669))
		{
			__LIB_0__::func_123(433, 32);
		}
		else
		{
			__LIB_0__::func_121(433, 32);
		}
		if (__LIB_0__::func_898(-1579419919))
		{
			__LIB_1__::func_948(551601484, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-1842720100, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-983069384, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-768760124, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-1974086289, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_948(551601484, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-1842720100, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-983069384, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-768760124, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-1974086289, 0, 0, 0, 1, 0, 0, 0);
		}
		if (__LIB_0__::func_898(478884033))
		{
			__LIB_0__::func_123(83, 32);
			__LIB_0__::func_123(84, 32);
			__LIB_0__::func_123(85, 32);
			__LIB_0__::func_123(86, 32);
			__LIB_0__::func_123(87, 32);
			__LIB_0__::func_123(79, 32);
		}
		else
		{
			__LIB_0__::func_121(83, 32);
			__LIB_0__::func_121(84, 32);
			__LIB_0__::func_121(85, 32);
			__LIB_0__::func_121(86, 32);
			__LIB_0__::func_121(87, 32);
			__LIB_0__::func_121(79, 32);
		}
		if (__LIB_0__::func_898(-191424539))
		{
			__LIB_1__::func_948(-1247339802, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(2046695029, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(834296435, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(1124531468, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-902483455, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-566797819, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(1469250492, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(678501753, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-1079073283, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-860602360, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_948(-1247339802, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(2046695029, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(834296435, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(1124531468, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-902483455, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-566797819, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(1469250492, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(678501753, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-1079073283, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-860602360, 0, 0, 0, 1, 0, 0, 0);
		}
		if (__LIB_0__::func_898(-397760715))
		{
			__LIB_1__::func_948(1098854605, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(1013933832, 1, 0, 0, 0, 0, 0, 0);
			func_841(19, 1);
		}
		else
		{
			__LIB_1__::func_948(1098854605, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(1013933832, 0, 0, 0, 1, 0, 0, 0);
			if ((!__LIB_2__::func_806(9, 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("RCM_CALLAWAY1")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("RCM_CALLAWAY12")) <= 0)
			{
				vVar10 = -1;
				vVar10.f_1 = -1;
				vVar10.f_2 = -1;
				__LIB_1__::func_65(19, &vVar10, 1);
				__LIB_1__::func_806(&vVar10, 1, 1);
			}
		}
		if (__LIB_0__::func_898(2639906))
		{
			__LIB_1__::func_948(-1334037078, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-1641377529, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-74215266, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_948(-1334037078, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-1641377529, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-74215266, 0, 0, 0, 1, 0, 0, 0);
		}
		if (__LIB_0__::func_898(1660024373))
		{
			__LIB_0__::func_123(320, 32);
			__LIB_0__::func_123(317, 32);
			__LIB_0__::func_123(318, 32);
			__LIB_0__::func_123(319, 32);
			__LIB_0__::func_123(250, 32);
		}
		else
		{
			__LIB_0__::func_121(320, 32);
			__LIB_0__::func_121(317, 32);
			__LIB_0__::func_121(318, 32);
			__LIB_0__::func_121(319, 32);
			__LIB_0__::func_121(250, 32);
		}
		if (__LIB_0__::func_898(-1063147448))
		{
			__LIB_1__::func_948(-399528504, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(804086151, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-923901632, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-438789356, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_948(-399528504, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(804086151, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-923901632, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-438789356, 0, 0, 0, 1, 0, 0, 0);
		}
		if (__LIB_0__::func_898(-80522843))
		{
			__LIB_0__::func_123(354, 32);
			__LIB_0__::func_123(367, 32);
			__LIB_0__::func_123(368, 32);
			__LIB_0__::func_123(369, 32);
			__LIB_0__::func_123(370, 32);
			__LIB_0__::func_123(371, 32);
			__LIB_0__::func_123(886, 32);
		}
		else
		{
			__LIB_0__::func_121(354, 32);
			__LIB_0__::func_121(367, 32);
			__LIB_0__::func_121(368, 32);
			__LIB_0__::func_121(86, 32);
			__LIB_0__::func_121(370, 32);
			__LIB_0__::func_121(371, 32);
			__LIB_0__::func_121(886, 32);
		}
		if (__LIB_0__::func_898(-1523910291))
		{
			__LIB_1__::func_948(2094297354, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(1892085175, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_948(2094297354, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(1892085175, 0, 0, 0, 1, 0, 0, 0);
		}
	}
}

void func_419(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_900(iParam0, 1, 1, -142743235, 1);
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

void func_489(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_01"), 1);
			__LIB_1__::func_240(437, 0);
			__LIB_1__::func_240(440, 0);
			__LIB_8__::func_940(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			__LIB_0__::func_433(1);
			func_577(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			__LIB_8__::func_940(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			__LIB_0__::func_433(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			__LIB_8__::func_940(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			__LIB_0__::func_433(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			__LIB_8__::func_940(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			__LIB_0__::func_433(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			__LIB_1__::func_240(438, 0);
			__LIB_8__::func_940(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			__LIB_0__::func_433(32768);
			break;
		default:
			__LIB_1__::func_240(439, 0);
			break;
	}
}

void func_516(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	switch (__LIB_0__::func_357(iParam0))
	{
		case 81053684:
			if (iParam0 == joaat("KIT_BANDANA") && __LIB_1__::func_169(81053684, 0) <= 0)
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = __LIB_0__::func_449(iParam0);
			if (__LIB_0__::func_450(iVar0))
			{
				__LIB_10__::func_836(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				__LIB_1__::func_452(30, iParam0, 0, 0, 0);
			}
			if (__LIB_0__::func_241() == -2125499975 || __LIB_0__::func_241() == -449205311)
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (__LIB_0__::func_241() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!__LIB_1__::func_431(-525676072, 0))
			{
				if (__LIB_1__::func_62(-525676072, &iVar1))
				{
					__LIB_1__::func_452(33, iVar1, 0, 0, 0);
				}
			}
			__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			__LIB_1__::func_775(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		__LIB_5__::func_391(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			__LIB_1__::func_708(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_541()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1038(0);
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
	func_1038(1);
}

void func_542()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_152(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_543()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1040(0);
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
	func_1040(1);
}

void func_544()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1040(0);
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
	func_1040(1);
}

void func_545()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_152(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_152(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_900(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_900(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

void func_575(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		iParam0 = __LIB_4__::func_929(func_183(Global_36), 1);
	}
	if (func_1070(iParam0, iParam1))
	{
	}
}

void func_577(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			__LIB_0__::func_803(1497516462);
			__LIB_0__::func_804(2016141805);
			__LIB_0__::func_804(1010885152);
			__LIB_0__::func_804(-502324015);
			break;
		case 2016141805:
			__LIB_0__::func_804(1497516462);
			__LIB_0__::func_803(2016141805);
			__LIB_0__::func_804(1010885152);
			__LIB_0__::func_804(-502324015);
			break;
		case 1010885152:
			__LIB_0__::func_804(1497516462);
			__LIB_0__::func_804(2016141805);
			__LIB_0__::func_803(1010885152);
			__LIB_0__::func_804(-502324015);
			break;
		case -502324015:
			__LIB_0__::func_804(1497516462);
			__LIB_0__::func_804(2016141805);
			__LIB_0__::func_804(1010885152);
			__LIB_0__::func_803(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			__LIB_0__::func_804(-538889627);
			__LIB_0__::func_804(-538880323);
			__LIB_0__::func_804(-1056767524);
			__LIB_0__::func_803(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			__LIB_1__::func_73();
			__LIB_0__::func_803(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			__LIB_1__::func_74();
			__LIB_0__::func_803(iParam0);
			break;
		case 2019386373:
			__LIB_0__::func_804(-664252410);
			__LIB_0__::func_804(2109952320);
			__LIB_0__::func_803(2019386373);
			break;
		case -664252410:
			__LIB_0__::func_804(2019386373);
			__LIB_0__::func_804(2109952320);
			__LIB_0__::func_803(-664252410);
			break;
		case 2109952320:
			__LIB_0__::func_804(2019386373);
			__LIB_0__::func_804(-664252410);
			__LIB_0__::func_803(2109952320);
			break;
		case -1674179981:
			__LIB_0__::func_804(-1835851517);
			__LIB_0__::func_804(-1838352012);
			__LIB_0__::func_803(-1674179981);
			break;
		case -1835851517:
			__LIB_0__::func_804(-1674179981);
			__LIB_0__::func_804(-1838352012);
			__LIB_0__::func_803(-1835851517);
			break;
		case -1838352012:
			__LIB_0__::func_804(-1674179981);
			__LIB_0__::func_804(-1835851517);
			__LIB_0__::func_803(-1838352012);
			break;
		case -1717960576:
			__LIB_0__::func_804(210001842);
			__LIB_0__::func_803(-1717960576);
			break;
		case 210001842:
			__LIB_0__::func_804(-1717960576);
			__LIB_0__::func_803(210001842);
			break;
		case -150493654:
			__LIB_0__::func_804(-1271608261);
			__LIB_0__::func_804(1846061697);
			__LIB_0__::func_804(-1145519186);
			__LIB_0__::func_803(-150493654);
			break;
		case -1271608261:
			__LIB_0__::func_804(-150493654);
			__LIB_0__::func_804(1846061697);
			__LIB_0__::func_804(-1145519186);
			__LIB_0__::func_803(-1271608261);
			break;
		case 1846061697:
			__LIB_0__::func_804(-150493654);
			__LIB_0__::func_804(-1271608261);
			__LIB_0__::func_804(-1145519186);
			__LIB_0__::func_803(1846061697);
			break;
		case -1145519186:
			__LIB_0__::func_804(-150493654);
			__LIB_0__::func_804(-1271608261);
			__LIB_0__::func_804(1846061697);
			__LIB_0__::func_803(-1145519186);
			break;
		case 1766284049:
			__LIB_0__::func_804(280705402);
			__LIB_0__::func_804(1926308480);
			__LIB_0__::func_803(1766284049);
			break;
		case 280705402:
			__LIB_0__::func_804(1766284049);
			__LIB_0__::func_804(1926308480);
			__LIB_0__::func_803(280705402);
			break;
		case 1926308480:
			__LIB_0__::func_804(1766284049);
			__LIB_0__::func_804(280705402);
			__LIB_0__::func_803(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				__LIB_0__::func_804(439465264);
				__LIB_0__::func_803(1609506757);
			}
			else
			{
				__LIB_0__::func_804(1609506757);
				__LIB_0__::func_804(439465264);
			}
			break;
		case 439465264:
			if (__LIB_0__::func_898(1609506757))
			{
				if (bParam1)
				{
					__LIB_0__::func_803(439465264);
				}
				else
				{
					__LIB_0__::func_804(439465264);
				}
			}
			break;
		case 1822001510:
			__LIB_0__::func_804(-1612662716);
			__LIB_0__::func_803(1822001510);
			break;
		case -1612662716:
			__LIB_0__::func_804(1822001510);
			__LIB_0__::func_803(-1612662716);
			break;
		case 1306158345:
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(1306158345);
			break;
		case 1952610440:
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(1952610440);
			break;
		case -223469678:
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(-223469678);
			break;
		case -404698347:
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(-404698347);
			break;
		case 1517904467:
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_803(1517904467);
			break;
		case 1376646519:
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(1376646519);
			break;
		case 931649776:
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(931649776);
			break;
		case -434590080:
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(-434590080);
			break;
		case 1743048395:
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(1743048395);
			break;
		case 449774763:
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_803(449774763);
			break;
		case -1414537028:
			__LIB_0__::func_804(38162571);
			__LIB_0__::func_804(1350391819);
			__LIB_0__::func_804(54073871);
			__LIB_0__::func_803(-1414537028);
			break;
		case 38162571:
			__LIB_0__::func_804(-1414537028);
			__LIB_0__::func_804(1350391819);
			__LIB_0__::func_804(54073871);
			__LIB_0__::func_803(38162571);
			break;
		case 1350391819:
			__LIB_0__::func_804(-1414537028);
			__LIB_0__::func_804(38162571);
			__LIB_0__::func_804(54073871);
			__LIB_0__::func_803(1350391819);
			break;
		case 54073871:
			__LIB_0__::func_804(-1414537028);
			__LIB_0__::func_804(38162571);
			__LIB_0__::func_804(1350391819);
			__LIB_0__::func_803(54073871);
			break;
		case 198200492:
			__LIB_0__::func_803(198200492);
			__LIB_0__::func_804(-1124061431);
			__LIB_0__::func_804(52706132);
			__LIB_0__::func_804(-259123672);
			break;
		case -1124061431:
			__LIB_0__::func_804(198200492);
			__LIB_0__::func_803(-1124061431);
			__LIB_0__::func_804(52706132);
			__LIB_0__::func_804(-259123672);
			break;
		case 52706132:
			__LIB_0__::func_804(198200492);
			__LIB_0__::func_804(-1124061431);
			__LIB_0__::func_803(52706132);
			__LIB_0__::func_804(-259123672);
			break;
		case -259123672:
			__LIB_0__::func_804(198200492);
			__LIB_0__::func_804(-1124061431);
			__LIB_0__::func_804(52706132);
			__LIB_0__::func_803(-259123672);
			Jump @2851; //curOff = 2125
			__LIB_0__::func_803(-919512195);
			__LIB_0__::func_804(-1925798111);
			__LIB_0__::func_804(420709909);
			__LIB_0__::func_804(1703426636);
			Jump @2851; //curOff = 2164
			__LIB_0__::func_803(-1925798111);
			__LIB_0__::func_804(-919512195);
			__LIB_0__::func_804(420709909);
			__LIB_0__::func_804(1703426636);
			Jump @2851; //curOff = 2203
			__LIB_0__::func_803(420709909);
			__LIB_0__::func_804(-919512195);
			__LIB_0__::func_804(-1925798111);
			__LIB_0__::func_804(1703426636);
			Jump @2851; //curOff = 2242
			__LIB_0__::func_803(1703426636);
			__LIB_0__::func_804(-919512195);
			__LIB_0__::func_804(-1925798111);
			__LIB_0__::func_804(420709909);
			Jump @2851; //curOff = 2281
			__LIB_0__::func_803(-1223121209);
			__LIB_0__::func_804(630808005);
			Jump @2851; //curOff = 2302
			__LIB_0__::func_803(630808005);
			__LIB_0__::func_804(-1223121209);
			Jump @2851; //curOff = 2323
			__LIB_0__::func_803(1453909576);
			__LIB_0__::func_804(1643531967);
			Jump @2851; //curOff = 2344
			__LIB_0__::func_803(1643531967);
			__LIB_0__::func_804(1453909576);
			Jump @2851; //curOff = 2365
			__LIB_0__::func_803(0);
			__LIB_0__::func_804(473295046);
			__LIB_0__::func_804(-1738165526);
			Jump @2851; //curOff = 2391
			__LIB_0__::func_803(473295046);
			__LIB_0__::func_804(0);
			__LIB_0__::func_804(-1738165526);
			Jump @2851; //curOff = 2417
			__LIB_0__::func_803(-1738165526);
			__LIB_0__::func_804(0);
			__LIB_0__::func_804(473295046);
			Jump @2851; //curOff = 2443
			__LIB_0__::func_803(932909855);
			__LIB_0__::func_804(2051822093);
			Jump @2851; //curOff = 2464
			__LIB_0__::func_803(2051822093);
			__LIB_0__::func_804(932909855);
			Jump @2851; //curOff = 2485
			__LIB_0__::func_803(405586984);
			__LIB_0__::func_804(1509509592);
			__LIB_0__::func_804(-959357075);
			__LIB_0__::func_804(-1311865656);
			Jump @2851; //curOff = 2524
			__LIB_0__::func_803(1509509592);
			__LIB_0__::func_804(405586984);
			__LIB_0__::func_804(-959357075);
			__LIB_0__::func_804(-1311865656);
			Jump @2851; //curOff = 2563
			__LIB_0__::func_803(-959357075);
			__LIB_0__::func_804(1509509592);
			__LIB_0__::func_804(405586984);
			__LIB_0__::func_804(-1311865656);
			Jump @2851; //curOff = 2602
			__LIB_0__::func_803(-1311865656);
			__LIB_0__::func_804(1509509592);
			__LIB_0__::func_804(-959357075);
			__LIB_0__::func_804(405586984);
			Jump @2851; //curOff = 2641
			if (bParam1)
			{
				__LIB_0__::func_803(-524145696);
			}
			else
			{
				__LIB_0__::func_804(-524145696);
			}
			__LIB_0__::func_804(1626481264);
			__LIB_0__::func_804(282809459);
			Jump @2851; //curOff = 2688
			__LIB_0__::func_803(282809459);
			__LIB_0__::func_804(1626481264);
			__LIB_0__::func_804(-524145696);
			Jump @2851; //curOff = 2718
			__LIB_0__::func_803(1626481264);
			__LIB_0__::func_804(-524145696);
			__LIB_0__::func_804(282809459);
			Jump @2851; //curOff = 2748
			if (bParam1)
			{
				__LIB_0__::func_803(885203519);
			}
			else
			{
				__LIB_0__::func_804(885203519);
			}
			Jump @2851; //curOff = 2777
			if (bParam1)
			{
				__LIB_0__::func_803(-1080627546);
			}
			else
			{
				__LIB_0__::func_804(-1080627546);
			}
			Jump @2851; //curOff = 2806
			if (bParam1)
			{
				if (!__LIB_0__::func_898(iParam0))
				{
					__LIB_0__::func_803(iParam0);
				}
			}
			else if (__LIB_0__::func_898(iParam0))
			{
				__LIB_0__::func_804(iParam0);
			}
		}
int func_578(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BAYOUNWA"):
			return 0;
		case joaat("BIGVALLEY"):
			return 1;
		case joaat("BLUEWATERMARSH"):
			return 2;
		case joaat("CUMBERLAND"):
			return 3;
		case joaat("GREATPLAINS"):
			return 4;
		case joaat("GRIZZLIESEAST"):
			return 6;
		case joaat("GRIZZLIESWEST"):
			return 7;
		case joaat("GUARMAD"):
			return 8;
		case joaat("HEARTLANDS"):
			return 9;
		case joaat("ROANOKE"):
			return 10;
		case joaat("SCARLETTMEADOWS"):
			return 11;
		case joaat("TALLTREES"):
			return 12;
		case joaat("GAPTOOTHRIDGE"):
			return 13;
		case joaat("RIOBRAVO"):
			return 14;
		case joaat("CHOLLASPRINGS"):
			return 15;
		case joaat("HENNIGANSSTEAD"):
			return 16;
		default:
			break;
	}
	return -1;
}

int func_598(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;
	if (!__LIB_0__::func_31(iParam0))
	{
		return 0;
	}
	vVar0.x = iParam3;
	vVar0.f_1 = iParam4;
	vVar0.f_2 = iParam5;
	if (((Global_1572864.f_13 || Global_1572864.f_14) || Global_1572864.f_8 != 0) || Global_1391438.f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_11)
	{
		case 0:
			if (__LIB_0__::func_287(iParam0, 2, 1))
			{
				__LIB_0__::func_290(iParam0, 2, 1);
			}
			if (__LIB_0__::func_273(iParam0, 16, 1))
			{
				if (Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
				{
					if (bParam14)
					{
						__LIB_0__::func_288(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(Global_1360165[iParam0 /*1157*/].f_129, false))
					{
					}
					else
					{
						__LIB_1__::func_774(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						__LIB_0__::func_712(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				__LIB_0__::func_288(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				__LIB_0__::func_201(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				__LIB_0__::func_288(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				__LIB_0__::func_201(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
				}
			}
			if (!__LIB_0__::func_287(iParam0, 44, 0))
			{
				__LIB_0__::func_288(iParam0, 44, 0);
			}
			if (__LIB_1__::func_466(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				__LIB_0__::func_201(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			__LIB_0__::func_290(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 0);
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			__LIB_0__::func_707(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				__LIB_1__::func_296(iParam0, 0, 0, 1);
			}
			__LIB_0__::func_290(iParam0, 33, 1);
			__LIB_0__::func_290(iParam0, 34, 1);
			__LIB_0__::func_290(iParam0, 29, 1);
			if (!__LIB_0__::func_86(vVar0) && bParam7)
			{
				__LIB_0__::func_201(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				__LIB_0__::func_201(iParam0, 4);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[iParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[iParam0 /*1157*/]))
					{
						__LIB_0__::func_712(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_1092(Global_1360165[iParam0 /*1157*/], vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::_0x0C3CB2E600C8977D(Global_1360165[iParam0 /*1157*/], 1))
				{
					TASK::CLEAR_PED_TASKS(Global_1360165[iParam0 /*1157*/], true, false);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				__LIB_0__::func_201(iParam0, 4);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
					}
				}
				if (__LIB_1__::func_201(iParam0, iParam13))
				{
					if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
					{
						__LIB_1__::func_288(iParam0, iParam13, 0);
						__LIB_1__::func_558(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (__LIB_0__::func_287(iParam0, 25, 0))
						{
							__LIB_0__::func_290(iParam0, 25, 0);
						}
						__LIB_0__::func_288(iParam0, 66, 0);
						__LIB_0__::func_201(iParam0, 5);
						Global_1360165[iParam0 /*1157*/].f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					__LIB_0__::func_201(iParam0, 5);
				}
				__LIB_0__::func_288(iParam0, 28, 1);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 5:
			if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
			{
				__LIB_0__::func_201(iParam0, 6);
			}
			break;
		case 6:
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (bParam24)
				{
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], true);
				}
				if (bParam18)
				{
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5);
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5, "ALL");
							iVar5++;
						}
						PED::_0xE3144B932DFDFF65(Global_1360165[iParam0 /*1157*/], 0f, -1, true, true);
						PED::_0xD049920CD29F6CC8(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					__LIB_1__::func_30(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					__LIB_0__::func_202(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			__LIB_0__::func_201(iParam0, 7);
		case 7:
			__LIB_0__::func_707(iParam0, bParam9, bParam15, 0);
			__LIB_0__::func_289(iParam0, 4, bParam11);
			__LIB_0__::func_706(iParam0);
			if (bParam20)
			{
				if (__LIB_0__::func_203(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			__LIB_1__::func_799(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
			}
			Global_40.f_4942[iParam0 /*60*/].f_4 = Global_40.f_4942[iParam0 /*60*/].f_3;
			__LIB_0__::func_201(iParam0, 0);
			__LIB_0__::func_204(iParam0, 16, 1);
			__LIB_0__::func_290(iParam0, 44, 1);
			Global_1360165[iParam0 /*1157*/].f_1156 = 0;
			Global_1360165[iParam0 /*1157*/].f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

void func_604()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_0__::func_272(__LIB_0__::func_271(iVar0), 0))
		{
			if (__LIB_1__::func_307(iVar0, 1, 1))
			{
				PERSCHAR::_0xD4B614179BCD0654(__LIB_0__::func_748(iVar0, 0));
			}
		}
		iVar0++;
	}
}

void func_613(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		if (__LIB_0__::func_21(iParam0, 2))
		{
			func_1131(iParam0, Global_36);
		}
		else if (__LIB_0__::func_21(iParam0, 1))
		{
			__LIB_17__::func_460(iParam0, 0);
		}
		else
		{
			func_1133(iParam0, Global_36, bParam1);
		}
	}
}

int func_636()
{
	struct<4> Var0;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	vector3 vVar10;
	vector3 vVar13;
	var uVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	if (!func_1140())
	{
		return 0;
	}
	Var0 = Global_1359489.f_361.f_195;
	Var0.f_2 = 0;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		return 0;
	}
	iVar6 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Global_1359489.f_361.f_195, Var0.f_1);
	iVar9 = 0;
	if (iVar6 < 1)
	{
	}
	else if (5 < iVar6)
	{
		return 0;
	}
	else
	{
		Global_1359489.f_361.f_2 = iVar6;
	}
	uVar16 = Var0.f_1;
	iVar5 = 0;
	while (iVar5 < iVar6)
	{
		Var0.f_2 = 2;
		Var0.f_3 = iVar5;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 6;
			if (DATAFILE::_DATAFILE_GET_HASH(&iVar7, &Var0))
			{
				iVar17 = func_1141(iVar7);
				if (iVar17 == -1)
				{
					func_1142(&(Global_1359489.f_361.f_196[iVar5 /*12*/]));
					Jump @582; //curOff = 193
				}
				else
				{
					Global_1359489.f_361.f_196[iVar5 /*12*/] = iVar17;
				}
			}
			Var0.f_2 = 7;
			if (DATAFILE::_DATAFILE_GET_HASH(&iVar8, &Var0))
			{
				iVar18 = iVar8;
				if (__LIB_0__::func_144(iVar18, 0))
				{
					Global_1359489.f_361.f_196[iVar5 /*12*/].f_2 = iVar18;
					iVar19 = __LIB_3__::func_586(iVar18);
					if (iVar19 != 0)
					{
						Global_1359489.f_361.f_196[iVar5 /*12*/].f_3 = iVar19;
					}
					else
					{
						func_1142(&(Global_1359489.f_361.f_196[iVar5 /*12*/]));
					}
					else
					{
						Jump @338; //curOff = 315
						func_1142(&(Global_1359489.f_361.f_196[iVar5 /*12*/]));
						Jump @582; //curOff = 335
						Jump @361; //curOff = 338
						func_1142(&(Global_1359489.f_361.f_196[iVar5 /*12*/]));
						Jump @582; //curOff = 358
						Var0.f_2 = 3;
						if (DATAFILE::_DATAFILE_GET_HASH(&iVar9, &Var0))
						{
							iVar20 = __LIB_9__::func_29(iVar9);
							if (iVar20 != -1)
							{
								Global_1359489.f_361.f_196[iVar5 /*12*/].f_1 = iVar20;
							}
							else
							{
								func_1142(&(Global_1359489.f_361.f_196[iVar5 /*12*/]));
							}
							else
							{
								Jump @454; //curOff = 431
								func_1142(&(Global_1359489.f_361.f_196[iVar5 /*12*/]));
								Jump @582; //curOff = 451
								Var0.f_2 = 8;
								if (DATAFILE::_DATAFILE_GET_VECTOR(&vVar10, &Var0))
								{
									Global_1359489.f_361.f_196[iVar5 /*12*/].f_4 = { vVar10 };
								}
								else
								{
									func_1142(&(Global_1359489.f_361.f_196[iVar5 /*12*/]));
								}
								else
								{
									Var0.f_2 = 9;
									if (DATAFILE::_DATAFILE_GET_VECTOR(&vVar13, &Var0))
									{
										Global_1359489.f_361.f_196[iVar5 /*12*/].f_7 = { vVar13 };
									}
									else
									{
										func_1142(&(Global_1359489.f_361.f_196[iVar5 /*12*/]));
									}
									else
									{
										Var0.f_1 = uVar16;
									}
								}
							}
							iVar5++;
							return 1;
						}
					}
				}
			}
		}
	}
}

void func_642(var uParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	iVar0 = __LIB_16__::func_275(*uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	if (iVar0 == 541204999)
	{
		sVar1 = __LIB_1__::func_464(uParam0->f_3, 0);
		__LIB_12__::func_606(uParam0, 1896170705 /* GXTEntry: "Find ~1~ some ~2~." */, MISC::_CREATE_VAR_STRING(8, iVar0, sVar1), 0, bParam1, 0);
	}
	else
	{
		__LIB_12__::func_606(uParam0, 1896170705 /* GXTEntry: "Find ~1~ some ~2~." */, HUD::_GET_LABEL_TEXT_BY_HASH(iVar0), 0, bParam1, 0);
	}
}

int func_652(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		case 4:
			return 16;
		case 5:
			return 32;
		case 6:
			return 64;
		default:
			break;
	}
	return 0;
}

bool func_655(int iParam0, int iParam1)
{
	return (Global_40.f_8863[__LIB_7__::func_459(iParam0, 1)] && iParam1) != 0;
}

int func_656(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		case 4:
			return 16;
		case 5:
			return 32;
		default:
			break;
	}
	return 0;
}

bool func_657(int iParam0)
{
	return (Global_40.f_12004.f_2 && iParam0) != 0;
}

void func_661(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	char* sVar8;
	char* sVar9;
	char* sVar10;
	vector3 vVar11;
	bool bVar14;
	int iVar15;
	bVar14 = false;
	sVar3 = "MISSION_COLLECTPARAKEETS";
	sVar4 = "SP_MISSIONS_13";
	sVar7 = "COL_CP_TITLE";
	vVar11 = { -1678.832f, -335.5439f, 172.9001f };
	switch (iParam0)
	{
		case 1:
			sVar5 = "COL_CP_INTRO";
			sVar6 = "TF_CAROLINA_PARAKEET_ONE_DEAD";
			iVar1 = MISC::GET_HASH_KEY("BLIP_COLLECT_PARAKEETS");
			break;
		case 15:
			sVar5 = "COL_CP_INTRO";
			sVar6 = "TF_CAROLINA_PARAKEET_FIVE_DEAD";
			iVar1 = MISC::GET_HASH_KEY("BLIP_COLLECT_PARAKEETS");
			break;
		case 25:
			sVar5 = "COL_CP_END";
			sVar6 = "TF_CAROLINA_PARAKEET_ALL_DEAD";
			break;
	}
	iVar0 = joaat("COL_CP_TITLE");
	if (bParam2)
	{
		sVar8 = "COL_CP_TITLE";
		sVar10 = "COL_CTX_PLAYER_LOG";
		sVar9 = "MISSION_COMPLETE";
		iVar1 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar2 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		sVar8 = "COL_CP_INTRO";
		sVar10 = "COL_CTX_PLAYER_LOG";
		sVar9 = "COL_CP_TITLE";
		iVar1 = MISC::GET_HASH_KEY("BLIP_COLLECT_PARAKEETS");
		iVar2 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (bParam3)
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
		__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar9), MISC::_CREATE_VAR_STRING(2, sVar8), iVar2, iVar1, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar10), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
	}
	if (bParam1)
	{
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
		{
			UILOG::_UILOG_REMOVE_ENTRY(3, iVar0);
		}
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar0, vVar11, MISC::GET_HASH_KEY(sVar7), MISC::GET_HASH_KEY(sVar6), 0);
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, MISC::GET_HASH_KEY(sVar5), sVar5, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iVar0, true);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar0, iVar1, iVar2);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar0, MISC::GET_HASH_KEY(sVar3), MISC::GET_HASH_KEY(sVar4));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar0, MISC::_CREATE_VAR_STRING(2, sVar5));
	if (__LIB_0__::func_440(COLLECTION::_0x126CBEBBA46693CF(iVar15, joaat("CAROLINA_PARAKEETS"), 0)) >= 25)
	{
		bVar14 = true;
	}
	else
	{
		bVar14 = false;
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, MISC::GET_HASH_KEY("COL_CP_HUNT"), "COL_CP_HUNT", bVar14, true, false);
}

int func_664(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		case 4:
			return 16;
		case 5:
			return 32;
		case 6:
			return 64;
		case 7:
			return 128;
		case 8:
			return 256;
		case 9:
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
		case 15:
			return 32768;
		case 16:
			return 65536;
		case 17:
			return 131072;
		case 18:
			return 262144;
		case 19:
			return 524288;
		case 20:
			return 1048576;
		case 21:
			return 2097152;
		default:
			break;
	}
	return 0;
}

void func_685(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!__LIB_10__::func_760(iParam0))
	{
		return;
	}
	iVar0 = __LIB_10__::func_761(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	iVar1 = __LIB_12__::func_219(iVar0);
	if (iVar1 == 0)
	{
		return;
	}
	if (!__LIB_0__::func_448(iVar1))
	{
		return;
	}
	if (!func_1165(iParam0))
	{
		return;
	}
	if (func_1166(iVar0))
	{
		return;
	}
	if (__LIB_1__::func_707(iVar0, 1, 0))
	{
		return;
	}
	if (func_1167(iVar0))
	{
		return;
	}
	if (func_1168(0, iVar0))
	{
		return;
	}
	if (func_1168(1, iVar0))
	{
		return;
	}
	iVar2 = __LIB_10__::func_762(iParam0);
	iVar3 = __LIB_10__::func_763(iVar2, 2);
	if (PERSISTENCE::_0x1F56FB3FDB4EAF65(iVar3))
	{
		PERSISTENCE::_0x291CC21D1FB6790E(iVar3);
	}
	__LIB_10__::func_812(iParam0, 0);
	MAP::_0xD8C7162AB2E2AF45(__LIB_10__::func_764(iVar1));
	MAP::_MAP_DISCOVERY_SET_ENABLED(__LIB_10__::func_765(iVar1));
}

int func_686(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("BONE_00");
		case 1:
			return joaat("BONE_01");
		case 2:
			return joaat("BONE_02");
		case 3:
			return joaat("BONE_03");
		case 4:
			return joaat("BONE_04");
		case 5:
			return joaat("BONE_05");
		case 6:
			return joaat("BONE_06");
		case 7:
			return joaat("BONE_07");
		case 8:
			return joaat("BONE_08");
		case 9:
			return joaat("BONE_09");
		case 10:
			return joaat("BONE_10");
		case 11:
			return joaat("BONE_11");
		case 12:
			return joaat("BONE_12");
		case 13:
			return joaat("BONE_13");
		case 14:
			return joaat("BONE_14");
		case 15:
			return joaat("BONE_15");
		case 16:
			return joaat("BONE_16");
		case 17:
			return joaat("BONE_17");
		case 18:
			return joaat("BONE_18");
		case 19:
			return joaat("BONE_19");
		case 20:
			return joaat("BONE_20");
		case 21:
			return joaat("BONE_21");
		case 22:
			return joaat("BONE_22");
		case 23:
			return joaat("BONE_23");
		case 24:
			return joaat("BONE_24");
		case 25:
			return joaat("BONE_25");
		case 26:
			return joaat("BONE_26");
		case 27:
			return joaat("BONE_27");
		case 28:
			return joaat("BONE_28");
		case 29:
			return joaat("BONE_29");
		default:
			break;
	}
	return 0;
}

void func_687(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_448(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_314(iParam0))
	{
		return;
	}
	iVar0 = __LIB_1__::func_35(iParam0, 5);
	if (__LIB_1__::func_707(iVar0, 1, 0))
	{
		return;
	}
	func_152(iVar0, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
	MAP::_0xD8C7162AB2E2AF45(__LIB_10__::func_766(iParam0));
}

int func_688(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("ROCK_00_GRZ");
		case 1:
			return joaat("ROCK_01_GRZ");
		case 2:
			return joaat("ROCK_02_CML");
		case 3:
			return joaat("ROCK_03_CML");
		case 4:
			return joaat("ROCK_04_BGV");
		case 5:
			return joaat("ROCK_05_BGV");
		case 6:
			return joaat("ROCK_06_HRT");
		case 7:
			return joaat("ROCK_07_HRT");
		case 8:
			return joaat("ROCK_08_ROA");
		case 9:
			return joaat("ROCK_09_ROA");
		default:
			break;
	}
	return 0;
}

void func_689(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_448(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_314(iParam0))
	{
		return;
	}
	iVar0 = __LIB_1__::func_35(iParam0, 5);
	if (__LIB_1__::func_707(iVar0, 1, 0))
	{
		return;
	}
	func_152(iVar0, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
	MAP::_0xD8C7162AB2E2AF45(__LIB_14__::func_295(iParam0));
}

void func_690()
{
	if (__LIB_1__::func_707(joaat("DOCUMENT_GUNSLINGER_5_NOTE"), 1, 0))
	{
		return;
	}
	func_152(joaat("DOCUMENT_GUNSLINGER_5_NOTE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
}

void func_691()
{
	if (__LIB_1__::func_707(joaat("DOCUMENT_GUNSLINGER_3_NOTE"), 1, 0))
	{
		return;
	}
	func_152(joaat("DOCUMENT_GUNSLINGER_3_NOTE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
}

void func_692()
{
	if (__LIB_1__::func_707(joaat("DOCUMENT_GUNSLINGER_2_NOTE"), 1, 0))
	{
		return;
	}
	func_152(joaat("DOCUMENT_GUNSLINGER_2_NOTE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
}

void func_693()
{
	if (__LIB_1__::func_707(joaat("DOCUMENT_GUNSLINGER_1_NOTE"), 1, 0))
	{
		return;
	}
	func_152(joaat("DOCUMENT_GUNSLINGER_1_NOTE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
}

void func_695()
{
	if (!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_01"), 1, 0))
	{
		if (func_221(1) || COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_01")) > 0)
		{
			func_152(joaat("DOCUMENT_TREASURE_MAP_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!func_221(1))
		{
			__LIB_0__::func_365(1);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_01")) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(joaat("TREASURE_HUNT_LOOT_01"), 1);
		}
	}
	if (!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_02"), 1, 1))
	{
		if (func_221(2) || COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_02")) > 0)
		{
			func_152(joaat("DOCUMENT_TREASURE_MAP_02"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!func_221(2))
		{
			__LIB_0__::func_365(2);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_02")) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(joaat("TREASURE_HUNT_LOOT_02"), 1);
		}
	}
	if (!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_03"), 1, 0))
	{
		if (func_221(4) || COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_03")) > 0)
		{
			func_152(joaat("DOCUMENT_TREASURE_MAP_03"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!func_221(4))
		{
			__LIB_0__::func_365(4);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_03")) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(joaat("TREASURE_HUNT_LOOT_03"), 1);
		}
	}
}

void func_696()
{
	if (!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_04"), 1, 0))
	{
		if (func_224(1) || COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_05")) > 0)
		{
			func_152(joaat("DOCUMENT_TREASURE_MAP_04"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!func_224(1))
		{
			__LIB_0__::func_366(1);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_05")) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(joaat("TREASURE_HUNT_LOOT_05"), 1);
		}
	}
	if (!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_05"), 1, 0))
	{
		if (func_224(2) || COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_06")) > 0)
		{
			func_152(joaat("DOCUMENT_TREASURE_MAP_05"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!func_224(2))
		{
			__LIB_0__::func_366(2);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_06")) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(joaat("TREASURE_HUNT_LOOT_06"), 1);
		}
	}
	if (!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_06"), 1, 0))
	{
		if (func_224(4) || COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_07")) > 0)
		{
			func_152(joaat("DOCUMENT_TREASURE_MAP_06"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!func_224(4))
		{
			__LIB_0__::func_366(4);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_07")) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(joaat("TREASURE_HUNT_LOOT_07"), 1);
		}
	}
}

void func_697()
{
	if (!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_07"), 1, 0))
	{
		if (func_227(1) || COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_09")) > 0)
		{
			func_152(joaat("DOCUMENT_TREASURE_MAP_07"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!func_227(1))
		{
			__LIB_0__::func_367(1);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_09")) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(joaat("TREASURE_HUNT_LOOT_09"), 1);
		}
	}
	if (!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_08"), 1, 0))
	{
		if (func_227(2) || COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_10")) > 0)
		{
			func_152(joaat("DOCUMENT_TREASURE_MAP_08"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!func_227(2))
		{
			__LIB_0__::func_367(2);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_10")) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(joaat("TREASURE_HUNT_LOOT_10"), 1);
		}
	}
	if (!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_09"), 1, 0))
	{
		if (func_227(4) || COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_11")) > 0)
		{
			func_152(joaat("DOCUMENT_TREASURE_MAP_09"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!func_227(4))
		{
			__LIB_0__::func_367(4);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_11")) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(joaat("TREASURE_HUNT_LOOT_11"), 1);
		}
	}
}

void func_698()
{
	if (!DLC::IS_DLC_PRESENT(-679138445))
	{
		return;
	}
	if (!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0))
	{
		if (__LIB_0__::func_458(1) || COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			func_152(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!__LIB_0__::func_458(1))
		{
			__LIB_0__::func_368(1);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(joaat("TREASURE_HUNT_LOOT_13"), 1);
		}
	}
	if (!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
	{
		if (__LIB_0__::func_458(2) || COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			func_152(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!__LIB_0__::func_458(2))
		{
			__LIB_0__::func_368(2);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(joaat("TREASURE_HUNT_LOOT_14"), 1);
		}
	}
}

void func_699()
{
	if (!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_13"), 1, 0))
	{
		if (func_233(1) || COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_16")) > 0)
		{
			func_152(joaat("DOCUMENT_TREASURE_MAP_13"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!func_233(1))
		{
			__LIB_0__::func_369(1);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_16")) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(joaat("TREASURE_HUNT_LOOT_16"), 1);
		}
	}
	if (!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_14"), 1, 0))
	{
		if (func_233(2) || COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_17")) > 0)
		{
			func_152(joaat("DOCUMENT_TREASURE_MAP_14"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!func_233(2))
		{
			__LIB_0__::func_369(2);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_17")) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(joaat("TREASURE_HUNT_LOOT_17"), 1);
		}
	}
	if (!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_15"), 1, 0))
	{
		if (func_233(4) || COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_18")) > 0)
		{
			func_152(joaat("DOCUMENT_TREASURE_MAP_15"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!func_233(4))
		{
			__LIB_0__::func_369(4);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_18")) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(joaat("TREASURE_HUNT_LOOT_18"), 1);
		}
	}
}

void func_700()
{
	if (!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_16"), 1, 0))
	{
		if (func_236(1) || COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_20")) > 0)
		{
			func_152(joaat("DOCUMENT_TREASURE_MAP_16"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!func_236(1))
		{
			__LIB_0__::func_370(1);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_20")) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(joaat("TREASURE_HUNT_LOOT_20"), 1);
		}
	}
	if (!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_17"), 1, 0))
	{
		if (func_236(2) || COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_21")) > 0)
		{
			func_152(joaat("DOCUMENT_TREASURE_MAP_17"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!func_236(2))
		{
			__LIB_0__::func_370(2);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_21")) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(joaat("TREASURE_HUNT_LOOT_21"), 1);
		}
	}
	if (!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_18"), 1, 0))
	{
		if (func_236(4) || COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_22")) > 0)
		{
			func_152(joaat("DOCUMENT_TREASURE_MAP_18"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!func_236(4))
		{
			__LIB_0__::func_370(4);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_22")) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(joaat("TREASURE_HUNT_LOOT_22"), 1);
		}
	}
	if (!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_19"), 1, 0))
	{
		if (func_236(8) || COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_23")) > 0)
		{
			func_152(joaat("DOCUMENT_TREASURE_MAP_19"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!func_236(8))
		{
			__LIB_0__::func_370(8);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_23")) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(joaat("TREASURE_HUNT_LOOT_23"), 1);
		}
	}
}

bool func_723(int iParam0)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_387(iParam0, &iVar0, &iVar1))
	{
		return false;
	}
	return STATS::CHAL_ACHIEVEMENT_IS_COMPLETE(iVar0, iVar1);
}

int func_724(int iParam0)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_387(iParam0, &iVar0, &iVar1))
	{
		return -1;
	}
	return STATS::CHAL_ACHIEVEMENT_GET_PROGRESS_INT(iVar0, iVar1);
}

void func_725(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_387(iParam0, &iVar0, &iVar1))
	{
		return;
	}
	STATS::CHAL_SET_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
}

int func_742(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("LAW_BOUNTY_STATE_AMBARINO");
		case 1:
			return joaat("LAW_BOUNTY_STATE_NEW_HANOVER");
		case 3:
			return joaat("LAW_BOUNTY_STATE_WEST_ELIZABETH");
		case 2:
			return joaat("LAW_BOUNTY_STATE_LEMOYNE");
		case 5:
			return joaat("LAW_BOUNTY_STATE_GUARMA");
		case 4:
			return joaat("LAW_BOUNTY_STATE_NEW_AUSTIN");
		default:
			break;
	}
	return 0;
}

void func_778(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	int iVar7;
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
		iVar9 = __LIB_1__::func_145(iParam0, &iVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			__LIB_4__::func_253(iVar9, iVar7, -469960592, iVar8, 1, 1, 0);
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
						func_152(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_152(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_152(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_152(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_152(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_152(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_152(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_152(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_152(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_152(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_152(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_152(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_152(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_152(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_152(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_152(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_152(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_152(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_152(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_152(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_152(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_152(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_152(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_152(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_152(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_174();
						func_419(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_152(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_778(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_778(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_778(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_152(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_152(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_1275();
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
							func_152(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

void func_779()
{
	bool bVar0;
	bVar0 = __LIB_1__::func_890(8);
	Global_1894899 = 0;
	if (bVar0)
	{
		__LIB_1__::func_957(8);
	}
	Global_1894899.f_1 = 0;
	Global_1894899.f_2 = -1;
	Global_1894899.f_4 = 0;
	__LIB_12__::func_74();
	func_1283();
}

int func_841(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_47(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	__LIB_10__::func_728(iParam0, 1);
	__LIB_1__::func_830(iVar0);
	if (bParam1)
	{
		__LIB_1__::func_284(&Global_1899778, iVar0);
	}
	__LIB_1__::func_819(iVar0);
	return 1;
}

int func_900(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			__LIB_1__::func_158(iParam0, -iParam1, bVar0, bVar1, bVar2);
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
			func_900(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
		__LIB_1__::func_158(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	__LIB_11__::func_837(iParam0, iParam1);
	return 1;
}

void func_1038(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_152(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_152(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_152(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1472(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_419(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_900(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1477(Var0);
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

void func_1040(bool bParam0)
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
		func_152(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_152(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_152(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_152(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_152(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_152(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_152(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_152(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_152(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_152(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_152(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_900(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_900(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_900(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_900(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_900(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_900(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_900(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_900(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_900(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_900(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_900(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

bool func_1070(int iParam0, int iParam1)
{
	int iVar0;
	if (Global_1934266.f_26 != iParam0)
	{
		Global_1934266.f_26 = iParam0;
		iVar0 = iParam1;
		if (!__LIB_0__::func_630(iParam1))
		{
			iVar0 = __LIB_10__::func_29(iParam0);
		}
		if (!__LIB_0__::func_630(iVar0))
		{
			iVar0 = __LIB_1__::func_905(func_183(Global_36));
		}
		if (!__LIB_0__::func_630(iVar0))
		{
			return false;
		}
		LAW::_SET_LAW_REGION(PLAYER::PLAYER_ID(), Global_1934266.f_26, __LIB_8__::func_977(iVar0));
		return true;
	}
	return false;
}

void func_1092(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == __LIB_0__::func_57(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
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
				func_1092(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1092(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_1131(int iParam0, vector3 vParam1)
{
	if (__LIB_17__::func_420(iParam0))
	{
		Global_1888801[iParam0 /*35*/].f_1 = MISC::GET_GAME_TIMER();
		return;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1888801[iParam0 /*35*/].f_9, false) || MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1888801[iParam0 /*35*/].f_26)))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Global_1888801[iParam0 /*35*/].f_3))
		{
			if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1888801[iParam0 /*35*/].f_3, vParam1))
			{
				Global_1888801[iParam0 /*35*/].f_1 = MISC::GET_GAME_TIMER();
				__LIB_17__::func_421(iParam0);
				return;
			}
		}
		if (Global_1888801[iParam0 /*35*/].f_1 + 2500 > MISC::GET_GAME_TIMER())
		{
			return;
		}
	}
	if (Global_1888801[iParam0 /*35*/].f_9 != 0)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1888801[iParam0 /*35*/].f_9, false))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1888801[iParam0 /*35*/].f_9, 523);
				Global_1888801[iParam0 /*35*/].f_9 = 0;
			}
			else if (!SCRIPTS::_0x30BED53646C86D11(Global_1888801[iParam0 /*35*/].f_9))
			{
				SCRIPTS::_0x7DE4643157AD646C(Global_1888801[iParam0 /*35*/].f_9);
			}
		}
		if (!SCRIPTS::_DOES_THREAD_EXIST(Global_1888801[iParam0 /*35*/].f_9))
		{
			Global_1888801[iParam0 /*35*/].f_9 = 0;
		}
		else
		{
			return;
		}
	}
	__LIB_0__::func_25(iParam0, 8);
	switch (Global_1888801[iParam0 /*35*/].f_20)
	{
		case 1:
		case 2:
			if (__LIB_0__::func_2() == -1)
			{
				if (Global_1327479.f_6 != iParam0)
				{
					__LIB_0__::func_3(-30, 0, 1);
					Global_1327479.f_6 = iParam0;
				}
			}
			break;
		case 3:
			break;
		case 7:
			break;
		case 4:
			break;
	}
	__LIB_0__::func_25(iParam0, 11);
	if (Global_23118[iParam0 /*11*/].f_10 < 10)
	{
		Global_23118[iParam0 /*11*/].f_10 = 0;
	}
	func_1553(__LIB_5__::func_235(iParam0, 1, 1));
	if (iParam0 == Global_1894899.f_2)
	{
		__LIB_17__::func_421(-1);
		__LIB_1__::func_939();
	}
}

void func_1133(int iParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1572887.f_12 == -1)
	{
		if (!PLAYER::IS_PLAYER_PLAYING(iVar0))
		{
			return;
		}
		if (__LIB_0__::func_1(Global_1935630, 4096))
		{
			if (!__LIB_19__::func_34())
			{
				return;
			}
		}
	}
	if (!__LIB_17__::func_420(iParam0))
	{
		if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1888801[iParam0 /*35*/].f_3, vParam1))
		{
			if (Global_1894899.f_2 == iParam0)
			{
				__LIB_17__::func_421(-1);
			}
			return;
		}
		if (__LIB_0__::func_20(Global_1894899.f_2))
		{
			if (SCRIPTS::_DOES_THREAD_EXIST(Global_1888801[Global_1894899.f_2 /*35*/].f_9))
			{
				if (bParam4)
				{
					__LIB_0__::func_24(Global_1894899.f_2, 2);
				}
				return;
			}
		}
	}
	MemCopy(&(Global_1888801[iParam0 /*35*/].f_26), {__LIB_19__::func_35(iParam0)}, 4);
	if (HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1888801[iParam0 /*35*/].f_26)) != 0)
	{
		SCRIPTS::REQUEST_SCRIPT(&(Global_1888801[iParam0 /*35*/].f_26));
	}
	else
	{
		__LIB_0__::func_24(iParam0, 2);
	}
	__LIB_0__::func_24(iParam0, 1);
	if (Global_1888801[iParam0 /*35*/].f_20 != 8)
	{
		__LIB_2__::func_758(iParam0, 0);
	}
	PLAYER::_0xFA7DAAE3959E6C7B(iVar0, __LIB_3__::func_256());
	if ((Global_1888801[iParam0 /*35*/].f_20 == 1 || Global_1888801[iParam0 /*35*/].f_20 == 2) && !CAM::IS_SCREEN_FADED_OUT())
	{
		EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_PLAYER_ARRIVAL"), Global_35, -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
	}
	__LIB_17__::func_421(iParam0);
	func_1561(iParam0);
	func_575(__LIB_5__::func_235(iParam0, 1, 1), -1);
}

bool func_1140()
{
	return DATAFILE::_0x603AC35FD4602C76(Global_1359489.f_361.f_195);
}

int func_1141(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CIR_DUTCH_PIPE"):
			return 5;
		case joaat("CIR_MARY_BETH_FOUNTAIN_PEN"):
			return 13;
		case joaat("CIR_MOLLY_POCKET_MIRROR"):
			return 14;
		case joaat("CIR_PEARSON_NAVAL_COMPASS"):
			return 16;
		case joaat("CIR_SADIE_HARMONICA"):
			return 17;
		default:
			break;
	}
	return -1;
}

void func_1142(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = { 0f, 0f, 0f };
	uParam0->f_11 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_10))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_10));
	}
}

bool func_1165(int iParam0)
{
	return Global_40.f_11184.f_5[iParam0];
}

bool func_1166(int iParam0)
{
	return __LIB_0__::func_314(__LIB_10__::func_774(iParam0));
}

int func_1167(int iParam0)
{
	return func_1571(Global_35, iParam0);
}

bool func_1168(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam0 == -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iVar0 == -1)
		{
		}
		else if (Global_40.f_1095.f_1[iParam0 /*436*/].f_15[iVar0 /*94*/].f_1 == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1275()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1656(&uVar4, &iVar1, &iVar2, &iVar3)))
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
		__LIB_8__::func_966("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	__LIB_0__::func_385(1, 0);
	Global_1956575.f_4 = 1;
}

void func_1283()
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_8863)
	{
		iVar1 = func_280(iVar0, 1);
		if (__LIB_7__::func_497(iVar1, 8))
		{
			MAP::_0xD8C7162AB2E2AF45(__LIB_7__::func_462(iVar1, 0));
		}
		iVar0++;
	}
}

void func_1472(int iParam0)
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
	func_900(iParam0, 1, 1, -142743235, 1);
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
		func_900(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_1477(struct<6> Param0)
{
	if (!func_1801(Param0.f_4, 1))
	{
	}
	if (!func_1801(Param0, 1))
	{
	}
	if (!func_1801(Param0.f_2, 1))
	{
	}
	if (!func_1801(Param0.f_5, 1))
	{
	}
	if (!func_1801(Param0.f_3, 1))
	{
	}
	if (!func_1801(Param0.f_1, 1))
	{
	}
}

void func_1553(int iParam0)
{
	int iVar0;
	if ((((Global_1934266.f_26 == iParam0 || iParam0 == 0) || (iParam0 == joaat("LAW_REGION_VALENTINE_LOCKDOWN") && Global_1934266.f_26 == joaat("LAW_REGION_VALENTINE"))) || (iParam0 == joaat("LAW_REGION_RHODES_LOCKDOWN") && Global_1934266.f_26 == joaat("LAW_REGION_RHODES"))) || Global_1934266.f_26 == 0)
	{
		iVar0 = __LIB_1__::func_898();
		func_575(__LIB_4__::func_929(iVar0, 1), -1);
	}
}

void func_1561(int iParam0)
{
	if (func_1865(iParam0))
	{
		if (!__LIB_19__::func_36(iParam0) && !__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			if (!__LIB_0__::func_474(285))
			{
				__LIB_1__::func_240(285, 0);
			}
			__LIB_19__::func_37(iParam0, 1);
		}
		if (Global_1934266.f_69 != 0.75f && !__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			Global_1934266.f_69 = 0.75f;
			LAW::_0xFEC85339AACA2A35(PLAYER::PLAYER_ID(), Global_1934266.f_69);
		}
	}
	else if (Global_1934266.f_69 != 1f)
	{
		Global_1934266.f_69 = 1f;
		LAW::_0xFEC85339AACA2A35(PLAYER::PLAYER_ID(), Global_1934266.f_69);
	}
}

int func_1571(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::_IS_PED_CARRYING(iParam0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	iVar4 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	iVar3 = 0;
	while (iVar3 < iVar4)
	{
		iVar2 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar1));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
		}
		else
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar2))
			{
				iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
				__LIB_2__::func_998(iVar9, &uVar6, &uVar7, &iVar5, &uVar8);
				__LIB_2__::func_999(&iVar0, iVar9, iVar5, uVar6);
			}
			else
			{
				iVar0 = __LIB_5__::func_797(iVar2);
			}
			if (iVar0 == iParam1)
			{
				ITEMSET::DESTROY_ITEMSET(iVar1);
				return 1;
			}
		}
		iVar3++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	return 0;
}

int func_1656(var uParam0, var uParam1, var uParam2, var uParam3)
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
		*uParam2 = (*uParam2 + iVar2);
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
	iVar11 = (func_1905(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	if (!func_152(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*uParam3 = (*uParam3 + iVar11);
	*uParam1 = (*uParam1 + iVar2);
	return 1;
}

bool func_1801(int iParam0, int iParam1)
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
				if (func_1801(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_1801(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_1801(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_1801(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

bool func_1865(int iParam0)
{
	struct<5> Var0;
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	Var0 = -1;
	Var0.f_4 = -15;
	__LIB_17__::func_423(iParam0, &Var0);
	return func_1998(&Var0);
}

int func_1905(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1905(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1905(iVar63, -915411861, 1, 0, 0));
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

int func_1998(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	if (uParam0->f_4 == -15)
	{
		return 0;
	}
	if (*uParam0 != Global_40.f_7729)
	{
		bVar0 = true;
	}
	if (__LIB_12__::func_558(1, &iVar3))
	{
		if (uParam0->f_1 == iVar3)
		{
			bVar4 = true;
		}
	}
	else if (uParam0->f_1 == 0)
	{
		bVar4 = true;
	}
	if (__LIB_12__::func_558(1, &iVar3))
	{
		if (uParam0->f_2 == iVar3)
		{
			bVar5 = true;
		}
	}
	else if (uParam0->f_2 == 0)
	{
		bVar5 = true;
	}
	if (__LIB_12__::func_558(1, &iVar3))
	{
		if (uParam0->f_3 == iVar3)
		{
			bVar6 = true;
		}
	}
	else if (uParam0->f_3 == 0)
	{
		bVar6 = true;
	}
	if ((!bVar4 && !bVar5) && !bVar6)
	{
		bVar1 = true;
	}
	if (__LIB_0__::func_1(uParam0->f_5, 1) != func_2059(&uVar7))
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		if (bVar0)
		{
			return 1;
		}
	}
	if (bVar0 && bVar1)
	{
		return 1;
	}
	return 0;
}

int func_2059(int iParam0)
{
	if (-1829635046 == __LIB_1__::func_548(81053684))
	{
		if (__LIB_1__::func_610(iParam0))
		{
			return 1;
		}
	}
	else if (__LIB_1__::func_549(-525676072, iParam0))
	{
		if (__LIB_1__::func_610(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

