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
	char[] cLocal_14[8] = 0;
	char* sLocal_15 = NULL;
	char* sLocal_16 = NULL;
	char* sLocal_17 = NULL;
	char* sLocal_18 = NULL;
	char* sLocal_19 = NULL;
	struct<13> Local_20 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 40;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
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
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
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
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	struct<2> Local_360[40];
	struct<193> Local_441 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_634 = 0;
	struct<8> Local_635 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<12> Local_643[4];
	struct<23> Local_692 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	struct<23> Local_717 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	int iLocal_742[4] = { 0, 0, 0, 0 };
	var uLocal_747[4] = { 0, 0, 0, 0 };
	struct<32> Local_752[4];
	bool bLocal_881 = false;
	int iLocal_882 = 0;
	vector3 vLocal_883 = { 0f, 0f, 0f };
	vector3 vLocal_886 = { 0f, 0f, 0f };
	vector3 vLocal_889 = { 0f, 0f, 0f };
	vector3 vLocal_892 = { 0f, 0f, 0f };
	vector3 vLocal_895 = { 0f, 0f, 0f };
	vector3 vLocal_898 = { 0f, 0f, 0f };
	vector3 vLocal_901 = { 0f, 0f, 0f };
	vector3 vLocal_904 = { 0f, 0f, 0f };
	vector3 vLocal_907 = { 0f, 0f, 0f };
	int iLocal_910 = 0;
	var uLocal_911 = 0;
	struct<4> Local_912 = { 0, 0, 0, 0 } ;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	struct<4> Local_924 = { 0, 0, 0, 0 } ;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	bool bLocal_936 = false;
	int iLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 1065353216;
	var uLocal_943 = 1065353216;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 1065353216;
	var uLocal_948 = 1065353216;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 1065353216;
	var uLocal_953 = 1065353216;
	var uLocal_954 = 0;
	var uLocal_955 = 1040187392;
	var uLocal_956 = 1040187392;
	var uLocal_957 = -1;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = -1082130432;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	int iLocal_976 = 0;
	int iLocal_977 = 0;
	int iLocal_978 = 0;
	struct<24> Local_979 = { 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 1048576000, 1193033728, 1092616192, 1065353216, 0, 0 } ;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	int iLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = -1;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 1097859072;
	var uLocal_1031 = 1000;
	var uLocal_1032 = 1067450368;
	var uLocal_1033 = 5000;
	var uLocal_1034 = 42;
	var uLocal_1035 = 1103626240;
	var uLocal_1036 = 1077936128;
	var uLocal_1037 = 1106247680;
	var uLocal_1038 = 1103101952;
	var uLocal_1039 = 1097859072;
	var uLocal_1040 = 1103626240;
	int iLocal_1041 = 0;
	var uLocal_1042 = 0;
	int iLocal_1043 = 0;
	int iLocal_1044 = 0;
	int iLocal_1045 = 0;
	struct<21> Local_1046[3];
	struct<17> Local_1110[2];
	struct<17> Local_1145[2];
	struct<17> Local_1180[2];
	int iLocal_1215 = 0;
	int iLocal_1216 = 0;
	int iLocal_1217 = 0;
	int iLocal_1218 = 0;
	int iLocal_1219 = 0;
	int iLocal_1220 = 0;
	int iLocal_1221 = 0;
	var uLocal_1222 = 0;
	struct<97> Local_1223 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_1320 = { 0f, 0f, 0f };
	float fLocal_1323 = 0f;
	float fLocal_1324 = 0f;
	var uLocal_1325 = 0;
	float fLocal_1326 = 0f;
	float fLocal_1327 = 0f;
	float fLocal_1328 = 0f;
	float fLocal_1329 = 0f;
	float fLocal_1330 = 0f;
	float fLocal_1331 = 0f;
	bool bLocal_1332 = false;
	bool bLocal_1333 = false;
	var uLocal_1334 = 0;
	bool bLocal_1335 = false;
	int iLocal_1336 = 0;
	int iLocal_1337 = 0;
	int iLocal_1338 = 0;
	int iLocal_1339 = 0;
	int iLocal_1340 = 0;
	int iLocal_1341 = 0;
	int iLocal_1342 = 0;
	int iLocal_1343 = 0;
	int iLocal_1344 = 0;
	int iLocal_1345 = 0;
	int iLocal_1346 = 0;
	int iLocal_1347 = 0;
	int iLocal_1348 = 0;
	int iLocal_1349 = 0;
	int iLocal_1350 = 0;
	int iLocal_1351 = 0;
	int iLocal_1352 = 0;
	bool bLocal_1353 = false;
	bool bLocal_1354 = false;
	int iLocal_1355 = 0;
	int iLocal_1356 = 0;
	int iLocal_1357 = 0;
	int iLocal_1358 = 0;
	bool bLocal_1359 = false;
	int iLocal_1360 = 0;
	int iLocal_1361 = 0;
	int iLocal_1362 = 0;
	int iLocal_1363 = 0;
	int iLocal_1364 = 0;
	int iLocal_1365 = 0;
	int iLocal_1366 = 0;
	int iLocal_1367 = 0;
	int iLocal_1368 = 0;
	int iLocal_1369 = 0;
	int iLocal_1370 = 0;
	int iLocal_1371 = 0;
	int iLocal_1372 = 0;
	int iLocal_1373 = 0;
	int iLocal_1374 = 0;
	int iLocal_1375 = 0;
	int iLocal_1376 = 0;
	int iLocal_1377 = 0;
	int iLocal_1378 = 0;
	int iLocal_1379 = 0;
	int iLocal_1380 = 0;
	bool bLocal_1381 = false;
	int iLocal_1382 = 0;
	int iLocal_1383 = 0;
	int iLocal_1384 = 0;
	int iLocal_1385 = 0;
	int iLocal_1386 = 0;
	int iLocal_1387 = 0;
	int iLocal_1388 = 0;
	int iLocal_1389 = 0;
	int iLocal_1390 = 0;
	int iLocal_1391 = 0;
	int iLocal_1392 = 0;
	int iLocal_1393 = 0;
	int iLocal_1394 = 0;
	int iLocal_1395 = 0;
	int iLocal_1396 = 0;
	struct<4> Local_1397 = { 0, 0, 0, 0 } ;
	var uLocal_1401 = 0;
	var uLocal_1402 = 1065353216;
	var uLocal_1403 = 1119092736;
	var uLocal_1404 = 1092616192;
	var uLocal_1405 = 1085276160;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	int iLocal_1464 = 0;
	int iLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	int iLocal_1469 = 0;
	int iLocal_1470 = 0;
	int iLocal_1471 = 0;
	int iLocal_1472 = 0;
	int iLocal_1473 = 0;
	int iLocal_1474 = 0;
	int iLocal_1475 = 0;
	int iLocal_1476 = 0;
	int iLocal_1477 = 0;
	int iLocal_1478 = 0;
	int iLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion
void __EntryFunction__()
{
	struct<7> Var3;
	int iVar10;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	cLocal_14 = "CALL";
	sLocal_15 = "CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_BASE";
	sLocal_16 = "CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_STREAMED";
	sLocal_17 = "CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_VARIATIONS";
	sLocal_18 = "CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@LOCO@ATTACKER";
	sLocal_19 = "CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@LOCO@VICTIM";
	fLocal_1324 = 125f;
	fLocal_1328 = 15f;
	fLocal_1329 = 0f;
	fLocal_1330 = 5f;
	fLocal_1331 = 3f;
	iLocal_1352 = 1;
	iLocal_1355 = 1;
	iLocal_1361 = 1;
	iLocal_1363 = 1;
	iLocal_1368 = 1;
	iLocal_1376 = 1;
	iLocal_1379 = 1;
	iLocal_1380 = 1;
	iLocal_1386 = 5000;
	iLocal_1391 = 1;
	iLocal_1479 = -1;
	Local_441.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	Local_441.f_43 = __LIB_0__::func_12();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_1381 = true;
		iLocal_1348 = 1;
	}
	if (!bLocal_1381)
	{
		Local_441.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
		func_4();
		func_5();
		func_6();
		func_7();
		Local_441.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
		Local_441.f_3 = __LIB_0__::func_81(&vScriptParam_0);
		__LIB_3__::func_420(&Local_441, 1);
		__LIB_2__::func_290(&(Local_441.f_5));
		__LIB_2__::func_290(&uLocal_1013);
		__LIB_2__::func_180(&uLocal_1013, 0);
		uLocal_1042 = uLocal_1042;
		__LIB_1__::func_681(&iLocal_35, 4);
		__LIB_1__::func_681(&iLocal_35, 2);
		Local_441.f_176 = 1;
	}
	Var3.f_3 = 1065353216;
	Var3.f_4 = -1;
	Var3.f_5 = 1048576000;
	Var3.f_6 = 1193033728;
	while (true)
	{
		__LIB_2__::func_265(bLocal_1381, 2610, 0);
		if (bLocal_1381)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_1045)
			{
				case 0:
					if (func_14())
					{
						iLocal_1045 = 1;
					}
					break;
				case 1:
					if (__LIB_4__::func_422(&Local_441, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_16(&Local_441, &uLocal_1489, &uLocal_1488);
						func_17(&Local_1223);
						iLocal_1387 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iLocal_36) / 2f));
						__LIB_3__::func_594(&uLocal_1467, &uLocal_1483, Local_1223.f_84, Local_1223.f_87, Local_1223.f_90, 0, 0, 1, 0, 0);
						func_19();
						iLocal_1045 = 3;
					}
					else if (Local_441.f_160)
					{
						func_12();
					}
					break;
				case 3:
					if (func_20())
					{
						func_21();
						func_22();
						func_23();
						iLocal_1045 = 4;
					}
					break;
				case 4:
					if (iLocal_1337 != 0)
					{
					}
					else if (func_24())
					{
						func_25();
					}
					if (!__LIB_3__::func_645(&Local_441, &iLocal_742, iLocal_38, 0, 1, 0, 1, 0))
					{
						if (iLocal_1044 != 35 && iLocal_1044 != 36)
						{
							func_12();
						}
					}
					if (!Local_441.f_46 && iLocal_1346 == 0)
					{
						if (iLocal_1389 > 0 && __LIB_2__::func_1(iLocal_742[3], 0, 1))
						{
							PED::SET_PED_RESET_FLAG(iLocal_742[3], 42, true);
						}
						switch (iLocal_1392)
						{
							case 0:
								if (__LIB_4__::func_107(iLocal_742[0], 0, &(Local_441.f_5), &iLocal_1215, 0, 0) || PED::IS_PED_RAGDOLL(iLocal_742[0]))
								{
									if (iLocal_1215 == 65536 && !PED::IS_PED_RAGDOLL(iLocal_742[0]))
									{
										if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0]))
										{
											if (!bLocal_1354)
											{
												func_29();
											}
											else if (__LIB_0__::func_264(&uLocal_1424) >= 5.5f)
											{
												func_31();
												Local_441.f_46 = 1;
											}
										}
									}
									else
									{
										if (iLocal_1044 > 17)
										{
											bLocal_1335 = true;
										}
										iLocal_1044 = 29;
										Local_441.f_46 = 1;
									}
								}
								if (iLocal_38 != 0)
								{
								}
								else
								{
									iLocal_1392 = 1;
								}
								break;
							case 1:
								if (iLocal_1362 == 0 && ((__LIB_4__::func_107(iLocal_742[1], 0, &(Local_441.f_5), &iLocal_1215, 0, 0) || PED::IS_PED_RAGDOLL(iLocal_742[1])) || (!__LIB_0__::func_163(iLocal_742[1], 1435919172) && iLocal_1044 >= 2)))
								{
									iLocal_1044 = 29;
									__LIB_1__::func_683(&iLocal_35, -2147483648);
									TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_742[1], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
									Local_441.f_46 = 1;
								}
								if (iLocal_1389 > 0 && iLocal_1361 == 1)
								{
									iLocal_1392++;
								}
								else
								{
									iLocal_1392 = 0;
								}
								break;
							case 2:
								if (iLocal_1389 > 0 && iLocal_1361 == 1)
								{
									if (__LIB_4__::func_107(iLocal_742[3], 0, &uLocal_1013, &iLocal_1215, 0, 0))
									{
										iVar10 = 1;
										if (iLocal_1215 == 8192 || iLocal_1215 == 16384)
										{
											if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_742[3], iLocal_742[2], 17) && !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_742[3], Global_35, 17))
											{
												iVar10 = 0;
											}
										}
										if (iVar10 != 1)
										{
										}
										else
										{
											func_34(joaat("CRIME_ASSAULT"), iLocal_742[3], 1, 2f);
											__LIB_2__::func_478(iLocal_742[3], Global_35, func_35("GET_LAW"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
											iLocal_1361 = 0;
										}
									}
								}
								iLocal_1392 = 0;
								break;
						}
						if ((((__LIB_0__::func_27(iLocal_35, 4) && (iLocal_1394 >= 4 || (iLocal_1394 >= 2 && __LIB_2__::func_118(iLocal_742[0], 1, 1) > 18f))) && (iLocal_1044 > 6 || ((iLocal_1044 == 3 && bLocal_881 == 1) && __LIB_0__::func_264(&uLocal_1433) > 10f))) && !__LIB_0__::func_27(iLocal_35, 256)) || (__LIB_0__::func_27(iLocal_35, 2048) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)))
						{
							iLocal_1044 = 29;
							__LIB_1__::func_991(iLocal_742[0], 0);
							Local_441.f_46 = 1;
							iLocal_1391 = 5;
							iLocal_1344 = 1;
						}
					}
					if (!__LIB_2__::func_1(iLocal_742[0], 0, 1) || bLocal_1332)
					{
						if (iLocal_1044 != 35 && iLocal_1044 != 36)
						{
							func_12();
						}
					}
					__LIB_4__::func_208(&uLocal_1484, &uLocal_1406, 8f, 0);
					if (iLocal_1382 == 0)
					{
					}
					else
					{
						iLocal_1383 = 0;
						fLocal_1326 = __LIB_2__::func_118(iLocal_742[0], 0, 1);
						if (fLocal_1326 > 30f)
						{
							iLocal_1383 = 10000;
						}
						else if (fLocal_1326 < 10f)
						{
							iLocal_1383 = -10000;
						}
						if ((MISC::GET_GAME_TIMER() - iLocal_1382) > (20000 - iLocal_1383) && !__LIB_0__::func_27(iLocal_35, 524288))
						{
							if ((((fLocal_1326 < 30f && iLocal_1340 == 1) && iLocal_1388 == 3) && __LIB_2__::func_227(0, 1, 0, 0)) || fLocal_1326 > 30f)
							{
								Var3 = { Local_1223.f_93 };
								Var3.f_3 = 1f;
								Var3.f_4 = -1;
								Var3.f_5 = 0.25f;
								Var3.f_6 = Local_1223.f_96;
								__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("IGNORE"), "", 30f, 0, 1, 0, 1, 1, 1, 291934926, 1, 0, 0);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_1219);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_1219);
								TASK::TASK_FOLLOW_PAVEMENT_TO_COORD(0, &Var3);
								__LIB_1__::func_473(0, joaat("WORLD_HUMAN_SMOKE"), -1, 1, 0, -1082130432 /* Float: -1f */);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_1219);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_742[0], iLocal_1219);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_1219);
								PED::SET_PED_KEEP_TASK(iLocal_742[0], true);
								iLocal_1044 = 33;
								__LIB_2__::func_451(&(Local_1046[0 /*21*/]), 0);
								iLocal_978 = 3;
								fLocal_1330 = 15f;
								__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 0, 0);
								__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 0, 0);
								iLocal_1366 = 0;
								iLocal_1367 = 0;
								iLocal_1363 = 1;
								__LIB_1__::func_345();
								iLocal_1352 = 0;
								__LIB_0__::func_325(&(uLocal_747[0]));
								__LIB_1__::func_683(&iLocal_35, 524288);
							}
						}
					}
					if (iLocal_1385 != 0)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_1385 + 30000)
						{
							TASK::TASK_WANDER_STANDARD(iLocal_742[0], 40000f, 0);
							iLocal_1352 = 0;
							__LIB_0__::func_325(&(uLocal_747[0]));
							func_12();
						}
					}
					if (func_47())
					{
						Local_441.f_50 = 1;
						if (iLocal_1044 != 35 && iLocal_1044 != 36)
						{
							func_12();
						}
					}
					if (iLocal_1044 != 35 && iLocal_1044 != 36)
					{
						if (__LIB_3__::func_365(&Local_441, &iLocal_742, 1, 1, 0, bLocal_1353, 1, 1, 0, 0, 0, 0, 0))
						{
							iLocal_1348 = 1;
							func_12();
						}
					}
					if (fLocal_1323 == 0f)
					{
					}
					else if (__LIB_0__::func_94(Global_35, vLocal_1320, 1) > (fLocal_1324 + fLocal_1323))
					{
						if (iLocal_1044 != 35 && iLocal_1044 != 36)
						{
							iLocal_1348 = 1;
							func_12();
						}
					}
					break;
			}
			BUILTIN::WAIT(Local_441.f_158);
		}
	}
}

void func_4()
{
	int iVar0;
	iVar0 = __LIB_3__::func_390(Local_441.f_3, 2, 0);
	iLocal_38 = iVar0;
	if ((__LIB_3__::func_564(115, 6) == 0 || __LIB_3__::func_564(115, 1) == 1) || __LIB_3__::func_564(115, 3) == 1)
	{
		iLocal_38 = 0;
	}
	else
	{
		iLocal_38 = 1;
	}
}

void func_5()
{
	Local_635.f_4 = "script@beat@town@townRobbery@initial_callover";
	Local_635.f_6 = "script@beat@town@townRobbery@interior_grapple";
	Local_635.f_7 = "script@beat@town@townRobbery@handover_money";
}

void func_6()
{
	Local_643[0 /*12*/].f_7 = joaat("P_CIGARETTE01X");
	Local_643[1 /*12*/].f_7 = joaat("P_FOLDEDBILLS01X");
	Local_643[2 /*12*/].f_7 = joaat("P_FOLDEDBILLS01X");
	Local_643[3 /*12*/].f_7 = joaat("P_DRESSER03X");
}

void func_7()
{
	Local_692 = { 0f, 0f, 0f };
	Local_692.f_3 = Global_35;
	Local_692.f_8 = 4;
	Local_692.f_4 = 21030;
	Local_692.f_19 = 4;
	Local_692.f_20 = 4;
	Local_692.f_21 = 4;
	Local_692.f_22 = 4;
	Local_692.f_7 = -1;
	Local_717 = { 0f, 0f, 0f };
	Local_717.f_3 = iLocal_742[0];
	Local_717.f_8 = 4;
	Local_717.f_4 = 21030;
	Local_717.f_19 = 4;
	Local_717.f_20 = 4;
	Local_717.f_21 = 4;
	Local_717.f_22 = 4;
	Local_692.f_7 = 0;
}

void func_12()
{
	int iVar0;
	if (iLocal_1346 == 0 || iLocal_1348 == 1)
	{
		__LIB_1__::func_683(&iLocal_35, 524288);
		iLocal_1044 = 35;
		if (iLocal_1336 == 0)
		{
			iLocal_1336 = 1;
		}
		if (iLocal_1358 == 1)
		{
			LAW::_0x710448D44A64C213(1);
			LAW::_0xC805EB785824F712(1);
			iLocal_1358 = 0;
		}
		if (__LIB_2__::func_1(iLocal_742[2], 0, 0))
		{
			LAW::_0xFFEBE5AA96BC2E4E(iLocal_742[2], joaat("CRIME_UNARMED_ASSAULT"), 0);
		}
		ENTITY::_0xD2B9C78537ED5759(uLocal_1222);
		__LIB_0__::func_769();
		if (__LIB_0__::func_27(iLocal_35, 33554432))
		{
			if (__LIB_2__::func_1(Global_35, 0, 1))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 3f);
				__LIB_1__::func_681(&iLocal_35, 33554432);
			}
		}
		if (iLocal_1373 == 1)
		{
			PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(16));
			iLocal_1373 = 0;
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_742[3]))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_742[3]))
				{
					__LIB_2__::func_426(&(iLocal_742[3]));
				}
				else
				{
					TASK::TASK_WANDER_IN_AREA(iLocal_742[3], -325.6645f, 771.7883f, 116.436f, 7f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 1);
					PED::_0x39A2FC5AF55A52B1(iLocal_742[3], -1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_742[3]));
				}
			}
			__LIB_4__::func_932(79, 1);
		}
		if (iLocal_38 == 0 && __LIB_0__::func_27(iLocal_35, 536870912))
		{
			if (iLocal_1371 == 0 && iLocal_1372 == 0)
			{
				iLocal_1372 = 1;
				__LIB_3__::func_465(2, 0, 0, "RE_HONOR_BROKE_AGREEMENT", iLocal_742[0], 0, 1065353216 /* Float: 1f */, 0);
			}
		}
		if (AUDIO::PREPARE_MUSIC_EVENT("RETR_STOP"))
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("RETR_STOP"))
			{
			}
		}
		__LIB_0__::func_172(iLocal_1478);
		__LIB_0__::func_172(iLocal_1474);
		if (iLocal_1342 == 1 && !__LIB_0__::func_27(iLocal_35, 536870912))
		{
			func_68();
		}
		if ((iLocal_1357 == 1 && !__LIB_0__::func_27(iLocal_35, 536870912)) && iLocal_38 == 0)
		{
			iVar0 = 0;
			iVar0 = __LIB_3__::func_564(115, 5);
			iVar0++;
			__LIB_3__::func_461(115, 5, iVar0);
			if (iVar0 >= 2)
			{
				__LIB_3__::func_666(115, 0, 3, 0, 0);
				Local_441.f_44 = 1;
				if (!__LIB_0__::func_181())
				{
					__LIB_3__::func_461(115, 4, 1);
				}
			}
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1477))
		{
			VOLUME::_DELETE_VOLUME(iLocal_1477);
		}
		PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
		if (INTERIOR::IS_VALID_INTERIOR(iLocal_937))
		{
			INTERIOR::UNPIN_INTERIOR(iLocal_937);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1475))
		{
			PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_1475);
			__LIB_0__::func_172(iLocal_1475);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1471))
		{
			func_72(&iLocal_1471);
		}
		TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DRESSER03X", true);
		TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_DD_234", true);
		TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DRESSERVAL01X", true);
		iLocal_1352 = 0;
		__LIB_0__::func_325(&(uLocal_747[0]));
		if (__LIB_2__::func_1(iLocal_742[0], 0, 1))
		{
			__LIB_4__::func_72(iLocal_742[0]);
		}
		if (iLocal_1342 == 1 && iLocal_1343 == 0)
		{
			iLocal_1343 = 1;
			__LIB_0__::func_8(&Global_1935630, 4);
			__LIB_1__::func_682(115);
		}
		if (iLocal_1357 == 0)
		{
			Local_441.f_45 = 0;
			__LIB_3__::func_252(&Local_441);
		}
		MAP::DISPLAY_RADAR(true);
		__LIB_3__::func_525(&uLocal_1466, &uLocal_1481);
		__LIB_3__::func_525(&uLocal_1467, &uLocal_1483);
		if (MISC::_0x0D0AE5081F88CFE1(Local_20.f_12))
		{
			MISC::_0x154340E87D8CC178(Local_20.f_12);
		}
		if (MISC::_0x0D0AE5081F88CFE1(joaat("REWARD_MONEYSTACK")))
		{
			MISC::_0x154340E87D8CC178(joaat("REWARD_MONEYSTACK"));
		}
		__LIB_1__::func_345();
		if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_20))
		{
			TASK::_DELETE_SCENARIO_POINT(Local_20);
		}
		func_78();
		func_79();
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1220))
		{
			TASK::_DELETE_SCENARIO_POINT(iLocal_1220);
		}
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1221))
		{
			TASK::_DELETE_SCENARIO_POINT(iLocal_1221);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1472))
		{
			VOLUME::_DELETE_VOLUME(iLocal_1472);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1473))
		{
			VOLUME::_DELETE_VOLUME(iLocal_1473);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1474))
		{
			VOLUME::_DELETE_VOLUME(iLocal_1474);
		}
		STREAMING::_0x9F348DE670423460(sLocal_15);
		STREAMING::_0x9F348DE670423460(sLocal_16);
		STREAMING::_0x9F348DE670423460(sLocal_17);
		STREAMING::_0x9F348DE670423460(sLocal_18);
		STREAMING::_0x9F348DE670423460(sLocal_19);
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1476))
		{
			PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_1476);
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1476))
			{
				VOLUME::_DELETE_VOLUME(iLocal_1476);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_742[3]))
		{
			__LIB_3__::func_379(&(iLocal_742[3]), 0);
			PED::_0x39A2FC5AF55A52B1(iLocal_742[3], -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_643[2 /*12*/].f_8))
		{
			if (!OBJECT::IS_OBJECT_VISIBLE(Local_643[2 /*12*/].f_8))
			{
				OBJECT::DELETE_OBJECT(&(Local_643[2 /*12*/].f_8));
			}
		}
		if (iLocal_1380 == 0)
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			}
			iLocal_1380 = 1;
		}
		__LIB_1__::func_948(183181940, 0, 0f, 0, 0, 0f, 0, 0);
		if (iLocal_1348 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_742[0]))
			{
				if (__LIB_0__::func_255(iLocal_742[0], 1))
				{
					if (iLocal_1374 == 0)
					{
						__LIB_3__::func_666(115, 0, 2, 0, 0);
					}
					iLocal_1044 = 36;
				}
			}
			else
			{
				iLocal_1044 = 36;
			}
			iLocal_1347 = 1;
			__LIB_3__::func_823(&Local_441, &iLocal_742, &uLocal_747, iLocal_38, uLocal_1489, uLocal_1488, 0, 1, 0, 1);
			SCRIPTS::TERMINATE_THIS_THREAD();
		}
	}
}

