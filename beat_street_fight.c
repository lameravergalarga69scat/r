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
	var uLocal_14 = 1;
	var uLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17[4] = { 0, 0, 0, 0 };
	var uLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	bool bLocal_26 = false;
	vector3 vLocal_27[4] = {{ 2,802597E-45f, 0f, 0f }, { 2,802597E-45f, 0f, 0f }, { 2,802597E-45f, 0f, 0f }, { 2,802597E-45f, 0f, 0f } };
	bool bLocal_40 = false;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	bool bLocal_43 = false;
	bool bLocal_44 = false;
	bool bLocal_45 = false;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	float fLocal_57 = 0f;
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	struct<26> Local_64 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	bool bLocal_93 = false;
	bool bLocal_94 = false;
	bool bLocal_95 = false;
	bool bLocal_96 = false;
	var uLocal_97 = 5;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	int iLocal_177 = 0;
	var uLocal_178[4] = { 0, 0, 0, 0 };
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	var uLocal_187[4] = { 0, 0, 0, 0 };
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	var uLocal_203 = 0;
	int iLocal_204 = 0;
	int iLocal_205 = 0;
	int iLocal_206 = 0;
	bool bLocal_207 = false;
	bool bLocal_208 = false;
	bool bLocal_209 = false;
	bool bLocal_210 = false;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	struct<32> Local_215[4];
	struct<162> Local_344 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 1;
	var uLocal_511 = 1;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = -1;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 1;
	var uLocal_529 = -1;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	int iLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	struct<2> Local_546[5];
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 1176256512;
	var uLocal_560 = 0;
	int iLocal_561 = 0;
	int iLocal_562 = 0;
	int iLocal_563 = 0;
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	struct<8> Local_567 = { 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_575 = 2;
	var uLocal_576 = 1;
	var uLocal_577 = 1;
	var uLocal_578 = 1;
	var uLocal_579 = 0;
	var uLocal_580 = 1;
	var uLocal_581 = 2;
	var uLocal_582 = 2;
	var uLocal_583 = 3;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 3;
	var uLocal_587 = 1;
	var uLocal_588 = 3;
	var uLocal_589 = 3;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	int iLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = -1;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 1097859072;
	var uLocal_612 = 1000;
	var uLocal_613 = 1067450368;
	var uLocal_614 = 5000;
	var uLocal_615 = 42;
	var uLocal_616 = 1103626240;
	var uLocal_617 = 1077936128;
	var uLocal_618 = 1106247680;
	var uLocal_619 = 1103101952;
	var uLocal_620 = 1097859072;
	var uLocal_621 = 1103626240;
	int iLocal_622 = 0;
	struct<21> Local_623[4];
	struct<17> Local_708[2];
	struct<17> Local_743[2];
	struct<17> Local_778[2];
	struct<17> Local_813[2];
	struct<17> Local_848[2];
	int iLocal_883 = 0;
	int iLocal_884 = 0;
	int iLocal_885 = 0;
	struct<2> Local_886 = { 0, 0 } ;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	int iLocal_899 = 0;
	int iLocal_900 = 0;
	bool bLocal_901 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_16 = -1;
	iLocal_24 = -1;
	iLocal_52 = -1;
	iLocal_53 = -1;
	iLocal_55 = -1;
	iLocal_56 = -1;
	fLocal_57 = 0f;
	fLocal_58 = 1f;
	fLocal_59 = 1f;
	fLocal_60 = 1f;
	vLocal_61 = { 0f, 0f, 0f };
	iLocal_883 = __LIB_2__::func_340(3, 0, 0);
	iLocal_884 = __LIB_2__::func_340(3, 0, 0);
	iLocal_885 = __LIB_2__::func_340(3, 0, 0);
	Local_344.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	Local_344.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
	uLocal_560 = uLocal_560;
	__LIB_3__::func_368(&Local_344, 1);
	func_5(&iLocal_214, &Local_344, &uLocal_54);
	iLocal_899 = __LIB_1__::func_898();
	if (func_7())
	{
		func_8(&Local_344, 1);
	}
	else
	{
		func_8(&Local_344, 0);
	}
	func_9(&uLocal_594);
	func_9(&(Local_344.f_5));
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_901 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_901, 1417, 0);
		if (bLocal_901)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_563)
			{
				case 0:
					if (func_12())
					{
						func_13(iLocal_214, &fLocal_59, &fLocal_60, &fLocal_58);
						iLocal_563 = 1;
					}
					else if (Local_344.f_160)
					{
						func_10();
					}
					break;
				case 1:
					if (__LIB_3__::func_669(&Local_344, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_15(&Local_344, &iLocal_899, &iLocal_900);
						Local_344.f_51.f_4 = iLocal_900;
						__LIB_3__::func_455(&Local_344, iLocal_899, 2307);
						func_18(&Local_344, &iLocal_899, &iLocal_900);
						func_19(&iLocal_214, iLocal_899, iLocal_900, uLocal_54, Local_344.f_161);
						func_20(iLocal_214, iLocal_899, Local_344.f_51.f_4, &Local_64);
						func_21(&iLocal_538, iLocal_214, iLocal_899, iLocal_900);
						func_22(iLocal_214, iLocal_899, &Local_215);
						func_23(iLocal_214, iLocal_899, iLocal_900);
						func_24();
						func_25(iLocal_214, iLocal_899, iLocal_900);
						func_26();
						iLocal_563 = 2;
					}
					else if (Local_344.f_160)
					{
						func_10();
					}
					break;
				case 2:
					if (func_27(Local_64) && func_28(iLocal_538))
					{
						iLocal_50 = iLocal_538;
						iLocal_563 = 3;
					}
					break;
				case 3:
					if (func_29(&(uLocal_178[1]), &iLocal_185, iLocal_214, Local_344.f_51) && func_30())
					{
						func_31(iLocal_899, Local_344.f_51.f_4, &Local_64);
						func_32(iLocal_899, Local_344.f_51.f_4, &Local_64);
						func_33(iLocal_899, Local_344.f_51.f_4, &Local_64);
						func_34();
						func_35();
						func_36();
						func_37();
						func_38();
						func_39();
						__LIB_0__::func_37(&uLocal_171);
						iLocal_563 = 4;
					}
					if (iLocal_214 != 4)
					{
					}
					else if (!__LIB_0__::func_75(&uLocal_171))
					{
						__LIB_1__::func_283(&uLocal_171, 0);
					}
					else if (__LIB_1__::func_285(&uLocal_171, 15f) && ENTITY::IS_ENTITY_DEAD(uLocal_178[1]))
					{
						func_10();
					}
					if (__LIB_3__::func_431(&Local_344, &uLocal_178, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						func_10();
					}
					break;
				case 4:
					if (!__LIB_3__::func_617(&Local_344, &uLocal_178, iLocal_214, 0, 1, 0, 1, 0))
					{
						func_10();
					}
					if (Local_344.f_46)
					{
						if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, 1) && iLocal_562 != 22)
						{
							func_47();
							__LIB_9__::func_595(22);
						}
					}
					else
					{
						switch (iLocal_214)
						{
							case 4:
								if (func_49())
								{
									Local_344.f_46 = 1;
									__LIB_9__::func_595(10);
								}
								break;
							default:
								if (func_50())
								{
									Local_344.f_46 = 1;
									func_47();
									func_51();
									if (!func_52(16384))
									{
										func_53(iLocal_212, 0);
									}
									else
									{
										func_54(iLocal_212);
									}
									__LIB_9__::func_595(14);
								}
								break;
						}
					}
					if (__LIB_3__::func_431(&Local_344, &uLocal_178, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						Local_344.f_50 = 1;
						func_10();
					}
					if (func_55())
					{
						Local_344.f_50 = 1;
						func_10();
					}
					func_56();
					break;
			}
			BUILTIN::WAIT(Local_344.f_158);
		}
	}
}

void func_5(int iParam0, var uParam1, var uParam2)
{
	*iParam0 = __LIB_3__::func_390(uParam1->f_3, 5, 0);
}

bool func_7()
{
	if (iLocal_214 == 4)
	{
		return true;
	}
	return false;
}

void func_8(var uParam0, bool bParam1)
{
	__LIB_2__::func_433(&(uParam0->f_5));
	__LIB_2__::func_110(&(uParam0->f_5), 1);
	__LIB_2__::func_51(&(uParam0->f_5), bParam1);
	__LIB_2__::func_507(&(uParam0->f_5), 500);
	__LIB_2__::func_183(&(uParam0->f_5), 1, 0, 1);
	__LIB_2__::func_111(&(uParam0->f_5), 0);
	__LIB_2__::func_182(&(uParam0->f_5), 0);
}

void func_9(var uParam0)
{
	__LIB_2__::func_51(uParam0, 1);
	__LIB_2__::func_507(uParam0, 500);
	__LIB_2__::func_183(uParam0, 1, 0, 1);
	__LIB_4__::func_22(uParam0, 2f, 1);
	__LIB_2__::func_110(uParam0, 1);
	__LIB_2__::func_50(uParam0, 0);
	__LIB_2__::func_180(uParam0, 0);
	__LIB_2__::func_613(uParam0, 0);
	__LIB_2__::func_111(uParam0, 0);
	__LIB_2__::func_715(uParam0, 0);
	__LIB_3__::func_230(uParam0, 0);
	__LIB_2__::func_182(uParam0, 1);
}

void func_10()
{
	int iVar0;
	if (__LIB_1__::func_22(4))
	{
		func_73(&(uLocal_178[1]), 4, &(Local_623[1 /*21*/]), &Local_778, iLocal_899);
	}
	__LIB_0__::func_172(iLocal_205);
	__LIB_0__::func_172(iLocal_206);
	Local_344.f_50 = 1;
	__LIB_4__::func_286(&Local_344, &uLocal_178, &uLocal_187, iLocal_214, iLocal_899, iLocal_900, 0, 1, 0, 1);
	__LIB_2__::func_344(&(uLocal_178[0]));
	__LIB_2__::func_480(&Local_708, 0, 0, 1, 0);
	func_78();
	__LIB_3__::func_319(iLocal_50);
	func_80(uLocal_178[iLocal_183]);
	__LIB_4__::func_304(&uLocal_178);
	__LIB_4__::func_20(&(Local_886.f_1));
	__LIB_1__::func_941(1098854605);
	func_84();
	func_85();
	func_86();
	func_87();
	func_88(1);
	func_89(1);
	if (iLocal_197 != 0)
	{
		ENTITY::_0xD2B9C78537ED5759(iLocal_197);
	}
	if (iLocal_198 != 0)
	{
		ENTITY::_0xD2B9C78537ED5759(iLocal_197);
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_2__::func_1(uLocal_178[iVar0], 0, 0))
		{
			PED::SET_PED_CONFIG_FLAG(uLocal_178[iVar0], 217, false);
		}
		iVar0++;
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_Street_Fight_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("RE_Street_Fight_scene");
	}
	STREAMING::_0x9F348DE670423460("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_BASE");
	STREAMING::_0x9F348DE670423460("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_STREAMED");
	STREAMING::_0x9F348DE670423460("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@LOCO@ATTACKER");
	STREAMING::_0x9F348DE670423460("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@LOCO@VICTIM");
	STREAMING::REMOVE_PTFX_ASSET();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_12()
{
	switch (iLocal_561)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_344))
			{
				func_93(&Local_215, iLocal_214, iLocal_899, iLocal_900);
				__LIB_3__::func_284(&Local_215);
				func_95(iLocal_214, &Local_546, &uLocal_97);
				STREAMING::REQUEST_PTFX_ASSET();
				__LIB_4__::func_384(&Local_567);
				iLocal_561 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_0(&uLocal_560, uLocal_92))
			{
				return false;
			}
			if (!__LIB_3__::func_366(&Local_215))
			{
				return false;
			}
			if (!__LIB_3__::func_315(&uLocal_97))
			{
				return false;
			}
			if (!STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				return false;
			}
			if (!STREAMING::_0x85B8F04555AB49B8("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_BASE"))
			{
				return false;
			}
			if (!STREAMING::_0x85B8F04555AB49B8("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_STREAMED"))
			{
				return false;
			}
			if (!STREAMING::_0x85B8F04555AB49B8("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@LOCO@ATTACKER"))
			{
				return false;
			}
			if (!STREAMING::_0x85B8F04555AB49B8("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@LOCO@VICTIM"))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_13(int iParam0, float fParam1, float fParam2, float fParam3)
{
	switch (iParam0)
	{
		case 0:
			*fParam1 = 0.5758f;
			*fParam2 = 0.6315f;
			*fParam3 = 1f;
			break;
		case 1:
		case 2:
			*fParam1 = 0.5448f;
			*fParam2 = 0.5727f;
			*fParam3 = 1f;
			break;
	}
}

void func_15(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 4;
			*iParam2 = 0;
			break;
		case 1:
			*iParam1 = 9;
			*iParam2 = 0;
			break;
		case 2:
			*iParam1 = 9;
			*iParam2 = 1;
			break;
		case 3:
			*iParam1 = 10;
			*iParam2 = 0;
			break;
	}
}

Vector3 func_16(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -89.1f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_18(var uParam0, int iParam1, int iParam2)
{
	switch (*iParam1)
	{
		case 4:
			switch (*iParam2)
			{
				case 0:
					uParam0->f_173 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, -799.5692f, -1320.505f, 44.259f, 0f, 0f, 0f, 18f, 15f, 5f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, -809.5124f, -1336.469f, 44.2586f, 0f, 0f, 0f, 35f, 17f, 5f);
					break;
			}
			break;
		case 9:
			switch (*iParam2)
			{
				case 0:
					uParam0->f_173 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, -309.808f, 786.006f, 119.488f, 0f, 0f, 11f, 100f, 25f, 10f);
					break;
				case 1:
					uParam0->f_173 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, -252.0321f, 760.9167f, 118.0679f, 0f, 0f, 19f, 20f, 75f, 10f);
					break;
			}
			break;
		case 10:
			switch (*iParam2)
			{
				case 0:
					uParam0->f_173 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2960.006f, 522.5409f, 46.9798f, 0f, 0f, 0f, 20f, 75f, 10f);
					break;
			}
			break;
		case 11:
			switch (*iParam2)
			{
				case 0:
					uParam0->f_173 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 1369.239f, -1378.793f, 81.047f, 0f, 0f, -9.75f, 30f, 40f, 8f);
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 1342.579f, -1375.116f, 81.7343f, 0f, 0f, -10.5f, 20f, 12f, 5f);
					break;
			}
			break;
	}
}

void func_19(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	bool bVar0;
	bVar0 = true;
	if (bParam4)
	{
	}
	if (bVar0)
	{
		switch (iParam1)
		{
			case 9:
				switch (iParam2)
				{
					case 0:
						switch (func_105(iParam1, iParam2))
						{
							case 0:
								*iParam0 = 2;
								break;
							case 1:
								*iParam0 = 0;
								break;
							case 2:
								*iParam0 = 1;
								break;
							case 3:
								*iParam0 = 3;
								break;
							default:
								if (*iParam0 == 4)
								{
									*iParam0 = 0;
								}
								break;
						}
						break;
					case 1:
						switch (func_105(iParam1, iParam2))
						{
							case 0:
								if (__LIB_0__::func_113() || __LIB_1__::func_187(9))
								{
									*iParam0 = 4;
								}
								else
								{
									*iParam0 = 1;
								}
								break;
							case 1:
								*iParam0 = 1;
								break;
							case 2:
								*iParam0 = 0;
								break;
							case 3:
								*iParam0 = 3;
								break;
							default:
								if (*iParam0 == 2)
								{
									*iParam0 = 0;
								}
								break;
						}
						break;
				}
				break;
			case 10:
				switch (func_105(iParam1, iParam2))
				{
					case 0:
						*iParam0 = 0;
						break;
					case 1:
						*iParam0 = 1;
						break;
					case 2:
						*iParam0 = 3;
						break;
					default:
						switch (*iParam0)
						{
							case 2:
								*iParam0 = 3;
								break;
							case 4:
								*iParam0 = 0;
								break;
						}
						break;
				}
				break;
			case 4:
				*iParam0 = 4;
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 9:
				switch (iParam2)
				{
					case 0:
						if (*iParam0 == 4)
						{
							*iParam0 = 0;
						}
						break;
					case 1:
						if (*iParam0 == 2)
						{
							*iParam0 = 0;
						}
						break;
				}
				break;
			case 10:
				switch (*iParam0)
				{
					case 2:
						*iParam0 = 3;
						break;
					case 4:
						*iParam0 = 0;
						break;
				}
				break;
			case 4:
				*iParam0 = 4;
				break;
		}
	}
}

void func_20(int iParam0, int iParam1, int iParam2, var uParam3)
{
	switch (iParam1)
	{
		case 10:
			*uParam3 = { 2946.417f, 525.8564f, 44.34274f };
			uParam3->f_3 = { 2951.588f, 526.2109f, 45.47384f };
			uParam3->f_6 = { 2951.618f, 523.3102f, 45.66131f };
			uParam3->f_9 = { 2951.588f, 526.2109f, 45.47384f };
			uParam3->f_12 = { 2946.991f, 523.1688f, 44.36835f };
			break;
		case 4:
			*uParam3 = { -815.6277f, -1318.792f, 42.67896f };
			uParam3->f_3 = { 0f, 0f, 0f };
			uParam3->f_6 = { -810.0895f, -1327.633f, 43.76683f };
			uParam3->f_9 = { 0f, 0f, 0f };
			uParam3->f_12 = { -811.2068f, -1322.647f, 42.67806f };
			break;
		default:
			switch (iParam2)
			{
				case 0:
					*uParam3 = { -312.1026f, 808.2841f, 117.982f };
					uParam3->f_3 = { -303.6723f, 797.997f, 119.2487f };
					uParam3->f_6 = { -307.5079f, 798.4366f, 119.0628f };
					uParam3->f_9 = { -306.6963f, 793.7566f, 116.9643f };
					uParam3->f_12 = { -308.0499f, 801.3186f, 117.9793f };
					break;
				case 1:
					*uParam3 = { -240.6656f, 769.7513f, 117.085f };
					uParam3->f_3 = { -245.4576f, 769.4586f, 118.9128f };
					uParam3->f_6 = { -243.9364f, 765.5624f, 118.3578f };
					uParam3->f_9 = { -249.3253f, 766.9821f, 116.3386f };
					uParam3->f_12 = { -242.7195f, 769.2915f, 117.085f };
					if (iParam0 != 4)
					{
						__LIB_4__::func_389(1098854605, 0, 0);
						__LIB_1__::func_948(1098854605, 0, -1f, 0, 0, 0, 0, 0);
					}
					break;
			}
			break;
	}
}

void func_21(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			switch (iParam2)
			{
				case 9:
					if (iParam3 == 0)
					{
						iParam0->f_4 = "script@beat@town@streetFight@thrownOutDoor_Val0";
					}
					else
					{
						iParam0->f_4 = "script@beat@town@streetFight@thrownOutDoor";
					}
					break;
				case 10:
					iParam0->f_4 = "script@beat@town@streetFight@thrownOutDoor_vanhorn";
					break;
				default:
					iParam0->f_4 = "script@beat@town@streetFight@thrownOutDoor";
					break;
			}
			break;
		case 2:
			iParam0->f_4 = "script@beat@town@streetFight@thrownOutWindow";
			break;
		case 3:
			switch (iParam2)
			{
				case 10:
					iParam0->f_4 = "script@beat@town@streetFight@thrownOutWindowDead_VanHorn";
					break;
				default:
					iParam0->f_4 = "script@beat@town@streetFight@thrownOutWindowDead";
					break;
			}
			break;
		case 4:
			iParam0->f_4 = "script@beat@town@streetFight@Uncle_Fight";
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_4))
	{
		switch (iParam1)
		{
			case 4:
				*iParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(iParam0->f_4, 0, func_110(0), false, true);
				break;
			default:
				*iParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(iParam0->f_4, 0, func_111(iParam1), false, true);
				break;
		}
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam0, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(*iParam0);
		}
	}
}

void func_22(int iParam0, int iParam1, var uParam2)
{
	switch (iParam1)
	{
		case 9:
			switch (iParam0)
			{
				case 0:
					StringCopy(&((uParam2[0 /*32*/])->f_23), "0949_A_M_M_Guard_White_AGGRESSIVE_04", 64);
					StringCopy(&((uParam2[1 /*32*/])->f_23), "0941_A_M_M_Foreman_White_AVOID_01", 64);
					break;
				case 1:
					StringCopy(&((uParam2[0 /*32*/])->f_23), "0920_A_M_M_Civ_Poor_White_AVOID_03", 64);
					StringCopy(&((uParam2[1 /*32*/])->f_23), "0921_A_M_M_Civ_Poor_White_AVOID_04", 64);
					break;
				case 2:
					StringCopy(&((uParam2[0 /*32*/])->f_23), "0908_A_M_M_Civ_Poor_White_AGGRESSIVE_08", 64);
					StringCopy(&((uParam2[1 /*32*/])->f_23), "0926_A_M_M_Civ_Poor_White_AVOID_09", 64);
					break;
				case 3:
					StringCopy(&((uParam2[0 /*32*/])->f_23), "0907_A_M_M_Civ_Poor_White_AGGRESSIVE_07", 64);
					StringCopy(&((uParam2[2 /*32*/])->f_23), "0901_A_M_M_Civ_Poor_White_AGGRESSIVE_01", 64);
					StringCopy(&((uParam2[3 /*32*/])->f_23), "0902_A_M_M_Civ_Poor_White_AGGRESSIVE_02", 64);
					break;
				case 4:
					StringCopy(&((uParam2[0 /*32*/])->f_23), "1062_G_M_M_UniCriminals_01_WHITE_09", 64);
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					StringCopy(&((uParam2[0 /*32*/])->f_23), "0494_A_M_M_VhtTownfolk_01_WHITE_01", 64);
					StringCopy(&((uParam2[1 /*32*/])->f_23), "0919_A_M_M_Civ_Poor_White_AVOID_02", 64);
					break;
				case 1:
					StringCopy(&((uParam2[0 /*32*/])->f_23), "0495_A_M_M_VhtTownfolk_01_BLACK_01", 64);
					StringCopy(&((uParam2[1 /*32*/])->f_23), "0893_A_M_M_Civ_Poor_Black_AVOID_08", 64);
					break;
				case 2:
					StringCopy(&((uParam2[0 /*32*/])->f_23), "0882_A_M_M_Civ_Poor_Black_AGGRESSIVE_02", 64);
					StringCopy(&((uParam2[1 /*32*/])->f_23), "0891_A_M_M_Civ_Poor_Black_AVOID_06", 64);
					break;
				case 3:
					StringCopy(&((uParam2[0 /*32*/])->f_23), "0905_A_M_M_Civ_Poor_White_AGGRESSIVE_05", 64);
					StringCopy(&((uParam2[2 /*32*/])->f_23), "0933_A_M_M_Civ_White_AVOID_03", 64);
					StringCopy(&((uParam2[3 /*32*/])->f_23), "0887_A_M_M_Civ_Poor_Black_AVOID_02", 64);
					break;
			}
			break;
		case 4:
			StringCopy(&((uParam2[0 /*32*/])->f_23), "0134_G_M_M_UniCriminals_01_HISPANIC_01", 64);
			break;
	}
	AUDIO::START_AUDIO_SCENE("RE_Street_Fight_scene");
}

void func_23(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 4:
			break;
		case 2:
		case 3:
			switch (iParam1)
			{
				case 9:
					switch (iParam2)
					{
						case 0:
							iLocal_202 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-303.064f, 795.973f, 118.625f, 0f, 0f, 99.715f, 5.753f, 3.638f, 3.973f, "Smithfields's Saloon Hitching");
							break;
						case 1:
							break;
						default:
							break;
					}
					break;
				case 10:
					iLocal_202 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2952.651f, 526.154f, 44.9f, 0f, 0f, 0f, 1.901f, 2.431f, 5.094f, "Van Horn's Saloon Hitching");
					break;
				case 4:
					break;
				default:
					break;
			}
			break;
		default:
			break;
	}
}

