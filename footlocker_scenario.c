#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	struct<155> Local_21 = { 0, 0, 10, 0, 0, 0, 0, 0, -1, 2, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 } ;
	vector3 vLocal_176 = { 0f, 1f, 0f };
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	bool bLocal_181 = false;
	bool bLocal_182 = false;
	bool bLocal_183 = false;
	bool bLocal_184 = false;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	bool bLocal_189 = false;
	bool bLocal_190 = false;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	char* sLocal_193 = NULL;
	char[] cLocal_194[8] = 0;
	vector3 vLocal_195 = { 0f, 0f, 0f };
	vector3 vLocal_198 = { 0f, 0f, 0f };
	int iLocal_201 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion
void __EntryFunction__()
{
	iLocal_0 = 1;
	fLocal_12 = 1f;
	fLocal_13 = 1f;
	iLocal_20 = -1;
	iLocal_2 = vScriptParam_0.x;
	uLocal_3 = vScriptParam_0.y;
	uLocal_4 = vScriptParam_0.z;
	__LIB_0__::func_11();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2();
	}
	while (!SCRIPTS::_0x9E4EF615E307FBBE() && __LIB_2__::func_821())
	{
		__LIB_0__::func_11();
		__LIB_3__::func_126();
		func_6();
		BUILTIN::WAIT(0);
	}
	func_2();
}

void func_2()
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(iLocal_2);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_2__::func_822();
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_6()
{
	if (PED::IS_PED_INJURED(Global_35))
	{
		iLocal_0 = 0;
		return;
	}
	if (!bLocal_184 && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
	{
		bLocal_184 = true;
	}
	sLocal_193 = "scenario@MECH@PLAYER_OPEN_MISCCHEST@EXIT";
	if (!ENTITY::DOES_ENTITY_EXIST(Local_21.f_5))
	{
		bLocal_181 = true;
		Local_21.f_6 = uLocal_3;
		Local_21.f_5 = __LIB_5__::func_726();
	}
	switch (iLocal_201)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_21.f_5))
			{
				func_13(&Local_21);
				__LIB_12__::func_596(Local_21.f_5);
				Local_21.f_3 = !__LIB_12__::func_591(Local_21.f_5);
				Local_21.f_1 = ENTITY::GET_ENTITY_MODEL(Local_21.f_5);
				vLocal_176.f_2 = 0.122f;
				vLocal_176.f_1 = 0.736f;
				func_16(&Local_21);
				iLocal_185 = func_17();
				if (iLocal_185 == 0)
				{
					iLocal_201 = 3;
				}
				else
				{
					iLocal_186 = func_18();
					cLocal_194 = "OBJECT1";
					vLocal_195 = { -0.0131f, 0.052f, 0.0977f };
					vLocal_198 = { 0f, 0f, -12.264f };
					iLocal_201 = 1;
				}
			}
			break;
		case 1:
			if (iLocal_186 == 0)
			{
				if (iLocal_20 < 0)
				{
					iLocal_20 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_193, 0, 0, false, true);
					ANIMSCENE::LOAD_ANIM_SCENE(iLocal_20);
				}
			}
			if (bLocal_181)
			{
				func_19(&iLocal_187, &iLocal_185, &Local_21, &iLocal_191, cLocal_194, vLocal_195, vLocal_198, 0, 1, 1, 0, bLocal_189);
				func_19(&iLocal_188, &iLocal_186, &Local_21, &iLocal_192, "OBJECT2", 0.1751f, -0.0163f, 0.1059f, 0f, 0f, -52.5738f, 0, 1, 1, 0, bLocal_190);
			}
			if (iLocal_187 >= 2 && iLocal_188 >= 2)
			{
				iLocal_201 = 2;
			}
			break;
		case 2:
			if (bLocal_181)
			{
				func_19(&iLocal_187, &iLocal_185, &Local_21, &iLocal_191, cLocal_194, vLocal_195, vLocal_198, 0, 1, 0, 0, bLocal_189);
				func_19(&iLocal_188, &iLocal_186, &Local_21, &iLocal_192, "OBJECT2", 0.1751f, -0.0163f, 0.1059f, 0f, 0f, -52.5738f, 0, 1, 0, 0, bLocal_190);
			}
			if (iLocal_187 == 4 && iLocal_188 == 4)
			{
				iLocal_201 = 3;
			}
			break;
		case 3:
			break;
	}
	if (!bLocal_182 && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(vLocal_176.x))
	{
		func_20(&vLocal_176, &bLocal_183, &bLocal_182);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1755159785))
	{
		if (!bLocal_183)
		{
			vLocal_176.x = TASK::_0x2C497BDEF897C6DF(Global_35);
			bLocal_183 = true;
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2072536589))
	{
		if (iLocal_19 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_191))
			{
				AUDIO::_0xC886CD666ADD42E1(Global_35, bLocal_189);
			}
		}
		else if (iLocal_19 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_192))
			{
				AUDIO::_0xC886CD666ADD42E1(Global_35, bLocal_190);
			}
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")))
	{
		iLocal_19++;
		if (iLocal_19 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_191))
			{
				__LIB_2__::func_919(iLocal_191, 0, 1);
				OBJECT::DELETE_OBJECT(&iLocal_191);
				func_22(&(Local_21.f_23), 2, 0, 752097756);
			}
		}
		else if (iLocal_19 == 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_192))
			{
				__LIB_2__::func_919(iLocal_192, 0, 1);
				OBJECT::DELETE_OBJECT(&iLocal_192);
				func_22(&(Local_21.f_26), 10, 0, 752097756);
			}
			bLocal_182 = true;
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 266921527))
	{
		if (iLocal_186 == 0)
		{
			TASK::_0xD999E379265A4501(Global_35, sLocal_193, 0);
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			bLocal_182 = true;
		}
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
		iLocal_0 = 0;
		bLocal_182 = true;
	}
}