bool func_14()
{
	int iVar0;
	switch (iLocal_1043)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_441))
			{
				func_86();
				func_87();
				func_88();
				__LIB_3__::func_314(&Local_643);
				STREAMING::_0x03DDBF2D73799F9E(sLocal_15);
				STREAMING::_0x03DDBF2D73799F9E(sLocal_16);
				STREAMING::_0x03DDBF2D73799F9E(sLocal_17);
				STREAMING::_0x03DDBF2D73799F9E(sLocal_18);
				STREAMING::_0x03DDBF2D73799F9E(sLocal_19);
				iLocal_1043 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_0(&uLocal_1042, cLocal_14))
			{
				return false;
			}
			if (!__LIB_3__::func_315(&uLocal_39))
			{
				return false;
			}
			if (!__LIB_3__::func_316(&Local_643))
			{
				return false;
			}
			if (!STREAMING::_0x85B8F04555AB49B8(sLocal_15))
			{
				return false;
			}
			if (!STREAMING::_0x85B8F04555AB49B8(sLocal_16))
			{
				return false;
			}
			if (!STREAMING::_0x85B8F04555AB49B8(sLocal_17))
			{
				return false;
			}
			if (!STREAMING::_0x85B8F04555AB49B8(sLocal_18))
			{
				return false;
			}
			if (!STREAMING::_0x85B8F04555AB49B8(sLocal_19))
			{
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_752[iVar0 /*32*/].f_1))
				{
					return false;
				}
				iVar0++;
			}
			if (!__LIB_3__::func_449(&Local_752))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_16(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 9;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 9;
			*uParam2 = 1;
			break;
		case 2:
			*uParam1 = 9;
			*uParam2 = 2;
			break;
	}
}

void func_17(var uParam0)
{
	func_99(uParam0);
	vLocal_883 = { -323.387f, 758.965f, 116.472f };
	vLocal_886 = { -323.387f, 758.9651f, 116.4372f };
	vLocal_889 = { 0f, 0f, -170f };
	iLocal_36 = 5000;
	if (__LIB_0__::func_27(iLocal_35, 2) || __LIB_0__::func_27(iLocal_35, 4))
	{
		Local_20.f_3 = { vLocal_883 };
		Local_20.f_6 = 167.9709f;
		Local_20.f_12 = joaat("S_LOOTABLEMISCCHEST");
	}
	else
	{
		Local_20.f_3 = { -322.891f, 759.959f, 116.436f };
		Local_20.f_6 = -77.89f;
		Local_20.f_12 = joaat("S_LOOTABLEPOORCASE");
	}
}

void func_19()
{
	func_104();
}

bool func_20()
{
	switch (iLocal_1041)
	{
		case 0:
			if ((iLocal_38 == 0 && func_107(__LIB_3__::func_179(&Local_441), __LIB_3__::func_526(&Local_441), &Local_752, &iLocal_742, 0, 0, 1, 1)) || (iLocal_38 == 1 && func_107(__LIB_3__::func_179(&Local_441), __LIB_3__::func_526(&Local_441), &Local_752, &iLocal_742, 0, 0, 0, 1)))
			{
				if (__LIB_2__::func_1(iLocal_742[2], 0, 1))
				{
					__LIB_2__::func_426(&(iLocal_742[2]));
				}
				return true;
			}
			break;
	}
	return false;
}

void func_21()
{
	if (iLocal_38 == 0)
	{
		__LIB_2__::func_602(&(Local_1110[0 /*17*/]), "RE_INTER_POS", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
		__LIB_2__::func_602(&(Local_1110[1 /*17*/]), "RE_INTER_ANTAGONIZE", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
		__LIB_2__::func_602(&(Local_1180[0 /*17*/]), "RE_INTER_POS", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
		__LIB_2__::func_602(&(Local_1180[1 /*17*/]), "RE_INTER_ANTAGONIZE", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
		__LIB_2__::func_602(&(Local_1145[0 /*17*/]), "INTERACT_QUESTION", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		__LIB_2__::func_602(&(Local_1145[1 /*17*/]), "RE_INTER_ANTAGONIZE", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
		__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_1180[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_1180[1 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_1145[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_1145[1 /*17*/]), 0, 0);
		iLocal_1366 = 0;
		iLocal_1367 = 0;
		__LIB_1__::func_471(&(Local_1110[0 /*17*/]), 8);
		__LIB_1__::func_471(&(Local_1110[1 /*17*/]), 8);
	}
	else
	{
		__LIB_2__::func_602(&(Local_1110[0 /*17*/]), "RE_INTER_POS", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
		__LIB_2__::func_602(&(Local_1110[1 /*17*/]), "RE_INTER_ANTAGONIZE", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
		__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 0, 0);
		iLocal_1366 = 0;
		iLocal_1367 = 0;
	}
}

void func_22()
{
	vector3 vVar0;
	Local_635 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_635.f_4, 0, 0, false, true);
	Local_635.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_635.f_6, 0, 0, false, true);
	Local_635.f_3 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_635.f_7, 64, 0, false, true);
	vVar0 = { Local_441.f_51, Local_441.f_51.f_1, (Local_441.f_51.f_2 - 1f) };
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_635, vVar0, 0f, 0f, Local_752[0 /*32*/].f_9, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_635, "pedStranger", iLocal_742[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_635.f_2, vLocal_886, vLocal_889, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_635.f_2, "player", Global_35, 0);
	Local_643[2 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_643[2 /*12*/].f_7, Local_441.f_51 - Vector(3f, 0f, 0f), true, true, false, false, true);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_635.f_2, "Bills", Local_643[2 /*12*/].f_8, 0);
	OBJECT::TRACK_OBJECT_VISIBILITY(Local_643[2 /*12*/].f_8);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_635.f_3, ENTITY::GET_ENTITY_COORDS(iLocal_742[0], true, false), ENTITY::GET_ENTITY_ROTATION(iLocal_742[0], 2), 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_635.f_3, "pedStranger", iLocal_742[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_635.f_3, "pedPlayer", Global_35, 0);
	Local_643[1 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_643[1 /*12*/].f_7, Local_441.f_51 - Vector(3f, 0f, 0f), true, true, false, false, true);
	if (iLocal_1355 == 0)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_635.f_3, "objMoney", Local_643[1 /*12*/].f_8, 0);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_635.f_4))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_635, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_635);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_635.f_6))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_635.f_2, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_635.f_2);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_635.f_7))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_635.f_3, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_635.f_3);
		}
	}
	iLocal_1385 = 0;
}

void func_23()
{
	if (__LIB_2__::func_1(iLocal_742[0], 0, 1))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_752[0 /*32*/].f_23)))
		{
			__LIB_2__::func_133(iLocal_742[0], &(Local_752[0 /*32*/].f_23), 0);
		}
		iLocal_1477 = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(iLocal_742[0], true, false), 0f, 0f, 0f, 4f, 4f, 5f);
		PED::_0x7C00CFC48A782DC0(iLocal_1477, iLocal_742[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
	if (!__LIB_0__::func_27(iLocal_35, 2) && !__LIB_0__::func_27(iLocal_35, 4))
	{
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_742[1], false);
	}
	__LIB_3__::func_895(&uLocal_938);
	__LIB_3__::func_285(iLocal_742[0], &Local_441, 0);
}

bool func_24()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_635))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(Local_635, false))
		{
			iLocal_1339 = 1;
			if (ANIMSCENE::_0xA9016536015DE29D(Local_635, "callout_far_a_front"))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_635, "callout_far_a_front"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_635, "callout_far_a_front");
					iLocal_1339 = 0;
				}
			}
			if (ANIMSCENE::_0xA9016536015DE29D(Local_635, "callout_far_b_left"))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_635, "callout_far_b_left"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_635, "callout_far_b_left");
					iLocal_1339 = 0;
				}
			}
			if (ANIMSCENE::_0xA9016536015DE29D(Local_635, "callout_far_a_right"))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_635, "callout_far_a_right"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_635, "callout_far_a_right");
					iLocal_1339 = 0;
				}
			}
			if (ANIMSCENE::_0xA9016536015DE29D(Local_635, "callout_far_c_behind"))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_635, "callout_far_c_behind"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_635, "callout_far_c_behind");
					iLocal_1339 = 0;
				}
			}
			if (ANIMSCENE::_0xA9016536015DE29D(Local_635, "callout_near_a_front"))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_635, "callout_near_a_front"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_635, "callout_near_a_front");
					iLocal_1339 = 0;
				}
			}
			if (ANIMSCENE::_0xA9016536015DE29D(Local_635, "callout_near_b_left"))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_635, "callout_near_b_left"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_635, "callout_near_b_left");
					iLocal_1339 = 0;
				}
			}
			if (ANIMSCENE::_0xA9016536015DE29D(Local_635, "callout_near_a_right"))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_635, "callout_near_a_right"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_635, "callout_near_a_right");
					iLocal_1339 = 0;
				}
			}
			if (ANIMSCENE::_0xA9016536015DE29D(Local_635, "callout_near_c_behind"))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_635, "callout_near_c_behind"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_635, "callout_near_c_behind");
					iLocal_1339 = 0;
				}
			}
			if (ANIMSCENE::_0xA9016536015DE29D(Local_635, "initial_lean_start"))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_635, "initial_lean_start"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_635, "initial_lean_start");
					iLocal_1339 = 0;
				}
			}
			if (iLocal_1339 == 1)
			{
				iVar0 = 1;
			}
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_635.f_3))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(Local_635.f_3, false))
		{
			if (ANIMSCENE::_0xA9016536015DE29D(Local_635.f_3, "pbl_handover"))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_635.f_3, "pbl_handover"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_635.f_3, "pbl_handover");
					iLocal_1339 = 0;
				}
			}
			if (ANIMSCENE::_0xA9016536015DE29D(Local_635.f_3, "pbl_idle"))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_635.f_3, "pbl_idle"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_635.f_3, "pbl_idle");
					iLocal_1339 = 0;
				}
			}
			if (iLocal_1339 == 1)
			{
				iVar1 = 1;
			}
		}
	}
	if (iVar0 == 1 && iVar1 == 1)
	{
		iLocal_1337 = 1;
		return true;
	}
	return false;
}

void func_25()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_635))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_635, "initial_lean_start", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_635, "ACTION_1", false, false);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_635.f_3))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_635.f_3, "pbl_idle", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_635.f_3, "idle_loop", false, false);
	}
}

void func_29()
{
	if ((__LIB_2__::func_227(0, 1, 0, 0) && __LIB_0__::func_27(iLocal_35, 64)) && __LIB_0__::func_264(&uLocal_1424) >= 5.5f)
	{
		__LIB_2__::func_478(iLocal_742[0], Global_35, "PLAYER_LOITERING", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		TASK::TASK_REACT(iLocal_742[0], Global_35, 0f, 0f, 0f, "Default_Nervous", 2f, 0f, 4);
		__LIB_0__::func_268(&uLocal_1424, -2f);
		bLocal_1354 = true;
		__LIB_3__::func_541(&(Local_441.f_5), &iLocal_1215);
	}
}

void func_31()
{
	__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("AGGRO_ANNOY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	TASK::CLEAR_PED_SECONDARY_TASK(iLocal_742[0]);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_1218);
	TASK::TASK_CONFRONT(0, Global_35, 2);
	TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 6, 0, -1082130432 /* Float: -1f */, -1, 0);
	__LIB_1__::func_474(iLocal_742[0], &iLocal_1218, 0, 0, 1, 1);
	PED::SET_PED_KEEP_TASK(iLocal_742[0], true);
	__LIB_1__::func_683(&iLocal_35, 134217728);
	__LIB_0__::func_325(&iLocal_1217);
	__LIB_0__::func_325(&(uLocal_747[0]));
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1469))
	{
		VOLUME::_DELETE_VOLUME(iLocal_1469);
	}
	__LIB_3__::func_264(&Local_441);
	if (MISC::_0x0D0AE5081F88CFE1(Local_20.f_12))
	{
		MISC::_0x154340E87D8CC178(Local_20.f_12);
	}
	if (MISC::_0x0D0AE5081F88CFE1(joaat("REWARD_MONEYSTACK")))
	{
		MISC::_0x154340E87D8CC178(joaat("REWARD_MONEYSTACK"));
	}
	__LIB_1__::func_345();
	func_78();
	func_79();
	iLocal_1352 = 0;
	__LIB_0__::func_325(&(uLocal_747[0]));
	__LIB_1__::func_683(&iLocal_35, 1024);
	func_12();
}

void func_34(int iParam0, var uParam1, int iParam2, float fParam3)
{
	if (iLocal_1350 == 0)
	{
		iLocal_1350 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_742[3]))
		{
			PED::_0xEEED8FAFEC331A70(iLocal_742[3], Global_36, 3);
			__LIB_0__::func_267(1);
			LAW::_0x710448D44A64C213(1);
			PED::SET_PED_CONFIG_FLAG(iLocal_742[3], 146, false);
			PED::SET_PED_CONFIG_FLAG(iLocal_742[3], 148, false);
			LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), iParam0, 0, 0, 0, 0, 0, 0, 0);
			PED::_0xC6C4E15CF7D52FEA(iLocal_742[3], 1000f);
			LAW::_0x10827B5A0AAC56A7(PLAYER::PLAYER_ID(), iParam0, uLocal_1463);
			AUDIO::STOP_PED_SPEAKING(iLocal_742[3], false);
			TASK::TASK_REACT(iLocal_742[3], Global_35, 0f, 0f, 0f, "Default_Shocked", 1.5f, 0f, 4);
			LAW::_0xF0B67BAD53C35BD9(iLocal_742[3], Global_35, uParam1, Global_36, iParam0);
			PED::SET_PED_KEEP_TASK(iLocal_742[3], true);
		}
	}
}

char* func_35(char* sParam0)
{
	int iVar0;
	if (iLocal_38 == 0)
	{
		iVar0 = 1;
	}
	else if (iLocal_38 == 1)
	{
		iVar0 = 2;
	}
	switch (__LIB_1__::func_898())
	{
		case 4:
			return __LIB_3__::func_394("TOWNR", "BLW", sParam0, iVar0);
		case 9:
			return __LIB_3__::func_394("TOWNR", "VAL", sParam0, iVar0);
		case 10:
			return __LIB_3__::func_394("TOWNR", "VHT", sParam0, iVar0);
		default:
			break;
	}
	return "INVALID";
}

