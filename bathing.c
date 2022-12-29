#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	char* sLocal_3 = NULL;
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
	bool bLocal_14 = false;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	bool bLocal_23 = false;
	bool bLocal_24 = false;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	bool bLocal_27 = false;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	bool bLocal_34 = false;
	int iLocal_35 = 0;
	char cLocal_36[32] = "";
	char cLocal_40[32] = "";
	int iLocal_44 = 0;
	char* sLocal_45 = NULL;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	bool bLocal_53 = false;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	bool bLocal_60 = false;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	float fLocal_67 = 0f;
	float fLocal_68 = 0f;
	float fLocal_69 = 0f;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	bool bLocal_76 = false;
	int iLocal_77 = 0;
	bool bLocal_78 = false;
	bool bLocal_79 = false;
	bool bLocal_80 = false;
	bool bLocal_81 = false;
	struct<7> Local_82 = { -1, 168093330, -304640465, 0, 0, 0, 0 } ;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
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
	var uLocal_124 = -711536720;
	var uLocal_125 = -473983589;
	var uLocal_126 = -719620017;
	var uLocal_127 = 1138488863;
	var uLocal_128 = 814057702;
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
	var uLocal_199 = 1;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 9;
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
	struct<31> Local_235 = { 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	struct<17> Local_269 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 1;
	var uLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	char* sLocal_302 = NULL;
	char* sLocal_303 = NULL;
	char* sLocal_304 = NULL;
	char* sLocal_305 = NULL;
	char* sLocal_306 = NULL;
	char* sLocal_307 = NULL;
	char* sLocal_308 = NULL;
	char* sLocal_309 = NULL;
	char* sLocal_310 = NULL;
	char* sLocal_311 = NULL;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	bool bLocal_320 = false;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	float fLocal_326 = 0f;
	float fLocal_327 = 0f;
	int iLocal_328 = 0;
	bool bLocal_329 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_15 = 1;
	iLocal_44 = 1;
	sLocal_45 = "X";
	fLocal_67 = 0f;
	fLocal_68 = 0f;
	fLocal_69 = 0f;
	bLocal_78 = true;
	sLocal_302 = "Script_Mini_Game_Bathing_Regular";
	sLocal_303 = "Script_Mini_Game_Bathing_Deluxe";
	sLocal_304 = "MINI_GAMES@BATHING@REGULAR@ARTHUR";
	sLocal_305 = "CLIPSET@MINI_GAMES@BATHING@REGULAR@ARTHUR";
	sLocal_306 = "MINI_GAMES@BATHING@REGULAR@RAG";
	sLocal_307 = "CLIPSET@MINI_GAMES@BATHING@REGULAR@RAG";
	sLocal_308 = "MINI_GAMES@BATHING@DELUXE@ARTHUR";
	sLocal_309 = "CLIPSET@MINI_GAMES@BATHING@DELUXE@ARTHUR";
	sLocal_310 = "MINI_GAMES@BATHING@DELUXE@MAID";
	sLocal_311 = "CLIPSET@MINI_GAMES@BATHING@DELUXE@MAID";
	iLocal_312 = joaat("P_GEN_BOOTS02");
	iLocal_313 = joaat("P_BLANKETFOLDED01X");
	iLocal_314 = joaat("P_CS_RAG02X");
	iLocal_315 = 4;
	iLocal_325 = 23;
	fLocal_326 = 4f;
	fLocal_327 = 4f;
	Local_82 = -1;
	func_1(Global_35);
	if (vScriptParam_0.z != -1)
	{
	}
	else
	{
		Local_82.f_6 = __LIB_0__::func_12();
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_3(&Local_82);
	}
	Local_82.f_6 = __LIB_0__::func_12();
	if (!func_4(&Local_82))
	{
		func_3(&Local_82);
	}
	iLocal_21 = 0;
	while (!func_5(&Local_82))
	{
		func_6(&Local_82);
		func_7();
		BUILTIN::WAIT(0);
	}
	func_3(&Local_82);
}

void func_1(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = Global_35;
	}
	__LIB_9__::func_900();
	Global_1905942 = Global_40.f_7729;
	if (__LIB_0__::func_156(32768))
	{
		__LIB_7__::func_361(&(Global_1946804.f_1735.f_120));
		__LIB_0__::func_945();
	}
	if (Global_40.f_7729 <= -1)
	{
		Global_1905942 = 0;
		func_12(iParam0, Global_1905942, &(Global_1946804.f_1735), 0, Global_1946804.f_1497, 0);
	}
	else if (Global_40.f_7729 <= 5)
	{
		func_12(iParam0, Global_1905942, &(Global_1946804.f_1735), 0, Global_1946804.f_1497, 0);
	}
	else
	{
		func_12(iParam0, Global_1905942, &(Global_1946804.f_1735), 0, 0, 0);
	}
}

void func_3(int iParam0)
{
	PED::SET_PED_CAN_LEG_IK(Global_35, true);
	PED::SET_PED_LEG_IK_MODE(Global_35, 2);
	if (bLocal_14 && ENTITY::GET_ENTITY_COLLISION_DISABLED(Global_35))
	{
		ENTITY::SET_ENTITY_COLLISION(Global_35, true, false);
		ENTITY::SET_ENTITY_DYNAMIC(Global_35, true);
	}
	if (iLocal_66 == 0)
	{
	}
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_65))
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_65);
	}
	if (MAP::DOES_BLIP_EXIST(iParam0->f_5))
	{
		MAP::REMOVE_BLIP(&(iParam0->f_5));
	}
	if (MAP::DOES_BLIP_EXIST(iParam0->f_41))
	{
		MAP::REMOVE_BLIP(&(iParam0->f_41));
	}
	if (bLocal_80)
	{
		STREAMING::_REMOVE_MOVE_NETWORK_DEF(sLocal_303);
		bLocal_80 = false;
	}
	if (bLocal_79)
	{
		STREAMING::_REMOVE_MOVE_NETWORK_DEF(sLocal_302);
		bLocal_79 = false;
	}
	func_13();
	__LIB_1__::func_390("BATH_GOTO_BATH", 1);
	Global_1914319.f_18941.f_17 = 0;
	if (STREAMING::DOES_ANIM_DICT_EXIST(sLocal_308))
	{
		STREAMING::REMOVE_ANIM_DICT(sLocal_308);
	}
	if (STREAMING::DOES_ANIM_DICT_EXIST(sLocal_310))
	{
		STREAMING::REMOVE_ANIM_DICT(sLocal_310);
	}
	if (STREAMING::DOES_ANIM_DICT_EXIST(sLocal_304))
	{
		STREAMING::REMOVE_ANIM_DICT(sLocal_304);
	}
	if (STREAMING::DOES_ANIM_DICT_EXIST(sLocal_306))
	{
		STREAMING::REMOVE_ANIM_DICT(sLocal_306);
	}
	if (STREAMING::HAS_CLIP_SET_LOADED(sLocal_309))
	{
		STREAMING::REMOVE_CLIP_SET(sLocal_309);
	}
	if (STREAMING::HAS_CLIP_SET_LOADED(sLocal_311))
	{
		STREAMING::REMOVE_CLIP_SET(sLocal_311);
	}
	if (STREAMING::HAS_CLIP_SET_LOADED(sLocal_305))
	{
		STREAMING::REMOVE_CLIP_SET(sLocal_305);
	}
	if (STREAMING::HAS_CLIP_SET_LOADED(sLocal_307))
	{
		STREAMING::REMOVE_CLIP_SET(sLocal_307);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
	{
		OBJECT::DELETE_OBJECT(&iLocal_62);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
	{
		OBJECT::DELETE_OBJECT(&iLocal_64);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
	{
		OBJECT::DELETE_OBJECT(&iLocal_63);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_135))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_135, true);
		PED::DELETE_PED(&(iParam0->f_135));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_144))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_144, true);
		PED::DELETE_PED(&(iParam0->f_144));
	}
	if (PED::_0x5C16855277819BBF() > 0)
	{
		PED::_0x7D4E70A67A651C71(PED::_0x5C16855277819BBF());
	}
	__LIB_0__::func_172(iParam0->f_13);
	__LIB_0__::func_172(iParam0->f_14);
	func_16(iParam0);
	STREAMING::REMOVE_PTFX_ASSET();
	Global_1395601.f_2 = 0;
	Global_1914319.f_18941.f_15 = 0;
	if (!__LIB_2__::func_776() && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	}
	if (bLocal_60 && iLocal_61 == 0)
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
		func_18(Global_35, 1);
		__LIB_4__::func_517(0);
		AUDIO::TRIGGER_MUSIC_EVENT("MG_BATHING_STOP");
		INVENTORY::_0xE36D4A38D28D9CFB(0);
		INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	}
	if (bLocal_81 && __LIB_0__::func_1(Global_1935630, 2))
	{
		__LIB_0__::func_8(&Global_1935630, 2);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_4(int iParam0)
{
	iParam0->f_1 = -972966383;
	iParam0->f_2 = joaat("BLIP_BATH_HOUSE");
	iParam0->f_6 = __LIB_0__::func_12();
	func_22(iParam0);
	return true;
}

bool func_5(int iParam0)
{
	iParam0->f_130++;
	if (IntToFloat(iParam0->f_130) < 10f)
	{
		return false;
	}
	if (iParam0->f_112 == 4)
	{
		if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return true;
		}
		if (INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return true;
		}
	}
	iParam0->f_130 = 0;
	if (iParam0->f_17)
	{
		return true;
	}
	if (__LIB_0__::func_12() != iParam0->f_6 || iParam0->f_6 == -1)
	{
		return true;
	}
	return false;
}