void func_7()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_21.f_5))
	{
		if (bLocal_184)
		{
			if (!__LIB_5__::func_725(Local_21.f_5))
			{
				__LIB_12__::func_597(Local_21.f_5);
			}
		}
		else
		{
			func_25(&Local_21);
		}
	}
	func_26(&iLocal_191, bLocal_184);
	func_26(&iLocal_192, bLocal_184);
}

void func_13(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_103[iVar0 /*5*/] = -1;
		uParam0->f_103[iVar0 /*5*/].f_3 = 0;
		uParam0->f_103[iVar0 /*5*/].f_1 = 0;
		uParam0->f_103[iVar0 /*5*/].f_2 = 0f;
		uParam0->f_103[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
}

void func_16(var uParam0)
{
	struct<13> Var0;
	int iVar23;
	int iVar24;
	if (uParam0->f_3 && __LIB_12__::func_592(uParam0->f_5))
	{
		return;
	}
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	if (!__LIB_12__::func_593(uParam0->f_5))
	{
		MISC::_0x48E4D50F87A96AA5(*uParam0, 1, 1, uParam0->f_1, &Var0, 0);
	}
	if (Var0 <= 0 && !uParam0->f_3)
	{
		return;
	}
	if (uParam0->f_3)
	{
		func_33(uParam0, &Var0, 10);
	}
	if (uParam0->f_2 > 10)
	{
		uParam0->f_2 = 10;
	}
	iVar23 = 0;
	while (iVar23 < uParam0->f_2)
	{
		uParam0->f_26[iVar23] = Var0.f_1[iVar23];
		if (uParam0->f_103[iVar23 /*5*/].f_4 != 0)
		{
			uParam0->f_12[iVar23] = uParam0->f_103[iVar23 /*5*/].f_4;
		}
		else
		{
			iVar24 = TASK::_0xE47DD64B9F02677D(Var0.f_1[iVar23]);
			if (iVar24 == 0 && uParam0->f_26[iVar23] != 0)
			{
				uParam0->f_12[iVar23] = joaat("SCRIPTEDBALL");
			}
			else
			{
				uParam0->f_12[iVar23] = iVar24;
			}
		}
		iVar23++;
	}
}

int func_17()
{
	int iVar0;
	if (func_34(&(Local_21.f_6)))
	{
		iVar0 = func_35(Local_21, &bLocal_189);
	}
	else
	{
		iVar0 = func_36(&Local_21, &bLocal_189, 0);
	}
	return iVar0;
}

int func_18()
{
	int iVar0;
	iVar0 = func_36(&Local_21, &bLocal_190, 1);
	return iVar0;
}

void func_19(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, vector3 vParam5, vector3 vParam8, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	switch (*iParam0)
	{
		case 0:
			if (*iParam1 != 0)
			{
				STREAMING::REQUEST_MODEL(*iParam1, false);
				*iParam0 = 1;
			}
			else
			{
				*iParam0 = 4;
			}
			break;
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(*iParam1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_5))
				{
					if (uParam2->f_154 != -1)
					{
						vVar3 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam2->f_5, uParam2->f_154) };
						vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, ENTITY::GET_ENTITY_HEADING(uParam2->f_5), vParam5) };
					}
					else
					{
						vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam2->f_5, vParam5) };
					}
				}
				else if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam2->f_6))
				{
					vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(uParam2->f_6, true), TASK::_GET_SCENARIO_POINT_HEADING(uParam2->f_6, true), vParam5) };
				}
			else
			{
				}
				else
				{
					*iParam3 = OBJECT::CREATE_OBJECT(*iParam1, vVar0, true, true, false, false, bParam11);
					ENTITY::SET_ENTITY_INVINCIBLE(*iParam3, true);
					OBJECT::_0x1461DF6DB886BE3F(*iParam3);
					if (bParam12)
					{
						iVar6 = __LIB_0__::func_55(uParam2->f_4, uParam2->f_154, 0);
						vVar0 = { __LIB_5__::func_263(uParam2->f_4, vParam5, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam2->f_5, ENTITY::GET_ENTITY_COORDS(*iParam3, true, false))) };
						ENTITY::ATTACH_ENTITY_TO_ENTITY(*iParam3, uParam2->f_5, iVar6, vVar0, vParam8, false, false, false, false, 2, true, false, false);
					}
					else
					{
						ENTITY::SET_ENTITY_ROTATION(*iParam3, vParam8, 2, true);
					}
					*iParam0 = 2;
					Jump @359; //curOff = 348
					if (bParam14)
					{
					}
					Jump @502; //curOff = 359
					if (!bParam13)
					{
						if (bParam15 != 0)
						{
							iVar7 = 3;
						}
						else
						{
							iVar7 = 4;
						}
						if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
						{
							*iParam0 = iVar7;
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(*iParam3))
						{
							*iParam0 = iVar7;
						}
						else if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam2->f_6))
						{
							*iParam0 = iVar7;
						}
						else if (TASK::_0x8360C47380B6F351(uParam2->f_6, *iParam3, sParam4, 1))
						{
							*iParam0 = iVar7;
						}
						else if (bParam14)
						{
							*iParam0 = iVar7;
						}
					}
					Jump @502; //curOff = 474
					if (bParam15 != 0)
					{
						TASK::_0xA6A76D666A281F2D(*iParam3, bParam15);
						*iParam0 = 4;
					}
				}
			}
			default:
				break;
	}
}