bool func_47()
{
	float fVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	vector3 vVar13;
	int iVar16;
	struct<7> Var17;
	struct<7> Var24;
	float fVar31;
	float fVar32;
	float fVar33;
	fVar0 = 0f;
	fVar1 = 0f;
	vVar3 = { 0f, 0f, 0f };
	fVar6 = 15f;
	if (iLocal_1368 == 1)
	{
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iLocal_742[0], 1, 1);
	}
	if (iLocal_1373 == 1)
	{
		__LIB_11__::func_568(20);
	}
	func_177();
	if (Local_441.f_46 == 0 && __LIB_2__::func_1(iLocal_742[0], 0, 1))
	{
		PED::SET_PED_RESET_FLAG(iLocal_742[0], 12, true);
		PED::SET_PED_RESET_FLAG(iLocal_742[0], 172, true);
	}
	if (iLocal_38 == 0)
	{
		func_178();
	}
	else
	{
		func_179();
	}
	func_180();
	func_181();
	func_182();
	func_183(bLocal_1359);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1469))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1469, true, 0))
		{
			__LIB_2__::func_104(&(Local_441.f_5), 0);
			if (iLocal_1350 == 0 && PED::IS_PED_SHOOTING(Global_35))
			{
				func_34(joaat("CRIME_ASSAULT"), iLocal_742[3], 1, 2f);
			}
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1470, true, 0))
			{
				if (!__LIB_0__::func_27(iLocal_35, 8192))
				{
					if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
					{
						if (!__LIB_0__::func_27(iLocal_35, 67108864))
						{
							__LIB_1__::func_683(&iLocal_35, 67108864);
							TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DRESSER03X", false);
							TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_DD_234", false);
							TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DRESSERVAL01X", false);
						}
					}
					else if (__LIB_0__::func_27(iLocal_35, 67108864))
					{
						__LIB_1__::func_681(&iLocal_35, 67108864);
						TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DRESSER03X", true);
						TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_DD_234", true);
						TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DRESSERVAL01X", true);
					}
				}
			}
			else if (!__LIB_0__::func_27(iLocal_35, 8192))
			{
				if (__LIB_0__::func_27(iLocal_35, 67108864))
				{
					__LIB_1__::func_681(&iLocal_35, 67108864);
					TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DRESSER03X", true);
					TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_DD_234", true);
					TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DRESSERVAL01X", true);
				}
			}
			if (func_184())
			{
				__LIB_1__::func_683(&iLocal_35, 8192);
				func_185();
				if (!__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
				{
					__LIB_0__::func_769();
					if (AUDIO::PREPARE_MUSIC_EVENT("RETR_START"))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("RETR_START"))
						{
						}
					}
				}
			}
		}
		else
		{
			__LIB_2__::func_104(&(Local_441.f_5), 1);
		}
	}
	else
	{
		__LIB_2__::func_104(&(Local_441.f_5), 1);
	}
	switch (iLocal_1044)
	{
		case 0:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_635, true, false) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_635.f_3, true, false))
			{
				iLocal_1385 = 0;
				func_186();
				func_187();
				ANIMSCENE::START_ANIM_SCENE(Local_635);
				if (__LIB_2__::func_1(iLocal_742[1], 0, 1))
				{
					__LIB_2__::func_915(iLocal_742[1], joaat("WORLD_HUMAN_SMOKE"), Local_1223.f_3, Local_1223.f_14, -1, 0, 1, "WORLD_HUMAN_SMOKE_MALE_A", -1082130432 /* Float: -1f */);
				}
				if (iLocal_38 == 0)
				{
					if (!__LIB_0__::func_181() && __LIB_3__::func_564(115, 3) == 1)
					{
						__LIB_1__::func_683(&iLocal_35, 8);
					}
					if (__LIB_0__::func_181() && __LIB_3__::func_674(115, 3) == 1)
					{
						__LIB_1__::func_683(&iLocal_35, 8);
					}
				}
				else
				{
					__LIB_1__::func_683(&iLocal_35, 4);
					__LIB_2__::func_272(iLocal_742[0], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					__LIB_3__::func_288(iLocal_742[1], 1f, -1082130432 /* Float: -1f */, 0, 1);
					__LIB_3__::func_259(iLocal_742[1], 0);
					iLocal_742[1] = 0;
				}
				iLocal_1044 = 2;
			}
			else
			{
				if (iLocal_1385 == 0)
				{
					iLocal_1385 = MISC::GET_GAME_TIMER();
				}
				if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_635, true, false))
				{
				}
				if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_635.f_3, true, false))
				{
				}
			}
			break;
		case 2:
			vVar3 = { __LIB_2__::func_114(Global_35, 2f) };
			if (iLocal_38 == 0)
			{
				fVar6 = 15f;
			}
			else
			{
				fVar6 = 15f;
			}
			if (ENTITY::GET_ENTITY_SPEED(Global_35) > 7f)
			{
				fVar6 = (fVar6 + 15f);
			}
			if ((!__LIB_0__::func_86(vVar3) && __LIB_0__::func_94(iLocal_742[0], vVar3, 1) < fVar6) && __LIB_3__::func_452(&Local_441, 3f, fVar6, fVar6, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
			{
				iLocal_1044 = 4;
			}
			break;
		case 4:
			vVar3 = { __LIB_2__::func_114(Global_35, 2f) };
			if (iLocal_38 == 0)
			{
				fVar6 = 15f;
			}
			else
			{
				fVar6 = 15f;
			}
			if (ENTITY::GET_ENTITY_SPEED(Global_35) > 7f)
			{
				fVar6 = (fVar6 + 15f);
			}
			if (!__LIB_0__::func_86(vVar3) && __LIB_0__::func_94(iLocal_742[0], vVar3, 1) < fVar6)
			{
				if (func_196())
				{
					__LIB_1__::func_283(&uLocal_1415, 0);
					iLocal_1044 = 3;
				}
			}
			break;
		case 3:
			if (iLocal_1375 == 0)
			{
				if (iLocal_38 == 1)
				{
					func_198();
				}
				else if (iLocal_38 == 0)
				{
					func_199();
				}
			}
			if (__LIB_1__::func_313(&uLocal_1415, 3f))
			{
				__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 1, 0);
			}
			if (__LIB_0__::func_264(&uLocal_1433) > 1f && __LIB_3__::func_587(iLocal_1479, 1, 1))
			{
				__LIB_4__::func_151(iLocal_742[0], &Local_1397, 0f, 0f, 0f, 1, 30f, 15f, -1, 3000, 2000, 1075838976 /* Float: 2.5f */, 0, 1, 1084227584 /* Float: 5f */);
			}
			if (iLocal_38 == 0)
			{
				if (((VOLUME::_DOES_VOLUME_EXIST(iLocal_1473) && ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1473, true, 0) && __LIB_0__::func_665(iLocal_742[0], Global_35, 1, 1) < 5.25f) || iLocal_1375 == 1)) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0]))
				{
					iLocal_1357 = 1;
					iLocal_1044 = 5;
					__LIB_0__::func_37(&uLocal_1415);
					__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 0, 0);
				}
			}
			else if (iLocal_38 == 1)
			{
				if (((((VOLUME::_DOES_VOLUME_EXIST(iLocal_1473) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1473, true, 0)) || __LIB_0__::func_665(iLocal_742[0], Global_35, 1, 1) < 3.5f) || iLocal_1375 == 1) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0]))
				{
					if (TASK::GET_SEQUENCE_PROGRESS(iLocal_742[0]) >= 1 || __LIB_0__::func_163(iLocal_742[0], -875674219))
					{
						iLocal_1357 = 1;
						iLocal_1044 = 5;
						__LIB_0__::func_37(&uLocal_1415);
						__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 0, 0);
					}
				}
			}
			break;
		case 5:
			if (!func_202())
			{
				func_203();
				__LIB_4__::func_151(iLocal_742[0], &Local_1397, 0f, 0f, 0f, 1, 30f, 10f, -1, 3000, 2000, 1075838976 /* Float: 2.5f */, 0, 1, 1084227584 /* Float: 5f */);
				if (__LIB_9__::func_698(iLocal_742[0], &iLocal_882, -1, 0))
				{
					if (__LIB_0__::func_27(iLocal_35, 4))
					{
						func_205(iLocal_742[0], Global_35, Local_360[15 /*2*/], Local_360[15 /*2*/].f_1, 528, 1082130432 /* Float: 4f */, -1077936128 /* Float: -1.5f */);
						func_206();
					}
					else if (__LIB_0__::func_27(iLocal_35, 8))
					{
						__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("EASYMONEY_ALT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_283(&uLocal_1436, 0);
					}
					else
					{
						func_205(iLocal_742[0], Global_35, Local_360[1 /*2*/], Local_360[1 /*2*/].f_1, 528, 1082130432 /* Float: 4f */, -1077936128 /* Float: -1.5f */);
					}
					EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), iLocal_742[0], 10f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
					iLocal_1044 = 6;
				}
			}
			break;
		case 6:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_742[0], Local_360[1 /*2*/], Local_360[1 /*2*/].f_1, 1))
			{
				fVar2 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_742[0], Local_360[1 /*2*/], Local_360[1 /*2*/].f_1);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_742[0], Local_360[15 /*2*/], Local_360[15 /*2*/].f_1, 1))
			{
				fVar2 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_742[0], Local_360[15 /*2*/], Local_360[15 /*2*/].f_1);
			}
			if (((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_742[0], Local_360[1 /*2*/], Local_360[1 /*2*/].f_1, 1) && fVar2 > 0.75f) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_742[0], Local_360[15 /*2*/], Local_360[15 /*2*/].f_1, 1) && fVar2 > 0.825f)) || (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0]) && __LIB_0__::func_264(&uLocal_1436) > 2f))
			{
				__LIB_1__::func_345();
				__LIB_2__::func_73(iLocal_742[0], &(uLocal_747[0]), -89429847, 1679075994, 0, "RE_INTER_STRANGER");
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_747[0], "RE_INTER_STRANGER");
				if (iLocal_38 == 1)
				{
					__LIB_1__::func_283(&uLocal_1454, 0);
					__LIB_1__::func_283(&uLocal_1457, 0);
				}
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1218);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1223, 1f, -1, 0.25f, 1, 40000f);
				if (__LIB_2__::func_1(iLocal_742[1], 0, 1))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_742[1], 0, -1f, -1f, -1f);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_742[1], -1, -1f, -1f, -1f);
				}
				else
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				}
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1218);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_742[0], iLocal_1218);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1218);
				__LIB_4__::func_416(&(Local_441.f_33));
				Local_692.f_3 = iLocal_742[1];
				_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_742[0], &Local_692);
				if (iLocal_38 == 1)
				{
					iLocal_978 = 1;
					__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 1, 0);
					__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 1, 0);
					iLocal_1366 = 1;
					iLocal_1367 = 1;
				}
				iLocal_1044 = 10;
			}
			break;
		case 7:
			if (iLocal_1382 == 0)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_742[0], 242628503, true) == 1 && TASK::GET_SEQUENCE_PROGRESS(iLocal_742[0]) == 1)
				{
					iLocal_1382 = MISC::GET_GAME_TIMER();
				}
			}
			if (__LIB_0__::func_27(iLocal_35, 2048))
			{
				if ((__LIB_0__::func_264(&uLocal_1454) >= 5f && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0])) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					if (iLocal_1394 == 3)
					{
						iLocal_1394++;
						__LIB_1__::func_148(&uLocal_1454);
						fLocal_1331 = 8f;
					}
				}
			}
			if (__LIB_0__::func_94(iLocal_742[0], Local_1223, 1) < 3f || (iLocal_34 != 0 && MISC::GET_GAME_TIMER() > iLocal_34 + 1000))
			{
				if ((__LIB_2__::func_227(-2f, 1, 0, 0) && __LIB_2__::func_118(iLocal_742[0], 1, 1) < 6.5f) && func_210(&(Local_441.f_33), Global_35, iLocal_742[0]))
				{
					__LIB_2__::func_451(&(Local_1046[0 /*21*/]), 0);
					__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 0, 0);
					iLocal_1366 = 0;
					iLocal_1367 = 0;
					if (iLocal_882 == 0)
					{
						if (__LIB_9__::func_698(iLocal_742[0], &iLocal_882, -1, 0))
						{
							iLocal_882 = 1;
						}
					}
					if (iLocal_882 == 1 && __LIB_2__::func_123(iLocal_742[0], Global_35, 0))
					{
						iLocal_1382 = 0;
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_635.f_3, ENTITY::GET_ENTITY_COORDS(iLocal_742[0], true, false) - Vector(1f, 0f, 0f), ENTITY::GET_ENTITY_ROTATION(iLocal_742[0], 2), 2);
						if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_635.f_3, true, false))
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_635.f_3, "pedStranger", iLocal_742[0], 0);
							if (iLocal_1355 == 0)
							{
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_635.f_3, "objMoney", Local_643[1 /*12*/].f_8, 0);
							}
						}
						if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_635.f_3, "pedPlayer", &Local_912, true, "pbl_handover", 2))
						{
						}
						if (__LIB_3__::func_564(115, 2) == 1)
						{
							__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("ASK_FOR_CUT_LIE_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iLocal_1044 = 9;
						}
						else
						{
							iLocal_1044 = 8;
							func_205(iLocal_742[0], Global_35, Local_360[16 /*2*/], Local_360[16 /*2*/].f_1, 528, 1082130432 /* Float: 4f */, -1077936128 /* Float: -1.5f */);
						}
						iLocal_1384 = MISC::GET_GAME_TIMER();
					}
				}
			}
			else if (PED::IS_PED_STOPPED(iLocal_742[0]))
			{
				if (iLocal_34 == 0)
				{
					iLocal_34 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		case 9:
			if (MISC::GET_GAME_TIMER() > iLocal_1384 + 1000 && __LIB_2__::func_227(-5f, 1, 0, 0))
			{
				__LIB_2__::func_461(0);
				func_205(iLocal_742[0], Global_35, Local_360[16 /*2*/], Local_360[16 /*2*/].f_1, 528, 1082130432 /* Float: 4f */, -1077936128 /* Float: -1.5f */);
				iLocal_1384 = MISC::GET_GAME_TIMER();
				iLocal_1044 = 8;
			}
			break;
		case 8:
			if (!__LIB_0__::func_27(iLocal_35, 512))
			{
				__LIB_1__::func_683(&iLocal_35, 512);
				iLocal_1342 = 1;
			}
			if (iLocal_1391 > 1)
			{
				if (__LIB_1__::func_205(Global_35, iLocal_910, 1, 0))
				{
					if (iLocal_1356 == 0)
					{
						func_214(iLocal_742[0], Global_35, &uLocal_938, -1082130432 /* Float: -1f */, "angry", 0, -1082130432 /* Float: -1f */, 5f, 1, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
						iLocal_1356 = 1;
					}
				}
				else if (iLocal_1356 == 1)
				{
					__LIB_1__::func_727(iLocal_742[0], 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_742[0], Global_35, -1, -1f, -1f, -1f);
					iLocal_1356 = 0;
				}
			}
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_742[0], Local_360[16 /*2*/], Local_360[16 /*2*/].f_1, 1) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0]))
			{
				if (iLocal_1364 == 0)
				{
					iLocal_1364 = 1;
					if (__LIB_0__::func_492(1) >= iLocal_1387)
					{
						iLocal_1363 = 0;
						PED::_0x923583741DC87BCE(iLocal_742[0], "default");
						__LIB_13__::func_249(&(Local_1110[0 /*17*/]), "ROB_GIVE", iLocal_1387, 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1);
						__LIB_4__::func_421(iLocal_742[0], &(Local_1110[0 /*17*/]), 15f, 3, 0, 0, 0, 0);
						__LIB_2__::func_360(&(Local_1110[1 /*17*/]), "ROB_REFUSE");
						iLocal_978 = 2;
						__LIB_2__::func_451(&(Local_1046[0 /*21*/]), 0);
						__LIB_3__::func_621(&(Local_1110[0 /*17*/]), 1, 0);
						__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 1, 0);
						__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 1, 0);
						iLocal_1366 = 1;
						iLocal_1367 = 1;
					}
				}
				if (__LIB_0__::func_492(1) < iLocal_1387)
				{
					if (!__LIB_0__::func_27(iLocal_35, 1048576))
					{
						__LIB_2__::func_461(0);
						__LIB_2__::func_478(Global_35, iLocal_742[0], func_35("NO_MONEY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_683(&iLocal_35, 1048576);
						__LIB_1__::func_283(&uLocal_1418, 0);
						__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 0, 0);
						iLocal_1366 = 0;
						iLocal_1367 = 0;
						iLocal_1384 = MISC::GET_GAME_TIMER();
					}
					else if (((__LIB_0__::func_27(iLocal_35, 1048576) && __LIB_0__::func_264(&uLocal_1418) > 1f) && __LIB_2__::func_227(-6f, 1, 0, 0)) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
					{
						iLocal_1044 = 29;
						__LIB_1__::func_991(iLocal_742[0], 0);
						Local_441.f_46 = 1;
						iLocal_1391 = 5;
						iLocal_1345 = 1;
						iLocal_1384 = MISC::GET_GAME_TIMER();
					}
				}
				if (MISC::GET_GAME_TIMER() > iLocal_1384 + 7500 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					iLocal_1384 = MISC::GET_GAME_TIMER();
					switch (iLocal_1391)
					{
						case 1:
							TASK::TASK_PLAY_ANIM(iLocal_742[0], Local_360[17 /*2*/], Local_360[17 /*2*/].f_1, 8f, -8f, -1, 528, 0f, false, 0, false, 0, false);
							iLocal_1391++;
							break;
						case 2:
							TASK::TASK_PLAY_ANIM(iLocal_742[0], Local_360[18 /*2*/], Local_360[18 /*2*/].f_1, 8f, -8f, -1, 528, 0f, false, 0, false, 0, false);
							iLocal_1391++;
							break;
						case 3:
							TASK::TASK_PLAY_ANIM(iLocal_742[0], Local_360[19 /*2*/], Local_360[19 /*2*/].f_1, 8f, -8f, -1, 528, 0f, false, 0, false, 0, false);
							iLocal_1391++;
							break;
						case 4:
							iLocal_1044 = 29;
							__LIB_1__::func_991(iLocal_742[0], 0);
							Local_441.f_46 = 1;
							iLocal_1391++;
							break;
						case 5:
							break;
					}
				}
				if (__LIB_2__::func_118(iLocal_742[0], 1, 1) < 5f)
				{
				}
				else if (__LIB_2__::func_118(iLocal_742[0], 1, 1) > 10f)
				{
					iLocal_1044 = 29;
					__LIB_1__::func_991(iLocal_742[0], 0);
					Local_441.f_46 = 1;
					iLocal_1391 = 5;
					iLocal_1344 = 1;
				}
			}
			break;
		case 34:
			if ((__LIB_0__::func_264(&uLocal_1418) > 1f && __LIB_2__::func_227(-6f, 1, 0, 0)) && !__LIB_0__::func_163(iLocal_742[0], 2121492476))
			{
				TASK::TASK_REACT(iLocal_742[0], Global_35, 0f, 0f, 0f, "Default_Angry", 1f, 0f, 4);
			}
			if (__LIB_0__::func_264(&uLocal_1418) > 2.5f && __LIB_2__::func_227(-6f, 1, 0, 0))
			{
				iLocal_1044 = 29;
				__LIB_1__::func_991(iLocal_742[0], 0);
				Local_441.f_46 = 1;
				iLocal_1391 = 5;
			}
			break;
		case 10:
			if (__LIB_2__::func_227(-3f, 1, 0, 0))
			{
				if (__LIB_2__::func_1(iLocal_742[1], 0, 1) && __LIB_0__::func_94(iLocal_742[1], Local_752[1 /*32*/].f_6, 1) < 1.5f)
				{
					fVar7 = __LIB_1__::func_348(iLocal_742[0], iLocal_742[1]);
				}
				else
				{
					fVar7 = __LIB_0__::func_94(iLocal_742[0], Local_1223, 1);
				}
				if (iLocal_38 == 1)
				{
					iVar16 = 0;
					fVar8 = __LIB_0__::func_665(Global_35, iLocal_742[0], 1, 1);
					fVar10 = (fLocal_1331 - 2f);
					vVar13 = { __LIB_2__::func_114(Global_35, 1f) };
					fVar9 = __LIB_0__::func_94(iLocal_742[0], vVar13, 1);
					fVar11 = __LIB_0__::func_94(iLocal_742[0], Local_1223, 1);
					fVar12 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_1223, vVar13, true);
					if (fVar8 >= 6f)
					{
						if (__LIB_0__::func_94(Global_35, Local_1223, 1) <= 6f)
						{
							__LIB_0__::func_268(&uLocal_1454, fVar10);
						}
						else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar13, true) < 0.25f)
						{
							iVar16 = 1;
						}
						else if (fVar9 > fVar8 && fVar12 > fVar11)
						{
							iVar16 = 1;
						}
						else
						{
							__LIB_0__::func_268(&uLocal_1454, fVar10);
						}
					}
					else
					{
						__LIB_0__::func_268(&uLocal_1454, fVar10);
					}
					if (__LIB_0__::func_264(&uLocal_1457) > 1.5f)
					{
						switch (iLocal_1395)
						{
							case 0:
								if (iVar16 == 1)
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_1218);
									TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, "DEFAULT_ANGRY", 3f, 60f, 4);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
									__LIB_1__::func_474(iLocal_742[0], &iLocal_1218, 0, 0, 1, 1);
									iLocal_1395 = 1;
									__LIB_1__::func_148(&uLocal_1457);
								}
								break;
							case 1:
								if (iVar16 == 0)
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_1218);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1223, 1f, -1, 0.25f, 1, 40000f);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
									__LIB_1__::func_474(iLocal_742[0], &iLocal_1218, 0, 0, 1, 1);
									iLocal_1395 = 0;
									__LIB_1__::func_148(&uLocal_1457);
								}
								break;
						}
					}
					if (iVar16 == 1 || __LIB_0__::func_27(iLocal_35, 2048))
					{
						if ((__LIB_0__::func_264(&uLocal_1454) >= 5f && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0])) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
						{
							switch (iLocal_1394)
							{
								case 0:
									__LIB_2__::func_478(iLocal_742[0], Global_35, "FFF_START", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									iLocal_1394++;
									fLocal_1331 = 5f;
									__LIB_1__::func_148(&uLocal_1454);
									break;
								case 1:
									__LIB_2__::func_478(iLocal_742[0], Global_35, "STORM_OFF", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									iLocal_1394++;
									__LIB_1__::func_148(&uLocal_1454);
									fLocal_1331 = 5f;
									break;
								case 2:
									__LIB_2__::func_478(iLocal_742[0], Global_35, "GENERIC_ANGRY_SHOUT", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									iLocal_1394++;
									__LIB_1__::func_148(&uLocal_1454);
									fLocal_1331 = 6f;
									break;
								case 3:
									iLocal_1394++;
									__LIB_1__::func_148(&uLocal_1454);
									fLocal_1331 = 8f;
									break;
							}
						}
					}
				}
				if (fVar7 < 3f)
				{
					__LIB_0__::func_37(&uLocal_1454);
					if (__LIB_2__::func_1(iLocal_742[1], 0, 1))
					{
						_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_742[0], &Local_692);
						__LIB_2__::func_461(0);
						__LIB_2__::func_478(iLocal_742[0], iLocal_742[1], func_35("WALK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_1218);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_1218);
						TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_360[10 /*2*/], Local_360[10 /*2*/].f_1, iLocal_742[1], 2166, 4f, -4f, 67109392, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_1218);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_742[0], iLocal_1218);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_1218);
						if (!__LIB_0__::func_75(&uLocal_1409))
						{
							__LIB_1__::func_283(&uLocal_1409, 0);
						}
						iLocal_1044 = 11;
					}
					else
					{
						if (!__LIB_0__::func_75(&uLocal_1409))
						{
							__LIB_1__::func_283(&uLocal_1409, 0);
						}
						iLocal_1044 = 11;
					}
				}
			}
			break;
		case 11:
			iLocal_1376 = 0;
			iLocal_882 = 0;
			iLocal_34 = 0;
			if (!__LIB_0__::func_27(iLocal_35, 16384))
			{
				if (__LIB_0__::func_75(&uLocal_1409) && __LIB_0__::func_265(&uLocal_1409) > 0.75f)
				{
					if (__LIB_2__::func_1(iLocal_742[1], 0, 1))
					{
						PED::_0xF1C03A5352243A30(iLocal_742[1]);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_1219);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_1219);
						TASK::_TASK_SMART_FLEE_STYLE_PED(0, iLocal_742[0], 0, 256, 20f, -1, 0);
						TASK::TASK_WANDER_IN_AREA(0, -241.4613f, 769.9499f, 117.085f, 4f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 1);
						__LIB_1__::func_474(iLocal_742[1], &iLocal_1219, 0, 0, 1, 1);
						iLocal_1362 = 1;
						PED::SET_PED_KEEP_TASK(iLocal_742[1], true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_742[1], false);
						__LIB_3__::func_141(iLocal_742[1], 1088421888 /* Float: 7f */, 0, 0);
						__LIB_2__::func_603(&(iLocal_742[1]), &(Local_1046[0 /*21*/]), &Local_1180, 0, 1);
						PED::_0x24C82EF607105FAA(iLocal_742[1], joaat("TIMID"));
						PED::_0xB8B6430EAD2D2437(iLocal_742[1], 673924189);
						PED::_0xE737D5F14304A2EC(iLocal_742[1], PLAYER::GET_PLAYER_INDEX(), 120000);
						PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_742[1], 7, 0, 1);
						PED::SET_PED_CONFIG_FLAG(iLocal_742[1], 413, true);
						PED::SET_PED_CONFIG_FLAG(iLocal_742[1], 330, true);
						TASK::TASK_CLEAR_LOOK_AT(iLocal_742[0]);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_742[0], Global_35, 5000, 0, 51, 0);
					}
					Local_692.f_3 = Global_35;
					__LIB_1__::func_683(&iLocal_35, 16384);
				}
			}
			if (__LIB_0__::func_265(&uLocal_1409) > 0f)
			{
				iLocal_1376 = 1;
				Local_692.f_3 = Global_35;
			}
			if (__LIB_0__::func_27(iLocal_35, 4))
			{
				iLocal_882 = 0;
				Local_692.f_3 = Global_35;
				iLocal_1044 = 7;
			}
			else if (__LIB_0__::func_27(iLocal_35, 2) || (__LIB_0__::func_75(&uLocal_1409) && __LIB_0__::func_265(&uLocal_1409) > 4f))
			{
				iLocal_1382 = 0;
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_742[1]))
				{
					PED::_0x39A2FC5AF55A52B1(iLocal_742[1], -1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_742[1]));
				}
				Local_692.f_3 = Global_35;
				iLocal_1044 = 12;
			}
			break;
		case 12:
			Local_692.f_3 = Global_35;
			if (__LIB_0__::func_94(iLocal_742[0], Local_1223, 1) < 3f || (iLocal_34 != 0 && MISC::GET_GAME_TIMER() > iLocal_34 + 500))
			{
				Local_692.f_7 = 0;
				if (((__LIB_2__::func_227(-3f, 1, 0, 0) && __LIB_2__::func_118(iLocal_742[0], 1, 1) < 5f) && __LIB_10__::func_477(iLocal_742[0], &(Local_441.f_33), &uLocal_1325, &uLocal_1334, 2f, 10f, 0, 0, 1092616192 /* Float: 10f */, 1)) && func_210(&(Local_441.f_33), Global_35, iLocal_742[0]))
				{
					Local_692.f_3 = Global_35;
					if (!__LIB_0__::func_181())
					{
						__LIB_3__::func_461(115, 4, 1);
					}
					else
					{
						__LIB_3__::func_461(115, 4, 0);
					}
					__LIB_2__::func_246(&Local_1397);
					if (__LIB_0__::func_27(iLocal_35, 8))
					{
						__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("JOB_ALT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_1341 = 1;
					}
					else
					{
						func_205(iLocal_742[0], Global_35, Local_360[2 /*2*/], Local_360[2 /*2*/].f_1, 528, 1082130432 /* Float: 4f */, -1077936128 /* Float: -1.5f */);
					}
					iLocal_1384 = MISC::GET_GAME_TIMER();
					__LIB_2__::func_246(&Local_1397);
					__LIB_1__::func_283(&uLocal_1442, 0);
					iLocal_1044 = 13;
				}
			}
			else if (iLocal_34 == 0)
			{
				if (PED::IS_PED_STOPPED(iLocal_742[0]))
				{
					iLocal_34 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		case 13:
			if (((((__LIB_2__::func_227(-4f, 1, 0, 0) && (iLocal_1341 == 1 || iLocal_1360 == 1)) && __LIB_2__::func_118(iLocal_742[0], 1, 1) < 5f) && __LIB_10__::func_477(iLocal_742[0], &(Local_441.f_33), &uLocal_1325, &uLocal_1334, 2f, 4f, 0, 0, 1092616192 /* Float: 10f */, 1)) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0])) && __LIB_0__::func_264(&uLocal_1442) > 3f)
			{
				func_205(iLocal_742[0], Global_35, Local_360[3 /*2*/], Local_360[3 /*2*/].f_1, 528, 1082130432 /* Float: 4f */, -1077936128 /* Float: -1.5f */);
				iLocal_1384 = MISC::GET_GAME_TIMER();
				iLocal_1044 = 14;
			}
			break;
		case 14:
			if (!__LIB_0__::func_27(iLocal_35, 512))
			{
				__LIB_1__::func_683(&iLocal_35, 512);
			}
			if (bLocal_1333 && (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_742[0], Local_360[3 /*2*/], Local_360[3 /*2*/].f_1, 1) || ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_742[0], Local_360[3 /*2*/], Local_360[3 /*2*/].f_1) > 0.74f))
			{
				TASK::CLEAR_PED_SECONDARY_TASK(iLocal_742[0]);
				if (iLocal_1382 == 0)
				{
					__LIB_1__::func_345();
					iLocal_1382 = MISC::GET_GAME_TIMER();
				}
				if (iLocal_1364 == 0)
				{
					iLocal_1364 = 1;
					iLocal_978 = 2;
					iLocal_1363 = 0;
					iLocal_1384 = MISC::GET_GAME_TIMER();
					__LIB_2__::func_360(&(Local_1110[0 /*17*/]), "BEAT_GRT_POS");
					__LIB_2__::func_360(&(Local_1110[1 /*17*/]), "BEAT_GRT_NEG");
					__LIB_2__::func_451(&(Local_1046[0 /*21*/]), 0);
					__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 1, 0);
					__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 1, 0);
					iLocal_1366 = 1;
					iLocal_1367 = 1;
				}
			}
			if (__LIB_2__::func_118(iLocal_742[0], 1, 1) > 15f)
			{
				__LIB_1__::func_345();
				__LIB_2__::func_478(Global_35, iLocal_742[0], func_35("DECLINE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1382 = 0;
				iLocal_978 = 3;
				fLocal_1330 = 15f;
				__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 0, 0);
				__LIB_2__::func_451(&(Local_1046[0 /*21*/]), 0);
				iLocal_1366 = 0;
				iLocal_1367 = 0;
				iLocal_1363 = 1;
				iLocal_1044 = 15;
			}
			if (__LIB_2__::func_227(0, 1, 0, 0))
			{
				bLocal_1333 = true;
				if (MISC::GET_GAME_TIMER() > iLocal_1384 + 7500)
				{
					iLocal_1384 = MISC::GET_GAME_TIMER();
					func_227();
				}
			}
			break;
		case 15:
			Local_692.f_7 = 3500;
			if (!__LIB_2__::func_136(iLocal_742[0], 0) && !__LIB_2__::func_136(Global_35, 0))
			{
				__LIB_3__::func_232(&(Local_441.f_5), 1);
				Var17.f_3 = 1065353216;
				Var17.f_4 = -1;
				Var17.f_5 = 1048576000;
				Var17.f_6 = 1193033728;
				Var17 = { Local_1223.f_93 };
				Var17.f_3 = 1f;
				Var17.f_4 = -1;
				Var17.f_5 = 0.25f;
				Var17.f_6 = Local_1223.f_96;
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1219);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1219);
				TASK::TASK_PLAY_ANIM(0, Local_360[8 /*2*/], Local_360[8 /*2*/].f_1, 2f, -2f, -1, 512, 0f, false, 0, false, 0, false);
				TASK::TASK_FOLLOW_PAVEMENT_TO_COORD(0, &Var17);
				__LIB_1__::func_473(0, joaat("WORLD_HUMAN_SMOKE"), -1, 1, 0, -1082130432 /* Float: -1f */);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1219);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_742[0], iLocal_1219);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1219);
				PED::SET_PED_KEEP_TASK(iLocal_742[0], true);
				iLocal_978 = 3;
				__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 0, 0);
				fLocal_1330 = 15f;
				__LIB_0__::func_769();
				return true;
			}
			break;
		case 16:
			if (__LIB_2__::func_227(-6f, 1, 0, 0))
			{
				__LIB_3__::func_152(115);
				func_205(iLocal_742[0], Global_35, Local_360[7 /*2*/], Local_360[7 /*2*/].f_1, 528, 1082130432 /* Float: 4f */, -1077936128 /* Float: -1.5f */);
				__LIB_0__::func_7(&Global_1935630, 4);
				iLocal_1220 = __LIB_2__::func_944(joaat("WORLD_HUMAN_SMOKE"), Local_1223.f_6, Local_1223.f_12, 0, 0, 0);
				iLocal_1221 = __LIB_2__::func_944(joaat("WORLD_HUMAN_SMOKE"), Local_1223.f_9, Local_1223.f_13, 0, 0, 0);
				__LIB_1__::func_948(183181940, 0, 0f, 0, 0, 0f, 0, 0);
				iLocal_1044 = 17;
			}
			break;
		case 17:
			if ((!__LIB_3__::func_703(-5f) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0])) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_742[0], Local_360[7 /*2*/], Local_360[7 /*2*/].f_1, 1))
			{
				__LIB_3__::func_232(&(Local_441.f_5), 1);
				fVar0 = __LIB_3__::func_332(Local_1223.f_6, 1);
				fVar1 = __LIB_3__::func_332(Local_1223.f_9, 1);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1219);
				if (fVar0 > fVar1)
				{
					TASK::_TASK_USE_SCENARIO_POINT(0, iLocal_1220, "WORLD_HUMAN_SMOKE_MALE_A", 0, true, false, 0, false, -1f, false);
				}
				else
				{
					TASK::_TASK_USE_SCENARIO_POINT(0, iLocal_1221, "WORLD_HUMAN_SMOKE_MALE_A", 0, true, false, 0, false, -1f, false);
				}
				__LIB_1__::func_474(iLocal_742[0], &iLocal_1219, 0, 0, 1, 1);
				vLocal_1320 = { Local_20.f_3 };
				__LIB_0__::func_568(Local_1223.f_53, Local_1223.f_56, 0);
				__LIB_3__::func_594(&uLocal_1466, &uLocal_1481, Local_1223.f_53, 0f, 0f, 0f, Local_1223.f_56, Local_1223.f_56, 4f, 0, 0, 1, 0, 0);
				__LIB_3__::func_627(&iLocal_1471, Local_1223.f_26, Local_1223.f_29, Local_1223.f_32, 1, 10208, 0);
				__LIB_1__::func_683(&iLocal_35, 134217728);
				__LIB_4__::func_72(Global_35);
				fLocal_1323 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_1320, true);
				iLocal_1352 = 0;
				__LIB_0__::func_325(&(uLocal_747[0]));
				__LIB_3__::func_662("ROB_OBJ_HOTEL", 7500, 0, 0, -1, -1, 0);
				if (MAP::DOES_BLIP_EXIST(iLocal_1217))
				{
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1217, "ROB_HOTEL_BLIP");
				}
				bLocal_1359 = true;
				iLocal_1044 = 19;
				iLocal_978 = 4;
				fLocal_1330 = 15f;
				__LIB_2__::func_602(&(Local_1110[0 /*17*/]), "INTERACT_QUESTION", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
				__LIB_2__::func_602(&(Local_1110[1 /*17*/]), "BEAT_GRT_NEG", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
				__LIB_2__::func_451(&(Local_1046[0 /*21*/]), 0);
				__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 1, 0);
				iLocal_1366 = 1;
				iLocal_1367 = 1;
			}
			break;
		case 19:
			func_237();
			func_238();
			iLocal_1376 = 0;
			if (iLocal_1361 == 1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_742[3]))
				{
					_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_742[3], &Local_692);
				}
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1469))
			{
				iLocal_1469 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(Local_1223.f_57, Local_1223.f_60, Local_1223.f_63, "BlipVol");
				iLocal_1217 = MAP::_0xA6EF0C54A3443E70(1259054292, iLocal_1469);
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_1217))
			{
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1217, "ROB_HOTEL_BLIP");
			}
			func_239();
			if (__LIB_0__::func_12() == 76)
			{
				func_240();
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_635.f_2, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_635.f_2);
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1470))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1470, true, 0) && !__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
				{
					__LIB_3__::func_662("ROB_OBJ02B", 7500, 0, 0, -1, -1, 0);
					MAP::REMOVE_BLIP(&iLocal_1217);
					iLocal_1217 = MAP::_0xA6EF0C54A3443E70(1259054292, iLocal_1470);
					if (MAP::DOES_BLIP_EXIST(iLocal_1217))
					{
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1217, "ROB_HOTEL_BLIP");
					}
					__LIB_2__::func_915(iLocal_742[0], joaat("WORLD_HUMAN_SMOKE"), Local_1223.f_6, Local_1223.f_12, -1, 1, 1, 0, -1082130432 /* Float: -1f */);
					__LIB_1__::func_681(&iLocal_35, 134217728);
					__LIB_1__::func_948(183181940, 0, -1f, 1, 0, 0f, 0, 0);
					iLocal_1044 = 22;
				}
				else if (!__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
				{
					if (__LIB_0__::func_264(&uLocal_1415) > 50f)
					{
						if (!__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
						{
							__LIB_3__::func_662("ROB_OBJ_HOTEL_B", 7500, 0, 0, -1, -1, 0);
							__LIB_1__::func_148(&uLocal_1415);
							__LIB_2__::func_113(&uLocal_1415);
						}
					}
				}
			}
			else
			{
				__LIB_3__::func_557(&iLocal_1470, Local_1223.f_17, Local_1223.f_20, Local_1223.f_23, "LootArea");
			}
			break;
		case 22:
			func_238();
			iLocal_1376 = 0;
			if ((__LIB_0__::func_264(&uLocal_1430) > 2f && iLocal_1351 == 0) && __LIB_18__::func_252(&(Local_441.f_162), "ROB_TAKE_MONEY", vLocal_883, 0, joaat("INPUT_CONTEXT_X"), 1.5f, 0f, 1, 1, 0, 0, 0, 0, 0, 1, 0, joaat("SHORT_TIMED_EVENT"), 0))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_635.f_2, "player", &Local_924, false, 0, 2))
				{
					func_243(Local_924, Local_924.f_3.f_2);
				}
				else
				{
					Local_924 = { -323.5559f, 759.9235f, 117.4362f };
					Local_924.f_3.f_2 = -170.43f;
					func_243(Local_924, Local_924.f_3.f_2);
				}
				__LIB_2__::func_411(&(Local_1145[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_1145[1 /*17*/]), 0, 0);
				Local_441.f_44 = 1;
				iLocal_1044 = 26;
			}
			break;
		case 26:
			iLocal_1376 = 0;
			if (__LIB_3__::func_995(&Local_979, 106))
			{
				iLocal_1044 = 25;
			}
			break;
		case 25:
			iLocal_1376 = 0;
			iLocal_742[2] = func_245(Local_752[2 /*32*/].f_1, &(Local_752[2 /*32*/]), Local_1223.f_35, Local_1223.f_38, 1, 0, 1, 0, 1);
			__LIB_1__::func_991(iLocal_742[2], 0);
			ENTITY::SET_ENTITY_COORDS(iLocal_742[2], Local_1223.f_35, true, false, true, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_742[2], Local_1223.f_38);
			WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_742[2], true, true);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_752[2 /*32*/].f_23)))
			{
				__LIB_2__::func_133(iLocal_742[2], &(Local_752[2 /*32*/].f_23), 0);
			}
			PED::SET_COMBAT_FLOAT(iLocal_742[2], 7, 0.5f);
			__LIB_2__::func_73(iLocal_742[2], &(uLocal_747[2]), joaat("BLIP_STYLE_ENEMY"), 942020339, 0, 0);
			__LIB_3__::func_566(&(iLocal_742[2]), 718968995);
			iLocal_1044 = 21;
			break;
		case 21:
			iLocal_1376 = 0;
			if (__LIB_2__::func_1(iLocal_742[2], 0, 1))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_635.f_2, true, false))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_635.f_2, "Drunk", iLocal_742[2], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_635.f_2, "Bills", Local_643[2 /*12*/].f_8, 0);
					ANIMSCENE::START_ANIM_SCENE(Local_635.f_2);
					iLocal_1478 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), -322.772f, 759.238f, 117.436f, 0f, 0f, 10f, 2.33f, 0.868f, 5f);
					TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DRESSER03X", true);
					TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_DD_234", true);
					TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DRESSERVAL01X", true);
				}
				else
				{
					ANIMSCENE::LOAD_ANIM_SCENE(Local_635.f_2);
					return false;
				}
				__LIB_2__::func_246(&Local_1397);
				__LIB_2__::func_619(&(Local_1397.f_3), 1);
				iLocal_1044 = 24;
				Local_692.f_7 = 0;
			}
			else
			{
				return false;
			}
			break;
		case 24:
			iLocal_1376 = 0;
			fLocal_1329 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_635.f_2);
			if (fLocal_1329 > 0.562f && !__LIB_0__::func_27(iLocal_35, 536870912))
			{
				__LIB_1__::func_616(iLocal_36, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
				if (__LIB_0__::func_181())
				{
					__LIB_3__::func_465(2, joaat("HONOR_EVENT_THEFT"), 0, 0, iLocal_742[0], 0, 1065353216 /* Float: 1f */, 0);
				}
				OBJECT::DELETE_OBJECT(&(Local_643[2 /*12*/].f_8));
				__LIB_1__::func_683(&iLocal_35, 536870912);
			}
			if (((fLocal_1329 > 0.652f || ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[2], joaat("MONEY_GONE_A"))) && __LIB_0__::func_27(iLocal_35, 536870912)) && !__LIB_0__::func_27(iLocal_35, 4194304))
			{
				__LIB_2__::func_461(0);
				__LIB_2__::func_478(iLocal_742[2], Global_35, func_35("MONEY_GONE_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_35, 4194304);
				if (AUDIO::PREPARE_MUSIC_EVENT("RETR_CAUGHT"))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("RETR_CAUGHT"))
					{
					}
				}
			}
			if (__LIB_0__::func_27(iLocal_35, 536870912))
			{
				if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_635.f_2, "Drunk"))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					iLocal_1380 = 1;
					PED::REGISTER_TARGET(iLocal_742[2], Global_35, 1);
					PED::SET_PED_CONFIG_FLAG(iLocal_742[2], 233, true);
					PED::_0x630E7B01F091A197(iLocal_742[2], joaat("GS_FACE_TO_FACE"));
					PED::_0x630E7B01F091A197(Global_35, joaat("GS_FACE_TO_FACE"));
					TASK::TASK_PUT_PED_DIRECTLY_INTO_GRAPPLE(iLocal_742[2], Global_35, 0, 0, 0, 1, 0);
					LAW::_0xFFEBE5AA96BC2E4E(iLocal_742[2], joaat("CRIME_UNARMED_ASSAULT"), 1);
					PED::FORCE_PED_MOTION_STATE(iLocal_742[2], 1926482157, false, 0, false);
					PED::FORCE_PED_MOTION_STATE(Global_35, 1926482157, false, 0, false);
					PED::SET_PED_FLEE_ATTRIBUTES(iLocal_742[2], 512, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_742[2], 58, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_742[2], 46, true);
					MAP::DISPLAY_RADAR(true);
					iLocal_1338 = 1;
					__LIB_1__::func_948(183181940, 0, 0f, 0, 0, 0f, 0, 0);
				}
				if (iLocal_1338 == 1)
				{
					vLocal_1320 = { ENTITY::GET_ENTITY_COORDS(iLocal_742[0], true, false) };
					fLocal_1323 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_1320, true);
					iLocal_1474 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), vLocal_901, vLocal_904, vLocal_907);
					iLocal_1476 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_901, vLocal_904, vLocal_907, "NavMeshBlocker");
					PATHFIND::_0x19C7567D2F2287D6(iLocal_1476, 7);
					if (MAP::DOES_BLIP_EXIST(uLocal_747[0]))
					{
						iLocal_1352 = 0;
						__LIB_0__::func_325(&(uLocal_747[0]));
					}
					if (MAP::DOES_BLIP_EXIST(iLocal_1217))
					{
						__LIB_0__::func_325(&iLocal_1217);
					}
					func_79();
					VOLUME::_SET_VOLUME_COORDS(iLocal_1470, -321.496f, 761.77f, 117.955f);
					VOLUME::_SET_VOLUME_ROTATION(iLocal_1470, 0f, 0f, 12.334f);
					VOLUME::_SET_VOLUME_SCALE(iLocal_1470, 12.757f, 5.266f, 3.069f);
					PED::_0x923583741DC87BCE(iLocal_742[0], "default");
					iLocal_1044 = 27;
				}
			}
			break;
		case 27:
			iLocal_1376 = 0;
			func_249();
			if (__LIB_2__::func_1(iLocal_742[2], 0, 1) && iLocal_1370 == 0)
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[2]))
				{
					__LIB_2__::func_478(iLocal_742[2], Global_35, func_35("MONEY_GONE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_1370 = 1;
				}
			}
			if (iLocal_1361 == 1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_742[3]))
				{
					_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_742[3], &Local_692);
				}
			}
			if (((((iLocal_1350 == 0 && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1471, true, 0)) && ENTITY::IS_ENTITY_IN_VOLUME(iLocal_742[2], iLocal_1471, true, 0)) && ENTITY::IS_ENTITY_IN_VOLUME(iLocal_742[3], iLocal_1471, true, 0)) && __LIB_2__::func_1(iLocal_742[3], 0, 1)) && iLocal_1361 == 1)
			{
				if (__LIB_4__::func_417(iLocal_742[2]))
				{
					func_34(joaat("CRIME_ASSAULT"), iLocal_742[2], 1, 2f);
					__LIB_2__::func_478(iLocal_742[3], Global_35, func_35("GET_LAW"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_1361 = 0;
				}
			}
			if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iLocal_1396, true, 0, false))
			{
				if (((iLocal_1396 != joaat("WEAPON_UNARMED") && __LIB_2__::func_401(iLocal_742[2], 1, 1, 1, 0, 0)) && !__LIB_0__::func_27(iLocal_35, 262144)) && iLocal_1349 == 0)
				{
					__LIB_3__::func_608(iLocal_742[2]);
					PED::SET_PED_CONFIG_FLAG(iLocal_742[2], 146, false);
					PED::SET_PED_CONFIG_FLAG(iLocal_742[2], 148, false);
					PED::SET_PED_CONFIG_FLAG(iLocal_742[2], 44, false);
					PED::SET_PED_CONFIG_FLAG(iLocal_742[2], 190, true);
					LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_BURGLARY"), 50, 0, 0, 0, 0, 0, 0);
					LAW::_0xD7494DED50C6EF52(PLAYER::PLAYER_ID(), joaat("CRIME_BURGLARY"), 1);
					LAW::_0x10827B5A0AAC56A7(PLAYER::PLAYER_ID(), joaat("CRIME_BURGLARY"), iLocal_742[2]);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_1219);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_1219);
					TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, "Default_Shocked", 1f, 0f, 4);
					LAW::_0xF0B67BAD53C35BD9(0, Global_35, iLocal_742[2], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), joaat("CRIME_BURGLARY"));
					TASK::CLOSE_SEQUENCE_TASK(iLocal_1219);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_742[2], iLocal_1219);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_1219);
					PED::SET_PED_KEEP_TASK(iLocal_742[2], true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_742[2], false);
					iLocal_1349 = 1;
				}
			}
			if (__LIB_2__::func_118(iLocal_742[2], 1, 1) > 20f && !__LIB_1__::func_472(iLocal_742[2], 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
			{
				__LIB_3__::func_608(iLocal_742[2]);
				if (iLocal_1349 == 0)
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_742[2], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
					PED::SET_PED_KEEP_TASK(iLocal_742[2], true);
				}
				__LIB_1__::func_683(&iLocal_35, 262144);
			}
			if (__LIB_2__::func_1(iLocal_742[2], 0, 1) && !__LIB_0__::func_163(iLocal_742[2], 1435919172))
			{
				TASK::TASK_COMBAT_PED(iLocal_742[2], Global_35, 0, 0);
				PED::SET_PED_KEEP_TASK(iLocal_742[2], true);
			}
			if (!__LIB_2__::func_1(iLocal_742[2], 0, 1) || __LIB_0__::func_27(iLocal_35, 262144))
			{
				if (PED::_IS_PED_HOGTIED(iLocal_742[2]))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_742[2], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_742[2], false);
				}
				PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
				__LIB_1__::func_683(&iLocal_35, 262144);
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_635.f_3, true, false))
				{
					if (__LIB_0__::func_75(&uLocal_1412))
					{
						if (__LIB_0__::func_265(&uLocal_1412) > 4f)
						{
							if (!MAP::DOES_BLIP_EXIST(uLocal_747[0]))
							{
								__LIB_2__::func_73(iLocal_742[0], &(uLocal_747[0]), -89429847, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"), 0, "RE_INTER_STRANGER");
								iLocal_1352 = 1;
								MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_747[0], "RE_INTER_STRANGER");
							}
							__LIB_3__::func_662("ROB_OBJ04", 7500, 0, 0, -1, -1, 0);
							ENTITY::SET_ENTITY_COORDS(iLocal_742[0], Local_1223.f_6, true, false, true, true);
							__LIB_1__::func_473(iLocal_742[0], joaat("WORLD_HUMAN_SMOKE"), -1, 1, 0, -1082130432 /* Float: -1f */);
							__LIB_2__::func_526(&Local_1110, 0, 0);
							iLocal_978 = 6;
							__LIB_2__::func_451(&(Local_1046[0 /*21*/]), 0);
							__LIB_1__::func_491(&(Local_1110[0 /*17*/]), 8);
							__LIB_13__::func_249(&(Local_1110[0 /*17*/]), "ROB_GIVE", iLocal_1387, 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1);
							__LIB_4__::func_421(iLocal_742[0], &(Local_1110[0 /*17*/]), 15f, 3, 0, 0, 0, 0);
							__LIB_2__::func_360(&(Local_1110[1 /*17*/]), "ROB_LIE");
							__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 0, 0);
							__LIB_3__::func_621(&(Local_1110[0 /*17*/]), 1, 0);
							if (AUDIO::PREPARE_MUSIC_EVENT("RETR_STOP"))
							{
								if (AUDIO::TRIGGER_MUSIC_EVENT("RETR_STOP"))
								{
								}
							}
							__LIB_0__::func_172(iLocal_1478);
							__LIB_0__::func_172(iLocal_1474);
							iLocal_1364 = 0;
							iLocal_1044 = 23;
						}
					}
					else
					{
						__LIB_1__::func_283(&uLocal_1412, 0);
					}
				}
				else
				{
					ANIMSCENE::LOAD_ANIM_SCENE(Local_635.f_3);
				}
			}
			break;
		case 23:
			func_255();
			func_256();
			func_249();
			if (iLocal_1361 == 1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_742[3]))
				{
					_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_742[3], &Local_692);
				}
			}
			bLocal_1359 = false;
			if (iLocal_1351 == 0)
			{
				if (__LIB_3__::func_332(Local_912, 1) < fLocal_1328)
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
					__LIB_1__::func_683(&iLocal_35, 33554432);
				}
				if (__LIB_2__::func_227(-2f, 1, 0, 0))
				{
					if (__LIB_10__::func_477(iLocal_742[0], &(Local_441.f_33), &uLocal_1325, &uLocal_1334, 2f, 7f, 0, 0, 1092616192 /* Float: 10f */, 1) && func_210(&(Local_441.f_33), Global_35, iLocal_742[0]))
					{
						bLocal_1354 = false;
						if (iLocal_1364 == 0)
						{
							iLocal_1364 = 1;
							__LIB_1__::func_491(&(Local_1110[0 /*17*/]), 8);
							__LIB_13__::func_249(&(Local_1110[0 /*17*/]), "ROB_GIVE", iLocal_1387, 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1);
							__LIB_2__::func_360(&(Local_1110[1 /*17*/]), "ROB_LIE");
							__LIB_3__::func_621(&(Local_1110[0 /*17*/]), 1, 0);
							func_257();
							iLocal_1366 = 1;
							iLocal_1367 = 1;
						}
						PED::SET_IK_TARGET(iLocal_742[0], 1, Global_35, 21030, 0f, 0f, 0f, 0, -1, -1);
						__LIB_1__::func_683(&iLocal_35, 1073741824 /* Float: 2f */);
						__LIB_2__::func_246(&Local_1397);
						iLocal_1044 = 31;
					}
				}
			}
			break;
		case 31:
			if (__LIB_3__::func_332(Local_912, 1) < fLocal_1328)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
				__LIB_1__::func_683(&iLocal_35, 33554432);
			}
			else
			{
				__LIB_1__::func_345();
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 3f);
			}
			if (func_258())
			{
				__LIB_1__::func_345();
				iLocal_1352 = 0;
				__LIB_0__::func_325(&(uLocal_747[0]));
				iLocal_1044 = 32;
			}
			break;
		case 32:
			iLocal_1352 = 0;
			__LIB_0__::func_325(&(uLocal_747[0]));
			if (__LIB_2__::func_1(iLocal_742[0], 0, 1))
			{
				__LIB_4__::func_72(iLocal_742[0]);
			}
			Var24.f_3 = 1065353216;
			Var24.f_4 = -1;
			Var24.f_5 = 1048576000;
			Var24.f_6 = 1193033728;
			Var24 = { Local_1223.f_93 };
			Var24.f_3 = 1f;
			Var24.f_4 = -1;
			Var24.f_5 = 0.25f;
			Var24.f_6 = Local_1223.f_96;
			if (iLocal_38 == 1)
			{
				__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("THANKS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1219);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1219);
			if (iLocal_38 == 1)
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 3000, -1f, -1f, -1f);
			}
			TASK::TASK_FOLLOW_PAVEMENT_TO_COORD(0, &Var24);
			__LIB_1__::func_473(0, joaat("WORLD_HUMAN_SMOKE"), -1, 0, 0, -1082130432 /* Float: -1f */);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_1219);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_742[0], iLocal_1219);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1219);
			PED::SET_PED_KEEP_TASK(iLocal_742[0], true);
			iLocal_978 = 7;
			fLocal_1330 = 15f;
			__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 0, 0);
			__LIB_3__::func_379(&(iLocal_742[3]), 0);
			PED::_0x39A2FC5AF55A52B1(iLocal_742[3], -1);
			MAP::DISPLAY_RADAR(true);
			iLocal_1044 = 33;
			break;
		case 33:
			iLocal_1376 = 0;
			if (iLocal_1378 == 0 && Local_441.f_46 == 0)
			{
				if (__LIB_2__::func_1(iLocal_742[0], 0, 1))
				{
					if (!__LIB_0__::func_75(&uLocal_1460))
					{
						__LIB_1__::func_283(&uLocal_1460, 0);
					}
					if ((!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0])) && __LIB_0__::func_264(&uLocal_1460) > 1.5f)
					{
						__LIB_2__::func_602(&(Local_1110[0 /*17*/]), "RE_INTER_POS", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
						__LIB_2__::func_602(&(Local_1110[1 /*17*/]), "RE_INTER_ANTAGONIZE", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
						__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 1, 0);
						__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 1, 0);
						iLocal_1378 = 1;
					}
				}
			}
			iLocal_1352 = 0;
			if (iLocal_1377 == 1)
			{
				__LIB_0__::func_325(&(uLocal_747[0]));
			}
			if (iLocal_1343 == 0)
			{
				__LIB_1__::func_683(&iLocal_35, 134217728);
				iLocal_1343 = 1;
				__LIB_0__::func_8(&Global_1935630, 4);
				__LIB_1__::func_682(115);
			}
			if (!__LIB_2__::func_1(iLocal_742[0], 0, 1))
			{
				return true;
			}
			else
			{
				fVar31 = __LIB_2__::func_118(iLocal_742[0], 1, 1);
				if (fVar31 > 20f)
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_742[0]))
					{
						if (!__LIB_0__::func_75(&uLocal_1439))
						{
							__LIB_1__::func_283(&uLocal_1439, 0);
						}
						if (__LIB_0__::func_264(&uLocal_1439) > 5f || fVar31 > 40f)
						{
							return true;
						}
					}
					else if (__LIB_0__::func_75(&uLocal_1439))
					{
						__LIB_0__::func_37(&uLocal_1439);
					}
				}
			}
			break;
		case 35:
			iLocal_1376 = 0;
			iLocal_1352 = 0;
			__LIB_0__::func_325(&(uLocal_747[0]));
			if (iLocal_1378 == 0 && Local_441.f_46 == 0)
			{
				if (__LIB_2__::func_1(iLocal_742[0], 0, 1))
				{
					if (!__LIB_0__::func_75(&uLocal_1460))
					{
						__LIB_1__::func_283(&uLocal_1460, 0);
					}
					if ((!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0])) && __LIB_0__::func_264(&uLocal_1460) > 1.5f)
					{
						__LIB_2__::func_602(&(Local_1110[0 /*17*/]), "RE_INTER_POS", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
						__LIB_2__::func_602(&(Local_1110[1 /*17*/]), "RE_INTER_ANTAGONIZE", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
						__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 1, 0);
						__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 1, 0);
						iLocal_1378 = 1;
					}
				}
			}
			if (iLocal_1346 == 0)
			{
				PED::_0x39A2FC5AF55A52B1(iLocal_742[0], -1);
				iLocal_1346 = 1;
				__LIB_1__::func_283(&uLocal_1445, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_742[0]))
			{
				fVar32 = __LIB_2__::func_118(iLocal_742[0], 1, 1);
				if (__LIB_0__::func_255(iLocal_742[0], 1))
				{
					if (iLocal_1374 == 0)
					{
						__LIB_3__::func_666(115, 0, 2, 0, 0);
					}
					iLocal_1044 = 36;
				}
			}
			else
			{
				iLocal_1044 = 36;
			}
			if (__LIB_0__::func_75(&uLocal_1445))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_742[0]))
				{
					fVar33 = __LIB_0__::func_264(&uLocal_1445);
					if (fVar33 > 10f || (fVar32 > 40f && fVar33 > 1f))
					{
						if (__LIB_3__::func_564(115, 6) == 0)
						{
						}
						else if (__LIB_3__::func_564(115, 1) == 1)
						{
						}
						else if (__LIB_3__::func_564(115, 3) == 1)
						{
							__LIB_2__::func_115(115, 0, 0, 0, 14, 0, 0, 1);
						}
						else
						{
							__LIB_2__::func_115(115, 0, 0, 0, 14, 0, 0, 1);
						}
						__LIB_0__::func_37(&uLocal_1445);
						__LIB_2__::func_426(&(iLocal_742[0]));
						iLocal_1374 = 1;
					}
				}
				else
				{
					__LIB_1__::func_148(&uLocal_1445);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_742[0]) || iLocal_1348 == 1)
			{
				iLocal_1044 = 36;
			}
			break;
		case 36:
			iLocal_1376 = 0;
			if (iLocal_1347 == 0)
			{
				iLocal_1347 = 1;
				__LIB_3__::func_823(&Local_441, &iLocal_742, &uLocal_747, 0, uLocal_1489, uLocal_1488, 0, 1, 0, 1);
				if (iLocal_1373 == 1)
				{
					PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(16));
					iLocal_1373 = 0;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_742[3]))
					{
						if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_742[3]))
						{
							__LIB_2__::func_426(&(iLocal_742[3]));
						}
						else
						{
							TASK::TASK_WANDER_IN_AREA(iLocal_742[3], -325.6645f, 771.7883f, 116.436f, 7f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 1);
							PED::_0x39A2FC5AF55A52B1(iLocal_742[3], -1);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_742[3]));
						}
					}
					__LIB_4__::func_932(79, 1);
				}
				SCRIPTS::TERMINATE_THIS_THREAD();
			}
			break;
		case 29:
			iLocal_1376 = 0;
			__LIB_1__::func_683(&iLocal_35, 134217728);
			__LIB_3__::func_264(&Local_441);
			if (MISC::_0x0D0AE5081F88CFE1(Local_20.f_12))
			{
				MISC::_0x154340E87D8CC178(Local_20.f_12);
			}
			if (MISC::_0x0D0AE5081F88CFE1(joaat("REWARD_MONEYSTACK")))
			{
				MISC::_0x154340E87D8CC178(joaat("REWARD_MONEYSTACK"));
			}
			__LIB_1__::func_345();
			if (MAP::DOES_BLIP_EXIST(iLocal_1217))
			{
				__LIB_0__::func_325(&iLocal_1217);
			}
			func_78();
			func_79();
			__LIB_3__::func_658(iLocal_1479, 1);
			if (__LIB_2__::func_1(iLocal_742[1], 0, 1))
			{
				PED::_0xF1C03A5352243A30(iLocal_742[1]);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_643[2 /*12*/].f_8))
			{
				if (!OBJECT::IS_OBJECT_VISIBLE(Local_643[2 /*12*/].f_8))
				{
					OBJECT::DELETE_OBJECT(&(Local_643[2 /*12*/].f_8));
				}
			}
			if (__LIB_2__::func_1(iLocal_742[0], 0, 1))
			{
				__LIB_2__::func_504(iLocal_742[0], 0);
				PED::_0xF1C03A5352243A30(iLocal_742[0]);
				if (!__LIB_0__::func_27(iLocal_35, 1024))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(iLocal_742[0]);
					iLocal_1352 = 0;
					__LIB_0__::func_325(&(uLocal_747[0]));
					if (iLocal_1215 != 16384)
					{
						__LIB_2__::func_461(0);
						if (PED::IS_PED_RAGDOLL(iLocal_742[0]) || PED::_0x29FCE825613FEFCA(iLocal_742[0], 500))
						{
							TASK::CLEAR_PED_TASKS(iLocal_742[0], true, false);
						}
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_742[0]);
						if (__LIB_0__::func_27(iLocal_35, 4))
						{
							if (!__LIB_0__::func_27(iLocal_35, -2147483648))
							{
								__LIB_1__::func_283(&uLocal_1460, 0);
							}
							TASK::TASK_MELEE(iLocal_742[0], Global_35, 0, 1, 1, 1065353216 /* Float: 1f */, 1, -1082130432 /* Float: -1f */);
							PED::REGISTER_TARGET(iLocal_742[0], Global_35, 1);
							PED::REGISTER_TARGET(Global_35, iLocal_742[0], 1);
							PED::SET_PED_CONFIG_FLAG(iLocal_742[0], 233, true);
							__LIB_2__::func_73(iLocal_742[0], &(uLocal_747[0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
							__LIB_2__::func_73(iLocal_742[0], &(uLocal_747[0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
							PED::SET_PED_FLEE_ATTRIBUTES(iLocal_742[0], 512, true);
							PED::SET_PED_CONFIG_FLAG(iLocal_742[0], 6, true);
							if (iLocal_1346 == 1)
							{
								iLocal_1044 = 35;
							}
							else
							{
								iLocal_1044 = 30;
							}
						}
						else if (__LIB_0__::func_27(iLocal_35, -2147483648))
						{
							if (iLocal_1215 == 0)
							{
								TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_742[0], Global_35, 6, 0, -1082130432 /* Float: -1f */, -1, 0);
							}
							else
							{
								TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_742[0], Global_35, 2, 0, -1082130432 /* Float: -1f */, -1, 0);
							}
						}
						else
						{
							__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("AGGRO"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 1, 0);
							TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_742[0], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
						}
					}
					else
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_742[0], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
					}
					PED::SET_PED_KEEP_TASK(iLocal_742[0], true);
					__LIB_1__::func_683(&iLocal_35, 1024);
					iLocal_1386 = MISC::GET_GAME_TIMER();
				}
				else if (ENTITY::HAS_ENTITY_ANIM_FINISHED(iLocal_742[0], Local_360[9 /*2*/], Local_360[9 /*2*/].f_1, 1) || MISC::GET_GAME_TIMER() > iLocal_1386 + 5000)
				{
					if (bLocal_1335)
					{
						if (!__LIB_0__::func_27(iLocal_35, 4))
						{
							__LIB_3__::func_288(iLocal_742[0], 1073741824 /* Float: 2f */, -1082130432 /* Float: -1f */, 0, 1);
							__LIB_3__::func_259(iLocal_742[0], 0);
						}
						return true;
					}
					else
					{
						return true;
					}
				}
			}
			break;
		case 30:
			iLocal_1376 = 0;
			if (!__LIB_0__::func_75(&uLocal_1451))
			{
				__LIB_1__::func_283(&uLocal_1451, 0);
			}
			if (__LIB_2__::func_1(iLocal_742[0], 0, 1))
			{
				if (__LIB_1__::func_313(&uLocal_1460, 0.5f))
				{
					if (iLocal_1344 == 1)
					{
						__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("RUN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else if (iLocal_1345 == 1)
					{
						__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("NO_MONEY_ATTACK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("ATTACK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iLocal_1396, true, 0, false))
				{
					if (iLocal_1396 != joaat("WEAPON_UNARMED") && (__LIB_2__::func_401(iLocal_742[0], 1, 1, 1, 0, 0) || __LIB_4__::func_207(iLocal_742[0], 1090519040 /* Float: 8f */, 1103626240 /* Float: 25f */, 1097859072 /* Float: 15f */, 0)))
					{
						TASK::TASK_COMBAT_PED(iLocal_742[0], Global_35, 0, 0);
						__LIB_2__::func_73(iLocal_742[0], &(uLocal_747[0]), joaat("BLIP_STYLE_ENEMY"), 942020339, 0, 0);
						iLocal_1377 = 1;
						if (iLocal_1346 == 1)
						{
							iLocal_1044 = 35;
						}
						else
						{
							iLocal_1044 = 33;
						}
					}
					else if (__LIB_0__::func_665(Global_35, iLocal_742[0], 1, 1) > 10f || __LIB_0__::func_264(&uLocal_1451) > 10f)
					{
						TASK::TASK_COMBAT_PED(iLocal_742[0], Global_35, 0, 0);
						__LIB_2__::func_73(iLocal_742[0], &(uLocal_747[0]), joaat("BLIP_STYLE_ENEMY"), 942020339, 0, 0);
						iLocal_1377 = 1;
						if (iLocal_1346 == 1)
						{
							iLocal_1044 = 35;
						}
						else
						{
							iLocal_1044 = 33;
						}
					}
				}
				else if (__LIB_0__::func_665(Global_35, iLocal_742[0], 1, 1) > 15f)
				{
					TASK::TASK_COMBAT_PED(iLocal_742[0], Global_35, 0, 0);
					__LIB_2__::func_73(iLocal_742[0], &(uLocal_747[0]), joaat("BLIP_STYLE_ENEMY"), 942020339, 0, 0);
					iLocal_1377 = 1;
					if (iLocal_1346 == 1)
					{
						iLocal_1044 = 35;
					}
					else
					{
						iLocal_1044 = 33;
					}
				}
			}
			break;
	}
	return false;
}

void func_68()
{
	__LIB_3__::func_461(115, 6, 0);
	if (__LIB_0__::func_181())
	{
		__LIB_3__::func_537(115, 3, 1);
	}
	else
	{
		__LIB_3__::func_461(115, 3, 1);
	}
}

void func_72(int iParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		return;
	}
	POPULATION::_0x74C2B3DC0B294102(*iParam0);
	POPULATION::_0xA1CFB35069D23C23(*iParam0);
	VOLUME::_DELETE_VOLUME(*iParam0);
}

void func_78()
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1465))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_1465);
		POPULATION::_0xA1CFB35069D23C23(iLocal_1465);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1480, false);
		VOLUME::_DELETE_VOLUME(iLocal_1465);
	}
}

