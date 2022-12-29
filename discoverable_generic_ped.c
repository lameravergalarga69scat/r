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
	int iLocal_14[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_23 = false;
	bool bLocal_24 = false;
	vector3 vLocal_25[24] = "";
	vector3 vLocal_28[24] = "";
	var uLocal_31[4] = { 0, 0, 0, 0 };
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48[2] = { 0, 0 };
	struct<2> Local_51 = { 0, 0 } ;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	struct<13> Local_63 = { 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	struct<4> Local_87[10];
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = -1;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 1097859072;
	var uLocal_146 = 1000;
	var uLocal_147 = 1067450368;
	var uLocal_148 = 5000;
	var uLocal_149 = 42;
	var uLocal_150 = 1103626240;
	var uLocal_151 = 1077936128;
	var uLocal_152 = 1106247680;
	var uLocal_153 = 1103101952;
	var uLocal_154 = 1097859072;
	var uLocal_155 = 1103626240;
	var uLocal_156 = 0;
	struct<7> Local_157 = { 5, 0, 0, 0, 0, 0, 5 } ;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 5;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 24;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	int iLocal_267 = 0;
	var uLocal_268 = 0;
	struct<5> Local_269 = { 0, 0, 0, 0, -1 } ;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = -1;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 2;
	var uLocal_294 = 1;
	var uLocal_295 = 1;
	var uLocal_296 = 1;
	var uLocal_297 = 0;
	var uLocal_298 = 1;
	var uLocal_299 = 2;
	var uLocal_300 = 2;
	var uLocal_301 = 3;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 3;
	var uLocal_305 = 1;
	var uLocal_306 = 3;
	var uLocal_307 = 3;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	uLocal_268 = ScriptParam_0;
	Local_269.f_1 = ScriptParam_0.f_1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1(&Local_269);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(ScriptParam_0.f_1))
	{
		func_1(&Local_269);
	}
	while (__LIB_7__::func_453())
	{
		switch (iLocal_267)
		{
			case 0:
				if (func_3(&Local_269))
				{
					iLocal_267 = 1;
					if (Local_269.f_4 != -1)
					{
					}
					else
					{
						Local_269.f_4 = func_4(&Local_269);
					}
				}
				break;
			case 1:
				if (func_5(&Local_269))
				{
					func_6(&Local_269);
				}
				func_7(&Local_269);
				func_8(&Local_269);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_269);
}

void func_1(var uParam0)
{
	func_9(uParam0);
	SCRIPTS::_0xE7282390542F570D(uLocal_268);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_3(var uParam0)
{
	int iVar0;
	if (Local_269 == 0)
	{
		iVar0 = TASK::_GET_SCENARIO_POINT_TYPE(uParam0->f_1);
		Local_269 = __LIB_7__::func_454(iVar0);
		return false;
	}
	if (__LIB_7__::func_497(Local_269, 4) || Global_40.f_8863.f_156)
	{
		func_1(uParam0);
		return false;
	}
	__LIB_7__::func_488(uParam0);
	return true;
}

int func_4(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	iVar2 = -1;
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return -1;
	}
	if (*uParam0 == -544327665)
	{
		iVar1 = 3;
	}
	else if (*uParam0 == 1120968795)
	{
		iVar1 = 2;
	}
	else if (*uParam0 == -834293086)
	{
		iVar1 = 10;
	}
	else if (*uParam0 == 1519472817)
	{
		iVar1 = 2;
	}
	else if (*uParam0 == -1859023693)
	{
		iVar1 = 11;
	}
	else if (*uParam0 == 2000209669)
	{
		iVar1 = 12;
	}
	else if (*uParam0 == -1761578407)
	{
		iVar1 = 11;
	}
	else if (*uParam0 == -1243267511)
	{
		iVar1 = 5;
	}
	else if (*uParam0 == -1272862985)
	{
		iVar1 = 4;
	}
	else if (*uParam0 == 1535254161)
	{
		iVar1 = 4;
	}
	else if (*uParam0 == 870958936)
	{
		iVar1 = 5;
	}
	else if (*uParam0 == 513110082)
	{
		iVar1 = 3;
	}
	else if (*uParam0 == -321841939)
	{
		iVar1 = 20;
	}
	else if (*uParam0 == -890175011)
	{
		iVar1 = 5;
	}
	else if (*uParam0 == 677950956)
	{
		iVar1 = 6;
	}
	else if (*uParam0 == 503180747)
	{
		iVar1 = 2;
	}
	else
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (iVar2 == -1)
		{
			iVar2 = iVar0;
			fVar3 = __LIB_0__::func_94(Global_35, func_13(uParam0, iVar0), 1);
		}
		else if (fVar3 > __LIB_0__::func_94(Global_35, func_13(uParam0, iVar0), 1))
		{
			iVar2 = iVar0;
			fVar3 = __LIB_0__::func_94(Global_35, func_13(uParam0, iVar0), 1);
		}
		iVar0++;
	}
	return iVar2;
}

bool func_5(var uParam0)
{
	switch (*uParam0)
	{
		case -2009137002:
		case -1960242214:
		case -1958832660:
		case -1891628345:
		case -1887999095:
		case -1787770845:
		case -1761578407:
		case -1761189332:
		case -1646022773:
		case -1636964661:
		case -1614148516:
		case -1609238411:
		case -1505275983:
		case -1300082860:
		case -1287911066:
		case -1272862985:
		case -1243267511:
		case -1109016944:
		case -1053108445:
		case -986176781:
		case -979575591:
		case -890175011:
		case -849582265:
		case -780455182:
		case -739986731:
		case -709811179:
		case -607940493:
		case -415839138:
		case -321841939:
		case -232974724:
		case -161804536:
		case -148407339:
		case 58958195:
		case 247563739:
		case 308500632:
		case 373034311:
		case 404434344:
		case 429544447:
		case 657666087:
		case 921081956:
		case 1034793488:
		case 1284679164:
		case 1519228573:
		case 1535254161:
		case 1673499939:
		case 1734766691:
		case 1982045664:
		case 1986618633:
		case 2000209669:
		case 2134589549:
			return true;
		case 677950956:
			if (func_15())
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 1861313914:
			if (__LIB_1__::func_185(59))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
	}
	return false;
}

void func_6(var uParam0)
{
	if (uParam0->f_5 > 0 && uParam0->f_5 < 7)
	{
		if (!__LIB_7__::func_473(uParam0))
		{
			__LIB_7__::func_485(uParam0);
			__LIB_0__::func_615(uParam0, 0);
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			if (!__LIB_7__::func_473(uParam0))
			{
				return;
			}
			if ((*uParam0 == -890175011 || *uParam0 == 677950956) || *uParam0 == -321841939)
			{
				if (__LIB_7__::func_474(uParam0))
				{
					__LIB_0__::func_615(uParam0, 7);
				}
			}
			func_21(uParam0);
			if (__LIB_0__::func_86(uParam0->f_6.f_2))
			{
				__LIB_0__::func_615(uParam0, 7);
				return;
			}
			__LIB_0__::func_615(uParam0, 1);
			break;
		case 1:
			if (__LIB_0__::func_94(Global_35, uParam0->f_6.f_2, 1) <= uParam0->f_6)
			{
				__LIB_0__::func_37(&(uParam0->f_6.f_5));
				if ((((__LIB_7__::func_497(*uParam0, 2) || __LIB_7__::func_497(*uParam0, 16)) || *uParam0 == -890175011) || *uParam0 == 677950956) || (*uParam0 == -1761578407 && __LIB_7__::func_474(uParam0)))
				{
					__LIB_0__::func_615(uParam0, 3);
				}
				else
				{
					__LIB_0__::func_615(uParam0, 2);
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_75(&(uParam0->f_6.f_5)))
			{
				PAD::SET_PAD_SHAKE(0, 150, 100);
				__LIB_1__::func_148(&(uParam0->f_6.f_5));
			}
			else if (__LIB_1__::func_871(&(uParam0->f_6.f_5)) > 300)
			{
				PAD::SET_PAD_SHAKE(0, 150, 100);
				__LIB_0__::func_615(uParam0, 3);
			}
			break;
		case 3:
			if (__LIB_0__::func_94(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6 + 5f))
			{
				__LIB_7__::func_485(uParam0);
				__LIB_0__::func_615(uParam0, 1);
			}
			else if (__LIB_7__::func_559(uParam0, 0))
			{
				__LIB_7__::func_572(uParam0);
				if ((__LIB_7__::func_497(*uParam0, 2) || __LIB_7__::func_497(*uParam0, 16)) || (*uParam0 == -1761578407 && __LIB_7__::func_474(uParam0)))
				{
					__LIB_0__::func_615(uParam0, 6);
				}
				else
				{
					__LIB_0__::func_615(uParam0, 4);
				}
			}
			break;
		case 4:
			__LIB_7__::func_571(uParam0, uParam0->f_6.f_8, __LIB_7__::func_573(uParam0), 0);
			if (__LIB_0__::func_94(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6 + 5f))
			{
				__LIB_7__::func_485(uParam0);
				__LIB_0__::func_615(uParam0, 1);
			}
			else if (__LIB_7__::func_559(uParam0, 1))
			{
				__LIB_7__::func_485(uParam0);
				__LIB_0__::func_615(uParam0, 3);
			}
			else if (__LIB_7__::func_475(uParam0))
			{
				if (!__LIB_7__::func_497(*uParam0, 16))
				{
					__LIB_7__::func_498(*uParam0, 16);
					if (__LIB_0__::func_139(uParam0->f_6.f_8))
					{
						__LIB_1__::func_382(uParam0->f_6.f_8, 0, 1);
					}
					func_35(uParam0);
					func_36(uParam0, 1);
					if (!*uParam0 == -321841939)
					{
						func_37(1, -1);
					}
				}
				else if (__LIB_0__::func_139(uParam0->f_6.f_8))
				{
					__LIB_1__::func_382(uParam0->f_6.f_8, 0, 1);
				}
				__LIB_1__::func_148(&(uParam0->f_6.f_5));
				__LIB_0__::func_615(uParam0, 5);
			}
			else if (__LIB_0__::func_486(uParam0->f_6.f_8, 1) > 0f)
			{
				if (!__LIB_7__::func_497(*uParam0, 16))
				{
					if (!__LIB_0__::func_1(uParam0->f_3, 2))
					{
						__LIB_1__::func_581(&(uParam0->f_3), 2);
						if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
						{
							func_41(uParam0);
						}
					}
					if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
					{
						CAM::SET_GAMEPLAY_COORD_HINT(uParam0->f_6.f_2, -1, 2000, 2000, 0);
						__LIB_7__::func_455(uParam0);
					}
				}
			}
			else if (__LIB_0__::func_1(uParam0->f_3, 2))
			{
				__LIB_1__::func_993(&(uParam0->f_3), 2);
				if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
				{
					if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						CAM::STOP_GAMEPLAY_HINT(false);
					}
				}
			}
			break;
		case 5:
			if (*uParam0 == -890175011 || *uParam0 == 677950956)
			{
				CAM::SET_GAMEPLAY_COORD_HINT(uParam0->f_6.f_2, -1, 2000, 2000, 0);
			}
			__LIB_7__::func_571(uParam0, uParam0->f_6.f_8, __LIB_7__::func_573(uParam0), 0);
			if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
			{
				__LIB_7__::func_455(uParam0);
			}
			if (__LIB_0__::func_94(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6 + 5f))
			{
				__LIB_7__::func_485(uParam0);
				__LIB_0__::func_615(uParam0, 1);
			}
			else if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_CONTEXT_Y")))
			{
			}
			else if (__LIB_1__::func_871(&(uParam0->f_6.f_5)) >= 2000)
			{
				if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
				{
					if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						CAM::STOP_GAMEPLAY_HINT(false);
					}
				}
				if (__LIB_0__::func_1(uParam0->f_3, 2))
				{
					__LIB_1__::func_993(&(uParam0->f_3), 2);
				}
				if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
				{
					__LIB_7__::func_456(uParam0);
				}
				if ((*uParam0 == -890175011 || *uParam0 == 677950956) || *uParam0 == -321841939)
				{
					__LIB_7__::func_485(uParam0);
					__LIB_0__::func_615(uParam0, 7);
				}
				else
				{
					__LIB_0__::func_615(uParam0, 6);
				}
			}
			break;
		case 6:
			__LIB_7__::func_571(uParam0, uParam0->f_6.f_8, __LIB_7__::func_573(uParam0), 0);
			if (__LIB_0__::func_94(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6 + 5f))
			{
				__LIB_7__::func_485(uParam0);
				__LIB_0__::func_615(uParam0, 1);
			}
			else if (__LIB_7__::func_559(uParam0, 1))
			{
				__LIB_7__::func_485(uParam0);
				__LIB_0__::func_615(uParam0, 3);
			}
			break;
		case 7:
			break;
	}
}

void func_7(var uParam0)
{
	int iVar0;
	if (!__LIB_0__::func_1(uParam0->f_3, 8))
	{
		if (__LIB_7__::func_457(*uParam0) && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_2))
		{
			if (__LIB_7__::func_489(&(uParam0->f_2)))
			{
				iVar0 = 3;
				if (*uParam0 == -849582265 && Global_40.f_11953)
				{
					iVar0 = 4;
				}
				func_47(iVar0, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				__LIB_1__::func_581(&(uParam0->f_3), 8);
				if (*uParam0 == -849582265)
				{
					Global_40.f_11953 = 1;
				}
			}
		}
	}
}

void func_8(var uParam0)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (Local_51 > 0 && Local_51 < 13)
	{
		if (*uParam0 == 1861313914)
		{
			if (__LIB_1__::func_185(59))
			{
				iVar0 = 0;
				while (iVar0 <= (10 - 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_63.f_1[iVar0]))
					{
						if (ENTITY::IS_ENTITY_DEAD(Local_63.f_1[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
		}
	}
	switch (Local_51)
	{
		case 0:
			if (__LIB_0__::func_1(uParam0->f_3, 1))
			{
				__LIB_1__::func_993(&(uParam0->f_3), 1);
			}
			if (*uParam0 == -415839138)
			{
				if (!__LIB_7__::func_569(uParam0))
				{
					return;
				}
				if (!__LIB_7__::func_575(uParam0))
				{
					return;
				}
				if (__LIB_2__::func_774(48))
				{
					return;
				}
				if (func_51(uParam0))
				{
					return;
				}
			}
			else if (*uParam0 == -2008558277)
			{
				if (!func_52(uParam0))
				{
					return;
				}
			}
			else if (*uParam0 == 1861313914)
			{
				if (!func_52(uParam0))
				{
					return;
				}
			}
			else if ((!*uParam0 == -654238687 && !*uParam0 == -2008558277) && !*uParam0 == 1861313914)
			{
				if (__LIB_7__::func_530(*uParam0))
				{
					__LIB_7__::func_531(&Local_51, 13, 1);
					return;
				}
			}
			func_55(uParam0);
			func_56(uParam0);
			__LIB_7__::func_531(&Local_51, 2, 1);
			break;
		case 2:
			if (!func_57(uParam0) || __LIB_1__::func_927())
			{
				return;
			}
			if (*uParam0 == -654238687)
			{
				if (!PED::_0x5C16855277819BBF() == 10)
				{
					return;
				}
			}
			else if (*uParam0 == -2008558277)
			{
				if (!PED::_0x5C16855277819BBF() == 7)
				{
					return;
				}
			}
			else if (!PED::_0x5C16855277819BBF() == 1)
			{
				return;
			}
			__LIB_7__::func_531(&Local_51, 3, 1);
			break;
		case 3:
			if (func_59(uParam0))
			{
				func_60(uParam0, &uLocal_31);
				__LIB_7__::func_531(&Local_51, 10, 1);
			}
			break;
		case 10:
			if (!*uParam0 == 1861313914 && !*uParam0 == -415839138)
			{
				if (!__LIB_0__::func_1(uParam0->f_3, 1))
				{
					__LIB_1__::func_581(&(uParam0->f_3), 1);
				}
			}
			func_61(uParam0);
			if (*uParam0 == 1861313914)
			{
				func_62(uParam0);
			}
			else if (*uParam0 == -415839138)
			{
				func_63(uParam0);
			}
			else
			{
				func_64(uParam0);
			}
			func_65(uParam0);
			if (*uParam0 == -2008558277)
			{
				if (func_52(uParam0))
				{
					if (VOLUME::_DOES_VOLUME_EXIST(iLocal_41) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_41, true, 0))
					{
						if (!__LIB_7__::func_497(*uParam0, 32))
						{
							__LIB_7__::func_532(*uParam0);
						}
					}
					if (!__LIB_7__::func_530(*uParam0))
					{
						if (((((((Local_87[0 /*4*/] == 23 || ENTITY::IS_ENTITY_DEAD(Local_63.f_1[0])) && (Local_87[1 /*4*/] == 23 || ENTITY::IS_ENTITY_DEAD(Local_63.f_1[1]))) && (Local_87[2 /*4*/] == 23 || ENTITY::IS_ENTITY_DEAD(Local_63.f_1[2]))) && (Local_87[3 /*4*/] == 23 || ENTITY::IS_ENTITY_DEAD(Local_63.f_1[3]))) && (Local_87[4 /*4*/] == 23 || ENTITY::IS_ENTITY_DEAD(Local_63.f_1[4]))) && (Local_87[5 /*4*/] == 23 || ENTITY::IS_ENTITY_DEAD(Local_63.f_1[5]))) && (Local_87[6 /*4*/] == 23 || ENTITY::IS_ENTITY_DEAD(Local_63.f_1[6])))
						{
							func_67(uParam0);
							func_68(uParam0);
							__LIB_7__::func_531(&Local_51, 13, 1);
						}
					}
				}
				else
				{
					__LIB_7__::func_570(&Local_63, 1);
					func_68(uParam0);
					__LIB_7__::func_531(&Local_51, 13, 1);
				}
			}
			else if (*uParam0 == -654238687)
			{
				if ((!__LIB_7__::func_497(*uParam0, 8) && VOLUME::_DOES_VOLUME_EXIST(iLocal_41)) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_41, true, 0))
				{
					func_70(uParam0);
				}
				if (!__LIB_7__::func_530(*uParam0))
				{
					if (__LIB_0__::func_266(Global_35, __LIB_7__::func_467(uParam0, 0), 5f, 1, 1))
					{
						if (__LIB_3__::func_982())
						{
							if (__LIB_7__::func_495(__LIB_7__::func_544(uParam0, 0)))
							{
								func_67(uParam0);
							}
						}
					}
				}
			}
			else if (*uParam0 == 1861313914)
			{
				if (!func_52(uParam0))
				{
					func_68(uParam0);
					__LIB_7__::func_531(&Local_51, 13, 1);
				}
				if (VOLUME::_DOES_VOLUME_EXIST(iLocal_41) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_41, true, 0))
				{
					if (!iLocal_14[2])
					{
						if (__LIB_0__::func_139(iLocal_48[0]))
						{
							if (__LIB_0__::func_71(Global_35))
							{
								__LIB_5__::func_793(iLocal_48[0], 1);
							}
							else
							{
								__LIB_5__::func_793(iLocal_48[0], 0);
							}
							if (__LIB_0__::func_567(iLocal_48[0], 1))
							{
								__LIB_1__::func_382(iLocal_48[0], 0, 1);
								if (__LIB_1__::func_185(59))
								{
									if (!__LIB_0__::func_1(Global_40.f_8863.f_152, 65536))
									{
										__LIB_1__::func_581(&(Global_40.f_8863.f_152), 65536);
									}
									if (!CAM::DOES_CAM_EXIST(iLocal_47))
									{
										iLocal_47 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 895.2926f, -1968.114f, 45.0332f, 0f, 0f, 0f, 65f, false, 2);
										CAM::SET_CAM_FOV(iLocal_47, 30f);
										CAM::POINT_CAM_AT_COORD(iLocal_47, 894.5633f, -1969.691f, 44.2007f);
									}
									bLocal_23 = true;
									if (CAM::DOES_CAM_EXIST(iLocal_47))
									{
										CAM::SET_CAM_ACTIVE(iLocal_47, true);
									}
									CAM::RENDER_SCRIPT_CAMS(true, true, 2000, true, false, 0);
									if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
									{
										PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
									}
								}
								else
								{
									if (!__LIB_0__::func_1(Global_40.f_8863.f_152, 32768))
									{
										__LIB_1__::func_581(&(Global_40.f_8863.f_152), 32768);
									}
									if (VOLUME::_DOES_VOLUME_EXIST(iLocal_43))
									{
										PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_43);
										POPULATION::_0x74C2B3DC0B294102(iLocal_43);
										PED::_0x0CAB404CD2DB41F5(Global_1935630.f_40, iLocal_43);
										POPULATION::_0xF74E134F40192884(Global_1935630.f_40, 0);
										VOLUME::_DELETE_VOLUME(iLocal_43);
									}
									__LIB_1__::func_748(&(iLocal_48[0]), 1, 1);
									iLocal_14[1] = 1;
								}
								__LIB_7__::func_531(&Local_51, 11, 1);
							}
						}
					}
				}
				if (!__LIB_7__::func_530(*uParam0))
				{
					if (__LIB_1__::func_185(59))
					{
						if (__LIB_0__::func_1(Global_40.f_8863.f_152, 65536))
						{
							func_67(uParam0);
						}
					}
					else if (__LIB_7__::func_497(*uParam0, 16))
					{
						func_67(uParam0);
					}
				}
			}
			else if (*uParam0 == -35775921)
			{
				if (!bLocal_23)
				{
					if (ENTITY::IS_ENTITY_DEAD(Local_63.f_1[0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_157[0]))
						{
							bLocal_23 = true;
							TASK::_0x78B4567E18B54480(Local_157[0]);
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(Local_157[0]) && PED::_GET_CARRIER_AS_PED(Local_157[0]) == Global_35)
				{
					func_67(uParam0);
					func_68(uParam0);
					__LIB_7__::func_531(&Local_51, 13, 1);
				}
				else if (__LIB_3__::func_649(Global_35, Local_63.f_1[0]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_157[0]))
					{
						ENTITY::DETACH_ENTITY(Local_157[0], true, true);
						__LIB_7__::func_520(&Local_157, 0, 0);
					}
					func_83(__LIB_7__::func_508(uParam0, 0), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					func_67(uParam0);
					func_68(uParam0);
					__LIB_7__::func_531(&Local_51, 13, 1);
				}
				else if (ENTITY::_0x8DE41E9902E85756(Local_63.f_1[0]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_157[0]))
					{
						ENTITY::DETACH_ENTITY(Local_157[0], true, true);
						__LIB_7__::func_520(&Local_157, 0, 0);
					}
					func_83(__LIB_7__::func_508(uParam0, 0), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					func_67(uParam0);
					func_68(uParam0);
					__LIB_7__::func_531(&Local_51, 13, 1);
				}
				else if (__LIB_3__::func_982())
				{
					if (__LIB_7__::func_495(__LIB_7__::func_508(uParam0, 0)))
					{
						func_67(uParam0);
						func_68(uParam0);
						__LIB_7__::func_531(&Local_51, 13, 1);
					}
				}
			}
			else if (*uParam0 == -415839138)
			{
				if (!__LIB_7__::func_530(*uParam0))
				{
					if (__LIB_7__::func_497(*uParam0, 16))
					{
						func_67(uParam0);
					}
				}
			}
			else if (!__LIB_7__::func_530(*uParam0))
			{
				if (VOLUME::_DOES_VOLUME_EXIST(iLocal_41) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_41, true, 0))
				{
					func_67(uParam0);
					func_68(uParam0);
					__LIB_7__::func_531(&Local_51, 13, 1);
				}
			}
			break;
		case 11:
			if (*uParam0 == 1861313914)
			{
				if (!func_52(uParam0))
				{
					func_68(uParam0);
					__LIB_7__::func_531(&Local_51, 13, 1);
				}
				if (__LIB_1__::func_185(59))
				{
					if (bLocal_23)
					{
						if (__LIB_1__::func_871(&(Local_51.f_1)) >= 4000)
						{
							if (__LIB_0__::func_139(iLocal_48[0]))
							{
								if (!__LIB_1__::func_530(iLocal_48[0], 1))
								{
									__LIB_7__::func_531(&Local_51, 12, 1);
								}
							}
						}
					}
					else if (__LIB_1__::func_871(&(Local_51.f_1)) >= 2000)
					{
						if (__LIB_0__::func_139(iLocal_48[0]))
						{
							__LIB_1__::func_382(iLocal_48[0], 1, 1);
						}
						if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						}
						if (CAM::DOES_CAM_EXIST(iLocal_47))
						{
							CAM::DESTROY_CAM(iLocal_47, false);
						}
						__LIB_7__::func_531(&Local_51, 10, 1);
					}
				}
				else
				{
					__LIB_7__::func_531(&Local_51, 10, 1);
				}
			}
			break;
		case 12:
			if (*uParam0 == 1861313914)
			{
				if (!__LIB_1__::func_530(iLocal_48[0], 1))
				{
					bLocal_23 = false;
					if (__LIB_1__::func_185(59))
					{
						CAM::RENDER_SCRIPT_CAMS(false, true, 2000, true, false, 0);
						if (CAM::DOES_CAM_EXIST(iLocal_47))
						{
							CAM::SET_CAM_ACTIVE(iLocal_47, false);
						}
					}
					if (!__LIB_0__::func_1(uParam0->f_3, 1))
					{
						__LIB_1__::func_581(&(uParam0->f_3), 1);
					}
					__LIB_7__::func_531(&Local_51, 11, 1);
				}
			}
			break;
		case 13:
			break;
		default:
			break;
	}
}

