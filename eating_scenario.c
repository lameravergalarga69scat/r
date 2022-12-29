#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	int iLocal_4 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion
void __EntryFunction__()
{
	iLocal_0 = 1;
	iLocal_2 = vScriptParam_0.x;
	uLocal_3 = vScriptParam_0.y;
	iLocal_4 = vScriptParam_0.z;
	__LIB_0__::func_11();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		__LIB_5__::func_616();
	}
	while (!SCRIPTS::_0x9E4EF615E307FBBE() && __LIB_2__::func_821())
	{
		__LIB_0__::func_11();
		__LIB_3__::func_126();
		func_6();
		BUILTIN::WAIT(0);
	}
	__LIB_5__::func_616();
}

void func_6()
{
	if (PED::IS_PED_INJURED(Global_35) || !PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		iLocal_0 = 0;
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")))
	{
		__LIB_9__::func_160(12.5f, 1, 0, 1);
		__LIB_9__::func_277(10f, 1);
		switch (iLocal_4)
		{
			case joaat("PROP_PLAYER_EAT_ALMONDS_COUNTER"):
				func_14(-241345764 /* GXTEntry: "Almonds" */, 1);
				break;
			case joaat("PROP_PLAYER_EAT_PICKLED_EGG"):
				func_14(-1735850413 /* GXTEntry: "Pickled Egg" */, 1);
				break;
		}
	}
}

void func_14(int iParam0, bool bParam1)
{
	struct<2> Var0;
	struct<6> Var22;
	int iVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	bool bVar37;
	var uVar38;
	var uVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;
	Var0.f_1 = 20;
	if ((__LIB_0__::func_192(iParam0, 1573112293) || __LIB_0__::func_192(iParam0, 672467738)) || __LIB_0__::func_192(iParam0, -550842268))
	{
		bVar37 = true;
	}
	if (__LIB_0__::func_356(iParam0) == joaat("CONSUMABLE"))
	{
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam0, &Var0);
		ATTRIBUTE::_0xD962F8579D702DB5();
		iVar29 = 0;
		while (iVar29 < Var0)
		{
			if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var0.f_1[iVar29], &Var22))
			{
			}
			else if (-943921969 == Var22.f_1)
			{
				fVar30 = __LIB_6__::func_38(0, Var22.f_2);
				__LIB_0__::func_145(Var22.f_2, 1);
				__LIB_0__::func_597(0, 7000);
				bVar41 = true;
			}
			else if (-1104847406 == Var22.f_1)
			{
				fVar31 = __LIB_6__::func_38(2, Var22.f_2);
				__LIB_0__::func_188(Var22.f_2);
				__LIB_0__::func_597(2, 7000);
				bVar40 = true;
			}
			else if (381158954 == Var22.f_1)
			{
				fVar32 = __LIB_6__::func_38(1, Var22.f_2);
				__LIB_0__::func_146(Var22.f_2);
				__LIB_0__::func_597(1, 7000);
			}
			else if (-416929031 == Var22.f_1)
			{
				fVar33 = __LIB_7__::func_828(Var22.f_2, Var22.f_5);
				if (__LIB_7__::func_848(&uVar38, &uVar39, fVar33))
				{
					__LIB_9__::func_160(fVar33, 1, bVar37, bParam1);
					__LIB_0__::func_597(0, 7000);
				}
				bVar41 = true;
			}
			else if (1857353317 == Var22.f_1)
			{
				fVar34 = __LIB_7__::func_828(Var22.f_2, Var22.f_5);
				if (__LIB_7__::func_848(&uVar38, &uVar39, fVar34))
				{
					__LIB_9__::func_159(fVar34, 1, bVar37, bParam1);
					__LIB_0__::func_597(2, 7000);
				}
				bVar40 = true;
			}
			else if (1681823811 == Var22.f_1)
			{
				fVar35 = __LIB_7__::func_828(Var22.f_2, Var22.f_5);
				if (__LIB_7__::func_848(&uVar38, &uVar39, fVar35))
				{
					__LIB_9__::func_158(fVar35, 1, bVar37, bParam1);
					__LIB_0__::func_597(1, 7000);
				}
			}
			else if (2062242710 == Var22.f_1)
			{
				fVar36 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				__LIB_9__::func_278(19, fVar36);
				bVar41 = true;
			}
			else if (-826379728 == Var22.f_1)
			{
				fVar36 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				__LIB_9__::func_278(20, fVar36);
				bVar40 = true;
			}
			else if (-1191740624 == Var22.f_1)
			{
				fVar36 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				__LIB_9__::func_278(18, fVar36);
			}
			else if (1869697234 == Var22.f_1)
			{
				fVar36 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				__LIB_9__::func_278(0, fVar36);
				bVar41 = true;
			}
			else if (1342237631 == Var22.f_1)
			{
				fVar36 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				__LIB_9__::func_278(2, fVar36);
				bVar40 = true;
			}
			else if (-1240225157 == Var22.f_1)
			{
				fVar36 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				__LIB_9__::func_278(1, fVar36);
			}
			else if (-816334026 == Var22.f_1)
			{
				__LIB_9__::func_277(BUILTIN::TO_FLOAT(Var22.f_2), 1);
			}
			iVar29++;
		}
		if (bVar41)
		{
			if (fVar33 > 0f || fVar30 > 0f)
			{
				bVar42 = true;
			}
		}
		if (bVar42 || __LIB_0__::func_192(iParam0, -537818634))
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("MEDICINE_ITEMS_USED")), 1);
		}
		if (__LIB_0__::func_192(iParam0, -1457797660))
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("PROVISION_ITEMS_USED")), 1);
		}
		if (bVar40)
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("DEADEYE_ITEMS_USED")), 1);
		}
		PLAYER::_0x0E1DB1F8F5B561DC(fVar30, fVar32, fVar31, BUILTIN::ROUND((fVar33 / 2f)), BUILTIN::ROUND((fVar35 / 2f)), BUILTIN::ROUND((fVar34 / 2f)));
	}
}