void func_6(int iParam0)
{
	bool bVar0;
	var uVar1;
	float fVar2;
	if (bLocal_23)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_46) > 3000)
		{
			func_24(iParam0, "SCRUB_RESPONSE", 0);
			bLocal_23 = false;
		}
	}
	if (bLocal_27)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_47) > 3000)
		{
			func_24(iParam0, "DECLINE_SPECIAL_BATH", 1);
			bLocal_27 = false;
		}
	}
	bVar0 = false;
	if (__LIB_0__::func_12() == 92)
	{
		FIRE::STOP_FIRE_IN_RANGE(iParam0->f_60, 5f);
	}
	if (iParam0->f_112 > 7)
	{
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
		__LIB_3__::func_378(iParam0->f_14, 1);
		if (PED::IS_PED_INJURED(Global_35) || PED::IS_PED_DEAD_OR_DYING(Global_35, true))
		{
			func_18(Global_35, 1);
		}
		PED::SET_PED_CAN_LEG_IK(Global_35, false);
		PED::SET_PED_LEG_IK_MODE(Global_35, 0);
		FIRE::STOP_FIRE_IN_RANGE(iParam0->f_60, 10f);
		CAM::_0x8370D34BD2E60B73();
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
		CAM::_0x3C8F74E8FE751614();
		func_26();
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
	}
	if (iParam0->f_15 == 1)
	{
		if (iParam0->f_112 == 14 || iParam0->f_112 == 16)
		{
			func_27(iParam0);
		}
		else
		{
			if (__LIB_0__::func_139(iLocal_16))
			{
				__LIB_1__::func_281(&iLocal_16, 1, 1);
			}
			if (__LIB_0__::func_139(iLocal_17))
			{
				__LIB_1__::func_281(&iLocal_17, 1, 1);
			}
		}
	}
	switch (iParam0->f_112)
	{
		case 0:
			func_30(iParam0, iParam0->f_119, 1);
			func_31(iParam0, 1);
			iParam0->f_19 = 0;
			iParam0->f_112 = 1;
			break;
		case 1:
			__LIB_11__::func_862(Global_35, __LIB_9__::func_891(iLocal_325));
			func_34(iParam0, 0);
			if (iParam0->f_19 && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				iParam0->f_19 = 0;
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			}
			if (iParam0->f_6 == 115)
			{
				func_30(iParam0, iParam0->f_119, 0);
			}
			iParam0->f_3 = 1;
			PED::_0xED9582B3DA8F02B4(2);
			StringCopy(&Local_269, "bath_orbit_cam", 64);
			StringCopy(&(Local_269.f_8), "BATH_ORBIT_REQUEST", 64);
			CAM::_0x6A4D224FC7643941(&Local_269);
			iParam0->f_31 = 0;
			iParam0->f_30 = 0;
			iParam0->f_32 = 0;
			iParam0->f_113 = 0;
			iParam0->f_115 = 0;
			iParam0->f_33 = 0;
			if (bLocal_78)
			{
				iParam0->f_36 = 0;
				iParam0->f_37 = 0;
			}
			func_35(iParam0);
			iLocal_65 = INTERIOR::GET_INTERIOR_AT_COORDS(iParam0->f_60);
			if (INTERIOR::IS_VALID_INTERIOR(iLocal_65))
			{
				if (iParam0->f_6 == 38)
				{
					iLocal_66 = GRAPHICS::_0x5D1C5D8E62E8EE1C(iLocal_65);
					if (iLocal_66 == 0)
					{
					}
					else if (!GRAPHICS::_0x113857D66A9CABE6(iLocal_66))
					{
						GRAPHICS::_0xBFCB17895BB99E4E(iLocal_66, 1);
					}
				}
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_65);
			}
			__LIB_1__::func_283(&(iParam0->f_131), 1);
			iParam0->f_112 = 3;
			break;
		case 2:
			if (!func_37(iParam0, &uVar1))
			{
				if (iParam0->f_6 == 115)
				{
					func_30(iParam0, iParam0->f_119, 0);
				}
				func_38(iParam0, iParam0->f_10, 0);
				__LIB_1__::func_283(&(iParam0->f_131), 1);
				iParam0->f_112 = 3;
			}
			break;
		case 3:
			if (func_37(iParam0, &uVar1))
			{
				func_30(iParam0, iParam0->f_119, 1);
				func_34(iParam0, 0);
				__LIB_0__::func_769();
				iParam0->f_112 = 2;
			}
			if (__LIB_0__::func_75(&(iParam0->f_131)) && __LIB_0__::func_265(&(iParam0->f_131)) > 15f)
			{
				iParam0->f_17 = 1;
				__LIB_0__::func_37(&(iParam0->f_131));
			}
			else
			{
				if ((func_43() && !PED::_IS_PED_CARRYING(Global_35)) && iParam0->f_112 == 3)
				{
					if (__LIB_1__::func_935(Global_1914319.f_16855.f_1, 262144))
					{
						__LIB_1__::func_937(Global_1914319.f_16855.f_1, 262144);
					}
					else
					{
						__LIB_2__::func_522(Global_1914319.f_18941.f_13, 0, 0, 1, 1);
						__LIB_15__::func_670(Global_1914319.f_16855, Global_1914319.f_16855.f_1, 470467759, 1, Global_1914319.f_18941.f_13);
					}
					Global_1914319.f_18941.f_16 = 1;
					__LIB_12__::func_556(2);
					__LIB_0__::func_37(&(iParam0->f_131));
					func_38(iParam0, iParam0->f_10, 1);
					iParam0->f_112 = 4;
				}
				Jump @6168; //curOff = 1022
				if (func_37(iParam0, &uVar1))
				{
					func_30(iParam0, iParam0->f_119, 1);
					func_34(iParam0, 0);
					__LIB_0__::func_769();
					iParam0->f_112 = 2;
				}
				if ((((func_49(iParam0, 0) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_14, true, 0)) && func_43()) && iParam0->f_112 == 4) && !PED::_IS_PED_CARRYING(Global_35))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
					iLocal_62 = OBJECT::CREATE_OBJECT(iLocal_312, iParam0->f_60, iParam0->f_60.f_1, (iParam0->f_60.f_2 - 8f), true, true, false, false, true);
					iLocal_63 = OBJECT::CREATE_OBJECT(iLocal_313, iParam0->f_60, (iParam0->f_60.f_1 + 1f), (iParam0->f_60.f_2 - 5f), true, true, false, false, true);
					iLocal_64 = OBJECT::CREATE_OBJECT(iLocal_314, iParam0->f_60, (iParam0->f_60.f_1 + 0.2f), (iParam0->f_60.f_2 + 2f), true, true, false, false, true);
					StringCopy(&(iParam0->f_96), "s_regular_intro", 32);
					INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
					INVENTORY::_0xE36D4A38D28D9CFB(1);
					Global_1914319.f_18941.f_17 = 1;
					Global_1935183.f_26 = 1;
					__LIB_1__::func_309(-1, 0, 0, 0, 0);
					iLocal_300 = 1;
					iParam0->f_112 = 5;
				}
				Jump @6168; //curOff = 1301
				if (iLocal_300 == 3)
				{
					iLocal_300 = 6;
					if (__LIB_4__::func_296("BATH_GOTO_BATH", 1))
					{
						__LIB_1__::func_390("BATH_GOTO_BATH", 1);
					}
					__LIB_0__::func_769();
					WEAPON::REMOVE_ALL_PED_WEAPONS(Global_35, true, true);
					if (__LIB_0__::func_272(Global_35, 0))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
						}
						MAP::DISPLAY_RADAR(false);
						if (__LIB_0__::func_272(Global_35, 0))
						{
							TASK::CLEAR_PED_TASKS(Global_35, true, false);
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
						}
					}
					__LIB_11__::func_862(Global_35, __LIB_9__::func_891(iLocal_325));
					STREAMING::REQUEST_ANIM_DICT(sLocal_304);
					STREAMING::REQUEST_ANIM_DICT(sLocal_306);
					STREAMING::REQUEST_CLIP_SET(sLocal_305);
					STREAMING::REQUEST_CLIP_SET(sLocal_307);
					STREAMING::_REQUEST_MOVE_NETWORK_DEF(sLocal_302);
					STREAMING::_REQUEST_MOVE_NETWORK_DEF(sLocal_303);
					STREAMING::REQUEST_ANIM_DICT(sLocal_308);
					STREAMING::REQUEST_ANIM_DICT(sLocal_310);
					STREAMING::REQUEST_CLIP_SET(sLocal_309);
					STREAMING::REQUEST_CLIP_SET(sLocal_311);
					iParam0->f_38 = func_53(1203988035, -915411861, 1, 0, 0);
					func_34(iParam0, 0);
					func_54(iParam0);
					__LIB_12__::func_556(8);
					iParam0->f_112 = 6;
				}
				Jump @6168; //curOff = 1553
				if ((((STREAMING::_HAS_MOVE_NETWORK_DEF_LOADED(sLocal_302) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_304)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_306)) && STREAMING::HAS_CLIP_SET_LOADED(sLocal_305)) && STREAMING::HAS_CLIP_SET_LOADED(sLocal_307))
				{
					iParam0->f_112 = 7;
				}
				Jump @6168; //curOff = 1619
				if (iLocal_300 == 8)
				{
					func_55(iParam0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
					{
					}
					Local_235.f_1 = joaat("DEFAULT");
					Local_235 = joaat("CLIPSET@MINI_GAMES@BATHING@REGULAR@ARTHUR");
					Local_235.f_30 = "BATHING";
					TASK::TASK_MOVE_NETWORK_BY_NAME_WITH_INIT_PARAMS(Global_35, sLocal_302, &Local_235, 1f, false, 0, 0);
					iLocal_58 = MISC::GET_GAME_TIMER();
					Local_235.f_1 = joaat("DEFAULT");
					Local_235 = joaat("CLIPSET@MINI_GAMES@BATHING@REGULAR@RAG");
					Local_235.f_30 = "BATHING";
					TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(iLocal_64, sLocal_302, &Local_235, iParam0->f_60, 0f, 0f, iParam0->f_63, 2, 3f, 0, 0, 0, 0);
					PED::_0x2208438012482A1A(Global_35, false, false);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_64, true);
					ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
					bLocal_14 = true;
					ENTITY::SET_ENTITY_COLLISION(Global_35, false, false);
					ENTITY::SET_ENTITY_DYNAMIC(Global_35, false);
					if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					}
					bLocal_79 = true;
					fLocal_67 = 0f;
					PED::_0x55546004A244302A(Global_35, 1);
					__LIB_4__::func_801(16, -100f);
					__LIB_1__::func_283(&uLocal_70, 1);
					iParam0->f_112 = 14;
				}
				Jump @6168; //curOff = 1849
				if (((((iLocal_301 == 8 && STREAMING::_HAS_MOVE_NETWORK_DEF_LOADED(sLocal_303)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_308)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_310)) && STREAMING::HAS_CLIP_SET_LOADED(sLocal_309)) && STREAMING::HAS_CLIP_SET_LOADED(sLocal_311))
				{
					func_57(iParam0);
					ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
					bLocal_14 = true;
					ENTITY::SET_ENTITY_COLLISION(Global_35, false, false);
					ENTITY::SET_ENTITY_DYNAMIC(Global_35, false);
					bLocal_80 = true;
					ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_144, true);
					ENTITY::SET_ENTITY_COLLISION(iParam0->f_144, false, false);
					ENTITY::SET_ENTITY_DYNAMIC(iParam0->f_144, false);
					Local_235.f_1 = joaat("DEFAULT");
					Local_235 = joaat("CLIPSET@MINI_GAMES@BATHING@DELUXE@ARTHUR");
					TASK::TASK_MOVE_NETWORK_BY_NAME_WITH_INIT_PARAMS(Global_35, sLocal_303, &Local_235, 1f, false, 0, 0);
					iLocal_58 = MISC::GET_GAME_TIMER();
					Local_235.f_1 = joaat("DEFAULT");
					Local_235 = joaat("CLIPSET@MINI_GAMES@BATHING@DELUXE@MAID");
					TASK::TASK_MOVE_NETWORK_BY_NAME_WITH_INIT_PARAMS(iParam0->f_144, sLocal_303, &Local_235, 1f, false, 0, 0);
					Local_235.f_1 = joaat("DEFAULT");
					Local_235 = 771395316;
					PED::_0x2208438012482A1A(Global_35, false, false);
					PED::_0x2208438012482A1A(iParam0->f_144, false, false);
					fLocal_67 = 0f;
					func_58(iParam0);
					__LIB_1__::func_283(&uLocal_70, 1);
					iParam0->f_112 = 14;
				}
				Jump @6168; //curOff = 2114
				func_58(iParam0);
				if (func_49(iParam0, 1))
				{
					if (iParam0->f_116 == 0)
					{
						StringCopy(&(iParam0->f_104), "s_deluxe_intro", 32);
						iLocal_301 = 1;
						iParam0->f_112 = 11;
					}
				}
				Jump @6168; //curOff = 2161
				if (iLocal_301 == 5)
				{
					if (bLocal_53)
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iParam0->f_144) && (MISC::GET_GAME_TIMER() - iLocal_47) > 3000)
						{
							if (func_59(&(iParam0->f_24), "BUY_BATH_SPL", joaat("INPUT_INTERACT_POS"), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), iParam0->f_38))
							{
								iParam0->f_15 = 1;
								__LIB_2__::func_522(iParam0->f_38, 0, 0, 1, 1);
								__LIB_14__::func_444(Global_1914319.f_16855, Global_1914319.f_16855.f_1, 1203988035, 1, iParam0->f_38);
								func_31(iParam0, 1);
								iLocal_301 = 6;
								iParam0->f_112 = 8;
								func_61(iParam0, "PLAYER_ACCEPTS_SPECIAL_BATH");
								iLocal_26 = 1;
								iLocal_47 = MISC::GET_GAME_TIMER();
							}
							else if (func_62(&(iParam0->f_23), "GREET_NEG", joaat("INPUT_GAME_MENU_CANCEL"), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0, 0, 0, 0))
							{
								func_31(iParam0, 1);
								ANIMSCENE::ABORT_ANIM_SCENE(iParam0->f_69, false);
								ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_69);
								iLocal_301 = 8;
								iParam0->f_112 = 7;
								func_61(iParam0, "PLAYER_DECLINES_SPECIAL_BATH");
								bLocal_27 = true;
								iLocal_47 = MISC::GET_GAME_TIMER();
							}
							else
							{
								Jump @2488; //curOff = 2412
								iParam0->f_15 = 1;
								__LIB_2__::func_522(iParam0->f_38, 0, 0, 1, 1);
								__LIB_14__::func_444(Global_1914319.f_16855, Global_1914319.f_16855.f_1, 1203988035, 1, iParam0->f_38);
								func_31(iParam0, 1);
								iLocal_301 = 6;
								iParam0->f_112 = 8;
								iLocal_47 = MISC::GET_GAME_TIMER();
								Jump @6168; //curOff = 2485
								Jump @6168; //curOff = 2488
								ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_69);
								if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_144))
								{
									PED::DELETE_PED(&(iParam0->f_144));
								}
								iParam0->f_112 = 14;
								Jump @6168; //curOff = 2524
								if (iParam0->f_116 == 0)
								{
									if (func_62(&(iParam0->f_28), "BATH_EXIT", joaat("INPUT_GAME_MENU_CANCEL"), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0, 0, 0, 0))
									{
										iParam0->f_116 = 1;
										func_31(iParam0, 1);
									}
								}
								if (((iLocal_323 == 1 && iLocal_324 == 1) && iLocal_321 == 1) && iLocal_322 == 1)
								{
									if (iLocal_77 == 0)
									{
										__LIB_9__::func_469(100f);
										iLocal_77 = 1;
									}
									if (iLocal_54 == 0)
									{
										iLocal_55 = MISC::GET_GAME_TIMER();
										iLocal_54 = 1;
									}
									else if ((MISC::GET_GAME_TIMER() - iLocal_55) > 15000)
									{
										if (iParam0->f_116 == 0)
										{
											iParam0->f_116 = 1;
											func_31(iParam0, 1);
										}
									}
								}
								func_58(iParam0);
								if (iParam0->f_116 == 0)
								{
									if (func_64(iParam0, "Bathing", 1) || func_64(iParam0, "Intro", 1))
									{
										if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
										{
											PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
										}
										if (iLocal_57 == 1)
										{
											iLocal_57 = 0;
											if (iParam0->f_32 == 0)
											{
												__LIB_1__::func_221(iParam0->f_25, 1, 1);
											}
											if (iParam0->f_31 == 0)
											{
												__LIB_1__::func_221(iParam0->f_27, 1, 1);
											}
											if (iParam0->f_30 == 0)
											{
												__LIB_1__::func_221(iParam0->f_26, 1, 1);
											}
											if (bLocal_53 == 0)
											{
												if (iParam0->f_15 == 0)
												{
													__LIB_1__::func_221(iParam0->f_24, 1, 1);
												}
											}
										}
										if (iParam0->f_15 == 0)
										{
											if (func_62(&(iParam0->f_25), "BATH_SCRUBHD", joaat("INPUT_CONTEXT_Y"), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0, iParam0->f_32, 0, 0))
											{
												func_66(iParam0, 1);
												StringCopy(&(iParam0->f_20), "BATH_SCRUBHD", 24);
												bVar0 = true;
											}
											if (iParam0->f_36 >= 1)
											{
												StringCopy(&(iParam0->f_20), "BATH_ARMLFT", 24);
											}
											else
											{
												StringCopy(&(iParam0->f_20), "BATH_ARMRHT", 24);
											}
											if (func_62(&(iParam0->f_27), &(iParam0->f_20), joaat("INPUT_CONTEXT_X"), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0, iParam0->f_31, 0, 0))
											{
												func_66(iParam0, 2);
												bVar0 = true;
											}
											if (iParam0->f_37 >= 1)
											{
												StringCopy(&(iParam0->f_20), "BATH_LEGRHT", 24);
											}
											else
											{
												StringCopy(&(iParam0->f_20), "BATH_LEGLFT", 24);
											}
											if (func_62(&(iParam0->f_26), &(iParam0->f_20), joaat("INPUT_CONTEXT_A"), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0, iParam0->f_30, 0, 0))
											{
												func_66(iParam0, 3);
												bVar0 = true;
											}
										}
										else
										{
											if (iLocal_323 == 0 || iLocal_324 == 0)
											{
												if (iLocal_323 == 0)
												{
													StringCopy(&(iParam0->f_20), "BATH_ARMLFT", 24);
												}
												else
												{
													StringCopy(&(iParam0->f_20), "BATH_ARMRHT", 24);
												}
												if (func_62(&(iParam0->f_27), &(iParam0->f_20), joaat("INPUT_CONTEXT_X"), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0, iParam0->f_31, 1, 0))
												{
													func_66(iParam0, 2);
													bVar0 = true;
												}
											}
											if (iLocal_321 == 0 || iLocal_322 == 0)
											{
												if (iLocal_321 == 0)
												{
													StringCopy(&(iParam0->f_20), "BATH_LEGLFT", 24);
												}
												else
												{
													StringCopy(&(iParam0->f_20), "BATH_LEGRHT", 24);
												}
												if (func_62(&(iParam0->f_26), &(iParam0->f_20), joaat("INPUT_CONTEXT_A"), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0, iParam0->f_30, 1, 0))
												{
													func_66(iParam0, 3);
													bVar0 = true;
												}
											}
										}
										if (bLocal_53 == 0)
										{
											if (iParam0->f_15 == 0)
											{
												if (func_59(&(iParam0->f_24), "BUY_BATH_DLX", joaat("INPUT_FRONTEND_LB"), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), iParam0->f_38) || bLocal_76 == 1)
												{
													if (bLocal_76)
													{
													}
													iParam0->f_112 = 10;
													func_31(iParam0, 1);
												}
											}
										}
										if (bVar0)
										{
											if (__LIB_0__::func_75(&uLocal_73))
											{
												__LIB_0__::func_37(&uLocal_73);
											}
											func_31(iParam0, 1);
											fLocal_69 = 0f;
											if (iParam0->f_15)
											{
												iParam0->f_112 = 16;
												iLocal_315 = 4;
												iLocal_316 = 0;
												bLocal_320 = false;
											}
											else
											{
												if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
												{
													PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
												}
												iParam0->f_112 = 17;
											}
										}
										else
										{
											Jump @3650; //curOff = 3417
											iLocal_57 = 1;
											if (iParam0->f_15 == 0)
											{
												if (func_62(&(iParam0->f_25), "BATH_SCRUBHD", joaat("INPUT_CONTEXT_Y"), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0, iParam0->f_32, 0, 1))
												{
												}
												if (iParam0->f_36 >= 1)
												{
													StringCopy(&(iParam0->f_20), "BATH_ARMLFT", 24);
												}
												else
												{
													StringCopy(&(iParam0->f_20), "BATH_ARMRHT", 24);
												}
												if (func_62(&(iParam0->f_27), &(iParam0->f_20), joaat("INPUT_CONTEXT_X"), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0, iParam0->f_31, 0, 1))
												{
												}
												if (iParam0->f_37 >= 1)
												{
													StringCopy(&(iParam0->f_20), "BATH_LEGRHT", 24);
												}
												else
												{
													StringCopy(&(iParam0->f_20), "BATH_LEGLFT", 24);
												}
												if (func_62(&(iParam0->f_26), &(iParam0->f_20), joaat("INPUT_CONTEXT_A"), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0, iParam0->f_30, 0, 1))
												{
												}
												if (bLocal_53 == 0)
												{
													if (func_59(&(iParam0->f_24), "BUY_BATH_DLX", joaat("INPUT_FRONTEND_LB"), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), iParam0->f_38))
													{
													}
													__LIB_1__::func_221(iParam0->f_24, 0, 1);
												}
											}
											Jump @6168; //curOff = 3650
											if (iLocal_321 == 0)
											{
												if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Scrub_Left_Leg"))
												{
													iLocal_321 = 1;
												}
											}
											if (iLocal_322 == 0)
											{
												if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Scrub_Right_Leg"))
												{
													iLocal_322 = 1;
												}
											}
											if (iLocal_323 == 0)
											{
												if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Scrub_Left_Arm"))
												{
													iLocal_323 = 1;
												}
											}
											if (iLocal_324 == 0)
											{
												if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Scrub_Right_Arm"))
												{
													iLocal_324 = 1;
												}
											}
											if (((iLocal_323 == 1 && iLocal_324 == 1) && iLocal_321 == 1) && iLocal_322 == 1)
											{
												if (iLocal_77 == 0)
												{
													__LIB_9__::func_469(100f);
													iLocal_77 = 1;
												}
											}
											if (iParam0->f_116 == 0)
											{
												if (func_62(&(iParam0->f_28), "BATH_EXIT", joaat("INPUT_GAME_MENU_CANCEL"), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0, 0, 0, 0))
												{
													iParam0->f_116 = 1;
													func_31(iParam0, 1);
												}
											}
											if (!__LIB_0__::func_75(&uLocal_73) && iLocal_315 == 4)
											{
												__LIB_1__::func_283(&uLocal_73, 1);
												if (iLocal_15 == 0)
												{
													func_61(iParam0, "SCRUB_DIRECTIONS");
													bLocal_23 = true;
													iLocal_46 = MISC::GET_GAME_TIMER();
												}
											}
											fVar2 = (__LIB_0__::func_265(&uLocal_73) / 15f);
											if (fVar2 > 1f)
											{
												fVar2 = 1f;
											}
											func_67(iParam0, fVar2);
											if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Global_35))
											{
												if (iLocal_315 == 4)
												{
													if (!__LIB_0__::func_75(&uLocal_317))
													{
														__LIB_1__::func_283(&uLocal_317, 1);
													}
													if (bLocal_320 == 0)
													{
														if (__LIB_3__::func_135(&uLocal_317) > 2000)
														{
															if (((MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Scrub_Left_Arm") || MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Scrub_Right_Arm")) || MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Scrub_Left_Leg")) || MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Scrub_Right_Leg"))
															{
																if (!iLocal_315 == 2)
																{
																	if (iLocal_323 == 0 || iLocal_324 == 0)
																	{
																		if (iLocal_323 == 0)
																		{
																			StringCopy(&(iParam0->f_20), "BATH_ARMLFT", 24);
																		}
																		else
																		{
																			StringCopy(&(iParam0->f_20), "BATH_ARMRHT", 24);
																		}
																		if (func_62(&(iParam0->f_27), &(iParam0->f_20), joaat("INPUT_CONTEXT_X"), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0, iParam0->f_31, 1, 0))
																		{
																			iLocal_316 = 1;
																			__LIB_0__::func_37(&uLocal_317);
																			__LIB_1__::func_281(&(iParam0->f_27), 1, 1);
																			__LIB_1__::func_281(&(iParam0->f_26), 1, 1);
																			func_31(iParam0, 1);
																			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Scrub_Idle");
																			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iParam0->f_144, "Scrub_Idle");
																			iLocal_315 = 2;
																			if (!__LIB_0__::func_75(&uLocal_317))
																			{
																				__LIB_1__::func_283(&uLocal_317, 1);
																			}
																			if (iLocal_15 == 0)
																			{
																				func_61(iParam0, "SCRUB_DIRECTIONS");
																				bLocal_23 = true;
																				iLocal_46 = MISC::GET_GAME_TIMER();
																			}
																		}
																	}
																}
																if (!iLocal_315 == 2)
																{
																	if (iLocal_321 == 0 || iLocal_322 == 0)
																	{
																		if (iLocal_321 == 0)
																		{
																			StringCopy(&(iParam0->f_20), "BATH_LEGLFT", 24);
																		}
																		else
																		{
																			StringCopy(&(iParam0->f_20), "BATH_LEGRHT", 24);
																		}
																		if (func_62(&(iParam0->f_26), &(iParam0->f_20), joaat("INPUT_CONTEXT_A"), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0, iParam0->f_30, 1, 0))
																		{
																			iLocal_316 = 2;
																			__LIB_0__::func_37(&uLocal_317);
																			__LIB_1__::func_281(&(iParam0->f_26), 1, 1);
																			__LIB_1__::func_281(&(iParam0->f_27), 1, 1);
																			func_31(iParam0, 1);
																			iLocal_316 = 2;
																			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Scrub_Idle");
																			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iParam0->f_144, "Scrub_Idle");
																			iLocal_315 = 2;
																			if (!__LIB_0__::func_75(&uLocal_317))
																			{
																				__LIB_1__::func_283(&uLocal_317, 1);
																			}
																			if (iLocal_15 == 0)
																			{
																				func_61(iParam0, "SCRUB_DIRECTIONS");
																				bLocal_23 = true;
																				iLocal_46 = MISC::GET_GAME_TIMER();
																			}
																		}
																	}
																}
															}
														}
													}
													if (__LIB_3__::func_135(&uLocal_317) > 8000 || bLocal_320)
													{
														__LIB_0__::func_37(&uLocal_317);
														iLocal_316 = 0;
														fLocal_67 = 0f;
														__LIB_0__::func_37(&uLocal_73);
														func_66(iParam0, 5);
														func_31(iParam0, 1);
														iParam0->f_112 = 14;
													}
												}
												if (iLocal_315 == 2)
												{
													if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Scrub_Idle"))
													{
														if (iLocal_316 != 0)
														{
															if (__LIB_3__::func_135(&uLocal_317) > 6000)
															{
																if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Global_35))
																{
																	if (iLocal_316 == 1)
																	{
																		if (iLocal_323 == 0)
																		{
																			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Scrub_Left_Arm");
																			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iParam0->f_144, "Scrub_Left_Arm");
																		}
																		else
																		{
																			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Scrub_Right_Arm");
																			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iParam0->f_144, "Scrub_Right_Arm");
																		}
																	}
																	if (iLocal_316 == 2)
																	{
																		if (iLocal_321 == 0)
																		{
																			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Scrub_Left_leg");
																			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iParam0->f_144, "Scrub_Left_Leg");
																		}
																		else
																		{
																			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Scrub_Right_Leg");
																			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iParam0->f_144, "Scrub_Right_Leg");
																		}
																	}
																	__LIB_0__::func_37(&uLocal_317);
																	iLocal_315 = 3;
																}
															}
														}
													}
												}
												if (iLocal_315 == 3)
												{
													if (iLocal_316 == 2)
													{
														if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Scrub_Left_Leg") || MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Scrub_Right_Leg"))
														{
															iLocal_315 = 4;
														}
													}
													if (iLocal_316 == 1)
													{
														if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Scrub_Left_Arm") || MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Scrub_Right_Arm"))
														{
															iLocal_315 = 4;
														}
													}
												}
											}
											Jump @6168; //curOff = 4871
											if (iParam0->f_117 == 2)
											{
												switch (iParam0->f_115)
												{
													case 1:
														func_62(&(iParam0->f_29), "BATH_SCRUB", joaat("INPUT_CONTEXT_Y"), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1, 0, 0, 0);
														break;
													case 2:
														func_62(&(iParam0->f_29), "BATH_SCRUB", joaat("INPUT_CONTEXT_X"), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1, 0, 0, 0);
														break;
													case 3:
														func_62(&(iParam0->f_29), "BATH_SCRUB", joaat("INPUT_CONTEXT_A"), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1, 0, 0, 0);
														break;
													default:
														func_62(&(iParam0->f_29), "BATH_SCRUB", joaat("INPUT_CONTEXT_X"), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1, 0, 0, 0);
														break;
												}
												if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
												{
													PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
												}
												iParam0->f_34 = 1;
												iParam0->f_112 = 18;
											}
											Jump @6168; //curOff = 5080
											func_58(iParam0);
											if (iParam0->f_116 == 0)
											{
												if (func_69(iParam0))
												{
													if (fLocal_67 >= 1f || bLocal_76 == 1)
													{
														switch (iParam0->f_115)
														{
															case 1:
																iParam0->f_32 = 1;
																break;
															case 2:
																iParam0->f_36++;
																if (iParam0->f_36 >= 2)
																{
																	iParam0->f_31 = 1;
																}
																break;
															case 3:
																iParam0->f_37++;
																if (iParam0->f_37 >= 2)
																{
																	iParam0->f_30 = 1;
																}
																break;
														}
														if ((iParam0->f_32 && iParam0->f_31) && iParam0->f_30)
														{
															__LIB_0__::func_45("BATH_STAMINA_UP", 10000, 0, 0, 0, 1);
															__LIB_9__::func_158(200f, 0, 0, 1);
															__LIB_0__::func_146(-1);
															if (iParam0->f_15)
															{
																func_73(1203988035, 1);
															}
															else
															{
																func_73(470467759, 1);
															}
														}
														fLocal_67 = 0f;
														__LIB_0__::func_37(&uLocal_73);
														func_66(iParam0, 5);
														func_31(iParam0, 1);
														if (bLocal_78)
														{
															if (bLocal_53)
															{
																iParam0->f_112 = 10;
															}
															else
															{
																iParam0->f_112 = 14;
															}
															bLocal_78 = false;
														}
														else
														{
															iParam0->f_112 = 14;
														}
													}
													else
													{
														Jump @6168; //curOff = 5362
														if (iLocal_301 == 4)
														{
															iLocal_301 = 6;
															iParam0->f_112 = 20;
														}
														Jump @6168; //curOff = 5382
														if ((iParam0->f_15 && iLocal_301 == 8) || iParam0->f_15 == 0)
														{
															func_74(iParam0);
															if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_144))
															{
																PED::DELETE_PED(&(iParam0->f_144));
															}
															PED::CLEAR_PED_ENV_DIRT(Global_35);
															if (iParam0->f_6 == 115)
															{
																StringCopy(&(iParam0->f_96), "Pbl_Regular_Outro", 32);
															}
															else
															{
																StringCopy(&(iParam0->f_96), "s_Regular_outro", 32);
															}
															iLocal_300 = 1;
															iParam0->f_112 = 22;
														}
														Jump @6168; //curOff = 5489
														if (iLocal_300 == 3)
														{
															iLocal_300 = 6;
															func_57(iParam0);
															iParam0->f_112 = 23;
														}
														Jump @6168; //curOff = 5515
														switch (iParam0->f_6)
														{
															case 38:
																fLocal_327 = 2.6f;
																break;
															default:
																fLocal_327 = 2.6f;
																break;
														}
														if (iLocal_61 == 0)
														{
															if (__LIB_9__::func_897() == 0)
															{
																func_76();
															}
															if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1347001366))
															{
																PED::CLEAR_PED_WETNESS(Global_35);
																__LIB_4__::func_517(0);
																func_13();
																ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
																iLocal_61 = 1;
																if (ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iParam0->f_68, "BOOTS", false)))
																{
																}
																if (__LIB_0__::func_113())
																{
																}
																func_18(Global_35, 1);
																__LIB_7__::func_174(0);
																PED::_0xE3144B932DFDFF65(Global_35, 0f, -1, true, true);
																PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_35, 10, "ALL");
																PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
																func_16(iParam0);
																AUDIO::TRIGGER_MUSIC_EVENT("MG_BATHING_STOP");
																INVENTORY::_0xE36D4A38D28D9CFB(0);
																INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
																if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_135))
																{
																	ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam0->f_68, "FEMALE", iParam0->f_135);
																	ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_135, true);
																	PED::DELETE_PED(&(iParam0->f_135));
																}
																if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_144))
																{
																	ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_144, true);
																	PED::DELETE_PED(&(iParam0->f_144));
																}
																iParam0->f_16 = 1;
																AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("BATHING");
																AUDIO::_0x531A78D6BF27014B("BATHING_Sounds");
															}
														}
														if (iLocal_300 == 8)
														{
															ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
															ENTITY::SET_ENTITY_COLLISION(Global_35, true, false);
															ENTITY::SET_ENTITY_DYNAMIC(Global_35, true);
															func_13();
															if (__LIB_4__::func_296("BATH_GOTO_BATH", 1))
															{
																__LIB_1__::func_390("BATH_GOTO_BATH", 1);
															}
															if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
															{
																PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
															}
															if (__LIB_0__::func_272(Global_35, 0))
															{
															}
															if (__LIB_0__::func_1(Global_1935630, 2))
															{
																__LIB_0__::func_8(&Global_1935630, 2);
																bLocal_81 = false;
															}
															if (ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iParam0->f_68, "BOOTS", false)))
															{
																ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam0->f_68, "BOOTS", iLocal_62);
															}
															if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
															{
																OBJECT::DELETE_OBJECT(&iLocal_64);
															}
															if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
															{
																ENTITY::SET_ENTITY_COORDS(iLocal_62, iParam0->f_60, iParam0->f_60.f_1, (iParam0->f_60.f_2 - 20f), true, false, true, true);
																OBJECT::_0xCAAF2BCCFEF37F77(iLocal_62, 80);
																ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_62);
															}
															if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
															{
																OBJECT::_0xCAAF2BCCFEF37F77(iLocal_63, 80);
																ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_63);
															}
															if (HUD::IS_RADAR_HIDDEN())
															{
																MAP::DISPLAY_RADAR(true);
															}
															if (!iParam0->f_6 == 38)
															{
																func_30(iParam0, iParam0->f_119, 1);
															}
															Global_1914319.f_18941.f_17 = 0;
															STREAMING::REMOVE_PTFX_ASSET();
															func_74(iParam0);
															func_57(iParam0);
															if (PED::_0x5C16855277819BBF() > 0)
															{
																PED::_0x7D4E70A67A651C71(PED::_0x5C16855277819BBF());
															}
															__LIB_0__::func_15(__LIB_0__::func_14(joaat("BATHS_TAKEN")), 1);
															__LIB_0__::func_703(0, -1);
															iParam0->f_17 = 1;
														}
													}
													func_82(iParam0);
													func_83(iParam0);
													func_84(iParam0);
													func_85(iParam0);
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			default:
				break;
	}
}