void func_9(var uParam0)
{
	func_68(uParam0);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_41))
	{
		VOLUME::_DELETE_VOLUME(iLocal_41);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_42))
	{
		VOLUME::_DELETE_VOLUME(iLocal_42);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_43))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_43);
		POPULATION::_0x74C2B3DC0B294102(iLocal_43);
		PED::_0x0CAB404CD2DB41F5(Global_1935630.f_40, iLocal_43);
		POPULATION::_0xF74E134F40192884(Global_1935630.f_40, 0);
		VOLUME::_DELETE_VOLUME(iLocal_43);
	}
	if (*uParam0 == 1861313914 || *uParam0 == -2008558277)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_36);
	}
	__LIB_7__::func_570(&Local_63, 1);
	__LIB_18__::func_43(uParam0, &uLocal_31);
	func_86(uParam0);
}

Vector3 func_13(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -544327665:
			if (iParam1 == 0)
			{
				return 500.882f, 80.003f, 139.28f;
			}
			else if (iParam1 == 1)
			{
				return 759.079f, -1133.282f, 55.059f;
			}
			else if (iParam1 == 2)
			{
				return -3667.897f, -2805.515f, -7.129f;
			}
			break;
		case 1120968795:
			if (iParam1 == 0)
			{
				return -1521.811f, 519.1222f, 101.6756f;
			}
			else if (iParam1 == 1)
			{
				return 2417.936f, 853.4788f, 72.5143f;
			}
			break;
		case -834293086:
			if (iParam1 == 0)
			{
				return 1747.022f, -267.8047f, 73.0826f;
			}
			else if (iParam1 == 1)
			{
				return 1978.289f, -60.4567f, 59.4946f;
			}
			else if (iParam1 == 2)
			{
				return 640.8188f, -1062.613f, 48.0237f;
			}
			else if (iParam1 == 3)
			{
				return 839.6257f, -1174.002f, 54.9616f;
			}
			else if (iParam1 == 4)
			{
				return 1917.611f, 10.6206f, 77.6881f;
			}
			else if (iParam1 == 5)
			{
				return -85.5144f, 76.4358f, 93.2066f;
			}
			else if (iParam1 == 6)
			{
				return 76.4646f, 854.9302f, 207.8816f;
			}
			else if (iParam1 == 7)
			{
				return 1871.215f, 643.5952f, 119.9651f;
			}
			else if (iParam1 == 8)
			{
				return 2572.759f, 690.9401f, 83.9642f;
			}
			else if (iParam1 == 9)
			{
				return 2264.918f, 934.7651f, 81.1843f;
			}
			break;
		case -1859023693:
			if (iParam1 == 0)
			{
				return 525.7659f, 373.9645f, 107.9581f;
			}
			else if (iParam1 == 1)
			{
				return 610.1569f, -142.2089f, 146.4651f;
			}
			else if (iParam1 == 2)
			{
				return 1253.233f, 40.0713f, 94.2498f;
			}
			else if (iParam1 == 3)
			{
				return 886.287f, 470.977f, 103.937f;
			}
			else if (iParam1 == 4)
			{
				return 370.7786f, 1072.15f, 190.1675f;
			}
			else if (iParam1 == 5)
			{
				return -3575.866f, -2199.067f, -13.415f;
			}
			else if (iParam1 == 6)
			{
				return -5159.03f, -3162.67f, -18.5954f;
			}
			else if (iParam1 == 7)
			{
				return -3970.804f, -3027.692f, -12.9605f;
			}
			else if (iParam1 == 8)
			{
				return -3242.678f, -3077.875f, -0.5597f;
			}
			else if (iParam1 == 9)
			{
				return -3686.284f, -3258.813f, -4.4117f;
			}
			else if (iParam1 == 10)
			{
				return 795.2883f, 1013.304f, 118.3968f;
			}
			break;
		case 1519472817:
			if (iParam1 == 0)
			{
				return -2519.475f, 820.6946f, 146.4494f;
			}
			else if (iParam1 == 1)
			{
				return -1349.727f, -923.9958f, 69.342f;
			}
			break;
		case 2000209669:
			return __LIB_7__::func_460(uParam0, iParam1);
		case -1761578407:
		case 404434344:
			if (iParam1 == 9)
			{
				return -762.4968f, -1910.661f, 50.4933f;
			}
			else if (iParam1 == 10)
			{
				return -1738.282f, -995.4295f, 113.6716f;
			}
			else
			{
				return func_90(uParam0, iParam1);
			}
			break;
		case 870958936:
			return func_91(uParam0, iParam1);
		case 513110082:
			if (iParam1 == 0)
			{
				return -2531.5f, 1174.4f, 225.9f;
			}
			else if (iParam1 == 1)
			{
				return 3026.4f, 1778f, 84.2f;
			}
			else if (iParam1 == 2)
			{
				return -4389.58f, -2166.55f, 50.81f;
			}
			break;
		case 503180747:
			if (iParam1 == 0)
			{
				return 2325.978f, 1070.32f, 44.9401f;
			}
			else if (iParam1 == 1)
			{
				return -2698.656f, 697.2829f, 162.889f;
			}
			break;
		case 1535254161:
			return func_90(uParam0, iParam1);
		case -1272862985:
			return func_90(uParam0, iParam1);
		case -1243267511:
			return func_90(uParam0, iParam1);
		case -321841939:
			return func_90(uParam0, iParam1);
		case -890175011:
			return func_90(uParam0, iParam1);
		case 677950956:
			return func_90(uParam0, iParam1);
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_15()
{
	if (func_92() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

void func_21(var uParam0)
{
	uParam0->f_6.f_2 = { func_90(uParam0, uParam0->f_4) };
	uParam0->f_6.f_1 = 5f;
	uParam0->f_6 = 10f;
	switch (*uParam0)
	{
		case 1535254161:
			uParam0->f_6 = 20f;
			uParam0->f_6.f_1 = 10f;
			__LIB_7__::func_491(uParam0);
			break;
		case -1958832660:
		case -1109016944:
			uParam0->f_6 = 48f;
			uParam0->f_6.f_1 = 24f;
			break;
		case -1960242214:
		case -1300082860:
		case -161804536:
		case 657666087:
		case 1673499939:
		case 1734766691:
			uParam0->f_6 = 30f;
			uParam0->f_6.f_1 = 15f;
			break;
		case -1891628345:
		case -986176781:
		case -849582265:
		case 247563739:
		case 1982045664:
		case 1986618633:
			uParam0->f_6 = 20f;
			uParam0->f_6.f_1 = 10f;
			break;
		case -1646022773:
		case 1284679164:
		case 2000209669:
			uParam0->f_6 = 6f;
			uParam0->f_6.f_1 = 3f;
			break;
		case -1614148516:
			uParam0->f_6 = 3f;
			uParam0->f_6.f_1 = 1.5f;
			break;
		case -1243267511:
			uParam0->f_6 = 10f;
			__LIB_7__::func_491(uParam0);
			break;
		case -607940493:
			uParam0->f_6 = 30f;
			__LIB_7__::func_491(uParam0);
			break;
		case -321841939:
			uParam0->f_6 = 10f;
			break;
		case -1761578407:
		case 404434344:
			uParam0->f_6 = 10f;
			__LIB_7__::func_491(uParam0);
			break;
		case -890175011:
			uParam0->f_6 = 3f;
			uParam0->f_6.f_1 = 1.5f;
			if (((uParam0->f_4 == 0 || uParam0->f_4 == 1) || uParam0->f_4 == 3) || uParam0->f_4 == 4)
			{
				__LIB_7__::func_491(uParam0);
			}
			break;
		case 677950956:
			uParam0->f_6 = 6f;
			uParam0->f_6.f_1 = 3f;
			if (uParam0->f_4 == 1 || uParam0->f_4 == 5)
			{
				__LIB_7__::func_491(uParam0);
			}
			break;
		default:
			uParam0->f_6 = 10f;
			uParam0->f_6.f_1 = 5f;
			break;
	}
}

void func_35(var uParam0)
{
	if (func_92() != -1)
	{
		return;
	}
	if (*uParam0 == -321841939)
	{
		if (__LIB_7__::func_461(uParam0->f_4) != 0)
		{
			if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(uParam0->f_4))
			{
				MAP::_0xD8C7162AB2E2AF45(__LIB_7__::func_461(uParam0->f_4));
			}
			__LIB_7__::func_498(*uParam0, 8);
		}
	}
	else
	{
		if (__LIB_7__::func_462(*uParam0, uParam0->f_4) != 0)
		{
			if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(__LIB_7__::func_462(*uParam0, uParam0->f_4)))
			{
				MAP::_0xD8C7162AB2E2AF45(__LIB_7__::func_462(*uParam0, uParam0->f_4));
			}
			__LIB_7__::func_498(*uParam0, 8);
		}
		func_70(uParam0);
	}
}

void func_36(var uParam0, bool bParam1)
{
	int iVar0;
	if (*uParam0 == -321841939)
	{
		if (bParam1)
		{
			if (__LIB_7__::func_477() < (20 - 1))
			{
				return;
			}
		}
		else if (!__LIB_7__::func_478())
		{
			return;
		}
	}
	if (bParam1)
	{
		iVar0 = __LIB_7__::func_537(*uParam0, func_111(), uParam0->f_4);
	}
	else
	{
		iVar0 = __LIB_7__::func_561(*uParam0, uParam0->f_4);
	}
	if (iVar0 != 0)
	{
		if (bParam1)
		{
			__LIB_1__::func_33(iVar0, 0);
			if (*uParam0 == -890175011)
			{
				if (__LIB_7__::func_464() == (5 - 1))
				{
					if (func_111())
					{
						__LIB_1__::func_33(joaat("JOURNAL_TOWN_SECRET_VAMPMAP_AR"), 0);
						iVar0 = joaat("JOURNAL_TOWN_SECRET_VAMPMAP_AR");
					}
					else
					{
						__LIB_1__::func_33(joaat("JOURNAL_TOWN_SECRET_VAMPMAP_JN"), 0);
						iVar0 = joaat("JOURNAL_TOWN_SECRET_VAMPMAP_JN");
					}
				}
			}
		}
		if (func_116())
		{
			Global_1357518 = iVar0;
			if (bParam1 == 1)
			{
				Global_1357519 = { uParam0->f_6.f_2 };
			}
		}
	}
}

void func_37(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		__LIB_0__::func_47(&Global_0, 8);
	}
	if (!__LIB_0__::func_28() || func_92() != -1)
	{
		return;
	}
	__LIB_0__::func_47(&Global_0, 1);
}

void func_41(var uParam0)
{
	uParam0->f_6.f_10.f_21 = 4;
	uParam0->f_6.f_10.f_17 = 4;
	uParam0->f_6.f_10.f_18 = 1;
	uParam0->f_6.f_10.f_23 = 2;
	uParam0->f_6.f_10.f_24 = 2;
	uParam0->f_6.f_10 = { func_90(uParam0, uParam0->f_4) };
}

void func_47(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (func_92() != -1)
	{
		return;
	}
	if ((Global_36616 && __LIB_0__::func_347(iParam1)) != 0)
	{
		return;
	}
	iVar0 = __LIB_0__::func_348(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != joaat("HONOR_EVENT_AMBIENT_KILL") && iParam1 != joaat("HONOR_EVENT_AMBIENT_KO")) && iParam1 != joaat("HONOR_EVENT_KILL_VERMIN")) && iParam1 != joaat("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != joaat("HONOR_EVENT_KILL_HORSE")) && iParam1 != joaat("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != joaat("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_125(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (Global_1347477.f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			__LIB_0__::func_349(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_125(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

bool func_51(var uParam0)
{
	if (__LIB_0__::func_266(Global_35, __LIB_7__::func_494(uParam0, 0), 110f, 1, 1))
	{
		if (!__LIB_0__::func_266(Global_35, __LIB_7__::func_494(uParam0, 0), 45f, 1, 1))
		{
			if (!bLocal_24)
			{
				if (iLocal_40 >= 10)
				{
					bLocal_24 = true;
					iLocal_39 = GRAPHICS::CREATE_TRACKED_POINT();
					GRAPHICS::SET_TRACKED_POINT_INFO(iLocal_39, __LIB_7__::func_494(uParam0, 0), 2f);
					iLocal_40 = 0;
					return true;
				}
				else
				{
					iLocal_40++;
					return true;
				}
			}
			else if (iLocal_40 >= 10)
			{
				if (GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_39))
				{
					return true;
				}
			}
			else
			{
				iLocal_40++;
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_52(var uParam0)
{
	switch (*uParam0)
	{
		case 404434344:
			if (!__LIB_7__::func_483() && !__LIB_7__::func_484())
			{
				if (!__LIB_7__::func_483())
				{
				}
				if (!__LIB_7__::func_484())
				{
				}
				return false;
			}
			else if (__LIB_2__::func_774(77))
			{
				return false;
			}
			else if (__LIB_7__::func_511() != 0)
			{
				return false;
			}
			break;
		case -1761578407:
			if (uParam0->f_4 == 0)
			{
				if (!__LIB_7__::func_483() && !__LIB_7__::func_484())
				{
					if (!__LIB_7__::func_483())
					{
					}
					if (!__LIB_7__::func_484())
					{
					}
					return false;
				}
			}
			else if (uParam0->f_4 == 2 || uParam0->f_4 == 3)
			{
				if (!__LIB_0__::func_898(8924991) && !__LIB_0__::func_898(665676602))
				{
					if (!__LIB_0__::func_898(8924991))
					{
					}
					if (!__LIB_0__::func_898(665676602))
					{
					}
					return false;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (!__LIB_0__::func_898(1488286867))
				{
					return false;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (!__LIB_0__::func_898(651395116))
				{
					return false;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (!__LIB_0__::func_898(-1241340344))
				{
					return false;
				}
			}
			else if (uParam0->f_4 == 8)
			{
				if (!__LIB_0__::func_898(409602249))
				{
					return false;
				}
			}
			else if (uParam0->f_4 == 5)
			{
			}
			else if (uParam0->f_4 == 1)
			{
			}
			break;
		case -2108030724:
			if (!__LIB_1__::func_185(26))
			{
				return false;
			}
			break;
		case -1887999095:
			if (!__LIB_1__::func_185(21))
			{
				return false;
			}
			break;
		case -1240932004:
			if (!__LIB_1__::func_185(77))
			{
				return false;
			}
			break;
		case 118535038:
			if (!__LIB_1__::func_185(12))
			{
				return false;
			}
			break;
		case -2008558277:
			if (func_136(19))
			{
				return false;
			}
			break;
		case 221420861:
			if (func_136(29))
			{
				return false;
			}
			break;
		case -1308658310:
			if (func_136(11))
			{
				return false;
			}
			break;
		case 308500632:
			if (!Global_40.f_11623[20 /*8*/] > 0)
			{
				return false;
			}
			break;
		case 1861313914:
			if (__LIB_2__::func_774(19) || func_136(4))
			{
				return false;
			}
			break;
		case 1982045664:
			if (__LIB_2__::func_774(66))
			{
				return false;
			}
			break;
		case 677950956:
			if (!func_15())
			{
				return false;
			}
			break;
	}
	return true;
}

void func_55(var uParam0)
{
	func_137(uParam0);
	func_138(uParam0);
	func_139(uParam0);
}

void func_56(var uParam0)
{
	if (*uParam0 == -654238687)
	{
		PED::_0xF008E0BA1FE1D644(10);
	}
	else if (*uParam0 == -2008558277)
	{
		PED::_0xF008E0BA1FE1D644(7);
	}
	else
	{
		PED::_0xF008E0BA1FE1D644(1);
	}
	__LIB_7__::func_540(&Local_63);
	__LIB_7__::func_512(&Local_157);
	if (*uParam0 == -415839138)
	{
		__LIB_19__::func_133(uParam0, &uLocal_31, 64);
	}
	else
	{
		__LIB_19__::func_133(uParam0, &uLocal_31, 0);
	}
	if (*uParam0 == -415839138)
	{
		TASK::REQUEST_WAYPOINT_RECORDING("discoverable_monk_flee");
		__LIB_18__::func_44(uParam0);
	}
}

bool func_57(var uParam0)
{
	if ((!__LIB_7__::func_541(&Local_63) || !__LIB_7__::func_514(&Local_157)) || !__LIB_18__::func_45(uParam0, &uLocal_31))
	{
		return false;
	}
	if (*uParam0 == -415839138)
	{
		if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("discoverable_monk_flee"))
		{
			return false;
		}
		if (!__LIB_18__::func_46(uParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_59(var uParam0)
{
	int iVar0;
	if (*uParam0 == 1861313914)
	{
		if (__LIB_1__::func_185(59))
		{
			__LIB_7__::func_558(&Local_63, __LIB_7__::func_494(uParam0, 1), __LIB_7__::func_554(uParam0, 1), 0, 0, 1);
		}
		else
		{
			__LIB_7__::func_558(&Local_63, __LIB_7__::func_494(uParam0, 0), __LIB_7__::func_554(uParam0, 0), 0, 1, 1);
		}
	}
	else if (!__LIB_18__::func_47(uParam0, &Local_63, &uLocal_86, 0, 1, 1))
	{
		return false;
	}
	if ((*uParam0 == 1861313914 || *uParam0 == -415839138) || *uParam0 == -35775921)
	{
		iVar0 = 0;
		while (iVar0 <= (10 - 1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_63.f_1[iVar0]))
			{
				if (!PED::_0xA0BC8FAED8CFEB3C(Local_63.f_1[iVar0]))
				{
					return false;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (10 - 1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_63.f_1[iVar0]))
			{
				if (*uParam0 == 1861313914)
				{
					if (iVar0 == 0)
					{
						if (__LIB_1__::func_185(59))
						{
							__LIB_0__::func_862(Local_63.f_1[iVar0], func_152(uParam0, 1));
						}
						else
						{
							__LIB_0__::func_862(Local_63.f_1[iVar0], func_152(uParam0, 0));
						}
					}
				}
				else
				{
					__LIB_0__::func_862(Local_63.f_1[iVar0], func_152(uParam0, iVar0));
				}
			}
			iVar0++;
		}
	}
	if (*uParam0 == -415839138)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_63.f_1[0]))
		{
			AUDIO::STOP_PED_SPEAKING(Local_63.f_1[0], true);
			PED::SET_PED_CONFIG_FLAG(Local_63.f_1[0], 297, true);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_41))
		{
			if (!PED::_0x91A5F9CBEBB9D936(uLocal_46))
			{
				uLocal_46 = __LIB_1__::func_391(iLocal_41, 0, 0, 0);
			}
		}
		if (func_15())
		{
			__LIB_0__::func_928(&uLocal_169, Global_35, "JOHN", 0);
		}
		else
		{
			__LIB_0__::func_928(&uLocal_169, Global_35, "ARTHUR", 0);
		}
	}
	else if (*uParam0 == -2008558277)
	{
		iVar0 = 0;
		while (iVar0 <= (10 - 1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_63.f_1[iVar0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_63.f_1[iVar0], false);
				func_157(Local_63.f_1[iVar0], func_156(uParam0, 0), __LIB_7__::func_494(uParam0, iVar0), __LIB_7__::func_554(uParam0, iVar0), 0, 0, 1, 0, -1082130432 /* Float: -1f */);
				PED::_0xF1C03A5352243A30(Local_63.f_1[iVar0]);
			}
			iVar0++;
		}
	}
	else if (*uParam0 == -654238687)
	{
		if (!__LIB_7__::func_530(*uParam0))
		{
			if (!__LIB_7__::func_506(&Local_157, __LIB_7__::func_467(uParam0, 0), __LIB_7__::func_505(uParam0, 0), 0))
			{
				return false;
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_157[0]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_157[0], true);
			}
		}
	}
	else if (*uParam0 == 1861313914)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_63.f_1[0]))
		{
			AUDIO::STOP_PED_SPEAKING(Local_63.f_1[0], true);
			PED::SET_PED_CAN_BE_TARGETTED(Local_63.f_1[0], false);
			PED::SET_PED_CONFIG_FLAG(Local_63.f_1[0], 273, true);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_63.f_1[0], true);
			ENTITY::SET_ENTITY_PROOFS(Local_63.f_1[0], 127, false);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_41))
		{
			if (!PED::_0x91A5F9CBEBB9D936(uLocal_46))
			{
				uLocal_46 = __LIB_1__::func_391(iLocal_41, 0, 0, 0);
			}
		}
		func_160(uParam0);
	}
	else if (*uParam0 == -35775921)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_63.f_1[0]))
		{
			__LIB_2__::func_279(Local_63.f_1[0], 1);
		}
		if (!__LIB_7__::func_506(&Local_157, __LIB_7__::func_467(uParam0, 0), __LIB_7__::func_505(uParam0, 0), 0))
		{
			return false;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_157[0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_63.f_1[0]))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_157[0], Local_63.f_1[0], PED::GET_PED_BONE_INDEX(Local_63.f_1[0], 14285), func_162(uParam0), func_163(uParam0), false, false, false, false, 2, true, false, false);
			}
		}
	}
	return true;
}

void func_60(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		func_164(uParam0, uParam1[iVar0], iVar0);
		iVar0++;
	}
}

void func_61(var uParam0)
{
	if (iLocal_59 > 0 && iLocal_59 < 4)
	{
	}
	switch (iLocal_59)
	{
		case 0:
			__LIB_7__::func_531(&iLocal_59, 4, 1);
			break;
		case 2:
			iLocal_14[7] = 0;
			__LIB_7__::func_531(&iLocal_59, 1, 1);
			break;
		case 3:
			iLocal_14[6] = 0;
			__LIB_7__::func_531(&iLocal_59, 1, 1);
			break;
		case 1:
			if (iLocal_14[6])
			{
				__LIB_7__::func_531(&iLocal_59, 3, 1);
			}
			else if (iLocal_14[7])
			{
				__LIB_7__::func_531(&iLocal_59, 2, 1);
			}
			break;
		case 4:
			break;
	}
}