void func_79()
{
	if (VOLUME::_DOES_VOLUME_EXIST(Local_20.f_1))
	{
		VOLUME::_DELETE_VOLUME(Local_20.f_1);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_20.f_2))
	{
		VOLUME::_DELETE_VOLUME(Local_20.f_2);
	}
}

void func_86()
{
	Local_752[0 /*32*/].f_1 = joaat("RE_TOWNROBBERY_MALES_01");
	Local_752[0 /*32*/] = 4;
	Local_752[0 /*32*/].f_3 = 1550613446;
	StringCopy(&(Local_752[0 /*32*/].f_23), "0842_S_M_M_UniButchers_01_WHITE_01", 64);
	Local_752[1 /*32*/].f_1 = joaat("A_M_M_VALTOWNFOLK_02");
	Local_752[1 /*32*/] = 4;
	Local_752[2 /*32*/].f_1 = joaat("RE_TOWNROBBERY_MALES_01");
	Local_752[2 /*32*/] = 4;
	Local_752[2 /*32*/].f_3 = 718968995;
	StringCopy(&(Local_752[2 /*32*/].f_23), "0805_A_M_M_SDDockForeman_01_WHITE_01", 64);
	Local_752[3 /*32*/].f_1 = joaat("CS_BATHINGLADIES_01");
	Local_752[3 /*32*/] = 5;
	StringCopy(&(Local_752[3 /*32*/].f_23), "1102_A_F_M_BathingLadies_01_WHITE_02", 64);
	__LIB_3__::func_303(&(Local_752[0 /*32*/].f_22));
	__LIB_3__::func_303(&(Local_752[2 /*32*/].f_22));
	__LIB_0__::func_68(183181940, 1, 0);
}