void func_7()
{
	if (iLocal_21 != 99)
	{
		if (iLocal_21 == 0)
		{
			func_86();
		}
		if (iLocal_21 == 1)
		{
			func_87();
		}
		if (iLocal_21 == 2)
		{
			func_88();
		}
		if (iLocal_21 == 3)
		{
			iLocal_21 = 99;
		}
	}
}

int func_12(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	var uVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = iParam1;
	}
	if (iParam4 != 0)
	{
		iVar1 = iParam4;
	}
	else
	{
		iVar1 = __LIB_0__::func_223(iParam1);
	}
	if (iVar0 == -1 && !__LIB_1__::func_87(iVar1, __LIB_0__::func_241()))
	{
		return 1;
	}
	if (uParam2->f_1 != 0 && __LIB_0__::func_51(uParam2, 1))
	{
		if (uParam2->f_1 == iVar1)
		{
			if (bParam3)
			{
				return __LIB_7__::func_362(iParam0, uParam2);
			}
			else
			{
				return 1;
			}
		}
		else if (uParam2->f_1 != iVar1)
		{
			__LIB_4__::func_603(uParam2);
		}
	}
	if (!__LIB_0__::func_51(uParam2, 1))
	{
		__LIB_0__::func_608(&(uParam2->f_1));
		if (!bParam5)
		{
			if (!__LIB_7__::func_364(&(uParam2->f_1), &uVar2, iVar1, iVar0, 1, 0))
			{
				return 1;
			}
		}
		uParam2->f_1 = iVar1;
		__LIB_0__::func_7(uParam2, 1);
	}
	if (!bParam3)
	{
		return 1;
	}
	return __LIB_7__::func_362(iParam0, uParam2);
}