void func_24()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_202))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iLocal_202, 0, 0, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_202, 0, 0, 0, -1, -1, 0);
	__LIB_3__::func_730(iLocal_202, 0, 0, 0, 0, 0);
	__LIB_0__::func_566(iLocal_202, 0);
	uLocal_203 = PED::_0x4C39C95AE5DB1329(iLocal_202, 0, 15);
}

void func_25(int iParam0, int iParam1, int iParam2)
{
	iLocal_204 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_114(iParam0, iParam1, iParam2), func_115(iParam0, iParam1, iParam2), func_116(iParam0, iParam1, iParam2), "Animscene avodiance");
}

void func_26()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_204))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iLocal_204, 0, 0, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_204, 0, 0, 0, -1, -1, 0);
	__LIB_3__::func_730(iLocal_204, 0, 0, 0, 0, 0);
	__LIB_0__::func_566(iLocal_204, 0);
}

bool func_27(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27)
{
	int iVar0;
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(vParam0);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iVar0);
		if (INTERIOR::IS_INTERIOR_READY(iVar0))
		{
			return true;
		}
	}
	return false;
}

bool func_28(int iParam0)
{
	return ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0, true, false);
}

int func_29(var uParam0, int iParam1, int iParam2, vector3 vParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar1 = 0;
	switch (iParam2)
	{
		case 4:
			iVar0 = 4;
			iVar1 = -268604689;
			if ((!Local_344.f_161 && __LIB_0__::func_699(iVar0)) && !__LIB_1__::func_22(iVar0))
			{
				func_10();
			}
			break;
		default:
			return 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam1))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, true, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 18, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
		}
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam1, true, false);
			PED::SET_PED_CONFIG_FLAG(*iParam1, 18, true);
			PED::SET_PED_CAN_BE_TARGETTED(*iParam1, false);
			ENTITY::SET_ENTITY_INVINCIBLE(*iParam1, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
		}
		if (!__LIB_0__::func_858(iVar0, 256))
		{
			__LIB_1__::func_411(iVar0, *iParam1, 1);
		}
		else
		{
			AITRANSPORT::_0xBA8818212633500A(*iParam1, 6, 1);
			return 1;
		}
	}
	else
	{
		bVar2 = false;
		if (!__LIB_2__::func_1(*uParam0, 0, 1))
		{
			*uParam0 = func_120(iVar0, 1, 1, vParam3.x, vParam3.y, vParam3.z, 0f, 1, 0, 0, 1, 0, 0, iVar1, bVar2, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		}
		if (!__LIB_2__::func_1(*iParam1, 0, 1))
		{
			*iParam1 = func_121(iVar0, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		}
		return 0;
	}
	return 0;
}

int func_30()
{
	switch (iLocal_622)
	{
		case 0:
			iLocal_622 = 1;
			break;
		case 1:
			if (!__LIB_3__::func_467(Local_344.f_51, 0f, &Local_215, &uLocal_178, 0, 0, -1, 1))
			{
				return 0;
			}
			iLocal_622 = 6;
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_178[0]))
			{
				__LIB_3__::func_873(uLocal_178[0], 12);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_178[1]))
			{
				__LIB_3__::func_873(uLocal_178[1], 12);
			}
			return 1;
	}
	return 0;
}

void func_31(int iParam0, int iParam1, var uParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	switch (iParam0)
	{
		case 10:
			vVar0 = { 2951.658f, 522.181f, 45.362f };
			vVar3 = { 0f, 0f, 0f };
			vVar6 = { 2.5f, 6.25f, 2f };
			vVar9 = { 2955.698f, 520.1378f, 44.6571f };
			vVar12 = { 0f, 0f, 0f };
			vVar15 = { 2.5f, 4f, 2f };
			vVar18 = { 2953.228f, 526.3458f, 45.92805f };
			vVar21 = { 0f, 0f, 0f };
			vVar24 = { 3f, 3f, 3f };
			break;
		case 4:
			vVar0 = { -810.078f, -1325.815f, 44.056f };
			vVar3 = { 0f, 0f, 0f };
			vVar6 = { 3f, 3f, 3f };
			vVar9 = { -828.913f, -1328.888f, 43.322f };
			vVar12 = { 0f, 0f, 0f };
			vVar15 = { 3f, 3f, 2f };
			vVar18 = { -809.001f, -1329.048f, 43.544f };
			vVar21 = { 0f, 0f, 0f };
			vVar24 = { 7.65f, 4.5f, 2f };
			break;
		default:
			switch (iParam1)
			{
				case 0:
					vVar0 = { -305.321f, 797.702f, 118.645f };
					vVar3 = { 0f, 0f, 10.5f };
					vVar6 = { 7f, 3.5f, 2f };
					vVar9 = { -303.197f, 794.854f, 117.828f };
					vVar12 = { 0f, 0f, 10.5f };
					vVar15 = { 4.5f, 4f, 2f };
					break;
				case 1:
					vVar0 = { -245.781f, 766.819f, 117.737f };
					vVar3 = { 0f, 0f, 21f };
					vVar6 = { 4.75f, 6.2f, 1.5f };
					vVar9 = { -248.632f, 765.011f, 116.983f };
					vVar12 = { 0f, 0f, 20f };
					vVar15 = { 2.5f, 7f, 1.5f };
					break;
			}
			break;
	}
	__LIB_0__::func_568(vVar0, 3f, 0);
	__LIB_3__::func_867(&(uParam2->f_15), &(uParam2->f_16), vVar0, vVar3, vVar6, 1, 534496, 1, 2, 0);
	__LIB_3__::func_867(&(uParam2->f_17), &(uParam2->f_18), vVar9, vVar12, vVar15, 1, 534496, 1, 2, 0);
	if (!__LIB_0__::func_86(vVar18))
	{
		__LIB_3__::func_867(&(uParam2->f_19), &(uParam2->f_20), vVar18, vVar21, vVar24, 1, 534496, 1, 2, 0);
		__LIB_0__::func_566(uParam2->f_19, 0);
	}
}

void func_32(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 == 9 && iParam1 == 0)
	{
		__LIB_3__::func_573(&(uParam2->f_23), -303.343f, 795.682f, 118.001f, 0f, 0f, 11.25f, 5f, 1.7f, 1f, "RE_SF_NAV_MESH_BLOCKING_VOL");
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam2->f_23))
	{
		PATHFIND::_0x19C7567D2F2287D6(uParam2->f_23, 7);
	}
}

void func_33(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 4:
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					uParam2->f_27 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-311.716f, 821.056f, 118.528f, 0f, 0f, 10.5f, 12.81f, 3.951f, 10.653f, "volKill");
					break;
				case 1:
					uParam2->f_27 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-236.724f, 774.881f, 117.183f, 0f, 0f, 22.286f, 6.767f, 6.481f, 9.496f, "volKill");
					break;
				default:
					break;
			}
			break;
		case 10:
			uParam2->f_27 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2940.289f, 523.053f, 47.023f, 0f, 0f, 0f, 7.76f, 15.73f, 6.656f, "volKill");
			break;
		default:
			break;
	}
}

void func_34()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_128(iLocal_214, Local_344.f_51.f_4, 2, 4))
	{
		if (__LIB_2__::func_1(uLocal_178[iVar0], 0, 1))
		{
			__LIB_3__::func_626(&(Local_215[iVar0 /*32*/].f_22));
			WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_178[iVar0], true, true);
			__LIB_2__::func_190(uLocal_178[iVar0], __LIB_3__::func_540(joaat("REWARD_BEAT_SMALL"), 0, -1));
			if (iVar0 == 0 || (iVar0 == 1 && !func_7()))
			{
				PED::SET_PED_COMBAT_MOVEMENT(uLocal_178[iVar0], 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_178[iVar0], 9, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_178[iVar0], 77, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_178[iVar0], 46, true);
				PED::SET_PED_CONFIG_FLAG(uLocal_178[iVar0], 358, true);
				if (__LIB_4__::func_385(&(uLocal_178[iVar0])))
				{
					__LIB_4__::func_239(uLocal_178[iVar0]);
				}
			}
			if (iVar0 == 2 || iVar0 == 2)
			{
				PED::SET_PED_CONFIG_FLAG(uLocal_178[iVar0], 366, true);
			}
			if (!__LIB_10__::func_975(uLocal_178[iVar0], 0))
			{
				__LIB_1__::func_991(uLocal_178[iVar0], 0);
			}
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_178[iVar0], "RE_Street_Fight_group", 0f);
			if (func_7() && iVar0 == 0)
			{
				__LIB_2__::func_279(uLocal_178[iVar0], 1);
			}
		}
		iVar0++;
	}
	if (iLocal_214 == 3 && ENTITY::DOES_ENTITY_EXIST(uLocal_178[1]))
	{
		PED::SET_PED_CONFIG_FLAG(uLocal_178[1], 6, true);
	}
	__LIB_3__::func_285(uLocal_178[0], &Local_344, 0);
	if (!func_7())
	{
		__LIB_3__::func_285(uLocal_178[1], &Local_344, 0);
	}
	if (__LIB_2__::func_1(uLocal_178[2], 0, 1))
	{
		__LIB_3__::func_285(uLocal_178[2], &Local_344, 0);
	}
	if (__LIB_2__::func_1(uLocal_178[3], 0, 1))
	{
		__LIB_3__::func_285(uLocal_178[3], &Local_344, 0);
	}
}

void func_35()
{
	if (!__LIB_2__::func_1(uLocal_178[1], 0, 1))
	{
		return;
	}
	switch (iLocal_214)
	{
		case 4:
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_178[1]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_178[1], true, false);
			}
			PED::SET_PED_CONFIG_FLAG(uLocal_178[1], 18, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_178[1], true);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_178[1], false, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_178[1], true);
			WEAPON::SET_CURRENT_PED_WEAPON(uLocal_178[1], joaat("WEAPON_UNARMED"), true, 0, false, false);
			WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_178[1], true, true);
			if (PED::IS_PED_ON_MOUNT(uLocal_178[1]))
			{
				TASK::TASK_DISMOUNT_ANIMAL(uLocal_178[1], 16, 0, 0, 0, 0);
			}
			if (__LIB_2__::func_1(iLocal_185, 0, 1))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_185))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_185, true, false);
				}
				PED::SET_PED_CONFIG_FLAG(iLocal_185, 18, true);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_185, false);
				ENTITY::SET_ENTITY_PROOFS(iLocal_185, 127, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_185, true);
				AITRANSPORT::_0xBA8818212633500A(iLocal_185, 6, 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_185, false, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_185, true);
				func_140(iLocal_185, func_138(iLocal_899), func_139(iLocal_899), 2, 1073741824 /* Float: 2f */);
			}
			break;
	}
}

void func_36()
{
	switch (iLocal_899)
	{
		case 9:
			switch (iLocal_900)
			{
				case 0:
					iLocal_201 = __LIB_14__::func_440(0);
					break;
				case 1:
					iLocal_201 = __LIB_14__::func_440(1);
					break;
			}
			break;
		default:
			iLocal_201 = __LIB_14__::func_440(0);
			break;
	}
}

void func_37()
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	struct<4> Var5;
	struct<4> Var17;
	if ((iLocal_214 != 3 || (iLocal_899 == 9 && Local_344.f_51.f_4 == 1)) || iLocal_899 == 10)
	{
		func_142(iLocal_899, Local_344.f_51.f_4, iLocal_214, &vLocal_61, &fLocal_57, &bVar3, &bVar4);
		if (bVar3)
		{
			vVar0 = { vLocal_61 };
		}
		else
		{
			vVar0 = { Local_344.f_51 + vLocal_61 };
		}
		if (!bVar4)
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_50, vVar0, 0f, 0f, fLocal_57, 2);
		}
	}
	if (__LIB_2__::func_1(uLocal_178[0], 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_50, func_143(0), uLocal_178[0], 0);
	}
	if (!func_7())
	{
		if (__LIB_2__::func_1(uLocal_178[1], 0, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_50, func_143(1), uLocal_178[1], 0);
		}
	}
	if (iLocal_214 == 3)
	{
		if (__LIB_2__::func_1(uLocal_178[2], 0, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_50, func_143(2), uLocal_178[2], 0);
		}
		if (__LIB_2__::func_1(uLocal_178[3], 0, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_50, func_143(3), uLocal_178[3], 0);
		}
	}
	if (iLocal_214 != 2 && iLocal_214 != 3)
	{
		iLocal_193 = func_144(iLocal_899, iLocal_900);
		if (iLocal_193 == 0)
		{
		}
		else
		{
			iLocal_195 = __LIB_3__::func_136(iLocal_193, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_195))
			{
				__LIB_1__::func_948(iLocal_193, 0, 0f, 0, 0, 0f, 1, 0);
				if (func_7() || iLocal_899 == 10)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_50, func_146(iLocal_899, iLocal_900), iLocal_195, 0);
				}
				iLocal_197 = ENTITY::_0xAAACB74442C1BED3(iLocal_195);
			}
		}
		iLocal_194 = func_147(iLocal_214, iLocal_899, iLocal_900);
		if (iLocal_194 == 0)
		{
		}
		else
		{
			iLocal_196 = __LIB_3__::func_136(iLocal_194, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_196))
			{
				__LIB_1__::func_948(iLocal_194, 0, 0f, 0, 0, 0f, 1, 0);
				if (func_7() || iLocal_899 == 10)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_50, func_148(iLocal_214, iLocal_899, iLocal_900), iLocal_196, 0);
				}
				iLocal_198 = ENTITY::_0xAAACB74442C1BED3(iLocal_196);
			}
		}
	}
	if (func_7())
	{
		if (__LIB_2__::func_1(uLocal_178[1], 0, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_50, func_149(), uLocal_178[1], 0);
		}
	}
	switch (iLocal_214)
	{
		case 4:
			if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_50, func_143(0), &Var5, false, 0, 2))
			{
				func_140(uLocal_178[0], Var5, Var5.f_3.f_2, 2, 1073741824 /* Float: 2f */);
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_50, func_149(), &Var17, false, 0, 2))
			{
				func_140(uLocal_178[1], Var17, Var17.f_3.f_2, 2, 1073741824 /* Float: 2f */);
			}
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_50, func_110(1));
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_50, func_110(2));
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_50, func_110(3));
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_50, func_110(4));
			break;
		default:
			ANIMSCENE::START_ANIM_SCENE(iLocal_50);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_50, "FLAG_LOOP", false, false);
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_50, func_111(iLocal_214));
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_50, func_150(iLocal_214));
			iLocal_205 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 0f, 0f, 0f, 0f, 0f, 0f, 2f, 2f, 2f);
			PED::_0x7C00CFC48A782DC0(iLocal_205, uLocal_178[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			iLocal_206 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 0f, 0f, 0f, 0f, 0f, 0f, 2f, 2f, 2f);
			PED::_0x7C00CFC48A782DC0(iLocal_206, uLocal_178[1], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			break;
	}
}

void func_38()
{
	vector3 vVar0;
	if (func_52(268435456))
	{
		return;
	}
	if (!func_7())
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_185))
	{
		return;
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_200))
	{
		vVar0 = { func_151(iLocal_899) };
		iLocal_200 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vVar0, joaat("PROP_HITCHINGPOST"), 1f, 1, false);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_200))
	{
		TASK::_TASK_USE_SCENARIO_POINT(iLocal_185, iLocal_200, 0, 0, false, false, 0, false, -1f, false);
		func_152(268435456);
	}
}

void func_39()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = __LIB_2__::func_340(3, 0, 0);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_178[iVar0]))
		{
		}
		else if (ENTITY::IS_ENTITY_DEAD(uLocal_178[iVar0]))
		{
		}
		else
		{
			iVar1 = iVar0;
			switch (iVar1)
			{
				case 0:
					func_153(&(uLocal_178[iVar1]), &(Local_623[iVar1 /*21*/]), 15f, &Local_708, 0, 3, 0, 0, iVar2, 0, 0, 2, -1082130432 /* Float: -1f */);
					func_154(&(Local_623[iVar1 /*21*/]), &Local_708, &iLocal_883, iLocal_214, iLocal_899);
					break;
				case 1:
					if (iLocal_214 == 4)
					{
						func_153(&(uLocal_178[iVar1]), &(Local_623[iVar1 /*21*/]), 15f, &Local_778, 0, 3, 0, 0, iVar2, 0, 0, 2, -1082130432 /* Float: -1f */);
						func_155(&(Local_623[iVar1 /*21*/]), &Local_778, &iLocal_884, iLocal_899);
						func_156(uLocal_178[iVar1], joaat("COMP_UNCLE"));
					}
					else
					{
						func_153(&(uLocal_178[iVar1]), &(Local_623[iVar1 /*21*/]), 15f, &Local_743, 0, 3, 0, 0, iVar2, 0, 0, 2, -1082130432 /* Float: -1f */);
						func_157(&(Local_623[iVar1 /*21*/]), &Local_743, &iLocal_883, iLocal_214, iLocal_899);
					}
					break;
				case 2:
					func_153(&(uLocal_178[iVar1]), &(Local_623[iVar1 /*21*/]), 15f, &Local_813, 0, 3, 0, 0, iVar2, 0, 0, 2, -1082130432 /* Float: -1f */);
					func_158(&(Local_623[iVar1 /*21*/]), &Local_813);
					break;
				case 3:
					func_153(&(uLocal_178[iVar1]), &(Local_623[iVar1 /*21*/]), 15f, &Local_848, 0, 3, 0, 0, iVar2, 0, 0, 2, -1082130432 /* Float: -1f */);
					func_159(&(Local_623[iVar1 /*21*/]), &Local_848);
					break;
				default:
					break;
			}
		}
		iVar0++;
	}
}

void func_47()
{
	__LIB_2__::func_461(0);
	if ((__LIB_2__::func_1(uLocal_178[0], 0, 1) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_178[0], joaat("SCRIPT_TASK_GRAPPLE"), true) == 1) || (__LIB_2__::func_1(uLocal_178[1], 0, 1) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_178[1], joaat("SCRIPT_TASK_GRAPPLE"), true) == 1))
	{
		func_178(iLocal_183, iLocal_184);
	}
	if (__LIB_2__::func_1(uLocal_178[1], 0, 0))
	{
		switch (iLocal_214)
		{
			case 3:
				if (__LIB_0__::func_27(iLocal_48, 16))
				{
					__LIB_1__::func_864(uLocal_178[1], 1, 0);
					PED::SET_PED_CONFIG_FLAG(uLocal_178[1], 243, true);
				}
				break;
		}
	}
}

bool func_49()
{
	if (!func_52(4096))
	{
		if (__LIB_2__::func_401(uLocal_178[0], 1, 1, 0, 0, 0))
		{
			if (!__LIB_0__::func_75(&uLocal_168))
			{
				__LIB_1__::func_283(&uLocal_168, 0);
			}
			else if (__LIB_1__::func_285(&uLocal_168, 1.5f))
			{
				func_152(4096);
				__LIB_0__::func_37(&uLocal_168);
			}
		}
	}
	if (func_182(uLocal_178[0], 0, &(Local_344.f_5), &iLocal_592, 0, 0) || func_52(4096))
	{
		switch (iLocal_592)
		{
			case 2:
			case 4:
			case 8:
			case 256:
				func_152(16384);
				func_152(1);
				if (!func_52(8192))
				{
					func_183();
				}
				return true;
			default:
				break;
		}
		if (func_52(4096))
		{
			func_152(16384);
			func_152(1);
			if (!func_52(8192))
			{
				func_183();
			}
		}
		return true;
	}
	else if (iLocal_592 > 0)
	{
	}
	return false;
}

bool func_50()
{
	int iVar0;
	iVar0 = 1;
	if (iLocal_214 == 3)
	{
		iVar0 = 3;
	}
	if (func_184(&uLocal_178, &(Local_344.f_5), &iLocal_592, &iLocal_51, 0, iVar0, 1))
	{
		iLocal_212 = iLocal_51;
		if (!__LIB_2__::func_1(uLocal_178[iLocal_212], 8, 1))
		{
			return false;
		}
		if (iLocal_592 == 2048 && iLocal_562 != 5)
		{
			if (!__LIB_0__::func_27(iLocal_48, 32768))
			{
				func_152(32768);
				if (iLocal_214 == 2 && func_185(iLocal_50))
				{
					if (iLocal_212 != 0)
					{
						func_152(524288);
					}
					if (iLocal_212 != 1)
					{
						func_152(1048576);
					}
					return true;
				}
				return true;
			}
		}
		else
		{
			switch (iLocal_592)
			{
				case 2048:
					switch (iLocal_212)
					{
						case 0:
							if (__LIB_17__::func_611(8))
							{
								return false;
							}
							break;
						case 1:
							if (__LIB_17__::func_611(4))
							{
								return false;
							}
							break;
					}
					break;
				case 2:
					return true;
				case 4:
				case 8:
				case 16:
				case 256:
					func_152(16384);
					break;
			}
			switch (iLocal_212)
			{
				case 2:
				case 3:
					func_152(2048);
					break;
			}
			if (((iLocal_562 != 5 && iLocal_562 != 6) && iLocal_562 != 14) && iLocal_562 != 16)
			{
				func_187();
			}
			if (iLocal_214 == 2 && func_185(iLocal_50))
			{
				if (iLocal_212 != 0)
				{
					func_152(524288);
				}
				if (iLocal_212 != 1)
				{
					func_152(1048576);
				}
			}
			if (iLocal_592 != 16384 && iLocal_592 != 8192)
			{
				return true;
			}
		}
	}
	return false;
}