void func_62(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_63.f_1[0]))
	{
		if (Local_87[0 /*4*/] > 0 && Local_87[0 /*4*/] < 23)
		{
			if (!__LIB_1__::func_185(59))
			{
				if (__LIB_2__::func_774(19))
				{
					__LIB_0__::func_490(&(Local_63.f_1[0]), 0);
					func_68(uParam0);
					__LIB_7__::func_531(&Local_51, 13, 1);
				}
			}
		}
		switch (Local_87[0 /*4*/])
		{
			case 0:
				if (__LIB_1__::func_185(59))
				{
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 23, 1);
				}
				else if (__LIB_0__::func_266(Global_35, __LIB_7__::func_494(uParam0, 0), 30f, 1, 1))
				{
					if (__LIB_0__::func_139(iLocal_48[0]))
					{
						if (!__LIB_0__::func_572(iLocal_48[0], 0))
						{
							__LIB_1__::func_221(iLocal_48[0], 1, 1);
							__LIB_1__::func_382(iLocal_48[0], 1, 1);
						}
					}
					func_170(&(uLocal_31[0]), "base_bool", 1);
					__LIB_7__::func_563(&(uLocal_31[0]), "pb_mid_a");
					__LIB_7__::func_563(&(uLocal_31[0]), "pb_count");
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 1, 1);
				}
				break;
			case 1:
				if (iLocal_38 < 3)
				{
					if (__LIB_0__::func_265(&(Local_87[0 /*4*/].f_1)) >= 4f)
					{
						iLocal_38++;
						MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
						MAP::ALLOW_SONAR_BLIPS(true);
						MAP::_TRIGGER_SONAR_BLIP_2(1715123483, Local_63.f_1[0]);
						__LIB_1__::func_148(&(Local_87[0 /*4*/].f_1));
					}
				}
				if (__LIB_0__::func_266(Global_35, __LIB_7__::func_494(uParam0, 0), 10f, 1, 1))
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_31[0]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uLocal_31[0], true, false))
					{
						if (ANIMSCENE::_0xA9016536015DE29D(uLocal_31[0], "pb_mid_a") && ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_31[0], "pb_mid_a"))
						{
							iLocal_38 = 0;
							func_170(&(uLocal_31[0]), "base_bool", 0);
							__LIB_7__::func_564(&(uLocal_31[0]), "pb_mid_a");
							func_174(&(uLocal_31[0]), "pb_intial_visit_a");
							__LIB_7__::func_563(&(uLocal_31[0]), "pb_mid_b");
							__LIB_7__::func_563(&(uLocal_31[0]), "pb_peek_n");
							__LIB_7__::func_563(&(uLocal_31[0]), "pb_peek_l");
							__LIB_7__::func_563(&(uLocal_31[0]), "pb_peek_r");
							__LIB_14__::func_593(&(Local_87[0 /*4*/]), 2, 1);
						}
					}
				}
				else if (func_175(Local_63.f_1[0], 0, &uLocal_128, &uLocal_156, 0, 0))
				{
					__LIB_7__::func_563(&(uLocal_31[0]), "pb_scream");
					__LIB_7__::func_563(&(uLocal_31[0]), "pb_cower_count");
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 17, 1);
				}
				else if (ANIMSCENE::_0xA9016536015DE29D(uLocal_31[0], "pb_intial_visit_a") && ANIMSCENE::_0x1F0E401031E20146(uLocal_31[0], "pb_intial_visit_a"))
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(uLocal_31[0], "DIALOG_A_FAR", 1))
					{
						if (ANIMSCENE::GET_ANIM_SCENE_BOOL(uLocal_31[0], "base_bool"))
						{
							func_170(&(uLocal_31[0]), "base_bool", 0);
						}
					}
				}
				break;
			case 2:
				if (iLocal_38 < 3)
				{
					if (__LIB_0__::func_265(&(Local_87[0 /*4*/].f_1)) >= 4f)
					{
						iLocal_38++;
						MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
						MAP::ALLOW_SONAR_BLIPS(true);
						MAP::_TRIGGER_SONAR_BLIP_2(249295937, Local_63.f_1[0]);
						__LIB_1__::func_148(&(Local_87[0 /*4*/].f_1));
					}
				}
				if (!__LIB_0__::func_266(Global_35, __LIB_7__::func_494(uParam0, 0), 30f, 1, 1))
				{
					__LIB_7__::func_563(&(uLocal_31[0]), "pb_intial_visit_b");
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 19, 1);
				}
				else if (iLocal_14[1])
				{
					func_174(&(uLocal_31[0]), "pb_mid_a");
					func_174(&(uLocal_31[0]), "pb_mid_b");
					func_174(&(uLocal_31[0]), "pb_mid_c");
					func_174(&(uLocal_31[0]), "pb_intial_visit_a");
					func_174(&(uLocal_31[0]), "pb_intial_visit_b");
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 15, 1);
				}
				else if (func_175(Local_63.f_1[0], 0, &uLocal_128, &uLocal_156, 0, 0))
				{
					__LIB_7__::func_563(&(uLocal_31[0]), "pb_scream");
					__LIB_7__::func_563(&(uLocal_31[0]), "pb_cower_count");
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 17, 1);
				}
				else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_31[0]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uLocal_31[0], true, false))
				{
					if (ANIMSCENE::_0xA9016536015DE29D(uLocal_31[0], "pb_mid_a") && ANIMSCENE::_0x1F0E401031E20146(uLocal_31[0], "pb_mid_a"))
					{
						if (ANIMSCENE::_0x8D81E7824B7753F7(uLocal_31[0], "base", 1))
						{
							iLocal_38 = 0;
							__LIB_7__::func_563(&(uLocal_31[0]), "pb_mid_c");
							func_170(&(uLocal_31[0]), "base_bool", 0);
							__LIB_7__::func_564(&(uLocal_31[0]), "pb_mid_b");
							__LIB_14__::func_593(&(Local_87[0 /*4*/]), 4, 1);
						}
					}
				}
				break;
			case 4:
				if (iLocal_38 < 3)
				{
					if (__LIB_0__::func_265(&(Local_87[0 /*4*/].f_1)) >= 4f)
					{
						iLocal_38++;
						MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
						MAP::ALLOW_SONAR_BLIPS(true);
						MAP::_TRIGGER_SONAR_BLIP_2(249295937, Local_63.f_1[0]);
						__LIB_1__::func_148(&(Local_87[0 /*4*/].f_1));
					}
				}
				if (!__LIB_0__::func_266(Global_35, __LIB_7__::func_494(uParam0, 0), 30f, 1, 1))
				{
					__LIB_7__::func_563(&(uLocal_31[0]), "pb_intial_visit_b");
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 19, 1);
				}
				else if (iLocal_14[1])
				{
					func_174(&(uLocal_31[0]), "pb_mid_a");
					func_174(&(uLocal_31[0]), "pb_mid_b");
					func_174(&(uLocal_31[0]), "pb_mid_c");
					func_174(&(uLocal_31[0]), "pb_intial_visit_a");
					func_174(&(uLocal_31[0]), "pb_intial_visit_b");
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 15, 1);
				}
				else if (func_175(Local_63.f_1[0], 0, &uLocal_128, &uLocal_156, 0, 0))
				{
					__LIB_7__::func_563(&(uLocal_31[0]), "pb_scream");
					__LIB_7__::func_563(&(uLocal_31[0]), "pb_cower_count");
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 17, 1);
				}
				else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_31[0]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uLocal_31[0], true, false))
				{
					if (ANIMSCENE::_0xA9016536015DE29D(uLocal_31[0], "pb_mid_b") && ANIMSCENE::_0x1F0E401031E20146(uLocal_31[0], "pb_mid_b"))
					{
						if (ANIMSCENE::_0x8D81E7824B7753F7(uLocal_31[0], "base", 1))
						{
							iLocal_38 = 0;
							func_170(&(uLocal_31[0]), "base_bool", 0);
							__LIB_7__::func_564(&(uLocal_31[0]), "pb_mid_c");
							__LIB_14__::func_593(&(Local_87[0 /*4*/]), 6, 1);
						}
					}
				}
				break;
			case 6:
				if (iLocal_38 < 3)
				{
					if (__LIB_0__::func_265(&(Local_87[0 /*4*/].f_1)) >= 4f)
					{
						iLocal_38++;
						MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
						MAP::ALLOW_SONAR_BLIPS(true);
						MAP::_TRIGGER_SONAR_BLIP_2(249295937, Local_63.f_1[0]);
						__LIB_1__::func_148(&(Local_87[0 /*4*/].f_1));
					}
				}
				if (!__LIB_0__::func_266(Global_35, __LIB_7__::func_494(uParam0, 0), 30f, 1, 1))
				{
					__LIB_7__::func_563(&(uLocal_31[0]), "pb_intial_visit_b");
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 19, 1);
				}
				else if (iLocal_14[1])
				{
					func_174(&(uLocal_31[0]), "pb_mid_a");
					func_174(&(uLocal_31[0]), "pb_mid_b");
					func_174(&(uLocal_31[0]), "pb_mid_c");
					func_174(&(uLocal_31[0]), "pb_intial_visit_a");
					func_174(&(uLocal_31[0]), "pb_intial_visit_b");
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 15, 1);
				}
				else if (func_175(Local_63.f_1[0], 0, &uLocal_128, &uLocal_156, 0, 0))
				{
					__LIB_7__::func_563(&(uLocal_31[0]), "pb_scream");
					__LIB_7__::func_563(&(uLocal_31[0]), "pb_cower_count");
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 17, 1);
				}
				else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_31[0]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uLocal_31[0], true, false))
				{
					if (ANIMSCENE::_0xA9016536015DE29D(uLocal_31[0], "pb_mid_c") && ANIMSCENE::_0x1F0E401031E20146(uLocal_31[0], "pb_mid_c"))
					{
						if (ANIMSCENE::_0x8D81E7824B7753F7(uLocal_31[0], "base", 1))
						{
							__LIB_7__::func_563(&(uLocal_31[0]), "pb_intial_visit_b");
							__LIB_14__::func_593(&(Local_87[0 /*4*/]), 19, 1);
						}
					}
				}
				break;
			case 19:
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_31[0]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uLocal_31[0], true, false))
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_31[0], "pb_intial_visit_b"))
					{
						__LIB_7__::func_563(&(uLocal_31[0]), "pb_intial_visit_b");
					}
					if (ANIMSCENE::_0xA9016536015DE29D(uLocal_31[0], "pb_intial_visit_b") && ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_31[0], "pb_intial_visit_b"))
					{
						func_170(&(uLocal_31[0]), "base_bool", 0);
						__LIB_7__::func_564(&(uLocal_31[0]), "pb_intial_visit_b");
						func_174(&(uLocal_31[0]), "pb_mid_a");
						func_174(&(uLocal_31[0]), "pb_mid_b");
						func_174(&(uLocal_31[0]), "pb_mid_c");
						__LIB_14__::func_593(&(Local_87[0 /*4*/]), 20, 1);
					}
				}
				break;
			case 20:
				if (iLocal_14[1])
				{
					func_174(&(uLocal_31[0]), "pb_mid_a");
					func_174(&(uLocal_31[0]), "pb_mid_b");
					func_174(&(uLocal_31[0]), "pb_mid_c");
					func_174(&(uLocal_31[0]), "pb_intial_visit_a");
					func_174(&(uLocal_31[0]), "pb_intial_visit_b");
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 15, 1);
				}
				else if (func_175(Local_63.f_1[0], 0, &uLocal_128, &uLocal_156, 0, 0))
				{
					__LIB_7__::func_563(&(uLocal_31[0]), "pb_scream");
					__LIB_7__::func_563(&(uLocal_31[0]), "pb_cower_count");
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 17, 1);
				}
				else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_31[0]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uLocal_31[0], true, false))
				{
					if ((!ANIMSCENE::GET_ANIM_SCENE_BOOL(uLocal_31[0], "base_bool") && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_31[0], "base", 1)) && ANIMSCENE::_GET_ANIM_SCENE_TIME(uLocal_31[0]) <= 14.27f)
					{
						if (__LIB_0__::func_266(Global_35, __LIB_7__::func_494(uParam0, 0), (10f - 1f), 1, 1))
						{
							func_170(&(uLocal_31[0]), "base_bool", 1);
						}
					}
					if (ANIMSCENE::_0xA9016536015DE29D(uLocal_31[0], "pb_intial_visit_b") && ANIMSCENE::_0x1F0E401031E20146(uLocal_31[0], "pb_intial_visit_b"))
					{
						if (ANIMSCENE::_0x8D81E7824B7753F7(uLocal_31[0], "DIALOG_B_FAR", 1))
						{
							if (ANIMSCENE::GET_ANIM_SCENE_BOOL(uLocal_31[0], "base_bool"))
							{
								func_170(&(uLocal_31[0]), "base_bool", 0);
							}
						}
					}
				}
				break;
			case 15:
				if (VOLUME::_DOES_VOLUME_EXIST(iLocal_42) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_42, true, 0))
				{
					StringCopy(&cLocal_25, "pb_peek_n", 24);
					iLocal_37 = 0;
				}
				else if (__LIB_7__::func_555(Global_35, __LIB_7__::func_494(uParam0, 0), __LIB_7__::func_554(uParam0, 0), 1065353216 /* Float: 1f */))
				{
					StringCopy(&cLocal_25, "pb_peek_l", 24);
					iLocal_37 = 1;
				}
				else
				{
					StringCopy(&cLocal_25, "pb_peek_r", 24);
					iLocal_37 = 2;
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, func_177(uParam0, iLocal_37), 1f, 20000, 0.25f, 0, 40000f);
				__LIB_14__::func_593(&(Local_87[0 /*4*/]), 16, 1);
				break;
			case 16:
				if (__LIB_0__::func_266(Global_35, func_177(uParam0, iLocal_37), 0.5f, 1, 1))
				{
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 7, 1);
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 713668775, true) == 8)
				{
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 7, 1);
				}
				else if (__LIB_0__::func_265(&(Local_87[0 /*4*/].f_1)) >= 10f)
				{
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 7, 1);
				}
				break;
			case 7:
				__LIB_7__::func_564(&(uLocal_31[0]), &cLocal_25);
				__LIB_7__::func_563(&(uLocal_31[0]), "pb_count");
				func_170(&(uLocal_31[0]), "base_bool", 0);
				__LIB_14__::func_593(&(Local_87[0 /*4*/]), 8, 1);
				break;
			case 8:
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_31[0]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uLocal_31[0], true, false))
				{
					if (ANIMSCENE::_0xA9016536015DE29D(uLocal_31[0], &cLocal_25) && ANIMSCENE::_0x1F0E401031E20146(uLocal_31[0], &cLocal_25))
					{
						if (!iLocal_14[3])
						{
							if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uLocal_31[0]) >= 3.5f)
							{
								iLocal_14[3] = 1;
								iLocal_36 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_SEEN_MELEE_ACTION"), Local_63.f_1[0], -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
							}
						}
						if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uLocal_31[0]) >= 5.5f)
						{
							if (!__LIB_0__::func_1(uParam0->f_3, 1))
							{
								__LIB_1__::func_581(&(uParam0->f_3), 1);
							}
						}
						if (ANIMSCENE::_0x8D81E7824B7753F7(uLocal_31[0], "base", 1))
						{
							func_170(&(uLocal_31[0]), "count_loop", 0);
							__LIB_7__::func_564(&(uLocal_31[0]), "pb_count");
							__LIB_14__::func_593(&(Local_87[0 /*4*/]), 13, 1);
						}
					}
				}
				break;
			case 13:
				if (func_175(Local_63.f_1[0], 0, &uLocal_128, &uLocal_156, 0, 0))
				{
					__LIB_7__::func_563(&(uLocal_31[0]), "pb_scream");
					__LIB_7__::func_563(&(uLocal_31[0]), "pb_cower_count");
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 17, 1);
				}
				break;
			case 17:
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_31[0]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uLocal_31[0], true, false))
				{
					if (ANIMSCENE::_0xA9016536015DE29D(uLocal_31[0], "pb_scream") && ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_31[0], "pb_scream"))
					{
						iLocal_14[2] = 1;
						__LIB_1__::func_748(&(iLocal_48[0]), 1, 1);
						__LIB_7__::func_564(&(uLocal_31[0]), "pb_scream");
						__LIB_14__::func_593(&(Local_87[0 /*4*/]), 18, 1);
					}
				}
				break;
			case 18:
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_31[0]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uLocal_31[0], true, false))
				{
					if (ANIMSCENE::_0xA9016536015DE29D(uLocal_31[0], "pb_scream") && ANIMSCENE::_0x1F0E401031E20146(uLocal_31[0], "pb_scream"))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uLocal_31[0]) >= 4.75f)
						{
							func_170(&(uLocal_31[0]), "base_bool", 0);
							__LIB_7__::func_564(&(uLocal_31[0]), "pb_cower_count");
							__LIB_14__::func_593(&(Local_87[0 /*4*/]), 22, 1);
						}
					}
				}
				break;
			case 22:
				break;
			case 23:
				break;
		}
	}
}