void func_13()
{
	if (CAM::_0x927B810E43E99932(&Local_269))
	{
		CAM::_0x0A5A4F1979ABB40E(&Local_269);
	}
}

void func_16(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iParam0->f_120[iVar0]))
		{
			GRAPHICS::REMOVE_PARTICLE_FX(iParam0->f_120[iVar0], false);
		}
		iVar0++;
	}
}

void func_18(int iParam0, bool bParam1)
{
	__LIB_7__::func_363(&(Global_1946804.f_1735.f_120));
	func_103(iParam0, &(Global_1946804.f_1735), bParam1, 0, 1, 1);
}

void func_22(int iParam0)
{
	switch (iParam0->f_6)
	{
		case 5:
			func_104(iParam0);
			break;
		case 76:
			func_105(iParam0);
			break;
		case 78:
			func_106(iParam0);
			break;
		case 26:
			func_107(iParam0);
			break;
		case 38:
			func_108(iParam0);
			break;
		case 92:
			func_109(iParam0);
			break;
		case 105:
			func_110(iParam0);
			break;
		case 115:
			func_111(iParam0);
			break;
		default:
			break;
	}
}

void func_24(int iParam0, char* sParam1, int iParam2)
{
	int iVar0;
	struct<7> Var1;
	switch (iParam0->f_6)
	{
		case 5:
			sLocal_3 = "1103_A_F_M_BathingLadies_01_WHITE_03";
			break;
		case 76:
			sLocal_3 = "1102_A_F_M_BathingLadies_01_WHITE_02";
			break;
		case 78:
			sLocal_3 = "1101_A_F_M_BathingLadies_01_WHITE_01";
			break;
		case 26:
			sLocal_3 = "1101_A_F_M_BathingLadies_01_WHITE_01";
			break;
		case 38:
			sLocal_3 = "1101_A_F_M_BathingLadies_01_WHITE_01";
			break;
		case 92:
			sLocal_3 = "1104_U_F_M_VhtBathgirl_01";
			break;
		case 105:
			sLocal_3 = "1103_A_F_M_BathingLadies_01_WHITE_03";
			break;
		case 115:
			sLocal_3 = "1102_A_F_M_BathingLadies_01_WHITE_02";
			break;
		default:
			sLocal_3 = "1102_A_F_M_BathingLadies_01_WHITE_02";
			break;
	}
	if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iParam0->f_144))
	{
	}
	else if (iParam2 == 0)
	{
		__LIB_11__::func_361(iParam0->f_144, sParam1, joaat("SPEECH_PARAMS_FORCE_NORMAL"), 0, 1, sLocal_3, 0, 1);
	}
	else
	{
		iVar0 = __LIB_3__::func_659(iParam0->f_119, 0, 0);
		Var1.f_5 = 1;
		Var1.f_6 = 1;
		Var1 = sParam1;
		Var1.f_1 = sLocal_3;
		Var1.f_3 = -417894478;
		AUDIO::PLAY_AMBIENT_SPEECH_FROM_POSITION_NATIVE(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), &Var1);
	}
}

void func_26()
{
	iLocal_59 = MISC::GET_GAME_TIMER();
	if ((iLocal_59 - iLocal_58) < 2000 || __LIB_0__::func_163(Global_35, 76834332) == 0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UP_ONLY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_DOWN_ONLY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LEFT_ONLY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_RIGHT_ONLY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UP_ONLY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_DOWN_ONLY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LEFT_ONLY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_RIGHT_ONLY"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_NEXT_WHEEL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_ITEM_WHEEL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_FLY_PITCH_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_FLY_ROLL_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SECONDARY_SPECIAL_ABILITY_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_ACTION"), false);
	__LIB_1__::func_538(0);
}

void func_27(int iParam0)
{
	func_117(iParam0);
	if (iLocal_15 == 1)
	{
		if (iLocal_31 == 0)
		{
			if (iLocal_25 == 0)
			{
				func_24(iParam0, "CHAT_BATH_LEVEL1", 0);
				iLocal_25 = 1;
				iLocal_50 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_50) > 12000)
			{
				func_24(iParam0, "CHAT_BATH_LEVEL1", 0);
				if (__LIB_0__::func_139(iLocal_16))
				{
					__LIB_1__::func_281(&iLocal_16, 1, 1);
				}
				iLocal_31 = 1;
			}
		}
		if (iLocal_32 == 0)
		{
			if (iLocal_31 == 1 && (MISC::GET_GAME_TIMER() - iLocal_50) > 10000)
			{
				if (!__LIB_0__::func_139(iLocal_17))
				{
					iLocal_17 = __LIB_7__::func_915("BATH_CHAT", joaat("INPUT_CONTEXT_Y"), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					iLocal_33 = 1;
					iLocal_52 = MISC::GET_GAME_TIMER();
				}
				func_117(iParam0);
				iLocal_32 = 1;
			}
		}
		if (iLocal_31 == 0)
		{
			if (!__LIB_0__::func_139(iLocal_16))
			{
				iLocal_16 = __LIB_7__::func_915("BATH_NO_CHAT", joaat("INPUT_CONTEXT_Y"), 2, 0, 0, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			}
			else
			{
				func_117(iParam0);
				if (__LIB_0__::func_567(iLocal_16, 1))
				{
					iLocal_15 = 0;
					__LIB_1__::func_281(&iLocal_16, 1, 1);
					if (__LIB_0__::func_139(iLocal_17))
					{
						__LIB_1__::func_281(&iLocal_17, 1, 1);
					}
					func_61(iParam0, "NO_TALK");
					bLocal_24 = true;
					iLocal_49 = MISC::GET_GAME_TIMER();
				}
			}
		}
		if (iLocal_33 == 1)
		{
			func_120(iParam0);
		}
	}
	if (bLocal_24)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_49) > 3500)
		{
			func_24(iParam0, "NO_TALK_RESPONSE", 0);
			bLocal_24 = false;
		}
	}
}

void func_30(int iParam0, int iParam1, bool bParam2)
{
	if (__LIB_0__::func_30(iParam1))
	{
		iParam0->f_119 = iParam1;
		if (bParam2)
		{
			if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1) && iParam0->f_112 > 4)
			{
			}
			else if (!__LIB_2__::func_769(iParam0->f_119) && !__LIB_10__::func_699(iParam0->f_119))
			{
				__LIB_1__::func_948(iParam0->f_119, 1, 0f, 0, 0, 1f, 0, 0);
			}
		}
		else if (__LIB_2__::func_769(iParam0->f_119) && !__LIB_10__::func_699(iParam0->f_119))
		{
			__LIB_1__::func_948(iParam0->f_119, 0, 0f, 0, 0, 1f, 0, 0);
		}
	}
}

void func_31(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_139(iParam0->f_24))
	{
		__LIB_1__::func_281(&(iParam0->f_24), 1, 1);
	}
	if (__LIB_0__::func_139(iParam0->f_25))
	{
		__LIB_1__::func_281(&(iParam0->f_25), 1, 1);
	}
	if (__LIB_0__::func_139(iParam0->f_26))
	{
		__LIB_1__::func_281(&(iParam0->f_26), 1, 1);
	}
	if (__LIB_0__::func_139(iParam0->f_27))
	{
		__LIB_1__::func_281(&(iParam0->f_27), 1, 1);
	}
	if (__LIB_0__::func_139(iParam0->f_29))
	{
		__LIB_1__::func_281(&(iParam0->f_29), 1, 1);
	}
	if (bParam1)
	{
		if (__LIB_0__::func_139(iParam0->f_23))
		{
			__LIB_1__::func_281(&(iParam0->f_23), 1, 1);
		}
		if (__LIB_0__::func_139(iParam0->f_28))
		{
			__LIB_1__::func_281(&(iParam0->f_28), 1, 1);
		}
	}
}

void func_34(int iParam0, bool bParam1)
{
	if (MAP::DOES_BLIP_EXIST(iParam0->f_41))
	{
		if (bParam1)
		{
			MAP::_BLIP_SET_MODIFIER(iParam0->f_41, 724623647);
		}
		else
		{
			MAP::_BLIP_REMOVE_MODIFIER(iParam0->f_41, 724623647);
			MAP::REMOVE_BLIP(&(iParam0->f_41));
		}
	}
}

void func_35(int iParam0)
{
	STREAMING::REQUEST_MODEL(iParam0->f_135.f_8, false);
	STREAMING::REQUEST_MODEL(iParam0->f_144.f_8, false);
	STREAMING::REQUEST_MODEL(iLocal_312, false);
	STREAMING::REQUEST_MODEL(iLocal_313, false);
	STREAMING::REQUEST_MODEL(iLocal_314, false);
	STREAMING::REQUEST_PTFX_ASSET();
}

bool func_37(int iParam0, var uParam1)
{
	bool bVar0;
	*uParam1 = 1;
	if (__LIB_0__::func_296(242, 1, 1))
	{
		return true;
	}
	if (Global_1395601.f_1)
	{
		return true;
	}
	if (__LIB_0__::func_746(Global_1835011[7 /*74*/].f_1) == 3)
	{
		return false;
	}
	if (__LIB_0__::func_1(Global_1935630, 2097152))
	{
		*uParam1 = 1;
		return true;
	}
	bVar0 = func_132();
	if (bVar0)
	{
		*uParam1 = 1;
		return true;
	}
	if (__LIB_1__::func_510(4))
	{
		if (Global_1935630.f_24)
		{
			*uParam1 = 1;
			return true;
		}
	}
	else if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		*uParam1 = 1;
		return true;
	}
	if (INVENTORY::_0x7C7E4AB748EA3B07())
	{
		*uParam1 = 1;
		return true;
	}
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		*uParam1 = 1;
		return true;
	}
	if (__LIB_0__::func_730(iParam0->f_6))
	{
		*uParam1 = 1;
		return true;
	}
	if (PED::_IS_PED_CARRYING(Global_35))
	{
		*uParam1 = 1;
		return true;
	}
	if (PED::_0x50F124E6EF188B22(Global_35))
	{
		if (iLocal_22 == 0)
		{
			__LIB_0__::func_45("BATH_DRUNK", 10000, 0, 0, 0, 1);
			iLocal_22 = 1;
		}
		*uParam1 = 1;
		return true;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(PLAYER::PLAYER_PED_ID()))
	{
		if (__LIB_3__::func_138(PLAYER::PLAYER_PED_ID(), joaat("WORLD_HUMAN_BARCUSTOMER_BEER")) || __LIB_3__::func_138(PLAYER::PLAYER_PED_ID(), joaat("WORLD_HUMAN_BARCUSTOMER_WHISKEY")))
		{
			*uParam1 = 1;
			return true;
		}
	}
	return false;
}