void func_51()
{
	if (!func_52(16384) && __LIB_2__::func_1(uLocal_178[iLocal_212], 0, 1))
	{
		if (iLocal_212 == 0)
		{
			func_188(uLocal_178[iLocal_212], Global_35, 4194304, 1, -1065353216 /* Float: -4f */);
		}
		else if (iLocal_212 == 1)
		{
			if (iLocal_214 == 1 && iLocal_899 == 9)
			{
				__LIB_2__::func_478(uLocal_178[iLocal_212], Global_35, "CHALLENGE_THREATEN", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				func_188(uLocal_178[iLocal_212], Global_35, 8388608, 1, -1065353216 /* Float: -4f */);
			}
		}
		else if (iLocal_212 == 2)
		{
			func_188(uLocal_178[iLocal_212], Global_35, 16777216, 1, -1065353216 /* Float: -4f */);
		}
		else if (iLocal_212 == 3)
		{
			func_188(uLocal_178[iLocal_212], Global_35, 33554432, 1, -1065353216 /* Float: -4f */);
		}
	}
}

bool func_52(int iParam0)
{
	return __LIB_0__::func_27(iLocal_48, iParam0);
}

void func_53(int iParam0, bool bParam1)
{
	if (!__LIB_2__::func_1(uLocal_178[iParam0], 0, 0))
	{
		return;
	}
	Local_344.f_46 = 1;
	func_190(iParam0);
	if (bParam1)
	{
		Local_567.f_7 = 2000;
		_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_178[iLocal_212], &Local_567);
	}
	if (iParam0 == 0)
	{
		if (!__LIB_17__::func_611(16))
		{
			func_188(uLocal_178[iLocal_212], Global_35, 4194304, 1, -1065353216 /* Float: -4f */);
		}
	}
	else if (iLocal_214 == 1 && iLocal_899 == 9)
	{
		__LIB_2__::func_478(uLocal_178[iLocal_212], Global_35, "CHALLENGE_THREATEN", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	else
	{
		func_188(uLocal_178[iLocal_212], Global_35, 8388608, 1, -1065353216 /* Float: -4f */);
	}
}

void func_54(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (__LIB_0__::func_27(iLocal_48, 1048576))
			{
				func_191(uLocal_178[2], uLocal_178[3], 0, 0);
			}
			else
			{
				func_191(uLocal_178[1], uLocal_178[2], uLocal_178[3], 0);
			}
			break;
		case 1:
			if (__LIB_0__::func_27(iLocal_48, 524288))
			{
				func_191(uLocal_178[2], uLocal_178[3], 0, 0);
			}
			else
			{
				func_191(uLocal_178[0], uLocal_178[2], uLocal_178[3], 0);
			}
			break;
		case 2:
		case 3:
			func_191(uLocal_178[0], uLocal_178[1], uLocal_178[2], uLocal_178[3]);
			break;
	}
}

bool func_55()
{
	int iVar0;
	if (iLocal_562 > 1)
	{
		if (iLocal_562 < 12)
		{
			func_38();
		}
		func_192();
		func_193();
		func_194();
		func_195();
		func_196();
		func_197();
		func_198();
	}
	if (bLocal_207)
	{
		func_86();
		func_87();
	}
	if (iLocal_562 > 3)
	{
		if (iLocal_214 != 3 && iLocal_214 != 4)
		{
			func_199();
		}
		if (iLocal_214 == 4 && iLocal_562 >= 9)
		{
			if (__LIB_1__::func_313(&uLocal_174, 1f))
			{
				if (__LIB_1__::func_898() == 4)
				{
					__LIB_2__::func_478(uLocal_178[0], 0, "RE_STF_BLW_V6_PATHETIC", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(uLocal_178[0], 0, "RE_STF_VAL_V6_PATHETIC", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
		}
	}
	if (__LIB_0__::func_27(iLocal_48, 16) && FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_64.f_3, 3f) > 0)
	{
		FIRE::STOP_FIRE_IN_RANGE(Local_64.f_3, 3f);
	}
	switch (iLocal_562)
	{
		case 0:
			switch (iLocal_214)
			{
				case 4:
					if (func_28(iLocal_50))
					{
						func_156(uLocal_178[1], joaat("COMP_UNCLE"));
						ENTITY::SET_ENTITY_VISIBLE(uLocal_178[1], false);
						ENTITY::SET_ENTITY_VISIBLE(uLocal_178[0], false);
						__LIB_9__::func_595(8);
					}
					break;
				default:
					if (func_201(iLocal_50, func_150(iLocal_214)))
					{
						__LIB_9__::func_595(1);
					}
					break;
			}
			break;
		case 2:
			func_202();
			func_203();
			func_204();
			func_205();
			func_206();
			if (func_207())
			{
				func_208();
				switch (iLocal_214)
				{
					case 0:
					case 1:
					case 2:
						__LIB_2__::func_634(&(Local_344.f_5), 1);
						__LIB_9__::func_595(3);
						break;
					case 3:
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_178[0], true);
						func_210(0, 0, 0, 0);
						__LIB_2__::func_634(&(Local_344.f_5), 1);
						func_211();
						__LIB_0__::func_172(iLocal_205);
						__LIB_0__::func_172(iLocal_206);
						__LIB_9__::func_595(20);
						break;
				}
			}
			break;
		case 3:
			func_212(0);
			func_213();
			if (iLocal_565 == 10 || func_214())
			{
				__LIB_0__::func_172(iLocal_205);
				__LIB_0__::func_172(iLocal_206);
				PED::SET_COMBAT_FLOAT(uLocal_178[0], 12, 0f);
				__LIB_9__::func_595(4);
			}
			else if ((!func_215(0) && !func_215(1)) && __LIB_0__::func_27(iLocal_48, 32768))
			{
				func_47();
				__LIB_0__::func_172(iLocal_205);
				__LIB_0__::func_172(iLocal_206);
				if (iLocal_212 == 0)
				{
					func_53(iLocal_212, 0);
				}
				else if (iLocal_212 == 1)
				{
					func_54(iLocal_212);
				}
				__LIB_9__::func_595(14);
			}
			break;
		case 4:
			if (func_214())
			{
				func_212(0);
				__LIB_0__::func_172(Local_64.f_25);
				func_8(&Local_344, 1);
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_178[0]) && !__LIB_0__::func_163(uLocal_178[0], 1313215416))
				{
					__LIB_1__::func_148(&uLocal_138);
					PED::SET_PED_CONFIG_FLAG(uLocal_178[1], 243, true);
					__LIB_2__::func_111(&(Local_344.f_5), 1);
					__LIB_0__::func_172(iLocal_205);
					__LIB_0__::func_172(iLocal_206);
					__LIB_9__::func_595(5);
				}
				else if (!ENTITY::IS_ENTITY_DEAD(uLocal_178[1]) && !__LIB_0__::func_163(uLocal_178[1], 1313215416))
				{
					if (__LIB_0__::func_265(&uLocal_159) > 3f)
					{
						__LIB_0__::func_37(&uLocal_159);
						__LIB_2__::func_461(0);
						if (iLocal_214 == 2)
						{
							__LIB_2__::func_478(uLocal_178[1], uLocal_178[1], func_217(iLocal_899, iLocal_214, 1024), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							__LIB_2__::func_478(uLocal_178[1], uLocal_178[1], func_217(iLocal_899, iLocal_214, 16), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						func_218();
						PED::SET_PED_CONFIG_FLAG(uLocal_178[0], 243, true);
						func_219(iLocal_899, iLocal_214, &(Local_623[iLocal_213 /*21*/]), &Local_743, iLocal_211);
						__LIB_9__::func_595(20);
					}
					else if (__LIB_0__::func_265(&uLocal_159) > 1f && __LIB_2__::func_118(uLocal_178[1], 1, 1) < 1.5f)
					{
						iLocal_212 = 1;
						__LIB_0__::func_37(&uLocal_159);
						__LIB_2__::func_461(0);
						if (iLocal_214 == 1 && iLocal_899 == 9)
						{
							__LIB_2__::func_478(uLocal_178[iLocal_212], Global_35, "CHALLENGE_THREATEN", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							__LIB_2__::func_478(uLocal_178[iLocal_212], Global_35, func_217(iLocal_899, iLocal_214, 8388608), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						func_53(1, 0);
						func_54(1);
						__LIB_9__::func_595(14);
					}
					else if (!__LIB_0__::func_75(&uLocal_159))
					{
						__LIB_1__::func_148(&uLocal_159);
					}
				}
				else
				{
					__LIB_9__::func_595(22);
				}
			}
			break;
		case 5:
			func_202();
			func_212(0);
			if (__LIB_0__::func_265(&uLocal_138) > 1f)
			{
				func_221();
				if (__LIB_0__::func_265(&uLocal_141) > 10f)
				{
					func_222();
					func_152(131072);
					if (__LIB_2__::func_1(uLocal_178[0], 0, 1))
					{
						PED::SET_PED_CONFIG_FLAG(uLocal_178[0], 6, false);
					}
					func_223(iLocal_899, iLocal_214, &(Local_623[0 /*21*/]), &Local_708);
					iLocal_23 = 4;
					__LIB_9__::func_595(7);
				}
				else if (!__LIB_0__::func_75(&uLocal_141))
				{
					__LIB_1__::func_148(&uLocal_141);
				}
				if (__LIB_0__::func_75(&uLocal_153))
				{
					if (__LIB_0__::func_265(&uLocal_153) > 2f && __LIB_2__::func_227(-6f, 1, 0, 0))
					{
						if (__LIB_1__::func_348(Global_35, uLocal_178[0]) < 2.5f)
						{
							iLocal_212 = 0;
							func_226();
							__LIB_2__::func_461(0);
							func_227(4194304);
							__LIB_2__::func_478(uLocal_178[iLocal_212], Global_35, func_217(iLocal_899, iLocal_214, 4194304), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							if (__LIB_2__::func_1(uLocal_178[0], 0, 1))
							{
								PED::SET_PED_CONFIG_FLAG(uLocal_178[0], 6, true);
							}
							bLocal_208 = true;
							iLocal_23 = 3;
							__LIB_9__::func_595(6);
						}
						else
						{
							__LIB_1__::func_148(&uLocal_153);
						}
					}
				}
				else if (__LIB_1__::func_348(Global_35, uLocal_178[0]) < 2.5f)
				{
					__LIB_1__::func_148(&uLocal_153);
				}
			}
			break;
		case 6:
			func_221();
			if (__LIB_2__::func_1(uLocal_178[0], 0, 1))
			{
				TASK::TASK_REACT(uLocal_178[0], Global_35, Global_36, "Default_Angry", 0.5f, 0, 4);
				_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_178[0], &Local_567);
			}
			func_228();
			if (__LIB_2__::func_227(0, 1, Global_35, 1) && !__LIB_17__::func_611(16))
			{
				func_188(uLocal_178[iLocal_212], Global_35, 4194304, 1, -1065353216 /* Float: -4f */);
			}
			if (__LIB_2__::func_227(0, 1, uLocal_178[0], 1) && __LIB_2__::func_227(0, 1, Global_35, 1))
			{
				func_53(0, 0);
				func_54(0);
				__LIB_9__::func_595(14);
			}
			break;
		case 7:
			bLocal_207 = true;
			func_221();
			if (__LIB_2__::func_1(uLocal_178[0], 0, 1))
			{
				_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_178[0], &Local_567);
				PED::SET_PED_RESET_FLAG(uLocal_178[iLocal_213], 94, true);
				PED::_0xC6981AFF6D2A71C2(uLocal_178[iLocal_213]);
			}
			if (__LIB_2__::func_227(-2f, 1, 0, 0))
			{
				func_222();
				__LIB_9__::func_595(20);
			}
			break;
		case 8:
			if (func_229())
			{
				iLocal_566 = func_230(iLocal_899, &iLocal_50);
				ENTITY::SET_ENTITY_VISIBLE(uLocal_178[1], true);
				ENTITY::SET_ENTITY_VISIBLE(uLocal_178[0], true);
				ANIMSCENE::START_ANIM_SCENE(iLocal_50);
				__LIB_9__::func_595(9);
				PED::_0x89F5E7ADECCCB49C(uLocal_178[1], "injured_general");
			}
			else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_64.f_27, true, 0))
			{
				func_152(268435456);
				__LIB_9__::func_595(22);
			}
			break;
		case 9:
			__LIB_2__::func_111(&(Local_344.f_5), 1);
			__LIB_3__::func_620(&(Local_344.f_5), 1);
			if ((!func_52(8192) && (func_52(1) && __LIB_0__::func_265(&uLocal_165) > 2f)) && func_232(uLocal_178[0]))
			{
				_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_178[0], &Local_567);
				func_152(2097152);
				func_210(iLocal_213, 0, 0, 1);
				__LIB_2__::func_478(uLocal_178[0], Global_35, func_233(iLocal_899, iLocal_214, 128), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			func_234(&iLocal_199, iLocal_899, iLocal_900);
			func_204();
			func_202();
			func_235();
			func_236(0);
			if (!func_185(iLocal_50) || !func_237(uLocal_178[1], iLocal_50))
			{
				func_238();
				__LIB_3__::func_334(&uLocal_187);
				func_212(0);
				func_152(4194304);
				__LIB_9__::func_595(12);
			}
			else if (func_52(2097152))
			{
				__LIB_3__::func_334(&uLocal_187);
				func_212(0);
				func_223(iLocal_899, iLocal_214, &(Local_623[0 /*21*/]), &Local_708);
				func_210(0, 0, 0, 1);
				__LIB_9__::func_595(11);
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_50) >= 0.62f && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_192, iLocal_50))
			{
				func_236(1);
			}
			break;
		case 10:
			if (func_52(16384))
			{
				__LIB_3__::func_334(&uLocal_187);
				PED::_0x463803429297117C(uLocal_178[iLocal_213], Global_36, 1, 0);
				TASK::TASK_SMART_FLEE_PED(uLocal_178[iLocal_213], Global_35, -1f, -1, 32768, 1f, 0);
				__LIB_2__::func_478(uLocal_178[iLocal_212], Global_35, func_240(iLocal_212, iLocal_899, iLocal_214), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				if (__LIB_0__::func_27(iLocal_48, 4194304))
				{
					func_241(0, 0);
					__LIB_9__::func_595(22);
				}
				else
				{
					func_152(2097152);
					__LIB_9__::func_595(11);
				}
			}
			else
			{
				func_188(uLocal_178[0], Global_35, 2048, 1, -1065353216 /* Float: -4f */);
				func_236(1);
				func_242(1);
				__LIB_9__::func_595(16);
			}
			break;
		case 11:
			func_243();
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_178[1], joaat("REACT")))
			{
				func_238();
			}
			if ((!func_185(iLocal_50) || !func_237(uLocal_178[1], iLocal_50)) || func_244(iLocal_50, uLocal_178[1]))
			{
				if (__LIB_2__::func_118(uLocal_178[1], 1, 1) > 20f || __LIB_1__::func_205(Global_35, iLocal_201, 1, 0))
				{
					func_241(0, 0);
					bLocal_44 = true;
					__LIB_9__::func_595(20);
				}
				else
				{
					func_152(4194304);
					func_238();
					func_241(1, 0);
					__LIB_9__::func_595(12);
				}
			}
			break;
		case 12:
			if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_178[1], Local_546[3 /*2*/], Local_546[3 /*2*/].f_1, 1) && !func_237(uLocal_178[1], iLocal_50)) && !__LIB_0__::func_163(uLocal_178[1], 2121492476))
			{
				if (((func_52(16777216) || func_52(33554432)) || __LIB_1__::func_205(Global_35, iLocal_201, 1, 0)) || func_246())
				{
					bLocal_44 = true;
					if (!__LIB_0__::func_394(uLocal_178[1], iLocal_185, 0))
					{
						func_241(0, 0);
					}
					__LIB_9__::func_595(21);
				}
				else if (!__LIB_2__::func_123(uLocal_178[1], Global_35, 0.6f))
				{
					if (!__LIB_0__::func_163(uLocal_178[1], -875674219) && !ENTITY::IS_ENTITY_DEAD(uLocal_178[0]))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_178[1], Global_35, 0, -1f, -1f, -1f);
					}
				}
			}
			break;
		case 1:
			if (func_229() && func_201(iLocal_50, func_150(iLocal_214)))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_50, func_150(iLocal_214), true);
				__LIB_9__::func_595(2);
			}
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_64.f_27, true, 0))
			{
				func_152(268435456);
				__LIB_9__::func_595(22);
			}
			break;
		case 14:
			if (!ENTITY::_GET_ENTITY_CAN_BE_DAMAGED(uLocal_178[iLocal_212]))
			{
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_178[iLocal_212], true);
			}
			bLocal_207 = true;
			AUDIO::STOP_PED_SPEAKING(uLocal_178[iLocal_212], true);
			func_228();
			if (__LIB_0__::func_27(iLocal_48, 524288) || __LIB_0__::func_27(iLocal_48, 1048576))
			{
				__LIB_9__::func_595(15);
			}
			else if (func_52(16384))
			{
				__LIB_9__::func_595(17);
			}
			else
			{
				__LIB_9__::func_595(16);
			}
			break;
		case 15:
			if (func_249())
			{
				if (func_52(16384))
				{
					__LIB_9__::func_595(17);
				}
				else
				{
					__LIB_9__::func_595(16);
				}
			}
			break;
		case 16:
			func_243();
			__LIB_0__::func_172(iLocal_205);
			__LIB_0__::func_172(iLocal_206);
			if (!ENTITY::_GET_ENTITY_CAN_BE_DAMAGED(uLocal_178[iLocal_212]))
			{
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_178[iLocal_212], true);
			}
			if (!__LIB_2__::func_1(uLocal_178[iLocal_212], 0, 1))
			{
				__LIB_3__::func_334(&uLocal_187);
				if (func_7())
				{
					if (__LIB_0__::func_27(iLocal_48, 4194304))
					{
						func_241(0, 0);
						__LIB_9__::func_595(22);
					}
					else
					{
						func_152(2097152);
						__LIB_9__::func_595(11);
					}
				}
				else
				{
					__LIB_9__::func_595(22);
				}
			}
			else
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_178[iLocal_212], 780511057, true) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_178[iLocal_212], 780511057, true) != 0)
				{
					if ((iLocal_23 == 2 && func_250(32)) && !bLocal_40)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_41) >= 2300)
						{
							func_190(iLocal_212);
							bLocal_40 = true;
						}
					}
					else
					{
						func_190(iLocal_212);
					}
				}
				if (__LIB_2__::func_118(uLocal_178[iLocal_212], 1, 1) > 20f || func_182(uLocal_178[iLocal_212], 0, &uLocal_594, &uLocal_593, 1, 0))
				{
					__LIB_3__::func_334(&uLocal_187);
					if (__LIB_2__::func_1(uLocal_178[iLocal_212], 201, 1))
					{
						__LIB_3__::func_535(uLocal_178[iLocal_212], 1, Global_35, 0);
						__LIB_2__::func_478(uLocal_178[iLocal_212], Global_35, func_240(iLocal_212, iLocal_899, iLocal_214), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					if (func_7())
					{
						if (__LIB_0__::func_27(iLocal_48, 4194304))
						{
							func_241(0, 0);
							__LIB_9__::func_595(22);
						}
						else
						{
							func_152(2097152);
							__LIB_9__::func_595(11);
						}
					}
					else
					{
						__LIB_9__::func_595(22);
					}
				}
				if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
				{
					if (!__LIB_0__::func_75(&uLocal_156))
					{
						__LIB_1__::func_148(&uLocal_156);
					}
					else if (__LIB_1__::func_313(&uLocal_156, 9f))
					{
						__LIB_3__::func_334(&uLocal_187);
						if (func_7())
						{
							if (__LIB_0__::func_27(iLocal_48, 4194304))
							{
								func_241(0, 0);
								__LIB_9__::func_595(22);
							}
							else
							{
								func_152(2097152);
								__LIB_9__::func_595(11);
							}
						}
						else
						{
							__LIB_9__::func_595(22);
						}
					}
				}
				else if (__LIB_0__::func_75(&uLocal_156))
				{
					__LIB_0__::func_37(&uLocal_156);
				}
			}
			break;
		case 17:
			bLocal_207 = true;
			if (__LIB_2__::func_1(uLocal_178[iLocal_212], 0, 1))
			{
				__LIB_3__::func_334(&uLocal_187);
				TASK::_0x2E1D6D87346BB7D2(uLocal_178[iLocal_212], Global_35, 0, 0);
				if (__LIB_0__::func_163(uLocal_178[0], joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_MELEE")) || __LIB_0__::func_163(uLocal_178[1], joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_MELEE")))
				{
					func_80(uLocal_178[iLocal_183]);
					__LIB_9__::func_595(18);
				}
				else
				{
					__LIB_2__::func_461(0);
					func_188(uLocal_178[iLocal_212], Global_35, func_252(iLocal_212), 1, -1065353216 /* Float: -4f */);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_REACT(0, Global_35, Global_36, "Default_Shocked", 1f, 0, 4);
					TASK::TASK_SMART_FLEE_PED(0, Global_35, -1f, -1, 0, 3f, 0);
					__LIB_1__::func_474(uLocal_178[iLocal_212], &iVar0, 0, 0, 1, 1);
					__LIB_9__::func_595(19);
				}
			}
			else
			{
				__LIB_9__::func_595(19);
			}
			break;
		case 18:
			bLocal_207 = true;
			if (__LIB_2__::func_1(uLocal_178[0], 201, 1) && __LIB_2__::func_1(uLocal_178[1], 201, 1))
			{
				if (!PED::_0x3BDFCF25B58B0415(uLocal_178[0]) && !PED::_0x3BDFCF25B58B0415(uLocal_178[1]))
				{
					__LIB_2__::func_461(0);
					func_188(uLocal_178[iLocal_212], Global_35, func_252(iLocal_212), 1, -1065353216 /* Float: -4f */);
					__LIB_3__::func_535(uLocal_178[iLocal_212], 1, Global_35, 0);
					__LIB_9__::func_595(22);
				}
			}
			else
			{
				__LIB_9__::func_595(19);
			}
			break;
		case 19:
			bLocal_207 = true;
			if (__LIB_2__::func_1(uLocal_178[iLocal_212], 0, 1))
			{
				if (PED::IS_PED_INJURED(uLocal_178[iLocal_212]) || (__LIB_0__::func_163(uLocal_178[iLocal_212], 242628503) && TASK::GET_SEQUENCE_PROGRESS(uLocal_178[iLocal_212]) > 0))
				{
					__LIB_3__::func_535(uLocal_178[iLocal_212], 1, Global_35, 0);
					__LIB_9__::func_595(22);
				}
			}
			else
			{
				__LIB_9__::func_595(22);
			}
			break;
		case 20:
			__LIB_2__::func_111(&(Local_344.f_5), 1);
			__LIB_3__::func_620(&(Local_344.f_5), 1);
			bLocal_207 = true;
			func_254();
			func_255();
			if (!func_52(1073741824 /* Float: 2f */))
			{
				if (__LIB_2__::func_1(uLocal_178[iLocal_213], 0, 1))
				{
					if ((__LIB_3__::func_291(uLocal_178[iLocal_213], 1) || __LIB_0__::func_94(uLocal_178[iLocal_213], Local_64, 1) < 5f) || __LIB_2__::func_118(uLocal_178[iLocal_213], 1, 1) > 35f)
					{
						__LIB_3__::func_334(&uLocal_187);
						if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_199) && !func_52(131072))
						{
							PED::_0x24C82EF607105FAA(uLocal_178[iLocal_213], joaat("AGGRESSIVE"));
							if (iLocal_214 != 3)
							{
								PED::SET_PED_CONFIG_FLAG(uLocal_178[iLocal_213], 168, true);
							}
							PED::SET_PED_CONFIG_FLAG(uLocal_178[iLocal_213], 146, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_178[iLocal_213], false);
							__LIB_9__::func_595(21);
						}
						else
						{
							PED::_0x24C82EF607105FAA(uLocal_178[iLocal_213], joaat("AGGRESSIVE"));
							__LIB_4__::func_386(uLocal_178[iLocal_213], 2);
							func_259(uLocal_178[iLocal_213], Local_64, 0);
							func_152(1073741824 /* Float: 2f */);
						}
					}
					else
					{
						PED::SET_PED_RESET_FLAG(uLocal_178[iLocal_213], 94, true);
						PED::_0xC6981AFF6D2A71C2(uLocal_178[iLocal_213]);
					}
				}
				else
				{
					func_152(1073741824 /* Float: 2f */);
				}
			}
			break;
		case 21:
			__LIB_2__::func_111(&(Local_344.f_5), 1);
			__LIB_3__::func_620(&(Local_344.f_5), 1);
			bLocal_207 = true;
			func_254();
			func_255();
			if (!func_52(1073741824 /* Float: 2f */))
			{
				if (__LIB_2__::func_1(uLocal_178[iLocal_213], 0, 1))
				{
					if (VOLUME::_DOES_VOLUME_EXIST(iLocal_201))
					{
						if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_201, true, 0))
						{
							if (__LIB_0__::func_75(&uLocal_162))
							{
								if (__LIB_0__::func_265(&uLocal_162) > 30f)
								{
									__LIB_0__::func_37(&uLocal_162);
									__LIB_4__::func_386(uLocal_178[iLocal_213], 2);
									func_259(uLocal_178[iLocal_213], Local_64, 0);
									func_152(1073741824 /* Float: 2f */);
								}
							}
							else
							{
								__LIB_1__::func_148(&uLocal_162);
							}
						}
					}
					else
					{
						func_36();
					}
					if (func_260(2))
					{
						func_152(1073741824 /* Float: 2f */);
					}
					else if (func_260(4))
					{
						TASK::TASK_SMART_FLEE_PED(uLocal_178[iLocal_213], Global_35, -1f, -1, 32768, 1f, 0);
						func_152(1073741824 /* Float: 2f */);
					}
					if (__LIB_2__::func_118(uLocal_178[iLocal_213], 1, 1) > 35f)
					{
						__LIB_4__::func_386(uLocal_178[iLocal_213], 2);
						func_259(uLocal_178[iLocal_213], Local_64, 0);
						func_152(1073741824 /* Float: 2f */);
					}
				}
				else
				{
					func_152(1073741824 /* Float: 2f */);
				}
			}
			if (func_52(-2147483648) && func_52(1073741824 /* Float: 2f */))
			{
				__LIB_9__::func_595(22);
			}
			break;
		case 22:
			if (func_52(268435456))
			{
				return true;
			}
			else if (func_254())
			{
				Local_344.f_50 = 1;
				func_212(1);
				return true;
			}
			break;
	}
	return false;
}