void func_20(int iParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam0))
	{
		return;
	}
	if (*bParam1)
	{
		fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(*iParam0);
		fVar1 = ((fVar0 - iParam0->f_2) / (iParam0->f_1 - iParam0->f_2));
		if (fVar1 >= 0f)
		{
			iParam0->f_3 = fVar1;
		}
		if (iParam0->f_3 >= 1f && !*bParam2)
		{
			*bParam2 = 1;
		}
		if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_CONTEXT_Y")))
		{
			iParam0->f_4 = iParam0->f_3;
		}
	}
}

void func_22(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (__LIB_0__::func_144((*uParam0)[iVar0], 0))
		{
			func_40((*uParam0)[iVar0], 1, bParam2, 0, 0, iParam3, 0, 0, 0, 0);
		}
		iVar0++;
	}
}

void func_25(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_5);
		switch (uParam0->f_103[iVar0 /*5*/])
		{
			case 0:
				__LIB_9__::func_700(0, 0f, 0f, 0f, &iVar1, uParam0->f_103[iVar0 /*5*/].f_2, 0, 0);
				break;
			case 2:
				func_45(0, 0f, 0f, 0f, &iVar1, WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(__LIB_0__::func_937(uParam0->f_103[iVar0 /*5*/].f_3, 1)), 0, 0, 0);
				break;
			case 3:
				func_47(0, 0f, 0f, 0f, &iVar1, __LIB_0__::func_775(uParam0->f_103[iVar0 /*5*/].f_3, 1), 0, 0);
				break;
			case 1:
				__LIB_3__::func_583(0, 0f, 0f, 0f, uParam0->f_37[iVar0 /*3*/], uParam0->f_68[iVar0 /*3*/], &iVar1, uParam0->f_103[iVar0 /*5*/].f_3, 1, 0, 0, uParam0->f_103[iVar0 /*5*/].f_4);
				break;
			case -1:
				Jump @231; //curOff = 216
				iVar0++;
			}
		}
void func_26(int* iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!bParam1)
		{
			OBJECT::DELETE_OBJECT(iParam0);
		}
	}
}