void func_38(int iParam0, vector3 vParam1, bool bParam4)
{
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_113() && iParam0->f_6 == 38)
		{
			if (MAP::DOES_BLIP_EXIST(iParam0->f_41))
			{
				MAP::REMOVE_BLIP(&(iParam0->f_41));
			}
			return;
		}
	}
	if (!MAP::DOES_BLIP_EXIST(iParam0->f_41))
	{
		iParam0->f_41 = MAP::_BLIP_ADD_FOR_COORD(iParam0->f_1, vParam1);
		MAP::SET_BLIP_SPRITE(iParam0->f_41, iParam0->f_2, true);
		if (bParam4)
		{
			MAP::_BLIP_SET_MODIFIER(iParam0->f_41, -401963276);
		}
	}
	else
	{
		MAP::_BLIP_REMOVE_MODIFIER(iParam0->f_41, 724623647);
	}
}

bool func_43()
{
	return ((STREAMING::HAS_MODEL_LOADED(iLocal_312) && STREAMING::HAS_MODEL_LOADED(iLocal_313)) && STREAMING::HAS_MODEL_LOADED(iLocal_314));
}

bool func_49(int iParam0, bool bParam1)
{
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("BATHING"))
	{
		return false;
	}
	if (!AUDIO::_0xD9130842D7226045("BATHING_Sounds", 0))
	{
		AUDIO::_0xD9130842D7226045("BATHING_Sounds", 0);
		return false;
	}
	if (bParam1)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iParam0->f_144.f_8))
		{
			STREAMING::REQUEST_MODEL(iParam0->f_144.f_8, false);
			return false;
		}
	}
	else if (!STREAMING::HAS_MODEL_LOADED(iParam0->f_135.f_8))
	{
		STREAMING::REQUEST_MODEL(iParam0->f_135.f_8, false);
		return false;
	}
	if (PED::_0x5C16855277819BBF() > 0)
	{
		if (bParam1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_144))
			{
				iParam0->f_144 = __LIB_1__::func_545(iParam0->f_144.f_8, iParam0->f_144.f_1, iParam0->f_144.f_4, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0);
				return false;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_144))
			{
				PED::SET_PED_NAME_DEBUG(iParam0->f_144, "WASH_MAIDEN");
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_144, true);
				PED::SET_PED_CAN_LEG_IK(iParam0->f_144, false);
				PED::SET_PED_LEG_IK_MODE(iParam0->f_144, 0);
			}
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_135))
			{
				iParam0->f_135 = __LIB_1__::func_545(iParam0->f_135.f_8, iParam0->f_135.f_1, iParam0->f_135.f_4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				return false;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_135))
			{
				PED::SET_PED_NAME_DEBUG(iParam0->f_135, "MAIDEN");
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_135, true);
			}
		}
		return true;
	}
	return false;
}

int func_53(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_53(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_53(iVar63, -915411861, 1, 0, 0));
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

void func_54(int iParam0)
{
	iParam0->f_120[6] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_mg_bathing_tub_steam", iParam0->f_60, 90f, 0f, 0f, 1f, false, false, false, false);
}

void func_55(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_135) || ENTITY::IS_ENTITY_DEAD(iParam0->f_135))
	{
		return;
	}
	if (!__LIB_0__::func_86(iParam0->f_135.f_5))
	{
		func_161(iParam0->f_135, iParam0->f_135.f_5, 0f, 2, 1073741824 /* Float: 2f */);
	}
}

void func_57(int iParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_69))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_69);
	}
	iLocal_301 = 0;
}

void func_58(int iParam0)
{
	if (CAM::_0x927B810E43E99932(&Local_269))
	{
		func_26();
		CAM::_0x8370D34BD2E60B73();
	}
	else if (__LIB_0__::func_163(Global_35, 76834332))
	{
		Local_269.f_16 = Global_35;
		func_26();
		PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(Global_35, 1);
		if (iParam0->f_15 == 1)
		{
			PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(iParam0->f_144, 1);
		}
		CAM::_0xB8B207C34285E978(&Local_269);
		CAM::_0xAC77757C05DE9E5A(&Local_269);
	}
}

bool func_59(var uParam0, char* sParam1, int iParam2, vector3 vParam3, int iParam6)
{
	struct<121> Var0;
	if (!__LIB_0__::func_86(vParam3))
	{
		if (!__LIB_0__::func_139(*uParam0))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
			{
				*uParam0 = __LIB_1__::func_282(sParam1, iParam2, vParam3, 1.6f, 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
				__LIB_1__::func_483(*uParam0, sParam1, iParam6, 1);
				__LIB_1__::func_221(*uParam0, __LIB_0__::func_492(1) > iParam6, 1);
			}
		}
		else if (__LIB_1__::func_732(*uParam0, 1))
		{
			if (bLocal_53 == 0)
			{
				iLocal_47 = MISC::GET_GAME_TIMER();
				Var0 = -1;
				Var0.f_1 = joaat("BLIP_STYLE_SHOP");
				Var0.f_2 = joaat("BLIP_BATH_HOUSE");
				Var0.f_42 = joaat("INPUT_GAME_MENU_EXTRA_OPTION");
				Var0.f_43 = joaat("INPUT_CONTEXT_X");
				Var0.f_44 = joaat("INPUT_CONTEXT_Y");
				Var0.f_45 = joaat("INPUT_GAME_MENU_ACCEPT");
				Var0.f_46 = joaat("INPUT_GAME_MENU_CANCEL");
				Var0.f_117 = 1;
				Var0.f_120 = 9;
				func_61(&Var0, "PLAYER_REQUESTS_SPECIAL_BATH");
			}
			return true;
		}
	}
	return false;
}

void func_61(int iParam0, char* sParam1)
{
	char* sVar0;
	if (__LIB_0__::func_181())
	{
		sVar0 = "JOHN_PLAYER";
		if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35))
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam1, "PLAYER_LAUGH"))
			{
				sParam1 = "LAUGH_LOW";
				__LIB_11__::func_361(Global_35, "LAUGH_LOW", joaat("SPEECH_PARAMS_FORCE_NORMAL_CRITICAL"), 0, 1, 0, 0, 1);
				return;
			}
			if (MISC::ARE_STRINGS_EQUAL(sParam1, "SIGH"))
			{
				sParam1 = "SIGH_LOW";
				__LIB_11__::func_361(Global_35, "SIGH_LOW", joaat("SPEECH_PARAMS_FORCE_NORMAL_CRITICAL"), 0, 1, 0, 0, 1);
				return;
			}
		}
	}
	else
	{
		sVar0 = "ARTHUR";
		if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35))
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam1, "PLAYER_LAUGH"))
			{
				sParam1 = "LAUGH_HIGH";
				__LIB_11__::func_361(Global_35, "LAUGH_HIGH", joaat("SPEECH_PARAMS_FORCE_NORMAL_CRITICAL"), 0, 1, 0, 0, 1);
				return;
			}
			if (MISC::ARE_STRINGS_EQUAL(sParam1, "SIGH"))
			{
				sParam1 = "SIGH_LOW";
				__LIB_11__::func_361(Global_35, "SIGH_LOW", joaat("SPEECH_PARAMS_FORCE_NORMAL_CRITICAL"), 0, 1, 0, 0, 1);
				return;
			}
		}
	}
	if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iParam0->f_144))
	{
	}
	else
	{
		__LIB_11__::func_361(Global_35, sParam1, joaat("SPEECH_PARAMS_FORCE_NORMAL"), 0, 1, sVar0, 0, 1);
	}
}

bool func_62(var uParam0, char* sParam1, int iParam2, vector3 vParam3, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	int iVar0;
	if (bLocal_320 == 1)
	{
		return false;
	}
	if (!__LIB_0__::func_139(*uParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			iVar0 = 0;
			if (bParam6)
			{
				if (!__LIB_0__::func_86(vParam3))
				{
					iVar0 = 7;
					*uParam0 = __LIB_1__::func_282(sParam1, iParam2, vParam3, 1f, 2, 1, 0, iVar0, 570, 0, 14, 2f, 0, joaat("SHORT_TIMED_EVENT"), 0);
				}
			}
			else if (!__LIB_0__::func_86(vParam3))
			{
				*uParam0 = __LIB_1__::func_282(sParam1, iParam2, vParam3, 1f, 2, 1, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
			}
			if (iParam8 == 0)
			{
				if (__LIB_0__::func_139(*uParam0) && __LIB_0__::func_572(*uParam0, 0) == bParam7)
				{
					__LIB_1__::func_221(*uParam0, !bParam7, 1);
				}
			}
			if (bParam9)
			{
				__LIB_1__::func_221(*uParam0, 0, 1);
			}
		}
	}
	else if (bParam6)
	{
		if (__LIB_4__::func_443(*uParam0, 1))
		{
			return true;
		}
	}
	else if (__LIB_1__::func_732(*uParam0, 1))
	{
		return true;
	}
	return false;
}

bool func_64(int iParam0, char* sParam1, bool bParam2)
{
	if (iParam0->f_15)
	{
		if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Global_35))
		{
			if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), sParam1) == bParam2)
			{
				return true;
			}
		}
	}
	else if (MISC::ARE_STRINGS_EQUAL(&(iParam0->f_20), "TESTBLOCK"))
	{
		if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Global_35))
		{
			if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), sParam1) == bParam2)
			{
				return true;
			}
		}
	}
	else if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Global_35) && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(iLocal_64))
	{
		if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), sParam1) == bParam2 && MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(iLocal_64), sParam1) == bParam2)
		{
			return true;
		}
	}
	return false;
}

void func_66(int iParam0, int iParam1)
{
	iParam0->f_115 = iParam1;
	if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Bathing") || MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Intro"))
	{
		iParam0->f_117 = 0;
		if (iParam1 == 5)
		{
			return;
		}
	}
	else if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Scrub_Idle"))
	{
		iParam0->f_113 = iParam0->f_115;
		return;
	}
	else
	{
		iParam0->f_117 = 2;
		if (iParam1 == iParam0->f_114)
		{
			return;
		}
	}
	iParam0->f_113 = 4;
}

void func_67(int iParam0, float fParam1)
{
	if (fParam1 < 1f)
	{
		fParam1 = 1f;
	}
	switch (iParam0->f_115)
	{
		case 1:
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iParam0->f_120[0], "scrub", fParam1, false);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iParam0->f_120[5], "scrub", fParam1, false);
			break;
		case 2:
			if (iParam0->f_36 >= 1)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iParam0->f_120[4], "scrub", fParam1, false);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iParam0->f_120[2], "scrub", fParam1, false);
			}
			else
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iParam0->f_120[1], "scrub", fParam1, false);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iParam0->f_120[3], "scrub", fParam1, false);
			}
			break;
		case 3:
			if (iParam0->f_37 >= 1)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iParam0->f_120[7], "scrub", fParam1, false);
			}
			else
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iParam0->f_120[8], "scrub", fParam1, false);
			}
			break;
	}
}

bool func_69(int iParam0)
{
	if (__LIB_0__::func_139(iParam0->f_29))
	{
		iParam0->f_40 = __LIB_0__::func_486(iParam0->f_29, 1);
		if (iParam0->f_34)
		{
			if (iParam0->f_40 > 0.025f)
			{
				__LIB_1__::func_283(&uLocal_73, 1);
				fLocal_68 = 0f;
				iParam0->f_118 = 0;
				iParam0->f_34 = 0;
			}
		}
	}
	if (__LIB_0__::func_567(iParam0->f_29, 1))
	{
	}
	if (__LIB_0__::func_139(iParam0->f_29) && __LIB_0__::func_567(iParam0->f_29, 1))
	{
		func_67(iParam0, 1f);
		fLocal_67 = 1f;
		return true;
	}
	else
	{
		if (!__LIB_0__::func_75(&uLocal_73))
		{
			__LIB_1__::func_283(&uLocal_73, 1);
		}
		if (__LIB_3__::func_135(&uLocal_73) > 250)
		{
			switch (iParam0->f_118)
			{
				case 0:
					if (iParam0->f_39 > iParam0->f_40)
					{
						fLocal_68 = (fLocal_68 + 1f);
						fLocal_69 = 0f;
					}
					else
					{
						func_67(iParam0, fLocal_69);
						fLocal_68 = 0f;
					}
					if (fLocal_68 > 5f)
					{
						func_187(iParam0);
						iParam0->f_118 = 1;
					}
					__LIB_1__::func_283(&uLocal_73, 1);
					break;
				case 1:
					if (iParam0->f_40 < 0.1f)
					{
						func_66(iParam0, 5);
						iParam0->f_118 = 2;
					}
					if (iParam0->f_39 < iParam0->f_40)
					{
						iParam0->f_118 = 4;
					}
					break;
				case 2:
					func_31(iParam0, 1);
					iParam0->f_118 = 3;
					break;
				case 3:
					if (func_64(iParam0, "Bathing", 1))
					{
						fLocal_67 = 0f;
						__LIB_0__::func_37(&uLocal_73);
						iParam0->f_112 = 14;
						iParam0->f_34 = 1;
						iParam0->f_118 = 0;
					}
					break;
				case 4:
					fLocal_68 = 0f;
					__LIB_1__::func_283(&uLocal_73, 1);
					func_66(iParam0, iParam0->f_114);
					iParam0->f_118 = 0;
					break;
			}
			iParam0->f_39 = iParam0->f_40;
			func_67(iParam0, iParam0->f_39);
		}
	}
	return false;
}

void func_73(int iParam0, bool bParam1)
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
				if (func_198(&uVar38, &uVar39, fVar33))
				{
					__LIB_9__::func_160(fVar33, 1, bVar37, bParam1);
					__LIB_0__::func_597(0, 7000);
				}
				bVar41 = true;
			}
			else if (1857353317 == Var22.f_1)
			{
				fVar34 = __LIB_7__::func_828(Var22.f_2, Var22.f_5);
				if (func_198(&uVar38, &uVar39, fVar34))
				{
					__LIB_9__::func_159(fVar34, 1, bVar37, bParam1);
					__LIB_0__::func_597(2, 7000);
				}
				bVar40 = true;
			}
			else if (1681823811 == Var22.f_1)
			{
				fVar35 = __LIB_7__::func_828(Var22.f_2, Var22.f_5);
				if (func_198(&uVar38, &uVar39, fVar35))
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
				func_203(BUILTIN::TO_FLOAT(Var22.f_2), 1);
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

void func_74(int iParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_68))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_68);
	}
	iLocal_300 = 0;
}