void func_87()
{
	__LIB_3__::func_445(&Local_752);
}

void func_88()
{
	Local_360[0 /*2*/] = "script_re@town_robbery";
	Local_360[0 /*2*/].f_1 = "base";
	Local_360[1 /*2*/] = "script_re@town_robbery";
	Local_360[1 /*2*/].f_1 = "i_can_use";
	Local_360[2 /*2*/] = "script_re@town_robbery";
	Local_360[2 /*2*/].f_1 = "my_bastard";
	Local_360[3 /*2*/] = "script_re@town_robbery";
	Local_360[3 /*2*/].f_1 = "so_listen";
	Local_360[4 /*2*/] = "script_re@town_robbery";
	Local_360[4 /*2*/].f_1 = "so_u_interested";
	Local_360[5 /*2*/] = "script_re@town_robbery";
	Local_360[5 /*2*/].f_1 = "wont_take_u";
	Local_360[6 /*2*/] = "script_re@town_robbery";
	Local_360[6 /*2*/].f_1 = "they_know_me";
	Local_360[7 /*2*/] = "script_re@town_robbery";
	Local_360[7 /*2*/].f_1 = "the_fool_hides";
	Local_360[8 /*2*/] = "script_re@town_robbery";
	Local_360[8 /*2*/].f_1 = "fine_suit";
	Local_360[9 /*2*/] = "script_re@town_robbery";
	Local_360[9 /*2*/].f_1 = "what_the_hell";
	Local_360[10 /*2*/] = "script_re@town_robbery";
	Local_360[10 /*2*/].f_1 = "get";
	Local_360[11 /*2*/] = "script_re@town_robbery";
	Local_360[11 /*2*/].f_1 = "did_u_get_it";
	Local_360[12 /*2*/] = "script_re@town_robbery";
	Local_360[12 /*2*/].f_1 = "dont_leave_me";
	Local_360[13 /*2*/] = "script_re@town_robbery";
	Local_360[13 /*2*/].f_1 = "come_on_talk";
	Local_360[14 /*2*/] = "script_re@town_robbery";
	Local_360[14 /*2*/].f_1 = "hey_you";
	Local_360[15 /*2*/] = "script_re@town_robbery";
	Local_360[15 /*2*/].f_1 = "remember_me";
	Local_360[16 /*2*/] = "script_re@town_robbery";
	Local_360[16 /*2*/].f_1 = "we_had_a_deal";
	Local_360[17 /*2*/] = "script_re@town_robbery";
	Local_360[17 /*2*/].f_1 = "come_on";
	Local_360[18 /*2*/] = "script_re@town_robbery";
	Local_360[18 /*2*/].f_1 = "be_a_gentleman";
	Local_360[19 /*2*/] = "script_re@town_robbery";
	Local_360[19 /*2*/].f_1 = "give_me_the_money";
	Local_360[20 /*2*/] = "script_re@town_robbery";
	Local_360[20 /*2*/].f_1 = "about_time";
	Local_360[21 /*2*/] = "script_re@town_robbery";
	Local_360[21 /*2*/].f_1 = "base_money";
	Local_360[22 /*2*/] = "script_re@town_robbery";
	Local_360[22 /*2*/].f_1 = "idle_male";
	Local_360[23 /*2*/] = "script_re@dark_alley_ambush";
	Local_360[23 /*2*/].f_1 = "callover_n";
	Local_360[36 /*2*/] = "script_re@town_robbery";
	Local_360[36 /*2*/].f_1 = "nice_work";
	Local_360[24 /*2*/] = "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_BASE";
	Local_360[24 /*2*/].f_1 = "ENTER_FRONT_att";
	Local_360[34 /*2*/] = "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_BASE";
	Local_360[34 /*2*/].f_1 = "ENTER_FAR_FRONT_att";
	Local_360[28 /*2*/] = "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_STREAMED";
	Local_360[28 /*2*/].f_1 = "struggle_enter_att";
	Local_360[30 /*2*/] = "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_STREAMED";
	Local_360[30 /*2*/].f_1 = "ATTACK_ENTER_att";
	Local_360[32 /*2*/] = "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@LOCO@ATTACKER";
	Local_360[32 /*2*/].f_1 = "IDLE";
	Local_360[25 /*2*/] = "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_BASE";
	Local_360[25 /*2*/].f_1 = "ENTER_FRONT_vic";
	Local_360[35 /*2*/] = "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_BASE";
	Local_360[35 /*2*/].f_1 = "ENTER_FAR_FRONT_vic";
	Local_360[29 /*2*/] = "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_STREAMED";
	Local_360[29 /*2*/].f_1 = "struggle_enter_vic";
	Local_360[31 /*2*/] = "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_STREAMED";
	Local_360[31 /*2*/].f_1 = "ATTACK_ENTER_vic";
	Local_360[33 /*2*/] = "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@LOCO@VICTIM";
	Local_360[33 /*2*/].f_1 = "IDLE";
	Local_360[26 /*2*/] = "AMB_REST@WORLD_HUMAN_SMOKING@MALE_A@STAND_ENTER";
	Local_360[26 /*2*/].f_1 = "ENTER_BACK";
	Local_360[27 /*2*/] = "AMB_REST@WORLD_HUMAN_SMOKING@MALE_A@TRANS";
	Local_360[27 /*2*/].f_1 = "A_TRANS_D";
	__LIB_3__::func_318(Local_360[0 /*2*/], &uLocal_39);
	__LIB_3__::func_318(Local_360[23 /*2*/], &uLocal_39);
	__LIB_3__::func_318(Local_360[24 /*2*/], &uLocal_39);
	__LIB_3__::func_318(Local_360[30 /*2*/], &uLocal_39);
	__LIB_3__::func_318(Local_360[26 /*2*/], &uLocal_39);
	STREAMING::REQUEST_ANIM_DICT(func_314(32));
	STREAMING::REQUEST_ANIM_DICT(func_314(33));
}

void func_99(var uParam0)
{
	switch (Local_441.f_51.f_4)
	{
		case 0:
			*uParam0 = { -299.8715f, 769.5512f, 117.7743f };
			uParam0->f_3 = { -300.0843f, 767.3349f, 117.7702f };
			uParam0->f_15 = joaat("WORLD_HUMAN_SMOKE");
			uParam0->f_14 = -76.56f;
			uParam0->f_6 = { -299.7303f, 766.5651f, 117.7851f };
			uParam0->f_9 = { -300.8016f, 773.0268f, 117.7855f };
			uParam0->f_12 = -79.004f;
			uParam0->f_13 = -79.004f;
			uParam0->f_66 = { -298.5822f, 776.9185f, 120.118f };
			uParam0->f_69 = { 0f, 0f, 101.1443f };
			uParam0->f_72 = { 15.58453f, 13.05635f, 7.820213f };
			uParam0->f_75 = { -298.634f, 788.0432f, 118.9547f };
			uParam0->f_78 = { 0f, 0f, 99.16987f };
			uParam0->f_81 = { 5.646725f, 8.299273f, 4.382039f };
			uParam0->f_84 = { -294.5358f, 770.6732f, 117.779f };
			uParam0->f_87 = { 0f, 0f, 99f };
			uParam0->f_90 = { 10f, 5f, 6f };
			uParam0->f_93 = { -251.4322f, 771.3552f, 116.4666f };
			uParam0->f_96 = 40000f;
			break;
		case 1:
			*uParam0 = { -279.3015f, 763.6104f, 117.222f };
			uParam0->f_3 = { -281.3456f, 764.8769f, 117.7411f };
			uParam0->f_15 = joaat("WORLD_HUMAN_SMOKE");
			uParam0->f_14 = -76.56f;
			uParam0->f_6 = { -279.6109f, 759.9537f, 117.015f };
			uParam0->f_9 = { -279.6109f, 759.9537f, 117.015f };
			uParam0->f_12 = 65f;
			uParam0->f_13 = 65f;
			uParam0->f_66 = { -268.718f, 763.917f, 116.6868f };
			uParam0->f_69 = { 0f, 0f, 17f };
			uParam0->f_72 = { 15.58453f, 13.05635f, 7.820213f };
			uParam0->f_75 = { -258.538f, 767.142f, 117.786f };
			uParam0->f_78 = { 0f, 0f, 17f };
			uParam0->f_81 = { 5.646725f, 8.299273f, 4.382039f };
			uParam0->f_84 = { -280.8935f, 763.319f, 117.4991f };
			uParam0->f_87 = { 0f, 0f, 17f };
			uParam0->f_90 = { 7f, 7f, 4f };
			uParam0->f_93 = { -251.4322f, 771.3552f, 116.4666f };
			uParam0->f_96 = 40000f;
			break;
		case 2:
			*uParam0 = { -348.1741f, 800.2321f, 115.0208f };
			uParam0->f_3 = { -346.3924f, 803.803f, 115.4115f };
			uParam0->f_15 = joaat("WORLD_HUMAN_SMOKE");
			uParam0->f_14 = 94.01f;
			uParam0->f_6 = { -341.2685f, 800.8436f, 116.116f };
			uParam0->f_9 = { -341.2685f, 800.8436f, 116.116f };
			uParam0->f_12 = 96.9f;
			uParam0->f_13 = 96.9f;
			uParam0->f_66 = { -344.085f, 800.505f, 115.2104f };
			uParam0->f_69 = { 0f, 0f, -81.93185f };
			uParam0->f_72 = { 15.58453f, 18.53757f, 7.820213f };
			uParam0->f_75 = { -342.403f, 790.035f, 115.485f };
			uParam0->f_78 = { 0f, 0f, -81.49422f };
			uParam0->f_81 = { 5.646725f, 8.299273f, 4.382039f };
			uParam0->f_84 = { -342.5213f, 801.1843f, 116.1163f };
			uParam0->f_87 = { 0f, 0f, -81f };
			uParam0->f_90 = { 12.009f, 6.19f, 4f };
			uParam0->f_93 = { -251.4322f, 771.3552f, 116.4666f };
			uParam0->f_96 = 40000f;
			break;
	}
	uParam0->f_17 = { -324.8906f, 760.5921f, 117.9551f };
	uParam0->f_20 = { 0f, 0f, 12.33403f };
	uParam0->f_23 = { 5.758606f, 4.258173f, 3.068927f };
	uParam0->f_26 = { -326.1048f, 773.8114f, 117.8995f };
	uParam0->f_29 = { 0f, 0f, -170.0063f };
	uParam0->f_32 = { 8.355642f, 5.46991f, 3.228833f };
	uParam0->f_57 = { -322.5677f, 768.0349f, 121.6935f };
	uParam0->f_60 = { 0f, 0f, -80.2267f };
	uParam0->f_63 = { 18.60986f, 13.51953f, 10.92944f };
	uParam0->f_35 = { -322.2873f, 770.4114f, 116.4364f };
	uParam0->f_38 = 200.9934f;
	uParam0->f_53 = { -324.8542f, 758.8079f, 116.4341f };
	uParam0->f_56 = 3f;
	if (!TASK::_0x6EEAD6AF637DA752(uParam0->f_3, uParam0->f_15, 1f, 0))
	{
		uParam0->f_16 = __LIB_2__::func_944(uParam0->f_15, uParam0->f_3, uParam0->f_14, 0, 0, 0);
	}
}

void func_104()
{
	switch (Local_441.f_51.f_4)
	{
		case 0:
			Local_752[0 /*32*/].f_6 = { 0f, 0f, 0f };
			Local_752[0 /*32*/].f_9 = 0f;
			Local_752[1 /*32*/].f_6 = { -1.89f, -18.9f, -0.35f };
			Local_752[1 /*32*/].f_9 = -75.304f;
			break;
		case 1:
			Local_752[0 /*32*/].f_6 = { 0f, 0f, 0f };
			Local_752[0 /*32*/].f_9 = -95.139f;
			Local_752[1 /*32*/].f_6 = { -20.68f, -4.5f, 0.09f };
			Local_752[1 /*32*/].f_9 = -75f;
			break;
		case 2:
			Local_752[0 /*32*/].f_6 = { 0f, 0f, 0f };
			Local_752[0 /*32*/].f_9 = 177.42f;
			Local_752[1 /*32*/].f_6 = { 6.04f, 15.94f, 0.62f };
			Local_752[1 /*32*/].f_9 = 89.65f;
			break;
	}
}