void func_56()
{
	if ((__LIB_17__::func_611(2) || MAP::DOES_BLIP_EXIST(uLocal_187[0])) || MAP::DOES_BLIP_EXIST(uLocal_187[1]))
	{
		return;
	}
	if (((func_52(16) || func_261(1)) || func_261(32)) || func_261(1))
	{
		func_262(2);
		if (iLocal_214 == 1 || iLocal_214 == 2)
		{
			__LIB_2__::func_73(uLocal_178[1], &(uLocal_187[1]), -89429847, 580546400, 0, "RE_INTER_STRANGER");
		}
		else
		{
			__LIB_2__::func_73(uLocal_178[0], &(uLocal_187[0]), -89429847, 580546400, 0, "RE_INTER_STRANGER");
		}
	}
}

void func_73(var uParam0, int iParam1, int* iParam2, var uParam3, int iParam4)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return;
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::_TASK_MOVE_IN_TRAFFIC_2(0, func_273(iParam4, 0), 1073741824 /* Float: 2f */, 1f, 0, 0);
	__LIB_1__::func_474(*uParam0, &iVar0, 0, 0, 1, 1);
	PED::SET_PED_KEEP_TASK(*uParam0, true);
	__LIB_2__::func_593(iParam2, uParam3);
	__LIB_1__::func_774(iParam1, 0, 0, 0, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
}

void func_78()
{
	if (PED::_0x91A5F9CBEBB9D936(Local_64.f_16))
	{
		__LIB_3__::func_525(&(Local_64.f_15), &(Local_64.f_16));
	}
	if (PED::_0x91A5F9CBEBB9D936(Local_64.f_18))
	{
		__LIB_3__::func_525(&(Local_64.f_17), &(Local_64.f_18));
	}
	if (PED::_0x91A5F9CBEBB9D936(Local_64.f_20))
	{
		__LIB_3__::func_525(&(Local_64.f_19), &(Local_64.f_20));
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_64.f_23))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(Local_64.f_23);
		__LIB_0__::func_172(Local_64.f_23);
		Local_64.f_23 = 0;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_64.f_24))
	{
		POPULATION::_0x74C2B3DC0B294102(Local_64.f_24);
		__LIB_0__::func_172(Local_64.f_24);
		Local_64.f_24 = 0;
	}
	__LIB_0__::func_172(Local_64.f_25);
}

void func_80(int iParam0)
{
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_MELEE"), true) != 1)
	{
		return;
	}
	PED::_0x8301D87B1B89E219(iParam0, joaat("ACT_GRAPPLE_THROW_FRONT"));
	PED::_0x789DABD18E9024DB(iParam0, 32768, 0);
}

void func_84()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_202))
	{
		return;
	}
	POPULATION::_0x74C2B3DC0B294102(iLocal_202);
	POPULATION::_0xA1CFB35069D23C23(iLocal_202);
	if (PED::_0x91A5F9CBEBB9D936(uLocal_203))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_203, false);
	}
}

void func_85()
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_202))
	{
		VOLUME::_DELETE_VOLUME(iLocal_202);
		iLocal_202 = 0;
	}
}

void func_86()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_204))
	{
		return;
	}
	POPULATION::_0x74C2B3DC0B294102(iLocal_204);
	POPULATION::_0xA1CFB35069D23C23(iLocal_204);
}

void func_87()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_204))
	{
		return;
	}
	VOLUME::_DELETE_VOLUME(iLocal_204);
	iLocal_204 = 0;
}

void func_88(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_195) || !func_237(iLocal_195, iLocal_50))
	{
		return;
	}
	if ((((bParam0 || !__LIB_2__::func_1(uLocal_178[0], 0, 1)) || !func_237(uLocal_178[0], iLocal_50)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_195)) || __LIB_2__::func_118(iLocal_195, 1, 1) < 2f)
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_50, func_146(iLocal_899, iLocal_900), iLocal_195);
	}
}

void func_89(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_196) || !func_237(iLocal_196, iLocal_50))
	{
		return;
	}
	if ((((bParam0 || !__LIB_2__::func_1(uLocal_178[0], 0, 1)) || !func_237(uLocal_178[0], iLocal_50)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_196)) || __LIB_2__::func_118(iLocal_196, 1, 1) < 2f)
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_50, func_148(iLocal_214, iLocal_899, iLocal_900), iLocal_196);
	}
}

void func_93(var uParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam2)
	{
		case 10:
			(uParam0[0 /*32*/])->f_1 = joaat("RE_STREET_FIGHT_MALES_01");
			(*uParam0)[0 /*32*/] = 22;
			__LIB_3__::func_303(&((uParam0[0 /*32*/])->f_22));
			(uParam0[1 /*32*/])->f_1 = joaat("RE_STREET_FIGHT_MALES_01");
			(*uParam0)[1 /*32*/] = 22;
			__LIB_3__::func_303(&((uParam0[1 /*32*/])->f_22));
			switch (iParam1)
			{
				case 0:
					(uParam0[0 /*32*/])->f_3 = 672405718;
					(uParam0[1 /*32*/])->f_3 = 402293651;
					break;
				case 1:
					(uParam0[0 /*32*/])->f_3 = 935704633;
					(uParam0[1 /*32*/])->f_3 = 1236887312;
					break;
				case 3:
					(uParam0[0 /*32*/])->f_3 = 1418490310;
					(uParam0[1 /*32*/])->f_3 = 1655707901;
					(uParam0[2 /*32*/])->f_1 = joaat("RE_STREET_FIGHT_MALES_01");
					(*uParam0)[2 /*32*/] = 4;
					(uParam0[2 /*32*/])->f_3 = 1245509546;
					(uParam0[3 /*32*/])->f_1 = joaat("RE_STREET_FIGHT_MALES_01");
					(*uParam0)[3 /*32*/] = 4;
					(uParam0[3 /*32*/])->f_3 = 399381197;
					break;
				default:
					(uParam0[0 /*32*/])->f_3 = 672405718;
					(uParam0[1 /*32*/])->f_3 = 402293651;
					break;
			}
			break;
		case 4:
			(uParam0[0 /*32*/])->f_1 = joaat("RE_STREET_FIGHT_MALES_01");
			(*uParam0)[0 /*32*/] = 22;
			(uParam0[0 /*32*/])->f_3 = 903791949;
			__LIB_3__::func_303(&((uParam0[0 /*32*/])->f_22));
			break;
		default:
			(uParam0[0 /*32*/])->f_1 = joaat("RE_STREET_FIGHT_MALES_01");
			(*uParam0)[0 /*32*/] = 22;
			__LIB_3__::func_303(&((uParam0[0 /*32*/])->f_22));
			if (iParam1 != 4)
			{
				(uParam0[1 /*32*/])->f_1 = joaat("RE_STREET_FIGHT_MALES_01");
				(*uParam0)[1 /*32*/] = 22;
				__LIB_3__::func_303(&((uParam0[1 /*32*/])->f_22));
			}
			if (iParam1 == 3 && iParam3 == 0)
			{
				(uParam0[2 /*32*/])->f_1 = joaat("RE_STREET_FIGHT_MALES_01");
				(*uParam0)[2 /*32*/] = 4;
				(uParam0[2 /*32*/])->f_3 = 1841741509;
				(uParam0[3 /*32*/])->f_1 = joaat("RE_STREET_FIGHT_MALES_01");
				(*uParam0)[3 /*32*/] = 4;
				(uParam0[3 /*32*/])->f_3 = 961762775;
			}
			switch (iParam1)
			{
				case 0:
					(uParam0[0 /*32*/])->f_3 = 1937649573;
					(uParam0[1 /*32*/])->f_3 = 344292521;
					break;
				case 1:
					(uParam0[0 /*32*/])->f_3 = 2093761089;
					(uParam0[1 /*32*/])->f_3 = -1893568031;
					break;
				case 2:
					(uParam0[0 /*32*/])->f_3 = -2094870798;
					(uParam0[1 /*32*/])->f_3 = -1415435548;
					break;
				case 3:
					(uParam0[0 /*32*/])->f_3 = -1922964624;
					(uParam0[1 /*32*/])->f_3 = -1654288789;
					break;
				case 4:
					(uParam0[0 /*32*/])->f_3 = 903791949;
					break;
				default:
					(uParam0[0 /*32*/])->f_3 = 1937649573;
					(uParam0[1 /*32*/])->f_3 = 344292521;
					break;
			}
			break;
	}
}

void func_95(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			(*uParam1)[0 /*2*/] = "script_re@street_fight@v1";
			(uParam1[0 /*2*/])->f_1 = "challenge_enter_attacker";
			__LIB_3__::func_318((*uParam1)[0 /*2*/], uParam2);
			(*uParam1)[1 /*2*/] = "script_re@street_fight@v1";
			(uParam1[1 /*2*/])->f_1 = "challenge_loop_attacker";
			__LIB_3__::func_318((*uParam1)[1 /*2*/], uParam2);
			(*uParam1)[2 /*2*/] = "script_re@street_fight@v1";
			(uParam1[2 /*2*/])->f_1 = "challenge_exit_attacker";
			__LIB_3__::func_318((*uParam1)[2 /*2*/], uParam2);
			break;
		case 4:
			(*uParam1)[3 /*2*/] = "script_re@street_fight@uncle_fight";
			(uParam1[3 /*2*/])->f_1 = "UNCLE_STAND_UP_IF_PLAYER_SHOOTS_MAN";
			__LIB_3__::func_318((*uParam1)[3 /*2*/], uParam2);
			break;
	}
	STREAMING::_0x03DDBF2D73799F9E("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_BASE");
	STREAMING::_0x03DDBF2D73799F9E("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_STREAMED");
	STREAMING::_0x03DDBF2D73799F9E("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@LOCO@ATTACKER");
	STREAMING::_0x03DDBF2D73799F9E("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@LOCO@VICTIM");
}

int func_105(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = func_319(iParam0, iParam1);
	iVar1 = __LIB_3__::func_564(111, iVar0);
	return iVar1;
}

char* func_110(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PL_CALLING_ARTHUR_FRONT";
		case 1:
			return "PL_CALLING_ARTHUR_LEFT";
		case 2:
			return "PL_CALLING_ARTHUR_RIGHT";
		case 3:
			return "PL_CONFRONTATION";
		case 4:
			return "PL_STAND_UP";
		default:
			break;
	}
	return "INVALID_PLAY_LIST";
}

char* func_111(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return "pblIntro";
		default:
			break;
	}
	return "pblIntro";
	return "NO VALID PLAYBACK LIST FOUND";
}

Vector3 func_114(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 9:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -307.208f, 796.927f, 118.065f;
						case 1:
							return -307.208f, 796.927f, 118.065f;
						case 2:
							return -304.833f, 796.49f, 118.065f;
						case 3:
							return -304.833f, 796.49f, 118.065f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -245.201f, -245.201f, 117.446f;
						case 1:
							return -245.201f, -245.201f, 117.446f;
						case 4:
							return -245.201f, -245.201f, 117.446f;
						default:
							break;
					}
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					return 2953.273f, 523.561f, 45.303f;
				case 1:
					return 2953.273f, 523.561f, 45.303f;
				case 3:
					return 2953.273f, 525.435f, 45.303f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 4:
					return -810.336f, -1329.165f, 44.843f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_115(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 9:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 0f, 0f, 9.759f;
						case 1:
							return 0f, 0f, 9.759f;
						case 2:
							return 0f, 0f, 9.759f;
						case 3:
							return 0f, 0f, 9.759f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 0f, 0f, 18.966f;
						case 1:
							return 0f, 0f, 18.966f;
						case 4:
							return 0f, 0f, 18.966f;
						default:
							break;
					}
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				case 3:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 4:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_116(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 9:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 5.994f, 5.908f, 6.062f;
						case 1:
							return 5.994f, 5.908f, 6.062f;
						case 2:
							return 8.967f, 6.616f, 6.062f;
						case 3:
							return 8.967f, 6.616f, 6.062f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 4.154f, 4.109f, 4.846f;
						case 1:
							return 4.154f, 4.109f, 4.846f;
						case 4:
							return 4.154f, 4.109f, 4.846f;
						default:
							break;
					}
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					return 4.852f, 6.803f, 3.006f;
				case 1:
					return 4.852f, 6.803f, 3.006f;
				case 3:
					return 4.852f, 6.803f, 3.006f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 4:
					return 5f, 5f, 5f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_120(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;
	if (!__LIB_0__::func_31(iParam0))
	{
		return 0;
	}
	vVar0.x = uParam3;
	vVar0.f_1 = uParam4;
	vVar0.f_2 = uParam5;
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
				func_140(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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
						func_344(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
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
			__LIB_3__::func_921(iParam0, Global_1360165[iParam0 /*1157*/]);
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

int func_121(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	var uVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar1 = func_352(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, iParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && PED::_0xA0BC8FAED8CFEB3C(iVar1))
		{
			return iVar1;
		}
	}
	else
	{
		return iVar1;
	}
	return 0;
}

int func_128(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (__LIB_0__::func_12())
	{
		case 92:
			return iParam2;
		default:
			break;
	}
	switch (iParam0)
	{
		case 3:
			if (iParam1 > 0)
			{
				return iParam2;
			}
			else
			{
				return iParam3;
			}
			break;
		case 4:
			return 1;
		default:
			return iParam2;
	}
	return iParam3;
}

Vector3 func_138(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return -249.6991f, 767.2766f, 116.5169f;
		case 4:
			return -829.5267f, -1329.962f, 43.4293f;
		default:
			break;
	}
	return -249.6991f, 767.2766f, 116.5169f;
}

float func_139(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return -70.47f;
		case 4:
			return -113.4f;
		default:
			break;
	}
	return -70.47f;
}

void func_140(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_140(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_140(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_142(int iParam0, int iParam1, int iParam2, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (iParam0)
	{
		case 10:
			switch (iParam2)
			{
				case 3:
					*uParam3 = { 0f, 0f, 0f };
					*fParam4 = -87.349f;
					break;
				default:
					*bParam6 = 1;
					*uParam3 = { 2951.82f, 519.347f, 46.754f };
					*fParam4 = 90.57f;
					break;
			}
			break;
		case 4:
			*bParam5 = 1;
			*uParam3 = { -809.7952f, -1327.604f, 42.678f };
			*fParam4 = -179.81f;
			break;
		default:
			switch (iParam2)
			{
				case 0:
				case 1:
					switch (iParam1)
					{
						case 1:
							*uParam3 = { -0.9f, -1.08f, 0f };
							*fParam4 = 100f;
							break;
						default:
							*uParam3 = { 0.4705f, 1.527f, 0.0409f };
							*fParam4 = 189f;
							break;
					}
					break;
				case 2:
					*uParam3 = { 0.47f, 1.53f, 0.04f };
					*fParam4 = -170.07f;
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							*uParam3 = { 0.72f, 1.95f, 0.04f };
							*fParam4 = 180f;
							break;
						default:
							*uParam3 = { -2.91f, 6.59f, 0f };
							*fParam4 = 115.1f;
							break;
					}
					break;
				case 4:
					*bParam5 = 1;
					*uParam3 = { -243.7268f, 765.0442f, 117.1425f };
					*fParam4 = 110f;
					break;
			}
			break;
	}
}

char* func_143(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pedThug";
		case 1:
			return "pedVictim";
		case 2:
			return "pedWatcherA";
		case 3:
			return "pedWatcherB";
		default:
			break;
	}
	return "INVALID PED ID";
}

int func_144(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 0:
					return -908482159;
				case 1:
					return 0;
				default:
					break;
			}
			break;
		case 10:
			return -1069042457;
		case 4:
			return 0;
	}
	return 0;
}

char* func_146(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 0:
					return "DOOR_01";
				case 1:
					return "";
				default:
					break;
			}
			break;
		case 10:
			return "DOOR_L";
		case 4:
			return "";
	}
	return "";
}

int func_147(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 9:
			switch (iParam2)
			{
				case 0:
					return -1147728628;
				case 1:
					return 1098854605;
				default:
					break;
			}
			break;
		case 10:
			return 244699522;
		case 4:
			return -1974086289;
	}
	return 0;
}

char* func_148(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 9:
			switch (iParam2)
			{
				case 0:
					return "DOOR_02";
				case 1:
					switch (iParam0)
					{
						case 4:
							return "door";
						default:
							break;
					}
					break;
			}
			break;
		case 10:
			return "DOOR_R";
		case 4:
			return "door";
	}
	return "";
}

char* func_149()
{
	return "uncle";
}

char* func_150(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case default:
	}
	return "pblAction";
	return "NO VALID PLAYBACK LIST FOUND";
}