void func_63(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_63.f_1[0]))
	{
		if (Local_87[0 /*4*/] > 0 && Local_87[0 /*4*/] < 23)
		{
			if (__LIB_2__::func_774(48))
			{
				__LIB_0__::func_490(&(Local_63.f_1[0]), 0);
				func_68(uParam0);
				__LIB_7__::func_531(&Local_51, 13, 1);
			}
			if (!iLocal_14[6])
			{
				if (__LIB_0__::func_266(Global_35, __LIB_7__::func_494(uParam0, 0), 20f, 1, 1))
				{
					iLocal_14[6] = 1;
					PED::SET_PED_LOD_MULTIPLIER(Local_63.f_1[0], 2f);
				}
			}
			else if (!__LIB_0__::func_266(Global_35, __LIB_7__::func_494(uParam0, 0), 21f, 1, 1))
			{
				iLocal_14[6] = 0;
				PED::SET_PED_LOD_MULTIPLIER(Local_63.f_1[0], 1f);
			}
		}
		switch (Local_87[0 /*4*/])
		{
			case 0:
				iLocal_38 = 0;
				iLocal_37 = 0;
				bLocal_23 = false;
				if (bLocal_23)
				{
					StringCopy(&cLocal_25, "pbl_base_b", 24);
					func_174(&(uLocal_31[0]), "pbl_base_a");
					func_174(&(uLocal_31[0]), "pbl_brkout_ba_on_l");
					func_174(&(uLocal_31[0]), "pbl_brkout_ba_on_r");
					func_174(&(uLocal_31[0]), "pbl_brkout_ba_on_n");
					__LIB_7__::func_563(&(uLocal_31[0]), "pbl_base_b");
					__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_bb_on_l");
					__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_bb_on_r");
					__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_bb_on_n");
				}
				else
				{
					StringCopy(&cLocal_25, "pbl_base_a", 24);
					func_174(&(uLocal_31[0]), "pbl_base_b");
					func_174(&(uLocal_31[0]), "pbl_brkout_bb_on_l");
					func_174(&(uLocal_31[0]), "pbl_brkout_bb_on_r");
					func_174(&(uLocal_31[0]), "pbl_brkout_bb_on_n");
					__LIB_7__::func_563(&(uLocal_31[0]), "pbl_base_a");
					__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_ba_on_l");
					__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_ba_on_r");
					__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_ba_on_n");
				}
				func_174(&(uLocal_31[0]), "pbl_ba_lvl_1_l");
				func_174(&(uLocal_31[0]), "pbl_ba_lvl_1_r");
				func_174(&(uLocal_31[0]), "pbl_ba_lvl_2_l");
				func_174(&(uLocal_31[0]), "pbl_ba_lvl_2_r");
				func_174(&(uLocal_31[0]), "pbl_ba_lvl_3_l");
				func_174(&(uLocal_31[0]), "pbl_ba_lvl_3_r");
				func_174(&(uLocal_31[0]), "pbl_bb_lvl_1_l");
				func_174(&(uLocal_31[0]), "pbl_bb_lvl_1_r");
				func_174(&(uLocal_31[0]), "pbl_bb_lvl_2_l");
				func_174(&(uLocal_31[0]), "pbl_bb_lvl_2_r");
				func_174(&(uLocal_31[0]), "pbl_bb_lvl_3_l");
				func_174(&(uLocal_31[0]), "pbl_bb_lvl_3_r");
				__LIB_4__::func_228(&uLocal_128);
				__LIB_14__::func_593(&(Local_87[0 /*4*/]), 14, 1);
				break;
			case 14:
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_31[0]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uLocal_31[0], true, false))
				{
					if (ANIMSCENE::_0xA9016536015DE29D(uLocal_31[0], &cLocal_25) && ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_31[0], &cLocal_25))
					{
						__LIB_7__::func_564(&(uLocal_31[0]), &cLocal_25);
						__LIB_14__::func_593(&(Local_87[0 /*4*/]), 13, 1);
					}
				}
				break;
			case 13:
				if (__LIB_0__::func_266(Global_35, __LIB_7__::func_494(uParam0, 0), 6f, 1, 1))
				{
					MISC::_0x870708A6E147A9AD(Local_63.f_1[0], "", 6f, 0, 0, 0, 0, 0, 0, -1);
					if (iLocal_38 == 0)
					{
						func_174(&(uLocal_31[0]), "pbl_ba_lvl_2_l");
						func_174(&(uLocal_31[0]), "pbl_ba_lvl_2_r");
						func_174(&(uLocal_31[0]), "pbl_bb_lvl_2_l");
						func_174(&(uLocal_31[0]), "pbl_bb_lvl_2_r");
						__LIB_0__::func_268(&(Local_87[0 /*4*/].f_1), 2f);
						__LIB_14__::func_593(&(Local_87[0 /*4*/]), 1, 0);
					}
					else if (iLocal_38 == 1)
					{
						func_174(&(uLocal_31[0]), "pbl_ba_lvl_3_l");
						func_174(&(uLocal_31[0]), "pbl_ba_lvl_3_r");
						func_174(&(uLocal_31[0]), "pbl_bb_lvl_3_l");
						func_174(&(uLocal_31[0]), "pbl_bb_lvl_3_r");
						__LIB_0__::func_268(&(Local_87[0 /*4*/].f_1), 2f);
						__LIB_14__::func_593(&(Local_87[0 /*4*/]), 3, 0);
					}
					else if (iLocal_38 == 2)
					{
						func_174(&(uLocal_31[0]), "pbl_ba_lvl_1_l");
						func_174(&(uLocal_31[0]), "pbl_ba_lvl_1_r");
						func_174(&(uLocal_31[0]), "pbl_bb_lvl_1_l");
						func_174(&(uLocal_31[0]), "pbl_bb_lvl_1_r");
						__LIB_0__::func_268(&(Local_87[0 /*4*/].f_1), 2f);
						__LIB_14__::func_593(&(Local_87[0 /*4*/]), 5, 0);
					}
				}
				else if (func_175(Local_63.f_1[0], 0, &uLocal_128, &uLocal_156, 0, 0))
				{
					if (bLocal_23)
					{
						__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_bb_on_l");
						__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_bb_on_r");
						__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_bb_on_n");
					}
					else
					{
						__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_ba_on_l");
						__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_ba_on_r");
						__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_ba_on_n");
					}
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 19, 1);
				}
				break;
			case 1:
				if (__LIB_0__::func_265(&(Local_87[0 /*4*/].f_1)) >= 2f)
				{
					if (!__LIB_0__::func_266(Global_35, __LIB_7__::func_494(uParam0, 0), 6f, 1, 1))
					{
						MISC::_0xE98D55C5983F2509(Local_63.f_1[0]);
						__LIB_14__::func_593(&(Local_87[0 /*4*/]), 13, 1);
					}
					else if (func_175(Local_63.f_1[0], 0, &uLocal_128, &uLocal_156, 0, 0))
					{
						MISC::_0xE98D55C5983F2509(Local_63.f_1[0]);
						if (bLocal_23)
						{
							__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_bb_on_l");
							__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_bb_on_r");
							__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_bb_on_n");
						}
						else
						{
							__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_ba_on_l");
							__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_ba_on_r");
							__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_ba_on_n");
						}
						__LIB_14__::func_593(&(Local_87[0 /*4*/]), 19, 1);
					}
					else if (func_179(&(Local_63.f_1[0])))
					{
						func_160(uParam0);
						if (bLocal_23)
						{
							__LIB_7__::func_563(&(uLocal_31[0]), "pbl_bb_lvl_1_l");
							__LIB_7__::func_563(&(uLocal_31[0]), "pbl_bb_lvl_1_r");
						}
						else
						{
							__LIB_7__::func_563(&(uLocal_31[0]), "pbl_ba_lvl_1_l");
							__LIB_7__::func_563(&(uLocal_31[0]), "pbl_ba_lvl_1_r");
						}
						__LIB_14__::func_593(&(Local_87[0 /*4*/]), 2, 1);
					}
				}
				break;
			case 2:
				if (!__LIB_0__::func_266(Global_35, __LIB_7__::func_494(uParam0, 0), 6f, 1, 1))
				{
					MISC::_0xE98D55C5983F2509(Local_63.f_1[0]);
					if (__LIB_0__::func_139(iLocal_48[0]))
					{
						__LIB_1__::func_748(&(iLocal_48[0]), 1, 1);
					}
					if (__LIB_0__::func_139(iLocal_48[1]))
					{
						__LIB_1__::func_748(&(iLocal_48[1]), 1, 1);
					}
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 13, 1);
				}
				else if (func_175(Local_63.f_1[0], 0, &uLocal_128, &uLocal_156, 0, 0))
				{
					MISC::_0xE98D55C5983F2509(Local_63.f_1[0]);
					if (__LIB_0__::func_139(iLocal_48[0]))
					{
						__LIB_1__::func_748(&(iLocal_48[0]), 1, 1);
					}
					if (__LIB_0__::func_139(iLocal_48[1]))
					{
						__LIB_1__::func_748(&(iLocal_48[1]), 1, 1);
					}
					if (bLocal_23)
					{
						__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_bb_on_l");
						__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_bb_on_r");
						__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_bb_on_n");
					}
					else
					{
						__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_ba_on_l");
						__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_ba_on_r");
						__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_ba_on_n");
					}
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 19, 1);
				}
				else if (!func_179(&(Local_63.f_1[0])))
				{
					if (__LIB_0__::func_139(iLocal_48[0]))
					{
						__LIB_1__::func_748(&(iLocal_48[0]), 1, 1);
					}
					if (__LIB_0__::func_139(iLocal_48[1]))
					{
						__LIB_1__::func_748(&(iLocal_48[1]), 1, 1);
					}
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 13, 1);
				}
				else if (__LIB_0__::func_139(iLocal_48[0]) && __LIB_1__::func_732(iLocal_48[0], 1))
				{
					if (!__LIB_0__::func_1(uParam0->f_3, 1))
					{
						__LIB_1__::func_581(&(uParam0->f_3), 1);
					}
					if (__LIB_0__::func_139(iLocal_48[0]))
					{
						__LIB_1__::func_748(&(iLocal_48[0]), 1, 1);
					}
					if (__LIB_0__::func_139(iLocal_48[1]))
					{
						__LIB_1__::func_748(&(iLocal_48[1]), 1, 1);
					}
					if (__LIB_7__::func_555(Global_35, __LIB_7__::func_494(uParam0, 0), __LIB_7__::func_554(uParam0, 0), 1065353216 /* Float: 1f */))
					{
						if (bLocal_23)
						{
							StringCopy(&cLocal_25, "pbl_bb_lvl_1_r", 24);
						}
						else
						{
							StringCopy(&cLocal_25, "pbl_ba_lvl_1_r", 24);
						}
					}
					else if (bLocal_23)
					{
						StringCopy(&cLocal_25, "pbl_bb_lvl_1_l", 24);
					}
					else
					{
						StringCopy(&cLocal_25, "pbl_ba_lvl_1_l", 24);
					}
					__LIB_7__::func_564(&(uLocal_31[0]), &cLocal_25);
					iLocal_38 = 1;
					if (__LIB_0__::func_481(1))
					{
						__LIB_0__::func_82(1, 0, 0);
					}
					if (func_15())
					{
						StringCopy(&cLocal_28, "DMONK_GREET_J", 24);
					}
					else
					{
						StringCopy(&cLocal_28, "DMONK_GREET_A", 24);
					}
					__LIB_1__::func_104(&uLocal_169, cLocal_28, 0, -1, 0, 0);
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 3, 1);
				}
				else if (__LIB_0__::func_139(iLocal_48[1]) && __LIB_1__::func_732(iLocal_48[1], 1))
				{
					if (!__LIB_0__::func_1(uParam0->f_3, 1))
					{
						__LIB_1__::func_581(&(uParam0->f_3), 1);
					}
					if (__LIB_0__::func_139(iLocal_48[0]))
					{
						__LIB_1__::func_748(&(iLocal_48[0]), 1, 1);
					}
					if (__LIB_0__::func_139(iLocal_48[1]))
					{
						__LIB_1__::func_748(&(iLocal_48[1]), 1, 1);
					}
					if (__LIB_7__::func_555(Global_35, __LIB_7__::func_494(uParam0, 0), __LIB_7__::func_554(uParam0, 0), 1065353216 /* Float: 1f */))
					{
						if (bLocal_23)
						{
							StringCopy(&cLocal_25, "pbl_bb_lvl_1_r", 24);
						}
						else
						{
							StringCopy(&cLocal_25, "pbl_ba_lvl_1_r", 24);
						}
					}
					else if (bLocal_23)
					{
						StringCopy(&cLocal_25, "pbl_bb_lvl_1_l", 24);
					}
					else
					{
						StringCopy(&cLocal_25, "pbl_ba_lvl_1_l", 24);
					}
					__LIB_7__::func_564(&(uLocal_31[0]), &cLocal_25);
					iLocal_38 = 1;
					if (__LIB_0__::func_481(1))
					{
						__LIB_0__::func_82(1, 0, 0);
					}
					if (func_15())
					{
						StringCopy(&cLocal_28, "DMONK_ANTAG_J", 24);
					}
					else
					{
						StringCopy(&cLocal_28, "DMONK_ANTAG_A", 24);
					}
					__LIB_1__::func_104(&uLocal_169, cLocal_28, 0, -1, 0, 0);
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 3, 1);
				}
				break;
			case 3:
				if (__LIB_0__::func_265(&(Local_87[0 /*4*/].f_1)) >= 2f)
				{
					if (!__LIB_0__::func_266(Global_35, __LIB_7__::func_494(uParam0, 0), 6f, 1, 1))
					{
						MISC::_0xE98D55C5983F2509(Local_63.f_1[0]);
						__LIB_14__::func_593(&(Local_87[0 /*4*/]), 13, 1);
					}
					else if (func_175(Local_63.f_1[0], 0, &uLocal_128, &uLocal_156, 0, 0))
					{
						MISC::_0xE98D55C5983F2509(Local_63.f_1[0]);
						if (bLocal_23)
						{
							__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_bb_on_l");
							__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_bb_on_r");
							__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_bb_on_n");
						}
						else
						{
							__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_ba_on_l");
							__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_ba_on_r");
							__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_ba_on_n");
						}
						__LIB_14__::func_593(&(Local_87[0 /*4*/]), 19, 1);
					}
					else if (func_179(&(Local_63.f_1[0])))
					{
						func_160(uParam0);
						if (bLocal_23)
						{
							__LIB_7__::func_563(&(uLocal_31[0]), "pbl_bb_lvl_2_l");
							__LIB_7__::func_563(&(uLocal_31[0]), "pbl_bb_lvl_2_r");
						}
						else
						{
							__LIB_7__::func_563(&(uLocal_31[0]), "pbl_ba_lvl_2_l");
							__LIB_7__::func_563(&(uLocal_31[0]), "pbl_ba_lvl_2_r");
						}
						__LIB_14__::func_593(&(Local_87[0 /*4*/]), 4, 1);
					}
				}
				break;
			case 4:
				if (!__LIB_0__::func_266(Global_35, __LIB_7__::func_494(uParam0, 0), 6f, 1, 1))
				{
					MISC::_0xE98D55C5983F2509(Local_63.f_1[0]);
					if (__LIB_0__::func_139(iLocal_48[0]))
					{
						__LIB_1__::func_748(&(iLocal_48[0]), 1, 1);
					}
					if (__LIB_0__::func_139(iLocal_48[1]))
					{
						__LIB_1__::func_748(&(iLocal_48[1]), 1, 1);
					}
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 13, 1);
				}
				else if (func_175(Local_63.f_1[0], 0, &uLocal_128, &uLocal_156, 0, 0))
				{
					MISC::_0xE98D55C5983F2509(Local_63.f_1[0]);
					if (__LIB_0__::func_139(iLocal_48[0]))
					{
						__LIB_1__::func_748(&(iLocal_48[0]), 1, 1);
					}
					if (__LIB_0__::func_139(iLocal_48[1]))
					{
						__LIB_1__::func_748(&(iLocal_48[1]), 1, 1);
					}
					if (bLocal_23)
					{
						__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_bb_on_l");
						__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_bb_on_r");
						__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_bb_on_n");
					}
					else
					{
						__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_ba_on_l");
						__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_ba_on_r");
						__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_ba_on_n");
					}
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 19, 1);
				}
				else if (!func_179(&(Local_63.f_1[0])))
				{
					if (__LIB_0__::func_139(iLocal_48[0]))
					{
						__LIB_1__::func_748(&(iLocal_48[0]), 1, 1);
					}
					if (__LIB_0__::func_139(iLocal_48[1]))
					{
						__LIB_1__::func_748(&(iLocal_48[1]), 1, 1);
					}
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 13, 1);
				}
				else if (__LIB_0__::func_139(iLocal_48[0]) && __LIB_1__::func_732(iLocal_48[0], 1))
				{
					if (__LIB_0__::func_139(iLocal_48[0]))
					{
						__LIB_1__::func_748(&(iLocal_48[0]), 1, 1);
					}
					if (__LIB_0__::func_139(iLocal_48[1]))
					{
						__LIB_1__::func_748(&(iLocal_48[1]), 1, 1);
					}
					if (__LIB_7__::func_555(Global_35, __LIB_7__::func_494(uParam0, 0), __LIB_7__::func_554(uParam0, 0), 1065353216 /* Float: 1f */))
					{
						if (bLocal_23)
						{
							StringCopy(&cLocal_25, "pbl_bb_lvl_2_r", 24);
						}
						else
						{
							StringCopy(&cLocal_25, "pbl_ba_lvl_2_r", 24);
						}
					}
					else if (bLocal_23)
					{
						StringCopy(&cLocal_25, "pbl_bb_lvl_2_l", 24);
					}
					else
					{
						StringCopy(&cLocal_25, "pbl_ba_lvl_2_l", 24);
					}
					__LIB_7__::func_564(&(uLocal_31[0]), &cLocal_25);
					iLocal_38 = 2;
					if (__LIB_0__::func_481(1))
					{
						__LIB_0__::func_82(1, 0, 0);
					}
					if (func_15())
					{
						StringCopy(&cLocal_28, "DMONK_GREET_J", 24);
					}
					else
					{
						StringCopy(&cLocal_28, "DMONK_GREET_A", 24);
					}
					__LIB_1__::func_104(&uLocal_169, cLocal_28, 0, -1, 0, 0);
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 5, 1);
				}
				else if (__LIB_0__::func_139(iLocal_48[1]) && __LIB_1__::func_732(iLocal_48[1], 1))
				{
					if (__LIB_0__::func_139(iLocal_48[0]))
					{
						__LIB_1__::func_748(&(iLocal_48[0]), 1, 1);
					}
					if (__LIB_0__::func_139(iLocal_48[1]))
					{
						__LIB_1__::func_748(&(iLocal_48[1]), 1, 1);
					}
					if (__LIB_7__::func_555(Global_35, __LIB_7__::func_494(uParam0, 0), __LIB_7__::func_554(uParam0, 0), 1065353216 /* Float: 1f */))
					{
						if (bLocal_23)
						{
							StringCopy(&cLocal_25, "pbl_bb_lvl_2_r", 24);
						}
						else
						{
							StringCopy(&cLocal_25, "pbl_ba_lvl_2_r", 24);
						}
					}
					else if (bLocal_23)
					{
						StringCopy(&cLocal_25, "pbl_bb_lvl_2_l", 24);
					}
					else
					{
						StringCopy(&cLocal_25, "pbl_ba_lvl_2_l", 24);
					}
					__LIB_7__::func_564(&(uLocal_31[0]), &cLocal_25);
					iLocal_38 = 2;
					if (__LIB_0__::func_481(1))
					{
						__LIB_0__::func_82(1, 0, 0);
					}
					if (func_15())
					{
						StringCopy(&cLocal_28, "DMONK_ANTAG_J", 24);
					}
					else
					{
						StringCopy(&cLocal_28, "DMONK_ANTAG_A", 24);
					}
					__LIB_1__::func_104(&uLocal_169, cLocal_28, 0, -1, 0, 0);
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 5, 1);
				}
				break;
			case 5:
				if (__LIB_0__::func_265(&(Local_87[0 /*4*/].f_1)) >= 2f)
				{
					if (!__LIB_0__::func_266(Global_35, __LIB_7__::func_494(uParam0, 0), 6f, 1, 1))
					{
						MISC::_0xE98D55C5983F2509(Local_63.f_1[0]);
						__LIB_14__::func_593(&(Local_87[0 /*4*/]), 13, 1);
					}
					else if (func_175(Local_63.f_1[0], 0, &uLocal_128, &uLocal_156, 0, 0))
					{
						MISC::_0xE98D55C5983F2509(Local_63.f_1[0]);
						if (bLocal_23)
						{
							__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_bb_on_l");
							__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_bb_on_r");
							__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_bb_on_n");
						}
						else
						{
							__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_ba_on_l");
							__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_ba_on_r");
							__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_ba_on_n");
						}
						__LIB_14__::func_593(&(Local_87[0 /*4*/]), 19, 1);
					}
					else if (func_179(&(Local_63.f_1[0])))
					{
						func_160(uParam0);
						func_174(&(uLocal_31[0]), "pbl_ba_lvl_1_l");
						func_174(&(uLocal_31[0]), "pbl_ba_lvl_1_r");
						func_174(&(uLocal_31[0]), "pbl_bb_lvl_1_l");
						func_174(&(uLocal_31[0]), "pbl_bb_lvl_1_r");
						if (bLocal_23)
						{
							__LIB_7__::func_563(&(uLocal_31[0]), "pbl_bb_lvl_3_l");
							__LIB_7__::func_563(&(uLocal_31[0]), "pbl_bb_lvl_3_r");
						}
						else
						{
							__LIB_7__::func_563(&(uLocal_31[0]), "pbl_ba_lvl_3_l");
							__LIB_7__::func_563(&(uLocal_31[0]), "pbl_ba_lvl_3_r");
						}
						__LIB_14__::func_593(&(Local_87[0 /*4*/]), 6, 1);
					}
				}
				break;
			case 6:
				if (!__LIB_0__::func_266(Global_35, __LIB_7__::func_494(uParam0, 0), 6f, 1, 1))
				{
					MISC::_0xE98D55C5983F2509(Local_63.f_1[0]);
					if (__LIB_0__::func_139(iLocal_48[0]))
					{
						__LIB_1__::func_748(&(iLocal_48[0]), 1, 1);
					}
					if (__LIB_0__::func_139(iLocal_48[1]))
					{
						__LIB_1__::func_748(&(iLocal_48[1]), 1, 1);
					}
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 13, 1);
				}
				else if (func_175(Local_63.f_1[0], 0, &uLocal_128, &uLocal_156, 0, 0))
				{
					MISC::_0xE98D55C5983F2509(Local_63.f_1[0]);
					if (__LIB_0__::func_139(iLocal_48[0]))
					{
						__LIB_1__::func_748(&(iLocal_48[0]), 1, 1);
					}
					if (__LIB_0__::func_139(iLocal_48[1]))
					{
						__LIB_1__::func_748(&(iLocal_48[1]), 1, 1);
					}
					if (bLocal_23)
					{
						__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_bb_on_l");
						__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_bb_on_r");
						__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_bb_on_n");
					}
					else
					{
						__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_ba_on_l");
						__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_ba_on_r");
						__LIB_7__::func_563(&(uLocal_31[0]), "pbl_brkout_ba_on_n");
					}
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 19, 1);
				}
				else if (!func_179(&(Local_63.f_1[0])))
				{
					if (__LIB_0__::func_139(iLocal_48[0]))
					{
						__LIB_1__::func_748(&(iLocal_48[0]), 1, 1);
					}
					if (__LIB_0__::func_139(iLocal_48[1]))
					{
						__LIB_1__::func_748(&(iLocal_48[1]), 1, 1);
					}
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 13, 1);
				}
				else if (__LIB_0__::func_139(iLocal_48[0]) && __LIB_1__::func_732(iLocal_48[0], 1))
				{
					if (__LIB_0__::func_139(iLocal_48[0]))
					{
						__LIB_1__::func_748(&(iLocal_48[0]), 1, 1);
					}
					if (__LIB_0__::func_139(iLocal_48[1]))
					{
						__LIB_1__::func_748(&(iLocal_48[1]), 1, 1);
					}
					if (__LIB_7__::func_555(Global_35, __LIB_7__::func_494(uParam0, 0), __LIB_7__::func_554(uParam0, 0), 1065353216 /* Float: 1f */))
					{
						if (bLocal_23)
						{
							StringCopy(&cLocal_25, "pbl_bb_lvl_3_r", 24);
						}
						else
						{
							StringCopy(&cLocal_25, "pbl_ba_lvl_3_r", 24);
						}
					}
					else if (bLocal_23)
					{
						StringCopy(&cLocal_25, "pbl_bb_lvl_3_l", 24);
					}
					else
					{
						StringCopy(&cLocal_25, "pbl_ba_lvl_3_l", 24);
					}
					__LIB_7__::func_564(&(uLocal_31[0]), &cLocal_25);
					iLocal_38 = 0;
					if (iLocal_37 == 0)
					{
						iLocal_37 = 1;
						bLocal_23 = true;
					}
					else
					{
						iLocal_37 = 0;
						bLocal_23 = false;
					}
					if (__LIB_0__::func_481(1))
					{
						__LIB_0__::func_82(1, 0, 0);
					}
					if (func_15())
					{
						StringCopy(&cLocal_28, "DMONK_GREET_J", 24);
					}
					else
					{
						StringCopy(&cLocal_28, "DMONK_GREET_A", 24);
					}
					__LIB_1__::func_104(&uLocal_169, cLocal_28, 0, -1, 0, 0);
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 1, 1);
				}
				else if (__LIB_0__::func_139(iLocal_48[1]) && __LIB_1__::func_732(iLocal_48[1], 1))
				{
					if (__LIB_0__::func_139(iLocal_48[0]))
					{
						__LIB_1__::func_748(&(iLocal_48[0]), 1, 1);
					}
					if (__LIB_0__::func_139(iLocal_48[1]))
					{
						__LIB_1__::func_748(&(iLocal_48[1]), 1, 1);
					}
					if (__LIB_7__::func_555(Global_35, __LIB_7__::func_494(uParam0, 0), __LIB_7__::func_554(uParam0, 0), 1065353216 /* Float: 1f */))
					{
						if (bLocal_23)
						{
							StringCopy(&cLocal_25, "pbl_bb_lvl_3_r", 24);
						}
						else
						{
							StringCopy(&cLocal_25, "pbl_ba_lvl_3_r", 24);
						}
					}
					else if (bLocal_23)
					{
						StringCopy(&cLocal_25, "pbl_bb_lvl_3_l", 24);
					}
					else
					{
						StringCopy(&cLocal_25, "pbl_ba_lvl_3_l", 24);
					}
					__LIB_7__::func_564(&(uLocal_31[0]), &cLocal_25);
					iLocal_38 = 0;
					if (iLocal_37 == 0)
					{
						iLocal_37 = 1;
						bLocal_23 = true;
					}
					else
					{
						iLocal_37 = 0;
						bLocal_23 = false;
					}
					if (__LIB_0__::func_481(1))
					{
						__LIB_0__::func_82(1, 0, 0);
					}
					if (func_15())
					{
						StringCopy(&cLocal_28, "DMONK_ANTAG_J", 24);
					}
					else
					{
						StringCopy(&cLocal_28, "DMONK_ANTAG_A", 24);
					}
					__LIB_1__::func_104(&uLocal_169, cLocal_28, 0, -1, 0, 0);
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 1, 1);
				}
				break;
			case 19:
				if (!__LIB_0__::func_1(uParam0->f_3, 1))
				{
					__LIB_1__::func_581(&(uParam0->f_3), 1);
				}
				if (bLocal_23)
				{
					if (VOLUME::_DOES_VOLUME_EXIST(iLocal_41) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_41, true, 0))
					{
						StringCopy(&cLocal_25, "pbl_brkout_bb_on_n", 24);
					}
					else if (__LIB_7__::func_555(Global_35, __LIB_7__::func_494(uParam0, 0), __LIB_7__::func_554(uParam0, 0), 1065353216 /* Float: 1f */))
					{
						StringCopy(&cLocal_25, "pbl_brkout_bb_on_r", 24);
					}
					else
					{
						StringCopy(&cLocal_25, "pbl_brkout_bb_on_l", 24);
					}
				}
				else if (VOLUME::_DOES_VOLUME_EXIST(iLocal_41) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_41, true, 0))
				{
					StringCopy(&cLocal_25, "pbl_brkout_ba_on_n", 24);
				}
				else if (__LIB_7__::func_555(Global_35, __LIB_7__::func_494(uParam0, 0), __LIB_7__::func_554(uParam0, 0), 1065353216 /* Float: 1f */))
				{
					StringCopy(&cLocal_25, "pbl_brkout_ba_on_r", 24);
				}
				else
				{
					StringCopy(&cLocal_25, "pbl_brkout_ba_on_l", 24);
				}
				__LIB_7__::func_564(&(uLocal_31[0]), &cLocal_25);
				__LIB_14__::func_593(&(Local_87[0 /*4*/]), 20, 1);
				break;
			case 20:
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_31[0]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uLocal_31[0], true, false))
				{
					if (ANIMSCENE::_0xA9016536015DE29D(uLocal_31[0], &cLocal_25) && ANIMSCENE::_0x1F0E401031E20146(uLocal_31[0], &cLocal_25))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uLocal_31[0]) >= 0.9f)
						{
							__LIB_14__::func_593(&(Local_87[0 /*4*/]), 21, 1);
						}
					}
				}
				break;
			case 21:
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_63.f_1[0], true);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_44);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "discoverable_monk_flee", 0, 9226, -1, 0, 0, -1);
				TASK::TASK_SMART_FLEE_PED(0, Global_35, 350f, -1, 0, 1077936128 /* Float: 3f */, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_44);
				TASK::TASK_PERFORM_SEQUENCE(Local_63.f_1[0], iLocal_44);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_44);
				__LIB_14__::func_593(&(Local_87[0 /*4*/]), 22, 1);
				break;
			case 22:
				if (!__LIB_0__::func_48(Local_63.f_1[0], Global_35, 90f, 1))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_63.f_1[0], false);
					PED::SET_PED_KEEP_TASK(Local_63.f_1[0], true);
					__LIB_0__::func_490(&(Local_63.f_1[0]), 1);
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 23, 1);
				}
				else if (__LIB_0__::func_265(&(Local_87[0 /*4*/].f_1)) >= 90f)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_63.f_1[0], false);
					PED::SET_PED_KEEP_TASK(Local_63.f_1[0], true);
					__LIB_0__::func_490(&(Local_63.f_1[0]), 1);
					__LIB_14__::func_593(&(Local_87[0 /*4*/]), 23, 1);
				}
				break;
			case 23:
				break;
		}
	}
}

void func_64(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_63.f_1[iVar0]))
		{
			if (Local_87[iVar0 /*4*/] > 0 && Local_87[iVar0 /*4*/] < 23)
			{
			}
			switch (Local_87[iVar0 /*4*/])
			{
				case 0:
					if (__LIB_0__::func_139(iLocal_48[0]))
					{
						if (__LIB_0__::func_572(iLocal_48[0], 0))
						{
							__LIB_1__::func_221(iLocal_48[0], 0, 1);
							__LIB_1__::func_382(iLocal_48[0], 0, 1);
						}
					}
					if (*uParam0 == -654238687 || *uParam0 == -35775921)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_63.f_1[iVar0], false);
						if (VOLUME::_DOES_VOLUME_EXIST(iLocal_42))
						{
							TASK::TASK_WANDER_IN_VOLUME(Local_63.f_1[iVar0], iLocal_42, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
						}
						__LIB_14__::func_593(&(Local_87[iVar0 /*4*/]), 13, 1);
					}
					else if (*uParam0 == -2008558277)
					{
						__LIB_14__::func_593(&(Local_87[iVar0 /*4*/]), 13, 1);
					}
					else
					{
						__LIB_14__::func_593(&(Local_87[iVar0 /*4*/]), 23, 1);
					}
					break;
				case 1:
					if (__LIB_0__::func_266(Global_35, __LIB_7__::func_494(uParam0, 0), 90f, 1, 1))
					{
						if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_45))
						{
							iLocal_45 = func_186(func_156(uParam0, 0), func_91(uParam0, 0), func_185(uParam0, 0), 0, 0, 0);
						}
						else
						{
							iLocal_14[7] = 1;
							PED::_0xF1C03A5352243A30(Local_63.f_1[iVar0]);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_63.f_1[iVar0], false);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_44);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_91(uParam0, 0), 1f, 20000, 0.25f, 0, 40000f);
							TASK::_TASK_USE_SCENARIO_POINT(0, iLocal_45, func_187(uParam0), -1, true, false, func_156(uParam0, 0), false, -1f, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_44);
							TASK::TASK_PERFORM_SEQUENCE(Local_63.f_1[iVar0], iLocal_44);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_44);
							__LIB_14__::func_593(&(Local_87[iVar0 /*4*/]), 2, 1);
						}
					}
					break;
				case 2:
					break;
				case 15:
					iLocal_14[1] = 1;
					__LIB_14__::func_593(&(Local_87[iVar0 /*4*/]), 13, 1);
					break;
				case 13:
					if ((*uParam0 == -654238687 || *uParam0 == -2008558277) || *uParam0 == -35775921)
					{
						if (*uParam0 == -2008558277)
						{
							if (!PED::IS_PED_USING_ANY_SCENARIO(Local_63.f_1[iVar0]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_63.f_1[iVar0], true);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_44);
								TASK::TASK_FLY_AWAY(0, PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()));
								TASK::CLOSE_SEQUENCE_TASK(iLocal_44);
								TASK::TASK_PERFORM_SEQUENCE(Local_63.f_1[iVar0], iLocal_44);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_44);
								FLOCK::_0xFDB008B3BCF5992F(Local_63.f_1[iVar0], 30f, 30f);
								FLOCK::_0x2DF3D457D86F8E57(Local_63.f_1[iVar0], 100f);
								if (!iLocal_14[2])
								{
									iLocal_14[2] = 1;
									if (iVar0 == 5 || iVar0 == 6)
									{
										iLocal_36 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_ALARMING_NEW"), func_188(0), -1f, -1f, -1f, -1f, -1f, 3, 1);
									}
									else
									{
										iLocal_36 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_ALARMING_NEW"), func_188(1), -1f, -1f, -1f, -1f, -1f, 3, 1);
									}
									if (ENTITY::DOES_ENTITY_EXIST(PED::GET_MOUNT(Global_35)) && !ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(Global_35)))
									{
										PED::_0x23BDE06596A22CEC(PED::GET_MOUNT(Global_35), 1, 0.15f, Local_63.f_1[iVar0]);
									}
									PED::_0x23BDE06596A22CEC(Global_35, 1, 1f, Local_63.f_1[iVar0]);
								}
								__LIB_14__::func_593(&(Local_87[iVar0 /*4*/]), 20, 1);
							}
						}
						else if (*uParam0 == -654238687)
						{
							if (VOLUME::_DOES_VOLUME_EXIST(iLocal_41) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_41, true, 0))
							{
								__LIB_7__::func_553(&Local_63, 1, iVar0);
							}
						}
					}
					else if (!__LIB_7__::func_569(uParam0) || !__LIB_7__::func_575(uParam0))
					{
						__LIB_14__::func_593(&(Local_87[iVar0 /*4*/]), 19, 1);
					}
					else if (func_175(Local_63.f_1[iVar0], 0, &uLocal_128, &uLocal_156, 0, 0))
					{
						__LIB_14__::func_593(&(Local_87[iVar0 /*4*/]), 17, 1);
					}
					break;
				case 17:
					iLocal_14[2] = 1;
					__LIB_1__::func_748(&(iLocal_48[0]), 1, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_63.f_1[iVar0], true);
					TASK::TASK_COWER(Local_63.f_1[iVar0], -1, 0, 0);
					__LIB_14__::func_593(&(Local_87[iVar0 /*4*/]), 19, 1);
					break;
				case 19:
					if (__LIB_0__::func_139(iLocal_48[0]))
					{
						__LIB_1__::func_748(&(iLocal_48[0]), 1, 1);
					}
					if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_41, true, 0) && !__LIB_0__::func_266(Global_35, func_91(uParam0, 0), 1.5f, 1, 1))
					{
						iLocal_14[4] = 1;
						iLocal_14[7] = 1;
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_63.f_1[iVar0], true);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_63.f_1[iVar0], __LIB_7__::func_494(uParam0, 0), 1.5f, 20000, 0.25f, 0, 40000f);
						__LIB_14__::func_593(&(Local_87[iVar0 /*4*/]), 20, 1);
					}
					break;
				case 20:
					if (*uParam0 == -2008558277)
					{
						if (!__LIB_0__::func_266(Local_63.f_1[iVar0], __LIB_7__::func_494(uParam0, 0), 90f, 1, 1))
						{
							__LIB_0__::func_490(&(Local_63.f_1[iVar0]), 1);
							__LIB_14__::func_593(&(Local_87[iVar0 /*4*/]), 23, 1);
						}
					}
					else if (__LIB_0__::func_265(&(Local_87[iVar0 /*4*/].f_1)) >= 10f)
					{
						iLocal_14[6] = 1;
						__LIB_0__::func_490(&(Local_63.f_1[iVar0]), 0);
						__LIB_14__::func_593(&(Local_87[iVar0 /*4*/]), 23, 1);
					}
					else if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_63.f_1[iVar0])))
					{
						__LIB_0__::func_490(&(Local_63.f_1[iVar0]), 0);
						__LIB_14__::func_593(&(Local_87[iVar0 /*4*/]), 23, 1);
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_63.f_1[iVar0], 713668775, true) == 8)
					{
						iLocal_14[6] = 1;
						__LIB_0__::func_490(&(Local_63.f_1[iVar0]), 0);
						__LIB_14__::func_593(&(Local_87[iVar0 /*4*/]), 23, 1);
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_63.f_1[iVar0], 713668775, true) == 1)
					{
					}
					break;
				case 22:
					if (!__LIB_0__::func_266(Local_63.f_1[iVar0], __LIB_7__::func_494(uParam0, 1), 90f, 1, 1))
					{
						if (!__LIB_1__::func_472(Local_63.f_1[iVar0], 110f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
						{
							__LIB_0__::func_490(&(Local_63.f_1[iVar0]), 0);
							__LIB_14__::func_593(&(Local_87[iVar0 /*4*/]), 23, 1);
						}
					}
					break;
				case 23:
					if (!*uParam0 == -2008558277)
					{
						if (!iLocal_14[5])
						{
							iLocal_14[5] = 1;
						}
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_65(var uParam0)
{
	if (iLocal_55 > 0 && iLocal_55 < 11)
	{
	}
	switch (iLocal_55)
	{
		case 0:
			__LIB_7__::func_531(&iLocal_55, 11, 1);
			break;
		case 1:
			break;
		case 11:
			break;
	}
}

void func_67(var uParam0)
{
	if (!__LIB_7__::func_530(*uParam0))
	{
		__LIB_7__::func_556(*uParam0);
		func_70(uParam0);
	}
}

void func_68(var uParam0)
{
	int iVar0;
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_41))
	{
		__LIB_0__::func_484(&uLocal_46, iLocal_41, 0);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_45))
	{
		TASK::_DELETE_SCENARIO_POINT(iLocal_45);
	}
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		__LIB_1__::func_748(&(iLocal_48[iVar0]), 1, 1);
		iVar0++;
	}
	if (CAM::DOES_CAM_EXIST(iLocal_47))
	{
		CAM::DESTROY_CAM(iLocal_47, false);
	}
	if (*uParam0 == -415839138)
	{
		if (__LIB_0__::func_481(1))
		{
			__LIB_0__::func_82(1, 0, 0);
		}
		if (GRAPHICS::_IS_TRACKED_POINT_VALID(iLocal_39))
		{
			GRAPHICS::DESTROY_TRACKED_POINT(iLocal_39);
		}
		func_197();
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_31[0]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(uLocal_31[0]);
		}
	}
	if (*uParam0 == -654238687)
	{
		__LIB_7__::func_570(&Local_63, 1);
	}
}