int func_76()
{
	__LIB_0__::func_155(131072);
	return __LIB_7__::func_362(Global_35, &(Global_1946804.f_1735));
}

int func_82(int iParam0)
{
	struct<8> Var0;
	var uVar8;
	var uVar11;
	switch (iLocal_300)
	{
		case 1:
			if (__LIB_0__::func_30(iParam0->f_119))
			{
				Var0 = { func_212(iParam0) };
				iParam0->f_68 = ANIMSCENE::_CREATE_ANIM_SCENE(&Var0, 0, &(iParam0->f_96), false, true);
				if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_135))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_68, "FEMALE", iParam0->f_135, 0);
				}
				PED::SET_PED_CAN_LEG_IK(Global_35, false);
				PED::SET_PED_LEG_IK_MODE(Global_35, 0);
				if (__LIB_0__::func_113())
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_68, "ARTHUR", Global_35, 0);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_68, "john_Marston", Global_35, 0);
				}
				if (iParam0->f_6 == 115)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_68, "Door", __LIB_3__::func_659(1682160693, 0, 0), 0);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_68, "Door", __LIB_3__::func_659(iParam0->f_119, 0, 0), 0);
				}
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_68, "BOOTS", iLocal_62, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_68, "CLOTHES", iLocal_63, 0);
				ANIMSCENE::LOAD_ANIM_SCENE(iParam0->f_68);
				iLocal_300 = 2;
			}
			break;
		case 2:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_68))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_68, true, false))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_68, &(iParam0->f_96));
					iLocal_300 = 3;
				}
				else if (ANIMSCENE::_IS_ANIM_SCENE_LOADING(iParam0->f_68, true))
				{
				}
			}
			break;
		case 3:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_68, &(iParam0->f_96)))
			{
				return 3;
			}
			break;
		case 6:
			func_76();
			__LIB_0__::func_7(&Global_1935630, 2);
			bLocal_81 = true;
			func_30(iParam0, iParam0->f_119, 0);
			__LIB_3__::func_378(iParam0->f_14, 1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
			ANIMSCENE::START_ANIM_SCENE(iParam0->f_68);
			ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(iParam0->f_68, &uVar8, &uVar11, 2);
			iParam0->f_16 = 1;
			iParam0->f_134 = 0;
			iLocal_300 = 7;
			break;
		case 7:
			if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iParam0->f_68))
			{
				if (!MISC::ARE_STRINGS_EQUAL(&(iParam0->f_96), "s_Regular_outro"))
				{
					func_58(iParam0);
				}
			}
			if (!iParam0->f_134)
			{
				switch (iParam0->f_6)
				{
					case 5:
						fLocal_326 = 4.96f;
						break;
					case 115:
						fLocal_326 = 4.98f;
						break;
					case 38:
						fLocal_327 = 4.98f;
						break;
					default:
						fLocal_326 = 4f;
						break;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 613537593))
				{
					if (iParam0->f_16)
					{
						if (bLocal_60 == 0)
						{
							if (__LIB_0__::func_272(Global_35, 0))
							{
								iParam0->f_16 = 0;
								__LIB_4__::func_517(1);
								func_214(Global_35, iLocal_325, 1, 1, 0);
								AUDIO::TRIGGER_MUSIC_EVENT("MG_BATHING_START");
								func_215();
								ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
								bLocal_60 = true;
							}
						}
					}
					else
					{
						__LIB_5__::func_801(2, 64, 2, 0, 0);
						iParam0->f_134 = 1;
					}
				}
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_68, false) || (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_68) > 0.95f && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_68, false)))
			{
				iLocal_300 = 8;
			}
			break;
	}
	return iLocal_300;
}

int func_83(int iParam0)
{
	struct<8> Var0;
	switch (iLocal_301)
	{
		case 1:
			Var0 = { func_212(iParam0) };
			iParam0->f_69 = ANIMSCENE::_CREATE_ANIM_SCENE(&Var0, 2, &(iParam0->f_104), false, true);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_69, "Female", iParam0->f_144, 0);
			if (__LIB_0__::func_113())
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_69, "ARTHUR", Global_35, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_69, "john_Marston", Global_35, 0);
			}
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_69, "Door", __LIB_3__::func_659(iParam0->f_119, 0, 0), 0);
			ANIMSCENE::LOAD_ANIM_SCENE(iParam0->f_69);
			iLocal_301 = 2;
			break;
		case 2:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_69, true, false))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_69, &(iParam0->f_104));
				iLocal_301 = 3;
			}
			break;
		case 3:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_69, &(iParam0->f_104)))
			{
				if (iParam0->f_112 < 19)
				{
					if (bLocal_53 == 0)
					{
						iLocal_48 = MISC::GET_GAME_TIMER();
					}
				}
				iLocal_301 = 4;
			}
			break;
		case 4:
			if (bLocal_53 == 0)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_48) > 5000)
				{
					ANIMSCENE::START_ANIM_SCENE(iParam0->f_69);
					iLocal_301 = 5;
				}
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND("BATHING_DOOR_KNOCK_MASTER", 0, true, 0);
				iLocal_301 = 5;
				func_24(iParam0, "OFFER_SPECIAL_BATH", 1);
				iLocal_47 = MISC::GET_GAME_TIMER();
			}
			break;
		case 6:
			if ((MISC::GET_GAME_TIMER() - iLocal_47) > 3000 && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35))
			{
				if (iLocal_26 == 1)
				{
					iLocal_26 = 0;
					ANIMSCENE::START_ANIM_SCENE(iParam0->f_69);
				}
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_47) > 5000)
			{
				if (iParam0->f_112 < 19)
				{
					ANIMSCENE::SET_ANIM_SCENE_PAUSED(iParam0->f_69, false);
					bLocal_329 = false;
				}
				else
				{
					ANIMSCENE::START_ANIM_SCENE(iParam0->f_69);
					bLocal_329 = true;
				}
				iLocal_301 = 7;
			}
			break;
		case 7:
			if (iParam0->f_15)
			{
				if (iLocal_56 == 0)
				{
					if (CAM::_0x927B810E43E99932(&Local_269))
					{
						iLocal_56 = 1;
						CAM::_0x0A5A4F1979ABB40E(&Local_269);
					}
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iParam0->f_68))
			{
				if (!MISC::ARE_STRINGS_EQUAL(&(iParam0->f_96), "s_Regular_outro"))
				{
					func_58(iParam0);
				}
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_69, false) || (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_69) > 0.95f && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_69, false)))
			{
				iLocal_301 = 8;
			}
			if (MISC::ARE_STRINGS_EQUAL(&(iParam0->f_104), "s_deluxe_intro") && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_69) > 0.05f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
				{
					OBJECT::DELETE_OBJECT(&iLocal_64);
					func_24(iParam0, "ACCEPT_SPECIAL_BATH", 0);
				}
			}
			if (MISC::ARE_STRINGS_EQUAL(&(iParam0->f_104), "s_deluxe_Outro"))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_69) > 0f && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_69, false))
				{
					if (iLocal_28 == 0)
					{
						func_61(iParam0, "END_BATH");
						iLocal_28 = 1;
						iLocal_51 = MISC::GET_GAME_TIMER();
					}
					else if (iLocal_29 == 0)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_51) > 4000)
						{
							iLocal_29 = 1;
						}
					}
				}
			}
			if (MISC::ARE_STRINGS_EQUAL(&(iParam0->f_104), "s_deluxe_Outro") && (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_69) > 0.5f && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_69, false)))
			{
				if (iLocal_30 == 0)
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35))
					{
						if (iLocal_44 > 3)
						{
							func_24(iParam0, "FAREWELL_LEVEL2", 0);
						}
						else
						{
							func_24(iParam0, "FAREWELL_LEVEL1", 0);
						}
						iLocal_30 = 1;
					}
				}
			}
			if (!bLocal_329)
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_69) > 0.5f && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_69, false))
				{
					func_58(iParam0);
					bLocal_329 = true;
				}
			}
			break;
	}
	return iLocal_301;
}

void func_84(int iParam0)
{
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return;
	}
	if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_35))
	{
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "scrub_freq", fLocal_69);
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "Cleanliness_Right_Arm", fLocal_69);
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "Cleanliness_Left_Arm", fLocal_69);
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "Cleanliness_Left_Leg", fLocal_69);
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "Cleanliness_Right_Leg", fLocal_69);
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "Cleanliness_Head", fLocal_69);
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iLocal_64, "scrub_freq", fLocal_69);
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iLocal_64, "Cleanliness_Right_Arm", fLocal_69);
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iLocal_64, "Cleanliness_Left_Arm", fLocal_69);
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iLocal_64, "Cleanliness_Left_Leg", fLocal_69);
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iLocal_64, "Cleanliness_Right_Leg", fLocal_69);
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iLocal_64, "Cleanliness_Head", fLocal_69);
		if (iParam0->f_15)
		{
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iParam0->f_144, "scrub_freq", fLocal_69);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iParam0->f_144, "Cleanliness_Right_Arm", fLocal_69);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iParam0->f_144, "Cleanliness_Left_Arm", fLocal_69);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iParam0->f_144, "Cleanliness_Left_Leg", fLocal_69);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iParam0->f_144, "Cleanliness_Right_Leg", fLocal_69);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iParam0->f_144, "Cleanliness_Head", fLocal_69);
		}
	}
	switch (iParam0->f_113)
	{
		case 1:
			if (func_64(iParam0, "Scrub_Idle", 1))
			{
				iParam0->f_47 = joaat("INPUT_CONTEXT_Y");
				if (iParam0->f_15 == 0)
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Scrub_Head");
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iLocal_64, "Scrub_Head");
				}
				iParam0->f_113 = 0;
				iParam0->f_115 = 1;
				iParam0->f_114 = 1;
				iParam0->f_117 = 2;
				func_217(iParam0);
			}
			break;
		case 2:
			if (func_64(iParam0, "Scrub_Idle", 1))
			{
				iParam0->f_47 = joaat("INPUT_CONTEXT_X");
				if (iParam0->f_15)
				{
					if (iLocal_323 == 0 || iLocal_324 == 0)
					{
						if (iLocal_323 == 0)
						{
							TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Scrub_Left_Arm");
							TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iParam0->f_144, "Scrub_Left_Arm");
						}
						else
						{
							TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Scrub_Right_Arm");
							TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iParam0->f_144, "Scrub_Right_Arm");
						}
					}
				}
				else if (iParam0->f_36 == 0)
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Scrub_Right_Arm");
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iLocal_64, "Scrub_Right_Arm");
				}
				else
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Scrub_Left_Arm");
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iLocal_64, "Scrub_Left_Arm");
				}
				iParam0->f_113 = 0;
				iParam0->f_115 = 2;
				iParam0->f_114 = 2;
				iParam0->f_117 = 2;
				func_217(iParam0);
			}
			break;
		case 3:
			if (func_64(iParam0, "Scrub_Idle", 1))
			{
				iParam0->f_47 = joaat("INPUT_CONTEXT_A");
				if (iParam0->f_15)
				{
					if (iLocal_321 == 0 || iLocal_322 == 0)
					{
						if (iLocal_321 == 0)
						{
							TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Scrub_Left_Leg");
							TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iParam0->f_144, "Scrub_Left_Leg");
						}
						else
						{
							TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Scrub_Right_Leg");
							TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iParam0->f_144, "Scrub_Right_Leg");
						}
					}
				}
				else if (iParam0->f_37 == 0)
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Scrub_Left_Leg");
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iLocal_64, "Scrub_Left_Leg");
				}
				else
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Scrub_Right_Leg");
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iLocal_64, "Scrub_Right_Leg");
				}
				iParam0->f_113 = 0;
				iParam0->f_115 = 3;
				iParam0->f_114 = 3;
				iParam0->f_117 = 2;
				func_217(iParam0);
			}
			break;
		case 4:
			if (((((((func_64(iParam0, "Scrub_Head", 1) || func_64(iParam0, "Scrub_Right_Arm", 1)) || func_64(iParam0, "Scrub_Left_Arm", 1)) || func_64(iParam0, "Scrub_Left_Leg", 1)) || func_64(iParam0, "Scrub_Right_Leg", 1)) || func_64(iParam0, "intro", 1)) || func_64(iParam0, "Bathing", 1)) || func_64(iParam0, "Scrub_Idle", 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Scrub_Idle");
				if (iParam0->f_15)
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iParam0->f_144, "Scrub_Idle");
				}
				else
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iLocal_64, "Scrub_Idle");
				}
				iParam0->f_117 = 1;
				if (iParam0->f_18)
				{
					iParam0->f_113 = 0;
					iParam0->f_18 = 0;
				}
				else
				{
					iParam0->f_113 = iParam0->f_115;
				}
			}
			break;
		case 5:
			if (func_64(iParam0, "Scrub_Idle", 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Bathing");
				if (iParam0->f_15)
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iParam0->f_144, "Bathing");
				}
				else
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iLocal_64, "Bathing");
				}
				iParam0->f_113 = 0;
				iParam0->f_115 = 5;
				iParam0->f_117 = 0;
			}
			break;
	}
}