Vector3 func_151(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -829.5507f, -1329.762f, 42.54148f;
		case 9:
			return -250.7171f, 767.7319f, 116.4807f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_152(int iParam0)
{
	if (!func_52(iParam0))
	{
		__LIB_1__::func_683(&iLocal_48, iParam0);
	}
}

int func_153(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		__LIB_1__::func_487(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = __LIB_0__::func_514(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			__LIB_1__::func_148(&(iParam1->f_13));
		}
		if (__LIB_2__::func_525(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_3__::func_374(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_153(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					__LIB_2__::func_344(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							__LIB_1__::func_488(*uParam0, 1, 1);
						}
					}
					else if (__LIB_1__::func_489(iParam1, 22))
					{
						__LIB_1__::func_488(*uParam0, 0, 1);
					}
				}
				if (__LIB_2__::func_402(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_3__::func_375(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_3__::func_376(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									__LIB_1__::func_490(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					__LIB_2__::func_361(iParam1, uParam3, fVar8);
					if (__LIB_2__::func_589(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						__LIB_2__::func_480(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (__LIB_2__::func_473(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (__LIB_2__::func_402(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_3__::func_377(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_3__::func_376(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_3__::func_375(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						__LIB_2__::func_480(uParam3, 0, 0, 1, 1);
					}
					__LIB_1__::func_491(iParam1, 1);
				}
				__LIB_2__::func_361(iParam1, uParam3, fVar8);
				if (__LIB_2__::func_473(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			__LIB_2__::func_593(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_154(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam4)
	{
		case 9:
			switch (iParam3)
			{
				case 0:
					__LIB_2__::func_602(uParam1[0 /*17*/], __LIB_2__::func_460(7), "RE_STF_VAL_V1_GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(26), "RE_STF_VAL_V1_GREET_INTERVENE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				case 1:
					__LIB_2__::func_602(uParam1[0 /*17*/], __LIB_2__::func_460(7), "RE_STF_VAL_V2_GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(26), "RE_STF_VAL_V2_GREET_INTERVENE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				case 2:
					__LIB_2__::func_602(uParam1[0 /*17*/], __LIB_2__::func_460(7), "RE_STF_VAL_V4_GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(26), "RE_STF_VAL_V4_GREET_INTERVENE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				case 3:
					__LIB_2__::func_602(uParam1[0 /*17*/], __LIB_2__::func_460(7), "RE_STF_VAL_V5_GREET_POS_OUT", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(10), "RE_STF_VAL_V5_GREET_NEG_OUT", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				case 4:
					__LIB_2__::func_602(uParam1[0 /*17*/], __LIB_2__::func_460(7), "RE_STF_VAL_V6_GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(26), "RE_STF_VAL_V6_GREET_INTERVENE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam3)
			{
				case 0:
					__LIB_2__::func_602(uParam1[0 /*17*/], __LIB_2__::func_460(7), "RE_STF_VHT_V1_GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(26), "RE_STF_VHT_V1_GREET_INTERVENE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				case 1:
					__LIB_2__::func_602(uParam1[0 /*17*/], __LIB_2__::func_460(7), "RE_STF_VHT_V2_GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(26), "RE_STF_VHT_V2_GREET_INTERVENE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				case 2:
					__LIB_2__::func_602(uParam1[0 /*17*/], __LIB_2__::func_460(7), "RE_STF_VHT_V5_GREET_POS_OUT", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(26), "RE_STF_VHT_V5_GREET_NEG_OUT", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				case 3:
					__LIB_2__::func_602(uParam1[0 /*17*/], __LIB_2__::func_460(7), "RE_STF_VHT_V5_GREET_POS_OUT", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(10), "RE_STF_VHT_V5_GREET_NEG_OUT", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam3)
			{
				case 4:
					__LIB_2__::func_602(uParam1[0 /*17*/], __LIB_2__::func_460(7), "RE_STF_BLW_V6_GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(26), "RE_STF_BLW_V6_GREET_INTERVENE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				default:
					break;
			}
			break;
		default:
			break;
	}
	func_389(0, 0);
	__LIB_2__::func_451(uParam0, 0);
	*iParam2 = __LIB_2__::func_340(3, 0, 0) | 64 | 128;
}

void func_155(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == 9)
	{
		__LIB_2__::func_602(uParam1[0 /*17*/], __LIB_2__::func_460(7), "RE_STF_VAL_V6_GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(26), "RE_STF_VAL_V6_GREET_INTERVENE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	}
	else
	{
		__LIB_2__::func_602(uParam1[0 /*17*/], __LIB_2__::func_460(7), "RE_STF_BLW_V6_GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(26), "RE_STF_BLW_V6_GREET_INTERVENE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	}
	func_389(1, 0);
	__LIB_2__::func_451(uParam0, 0);
	*iParam2 = __LIB_2__::func_340(3, 0, 0) | 64 | 128;
}

void func_156(int iParam0, int iParam1)
{
	if (__LIB_2__::func_1(iParam0, 0, 1))
	{
		PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(iParam0, iParam1);
	}
}

void func_157(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam4)
	{
		case 9:
			switch (iParam3)
			{
				case 0:
					__LIB_2__::func_602(uParam1[0 /*17*/], __LIB_2__::func_460(7), "RE_STF_VAL_V1_GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(26), "RE_STF_VAL_V1_GREET_INTERVENE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				case 1:
					__LIB_2__::func_602(uParam1[0 /*17*/], __LIB_2__::func_460(7), "RE_STF_VAL_V2_GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(26), "RE_STF_VAL_V2_GREET_INTERVENE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				case 2:
					__LIB_2__::func_602(uParam1[0 /*17*/], __LIB_2__::func_460(7), "RE_STF_VAL_V4_GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(26), "RE_STF_VAL_V4_GREET_INTERVENE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				case 3:
					__LIB_2__::func_602(uParam1[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				case 4:
					__LIB_2__::func_602(uParam1[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				default:
					__LIB_2__::func_602(uParam1[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
			}
			break;
		case 10:
			switch (iParam3)
			{
				case 0:
					__LIB_2__::func_602(uParam1[0 /*17*/], __LIB_2__::func_460(7), "RE_STF_VHT_V1_GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(26), "RE_STF_VHT_V1_GREET_INTERVENE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				case 1:
					__LIB_2__::func_602(uParam1[0 /*17*/], __LIB_2__::func_460(7), "RE_STF_VHT_V2_GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(26), "RE_STF_VHT_V2_GREET_INTERVENE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				case 2:
					__LIB_2__::func_602(uParam1[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				case 3:
					__LIB_2__::func_602(uParam1[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				default:
					break;
			}
			break;
		default:
			__LIB_2__::func_602(uParam1[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			break;
	}
	func_389(1, 0);
	__LIB_2__::func_451(uParam0, 0);
	*iParam2 = __LIB_2__::func_340(3, 0, 0) | 64 | 128;
}

void func_158(var uParam0, var uParam1)
{
	func_389(2, 0);
	__LIB_2__::func_602(uParam1[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
}

void func_159(var uParam0, var uParam1)
{
	func_389(3, 0);
	__LIB_2__::func_602(uParam1[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
}

void func_178(int iParam0, int iParam1)
{
	if (!__LIB_2__::func_1(uLocal_178[iParam0], 0, 1))
	{
		return;
	}
	ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_178[iParam1], false);
	PED::_0x8301D87B1B89E219(uLocal_178[iParam0], joaat("ACT_GRAPPLE_KNOCKOUT"));
	PED::_0x789DABD18E9024DB(uLocal_178[iParam0], 32, 0);
	TASK::TASK_KNOCKED_OUT(uLocal_178[iParam1], 20f, true);
	iLocal_186 = uLocal_178[iParam1];
	if (iParam1 == 0)
	{
		func_262(8);
	}
	else
	{
		func_262(4);
	}
}

bool func_182(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		__LIB_2__::func_521(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_216(iParam0, iParam2))
			{
				*iParam3 = 128;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_479(iParam0, iParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
				else if (__LIB_2__::func_217(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (__LIB_2__::func_400(iParam0, iParam2))
				{
					*iParam3 = 64;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, iParam2))
					{
						*iParam3 = 4;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (__LIB_2__::func_220(iParam0, iParam2))
				{
					*iParam3 = 32;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, iParam2))
				{
					*iParam3 = 4096;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
					{
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
				{
					*iParam3 = 2;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*iParam3 = 2;
								__LIB_2__::func_196(iParam0, iParam2, *iParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*iParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_120(iParam2, iParam0) || (iParam2->f_9 > 0 && (__LIB_0__::func_485() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (__LIB_2__::func_198(iParam2, iParam0))
			{
				*iParam3 = 1024;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_121(iParam0, iParam1, iParam2))
				{
					*iParam3 = 2048;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (__LIB_2__::func_221(iParam0, iParam2))
					{
						*iParam3 = 8192;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, iParam2))
				{
					*iParam3 = 32768;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, iParam2))
					{
						*iParam3 = 512;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_199(iParam0, iParam2))
				{
					*iParam3 = 65536;
					iParam2->f_4 = 0;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(iParam2, iParam0))
			{
				*iParam3 = 1;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

void func_183()
{
	if (bLocal_94)
	{
		return;
	}
	__LIB_3__::func_465(__LIB_4__::func_81(111), 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
	bLocal_94 = true;
	func_212(1);
}

bool func_184(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = __LIB_0__::func_259(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_182((*uParam0)[*uParam3], 0, iParam1, iParam2, 0, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

bool func_185(int iParam0)
{
	if (!func_28(iParam0))
	{
		return false;
	}
	return ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0, false);
}

void func_187()
{
	if (bLocal_93)
	{
		return;
	}
	__LIB_3__::func_465(2, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
	bLocal_93 = true;
}

bool func_188(int iParam0, int iParam1, int iParam2, bool bParam3, float fParam4)
{
	if (!__LIB_2__::func_1(iParam0, 0, 1) || func_261(iParam2))
	{
		return false;
	}
	if (__LIB_2__::func_227(fParam4, 1, iParam0, 1) || bParam3)
	{
		if (!func_261(iParam2))
		{
			__LIB_2__::func_478(iParam0, iParam1, func_217(iLocal_899, iLocal_214, iParam2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_227(iParam2);
			return true;
		}
	}
	return false;
}

void func_190(int iParam0)
{
	if (iLocal_212 != iParam0)
	{
		iLocal_212 = iParam0;
	}
	if (!bLocal_95)
	{
		__LIB_3__::func_286(uLocal_178[iLocal_212]);
		bLocal_95 = true;
	}
	PED::SET_PED_COMBAT_MOVEMENT(uLocal_178[iLocal_212], 2);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_178[iLocal_212], 93, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_178[iLocal_212], 233, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_178[iLocal_212], 192, false);
	PED::REGISTER_TARGET(uLocal_178[iLocal_212], Global_35, 1);
	TASK::TASK_COMBAT_PED(uLocal_178[iLocal_212], Global_35, 0, 0);
	__LIB_3__::func_334(&uLocal_187);
	if (iLocal_212 != 1)
	{
		__LIB_2__::func_73(uLocal_178[iLocal_212], &(uLocal_187[iParam0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
	}
}

void func_191(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (__LIB_2__::func_1(iParam0, 201, 1))
	{
		__LIB_3__::func_535(iParam0, 1, Global_35, 0);
	}
	if (__LIB_2__::func_1(iParam1, 201, 1))
	{
		__LIB_3__::func_535(iParam1, 1, Global_35, 0);
	}
	if (__LIB_2__::func_1(iParam2, 201, 1))
	{
		__LIB_3__::func_535(iParam2, 1, Global_35, 0);
	}
	if (__LIB_2__::func_1(iParam3, 201, 1))
	{
		__LIB_3__::func_535(iParam3, 1, Global_35, 0);
	}
}

void func_192()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	var uVar4;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_178[iVar0]))
		{
		}
		else if (ENTITY::IS_ENTITY_DEAD(uLocal_178[iVar0]))
		{
		}
		else
		{
			iVar2 = iVar0;
			switch (iVar2)
			{
				case 0:
					iVar1 = func_469(&(uLocal_178[iVar2]), &(Local_623[iVar2 /*21*/]), 15f, &Local_708, &uVar4, 0, 1, 0, 0, iLocal_883, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
					if (iVar1 != -1)
					{
						if (iLocal_52 == -1)
						{
							iLocal_52 = iVar1;
							if (iLocal_16 == -1)
							{
								iLocal_16 = iLocal_17[iVar2];
							}
						}
					}
					if (iLocal_52 != -1)
					{
						bVar3 = true;
					}
					break;
				case 1:
					if (iLocal_214 == 4)
					{
						iVar1 = func_469(&(uLocal_178[iVar2]), &(Local_623[iVar2 /*21*/]), 15f, &Local_778, &uVar4, 0, 1, 0, 0, iLocal_884, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
					}
					else
					{
						iVar1 = func_469(&(uLocal_178[iVar2]), &(Local_623[iVar2 /*21*/]), 15f, &Local_743, &uVar4, 0, 1, 0, 0, iLocal_883, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
					}
					if (iVar1 != -1)
					{
						if (iLocal_53 == -1)
						{
							iLocal_53 = iVar1;
							if (iLocal_16 == -1)
							{
								iLocal_16 = iLocal_17[iVar2];
							}
						}
					}
					if (iLocal_53 != -1)
					{
						bVar3 = true;
					}
					break;
				case 2:
					iVar1 = func_469(&(uLocal_178[iVar2]), &(Local_623[iVar2 /*21*/]), 15f, &Local_813, &uVar4, 0, 1, 0, 0, iLocal_885, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
					if (iVar1 != -1)
					{
						if (iLocal_55 == -1)
						{
							iLocal_55 = iVar1;
							if (iLocal_16 == -1)
							{
								iLocal_16 = iLocal_17[iVar2];
							}
						}
					}
					if (iLocal_55 != -1)
					{
						bVar3 = true;
					}
					break;
				case 3:
					iVar1 = func_469(&(uLocal_178[iVar2]), &(Local_623[iVar2 /*21*/]), 15f, &Local_848, &uVar4, 0, 1, 0, 0, iLocal_885, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
					if (iVar1 != -1)
					{
						if (iLocal_56 == -1)
						{
							iLocal_56 = iVar1;
							if (iLocal_16 == -1)
							{
								iLocal_16 = iLocal_17[iVar2];
							}
						}
					}
					if (iLocal_56 != -1)
					{
						bVar3 = true;
					}
					break;
				default:
					break;
			}
			iVar1 = -1;
		}
		iVar0++;
	}
	func_470((bVar3 || iLocal_24 != -1));
}

void func_193()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iLocal_16 == -1)
	{
		return;
	}
	if (iLocal_52 != -1)
	{
		iVar1 = 0;
		iVar2 = iLocal_52;
	}
	else if (iLocal_53 != -1)
	{
		if (iLocal_214 == 4)
		{
			iVar1 = 1;
		}
		else
		{
			iVar1 = 1;
		}
		iVar2 = iLocal_53;
	}
	else
	{
		iLocal_55 = -1;
		iLocal_56 = -1;
		iLocal_16 = -1;
		return;
	}
	iVar0 = iVar2;
	switch (iLocal_16)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					func_471(1);
					if (iLocal_214 == 4)
					{
						func_152(1);
						func_472(8, 0);
						func_219(iLocal_899, iLocal_214, &(Local_623[iVar1 /*21*/]), &Local_778, 0);
						func_223(iLocal_899, iLocal_214, &(Local_623[0 /*21*/]), &Local_708);
					}
					break;
				case 1:
					func_152(1);
					func_183();
					func_471(2);
					if (iLocal_214 == 4)
					{
						func_472(8, 0);
						__LIB_1__::func_683(&iLocal_48, 2097152);
						func_219(iLocal_899, iLocal_214, &(Local_623[iVar1 /*21*/]), &Local_778, 0);
						func_223(iLocal_899, iLocal_214, &(Local_623[0 /*21*/]), &Local_708);
					}
					else
					{
						PED::SET_PED_CONFIG_FLAG(uLocal_178[0], 6, true);
					}
					break;
				default:
					break;
			}
			break;
		case 2:
			switch (iVar1)
			{
				case 0:
					switch (iLocal_214)
					{
						case 0:
							switch (iVar0)
							{
								case 1:
									func_472(16, 0);
									func_471(32);
									iLocal_41 = MISC::GET_GAME_TIMER();
									__LIB_9__::func_595(14);
									break;
							}
							break;
						case 4:
							Local_567.f_7 = 7000;
							_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_178[1], &Local_567);
							switch (iVar0)
							{
								case 0:
									func_472(11, 0);
									func_471(1024);
									func_152(16777216);
									break;
								case 1:
									func_472(12, 0);
									func_471(2048);
									func_152(33554432);
									break;
							}
							break;
					}
					break;
				case 1:
					Local_567.f_7 = 7000;
					_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_178[1], &Local_567);
					switch (iLocal_214)
					{
						case 1:
							switch (iLocal_899)
							{
								case 10:
									switch (iVar0)
									{
										case 1:
											func_472(15, 1);
											func_471(64);
											func_152(33554432);
											break;
									}
									break;
								default:
									switch (iVar0)
									{
										case 1:
											iLocal_42 = MISC::GET_GAME_TIMER();
											func_471(64);
											func_152(33554432);
											break;
									}
									break;
							}
							break;
						case 2:
							switch (iVar0)
							{
								case 1:
									if (iLocal_211 < 1)
									{
										func_472(2, 1);
										iLocal_211++;
										func_219(iLocal_899, iLocal_214, &(Local_623[iVar1 /*21*/]), &Local_743, iLocal_211);
										func_471(64);
										func_152(33554432);
									}
									else
									{
										func_472(3, 1);
										func_471(128);
										func_152(33554432);
									}
									break;
							}
							break;
						case 4:
							switch (iVar0)
							{
								case 0:
									func_472(13, 1);
									func_471(8);
									func_152(67108864);
									break;
								case 1:
									func_472(14, 1);
									func_471(16);
									func_152(134217728);
									break;
							}
							break;
					}
					break;
			}
			break;
		case 3:
			switch (iVar1)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							func_472(0, 0);
							iLocal_23 = 1;
							func_262(16);
							break;
						case 1:
							func_472(1, 0);
							iLocal_23 = 2;
							func_223(iLocal_899, iLocal_214, &(Local_623[0 /*21*/]), &Local_708);
							func_262(16);
							break;
					}
					func_471(4);
					break;
				default:
					break;
			}
			break;
		case 5:
			switch (iVar1)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							func_472(4, 0);
							func_471(256);
							break;
						case 1:
							func_472(5, 0);
							func_471(512);
							__LIB_9__::func_595(14);
							break;
					}
					break;
			}
			break;
		case 4:
			switch (iVar1)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							func_472(6, 0);
							func_471(256);
							break;
						case 1:
							func_472(7, 0);
							func_471(512);
							__LIB_9__::func_595(14);
							break;
					}
					break;
			}
			break;
		default:
			break;
	}
	switch (iVar1)
	{
		case 0:
			iLocal_52 = -1;
			break;
		case 1:
			iLocal_53 = -1;
			break;
		case 2:
			iLocal_55 = -1;
			break;
		case 3:
			iLocal_56 = -1;
			break;
	}
	iLocal_16 = -1;
}

void func_194()
{
	if (iLocal_24 == -1)
	{
		return;
	}
	if (iLocal_25 < 0 || iLocal_25 >= 4)
	{
		iLocal_24 = -1;
		iLocal_25 = -1;
		return;
	}
	if (!__LIB_2__::func_1(uLocal_178[iLocal_25], 0, 1))
	{
		iLocal_24 = -1;
		iLocal_25 = -1;
		return;
	}
	if (__LIB_2__::func_136(Global_35, 0))
	{
		return;
	}
	if (__LIB_2__::func_136(uLocal_178[iLocal_25], 0))
	{
		return;
	}
	if (__LIB_2__::func_478(uLocal_178[iLocal_25], Global_35, func_474(iLocal_24, iLocal_899, iLocal_214), 0, -1082130432 /* Float: -1f */, func_475(iLocal_24), 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
	{
	}
	iLocal_24 = -1;
	iLocal_25 = -1;
}

void func_195()
{
	switch (iLocal_214)
	{
		case 1:
			switch (iLocal_899)
			{
				case 9:
					if (!bLocal_43)
					{
						if (func_250(64))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_42) >= 8000)
							{
								if (!__LIB_2__::func_136(Global_35, 0))
								{
									__LIB_2__::func_478(Global_35, uLocal_178[1], "RE_STF_VAL_V2_GREET_NEG_B", 0, -1082130432 /* Float: -1f */, 0, 1, 0, 1, 1, 1, 291934926, 0, 0, 0);
									bLocal_43 = true;
								}
							}
						}
					}
					break;
			}
			break;
	}
}

void func_196()
{
	if (iLocal_214 != 3)
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_201))
	{
		return;
	}
	if (bLocal_26)
	{
		if (!__LIB_1__::func_205(Global_35, iLocal_201, 1, 0))
		{
			func_476(iLocal_899, iLocal_214, &Local_708, 1);
			bLocal_26 = false;
		}
	}
	else if (__LIB_1__::func_205(Global_35, iLocal_201, 1, 0))
	{
		func_476(iLocal_899, iLocal_214, &Local_708, 0);
		bLocal_26 = true;
	}
}

void func_197()
{
	int iVar0;
	if ((!bLocal_208 || bLocal_209) || bLocal_210)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_178[0]))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uLocal_178[0]))
	{
		iVar0 = PED::GET_PED_CAUSE_OF_DEATH(uLocal_178[0]);
		if (iVar0 == joaat("WEAPON_UNARMED"))
		{
			bLocal_210 = true;
			return;
		}
		LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_MURDER"), 0, 75f, 100f, 0, 0, 0, 0);
		PED::SET_PED_CONFIG_FLAG(uLocal_178[0], 6, true);
		bLocal_209 = true;
		return;
	}
	if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(uLocal_178[0], Global_1935630.f_44, 0))
	{
		if (Global_1935630.f_44 != joaat("WEAPON_UNARMED"))
		{
			LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_ASSAULT"), 0, 75f, 100f, 0, 0, 0, 0);
			PED::SET_PED_CONFIG_FLAG(uLocal_178[0], 6, true);
			bLocal_209 = true;
			return;
		}
	}
	if (__LIB_2__::func_401(uLocal_178[0], 1, 1, Global_1935630.f_44 != joaat("WEAPON_UNARMED"), 0, 0))
	{
		LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_THREATEN"), 0, 75f, 100f, 0, 0, 0, 0);
		PED::SET_PED_CONFIG_FLAG(uLocal_178[0], 6, true);
		bLocal_209 = true;
		return;
	}
}

void func_198()
{
	if (bLocal_44)
	{
		if (!bLocal_45)
		{
			func_477(iLocal_899, &(Local_623[1 /*21*/]), &Local_778);
			bLocal_45 = true;
		}
	}
}

void func_199()
{
	if (__LIB_2__::func_1(iLocal_186, 0, 1) && !__LIB_0__::func_163(iLocal_186, 1313215416))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_186, false);
		__LIB_3__::func_608(iLocal_186);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_186);
	}
}

bool func_201(int iParam0, char* sParam1)
{
	if (!func_28(iParam0))
	{
		return false;
	}
	return ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1);
}

void func_202()
{
	switch (iLocal_214)
	{
		case 0:
		case 1:
			if (iLocal_899 == 10)
			{
				return;
			}
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			if (!func_52(1))
			{
				if (__LIB_3__::func_496(uLocal_178[1], "RE_STF_LETS_TALK", 1067030938 /* Float: 1.2f */))
				{
					__LIB_2__::func_478(uLocal_178[1], uLocal_178[0], func_217(iLocal_899, iLocal_214, 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				}
				if (__LIB_3__::func_496(uLocal_178[1], "RE_STF_LEND_HAND", 1067030938 /* Float: 1.2f */))
				{
					__LIB_2__::func_478(uLocal_178[1], Global_35, func_217(iLocal_899, iLocal_214, 2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				}
				if (__LIB_3__::func_496(uLocal_178[0], "RE_STF_CALL_MOMMA", 1067030938 /* Float: 1.2f */))
				{
					__LIB_2__::func_478(uLocal_178[0], uLocal_178[1], func_217(iLocal_899, iLocal_214, 4), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				}
				if (__LIB_3__::func_496(uLocal_178[1], "RE_STF_LUMBAGO", 1067030938 /* Float: 1.2f */))
				{
					__LIB_2__::func_478(uLocal_178[1], uLocal_178[0], func_217(iLocal_899, iLocal_214, 8), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				}
				if (__LIB_3__::func_496(uLocal_178[0], "RE_STF_THOUGHT", 1067030938 /* Float: 1.2f */))
				{
					__LIB_2__::func_478(uLocal_178[0], uLocal_178[1], func_217(iLocal_899, iLocal_214, 16), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					func_480(&(Local_623[1 /*21*/]), &Local_778);
					func_223(iLocal_899, iLocal_214, &(Local_623[0 /*21*/]), &Local_708);
				}
			}
			break;
	}
}

void func_203()
{
	float fVar0;
	if (__LIB_0__::func_27(iLocal_48, 16))
	{
		return;
	}
	if (__LIB_0__::func_27(iLocal_48, 8))
	{
		PED::SET_RAGDOLL_BLOCKING_FLAGS(uLocal_178[0], 32);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(uLocal_178[1], 32);
		PED::SET_PED_CONFIG_FLAG(uLocal_178[1], 113, false);
		__LIB_1__::func_148(&uLocal_144);
		GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_beat_str_fght_win_smh", Local_64.f_3, 0f, 0f, 0f, 1f, false, false, false);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_178[1], false);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_178[0], false);
		__LIB_2__::func_634(&(Local_344.f_5), 0);
		FIRE::ADD_OWNED_EXPLOSION(uLocal_178[0], Local_64.f_3, 25, 0.05f, false, true, 0f);
		func_481(Local_64.f_3);
		func_152(16);
		EVENT::_REMOVE_ALL_SHOCKING_EVENTS_OF_TYPE(joaat("EVENT_SHOCKING_EXPLOSION"), false);
		func_482(&Local_886, iLocal_214, iLocal_899, iLocal_900);
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_50, false) || !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_50))
	{
		return;
	}
	fVar0 = 0f;
	switch (iLocal_214)
	{
		case 2:
			if (Local_344.f_51.f_4 == 1)
			{
				fVar0 = 0.298f;
			}
			else
			{
				fVar0 = 0.147f;
			}
			break;
		case 3:
			fVar0 = 0.298f;
			break;
		default:
			return;
	}
	if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_50) > fVar0)
	{
		EVENT::_0xB6F4825153920582();
		func_482(&Local_886, iLocal_214, iLocal_899, iLocal_900);
		func_152(8);
	}
}

void func_204()
{
	if (__LIB_0__::func_27(iLocal_48, 32) || !func_185(iLocal_50))
	{
		return;
	}
	switch (iLocal_214)
	{
		case 4:
			if (__LIB_2__::func_1(uLocal_178[0], 0, 1))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_50) > 0.0463f)
				{
					func_482(&Local_886, iLocal_214, iLocal_899, iLocal_900);
					func_481(Local_64.f_6);
					func_152(32);
				}
			}
			break;
		case 0:
		case 1:
			if (__LIB_2__::func_1(uLocal_178[1], 0, 1))
			{
				if (!__LIB_0__::func_27(iLocal_48, 4) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_50) > 0.1702f)
				{
					func_481(Local_64.f_6);
					func_152(4);
				}
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_50) > 0.247f)
				{
					func_482(&Local_886, iLocal_214, iLocal_899, iLocal_900);
					func_152(32);
				}
			}
			break;
	}
}

void func_205()
{
	if (iLocal_214 != 3)
	{
		return;
	}
	if (__LIB_0__::func_27(iLocal_48, 64))
	{
		return;
	}
	if (!__LIB_2__::func_1(uLocal_178[1], 0, 1))
	{
		return;
	}
	if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_50) > 0.46f)
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_50, func_143(1), uLocal_178[1]);
		__LIB_1__::func_864(uLocal_178[1], 1, 0);
		func_482(&Local_886, iLocal_214, iLocal_899, iLocal_900);
		PED::SET_PED_CONFIG_FLAG(uLocal_178[1], 243, true);
		func_152(64);
	}
}

void func_206()
{
	if ((((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_50) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_50, false)) || VOLUME::_DOES_VOLUME_EXIST(Local_64.f_25)) || !__LIB_2__::func_1(uLocal_178[0], 0, 1)) || !__LIB_2__::func_1(uLocal_178[1], 0, 1))
	{
		return;
	}
	switch (iLocal_214)
	{
		case 0:
		case 1:
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_50) > 0.5572f)
			{
				func_483(&Local_64, uLocal_178[0], uLocal_178[1]);
			}
			break;
		case 2:
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_50) > 0.964f)
			{
				func_483(&Local_64, uLocal_178[0], uLocal_178[1]);
			}
			break;
		case 4:
			break;
	}
}

bool func_207()
{
	float fVar0;
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_50, false) || !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_50))
	{
		return true;
	}
	if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_50, func_150(iLocal_214)))
	{
		return false;
	}
	fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_50);
	switch (iLocal_214)
	{
		case 0:
		case 1:
			if ((iLocal_899 == 9 && iLocal_900 == 1) && !__LIB_0__::func_27(iLocal_48, 262144))
			{
				if (fVar0 > 0.253f)
				{
					__LIB_1__::func_948(1098854605, 0, -0.1f, 0, 0, 0, 0, 0);
					func_152(262144);
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_50))
			{
				return true;
			}
			else if (func_484(fLocal_59, fLocal_60, 8f))
			{
				func_152(65536);
				return true;
			}
			break;
		case 2:
			if (!__LIB_0__::func_27(iLocal_48, 128))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_50))
				{
					func_152(128);
				}
			}
			if (!__LIB_0__::func_27(iLocal_48, 256))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_50))
				{
					func_152(256);
				}
			}
			if (__LIB_0__::func_27(iLocal_48, 128) && __LIB_0__::func_27(iLocal_48, 256))
			{
				return true;
			}
			break;
		case 3:
			if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_50))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_208()
{
	switch (iLocal_214)
	{
		case 0:
			func_485(0, 1);
			break;
		case 1:
			func_485(1, 0);
			break;
		case 2:
			func_485(1, 0);
			break;
		case 3:
			break;
	}
}

void func_210(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!__LIB_2__::func_1(uLocal_178[iParam0], 0, 1) || func_52(8192))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(uLocal_178[iParam0], 252, true);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(uLocal_178[iParam0], false);
	func_234(&iLocal_199, iLocal_899, iLocal_900);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_177);
	if (bParam3)
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 2000, -1f, -1f, -1f);
	}
	if (bParam2)
	{
		TASK::TASK_FORCE_MOTION_STATE(0, joaat("MOTIONSTATE_WALK"), false);
	}
	if (bParam1)
	{
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_546[2 /*2*/], Local_546[2 /*2*/].f_1, Global_35, 900, 2f, -4f, 0, 0f, false, false, -1f, 0, 0, -1f);
	}
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_64.f_12, 1f, -1, 0.25f, 2228224, 40000f);
	TASK::_TASK_USE_SCENARIO_POINT(0, iLocal_199, 0, -1, true, false, 0, false, -1f, false);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_177);
	if (iParam0 == 1)
	{
		TASK::TASK_LOOK_AT_ENTITY(uLocal_178[iParam0], uLocal_178[0], 3000, 0, 51, 0);
		TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_178[iParam0], iLocal_177, 2.3f, 2.3f);
	}
	else
	{
		TASK::TASK_PERFORM_SEQUENCE(uLocal_178[iParam0], iLocal_177);
	}
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_177);
	func_152(8192);
	PED::SET_PED_KEEP_TASK(uLocal_178[iParam0], true);
	iLocal_213 = iParam0;
}

void func_211()
{
	int iVar0;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_50))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_50, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < func_128(iLocal_214, Local_344.f_51.f_4, 2, 4))
	{
		if (iVar0 != 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_178[iVar0]))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_50, func_143(iVar0), uLocal_178[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_212(bool bParam0)
{
	int iVar0;
	if (Local_344.f_44)
	{
		return;
	}
	if ((__LIB_3__::func_332(Local_344.f_51, 1) < 25f || __LIB_4__::func_117(uLocal_178[0], 35f, 0)) || bParam0)
	{
		func_488(iLocal_899, iLocal_900);
		Local_344.f_44 = 1;
		switch (iLocal_899)
		{
			case 9:
				iVar0 = __LIB_1__::func_334(1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
				break;
			case 10:
				iVar0 = __LIB_1__::func_334(1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
				break;
			case 4:
				iVar0 = __LIB_1__::func_334(508);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
				break;
		}
	}
}

void func_213()
{
	if (__LIB_2__::func_1(uLocal_178[0], 0, 1) && __LIB_2__::func_1(uLocal_178[1], 0, 1))
	{
		if (!PED::_0x3BDFCF25B58B0415(uLocal_178[0]) && !PED::_0x3BDFCF25B58B0415(uLocal_178[1]))
		{
			if (__LIB_0__::func_265(&uLocal_150) > 3f)
			{
				__LIB_1__::func_148(&uLocal_150);
				__LIB_1__::func_148(&uLocal_147);
				if ((TASK::GET_SCRIPT_TASK_STATUS(uLocal_178[0], joaat("SCRIPT_TASK_GRAPPLE"), true) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_178[1], joaat("SCRIPT_TASK_GRAPPLE"), true) != 1) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_178[0], 242628503, true) != 1)
				{
					PED::_0x630E7B01F091A197(uLocal_178[1], joaat("GS_FACE_TO_FACE"));
					PED::_0x630E7B01F091A197(uLocal_178[0], joaat("GS_FACE_TO_FACE"));
					TASK::TASK_PUT_PED_DIRECTLY_INTO_GRAPPLE(uLocal_178[iLocal_183], uLocal_178[iLocal_184], 0, 0, 0f, 1, 0);
					PED::_0x2208438012482A1A(uLocal_178[iLocal_183], false, false);
					PED::_0x2208438012482A1A(uLocal_178[iLocal_184], false, false);
					return;
				}
			}
			return;
		}
	}
	if (iLocal_565 < 9 && (func_52(1) || func_52(32768)))
	{
		func_490(9);
	}
	switch (iLocal_565)
	{
		case 0:
			if (!ENTITY::_GET_ENTITY_CAN_BE_DAMAGED(uLocal_178[1]))
			{
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_178[1], true);
				PED::_0x29924EB8EE9DB926(uLocal_178[1], 10f);
			}
			if (!ENTITY::_GET_ENTITY_CAN_BE_DAMAGED(uLocal_178[0]))
			{
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_178[0], true);
				PED::_0x29924EB8EE9DB926(uLocal_178[0], 10f);
			}
			__LIB_1__::func_148(&uLocal_147);
			func_490(1);
			break;
		case 1:
			if (func_491(2f, 6.5f))
			{
				if (__LIB_0__::func_27(iLocal_48, 65536))
				{
					if (iLocal_214 == 0 || iLocal_214 == 1)
					{
						func_188(uLocal_178[iLocal_183], uLocal_178[iLocal_184], 4, 1, -1065353216 /* Float: -4f */);
					}
					else
					{
						func_188(uLocal_178[0], uLocal_178[1], 128, 0, -1065353216 /* Float: -4f */);
					}
				}
				__LIB_0__::func_172(Local_64.f_25);
				func_492(uLocal_178[iLocal_183]);
				__LIB_1__::func_148(&uLocal_147);
				func_490(2);
			}
			break;
		case 2:
			if (func_491(0.5f, 6.5f))
			{
				func_492(uLocal_178[iLocal_183]);
				__LIB_1__::func_148(&uLocal_147);
				func_490(3);
			}
			break;
		case 3:
			if (func_491(0.5f, 6.5f))
			{
				func_492(uLocal_178[iLocal_183]);
				__LIB_1__::func_148(&uLocal_147);
				func_490(4);
			}
			break;
		case 4:
			if (func_491(0.5f, 5.5f))
			{
				if (iLocal_214 == 0 || iLocal_214 == 1)
				{
				}
				else
				{
					func_188(uLocal_178[1], uLocal_178[0], 256, 0, -1065353216 /* Float: -4f */);
				}
				func_492(uLocal_178[iLocal_183]);
				__LIB_1__::func_148(&uLocal_147);
				func_490(5);
			}
			break;
		case 5:
			if (func_491(1f, 5.5f))
			{
				func_492(uLocal_178[iLocal_183]);
				__LIB_1__::func_148(&uLocal_147);
				func_490(6);
			}
			break;
		case 6:
			if (func_491(0.5f, 4.5f))
			{
				func_492(uLocal_178[iLocal_183]);
				__LIB_1__::func_148(&uLocal_147);
				func_490(7);
			}
			break;
		case 7:
			if (func_491(0.5f, 4.5f))
			{
				if (iLocal_214 == 2)
				{
					func_188(uLocal_178[iLocal_183], uLocal_178[iLocal_184], 512, 0, -1065353216 /* Float: -4f */);
				}
				func_492(uLocal_178[iLocal_183]);
				__LIB_1__::func_148(&uLocal_147);
				func_490(9);
			}
			break;
		case 8:
			func_490(9);
			break;
		case 9:
			if (func_491(0.5f, 4f) || __LIB_0__::func_27(iLocal_48, 32768))
			{
				__LIB_0__::func_172(Local_64.f_25);
				func_178(iLocal_183, iLocal_184);
				__LIB_1__::func_148(&uLocal_147);
				func_490(10);
				func_493(&(Local_623[1 /*21*/]), &Local_743, 1);
				func_493(&(Local_623[0 /*21*/]), &Local_708, 0);
			}
			break;
		case 10:
			break;
	}
}

bool func_214()
{
	if (ENTITY::IS_ENTITY_DEAD(uLocal_178[0]) || ENTITY::IS_ENTITY_DEAD(uLocal_178[1]))
	{
		return true;
	}
	if (__LIB_0__::func_163(uLocal_178[0], 1313215416) || __LIB_0__::func_163(uLocal_178[1], 1313215416))
	{
		return true;
	}
	return false;
}

bool func_215(int iParam0)
{
	if (!__LIB_2__::func_1(uLocal_178[iParam0], 0, 1))
	{
		return false;
	}
	if (PED::_0x3BDFCF25B58B0415(uLocal_178[iParam0]))
	{
		return true;
	}
	else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_178[iParam0], joaat("SCRIPT_TASK_GRAPPLE"), true) == 1)
	{
		return (1 || TASK::GET_SCRIPT_TASK_STATUS(uLocal_178[iParam0], joaat("SCRIPT_TASK_GRAPPLE"), true) == 0);
		return true;
	}
	return false;
}

char* func_217(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 4:
			switch (iParam2)
			{
				case 1:
					return __LIB_3__::func_394("STF", func_494(iParam0), "LETS_TALK", func_495(iParam1));
				case 2:
					if (__LIB_0__::func_181())
					{
						return __LIB_3__::func_394("STF", func_494(iParam0), "LEND_HAND_JOHN", func_495(iParam1));
					}
					else
					{
						return __LIB_3__::func_394("STF", func_494(iParam0), "LEND_HAND_ARTHUR", func_495(iParam1));
					}
					break;
				case 4:
					return __LIB_3__::func_394("STF", func_494(iParam0), "CALL_MOMMA", func_495(iParam1));
				case 8:
					return __LIB_3__::func_394("STF", func_494(iParam0), "LUMBAGO", func_495(iParam1));
				case 16:
					return __LIB_3__::func_394("STF", func_494(iParam0), "THOUGHT", func_495(iParam1));
				case 32:
					if (__LIB_0__::func_181())
					{
						return __LIB_3__::func_394("STF", func_494(iParam0), "THANKS_JOHN", func_495(iParam1));
					}
					else
					{
						return __LIB_3__::func_394("STF", func_494(iParam0), "THANKS_ARTHUR", func_495(iParam1));
					}
					break;
				case 64:
					return __LIB_3__::func_394("STF", func_494(iParam0), "HOW_DRUNK", func_495(iParam1));
				case 128:
					return __LIB_3__::func_394("STF", func_494(iParam0), "NORMAL_DRUNK", func_495(iParam1));
				case 256:
					return __LIB_3__::func_394("STF", func_494(iParam0), "NO_THANKS", func_495(iParam1));
				case 512:
					return __LIB_3__::func_394("STF", func_494(iParam0), "COVERED", func_495(iParam1));
				case 1024:
					return __LIB_3__::func_394("STF", func_494(iParam0), "WAIT_OLD", func_495(iParam1));
				case 2048:
					return __LIB_3__::func_394("STF", func_494(iParam0), "AGGRO", func_495(iParam1));
				case 4096:
					return __LIB_3__::func_394("STF", func_494(iParam0), "WARN", func_495(iParam1));
				case 8192:
					return __LIB_3__::func_394("STF", func_494(iParam0), "WARN_AGGRO", func_495(iParam1));
				case 67108864:
					return __LIB_3__::func_394("STF", func_494(iParam0), "FLEE_THUG", func_495(iParam1));
				case 16384:
					return __LIB_3__::func_394("STF", func_494(iParam0), "BACK_TO_CAMP", func_495(iParam1));
				case 32768:
					return __LIB_3__::func_394("STF", func_494(iParam0), "BACK_TO_BEECHERS", func_495(iParam1));
			}
			break;
		default:
			switch (iParam2)
			{
				case 1:
					return __LIB_3__::func_394("STF", func_494(iParam0), "DOOR_TAUNT_A", func_495(iParam1));
				case 2:
					return __LIB_3__::func_394("STF", func_494(iParam0), "DOOR_REPLY_A", func_495(iParam1));
				case 4:
					return __LIB_3__::func_394("STF", func_494(iParam0), "DOOR_TAUNT_B", func_495(iParam1));
				case 8:
					return __LIB_3__::func_394("STF", func_494(iParam0), "DOOR_REPLY_B", func_495(iParam1));
				case 262144:
					return __LIB_3__::func_394("STF", func_494(iParam0), "CALL", func_495(iParam1));
				case 524288:
					return __LIB_3__::func_394("STF", func_494(iParam0), "DECLINE", func_495(iParam1));
				case 1048576:
					return __LIB_3__::func_394("STF", func_494(iParam0), "PLAYER_DECLINE", func_495(iParam1));
				case 2097152:
					return __LIB_3__::func_394("STF", func_494(iParam0), "PLAYER_ACCEPT", func_495(iParam1));
				case 16:
					return __LIB_3__::func_394("STF", func_494(iParam0), "DRUNK", func_495(iParam1));
				case 32:
					return __LIB_3__::func_394("STF", func_494(iParam0), "WINDOW_TAUNT_A", func_495(iParam1));
				case 64:
					return __LIB_3__::func_394("STF", func_494(iParam0), "WINDOW_REPLY_A", func_495(iParam1));
				case 128:
					return __LIB_3__::func_394("STF", func_494(iParam0), "WINDOW_TAUNT_B", func_495(iParam1));
				case 256:
					return __LIB_3__::func_394("STF", func_494(iParam0), "WINDOW_REPLY_B", func_495(iParam1));
				case 512:
					return __LIB_3__::func_394("STF", func_494(iParam0), "WINDOW_TAUNT_C", func_495(iParam1));
				case 1024:
					return __LIB_3__::func_394("STF", func_494(iParam0), "SEE_WIFE", func_495(iParam1));
				case 2048:
					return __LIB_3__::func_394("STF", func_494(iParam0), "DEAD", func_495(iParam1));
				case 4194304:
					return __LIB_3__::func_394("STF", func_494(iParam0), "AGGRO_THUG", func_495(iParam1));
				case 8388608:
					return __LIB_3__::func_394("STF", func_494(iParam0), "AGGRO_VICTIM", func_495(iParam1));
				case 16777216:
					return __LIB_3__::func_394("STF", func_494(iParam0), "AGGRO_WATCHER_A", func_495(iParam1));
				case 33554432:
					return __LIB_3__::func_394("STF", func_494(iParam0), "AGGRO_WATCHER_B", func_495(iParam1));
				case 67108864:
					return __LIB_3__::func_394("STF", func_494(iParam0), "FLEE_THUG", func_495(iParam1));
				case 134217728:
					return __LIB_3__::func_394("STF", func_494(iParam0), "FLEE_VICTIM", func_495(iParam1));
				case 4096:
					return __LIB_3__::func_394("STF", func_494(iParam0), "SEES_BODY_WATCHER_A", func_495(iParam1));
				case 8192:
					return __LIB_3__::func_394("STF", func_494(iParam0), "SEES_BODY_WATCHER_B", func_495(iParam1));
				default:
					break;
			}
			break;
	}
	return "INVALID DIALOGUE BIT";
}

void func_218()
{
	switch (iLocal_214)
	{
		case 3:
			if (__LIB_2__::func_1(uLocal_178[1], 0, 1))
			{
				if (!func_52(64))
				{
					__LIB_1__::func_864(uLocal_178[1], 1, 0);
					PED::SET_PED_CONFIG_FLAG(uLocal_178[1], 243, true);
				}
			}
			break;
		default:
			func_210(1, 0, 0, 0);
			break;
	}
}

void func_219(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 1:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_602(uParam3[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
							__LIB_2__::func_602(uParam3[1 /*17*/], __LIB_2__::func_460(10), "RE_STF_VAL_V2_GREET_NEG", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
							break;
						case 1:
							__LIB_2__::func_602(uParam3[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
							__LIB_2__::func_602(uParam3[1 /*17*/], __LIB_2__::func_460(10), "RE_STF_VAL_V2_GREET_NEG_B", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
							break;
						default:
							__LIB_2__::func_602(uParam3[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
							__LIB_2__::func_602(uParam3[1 /*17*/], __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
							break;
					}
					break;
				case 2:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_602(uParam3[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
							__LIB_2__::func_602(uParam3[1 /*17*/], __LIB_2__::func_460(10), "RE_STF_VAL_V4_GREET_NEG", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
							break;
						case 1:
							__LIB_2__::func_602(uParam3[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
							__LIB_2__::func_602(uParam3[1 /*17*/], __LIB_2__::func_460(10), "RE_STF_VAL_V4_GREET_NEG_B", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
							break;
						default:
							__LIB_2__::func_602(uParam3[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
							__LIB_2__::func_602(uParam3[1 /*17*/], __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
							break;
					}
					break;
				default:
					__LIB_2__::func_602(uParam3[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(uParam3[1 /*17*/], __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 1:
					switch (iParam4)
					{
						case 0:
							__LIB_2__::func_602(uParam3[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
							__LIB_2__::func_602(uParam3[1 /*17*/], __LIB_2__::func_460(10), "RE_STF_VHT_V2_GREET_NEG", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
							break;
						default:
							__LIB_2__::func_602(uParam3[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
							__LIB_2__::func_602(uParam3[1 /*17*/], __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
							break;
					}
					break;
				default:
					__LIB_2__::func_602(uParam3[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(uParam3[1 /*17*/], __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
			}
			break;
		default:
			__LIB_2__::func_602(uParam3[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_2__::func_602(uParam3[1 /*17*/], __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			break;
	}
	__LIB_2__::func_451(uParam2, 0);
	func_389(1, 2);
}

void func_221()
{
	if (!__LIB_2__::func_1(uLocal_178[0], 0, 1))
	{
		return;
	}
	if (func_52(1) && iLocal_564 < 4)
	{
		iLocal_564 = 4;
		func_183();
		__LIB_9__::func_595(6);
	}
	switch (iLocal_564)
	{
		case 0:
			if (!__LIB_0__::func_163(uLocal_178[0], 242628503))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_177);
				TASK::TASK_CLEAR_LOOK_AT(0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
				TASK::TASK_PLAY_ANIM(0, Local_546[0 /*2*/], Local_546[0 /*2*/].f_1, 2f, -8f, -1, 0, 0f, false, 0, false, 0, false);
				TASK::TASK_PLAY_ANIM(0, Local_546[1 /*2*/], Local_546[1 /*2*/].f_1, 8f, 2f, -1, 1, 0f, false, 0, false, 0, false);
				__LIB_1__::func_474(uLocal_178[0], &iLocal_177, 0, 0, 1, 1);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_178[0], Local_546[0 /*2*/], Local_546[0 /*2*/].f_1, 1) && !__LIB_2__::func_227(0, 1, uLocal_178[0], 1))
			{
				iLocal_564 = 1;
			}
			break;
		case 1:
			if (__LIB_2__::func_227(0, 1, uLocal_178[0], 1))
			{
				func_498(iLocal_899, &(Local_623[0 /*21*/]), &Local_708);
				iLocal_564 = 2;
			}
			break;
		case 2:
			switch (iLocal_23)
			{
				case 1:
					if (__LIB_2__::func_227(0, 1, uLocal_178[0], 1))
					{
						iLocal_564 = 4;
						if (__LIB_2__::func_1(uLocal_178[0], 0, 1))
						{
							PED::SET_PED_CONFIG_FLAG(uLocal_178[0], 6, true);
						}
						bLocal_208 = true;
						__LIB_9__::func_595(6);
					}
					break;
				case 2:
					iLocal_564 = 3;
					func_152(131072);
					if (__LIB_2__::func_1(uLocal_178[0], 0, 1))
					{
						PED::SET_PED_CONFIG_FLAG(uLocal_178[0], 6, false);
					}
					func_223(iLocal_899, iLocal_214, &(Local_623[0 /*21*/]), &Local_708);
					__LIB_9__::func_595(7);
					break;
			}
			break;
		case 3:
			if (__LIB_2__::func_227(-5.5f, 1, 0, 0))
			{
				func_222();
			}
			break;
		case 4:
			func_226();
			break;
		case 5:
			break;
	}
}

void func_222()
{
	if (!__LIB_17__::func_611(16))
	{
		func_188(uLocal_178[0], uLocal_178[0], 524288, 1, -1065353216 /* Float: -4f */);
	}
	func_210(0, 1, 0, 0);
	iLocal_564 = 5;
}

void func_223(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 0:
					__LIB_2__::func_602(uParam3[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(uParam3[1 /*17*/], __LIB_2__::func_460(10), "RE_STF_VAL_V1_GREET_NEG", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				case 4:
					__LIB_2__::func_602(uParam3[0 /*17*/], __LIB_2__::func_460(7), "RE_STF_VAL_V6_GREET_POS_B", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(uParam3[1 /*17*/], __LIB_2__::func_460(10), "RE_STF_VAL_V6_GREET_NEG", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				default:
					__LIB_2__::func_602(uParam3[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(uParam3[1 /*17*/], __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					__LIB_2__::func_602(uParam3[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(uParam3[1 /*17*/], __LIB_2__::func_460(10), "RE_STF_VHT_V1_GREET_NEG", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				default:
					__LIB_2__::func_602(uParam3[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(uParam3[1 /*17*/], __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 4:
					__LIB_2__::func_602(uParam3[0 /*17*/], __LIB_2__::func_460(7), "RE_STF_BLW_V6_GREET_POS_B", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(uParam3[1 /*17*/], __LIB_2__::func_460(10), "RE_STF_BLW_V6_GREET_NEG", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				default:
					__LIB_2__::func_602(uParam3[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(uParam3[1 /*17*/], __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
			}
			break;
		default:
			__LIB_2__::func_602(uParam3[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_2__::func_602(uParam3[1 /*17*/], __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			break;
	}
	__LIB_2__::func_451(uParam2, 0);
	func_389(0, 2);
}

void func_226()
{
	TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(uLocal_178[0], Local_546[2 /*2*/], Local_546[2 /*2*/].f_1, Global_35, 900, 4f, -4f, 0, 0f, false, false, -1f, 0, 0, -1f);
	iLocal_564 = 5;
}

void func_227(int iParam0)
{
	if (!func_261(iParam0))
	{
		__LIB_1__::func_683(&iLocal_46, iParam0);
	}
}

void func_228()
{
	if (VOLUME::_DOES_VOLUME_EXIST(Local_64.f_24))
	{
		return;
	}
	if (!__LIB_2__::func_1(uLocal_178[0], 0, 1))
	{
		return;
	}
	__LIB_3__::func_685(&(Local_64.f_24), Global_36, 0f, 0f, 0f, 2f, 2f, 2f);
	POPULATION::_0xB56D41A694E42E86(Local_64.f_24, 0, 0, 0, -1, -1, 8);
	PED::_0x7C00CFC48A782DC0(Local_64.f_24, uLocal_178[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
}

int func_229()
{
	return __LIB_4__::func_391(&Local_344, &uLocal_557, 0.5f, 1114636288 /* Float: 60f */, func_500(), 500, 3f, 2f, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 0, 0);
}

int func_230(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	char* sVar15;
	char* sVar16;
	vVar12 = { __LIB_2__::func_114(Global_35, 1065353216 /* Float: 1f */) };
	sVar15 = func_110(1);
	sVar16 = func_110(2);
	switch (iParam0)
	{
		case 9:
			vVar0 = { -243.9014f, 764.795f, 117.1724f };
			vVar3 = { -255.3097f, 753.9832f, 116.0334f };
			vVar6 = { -244.3904f, 766.0107f, 117.1767f };
			vVar9 = { -260.1509f, 766.5687f, 116.4614f };
			break;
		case 4:
			vVar0 = { -809.2987f, -1327.793f, 42.66204f };
			vVar3 = { -805.478f, -1340.927f, 42.51833f };
			vVar6 = { -810.8365f, -1327.812f, 42.66229f };
			vVar9 = { -815.6164f, -1341.133f, 42.54564f };
			break;
	}
	if (__LIB_0__::func_195(vVar0, vVar3, vVar12))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam1, sVar15, true);
		return 1;
	}
	else if (!__LIB_0__::func_195(vVar6, vVar9, vVar12))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam1, sVar16, true);
		return 2;
	}
	else
	{
		return 0;
	}
	return 0;
}

bool func_232(int iParam0)
{
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return false;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, 1673132633))
	{
		return false;
	}
	return true;
}

char* func_233(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 4:
			switch (iParam2)
			{
				case 8:
					return __LIB_3__::func_394("STF", func_494(iParam0), "GREET_POS_RESPONSE", func_495(iParam1));
				case 32:
					return __LIB_3__::func_394("STF", func_494(iParam0), "GREET_NEG_RESPONSE", func_495(iParam1));
				case 2:
					return __LIB_3__::func_394("STF", func_494(iParam0), "GREET_POS_RESPONSE", func_495(iParam1));
				case 4:
					return __LIB_3__::func_394("STF", func_494(iParam0), "GREET_NEG_RESPONSE", func_495(iParam1));
				case 128:
					return __LIB_3__::func_394("STF", func_494(iParam0), "INTERVENE_RESPONSE", func_495(iParam1));
				default:
					break;
			}
			break;
		default:
			switch (iParam2)
			{
				case 8:
					return __LIB_3__::func_394("STF", func_494(iParam0), "GREET_POSITIVE_RESPONSE", func_495(iParam1));
				case 32:
					return __LIB_3__::func_394("STF", func_494(iParam0), "GREET_NEGATIVE_RESPONSE", func_495(iParam1));
				default:
					break;
			}
			break;
	}
	return "INVALID DIALOGUE BIT";
}

void func_234(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;
	char* sVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	if (TASK::_DOES_SCENARIO_POINT_EXIST(*iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		vVar1 = { func_504(iParam1, iParam2, iVar0) };
		sVar4 = func_505(iParam1, iParam2, iVar0);
		*iParam0 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vVar1, MISC::GET_HASH_KEY(sVar4), 1f, 1, false);
		if (TASK::_DOES_SCENARIO_POINT_EXIST(*iParam0) && !TASK::IS_SCENARIO_OCCUPIED(vVar1, 0.5f, true))
		{
			vVar5 = { TASK::_GET_SCENARIO_POINT_COORDS(*iParam0, true) };
			vVar8 = { 0f, 0f, 0f };
			vVar11 = { 0.5f, 0.5f, 2f };
			__LIB_3__::func_867(&(Local_64.f_21), &(Local_64.f_22), vVar5, vVar8, vVar11, 1, 534496, 1, 2, 0);
			Jump @184; //curOff = 169
		}
		iVar0++;
	}
}

void func_235()
{
	if (!__LIB_2__::func_1(uLocal_178[0], 0, 1))
	{
		return;
	}
	else if (func_52(1))
	{
		return;
	}
	else if (!func_237(uLocal_178[0], iLocal_50))
	{
		if (__LIB_3__::func_291(uLocal_178[0], 1))
		{
			__LIB_3__::func_334(&uLocal_187);
		}
		if (!func_52(536870912) && TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_199))
		{
			TASK::_TASK_USE_SCENARIO_POINT(uLocal_178[iLocal_213], iLocal_199, 0, 0, true, false, 0, false, -1f, false);
			func_152(536870912);
		}
		return;
	}
	if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_50) > func_506(iLocal_566))
	{
		__LIB_3__::func_334(&uLocal_187);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_50, func_143(0), uLocal_178[0]);
		func_210(0, 0, 1, 0);
		__LIB_1__::func_148(&uLocal_174);
		func_223(iLocal_899, iLocal_214, &(Local_623[0 /*21*/]), &Local_708);
	}
}

void func_236(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_192) || !func_237(iLocal_192, iLocal_50))
	{
		return;
	}
	if ((((!__LIB_2__::func_1(uLocal_178[0], 0, 1) || !func_237(uLocal_178[0], iLocal_50)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_192)) || __LIB_2__::func_118(iLocal_192, 1, 1) < 2f) || bParam0)
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_50, "door", iLocal_192);
	}
}

bool func_237(int iParam0, int iParam1)
{
	if (!func_185(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	return ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam0, iParam1);
}

void func_238()
{
	if (!__LIB_2__::func_1(uLocal_178[1], 0, 1))
	{
		return;
	}
	if (func_237(uLocal_178[1], iLocal_50))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_50, func_149(), uLocal_178[1]);
	}
}

char* func_240(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			return func_217(iParam1, iParam2, 67108864);
		case 1:
			return func_217(iParam1, iParam2, 134217728);
		case 2:
			return func_217(iParam1, iParam2, 16777216);
		case 3:
			return func_217(iParam1, iParam2, 33554432);
		default:
			break;
	}
	return func_217(iParam1, iParam2, 67108864);
}

void func_241(bool bParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_2__::func_1(uLocal_178[1], 0, 1) || !__LIB_2__::func_1(iLocal_185, 0, 1))
	{
		return;
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (ENTITY::IS_ENTITY_DEAD(uLocal_178[0]) && !bLocal_96)
	{
		TASK::TASK_REACT(0, Global_35, Global_36, "TaskCombat_Panic", 3f, 1f, 4);
		bLocal_96 = true;
	}
	else if (bParam0)
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 2000, -1f, -1f, -1f);
	}
	TASK::TASK_MOUNT_ANIMAL(0, iLocal_185, -1, -1, 1f, 1025, 0, 0);
	if (bParam1)
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_273(iLocal_899, 0), 1f, -1, 0.25f, 8193, 40000f);
		TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
	}
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(uLocal_178[1], iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

void func_242(bool bParam0)
{
	int iVar0;
	if (!__LIB_2__::func_1(uLocal_178[0], 0, 0))
	{
		return;
	}
	func_190(0);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_REACT(0, Global_35, Global_36, "Default_Angry", 1f, 0, 4);
	if (bParam0)
	{
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
	}
	__LIB_1__::func_474(uLocal_178[0], &iVar0, 0, 0, 1, 1);
}

void func_243()
{
	if (((!func_7() || __LIB_0__::func_27(iLocal_48, 8388608)) || !__LIB_2__::func_1(uLocal_178[1], 0, 1)) || !func_185(iLocal_50))
	{
		return;
	}
	if (func_508(iLocal_50, uLocal_178[1], iLocal_566))
	{
		func_152(8388608);
	}
}

bool func_244(int iParam0, int iParam1)
{
	if (!__LIB_2__::func_1(iParam1, 0, 1) || !func_185(iParam0))
	{
		return false;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam1, joaat("ENDSINSTAND")))
	{
		return true;
	}
	return false;
}

bool func_246()
{
	if (__LIB_0__::func_27(iLocal_48, 2097152))
	{
		if (__LIB_2__::func_227(-4.5f, 1, uLocal_178[1], 1) && __LIB_2__::func_227(-4.5f, 1, Global_35, 1))
		{
			if (!__LIB_0__::func_27(iLocal_46, 32))
			{
				func_188(uLocal_178[1], Global_35, 32, 1, -1065353216 /* Float: -4f */);
				func_227(32);
			}
			else if (!__LIB_0__::func_27(iLocal_46, 64))
			{
				func_188(Global_35, uLocal_178[1], 64, 1, -1065353216 /* Float: -4f */);
				func_227(64);
			}
			else if (!__LIB_0__::func_27(iLocal_46, 128))
			{
				func_188(uLocal_178[1], Global_35, 128, 1, -1065353216 /* Float: -4f */);
				func_227(128);
			}
			else if (__LIB_0__::func_113() && !__LIB_0__::func_27(iLocal_46, 16384))
			{
				func_188(uLocal_178[1], Global_35, 16384, 1, -1065353216 /* Float: -4f */);
				func_241(1, 0);
				func_227(16384);
			}
			else if (__LIB_0__::func_181() && !__LIB_0__::func_27(iLocal_46, 32768))
			{
				func_188(uLocal_178[1], Global_35, 32768, 1, -1065353216 /* Float: -4f */);
				func_227(32768);
				func_241(1, 0);
				bLocal_44 = true;
				return true;
			}
			else
			{
				bLocal_44 = true;
				return true;
			}
		}
	}
	else if (__LIB_2__::func_227(-4.5f, 1, uLocal_178[1], 1) && __LIB_2__::func_227(-4.5f, 1, Global_35, 1))
	{
		if (!__LIB_0__::func_27(iLocal_46, 256))
		{
			func_188(uLocal_178[1], Global_35, 256, 1, -1065353216 /* Float: -4f */);
			func_227(256);
		}
		else if (!__LIB_0__::func_27(iLocal_46, 512))
		{
			func_188(Global_35, uLocal_178[1], 512, 1, -1065353216 /* Float: -4f */);
			func_227(512);
		}
		else if (!__LIB_0__::func_27(iLocal_46, 1024))
		{
			func_188(uLocal_178[1], Global_35, 1024, 1, -1065353216 /* Float: -4f */);
			func_227(1024);
		}
		else if (__LIB_0__::func_113() && !__LIB_0__::func_27(iLocal_46, 16384))
		{
			func_188(uLocal_178[1], Global_35, 16384, 1, -1065353216 /* Float: -4f */);
			func_241(1, 0);
			func_227(16384);
		}
		else if (__LIB_0__::func_181() && !__LIB_0__::func_27(iLocal_46, 32768))
		{
			func_188(uLocal_178[1], Global_35, 32768, 1, -1065353216 /* Float: -4f */);
			func_241(1, 0);
			func_227(32768);
			bLocal_44 = true;
			return true;
		}
		else
		{
			bLocal_44 = true;
			return true;
		}
	}
	return false;
}

bool func_249()
{
	int iVar0;
	float fVar1;
	if (!func_185(iLocal_50))
	{
		return true;
	}
	else if (((iLocal_214 == 0 || iLocal_214 == 1) || iLocal_214 == 3) || iLocal_214 == 4)
	{
		return true;
	}
	if (__LIB_0__::func_27(iLocal_48, 524288))
	{
		iVar0 = 0;
		fVar1 = 0.3823f;
	}
	else if (__LIB_0__::func_27(iLocal_48, 1048576))
	{
		iVar0 = 1;
		fVar1 = 0.7441f;
	}
	else
	{
		return true;
	}
	if (!__LIB_2__::func_1(uLocal_178[iVar0], 0, 1))
	{
		return true;
	}
	if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_178[iVar0], iLocal_50) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_50) > fVar1)
	{
		__LIB_3__::func_535(uLocal_178[iVar0], 1, Global_35, 0);
		return true;
	}
	return false;
}

bool func_250(int iParam0)
{
	return (uLocal_22 && iParam0) != 0;
}

int func_252(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 67108864;
		case 1:
			return 134217728;
		case 2:
			return 16777216;
		case 3:
			return 33554432;
		default:
			break;
	}
	return 67108864;
}

bool func_254()
{
	if ((Local_344.f_46 || !__LIB_2__::func_1(uLocal_178[2], 0, 1)) || !__LIB_2__::func_1(uLocal_178[3], 0, 1))
	{
		return true;
	}
	if (!func_52(512))
	{
		if (((ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_178[2], joaat("ENDSINSTAND")) || !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_50)) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_50, false)) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_178[2], iLocal_50))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_178[2], uLocal_178[1], -1, -1f, -1f, -1f);
			func_152(512);
		}
	}
	else if (!func_52(1024))
	{
		if (((ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_178[3], joaat("ENDSINSTAND")) || !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_50)) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_50, false)) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_178[3], iLocal_50))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_178[3], uLocal_178[1], -1, -1f, -1f, -1f);
			func_152(1024);
		}
	}
	else if (!func_52(8192))
	{
	}
	else if (!func_261(4096))
	{
		if (__LIB_2__::func_227(-4.5f, 1, uLocal_178[2], 1) && __LIB_2__::func_227(-4.5f, 1, uLocal_178[3], 1))
		{
			if (func_188(uLocal_178[2], uLocal_178[3], 4096, 0, -1065353216 /* Float: -4f */))
			{
				if (iLocal_214 == 3)
				{
					EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_SEEN_PED_KILLED"), ENTITY::GET_ENTITY_COORDS(uLocal_178[1], true, false), -1f, -1f, -1f, -1f, -1f, -1, -1);
					func_227(4096);
					TASK::_TASK_MOVE_IN_TRAFFIC_3(uLocal_178[2], Global_35, 1f, 0, 0);
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(uLocal_178[3], uLocal_178[2], 2f, -1f, 0f, 1f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
				}
			}
		}
	}
	else if (!func_261(8192))
	{
		if (func_188(uLocal_178[3], uLocal_178[2], 8192, 0, -1065353216 /* Float: -4f */))
		{
			func_227(8192);
		}
	}
	return false;
}

int func_255()
{
	int iVar0;
	if (iLocal_214 != 4)
	{
		func_152(-2147483648);
		return 1;
	}
	if (!func_52(2))
	{
		if (!__LIB_2__::func_1(iLocal_185, 0, 1) || (__LIB_0__::func_394(uLocal_178[1], iLocal_185, 1) && !__LIB_0__::func_163(uLocal_178[1], 713668775)))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::_TASK_MOVE_IN_TRAFFIC_2(0, func_273(iLocal_899, 0), 1073741824 /* Float: 2f */, 1f, 0, 0);
			TASK::_TASK_MOVE_IN_TRAFFIC_2(0, func_273(iLocal_899, 1), 1073741824 /* Float: 2f */, 1f, 0, 0);
			__LIB_1__::func_474(uLocal_178[1], &iVar0, 0, 0, 1, 1);
			func_152(2);
		}
	}
	if (func_52(-2147483648))
	{
		return 1;
	}
	if ((func_260(8) || func_260(32)) || ((__LIB_0__::func_94(uLocal_178[1], func_273(iLocal_899, 0), 1) < 5f && !func_52(67108864)) && !func_52(134217728)))
	{
		func_73(&(uLocal_178[1]), 4, &(Local_623[1 /*21*/]), &Local_778, iLocal_899);
		func_152(-2147483648);
	}
	return 0;
}

int func_259(int iParam0, vector3 vParam1, char* sParam4)
{
	int iVar0;
	if (!ITEMSET::IS_ITEMSET_VALID(Global_1396084))
	{
		return 0;
	}
	if (__LIB_0__::func_86(vParam1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ITEMSET::IS_IN_ITEMSET(iParam0, Global_1396084))
		{
			return 1;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
		{
			iVar0 = MISC::GET_HASH_KEY(sParam4);
			if (!__LIB_3__::func_329(iVar0))
			{
				DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_hashKey", iVar0);
			}
		}
		ITEMSET::ADD_TO_ITEMSET(iParam0, Global_1396084);
		__LIB_3__::func_327(iParam0, 0);
		__LIB_3__::func_328(iParam0, 7);
		__LIB_4__::func_387(iParam0, vParam1);
		return 1;
	}
	return 0;
}

bool func_260(int iParam0)
{
	return __LIB_0__::func_27(iLocal_47, iParam0);
}

bool func_261(int iParam0)
{
	return __LIB_0__::func_27(iLocal_46, iParam0);
}

void func_262(int iParam0)
{
	if (!__LIB_17__::func_611(iParam0))
	{
		__LIB_1__::func_683(&iLocal_49, iParam0);
	}
}

Vector3 func_273(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			return -2569.571f, 459.7099f, 145.5262f;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -1362.5f, -983.7f, 66.6f;
				case 1:
					return -2569.571f, 459.7099f, 145.5262f;
				default:
					break;
			}
			break;
	}
	return -240.1862f, 740.1418f, 114.8284f;
}

int func_319(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
			return 0;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 1;
				case 1:
					return 2;
				default:
					break;
			}
			break;
		case 10:
			return 3;
	}
	return 0;
}

void func_344(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (__LIB_0__::func_52(iParam2))
		{
			iVar0 = func_588(iParam2, -1);
			if (__LIB_0__::func_205(iParam1, iVar0))
			{
				if (__LIB_0__::func_206(iParam1, iVar0))
				{
					if (__LIB_0__::func_493(iParam1, iVar0))
					{
						PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam1, "metaped_outfit_request"), iParam1, true, false);
						__LIB_0__::func_207(iParam1);
					}
				}
				else
				{
					PED::_SET_PED_BODY_COMPONENT(iParam1, iVar0);
				}
			}
		}
		__LIB_0__::func_494(iParam0, iParam1, 0);
		PED::_UPDATE_PED_VARIATION(iParam1, false, true, true, true, false);
		PED::_0xE3144B932DFDFF65(iParam1, 0f, -1, true, true);
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam1, 10, "ALL");
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 3);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 0);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 5);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 7);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 8);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 9);
		if (bParam3)
		{
			__LIB_0__::func_288(iParam0, 66, 0);
		}
	}
}

int func_352(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam1))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_177(iParam1);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || !__LIB_0__::func_272(iVar0, 0)) || (bParam3 && !__LIB_0__::func_212(iParam1)))
	{
		if (bParam2)
		{
			if (__LIB_0__::func_725(iParam1, 1) != 0)
			{
				iVar0 = func_600(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, iParam12, bParam7, bParam15, bParam16, iParam17);
			}
			else
			{
				*uParam0 = 1;
				return 0;
			}
		}
		else
		{
			*uParam0 = 1;
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && __LIB_0__::func_272(iVar0, 0))
	{
		*uParam0 = 2;
		Global_1360165[iParam1 /*1157*/].f_70.f_2 = 0;
		__LIB_0__::func_834(iParam1, iVar0);
		__LIB_1__::func_434(iParam1, bParam13, bParam14, 1);
		return iVar0;
	}
	else
	{
		*uParam0 = 0;
		return 0;
	}
	return 0;
}

void func_389(int iParam0, int iParam1)
{
	iLocal_17[iParam0] = iParam1;
}

int func_469(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_153(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_3__::func_156(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!__LIB_0__::func_474(558))
				{
					__LIB_1__::func_240(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return iVar1;
}

void func_470(bool bParam0)
{
	func_723();
	if (bParam0 || __LIB_2__::func_136(Global_35, 0))
	{
		func_724();
	}
	else
	{
		func_725();
	}
}

void func_471(int iParam0)
{
	uLocal_22 = (uLocal_22 || iParam0);
}

void func_472(int iParam0, int iParam1)
{
	if (__LIB_0__::func_694(&uLocal_14, iParam0, 1))
	{
		return;
	}
	iLocal_24 = iParam0;
	iLocal_25 = iParam1;
}

char* func_474(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_3__::func_394("STF", func_494(iParam1), "AGGRO_THUG", func_495(iParam2));
		case 1:
			return __LIB_3__::func_394("STF", func_494(iParam1), "DECLINE", func_495(iParam2));
		case 2:
			return "CHALLENGE_THREATEN";
		case 3:
			return "IGNORING_YOU";
		case 4:
			return "GENERIC_INSULT_HIGH_NEUTRAL";
		case 5:
			return "OPENS_FIRE";
		case 6:
			return "NO_IDEA";
		case 7:
			return "FIGHT";
		case 8:
			return __LIB_3__::func_394("STF", func_494(iParam1), "INTERVENE_RESPONSE", func_495(iParam2));
		case 9:
			return __LIB_3__::func_394("STF", func_494(iParam1), "NORMAL_DRUNK", func_495(iParam2));
		case 10:
			return __LIB_3__::func_394("STF", func_494(iParam1), "WAIT_OLD", func_495(iParam2));
		case 11:
			return __LIB_3__::func_394("STF", func_494(iParam1), "GREET_POS_RESPONSE", func_495(iParam2));
		case 12:
			return __LIB_3__::func_394("STF", func_494(iParam1), "GREET_NEG_RESPONSE", func_495(iParam2));
		case 13:
			return __LIB_3__::func_394("STF", func_494(iParam1), "GREET_POS_RESPONSE", func_495(iParam2));
		case 14:
			return __LIB_3__::func_394("STF", func_494(iParam1), "GREET_NEG_RESPONSE", func_495(iParam2));
		case 15:
			return "DEFUSE_RESPONSE";
		case 16:
			return __LIB_3__::func_394("STF", func_494(iParam1), "AGGRO_THUG", func_495(iParam2));
		default:
			break;
	}
	return "";
}

int func_475(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 2;
		case 3:
			return 2;
		case 4:
			return 0;
		case 5:
			return 2;
		case 6:
			return 0;
		case 7:
			return 3;
		case 8:
			return 0;
		case 9:
			return 0;
		case 10:
			return 0;
		case 11:
			return 0;
		case 12:
			return 0;
		case 13:
			return 0;
		case 14:
			return 0;
		case 15:
			return 1;
		case 16:
			return 0;
		default:
			break;
	}
	return -1;
}

void func_476(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 3:
					if (bParam3)
					{
						__LIB_2__::func_602(uParam2[0 /*17*/], __LIB_2__::func_460(7), "RE_STF_VAL_V5_GREET_POS_OUT", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
						__LIB_2__::func_602(uParam2[1 /*17*/], __LIB_2__::func_460(10), "RE_STF_VAL_V5_GREET_NEG_OUT", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
						func_389(0, 5);
					}
					else
					{
						__LIB_2__::func_602(uParam2[0 /*17*/], __LIB_2__::func_460(7), "RE_STF_VAL_V5_GREET_POS_IN", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
						__LIB_2__::func_602(uParam2[1 /*17*/], __LIB_2__::func_460(10), "RE_STF_VAL_V5_GREET_NEG_IN", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
						func_389(0, 4);
					}
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 2:
				case 3:
					if (bParam3)
					{
						__LIB_2__::func_602(uParam2[0 /*17*/], __LIB_2__::func_460(7), "RE_STF_VHT_V5_GREET_POS_OUT", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
						__LIB_2__::func_602(uParam2[1 /*17*/], __LIB_2__::func_460(10), "RE_STF_VHT_V5_GREET_NEG_OUT", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
						func_389(0, 5);
					}
					else
					{
						__LIB_2__::func_602(uParam2[0 /*17*/], __LIB_2__::func_460(7), "RE_STF_VHT_V5_GREET_POS_IN", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
						__LIB_2__::func_602(uParam2[1 /*17*/], __LIB_2__::func_460(10), "RE_STF_VHT_V5_GREET_NEG_IN", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
						func_389(0, 4);
					}
					break;
			}
			break;
	}
}

void func_477(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 == 9)
	{
		__LIB_2__::func_602(uParam2[0 /*17*/], __LIB_2__::func_460(7), "RE_STF_VAL_V6_GREET_POS_UNCLE", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		__LIB_2__::func_602(uParam2[1 /*17*/], __LIB_2__::func_460(10), "RE_STF_VAL_V6_GREET_NEG_UNCLE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	}
	else
	{
		__LIB_2__::func_602(uParam2[0 /*17*/], __LIB_2__::func_460(7), "RE_STF_BLW_V6_GREET_POS_UNCLE", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		__LIB_2__::func_602(uParam2[1 /*17*/], __LIB_2__::func_460(10), "RE_STF_BLW_V6_GREET_NEG_UNCLE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	}
	__LIB_2__::func_451(uParam1, 0);
	func_389(1, 2);
}

void func_480(var uParam0, var uParam1)
{
	__LIB_2__::func_602(uParam1[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_451(uParam0, 0);
	func_389(1, 6);
}

void func_481(vector3 vParam0)
{
	__LIB_3__::func_277(1891783641, vParam0, 1);
}

void func_482(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	switch (iParam2)
	{
		case 9:
			iVar0 = __LIB_1__::func_334(1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			break;
		case 10:
			iVar0 = __LIB_1__::func_334(1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			break;
		case 4:
			iVar0 = __LIB_1__::func_334(508);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			break;
	}
	__LIB_3__::func_899(uParam0, func_728(iParam1), "", func_729(iParam1, iParam2, iParam3), 0, func_730(iParam1), func_731(iParam2), func_731(iParam2), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1127481344 /* Float: 180f */, 0);
}

void func_483(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	if (!__LIB_2__::func_1(iParam1, 0, 1) || !__LIB_2__::func_1(iParam2, 0, 1))
	{
		return;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam2, true, false) };
	vVar6 = { __LIB_4__::func_147(vVar0, vVar3) };
	uParam0->f_25 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), vVar6, 0f, 0f, 0f, 0.5f, 0.5f, 1f);
}

bool func_484(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_50);
	if ((fVar0 < fParam1 && fVar0 > fParam0) && MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_2__::func_114(Global_35, 1065353216 /* Float: 1f */), Local_344.f_51, true) < fParam2)
	{
		return true;
	}
	return false;
}

void func_485(int iParam0, int iParam1)
{
	if (!__LIB_2__::func_1(uLocal_178[iParam0], 0, 1))
	{
		return;
	}
	if (!__LIB_2__::func_1(uLocal_178[iParam1], 0, 1))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(uLocal_178[iParam1], 174, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_178[iParam1], 213, true);
	PED::_0x789DABD18E9024DB(uLocal_178[iParam0], 29, 0);
	func_734();
	PED::SET_PED_USING_ACTION_MODE(uLocal_178[iParam0], true, 8000, 0);
	PED::_0x630E7B01F091A197(uLocal_178[iParam0], joaat("GS_FACE_TO_FACE"));
	PED::_0x630E7B01F091A197(uLocal_178[iParam1], joaat("GS_FACE_TO_FACE"));
	TASK::TASK_PUT_PED_DIRECTLY_INTO_GRAPPLE(uLocal_178[iParam0], uLocal_178[iParam1], 0, 0, 0.2f, 0, 0);
	PED::FORCE_PED_MOTION_STATE(uLocal_178[iParam0], 1926482157, false, 0, false);
	PED::FORCE_PED_MOTION_STATE(uLocal_178[iParam1], 1926482157, false, 0, false);
	iLocal_183 = iParam0;
	iLocal_184 = iParam1;
	__LIB_1__::func_148(&uLocal_150);
	__LIB_1__::func_148(&uLocal_147);
}

void func_488(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = func_319(iParam0, iParam1);
	iVar1 = __LIB_3__::func_564(111, iVar0);
	iVar1++;
	__LIB_3__::func_461(111, iVar0, iVar1);
}

void func_490(int iParam0)
{
	iLocal_565 = iParam0;
}

bool func_491(float fParam0, float fParam1)
{
	if (__LIB_0__::func_265(&uLocal_147) > fParam0)
	{
		return true;
	}
	if (__LIB_2__::func_118(uLocal_178[0], 0, 1) < fParam1)
	{
		return true;
	}
	return false;
}

void func_492(int iParam0)
{
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return;
	}
	PED::_0x8301D87B1B89E219(iParam0, joaat("ACT_GRAPPLE_ATTACK"));
	PED::_0x789DABD18E9024DB(iParam0, 32, 0);
}

void func_493(var uParam0, var uParam1, int iParam2)
{
	func_389(iParam2, 1);
	__LIB_2__::func_602(uParam1[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_411(uParam1[0 /*17*/], 0, 0);
	__LIB_2__::func_411(uParam1[1 /*17*/], 0, 0);
}

char* func_494(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return "VAL";
		case 10:
			return "VHT";
		case 4:
			return "BLW";
		default:
			break;
	}
	return "INVALID";
}

int func_495(int iParam0)
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
			return 5;
		case 4:
			return 6;
		default:
			break;
	}
	return -1;
}

void func_498(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 9:
			__LIB_2__::func_602(uParam2[0 /*17*/], __LIB_2__::func_460(4), "RE_STF_VAL_V1_PLAYER_ACCEPT", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_2__::func_602(uParam2[1 /*17*/], __LIB_2__::func_460(6), "RE_STF_VAL_V1_PLAYER_DECLINE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			break;
		case 10:
			__LIB_2__::func_602(uParam2[0 /*17*/], __LIB_2__::func_460(4), "RE_STF_VHT_V1_PLAYER_ACCEPT", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_2__::func_602(uParam2[1 /*17*/], __LIB_2__::func_460(6), "RE_STF_VHT_V1_PLAYER_DECLINE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			break;
		default:
			__LIB_2__::func_602(uParam2[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_2__::func_602(uParam2[1 /*17*/], __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			break;
	}
	__LIB_2__::func_451(uParam1, 0);
	func_389(0, 3);
}

float func_500()
{
	switch (iLocal_899)
	{
		case 10:
			switch (iLocal_214)
			{
				case 0:
					return 10f;
				case 1:
					return 10f;
				case 3:
					return 10f;
				default:
					break;
			}
			return 10f;
		default:
			switch (iLocal_214)
			{
				case 0:
					return 10f;
				case 1:
					return 10f;
				case 3:
					return 10f;
				case 4:
					return 10f;
				default:
					break;
			}
			return 10f;
	}
	return 20f;
}

Vector3 func_504(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return -240.9722f, 770.5749f, 117.085f;
						case 1:
							return -240.4874f, 769.4385f, 117.085f;
						case 2:
							return -240.1775f, 768.6014f, 117.085f;
						default:
							break;
					}
					return -240.9722f, 770.5749f, 117.085f;
				default:
					switch (iParam2)
					{
						case 0:
							return -311.4769f, 805.1859f, 117.9799f;
						case 1:
							return -311.6861f, 806.213f, 117.9799f;
						case 2:
							return -311.8987f, 807.0702f, 117.98f;
						default:
							break;
					}
					return -311.4769f, 805.1859f, 117.9799f;
			}
			break;
		case 10:
			switch (iParam2)
			{
				case 0:
					return 2947.972f, 526.3637f, 44.34212f;
				case 1:
					return 2945.712f, 528.1676f, 44.33343f;
				case 2:
					return 2948.965f, 526.3848f, 44.34282f;
				default:
					break;
			}
			return 2947.972f, 526.3637f, 44.34212f;
		case 4:
			return -815.7969f, -1318.883f, 42.67896f;
	}
	return 0f, 0f, 0f;
}

char* func_505(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 10:
			switch (iParam2)
			{
				case 0:
					return "WORLD_HUMAN_BARCUSTOMER_BEER";
				case 1:
					return "WORLD_HUMAN_BARCUSTOMER_BEER";
				case 2:
					return "WORLD_HUMAN_BARCUSTOMER";
				default:
					break;
			}
			break;
		case 4:
			switch (iParam2)
			{
				case 0:
					return "WORLD_HUMAN_BARCUSTOMER_BEER";
				case 1:
					return "WORLD_HUMAN_DRINKING";
				case 2:
					return "WORLD_HUMAN_SMOKE_CIGAR";
				default:
					break;
			}
			break;
		default:
			switch (iParam1)
			{
				case 0:
					return "WORLD_HUMAN_BARCUSTOMER_BEER";
				default:
					break;
			}
			return "WORLD_HUMAN_BARCUSTOMER_BEER";
	}
	return "WORLD_HUMAN_BARCUSTOMER_BEER";
}

float func_506(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0.5987f;
		case 1:
			return 0.6171f;
		case 2:
			return 0.6024f;
		default:
			break;
	}
	return 1f;
}

bool func_508(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	if ((!__LIB_2__::func_1(iParam1, 0, 1) || !func_185(iParam0)) || !func_201(iParam0, func_110(4)))
	{
		return false;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam1, 633058162))
	{
	}
	fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0);
	switch (iParam2)
	{
		case 0:
			if (func_743(fVar0, 0.1913f, 0.455f))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0, func_110(4), true);
				return true;
			}
			break;
		case 1:
			if (func_743(fVar0, 0.2379f, 0.4888f))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0, func_110(4), true);
				return true;
			}
			break;
		case 2:
			if (func_743(fVar0, 0.2073f, 0.465f))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0, func_110(4), true);
				return true;
			}
			break;
	}
	return false;
}

int func_588(int iParam0, int iParam1)
{
	int iVar0;
	switch (iParam0)
	{
		case 178615350:
			return joaat("META_OUTFIT_COLD_WEATHER");
		case 2094043703:
			return -1395382793;
		case -695701225:
			return -1090160065;
		case 404503428:
			return -1704514526;
		case -1268239471:
			return -1832874334;
		case -1874208704:
			return 1680324116;
		case 1593315648:
			return 989578874;
		case -1559986688:
			return 174754238;
		case 1071744295:
			return -2065784734;
		case 977450639:
			return 2111449038;
		case 1901494236:
			return 1245083301;
		case 713940276:
			return -1949892659;
		case 1744281750:
			return joaat("META_OUTFIT_WARM_WEATHER_CASUAL");
		case 283037683:
			return 1996046145;
		case -2051275045:
			return -306710010;
		case 1495063555:
			return -339275545;
		case 1046468203:
			return 393090546;
		case 1018353621:
			return 114272443;
		case -433615745:
			return 643643053;
		case 777603945:
			return joaat("META_OUTFIT_KIDNAPPED");
		case -1668922931:
			return -1915831038;
		case -1341683964:
			return 1689938120;
		case 928493661:
			return 861275228;
		case 431390894:
			return -20643141;
		case -301101630:
			return -1187204983;
		case -1155031950:
			return 1883650185;
		case -1248623443:
			return -1437962122;
		case 350498312:
			return 1959714099;
		case -481967001:
			return 1833893952;
		case 513932985:
			return 505715365;
		case -193269670:
			return -1774801049;
		case -1684458716:
			return 1976273473;
		case -973332710:
			return -2045878709;
		case 1658153743:
			return -2072429185;
		case 1842975347:
			return 491764525;
		case -1678882891:
			return -1638703055;
		case -268604689:
			return joaat("META_OUTFIT_COOL_WEATHER");
		case 1818898449:
			return 30596609;
		case -922193456:
			switch (iParam1)
			{
				case 24:
				case 25:
					return joaat("META_OUTFIT_DEFAULT");
				default:
					break;
			}
			return joaat("META_OUTFIT_WARM_WEATHER");
		case 1205492208:
			return 1598276604;
		case 1199580439:
			return -1443192745;
		case -310473775:
			return -877585857;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case 296923297:
			iVar0 = func_781(296923297, iParam1);
			return func_782(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_781(1237718549, iParam1);
			return func_782(iVar0);
		case -23947011:
			return -456769142;
		case 1295334688:
			return 869636257;
		case 1200878026:
			return 1560123389;
		case -1692022104:
			return -1851470579;
		case 707545953:
			return 890352471;
		case -1532979576:
			return 1391951221;
		case -1642335258:
			return -1491647079;
		case 876797088:
			return 1309207681;
		case -1587546924:
			return -1303789247;
		case 961676983:
			return -1527307534;
		case 1300659195:
			return -309158751;
		case -571427255:
			return -251280159;
		case 837028314:
			return -20984612;
		case -1394723994:
			return -1857650992;
		case -1335291723:
			return -1120526485;
		case -445211559:
			return -757536090;
		case -946772361:
			return 646599895;
		case 1950972546:
			return -1699183538;
		case -1092189504:
			return 389057251;
		case 80515440:
			return -2137653778;
		case 6418928:
			return -211106360;
		case -1648322231:
			return 1074183062;
		case -1065026089:
			return 1087308308;
		case 2062813606:
			return 1709174532;
		case 876535472:
			return -1916145078;
		case -1205468859:
			return -757536090;
		case 1484386316:
			return -800489594;
		case 1254970547:
			return -211106360;
		case 867156718:
			return 241911854;
		case -426171916:
			return joaat("META_OUTFIT_DEFAULT");
	}
	return joaat("META_OUTFIT_DEFAULT");
}

int func_600(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	char* sVar12;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	vVar0 = { iParam3, iParam4, iParam5 };
	iVar3 = __LIB_1__::func_179(iParam0, 1);
	switch (Global_1360165[iParam0 /*1157*/].f_70.f_12)
	{
		case 0:
			Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_0x31C70A716CAE1FEE(iVar3);
			Global_1360165[iParam0 /*1157*/].f_125 = 0;
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				__LIB_0__::func_234(iParam0, 3);
			}
			else
			{
				if (!__LIB_0__::func_851(iParam0) && __LIB_0__::func_852(iParam0, &uVar4))
				{
					PERSCHAR::_0x187D65F3AEC5D679(__LIB_0__::func_725(iParam0, 1), &uVar4);
				}
				__LIB_0__::func_213(iParam0, 256, 0);
				__LIB_0__::func_234(iParam0, 1);
			}
			break;
		case 1:
			if (!Global_1359489.f_12)
			{
				if (!PERSCHAR::_0xA8120EBEAF290C7A(iVar3))
				{
					return __LIB_0__::func_749();
				}
				if (bParam2 && !__LIB_0__::func_86(vVar0))
				{
					PERSCHAR::_0x59C7AD6FEA2AC449(iVar3, vVar0);
				}
				else if (bParam2)
				{
					PERSCHAR::_0xD4B614179BCD0654(iVar3);
				}
				if (!__LIB_4__::func_390(iParam0, vVar0, iParam6, iParam10))
				{
					return __LIB_0__::func_749();
				}
				if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
				{
					if (PERSCHAR::_0x31C70A716CAE1FEE(iVar3) != Global_1360165[iParam0 /*1157*/].f_124)
					{
					}
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1360165[iParam0 /*1157*/].f_124, true))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
					}
					ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, true);
					ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, true);
					__LIB_0__::func_234(iParam0, 2);
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				__LIB_0__::func_234(iParam0, 1);
				return __LIB_0__::func_749();
			}
			if (!bParam9 || PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/].f_124))
			{
				__LIB_0__::func_234(iParam0, 3);
			}
			break;
		case 3:
			if (!__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				__LIB_0__::func_234(iParam0, 1);
				return __LIB_0__::func_749();
			}
			if (bParam7)
			{
				if (!__LIB_1__::func_411(iParam0, Global_1360165[iParam0 /*1157*/].f_124, 1))
				{
					return __LIB_0__::func_749();
				}
			}
			if ((bParam2 && !__LIB_0__::func_86(vVar0)) && !__LIB_0__::func_175(vVar0, ENTITY::GET_ENTITY_COORDS(Global_1360165[iParam0 /*1157*/].f_124, true, false), 1056964608 /* Float: 0.5f */, 1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_140(Global_1360165[iParam0 /*1157*/].f_124, vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
			}
			if (bParam1)
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/].f_124))
				{
					if (__LIB_0__::func_287(iParam0, 39, 1))
					{
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				__LIB_0__::func_288(iParam0, 39, 1);
				__LIB_0__::func_213(iParam0, 8, 1);
				__LIB_0__::func_213(iParam0, 64, 0);
				Global_1360165[iParam0 /*1157*/].f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			}
			ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, false);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, false);
			__LIB_1__::func_547(Global_1360165[iParam0 /*1157*/].f_124, iParam0);
			if (bParam8)
			{
				POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/].f_124, 1);
			}
			sVar12 = __LIB_0__::func_853(iParam0, __LIB_0__::func_181());
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar12))
			{
				PERSCHAR::_0x63AA2B8EB087886A(__LIB_0__::func_725(iParam0, 1), MISC::GET_HASH_KEY(sVar12));
			}
			Global_1360165[iParam0 /*1157*/].f_70 = Global_1360165[iParam0 /*1157*/].f_124;
			Global_1360165[iParam0 /*1157*/].f_124 = 0;
			__LIB_0__::func_290(iParam0, 40, 0);
			__LIB_0__::func_213(iParam0, 32, 0);
			__LIB_0__::func_234(iParam0, 0);
			return Global_1360165[iParam0 /*1157*/].f_70;
	}
	return __LIB_0__::func_749();
}