bool func_107(vector3 vParam0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
{
	int iVar0;
	if (*iParam4 != *iParam5)
	{
		return false;
	}
	if (iParam7 < 0 || iParam7 >= *iParam4)
	{
		iParam7 = 0;
	}
	if (iParam8 < 0 || iParam8 >= *iParam4)
	{
		iParam8 = (*iParam4 - 1);
	}
	iVar0 = iParam7;
	while (iVar0 <= iParam8)
	{
		if (__LIB_3__::func_354() || !func_335(iParam4[iVar0 /*32*/], iParam5[iVar0], vParam0, uParam3, iParam6, fParam9))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_177()
{
	if ((iLocal_1376 == 1 && Local_441.f_46 == 0) && __LIB_2__::func_1(iLocal_742[0], 0, 1))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_742[0], &Local_692);
	}
	iLocal_1376 = 1;
}

void func_178()
{
	int iVar0;
	if (iLocal_1369 == 1)
	{
		return;
	}
	if (iLocal_978 == 6)
	{
		func_420();
	}
	iVar0 = -1;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_742[0]) && __LIB_2__::func_1(iLocal_742[0], 0, 1))
	{
		iVar0 = func_422(&(iLocal_742[0]), &(Local_1046[0 /*21*/]), 15f, &Local_1110, &(Local_441.f_192), 0f, 1, 0, 0, func_421(), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		if (iVar0 == 0)
		{
			switch (iLocal_978)
			{
				case 0:
					if (__LIB_0__::func_27(iLocal_35, 8))
					{
						__LIB_2__::func_478(Global_35, iLocal_742[0], func_35("EARLY_POS_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(Global_35, iLocal_742[0], func_35("EARLY_POS_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					iLocal_1375 = 1;
					break;
				case 2:
					iLocal_1382 = 0;
					__LIB_2__::func_461(0);
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_742[0], Local_360[4 /*2*/], Local_360[4 /*2*/].f_1, 1))
					{
						TASK::STOP_ANIM_TASK(iLocal_742[0], Local_360[4 /*2*/], Local_360[4 /*2*/].f_1, -2f);
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_742[0], Local_360[5 /*2*/], Local_360[5 /*2*/].f_1, 1))
					{
						TASK::STOP_ANIM_TASK(iLocal_742[0], Local_360[5 /*2*/], Local_360[5 /*2*/].f_1, -2f);
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_742[0], Local_360[6 /*2*/], Local_360[6 /*2*/].f_1, 1))
					{
						TASK::STOP_ANIM_TASK(iLocal_742[0], Local_360[6 /*2*/], Local_360[6 /*2*/].f_1, -2f);
					}
					if (iLocal_1373 == 0)
					{
						__LIB_4__::func_932(79, 0);
						__LIB_3__::func_229(16);
						iLocal_1373 = 1;
					}
					__LIB_1__::func_345();
					__LIB_2__::func_478(Global_35, iLocal_742[0], func_35("ACCEPT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					if (bLocal_936)
					{
						func_424();
					}
					func_425();
					iLocal_1342 = 1;
					iLocal_1044 = 16;
					iLocal_1363 = 1;
					__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 0, 0);
					iLocal_1366 = 0;
					iLocal_1367 = 0;
					break;
				case 3:
					__LIB_2__::func_478(Global_35, iLocal_742[0], func_35("ILO_DECLINE_POS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_976, 1);
					iLocal_1012 = 0;
					break;
				case 4:
					__LIB_2__::func_478(Global_35, iLocal_742[0], func_35("ILO_ACCEPT_NEG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_976, 16);
					iLocal_1012 = 2;
					__LIB_0__::func_268(&uLocal_1424, -4f);
					break;
				case 6:
					iLocal_1382 = 0;
					iLocal_977 = 8;
					__LIB_3__::func_232(&(Local_441.f_5), 0);
					if (iLocal_1373 == 1)
					{
						PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(16));
						iLocal_1373 = 0;
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_742[3]))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_742[3]))
							{
								__LIB_2__::func_426(&(iLocal_742[3]));
							}
							else
							{
								TASK::TASK_WANDER_IN_AREA(iLocal_742[3], -325.6645f, 771.7883f, 116.436f, 7f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 1);
								PED::_0x39A2FC5AF55A52B1(iLocal_742[3], -1);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_742[3]));
							}
						}
						__LIB_4__::func_932(79, 1);
					}
					iLocal_1371 = 1;
					iLocal_1363 = 1;
					iLocal_978 = 7;
					fLocal_1330 = 15f;
					__LIB_0__::func_769();
					__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 0, 0);
					iLocal_1366 = 0;
					iLocal_1367 = 0;
					break;
				case 7:
					if (__LIB_0__::func_27(iLocal_976, 1073741824 /* Float: 2f */))
					{
						__LIB_2__::func_478(Global_35, iLocal_742[0], func_35("ILO_LIE_POS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_683(&iLocal_976, 1048576);
						iLocal_1012 = 10;
					}
					else
					{
						__LIB_2__::func_478(Global_35, iLocal_742[0], func_35("ILO_GAVE_POS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_683(&iLocal_976, 65536);
						iLocal_1012 = 8;
					}
					break;
			}
			__LIB_2__::func_451(&(Local_1046[0 /*21*/]), 0);
			__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 0, 0);
			iLocal_1366 = 0;
		}
		else if (iVar0 == 1)
		{
			switch (iLocal_978)
			{
				case 0:
					if (__LIB_0__::func_27(iLocal_35, 8))
					{
						__LIB_2__::func_478(Global_35, iLocal_742[0], func_35("EARLY_NEG_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(Global_35, iLocal_742[0], func_35("EARLY_NEG_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					iLocal_1375 = 1;
					break;
				case 2:
					__LIB_1__::func_345();
					__LIB_2__::func_461(0);
					__LIB_2__::func_478(Global_35, iLocal_742[0], func_35("DECLINE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_1382 = 0;
					iLocal_1044 = 15;
					iLocal_978 = 3;
					fLocal_1330 = 15f;
					__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 0, 0);
					iLocal_1366 = 0;
					iLocal_1367 = 0;
					iLocal_1363 = 1;
					break;
				case 3:
					__LIB_2__::func_478(Global_35, iLocal_742[0], func_35("ILO_DECLINE_NEG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_976, 2);
					iLocal_1012 = 1;
					__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 0, 0);
					iLocal_1366 = 0;
					break;
				case 4:
					__LIB_2__::func_478(Global_35, iLocal_742[0], func_35("DECLINE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_976, 32);
					iLocal_1012 = 3;
					__LIB_0__::func_268(&uLocal_1424, -4f);
					__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 0, 0);
					iLocal_1366 = 0;
					iLocal_1367 = 0;
					PED::_0xA3A9299C4F2ADB98(iLocal_742[0]);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_742[0], Global_35, -1, -1f, -1f, -1f);
					break;
				case 6:
					if (iLocal_38 == 0)
					{
						iLocal_977 = 9;
						__LIB_1__::func_683(&iLocal_976, 1073741824 /* Float: 2f */);
						__LIB_2__::func_478(Global_35, iLocal_742[0], func_35("RETURN_LIE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						if (iLocal_1372 == 0)
						{
							__LIB_3__::func_465(2, 0, 0, "RE_HONOR_BROKE_AGREEMENT", iLocal_742[0], 0, 1065353216 /* Float: 1f */, 0);
							iLocal_1372 = 1;
						}
					}
					else
					{
						__LIB_2__::func_461(0);
						iLocal_1044 = 34;
						__LIB_2__::func_478(Global_35, iLocal_742[0], func_35("KEEP_MONEY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_683(&iLocal_35, 1048576);
						__LIB_1__::func_283(&uLocal_1418, 0);
					}
					if (iLocal_1373 == 1)
					{
						PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(16));
						iLocal_1373 = 0;
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_742[3]))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_742[3]))
							{
								__LIB_2__::func_426(&(iLocal_742[3]));
							}
							else
							{
								TASK::TASK_WANDER_IN_AREA(iLocal_742[3], -325.6645f, 771.7883f, 116.436f, 7f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 1);
								PED::_0x39A2FC5AF55A52B1(iLocal_742[3], -1);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_742[3]));
							}
						}
						__LIB_4__::func_932(79, 1);
					}
					iLocal_1371 = 1;
					iLocal_1363 = 1;
					iLocal_978 = 7;
					fLocal_1330 = 15f;
					__LIB_0__::func_769();
					__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 0, 0);
					iLocal_1366 = 0;
					iLocal_1367 = 0;
					break;
				case 7:
					if (__LIB_0__::func_27(iLocal_976, 1073741824 /* Float: 2f */))
					{
						__LIB_2__::func_478(Global_35, iLocal_742[0], func_35("ILO_LIE_NEG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_683(&iLocal_976, 2097152);
						iLocal_1012 = 11;
					}
					else
					{
						__LIB_2__::func_478(Global_35, iLocal_742[0], func_35("ILO_GAVE_NEG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_683(&iLocal_976, 131072);
						iLocal_1012 = 9;
					}
					__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 0, 0);
					iLocal_1366 = 0;
					break;
			}
			__LIB_2__::func_451(&(Local_1046[0 /*21*/]), 0);
			__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 0, 0);
			iLocal_1367 = 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_742[3]) && __LIB_2__::func_1(iLocal_742[3], 0, 1))
	{
		iVar0 = func_422(&(iLocal_742[3]), &(Local_1046[1 /*21*/]), 15f, &Local_1145, &(Local_441.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		if (iVar0 == 0)
		{
			switch (iLocal_978)
			{
				case 4:
					if (!func_427())
					{
						__LIB_2__::func_478(Global_35, iLocal_742[3], func_35("ILO_HOTEL_ENTER_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(Global_35, iLocal_742[3], func_35("ILO_HOTEL_ENTER_A_ALT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					__LIB_1__::func_683(&iLocal_976, 256);
					iLocal_1012 = 4;
					break;
				case 5:
					break;
				case 6:
					__LIB_2__::func_478(Global_35, iLocal_742[3], func_35("ILO_EXIT_POS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_976, 4096);
					iLocal_1012 = 6;
					break;
			}
			__LIB_2__::func_411(&(Local_1145[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_1145[1 /*17*/]), 0, 0);
		}
		else if (iVar0 == 1)
		{
			switch (iLocal_978)
			{
				case 4:
					if (!func_427())
					{
						__LIB_2__::func_478(Global_35, iLocal_742[3], func_35("ILO_HOTEL_ENTER_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(Global_35, iLocal_742[3], func_35("ILO_HOTEL_ENTER_B_ALT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					__LIB_1__::func_683(&iLocal_976, 512);
					iLocal_1012 = 5;
					break;
				case 5:
					break;
				case 6:
					__LIB_2__::func_478(Global_35, iLocal_742[3], func_35("ILO_EXIT_NEG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_1012 = 7;
					__LIB_1__::func_683(&iLocal_976, 8192);
					break;
			}
			__LIB_2__::func_411(&(Local_1145[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_1145[1 /*17*/]), 0, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_742[1]) && __LIB_2__::func_1(iLocal_742[1], 0, 1))
	{
		iVar0 = func_422(&(iLocal_742[1]), &(Local_1046[2 /*21*/]), 15f, &Local_1180, &(Local_441.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	}
}

void func_179()
{
	int iVar0;
	if (iLocal_1369 == 1)
	{
		return;
	}
	if (iLocal_978 == 2)
	{
		func_420();
	}
	iVar0 = -1;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_742[0]) && __LIB_2__::func_1(iLocal_742[0], 0, 1))
	{
		iVar0 = func_422(&(iLocal_742[0]), &(Local_1046[0 /*21*/]), 15f, &Local_1110, &(Local_441.f_192), 0f, 1, 0, 0, func_421(), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		if (iVar0 == 0)
		{
			switch (iLocal_978)
			{
				case 0:
					if (__LIB_0__::func_27(iLocal_35, 8))
					{
						__LIB_2__::func_478(Global_35, iLocal_742[0], func_35("EARLY_POS_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(Global_35, iLocal_742[0], func_35("EARLY_POS_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					iLocal_1375 = 1;
					break;
				case 1:
					__LIB_2__::func_478(Global_35, iLocal_742[0], "RE_DAA_NBX_V2_ILO_SECOND_POS", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					break;
				case 2:
					iLocal_977 = 8;
					__LIB_3__::func_232(&(Local_441.f_5), 0);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_635.f_3, ENTITY::GET_ENTITY_COORDS(iLocal_742[0], true, false), ENTITY::GET_ENTITY_ROTATION(iLocal_742[0], 2), 2);
					if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_635.f_3, "pedPlayer", &Local_912, true, "pbl_handover", 2))
					{
					}
					if (__LIB_2__::func_118(iLocal_742[0], 1, 1) > 5f)
					{
						__LIB_2__::func_478(Global_35, iLocal_742[0], "RE_TOWNR_VAL_V2_I_FORGOT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					iLocal_977 = 8;
					iLocal_1371 = 1;
					iLocal_1044 = 31;
					iLocal_1363 = 1;
					iLocal_978 = 7;
					fLocal_1330 = 15f;
					__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 0, 0);
					break;
				case 7:
					if (__LIB_0__::func_27(iLocal_976, 1073741824 /* Float: 2f */))
					{
						__LIB_2__::func_478(Global_35, iLocal_742[0], func_35("ILO_LIE_POS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_683(&iLocal_976, 1048576);
						iLocal_1012 = 10;
					}
					else
					{
						__LIB_2__::func_478(Global_35, iLocal_742[0], func_35("ILO_GAVE_POS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_683(&iLocal_976, 65536);
						iLocal_1012 = 8;
					}
					break;
			}
			__LIB_2__::func_451(&(Local_1046[0 /*21*/]), 0);
			__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 0, 0);
			iLocal_1366 = 0;
			iLocal_1367 = 0;
			__LIB_2__::func_451(&(Local_1046[0 /*21*/]), 0);
		}
		else if (iVar0 == 1)
		{
			switch (iLocal_978)
			{
				case 0:
					if (__LIB_0__::func_27(iLocal_35, 8))
					{
						__LIB_2__::func_478(Global_35, iLocal_742[0], func_35("EARLY_NEG_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(Global_35, iLocal_742[0], func_35("EARLY_NEG_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					iLocal_1375 = 1;
					break;
				case 1:
					__LIB_2__::func_478(Global_35, iLocal_742[0], "RE_DAA_NBX_V2_ILO_QUIT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_35, 2048);
					__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 0, 0);
					break;
				case 2:
					__LIB_2__::func_461(0);
					iLocal_1044 = 34;
					__LIB_2__::func_478(Global_35, iLocal_742[0], func_35("KEEP_MONEY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_35, 1048576);
					__LIB_1__::func_283(&uLocal_1418, 0);
					__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 0, 0);
					iLocal_1366 = 0;
					iLocal_1371 = 1;
					iLocal_1363 = 1;
					iLocal_978 = 7;
					fLocal_1330 = 15f;
					func_428();
					break;
				case 7:
					if (__LIB_0__::func_27(iLocal_976, 1073741824 /* Float: 2f */))
					{
						__LIB_2__::func_478(Global_35, iLocal_742[0], func_35("ILO_LIE_NEG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_683(&iLocal_976, 2097152);
						iLocal_1012 = 11;
					}
					else
					{
						__LIB_2__::func_478(Global_35, iLocal_742[0], func_35("ILO_GAVE_NEG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_683(&iLocal_976, 131072);
						iLocal_1012 = 9;
					}
					__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 0, 0);
					iLocal_1366 = 0;
					break;
			}
			__LIB_2__::func_451(&(Local_1046[0 /*21*/]), 0);
			__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 0, 0);
			iLocal_1367 = 0;
		}
	}
}

void func_180()
{
	if (!__LIB_2__::func_136(Global_35, 0) && Local_441.f_46 == 0)
	{
		switch (iLocal_1012)
		{
			case 0:
				if ((__LIB_0__::func_27(iLocal_976, 1) && !__LIB_0__::func_27(iLocal_976, 4)) && !__LIB_2__::func_136(iLocal_742[0], 0))
				{
					__LIB_2__::func_122(iLocal_742[0], "GENERIC_GOODBYE", 291934926, Global_35, 1, &(Local_752[0 /*32*/].f_23), 1, 1);
					__LIB_1__::func_683(&iLocal_976, 4);
				}
				break;
			case 1:
				if ((__LIB_0__::func_27(iLocal_976, 2) && !__LIB_0__::func_27(iLocal_976, 8)) && !__LIB_2__::func_136(iLocal_742[0], 0))
				{
					__LIB_2__::func_122(iLocal_742[0], "LEAVE_ME", 291934926, Global_35, 1, &(Local_752[0 /*32*/].f_23), 1, 1);
					__LIB_1__::func_683(&iLocal_976, 8);
				}
				break;
			case 2:
				if ((__LIB_0__::func_27(iLocal_976, 16) && !__LIB_0__::func_27(iLocal_976, 64)) && !__LIB_2__::func_136(iLocal_742[0], 0))
				{
					__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("GET_ON_ALREADY_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					Local_692.f_7 = 3500;
					_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_742[0], &Local_692);
					__LIB_1__::func_683(&iLocal_35, 64);
					__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 1, 0);
					__LIB_1__::func_683(&iLocal_976, 64);
					__LIB_0__::func_268(&uLocal_1424, -4f);
				}
				break;
			case 3:
				if ((__LIB_0__::func_27(iLocal_976, 32) && !__LIB_0__::func_27(iLocal_976, 128)) && !__LIB_2__::func_136(iLocal_742[0], 0))
				{
					__LIB_1__::func_683(&iLocal_976, 128);
					__LIB_0__::func_325(&iLocal_1217);
					__LIB_1__::func_345();
					iLocal_1382 = 0;
					iLocal_1044 = 15;
					iLocal_978 = 3;
					fLocal_1330 = 15f;
					__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 0, 0);
					iLocal_1366 = 0;
					iLocal_1367 = 0;
					iLocal_1363 = 1;
				}
				break;
			case 4:
				if (((__LIB_0__::func_27(iLocal_976, 256) && !__LIB_0__::func_27(iLocal_976, 1024)) && __LIB_2__::func_1(iLocal_742[3], 0, 1)) && !__LIB_2__::func_136(iLocal_742[3], 0))
				{
					if (func_427())
					{
						__LIB_2__::func_478(iLocal_742[3], Global_35, func_35("ILO_HOTEL_ENTER_WARN_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(iLocal_742[3], Global_35, func_35("ILO_HOTEL_ENTER_RESP_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					__LIB_1__::func_683(&iLocal_976, 1024);
				}
				break;
			case 5:
				if (((__LIB_0__::func_27(iLocal_976, 512) && !__LIB_0__::func_27(iLocal_976, 2048)) && __LIB_2__::func_1(iLocal_742[3], 0, 1)) && !__LIB_2__::func_136(iLocal_742[3], 0))
				{
					if (func_427())
					{
						__LIB_2__::func_478(iLocal_742[3], Global_35, func_35("ILO_HOTEL_ENTER_WARN_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(iLocal_742[3], Global_35, func_35("ILO_HOTEL_ENTER_RESP_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					__LIB_1__::func_683(&iLocal_976, 2048);
				}
				break;
			case 6:
				if (((__LIB_0__::func_27(iLocal_976, 4096) && !__LIB_0__::func_27(iLocal_976, 16384)) && __LIB_2__::func_1(iLocal_742[3], 0, 1)) && !__LIB_2__::func_136(iLocal_742[3], 0))
				{
					__LIB_2__::func_478(iLocal_742[3], Global_35, func_35("ILO_EXIT_POS_RESP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_976, 16384);
				}
				break;
			case 7:
				if (((__LIB_0__::func_27(iLocal_976, 8192) && !__LIB_0__::func_27(iLocal_976, 32768)) && __LIB_2__::func_1(iLocal_742[3], 0, 1)) && !__LIB_2__::func_136(iLocal_742[3], 0))
				{
					__LIB_2__::func_478(iLocal_742[3], Global_35, func_35("ILO_EXIT_NEG_RESP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_976, 32768);
				}
				break;
			case 8:
				if ((__LIB_0__::func_27(iLocal_976, 65536) && !__LIB_0__::func_27(iLocal_976, 262144)) && !__LIB_2__::func_136(iLocal_742[0], 0))
				{
					__LIB_2__::func_122(iLocal_742[0], "GENERIC_GOODBYE", 291934926, Global_35, 1, &(Local_752[0 /*32*/].f_23), 2, 1);
					__LIB_1__::func_683(&iLocal_976, 262144);
				}
				break;
			case 9:
				if ((__LIB_0__::func_27(iLocal_976, 131072) && !__LIB_0__::func_27(iLocal_976, 524288)) && !__LIB_2__::func_136(iLocal_742[0], 0))
				{
					__LIB_2__::func_122(iLocal_742[0], "INSULT_RESPONSE", 291934926, Global_35, 1, &(Local_752[0 /*32*/].f_23), 2, 1);
					__LIB_1__::func_683(&iLocal_976, 524288);
				}
				break;
			case 10:
				if ((__LIB_0__::func_27(iLocal_976, 1048576) && !__LIB_0__::func_27(iLocal_976, 4194304)) && !__LIB_2__::func_136(iLocal_742[0], 0))
				{
					__LIB_2__::func_122(iLocal_742[0], "LEAVE_ME", 291934926, Global_35, 1, &(Local_752[0 /*32*/].f_23), 1, 1);
					__LIB_1__::func_683(&iLocal_976, 4194304);
				}
				break;
			case 11:
				if ((__LIB_0__::func_27(iLocal_976, 2097152) && !__LIB_0__::func_27(iLocal_976, 8388608)) && !__LIB_2__::func_136(iLocal_742[0], 0))
				{
					__LIB_2__::func_122(iLocal_742[0], "LEAVE_ME", 291934926, Global_35, 1, &(Local_752[0 /*32*/].f_23), 1, 1);
					__LIB_1__::func_683(&iLocal_976, 8388608);
				}
				break;
			case 12:
				if ((__LIB_0__::func_27(iLocal_976, 16777216) && !__LIB_0__::func_27(iLocal_976, 268435456)) && !__LIB_2__::func_136(iLocal_742[0], 0))
				{
					__LIB_2__::func_122(iLocal_742[0], "WON_DISPUTE", 291934926, Global_35, 1, &(Local_752[0 /*32*/].f_23), 2, 1);
					__LIB_1__::func_683(&iLocal_976, 268435456);
				}
				break;
			case 13:
				if ((__LIB_0__::func_27(iLocal_976, 33554432) && !__LIB_0__::func_27(iLocal_976, 536870912)) && !__LIB_2__::func_136(iLocal_742[0], 0))
				{
					__LIB_2__::func_122(iLocal_742[0], "LEAVE_ME", 291934926, Global_35, 1, &(Local_752[0 /*32*/].f_23), 1, 1);
					__LIB_1__::func_683(&iLocal_976, 536870912);
				}
				break;
			case 14:
				if ((__LIB_0__::func_27(iLocal_976, 67108864) && !__LIB_0__::func_27(iLocal_976, 268435456)) && !__LIB_2__::func_136(iLocal_742[0], 0))
				{
					__LIB_2__::func_122(iLocal_742[0], "WON_DISPUTE", 291934926, Global_35, 1, &(Local_752[0 /*32*/].f_23), 2, 1);
					__LIB_1__::func_683(&iLocal_976, 268435456);
				}
				break;
			case 15:
				if ((__LIB_0__::func_27(iLocal_976, 134217728) && !__LIB_0__::func_27(iLocal_976, 536870912)) && !__LIB_2__::func_136(iLocal_742[0], 0))
				{
					__LIB_2__::func_122(iLocal_742[0], "LEAVE_ME", 291934926, Global_35, 1, &(Local_752[0 /*32*/].f_23), 1, 1);
					__LIB_1__::func_683(&iLocal_976, 536870912);
				}
				break;
		}
	}
}

void func_181()
{
	if (iLocal_978 == 3 || iLocal_978 == 7)
	{
		return;
	}
	if (__LIB_2__::func_1(iLocal_742[0], 0, 1))
	{
		if (__LIB_0__::func_665(Global_35, iLocal_742[0], 1, 1) > fLocal_1330)
		{
			if (iLocal_1365 == 1)
			{
				iLocal_1365 = 0;
				__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 0, 0);
			}
		}
		else if (iLocal_1365 == 0)
		{
			iLocal_1365 = 1;
			if (iLocal_1366 == 1)
			{
				__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 1, 0);
			}
			if (iLocal_1367 == 1)
			{
				__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 1, 0);
			}
		}
	}
}

void func_182()
{
	if (!__LIB_2__::func_1(iLocal_742[0], 0, 1))
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], -471636559) && !__LIB_0__::func_27(iLocal_35, 1))
	{
		__LIB_1__::func_683(&iLocal_35, 1);
		__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("CALLOVER"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		__LIB_2__::func_315(1891783641, iLocal_742[0], 1);
		EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), iLocal_742[0], 7f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], -11166485) && !__LIB_0__::func_27(iLocal_35, 32))
	{
		__LIB_1__::func_683(&iLocal_35, 32);
		__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("CALLOVER_NEAR"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		__LIB_2__::func_315(1891783641, iLocal_742[0], 1);
		EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), iLocal_742[0], 7f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], -305879829) && iLocal_38 == 0)
	{
		__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("ASK_FOR_CUT_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], 50253663) && iLocal_38 == 1)
	{
		__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("ASK_FOR_CUT_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], 124952755) && iLocal_38 == 0)
	{
		__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("NO_MONEY_RETURN_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], joaat("NO_MONEY_RETURN_LIE_B")) && iLocal_38 == 1)
	{
		__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("NO_MONEY_RETURN_LIE_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], 1790359959))
	{
		if (!__LIB_0__::func_27(iLocal_35, 8))
		{
			__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("EASYMONEY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], 1543070371))
	{
		__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("RETURN_CALLOVER"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], -1763286265))
	{
		if (!__LIB_0__::func_27(iLocal_35, 8))
		{
			iLocal_1341 = 1;
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], -1007549597))
	{
		if (!__LIB_0__::func_27(iLocal_35, 8))
		{
			__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("EXPLANATION"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], -1007549597))
	{
		if (__LIB_0__::func_27(iLocal_35, 8))
		{
			__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("EXPLANATION_ALT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], 1429831326) && (!__LIB_4__::func_18() || !__LIB_0__::func_27(iLocal_35, 4)))
	{
		__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("THANKS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], -275178156) && __LIB_4__::func_18())
	{
		if (__LIB_0__::func_27(iLocal_35, 4))
		{
			__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("SICK_THANKS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], -576429230) && iLocal_1371 == 0)
	{
		if (iLocal_38 == 0)
		{
			__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("ASK_FOR_CUT_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], -885113210) && iLocal_1371 == 0)
	{
		if (iLocal_38 == 1 && __LIB_3__::func_564(115, 2) == 0)
		{
			__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("ASK_FOR_CUT_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], -169015154) && iLocal_1371 == 0)
	{
		if (iLocal_38 == 1 && __LIB_3__::func_564(115, 2) == 1)
		{
			__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("ASK_FOR_CUT_LIE_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], 305119592) && iLocal_1371 == 0)
	{
		if (!__LIB_0__::func_27(iLocal_35, 8))
		{
			__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("OFFER_D"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			iLocal_1340 = 1;
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], 1544633646) && iLocal_1371 == 0)
	{
		if (__LIB_0__::func_27(iLocal_35, 8))
		{
			__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("OFFER_D_ALT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			iLocal_1340 = 1;
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], 185497310) || ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], 1411149204))
	{
		if (!__LIB_0__::func_27(iLocal_35, 8))
		{
			__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("JOBDETAIL"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_35, 131072);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], 1306076711))
	{
		if (__LIB_0__::func_27(iLocal_35, 8))
		{
			__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("JOBDETAIL_ALT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_35, 131072);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], -68988721))
	{
		__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("DECLINE_RESPONSE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (iLocal_1355 == 1)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1855570124))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_643[1 /*12*/].f_8, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_635.f_3) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_635.f_3))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")))
			{
				ENTITY::DETACH_ENTITY(Local_643[1 /*12*/].f_8, false, true);
				ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Local_643[1 /*12*/].f_8, iLocal_742[0], 0, PED::GET_PED_BONE_INDEX(iLocal_742[0], 7966), 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, -1f, 1, 1, 0, 0, 2, 1, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], 1856475125))
		{
			ENTITY::DETACH_ENTITY(Local_643[1 /*12*/].f_8, false, true);
			ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Local_643[1 /*12*/].f_8, iLocal_742[0], 0, PED::GET_PED_BONE_INDEX(iLocal_742[0], 37709), 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, -1f, 1, 1, 0, 0, 2, 1, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
			func_428();
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_742[0], 334590072))
		{
			OBJECT::DELETE_OBJECT(&(Local_643[1 /*12*/].f_8));
		}
	}
}

void func_183(bool bParam0)
{
	if (bParam0)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1470))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1470, true, 0))
			{
				if (__LIB_4__::func_910(Global_35, iLocal_1470))
				{
					bLocal_1359 = false;
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_742[3]) && iLocal_1361 == 1)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_742[3], false);
						iLocal_1361 = 0;
						func_34(joaat("CRIME_ASSAULT"), iLocal_742[2], 1, 2f);
						__LIB_2__::func_478(iLocal_742[3], Global_35, func_35("HEARD_SHOTS_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					return;
				}
				LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), joaat("CRIME_BURGLARY"), 0, 0, -1);
				LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), joaat("CRIME_ASSAULT"), 0, 0, -1);
				if (iLocal_1358 == 0)
				{
					LAW::_0x710448D44A64C213(0);
					LAW::_0xC805EB785824F712(0);
					iLocal_1358 = 1;
				}
			}
			else if (iLocal_1358 == 1)
			{
				LAW::_0x710448D44A64C213(1);
				LAW::_0xC805EB785824F712(1);
				iLocal_1358 = 0;
			}
		}
	}
	else if (iLocal_1358 == 1)
	{
		LAW::_0x710448D44A64C213(1);
		LAW::_0xC805EB785824F712(1);
		iLocal_1358 = 0;
	}
}

bool func_184()
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_27(iLocal_35, 8192))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1464))
	{
		iVar0 = __LIB_5__::func_726();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (__LIB_3__::func_138(Global_35, joaat("RANSACK_PROP_DRAWER_DOUBLE_4_OPEN")) && iVar1 == ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iLocal_1464))
			{
				ENTITY::_0xD2B9C78537ED5759(uLocal_1222);
				return true;
			}
		}
	}
	else if (STREAMING::HAS_MODEL_LOADED(joaat("P_DRESSER03X")))
	{
		if (ENTITY::_0x1FF441D7954F8709(uLocal_1222))
		{
			iLocal_1464 = ENTITY::_0x4735E2A4BB83D9DA(uLocal_1222);
		}
		else
		{
			uLocal_1222 = ENTITY::_0x6F3068258A499E52(joaat("P_DRESSER03X"), -323.387f, 758.9651f, 116.4372f, 5);
		}
	}
	else
	{
		STREAMING::REQUEST_MODEL(joaat("P_DRESSER03X"), false);
	}
	return false;
}

void func_185()
{
	var uVar0;
	vector3 vVar12;
	ENTITY::SET_ENTITY_COORDS(Local_643[2 /*12*/].f_8, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_1464, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_1464, "p_DRAWER_DBL_Drawer4")), true, false, true, true);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_643[2 /*12*/].f_8, iLocal_1464, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_1464, "p_DRAWER_DBL_Drawer4"), 0.287f, 0.213f, -0.01f, 0f, 0f, -37f, false, false, false, false, 2, true, false, false);
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_635.f_2, "Bills", &uVar0, false, 0, 2))
	{
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_635.f_2, "Bills", Local_643[2 /*12*/].f_8, 0);
	vVar12 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_1464, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_1464, "p_DRAWER_DBL_Drawer4")) };
	__LIB_0__::func_325(&iLocal_1217);
	if (!__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		__LIB_3__::func_652(-323.4462f, 759.2699f, 117.259f, &iLocal_1217, 408396114, 0, "ROB_MONEY_BLIP", 0);
		if (MAP::DOES_BLIP_EXIST(iLocal_1217))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1217, "ROB_MONEY_BLIP");
		}
	}
	TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DRESSER03X", false);
	TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_DD_234", false);
	TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DRESSERVAL01X", false);
	__LIB_1__::func_283(&uLocal_1430, 0);
}

void func_186()
{
	func_435();
	__LIB_3__::func_557(&iLocal_1465, vLocal_892, vLocal_895, vLocal_898, "Restriction");
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1465))
	{
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_1465, 534496, 0, 0, -1, -1, 2);
		POPULATION::_0xB56D41A694E42E86(iLocal_1465, 534496, 0, 0, -1, -1, 2);
		uLocal_1480 = PED::_0x4C39C95AE5DB1329(iLocal_1465, 0, 15);
	}
	__LIB_3__::func_594(&uLocal_1468, &uLocal_1482, -295.0984f, 776.1786f, 117.6907f, 0f, 0f, 0f, 1.5f, 1.5f, 1.5f, 0, 0, 1, 0, 0);
}

void func_187()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1472))
	{
		__LIB_3__::func_557(&iLocal_1472, Local_1223.f_66, Local_1223.f_69, Local_1223.f_72, "ExcludeMidRange");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1473))
	{
		__LIB_3__::func_557(&iLocal_1473, Local_1223.f_75, Local_1223.f_78, Local_1223.f_81, "TriggerDialogue");
	}
}

bool func_196()
{
	char* sVar0;
	sVar0 = "callout_far_a_front";
	iLocal_1216 = __LIB_3__::func_547(iLocal_742[0], Global_35, 0.85f);
	if (iLocal_1216 == 3)
	{
		sVar0 = "callout_far_b_left";
	}
	else if (iLocal_1216 == 0)
	{
		sVar0 = "callout_far_a_front";
	}
	else if (iLocal_1216 == 2)
	{
		sVar0 = "callout_far_a_right";
	}
	else
	{
		return false;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_635, sVar0))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_635, sVar0);
		return false;
	}
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_635, sVar0, true);
	EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), iLocal_742[0], 7f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
	return true;
}

void func_198()
{
	if (__LIB_0__::func_27(iLocal_35, 4))
	{
		if (!__LIB_0__::func_75(&uLocal_1433) && !bLocal_881)
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1219);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Global_36, 1f, -1, 5f, 0, 40000f);
			__LIB_1__::func_474(iLocal_742[0], &iLocal_1219, 0, 0, 1, 1);
			Local_441.f_44 = 1;
			__LIB_1__::func_283(&uLocal_1433, 0);
		}
		if (__LIB_0__::func_264(&uLocal_1433) > 1f)
		{
			if (!bLocal_881)
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1219);
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_360[14 /*2*/], Local_360[14 /*2*/].f_1, Global_35, 4066, 4f, -4f, 67109392, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				__LIB_1__::func_474(iLocal_742[0], &iLocal_1219, 0, 0, 1, 1);
				__LIB_2__::func_315(1891783641, iLocal_742[0], 1);
				if (!__LIB_3__::func_587(iLocal_1479, 1, 1))
				{
					iLocal_1479 = __LIB_3__::func_721(iLocal_742[0], iLocal_1477, 28);
				}
				if (iLocal_38 == 1)
				{
					func_203();
				}
				bLocal_881 = true;
			}
		}
	}
}

void func_199()
{
	float fVar0;
	fVar0 = __LIB_2__::func_118(iLocal_742[0], 1, 1);
	if (((!bLocal_881 && !func_202()) && fVar0 < 15f) && __LIB_0__::func_264(&uLocal_1448) > 5f)
	{
		iLocal_1216 = __LIB_3__::func_547(iLocal_742[0], Global_35, 0.85f);
		__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 0, 0);
		if (iLocal_1216 == 3)
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_635, "callout_near_b_left", true);
		}
		else if (iLocal_1216 == 1)
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_635, "callout_near_c_behind", true);
		}
		else if (iLocal_1216 == 0)
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_635, "callout_near_a_front", true);
		}
		else if (iLocal_1216 == 2)
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_635, "callout_near_a_right", true);
		}
		EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), iLocal_742[0], 7f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
		bLocal_881 = true;
	}
}