void func_70(var uParam0)
{
	if (func_92() != -1)
	{
		return;
	}
	if (__LIB_7__::func_471(*uParam0) != 0)
	{
		if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(__LIB_7__::func_471(*uParam0)))
		{
			MAP::_0xD8C7162AB2E2AF45(__LIB_7__::func_471(*uParam0));
		}
		__LIB_7__::func_498(*uParam0, 8);
	}
}

int func_83(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
	if (!func_202(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_203(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	__LIB_0__::func_912(iParam0, bParam2);
	iVar2 = 0;
	if (func_205(iParam0, 0, 0) == 0)
	{
		if (func_206(iParam0))
		{
			iVar5 = __LIB_0__::func_913(iParam0);
			iVar6 = __LIB_0__::func_352(iVar5);
			iVar7 = func_209(iVar6) + 1;
			func_210(iVar5);
			if (func_211(38))
			{
				func_212(483, 0);
			}
			else
			{
				func_212(482, 0);
			}
			if (iVar7 == __LIB_0__::func_353(iVar6))
			{
				func_83(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (__LIB_0__::func_28() && func_215(4))
				{
					if (__LIB_0__::func_28() && (func_216(38) || func_211(38)))
					{
						func_218(38, __LIB_0__::func_354(iVar6), 0, 0, func_217(), 0, -1, 0);
						__LIB_0__::func_355(2);
					}
					else
					{
						func_218(38, __LIB_0__::func_354(iVar6), 0, 0, func_217(), 0, -1, 0);
						__LIB_0__::func_355(1);
					}
				}
			}
			else if (__LIB_0__::func_28() && func_215(4))
			{
				if (__LIB_0__::func_28() && (func_216(38) || func_211(38)))
				{
					func_218(38, 0, 0, 0, func_217(), 0, -1, 0);
					__LIB_0__::func_355(2);
				}
				else
				{
					func_218(38, 0, 0, 0, func_217(), 0, -1, 0);
					__LIB_0__::func_355(1);
				}
			}
			if (__LIB_0__::func_28() && func_215(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (__LIB_0__::func_28() && (func_216(38) || func_211(38)))
					{
						func_220(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_220(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
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
		func_225(28);
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
					if (func_92() == -1)
					{
						__LIB_0__::func_915(iVar1);
					}
					if (func_230(0) && func_231(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_232(iParam0, iVar0, iParam5);
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
					if (func_92() == -1)
					{
						__LIB_0__::func_915(iParam0);
					}
					if (func_230(0) && func_231(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_232(iVar1, iVar0, iParam5);
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
			if (!func_233(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("AMMO") && __LIB_0__::func_258(iParam0))
		{
			if (!func_235(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 866047851))
		{
			func_236(iParam0);
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
					func_212(498, 0);
				}
			}
			if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
			{
				func_240(iParam0);
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
			func_212(484, 0);
		}
		else if (__LIB_0__::func_192(iParam0, 1147021565) && __LIB_0__::func_192(iParam0, -524514947))
		{
		}
		else if (__LIB_0__::func_192(iParam0, 554195525))
		{
		}
		else if (__LIB_0__::func_192(iParam0, 589988438))
		{
			if (func_241())
			{
				func_242(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (__LIB_0__::func_192(iParam0, 787083290) && __LIB_0__::func_192(iParam0, 949916894))
		{
			func_243(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1718133314))
		{
			func_244(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1738650224))
		{
			func_245(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, 949916894))
		{
			func_246(iParam0);
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
			func_248(iParam0, iParam1);
			func_249(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			func_250(iParam0, 0, 0, 0);
		}
		else if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
		{
			func_240(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1921346699))
		{
			if (func_92() != -1)
			{
				return 0;
			}
			func_251(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_252(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_83(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_252(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_83(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_252(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_83(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_252(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_83(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_252(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_83(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_252(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_83(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (__LIB_0__::func_192(iParam0, -839724752) && __LIB_0__::func_774(iParam0, 4))
		{
			if (!func_211(42))
			{
				func_253(iParam0);
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
				func_83(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_225(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					func_255(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (func_256(&iVar9, 0))
				{
					func_231(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (func_92() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					func_255(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				func_212(415, 0);
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
				func_271(242, __LIB_0__::func_776(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_271(240, __LIB_0__::func_776(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_271(241, __LIB_0__::func_776(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_272(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_272(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_272(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_272(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_272(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_272(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_212(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_212(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				func_212(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_83(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_83(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (__LIB_0__::func_293(1))
				{
					func_212(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_212(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_92() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_212(496, 0);
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
		if (!func_276(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_230(0))
		{
			return 1;
		}
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
		{
			func_277(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			func_278(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_230(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_83(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			__LIB_1__::func_451(iVar2, 0);
		}
	}
	Var35 = { func_280(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	func_281(iParam0);
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

void func_86(var uParam0)
{
	__LIB_7__::func_566(&Local_63);
	__LIB_7__::func_521(&Local_157);
	__LIB_18__::func_43(uParam0, &uLocal_31);
	if (*uParam0 == -415839138)
	{
		TASK::REMOVE_WAYPOINT_RECORDING("discoverable_monk_flee");
		__LIB_18__::func_48(uParam0);
	}
}

Vector3 func_90(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -780455182:
			return __LIB_7__::func_467(uParam0, 1);
		case -1614148516:
			return __LIB_7__::func_467(uParam0, 0);
		case 2134589549:
			return __LIB_7__::func_467(uParam0, 0);
		case 373034311:
			return __LIB_7__::func_467(uParam0, 0);
		case -1887999095:
		case -1636964661:
		case -1287911066:
		case -415839138:
		case 429544447:
		case 1519228573:
		case 1982045664:
			return __LIB_7__::func_494(uParam0, 0);
		case -1300082860:
			return 365.725f, -15.4104f, 110.5399f;
		case -1958832660:
			return 1591.863f, -1845.292f, 65.196f;
		case 247563739:
			return 2450.049f, 2104.19f, 173.9434f;
		case 1861313914:
			return 894.6589f, -1969.363f, 44.554f;
		case 1734766691:
			return -270.2353f, 114.9477f, 62.751f;
		case 58958195:
			return -2565.258f, 756.6277f, 153.3524f;
		case 308500632:
			return -2664.789f, 690.7282f, 185.3162f;
		case -739986731:
			return -2904.952f, -254.2731f, 186.965f;
		case 1986618633:
			return -4688.022f, -3419.115f, 17.2107f;
		case -986176781:
			return -2774.109f, -431.3145f, 174.3467f;
		case -232974724:
			return 189.6525f, -414.4084f, 87.8956f;
		case -1053108445:
			return -4346.388f, -2604.249f, -1.1693f;
		case 1673499939:
			return 2476.001f, 1997.824f, 167.269f;
		case -709811179:
			return 2291.568f, 2080.932f, 200.7657f;
		case -979575591:
			return -2937.443f, -138.5504f, 199.3164f;
		case -1609238411:
			return 3220.522f, 1463.278f, 52.9448f;
		case 921081956:
			return 2417.172f, -738.7664f, 42.3038f;
		case -148407339:
			return -1732.145f, 2191.086f, 293.2867f;
		case -1109016944:
			return 1733.116f, -424.945f, 48.4327f;
		case -1646022773:
			return 2148.987f, 1918.443f, 194.4452f;
		case 1284679164:
			return 2782.746f, 536.9514f, 72.1612f;
		case -1505275983:
			return 947.541f, 238.4814f, 127.5118f;
		case -1761189332:
			return 703.7369f, 427.9747f, 108.3372f;
		case -2009137002:
			return 1260.331f, 1296.422f, 217.8313f;
		case -1787770845:
			return -1915.618f, -30.6525f, 287.4662f;
		case -161804536:
			return 2388.642f, 1690.187f, 95.5056f;
		case -1891628345:
			return -2694.149f, -1499.7f, 150.6036f;
		case -1960242214:
			return 749.9653f, 1825.082f, 240.1131f;
		case 1034793488:
			return 1705.885f, -1006.939f, 43.8407f;
		case -849582265:
			return -2588.29f, -93.565f, 167.61f;
		case 657666087:
			return -1749.065f, -1624.292f, 90.1441f;
		case -607940493:
			return 2698.995f, 410.8617f, 77.4735f;
		case 2000209669:
			if (iParam1 == 11)
			{
				return __LIB_7__::func_460(uParam0, 11);
			}
			else
			{
				return __LIB_7__::func_460(uParam0, 7);
			}
			break;
		case -1272862985:
			switch (iParam1)
			{
				case 0:
					return 2135.355f, 1069.851f, 122.7836f;
				case 1:
					return 2150.689f, 1124.094f, 130.4564f;
				case 2:
					return 2210.914f, 1134.496f, 141.0999f;
				case 3:
					return 2251.706f, 1198.574f, 121.7253f;
				default:
					break;
			}
			Jump @2418; //curOff = 1102
			switch (iParam1)
			{
				case 0:
					return -2693.879f, -402.3976f, 148.1729f;
				case 1:
					return -2687.993f, -402.3363f, 148.3894f;
				case 2:
					return -2686.917f, -410.486f, 148.4376f;
				case 3:
					return -2694.168f, -412.4018f, 148.8531f;
				case 4:
					return -2697.285f, -408.3287f, 149.3549f;
				default:
					break;
			}
			Jump @2418; //curOff = 1236
			switch (iParam1)
			{
				case 0:
					return 1478.761f, -1831.449f, 52.0191f;
				case 1:
					return 1487.726f, -1822.523f, 53.4034f;
				case 2:
					return 1501.093f, -1813.105f, 53.2804f;
				case 3:
					return 1520.822f, -1805.398f, 52.6965f;
				default:
					break;
			}
			Jump @2418; //curOff = 1346
			switch (iParam1)
			{
				case 0:
					return -941.5482f, 1011.45f, 198.416f;
				case 1:
					return -490.2726f, 1355.536f, 205.7345f;
				case 2:
					return 299.3675f, 1795.301f, 197.5344f;
				case 3:
					return 1884.704f, 1927.334f, 249.5903f;
				case 4:
					return 2549.506f, 1624.281f, 93.5729f;
				case 5:
					return 2489.881f, 1375.156f, 107.1609f;
				case 6:
					return 2657.062f, 1286.715f, 117.8777f;
				case 7:
					return 2577.385f, 1161.844f, 158.058f;
				case 8:
					return 2342.925f, 844.4003f, 82.3675f;
				case 9:
					return 1698.323f, 719.6797f, 125.0664f;
				case 10:
					return 1986.145f, -208.0823f, 51.4904f;
				case 11:
					return 1263.596f, 528.7397f, 88.8471f;
				case 12:
					return 1626.372f, -0.4718f, 87.7166f;
				case 13:
					return 1562.581f, -219.7309f, 84.4919f;
				case 14:
					return 111.1142f, 639.3316f, 125.9073f;
				case 15:
					return -20.3564f, 217.8298f, 109.194f;
				case 16:
					return 714.7566f, 22.1708f, 154.0224f;
				case 17:
					return -547.9435f, 557.9953f, 104.2689f;
				case 18:
					return -540.1378f, 256.6357f, 44.7136f;
				case 19:
					return -525.3924f, -277.1231f, 62.9066f;
				default:
					break;
			}
			Jump @2418; //curOff = 1840
			return 794.4265f, 1777.108f, 281.0706f;
			if (iParam1 == 0)
			{
				return 794.4265f, 1777.108f, 281.0706f;
			}
			else if (iParam1 == 1)
			{
				return -1277.741f, 2895.727f, 386.2982f;
			}
			else if (iParam1 == 2)
			{
				return 2577.433f, -627.2448f, 42.97695f;
			}
			else if (iParam1 == 3)
			{
				return 2579.389f, -627.8698f, 42.96334f;
			}
			else if (iParam1 == 4)
			{
				return 672.4651f, -974.1768f, 54.4574f;
			}
			else if (iParam1 == 5)
			{
				return -1307.091f, 2468.892f, 309.8042f;
			}
			else if (iParam1 == 6)
			{
				return 1735.903f, -1893.929f, 45.189f;
			}
			else if (iParam1 == 7)
			{
				return 2157.916f, 795.1056f, 156.5394f;
			}
			else if (iParam1 == 8)
			{
				return 514.147f, 1932.534f, 200.2069f;
			}
			Jump @2418; //curOff = 2102
			switch (iParam1)
			{
				case 0:
					return 2826.679f, -1323.043f, 46.43373f;
				case 1:
					return 2736.732f, -1339.335f, 46.65415f;
				case 2:
					return 2698.488f, -1306.194f, 49.48277f;
				case 3:
					return 2773.848f, -1182.319f, 48.53596f;
				case 4:
					return 2820.003f, -1230.709f, 47.52145f;
				default:
					break;
			}
			Jump @2418; //curOff = 2236
			switch (iParam1)
			{
				case 0:
					return -834.465f, -1365.791f, 48.5643f;
				case 1:
					return -781.2938f, -1320.024f, 44.8353f;
				case 2:
					return -729.9185f, -1219.616f, 41.4298f;
				case 3:
					return -773.6366f, -1354.466f, 44.1805f;
				case 4:
					return -756.8423f, -1276.124f, 49.337f;
				case 5:
					return -816.6586f, -1310.757f, 43.2499f;
				default:
					break;
			}
			Jump @2418; //curOff = 2394
			return -353.4487f, -133.7923f, 46.4927f;
			return 0f, 0f, 0f;
		}
Vector3 func_91(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -1859413640:
			return 2195.23f, -554.23f, 40.86f;
		case -1481450947:
			return 1268.257f, -387.328f, 88.459f;
		case -1427565340:
			return 2255.135f, -754.127f, 41.793f;
		case -1887999095:
			return 1772.964f, -1359.736f, 44.18f;
		case 2000209669:
			return 830.53f, 1923.9f, 258.33f;
		case -161804536:
			return 2385.593f, 1696.987f, 94.94f;
		case 733338689:
			return 2388.11f, 1688.02f, 94.66f;
		case 2135153015:
			return -161.88f, 1734.6f, 169.73f;
		case 2072029413:
			return 808.47f, 2300.12f, 250.82f;
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return 1182.68f, 2036.35f, 322.98f;
				case 1:
					return 1227.191f, 2007.389f, 319.3389f;
			}
			break;
		case 513110082:
			switch (iParam1)
			{
				case 0:
					return -2532.075f, 1173.143f, 224.93f;
				case 1:
					return 3028.165f, 1781.019f, 83.127f;
				case 2:
					return -4394.824f, -2159.366f, 47.3844f;
				default:
					break;
			}
			Jump @652; //curOff = 402
			switch (iParam1)
			{
				case 0:
					return 2783.187f, 532.9774f, 70.28662f;
				case 1:
					return 2783.885f, 534.9501f, 70.2896f;
				case 2:
					return 2784.209f, 532.77f, 70.28524f;
				case 3:
					return 2782.702f, 535.7864f, 70.28931f;
				default:
					break;
			}
			Jump @652; //curOff = 512
			switch (iParam1)
			{
				case 0:
					return -1518.81f, 533.46f, 101.45f;
				case 1:
					return 1251.4f, 1165.7f, 149.09f;
				case 2:
					return -150.285f, 1498.717f, 114.935f;
				case 3:
					return 2939.35f, 1422.56f, 44.58f;
				case 4:
					return 1973.787f, 1192.337f, 170.517f;
				default:
					break;
			}
			return 0f, 0f, 0f;
		}
int func_92()
{
	return Global_1572887.f_12;
}

bool func_111()
{
	if (func_92() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

bool func_116()
{
	int iVar0;
	if (!func_252(joaat("DOCUMENT_PLAYER_JOURNAL"), 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	if (!__LIB_7__::func_481(16))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
	{
		return false;
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) || __LIB_0__::func_491(Global_35, 1369124074))
	{
		return false;
	}
	if ((((((PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_X")) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_Y"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_A"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_B"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_LT"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_RT"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_ACTION")))
	{
		return false;
	}
	iVar0 = joaat("DOCUMENT_PLAYER_JOURNAL");
	if (INVENTORY::_0x3D10D7179D7034AF(func_307(0), iVar0, 0))
	{
		return false;
	}
	Global_36620 = MISC::GET_GAME_TIMER() + 1000;
	__LIB_7__::func_451();
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iVar0, 1928812891, 1, 0, -1082130432 /* Float: -1f */);
	return true;
}

void func_125(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> Var8;
	iVar0 = __LIB_0__::func_786();
	if (iParam3 == joaat("HONOR_EVENT_AMBIENT_KILL") || iParam3 == joaat("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = func_310(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(iParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (__LIB_0__::func_293(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_15())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"))
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = __LIB_0__::func_309(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = __LIB_0__::func_786();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == joaat("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = __LIB_0__::func_416(iVar1);
		__LIB_1__::func_454(__LIB_0__::func_417(), 0, 4000);
		__LIB_0__::func_935(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		__LIB_1__::func_427(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > __LIB_0__::func_348(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = __LIB_0__::func_418(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < __LIB_0__::func_348(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = __LIB_0__::func_418(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { __LIB_0__::func_14(joaat("HONOR_CURRENT")) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		__LIB_0__::func_896(10, 1);
	}
}

bool func_136(int iParam0)
{
	if (func_92() != -1)
	{
		return false;
	}
	if (!__LIB_0__::func_5(iParam0))
	{
		return false;
	}
	return __LIB_1__::func_44(Global_1347702[iParam0 /*49*/].f_15);
}

void func_137(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_41))
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_1))
		{
			vVar0 = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_1, true) };
		}
		if (__LIB_0__::func_86(vVar0))
		{
		}
		vVar6 = { 2f, 2f, 3f };
		vVar3 = { 0f, 0f, 0f };
		if ((*uParam0 == -654238687 || *uParam0 == -2008558277) || *uParam0 == -415839138)
		{
			if (*uParam0 == -654238687)
			{
				vVar0 = { -1412.403f, -2671.542f, 42.06424f };
				vVar3 = { 0f, 0f, 24.67129f };
				vVar6 = { 3.836484f, 5.953217f, 4.016988f };
			}
			else if (*uParam0 == -2008558277)
			{
				vVar0 = { -5424.684f, -3654.149f, -20.72006f };
				vVar3 = { 0f, 0f, 0f };
				vVar6 = { 24.41619f, 14.68522f, 8.667062f };
			}
			else if (*uParam0 == -415839138)
			{
				vVar0 = { 1025.944f, 1574.258f, 361.924f };
				vVar3 = { 0f, 0f, 0f };
				vVar6 = { 2.515867f, 3f, 3.65f };
			}
			iLocal_41 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, func_322(uParam0));
		}
		else
		{
			if (*uParam0 == -35775921)
			{
				vVar6.x = (10f * 2f);
				vVar6.f_1 = (10f * 2f);
				vVar6.f_2 = (10f * 3f);
			}
			iLocal_41 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, func_322(uParam0));
		}
	}
	if ((*uParam0 == -654238687 || *uParam0 == 1861313914) || *uParam0 == -35775921)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_42))
		{
			if (*uParam0 == -654238687)
			{
				vVar6 = { 1.267693f, 1.436306f, 4.016988f };
				iLocal_42 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, "DISC_VOL_CABIN_WANDER");
			}
			else if (*uParam0 == 1861313914)
			{
				if (__LIB_1__::func_185(59))
				{
					vVar0 = { 895.6285f, -1968.128f, 43.71555f };
					vVar3 = { 0f, 0f, -37.38475f };
					vVar6 = { 1.309918f, 1.509376f, 4.169786f };
				}
				else
				{
					vVar0 = { 895.55f, -1968.068f, 43.71555f };
					vVar3 = { 0f, 0f, -37.38475f };
					vVar6 = { 3f, 1.509376f, 4.169786f };
				}
				iLocal_42 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, "DISC_VOL_BRAITH_ENTER");
			}
			else if (*uParam0 == -35775921)
			{
				vVar0 = { 1158.427f, 696.2158f, 96.65366f };
				vVar3 = { 0f, 0f, 0f };
				vVar6 = { 98.8934f, 94.77499f, 52.6483f };
				iLocal_42 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, "DISC_VOL_SHEEP_WANDER");
			}
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_43) && *uParam0 == 1861313914)
		{
			vVar0 = { 895.55f, -1968.068f, 43.71555f };
			vVar3 = { 0f, 0f, 0f };
			vVar6 = { 3f, 3f, 4f };
			iLocal_43 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, "DISC_VOL_BRAITH_AVOID");
			PATHFIND::_0x19C7567D2F2287D6(iLocal_43, 15);
			POPULATION::_0xB56D41A694E42E86(iLocal_43, 2238463, 0, 0, -1, -1, 10);
			PED::_0xE9B168527B337BF0(Global_1935630.f_40, iLocal_43);
			POPULATION::_0xF74E134F40192884(Global_1935630.f_40, 1);
		}
	}
}

void func_138(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		Local_63.f_12[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		Local_157.f_6[iVar0] = 0;
		iVar0++;
	}
	switch (*uParam0)
	{
		case -654238687:
			Local_63.f_12[0] = joaat("A_C_RAT_01");
			Local_63.f_12[1] = joaat("A_C_RAT_01");
			Local_63.f_12[2] = joaat("A_C_RAT_01");
			Local_63.f_12[3] = joaat("A_C_RAT_01");
			Local_63.f_12[4] = joaat("A_C_RAT_01");
			Local_63.f_12[5] = joaat("A_C_RAT_01");
			Local_63.f_12[6] = joaat("A_C_RAT_01");
			Local_63.f_12[7] = joaat("A_C_RAT_01");
			Local_63.f_12[8] = joaat("A_C_RAT_01");
			Local_63.f_12[9] = joaat("A_C_RAT_01");
			Local_157.f_6[0] = joaat("S_FERTILITYSTATUE01X");
			break;
		case -415839138:
			Local_63.f_12[0] = joaat("CS_MEDITATINGMONK");
			break;
		case -2008558277:
			Local_63.f_12[0] = joaat("A_C_BAT_01");
			Local_63.f_12[1] = joaat("A_C_BAT_01");
			Local_63.f_12[2] = joaat("A_C_BAT_01");
			Local_63.f_12[3] = joaat("A_C_BAT_01");
			Local_63.f_12[4] = joaat("A_C_BAT_01");
			Local_63.f_12[5] = joaat("A_C_BAT_01");
			Local_63.f_12[6] = joaat("A_C_BAT_01");
			break;
		case 1861313914:
			Local_63.f_12[0] = joaat("U_F_Y_BRAITHWAITESSECRET_01");
			break;
		case -35775921:
			Local_63.f_12[0] = joaat("A_C_SHEEP_01");
			Local_157.f_6[0] = joaat("S_INV_RING02X");
			break;
		default:
			break;
	}
}

void func_139(var uParam0)
{
	if ((*uParam0 == -654238687 || *uParam0 == -2008558277) || *uParam0 == -35775921)
	{
		__LIB_18__::func_49(&uLocal_31);
	}
}

int func_152(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case 1861313914:
			switch (iParam1)
			{
				case 0:
					return joaat("META_OUTFIT_DEFAULT");
				case 1:
					return 1689938120;
				default:
					break;
			}
			break;
		case -35775921:
			switch (iParam1)
			{
				case 0:
					return -314862125;
				default:
					break;
			}
			break;
		case -415839138:
			switch (iParam1)
			{
				case 0:
					return joaat("META_OUTFIT_DEFAULT");
				default:
					break;
			}
			break;
		default:
			break;
	}
	return joaat("META_OUTFIT_DEFAULT");
}

int func_156(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -1859413640:
			return joaat("RANSACK_VOLUME_NARROW_0M5_0M5_2M0");
		case -2008558277:
			return joaat("WORLD_ANIMAL_BAT_HANGING");
		case -1481450947:
			return joaat("RANSACK_REACH_OVER_VOLUME_NARROW_0M5_0M5_2M0");
		case -1427565340:
			return joaat("RANSACK_REACH_OVER_VOLUME_0M8_0M5_2M0");
		case -1887999095:
			return joaat("WORLD_PLAYER_INSPECT_LETTER_80CM_PAPER_W15_1_H24_FOLDVERTICAL_P_CS_LETTER03X");
		case 2000209669:
			return joaat("RANSACK_STRANGE_STATUES_STASH");
		case -161804536:
			return joaat("RANSACK_VOLUME_0M8_0M5_2M0");
		case 733338689:
			return joaat("WORLD_PLAYER_PICKUP_WEAPON_MELEE_HATCHET_VIKING");
		case 2072029413:
			return joaat("WORLD_PLAYER_PICKUP_WEAPON_THROWN_TOMAHAWK_ANCIENT");
		case 247563739:
			return joaat("PROP_PLAYER_LNS_FLOOR_STASH");
		case -35775921:
			return joaat("RANSACK_REACH_OVER_CENTERED_GROUND_PICKUP");
		case 2135153015:
			return joaat("RANSACK_REACH_OVER_GENERIC_LETTER_PROMPT_0M5_0M5_2M0");
		case 513110082:
			return joaat("RANSACK_ATTACHED_CHEST_MEDIUM_OPEN_ONLY");
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_PLAYER_DRINK_WITCHES_BREW");
				case 1:
					return joaat("WORLD_PLAYER_SLEEP_GROUND");
			}
			break;
		case 1284679164:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					return joaat("WORLD_PLAYER_INSPECT_LETTER_80CM_PAPER_W15_1_H24_FOLDVERTICAL_P_CS_LETTER03X");
				default:
					break;
			}
			break;
		case 870958936:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_PLAYER_PICKUP_WEAPON_MELEE_HATCHET_DOUBLE_BIT");
				case 1:
					return joaat("WORLD_PLAYER_PICKUP_WEAPON_MELEE_HATCHET_HEWING");
				case 2:
					return joaat("WORLD_PLAYER_PICKUP_WEAPON_MELEE_HATCHET_HUNTER");
				case 3:
					return joaat("WORLD_PLAYER_PICKUP_WEAPON_MELEE_HATCHET_DOUBLE_BIT_RUSTED");
				case 4:
					return joaat("WORLD_PLAYER_PICKUP_WEAPON_MELEE_HATCHET_HUNTER_RUSTED");
				default:
					break;
			}
			return 0;
		}
void func_157(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, bool bParam7, bool bParam8, char* sParam9, float fParam10)
{
	TASK::TASK_START_SCENARIO_AT_POSITION(iParam0, iParam1, vParam2, fParam5, iParam6, bParam7, bParam8, sParam9, fParam10, false);
}

void func_160(var uParam0)
{
	int iVar0;
	if (*uParam0 == 1861313914)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_41))
		{
			if (!__LIB_0__::func_139(iLocal_48[0]))
			{
				if (__LIB_1__::func_185(59))
				{
					iLocal_48[0] = __LIB_3__::func_905("PEEK_DOOR", joaat("INPUT_CONTEXT_LT"), iLocal_42, 2, 0, 0, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
				}
				else
				{
					iLocal_48[0] = __LIB_3__::func_905("PEEK_DOOR", joaat("INPUT_CONTEXT_LT"), iLocal_41, 2, 0, 0, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
				}
			}
		}
	}
	else if (*uParam0 == -415839138)
	{
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (!__LIB_0__::func_139(iLocal_48[iVar0]))
			{
				if (iVar0 == 0)
				{
					iLocal_48[iVar0] = __LIB_2__::func_403("INTERACT_GREET", joaat("INPUT_CONTEXT_X"), Global_35, 2, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					func_336(iLocal_48[iVar0], Local_63.f_1[0], func_335(uParam0));
				}
				else if (iVar0 == 1)
				{
					iLocal_48[iVar0] = __LIB_2__::func_403("INTERACT_INSULT", joaat("INPUT_CONTEXT_B"), Global_35, 2, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					func_336(iLocal_48[iVar0], Local_63.f_1[0], func_335(uParam0));
				}
			}
			iVar0++;
		}
	}
}

Vector3 func_162(var uParam0)
{
	switch (*uParam0)
	{
		case -35775921:
			return -0.04f, 0.189f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_163(var uParam0)
{
	switch (*uParam0)
	{
		case -35775921:
			return 0f, 0f, 90f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_164(var uParam0, var uParam1, int iParam2)
{
	if (!*uParam1 == -1)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam1, true, false))
			{
				func_337(uParam0, uParam1, iParam2);
				ANIMSCENE::START_ANIM_SCENE(*uParam1);
			}
		}
	}
}

void func_170(var uParam0, char* sParam1, bool bParam2)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
			{
				if (ANIMSCENE::_0x6F1F0B17109309DA(*uParam0, sParam1))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, sParam1, bParam2, false);
				}
			}
		}
	}
}

void func_174(var uParam0, char* sParam1)
{
	if (ANIMSCENE::_0xA9016536015DE29D(*uParam0, sParam1))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(*uParam0, sParam1);
	}
}

bool func_175(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_341(uParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_968(iParam0, uParam2))
			{
				*uParam3 = 128;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_973(iParam0, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (__LIB_2__::func_969(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_2__::func_970(iParam0, uParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_1__::func_395(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_875(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (__LIB_2__::func_971(iParam0, uParam2))
				{
					*uParam3 = 32;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
					{
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
				{
					*uParam3 = 2;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam3 = 2;
								__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
					if (*uParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_840(uParam2, iParam0) || (uParam2->f_9 > 0 && (__LIB_0__::func_485() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (__LIB_2__::func_833(uParam2, iParam0))
			{
				*uParam3 = 1024;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_867(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (__LIB_2__::func_878(iParam0, uParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_365(iParam0, uParam2))
				{
					*uParam3 = 32768;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, uParam2))
					{
						*uParam3 = 512;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_834(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(uParam2, iParam0))
			{
				*uParam3 = 1;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

Vector3 func_177(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case 1861313914:
			if (iParam1 == 0)
			{
				return 895.5682f, -1967.894f, 44.1192f;
			}
			else if (iParam1 == 1)
			{
				return 896.0502f, -1968.553f, 44.1192f;
			}
			else if (iParam1 == 2)
			{
				return 894.9471f, -1967.736f, 44.1192f;
			}
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_179(var uParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &iVar0, 0, 0))
	{
		if (*uParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0))
		{
			return true;
		}
	}
	return false;
}

float func_185(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -1859413640:
			return -162.606f;
		case -1481450947:
			return 0f;
		case -1427565340:
			return -49.4f;
		case -1887999095:
			return 40f;
		case 2000209669:
			return -13f;
		case -161804536:
			return -160f;
		case 733338689:
			return -5.848f;
		case 2072029413:
			return -155.926f;
		case 2135153015:
			return 3.97f;
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return 80.219f;
				case 1:
					return 103.5514f;
			}
			break;
		case 513110082:
			switch (iParam1)
			{
				case 0:
					return -173f;
				case 1:
					return 0f;
				case 2:
					return 0f;
				default:
					break;
			}
			Jump @410; //curOff = 250
			switch (iParam1)
			{
				case 0:
					return 108.929f;
				case 1:
					return -98.32f;
				case 2:
					return -76.119f;
				case 3:
					return -156.164f;
				default:
					break;
			}
			Jump @410; //curOff = 320
			switch (iParam1)
			{
				case 0:
					return -156f;
				case 1:
					return -156f;
				case 2:
					return 20f;
				case 3:
					return -142.537f;
				case 4:
					return 30f;
				default:
					break;
			}
			return 0f;
		}
int func_186(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	return TASK::CREATE_SCENARIO_POINT(iParam0, vParam1, fParam4, iParam5, iParam6, iParam7);
}

char* func_187(var uParam0)
{
	switch (*uParam0)
	{
		case -2008558277:
			return "WORLD_ANIMAL_BAT_HANGING";
		default:
			break;
	}
	return "";
}

Vector3 func_188(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -5433.8f, -3654.524f, -20.5f;
		case 1:
			return -5415.489f, -3653.351f, -20.5f;
		case 2:
			return -5415.223f, -3655.013f, -18.6317f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_197()
{
	func_174(&(uLocal_31[0]), "pbl_base_a");
	func_174(&(uLocal_31[0]), "pbl_base_b");
	func_174(&(uLocal_31[0]), "pbl_ba_lvl_1_l");
	func_174(&(uLocal_31[0]), "pbl_ba_lvl_1_r");
	func_174(&(uLocal_31[0]), "pbl_ba_lvl_2_l");
	func_174(&(uLocal_31[0]), "pbl_ba_lvl_2_r");
	func_174(&(uLocal_31[0]), "pbl_ba_lvl_3_l");
	func_174(&(uLocal_31[0]), "pbl_ba_lvl_3_r");
	func_174(&(uLocal_31[0]), "pbl_brkout_ba_on_l");
	func_174(&(uLocal_31[0]), "pbl_brkout_ba_on_r");
	func_174(&(uLocal_31[0]), "pbl_brkout_ba_on_n");
	func_174(&(uLocal_31[0]), "pbl_bb_lvl_1_l");
	func_174(&(uLocal_31[0]), "pbl_bb_lvl_1_r");
	func_174(&(uLocal_31[0]), "pbl_bb_lvl_2_l");
	func_174(&(uLocal_31[0]), "pbl_bb_lvl_2_r");
	func_174(&(uLocal_31[0]), "pbl_bb_lvl_3_l");
	func_174(&(uLocal_31[0]), "pbl_bb_lvl_3_r");
	func_174(&(uLocal_31[0]), "pbl_brkout_bb_on_l");
	func_174(&(uLocal_31[0]), "pbl_brkout_bb_on_r");
	func_174(&(uLocal_31[0]), "pbl_brkout_bb_on_n");
}

bool func_202(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_92() == -1)
	{
		if (__LIB_0__::func_787(iParam0) && func_381(iParam0))
		{
			func_382(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == joaat("CUSTOM_SATCHEL"))
	{
		bParam2 = true;
	}
	else if (iParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}
	return true;
}

bool func_203(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	*iParam1 = iParam2;
	__LIB_1__::func_111(iParam0, iParam1);
	Var0 = { func_384(iParam0, 0, 1) };
	iVar5 = func_385(iParam0, &Var0, 0, 0);
	iVar6 = func_386(iParam0, 0);
	if ((iVar5 > 1 && !func_387()) && (iVar6 + iParam2) >= iVar5)
	{
		if (__LIB_0__::func_192(iParam0, -2051813666))
		{
			func_212(583, 1);
		}
		else
		{
			func_212(582, 0);
		}
	}
	if (func_388(iParam0, &Var0, *iParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

int func_205(int iParam0, bool bParam1, bool bParam2)
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
		iVar1 = __LIB_0__::func_937(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_391(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_307(bParam2), iParam0, 0);
	return iVar2;
}

bool func_206(int iParam0)
{
	if (func_92() != -1)
	{
		return false;
	}
	return __LIB_0__::func_913(iParam0) != 0;
}

int func_209(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	while (iVar1 < __LIB_0__::func_419())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == __LIB_0__::func_352(iVar0))
		{
			if (func_252(__LIB_0__::func_420(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_210(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_394(48);
	func_37(0, -1);
}

bool func_211(int iParam0)
{
	if (func_92() != -1)
	{
		return false;
	}
	return __LIB_1__::func_25(Global_1347702[iParam0 /*49*/].f_15, 1);
}

void func_212(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	__LIB_0__::func_378(iParam0, &iVar0, &iVar1);
	if (!func_396(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	__LIB_0__::func_379(iVar0, iVar1);
}

bool func_215(int iParam0)
{
	if (func_92() != -1)
	{
		return false;
	}
	return __LIB_1__::func_25(Global_1835011[iParam0 /*74*/].f_1, 1);
}

bool func_216(int iParam0)
{
	if (func_92() != -1)
	{
		return false;
	}
	if (!__LIB_0__::func_5(iParam0))
	{
		return false;
	}
	return __LIB_1__::func_44(Global_1347702[iParam0 /*49*/].f_15);
}

int func_217()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_252(__LIB_0__::func_421(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_218(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (__LIB_0__::func_28() && (func_216(38) || func_211(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				iVar13 = joaat("COL_CC_INTRO");
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = joaat("COL_CC_INTRO_PRE");
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		case 39:
			if (__LIB_0__::func_28() && (func_216(39) || func_211(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = joaat("BLIP_RC_DEBORAH");
				iVar13 = joaat("COL_DB_INTRO");
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = joaat("COL_DB_INTRO_PRE");
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = joaat("DINO_BONES");
			break;
		case 43:
			if (iParam3 == joaat("EXOTIC_STAGE_01"))
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_02"))
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_03"))
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_04"))
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_05"))
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = __LIB_1__::func_34(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = joaat("COL_EX_INTRO");
			break;
		case 41:
			if (__LIB_0__::func_28() && (func_216(41) || func_211(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = joaat("BLIP_RC_JEREMY_GILL");
			iVar13 = joaat("COL_LF_INTRO");
			break;
		case 49:
			if (__LIB_0__::func_28() && (func_216(49) || func_211(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = joaat("BLIP_SCM_FRANCES");
				iVar13 = joaat("COL_RC_INTRO");
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = joaat("COL_RC_INTRO_PRE");
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = joaat("ROCK_CARVINGS");
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = __LIB_1__::func_34(iParam3, 20);
			iVar14 = joaat("TAXIDERMY");
			iVar11 = joaat("BLIP_RC_HOBBS");
			iVar13 = joaat("COL_TX_INTRO");
			break;
	}
	sVar2 = func_400(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (__LIB_0__::func_422(iParam0, iVar13, iVar14))
	{
	}
	if (__LIB_0__::func_423(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (__LIB_0__::func_424(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_404(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (__LIB_1__::func_165(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (__LIB_0__::func_938(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_220(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (__LIB_0__::func_28() && (func_216(38) || func_211(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = joaat("COL_CC_INTRO");
			break;
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = joaat("DINO_BONES");
			if (__LIB_0__::func_28() && (func_216(39) || func_211(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = joaat("BLIP_RC_DEBORAH");
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = joaat("COL_DB_INTRO");
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = joaat("COL_EX_INTRO");
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = joaat("BLIP_RC_JEREMY_GILL");
			iVar6 = joaat("COL_LF_INTRO");
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = joaat("ROCK_CARVINGS");
			if (__LIB_0__::func_28() && (func_216(49) || func_211(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = joaat("BLIP_SCM_FRANCES");
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = joaat("COL_RC_INTRO");
			break;
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = joaat("TAXIDERMY");
			iVar4 = joaat("BLIP_RC_HOBBS");
			iVar6 = joaat("COL_TX_INTRO");
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar5 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar5 = MISC::GET_HASH_KEY("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (__LIB_0__::func_28() && (func_216(38) || func_211(38)))
		{
			iVar6 = joaat("COL_CC_INTRO");
		}
		else
		{
			iVar6 = joaat("COL_CC_INTRO_PRE");
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			__LIB_0__::func_384(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, __LIB_0__::func_426(__LIB_0__::func_354(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("DINO_BONES"))
	{
		if (__LIB_0__::func_28() && (func_216(39) || func_211(39)))
		{
			iVar6 = joaat("COL_DB_INTRO");
		}
		else
		{
			iVar6 = joaat("COL_DB_INTRO_PRE");
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("ROCK_CARVINGS"))
	{
		if (__LIB_0__::func_28() && (func_216(49) || func_211(49)))
		{
			iVar6 = joaat("COL_RC_INTRO");
		}
		else
		{
			iVar6 = joaat("COL_RC_INTRO_PRE");
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

void func_225(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	func_413(iParam0);
}

bool func_230(bool bParam0)
{
	if (func_92() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_307(bParam0));
}

bool func_231(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_MELEE(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		Var0 = { func_384(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = __LIB_0__::func_235((386 + iVar28), 1);
			if (func_418(iParam0, &Var0, iVar5, 0))
			{
				if (func_419(iParam0, &Var6, iVar5))
				{
					Var29 = { func_420(iParam0, Var0, iVar5, 0) };
					func_421(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_230(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_232(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					__LIB_0__::func_718(iParam0, iParam1);
					return true;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return false;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return true;
			}
		}
	}
}

bool func_232(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!__LIB_0__::func_258(iParam0))
	{
		return false;
	}
	if (!func_230(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_233(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;
	iVar0 = __LIB_0__::func_775(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_92() == -1)
		{
			__LIB_0__::func_915(iVar0);
			if (iParam1 == 1248274121)
			{
				__LIB_1__::func_618(iVar0);
			}
		}
		if (!func_388(iParam0, &uVar1, 1, 0, 0))
		{
			func_382(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = __LIB_0__::func_940(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_231(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				func_231(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				func_231(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_MELEE(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_15())
				{
					return false;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!__LIB_0__::func_216(iVar0))
				{
					func_231(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_231(iVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = __LIB_0__::func_153(Global_35, 2, 0, 1);
				if ((((__LIB_0__::func_154(iVar7) && !Global_43891) && iVar7 != iVar0) && !__LIB_0__::func_293(24)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				bVar8 = true;
				if (__LIB_0__::func_154(iVar7) && __LIB_0__::func_293(24))
				{
					if (!func_231(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_231(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_231(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		func_212(480, 1);
	}
	return true;
}

bool func_235(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (!__LIB_0__::func_258(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (__LIB_0__::func_154(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (WEAPON::_IS_WEAPON_BOW(iVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_GET_WEAPON_CLIP_SIZE(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (func_252(joaat("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == -897553835)
	{
		iVar6 = BUILTIN::CEIL((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_271(__LIB_0__::func_941(iParam0), __LIB_0__::func_776(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_92() == -1)
		{
			if (__LIB_1__::func_25(Global_1835011[14 /*74*/].f_1, 1))
			{
				func_212(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_230(0))
	{
		if (func_232(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_276(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_236(int iParam0)
{
	var uVar0;
	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !__LIB_0__::func_26()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_429(Global_35, iParam0, &uVar0))
		{
			func_255(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			__LIB_0__::func_362();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			__LIB_0__::func_360();
			break;
	}
}

void func_240(int iParam0)
{
	bool bVar0;
	bVar0 = __LIB_0__::func_192(iParam0, -2017733358);
	if (func_432() < 3)
	{
		if (bVar0)
		{
			if (func_434(__LIB_0__::func_432(iParam0), iParam0))
			{
				func_271(79, __LIB_0__::func_776(__LIB_0__::func_432(iParam0)), 1);
			}
			else
			{
				func_271(78, __LIB_0__::func_776(__LIB_0__::func_432(iParam0)), 1);
			}
		}
		else
		{
			func_271(80, __LIB_0__::func_776(__LIB_0__::func_789(iParam0)), 1);
		}
	}
}

bool func_241()
{
	if (((((func_436(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_436(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400)) || func_436(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_1"), 400)) || func_436(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_2"), 400)) || func_436(joaat("DOCUMENT_ARTHUR_HAS_POSTER_1"), 400)) || func_436(joaat("DOCUMENT_ARTHUR_HAS_POSTER_2"), 400))
	{
		return true;
	}
	return false;
}

int func_242(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	iVar0 = func_437(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		__LIB_1__::func_113(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	__LIB_1__::func_430(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_243(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_218(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			func_220(51, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_433(8192);
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_218(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			func_220(51, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_433(524288);
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_218(39, 0, 0, 0, 0, 0, 1, 0);
			func_220(39, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_434(16);
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_218(41, 0, 0, 0, 0, 0, 1, 0);
			func_220(41, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_435(8);
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_218(49, 0, 0, 0, 0, 0, 1, 0);
			func_220(49, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_436(16);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_218(43, 0, 0, joaat("EXOTIC_STAGE_01"), func_444(1), 0, -1, 0);
			__LIB_0__::func_437(1);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_218(43, 0, 0, joaat("EXOTIC_STAGE_02"), func_444(2), 0, -1, 0);
			__LIB_0__::func_437(2);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_218(43, 0, 0, joaat("EXOTIC_STAGE_03"), func_444(4), 0, -1, 0);
			__LIB_0__::func_437(4);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_218(43, 0, 0, joaat("EXOTIC_STAGE_04"), func_444(8), 0, -1, 0);
			__LIB_0__::func_437(8);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_218(43, 0, 0, joaat("EXOTIC_STAGE_05"), func_444(16), 0, -1, 0);
			__LIB_0__::func_437(16);
			break;
	}
}

void func_244(int iParam0)
{
	if (__LIB_0__::func_942() == 1)
	{
		if (func_211(39))
		{
			func_212(342, 0);
		}
		else
		{
			func_212(343, 0);
			__LIB_0__::func_434(1);
		}
	}
	if (__LIB_0__::func_942() >= 30)
	{
		func_212(344, 0);
	}
	func_218(39, 0, 0, 0, 0, 0, -1, 0);
	func_220(39, 0, 0, __LIB_0__::func_942(), 30, 1, 0);
}

void func_245(int iParam0)
{
	if (__LIB_0__::func_438() == 1)
	{
		if (func_211(49))
		{
			func_212(409, 0);
		}
		else
		{
			func_212(410, 0);
			__LIB_0__::func_436(1);
		}
	}
	if (__LIB_0__::func_438() >= 10)
	{
		func_212(411, 0);
	}
	func_218(49, 0, 0, 0, 0, 0, -1, 0);
	func_220(49, 0, 0, __LIB_0__::func_438(), 10, 1, 0);
}

void func_246(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_01"), 1);
			func_212(437, 0);
			func_212(440, 0);
			func_448(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			func_218(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			func_220(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			__LIB_0__::func_433(1);
			__LIB_1__::func_408(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			func_448(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			func_218(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			func_220(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			__LIB_0__::func_433(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			func_448(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			func_218(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			func_220(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			__LIB_0__::func_433(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			func_448(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			func_218(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			func_220(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			__LIB_0__::func_433(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			func_212(438, 0);
			func_448(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			func_218(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			func_220(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			__LIB_0__::func_433(32768);
			break;
		default:
			func_212(439, 0);
			break;
	}
}

void func_248(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	if (func_92() == -1)
	{
		if (!func_211(43))
		{
			if (iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
			{
				func_212(348, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
			{
				func_212(350, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
			{
				func_212(352, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				func_212(400, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 412399755))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_01"));
			if (__LIB_0__::func_944() == 0)
			{
				func_37(0, 10);
				iVar1 = func_452(iParam0, iParam1, 1);
				if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (func_453(iParam0) < __LIB_0__::func_439(iParam0))
					{
						func_218(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						func_220(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_211(44))
		{
			if (iParam0 == joaat("PROVISION_HERON_FEATHER"))
			{
				func_212(354, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				func_212(399, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				func_212(401, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 709057512))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_02"));
			if (__LIB_0__::func_944() == 1)
			{
				func_37(0, 10);
				iVar1 = func_452(iParam0, iParam1, 2);
				if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (func_453(iParam0) < __LIB_0__::func_439(iParam0))
					{
						func_218(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						func_220(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_211(45))
		{
			if (iParam0 == joaat("PROVISION_GATOR_EGG"))
			{
				func_212(359, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				func_212(394, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				func_212(395, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				func_212(398, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1478961327))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_03"));
			if (__LIB_0__::func_944() == 2)
			{
				func_37(0, 10);
				iVar1 = func_452(iParam0, iParam1, 4);
				if (iParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!__LIB_0__::func_440(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						__LIB_0__::func_441(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
						func_394(48);
					}
					if (func_453(iParam0) < __LIB_0__::func_439(iParam0))
					{
						func_218(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_220(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (func_453(iParam0) < __LIB_0__::func_439(iParam0))
					{
						func_218(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_220(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_211(46))
		{
			if (iParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
			{
				func_212(356, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				func_212(402, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				func_212(404, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				func_212(406, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1238404098))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_04"));
			if (__LIB_0__::func_944() == 3)
			{
				func_37(0, 10);
				iVar1 = func_452(iParam0, iParam1, 8);
				if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (func_453(iParam0) < __LIB_0__::func_439(iParam0))
					{
						func_218(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						func_220(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_211(47))
		{
			if (iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				func_212(396, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				func_212(397, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				func_212(405, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				func_212(403, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 1160548794))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_05"));
			if (__LIB_0__::func_944() == 4)
			{
				func_37(0, 10);
				iVar1 = func_452(iParam0, iParam1, 16);
				if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (func_453(iParam0) < __LIB_0__::func_439(iParam0))
					{
						func_218(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						func_220(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_249(int iParam0)
{
	int iVar0;
	if (iParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!__LIB_0__::func_440(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
		{
			__LIB_0__::func_441(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
			func_394(48);
		}
	}
}

void func_250(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (func_252(__LIB_1__::func_35(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_458(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_459(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_251(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (func_92() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_242(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case joaat("MONEY_ONE_DOLLAR"):
			func_242(joaat("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_FIVE_DOLLARS"):
			func_242(joaat("REWARD_FIVE_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_TEN_DOLLARS"):
			func_242(joaat("REWARD_TEN_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLFOLD"):
			func_242(joaat("REWARD_BILLFOLD"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLFOLD_SML"):
			func_242(joaat("REWARD_BILLFOLD_SML"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLSTACK"):
			func_242(joaat("REWARD_BILLSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COIN"):
			func_242(joaat("REWARD_COIN"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINPURSE"):
			func_242(joaat("REWARD_COINPURSE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINSACK"):
			func_242(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINSTACK"):
			func_242(joaat("REWARD_COINS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYCLIP"):
			func_242(joaat("REWARD_MONEYCLIP"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYSTACK"):
			func_242(joaat("REWARD_MONEYSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!__LIB_1__::func_202())
			{
				func_242(joaat("REWARD_MONEYSTACK_LARGE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case joaat("MONEY_COINCUP_SM"):
			func_242(joaat("REWARD_COINCUP_SM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINCUP_LG"):
			func_242(joaat("REWARD_COINCUP_LG"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_CARD_SET_COMMON"):
			func_242(joaat("REWARD_CARD_SET_COMMON"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_RARE"):
			func_242(joaat("REWARD_CARD_SET_RARE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_ALL"):
			func_242(joaat("REWARD_CARD_SET_ALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_RARE_FISH"):
			func_242(joaat("REWARD_RARE_FISH"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_242(joaat("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_242(joaat("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_242(joaat("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_242(joaat("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_242(joaat("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_242(joaat("REWARD_CALLOWAY_LETTER"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

bool func_252(int iParam0, int iParam1, bool bParam2)
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
		if (!func_461(iParam0, 1))
		{
			return false;
		}
	}
	return func_205(iParam0, 0, bParam2) >= iParam1;
}

void func_253(int iParam0)
{
	if (func_211(41))
	{
		func_212(363, 0);
	}
	else
	{
		func_212(362, 0);
	}
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_01"));
			__LIB_1__::func_409(joaat("LEGENDARY_FISHING_SPOT_01"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_37(0, 10);
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_02"));
			__LIB_1__::func_409(joaat("LEGENDARY_FISHING_SPOT_02"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_37(0, 10);
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_03"));
			__LIB_1__::func_409(joaat("LEGENDARY_FISHING_SPOT_03"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_37(0, 10);
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_04"));
			__LIB_1__::func_409(joaat("LEGENDARY_FISHING_SPOT_04"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_37(0, 10);
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_05"));
			__LIB_1__::func_409(joaat("LEGENDARY_FISHING_SPOT_05"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_37(0, 10);
			break;
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_06"));
			__LIB_1__::func_409(joaat("LEGENDARY_FISHING_SPOT_06"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_37(0, 10);
			break;
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_07"));
			__LIB_1__::func_409(joaat("LEGENDARY_FISHING_SPOT_07"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_37(0, 10);
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_08"));
			__LIB_1__::func_409(joaat("LEGENDARY_FISHING_SPOT_08"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_37(0, 10);
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_09"));
			__LIB_1__::func_409(joaat("LEGENDARY_FISHING_SPOT_09"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_37(0, 10);
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_10"));
			__LIB_1__::func_409(joaat("LEGENDARY_FISHING_SPOT_10"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_37(0, 10);
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_11"));
			__LIB_1__::func_409(joaat("LEGENDARY_FISHING_SPOT_11"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_37(0, 10);
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_12"));
			__LIB_1__::func_409(joaat("LEGENDARY_FISHING_SPOT_12"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_37(0, 10);
			break;
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_13"));
			__LIB_1__::func_409(joaat("LEGENDARY_FISHING_SPOT_13"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_37(0, 10);
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_14"));
			__LIB_1__::func_409(joaat("LEGENDARY_FISHING_SPOT_14"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_14"));
			break;
	}
}

int func_255(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;
	if (iParam3 == -358215195)
	{
		Var0 = { func_384(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_468(iParam1, iParam2, __LIB_0__::func_161(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_469(1, (func_92() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != Global_1946804.f_57[__LIB_0__::func_161(iParam3, 1) /*11*/])
			{
				__LIB_1__::func_452(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (__LIB_0__::func_156(32768) && iParam1 != Global_1946804.f_57[__LIB_0__::func_161(iParam3, 1) /*11*/])
			{
				__LIB_0__::func_945();
				__LIB_1__::func_452(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			__LIB_1__::func_452(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = __LIB_0__::func_445(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		__LIB_1__::func_452(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			__LIB_1__::func_36(0);
			__LIB_1__::func_37(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		__LIB_1__::func_452(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_256(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar17;
	int iVar18;
	int iVar19;
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = __LIB_0__::func_153(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = __LIB_0__::func_153(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_476("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (__LIB_0__::func_236(&Var3, iVar2, iVar0, iVar1))
			{
				if (WEAPON::_IS_WEAPON_ONE_HANDED(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*iParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						__LIB_0__::func_238(iVar0);
						if (*iParam0 != 0)
						{
							return true;
						}
						return false;
					}
				}
			}
		}
	}
}

void func_271(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	__LIB_0__::func_378(iParam0, &iVar0, &iVar1);
	if (!func_396(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!__LIB_0__::func_447(iParam0, 1024))
	{
		return;
	}
	__LIB_0__::func_379(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_272(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	__LIB_0__::func_378(iParam0, &iVar0, &iVar1);
	if (!func_396(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!__LIB_0__::func_447(iParam0, 1024))
	{
		return;
	}
	__LIB_0__::func_379(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	}
	else
	{
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;
	}
}

int func_276(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_384(iParam0, 0, 1) };
	Var5 = { func_420(iParam0, Var0, Var0.f_4, 0) };
	return func_484(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_277(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (func_92() != -1)
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
				func_488(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
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
			func_255(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_225(24);
		if (func_256(&iVar2, 0))
		{
			func_231(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_278(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		func_493(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		func_493(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		func_493(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		func_493(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		func_493(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		func_493(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		func_493(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		func_493(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		func_493(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		func_493(-1, iParam0);
	}
}

struct<2> func_280(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return Var0;
	}
	if (__LIB_0__::func_192(iParam0, -305066475))
	{
		if (func_92() == -1)
		{
			if (__LIB_0__::func_192(iParam0, -537818634))
			{
				return __LIB_0__::func_14(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return __LIB_0__::func_14(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (__LIB_0__::func_192(iParam0, -537818634))
	{
		return __LIB_0__::func_14(joaat("MEDICINE_ITEMS"));
	}
	if (__LIB_0__::func_192(iParam0, 2084895747))
	{
		return __LIB_0__::func_14(joaat("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

void func_281(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			if (func_92() == -1)
			{
				if (__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_212(109, 1);
				}
			}
			break;
	}
}

int func_307(bool bParam0)
{
	if (func_92() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

int func_310(int iParam0)
{
	float fVar0;
	float fVar1;
	if (func_92() != -1)
	{
		return iParam0;
	}
	if (Global_1347477.f_2 + 120000) < MISC::GET_GAME_TIMER()
	{
		Global_1347477.f_3 = 1;
		Global_1347477.f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477.f_2 = MISC::GET_GAME_TIMER();
	Global_1347477.f_3++;
	if (Global_1347477.f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477.f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (BUILTIN::TO_FLOAT(iParam0) * fVar0);
	fVar1 = __LIB_0__::func_514(MISC::ABSF(fVar1) < 1f, __LIB_0__::func_514(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

char* func_322(var uParam0)
{
	switch (*uParam0)
	{
		case -654238687:
			return "DISC_VOL_OLD_DIRTY_CABIN";
		case -415839138:
			return "DISC_VOL_MEDITATING_MONK";
		case -2008558277:
			return "DISC_VOL_BATS_IN_BARN";
		case 1861313914:
			return "DISC_VOL_BRAITH_SECRET";
		case -35775921:
			return "DISC_VOL_BLACK_SHEEP";
		default:
			break;
	}
	return "";
}

int func_335(var uParam0)
{
	switch (*uParam0)
	{
		case -415839138:
			return joaat("DISCO_MONK");
		default:
			break;
	}
	return joaat("DISCO_UNKNOWN");
}

void func_336(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam1))
		{
		}
	}
	else if (ENTITY::IS_ENTITY_DEAD(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
	{
	}
	if (!__LIB_0__::func_139(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_GROUP(Global_1945938[iVar0 /*18*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1), 0);
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam2);
		}
		else
		{
			OBJECT::_0xD503D6F0986D58BC(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1), iParam2);
		}
	}
}

void func_337(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	if (!*uParam1 == -1)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam1, true, false))
			{
				if (iParam2 == 0)
				{
					iVar0 = 0;
					while (iVar0 <= (10 - 1))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_63.f_1[iVar0]))
						{
							if (ANIMSCENE::_0x6F1F0B17109309DA(*uParam1, func_528(uParam0, iVar0)))
							{
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, func_528(uParam0, iVar0), Local_63.f_1[iVar0], 0);
							}
						}
						iVar0++;
					}
					if (*uParam0 == 1861313914)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Global_35))
						{
							if (ANIMSCENE::_0x6F1F0B17109309DA(*uParam1, "player"))
							{
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "player", Global_35, 0);
							}
						}
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_7__::func_560(uParam0, iParam2, 3, 0)))
					{
						if (ANIMSCENE::_0xA9016536015DE29D(*uParam1, __LIB_7__::func_560(uParam0, iParam2, 3, 0)))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam1, __LIB_7__::func_560(uParam0, iParam2, 3, 0), true);
						}
					}
				}
			}
		}
	}
}

void func_341(var uParam0, bool bParam1, int iParam2)
{
	__LIB_2__::func_137(iParam2);
	if (Global_1572887.f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return;
		}
		if (Global_1935630.f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225639.f_11)
		{
			return;
		}
		if (Global_1225639.f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887.f_12 == -1)
	{
		uParam0->f_13 = Global_1935630.f_44;
	}
	else
	{
		uParam0->f_13 = __LIB_1__::func_347(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == joaat("WEAPON_THROWN_DYNAMITE"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							__LIB_0__::func_7(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (__LIB_1__::func_995(1))
						{
							__LIB_0__::func_7(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!__LIB_1__::func_995(1) || *uParam0 & 8192 != 0))
				{
					__LIB_0__::func_8(uParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		{
			if (func_532(uParam0))
			{
				uParam0->f_15 = __LIB_0__::func_485();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((__LIB_0__::func_485() - uParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	__LIB_2__::func_835(uParam0);
}

bool func_365(int iParam0, var uParam1)
{
	if (!func_566(0))
	{
		return false;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_381(int iParam0)
{
	var uVar0;
	if (func_92() != -1)
	{
		return false;
	}
	if (__LIB_0__::func_774(iParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_388(iParam0, &uVar0, 1, 0, 0);
	}
	return func_252(iParam0, 1, 0);
}

void func_382(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	if (__LIB_0__::func_356(iParam0) != joaat("WEAPON"))
	{
		return;
	}
	iVar0 = __LIB_0__::func_775(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !__LIB_0__::func_214(iVar0))
	{
		if (func_92() == -1)
		{
			__LIB_0__::func_915(iVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, false) && func_205(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				__LIB_3__::func_868(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

struct<5> func_384(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;
	Var0 = { func_570(bParam1) };
	Var0.f_4 = 1084182731;
	switch (__LIB_0__::func_356(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_420(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { func_571(bParam1) };
			if (bParam2 && __LIB_0__::func_950(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_418(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_418(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_419(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
			}
			else
			{
				Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
			}
			break;
		case joaat("HORSE"):
			Var0.f_4 = 1782082944;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -813824107;
			Var0 = { func_573(bParam1) };
			switch (__LIB_0__::func_357(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case joaat("UPGRADE"):
			if (__LIB_0__::func_793(iParam0, -1823706425))
			{
				Var0 = { func_420(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (__LIB_0__::func_793(iParam0, -1483207246))
			{
				Var0 = { func_420(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_575(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_385(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	if (!func_230(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_307(bParam3), iParam0);
}

int func_386(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_258(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_307(bParam1), iParam0, 0);
}

bool func_387()
{
	if (func_92() != -1)
	{
		return false;
	}
	if (!__LIB_0__::func_28())
	{
		return false;
	}
	if (!__LIB_1__::func_25(Global_1835011[1 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((__LIB_1__::func_25(Global_1835011[2 /*74*/].f_1, 1) && __LIB_1__::func_25(Global_1347702[120 /*49*/].f_15, 1)) && !__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return true;
	}
	if (__LIB_1__::func_25(Global_1835011[37 /*74*/].f_1, 1) && !__LIB_1__::func_25(Global_1835011[39 /*74*/].f_1, 1))
	{
		return true;
	}
	if (__LIB_1__::func_25(Global_1835011[57 /*74*/].f_1, 1) && !__LIB_1__::func_25(Global_1835011[60 /*74*/].f_1, 1))
	{
		return true;
	}
	if (__LIB_1__::func_25(Global_1835011[26 /*74*/].f_1, 1) && !__LIB_1__::func_25(Global_1347702[67 /*49*/].f_15, 1))
	{
		return true;
	}
	if ((__LIB_1__::func_25(Global_1835011[62 /*74*/].f_1, 1) && __LIB_1__::func_25(Global_1835011[63 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if (__LIB_1__::func_25(Global_1835011[75 /*74*/].f_1, 1) && !__LIB_1__::func_25(Global_1347702[1 /*49*/].f_15, 1))
	{
		return true;
	}
	if (__LIB_1__::func_25(Global_1835011[76 /*74*/].f_1, 1) && !__LIB_1__::func_25(Global_1835011[77 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((__LIB_1__::func_25(Global_1835011[40 /*74*/].f_1, 1) && __LIB_1__::func_25(Global_1835011[41 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[44 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((__LIB_1__::func_25(Global_1835011[62 /*74*/].f_1, 1) && __LIB_1__::func_25(Global_1835011[63 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((__LIB_1__::func_25(Global_1835011[65 /*74*/].f_1, 1) && __LIB_1__::func_25(Global_1835011[66 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[67 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_388(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;
	__LIB_0__::func_799(&iParam0);
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!func_230(0))
	{
		bParam3 = true;
	}
	if (__LIB_0__::func_787(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			Var0 = { func_571(0) };
			Var4.f_9 = -1591664384;
			if (!func_418(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return false;
			}
			else if (func_419(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return false;
			}
			if (__LIB_0__::func_950(iParam0, 1))
			{
				if (!func_418(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return false;
				}
				else if (func_419(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return false;
				}
			}
		}
		else if (!func_577(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_385(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3)
	{
		iVar28 = func_578(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_307(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_391(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { __LIB_0__::func_523(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		__LIB_0__::func_524(&Var0, func_571(0));
	}
	if (!func_581(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	__LIB_0__::func_238(iVar14);
	return uVar15;
}

void func_394(int iParam0)
{
	int iVar0;
	float fVar1;
	if (func_92() != -1)
	{
		return;
	}
	iVar0 = __LIB_0__::func_525(iParam0);
	fVar1 = __LIB_1__::func_181(iParam0);
	if ((Global_1347477.f_117 || !__LIB_0__::func_293(31)) || !__LIB_0__::func_962(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (__LIB_0__::func_963(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477.f_182));
	fVar1 = BUILTIN::TO_FLOAT(BUILTIN::ROUND(fVar1));
	func_586(iVar0, (Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(6, __LIB_0__::func_526(iParam0), fVar1), "itemtype_textures", __LIB_0__::func_527(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_396(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_589(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_590(iParam0))
	{
		return false;
	}
	if (__LIB_0__::func_792(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !__LIB_0__::func_447(iParam0, 1)) || __LIB_0__::func_13(32768))
	{
		if (!__LIB_0__::func_447(iParam0, 262144) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!__LIB_0__::func_463())
	{
		return false;
	}
	return true;
}

char* func_400(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_217() >= 12)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", __LIB_0__::func_964(), 12);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_596(), 12);
			}
			break;
		case joaat("DINO_BONES"):
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (__LIB_0__::func_942() >= 30)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_POSTED_OBJ", __LIB_0__::func_965(), 30);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_FOUND_OBJ", __LIB_0__::func_942(), 30);
			}
			break;
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_CAUGHT_OBJ", __LIB_0__::func_966(), 13);
			}
			break;
		case joaat("ROCK_CARVINGS"):
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (__LIB_0__::func_438() >= 10)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_POSTED_OBJ", __LIB_0__::func_528(), 10);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_FOUND_OBJ", __LIB_0__::func_438(), 10);
			}
			break;
		case joaat("TAXIDERMY"):
			if (iParam2 == 3)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, __LIB_1__::func_34(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_404(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_600(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_252(iVar2, 1, 0) || __LIB_0__::func_530(func_601(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_426(func_600(iVar0))), __LIB_0__::func_426(func_600(iVar0)), bVar1, true, false);
		}
		if (iParam2 == joaat("DINO_BONES"))
		{
			if (iVar0 == 0)
			{
				bVar1 = __LIB_0__::func_942() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_531(iVar0)), __LIB_0__::func_531(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = __LIB_0__::func_965() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_531(iVar0)), __LIB_0__::func_531(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_531(iVar0)), __LIB_0__::func_531(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = __LIB_1__::func_35(iParam3, __LIB_0__::func_532(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_453(iVar2) - iParam7) >= __LIB_1__::func_34(iParam3, __LIB_0__::func_533(iVar0));
				}
				else
				{
					bVar1 = func_453(iVar2) >= __LIB_1__::func_34(iParam3, __LIB_0__::func_533(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_453(iVar2) + iParam7) >= __LIB_1__::func_34(iParam3, __LIB_0__::func_533(iVar0));
			}
			else
			{
				bVar1 = func_453(iVar2) >= __LIB_1__::func_34(iParam3, __LIB_0__::func_533(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_534(iVar2)), __LIB_0__::func_534(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (__LIB_0__::func_314(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_535(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), __LIB_0__::func_535(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == joaat("ROCK_CARVINGS"))
		{
			if (iVar0 == 0)
			{
				bVar1 = __LIB_0__::func_438() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_536(iVar0)), __LIB_0__::func_536(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = __LIB_0__::func_528() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_536(iVar0)), __LIB_0__::func_536(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_536(iVar0)), __LIB_0__::func_536(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("TAXIDERMY"))
		{
			iVar2 = __LIB_1__::func_35(iParam3, __LIB_0__::func_532(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_453(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_610(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_610(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_1__::func_72(iVar2)), __LIB_1__::func_72(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

void func_413(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			__LIB_0__::func_537(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			__LIB_0__::func_538(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			__LIB_0__::func_538(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			__LIB_0__::func_538(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			__LIB_0__::func_539(1);
			break;
		case 34:
			__LIB_0__::func_540(1);
			break;
		case 35:
			__LIB_0__::func_541(1);
			break;
		case 36:
			break;
		case 37:
			__LIB_0__::func_542(0);
			break;
		case 38:
			__LIB_0__::func_543(0);
			break;
		case 39:
			__LIB_0__::func_544(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_212(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_212(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_212(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_212(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (func_92() == -1)
			{
				if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || __LIB_0__::func_802(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_15())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!func_252(iVar0, 1, 0))
					{
						func_276(iVar0, 1, 752097756);
					}
					func_255(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_92() == -1)
			{
				if (!func_252(1013902307, 1, 0))
				{
					func_276(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_92() == -1)
			{
				if (!func_252(1013902307, 1, 0))
				{
					func_276(1013902307, 1, 752097756);
				}
				if (!func_252(142640135, 1, 0))
				{
					func_276(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_92() == -1)
			{
				if (!func_252(786809402, 1, 0))
				{
					func_276(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_92() == -1)
			{
				if (!func_252(786809402, 1, 0))
				{
					func_276(786809402, 1, 752097756);
				}
				if (!func_252(-518019409, 1, 0))
				{
					func_276(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1935630.f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_623();
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), true);
			break;
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}
}

bool func_418(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_578(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_419(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	if (func_624(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_420(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_307(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_421(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (__LIB_0__::func_257(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_575(*uParam1, &Var0, bParam6, 0))
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_230(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_307(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_429(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return false;
	}
	if (__LIB_0__::func_356(iParam1) != joaat("CLOTHING"))
	{
		return false;
	}
	bVar1 = func_92() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(iParam0);
	if (__LIB_0__::func_357(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_629(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (__LIB_0__::func_192(iParam1, 866047851))
	{
		iVar5 = __LIB_0__::func_161(iVar4, 1);
		if (__LIB_0__::func_545(&(Global_1946804.f_1497)) >= 2 && Global_1946804.f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*uParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_GET_PED_COMPONENT_CATEGORY(iVar8, iVar2, bVar1) == joaat("NECKTIES") && PED::_IS_METAPED_USING_COMPONENT(iParam0, -1455751347))
			{
				*uParam2 = 111371848; /* GXTEntry: "Your shirt does not support this type of neckwear." */
				return false;
			}
			iVar5 = 10;
			iVar3 = __LIB_0__::func_357(Global_1946804.f_1497.f_1[iVar5 /*3*/]);
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (Global_1946804.f_1497.f_1[iVar5 /*3*/] != Global_1946804.f_57[iVar5 /*11*/] && __LIB_0__::func_192(iParam1, -1638171711))
			{
				*uParam2 = 187275271; /* GXTEntry: "Your chaps do not support this." */
				return false;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (Global_1946804.f_1497.f_1[iVar5 /*3*/] == Global_1946804.f_57[iVar5 /*11*/])
			{
				*uParam2 = 2143522536;
				return false;
			}
			if (PED::_IS_METAPED_USING_COMPONENT(iParam0, -1968556728))
			{
				*uParam2 = -849690042; /* GXTEntry: "Your boots do not support having spurs." */
				return false;
			}
			break;
		case -1505978566:
			if (__LIB_1__::func_182(1868067663, &uVar0))
			{
				*uParam2 = 939463734; /* GXTEntry: "Item cannot be worn with coats." */
				return false;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = PED::_GET_NUM_COMPONENTS_IN_PED(iParam0);
				iVar10 = __LIB_0__::func_546(iVar8, iVar4, iVar2, bVar1);
				iVar9 = __LIB_0__::func_546(Global_1946804.f_1497.f_1[iVar5 /*3*/], iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = __LIB_0__::func_357(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && __LIB_0__::func_192(Global_1946804.f_1497.f_1[iVar5 /*3*/], -1638171711))
				{
					*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && __LIB_0__::func_218(Global_1946804.f_1497.f_1[iVar5 /*3*/]))
					{
						*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
						return false;
					}
					if (Global_1946804.f_1497.f_1[iVar5 /*3*/] == Global_1946804.f_57[iVar5 /*11*/])
					{
						*uParam2 = 2143522536;
						return false;
					}
				}
			}
			*uParam2 = 0;
			return true;
			default:
				break;
	}
}

int func_432()
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_252(__LIB_0__::func_547(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_434(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			if (iParam1 == joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"))
			{
				iVar0 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
				iVar1 = joaat("PROVISION_BRACELET_GOLD");
			}
			else if (iParam1 == joaat("PROVISION_CC_VINTAGE_HANDCUFFS"))
			{
				iVar0 = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				iVar1 = joaat("PROVISION_BRACELET_GOLD");
			}
			else
			{
				iVar0 = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				iVar1 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
			}
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			if (iParam1 == joaat("PROVISION_BEAR_LEGENDARY_CLAW"))
			{
				iVar0 = joaat("PROVISION_RC_QUARTZ_CHUNK");
				iVar1 = joaat("PROVISION_BRACELET_SILVER");
			}
			else if (iParam1 == joaat("PROVISION_RC_QUARTZ_CHUNK"))
			{
				iVar0 = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				iVar1 = joaat("PROVISION_BRACELET_SILVER");
			}
			else
			{
				iVar0 = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				iVar1 = joaat("PROVISION_RC_QUARTZ_CHUNK");
			}
			break;
		case joaat("PROVISION_TALISMAN_BOAR_TUSK"):
			if (iParam1 == joaat("PROVISION_BOAR_TUSK_LEGENDARY"))
			{
				iVar0 = joaat("PROVISION_RF_WOOD_COBALT");
				iVar1 = joaat("PROVISION_EARRING_GOLD");
			}
			else if (iParam1 == joaat("PROVISION_RF_WOOD_COBALT"))
			{
				iVar0 = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				iVar1 = joaat("PROVISION_EARRING_GOLD");
			}
			else
			{
				iVar0 = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				iVar1 = joaat("PROVISION_RF_WOOD_COBALT");
			}
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			if (iParam1 == joaat("PROVISION_BUFFALO_HORN_LEGENDARY"))
			{
				iVar0 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
				iVar1 = joaat("PROVISION_EARRING_SILVER");
			}
			else if (iParam1 == joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT"))
			{
				iVar0 = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				iVar1 = joaat("PROVISION_EARRING_SILVER");
			}
			else
			{
				iVar0 = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				iVar1 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
			}
			break;
	}
	if (func_252(iVar0, 1, 0) && func_252(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

bool func_436(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = func_635(iParam0);
	if (iVar0 != -15)
	{
		__LIB_1__::func_446(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !__LIB_1__::func_426(iVar0, 1);
	}
	return false;
}

int func_437(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_252(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (Var1.f_1[iVar24] == joaat("CURRENCY_CASH"))
		{
			return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = Var1.f_1[iVar24];
			if (__LIB_0__::func_144(iVar25, 0) && __LIB_0__::func_192(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

char* func_444(int iParam0)
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE");
			iVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			iVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			iVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			iVar9 = joaat("PROVISION_HERON_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			iVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			iVar9 = joaat("PROVISION_GATOR_EGG");
			iVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			iVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			iVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			iVar9 = joaat("PROVISION_SPOONBILL_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			iVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			iVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			iVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			iVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = func_453(iVar9);
	iVar2 = func_453(iVar10);
	iVar3 = func_453(iVar11);
	iVar5 = __LIB_0__::func_439(iVar9);
	iVar6 = __LIB_0__::func_439(iVar10);
	iVar7 = __LIB_0__::func_439(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_453(iVar12);
		iVar8 = __LIB_0__::func_439(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam0 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

bool func_448(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	switch (iParam0)
	{
		case joaat("TAXIDERMY_ORDER_01"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_02"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_03"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_04"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_05"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
			}
			break;
	}
	if (iParam0 == joaat("TAXIDERMY_ORDER_01"))
	{
		if (bParam3)
		{
			if (func_610(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_610(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_610(iVar0))
		{
			*sParam2++;
		}
		if (func_610(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (func_610(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_610(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_610(iVar0))
		{
			*sParam2++;
		}
		if (func_610(iVar1))
		{
			*sParam2++;
		}
		if (func_610(iVar0) && func_610(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (func_610(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_610(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_610(iVar0))
		{
			*sParam2++;
		}
		if (func_610(iVar1))
		{
			*sParam2++;
		}
		if (func_610(iVar2))
		{
			*sParam2++;
		}
		if ((func_610(iVar0) && func_610(iVar1)) && func_610(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_610(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_610(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_610(iVar0))
		{
			*sParam2++;
		}
		if (func_610(iVar1))
		{
			*sParam2++;
		}
		if (func_610(iVar2))
		{
			*sParam2++;
		}
		if (func_610(iVar3))
		{
			*sParam2++;
		}
		if (((func_610(iVar0) && func_610(iVar1)) && func_610(iVar2)) && func_610(iVar3))
		{
			return true;
		}
	}
	return false;
}

int func_452(int iParam0, int iParam1, int iParam2)
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE");
			iVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			iVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			iVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			iVar9 = joaat("PROVISION_HERON_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			iVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			iVar9 = joaat("PROVISION_GATOR_EGG");
			iVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			iVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			iVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			iVar9 = joaat("PROVISION_SPOONBILL_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			iVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			iVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			iVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			iVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = func_453(iVar9);
	iVar2 = func_453(iVar10);
	iVar3 = func_453(iVar11);
	iVar5 = __LIB_0__::func_439(iVar9);
	iVar6 = __LIB_0__::func_439(iVar10);
	iVar7 = __LIB_0__::func_439(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_453(iVar12);
		iVar8 = __LIB_0__::func_439(iVar12);
	}
	if (iParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 = (iVar0 + iVar5);
		}
		else
		{
			iVar0 = (iVar0 + (iVar1 + iParam1));
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 = (iVar0 + iVar6);
		}
		else
		{
			iVar0 = (iVar0 + (iVar2 + iParam1));
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 = (iVar0 + iVar7);
		}
		else
		{
			iVar0 = (iVar0 + (iVar3 + iParam1));
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 = (iVar0 + iVar8);
			}
			else
			{
				iVar0 = (iVar0 + (iVar4 + iParam1));
			}
		}
		else if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_453(int iParam0)
{
	int iVar0;
	if (func_252(iParam0, 1, 0))
	{
		iVar0 = func_205(iParam0, 0, 0);
	}
	return iVar0;
}

void func_458(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		func_448(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_218(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_220(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_459(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 1;
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		if (func_448(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_218(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_220(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_218(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_220(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_461(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = __LIB_0__::func_937(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_476("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
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
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				__LIB_0__::func_238(iVar1);
				return true;
			}
			iVar3++;
		}
		__LIB_0__::func_238(iVar1);
	}
	return false;
}

bool func_468(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	__LIB_0__::func_191();
	if (iParam2 == 39)
	{
		Var0 = { func_384(iParam0, 1, 0) };
		iParam2 = __LIB_0__::func_161(__LIB_0__::func_709(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (__LIB_0__::func_192(iParam0, 866047851) && __LIB_0__::func_545(&(Global_1946804.f_1378)) >= 2)
	{
		return false;
	}
	if ((__LIB_0__::func_156(32768) && iParam2 == 10) && iParam0 != Global_1946804.f_57[iParam2 /*11*/])
	{
		__LIB_0__::func_968(__LIB_0__::func_158(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	__LIB_1__::func_40(iParam2);
	__LIB_1__::func_41(iParam2, iVar5);
	if (Global_1946804.f_1378.f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && Global_1946804.f_57[iParam2 /*11*/].f_1 > 1)
	{
		__LIB_0__::func_47(&(Global_1946804.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		__LIB_0__::func_47(&(Global_1946804.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	__LIB_1__::func_455(&(Global_1946804.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946804.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1 = __LIB_0__::func_969(iParam0, iParam2, iParam1, func_92() != -1);
	if (bParam4)
	{
		func_657(&(Global_1946804.f_1378), 1, 3);
	}
	else
	{
		func_657(&(Global_1946804.f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804.f_2589)
		{
			if (Global_1946804.f_2589.f_2[iVar6 /*2*/] >= 0 && Global_1946804.f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804.f_2456[Global_1946804.f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				Global_1946804.f_2456[Global_1946804.f_2589.f_2[iVar6 /*2*/] /*2*/].f_1 = 0;
				__LIB_0__::func_550(__LIB_0__::func_158(Global_1946804.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_469(bool bParam0, bool bParam1, bool bParam2)
{
	func_659(&(Global_1946804.f_2589), bParam0, bParam1, bParam2);
}

bool func_476(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_307(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_484(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_388(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_230(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_307(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_488(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	if (!__LIB_0__::func_450(iParam0))
	{
		return;
	}
	if (__LIB_1__::func_122(iParam0))
	{
		return;
	}
	if (!__LIB_1__::func_123(iParam0))
	{
		func_681(iParam0, 1, 0);
	}
	iVar0 = __LIB_0__::func_223(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (__LIB_0__::func_805(iParam0, 512))
		{
			__LIB_1__::func_452(30, iVar0, 0, 0, 0);
		}
	}
	if ((!__LIB_0__::func_104() && !bParam1) && !__LIB_0__::func_296(0, 0, 1))
	{
		__LIB_0__::func_45(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_DONE", MISC::_CREATE_VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	__LIB_0__::func_806(iParam0, 6);
	if (bParam2)
	{
		if (!__LIB_0__::func_296(0, 0, 1))
		{
			func_37(1, 4);
		}
	}
}

void func_493(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		func_688(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		func_688(iParam1, 1);
		func_689(iParam0);
	}
}

char* func_528(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case 1861313914:
			if (__LIB_1__::func_185(59))
			{
				switch (iParam1)
				{
					case 0:
						return "BraithwaitesSecret";
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "Girl";
					default:
						break;
				}
			}
			break;
		case -415839138:
			switch (iParam1)
			{
				case 0:
					return "monk";
				default:
					break;
			}
			break;
	}
	return "";
}

bool func_532(var uParam0)
{
	int iVar0;
	iVar0 = Global_1935630.f_40;
	if (func_92() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = __LIB_2__::func_827(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1955569.f_992[3])
	{
		iVar0 = __LIB_2__::func_827(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (__LIB_1__::func_363(iVar0) == -1)
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iVar0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iVar0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return false;
	}
	uParam0->f_14 = iVar0;
	return true;
}

bool func_566(int iParam0)
{
	if (func_15())
	{
		return false;
	}
	return __LIB_1__::func_25(Global_1347702[58 /*49*/].f_15, 1);
}

struct<4> func_570(bool bParam0)
{
	return func_420(joaat("CHARACTER"), __LIB_0__::func_217(), -1591664384, bParam0);
}

struct<4> func_571(bool bParam0)
{
	int iVar0;
	iVar0 = func_307(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1224215))
		{
			Global_1224215 = { func_420(923904168, func_570(bParam0), -740156546, bParam0) };
		}
		return Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1224223))
		{
			Global_1224223 = { func_420(923904168, func_570(bParam0), -740156546, 0) };
		}
		return Global_1224223;
	}
	return func_420(923904168, func_570(bParam0), -740156546, 0);
}

struct<4> func_573(bool bParam0)
{
	int iVar0;
	iVar0 = func_307(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1224219))
		{
			Global_1224219 = { func_420(271701509, func_570(bParam0), 12999093, 0) };
		}
		return Global_1224219;
	}
	return func_420(271701509, func_570(bParam0), 12999093, 0);
}

bool func_575(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_307(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_577(int iParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_384(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = __LIB_0__::func_235((386 + iVar29), 1);
		if (func_418(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_419(iParam0, &Var6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return true;
			}
		}
		iVar29++;
	}
	return false;
}

int func_578(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_420(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_307(bParam6), &Var0, 0);
	return uVar4;
}

bool func_581(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_307(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

void func_586(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	if (func_92() != -1)
	{
		return;
	}
	if (Global_1347477.f_117 || !__LIB_0__::func_293(31))
	{
		return;
	}
	iVar0 = __LIB_0__::func_963(iParam0);
	fVar1 = Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = __LIB_0__::func_963(iParam0);
	if (__LIB_0__::func_594(iParam0) && __LIB_0__::func_595(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = __LIB_0__::func_995(fVar1, fParam1);
			if (fParam1 > IntToFloat(__LIB_0__::func_996(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_212(__LIB_0__::func_596(iParam0), 0);
					}
					func_720(iParam0, iVar2, iVar3);
					__LIB_0__::func_597(iParam0, 7000);
				}
				Global_1347477.f_8 = 1;
			}
		}
	}
	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

bool func_589(int iParam0, int iParam1)
{
	if (func_92() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_590(int iParam0)
{
	if (func_92() != -1)
	{
		if (__LIB_0__::func_447(iParam0, 4))
		{
			return false;
		}
	}
	else if (__LIB_0__::func_447(iParam0, 2))
	{
		return false;
	}
	return true;
}

int func_596()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = __LIB_0__::func_421(iVar1);
		if (func_252(iVar2, 1, 0) || __LIB_0__::func_530(func_601(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_600(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_CIG_CARD_GUN_SET");
		case 1:
			return joaat("DOCUMENT_CIG_CARD_ART_SET");
		case 2:
			return joaat("DOCUMENT_CIG_CARD_LND_SET");
		case 3:
			return joaat("DOCUMENT_CIG_CARD_GRL_SET");
		case 4:
			return joaat("DOCUMENT_CIG_CARD_PLT_SET");
		case 5:
			return joaat("DOCUMENT_CIG_CARD_ACT_SET");
			return joaat("DOCUMENT_CIG_CARD_AML_SET");
			return joaat("DOCUMENT_CIG_CARD_VEH_SET");
			return joaat("DOCUMENT_CIG_CARD_SPT_SET");
			return joaat("DOCUMENT_CIG_CARD_INV_SET");
			return joaat("DOCUMENT_CIG_CARD_HOR_SET");
			return joaat("DOCUMENT_CIG_CARD_PAM_SET");
			return 0;
		}
int func_601(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
			return 1;
		case joaat("DOCUMENT_CIG_CARD_ART_SET"):
			return 8;
		case joaat("DOCUMENT_CIG_CARD_AML_SET"):
			return 4;
		case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
			return 16;
		case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
			return 32;
		case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
			return 64;
		case joaat("DOCUMENT_CIG_CARD_INV_SET"):
			return 128;
		case joaat("DOCUMENT_CIG_CARD_LND_SET"):
			return 256;
		case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
			return 2;
		case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
			return 512;
		case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
			return 1024;
		case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
			return 2048;
		default:
			break;
	}
	return 0;
}

bool func_610(int iParam0)
{
	if (__LIB_0__::func_599(iParam0) && func_252(iParam0, 1, 0))
	{
		return true;
	}
	else if (__LIB_0__::func_600(iParam0) && __LIB_1__::func_609(iParam0))
	{
		return true;
	}
	return false;
}

void func_623()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_728();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_276(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		__LIB_0__::func_915(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		func_276(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

bool func_624(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	iVar0 = func_307(0);
	*uParam1 = { func_420(iParam0, func_571(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return false;
	}
	return true;
}

int func_629(int iParam0)
{
	struct<5> Var0;
	Var0 = { func_384(iParam0, 1, 0) };
	return __LIB_0__::func_709(Var0.f_4);
}

int func_635(int iParam0)
{
	return func_737(iParam0, -1);
}

void func_657(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	bVar6 = func_92() != -1;
	iVar7 = __LIB_0__::func_602(0);
	if (__LIB_0__::func_156(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = Global_1946804.f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = __LIB_0__::func_158(iVar0, 1);
			if (__LIB_0__::func_555(iVar5, 8))
			{
			}
			else if (Global_1946804.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (__LIB_0__::func_555(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946804.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = __LIB_0__::func_546(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = __LIB_0__::func_221(uParam0);
				if (iVar3 > 0)
				{
					if (!__LIB_0__::func_156(524288))
					{
						__LIB_0__::func_155(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = Global_1946804.f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = __LIB_0__::func_158(iVar0, 1);
							if (__LIB_0__::func_555(iVar5, 8))
							{
							}
							else if (Global_1946804.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (__LIB_0__::func_555(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946804.f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = __LIB_0__::func_546(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = Global_1946804.f_57[iVar0 /*11*/];
									uParam0->f_1[iVar0 /*3*/].f_1 = 0;
									if (bParam1)
									{
										__LIB_1__::func_41(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					__LIB_0__::func_194(524288);
				}
			}
		}
	}
}

void func_659(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_749(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (func_92() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_750(2, Global_26796.f_776)) || Global_1946804.f_1497 != __LIB_0__::func_223(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804.f_1497 = __LIB_0__::func_223(Global_40.f_7729);
				Global_1946804.f_1378 = __LIB_0__::func_223(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_751(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		__LIB_0__::func_719(0, 1);
	}
}

void func_681(int iParam0, bool bParam1, bool bParam2)
{
	if (!__LIB_0__::func_450(iParam0))
	{
		return;
	}
	if (!__LIB_1__::func_123(iParam0))
	{
		__LIB_0__::func_806(iParam0, 2);
		if (bParam2)
		{
			if (!__LIB_0__::func_296(0, 0, 1))
			{
				func_37(1, 4);
			}
		}
		if ((!__LIB_0__::func_104() && !bParam1) && !__LIB_0__::func_296(0, 0, 1))
		{
			__LIB_0__::func_45(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_ADD", __LIB_1__::func_377(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

void func_688(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_225(50);
			}
			else
			{
				func_225(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_225(51);
			}
			else
			{
				func_225(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_764(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				__LIB_0__::func_360();
			}
			break;
		case 3:
			func_225(24);
			if (bParam1)
			{
				if (!func_764(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			break;
	}
}

void func_689(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_765(0))
			{
				iVar0++;
			}
			if (func_765(2))
			{
				iVar0++;
			}
			if (func_765(4))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(16))
			{
				if (iVar0 == 1)
				{
					func_767();
					func_212(456, 1);
					__LIB_0__::func_606(16);
				}
			}
			if (!__LIB_0__::func_605(32))
			{
				if (iVar0 >= 3)
				{
					func_767();
					func_212(456, 1);
					__LIB_0__::func_606(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_765(1))
			{
				iVar0++;
			}
			if (func_765(3))
			{
				iVar0++;
			}
			if (func_765(7))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(1))
			{
				if (iVar0 == 1)
				{
					func_769();
					func_212(457, 1);
					__LIB_0__::func_606(1);
				}
			}
			if (!__LIB_0__::func_605(2))
			{
				if (iVar0 >= 3)
				{
					func_769();
					func_212(457, 1);
					__LIB_0__::func_606(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_765(5))
			{
				iVar0++;
			}
			if (func_765(6))
			{
				iVar0++;
			}
			if (func_765(8))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(4))
			{
				if (iVar0 == 1)
				{
					func_770();
					func_212(455, 1);
					__LIB_0__::func_606(4);
				}
			}
			if (!__LIB_0__::func_605(8))
			{
				if (iVar0 >= 3)
				{
					func_770();
					func_212(455, 1);
					__LIB_0__::func_606(8);
				}
			}
			break;
	}
}

void func_720(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	char* sVar1;
	bool bVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	int iVar8;
	int iVar9;
	struct<6> Var10;
	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = iParam1 + 1;
	if (iParam2 != 0)
	{
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
		sVar1 = MISC::_CREATE_VAR_STRING(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST";
		sVar1 = MISC::_CREATE_VAR_STRING(2, "RPG_LEVEL_INCREASED_BODY", iVar3);
		bVar2 = true;
	}
	iVar3 = (iVar3 + func_777(iParam0));
	sVar4 = __LIB_0__::func_67(__LIB_0__::func_653(iVar3, iParam2));
	sVar6 = __LIB_0__::func_654(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::_CREATE_VAR_STRING(10, sVar0, __LIB_0__::func_655(iParam0));
	iVar8 = __LIB_0__::func_656(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = __LIB_0__::func_657(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	__LIB_0__::func_425(sVar7, sVar1, iVar8, iVar9, joaat("STATS_MENU"), "INPUT_FEED_INTERACT_GENERIC", __LIB_0__::func_658(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_728()
{
	var uVar0;
	struct<4> Var30;
	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	uVar0 = 29;
	__LIB_0__::func_840(Global_35, &uVar0);
	Var30 = { func_570(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_788(0);
	func_789(7);
	func_790(joaat("KIT_BANDANA"), 1, 1, 0);
	if (__LIB_0__::func_241() == 1160113249)
	{
		func_790(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		func_790(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	__LIB_0__::func_841(Global_35, &uVar0);
}

int func_737(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	if (iParam1 < 0)
	{
		iParam1 = func_307(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	__LIB_0__::func_465(&uVar6, iVar0);
	__LIB_0__::func_466(&uVar6, iVar1);
	__LIB_0__::func_951(&uVar6, iVar2);
	__LIB_0__::func_467(&uVar6, iVar3);
	__LIB_0__::func_468(&uVar6, iVar4);
	__LIB_0__::func_469(&uVar6, iVar5);
	return uVar6;
}

void func_749(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		Global_1946804.f_1497.f_1[iParam0 /*3*/] = { Global_1946804.f_1378.f_1[iParam0 /*3*/] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_92() == -1)
	{
		__LIB_0__::func_242(&(Global_1946804.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_26796.f_776);
	}
	else
	{
		__LIB_0__::func_243(&(Global_1946804.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_750(int iParam0, int iParam1)
{
	if (func_92() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26796.f_26[iParam1 /*120*/] && iParam0) != 0;
		}
		return false;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36638.f_45.f_350.f_26[iParam1 /*120*/] && iParam0) != 0;
	}
	return false;
}

void func_751(int iParam0, bool bParam1, int iParam2)
{
	func_806(&(Global_1946804.f_1378), iParam0);
	func_807(2, iParam0, 6);
	if (bParam1)
	{
		__LIB_0__::func_719(0, 1);
	}
}

bool func_764(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_252(__LIB_1__::func_8(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return true;
	}
	return false;
}

bool func_765(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_252(__LIB_1__::func_9(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return true;
	}
	return false;
}

void func_767()
{
	int iVar0;
	if (func_92() != -1)
	{
		return;
	}
	func_276(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(1);
	func_720(1, iVar0, 0);
}

void func_769()
{
	int iVar0;
	if (func_92() != -1)
	{
		return;
	}
	func_276(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(2);
	func_720(2, iVar0, 0);
}

void func_770()
{
	int iVar0;
	if (func_92() != -1)
	{
		return;
	}
	func_276(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(0);
	func_720(0, iVar0, 0);
}

int func_777(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_0xE787F05DFC977BDE(func_307(0), joaat("UPGRADE_HEALTH_TANK_1"), 0);
		case 1:
			return INVENTORY::_0xE787F05DFC977BDE(func_307(0), joaat("UPGRADE_STAMINA_TANK_1"), 0);
		case 2:
			return INVENTORY::_0xE787F05DFC977BDE(func_307(0), joaat("UPGRADE_DEADEYE_TANK_1"), 0);
	}
	return 0;
}

void func_788(bool bParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (__LIB_0__::func_144(iVar1, 0))
		{
			func_824(iVar1, 0, bParam0);
		}
		Global_1946804.f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804.f_2657.f_20 = 0;
	Global_1946804.f_2657.f_21 = 0;
	Global_1946804.f_2657.f_22 = 0;
	Global_1946804.f_2657.f_23 = 0;
	Global_1946804.f_2657.f_24 = 0;
	Global_1946804.f_2657.f_25 = 0;
	Global_1946804.f_2657.f_19 = 0;
	Global_1946804.f_2657.f_26.f_6 = 0;
}

void func_789(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Global_1946804.f_2657.f_26.f_2 = 3;
	Global_1946804.f_2657.f_26.f_1 = 3;
	Global_1946804.f_2657.f_26 = 3;
	if (func_92() == -1)
	{
		func_825(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26796.f_19)
		{
			Global_1946804.f_2657[iVar0] = Global_26796[iVar0];
			iVar0++;
		}
		Global_1946804.f_2657.f_20 = Global_26796.f_20;
		Global_1946804.f_2657.f_21 = Global_26796.f_21;
		Global_1946804.f_2657.f_22 = Global_26796.f_22;
		Global_1946804.f_2657.f_23 = Global_26796.f_23;
		Global_1946804.f_2657.f_24 = Global_26796.f_24;
		Global_1946804.f_2657.f_25 = Global_26796.f_25;
		Global_1946804.f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36638.f_45.f_350.f_19)
		{
			Global_1946804.f_2657[iVar0] = Global_36638.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804.f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946804.f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946804.f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946804.f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946804.f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946804.f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946804.f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar2 = Global_1946804.f_2657[iVar0];
		if (__LIB_0__::func_357(iVar2) != -999503751)
		{
			func_826(&(Global_1946804.f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_827(iVar2, 0))
		{
			func_828(iVar2, Global_1946804.f_1497.f_1[iVar1 /*3*/] == Global_1946804.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_790(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	if (!func_829(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_357(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_830(iParam0, &(Global_1946804.f_2657.f_21), Global_1946804.f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_830(iParam0, &(Global_1946804.f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_830(iParam0, &(Global_1946804.f_2657.f_20), Global_1946804.f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_830(iParam0, &(Global_1946804.f_2657.f_22), Global_1946804.f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_830(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_830(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == __LIB_0__::func_856(0))
	{
		func_832(iParam0, 1);
		if (__LIB_0__::func_241() == 1160113249)
		{
			func_832(__LIB_0__::func_856(-2125499975), 0);
		}
		else
		{
			func_832(__LIB_0__::func_856(1160113249), 0);
		}
	}
	func_833();
	if (__LIB_1__::func_18(iVar0))
	{
		INVENTORY::_0x766315A564594401(func_307(0), iParam0, 0);
	}
	func_828(iParam0, bParam3);
	if (bParam2)
	{
		__LIB_0__::func_719(0, 0);
	}
}

void func_806(var uParam0, int iParam1)
{
	int iVar0;
	if (func_92() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			__LIB_0__::func_242(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		__LIB_0__::func_243(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_807(int iParam0, int iParam1, int iParam2)
{
	if (func_92() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26796.f_26[iParam1 /*120*/] = (Global_26796.f_26[iParam1 /*120*/] || iParam0);
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36638.f_45.f_350.f_26[iParam1 /*120*/] = (Global_36638.f_45.f_350.f_26[iParam1 /*120*/] || iParam0);
	}
}

void func_824(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	switch (__LIB_0__::func_357(iParam0))
	{
		case -2061583405:
			bVar0 = func_849(iParam0, &(Global_1946804.f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_849(iParam0, &(Global_1946804.f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_849(iParam0, &(Global_1946804.f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_849(iParam0, &(Global_1946804.f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_849(iParam0, &(Global_1946804.f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_849(iParam0, &(Global_1946804.f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_833();
	}
	if (bParam1)
	{
		__LIB_0__::func_719(0, 0);
	}
}

void func_825(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_7 = -1;
	Var2.f_8 = -1;
	Var2.f_13 = -1;
	Var2 = { __LIB_0__::func_523(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_581(&Var2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946804.f_2657.f_26.f_2 = 5;
					Global_1946804.f_2657.f_26.f_1 = 5;
					Global_1946804.f_2657.f_26 = 5;
					break;
			}
		}
		__LIB_0__::func_238(iVar0);
	}
}

void func_826(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	__LIB_0__::func_691(iParam2, *uParam0);
	func_851(&(uParam0->f_1[*uParam0 /*5*/]), iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_827(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { func_384(iParam0, 0, 0) };
	Var5 = { func_420(iParam0, Var0, Var0.f_4, 0) };
	if (func_578(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_0x9A113C660AEA3832(func_307(0), &Var5, iParam1);
	return true;
}

void func_828(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { func_384(iParam0, 0, 0) };
	Var5 = { func_420(iParam0, Var0, Var0.f_4, 0) };
	if (func_578(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_307(0), &Var5, bParam1);
}

bool func_829(int iParam0)
{
	if (func_92() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (iParam0 == joaat("CLOTHING_WINTER_OUTFIT"))
			{
				return false;
			}
		}
	}
	return true;
}

int func_830(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	iVar1 = iParam0;
	if (Global_1946804.f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (__LIB_3__::func_412(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_827(iParam0, 0))
	{
		return 0;
	}
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = iVar1;
	if (__LIB_0__::func_357(iParam0) != -999503751)
	{
		func_826(&(Global_1946804.f_2657.f_26.f_26), iParam0, Global_1946804.f_2657.f_19);
	}
	Global_1946804.f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_832(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { func_384(iParam0, 0, 0) };
	Var5 = { func_420(iParam0, Var0, Var0.f_4, 0) };
	if (func_578(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, func_307(0), &Var5);
	return 1;
}

void func_833()
{
	int iVar0;
	if (func_92() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804.f_2657.f_19)
		{
			Global_26796[iVar0] = Global_1946804.f_2657[iVar0];
			iVar0++;
		}
		Global_26796.f_20 = Global_1946804.f_2657.f_20;
		Global_26796.f_21 = Global_1946804.f_2657.f_21;
		Global_26796.f_22 = Global_1946804.f_2657.f_22;
		Global_26796.f_23 = Global_1946804.f_2657.f_23;
		Global_26796.f_24 = Global_1946804.f_2657.f_24;
		Global_26796.f_19 = Global_1946804.f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		Global_36638.f_45.f_350[iVar0] = Global_1946804.f_2657[iVar0];
		iVar0++;
	}
	Global_36638.f_45.f_350.f_20 = Global_1946804.f_2657.f_20;
	Global_36638.f_45.f_350.f_21 = Global_1946804.f_2657.f_21;
	Global_36638.f_45.f_350.f_22 = Global_1946804.f_2657.f_22;
	Global_36638.f_45.f_350.f_23 = Global_1946804.f_2657.f_23;
	Global_36638.f_45.f_350.f_24 = Global_1946804.f_2657.f_24;
	Global_36638.f_45.f_350.f_19 = Global_1946804.f_2657.f_19;
}

int func_849(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = iParam0;
	if (!__LIB_3__::func_412(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804.f_2657.f_19 == 1)
	{
		Global_1946804.f_2657.f_19 = 0;
		*uParam1 = 0;
		if (__LIB_0__::func_357(iParam0) != -999503751)
		{
			__LIB_3__::func_701(&(Global_1946804.f_2657.f_26), 0, Global_1946804.f_2657.f_19);
		}
		Global_1946804.f_2657[0] = 0;
		return 1;
	}
	Global_1946804.f_2657.f_19 = (Global_1946804.f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804.f_2657[iVar0] = Global_1946804.f_2657[Global_1946804.f_2657.f_19];
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = 0;
	if (__LIB_0__::func_357(iParam0) != -999503751)
	{
		__LIB_3__::func_701(&(Global_1946804.f_2657.f_26), iVar0, Global_1946804.f_2657.f_19);
	}
	func_827(iParam0, 1);
	return 1;
}

void func_851(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		__LIB_1__::func_13(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = __LIB_0__::func_161(func_629(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_857(uParam0);
	}
}

void func_857(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_864(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

void func_864(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	iVar0 = func_865(__LIB_0__::func_241());
	if (*uParam0)
	{
		__LIB_0__::func_689(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(iVar0, uParam1, 0, func_92() != -1, uParam2);
	*uParam0 = 1;
}

int func_865(int iParam0)
{
	if (func_92() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
			case -449205311:
				return 0;
			case 1160113249:
				return 0;
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case joaat("MPC_PLAYER_TYPE_MP_MALE"):
			return 0;
		case joaat("MPC_PLAYER_TYPE_MP_FEMALE"):
			return 1;
		default:
			break;
	}
	return 0;
}