void func_723()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar2 = iVar0;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			iVar3 = iVar1;
			switch (iVar2)
			{
				case 0:
					switch (iVar3)
					{
						case 0:
							switch (iLocal_17[iVar2])
							{
								case 0:
									switch (iLocal_214)
									{
										case 0:
											bVar4 = ((!func_250(1) && !func_250(2)) && iLocal_564 == 0);
											break;
										case 1:
											bVar4 = (!func_250(1) && !func_250(2));
											break;
										case 4:
											bVar4 = (!func_250(1) && !func_250(2));
											break;
										case 2:
											bVar4 = ((!func_250(1) && !func_250(2)) && iLocal_564 == 0);
											break;
										case 3:
											bVar4 = false;
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 1:
									switch (iLocal_214)
									{
										case 0:
										case 1:
										case 2:
											bVar4 = false;
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 2:
									switch (iLocal_214)
									{
										case 0:
											bVar4 = false;
											break;
										case 4:
											bVar4 = (!func_250(1024) && !__LIB_2__::func_136(uLocal_178[0], 0));
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 3:
									switch (iLocal_214)
									{
										case 0:
											bVar4 = !func_250(4);
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 4:
								case 5:
									switch (iLocal_214)
									{
										case 3:
											bVar4 = (!func_250(256) && !__LIB_2__::func_136(uLocal_178[0], 0));
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								default:
									bVar4 = false;
									break;
							}
							break;
						case 1:
							switch (iLocal_17[iVar2])
							{
								case 0:
									switch (iLocal_214)
									{
										case 0:
											bVar4 = (!func_250(2) && iLocal_564 == 0);
											break;
										case 1:
											bVar4 = !func_250(2);
											break;
										case 4:
											bVar4 = !func_250(2);
											break;
										case 2:
											bVar4 = !func_250(2);
											break;
										case 3:
											bVar4 = false;
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 1:
									switch (iLocal_214)
									{
										case 0:
										case 1:
										case 2:
											bVar4 = false;
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 2:
									switch (iLocal_214)
									{
										case 0:
											bVar4 = (!func_250(32) && !__LIB_2__::func_136(uLocal_178[0], 0));
											break;
										case 4:
											bVar4 = (!func_250(2048) && !__LIB_2__::func_136(uLocal_178[0], 0));
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 3:
									switch (iLocal_214)
									{
										case 0:
											bVar4 = !func_250(4);
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 4:
								case 5:
									switch (iLocal_214)
									{
										case 3:
											bVar4 = (!func_250(512) && !__LIB_2__::func_136(uLocal_178[0], 0));
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								default:
									bVar4 = false;
									break;
							}
							break;
						default:
							bVar4 = false;
							break;
					}
					break;
				case 1:
					switch (iVar3)
					{
						case 0:
							switch (iLocal_17[iVar2])
							{
								case 0:
									switch (iLocal_214)
									{
										case 0:
											bVar4 = ((!func_250(1) && !func_250(2)) && iLocal_564 == 0);
											break;
										case 1:
										case 4:
											bVar4 = (!func_250(1) && !func_250(2));
											break;
										case 2:
											bVar4 = (!func_250(1) && !func_250(2));
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 2:
									switch (iLocal_214)
									{
										case 1:
											bVar4 = false;
											break;
										case 2:
											bVar4 = false;
											break;
										case 4:
											bVar4 = ((!func_250(8) && bLocal_44) && !__LIB_2__::func_136(uLocal_178[1], 0));
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 1:
									bVar4 = false;
									break;
								case 6:
									bVar4 = false;
									break;
								default:
									bVar4 = false;
									break;
							}
							break;
						case 1:
							switch (iLocal_17[iVar2])
							{
								case 0:
									switch (iLocal_214)
									{
										case 0:
											bVar4 = (!func_250(2) && iLocal_564 == 0);
											break;
										case 1:
										case 4:
											bVar4 = !func_250(2);
											break;
										case 2:
											bVar4 = (!func_250(2) && iLocal_564 != 0);
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 2:
									switch (iLocal_214)
									{
										case 1:
											bVar4 = (!func_250(64) && !__LIB_2__::func_136(uLocal_178[1], 0));
											break;
										case 2:
											bVar4 = ((!func_250(64) || !func_250(128)) && !__LIB_2__::func_136(uLocal_178[1], 0));
											break;
										case 4:
											bVar4 = ((!func_250(16) && bLocal_44) && !__LIB_2__::func_136(uLocal_178[1], 0));
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 1:
									bVar4 = false;
									break;
								case 6:
									bVar4 = false;
									break;
								default:
									bVar4 = false;
									break;
							}
							break;
						default:
							bVar4 = false;
							break;
					}
					break;
				default:
					bVar4 = false;
					break;
			}
			func_879(iVar2, iVar3, bVar4);
			iVar1++;
		}
		iVar0++;
	}
}

void func_724()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar2 = iVar0;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			switch (iVar2)
			{
				case 0:
					__LIB_2__::func_411(&(Local_708[iVar1 /*17*/]), 0, 0);
					break;
				case 1:
					if (iLocal_214 == 4)
					{
						__LIB_2__::func_411(&(Local_778[iVar1 /*17*/]), 0, 0);
					}
					else
					{
						__LIB_2__::func_411(&(Local_743[iVar1 /*17*/]), 0, 0);
					}
					break;
				case 2:
					__LIB_2__::func_411(&(Local_813[iVar1 /*17*/]), 0, 0);
					break;
				case 3:
					__LIB_2__::func_411(&(Local_848[iVar1 /*17*/]), 0, 0);
					break;
				default:
					break;
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_725()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar2 = iVar0;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			switch (iVar2)
			{
				case 0:
					if (__LIB_4__::func_388(&(Local_708[iVar1 /*17*/]), 1, 0) != vLocal_27[iVar2 /*3*/][iVar1])
					{
						__LIB_2__::func_411(&(Local_708[iVar1 /*17*/]), vLocal_27[iVar2 /*3*/][iVar1], 0);
					}
					break;
				case 1:
					if (iLocal_214 == 4)
					{
						if (__LIB_4__::func_388(&(Local_778[iVar1 /*17*/]), 1, 0) != vLocal_27[iVar2 /*3*/][iVar1])
						{
							__LIB_2__::func_411(&(Local_778[iVar1 /*17*/]), vLocal_27[iVar2 /*3*/][iVar1], 0);
						}
					}
					else if (__LIB_4__::func_388(&(Local_743[iVar1 /*17*/]), 1, 0) != vLocal_27[iVar2 /*3*/][iVar1])
					{
						__LIB_2__::func_411(&(Local_743[iVar1 /*17*/]), vLocal_27[iVar2 /*3*/][iVar1], 0);
					}
					break;
				case 2:
					if (__LIB_4__::func_388(&(Local_813[iVar1 /*17*/]), 1, 0) != vLocal_27[iVar2 /*3*/][iVar1])
					{
						__LIB_2__::func_411(&(Local_813[iVar1 /*17*/]), vLocal_27[iVar2 /*3*/][iVar1], 0);
					}
					break;
				case 3:
					if (__LIB_4__::func_388(&(Local_848[iVar1 /*17*/]), 1, 0) != vLocal_27[iVar2 /*3*/][iVar1])
					{
						__LIB_2__::func_411(&(Local_848[iVar1 /*17*/]), vLocal_27[iVar2 /*3*/][iVar1], 0);
					}
					break;
				default:
					break;
			}
			iVar1++;
		}
		iVar0++;
	}
}

int func_728(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("EVENT_SHOCKING_BEAT_INTERESTING");
		case 1:
			return joaat("EVENT_SHOCKING_BEAT_INTERESTING");
		case 2:
			return joaat("EVENT_SHOCKING_BEAT_INTERESTING");
		case 3:
			return joaat("EVENT_SHOCKING_BEAT_DISTURBING");
		case 4:
			return joaat("EVENT_SHOCKING_BEAT_INTERESTING");
		default:
			break;
	}
	return joaat("EVENT_SHOCKING_BEAT_INTERESTING");
}

Vector3 func_729(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 9:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 2:
							return -303.4379f, 797.2956f, 117.9503f;
						case 3:
							return -303.4379f, 797.2956f, 117.9503f;
						default:
							break;
					}
					return -307.2557f, 796.936f, 117.9482f;
				case 1:
					switch (iParam0)
					{
						case 3:
							return -246.3026f, 769.0882f, 117.1506f;
						default:
							break;
					}
					return -245.3641f, 764.9188f, 117.1341f;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 3:
					return 2953.516f, 520.4395f, 44.44659f;
				default:
					break;
			}
			return 2953.575f, 523.8731f, 44.47325f;
		case 4:
			return -809.8254f, -1329.847f, 42.65924f;
	}
	return 0f, 0f, 0f;
}

float func_730(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1f;
		case 1:
			return -1f;
		case 2:
			return -1f;
		case 3:
			return -1f;
		case 4:
			return -1f;
		default:
			break;
	}
	return -1f;
}

float func_731(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return 15f;
		case 10:
			return 10f;
		case 4:
			return 10f;
		default:
			break;
	}
	return -1f;
}

void func_734()
{
	if (!func_185(iLocal_50))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_178[0]))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_50, func_143(0), uLocal_178[0]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_178[1]))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_50, func_143(1), uLocal_178[1]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_178[2]))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_50, func_143(2), uLocal_178[2]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_178[3]))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_50, func_143(3), uLocal_178[3]);
	}
}