bool func_202()
{
	if (!__LIB_2__::func_1(iLocal_742[0], 0, 1))
	{
		return false;
	}
	if (((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_742[0], "script_re@town_robbery", "callout_far_a", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_742[0], "script_re@town_robbery", "callout_far_b", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_742[0], "script_re@town_robbery", "callout_far_c", 1)) || ((((ANIMSCENE::_0x8D81E7824B7753F7(Local_635, "callout_far_a_right", 1) || ANIMSCENE::_0x8D81E7824B7753F7(Local_635, "callout_far_a_front", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(Local_635, "callout_far_b_left", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(Local_635, "callout_far_c_behind", 1)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_742[0], Local_635)))
	{
		__LIB_1__::func_148(&uLocal_1448);
		return true;
	}
	return false;
}

void func_203()
{
	float fVar0;
	if (iLocal_1352 == 0)
	{
		return;
	}
	if (__LIB_2__::func_1(iLocal_742[0], 0, 1))
	{
		fVar0 = __LIB_2__::func_118(iLocal_742[0], 1, 1);
		if (fVar0 < 60f)
		{
			if (!MAP::DOES_BLIP_EXIST(uLocal_747[0]))
			{
				__LIB_2__::func_73(iLocal_742[0], &(uLocal_747[0]), -89429847, 1679075994, 0, "RE_INTER_STRANGER");
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_747[0], "RE_INTER_STRANGER");
			}
		}
		else if (MAP::DOES_BLIP_EXIST(uLocal_747[0]))
		{
			__LIB_0__::func_325(&(uLocal_747[0]));
		}
	}
}

void func_205(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, float fParam5, float fParam6)
{
	TASK::OPEN_SEQUENCE_TASK(&iLocal_1218);
	TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sParam2, sParam3, iParam1, -1, fParam5, fParam6, iParam4 | 67108864 | 16 | 512, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_1218);
	TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_1218);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_1218);
}

void func_206()
{
	iLocal_910 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("WALK_AND_TALK_LIMIT");
	switch (Local_441.f_51.f_4)
	{
		case 0:
			VOLUME::_0x39816F6F94F385AD(iLocal_910, -298.554f, 771.1042f, 115.64f, 0f, 0f, -168.864f, 5.732f, 16.59006f, 13.342f);
			break;
		case 1:
			VOLUME::_0x39816F6F94F385AD(iLocal_910, -276.9812f, 765.787f, 120.118f, 0f, 0f, 101.1443f, 2.233379f, 9.048092f, 7.820213f);
			VOLUME::_0x39816F6F94F385AD(iLocal_910, -267.5336f, 768.861f, 115.64f, 0f, 0f, -102.7909f, 14.04811f, 9.365322f, 13.342f);
			VOLUME::_0x39816F6F94F385AD(iLocal_910, -281.2135f, 760.3973f, 115.64f, 0f, 0f, -102.7909f, 11.71382f, 2.329226f, 13.342f);
			VOLUME::_0x39816F6F94F385AD(iLocal_910, -286.3327f, 754.0031f, 118.9547f, 0f, 0f, 99.16987f, 5.646725f, 10.09923f, 4.382039f);
			break;
		case 2:
			VOLUME::_0x39816F6F94F385AD(iLocal_910, -348.7863f, 804.9543f, 115.64f, 0f, 0f, -168.864f, 14.04811f, 16.94197f, 13.342f);
			break;
	}
}

int func_210(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	if (ENTITY::IS_ENTITY_DEAD(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		return 0;
	}
	vVar0 = { __LIB_3__::func_448(iParam1) };
	vVar3 = { __LIB_3__::func_448(iParam2) };
	return __LIB_7__::func_433(uParam0, vVar0, vVar3, 0);
}

void func_214(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, int iParam5, int iParam6, float fParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
{
	struct<7> Var0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_1))
	{
		TASK::TASK_SCRIPTED_ANIMATION(iParam0, uParam2);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0x2BEED53B912537D0(PLAYER::PLAYER_ID(), iParam1, -1f);
		Var0.f_1 = 1050253722;
		Var0.f_2 = 1067030938;
		Var0.f_5 = -1082130432;
		Var0.f_6 = -1082130432;
		Var0.f_3 = iParam16;
		Var0.f_1 = iParam14;
		Var0.f_2 = iParam15;
		Var0.f_4 = iParam17;
		Var0.f_5 = iParam20;
		Var0.f_6 = iParam21;
		if (bParam8)
		{
			Var0 = 0;
		}
		else
		{
			Var0 = 1;
		}
		PLAYER::_0xCA59808E51FD67C4(PLAYER::PLAYER_ID(), &Var0);
	}
	else
	{
		TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam1, sParam4, iParam5, iParam6, fParam7, iParam9, iParam10, iParam11, iParam12, iParam13);
	}
	if (bParam19)
	{
		PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
	}
	if (bParam22)
	{
		__LIB_1__::func_735(iParam0, iParam1, iParam18);
	}
}

void func_227()
{
	switch (iLocal_1388)
	{
		case 0:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0]) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1218);
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_360[4 /*2*/], Local_360[4 /*2*/].f_1, Global_35, -1, 4f, -4f, 67109376, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1218);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_742[0], iLocal_1218);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1218);
				iLocal_1388++;
			}
			break;
		case 1:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0]) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1218);
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_360[5 /*2*/], Local_360[5 /*2*/].f_1, Global_35, -1, 4f, -4f, 67109376, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1218);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_742[0], iLocal_1218);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1218);
				iLocal_1388++;
			}
			break;
		case 2:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0]) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1218);
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_360[6 /*2*/], Local_360[6 /*2*/].f_1, Global_35, -1, 4f, -4f, 67109376, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1218);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_742[0], iLocal_1218);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1218);
				iLocal_1388++;
			}
			break;
		case 3:
			break;
	}
}

void func_237()
{
	if (__LIB_2__::func_1(iLocal_742[0], 0, 1) && !__LIB_0__::func_163(iLocal_742[0], 1435919172))
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_742[0], Global_35, -1, -1f, -1f, -1f);
		if (__LIB_0__::func_75(&uLocal_1421))
		{
			__LIB_1__::func_148(&uLocal_1421);
		}
		else
		{
			__LIB_1__::func_283(&uLocal_1421, 0);
		}
	}
	if (__LIB_2__::func_1(iLocal_742[0], 0, 1) && __LIB_0__::func_163(iLocal_742[0], -875674219))
	{
		if (__LIB_0__::func_94(Global_35, Local_1223.f_6, 1) > 4f)
		{
			TASK::_TASK_USE_SCENARIO_POINT(iLocal_742[0], iLocal_1220, 0, 0, true, false, 0, false, -1f, false);
		}
	}
}

void func_238()
{
	if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		if (iLocal_1351 == 0)
		{
			iLocal_1351 = 1;
			__LIB_0__::func_325(&iLocal_1217);
			__LIB_3__::func_662("ROB_OBJ06", 7500, 0, 0, -1, -1, 0);
			__LIB_2__::func_450(Local_441.f_162, 0.001f, 1);
			TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_DD_234", false);
		}
	}
	else if (iLocal_1351 == 1)
	{
		if (__LIB_0__::func_27(iLocal_35, 8192))
		{
			if (!MAP::DOES_BLIP_EXIST(iLocal_1217))
			{
				__LIB_3__::func_652(-323.4462f, 759.2699f, 117.259f, &iLocal_1217, 408396114, 0, "ROB_MONEY_BLIP", 0);
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_1217))
			{
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1217, "ROB_MONEY_BLIP");
			}
			__LIB_2__::func_450(Local_441.f_162, 1.5f, 1);
		}
		else if (iLocal_1044 == 22)
		{
			if (!MAP::DOES_BLIP_EXIST(iLocal_1217))
			{
				iLocal_1217 = MAP::_0xA6EF0C54A3443E70(1259054292, iLocal_1470);
				if (MAP::DOES_BLIP_EXIST(iLocal_1217))
				{
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1217, "ROB_HOTEL_BLIP");
				}
			}
			TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_DD_234", true);
		}
		else
		{
			if (!MAP::DOES_BLIP_EXIST(iLocal_1217))
			{
				iLocal_1217 = MAP::_0xA6EF0C54A3443E70(1259054292, iLocal_1469);
				if (MAP::DOES_BLIP_EXIST(iLocal_1217))
				{
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1217, "ROB_HOTEL_BLIP");
				}
			}
			TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_DD_234", true);
		}
		__LIB_3__::func_662("ROB_OBJ02B", 7500, 0, 0, -1, -1, 0);
		iLocal_1351 = 0;
	}
}

void func_239()
{
	struct<7> Var0;
	if (ENTITY::IS_ENTITY_AT_ENTITY(Global_35, iLocal_742[0], 4f, 4f, 4f, false, true, 0))
	{
		if (!__LIB_0__::func_27(iLocal_35, 64))
		{
			if (__LIB_0__::func_264(&uLocal_1424) > 4f && __LIB_2__::func_227(0, 1, 0, 0))
			{
				__LIB_1__::func_683(&iLocal_35, 64);
				__LIB_1__::func_148(&uLocal_1424);
			}
			else if (!__LIB_0__::func_75(&uLocal_1424))
			{
				__LIB_1__::func_283(&uLocal_1424, 0);
			}
		}
		else if (!__LIB_0__::func_27(iLocal_35, 65536))
		{
			if (__LIB_0__::func_264(&uLocal_1424) > 7f && __LIB_2__::func_227(0, 1, 0, 0))
			{
				__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("GET_ON_ALREADY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_683(&iLocal_35, 65536);
				__LIB_1__::func_148(&uLocal_1424);
			}
		}
		else if (__LIB_0__::func_264(&uLocal_1424) > 15f && __LIB_2__::func_227(0, 1, 0, 0))
		{
			__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("TIME_OUT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_0__::func_325(&iLocal_1217);
			Var0.f_3 = 1065353216;
			Var0.f_4 = -1;
			Var0.f_5 = 1048576000;
			Var0.f_6 = 1193033728;
			Var0 = { Local_1223.f_93 };
			Var0.f_3 = 1f;
			Var0.f_4 = -1;
			Var0.f_5 = 0.25f;
			Var0.f_6 = Local_1223.f_96;
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1219);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1219);
			TASK::TASK_FOLLOW_PAVEMENT_TO_COORD(0, &Var0);
			__LIB_1__::func_473(0, joaat("WORLD_HUMAN_SMOKE"), -1, 1, 0, -1082130432 /* Float: -1f */);
			__LIB_1__::func_474(iLocal_742[0], &iLocal_1219, 0, 0, 1, 1);
			PED::SET_PED_KEEP_TASK(iLocal_742[0], true);
			iLocal_978 = 3;
			fLocal_1330 = 15f;
			__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 0, 0);
			__LIB_0__::func_37(&uLocal_1424);
			func_12();
		}
	}
}

