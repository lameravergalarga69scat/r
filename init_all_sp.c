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
	char* sLocal_18 = NULL;
	struct<2> Local_19[20];
	vector3 vLocal_60[1] = {{ 0f, 0f, 0f } };
#endregion
void __EntryFunction__()
{
	bool bVar0;
	int iVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_14 = "mech_skin@BUCK_BUTCHER";
	sLocal_15 = "PBL_BASE";
	sLocal_16 = "PBL_DUMP";
	sLocal_17 = "PBL_DROP_IN";
	sLocal_18 = "";
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_1();
	func_3(0, 484);
	func_3(1, 1133);
	func_3(2, 15157);
	func_3(3, 15356);
	func_3(4, 15380);
	func_3(5, 26367);
	func_3(6, joaat("RE_KV_MTN_V1_PLYFINAL_LOW_02"));
	func_3(7, 27099);
	func_3(8, 27135);
	func_3(9, 27148);
	func_3(10, 27878);
	func_3(11, 32073);
	func_3(12, 32090);
	func_3(13, 35182);
	func_3(14, 35278);
	func_3(15, 35291);
	func_3(16, 35300);
	func_3(17, 35867);
	func_3(18, 40242);
	func_3(19, 40437);
	func_24(0, 40465);
	bVar0 = false;
	while (!bVar0)
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (!Local_19[iVar1 /*2*/].f_1)
			{
				Call_Loc(Local_19[iVar1 /*2*/]);
				if (StackVal)
				{
					Local_19[iVar1 /*2*/].f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (!vLocal_60[iVar1 /*3*/].f_1)
			{
				Stack.Push(&(vLocal_60[iVar1 /*3*/].f_2));
				Call_Loc(vLocal_60[iVar1 /*3*/]);
				if (StackVal)
				{
					vLocal_60[iVar1 /*3*/].f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			iVar1++;
		}
		BUILTIN::WAIT(0);
	}
	func_25();
	__LIB_10__::func_614(256);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		Local_19[iVar0 /*2*/] = 40622;
		Local_19[iVar0 /*2*/].f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		vLocal_60[iVar0 /*3*/] = 40631;
		vLocal_60[iVar0 /*3*/].f_1 = 0;
		iVar0++;
	}
}

int func_2()
{
	func_29(0, joaat("CS_DUTCH"), "def_comp_brain", 1, 1);
	func_29(1, joaat("CS_JOHNMARSTON"), "def_comp_brain", 1, 0);
	func_29(2, joaat("CS_JAVIERESCUELLA"), "def_comp_brain", 1, 1);
	func_29(3, joaat("CS_BILLWILLIAMSON"), "def_comp_brain", 1, 1);
	func_29(4, joaat("CS_UNCLE"), "def_comp_brain", 0, 0);
	func_29(5, joaat("CS_HOSEAMATTHEWS"), "def_comp_brain", 1, 0);
	func_29(6, joaat("CS_MICAHBELL"), "def_comp_brain", 1, 1);
	func_29(7, joaat("CS_CHARLESSMITH"), "def_comp_brain", 1, 1);
	func_29(8, joaat("CS_SEAN"), "def_comp_brain", 1, 1);
	func_29(9, joaat("CS_LENNY"), "def_comp_brain", 1, 1);
	func_29(10, joaat("CS_KIERAN"), "def_comp_brain", 0, 0);
	func_29(11, joaat("CS_MRSADLER"), "def_comp_brain", 1, 0);
	func_29(23, joaat("CS_JOSIAHTRELAWNY"), "def_comp_brain", 0, 1);
	func_29(17, joaat("CS_MRPEARSON"), "def_comp_brain", 0, 0);
	func_29(21, joaat("CS_REVSWANSON"), "def_comp_brain", 0, 0);
	func_29(18, joaat("CS_LEOSTRAUSS"), "def_comp_brain", 0, 0);
	func_29(14, joaat("CS_JACKMARSTON"), "def_comp_brain", 0, 0);
	func_29(13, joaat("CS_ABIGAILROBERTS"), "def_comp_brain", 0, 0);
	func_29(16, joaat("CS_MOLLYOSHEA"), "def_comp_brain", 0, 0);
	func_29(19, joaat("CS_SUSANGRIMSHAW"), "def_comp_brain", 0, 0);
	func_29(15, joaat("CS_MARYBETH"), "def_comp_brain", 0, 0);
	func_29(20, joaat("CS_KAREN"), "def_comp_brain", 0, 0);
	func_29(22, joaat("CS_TILLY"), "def_comp_brain", 0, 0);
	func_29(24, joaat("CS_CLEET"), "def_comp_brain", 0, 0);
	func_29(25, joaat("CS_JOE"), "def_comp_brain", 0, 0);
	func_29(26, joaat("CS_EAGLEFLIES"), "def_comp_brain", 0, 1);
	func_29(12, joaat("A_C_DOGCATAHOULACUR_01"), "def_comp_brain", 1, 0);
	func_30(0, 0, 234527101, 234527101);
	func_30(1, 0, 234527101, 234527101);
	func_30(3, 2, 234527101, 234527101);
	func_30(2, 4, 234527101, 234527101);
	func_30(6, 5, 234527101, 234527101);
	func_30(7, 1, 234527101, 234527101);
	func_30(11, 4, 234527101, 234527101);
	func_30(5, 4, 234527101, 234527101);
	func_30(8, 0, 234527101, 234527101);
	func_30(9, 0, 234527101, 234527101);
	func_30(12, 0, 234527101, 234527101);
	if (func_31())
	{
		return 1;
	}
	return 0;
}

void func_3(int iParam0, int iParam1)
{
	Local_19[iParam0 /*2*/] = iParam1;
	Local_19[iParam0 /*2*/].f_1 = 0;
}

int func_4()
{
	if (!__LIB_0__::func_313())
	{
		func_33();
	}
	Global_1897950 = -1;
	__LIB_18__::func_754(1, joaat("VAL_BARTENDER"), 76, 0);
	__LIB_18__::func_754(2, joaat("VAL_SLUM_BARTENDER"), 76, 0);
	__LIB_18__::func_754(8, joaat("VAL_BARBER"), 76, 1048576);
	__LIB_18__::func_754(11, joaat("VAL_DOCTOR"), 76, 1048576);
	__LIB_18__::func_754(9, joaat("VAL_GUNSMITH"), 76, 1048576);
	__LIB_18__::func_754(10, joaat("VAL_GENERAL_STORE"), 76, 1048576);
	__LIB_18__::func_754(45, joaat("VAL_HORSE_SHOP_OWNER"), 76, 1048576);
	__LIB_18__::func_754(6, joaat("VAL_BUTCHER"), 76, 1048576);
	__LIB_18__::func_754(14, joaat("VAL_PIANO_PLAYER"), 76, 0);
	__LIB_18__::func_754(15, joaat("VAL_HOTEL_CLEANER"), 76, 0);
	__LIB_18__::func_754(16, joaat("VAL_HOTEL_OWNER"), 76, 0);
	__LIB_18__::func_754(3, joaat("VAL_SHERIFF"), 76, 2097152);
	__LIB_18__::func_754(4, joaat("VAL_SHERIFF_HELPER"), 76, 2097152);
	__LIB_18__::func_754(18, joaat("VAL_BLACKSMITH"), 76, 0);
	__LIB_18__::func_754(17, joaat("VAL_HANDYMAN"), 76, 0);
	__LIB_18__::func_754(7, joaat("VAL_AUCTION_BOSS"), 76, 1048576);
	__LIB_18__::func_754(20, joaat("VAL_AUCTION_HANDYMAN"), 76, 0);
	__LIB_18__::func_754(21, joaat("VAL_HANDYMANS_WIFE"), 76, 0);
	__LIB_18__::func_754(19, joaat("VAL_LIVERY"), 76, 0);
	__LIB_18__::func_754(22, joaat("VAL_HEAD_PROSTITUTE"), 76, 0);
	__LIB_18__::func_754(23, joaat("VAL_PROSTITUTE_1"), 76, 0);
	__LIB_18__::func_754(24, joaat("VAL_PROSTITUTE_2"), 76, 0);
	__LIB_18__::func_754(5, joaat("VAL_TRAIN_CLERK"), 76, 0);
	__LIB_18__::func_754(25, joaat("VAL_PRISONER_1"), 76, 0);
	__LIB_18__::func_754(26, joaat("VAL_PRISONER_2"), 76, 0);
	__LIB_18__::func_754(33, joaat("VAL_SHOW_TICKET_VENDOR"), 76, 0);
	__LIB_18__::func_754(48, joaat("VAL_TOWN_DOG_1"), 76, 0);
	__LIB_18__::func_754(49, joaat("VAL_TOWN_DOG_2"), 76, 0);
	__LIB_18__::func_754(50, joaat("VAL_TOWN_DOG_3"), 76, 0);
	__LIB_18__::func_754(51, joaat("VAL_GUARD_DOG"), 76, 0);
	__LIB_18__::func_754(27, joaat("VAL_AUCTION_HAND"), 76, 0);
	__LIB_18__::func_754(28, joaat("VAL_AUCTION_HAND_2"), 76, 0);
	__LIB_18__::func_754(29, joaat("VAL_RANCHER_1"), 76, 0);
	__LIB_18__::func_754(30, joaat("VAL_RANCHER_2"), 76, 0);
	__LIB_18__::func_754(31, joaat("VAL_DELIVERY_MAN"), 76, 0);
	__LIB_18__::func_754(32, joaat("VAL_NEWSPAPER_VENDOR"), 76, 0);
	__LIB_18__::func_754(34, joaat("VAL_SALOON_CLEANER"), 76, 0);
	__LIB_18__::func_754(35, joaat("VAL_TOWN_FARMER"), 76, 0);
	__LIB_18__::func_754(36, joaat("VAL_TOWN_WORKER_1"), 76, 0);
	__LIB_18__::func_754(37, joaat("VAL_TOWN_WORKER_2"), 76, 0);
	__LIB_18__::func_754(38, joaat("VAL_TOWN_WORKER_3"), 76, 0);
	__LIB_18__::func_754(39, joaat("VAL_TOWN_WORKER_4"), 76, 0);
	__LIB_18__::func_754(40, joaat("VAL_TOWN_WORKER_5"), 76, 0);
	__LIB_18__::func_754(41, joaat("VAL_TOWN_WORKER_6"), 76, 0);
	__LIB_18__::func_754(42, joaat("VAL_TOWN_WORKER_7"), 76, 0);
	__LIB_18__::func_754(43, joaat("VAL_TOWN_WORKER_8"), 76, 0);
	__LIB_18__::func_754(44, joaat("VAL_TOWN_WORKER_9"), 76, 0);
	__LIB_18__::func_754(0, joaat("VAL_TOWN_DRUNK"), 76, 0);
	__LIB_18__::func_754(52, joaat("VAL_LIVERY_HORSE"), 76, 0);
	__LIB_18__::func_754(12, joaat("VAL_BANK_MANAGER"), 76, 0);
	__LIB_18__::func_754(13, joaat("VAL_BANK_GUARD"), 76, 0);
	__LIB_18__::func_754(46, joaat("VAL_HORSE_RIDER_1"), 76, 0);
	__LIB_18__::func_754(47, joaat("VAL_HORSE_RIDER_2"), 76, 0);
	__LIB_18__::func_754(53, joaat("VAL_PIGS_NORTH"), 76, 0);
	__LIB_18__::func_754(54, joaat("VAL_PIGS_WEST"), 76, 0);
	__LIB_18__::func_754(55, joaat("VAL_SHEEP_1"), 76, 0);
	__LIB_18__::func_754(56, joaat("VAL_SHEEP_2"), 76, 0);
	__LIB_18__::func_754(57, joaat("VAL_SHEEP_3"), 76, 0);
	__LIB_18__::func_754(58, joaat("VAL_SHEEP_4"), 76, 0);
	__LIB_18__::func_754(59, joaat("VAL_SHEEP_5"), 76, 0);
	__LIB_18__::func_754(60, joaat("VAL_SHEEP_6"), 76, 0);
	__LIB_18__::func_754(61, joaat("VAL_SHEEP_7"), 76, 0);
	__LIB_18__::func_754(62, joaat("VAL_SHEEP_8"), 76, 0);
	__LIB_18__::func_754(63, joaat("VAL_RESIDENTIAL_SHEEP_1"), 76, 0);
	__LIB_18__::func_754(69, joaat("RHD_BARTENDER"), 105, 0);
	__LIB_18__::func_754(73, joaat("RHD_GUNSMITH"), 105, 1048576);
	__LIB_18__::func_754(74, joaat("RHD_GENERAL_STORE"), 105, 1048576);
	__LIB_18__::func_754(78, joaat("RHD_FENCE"), 105, 1048576);
	__LIB_18__::func_754(79, joaat("RHD_PIANO_PLAYER"), 105, 0);
	__LIB_18__::func_754(80, joaat("RHD_HOTEL_OWNER"), 105, 0);
	__LIB_18__::func_754(70, joaat("RHD_SHERIFF"), 105, 2097152);
	__LIB_18__::func_754(71, joaat("RHD_DEPUTY"), 105, 2097152);
	__LIB_18__::func_754(81, joaat("RHD_LIVERY_WORKER"), 105, 0);
	__LIB_18__::func_754(72, joaat("RHD_TRAIN_STAT_OWNER"), 105, 0);
	__LIB_18__::func_754(77, joaat("RHD_BUTCHER"), 105, 0);
	__LIB_18__::func_754(82, joaat("RHD_UNDERTAKER"), 105, 0);
	__LIB_18__::func_754(76, joaat("RHD_BANK_MANAGER"), 105, 0);
	__LIB_18__::func_754(75, joaat("RHD_BANK_GUARD"), 105, 0);
	__LIB_18__::func_754(127, joaat("RHD_PRISONER"), 105, 0);
	__LIB_18__::func_754(88, joaat("RHD_NEWSPAPER_VENDOR"), 105, 0);
	__LIB_18__::func_754(83, joaat("RHD_GAMBLER"), 105, 0);
	__LIB_18__::func_754(84, joaat("RHD_GOOD_TIME_GIRL_1"), 105, 0);
	__LIB_18__::func_754(85, joaat("RHD_GOOD_TIME_GIRL_2"), 105, 0);
	__LIB_18__::func_754(86, joaat("RHD_GOOD_TIME_GIRL_3"), 105, 0);
	__LIB_18__::func_754(87, joaat("RHD_GOOD_TIME_GIRL_4"), 105, 0);
	__LIB_18__::func_754(89, joaat("RHD_COTTON_CARRIER_1"), 105, 0);
	__LIB_18__::func_754(90, joaat("RHD_COTTON_CARRIER_2"), 105, 0);
	__LIB_18__::func_754(91, joaat("RHD_COTTON_LOADER_1"), 105, 0);
	__LIB_18__::func_754(92, joaat("RHD_COTTON_SUPERVISOR"), 105, 0);
	__LIB_18__::func_754(93, joaat("RHD_COTTON_SWEEPER_1"), 105, 0);
	__LIB_18__::func_754(94, joaat("RHD_COTTON_SWEEPER_2"), 105, 0);
	__LIB_18__::func_754(95, joaat("RHD_STABLE_WORKER_1"), 105, 0);
	__LIB_18__::func_754(96, joaat("RHD_STABLE_WORKER_2"), 105, 0);
	__LIB_18__::func_754(97, joaat("RHD_DELIVERY_WORKER_1"), 105, 0);
	__LIB_18__::func_754(98, joaat("RHD_DELIVERY_WORKER_2"), 105, 0);
	__LIB_18__::func_754(99, joaat("RHD_MANSION_FEMALE_1"), 105, 0);
	__LIB_18__::func_754(100, joaat("RHD_MANSION_FEMALE_2"), 105, 0);
	__LIB_18__::func_754(101, joaat("RHD_MANSION_MALE_1"), 105, 0);
	__LIB_18__::func_754(102, joaat("RHD_MANSION_MALE_2"), 105, 0);
	__LIB_18__::func_754(103, joaat("RHD_MANSION_WORKER_1"), 105, 0);
	__LIB_18__::func_754(104, joaat("RHD_MANSION_WORKER_2"), 105, 0);
	__LIB_18__::func_754(105, joaat("RHD_PARLOR_WORKER_1"), 105, 0);
	__LIB_18__::func_754(106, joaat("RHD_BLACK_SLUMS_FEMALE_1"), 105, 0);
	__LIB_18__::func_754(107, joaat("RHD_BLACK_SLUMS_FEMALE_2"), 105, 0);
	__LIB_18__::func_754(108, joaat("RHD_BLACK_SLUMS_FEMALE_3"), 105, 0);
	__LIB_18__::func_754(109, joaat("RHD_BLACK_SLUMS_FEMALE_4"), 105, 0);
	__LIB_18__::func_754(110, joaat("RHD_BLACK_SLUMS_FEMALE_5"), 105, 0);
	__LIB_18__::func_754(111, joaat("RHD_GRAYS_GANG_1"), 105, 0);
	__LIB_18__::func_754(112, joaat("RHD_GRAYS_GANG_2"), 105, 0);
	__LIB_18__::func_754(113, joaat("RHD_GRAYS_GANG_3"), 105, 0);
	__LIB_18__::func_754(114, joaat("RHD_GRAYS_GANG_4"), 105, 0);
	__LIB_18__::func_754(115, joaat("RHD_WHITE_SLUMS_1"), 105, 0);
	__LIB_18__::func_754(116, joaat("RHD_WHITE_SLUMS_2"), 105, 0);
	__LIB_18__::func_754(117, joaat("RHD_WHITE_SLUMS_3"), 105, 0);
	__LIB_18__::func_754(118, joaat("RHD_WHITE_SLUMS_4"), 105, 0);
	__LIB_18__::func_754(119, joaat("RHD_WHITE_SLUMS_5"), 105, 0);
	__LIB_18__::func_754(120, joaat("RHD_SLUMS_DRUNK_1"), 105, 0);
	__LIB_18__::func_754(121, joaat("RHD_SLUMS_DRUNK_2"), 105, 0);
	__LIB_18__::func_754(122, joaat("RHD_SLUMS_DRUNK_3"), 105, 0);
	__LIB_18__::func_754(123, joaat("RHD_SLUMS_DRUNK_4"), 105, 0);
	__LIB_18__::func_754(124, joaat("RHD_SLUMS_DRUNK_5"), 105, 0);
	__LIB_18__::func_754(125, joaat("RHD_WHITE_SLUMS_MUSICIAN"), 105, 0);
	__LIB_18__::func_754(126, joaat("RHD_LARGE_MALE_1"), 105, 0);
	__LIB_18__::func_754(128, joaat("RHD_BLACK_SLUMS_DOG"), 105, 0);
	__LIB_18__::func_754(129, joaat("RHD_MAIN_STRIP_DOG"), 105, 0);
	__LIB_18__::func_754(130, joaat("RHD_MANSION_CAT"), 105, 0);
	__LIB_18__::func_754(131, joaat("RHD_MANSION_DOG"), 105, 0);
	__LIB_18__::func_754(132, joaat("RHD_WHITE_SLUMS_CAT_1"), 105, 0);
	__LIB_18__::func_754(133, joaat("RHD_WHITE_SLUMS_CAT_2"), 105, 0);
	__LIB_18__::func_754(134, joaat("RHD_WHITE_SLUMS_DOG"), 105, 0);
	__LIB_18__::func_754(135, joaat("RHD_WHITE_SLUMS_DOG_2"), 105, 0);
	__LIB_18__::func_754(136, joaat("RHD_WHITE_SLUMS_PIG"), 105, 0);
	__LIB_18__::func_754(744, joaat("WTC_OLD_LADY"), 29, 0);
	__LIB_18__::func_754(731, joaat("APF_BROTHER"), 77, 0);
	__LIB_18__::func_754(732, joaat("APF_SISTER"), 77, 0);
	__LIB_18__::func_754(626, joaat("CGH_FARM_HAND"), 95, 0);
	__LIB_18__::func_754(627, joaat("CGH_FIELD_GUARD"), 95, 0);
	__LIB_18__::func_754(628, joaat("CGH_FIELD_GUARD_2"), 95, 0);
	__LIB_18__::func_754(629, joaat("CGH_FIELD_GUARD_3"), 95, 0);
	__LIB_18__::func_754(630, joaat("CGH_FIELD_GUARD_4"), 95, 0);
	__LIB_18__::func_754(631, joaat("CGH_GATE_GUARD"), 95, 0);
	__LIB_18__::func_754(632, joaat("CGH_GATE_GUARD_2"), 95, 0);
	__LIB_18__::func_754(633, joaat("CGH_HORSE_GUARD"), 95, 0);
	__LIB_18__::func_754(634, joaat("CGH_HORSE_GUARD_2"), 95, 0);
	__LIB_18__::func_754(635, joaat("CGH_HOUSE_GUARD"), 95, 0);
	__LIB_18__::func_754(636, joaat("CGH_HOUSE_GUARD_2"), 95, 0);
	__LIB_18__::func_754(637, joaat("CGH_HOUSE_GUARD_3"), 95, 0);
	__LIB_18__::func_754(638, joaat("CGH_HOUSE_GUARD_4"), 95, 0);
	__LIB_18__::func_754(639, joaat("CGH_MULE"), 95, 0);
	__LIB_18__::func_754(640, joaat("CGH_OX_1"), 95, 0);
	__LIB_18__::func_754(641, joaat("CGH_OX_2"), 95, 0);
	__LIB_18__::func_754(642, joaat("CLE_CLAY"), 97, 0);
	__LIB_18__::func_754(643, joaat("CLE_CLIVE"), 97, 0);
	__LIB_18__::func_754(613, joaat("BRA_STABLE_HAND"), 93, 0);
	__LIB_18__::func_754(614, joaat("BRA_STABLE_HAND_2"), 93, 0);
	__LIB_18__::func_754(617, joaat("BRA_GATE_GUARD"), 93, 0);
	__LIB_18__::func_754(618, joaat("BRA_GATE_GUARD_2"), 93, 0);
	__LIB_18__::func_754(619, joaat("BRA_GATE_GUARD_3"), 93, 0);
	__LIB_18__::func_754(620, joaat("BRA_GATE_GUARD_4"), 93, 0);
	__LIB_18__::func_754(621, joaat("BRA_MANOR_GUARD"), 93, 0);
	__LIB_18__::func_754(622, joaat("BRA_MANOR_GUARD_2"), 93, 0);
	__LIB_18__::func_754(623, joaat("BRA_MANOR_GUARD_3"), 93, 0);
	__LIB_18__::func_754(624, joaat("BRA_MANOR_GUARD_4"), 93, 0);
	__LIB_18__::func_754(625, joaat("BRA_MANOR_GUARD_5"), 93, 0);
	__LIB_18__::func_754(616, joaat("BRA_HORSES_01"), 93, 0);
	__LIB_18__::func_754(615, joaat("BRA_OXEN_PERSCHAR_1"), 93, 0);
	__LIB_18__::func_754(644, joaat("LAG_FATHER1"), 3, 0);
	__LIB_18__::func_754(645, joaat("LAG_MOTHER1"), 3, 0);
	__LIB_18__::func_754(646, joaat("LAG_MOTHER2"), 3, 0);
	__LIB_18__::func_754(647, joaat("LAG_MOTHER3"), 3, 0);
	__LIB_18__::func_754(648, joaat("LAG_F_TEEN1"), 3, 0);
	__LIB_18__::func_754(649, joaat("LAG_F_TEEN2"), 3, 0);
	__LIB_18__::func_754(656, joaat("LAG_GRANDMOTHER1"), 3, 0);
	__LIB_18__::func_754(650, joaat("LAG_FISHERMAN1"), 3, 0);
	__LIB_18__::func_754(651, joaat("LAG_FISHERMAN2"), 3, 0);
	__LIB_18__::func_754(652, joaat("LAG_FISHERMAN4"), 3, 0);
	__LIB_18__::func_754(653, joaat("LAG_DOG_1"), 3, 0);
	__LIB_18__::func_754(654, joaat("LAG_DOG_2"), 3, 0);
	__LIB_18__::func_754(655, joaat("LAG_GOAT"), 3, 0);
	__LIB_18__::func_754(657, joaat("ORA_FOREMAN"), 6, 0);
	__LIB_18__::func_754(658, joaat("ORA_GUARD"), 6, 0);
	__LIB_18__::func_754(207, joaat("SDN_ARTIST"), 5, 0);
	__LIB_18__::func_754(208, joaat("SDN_BANK_TELLER"), 5, 0);
	__LIB_18__::func_754(209, joaat("SDN_BANK_GUARD"), 5, 0);
	__LIB_18__::func_754(201, joaat("SDN_BARBER"), 5, 1048576);
	__LIB_18__::func_754(137, joaat("SDN_BARTENDER"), 5, 0);
	__LIB_18__::func_754(138, joaat("SDN_BARTENDER_SLUMS"), 5, 0);
	__LIB_18__::func_754(139, joaat("SDN_BUTCHER"), 5, 1048576);
	__LIB_18__::func_754(144, joaat("SDN_CITY_WORKER_1"), 5, 0);
	__LIB_18__::func_754(145, joaat("SDN_COM_CHURCH_WORKER_1"), 5, 0);
	__LIB_18__::func_754(146, joaat("SDN_COURTYARD_LADY_01"), 5, 0);
	__LIB_18__::func_754(147, joaat("SDN_COURTYARD_LADY_02"), 5, 0);
	__LIB_18__::func_754(148, joaat("SDN_DOCK_BOAT_GUARD_1"), 5, 0);
	__LIB_18__::func_754(149, joaat("SDN_DOCK_CASTILLE_1"), 5, 0);
	__LIB_18__::func_754(150, joaat("SDN_DOCK_CASTILLE_2"), 5, 0);
	__LIB_18__::func_754(151, joaat("SDN_DOCK_CIVIL_1"), 5, 0);
	__LIB_18__::func_754(152, joaat("SDN_DOCK_CONSTR_1"), 5, 0);
	__LIB_18__::func_754(153, joaat("SDN_DOCK_CONSTR_2"), 5, 0);
	__LIB_18__::func_754(154, joaat("SDN_DOCK_CONSTR_3"), 5, 0);
	__LIB_18__::func_754(155, joaat("SDN_DOCK_CORNWALL_1"), 5, 0);
	__LIB_18__::func_754(156, joaat("SDN_DOCK_COTTON_1"), 5, 0);
	__LIB_18__::func_754(157, joaat("SDN_DOCK_COTTON_2"), 5, 0);
	__LIB_18__::func_754(158, joaat("SDN_DOCK_COTTON_3"), 5, 0);
	__LIB_18__::func_754(159, joaat("SDN_DOCK_COTTON_4"), 5, 0);
	__LIB_18__::func_754(160, joaat("SDN_DOCK_COTTON_5"), 5, 0);
	__LIB_18__::func_754(161, joaat("SDN_DOCK_COTTON_6"), 5, 0);
	__LIB_18__::func_754(162, joaat("SDN_DOCK_COTTON_7"), 5, 0);
	__LIB_18__::func_754(163, joaat("SDN_DOCK_COTTON_8"), 5, 0);
	__LIB_18__::func_754(164, joaat("SDN_DOCK_LH_1"), 5, 0);
	__LIB_18__::func_754(165, joaat("SDN_DOCK_LH_2"), 5, 0);
	__LIB_18__::func_754(166, joaat("SDN_DOCK_LH_3"), 5, 0);
	__LIB_18__::func_754(167, joaat("SDN_DOCK_LH_CAT"), 5, 0);
	__LIB_18__::func_754(168, joaat("SDN_DOCK_LH_DOG"), 5, 0);
	__LIB_18__::func_754(169, joaat("SDN_DOCK_LUMBER_1"), 5, 0);
	__LIB_18__::func_754(170, joaat("SDN_DOCK_LUMBER_2"), 5, 0);
	__LIB_18__::func_754(171, joaat("SDN_DOCK_LUMBER_3"), 5, 0);
	__LIB_18__::func_754(172, joaat("SDN_DOCK_LUMBER_4"), 5, 0);
	__LIB_18__::func_754(173, joaat("SDN_DOCK_WORKER_1"), 5, 0);
	__LIB_18__::func_754(174, joaat("SDN_DOCK_WORKER_2"), 5, 0);
	__LIB_18__::func_754(175, joaat("SDN_DOCK_WORKER_3"), 5, 0);
	__LIB_18__::func_754(176, joaat("SDN_DOCK_WORKER_4"), 5, 0);
	__LIB_18__::func_754(140, joaat("SDN_DOCTOR"), 5, 1048576);
	__LIB_18__::func_754(177, joaat("SDN_FARMER_01"), 5, 0);
	__LIB_18__::func_754(178, joaat("SDN_FARMER_DOG_01"), 5, 0);
	__LIB_18__::func_754(210, joaat("SDN_CHICKEN_1"), 5, 0);
	__LIB_18__::func_754(211, joaat("SDN_ROOSTER_1"), 5, 0);
	__LIB_18__::func_754(212, joaat("SDN_GOAT_1"), 5, 0);
	__LIB_18__::func_754(213, joaat("SDN_GOAT_2"), 5, 0);
	__LIB_18__::func_754(215, joaat("SDN_COW_1"), 5, 0);
	__LIB_18__::func_754(216, joaat("SDN_COW_2"), 5, 0);
	__LIB_18__::func_754(217, joaat("SDN_BULL_2"), 5, 0);
	__LIB_18__::func_754(218, joaat("SDN_COW_3"), 5, 0);
	__LIB_18__::func_754(214, joaat("SDN_HORSE_1"), 5, 0);
	__LIB_18__::func_754(255, joaat("SDN_PIG_2"), 5, 0);
	__LIB_18__::func_754(179, joaat("SDN_FARMER_WIFE_01"), 5, 0);
	__LIB_18__::func_754(180, joaat("SDN_FARMER_WIFE_02"), 5, 0);
	__LIB_18__::func_754(181, joaat("SDN_FARMER_WIFE_03"), 5, 0);
	__LIB_18__::func_754(182, joaat("SDN_FARMER_WIFE_04"), 5, 0);
	__LIB_18__::func_754(183, joaat("SDN_FARMHAND_01"), 5, 0);
	__LIB_18__::func_754(184, joaat("SDN_FARMHAND_02"), 5, 0);
	__LIB_18__::func_754(185, joaat("SDN_FARMHAND_03A"), 5, 0);
	__LIB_18__::func_754(186, joaat("SDN_FARMHAND_03B"), 5, 0);
	__LIB_18__::func_754(187, joaat("SDN_FARMHAND_04"), 5, 0);
	__LIB_18__::func_754(188, joaat("SDN_FARMHAND_05"), 5, 0);
	__LIB_18__::func_754(189, joaat("SDN_RURAL_BLACKSMITH"), 5, 0);
	__LIB_18__::func_754(190, joaat("SDN_RURAL_HOUSE_LADY_1"), 5, 0);
	__LIB_18__::func_754(191, joaat("SDN_RURAL_HOUSE_LADY_2"), 5, 0);
	__LIB_18__::func_754(192, joaat("SDN_RURAL_SLUMS_DOG_1"), 5, 0);
	__LIB_18__::func_754(193, joaat("SDN_RURAL_SLUMS_DOG_2"), 5, 0);
	__LIB_18__::func_754(194, joaat("SDN_RURAL_SLUMS_MAN_1"), 5, 0);
	__LIB_18__::func_754(195, joaat("SDN_RURAL_SLUMS_MAN_2"), 5, 0);
	__LIB_18__::func_754(196, joaat("SDN_RURAL_SLUMS_WOMAN_1"), 5, 0);
	__LIB_18__::func_754(197, joaat("SDN_RURAL_SLUMS_WOMAN_2"), 5, 0);
	__LIB_18__::func_754(198, joaat("SDN_FLOWER_ENTHUSIAST"), 5, 0);
	__LIB_18__::func_754(199, joaat("SDN_FLOWER_ENTHUSIAST_2"), 5, 0);
	__LIB_18__::func_754(200, joaat("SDN_GEN_STORE_OWNER"), 5, 1048576);
	__LIB_18__::func_754(219, joaat("SDN_GEN_STORE_SHADY"), 5, 1048576);
	__LIB_18__::func_754(220, joaat("SDN_GROUNDS_KEEPER_1"), 5, 0);
	__LIB_18__::func_754(221, joaat("SDN_GROUNDS_KEEPER_2"), 5, 0);
	__LIB_18__::func_754(222, joaat("SDN_GROUNDS_KEEPER_3"), 5, 0);
	__LIB_18__::func_754(223, joaat("SDN_GROUNDS_KEEPER_4"), 5, 0);
	__LIB_18__::func_754(224, joaat("SDN_GROUNDS_KEEPER_5"), 5, 0);
	__LIB_18__::func_754(202, joaat("SDN_GUNSMITH"), 5, 1048576);
	__LIB_18__::func_754(203, joaat("SDN_HOMEOWNER_01"), 5, 0);
	__LIB_18__::func_754(204, joaat("SDN_HOMEOWNER_02"), 5, 0);
	__LIB_18__::func_754(205, joaat("SDN_HORSE_SHOP_OWNER"), 5, 1048576);
	__LIB_18__::func_754(206, joaat("SDN_HOTEL_CARETAKER"), 5, 0);
	__LIB_18__::func_754(225, joaat("SDN_IND_CASTILLE_1"), 5, 0);
	__LIB_18__::func_754(226, joaat("SDN_IND_CASTILLE_2"), 5, 0);
	__LIB_18__::func_754(227, joaat("SDN_IND_CASTILLE_3"), 5, 0);
	__LIB_18__::func_754(228, joaat("SDN_IND_CASTILLE_4"), 5, 0);
	__LIB_18__::func_754(229, joaat("SDN_IND_CASTILLE_5"), 5, 0);
	__LIB_18__::func_754(230, joaat("SDN_IND_CASTILLE_6"), 5, 0);
	__LIB_18__::func_754(233, joaat("SDN_IND_COURTYARD_1"), 5, 0);
	__LIB_18__::func_754(234, joaat("SDN_IND_LAMBERT_1"), 5, 0);
	__LIB_18__::func_754(235, joaat("SDN_IND_LAMBERT_2"), 5, 0);
	__LIB_18__::func_754(236, joaat("SDN_IND_LAMBERT_3"), 5, 0);
	__LIB_18__::func_754(237, joaat("SDN_IND_LAMBERT_4"), 5, 0);
	__LIB_18__::func_754(238, joaat("SDN_IND_LAMBERT_5"), 5, 0);
	__LIB_18__::func_754(231, joaat("SDN_IND_CASTILLE_DOG"), 5, 0);
	__LIB_18__::func_754(232, joaat("SDN_IND_CASTILLE_DOG_2"), 5, 0);
	__LIB_18__::func_754(239, joaat("SDN_IND_LANIK_1"), 5, 0);
	__LIB_18__::func_754(240, joaat("SDN_IND_LANIK_2"), 5, 0);
	__LIB_18__::func_754(241, joaat("SDN_MARKET_VENDOR1"), 5, 0);
	__LIB_18__::func_754(242, joaat("SDN_FRENCHMARKET_VENDOR_1"), 5, 0);
	__LIB_18__::func_754(243, joaat("SDN_FRENCHMARKET_VENDOR_2"), 5, 0);
	__LIB_18__::func_754(245, joaat("SDN_FRENCHMARKET_FEMALE_1"), 5, 0);
	__LIB_18__::func_754(244, joaat("SDN_FRENCHMARKET_MALE_1"), 5, 0);
	__LIB_18__::func_754(246, joaat("SDN_FRENCHMARKET_WORKER_1"), 5, 0);
	__LIB_18__::func_754(247, joaat("SDN_FRENCHMARKET_WORKER_2"), 5, 0);
	__LIB_18__::func_754(248, joaat("SDN_SLUMSMARKET_FEMALE_1"), 5, 0);
	__LIB_18__::func_754(249, joaat("SDN_MARKET_WORKER_1"), 5, 0);
	__LIB_18__::func_754(250, joaat("SDN_MUSICIAN"), 5, 0);
	__LIB_18__::func_754(251, joaat("SDN_NEWSPAPER_VENDOR"), 5, 0);
	__LIB_18__::func_754(252, joaat("SDN_PARK_CARETAKER_1"), 5, 0);
	__LIB_18__::func_754(253, joaat("SDN_PARK_CARETAKER_2"), 5, 0);
	__LIB_18__::func_754(254, joaat("SDN_PARK_CARETAKER_3"), 5, 0);
	__LIB_18__::func_754(256, joaat("SDN_POLICE_CHIEF"), 5, 0);
	__LIB_18__::func_754(265, joaat("SDN_PARK_POLICE"), 5, 0);
	__LIB_18__::func_754(266, joaat("SDN_PARK_POLICE_2"), 5, 0);
	__LIB_18__::func_754(257, joaat("SDN_COM_POLICE_1"), 5, 0);
	__LIB_18__::func_754(258, joaat("SDN_COM_POLICE_2"), 5, 0);
	__LIB_18__::func_754(259, joaat("SDN_COM_POLICE_3"), 5, 0);
	__LIB_18__::func_754(260, joaat("SDN_DOCK_POLICE_1"), 5, 0);
	__LIB_18__::func_754(261, joaat("SDN_DOCK_POLICE_2"), 5, 0);
	__LIB_18__::func_754(262, joaat("SDN_FRENCH_POLICE_1"), 5, 0);
	__LIB_18__::func_754(263, joaat("SDN_FRENCH_POLICE_2"), 5, 0);
	__LIB_18__::func_754(264, joaat("SDN_FRENCH_POLICE_3"), 5, 0);
	__LIB_18__::func_754(267, joaat("SDN_GARDEN_POLICE_1"), 5, 0);
	__LIB_18__::func_754(268, joaat("SDN_GARDEN_POLICE_2"), 5, 0);
	__LIB_18__::func_754(269, joaat("SDN_GARDEN_POLICE_3"), 5, 0);
	__LIB_18__::func_754(270, joaat("SDN_GARDEN_POLICE_4"), 5, 0);
	__LIB_18__::func_754(271, joaat("SDN_GARDEN_POLICE_5"), 5, 0);
	__LIB_18__::func_754(272, joaat("SDN_GARDEN_POLICE_6"), 5, 0);
	__LIB_18__::func_754(273, joaat("SDN_GARDEN_POLICE_7"), 5, 0);
	__LIB_18__::func_754(274, joaat("SDN_GARDEN_POLICE_8"), 5, 0);
	__LIB_18__::func_754(275, joaat("SDN_GARDEN_POLICE_9"), 5, 0);
	__LIB_18__::func_754(276, joaat("SDN_GARDEN_POLICE_10"), 5, 0);
	__LIB_18__::func_754(277, joaat("SDN_GARDEN_CAT"), 5, 0);
	__LIB_18__::func_754(278, joaat("SDN_GARDEN_DOG"), 5, 0);
	__LIB_18__::func_754(279, joaat("SDN_GARDEN_DRINKER_1"), 5, 0);
	__LIB_18__::func_754(280, joaat("SDN_GARDEN_DRINKER_2"), 5, 0);
	__LIB_18__::func_754(143, joaat("SDN_PHOTOGRAPHER"), 5, 0);
	__LIB_18__::func_754(281, joaat("SDN_PRISONER_1"), 5, 0);
	__LIB_18__::func_754(282, joaat("SDN_PRISONER_2"), 5, 0);
	__LIB_18__::func_754(283, joaat("SDN_SHOW_TICKET_VENDOR"), 5, 1048576);
	__LIB_18__::func_754(284, joaat("SDN_SHOW_TICKET_VENDOR_2"), 5, 1048576);
	__LIB_18__::func_754(142, joaat("SDN_TAILOR"), 5, 1048576);
	__LIB_18__::func_754(305, joaat("SDN_TOURIST_MALE_1"), 5, 0);
	__LIB_18__::func_754(306, joaat("SDN_TOURIST_FEMALE_1"), 5, 0);
	__LIB_18__::func_754(141, joaat("SDN_TRAINSTATIONWORKER"), 5, 0);
	__LIB_18__::func_754(285, joaat("SDN_WAGON_DELIVERY_1"), 5, 0);
	__LIB_18__::func_754(286, joaat("SDN_WAGON_DELIVERY_2"), 5, 0);
	__LIB_18__::func_754(322, joaat("SDN_FRENCH_COURTYARD_DOG"), 5, 0);
	__LIB_18__::func_754(316, joaat("SDN_FRENCH_RAKER"), 5, 0);
	__LIB_18__::func_754(317, joaat("SDN_FRENCH_SALOON_1"), 5, 0);
	__LIB_18__::func_754(318, joaat("SDN_FRENCH_SALOON_2"), 5, 0);
	__LIB_18__::func_754(319, joaat("SDN_FRENCH_SALOON_3"), 5, 0);
	__LIB_18__::func_754(320, joaat("SDN_FRENCH_PROSTITUTE_1"), 5, 0);
	__LIB_18__::func_754(321, joaat("SDN_FRENCH_TRUMPET_MALE_1"), 5, 0);
	__LIB_18__::func_754(323, joaat("SDN_FRENCH_LOWERCLASS_WOMAN"), 5, 0);
	__LIB_18__::func_754(324, joaat("SDN_FRENCH_SWEEPER"), 5, 0);
	__LIB_18__::func_754(287, joaat("SDN_SLUMS_SALOON_1"), 5, 0);
	__LIB_18__::func_754(288, joaat("SDN_SLUMS_SALOON_2"), 5, 0);
	__LIB_18__::func_754(289, joaat("SDN_SLUMS_SALOON_PIANO"), 5, 0);
	__LIB_18__::func_754(298, joaat("SDN_SLUMS_PROSTITUTE_1"), 5, 0);
	__LIB_18__::func_754(299, joaat("SDN_SOUP_KITCHEN_1"), 5, 0);
	__LIB_18__::func_754(300, joaat("SDN_SOUP_KITCHEN_2"), 5, 0);
	__LIB_18__::func_754(301, joaat("SDN_SOUP_KITCHEN_3"), 5, 0);
	__LIB_18__::func_754(302, joaat("SDN_SOUP_KITCHEN_4"), 5, 0);
	__LIB_18__::func_754(303, joaat("SDN_SOUP_KITCHEN_5"), 5, 0);
	__LIB_18__::func_754(304, joaat("SDN_SOUP_KITCHEN_6"), 5, 0);
	__LIB_18__::func_754(290, joaat("SDN_SLUMS_MALE_RES_1"), 5, 0);
	__LIB_18__::func_754(291, joaat("SDN_SLUMS_MALE_RES_2"), 5, 0);
	__LIB_18__::func_754(292, joaat("SDN_SLUMS_MALE_RES_3"), 5, 0);
	__LIB_18__::func_754(293, joaat("SDN_SLUMS_FEMALE_RES_1"), 5, 0);
	__LIB_18__::func_754(294, joaat("SDN_SLUMS_FEMALE_RES_2"), 5, 0);
	__LIB_18__::func_754(295, joaat("SDN_SLUMS_SHADY"), 5, 0);
	__LIB_18__::func_754(296, joaat("SDN_SLUMS_FISHERMAN"), 5, 0);
	__LIB_18__::func_754(297, joaat("SDN_SLUMS_ARTIST"), 5, 0);
	__LIB_18__::func_754(307, joaat("SDN_CEMETERY_KEEPER"), 5, 0);
	__LIB_18__::func_754(308, joaat("SDN_CHURCH_KEEPER"), 5, 0);
	__LIB_18__::func_754(309, joaat("SDN_SLUMS_PIG_1"), 5, 0);
	__LIB_18__::func_754(310, joaat("SDN_SLUMS_PIG_2"), 5, 0);
	__LIB_18__::func_754(311, joaat("SDN_SLUMS_DOG_1"), 5, 0);
	__LIB_18__::func_754(312, joaat("SDN_SLUMS_DOG_2"), 5, 0);
	__LIB_18__::func_754(313, joaat("SDN_SLUMS_DOG_3"), 5, 0);
	__LIB_18__::func_754(314, joaat("SDN_SLUMS_DOG_4"), 5, 0);
	__LIB_18__::func_754(315, joaat("SDN_SLUMS_DOG_5"), 5, 0);
	__LIB_18__::func_754(334, joaat("SIS_BRIDGE_GUARD"), 32, 0);
	__LIB_18__::func_754(335, joaat("SIS_BRIDGE_GUARD_2"), 32, 0);
	__LIB_18__::func_754(325, joaat("SIS_COURTYARD_GUARD"), 32, 0);
	__LIB_18__::func_754(326, joaat("SIS_COURTYARD_GUARD_2"), 32, 0);
	__LIB_18__::func_754(327, joaat("SIS_COURTYARD_GUARD_3"), 32, 0);
	__LIB_18__::func_754(328, joaat("SIS_COURTYARD_GUARD_4"), 32, 0);
	__LIB_18__::func_754(336, joaat("SIS_DOCKS_GUARD"), 32, 0);
	__LIB_18__::func_754(337, joaat("SIS_FIELD_GUARD"), 32, 0);
	__LIB_18__::func_754(338, joaat("SIS_FIELD_GUARD_2"), 32, 0);
	__LIB_18__::func_754(339, joaat("SIS_FIELD_GUARD_3"), 32, 0);
	__LIB_18__::func_754(340, joaat("SIS_FIELD_GUARD_4"), 32, 0);
	__LIB_18__::func_754(329, joaat("SIS_GATE_GUARD"), 32, 0);
	__LIB_18__::func_754(330, joaat("SIS_GATE_GUARD_2"), 32, 0);
	__LIB_18__::func_754(331, joaat("SIS_GATE_GUARD_3"), 32, 0);
	__LIB_18__::func_754(332, joaat("SIS_GATE_GUARD_4"), 32, 0);
	__LIB_18__::func_754(333, joaat("SIS_GATE_GUARD_5"), 32, 0);
	__LIB_18__::func_754(341, joaat("SIS_WALL_GUARD"), 32, 0);
	__LIB_18__::func_754(342, joaat("SIS_WALL_GUARD_2"), 32, 0);
	__LIB_18__::func_754(343, joaat("SIS_WALL_GUARD_3"), 32, 0);
	__LIB_18__::func_754(344, joaat("SIS_WALL_GUARD_4"), 32, 0);
	__LIB_18__::func_754(345, joaat("TBL_HOMEOWNER_MALE_RESIDENT"), 115, 0);
	__LIB_18__::func_754(351, joaat("TBL_BARTENDER"), 115, 0);
	__LIB_18__::func_754(352, joaat("TBL_BUTCHER"), 115, 0);
	__LIB_18__::func_754(346, joaat("TBL_HOMEOWNER_FEMALE_RESIDENT"), 115, 0);
	__LIB_18__::func_754(347, joaat("TBL_HORSE_SHOP_OWNER"), 115, 0);
	__LIB_18__::func_754(375, joaat("TBL_RANCHER"), 115, 0);
	__LIB_18__::func_754(372, joaat("TBL_RANCH_HORSES"), 115, 0);
	__LIB_18__::func_754(373, joaat("TBL_RANCH_WORKER_1"), 115, 0);
	__LIB_18__::func_754(374, joaat("TBL_RANCH_WORKER_2"), 115, 0);
	__LIB_18__::func_754(348, joaat("TBL_SHERRIF"), 115, 2097152);
	__LIB_18__::func_754(367, joaat("TBL_SALOON_PATRON_1"), 115, 0);
	__LIB_18__::func_754(368, joaat("TBL_SALOON_PATRON_2"), 115, 0);
	__LIB_18__::func_754(369, joaat("TBL_SALOON_PATRON_3"), 115, 0);
	__LIB_18__::func_754(370, joaat("TBL_SALOON_WORKER_1"), 115, 0);
	__LIB_18__::func_754(371, joaat("TBL_SALOON_WORKER_2"), 115, 0);
	__LIB_18__::func_754(349, joaat("TBL_SHERRIF_DEPUTY"), 115, 0);
	__LIB_18__::func_754(350, joaat("TBL_SHERRIF_DEPUTY_3"), 115, 0);
	__LIB_18__::func_754(353, joaat("TBL_GENERAL_STORE_OWNER"), 115, 0);
	__LIB_18__::func_754(366, joaat("TBL_SCAVENGER"), 115, 0);
	__LIB_18__::func_754(354, joaat("TBL_PIANO_PLAYER"), 115, 0);
	__LIB_18__::func_754(355, joaat("TBL_DOG_1"), 115, 0);
	__LIB_18__::func_754(356, joaat("TBL_DOG_2"), 115, 0);
	__LIB_18__::func_754(357, joaat("TBL_RESIDENTS_DOG"), 115, 0);
	__LIB_18__::func_754(358, joaat("TBL_RANCH_DOG"), 115, 0);
	__LIB_18__::func_754(359, joaat("TBL_PRISONER_1"), 115, 0);
	__LIB_18__::func_754(360, joaat("TBL_PRISONER_2"), 115, 0);
	__LIB_18__::func_754(361, joaat("TBL_PRISONER_3"), 115, 0);
	__LIB_18__::func_754(362, joaat("TBL_PRISONER_4"), 115, 0);
	__LIB_18__::func_754(363, joaat("TBL_PRISONER_5"), 115, 0);
	__LIB_18__::func_754(364, joaat("TBL_PRISONER_6"), 115, 0);
	__LIB_18__::func_754(365, joaat("TBL_GUNSMITH_OWNER"), 115, 0);
	__LIB_18__::func_754(376, joaat("TWR_RANCH_GUARD"), 125, 0);
	__LIB_18__::func_754(377, joaat("TWR_RANCH_GUARD_2"), 125, 0);
	__LIB_18__::func_754(378, joaat("TWR_RANCH_GUARD_3"), 125, 0);
	__LIB_18__::func_754(379, joaat("TWR_RANCH_GUARD_4"), 125, 0);
	__LIB_18__::func_754(507, joaat("BEN_TRAINSTATIONWORKER"), 117, 0);
	__LIB_18__::func_754(791, joaat("RID_HORSES_PERSCHAR_1"), 124, 0);
	__LIB_18__::func_754(792, joaat("RID_HORSES_PERSCHAR_2"), 124, 0);
	__LIB_18__::func_754(793, joaat("RID_HORSESHOP_DOG"), 124, 0);
	__LIB_18__::func_754(380, joaat("LEV_DOG"), 61, 0);
	__LIB_18__::func_754(381, joaat("LEV_GOAT"), 61, 0);
	__LIB_18__::func_754(589, joaat("EMR_FATHER"), 69, 0);
	__LIB_18__::func_754(591, joaat("EMR_GARDENER"), 69, 0);
	__LIB_18__::func_754(592, joaat("EMR_GARDENER2"), 69, 0);
	__LIB_18__::func_754(593, joaat("EMR_HANDYMAN"), 69, 0);
	__LIB_18__::func_754(598, joaat("EMR_SON1"), 69, 0);
	__LIB_18__::func_754(602, joaat("EMR_CAT"), 69, 0);
	__LIB_18__::func_754(603, joaat("EMR_CAT_2"), 69, 0);
	__LIB_18__::func_754(604, joaat("EMR_CHICKENS_PERSCHAR_1"), 69, 0);
	__LIB_18__::func_754(605, joaat("EMR_COWS_PERSCHAR_1"), 69, 0);
	__LIB_18__::func_754(609, joaat("EMR_GOATS_PERSCHAR_1"), 69, 0);
	__LIB_18__::func_754(610, joaat("EMR_HORSES_PERSCHAR_1"), 69, 0);
	__LIB_18__::func_754(611, joaat("EMR_OX_PERSCHAR_1"), 69, 0);
	__LIB_18__::func_754(612, joaat("EMR_ROOSTER_PERSCHAR_1"), 69, 0);
	__LIB_18__::func_754(599, joaat("EMR_SHEEP_PERSCHAR_1"), 69, 0);
	__LIB_18__::func_754(600, joaat("EMR_SHEEP_PERSCHAR_2"), 69, 0);
	__LIB_18__::func_754(601, joaat("EMR_SHEEP_PERSCHAR_3"), 69, 0);
	__LIB_18__::func_754(606, joaat("EMR_DOG"), 69, 0);
	__LIB_18__::func_754(607, joaat("EMR_DOG_02"), 69, 0);
	__LIB_18__::func_754(608, joaat("EMR_DOG_03"), 69, 0);
	__LIB_18__::func_754(594, joaat("EMR_FARMHAND1"), 69, 0);
	__LIB_18__::func_754(595, joaat("EMR_FARMHAND2"), 69, 0);
	__LIB_18__::func_754(596, joaat("EMR_FARMHAND3"), 69, 0);
	__LIB_18__::func_754(597, joaat("EMR_FARMHAND4"), 69, 0);
	__LIB_18__::func_754(590, joaat("EMR_TRAINSTATIONWORKER"), 69, 0);
	__LIB_18__::func_754(554, joaat("DOR_THOMASDOWN"), 68, 32);
	__LIB_18__::func_754(555, joaat("DOR_EDITHDOWN"), 68, 32);
	__LIB_18__::func_754(556, joaat("DOR_ARCHIEDOWN"), 68, 32);
	__LIB_18__::func_754(557, joaat("DOR_RANCHHAND"), 68, 0);
	__LIB_18__::func_754(565, joaat("DOR_HUSBAND"), 68, 0);
	__LIB_18__::func_754(560, joaat("DOWNS_RANCH_PIGS_PERSCHAR_1"), 68, 0);
	__LIB_18__::func_754(561, joaat("DOWNS_RANCH_GOATS_PERSCHAR_1"), 68, 0);
	__LIB_18__::func_754(562, joaat("DOWNS_RANCH_OX_PERSCHAR_1"), 68, 0);
	__LIB_18__::func_754(563, joaat("DOR_FRIENDLY_DOG"), 68, 0);
	__LIB_18__::func_754(564, joaat("DOR_GUARD_DOG"), 68, 0);
	__LIB_18__::func_754(558, joaat("DOWNS_RANCH_DEMO_COWS"), 68, 32);
	__LIB_18__::func_754(559, joaat("DOWNS_RANCH_DEMO_COWS_2"), 68, 32);
	__LIB_18__::func_754(691, joaat("OFW_OFFICER1"), 35, 0);
	__LIB_18__::func_754(692, joaat("OFW_OFFICER2"), 35, 0);
	__LIB_18__::func_754(693, joaat("OFW_OFFICER3"), 35, 0);
	__LIB_18__::func_754(696, joaat("OFW_ENLISTED1"), 35, 0);
	__LIB_18__::func_754(697, joaat("OFW_ENLISTED2"), 35, 0);
	__LIB_18__::func_754(698, joaat("OFW_ENLISTED3"), 35, 0);
	__LIB_18__::func_754(699, joaat("OFW_ENLISTED4"), 35, 0);
	__LIB_18__::func_754(700, joaat("OFW_ENLISTED5"), 35, 0);
	__LIB_18__::func_754(694, joaat("OFW_DOG"), 35, 0);
	__LIB_18__::func_754(695, joaat("OFW_DOG_2"), 35, 0);
	__LIB_18__::func_754(701, joaat("WAP_SHOPKEEPER"), 56, 1048576);
	__LIB_18__::func_754(704, joaat("WAP_HEADBRAVE"), 56, 0);
	__LIB_18__::func_754(703, joaat("WAP_OFFICIAL"), 56, 0);
	__LIB_18__::func_754(705, joaat("WAP_SIOUXCHEF"), 56, 0);
	__LIB_18__::func_754(702, joaat("WAP_MEDICINEMAN"), 56, 0);
	__LIB_18__::func_754(706, joaat("WAP_HORSE_1"), 56, 0);
	__LIB_18__::func_754(707, joaat("WAP_HORSE_2"), 56, 0);
	__LIB_18__::func_754(708, joaat("WAP_HORSE_3"), 56, 0);
	__LIB_18__::func_754(659, joaat("BUT_CONSTRUCTION_DRUNK_1"), 82, 0);
	__LIB_18__::func_754(660, joaat("BUT_CONSTRUCTION_DRUNK_2"), 82, 0);
	__LIB_18__::func_754(665, joaat("BUT_SHAMAN"), 82, 32);
	__LIB_18__::func_754(674, joaat("BUT_CHICKENS_PERSCHAR_1"), 82, 0);
	__LIB_18__::func_754(675, joaat("BUT_CHICKENS_PERSCHAR_2"), 82, 0);
	__LIB_18__::func_754(676, joaat("BUT_CHICKENS_PERSCHAR_3"), 82, 0);
	__LIB_18__::func_754(677, joaat("BUT_CHICKENS_PERSCHAR_4"), 82, 0);
	__LIB_18__::func_754(678, joaat("BUT_CHICKENS_PERSCHAR_5"), 82, 0);
	__LIB_18__::func_754(661, joaat("BUT_FISHERMAN"), 82, 0);
	__LIB_18__::func_754(662, joaat("BUT_FISHERMAN_FRIEND"), 82, 0);
	__LIB_18__::func_754(679, joaat("BUT_GOATS_PERSCHAR_1"), 82, 0);
	__LIB_18__::func_754(680, joaat("BUT_GOATS_PERSCHAR_2"), 82, 0);
	__LIB_18__::func_754(681, joaat("BUT_GOATS_PERSCHAR_3"), 82, 0);
	__LIB_18__::func_754(682, joaat("BUT_RESIDENT_DOG_1"), 82, 0);
	__LIB_18__::func_754(683, joaat("BUT_RESIDENT_DOG_2"), 82, 0);
	__LIB_18__::func_754(684, joaat("BUT_OX_PERSCHAR_1"), 82, 0);
	__LIB_18__::func_754(685, joaat("BUT_PIGS_PERSCHAR_1"), 82, 0);
	__LIB_18__::func_754(686, joaat("BUT_ROAMING_PIG"), 82, 0);
	__LIB_18__::func_754(663, joaat("BUT_RESIDENT_FATHER"), 82, 0);
	__LIB_18__::func_754(664, joaat("BUT_RESIDENT_MOTHER"), 82, 0);
	__LIB_18__::func_754(666, joaat("BUT_RESIDENT_SON"), 82, 0);
	__LIB_18__::func_754(687, joaat("BUT_ROOSTER_PERSCHAR_1"), 82, 0);
	__LIB_18__::func_754(688, joaat("BUT_ROOSTER_PERSCHAR_2"), 82, 0);
	__LIB_18__::func_754(667, joaat("BUT_SHACK_MAID_1"), 82, 0);
	__LIB_18__::func_754(668, joaat("BUT_SHACK_MAID_2"), 82, 0);
	__LIB_18__::func_754(689, joaat("BUT_SOLITARY_FARMER"), 82, 0);
	__LIB_18__::func_754(690, joaat("BUT_SOLITARY_DOG"), 82, 0);
	__LIB_18__::func_754(669, joaat("BUT_SUPPLY_SHACK_CIV_1"), 82, 0);
	__LIB_18__::func_754(670, joaat("BUT_SUPPLY_SHACK_CIV_2"), 82, 0);
	__LIB_18__::func_754(671, joaat("BUT_SUPPLY_SHACK_CIV_3"), 82, 0);
	__LIB_18__::func_754(672, joaat("BUT_RESIDENT_MALE_1"), 82, 0);
	__LIB_18__::func_754(673, joaat("BUT_RESIDENT_MALE_2"), 82, 0);
	__LIB_18__::func_754(474, joaat("STR_GENERAL_STORE"), 26, 1048576);
	__LIB_18__::func_754(472, joaat("STR_SHERIFF"), 26, 2097152);
	__LIB_18__::func_754(473, joaat("STR_SHERIFF_DEPUTY"), 26, 2097152);
	__LIB_18__::func_754(476, joaat("STR_FREIGHT_CLERK"), 26, 0);
	__LIB_18__::func_754(483, joaat("STR_MAYOR"), 26, 32);
	__LIB_18__::func_754(477, joaat("STR_NEWSPAPER_VENDOR"), 26, 0);
	__LIB_18__::func_754(487, joaat("STR_CONSTRUCTION_1"), 26, 0);
	__LIB_18__::func_754(488, joaat("STR_CONSTRUCTION_2"), 26, 0);
	__LIB_18__::func_754(489, joaat("STR_CONSTRUCTION_3"), 26, 0);
	__LIB_18__::func_754(492, joaat("STR_WELCOME_CENTER_CLERK"), 26, 0);
	__LIB_18__::func_754(490, joaat("STR_CONSTR_WIFE_1"), 26, 32);
	__LIB_18__::func_754(491, joaat("STR_CONSTR_WIFE_2"), 26, 32);
	__LIB_18__::func_754(501, joaat("STR_TOWN_CAT"), 26, 0);
	__LIB_18__::func_754(502, joaat("STR_TOWN_DOG"), 26, 0);
	__LIB_18__::func_754(497, joaat("STR_TOURIST_MALE_1"), 26, 0);
	__LIB_18__::func_754(498, joaat("STR_TOURIST_MALE_2"), 26, 0);
	__LIB_18__::func_754(485, joaat("STR_WOOD_CHOPPER_1"), 26, 0);
	__LIB_18__::func_754(486, joaat("STR_WOOD_CHOP_WIFE"), 26, 0);
	__LIB_18__::func_754(481, joaat("STR_BLACKSMITH"), 26, 0);
	__LIB_18__::func_754(480, joaat("STR_HORSESHOP_RANCHHAND"), 26, 0);
	__LIB_18__::func_754(484, joaat("STR_RANCHER"), 26, 0);
	__LIB_18__::func_754(475, joaat("STR_FISHERMAN"), 26, 0);
	__LIB_18__::func_754(482, joaat("STR_PERSCHAR_HORSES"), 26, 0);
	__LIB_18__::func_754(494, joaat("STR_TOWN_WORKER_1"), 26, 0);
	__LIB_18__::func_754(495, joaat("STR_TOWN_WORKER_2"), 26, 0);
	__LIB_18__::func_754(496, joaat("STR_TOWN_WORKER_3"), 26, 0);
	__LIB_18__::func_754(493, joaat("STR_LAZY_WORKER"), 26, 0);
	__LIB_18__::func_754(499, joaat("STR_PRISONER_01"), 26, 0);
	__LIB_18__::func_754(500, joaat("STR_PRISONER_02"), 26, 0);
	__LIB_18__::func_754(478, joaat("STR_BUTCHER"), 26, 0);
	__LIB_18__::func_754(479, joaat("STR_HORSE_SHOP_OWNER"), 26, 0);
	__LIB_18__::func_754(709, joaat("PHR_DAVID_GEDDES"), -1, 0);
	__LIB_18__::func_754(710, joaat("PHR_TOM_DICKENS"), -1, 0);
	__LIB_18__::func_754(711, joaat("PHR_MRS_GEDDES"), -1, 0);
	__LIB_18__::func_754(714, joaat("PHR_ABE"), -1, 0);
	__LIB_18__::func_754(712, joaat("PHR_ANGUS_GEDDES"), -1, 0);
	__LIB_18__::func_754(713, joaat("PHR_DUNCAN_GEDDES"), -1, 0);
	__LIB_18__::func_754(719, joaat("PHR_RANCH_HAND1"), 22, 0);
	__LIB_18__::func_754(720, joaat("PHR_RANCH_HAND2"), 22, 0);
	__LIB_18__::func_754(721, joaat("PHR_RANCH_HAND3"), 22, 0);
	__LIB_18__::func_754(722, joaat("PHR_RANCH_HAND4"), 22, 0);
	__LIB_18__::func_754(723, joaat("PHR_RANCH_HAND5"), 22, 0);
	__LIB_18__::func_754(715, joaat("PHR_DOG"), 22, 0);
	__LIB_18__::func_754(716, joaat("PHR_COWS_1"), 22, 0);
	__LIB_18__::func_754(717, joaat("PHR_HORSES_1"), 22, 0);
	__LIB_18__::func_754(718, joaat("PHR_OXEN_1"), 22, 0);
	__LIB_18__::func_754(724, joaat("MAP_DOG_1"), 110, 0);
	__LIB_18__::func_754(725, joaat("MAP_ARTIST"), 110, 0);
	__LIB_18__::func_754(726, joaat("MAP_ARTIST_WIFE"), 110, 0);
	__LIB_18__::func_754(727, joaat("MAP_BLACKSMITH"), 110, 0);
	__LIB_18__::func_754(728, joaat("MAP_BLACKSMITH_WIFE"), 110, 0);
	__LIB_18__::func_754(729, joaat("MAP_WORKER"), 110, 0);
	__LIB_18__::func_754(730, joaat("MAP_WORKER_WIFE"), 110, 0);
	__LIB_18__::func_754(566, joaat("CKT_WORKER"), 65, 0);
	__LIB_18__::func_754(567, joaat("CKT_WORKER_2"), 65, 0);
	__LIB_18__::func_754(568, joaat("HTL_FOREMAN"), 65, 0);
	__LIB_18__::func_754(569, joaat("CKT_FOREMAN_2"), 65, 0);
	__LIB_18__::func_754(572, joaat("CKT_GUARD_1"), 65, 0);
	__LIB_18__::func_754(573, joaat("CKT_GUARD_2"), 65, 0);
	__LIB_18__::func_754(574, joaat("CKT_GUARD_3"), 65, 0);
	__LIB_18__::func_754(575, joaat("CKT_GUARD_4"), 65, 0);
	__LIB_18__::func_754(576, joaat("CKT_GUARD_5"), 65, 0);
	__LIB_18__::func_754(577, joaat("CKT_GUARD_6"), 65, 0);
	__LIB_18__::func_754(578, joaat("CKT_GUARD_7"), 65, 0);
	__LIB_18__::func_754(579, joaat("CKT_GUARD_8"), 65, 0);
	__LIB_18__::func_754(580, joaat("CKT_GUARD_9"), 65, 0);
	__LIB_18__::func_754(581, joaat("CKT_GUARD_10"), 65, 0);
	__LIB_18__::func_754(582, joaat("CKT_GUARD_11"), 65, 0);
	__LIB_18__::func_754(583, joaat("CKT_GUARD_12"), 65, 0);
	__LIB_18__::func_754(584, joaat("CKT_GUARD_13"), 65, 0);
	__LIB_18__::func_754(585, joaat("CKT_GUARD_14"), 65, 0);
	__LIB_18__::func_754(586, joaat("CKT_GUARD_15"), 65, 0);
	__LIB_18__::func_754(587, joaat("CKT_GUARD_16"), 65, 0);
	__LIB_18__::func_754(588, joaat("CKT_GUARD_17"), 65, 0);
	__LIB_18__::func_754(570, joaat("CKT_DOG"), 65, 0);
	__LIB_18__::func_754(571, joaat("CKT_DOG_2"), 65, 0);
	__LIB_18__::func_754(443, joaat("VHT_BARTENDER"), 92, 0);
	__LIB_18__::func_754(444, joaat("VHT_EXOTIC_STORE"), 92, 1048576);
	__LIB_18__::func_754(471, joaat("VHT_MUSICIAN"), 92, 0);
	__LIB_18__::func_754(446, joaat("VHT_TOWN_RESIDENT_1"), 92, 0);
	__LIB_18__::func_754(447, joaat("VHT_TOWN_RESIDENT_2"), 92, 0);
	__LIB_18__::func_754(448, joaat("VHT_TOWN_RESIDENT_3"), 92, 0);
	__LIB_18__::func_754(449, joaat("VHT_RESIDENTS_GUARD_DOG"), 92, 0);
	__LIB_18__::func_754(450, joaat("VHT_SALOON_PATRON_1"), 92, 0);
	__LIB_18__::func_754(451, joaat("VHT_SALOON_PATRON_2"), 92, 0);
	__LIB_18__::func_754(452, joaat("VHT_SALOON_PATRON_3"), 92, 0);
	__LIB_18__::func_754(453, joaat("VHT_SALOON_PATRON_4"), 92, 0);
	__LIB_18__::func_754(445, joaat("VHT_HARMONICA_PLAYER"), 92, 0);
	__LIB_18__::func_754(454, joaat("VHT_SCAVENGER"), 92, 0);
	__LIB_18__::func_754(459, joaat("VHT_HORSE_SHOP_OWNER"), 92, 0);
	__LIB_18__::func_754(460, joaat("VHT_HORSE_SHOP_DOG"), 92, 0);
	__LIB_18__::func_754(455, joaat("VHT_SQUATTER_1"), 92, 0);
	__LIB_18__::func_754(456, joaat("VHT_SQUATTER_2"), 92, 0);
	__LIB_18__::func_754(457, joaat("VHT_SQUATTER_3"), 92, 0);
	__LIB_18__::func_754(458, joaat("VHT_SQUATTER_4"), 92, 0);
	__LIB_18__::func_754(461, joaat("VHT_SQUATTER_DOG"), 92, 0);
	__LIB_18__::func_754(462, joaat("VHT_TOWN_DOG_1"), 92, 0);
	__LIB_18__::func_754(463, joaat("VHT_GEN_GUARD_DOG"), 92, 0);
	__LIB_18__::func_754(465, joaat("VHT_TOWN_GRIEFER"), 92, 0);
	__LIB_18__::func_754(464, joaat("VHT_TOWN_DRUNK"), 92, 0);
	__LIB_18__::func_754(466, joaat("VHT_PROSTITUTE_1"), 92, 0);
	__LIB_18__::func_754(467, joaat("VHT_PROSTITUTE_2"), 92, 0);
	__LIB_18__::func_754(468, joaat("VHT_HORSE_1"), 92, 0);
	__LIB_18__::func_754(469, joaat("VHT_GOAT_1"), 92, 0);
	__LIB_18__::func_754(470, joaat("VHT_STATION_CLERK"), 92, 0);
	__LIB_18__::func_754(741, joaat("CFJ_FATHER"), 96, 0);
	__LIB_18__::func_754(743, joaat("CFJ_SON"), 96, 0);
	__LIB_18__::func_754(742, joaat("CFJ_SON_OLDER"), 96, 0);
	__LIB_18__::func_754(513, joaat("BLW_GENERAL_STORE"), 38, 1048576);
	__LIB_18__::func_754(516, joaat("BLW_HORSE_SHOP_OWNER"), 38, 1048576);
	__LIB_18__::func_754(517, joaat("BLW_HORSES"), 38, 0);
	__LIB_18__::func_754(521, joaat("BLW_TAILOR"), 38, 1048576);
	__LIB_18__::func_754(529, joaat("BLW_BARBER"), 38, 1048576);
	__LIB_18__::func_754(532, joaat("BLW_BUTCHER"), 38, 1048576);
	__LIB_18__::func_754(522, joaat("BLW_TRAIN_WORKER"), 38, 0);
	__LIB_18__::func_754(524, joaat("BLW_NEWSPAPER"), 38, 0);
	__LIB_18__::func_754(514, joaat("BLW_PHOTOGRAPHER"), 38, 0);
	__LIB_18__::func_754(515, joaat("BLW_PIANO_PLAYER"), 38, 0);
	__LIB_18__::func_754(509, joaat("BLW_POLICE_CHIEF"), 38, 0);
	__LIB_18__::func_754(510, joaat("BLW_POLICE_DEPUTY"), 38, 0);
	__LIB_18__::func_754(511, joaat("BLW_PRISONER_01"), 38, 0);
	__LIB_18__::func_754(512, joaat("BLW_PRISONER_02"), 38, 0);
	__LIB_18__::func_754(519, joaat("BLW_BANK_CLERK"), 38, 0);
	__LIB_18__::func_754(520, joaat("BLW_BANK_GUARD"), 38, 0);
	__LIB_18__::func_754(508, joaat("BLW_BARTENDER"), 38, 0);
	__LIB_18__::func_754(525, joaat("BLW_TICKET_VENDOR"), 38, 0);
	__LIB_18__::func_754(526, joaat("BLW_LIVERY_WORKER"), 38, 0);
	__LIB_18__::func_754(527, joaat("BLW_LIVERY_WORKER_02"), 38, 0);
	__LIB_18__::func_754(528, joaat("BLW_LIVERY_WORKER_02_WIFE"), 38, 0);
	__LIB_18__::func_754(530, joaat("BLW_BLACKSMITH"), 38, 0);
	__LIB_18__::func_754(531, joaat("BLW_BLACKSMITH_DOG"), 38, 0);
	__LIB_18__::func_754(533, joaat("BLW_CARRIAGE_HOUSE"), 38, 0);
	__LIB_18__::func_754(518, joaat("BLW_COWS"), 38, 0);
	__LIB_18__::func_754(534, joaat("BLW_CHEF"), 38, 0);
	__LIB_18__::func_754(535, joaat("BLW_CONSTRUCTION_01"), 38, 0);
	__LIB_18__::func_754(536, joaat("BLW_CONSTRUCTION_02"), 38, 0);
	__LIB_18__::func_754(537, joaat("BLW_CONSTRUCTION_03"), 38, 0);
	__LIB_18__::func_754(538, joaat("BLW_CONSTRUCTION_04"), 38, 0);
	__LIB_18__::func_754(539, joaat("BLW_CONSTRUCTION_ASSISTANT"), 38, 0);
	__LIB_18__::func_754(540, joaat("BLW_CONSTRUCTION_BOSS"), 38, 0);
	__LIB_18__::func_754(541, joaat("BLW_CONSTRUCTION_FOREMAN_1"), 38, 0);
	__LIB_18__::func_754(542, joaat("BLW_CONSTRUCTION_FOREMAN_2"), 38, 0);
	__LIB_18__::func_754(543, joaat("BLW_GROCERY_FARMER"), 38, 0);
	__LIB_18__::func_754(544, joaat("BLW_HANDYMAN_1"), 38, 0);
	__LIB_18__::func_754(545, joaat("BLW_HANDYMAN_2"), 38, 0);
	__LIB_18__::func_754(546, joaat("BLW_HOMEOWNER_1"), 38, 0);
	__LIB_18__::func_754(547, joaat("BLW_HOMEOWNER_2"), 38, 0);
	__LIB_18__::func_754(548, joaat("BLW_SLUM_01"), 38, 0);
	__LIB_18__::func_754(549, joaat("BLW_SLUM_WIFE_01"), 38, 0);
	__LIB_18__::func_754(550, joaat("BLW_TENT_CHEF"), 38, 0);
	__LIB_18__::func_754(551, joaat("BLW_TENT_CHEF_WIFE"), 38, 0);
	__LIB_18__::func_754(523, joaat("BLW_CHICKENS_01"), 38, 0);
	__LIB_18__::func_754(552, joaat("BLW_WAGON_DELIVERY_1"), 38, 0);
	__LIB_18__::func_754(553, joaat("BLW_WAGON_DELIVERY_2"), 38, 0);
	__LIB_18__::func_754(432, joaat("AMD_BARTENDER"), 120, 0);
	__LIB_18__::func_754(433, joaat("AMD_BAR_PATRON"), 120, 0);
	__LIB_18__::func_754(434, joaat("AMD_GENERAL_STORE"), 120, 0);
	__LIB_18__::func_754(435, joaat("AMD_UNDERTAKER"), 120, 0);
	__LIB_18__::func_754(436, joaat("AMD_UNDERTAKER_HELPER_1"), 120, 0);
	__LIB_18__::func_754(437, joaat("AMD_CORPSE_WAGON_DRIVER"), 120, 0);
	__LIB_18__::func_754(434, joaat("AMD_GENERAL_STORE"), 120, 0);
	__LIB_18__::func_754(438, joaat("AMD_CHICKENS_1"), 120, 0);
	__LIB_18__::func_754(439, joaat("AMD_DOG_1"), 120, 0);
	__LIB_18__::func_754(440, joaat("AMD_DOG_2"), 120, 0);
	__LIB_18__::func_754(441, joaat("AMD_HORSES_1"), 120, 0);
	__LIB_18__::func_754(442, joaat("AMD_PIGS_1"), 120, 0);
	__LIB_18__::func_754(385, joaat("ASB_GUNSMITH"), 78, 1048576);
	__LIB_18__::func_754(382, joaat("ASB_SHERIFF"), 78, 2097152);
	__LIB_18__::func_754(383, joaat("ASB_DEPUTY"), 78, 2097152);
	__LIB_18__::func_754(386, joaat("ASB_NEWSPAPER_VENDOR"), 78, 0);
	__LIB_18__::func_754(430, joaat("ASB_PRISONER_01"), 78, 0);
	__LIB_18__::func_754(431, joaat("ASB_PRISONER_02"), 78, 0);
	__LIB_18__::func_754(387, joaat("ASB_GUARD_01"), 78, 0);
	__LIB_18__::func_754(388, joaat("ASB_GUARD_02"), 78, 0);
	__LIB_18__::func_754(389, joaat("ASB_GUARD_03"), 78, 0);
	__LIB_18__::func_754(390, joaat("ASB_GUARD_04"), 78, 0);
	__LIB_18__::func_754(391, joaat("ASB_GUARD_05"), 78, 0);
	__LIB_18__::func_754(392, joaat("ASB_GUARD_06"), 78, 0);
	__LIB_18__::func_754(393, joaat("ASB_GUARD_07"), 78, 0);
	__LIB_18__::func_754(394, joaat("ASB_HORSES_01"), 78, 0);
	__LIB_18__::func_754(401, joaat("ASB_LUMBER_WORKER_01"), 78, 0);
	__LIB_18__::func_754(402, joaat("ASB_LUMBER_WORKER_02"), 78, 0);
	__LIB_18__::func_754(403, joaat("ASB_LUMBER_WORKER_03"), 78, 0);
	__LIB_18__::func_754(395, joaat("ASB_PLANT_WORKER_01"), 78, 0);
	__LIB_18__::func_754(396, joaat("ASB_PLANT_WORKER_02"), 78, 0);
	__LIB_18__::func_754(397, joaat("ASB_PLANT_WORKER_03"), 78, 0);
	__LIB_18__::func_754(398, joaat("ASB_PLANT_WORKER_04"), 78, 0);
	__LIB_18__::func_754(399, joaat("ASB_PLANT_WORKER_05"), 78, 0);
	__LIB_18__::func_754(400, joaat("ASB_PLANT_WORKER_06"), 78, 0);
	__LIB_18__::func_754(404, joaat("ASB_MINE_WORKER_01"), 78, 0);
	__LIB_18__::func_754(405, joaat("ASB_MINE_WORKER_02"), 78, 0);
	__LIB_18__::func_754(406, joaat("ASB_MINE_WORKER_03"), 78, 0);
	__LIB_18__::func_754(407, joaat("ASB_MINE_WORKER_04"), 78, 0);
	__LIB_18__::func_754(408, joaat("ASB_MINE_WORKER_05"), 78, 0);
	__LIB_18__::func_754(409, joaat("ASB_MINE_WORKER_06"), 78, 0);
	__LIB_18__::func_754(410, joaat("ASB_MINE_WORKER_07"), 78, 0);
	__LIB_18__::func_754(411, joaat("ASB_MINE_WORKER_08"), 78, 0);
	__LIB_18__::func_754(412, joaat("ASB_MINE_WORKER_09"), 78, 0);
	__LIB_18__::func_754(413, joaat("ASB_MINE_WORKER_10"), 78, 0);
	__LIB_18__::func_754(414, joaat("ASB_MINE_WORKER_11"), 78, 0);
	__LIB_18__::func_754(415, joaat("ASB_MINE_WORKER_12"), 78, 0);
	__LIB_18__::func_754(416, joaat("ASB_WORKER_WIFE_01"), 78, 0);
	__LIB_18__::func_754(417, joaat("ASB_WORKER_WIFE_02"), 78, 0);
	__LIB_18__::func_754(418, joaat("ASB_WORKER_WIFE_03"), 78, 0);
	__LIB_18__::func_754(419, joaat("ASB_WORKER_WIFE_04"), 78, 0);
	__LIB_18__::func_754(420, joaat("ASB_WORKER_WIFE_05"), 78, 0);
	__LIB_18__::func_754(421, joaat("ASB_WORKER_WIFE_06"), 78, 0);
	__LIB_18__::func_754(422, joaat("ASB_WORKER_WIFE_07"), 78, 0);
	__LIB_18__::func_754(423, joaat("ASB_WORKER_WIFE_08"), 78, 0);
	__LIB_18__::func_754(424, joaat("ASB_WORKER_WIFE_09"), 78, 0);
	__LIB_18__::func_754(425, joaat("ASB_WORKER_WIFE_10"), 78, 0);
	__LIB_18__::func_754(426, joaat("ASB_WORKER_WIFE_11"), 78, 0);
	__LIB_18__::func_754(427, joaat("ASB_WORKER_WIFE_12"), 78, 0);
	__LIB_18__::func_754(428, joaat("ASB_WORKER_WIFE_13"), 78, 0);
	__LIB_18__::func_754(429, joaat("ASB_WORKER_WIFE_14"), 78, 0);
	__LIB_18__::func_754(384, joaat("ASB_TRAINSTATIONWORKER"), 78, 0);
	__LIB_18__::func_754(768, joaat("MLH_COWS_PERSCHAR_1"), 86, 0);
	__LIB_18__::func_754(769, joaat("MLH_COWS_PERSCHAR_2"), 86, 0);
	__LIB_18__::func_754(770, joaat("MLH_COWS_PERSCHAR_3"), 86, 0);
	__LIB_18__::func_754(771, joaat("MLH_PIGS_PERSCHAR_1"), 86, 0);
	__LIB_18__::func_754(772, joaat("MLH_GUARD_DOG"), 86, 0);
	__LIB_18__::func_754(773, joaat("MFR_CAT"), 126, 0);
	__LIB_18__::func_754(774, joaat("MFR_CHICKENS_PERSCHAR_1"), 126, 0);
	__LIB_18__::func_754(775, joaat("MFR_CHICKENS_PERSCHAR_2"), 126, 0);
	__LIB_18__::func_754(776, joaat("MFR_DOG_PERSCHAR_1"), 126, 0);
	__LIB_18__::func_754(777, joaat("MFR_DOG_PERSCHAR_2"), 126, 0);
	__LIB_18__::func_754(778, joaat("MFR_ROOSTERS_PERSCHAR_1"), 126, 0);
	__LIB_18__::func_754(779, joaat("MFR_ROOSTERS_PERSCHAR_2"), 126, 0);
	__LIB_18__::func_754(780, joaat("PAI_RANCHHAND_02"), 21, 0);
	__LIB_18__::func_754(782, joaat("PAI_COWS"), 21, 0);
	__LIB_18__::func_754(781, joaat("PAI_DOG"), 21, 0);
	__LIB_18__::func_754(764, joaat("LNS_TENANT_1"), 102, 0);
	__LIB_18__::func_754(765, joaat("LNS_TENANT_2"), 102, 0);
	__LIB_18__::func_754(766, joaat("LNS_TENANT_3"), 102, 0);
	__LIB_18__::func_754(767, joaat("LNS_TENANT_4"), 102, 0);
	__LIB_18__::func_754(745, joaat("CRO_RANCHER"), 66, 0);
	__LIB_18__::func_754(746, joaat("CRO_RANCH_HAND"), 66, 0);
	__LIB_18__::func_754(747, joaat("CRO_FRIENDLY_DOG"), 66, 0);
	__LIB_18__::func_754(748, joaat("CRO_GUARD_DOG"), 66, 0);
	__LIB_18__::func_754(749, joaat("CRO_MULE"), 66, 0);
	__LIB_18__::func_754(750, joaat("CRO_OX_1"), 66, 0);
	__LIB_18__::func_754(751, joaat("GRH_RANCH_HAND"), 70, 0);
	__LIB_18__::func_754(754, joaat("GRH_CHICKENS"), 70, 0);
	__LIB_18__::func_754(752, joaat("GRH_ROOSTER"), 70, 0);
	__LIB_18__::func_754(753, joaat("GRH_PIGS"), 70, 0);
	__LIB_18__::func_754(755, joaat("DAI_BULL"), 100, 0);
	__LIB_18__::func_754(760, joaat("DAI_RANCHER"), 100, 0);
	__LIB_18__::func_754(761, joaat("DAI_RANCH_HAND"), 100, 0);
	__LIB_18__::func_754(762, joaat("DAI_GUARD_DOG"), 100, 0);
	__LIB_18__::func_754(756, joaat("DAI_COWS_PERSCHAR_1"), 100, 0);
	__LIB_18__::func_754(757, joaat("DAI_COWS_PERSCHAR_2"), 100, 0);
	__LIB_18__::func_754(758, joaat("DAI_COWS_PERSCHAR_3"), 100, 0);
	__LIB_18__::func_754(759, joaat("DAI_DONKEY"), 100, 0);
	__LIB_18__::func_754(763, joaat("DAI_SICK_COW"), 100, 0);
	__LIB_18__::func_754(794, joaat("CHE_FATHER"), 42, 0);
	__LIB_18__::func_754(795, joaat("CHE_DAUGHTER"), 42, 0);
	__LIB_18__::func_754(796, joaat("CHE_SON_01"), 42, 0);
	__LIB_18__::func_754(797, joaat("CHE_SON_02"), 42, 0);
	__LIB_18__::func_754(798, joaat("CHE_SON_03"), 42, 0);
	__LIB_18__::func_754(733, joaat("LAR_TENANT_01"), 72, 0);
	__LIB_18__::func_754(735, joaat("LAR_DOG"), 72, 0);
	__LIB_18__::func_754(734, joaat("LARNED_SOD_GOAT_PERSCHAR_1"), 72, 0);
	__LIB_18__::func_754(736, joaat("CRD_CHICKENS_1"), 64, 0);
	__LIB_18__::func_754(737, joaat("CRD_DOG"), 64, 0);
	__LIB_18__::func_754(740, joaat("CRD_TENANT_02"), 64, 32);
	__LIB_18__::func_754(783, joaat("RKF_RANCHER"), 116, 0);
	__LIB_18__::func_754(784, joaat("RKF_RANCH_HAND"), 116, 0);
	__LIB_18__::func_754(790, joaat("RKF_GOATS_PERSCHAR"), 116, 0);
	__LIB_18__::func_754(789, joaat("RKF_CHICKENS_PERSCHAR"), 116, 0);
	__LIB_18__::func_754(785, joaat("RKF_DOG_1"), 116, 0);
	__LIB_18__::func_754(786, joaat("RKF_DOG_2"), 116, 0);
	__LIB_18__::func_754(787, joaat("RKF_DOG_3"), 116, 0);
	__LIB_18__::func_754(788, joaat("RKF_DOG_4"), 116, 0);
	__LIB_18__::func_754(799, joaat("RKS_TENANT"), 89, 0);
	__LIB_18__::func_754(800, joaat("RKS_DOG"), 89, 0);
	__LIB_18__::func_754(801, joaat("RGS_POSTMASTER"), 23, 0);
	__LIB_18__::func_754(802, joaat("WAL_TRAIN_CLERK"), 28, 0);
	__LIB_18__::func_754(803, joaat("WAL_GENSHOPKEEPER"), 28, 0);
	__LIB_18__::func_754(503, joaat("HEARTLANDS_SWANSON_STATION_PIGS_1"), 75, 0);
	__LIB_18__::func_754(505, joaat("SWA_CARETAKER"), 75, 0);
	__LIB_18__::func_754(506, joaat("SWA_CARETAKER_2"), 75, 0);
	__LIB_18__::func_754(504, joaat("SWA_DOG"), 75, 0);
	__LIB_18__::func_754(804, joaat("SCM_HORSE_SHOP_OWNER"), 101, 0);
	__LIB_18__::func_754(805, joaat("SCM_PERSCHAR_HORSES"), 101, 0);
	__LIB_18__::func_754(806, joaat("SCM_HORSE_SHOP_RANCHHAND"), 101, 0);
	__LIB_18__::func_754(807, joaat("EA_LCMP_FOREMAN"), 11, 0);
	__LIB_18__::func_754(810, joaat("EA_LCMP_CHOPPER_1"), 11, 0);
	__LIB_18__::func_754(811, joaat("EA_LCMP_CHOPPER_2"), 11, 0);
	__LIB_18__::func_754(812, joaat("EA_LCMP_CHOPPER_3"), 11, 0);
	__LIB_18__::func_754(813, joaat("EA_LCMP_CHOPPER_4"), 11, 0);
	__LIB_18__::func_754(814, joaat("EA_LCMP_WORKER_01"), 11, 0);
	__LIB_18__::func_754(815, joaat("EA_LCMP_WORKER_02"), 11, 0);
	__LIB_18__::func_754(816, joaat("EA_LCMP_WORKER_03"), 11, 0);
	__LIB_18__::func_754(817, joaat("EA_LCMP_WORKER_04"), 11, 0);
	__LIB_18__::func_754(818, joaat("EA_LCMP_WORKER_05"), 11, 0);
	__LIB_18__::func_754(819, joaat("EA_LCMP_WORKER_06"), 11, 0);
	__LIB_18__::func_754(820, joaat("EA_LCMP_WORKER_07"), 11, 0);
	__LIB_18__::func_754(821, joaat("EA_LCMP_WORKER_08"), 11, 0);
	__LIB_18__::func_754(822, joaat("EA_LCMP_WORKER_09"), 11, 0);
	__LIB_18__::func_754(823, joaat("EA_LCMP_WORKER_10"), 11, 0);
	__LIB_18__::func_754(824, joaat("EA_LCMP_WORKER_11"), 11, 0);
	__LIB_18__::func_754(825, joaat("EA_LCMP_WORKER_12"), 11, 0);
	__LIB_18__::func_754(826, joaat("EA_LCMP_WORKER_13"), 11, 0);
	__LIB_18__::func_754(827, joaat("EA_LCMP_WORKER_14"), 11, 0);
	__LIB_18__::func_754(828, joaat("EA_LCMP_WORKER_15"), 11, 0);
	__LIB_18__::func_754(829, joaat("EA_LCMP_WORKER_16"), 11, 0);
	__LIB_18__::func_754(830, joaat("EA_LCMP_WORKER_17"), 11, 0);
	__LIB_18__::func_754(831, joaat("EA_LCMP_WORKER_18"), 11, 0);
	__LIB_18__::func_754(832, joaat("EA_LCMP_WORKER_19"), 11, 0);
	__LIB_18__::func_754(833, joaat("EA_LCMP_WORKER_20"), 11, 0);
	__LIB_18__::func_754(808, joaat("EA_LCMP_DOG"), 11, 0);
	__LIB_18__::func_754(809, joaat("EA_LCMP_DOG_2"), 11, 0);
	__LIB_18__::func_754(64, joaat("EA_HMSTD_FOREMAN"), 76, 4194304);
	__LIB_18__::func_754(65, joaat("EA_HMSTD_WORKER_1"), 76, 4194304);
	__LIB_18__::func_754(66, joaat("EA_HMSTD_WORKER_2"), 76, 4194304);
	__LIB_18__::func_754(67, joaat("EA_HMSTD_MAN"), 76, 4194304);
	__LIB_18__::func_754(68, joaat("EA_HMSTD_WOMAN"), 76, 4194304);
	__LIB_18__::func_754(858, joaat("CARMODY_DELL_COWS_PERSCHAR_1"), -1, 256);
	__LIB_18__::func_754(859, joaat("CRD_BULL"), -1, 256);
	__LIB_18__::func_754(860, joaat("CRD_DONKEY"), -1, 256);
	__LIB_18__::func_754(834, joaat("EA_RCAMP_FOREMAN"), 128, 0);
	__LIB_18__::func_754(835, joaat("EA_RCAMP_GUARD_01"), 128, 0);
	__LIB_18__::func_754(836, joaat("EA_RCAMP_GUARD_02"), 128, 0);
	__LIB_18__::func_754(837, joaat("EA_RCAMP_GUARD_03"), 128, 0);
	__LIB_18__::func_754(838, joaat("EA_RCAMP_WORKER_01"), 128, 0);
	__LIB_18__::func_754(839, joaat("EA_RCAMP_WORKER_02"), 128, 0);
	__LIB_18__::func_754(840, joaat("EA_RCAMP_WORKER_03"), 128, 0);
	__LIB_18__::func_754(841, joaat("EA_RCAMP_WORKER_04"), 128, 0);
	__LIB_18__::func_754(842, joaat("EA_RCAMP_WORKER_05"), 128, 0);
	__LIB_18__::func_754(843, joaat("EA_RCAMP_WORKER_06"), 128, 0);
	__LIB_18__::func_754(844, joaat("EA_RCAMP_WORKER_07"), 128, 0);
	__LIB_18__::func_754(845, joaat("EA_RCAMP_WORKER_08"), 128, 0);
	__LIB_18__::func_754(846, joaat("EA_RCAMP_WORKER_09"), 128, 0);
	__LIB_18__::func_754(847, joaat("EA_RCAMP_WORKER_10"), 128, 0);
	__LIB_18__::func_754(848, joaat("EA_RCAMP_WORKER_11"), 128, 0);
	__LIB_18__::func_754(849, joaat("EA_RCAMP_WORKER_12"), 128, 0);
	__LIB_18__::func_754(850, joaat("EA_RCAMP_WORKER_13"), 128, 0);
	__LIB_18__::func_754(851, joaat("EA_RCAMP_WORKER_14"), 128, 0);
	__LIB_18__::func_754(852, joaat("EA_RCAMP_WORKER_15"), 128, 0);
	__LIB_18__::func_754(853, joaat("EA_RCAMP_WORKER_16"), 128, 0);
	__LIB_18__::func_754(854, joaat("EA_RCAMP_WORKER_17"), 128, 0);
	__LIB_18__::func_754(855, joaat("EA_RCAMP_WORKER_18"), 128, 0);
	__LIB_18__::func_754(856, joaat("EA_RCAMP_WORKER_19"), 128, 0);
	__LIB_18__::func_754(857, joaat("EA_RCAMP_WORKER_20"), 128, 0);
	__LIB_18__::func_754(875, joaat("GAP_COUGAR_1"), -1, 256);
	__LIB_18__::func_754(876, joaat("GAP_GOAT_1"), -1, 256);
	__LIB_18__::func_754(878, joaat("GREAT_PLAINS_BUFFALO_HERD_PERSCHAR_1"), -1, 256);
	__LIB_18__::func_754(877, joaat("GRT_BLW_OUTSKIRTS_1"), -1, 256);
	__LIB_18__::func_754(865, joaat("GRIZZLIES_RAVEN"), -1, 256);
	__LIB_18__::func_754(861, joaat("GRIZZLIES_BEAR_01"), -1, 256);
	__LIB_18__::func_754(862, joaat("CARMODY_DELL_COWS_PERSCHAR_1"), -1, 256);
	__LIB_18__::func_754(863, joaat("CRD_BULL"), -1, 256);
	__LIB_18__::func_754(864, joaat("CRD_DONKEY"), -1, 256);
	__LIB_18__::func_754(868, joaat("HEARTLANDS_BUFFALO_HERD_PERSCHAR_1"), -1, 256);
	__LIB_18__::func_754(873, joaat("HRT_CRO_RANCH_HAND_2"), -1, 256);
	__LIB_18__::func_754(874, joaat("HRT_CRO_RANCH_HAND_3"), -1, 256);
	__LIB_18__::func_754(866, joaat("HEARTLANDS_DEER_HERD_PERSCHAR_1"), -1, 256);
	__LIB_18__::func_754(867, joaat("HEARTLANDS_PRONGHORN_HERD_PERSCHAR_1"), -1, 256);
	__LIB_18__::func_754(869, joaat("HRT_CRD_TENANT_01"), -1, 256);
	__LIB_18__::func_754(870, joaat("CARMODY_DELL_COWS_PERSCHAR_1"), -1, 256);
	__LIB_18__::func_754(871, joaat("CRD_BULL"), -1, 256);
	__LIB_18__::func_754(872, joaat("CRD_DONKEY"), -1, 256);
	__LIB_18__::func_754(879, joaat("BGV_COUGAR_1"), -1, 256);
	__LIB_18__::func_754(883, joaat("BGV_DELIVERY_1"), -1, 256);
	__LIB_18__::func_754(884, joaat("BGV_DELIVERY_2"), -1, 256);
	__LIB_18__::func_754(881, joaat("BIG_VALLEY_DEER_HERD_PERSCHAR_1"), -1, 256);
	__LIB_18__::func_754(882, joaat("BIG_VALLEY_BEAR_PERSCHAR_1"), -1, 256);
	__LIB_18__::func_754(880, joaat("BGV_WOLVES_1"), -1, 256);
	__LIB_18__::func_754(885, joaat("BGV_PAI_RANCHHAND_01"), -1, 288);
	__LIB_18__::func_754(888, joaat("CHO_COUGAR_1"), -1, 256);
	__LIB_18__::func_754(889, joaat("CHO_RID_HORSESHOP_OWNER"), -1, 256);
	__LIB_18__::func_754(890, joaat("CHO_RID_HORSESHOP_WIFE"), -1, 256);
	__LIB_18__::func_754(891, joaat("CHO_RID_HORSESHOP_RANCHHAND_1"), -1, 256);
	__LIB_18__::func_754(892, joaat("CHO_RID_HORSESHOP_RANCHHAND_2"), -1, 256);
	__LIB_18__::func_754(886, joaat("TBL_DELIVERY_RESIDENT"), -1, 256);
	__LIB_18__::func_754(887, joaat("TBL_DELIVERY_RESIDENT_2"), -1, 256);
	__LIB_18__::func_754(901, joaat("RIO_COUGAR_1"), -1, 256);
	__LIB_18__::func_754(904, joaat("ROA_COAL_DELIVERY1"), -1, 256);
	__LIB_18__::func_754(905, joaat("ROA_MLH_RANCHHAND"), -1, 256);
	__LIB_18__::func_754(906, joaat("ROA_MLH_RANCHHAND_2"), -1, 256);
	__LIB_18__::func_754(893, joaat("MFR_HORSES_PERSCHAR_1"), -1, 256);
	__LIB_18__::func_754(894, joaat("MFR_COWS_PERSCHAR_2"), -1, 256);
	__LIB_18__::func_754(900, joaat("HEN_MFR_RANCHER"), -1, 256);
	__LIB_18__::func_754(895, joaat("HEN_MFR_RANCH_HAND"), -1, 256);
	__LIB_18__::func_754(896, joaat("HEN_MFR_RANCH_HAND_2"), -1, 256);
	__LIB_18__::func_754(897, joaat("HEN_MFR_RANCH_HAND_3"), -1, 256);
	__LIB_18__::func_754(898, joaat("HEN_MFR_RANCH_HAND_4"), -1, 256);
	__LIB_18__::func_754(899, joaat("HEN_MFR_BLACKSMITH"), -1, 256);
	__LIB_18__::func_754(908, joaat("SCM_WHITE_SLUMS_1"), -1, 256);
	__LIB_18__::func_754(909, joaat("SCM_BRA_FIELD_GUARD"), -1, 256);
	__LIB_18__::func_754(910, joaat("SCM_BRA_FIELD_GUARD_2"), -1, 256);
	__LIB_18__::func_754(911, joaat("SCM_BRA_FIELD_GUARD_3"), -1, 256);
	__LIB_18__::func_754(912, joaat("SCM_BRA_FIELD_GUARD_4"), -1, 256);
	__LIB_18__::func_754(913, joaat("SCM_BRA_FIELD_GUARD_5"), -1, 256);
	__LIB_18__::func_754(914, joaat("SCM_BRA_FIELD_GUARD_6"), -1, 256);
	__LIB_18__::func_754(915, joaat("SCM_BRA_HORSE_GUARD"), -1, 256);
	__LIB_18__::func_754(916, joaat("SCM_BRA_HORSE_GUARD_2"), -1, 256);
	__LIB_18__::func_754(917, joaat("SCM_BRA_HORSE_GUARD_3"), -1, 256);
	__LIB_18__::func_754(918, joaat("SCM_CALIGA_GUARD_1"), -1, 256);
	__LIB_18__::func_754(919, joaat("SCM_CALIGA_GUARD_2"), -1, 256);
	__LIB_18__::func_754(920, joaat("SCM_HORSE_SHOP_OWNER"), -1, 1048576);
	__LIB_18__::func_754(921, joaat("SCM_LOVE_TRIANGLE_OX"), -1, 256);
	__LIB_18__::func_754(922, joaat("SCM_DAI_RANCHHAND_1"), -1, 256);
	__LIB_18__::func_754(923, joaat("SCM_DAI_RANCHHAND_2"), -1, 256);
	__LIB_18__::func_754(907, joaat("SCM_PANTHER_1"), -1, 256);
	__LIB_18__::func_754(924, joaat("TAL_BEAR_1"), -1, 256);
	__LIB_18__::func_754(925, joaat("TAL_COUGAR_1"), -1, 256);
	__LIB_18__::func_754(926, joaat("TAL_WOLVES_1"), -1, 256);
	__LIB_18__::func_754(927, joaat("BAYOU_PANTHER_PERSCHAR_1"), -1, 256);
	__LIB_18__::func_754(928, joaat("LAG_FATHER2"), -1, 256);
	__LIB_18__::func_754(929, joaat("LAG_M_TEEN1"), -1, 256);
	__LIB_18__::func_754(930, joaat("LAG_M_TEEN2"), -1, 256);
	__LIB_18__::func_754(931, joaat("LAG_GRANDFATHER1"), -1, 256);
	__LIB_18__::func_754(932, joaat("GLO_BLW_WAGON_DELIVERY_3"), -1, 512);
	__LIB_18__::func_754(933, joaat("GLO_RHD_SDN_DRIVER_1"), -1, 512);
	__LIB_18__::func_754(934, joaat("GLO_RHD_SDN_DRIVER_2"), -1, 512);
	__LIB_18__::func_754(935, joaat("GLO_COAL_DELIVERY3"), -1, 512);
	__LIB_18__::func_754(936, joaat("GLO_DAIRY_DELIVERY1"), -1, 512);
	__LIB_18__::func_754(937, joaat("GLO_DAIRY_DELIVERY3"), -1, 512);
	__LIB_18__::func_754(938, joaat("GLO_LUMBER_DELIVERY1"), -1, 544);
	__LIB_18__::func_754(939, joaat("GLO_LUMBER_DELIVERY2"), -1, 544);
	__LIB_18__::func_754(940, joaat("GLO_LUMBER_DELIVERY3"), -1, 544);
	__LIB_18__::func_754(941, joaat("GLO_OIL_DELIVERY1"), -1, 512);
	__LIB_18__::func_754(942, joaat("GLO_OIL_DELIVERY_VAL"), -1, 544);
	__LIB_18__::func_754(943, joaat("GLO_OIL_DELIVERY2"), -1, 512);
	__LIB_18__::func_754(944, joaat("GLO_OIL_DELIVERY3"), -1, 512);
	__LIB_18__::func_754(945, joaat("GLO_ORANGE_DELIVERY1"), -1, 512);
	__LIB_18__::func_754(946, joaat("GLO_ORANGE_DELIVERY2"), -1, 512);
	__LIB_18__::func_754(947, joaat("GLO_ORANGE_DELIVERY3"), -1, 512);
	__LIB_18__::func_754(948, joaat("GLO_TIMBER_DELIVERY1"), -1, 544);
	__LIB_18__::func_754(949, joaat("GLO_TIMBER_DELIVERY2"), -1, 544);
	__LIB_18__::func_754(950, joaat("GLO_TIMBER_DELIVERY3_PART1"), -1, 544);
	__LIB_18__::func_754(951, joaat("GLO_TIMBER_DELIVERY3_PART2"), -1, 544);
	__LIB_18__::func_754(952, joaat("GLO_WILDERNESS_TRAPPER"), -1, 512);
	return 1;
}

int func_5()
{
	int iVar0;
	Global_1879534.f_7300 = 32;
	func_35();
	func_36();
	func_37();
	func_38();
	func_39();
	func_40();
	func_41();
	func_42();
	func_43();
	func_44();
	func_45();
	func_46();
	func_47();
	func_48();
	func_49();
	func_50();
	func_51();
	func_52();
	func_53();
	func_54();
	func_55();
	func_56();
	func_57();
	func_58();
	func_59();
	func_60();
	func_61();
	func_62();
	func_63();
	func_64();
	func_65();
	func_66();
	func_67();
	iVar0 = Global_1879534.f_7300;
	iVar0 = Global_1879534.f_7300;
	while (iVar0 <= (32 - 1))
	{
		func_68(iVar0);
		iVar0++;
	}
	__LIB_10__::func_614(1024);
	return 1;
}

int func_6()
{
	func_69();
	func_70();
	__LIB_10__::func_614(2048);
	return 1;
}

int func_8()
{
	func_82();
	return 1;
}

int func_9()
{
	func_83(0, 1, 79, 2351.282f, 1362.077f, 104.9752f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(1, 1, 43, -1356.339f, 2443.121f, 308.1876f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(2, 1, 98, 667.9077f, -1252.78f, 42.9221f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(3, 1, 58, 1422.625f, -7332.473f, 80.5977f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(4, 1, 71, -125.85f, -39.9599f, 96.0908f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(5, 1, 4, 2254.96f, -758.12f, 41.75f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(6, 1, 9, 1880.807f, -1873.231f, 41.8094f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(7, 1, 22, -2593.21f, 453.9533f, 145.9973f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(8, 1, 76, -324.5534f, 760.3503f, 120.6335f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(16, 1, 115, -5514.272f, -2971.501f, 1.2343f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(15, 1, 37, __LIB_1__::func_438(), 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(9, 1, 5, 2638.124f, -1222.767f, 59.7655f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(10, 1, 38, -822.6304f, -1324.959f, 48.6102f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(11, 1, 105, 1331.149f, -1376.779f, 80.5954f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(12, 1, 92, 2977.443f, 574.009f, 48.1406f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(13, 1, 78, 2945.353f, 1330.25f, 43.4528f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(14, 1, 26, -1812.626f, -368.6117f, 166.5446f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	return 1;
}

int func_10()
{
	if (!Global_40)
	{
		__LIB_10__::func_795(1, 16);
		func_86(0);
		__LIB_18__::func_262();
	}
	__LIB_18__::func_265();
	return 1;
}

int func_11()
{
	return __LIB_12__::func_76(0);
}

int func_12()
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
			func_95(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
			func_104(joaat("CLOTHING_MULTI_ITEM_CLEAN"), 3, 3, 3, 0);
			func_105(0, 5, 0);
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

int func_13()
{
	func_107();
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		func_108(0, "beat_animal_attack", 4, 90f, 3, 536872961, -1, 17, 10, 1, -1, 1, -1, -1, -1, 10800);
		func_108(1, "beat_animal_mauling", 4, 140f, 2, 4196353, -1, 17, 8, -1, -1, 0, -1, -1, -1, 10800);
		func_108(2, "beat_approach", 4, 140f, 3, -2147467135, -1, 17, 10, 15, -1, 1, -1, -1, -1, 10800);
		func_108(3, "beat_arms_deal", 4, 140f, 3, 16781313, -1, 16, 10, 4, -1, 2097153, -1, -1, -1, 10800);
		func_108(4, "beat_bear_trap", 4, 140f, 2, 4202497, -1, 18, 10, 4, -1, 0, -1, -1, -1, 10800);
		func_108(5, "beat_boat_attack", 4, 140f, 3, 16781569, -1, 17, 10, 4, -1, 2097152, -1, -1, -1, 10800);
		func_108(6, "beat_booby_trap", 4, 140f, 3, -2130435839, -1, 15, 10, 4, -1, 4096, -1, -1, -1, 10800);
		func_108(7, "beat_bounty_transport", 4, 140f, 3, 8390689, -1, 17, 10, 4, -1, 1, -1, -1, -1, 5400);
		func_108(8, "beat_burning_bodies", 1, 140f, 3, 1073815809, -1, 10, 9, 4, -1, 2056, 9, -1, -1, 10800);
		func_108(9, "beat_campfire_ambush", 4, 140f, 3, 50335745, -1, 17, 8, -1, -1, 2097152, -1, -1, -1, 10800);
		func_108(10, "beat_chain_gang", 4, 140f, 3, -2139090687, 8192, 17, 8, 4, -1, 2166785, -1, -1, -1, 10800);
		func_108(11, "beat_checkpoint", 4, 140f, 3, 16781345, -1, 12, 10, 4, -1, 2097153, -1, -1, -1, 10800);
		func_108(12, "beat_coach_robbery", 4, 140f, 3, -2130702335, -1, 12, 10, 4, -1, 2097153, -1, -1, -1, 5400);
		func_108(13, "beat_corpse_cart", 4, 140f, 1, 18878497, 128, 17, 10, 4, -1, 2228224, -1, -1, -1, 10800);
		func_108(14, "beat_crashed_wagon", 4, 140f, 3, -2145384447, -1, 17, 10, 4, -1, 2097152, -1, -1, -1, 10800);
		func_108(15, "beat_del_lobo_posse", 4, 140f, 3, 16846881, -1, 10, 9, 4, -1, 0, -1, -1, -1, 5400);
		func_108(16, "beat_drunk_camp", 4, 140f, 3, 33570817, 128, 17, 11, 4, -1, 2097153, -1, -1, -1, 10800);
		func_108(17, "beat_escort", 4, 140f, 3, -2143281151, -1, 17, 10, 4, -1, 1, -1, -1, -1, 5400);
		func_108(18, "beat_executions", 4, 140f, 1, 16781313, -1, 17, 10, 4, -1, 131072, -1, -1, -1, 10800);
		func_108(19, "beat_fleeing_trespasser", 1, 100f, 3, -2147449599, -1, 10, 9, 4, -1, 2056, -1, 26, -1, 10800);
		func_108(20, "beat_friendly_outdoorsman", 4, 140f, 5, 1073745937, 8192, 12, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(21, "beat_frozen_to_death", 4, 100f, 2, 16657, -1, 17, 8, -1, -1, 2048, -1, -1, -1, 10800);
		func_108(22, "beat_fussar_chase", 4, 140f, 3, 2305, -1, 10, 9, 4, -1, 0, -1, -1, -1, 10800);
		func_108(23, "beat_gang_camp_reminder", 2, 140f, 3, 129, -1, 10, 7, 5, -1, 67585, -1, 77, -1, 10800);
		func_108(24, "beat_gold_panner", 4, 140f, 5, 4101, -1, 17, 10, 4, -1, 2101248, 9, -1, -1, 10800);
		func_108(119, "beat_herbalist_camp", 2, 140f, 4, 301993985, -1, 12, 10, 4, -1, 32771, -1, -1, -1, 10800);
		func_108(27, "beat_horse_race", 4, 140f, 3, 1073745953, 8192, 11, 10, 4, -1, 1, -1, -1, -1, 5400);
		func_108(28, "beat_hostage_rescue", 4, 140f, 2, 4202497, -1, 14, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(60, "beat_hunter", 4, 140f, 3, 8193, -1, 12, 10, 4, -1, 4096, 9, -1, -1, 10800);
		func_108(29, "beat_inbred_kidnap", 4, 140f, 1, 16781345, 128, 15, 13, 4, -1, 2228224, -1, -1, -1, 10800);
		func_108(30, "beat_injured_rider", 4, 140f, 3, -2147475455, -1, 16, 10, 4, -1, 1, -1, -1, -1, 5400);
		func_108(31, "beat_kidnap_victim", 4, 140f, 3, 4198433, -1, 17, 10, 4, -1, 0, -1, -1, -1, 5400);
		func_108(32, "beat_rally_dispute", 4, 140f, 3, 4097, 128, 17, 10, 4, 82, 1, -1, -1, -1, 10800);
		func_108(33, "beat_rally", 4, 140f, 3, 2051, 128, 17, 10, 4, -1, 2101249, 77, -1, -1, 10800);
		func_108(34, "beat_rally_setup", 4, 140f, 3, 4097, -1, 17, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(35, "beat_laramie_gang_rustling", 4, 140f, 3, 16843777, 128, 17, 10, 66, -1, 0, -1, -1, -1, 10800);
		func_108(36, "beat_locked_safe", 4, 140f, 3, 8449, -1, 17, 10, 4, -1, 0, -1, -1, -1, 1800);
		func_108(37, "beat_lone_prisoner", 4, 140f, 3, 12591297, -1, 13, 10, 6, -1, 1, -1, -1, -1, 10800);
		func_108(38, "beat_lost_friend", 4, 140f, 3, 4202881, -1, 17, 10, 4, -1, 36864, -1, -1, -1, 10800);
		func_108(39, "beat_lost_man", 4, 140f, 3, 4202753, -1, 17, 10, 4, -1, 4105, -1, -1, -1, 10800);
		func_108(40, "beat_moonshine_camp", 4, 140f, 3, 33558785, -1, 14, 10, 4, -1, 4097, 77, -1, -1, 10800);
		func_108(41, "beat_murder_campfire", 4, 100f, 1, 1073758465, -1, 17, 7, 4, -1, 393728, -1, -1, -1, 10800);
		func_108(42, "beat_naked_swimmer", 7, 140f, 5, 8453, -1, 17, 10, 4, -1, 73729, -1, -1, -1, 10800);
		func_108(43, "beat_outlaw_looter", 4, 100f, 3, -1073737719, -1, 12, 10, 4, -1, 2097152, -1, -1, -1, 10800);
		func_108(44, "beat_outlaw_transport", 4, 140f, 3, 564134945, -1, 17, 10, 4, -1, 2097153, -1, -1, -1, 5400);
		func_108(45, "beat_people_in_need_snake_bite", 4, 140f, 3, 4202497, -1, 12, 9, 4, -1, 1, -1, -1, -1, 10800);
		func_108(46, "beat_player_camp_attack", 4, 140f, 3, 151261185, -1, -1, 10, 4, -1, 77825, -1, -1, -1, 10800);
		func_108(47, "beat_player_camp_stranger", 4, 140f, 3, 134220033, -1, -1, -1, 4, -1, 77824, -1, -1, -1, 10800);
		func_108(48, "beat_poisoned", 4, 140f, 3, 4202625, -1, 21, 10, 4, -1, 1, 9, -1, -1, 10800);
		func_108(49, "beat_posse_breakout", 2, 140f, 3, -2147446655, -1, 17, 10, 6, -1, 1, -1, 14, -1, 5400);
		func_108(50, "beat_prison_wagon", 4, 140f, 3, 10493985, -1, 11, 9, 4, -1, 2097153, -1, -1, -1, 5400);
		func_108(51, "beat_rifle_practice", 4, 140f, 3, 553652481, -1, 17, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(53, "beat_savage_aftermath", 4, 140f, 1, 50405377, -1, 12, 9, 4, -1, 2232320, -1, -1, -1, 10800);
		func_108(54, "beat_savage_fight", 4, 140f, 1, 50401281, -1, 17, 10, 4, -1, 2228224, -1, -1, -1, 10800);
		func_108(56, "beat_savage_wagon", 4, 140f, 3, 1090592801, -1, 17, 10, 60, -1, 0, -1, -1, -1, 10800);
		func_108(55, "beat_savage_warning", 7, 140f, 3, 50339841, -1, 17, 10, 4, -1, 2097665, -1, -1, -1, 10800);
		func_108(57, "beat_sharp_shooter", 4, 140f, 3, 536875009, 8192, 11, 9, 4, -1, 1, 9, -1, -1, 10800);
		func_108(58, "beat_skipping_stones", 4, 140f, 5, 4373, 8192, 17, 10, 4, -1, 4097, -1, -1, -1, 10800);
		func_108(59, "beat_spooked_horse", 1, 140f, 3, 8481, 128, 17, 10, 4, -1, 0, -1, -1, -1, 10800);
		func_108(61, "beat_stalking_shadows", 2, 140f, 2, 289, 128, 12, 10, 4, -1, 4096, -1, -1, -1, 10800);
		func_108(62, "beat_stranded_rider", 4, 140f, 3, -2147475455, -1, 17, 11, 4, -1, 1, -1, -1, -1, 10800);
		func_108(63, "beat_traffic_attack", 4, 100f, 3, 16781345, -1, 12, 10, 60, -1, 1, -1, -1, -1, 5400);
		func_108(64, "beat_train_holdup", 4, 185f, 3, -1593834239, -1, 14, 10, 25, -1, 16387, 25, -1, -1, 10800);
		func_108(65, "beat_trapped_woman", 4, 140f, 3, -2143285247, -1, 17, 10, 4, -1, 0, -1, -1, -1, 10800);
		func_108(66, "beat_treasure_hunter", 4, 140f, 3, 8449, -1, 17, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(67, "beat_torturing_captive", 4, 140f, 1, 16777217, 128, 18, 10, 4, -1, 131073, -1, -1, -1, 10800);
		func_108(68, "beat_torch_procession", 2, 140f, 2, 8193, 128, 17, 10, 4, -1, 0, -1, -1, -1, 10800);
		func_108(69, "beat_voice", 2, 140f, 3, 8193, 128, 17, 10, 4, -1, 0, -1, -1, -1, 10800);
		func_108(70, "beat_wagon_threat", 4, 140f, 3, 16842785, -1, 16, 10, 4, -1, 2097152, -1, -1, -1, 10800);
		func_108(71, "beat_washed_ashore", 2, 40f, 3, 8453, -1, 9, 8, 4, -1, 2049, -1, -1, -1, 10800);
		func_108(72, "beat_wilderness_hanging", 2, 100f, 3, -1073725439, -1, 17, 8, 4, -1, 0, -1, -1, -1, 10800);
		func_108(73, "beat_wild_man", 4, 100f, 3, 8449, -1, 9, 8, 4, -1, 69633, -1, -1, -1, 10800);
		func_108(74, "beat_wild_man_cave", 4, 100f, 3, 1073758465, -1, 17, 7, 4, -1, 393728, -1, -1, -1, 10800);
		func_108(75, "beat_bandito_breakout", 1, 50f, 3, 553717763, -1, -1, -1, 4, -1, 2048, 63, -1, -1, 10800);
		func_108(76, "beat_bandito_execution", 1, 50f, 3, 16844803, -1, -1, -1, 4, -1, 1, -1, -1, -1, 10800);
		func_108(77, "beat_brontes_town_encounter", 4, 30f, 3, 1090535426, -1, 11, 8, 4, -1, 1, 9, -1, -1, 10800);
		func_108(78, "beat_bronte_patrol", 4, 70f, 3, 16814083, -1, 11, 9, 29, -1, 0, 9, 31, -1, 10800);
		func_108(79, "beat_consequence", 2, 50f, 3, 16642, 16384, 8, 2, 4, -1, 67585, 77, -1, -1, 10800);
		func_108(80, "beat_dark_alley_ambush", 4, 50f, 3, 258, 128, 13, 10, 4, -1, 0, -1, -1, -1, 10800);
		func_108(81, "beat_dark_alley_bum", 4, 50f, 3, 16386, -1, 10, 9, 4, -1, 0, 77, -1, -1, 10800);
		func_108(82, "beat_dark_alley_stabber", 4, 60f, 2, 8194, 128, 17, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(83, "beat_dead_bodies", 4, 50f, 3, 69635, -1, 12, 10, 66, -1, 2097153, -1, -1, -1, 10800);
		func_108(84, "beat_dead_john", 3, 55f, 1, 147714, 128, 10, 9, 4, -1, 200961, -1, -1, -1, 10800);
		func_108(85, "beat_disabled_beggar", 4, 50f, 3, 16386, -1, 11, 9, 4, -1, 0, 77, -1, -1, 10800);
		func_108(86, "beat_domestic_dispute", 4, 60f, 3, 8467, -1, 11, 8, 4, -1, 4097, 9, -1, -1, 10800);
		func_108(87, "beat_drown_murder", 4, 50f, 1, 8194, 128, 17, 10, 4, -1, 131073, -1, -1, 58, 10800);
		func_108(88, "beat_drunk_dueler", 4, 60f, 3, 67772674, -1, 17, 11, 6, -1, 1, -1, -1, -1, 10800);
		func_108(89, "beat_duel_boaster", 4, 60f, 3, 67780610, 128, 17, 10, 6, -1, 1, -1, -1, -1, 10800);
		func_108(90, "beat_duel_winner", 4, 60f, 3, 528386, -1, 17, 11, 6, -1, 1, -1, -1, -1, 10800);
		func_108(91, "beat_fleeing_family", 4, 55f, 3, 1073807362, -1, 17, 10, 4, -1, 2101249, -1, -1, -1, 10800);
		func_108(92, "beat_foot_robbery", 4, 45f, 3, 16785410, -1, 11, 10, 4, -1, 16385, -1, -1, -1, 10800);
		func_108(94, "beat_gang_ped1_encounter", 4, 30f, 3, 1090568194, -1, 10, 8, 4, -1, 1, 9, -1, -1, 10800);
		func_108(95, "beat_intimidation_tactics", 4, 50f, 3, 16785666, 512, 17, 10, 4, -1, 0, -1, -1, -1, 10800);
		func_108(96, "beat_lemoyne_town_encounter", 4, 50f, 3, 1090535426, -1, 11, 8, 4, -1, 16385, 9, -1, -1, 10800);
		func_108(97, "beat_lost_dog", 4, 60f, 5, 4202626, -1, 17, 10, 4, 82, 1, -1, -1, -1, 10800);
		func_108(98, "beat_lost_drunk", 4, 60f, 3, 8322, -1, 15, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(99, "beat_odriscoll_town_encounter", 4, 45f, 3, 1090568194, -1, 11, 8, 5, -1, 1, 9, -1, 65, 10800);
		func_108(100, "beat_on_the_run", 4, 90f, 3, 8578, -1, 13, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(101, "beat_parlor_ambush", 4, 70f, 1, 16916738, -1, 12, 10, 4, -1, 1073942529, -1, -1, -1, 10800);
		func_108(102, "beat_peeping_tom", 4, 60f, 4, 8450, 128, 11, 10, 4, -1, 4097, -1, -1, -1, 10800);
		func_108(103, "beat_pickpocket", 4, 30f, 3, 131330, -1, 17, 10, 6, -1, 4097, -1, -1, -1, 10800);
		func_108(104, "beat_piss_pot", 4, 60f, 3, 2050, -1, 12, 10, 4, -1, 4096, 9, -1, -1, 10800);
		func_108(105, "beat_police_chase", 4, 50f, 3, 4354, -1, 13, 10, 4, -1, 1073745920, -1, -1, -1, 10800);
		func_108(106, "beat_public_hanging", 4, 60f, 2, 4354, 8192, 10, 9, 4, -1, 81921, 77, -1, -1, 10800);
		func_108(107, "beat_rat_infestation", 4, 60f, 3, 16642, -1, 10, 9, 4, -1, 69633, -1, -1, -1, 10800);
		func_108(108, "beat_rowdy_drunks", 4, 40f, 3, 67117074, 128, 11, 9, 5, -1, 69633, -1, -1, -1, 10800);
		func_108(109, "beat_show_off", 4, 60f, 3, 1073750018, 16384, 17, 10, 4, -1, 1, 77, -1, -1, 10800);
		func_108(110, "beat_slum_ambush", 4, 70f, 2, 67248386, -1, 15, 10, 31, -1, 1073743873, -1, -1, -1, 10800);
		func_108(111, "beat_street_fight", 4, 40f, 3, 67117314, -1, 12, 8, 5, -1, 1, -1, -1, -1, 10800);
		func_108(112, "beat_taunting", 4, 50f, 3, 8194, -1, 17, 10, 4, -1, 1, 77, -1, -1, 10800);
		func_108(113, "beat_town_burial", 4, 60f, 3, 8210, 8192, -1, -1, 4, -1, 4097, -1, -1, -1, 10800);
		func_108(114, "beat_town_confrontation", 3, 20f, 3, 1073750146, -1, 15, 9, 4, -1, 4097, -1, -1, -1, 10800);
		func_108(116, "beat_town_widow", 3, 20f, 3, 8322, -1, 17, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(115, "beat_town_robbery", 4, 60f, 3, 8194, 128, 13, 10, 5, -1, 1, -1, -1, -1, 10800);
		func_108(117, "beat_town_trouble", 4, 60f, 3, 16844802, -1, 15, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(118, "beat_wealthy_couple", 4, 50f, 1, 4098, 128, 17, 10, 4, -1, 1, 57, -1, -1, 10800);
	}
	return 1;
}

int func_14()
{
	func_110(68736);
	return 1;
}

int func_15()
{
	func_111(0, 6, 1);
	func_111(0, 7, 1);
	func_111(0, 1, 1);
	func_111(0, 3, 1);
	func_111(0, 10, 1);
	func_111(0, 9, 1);
	func_111(0, 4, 1);
	func_111(1, 1, 1);
	func_111(1, 10, 1);
	func_111(1, 6, 1);
	func_111(1, 3, 1);
	func_111(2, 7, 1);
	func_111(2, 1, 1);
	func_111(2, 9, 1);
	func_111(2, 10, 1);
	func_111(2, 4, 1);
	func_111(2, 3, 1);
	func_111(2, 0, 1);
	func_111(2, 2, 1);
	func_111(2, 11, 1);
	func_111(3, 9, 1);
	func_111(3, 11, 2);
	func_111(75, 15, 1);
	func_112(75, 16777216, 1);
	func_111(76, 13, 1);
	func_112(76, 1048576, 1);
	func_111(4, 1, 1);
	func_111(4, 6, 1);
	func_111(4, 10, 1);
	func_111(4, 3, 1);
	func_112(77, 8192, 2);
	func_111(5, 10, 2);
	func_111(6, 8, 1);
	func_111(6, 10, 2);
	func_111(7, 1, 2);
	func_111(7, 3, 2);
	func_111(7, 10, 2);
	func_111(7, 6, 2);
	func_111(7, 9, 2);
	func_112(78, 8192, 2);
	func_111(78, 0, 2);
	func_111(8, 15, 2);
	func_111(9, 10, 1);
	func_111(10, 11, 1);
	func_111(11, 11, 2);
	func_111(11, 0, 2);
	func_111(12, 1, 1);
	func_111(12, 3, 1);
	func_111(12, 9, 1);
	func_111(12, 11, 1);
	func_111(12, 12, 1);
	func_111(12, 13, 1);
	func_111(12, 14, 1);
	func_111(12, 15, 1);
	func_111(12, 16, 1);
	func_111(12, 4, 1);
	func_112(79, 2097152, 1);
	func_112(79, 2, 1);
	func_112(79, 65536, 1);
	func_112(79, 524288, 1);
	func_111(79, 9, 1);
	func_111(79, 10, 1);
	func_111(79, 11, 1);
	func_111(79, 1, 1);
	func_111(13, 10, 2);
	func_111(13, 2, 2);
	func_111(14, 1, 2);
	func_111(14, 11, 1);
	func_112(80, 8192, 2);
	func_111(80, 0, 2);
	func_112(81, 8192, 4);
	func_111(81, 0, 4);
	func_112(81, 8, 2);
	func_111(81, 4, 2);
	func_112(82, 8192, 2);
	func_111(82, 0, 2);
	func_112(82, 8, 2);
	func_111(82, 4, 2);
	func_112(83, 16777216, 2);
	func_111(83, 15, 2);
	func_112(84, 2097152, 2);
	func_111(84, 9, 2);
	func_111(15, 13, 3);
	func_111(15, 15, 5);
	func_111(15, 16, 4);
	func_111(15, 14, 2);
	func_112(85, 8192, 2);
	func_111(85, 0, 2);
	func_111(86, 10, 1);
	func_111(86, 11, 1);
	func_112(86, 65538, 1);
	func_112(87, 2097152, 1);
	func_112(87, 65536, 1);
	func_112(87, 4194304, 1);
	func_111(16, 1, 1);
	func_111(16, 4, 1);
	func_111(16, 9, 1);
	func_111(16, 11, 1);
	func_111(16, 10, 1);
	func_111(16, 2, 1);
	func_111(88, 10, 1);
	func_111(88, 9, 1);
	func_112(88, 4194304, 1);
	func_112(88, 2097152, 1);
	func_111(89, 11, 1);
	func_112(89, 65536, 1);
	func_111(90, 9, 1);
	func_111(90, 10, 1);
	func_112(90, 2097152, 1);
	func_112(90, 4194304, 1);
	func_111(17, 3, 1);
	func_111(17, 11, 1);
	func_111(17, 0, 1);
	func_111(17, 9, 1);
	func_111(17, 6, 1);
	func_111(18, 11, 2);
	func_111(18, 0, 2);
	func_111(18, 2, 2);
	func_112(91, 16777216, 1);
	func_111(19, 11, 1);
	func_112(19, 65536, 1);
	func_112(19, 64, 1);
	func_112(92, 2162688, 1);
	func_111(20, 1, 1);
	func_111(20, 3, 1);
	func_111(20, 9, 1);
	func_111(20, 4, 1);
	func_111(20, 11, 1);
	func_111(20, 10, 1);
	func_111(21, 7, 1);
	func_111(22, 8, 1);
	func_112(93, 8192, 1);
	func_111(23, 0, 3);
	func_111(23, 1, 3);
	func_111(23, 2, 3);
	func_111(23, 15, 3);
	func_111(23, 3, 3);
	func_111(23, 4, 3);
	func_111(23, 13, 3);
	func_111(23, 5, 3);
	func_111(23, 6, 3);
	func_111(23, 7, 3);
	func_111(23, 9, 3);
	func_111(23, 10, 3);
	func_111(23, 14, 3);
	func_111(23, 10, 3);
	func_111(23, 11, 3);
	func_111(23, 12, 3);
	func_112(94, 2097152, 4);
	func_112(94, 65536, 4);
	func_112(94, 8192, 2);
	func_111(24, 9, 1);
	func_111(24, 1, 2);
	func_111(24, 10, 2);
	func_111(24, 3, 2);
	func_111(24, 6, 2);
	func_111(119, 1, 1);
	func_111(119, 4, 1);
	func_111(119, 6, 1);
	func_111(119, 15, 1);
	func_111(119, 9, 1);
	func_111(119, 10, 1);
	func_111(119, 11, 1);
	func_111(119, 12, 1);
	func_111(27, 11, 2);
	func_111(27, 0, 2);
	func_111(27, 3, 2);
	func_111(27, 10, 2);
	func_111(27, 9, 1);
	func_111(27, 1, 2);
	func_111(27, 6, 2);
	func_111(28, 0, 1);
	func_111(28, 11, 1);
	func_111(28, 1, 1);
	func_111(29, 10, 2);
	func_111(29, 2, 2);
	func_111(30, 10, 1);
	func_111(30, 4, 1);
	func_111(30, 0, 2);
	func_111(30, 2, 2);
	func_112(95, 8192, 1);
	func_111(31, 2, 1);
	func_111(31, 11, 1);
	func_111(31, 0, 1);
	func_111(31, 10, 1);
	func_111(31, 3, 1);
	func_111(31, 1, 1);
	func_111(31, 6, 1);
	func_111(31, 9, 1);
	func_111(32, 1, 1);
	func_111(32, 10, 1);
	func_111(32, 9, 1);
	func_111(32, 11, 1);
	func_111(32, 2, 1);
	func_111(33, 1, 2);
	func_111(33, 10, 2);
	func_111(33, 9, 2);
	func_111(33, 11, 2);
	func_111(33, 2, 2);
	func_112(33, 16, 2);
	func_111(34, 1, 1);
	func_111(34, 10, 1);
	func_111(34, 9, 1);
	func_111(34, 11, 1);
	func_111(34, 2, 1);
	func_111(35, 1, 1);
	func_112(96, 73728, 3);
	func_111(36, 0, 2);
	func_111(36, 11, 2);
	func_111(36, 1, 2);
	func_111(36, 2, 2);
	func_111(36, 10, 2);
	func_111(37, 11, 2);
	func_111(37, 9, 2);
	func_111(37, 0, 2);
	func_111(37, 2, 2);
	func_112(97, 512, 1);
	func_112(97, 524288, 1);
	func_112(98, 2097152, 2);
	func_112(98, 4194304, 1);
	func_111(38, 7, 1);
	func_111(39, 1, 1);
	func_111(40, 2, 2);
	func_111(40, 0, 2);
	func_111(40, 11, 2);
	func_111(40, 10, 2);
	func_111(40, 3, 2);
	func_111(40, 9, 2);
	func_111(40, 1, 2);
	func_111(40, 6, 2);
	func_111(41, 1, 1);
	func_111(41, 11, 1);
	func_111(41, 9, 1);
	func_111(42, 11, 2);
	func_111(99, 9, 2);
	func_112(99, 2097152, 2);
	func_112(100, 524288, 1);
	func_111(43, 9, 1);
	func_111(43, 1, 1);
	func_111(43, 0, 1);
	func_111(43, 2, 1);
	func_111(43, 4, 1);
	func_111(43, 6, 1);
	func_111(43, 10, 1);
	func_111(43, 11, 1);
	func_111(43, 13, 1);
	func_111(43, 14, 1);
	func_111(43, 15, 1);
	func_111(43, 16, 1);
	func_111(43, 12, 1);
	func_111(44, 1, 1);
	func_111(44, 9, 1);
	func_111(44, 11, 1);
	func_111(44, 0, 1);
	func_112(101, 65536, 2);
	func_112(102, 2097152, 2);
	func_112(102, 524288, 1);
	func_111(103, 0, 1);
	func_111(103, 10, 1);
	func_112(103, 8192, 2);
	func_112(103, 4194304, 1);
	func_111(45, 11, 2);
	func_111(45, 0, 2);
	func_111(45, 9, 1);
	func_111(104, 0, 3);
	func_112(104, 8192, 3);
	func_111(47, 10, 1);
	func_111(46, 10, 2);
	func_111(46, 12, 2);
	func_111(48, 11, 1);
	func_111(48, 10, 1);
	func_111(48, 0, 1);
	func_112(105, 8192, 2);
	func_111(49, 1, 1);
	func_111(49, 9, 1);
	func_111(50, 1, 3);
	func_111(50, 9, 3);
	func_111(50, 10, 3);
	func_111(50, 2, 3);
	func_111(50, 11, 3);
	func_111(50, 0, 3);
	func_112(106, 2097152, 3);
	func_112(106, 65536, 2);
	func_112(106, 8, 2);
	func_112(106, 8192, 2);
	func_112(107, 8192, 2);
	func_111(51, 11, 1);
	func_112(108, 4194304, 2);
	func_112(108, 2097152, 2);
	func_112(108, 16777216, 1);
	func_111(53, 12, 2);
	func_111(54, 12, 2);
	func_111(56, 12, 2);
	func_111(56, 4, 3);
	func_111(55, 12, 1);
	func_111(57, 0, 3);
	func_111(57, 11, 3);
	func_111(57, 9, 3);
	func_111(57, 1, 3);
	func_111(57, 15, 3);
	func_111(57, 14, 3);
	func_111(57, 13, 3);
	func_112(109, 524288, 1);
	func_112(109, 65536, 1);
	func_112(109, 2, 2);
	func_111(58, 9, 2);
	func_111(58, 11, 2);
	func_111(58, 1, 2);
	func_112(110, 8192, 1);
	func_111(59, 0, 2);
	func_111(60, 6, 1);
	func_111(60, 10, 1);
	func_111(60, 1, 1);
	func_111(60, 9, 1);
	func_111(60, 4, 1);
	func_111(61, 0, 2);
	func_111(62, 1, 2);
	func_111(62, 7, 2);
	func_111(62, 6, 2);
	func_111(62, 12, 2);
	func_111(62, 4, 2);
	func_111(62, 9, 2);
	func_112(111, 2097152, 4);
	func_112(111, 4194304, 2);
	func_112(111, 8, 1);
	func_112(112, 8192, 1);
	func_111(67, 10, 1);
	func_111(68, 0, 2);
	func_111(68, 2, 2);
	func_112(113, 8, 2);
	func_112(113, 65536, 1);
	func_112(115, 2097152, 2);
	func_111(115, 9, 2);
	func_112(117, 16777216, 2);
	func_112(114, 2097152, 1);
	func_112(114, 65536, 1);
	func_112(114, 8192, 1);
	func_112(114, 4194304, 1);
	func_112(116, 2162690, 1);
	func_111(63, 1, 1);
	func_111(64, 9, 1);
	func_111(64, 11, 1);
	func_111(64, 0, 1);
	func_111(64, 15, 1);
	func_111(64, 14, 1);
	func_111(64, 13, 1);
	func_111(65, 6, 2);
	func_111(65, 9, 2);
	func_111(65, 11, 2);
	func_111(65, 10, 2);
	func_111(66, 1, 3);
	func_111(69, 0, 1);
	func_111(69, 2, 1);
	func_111(70, 1, 2);
	func_111(71, 10, 1);
	func_111(71, 9, 1);
	func_111(71, 4, 1);
	func_111(71, 8, 1);
	func_112(118, 8200, 1);
	func_111(72, 0, 2);
	func_111(72, 10, 2);
	func_111(72, 2, 2);
	func_111(73, 10, 3);
	func_111(74, 10, 1);
	func_113();
	return 1;
}

int func_16()
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 44)
	{
		if (__LIB_3__::func_959(iVar1))
		{
			if (!Global_40 || bVar0)
			{
				Global_40.f_9274[iVar1] = 0;
				if (__LIB_0__::func_2() != -1)
				{
					Global_36638[iVar1] = 0;
				}
			}
			if (iVar1 == 43)
			{
				__LIB_7__::func_832(43, 1);
			}
		}
		iVar1++;
	}
	return 1;
}

int func_17()
{
	func_117();
	return 1;
}

int func_20()
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		func_119(0, joaat("AV_BARBER_SHAVING"), 2, -1, 5, 1);
		func_119(1, joaat("AV_BODY_TOSS"), 8192, -1, 0, 0);
		func_119(2, joaat("AV_BUTCHER_SHARED"), 3, 77, 23, 1);
		func_119(3, joaat("AV_BUTCHER_SHARED"), 3, 77, 23, 1);
		func_119(4, joaat("AV_CHAMBERPOT_TOSS"), 3, 77, 0, 1);
		func_119(6, joaat("AV_DROP_RABBIT_TABLE"), 2, 77, 0, 0);
		func_119(7, joaat("AV_GET_DIRECTIONS"), 3, 77, 0, 1);
		func_119(47, joaat("AV_HOBO_TRAIN_HOP"), 3, 77, 0, 0);
		func_119(9, joaat("AV_LIGHT_SMOKE"), 8192, 77, 0, 1);
		func_119(10, joaat("AV_LUMBER_PASS"), 64, 77, 43, 0);
		func_119(11, joaat("AV_LUMBER_PASS"), 64, 77, 43, 0);
		func_119(12, joaat("AV_MAN_JUMP_FENCE"), 8192, -1, 0, 0);
		func_119(13, joaat("AV_MAN_STAND_AT_WAGON"), 8192, 77, 0, 1);
		func_119(14, joaat("AV_PUMP_CART"), -1, -1, 0, 1);
		func_119(16, joaat("AV_SHOPKEEPER_RESTOCK"), 3, -1, 58, 1);
		func_119(17, joaat("AV_SHOPKEEPER_RESTOCK"), 3, -1, 58, 1);
		func_119(18, joaat("AV_SHOPKEEPER_RESTOCK"), 3, -1, 58, 1);
		func_119(19, joaat("AV_SHOPKEEPER_RESTOCK"), 3, -1, 58, 1);
		func_119(20, joaat("AV_STAGE_COACH"), 3, 77, 0, 0);
		func_119(21, joaat("AV_STARTING_TO_RAIN"), 3, 2, 62, 0);
		func_119(22, joaat("AV_STARTING_TO_RAIN"), 3, 2, 62, 0);
		func_119(23, joaat("AV_WALL_VOMIT"), 3, 77, 69, 1);
		func_119(24, joaat("AV_WALL_VOMIT"), 3, 77, 69, 1);
		func_119(25, joaat("AV_WALL_VOMIT"), 3, 77, 69, 1);
		func_119(26, joaat("AV_WALL_VOMIT"), 3, 77, 69, 1);
		func_119(27, joaat("AV_WAGON_BARREL"), 3, 77, 0, 0);
		func_119(28, joaat("AV_WAGON_SWEEPER"), 2, 77, 0, 0);
		func_119(29, joaat("AV_WAGON_BARREL"), 64, 77, 0, 0);
		func_119(30, joaat("AV_WALK_WITH_HORSE"), 3, 77, 0, 1);
		func_119(31, joaat("AV_WHISPER_SIT"), 14, 77, 75, 0);
		func_119(32, joaat("AV_WHISPER_SIT"), 14, 77, 75, 0);
		func_119(33, joaat("AV_WHORE_GIVE_MONEY"), 12, -1, 0, 1);
		func_119(34, joaat("AV_AMB_CAMP_ROBBERY"), -1, -1, 77, 1);
		func_119(35, joaat("AV_BOAT_PLACEMENT"), -1, 77, 0, 4);
		func_119(36, joaat("AV_ANIMAL_ATTACK"), 8192, 77, 49, 3);
		func_119(5, joaat("AV_SHEEP_GRAZING"), 3, 57, 41, 3);
		func_119(37, joaat("AV_TRAVELLER_GALLOP_PAST"), -1, 57, 66, 4);
		func_119(38, joaat("AV_ANIMAL_CARRY_RIDE"), 3, 77, 37, 1);
		func_119(39, joaat("AV_ANIMAL_CARRY_RIDE"), 8196, 57, 37, 2);
		func_119(40, joaat("AV_DOG_IN_WAGON"), 8196, 77, 67, 2);
		func_119(41, joaat("AV_ANIMAL_CARRY_RIDE"), 8192, 77, 37, 2);
		func_119(42, joaat("AV_FEMALE_RIDER_MALE_WALKER"), 8192, 77, 64, 4);
		func_119(43, joaat("AV_FISHING_RIVER"), 5, 77, 38, 3);
		func_119(44, joaat("AV_FISHING_RIVER"), 5, 77, 38, 3);
		func_119(45, joaat("AV_ANIMAL_ATTACK"), 8192, 57, 49, 3);
		func_119(46, joaat("AV_WALK_HORSE_CARRY_DEER"), 8196, 57, 37, 4);
		func_119(8, joaat("AV_SHEEP_GRAZING"), 3, 77, 41, 3);
		func_119(48, joaat("AV_MACFARLANE_FARMER"), 3, 77, 60, 3);
		func_119(51, joaat("AV_MAN_WITH_LANTERN"), 128, 57, 65, 4);
		func_119(49, joaat("AV_TRAVELLER_GALLOP_PAST"), 8196, 77, 65, 4);
		func_119(50, joaat("AV_MAN_SIT_READ"), 3, 77, 53, 2);
		func_119(52, joaat("AV_SLOW_RIDER"), 8196, 77, 66, 4);
		func_119(53, joaat("AV_WALK_HORSE_CARRY_DEER"), 8196, 57, 37, 4);
		func_119(54, joaat("AV_WATER_HORSE"), 8192, 77, 53, 3);
		func_119(55, joaat("AV_RIDER_GALLOP"), 8192, 57, 65, 4);
		func_119(56, joaat("AV_FEMALE_RIDER_MALE_WALKER"), 8196, 77, 66, 4);
		func_119(57, joaat("AV_RIDGELINE_NATIVE"), 8196, 77, 45, 2);
		func_119(58, joaat("AV_RIDGELINE_RIDER"), 8196, 77, 65, 2);
		func_119(59, joaat("AV_ROVING_HERD"), 8192, -1, 41, 3);
		func_119(15, joaat("AV_SHEEP_GRAZING"), 3, 77, 41, 3);
		func_119(60, joaat("AV_SLOW_RIDER"), -1, 77, 66, 4);
		func_119(61, joaat("AV_TRAVELLER_GALLOP_PAST"), 8192, 57, 68, 4);
		func_119(62, joaat("AV_FEMALE_RIDER_MALE_WALKER"), 8196, 77, 64, 4);
		func_119(63, joaat("AV_FEMALE_RIDER_MALE_WALKER"), 8196, 77, 64, 4);
		func_119(64, joaat("AV_TRAVELLER_GALLOP_PAST"), 8196, 57, 65, 4);
		func_119(66, joaat("AV_WAGON_BACK_PASSENGER"), 8196, 77, 67, 2);
		func_119(65, joaat("AV_WAGON_MUSIC"), 8196, 77, 67, 4);
		func_119(67, joaat("AV_WALK_HORSE_CARRY_DEER"), 8196, 57, 73, 4);
		func_119(68, joaat("AV_WALK_HORSE_CARRY_DEER"), 8196, 57, 73, 4);
		func_119(69, joaat("AV_WALK_HORSE_CARRY_DEER"), 8196, 57, 73, 4);
		func_119(70, joaat("AV_WALK_HORSE_CARRY_DEER"), 8196, 57, 73, 4);
		func_119(71, joaat("AV_WALK_HORSE_CARRY_DEER"), 8196, 57, 73, 4);
		func_119(72, joaat("AV_WALK_WITH_DOG"), 8196, 77, 74, 4);
		func_119(73, joaat("AV_WALK_WITH_DOG"), 8192, 77, 74, 4);
		func_119(74, joaat("AV_WATER_HORSE"), 8196, 77, 66, 2);
		func_119(75, joaat("AV_ALLIGATOR_BOAR_LEG"), 5, -1, 49, 3);
		func_119(76, joaat("AV_ALLIGATOR_BOAR_NECK"), 5, -1, 49, 3);
		func_119(77, joaat("AV_ALLIGATOR_EAT_DEAD_BIRD"), 8448, -1, 49, 3);
		func_119(78, joaat("AV_CROSS_ROAD"), 8192, -1, 2, 4);
		func_119(79, joaat("AV_BIRD_FLEE_SWARM"), 16, -1, 7, 1);
		func_119(80, joaat("AV_BIRD_FENCE_SWARM"), 16, -1, 7, 1);
		func_119(82, joaat("AV_BEAR_INTIMIDATE_WOLF"), 3, 77, 49, 3);
		func_119(83, joaat("AV_BEAR_RUN_CATCH_FISH"), 3, 57, 49, 3);
		func_119(84, joaat("AV_BEAR_SCRATCH_BACK"), 7, 77, 50, 3);
		func_119(85, joaat("AV_BEAR_VS_WOLVES"), 8192, 77, 49, 3);
		func_119(81, joaat("AV_BEARBLACK_INTIMIDATE_BEARBLACK"), 8192, 77, 49, 3);
		func_119(86, joaat("AV_BEAVER_SWIM_WITH_BRANCH"), 8192, -1, 46, 4);
		func_119(87, joaat("AV_BIG_CAT_AMBUSH_DEER"), 5, 57, 49, 3);
		func_119(88, joaat("AV_BIG_CAT_KILL_RACCOON"), 5, -1, 49, 3);
		func_119(89, joaat("AV_BIRD_FENCE_SWARM"), 8192, 77, 11, 1);
		func_119(90, joaat("AV_BIRD_FLEE_SWARM"), 8192, 77, 11, 1);
		func_119(91, joaat("AV_BIRD_FLEE_SWARM"), 8192, 57, 13, 1);
		func_119(92, joaat("AV_BIRD_FLEE_SWARM"), 8192, 57, 13, 1);
		func_119(93, joaat("AV_BIRD_FLEE_SWARM"), 8192, 57, 13, 1);
		func_119(94, joaat("AV_BIRD_FLEE_SWARM"), 8192, 77, 10, 1);
		func_119(95, joaat("AV_BIRD_FLEE_SWARM"), 8192, 77, 10, 1);
		func_119(96, joaat("AV_BIRD_FLEE_SWARM"), 8192, 77, 11, 1);
		func_119(97, joaat("AV_BIRD_FLEE_SWARM"), 128, 77, 11, 1);
		func_119(98, joaat("AV_BIRD_FLEE_SWARM"), 8196, 77, 11, 1);
		func_119(99, joaat("AV_BIRD_FLEE_SWARM"), 8192, 77, 10, 1);
		func_119(100, joaat("AV_BIRD_FLEE_SWARM"), 8192, 77, 12, 1);
		func_119(101, joaat("AV_BIRD_FLEE_SWARM"), 8192, 77, 12, 1);
		func_119(103, joaat("AV_BIRD_LAND"), 8192, 77, 16, 4);
		func_119(104, joaat("AV_BIRD_LAND"), 8192, 77, 16, 4);
		func_119(105, joaat("AV_BIRD_LAND"), 8192, 77, 16, 4);
		func_119(106, joaat("AV_BIRD_LAND"), 8192, 77, 14, 4);
		func_119(107, joaat("AV_BIRD_LAND"), 8192, 77, 14, 4);
		func_119(108, joaat("AV_BIRD_LAND"), 8192, 77, 14, 4);
		func_119(109, joaat("AV_BIRD_LAND"), 8192, 77, 14, 4);
		func_119(110, joaat("AV_BIRD_LAND"), 16, 77, 14, 4);
		func_119(111, joaat("AV_BIRD_LAND"), 8192, 77, 14, 4);
		func_119(112, joaat("AV_BIRD_LAND"), 8192, 77, 16, 4);
		func_119(113, joaat("AV_BIRD_LAND"), 8192, 77, 16, 4);
		func_119(114, joaat("AV_BIRD_LAND_SWARM"), 8196, 77, 15, 1);
		func_119(115, joaat("AV_BIRD_LAND_SWARM"), 8192, 77, 15, 1);
		func_119(116, joaat("AV_BIRD_ON_ANIMAL"), 8192, 9, 17, 1);
		func_119(117, joaat("AV_BIRD_ON_ANIMAL"), 8192, 9, 17, 1);
		func_119(118, joaat("AV_BIRD_ON_ANIMAL"), 8192, 9, 17, 1);
		func_119(119, joaat("AV_BIRD_ON_ANIMAL"), 8192, 9, 17, 1);
		func_119(120, joaat("AV_BIRD_ON_ANIMAL"), 8192, 9, 17, 1);
		func_119(121, joaat("AV_BIRD_ON_ANIMAL"), 8192, 9, 44, 1);
		func_119(122, joaat("AV_BIRD_SWARM"), 8192, 9, 10, 4);
		func_119(123, joaat("AV_BIRD_FENCE_SWARM"), 8192, 77, 12, 1);
		func_119(102, joaat("AV_BIRDS_IN_TREE"), 8192, 77, 10, 1);
		func_119(124, joaat("AV_FOX_SIT"), 8192, 57, 20, 4);
		func_119(125, joaat("AV_CROSS_ROAD"), 8196, -1, 3, 1);
		func_119(126, joaat("AV_BUCK_AND_DOE"), 5, 77, 47, 2);
		func_119(127, joaat("AV_BUCKS_FIGHTING"), 5, 77, 47, 1);
		func_119(128, joaat("AV_BUFFALO_VS_BUFFALO"), 8192, -1, 48, 1);
		func_119(129, joaat("AV_RIDGELINE_ANIMAL"), 5, 77, 48, 1);
		func_119(130, joaat("AV_FOX_SIT"), 8196, -1, 18, 4);
		func_119(131, joaat("AV_FOX_SIT"), -1, -1, 18, 4);
		func_119(132, joaat("AV_FOX_SIT"), 8192, 57, 20, 4);
		func_119(133, joaat("AV_CAT_CARRY_RAT"), 8192, 77, 27, 4);
		func_119(134, joaat("AV_CAT_CATCH_BIRD"), 8192, 77, 27, 4);
		func_119(135, joaat("AV_CROSS_ROAD"), 8192, -1, 3, 4);
		func_119(136, joaat("AV_COYOTE_CATCH_SQUIRREL"), 8192, 57, 51, 2);
		func_119(137, joaat("AV_ANIMAL_SCAVENGER"), 8196, 57, 51, 2);
		func_119(138, joaat("AV_WOLF_TAKEDOWN_MISS"), 8196, 77, 49, 3);
		func_119(144, joaat("AV_FOX_SIT"), 8196, -1, 19, 4);
		func_119(139, joaat("AV_CROWS_AND_EAGLES_EAT_DEER"), 8196, 57, 56, 4);
		func_119(140, joaat("AV_CROWS_AND_VULTURES_EAT_DEER"), 8196, 57, 56, 4);
		func_119(141, joaat("AV_CROWS_AND_VULTURES_EAT_DEER"), 8196, 57, 56, 1);
		func_119(142, joaat("AV_VULTURES_EAT_CARCASS"), 8196, 57, 56, 4);
		func_119(143, joaat("AV_VULTURES_EAT_CARCASS"), 8196, 57, 56, 1);
		func_119(145, joaat("AV_DEAD_ANIMAL"), -1, -1, 39, 1);
		func_119(146, joaat("AV_DEAD_ANIMAL"), -1, -1, 39, 1);
		func_119(147, joaat("AV_DEAD_ANIMAL"), -1, -1, 39, 1);
		func_119(148, joaat("AV_DEAD_ANIMAL"), -1, -1, 39, 1);
		func_119(149, joaat("AV_DEAD_HORSE"), -1, -1, 39, 1);
		func_119(150, joaat("AV_DEAD_HORSE"), -1, -1, 39, 1);
		func_119(151, joaat("AV_DEAD_ANIMAL"), -1, -1, 61, 4);
		func_119(152, joaat("AV_DEAD_ANIMAL"), -1, -1, 61, 4);
		func_119(153, joaat("AV_DEAD_ANIMAL"), -1, -1, 39, 1);
		func_119(154, joaat("AV_DEAD_ANIMAL"), -1, -1, 61, 4);
		func_119(155, joaat("AV_DEAD_ANIMAL"), -1, -1, 39, 1);
		func_119(156, joaat("AV_DEER_ANTLERS_STUCK"), -1, -1, 47, 1);
		func_119(157, joaat("AV_CROSS_ROAD"), 8196, -1, 3, 1);
		func_119(158, joaat("AV_DEER_TREE_RUB"), 8196, 77, 47, 1);
		func_119(159, joaat("AV_DISCOVERABLE_PARAKEET"), 8192, 57, 25, 1);
		func_119(160, joaat("AV_DOG_CHASE_CAT"), 8192, 77, 28, 1);
		func_119(161, joaat("AV_DOG_CHASE_TAIL"), 8192, 77, 28, 2);
		func_119(162, joaat("AV_DOGS_PLAYING"), 7, 77, 28, 1);
		func_119(163, joaat("AV_BIRD_FLEE_SWARM"), 8192, 57, 13, 1);
		func_119(164, joaat("AV_EAGLE_CATCH_FISH"), 8192, 77, 30, 1);
		func_119(165, joaat("AV_EAGLE_CATCH_RABBIT"), 8192, 77, 29, 1);
		func_119(166, joaat("AV_EAGLE_CATCH_SEASNAKE"), 8192, 77, 30, 1);
		func_119(167, joaat("AV_EAGLE_DIVE_CATCH_FISH"), 8192, 77, 30, 1);
		func_119(168, joaat("AV_FOX_SIT"), 8192, 57, 18, 4);
		func_119(169, joaat("AV_FOX_CATCH_RODENT"), 8192, 77, 51, 2);
		func_119(170, joaat("AV_FOX_HUNT_IN_SNOW"), 3, 57, 51, 1);
		func_119(171, joaat("AV_CROSS_ROAD"), 16, -1, 2, 1);
		func_119(172, joaat("AV_FOX_SIT"), 8196, 57, 46, 1);
		func_119(173, joaat("AV_CROSS_ROAD"), 8192, -1, 4, 1);
		func_119(174, joaat("AV_HAWK_CATCH_SNAKE"), 8192, 77, 29, 1);
		func_119(175, joaat("AV_HAWK_CATCH_SNAKE"), 8192, 77, 29, 1);
		func_119(176, joaat("AV_FOX_SIT"), 8192, 57, 18, 4);
		func_119(177, joaat("AV_HAWK_CATCH_SNAKE"), 8192, 77, 29, 1);
		func_119(178, joaat("AV_RIDGELINE_ANIMAL"), 8192, 77, 46, 1);
		func_119(180, joaat("AV_CROSS_ROAD"), 8192, -1, 3, 4);
		func_119(179, joaat("AV_CROSS_ROAD"), 8192, -1, 3, 4);
		func_119(181, joaat("AV_CROSS_ROAD"), 5, -1, 2, 1);
		func_119(182, joaat("AV_MANGY_DOG_AND_VULTURES"), 20, 57, 56, 1);
		func_119(183, joaat("AV_RIDGELINE_ANIMAL"), 8192, 57, 44, 1);
		func_119(184, joaat("AV_MOOSE_SLIPPING"), 8192, 57, 44, 2);
		func_119(185, joaat("AV_CROSS_ROAD"), 8192, -1, 2, 4);
		func_119(186, joaat("AV_OWL_CATCH_RAT"), 20, 57, 29, 1);
		func_119(187, joaat("AV_FOX_SIT"), 20, 57, 18, 4);
		func_119(188, joaat("AV_PELICAN_DIVE"), 8192, 57, 30, 1);
		func_119(189, joaat("AV_FOX_SIT"), 8192, 57, 18, 4);
		func_119(190, joaat("AV_RIDGELINE_ANIMAL"), 8192, 2, 40, 4);
		func_119(191, joaat("AV_CROSS_ROAD"), 8192, -1, 4, 1);
		func_119(192, joaat("AV_SQUIRREL_CHASE_SQUIRREL"), 8192, 57, 3, 4);
		func_119(193, joaat("AV_CROSS_ROAD"), 8192, 57, 3, 4);
		func_119(194, joaat("AV_RIDGELINE_ANIMAL"), 128, 57, 55, 4);
		func_119(195, joaat("AV_CROSS_ROAD"), 16, -1, 2, 4);
		func_119(197, joaat("AV_CROSS_ROAD"), 8192, -1, 4, 1);
		func_119(196, joaat("AV_RAMS_HEADBUTT"), 8196, 57, 46, 1);
		func_119(198, joaat("AV_RATS_EAT_DEER"), -1, 57, 55, 3);
		func_119(199, joaat("AV_RATS_EATING_GROUP"), -1, 57, 55, 3);
		func_119(200, joaat("AV_FOX_SIT"), 8196, -1, 19, 4);
		func_119(201, joaat("AV_FOX_SIT"), 8192, 57, 18, 4);
		func_119(202, joaat("AV_RIDGELINE_ANIMAL"), 8192, -1, 54, 1);
		func_119(203, joaat("AV_RIDGELINE_ANIMAL"), 8192, -1, 54, 1);
		func_119(204, joaat("AV_RIDGELINE_ANIMAL"), 8192, -1, 44, 1);
		func_119(205, joaat("AV_RIDGELINE_ANIMAL"), 8192, -1, 54, 1);
		func_119(206, joaat("AV_RIDGELINE_ANIMAL"), 8192, -1, 54, 1);
		func_119(207, joaat("AV_RIDGELINE_ANIMAL"), -1, 77, 54, 3);
		func_119(208, joaat("AV_SCAVENGER_ON_ANIMAL"), -1, 57, 56, 1);
		func_119(209, joaat("AV_SEAGULL_CATCH_FISH"), 8192, 57, 30, 1);
		func_119(210, joaat("AV_CROSS_ROAD"), 8192, -1, 4, 1);
		func_119(211, joaat("AV_CROSS_ROAD"), 16, -1, 2, 4);
		func_119(212, joaat("AV_CROSS_ROAD"), 8192, -1, 2, 4);
		func_119(213, joaat("AV_SQUIRREL_CHASE_SQUIRREL"), 2, 57, 2, 4);
		func_119(214, joaat("AV_CROSS_ROAD"), 8192, -1, 2, 4);
		func_119(228, joaat("AV_SWIM_WOLF_CHASE_MOOSE"), 8192, 57, 49, 3);
		func_119(215, joaat("AV_SWIMMING_ANIMAL"), 8192, -1, 63, 4);
		func_119(216, joaat("AV_SWIMMING_ANIMAL"), 8192, -1, 63, 4);
		func_119(217, joaat("AV_SWIMMING_ANIMAL"), -1, -1, 63, 4);
		func_119(218, joaat("AV_SWIMMING_ANIMAL"), 8192, -1, 63, 4);
		func_119(219, joaat("AV_SWIMMING_ANIMAL"), 8192, -1, 63, 4);
		func_119(220, joaat("AV_SWIMMING_ANIMAL"), 8192, -1, 63, 4);
		func_119(221, joaat("AV_SWIMMING_ANIMAL"), 8192, -1, 63, 4);
		func_119(222, joaat("AV_SWIMMING_ANIMAL"), 8192, -1, 63, 4);
		func_119(223, joaat("AV_SWIMMING_ANIMAL"), 8192, -1, 63, 4);
		func_119(224, joaat("AV_SWIMMING_ANIMAL"), 16, -1, 63, 4);
		func_119(225, joaat("AV_SWIMMING_ANIMAL"), 16, -1, 63, 4);
		func_119(226, joaat("AV_SWIMMING_ANIMAL"), -1, -1, 63, 4);
		func_119(227, joaat("AV_SWIMMING_ANIMAL"), 8192, -1, 63, 4);
		func_119(229, joaat("AV_CROSS_ROAD"), 3, -1, 2, 4);
		func_119(232, joaat("AV_FOX_SIT"), 8196, -1, 19, 4);
		func_119(230, joaat("AV_VULTURES_EAT_CARCASS"), 8196, 57, 56, 4);
		func_119(231, joaat("AV_VULTURES_EAT_CARCASS"), 8196, 57, 56, 1);
		func_119(233, joaat("AV_WILD_ANIMAL"), -1, 57, 42, 1);
		func_119(234, joaat("AV_WILD_ANIMAL"), -1, 57, 42, 1);
		func_119(235, joaat("AV_WILD_ANIMAL"), -1, 57, 42, 1);
		func_119(236, joaat("AV_WILD_ANIMAL"), -1, 57, 57, 4);
		func_119(237, joaat("AV_WOLF_AMBUSH_DEER"), 5, 57, 49, 3);
		func_119(238, joaat("AV_WOLF_FLEE_WOLVES"), 8192, 57, 49, 3);
		func_119(239, joaat("AV_DEAD_ANIMAL"), 20, -1, 49, 3);
		func_119(240, joaat("AV_RIDGELINE_ANIMAL"), 20, -1, 50, 3);
		func_119(247, joaat("AV_WOLF_TAKEDOWN_MISS"), 5, 57, 49, 3);
		func_119(242, joaat("AV_WOLVES_EAT_DEER"), 8192, 57, 49, 3);
		func_119(241, joaat("AV_WOLVES_HOWLING"), 20, 57, 50, 3);
		func_119(243, joaat("AV_WOLVES_PLAYING"), 8192, 77, 50, 3);
		func_119(244, joaat("AV_WOLVES_PLAYING"), 8192, 77, 50, 3);
		func_119(245, joaat("AV_WOLVES_PLAYING"), 8192, 77, 50, 3);
		func_119(246, joaat("AV_WOLVES_ALARMED"), 8192, 77, 50, 3);
		__LIB_8__::func_982(34);
		__LIB_8__::func_982(2);
		__LIB_8__::func_982(3);
		__LIB_8__::func_982(5);
		__LIB_8__::func_982(47);
		__LIB_8__::func_982(10);
		__LIB_8__::func_982(15);
		__LIB_8__::func_982(16);
		__LIB_8__::func_982(17);
		__LIB_8__::func_982(18);
		__LIB_8__::func_982(19);
		__LIB_8__::func_982(20);
		__LIB_8__::func_982(27);
		__LIB_8__::func_982(29);
		if (!__LIB_9__::func_968(159))
		{
			if (__LIB_0__::func_440(joaat("CAROLINA_PARAKEETS")) != 25)
			{
				__LIB_9__::func_974(159);
			}
		}
	}
	return 1;
}

int func_21()
{
	if (__LIB_0__::func_2() != -1)
	{
		return 0;
	}
	if (SPACTIONPROXY::_SPACTIONPROXY_MANAGER_IS_READY())
	{
		Global_1956575 = 2;
		__LIB_0__::func_37(&(Global_1956575.f_1));
		Global_1956575.f_4 = 0;
		return 1;
	}
	if (SPACTIONPROXY::_SPACTIONPROXY_MANAGER_IS_FAILED())
	{
		Global_1956575 = 3;
		__LIB_0__::func_37(&(Global_1956575.f_1));
		return 1;
	}
	if (Global_1956575 == 0)
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_START_MANAGER())
		{
			Global_1956575 = 3;
			return 1;
		}
		Global_1956575 = 1;
		__LIB_0__::func_37(&(Global_1956575.f_1));
		return 0;
	}
	if (Global_1956575 == 1)
	{
		if (!__LIB_0__::func_75(&(Global_1956575.f_1)))
		{
			__LIB_1__::func_283(&(Global_1956575.f_1), 0);
		}
		else if (__LIB_1__::func_871(&(Global_1956575.f_1)) > 4000)
		{
			Global_1956575 = 3;
			__LIB_0__::func_37(&(Global_1956575.f_1));
			return 1;
		}
	}
	return 0;
}

int func_22()
{
	if (!Global_40)
	{
		if (!func_128())
		{
			return 0;
		}
	}
	return 1;
}

int func_23(var uParam0)
{
	if (!DATAFILE::_0x7907969497EA92F5(*uParam0))
	{
		*uParam0 = DATAFILE::_0xD97D8D905F1562F2(joaat("WEATHER_GROUPS"));
		return 0;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(*uParam0))
	{
		return 0;
	}
	func_129(uParam0);
	DATAFILE::_DATAFILE_UNLOAD(*uParam0);
	*uParam0 = 0;
	return 1;
}

void func_24(int iParam0, int iParam1)
{
	vLocal_60[iParam0 /*3*/] = iParam1;
	vLocal_60[iParam0 /*3*/].f_1 = 0;
}

void func_25()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_130();
	func_131();
	func_132();
	func_133();
	func_134();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_29(int iParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4)
{
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	if (__LIB_9__::func_975(iParam0) == 0)
	{
		Global_40.f_4942[iParam0 /*60*/].f_6 = iParam1;
	}
	__LIB_0__::func_176(iParam0, 20496, 1);
	Global_1360165[iParam0 /*1157*/].f_70.f_1 = 0;
	if (bParam3)
	{
		__LIB_0__::func_204(iParam0, 1073741824 /* Float: 2f */, 1);
	}
	if (bParam4)
	{
		__LIB_9__::func_978(iParam0, 1, 1);
	}
	func_143(iParam0, __LIB_0__::func_287(iParam0, 3, 1));
}

void func_30(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_143 = iParam1;
	Global_1360165[iParam0 /*1157*/].f_143.f_1 = iParam2;
	Global_1360165[iParam0 /*1157*/].f_143.f_2 = iParam3;
}

bool func_31()
{
	int iVar0;
	iVar0 = 1;
	func_144();
	return iVar0;
}

void func_33()
{
	PERSCHAR::_0x70605812ABC9FF0F(joaat("MFR_HORSES_PERSCHAR_1"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("SCM_PERSCHAR_HORSES"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("SDN_HORSE_1"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("BRA_HORSES_01"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("AMD_HORSES_1"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("EMR_HORSES_PERSCHAR_1"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("TBL_RANCH_HORSES"), joaat("ANIMAL_HORSE_CORRAL_SCALED_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("ASB_HORSES_01"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("BLW_HORSES"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("PHR_HORSES_1"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("WAP_HORSE_1"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("WAP_HORSE_2"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("WAP_HORSE_3"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("STR_PERSCHAR_HORSES"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("RID_HORSES_PERSCHAR_1"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("RID_HORSES_PERSCHAR_2"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("VHT_HORSE_1"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("VAL_LIVERY_HORSE"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
}

void func_35()
{
	func_150();
	func_151();
	func_152();
	func_153();
	func_154();
	func_155();
	func_156();
	func_157();
	func_158();
	__LIB_0__::func_11();
}

void func_36()
{
	func_160(0);
	func_161();
	func_162(8, 0, 0, 5, 1, 1899);
	func_163(joaat("PLAYER_ZERO"));
	func_164(0);
	func_165(-75, 100);
	func_166(0, 90);
	func_166(1, 90);
	func_166(2, 90);
	func_167();
	func_168(7, 1);
	func_169(178615350);
	func_170(0, 0);
	func_171(0);
	func_172(joaat("AZL_CAMP_COLTER"), 1, 1);
	func_173(27, 0.3f, 0f);
	func_173(11, 0f, 0f);
	func_173(1, 0f, 0f);
	func_173(19, -1082130432 /* Float: -1f */, 0f);
	func_173(0, -1082130432 /* Float: -1f */, 0f);
	func_173(5, -1082130432 /* Float: -1f */, 0f);
	func_173(3, -1082130432 /* Float: -1f */, 0f);
	func_173(2, -1082130432 /* Float: -1f */, 0f);
	func_173(9, -1082130432 /* Float: -1f */, 0f);
	func_173(17, -1082130432 /* Float: -1f */, 0f);
	func_174(45);
	func_174(47);
	func_174(55);
	func_174(33);
	func_174(34);
	func_174(35);
	func_174(36);
	func_174(37);
	func_174(38);
	func_174(39);
	func_174(40);
	func_174(41);
	func_174(42);
	func_174(43);
	func_174(52);
	func_174(53);
	func_174(54);
	func_174(18);
	func_174(19);
	func_174(20);
	func_174(21);
	func_174(22);
	func_174(56);
	func_175(0);
	func_176(0);
	func_176(1);
	func_176(2);
	func_176(3);
	func_176(4);
	func_176(5);
	func_176(6);
	func_176(7);
	func_176(13);
	func_176(14);
	func_176(15);
	func_176(16);
	func_176(17);
	func_176(18);
	func_176(19);
	func_176(20);
	func_176(21);
	func_176(22);
	func_176(9);
	func_177(14, joaat("CS_JACKMARSTON"));
	func_178(4, joaat("A_C_HORSE_GANG_UNCLE"));
	func_177(12, joaat("A_C_DOGCATAHOULACUR_01"));
	func_179(12, -1394723994);
	func_180(4);
	func_180(20);
	func_180(11);
	func_180(5);
	func_180(10);
	func_181(74, joaat("U_M_M_RHDGENSTOREOWNER_01"));
	func_182(13, joaat("TSTAG_ENDLESS_SUMMER"));
	func_183(13, joaat("TSTAG_FLOW_PRE_BOUNTY_1"), -518918701, -1);
	func_184();
	func_185(0);
	func_186(38, 1);
	func_186(35, 1);
	func_186(32, 1);
	func_187(4, 1, 0);
	func_187(12, 1, 0);
	func_187(13, 1, 0);
	func_187(14, 1, 0);
	func_187(15, 1, 0);
	func_187(16, 1, 0);
	func_188(945);
	func_189(joaat("A_C_WOLF"));
	func_189(joaat("A_C_WOLF_MEDIUM"));
	func_174(1);
	func_190(11);
	func_191(joaat("WEAPON_REVOLVER_CATTLEMAN"), 1, 1, 1, -1);
	func_191(joaat("WEAPON_MELEE_DAVY_LANTERN"), 1, 1, 1, -1);
	func_191(joaat("WEAPON_MELEE_KNIFE"), 1, 1, 1, -1);
	func_192(1, 0);
	func_193(3, 1, -1, 0, 1);
	func_193(20, 1, -1, 0, 1);
	func_194(14);
	func_194(207);
	func_194(227);
	func_194(228);
	func_194(237);
	func_194(238);
	func_194(239);
	func_194(240);
	func_194(241);
	func_194(242);
	func_194(243);
	func_194(244);
	func_194(245);
	func_194(246);
	func_194(247);
	func_195(10);
	func_195(11);
	func_196(0, 1);
	func_196(2, 1);
	func_196(1, 1);
	func_196(5, 1);
	func_196(4, 1);
	func_196(3, 1);
	func_197(0);
	func_198(356365161);
	func_198(38162571);
	func_198(1485195808);
	func_198(-1170496998);
	func_193(11, 1, -1, 0, 1);
	func_176(11);
	func_176(2);
	func_199(11);
	func_171(1);
	func_200(6);
	func_169(178615350);
	func_168(7, 1);
	func_190(23);
	func_190(31);
	func_190(15);
	func_190(18);
	func_190(21);
	func_174(19);
	func_174(20);
	func_174(22);
	func_174(11);
	func_201(-2147483648);
	func_202(joaat("KIT_WARDROBE"), 1);
	func_202(joaat("WEAPON_KIT_BINOCULARS"), 1);
	func_202(joaat("UPGRADE_UPG_COOKING_SPIT"), 1);
	func_202(joaat("KIT_BANDANA"), 1);
	func_202(joaat("KIT_MASK_GREY_CLOTH"), 1);
	func_202(joaat("DOCUMENT_PLAYER_JOURNAL"), 1);
	func_202(joaat("CLOTHING_WINTER_OUTFIT"), 1);
	func_202(joaat("CONSUMABLE_MEDICINE_USED"), 1);
	func_202(joaat("CONSUMABLE_MEDICINE_USED"), 1);
	func_202(joaat("CLOTHING_ITEM_SATCHEL_PZ_000"), 1);
	func_202(joaat("CLOTHING_ITEM_GUNBELT_PZERO_000"), 1);
	func_202(-1992544048 /* GXTEntry: "Arthur\'s Holster" */, 1);
	func_202(1796687236, 1);
	func_202(joaat("CLOTHING_CUSTOM_ONE_OUTFIT"), 1);
	func_203(joaat("WHITEOUT"), 0);
	func_204();
	func_205();
	func_197(1);
	func_198(753127042);
	func_206(-2147483648);
	func_191(joaat("WEAPON_SHOTGUN_SAWEDOFF"), 1, 1, 1, -1);
	func_191(joaat("WEAPON_REPEATER_CARBINE"), 1, 0, 0, -1);
	func_190(19);
	func_190(22);
	func_174(20);
	func_180(1);
	func_207(1);
	func_179(1, 404503428);
	func_208(joaat("A_C_WOLF"));
	func_208(joaat("A_C_WOLF_MEDIUM"));
	func_209(joaat("SP_CHAL_BAND_ROOT"));
	func_209(joaat("SP_CHAL_EXPL_ROOT"));
	func_209(joaat("SP_CHAL_GAMB_ROOT"));
	func_209(joaat("SP_CHAL_HERB_ROOT"));
	func_209(joaat("SP_CHAL_HORSE_ROOT"));
	func_209(joaat("SP_CHAL_HUNT_ROOT"));
	func_209(joaat("SP_CHAL_SHOT_ROOT"));
	func_209(joaat("SP_CHAL_WEAP_ROOT"));
	func_210(26);
	func_210(11);
	func_211(1, 0);
	func_211(0, 0);
	func_198(-2038424081);
	func_197(3);
	func_198(1884271742);
	func_191(joaat("WEAPON_THROWN_DYNAMITE"), 1, 1, 1, -1);
	func_212(200);
	func_200(2);
	func_213(0);
	func_213(1);
	func_213(2);
	func_213(3);
	func_213(6);
	func_213(7);
	func_213(5);
	func_213(4);
	func_213(8);
	func_213(9);
	func_213(10);
	func_213(11);
	func_203(joaat("SUNNY"), 0);
	func_210(1);
	func_214(36, 1);
	func_215();
	func_216(0);
}

void func_37()
{
	func_160(1);
	func_161();
	func_171(2);
	func_197(4);
	func_192(2, 1);
	func_192(3, 1);
	func_192(7, 1);
	func_217(0, 0, 0, 14, -1, -1);
	func_218(joaat("CSTAG_FLOW_FIRST_VISIT_MUD1_POST"), 8, joaat("CSTP_NEXT_VISIT"), joaat("CSTAG_PRIORITY_CRITICAL"));
	func_218(joaat("CSTAG_FLOW_MUD1_POST_EVENING"), 12, joaat("CSTP_NEXT_VISIT"), -469960592);
	func_219(0);
	func_220(0);
	func_202(joaat("CLOTHING_GUNSLINGER_OUTFIT"), 1);
	func_202(joaat("CLOTHING_ROBBERY_OUTFIT"), 1);
	func_202(joaat("CLOTHING_WARM_WEATHER_OUTFIT"), 1);
	func_202(-1826731591 /* GXTEntry: "Brawler\'s Outfit" */, 1);
	func_202(2119049229, 1);
	func_202(1352942778 /* GXTEntry: "The Rebel" */, 1);
	func_202(1964379549 /* GXTEntry: "The Innocent" */, 1);
	func_202(1201189539 /* GXTEntry: "The Pursuer" */, 1);
	func_202(333909087, 1);
	func_202(joaat("CLOTHING_HL_PLAYER_BOOT_020_1"), 1);
	func_202(joaat("CLOTHING_HL_PLAYER_COAT_021_2"), 1);
	func_202(joaat("CLOTHING_HL_PLAYER_HAT_004_11"), 1);
	func_202(-1391892422 /* GXTEntry: "Wrangler Vest" */, 1);
	func_202(962344255 /* GXTEntry: "Buckskin Vest" */, 1);
	func_202(1160643979 /* GXTEntry: "The Winter Gunslinger" */, 1);
	func_168(6, 1);
	func_191(joaat("WEAPON_PISTOL_VOLCANIC"), 0, 1, 0, -1);
	func_191(joaat("WEAPON_RIFLE_SPRINGFIELD"), 0, 1, 0, -1);
	func_191(joaat("WEAPON_RIFLE_VARMINT"), 0, 1, 0, 526);
	func_221(joaat("CLOTHING_WINTER_OUTFIT"), 1);
	func_221(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"), 1);
	func_169(-268604689);
	func_173(27, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	func_173(11, 0.1f, -1082130432 /* Float: -1f */);
	func_222(48);
	func_170(1, 0);
	func_171(1);
	func_172(joaat("AZL_CAMP_COLTER"), 0, 1);
	func_172(joaat("AZL_CAMP_HORSESHOE_OVERLOOK"), 1, 1);
	func_223(711);
	func_224(1230);
	func_225(1);
	func_225(5);
	func_225(20);
	func_225(4);
	func_190(33);
	func_190(34);
	func_190(35);
	func_190(37);
	func_190(38);
	func_190(39);
	func_190(40);
	func_190(41);
	func_190(43);
	func_190(26);
	func_190(11);
	func_190(16);
	func_190(17);
	func_226(194, 0);
	func_198(54073871);
	func_198(-748969569);
	func_227(-1170496998);
	func_207(0);
	func_207(1);
	func_207(4);
	func_207(5);
	func_207(13);
	func_207(14);
	func_207(15);
	func_207(16);
	func_207(17);
	func_207(18);
	func_207(19);
	func_207(20);
	func_207(22);
	func_207(11);
	func_192(6, 1);
	func_192(9, 1);
	func_192(21, 1);
	func_198(280705402);
	func_203(joaat("MISTY"), 0);
	func_228(0);
	func_228(1);
	func_228(9);
	func_228(5);
	func_228(6);
	func_190(12);
	func_195(207);
	func_195(227);
	func_195(228);
	func_195(237);
	func_195(238);
	func_195(239);
	func_195(241);
	func_195(240);
	func_195(242);
	func_195(243);
	func_195(244);
	func_195(245);
	func_195(246);
	func_195(247);
	func_229(65);
	func_229(10);
	func_229(12);
	func_229(24);
	func_229(31);
	func_229(9);
	func_230(111, 1);
	func_230(66, 1);
	func_231(0, 1);
	func_232(4);
	func_233(1);
	func_233(0);
	func_233(3);
	func_210(5);
	func_234(101);
	func_234(135);
	func_234(39);
	func_234(49);
	func_234(146);
	func_234(143);
	func_234(81);
	func_210(3);
	func_210(31);
	func_210(30);
	func_182(13, joaat("TSTAG_LOCKDOWN_SALOON"));
	func_183(13, 623901469, 820723243, -1);
	func_235(5);
	func_192(6, 0);
	func_192(9, 0);
	func_207(3);
	func_228(3);
	func_182(13, 623901469);
	func_183(13, joaat("TSTAG_LOCKDOWN_SALOON"), -2120502580, 48);
	func_193(3, 2, 6, 0, 1);
	func_200(1);
	func_190(29);
	func_212(100);
	func_210(23);
	func_210(25);
	func_236(2, 0, 0);
	func_198(-736853952);
	func_235(13);
	func_227(-736853952);
	func_191(joaat("WEAPON_THROWN_TOMAHAWK"), 1, 1, 1, 523);
	func_176(8);
	func_228(8);
	func_207(2);
	func_207(7);
	func_228(2);
	func_228(7);
	func_176(2);
	func_176(7);
	func_237(8, 0);
	func_211(100, 0);
	func_211(9, 0);
	func_211(5, 0);
	func_211(11, 0);
	func_183(13, -1132827806, 820723243, -1);
	func_207(5);
	func_235(14);
	func_182(13, -1132827806);
	func_193(11, 2, -1, 0, 1);
	func_193(0, 2, 0, 1, 1);
	func_193(1, 1, 0, 1, 1);
	func_193(18, 1, 0, 3, 1);
	func_230(111, 4);
	func_230(66, 4);
	func_220(2);
	func_191(joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK"), 1, 1, 0, -1);
	func_207(1);
	func_228(1);
	func_212(100);
	func_238(76, 1, 1720);
	func_237(6, 0);
	func_211(7, 0);
	func_210(6);
	func_211(34, 0);
	func_236(1, 0, 0);
	func_211(28, 0);
	func_235(24);
	func_193(20, 4, 0, 2, 1);
	func_193(3, 4, 0, 2, 1);
	func_193(9, 4, 0, 2, 1);
	func_237(35, 0);
	func_238(76, 1, 1720);
	func_198(1010885152);
	func_198(-1558439474);
	func_215();
	func_216(1);
}

void func_38()
{
	func_160(2);
	func_161();
	func_182(13, joaat("TSTAG_LOCKDOWN_SALOON"));
	func_183(13, -1751068532, 820723243, -1);
	func_235(9);
	func_182(13, -1751068532);
	func_239(7, 7, -2);
	func_240(4, 5);
	func_241(7, 1);
	func_207(9);
	func_193(9, 4, 0, 1, 1);
	func_210(24);
	func_230(39, 1);
	func_235(11);
	func_230(39, 4);
	func_227(-1524512402);
	func_198(-1124061431);
	func_238(26, 1, 1320);
	func_242(1, 0);
	func_191(joaat("WEAPON_REVOLVER_SCHOFIELD"), 0, 1, 0, 525);
	func_202(joaat("UPGRADE_OFFHAND_HOLSTER"), 1);
	func_212(55);
	func_237(4, 0);
	func_236(12, 0, 0);
	func_211(103, 0);
	func_243(5, 1);
	func_244(-2, 0);
	func_241(12, 1);
	func_235(12);
	func_191(joaat("WEAPON_REPEATER_WINCHESTER"), 1, 1, 0, -1);
	func_212(100);
	func_207(6);
	func_198(1846061697);
	func_198(-1524512402);
	func_198(1926308480);
	func_193(6, 4, 0, 2, 1);
	func_193(0, 4, 0, 1, 1);
	func_237(25, 0);
	func_245(1, 1);
	func_215();
	func_216(2);
}

void func_39()
{
	func_160(3);
	func_161();
	func_235(6);
	func_193(20, 0, -1, 0, 1);
	func_210(4);
	func_212(100);
	func_246(2);
	func_200(5);
	func_190(8);
	func_211(8, 0);
	func_211(15, 0);
	func_234(112);
	func_247(112);
	func_192(1, 0);
	func_237(103, 0);
	func_234(113);
	func_247(113);
	func_207(1);
	func_234(114);
	func_247(114);
	func_237(16, 0);
	func_248(596);
	func_192(8, 1);
	func_236(1, 0, 0);
	func_235(25);
	func_191(joaat("WEAPON_SHOTGUN_PUMP"), 0, 1, 0, 523);
	func_190(2);
	func_207(8);
	func_192(1, 0);
	func_236(1, 0, 0);
	func_237(9, 0);
	func_220(1);
	func_215();
	func_216(3);
}

void func_40()
{
	func_160(4);
	func_161();
	func_241(5, 1);
	func_239(9, -2, 6);
	func_249(7);
	func_236(2, 0, 0);
	func_241(6, 1);
	func_182(13, joaat("TSTAG_FLOW_PRE_BOUNTY_1"));
	func_235(7);
	func_226(114, 0);
	func_200(0);
	func_234(11);
	func_234(12);
	func_234(13);
	func_234(14);
	func_211(24, 0);
	func_234(15);
	func_241(32, 1);
	func_249(7);
	func_215();
	func_216(4);
}

void func_41()
{
	func_160(5);
	func_161();
	func_192(21, 0);
	func_235(10);
	func_207(21);
	func_193(21, 1, 0, 3, 1);
	func_237(2, 0);
	func_234(38);
	func_212(55);
	func_233(2);
	func_198(-1014145132);
	func_239(22, -2, -1);
	func_243(5, 1);
	func_237(31, 0);
	func_215();
	func_216(5);
}

void func_42()
{
	func_160(29);
	func_161();
	func_211(13, 0);
	func_234(97);
	func_247(97);
	func_250(61, 2, 12, 10);
	func_251(62, 10, -2);
	func_240(25, 9);
	func_241(10, 1);
	func_237(15, 0);
	func_234(98);
	func_247(98);
	func_198(-1060078174);
	func_252(98, 0, 27, -2);
	func_235(8);
	func_241(27, 1);
	func_253(98);
	func_249(8);
	func_237(11, 0);
	func_211(40, 0);
	func_234(99);
	func_247(99);
	func_235(36);
	func_241(25, 1);
	func_253(99);
	func_249(36);
	func_198(-1060078174);
	func_215();
	func_216(29);
}

void func_43()
{
	func_160(31);
	func_161();
	func_254(joaat("COMPLETED"), joaat("MISSIONS_CHP2"), 1, -1);
	func_235(15);
	func_202(joaat("KIT_HORSE_BRUSH"), 1);
	func_193(5, 1, 0, 1, 1);
	func_237(37, 0);
	func_190(30);
	func_190(42);
	func_210(27);
	func_211(47, 0);
	func_254(joaat("COMPLETED"), joaat("MISSIONS_CHP3"), 2, -1);
	func_234(57);
	func_215();
	func_216(31);
}

void func_44()
{
	func_160(6);
	func_161();
	func_164(1);
	func_198(-1764522338);
	func_235(16);
	func_190(44);
	func_198(-1764522338);
	func_207(5);
	func_193(0, 4, -1, 3, 1);
	func_193(5, 4, -1, 3, 1);
	func_234(89);
	func_234(95);
	func_234(138);
	func_207(18);
	func_255(5);
	func_210(28);
	func_210(18);
	func_192(0, 0);
	func_192(3, 0);
	func_236(3, 0, 0);
	func_235(17);
	func_245(0, 1);
	func_245(1, 1);
	func_238(76, 0, 350);
	func_234(11);
	func_234(12);
	func_234(14);
	func_234(13);
	func_207(0);
	func_207(3);
	func_256(23);
	func_193(0, 4, 0, 1, 1);
	func_193(3, 4, 0, 1, 1);
	func_212(100);
	func_222(48);
	func_193(3, 4, 12, 0, 1);
	func_237(47, 0);
	func_237(23, 0);
	func_237(28, 0);
	func_230(64, 1);
	func_211(29, 0);
	func_241(2, 1);
	func_239(20, -2, 3);
	func_249(19);
	func_236(1, 0, 0);
	func_241(3, 1);
	func_235(19);
	func_198(-2058120606);
	func_212(100);
	func_207(1);
	func_207(2);
	func_211(30, 0);
	func_211(27, 0);
	func_211(18, 0);
	func_211(20, 0);
	func_198(-1053549743);
	func_253(95);
	func_235(21);
	func_174(44);
	func_227(-853383233);
	func_227(-1053549743);
	func_238(105, 1, 1720);
	func_238(95, 1, 990);
	func_212(100);
	func_253(138);
	func_237(32, 0);
	func_257(8);
	func_198(1488286867);
	func_226(567, 0);
	func_215();
	func_216(6);
}

void func_45()
{
	func_160(7);
	func_161();
	func_164(2);
	func_192(5, 1);
	func_192(1, 1);
	func_182(8, joaat("TSTAG_LOCKDOWN_SALOON"));
	func_235(18);
	func_183(8, joaat("TSTAG_LOCKDOWN_SALOON"), 977356591, 48);
	func_212(100);
	func_192(2, 0);
	func_192(8, 0);
	func_237(29, 0);
	func_210(8);
	func_198(-1145519186);
	func_258(21);
	func_244(0, 0);
	func_241(4, 1);
	func_249(20);
	func_236(2, 0, 0);
	func_241(0, 1);
	func_235(20);
	func_207(8);
	func_207(5);
	func_182(8, joaat("TSTAG_LOCKDOWN_SALOON"));
	func_193(8, 4, 0, 1, 1);
	func_212(100);
	func_198(1703426636);
	func_191(joaat("WEAPON_THROWN_MOLOTOV"), 1, 1, 1, 523);
	func_239(19, 1, -2);
	func_240(6, 2);
	func_241(1, 1);
	func_237(30, 0);
	func_237(22, 0);
	func_237(24, 0);
	func_211(32, 0);
	func_192(14, 0);
	func_192(19, 0);
	func_192(15, 0);
	func_192(22, 0);
	func_192(17, 0);
	func_192(4, 0);
	func_192(21, 0);
	func_192(20, 0);
	func_192(11, 0);
	func_227(1944170089);
	func_235(26);
	func_207(19);
	func_207(15);
	func_207(22);
	func_207(17);
	func_207(4);
	func_207(21);
	func_207(20);
	func_207(11);
	func_212(100);
	func_198(473295046);
	func_198(1944170089);
	func_198(-741351766);
	func_183(3, -586199837, 820723243, -1);
	func_217(0, 0, 0, 2, -1, -1);
	func_237(33, 0);
	func_215();
	func_216(7);
}

void func_46()
{
	func_160(8);
	func_161();
	func_235(22);
	func_220(3);
	func_191(joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK_EXOTIC"), 1, 0, 0, -1);
	func_259(2, 7, 4);
	func_237(26, 0);
	func_207(23);
	func_211(31, 0);
	func_234(37);
	func_247(37);
	func_193(23, 4, -1, 0, 1);
	func_212(100);
	func_200(3);
	func_237(27, 0);
	func_215();
	func_216(8);
}

void func_47()
{
	func_160(10);
	func_161();
	func_164(3);
	func_234(106);
	func_234(107);
	func_235(27);
	func_207(18);
	func_253(106);
	func_253(107);
	func_234(77);
	func_220(4);
	func_191(joaat("WEAPON_PISTOL_SEMIAUTO"), 0, 1, 0, 523);
	func_234(30);
	func_171(1);
	func_210(9);
	func_237(51, 0);
	func_234(53);
	func_234(127);
	func_237(44, 0);
	func_183(9, -529686691, -2120502580, -1);
	func_235(28);
	func_192(10, 0);
	func_192(3, 0);
	func_182(9, -529686691);
	func_212(100);
	func_198(-468693731);
	func_210(12);
	func_207(14);
	func_237(40, 0);
	func_211(54, 0);
	func_211(45, 0);
	func_164(4);
	func_192(0, 0);
	func_192(9, 0);
	func_235(29);
	func_207(0);
	func_207(9);
	func_190(3);
	func_198(-360036154);
	func_212(100);
	func_220(5);
	func_236(1, 0, 0);
	func_235(30);
	func_212(100);
	func_236(1, 0, 0);
	func_222(1);
	func_235(31);
	func_212(100);
	func_237(56, 0);
	func_215();
	func_216(10);
}

void func_48()
{
	func_160(12);
	func_161();
	func_235(33);
	func_207(3);
	func_192(23, 0);
	func_192(0, 0);
	func_237(54, 0);
	func_237(50, 0);
	func_237(43, 0);
	func_171(1);
	func_234(43);
	func_234(109);
	func_235(34);
	func_212(100);
	func_191(joaat("WEAPON_SHOTGUN_SEMIAUTO"), 0, 1, 0, 523);
	func_234(110);
	func_234(56);
	func_237(52, 0);
	func_211(56, 0);
	func_211(49, 0);
	func_192(14, 0);
	func_192(15, 0);
	func_192(16, 0);
	func_192(17, 0);
	func_192(19, 0);
	func_192(20, 0);
	func_192(21, 0);
	func_192(22, 0);
	func_192(11, 0);
	func_235(37);
	func_253(139);
	func_212(100);
	func_227(-468693731);
	func_227(-1825294305);
	func_257(5);
	func_257(9);
	func_198(8924991);
	func_198(665676602);
	func_192(7, 0);
	func_192(1, 0);
	func_192(4, 0);
	func_192(13, 0);
	func_192(18, 0);
	func_192(12, 0);
	func_217(0, 0, 0, 4, -1, -1);
	func_210(13);
	func_215();
	func_216(12);
}

void func_49()
{
	func_160(9);
	func_161();
	func_192(22, 0);
	func_192(19, 0);
	func_235(35);
	func_207(22);
	func_207(19);
	func_237(46, 0);
	func_215();
	func_216(9);
}

void func_50()
{
	func_160(11);
	func_161();
	func_235(2);
	func_190(32);
	func_190(14);
	func_191(joaat("WEAPON_REPEATER_CARBINE"), 1, 1, 0, -1);
	func_191(joaat("WEAPON_LASSO"), 1, 1, 1, -1);
	func_176(10);
	func_190(1);
	func_190(20);
	func_237(0, 0);
	func_211(22, 0);
	func_211(26, 0);
	func_211(35, 0);
	func_235(23);
	func_217(0, 0, 0, 7, -1, -1);
	func_198(-464836488);
	func_237(18, 0);
	func_211(46, 0);
	func_211(43, 0);
	func_236(2, 0, 0);
	func_207(0);
	func_235(32);
	func_192(0, 0);
	func_257(10);
	func_198(651395116);
	func_260(2, 3);
	func_237(45, 0);
	func_237(42, 0);
	func_211(79, 0);
	func_192(0, 0);
	func_235(47);
	func_190(5);
	func_202(joaat("WEAPON_KIT_BINOCULARS"), 1);
	func_191(joaat("WEAPON_REPEATER_HENRY"), 0, 1, 0, -1);
	func_191(joaat("WEAPON_SNIPERRIFLE_CARCANO"), 0, 1, 0, 526);
	func_237(72, 0);
	func_237(80, 0);
	func_215();
	func_216(11);
}

void func_51()
{
	func_160(13);
	func_161();
	func_164(5);
	func_261(-50);
	func_165(-100, 75);
	func_169(1593315648);
	func_198(373691918);
	func_198(2019386373);
	func_214(9, 0);
	func_262(1);
	func_185(1);
	func_170(4, 0);
	func_171(1);
	func_172(joaat("AZL_CAMP_SHADY_BELLE"), 0, 1);
	func_172(joaat("AZL_CAMP_GUARMA"), 1, 1);
	func_173(27, 0.1f, 0.1f);
	func_263(1);
	func_168(10, 1);
	func_197(38);
	func_164(6);
	func_207(6);
	func_207(3);
	func_230(6, 1);
	func_192(0, 0);
	func_192(2, 0);
	func_197(39);
	func_264(5, 1);
	func_186(57, 1);
	func_186(61, 1);
	func_192(18, 1);
	func_192(3, 1);
	func_168(11, 1);
	func_202(joaat("WEAPON_RIFLE_BOLTACTION"), 1);
	func_202(joaat("WEAPON_REVOLVER_DOUBLEACTION"), 1);
	func_202(joaat("WEAPON_MELEE_KNIFE"), 1);
	func_202(joaat("WEAPON_KIT_BINOCULARS"), 1);
	func_202(joaat("WEAPON_KIT_CAMERA"), 1);
	func_210(14);
	func_235(40);
	func_186(57, 1);
	func_186(61, 1);
	func_207(2);
	func_237(58, 0);
	func_211(57, 0);
	func_164(7);
	func_197(43);
	func_198(2109952320);
	func_198(-1077783786);
	func_227(2024121624);
	func_198(1691618738);
	func_230(6, 4);
	func_217(0, 0, 0, 4, -1, -1);
	func_210(15);
	func_198(52706132);
	func_198(-502324015);
	func_198(440043364);
	func_227(-360036154);
	func_190(6);
	func_264(5, 0);
	func_238(105, 0, 350);
	func_238(5, 0, 350);
	func_238(78, 0, 350);
	func_238(26, 0, 350);
	func_238(92, 0, 350);
	func_238(65, 0, 350);
	func_238(69, 0, 350);
	func_238(93, 0, 350);
	func_238(95, 0, 350);
	func_238(3, 0, 350);
	func_238(82, 0, 350);
	func_238(56, 0, 350);
	func_238(22, 0, 350);
	func_238(37, 0, 350);
	func_238(110, 0, 350);
	func_238(39, 0, 350);
	func_237(60, 0);
	func_215();
	func_216(13);
}

void func_52()
{
	func_160(14);
	func_161();
	func_235(41);
	func_211(58, 0);
	func_197(42);
	func_227(1177464213);
	func_237(57, 0);
	func_215();
	func_216(14);
}

void func_53()
{
	func_160(15);
	func_161();
	func_192(0, 0);
	func_192(6, 0);
	func_192(2, 0);
	func_192(3, 0);
	func_192(18, 0);
	func_192(12, 0);
	func_227(373691918);
	func_265(1);
	func_185(0);
	func_169(-922193456);
	func_179(11, -2051275045);
	func_222(48);
	func_170(5, 0);
	func_171(1);
	func_172(joaat("AZL_CAMP_GUARMA"), 0, 1);
	func_172(joaat("AZL_CAMP_LAKAY"), 1, 1);
	func_173(27, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	func_164(8);
	func_198(-879507474);
	func_211(61, 0);
	func_204();
	func_205();
	func_197(44);
	func_190(52);
	func_190(4);
	func_203(0, 0);
	func_168(9, 1);
	func_227(-879507474);
	func_258(83);
	func_220(6);
	func_198(282809459);
	func_207(7);
	func_207(4);
	func_207(13);
	func_207(14);
	func_207(15);
	func_207(17);
	func_207(18);
	func_207(19);
	func_207(20);
	func_207(21);
	func_207(22);
	func_207(11);
	func_207(0);
	func_207(6);
	func_207(2);
	func_207(3);
	func_207(12);
	func_263(0);
	func_228(11);
	func_234(121);
	func_214(9, 1);
	func_198(-524145696);
	func_237(69, 0);
	func_237(62, 0);
	func_235(45);
	func_186(32, 1);
	func_192(13, 0);
	func_192(11, 0);
	func_236(1, 0, 0);
	func_211(78, 0);
	func_235(46);
	func_192(0, 0);
	func_192(6, 0);
	func_187(0, 1, 1);
	func_187(2, 1, 1);
	func_187(10, 1, 1);
	func_207(13);
	func_207(11);
	func_192(3, 0);
	func_186(32, 1);
	func_220(7);
	func_191(joaat("WEAPON_SHOTGUN_REPEATING"), 0, 1, 0, 523);
	func_207(1);
	func_179(1, -922193456);
	func_237(65, 0);
	func_266(0, 8);
	func_237(76, 0);
	func_215();
	func_216(15);
}

void func_54()
{
	func_160(17);
	func_161();
	func_192(7, 0);
	func_235(50);
	func_190(53);
	func_198(2091701359);
	func_210(16);
	func_237(79, 0);
	func_211(80, 0);
	func_192(0, 0);
	func_235(51);
	func_190(54);
	func_198(-389056691);
	func_198(1485494263);
	func_211(75, 0);
	func_207(0);
	func_235(52);
	func_198(-1311865656);
	func_186(35, 1);
	func_220(9);
	func_190(56);
	func_237(66, 0);
	func_215();
	func_216(17);
}

void func_55()
{
	func_160(16);
	func_161();
	func_198(-622554983);
	func_198(2024383613);
	func_267(50, 0, 33, -2);
	func_235(48);
	func_252(108, 0, 33, -2);
	func_234(108);
	func_247(108);
	func_241(33, 1);
	func_267(50, 0, 34, -2);
	func_252(108, 0, -2, 35);
	func_241(34, 1);
	func_236(6, 0, 0);
	func_241(35, 1);
	func_192(0, 0);
	func_192(6, 0);
	func_235(49);
	func_237(75, 0);
	func_240(28, 11);
	func_227(311708813);
	func_190(54);
	func_192(21, 1);
	func_207(6);
	func_192(23, 1);
	func_211(73, 0);
	func_211(67, 0);
	func_211(66, 0);
	func_207(0);
	func_240(26, 26);
	func_164(10);
	func_172(joaat("AZ_CAMP_DARK_MOOD_ZONE"), 1, 0);
	func_235(58);
	func_198(664571177);
	func_240(24, 31);
	func_240(25, 30);
	func_198(409602249);
	func_192(7, 0);
	func_237(68, 0);
	func_215();
	func_216(16);
}

void func_56()
{
	func_160(18);
	func_161();
	func_268(0, 4, 1);
	func_235(53);
	func_193(16, 1, 0, 3, 1);
	func_193(4, 4, 0, 1, 1);
	func_198(235928616);
	func_234(136);
	func_268(1, 4, 2);
	func_234(76);
	func_247(76);
	func_193(9, 4, 0, 2, 1);
	func_260(2, 3);
	func_214(9, 0);
	func_237(34, 0);
	func_191(joaat("WEAPON_RIFLE_BOLTACTION"), 1, 1, 0, -1);
	func_211(76, 0);
	func_198(-76237062);
	func_235(54);
	func_227(-76237062);
	func_171(1);
	func_210(17);
	func_207(0);
	func_207(6);
	func_237(71, 0);
	func_211(65, 0);
	func_235(55);
	func_207(3);
	func_236(2, 0, 0);
	func_235(56);
	func_198(-828139293);
	func_269(0);
	func_269(1);
	func_269(2);
	func_269(3);
	func_269(7);
	func_237(67, 0);
	func_220(8);
	func_195(14);
	func_211(68, 0);
	func_270(23);
	func_270(17);
	func_270(21);
	func_192(20, 0);
	func_192(15, 0);
	func_192(4, 0);
	func_235(57);
	func_192(13, 0);
	func_192(14, 0);
	func_210(19);
	func_215();
	func_216(18);
}

void func_57()
{
	func_160(19);
	func_161();
	func_270(0);
	func_270(1);
	func_270(2);
	func_270(3);
	func_270(4);
	func_270(5);
	func_270(6);
	func_270(7);
	func_270(8);
	func_270(9);
	func_270(11);
	func_270(15);
	func_270(16);
	func_270(17);
	func_270(18);
	func_270(19);
	func_270(20);
	func_270(21);
	func_270(22);
	func_270(23);
	func_192(13, 0);
	func_192(14, 0);
	func_192(12, 0);
	func_192(24, 0);
	func_192(25, 0);
	func_186(35, 1);
	func_186(32, 1);
	func_186(38, 0);
	func_187(4, 0, 0);
	func_187(12, 0, 0);
	func_187(13, 0, 0);
	func_187(14, 0, 0);
	func_187(15, 0, 0);
	func_187(16, 0, 0);
	func_187(0, 0, 0);
	func_187(2, 0, 0);
	func_187(10, 0, 0);
	func_271(945);
	func_171(2);
	func_197(59);
	func_172(joaat("AZ_CAMP_DARK_MOOD_ZONE"), 0, 0);
	func_263(1);
	func_227(-828139293);
	func_213(0);
	func_213(1);
	func_213(2);
	func_213(3);
	func_213(7);
	func_238(95, 0, 350);
	func_238(93, 0, 350);
	func_174(26);
	func_174(46);
	func_198(-538889627);
	func_198(559573222);
	func_210(20);
	func_211(88, 0);
	func_272(0);
	func_178(11, joaat("A_C_HORSE_TURKOMAN_DARKBAY"));
	func_235(76);
	func_198(94263042);
	func_198(-2106445152);
	func_197(77);
	func_220(13);
	func_192(7, 0);
	func_207(13);
	func_207(14);
	func_207(4);
	func_207(12);
	func_214(36, 0);
	func_234(52);
	func_198(-618620429);
	func_273();
	func_241(39, 1);
	func_215();
	func_216(19);
}

void func_58()
{
	func_160(20);
	func_161();
	func_163(joaat("PLAYER_THREE"));
	func_274();
	func_164(0);
	func_191(joaat("WEAPON_REPEATER_HENRY"), 1, 1, 0, -1);
	func_272(1);
	func_168(61, 0);
	func_177(14, joaat("CS_JACKMARSTON_TEEN"));
	func_177(12, joaat("A_C_DOGRUFUS_01"));
	func_178(7, joaat("A_C_HORSE_GANG_CHARLES_ENDLESSSUMMER"));
	func_178(11, joaat("A_C_HORSE_GANG_SADIE_ENDLESSSUMMER"));
	func_178(4, joaat("A_C_HORSE_GANG_UNCLE_ENDLESSSUMMER"));
	func_179(14, -268604689);
	func_198(704802028);
	func_273();
	func_214(79, 1);
	func_198(-63926460);
	func_198(374115931);
	func_198(-1241340344);
	func_198(-1425209566);
	func_198(-664512648);
	func_198(-811637947);
	func_198(-919512195);
	func_198(405586984);
	func_227(-622554983);
	func_227(1485494263);
	func_198(-25901845);
	func_198(-1738165526);
	func_227(2091701359);
	func_166(0, 90);
	func_166(1, 90);
	func_166(2, 90);
	func_183(13, joaat("TSTAG_ENDLESS_SUMMER"), -1784359682, -1);
	func_181(74, joaat("CS_MRPEARSON"));
	func_194(10);
	func_194(11);
	func_198(-259123672);
	func_198(-1062490780);
	func_222(48);
	func_170(7, 0);
	func_171(1);
	func_172(joaat("AZL_CAMP_BEAVER_HOLLOW"), 0, 1);
	func_172(joaat("AZL_CAMP_PRONGHORN_RANCH"), 1, 1);
	func_172(joaat("AZL_PRONGHORN_RANCH"), 1, 1);
	func_198(1850082804);
	func_175(0);
	func_162(8, 0, 0, 18, 5, 1907);
	func_275();
	func_260(0, 5);
	func_260(2, 2);
	func_260(1, 2);
	func_260(5, 2);
	func_204();
	func_205();
	func_190(45);
	func_174(16);
	func_197(60);
	func_202(joaat("WEAPON_LASSO"), 1);
	func_202(joaat("WEAPON_MELEE_KNIFE"), 1);
	func_220(10);
	func_227(1850082804);
	func_235(61);
	func_207(13);
	func_207(14);
	func_227(1850082804);
	func_210(21);
	func_235(63);
	func_211(97, 0);
	func_197(64);
	func_237(98, 0);
	func_235(66);
	func_198(-182889087);
	func_260(4, 3);
	func_168(62, 0);
	func_211(95, 0);
	func_192(13, 1);
	func_192(14, 1);
	func_197(67);
	func_263(0);
	func_190(46);
	func_190(16);
	func_202(-361635024 /* GXTEntry: "The Cowboy" */, 1);
	func_202(-409616653 /* GXTEntry: "The Homesteader" */, 1);
	func_202(-1205612021 /* GXTEntry: "The Winter Cowboy" */, 1);
	func_202(-1611873049 /* GXTEntry: "The Rancher" */, 1);
	func_202(890706995 /* GXTEntry: "The Cowhand" */, 1);
	func_168(62, 1);
	func_168(65, 0);
	func_168(70, 0);
	func_168(91, 0);
	func_168(93, 0);
	func_202(-1515874150 /* GXTEntry: "John\'s Off-Hand Holster" */, 1);
	func_202(1082956942 /* GXTEntry: "Weathered Pistol Belt" */, 1);
	func_202(-1282334963 /* GXTEntry: "Weathered Holster" */, 1);
	func_272(0);
	func_237(90, 0);
	func_210(22);
	func_234(51);
	func_234(42);
	func_234(71);
	func_234(126);
	func_234(100);
	func_211(91, 0);
	func_170(8, 0);
	func_171(1);
	func_198(-1056767524);
	func_172(joaat("AZL_CAMP_PRONGHORN_RANCH"), 0, 1);
	func_172(joaat("AZL_PRONGHORN_RANCH"), 0, 1);
	func_172(joaat("AZL_CAMP_BEECHERS_HOPE"), 1, 1);
	func_172(joaat("AZL_BEECHERS_HOPE"), 1, 1);
	func_211(102, 0);
	func_235(73);
	func_198(2008888900);
	func_273();
	func_176(7);
	func_237(92, 0);
	func_237(83, 0);
	func_211(93, 0);
	func_198(1649996811);
	func_273();
	func_211(85, 0);
	func_234(145);
	func_235(74);
	func_260(3, 3);
	func_198(227918160);
	func_273();
	func_235(68);
	func_237(96, 0);
	func_198(168171957);
	func_273();
	func_211(94, 0);
	func_198(1193080109);
	func_273();
	func_235(75);
	func_233(5);
	func_198(618699440);
	func_237(89, 0);
	func_215();
	func_216(20);
}

void func_59()
{
	func_160(21);
	func_161();
	func_235(62);
	func_237(97, 0);
	func_198(-1056767524);
	func_211(98, 0);
	func_235(65);
	func_237(95, 0);
	func_215();
	func_216(21);
}

void func_60()
{
	func_160(22);
	func_161();
	func_235(69);
	func_237(102, 0);
	func_200(0);
	func_234(17);
	func_234(18);
	func_234(16);
	func_234(20);
	func_234(19);
	func_211(83, 0);
	func_235(72);
	func_237(85, 0);
	func_211(96, 0);
	func_235(70);
	func_237(94, 0);
	func_211(86, 0);
	func_235(71);
	func_237(99, 0);
	func_215();
	func_216(22);
}

void func_61()
{
	func_160(23);
	func_161();
	func_234(63);
	func_247(63);
	func_231(0, 0);
	func_260(0, 3);
	func_193(10, 0, -1, 0, 1);
	func_179(10, -268604689);
	func_225(10);
	func_191(joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 1, 1, 0, -1);
	func_191(joaat("WEAPON_THROWN_THROWING_KNIVES"), 1, 1, 1, -1);
	func_210(2);
	func_237(13, 0);
	func_211(25, 0);
	func_211(21, 0);
	func_211(23, 0);
	func_211(37, 0);
	func_192(1, 1);
	func_192(5, 1);
	func_234(21);
	func_210(7);
	func_211(72, 0);
	func_243(5, 1);
	func_234(64);
	func_247(64);
	func_252(64, 2, 28, -2);
	func_192(11, 0);
	func_236(2, 0, 0);
	func_252(64, 0, 29, -2);
	func_241(28, 1);
	func_214(16, 1);
	func_234(65);
	func_247(65);
	func_198(311708813);
	func_260(0, 5);
	func_191(joaat("WEAPON_REPEATER_HENRY"), 1, 1, 0, -1);
	func_241(29, 1);
	func_207(11);
	func_237(73, 0);
	func_215();
	func_216(23);
}

void func_62()
{
	func_160(24);
	func_161();
	func_211(16, 0);
	func_234(0);
	func_247(0);
	func_193(0, 1, 0, 1, 1);
	func_193(13, 4, 0, 1, 1);
	func_193(14, 4, 0, 3, 1);
	func_202(joaat("WEAPON_FISHINGROD"), 1);
	func_237(5, 0);
	func_234(41);
	func_209(joaat("SP_CHAL_SURV_ROOT"));
	func_211(17, 0);
	func_234(134);
	func_247(134);
	func_225(11);
	func_179(11, 1205492208);
	func_193(11, 0, -1, 0, 1);
	func_193(11, 4, 0, 3, 1);
	func_193(17, 0, -1, 0, 1);
	func_173(11, 1.2f, -1082130432 /* Float: -1f */);
	func_177(12, joaat("A_C_DOGCATAHOULACUR_01"));
	func_179(12, -1394723994);
	func_190(28);
	func_237(20, 0);
	func_237(31, 0);
	func_211(64, 0);
	func_254(joaat("COMPLETED"), joaat("MISSIONS_CHP4"), 3, 33);
	func_238(105, 0, 350);
	func_238(95, 0, 350);
	func_211(74, 0);
	func_254(joaat("MISSIONS_PROGRESSED"), 0, 1, 46);
	func_234(6);
	func_247(7);
	func_241(31, 1);
	func_253(6);
	func_253(7);
	func_211(89, 0);
	func_276(1);
	func_247(1);
	func_233(4);
	func_172(joaat("AZL_BEECHERS_HOPE_FARM_RUNNING"), 1, 1);
	func_207(14);
	func_207(13);
	func_207(12);
	func_220(12);
	func_237(86, 0);
	func_237(101, 0);
	func_211(99, 0);
	func_211(87, 0);
	func_234(2);
	func_247(2);
	func_198(-491981251);
	func_273();
	func_237(88, 0);
	func_215();
	func_216(24);
}

void func_63()
{
	func_160(26);
	func_161();
	func_234(120);
	func_247(120);
	func_190(36);
	func_190(32);
	func_190(7);
	func_190(10);
	func_191(joaat("WEAPON_MELEE_KNIFE"), 1, 1, 0, -1);
	func_191(joaat("WEAPON_BOW"), 1, 1, 0, -1);
	func_190(9);
	func_190(27);
	func_190(47);
	func_190(55);
	func_237(1, 0);
	func_211(3, 0);
	func_211(2, 0);
	func_211(4, 0);
	func_211(6, 0);
	func_171(2);
	func_234(66);
	func_247(66);
	func_191(joaat("WEAPON_REVOLVER_DOUBLEACTION"), 0, 1, 0, 525);
	func_219(1);
	func_238(26, 0, 350);
	func_222(48);
	func_170(2, 0);
	func_171(1);
	func_172(joaat("AZL_CAMP_HORSESHOE_OVERLOOK"), 0, 1);
	func_172(joaat("AZL_CAMP_CLEMENS_POINT"), 1, 1);
	func_198(1944170089);
	func_192(18, 0);
	func_169(-922193456);
	func_232(5);
	func_237(7, 0);
	func_237(17, 0);
	func_242(0, 0);
	func_239(12, 13, -2);
	func_240(2, 12);
	func_241(13, 1);
	func_211(33, 0);
	func_240(29, 27);
	func_234(67);
	func_247(67);
	func_192(18, 0);
	func_260(2, 4);
	func_219(2);
	func_169(-922193456);
	func_222(48);
	func_170(3, 0);
	func_171(1);
	func_172(joaat("AZL_CAMP_CLEMENS_POINT"), 0, 1);
	func_172(joaat("AZL_CAMP_SHADY_BELLE"), 1, 1);
	func_227(1944170089);
	func_210(10);
	func_237(64, 0);
	func_192(18, 0);
	func_232(5);
	func_234(117);
	func_238(76, 0, 350);
	func_211(44, 0);
	func_234(139);
	func_247(139);
	func_207(18);
	func_255(5);
	func_277(0, 2);
	func_277(0, 1);
	func_277(0, 3);
	func_211(60, 0);
	func_266(0, 7);
	func_266(0, 8);
	func_266(0, 0);
	func_266(0, 1);
	func_266(0, 2);
	func_266(0, 3);
	func_198(1626481264);
	func_276(82);
	func_191(joaat("WEAPON_MELEE_CLEAVER"), 1, 1, 0, -1);
	func_191(joaat("WEAPON_MELEE_HATCHET"), 1, 1, 0, -1);
	func_191(joaat("WEAPON_MELEE_MACHETE"), 1, 1, 0, 526);
	func_240(28, 24);
	func_240(29, 25);
	func_204();
	func_205();
	func_276(83);
	func_237(61, 0);
	func_211(69, 0);
	func_234(68);
	func_247(68);
	func_219(4);
	func_214(79, 0);
	func_260(1, 3);
	func_260(2, 3);
	func_222(48);
	func_170(6, 0);
	func_192(12, 0);
	func_171(1);
	func_172(joaat("AZL_CAMP_LAKAY"), 0, 1);
	func_172(joaat("AZL_CAMP_BEAVER_HOLLOW"), 1, 1);
	func_192(18, 0);
	func_207(23);
	func_232(5);
	func_182(13, joaat("TSTAG_FLOW_PRE_BOUNTY_1"));
	func_240(4, 32);
	func_175(0);
	func_192(16, 0);
	func_257(16);
	func_191(joaat("WEAPON_PISTOL_MAUSER"), 0, 1, 0, -1);
	func_234(147);
	func_237(78, 0);
	func_237(74, 0);
	func_211(59, 0);
	func_234(140);
	func_247(140);
	func_207(18);
	func_255(5);
	func_277(0, 4);
	func_247(141);
	func_278(0, 4);
	func_278(0, 5);
	func_278(0, 6);
	func_247(142);
	func_241(26, 1);
	func_278(0, 4);
	func_278(0, 5);
	func_278(0, 6);
	func_253(140);
	func_253(141);
	func_253(142);
	func_270(18);
	func_255(5);
	func_211(90, 0);
	func_234(8);
	func_247(8);
	func_234(9);
	func_247(9);
	func_176(4);
	func_237(91, 0);
	func_220(11);
	func_198(588987611);
	func_273();
	func_211(92, 0);
	func_234(10);
	func_247(10);
	func_237(93, 0);
	func_211(101, 0);
	func_234(96);
	func_247(96);
	func_237(87, 0);
	func_215();
	func_216(26);
}

void func_64()
{
	func_160(25);
	func_161();
	func_234(59);
	func_247(59);
	func_277(0, 0);
	func_277(0, 7);
	func_277(0, 8);
	func_279(1);
	func_234(61);
	func_247(61);
	func_210(29);
	func_234(62);
	func_247(62);
	func_244(8, 0);
	func_241(9, 1);
	func_258(61);
	func_276(62);
	func_241(8, 1);
	func_237(3, 0);
	func_212(100);
	func_232(1);
	func_211(70, 0);
	func_234(69);
	func_247(69);
	func_211(71, 0);
	func_234(70);
	func_247(70);
	func_241(30, 1);
	func_253(69);
	func_253(70);
	func_215();
	func_216(25);
}

void func_65()
{
	func_160(27);
	func_161();
	func_192(5, 0);
	func_280(596);
	func_234(94);
	func_247(94);
	func_193(5, 4, 0, 2, 1);
	func_212(100);
	func_237(100, 0);
	func_207(5);
	func_211(50, 0);
	func_234(115);
	func_247(115);
	func_236(2, 0, 0);
	func_234(116);
	func_247(116);
	func_236(2, 0, 0);
	func_211(42, 0);
	func_280(529);
	func_192(7, 0);
	func_237(49, 0);
	func_215();
	func_216(27);
}

void func_66()
{
	func_160(28);
	func_161();
	func_234(3);
	func_234(4);
	func_247(4);
	func_245(0, 1);
	func_234(5);
	func_247(5);
	func_192(1, 0);
	func_245(1, 1);
	func_237(21, 0);
	func_230(33, 1);
	func_211(51, 0);
	func_234(22);
	func_247(23);
	func_241(24, 1);
	func_253(22);
	func_253(23);
	func_211(62, 0);
	func_234(58);
	func_247(58);
	func_164(9);
	func_237(70, 0);
	func_237(59, 0);
	func_251(23, -2, 38);
	func_234(24);
	func_241(38, 1);
	func_247(25);
	func_241(11, 1);
	func_253(22);
	func_253(23);
	func_253(24);
	func_253(25);
	func_215();
	func_216(28);
}

void func_67()
{
	func_160(30);
	func_161();
	func_234(26);
	func_234(84);
	func_234(86);
	func_234(87);
	func_234(88);
	func_247(84);
	func_247(85);
	func_247(86);
	func_247(87);
	func_247(88);
	func_211(52, 0);
	func_234(27);
	func_215();
	func_216(30);
}

void func_68(int iParam0)
{
	func_160(iParam0);
	func_161();
	func_215();
	func_216(iParam0);
}

void func_69()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_1835011[iVar0 /*74*/] = -1;
		Global_1835011[iVar0 /*74*/].f_1 = 0;
		StringCopy(&(Global_1835011[iVar0 /*74*/].f_3), "", 32);
		StringCopy(&(Global_1835011[iVar0 /*74*/].f_8), "", 8);
		Global_1835011[iVar0 /*74*/].f_18 = { 0f, 0f, 0f };
		Global_1835011[iVar0 /*74*/].f_26 = 0;
		Global_1835011[iVar0 /*74*/].f_29 = 0;
		StringCopy(&(Global_1835011[iVar0 /*74*/].f_9), "", 24);
		StringCopy(&(Global_1835011[iVar0 /*74*/].f_12), "", 32);
		Global_1835011[iVar0 /*74*/].f_30 = 0;
		iVar0++;
	}
}

void func_70()
{
	int iVar0;
	VOLUME::_0x748C5F51A18CB8F0(0);
	iVar0 = 0;
	while (iVar0 <= 77)
	{
		func_281(&(Global_1835011[iVar0 /*74*/]));
		iVar0++;
	}
	func_282(0, 0, "winter1", "WNT1", 0, "", "", -1347.48f, 2436.06f, 307.46f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_282(1, 0, "winter2", "WNT2", 33280, "WNT2_INT", "winter2_intro", -1323.966f, 2438.497f, 308.6447f, joaat("BLIP_SCM_ABIGAIL"), 45000);
	func_282(3, 0, "winter4", "WNT4", 33280, "WNT4_INT", "winter4_intro", -1326.43f, 2441.23f, 309.64f, joaat("BLIP_MISSION_JOHN"), 45000);
	func_283(0, "winter1_outro");
	func_283(1, "winter2_outro");
	func_283(3, "winter4_outro");
	func_283(2, "odriscolls1_outro");
	func_284(1, 15);
	func_284(1, 13);
	func_284(1, 2);
	func_284(1, 5);
	func_284(1, 22);
	func_284(1, 14);
	func_284(1, 4);
	func_284(1, 18);
	func_284(1, 20);
	func_284(1, 11);
	func_284(1, 19);
	func_284(1, 21);
	func_284(3, 0);
	func_284(3, 5);
	func_284(3, 21);
	func_284(3, 1);
	func_282(4, 1, "mudtown1", "MUD1", 32768, "MUD1_INT", "mudtown1_intro", -1316.418f, 2421.595f, 306.5768f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_282(5, 1, "mudtown2", "MUD2", 512, "MUD2_INT", "mudtown2_intro", -312.771f, 803.3489f, 117.9849f, joaat("BLIP_SCM_JAVIER"), 45000);
	func_282(6, 3, "mudtown3", "MUD3", 512, "MUD3_INT", "mudtown3_intro", -100.1908f, -25.6157f, 94.9512f, joaat("BLIP_SCM_UNCLE"), 45000);
	func_282(14, 1, "mudtown4", "MUD4", 12, "MUD4_INT", "mudtown4_intro", -252.9086f, 687.2473f, 112.3933f, joaat("BLIP_MISSION_JOHN"), 45000);
	func_282(24, 1, "mudtown5", "MUD5", 0, "MUD5_INT", "mudtown5_intro", 719.8f, -1241.849f, 45.4094f, joaat("BLIP_MISSION_BILL"), 45000);
	func_285(14, (75f * 2f), (100f * 2f), (100f * 2f));
	func_282(8, 29, "mary1", "MRY1", 32768, "", "mary1_intro", 897.1398f, 1280.598f, 233.7575f, joaat("BLIP_SCM_MARY"), 45000);
	func_282(36, 29, "mary3", "MRY3", 0, "MRY3_INT", "mary3_intro", 2676.633f, -1266.643f, 50.84106f, joaat("BLIP_SCM_MARY"), 45000);
	func_285(8, (75f * 2f), (100f * 2f), (100f * 2f));
	func_285(36, (75f * 1.5f), (100f * 1.5f), (200f / 1.33f));
	func_283(4, "mudtown1_outro");
	func_283(6, "mudtown3_outro");
	func_284(4, 0);
	func_284(4, 5);
	func_284(5, 3);
	func_284(5, 2);
	func_284(5, 7);
	func_284(6, 4);
	func_284(14, 1);
	func_284(24, 3);
	func_284(24, 9);
	func_284(24, 20);
	func_285(5, (75f * 2.2f), (100f * 2.2f), 1128792064 /* Float: 200f */);
	func_285(6, (75f * 2f), (100f * 2f), 1128792064 /* Float: 200f */);
	func_285(24, (75f * 3f), (100f * 3f), 1128792064 /* Float: 200f */);
	func_282(9, 2, "saloon1", "SAL1", 0, "SAL1_INT", "saloon1_intro", -128.8677f, -31.6843f, 95.0839f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_284(9, 0);
	func_284(9, 9);
	func_284(9, 16);
	func_285(9, (75f * 2f), (100f * 2f), 1128792064 /* Float: 200f */);
	func_283(9, "saloon1_outro");
	func_282(11, 2, "utopia1", "UTP1", 0, "UTP1_INT", "utopia1_intro", -1804.762f, -351.7945f, 163.1185f, joaat("BLIP_MISSION_MICAH"), 45000);
	func_284(11, 6);
	func_282(12, 2, "utopia2", "UTP2", 0, "UTP2_INT", "utopia2_intro", -1531.901f, -307.4734f, 141.4547f, joaat("BLIP_MISSION_MICAH"), 45000);
	func_284(12, 6);
	func_283(12, "utopia2_outro");
	func_282(13, 1, "sean1", "SEN1", 0, "SEN1_INT", "sean1_intro", -870f, -1098f, 56.9f, joaat("BLIP_SCM_JAVIER"), 45000);
	func_284(13, 23);
	func_284(13, 2);
	func_284(13, 7);
	func_285(13, (75f * 4f), (100f * 4f), 1128792064 /* Float: 200f */);
	func_282(25, 3, "mudtown3b", "MUD6", 0, "MUD3B_INT", "mudtown3b_intro", 1173.268f, -102.1099f, 96.2466f, joaat("BLIP_MISSION_JOHN"), 45000);
	func_284(25, 8);
	func_284(25, 1);
	func_284(25, 7);
	func_285(25, (75f * 3f), (100f * 3f), 1128792064 /* Float: 200f */);
	func_282(7, 4, "bounty1", "BOU1", 0, "RBSOS_INT", "bounty1_intro", -275.4033f, 801.9575f, 118.4063f, joaat("BLIP_MISSION_BOUNTY"), 45000);
	func_285(7, 50f, 75f, 1128792064 /* Float: 200f */);
	func_283(7, "bounty1_outro");
	func_282(10, 5, "reverend1", "REV1", 0, "RRVRD_RSC_1", "reverend1_intro", -327.6682f, -357.796f, 87.0507f, joaat("BLIP_SCM_REVEREND"), 45000);
	func_284(10, 21);
	func_283(10, "reverend1_outro");
	func_285(10, (75f * 2f), (100f * 2f), (100f * 2f));
	func_282(15, 31, "hunting1", "HNT1", 32768, "RCHNT1_INT", "hunting1_intro", -107.3907f, -26.07745f, 95.27734f, joaat("BLIP_MISSION_HOSEA"), 45000);
	func_284(15, 5);
	func_285(15, (75f * 3f), (100f * 3f), 1128792064 /* Float: 200f */);
	func_282(16, 6, "feud1", "FUD1", 0, "", "feud1_intro", 648.6395f, -1281.028f, 40.9099f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_283(16, "feud1_outro");
	func_284(16, 0);
	func_284(16, 5);
	func_285(16, (75f * 2.5f), (100f * 2.5f), 1128792064 /* Float: 200f */);
	func_282(17, 6, "grays1", "GRY1", 0, "GRY1_INT", "grays1_intro", 1359.14f, -1305.885f, 76.7662f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_282(19, 6, "grays2", "GRY2", 32768, "", "grays2_intro", 1711.4f, -1383.2f, 42.89f, joaat("BLIP_MISSION_JOHN"), 45000);
	func_282(21, 6, "grays3", "GRY3", 0, "GRY3_INT", "grays3_intro", 1291.136f, -1290.923f, 75.5354f, joaat("BLIP_MISSION_BILL"), 45000);
	func_285(17, (75f * 4f), (100f * 4f), 1128792064 /* Float: 200f */);
	func_285(19, (75f * 2f), (100f * 2f), 1128792064 /* Float: 200f */);
	func_285(21, (75f * 4f), (100f * 4f), 1128792064 /* Float: 200f */);
	func_283(17, "grays1_outro");
	func_283(19, "grays2_outro");
	func_284(17, 0);
	func_284(17, 3);
	func_284(19, 2);
	func_284(19, 1);
	func_284(21, 6);
	func_284(21, 3);
	func_284(21, 8);
	func_282(18, 7, "braithwaites1", "BRT1", 0, "BRT1_INT", "braithwaites1_intro", 776.5498f, -1056.568f, 53.8989f, joaat("BLIP_MISSION_HOSEA"), 45000);
	func_282(20, 7, "braithwaites2", "BRT2", 0, "BRT2_INT", "braithwaites2_intro", 1011.21f, -1761.52f, 47.6f, joaat("BLIP_MISSION_HOSEA"), 45000);
	func_282(26, 7, "braithwaites3", "BRT3", 32768, "BRT3_INT", "braithwaites3_intro", 656.3981f, -1252.135f, 43.8652f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_285(18, (75f * 2f), (100f * 2f), 1128792064 /* Float: 200f */);
	func_285(20, (75f * 4f), (100f * 4f), (100f * 1.5f));
	func_285(26, (75f * 2f), (100f * 2f), 1128792064 /* Float: 200f */);
	func_283(18, "braithwaites1_outro");
	func_283(20, "braithwaites2_outro");
	func_284(18, 5);
	func_284(18, 1);
	func_284(20, 8);
	func_284(20, 5);
	func_284(26, 0);
	func_284(26, 18);
	func_284(26, 10);
	func_284(26, 16);
	func_284(26, 23);
	func_284(26, 5);
	func_284(26, 13);
	func_284(26, 1);
	func_284(26, 3);
	func_284(26, 7);
	func_284(26, 2);
	func_284(26, 9);
	func_284(26, 6);
	func_282(22, 8, "trelawny1", "TRE1", 0, "", "trelawny1_intro", 655.7808f, -1251.116f, 42.6758f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_284(22, 0);
	func_284(22, 7);
	func_282(27, 10, "mob1", "MOB1", 0, "MOB1_INT", "mob1_intro", 2626.94f, -1219.637f, 52.2649f, joaat("BLIP_SCM_BRONTE"), 45000);
	func_282(28, 10, "mob2", "MOB2", 0, "", "mob2_intro", 2447.677f, -1200.614f, 45.2694f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_282(29, 10, "mob3", "MOB3", 0, "MOB3_INT", "mob3_intro", 2720.927f, -1353.315f, 46.7962f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_282(30, 10, "mob4", "MOB4", 0, "MOB4_INT", "mob4_intro", 1891.44f, -1858.19f, 46.7928f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_282(31, 10, "mob5", "MOB5", 0, "MOB5_INT", "mob5_intro", 2140.294f, -645.7061f, 41.5042f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_283(27, "mob1_outro");
	func_283(29, "mob3_outro");
	func_283(30, "mob4_outro");
	func_284(27, 0);
	func_285(27, (75f * 2f), (100f * 2f), 100f);
	func_284(28, 1);
	func_284(28, 0);
	func_285(28, (75f * 2f), (100f * 2f), 100f);
	func_284(29, 0);
	func_284(29, 9);
	func_285(29, 175f, 225f, 175f);
	func_284(30, 0);
	func_284(30, 5);
	func_284(31, 0);
	func_284(31, 1);
	func_284(31, 3);
	func_284(31, 9);
	func_285(31, (75f * 3f), (100f * 3f), 1128792064 /* Float: 200f */);
	func_282(2, 11, "odriscolls1", "DST1", 33280, "ODR1_INT", "odriscolls1_intro", -1360.4f, 2425.1f, 307.4f, joaat("BLIP_MISSION_BILL"), 45000);
	func_284(2, 3);
	func_284(2, 6);
	func_284(2, 9);
	func_282(23, 11, "odriscolls3", "DST3", 0, "odr3_int", "odriscolls3_intro", 656.0257f, -1250.951f, 43.1798f, joaat("BLIP_MISSION_MICAH"), 45000);
	func_284(23, 6);
	func_285(23, (75f * 2f), (100f * 2f), 1128792064 /* Float: 200f */);
	func_283(23, "odriscolls3_outro");
	func_282(32, 11, "odriscolls4", "ODR4", 0, "ODR4_INT", "odriscolls4_intro", 1892.036f, -1856.665f, 42.1234f, joaat("BLIP_SCM_SADIE"), 45000);
	func_282(47, 11, "odriscolls5", "DST5", 0, "DST5_INT", "odriscolls5_intro", 2794.039f, -1169.609f, 46.924f, joaat("BLIP_SCM_SADIE"), 45000);
	func_285(47, 75f, 100f, (200f / 2f));
	func_284(32, 11);
	func_284(32, 0);
	func_284(32, 10);
	func_284(47, 11);
	func_282(33, 12, "industry1", "IND1", 0, "IND1_INT", "industry1_intro", 1891.336f, -1839.029f, 42.458f, joaat("BLIP_MISSION_HOSEA"), 45000);
	func_282(34, 12, "industry3", "IND3", 12, "IND3_INT", "industry3_intro", 2549.555f, -1181.013f, 53.281f, joaat("BLIP_SCM_TRELAWNEY"), 45000);
	func_283(34, "industry3_outro");
	func_284(33, 0);
	func_284(33, 5);
	func_284(34, 23);
	func_285(34, 1117126656 /* Float: 75f */, 1120403456 /* Float: 100f */, 100f);
	func_282(37, 12, "saint_denis1", "NBD1", 0, "NBD1_INT", "saint_denis1_intro", 1891.318f, -1864.423f, 42.17f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_284(37, 0);
	func_284(37, 6);
	func_284(37, 3);
	func_284(37, 7);
	func_284(37, 1);
	func_284(37, 5);
	func_284(37, 13);
	func_285(37, (75f * 3f), (100f * 3f), 1128792064 /* Float: 200f */);
	func_282(35, 9, "susan1", "SUS1", 0, "SUS1_INT", "susan1_intro", 1877.251f, -1881.726f, 42.1481f, joaat("BLIP_SCM_MARYBETH"), 45000);
	func_284(35, 19);
	func_284(35, 22);
	func_282(38, 13, "guama1", "GUA1", 0, "GUA1_INT", "", 688.195f, -5521.027f, 42.97f, joaat("BLIP_OBJECTIVE"), 45000);
	func_282(39, 13, "guama2", "GUA2", 0, "GUA1_EXT", "", 2008.97f, -4491.485f, 41.0253f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_282(43, 13, "guama3", "GUA3", 0, "GUA3_INT", "guarma3_intro", 1307.386f, -6824.723f, 42.4679f, joaat("BLIP_MISSION_BILL"), 45000);
	func_284(39, 0);
	func_284(39, 6);
	func_284(39, 2);
	func_284(43, 0);
	func_284(43, 3);
	func_284(43, 2);
	func_284(43, 6);
	func_285(43, (75f * 5f), (100f * 5f), 1128792064 /* Float: 200f */);
	func_282(40, 13, "fussar1", "FUS1", 0, "", "fussar1_intro", 1534.57f, -7149.84f, 63.4f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_282(41, 14, "fussar2", "FUS2", 0, "", "fussar2_intro", 1318.124f, -7222.688f, 54.3179f, joaat("BLIP_RC"), 45000);
	func_284(40, 0);
	func_284(40, 2);
	func_285(40, (75f * 3f), (100f * 3f), 100f);
	func_283(40, "fussar1_outro");
	func_283(41, "fussar2_outro");
	func_285(41, 75f, 100f, 90f);
	func_282(42, 14, "smuggler2", "SMG2", 0, "SMG2_INT", "smuggler2_intro", 998.9632f, -6744.742f, 57.315f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_284(42, 0);
	func_284(42, 3);
	func_284(42, 6);
	func_283(42, "smuggler2_outro");
	func_282(44, 15, "gang1", "GNG1", 0, "GNG1_INT", "gang1_intro", 2239.396f, -768.93f, 42.4355f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_282(45, 15, "gang2", "GNG2", 0, "GNG2_INT", "gang2_intro", 2794.276f, -1169.057f, 47.424f, joaat("BLIP_SCM_SADIE"), 45000);
	func_282(46, 15, "gang3", "GNG3", 0, "GNG3_INT", "gang3_intro", 2903.111f, -248.0395f, 40.9789f, joaat("BLIP_SCM_SADIE"), 45000);
	func_284(44, 11);
	func_284(44, 13);
	func_285(44, (75f * 5f), (100f * 5f), 1128792064 /* Float: 200f */);
	func_283(44, "gang1_outro");
	func_284(45, 11);
	func_285(45, (75f * 3f), (100f * 3f), 100f);
	func_284(46, 11);
	func_284(46, 13);
	func_285(46, (75f * 7f), (100f * 7f), 1128792064 /* Float: 200f */);
	func_282(53, 18, "cornwall1", "CRN1", 0, "CRN1_INT", "cornwall1_intro", 706.8683f, -1243.771f, 44.1344f, joaat("BLIP_SCM_MOLLY_OSHEA"), 45000);
	func_282(54, 18, "train_robbery1", "TRN1", 0, "TRN1_INT", "train_robbery1_intro", 2912.107f, 1324.443f, 44.2873f, joaat("BLIP_MISSION_MICAH"), 45000);
	func_282(55, 18, "train_robbery2", "TRN2", 0, "TRN2_INT", "train_robbery2_intro", 2785.663f, 521.8132f, 67.3731f, joaat("BLIP_MISSION_MICAH"), 45000);
	func_282(56, 18, "train_robbery3", "TRN3", 0, "TRN3_INT", "train_robbery3_intro", 568.1516f, 1693.468f, 185.5488f, joaat("BLIP_MISSION_JOHN"), 45000);
	func_284(53, 16);
	func_283(53, "cornwall1_outro");
	func_284(54, 6);
	func_284(54, 0);
	func_285(54, (75f * 3f), (100f * 3f), 1128792064 /* Float: 200f */);
	func_284(55, 3);
	func_284(55, 6);
	func_285(55, (75f * 3f), (100f * 3f), 1128792064 /* Float: 200f */);
	func_284(56, 1);
	func_285(56, (75f * 3.75f), (100f * 4.5f), 1128792064 /* Float: 200f */);
	func_282(57, 18, "train_robbery4", "TRN4", 0, "TRN4_INT", "train_robbery4_intro", 2357.59f, 1373.9f, 105.6f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_284(57, 0);
	func_285(57, (75f * 3f), (100f * 3f), 1128792064 /* Float: 200f */);
	func_283(57, "train_robbery4_outro");
	func_282(48, 16, "native1", "NTV1", 0, "NTV1_INT", "native1_intro", 441.702f, 2229.45f, 248.136f, joaat("BLIP_SCM_RAINS"), 45000);
	func_282(49, 16, "native2", "NTV2", 0, "NTV2_INT", "native2_intro", 2345.514f, 1367.028f, 105.3159f, joaat("BLIP_SCM_TRELAWNEY"), 45000);
	func_282(58, 16, "native3", "NTV3", 0, "NTV3_INT", "native3_intro", 2359.382f, 1373.606f, 105.3286f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_283(48, "native1_outro");
	func_284(49, 7);
	func_285(49, (75f * 1.5f), (100f * 1.5f), 1128792064 /* Float: 200f */);
	func_283(49, "native2_outro");
	func_284(58, 3);
	func_284(58, 1);
	func_284(58, 0);
	func_284(58, 6);
	func_284(58, 4);
	func_284(58, 2);
	func_284(58, 7);
	func_284(58, 21);
	func_284(58, 23);
	func_284(58, 11);
	func_285(58, (75f * 2f), (100f * 2f), 1128792064 /* Float: 200f */);
	func_283(58, "native3_outro");
	func_282(50, 17, "native_son1", "NTS1", 0, "NTS1_INT", "native_son1_intro", 2342.456f, 1354.502f, 106.3074f, joaat("BLIP_SCM_REVEREND"), 45000);
	func_282(51, 17, "native_son2", "NTS2", 0, "NTS2_INT", "native_son2_intro", 71.4867f, 1071.386f, 194.9133f, joaat("BLIP_SCM_EAGLE_FLIES"), 45000);
	func_282(52, 17, "native_son3", "NTS3", 0, "", "native_son3_intro", 453.14f, 2211.46f, 245.04f, joaat("BLIP_SCM_CHARLES"), 45000);
	func_283(52, "native_son3_outro");
	func_284(50, 0);
	func_284(50, 7);
	func_284(50, 2);
	func_284(50, 20);
	func_284(51, 0);
	func_284(51, 26);
	func_284(52, 7);
	func_285(50, (75f * 2f), (100f * 2f), 1128792064 /* Float: 200f */);
	func_285(51, (75f * 3f), (100f * 3f), 1128792064 /* Float: 200f */);
	func_282(59, 19, "finale1", "FIN1", 0, "", "", 2505.984f, 1404.709f, 96.0203f, joaat("BLIP_SCM_ABIGAIL"), 45000);
	func_282(76, 19, "finale2", "FIN2", 0, "FIN2_INT", "finale2_intro", -1640.544f, -1361.189f, 84.0584f, joaat("BLIP_SCM_ABIGAIL"), 45000);
	func_282(77, 19, "finale3", "FIN3", 0, "", "", -1555.872f, -1437.203f, 92.9368f, joaat("BLIP_SCM_ABIGAIL"), 45000);
	func_284(59, 11);
	func_284(76, 13);
	func_284(76, 4);
	func_284(76, 14);
	func_284(76, 7);
	func_284(76, 11);
	func_285(76, (75f * 2f), (100f * 2f), 1128792064 /* Float: 200f */);
	func_284(77, 13);
	func_283(77, "finale3_outro");
	func_282(60, 20, "marston1", "MAR1", 0, "MAR1_INT", "marston1_intro", -1624.569f, 428.6325f, 107.29f, joaat("BLIP_MISSION_JOHN"), 45000);
	func_282(65, 21, "marston2", "MAR2", 0, "MAR2_INT", "marston2_intro", -2590.836f, 457.1726f, 146.019f, joaat("BLIP_SCM_ABIGAIL"), 45000);
	func_282(66, 20, "marston4", "MAR4", 0, "MAR4_INT", "marston4_intro", -2560.566f, 399.7978f, 147.2715f, joaat("BLIP_SCM_DAVID_GEDDES"), 45000);
	func_282(61, 20, "marston5_1", "MAR5", 0, "MAR5_INT", "marston5_1_intro", -2589.093f, 408.1137f, 147.9029f, joaat("BLIP_SCM_TOM_DICKENS"), 45000);
	func_282(62, 21, "marston5_2", "MR52", 12, "MAR5_MCS5", "marston5_2_intro", -2606.167f, 366.299f, 148.4951f, joaat("BLIP_SCM_TOM_DICKENS"), 45000);
	func_282(63, 20, "marston5_3", "MR53", 0, "MAR5_MCS8", "marston5_3_intro", -2545.674f, 357.9615f, 151.2458f, joaat("BLIP_SCM_DAVID_GEDDES"), 45000);
	func_282(64, 20, "laramie1", "LAR1", 0, "", "laramie1_intro", -2598.761f, 412.5062f, 147.409f, joaat("BLIP_MISSION_JOHN"), 45000);
	func_285(65, (75f * 3f), (100f * 3f), 1128792064 /* Float: 200f */);
	func_285(61, (75f * 3f), (100f * 3f), 1128792064 /* Float: 200f */);
	func_283(62, "marston5x_outro");
	func_283(63, "marston5x_outro");
	func_283(65, "marston2_or_4_outro");
	func_283(66, "marston2_or_4_outro");
	func_282(73, 20, "marston6", "MAR6", 0, "RHLP2_RSC1", "marston6_intro", -1638.48f, -1358.785f, 83.2768f, joaat("BLIP_SCM_UNCLE"), 45000);
	func_282(74, 20, "marston7", "MAR7", 0, "MAR7_INT", "marston7_intro", -865.2943f, -1306.124f, 42.00784f, joaat("BLIP_SCM_ALBERT_CAKES"), 45000);
	func_282(75, 20, "marston8", "MAR8", 0, "MAR8_INT", "marston8_intro", -1598.6f, -1419.1f, 81.6f, joaat("BLIP_SCM_UNCLE"), 45000);
	func_282(68, 20, "beechers2_2", "BE22", 0, "rbch2_rsc5", "beechers2_2_intro", -1629.959f, -1392.888f, 82.8805f, joaat("BLIP_SCM_UNCLE"), 45000);
	func_285(74, (75f * 2f), (100f * 2f), 1128792064 /* Float: 200f */);
	func_285(75, (75f * 3f), (100f * 3f), 1128792064 /* Float: 200f */);
	func_285(68, (75f * 2f), (100f * 2f), 1128792064 /* Float: 200f */);
	func_283(75, "marston8_outro");
	func_283(68, "beechers2_2_outro");
	func_284(65, 14);
	func_284(65, 13);
	func_284(73, 4);
	func_284(74, 7);
	func_284(75, 4);
	func_284(75, 7);
	func_284(68, 4);
	func_284(68, 7);
	func_282(67, 20, "abigail2_1", "AB21", 0, "RABI21_INT", "abigail2_1_intro", -2588.554f, 457.1668f, 145.2963f, joaat("BLIP_SCM_ABE_STABLEHAND"), 45000);
	func_283(67, "abigail21_outro");
	func_282(69, 22, "sadie2", "SAD2", 0, "SAD2_INT", "sadie2_intro", -307.6113f, 799.5872f, 117.9875f, joaat("BLIP_SCM_SADIE"), 45000);
	func_285(69, (75f * 3f), (100f * 3f), 1128792064 /* Float: 200f */);
	func_282(70, 22, "sadie3", "SAD3", 0, "RBCH3_RSC1", "sadie3_intro", -1551.319f, -1456.134f, 92.7963f, joaat("BLIP_SCM_UNCLE"), 45000);
	func_285(70, (75f * 3f), (100f * 3f), 1128792064 /* Float: 200f */);
	func_282(71, 22, "sadie4", "SAD4", 0, "SAD4_INT", "sadie4_intro", -1639.131f, -1363.211f, 83.4043f, joaat("BLIP_SCM_ABIGAIL"), 45000);
	func_283(71, "sadie4_outro");
	func_282(72, 22, "sadie5", "SAD5", 0, "SAD5_INT", "sadie5_intro", -809.3553f, -1322.738f, 43.6836f, joaat("BLIP_SCM_SADIE"), 45000);
	func_283(72, "sadie5_outro");
	func_285(72, (75f * 3f), (100f * 3f), 1128792064 /* Float: 200f */);
	func_284(69, 11);
	func_284(70, 4);
	func_284(71, 13);
	func_284(72, 11);
	func_282(78, 19, "dreamanim", "TL21", 0, "", "def_intro_script", 2106.678f, -2041.109f, 40.7255f, joaat("BLIP_MISSION_JOHN"), 45000);
	VOLUME::_0x748C5F51A18CB8F0(1);
}

void func_82()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_1392915)
	{
		__LIB_1__::func_819(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_1899528.f_11)
	{
		Global_1899528.f_11[iVar0] = -1;
		iVar0++;
	}
}

void func_83(int iParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, vector3 vParam9, int iParam12)
{
	if (!__LIB_0__::func_69(iParam0))
	{
		return;
	}
	if (!__LIB_0__::func_20(iParam2))
	{
		return;
	}
	Global_1395601.f_5[iParam0 /*28*/] = iParam2;
	Global_1395601.f_5[iParam0 /*28*/].f_1 = iParam1;
	Global_1395601.f_5[iParam0 /*28*/].f_2 = { vParam3 };
	Global_1395601.f_5[iParam0 /*28*/].f_5 = { vParam6 };
	Global_1395601.f_5[iParam0 /*28*/].f_8 = { vParam9 };
	Global_1395601.f_5[iParam0 /*28*/].f_11 = iParam12;
}

void func_86(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<12> Var2;
	int iVar22;
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_40.f_4283 == iParam0)
	{
		iVar0 = __LIB_5__::func_824(__LIB_1__::func_953(iParam0));
		if (iVar0 != -1)
		{
			Global_40.f_6 = { Global_1395601.f_5[iVar0 /*28*/].f_2 };
		}
		__LIB_4__::func_253(__LIB_5__::func_866(iParam0), joaat("CSTP_PERSIST_ACROSS_STATES"), -1235532919, -1, 1, 1, 0);
		VOLUME::_0x748C5F51A18CB8F0(0);
		VOLUME::_0x748C5F51A18CB8F0(1);
		Global_40.f_4283.f_330 = -15;
		return;
	}
	__LIB_9__::func_127();
	switch (iParam0)
	{
		case 0:
		case 1:
			__LIB_5__::func_440("hso_post_caravan");
			__LIB_0__::func_804(-349064220);
			break;
		case 2:
			__LIB_5__::func_440("dewclm_post_caravan");
			__LIB_0__::func_804(1776302352);
			__LIB_0__::func_803(-349064220);
			break;
		case 3:
			__LIB_0__::func_804(-523522517);
			__LIB_0__::func_803(-349064220);
			__LIB_0__::func_803(1776302352);
			break;
		case 4:
		case 5:
		case 6:
			__LIB_0__::func_803(-349064220);
			__LIB_0__::func_803(1776302352);
			__LIB_0__::func_803(-523522517);
			break;
		case 7:
		case 8:
			__LIB_0__::func_803(-349064220);
			__LIB_0__::func_803(1776302352);
			__LIB_0__::func_803(-523522517);
			__LIB_0__::func_803(1591451572);
			break;
	}
	Global_1934266.f_66 = 1;
	__LIB_2__::func_758(__LIB_1__::func_953(iParam0), 0);
	switch (__LIB_0__::func_2())
	{
		case -1:
			__LIB_9__::func_144();
			__LIB_9__::func_128(iParam0);
			__LIB_0__::func_703(1, 18);
			func_309(iParam0);
			func_310(iParam0);
			Var2.f_11 = 1;
			iVar22 = 0;
			while (iVar22 < 10)
			{
				MISC::_COPY_MEMORY(&(Global_40.f_6563.f_274[iVar22 /*20*/]), &Var2, 20);
				iVar22++;
			}
			Global_40.f_6563.f_273 = 0;
			__LIB_0__::func_63(&(Global_1359489.f_25), 1, 1);
			Global_1359453 = 0;
			iVar1 = 0;
			while (iVar1 < 27)
			{
				__LIB_0__::func_176(iVar1, 16384, 1);
				iVar1++;
			}
			__LIB_4__::func_845(0, 14);
			__LIB_6__::func_32();
			__LIB_6__::func_261();
			Global_1357549.f_1497.f_8 |= 1;
			Global_1391438 = 1;
			Global_40.f_4283.f_330 = -15;
			__LIB_4__::func_253(joaat("CSTAG_NEW_CAMP_FIRST_VISIT"), joaat("CSTP_NEXT_VISIT"), -1235532919, -1, 0, 1, 0);
			__LIB_4__::func_253(__LIB_5__::func_866(iParam0), joaat("CSTP_PERSIST_ACROSS_STATES"), -1235532919, -1, 1, 1, 0);
			break;
	}
}

void func_95(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_335(iParam0, 1, 1, -142743235, 1);
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

void func_104(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	__LIB_10__::func_886(iParam0, Global_35, iParam1, iParam2, iParam3, bParam4);
	func_366();
}

void func_105(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		iParam0 = __LIB_10__::func_759();
	}
	__LIB_10__::func_882(iParam0, Global_35, iParam1, bParam2);
	func_369();
}

void func_107()
{
	int iVar0;
	int iVar1;
	Global_1310750.f_16036 = 0;
	Global_1310750.f_16037 = 0;
	__LIB_1__::func_979(-1);
	Global_1310750.f_16038 = 0;
	Global_1310750.f_16039 = 0;
	Global_1310750.f_16069 = 6;
	Global_1310750.f_16070 = 3;
	Global_1310750.f_16077 = 0;
	Global_1310750.f_16071 = -1;
	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_376(&(Global_1310750[iVar0 /*111*/]));
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		__LIB_0__::func_74(iVar1);
		iVar1++;
	}
}

void func_108(int iParam0, char* sParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	struct<30> Var0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (__LIB_3__::func_207(iParam0))
	{
		return;
	}
	if (iParam9 != -1)
	{
	}
	if (__LIB_0__::func_27(iParam5, 65536) && iParam9 < 60)
	{
		iParam9 = 60;
	}
	Global_1310750[iParam0 /*111*/] = iParam5;
	Global_1310750[iParam0 /*111*/].f_1 = iParam11;
	Global_1310750[iParam0 /*111*/].f_44 = fParam3;
	Global_1310750[iParam0 /*111*/].f_2 = iParam4;
	StringCopy(&(Global_1310750[iParam0 /*111*/].f_40), sParam1, 32);
	Global_1310750[iParam0 /*111*/].f_38 = iParam6;
	Global_1310750[iParam0 /*111*/].f_36 = iParam8;
	Global_1310750[iParam0 /*111*/].f_37 = iParam7;
	Global_1310750[iParam0 /*111*/].f_39 = iParam12;
	Global_1310750[iParam0 /*111*/].f_62 = iParam15;
	Global_1310750[iParam0 /*111*/].f_61 = (1f - (IntToFloat(__LIB_2__::func_786(iParam0)) / 45f));
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = 8;
	Var0.f_4.f_1.f_1 = -1;
	Var0.f_4.f_1.f_3.f_1 = -1;
	Var0.f_4.f_1.f_3.f_3.f_1 = -1;
	Var0.f_4.f_1.f_3.f_3.f_3.f_1 = -1;
	Var0.f_4.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_4.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_4.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_4.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Global_1310750[iParam0 /*111*/].f_4 = { Var0 };
	Global_1310750[iParam0 /*111*/].f_4 = iParam9;
	Global_1310750[iParam0 /*111*/].f_4.f_1 = iParam13;
	Global_1310750[iParam0 /*111*/].f_4.f_2 = iParam10;
	Global_1310750[iParam0 /*111*/].f_4.f_3 = iParam14;
	if (Global_17504.f_42[iParam0 /*8*/].f_5 == 0)
	{
		Global_17504.f_42[iParam0 /*8*/].f_5 = iParam2;
	}
	func_381(1);
}

void func_109(int iParam0, vector3 vParam1, int iParam4)
{
	int iVar0;
	if (iParam4 < 0)
	{
		return;
	}
	if (__LIB_2__::func_786(iParam0) == 0)
	{
		return;
	}
	iVar0 = (__LIB_2__::func_789(iParam0) + iParam4);
	if (iVar0 >= 892)
	{
		return;
	}
	Global_1310750.f_13358[iVar0 /*3*/] = { vParam1 };
}

void func_110(int iParam0)
{
	Stack.Push(0);
	Stack.Push(-1055.963f);
	Stack.Push(-794.308f);
	Stack.Push(59.2567f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(0);
	Stack.Push(-1158.078f);
	Stack.Push(-155.114f);
	Stack.Push(88.889f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(0);
	Stack.Push(-1370.712f);
	Stack.Push(-515.7384f);
	Stack.Push(125.267f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(0);
	Stack.Push(-1029.465f);
	Stack.Push(-492.4087f);
	Stack.Push(101.0615f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(0);
	Stack.Push(-1234.665f);
	Stack.Push(-1371.778f);
	Stack.Push(80.796f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(0);
	Stack.Push(-1525.164f);
	Stack.Push(1722.86f);
	Stack.Push(239.152f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(0);
	Stack.Push(-319.5499f);
	Stack.Push(203.8464f);
	Stack.Push(62.1121f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(0);
	Stack.Push(-513.8f);
	Stack.Push(345.2f);
	Stack.Push(49.8945f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(0);
	Stack.Push(2150.374f);
	Stack.Push(1728.215f);
	Stack.Push(125.2313f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(0);
	Stack.Push(2179.106f);
	Stack.Push(-25.3714f);
	Stack.Push(51.3658f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(1);
	Stack.Push(-1487.833f);
	Stack.Push(384.474f);
	Stack.Push(102.2717f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(1);
	Stack.Push(-1286.226f);
	Stack.Push(148.542f);
	Stack.Push(71.8978f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(1);
	Stack.Push(-2379.321f);
	Stack.Push(135.6397f);
	Stack.Push(236.9608f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(1);
	Stack.Push(-2618.931f);
	Stack.Push(90.8313f);
	Stack.Push(166.3284f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(1);
	Stack.Push(-1746.079f);
	Stack.Push(-914.7423f);
	Stack.Push(100.5956f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(1);
	Stack.Push(-2036.105f);
	Stack.Push(-507.9698f);
	Stack.Push(149.6753f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(1);
	Stack.Push(-1149.823f);
	Stack.Push(-766.3174f);
	Stack.Push(63.4474f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(1);
	Stack.Push(-2526.743f);
	Stack.Push(-108.6706f);
	Stack.Push(165.4704f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(1);
	Stack.Push(675.9786f);
	Stack.Push(1789.638f);
	Stack.Push(216.4616f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(1);
	Stack.Push(1450.093f);
	Stack.Push(1325.142f);
	Stack.Push(161.2261f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(1);
	Stack.Push(2523.959f);
	Stack.Push(1320.4f);
	Stack.Push(122.2039f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(1);
	Stack.Push(2786.135f);
	Stack.Push(1908.004f);
	Stack.Push(161.0971f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(1786.959f);
	Stack.Push(-859.9387f);
	Stack.Push(41.2511f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(1876.321f);
	Stack.Push(-1028.481f);
	Stack.Push(42.4603f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(-1537.491f);
	Stack.Push(72.5534f);
	Stack.Push(103.3094f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(-2141.266f);
	Stack.Push(-474.7134f);
	Stack.Push(145.5408f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(-1433.692f);
	Stack.Push(518.1367f);
	Stack.Push(100.4129f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(-2750.55f);
	Stack.Push(-173.6202f);
	Stack.Push(152.7051f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(-1453.446f);
	Stack.Push(-528.2103f);
	Stack.Push(130.2089f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(-942.714f);
	Stack.Push(-363.6332f);
	Stack.Push(51.5706f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(2719.558f);
	Stack.Push(1.671f);
	Stack.Push(50.5135f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(2578.217f);
	Stack.Push(-156.0283f);
	Stack.Push(40.8259f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(798.2251f);
	Stack.Push(1174.869f);
	Stack.Push(136.9281f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(-1205.845f);
	Stack.Push(-1835.353f);
	Stack.Push(60.0304f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(-1481.471f);
	Stack.Push(-1895.701f);
	Stack.Push(54.6699f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(-1422.307f);
	Stack.Push(-1295.345f);
	Stack.Push(79.9456f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(-1164.6f);
	Stack.Push(812.0777f);
	Stack.Push(118.4599f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(-817.9949f);
	Stack.Push(1228.166f);
	Stack.Push(165.4198f);
	Stack.Push(15);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(-211.6961f);
	Stack.Push(1760.762f);
	Stack.Push(192.2563f);
	Stack.Push(16);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(2645.415f);
	Stack.Push(1322.111f);
	Stack.Push(111.4558f);
	Stack.Push(17);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(2668.904f);
	Stack.Push(1885.954f);
	Stack.Push(99.8509f);
	Stack.Push(18);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(1937.39f);
	Stack.Push(494.5891f);
	Stack.Push(129.4169f);
	Stack.Push(19);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(1000.586f);
	Stack.Push(-1297.523f);
	Stack.Push(54.0335f);
	Stack.Push(20);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(1279.088f);
	Stack.Push(-1602.72f);
	Stack.Push(64.2665f);
	Stack.Push(21);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(1467.28f);
	Stack.Push(-2234.456f);
	Stack.Push(42.7965f);
	Stack.Push(22);
	Call_Loc(iParam0);
	Stack.Push(3);
	Stack.Push(1845.744f);
	Stack.Push(-382.1896f);
	Stack.Push(42.0126f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(3);
	Stack.Push(1315.011f);
	Stack.Push(-1640.398f);
	Stack.Push(65.989f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(3);
	Stack.Push(782.4731f);
	Stack.Push(-904.5656f);
	Stack.Push(50.1819f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(3);
	Stack.Push(860.498f);
	Stack.Push(-535.0154f);
	Stack.Push(87.8863f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(3);
	Stack.Push(1385.528f);
	Stack.Push(-1699.039f);
	Stack.Push(66.6297f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(3);
	Stack.Push(1568.277f);
	Stack.Push(-1167.119f);
	Stack.Push(44.87f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(4);
	Stack.Push(-1670.333f);
	Stack.Push(266.4697f);
	Stack.Push(108.1011f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(4);
	Stack.Push(-1606.08f);
	Stack.Push(-600.0643f);
	Stack.Push(137.6851f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(4);
	Stack.Push(-1049.648f);
	Stack.Push(-241.2274f);
	Stack.Push(82.7866f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(4);
	Stack.Push(-1390.346f);
	Stack.Push(115.5974f);
	Stack.Push(84.4519f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(4);
	Stack.Push(-2065.955f);
	Stack.Push(-401.2512f);
	Stack.Push(163.9114f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(4);
	Stack.Push(-2036.99f);
	Stack.Push(-507.4617f);
	Stack.Push(149.6441f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(4);
	Stack.Push(1894.808f);
	Stack.Push(1525.642f);
	Stack.Push(190.2607f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(4);
	Stack.Push(1769.377f);
	Stack.Push(1642.661f);
	Stack.Push(175.514f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(4);
	Stack.Push(614.9883f);
	Stack.Push(1919.951f);
	Stack.Push(202.9879f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(4);
	Stack.Push(-885.1455f);
	Stack.Push(262.5286f);
	Stack.Push(89.5462f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(4);
	Stack.Push(2707.656f);
	Stack.Push(564.3442f);
	Stack.Push(83.4308f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(4);
	Stack.Push(2422.132f);
	Stack.Push(1697.106f);
	Stack.Push(95.8792f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(4);
	Stack.Push(2690.929f);
	Stack.Push(646.9717f);
	Stack.Push(75.0821f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(4);
	Stack.Push(2286.213f);
	Stack.Push(1649.257f);
	Stack.Push(84.9657f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(4);
	Stack.Push(2367.635f);
	Stack.Push(1067.088f);
	Stack.Push(83.5814f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(4);
	Stack.Push(2762.281f);
	Stack.Push(1014.418f);
	Stack.Push(61.2793f);
	Stack.Push(15);
	Call_Loc(iParam0);
	Stack.Push(4);
	Stack.Push(2014.741f);
	Stack.Push(68.3487f);
	Stack.Push(74.0225f);
	Stack.Push(16);
	Call_Loc(iParam0);
	Stack.Push(5);
	Stack.Push(2421.238f);
	Stack.Push(904.8784f);
	Stack.Push(72.1375f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(6);
	Stack.Push(1575.285f);
	Stack.Push(-7256.714f);
	Stack.Push(66.2668f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(6);
	Stack.Push(2581.069f);
	Stack.Push(624.2234f);
	Stack.Push(73.5388f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(6);
	Stack.Push(2418.696f);
	Stack.Push(1069.465f);
	Stack.Push(86.3128f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(-1170.479f);
	Stack.Push(-569.0327f);
	Stack.Push(89.3336f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(-2449.058f);
	Stack.Push(-291.0107f);
	Stack.Push(151.4994f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(-1720.802f);
	Stack.Push(-5.5522f);
	Stack.Push(162.8418f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(-880.1243f);
	Stack.Push(-362.286f);
	Stack.Push(42.7127f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(-1288.498f);
	Stack.Push(247.4669f);
	Stack.Push(58.5024f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(-1402.131f);
	Stack.Push(-849.902f);
	Stack.Push(82.4184f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(225.7709f);
	Stack.Push(1158.758f);
	Stack.Push(174.4377f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(650.7831f);
	Stack.Push(1401.268f);
	Stack.Push(181.6239f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(779.0355f);
	Stack.Push(1119.058f);
	Stack.Push(130.8968f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(1579.289f);
	Stack.Push(1602.642f);
	Stack.Push(147.0162f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(1567.098f);
	Stack.Push(935.3324f);
	Stack.Push(151.5608f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(2040.047f);
	Stack.Push(1491.969f);
	Stack.Push(156.9985f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(1833.187f);
	Stack.Push(1405.746f);
	Stack.Push(180.4263f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(1072.866f);
	Stack.Push(1883.61f);
	Stack.Push(319.825f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(140.3275f);
	Stack.Push(-473.635f);
	Stack.Push(67.9336f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(256.8135f);
	Stack.Push(677.2663f);
	Stack.Push(140.556f);
	Stack.Push(15);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(1261.531f);
	Stack.Push(110.901f);
	Stack.Push(92.27f);
	Stack.Push(16);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(2478.172f);
	Stack.Push(1372.623f);
	Stack.Push(104.4044f);
	Stack.Push(17);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(2876.074f);
	Stack.Push(823.1032f);
	Stack.Push(47.909f);
	Stack.Push(18);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(1966.588f);
	Stack.Push(174.9707f);
	Stack.Push(83.3576f);
	Stack.Push(19);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(2468.748f);
	Stack.Push(711.0537f);
	Stack.Push(70.8931f);
	Stack.Push(20);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(2195.63f);
	Stack.Push(1647.953f);
	Stack.Push(104.3184f);
	Stack.Push(21);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(2848.011f);
	Stack.Push(2102.51f);
	Stack.Push(158.2506f);
	Stack.Push(22);
	Call_Loc(iParam0);
	Stack.Push(8);
	Stack.Push(-3312.915f);
	Stack.Push(-2859.827f);
	Stack.Push(-6.4145f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(9);
	Stack.Push(2546.94f);
	Stack.Push(1819.922f);
	Stack.Push(85.0674f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(9);
	Stack.Push(2377.356f);
	Stack.Push(1070.137f);
	Stack.Push(84.0566f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(9);
	Stack.Push(2535.767f);
	Stack.Push(1513.889f);
	Stack.Push(84.9165f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(9);
	Stack.Push(2549.248f);
	Stack.Push(612.5594f);
	Stack.Push(73.8611f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(9);
	Stack.Push(2023.741f);
	Stack.Push(159.2145f);
	Stack.Push(78.313f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(9);
	Stack.Push(2813.322f);
	Stack.Push(688.974f);
	Stack.Push(68.6338f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(9);
	Stack.Push(2400.434f);
	Stack.Push(877.9274f);
	Stack.Push(73.1443f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(9);
	Stack.Push(2175.463f);
	Stack.Push(1745.422f);
	Stack.Push(119.0117f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(10);
	Stack.Push(914.288f);
	Stack.Push(-1205.978f);
	Stack.Push(50.759f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(10);
	Stack.Push(905.55f);
	Stack.Push(-1117.134f);
	Stack.Push(52.439f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(11);
	Stack.Push(2142.091f);
	Stack.Push(-1322.714f);
	Stack.Push(41.4496f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(11);
	Stack.Push(1712.28f);
	Stack.Push(-1928.207f);
	Stack.Push(46.2584f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(11);
	Stack.Push(807.8684f);
	Stack.Push(-873.498f);
	Stack.Push(52.0023f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(11);
	Stack.Push(1477.416f);
	Stack.Push(-832.9807f);
	Stack.Push(49.4009f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(-1306.382f);
	Stack.Push(113.2325f);
	Stack.Push(71.617f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(-1195.567f);
	Stack.Push(-348.8055f);
	Stack.Push(98.6331f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(-1631.463f);
	Stack.Push(-508.5251f);
	Stack.Push(147.7541f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(236.428f);
	Stack.Push(1172.058f);
	Stack.Push(174.6809f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(-865.4097f);
	Stack.Push(-1807.907f);
	Stack.Push(64.0395f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(-1407.439f);
	Stack.Push(-1969.719f);
	Stack.Push(43.6107f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(-556.52f);
	Stack.Push(-519.95f);
	Stack.Push(51.67f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(-487.89f);
	Stack.Push(-187.13f);
	Stack.Push(44.06f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(-590.1177f);
	Stack.Push(209.5994f);
	Stack.Push(43.5616f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(45.2288f);
	Stack.Push(-309.8703f);
	Stack.Push(100.0965f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(553.2196f);
	Stack.Push(-536.8489f);
	Stack.Push(76.4877f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(-1995.538f);
	Stack.Push(-1374.255f);
	Stack.Push(116.3711f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(-1714.634f);
	Stack.Push(-1728.958f);
	Stack.Push(87.8438f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(-2200.82f);
	Stack.Push(-1609.284f);
	Stack.Push(145.6673f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(-5709.795f);
	Stack.Push(-3189.099f);
	Stack.Push(-22.8911f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(-5399.68f);
	Stack.Push(-2344.885f);
	Stack.Push(-6.7089f);
	Stack.Push(15);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(-4239.465f);
	Stack.Push(-3047.282f);
	Stack.Push(-9.0733f);
	Stack.Push(16);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(-1641.005f);
	Stack.Push(-2451.688f);
	Stack.Push(42.6606f);
	Stack.Push(17);
	Call_Loc(iParam0);
	Stack.Push(13);
	Stack.Push(2670.833f);
	Stack.Push(-67.0281f);
	Stack.Push(48.336f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(13);
	Stack.Push(2576.186f);
	Stack.Push(-146.486f);
	Stack.Push(40.6007f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(13);
	Stack.Push(2528.167f);
	Stack.Push(-334.5139f);
	Stack.Push(40.5561f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(13);
	Stack.Push(2483.223f);
	Stack.Push(640.42f);
	Stack.Push(71.172f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(13);
	Stack.Push(2455.024f);
	Stack.Push(1296.882f);
	Stack.Push(105.8737f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(13);
	Stack.Push(2117.905f);
	Stack.Push(1061.24f);
	Stack.Push(122.0916f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(13);
	Stack.Push(2583.339f);
	Stack.Push(342.9637f);
	Stack.Push(75.1561f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(13);
	Stack.Push(2583.125f);
	Stack.Push(550.2842f);
	Stack.Push(71.8067f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(13);
	Stack.Push(2474.518f);
	Stack.Push(1548.916f);
	Stack.Push(84.656f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(13);
	Stack.Push(2253.517f);
	Stack.Push(1718.977f);
	Stack.Push(102.4056f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(13);
	Stack.Push(2159.47f);
	Stack.Push(929.917f);
	Stack.Push(115.51f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(13);
	Stack.Push(2483.802f);
	Stack.Push(982.8178f);
	Stack.Push(93.2f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(14);
	Stack.Push(-1489.081f);
	Stack.Push(-553.8191f);
	Stack.Push(131.9622f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(14);
	Stack.Push(-1756.841f);
	Stack.Push(274.1943f);
	Stack.Push(117.8263f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(14);
	Stack.Push(-2759.282f);
	Stack.Push(-152.587f);
	Stack.Push(151.1035f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(14);
	Stack.Push(-719.2486f);
	Stack.Push(-746.223f);
	Stack.Push(49.1092f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(14);
	Stack.Push(947.882f);
	Stack.Push(-1259.494f);
	Stack.Push(53.9254f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(14);
	Stack.Push(1089.484f);
	Stack.Push(-1413.609f);
	Stack.Push(55.7283f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(14);
	Stack.Push(1287.923f);
	Stack.Push(-1601.335f);
	Stack.Push(64.1793f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-6004.122f);
	Stack.Push(-3324.721f);
	Stack.Push(-22.3552f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-5710.4f);
	Stack.Push(-3611.259f);
	Stack.Push(-24.0623f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-6367.312f);
	Stack.Push(-3696.248f);
	Stack.Push(-26.9076f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-6181.481f);
	Stack.Push(-3434.711f);
	Stack.Push(10.3617f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-5445.042f);
	Stack.Push(-2381.805f);
	Stack.Push(-8.8016f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-5166.418f);
	Stack.Push(-4006.568f);
	Stack.Push(-2.0995f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-4750.027f);
	Stack.Push(-3503.733f);
	Stack.Push(6.4091f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-4635.242f);
	Stack.Push(-3155.196f);
	Stack.Push(8.7009f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-3333.342f);
	Stack.Push(-2281.94f);
	Stack.Push(-1.519f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-3970.378f);
	Stack.Push(-3056.023f);
	Stack.Push(-14.1397f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-3485.25f);
	Stack.Push(-2615.361f);
	Stack.Push(-13.7497f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-4624.896f);
	Stack.Push(-2718.001f);
	Stack.Push(-11.4759f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-3840.919f);
	Stack.Push(-2867.934f);
	Stack.Push(-16.9531f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-4294.354f);
	Stack.Push(-3060.137f);
	Stack.Push(-11.9705f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-3408.869f);
	Stack.Push(-2265.132f);
	Stack.Push(-4.672f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-3091.015f);
	Stack.Push(-3144.075f);
	Stack.Push(1.038f);
	Stack.Push(15);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-2437.71f);
	Stack.Push(-2588.429f);
	Stack.Push(78.7262f);
	Stack.Push(16);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-2567.323f);
	Stack.Push(-2494.148f);
	Stack.Push(65.939f);
	Stack.Push(17);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-2461.365f);
	Stack.Push(-2240.474f);
	Stack.Push(63.969f);
	Stack.Push(18);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-2409.346f);
	Stack.Push(-2617.091f);
	Stack.Push(80.418f);
	Stack.Push(19);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-1752.983f);
	Stack.Push(-2700.622f);
	Stack.Push(65.558f);
	Stack.Push(20);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(-1851.588f);
	Stack.Push(510.342f);
	Stack.Push(113.8007f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(-2696.748f);
	Stack.Push(-55.4263f);
	Stack.Push(152.7823f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(2608.757f);
	Stack.Push(-180.0931f);
	Stack.Push(43.1903f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(-1387.126f);
	Stack.Push(-1085.839f);
	Stack.Push(75.6182f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(-1152.193f);
	Stack.Push(-1798.524f);
	Stack.Push(60.6213f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(-1414.061f);
	Stack.Push(-1516.014f);
	Stack.Push(85.2022f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(293.0865f);
	Stack.Push(-28.2385f);
	Stack.Push(106.7794f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(862.3326f);
	Stack.Push(-96.2031f);
	Stack.Push(115.005f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(-603.3961f);
	Stack.Push(-400.8001f);
	Stack.Push(79.4605f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(791.0897f);
	Stack.Push(616.5367f);
	Stack.Push(119.004f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(-367.7098f);
	Stack.Push(-242.7611f);
	Stack.Push(87.375f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(797.4579f);
	Stack.Push(430.6508f);
	Stack.Push(106.9812f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(2094.507f);
	Stack.Push(181.8995f);
	Stack.Push(74.0113f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(2499.579f);
	Stack.Push(876.0915f);
	Stack.Push(72.6963f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(2716.55f);
	Stack.Push(2312.971f);
	Stack.Push(155.8205f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(2753.107f);
	Stack.Push(183.9333f);
	Stack.Push(50.8669f);
	Stack.Push(15);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(855.8201f);
	Stack.Push(-1136.222f);
	Stack.Push(57.4167f);
	Stack.Push(16);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(781.47f);
	Stack.Push(-819.1086f);
	Stack.Push(54.7764f);
	Stack.Push(17);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(1143.297f);
	Stack.Push(-784.0272f);
	Stack.Push(89.0981f);
	Stack.Push(18);
	Call_Loc(iParam0);
	Stack.Push(17);
	Stack.Push(1895.321f);
	Stack.Push(-1591.593f);
	Stack.Push(43.1308f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(17);
	Stack.Push(1750.934f);
	Stack.Push(-1113.128f);
	Stack.Push(41.0289f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(17);
	Stack.Push(222.5815f);
	Stack.Push(1149.064f);
	Stack.Push(174.777f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(17);
	Stack.Push(643.9483f);
	Stack.Push(1537.771f);
	Stack.Push(179.2453f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(17);
	Stack.Push(1249.946f);
	Stack.Push(1228.457f);
	Stack.Push(149.847f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(17);
	Stack.Push(1888.344f);
	Stack.Push(1412.769f);
	Stack.Push(176.1192f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(17);
	Stack.Push(881.3965f);
	Stack.Push(832.8646f);
	Stack.Push(115.2099f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(17);
	Stack.Push(205.5776f);
	Stack.Push(-492.6277f);
	Stack.Push(71.7359f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(17);
	Stack.Push(1086.457f);
	Stack.Push(1232.933f);
	Stack.Push(194.9449f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(17);
	Stack.Push(1449.297f);
	Stack.Push(-394.4464f);
	Stack.Push(79.9583f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(17);
	Stack.Push(1524.993f);
	Stack.Push(-1166.959f);
	Stack.Push(51.2036f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(17);
	Stack.Push(1197.925f);
	Stack.Push(-734.7637f);
	Stack.Push(77.7386f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(18);
	Stack.Push(2080.316f);
	Stack.Push(-1506.239f);
	Stack.Push(40.6063f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(18);
	Stack.Push(1953.527f);
	Stack.Push(-1641.328f);
	Stack.Push(40.6f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(18);
	Stack.Push(2119.107f);
	Stack.Push(-1219.469f);
	Stack.Push(40.5981f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(18);
	Stack.Push(2825.327f);
	Stack.Push(59.2099f);
	Stack.Push(44.5063f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(18);
	Stack.Push(2679.948f);
	Stack.Push(-578.2466f);
	Stack.Push(41.2777f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(18);
	Stack.Push(1553.726f);
	Stack.Push(-1050.726f);
	Stack.Push(43.0253f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(18);
	Stack.Push(1664.248f);
	Stack.Push(-648.8722f);
	Stack.Push(42.21f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(19);
	Stack.Push(1553.265f);
	Stack.Push(-1413.049f);
	Stack.Push(60.7066f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(20);
	Stack.Push(-1790.522f);
	Stack.Push(391.7672f);
	Stack.Push(111.5168f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(20);
	Stack.Push(-2257.545f);
	Stack.Push(522.8431f);
	Stack.Push(118.2666f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(20);
	Stack.Push(-2027.111f);
	Stack.Push(523.7131f);
	Stack.Push(115.7621f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(20);
	Stack.Push(-1617.713f);
	Stack.Push(-586.0815f);
	Stack.Push(138.1433f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(20);
	Stack.Push(-1651.088f);
	Stack.Push(-200.7669f);
	Stack.Push(169.3779f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(20);
	Stack.Push(337.933f);
	Stack.Push(1066.953f);
	Stack.Push(186.7877f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(20);
	Stack.Push(365.0997f);
	Stack.Push(1012.086f);
	Stack.Push(189.1479f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(20);
	Stack.Push(803.338f);
	Stack.Push(1073.402f);
	Stack.Push(121.7332f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(20);
	Stack.Push(-1288.621f);
	Stack.Push(-1028.793f);
	Stack.Push(70.6405f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(20);
	Stack.Push(-1138.14f);
	Stack.Push(-1667.854f);
	Stack.Push(72.6074f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(20);
	Stack.Push(-339.4998f);
	Stack.Push(20.8646f);
	Stack.Push(42.7751f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(20);
	Stack.Push(1265.752f);
	Stack.Push(825.5964f);
	Stack.Push(100.082f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(20);
	Stack.Push(-686.8791f);
	Stack.Push(-446.1221f);
	Stack.Push(50.8213f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(20);
	Stack.Push(2556.097f);
	Stack.Push(1203.034f);
	Stack.Push(162.9738f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(20);
	Stack.Push(2098.175f);
	Stack.Push(328.825f);
	Stack.Push(76.9f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(20);
	Stack.Push(1295.438f);
	Stack.Push(-782.6951f);
	Stack.Push(74.8111f);
	Stack.Push(15);
	Call_Loc(iParam0);
	Stack.Push(20);
	Stack.Push(769.7879f);
	Stack.Push(-889.8244f);
	Stack.Push(49.77f);
	Stack.Push(16);
	Call_Loc(iParam0);
	Stack.Push(21);
	Stack.Push(-1598.758f);
	Stack.Push(1837.399f);
	Stack.Push(298.0538f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(21);
	Stack.Push(-974.2156f);
	Stack.Push(2660.971f);
	Stack.Push(319.8254f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(21);
	Stack.Push(-1219.986f);
	Stack.Push(2100f);
	Stack.Push(339.3748f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(22);
	Stack.Push(1530.94f);
	Stack.Push(-7293.91f);
	Stack.Push(72.84f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(23);
	Stack.Push(1618.318f);
	Stack.Push(-1818.743f);
	Stack.Push(49.6597f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(23);
	Stack.Push(2033.182f);
	Stack.Push(-427.7802f);
	Stack.Push(41.6463f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(23);
	Stack.Push(2164.61f);
	Stack.Push(-960.8591f);
	Stack.Push(41.7505f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(23);
	Stack.Push(2587.608f);
	Stack.Push(-733.6299f);
	Stack.Push(41.4225f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(23);
	Stack.Push(2554.041f);
	Stack.Push(-189.0652f);
	Stack.Push(42.1887f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(23);
	Stack.Push(586.9903f);
	Stack.Push(-520.9417f);
	Stack.Push(76.1102f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(23);
	Stack.Push(1143.783f);
	Stack.Push(-36.1089f);
	Stack.Push(88.0587f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(23);
	Stack.Push(1666.967f);
	Stack.Push(74.2819f);
	Stack.Push(76.1463f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(23);
	Stack.Push(2080f);
	Stack.Push(-230.5491f);
	Stack.Push(45.829f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(23);
	Stack.Push(2696.571f);
	Stack.Push(180.1419f);
	Stack.Push(52.5405f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(23);
	Stack.Push(2581.068f);
	Stack.Push(533.5328f);
	Stack.Push(70.1641f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(23);
	Stack.Push(2855.96f);
	Stack.Push(760.7198f);
	Stack.Push(55.2413f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(23);
	Stack.Push(1527.606f);
	Stack.Push(-1702.616f);
	Stack.Push(58.085f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(23);
	Stack.Push(1213.094f);
	Stack.Push(-1589.716f);
	Stack.Push(55.9733f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(23);
	Stack.Push(1513.254f);
	Stack.Push(-2005.747f);
	Stack.Push(43.0278f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(23);
	Stack.Push(1062.177f);
	Stack.Push(-1341.672f);
	Stack.Push(56.9639f);
	Stack.Push(15);
	Call_Loc(iParam0);
	Stack.Push(23);
	Stack.Push(1156.332f);
	Stack.Push(-1160.091f);
	Stack.Push(70.2091f);
	Stack.Push(16);
	Call_Loc(iParam0);
	Stack.Push(24);
	Stack.Push(-808.5091f);
	Stack.Push(-361.2252f);
	Stack.Push(40.6701f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(24);
	Stack.Push(-2151.432f);
	Stack.Push(532.3184f);
	Stack.Push(115.9584f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(24);
	Stack.Push(-1943.116f);
	Stack.Push(581.7615f);
	Stack.Push(114.4217f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(24);
	Stack.Push(-935.6732f);
	Stack.Push(-837.0477f);
	Stack.Push(42.0009f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(24);
	Stack.Push(1588.625f);
	Stack.Push(1549.986f);
	Stack.Push(144.8906f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(24);
	Stack.Push(601.0182f);
	Stack.Push(2291.333f);
	Stack.Push(221.6742f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(24);
	Stack.Push(-469.3123f);
	Stack.Push(192.8325f);
	Stack.Push(40.5531f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(24);
	Stack.Push(-719.5849f);
	Stack.Push(157.3127f);
	Stack.Push(41.0625f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(24);
	Stack.Push(-788.1081f);
	Stack.Push(584.9224f);
	Stack.Push(55.66f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(24);
	Stack.Push(-611.343f);
	Stack.Push(-255.1613f);
	Stack.Push(40.9699f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(24);
	Stack.Push(2818.075f);
	Stack.Push(2302.018f);
	Stack.Push(156.0063f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(24);
	Stack.Push(2486.622f);
	Stack.Push(1697.184f);
	Stack.Push(85.6145f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(24);
	Stack.Push(2287.72f);
	Stack.Push(273.7723f);
	Stack.Push(43.7751f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(24);
	Stack.Push(2421.89f);
	Stack.Push(674.4467f);
	Stack.Push(66.5993f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(27);
	Stack.Push(1908.322f);
	Stack.Push(-1583.275f);
	Stack.Push(42.6331f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(27);
	Stack.Push(-1738.734f);
	Stack.Push(391.4279f);
	Stack.Push(108.8374f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(27);
	Stack.Push(-1130.605f);
	Stack.Push(460.2371f);
	Stack.Push(56.677f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(27);
	Stack.Push(-1731.106f);
	Stack.Push(-832.389f);
	Stack.Push(97.45f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(27);
	Stack.Push(-1555.696f);
	Stack.Push(153.446f);
	Stack.Push(104.902f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(27);
	Stack.Push(703.0021f);
	Stack.Push(1421.519f);
	Stack.Push(177.4066f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(27);
	Stack.Push(1481.706f);
	Stack.Push(1013.085f);
	Stack.Push(167.6041f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(27);
	Stack.Push(2159.43f);
	Stack.Push(444.6013f);
	Stack.Push(83.4389f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(27);
	Stack.Push(1688.494f);
	Stack.Push(-1617.637f);
	Stack.Push(52.7785f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(27);
	Stack.Push(1548.366f);
	Stack.Push(-1415.864f);
	Stack.Push(61.3286f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(27);
	Stack.Push(860.2926f);
	Stack.Push(-890.3083f);
	Stack.Push(51.4971f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(28);
	Stack.Push(1899.5f);
	Stack.Push(-1596.739f);
	Stack.Push(42.7911f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(28);
	Stack.Push(1978.789f);
	Stack.Push(-1533.755f);
	Stack.Push(42.5017f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(28);
	Stack.Push(-1274.549f);
	Stack.Push(-636.8499f);
	Stack.Push(98.9627f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(28);
	Stack.Push(-793.994f);
	Stack.Push(-543.3228f);
	Stack.Push(49.025f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(28);
	Stack.Push(-1183.022f);
	Stack.Push(-729.2754f);
	Stack.Push(69.6085f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(29);
	Stack.Push(1778.489f);
	Stack.Push(583.673f);
	Stack.Push(105.025f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(29);
	Stack.Push(2452.811f);
	Stack.Push(1319.446f);
	Stack.Push(109.0229f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(29);
	Stack.Push(2841.746f);
	Stack.Push(652.1951f);
	Stack.Push(66.7278f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(29);
	Stack.Push(2660.135f);
	Stack.Push(905.5285f);
	Stack.Push(88.9396f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(29);
	Stack.Push(2372.003f);
	Stack.Push(259.5193f);
	Stack.Push(52.9521f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(29);
	Stack.Push(2700.789f);
	Stack.Push(175.9979f);
	Stack.Push(52.5134f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(29);
	Stack.Push(2493.144f);
	Stack.Push(1530.348f);
	Stack.Push(84.2657f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(29);
	Stack.Push(2294.375f);
	Stack.Push(1737.66f);
	Stack.Push(104.3616f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2451.831f);
	Stack.Push(-694.8572f);
	Stack.Push(41.7577f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(1806.486f);
	Stack.Push(-909.022f);
	Stack.Push(40.684f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2099.89f);
	Stack.Push(-742.7548f);
	Stack.Push(40.7194f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(1661.235f);
	Stack.Push(-1011.618f);
	Stack.Push(40.7948f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(1704.734f);
	Stack.Push(-749.9987f);
	Stack.Push(40.8083f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2481.833f);
	Stack.Push(-765.1003f);
	Stack.Push(41.4476f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2521.163f);
	Stack.Push(-601.1032f);
	Stack.Push(41.3867f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(1623.726f);
	Stack.Push(-892.3166f);
	Stack.Push(40.5351f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(1938.589f);
	Stack.Push(-936.7589f);
	Stack.Push(42.0285f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2103.147f);
	Stack.Push(-826.2164f);
	Stack.Push(40.4883f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2299.401f);
	Stack.Push(-941.739f);
	Stack.Push(41.1985f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2135.017f);
	Stack.Push(-411.8303f);
	Stack.Push(40.5284f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2638.828f);
	Stack.Push(-87.0254f);
	Stack.Push(47.6561f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2292.579f);
	Stack.Push(-444.8728f);
	Stack.Push(40.562f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2259.443f);
	Stack.Push(-453.3075f);
	Stack.Push(40.5554f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2585.694f);
	Stack.Push(-420.4027f);
	Stack.Push(40.8495f);
	Stack.Push(15);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2554.56f);
	Stack.Push(-187.4132f);
	Stack.Push(42.1266f);
	Stack.Push(16);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2526.531f);
	Stack.Push(-353.9748f);
	Stack.Push(40.6981f);
	Stack.Push(17);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2630.492f);
	Stack.Push(-597.4164f);
	Stack.Push(41.8853f);
	Stack.Push(18);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(-1376.207f);
	Stack.Push(-1428.625f);
	Stack.Push(91.0319f);
	Stack.Push(19);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(-955.4411f);
	Stack.Push(-1810.143f);
	Stack.Push(63.6946f);
	Stack.Push(20);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(-1810.028f);
	Stack.Push(-1297.722f);
	Stack.Push(92.8288f);
	Stack.Push(21);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(-1461.389f);
	Stack.Push(-1766.659f);
	Stack.Push(81.9412f);
	Stack.Push(22);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(-1427.516f);
	Stack.Push(-1290.821f);
	Stack.Push(79.5031f);
	Stack.Push(23);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(-1214.44f);
	Stack.Push(-1818.796f);
	Stack.Push(60.5434f);
	Stack.Push(24);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(-1563.774f);
	Stack.Push(-1771.393f);
	Stack.Push(75.6756f);
	Stack.Push(25);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2649.111f);
	Stack.Push(1781.49f);
	Stack.Push(102.1629f);
	Stack.Push(26);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2677.185f);
	Stack.Push(584.6865f);
	Stack.Push(79.9779f);
	Stack.Push(27);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2972.095f);
	Stack.Push(1738.852f);
	Stack.Push(80.5676f);
	Stack.Push(28);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2472.802f);
	Stack.Push(1339.029f);
	Stack.Push(107.3666f);
	Stack.Push(29);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2120.886f);
	Stack.Push(1483.531f);
	Stack.Push(134.6718f);
	Stack.Push(30);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(1971.526f);
	Stack.Push(345.8105f);
	Stack.Push(95.6928f);
	Stack.Push(31);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2725.853f);
	Stack.Push(79.9931f);
	Stack.Push(49.5786f);
	Stack.Push(32);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2578.825f);
	Stack.Push(1660.518f);
	Stack.Push(96.5618f);
	Stack.Push(33);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2581.905f);
	Stack.Push(1501.502f);
	Stack.Push(84.288f);
	Stack.Push(34);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2775.786f);
	Stack.Push(634.1282f);
	Stack.Push(72.6738f);
	Stack.Push(35);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2862.79f);
	Stack.Push(1899.816f);
	Stack.Push(136.0872f);
	Stack.Push(36);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(1961.378f);
	Stack.Push(237.7049f);
	Stack.Push(76.7114f);
	Stack.Push(37);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(-1753.305f);
	Stack.Push(146.6236f);
	Stack.Push(146.6423f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(-2089.682f);
	Stack.Push(-316.9403f);
	Stack.Push(178.7293f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(-1208.601f);
	Stack.Push(-758.1407f);
	Stack.Push(65.8343f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(-1206.856f);
	Stack.Push(3.6938f);
	Stack.Push(42.2146f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(-727.5645f);
	Stack.Push(78.6521f);
	Stack.Push(43.852f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(2708.448f);
	Stack.Push(-35.6544f);
	Stack.Push(50.5802f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(2416.581f);
	Stack.Push(-379.576f);
	Stack.Push(40.716f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(349.6191f);
	Stack.Push(1193.652f);
	Stack.Push(176.0611f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(585.87f);
	Stack.Push(1359.454f);
	Stack.Push(182.2413f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(788.2601f);
	Stack.Push(1308.543f);
	Stack.Push(153.7073f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(644.4541f);
	Stack.Push(1846.399f);
	Stack.Push(204.6257f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(1169.932f);
	Stack.Push(1240.534f);
	Stack.Push(170.1918f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(2191.762f);
	Stack.Push(2086.923f);
	Stack.Push(221.6624f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(2577.981f);
	Stack.Push(953.2261f);
	Stack.Push(105.2313f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(1773.011f);
	Stack.Push(-2021.675f);
	Stack.Push(43.2631f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(1469.278f);
	Stack.Push(-1891.963f);
	Stack.Push(47.8324f);
	Stack.Push(15);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(1060.511f);
	Stack.Push(-486.7928f);
	Stack.Push(88.3641f);
	Stack.Push(16);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(1689.182f);
	Stack.Push(-323.7361f);
	Stack.Push(64.2249f);
	Stack.Push(17);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(1495.935f);
	Stack.Push(-1965.426f);
	Stack.Push(44.0482f);
	Stack.Push(18);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(1129.575f);
	Stack.Push(-637.7903f);
	Stack.Push(87.3996f);
	Stack.Push(19);
	Call_Loc(iParam0);
	Stack.Push(32);
	Stack.Push(-1470.029f);
	Stack.Push(-510.0777f);
	Stack.Push(128.9369f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(32);
	Stack.Push(-1676.732f);
	Stack.Push(269.6552f);
	Stack.Push(107.9641f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(32);
	Stack.Push(-1400.932f);
	Stack.Push(118.5333f);
	Stack.Push(85.1616f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(32);
	Stack.Push(2530.93f);
	Stack.Push(-88.8537f);
	Stack.Push(49.5429f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(32);
	Stack.Push(-579.085f);
	Stack.Push(571.1768f);
	Stack.Push(101.2385f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(32);
	Stack.Push(-976.4532f);
	Stack.Push(250.0307f);
	Stack.Push(90.9676f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(32);
	Stack.Push(2154.953f);
	Stack.Push(55.197f);
	Stack.Push(61.5309f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(32);
	Stack.Push(906.4382f);
	Stack.Push(-1278.892f);
	Stack.Push(59.6485f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(32);
	Stack.Push(1700.312f);
	Stack.Push(-1814.466f);
	Stack.Push(49.983f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(32);
	Stack.Push(996.5635f);
	Stack.Push(-1219.119f);
	Stack.Push(62.015f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(33);
	Stack.Push(-1374.053f);
	Stack.Push(-741.9763f);
	Stack.Push(90.7132f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(33);
	Stack.Push(-1668.017f);
	Stack.Push(269.834f);
	Stack.Push(107.7686f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(33);
	Stack.Push(-1400.438f);
	Stack.Push(116.6743f);
	Stack.Push(84.7002f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(33);
	Stack.Push(-1117.848f);
	Stack.Push(-223.7487f);
	Stack.Push(89.4773f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(33);
	Stack.Push(-1479.688f);
	Stack.Push(-598.915f);
	Stack.Push(125.9951f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(33);
	Stack.Push(-579.085f);
	Stack.Push(571.1768f);
	Stack.Push(101.2385f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(33);
	Stack.Push(2148.963f);
	Stack.Push(41.925f);
	Stack.Push(62.1145f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(33);
	Stack.Push(2549.044f);
	Stack.Push(-68.0443f);
	Stack.Push(49.1493f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(33);
	Stack.Push(903.9188f);
	Stack.Push(-1282.179f);
	Stack.Push(60.0311f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(33);
	Stack.Push(1700.491f);
	Stack.Push(-1813.515f);
	Stack.Push(50.0697f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(33);
	Stack.Push(1443.971f);
	Stack.Push(-978.0084f);
	Stack.Push(55.8531f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(33);
	Stack.Push(910.3932f);
	Stack.Push(-985.9777f);
	Stack.Push(56.96f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(33);
	Stack.Push(996.5635f);
	Stack.Push(-1219.119f);
	Stack.Push(62.015f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(34);
	Stack.Push(-1473.219f);
	Stack.Push(-503.3281f);
	Stack.Push(129.027f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(34);
	Stack.Push(-1793.936f);
	Stack.Push(458.5961f);
	Stack.Push(111.7438f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(34);
	Stack.Push(-1315f);
	Stack.Push(180.6012f);
	Stack.Push(74.4296f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(34);
	Stack.Push(2626.8f);
	Stack.Push(-37.336f);
	Stack.Push(51.4288f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(34);
	Stack.Push(858.6367f);
	Stack.Push(-228.3782f);
	Stack.Push(98.6164f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(34);
	Stack.Push(-565.9604f);
	Stack.Push(576.061f);
	Stack.Push(101.54f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(34);
	Stack.Push(-405.8459f);
	Stack.Push(-280.6045f);
	Stack.Push(87.186f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(34);
	Stack.Push(2103.375f);
	Stack.Push(72.0044f);
	Stack.Push(68.6537f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(34);
	Stack.Push(1046.873f);
	Stack.Push(-188.8466f);
	Stack.Push(89.4694f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(34);
	Stack.Push(704.4484f);
	Stack.Push(-891.234f);
	Stack.Push(48.262f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(34);
	Stack.Push(994.157f);
	Stack.Push(-1220.112f);
	Stack.Push(62.0152f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(35);
	Stack.Push(-2432.816f);
	Stack.Push(600.1653f);
	Stack.Push(126.3298f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(35);
	Stack.Push(-1603.924f);
	Stack.Push(363.9144f);
	Stack.Push(103.3773f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(36);
	Stack.Push(2141.337f);
	Stack.Push(-1296.338f);
	Stack.Push(41.4747f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(36);
	Stack.Push(2038.361f);
	Stack.Push(-1036.623f);
	Stack.Push(42.4476f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(36);
	Stack.Push(-2592.207f);
	Stack.Push(235.6836f);
	Stack.Push(152.3149f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(36);
	Stack.Push(-2301.542f);
	Stack.Push(-73.6087f);
	Stack.Push(237.0601f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(36);
	Stack.Push(-840.8934f);
	Stack.Push(-203.1287f);
	Stack.Push(76.5716f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(36);
	Stack.Push(-1570.955f);
	Stack.Push(424.7976f);
	Stack.Push(106.8498f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(36);
	Stack.Push(2629.543f);
	Stack.Push(-54.2829f);
	Stack.Push(50.7092f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(36);
	Stack.Push(777.232f);
	Stack.Push(-794.2211f);
	Stack.Push(55.6016f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(36);
	Stack.Push(879.1506f);
	Stack.Push(-1217.032f);
	Stack.Push(50.0378f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(36);
	Stack.Push(1589.294f);
	Stack.Push(-1813.654f);
	Stack.Push(50.6747f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(36);
	Stack.Push(1400.936f);
	Stack.Push(-1723.739f);
	Stack.Push(67.604f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(36);
	Stack.Push(1529.042f);
	Stack.Push(-986.2963f);
	Stack.Push(43.2569f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(1718.584f);
	Stack.Push(-1134.763f);
	Stack.Push(40.9841f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(2212.391f);
	Stack.Push(-958.284f);
	Stack.Push(40.9437f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(2061.675f);
	Stack.Push(-1028.883f);
	Stack.Push(42.225f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(2629.915f);
	Stack.Push(-65.2306f);
	Stack.Push(50.3571f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(2539.124f);
	Stack.Push(-164.4422f);
	Stack.Push(43.1456f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(-641.5084f);
	Stack.Push(379.0181f);
	Stack.Push(92.4459f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(756.8406f);
	Stack.Push(-354.5884f);
	Stack.Push(87.6244f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(879.8415f);
	Stack.Push(-140.9315f);
	Stack.Push(102.0446f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(-293.7909f);
	Stack.Push(-257.8938f);
	Stack.Push(91.332f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(153.8465f);
	Stack.Push(427.3995f);
	Stack.Push(137.5257f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(-919.447f);
	Stack.Push(67.989f);
	Stack.Push(47.314f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(465.0752f);
	Stack.Push(-307.1457f);
	Stack.Push(142.7813f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(-1072.983f);
	Stack.Push(30.6801f);
	Stack.Push(57.1764f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(1395.396f);
	Stack.Push(-1661.043f);
	Stack.Push(66.2903f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(1607.903f);
	Stack.Push(-1715.203f);
	Stack.Push(53.2411f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(839.8502f);
	Stack.Push(-990.9603f);
	Stack.Push(52.3822f);
	Stack.Push(15);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(1112.213f);
	Stack.Push(-893.3633f);
	Stack.Push(66.7555f);
	Stack.Push(16);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(1637.335f);
	Stack.Push(-1590.077f);
	Stack.Push(56.6167f);
	Stack.Push(17);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(1491.923f);
	Stack.Push(-1978.365f);
	Stack.Push(43.8377f);
	Stack.Push(18);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(1120.71f);
	Stack.Push(-2130.175f);
	Stack.Push(51.9952f);
	Stack.Push(19);
	Call_Loc(iParam0);
	Stack.Push(38);
	Stack.Push(-989.522f);
	Stack.Push(2219.715f);
	Stack.Push(339.224f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(39);
	Stack.Push(-1456.041f);
	Stack.Push(-555.2747f);
	Stack.Push(131.116f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(40);
	Stack.Push(2208.668f);
	Stack.Push(-350.9536f);
	Stack.Push(41.488f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(40);
	Stack.Push(1733.923f);
	Stack.Push(-727.6727f);
	Stack.Push(40.8996f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(40);
	Stack.Push(-2028.171f);
	Stack.Push(421.7315f);
	Stack.Push(123.1801f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(40);
	Stack.Push(238.8146f);
	Stack.Push(1242.903f);
	Stack.Push(185.8171f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(40);
	Stack.Push(646.006f);
	Stack.Push(1304.928f);
	Stack.Push(193.4366f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(40);
	Stack.Push(438.9673f);
	Stack.Push(831.1111f);
	Stack.Push(145.7085f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(40);
	Stack.Push(-545.762f);
	Stack.Push(393.6189f);
	Stack.Push(87.0076f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(40);
	Stack.Push(1017.37f);
	Stack.Push(1062.322f);
	Stack.Push(158.965f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(40);
	Stack.Push(2226.213f);
	Stack.Push(-248.6621f);
	Stack.Push(42.5431f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(40);
	Stack.Push(2566.893f);
	Stack.Push(-71.0977f);
	Stack.Push(49.3333f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(40);
	Stack.Push(1389.072f);
	Stack.Push(-2196.696f);
	Stack.Push(48.3307f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(40);
	Stack.Push(906.9065f);
	Stack.Push(-987.0414f);
	Stack.Push(56.96f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(41);
	Stack.Push(-1423.563f);
	Stack.Push(239.8399f);
	Stack.Push(97.1072f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(41);
	Stack.Push(-159.2655f);
	Stack.Push(495.2184f);
	Stack.Push(103.6956f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(41);
	Stack.Push(1449.437f);
	Stack.Push(-1948.466f);
	Stack.Push(52.2016f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(42);
	Stack.Push(716.5029f);
	Stack.Push(-1515.26f);
	Stack.Push(40.525f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(2183.656f);
	Stack.Push(-465.3446f);
	Stack.Push(40.7656f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(1788.349f);
	Stack.Push(-1018.902f);
	Stack.Push(40.8415f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(-1339.337f);
	Stack.Push(-1786.202f);
	Stack.Push(75.749f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(-1473.819f);
	Stack.Push(-1224.915f);
	Stack.Push(76.4906f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(1844.906f);
	Stack.Push(1618.283f);
	Stack.Push(168.6082f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(1486.028f);
	Stack.Push(2053.414f);
	Stack.Push(295.9742f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(-469.4519f);
	Stack.Push(304.8075f);
	Stack.Push(43.7138f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(467.632f);
	Stack.Push(-1.275f);
	Stack.Push(109.2541f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(18.9602f);
	Stack.Push(-455.7956f);
	Stack.Push(71.8724f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(1809.049f);
	Stack.Push(888.507f);
	Stack.Push(108.648f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(2046.033f);
	Stack.Push(21.8134f);
	Stack.Push(68.6331f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(2658.786f);
	Stack.Push(2260.44f);
	Stack.Push(160.2564f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(2772.743f);
	Stack.Push(1743.278f);
	Stack.Push(148.0157f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(2381.888f);
	Stack.Push(744.0209f);
	Stack.Push(66.541f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(1633.626f);
	Stack.Push(-2060.823f);
	Stack.Push(41.0693f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(1660.104f);
	Stack.Push(-514.8263f);
	Stack.Push(46.409f);
	Stack.Push(15);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(1032.549f);
	Stack.Push(-509.7064f);
	Stack.Push(90.0929f);
	Stack.Push(16);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(-5174.4f);
	Stack.Push(-2874.985f);
	Stack.Push(2.1226f);
	Stack.Push(17);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(-5601.053f);
	Stack.Push(-3600.778f);
	Stack.Push(-22.9655f);
	Stack.Push(18);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(-4985.12f);
	Stack.Push(-3303.439f);
	Stack.Push(6.1895f);
	Stack.Push(19);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(-4584.132f);
	Stack.Push(-3523.23f);
	Stack.Push(21.2202f);
	Stack.Push(20);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(-5231.253f);
	Stack.Push(-3974.581f);
	Stack.Push(-3.2106f);
	Stack.Push(21);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(-3849.781f);
	Stack.Push(-3109.601f);
	Stack.Push(-15.0322f);
	Stack.Push(22);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(-3149.559f);
	Stack.Push(-3100.046f);
	Stack.Push(-0.5091f);
	Stack.Push(23);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(-4278.774f);
	Stack.Push(-2701.909f);
	Stack.Push(-0.6108f);
	Stack.Push(24);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(-1834.618f);
	Stack.Push(-2489.122f);
	Stack.Push(46.0804f);
	Stack.Push(25);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(-3049.309f);
	Stack.Push(-2576.23f);
	Stack.Push(67.394f);
	Stack.Push(26);
	Call_Loc(iParam0);
	Stack.Push(44);
	Stack.Push(-1515.412f);
	Stack.Push(170.3214f);
	Stack.Push(98.5217f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(44);
	Stack.Push(-1419.13f);
	Stack.Push(317.7131f);
	Stack.Push(91.6105f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(44);
	Stack.Push(-828.3855f);
	Stack.Push(-609.4851f);
	Stack.Push(57.7383f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(44);
	Stack.Push(-1013.295f);
	Stack.Push(124.4212f);
	Stack.Push(70.5694f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(44);
	Stack.Push(85.724f);
	Stack.Push(416.6526f);
	Stack.Push(126.8382f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(44);
	Stack.Push(-634.6064f);
	Stack.Push(-477.0305f);
	Stack.Push(49.1578f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(44);
	Stack.Push(1625.168f);
	Stack.Push(-1794.723f);
	Stack.Push(51.3532f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(44);
	Stack.Push(814.0527f);
	Stack.Push(-811.9885f);
	Stack.Push(58.0703f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(44);
	Stack.Push(1610.171f);
	Stack.Push(-583.1312f);
	Stack.Push(46.2253f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(45);
	Stack.Push(1675.267f);
	Stack.Push(-1104.612f);
	Stack.Push(40.7606f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(45);
	Stack.Push(1662.519f);
	Stack.Push(-762.8489f);
	Stack.Push(40.7127f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(45);
	Stack.Push(2058.989f);
	Stack.Push(-401.0824f);
	Stack.Push(43.2562f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(45);
	Stack.Push(-275.708f);
	Stack.Push(-244.8788f);
	Stack.Push(89.9711f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(45);
	Stack.Push(311.6604f);
	Stack.Push(709.7629f);
	Stack.Push(145.6169f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(45);
	Stack.Push(557.3143f);
	Stack.Push(907.3863f);
	Stack.Push(146.6003f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(45);
	Stack.Push(-394.3352f);
	Stack.Push(145.0423f);
	Stack.Push(42.1403f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(45);
	Stack.Push(485.5268f);
	Stack.Push(182.236f);
	Stack.Push(113.8813f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(45);
	Stack.Push(1093.637f);
	Stack.Push(-31.2284f);
	Stack.Push(85.7352f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(45);
	Stack.Push(12.4028f);
	Stack.Push(-471.2083f);
	Stack.Push(72.0078f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(45);
	Stack.Push(1429.055f);
	Stack.Push(-347.5579f);
	Stack.Push(84.7219f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(45);
	Stack.Push(1064.059f);
	Stack.Push(-405.4702f);
	Stack.Push(91.0363f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(45);
	Stack.Push(1640.565f);
	Stack.Push(-219.4766f);
	Stack.Push(75.7454f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(45);
	Stack.Push(1677.664f);
	Stack.Push(-1723.655f);
	Stack.Push(51.8664f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(45);
	Stack.Push(1208.311f);
	Stack.Push(-2130.152f);
	Stack.Push(52.2418f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(46);
	Stack.Push(2688.845f);
	Stack.Push(2094.202f);
	Stack.Push(97.5463f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(46);
	Stack.Push(-2238.875f);
	Stack.Push(-1501.776f);
	Stack.Push(141.4098f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(47);
	Stack.Push(2688.845f);
	Stack.Push(2094.202f);
	Stack.Push(98.1463f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(47);
	Stack.Push(2688.845f);
	Stack.Push(2094.202f);
	Stack.Push(98.1463f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(48);
	Stack.Push(1891.322f);
	Stack.Push(-935.3073f);
	Stack.Push(41.8009f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(48);
	Stack.Push(2056.889f);
	Stack.Push(-1046.061f);
	Stack.Push(42.3639f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(48);
	Stack.Push(2470.6f);
	Stack.Push(974.4517f);
	Stack.Push(93.5671f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(48);
	Stack.Push(2577.967f);
	Stack.Push(476.1377f);
	Stack.Push(65.5212f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(48);
	Stack.Push(1452.328f);
	Stack.Push(-750.2531f);
	Stack.Push(54.1882f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(48);
	Stack.Push(1082.05f);
	Stack.Push(-474.3245f);
	Stack.Push(87.6101f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(48);
	Stack.Push(1633.141f);
	Stack.Push(-509.7347f);
	Stack.Push(47.6921f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(48);
	Stack.Push(1105.353f);
	Stack.Push(-887.1132f);
	Stack.Push(66.9528f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(48);
	Stack.Push(2016.224f);
	Stack.Push(-1488.948f);
	Stack.Push(41.5781f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(49);
	Stack.Push(-1674.791f);
	Stack.Push(333.9579f);
	Stack.Push(105.6924f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(49);
	Stack.Push(-511.2702f);
	Stack.Push(-88.7684f);
	Stack.Push(44.1198f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(49);
	Stack.Push(-542.9289f);
	Stack.Push(258.9346f);
	Stack.Push(43.4502f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(49);
	Stack.Push(503.6389f);
	Stack.Push(959.0621f);
	Stack.Push(156.7788f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(49);
	Stack.Push(14.1111f);
	Stack.Push(598.583f);
	Stack.Push(126.4201f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(49);
	Stack.Push(792.1996f);
	Stack.Push(-262.2156f);
	Stack.Push(98.8212f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(49);
	Stack.Push(-660.1761f);
	Stack.Push(361.73f);
	Stack.Push(90.4883f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(1718.871f);
	Stack.Push(-762.4149f);
	Stack.Push(41.4575f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(1776.868f);
	Stack.Push(-864.06f);
	Stack.Push(40.6397f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(2002.821f);
	Stack.Push(-479.3671f);
	Stack.Push(40.9727f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(2058.131f);
	Stack.Push(-363.6342f);
	Stack.Push(40.6108f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(2117.548f);
	Stack.Push(-876.7509f);
	Stack.Push(40.4377f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(2099.085f);
	Stack.Push(-748.1615f);
	Stack.Push(40.563f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(-1820.122f);
	Stack.Push(-793.2049f);
	Stack.Push(102.8703f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(-1074.538f);
	Stack.Push(-491.6324f);
	Stack.Push(80.6666f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(-613.114f);
	Stack.Push(97.6527f);
	Stack.Push(52.3257f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(-487.4074f);
	Stack.Push(75.9777f);
	Stack.Push(48.1205f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(2726.036f);
	Stack.Push(18.5933f);
	Stack.Push(48.8501f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(2552.253f);
	Stack.Push(-194.6156f);
	Stack.Push(42.4538f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(2537.36f);
	Stack.Push(-260.3671f);
	Stack.Push(41.3014f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(2206.565f);
	Stack.Push(-453.0783f);
	Stack.Push(40.5481f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(2388.978f);
	Stack.Push(-381.6493f);
	Stack.Push(41.1678f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(627.507f);
	Stack.Push(385.186f);
	Stack.Push(105.5567f);
	Stack.Push(15);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(851.2086f);
	Stack.Push(709.5713f);
	Stack.Push(110.5522f);
	Stack.Push(16);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(-658.743f);
	Stack.Push(346.6573f);
	Stack.Push(88.1336f);
	Stack.Push(17);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(142.2479f);
	Stack.Push(-320.3969f);
	Stack.Push(104.9327f);
	Stack.Push(18);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(297.612f);
	Stack.Push(201.225f);
	Stack.Push(101.0823f);
	Stack.Push(19);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(1105.739f);
	Stack.Push(-53.9801f);
	Stack.Push(85.3329f);
	Stack.Push(20);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(840.7557f);
	Stack.Push(386.4758f);
	Stack.Push(117.9091f);
	Stack.Push(21);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(-676.4611f);
	Stack.Push(-374.1973f);
	Stack.Push(53.7761f);
	Stack.Push(22);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(-680.1461f);
	Stack.Push(-394.7518f);
	Stack.Push(52.6402f);
	Stack.Push(23);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(2707.187f);
	Stack.Push(136.8266f);
	Stack.Push(53.4102f);
	Stack.Push(24);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(2236.394f);
	Stack.Push(1716.181f);
	Stack.Push(100.8078f);
	Stack.Push(25);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(2026.649f);
	Stack.Push(194.4583f);
	Stack.Push(76.1849f);
	Stack.Push(26);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(2428.922f);
	Stack.Push(1040.769f);
	Stack.Push(86.3179f);
	Stack.Push(27);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(1632.866f);
	Stack.Push(-1713.811f);
	Stack.Push(51.4767f);
	Stack.Push(28);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(1481.719f);
	Stack.Push(-1697.79f);
	Stack.Push(61.3129f);
	Stack.Push(29);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(925.4667f);
	Stack.Push(-1081.438f);
	Stack.Push(55.1439f);
	Stack.Push(30);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(830.9171f);
	Stack.Push(-716.0651f);
	Stack.Push(63.6039f);
	Stack.Push(31);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(815.1224f);
	Stack.Push(-912.9166f);
	Stack.Push(50.2146f);
	Stack.Push(32);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(1371.668f);
	Stack.Push(-238.8062f);
	Stack.Push(97.1467f);
	Stack.Push(33);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(1260.127f);
	Stack.Push(-162.0665f);
	Stack.Push(96.7544f);
	Stack.Push(34);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(950.7592f);
	Stack.Push(-1242.842f);
	Stack.Push(53.845f);
	Stack.Push(35);
	Call_Loc(iParam0);
	Stack.Push(51);
	Stack.Push(1490.549f);
	Stack.Push(-1739.697f);
	Stack.Push(59.4025f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(51);
	Stack.Push(755.7448f);
	Stack.Push(-830.3978f);
	Stack.Push(53.5609f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(51);
	Stack.Push(1293.232f);
	Stack.Push(-793.3234f);
	Stack.Push(75.2416f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(51);
	Stack.Push(1121.026f);
	Stack.Push(-750.4242f);
	Stack.Push(91.5402f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(51);
	Stack.Push(1324.907f);
	Stack.Push(-255.0629f);
	Stack.Push(100.8022f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(53);
	Stack.Push(-2198.091f);
	Stack.Push(-1560.288f);
	Stack.Push(147.9514f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(53);
	Stack.Push(-2099.421f);
	Stack.Push(-1258.196f);
	Stack.Push(121.8341f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(53);
	Stack.Push(-2492.387f);
	Stack.Push(-1465.807f);
	Stack.Push(146.7759f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(54);
	Stack.Push(-2201.438f);
	Stack.Push(-1561.316f);
	Stack.Push(149.4853f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(54);
	Stack.Push(-1996.678f);
	Stack.Push(-1349.222f);
	Stack.Push(116.339f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(54);
	Stack.Push(-2413.329f);
	Stack.Push(-1441.075f);
	Stack.Push(150.5578f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(54);
	Stack.Push(-2220.976f);
	Stack.Push(-1286.49f);
	Stack.Push(133.1413f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(54);
	Stack.Push(-2390.821f);
	Stack.Push(-1215.595f);
	Stack.Push(157.3621f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(54);
	Stack.Push(-1923.344f);
	Stack.Push(-1993.478f);
	Stack.Push(77.1042f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(55);
	Stack.Push(-2324.989f);
	Stack.Push(-1650.865f);
	Stack.Push(132.8996f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(55);
	Stack.Push(-1953.471f);
	Stack.Push(-1844.582f);
	Stack.Push(116.2499f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(56);
	Stack.Push(-1727.76f);
	Stack.Push(-1275.434f);
	Stack.Push(90.6868f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(56);
	Stack.Push(-1187.298f);
	Stack.Push(-1501.951f);
	Stack.Push(76.6712f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(56);
	Stack.Push(-1308.762f);
	Stack.Push(-1249.402f);
	Stack.Push(81.9299f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(56);
	Stack.Push(-1239.012f);
	Stack.Push(-1709.895f);
	Stack.Push(77.9413f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(56);
	Stack.Push(-980.5764f);
	Stack.Push(-1818.639f);
	Stack.Push(62.5702f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(56);
	Stack.Push(-1401.89f);
	Stack.Push(-1416.279f);
	Stack.Push(92.8167f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(56);
	Stack.Push(-1203.841f);
	Stack.Push(-1824.375f);
	Stack.Push(60.6905f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(56);
	Stack.Push(-1840.49f);
	Stack.Push(-1687.297f);
	Stack.Push(105.0552f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(56);
	Stack.Push(-1972.313f);
	Stack.Push(-1381.929f);
	Stack.Push(114.4789f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(56);
	Stack.Push(-1615.532f);
	Stack.Push(-1978.459f);
	Stack.Push(49.9575f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(56);
	Stack.Push(-1765.309f);
	Stack.Push(-1736.517f);
	Stack.Push(92.3731f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(56);
	Stack.Push(-1885.423f);
	Stack.Push(-1341.173f);
	Stack.Push(99.7828f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(57);
	Stack.Push(1574.241f);
	Stack.Push(-721.5044f);
	Stack.Push(42.0845f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(57);
	Stack.Push(-1159.449f);
	Stack.Push(138.6042f);
	Stack.Push(43.3767f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(57);
	Stack.Push(-1682.827f);
	Stack.Push(88.1555f);
	Stack.Push(145.8255f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(57);
	Stack.Push(-2155.849f);
	Stack.Push(-72.5493f);
	Stack.Push(232.6642f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(57);
	Stack.Push(948.9059f);
	Stack.Push(998.7804f);
	Stack.Push(140.8828f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(57);
	Stack.Push(174.6441f);
	Stack.Push(153.5681f);
	Stack.Push(106.6718f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(57);
	Stack.Push(1205.995f);
	Stack.Push(569.589f);
	Stack.Push(86.8041f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(57);
	Stack.Push(-68.9876f);
	Stack.Push(-297.8486f);
	Stack.Push(93.1965f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(57);
	Stack.Push(1729.679f);
	Stack.Push(-1685.385f);
	Stack.Push(47.5734f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(57);
	Stack.Push(1196.258f);
	Stack.Push(-579.7256f);
	Stack.Push(66.6338f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(57);
	Stack.Push(950.153f);
	Stack.Push(-1019.674f);
	Stack.Push(58.3151f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(57);
	Stack.Push(-5608.118f);
	Stack.Push(-3556.63f);
	Stack.Push(-24.1127f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(57);
	Stack.Push(-4622.817f);
	Stack.Push(-3354.226f);
	Stack.Push(20.9842f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(57);
	Stack.Push(-4051.454f);
	Stack.Push(-3046.4f);
	Stack.Push(-10.438f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(58);
	Stack.Push(-1174.977f);
	Stack.Push(76.6906f);
	Stack.Push(41.3614f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(58);
	Stack.Push(-1018.462f);
	Stack.Push(437.8081f);
	Stack.Push(54.8274f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(58);
	Stack.Push(-807.5107f);
	Stack.Push(69.3361f);
	Stack.Push(40.6991f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(58);
	Stack.Push(-1026.039f);
	Stack.Push(-59.0312f);
	Stack.Push(40.8465f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(58);
	Stack.Push(-708.0551f);
	Stack.Push(-333.2857f);
	Stack.Push(41.1294f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(58);
	Stack.Push(-508.7768f);
	Stack.Push(218.219f);
	Stack.Push(40.6822f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(58);
	Stack.Push(-196.2379f);
	Stack.Push(-574.9825f);
	Stack.Push(40.6629f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(58);
	Stack.Push(1505.286f);
	Stack.Push(-771.5364f);
	Stack.Push(45.9044f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(59);
	Stack.Push(1972.094f);
	Stack.Push(-681.0854f);
	Stack.Push(43.0215f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(59);
	Stack.Push(2440.721f);
	Stack.Push(-676.4698f);
	Stack.Push(42.2753f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(59);
	Stack.Push(2098.511f);
	Stack.Push(-353.6877f);
	Stack.Push(40.8802f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(60);
	Stack.Push(-2586.923f);
	Stack.Push(-264.5349f);
	Stack.Push(161.6671f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(60);
	Stack.Push(-2578.181f);
	Stack.Push(388.9668f);
	Stack.Push(148.3721f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(60);
	Stack.Push(-2196.576f);
	Stack.Push(468.8412f);
	Stack.Push(119.5676f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(60);
	Stack.Push(-1637.2f);
	Stack.Push(-1513.234f);
	Stack.Push(82.6688f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(60);
	Stack.Push(-825.3087f);
	Stack.Push(-1804.951f);
	Stack.Push(59.0313f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(60);
	Stack.Push(1786.915f);
	Stack.Push(1588.926f);
	Stack.Push(167.4663f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(60);
	Stack.Push(1959.894f);
	Stack.Push(1387.251f);
	Stack.Push(179.786f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(60);
	Stack.Push(637.5925f);
	Stack.Push(2099.455f);
	Stack.Push(222.0308f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(60);
	Stack.Push(1296.321f);
	Stack.Push(1161.685f);
	Stack.Push(150.1379f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(60);
	Stack.Push(204.3004f);
	Stack.Push(261.9908f);
	Stack.Push(111.8031f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(60);
	Stack.Push(697.4816f);
	Stack.Push(65.372f);
	Stack.Push(150.8549f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(61);
	Stack.Push(1614.12f);
	Stack.Push(-810.2f);
	Stack.Push(41.15f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(61);
	Stack.Push(2385.25f);
	Stack.Push(-668.01f);
	Stack.Push(41.17f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(62);
	Stack.Push(-1922.856f);
	Stack.Push(624.1806f);
	Stack.Push(114.5816f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(62);
	Stack.Push(-2612.37f);
	Stack.Push(494.5219f);
	Stack.Push(143.2249f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(62);
	Stack.Push(-1981.225f);
	Stack.Push(-540.608f);
	Stack.Push(145.1829f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(62);
	Stack.Push(-1389.892f);
	Stack.Push(-1275.583f);
	Stack.Push(81.3028f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(62);
	Stack.Push(-1676.042f);
	Stack.Push(-2020.085f);
	Stack.Push(47.7628f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(62);
	Stack.Push(-1004.324f);
	Stack.Push(-1851.333f);
	Stack.Push(60.9017f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(62);
	Stack.Push(1071.209f);
	Stack.Push(1214.037f);
	Stack.Push(196.1523f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(62);
	Stack.Push(1463.082f);
	Stack.Push(1026.326f);
	Stack.Push(170.4556f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(62);
	Stack.Push(-563.5857f);
	Stack.Push(1206.521f);
	Stack.Push(156.4777f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(62);
	Stack.Push(-1374.102f);
	Stack.Push(628.8635f);
	Stack.Push(109.8288f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(62);
	Stack.Push(69.4236f);
	Stack.Push(-43.6054f);
	Stack.Push(103.7584f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(62);
	Stack.Push(-373.6552f);
	Stack.Push(-72.1375f);
	Stack.Push(42.3578f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(62);
	Stack.Push(556.9641f);
	Stack.Push(356.811f);
	Stack.Push(105.9842f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(62);
	Stack.Push(474.0224f);
	Stack.Push(-316.3003f);
	Stack.Push(141.9746f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(62);
	Stack.Push(-1862.232f);
	Stack.Push(-1332.681f);
	Stack.Push(97.2679f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(62);
	Stack.Push(-2483.872f);
	Stack.Push(-1309.616f);
	Stack.Push(158.4832f);
	Stack.Push(15);
	Call_Loc(iParam0);
	Stack.Push(62);
	Stack.Push(-1958.146f);
	Stack.Push(-1786.701f);
	Stack.Push(120.1902f);
	Stack.Push(16);
	Call_Loc(iParam0);
	Stack.Push(63);
	Stack.Push(-1127.1f);
	Stack.Push(-324.4f);
	Stack.Push(87.7f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(63);
	Stack.Push(-1099.6f);
	Stack.Push(-112.7f);
	Stack.Push(44.2f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(63);
	Stack.Push(-746.4f);
	Stack.Push(-124.8f);
	Stack.Push(82.7f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(63);
	Stack.Push(-2107.655f);
	Stack.Push(-468.3287f);
	Stack.Push(149.7019f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(63);
	Stack.Push(-2282.436f);
	Stack.Push(497.8875f);
	Stack.Push(120.5164f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(63);
	Stack.Push(-2007.449f);
	Stack.Push(-746.912f);
	Stack.Push(104.459f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(64);
	Stack.Push(-6.8961f);
	Stack.Push(294.2949f);
	Stack.Push(110.201f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(64);
	Stack.Push(176.5703f);
	Stack.Push(573.1811f);
	Stack.Push(116.778f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(64);
	Stack.Push(1896.501f);
	Stack.Push(-1647.79f);
	Stack.Push(42.5318f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(64);
	Stack.Push(1047.113f);
	Stack.Push(-1064.466f);
	Stack.Push(65.5536f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(64);
	Stack.Push(-5025.307f);
	Stack.Push(-2638.411f);
	Stack.Push(-12.8459f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(64);
	Stack.Push(-5100.704f);
	Stack.Push(-3179.039f);
	Stack.Push(-15.6474f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(64);
	Stack.Push(-3879.725f);
	Stack.Push(-2841.371f);
	Stack.Push(-15.3182f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(65);
	Stack.Push(1615.269f);
	Stack.Push(1613.743f);
	Stack.Push(147.7296f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(65);
	Stack.Push(1423.979f);
	Stack.Push(1102.476f);
	Stack.Push(185.6182f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(65);
	Stack.Push(2043.08f);
	Stack.Push(1720.93f);
	Stack.Push(154.4757f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(65);
	Stack.Push(649.9562f);
	Stack.Push(1908.171f);
	Stack.Push(214.0831f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(65);
	Stack.Push(950.4314f);
	Stack.Push(388.0648f);
	Stack.Push(110.4698f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(65);
	Stack.Push(1355.897f);
	Stack.Push(467.7415f);
	Stack.Push(87.2016f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(65);
	Stack.Push(-472.058f);
	Stack.Push(-172.115f);
	Stack.Push(43.1987f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(65);
	Stack.Push(1339.051f);
	Stack.Push(-1626.587f);
	Stack.Push(65.6338f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(65);
	Stack.Push(1519.469f);
	Stack.Push(-2083.614f);
	Stack.Push(42.6887f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(65);
	Stack.Push(1166.103f);
	Stack.Push(-2132.91f);
	Stack.Push(55.964f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(66);
	Stack.Push(-1159.115f);
	Stack.Push(397.0877f);
	Stack.Push(60.4953f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(66);
	Stack.Push(-1278.359f);
	Stack.Push(291.4224f);
	Stack.Push(76.6652f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(66);
	Stack.Push(-1371.28f);
	Stack.Push(283.4114f);
	Stack.Push(86.0114f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(66);
	Stack.Push(-1117.687f);
	Stack.Push(406.6783f);
	Stack.Push(55.3681f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(66);
	Stack.Push(-1288.323f);
	Stack.Push(148.5012f);
	Stack.Push(71.7864f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(66);
	Stack.Push(-1648.447f);
	Stack.Push(-114.858f);
	Stack.Push(170.0504f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(66);
	Stack.Push(-1081.189f);
	Stack.Push(-405.0457f);
	Stack.Push(97.0153f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(66);
	Stack.Push(206.8413f);
	Stack.Push(-170.3653f);
	Stack.Push(130.5284f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(66);
	Stack.Push(-621.2297f);
	Stack.Push(186.8452f);
	Stack.Push(41.2741f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(66);
	Stack.Push(44.3784f);
	Stack.Push(388.2357f);
	Stack.Push(129.8287f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(66);
	Stack.Push(752.9834f);
	Stack.Push(-58.1133f);
	Stack.Push(157.6479f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(66);
	Stack.Push(822.6152f);
	Stack.Push(578.6021f);
	Stack.Push(117.7806f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(67);
	Stack.Push(2572.895f);
	Stack.Push(1545.367f);
	Stack.Push(95.1632f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(67);
	Stack.Push(2569.531f);
	Stack.Push(1820.273f);
	Stack.Push(86.0089f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(67);
	Stack.Push(2388.21f);
	Stack.Push(1048.992f);
	Stack.Push(85.1056f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(67);
	Stack.Push(2769.92f);
	Stack.Push(1013.51f);
	Stack.Push(60.84f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(67);
	Stack.Push(2697.282f);
	Stack.Push(1627.256f);
	Stack.Push(148.2803f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(68);
	Stack.Push(2404.503f);
	Stack.Push(-708.3487f);
	Stack.Push(40.1213f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(68);
	Stack.Push(2412.389f);
	Stack.Push(-632.1752f);
	Stack.Push(41.1803f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(68);
	Stack.Push(2141.919f);
	Stack.Push(-775.2498f);
	Stack.Push(40.52f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(68);
	Stack.Push(2188.875f);
	Stack.Push(-378.6358f);
	Stack.Push(40.6047f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(68);
	Stack.Push(2494.612f);
	Stack.Push(-245.3792f);
	Stack.Push(41.1532f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(69);
	Stack.Push(2407.218f);
	Stack.Push(-720.1194f);
	Stack.Push(48f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(69);
	Stack.Push(2356.204f);
	Stack.Push(-617.4643f);
	Stack.Push(40.6704f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(69);
	Stack.Push(2266.73f);
	Stack.Push(-859.36f);
	Stack.Push(40.6498f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(69);
	Stack.Push(2117.661f);
	Stack.Push(-468.6407f);
	Stack.Push(40.569f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(69);
	Stack.Push(2175.363f);
	Stack.Push(-777.6237f);
	Stack.Push(40.5395f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(70);
	Stack.Push(-2284.769f);
	Stack.Push(-423.4211f);
	Stack.Push(156.8616f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(70);
	Stack.Push(-1883.307f);
	Stack.Push(373.0742f);
	Stack.Push(119.2403f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(70);
	Stack.Push(-2651.707f);
	Stack.Push(210.0714f);
	Stack.Push(151.7762f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(70);
	Stack.Push(-1623.526f);
	Stack.Push(235.4652f);
	Stack.Push(105.3645f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(70);
	Stack.Push(-1926.251f);
	Stack.Push(-678.1707f);
	Stack.Push(116.5043f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(70);
	Stack.Push(-2689.542f);
	Stack.Push(-305.0743f);
	Stack.Push(148.3352f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(71);
	Stack.Push(-1320.695f);
	Stack.Push(-2010.077f);
	Stack.Push(40.5892f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(71);
	Stack.Push(-738.0292f);
	Stack.Push(-1711.02f);
	Stack.Push(40.4947f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(71);
	Stack.Push(146.1645f);
	Stack.Push(-630.6563f);
	Stack.Push(40.7397f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(71);
	Stack.Push(-469.2039f);
	Stack.Push(-576.6931f);
	Stack.Push(40.7896f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(71);
	Stack.Push(-286.3765f);
	Stack.Push(-568.8775f);
	Stack.Push(40.9598f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(71);
	Stack.Push(3138.446f);
	Stack.Push(1451.169f);
	Stack.Push(40.4687f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(71);
	Stack.Push(2871.425f);
	Stack.Push(933.2757f);
	Stack.Push(40.6453f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(71);
	Stack.Push(2916.922f);
	Stack.Push(366.8459f);
	Stack.Push(40.6137f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(72);
	Stack.Push(2355.67f);
	Stack.Push(-682.6993f);
	Stack.Push(46.9981f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(72);
	Stack.Push(1655.174f);
	Stack.Push(-1002.744f);
	Stack.Push(49.9165f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(72);
	Stack.Push(2175.948f);
	Stack.Push(-453.2319f);
	Stack.Push(46.1423f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(72);
	Stack.Push(1820.147f);
	Stack.Push(-911.4569f);
	Stack.Push(50.6755f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(72);
	Stack.Push(1684.56f);
	Stack.Push(-701.666f);
	Stack.Push(48.775f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(72);
	Stack.Push(2452.194f);
	Stack.Push(1285.645f);
	Stack.Push(118.422f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(72);
	Stack.Push(2690.952f);
	Stack.Push(1786.37f);
	Stack.Push(109.0461f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(72);
	Stack.Push(3009.679f);
	Stack.Push(1704.29f);
	Stack.Push(79.1191f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(72);
	Stack.Push(2276.207f);
	Stack.Push(1602.347f);
	Stack.Push(88.9849f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(73);
	Stack.Push(2397.366f);
	Stack.Push(1666.155f);
	Stack.Push(95.0309f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(73);
	Stack.Push(2470.936f);
	Stack.Push(1584.53f);
	Stack.Push(86.2933f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(73);
	Stack.Push(2330.519f);
	Stack.Push(1741.076f);
	Stack.Push(104.3994f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(73);
	Stack.Push(2383.997f);
	Stack.Push(1763.228f);
	Stack.Push(106.3f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(74);
	Stack.Push(2414.261f);
	Stack.Push(1766.187f);
	Stack.Push(88.6656f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(75);
	Stack.Push(-3625.013f);
	Stack.Push(-2604.96f);
	Stack.Push(-14.2406f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(76);
	Stack.Push(-5526.436f);
	Stack.Push(-2933.683f);
	Stack.Push(-2.9655f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(77);
	Stack.Push(2724.5f);
	Stack.Push(-1115.8f);
	Stack.Push(49.7f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(77);
	Stack.Push(2856.7f);
	Stack.Push(-1248.3f);
	Stack.Push(46.4f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(77);
	Stack.Push(2875.7f);
	Stack.Push(-1181.2f);
	Stack.Push(46.1f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(78);
	Stack.Push(2324.6f);
	Stack.Push(-1092.9f);
	Stack.Push(44.7f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(78);
	Stack.Push(2276.4f);
	Stack.Push(-1371.3f);
	Stack.Push(45.8f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(79);
	Stack.Push(-1796.165f);
	Stack.Push(-383.4302f);
	Stack.Push(159.2698f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(79);
	Stack.Push(-278.5714f);
	Stack.Push(785.1736f);
	Stack.Push(118.4981f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(79);
	Stack.Push(-278.5714f);
	Stack.Push(785.1736f);
	Stack.Push(118.4981f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(79);
	Stack.Push(2925.65f);
	Stack.Push(1275.873f);
	Stack.Push(43.6309f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(79);
	Stack.Push(1323.145f);
	Stack.Push(-1294.017f);
	Stack.Push(76.017f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(79);
	Stack.Push(1323.145f);
	Stack.Push(-1294.017f);
	Stack.Push(76.017f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(80);
	Stack.Push(2821.827f);
	Stack.Push(-1275.462f);
	Stack.Push(47.101f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(80);
	Stack.Push(2841.75f);
	Stack.Push(-1164.15f);
	Stack.Push(46.7f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(80);
	Stack.Push(2741.723f);
	Stack.Push(-1315.395f);
	Stack.Push(47.648f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(81);
	Stack.Push(2815.91f);
	Stack.Push(-1222.949f);
	Stack.Push(46.526f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(81);
	Stack.Push(2602.444f);
	Stack.Push(-1286.57f);
	Stack.Push(51.2567f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(81);
	Stack.Push(2661.251f);
	Stack.Push(-1202.6f);
	Stack.Push(52.2783f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(81);
	Stack.Push(2750.527f);
	Stack.Push(-1206.293f);
	Stack.Push(48.3767f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(81);
	Stack.Push(2530.883f);
	Stack.Push(-1149.375f);
	Stack.Push(49.0052f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(81);
	Stack.Push(2714.385f);
	Stack.Push(-1233.121f);
	Stack.Push(49.172f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(81);
	Stack.Push(2639.789f);
	Stack.Push(-1417.126f);
	Stack.Push(45.376f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(81);
	Stack.Push(2703.266f);
	Stack.Push(-1184.961f);
	Stack.Push(50.865f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(81);
	Stack.Push(2781.518f);
	Stack.Push(-1278.669f);
	Stack.Push(46.429f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(81);
	Stack.Push(2593.165f);
	Stack.Push(-1207.484f);
	Stack.Push(52.3112f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(81);
	Stack.Push(2670.08f);
	Stack.Push(-1113.233f);
	Stack.Push(49.552f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(81);
	Stack.Push(2482.088f);
	Stack.Push(-1465.71f);
	Stack.Push(45.1902f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(81);
	Stack.Push(-791.817f);
	Stack.Push(-1311.097f);
	Stack.Push(42.623f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(81);
	Stack.Push(-778.963f);
	Stack.Push(-1260.098f);
	Stack.Push(42.643f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(81);
	Stack.Push(-843.7784f);
	Stack.Push(-1282.664f);
	Stack.Push(42.3634f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(82);
	Stack.Push(2675.32f);
	Stack.Push(-1180.95f);
	Stack.Push(52.0954f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(82);
	Stack.Push(2642.136f);
	Stack.Push(-1229.305f);
	Stack.Push(52.2161f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(82);
	Stack.Push(2835.006f);
	Stack.Push(-1190.365f);
	Stack.Push(46.598f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(82);
	Stack.Push(2773.176f);
	Stack.Push(-1120.12f);
	Stack.Push(46.534f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(82);
	Stack.Push(2524.305f);
	Stack.Push(-1406.557f);
	Stack.Push(45.1683f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(82);
	Stack.Push(2738.86f);
	Stack.Push(-1317.416f);
	Stack.Push(46.5925f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(82);
	Stack.Push(2677.741f);
	Stack.Push(-1342.216f);
	Stack.Push(47.7528f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(82);
	Stack.Push(2651.291f);
	Stack.Push(-1410.081f);
	Stack.Push(45.3449f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(82);
	Stack.Push(-816.683f);
	Stack.Push(-1310.262f);
	Stack.Push(42.681f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(83);
	Stack.Push(-3712.294f);
	Stack.Push(-2624.416f);
	Stack.Push(-14.6756f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(83);
	Stack.Push(-3587.756f);
	Stack.Push(-2599.626f);
	Stack.Push(-15.0415f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(84);
	Stack.Push(-315.9042f);
	Stack.Push(796.2438f);
	Stack.Push(116.6553f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(84);
	Stack.Push(-315.804f);
	Stack.Push(796.344f);
	Stack.Push(116.655f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(85);
	Stack.Push(2815.91f);
	Stack.Push(-1222.949f);
	Stack.Push(46.526f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(85);
	Stack.Push(2602.444f);
	Stack.Push(-1286.57f);
	Stack.Push(51.2567f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(85);
	Stack.Push(2661.151f);
	Stack.Push(-1202.7f);
	Stack.Push(52.2783f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(85);
	Stack.Push(2750.427f);
	Stack.Push(-1206.293f);
	Stack.Push(48.3767f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(85);
	Stack.Push(2530.883f);
	Stack.Push(-1149.375f);
	Stack.Push(49.0052f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(85);
	Stack.Push(2639.789f);
	Stack.Push(-1417.126f);
	Stack.Push(45.376f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(85);
	Stack.Push(2703.266f);
	Stack.Push(-1184.961f);
	Stack.Push(50.865f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(85);
	Stack.Push(2777.176f);
	Stack.Push(-1284.33f);
	Stack.Push(46.401f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(85);
	Stack.Push(2593.165f);
	Stack.Push(-1207.484f);
	Stack.Push(52.3112f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(85);
	Stack.Push(2670.315f);
	Stack.Push(-1120.21f);
	Stack.Push(49.655f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(85);
	Stack.Push(2482.088f);
	Stack.Push(-1465.71f);
	Stack.Push(45.1902f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(86);
	Stack.Push(2915.228f);
	Stack.Push(1331.694f);
	Stack.Push(43.9828f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(86);
	Stack.Push(1393.381f);
	Stack.Push(-1137.415f);
	Stack.Push(75.1469f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(87);
	Stack.Push(-313.152f);
	Stack.Push(829.182f);
	Stack.Push(118.494f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(87);
	Stack.Push(-228.0928f);
	Stack.Push(748.1144f);
	Stack.Push(116.2867f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(87);
	Stack.Push(-282.677f);
	Stack.Push(663.646f);
	Stack.Push(112.414f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(87);
	Stack.Push(2964.635f);
	Stack.Push(462.0895f);
	Stack.Push(48.2494f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(87);
	Stack.Push(2980.101f);
	Stack.Push(581.1429f);
	Stack.Push(43.3314f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(87);
	Stack.Push(1442.221f);
	Stack.Push(-1303.781f);
	Stack.Push(76.7482f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(87);
	Stack.Push(1404.719f);
	Stack.Push(-1369.902f);
	Stack.Push(80.301f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(87);
	Stack.Push(1310.117f);
	Stack.Push(-1357.097f);
	Stack.Push(76.968f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(87);
	Stack.Push(1319.893f);
	Stack.Push(-1327.6f);
	Stack.Push(76.174f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(88);
	Stack.Push(-308.8745f);
	Stack.Push(800.6629f);
	Stack.Push(117.9796f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(88);
	Stack.Push(2949.343f);
	Stack.Push(523.1172f);
	Stack.Push(44.3583f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(89);
	Stack.Push(1342.15f);
	Stack.Push(-1375.004f);
	Stack.Push(79.4998f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(90);
	Stack.Push(-347.8752f);
	Stack.Push(741.1281f);
	Stack.Push(116.4358f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(90);
	Stack.Push(2958.862f);
	Stack.Push(524.6724f);
	Stack.Push(43.6222f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(91);
	Stack.Push(-3715.866f);
	Stack.Push(-2568.89f);
	Stack.Push(-14.9211f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(91);
	Stack.Push(-3637.223f);
	Stack.Push(-2630.011f);
	Stack.Push(-14.8352f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(92);
	Stack.Push(-295.4f);
	Stack.Push(735.1f);
	Stack.Push(116.4f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(92);
	Stack.Push(-362.7055f);
	Stack.Push(831.2882f);
	Stack.Push(115.7839f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(92);
	Stack.Push(1334.67f);
	Stack.Push(-1365.789f);
	Stack.Push(78.9413f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(93);
	Stack.Push(2503.755f);
	Stack.Push(-1164.531f);
	Stack.Push(48.1928f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(94);
	Stack.Push(2592.7f);
	Stack.Push(-1207.5f);
	Stack.Push(52.5f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(94);
	Stack.Push(2380.653f);
	Stack.Push(-1353.522f);
	Stack.Push(45.3453f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(94);
	Stack.Push(-336f);
	Stack.Push(707.7f);
	Stack.Push(118.2f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(94);
	Stack.Push(-211.2f);
	Stack.Push(640.7f);
	Stack.Push(113f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(94);
	Stack.Push(-248f);
	Stack.Push(734.7f);
	Stack.Push(116.9f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(94);
	Stack.Push(1326.8f);
	Stack.Push(-1220.3f);
	Stack.Push(79.6f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(94);
	Stack.Push(1365.6f);
	Stack.Push(-1343.7f);
	Stack.Push(78f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(94);
	Stack.Push(1272.4f);
	Stack.Push(-1281.7f);
	Stack.Push(75.3f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(94);
	Stack.Push(1358.1f);
	Stack.Push(-1379.7f);
	Stack.Push(79.5f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(95);
	Stack.Push(2507.693f);
	Stack.Push(-1202.433f);
	Stack.Push(51.4826f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(96);
	Stack.Push(2355.992f);
	Stack.Push(-1421.836f);
	Stack.Push(41.3914f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(96);
	Stack.Push(2477.7f);
	Stack.Push(-1489.4f);
	Stack.Push(46.2f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(96);
	Stack.Push(2439f);
	Stack.Push(-1477.2f);
	Stack.Push(45.4f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(96);
	Stack.Push(2803.6f);
	Stack.Push(-1227.4f);
	Stack.Push(47.2f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(96);
	Stack.Push(1350.4f);
	Stack.Push(-1260.6f);
	Stack.Push(78.3f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(96);
	Stack.Push(1294.8f);
	Stack.Push(-1343.3f);
	Stack.Push(77f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(96);
	Stack.Push(1392.2f);
	Stack.Push(-1312.7f);
	Stack.Push(77.6f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(97);
	Stack.Push(-1808.807f);
	Stack.Push(-363.4895f);
	Stack.Push(161.1128f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(97);
	Stack.Push(-1830.203f);
	Stack.Push(-428.2535f);
	Stack.Push(159.037f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(97);
	Stack.Push(-1771.468f);
	Stack.Push(-437.2715f);
	Stack.Push(154.0925f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(97);
	Stack.Push(1428.513f);
	Stack.Push(366.0985f);
	Stack.Push(87.8453f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(97);
	Stack.Push(1421.528f);
	Stack.Push(323.5045f);
	Stack.Push(87.4142f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(97);
	Stack.Push(1357.266f);
	Stack.Push(306.072f);
	Stack.Push(86.3373f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(98);
	Stack.Push(-272.525f);
	Stack.Push(799.1819f);
	Stack.Push(118.0958f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(98);
	Stack.Push(-336.1102f);
	Stack.Push(776.7322f);
	Stack.Push(114.9947f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(98);
	Stack.Push(2959.161f);
	Stack.Push(492.569f);
	Stack.Push(45.437f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(98);
	Stack.Push(2959.535f);
	Stack.Push(590.465f);
	Stack.Push(43.514f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(99);
	Stack.Push(-249.4169f);
	Stack.Push(764.9301f);
	Stack.Push(116.4413f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(99);
	Stack.Push(-329.8f);
	Stack.Push(747.6f);
	Stack.Push(116.3f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(100);
	Stack.Push(-1788.724f);
	Stack.Push(-366.4714f);
	Stack.Push(159.7196f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(101);
	Stack.Push(1342.767f);
	Stack.Push(-1374.869f);
	Stack.Push(79.5128f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(101);
	Stack.Push(1342.767f);
	Stack.Push(-1374.869f);
	Stack.Push(79.5128f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(102);
	Stack.Push(-1786.066f);
	Stack.Push(-401.217f);
	Stack.Push(155.484f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(102);
	Stack.Push(-285.4209f);
	Stack.Push(865.4907f);
	Stack.Push(120.1243f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(102);
	Stack.Push(-258.9237f);
	Stack.Push(733.0353f);
	Stack.Push(115.9265f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(103);
	Stack.Push(2720.815f);
	Stack.Push(-1283.54f);
	Stack.Push(48.638f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(103);
	Stack.Push(2551.768f);
	Stack.Push(-1173.668f);
	Stack.Push(52.683f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(103);
	Stack.Push(2948.19f);
	Stack.Push(526.29f);
	Stack.Push(44.34f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(104);
	Stack.Push(2663.312f);
	Stack.Push(-1217.594f);
	Stack.Push(52.3003f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(104);
	Stack.Push(2497.331f);
	Stack.Push(-1269.9f);
	Stack.Push(48.1784f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(104);
	Stack.Push(2866.205f);
	Stack.Push(-1211.583f);
	Stack.Push(45.2799f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(105);
	Stack.Push(2648.307f);
	Stack.Push(-1199.577f);
	Stack.Push(52.3577f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(105);
	Stack.Push(2744.021f);
	Stack.Push(-1214.594f);
	Stack.Push(48.5629f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(106);
	Stack.Push(2688.31f);
	Stack.Push(-1114.065f);
	Stack.Push(51.8697f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(106);
	Stack.Push(-764.837f);
	Stack.Push(-1260.936f);
	Stack.Push(46.4259f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(106);
	Stack.Push(-315.3432f);
	Stack.Push(734.9009f);
	Stack.Push(122.8928f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(106);
	Stack.Push(1374.88f);
	Stack.Push(-1215.133f);
	Stack.Push(83.223f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(107);
	Stack.Push(2793.112f);
	Stack.Push(-1173.748f);
	Stack.Push(46.924f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(108);
	Stack.Push(-308.4347f);
	Stack.Push(788.9138f);
	Stack.Push(116.5967f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(108);
	Stack.Push(2952.417f);
	Stack.Push(523.4847f);
	Stack.Push(44.4925f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(108);
	Stack.Push(-3707.469f);
	Stack.Push(-2600.353f);
	Stack.Push(-14.6511f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(109);
	Stack.Push(-1768.237f);
	Stack.Push(-386.8972f);
	Stack.Push(156.7337f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(109);
	Stack.Push(2941.604f);
	Stack.Push(1321.632f);
	Stack.Push(43.7591f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(109);
	Stack.Push(1330.253f);
	Stack.Push(-1317.481f);
	Stack.Push(76.9597f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(110);
	Stack.Push(2795.961f);
	Stack.Push(-1170.355f);
	Stack.Push(46.924f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(111);
	Stack.Push(-811.953f);
	Stack.Push(-1325.25f);
	Stack.Push(42.577f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(111);
	Stack.Push(-307.3034f);
	Stack.Push(797.0555f);
	Stack.Push(117.9233f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(111);
	Stack.Push(-242.7336f);
	Stack.Push(766.1105f);
	Stack.Push(117.085f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(111);
	Stack.Push(2951.335f);
	Stack.Push(523.949f);
	Stack.Push(44.385f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(112);
	Stack.Push(2669.648f);
	Stack.Push(-1181.517f);
	Stack.Push(52.1704f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(112);
	Stack.Push(2691.534f);
	Stack.Push(-1262.121f);
	Stack.Push(50.0244f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(112);
	Stack.Push(2750.981f);
	Stack.Push(-1163.64f);
	Stack.Push(47.9651f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(113);
	Stack.Push(-957.44f);
	Stack.Push(-1201.16f);
	Stack.Push(54.8f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(113);
	Stack.Push(-957.5674f);
	Stack.Push(-1209.503f);
	Stack.Push(53.9484f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(113);
	Stack.Push(1297.35f);
	Stack.Push(-1214f);
	Stack.Push(80.47f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(114);
	Stack.Push(2714.69f);
	Stack.Push(-1214.11f);
	Stack.Push(50.73f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(114);
	Stack.Push(2654.302f);
	Stack.Push(-1124.292f);
	Stack.Push(49.93f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(114);
	Stack.Push(2504.71f);
	Stack.Push(-1197.69f);
	Stack.Push(48.22f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(114);
	Stack.Push(2406.22f);
	Stack.Push(-1421.73f);
	Stack.Push(44.9f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(114);
	Stack.Push(2813.77f);
	Stack.Push(-1270.79f);
	Stack.Push(46.41f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(114);
	Stack.Push(2779.46f);
	Stack.Push(-1167.3f);
	Stack.Push(47.42f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(114);
	Stack.Push(-294.4247f);
	Stack.Push(783.5817f);
	Stack.Push(118.2912f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(114);
	Stack.Push(-238.2696f);
	Stack.Push(694.6663f);
	Stack.Push(112.4419f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(114);
	Stack.Push(-285.2f);
	Stack.Push(839.39f);
	Stack.Push(119.98f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(114);
	Stack.Push(-326.5073f);
	Stack.Push(795.0771f);
	Stack.Push(116.8913f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(114);
	Stack.Push(2953.704f);
	Stack.Push(518.1846f);
	Stack.Push(44.4672f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(114);
	Stack.Push(2959.148f);
	Stack.Push(590.6953f);
	Stack.Push(43.5041f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(114);
	Stack.Push(2964.527f);
	Stack.Push(473.1478f);
	Stack.Push(47.4215f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(114);
	Stack.Push(1323.881f);
	Stack.Push(-1313.513f);
	Stack.Push(75.8026f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(114);
	Stack.Push(1299.868f);
	Stack.Push(-1299.655f);
	Stack.Push(76.3373f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(114);
	Stack.Push(1333.02f);
	Stack.Push(-1248.85f);
	Stack.Push(76.55f);
	Stack.Push(15);
	Call_Loc(iParam0);
	Stack.Push(115);
	Stack.Push(-298.302f);
	Stack.Push(786.458f);
	Stack.Push(118.188f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(115);
	Stack.Push(-260.238f);
	Stack.Push(766.421f);
	Stack.Push(117.481f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(115);
	Stack.Push(-342.301f);
	Stack.Push(792.306f);
	Stack.Push(116.167f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(116);
	Stack.Push(-250.01f);
	Stack.Push(768.66f);
	Stack.Push(116.55f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(116);
	Stack.Push(-349.09f);
	Stack.Push(740.88f);
	Stack.Push(116.43f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(116);
	Stack.Push(-212.04f);
	Stack.Push(640.67f);
	Stack.Push(111.98f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(116);
	Stack.Push(2938.38f);
	Stack.Push(1320.05f);
	Stack.Push(43.23f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(116);
	Stack.Push(2870.76f);
	Stack.Push(1349.07f);
	Stack.Push(61.35f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(116);
	Stack.Push(1286.04f);
	Stack.Push(-1287.2f);
	Stack.Push(74.98f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(116);
	Stack.Push(1366.49f);
	Stack.Push(-1374.91f);
	Stack.Push(77.85f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(117);
	Stack.Push(-3665.4f);
	Stack.Push(-2608.5f);
	Stack.Push(-14f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(117);
	Stack.Push(-3625.2f);
	Stack.Push(-2617.3f);
	Stack.Push(-13.8f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(118);
	Stack.Push(2565.529f);
	Stack.Push(-1337.106f);
	Stack.Push(46.7954f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(118);
	Stack.Push(2813.954f);
	Stack.Push(-1198.445f);
	Stack.Push(46.429f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(118);
	Stack.Push(2718.987f);
	Stack.Push(-1252.988f);
	Stack.Push(48.8628f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(118);
	Stack.Push(2655.251f);
	Stack.Push(-1121.463f);
	Stack.Push(49.9823f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(118);
	Stack.Push(2504.686f);
	Stack.Push(-1230.827f);
	Stack.Push(48.22f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(118);
	Stack.Push(2675.291f);
	Stack.Push(-1388.496f);
	Stack.Push(45.499f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(118);
	Stack.Push(-772.2189f);
	Stack.Push(-1330.509f);
	Stack.Push(42.6413f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(118);
	Stack.Push(-841.984f);
	Stack.Push(-1319.104f);
	Stack.Push(42.699f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(118);
	Stack.Push(-855.149f);
	Stack.Push(-1381.493f);
	Stack.Push(42.709f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(118);
	Stack.Push(-755.542f);
	Stack.Push(-1304.519f);
	Stack.Push(42.759f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(119);
	Stack.Push(-1371.9f);
	Stack.Push(117.2f);
	Stack.Push(83.8f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(119);
	Stack.Push(-1414.094f);
	Stack.Push(-1515.714f);
	Stack.Push(85.1308f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(119);
	Stack.Push(-1567.185f);
	Stack.Push(-1670.679f);
	Stack.Push(78.1019f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(119);
	Stack.Push(889.8477f);
	Stack.Push(1273.715f);
	Stack.Push(234.1128f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(119);
	Stack.Push(712.6324f);
	Stack.Push(1884.503f);
	Stack.Push(238.3911f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(119);
	Stack.Push(1208.474f);
	Stack.Push(725.8189f);
	Stack.Push(100.6124f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(119);
	Stack.Push(1065.796f);
	Stack.Push(45.7184f);
	Stack.Push(85.7752f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(119);
	Stack.Push(2339.173f);
	Stack.Push(355.338f);
	Stack.Push(55.7178f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(119);
	Stack.Push(2522.906f);
	Stack.Push(1697.219f);
	Stack.Push(86.4072f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(119);
	Stack.Push(1178.059f);
	Stack.Push(-2177.841f);
	Stack.Push(54.1327f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(119);
	Stack.Push(1578.016f);
	Stack.Push(-195.802f);
	Stack.Push(79.6787f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(119);
	Stack.Push(825.1554f);
	Stack.Push(-1435.466f);
	Stack.Push(52.8703f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(119);
	Stack.Push(920.1998f);
	Stack.Push(-560.8011f);
	Stack.Push(89.0324f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(119);
	Stack.Push(-2242.403f);
	Stack.Push(-1552.961f);
	Stack.Push(149.5428f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(119);
	Stack.Push(-2426.368f);
	Stack.Push(-1349.323f);
	Stack.Push(152.7462f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(119);
	Stack.Push(-2058.923f);
	Stack.Push(-1291.287f);
	Stack.Push(116.7038f);
	Stack.Push(15);
	Call_Loc(iParam0);
	Stack.Push(119);
	Stack.Push(-4483.045f);
	Stack.Push(-2944.134f);
	Stack.Push(-19.1217f);
	Stack.Push(16);
	Call_Loc(iParam0);
}

void func_111(int iParam0, int iParam1, int iParam2)
{
	if (!__LIB_0__::func_35(iParam0))
	{
		return;
	}
	if (!__LIB_0__::func_69(iParam1))
	{
		return;
	}
	MISC::SET_BIT(&(Global_1310750[iParam0 /*111*/].f_34), iParam1);
	func_386(iParam0, __LIB_3__::func_168(iParam1), iParam2);
}

void func_112(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_35(iParam0))
	{
		return;
	}
	__LIB_0__::func_7(&(Global_1310750[iParam0 /*111*/].f_35), iParam1);
	iVar0 = 0;
	while (iVar0 < 25)
	{
		iVar2 = __LIB_0__::func_470(iVar0);
		if ((iVar2 && iParam1) != 0)
		{
			iVar1 = (17 + iVar0);
			Global_1310750[iParam0 /*111*/].f_64[iVar1] = iParam2;
		}
		iVar0++;
	}
}

void func_113()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = 0;
	while (iVar0 < 17)
	{
		Global_1326862.f_512[iVar0] = iVar4;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 120)
		{
			if ((__LIB_1__::func_85(iVar1, 1) && MISC::IS_BIT_SET(Global_1310750[iVar1 /*111*/].f_34, iVar0)) && !__LIB_3__::func_235(iVar1, 8192))
			{
				Global_1326862.f_11[iVar4] = iVar1;
				iVar4++;
			}
			iVar1++;
		}
		Global_1326862.f_558[iVar0] = (iVar4 - 1);
		iVar0++;
	}
	iVar3 = 0;
	while (iVar3 < 25)
	{
		iVar2 = __LIB_0__::func_470(iVar3);
		Global_1326862.f_512[(17 + iVar3)] = iVar4;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 120)
		{
			if ((__LIB_1__::func_85(iVar1, 2) && func_391(iVar1, iVar2)) && !__LIB_3__::func_235(iVar1, 8192))
			{
				Global_1326862.f_11[iVar4] = iVar1;
				iVar4++;
			}
			iVar1++;
		}
		Global_1326862.f_558[(17 + iVar3)] = (iVar4 - 1);
		iVar3++;
	}
}

void func_117()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 175)
	{
		func_395(iVar0);
		iVar0++;
	}
}

void func_119(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Global_1415419.f_19[iParam0 /*12*/].f_4 = iParam0;
	Global_1415419.f_19[iParam0 /*12*/] = iParam1;
	Global_1415419.f_19[iParam0 /*12*/].f_1 = iParam2;
	Global_1415419.f_19[iParam0 /*12*/].f_2 = iParam3;
	Global_1415419.f_19[iParam0 /*12*/].f_5 = iParam4;
	Global_1415419.f_19[iParam0 /*12*/].f_6 = iParam5;
}

bool func_128()
{
	var uVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar4 = 0;
	iVar6 = 0;
	while (iVar6 < 25)
	{
		iVar5 = __LIB_6__::func_676(iVar6);
		if (ITEMDATABASE::_ITEM_DATABASE_IS_SHOP_KEY_VALID(iVar5))
		{
			iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_INVENTORIES_ITEMS_COUNT(iVar5);
			if (iVar4 > 0)
			{
				iVar3 = 0;
				while (iVar3 < iVar4)
				{
					if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_INVENTORIES_ITEM_INFO(iVar5, iVar3, &uVar0))
					{
						func_408(uVar0);
					}
					iVar3++;
				}
			}
		}
		iVar6++;
	}
	return true;
}

void func_129(var uParam0)
{
	struct<4> Var0;
	var uVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, 1454239731, "weather_groups");
	DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, -1414071153, "group");
	DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, -1922022867, "group(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, 22618052, "weather");
	DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, -263946049, "weather(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, 1518212392, ":name");
	DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, -744273763, ":allowed");
	Var0 = *uParam0;
	Var0.f_1 = 0;
	Var0.f_2 = 1454239731;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar5, &Var0))
	{
		return;
	}
	Var0.f_1 = uVar5;
	Var0.f_2 = -1414071153;
	iVar11 = DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		Var0.f_1 = uVar5;
		Var0.f_2 = -1922022867;
		Var0.f_3 = iVar12;
		if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar6, &Var0))
		{
		}
		else
		{
			Var0.f_1 = uVar6;
			Var0.f_2 = 1518212392;
			if (!DATAFILE::_DATAFILE_GET_HASH(&iVar8, &Var0))
			{
			}
			else
			{
				iVar13 = iVar8;
				iVar14 = __LIB_4__::func_347(iVar13, 1);
				Var0.f_1 = uVar6;
				Var0.f_2 = 22618052;
				iVar15 = DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
				iVar16 = 0;
				while (iVar16 < iVar15)
				{
					Var0.f_1 = uVar6;
					Var0.f_2 = -263946049;
					Var0.f_3 = iVar16;
					if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar7, &Var0))
					{
					}
					else
					{
						Var0.f_1 = uVar7;
						Var0.f_2 = 1518212392;
						if (!DATAFILE::_DATAFILE_GET_HASH(&iVar9, &Var0))
						{
						}
						else
						{
							iVar17 = iVar9;
							iVar18 = __LIB_4__::func_350(iVar17, 1);
							if (iVar18 < 0 || iVar18 > 31)
							{
							}
							else
							{
								Var0.f_1 = uVar7;
								Var0.f_2 = -744273763;
								if (!DATAFILE::_DATAFILE_GET_BOOL(&bVar10, &Var0))
								{
								}
								else if (iVar14 < 0 || iVar14 >= 15)
								{
								}
								else if (bVar10)
								{
									MISC::SET_BIT(&(Global_1934765.f_302[iVar14]), iVar18);
								}
								else
								{
									MISC::CLEAR_BIT(&(Global_1934765.f_302[iVar14]), iVar18);
								}
							}
						}
					}
					iVar16++;
				}
			}
		}
		iVar12++;
	}
	MISC::SET_BIT(&(Global_1934765.f_301), 0);
}

void func_130()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_411(0);
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
	func_411(1);
}

void func_131()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_414(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_132()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_415(0);
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
	func_415(1);
}

void func_133()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_415(0);
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
	func_415(1);
}

void func_134()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_414(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_414(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_335(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_335(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

void func_143(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_31(iParam0))
	{
		if (bParam1)
		{
			__LIB_19__::func_534(iParam0, joaat("CONSUMABLE_MEDICINE"), 2);
			__LIB_19__::func_534(iParam0, joaat("CONSUMABLE_APPLE"), 1);
			if (__LIB_0__::func_273(iParam0, 4096, 1) && iParam0 != 14)
			{
				__LIB_19__::func_534(iParam0, joaat("CONSUMABLE_CHEWING_TOBACCO"), 1);
			}
			else
			{
				__LIB_19__::func_534(iParam0, joaat("CONSUMABLE_TONIC"), 1);
			}
		}
		else
		{
			__LIB_19__::func_534(iParam0, joaat("CONSUMABLE_MEDICINE"), 1);
			__LIB_19__::func_534(iParam0, joaat("AMMO_RIFLE_AMMOBOX"), 2);
			if (__LIB_1__::func_985())
			{
				__LIB_19__::func_534(iParam0, joaat("CONSUMABLE_CHEWING_TOBACCO"), 1);
				__LIB_19__::func_534(iParam0, joaat("AMMO_PISTOL_AMMOBOX"), 1);
			}
			else
			{
				__LIB_19__::func_534(iParam0, joaat("CONSUMABLE_WHISKEY"), 1);
			}
		}
	}
}

void func_144()
{
	Global_1360165[0 /*1157*/].f_65[0] = 2228322;
	Global_1360165[0 /*1157*/].f_65[1] = 1074065741;
	Global_1360165[0 /*1157*/].f_65[2] = 22528;
	Global_1360165[1 /*1157*/].f_65[0] = 144158;
	Global_1360165[1 /*1157*/].f_65[1] = 1073852744;
	Global_1360165[1 /*1157*/].f_65[2] = 16478;
	Global_1360165[2 /*1157*/].f_65[0] = 1074176226;
	Global_1360165[2 /*1157*/].f_65[1] = 1074647372;
	Global_1360165[2 /*1157*/].f_65[2] = 26624;
	Global_1360165[3 /*1157*/].f_65[0] = 176226;
	Global_1360165[3 /*1157*/].f_65[1] = 520524;
	Global_1360165[3 /*1157*/].f_65[2] = 2048;
	Global_1360165[4 /*1157*/].f_65[0] = 52432898;
	Global_1360165[4 /*1157*/].f_65[1] = 328;
	Global_1360165[4 /*1157*/].f_65[2] = 131072;
	Global_1360165[5 /*1157*/].f_65[0] = 131074;
	Global_1360165[5 /*1157*/].f_65[1] = 1074057548;
	Global_1360165[5 /*1157*/].f_65[2] = 20480;
	Global_1360165[6 /*1157*/].f_65[0] = 136487010;
	Global_1360165[6 /*1157*/].f_65[1] = 1175056840;
	Global_1360165[6 /*1157*/].f_65[2] = 18432;
	Global_1360165[7 /*1157*/].f_65[0] = 807575554;
	Global_1360165[7 /*1157*/].f_65[1] = 1074893256;
	Global_1360165[7 /*1157*/].f_65[2] = 16384;
	Global_1360165[8 /*1157*/].f_65[0] = 1617920;
	Global_1360165[8 /*1157*/].f_65[1] = 1210089800;
	Global_1360165[8 /*1157*/].f_65[2] = 16384;
	Global_1360165[9 /*1157*/].f_65[0] = 176130;
	Global_1360165[9 /*1157*/].f_65[1] = 1074123080;
	Global_1360165[9 /*1157*/].f_65[2] = 16384;
	Global_1360165[10 /*1157*/].f_65[0] = 6146;
	Global_1360165[10 /*1157*/].f_65[1] = 1073744232;
	Global_1360165[10 /*1157*/].f_65[2] = 16384;
	Global_1360165[11 /*1157*/].f_65[0] = 350896130;
	Global_1360165[11 /*1157*/].f_65[1] = 37696;
	Global_1360165[11 /*1157*/].f_65[2] = 1;
	Global_1360165[12 /*1157*/].f_65[1] = 268435456;
	Global_1360165[13 /*1157*/].f_65[0] = 2228226;
	Global_1360165[13 /*1157*/].f_65[1] = 1078251856;
	Global_1360165[13 /*1157*/].f_65[2] = 278528;
	Global_1360165[14 /*1157*/].f_65[0] = 2;
	Global_1360165[14 /*1157*/].f_65[1] = 1073774928;
	Global_1360165[14 /*1157*/].f_65[2] = 378752;
	Global_1360165[15 /*1157*/].f_65[0] = 2;
	Global_1360165[15 /*1157*/].f_65[1] = 1073844544;
	Global_1360165[15 /*1157*/].f_65[2] = 16384;
	Global_1360165[16 /*1157*/].f_65[0] = 2;
	Global_1360165[16 /*1157*/].f_65[1] = 1073779012;
	Global_1360165[16 /*1157*/].f_65[2] = 16384;
	Global_1360165[17 /*1157*/].f_65[0] = 2097154;
	Global_1360165[17 /*1157*/].f_65[1] = 323912;
	Global_1360165[18 /*1157*/].f_65[0] = 143362;
	Global_1360165[18 /*1157*/].f_65[1] = 25170248;
	Global_1360165[19 /*1157*/].f_65[0] = 2;
	Global_1360165[19 /*1157*/].f_65[1] = 1073852864;
	Global_1360165[19 /*1157*/].f_65[2] = 16384;
	Global_1360165[20 /*1157*/].f_65[0] = 98306;
	Global_1360165[20 /*1157*/].f_65[1] = 1073779008;
	Global_1360165[20 /*1157*/].f_65[2] = 16384;
	Global_1360165[21 /*1157*/].f_65[0] = 4098;
	Global_1360165[21 /*1157*/].f_65[1] = 1073746248;
	Global_1360165[21 /*1157*/].f_65[2] = 16384;
	Global_1360165[22 /*1157*/].f_65[0] = 2097154;
	Global_1360165[22 /*1157*/].f_65[1] = 1073852736;
	Global_1360165[22 /*1157*/].f_65[2] = 16384;
	Global_1360165[23 /*1157*/].f_65[0] = 135168;
	Global_1360165[23 /*1157*/].f_65[1] = 561498;
	Global_1360165[23 /*1157*/].f_65[2] = 262176;
	Global_1360165[24 /*1157*/].f_65[0] = 2097152;
	Global_1360165[24 /*1157*/].f_65[1] = 4194328;
	Global_1360165[24 /*1157*/].f_65[2] = 262144;
	Global_1360165[25 /*1157*/].f_65[0] = 2097152;
	Global_1360165[25 /*1157*/].f_65[1] = 24;
	Global_1360165[25 /*1157*/].f_65[2] = 262144;
	Global_1360165[26 /*1157*/].f_65[0] = 2;
	Global_1360165[26 /*1157*/].f_65[1] = 536872028;
	Global_1360165[26 /*1157*/].f_65[2] = 262144;
}

void func_150()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		Global_1879534.f_7288[iVar0] = 0;
		iVar0++;
	}
}

void func_151()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 240)
	{
		Global_1879534.f_211[iVar0 /*4*/] = 0;
		Global_1879534.f_211[iVar0 /*4*/].f_1 = 1;
		Global_1879534.f_211[iVar0 /*4*/].f_2 = 2;
		Global_1879534.f_211[iVar0 /*4*/].f_3 = 3;
		iVar0++;
	}
}

void func_152()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 350)
	{
		Global_1879534.f_1172[iVar0 /*2*/] = 0;
		Global_1879534.f_1172[iVar0 /*2*/].f_1 = 1;
		iVar0++;
	}
}

void func_153()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		StringCopy(&(Global_1879534.f_1873[iVar0 /*4*/]), "NOT_SETUP", 32);
		iVar0++;
	}
}

void func_154()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		StringCopy(&(Global_1879534.f_1878[iVar0 /*8*/]), "NOT_SETUP", 32);
		Global_1879534.f_1878[iVar0 /*8*/].f_4 = 0;
		Global_1879534.f_1878[iVar0 /*8*/].f_5 = 0;
		Global_1879534.f_1878[iVar0 /*8*/].f_6 = 0;
		Global_1879534.f_1878[iVar0 /*8*/].f_7 = 0;
		iVar0++;
	}
}

void func_155()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_1879534.f_1897[iVar0 /*12*/] = -1;
		Global_1879534.f_1897[iVar0 /*12*/].f_1 = -1;
		Global_1879534.f_1897[iVar0 /*12*/].f_2 = -1;
		Global_1879534.f_1897[iVar0 /*12*/].f_3 = -1;
		Global_1879534.f_1897[iVar0 /*12*/].f_4 = -1;
		Global_1879534.f_1897[iVar0 /*12*/].f_6 = -1;
		Global_1879534.f_1897[iVar0 /*12*/].f_7 = -1;
		Global_1879534.f_1897[iVar0 /*12*/].f_10 = 0;
		Global_1879534.f_1897[iVar0 /*12*/].f_11 = 0;
		iVar0++;
	}
}

void func_156()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_1879534.f_1887[iVar0 /*9*/] = 0;
		StringCopy(&(Global_1879534.f_1887[iVar0 /*9*/].f_1), "", 32);
		Global_1879534.f_1887[iVar0 /*9*/].f_5 = 0;
		Global_1879534.f_1887[iVar0 /*9*/].f_6 = -1;
		Global_1879534.f_1887[iVar0 /*9*/].f_7 = -1;
		Global_1879534.f_1887[iVar0 /*9*/].f_8 = 0;
		iVar0++;
	}
}

void func_157()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1770)
	{
		Global_1879534.f_1911[iVar0 /*3*/] = -1;
		Global_1879534.f_1911[iVar0 /*3*/].f_1 = 12;
		Global_1879534.f_1911[iVar0 /*3*/].f_2 = -1;
		iVar0++;
	}
	Global_1879534.f_7287 = 0;
}

void func_158()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1879534.f_7300)
	{
		Global_1879534.f_7222[iVar0 /*2*/] = -1;
		Global_1879534.f_7222[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
}

void func_160(int iParam0)
{
	if (!iParam0 < Global_1879534.f_7300)
	{
		return;
	}
	if (!Global_1879534.f_7222[iParam0 /*2*/] == -1)
	{
		return;
	}
	Global_1879534.f_7222[iParam0 /*2*/] = Global_1879534.f_7287;
}

void func_161()
{
	int iVar0;
	iVar0 = 12;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1750917831;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = -1;
	func_437(iVar0);
}

void func_162(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1913176419;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	iVar1 = 0;
	if (iParam0 == -1)
	{
		iVar2 = 0;
	}
	else
	{
		MISC::SET_BIT(&iVar1, 0);
		iVar2 = iParam0;
	}
	if (iParam1 == -1)
	{
		iVar3 = 0;
	}
	else
	{
		MISC::SET_BIT(&iVar1, 1);
		iVar3 = iParam1;
	}
	if (iParam2 == -1)
	{
		iVar4 = 0;
	}
	else
	{
		MISC::SET_BIT(&iVar1, 2);
		iVar4 = iParam2;
	}
	if (iParam3 == -1)
	{
		iVar5 = 1;
	}
	else
	{
		MISC::SET_BIT(&iVar1, 3);
		iVar5 = iParam3;
	}
	if (iParam4 == -1)
	{
		iVar6 = 1;
	}
	else
	{
		MISC::SET_BIT(&iVar1, 4);
		iVar6 = iParam4;
	}
	if (iParam5 == -1)
	{
		iVar7 = 1898;
	}
	else
	{
		MISC::SET_BIT(&iVar1, 5);
		iVar7 = iParam5;
	}
	__LIB_1__::func_159(&uVar8, iVar4, iVar3, iVar2, iVar5, iVar6, iVar7);
	func_439(Global_1879534.f_7288[iVar0], uVar8, iVar1, -1, -1);
	func_437(iVar0);
}

void func_163(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1535566683;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_164(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1978308683;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_165(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 2001493029;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_166(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 99307713;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_167()
{
	func_436(12);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1520384013;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 12;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = -1;
	func_437(12);
}

void func_168(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1360770031;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, __LIB_0__::func_55(bParam1, 1, 0));
	func_437(iVar0);
}

void func_169(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1738949208;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_170(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 672918768;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 2;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_171(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1181815586;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_172(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -471968486;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	iVar1 = __LIB_0__::func_55(bParam1, 1, 0);
	iVar2 = __LIB_0__::func_55(bParam2, 1, 0);
	func_439(Global_1879534.f_7288[iVar0], iParam0, iVar1, iVar2, 0);
	func_437(iVar0);
}

void func_173(int iParam0, float fParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1472568760;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	fParam1 = (fParam1 * 100f);
	fParam2 = (fParam2 * 100f);
	iVar1 = BUILTIN::ROUND(fParam1);
	iVar2 = BUILTIN::ROUND(fParam2);
	if (iParam0 == 27)
	{
	}
	func_439(Global_1879534.f_7288[iVar0], iParam0, iVar1, iVar2, 0);
	func_437(iVar0);
}

void func_174(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -756450532;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_175(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1331093620;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_176(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -259205396;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_177(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1815455941;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_178(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -914010892;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_179(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1536300574;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_180(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 477724652;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_181(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -346691420;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_182(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -549926405;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_183(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1449067653;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, iParam2, iParam3);
	func_437(iVar0);
}

void func_184()
{
	int iVar0;
	if (Global_1934765.f_69.f_201 <= 0)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_1934765.f_69.f_201 - 1))
	{
		if (Global_1934765.f_69[iVar0 /*2*/].f_1)
		{
			func_198(Global_1934765.f_69[iVar0 /*2*/]);
		}
		else
		{
			func_227(Global_1934765.f_69[iVar0 /*2*/]);
		}
		iVar0++;
	}
}

void func_185(bool bParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 794205136;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = __LIB_0__::func_55(bParam0, 1, 0);
	func_437(0);
}

void func_186(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1156263964;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, __LIB_0__::func_55(bParam1, 1, 0));
	func_437(iVar0);
}

void func_187(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1598787124;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, __LIB_0__::func_55(bParam1, 1, 0), __LIB_0__::func_55(bParam2, 1, 0), 0);
	func_437(iVar0);
}

void func_188(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1438979859;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_189(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 147262072;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_190(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1673286084;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_191(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -663280148;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	iVar1 = 0;
	if (bParam1)
	{
		MISC::SET_BIT(&iVar1, 0);
	}
	if (bParam2)
	{
		MISC::SET_BIT(&iVar1, 1);
	}
	if (bParam3)
	{
		MISC::SET_BIT(&iVar1, 2);
	}
	func_439(Global_1879534.f_7288[iVar0], iParam0, iVar1, iParam4, 0);
	func_437(iVar0);
}

void func_192(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 901529234;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	iVar1 = 0;
	if (bParam1)
	{
		iVar1 = 1;
	}
	func_440(Global_1879534.f_7288[iVar0], iParam0, iVar1);
	func_437(iVar0);
}

void func_193(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	iVar0 = 1;
	func_436(iVar0);
	if (bParam4)
	{
		Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 363897013;
	}
	else
	{
		Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1225435693;
	}
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	if (iParam2 != -1)
	{
		while ((iParam2 % 24) > 0)
		{
			iParam3++;
			iParam2 = (iParam2 - 24);
		}
	}
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, iParam2, iParam3);
	func_437(iVar0);
}

void func_194(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -2030110303;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_195(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 203794828;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_196(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1408274960;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, __LIB_0__::func_55(bParam1, 1, 0));
	func_437(iVar0);
}

void func_197(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -868169264;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_198(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1289504437;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_199(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1628808209;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_200(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1063874733;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_201(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 670944580;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_202(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -486436146;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_203(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 111818573;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_204()
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1093832731;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	func_437(0);
}

void func_205()
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -159886710;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	func_437(0);
}

void func_206(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 225795806;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_207(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 40566325;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_208(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -2042718100;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_209(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1371030896;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_210(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1677774865;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(iVar0);
}

void func_211(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	func_436(iVar0);
	iVar1 = iParam0;
	iVar1 = (iVar1 + (iParam1 * 1000000));
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1982716178;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iVar1;
	func_437(iVar0);
}

void func_212(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 995574226;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_213(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -718595174;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_214(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1729634664;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, __LIB_0__::func_55(bParam1, 1, 0));
	func_437(iVar0);
}

void func_215()
{
	int iVar0;
	iVar0 = 12;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1909997983;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = -1;
	func_437(iVar0);
}

void func_216(int iParam0)
{
	if (!iParam0 < Global_1879534.f_7300)
	{
		return;
	}
	if (Global_1879534.f_7222[iParam0 /*2*/] == -1)
	{
		return;
	}
	if (!Global_1879534.f_7222[iParam0 /*2*/].f_1 == -1)
	{
		return;
	}
	if (Global_1879534.f_7222[iParam0 /*2*/] == Global_1879534.f_7287)
	{
		Global_1879534.f_7222[iParam0 /*2*/] = -1;
		return;
	}
	Global_1879534.f_7222[iParam0 /*2*/].f_1 = (Global_1879534.f_7287 - 1);
	if (Global_1879534.f_7301.f_2[iParam0 /*4*/].f_1 == -1)
	{
		Global_1879534.f_7301.f_2[iParam0 /*4*/].f_1 = Global_1879534.f_7222[iParam0 /*2*/];
	}
}

void func_217(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 656468362;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	if (iParam0 == -1)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iParam1 == -1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = iParam1;
	}
	if (iParam2 == -1)
	{
		iVar3 = 0;
	}
	else
	{
		iVar3 = iParam2;
	}
	if (iParam3 == -1)
	{
		iVar4 = 1;
	}
	else
	{
		iVar4 = iParam3;
	}
	if (iParam4 == -1)
	{
		iVar5 = 1;
	}
	else
	{
		iVar5 = iParam4;
	}
	if (iParam5 == -1)
	{
		iVar6 = 1898;
	}
	else
	{
		iVar6 = iParam5;
	}
	__LIB_1__::func_159(&uVar7, iVar3, iVar2, iVar1, iVar4, iVar5, iVar6);
	func_440(Global_1879534.f_7288[iVar0], uVar7, -1);
	func_437(iVar0);
}

void func_218(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -915138989;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, iParam2, iParam3);
	func_437(iVar0);
}

void func_219(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -148700515;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_220(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 2121795512;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_221(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1053276381;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_222(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1120129944;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_223(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -508972844;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(iVar0);
}

void func_224(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -2049944022;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(iVar0);
}

void func_225(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 759449782;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_226(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1378868385;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, __LIB_0__::func_55(bParam1, 1, 0));
	func_437(iVar0);
}

void func_227(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 26902781;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_228(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -780657756;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_229(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 634895793;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_230(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1050963831;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_231(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -90803914;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, __LIB_0__::func_55(bParam1, 1, 0));
	func_437(iVar0);
}

void func_232(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 47963769;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_233(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1015095530;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_234(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 939785963;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_235(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -2093459088;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_236(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1210875743;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	if (iParam0 < 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, iParam2, -1);
	func_437(iVar0);
}

void func_237(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	func_436(iVar0);
	iVar1 = iParam0;
	iVar1 = (iVar1 + (iParam1 * 1000000));
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -964850613;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iVar1;
	func_437(iVar0);
}

void func_238(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 498793617;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, __LIB_0__::func_55(bParam1, 1, 0), iParam2, 0);
	func_437(iVar0);
}

void func_239(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1785731347;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, iParam2, -1);
	func_437(iVar0);
}

void func_240(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -217347738;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_241(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < Global_1879534.f_7287)
	{
		if (Global_1879534.f_1911[iVar1 /*3*/] == 531432813)
		{
			iVar2 = Global_1879534.f_1911[iVar1 /*3*/].f_2;
			iVar3 = Global_1879534.f_211[iVar2 /*4*/];
			if (iVar3 == iParam0)
			{
				return;
			}
		}
		iVar1++;
	}
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 531432813;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	iVar4 = 0;
	if (bParam1)
	{
		iVar4 = 1;
	}
	func_439(Global_1879534.f_7288[iVar0], iParam0, iVar4, -1, -1);
	func_437(iVar0);
}

void func_242(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1984622930;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, -1, -1);
	func_437(iVar0);
}

void func_243(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -138866642;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam1, iParam0);
	func_437(iVar0);
}

void func_244(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	func_436(iVar0);
	iVar1 = iParam0;
	iVar1 = (iVar1 + (iParam1 * 1000000));
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1878191811;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iVar1;
	func_437(iVar0);
}

void func_245(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1805087304;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_246(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1523883609;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_247(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 987244216;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_248(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 2025667422;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_249(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -566605714;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_250(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 442105888;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, iParam2, iParam3);
	func_437(iVar0);
}

void func_251(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1083639171;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, iParam2, -1);
	func_437(iVar0);
}

void func_252(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1810366898;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, iParam2, iParam3);
	func_437(iVar0);
}

void func_253(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 891989563;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_254(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1281917784;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, iParam2, iParam3);
	func_437(iVar0);
}

void func_255(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 630069176;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_256(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1271429659;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_257(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1940826795;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_258(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 2055336839;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_259(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1509183597;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, iParam2, -1);
	func_437(iVar0);
}

void func_260(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1941172569;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_261(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1883692561;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_262(bool bParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1672441969;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = __LIB_0__::func_55(bParam0, 1, 0);
	func_437(0);
}

void func_263(bool bParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 460788415;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = __LIB_0__::func_55(bParam0, 1, 0);
	func_437(0);
}

void func_264(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 7411042;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, __LIB_0__::func_55(bParam1, 1, 0));
	func_437(iVar0);
}

void func_265(bool bParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 644587471;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = __LIB_0__::func_55(bParam0, 1, 0);
	func_437(0);
}

void func_266(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -716094127;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_267(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -391651599;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, iParam2, iParam3);
	func_437(iVar0);
}

void func_268(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -838803174;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam2, iParam1, -1);
	func_437(iVar0);
}

void func_269(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -801023198;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_270(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -289754349;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_271(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 242535924;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_272(bool bParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -845953794;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = __LIB_0__::func_55(bParam0, 1, 0);
	func_437(0);
}

void func_273()
{
	func_436(12);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -401276712;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 12;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = -1;
	func_437(12);
}

void func_274()
{
	func_436(12);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1398429376;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 12;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = -1;
	func_437(12);
}

void func_275()
{
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 2038286720;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	func_437(0);
}

void func_276(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -42848759;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_277(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -990335083;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_278(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1260617938;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_279(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1831856550;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_280(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1440757252;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_281(var uParam0)
{
	struct<74> Var0;
	Var0.f_36 = joaat("WORLD_HUMAN_LEAN_BACK_WALL");
	Var0.f_38 = 1;
	Var0.f_65 = 1117126656;
	Var0.f_66 = 1120403456;
	Var0.f_68 = 45000;
	*uParam0 = { Var0 };
}

void func_282(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, char* sParam6, vector3 vParam7, int iParam10, int iParam11)
{
	if (!__LIB_0__::func_83(iParam0))
	{
		return;
	}
	if (!SCRIPTS::DOES_SCRIPT_EXIST(sParam2) && __LIB_0__::func_2() == -1)
	{
		return;
	}
	if (__LIB_0__::func_175(vParam7, 0f, 0f, 0f, 1056964608 /* Float: 0.5f */, 1))
	{
		return;
	}
	Global_1835011[iParam0 /*74*/] = iParam1;
	StringCopy(&(Global_1835011[iParam0 /*74*/].f_3), sParam2, 32);
	Global_1835011[iParam0 /*74*/].f_68 = iParam11;
	StringCopy(&(Global_1835011[iParam0 /*74*/].f_8), sParam3, 8);
	Global_1835011[iParam0 /*74*/].f_1 = __LIB_1__::func_293(iParam0, iParam1, 1, 0);
	if (!__LIB_0__::func_6(Global_1835011[iParam0 /*74*/].f_1))
	{
		return;
	}
	if (__LIB_0__::func_746(Global_1835011[iParam0 /*74*/].f_1) == -1)
	{
		__LIB_1__::func_242(Global_1835011[iParam0 /*74*/].f_1, 0);
	}
	Global_1835011[iParam0 /*74*/].f_29 = iParam4;
	Global_1835011[iParam0 /*74*/].f_18 = { vParam7 };
	Global_1835011[iParam0 /*74*/].f_21 = __LIB_1__::func_447(Global_1835011[iParam0 /*74*/].f_18, 1);
	Global_1835011[iParam0 /*74*/].f_26 = iParam10;
	__LIB_9__::func_72(iParam0, sParam5);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6) && SCRIPTS::DOES_SCRIPT_EXIST(sParam6))
	{
		StringCopy(&(Global_1835011[iParam0 /*74*/].f_12), sParam6, 32);
		Global_1835011[iParam0 /*74*/].f_17 = 1;
	}
	Global_1835011[iParam0 /*74*/].f_30 = 0;
	func_285(iParam0, 1117126656 /* Float: 75f */, 1120403456 /* Float: 100f */, 1128792064 /* Float: 200f */);
}

void func_283(int iParam0, char* sParam1)
{
	if (!__LIB_0__::func_83(iParam0))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (!SCRIPTS::DOES_SCRIPT_EXIST(sParam1))
	{
		return;
	}
	StringCopy(&(Global_1835011[iParam0 /*74*/].f_22), sParam1, 32);
}

void func_284(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_83(iParam0))
	{
		return;
	}
	if (!__LIB_0__::func_31(iParam1))
	{
		return;
	}
	__LIB_0__::func_7(&(Global_1835011[iParam0 /*74*/].f_30), BUILTIN::SHIFT_LEFT(1, iParam1));
}

void func_285(int iParam0, float fParam1, float fParam2, int iParam3)
{
	if (!__LIB_0__::func_83(iParam0))
	{
		return;
	}
	if (fParam2 <= fParam1)
	{
		return;
	}
	Global_1835011[iParam0 /*74*/].f_65 = fParam1;
	Global_1835011[iParam0 /*74*/].f_66 = fParam2;
	Global_1835011[iParam0 /*74*/].f_67 = iParam3;
}

void func_309(int iParam0)
{
	int iVar0;
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = __LIB_1__::func_953(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	__LIB_9__::func_118(iParam0);
	__LIB_9__::func_132(iParam0);
	__LIB_8__::func_764();
	if (iVar0 == 9)
	{
		func_484(-524145696, 0, 0);
	}
}

void func_310(int iParam0)
{
	func_485();
	switch (iParam0)
	{
		case 0:
			__LIB_9__::func_120(-1303.82f, 2431.232f, 307.1254f, 254.7021f, 2);
			__LIB_9__::func_120(-1331.61f, 2479.874f, 308.7661f, 343.4772f, 1);
			__LIB_9__::func_120(-1367.155f, 2401.237f, 305.9231f, 182.5857f, 0);
			break;
		case 1:
			__LIB_9__::func_120(-40.4062f, 24.7958f, 92.5989f, 345.8244f, 2);
			__LIB_9__::func_120(-46.6053f, 49.3195f, 89.4332f, 32.7929f, 2);
			__LIB_9__::func_120(-89.1265f, 74.3389f, 88.5412f, 341.7615f, 1);
			__LIB_9__::func_120(-117.2523f, 26.8954f, 84.9916f, 71.3425f, 1);
			__LIB_9__::func_120(-92.892f, 50.1228f, 87.8695f, 45.8778f, 1);
			__LIB_9__::func_120(-13.6112f, -0.4862f, 101.6951f, 255.2034f, 2);
			__LIB_9__::func_120(-32.3882f, -18.9331f, 103.6418f, 237.7177f, 3);
			__LIB_9__::func_120(-19.8908f, -62.5598f, 103.873f, 267.298f, 3);
			__LIB_9__::func_120(-33.2324f, -103.5739f, 101.7936f, 255.1129f, 3);
			__LIB_9__::func_120(-69.4097f, -128.0305f, 97.0682f, 221.4977f, 3);
			__LIB_9__::func_120(-79.3456f, -103.7585f, 91.473f, 66.6098f, 3);
			__LIB_9__::func_120(-134.3901f, -69.9172f, 90.3402f, 108.8014f, 0);
			__LIB_9__::func_120(-163.3076f, -54.9202f, 89.2085f, 130.3788f, 0);
			__LIB_9__::func_120(-7.8651f, 34.202f, 96.8284f, 252.726f, 2);
			break;
		case 2:
			__LIB_9__::func_120(773.3724f, -1152.694f, 46.0144f, 287.6862f, 1);
			__LIB_9__::func_120(678.071f, -1106.928f, 50.6427f, 308.8809f, 1);
			__LIB_9__::func_120(694.5107f, -1273.256f, 42.5974f, 276.0894f, 3);
			__LIB_9__::func_120(624.2226f, -1093.59f, 44.0105f, 324.7204f, 1);
			__LIB_9__::func_120(695.23f, -1204.24f, 44.84f, -75.427f, 0);
			break;
		case 3:
			__LIB_9__::func_120(1814.452f, -1812.884f, 47.3854f, 46.0618f, 0);
			__LIB_9__::func_120(1844.125f, -1770.289f, 44.872f, 354.3456f, 0);
			__LIB_9__::func_120(1774.591f, -1878.943f, 45.1128f, 1.1527f, 0);
			__LIB_9__::func_120(1751.868f, -1959.416f, 47.0387f, 100.6328f, 3);
			__LIB_9__::func_120(1818.659f, -2009.734f, 43.2796f, 94.403f, 3);
			break;
		case 6:
			__LIB_9__::func_120(2372.828f, 1302.302f, 108.3737f, 193.8477f, 2);
			__LIB_9__::func_120(2299.087f, 1370.095f, 100.6253f, 148.7151f, 1);
			__LIB_9__::func_120(2325.401f, 1301.158f, 95.0156f, 220.5325f, 2);
			break;
	}
}

int func_335(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_335(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	__LIB_1__::func_879(iParam0, iParam1);
	return 1;
}

void func_366()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	__LIB_0__::func_245(0);
	__LIB_10__::func_17(0, Global_1946804.f_2653, 0);
	__LIB_10__::func_17(1, Global_1946804.f_2654, 0);
	__LIB_10__::func_17(2, Global_1946804.f_2655, 0);
	iVar0 = 5;
	iVar1 = 6;
	iVar2 = 7;
	iVar3 = 0;
	Global_1946804.f_1497.f_1[iVar0 /*3*/] = { Global_1946804.f_1378.f_1[iVar0 /*3*/] };
	Global_1946804.f_1497.f_1[iVar1 /*3*/] = { Global_1946804.f_1378.f_1[iVar1 /*3*/] };
	Global_1946804.f_1497.f_1[iVar2 /*3*/] = { Global_1946804.f_1378.f_1[iVar2 /*3*/] };
	Global_1946804.f_1497.f_1[iVar3 /*3*/] = { Global_1946804.f_1378.f_1[iVar3 /*3*/] };
	__LIB_9__::func_970();
	__LIB_10__::func_827();
}

void func_369()
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = Global_1946804.f_1378.f_1[iVar0 /*3*/];
	if (!__LIB_7__::func_790() && __LIB_9__::func_435(iVar1))
	{
		Global_1946804.f_1378.f_1[iVar0 /*3*/] = __LIB_9__::func_436(iVar1);
	}
	__LIB_0__::func_245(0);
	Global_1946804.f_1497.f_1[iVar0 /*3*/] = { Global_1946804.f_1378.f_1[iVar0 /*3*/] };
	__LIB_9__::func_441();
	Global_40.f_7748.f_2 = __LIB_9__::func_434();
	__LIB_10__::func_907(Global_1946804.f_2656, 0);
	__LIB_9__::func_446();
}

void func_376(var uParam0)
{
	struct<30> Var0;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_34 = 0;
	uParam0->f_36 = 0;
	uParam0->f_38 = 0;
	StringCopy(&(uParam0->f_40), "", 32);
	uParam0->f_44 = 0f;
	uParam0->f_45 = 0;
	uParam0->f_46 = 0;
	uParam0->f_48 = 0;
	uParam0->f_54 = 0f;
	uParam0->f_55 = 0f;
	uParam0->f_56 = 0f;
	uParam0->f_57 = 0f;
	uParam0->f_58 = 0f;
	uParam0->f_59 = 0f;
	uParam0->f_60 = 0f;
	uParam0->f_110 = -1;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = 8;
	Var0.f_4.f_1.f_1 = -1;
	Var0.f_4.f_1.f_3.f_1 = -1;
	Var0.f_4.f_1.f_3.f_3.f_1 = -1;
	Var0.f_4.f_1.f_3.f_3.f_3.f_1 = -1;
	Var0.f_4.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_4.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_4.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_4.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	uParam0->f_4 = { Var0 };
}

void func_381(bool bParam0)
{
	if (bParam0)
	{
		Global_1310750.f_16036++;
	}
	else
	{
		Global_1310750.f_16036 = (Global_1310750.f_16036 - 1);
		if (Global_1310750.f_16036 < 0)
		{
			Global_1310750.f_16036 = 0;
		}
	}
}

void func_386(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 3:
			Global_1310750[iParam0 /*111*/].f_64[0] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[2] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[11] = iParam2;
			break;
		case 0:
			Global_1310750[iParam0 /*111*/].f_64[1] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[7] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[6] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[12] = iParam2;
			break;
		case 2:
			Global_1310750[iParam0 /*111*/].f_64[3] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[10] = iParam2;
			break;
		case 1:
			Global_1310750[iParam0 /*111*/].f_64[4] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[9] = iParam2;
			break;
		case 4:
			Global_1310750[iParam0 /*111*/].f_64[8] = iParam2;
			break;
		case 5:
			Global_1310750[iParam0 /*111*/].f_64[13] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[14] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[15] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[16] = iParam2;
			break;
	}
}

bool func_391(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_35(iParam0))
	{
		return false;
	}
	return __LIB_0__::func_27(Global_1310750[iParam0 /*111*/].f_35, iParam1);
}

void func_395(int iParam0)
{
	Global_1911914[iParam0 /*9*/] = 0;
}

void func_408(var uParam0)
{
	UNLOCK::_UNLOCK_SET_NEW(__LIB_0__::func_57(uParam0), true);
}

void func_411(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_414(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_414(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_414(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_578(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_95(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_335(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_584(Var0);
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

int func_414(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
		return 0;
	}
	if (!__LIB_1__::func_831(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!__LIB_1__::func_795(iParam0, &iVar0, iParam1))
	{
		return 0;
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
				func_414(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			func_633(iParam0);
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
				return 0;
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
						func_414(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_414(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_414(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_414(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_414(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_414(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (__LIB_0__::func_192(iParam0, -839724752) && __LIB_0__::func_774(iParam0, 4))
		{
			if (!__LIB_1__::func_154(42))
			{
				__LIB_1__::func_816(iParam0);
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
				func_414(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_414(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_414(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			return 0;
		}
		iVar10 = iParam0;
		__LIB_0__::func_371(&iVar10);
		if (!__LIB_1__::func_825(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!__LIB_0__::func_708(0))
		{
			return 1;
		}
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
		{
			__LIB_9__::func_309(iParam0);
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
				func_414(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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
	return 1;
}

void func_415(bool bParam0)
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
		func_414(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_414(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_414(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_414(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_414(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_414(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_414(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_414(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_414(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_414(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_414(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_335(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_335(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_335(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_335(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_335(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_335(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_335(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_335(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_335(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_335(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_335(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

void func_436(int iParam0)
{
	if (Global_1879534.f_7287 >= 1770)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
		case 12:
			break;
		case 1:
			if (Global_1879534.f_7288[iParam0] >= 240)
			{
				return;
			}
			break;
		case 2:
			if (Global_1879534.f_7288[iParam0] >= 350)
			{
				return;
			}
			break;
		case 7:
			if (Global_1879534.f_7288[iParam0] >= 1)
			{
				return;
			}
			break;
		case 8:
			if (Global_1879534.f_7288[iParam0] >= 1)
			{
				return;
			}
			break;
		case 3:
			if (Global_1879534.f_7288[iParam0] >= 1)
			{
				return;
			}
			break;
		case 4:
			if (Global_1879534.f_7288[iParam0] >= 1)
			{
				return;
			}
			break;
		case 5:
			if (Global_1879534.f_7288[iParam0] >= 1)
			{
				return;
			}
			break;
		case 6:
			if (Global_1879534.f_7288[iParam0] >= 1)
			{
				return;
			}
			break;
		default:
			break;
	}
}

void func_437(int iParam0)
{
	Global_1879534.f_7287++;
	if (!iParam0 == 12)
	{
		Global_1879534.f_7288[iParam0]++;
	}
}

void func_439(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_1879534.f_211[iParam0 /*4*/] = iParam1;
	Global_1879534.f_211[iParam0 /*4*/].f_1 = iParam2;
	Global_1879534.f_211[iParam0 /*4*/].f_2 = iParam3;
	Global_1879534.f_211[iParam0 /*4*/].f_3 = iParam4;
}

void func_440(int iParam0, int iParam1, int iParam2)
{
	Global_1879534.f_1172[iParam0 /*2*/] = iParam1;
	Global_1879534.f_1172[iParam0 /*2*/].f_1 = iParam2;
}

void func_484(int iParam0, bool bParam1, bool bParam2)
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
			Jump @2851; //curOff = 556
			__LIB_0__::func_804(1497516462);
			__LIB_0__::func_803(2016141805);
			__LIB_0__::func_804(1010885152);
			__LIB_0__::func_804(-502324015);
			Jump @2851; //curOff = 595
			__LIB_0__::func_804(1497516462);
			__LIB_0__::func_804(2016141805);
			__LIB_0__::func_803(1010885152);
			__LIB_0__::func_804(-502324015);
			Jump @2851; //curOff = 634
			__LIB_0__::func_804(1497516462);
			__LIB_0__::func_804(2016141805);
			__LIB_0__::func_804(1010885152);
			__LIB_0__::func_803(-502324015);
			Jump @2851; //curOff = 673
			__LIB_0__::func_804(-538889627);
			__LIB_0__::func_804(-538880323);
			__LIB_0__::func_804(-1056767524);
			__LIB_0__::func_803(iParam0);
			Jump @2851; //curOff = 709
			__LIB_1__::func_73();
			__LIB_0__::func_803(iParam0);
			Jump @2851; //curOff = 722
			__LIB_1__::func_74();
			__LIB_0__::func_803(iParam0);
			Jump @2851; //curOff = 735
			__LIB_0__::func_804(-664252410);
			__LIB_0__::func_804(2109952320);
			__LIB_0__::func_803(2019386373);
			Jump @2851; //curOff = 765
			__LIB_0__::func_804(2019386373);
			__LIB_0__::func_804(2109952320);
			__LIB_0__::func_803(-664252410);
			Jump @2851; //curOff = 795
			__LIB_0__::func_804(2019386373);
			__LIB_0__::func_804(-664252410);
			__LIB_0__::func_803(2109952320);
			Jump @2851; //curOff = 825
			__LIB_0__::func_804(-1835851517);
			__LIB_0__::func_804(-1838352012);
			__LIB_0__::func_803(-1674179981);
			Jump @2851; //curOff = 855
			__LIB_0__::func_804(-1674179981);
			__LIB_0__::func_804(-1838352012);
			__LIB_0__::func_803(-1835851517);
			Jump @2851; //curOff = 885
			__LIB_0__::func_804(-1674179981);
			__LIB_0__::func_804(-1835851517);
			__LIB_0__::func_803(-1838352012);
			Jump @2851; //curOff = 915
			__LIB_0__::func_804(210001842);
			__LIB_0__::func_803(-1717960576);
			Jump @2851; //curOff = 936
			__LIB_0__::func_804(-1717960576);
			__LIB_0__::func_803(210001842);
			Jump @2851; //curOff = 957
			__LIB_0__::func_804(-1271608261);
			__LIB_0__::func_804(1846061697);
			__LIB_0__::func_804(-1145519186);
			__LIB_0__::func_803(-150493654);
			Jump @2851; //curOff = 996
			__LIB_0__::func_804(-150493654);
			__LIB_0__::func_804(1846061697);
			__LIB_0__::func_804(-1145519186);
			__LIB_0__::func_803(-1271608261);
			Jump @2851; //curOff = 1035
			__LIB_0__::func_804(-150493654);
			__LIB_0__::func_804(-1271608261);
			__LIB_0__::func_804(-1145519186);
			__LIB_0__::func_803(1846061697);
			Jump @2851; //curOff = 1074
			__LIB_0__::func_804(-150493654);
			__LIB_0__::func_804(-1271608261);
			__LIB_0__::func_804(1846061697);
			__LIB_0__::func_803(-1145519186);
			Jump @2851; //curOff = 1113
			__LIB_0__::func_804(280705402);
			__LIB_0__::func_804(1926308480);
			__LIB_0__::func_803(1766284049);
			Jump @2851; //curOff = 1143
			__LIB_0__::func_804(1766284049);
			__LIB_0__::func_804(1926308480);
			__LIB_0__::func_803(280705402);
			Jump @2851; //curOff = 1173
			__LIB_0__::func_804(1766284049);
			__LIB_0__::func_804(280705402);
			__LIB_0__::func_803(1926308480);
			Jump @2851; //curOff = 1203
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
			Jump @2851; //curOff = 1250
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
			Jump @2851; //curOff = 1291
			__LIB_0__::func_804(-1612662716);
			__LIB_0__::func_803(1822001510);
			Jump @2851; //curOff = 1312
			__LIB_0__::func_804(1822001510);
			__LIB_0__::func_803(-1612662716);
			Jump @2851; //curOff = 1333
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(1306158345);
			Jump @2851; //curOff = 1381
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(1952610440);
			Jump @2851; //curOff = 1429
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(-223469678);
			Jump @2851; //curOff = 1477
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(-404698347);
			Jump @2851; //curOff = 1525
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_803(1517904467);
			Jump @2851; //curOff = 1573
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(1376646519);
			Jump @2851; //curOff = 1621
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(931649776);
			Jump @2851; //curOff = 1669
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(-434590080);
			Jump @2851; //curOff = 1717
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(1743048395);
			Jump @2851; //curOff = 1765
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_803(449774763);
			Jump @2851; //curOff = 1813
			__LIB_0__::func_804(38162571);
			__LIB_0__::func_804(1350391819);
			__LIB_0__::func_804(54073871);
			__LIB_0__::func_803(-1414537028);
			Jump @2851; //curOff = 1852
			__LIB_0__::func_804(-1414537028);
			__LIB_0__::func_804(1350391819);
			__LIB_0__::func_804(54073871);
			__LIB_0__::func_803(38162571);
			Jump @2851; //curOff = 1891
			__LIB_0__::func_804(-1414537028);
			__LIB_0__::func_804(38162571);
			__LIB_0__::func_804(54073871);
			__LIB_0__::func_803(1350391819);
			Jump @2851; //curOff = 1930
			__LIB_0__::func_804(-1414537028);
			__LIB_0__::func_804(38162571);
			__LIB_0__::func_804(1350391819);
			__LIB_0__::func_803(54073871);
			Jump @2851; //curOff = 1969
			__LIB_0__::func_803(198200492);
			__LIB_0__::func_804(-1124061431);
			__LIB_0__::func_804(52706132);
			__LIB_0__::func_804(-259123672);
			Jump @2851; //curOff = 2008
			__LIB_0__::func_804(198200492);
			__LIB_0__::func_803(-1124061431);
			__LIB_0__::func_804(52706132);
			__LIB_0__::func_804(-259123672);
			Jump @2851; //curOff = 2047
			__LIB_0__::func_804(198200492);
			__LIB_0__::func_804(-1124061431);
			__LIB_0__::func_803(52706132);
			__LIB_0__::func_804(-259123672);
			Jump @2851; //curOff = 2086
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
void func_485()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		Global_1357549.f_1497.f_32[iVar0 /*5*/] = { 0f, 0f, 0f };
		Global_1357549.f_1497.f_32[iVar0 /*5*/].f_3 = 0f;
		Global_1357549.f_1497.f_32[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	Global_1357549.f_1497.f_108 = 0;
}

void func_578(int iParam0)
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
	func_335(iParam0, 1, 1, -142743235, 1);
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
		func_335(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_584(struct<6> Param0)
{
	if (!func_806(Param0.f_4, 1))
	{
	}
	if (!func_806(Param0, 1))
	{
	}
	if (!func_806(Param0.f_2, 1))
	{
	}
	if (!func_806(Param0.f_5, 1))
	{
	}
	if (!func_806(Param0.f_3, 1))
	{
	}
	if (!func_806(Param0.f_1, 1))
	{
	}
}

void func_633(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_01"), 1);
			__LIB_1__::func_240(437, 0);
			__LIB_1__::func_240(440, 0);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			__LIB_0__::func_433(1);
			func_484(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			__LIB_0__::func_433(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			__LIB_0__::func_433(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			__LIB_0__::func_433(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			__LIB_1__::func_240(438, 0);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			__LIB_0__::func_433(32768);
			break;
		default:
			__LIB_1__::func_240(439, 0);
			break;
	}
}

bool func_806(int iParam0, int iParam1)
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
				if (func_806(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_806(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_806(iVar20, 0))
				{
				}
			}
			iVar21 = func_980(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_806(iVar21, 1))
				{
				}
			}
		}
		func_981();
		return true;
	}
	return false;
}

int func_980(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HORSE_EQUIPMENT_WESTERN_01_SPECIAL_NEW_SADDLE_000"):
			return 263080063 /* GXTEntry: "Trapper Blanket" */;
		case joaat("HORSE_EQUIPMENT_MOTHERHUBBARD_01_SPECIAL_NEW_SADDLE_000"):
			return -34331381 /* GXTEntry: "Trapper Blanket" */;
			Jump @103; //curOff = 67
			return -993578318 /* GXTEntry: "Trapper Blanket" */;
			Jump @103; //curOff = 78
			return 579268144 /* GXTEntry: "Trapper Blanket" */;
			Jump @103; //curOff = 89
			return 1104489688 /* GXTEntry: "Trapper Blanket" */;
			return 0;
		}
int func_981()
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar14;
	bool bVar15;
	struct<4> Var16;
	int iVar20;
	int iVar21;
	Var0 = { __LIB_1__::func_615(856287005, 0, 0) };
	Var5 = { __LIB_0__::func_429(856287005, Var0, Var0.f_4, 0) };
	iVar10 = __LIB_0__::func_357(856287005);
	if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, 0, &iVar11))
	{
		iVar14 = __LIB_1__::func_81(Var5, joaat("SLOTID_HORSE_SADDLE"), 0);
	}
	if (!__LIB_0__::func_144(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = __LIB_0__::func_857(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = __LIB_1__::func_81(Var5, iVar11, 0);
			if (!__LIB_0__::func_144(iVar21, 0))
			{
				if (iVar11 == joaat("SLOTID_HORSE_HORN"))
				{
					if (__LIB_0__::func_848(iVar14) || __LIB_0__::func_847(iVar14))
					{
					}
					else
					{
						Jump @219; //curOff = 194
						if (iVar11 == joaat("SLOTID_HORSE_STIRRUP"))
						{
							if (__LIB_0__::func_848(iVar14))
							{
							}
							else
							{
								bVar15 = true;
								Jump @259; //curOff = 222
								if (iVar11 == joaat("SLOTID_HORSE_BLANKET"))
								{
									if (!__LIB_0__::func_848(iVar14) && __LIB_0__::func_688(iVar21))
									{
										bVar15 = true;
									}
								}
								if (bVar15)
								{
									if (__LIB_1__::func_419(iVar11, &Var16, 1))
									{
										if (!__LIB_1__::func_556(Var16, 1))
										{
										}
									}
								}
							}
							iVar9++;
							return 1;
						}
					}
				}
			}
		}
	}
}