void func_33(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	while (!__LIB_12__::func_591(uParam0->f_5) && iVar8 < iParam2)
	{
		iVar0 = __LIB_18__::func_565(uParam0->f_5, &uVar9, &uVar1, &uVar10, &uVar11, &vVar2, &vVar5);
		if (__LIB_0__::func_144(iVar0, 0))
		{
			func_50(uParam0, uVar1, vVar2, vVar5, iVar0, uVar9, uVar10, uVar11);
			iParam1->f_1[iVar8] = iVar0;
			iVar8++;
		}
	}
}

bool func_34(var uParam0)
{
	return TASK::_0x6718F40313A2B5A6(*uParam0) >= 0.99f;
}

int func_35(struct<6> Param0, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, bool bParam155)
{
	int iVar0;
	switch (__LIB_1__::func_898())
	{
		case 10:
			if (__LIB_0__::func_94(Param0.f_5, func_52(1), 1) < 15f)
			{
				iVar0 = joaat("SCRIPTEDBALL");
				*bParam155 = joaat("CONSUMABLE_MEDICINE");
			}
			break;
		case -1:
			if (__LIB_0__::func_94(Param0.f_5, func_52(2), 1) < 15f)
			{
				iVar0 = joaat("SCRIPTEDBALL");
				*bParam155 = joaat("CONSUMABLE_MEDICINE");
			}
			break;
	}
	return iVar0;
}

int func_36(var uParam0, bool bParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= uParam0->f_26)
	{
		*bParam1 = 0;
		return joaat("SCRIPTEDBALL");
	}
	*bParam1 = uParam0->f_26[iParam2];
	return uParam0->f_12[iParam2];
}

int func_40(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
	if (!__LIB_3__::func_917(iParam0, iParam1, bParam2, iParam5))
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
				func_40(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		__LIB_7__::func_501(28);
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
			if (!__LIB_3__::func_915(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("AMMO") && __LIB_0__::func_258(iParam0))
		{
			if (!__LIB_3__::func_708(iParam0, &iVar0, iParam5))
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
			__LIB_1__::func_846(iParam0);
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
						func_40(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_40(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_40(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_40(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_40(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_40(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_40(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_7__::func_501(24);
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
					func_40(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_40(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		if (!__LIB_3__::func_427(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!__LIB_0__::func_708(0))
		{
			return 1;
		}
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
		{
			__LIB_7__::func_685(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_9__::func_8(iParam0);
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
				func_40(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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
		__LIB_3__::func_868(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_45(int iParam0, vector3 vParam1, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam4))
	{
		*uParam4 = __LIB_3__::func_326(iParam0, vParam1, iParam7, iParam8);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam4))
	{
		__LIB_9__::func_7(*uParam4, iParam5, iParam6, 1);
	}
}

void func_47(int iParam0, vector3 vParam1, var uParam4, int iParam5, int iParam6, int iParam7)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam4))
	{
		*uParam4 = __LIB_3__::func_326(iParam0, vParam1, iParam6, iParam7);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam4))
	{
		func_141(*uParam4, iParam5);
	}
}

void func_50(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5, int iParam8, var uParam9, var uParam10, var uParam11)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_103[iVar0 /*5*/] == -1)
		{
			uParam0->f_103[iVar0 /*5*/] = uParam1;
			uParam0->f_103[iVar0 /*5*/].f_3 = iParam8;
			uParam0->f_103[iVar0 /*5*/].f_1 = uParam9;
			uParam0->f_103[iVar0 /*5*/].f_2 = uParam10;
			uParam0->f_103[iVar0 /*5*/].f_4 = uParam11;
			if (!__LIB_0__::func_86(vParam2))
			{
				uParam0->f_37[iVar0 /*3*/] = { vParam2 };
			}
			if (!__LIB_0__::func_86(vParam5))
			{
				uParam0->f_68[iVar0 /*3*/] = { vParam5 };
			}
		}
		else
		{
			iVar0++;
		}
	}
}

Vector3 func_52(int iParam0)
{
	vector3 vVar0;
	switch (iParam0)
	{
		case 1:
			vVar0 = { 2313.51f, 1031.721f, 78.5643f };
			break;
		case 2:
			vVar0 = { 159.2609f, -1436.622f, 42f };
			break;
	}
	return vVar0;
}

void func_141(int iParam0, int iParam1)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = __LIB_1__::func_986(iParam0);
		__LIB_2__::func_74(iParam0, iParam1, 1, iVar0);
	}
	else
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_weapon", iParam1);
	}
}