int func_85(int iParam0)
{
	switch (iParam0->f_116)
	{
		case 0:
			break;
		case 1:
			if (iParam0->f_15)
			{
				iParam0->f_112 = 24;
				if (__LIB_0__::func_113())
				{
				}
				if (func_64(iParam0, "Bathing", 1) || func_64(iParam0, "Intro", 1))
				{
					iParam0->f_116 = 4;
				}
				else
				{
					func_31(iParam0, 1);
					iParam0->f_116 = 4;
				}
			}
			else
			{
				if (__LIB_0__::func_113())
				{
				}
				func_31(iParam0, 1);
				iParam0->f_116 = 4;
			}
			break;
		case 5:
			if ((MISC::GET_GAME_TIMER() - iLocal_328) > 500)
			{
				iParam0->f_116 = 6;
				iLocal_328 = MISC::GET_GAME_TIMER();
			}
			break;
		case 6:
			if ((MISC::GET_GAME_TIMER() - iLocal_328) > 300)
			{
				iParam0->f_116 = 4;
			}
			break;
		case 2:
			if (func_64(iParam0, "Bathing", 1))
			{
				iParam0->f_116 = 4;
			}
			else if (func_64(iParam0, "Scrub_Idle", 1))
			{
				func_66(iParam0, 5);
				iParam0->f_116 = 3;
			}
			break;
		case 3:
			if (func_64(iParam0, "Bathing", 1))
			{
				iParam0->f_116 = 4;
			}
			break;
		case 4:
			if (iParam0->f_15)
			{
				STREAMING::_REMOVE_MOVE_NETWORK_DEF(sLocal_303);
				STREAMING::REMOVE_ANIM_DICT(sLocal_308);
				STREAMING::REMOVE_ANIM_DICT(sLocal_310);
				STREAMING::REMOVE_CLIP_SET(sLocal_309);
				STREAMING::REMOVE_CLIP_SET(sLocal_311);
				bLocal_80 = false;
			}
			else
			{
				STREAMING::_REMOVE_MOVE_NETWORK_DEF(sLocal_302);
				STREAMING::REMOVE_ANIM_DICT(sLocal_304);
				STREAMING::REMOVE_ANIM_DICT(sLocal_306);
				STREAMING::REMOVE_CLIP_SET(sLocal_305);
				STREAMING::REMOVE_CLIP_SET(sLocal_307);
				bLocal_79 = false;
			}
			PED::_0x55546004A244302A(Global_35, 0);
			if (iParam0->f_15)
			{
				StringCopy(&(iParam0->f_104), "s_deluxe_Outro", 32);
				iLocal_301 = 1;
				iParam0->f_112 = 19;
			}
			else
			{
				iParam0->f_112 = 20;
			}
			ENTITY::SET_ENTITY_COLLISION(Global_35, true, false);
			ENTITY::SET_ENTITY_DYNAMIC(Global_35, true);
			if (iParam0->f_15)
			{
				ENTITY::SET_ENTITY_COLLISION(iParam0->f_144, true, false);
				ENTITY::SET_ENTITY_DYNAMIC(iParam0->f_144, true);
			}
			else
			{
				ENTITY::SET_ENTITY_COLLISION(iParam0->f_135, true, false);
				ENTITY::SET_ENTITY_DYNAMIC(iParam0->f_135, true);
			}
			iParam0->f_116 = 0;
			return 1;
	}
	return 0;
}

void func_86()
{
	iLocal_18 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iLocal_21++;
}

void func_87()
{
	iLocal_19 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	if (iLocal_19 != iLocal_18)
	{
		iLocal_21++;
	}
}

void func_88()
{
	iLocal_20 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	if (iLocal_20 != iLocal_18 && iLocal_20 != iLocal_19)
	{
		iLocal_21++;
	}
}

int func_103(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bVar0 = false;
	bVar1 = true;
	if (uParam1->f_1 == 0)
	{
		return 0;
	}
	if (!__LIB_3__::func_128(iParam0, uParam1))
	{
		bVar1 = false;
	}
	iVar3 = uParam1->f_1;
	iVar2 = __LIB_0__::func_449(iVar3);
	if (iVar2 == -1)
	{
		iVar2 = 0;
	}
	if (iVar2 >= 0 && iVar2 <= 5)
	{
		bVar0 = true;
	}
	Global_1905941 = iVar2;
	__LIB_0__::func_828(Global_40.f_7729, 4096);
	__LIB_0__::func_806(Global_1905941, 4096);
	Global_40.f_7729 = Global_1905941;
	__LIB_3__::func_129(&(uParam1->f_1));
	iVar4 = -1;
	if (!bVar0)
	{
		iVar4 = __LIB_4__::func_604(uParam1->f_1);
	}
	__LIB_0__::func_947(&(Global_1946804.f_1497), iVar4, 0);
	func_233(iVar3, iParam0, bVar0, 1, bVar1, 0);
	__LIB_0__::func_660(iParam0);
	if (bParam2)
	{
		__LIB_4__::func_603(uParam1);
	}
	if (bParam3)
	{
		__LIB_1__::func_10();
	}
	if (bParam4)
	{
		if (bParam5)
		{
			__LIB_1__::func_36(0);
		}
		else
		{
			__LIB_1__::func_36(2048);
		}
	}
	return 1;
}

void func_104(int iParam0)
{
	iParam0->f_7 = { 2638.085f, -1222.06f, 52.3805f };
	iParam0->f_10 = { 2629.204f, -1222.544f, 58.79413f };
	iParam0->f_57 = { 2629.204f, -1222.544f, 58.79413f };
	iParam0->f_60 = { 2629.4f, -1223.33f, 58.57f };
	iParam0->f_63 = -92.66f;
	iParam0->f_64 = { 2632.809f, -1224.521f, 58.6209f };
	iParam0->f_67 = 215.0591f;
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_13))
	{
		iParam0->f_13 = VOLUME::_CREATE_VOLUME_BOX(2637.958f, -1222.703f, 53.34919f, 0f, 0f, 0f, 1.320784f, 1.459122f, 2.322307f);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_14))
	{
		iParam0->f_14 = VOLUME::_CREATE_VOLUME_BOX(2632.001f, -1223.841f, 59.99991f, 0f, 0f, 0f, 1.308545f, 1.290041f, 1.933383f);
	}
	func_30(iParam0, 779421929, 1);
	iParam0->f_135.f_8 = joaat("A_F_M_SDFANCYWHORE_01");
	iParam0->f_135.f_1 = { 2630.003f, -1220.47f, 58.5874f };
	iParam0->f_135.f_4 = 180.3602f;
	iParam0->f_135.f_5 = { 2633.394f, -1220.905f, 58.6208f };
	iParam0->f_144.f_8 = joaat("CS_BATHINGLADIES_01");
	iParam0->f_144.f_1 = { 2630.003f, -1220.47f, 58.5874f };
	iParam0->f_144.f_4 = 180.3602f;
}

void func_105(int iParam0)
{
	iParam0->f_7 = { -325.5526f, 772.9926f, 116.4359f };
	iParam0->f_10 = { -317.4529f, 761.7874f, 116.9925f };
	iParam0->f_57 = { -316.5032f, 761.952f, 117.0856f };
	iParam0->f_60 = { -317.37f, 761.8f, 116.44f };
	iParam0->f_63 = 10.365f;
	iParam0->f_64 = { -320.7008f, 762.7983f, 116.4364f };
	iParam0->f_67 = 27.6598f;
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_13))
	{
		iParam0->f_13 = VOLUME::_CREATE_VOLUME_BOX(-324.5964f, 774.3613f, 117.5638f, 0f, 0f, 10.75094f, 1.171861f, 1.219162f, 2.336554f);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_14))
	{
		iParam0->f_14 = VOLUME::_CREATE_VOLUME_BOX(-319.7882f, 762.5787f, 117.8969f, 0f, 0f, 10.09051f, 3.165397f, 3.414144f, 3.011062f);
	}
	func_30(iParam0, 142240370, 1);
	iParam0->f_135.f_8 = joaat("A_F_M_VALPROSTITUTE_01");
	iParam0->f_135.f_1 = { -315.477f, 762.7188f, 116.4363f };
	iParam0->f_135.f_4 = 111.4254f;
	iParam0->f_135.f_5 = { -320.5179f, 760.3262f, 116.4364f };
	iParam0->f_144.f_8 = joaat("CS_BATHINGLADIES_01");
	iParam0->f_144.f_1 = { -315.7786f, 763.2852f, 116.4364f };
	iParam0->f_144.f_4 = 151.0521f;
}

void func_106(int iParam0)
{
	iParam0->f_7 = { 2946.603f, 1318.259f, 45.14628f };
	iParam0->f_10 = { 2952.645f, 1334.748f, 43.49384f };
	iParam0->f_57 = { 2952.839f, 1335.296f, 43.84431f };
	iParam0->f_60 = { 2952.65f, 1334.7f, 43.44f };
	iParam0->f_63 = -291.27f;
	iParam0->f_64 = { 2949.637f, 1332.16f, 43.4443f };
	iParam0->f_67 = 73.8945f;
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_13))
	{
		iParam0->f_13 = VOLUME::_CREATE_VOLUME_BOX(2946.439f, 1318.296f, 45.71739f, 0f, 0f, 159.9526f, 1.28246f, 1.493367f, 2.783344f);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_14))
	{
		iParam0->f_14 = VOLUME::_CREATE_VOLUME_BOX(2950.575f, 1332.514f, 44.5119f, 0f, 0f, -14.29171f, 1.4f, 1.4f, 2.139112f);
	}
	func_30(iParam0, -201071322, 1);
	iParam0->f_135.f_8 = joaat("A_F_M_ASBTOWNFOLK_01");
	iParam0->f_135.f_1 = { 2955.49f, 1331.573f, 43.1568f };
	iParam0->f_135.f_4 = 185.3309f;
	iParam0->f_144.f_8 = joaat("CS_BATHINGLADIES_01");
	iParam0->f_144.f_1 = { 2952.311f, 1331.225f, 43.4465f };
	iParam0->f_144.f_4 = 185.3309f;
}

void func_107(int iParam0)
{
	iParam0->f_7 = { -1817.711f, -370.8427f, 162.2963f };
	iParam0->f_10 = { -1812.751f, -373.2948f, 166.5692f };
	iParam0->f_57 = { -1812.181f, -372.9395f, 166.7563f };
	iParam0->f_60 = { -1812.83f, -373.23f, 165.5f };
	iParam0->f_63 = 1.206f;
	iParam0->f_64 = { -1817.074f, -372.382f, 165.4968f };
	iParam0->f_67 = 93.9386f;
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_13))
	{
		iParam0->f_13 = VOLUME::_CREATE_VOLUME_BOX(-1817.337f, -370.7124f, 163.2669f, 0f, 0f, 0f, 2.228559f, 1.483667f, 2.042569f);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_14))
	{
		iParam0->f_14 = VOLUME::_CREATE_VOLUME_BOX(-1816.114f, -372.4831f, 166.5074f, 0f, 0f, 0f, 1f, 1.311546f, 2.179981f);
	}
	func_30(iParam0, 1256786197, 1);
	iParam0->f_135.f_8 = joaat("A_F_M_STRTOWNFOLK_01");
	iParam0->f_135.f_1 = { -1810.21f, -372.1555f, 165.4969f };
	iParam0->f_135.f_4 = 127.2134f;
	iParam0->f_135.f_5 = { -1820.372f, -371.0017f, 165.5055f };
	iParam0->f_144.f_8 = joaat("CS_BATHINGLADIES_01");
	iParam0->f_144.f_1 = { -1810.21f, -372.1555f, 165.4969f };
	iParam0->f_144.f_4 = 127.2134f;
}

void func_108(int iParam0)
{
	iParam0->f_7 = { -819.2906f, -1316.014f, 42.679f };
	iParam0->f_10 = { -823.8372f, -1318.777f, 42.72203f };
	iParam0->f_57 = { -824.5693f, -1318.995f, 43.08209f };
	iParam0->f_60 = { -823.86f, -1318.84f, 42.68f };
	iParam0->f_63 = -0.459f;
	iParam0->f_64 = { -821.5787f, -1315.662f, 42.6789f };
	iParam0->f_67 = 273.46f;
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_13))
	{
		iParam0->f_13 = VOLUME::_CREATE_VOLUME_BOX(-819.4305f, -1316.255f, 43.76577f, 0f, 0f, 0f, 2.259355f, 1.861202f, 2.249466f);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_14))
	{
		iParam0->f_14 = VOLUME::_CREATE_VOLUME_BOX(-822.7465f, -1316.428f, 43.76577f, 0f, 0f, 0f, 1.756558f, 1.861202f, 2.249466f);
	}
	func_30(iParam0, 1523300673, 1);
	if (!__LIB_2__::func_769(815031507))
	{
		__LIB_1__::func_948(815031507, 1, 0f, 0, 0, 1f, 0, 0);
	}
	iParam0->f_135.f_8 = joaat("A_F_M_BLWTOWNFOLK_01");
	iParam0->f_135.f_1 = { -825.1937f, -1322.283f, 42.6788f };
	iParam0->f_135.f_4 = 7.8035f;
	iParam0->f_135.f_5 = { -822.2996f, -1322.037f, 42.6789f };
	iParam0->f_144.f_8 = joaat("CS_BATHINGLADIES_01");
	iParam0->f_144.f_1 = { -825.1937f, -1322.283f, 42.6788f };
	iParam0->f_144.f_4 = 7.8035f;
}

void func_109(int iParam0)
{
	iParam0->f_7 = { 2982.66f, 570.2827f, 45.2343f };
	iParam0->f_10 = { 2987.552f, 573.1801f, 47.9211f };
	iParam0->f_57 = { 2987.469f, 573.6002f, 47.37005f };
	iParam0->f_60 = { 2987.62f, 573.21f, 46.86f };
	iParam0->f_63 = 83.841f;
	iParam0->f_64 = { 2985.658f, 568.1716f, 46.8491f };
	iParam0->f_67 = 87.0336f;
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_13))
	{
		iParam0->f_13 = VOLUME::_CREATE_VOLUME_BOX(2982.743f, 570.4231f, 45.01115f, 0f, 0f, -8.056151f, 1.313431f, 1.930706f, 2.590498f);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_14))
	{
		iParam0->f_14 = VOLUME::_CREATE_VOLUME_BOX(2986.364f, 568.9269f, 48.00531f, 0f, 0f, -10.72722f, 1.419141f, 1.607003f, 2.485681f);
	}
	func_30(iParam0, 1102743282, 1);
	iParam0->f_135.f_8 = joaat("A_F_M_VHTPROSTITUTE_01");
	iParam0->f_135.f_1 = { 2981.157f, 571.4192f, 46.7198f };
	iParam0->f_135.f_4 = 79.3133f;
	iParam0->f_135.f_5 = { 2982.519f, 567.5594f, 46.84f };
	iParam0->f_144.f_8 = joaat("CS_VHT_BATHGIRL");
	iParam0->f_144.f_1 = { 2984.119f, 567.6183f, 46.8427f };
	iParam0->f_144.f_4 = 79.3133f;
}

void func_110(int iParam0)
{
	iParam0->f_7 = { 1341.261f, -1376.511f, 79.4836f };
	iParam0->f_10 = { 1337.061f, -1378.161f, 84.3447f };
	iParam0->f_57 = { 1337.098f, -1377.724f, 83.76834f };
	iParam0->f_60 = { 1336.85f, -1378.04f, 83.2897f };
	iParam0->f_63 = 166.469f;
	iParam0->f_64 = { 1339.949f, -1378.94f, 83.2813f };
	iParam0->f_67 = 348.7319f;
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_13))
	{
		iParam0->f_13 = VOLUME::_CREATE_VOLUME_BOX(1341.261f, -1376.511f, 80.12514f, 0f, 0f, 44.7794f, 1.630602f, 1.866527f, 2.368827f);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_14))
	{
		iParam0->f_14 = VOLUME::_CREATE_VOLUME_BOX(1339.067f, -1379.314f, 84.4303f, 0f, 0f, -10.995f, 2.231479f, 2.405224f, 2.365758f);
	}
	func_30(iParam0, -1847993131, 1);
	iParam0->f_135.f_8 = joaat("A_F_M_RHDPROSTITUTE_01");
	iParam0->f_135.f_1 = { 1331.792f, -1372.289f, 83.2976f };
	iParam0->f_135.f_4 = 236.4728f;
	iParam0->f_135.f_5 = { 1341.114f, -1376.192f, 83.2813f };
	iParam0->f_144.f_8 = joaat("CS_BATHINGLADIES_01");
	iParam0->f_144.f_1 = { 1336.905f, -1372.9f, 83.2893f };
	iParam0->f_144.f_4 = 236.4728f;
}