void func_240()
{
	if (__LIB_0__::func_27(iLocal_35, 8388608))
	{
		return;
	}
	switch (iLocal_1389)
	{
		case 0:
			iLocal_742[3] = func_245(Local_752[3 /*32*/].f_1, &(Local_752[3 /*32*/]), -325.5149f, 772.9968f, 116.4359f, 4.96f, 1, 0, 1, 0, 1);
			__LIB_2__::func_915(iLocal_742[3], joaat("WORLD_HUMAN_SHOPKEEPER"), -325.5172f, 773.0236f, 116.4359f, 11.13f, -1, 1, 1, 0, -1082130432 /* Float: -1f */);
			iLocal_1389++;
			if (iLocal_1373 == 0)
			{
				iLocal_1373 = 1;
			}
			__LIB_2__::func_133(iLocal_742[3], &(Local_752[3 /*32*/].f_23), 0);
			break;
		case 1:
			if (__LIB_2__::func_1(iLocal_742[3], 0, 1) && !__LIB_0__::func_163(iLocal_742[3], 1435919172))
			{
				__LIB_2__::func_915(iLocal_742[3], joaat("WORLD_HUMAN_SHOPKEEPER"), -325.5172f, 773.0236f, 116.4359f, 11.13f, -1, 0, 1, 0, -1082130432 /* Float: -1f */);
				__LIB_2__::func_133(iLocal_742[3], &(Local_752[3 /*32*/].f_23), 0);
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1471))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1471, true, 0))
				{
					__LIB_1__::func_283(&uLocal_1415, 0);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_742[3]) && ENTITY::IS_ENTITY_IN_VOLUME(iLocal_742[3], iLocal_1471, true, 0))
					{
						__LIB_2__::func_133(iLocal_742[3], &(Local_752[3 /*32*/].f_23), 0);
						__LIB_2__::func_461(0);
						if (func_427())
						{
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_1219);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_1219);
							TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, "Default_Nervous", 2f, 0f, 4);
							__LIB_2__::func_915(0, joaat("WORLD_HUMAN_SHOPKEEPER"), -325.5172f, 773.0236f, 116.4359f, 11.13f, -1, 1, 0, 0, -1082130432 /* Float: -1f */);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_1219);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_742[3], iLocal_1219);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_1219);
							PED::SET_PED_KEEP_TASK(iLocal_742[3], true);
						}
						if (!func_427())
						{
							__LIB_2__::func_478(iLocal_742[3], Global_35, func_35("NEED_A_ROOM"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							__LIB_2__::func_478(iLocal_742[3], Global_35, func_35("NOT_YOU"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_742[3], &Local_692);
					}
					iLocal_1389++;
				}
			}
			else
			{
				__LIB_3__::func_557(&iLocal_1471, Local_1223.f_26, Local_1223.f_29, Local_1223.f_32, "HotelLobby");
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_742[3]) && ENTITY::IS_ENTITY_IN_VOLUME(iLocal_742[3], iLocal_1471, true, 0))
				{
					__LIB_2__::func_461(0);
					__LIB_2__::func_478(Global_35, Global_35, func_35("VISITING"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				iLocal_1389++;
			}
			break;
		case 3:
			if (!__LIB_2__::func_136(Global_35, 0) && !__LIB_2__::func_136(iLocal_742[3], 0))
			{
				__LIB_2__::func_411(&(Local_1145[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_1145[1 /*17*/]), 1, 0);
				iLocal_1389++;
			}
			break;
		case 4:
			if (!__LIB_0__::func_27(iLocal_35, 8388608))
			{
				__LIB_1__::func_683(&iLocal_35, 8388608);
			}
			break;
	}
}

void func_243(vector3 vParam0, var uParam3)
{
	__LIB_3__::func_623(&Local_979);
	Local_979.f_1 = Global_35;
	Local_979.f_8 = { vParam0 };
	Local_979.f_19 = uParam3;
	Local_979.f_18 = 0f;
	Local_979.f_4 = 1;
	Local_979.f_14 = { Global_36 };
	__LIB_1__::func_336(&(Local_979.f_23), 1024);
	__LIB_1__::func_336(&(Local_979.f_23), 1);
	__LIB_3__::func_995(&Local_979, 106);
	MAP::DISPLAY_RADAR(false);
}

int func_245(int iParam0, var uParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	if (bParam6)
	{
		__LIB_4__::func_420(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && __LIB_3__::func_278(uParam1))
	{
		iVar0 = PED::_0xEAF682A14F8E5F53(uParam1->f_5, vParam2, bParam5, 1, 1, iParam9, iParam10);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = __LIB_3__::func_370(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam1->f_5))
		{
			PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = __LIB_3__::func_370(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	else
	{
		EVENT::_0x9520175B35E2268D(iVar0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		if (uParam1->f_10)
		{
			if (PED::IS_PED_HUMAN(iVar0))
			{
				PED::_0x0FB1BA7FF73B41E1(iVar0, uParam1->f_4, 0);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_23)) && !__LIB_0__::func_125(iVar0))
		{
			__LIB_2__::func_133(iVar0, &(uParam1->f_23), 0);
		}
		if (__LIB_0__::func_125(iVar0))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 48, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 307, true);
		}
		if (__LIB_3__::func_242(&(uParam1->f_22)))
		{
			PED::SET_PED_CAN_RAGDOLL(iVar0, true);
			PED::SET_PED_TO_RAGDOLL(iVar0, 1000, 1000, 1, false, false, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 186, !__LIB_3__::func_243(&(uParam1->f_22)));
			__LIB_1__::func_864(iVar0, __LIB_3__::func_244(&(uParam1->f_22)), 0);
		}
		else
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar0);
		}
		if (__LIB_3__::func_245(&(uParam1->f_22)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		}
		if (__LIB_3__::func_246(&(uParam1->f_22)))
		{
			__LIB_3__::func_174(iVar0, 1);
		}
		ENTITY::_0xA91E6CF94404E8C9(iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 6, __LIB_3__::func_247(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(iVar0, 393, true);
		if (!__LIB_0__::func_27(uParam1->f_22, 8192))
		{
			ENTITY::_SET_ENTITY_SOMETHING(iVar0, true);
		}
		if (!__LIB_0__::func_125(iVar0))
		{
			__LIB_3__::func_176(iVar0, !__LIB_3__::func_175(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 4, __LIB_3__::func_177(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 297, !__LIB_3__::func_279(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 317, !__LIB_3__::func_279(&(uParam1->f_22)));
			if (uParam1->f_31 != joaat("REL_NO_RELATIONSHIP"))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, uParam1->f_31);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::IS_PED_HUMAN(iVar0))
		{
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatPed", true);
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatCriminal", *uParam1 == 22);
		}
	}
	return iVar0;
}

void func_249()
{
	if (__LIB_2__::func_1(iLocal_742[2], 0, 1) && __LIB_2__::func_1(iLocal_742[0], 0, 1))
	{
		if (__LIB_0__::func_665(iLocal_742[2], iLocal_742[0], 1, 1) < 15f)
		{
			PED::_0xF1C03A5352243A30(iLocal_742[0]);
			TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_742[0], Global_35, 2, 0, -1082130432 /* Float: -1f */, -1, 0);
			PED::SET_PED_KEEP_TASK(iLocal_742[0], true);
			iLocal_1351 = 1;
			__LIB_2__::func_461(0);
			__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("AGGRO"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 1, 0);
			func_12();
		}
	}
}

void func_255()
{
	switch (iLocal_1390)
	{
		case 0:
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1471))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1471, true, 0))
				{
					__LIB_1__::func_283(&uLocal_1415, 0);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_742[3]) && ENTITY::IS_ENTITY_IN_VOLUME(iLocal_742[3], iLocal_1471, true, 0))
					{
						__LIB_2__::func_461(0);
						if (iLocal_1350 == 0)
						{
							__LIB_2__::func_478(iLocal_742[3], Global_35, func_35("FIST_FIGHT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else if (iLocal_1361 == 1)
						{
							__LIB_2__::func_478(iLocal_742[3], Global_35, func_35("HEARD_SHOTS_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iLocal_1361 = 0;
							func_34(joaat("CRIME_ASSAULT"), iLocal_742[2], 1, 2f);
						}
					}
					iLocal_1390++;
				}
			}
			else
			{
				__LIB_3__::func_557(&iLocal_1471, Local_1223.f_26, Local_1223.f_29, Local_1223.f_32, "HotelLobby");
			}
			break;
		case 1:
			iLocal_978 = 6;
			iLocal_1363 = 0;
			fLocal_1330 = 5f;
			__LIB_2__::func_602(&(Local_1145[0 /*17*/]), "RE_INTER_DEFUSE", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
			__LIB_2__::func_451(&(Local_1046[0 /*21*/]), 0);
			__LIB_2__::func_411(&(Local_1145[0 /*17*/]), 1, 0);
			__LIB_2__::func_411(&(Local_1145[1 /*17*/]), 1, 0);
			iLocal_1390++;
			break;
		case 2:
			__LIB_1__::func_683(&iLocal_35, 8388608);
			iLocal_1390++;
			break;
		case 3:
			break;
	}
}

void func_256()
{
	float fVar0;
	if (!__LIB_0__::func_27(iLocal_35, 32768))
	{
		fVar0 = __LIB_2__::func_118(iLocal_742[0], 1, 1);
		if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			if (iLocal_1351 == 0)
			{
				iLocal_1351 = 1;
				bLocal_1353 = true;
				iLocal_1352 = 0;
				__LIB_0__::func_325(&(uLocal_747[0]));
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 3f);
				__LIB_3__::func_662("ROB_OBJ06", 7500, 0, 0, -1, -1, 0);
			}
		}
		else
		{
			if (!MAP::DOES_BLIP_EXIST(uLocal_747[0]))
			{
				__LIB_2__::func_73(iLocal_742[0], &(uLocal_747[0]), 408396114, 580546400, 0, "RE_INTER_STRANGER");
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_747[0], "RE_INTER_STRANGER");
				__LIB_3__::func_662("ROB_OBJ04", 7500, 0, 0, -1, -1, 0);
			}
			iLocal_1351 = 0;
		}
		if ((fVar0 < fLocal_1328 && __LIB_2__::func_215(iLocal_742[0], Global_35, 0, 20f, 0)) && __LIB_1__::func_472(iLocal_742[0], 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
		{
			PED::_0xF1C03A5352243A30(iLocal_742[0]);
			if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_742[0], Global_35, 2, 0, -1082130432 /* Float: -1f */, -1, 0);
				PED::SET_PED_KEEP_TASK(iLocal_742[0], true);
				__LIB_2__::func_461(0);
				__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("WANTED"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_0__::func_769();
				func_12();
			}
			else
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1219);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1219);
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_360[23 /*2*/], Local_360[23 /*2*/].f_1, Global_35, 5533, 4f, -4f, 67109392, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1219);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_742[0], iLocal_1219);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1219);
				__LIB_2__::func_461(0);
				__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("RETURN_CALLOVER"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			__LIB_1__::func_683(&iLocal_35, 32768);
		}
	}
}

void func_257()
{
	if (__LIB_0__::func_665(Global_35, iLocal_742[0], 1, 1) > fLocal_1330)
	{
		__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 0, 0);
	}
	else
	{
		__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 1, 0);
		__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 1, 0);
	}
}

bool func_258()
{
	vector3 vVar0;
	float fVar3;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_635.f_3))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_635.f_3, false))
		{
			fLocal_1327 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_635.f_3);
		}
	}
	switch (iLocal_977)
	{
		case 0:
			if (!__LIB_0__::func_75(&uLocal_1427))
			{
				__LIB_2__::func_462(&uLocal_1427, 5f, 0);
			}
			if (__LIB_2__::func_118(iLocal_742[0], 1, 1) < 15f && __LIB_0__::func_27(iLocal_35, 1073741824 /* Float: 2f */))
			{
				switch (iLocal_1393)
				{
					case 0:
						if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0]) && __LIB_0__::func_264(&uLocal_1427) > 6f)
						{
							func_205(iLocal_742[0], Global_35, Local_360[11 /*2*/], Local_360[11 /*2*/].f_1, 528, 1082130432 /* Float: 4f */, -1077936128 /* Float: -1.5f */);
							__LIB_1__::func_683(&iLocal_35, 16);
							__LIB_1__::func_148(&uLocal_1427);
							iLocal_1393++;
						}
						break;
					case 1:
						if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0]) && __LIB_0__::func_264(&uLocal_1427) > 8f)
						{
							func_205(iLocal_742[0], Global_35, Local_360[12 /*2*/], Local_360[12 /*2*/].f_1, 528, 1082130432 /* Float: 4f */, -1077936128 /* Float: -1.5f */);
							__LIB_1__::func_148(&uLocal_1427);
							iLocal_1393++;
						}
						break;
					case 2:
						if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0]) && __LIB_0__::func_264(&uLocal_1427) > 10f)
						{
							func_205(iLocal_742[0], Global_35, Local_360[13 /*2*/], Local_360[13 /*2*/].f_1, 528, 1082130432 /* Float: 4f */, -1077936128 /* Float: -1.5f */);
							__LIB_1__::func_683(&iLocal_35, 128);
							__LIB_1__::func_148(&uLocal_1427);
							iLocal_1393++;
						}
						break;
				}
			}
			break;
		case 8:
			if (!__LIB_0__::func_27(iLocal_35, 4096))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_742[0], true, false) };
				fVar3 = ENTITY::GET_ENTITY_HEADING(iLocal_742[0]);
				__LIB_2__::func_106(&vVar0, 50, 10, 0);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_635.f_3, vVar0, 0f, 0f, fVar3, 2);
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_635.f_3, true, false))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_635.f_3, "pbl_idle", true);
					if (__LIB_0__::func_27(iLocal_35, 4))
					{
						TASK::CLEAR_PED_TASKS(iLocal_742[0], true, false);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_635.f_3, "pedStranger", iLocal_742[0], 0);
						if (iLocal_1355 == 0)
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_635.f_3, "objMoney", Local_643[1 /*12*/].f_8, 0);
						}
					}
					ANIMSCENE::START_ANIM_SCENE(Local_635.f_3);
				}
				__LIB_1__::func_683(&iLocal_35, 4096);
			}
			else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_635.f_3))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_635.f_3, false))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_635.f_3, "pedPlayer", &Local_912, true, "pbl_handover", 2))
					{
						if (!__LIB_0__::func_86(Local_912) && !__LIB_0__::func_86(Local_912.f_3))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
							iLocal_1380 = 0;
							TASK::OPEN_SEQUENCE_TASK(&iLocal_1219);
							TASK::TASK_ACHIEVE_HEADING(0, Local_912.f_3.f_2, 0);
							TASK::TASK_STAND_STILL(0, 500);
							__LIB_1__::func_474(Global_35, &iLocal_1219, 0, 0, 1, 1);
							iLocal_977 = 2;
							__LIB_3__::func_666(115, 0, 3, 0, 0);
						}
					}
					else if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_635.f_3, "pbl_handover"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_635.f_3, "pbl_handover");
					}
				}
				else
				{
					ANIMSCENE::START_ANIM_SCENE(Local_635.f_3);
				}
			}
			break;
		case 2:
			func_243(Local_912, Local_912.f_3.f_2);
			if (ENTITY::IS_ENTITY_AT_ENTITY(PED::_GET_LAST_MOUNT(Global_35), iLocal_742[0], 4f, 4f, 4f, false, true, 0))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(PED::_GET_LAST_MOUNT(Global_35), iLocal_742[0], 1, 0, 7f, -1, 0);
			}
			iLocal_977 = 3;
			break;
		case 3:
			if (__LIB_3__::func_995(&Local_979, 106))
			{
				TASK::TASK_STAND_STILL(Global_35, 5000);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
				iLocal_1380 = 0;
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_635.f_3, false))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_635.f_3, "pbl_handover", true);
					func_428();
					Local_692.f_3 = Global_35;
					Local_717.f_3 = iLocal_742[0];
					if (__LIB_0__::func_27(iLocal_35, 4))
					{
						iLocal_977 = 4;
					}
					else
					{
						iLocal_977 = 4;
					}
				}
			}
			break;
		case 4:
			_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Local_717);
			if (fLocal_1327 > 0f)
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					__LIB_2__::func_478(Global_35, iLocal_742[0], func_35("RETURN_CUT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_643[1 /*12*/].f_8))
				{
					if (iLocal_1355 == 0)
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_635.f_3, "objMoney", Local_643[1 /*12*/].f_8, 0);
					}
				}
				iLocal_977 = 5;
			}
			break;
		case 5:
			_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Local_717);
			if (!__LIB_0__::func_27(iLocal_35, 268435456))
			{
				if (fLocal_1327 > 0.52f)
				{
					__LIB_1__::func_432(iLocal_1387, 0, 0, 1, 1);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 256, false);
					iLocal_1380 = 1;
					func_510(iLocal_742[0], 1);
					__LIB_2__::func_190(iLocal_742[0], iLocal_1387);
					__LIB_1__::func_683(&iLocal_35, 268435456);
				}
			}
			if ((fLocal_1327 > 0.6f && !__LIB_0__::func_27(iLocal_35, 4)) || ((fLocal_1327 > 0.6f && __LIB_0__::func_27(iLocal_35, 4)) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0])))
			{
				if (!__LIB_0__::func_27(iLocal_35, 4))
				{
					__LIB_2__::func_461(0);
					__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("MONEY_RETURN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_461(0);
					__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("BOUTTIME"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				iLocal_977 = 6;
				MAP::DISPLAY_RADAR(true);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_635.f_3, "pedPlayer", Global_35);
			}
			break;
		case 6:
			_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Local_717);
			if (((!__LIB_0__::func_27(iLocal_35, 256) && fLocal_1327 > 0.8f) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0])) && __LIB_2__::func_227(-6f, 1, 0, 0))
			{
				func_512();
				__LIB_1__::func_683(&iLocal_35, 256);
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_635.f_3, false) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_742[0]))
			{
				__LIB_2__::func_461(0);
				if (!__LIB_0__::func_27(iLocal_35, 4))
				{
					__LIB_2__::func_478(Global_35, iLocal_742[0], func_35("WELCOME"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				func_513();
				__LIB_3__::func_319(Local_635.f_3);
				iLocal_977 = 7;
				iLocal_1044 = 32;
				return true;
			}
			break;
		case 9:
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				func_205(iLocal_742[0], Global_35, Local_360[16 /*2*/], Local_360[16 /*2*/].f_1, 528, 1082130432 /* Float: 4f */, -1077936128 /* Float: -1.5f */);
				PED::_0x89F5E7ADECCCB49C(iLocal_742[0], "angry");
				iLocal_977 = 10;
			}
			break;
		case 10:
			if (__LIB_2__::func_227(-4f, 1, 0, 0) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_742[0], Local_360[16 /*2*/], Local_360[16 /*2*/].f_1, 1))
			{
				__LIB_2__::func_461(0);
				__LIB_2__::func_478(iLocal_742[0], Global_35, func_35("NO_MONEY_RETURN_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_977 = 11;
			}
			break;
		case 11:
			if (__LIB_2__::func_227(-6.5f, 1, 0, 0))
			{
				func_428();
				__LIB_3__::func_319(Local_635.f_3);
				iLocal_977 = 7;
				iLocal_1044 = 32;
				func_515();
			}
			break;
		case 7:
			break;
	}
	return false;
}

char* func_314(int iParam0)
{
	switch (iParam0)
	{
		case 24:
			return "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_BASE";
		case 28:
			return "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_STREAMED";
		case 30:
			return "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_STREAMED";
		case 32:
			return "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@LOCO@ATTACKER";
		case 25:
			return "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_BASE";
		case 29:
			return "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_STREAMED";
		case 31:
			return "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_STREAMED";
		case 33:
			return "MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@LOCO@VICTIM";
		default:
			break;
	}
	return "INVALID DICT";
}

bool func_335(var uParam0, var uParam1, vector3 vParam2, float fParam5, bool bParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	struct<4> Var2;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1) && uParam0->f_1 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && uParam0->f_12 != 0)
		{
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_12))
			{
				Var2 = { __LIB_3__::func_357(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
				Var2.f_3 = __LIB_3__::func_361(fParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = func_245(uParam0->f_12, uParam0, Var2, Var2.f_3, 1, 1, uParam0->f_14, 0, 1);
				if (__LIB_3__::func_395(uParam0->f_1, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
					{
						__LIB_1__::func_991(uParam0->f_11, 0);
					}
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(uParam0->f_12, false);
			}
			return false;
		}
		else
		{
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_1))
			{
				bVar0 = (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && uParam0->f_13);
				if (bVar0)
				{
					Var2 = { __LIB_3__::func_357(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
					Var2.f_3 = __LIB_3__::func_361(fParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					bVar1 = (bParam6 || __LIB_3__::func_325(&(uParam0->f_22)));
					Var2 = { __LIB_3__::func_357(vParam2, fParam5, uParam0->f_6, bVar1) };
					Var2.f_3 = __LIB_3__::func_361(fParam5, uParam0->f_9, bVar1);
				}
				*uParam1 = func_245(uParam0->f_1, uParam0, Var2, Var2.f_3, iParam7, PED::_IS_THIS_MODEL_A_HORSE(uParam0->f_1), uParam0->f_14, 0, 1);
				PED::SET_PED_CONFIG_FLAG(*uParam1, 307, true);
				if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
				{
					if (bVar0)
					{
						__LIB_1__::func_571(*uParam1, uParam0->f_11, 1, -1, 1);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_23)))
					{
						__LIB_2__::func_133(*uParam1, &(uParam0->f_23), 0);
					}
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(uParam0->f_1, false);
			}
			return false;
		}
	}
	return true;
}

void func_420()
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	fVar0 = __LIB_0__::func_665(Global_35, iLocal_742[0], 1, 1);
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iLocal_742[0], true, false) };
	fVar4 = (Global_36.f_2 - vVar1.z);
	fVar4 = MISC::ABSF(fVar4);
	if ((((((fVar0 > 5f || PED::IS_PED_ON_MOUNT(Global_35)) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, true)) || __LIB_3__::func_291(Global_35, 1)) || fVar4 >= 1f) || PED::IS_PED_IN_COVER(Global_35, false, true)) || !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_742[0], Global_35, 17))
	{
		if (iLocal_1379 == 1)
		{
			__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 0, 0);
			__LIB_2__::func_451(&(Local_1046[0 /*21*/]), 0);
			iLocal_1379 = 0;
		}
	}
	else if (iLocal_1379 == 0)
	{
		if (__LIB_0__::func_492(1) >= iLocal_1387)
		{
			__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 1, 0);
		}
		__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 1, 0);
		__LIB_2__::func_451(&(Local_1046[0 /*21*/]), 0);
		iLocal_1379 = 1;
	}
}

int func_421()
{
	if (iLocal_1363 == 1)
	{
		return __LIB_2__::func_340(3, 0, 0) | 64;
	}
	return 346;
}

int func_422(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_638(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

void func_424()
{
	if (__LIB_0__::func_27(iLocal_35, 2) || __LIB_0__::func_27(iLocal_35, 4))
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(Local_20.f_1))
		{
			Local_20.f_1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-281.844f, 811.7524f, 119.7714f, 0f, 0f, -79.99864f, 3.454651f, 2.004745f, 2.801613f, "Variation_2_volLootArea");
		}
	}
	else
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(Local_20.f_1))
		{
			Local_20.f_1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-324.6489f, 759.1587f, 117.962f, 0f, 0f, 11.5326f, 5.967499f, 4.369645f, 3.055771f, "volLootArea");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(Local_20.f_2))
		{
			Local_20.f_2 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-322.2972f, 766.4644f, 121.6935f, 0f, 0f, -80.22671f, 18.60986f, 13.51953f, 10.92944f, "volBlipArea");
		}
	}
}

void func_425()
{
	__LIB_3__::func_461(115, 6, 1);
	if (__LIB_0__::func_181())
	{
		__LIB_3__::func_537(115, 3, 0);
	}
	else
	{
		__LIB_3__::func_461(115, 3, 0);
	}
}

bool func_427()
{
	if (__LIB_0__::func_181() || !__LIB_2__::func_410(6))
	{
		return false;
	}
	else
	{
		return true;
	}
	return false;
}

void func_428()
{
	__LIB_2__::func_602(&(Local_1110[0 /*17*/]), "RE_INTER_POS", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
	__LIB_2__::func_602(&(Local_1110[1 /*17*/]), "RE_INTER_ANTAGONIZE", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
	__LIB_2__::func_411(&(Local_1110[0 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(Local_1110[1 /*17*/]), 0, 0);
}

void func_435()
{
	switch (Local_441.f_51.f_4)
	{
		case 0:
			vLocal_892 = { -298.229f, 769.452f, 115.64f };
			vLocal_895 = { 0f, 0f, -168.864f };
			vLocal_898 = { 5.732f, 23.596f, 13.342f };
			break;
		case 1:
			vLocal_892 = { -271.004f, 766.571f, 115.64f };
			vLocal_895 = { 0f, 0f, 106.589f };
			vLocal_898 = { 11.604f, 26.212f, 13.342f };
			break;
		case 2:
			vLocal_892 = { -344.188f, 798.893f, 115.64f };
			vLocal_895 = { 0f, 0f, -168.864f };
			vLocal_898 = { 8.738f, 23.596f, 13.342f };
			break;
	}
	vLocal_901 = { -326.5955f, 760.1794f, 117.5246f };
	vLocal_904 = { 0f, 0f, 7.166288f };
	vLocal_907 = { 2.126068f, 4.313558f, 2.5f };
}

void func_510(var uParam0, int iParam1)
{
	PED::_0x6569F31A01B4C097(uParam0, 1, iParam1);
	PED::_0x6569F31A01B4C097(uParam0, 0, iParam1);
	PED::_0x6569F31A01B4C097(uParam0, 4, iParam1);
}

void func_512()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1475))
	{
		iLocal_1475 = VOLUME::_CREATE_VOLUME_CYLINDER(Global_36, 0f, 0f, ENTITY::GET_ENTITY_HEADING(Global_35), 1f, 0.7f, 3f);
		PED::_0x7C00CFC48A782DC0(iLocal_1475, Global_35, 0f, -0.25f, 0f, 0f, 0f, 0f, 2, 1);
		PED::_0x19C975B81BE53C28(iLocal_1475, Global_35);
		PATHFIND::_0x19C7567D2F2287D6(iLocal_1475, 7);
	}
}

void func_513()
{
	__LIB_3__::func_461(115, 6, 0);
	__LIB_3__::func_461(115, 1, 1);
	__LIB_3__::func_218(115, 2097152);
}

void func_515()
{
	__LIB_3__::func_461(115, 2, 1);
}

int func_638(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
					if (__LIB_17__::func_773(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_638(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_17__::func_774(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_17__::func_775(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					__LIB_17__::func_776(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_17__::func_775(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_17__::func_774(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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