bool func_743(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 >= fParam1 && fParam0 <= fParam2)
	{
		return true;
	}
	return false;
}

int func_781(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	switch (iParam0)
	{
		case 296923297:
			iVar2 = -268604689;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar0)
			{
				case 0:
					iVar1 = -268604689;
					break;
				case 1:
					iVar1 = -1632589543;
					break;
				case 2:
					iVar1 = -1862464078;
					break;
			}
			break;
		case 1237718549:
			iVar2 = -922193456;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			switch (iVar0)
			{
				case 0:
					iVar1 = -922193456;
					break;
				case 1:
					iVar1 = -2040275819;
					break;
				case 2:
					iVar1 = -1114682645;
					break;
				case 3:
					iVar1 = -1414977761;
					break;
			}
			if (iParam1 != -1)
			{
				if (__LIB_1__::func_201(iParam1, iVar1))
				{
					iVar2 = iVar1;
				}
			}
			return iVar2;
		}
int func_782(int iParam0)
{
	switch (iParam0)
	{
		case -268604689:
			return joaat("META_OUTFIT_COOL_WEATHER");
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case -922193456:
			return joaat("META_OUTFIT_WARM_WEATHER");
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		default:
			break;
	}
	return joaat("META_OUTFIT_DEFAULT");
}

void func_879(int iParam0, int iParam1, bool bParam2)
{
	if (vLocal_27[iParam0 /*3*/][iParam1] == bParam2)
	{
		return;
	}
	vLocal_27[iParam0 /*3*/][iParam1] = bParam2;
}