void func_111(int iParam0)
{
	iParam0->f_7 = { -5508.501f, -2963.09f, -1.6307f };
	iParam0->f_10 = { -5513.75f, -2972.575f, -1.72857f };
	iParam0->f_57 = { -5512.97f, -2972.266f, -1.35402f };
	iParam0->f_60 = { -5513.76f, -2972.3f, -1.78f };
	iParam0->f_63 = 15f;
	iParam0->f_64 = { -5520.461f, -2973.847f, -1.7623f };
	iParam0->f_67 = 86.7615f;
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_13))
	{
		iParam0->f_13 = VOLUME::_CREATE_VOLUME_BOX(-5508.227f, -2963.033f, -1.169532f, 0f, 0f, 14.7478f, 1.694336f, 1.81908f, 2.241587f);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_14))
	{
		iParam0->f_14 = VOLUME::_CREATE_VOLUME_BOX(-5518.046f, -2973.222f, -1.7817f, 0f, 0f, 106.1408f, 1.643605f, 1.522556f, 2.447214f);
	}
	func_30(iParam0, 1682160693, 1);
	func_30(iParam0, 1423877126, 0);
	iParam0->f_135.f_8 = joaat("A_F_M_TUMTOWNFOLK_01");
	iParam0->f_135.f_1 = { -5512.163f, -2970.712f, -1.7814f };
	iParam0->f_135.f_4 = 171.2193f;
	iParam0->f_135.f_5 = { -5516.737f, -2970.222f, -1.7763f };
	iParam0->f_144.f_8 = joaat("CS_BATHINGLADIES_01");
	iParam0->f_144.f_1 = { -5512.163f, -2970.712f, -1.7814f };
	iParam0->f_144.f_4 = 171.2193f;
}

void func_117(int iParam0)
{
	if ((((AUDIO::IS_AMBIENT_SPEECH_PLAYING(iParam0->f_144) || AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35)) || bLocal_24) || bLocal_34) || iLocal_77 == 1)
	{
		if (__LIB_0__::func_139(iLocal_17))
		{
			__LIB_1__::func_221(iLocal_17, 0, 1);
		}
		if (__LIB_0__::func_139(iLocal_16))
		{
			__LIB_1__::func_221(iLocal_16, 0, 1);
		}
	}
	else
	{
		if (__LIB_0__::func_139(iLocal_17))
		{
			__LIB_1__::func_221(iLocal_17, 1, 1);
		}
		if (__LIB_0__::func_139(iLocal_16))
		{
			__LIB_1__::func_221(iLocal_16, 1, 1);
		}
	}
	if (iLocal_44 > 7)
	{
		if (__LIB_0__::func_139(iLocal_17))
		{
			__LIB_1__::func_281(&iLocal_17, 1, 1);
		}
	}
}

void func_120(int iParam0)
{
	if (bLocal_34 == 0)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_52) > 18000)
		{
			if (iLocal_44 > 3)
			{
				func_24(iParam0, "CHAT_BATH_LEVEL2", 0);
			}
			else
			{
				func_24(iParam0, "CHAT_BATH_LEVEL1", 0);
			}
			iLocal_52 = MISC::GET_GAME_TIMER();
		}
		if (__LIB_1__::func_732(iLocal_17, 1))
		{
			func_242();
			bLocal_34 = true;
			iLocal_35 = 0;
			func_61(iParam0, &cLocal_36);
			iLocal_52 = MISC::GET_GAME_TIMER();
		}
	}
	else if (iLocal_35 == 0)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_52) > 4000 && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35))
		{
			func_24(iParam0, &cLocal_40, 0);
			iLocal_52 = MISC::GET_GAME_TIMER();
			iLocal_35 = 1;
			iLocal_44++;
		}
	}
	else if ((MISC::GET_GAME_TIMER() - iLocal_52) > 3500)
	{
		bLocal_34 = false;
		iLocal_35 = 0;
		func_61(iParam0, "SIGH");
	}
}

int func_132()
{
	if (__LIB_16__::func_311(31))
	{
		return 1;
	}
	return 0;
}

void func_161(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_161(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_161(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_187(int iParam0)
{
	iParam0->f_113 = 4;
	iParam0->f_18 = 1;
}

bool func_198(var uParam0, var uParam1, float fParam2)
{
	if (__LIB_0__::func_2() != -1)
	{
		return true;
	}
	if (!__LIB_2__::func_407(0))
	{
		return true;
	}
	if (fParam2 <= 0f)
	{
		return true;
	}
	if (*uParam0)
	{
		return !*uParam1;
	}
	*uParam0 = 1;
	if (!Global_1347477.f_191.f_3)
	{
		__LIB_11__::func_361(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		Global_1347477.f_191.f_3 = 1;
	}
	if (Global_1347477.f_191 < MISC::GET_GAME_TIMER())
	{
		Global_1347477.f_191.f_1 = 0;
	}
	Global_1347477.f_191.f_1++;
	if (Global_1347477.f_191.f_1 > 3)
	{
		if (Global_1347477.f_191.f_2 < MISC::GET_GAME_TIMER())
		{
			__LIB_1__::func_240(0, 1);
			Global_1347477.f_191.f_2 = (MISC::GET_GAME_TIMER() + 480000);
		}
		__LIB_11__::func_361(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		*uParam1 = 1;
		return false;
	}
	Global_1347477.f_191 = (MISC::GET_GAME_TIMER() + 480000);
	*uParam1 = 0;
	return true;
}

void func_203(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	fVar0 = __LIB_0__::func_260(13);
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (!__LIB_0__::func_293(17))
	{
		return;
	}
	if (__LIB_6__::func_152())
	{
		iVar1 = __LIB_0__::func_261(fVar0);
		fVar0 = (fVar0 + fParam0);
		iVar2 = __LIB_0__::func_261(fVar0);
		if (iVar1 != iVar2)
		{
			Global_1347477.f_195 = __LIB_0__::func_23();
			__LIB_1__::func_446(&(Global_1347477.f_195), 0, 0, 1, 0, 0, 0, 0);
		}
		__LIB_6__::func_44(&fVar3, &fVar4);
		__LIB_4__::func_801(13, __LIB_0__::func_251(fVar0, fVar3, fVar4));
	}
	if (bParam1)
	{
		Global_40.f_11095.f_66++;
		if (5 == Global_40.f_11095.f_66)
		{
			__LIB_1__::func_240(94, 0);
		}
	}
}

struct<8> func_212(int iParam0)
{
	switch (iParam0->f_6)
	{
		case 5:
			return __LIB_0__::func_482("script@mini_game@bathing@BATHING_INTRO_OUTRO_ST_DENIS");
		case 76:
			return __LIB_0__::func_482("script@mini_game@bathing@BATHING_INTRO_OUTRO_VALENTINE");
		case 78:
			return __LIB_0__::func_482("script@mini_game@bathing@BATHING_INTRO_OUTRO_ANNESBURG");
		case 26:
			return __LIB_0__::func_482("script@mini_game@bathing@BATHING_INTRO_OUTRO_STRAWBERRY");
		case 38:
			return __LIB_0__::func_482("script@mini_game@bathing@BATHING_INTRO_OUTRO_BLACKWATER");
		case 92:
			return __LIB_0__::func_482("script@mini_game@bathing@BATHING_INTRO_OUTRO_VANHORN");
		case 105:
			return __LIB_0__::func_482("script@mini_game@bathing@BATHING_INTRO_OUTRO_RHODES");
		case 115:
			return __LIB_0__::func_482("script@mini_game@bathing@BATHING_INTRO_OUTRO_TUMBLEWEED");
	}
	return __LIB_0__::func_482("");
}

int func_214(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_223(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = __LIB_0__::func_998(iParam1);
	}
	if ((bParam3 && __LIB_0__::func_805(iParam1, 4096)) && Global_1946804.f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !__LIB_1__::func_87(iVar0, Global_1946804.f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		__LIB_0__::func_828(Global_40.f_7729, 4096);
		__LIB_0__::func_806(Global_1905941, 4096);
		Global_40.f_7729 = Global_1905941;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		__LIB_0__::func_207(iParam0);
	}
	__LIB_1__::func_10();
	if (!__LIB_0__::func_58(iParam1))
	{
		func_233(iVar0, iParam0, __LIB_3__::func_134(iParam1), 1, 0, 1);
	}
	__LIB_0__::func_660(iParam0);
	return 1;
}

void func_215()
{
	bLocal_53 = false;
	if (__LIB_0__::func_12() == 92 && Global_1357513 == 0)
	{
		Global_1357513++;
		bLocal_53 = true;
	}
	else
	{
		if (__LIB_0__::func_181())
		{
			if (Global_1357512 == 0)
			{
				Global_1357512++;
				bLocal_53 = true;
			}
			else
			{
				Global_1357512++;
				bLocal_53 = false;
			}
		}
		if (__LIB_0__::func_113())
		{
			if (Global_1357511 == 0)
			{
				Global_1357511++;
				bLocal_53 = true;
			}
			else
			{
				Global_1357511++;
				bLocal_53 = false;
			}
		}
	}
}

void func_217(int iParam0)
{
	if (iParam0->f_15 == 0)
	{
		switch (iParam0->f_115)
		{
			case 1:
				if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iParam0->f_120[0]))
				{
					iParam0->f_120[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("scr_mg_bathing_foam_head", Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 21030, 0.4f, false, false, false);
				}
				if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iParam0->f_120[5]))
				{
					iParam0->f_120[5] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("scr_mg_bathing_foam_torso", Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 14412, 0.4f, false, false, false);
				}
				break;
			case 2:
				if (iParam0->f_36 >= 1)
				{
					if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iParam0->f_120[4]))
					{
						iParam0->f_120[4] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("scr_mg_bathing_foam_forearm", Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 53675, 0.5f, false, false, false);
					}
					if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iParam0->f_120[2]))
					{
						iParam0->f_120[2] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("scr_mg_bathing_foam_upperarm", Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 37873, 0.6f, false, false, false);
					}
				}
				else
				{
					if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iParam0->f_120[1]))
					{
						iParam0->f_120[1] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("scr_mg_bathing_foam_upperarm", Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 46065, 0.6f, false, false, false);
					}
					if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iParam0->f_120[3]))
					{
						iParam0->f_120[3] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("scr_mg_bathing_foam_forearm", Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 54187, 0.5f, false, false, false);
					}
				}
				break;
			case 3:
				if (iParam0->f_37 >= 1)
				{
					if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iParam0->f_120[7]))
					{
						iParam0->f_120[7] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("scr_mg_bathing_foam_upperarm", Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 6884, 1.5f, false, false, false);
					}
				}
				else if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iParam0->f_120[8]))
				{
					iParam0->f_120[8] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("scr_mg_bathing_foam_upperarm", Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 65478, 1.5f, false, false, false);
				}
				break;
		}
	}
}

void func_233(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = iParam0;
	iVar3 = -1;
	iVar4 = __LIB_0__::func_449(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_0__::func_191();
	if (bParam5)
	{
		if (!__LIB_7__::func_364(&(Global_1946804.f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (__LIB_0__::func_156(32768) && Global_1946804.f_1378.f_1[10 /*3*/] != Global_1946804.f_57[10 /*11*/])
	{
		__LIB_0__::func_945();
	}
	__LIB_4__::func_714(iVar3, 1, 1, 1, 1, 1);
	__LIB_5__::func_801(31, 0, 0, 0, 0);
	__LIB_1__::func_36(0);
	if (!bParam3)
	{
		return;
	}
	if (bVar0)
	{
		iVar1 = 8;
	}
	if (!bParam4)
	{
		if (PED::IS_PED_A_PLAYER(iParam1))
		{
			__LIB_5__::func_801(2, iVar1, 2, 0, 0);
		}
		else
		{
			__LIB_5__::func_801(2, iVar1, 3, iParam1, 0);
		}
	}
	else
	{
		__LIB_1__::func_550(&(Global_1946804.f_1497), iParam1, 1, -1, 1, 1, 1);
	}
}

void func_242()
{
	switch (iLocal_44)
	{
		case 1:
			sLocal_45 = func_347(iLocal_18);
			break;
		case 2:
			sLocal_45 = func_347(iLocal_19);
			break;
		case 3:
			sLocal_45 = func_347(iLocal_20);
			break;
		case 4:
			sLocal_45 = func_347(iLocal_18);
			break;
		case 5:
			sLocal_45 = func_347(iLocal_19);
			break;
		case 6:
			sLocal_45 = func_347(iLocal_20);
			break;
	}
	if (iLocal_44 < 7)
	{
		StringCopy(&cLocal_36, "SMALLTALK_", 32);
		StringConCat(&cLocal_36, sLocal_45, 32);
		StringCopy(&cLocal_40, "SMALLTALK_RESPONSE_", 32);
		StringConCat(&cLocal_40, sLocal_45, 32);
	}
	else
	{
		StringCopy(&cLocal_36, "CONVO_END", 32);
		StringCopy(&cLocal_40, "CONVO_END_RESPONSE", 32);
	}
}

char* func_347(int iParam0)
{
	char* sVar0;
	if (iLocal_44 < 4)
	{
		switch (iParam0)
		{
			case 1:
				sVar0 = "A";
				break;
			case 2:
				sVar0 = "B";
				break;
			case 3:
				sVar0 = "C";
				break;
			case 4:
				sVar0 = "D";
				break;
			case 5:
				sVar0 = "E";
				break;
			default:
				sVar0 = "A";
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				sVar0 = "F";
				break;
			case 2:
				sVar0 = "G";
				break;
			case 3:
				sVar0 = "H";
				break;
			case 4:
				sVar0 = "I";
				break;
			case 5:
				sVar0 = "J";
				break;
			default:
				sVar0 = "F";
				break;
		}
	}
	return sVar0;
}

