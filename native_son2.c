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
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	char* sLocal_36 = NULL;
	char* sLocal_37 = NULL;
	char* sLocal_38 = NULL;
	char[] cLocal_39[8] = 0;
	char* sLocal_40 = NULL;
	char* sLocal_41 = NULL;
	char* sLocal_42 = NULL;
	char* sLocal_43 = NULL;
	char* sLocal_44 = NULL;
	char[] cLocal_45[8] = 0;
	char[] cLocal_46[8] = 0;
	char[] cLocal_47[8] = 0;
	char[] cLocal_48[8] = 0;
	char[] cLocal_49[8] = 0;
	char* sLocal_50 = NULL;
	char* sLocal_51 = NULL;
	char* sLocal_52 = NULL;
	char* sLocal_53 = NULL;
	char* sLocal_54 = NULL;
	char* sLocal_55 = NULL;
	char* sLocal_56 = NULL;
	char* sLocal_57 = NULL;
	char* sLocal_58 = NULL;
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
	struct<17> Local_83 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<17> Local_100 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<17> Local_117 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<17> Local_134[3];
	struct<19> Local_186[4];
	struct<10> Local_263[5];
	vector3 vLocal_314[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_324[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
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
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	int iLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	vector3 vLocal_379 = { 0f, 0f, 0f };
	vector3 vLocal_382 = { 0f, 0f, 0f };
	vector3 vLocal_385 = { 0f, 0f, 0f };
	vector3 vLocal_388 = { 0f, 0f, 0f };
	vector3 vLocal_391 = { 0f, 0f, 0f };
	vector3 vLocal_394 = { 0f, 0f, 0f };
	vector3 vLocal_397 = { 0f, 0f, 0f };
	bool bLocal_400 = false;
	bool bLocal_401 = false;
	bool bLocal_402 = false;
	float fLocal_403 = 0f;
	float fLocal_404 = 0f;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	var uLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	struct<4> Local_419 = { 0, 0, 0, 0 } ;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	struct<26> Local_429[12];
	struct<26> Local_742[6];
	struct<26> Local_899[12];
	struct<26> Local_1212[6];
	struct<26> Local_1369[5];
	struct<26> Local_1500[5];
	struct<26> Local_1631[5];
	struct<26> Local_1762[10];
	struct<26> Local_2023[5];
	struct<26> Local_2154[2];
	struct<26> Local_2207[2];
	struct<26> Local_2260[6];
	struct<26> Local_2417 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_2443 = 0;
	int iLocal_2444 = 0;
	int iLocal_2445 = 0;
	float fLocal_2446 = 0f;
	float fLocal_2447 = 0f;
	float fLocal_2448 = 0f;
	vector3 vLocal_2449 = { 0f, 0f, 0f };
	float fLocal_2452 = 0f;
	int iLocal_2453 = 0;
	int iLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	int iLocal_2467 = 0;
	int iLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	struct<4> Local_2485 = { 0, 0, 0, 0 } ;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	bool bLocal_2497 = false;
	int iLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	int iLocal_2502 = 0;
	var uLocal_2503 = 0;
	int iLocal_2504[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_2513 = 0f;
	char* sLocal_2514[6] = { NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_2521 = 0;
	int iLocal_2522 = 0;
	int iLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	struct<26> Local_2526[5];
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	bool bLocal_2669 = false;
	float fLocal_2670 = 0f;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	struct<2> Local_2674 = { -1, 0 } ;
	struct<2> Local_2676 = { -1, 0 } ;
	struct<2> Local_2678 = { -1, 0 } ;
	struct<2> Local_2680[3];
	bool bLocal_2687 = false;
	bool bLocal_2688 = false;
	bool bLocal_2689 = false;
	char* sLocal_2690 = NULL;
	int iLocal_2691 = 0;
	struct<26> Local_2692[12];
	int iLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	int iLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	int iLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	int iLocal_3083 = 0;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	struct<19> Local_3109 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	int iLocal_3137 = 0;
	int iLocal_3138 = 0;
	int iLocal_3139 = 0;
	int iLocal_3140 = 0;
	int iLocal_3141 = 0;
	int iLocal_3142 = 0;
	int iLocal_3143 = 0;
	int iLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	int iLocal_3148 = 0;
	int iLocal_3149 = 0;
	int iLocal_3150 = 0;
	int iLocal_3151 = 0;
	bool bLocal_3152 = false;
	vector3 vLocal_3153 = { 0f, 0f, 0f };
	int iLocal_3156 = 0;
	int iLocal_3157 = 0;
	int iLocal_3158 = 0;
	int iLocal_3159 = 0;
	struct<12> Local_3160[4];
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 0;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 0;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 0;
	var uLocal_3220 = 0;
	var uLocal_3221[4] = { 0, 0, 0, 0 };
	int iLocal_3226 = 0;
	float fLocal_3227 = 0f;
	char* sLocal_3228 = NULL;
	bool bLocal_3229 = false;
	float fLocal_3230 = 0f;
	int iLocal_3231 = 0;
	int iLocal_3232 = 0;
	int iLocal_3233 = 0;
	int iLocal_3234 = 0;
	var uLocal_3235 = 0;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
	var uLocal_3239 = 0;
	var uLocal_3240 = 0;
	int iLocal_3241 = 0;
	int iLocal_3242 = 0;
	int iLocal_3243 = 0;
	var uLocal_3244 = 0;
	var uLocal_3245 = 0;
	var uLocal_3246 = 0;
	int iLocal_3247 = 0;
	int iLocal_3248 = 0;
	var uLocal_3249 = 0;
	var uLocal_3250 = 0;
	var uLocal_3251 = 0;
	var uLocal_3252 = 0;
	var uLocal_3253 = 27;
	var uLocal_3254 = 8;
	var uLocal_3255 = 0;
	var uLocal_3256 = 0;
	var uLocal_3257 = 0;
	var uLocal_3258 = 0;
	var uLocal_3259 = 0;
	var uLocal_3260 = 0;
	var uLocal_3261 = 0;
	var uLocal_3262 = 0;
	var uLocal_3263 = 0;
	var uLocal_3264 = 0;
	var uLocal_3265 = 0;
	var uLocal_3266 = 0;
	var uLocal_3267 = 0;
	var uLocal_3268 = 0;
	var uLocal_3269 = 0;
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = 0;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = -1;
	var uLocal_3276 = 8;
	var uLocal_3277 = 0;
	var uLocal_3278 = 0;
	var uLocal_3279 = 0;
	var uLocal_3280 = 0;
	var uLocal_3281 = 0;
	var uLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	var uLocal_3293 = 0;
	var uLocal_3294 = 0;
	var uLocal_3295 = 0;
	var uLocal_3296 = 0;
	var uLocal_3297 = -1;
	var uLocal_3298 = 8;
	var uLocal_3299 = 0;
	var uLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302 = 0;
	var uLocal_3303 = 0;
	var uLocal_3304 = 0;
	var uLocal_3305 = 0;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	var uLocal_3312 = 0;
	var uLocal_3313 = 0;
	var uLocal_3314 = 0;
	var uLocal_3315 = 0;
	var uLocal_3316 = 0;
	var uLocal_3317 = 0;
	var uLocal_3318 = 0;
	var uLocal_3319 = -1;
	var uLocal_3320 = 8;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = 0;
	var uLocal_3324 = 0;
	var uLocal_3325 = 0;
	var uLocal_3326 = 0;
	var uLocal_3327 = 0;
	var uLocal_3328 = 0;
	var uLocal_3329 = 0;
	var uLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 0;
	var uLocal_3335 = 0;
	var uLocal_3336 = 0;
	var uLocal_3337 = 0;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = -1;
	var uLocal_3342 = 8;
	var uLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
	var uLocal_3346 = 0;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	var uLocal_3350 = 0;
	var uLocal_3351 = 0;
	var uLocal_3352 = 0;
	var uLocal_3353 = 0;
	var uLocal_3354 = 0;
	var uLocal_3355 = 0;
	var uLocal_3356 = 0;
	var uLocal_3357 = 0;
	var uLocal_3358 = 0;
	var uLocal_3359 = 0;
	var uLocal_3360 = 0;
	var uLocal_3361 = 0;
	var uLocal_3362 = 0;
	var uLocal_3363 = -1;
	var uLocal_3364 = 8;
	var uLocal_3365 = 0;
	var uLocal_3366 = 0;
	var uLocal_3367 = 0;
	var uLocal_3368 = 0;
	var uLocal_3369 = 0;
	var uLocal_3370 = 0;
	var uLocal_3371 = 0;
	var uLocal_3372 = 0;
	var uLocal_3373 = 0;
	var uLocal_3374 = 0;
	var uLocal_3375 = 0;
	var uLocal_3376 = 0;
	var uLocal_3377 = 0;
	var uLocal_3378 = 0;
	var uLocal_3379 = 0;
	var uLocal_3380 = 0;
	var uLocal_3381 = 0;
	var uLocal_3382 = 0;
	var uLocal_3383 = 0;
	var uLocal_3384 = 0;
	var uLocal_3385 = -1;
	var uLocal_3386 = 8;
	var uLocal_3387 = 0;
	var uLocal_3388 = 0;
	var uLocal_3389 = 0;
	var uLocal_3390 = 0;
	var uLocal_3391 = 0;
	var uLocal_3392 = 0;
	var uLocal_3393 = 0;
	var uLocal_3394 = 0;
	var uLocal_3395 = 0;
	var uLocal_3396 = 0;
	var uLocal_3397 = 0;
	var uLocal_3398 = 0;
	var uLocal_3399 = 0;
	var uLocal_3400 = 0;
	var uLocal_3401 = 0;
	var uLocal_3402 = 0;
	var uLocal_3403 = 0;
	var uLocal_3404 = 0;
	var uLocal_3405 = 0;
	var uLocal_3406 = 0;
	var uLocal_3407 = -1;
	var uLocal_3408 = 8;
	var uLocal_3409 = 0;
	var uLocal_3410 = 0;
	var uLocal_3411 = 0;
	var uLocal_3412 = 0;
	var uLocal_3413 = 0;
	var uLocal_3414 = 0;
	var uLocal_3415 = 0;
	var uLocal_3416 = 0;
	var uLocal_3417 = 0;
	var uLocal_3418 = 0;
	var uLocal_3419 = 0;
	var uLocal_3420 = 0;
	var uLocal_3421 = 0;
	var uLocal_3422 = 0;
	var uLocal_3423 = 0;
	var uLocal_3424 = 0;
	var uLocal_3425 = 0;
	var uLocal_3426 = 0;
	var uLocal_3427 = 0;
	var uLocal_3428 = 0;
	var uLocal_3429 = -1;
	var uLocal_3430 = 8;
	var uLocal_3431 = 0;
	var uLocal_3432 = 0;
	var uLocal_3433 = 0;
	var uLocal_3434 = 0;
	var uLocal_3435 = 0;
	var uLocal_3436 = 0;
	var uLocal_3437 = 0;
	var uLocal_3438 = 0;
	var uLocal_3439 = 0;
	var uLocal_3440 = 0;
	var uLocal_3441 = 0;
	var uLocal_3442 = 0;
	var uLocal_3443 = 0;
	var uLocal_3444 = 0;
	var uLocal_3445 = 0;
	var uLocal_3446 = 0;
	var uLocal_3447 = 0;
	var uLocal_3448 = 0;
	var uLocal_3449 = 0;
	var uLocal_3450 = 0;
	var uLocal_3451 = -1;
	var uLocal_3452 = 8;
	var uLocal_3453 = 0;
	var uLocal_3454 = 0;
	var uLocal_3455 = 0;
	var uLocal_3456 = 0;
	var uLocal_3457 = 0;
	var uLocal_3458 = 0;
	var uLocal_3459 = 0;
	var uLocal_3460 = 0;
	var uLocal_3461 = 0;
	var uLocal_3462 = 0;
	var uLocal_3463 = 0;
	var uLocal_3464 = 0;
	var uLocal_3465 = 0;
	var uLocal_3466 = 0;
	var uLocal_3467 = 0;
	var uLocal_3468 = 0;
	var uLocal_3469 = 0;
	var uLocal_3470 = 0;
	var uLocal_3471 = 0;
	var uLocal_3472 = 0;
	var uLocal_3473 = -1;
	var uLocal_3474 = 8;
	var uLocal_3475 = 0;
	var uLocal_3476 = 0;
	var uLocal_3477 = 0;
	var uLocal_3478 = 0;
	var uLocal_3479 = 0;
	var uLocal_3480 = 0;
	var uLocal_3481 = 0;
	var uLocal_3482 = 0;
	var uLocal_3483 = 0;
	var uLocal_3484 = 0;
	var uLocal_3485 = 0;
	var uLocal_3486 = 0;
	var uLocal_3487 = 0;
	var uLocal_3488 = 0;
	var uLocal_3489 = 0;
	var uLocal_3490 = 0;
	var uLocal_3491 = 0;
	var uLocal_3492 = 0;
	var uLocal_3493 = 0;
	var uLocal_3494 = 0;
	var uLocal_3495 = -1;
	var uLocal_3496 = 8;
	var uLocal_3497 = 0;
	var uLocal_3498 = 0;
	var uLocal_3499 = 0;
	var uLocal_3500 = 0;
	var uLocal_3501 = 0;
	var uLocal_3502 = 0;
	var uLocal_3503 = 0;
	var uLocal_3504 = 0;
	var uLocal_3505 = 0;
	var uLocal_3506 = 0;
	var uLocal_3507 = 0;
	var uLocal_3508 = 0;
	var uLocal_3509 = 0;
	var uLocal_3510 = 0;
	var uLocal_3511 = 0;
	var uLocal_3512 = 0;
	var uLocal_3513 = 0;
	var uLocal_3514 = 0;
	var uLocal_3515 = 0;
	var uLocal_3516 = 0;
	var uLocal_3517 = -1;
	var uLocal_3518 = 8;
	var uLocal_3519 = 0;
	var uLocal_3520 = 0;
	var uLocal_3521 = 0;
	var uLocal_3522 = 0;
	var uLocal_3523 = 0;
	var uLocal_3524 = 0;
	var uLocal_3525 = 0;
	var uLocal_3526 = 0;
	var uLocal_3527 = 0;
	var uLocal_3528 = 0;
	var uLocal_3529 = 0;
	var uLocal_3530 = 0;
	var uLocal_3531 = 0;
	var uLocal_3532 = 0;
	var uLocal_3533 = 0;
	var uLocal_3534 = 0;
	var uLocal_3535 = 0;
	var uLocal_3536 = 0;
	var uLocal_3537 = 0;
	var uLocal_3538 = 0;
	var uLocal_3539 = -1;
	var uLocal_3540 = 8;
	var uLocal_3541 = 0;
	var uLocal_3542 = 0;
	var uLocal_3543 = 0;
	var uLocal_3544 = 0;
	var uLocal_3545 = 0;
	var uLocal_3546 = 0;
	var uLocal_3547 = 0;
	var uLocal_3548 = 0;
	var uLocal_3549 = 0;
	var uLocal_3550 = 0;
	var uLocal_3551 = 0;
	var uLocal_3552 = 0;
	var uLocal_3553 = 0;
	var uLocal_3554 = 0;
	var uLocal_3555 = 0;
	var uLocal_3556 = 0;
	var uLocal_3557 = 0;
	var uLocal_3558 = 0;
	var uLocal_3559 = 0;
	var uLocal_3560 = 0;
	var uLocal_3561 = -1;
	var uLocal_3562 = 8;
	var uLocal_3563 = 0;
	var uLocal_3564 = 0;
	var uLocal_3565 = 0;
	var uLocal_3566 = 0;
	var uLocal_3567 = 0;
	var uLocal_3568 = 0;
	var uLocal_3569 = 0;
	var uLocal_3570 = 0;
	var uLocal_3571 = 0;
	var uLocal_3572 = 0;
	var uLocal_3573 = 0;
	var uLocal_3574 = 0;
	var uLocal_3575 = 0;
	var uLocal_3576 = 0;
	var uLocal_3577 = 0;
	var uLocal_3578 = 0;
	var uLocal_3579 = 0;
	var uLocal_3580 = 0;
	var uLocal_3581 = 0;
	var uLocal_3582 = 0;
	var uLocal_3583 = -1;
	var uLocal_3584 = 8;
	var uLocal_3585 = 0;
	var uLocal_3586 = 0;
	var uLocal_3587 = 0;
	var uLocal_3588 = 0;
	var uLocal_3589 = 0;
	var uLocal_3590 = 0;
	var uLocal_3591 = 0;
	var uLocal_3592 = 0;
	var uLocal_3593 = 0;
	var uLocal_3594 = 0;
	var uLocal_3595 = 0;
	var uLocal_3596 = 0;
	var uLocal_3597 = 0;
	var uLocal_3598 = 0;
	var uLocal_3599 = 0;
	var uLocal_3600 = 0;
	var uLocal_3601 = 0;
	var uLocal_3602 = 0;
	var uLocal_3603 = 0;
	var uLocal_3604 = 0;
	var uLocal_3605 = -1;
	var uLocal_3606 = 8;
	var uLocal_3607 = 0;
	var uLocal_3608 = 0;
	var uLocal_3609 = 0;
	var uLocal_3610 = 0;
	var uLocal_3611 = 0;
	var uLocal_3612 = 0;
	var uLocal_3613 = 0;
	var uLocal_3614 = 0;
	var uLocal_3615 = 0;
	var uLocal_3616 = 0;
	var uLocal_3617 = 0;
	var uLocal_3618 = 0;
	var uLocal_3619 = 0;
	var uLocal_3620 = 0;
	var uLocal_3621 = 0;
	var uLocal_3622 = 0;
	var uLocal_3623 = 0;
	var uLocal_3624 = 0;
	var uLocal_3625 = 0;
	var uLocal_3626 = 0;
	var uLocal_3627 = -1;
	var uLocal_3628 = 8;
	var uLocal_3629 = 0;
	var uLocal_3630 = 0;
	var uLocal_3631 = 0;
	var uLocal_3632 = 0;
	var uLocal_3633 = 0;
	var uLocal_3634 = 0;
	var uLocal_3635 = 0;
	var uLocal_3636 = 0;
	var uLocal_3637 = 0;
	var uLocal_3638 = 0;
	var uLocal_3639 = 0;
	var uLocal_3640 = 0;
	var uLocal_3641 = 0;
	var uLocal_3642 = 0;
	var uLocal_3643 = 0;
	var uLocal_3644 = 0;
	var uLocal_3645 = 0;
	var uLocal_3646 = 0;
	var uLocal_3647 = 0;
	var uLocal_3648 = 0;
	var uLocal_3649 = -1;
	var uLocal_3650 = 8;
	var uLocal_3651 = 0;
	var uLocal_3652 = 0;
	var uLocal_3653 = 0;
	var uLocal_3654 = 0;
	var uLocal_3655 = 0;
	var uLocal_3656 = 0;
	var uLocal_3657 = 0;
	var uLocal_3658 = 0;
	var uLocal_3659 = 0;
	var uLocal_3660 = 0;
	var uLocal_3661 = 0;
	var uLocal_3662 = 0;
	var uLocal_3663 = 0;
	var uLocal_3664 = 0;
	var uLocal_3665 = 0;
	var uLocal_3666 = 0;
	var uLocal_3667 = 0;
	var uLocal_3668 = 0;
	var uLocal_3669 = 0;
	var uLocal_3670 = 0;
	var uLocal_3671 = -1;
	var uLocal_3672 = 8;
	var uLocal_3673 = 0;
	var uLocal_3674 = 0;
	var uLocal_3675 = 0;
	var uLocal_3676 = 0;
	var uLocal_3677 = 0;
	var uLocal_3678 = 0;
	var uLocal_3679 = 0;
	var uLocal_3680 = 0;
	var uLocal_3681 = 0;
	var uLocal_3682 = 0;
	var uLocal_3683 = 0;
	var uLocal_3684 = 0;
	var uLocal_3685 = 0;
	var uLocal_3686 = 0;
	var uLocal_3687 = 0;
	var uLocal_3688 = 0;
	var uLocal_3689 = 0;
	var uLocal_3690 = 0;
	var uLocal_3691 = 0;
	var uLocal_3692 = 0;
	var uLocal_3693 = -1;
	var uLocal_3694 = 8;
	var uLocal_3695 = 0;
	var uLocal_3696 = 0;
	var uLocal_3697 = 0;
	var uLocal_3698 = 0;
	var uLocal_3699 = 0;
	var uLocal_3700 = 0;
	var uLocal_3701 = 0;
	var uLocal_3702 = 0;
	var uLocal_3703 = 0;
	var uLocal_3704 = 0;
	var uLocal_3705 = 0;
	var uLocal_3706 = 0;
	var uLocal_3707 = 0;
	var uLocal_3708 = 0;
	var uLocal_3709 = 0;
	var uLocal_3710 = 0;
	var uLocal_3711 = 0;
	var uLocal_3712 = 0;
	var uLocal_3713 = 0;
	var uLocal_3714 = 0;
	var uLocal_3715 = -1;
	var uLocal_3716 = 8;
	var uLocal_3717 = 0;
	var uLocal_3718 = 0;
	var uLocal_3719 = 0;
	var uLocal_3720 = 0;
	var uLocal_3721 = 0;
	var uLocal_3722 = 0;
	var uLocal_3723 = 0;
	var uLocal_3724 = 0;
	var uLocal_3725 = 0;
	var uLocal_3726 = 0;
	var uLocal_3727 = 0;
	var uLocal_3728 = 0;
	var uLocal_3729 = 0;
	var uLocal_3730 = 0;
	var uLocal_3731 = 0;
	var uLocal_3732 = 0;
	var uLocal_3733 = 0;
	var uLocal_3734 = 0;
	var uLocal_3735 = 0;
	var uLocal_3736 = 0;
	var uLocal_3737 = -1;
	var uLocal_3738 = 8;
	var uLocal_3739 = 0;
	var uLocal_3740 = 0;
	var uLocal_3741 = 0;
	var uLocal_3742 = 0;
	var uLocal_3743 = 0;
	var uLocal_3744 = 0;
	var uLocal_3745 = 0;
	var uLocal_3746 = 0;
	var uLocal_3747 = 0;
	var uLocal_3748 = 0;
	var uLocal_3749 = 0;
	var uLocal_3750 = 0;
	var uLocal_3751 = 0;
	var uLocal_3752 = 0;
	var uLocal_3753 = 0;
	var uLocal_3754 = 0;
	var uLocal_3755 = 0;
	var uLocal_3756 = 0;
	var uLocal_3757 = 0;
	var uLocal_3758 = 0;
	var uLocal_3759 = -1;
	var uLocal_3760 = 8;
	var uLocal_3761 = 0;
	var uLocal_3762 = 0;
	var uLocal_3763 = 0;
	var uLocal_3764 = 0;
	var uLocal_3765 = 0;
	var uLocal_3766 = 0;
	var uLocal_3767 = 0;
	var uLocal_3768 = 0;
	var uLocal_3769 = 0;
	var uLocal_3770 = 0;
	var uLocal_3771 = 0;
	var uLocal_3772 = 0;
	var uLocal_3773 = 0;
	var uLocal_3774 = 0;
	var uLocal_3775 = 0;
	var uLocal_3776 = 0;
	var uLocal_3777 = 0;
	var uLocal_3778 = 0;
	var uLocal_3779 = 0;
	var uLocal_3780 = 0;
	var uLocal_3781 = -1;
	var uLocal_3782 = 8;
	var uLocal_3783 = 0;
	var uLocal_3784 = 0;
	var uLocal_3785 = 0;
	var uLocal_3786 = 0;
	var uLocal_3787 = 0;
	var uLocal_3788 = 0;
	var uLocal_3789 = 0;
	var uLocal_3790 = 0;
	var uLocal_3791 = 0;
	var uLocal_3792 = 0;
	var uLocal_3793 = 0;
	var uLocal_3794 = 0;
	var uLocal_3795 = 0;
	var uLocal_3796 = 0;
	var uLocal_3797 = 0;
	var uLocal_3798 = 0;
	var uLocal_3799 = 0;
	var uLocal_3800 = 0;
	var uLocal_3801 = 0;
	var uLocal_3802 = 0;
	var uLocal_3803 = -1;
	var uLocal_3804 = 8;
	var uLocal_3805 = 0;
	var uLocal_3806 = 0;
	var uLocal_3807 = 0;
	var uLocal_3808 = 0;
	var uLocal_3809 = 0;
	var uLocal_3810 = 0;
	var uLocal_3811 = 0;
	var uLocal_3812 = 0;
	var uLocal_3813 = 0;
	var uLocal_3814 = 0;
	var uLocal_3815 = 0;
	var uLocal_3816 = 0;
	var uLocal_3817 = 0;
	var uLocal_3818 = 0;
	var uLocal_3819 = 0;
	var uLocal_3820 = 0;
	var uLocal_3821 = 0;
	var uLocal_3822 = 0;
	var uLocal_3823 = 0;
	var uLocal_3824 = 0;
	var uLocal_3825 = -1;
	var uLocal_3826 = 8;
	var uLocal_3827 = 0;
	var uLocal_3828 = 0;
	var uLocal_3829 = 0;
	var uLocal_3830 = 0;
	var uLocal_3831 = 0;
	var uLocal_3832 = 0;
	var uLocal_3833 = 0;
	var uLocal_3834 = 0;
	var uLocal_3835 = 0;
	var uLocal_3836 = 0;
	var uLocal_3837 = 0;
	var uLocal_3838 = 0;
	var uLocal_3839 = 0;
	var uLocal_3840 = 0;
	var uLocal_3841 = 0;
	var uLocal_3842 = 0;
	var uLocal_3843 = 0;
	var uLocal_3844 = 0;
	var uLocal_3845 = 0;
	var uLocal_3846 = 0;
	var uLocal_3847 = -1;
	var uLocal_3848 = 0;
	var uLocal_3849 = 0;
	var uLocal_3850 = 0;
	var uLocal_3851 = 0;
	var uLocal_3852 = 0;
	var uLocal_3853 = 0;
	var uLocal_3854 = 0;
	var uLocal_3855 = 0;
	var uLocal_3856 = 0;
	var uLocal_3857 = 0;
	var uLocal_3858 = 0;
	var uLocal_3859 = 0;
	var uLocal_3860 = 0;
	var uLocal_3861 = 0;
	var uLocal_3862 = 0;
	var uLocal_3863 = 0;
	var uLocal_3864 = 0;
	var uLocal_3865 = 0;
	var uLocal_3866 = 0;
	var uLocal_3867 = 0;
	var uLocal_3868 = 0;
	var uLocal_3869 = 0;
	var uLocal_3870 = 0;
	var uLocal_3871 = 0;
	var uLocal_3872 = 0;
	var uLocal_3873 = 0;
	var uLocal_3874 = 0;
	var uLocal_3875 = 0;
	var uLocal_3876 = 0;
	var uLocal_3877 = 0;
	var uLocal_3878 = 0;
	var uLocal_3879 = 0;
	var uLocal_3880 = 0;
	var uLocal_3881 = 0;
	var uLocal_3882 = 0;
	var uLocal_3883 = 0;
	var uLocal_3884 = 0;
	var uLocal_3885 = 0;
	var uLocal_3886 = 2;
	var uLocal_3887 = 0;
	var uLocal_3888 = 0;
	var uLocal_3889 = 0;
	var uLocal_3890 = 60;
	var uLocal_3891 = 0;
	var uLocal_3892 = 0;
	var uLocal_3893 = 0;
	var uLocal_3894 = 0;
	var uLocal_3895 = 0;
	var uLocal_3896 = 0;
	var uLocal_3897 = 0;
	var uLocal_3898 = 0;
	var uLocal_3899 = 0;
	var uLocal_3900 = 0;
	var uLocal_3901 = 0;
	var uLocal_3902 = 0;
	var uLocal_3903 = 0;
	var uLocal_3904 = 0;
	var uLocal_3905 = 0;
	var uLocal_3906 = 0;
	var uLocal_3907 = 0;
	var uLocal_3908 = 0;
	var uLocal_3909 = 0;
	var uLocal_3910 = 0;
	var uLocal_3911 = 0;
	var uLocal_3912 = 0;
	var uLocal_3913 = 0;
	var uLocal_3914 = 0;
	var uLocal_3915 = 0;
	var uLocal_3916 = 0;
	var uLocal_3917 = 0;
	var uLocal_3918 = 0;
	var uLocal_3919 = 0;
	var uLocal_3920 = 0;
	var uLocal_3921 = 0;
	var uLocal_3922 = 0;
	var uLocal_3923 = 0;
	var uLocal_3924 = 0;
	var uLocal_3925 = 0;
	var uLocal_3926 = 0;
	var uLocal_3927 = 0;
	var uLocal_3928 = 0;
	var uLocal_3929 = 0;
	var uLocal_3930 = 0;
	var uLocal_3931 = 0;
	var uLocal_3932 = 0;
	var uLocal_3933 = 0;
	var uLocal_3934 = 0;
	var uLocal_3935 = 0;
	var uLocal_3936 = 0;
	var uLocal_3937 = 0;
	var uLocal_3938 = 0;
	var uLocal_3939 = 0;
	var uLocal_3940 = 0;
	var uLocal_3941 = 0;
	var uLocal_3942 = 0;
	var uLocal_3943 = 0;
	var uLocal_3944 = 0;
	var uLocal_3945 = 0;
	var uLocal_3946 = 0;
	var uLocal_3947 = 0;
	var uLocal_3948 = 0;
	var uLocal_3949 = 0;
	var uLocal_3950 = 0;
	var uLocal_3951 = 0;
	var uLocal_3952 = 0;
	var uLocal_3953 = 0;
	var uLocal_3954 = 0;
	var uLocal_3955 = 0;
	var uLocal_3956 = 0;
	var uLocal_3957 = 0;
	var uLocal_3958 = 0;
	var uLocal_3959 = 0;
	var uLocal_3960 = 0;
	var uLocal_3961 = 0;
	var uLocal_3962 = 0;
	var uLocal_3963 = 0;
	var uLocal_3964 = 0;
	var uLocal_3965 = 0;
	var uLocal_3966 = 0;
	var uLocal_3967 = 0;
	var uLocal_3968 = 0;
	var uLocal_3969 = 0;
	var uLocal_3970 = 0;
	var uLocal_3971 = 0;
	var uLocal_3972 = 0;
	var uLocal_3973 = 0;
	var uLocal_3974 = 0;
	var uLocal_3975 = 0;
	var uLocal_3976 = 0;
	var uLocal_3977 = 0;
	var uLocal_3978 = 0;
	var uLocal_3979 = 0;
	var uLocal_3980 = 0;
	var uLocal_3981 = 0;
	var uLocal_3982 = 0;
	var uLocal_3983 = 0;
	var uLocal_3984 = 0;
	var uLocal_3985 = 0;
	var uLocal_3986 = 0;
	var uLocal_3987 = 0;
	var uLocal_3988 = 0;
	var uLocal_3989 = 0;
	var uLocal_3990 = 0;
	var uLocal_3991 = 0;
	var uLocal_3992 = 0;
	var uLocal_3993 = 0;
	var uLocal_3994 = 0;
	var uLocal_3995 = 0;
	var uLocal_3996 = 0;
	var uLocal_3997 = 0;
	var uLocal_3998 = 0;
	var uLocal_3999 = 0;
	var uLocal_4000 = 0;
	var uLocal_4001 = 0;
	var uLocal_4002 = 0;
	var uLocal_4003 = 0;
	var uLocal_4004 = 0;
	var uLocal_4005 = 0;
	var uLocal_4006 = 0;
	var uLocal_4007 = 0;
	var uLocal_4008 = 0;
	var uLocal_4009 = 0;
	var uLocal_4010 = 0;
	var uLocal_4011 = 0;
	var uLocal_4012 = 0;
	var uLocal_4013 = 0;
	var uLocal_4014 = 0;
	var uLocal_4015 = 0;
	var uLocal_4016 = 0;
	var uLocal_4017 = 0;
	var uLocal_4018 = 0;
	var uLocal_4019 = 0;
	var uLocal_4020 = 0;
	var uLocal_4021 = 0;
	var uLocal_4022 = 0;
	var uLocal_4023 = 0;
	var uLocal_4024 = 0;
	var uLocal_4025 = 0;
	var uLocal_4026 = 0;
	var uLocal_4027 = 0;
	var uLocal_4028 = 0;
	var uLocal_4029 = 0;
	var uLocal_4030 = 0;
	var uLocal_4031 = 0;
	var uLocal_4032 = 0;
	var uLocal_4033 = 0;
	var uLocal_4034 = 0;
	var uLocal_4035 = 0;
	var uLocal_4036 = 0;
	var uLocal_4037 = 0;
	var uLocal_4038 = 0;
	var uLocal_4039 = 0;
	var uLocal_4040 = 0;
	var uLocal_4041 = 0;
	var uLocal_4042 = 0;
	var uLocal_4043 = 0;
	var uLocal_4044 = 0;
	var uLocal_4045 = 0;
	var uLocal_4046 = 0;
	var uLocal_4047 = 0;
	var uLocal_4048 = 0;
	var uLocal_4049 = 0;
	var uLocal_4050 = 0;
	var uLocal_4051 = 0;
	var uLocal_4052 = 0;
	var uLocal_4053 = 0;
	var uLocal_4054 = 0;
	var uLocal_4055 = 0;
	var uLocal_4056 = 0;
	var uLocal_4057 = 0;
	var uLocal_4058 = 0;
	var uLocal_4059 = 0;
	var uLocal_4060 = 0;
	var uLocal_4061 = 0;
	var uLocal_4062 = 0;
	var uLocal_4063 = 0;
	var uLocal_4064 = 0;
	var uLocal_4065 = 0;
	var uLocal_4066 = 0;
	var uLocal_4067 = 0;
	var uLocal_4068 = 0;
	var uLocal_4069 = 0;
	var uLocal_4070 = 0;
	var uLocal_4071 = 40;
	var uLocal_4072 = 0;
	var uLocal_4073 = 0;
	var uLocal_4074 = 0;
	var uLocal_4075 = 0;
	var uLocal_4076 = 0;
	var uLocal_4077 = 0;
	var uLocal_4078 = 0;
	var uLocal_4079 = 0;
	var uLocal_4080 = 0;
	var uLocal_4081 = 0;
	var uLocal_4082 = 0;
	var uLocal_4083 = 0;
	var uLocal_4084 = 0;
	var uLocal_4085 = 0;
	var uLocal_4086 = 0;
	var uLocal_4087 = 0;
	var uLocal_4088 = 0;
	var uLocal_4089 = 0;
	var uLocal_4090 = 0;
	var uLocal_4091 = 0;
	var uLocal_4092 = 0;
	var uLocal_4093 = 0;
	var uLocal_4094 = 0;
	var uLocal_4095 = 0;
	var uLocal_4096 = 0;
	var uLocal_4097 = 0;
	var uLocal_4098 = 0;
	var uLocal_4099 = 0;
	var uLocal_4100 = 0;
	var uLocal_4101 = 0;
	var uLocal_4102 = 0;
	var uLocal_4103 = 0;
	var uLocal_4104 = 0;
	var uLocal_4105 = 0;
	var uLocal_4106 = 0;
	var uLocal_4107 = 0;
	var uLocal_4108 = 0;
	var uLocal_4109 = 0;
	var uLocal_4110 = 0;
	var uLocal_4111 = 0;
	var uLocal_4112 = 0;
	var uLocal_4113 = 0;
	var uLocal_4114 = 0;
	var uLocal_4115 = 0;
	var uLocal_4116 = 0;
	var uLocal_4117 = 0;
	var uLocal_4118 = 0;
	var uLocal_4119 = 0;
	var uLocal_4120 = 0;
	var uLocal_4121 = 0;
	var uLocal_4122 = 0;
	var uLocal_4123 = 0;
	var uLocal_4124 = 0;
	var uLocal_4125 = 0;
	var uLocal_4126 = 0;
	var uLocal_4127 = 0;
	var uLocal_4128 = 0;
	var uLocal_4129 = 0;
	var uLocal_4130 = 0;
	var uLocal_4131 = 0;
	var uLocal_4132 = 0;
	var uLocal_4133 = 0;
	var uLocal_4134 = 0;
	var uLocal_4135 = 0;
	var uLocal_4136 = 0;
	var uLocal_4137 = 0;
	var uLocal_4138 = 0;
	var uLocal_4139 = 0;
	var uLocal_4140 = 0;
	var uLocal_4141 = 0;
	var uLocal_4142 = 0;
	var uLocal_4143 = 0;
	var uLocal_4144 = 0;
	var uLocal_4145 = 0;
	var uLocal_4146 = 0;
	var uLocal_4147 = 0;
	var uLocal_4148 = 0;
	var uLocal_4149 = 0;
	var uLocal_4150 = 0;
	var uLocal_4151 = 0;
	var uLocal_4152 = 0;
	var uLocal_4153 = 0;
	var uLocal_4154 = 0;
	var uLocal_4155 = 0;
	var uLocal_4156 = 0;
	var uLocal_4157 = 0;
	var uLocal_4158 = 0;
	var uLocal_4159 = 0;
	var uLocal_4160 = 0;
	var uLocal_4161 = 0;
	var uLocal_4162 = 0;
	var uLocal_4163 = 0;
	var uLocal_4164 = 0;
	var uLocal_4165 = 0;
	var uLocal_4166 = 0;
	var uLocal_4167 = 0;
	var uLocal_4168 = 0;
	var uLocal_4169 = 0;
	var uLocal_4170 = 0;
	var uLocal_4171 = 0;
	var uLocal_4172 = 0;
	var uLocal_4173 = 0;
	var uLocal_4174 = 0;
	var uLocal_4175 = 0;
	var uLocal_4176 = 0;
	var uLocal_4177 = 0;
	var uLocal_4178 = 0;
	var uLocal_4179 = 0;
	var uLocal_4180 = 0;
	var uLocal_4181 = 0;
	var uLocal_4182 = 0;
	var uLocal_4183 = 0;
	var uLocal_4184 = 0;
	var uLocal_4185 = 0;
	var uLocal_4186 = 0;
	var uLocal_4187 = 0;
	var uLocal_4188 = 0;
	var uLocal_4189 = 0;
	var uLocal_4190 = 0;
	var uLocal_4191 = 0;
	var uLocal_4192 = 0;
	var uLocal_4193 = 0;
	var uLocal_4194 = 0;
	var uLocal_4195 = 0;
	var uLocal_4196 = 0;
	var uLocal_4197 = 0;
	var uLocal_4198 = 0;
	var uLocal_4199 = 0;
	var uLocal_4200 = 0;
	var uLocal_4201 = 0;
	var uLocal_4202 = 0;
	var uLocal_4203 = 0;
	var uLocal_4204 = 0;
	var uLocal_4205 = 0;
	var uLocal_4206 = 0;
	var uLocal_4207 = 0;
	var uLocal_4208 = 0;
	var uLocal_4209 = 0;
	var uLocal_4210 = 0;
	var uLocal_4211 = 0;
	var uLocal_4212 = 0;
	var uLocal_4213 = 0;
	var uLocal_4214 = 0;
	var uLocal_4215 = 0;
	var uLocal_4216 = 0;
	var uLocal_4217 = 0;
	var uLocal_4218 = 0;
	var uLocal_4219 = 0;
	var uLocal_4220 = 0;
	var uLocal_4221 = 0;
	var uLocal_4222 = 0;
	var uLocal_4223 = 0;
	var uLocal_4224 = 0;
	var uLocal_4225 = 0;
	var uLocal_4226 = 0;
	var uLocal_4227 = 0;
	var uLocal_4228 = 0;
	var uLocal_4229 = 0;
	var uLocal_4230 = 0;
	var uLocal_4231 = 0;
	var uLocal_4232 = 0;
	var uLocal_4233 = 0;
	var uLocal_4234 = 0;
	var uLocal_4235 = 0;
	var uLocal_4236 = 0;
	var uLocal_4237 = 0;
	var uLocal_4238 = 0;
	var uLocal_4239 = 0;
	var uLocal_4240 = 0;
	var uLocal_4241 = 0;
	var uLocal_4242 = 0;
	var uLocal_4243 = 0;
	var uLocal_4244 = 0;
	var uLocal_4245 = 0;
	var uLocal_4246 = 0;
	var uLocal_4247 = 0;
	var uLocal_4248 = 0;
	var uLocal_4249 = 0;
	var uLocal_4250 = 0;
	var uLocal_4251 = 0;
	var uLocal_4252 = 0;
	var uLocal_4253 = 0;
	var uLocal_4254 = 0;
	var uLocal_4255 = 0;
	var uLocal_4256 = 0;
	var uLocal_4257 = 0;
	var uLocal_4258 = 0;
	var uLocal_4259 = 0;
	var uLocal_4260 = 0;
	var uLocal_4261 = 0;
	var uLocal_4262 = 0;
	var uLocal_4263 = 0;
	var uLocal_4264 = 0;
	var uLocal_4265 = 0;
	var uLocal_4266 = 0;
	var uLocal_4267 = 0;
	var uLocal_4268 = 0;
	var uLocal_4269 = 0;
	var uLocal_4270 = 0;
	var uLocal_4271 = 0;
	var uLocal_4272 = 20;
	var uLocal_4273 = 0;
	var uLocal_4274 = 0;
	var uLocal_4275 = 0;
	var uLocal_4276 = 0;
	var uLocal_4277 = 0;
	var uLocal_4278 = 0;
	var uLocal_4279 = 0;
	var uLocal_4280 = 0;
	var uLocal_4281 = 0;
	var uLocal_4282 = 0;
	var uLocal_4283 = 0;
	var uLocal_4284 = 0;
	var uLocal_4285 = 0;
	var uLocal_4286 = 0;
	var uLocal_4287 = 0;
	var uLocal_4288 = 0;
	var uLocal_4289 = 0;
	var uLocal_4290 = 0;
	var uLocal_4291 = 0;
	var uLocal_4292 = 0;
	var uLocal_4293 = 0;
	var uLocal_4294 = 0;
	var uLocal_4295 = 0;
	var uLocal_4296 = 0;
	var uLocal_4297 = 0;
	var uLocal_4298 = 0;
	var uLocal_4299 = 0;
	var uLocal_4300 = 0;
	var uLocal_4301 = 0;
	var uLocal_4302 = 0;
	var uLocal_4303 = 0;
	var uLocal_4304 = 0;
	var uLocal_4305 = 0;
	var uLocal_4306 = 0;
	var uLocal_4307 = 0;
	var uLocal_4308 = 0;
	var uLocal_4309 = 0;
	var uLocal_4310 = 0;
	var uLocal_4311 = 0;
	var uLocal_4312 = 0;
	var uLocal_4313 = 0;
	var uLocal_4314 = 0;
	var uLocal_4315 = 0;
	var uLocal_4316 = 0;
	var uLocal_4317 = 0;
	var uLocal_4318 = 0;
	var uLocal_4319 = 0;
	var uLocal_4320 = 0;
	var uLocal_4321 = 0;
	var uLocal_4322 = 0;
	var uLocal_4323 = 0;
	var uLocal_4324 = 0;
	var uLocal_4325 = 0;
	var uLocal_4326 = 0;
	var uLocal_4327 = 0;
	var uLocal_4328 = 0;
	var uLocal_4329 = 0;
	var uLocal_4330 = 0;
	var uLocal_4331 = 0;
	var uLocal_4332 = 0;
	var uLocal_4333 = 14;
	var uLocal_4334 = 0;
	var uLocal_4335 = 0;
	var uLocal_4336 = 0;
	var uLocal_4337 = 0;
	var uLocal_4338 = 0;
	var uLocal_4339 = 0;
	var uLocal_4340 = 0;
	var uLocal_4341 = 0;
	var uLocal_4342 = 0;
	var uLocal_4343 = 0;
	var uLocal_4344 = 0;
	var uLocal_4345 = 0;
	var uLocal_4346 = 0;
	var uLocal_4347 = 0;
	var uLocal_4348 = 0;
	var uLocal_4349 = 0;
	var uLocal_4350 = 0;
	var uLocal_4351 = 0;
	var uLocal_4352 = 0;
	var uLocal_4353 = 0;
	var uLocal_4354 = 0;
	var uLocal_4355 = 0;
	var uLocal_4356 = 0;
	var uLocal_4357 = 0;
	var uLocal_4358 = 0;
	var uLocal_4359 = 0;
	var uLocal_4360 = 0;
	var uLocal_4361 = 0;
	var uLocal_4362 = 0;
	var uLocal_4363 = 0;
	var uLocal_4364 = 0;
	var uLocal_4365 = 0;
	var uLocal_4366 = 0;
	var uLocal_4367 = 0;
	var uLocal_4368 = 0;
	var uLocal_4369 = 0;
	var uLocal_4370 = 0;
	var uLocal_4371 = 0;
	var uLocal_4372 = 0;
	var uLocal_4373 = 0;
	var uLocal_4374 = 0;
	var uLocal_4375 = 0;
	var uLocal_4376 = 0;
	var uLocal_4377 = 0;
	var uLocal_4378 = 60;
	var uLocal_4379 = 0;
	var uLocal_4380 = 0;
	var uLocal_4381 = 0;
	var uLocal_4382 = 0;
	var uLocal_4383 = 20;
	var uLocal_4384 = 0;
	var uLocal_4385 = 0;
	var uLocal_4386 = 0;
	var uLocal_4387 = 0;
	var uLocal_4388 = 0;
	var uLocal_4389 = 0;
	var uLocal_4390 = 0;
	var uLocal_4391 = 0;
	var uLocal_4392 = 0;
	var uLocal_4393 = 0;
	var uLocal_4394 = 0;
	var uLocal_4395 = 0;
	var uLocal_4396 = 0;
	var uLocal_4397 = 0;
	var uLocal_4398 = 0;
	var uLocal_4399 = 0;
	var uLocal_4400 = 0;
	var uLocal_4401 = 0;
	var uLocal_4402 = 0;
	var uLocal_4403 = 0;
	var uLocal_4404 = 0;
	var uLocal_4405 = 0;
	var uLocal_4406 = 0;
	var uLocal_4407 = 0;
	var uLocal_4408 = 0;
	var uLocal_4409 = 0;
	var uLocal_4410 = 0;
	var uLocal_4411 = 0;
	var uLocal_4412 = 0;
	var uLocal_4413 = 0;
	var uLocal_4414 = 0;
	var uLocal_4415 = 0;
	var uLocal_4416 = 0;
	var uLocal_4417 = 0;
	var uLocal_4418 = 0;
	var uLocal_4419 = 0;
	var uLocal_4420 = 0;
	var uLocal_4421 = 0;
	var uLocal_4422 = 0;
	var uLocal_4423 = 0;
	var uLocal_4424 = 0;
	var uLocal_4425 = 0;
	var uLocal_4426 = 0;
	var uLocal_4427 = 0;
	var uLocal_4428 = 0;
	var uLocal_4429 = 0;
	var uLocal_4430 = 0;
	var uLocal_4431 = 0;
	var uLocal_4432 = 0;
	var uLocal_4433 = 0;
	var uLocal_4434 = 0;
	var uLocal_4435 = 0;
	var uLocal_4436 = 0;
	var uLocal_4437 = 0;
	var uLocal_4438 = 0;
	var uLocal_4439 = 0;
	var uLocal_4440 = 0;
	var uLocal_4441 = 0;
	var uLocal_4442 = 0;
	var uLocal_4443 = 0;
	var uLocal_4444 = 0;
	var uLocal_4445 = 0;
	var uLocal_4446 = 0;
	var uLocal_4447 = 0;
	var uLocal_4448 = 0;
	var uLocal_4449 = 0;
	var uLocal_4450 = 20;
	var uLocal_4451 = 0;
	var uLocal_4452 = 0;
	var uLocal_4453 = 0;
	var uLocal_4454 = 0;
	var uLocal_4455 = 0;
	var uLocal_4456 = 0;
	var uLocal_4457 = 0;
	var uLocal_4458 = 0;
	var uLocal_4459 = 0;
	var uLocal_4460 = 0;
	var uLocal_4461 = 0;
	var uLocal_4462 = 0;
	var uLocal_4463 = 0;
	var uLocal_4464 = 0;
	var uLocal_4465 = 0;
	var uLocal_4466 = 0;
	var uLocal_4467 = 0;
	var uLocal_4468 = 0;
	var uLocal_4469 = 0;
	var uLocal_4470 = 0;
	var uLocal_4471 = 0;
	var uLocal_4472 = 0;
	var uLocal_4473 = 0;
	var uLocal_4474 = 0;
	var uLocal_4475 = 0;
	var uLocal_4476 = 0;
	var uLocal_4477 = 0;
	var uLocal_4478 = 0;
	var uLocal_4479 = 0;
	var uLocal_4480 = 0;
	var uLocal_4481 = 0;
	var uLocal_4482 = 0;
	var uLocal_4483 = 0;
	var uLocal_4484 = 0;
	var uLocal_4485 = 0;
	var uLocal_4486 = 0;
	var uLocal_4487 = 0;
	var uLocal_4488 = 0;
	var uLocal_4489 = 0;
	var uLocal_4490 = 0;
	var uLocal_4491 = 0;
	var uLocal_4492 = 0;
	var uLocal_4493 = 0;
	var uLocal_4494 = 0;
	var uLocal_4495 = 0;
	var uLocal_4496 = 0;
	var uLocal_4497 = 0;
	var uLocal_4498 = 0;
	var uLocal_4499 = 0;
	var uLocal_4500 = 0;
	var uLocal_4501 = 0;
	var uLocal_4502 = 0;
	var uLocal_4503 = 0;
	var uLocal_4504 = 0;
	var uLocal_4505 = 0;
	var uLocal_4506 = 0;
	var uLocal_4507 = 0;
	var uLocal_4508 = 0;
	var uLocal_4509 = 0;
	var uLocal_4510 = 0;
	var uLocal_4511 = 0;
	var uLocal_4512 = 0;
	var uLocal_4513 = 0;
	var uLocal_4514 = 0;
	var uLocal_4515 = 0;
	var uLocal_4516 = 0;
	var uLocal_4517 = 20;
	var uLocal_4518 = 0;
	var uLocal_4519 = 0;
	var uLocal_4520 = 0;
	var uLocal_4521 = 0;
	var uLocal_4522 = 0;
	var uLocal_4523 = 0;
	var uLocal_4524 = 0;
	var uLocal_4525 = 0;
	var uLocal_4526 = 0;
	var uLocal_4527 = 0;
	var uLocal_4528 = 0;
	var uLocal_4529 = 0;
	var uLocal_4530 = 0;
	var uLocal_4531 = 0;
	var uLocal_4532 = 0;
	var uLocal_4533 = 0;
	var uLocal_4534 = 0;
	var uLocal_4535 = 0;
	var uLocal_4536 = 0;
	var uLocal_4537 = 0;
	var uLocal_4538 = 0;
	var uLocal_4539 = 0;
	var uLocal_4540 = 0;
	var uLocal_4541 = 0;
	var uLocal_4542 = 0;
	var uLocal_4543 = 0;
	var uLocal_4544 = 0;
	var uLocal_4545 = 0;
	var uLocal_4546 = 0;
	var uLocal_4547 = 0;
	var uLocal_4548 = 0;
	var uLocal_4549 = 0;
	var uLocal_4550 = 0;
	var uLocal_4551 = 0;
	var uLocal_4552 = 0;
	var uLocal_4553 = 0;
	var uLocal_4554 = 0;
	var uLocal_4555 = 0;
	var uLocal_4556 = 0;
	var uLocal_4557 = 0;
	var uLocal_4558 = 0;
	var uLocal_4559 = 0;
	var uLocal_4560 = 0;
	var uLocal_4561 = 0;
	var uLocal_4562 = 0;
	var uLocal_4563 = 0;
	var uLocal_4564 = 0;
	var uLocal_4565 = 0;
	var uLocal_4566 = 0;
	var uLocal_4567 = 0;
	var uLocal_4568 = 0;
	var uLocal_4569 = 0;
	var uLocal_4570 = 0;
	var uLocal_4571 = 0;
	var uLocal_4572 = 0;
	var uLocal_4573 = 0;
	var uLocal_4574 = 0;
	var uLocal_4575 = 0;
	var uLocal_4576 = 0;
	var uLocal_4577 = 0;
	var uLocal_4578 = 0;
	var uLocal_4579 = 0;
	var uLocal_4580 = 0;
	var uLocal_4581 = 0;
	var uLocal_4582 = 0;
	var uLocal_4583 = 0;
	var uLocal_4584 = 20;
	var uLocal_4585 = 0;
	var uLocal_4586 = 0;
	var uLocal_4587 = 0;
	var uLocal_4588 = 0;
	var uLocal_4589 = 0;
	var uLocal_4590 = 0;
	var uLocal_4591 = 0;
	var uLocal_4592 = 0;
	var uLocal_4593 = 0;
	var uLocal_4594 = 0;
	var uLocal_4595 = 0;
	var uLocal_4596 = 0;
	var uLocal_4597 = 0;
	var uLocal_4598 = 0;
	var uLocal_4599 = 0;
	var uLocal_4600 = 0;
	var uLocal_4601 = 0;
	var uLocal_4602 = 0;
	var uLocal_4603 = 0;
	var uLocal_4604 = 0;
	var uLocal_4605 = 0;
	var uLocal_4606 = 0;
	var uLocal_4607 = 0;
	var uLocal_4608 = 0;
	var uLocal_4609 = 0;
	var uLocal_4610 = 0;
	var uLocal_4611 = 0;
	var uLocal_4612 = 0;
	var uLocal_4613 = 0;
	var uLocal_4614 = 0;
	var uLocal_4615 = 0;
	var uLocal_4616 = 0;
	var uLocal_4617 = 0;
	var uLocal_4618 = 0;
	var uLocal_4619 = 0;
	var uLocal_4620 = 0;
	var uLocal_4621 = 0;
	var uLocal_4622 = 0;
	var uLocal_4623 = 0;
	var uLocal_4624 = 0;
	var uLocal_4625 = 0;
	var uLocal_4626 = 0;
	var uLocal_4627 = 0;
	var uLocal_4628 = 0;
	var uLocal_4629 = 0;
	var uLocal_4630 = 0;
	var uLocal_4631 = 0;
	var uLocal_4632 = 0;
	var uLocal_4633 = 0;
	var uLocal_4634 = 0;
	var uLocal_4635 = 0;
	var uLocal_4636 = 0;
	var uLocal_4637 = 0;
	var uLocal_4638 = 0;
	var uLocal_4639 = 0;
	var uLocal_4640 = 0;
	var uLocal_4641 = 0;
	var uLocal_4642 = 0;
	var uLocal_4643 = 0;
	var uLocal_4644 = 0;
	var uLocal_4645 = 0;
	var uLocal_4646 = 0;
	var uLocal_4647 = 0;
	var uLocal_4648 = 0;
	var uLocal_4649 = 0;
	var uLocal_4650 = 0;
	var uLocal_4651 = 20;
	var uLocal_4652 = 0;
	var uLocal_4653 = 0;
	var uLocal_4654 = 0;
	var uLocal_4655 = 0;
	var uLocal_4656 = 0;
	var uLocal_4657 = 0;
	var uLocal_4658 = 0;
	var uLocal_4659 = 0;
	var uLocal_4660 = 0;
	var uLocal_4661 = 0;
	var uLocal_4662 = 0;
	var uLocal_4663 = 0;
	var uLocal_4664 = 0;
	var uLocal_4665 = 0;
	var uLocal_4666 = 0;
	var uLocal_4667 = 0;
	var uLocal_4668 = 0;
	var uLocal_4669 = 0;
	var uLocal_4670 = 0;
	var uLocal_4671 = 0;
	var uLocal_4672 = 0;
	var uLocal_4673 = 0;
	var uLocal_4674 = 0;
	var uLocal_4675 = 0;
	var uLocal_4676 = 0;
	var uLocal_4677 = 0;
	var uLocal_4678 = 0;
	var uLocal_4679 = 0;
	var uLocal_4680 = 0;
	var uLocal_4681 = 0;
	var uLocal_4682 = 0;
	var uLocal_4683 = 0;
	var uLocal_4684 = 0;
	var uLocal_4685 = 0;
	var uLocal_4686 = 0;
	var uLocal_4687 = 0;
	var uLocal_4688 = 0;
	var uLocal_4689 = 0;
	var uLocal_4690 = 0;
	var uLocal_4691 = 0;
	var uLocal_4692 = 0;
	var uLocal_4693 = 0;
	var uLocal_4694 = 0;
	var uLocal_4695 = 0;
	var uLocal_4696 = 0;
	var uLocal_4697 = 0;
	var uLocal_4698 = 0;
	var uLocal_4699 = 0;
	var uLocal_4700 = 0;
	var uLocal_4701 = 0;
	var uLocal_4702 = 0;
	var uLocal_4703 = 0;
	var uLocal_4704 = 0;
	var uLocal_4705 = 0;
	var uLocal_4706 = 0;
	var uLocal_4707 = 0;
	var uLocal_4708 = 0;
	var uLocal_4709 = 0;
	var uLocal_4710 = 0;
	var uLocal_4711 = 0;
	var uLocal_4712 = 0;
	var uLocal_4713 = 0;
	var uLocal_4714 = 0;
	var uLocal_4715 = 0;
	var uLocal_4716 = 0;
	var uLocal_4717 = 0;
	var uLocal_4718 = 20;
	var uLocal_4719 = 0;
	var uLocal_4720 = 0;
	var uLocal_4721 = 0;
	var uLocal_4722 = 0;
	var uLocal_4723 = 0;
	var uLocal_4724 = 0;
	var uLocal_4725 = 0;
	var uLocal_4726 = 0;
	var uLocal_4727 = 0;
	var uLocal_4728 = 0;
	var uLocal_4729 = 0;
	var uLocal_4730 = 0;
	var uLocal_4731 = 0;
	var uLocal_4732 = 0;
	var uLocal_4733 = 0;
	var uLocal_4734 = 0;
	var uLocal_4735 = 0;
	var uLocal_4736 = 0;
	var uLocal_4737 = 0;
	var uLocal_4738 = 0;
	var uLocal_4739 = 0;
	var uLocal_4740 = 0;
	var uLocal_4741 = 0;
	var uLocal_4742 = 0;
	var uLocal_4743 = 0;
	var uLocal_4744 = 0;
	var uLocal_4745 = 0;
	var uLocal_4746 = 0;
	var uLocal_4747 = 0;
	var uLocal_4748 = 0;
	var uLocal_4749 = 0;
	var uLocal_4750 = 0;
	var uLocal_4751 = 0;
	var uLocal_4752 = 0;
	var uLocal_4753 = 0;
	var uLocal_4754 = 0;
	var uLocal_4755 = 0;
	var uLocal_4756 = 0;
	var uLocal_4757 = 0;
	var uLocal_4758 = 0;
	var uLocal_4759 = 0;
	var uLocal_4760 = 0;
	var uLocal_4761 = 0;
	var uLocal_4762 = 0;
	var uLocal_4763 = 0;
	var uLocal_4764 = 0;
	var uLocal_4765 = 0;
	var uLocal_4766 = 0;
	var uLocal_4767 = 0;
	var uLocal_4768 = 0;
	var uLocal_4769 = 0;
	var uLocal_4770 = 0;
	var uLocal_4771 = 0;
	var uLocal_4772 = 0;
	var uLocal_4773 = 0;
	var uLocal_4774 = 0;
	var uLocal_4775 = 0;
	var uLocal_4776 = 0;
	var uLocal_4777 = 0;
	var uLocal_4778 = 0;
	var uLocal_4779 = 0;
	var uLocal_4780 = 0;
	var uLocal_4781 = 0;
	var uLocal_4782 = 0;
	var uLocal_4783 = 0;
	var uLocal_4784 = 0;
	var uLocal_4785 = 20;
	var uLocal_4786 = 0;
	var uLocal_4787 = 0;
	var uLocal_4788 = 0;
	var uLocal_4789 = 0;
	var uLocal_4790 = 0;
	var uLocal_4791 = 0;
	var uLocal_4792 = 0;
	var uLocal_4793 = 0;
	var uLocal_4794 = 0;
	var uLocal_4795 = 0;
	var uLocal_4796 = 0;
	var uLocal_4797 = 0;
	var uLocal_4798 = 0;
	var uLocal_4799 = 0;
	var uLocal_4800 = 0;
	var uLocal_4801 = 0;
	var uLocal_4802 = 0;
	var uLocal_4803 = 0;
	var uLocal_4804 = 0;
	var uLocal_4805 = 0;
	var uLocal_4806 = 0;
	var uLocal_4807 = 0;
	var uLocal_4808 = 0;
	var uLocal_4809 = 0;
	var uLocal_4810 = 0;
	var uLocal_4811 = 0;
	var uLocal_4812 = 0;
	var uLocal_4813 = 0;
	var uLocal_4814 = 0;
	var uLocal_4815 = 0;
	var uLocal_4816 = 0;
	var uLocal_4817 = 0;
	var uLocal_4818 = 0;
	var uLocal_4819 = 0;
	var uLocal_4820 = 0;
	var uLocal_4821 = 0;
	var uLocal_4822 = 0;
	var uLocal_4823 = 0;
	var uLocal_4824 = 0;
	var uLocal_4825 = 0;
	var uLocal_4826 = 0;
	var uLocal_4827 = 0;
	var uLocal_4828 = 0;
	var uLocal_4829 = 0;
	var uLocal_4830 = 0;
	var uLocal_4831 = 0;
	var uLocal_4832 = 0;
	var uLocal_4833 = 0;
	var uLocal_4834 = 0;
	var uLocal_4835 = 0;
	var uLocal_4836 = 0;
	var uLocal_4837 = 0;
	var uLocal_4838 = 0;
	var uLocal_4839 = 0;
	var uLocal_4840 = 0;
	var uLocal_4841 = 0;
	var uLocal_4842 = 0;
	var uLocal_4843 = 0;
	var uLocal_4844 = 0;
	var uLocal_4845 = 0;
	var uLocal_4846 = 0;
	var uLocal_4847 = 0;
	var uLocal_4848 = 0;
	var uLocal_4849 = 0;
	var uLocal_4850 = 0;
	var uLocal_4851 = 0;
	var uLocal_4852 = 20;
	var uLocal_4853 = 0;
	var uLocal_4854 = 0;
	var uLocal_4855 = 0;
	var uLocal_4856 = 0;
	var uLocal_4857 = 0;
	var uLocal_4858 = 0;
	var uLocal_4859 = 0;
	var uLocal_4860 = 0;
	var uLocal_4861 = 0;
	var uLocal_4862 = 0;
	var uLocal_4863 = 0;
	var uLocal_4864 = 0;
	var uLocal_4865 = 0;
	var uLocal_4866 = 0;
	var uLocal_4867 = 0;
	var uLocal_4868 = 0;
	var uLocal_4869 = 0;
	var uLocal_4870 = 0;
	var uLocal_4871 = 0;
	var uLocal_4872 = 0;
	var uLocal_4873 = 0;
	var uLocal_4874 = 0;
	var uLocal_4875 = 0;
	var uLocal_4876 = 0;
	var uLocal_4877 = 0;
	var uLocal_4878 = 0;
	var uLocal_4879 = 0;
	var uLocal_4880 = 0;
	var uLocal_4881 = 0;
	var uLocal_4882 = 0;
	var uLocal_4883 = 0;
	var uLocal_4884 = 0;
	var uLocal_4885 = 0;
	var uLocal_4886 = 0;
	var uLocal_4887 = 0;
	var uLocal_4888 = 0;
	var uLocal_4889 = 0;
	var uLocal_4890 = 0;
	var uLocal_4891 = 0;
	var uLocal_4892 = 0;
	var uLocal_4893 = 0;
	var uLocal_4894 = 0;
	var uLocal_4895 = 0;
	var uLocal_4896 = 0;
	var uLocal_4897 = 0;
	var uLocal_4898 = 0;
	var uLocal_4899 = 0;
	var uLocal_4900 = 0;
	var uLocal_4901 = 0;
	var uLocal_4902 = 0;
	var uLocal_4903 = 0;
	var uLocal_4904 = 0;
	var uLocal_4905 = 0;
	var uLocal_4906 = 0;
	var uLocal_4907 = 0;
	var uLocal_4908 = 0;
	var uLocal_4909 = 0;
	var uLocal_4910 = 0;
	var uLocal_4911 = 0;
	var uLocal_4912 = 0;
	var uLocal_4913 = 0;
	var uLocal_4914 = 0;
	var uLocal_4915 = 0;
	var uLocal_4916 = 0;
	var uLocal_4917 = 0;
	var uLocal_4918 = 0;
	var uLocal_4919 = 20;
	var uLocal_4920 = 0;
	var uLocal_4921 = 0;
	var uLocal_4922 = 0;
	var uLocal_4923 = 0;
	var uLocal_4924 = 0;
	var uLocal_4925 = 0;
	var uLocal_4926 = 0;
	var uLocal_4927 = 0;
	var uLocal_4928 = 0;
	var uLocal_4929 = 0;
	var uLocal_4930 = 0;
	var uLocal_4931 = 0;
	var uLocal_4932 = 0;
	var uLocal_4933 = 0;
	var uLocal_4934 = 0;
	var uLocal_4935 = 0;
	var uLocal_4936 = 0;
	var uLocal_4937 = 0;
	var uLocal_4938 = 0;
	var uLocal_4939 = 0;
	var uLocal_4940 = 0;
	var uLocal_4941 = 0;
	var uLocal_4942 = 0;
	var uLocal_4943 = 0;
	var uLocal_4944 = 0;
	var uLocal_4945 = 0;
	var uLocal_4946 = 0;
	var uLocal_4947 = 0;
	var uLocal_4948 = 0;
	var uLocal_4949 = 0;
	var uLocal_4950 = 0;
	var uLocal_4951 = 0;
	var uLocal_4952 = 0;
	var uLocal_4953 = 0;
	var uLocal_4954 = 0;
	var uLocal_4955 = 0;
	var uLocal_4956 = 0;
	var uLocal_4957 = 0;
	var uLocal_4958 = 0;
	var uLocal_4959 = 0;
	var uLocal_4960 = 0;
	var uLocal_4961 = 0;
	var uLocal_4962 = 0;
	var uLocal_4963 = 0;
	var uLocal_4964 = 0;
	var uLocal_4965 = 0;
	var uLocal_4966 = 0;
	var uLocal_4967 = 0;
	var uLocal_4968 = 0;
	var uLocal_4969 = 0;
	var uLocal_4970 = 0;
	var uLocal_4971 = 0;
	var uLocal_4972 = 0;
	var uLocal_4973 = 0;
	var uLocal_4974 = 0;
	var uLocal_4975 = 0;
	var uLocal_4976 = 0;
	var uLocal_4977 = 0;
	var uLocal_4978 = 0;
	var uLocal_4979 = 0;
	var uLocal_4980 = 0;
	var uLocal_4981 = 0;
	var uLocal_4982 = 0;
	var uLocal_4983 = 0;
	var uLocal_4984 = 0;
	var uLocal_4985 = 0;
	var uLocal_4986 = 20;
	var uLocal_4987 = 0;
	var uLocal_4988 = 0;
	var uLocal_4989 = 0;
	var uLocal_4990 = 0;
	var uLocal_4991 = 0;
	var uLocal_4992 = 0;
	var uLocal_4993 = 0;
	var uLocal_4994 = 0;
	var uLocal_4995 = 0;
	var uLocal_4996 = 0;
	var uLocal_4997 = 0;
	var uLocal_4998 = 0;
	var uLocal_4999 = 0;
	var uLocal_5000 = 0;
	var uLocal_5001 = 0;
	var uLocal_5002 = 0;
	var uLocal_5003 = 0;
	var uLocal_5004 = 0;
	var uLocal_5005 = 0;
	var uLocal_5006 = 0;
	var uLocal_5007 = 0;
	var uLocal_5008 = 0;
	var uLocal_5009 = 0;
	var uLocal_5010 = 0;
	var uLocal_5011 = 0;
	var uLocal_5012 = 0;
	var uLocal_5013 = 0;
	var uLocal_5014 = 0;
	var uLocal_5015 = 0;
	var uLocal_5016 = 0;
	var uLocal_5017 = 0;
	var uLocal_5018 = 0;
	var uLocal_5019 = 0;
	var uLocal_5020 = 0;
	var uLocal_5021 = 0;
	var uLocal_5022 = 0;
	var uLocal_5023 = 0;
	var uLocal_5024 = 0;
	var uLocal_5025 = 0;
	var uLocal_5026 = 0;
	var uLocal_5027 = 0;
	var uLocal_5028 = 0;
	var uLocal_5029 = 0;
	var uLocal_5030 = 0;
	var uLocal_5031 = 0;
	var uLocal_5032 = 0;
	var uLocal_5033 = 0;
	var uLocal_5034 = 0;
	var uLocal_5035 = 0;
	var uLocal_5036 = 0;
	var uLocal_5037 = 0;
	var uLocal_5038 = 0;
	var uLocal_5039 = 0;
	var uLocal_5040 = 0;
	var uLocal_5041 = 0;
	var uLocal_5042 = 0;
	var uLocal_5043 = 0;
	var uLocal_5044 = 0;
	var uLocal_5045 = 0;
	var uLocal_5046 = 0;
	var uLocal_5047 = 0;
	var uLocal_5048 = 0;
	var uLocal_5049 = 0;
	var uLocal_5050 = 0;
	var uLocal_5051 = 0;
	var uLocal_5052 = 0;
	var uLocal_5053 = 20;
	var uLocal_5054 = 0;
	var uLocal_5055 = 0;
	var uLocal_5056 = 0;
	var uLocal_5057 = 0;
	var uLocal_5058 = 0;
	var uLocal_5059 = 0;
	var uLocal_5060 = 0;
	var uLocal_5061 = 0;
	var uLocal_5062 = 0;
	var uLocal_5063 = 0;
	var uLocal_5064 = 0;
	var uLocal_5065 = 0;
	var uLocal_5066 = 0;
	var uLocal_5067 = 0;
	var uLocal_5068 = 0;
	var uLocal_5069 = 0;
	var uLocal_5070 = 0;
	var uLocal_5071 = 0;
	var uLocal_5072 = 0;
	var uLocal_5073 = 0;
	var uLocal_5074 = 0;
	var uLocal_5075 = 0;
	var uLocal_5076 = 0;
	var uLocal_5077 = 0;
	var uLocal_5078 = 0;
	var uLocal_5079 = 0;
	var uLocal_5080 = 0;
	var uLocal_5081 = 0;
	var uLocal_5082 = 0;
	var uLocal_5083 = 0;
	var uLocal_5084 = 0;
	var uLocal_5085 = 0;
	var uLocal_5086 = 0;
	var uLocal_5087 = 0;
	var uLocal_5088 = 0;
	var uLocal_5089 = 0;
	var uLocal_5090 = 0;
	var uLocal_5091 = 0;
	var uLocal_5092 = 0;
	var uLocal_5093 = 0;
	var uLocal_5094 = 0;
	var uLocal_5095 = 0;
	var uLocal_5096 = 0;
	var uLocal_5097 = 0;
	var uLocal_5098 = 0;
	var uLocal_5099 = 0;
	var uLocal_5100 = 0;
	var uLocal_5101 = 0;
	var uLocal_5102 = 0;
	var uLocal_5103 = 0;
	var uLocal_5104 = 0;
	var uLocal_5105 = 0;
	var uLocal_5106 = 0;
	var uLocal_5107 = 0;
	var uLocal_5108 = 0;
	var uLocal_5109 = 0;
	var uLocal_5110 = 0;
	var uLocal_5111 = 0;
	var uLocal_5112 = 0;
	var uLocal_5113 = 0;
	var uLocal_5114 = 0;
	var uLocal_5115 = 0;
	var uLocal_5116 = 0;
	var uLocal_5117 = 0;
	var uLocal_5118 = 0;
	var uLocal_5119 = 0;
	var uLocal_5120 = 20;
	var uLocal_5121 = 0;
	var uLocal_5122 = 0;
	var uLocal_5123 = 0;
	var uLocal_5124 = 0;
	var uLocal_5125 = 0;
	var uLocal_5126 = 0;
	var uLocal_5127 = 0;
	var uLocal_5128 = 0;
	var uLocal_5129 = 0;
	var uLocal_5130 = 0;
	var uLocal_5131 = 0;
	var uLocal_5132 = 0;
	var uLocal_5133 = 0;
	var uLocal_5134 = 0;
	var uLocal_5135 = 0;
	var uLocal_5136 = 0;
	var uLocal_5137 = 0;
	var uLocal_5138 = 0;
	var uLocal_5139 = 0;
	var uLocal_5140 = 0;
	var uLocal_5141 = 0;
	var uLocal_5142 = 0;
	var uLocal_5143 = 0;
	var uLocal_5144 = 0;
	var uLocal_5145 = 0;
	var uLocal_5146 = 0;
	var uLocal_5147 = 0;
	var uLocal_5148 = 0;
	var uLocal_5149 = 0;
	var uLocal_5150 = 0;
	var uLocal_5151 = 0;
	var uLocal_5152 = 0;
	var uLocal_5153 = 0;
	var uLocal_5154 = 0;
	var uLocal_5155 = 0;
	var uLocal_5156 = 0;
	var uLocal_5157 = 0;
	var uLocal_5158 = 0;
	var uLocal_5159 = 0;
	var uLocal_5160 = 0;
	var uLocal_5161 = 0;
	var uLocal_5162 = 0;
	var uLocal_5163 = 0;
	var uLocal_5164 = 0;
	var uLocal_5165 = 0;
	var uLocal_5166 = 0;
	var uLocal_5167 = 0;
	var uLocal_5168 = 0;
	var uLocal_5169 = 0;
	var uLocal_5170 = 0;
	var uLocal_5171 = 0;
	var uLocal_5172 = 0;
	var uLocal_5173 = 0;
	var uLocal_5174 = 0;
	var uLocal_5175 = 0;
	var uLocal_5176 = 0;
	var uLocal_5177 = 0;
	var uLocal_5178 = 0;
	var uLocal_5179 = 0;
	var uLocal_5180 = 0;
	var uLocal_5181 = 0;
	var uLocal_5182 = 0;
	var uLocal_5183 = 0;
	var uLocal_5184 = 0;
	var uLocal_5185 = 0;
	var uLocal_5186 = 0;
	var uLocal_5187 = 20;
	var uLocal_5188 = 0;
	var uLocal_5189 = 0;
	var uLocal_5190 = 0;
	var uLocal_5191 = 0;
	var uLocal_5192 = 0;
	var uLocal_5193 = 0;
	var uLocal_5194 = 0;
	var uLocal_5195 = 0;
	var uLocal_5196 = 0;
	var uLocal_5197 = 0;
	var uLocal_5198 = 0;
	var uLocal_5199 = 0;
	var uLocal_5200 = 0;
	var uLocal_5201 = 0;
	var uLocal_5202 = 0;
	var uLocal_5203 = 0;
	var uLocal_5204 = 0;
	var uLocal_5205 = 0;
	var uLocal_5206 = 0;
	var uLocal_5207 = 0;
	var uLocal_5208 = 0;
	var uLocal_5209 = 0;
	var uLocal_5210 = 0;
	var uLocal_5211 = 0;
	var uLocal_5212 = 0;
	var uLocal_5213 = 0;
	var uLocal_5214 = 0;
	var uLocal_5215 = 0;
	var uLocal_5216 = 0;
	var uLocal_5217 = 0;
	var uLocal_5218 = 0;
	var uLocal_5219 = 0;
	var uLocal_5220 = 0;
	var uLocal_5221 = 0;
	var uLocal_5222 = 0;
	var uLocal_5223 = 0;
	var uLocal_5224 = 0;
	var uLocal_5225 = 0;
	var uLocal_5226 = 0;
	var uLocal_5227 = 0;
	var uLocal_5228 = 0;
	var uLocal_5229 = 0;
	var uLocal_5230 = 0;
	var uLocal_5231 = 0;
	var uLocal_5232 = 0;
	var uLocal_5233 = 0;
	var uLocal_5234 = 0;
	var uLocal_5235 = 0;
	var uLocal_5236 = 0;
	var uLocal_5237 = 0;
	var uLocal_5238 = 0;
	var uLocal_5239 = 0;
	var uLocal_5240 = 0;
	var uLocal_5241 = 0;
	var uLocal_5242 = 0;
	var uLocal_5243 = 0;
	var uLocal_5244 = 0;
	var uLocal_5245 = 0;
	var uLocal_5246 = 0;
	var uLocal_5247 = 0;
	var uLocal_5248 = 0;
	var uLocal_5249 = 0;
	var uLocal_5250 = 0;
	var uLocal_5251 = 0;
	var uLocal_5252 = 0;
	var uLocal_5253 = 0;
	var uLocal_5254 = 20;
	var uLocal_5255 = 0;
	var uLocal_5256 = 0;
	var uLocal_5257 = 0;
	var uLocal_5258 = 0;
	var uLocal_5259 = 0;
	var uLocal_5260 = 0;
	var uLocal_5261 = 0;
	var uLocal_5262 = 0;
	var uLocal_5263 = 0;
	var uLocal_5264 = 0;
	var uLocal_5265 = 0;
	var uLocal_5266 = 0;
	var uLocal_5267 = 0;
	var uLocal_5268 = 0;
	var uLocal_5269 = 0;
	var uLocal_5270 = 0;
	var uLocal_5271 = 0;
	var uLocal_5272 = 0;
	var uLocal_5273 = 0;
	var uLocal_5274 = 0;
	var uLocal_5275 = 0;
	var uLocal_5276 = 0;
	var uLocal_5277 = 0;
	var uLocal_5278 = 0;
	var uLocal_5279 = 0;
	var uLocal_5280 = 0;
	var uLocal_5281 = 0;
	var uLocal_5282 = 0;
	var uLocal_5283 = 0;
	var uLocal_5284 = 0;
	var uLocal_5285 = 0;
	var uLocal_5286 = 0;
	var uLocal_5287 = 0;
	var uLocal_5288 = 0;
	var uLocal_5289 = 0;
	var uLocal_5290 = 0;
	var uLocal_5291 = 0;
	var uLocal_5292 = 0;
	var uLocal_5293 = 0;
	var uLocal_5294 = 0;
	var uLocal_5295 = 0;
	var uLocal_5296 = 0;
	var uLocal_5297 = 0;
	var uLocal_5298 = 0;
	var uLocal_5299 = 0;
	var uLocal_5300 = 0;
	var uLocal_5301 = 0;
	var uLocal_5302 = 0;
	var uLocal_5303 = 0;
	var uLocal_5304 = 0;
	var uLocal_5305 = 0;
	var uLocal_5306 = 0;
	var uLocal_5307 = 0;
	var uLocal_5308 = 0;
	var uLocal_5309 = 0;
	var uLocal_5310 = 0;
	var uLocal_5311 = 0;
	var uLocal_5312 = 0;
	var uLocal_5313 = 0;
	var uLocal_5314 = 0;
	var uLocal_5315 = 0;
	var uLocal_5316 = 0;
	var uLocal_5317 = 0;
	var uLocal_5318 = 0;
	var uLocal_5319 = 0;
	var uLocal_5320 = 0;
	var uLocal_5321 = 20;
	var uLocal_5322 = 0;
	var uLocal_5323 = 0;
	var uLocal_5324 = 0;
	var uLocal_5325 = 0;
	var uLocal_5326 = 0;
	var uLocal_5327 = 0;
	var uLocal_5328 = 0;
	var uLocal_5329 = 0;
	var uLocal_5330 = 0;
	var uLocal_5331 = 0;
	var uLocal_5332 = 0;
	var uLocal_5333 = 0;
	var uLocal_5334 = 0;
	var uLocal_5335 = 0;
	var uLocal_5336 = 0;
	var uLocal_5337 = 0;
	var uLocal_5338 = 0;
	var uLocal_5339 = 0;
	var uLocal_5340 = 0;
	var uLocal_5341 = 0;
	var uLocal_5342 = 0;
	var uLocal_5343 = 0;
	var uLocal_5344 = 0;
	var uLocal_5345 = 0;
	var uLocal_5346 = 0;
	var uLocal_5347 = 0;
	var uLocal_5348 = 0;
	var uLocal_5349 = 0;
	var uLocal_5350 = 0;
	var uLocal_5351 = 0;
	var uLocal_5352 = 0;
	var uLocal_5353 = 0;
	var uLocal_5354 = 0;
	var uLocal_5355 = 0;
	var uLocal_5356 = 0;
	var uLocal_5357 = 0;
	var uLocal_5358 = 0;
	var uLocal_5359 = 0;
	var uLocal_5360 = 0;
	var uLocal_5361 = 0;
	var uLocal_5362 = 0;
	var uLocal_5363 = 0;
	var uLocal_5364 = 0;
	var uLocal_5365 = 0;
	var uLocal_5366 = 0;
	var uLocal_5367 = 0;
	var uLocal_5368 = 0;
	var uLocal_5369 = 0;
	var uLocal_5370 = 0;
	var uLocal_5371 = 0;
	var uLocal_5372 = 0;
	var uLocal_5373 = 0;
	var uLocal_5374 = 0;
	var uLocal_5375 = 0;
	var uLocal_5376 = 0;
	var uLocal_5377 = 0;
	var uLocal_5378 = 0;
	var uLocal_5379 = 0;
	var uLocal_5380 = 0;
	var uLocal_5381 = 0;
	var uLocal_5382 = 0;
	var uLocal_5383 = 0;
	var uLocal_5384 = 0;
	var uLocal_5385 = 0;
	var uLocal_5386 = 0;
	var uLocal_5387 = 0;
	var uLocal_5388 = 20;
	var uLocal_5389 = 0;
	var uLocal_5390 = 0;
	var uLocal_5391 = 0;
	var uLocal_5392 = 0;
	var uLocal_5393 = 0;
	var uLocal_5394 = 0;
	var uLocal_5395 = 0;
	var uLocal_5396 = 0;
	var uLocal_5397 = 0;
	var uLocal_5398 = 0;
	var uLocal_5399 = 0;
	var uLocal_5400 = 0;
	var uLocal_5401 = 0;
	var uLocal_5402 = 0;
	var uLocal_5403 = 0;
	var uLocal_5404 = 0;
	var uLocal_5405 = 0;
	var uLocal_5406 = 0;
	var uLocal_5407 = 0;
	var uLocal_5408 = 0;
	var uLocal_5409 = 0;
	var uLocal_5410 = 0;
	var uLocal_5411 = 0;
	var uLocal_5412 = 0;
	var uLocal_5413 = 0;
	var uLocal_5414 = 0;
	var uLocal_5415 = 0;
	var uLocal_5416 = 0;
	var uLocal_5417 = 0;
	var uLocal_5418 = 0;
	var uLocal_5419 = 0;
	var uLocal_5420 = 0;
	var uLocal_5421 = 0;
	var uLocal_5422 = 0;
	var uLocal_5423 = 0;
	var uLocal_5424 = 0;
	var uLocal_5425 = 0;
	var uLocal_5426 = 0;
	var uLocal_5427 = 0;
	var uLocal_5428 = 0;
	var uLocal_5429 = 0;
	var uLocal_5430 = 0;
	var uLocal_5431 = 0;
	var uLocal_5432 = 0;
	var uLocal_5433 = 0;
	var uLocal_5434 = 0;
	var uLocal_5435 = 0;
	var uLocal_5436 = 0;
	var uLocal_5437 = 0;
	var uLocal_5438 = 0;
	var uLocal_5439 = 0;
	var uLocal_5440 = 0;
	var uLocal_5441 = 0;
	var uLocal_5442 = 0;
	var uLocal_5443 = 0;
	var uLocal_5444 = 0;
	var uLocal_5445 = 0;
	var uLocal_5446 = 0;
	var uLocal_5447 = 0;
	var uLocal_5448 = 0;
	var uLocal_5449 = 0;
	var uLocal_5450 = 0;
	var uLocal_5451 = 0;
	var uLocal_5452 = 0;
	var uLocal_5453 = 0;
	var uLocal_5454 = 0;
	var uLocal_5455 = 20;
	var uLocal_5456 = 0;
	var uLocal_5457 = 0;
	var uLocal_5458 = 0;
	var uLocal_5459 = 0;
	var uLocal_5460 = 0;
	var uLocal_5461 = 0;
	var uLocal_5462 = 0;
	var uLocal_5463 = 0;
	var uLocal_5464 = 0;
	var uLocal_5465 = 0;
	var uLocal_5466 = 0;
	var uLocal_5467 = 0;
	var uLocal_5468 = 0;
	var uLocal_5469 = 0;
	var uLocal_5470 = 0;
	var uLocal_5471 = 0;
	var uLocal_5472 = 0;
	var uLocal_5473 = 0;
	var uLocal_5474 = 0;
	var uLocal_5475 = 0;
	var uLocal_5476 = 0;
	var uLocal_5477 = 0;
	var uLocal_5478 = 0;
	var uLocal_5479 = 0;
	var uLocal_5480 = 0;
	var uLocal_5481 = 0;
	var uLocal_5482 = 0;
	var uLocal_5483 = 0;
	var uLocal_5484 = 0;
	var uLocal_5485 = 0;
	var uLocal_5486 = 0;
	var uLocal_5487 = 0;
	var uLocal_5488 = 0;
	var uLocal_5489 = 0;
	var uLocal_5490 = 0;
	var uLocal_5491 = 0;
	var uLocal_5492 = 0;
	var uLocal_5493 = 0;
	var uLocal_5494 = 0;
	var uLocal_5495 = 0;
	var uLocal_5496 = 0;
	var uLocal_5497 = 0;
	var uLocal_5498 = 0;
	var uLocal_5499 = 0;
	var uLocal_5500 = 0;
	var uLocal_5501 = 0;
	var uLocal_5502 = 0;
	var uLocal_5503 = 0;
	var uLocal_5504 = 0;
	var uLocal_5505 = 0;
	var uLocal_5506 = 0;
	var uLocal_5507 = 0;
	var uLocal_5508 = 0;
	var uLocal_5509 = 0;
	var uLocal_5510 = 0;
	var uLocal_5511 = 0;
	var uLocal_5512 = 0;
	var uLocal_5513 = 0;
	var uLocal_5514 = 0;
	var uLocal_5515 = 0;
	var uLocal_5516 = 0;
	var uLocal_5517 = 0;
	var uLocal_5518 = 0;
	var uLocal_5519 = 0;
	var uLocal_5520 = 0;
	var uLocal_5521 = 0;
	var uLocal_5522 = 20;
	var uLocal_5523 = 0;
	var uLocal_5524 = 0;
	var uLocal_5525 = 0;
	var uLocal_5526 = 0;
	var uLocal_5527 = 0;
	var uLocal_5528 = 0;
	var uLocal_5529 = 0;
	var uLocal_5530 = 0;
	var uLocal_5531 = 0;
	var uLocal_5532 = 0;
	var uLocal_5533 = 0;
	var uLocal_5534 = 0;
	var uLocal_5535 = 0;
	var uLocal_5536 = 0;
	var uLocal_5537 = 0;
	var uLocal_5538 = 0;
	var uLocal_5539 = 0;
	var uLocal_5540 = 0;
	var uLocal_5541 = 0;
	var uLocal_5542 = 0;
	var uLocal_5543 = 0;
	var uLocal_5544 = 0;
	var uLocal_5545 = 0;
	var uLocal_5546 = 0;
	var uLocal_5547 = 0;
	var uLocal_5548 = 0;
	var uLocal_5549 = 0;
	var uLocal_5550 = 0;
	var uLocal_5551 = 0;
	var uLocal_5552 = 0;
	var uLocal_5553 = 0;
	var uLocal_5554 = 0;
	var uLocal_5555 = 0;
	var uLocal_5556 = 0;
	var uLocal_5557 = 0;
	var uLocal_5558 = 0;
	var uLocal_5559 = 0;
	var uLocal_5560 = 0;
	var uLocal_5561 = 0;
	var uLocal_5562 = 0;
	var uLocal_5563 = 0;
	var uLocal_5564 = 0;
	var uLocal_5565 = 0;
	var uLocal_5566 = 0;
	var uLocal_5567 = 0;
	var uLocal_5568 = 0;
	var uLocal_5569 = 0;
	var uLocal_5570 = 0;
	var uLocal_5571 = 0;
	var uLocal_5572 = 0;
	var uLocal_5573 = 0;
	var uLocal_5574 = 0;
	var uLocal_5575 = 0;
	var uLocal_5576 = 0;
	var uLocal_5577 = 0;
	var uLocal_5578 = 0;
	var uLocal_5579 = 0;
	var uLocal_5580 = 0;
	var uLocal_5581 = 0;
	var uLocal_5582 = 0;
	var uLocal_5583 = 0;
	var uLocal_5584 = 0;
	var uLocal_5585 = 0;
	var uLocal_5586 = 0;
	var uLocal_5587 = 0;
	var uLocal_5588 = 0;
	var uLocal_5589 = 20;
	var uLocal_5590 = 0;
	var uLocal_5591 = 0;
	var uLocal_5592 = 0;
	var uLocal_5593 = 0;
	var uLocal_5594 = 0;
	var uLocal_5595 = 0;
	var uLocal_5596 = 0;
	var uLocal_5597 = 0;
	var uLocal_5598 = 0;
	var uLocal_5599 = 0;
	var uLocal_5600 = 0;
	var uLocal_5601 = 0;
	var uLocal_5602 = 0;
	var uLocal_5603 = 0;
	var uLocal_5604 = 0;
	var uLocal_5605 = 0;
	var uLocal_5606 = 0;
	var uLocal_5607 = 0;
	var uLocal_5608 = 0;
	var uLocal_5609 = 0;
	var uLocal_5610 = 0;
	var uLocal_5611 = 0;
	var uLocal_5612 = 0;
	var uLocal_5613 = 0;
	var uLocal_5614 = 0;
	var uLocal_5615 = 0;
	var uLocal_5616 = 0;
	var uLocal_5617 = 0;
	var uLocal_5618 = 0;
	var uLocal_5619 = 0;
	var uLocal_5620 = 0;
	var uLocal_5621 = 0;
	var uLocal_5622 = 0;
	var uLocal_5623 = 0;
	var uLocal_5624 = 0;
	var uLocal_5625 = 0;
	var uLocal_5626 = 0;
	var uLocal_5627 = 0;
	var uLocal_5628 = 0;
	var uLocal_5629 = 0;
	var uLocal_5630 = 0;
	var uLocal_5631 = 0;
	var uLocal_5632 = 0;
	var uLocal_5633 = 0;
	var uLocal_5634 = 0;
	var uLocal_5635 = 0;
	var uLocal_5636 = 0;
	var uLocal_5637 = 0;
	var uLocal_5638 = 0;
	var uLocal_5639 = 0;
	var uLocal_5640 = 0;
	var uLocal_5641 = 0;
	var uLocal_5642 = 0;
	var uLocal_5643 = 0;
	var uLocal_5644 = 0;
	var uLocal_5645 = 0;
	var uLocal_5646 = 0;
	var uLocal_5647 = 0;
	var uLocal_5648 = 0;
	var uLocal_5649 = 0;
	var uLocal_5650 = 0;
	var uLocal_5651 = 0;
	var uLocal_5652 = 0;
	var uLocal_5653 = 0;
	var uLocal_5654 = 0;
	var uLocal_5655 = 0;
	var uLocal_5656 = 20;
	var uLocal_5657 = 0;
	var uLocal_5658 = 0;
	var uLocal_5659 = 0;
	var uLocal_5660 = 0;
	var uLocal_5661 = 0;
	var uLocal_5662 = 0;
	var uLocal_5663 = 0;
	var uLocal_5664 = 0;
	var uLocal_5665 = 0;
	var uLocal_5666 = 0;
	var uLocal_5667 = 0;
	var uLocal_5668 = 0;
	var uLocal_5669 = 0;
	var uLocal_5670 = 0;
	var uLocal_5671 = 0;
	var uLocal_5672 = 0;
	var uLocal_5673 = 0;
	var uLocal_5674 = 0;
	var uLocal_5675 = 0;
	var uLocal_5676 = 0;
	var uLocal_5677 = 0;
	var uLocal_5678 = 0;
	var uLocal_5679 = 0;
	var uLocal_5680 = 0;
	var uLocal_5681 = 0;
	var uLocal_5682 = 0;
	var uLocal_5683 = 0;
	var uLocal_5684 = 0;
	var uLocal_5685 = 0;
	var uLocal_5686 = 0;
	var uLocal_5687 = 0;
	var uLocal_5688 = 0;
	var uLocal_5689 = 0;
	var uLocal_5690 = 0;
	var uLocal_5691 = 0;
	var uLocal_5692 = 0;
	var uLocal_5693 = 0;
	var uLocal_5694 = 0;
	var uLocal_5695 = 0;
	var uLocal_5696 = 0;
	var uLocal_5697 = 0;
	var uLocal_5698 = 0;
	var uLocal_5699 = 0;
	var uLocal_5700 = 0;
	var uLocal_5701 = 0;
	var uLocal_5702 = 0;
	var uLocal_5703 = 0;
	var uLocal_5704 = 0;
	var uLocal_5705 = 0;
	var uLocal_5706 = 0;
	var uLocal_5707 = 0;
	var uLocal_5708 = 0;
	var uLocal_5709 = 0;
	var uLocal_5710 = 0;
	var uLocal_5711 = 0;
	var uLocal_5712 = 0;
	var uLocal_5713 = 0;
	var uLocal_5714 = 0;
	var uLocal_5715 = 0;
	var uLocal_5716 = 0;
	var uLocal_5717 = 0;
	var uLocal_5718 = 0;
	var uLocal_5719 = 0;
	var uLocal_5720 = 0;
	var uLocal_5721 = 0;
	var uLocal_5722 = 0;
	var uLocal_5723 = 20;
	var uLocal_5724 = 0;
	var uLocal_5725 = 0;
	var uLocal_5726 = 0;
	var uLocal_5727 = 0;
	var uLocal_5728 = 0;
	var uLocal_5729 = 0;
	var uLocal_5730 = 0;
	var uLocal_5731 = 0;
	var uLocal_5732 = 0;
	var uLocal_5733 = 0;
	var uLocal_5734 = 0;
	var uLocal_5735 = 0;
	var uLocal_5736 = 0;
	var uLocal_5737 = 0;
	var uLocal_5738 = 0;
	var uLocal_5739 = 0;
	var uLocal_5740 = 0;
	var uLocal_5741 = 0;
	var uLocal_5742 = 0;
	var uLocal_5743 = 0;
	var uLocal_5744 = 0;
	var uLocal_5745 = 0;
	var uLocal_5746 = 0;
	var uLocal_5747 = 0;
	var uLocal_5748 = 0;
	var uLocal_5749 = 0;
	var uLocal_5750 = 0;
	var uLocal_5751 = 0;
	var uLocal_5752 = 0;
	var uLocal_5753 = 0;
	var uLocal_5754 = 0;
	var uLocal_5755 = 0;
	var uLocal_5756 = 0;
	var uLocal_5757 = 0;
	var uLocal_5758 = 0;
	var uLocal_5759 = 0;
	var uLocal_5760 = 0;
	var uLocal_5761 = 0;
	var uLocal_5762 = 0;
	var uLocal_5763 = 0;
	var uLocal_5764 = 0;
	var uLocal_5765 = 0;
	var uLocal_5766 = 0;
	var uLocal_5767 = 0;
	var uLocal_5768 = 0;
	var uLocal_5769 = 0;
	var uLocal_5770 = 0;
	var uLocal_5771 = 0;
	var uLocal_5772 = 0;
	var uLocal_5773 = 0;
	var uLocal_5774 = 0;
	var uLocal_5775 = 0;
	var uLocal_5776 = 0;
	var uLocal_5777 = 0;
	var uLocal_5778 = 0;
	var uLocal_5779 = 0;
	var uLocal_5780 = 0;
	var uLocal_5781 = 0;
	var uLocal_5782 = 0;
	var uLocal_5783 = 0;
	var uLocal_5784 = 0;
	var uLocal_5785 = 0;
	var uLocal_5786 = 0;
	var uLocal_5787 = 0;
	var uLocal_5788 = 0;
	var uLocal_5789 = 0;
	var uLocal_5790 = 20;
	var uLocal_5791 = 0;
	var uLocal_5792 = 0;
	var uLocal_5793 = 0;
	var uLocal_5794 = 0;
	var uLocal_5795 = 0;
	var uLocal_5796 = 0;
	var uLocal_5797 = 0;
	var uLocal_5798 = 0;
	var uLocal_5799 = 0;
	var uLocal_5800 = 0;
	var uLocal_5801 = 0;
	var uLocal_5802 = 0;
	var uLocal_5803 = 0;
	var uLocal_5804 = 0;
	var uLocal_5805 = 0;
	var uLocal_5806 = 0;
	var uLocal_5807 = 0;
	var uLocal_5808 = 0;
	var uLocal_5809 = 0;
	var uLocal_5810 = 0;
	var uLocal_5811 = 0;
	var uLocal_5812 = 0;
	var uLocal_5813 = 0;
	var uLocal_5814 = 0;
	var uLocal_5815 = 0;
	var uLocal_5816 = 0;
	var uLocal_5817 = 0;
	var uLocal_5818 = 0;
	var uLocal_5819 = 0;
	var uLocal_5820 = 0;
	var uLocal_5821 = 0;
	var uLocal_5822 = 0;
	var uLocal_5823 = 0;
	var uLocal_5824 = 0;
	var uLocal_5825 = 0;
	var uLocal_5826 = 0;
	var uLocal_5827 = 0;
	var uLocal_5828 = 0;
	var uLocal_5829 = 0;
	var uLocal_5830 = 0;
	var uLocal_5831 = 0;
	var uLocal_5832 = 0;
	var uLocal_5833 = 0;
	var uLocal_5834 = 0;
	var uLocal_5835 = 0;
	var uLocal_5836 = 0;
	var uLocal_5837 = 0;
	var uLocal_5838 = 0;
	var uLocal_5839 = 0;
	var uLocal_5840 = 0;
	var uLocal_5841 = 0;
	var uLocal_5842 = 0;
	var uLocal_5843 = 0;
	var uLocal_5844 = 0;
	var uLocal_5845 = 0;
	var uLocal_5846 = 0;
	var uLocal_5847 = 0;
	var uLocal_5848 = 0;
	var uLocal_5849 = 0;
	var uLocal_5850 = 0;
	var uLocal_5851 = 0;
	var uLocal_5852 = 0;
	var uLocal_5853 = 0;
	var uLocal_5854 = 0;
	var uLocal_5855 = 0;
	var uLocal_5856 = 0;
	var uLocal_5857 = 20;
	var uLocal_5858 = 0;
	var uLocal_5859 = 0;
	var uLocal_5860 = 0;
	var uLocal_5861 = 0;
	var uLocal_5862 = 0;
	var uLocal_5863 = 0;
	var uLocal_5864 = 0;
	var uLocal_5865 = 0;
	var uLocal_5866 = 0;
	var uLocal_5867 = 0;
	var uLocal_5868 = 0;
	var uLocal_5869 = 0;
	var uLocal_5870 = 0;
	var uLocal_5871 = 0;
	var uLocal_5872 = 0;
	var uLocal_5873 = 0;
	var uLocal_5874 = 0;
	var uLocal_5875 = 0;
	var uLocal_5876 = 0;
	var uLocal_5877 = 0;
	var uLocal_5878 = 0;
	var uLocal_5879 = 0;
	var uLocal_5880 = 0;
	var uLocal_5881 = 0;
	var uLocal_5882 = 0;
	var uLocal_5883 = 0;
	var uLocal_5884 = 0;
	var uLocal_5885 = 0;
	var uLocal_5886 = 0;
	var uLocal_5887 = 0;
	var uLocal_5888 = 0;
	var uLocal_5889 = 0;
	var uLocal_5890 = 0;
	var uLocal_5891 = 0;
	var uLocal_5892 = 0;
	var uLocal_5893 = 0;
	var uLocal_5894 = 0;
	var uLocal_5895 = 0;
	var uLocal_5896 = 0;
	var uLocal_5897 = 0;
	var uLocal_5898 = 0;
	var uLocal_5899 = 0;
	var uLocal_5900 = 0;
	var uLocal_5901 = 0;
	var uLocal_5902 = 0;
	var uLocal_5903 = 0;
	var uLocal_5904 = 0;
	var uLocal_5905 = 0;
	var uLocal_5906 = 0;
	var uLocal_5907 = 0;
	var uLocal_5908 = 0;
	var uLocal_5909 = 0;
	var uLocal_5910 = 0;
	var uLocal_5911 = 0;
	var uLocal_5912 = 0;
	var uLocal_5913 = 0;
	var uLocal_5914 = 0;
	var uLocal_5915 = 0;
	var uLocal_5916 = 0;
	var uLocal_5917 = 0;
	var uLocal_5918 = 0;
	var uLocal_5919 = 0;
	var uLocal_5920 = 0;
	var uLocal_5921 = 0;
	var uLocal_5922 = 0;
	var uLocal_5923 = 0;
	var uLocal_5924 = 20;
	var uLocal_5925 = 0;
	var uLocal_5926 = 0;
	var uLocal_5927 = 0;
	var uLocal_5928 = 0;
	var uLocal_5929 = 0;
	var uLocal_5930 = 0;
	var uLocal_5931 = 0;
	var uLocal_5932 = 0;
	var uLocal_5933 = 0;
	var uLocal_5934 = 0;
	var uLocal_5935 = 0;
	var uLocal_5936 = 0;
	var uLocal_5937 = 0;
	var uLocal_5938 = 0;
	var uLocal_5939 = 0;
	var uLocal_5940 = 0;
	var uLocal_5941 = 0;
	var uLocal_5942 = 0;
	var uLocal_5943 = 0;
	var uLocal_5944 = 0;
	var uLocal_5945 = 0;
	var uLocal_5946 = 0;
	var uLocal_5947 = 0;
	var uLocal_5948 = 0;
	var uLocal_5949 = 0;
	var uLocal_5950 = 0;
	var uLocal_5951 = 0;
	var uLocal_5952 = 0;
	var uLocal_5953 = 0;
	var uLocal_5954 = 0;
	var uLocal_5955 = 0;
	var uLocal_5956 = 0;
	var uLocal_5957 = 0;
	var uLocal_5958 = 0;
	var uLocal_5959 = 0;
	var uLocal_5960 = 0;
	var uLocal_5961 = 0;
	var uLocal_5962 = 0;
	var uLocal_5963 = 0;
	var uLocal_5964 = 0;
	var uLocal_5965 = 0;
	var uLocal_5966 = 0;
	var uLocal_5967 = 0;
	var uLocal_5968 = 0;
	var uLocal_5969 = 0;
	var uLocal_5970 = 0;
	var uLocal_5971 = 0;
	var uLocal_5972 = 0;
	var uLocal_5973 = 0;
	var uLocal_5974 = 0;
	var uLocal_5975 = 0;
	var uLocal_5976 = 0;
	var uLocal_5977 = 0;
	var uLocal_5978 = 0;
	var uLocal_5979 = 0;
	var uLocal_5980 = 0;
	var uLocal_5981 = 0;
	var uLocal_5982 = 0;
	var uLocal_5983 = 0;
	var uLocal_5984 = 0;
	var uLocal_5985 = 0;
	var uLocal_5986 = 0;
	var uLocal_5987 = 0;
	var uLocal_5988 = 0;
	var uLocal_5989 = 0;
	var uLocal_5990 = 0;
	var uLocal_5991 = 20;
	var uLocal_5992 = 0;
	var uLocal_5993 = 0;
	var uLocal_5994 = 0;
	var uLocal_5995 = 0;
	var uLocal_5996 = 0;
	var uLocal_5997 = 0;
	var uLocal_5998 = 0;
	var uLocal_5999 = 0;
	var uLocal_6000 = 0;
	var uLocal_6001 = 0;
	var uLocal_6002 = 0;
	var uLocal_6003 = 0;
	var uLocal_6004 = 0;
	var uLocal_6005 = 0;
	var uLocal_6006 = 0;
	var uLocal_6007 = 0;
	var uLocal_6008 = 0;
	var uLocal_6009 = 0;
	var uLocal_6010 = 0;
	var uLocal_6011 = 0;
	var uLocal_6012 = 0;
	var uLocal_6013 = 0;
	var uLocal_6014 = 0;
	var uLocal_6015 = 0;
	var uLocal_6016 = 0;
	var uLocal_6017 = 0;
	var uLocal_6018 = 0;
	var uLocal_6019 = 0;
	var uLocal_6020 = 0;
	var uLocal_6021 = 0;
	var uLocal_6022 = 0;
	var uLocal_6023 = 0;
	var uLocal_6024 = 0;
	var uLocal_6025 = 0;
	var uLocal_6026 = 0;
	var uLocal_6027 = 0;
	var uLocal_6028 = 0;
	var uLocal_6029 = 0;
	var uLocal_6030 = 0;
	var uLocal_6031 = 0;
	var uLocal_6032 = 0;
	var uLocal_6033 = 0;
	var uLocal_6034 = 0;
	var uLocal_6035 = 0;
	var uLocal_6036 = 0;
	var uLocal_6037 = 0;
	var uLocal_6038 = 0;
	var uLocal_6039 = 0;
	var uLocal_6040 = 0;
	var uLocal_6041 = 0;
	var uLocal_6042 = 0;
	var uLocal_6043 = 0;
	var uLocal_6044 = 0;
	var uLocal_6045 = 0;
	var uLocal_6046 = 0;
	var uLocal_6047 = 0;
	var uLocal_6048 = 0;
	var uLocal_6049 = 0;
	var uLocal_6050 = 0;
	var uLocal_6051 = 0;
	var uLocal_6052 = 0;
	var uLocal_6053 = 0;
	var uLocal_6054 = 0;
	var uLocal_6055 = 0;
	var uLocal_6056 = 0;
	var uLocal_6057 = 0;
	var uLocal_6058 = 20;
	var uLocal_6059 = 0;
	var uLocal_6060 = 0;
	var uLocal_6061 = 0;
	var uLocal_6062 = 0;
	var uLocal_6063 = 0;
	var uLocal_6064 = 0;
	var uLocal_6065 = 0;
	var uLocal_6066 = 0;
	var uLocal_6067 = 0;
	var uLocal_6068 = 0;
	var uLocal_6069 = 0;
	var uLocal_6070 = 0;
	var uLocal_6071 = 0;
	var uLocal_6072 = 0;
	var uLocal_6073 = 0;
	var uLocal_6074 = 0;
	var uLocal_6075 = 0;
	var uLocal_6076 = 0;
	var uLocal_6077 = 0;
	var uLocal_6078 = 0;
	var uLocal_6079 = 0;
	var uLocal_6080 = 0;
	var uLocal_6081 = 0;
	var uLocal_6082 = 0;
	var uLocal_6083 = 0;
	var uLocal_6084 = 0;
	var uLocal_6085 = 0;
	var uLocal_6086 = 0;
	var uLocal_6087 = 0;
	var uLocal_6088 = 0;
	var uLocal_6089 = 0;
	var uLocal_6090 = 0;
	var uLocal_6091 = 0;
	var uLocal_6092 = 0;
	var uLocal_6093 = 0;
	var uLocal_6094 = 0;
	var uLocal_6095 = 0;
	var uLocal_6096 = 0;
	var uLocal_6097 = 0;
	var uLocal_6098 = 0;
	var uLocal_6099 = 0;
	var uLocal_6100 = 0;
	var uLocal_6101 = 0;
	var uLocal_6102 = 0;
	var uLocal_6103 = 0;
	var uLocal_6104 = 0;
	var uLocal_6105 = 0;
	var uLocal_6106 = 0;
	var uLocal_6107 = 0;
	var uLocal_6108 = 0;
	var uLocal_6109 = 0;
	var uLocal_6110 = 0;
	var uLocal_6111 = 0;
	var uLocal_6112 = 0;
	var uLocal_6113 = 0;
	var uLocal_6114 = 0;
	var uLocal_6115 = 0;
	var uLocal_6116 = 0;
	var uLocal_6117 = 0;
	var uLocal_6118 = 0;
	var uLocal_6119 = 0;
	var uLocal_6120 = 0;
	var uLocal_6121 = 0;
	var uLocal_6122 = 0;
	var uLocal_6123 = 0;
	var uLocal_6124 = 0;
	var uLocal_6125 = 20;
	var uLocal_6126 = 0;
	var uLocal_6127 = 0;
	var uLocal_6128 = 0;
	var uLocal_6129 = 0;
	var uLocal_6130 = 0;
	var uLocal_6131 = 0;
	var uLocal_6132 = 0;
	var uLocal_6133 = 0;
	var uLocal_6134 = 0;
	var uLocal_6135 = 0;
	var uLocal_6136 = 0;
	var uLocal_6137 = 0;
	var uLocal_6138 = 0;
	var uLocal_6139 = 0;
	var uLocal_6140 = 0;
	var uLocal_6141 = 0;
	var uLocal_6142 = 0;
	var uLocal_6143 = 0;
	var uLocal_6144 = 0;
	var uLocal_6145 = 0;
	var uLocal_6146 = 0;
	var uLocal_6147 = 0;
	var uLocal_6148 = 0;
	var uLocal_6149 = 0;
	var uLocal_6150 = 0;
	var uLocal_6151 = 0;
	var uLocal_6152 = 0;
	var uLocal_6153 = 0;
	var uLocal_6154 = 0;
	var uLocal_6155 = 0;
	var uLocal_6156 = 0;
	var uLocal_6157 = 0;
	var uLocal_6158 = 0;
	var uLocal_6159 = 0;
	var uLocal_6160 = 0;
	var uLocal_6161 = 0;
	var uLocal_6162 = 0;
	var uLocal_6163 = 0;
	var uLocal_6164 = 0;
	var uLocal_6165 = 0;
	var uLocal_6166 = 0;
	var uLocal_6167 = 0;
	var uLocal_6168 = 0;
	var uLocal_6169 = 0;
	var uLocal_6170 = 0;
	var uLocal_6171 = 0;
	var uLocal_6172 = 0;
	var uLocal_6173 = 0;
	var uLocal_6174 = 0;
	var uLocal_6175 = 0;
	var uLocal_6176 = 0;
	var uLocal_6177 = 0;
	var uLocal_6178 = 0;
	var uLocal_6179 = 0;
	var uLocal_6180 = 0;
	var uLocal_6181 = 0;
	var uLocal_6182 = 0;
	var uLocal_6183 = 0;
	var uLocal_6184 = 0;
	var uLocal_6185 = 0;
	var uLocal_6186 = 0;
	var uLocal_6187 = 0;
	var uLocal_6188 = 0;
	var uLocal_6189 = 0;
	var uLocal_6190 = 0;
	var uLocal_6191 = 0;
	var uLocal_6192 = 20;
	var uLocal_6193 = 0;
	var uLocal_6194 = 0;
	var uLocal_6195 = 0;
	var uLocal_6196 = 0;
	var uLocal_6197 = 0;
	var uLocal_6198 = 0;
	var uLocal_6199 = 0;
	var uLocal_6200 = 0;
	var uLocal_6201 = 0;
	var uLocal_6202 = 0;
	var uLocal_6203 = 0;
	var uLocal_6204 = 0;
	var uLocal_6205 = 0;
	var uLocal_6206 = 0;
	var uLocal_6207 = 0;
	var uLocal_6208 = 0;
	var uLocal_6209 = 0;
	var uLocal_6210 = 0;
	var uLocal_6211 = 0;
	var uLocal_6212 = 0;
	var uLocal_6213 = 0;
	var uLocal_6214 = 0;
	var uLocal_6215 = 0;
	var uLocal_6216 = 0;
	var uLocal_6217 = 0;
	var uLocal_6218 = 0;
	var uLocal_6219 = 0;
	var uLocal_6220 = 0;
	var uLocal_6221 = 0;
	var uLocal_6222 = 0;
	var uLocal_6223 = 0;
	var uLocal_6224 = 0;
	var uLocal_6225 = 0;
	var uLocal_6226 = 0;
	var uLocal_6227 = 0;
	var uLocal_6228 = 0;
	var uLocal_6229 = 0;
	var uLocal_6230 = 0;
	var uLocal_6231 = 0;
	var uLocal_6232 = 0;
	var uLocal_6233 = 0;
	var uLocal_6234 = 0;
	var uLocal_6235 = 0;
	var uLocal_6236 = 0;
	var uLocal_6237 = 0;
	var uLocal_6238 = 0;
	var uLocal_6239 = 0;
	var uLocal_6240 = 0;
	var uLocal_6241 = 0;
	var uLocal_6242 = 0;
	var uLocal_6243 = 0;
	var uLocal_6244 = 0;
	var uLocal_6245 = 0;
	var uLocal_6246 = 0;
	var uLocal_6247 = 0;
	var uLocal_6248 = 0;
	var uLocal_6249 = 0;
	var uLocal_6250 = 0;
	var uLocal_6251 = 0;
	var uLocal_6252 = 0;
	var uLocal_6253 = 0;
	var uLocal_6254 = 0;
	var uLocal_6255 = 0;
	var uLocal_6256 = 0;
	var uLocal_6257 = 0;
	var uLocal_6258 = 0;
	var uLocal_6259 = 20;
	var uLocal_6260 = 0;
	var uLocal_6261 = 0;
	var uLocal_6262 = 0;
	var uLocal_6263 = 0;
	var uLocal_6264 = 0;
	var uLocal_6265 = 0;
	var uLocal_6266 = 0;
	var uLocal_6267 = 0;
	var uLocal_6268 = 0;
	var uLocal_6269 = 0;
	var uLocal_6270 = 0;
	var uLocal_6271 = 0;
	var uLocal_6272 = 0;
	var uLocal_6273 = 0;
	var uLocal_6274 = 0;
	var uLocal_6275 = 0;
	var uLocal_6276 = 0;
	var uLocal_6277 = 0;
	var uLocal_6278 = 0;
	var uLocal_6279 = 0;
	var uLocal_6280 = 0;
	var uLocal_6281 = 0;
	var uLocal_6282 = 0;
	var uLocal_6283 = 0;
	var uLocal_6284 = 0;
	var uLocal_6285 = 0;
	var uLocal_6286 = 0;
	var uLocal_6287 = 0;
	var uLocal_6288 = 0;
	var uLocal_6289 = 0;
	var uLocal_6290 = 0;
	var uLocal_6291 = 0;
	var uLocal_6292 = 0;
	var uLocal_6293 = 0;
	var uLocal_6294 = 0;
	var uLocal_6295 = 0;
	var uLocal_6296 = 0;
	var uLocal_6297 = 0;
	var uLocal_6298 = 0;
	var uLocal_6299 = 0;
	var uLocal_6300 = 0;
	var uLocal_6301 = 0;
	var uLocal_6302 = 0;
	var uLocal_6303 = 0;
	var uLocal_6304 = 0;
	var uLocal_6305 = 0;
	var uLocal_6306 = 0;
	var uLocal_6307 = 0;
	var uLocal_6308 = 0;
	var uLocal_6309 = 0;
	var uLocal_6310 = 0;
	var uLocal_6311 = 0;
	var uLocal_6312 = 0;
	var uLocal_6313 = 0;
	var uLocal_6314 = 0;
	var uLocal_6315 = 0;
	var uLocal_6316 = 0;
	var uLocal_6317 = 0;
	var uLocal_6318 = 0;
	var uLocal_6319 = 0;
	var uLocal_6320 = 0;
	var uLocal_6321 = 0;
	var uLocal_6322 = 0;
	var uLocal_6323 = 0;
	var uLocal_6324 = 0;
	var uLocal_6325 = 0;
	var uLocal_6326 = 20;
	var uLocal_6327 = 0;
	var uLocal_6328 = 0;
	var uLocal_6329 = 0;
	var uLocal_6330 = 0;
	var uLocal_6331 = 0;
	var uLocal_6332 = 0;
	var uLocal_6333 = 0;
	var uLocal_6334 = 0;
	var uLocal_6335 = 0;
	var uLocal_6336 = 0;
	var uLocal_6337 = 0;
	var uLocal_6338 = 0;
	var uLocal_6339 = 0;
	var uLocal_6340 = 0;
	var uLocal_6341 = 0;
	var uLocal_6342 = 0;
	var uLocal_6343 = 0;
	var uLocal_6344 = 0;
	var uLocal_6345 = 0;
	var uLocal_6346 = 0;
	var uLocal_6347 = 0;
	var uLocal_6348 = 0;
	var uLocal_6349 = 0;
	var uLocal_6350 = 0;
	var uLocal_6351 = 0;
	var uLocal_6352 = 0;
	var uLocal_6353 = 0;
	var uLocal_6354 = 0;
	var uLocal_6355 = 0;
	var uLocal_6356 = 0;
	var uLocal_6357 = 0;
	var uLocal_6358 = 0;
	var uLocal_6359 = 0;
	var uLocal_6360 = 0;
	var uLocal_6361 = 0;
	var uLocal_6362 = 0;
	var uLocal_6363 = 0;
	var uLocal_6364 = 0;
	var uLocal_6365 = 0;
	var uLocal_6366 = 0;
	var uLocal_6367 = 0;
	var uLocal_6368 = 0;
	var uLocal_6369 = 0;
	var uLocal_6370 = 0;
	var uLocal_6371 = 0;
	var uLocal_6372 = 0;
	var uLocal_6373 = 0;
	var uLocal_6374 = 0;
	var uLocal_6375 = 0;
	var uLocal_6376 = 0;
	var uLocal_6377 = 0;
	var uLocal_6378 = 0;
	var uLocal_6379 = 0;
	var uLocal_6380 = 0;
	var uLocal_6381 = 0;
	var uLocal_6382 = 0;
	var uLocal_6383 = 0;
	var uLocal_6384 = 0;
	var uLocal_6385 = 0;
	var uLocal_6386 = 0;
	var uLocal_6387 = 0;
	var uLocal_6388 = 0;
	var uLocal_6389 = 0;
	var uLocal_6390 = 0;
	var uLocal_6391 = 0;
	var uLocal_6392 = 0;
	var uLocal_6393 = 20;
	var uLocal_6394 = 0;
	var uLocal_6395 = 0;
	var uLocal_6396 = 0;
	var uLocal_6397 = 0;
	var uLocal_6398 = 0;
	var uLocal_6399 = 0;
	var uLocal_6400 = 0;
	var uLocal_6401 = 0;
	var uLocal_6402 = 0;
	var uLocal_6403 = 0;
	var uLocal_6404 = 0;
	var uLocal_6405 = 0;
	var uLocal_6406 = 0;
	var uLocal_6407 = 0;
	var uLocal_6408 = 0;
	var uLocal_6409 = 0;
	var uLocal_6410 = 0;
	var uLocal_6411 = 0;
	var uLocal_6412 = 0;
	var uLocal_6413 = 0;
	var uLocal_6414 = 0;
	var uLocal_6415 = 0;
	var uLocal_6416 = 0;
	var uLocal_6417 = 0;
	var uLocal_6418 = 0;
	var uLocal_6419 = 0;
	var uLocal_6420 = 0;
	var uLocal_6421 = 0;
	var uLocal_6422 = 0;
	var uLocal_6423 = 0;
	var uLocal_6424 = 0;
	var uLocal_6425 = 0;
	var uLocal_6426 = 0;
	var uLocal_6427 = 0;
	var uLocal_6428 = 0;
	var uLocal_6429 = 0;
	var uLocal_6430 = 0;
	var uLocal_6431 = 0;
	var uLocal_6432 = 0;
	var uLocal_6433 = 0;
	var uLocal_6434 = 0;
	var uLocal_6435 = 0;
	var uLocal_6436 = 0;
	var uLocal_6437 = 0;
	var uLocal_6438 = 0;
	var uLocal_6439 = 0;
	var uLocal_6440 = 0;
	var uLocal_6441 = 0;
	var uLocal_6442 = 0;
	var uLocal_6443 = 0;
	var uLocal_6444 = 0;
	var uLocal_6445 = 0;
	var uLocal_6446 = 0;
	var uLocal_6447 = 0;
	var uLocal_6448 = 0;
	var uLocal_6449 = 0;
	var uLocal_6450 = 0;
	var uLocal_6451 = 0;
	var uLocal_6452 = 0;
	var uLocal_6453 = 0;
	var uLocal_6454 = 0;
	var uLocal_6455 = 0;
	var uLocal_6456 = 0;
	var uLocal_6457 = 0;
	var uLocal_6458 = 0;
	var uLocal_6459 = 0;
	var uLocal_6460 = 20;
	var uLocal_6461 = 0;
	var uLocal_6462 = 0;
	var uLocal_6463 = 0;
	var uLocal_6464 = 0;
	var uLocal_6465 = 0;
	var uLocal_6466 = 0;
	var uLocal_6467 = 0;
	var uLocal_6468 = 0;
	var uLocal_6469 = 0;
	var uLocal_6470 = 0;
	var uLocal_6471 = 0;
	var uLocal_6472 = 0;
	var uLocal_6473 = 0;
	var uLocal_6474 = 0;
	var uLocal_6475 = 0;
	var uLocal_6476 = 0;
	var uLocal_6477 = 0;
	var uLocal_6478 = 0;
	var uLocal_6479 = 0;
	var uLocal_6480 = 0;
	var uLocal_6481 = 0;
	var uLocal_6482 = 0;
	var uLocal_6483 = 0;
	var uLocal_6484 = 0;
	var uLocal_6485 = 0;
	var uLocal_6486 = 0;
	var uLocal_6487 = 0;
	var uLocal_6488 = 0;
	var uLocal_6489 = 0;
	var uLocal_6490 = 0;
	var uLocal_6491 = 0;
	var uLocal_6492 = 0;
	var uLocal_6493 = 0;
	var uLocal_6494 = 0;
	var uLocal_6495 = 0;
	var uLocal_6496 = 0;
	var uLocal_6497 = 0;
	var uLocal_6498 = 0;
	var uLocal_6499 = 0;
	var uLocal_6500 = 0;
	var uLocal_6501 = 0;
	var uLocal_6502 = 0;
	var uLocal_6503 = 0;
	var uLocal_6504 = 0;
	var uLocal_6505 = 0;
	var uLocal_6506 = 0;
	var uLocal_6507 = 0;
	var uLocal_6508 = 0;
	var uLocal_6509 = 0;
	var uLocal_6510 = 0;
	var uLocal_6511 = 0;
	var uLocal_6512 = 0;
	var uLocal_6513 = 0;
	var uLocal_6514 = 0;
	var uLocal_6515 = 0;
	var uLocal_6516 = 0;
	var uLocal_6517 = 0;
	var uLocal_6518 = 0;
	var uLocal_6519 = 0;
	var uLocal_6520 = 0;
	var uLocal_6521 = 0;
	var uLocal_6522 = 0;
	var uLocal_6523 = 0;
	var uLocal_6524 = 0;
	var uLocal_6525 = 0;
	var uLocal_6526 = 0;
	var uLocal_6527 = 20;
	var uLocal_6528 = 0;
	var uLocal_6529 = 0;
	var uLocal_6530 = 0;
	var uLocal_6531 = 0;
	var uLocal_6532 = 0;
	var uLocal_6533 = 0;
	var uLocal_6534 = 0;
	var uLocal_6535 = 0;
	var uLocal_6536 = 0;
	var uLocal_6537 = 0;
	var uLocal_6538 = 0;
	var uLocal_6539 = 0;
	var uLocal_6540 = 0;
	var uLocal_6541 = 0;
	var uLocal_6542 = 0;
	var uLocal_6543 = 0;
	var uLocal_6544 = 0;
	var uLocal_6545 = 0;
	var uLocal_6546 = 0;
	var uLocal_6547 = 0;
	var uLocal_6548 = 0;
	var uLocal_6549 = 0;
	var uLocal_6550 = 0;
	var uLocal_6551 = 0;
	var uLocal_6552 = 0;
	var uLocal_6553 = 0;
	var uLocal_6554 = 0;
	var uLocal_6555 = 0;
	var uLocal_6556 = 0;
	var uLocal_6557 = 0;
	var uLocal_6558 = 0;
	var uLocal_6559 = 0;
	var uLocal_6560 = 0;
	var uLocal_6561 = 0;
	var uLocal_6562 = 0;
	var uLocal_6563 = 0;
	var uLocal_6564 = 0;
	var uLocal_6565 = 0;
	var uLocal_6566 = 0;
	var uLocal_6567 = 0;
	var uLocal_6568 = 0;
	var uLocal_6569 = 0;
	var uLocal_6570 = 0;
	var uLocal_6571 = 0;
	var uLocal_6572 = 0;
	var uLocal_6573 = 0;
	var uLocal_6574 = 0;
	var uLocal_6575 = 0;
	var uLocal_6576 = 0;
	var uLocal_6577 = 0;
	var uLocal_6578 = 0;
	var uLocal_6579 = 0;
	var uLocal_6580 = 0;
	var uLocal_6581 = 0;
	var uLocal_6582 = 0;
	var uLocal_6583 = 0;
	var uLocal_6584 = 0;
	var uLocal_6585 = 0;
	var uLocal_6586 = 0;
	var uLocal_6587 = 0;
	var uLocal_6588 = 0;
	var uLocal_6589 = 0;
	var uLocal_6590 = 0;
	var uLocal_6591 = 0;
	var uLocal_6592 = 0;
	var uLocal_6593 = 0;
	var uLocal_6594 = 20;
	var uLocal_6595 = 0;
	var uLocal_6596 = 0;
	var uLocal_6597 = 0;
	var uLocal_6598 = 0;
	var uLocal_6599 = 0;
	var uLocal_6600 = 0;
	var uLocal_6601 = 0;
	var uLocal_6602 = 0;
	var uLocal_6603 = 0;
	var uLocal_6604 = 0;
	var uLocal_6605 = 0;
	var uLocal_6606 = 0;
	var uLocal_6607 = 0;
	var uLocal_6608 = 0;
	var uLocal_6609 = 0;
	var uLocal_6610 = 0;
	var uLocal_6611 = 0;
	var uLocal_6612 = 0;
	var uLocal_6613 = 0;
	var uLocal_6614 = 0;
	var uLocal_6615 = 0;
	var uLocal_6616 = 0;
	var uLocal_6617 = 0;
	var uLocal_6618 = 0;
	var uLocal_6619 = 0;
	var uLocal_6620 = 0;
	var uLocal_6621 = 0;
	var uLocal_6622 = 0;
	var uLocal_6623 = 0;
	var uLocal_6624 = 0;
	var uLocal_6625 = 0;
	var uLocal_6626 = 0;
	var uLocal_6627 = 0;
	var uLocal_6628 = 0;
	var uLocal_6629 = 0;
	var uLocal_6630 = 0;
	var uLocal_6631 = 0;
	var uLocal_6632 = 0;
	var uLocal_6633 = 0;
	var uLocal_6634 = 0;
	var uLocal_6635 = 0;
	var uLocal_6636 = 0;
	var uLocal_6637 = 0;
	var uLocal_6638 = 0;
	var uLocal_6639 = 0;
	var uLocal_6640 = 0;
	var uLocal_6641 = 0;
	var uLocal_6642 = 0;
	var uLocal_6643 = 0;
	var uLocal_6644 = 0;
	var uLocal_6645 = 0;
	var uLocal_6646 = 0;
	var uLocal_6647 = 0;
	var uLocal_6648 = 0;
	var uLocal_6649 = 0;
	var uLocal_6650 = 0;
	var uLocal_6651 = 0;
	var uLocal_6652 = 0;
	var uLocal_6653 = 0;
	var uLocal_6654 = 0;
	var uLocal_6655 = 0;
	var uLocal_6656 = 0;
	var uLocal_6657 = 0;
	var uLocal_6658 = 0;
	var uLocal_6659 = 0;
	var uLocal_6660 = 0;
	var uLocal_6661 = 20;
	var uLocal_6662 = 0;
	var uLocal_6663 = 0;
	var uLocal_6664 = 0;
	var uLocal_6665 = 0;
	var uLocal_6666 = 0;
	var uLocal_6667 = 0;
	var uLocal_6668 = 0;
	var uLocal_6669 = 0;
	var uLocal_6670 = 0;
	var uLocal_6671 = 0;
	var uLocal_6672 = 0;
	var uLocal_6673 = 0;
	var uLocal_6674 = 0;
	var uLocal_6675 = 0;
	var uLocal_6676 = 0;
	var uLocal_6677 = 0;
	var uLocal_6678 = 0;
	var uLocal_6679 = 0;
	var uLocal_6680 = 0;
	var uLocal_6681 = 0;
	var uLocal_6682 = 0;
	var uLocal_6683 = 0;
	var uLocal_6684 = 0;
	var uLocal_6685 = 0;
	var uLocal_6686 = 0;
	var uLocal_6687 = 0;
	var uLocal_6688 = 0;
	var uLocal_6689 = 0;
	var uLocal_6690 = 0;
	var uLocal_6691 = 0;
	var uLocal_6692 = 0;
	var uLocal_6693 = 0;
	var uLocal_6694 = 0;
	var uLocal_6695 = 0;
	var uLocal_6696 = 0;
	var uLocal_6697 = 0;
	var uLocal_6698 = 0;
	var uLocal_6699 = 0;
	var uLocal_6700 = 0;
	var uLocal_6701 = 0;
	var uLocal_6702 = 0;
	var uLocal_6703 = 0;
	var uLocal_6704 = 0;
	var uLocal_6705 = 0;
	var uLocal_6706 = 0;
	var uLocal_6707 = 0;
	var uLocal_6708 = 0;
	var uLocal_6709 = 0;
	var uLocal_6710 = 0;
	var uLocal_6711 = 0;
	var uLocal_6712 = 0;
	var uLocal_6713 = 0;
	var uLocal_6714 = 0;
	var uLocal_6715 = 0;
	var uLocal_6716 = 0;
	var uLocal_6717 = 0;
	var uLocal_6718 = 0;
	var uLocal_6719 = 0;
	var uLocal_6720 = 0;
	var uLocal_6721 = 0;
	var uLocal_6722 = 0;
	var uLocal_6723 = 0;
	var uLocal_6724 = 0;
	var uLocal_6725 = 0;
	var uLocal_6726 = 0;
	var uLocal_6727 = 0;
	var uLocal_6728 = 20;
	var uLocal_6729 = 0;
	var uLocal_6730 = 0;
	var uLocal_6731 = 0;
	var uLocal_6732 = 0;
	var uLocal_6733 = 0;
	var uLocal_6734 = 0;
	var uLocal_6735 = 0;
	var uLocal_6736 = 0;
	var uLocal_6737 = 0;
	var uLocal_6738 = 0;
	var uLocal_6739 = 0;
	var uLocal_6740 = 0;
	var uLocal_6741 = 0;
	var uLocal_6742 = 0;
	var uLocal_6743 = 0;
	var uLocal_6744 = 0;
	var uLocal_6745 = 0;
	var uLocal_6746 = 0;
	var uLocal_6747 = 0;
	var uLocal_6748 = 0;
	var uLocal_6749 = 0;
	var uLocal_6750 = 0;
	var uLocal_6751 = 0;
	var uLocal_6752 = 0;
	var uLocal_6753 = 0;
	var uLocal_6754 = 0;
	var uLocal_6755 = 0;
	var uLocal_6756 = 0;
	var uLocal_6757 = 0;
	var uLocal_6758 = 0;
	var uLocal_6759 = 0;
	var uLocal_6760 = 0;
	var uLocal_6761 = 0;
	var uLocal_6762 = 0;
	var uLocal_6763 = 0;
	var uLocal_6764 = 0;
	var uLocal_6765 = 0;
	var uLocal_6766 = 0;
	var uLocal_6767 = 0;
	var uLocal_6768 = 0;
	var uLocal_6769 = 0;
	var uLocal_6770 = 0;
	var uLocal_6771 = 0;
	var uLocal_6772 = 0;
	var uLocal_6773 = 0;
	var uLocal_6774 = 0;
	var uLocal_6775 = 0;
	var uLocal_6776 = 0;
	var uLocal_6777 = 0;
	var uLocal_6778 = 0;
	var uLocal_6779 = 0;
	var uLocal_6780 = 0;
	var uLocal_6781 = 0;
	var uLocal_6782 = 0;
	var uLocal_6783 = 0;
	var uLocal_6784 = 0;
	var uLocal_6785 = 0;
	var uLocal_6786 = 0;
	var uLocal_6787 = 0;
	var uLocal_6788 = 0;
	var uLocal_6789 = 0;
	var uLocal_6790 = 0;
	var uLocal_6791 = 0;
	var uLocal_6792 = 0;
	var uLocal_6793 = 0;
	var uLocal_6794 = 0;
	var uLocal_6795 = 20;
	var uLocal_6796 = 0;
	var uLocal_6797 = 0;
	var uLocal_6798 = 0;
	var uLocal_6799 = 0;
	var uLocal_6800 = 0;
	var uLocal_6801 = 0;
	var uLocal_6802 = 0;
	var uLocal_6803 = 0;
	var uLocal_6804 = 0;
	var uLocal_6805 = 0;
	var uLocal_6806 = 0;
	var uLocal_6807 = 0;
	var uLocal_6808 = 0;
	var uLocal_6809 = 0;
	var uLocal_6810 = 0;
	var uLocal_6811 = 0;
	var uLocal_6812 = 0;
	var uLocal_6813 = 0;
	var uLocal_6814 = 0;
	var uLocal_6815 = 0;
	var uLocal_6816 = 0;
	var uLocal_6817 = 0;
	var uLocal_6818 = 0;
	var uLocal_6819 = 0;
	var uLocal_6820 = 0;
	var uLocal_6821 = 0;
	var uLocal_6822 = 0;
	var uLocal_6823 = 0;
	var uLocal_6824 = 0;
	var uLocal_6825 = 0;
	var uLocal_6826 = 0;
	var uLocal_6827 = 0;
	var uLocal_6828 = 0;
	var uLocal_6829 = 0;
	var uLocal_6830 = 0;
	var uLocal_6831 = 0;
	var uLocal_6832 = 0;
	var uLocal_6833 = 0;
	var uLocal_6834 = 0;
	var uLocal_6835 = 0;
	var uLocal_6836 = 0;
	var uLocal_6837 = 0;
	var uLocal_6838 = 0;
	var uLocal_6839 = 0;
	var uLocal_6840 = 0;
	var uLocal_6841 = 0;
	var uLocal_6842 = 0;
	var uLocal_6843 = 0;
	var uLocal_6844 = 0;
	var uLocal_6845 = 0;
	var uLocal_6846 = 0;
	var uLocal_6847 = 0;
	var uLocal_6848 = 0;
	var uLocal_6849 = 0;
	var uLocal_6850 = 0;
	var uLocal_6851 = 0;
	var uLocal_6852 = 0;
	var uLocal_6853 = 0;
	var uLocal_6854 = 0;
	var uLocal_6855 = 0;
	var uLocal_6856 = 0;
	var uLocal_6857 = 0;
	var uLocal_6858 = 0;
	var uLocal_6859 = 0;
	var uLocal_6860 = 0;
	var uLocal_6861 = 0;
	var uLocal_6862 = 20;
	var uLocal_6863 = 0;
	var uLocal_6864 = 0;
	var uLocal_6865 = 0;
	var uLocal_6866 = 0;
	var uLocal_6867 = 0;
	var uLocal_6868 = 0;
	var uLocal_6869 = 0;
	var uLocal_6870 = 0;
	var uLocal_6871 = 0;
	var uLocal_6872 = 0;
	var uLocal_6873 = 0;
	var uLocal_6874 = 0;
	var uLocal_6875 = 0;
	var uLocal_6876 = 0;
	var uLocal_6877 = 0;
	var uLocal_6878 = 0;
	var uLocal_6879 = 0;
	var uLocal_6880 = 0;
	var uLocal_6881 = 0;
	var uLocal_6882 = 0;
	var uLocal_6883 = 0;
	var uLocal_6884 = 0;
	var uLocal_6885 = 0;
	var uLocal_6886 = 0;
	var uLocal_6887 = 0;
	var uLocal_6888 = 0;
	var uLocal_6889 = 0;
	var uLocal_6890 = 0;
	var uLocal_6891 = 0;
	var uLocal_6892 = 0;
	var uLocal_6893 = 0;
	var uLocal_6894 = 0;
	var uLocal_6895 = 0;
	var uLocal_6896 = 0;
	var uLocal_6897 = 0;
	var uLocal_6898 = 0;
	var uLocal_6899 = 0;
	var uLocal_6900 = 0;
	var uLocal_6901 = 0;
	var uLocal_6902 = 0;
	var uLocal_6903 = 0;
	var uLocal_6904 = 0;
	var uLocal_6905 = 0;
	var uLocal_6906 = 0;
	var uLocal_6907 = 0;
	var uLocal_6908 = 0;
	var uLocal_6909 = 0;
	var uLocal_6910 = 0;
	var uLocal_6911 = 0;
	var uLocal_6912 = 0;
	var uLocal_6913 = 0;
	var uLocal_6914 = 0;
	var uLocal_6915 = 0;
	var uLocal_6916 = 0;
	var uLocal_6917 = 0;
	var uLocal_6918 = 0;
	var uLocal_6919 = 0;
	var uLocal_6920 = 0;
	var uLocal_6921 = 0;
	var uLocal_6922 = 0;
	var uLocal_6923 = 0;
	var uLocal_6924 = 0;
	var uLocal_6925 = 0;
	var uLocal_6926 = 0;
	var uLocal_6927 = 0;
	var uLocal_6928 = 0;
	var uLocal_6929 = 20;
	var uLocal_6930 = 0;
	var uLocal_6931 = 0;
	var uLocal_6932 = 0;
	var uLocal_6933 = 0;
	var uLocal_6934 = 0;
	var uLocal_6935 = 0;
	var uLocal_6936 = 0;
	var uLocal_6937 = 0;
	var uLocal_6938 = 0;
	var uLocal_6939 = 0;
	var uLocal_6940 = 0;
	var uLocal_6941 = 0;
	var uLocal_6942 = 0;
	var uLocal_6943 = 0;
	var uLocal_6944 = 0;
	var uLocal_6945 = 0;
	var uLocal_6946 = 0;
	var uLocal_6947 = 0;
	var uLocal_6948 = 0;
	var uLocal_6949 = 0;
	var uLocal_6950 = 0;
	var uLocal_6951 = 0;
	var uLocal_6952 = 0;
	var uLocal_6953 = 0;
	var uLocal_6954 = 0;
	var uLocal_6955 = 0;
	var uLocal_6956 = 0;
	var uLocal_6957 = 0;
	var uLocal_6958 = 0;
	var uLocal_6959 = 0;
	var uLocal_6960 = 0;
	var uLocal_6961 = 0;
	var uLocal_6962 = 0;
	var uLocal_6963 = 0;
	var uLocal_6964 = 0;
	var uLocal_6965 = 0;
	var uLocal_6966 = 0;
	var uLocal_6967 = 0;
	var uLocal_6968 = 0;
	var uLocal_6969 = 0;
	var uLocal_6970 = 0;
	var uLocal_6971 = 0;
	var uLocal_6972 = 0;
	var uLocal_6973 = 0;
	var uLocal_6974 = 0;
	var uLocal_6975 = 0;
	var uLocal_6976 = 0;
	var uLocal_6977 = 0;
	var uLocal_6978 = 0;
	var uLocal_6979 = 0;
	var uLocal_6980 = 0;
	var uLocal_6981 = 0;
	var uLocal_6982 = 0;
	var uLocal_6983 = 0;
	var uLocal_6984 = 0;
	var uLocal_6985 = 0;
	var uLocal_6986 = 0;
	var uLocal_6987 = 0;
	var uLocal_6988 = 0;
	var uLocal_6989 = 0;
	var uLocal_6990 = 0;
	var uLocal_6991 = 0;
	var uLocal_6992 = 0;
	var uLocal_6993 = 0;
	var uLocal_6994 = 0;
	var uLocal_6995 = 0;
	var uLocal_6996 = 20;
	var uLocal_6997 = 0;
	var uLocal_6998 = 0;
	var uLocal_6999 = 0;
	var uLocal_7000 = 0;
	var uLocal_7001 = 0;
	var uLocal_7002 = 0;
	var uLocal_7003 = 0;
	var uLocal_7004 = 0;
	var uLocal_7005 = 0;
	var uLocal_7006 = 0;
	var uLocal_7007 = 0;
	var uLocal_7008 = 0;
	var uLocal_7009 = 0;
	var uLocal_7010 = 0;
	var uLocal_7011 = 0;
	var uLocal_7012 = 0;
	var uLocal_7013 = 0;
	var uLocal_7014 = 0;
	var uLocal_7015 = 0;
	var uLocal_7016 = 0;
	var uLocal_7017 = 0;
	var uLocal_7018 = 0;
	var uLocal_7019 = 0;
	var uLocal_7020 = 0;
	var uLocal_7021 = 0;
	var uLocal_7022 = 0;
	var uLocal_7023 = 0;
	var uLocal_7024 = 0;
	var uLocal_7025 = 0;
	var uLocal_7026 = 0;
	var uLocal_7027 = 0;
	var uLocal_7028 = 0;
	var uLocal_7029 = 0;
	var uLocal_7030 = 0;
	var uLocal_7031 = 0;
	var uLocal_7032 = 0;
	var uLocal_7033 = 0;
	var uLocal_7034 = 0;
	var uLocal_7035 = 0;
	var uLocal_7036 = 0;
	var uLocal_7037 = 0;
	var uLocal_7038 = 0;
	var uLocal_7039 = 0;
	var uLocal_7040 = 0;
	var uLocal_7041 = 0;
	var uLocal_7042 = 0;
	var uLocal_7043 = 0;
	var uLocal_7044 = 0;
	var uLocal_7045 = 0;
	var uLocal_7046 = 0;
	var uLocal_7047 = 0;
	var uLocal_7048 = 0;
	var uLocal_7049 = 0;
	var uLocal_7050 = 0;
	var uLocal_7051 = 0;
	var uLocal_7052 = 0;
	var uLocal_7053 = 0;
	var uLocal_7054 = 0;
	var uLocal_7055 = 0;
	var uLocal_7056 = 0;
	var uLocal_7057 = 0;
	var uLocal_7058 = 0;
	var uLocal_7059 = 0;
	var uLocal_7060 = 0;
	var uLocal_7061 = 0;
	var uLocal_7062 = 0;
	var uLocal_7063 = 20;
	var uLocal_7064 = 0;
	var uLocal_7065 = 0;
	var uLocal_7066 = 0;
	var uLocal_7067 = 0;
	var uLocal_7068 = 0;
	var uLocal_7069 = 0;
	var uLocal_7070 = 0;
	var uLocal_7071 = 0;
	var uLocal_7072 = 0;
	var uLocal_7073 = 0;
	var uLocal_7074 = 0;
	var uLocal_7075 = 0;
	var uLocal_7076 = 0;
	var uLocal_7077 = 0;
	var uLocal_7078 = 0;
	var uLocal_7079 = 0;
	var uLocal_7080 = 0;
	var uLocal_7081 = 0;
	var uLocal_7082 = 0;
	var uLocal_7083 = 0;
	var uLocal_7084 = 0;
	var uLocal_7085 = 0;
	var uLocal_7086 = 0;
	var uLocal_7087 = 0;
	var uLocal_7088 = 0;
	var uLocal_7089 = 0;
	var uLocal_7090 = 0;
	var uLocal_7091 = 0;
	var uLocal_7092 = 0;
	var uLocal_7093 = 0;
	var uLocal_7094 = 0;
	var uLocal_7095 = 0;
	var uLocal_7096 = 0;
	var uLocal_7097 = 0;
	var uLocal_7098 = 0;
	var uLocal_7099 = 0;
	var uLocal_7100 = 0;
	var uLocal_7101 = 0;
	var uLocal_7102 = 0;
	var uLocal_7103 = 0;
	var uLocal_7104 = 0;
	var uLocal_7105 = 0;
	var uLocal_7106 = 0;
	var uLocal_7107 = 0;
	var uLocal_7108 = 0;
	var uLocal_7109 = 0;
	var uLocal_7110 = 0;
	var uLocal_7111 = 0;
	var uLocal_7112 = 0;
	var uLocal_7113 = 0;
	var uLocal_7114 = 0;
	var uLocal_7115 = 0;
	var uLocal_7116 = 0;
	var uLocal_7117 = 0;
	var uLocal_7118 = 0;
	var uLocal_7119 = 0;
	var uLocal_7120 = 0;
	var uLocal_7121 = 0;
	var uLocal_7122 = 0;
	var uLocal_7123 = 0;
	var uLocal_7124 = 0;
	var uLocal_7125 = 0;
	var uLocal_7126 = 0;
	var uLocal_7127 = 0;
	var uLocal_7128 = 0;
	var uLocal_7129 = 0;
	var uLocal_7130 = 20;
	var uLocal_7131 = 0;
	var uLocal_7132 = 0;
	var uLocal_7133 = 0;
	var uLocal_7134 = 0;
	var uLocal_7135 = 0;
	var uLocal_7136 = 0;
	var uLocal_7137 = 0;
	var uLocal_7138 = 0;
	var uLocal_7139 = 0;
	var uLocal_7140 = 0;
	var uLocal_7141 = 0;
	var uLocal_7142 = 0;
	var uLocal_7143 = 0;
	var uLocal_7144 = 0;
	var uLocal_7145 = 0;
	var uLocal_7146 = 0;
	var uLocal_7147 = 0;
	var uLocal_7148 = 0;
	var uLocal_7149 = 0;
	var uLocal_7150 = 0;
	var uLocal_7151 = 0;
	var uLocal_7152 = 0;
	var uLocal_7153 = 0;
	var uLocal_7154 = 0;
	var uLocal_7155 = 0;
	var uLocal_7156 = 0;
	var uLocal_7157 = 0;
	var uLocal_7158 = 0;
	var uLocal_7159 = 0;
	var uLocal_7160 = 0;
	var uLocal_7161 = 0;
	var uLocal_7162 = 0;
	var uLocal_7163 = 0;
	var uLocal_7164 = 0;
	var uLocal_7165 = 0;
	var uLocal_7166 = 0;
	var uLocal_7167 = 0;
	var uLocal_7168 = 0;
	var uLocal_7169 = 0;
	var uLocal_7170 = 0;
	var uLocal_7171 = 0;
	var uLocal_7172 = 0;
	var uLocal_7173 = 0;
	var uLocal_7174 = 0;
	var uLocal_7175 = 0;
	var uLocal_7176 = 0;
	var uLocal_7177 = 0;
	var uLocal_7178 = 0;
	var uLocal_7179 = 0;
	var uLocal_7180 = 0;
	var uLocal_7181 = 0;
	var uLocal_7182 = 0;
	var uLocal_7183 = 0;
	var uLocal_7184 = 0;
	var uLocal_7185 = 0;
	var uLocal_7186 = 0;
	var uLocal_7187 = 0;
	var uLocal_7188 = 0;
	var uLocal_7189 = 0;
	var uLocal_7190 = 0;
	var uLocal_7191 = 0;
	var uLocal_7192 = 0;
	var uLocal_7193 = 0;
	var uLocal_7194 = 0;
	var uLocal_7195 = 0;
	var uLocal_7196 = 0;
	var uLocal_7197 = 20;
	var uLocal_7198 = 0;
	var uLocal_7199 = 0;
	var uLocal_7200 = 0;
	var uLocal_7201 = 0;
	var uLocal_7202 = 0;
	var uLocal_7203 = 0;
	var uLocal_7204 = 0;
	var uLocal_7205 = 0;
	var uLocal_7206 = 0;
	var uLocal_7207 = 0;
	var uLocal_7208 = 0;
	var uLocal_7209 = 0;
	var uLocal_7210 = 0;
	var uLocal_7211 = 0;
	var uLocal_7212 = 0;
	var uLocal_7213 = 0;
	var uLocal_7214 = 0;
	var uLocal_7215 = 0;
	var uLocal_7216 = 0;
	var uLocal_7217 = 0;
	var uLocal_7218 = 0;
	var uLocal_7219 = 0;
	var uLocal_7220 = 0;
	var uLocal_7221 = 0;
	var uLocal_7222 = 0;
	var uLocal_7223 = 0;
	var uLocal_7224 = 0;
	var uLocal_7225 = 0;
	var uLocal_7226 = 0;
	var uLocal_7227 = 0;
	var uLocal_7228 = 0;
	var uLocal_7229 = 0;
	var uLocal_7230 = 0;
	var uLocal_7231 = 0;
	var uLocal_7232 = 0;
	var uLocal_7233 = 0;
	var uLocal_7234 = 0;
	var uLocal_7235 = 0;
	var uLocal_7236 = 0;
	var uLocal_7237 = 0;
	var uLocal_7238 = 0;
	var uLocal_7239 = 0;
	var uLocal_7240 = 0;
	var uLocal_7241 = 0;
	var uLocal_7242 = 0;
	var uLocal_7243 = 0;
	var uLocal_7244 = 0;
	var uLocal_7245 = 0;
	var uLocal_7246 = 0;
	var uLocal_7247 = 0;
	var uLocal_7248 = 0;
	var uLocal_7249 = 0;
	var uLocal_7250 = 0;
	var uLocal_7251 = 0;
	var uLocal_7252 = 0;
	var uLocal_7253 = 0;
	var uLocal_7254 = 0;
	var uLocal_7255 = 0;
	var uLocal_7256 = 0;
	var uLocal_7257 = 0;
	var uLocal_7258 = 0;
	var uLocal_7259 = 0;
	var uLocal_7260 = 0;
	var uLocal_7261 = 0;
	var uLocal_7262 = 0;
	var uLocal_7263 = 0;
	var uLocal_7264 = 20;
	var uLocal_7265 = 0;
	var uLocal_7266 = 0;
	var uLocal_7267 = 0;
	var uLocal_7268 = 0;
	var uLocal_7269 = 0;
	var uLocal_7270 = 0;
	var uLocal_7271 = 0;
	var uLocal_7272 = 0;
	var uLocal_7273 = 0;
	var uLocal_7274 = 0;
	var uLocal_7275 = 0;
	var uLocal_7276 = 0;
	var uLocal_7277 = 0;
	var uLocal_7278 = 0;
	var uLocal_7279 = 0;
	var uLocal_7280 = 0;
	var uLocal_7281 = 0;
	var uLocal_7282 = 0;
	var uLocal_7283 = 0;
	var uLocal_7284 = 0;
	var uLocal_7285 = 0;
	var uLocal_7286 = 0;
	var uLocal_7287 = 0;
	var uLocal_7288 = 0;
	var uLocal_7289 = 0;
	var uLocal_7290 = 0;
	var uLocal_7291 = 0;
	var uLocal_7292 = 0;
	var uLocal_7293 = 0;
	var uLocal_7294 = 0;
	var uLocal_7295 = 0;
	var uLocal_7296 = 0;
	var uLocal_7297 = 0;
	var uLocal_7298 = 0;
	var uLocal_7299 = 0;
	var uLocal_7300 = 0;
	var uLocal_7301 = 0;
	var uLocal_7302 = 0;
	var uLocal_7303 = 0;
	var uLocal_7304 = 0;
	var uLocal_7305 = 0;
	var uLocal_7306 = 0;
	var uLocal_7307 = 0;
	var uLocal_7308 = 0;
	var uLocal_7309 = 0;
	var uLocal_7310 = 0;
	var uLocal_7311 = 0;
	var uLocal_7312 = 0;
	var uLocal_7313 = 0;
	var uLocal_7314 = 0;
	var uLocal_7315 = 0;
	var uLocal_7316 = 0;
	var uLocal_7317 = 0;
	var uLocal_7318 = 0;
	var uLocal_7319 = 0;
	var uLocal_7320 = 0;
	var uLocal_7321 = 0;
	var uLocal_7322 = 0;
	var uLocal_7323 = 0;
	var uLocal_7324 = 0;
	var uLocal_7325 = 0;
	var uLocal_7326 = 0;
	var uLocal_7327 = 0;
	var uLocal_7328 = 0;
	var uLocal_7329 = 0;
	var uLocal_7330 = 0;
	var uLocal_7331 = 20;
	var uLocal_7332 = 0;
	var uLocal_7333 = 0;
	var uLocal_7334 = 0;
	var uLocal_7335 = 0;
	var uLocal_7336 = 0;
	var uLocal_7337 = 0;
	var uLocal_7338 = 0;
	var uLocal_7339 = 0;
	var uLocal_7340 = 0;
	var uLocal_7341 = 0;
	var uLocal_7342 = 0;
	var uLocal_7343 = 0;
	var uLocal_7344 = 0;
	var uLocal_7345 = 0;
	var uLocal_7346 = 0;
	var uLocal_7347 = 0;
	var uLocal_7348 = 0;
	var uLocal_7349 = 0;
	var uLocal_7350 = 0;
	var uLocal_7351 = 0;
	var uLocal_7352 = 0;
	var uLocal_7353 = 0;
	var uLocal_7354 = 0;
	var uLocal_7355 = 0;
	var uLocal_7356 = 0;
	var uLocal_7357 = 0;
	var uLocal_7358 = 0;
	var uLocal_7359 = 0;
	var uLocal_7360 = 0;
	var uLocal_7361 = 0;
	var uLocal_7362 = 0;
	var uLocal_7363 = 0;
	var uLocal_7364 = 0;
	var uLocal_7365 = 0;
	var uLocal_7366 = 0;
	var uLocal_7367 = 0;
	var uLocal_7368 = 0;
	var uLocal_7369 = 0;
	var uLocal_7370 = 0;
	var uLocal_7371 = 0;
	var uLocal_7372 = 0;
	var uLocal_7373 = 0;
	var uLocal_7374 = 0;
	var uLocal_7375 = 0;
	var uLocal_7376 = 0;
	var uLocal_7377 = 0;
	var uLocal_7378 = 0;
	var uLocal_7379 = 0;
	var uLocal_7380 = 0;
	var uLocal_7381 = 0;
	var uLocal_7382 = 0;
	var uLocal_7383 = 0;
	var uLocal_7384 = 0;
	var uLocal_7385 = 0;
	var uLocal_7386 = 0;
	var uLocal_7387 = 0;
	var uLocal_7388 = 0;
	var uLocal_7389 = 0;
	var uLocal_7390 = 0;
	var uLocal_7391 = 0;
	var uLocal_7392 = 0;
	var uLocal_7393 = 0;
	var uLocal_7394 = 0;
	var uLocal_7395 = 0;
	var uLocal_7396 = 0;
	var uLocal_7397 = 0;
	var uLocal_7398 = 20;
	var uLocal_7399 = 0;
	var uLocal_7400 = 0;
	var uLocal_7401 = 0;
	var uLocal_7402 = 0;
	var uLocal_7403 = 0;
	var uLocal_7404 = 0;
	var uLocal_7405 = 0;
	var uLocal_7406 = 0;
	var uLocal_7407 = 0;
	var uLocal_7408 = 0;
	var uLocal_7409 = 0;
	var uLocal_7410 = 0;
	var uLocal_7411 = 0;
	var uLocal_7412 = 0;
	var uLocal_7413 = 0;
	var uLocal_7414 = 0;
	var uLocal_7415 = 0;
	var uLocal_7416 = 0;
	var uLocal_7417 = 0;
	var uLocal_7418 = 0;
	var uLocal_7419 = 0;
	var uLocal_7420 = 0;
	var uLocal_7421 = 0;
	var uLocal_7422 = 0;
	var uLocal_7423 = 0;
	var uLocal_7424 = 0;
	var uLocal_7425 = 0;
	var uLocal_7426 = 0;
	var uLocal_7427 = 0;
	var uLocal_7428 = 0;
	var uLocal_7429 = 0;
	var uLocal_7430 = 0;
	var uLocal_7431 = 0;
	var uLocal_7432 = 0;
	var uLocal_7433 = 0;
	var uLocal_7434 = 0;
	var uLocal_7435 = 0;
	var uLocal_7436 = 0;
	var uLocal_7437 = 0;
	var uLocal_7438 = 0;
	var uLocal_7439 = 0;
	var uLocal_7440 = 0;
	var uLocal_7441 = 0;
	var uLocal_7442 = 0;
	var uLocal_7443 = 0;
	var uLocal_7444 = 0;
	var uLocal_7445 = 0;
	var uLocal_7446 = 0;
	var uLocal_7447 = 0;
	var uLocal_7448 = 0;
	var uLocal_7449 = 0;
	var uLocal_7450 = 0;
	var uLocal_7451 = 0;
	var uLocal_7452 = 0;
	var uLocal_7453 = 0;
	var uLocal_7454 = 0;
	var uLocal_7455 = 0;
	var uLocal_7456 = 0;
	var uLocal_7457 = 0;
	var uLocal_7458 = 0;
	var uLocal_7459 = 0;
	var uLocal_7460 = 0;
	var uLocal_7461 = 0;
	var uLocal_7462 = 0;
	var uLocal_7463 = 0;
	var uLocal_7464 = 0;
	var uLocal_7465 = 20;
	var uLocal_7466 = 0;
	var uLocal_7467 = 0;
	var uLocal_7468 = 0;
	var uLocal_7469 = 0;
	var uLocal_7470 = 0;
	var uLocal_7471 = 0;
	var uLocal_7472 = 0;
	var uLocal_7473 = 0;
	var uLocal_7474 = 0;
	var uLocal_7475 = 0;
	var uLocal_7476 = 0;
	var uLocal_7477 = 0;
	var uLocal_7478 = 0;
	var uLocal_7479 = 0;
	var uLocal_7480 = 0;
	var uLocal_7481 = 0;
	var uLocal_7482 = 0;
	var uLocal_7483 = 0;
	var uLocal_7484 = 0;
	var uLocal_7485 = 0;
	var uLocal_7486 = 0;
	var uLocal_7487 = 0;
	var uLocal_7488 = 0;
	var uLocal_7489 = 0;
	var uLocal_7490 = 0;
	var uLocal_7491 = 0;
	var uLocal_7492 = 0;
	var uLocal_7493 = 0;
	var uLocal_7494 = 0;
	var uLocal_7495 = 0;
	var uLocal_7496 = 0;
	var uLocal_7497 = 0;
	var uLocal_7498 = 0;
	var uLocal_7499 = 0;
	var uLocal_7500 = 0;
	var uLocal_7501 = 0;
	var uLocal_7502 = 0;
	var uLocal_7503 = 0;
	var uLocal_7504 = 0;
	var uLocal_7505 = 0;
	var uLocal_7506 = 0;
	var uLocal_7507 = 0;
	var uLocal_7508 = 0;
	var uLocal_7509 = 0;
	var uLocal_7510 = 0;
	var uLocal_7511 = 0;
	var uLocal_7512 = 0;
	var uLocal_7513 = 0;
	var uLocal_7514 = 0;
	var uLocal_7515 = 0;
	var uLocal_7516 = 0;
	var uLocal_7517 = 0;
	var uLocal_7518 = 0;
	var uLocal_7519 = 0;
	var uLocal_7520 = 0;
	var uLocal_7521 = 0;
	var uLocal_7522 = 0;
	var uLocal_7523 = 0;
	var uLocal_7524 = 0;
	var uLocal_7525 = 0;
	var uLocal_7526 = 0;
	var uLocal_7527 = 0;
	var uLocal_7528 = 0;
	var uLocal_7529 = 0;
	var uLocal_7530 = 0;
	var uLocal_7531 = 0;
	var uLocal_7532 = 20;
	var uLocal_7533 = 0;
	var uLocal_7534 = 0;
	var uLocal_7535 = 0;
	var uLocal_7536 = 0;
	var uLocal_7537 = 0;
	var uLocal_7538 = 0;
	var uLocal_7539 = 0;
	var uLocal_7540 = 0;
	var uLocal_7541 = 0;
	var uLocal_7542 = 0;
	var uLocal_7543 = 0;
	var uLocal_7544 = 0;
	var uLocal_7545 = 0;
	var uLocal_7546 = 0;
	var uLocal_7547 = 0;
	var uLocal_7548 = 0;
	var uLocal_7549 = 0;
	var uLocal_7550 = 0;
	var uLocal_7551 = 0;
	var uLocal_7552 = 0;
	var uLocal_7553 = 0;
	var uLocal_7554 = 0;
	var uLocal_7555 = 0;
	var uLocal_7556 = 0;
	var uLocal_7557 = 0;
	var uLocal_7558 = 0;
	var uLocal_7559 = 0;
	var uLocal_7560 = 0;
	var uLocal_7561 = 0;
	var uLocal_7562 = 0;
	var uLocal_7563 = 0;
	var uLocal_7564 = 0;
	var uLocal_7565 = 0;
	var uLocal_7566 = 0;
	var uLocal_7567 = 0;
	var uLocal_7568 = 0;
	var uLocal_7569 = 0;
	var uLocal_7570 = 0;
	var uLocal_7571 = 0;
	var uLocal_7572 = 0;
	var uLocal_7573 = 0;
	var uLocal_7574 = 0;
	var uLocal_7575 = 0;
	var uLocal_7576 = 0;
	var uLocal_7577 = 0;
	var uLocal_7578 = 0;
	var uLocal_7579 = 0;
	var uLocal_7580 = 0;
	var uLocal_7581 = 0;
	var uLocal_7582 = 0;
	var uLocal_7583 = 0;
	var uLocal_7584 = 0;
	var uLocal_7585 = 0;
	var uLocal_7586 = 0;
	var uLocal_7587 = 0;
	var uLocal_7588 = 0;
	var uLocal_7589 = 0;
	var uLocal_7590 = 0;
	var uLocal_7591 = 0;
	var uLocal_7592 = 0;
	var uLocal_7593 = 0;
	var uLocal_7594 = 0;
	var uLocal_7595 = 0;
	var uLocal_7596 = 0;
	var uLocal_7597 = 0;
	var uLocal_7598 = 0;
	var uLocal_7599 = 20;
	var uLocal_7600 = 0;
	var uLocal_7601 = 0;
	var uLocal_7602 = 0;
	var uLocal_7603 = 0;
	var uLocal_7604 = 0;
	var uLocal_7605 = 0;
	var uLocal_7606 = 0;
	var uLocal_7607 = 0;
	var uLocal_7608 = 0;
	var uLocal_7609 = 0;
	var uLocal_7610 = 0;
	var uLocal_7611 = 0;
	var uLocal_7612 = 0;
	var uLocal_7613 = 0;
	var uLocal_7614 = 0;
	var uLocal_7615 = 0;
	var uLocal_7616 = 0;
	var uLocal_7617 = 0;
	var uLocal_7618 = 0;
	var uLocal_7619 = 0;
	var uLocal_7620 = 0;
	var uLocal_7621 = 0;
	var uLocal_7622 = 0;
	var uLocal_7623 = 0;
	var uLocal_7624 = 0;
	var uLocal_7625 = 0;
	var uLocal_7626 = 0;
	var uLocal_7627 = 0;
	var uLocal_7628 = 0;
	var uLocal_7629 = 0;
	var uLocal_7630 = 0;
	var uLocal_7631 = 0;
	var uLocal_7632 = 0;
	var uLocal_7633 = 0;
	var uLocal_7634 = 0;
	var uLocal_7635 = 0;
	var uLocal_7636 = 0;
	var uLocal_7637 = 0;
	var uLocal_7638 = 0;
	var uLocal_7639 = 0;
	var uLocal_7640 = 0;
	var uLocal_7641 = 0;
	var uLocal_7642 = 0;
	var uLocal_7643 = 0;
	var uLocal_7644 = 0;
	var uLocal_7645 = 0;
	var uLocal_7646 = 0;
	var uLocal_7647 = 0;
	var uLocal_7648 = 0;
	var uLocal_7649 = 0;
	var uLocal_7650 = 0;
	var uLocal_7651 = 0;
	var uLocal_7652 = 0;
	var uLocal_7653 = 0;
	var uLocal_7654 = 0;
	var uLocal_7655 = 0;
	var uLocal_7656 = 0;
	var uLocal_7657 = 0;
	var uLocal_7658 = 0;
	var uLocal_7659 = 0;
	var uLocal_7660 = 0;
	var uLocal_7661 = 0;
	var uLocal_7662 = 0;
	var uLocal_7663 = 0;
	var uLocal_7664 = 0;
	var uLocal_7665 = 0;
	var uLocal_7666 = 20;
	var uLocal_7667 = 0;
	var uLocal_7668 = 0;
	var uLocal_7669 = 0;
	var uLocal_7670 = 0;
	var uLocal_7671 = 0;
	var uLocal_7672 = 0;
	var uLocal_7673 = 0;
	var uLocal_7674 = 0;
	var uLocal_7675 = 0;
	var uLocal_7676 = 0;
	var uLocal_7677 = 0;
	var uLocal_7678 = 0;
	var uLocal_7679 = 0;
	var uLocal_7680 = 0;
	var uLocal_7681 = 0;
	var uLocal_7682 = 0;
	var uLocal_7683 = 0;
	var uLocal_7684 = 0;
	var uLocal_7685 = 0;
	var uLocal_7686 = 0;
	var uLocal_7687 = 0;
	var uLocal_7688 = 0;
	var uLocal_7689 = 0;
	var uLocal_7690 = 0;
	var uLocal_7691 = 0;
	var uLocal_7692 = 0;
	var uLocal_7693 = 0;
	var uLocal_7694 = 0;
	var uLocal_7695 = 0;
	var uLocal_7696 = 0;
	var uLocal_7697 = 0;
	var uLocal_7698 = 0;
	var uLocal_7699 = 0;
	var uLocal_7700 = 0;
	var uLocal_7701 = 0;
	var uLocal_7702 = 0;
	var uLocal_7703 = 0;
	var uLocal_7704 = 0;
	var uLocal_7705 = 0;
	var uLocal_7706 = 0;
	var uLocal_7707 = 0;
	var uLocal_7708 = 0;
	var uLocal_7709 = 0;
	var uLocal_7710 = 0;
	var uLocal_7711 = 0;
	var uLocal_7712 = 0;
	var uLocal_7713 = 0;
	var uLocal_7714 = 0;
	var uLocal_7715 = 0;
	var uLocal_7716 = 0;
	var uLocal_7717 = 0;
	var uLocal_7718 = 0;
	var uLocal_7719 = 0;
	var uLocal_7720 = 0;
	var uLocal_7721 = 0;
	var uLocal_7722 = 0;
	var uLocal_7723 = 0;
	var uLocal_7724 = 0;
	var uLocal_7725 = 0;
	var uLocal_7726 = 0;
	var uLocal_7727 = 0;
	var uLocal_7728 = 0;
	var uLocal_7729 = 0;
	var uLocal_7730 = 0;
	var uLocal_7731 = 0;
	var uLocal_7732 = 0;
	var uLocal_7733 = 20;
	var uLocal_7734 = 0;
	var uLocal_7735 = 0;
	var uLocal_7736 = 0;
	var uLocal_7737 = 0;
	var uLocal_7738 = 0;
	var uLocal_7739 = 0;
	var uLocal_7740 = 0;
	var uLocal_7741 = 0;
	var uLocal_7742 = 0;
	var uLocal_7743 = 0;
	var uLocal_7744 = 0;
	var uLocal_7745 = 0;
	var uLocal_7746 = 0;
	var uLocal_7747 = 0;
	var uLocal_7748 = 0;
	var uLocal_7749 = 0;
	var uLocal_7750 = 0;
	var uLocal_7751 = 0;
	var uLocal_7752 = 0;
	var uLocal_7753 = 0;
	var uLocal_7754 = 0;
	var uLocal_7755 = 0;
	var uLocal_7756 = 0;
	var uLocal_7757 = 0;
	var uLocal_7758 = 0;
	var uLocal_7759 = 0;
	var uLocal_7760 = 0;
	var uLocal_7761 = 0;
	var uLocal_7762 = 0;
	var uLocal_7763 = 0;
	var uLocal_7764 = 0;
	var uLocal_7765 = 0;
	var uLocal_7766 = 0;
	var uLocal_7767 = 0;
	var uLocal_7768 = 0;
	var uLocal_7769 = 0;
	var uLocal_7770 = 0;
	var uLocal_7771 = 0;
	var uLocal_7772 = 0;
	var uLocal_7773 = 0;
	var uLocal_7774 = 0;
	var uLocal_7775 = 0;
	var uLocal_7776 = 0;
	var uLocal_7777 = 0;
	var uLocal_7778 = 0;
	var uLocal_7779 = 0;
	var uLocal_7780 = 0;
	var uLocal_7781 = 0;
	var uLocal_7782 = 0;
	var uLocal_7783 = 0;
	var uLocal_7784 = 0;
	var uLocal_7785 = 0;
	var uLocal_7786 = 0;
	var uLocal_7787 = 0;
	var uLocal_7788 = 0;
	var uLocal_7789 = 0;
	var uLocal_7790 = 0;
	var uLocal_7791 = 0;
	var uLocal_7792 = 0;
	var uLocal_7793 = 0;
	var uLocal_7794 = 0;
	var uLocal_7795 = 0;
	var uLocal_7796 = 0;
	var uLocal_7797 = 0;
	var uLocal_7798 = 0;
	var uLocal_7799 = 0;
	var uLocal_7800 = 20;
	var uLocal_7801 = 0;
	var uLocal_7802 = 0;
	var uLocal_7803 = 0;
	var uLocal_7804 = 0;
	var uLocal_7805 = 0;
	var uLocal_7806 = 0;
	var uLocal_7807 = 0;
	var uLocal_7808 = 0;
	var uLocal_7809 = 0;
	var uLocal_7810 = 0;
	var uLocal_7811 = 0;
	var uLocal_7812 = 0;
	var uLocal_7813 = 0;
	var uLocal_7814 = 0;
	var uLocal_7815 = 0;
	var uLocal_7816 = 0;
	var uLocal_7817 = 0;
	var uLocal_7818 = 0;
	var uLocal_7819 = 0;
	var uLocal_7820 = 0;
	var uLocal_7821 = 0;
	var uLocal_7822 = 0;
	var uLocal_7823 = 0;
	var uLocal_7824 = 0;
	var uLocal_7825 = 0;
	var uLocal_7826 = 0;
	var uLocal_7827 = 0;
	var uLocal_7828 = 0;
	var uLocal_7829 = 0;
	var uLocal_7830 = 0;
	var uLocal_7831 = 0;
	var uLocal_7832 = 0;
	var uLocal_7833 = 0;
	var uLocal_7834 = 0;
	var uLocal_7835 = 0;
	var uLocal_7836 = 0;
	var uLocal_7837 = 0;
	var uLocal_7838 = 0;
	var uLocal_7839 = 0;
	var uLocal_7840 = 0;
	var uLocal_7841 = 0;
	var uLocal_7842 = 0;
	var uLocal_7843 = 0;
	var uLocal_7844 = 0;
	var uLocal_7845 = 0;
	var uLocal_7846 = 0;
	var uLocal_7847 = 0;
	var uLocal_7848 = 0;
	var uLocal_7849 = 0;
	var uLocal_7850 = 0;
	var uLocal_7851 = 0;
	var uLocal_7852 = 0;
	var uLocal_7853 = 0;
	var uLocal_7854 = 0;
	var uLocal_7855 = 0;
	var uLocal_7856 = 0;
	var uLocal_7857 = 0;
	var uLocal_7858 = 0;
	var uLocal_7859 = 0;
	var uLocal_7860 = 0;
	var uLocal_7861 = 0;
	var uLocal_7862 = 0;
	var uLocal_7863 = 0;
	var uLocal_7864 = 0;
	var uLocal_7865 = 0;
	var uLocal_7866 = 0;
	var uLocal_7867 = 20;
	var uLocal_7868 = 0;
	var uLocal_7869 = 0;
	var uLocal_7870 = 0;
	var uLocal_7871 = 0;
	var uLocal_7872 = 0;
	var uLocal_7873 = 0;
	var uLocal_7874 = 0;
	var uLocal_7875 = 0;
	var uLocal_7876 = 0;
	var uLocal_7877 = 0;
	var uLocal_7878 = 0;
	var uLocal_7879 = 0;
	var uLocal_7880 = 0;
	var uLocal_7881 = 0;
	var uLocal_7882 = 0;
	var uLocal_7883 = 0;
	var uLocal_7884 = 0;
	var uLocal_7885 = 0;
	var uLocal_7886 = 0;
	var uLocal_7887 = 0;
	var uLocal_7888 = 0;
	var uLocal_7889 = 0;
	var uLocal_7890 = 0;
	var uLocal_7891 = 0;
	var uLocal_7892 = 0;
	var uLocal_7893 = 0;
	var uLocal_7894 = 0;
	var uLocal_7895 = 0;
	var uLocal_7896 = 0;
	var uLocal_7897 = 0;
	var uLocal_7898 = 0;
	var uLocal_7899 = 0;
	var uLocal_7900 = 0;
	var uLocal_7901 = 0;
	var uLocal_7902 = 0;
	var uLocal_7903 = 0;
	var uLocal_7904 = 0;
	var uLocal_7905 = 0;
	var uLocal_7906 = 0;
	var uLocal_7907 = 0;
	var uLocal_7908 = 0;
	var uLocal_7909 = 0;
	var uLocal_7910 = 0;
	var uLocal_7911 = 0;
	var uLocal_7912 = 0;
	var uLocal_7913 = 0;
	var uLocal_7914 = 0;
	var uLocal_7915 = 0;
	var uLocal_7916 = 0;
	var uLocal_7917 = 0;
	var uLocal_7918 = 0;
	var uLocal_7919 = 0;
	var uLocal_7920 = 0;
	var uLocal_7921 = 0;
	var uLocal_7922 = 0;
	var uLocal_7923 = 0;
	var uLocal_7924 = 0;
	var uLocal_7925 = 0;
	var uLocal_7926 = 0;
	var uLocal_7927 = 0;
	var uLocal_7928 = 0;
	var uLocal_7929 = 0;
	var uLocal_7930 = 0;
	var uLocal_7931 = 0;
	var uLocal_7932 = 0;
	var uLocal_7933 = 0;
	var uLocal_7934 = 20;
	var uLocal_7935 = 0;
	var uLocal_7936 = 0;
	var uLocal_7937 = 0;
	var uLocal_7938 = 0;
	var uLocal_7939 = 0;
	var uLocal_7940 = 0;
	var uLocal_7941 = 0;
	var uLocal_7942 = 0;
	var uLocal_7943 = 0;
	var uLocal_7944 = 0;
	var uLocal_7945 = 0;
	var uLocal_7946 = 0;
	var uLocal_7947 = 0;
	var uLocal_7948 = 0;
	var uLocal_7949 = 0;
	var uLocal_7950 = 0;
	var uLocal_7951 = 0;
	var uLocal_7952 = 0;
	var uLocal_7953 = 0;
	var uLocal_7954 = 0;
	var uLocal_7955 = 0;
	var uLocal_7956 = 0;
	var uLocal_7957 = 0;
	var uLocal_7958 = 0;
	var uLocal_7959 = 0;
	var uLocal_7960 = 0;
	var uLocal_7961 = 0;
	var uLocal_7962 = 0;
	var uLocal_7963 = 0;
	var uLocal_7964 = 0;
	var uLocal_7965 = 0;
	var uLocal_7966 = 0;
	var uLocal_7967 = 0;
	var uLocal_7968 = 0;
	var uLocal_7969 = 0;
	var uLocal_7970 = 0;
	var uLocal_7971 = 0;
	var uLocal_7972 = 0;
	var uLocal_7973 = 0;
	var uLocal_7974 = 0;
	var uLocal_7975 = 0;
	var uLocal_7976 = 0;
	var uLocal_7977 = 0;
	var uLocal_7978 = 0;
	var uLocal_7979 = 0;
	var uLocal_7980 = 0;
	var uLocal_7981 = 0;
	var uLocal_7982 = 0;
	var uLocal_7983 = 0;
	var uLocal_7984 = 0;
	var uLocal_7985 = 0;
	var uLocal_7986 = 0;
	var uLocal_7987 = 0;
	var uLocal_7988 = 0;
	var uLocal_7989 = 0;
	var uLocal_7990 = 0;
	var uLocal_7991 = 0;
	var uLocal_7992 = 0;
	var uLocal_7993 = 0;
	var uLocal_7994 = 0;
	var uLocal_7995 = 0;
	var uLocal_7996 = 0;
	var uLocal_7997 = 0;
	var uLocal_7998 = 0;
	var uLocal_7999 = 0;
	var uLocal_8000 = 0;
	var uLocal_8001 = 20;
	var uLocal_8002 = 0;
	var uLocal_8003 = 0;
	var uLocal_8004 = 0;
	var uLocal_8005 = 0;
	var uLocal_8006 = 0;
	var uLocal_8007 = 0;
	var uLocal_8008 = 0;
	var uLocal_8009 = 0;
	var uLocal_8010 = 0;
	var uLocal_8011 = 0;
	var uLocal_8012 = 0;
	var uLocal_8013 = 0;
	var uLocal_8014 = 0;
	var uLocal_8015 = 0;
	var uLocal_8016 = 0;
	var uLocal_8017 = 0;
	var uLocal_8018 = 0;
	var uLocal_8019 = 0;
	var uLocal_8020 = 0;
	var uLocal_8021 = 0;
	var uLocal_8022 = 0;
	var uLocal_8023 = 0;
	var uLocal_8024 = 0;
	var uLocal_8025 = 0;
	var uLocal_8026 = 0;
	var uLocal_8027 = 0;
	var uLocal_8028 = 0;
	var uLocal_8029 = 0;
	var uLocal_8030 = 0;
	var uLocal_8031 = 0;
	var uLocal_8032 = 0;
	var uLocal_8033 = 0;
	var uLocal_8034 = 0;
	var uLocal_8035 = 0;
	var uLocal_8036 = 0;
	var uLocal_8037 = 0;
	var uLocal_8038 = 0;
	var uLocal_8039 = 0;
	var uLocal_8040 = 0;
	var uLocal_8041 = 0;
	var uLocal_8042 = 0;
	var uLocal_8043 = 0;
	var uLocal_8044 = 0;
	var uLocal_8045 = 0;
	var uLocal_8046 = 0;
	var uLocal_8047 = 0;
	var uLocal_8048 = 0;
	var uLocal_8049 = 0;
	var uLocal_8050 = 0;
	var uLocal_8051 = 0;
	var uLocal_8052 = 0;
	var uLocal_8053 = 0;
	var uLocal_8054 = 0;
	var uLocal_8055 = 0;
	var uLocal_8056 = 0;
	var uLocal_8057 = 0;
	var uLocal_8058 = 0;
	var uLocal_8059 = 0;
	var uLocal_8060 = 0;
	var uLocal_8061 = 0;
	var uLocal_8062 = 0;
	var uLocal_8063 = 0;
	var uLocal_8064 = 0;
	var uLocal_8065 = 0;
	var uLocal_8066 = 0;
	var uLocal_8067 = 0;
	var uLocal_8068 = 20;
	var uLocal_8069 = 0;
	var uLocal_8070 = 0;
	var uLocal_8071 = 0;
	var uLocal_8072 = 0;
	var uLocal_8073 = 0;
	var uLocal_8074 = 0;
	var uLocal_8075 = 0;
	var uLocal_8076 = 0;
	var uLocal_8077 = 0;
	var uLocal_8078 = 0;
	var uLocal_8079 = 0;
	var uLocal_8080 = 0;
	var uLocal_8081 = 0;
	var uLocal_8082 = 0;
	var uLocal_8083 = 0;
	var uLocal_8084 = 0;
	var uLocal_8085 = 0;
	var uLocal_8086 = 0;
	var uLocal_8087 = 0;
	var uLocal_8088 = 0;
	var uLocal_8089 = 0;
	var uLocal_8090 = 0;
	var uLocal_8091 = 0;
	var uLocal_8092 = 0;
	var uLocal_8093 = 0;
	var uLocal_8094 = 0;
	var uLocal_8095 = 0;
	var uLocal_8096 = 0;
	var uLocal_8097 = 0;
	var uLocal_8098 = 0;
	var uLocal_8099 = 0;
	var uLocal_8100 = 0;
	var uLocal_8101 = 0;
	var uLocal_8102 = 0;
	var uLocal_8103 = 0;
	var uLocal_8104 = 0;
	var uLocal_8105 = 0;
	var uLocal_8106 = 0;
	var uLocal_8107 = 0;
	var uLocal_8108 = 0;
	var uLocal_8109 = 0;
	var uLocal_8110 = 0;
	var uLocal_8111 = 0;
	var uLocal_8112 = 0;
	var uLocal_8113 = 0;
	var uLocal_8114 = 0;
	var uLocal_8115 = 0;
	var uLocal_8116 = 0;
	var uLocal_8117 = 0;
	var uLocal_8118 = 0;
	var uLocal_8119 = 0;
	var uLocal_8120 = 0;
	var uLocal_8121 = 0;
	var uLocal_8122 = 0;
	var uLocal_8123 = 0;
	var uLocal_8124 = 0;
	var uLocal_8125 = 0;
	var uLocal_8126 = 0;
	var uLocal_8127 = 0;
	var uLocal_8128 = 0;
	var uLocal_8129 = 0;
	var uLocal_8130 = 0;
	var uLocal_8131 = 0;
	var uLocal_8132 = 0;
	var uLocal_8133 = 0;
	var uLocal_8134 = 0;
	var uLocal_8135 = 20;
	var uLocal_8136 = 0;
	var uLocal_8137 = 0;
	var uLocal_8138 = 0;
	var uLocal_8139 = 0;
	var uLocal_8140 = 0;
	var uLocal_8141 = 0;
	var uLocal_8142 = 0;
	var uLocal_8143 = 0;
	var uLocal_8144 = 0;
	var uLocal_8145 = 0;
	var uLocal_8146 = 0;
	var uLocal_8147 = 0;
	var uLocal_8148 = 0;
	var uLocal_8149 = 0;
	var uLocal_8150 = 0;
	var uLocal_8151 = 0;
	var uLocal_8152 = 0;
	var uLocal_8153 = 0;
	var uLocal_8154 = 0;
	var uLocal_8155 = 0;
	var uLocal_8156 = 0;
	var uLocal_8157 = 0;
	var uLocal_8158 = 0;
	var uLocal_8159 = 0;
	var uLocal_8160 = 0;
	var uLocal_8161 = 0;
	var uLocal_8162 = 0;
	var uLocal_8163 = 0;
	var uLocal_8164 = 0;
	var uLocal_8165 = 0;
	var uLocal_8166 = 0;
	var uLocal_8167 = 0;
	var uLocal_8168 = 0;
	var uLocal_8169 = 0;
	var uLocal_8170 = 0;
	var uLocal_8171 = 0;
	var uLocal_8172 = 0;
	var uLocal_8173 = 0;
	var uLocal_8174 = 0;
	var uLocal_8175 = 0;
	var uLocal_8176 = 0;
	var uLocal_8177 = 0;
	var uLocal_8178 = 0;
	var uLocal_8179 = 0;
	var uLocal_8180 = 0;
	var uLocal_8181 = 0;
	var uLocal_8182 = 0;
	var uLocal_8183 = 0;
	var uLocal_8184 = 0;
	var uLocal_8185 = 0;
	var uLocal_8186 = 0;
	var uLocal_8187 = 0;
	var uLocal_8188 = 0;
	var uLocal_8189 = 0;
	var uLocal_8190 = 0;
	var uLocal_8191 = 0;
	var uLocal_8192 = 0;
	var uLocal_8193 = 0;
	var uLocal_8194 = 0;
	var uLocal_8195 = 0;
	var uLocal_8196 = 0;
	var uLocal_8197 = 0;
	var uLocal_8198 = 0;
	var uLocal_8199 = 0;
	var uLocal_8200 = 0;
	var uLocal_8201 = 0;
	var uLocal_8202 = 20;
	var uLocal_8203 = 0;
	var uLocal_8204 = 0;
	var uLocal_8205 = 0;
	var uLocal_8206 = 0;
	var uLocal_8207 = 0;
	var uLocal_8208 = 0;
	var uLocal_8209 = 0;
	var uLocal_8210 = 0;
	var uLocal_8211 = 0;
	var uLocal_8212 = 0;
	var uLocal_8213 = 0;
	var uLocal_8214 = 0;
	var uLocal_8215 = 0;
	var uLocal_8216 = 0;
	var uLocal_8217 = 0;
	var uLocal_8218 = 0;
	var uLocal_8219 = 0;
	var uLocal_8220 = 0;
	var uLocal_8221 = 0;
	var uLocal_8222 = 0;
	var uLocal_8223 = 0;
	var uLocal_8224 = 0;
	var uLocal_8225 = 0;
	var uLocal_8226 = 0;
	var uLocal_8227 = 0;
	var uLocal_8228 = 0;
	var uLocal_8229 = 0;
	var uLocal_8230 = 0;
	var uLocal_8231 = 0;
	var uLocal_8232 = 0;
	var uLocal_8233 = 0;
	var uLocal_8234 = 0;
	var uLocal_8235 = 0;
	var uLocal_8236 = 0;
	var uLocal_8237 = 0;
	var uLocal_8238 = 0;
	var uLocal_8239 = 0;
	var uLocal_8240 = 0;
	var uLocal_8241 = 0;
	var uLocal_8242 = 0;
	var uLocal_8243 = 0;
	var uLocal_8244 = 0;
	var uLocal_8245 = 0;
	var uLocal_8246 = 0;
	var uLocal_8247 = 0;
	var uLocal_8248 = 0;
	var uLocal_8249 = 0;
	var uLocal_8250 = 0;
	var uLocal_8251 = 0;
	var uLocal_8252 = 0;
	var uLocal_8253 = 0;
	var uLocal_8254 = 0;
	var uLocal_8255 = 0;
	var uLocal_8256 = 0;
	var uLocal_8257 = 0;
	var uLocal_8258 = 0;
	var uLocal_8259 = 0;
	var uLocal_8260 = 0;
	var uLocal_8261 = 0;
	var uLocal_8262 = 0;
	var uLocal_8263 = 0;
	var uLocal_8264 = 0;
	var uLocal_8265 = 0;
	var uLocal_8266 = 0;
	var uLocal_8267 = 0;
	var uLocal_8268 = 0;
	var uLocal_8269 = 20;
	var uLocal_8270 = 0;
	var uLocal_8271 = 0;
	var uLocal_8272 = 0;
	var uLocal_8273 = 0;
	var uLocal_8274 = 0;
	var uLocal_8275 = 0;
	var uLocal_8276 = 0;
	var uLocal_8277 = 0;
	var uLocal_8278 = 0;
	var uLocal_8279 = 0;
	var uLocal_8280 = 0;
	var uLocal_8281 = 0;
	var uLocal_8282 = 0;
	var uLocal_8283 = 0;
	var uLocal_8284 = 0;
	var uLocal_8285 = 0;
	var uLocal_8286 = 0;
	var uLocal_8287 = 0;
	var uLocal_8288 = 0;
	var uLocal_8289 = 0;
	var uLocal_8290 = 0;
	var uLocal_8291 = 0;
	var uLocal_8292 = 0;
	var uLocal_8293 = 0;
	var uLocal_8294 = 0;
	var uLocal_8295 = 0;
	var uLocal_8296 = 0;
	var uLocal_8297 = 0;
	var uLocal_8298 = 0;
	var uLocal_8299 = 0;
	var uLocal_8300 = 0;
	var uLocal_8301 = 0;
	var uLocal_8302 = 0;
	var uLocal_8303 = 0;
	var uLocal_8304 = 0;
	var uLocal_8305 = 0;
	var uLocal_8306 = 0;
	var uLocal_8307 = 0;
	var uLocal_8308 = 0;
	var uLocal_8309 = 0;
	var uLocal_8310 = 0;
	var uLocal_8311 = 0;
	var uLocal_8312 = 0;
	var uLocal_8313 = 0;
	var uLocal_8314 = 0;
	var uLocal_8315 = 0;
	var uLocal_8316 = 0;
	var uLocal_8317 = 0;
	var uLocal_8318 = 0;
	var uLocal_8319 = 0;
	var uLocal_8320 = 0;
	var uLocal_8321 = 0;
	var uLocal_8322 = 0;
	var uLocal_8323 = 0;
	var uLocal_8324 = 0;
	var uLocal_8325 = 0;
	var uLocal_8326 = 0;
	var uLocal_8327 = 0;
	var uLocal_8328 = 0;
	var uLocal_8329 = 0;
	var uLocal_8330 = 0;
	var uLocal_8331 = 0;
	var uLocal_8332 = 0;
	var uLocal_8333 = 0;
	var uLocal_8334 = 0;
	var uLocal_8335 = 0;
	var uLocal_8336 = 20;
	var uLocal_8337 = 0;
	var uLocal_8338 = 0;
	var uLocal_8339 = 0;
	var uLocal_8340 = 0;
	var uLocal_8341 = 0;
	var uLocal_8342 = 0;
	var uLocal_8343 = 0;
	var uLocal_8344 = 0;
	var uLocal_8345 = 0;
	var uLocal_8346 = 0;
	var uLocal_8347 = 0;
	var uLocal_8348 = 0;
	var uLocal_8349 = 0;
	var uLocal_8350 = 0;
	var uLocal_8351 = 0;
	var uLocal_8352 = 0;
	var uLocal_8353 = 0;
	var uLocal_8354 = 0;
	var uLocal_8355 = 0;
	var uLocal_8356 = 0;
	var uLocal_8357 = 0;
	var uLocal_8358 = 0;
	var uLocal_8359 = 0;
	var uLocal_8360 = 0;
	var uLocal_8361 = 0;
	var uLocal_8362 = 0;
	var uLocal_8363 = 0;
	var uLocal_8364 = 0;
	var uLocal_8365 = 0;
	var uLocal_8366 = 0;
	var uLocal_8367 = 0;
	var uLocal_8368 = 0;
	var uLocal_8369 = 0;
	var uLocal_8370 = 0;
	var uLocal_8371 = 0;
	var uLocal_8372 = 0;
	var uLocal_8373 = 0;
	var uLocal_8374 = 0;
	var uLocal_8375 = 0;
	var uLocal_8376 = 0;
	var uLocal_8377 = 0;
	var uLocal_8378 = 0;
	var uLocal_8379 = 0;
	var uLocal_8380 = 0;
	var uLocal_8381 = 0;
	var uLocal_8382 = 0;
	var uLocal_8383 = 0;
	var uLocal_8384 = 0;
	var uLocal_8385 = 0;
	var uLocal_8386 = 0;
	var uLocal_8387 = 0;
	var uLocal_8388 = 0;
	var uLocal_8389 = 0;
	var uLocal_8390 = 0;
	var uLocal_8391 = 0;
	var uLocal_8392 = 0;
	var uLocal_8393 = 0;
	var uLocal_8394 = 0;
	var uLocal_8395 = 0;
	var uLocal_8396 = 0;
	var uLocal_8397 = 0;
	var uLocal_8398 = 0;
	var uLocal_8399 = 10;
	var uLocal_8400 = 0;
	var uLocal_8401 = 0;
	var uLocal_8402 = 0;
	var uLocal_8403 = 0;
	var uLocal_8404 = 0;
	var uLocal_8405 = 0;
	var uLocal_8406 = 0;
	var uLocal_8407 = 0;
	var uLocal_8408 = 0;
	var uLocal_8409 = 0;
	var uLocal_8410 = 0;
	var uLocal_8411 = 0;
	var uLocal_8412 = 0;
	var uLocal_8413 = 0;
	var uLocal_8414 = 0;
	var uLocal_8415 = 0;
	var uLocal_8416 = 0;
	var uLocal_8417 = 0;
	var uLocal_8418 = 0;
	var uLocal_8419 = 0;
	var uLocal_8420 = 0;
	var uLocal_8421 = 0;
	var uLocal_8422 = 0;
	var uLocal_8423 = 0;
	var uLocal_8424 = 0;
	var uLocal_8425 = 0;
	var uLocal_8426 = 0;
	var uLocal_8427 = 0;
	var uLocal_8428 = 0;
	var uLocal_8429 = 0;
	var uLocal_8430 = 0;
	var uLocal_8431 = 0;
	var uLocal_8432 = 0;
	var uLocal_8433 = 0;
	var uLocal_8434 = 0;
	var uLocal_8435 = 0;
	var uLocal_8436 = 0;
	var uLocal_8437 = 0;
	var uLocal_8438 = 0;
	var uLocal_8439 = 0;
	var uLocal_8440 = 10;
	var uLocal_8441 = 0;
	var uLocal_8442 = 0;
	var uLocal_8443 = 0;
	var uLocal_8444 = 0;
	var uLocal_8445 = 0;
	var uLocal_8446 = 0;
	var uLocal_8447 = 0;
	var uLocal_8448 = 0;
	var uLocal_8449 = 0;
	var uLocal_8450 = 0;
	var uLocal_8451 = 0;
	var uLocal_8452 = 0;
	var uLocal_8453 = 0;
	var uLocal_8454 = 0;
	var uLocal_8455 = 0;
	var uLocal_8456 = 0;
	var uLocal_8457 = 0;
	var uLocal_8458 = 0;
	var uLocal_8459 = 0;
	var uLocal_8460 = 0;
	var uLocal_8461 = 0;
	var uLocal_8462 = 0;
	var uLocal_8463 = 0;
	var uLocal_8464 = 0;
	var uLocal_8465 = 0;
	var uLocal_8466 = 0;
	var uLocal_8467 = 0;
	var uLocal_8468 = 0;
	var uLocal_8469 = 0;
	var uLocal_8470 = 0;
	var uLocal_8471 = 0;
	var uLocal_8472 = 0;
	var uLocal_8473 = 0;
	var uLocal_8474 = 0;
	var uLocal_8475 = 0;
	var uLocal_8476 = 0;
	var uLocal_8477 = 0;
	var uLocal_8478 = 0;
	var uLocal_8479 = 0;
	var uLocal_8480 = 0;
	var uLocal_8481 = 0;
	var uLocal_8482 = 0;
	var uLocal_8483 = 0;
	var uLocal_8484 = 0;
	var uLocal_8485 = 0;
	var uLocal_8486 = 0;
	var uLocal_8487 = 0;
	var uLocal_8488 = 0;
	var uLocal_8489 = 0;
	var uLocal_8490 = 0;
	var uLocal_8491 = 3;
	var uLocal_8492 = 0;
	var uLocal_8493 = 0;
	var uLocal_8494 = 0;
	var uLocal_8495 = 0;
	var uLocal_8496 = 0;
	var uLocal_8497 = 0;
	var uLocal_8498 = 0;
	var uLocal_8499 = 0;
	var uLocal_8500 = 0;
	var uLocal_8501 = 5;
	var uLocal_8502 = 0;
	var uLocal_8503 = 0;
	var uLocal_8504 = 0;
	var uLocal_8505 = 0;
	var uLocal_8506 = 0;
	var uLocal_8507 = 0;
	var uLocal_8508 = 0;
	var uLocal_8509 = 0;
	var uLocal_8510 = 0;
	var uLocal_8511 = 0;
	var uLocal_8512 = 0;
	var uLocal_8513 = 0;
	var uLocal_8514 = 0;
	var uLocal_8515 = 0;
	var uLocal_8516 = 0;
	var uLocal_8517 = 5;
	var uLocal_8518 = 0;
	var uLocal_8519 = 0;
	var uLocal_8520 = 0;
	var uLocal_8521 = 0;
	var uLocal_8522 = 0;
	var uLocal_8523 = 0;
	var uLocal_8524 = 0;
	var uLocal_8525 = 0;
	var uLocal_8526 = 0;
	var uLocal_8527 = 0;
	var uLocal_8528 = 0;
	var uLocal_8529 = 0;
	var uLocal_8530 = 0;
	var uLocal_8531 = 0;
	var uLocal_8532 = 0;
	var uLocal_8533 = 0;
	var uLocal_8534 = 0;
	var uLocal_8535 = 0;
	var uLocal_8536 = 0;
	var uLocal_8537 = 0;
	var uLocal_8538 = 5;
	var uLocal_8539 = 0;
	var uLocal_8540 = 0;
	var uLocal_8541 = 0;
	var uLocal_8542 = 0;
	var uLocal_8543 = 0;
	var uLocal_8544 = 0;
	var uLocal_8545 = 0;
	var uLocal_8546 = 0;
	var uLocal_8547 = 0;
	var uLocal_8548 = 0;
	var uLocal_8549 = 0;
	var uLocal_8550 = 0;
	var uLocal_8551 = 0;
	var uLocal_8552 = 0;
	var uLocal_8553 = 0;
	var uLocal_8554 = 0;
	var uLocal_8555 = 0;
	var uLocal_8556 = 0;
	var uLocal_8557 = 0;
	var uLocal_8558 = 0;
	var uLocal_8559 = 0;
	var uLocal_8560 = 0;
	var uLocal_8561 = 0;
	var uLocal_8562 = 24;
	var uLocal_8563 = 0;
	var uLocal_8564 = 0;
	var uLocal_8565 = 0;
	var uLocal_8566 = 0;
	var uLocal_8567 = 0;
	var uLocal_8568 = 0;
	var uLocal_8569 = 0;
	var uLocal_8570 = 0;
	var uLocal_8571 = 0;
	var uLocal_8572 = 0;
	var uLocal_8573 = 0;
	var uLocal_8574 = 0;
	var uLocal_8575 = 0;
	var uLocal_8576 = 0;
	var uLocal_8577 = 0;
	var uLocal_8578 = 0;
	var uLocal_8579 = 0;
	var uLocal_8580 = 0;
	var uLocal_8581 = 0;
	var uLocal_8582 = 0;
	var uLocal_8583 = 0;
	var uLocal_8584 = 0;
	var uLocal_8585 = 0;
	var uLocal_8586 = 0;
	var uLocal_8587 = 0;
	var uLocal_8588 = 0;
	var uLocal_8589 = 0;
	var uLocal_8590 = 0;
	var uLocal_8591 = 0;
	var uLocal_8592 = 0;
	var uLocal_8593 = 0;
	var uLocal_8594 = 0;
	var uLocal_8595 = 0;
	var uLocal_8596 = 0;
	var uLocal_8597 = 0;
	var uLocal_8598 = 0;
	var uLocal_8599 = 0;
	var uLocal_8600 = 0;
	var uLocal_8601 = 0;
	var uLocal_8602 = 0;
	var uLocal_8603 = 0;
	var uLocal_8604 = 0;
	var uLocal_8605 = 0;
	var uLocal_8606 = 0;
	var uLocal_8607 = 0;
	var uLocal_8608 = 0;
	var uLocal_8609 = 0;
	var uLocal_8610 = 0;
	var uLocal_8611 = 0;
	var uLocal_8612 = 0;
	var uLocal_8613 = 0;
	var uLocal_8614 = 0;
	var uLocal_8615 = 0;
	var uLocal_8616 = 0;
	var uLocal_8617 = 0;
	var uLocal_8618 = 0;
	var uLocal_8619 = 0;
	var uLocal_8620 = 0;
	var uLocal_8621 = 0;
	var uLocal_8622 = 0;
	var uLocal_8623 = 0;
	var uLocal_8624 = 0;
	var uLocal_8625 = 0;
	var uLocal_8626 = 0;
	var uLocal_8627 = 0;
	var uLocal_8628 = 0;
	var uLocal_8629 = 0;
	var uLocal_8630 = 0;
	var uLocal_8631 = 0;
	var uLocal_8632 = 0;
	var uLocal_8633 = 0;
	var uLocal_8634 = 0;
	var uLocal_8635 = 0;
	var uLocal_8636 = 0;
	var uLocal_8637 = 0;
	var uLocal_8638 = 0;
	var uLocal_8639 = 0;
	var uLocal_8640 = 0;
	var uLocal_8641 = 0;
	var uLocal_8642 = 0;
	var uLocal_8643 = 0;
	var uLocal_8644 = 0;
	var uLocal_8645 = 0;
	var uLocal_8646 = 0;
	var uLocal_8647 = 0;
	var uLocal_8648 = 0;
	var uLocal_8649 = 0;
	var uLocal_8650 = 0;
	var uLocal_8651 = 0;
	var uLocal_8652 = 0;
	var uLocal_8653 = 0;
	var uLocal_8654 = 0;
	var uLocal_8655 = 0;
	var uLocal_8656 = 0;
	var uLocal_8657 = 0;
	var uLocal_8658 = 0;
	var uLocal_8659 = 0;
	var uLocal_8660 = 0;
	var uLocal_8661 = 0;
	var uLocal_8662 = 0;
	var uLocal_8663 = 0;
	var uLocal_8664 = 0;
	var uLocal_8665 = 0;
	var uLocal_8666 = 0;
	var uLocal_8667 = 0;
	var uLocal_8668 = 0;
	var uLocal_8669 = 0;
	var uLocal_8670 = 0;
	var uLocal_8671 = 0;
	var uLocal_8672 = 0;
	var uLocal_8673 = 0;
	var uLocal_8674 = 0;
	var uLocal_8675 = 30;
	var uLocal_8676 = 0;
	var uLocal_8677 = 0;
	var uLocal_8678 = 0;
	var uLocal_8679 = 0;
	var uLocal_8680 = 0;
	var uLocal_8681 = 3;
	var uLocal_8682 = 0;
	var uLocal_8683 = 0;
	var uLocal_8684 = 0;
	var uLocal_8685 = 0;
	var uLocal_8686 = -1;
	var uLocal_8687 = 0;
	var uLocal_8688 = 5;
	var uLocal_8689 = 0;
	var uLocal_8690 = 0;
	var uLocal_8691 = 0;
	var uLocal_8692 = 0;
	var uLocal_8693 = 0;
	var uLocal_8694 = 0;
	var uLocal_8695 = 0;
	var uLocal_8696 = 0;
	var uLocal_8697 = 0;
	var uLocal_8698 = 0;
	var uLocal_8699 = 10;
	var uLocal_8700 = 3;
	var uLocal_8701 = 500;
	var uLocal_8702 = 10000;
	var uLocal_8703 = 0;
	var uLocal_8704 = 3;
	var uLocal_8705 = 500;
	var uLocal_8706 = 10000;
	var uLocal_8707 = 0;
	var uLocal_8708 = 3;
	var uLocal_8709 = 500;
	var uLocal_8710 = 10000;
	var uLocal_8711 = 0;
	var uLocal_8712 = 3;
	var uLocal_8713 = 500;
	var uLocal_8714 = 10000;
	var uLocal_8715 = 0;
	var uLocal_8716 = 3;
	var uLocal_8717 = 500;
	var uLocal_8718 = 10000;
	var uLocal_8719 = 0;
	var uLocal_8720 = 3;
	var uLocal_8721 = 500;
	var uLocal_8722 = 10000;
	var uLocal_8723 = 0;
	var uLocal_8724 = 3;
	var uLocal_8725 = 500;
	var uLocal_8726 = 10000;
	var uLocal_8727 = 0;
	var uLocal_8728 = 3;
	var uLocal_8729 = 500;
	var uLocal_8730 = 10000;
	var uLocal_8731 = 0;
	var uLocal_8732 = 3;
	var uLocal_8733 = 500;
	var uLocal_8734 = 10000;
	var uLocal_8735 = 0;
	var uLocal_8736 = 3;
	var uLocal_8737 = 500;
	var uLocal_8738 = 10000;
	var uLocal_8739 = 0;
	var uLocal_8740 = 0;
	var uLocal_8741 = 0;
	var uLocal_8742 = 0;
	var uLocal_8743 = 0;
	var uLocal_8744 = 0;
	var uLocal_8745 = 0;
	var uLocal_8746 = 3;
	var uLocal_8747 = 0;
	var uLocal_8748 = 0;
	var uLocal_8749 = 0;
	var uLocal_8750 = 0;
	var uLocal_8751 = -1;
	var uLocal_8752 = 0;
	var uLocal_8753 = 5;
	var uLocal_8754 = 0;
	var uLocal_8755 = 0;
	var uLocal_8756 = 0;
	var uLocal_8757 = 0;
	var uLocal_8758 = 0;
	var uLocal_8759 = 0;
	var uLocal_8760 = 0;
	var uLocal_8761 = 0;
	var uLocal_8762 = 0;
	var uLocal_8763 = 0;
	var uLocal_8764 = 10;
	var uLocal_8765 = 3;
	var uLocal_8766 = 500;
	var uLocal_8767 = 10000;
	var uLocal_8768 = 0;
	var uLocal_8769 = 3;
	var uLocal_8770 = 500;
	var uLocal_8771 = 10000;
	var uLocal_8772 = 0;
	var uLocal_8773 = 3;
	var uLocal_8774 = 500;
	var uLocal_8775 = 10000;
	var uLocal_8776 = 0;
	var uLocal_8777 = 3;
	var uLocal_8778 = 500;
	var uLocal_8779 = 10000;
	var uLocal_8780 = 0;
	var uLocal_8781 = 3;
	var uLocal_8782 = 500;
	var uLocal_8783 = 10000;
	var uLocal_8784 = 0;
	var uLocal_8785 = 3;
	var uLocal_8786 = 500;
	var uLocal_8787 = 10000;
	var uLocal_8788 = 0;
	var uLocal_8789 = 3;
	var uLocal_8790 = 500;
	var uLocal_8791 = 10000;
	var uLocal_8792 = 0;
	var uLocal_8793 = 3;
	var uLocal_8794 = 500;
	var uLocal_8795 = 10000;
	var uLocal_8796 = 0;
	var uLocal_8797 = 3;
	var uLocal_8798 = 500;
	var uLocal_8799 = 10000;
	var uLocal_8800 = 0;
	var uLocal_8801 = 3;
	var uLocal_8802 = 500;
	var uLocal_8803 = 10000;
	var uLocal_8804 = 0;
	var uLocal_8805 = 0;
	var uLocal_8806 = 0;
	var uLocal_8807 = 0;
	var uLocal_8808 = 0;
	var uLocal_8809 = 0;
	var uLocal_8810 = 0;
	var uLocal_8811 = 3;
	var uLocal_8812 = 0;
	var uLocal_8813 = 0;
	var uLocal_8814 = 0;
	var uLocal_8815 = 0;
	var uLocal_8816 = -1;
	var uLocal_8817 = 0;
	var uLocal_8818 = 5;
	var uLocal_8819 = 0;
	var uLocal_8820 = 0;
	var uLocal_8821 = 0;
	var uLocal_8822 = 0;
	var uLocal_8823 = 0;
	var uLocal_8824 = 0;
	var uLocal_8825 = 0;
	var uLocal_8826 = 0;
	var uLocal_8827 = 0;
	var uLocal_8828 = 0;
	var uLocal_8829 = 10;
	var uLocal_8830 = 3;
	var uLocal_8831 = 500;
	var uLocal_8832 = 10000;
	var uLocal_8833 = 0;
	var uLocal_8834 = 3;
	var uLocal_8835 = 500;
	var uLocal_8836 = 10000;
	var uLocal_8837 = 0;
	var uLocal_8838 = 3;
	var uLocal_8839 = 500;
	var uLocal_8840 = 10000;
	var uLocal_8841 = 0;
	var uLocal_8842 = 3;
	var uLocal_8843 = 500;
	var uLocal_8844 = 10000;
	var uLocal_8845 = 0;
	var uLocal_8846 = 3;
	var uLocal_8847 = 500;
	var uLocal_8848 = 10000;
	var uLocal_8849 = 0;
	var uLocal_8850 = 3;
	var uLocal_8851 = 500;
	var uLocal_8852 = 10000;
	var uLocal_8853 = 0;
	var uLocal_8854 = 3;
	var uLocal_8855 = 500;
	var uLocal_8856 = 10000;
	var uLocal_8857 = 0;
	var uLocal_8858 = 3;
	var uLocal_8859 = 500;
	var uLocal_8860 = 10000;
	var uLocal_8861 = 0;
	var uLocal_8862 = 3;
	var uLocal_8863 = 500;
	var uLocal_8864 = 10000;
	var uLocal_8865 = 0;
	var uLocal_8866 = 3;
	var uLocal_8867 = 500;
	var uLocal_8868 = 10000;
	var uLocal_8869 = 0;
	var uLocal_8870 = 0;
	var uLocal_8871 = 0;
	var uLocal_8872 = 0;
	var uLocal_8873 = 0;
	var uLocal_8874 = 0;
	var uLocal_8875 = 0;
	var uLocal_8876 = 3;
	var uLocal_8877 = 0;
	var uLocal_8878 = 0;
	var uLocal_8879 = 0;
	var uLocal_8880 = 0;
	var uLocal_8881 = -1;
	var uLocal_8882 = 0;
	var uLocal_8883 = 5;
	var uLocal_8884 = 0;
	var uLocal_8885 = 0;
	var uLocal_8886 = 0;
	var uLocal_8887 = 0;
	var uLocal_8888 = 0;
	var uLocal_8889 = 0;
	var uLocal_8890 = 0;
	var uLocal_8891 = 0;
	var uLocal_8892 = 0;
	var uLocal_8893 = 0;
	var uLocal_8894 = 10;
	var uLocal_8895 = 3;
	var uLocal_8896 = 500;
	var uLocal_8897 = 10000;
	var uLocal_8898 = 0;
	var uLocal_8899 = 3;
	var uLocal_8900 = 500;
	var uLocal_8901 = 10000;
	var uLocal_8902 = 0;
	var uLocal_8903 = 3;
	var uLocal_8904 = 500;
	var uLocal_8905 = 10000;
	var uLocal_8906 = 0;
	var uLocal_8907 = 3;
	var uLocal_8908 = 500;
	var uLocal_8909 = 10000;
	var uLocal_8910 = 0;
	var uLocal_8911 = 3;
	var uLocal_8912 = 500;
	var uLocal_8913 = 10000;
	var uLocal_8914 = 0;
	var uLocal_8915 = 3;
	var uLocal_8916 = 500;
	var uLocal_8917 = 10000;
	var uLocal_8918 = 0;
	var uLocal_8919 = 3;
	var uLocal_8920 = 500;
	var uLocal_8921 = 10000;
	var uLocal_8922 = 0;
	var uLocal_8923 = 3;
	var uLocal_8924 = 500;
	var uLocal_8925 = 10000;
	var uLocal_8926 = 0;
	var uLocal_8927 = 3;
	var uLocal_8928 = 500;
	var uLocal_8929 = 10000;
	var uLocal_8930 = 0;
	var uLocal_8931 = 3;
	var uLocal_8932 = 500;
	var uLocal_8933 = 10000;
	var uLocal_8934 = 0;
	var uLocal_8935 = 0;
	var uLocal_8936 = 0;
	var uLocal_8937 = 0;
	var uLocal_8938 = 0;
	var uLocal_8939 = 0;
	var uLocal_8940 = 0;
	var uLocal_8941 = 3;
	var uLocal_8942 = 0;
	var uLocal_8943 = 0;
	var uLocal_8944 = 0;
	var uLocal_8945 = 0;
	var uLocal_8946 = -1;
	var uLocal_8947 = 0;
	var uLocal_8948 = 5;
	var uLocal_8949 = 0;
	var uLocal_8950 = 0;
	var uLocal_8951 = 0;
	var uLocal_8952 = 0;
	var uLocal_8953 = 0;
	var uLocal_8954 = 0;
	var uLocal_8955 = 0;
	var uLocal_8956 = 0;
	var uLocal_8957 = 0;
	var uLocal_8958 = 0;
	var uLocal_8959 = 10;
	var uLocal_8960 = 3;
	var uLocal_8961 = 500;
	var uLocal_8962 = 10000;
	var uLocal_8963 = 0;
	var uLocal_8964 = 3;
	var uLocal_8965 = 500;
	var uLocal_8966 = 10000;
	var uLocal_8967 = 0;
	var uLocal_8968 = 3;
	var uLocal_8969 = 500;
	var uLocal_8970 = 10000;
	var uLocal_8971 = 0;
	var uLocal_8972 = 3;
	var uLocal_8973 = 500;
	var uLocal_8974 = 10000;
	var uLocal_8975 = 0;
	var uLocal_8976 = 3;
	var uLocal_8977 = 500;
	var uLocal_8978 = 10000;
	var uLocal_8979 = 0;
	var uLocal_8980 = 3;
	var uLocal_8981 = 500;
	var uLocal_8982 = 10000;
	var uLocal_8983 = 0;
	var uLocal_8984 = 3;
	var uLocal_8985 = 500;
	var uLocal_8986 = 10000;
	var uLocal_8987 = 0;
	var uLocal_8988 = 3;
	var uLocal_8989 = 500;
	var uLocal_8990 = 10000;
	var uLocal_8991 = 0;
	var uLocal_8992 = 3;
	var uLocal_8993 = 500;
	var uLocal_8994 = 10000;
	var uLocal_8995 = 0;
	var uLocal_8996 = 3;
	var uLocal_8997 = 500;
	var uLocal_8998 = 10000;
	var uLocal_8999 = 0;
	var uLocal_9000 = 0;
	var uLocal_9001 = 0;
	var uLocal_9002 = 0;
	var uLocal_9003 = 0;
	var uLocal_9004 = 0;
	var uLocal_9005 = 0;
	var uLocal_9006 = 3;
	var uLocal_9007 = 0;
	var uLocal_9008 = 0;
	var uLocal_9009 = 0;
	var uLocal_9010 = 0;
	var uLocal_9011 = -1;
	var uLocal_9012 = 0;
	var uLocal_9013 = 5;
	var uLocal_9014 = 0;
	var uLocal_9015 = 0;
	var uLocal_9016 = 0;
	var uLocal_9017 = 0;
	var uLocal_9018 = 0;
	var uLocal_9019 = 0;
	var uLocal_9020 = 0;
	var uLocal_9021 = 0;
	var uLocal_9022 = 0;
	var uLocal_9023 = 0;
	var uLocal_9024 = 10;
	var uLocal_9025 = 3;
	var uLocal_9026 = 500;
	var uLocal_9027 = 10000;
	var uLocal_9028 = 0;
	var uLocal_9029 = 3;
	var uLocal_9030 = 500;
	var uLocal_9031 = 10000;
	var uLocal_9032 = 0;
	var uLocal_9033 = 3;
	var uLocal_9034 = 500;
	var uLocal_9035 = 10000;
	var uLocal_9036 = 0;
	var uLocal_9037 = 3;
	var uLocal_9038 = 500;
	var uLocal_9039 = 10000;
	var uLocal_9040 = 0;
	var uLocal_9041 = 3;
	var uLocal_9042 = 500;
	var uLocal_9043 = 10000;
	var uLocal_9044 = 0;
	var uLocal_9045 = 3;
	var uLocal_9046 = 500;
	var uLocal_9047 = 10000;
	var uLocal_9048 = 0;
	var uLocal_9049 = 3;
	var uLocal_9050 = 500;
	var uLocal_9051 = 10000;
	var uLocal_9052 = 0;
	var uLocal_9053 = 3;
	var uLocal_9054 = 500;
	var uLocal_9055 = 10000;
	var uLocal_9056 = 0;
	var uLocal_9057 = 3;
	var uLocal_9058 = 500;
	var uLocal_9059 = 10000;
	var uLocal_9060 = 0;
	var uLocal_9061 = 3;
	var uLocal_9062 = 500;
	var uLocal_9063 = 10000;
	var uLocal_9064 = 0;
	var uLocal_9065 = 0;
	var uLocal_9066 = 0;
	var uLocal_9067 = 0;
	var uLocal_9068 = 0;
	var uLocal_9069 = 0;
	var uLocal_9070 = 0;
	var uLocal_9071 = 3;
	var uLocal_9072 = 0;
	var uLocal_9073 = 0;
	var uLocal_9074 = 0;
	var uLocal_9075 = 0;
	var uLocal_9076 = -1;
	var uLocal_9077 = 0;
	var uLocal_9078 = 5;
	var uLocal_9079 = 0;
	var uLocal_9080 = 0;
	var uLocal_9081 = 0;
	var uLocal_9082 = 0;
	var uLocal_9083 = 0;
	var uLocal_9084 = 0;
	var uLocal_9085 = 0;
	var uLocal_9086 = 0;
	var uLocal_9087 = 0;
	var uLocal_9088 = 0;
	var uLocal_9089 = 10;
	var uLocal_9090 = 3;
	var uLocal_9091 = 500;
	var uLocal_9092 = 10000;
	var uLocal_9093 = 0;
	var uLocal_9094 = 3;
	var uLocal_9095 = 500;
	var uLocal_9096 = 10000;
	var uLocal_9097 = 0;
	var uLocal_9098 = 3;
	var uLocal_9099 = 500;
	var uLocal_9100 = 10000;
	var uLocal_9101 = 0;
	var uLocal_9102 = 3;
	var uLocal_9103 = 500;
	var uLocal_9104 = 10000;
	var uLocal_9105 = 0;
	var uLocal_9106 = 3;
	var uLocal_9107 = 500;
	var uLocal_9108 = 10000;
	var uLocal_9109 = 0;
	var uLocal_9110 = 3;
	var uLocal_9111 = 500;
	var uLocal_9112 = 10000;
	var uLocal_9113 = 0;
	var uLocal_9114 = 3;
	var uLocal_9115 = 500;
	var uLocal_9116 = 10000;
	var uLocal_9117 = 0;
	var uLocal_9118 = 3;
	var uLocal_9119 = 500;
	var uLocal_9120 = 10000;
	var uLocal_9121 = 0;
	var uLocal_9122 = 3;
	var uLocal_9123 = 500;
	var uLocal_9124 = 10000;
	var uLocal_9125 = 0;
	var uLocal_9126 = 3;
	var uLocal_9127 = 500;
	var uLocal_9128 = 10000;
	var uLocal_9129 = 0;
	var uLocal_9130 = 0;
	var uLocal_9131 = 0;
	var uLocal_9132 = 0;
	var uLocal_9133 = 0;
	var uLocal_9134 = 0;
	var uLocal_9135 = 0;
	var uLocal_9136 = 3;
	var uLocal_9137 = 0;
	var uLocal_9138 = 0;
	var uLocal_9139 = 0;
	var uLocal_9140 = 0;
	var uLocal_9141 = -1;
	var uLocal_9142 = 0;
	var uLocal_9143 = 5;
	var uLocal_9144 = 0;
	var uLocal_9145 = 0;
	var uLocal_9146 = 0;
	var uLocal_9147 = 0;
	var uLocal_9148 = 0;
	var uLocal_9149 = 0;
	var uLocal_9150 = 0;
	var uLocal_9151 = 0;
	var uLocal_9152 = 0;
	var uLocal_9153 = 0;
	var uLocal_9154 = 10;
	var uLocal_9155 = 3;
	var uLocal_9156 = 500;
	var uLocal_9157 = 10000;
	var uLocal_9158 = 0;
	var uLocal_9159 = 3;
	var uLocal_9160 = 500;
	var uLocal_9161 = 10000;
	var uLocal_9162 = 0;
	var uLocal_9163 = 3;
	var uLocal_9164 = 500;
	var uLocal_9165 = 10000;
	var uLocal_9166 = 0;
	var uLocal_9167 = 3;
	var uLocal_9168 = 500;
	var uLocal_9169 = 10000;
	var uLocal_9170 = 0;
	var uLocal_9171 = 3;
	var uLocal_9172 = 500;
	var uLocal_9173 = 10000;
	var uLocal_9174 = 0;
	var uLocal_9175 = 3;
	var uLocal_9176 = 500;
	var uLocal_9177 = 10000;
	var uLocal_9178 = 0;
	var uLocal_9179 = 3;
	var uLocal_9180 = 500;
	var uLocal_9181 = 10000;
	var uLocal_9182 = 0;
	var uLocal_9183 = 3;
	var uLocal_9184 = 500;
	var uLocal_9185 = 10000;
	var uLocal_9186 = 0;
	var uLocal_9187 = 3;
	var uLocal_9188 = 500;
	var uLocal_9189 = 10000;
	var uLocal_9190 = 0;
	var uLocal_9191 = 3;
	var uLocal_9192 = 500;
	var uLocal_9193 = 10000;
	var uLocal_9194 = 0;
	var uLocal_9195 = 0;
	var uLocal_9196 = 0;
	var uLocal_9197 = 0;
	var uLocal_9198 = 0;
	var uLocal_9199 = 0;
	var uLocal_9200 = 0;
	var uLocal_9201 = 3;
	var uLocal_9202 = 0;
	var uLocal_9203 = 0;
	var uLocal_9204 = 0;
	var uLocal_9205 = 0;
	var uLocal_9206 = -1;
	var uLocal_9207 = 0;
	var uLocal_9208 = 5;
	var uLocal_9209 = 0;
	var uLocal_9210 = 0;
	var uLocal_9211 = 0;
	var uLocal_9212 = 0;
	var uLocal_9213 = 0;
	var uLocal_9214 = 0;
	var uLocal_9215 = 0;
	var uLocal_9216 = 0;
	var uLocal_9217 = 0;
	var uLocal_9218 = 0;
	var uLocal_9219 = 10;
	var uLocal_9220 = 3;
	var uLocal_9221 = 500;
	var uLocal_9222 = 10000;
	var uLocal_9223 = 0;
	var uLocal_9224 = 3;
	var uLocal_9225 = 500;
	var uLocal_9226 = 10000;
	var uLocal_9227 = 0;
	var uLocal_9228 = 3;
	var uLocal_9229 = 500;
	var uLocal_9230 = 10000;
	var uLocal_9231 = 0;
	var uLocal_9232 = 3;
	var uLocal_9233 = 500;
	var uLocal_9234 = 10000;
	var uLocal_9235 = 0;
	var uLocal_9236 = 3;
	var uLocal_9237 = 500;
	var uLocal_9238 = 10000;
	var uLocal_9239 = 0;
	var uLocal_9240 = 3;
	var uLocal_9241 = 500;
	var uLocal_9242 = 10000;
	var uLocal_9243 = 0;
	var uLocal_9244 = 3;
	var uLocal_9245 = 500;
	var uLocal_9246 = 10000;
	var uLocal_9247 = 0;
	var uLocal_9248 = 3;
	var uLocal_9249 = 500;
	var uLocal_9250 = 10000;
	var uLocal_9251 = 0;
	var uLocal_9252 = 3;
	var uLocal_9253 = 500;
	var uLocal_9254 = 10000;
	var uLocal_9255 = 0;
	var uLocal_9256 = 3;
	var uLocal_9257 = 500;
	var uLocal_9258 = 10000;
	var uLocal_9259 = 0;
	var uLocal_9260 = 0;
	var uLocal_9261 = 0;
	var uLocal_9262 = 0;
	var uLocal_9263 = 0;
	var uLocal_9264 = 0;
	var uLocal_9265 = 0;
	var uLocal_9266 = 3;
	var uLocal_9267 = 0;
	var uLocal_9268 = 0;
	var uLocal_9269 = 0;
	var uLocal_9270 = 0;
	var uLocal_9271 = -1;
	var uLocal_9272 = 0;
	var uLocal_9273 = 5;
	var uLocal_9274 = 0;
	var uLocal_9275 = 0;
	var uLocal_9276 = 0;
	var uLocal_9277 = 0;
	var uLocal_9278 = 0;
	var uLocal_9279 = 0;
	var uLocal_9280 = 0;
	var uLocal_9281 = 0;
	var uLocal_9282 = 0;
	var uLocal_9283 = 0;
	var uLocal_9284 = 10;
	var uLocal_9285 = 3;
	var uLocal_9286 = 500;
	var uLocal_9287 = 10000;
	var uLocal_9288 = 0;
	var uLocal_9289 = 3;
	var uLocal_9290 = 500;
	var uLocal_9291 = 10000;
	var uLocal_9292 = 0;
	var uLocal_9293 = 3;
	var uLocal_9294 = 500;
	var uLocal_9295 = 10000;
	var uLocal_9296 = 0;
	var uLocal_9297 = 3;
	var uLocal_9298 = 500;
	var uLocal_9299 = 10000;
	var uLocal_9300 = 0;
	var uLocal_9301 = 3;
	var uLocal_9302 = 500;
	var uLocal_9303 = 10000;
	var uLocal_9304 = 0;
	var uLocal_9305 = 3;
	var uLocal_9306 = 500;
	var uLocal_9307 = 10000;
	var uLocal_9308 = 0;
	var uLocal_9309 = 3;
	var uLocal_9310 = 500;
	var uLocal_9311 = 10000;
	var uLocal_9312 = 0;
	var uLocal_9313 = 3;
	var uLocal_9314 = 500;
	var uLocal_9315 = 10000;
	var uLocal_9316 = 0;
	var uLocal_9317 = 3;
	var uLocal_9318 = 500;
	var uLocal_9319 = 10000;
	var uLocal_9320 = 0;
	var uLocal_9321 = 3;
	var uLocal_9322 = 500;
	var uLocal_9323 = 10000;
	var uLocal_9324 = 0;
	var uLocal_9325 = 0;
	var uLocal_9326 = 0;
	var uLocal_9327 = 0;
	var uLocal_9328 = 0;
	var uLocal_9329 = 0;
	var uLocal_9330 = 0;
	var uLocal_9331 = 3;
	var uLocal_9332 = 0;
	var uLocal_9333 = 0;
	var uLocal_9334 = 0;
	var uLocal_9335 = 0;
	var uLocal_9336 = -1;
	var uLocal_9337 = 0;
	var uLocal_9338 = 5;
	var uLocal_9339 = 0;
	var uLocal_9340 = 0;
	var uLocal_9341 = 0;
	var uLocal_9342 = 0;
	var uLocal_9343 = 0;
	var uLocal_9344 = 0;
	var uLocal_9345 = 0;
	var uLocal_9346 = 0;
	var uLocal_9347 = 0;
	var uLocal_9348 = 0;
	var uLocal_9349 = 10;
	var uLocal_9350 = 3;
	var uLocal_9351 = 500;
	var uLocal_9352 = 10000;
	var uLocal_9353 = 0;
	var uLocal_9354 = 3;
	var uLocal_9355 = 500;
	var uLocal_9356 = 10000;
	var uLocal_9357 = 0;
	var uLocal_9358 = 3;
	var uLocal_9359 = 500;
	var uLocal_9360 = 10000;
	var uLocal_9361 = 0;
	var uLocal_9362 = 3;
	var uLocal_9363 = 500;
	var uLocal_9364 = 10000;
	var uLocal_9365 = 0;
	var uLocal_9366 = 3;
	var uLocal_9367 = 500;
	var uLocal_9368 = 10000;
	var uLocal_9369 = 0;
	var uLocal_9370 = 3;
	var uLocal_9371 = 500;
	var uLocal_9372 = 10000;
	var uLocal_9373 = 0;
	var uLocal_9374 = 3;
	var uLocal_9375 = 500;
	var uLocal_9376 = 10000;
	var uLocal_9377 = 0;
	var uLocal_9378 = 3;
	var uLocal_9379 = 500;
	var uLocal_9380 = 10000;
	var uLocal_9381 = 0;
	var uLocal_9382 = 3;
	var uLocal_9383 = 500;
	var uLocal_9384 = 10000;
	var uLocal_9385 = 0;
	var uLocal_9386 = 3;
	var uLocal_9387 = 500;
	var uLocal_9388 = 10000;
	var uLocal_9389 = 0;
	var uLocal_9390 = 0;
	var uLocal_9391 = 0;
	var uLocal_9392 = 0;
	var uLocal_9393 = 0;
	var uLocal_9394 = 0;
	var uLocal_9395 = 0;
	var uLocal_9396 = 3;
	var uLocal_9397 = 0;
	var uLocal_9398 = 0;
	var uLocal_9399 = 0;
	var uLocal_9400 = 0;
	var uLocal_9401 = -1;
	var uLocal_9402 = 0;
	var uLocal_9403 = 5;
	var uLocal_9404 = 0;
	var uLocal_9405 = 0;
	var uLocal_9406 = 0;
	var uLocal_9407 = 0;
	var uLocal_9408 = 0;
	var uLocal_9409 = 0;
	var uLocal_9410 = 0;
	var uLocal_9411 = 0;
	var uLocal_9412 = 0;
	var uLocal_9413 = 0;
	var uLocal_9414 = 10;
	var uLocal_9415 = 3;
	var uLocal_9416 = 500;
	var uLocal_9417 = 10000;
	var uLocal_9418 = 0;
	var uLocal_9419 = 3;
	var uLocal_9420 = 500;
	var uLocal_9421 = 10000;
	var uLocal_9422 = 0;
	var uLocal_9423 = 3;
	var uLocal_9424 = 500;
	var uLocal_9425 = 10000;
	var uLocal_9426 = 0;
	var uLocal_9427 = 3;
	var uLocal_9428 = 500;
	var uLocal_9429 = 10000;
	var uLocal_9430 = 0;
	var uLocal_9431 = 3;
	var uLocal_9432 = 500;
	var uLocal_9433 = 10000;
	var uLocal_9434 = 0;
	var uLocal_9435 = 3;
	var uLocal_9436 = 500;
	var uLocal_9437 = 10000;
	var uLocal_9438 = 0;
	var uLocal_9439 = 3;
	var uLocal_9440 = 500;
	var uLocal_9441 = 10000;
	var uLocal_9442 = 0;
	var uLocal_9443 = 3;
	var uLocal_9444 = 500;
	var uLocal_9445 = 10000;
	var uLocal_9446 = 0;
	var uLocal_9447 = 3;
	var uLocal_9448 = 500;
	var uLocal_9449 = 10000;
	var uLocal_9450 = 0;
	var uLocal_9451 = 3;
	var uLocal_9452 = 500;
	var uLocal_9453 = 10000;
	var uLocal_9454 = 0;
	var uLocal_9455 = 0;
	var uLocal_9456 = 0;
	var uLocal_9457 = 0;
	var uLocal_9458 = 0;
	var uLocal_9459 = 0;
	var uLocal_9460 = 0;
	var uLocal_9461 = 3;
	var uLocal_9462 = 0;
	var uLocal_9463 = 0;
	var uLocal_9464 = 0;
	var uLocal_9465 = 0;
	var uLocal_9466 = -1;
	var uLocal_9467 = 0;
	var uLocal_9468 = 5;
	var uLocal_9469 = 0;
	var uLocal_9470 = 0;
	var uLocal_9471 = 0;
	var uLocal_9472 = 0;
	var uLocal_9473 = 0;
	var uLocal_9474 = 0;
	var uLocal_9475 = 0;
	var uLocal_9476 = 0;
	var uLocal_9477 = 0;
	var uLocal_9478 = 0;
	var uLocal_9479 = 10;
	var uLocal_9480 = 3;
	var uLocal_9481 = 500;
	var uLocal_9482 = 10000;
	var uLocal_9483 = 0;
	var uLocal_9484 = 3;
	var uLocal_9485 = 500;
	var uLocal_9486 = 10000;
	var uLocal_9487 = 0;
	var uLocal_9488 = 3;
	var uLocal_9489 = 500;
	var uLocal_9490 = 10000;
	var uLocal_9491 = 0;
	var uLocal_9492 = 3;
	var uLocal_9493 = 500;
	var uLocal_9494 = 10000;
	var uLocal_9495 = 0;
	var uLocal_9496 = 3;
	var uLocal_9497 = 500;
	var uLocal_9498 = 10000;
	var uLocal_9499 = 0;
	var uLocal_9500 = 3;
	var uLocal_9501 = 500;
	var uLocal_9502 = 10000;
	var uLocal_9503 = 0;
	var uLocal_9504 = 3;
	var uLocal_9505 = 500;
	var uLocal_9506 = 10000;
	var uLocal_9507 = 0;
	var uLocal_9508 = 3;
	var uLocal_9509 = 500;
	var uLocal_9510 = 10000;
	var uLocal_9511 = 0;
	var uLocal_9512 = 3;
	var uLocal_9513 = 500;
	var uLocal_9514 = 10000;
	var uLocal_9515 = 0;
	var uLocal_9516 = 3;
	var uLocal_9517 = 500;
	var uLocal_9518 = 10000;
	var uLocal_9519 = 0;
	var uLocal_9520 = 0;
	var uLocal_9521 = 0;
	var uLocal_9522 = 0;
	var uLocal_9523 = 0;
	var uLocal_9524 = 0;
	var uLocal_9525 = 0;
	var uLocal_9526 = 3;
	var uLocal_9527 = 0;
	var uLocal_9528 = 0;
	var uLocal_9529 = 0;
	var uLocal_9530 = 0;
	var uLocal_9531 = -1;
	var uLocal_9532 = 0;
	var uLocal_9533 = 5;
	var uLocal_9534 = 0;
	var uLocal_9535 = 0;
	var uLocal_9536 = 0;
	var uLocal_9537 = 0;
	var uLocal_9538 = 0;
	var uLocal_9539 = 0;
	var uLocal_9540 = 0;
	var uLocal_9541 = 0;
	var uLocal_9542 = 0;
	var uLocal_9543 = 0;
	var uLocal_9544 = 10;
	var uLocal_9545 = 3;
	var uLocal_9546 = 500;
	var uLocal_9547 = 10000;
	var uLocal_9548 = 0;
	var uLocal_9549 = 3;
	var uLocal_9550 = 500;
	var uLocal_9551 = 10000;
	var uLocal_9552 = 0;
	var uLocal_9553 = 3;
	var uLocal_9554 = 500;
	var uLocal_9555 = 10000;
	var uLocal_9556 = 0;
	var uLocal_9557 = 3;
	var uLocal_9558 = 500;
	var uLocal_9559 = 10000;
	var uLocal_9560 = 0;
	var uLocal_9561 = 3;
	var uLocal_9562 = 500;
	var uLocal_9563 = 10000;
	var uLocal_9564 = 0;
	var uLocal_9565 = 3;
	var uLocal_9566 = 500;
	var uLocal_9567 = 10000;
	var uLocal_9568 = 0;
	var uLocal_9569 = 3;
	var uLocal_9570 = 500;
	var uLocal_9571 = 10000;
	var uLocal_9572 = 0;
	var uLocal_9573 = 3;
	var uLocal_9574 = 500;
	var uLocal_9575 = 10000;
	var uLocal_9576 = 0;
	var uLocal_9577 = 3;
	var uLocal_9578 = 500;
	var uLocal_9579 = 10000;
	var uLocal_9580 = 0;
	var uLocal_9581 = 3;
	var uLocal_9582 = 500;
	var uLocal_9583 = 10000;
	var uLocal_9584 = 0;
	var uLocal_9585 = 0;
	var uLocal_9586 = 0;
	var uLocal_9587 = 0;
	var uLocal_9588 = 0;
	var uLocal_9589 = 0;
	var uLocal_9590 = 0;
	var uLocal_9591 = 3;
	var uLocal_9592 = 0;
	var uLocal_9593 = 0;
	var uLocal_9594 = 0;
	var uLocal_9595 = 0;
	var uLocal_9596 = -1;
	var uLocal_9597 = 0;
	var uLocal_9598 = 5;
	var uLocal_9599 = 0;
	var uLocal_9600 = 0;
	var uLocal_9601 = 0;
	var uLocal_9602 = 0;
	var uLocal_9603 = 0;
	var uLocal_9604 = 0;
	var uLocal_9605 = 0;
	var uLocal_9606 = 0;
	var uLocal_9607 = 0;
	var uLocal_9608 = 0;
	var uLocal_9609 = 10;
	var uLocal_9610 = 3;
	var uLocal_9611 = 500;
	var uLocal_9612 = 10000;
	var uLocal_9613 = 0;
	var uLocal_9614 = 3;
	var uLocal_9615 = 500;
	var uLocal_9616 = 10000;
	var uLocal_9617 = 0;
	var uLocal_9618 = 3;
	var uLocal_9619 = 500;
	var uLocal_9620 = 10000;
	var uLocal_9621 = 0;
	var uLocal_9622 = 3;
	var uLocal_9623 = 500;
	var uLocal_9624 = 10000;
	var uLocal_9625 = 0;
	var uLocal_9626 = 3;
	var uLocal_9627 = 500;
	var uLocal_9628 = 10000;
	var uLocal_9629 = 0;
	var uLocal_9630 = 3;
	var uLocal_9631 = 500;
	var uLocal_9632 = 10000;
	var uLocal_9633 = 0;
	var uLocal_9634 = 3;
	var uLocal_9635 = 500;
	var uLocal_9636 = 10000;
	var uLocal_9637 = 0;
	var uLocal_9638 = 3;
	var uLocal_9639 = 500;
	var uLocal_9640 = 10000;
	var uLocal_9641 = 0;
	var uLocal_9642 = 3;
	var uLocal_9643 = 500;
	var uLocal_9644 = 10000;
	var uLocal_9645 = 0;
	var uLocal_9646 = 3;
	var uLocal_9647 = 500;
	var uLocal_9648 = 10000;
	var uLocal_9649 = 0;
	var uLocal_9650 = 0;
	var uLocal_9651 = 0;
	var uLocal_9652 = 0;
	var uLocal_9653 = 0;
	var uLocal_9654 = 0;
	var uLocal_9655 = 0;
	var uLocal_9656 = 3;
	var uLocal_9657 = 0;
	var uLocal_9658 = 0;
	var uLocal_9659 = 0;
	var uLocal_9660 = 0;
	var uLocal_9661 = -1;
	var uLocal_9662 = 0;
	var uLocal_9663 = 5;
	var uLocal_9664 = 0;
	var uLocal_9665 = 0;
	var uLocal_9666 = 0;
	var uLocal_9667 = 0;
	var uLocal_9668 = 0;
	var uLocal_9669 = 0;
	var uLocal_9670 = 0;
	var uLocal_9671 = 0;
	var uLocal_9672 = 0;
	var uLocal_9673 = 0;
	var uLocal_9674 = 10;
	var uLocal_9675 = 3;
	var uLocal_9676 = 500;
	var uLocal_9677 = 10000;
	var uLocal_9678 = 0;
	var uLocal_9679 = 3;
	var uLocal_9680 = 500;
	var uLocal_9681 = 10000;
	var uLocal_9682 = 0;
	var uLocal_9683 = 3;
	var uLocal_9684 = 500;
	var uLocal_9685 = 10000;
	var uLocal_9686 = 0;
	var uLocal_9687 = 3;
	var uLocal_9688 = 500;
	var uLocal_9689 = 10000;
	var uLocal_9690 = 0;
	var uLocal_9691 = 3;
	var uLocal_9692 = 500;
	var uLocal_9693 = 10000;
	var uLocal_9694 = 0;
	var uLocal_9695 = 3;
	var uLocal_9696 = 500;
	var uLocal_9697 = 10000;
	var uLocal_9698 = 0;
	var uLocal_9699 = 3;
	var uLocal_9700 = 500;
	var uLocal_9701 = 10000;
	var uLocal_9702 = 0;
	var uLocal_9703 = 3;
	var uLocal_9704 = 500;
	var uLocal_9705 = 10000;
	var uLocal_9706 = 0;
	var uLocal_9707 = 3;
	var uLocal_9708 = 500;
	var uLocal_9709 = 10000;
	var uLocal_9710 = 0;
	var uLocal_9711 = 3;
	var uLocal_9712 = 500;
	var uLocal_9713 = 10000;
	var uLocal_9714 = 0;
	var uLocal_9715 = 0;
	var uLocal_9716 = 0;
	var uLocal_9717 = 0;
	var uLocal_9718 = 0;
	var uLocal_9719 = 0;
	var uLocal_9720 = 0;
	var uLocal_9721 = 3;
	var uLocal_9722 = 0;
	var uLocal_9723 = 0;
	var uLocal_9724 = 0;
	var uLocal_9725 = 0;
	var uLocal_9726 = -1;
	var uLocal_9727 = 0;
	var uLocal_9728 = 5;
	var uLocal_9729 = 0;
	var uLocal_9730 = 0;
	var uLocal_9731 = 0;
	var uLocal_9732 = 0;
	var uLocal_9733 = 0;
	var uLocal_9734 = 0;
	var uLocal_9735 = 0;
	var uLocal_9736 = 0;
	var uLocal_9737 = 0;
	var uLocal_9738 = 0;
	var uLocal_9739 = 10;
	var uLocal_9740 = 3;
	var uLocal_9741 = 500;
	var uLocal_9742 = 10000;
	var uLocal_9743 = 0;
	var uLocal_9744 = 3;
	var uLocal_9745 = 500;
	var uLocal_9746 = 10000;
	var uLocal_9747 = 0;
	var uLocal_9748 = 3;
	var uLocal_9749 = 500;
	var uLocal_9750 = 10000;
	var uLocal_9751 = 0;
	var uLocal_9752 = 3;
	var uLocal_9753 = 500;
	var uLocal_9754 = 10000;
	var uLocal_9755 = 0;
	var uLocal_9756 = 3;
	var uLocal_9757 = 500;
	var uLocal_9758 = 10000;
	var uLocal_9759 = 0;
	var uLocal_9760 = 3;
	var uLocal_9761 = 500;
	var uLocal_9762 = 10000;
	var uLocal_9763 = 0;
	var uLocal_9764 = 3;
	var uLocal_9765 = 500;
	var uLocal_9766 = 10000;
	var uLocal_9767 = 0;
	var uLocal_9768 = 3;
	var uLocal_9769 = 500;
	var uLocal_9770 = 10000;
	var uLocal_9771 = 0;
	var uLocal_9772 = 3;
	var uLocal_9773 = 500;
	var uLocal_9774 = 10000;
	var uLocal_9775 = 0;
	var uLocal_9776 = 3;
	var uLocal_9777 = 500;
	var uLocal_9778 = 10000;
	var uLocal_9779 = 0;
	var uLocal_9780 = 0;
	var uLocal_9781 = 0;
	var uLocal_9782 = 0;
	var uLocal_9783 = 0;
	var uLocal_9784 = 0;
	var uLocal_9785 = 0;
	var uLocal_9786 = 3;
	var uLocal_9787 = 0;
	var uLocal_9788 = 0;
	var uLocal_9789 = 0;
	var uLocal_9790 = 0;
	var uLocal_9791 = -1;
	var uLocal_9792 = 0;
	var uLocal_9793 = 5;
	var uLocal_9794 = 0;
	var uLocal_9795 = 0;
	var uLocal_9796 = 0;
	var uLocal_9797 = 0;
	var uLocal_9798 = 0;
	var uLocal_9799 = 0;
	var uLocal_9800 = 0;
	var uLocal_9801 = 0;
	var uLocal_9802 = 0;
	var uLocal_9803 = 0;
	var uLocal_9804 = 10;
	var uLocal_9805 = 3;
	var uLocal_9806 = 500;
	var uLocal_9807 = 10000;
	var uLocal_9808 = 0;
	var uLocal_9809 = 3;
	var uLocal_9810 = 500;
	var uLocal_9811 = 10000;
	var uLocal_9812 = 0;
	var uLocal_9813 = 3;
	var uLocal_9814 = 500;
	var uLocal_9815 = 10000;
	var uLocal_9816 = 0;
	var uLocal_9817 = 3;
	var uLocal_9818 = 500;
	var uLocal_9819 = 10000;
	var uLocal_9820 = 0;
	var uLocal_9821 = 3;
	var uLocal_9822 = 500;
	var uLocal_9823 = 10000;
	var uLocal_9824 = 0;
	var uLocal_9825 = 3;
	var uLocal_9826 = 500;
	var uLocal_9827 = 10000;
	var uLocal_9828 = 0;
	var uLocal_9829 = 3;
	var uLocal_9830 = 500;
	var uLocal_9831 = 10000;
	var uLocal_9832 = 0;
	var uLocal_9833 = 3;
	var uLocal_9834 = 500;
	var uLocal_9835 = 10000;
	var uLocal_9836 = 0;
	var uLocal_9837 = 3;
	var uLocal_9838 = 500;
	var uLocal_9839 = 10000;
	var uLocal_9840 = 0;
	var uLocal_9841 = 3;
	var uLocal_9842 = 500;
	var uLocal_9843 = 10000;
	var uLocal_9844 = 0;
	var uLocal_9845 = 0;
	var uLocal_9846 = 0;
	var uLocal_9847 = 0;
	var uLocal_9848 = 0;
	var uLocal_9849 = 0;
	var uLocal_9850 = 0;
	var uLocal_9851 = 3;
	var uLocal_9852 = 0;
	var uLocal_9853 = 0;
	var uLocal_9854 = 0;
	var uLocal_9855 = 0;
	var uLocal_9856 = -1;
	var uLocal_9857 = 0;
	var uLocal_9858 = 5;
	var uLocal_9859 = 0;
	var uLocal_9860 = 0;
	var uLocal_9861 = 0;
	var uLocal_9862 = 0;
	var uLocal_9863 = 0;
	var uLocal_9864 = 0;
	var uLocal_9865 = 0;
	var uLocal_9866 = 0;
	var uLocal_9867 = 0;
	var uLocal_9868 = 0;
	var uLocal_9869 = 10;
	var uLocal_9870 = 3;
	var uLocal_9871 = 500;
	var uLocal_9872 = 10000;
	var uLocal_9873 = 0;
	var uLocal_9874 = 3;
	var uLocal_9875 = 500;
	var uLocal_9876 = 10000;
	var uLocal_9877 = 0;
	var uLocal_9878 = 3;
	var uLocal_9879 = 500;
	var uLocal_9880 = 10000;
	var uLocal_9881 = 0;
	var uLocal_9882 = 3;
	var uLocal_9883 = 500;
	var uLocal_9884 = 10000;
	var uLocal_9885 = 0;
	var uLocal_9886 = 3;
	var uLocal_9887 = 500;
	var uLocal_9888 = 10000;
	var uLocal_9889 = 0;
	var uLocal_9890 = 3;
	var uLocal_9891 = 500;
	var uLocal_9892 = 10000;
	var uLocal_9893 = 0;
	var uLocal_9894 = 3;
	var uLocal_9895 = 500;
	var uLocal_9896 = 10000;
	var uLocal_9897 = 0;
	var uLocal_9898 = 3;
	var uLocal_9899 = 500;
	var uLocal_9900 = 10000;
	var uLocal_9901 = 0;
	var uLocal_9902 = 3;
	var uLocal_9903 = 500;
	var uLocal_9904 = 10000;
	var uLocal_9905 = 0;
	var uLocal_9906 = 3;
	var uLocal_9907 = 500;
	var uLocal_9908 = 10000;
	var uLocal_9909 = 0;
	var uLocal_9910 = 0;
	var uLocal_9911 = 0;
	var uLocal_9912 = 0;
	var uLocal_9913 = 0;
	var uLocal_9914 = 0;
	var uLocal_9915 = 0;
	var uLocal_9916 = 3;
	var uLocal_9917 = 0;
	var uLocal_9918 = 0;
	var uLocal_9919 = 0;
	var uLocal_9920 = 0;
	var uLocal_9921 = -1;
	var uLocal_9922 = 0;
	var uLocal_9923 = 5;
	var uLocal_9924 = 0;
	var uLocal_9925 = 0;
	var uLocal_9926 = 0;
	var uLocal_9927 = 0;
	var uLocal_9928 = 0;
	var uLocal_9929 = 0;
	var uLocal_9930 = 0;
	var uLocal_9931 = 0;
	var uLocal_9932 = 0;
	var uLocal_9933 = 0;
	var uLocal_9934 = 10;
	var uLocal_9935 = 3;
	var uLocal_9936 = 500;
	var uLocal_9937 = 10000;
	var uLocal_9938 = 0;
	var uLocal_9939 = 3;
	var uLocal_9940 = 500;
	var uLocal_9941 = 10000;
	var uLocal_9942 = 0;
	var uLocal_9943 = 3;
	var uLocal_9944 = 500;
	var uLocal_9945 = 10000;
	var uLocal_9946 = 0;
	var uLocal_9947 = 3;
	var uLocal_9948 = 500;
	var uLocal_9949 = 10000;
	var uLocal_9950 = 0;
	var uLocal_9951 = 3;
	var uLocal_9952 = 500;
	var uLocal_9953 = 10000;
	var uLocal_9954 = 0;
	var uLocal_9955 = 3;
	var uLocal_9956 = 500;
	var uLocal_9957 = 10000;
	var uLocal_9958 = 0;
	var uLocal_9959 = 3;
	var uLocal_9960 = 500;
	var uLocal_9961 = 10000;
	var uLocal_9962 = 0;
	var uLocal_9963 = 3;
	var uLocal_9964 = 500;
	var uLocal_9965 = 10000;
	var uLocal_9966 = 0;
	var uLocal_9967 = 3;
	var uLocal_9968 = 500;
	var uLocal_9969 = 10000;
	var uLocal_9970 = 0;
	var uLocal_9971 = 3;
	var uLocal_9972 = 500;
	var uLocal_9973 = 10000;
	var uLocal_9974 = 0;
	var uLocal_9975 = 0;
	var uLocal_9976 = 0;
	var uLocal_9977 = 0;
	var uLocal_9978 = 0;
	var uLocal_9979 = 0;
	var uLocal_9980 = 0;
	var uLocal_9981 = 3;
	var uLocal_9982 = 0;
	var uLocal_9983 = 0;
	var uLocal_9984 = 0;
	var uLocal_9985 = 0;
	var uLocal_9986 = -1;
	var uLocal_9987 = 0;
	var uLocal_9988 = 5;
	var uLocal_9989 = 0;
	var uLocal_9990 = 0;
	var uLocal_9991 = 0;
	var uLocal_9992 = 0;
	var uLocal_9993 = 0;
	var uLocal_9994 = 0;
	var uLocal_9995 = 0;
	var uLocal_9996 = 0;
	var uLocal_9997 = 0;
	var uLocal_9998 = 0;
	var uLocal_9999 = 10;
	var uLocal_10000 = 3;
	var uLocal_10001 = 500;
	var uLocal_10002 = 10000;
	var uLocal_10003 = 0;
	var uLocal_10004 = 3;
	var uLocal_10005 = 500;
	var uLocal_10006 = 10000;
	var uLocal_10007 = 0;
	var uLocal_10008 = 3;
	var uLocal_10009 = 500;
	var uLocal_10010 = 10000;
	var uLocal_10011 = 0;
	var uLocal_10012 = 3;
	var uLocal_10013 = 500;
	var uLocal_10014 = 10000;
	var uLocal_10015 = 0;
	var uLocal_10016 = 3;
	var uLocal_10017 = 500;
	var uLocal_10018 = 10000;
	var uLocal_10019 = 0;
	var uLocal_10020 = 3;
	var uLocal_10021 = 500;
	var uLocal_10022 = 10000;
	var uLocal_10023 = 0;
	var uLocal_10024 = 3;
	var uLocal_10025 = 500;
	var uLocal_10026 = 10000;
	var uLocal_10027 = 0;
	var uLocal_10028 = 3;
	var uLocal_10029 = 500;
	var uLocal_10030 = 10000;
	var uLocal_10031 = 0;
	var uLocal_10032 = 3;
	var uLocal_10033 = 500;
	var uLocal_10034 = 10000;
	var uLocal_10035 = 0;
	var uLocal_10036 = 3;
	var uLocal_10037 = 500;
	var uLocal_10038 = 10000;
	var uLocal_10039 = 0;
	var uLocal_10040 = 0;
	var uLocal_10041 = 0;
	var uLocal_10042 = 0;
	var uLocal_10043 = 0;
	var uLocal_10044 = 0;
	var uLocal_10045 = 0;
	var uLocal_10046 = 3;
	var uLocal_10047 = 0;
	var uLocal_10048 = 0;
	var uLocal_10049 = 0;
	var uLocal_10050 = 0;
	var uLocal_10051 = -1;
	var uLocal_10052 = 0;
	var uLocal_10053 = 5;
	var uLocal_10054 = 0;
	var uLocal_10055 = 0;
	var uLocal_10056 = 0;
	var uLocal_10057 = 0;
	var uLocal_10058 = 0;
	var uLocal_10059 = 0;
	var uLocal_10060 = 0;
	var uLocal_10061 = 0;
	var uLocal_10062 = 0;
	var uLocal_10063 = 0;
	var uLocal_10064 = 10;
	var uLocal_10065 = 3;
	var uLocal_10066 = 500;
	var uLocal_10067 = 10000;
	var uLocal_10068 = 0;
	var uLocal_10069 = 3;
	var uLocal_10070 = 500;
	var uLocal_10071 = 10000;
	var uLocal_10072 = 0;
	var uLocal_10073 = 3;
	var uLocal_10074 = 500;
	var uLocal_10075 = 10000;
	var uLocal_10076 = 0;
	var uLocal_10077 = 3;
	var uLocal_10078 = 500;
	var uLocal_10079 = 10000;
	var uLocal_10080 = 0;
	var uLocal_10081 = 3;
	var uLocal_10082 = 500;
	var uLocal_10083 = 10000;
	var uLocal_10084 = 0;
	var uLocal_10085 = 3;
	var uLocal_10086 = 500;
	var uLocal_10087 = 10000;
	var uLocal_10088 = 0;
	var uLocal_10089 = 3;
	var uLocal_10090 = 500;
	var uLocal_10091 = 10000;
	var uLocal_10092 = 0;
	var uLocal_10093 = 3;
	var uLocal_10094 = 500;
	var uLocal_10095 = 10000;
	var uLocal_10096 = 0;
	var uLocal_10097 = 3;
	var uLocal_10098 = 500;
	var uLocal_10099 = 10000;
	var uLocal_10100 = 0;
	var uLocal_10101 = 3;
	var uLocal_10102 = 500;
	var uLocal_10103 = 10000;
	var uLocal_10104 = 0;
	var uLocal_10105 = 0;
	var uLocal_10106 = 0;
	var uLocal_10107 = 0;
	var uLocal_10108 = 0;
	var uLocal_10109 = 0;
	var uLocal_10110 = 0;
	var uLocal_10111 = 3;
	var uLocal_10112 = 0;
	var uLocal_10113 = 0;
	var uLocal_10114 = 0;
	var uLocal_10115 = 0;
	var uLocal_10116 = -1;
	var uLocal_10117 = 0;
	var uLocal_10118 = 5;
	var uLocal_10119 = 0;
	var uLocal_10120 = 0;
	var uLocal_10121 = 0;
	var uLocal_10122 = 0;
	var uLocal_10123 = 0;
	var uLocal_10124 = 0;
	var uLocal_10125 = 0;
	var uLocal_10126 = 0;
	var uLocal_10127 = 0;
	var uLocal_10128 = 0;
	var uLocal_10129 = 10;
	var uLocal_10130 = 3;
	var uLocal_10131 = 500;
	var uLocal_10132 = 10000;
	var uLocal_10133 = 0;
	var uLocal_10134 = 3;
	var uLocal_10135 = 500;
	var uLocal_10136 = 10000;
	var uLocal_10137 = 0;
	var uLocal_10138 = 3;
	var uLocal_10139 = 500;
	var uLocal_10140 = 10000;
	var uLocal_10141 = 0;
	var uLocal_10142 = 3;
	var uLocal_10143 = 500;
	var uLocal_10144 = 10000;
	var uLocal_10145 = 0;
	var uLocal_10146 = 3;
	var uLocal_10147 = 500;
	var uLocal_10148 = 10000;
	var uLocal_10149 = 0;
	var uLocal_10150 = 3;
	var uLocal_10151 = 500;
	var uLocal_10152 = 10000;
	var uLocal_10153 = 0;
	var uLocal_10154 = 3;
	var uLocal_10155 = 500;
	var uLocal_10156 = 10000;
	var uLocal_10157 = 0;
	var uLocal_10158 = 3;
	var uLocal_10159 = 500;
	var uLocal_10160 = 10000;
	var uLocal_10161 = 0;
	var uLocal_10162 = 3;
	var uLocal_10163 = 500;
	var uLocal_10164 = 10000;
	var uLocal_10165 = 0;
	var uLocal_10166 = 3;
	var uLocal_10167 = 500;
	var uLocal_10168 = 10000;
	var uLocal_10169 = 0;
	var uLocal_10170 = 0;
	var uLocal_10171 = 0;
	var uLocal_10172 = 0;
	var uLocal_10173 = 0;
	var uLocal_10174 = 0;
	var uLocal_10175 = 0;
	var uLocal_10176 = 3;
	var uLocal_10177 = 0;
	var uLocal_10178 = 0;
	var uLocal_10179 = 0;
	var uLocal_10180 = 0;
	var uLocal_10181 = -1;
	var uLocal_10182 = 0;
	var uLocal_10183 = 5;
	var uLocal_10184 = 0;
	var uLocal_10185 = 0;
	var uLocal_10186 = 0;
	var uLocal_10187 = 0;
	var uLocal_10188 = 0;
	var uLocal_10189 = 0;
	var uLocal_10190 = 0;
	var uLocal_10191 = 0;
	var uLocal_10192 = 0;
	var uLocal_10193 = 0;
	var uLocal_10194 = 10;
	var uLocal_10195 = 3;
	var uLocal_10196 = 500;
	var uLocal_10197 = 10000;
	var uLocal_10198 = 0;
	var uLocal_10199 = 3;
	var uLocal_10200 = 500;
	var uLocal_10201 = 10000;
	var uLocal_10202 = 0;
	var uLocal_10203 = 3;
	var uLocal_10204 = 500;
	var uLocal_10205 = 10000;
	var uLocal_10206 = 0;
	var uLocal_10207 = 3;
	var uLocal_10208 = 500;
	var uLocal_10209 = 10000;
	var uLocal_10210 = 0;
	var uLocal_10211 = 3;
	var uLocal_10212 = 500;
	var uLocal_10213 = 10000;
	var uLocal_10214 = 0;
	var uLocal_10215 = 3;
	var uLocal_10216 = 500;
	var uLocal_10217 = 10000;
	var uLocal_10218 = 0;
	var uLocal_10219 = 3;
	var uLocal_10220 = 500;
	var uLocal_10221 = 10000;
	var uLocal_10222 = 0;
	var uLocal_10223 = 3;
	var uLocal_10224 = 500;
	var uLocal_10225 = 10000;
	var uLocal_10226 = 0;
	var uLocal_10227 = 3;
	var uLocal_10228 = 500;
	var uLocal_10229 = 10000;
	var uLocal_10230 = 0;
	var uLocal_10231 = 3;
	var uLocal_10232 = 500;
	var uLocal_10233 = 10000;
	var uLocal_10234 = 0;
	var uLocal_10235 = 0;
	var uLocal_10236 = 0;
	var uLocal_10237 = 0;
	var uLocal_10238 = 0;
	var uLocal_10239 = 0;
	var uLocal_10240 = 0;
	var uLocal_10241 = 3;
	var uLocal_10242 = 0;
	var uLocal_10243 = 0;
	var uLocal_10244 = 0;
	var uLocal_10245 = 0;
	var uLocal_10246 = -1;
	var uLocal_10247 = 0;
	var uLocal_10248 = 5;
	var uLocal_10249 = 0;
	var uLocal_10250 = 0;
	var uLocal_10251 = 0;
	var uLocal_10252 = 0;
	var uLocal_10253 = 0;
	var uLocal_10254 = 0;
	var uLocal_10255 = 0;
	var uLocal_10256 = 0;
	var uLocal_10257 = 0;
	var uLocal_10258 = 0;
	var uLocal_10259 = 10;
	var uLocal_10260 = 3;
	var uLocal_10261 = 500;
	var uLocal_10262 = 10000;
	var uLocal_10263 = 0;
	var uLocal_10264 = 3;
	var uLocal_10265 = 500;
	var uLocal_10266 = 10000;
	var uLocal_10267 = 0;
	var uLocal_10268 = 3;
	var uLocal_10269 = 500;
	var uLocal_10270 = 10000;
	var uLocal_10271 = 0;
	var uLocal_10272 = 3;
	var uLocal_10273 = 500;
	var uLocal_10274 = 10000;
	var uLocal_10275 = 0;
	var uLocal_10276 = 3;
	var uLocal_10277 = 500;
	var uLocal_10278 = 10000;
	var uLocal_10279 = 0;
	var uLocal_10280 = 3;
	var uLocal_10281 = 500;
	var uLocal_10282 = 10000;
	var uLocal_10283 = 0;
	var uLocal_10284 = 3;
	var uLocal_10285 = 500;
	var uLocal_10286 = 10000;
	var uLocal_10287 = 0;
	var uLocal_10288 = 3;
	var uLocal_10289 = 500;
	var uLocal_10290 = 10000;
	var uLocal_10291 = 0;
	var uLocal_10292 = 3;
	var uLocal_10293 = 500;
	var uLocal_10294 = 10000;
	var uLocal_10295 = 0;
	var uLocal_10296 = 3;
	var uLocal_10297 = 500;
	var uLocal_10298 = 10000;
	var uLocal_10299 = 0;
	var uLocal_10300 = 0;
	var uLocal_10301 = 0;
	var uLocal_10302 = 0;
	var uLocal_10303 = 0;
	var uLocal_10304 = 0;
	var uLocal_10305 = 0;
	var uLocal_10306 = 3;
	var uLocal_10307 = 0;
	var uLocal_10308 = 0;
	var uLocal_10309 = 0;
	var uLocal_10310 = 0;
	var uLocal_10311 = -1;
	var uLocal_10312 = 0;
	var uLocal_10313 = 5;
	var uLocal_10314 = 0;
	var uLocal_10315 = 0;
	var uLocal_10316 = 0;
	var uLocal_10317 = 0;
	var uLocal_10318 = 0;
	var uLocal_10319 = 0;
	var uLocal_10320 = 0;
	var uLocal_10321 = 0;
	var uLocal_10322 = 0;
	var uLocal_10323 = 0;
	var uLocal_10324 = 10;
	var uLocal_10325 = 3;
	var uLocal_10326 = 500;
	var uLocal_10327 = 10000;
	var uLocal_10328 = 0;
	var uLocal_10329 = 3;
	var uLocal_10330 = 500;
	var uLocal_10331 = 10000;
	var uLocal_10332 = 0;
	var uLocal_10333 = 3;
	var uLocal_10334 = 500;
	var uLocal_10335 = 10000;
	var uLocal_10336 = 0;
	var uLocal_10337 = 3;
	var uLocal_10338 = 500;
	var uLocal_10339 = 10000;
	var uLocal_10340 = 0;
	var uLocal_10341 = 3;
	var uLocal_10342 = 500;
	var uLocal_10343 = 10000;
	var uLocal_10344 = 0;
	var uLocal_10345 = 3;
	var uLocal_10346 = 500;
	var uLocal_10347 = 10000;
	var uLocal_10348 = 0;
	var uLocal_10349 = 3;
	var uLocal_10350 = 500;
	var uLocal_10351 = 10000;
	var uLocal_10352 = 0;
	var uLocal_10353 = 3;
	var uLocal_10354 = 500;
	var uLocal_10355 = 10000;
	var uLocal_10356 = 0;
	var uLocal_10357 = 3;
	var uLocal_10358 = 500;
	var uLocal_10359 = 10000;
	var uLocal_10360 = 0;
	var uLocal_10361 = 3;
	var uLocal_10362 = 500;
	var uLocal_10363 = 10000;
	var uLocal_10364 = 0;
	var uLocal_10365 = 0;
	var uLocal_10366 = 0;
	var uLocal_10367 = 0;
	var uLocal_10368 = 0;
	var uLocal_10369 = 0;
	var uLocal_10370 = 0;
	var uLocal_10371 = 3;
	var uLocal_10372 = 0;
	var uLocal_10373 = 0;
	var uLocal_10374 = 0;
	var uLocal_10375 = 0;
	var uLocal_10376 = -1;
	var uLocal_10377 = 0;
	var uLocal_10378 = 5;
	var uLocal_10379 = 0;
	var uLocal_10380 = 0;
	var uLocal_10381 = 0;
	var uLocal_10382 = 0;
	var uLocal_10383 = 0;
	var uLocal_10384 = 0;
	var uLocal_10385 = 0;
	var uLocal_10386 = 0;
	var uLocal_10387 = 0;
	var uLocal_10388 = 0;
	var uLocal_10389 = 10;
	var uLocal_10390 = 3;
	var uLocal_10391 = 500;
	var uLocal_10392 = 10000;
	var uLocal_10393 = 0;
	var uLocal_10394 = 3;
	var uLocal_10395 = 500;
	var uLocal_10396 = 10000;
	var uLocal_10397 = 0;
	var uLocal_10398 = 3;
	var uLocal_10399 = 500;
	var uLocal_10400 = 10000;
	var uLocal_10401 = 0;
	var uLocal_10402 = 3;
	var uLocal_10403 = 500;
	var uLocal_10404 = 10000;
	var uLocal_10405 = 0;
	var uLocal_10406 = 3;
	var uLocal_10407 = 500;
	var uLocal_10408 = 10000;
	var uLocal_10409 = 0;
	var uLocal_10410 = 3;
	var uLocal_10411 = 500;
	var uLocal_10412 = 10000;
	var uLocal_10413 = 0;
	var uLocal_10414 = 3;
	var uLocal_10415 = 500;
	var uLocal_10416 = 10000;
	var uLocal_10417 = 0;
	var uLocal_10418 = 3;
	var uLocal_10419 = 500;
	var uLocal_10420 = 10000;
	var uLocal_10421 = 0;
	var uLocal_10422 = 3;
	var uLocal_10423 = 500;
	var uLocal_10424 = 10000;
	var uLocal_10425 = 0;
	var uLocal_10426 = 3;
	var uLocal_10427 = 500;
	var uLocal_10428 = 10000;
	var uLocal_10429 = 0;
	var uLocal_10430 = 0;
	var uLocal_10431 = 0;
	var uLocal_10432 = 0;
	var uLocal_10433 = 0;
	var uLocal_10434 = 0;
	var uLocal_10435 = 0;
	var uLocal_10436 = 3;
	var uLocal_10437 = 0;
	var uLocal_10438 = 0;
	var uLocal_10439 = 0;
	var uLocal_10440 = 0;
	var uLocal_10441 = -1;
	var uLocal_10442 = 0;
	var uLocal_10443 = 5;
	var uLocal_10444 = 0;
	var uLocal_10445 = 0;
	var uLocal_10446 = 0;
	var uLocal_10447 = 0;
	var uLocal_10448 = 0;
	var uLocal_10449 = 0;
	var uLocal_10450 = 0;
	var uLocal_10451 = 0;
	var uLocal_10452 = 0;
	var uLocal_10453 = 0;
	var uLocal_10454 = 10;
	var uLocal_10455 = 3;
	var uLocal_10456 = 500;
	var uLocal_10457 = 10000;
	var uLocal_10458 = 0;
	var uLocal_10459 = 3;
	var uLocal_10460 = 500;
	var uLocal_10461 = 10000;
	var uLocal_10462 = 0;
	var uLocal_10463 = 3;
	var uLocal_10464 = 500;
	var uLocal_10465 = 10000;
	var uLocal_10466 = 0;
	var uLocal_10467 = 3;
	var uLocal_10468 = 500;
	var uLocal_10469 = 10000;
	var uLocal_10470 = 0;
	var uLocal_10471 = 3;
	var uLocal_10472 = 500;
	var uLocal_10473 = 10000;
	var uLocal_10474 = 0;
	var uLocal_10475 = 3;
	var uLocal_10476 = 500;
	var uLocal_10477 = 10000;
	var uLocal_10478 = 0;
	var uLocal_10479 = 3;
	var uLocal_10480 = 500;
	var uLocal_10481 = 10000;
	var uLocal_10482 = 0;
	var uLocal_10483 = 3;
	var uLocal_10484 = 500;
	var uLocal_10485 = 10000;
	var uLocal_10486 = 0;
	var uLocal_10487 = 3;
	var uLocal_10488 = 500;
	var uLocal_10489 = 10000;
	var uLocal_10490 = 0;
	var uLocal_10491 = 3;
	var uLocal_10492 = 500;
	var uLocal_10493 = 10000;
	var uLocal_10494 = 0;
	var uLocal_10495 = 0;
	var uLocal_10496 = 0;
	var uLocal_10497 = 0;
	var uLocal_10498 = 0;
	var uLocal_10499 = 0;
	var uLocal_10500 = 0;
	var uLocal_10501 = 3;
	var uLocal_10502 = 0;
	var uLocal_10503 = 0;
	var uLocal_10504 = 0;
	var uLocal_10505 = 0;
	var uLocal_10506 = -1;
	var uLocal_10507 = 0;
	var uLocal_10508 = 5;
	var uLocal_10509 = 0;
	var uLocal_10510 = 0;
	var uLocal_10511 = 0;
	var uLocal_10512 = 0;
	var uLocal_10513 = 0;
	var uLocal_10514 = 0;
	var uLocal_10515 = 0;
	var uLocal_10516 = 0;
	var uLocal_10517 = 0;
	var uLocal_10518 = 0;
	var uLocal_10519 = 10;
	var uLocal_10520 = 3;
	var uLocal_10521 = 500;
	var uLocal_10522 = 10000;
	var uLocal_10523 = 0;
	var uLocal_10524 = 3;
	var uLocal_10525 = 500;
	var uLocal_10526 = 10000;
	var uLocal_10527 = 0;
	var uLocal_10528 = 3;
	var uLocal_10529 = 500;
	var uLocal_10530 = 10000;
	var uLocal_10531 = 0;
	var uLocal_10532 = 3;
	var uLocal_10533 = 500;
	var uLocal_10534 = 10000;
	var uLocal_10535 = 0;
	var uLocal_10536 = 3;
	var uLocal_10537 = 500;
	var uLocal_10538 = 10000;
	var uLocal_10539 = 0;
	var uLocal_10540 = 3;
	var uLocal_10541 = 500;
	var uLocal_10542 = 10000;
	var uLocal_10543 = 0;
	var uLocal_10544 = 3;
	var uLocal_10545 = 500;
	var uLocal_10546 = 10000;
	var uLocal_10547 = 0;
	var uLocal_10548 = 3;
	var uLocal_10549 = 500;
	var uLocal_10550 = 10000;
	var uLocal_10551 = 0;
	var uLocal_10552 = 3;
	var uLocal_10553 = 500;
	var uLocal_10554 = 10000;
	var uLocal_10555 = 0;
	var uLocal_10556 = 3;
	var uLocal_10557 = 500;
	var uLocal_10558 = 10000;
	var uLocal_10559 = 0;
	var uLocal_10560 = 0;
	var uLocal_10561 = 0;
	var uLocal_10562 = 0;
	var uLocal_10563 = 0;
	var uLocal_10564 = 0;
	var uLocal_10565 = 0;
	var uLocal_10566 = 3;
	var uLocal_10567 = 0;
	var uLocal_10568 = 0;
	var uLocal_10569 = 0;
	var uLocal_10570 = 0;
	var uLocal_10571 = -1;
	var uLocal_10572 = 0;
	var uLocal_10573 = 5;
	var uLocal_10574 = 0;
	var uLocal_10575 = 0;
	var uLocal_10576 = 0;
	var uLocal_10577 = 0;
	var uLocal_10578 = 0;
	var uLocal_10579 = 0;
	var uLocal_10580 = 0;
	var uLocal_10581 = 0;
	var uLocal_10582 = 0;
	var uLocal_10583 = 0;
	var uLocal_10584 = 10;
	var uLocal_10585 = 3;
	var uLocal_10586 = 500;
	var uLocal_10587 = 10000;
	var uLocal_10588 = 0;
	var uLocal_10589 = 3;
	var uLocal_10590 = 500;
	var uLocal_10591 = 10000;
	var uLocal_10592 = 0;
	var uLocal_10593 = 3;
	var uLocal_10594 = 500;
	var uLocal_10595 = 10000;
	var uLocal_10596 = 0;
	var uLocal_10597 = 3;
	var uLocal_10598 = 500;
	var uLocal_10599 = 10000;
	var uLocal_10600 = 0;
	var uLocal_10601 = 3;
	var uLocal_10602 = 500;
	var uLocal_10603 = 10000;
	var uLocal_10604 = 0;
	var uLocal_10605 = 3;
	var uLocal_10606 = 500;
	var uLocal_10607 = 10000;
	var uLocal_10608 = 0;
	var uLocal_10609 = 3;
	var uLocal_10610 = 500;
	var uLocal_10611 = 10000;
	var uLocal_10612 = 0;
	var uLocal_10613 = 3;
	var uLocal_10614 = 500;
	var uLocal_10615 = 10000;
	var uLocal_10616 = 0;
	var uLocal_10617 = 3;
	var uLocal_10618 = 500;
	var uLocal_10619 = 10000;
	var uLocal_10620 = 0;
	var uLocal_10621 = 3;
	var uLocal_10622 = 500;
	var uLocal_10623 = 10000;
	var uLocal_10624 = 0;
	var uLocal_10625 = 0;
	var uLocal_10626 = 0;
	var uLocal_10627 = 1;
	var uLocal_10628 = 0;
	var uLocal_10629 = 0;
	var uLocal_10630 = 0;
	var uLocal_10631 = 0;
	var uLocal_10632 = 0;
	var uLocal_10633 = 0;
	var uLocal_10634 = 0;
	var uLocal_10635 = 0;
	var uLocal_10636 = 0;
	var uLocal_10637 = 0;
	var uLocal_10638 = 0;
	var uLocal_10639 = 0;
	var uLocal_10640 = 65;
	var uLocal_10641 = 0;
	var uLocal_10642 = 0;
	var uLocal_10643 = 0;
	var uLocal_10644 = 0;
	var uLocal_10645 = 0;
	var uLocal_10646 = 0;
	var uLocal_10647 = 0;
	var uLocal_10648 = 0;
	var uLocal_10649 = 0;
	var uLocal_10650 = 0;
	var uLocal_10651 = 0;
	var uLocal_10652 = 0;
	var uLocal_10653 = 0;
	var uLocal_10654 = 0;
	var uLocal_10655 = 0;
	var uLocal_10656 = 0;
	var uLocal_10657 = 0;
	var uLocal_10658 = 0;
	var uLocal_10659 = 0;
	var uLocal_10660 = 0;
	var uLocal_10661 = 0;
	var uLocal_10662 = 0;
	var uLocal_10663 = 0;
	var uLocal_10664 = 0;
	var uLocal_10665 = 0;
	var uLocal_10666 = 0;
	var uLocal_10667 = 0;
	var uLocal_10668 = 0;
	var uLocal_10669 = 0;
	var uLocal_10670 = 0;
	var uLocal_10671 = 0;
	var uLocal_10672 = 0;
	var uLocal_10673 = 0;
	var uLocal_10674 = 0;
	var uLocal_10675 = 0;
	var uLocal_10676 = 0;
	var uLocal_10677 = 0;
	var uLocal_10678 = 0;
	var uLocal_10679 = 0;
	var uLocal_10680 = 0;
	var uLocal_10681 = 0;
	var uLocal_10682 = 0;
	var uLocal_10683 = 0;
	var uLocal_10684 = 0;
	var uLocal_10685 = 0;
	var uLocal_10686 = 0;
	var uLocal_10687 = 0;
	var uLocal_10688 = 0;
	var uLocal_10689 = 0;
	var uLocal_10690 = 0;
	var uLocal_10691 = 0;
	var uLocal_10692 = 0;
	var uLocal_10693 = 0;
	var uLocal_10694 = 0;
	var uLocal_10695 = 0;
	var uLocal_10696 = 0;
	var uLocal_10697 = 0;
	var uLocal_10698 = 0;
	var uLocal_10699 = 0;
	var uLocal_10700 = 0;
	var uLocal_10701 = 0;
	var uLocal_10702 = 0;
	var uLocal_10703 = 0;
	var uLocal_10704 = 0;
	var uLocal_10705 = 0;
	var uLocal_10706 = 0;
	var uLocal_10707 = 0;
	var uLocal_10708 = 0;
	var uLocal_10709 = 0;
	var uLocal_10710 = 0;
	var uLocal_10711 = 0;
	var uLocal_10712 = 0;
	var uLocal_10713 = 0;
	var uLocal_10714 = 0;
	var uLocal_10715 = 0;
	var uLocal_10716 = 0;
	var uLocal_10717 = 0;
	var uLocal_10718 = 0;
	var uLocal_10719 = 0;
	var uLocal_10720 = 0;
	var uLocal_10721 = 0;
	var uLocal_10722 = 0;
	var uLocal_10723 = 0;
	var uLocal_10724 = 0;
	var uLocal_10725 = 0;
	var uLocal_10726 = 0;
	var uLocal_10727 = 0;
	var uLocal_10728 = 0;
	var uLocal_10729 = 0;
	var uLocal_10730 = 0;
	var uLocal_10731 = 0;
	var uLocal_10732 = 0;
	var uLocal_10733 = 0;
	var uLocal_10734 = 0;
	var uLocal_10735 = 0;
	var uLocal_10736 = 0;
	var uLocal_10737 = 0;
	var uLocal_10738 = 0;
	var uLocal_10739 = 0;
	var uLocal_10740 = 0;
	var uLocal_10741 = 0;
	var uLocal_10742 = 0;
	var uLocal_10743 = 0;
	var uLocal_10744 = 0;
	var uLocal_10745 = 0;
	var uLocal_10746 = 0;
	var uLocal_10747 = 0;
	var uLocal_10748 = 0;
	var uLocal_10749 = 0;
	var uLocal_10750 = 0;
	var uLocal_10751 = 0;
	var uLocal_10752 = 0;
	var uLocal_10753 = 0;
	var uLocal_10754 = 0;
	var uLocal_10755 = 0;
	var uLocal_10756 = 0;
	var uLocal_10757 = 0;
	var uLocal_10758 = 0;
	var uLocal_10759 = 0;
	var uLocal_10760 = 0;
	var uLocal_10761 = 0;
	var uLocal_10762 = 0;
	var uLocal_10763 = 0;
	var uLocal_10764 = 0;
	var uLocal_10765 = 0;
	var uLocal_10766 = 0;
	var uLocal_10767 = 0;
	var uLocal_10768 = 0;
	var uLocal_10769 = 0;
	var uLocal_10770 = 0;
	var uLocal_10771 = 0;
	var uLocal_10772 = 0;
	var uLocal_10773 = 0;
	var uLocal_10774 = 0;
	var uLocal_10775 = 0;
	var uLocal_10776 = 0;
	var uLocal_10777 = 0;
	var uLocal_10778 = 0;
	var uLocal_10779 = 0;
	var uLocal_10780 = 0;
	var uLocal_10781 = 0;
	var uLocal_10782 = 0;
	var uLocal_10783 = 0;
	var uLocal_10784 = 0;
	var uLocal_10785 = 0;
	var uLocal_10786 = 0;
	var uLocal_10787 = 0;
	var uLocal_10788 = 0;
	var uLocal_10789 = 0;
	var uLocal_10790 = 0;
	var uLocal_10791 = 0;
	var uLocal_10792 = 0;
	var uLocal_10793 = 0;
	var uLocal_10794 = 0;
	var uLocal_10795 = 0;
	var uLocal_10796 = 0;
	var uLocal_10797 = 0;
	var uLocal_10798 = 0;
	var uLocal_10799 = 0;
	var uLocal_10800 = 0;
	var uLocal_10801 = 0;
	var uLocal_10802 = 0;
	var uLocal_10803 = 0;
	var uLocal_10804 = 0;
	var uLocal_10805 = 0;
	var uLocal_10806 = 0;
	var uLocal_10807 = 0;
	var uLocal_10808 = 0;
	var uLocal_10809 = 0;
	var uLocal_10810 = 0;
	var uLocal_10811 = 0;
	var uLocal_10812 = 0;
	var uLocal_10813 = 0;
	var uLocal_10814 = 0;
	var uLocal_10815 = 0;
	var uLocal_10816 = 0;
	var uLocal_10817 = 0;
	var uLocal_10818 = 0;
	var uLocal_10819 = 0;
	var uLocal_10820 = 0;
	var uLocal_10821 = 0;
	var uLocal_10822 = 0;
	var uLocal_10823 = 0;
	var uLocal_10824 = 0;
	var uLocal_10825 = 0;
	var uLocal_10826 = 0;
	var uLocal_10827 = 0;
	var uLocal_10828 = 0;
	var uLocal_10829 = 0;
	var uLocal_10830 = 0;
	var uLocal_10831 = 0;
	var uLocal_10832 = 0;
	var uLocal_10833 = 0;
	var uLocal_10834 = 0;
	var uLocal_10835 = 0;
	var uLocal_10836 = 0;
	var uLocal_10837 = 0;
	var uLocal_10838 = 0;
	var uLocal_10839 = 0;
	var uLocal_10840 = 0;
	var uLocal_10841 = 0;
	var uLocal_10842 = 0;
	var uLocal_10843 = 0;
	var uLocal_10844 = 0;
	var uLocal_10845 = 0;
	var uLocal_10846 = 0;
	var uLocal_10847 = 0;
	var uLocal_10848 = 0;
	var uLocal_10849 = 0;
	var uLocal_10850 = 0;
	var uLocal_10851 = 0;
	var uLocal_10852 = 0;
	var uLocal_10853 = 0;
	var uLocal_10854 = 0;
	var uLocal_10855 = 0;
	var uLocal_10856 = 0;
	var uLocal_10857 = 0;
	var uLocal_10858 = 0;
	var uLocal_10859 = 0;
	var uLocal_10860 = 0;
	var uLocal_10861 = 0;
	var uLocal_10862 = 0;
	var uLocal_10863 = 0;
	var uLocal_10864 = 0;
	var uLocal_10865 = 0;
	var uLocal_10866 = 0;
	var uLocal_10867 = 0;
	var uLocal_10868 = 0;
	var uLocal_10869 = 0;
	var uLocal_10870 = 0;
	var uLocal_10871 = 0;
	var uLocal_10872 = 0;
	var uLocal_10873 = 0;
	var uLocal_10874 = 0;
	var uLocal_10875 = 0;
	var uLocal_10876 = 0;
	var uLocal_10877 = 0;
	var uLocal_10878 = 0;
	var uLocal_10879 = 0;
	var uLocal_10880 = 0;
	var uLocal_10881 = 0;
	var uLocal_10882 = 0;
	var uLocal_10883 = 0;
	var uLocal_10884 = 0;
	var uLocal_10885 = 0;
	var uLocal_10886 = 0;
	var uLocal_10887 = 0;
	var uLocal_10888 = 0;
	var uLocal_10889 = 0;
	var uLocal_10890 = 0;
	var uLocal_10891 = 0;
	var uLocal_10892 = 0;
	var uLocal_10893 = 0;
	var uLocal_10894 = 0;
	var uLocal_10895 = 0;
	var uLocal_10896 = 0;
	var uLocal_10897 = 0;
	var uLocal_10898 = 0;
	var uLocal_10899 = 0;
	var uLocal_10900 = 0;
	var uLocal_10901 = 0;
	var uLocal_10902 = 0;
	var uLocal_10903 = 0;
	var uLocal_10904 = 0;
	var uLocal_10905 = 0;
	var uLocal_10906 = 0;
	var uLocal_10907 = 0;
	var uLocal_10908 = 0;
	var uLocal_10909 = 0;
	var uLocal_10910 = 0;
	var uLocal_10911 = 0;
	var uLocal_10912 = 0;
	var uLocal_10913 = 0;
	var uLocal_10914 = 0;
	var uLocal_10915 = 0;
	var uLocal_10916 = 0;
	var uLocal_10917 = 0;
	var uLocal_10918 = 0;
	var uLocal_10919 = 0;
	var uLocal_10920 = 0;
	var uLocal_10921 = 0;
	var uLocal_10922 = 0;
	var uLocal_10923 = 0;
	var uLocal_10924 = 0;
	var uLocal_10925 = 0;
	var uLocal_10926 = 0;
	var uLocal_10927 = 0;
	var uLocal_10928 = 0;
	var uLocal_10929 = 0;
	var uLocal_10930 = 0;
	var uLocal_10931 = 0;
	var uLocal_10932 = 0;
	var uLocal_10933 = 0;
	var uLocal_10934 = 0;
	var uLocal_10935 = 0;
	var uLocal_10936 = 0;
	var uLocal_10937 = 0;
	var uLocal_10938 = 0;
	var uLocal_10939 = 0;
	var uLocal_10940 = 0;
	var uLocal_10941 = 0;
	var uLocal_10942 = 0;
	var uLocal_10943 = 0;
	var uLocal_10944 = 0;
	var uLocal_10945 = 0;
	var uLocal_10946 = 0;
	var uLocal_10947 = 0;
	var uLocal_10948 = 0;
	var uLocal_10949 = 0;
	var uLocal_10950 = 0;
	var uLocal_10951 = 0;
	var uLocal_10952 = 0;
	var uLocal_10953 = 0;
	var uLocal_10954 = 0;
	var uLocal_10955 = 0;
	var uLocal_10956 = 0;
	var uLocal_10957 = 0;
	var uLocal_10958 = 0;
	var uLocal_10959 = 0;
	var uLocal_10960 = 0;
	var uLocal_10961 = 0;
	var uLocal_10962 = 0;
	var uLocal_10963 = 0;
	var uLocal_10964 = 0;
	var uLocal_10965 = 0;
	var uLocal_10966 = 0;
	var uLocal_10967 = 0;
	var uLocal_10968 = 0;
	var uLocal_10969 = 0;
	var uLocal_10970 = 0;
	var uLocal_10971 = 0;
	var uLocal_10972 = 0;
	var uLocal_10973 = 0;
	var uLocal_10974 = 0;
	var uLocal_10975 = 0;
	var uLocal_10976 = 0;
	var uLocal_10977 = 0;
	var uLocal_10978 = 0;
	var uLocal_10979 = 0;
	var uLocal_10980 = 0;
	var uLocal_10981 = 0;
	var uLocal_10982 = 0;
	var uLocal_10983 = 0;
	var uLocal_10984 = 0;
	var uLocal_10985 = 0;
	var uLocal_10986 = 0;
	var uLocal_10987 = 0;
	var uLocal_10988 = 0;
	var uLocal_10989 = 0;
	var uLocal_10990 = 0;
	var uLocal_10991 = 0;
	var uLocal_10992 = 0;
	var uLocal_10993 = 0;
	var uLocal_10994 = 0;
	var uLocal_10995 = 0;
	var uLocal_10996 = 0;
	var uLocal_10997 = 0;
	var uLocal_10998 = 0;
	var uLocal_10999 = 0;
	var uLocal_11000 = 0;
	var uLocal_11001 = 0;
	var uLocal_11002 = 0;
	var uLocal_11003 = 0;
	var uLocal_11004 = 0;
	var uLocal_11005 = 0;
	var uLocal_11006 = 0;
	var uLocal_11007 = 0;
	var uLocal_11008 = 0;
	var uLocal_11009 = 0;
	var uLocal_11010 = 0;
	var uLocal_11011 = 0;
	var uLocal_11012 = 0;
	var uLocal_11013 = 0;
	var uLocal_11014 = 0;
	var uLocal_11015 = 0;
	var uLocal_11016 = 0;
	var uLocal_11017 = 0;
	var uLocal_11018 = 0;
	var uLocal_11019 = 0;
	var uLocal_11020 = 0;
	var uLocal_11021 = 0;
	var uLocal_11022 = 0;
	var uLocal_11023 = 0;
	var uLocal_11024 = 0;
	var uLocal_11025 = 0;
	var uLocal_11026 = 0;
	var uLocal_11027 = 0;
	var uLocal_11028 = 0;
	var uLocal_11029 = 0;
	var uLocal_11030 = 0;
	var uLocal_11031 = 0;
	var uLocal_11032 = 0;
	var uLocal_11033 = 0;
	var uLocal_11034 = 0;
	var uLocal_11035 = 0;
	var uLocal_11036 = 0;
	var uLocal_11037 = 0;
	var uLocal_11038 = 0;
	var uLocal_11039 = 0;
	var uLocal_11040 = 0;
	var uLocal_11041 = 0;
	var uLocal_11042 = 0;
	var uLocal_11043 = 0;
	var uLocal_11044 = 0;
	var uLocal_11045 = 0;
	var uLocal_11046 = 0;
	var uLocal_11047 = 0;
	var uLocal_11048 = 0;
	var uLocal_11049 = 0;
	var uLocal_11050 = 0;
	var uLocal_11051 = 0;
	var uLocal_11052 = 0;
	var uLocal_11053 = 0;
	var uLocal_11054 = 0;
	var uLocal_11055 = 0;
	var uLocal_11056 = 0;
	var uLocal_11057 = 0;
	var uLocal_11058 = 0;
	var uLocal_11059 = 0;
	var uLocal_11060 = 0;
	var uLocal_11061 = 0;
	var uLocal_11062 = 0;
	var uLocal_11063 = 0;
	var uLocal_11064 = 0;
	var uLocal_11065 = 0;
	var uLocal_11066 = 0;
	var uLocal_11067 = 0;
	var uLocal_11068 = 0;
	var uLocal_11069 = 0;
	var uLocal_11070 = 0;
	var uLocal_11071 = 0;
	var uLocal_11072 = 0;
	var uLocal_11073 = 0;
	var uLocal_11074 = 0;
	var uLocal_11075 = 0;
	var uLocal_11076 = 0;
	var uLocal_11077 = 0;
	var uLocal_11078 = 0;
	var uLocal_11079 = 0;
	var uLocal_11080 = 0;
	var uLocal_11081 = 0;
	var uLocal_11082 = 0;
	var uLocal_11083 = 0;
	var uLocal_11084 = 0;
	var uLocal_11085 = 0;
	var uLocal_11086 = 0;
	var uLocal_11087 = 0;
	var uLocal_11088 = 0;
	var uLocal_11089 = 0;
	var uLocal_11090 = 0;
	var uLocal_11091 = 0;
	var uLocal_11092 = 0;
	var uLocal_11093 = 0;
	var uLocal_11094 = 0;
	var uLocal_11095 = 0;
	var uLocal_11096 = 0;
	var uLocal_11097 = 0;
	var uLocal_11098 = 0;
	var uLocal_11099 = 0;
	var uLocal_11100 = 0;
	var uLocal_11101 = 0;
	var uLocal_11102 = 0;
	var uLocal_11103 = 0;
	var uLocal_11104 = 0;
	var uLocal_11105 = 0;
	var uLocal_11106 = 0;
	var uLocal_11107 = 0;
	var uLocal_11108 = 0;
	var uLocal_11109 = 0;
	var uLocal_11110 = 0;
	var uLocal_11111 = 0;
	var uLocal_11112 = 0;
	var uLocal_11113 = 0;
	var uLocal_11114 = 0;
	var uLocal_11115 = 0;
	var uLocal_11116 = 0;
	var uLocal_11117 = 0;
	var uLocal_11118 = 0;
	var uLocal_11119 = 0;
	var uLocal_11120 = 0;
	var uLocal_11121 = 0;
	var uLocal_11122 = 0;
	var uLocal_11123 = 0;
	var uLocal_11124 = 0;
	var uLocal_11125 = 0;
	var uLocal_11126 = 0;
	var uLocal_11127 = 0;
	var uLocal_11128 = 0;
	var uLocal_11129 = 0;
	var uLocal_11130 = 0;
	var uLocal_11131 = 0;
	var uLocal_11132 = 0;
	var uLocal_11133 = 0;
	var uLocal_11134 = 0;
	var uLocal_11135 = 0;
	var uLocal_11136 = 0;
	var uLocal_11137 = 0;
	var uLocal_11138 = 0;
	var uLocal_11139 = 0;
	var uLocal_11140 = 0;
	var uLocal_11141 = 0;
	var uLocal_11142 = 0;
	var uLocal_11143 = 0;
	var uLocal_11144 = 0;
	var uLocal_11145 = 0;
	var uLocal_11146 = 0;
	var uLocal_11147 = 0;
	var uLocal_11148 = 0;
	var uLocal_11149 = 0;
	var uLocal_11150 = 0;
	var uLocal_11151 = 0;
	var uLocal_11152 = 0;
	var uLocal_11153 = 0;
	var uLocal_11154 = 0;
	var uLocal_11155 = 0;
	var uLocal_11156 = 0;
	var uLocal_11157 = 0;
	var uLocal_11158 = 0;
	var uLocal_11159 = 0;
	var uLocal_11160 = 0;
	var uLocal_11161 = 0;
	var uLocal_11162 = 0;
	var uLocal_11163 = 0;
	var uLocal_11164 = 0;
	var uLocal_11165 = 0;
	var uLocal_11166 = 0;
	var uLocal_11167 = 0;
	var uLocal_11168 = 0;
	var uLocal_11169 = 0;
	var uLocal_11170 = 0;
	var uLocal_11171 = 0;
	var uLocal_11172 = 0;
	var uLocal_11173 = 0;
	var uLocal_11174 = 0;
	var uLocal_11175 = 0;
	var uLocal_11176 = 0;
	var uLocal_11177 = 0;
	var uLocal_11178 = 0;
	var uLocal_11179 = 0;
	var uLocal_11180 = 0;
	var uLocal_11181 = 0;
	var uLocal_11182 = 0;
	var uLocal_11183 = 0;
	var uLocal_11184 = 0;
	var uLocal_11185 = 0;
	var uLocal_11186 = 0;
	var uLocal_11187 = 0;
	var uLocal_11188 = 0;
	var uLocal_11189 = 0;
	var uLocal_11190 = 0;
	var uLocal_11191 = 0;
	var uLocal_11192 = 0;
	var uLocal_11193 = 0;
	var uLocal_11194 = 0;
	var uLocal_11195 = 0;
	var uLocal_11196 = 0;
	var uLocal_11197 = 0;
	var uLocal_11198 = 0;
	var uLocal_11199 = 0;
	var uLocal_11200 = 0;
	var uLocal_11201 = 0;
	var uLocal_11202 = 0;
	var uLocal_11203 = 0;
	var uLocal_11204 = 0;
	var uLocal_11205 = 0;
	var uLocal_11206 = 0;
	var uLocal_11207 = 0;
	var uLocal_11208 = 0;
	var uLocal_11209 = 0;
	var uLocal_11210 = 0;
	var uLocal_11211 = 0;
	var uLocal_11212 = 0;
	var uLocal_11213 = 0;
	var uLocal_11214 = 0;
	var uLocal_11215 = 0;
	var uLocal_11216 = 0;
	var uLocal_11217 = 0;
	var uLocal_11218 = 0;
	var uLocal_11219 = 0;
	var uLocal_11220 = 0;
	var uLocal_11221 = 0;
	var uLocal_11222 = 0;
	var uLocal_11223 = 0;
	var uLocal_11224 = 0;
	var uLocal_11225 = 0;
	var uLocal_11226 = 0;
	var uLocal_11227 = 0;
	var uLocal_11228 = 0;
	var uLocal_11229 = 0;
	var uLocal_11230 = 0;
	var uLocal_11231 = 0;
	var uLocal_11232 = 0;
	var uLocal_11233 = 0;
	var uLocal_11234 = 0;
	var uLocal_11235 = 0;
	var uLocal_11236 = 0;
	var uLocal_11237 = 0;
	var uLocal_11238 = 0;
	var uLocal_11239 = 0;
	var uLocal_11240 = 0;
	var uLocal_11241 = 0;
	var uLocal_11242 = 0;
	var uLocal_11243 = 0;
	var uLocal_11244 = 0;
	var uLocal_11245 = 0;
	var uLocal_11246 = 0;
	var uLocal_11247 = 0;
	var uLocal_11248 = 0;
	var uLocal_11249 = 0;
	var uLocal_11250 = 0;
	var uLocal_11251 = 0;
	var uLocal_11252 = 0;
	var uLocal_11253 = 0;
	var uLocal_11254 = 0;
	var uLocal_11255 = 0;
	var uLocal_11256 = 0;
	var uLocal_11257 = 0;
	var uLocal_11258 = 0;
	var uLocal_11259 = 0;
	var uLocal_11260 = 0;
	var uLocal_11261 = 0;
	var uLocal_11262 = 0;
	var uLocal_11263 = 0;
	var uLocal_11264 = 0;
	var uLocal_11265 = 0;
	var uLocal_11266 = 0;
	var uLocal_11267 = 0;
	var uLocal_11268 = 0;
	var uLocal_11269 = 0;
	var uLocal_11270 = 0;
	var uLocal_11271 = 0;
	var uLocal_11272 = 0;
	var uLocal_11273 = 0;
	var uLocal_11274 = 0;
	var uLocal_11275 = 0;
	var uLocal_11276 = 0;
	var uLocal_11277 = 0;
	var uLocal_11278 = 0;
	var uLocal_11279 = 0;
	var uLocal_11280 = 0;
	var uLocal_11281 = 0;
	var uLocal_11282 = 0;
	var uLocal_11283 = 0;
	var uLocal_11284 = 0;
	var uLocal_11285 = 0;
	var uLocal_11286 = 0;
	var uLocal_11287 = 0;
	var uLocal_11288 = 0;
	var uLocal_11289 = 0;
	var uLocal_11290 = 0;
	var uLocal_11291 = 0;
	var uLocal_11292 = 0;
	var uLocal_11293 = 0;
	var uLocal_11294 = 0;
	var uLocal_11295 = 0;
	var uLocal_11296 = 0;
	var uLocal_11297 = 0;
	var uLocal_11298 = 0;
	var uLocal_11299 = 0;
	var uLocal_11300 = 0;
	var uLocal_11301 = 0;
	var uLocal_11302 = 0;
	var uLocal_11303 = 0;
	var uLocal_11304 = 0;
	var uLocal_11305 = 0;
	var uLocal_11306 = 0;
	var uLocal_11307 = 0;
	var uLocal_11308 = 0;
	var uLocal_11309 = 0;
	var uLocal_11310 = 0;
	var uLocal_11311 = 0;
	var uLocal_11312 = 0;
	var uLocal_11313 = 0;
	var uLocal_11314 = 0;
	var uLocal_11315 = 0;
	var uLocal_11316 = 0;
	var uLocal_11317 = 0;
	var uLocal_11318 = 0;
	var uLocal_11319 = 0;
	var uLocal_11320 = 0;
	var uLocal_11321 = 0;
	var uLocal_11322 = 0;
	var uLocal_11323 = 0;
	var uLocal_11324 = 0;
	var uLocal_11325 = 0;
	var uLocal_11326 = 0;
	var uLocal_11327 = 0;
	var uLocal_11328 = 0;
	var uLocal_11329 = 0;
	var uLocal_11330 = 0;
	var uLocal_11331 = 0;
	var uLocal_11332 = 0;
	var uLocal_11333 = 0;
	var uLocal_11334 = 0;
	var uLocal_11335 = 0;
	var uLocal_11336 = 0;
	var uLocal_11337 = 0;
	var uLocal_11338 = 0;
	var uLocal_11339 = 0;
	var uLocal_11340 = 0;
	var uLocal_11341 = 0;
	var uLocal_11342 = 0;
	var uLocal_11343 = 0;
	var uLocal_11344 = 0;
	var uLocal_11345 = 0;
	var uLocal_11346 = 0;
	var uLocal_11347 = 0;
	var uLocal_11348 = 0;
	var uLocal_11349 = 0;
	var uLocal_11350 = 0;
	var uLocal_11351 = 0;
	var uLocal_11352 = 0;
	var uLocal_11353 = 0;
	var uLocal_11354 = 0;
	var uLocal_11355 = 0;
	var uLocal_11356 = 0;
	var uLocal_11357 = 0;
	var uLocal_11358 = 0;
	var uLocal_11359 = 0;
	var uLocal_11360 = 0;
	var uLocal_11361 = 0;
	var uLocal_11362 = 0;
	var uLocal_11363 = 0;
	var uLocal_11364 = 0;
	var uLocal_11365 = 0;
	var uLocal_11366 = 0;
	var uLocal_11367 = 0;
	var uLocal_11368 = 0;
	var uLocal_11369 = 0;
	var uLocal_11370 = 0;
	var uLocal_11371 = 0;
	var uLocal_11372 = 0;
	var uLocal_11373 = 0;
	var uLocal_11374 = 0;
	var uLocal_11375 = 0;
	var uLocal_11376 = 0;
	var uLocal_11377 = 0;
	var uLocal_11378 = 0;
	var uLocal_11379 = 0;
	var uLocal_11380 = 0;
	var uLocal_11381 = 0;
	var uLocal_11382 = 0;
	var uLocal_11383 = 0;
	var uLocal_11384 = 0;
	var uLocal_11385 = 0;
	var uLocal_11386 = 0;
	var uLocal_11387 = 0;
	var uLocal_11388 = 0;
	var uLocal_11389 = 0;
	var uLocal_11390 = 0;
	var uLocal_11391 = 0;
	var uLocal_11392 = 0;
	var uLocal_11393 = 0;
	var uLocal_11394 = 0;
	var uLocal_11395 = 0;
	var uLocal_11396 = 0;
	var uLocal_11397 = 0;
	var uLocal_11398 = 0;
	var uLocal_11399 = 0;
	var uLocal_11400 = 0;
	var uLocal_11401 = 0;
	var uLocal_11402 = 0;
	var uLocal_11403 = 0;
	var uLocal_11404 = 0;
	var uLocal_11405 = 0;
	var uLocal_11406 = 0;
	var uLocal_11407 = 0;
	var uLocal_11408 = 0;
	var uLocal_11409 = 0;
	var uLocal_11410 = 0;
	var uLocal_11411 = 0;
	var uLocal_11412 = 0;
	var uLocal_11413 = 0;
	var uLocal_11414 = 0;
	var uLocal_11415 = 0;
	var uLocal_11416 = 0;
	var uLocal_11417 = 0;
	var uLocal_11418 = 0;
	var uLocal_11419 = 0;
	var uLocal_11420 = 0;
	var uLocal_11421 = 1097859072;
	var uLocal_11422 = 1101004800;
	var uLocal_11423 = 0;
	var uLocal_11424 = 0;
	var uLocal_11425 = 0;
	var uLocal_11426 = 0;
	var uLocal_11427 = 0;
	var uLocal_11428 = 0;
	var uLocal_11429 = 0;
	var uLocal_11430 = 0;
	var uLocal_11431 = 0;
	var uLocal_11432 = 0;
	var uLocal_11433 = 0;
	var uLocal_11434 = 0;
	var uLocal_11435 = 0;
	var uLocal_11436 = 0;
	var uLocal_11437 = 0;
	var uLocal_11438 = 0;
	var uLocal_11439 = 0;
	var uLocal_11440 = 0;
	var uLocal_11441 = 0;
	var uLocal_11442 = 0;
	var uLocal_11443 = 0;
	var uLocal_11444 = 0;
	var uLocal_11445 = 0;
	var uLocal_11446 = 0;
	var uLocal_11447 = 0;
	var uLocal_11448 = 0;
	var uLocal_11449 = 4;
	var uLocal_11450 = 0;
	var uLocal_11451 = 0;
	var uLocal_11452 = 0;
	var uLocal_11453 = 0;
	var uLocal_11454 = 0;
	var uLocal_11455 = 0;
	var uLocal_11456 = 0;
	var uLocal_11457 = 0;
	var uLocal_11458 = 0;
	var uLocal_11459 = 0;
	var uLocal_11460 = 0;
	var uLocal_11461 = 0;
	var uLocal_11462 = 0;
	var uLocal_11463 = 0;
	var uLocal_11464 = 0;
	var uLocal_11465 = 0;
	var uLocal_11466 = 0;
	var uLocal_11467 = 0;
	var uLocal_11468 = 0;
	var uLocal_11469 = 0;
	var uLocal_11470 = 0;
	var uLocal_11471 = 0;
	var uLocal_11472 = 0;
	var uLocal_11473 = 0;
	var uLocal_11474 = 0;
	var uLocal_11475 = 0;
	var uLocal_11476 = 0;
	var uLocal_11477 = 0;
	var uLocal_11478 = 0;
	var uLocal_11479 = 0;
	var uLocal_11480 = 0;
	var uLocal_11481 = 0;
	var uLocal_11482 = 0;
	var uLocal_11483 = 0;
	var uLocal_11484 = 0;
	var uLocal_11485 = 0;
	var uLocal_11486 = 0;
	var uLocal_11487 = 0;
	var uLocal_11488 = 0;
	var uLocal_11489 = 0;
	var uLocal_11490 = 0;
	var uLocal_11491 = 0;
	var uLocal_11492 = 0;
	var uLocal_11493 = 0;
	var uLocal_11494 = 0;
	var uLocal_11495 = 0;
	var uLocal_11496 = 0;
	var uLocal_11497 = 0;
	var uLocal_11498 = 0;
	var uLocal_11499 = 0;
	var uLocal_11500 = 0;
	var uLocal_11501 = 0;
	var uLocal_11502 = 0;
	var uLocal_11503 = 0;
	var uLocal_11504 = 0;
	var uLocal_11505 = 0;
	var uLocal_11506 = 0;
	var uLocal_11507 = 0;
	var uLocal_11508 = 0;
	var uLocal_11509 = 0;
	var uLocal_11510 = 0;
	var uLocal_11511 = 0;
	var uLocal_11512 = 0;
	var uLocal_11513 = 0;
	var uLocal_11514 = 0;
	var uLocal_11515 = 0;
	var uLocal_11516 = 0;
	var uLocal_11517 = 0;
	var uLocal_11518 = 0;
	var uLocal_11519 = 0;
	var uLocal_11520 = 0;
	var uLocal_11521 = 40;
	var uLocal_11522 = 0;
	var uLocal_11523 = 0;
	var uLocal_11524 = 0;
	var uLocal_11525 = 0;
	var uLocal_11526 = 0;
	var uLocal_11527 = 0;
	var uLocal_11528 = 0;
	var uLocal_11529 = 0;
	var uLocal_11530 = 0;
	var uLocal_11531 = 0;
	var uLocal_11532 = 0;
	var uLocal_11533 = 0;
	var uLocal_11534 = 0;
	var uLocal_11535 = 0;
	var uLocal_11536 = 0;
	var uLocal_11537 = 0;
	var uLocal_11538 = 0;
	var uLocal_11539 = 0;
	var uLocal_11540 = 0;
	var uLocal_11541 = 0;
	var uLocal_11542 = 0;
	var uLocal_11543 = 0;
	var uLocal_11544 = 0;
	var uLocal_11545 = 0;
	var uLocal_11546 = 0;
	var uLocal_11547 = 0;
	var uLocal_11548 = 0;
	var uLocal_11549 = 0;
	var uLocal_11550 = 0;
	var uLocal_11551 = 0;
	var uLocal_11552 = 0;
	var uLocal_11553 = 0;
	var uLocal_11554 = 0;
	var uLocal_11555 = 0;
	var uLocal_11556 = 0;
	var uLocal_11557 = 0;
	var uLocal_11558 = 0;
	var uLocal_11559 = 0;
	var uLocal_11560 = 0;
	var uLocal_11561 = 0;
	var uLocal_11562 = 0;
	var uLocal_11563 = 0;
	var uLocal_11564 = 0;
	var uLocal_11565 = 0;
	var uLocal_11566 = 0;
	var uLocal_11567 = 0;
	var uLocal_11568 = 0;
	var uLocal_11569 = 0;
	var uLocal_11570 = 0;
	var uLocal_11571 = 0;
	var uLocal_11572 = 0;
	var uLocal_11573 = 0;
	var uLocal_11574 = 0;
	var uLocal_11575 = 0;
	var uLocal_11576 = 0;
	var uLocal_11577 = 0;
	var uLocal_11578 = 0;
	var uLocal_11579 = 0;
	var uLocal_11580 = 0;
	var uLocal_11581 = 0;
	var uLocal_11582 = 0;
	var uLocal_11583 = 0;
	var uLocal_11584 = 0;
	var uLocal_11585 = 0;
	var uLocal_11586 = 0;
	var uLocal_11587 = 0;
	var uLocal_11588 = 0;
	var uLocal_11589 = 0;
	var uLocal_11590 = 0;
	var uLocal_11591 = 0;
	var uLocal_11592 = 0;
	var uLocal_11593 = 0;
	var uLocal_11594 = 0;
	var uLocal_11595 = 0;
	var uLocal_11596 = 0;
	var uLocal_11597 = 0;
	var uLocal_11598 = 0;
	var uLocal_11599 = 0;
	var uLocal_11600 = 0;
	var uLocal_11601 = 0;
	var uLocal_11602 = 0;
	var uLocal_11603 = 0;
	var uLocal_11604 = 0;
	var uLocal_11605 = 0;
	var uLocal_11606 = 0;
	var uLocal_11607 = 0;
	var uLocal_11608 = 0;
	var uLocal_11609 = 0;
	var uLocal_11610 = 0;
	var uLocal_11611 = 0;
	var uLocal_11612 = 0;
	var uLocal_11613 = 0;
	var uLocal_11614 = 0;
	var uLocal_11615 = 0;
	var uLocal_11616 = 0;
	var uLocal_11617 = 0;
	var uLocal_11618 = 0;
	var uLocal_11619 = 0;
	var uLocal_11620 = 0;
	var uLocal_11621 = 0;
	var uLocal_11622 = 0;
	var uLocal_11623 = 0;
	var uLocal_11624 = 0;
	var uLocal_11625 = 0;
	var uLocal_11626 = 0;
	var uLocal_11627 = 0;
	var uLocal_11628 = 0;
	var uLocal_11629 = 0;
	var uLocal_11630 = 0;
	var uLocal_11631 = 0;
	var uLocal_11632 = 0;
	var uLocal_11633 = 0;
	var uLocal_11634 = 0;
	var uLocal_11635 = 0;
	var uLocal_11636 = 0;
	var uLocal_11637 = 0;
	var uLocal_11638 = 0;
	var uLocal_11639 = 0;
	var uLocal_11640 = 0;
	var uLocal_11641 = 0;
	var uLocal_11642 = 0;
	var uLocal_11643 = 0;
	var uLocal_11644 = 0;
	var uLocal_11645 = 0;
	var uLocal_11646 = 0;
	var uLocal_11647 = 0;
	var uLocal_11648 = 0;
	var uLocal_11649 = 0;
	var uLocal_11650 = 0;
	var uLocal_11651 = 0;
	var uLocal_11652 = 0;
	var uLocal_11653 = 0;
	var uLocal_11654 = 0;
	var uLocal_11655 = 0;
	var uLocal_11656 = 0;
	var uLocal_11657 = 0;
	var uLocal_11658 = 0;
	var uLocal_11659 = 0;
	var uLocal_11660 = 0;
	var uLocal_11661 = 0;
	var uLocal_11662 = 0;
	var uLocal_11663 = 0;
	var uLocal_11664 = 0;
	var uLocal_11665 = 0;
	var uLocal_11666 = 0;
	var uLocal_11667 = 0;
	var uLocal_11668 = 0;
	var uLocal_11669 = 0;
	var uLocal_11670 = 0;
	var uLocal_11671 = 0;
	var uLocal_11672 = 0;
	var uLocal_11673 = 0;
	var uLocal_11674 = 0;
	var uLocal_11675 = 0;
	var uLocal_11676 = 0;
	var uLocal_11677 = 0;
	var uLocal_11678 = 0;
	var uLocal_11679 = 0;
	var uLocal_11680 = 0;
	var uLocal_11681 = 0;
	var uLocal_11682 = 0;
	var uLocal_11683 = 0;
	var uLocal_11684 = 0;
	var uLocal_11685 = 0;
	var uLocal_11686 = 0;
	var uLocal_11687 = 0;
	var uLocal_11688 = 0;
	var uLocal_11689 = 0;
	var uLocal_11690 = 0;
	var uLocal_11691 = 0;
	var uLocal_11692 = 0;
	var uLocal_11693 = 0;
	var uLocal_11694 = 0;
	var uLocal_11695 = 0;
	var uLocal_11696 = 0;
	var uLocal_11697 = 0;
	var uLocal_11698 = 0;
	var uLocal_11699 = 0;
	var uLocal_11700 = 0;
	var uLocal_11701 = 0;
	var uLocal_11702 = 0;
	var uLocal_11703 = 0;
	var uLocal_11704 = 0;
	var uLocal_11705 = 0;
	var uLocal_11706 = 0;
	var uLocal_11707 = 0;
	var uLocal_11708 = 0;
	var uLocal_11709 = 0;
	var uLocal_11710 = 0;
	var uLocal_11711 = 0;
	var uLocal_11712 = 0;
	var uLocal_11713 = 0;
	var uLocal_11714 = 0;
	var uLocal_11715 = 0;
	var uLocal_11716 = 0;
	var uLocal_11717 = 0;
	var uLocal_11718 = 0;
	var uLocal_11719 = 0;
	var uLocal_11720 = 0;
	var uLocal_11721 = 0;
	var uLocal_11722 = 0;
	var uLocal_11723 = 0;
	var uLocal_11724 = 0;
	var uLocal_11725 = 0;
	var uLocal_11726 = 0;
	var uLocal_11727 = 0;
	var uLocal_11728 = 0;
	var uLocal_11729 = 0;
	var uLocal_11730 = 0;
	var uLocal_11731 = 0;
	var uLocal_11732 = 0;
	var uLocal_11733 = 0;
	var uLocal_11734 = 0;
	var uLocal_11735 = 0;
	var uLocal_11736 = 0;
	var uLocal_11737 = 0;
	var uLocal_11738 = 0;
	var uLocal_11739 = 0;
	var uLocal_11740 = 0;
	var uLocal_11741 = 0;
	var uLocal_11742 = 0;
	var uLocal_11743 = 0;
	var uLocal_11744 = 0;
	var uLocal_11745 = 0;
	var uLocal_11746 = 0;
	var uLocal_11747 = 0;
	var uLocal_11748 = 0;
	var uLocal_11749 = 0;
	var uLocal_11750 = 0;
	var uLocal_11751 = 0;
	var uLocal_11752 = 0;
	var uLocal_11753 = 0;
	var uLocal_11754 = 0;
	var uLocal_11755 = 0;
	var uLocal_11756 = 0;
	var uLocal_11757 = 0;
	var uLocal_11758 = 0;
	var uLocal_11759 = 0;
	var uLocal_11760 = 0;
	var uLocal_11761 = 0;
	var uLocal_11762 = 0;
	var uLocal_11763 = 0;
	var uLocal_11764 = 0;
	var uLocal_11765 = 0;
	var uLocal_11766 = 0;
	var uLocal_11767 = 0;
	var uLocal_11768 = 0;
	var uLocal_11769 = 0;
	var uLocal_11770 = 0;
	var uLocal_11771 = 0;
	var uLocal_11772 = 0;
	var uLocal_11773 = 0;
	var uLocal_11774 = 0;
	var uLocal_11775 = 0;
	var uLocal_11776 = 0;
	var uLocal_11777 = 0;
	var uLocal_11778 = 0;
	var uLocal_11779 = 0;
	var uLocal_11780 = 0;
	var uLocal_11781 = 0;
	var uLocal_11782 = 0;
	var uLocal_11783 = 0;
	var uLocal_11784 = 0;
	var uLocal_11785 = 0;
	var uLocal_11786 = 0;
	var uLocal_11787 = 0;
	var uLocal_11788 = 0;
	var uLocal_11789 = 0;
	var uLocal_11790 = 0;
	var uLocal_11791 = 0;
	var uLocal_11792 = 0;
	var uLocal_11793 = 0;
	var uLocal_11794 = 0;
	var uLocal_11795 = 0;
	var uLocal_11796 = 0;
	var uLocal_11797 = 0;
	var uLocal_11798 = 0;
	var uLocal_11799 = 0;
	var uLocal_11800 = 0;
	var uLocal_11801 = 0;
	var uLocal_11802 = 0;
	var uLocal_11803 = 0;
	var uLocal_11804 = 0;
	var uLocal_11805 = 0;
	var uLocal_11806 = 0;
	var uLocal_11807 = 0;
	var uLocal_11808 = 0;
	var uLocal_11809 = 0;
	var uLocal_11810 = 0;
	var uLocal_11811 = 0;
	var uLocal_11812 = 0;
	var uLocal_11813 = 0;
	var uLocal_11814 = 0;
	var uLocal_11815 = 0;
	var uLocal_11816 = 0;
	var uLocal_11817 = 0;
	var uLocal_11818 = 0;
	var uLocal_11819 = 0;
	var uLocal_11820 = 0;
	var uLocal_11821 = 0;
	var uLocal_11822 = 0;
	var uLocal_11823 = 0;
	var uLocal_11824 = 0;
	var uLocal_11825 = 0;
	var uLocal_11826 = 0;
	var uLocal_11827 = 0;
	var uLocal_11828 = 0;
	var uLocal_11829 = 0;
	var uLocal_11830 = 0;
	var uLocal_11831 = 0;
	var uLocal_11832 = 0;
	var uLocal_11833 = 0;
	var uLocal_11834 = 0;
	var uLocal_11835 = 0;
	var uLocal_11836 = 0;
	var uLocal_11837 = 0;
	var uLocal_11838 = 0;
	var uLocal_11839 = 0;
	var uLocal_11840 = 0;
	var uLocal_11841 = 0;
	var uLocal_11842 = 0;
	var uLocal_11843 = 0;
	var uLocal_11844 = 0;
	var uLocal_11845 = 0;
	var uLocal_11846 = 0;
	var uLocal_11847 = 0;
	var uLocal_11848 = 0;
	var uLocal_11849 = 0;
	var uLocal_11850 = 0;
	var uLocal_11851 = 0;
	var uLocal_11852 = 0;
	var uLocal_11853 = 0;
	var uLocal_11854 = 0;
	var uLocal_11855 = 0;
	var uLocal_11856 = 0;
	var uLocal_11857 = 0;
	var uLocal_11858 = 0;
	var uLocal_11859 = 0;
	var uLocal_11860 = 0;
	var uLocal_11861 = 0;
	var uLocal_11862 = 0;
	var uLocal_11863 = 0;
	var uLocal_11864 = 0;
	var uLocal_11865 = 0;
	var uLocal_11866 = 0;
	var uLocal_11867 = 0;
	var uLocal_11868 = 0;
	var uLocal_11869 = 0;
	var uLocal_11870 = 0;
	var uLocal_11871 = 0;
	var uLocal_11872 = 0;
	var uLocal_11873 = 0;
	var uLocal_11874 = 0;
	var uLocal_11875 = 0;
	var uLocal_11876 = 0;
	var uLocal_11877 = 0;
	var uLocal_11878 = 0;
	var uLocal_11879 = 0;
	var uLocal_11880 = 0;
	var uLocal_11881 = 0;
	var uLocal_11882 = 0;
	var uLocal_11883 = 0;
	var uLocal_11884 = 0;
	var uLocal_11885 = 0;
	var uLocal_11886 = 0;
	var uLocal_11887 = 0;
	var uLocal_11888 = 0;
	var uLocal_11889 = 0;
	var uLocal_11890 = 0;
	var uLocal_11891 = 0;
	var uLocal_11892 = 0;
	var uLocal_11893 = 0;
	var uLocal_11894 = 0;
	var uLocal_11895 = 0;
	var uLocal_11896 = 0;
	var uLocal_11897 = 0;
	var uLocal_11898 = 0;
	var uLocal_11899 = 0;
	var uLocal_11900 = 0;
	var uLocal_11901 = 0;
	var uLocal_11902 = 0;
	var uLocal_11903 = 0;
	var uLocal_11904 = 0;
	var uLocal_11905 = 0;
	var uLocal_11906 = 0;
	var uLocal_11907 = 0;
	var uLocal_11908 = 0;
	var uLocal_11909 = 0;
	var uLocal_11910 = 0;
	var uLocal_11911 = 0;
	var uLocal_11912 = 0;
	var uLocal_11913 = 0;
	var uLocal_11914 = 0;
	var uLocal_11915 = 0;
	var uLocal_11916 = 0;
	var uLocal_11917 = 0;
	var uLocal_11918 = 0;
	var uLocal_11919 = 0;
	var uLocal_11920 = 0;
	var uLocal_11921 = 0;
	var uLocal_11922 = 0;
	var uLocal_11923 = 0;
	var uLocal_11924 = 0;
	var uLocal_11925 = 0;
	var uLocal_11926 = 0;
	var uLocal_11927 = 0;
	var uLocal_11928 = 0;
	var uLocal_11929 = 0;
	var uLocal_11930 = 0;
	var uLocal_11931 = 0;
	var uLocal_11932 = 0;
	var uLocal_11933 = 0;
	var uLocal_11934 = 0;
	var uLocal_11935 = 0;
	var uLocal_11936 = 0;
	var uLocal_11937 = 0;
	var uLocal_11938 = 0;
	var uLocal_11939 = 0;
	var uLocal_11940 = 0;
	var uLocal_11941 = 0;
	var uLocal_11942 = 0;
	var uLocal_11943 = 0;
	var uLocal_11944 = 0;
	var uLocal_11945 = 0;
	var uLocal_11946 = 0;
	var uLocal_11947 = 0;
	var uLocal_11948 = 0;
	var uLocal_11949 = 0;
	var uLocal_11950 = 0;
	var uLocal_11951 = 0;
	var uLocal_11952 = 0;
	var uLocal_11953 = 0;
	var uLocal_11954 = 0;
	var uLocal_11955 = 0;
	var uLocal_11956 = 0;
	var uLocal_11957 = 0;
	var uLocal_11958 = 0;
	var uLocal_11959 = 0;
	var uLocal_11960 = 0;
	var uLocal_11961 = 0;
	var uLocal_11962 = 0;
	var uLocal_11963 = 0;
	var uLocal_11964 = 0;
	var uLocal_11965 = 0;
	var uLocal_11966 = 0;
	var uLocal_11967 = 0;
	var uLocal_11968 = 0;
	var uLocal_11969 = 0;
	var uLocal_11970 = 0;
	var uLocal_11971 = 0;
	var uLocal_11972 = 0;
	var uLocal_11973 = 0;
	var uLocal_11974 = 0;
	var uLocal_11975 = 0;
	var uLocal_11976 = 0;
	var uLocal_11977 = 0;
	var uLocal_11978 = 0;
	var uLocal_11979 = 0;
	var uLocal_11980 = 0;
	var uLocal_11981 = 0;
	var uLocal_11982 = 0;
	var uLocal_11983 = 0;
	var uLocal_11984 = 0;
	var uLocal_11985 = 0;
	var uLocal_11986 = 0;
	var uLocal_11987 = 0;
	var uLocal_11988 = 0;
	var uLocal_11989 = 0;
	var uLocal_11990 = 0;
	var uLocal_11991 = 0;
	var uLocal_11992 = 0;
	var uLocal_11993 = 0;
	var uLocal_11994 = 0;
	var uLocal_11995 = 0;
	var uLocal_11996 = 0;
	var uLocal_11997 = 0;
	var uLocal_11998 = 0;
	var uLocal_11999 = 0;
	var uLocal_12000 = 0;
	var uLocal_12001 = 0;
	var uLocal_12002 = 0;
	var uLocal_12003 = 0;
	var uLocal_12004 = 0;
	var uLocal_12005 = 0;
	var uLocal_12006 = 0;
	var uLocal_12007 = 0;
	var uLocal_12008 = 0;
	var uLocal_12009 = 0;
	var uLocal_12010 = 0;
	var uLocal_12011 = 0;
	var uLocal_12012 = 0;
	var uLocal_12013 = 0;
	var uLocal_12014 = 0;
	var uLocal_12015 = 0;
	var uLocal_12016 = 0;
	var uLocal_12017 = 0;
	var uLocal_12018 = 0;
	var uLocal_12019 = 0;
	var uLocal_12020 = 0;
	var uLocal_12021 = 0;
	var uLocal_12022 = 0;
	var uLocal_12023 = 0;
	var uLocal_12024 = 0;
	var uLocal_12025 = 0;
	var uLocal_12026 = 0;
	var uLocal_12027 = 0;
	var uLocal_12028 = 0;
	var uLocal_12029 = 0;
	var uLocal_12030 = 0;
	var uLocal_12031 = 0;
	var uLocal_12032 = 0;
	var uLocal_12033 = 0;
	var uLocal_12034 = 0;
	var uLocal_12035 = 0;
	var uLocal_12036 = 0;
	var uLocal_12037 = 0;
	var uLocal_12038 = 0;
	var uLocal_12039 = 0;
	var uLocal_12040 = 0;
	var uLocal_12041 = 0;
	var uLocal_12042 = 0;
	var uLocal_12043 = 0;
	var uLocal_12044 = 0;
	var uLocal_12045 = 0;
	var uLocal_12046 = 0;
	var uLocal_12047 = 0;
	var uLocal_12048 = 0;
	var uLocal_12049 = 0;
	var uLocal_12050 = 0;
	var uLocal_12051 = 0;
	var uLocal_12052 = 0;
	var uLocal_12053 = 0;
	var uLocal_12054 = 0;
	var uLocal_12055 = 0;
	var uLocal_12056 = 0;
	var uLocal_12057 = 0;
	var uLocal_12058 = 0;
	var uLocal_12059 = 0;
	var uLocal_12060 = 0;
	var uLocal_12061 = 0;
	var uLocal_12062 = 0;
	var uLocal_12063 = 0;
	var uLocal_12064 = 0;
	var uLocal_12065 = 0;
	var uLocal_12066 = 0;
	var uLocal_12067 = 0;
	var uLocal_12068 = 0;
	var uLocal_12069 = 0;
	var uLocal_12070 = 0;
	var uLocal_12071 = 0;
	var uLocal_12072 = 0;
	var uLocal_12073 = 0;
	var uLocal_12074 = 0;
	var uLocal_12075 = 0;
	var uLocal_12076 = 0;
	var uLocal_12077 = 0;
	var uLocal_12078 = 0;
	var uLocal_12079 = 0;
	var uLocal_12080 = 0;
	var uLocal_12081 = 0;
	var uLocal_12082 = 0;
	var uLocal_12083 = 0;
	var uLocal_12084 = 0;
	var uLocal_12085 = 0;
	var uLocal_12086 = 0;
	var uLocal_12087 = 0;
	var uLocal_12088 = 0;
	var uLocal_12089 = 0;
	var uLocal_12090 = 0;
	var uLocal_12091 = 0;
	var uLocal_12092 = 0;
	var uLocal_12093 = 0;
	var uLocal_12094 = 0;
	var uLocal_12095 = 0;
	var uLocal_12096 = 0;
	var uLocal_12097 = 0;
	var uLocal_12098 = 0;
	var uLocal_12099 = 0;
	var uLocal_12100 = 0;
	var uLocal_12101 = 0;
	var uLocal_12102 = 0;
	var uLocal_12103 = 0;
	var uLocal_12104 = 0;
	var uLocal_12105 = 0;
	var uLocal_12106 = 0;
	var uLocal_12107 = 0;
	var uLocal_12108 = 0;
	var uLocal_12109 = 0;
	var uLocal_12110 = 0;
	var uLocal_12111 = 0;
	var uLocal_12112 = 0;
	var uLocal_12113 = 0;
	var uLocal_12114 = 0;
	var uLocal_12115 = 0;
	var uLocal_12116 = 0;
	var uLocal_12117 = 0;
	var uLocal_12118 = 0;
	var uLocal_12119 = 0;
	var uLocal_12120 = 0;
	var uLocal_12121 = 0;
	var uLocal_12122 = 0;
	var uLocal_12123 = 0;
	var uLocal_12124 = 0;
	var uLocal_12125 = 0;
	var uLocal_12126 = 0;
	var uLocal_12127 = 0;
	var uLocal_12128 = 0;
	var uLocal_12129 = 0;
	var uLocal_12130 = 0;
	var uLocal_12131 = 0;
	var uLocal_12132 = 0;
	var uLocal_12133 = 0;
	var uLocal_12134 = 0;
	var uLocal_12135 = 0;
	var uLocal_12136 = 0;
	var uLocal_12137 = 0;
	var uLocal_12138 = 0;
	var uLocal_12139 = 0;
	var uLocal_12140 = 0;
	var uLocal_12141 = 0;
	var uLocal_12142 = 0;
	var uLocal_12143 = 0;
	var uLocal_12144 = 0;
	var uLocal_12145 = 0;
	var uLocal_12146 = 0;
	var uLocal_12147 = 0;
	var uLocal_12148 = 0;
	var uLocal_12149 = 0;
	var uLocal_12150 = 0;
	var uLocal_12151 = 0;
	var uLocal_12152 = 0;
	var uLocal_12153 = 0;
	var uLocal_12154 = 0;
	var uLocal_12155 = 0;
	var uLocal_12156 = 0;
	var uLocal_12157 = 0;
	var uLocal_12158 = 0;
	var uLocal_12159 = 0;
	var uLocal_12160 = 0;
	var uLocal_12161 = 0;
	var uLocal_12162 = 40;
	var uLocal_12163 = 0;
	var uLocal_12164 = 0;
	var uLocal_12165 = 0;
	var uLocal_12166 = 0;
	var uLocal_12167 = 0;
	var uLocal_12168 = 0;
	var uLocal_12169 = 0;
	var uLocal_12170 = 0;
	var uLocal_12171 = 0;
	var uLocal_12172 = 0;
	var uLocal_12173 = 0;
	var uLocal_12174 = 0;
	var uLocal_12175 = 0;
	var uLocal_12176 = 0;
	var uLocal_12177 = 0;
	var uLocal_12178 = 0;
	var uLocal_12179 = 0;
	var uLocal_12180 = 0;
	var uLocal_12181 = 0;
	var uLocal_12182 = 0;
	var uLocal_12183 = 0;
	var uLocal_12184 = 0;
	var uLocal_12185 = 0;
	var uLocal_12186 = 0;
	var uLocal_12187 = 0;
	var uLocal_12188 = 0;
	var uLocal_12189 = 0;
	var uLocal_12190 = 0;
	var uLocal_12191 = 0;
	var uLocal_12192 = 0;
	var uLocal_12193 = 0;
	var uLocal_12194 = 0;
	var uLocal_12195 = 0;
	var uLocal_12196 = 0;
	var uLocal_12197 = 0;
	var uLocal_12198 = 0;
	var uLocal_12199 = 0;
	var uLocal_12200 = 0;
	var uLocal_12201 = 0;
	var uLocal_12202 = 0;
	var uLocal_12203 = 0;
	var uLocal_12204 = 0;
	var uLocal_12205 = 0;
	var uLocal_12206 = 0;
	var uLocal_12207 = 0;
	var uLocal_12208 = 0;
	var uLocal_12209 = 0;
	var uLocal_12210 = 0;
	var uLocal_12211 = 0;
	var uLocal_12212 = 0;
	var uLocal_12213 = 0;
	var uLocal_12214 = 0;
	var uLocal_12215 = 0;
	var uLocal_12216 = 0;
	var uLocal_12217 = 0;
	var uLocal_12218 = 0;
	var uLocal_12219 = 0;
	var uLocal_12220 = 0;
	var uLocal_12221 = 0;
	var uLocal_12222 = 0;
	var uLocal_12223 = 0;
	var uLocal_12224 = 0;
	var uLocal_12225 = 0;
	var uLocal_12226 = 0;
	var uLocal_12227 = 0;
	var uLocal_12228 = 0;
	var uLocal_12229 = 0;
	var uLocal_12230 = 0;
	var uLocal_12231 = 0;
	var uLocal_12232 = 0;
	var uLocal_12233 = 0;
	var uLocal_12234 = 0;
	var uLocal_12235 = 0;
	var uLocal_12236 = 0;
	var uLocal_12237 = 0;
	var uLocal_12238 = 0;
	var uLocal_12239 = 0;
	var uLocal_12240 = 0;
	var uLocal_12241 = 0;
	var uLocal_12242 = 0;
	var uLocal_12243 = 0;
	var uLocal_12244 = 0;
	var uLocal_12245 = 0;
	var uLocal_12246 = 0;
	var uLocal_12247 = 0;
	var uLocal_12248 = 0;
	var uLocal_12249 = 0;
	var uLocal_12250 = 0;
	var uLocal_12251 = 0;
	var uLocal_12252 = 0;
	var uLocal_12253 = 0;
	var uLocal_12254 = 0;
	var uLocal_12255 = 0;
	var uLocal_12256 = 0;
	var uLocal_12257 = 0;
	var uLocal_12258 = 0;
	var uLocal_12259 = 0;
	var uLocal_12260 = 0;
	var uLocal_12261 = 0;
	var uLocal_12262 = 0;
	var uLocal_12263 = 0;
	var uLocal_12264 = 0;
	var uLocal_12265 = 0;
	var uLocal_12266 = 0;
	var uLocal_12267 = 0;
	var uLocal_12268 = 0;
	var uLocal_12269 = 0;
	var uLocal_12270 = 0;
	var uLocal_12271 = 0;
	var uLocal_12272 = 0;
	var uLocal_12273 = 0;
	var uLocal_12274 = 0;
	var uLocal_12275 = 0;
	var uLocal_12276 = 0;
	var uLocal_12277 = 0;
	var uLocal_12278 = 0;
	var uLocal_12279 = 0;
	var uLocal_12280 = 0;
	var uLocal_12281 = 0;
	var uLocal_12282 = 0;
	var uLocal_12283 = 0;
	var uLocal_12284 = 0;
	var uLocal_12285 = 0;
	var uLocal_12286 = 0;
	var uLocal_12287 = 0;
	var uLocal_12288 = 0;
	var uLocal_12289 = 0;
	var uLocal_12290 = 0;
	var uLocal_12291 = 0;
	var uLocal_12292 = 0;
	var uLocal_12293 = 0;
	var uLocal_12294 = 0;
	var uLocal_12295 = 0;
	var uLocal_12296 = 0;
	var uLocal_12297 = 0;
	var uLocal_12298 = 0;
	var uLocal_12299 = 0;
	var uLocal_12300 = 0;
	var uLocal_12301 = 0;
	var uLocal_12302 = 0;
	var uLocal_12303 = 0;
	var uLocal_12304 = 0;
	var uLocal_12305 = 0;
	var uLocal_12306 = 0;
	var uLocal_12307 = 0;
	var uLocal_12308 = 0;
	var uLocal_12309 = 0;
	var uLocal_12310 = 0;
	var uLocal_12311 = 0;
	var uLocal_12312 = 0;
	var uLocal_12313 = 0;
	var uLocal_12314 = 0;
	var uLocal_12315 = 0;
	var uLocal_12316 = 0;
	var uLocal_12317 = 0;
	var uLocal_12318 = 0;
	var uLocal_12319 = 0;
	var uLocal_12320 = 0;
	var uLocal_12321 = 0;
	var uLocal_12322 = 0;
	var uLocal_12323 = 0;
	var uLocal_12324 = 0;
	var uLocal_12325 = 0;
	var uLocal_12326 = 0;
	var uLocal_12327 = 0;
	var uLocal_12328 = 0;
	var uLocal_12329 = 0;
	var uLocal_12330 = 0;
	var uLocal_12331 = 0;
	var uLocal_12332 = 0;
	var uLocal_12333 = 0;
	var uLocal_12334 = 0;
	var uLocal_12335 = 0;
	var uLocal_12336 = 0;
	var uLocal_12337 = 0;
	var uLocal_12338 = 0;
	var uLocal_12339 = 0;
	var uLocal_12340 = 0;
	var uLocal_12341 = 0;
	var uLocal_12342 = 0;
	var uLocal_12343 = 0;
	var uLocal_12344 = 0;
	var uLocal_12345 = 0;
	var uLocal_12346 = 0;
	var uLocal_12347 = 0;
	var uLocal_12348 = 0;
	var uLocal_12349 = 0;
	var uLocal_12350 = 0;
	var uLocal_12351 = 0;
	var uLocal_12352 = 0;
	var uLocal_12353 = 0;
	var uLocal_12354 = 0;
	var uLocal_12355 = 0;
	var uLocal_12356 = 0;
	var uLocal_12357 = 0;
	var uLocal_12358 = 0;
	var uLocal_12359 = 0;
	var uLocal_12360 = 0;
	var uLocal_12361 = 0;
	var uLocal_12362 = 0;
	var uLocal_12363 = 0;
	var uLocal_12364 = 0;
	var uLocal_12365 = 0;
	var uLocal_12366 = 0;
	var uLocal_12367 = 0;
	var uLocal_12368 = 0;
	var uLocal_12369 = 0;
	var uLocal_12370 = 0;
	var uLocal_12371 = 0;
	var uLocal_12372 = 0;
	var uLocal_12373 = 0;
	var uLocal_12374 = 0;
	var uLocal_12375 = 0;
	var uLocal_12376 = 0;
	var uLocal_12377 = 0;
	var uLocal_12378 = 0;
	var uLocal_12379 = 0;
	var uLocal_12380 = 0;
	var uLocal_12381 = 0;
	var uLocal_12382 = 0;
	var uLocal_12383 = 0;
	var uLocal_12384 = 0;
	var uLocal_12385 = 0;
	var uLocal_12386 = 0;
	var uLocal_12387 = 0;
	var uLocal_12388 = 0;
	var uLocal_12389 = 0;
	var uLocal_12390 = 0;
	var uLocal_12391 = 0;
	var uLocal_12392 = 0;
	var uLocal_12393 = 0;
	var uLocal_12394 = 0;
	var uLocal_12395 = 0;
	var uLocal_12396 = 0;
	var uLocal_12397 = 0;
	var uLocal_12398 = 0;
	var uLocal_12399 = 0;
	var uLocal_12400 = 0;
	var uLocal_12401 = 0;
	var uLocal_12402 = 0;
	var uLocal_12403 = 0;
	var uLocal_12404 = 0;
	var uLocal_12405 = 0;
	var uLocal_12406 = 0;
	var uLocal_12407 = 0;
	var uLocal_12408 = 0;
	var uLocal_12409 = 0;
	var uLocal_12410 = 0;
	var uLocal_12411 = 0;
	var uLocal_12412 = 0;
	var uLocal_12413 = 0;
	var uLocal_12414 = 0;
	var uLocal_12415 = 0;
	var uLocal_12416 = 0;
	var uLocal_12417 = 0;
	var uLocal_12418 = 0;
	var uLocal_12419 = 0;
	var uLocal_12420 = 0;
	var uLocal_12421 = 0;
	var uLocal_12422 = 0;
	var uLocal_12423 = 0;
	var uLocal_12424 = 0;
	var uLocal_12425 = 0;
	var uLocal_12426 = 0;
	var uLocal_12427 = 0;
	var uLocal_12428 = 0;
	var uLocal_12429 = 0;
	var uLocal_12430 = 0;
	var uLocal_12431 = 0;
	var uLocal_12432 = 0;
	var uLocal_12433 = 0;
	var uLocal_12434 = 0;
	var uLocal_12435 = 0;
	var uLocal_12436 = 0;
	var uLocal_12437 = 0;
	var uLocal_12438 = 0;
	var uLocal_12439 = 0;
	var uLocal_12440 = 0;
	var uLocal_12441 = 0;
	var uLocal_12442 = 0;
	var uLocal_12443 = 0;
	var uLocal_12444 = 0;
	var uLocal_12445 = 0;
	var uLocal_12446 = 0;
	var uLocal_12447 = 0;
	var uLocal_12448 = 0;
	var uLocal_12449 = 0;
	var uLocal_12450 = 0;
	var uLocal_12451 = 0;
	var uLocal_12452 = 0;
	var uLocal_12453 = 0;
	var uLocal_12454 = 0;
	var uLocal_12455 = 0;
	var uLocal_12456 = 0;
	var uLocal_12457 = 0;
	var uLocal_12458 = 0;
	var uLocal_12459 = 0;
	var uLocal_12460 = 0;
	var uLocal_12461 = 0;
	var uLocal_12462 = 0;
	var uLocal_12463 = 0;
	var uLocal_12464 = 0;
	var uLocal_12465 = 0;
	var uLocal_12466 = 0;
	var uLocal_12467 = 0;
	var uLocal_12468 = 0;
	var uLocal_12469 = 0;
	var uLocal_12470 = 0;
	var uLocal_12471 = 0;
	var uLocal_12472 = 0;
	var uLocal_12473 = 0;
	var uLocal_12474 = 0;
	var uLocal_12475 = 0;
	var uLocal_12476 = 0;
	var uLocal_12477 = 0;
	var uLocal_12478 = 0;
	var uLocal_12479 = 0;
	var uLocal_12480 = 0;
	var uLocal_12481 = 0;
	var uLocal_12482 = 0;
	var uLocal_12483 = 0;
	var uLocal_12484 = 0;
	var uLocal_12485 = 0;
	var uLocal_12486 = 0;
	var uLocal_12487 = 0;
	var uLocal_12488 = 0;
	var uLocal_12489 = 0;
	var uLocal_12490 = 0;
	var uLocal_12491 = 0;
	var uLocal_12492 = 0;
	var uLocal_12493 = 0;
	var uLocal_12494 = 0;
	var uLocal_12495 = 0;
	var uLocal_12496 = 0;
	var uLocal_12497 = 0;
	var uLocal_12498 = 0;
	var uLocal_12499 = 0;
	var uLocal_12500 = 0;
	var uLocal_12501 = 0;
	var uLocal_12502 = 0;
	var uLocal_12503 = 0;
	var uLocal_12504 = 0;
	var uLocal_12505 = 0;
	var uLocal_12506 = 0;
	var uLocal_12507 = 0;
	var uLocal_12508 = 0;
	var uLocal_12509 = 0;
	var uLocal_12510 = 0;
	var uLocal_12511 = 0;
	var uLocal_12512 = 0;
	var uLocal_12513 = 0;
	var uLocal_12514 = 0;
	var uLocal_12515 = 0;
	var uLocal_12516 = 0;
	var uLocal_12517 = 0;
	var uLocal_12518 = 0;
	var uLocal_12519 = 0;
	var uLocal_12520 = 0;
	var uLocal_12521 = 0;
	var uLocal_12522 = 0;
	var uLocal_12523 = 0;
	var uLocal_12524 = 0;
	var uLocal_12525 = 0;
	var uLocal_12526 = 0;
	var uLocal_12527 = 0;
	var uLocal_12528 = 0;
	var uLocal_12529 = 0;
	var uLocal_12530 = 0;
	var uLocal_12531 = 0;
	var uLocal_12532 = 0;
	var uLocal_12533 = 0;
	var uLocal_12534 = 0;
	var uLocal_12535 = 0;
	var uLocal_12536 = 0;
	var uLocal_12537 = 0;
	var uLocal_12538 = 0;
	var uLocal_12539 = 0;
	var uLocal_12540 = 0;
	var uLocal_12541 = 0;
	var uLocal_12542 = 0;
	var uLocal_12543 = 0;
	var uLocal_12544 = 0;
	var uLocal_12545 = 0;
	var uLocal_12546 = 0;
	var uLocal_12547 = 0;
	var uLocal_12548 = 0;
	var uLocal_12549 = 0;
	var uLocal_12550 = 0;
	var uLocal_12551 = 0;
	var uLocal_12552 = 0;
	var uLocal_12553 = 0;
	var uLocal_12554 = 0;
	var uLocal_12555 = 0;
	var uLocal_12556 = 0;
	var uLocal_12557 = 0;
	var uLocal_12558 = 0;
	var uLocal_12559 = 0;
	var uLocal_12560 = 0;
	var uLocal_12561 = 0;
	var uLocal_12562 = 0;
	var uLocal_12563 = 0;
	var uLocal_12564 = 0;
	var uLocal_12565 = 0;
	var uLocal_12566 = 0;
	var uLocal_12567 = 0;
	var uLocal_12568 = 0;
	var uLocal_12569 = 0;
	var uLocal_12570 = 0;
	var uLocal_12571 = 0;
	var uLocal_12572 = 0;
	var uLocal_12573 = 0;
	var uLocal_12574 = 0;
	var uLocal_12575 = 0;
	var uLocal_12576 = 0;
	var uLocal_12577 = 0;
	var uLocal_12578 = 0;
	var uLocal_12579 = 0;
	var uLocal_12580 = 0;
	var uLocal_12581 = 0;
	var uLocal_12582 = 0;
	var uLocal_12583 = 0;
	var uLocal_12584 = 0;
	var uLocal_12585 = 0;
	var uLocal_12586 = 0;
	var uLocal_12587 = 0;
	var uLocal_12588 = 0;
	var uLocal_12589 = 0;
	var uLocal_12590 = 0;
	var uLocal_12591 = 0;
	var uLocal_12592 = 0;
	var uLocal_12593 = 0;
	var uLocal_12594 = 0;
	var uLocal_12595 = 0;
	var uLocal_12596 = 0;
	var uLocal_12597 = 0;
	var uLocal_12598 = 0;
	var uLocal_12599 = 0;
	var uLocal_12600 = 0;
	var uLocal_12601 = 0;
	var uLocal_12602 = 0;
	var uLocal_12603 = 0;
	var uLocal_12604 = 0;
	var uLocal_12605 = 0;
	var uLocal_12606 = 0;
	var uLocal_12607 = 0;
	var uLocal_12608 = 0;
	var uLocal_12609 = 0;
	var uLocal_12610 = 0;
	var uLocal_12611 = 0;
	var uLocal_12612 = 0;
	var uLocal_12613 = 0;
	var uLocal_12614 = 0;
	var uLocal_12615 = 0;
	var uLocal_12616 = 0;
	var uLocal_12617 = 0;
	var uLocal_12618 = 0;
	var uLocal_12619 = 0;
	var uLocal_12620 = 0;
	var uLocal_12621 = 0;
	var uLocal_12622 = 0;
	var uLocal_12623 = 0;
	var uLocal_12624 = 0;
	var uLocal_12625 = 0;
	var uLocal_12626 = 0;
	var uLocal_12627 = 0;
	var uLocal_12628 = 0;
	var uLocal_12629 = 0;
	var uLocal_12630 = 0;
	var uLocal_12631 = 0;
	var uLocal_12632 = 0;
	var uLocal_12633 = 0;
	var uLocal_12634 = 0;
	var uLocal_12635 = 0;
	var uLocal_12636 = 0;
	var uLocal_12637 = 0;
	var uLocal_12638 = 0;
	var uLocal_12639 = 0;
	var uLocal_12640 = 0;
	var uLocal_12641 = 0;
	var uLocal_12642 = 0;
	var uLocal_12643 = 0;
	var uLocal_12644 = 0;
	var uLocal_12645 = 0;
	var uLocal_12646 = 0;
	var uLocal_12647 = 0;
	var uLocal_12648 = 0;
	var uLocal_12649 = 0;
	var uLocal_12650 = 0;
	var uLocal_12651 = 0;
	var uLocal_12652 = 0;
	var uLocal_12653 = 0;
	var uLocal_12654 = 0;
	var uLocal_12655 = 0;
	var uLocal_12656 = 0;
	var uLocal_12657 = 0;
	var uLocal_12658 = 0;
	var uLocal_12659 = 0;
	var uLocal_12660 = 0;
	var uLocal_12661 = 0;
	var uLocal_12662 = 0;
	var uLocal_12663 = 0;
	var uLocal_12664 = 0;
	var uLocal_12665 = 0;
	var uLocal_12666 = 0;
	var uLocal_12667 = 0;
	var uLocal_12668 = 0;
	var uLocal_12669 = 0;
	var uLocal_12670 = 0;
	var uLocal_12671 = 0;
	var uLocal_12672 = 0;
	var uLocal_12673 = 0;
	var uLocal_12674 = 0;
	var uLocal_12675 = 0;
	var uLocal_12676 = 0;
	var uLocal_12677 = 0;
	var uLocal_12678 = 0;
	var uLocal_12679 = 0;
	var uLocal_12680 = 0;
	var uLocal_12681 = 0;
	var uLocal_12682 = 0;
	var uLocal_12683 = 0;
	var uLocal_12684 = 0;
	var uLocal_12685 = 0;
	var uLocal_12686 = 0;
	var uLocal_12687 = 0;
	var uLocal_12688 = 0;
	var uLocal_12689 = 0;
	var uLocal_12690 = 0;
	var uLocal_12691 = 0;
	var uLocal_12692 = 0;
	var uLocal_12693 = 0;
	var uLocal_12694 = 0;
	var uLocal_12695 = 0;
	var uLocal_12696 = 0;
	var uLocal_12697 = 0;
	var uLocal_12698 = 0;
	var uLocal_12699 = 0;
	var uLocal_12700 = 0;
	var uLocal_12701 = 0;
	var uLocal_12702 = 0;
	var uLocal_12703 = 0;
	var uLocal_12704 = 0;
	var uLocal_12705 = 0;
	var uLocal_12706 = 0;
	var uLocal_12707 = 0;
	var uLocal_12708 = 0;
	var uLocal_12709 = 0;
	var uLocal_12710 = 0;
	var uLocal_12711 = 0;
	var uLocal_12712 = 0;
	var uLocal_12713 = 0;
	var uLocal_12714 = 0;
	var uLocal_12715 = 0;
	var uLocal_12716 = 0;
	var uLocal_12717 = 0;
	var uLocal_12718 = 0;
	var uLocal_12719 = 0;
	var uLocal_12720 = 0;
	var uLocal_12721 = 0;
	var uLocal_12722 = 0;
	var uLocal_12723 = 0;
	var uLocal_12724 = 0;
	var uLocal_12725 = 0;
	var uLocal_12726 = 0;
	var uLocal_12727 = 0;
	var uLocal_12728 = 0;
	var uLocal_12729 = 0;
	var uLocal_12730 = 0;
	var uLocal_12731 = 0;
	var uLocal_12732 = 0;
	var uLocal_12733 = 0;
	var uLocal_12734 = 0;
	var uLocal_12735 = 0;
	var uLocal_12736 = 0;
	var uLocal_12737 = 0;
	var uLocal_12738 = 0;
	var uLocal_12739 = 0;
	var uLocal_12740 = 0;
	var uLocal_12741 = 0;
	var uLocal_12742 = 0;
	var uLocal_12743 = 0;
	var uLocal_12744 = 0;
	var uLocal_12745 = 0;
	var uLocal_12746 = 0;
	var uLocal_12747 = 0;
	var uLocal_12748 = 0;
	var uLocal_12749 = 0;
	var uLocal_12750 = 0;
	var uLocal_12751 = 0;
	var uLocal_12752 = 0;
	var uLocal_12753 = 0;
	var uLocal_12754 = 0;
	var uLocal_12755 = 0;
	var uLocal_12756 = 0;
	var uLocal_12757 = 0;
	var uLocal_12758 = 0;
	var uLocal_12759 = 0;
	var uLocal_12760 = 0;
	var uLocal_12761 = 0;
	var uLocal_12762 = 0;
	var uLocal_12763 = 0;
	var uLocal_12764 = 0;
	var uLocal_12765 = 0;
	var uLocal_12766 = 0;
	var uLocal_12767 = 0;
	var uLocal_12768 = 0;
	var uLocal_12769 = 0;
	var uLocal_12770 = 0;
	var uLocal_12771 = 0;
	var uLocal_12772 = 0;
	var uLocal_12773 = 0;
	var uLocal_12774 = 0;
	var uLocal_12775 = 0;
	var uLocal_12776 = 0;
	var uLocal_12777 = 0;
	var uLocal_12778 = 0;
	var uLocal_12779 = 0;
	var uLocal_12780 = 0;
	var uLocal_12781 = 0;
	var uLocal_12782 = 0;
	var uLocal_12783 = 0;
	var uLocal_12784 = 0;
	var uLocal_12785 = 0;
	var uLocal_12786 = 0;
	var uLocal_12787 = 0;
	var uLocal_12788 = 0;
	var uLocal_12789 = 0;
	var uLocal_12790 = 0;
	var uLocal_12791 = 0;
	var uLocal_12792 = 0;
	var uLocal_12793 = 0;
	var uLocal_12794 = 0;
	var uLocal_12795 = 0;
	var uLocal_12796 = 0;
	var uLocal_12797 = 0;
	var uLocal_12798 = 0;
	var uLocal_12799 = 0;
	var uLocal_12800 = 0;
	var uLocal_12801 = 0;
	var uLocal_12802 = 0;
	var uLocal_12803 = 60;
	var uLocal_12804 = 0;
	var uLocal_12805 = 0;
	var uLocal_12806 = 0;
	var uLocal_12807 = 0;
	var uLocal_12808 = 0;
	var uLocal_12809 = 0;
	var uLocal_12810 = 0;
	var uLocal_12811 = 0;
	var uLocal_12812 = 0;
	var uLocal_12813 = 0;
	var uLocal_12814 = 0;
	var uLocal_12815 = 0;
	var uLocal_12816 = 0;
	var uLocal_12817 = 0;
	var uLocal_12818 = 0;
	var uLocal_12819 = 0;
	var uLocal_12820 = 0;
	var uLocal_12821 = 0;
	var uLocal_12822 = 0;
	var uLocal_12823 = 0;
	var uLocal_12824 = 0;
	var uLocal_12825 = 0;
	var uLocal_12826 = 0;
	var uLocal_12827 = 0;
	var uLocal_12828 = 0;
	var uLocal_12829 = 0;
	var uLocal_12830 = 0;
	var uLocal_12831 = 0;
	var uLocal_12832 = 0;
	var uLocal_12833 = 0;
	var uLocal_12834 = 0;
	var uLocal_12835 = 0;
	var uLocal_12836 = 0;
	var uLocal_12837 = 0;
	var uLocal_12838 = 0;
	var uLocal_12839 = 0;
	var uLocal_12840 = 0;
	var uLocal_12841 = 0;
	var uLocal_12842 = 0;
	var uLocal_12843 = 0;
	var uLocal_12844 = 0;
	var uLocal_12845 = 0;
	var uLocal_12846 = 0;
	var uLocal_12847 = 0;
	var uLocal_12848 = 0;
	var uLocal_12849 = 0;
	var uLocal_12850 = 0;
	var uLocal_12851 = 0;
	var uLocal_12852 = 0;
	var uLocal_12853 = 0;
	var uLocal_12854 = 0;
	var uLocal_12855 = 0;
	var uLocal_12856 = 0;
	var uLocal_12857 = 0;
	var uLocal_12858 = 0;
	var uLocal_12859 = 0;
	var uLocal_12860 = 0;
	var uLocal_12861 = 0;
	var uLocal_12862 = 0;
	var uLocal_12863 = 0;
	var uLocal_12864 = 0;
	var uLocal_12865 = 0;
	var uLocal_12866 = 0;
	var uLocal_12867 = 0;
	var uLocal_12868 = 0;
	var uLocal_12869 = 0;
	var uLocal_12870 = 0;
	var uLocal_12871 = 0;
	var uLocal_12872 = 0;
	var uLocal_12873 = 0;
	var uLocal_12874 = 0;
	var uLocal_12875 = 0;
	var uLocal_12876 = 0;
	var uLocal_12877 = 0;
	var uLocal_12878 = 0;
	var uLocal_12879 = 0;
	var uLocal_12880 = 0;
	var uLocal_12881 = 0;
	var uLocal_12882 = 0;
	var uLocal_12883 = 0;
	var uLocal_12884 = 0;
	var uLocal_12885 = 0;
	var uLocal_12886 = 0;
	var uLocal_12887 = 0;
	var uLocal_12888 = 0;
	var uLocal_12889 = 0;
	var uLocal_12890 = 0;
	var uLocal_12891 = 0;
	var uLocal_12892 = 0;
	var uLocal_12893 = 0;
	var uLocal_12894 = 0;
	var uLocal_12895 = 0;
	var uLocal_12896 = 0;
	var uLocal_12897 = 0;
	var uLocal_12898 = 0;
	var uLocal_12899 = 0;
	var uLocal_12900 = 0;
	var uLocal_12901 = 0;
	var uLocal_12902 = 0;
	var uLocal_12903 = 0;
	var uLocal_12904 = 0;
	var uLocal_12905 = 0;
	var uLocal_12906 = 0;
	var uLocal_12907 = 0;
	var uLocal_12908 = 0;
	var uLocal_12909 = 0;
	var uLocal_12910 = 0;
	var uLocal_12911 = 0;
	var uLocal_12912 = 0;
	var uLocal_12913 = 0;
	var uLocal_12914 = 0;
	var uLocal_12915 = 0;
	var uLocal_12916 = 0;
	var uLocal_12917 = 0;
	var uLocal_12918 = 0;
	var uLocal_12919 = 0;
	var uLocal_12920 = 0;
	var uLocal_12921 = 0;
	var uLocal_12922 = 0;
	var uLocal_12923 = 0;
	var uLocal_12924 = 0;
	var uLocal_12925 = 0;
	var uLocal_12926 = 0;
	var uLocal_12927 = 0;
	var uLocal_12928 = 0;
	var uLocal_12929 = 0;
	var uLocal_12930 = 0;
	var uLocal_12931 = 0;
	var uLocal_12932 = 0;
	var uLocal_12933 = 0;
	var uLocal_12934 = 0;
	var uLocal_12935 = 0;
	var uLocal_12936 = 0;
	var uLocal_12937 = 0;
	var uLocal_12938 = 0;
	var uLocal_12939 = 0;
	var uLocal_12940 = 0;
	var uLocal_12941 = 0;
	var uLocal_12942 = 0;
	var uLocal_12943 = 0;
	var uLocal_12944 = 0;
	var uLocal_12945 = 0;
	var uLocal_12946 = 0;
	var uLocal_12947 = 0;
	var uLocal_12948 = 0;
	var uLocal_12949 = 0;
	var uLocal_12950 = 0;
	var uLocal_12951 = 0;
	var uLocal_12952 = 0;
	var uLocal_12953 = 0;
	var uLocal_12954 = 0;
	var uLocal_12955 = 0;
	var uLocal_12956 = 0;
	var uLocal_12957 = 0;
	var uLocal_12958 = 0;
	var uLocal_12959 = 0;
	var uLocal_12960 = 0;
	var uLocal_12961 = 0;
	var uLocal_12962 = 0;
	var uLocal_12963 = 0;
	var uLocal_12964 = 0;
	var uLocal_12965 = 0;
	var uLocal_12966 = 0;
	var uLocal_12967 = 0;
	var uLocal_12968 = 0;
	var uLocal_12969 = 0;
	var uLocal_12970 = 0;
	var uLocal_12971 = 0;
	var uLocal_12972 = 0;
	var uLocal_12973 = 0;
	var uLocal_12974 = 0;
	var uLocal_12975 = 0;
	var uLocal_12976 = 0;
	var uLocal_12977 = 0;
	var uLocal_12978 = 0;
	var uLocal_12979 = 0;
	var uLocal_12980 = 0;
	var uLocal_12981 = 0;
	var uLocal_12982 = 0;
	var uLocal_12983 = 0;
	var uLocal_12984 = 0;
	var uLocal_12985 = 0;
	var uLocal_12986 = 0;
	var uLocal_12987 = 0;
	var uLocal_12988 = 0;
	var uLocal_12989 = 0;
	var uLocal_12990 = 0;
	var uLocal_12991 = 0;
	var uLocal_12992 = 0;
	var uLocal_12993 = 0;
	var uLocal_12994 = 0;
	var uLocal_12995 = 0;
	var uLocal_12996 = 0;
	var uLocal_12997 = 0;
	var uLocal_12998 = 0;
	var uLocal_12999 = 0;
	var uLocal_13000 = 0;
	var uLocal_13001 = 0;
	var uLocal_13002 = 0;
	var uLocal_13003 = 0;
	var uLocal_13004 = 0;
	var uLocal_13005 = 0;
	var uLocal_13006 = 0;
	var uLocal_13007 = 0;
	var uLocal_13008 = 0;
	var uLocal_13009 = 0;
	var uLocal_13010 = 0;
	var uLocal_13011 = 0;
	var uLocal_13012 = 0;
	var uLocal_13013 = 0;
	var uLocal_13014 = 0;
	var uLocal_13015 = 0;
	var uLocal_13016 = 0;
	var uLocal_13017 = 0;
	var uLocal_13018 = 0;
	var uLocal_13019 = 0;
	var uLocal_13020 = 0;
	var uLocal_13021 = 0;
	var uLocal_13022 = 0;
	var uLocal_13023 = 0;
	var uLocal_13024 = 0;
	var uLocal_13025 = 0;
	var uLocal_13026 = 0;
	var uLocal_13027 = 0;
	var uLocal_13028 = 0;
	var uLocal_13029 = 0;
	var uLocal_13030 = 0;
	var uLocal_13031 = 0;
	var uLocal_13032 = 0;
	var uLocal_13033 = 0;
	var uLocal_13034 = 0;
	var uLocal_13035 = 0;
	var uLocal_13036 = 0;
	var uLocal_13037 = 0;
	var uLocal_13038 = 0;
	var uLocal_13039 = 0;
	var uLocal_13040 = 0;
	var uLocal_13041 = 0;
	var uLocal_13042 = 0;
	var uLocal_13043 = 0;
	var uLocal_13044 = 0;
	var uLocal_13045 = 0;
	var uLocal_13046 = 0;
	var uLocal_13047 = 0;
	var uLocal_13048 = 0;
	var uLocal_13049 = 0;
	var uLocal_13050 = 0;
	var uLocal_13051 = 0;
	var uLocal_13052 = 0;
	var uLocal_13053 = 0;
	var uLocal_13054 = 0;
	var uLocal_13055 = 0;
	var uLocal_13056 = 0;
	var uLocal_13057 = 0;
	var uLocal_13058 = 0;
	var uLocal_13059 = 0;
	var uLocal_13060 = 0;
	var uLocal_13061 = 0;
	var uLocal_13062 = 0;
	var uLocal_13063 = 0;
	var uLocal_13064 = 0;
	var uLocal_13065 = 0;
	var uLocal_13066 = 0;
	var uLocal_13067 = 0;
	var uLocal_13068 = 0;
	var uLocal_13069 = 0;
	var uLocal_13070 = 0;
	var uLocal_13071 = 0;
	var uLocal_13072 = 0;
	var uLocal_13073 = 0;
	var uLocal_13074 = 0;
	var uLocal_13075 = 0;
	var uLocal_13076 = 0;
	var uLocal_13077 = 0;
	var uLocal_13078 = 0;
	var uLocal_13079 = 0;
	var uLocal_13080 = 0;
	var uLocal_13081 = 0;
	var uLocal_13082 = 0;
	var uLocal_13083 = 0;
	var uLocal_13084 = 0;
	var uLocal_13085 = 0;
	var uLocal_13086 = 0;
	var uLocal_13087 = 0;
	var uLocal_13088 = 0;
	var uLocal_13089 = 0;
	var uLocal_13090 = 0;
	var uLocal_13091 = 0;
	var uLocal_13092 = 0;
	var uLocal_13093 = 0;
	var uLocal_13094 = 0;
	var uLocal_13095 = 0;
	var uLocal_13096 = 0;
	var uLocal_13097 = 0;
	var uLocal_13098 = 0;
	var uLocal_13099 = 0;
	var uLocal_13100 = 0;
	var uLocal_13101 = 0;
	var uLocal_13102 = 0;
	var uLocal_13103 = 0;
	var uLocal_13104 = 0;
	var uLocal_13105 = 0;
	var uLocal_13106 = 0;
	var uLocal_13107 = 0;
	var uLocal_13108 = 0;
	var uLocal_13109 = 0;
	var uLocal_13110 = 0;
	var uLocal_13111 = 0;
	var uLocal_13112 = 0;
	var uLocal_13113 = 0;
	var uLocal_13114 = 0;
	var uLocal_13115 = 0;
	var uLocal_13116 = 0;
	var uLocal_13117 = 0;
	var uLocal_13118 = 0;
	var uLocal_13119 = 0;
	var uLocal_13120 = 0;
	var uLocal_13121 = 0;
	var uLocal_13122 = 0;
	var uLocal_13123 = 0;
	var uLocal_13124 = 0;
	var uLocal_13125 = 0;
	var uLocal_13126 = 0;
	var uLocal_13127 = 0;
	var uLocal_13128 = 0;
	var uLocal_13129 = 0;
	var uLocal_13130 = 0;
	var uLocal_13131 = 0;
	var uLocal_13132 = 0;
	var uLocal_13133 = 0;
	var uLocal_13134 = 0;
	var uLocal_13135 = 0;
	var uLocal_13136 = 0;
	var uLocal_13137 = 0;
	var uLocal_13138 = 0;
	var uLocal_13139 = 0;
	var uLocal_13140 = 0;
	var uLocal_13141 = 0;
	var uLocal_13142 = 0;
	var uLocal_13143 = 0;
	var uLocal_13144 = 0;
	var uLocal_13145 = 0;
	var uLocal_13146 = 0;
	var uLocal_13147 = 0;
	var uLocal_13148 = 0;
	var uLocal_13149 = 0;
	var uLocal_13150 = 0;
	var uLocal_13151 = 0;
	var uLocal_13152 = 0;
	var uLocal_13153 = 0;
	var uLocal_13154 = 0;
	var uLocal_13155 = 0;
	var uLocal_13156 = 0;
	var uLocal_13157 = 0;
	var uLocal_13158 = 0;
	var uLocal_13159 = 0;
	var uLocal_13160 = 0;
	var uLocal_13161 = 0;
	var uLocal_13162 = 0;
	var uLocal_13163 = 0;
	var uLocal_13164 = 0;
	var uLocal_13165 = 0;
	var uLocal_13166 = 0;
	var uLocal_13167 = 0;
	var uLocal_13168 = 0;
	var uLocal_13169 = 0;
	var uLocal_13170 = 0;
	var uLocal_13171 = 0;
	var uLocal_13172 = 0;
	var uLocal_13173 = 0;
	var uLocal_13174 = 0;
	var uLocal_13175 = 0;
	var uLocal_13176 = 0;
	var uLocal_13177 = 0;
	var uLocal_13178 = 0;
	var uLocal_13179 = 0;
	var uLocal_13180 = 0;
	var uLocal_13181 = 0;
	var uLocal_13182 = 0;
	var uLocal_13183 = 0;
	var uLocal_13184 = 0;
	var uLocal_13185 = 0;
	var uLocal_13186 = 0;
	var uLocal_13187 = 0;
	var uLocal_13188 = 0;
	var uLocal_13189 = 0;
	var uLocal_13190 = 0;
	var uLocal_13191 = 0;
	var uLocal_13192 = 0;
	var uLocal_13193 = 0;
	var uLocal_13194 = 0;
	var uLocal_13195 = 0;
	var uLocal_13196 = 0;
	var uLocal_13197 = 0;
	var uLocal_13198 = 0;
	var uLocal_13199 = 0;
	var uLocal_13200 = 0;
	var uLocal_13201 = 0;
	var uLocal_13202 = 0;
	var uLocal_13203 = 0;
	var uLocal_13204 = 0;
	var uLocal_13205 = 0;
	var uLocal_13206 = 0;
	var uLocal_13207 = 0;
	var uLocal_13208 = 0;
	var uLocal_13209 = 0;
	var uLocal_13210 = 0;
	var uLocal_13211 = 0;
	var uLocal_13212 = 0;
	var uLocal_13213 = 0;
	var uLocal_13214 = 0;
	var uLocal_13215 = 0;
	var uLocal_13216 = 0;
	var uLocal_13217 = 0;
	var uLocal_13218 = 0;
	var uLocal_13219 = 0;
	var uLocal_13220 = 0;
	var uLocal_13221 = 0;
	var uLocal_13222 = 0;
	var uLocal_13223 = 0;
	var uLocal_13224 = 0;
	var uLocal_13225 = 0;
	var uLocal_13226 = 0;
	var uLocal_13227 = 0;
	var uLocal_13228 = 0;
	var uLocal_13229 = 0;
	var uLocal_13230 = 0;
	var uLocal_13231 = 0;
	var uLocal_13232 = 0;
	var uLocal_13233 = 0;
	var uLocal_13234 = 0;
	var uLocal_13235 = 0;
	var uLocal_13236 = 0;
	var uLocal_13237 = 0;
	var uLocal_13238 = 0;
	var uLocal_13239 = 0;
	var uLocal_13240 = 0;
	var uLocal_13241 = 0;
	var uLocal_13242 = 0;
	var uLocal_13243 = 0;
	var uLocal_13244 = 0;
	var uLocal_13245 = 0;
	var uLocal_13246 = 0;
	var uLocal_13247 = 0;
	var uLocal_13248 = 0;
	var uLocal_13249 = 0;
	var uLocal_13250 = 0;
	var uLocal_13251 = 0;
	var uLocal_13252 = 0;
	var uLocal_13253 = 0;
	var uLocal_13254 = 0;
	var uLocal_13255 = 0;
	var uLocal_13256 = 0;
	var uLocal_13257 = 0;
	var uLocal_13258 = 0;
	var uLocal_13259 = 0;
	var uLocal_13260 = 0;
	var uLocal_13261 = 0;
	var uLocal_13262 = 0;
	var uLocal_13263 = 0;
	var uLocal_13264 = 0;
	var uLocal_13265 = 0;
	var uLocal_13266 = 0;
	var uLocal_13267 = 0;
	var uLocal_13268 = 0;
	var uLocal_13269 = 0;
	var uLocal_13270 = 0;
	var uLocal_13271 = 0;
	var uLocal_13272 = 0;
	var uLocal_13273 = 0;
	var uLocal_13274 = 0;
	var uLocal_13275 = 0;
	var uLocal_13276 = 0;
	var uLocal_13277 = 0;
	var uLocal_13278 = 0;
	var uLocal_13279 = 0;
	var uLocal_13280 = 0;
	var uLocal_13281 = 0;
	var uLocal_13282 = 0;
	var uLocal_13283 = 0;
	var uLocal_13284 = 0;
	var uLocal_13285 = 0;
	var uLocal_13286 = 0;
	var uLocal_13287 = 0;
	var uLocal_13288 = 0;
	var uLocal_13289 = 0;
	var uLocal_13290 = 0;
	var uLocal_13291 = 0;
	var uLocal_13292 = 0;
	var uLocal_13293 = 0;
	var uLocal_13294 = 0;
	var uLocal_13295 = 0;
	var uLocal_13296 = 0;
	var uLocal_13297 = 0;
	var uLocal_13298 = 0;
	var uLocal_13299 = 0;
	var uLocal_13300 = 0;
	var uLocal_13301 = 0;
	var uLocal_13302 = 0;
	var uLocal_13303 = 0;
	var uLocal_13304 = 0;
	var uLocal_13305 = 0;
	var uLocal_13306 = 0;
	var uLocal_13307 = 0;
	var uLocal_13308 = 0;
	var uLocal_13309 = 0;
	var uLocal_13310 = 0;
	var uLocal_13311 = 0;
	var uLocal_13312 = 0;
	var uLocal_13313 = 0;
	var uLocal_13314 = 0;
	var uLocal_13315 = 0;
	var uLocal_13316 = 0;
	var uLocal_13317 = 0;
	var uLocal_13318 = 0;
	var uLocal_13319 = 0;
	var uLocal_13320 = 0;
	var uLocal_13321 = 0;
	var uLocal_13322 = 0;
	var uLocal_13323 = 0;
	var uLocal_13324 = 0;
	var uLocal_13325 = 0;
	var uLocal_13326 = 0;
	var uLocal_13327 = 0;
	var uLocal_13328 = 0;
	var uLocal_13329 = 0;
	var uLocal_13330 = 0;
	var uLocal_13331 = 0;
	var uLocal_13332 = 0;
	var uLocal_13333 = 0;
	var uLocal_13334 = 0;
	var uLocal_13335 = 0;
	var uLocal_13336 = 0;
	var uLocal_13337 = 0;
	var uLocal_13338 = 0;
	var uLocal_13339 = 0;
	var uLocal_13340 = 0;
	var uLocal_13341 = 0;
	var uLocal_13342 = 0;
	var uLocal_13343 = 0;
	var uLocal_13344 = 0;
	var uLocal_13345 = 0;
	var uLocal_13346 = 0;
	var uLocal_13347 = 0;
	var uLocal_13348 = 0;
	var uLocal_13349 = 0;
	var uLocal_13350 = 0;
	var uLocal_13351 = 0;
	var uLocal_13352 = 0;
	var uLocal_13353 = 0;
	var uLocal_13354 = 0;
	var uLocal_13355 = 0;
	var uLocal_13356 = 0;
	var uLocal_13357 = 0;
	var uLocal_13358 = 0;
	var uLocal_13359 = 0;
	var uLocal_13360 = 0;
	var uLocal_13361 = 0;
	var uLocal_13362 = 0;
	var uLocal_13363 = 0;
	var uLocal_13364 = 0;
	var uLocal_13365 = 0;
	var uLocal_13366 = 0;
	var uLocal_13367 = 0;
	var uLocal_13368 = 0;
	var uLocal_13369 = 0;
	var uLocal_13370 = 0;
	var uLocal_13371 = 0;
	var uLocal_13372 = 0;
	var uLocal_13373 = 0;
	var uLocal_13374 = 0;
	var uLocal_13375 = 0;
	var uLocal_13376 = 0;
	var uLocal_13377 = 0;
	var uLocal_13378 = 0;
	var uLocal_13379 = 0;
	var uLocal_13380 = 0;
	var uLocal_13381 = 0;
	var uLocal_13382 = 0;
	var uLocal_13383 = 0;
	var uLocal_13384 = 0;
	var uLocal_13385 = 0;
	var uLocal_13386 = 0;
	var uLocal_13387 = 0;
	var uLocal_13388 = 0;
	var uLocal_13389 = 0;
	var uLocal_13390 = 0;
	var uLocal_13391 = 0;
	var uLocal_13392 = 0;
	var uLocal_13393 = 0;
	var uLocal_13394 = 0;
	var uLocal_13395 = 0;
	var uLocal_13396 = 0;
	var uLocal_13397 = 0;
	var uLocal_13398 = 0;
	var uLocal_13399 = 0;
	var uLocal_13400 = 0;
	var uLocal_13401 = 0;
	var uLocal_13402 = 0;
	var uLocal_13403 = 0;
	var uLocal_13404 = 0;
	var uLocal_13405 = 0;
	var uLocal_13406 = 0;
	var uLocal_13407 = 0;
	var uLocal_13408 = 0;
	var uLocal_13409 = 0;
	var uLocal_13410 = 0;
	var uLocal_13411 = 0;
	var uLocal_13412 = 0;
	var uLocal_13413 = 0;
	var uLocal_13414 = 0;
	var uLocal_13415 = 0;
	var uLocal_13416 = 0;
	var uLocal_13417 = 0;
	var uLocal_13418 = 0;
	var uLocal_13419 = 0;
	var uLocal_13420 = 0;
	var uLocal_13421 = 0;
	var uLocal_13422 = 0;
	var uLocal_13423 = 0;
	var uLocal_13424 = 0;
	var uLocal_13425 = 0;
	var uLocal_13426 = 0;
	var uLocal_13427 = 0;
	var uLocal_13428 = 0;
	var uLocal_13429 = 0;
	var uLocal_13430 = 0;
	var uLocal_13431 = 0;
	var uLocal_13432 = 0;
	var uLocal_13433 = 0;
	var uLocal_13434 = 0;
	var uLocal_13435 = 0;
	var uLocal_13436 = 0;
	var uLocal_13437 = 0;
	var uLocal_13438 = 0;
	var uLocal_13439 = 0;
	var uLocal_13440 = 0;
	var uLocal_13441 = 0;
	var uLocal_13442 = 0;
	var uLocal_13443 = 0;
	var uLocal_13444 = 0;
	var uLocal_13445 = 0;
	var uLocal_13446 = 0;
	var uLocal_13447 = 0;
	var uLocal_13448 = 0;
	var uLocal_13449 = 0;
	var uLocal_13450 = 0;
	var uLocal_13451 = 0;
	var uLocal_13452 = 0;
	var uLocal_13453 = 0;
	var uLocal_13454 = 0;
	var uLocal_13455 = 0;
	var uLocal_13456 = 0;
	var uLocal_13457 = 0;
	var uLocal_13458 = 0;
	var uLocal_13459 = 0;
	var uLocal_13460 = 0;
	var uLocal_13461 = 0;
	var uLocal_13462 = 0;
	var uLocal_13463 = 0;
	var uLocal_13464 = 0;
	var uLocal_13465 = 0;
	var uLocal_13466 = 0;
	var uLocal_13467 = 0;
	var uLocal_13468 = 0;
	var uLocal_13469 = 0;
	var uLocal_13470 = 0;
	var uLocal_13471 = 0;
	var uLocal_13472 = 0;
	var uLocal_13473 = 0;
	var uLocal_13474 = 0;
	var uLocal_13475 = 0;
	var uLocal_13476 = 0;
	var uLocal_13477 = 0;
	var uLocal_13478 = 0;
	var uLocal_13479 = 0;
	var uLocal_13480 = 0;
	var uLocal_13481 = 0;
	var uLocal_13482 = 0;
	var uLocal_13483 = 0;
	var uLocal_13484 = 0;
	var uLocal_13485 = 0;
	var uLocal_13486 = 0;
	var uLocal_13487 = 0;
	var uLocal_13488 = 0;
	var uLocal_13489 = 0;
	var uLocal_13490 = 0;
	var uLocal_13491 = 0;
	var uLocal_13492 = 0;
	var uLocal_13493 = 0;
	var uLocal_13494 = 0;
	var uLocal_13495 = 0;
	var uLocal_13496 = 0;
	var uLocal_13497 = 0;
	var uLocal_13498 = 0;
	var uLocal_13499 = 0;
	var uLocal_13500 = 0;
	var uLocal_13501 = 0;
	var uLocal_13502 = 0;
	var uLocal_13503 = 0;
	var uLocal_13504 = 0;
	var uLocal_13505 = 0;
	var uLocal_13506 = 0;
	var uLocal_13507 = 0;
	var uLocal_13508 = 0;
	var uLocal_13509 = 0;
	var uLocal_13510 = 0;
	var uLocal_13511 = 0;
	var uLocal_13512 = 0;
	var uLocal_13513 = 0;
	var uLocal_13514 = 0;
	var uLocal_13515 = 0;
	var uLocal_13516 = 0;
	var uLocal_13517 = 0;
	var uLocal_13518 = 0;
	var uLocal_13519 = 0;
	var uLocal_13520 = 0;
	var uLocal_13521 = 0;
	var uLocal_13522 = 0;
	var uLocal_13523 = 0;
	var uLocal_13524 = 0;
	var uLocal_13525 = 0;
	var uLocal_13526 = 0;
	var uLocal_13527 = 0;
	var uLocal_13528 = 0;
	var uLocal_13529 = 0;
	var uLocal_13530 = 0;
	var uLocal_13531 = 0;
	var uLocal_13532 = 0;
	var uLocal_13533 = 0;
	var uLocal_13534 = 0;
	var uLocal_13535 = 0;
	var uLocal_13536 = 0;
	var uLocal_13537 = 0;
	var uLocal_13538 = 0;
	var uLocal_13539 = 0;
	var uLocal_13540 = 0;
	var uLocal_13541 = 0;
	var uLocal_13542 = 0;
	var uLocal_13543 = 0;
	var uLocal_13544 = 0;
	var uLocal_13545 = 0;
	var uLocal_13546 = 0;
	var uLocal_13547 = 0;
	var uLocal_13548 = 0;
	var uLocal_13549 = 0;
	var uLocal_13550 = 0;
	var uLocal_13551 = 0;
	var uLocal_13552 = 0;
	var uLocal_13553 = 0;
	var uLocal_13554 = 0;
	var uLocal_13555 = 0;
	var uLocal_13556 = 0;
	var uLocal_13557 = 0;
	var uLocal_13558 = 0;
	var uLocal_13559 = 0;
	var uLocal_13560 = 0;
	var uLocal_13561 = 0;
	var uLocal_13562 = 0;
	var uLocal_13563 = 0;
	var uLocal_13564 = 0;
	var uLocal_13565 = 0;
	var uLocal_13566 = 0;
	var uLocal_13567 = 0;
	var uLocal_13568 = 0;
	var uLocal_13569 = 0;
	var uLocal_13570 = 0;
	var uLocal_13571 = 0;
	var uLocal_13572 = 0;
	var uLocal_13573 = 0;
	var uLocal_13574 = 0;
	var uLocal_13575 = 0;
	var uLocal_13576 = 0;
	var uLocal_13577 = 0;
	var uLocal_13578 = 0;
	var uLocal_13579 = 0;
	var uLocal_13580 = 0;
	var uLocal_13581 = 0;
	var uLocal_13582 = 0;
	var uLocal_13583 = 0;
	var uLocal_13584 = 0;
	var uLocal_13585 = 0;
	var uLocal_13586 = 0;
	var uLocal_13587 = 0;
	var uLocal_13588 = 0;
	var uLocal_13589 = 0;
	var uLocal_13590 = 0;
	var uLocal_13591 = 0;
	var uLocal_13592 = 0;
	var uLocal_13593 = 0;
	var uLocal_13594 = 0;
	var uLocal_13595 = 0;
	var uLocal_13596 = 0;
	var uLocal_13597 = 0;
	var uLocal_13598 = 0;
	var uLocal_13599 = 0;
	var uLocal_13600 = 0;
	var uLocal_13601 = 0;
	var uLocal_13602 = 0;
	var uLocal_13603 = 0;
	var uLocal_13604 = 0;
	var uLocal_13605 = 0;
	var uLocal_13606 = 0;
	var uLocal_13607 = 0;
	var uLocal_13608 = 0;
	var uLocal_13609 = 0;
	var uLocal_13610 = 0;
	var uLocal_13611 = 0;
	var uLocal_13612 = 0;
	var uLocal_13613 = 0;
	var uLocal_13614 = 0;
	var uLocal_13615 = 0;
	var uLocal_13616 = 0;
	var uLocal_13617 = 0;
	var uLocal_13618 = 0;
	var uLocal_13619 = 0;
	var uLocal_13620 = 0;
	var uLocal_13621 = 0;
	var uLocal_13622 = 0;
	var uLocal_13623 = 0;
	var uLocal_13624 = 0;
	var uLocal_13625 = 0;
	var uLocal_13626 = 0;
	var uLocal_13627 = 0;
	var uLocal_13628 = 0;
	var uLocal_13629 = 0;
	var uLocal_13630 = 0;
	var uLocal_13631 = 0;
	var uLocal_13632 = 0;
	var uLocal_13633 = 0;
	var uLocal_13634 = 0;
	var uLocal_13635 = 0;
	var uLocal_13636 = 0;
	var uLocal_13637 = 0;
	var uLocal_13638 = 0;
	var uLocal_13639 = 0;
	var uLocal_13640 = 0;
	var uLocal_13641 = 0;
	var uLocal_13642 = 0;
	var uLocal_13643 = 0;
	var uLocal_13644 = 0;
	var uLocal_13645 = 0;
	var uLocal_13646 = 0;
	var uLocal_13647 = 0;
	var uLocal_13648 = 0;
	var uLocal_13649 = 0;
	var uLocal_13650 = 0;
	var uLocal_13651 = 0;
	var uLocal_13652 = 0;
	var uLocal_13653 = 0;
	var uLocal_13654 = 0;
	var uLocal_13655 = 0;
	var uLocal_13656 = 0;
	var uLocal_13657 = 0;
	var uLocal_13658 = 0;
	var uLocal_13659 = 0;
	var uLocal_13660 = 0;
	var uLocal_13661 = 0;
	var uLocal_13662 = 0;
	var uLocal_13663 = 0;
	var uLocal_13664 = 0;
	var uLocal_13665 = 0;
	var uLocal_13666 = 0;
	var uLocal_13667 = 0;
	var uLocal_13668 = 0;
	var uLocal_13669 = 0;
	var uLocal_13670 = 0;
	var uLocal_13671 = 0;
	var uLocal_13672 = 0;
	var uLocal_13673 = 0;
	var uLocal_13674 = 0;
	var uLocal_13675 = 0;
	var uLocal_13676 = 0;
	var uLocal_13677 = 0;
	var uLocal_13678 = 0;
	var uLocal_13679 = 0;
	var uLocal_13680 = 0;
	var uLocal_13681 = 0;
	var uLocal_13682 = 0;
	var uLocal_13683 = 0;
	var uLocal_13684 = 0;
	var uLocal_13685 = 0;
	var uLocal_13686 = 0;
	var uLocal_13687 = 0;
	var uLocal_13688 = 0;
	var uLocal_13689 = 0;
	var uLocal_13690 = 0;
	var uLocal_13691 = 0;
	var uLocal_13692 = 0;
	var uLocal_13693 = 0;
	var uLocal_13694 = 0;
	var uLocal_13695 = 0;
	var uLocal_13696 = 0;
	var uLocal_13697 = 0;
	var uLocal_13698 = 0;
	var uLocal_13699 = 0;
	var uLocal_13700 = 0;
	var uLocal_13701 = 0;
	var uLocal_13702 = 0;
	var uLocal_13703 = 0;
	var uLocal_13704 = 0;
	var uLocal_13705 = 0;
	var uLocal_13706 = 0;
	var uLocal_13707 = 0;
	var uLocal_13708 = 0;
	var uLocal_13709 = 0;
	var uLocal_13710 = 0;
	var uLocal_13711 = 0;
	var uLocal_13712 = 0;
	var uLocal_13713 = 0;
	var uLocal_13714 = 0;
	var uLocal_13715 = 0;
	var uLocal_13716 = 0;
	var uLocal_13717 = 0;
	var uLocal_13718 = 0;
	var uLocal_13719 = 0;
	var uLocal_13720 = 0;
	var uLocal_13721 = 0;
	var uLocal_13722 = 0;
	var uLocal_13723 = 0;
	var uLocal_13724 = 0;
	var uLocal_13725 = 0;
	var uLocal_13726 = 0;
	var uLocal_13727 = 0;
	var uLocal_13728 = 0;
	var uLocal_13729 = 0;
	var uLocal_13730 = 0;
	var uLocal_13731 = 0;
	var uLocal_13732 = 0;
	var uLocal_13733 = 0;
	var uLocal_13734 = 0;
	var uLocal_13735 = 0;
	var uLocal_13736 = 0;
	var uLocal_13737 = 0;
	var uLocal_13738 = 0;
	var uLocal_13739 = 0;
	var uLocal_13740 = 0;
	var uLocal_13741 = 0;
	var uLocal_13742 = 0;
	var uLocal_13743 = 0;
	var uLocal_13744 = 0;
	var uLocal_13745 = 0;
	var uLocal_13746 = 0;
	var uLocal_13747 = 0;
	var uLocal_13748 = 0;
	var uLocal_13749 = 0;
	var uLocal_13750 = 0;
	var uLocal_13751 = 0;
	var uLocal_13752 = 0;
	var uLocal_13753 = 0;
	var uLocal_13754 = 0;
	var uLocal_13755 = 0;
	var uLocal_13756 = 0;
	var uLocal_13757 = 0;
	var uLocal_13758 = 0;
	var uLocal_13759 = 0;
	var uLocal_13760 = 0;
	var uLocal_13761 = 0;
	var uLocal_13762 = 0;
	var uLocal_13763 = 0;
	var uLocal_13764 = 15;
	var uLocal_13765 = 0;
	var uLocal_13766 = 0;
	var uLocal_13767 = 0;
	var uLocal_13768 = 0;
	var uLocal_13769 = 0;
	var uLocal_13770 = 0;
	var uLocal_13771 = 0;
	var uLocal_13772 = 0;
	var uLocal_13773 = 0;
	var uLocal_13774 = 0;
	var uLocal_13775 = 0;
	var uLocal_13776 = 0;
	var uLocal_13777 = 0;
	var uLocal_13778 = 0;
	var uLocal_13779 = 0;
	var uLocal_13780 = 0;
	var uLocal_13781 = 0;
	var uLocal_13782 = 0;
	var uLocal_13783 = 0;
	var uLocal_13784 = 0;
	var uLocal_13785 = 0;
	var uLocal_13786 = 0;
	var uLocal_13787 = 0;
	var uLocal_13788 = 0;
	var uLocal_13789 = 0;
	var uLocal_13790 = 0;
	var uLocal_13791 = 0;
	var uLocal_13792 = 0;
	var uLocal_13793 = 0;
	var uLocal_13794 = 0;
	var uLocal_13795 = 0;
	var uLocal_13796 = 0;
	var uLocal_13797 = 0;
	var uLocal_13798 = 0;
	var uLocal_13799 = 0;
	var uLocal_13800 = 0;
	var uLocal_13801 = 0;
	var uLocal_13802 = 0;
	var uLocal_13803 = 0;
	var uLocal_13804 = 0;
	var uLocal_13805 = 0;
	var uLocal_13806 = 0;
	var uLocal_13807 = 0;
	var uLocal_13808 = 0;
	var uLocal_13809 = 0;
	var uLocal_13810 = 0;
	var uLocal_13811 = 0;
	var uLocal_13812 = 0;
	var uLocal_13813 = 0;
	var uLocal_13814 = 0;
	var uLocal_13815 = 0;
	var uLocal_13816 = 0;
	var uLocal_13817 = 0;
	var uLocal_13818 = 0;
	var uLocal_13819 = 0;
	var uLocal_13820 = 0;
	var uLocal_13821 = 0;
	var uLocal_13822 = 0;
	var uLocal_13823 = 0;
	var uLocal_13824 = 0;
	var uLocal_13825 = 0;
	var uLocal_13826 = 0;
	var uLocal_13827 = 0;
	var uLocal_13828 = 0;
	var uLocal_13829 = 0;
	var uLocal_13830 = 0;
	var uLocal_13831 = 0;
	var uLocal_13832 = 0;
	var uLocal_13833 = 0;
	var uLocal_13834 = 0;
	var uLocal_13835 = 0;
	var uLocal_13836 = 0;
	var uLocal_13837 = 0;
	var uLocal_13838 = 0;
	var uLocal_13839 = 0;
	var uLocal_13840 = 0;
	var uLocal_13841 = 0;
	var uLocal_13842 = 0;
	var uLocal_13843 = 0;
	var uLocal_13844 = 0;
	var uLocal_13845 = 0;
	var uLocal_13846 = 0;
	var uLocal_13847 = 0;
	var uLocal_13848 = 0;
	var uLocal_13849 = 0;
	var uLocal_13850 = 0;
	var uLocal_13851 = 0;
	var uLocal_13852 = 0;
	var uLocal_13853 = 0;
	var uLocal_13854 = 0;
	var uLocal_13855 = 0;
	var uLocal_13856 = 0;
	var uLocal_13857 = 0;
	var uLocal_13858 = 0;
	var uLocal_13859 = 0;
	var uLocal_13860 = 0;
	var uLocal_13861 = 0;
	var uLocal_13862 = 0;
	var uLocal_13863 = 0;
	var uLocal_13864 = 0;
	var uLocal_13865 = 0;
	var uLocal_13866 = 0;
	var uLocal_13867 = 0;
	var uLocal_13868 = 0;
	var uLocal_13869 = 0;
	var uLocal_13870 = 0;
	var uLocal_13871 = 0;
	var uLocal_13872 = 0;
	var uLocal_13873 = 0;
	var uLocal_13874 = 0;
	var uLocal_13875 = 0;
	var uLocal_13876 = 0;
	var uLocal_13877 = 0;
	var uLocal_13878 = 0;
	var uLocal_13879 = 0;
	var uLocal_13880 = 0;
	var uLocal_13881 = 0;
	var uLocal_13882 = 0;
	var uLocal_13883 = 0;
	var uLocal_13884 = 0;
	var uLocal_13885 = 0;
	var uLocal_13886 = 0;
	var uLocal_13887 = 0;
	var uLocal_13888 = 0;
	var uLocal_13889 = 0;
	var uLocal_13890 = 0;
	var uLocal_13891 = 0;
	var uLocal_13892 = 0;
	var uLocal_13893 = 0;
	var uLocal_13894 = 0;
	var uLocal_13895 = 0;
	var uLocal_13896 = 0;
	var uLocal_13897 = 0;
	var uLocal_13898 = 0;
	var uLocal_13899 = 0;
	var uLocal_13900 = 0;
	var uLocal_13901 = 0;
	var uLocal_13902 = 0;
	var uLocal_13903 = 0;
	var uLocal_13904 = 0;
	var uLocal_13905 = 0;
	var uLocal_13906 = 0;
	var uLocal_13907 = 0;
	var uLocal_13908 = 0;
	var uLocal_13909 = 0;
	var uLocal_13910 = 0;
	var uLocal_13911 = 0;
	var uLocal_13912 = 0;
	var uLocal_13913 = 0;
	var uLocal_13914 = 0;
	var uLocal_13915 = 0;
	var uLocal_13916 = 0;
	var uLocal_13917 = 0;
	var uLocal_13918 = 0;
	var uLocal_13919 = 0;
	var uLocal_13920 = 0;
	var uLocal_13921 = 0;
	var uLocal_13922 = 0;
	var uLocal_13923 = 0;
	var uLocal_13924 = 0;
	var uLocal_13925 = 0;
	var uLocal_13926 = 0;
	var uLocal_13927 = 0;
	var uLocal_13928 = 0;
	var uLocal_13929 = 0;
	var uLocal_13930 = 0;
	var uLocal_13931 = 0;
	var uLocal_13932 = 0;
	var uLocal_13933 = 0;
	var uLocal_13934 = 0;
	var uLocal_13935 = 0;
	var uLocal_13936 = 0;
	var uLocal_13937 = 0;
	var uLocal_13938 = 0;
	var uLocal_13939 = 0;
	var uLocal_13940 = 0;
	var uLocal_13941 = 0;
	var uLocal_13942 = 0;
	var uLocal_13943 = 0;
	var uLocal_13944 = 0;
	var uLocal_13945 = 0;
	var uLocal_13946 = 0;
	var uLocal_13947 = 0;
	var uLocal_13948 = 0;
	var uLocal_13949 = 0;
	var uLocal_13950 = 0;
	var uLocal_13951 = 0;
	var uLocal_13952 = 0;
	var uLocal_13953 = 0;
	var uLocal_13954 = 0;
	var uLocal_13955 = 0;
	var uLocal_13956 = 0;
	var uLocal_13957 = 0;
	var uLocal_13958 = 0;
	var uLocal_13959 = 0;
	var uLocal_13960 = 0;
	var uLocal_13961 = 0;
	var uLocal_13962 = 0;
	var uLocal_13963 = 0;
	var uLocal_13964 = 0;
	var uLocal_13965 = 0;
	var uLocal_13966 = 0;
	var uLocal_13967 = 0;
	var uLocal_13968 = 0;
	var uLocal_13969 = 0;
	var uLocal_13970 = 0;
	var uLocal_13971 = 0;
	var uLocal_13972 = 0;
	var uLocal_13973 = 0;
	var uLocal_13974 = 0;
	var uLocal_13975 = 0;
	var uLocal_13976 = 0;
	var uLocal_13977 = 0;
	var uLocal_13978 = 0;
	var uLocal_13979 = 0;
	var uLocal_13980 = 0;
	var uLocal_13981 = 0;
	var uLocal_13982 = 0;
	var uLocal_13983 = 0;
	var uLocal_13984 = 0;
	var uLocal_13985 = 0;
	var uLocal_13986 = 0;
	var uLocal_13987 = 0;
	var uLocal_13988 = 0;
	var uLocal_13989 = 0;
	var uLocal_13990 = 0;
	var uLocal_13991 = 0;
	var uLocal_13992 = 0;
	var uLocal_13993 = 0;
	var uLocal_13994 = 0;
	var uLocal_13995 = 0;
	var uLocal_13996 = 0;
	var uLocal_13997 = 0;
	var uLocal_13998 = 0;
	var uLocal_13999 = 0;
	var uLocal_14000 = 0;
	var uLocal_14001 = 0;
	var uLocal_14002 = 0;
	var uLocal_14003 = 0;
	var uLocal_14004 = 0;
	var uLocal_14005 = 10;
	var uLocal_14006 = 0;
	var uLocal_14007 = 0;
	var uLocal_14008 = 0;
	var uLocal_14009 = 0;
	var uLocal_14010 = 0;
	var uLocal_14011 = 0;
	var uLocal_14012 = 0;
	var uLocal_14013 = 0;
	var uLocal_14014 = 0;
	var uLocal_14015 = 0;
	var uLocal_14016 = 0;
	var uLocal_14017 = 0;
	var uLocal_14018 = 0;
	var uLocal_14019 = 0;
	var uLocal_14020 = 0;
	var uLocal_14021 = 0;
	var uLocal_14022 = 0;
	var uLocal_14023 = 0;
	var uLocal_14024 = 0;
	var uLocal_14025 = 0;
	var uLocal_14026 = 0;
	var uLocal_14027 = 0;
	var uLocal_14028 = 0;
	var uLocal_14029 = 0;
	var uLocal_14030 = 0;
	var uLocal_14031 = 0;
	var uLocal_14032 = 0;
	var uLocal_14033 = 0;
	var uLocal_14034 = 0;
	var uLocal_14035 = -1;
	var uLocal_14036 = 0;
	var uLocal_14037 = 0;
	var uLocal_14038 = 0;
	var uLocal_14039 = 0;
	var uLocal_14040 = 0;
	var uLocal_14041 = 0;
	var uLocal_14042 = 0;
	var uLocal_14043 = 0;
	var uLocal_14044 = 0;
	var uLocal_14045 = 0;
	var uLocal_14046 = 0;
	var uLocal_14047 = 65;
	var uLocal_14048 = 0;
	var uLocal_14049 = 0;
	var uLocal_14050 = 0;
	var uLocal_14051 = 0;
	var uLocal_14052 = 0;
	var uLocal_14053 = 0;
	var uLocal_14054 = 0;
	var uLocal_14055 = 0;
	var uLocal_14056 = 0;
	var uLocal_14057 = 0;
	var uLocal_14058 = -1569615261;
	var uLocal_14059 = 0;
	var uLocal_14060 = 0;
	var uLocal_14061 = 0;
	var uLocal_14062 = 0;
	var uLocal_14063 = 0;
	var uLocal_14064 = 0;
	var uLocal_14065 = 0;
	var uLocal_14066 = 0;
	var uLocal_14067 = 0;
	var uLocal_14068 = 0;
	var uLocal_14069 = 0;
	var uLocal_14070 = 0;
	var uLocal_14071 = -1569615261;
	var uLocal_14072 = 0;
	var uLocal_14073 = 0;
	var uLocal_14074 = 0;
	var uLocal_14075 = 0;
	var uLocal_14076 = 0;
	var uLocal_14077 = 0;
	var uLocal_14078 = 0;
	var uLocal_14079 = 0;
	var uLocal_14080 = 0;
	var uLocal_14081 = 0;
	var uLocal_14082 = 0;
	var uLocal_14083 = 0;
	var uLocal_14084 = -1569615261;
	var uLocal_14085 = 0;
	var uLocal_14086 = 0;
	var uLocal_14087 = 0;
	var uLocal_14088 = 0;
	var uLocal_14089 = 0;
	var uLocal_14090 = 0;
	var uLocal_14091 = 0;
	var uLocal_14092 = 0;
	var uLocal_14093 = 0;
	var uLocal_14094 = 0;
	var uLocal_14095 = 0;
	var uLocal_14096 = 0;
	var uLocal_14097 = -1569615261;
	var uLocal_14098 = 0;
	var uLocal_14099 = 0;
	var uLocal_14100 = 0;
	var uLocal_14101 = 0;
	var uLocal_14102 = 0;
	var uLocal_14103 = 0;
	var uLocal_14104 = 0;
	var uLocal_14105 = 0;
	var uLocal_14106 = 0;
	var uLocal_14107 = 0;
	var uLocal_14108 = 0;
	var uLocal_14109 = 0;
	var uLocal_14110 = -1569615261;
	var uLocal_14111 = 0;
	var uLocal_14112 = 0;
	var uLocal_14113 = 0;
	var uLocal_14114 = 0;
	var uLocal_14115 = 0;
	var uLocal_14116 = 0;
	var uLocal_14117 = 0;
	var uLocal_14118 = 0;
	var uLocal_14119 = 0;
	var uLocal_14120 = 0;
	var uLocal_14121 = 0;
	var uLocal_14122 = 0;
	var uLocal_14123 = -1569615261;
	var uLocal_14124 = 0;
	var uLocal_14125 = 0;
	var uLocal_14126 = 0;
	var uLocal_14127 = 0;
	var uLocal_14128 = 0;
	var uLocal_14129 = 0;
	var uLocal_14130 = 0;
	var uLocal_14131 = 0;
	var uLocal_14132 = 0;
	var uLocal_14133 = 0;
	var uLocal_14134 = 0;
	var uLocal_14135 = 0;
	var uLocal_14136 = -1569615261;
	var uLocal_14137 = 0;
	var uLocal_14138 = 0;
	var uLocal_14139 = 0;
	var uLocal_14140 = 0;
	var uLocal_14141 = 0;
	var uLocal_14142 = 0;
	var uLocal_14143 = 0;
	var uLocal_14144 = 0;
	var uLocal_14145 = 0;
	var uLocal_14146 = 0;
	var uLocal_14147 = 0;
	var uLocal_14148 = 0;
	var uLocal_14149 = -1569615261;
	var uLocal_14150 = 0;
	var uLocal_14151 = 0;
	var uLocal_14152 = 0;
	var uLocal_14153 = 0;
	var uLocal_14154 = 0;
	var uLocal_14155 = 0;
	var uLocal_14156 = 0;
	var uLocal_14157 = 0;
	var uLocal_14158 = 0;
	var uLocal_14159 = 0;
	var uLocal_14160 = 0;
	var uLocal_14161 = 0;
	var uLocal_14162 = -1569615261;
	var uLocal_14163 = 0;
	var uLocal_14164 = 0;
	var uLocal_14165 = 0;
	var uLocal_14166 = 0;
	var uLocal_14167 = 0;
	var uLocal_14168 = 0;
	var uLocal_14169 = 0;
	var uLocal_14170 = 0;
	var uLocal_14171 = 0;
	var uLocal_14172 = 0;
	var uLocal_14173 = 0;
	var uLocal_14174 = 0;
	var uLocal_14175 = -1569615261;
	var uLocal_14176 = 0;
	var uLocal_14177 = 0;
	var uLocal_14178 = 0;
	var uLocal_14179 = 0;
	var uLocal_14180 = 0;
	var uLocal_14181 = 0;
	var uLocal_14182 = 0;
	var uLocal_14183 = 0;
	var uLocal_14184 = 0;
	var uLocal_14185 = 0;
	var uLocal_14186 = 0;
	var uLocal_14187 = 0;
	var uLocal_14188 = -1569615261;
	var uLocal_14189 = 0;
	var uLocal_14190 = 0;
	var uLocal_14191 = 0;
	var uLocal_14192 = 0;
	var uLocal_14193 = 0;
	var uLocal_14194 = 0;
	var uLocal_14195 = 0;
	var uLocal_14196 = 0;
	var uLocal_14197 = 0;
	var uLocal_14198 = 0;
	var uLocal_14199 = 0;
	var uLocal_14200 = 0;
	var uLocal_14201 = -1569615261;
	var uLocal_14202 = 0;
	var uLocal_14203 = 0;
	var uLocal_14204 = 0;
	var uLocal_14205 = 0;
	var uLocal_14206 = 0;
	var uLocal_14207 = 0;
	var uLocal_14208 = 0;
	var uLocal_14209 = 0;
	var uLocal_14210 = 0;
	var uLocal_14211 = 0;
	var uLocal_14212 = 0;
	var uLocal_14213 = 0;
	var uLocal_14214 = -1569615261;
	var uLocal_14215 = 0;
	var uLocal_14216 = 0;
	var uLocal_14217 = 0;
	var uLocal_14218 = 0;
	var uLocal_14219 = 0;
	var uLocal_14220 = 0;
	var uLocal_14221 = 0;
	var uLocal_14222 = 0;
	var uLocal_14223 = 0;
	var uLocal_14224 = 0;
	var uLocal_14225 = 0;
	var uLocal_14226 = 0;
	var uLocal_14227 = -1569615261;
	var uLocal_14228 = 0;
	var uLocal_14229 = 0;
	var uLocal_14230 = 0;
	var uLocal_14231 = 0;
	var uLocal_14232 = 0;
	var uLocal_14233 = 0;
	var uLocal_14234 = 0;
	var uLocal_14235 = 0;
	var uLocal_14236 = 0;
	var uLocal_14237 = 0;
	var uLocal_14238 = 0;
	var uLocal_14239 = 0;
	var uLocal_14240 = -1569615261;
	var uLocal_14241 = 0;
	var uLocal_14242 = 0;
	var uLocal_14243 = 0;
	var uLocal_14244 = 0;
	var uLocal_14245 = 0;
	var uLocal_14246 = 0;
	var uLocal_14247 = 0;
	var uLocal_14248 = 0;
	var uLocal_14249 = 0;
	var uLocal_14250 = 0;
	var uLocal_14251 = 0;
	var uLocal_14252 = 0;
	var uLocal_14253 = -1569615261;
	var uLocal_14254 = 0;
	var uLocal_14255 = 0;
	var uLocal_14256 = 0;
	var uLocal_14257 = 0;
	var uLocal_14258 = 0;
	var uLocal_14259 = 0;
	var uLocal_14260 = 0;
	var uLocal_14261 = 0;
	var uLocal_14262 = 0;
	var uLocal_14263 = 0;
	var uLocal_14264 = 0;
	var uLocal_14265 = 0;
	var uLocal_14266 = -1569615261;
	var uLocal_14267 = 0;
	var uLocal_14268 = 0;
	var uLocal_14269 = 0;
	var uLocal_14270 = 0;
	var uLocal_14271 = 0;
	var uLocal_14272 = 0;
	var uLocal_14273 = 0;
	var uLocal_14274 = 0;
	var uLocal_14275 = 0;
	var uLocal_14276 = 0;
	var uLocal_14277 = 0;
	var uLocal_14278 = 0;
	var uLocal_14279 = -1569615261;
	var uLocal_14280 = 0;
	var uLocal_14281 = 0;
	var uLocal_14282 = 0;
	var uLocal_14283 = 0;
	var uLocal_14284 = 0;
	var uLocal_14285 = 0;
	var uLocal_14286 = 0;
	var uLocal_14287 = 0;
	var uLocal_14288 = 0;
	var uLocal_14289 = 0;
	var uLocal_14290 = 0;
	var uLocal_14291 = 0;
	var uLocal_14292 = -1569615261;
	var uLocal_14293 = 0;
	var uLocal_14294 = 0;
	var uLocal_14295 = 0;
	var uLocal_14296 = 0;
	var uLocal_14297 = 0;
	var uLocal_14298 = 0;
	var uLocal_14299 = 0;
	var uLocal_14300 = 0;
	var uLocal_14301 = 0;
	var uLocal_14302 = 0;
	var uLocal_14303 = 0;
	var uLocal_14304 = 0;
	var uLocal_14305 = -1569615261;
	var uLocal_14306 = 0;
	var uLocal_14307 = 0;
	var uLocal_14308 = 0;
	var uLocal_14309 = 0;
	var uLocal_14310 = 0;
	var uLocal_14311 = 0;
	var uLocal_14312 = 0;
	var uLocal_14313 = 0;
	var uLocal_14314 = 0;
	var uLocal_14315 = 0;
	var uLocal_14316 = 0;
	var uLocal_14317 = 0;
	var uLocal_14318 = -1569615261;
	var uLocal_14319 = 0;
	var uLocal_14320 = 0;
	var uLocal_14321 = 0;
	var uLocal_14322 = 0;
	var uLocal_14323 = 0;
	var uLocal_14324 = 0;
	var uLocal_14325 = 0;
	var uLocal_14326 = 0;
	var uLocal_14327 = 0;
	var uLocal_14328 = 0;
	var uLocal_14329 = 0;
	var uLocal_14330 = 0;
	var uLocal_14331 = -1569615261;
	var uLocal_14332 = 0;
	var uLocal_14333 = 0;
	var uLocal_14334 = 0;
	var uLocal_14335 = 0;
	var uLocal_14336 = 0;
	var uLocal_14337 = 0;
	var uLocal_14338 = 0;
	var uLocal_14339 = 0;
	var uLocal_14340 = 0;
	var uLocal_14341 = 0;
	var uLocal_14342 = 0;
	var uLocal_14343 = 0;
	var uLocal_14344 = -1569615261;
	var uLocal_14345 = 0;
	var uLocal_14346 = 0;
	var uLocal_14347 = 0;
	var uLocal_14348 = 0;
	var uLocal_14349 = 0;
	var uLocal_14350 = 0;
	var uLocal_14351 = 0;
	var uLocal_14352 = 0;
	var uLocal_14353 = 0;
	var uLocal_14354 = 0;
	var uLocal_14355 = 0;
	var uLocal_14356 = 0;
	var uLocal_14357 = -1569615261;
	var uLocal_14358 = 0;
	var uLocal_14359 = 0;
	var uLocal_14360 = 0;
	var uLocal_14361 = 0;
	var uLocal_14362 = 0;
	var uLocal_14363 = 0;
	var uLocal_14364 = 0;
	var uLocal_14365 = 0;
	var uLocal_14366 = 0;
	var uLocal_14367 = 0;
	var uLocal_14368 = 0;
	var uLocal_14369 = 0;
	var uLocal_14370 = -1569615261;
	var uLocal_14371 = 0;
	var uLocal_14372 = 0;
	var uLocal_14373 = 0;
	var uLocal_14374 = 0;
	var uLocal_14375 = 0;
	var uLocal_14376 = 0;
	var uLocal_14377 = 0;
	var uLocal_14378 = 0;
	var uLocal_14379 = 0;
	var uLocal_14380 = 0;
	var uLocal_14381 = 0;
	var uLocal_14382 = 0;
	var uLocal_14383 = -1569615261;
	var uLocal_14384 = 0;
	var uLocal_14385 = 0;
	var uLocal_14386 = 0;
	var uLocal_14387 = 0;
	var uLocal_14388 = 0;
	var uLocal_14389 = 0;
	var uLocal_14390 = 0;
	var uLocal_14391 = 0;
	var uLocal_14392 = 0;
	var uLocal_14393 = 0;
	var uLocal_14394 = 0;
	var uLocal_14395 = 0;
	var uLocal_14396 = -1569615261;
	var uLocal_14397 = 0;
	var uLocal_14398 = 0;
	var uLocal_14399 = 0;
	var uLocal_14400 = 0;
	var uLocal_14401 = 0;
	var uLocal_14402 = 0;
	var uLocal_14403 = 0;
	var uLocal_14404 = 0;
	var uLocal_14405 = 0;
	var uLocal_14406 = 0;
	var uLocal_14407 = 0;
	var uLocal_14408 = 0;
	var uLocal_14409 = -1569615261;
	var uLocal_14410 = 0;
	var uLocal_14411 = 0;
	var uLocal_14412 = 0;
	var uLocal_14413 = 0;
	var uLocal_14414 = 0;
	var uLocal_14415 = 0;
	var uLocal_14416 = 0;
	var uLocal_14417 = 0;
	var uLocal_14418 = 0;
	var uLocal_14419 = 0;
	var uLocal_14420 = 0;
	var uLocal_14421 = 0;
	var uLocal_14422 = -1569615261;
	var uLocal_14423 = 0;
	var uLocal_14424 = 0;
	var uLocal_14425 = 0;
	var uLocal_14426 = 0;
	var uLocal_14427 = 0;
	var uLocal_14428 = 0;
	var uLocal_14429 = 0;
	var uLocal_14430 = 0;
	var uLocal_14431 = 0;
	var uLocal_14432 = 0;
	var uLocal_14433 = 0;
	var uLocal_14434 = 0;
	var uLocal_14435 = -1569615261;
	var uLocal_14436 = 0;
	var uLocal_14437 = 0;
	var uLocal_14438 = 0;
	var uLocal_14439 = 0;
	var uLocal_14440 = 0;
	var uLocal_14441 = 0;
	var uLocal_14442 = 0;
	var uLocal_14443 = 0;
	var uLocal_14444 = 0;
	var uLocal_14445 = 0;
	var uLocal_14446 = 0;
	var uLocal_14447 = 0;
	var uLocal_14448 = -1569615261;
	var uLocal_14449 = 0;
	var uLocal_14450 = 0;
	var uLocal_14451 = 0;
	var uLocal_14452 = 0;
	var uLocal_14453 = 0;
	var uLocal_14454 = 0;
	var uLocal_14455 = 0;
	var uLocal_14456 = 0;
	var uLocal_14457 = 0;
	var uLocal_14458 = 0;
	var uLocal_14459 = 0;
	var uLocal_14460 = 0;
	var uLocal_14461 = -1569615261;
	var uLocal_14462 = 0;
	var uLocal_14463 = 0;
	var uLocal_14464 = 0;
	var uLocal_14465 = 0;
	var uLocal_14466 = 0;
	var uLocal_14467 = 0;
	var uLocal_14468 = 0;
	var uLocal_14469 = 0;
	var uLocal_14470 = 0;
	var uLocal_14471 = 0;
	var uLocal_14472 = 0;
	var uLocal_14473 = 0;
	var uLocal_14474 = -1569615261;
	var uLocal_14475 = 0;
	var uLocal_14476 = 0;
	var uLocal_14477 = 0;
	var uLocal_14478 = 0;
	var uLocal_14479 = 0;
	var uLocal_14480 = 0;
	var uLocal_14481 = 0;
	var uLocal_14482 = 0;
	var uLocal_14483 = 0;
	var uLocal_14484 = 0;
	var uLocal_14485 = 0;
	var uLocal_14486 = 0;
	var uLocal_14487 = -1569615261;
	var uLocal_14488 = 0;
	var uLocal_14489 = 0;
	var uLocal_14490 = 0;
	var uLocal_14491 = 0;
	var uLocal_14492 = 0;
	var uLocal_14493 = 0;
	var uLocal_14494 = 0;
	var uLocal_14495 = 0;
	var uLocal_14496 = 0;
	var uLocal_14497 = 0;
	var uLocal_14498 = 0;
	var uLocal_14499 = 0;
	var uLocal_14500 = -1569615261;
	var uLocal_14501 = 0;
	var uLocal_14502 = 0;
	var uLocal_14503 = 0;
	var uLocal_14504 = 0;
	var uLocal_14505 = 0;
	var uLocal_14506 = 0;
	var uLocal_14507 = 0;
	var uLocal_14508 = 0;
	var uLocal_14509 = 0;
	var uLocal_14510 = 0;
	var uLocal_14511 = 0;
	var uLocal_14512 = 0;
	var uLocal_14513 = -1569615261;
	var uLocal_14514 = 0;
	var uLocal_14515 = 0;
	var uLocal_14516 = 0;
	var uLocal_14517 = 0;
	var uLocal_14518 = 0;
	var uLocal_14519 = 0;
	var uLocal_14520 = 0;
	var uLocal_14521 = 0;
	var uLocal_14522 = 0;
	var uLocal_14523 = 0;
	var uLocal_14524 = 0;
	var uLocal_14525 = 0;
	var uLocal_14526 = -1569615261;
	var uLocal_14527 = 0;
	var uLocal_14528 = 0;
	var uLocal_14529 = 0;
	var uLocal_14530 = 0;
	var uLocal_14531 = 0;
	var uLocal_14532 = 0;
	var uLocal_14533 = 0;
	var uLocal_14534 = 0;
	var uLocal_14535 = 0;
	var uLocal_14536 = 0;
	var uLocal_14537 = 0;
	var uLocal_14538 = 0;
	var uLocal_14539 = -1569615261;
	var uLocal_14540 = 0;
	var uLocal_14541 = 0;
	var uLocal_14542 = 0;
	var uLocal_14543 = 0;
	var uLocal_14544 = 0;
	var uLocal_14545 = 0;
	var uLocal_14546 = 0;
	var uLocal_14547 = 0;
	var uLocal_14548 = 0;
	var uLocal_14549 = 0;
	var uLocal_14550 = 0;
	var uLocal_14551 = 0;
	var uLocal_14552 = -1569615261;
	var uLocal_14553 = 0;
	var uLocal_14554 = 0;
	var uLocal_14555 = 0;
	var uLocal_14556 = 0;
	var uLocal_14557 = 0;
	var uLocal_14558 = 0;
	var uLocal_14559 = 0;
	var uLocal_14560 = 0;
	var uLocal_14561 = 0;
	var uLocal_14562 = 0;
	var uLocal_14563 = 0;
	var uLocal_14564 = 0;
	var uLocal_14565 = -1569615261;
	var uLocal_14566 = 0;
	var uLocal_14567 = 0;
	var uLocal_14568 = 0;
	var uLocal_14569 = 0;
	var uLocal_14570 = 0;
	var uLocal_14571 = 0;
	var uLocal_14572 = 0;
	var uLocal_14573 = 0;
	var uLocal_14574 = 0;
	var uLocal_14575 = 0;
	var uLocal_14576 = 0;
	var uLocal_14577 = 0;
	var uLocal_14578 = -1569615261;
	var uLocal_14579 = 0;
	var uLocal_14580 = 0;
	var uLocal_14581 = 0;
	var uLocal_14582 = 0;
	var uLocal_14583 = 0;
	var uLocal_14584 = 0;
	var uLocal_14585 = 0;
	var uLocal_14586 = 0;
	var uLocal_14587 = 0;
	var uLocal_14588 = 0;
	var uLocal_14589 = 0;
	var uLocal_14590 = 0;
	var uLocal_14591 = -1569615261;
	var uLocal_14592 = 0;
	var uLocal_14593 = 0;
	var uLocal_14594 = 0;
	var uLocal_14595 = 0;
	var uLocal_14596 = 0;
	var uLocal_14597 = 0;
	var uLocal_14598 = 0;
	var uLocal_14599 = 0;
	var uLocal_14600 = 0;
	var uLocal_14601 = 0;
	var uLocal_14602 = 0;
	var uLocal_14603 = 0;
	var uLocal_14604 = -1569615261;
	var uLocal_14605 = 0;
	var uLocal_14606 = 0;
	var uLocal_14607 = 0;
	var uLocal_14608 = 0;
	var uLocal_14609 = 0;
	var uLocal_14610 = 0;
	var uLocal_14611 = 0;
	var uLocal_14612 = 0;
	var uLocal_14613 = 0;
	var uLocal_14614 = 0;
	var uLocal_14615 = 0;
	var uLocal_14616 = 0;
	var uLocal_14617 = -1569615261;
	var uLocal_14618 = 0;
	var uLocal_14619 = 0;
	var uLocal_14620 = 0;
	var uLocal_14621 = 0;
	var uLocal_14622 = 0;
	var uLocal_14623 = 0;
	var uLocal_14624 = 0;
	var uLocal_14625 = 0;
	var uLocal_14626 = 0;
	var uLocal_14627 = 0;
	var uLocal_14628 = 0;
	var uLocal_14629 = 0;
	var uLocal_14630 = -1569615261;
	var uLocal_14631 = 0;
	var uLocal_14632 = 0;
	var uLocal_14633 = 0;
	var uLocal_14634 = 0;
	var uLocal_14635 = 0;
	var uLocal_14636 = 0;
	var uLocal_14637 = 0;
	var uLocal_14638 = 0;
	var uLocal_14639 = 0;
	var uLocal_14640 = 0;
	var uLocal_14641 = 0;
	var uLocal_14642 = 0;
	var uLocal_14643 = -1569615261;
	var uLocal_14644 = 0;
	var uLocal_14645 = 0;
	var uLocal_14646 = 0;
	var uLocal_14647 = 0;
	var uLocal_14648 = 0;
	var uLocal_14649 = 0;
	var uLocal_14650 = 0;
	var uLocal_14651 = 0;
	var uLocal_14652 = 0;
	var uLocal_14653 = 0;
	var uLocal_14654 = 0;
	var uLocal_14655 = 0;
	var uLocal_14656 = -1569615261;
	var uLocal_14657 = 0;
	var uLocal_14658 = 0;
	var uLocal_14659 = 0;
	var uLocal_14660 = 0;
	var uLocal_14661 = 0;
	var uLocal_14662 = 0;
	var uLocal_14663 = 0;
	var uLocal_14664 = 0;
	var uLocal_14665 = 0;
	var uLocal_14666 = 0;
	var uLocal_14667 = 0;
	var uLocal_14668 = 0;
	var uLocal_14669 = -1569615261;
	var uLocal_14670 = 0;
	var uLocal_14671 = 0;
	var uLocal_14672 = 0;
	var uLocal_14673 = 0;
	var uLocal_14674 = 0;
	var uLocal_14675 = 0;
	var uLocal_14676 = 0;
	var uLocal_14677 = 0;
	var uLocal_14678 = 0;
	var uLocal_14679 = 0;
	var uLocal_14680 = 0;
	var uLocal_14681 = 0;
	var uLocal_14682 = -1569615261;
	var uLocal_14683 = 0;
	var uLocal_14684 = 0;
	var uLocal_14685 = 0;
	var uLocal_14686 = 0;
	var uLocal_14687 = 0;
	var uLocal_14688 = 0;
	var uLocal_14689 = 0;
	var uLocal_14690 = 0;
	var uLocal_14691 = 0;
	var uLocal_14692 = 0;
	var uLocal_14693 = 0;
	var uLocal_14694 = 0;
	var uLocal_14695 = -1569615261;
	var uLocal_14696 = 0;
	var uLocal_14697 = 0;
	var uLocal_14698 = 0;
	var uLocal_14699 = 0;
	var uLocal_14700 = 0;
	var uLocal_14701 = 0;
	var uLocal_14702 = 0;
	var uLocal_14703 = 0;
	var uLocal_14704 = 0;
	var uLocal_14705 = 0;
	var uLocal_14706 = 0;
	var uLocal_14707 = 0;
	var uLocal_14708 = -1569615261;
	var uLocal_14709 = 0;
	var uLocal_14710 = 0;
	var uLocal_14711 = 0;
	var uLocal_14712 = 0;
	var uLocal_14713 = 0;
	var uLocal_14714 = 0;
	var uLocal_14715 = 0;
	var uLocal_14716 = 0;
	var uLocal_14717 = 0;
	var uLocal_14718 = 0;
	var uLocal_14719 = 0;
	var uLocal_14720 = 0;
	var uLocal_14721 = -1569615261;
	var uLocal_14722 = 0;
	var uLocal_14723 = 0;
	var uLocal_14724 = 0;
	var uLocal_14725 = 0;
	var uLocal_14726 = 0;
	var uLocal_14727 = 0;
	var uLocal_14728 = 0;
	var uLocal_14729 = 0;
	var uLocal_14730 = 0;
	var uLocal_14731 = 0;
	var uLocal_14732 = 0;
	var uLocal_14733 = 0;
	var uLocal_14734 = -1569615261;
	var uLocal_14735 = 0;
	var uLocal_14736 = 0;
	var uLocal_14737 = 0;
	var uLocal_14738 = 0;
	var uLocal_14739 = 0;
	var uLocal_14740 = 0;
	var uLocal_14741 = 0;
	var uLocal_14742 = 0;
	var uLocal_14743 = 0;
	var uLocal_14744 = 0;
	var uLocal_14745 = 0;
	var uLocal_14746 = 0;
	var uLocal_14747 = -1569615261;
	var uLocal_14748 = 0;
	var uLocal_14749 = 0;
	var uLocal_14750 = 0;
	var uLocal_14751 = 0;
	var uLocal_14752 = 0;
	var uLocal_14753 = 0;
	var uLocal_14754 = 0;
	var uLocal_14755 = 0;
	var uLocal_14756 = 0;
	var uLocal_14757 = 0;
	var uLocal_14758 = 0;
	var uLocal_14759 = 0;
	var uLocal_14760 = -1569615261;
	var uLocal_14761 = 0;
	var uLocal_14762 = 0;
	var uLocal_14763 = 0;
	var uLocal_14764 = 0;
	var uLocal_14765 = 0;
	var uLocal_14766 = 0;
	var uLocal_14767 = 0;
	var uLocal_14768 = 0;
	var uLocal_14769 = 0;
	var uLocal_14770 = 0;
	var uLocal_14771 = 0;
	var uLocal_14772 = 0;
	var uLocal_14773 = -1569615261;
	var uLocal_14774 = 0;
	var uLocal_14775 = 0;
	var uLocal_14776 = 0;
	var uLocal_14777 = 0;
	var uLocal_14778 = 0;
	var uLocal_14779 = 0;
	var uLocal_14780 = 0;
	var uLocal_14781 = 0;
	var uLocal_14782 = 0;
	var uLocal_14783 = 0;
	var uLocal_14784 = 0;
	var uLocal_14785 = 0;
	var uLocal_14786 = -1569615261;
	var uLocal_14787 = 0;
	var uLocal_14788 = 0;
	var uLocal_14789 = 0;
	var uLocal_14790 = 0;
	var uLocal_14791 = 0;
	var uLocal_14792 = 0;
	var uLocal_14793 = 0;
	var uLocal_14794 = 0;
	var uLocal_14795 = 0;
	var uLocal_14796 = 0;
	var uLocal_14797 = 0;
	var uLocal_14798 = 0;
	var uLocal_14799 = -1569615261;
	var uLocal_14800 = 0;
	var uLocal_14801 = 0;
	var uLocal_14802 = 0;
	var uLocal_14803 = 0;
	var uLocal_14804 = 0;
	var uLocal_14805 = 0;
	var uLocal_14806 = 0;
	var uLocal_14807 = 0;
	var uLocal_14808 = 0;
	var uLocal_14809 = 0;
	var uLocal_14810 = 0;
	var uLocal_14811 = 0;
	var uLocal_14812 = -1569615261;
	var uLocal_14813 = 0;
	var uLocal_14814 = 0;
	var uLocal_14815 = 0;
	var uLocal_14816 = 0;
	var uLocal_14817 = 0;
	var uLocal_14818 = 0;
	var uLocal_14819 = 0;
	var uLocal_14820 = 0;
	var uLocal_14821 = 0;
	var uLocal_14822 = 0;
	var uLocal_14823 = 0;
	var uLocal_14824 = 0;
	var uLocal_14825 = -1569615261;
	var uLocal_14826 = 0;
	var uLocal_14827 = 0;
	var uLocal_14828 = 0;
	var uLocal_14829 = 0;
	var uLocal_14830 = 0;
	var uLocal_14831 = 0;
	var uLocal_14832 = 0;
	var uLocal_14833 = 0;
	var uLocal_14834 = 0;
	var uLocal_14835 = 0;
	var uLocal_14836 = 0;
	var uLocal_14837 = 0;
	var uLocal_14838 = -1569615261;
	var uLocal_14839 = 0;
	var uLocal_14840 = 0;
	var uLocal_14841 = 0;
	var uLocal_14842 = 0;
	var uLocal_14843 = 0;
	var uLocal_14844 = 0;
	var uLocal_14845 = 0;
	var uLocal_14846 = 0;
	var uLocal_14847 = 0;
	var uLocal_14848 = 0;
	var uLocal_14849 = 0;
	var uLocal_14850 = 0;
	var uLocal_14851 = -1569615261;
	var uLocal_14852 = 0;
	var uLocal_14853 = 0;
	var uLocal_14854 = 0;
	var uLocal_14855 = 0;
	var uLocal_14856 = 0;
	var uLocal_14857 = 0;
	var uLocal_14858 = 0;
	var uLocal_14859 = 0;
	var uLocal_14860 = 0;
	var uLocal_14861 = 0;
	var uLocal_14862 = 0;
	var uLocal_14863 = 0;
	var uLocal_14864 = -1569615261;
	var uLocal_14865 = 0;
	var uLocal_14866 = 0;
	var uLocal_14867 = 0;
	var uLocal_14868 = 0;
	var uLocal_14869 = 0;
	var uLocal_14870 = 0;
	var uLocal_14871 = 0;
	var uLocal_14872 = 0;
	var uLocal_14873 = 0;
	var uLocal_14874 = 0;
	var uLocal_14875 = 0;
	var uLocal_14876 = 0;
	var uLocal_14877 = -1569615261;
	var uLocal_14878 = 0;
	var uLocal_14879 = 0;
	var uLocal_14880 = 0;
	var uLocal_14881 = 0;
	var uLocal_14882 = 0;
	var uLocal_14883 = 0;
	var uLocal_14884 = 0;
	var uLocal_14885 = 0;
	var uLocal_14886 = 0;
	var uLocal_14887 = 0;
	var uLocal_14888 = 0;
	var uLocal_14889 = 0;
	var uLocal_14890 = -1569615261;
	var uLocal_14891 = 0;
	var uLocal_14892 = 0;
	var uLocal_14893 = 0;
	var uLocal_14894 = 0;
	var uLocal_14895 = 0;
	var uLocal_14896 = 0;
	var uLocal_14897 = 0;
	var uLocal_14898 = 0;
	var uLocal_14899 = 0;
	var uLocal_14900 = 0;
	var uLocal_14901 = 0;
	var uLocal_14902 = 0;
	var uLocal_14903 = 0;
	var uLocal_14904 = 0;
	var uLocal_14905 = 0;
	var uLocal_14906 = 0;
	var uLocal_14907 = 0;
	var uLocal_14908 = 1;
	var uLocal_14909 = 30;
	var uLocal_14910 = -1;
	var uLocal_14911 = 0;
	var uLocal_14912 = 1;
	var uLocal_14913 = 0;
	var uLocal_14914 = 0;
	var uLocal_14915 = 0;
	var uLocal_14916 = 0;
	var uLocal_14917 = 0;
	var uLocal_14918 = 0;
	var uLocal_14919 = 0;
	var uLocal_14920 = 0;
	var uLocal_14921 = 0;
	var uLocal_14922 = 1065353216;
	var uLocal_14923 = 0;
	var uLocal_14924 = 0;
	var uLocal_14925 = 1065353216;
	var uLocal_14926 = 1;
	var uLocal_14927 = 0;
	var uLocal_14928 = -1;
	var uLocal_14929 = 0;
	var uLocal_14930 = 1;
	var uLocal_14931 = 0;
	var uLocal_14932 = 0;
	var uLocal_14933 = 0;
	var uLocal_14934 = 0;
	var uLocal_14935 = 0;
	var uLocal_14936 = 0;
	var uLocal_14937 = 0;
	var uLocal_14938 = 0;
	var uLocal_14939 = 0;
	var uLocal_14940 = 1065353216;
	var uLocal_14941 = 0;
	var uLocal_14942 = 0;
	var uLocal_14943 = 1065353216;
	var uLocal_14944 = 1;
	var uLocal_14945 = 0;
	var uLocal_14946 = -1;
	var uLocal_14947 = 0;
	var uLocal_14948 = 1;
	var uLocal_14949 = 0;
	var uLocal_14950 = 0;
	var uLocal_14951 = 0;
	var uLocal_14952 = 0;
	var uLocal_14953 = 0;
	var uLocal_14954 = 0;
	var uLocal_14955 = 0;
	var uLocal_14956 = 0;
	var uLocal_14957 = 0;
	var uLocal_14958 = 1065353216;
	var uLocal_14959 = 0;
	var uLocal_14960 = 0;
	var uLocal_14961 = 1065353216;
	var uLocal_14962 = 1;
	var uLocal_14963 = 0;
	var uLocal_14964 = -1;
	var uLocal_14965 = 0;
	var uLocal_14966 = 1;
	var uLocal_14967 = 0;
	var uLocal_14968 = 0;
	var uLocal_14969 = 0;
	var uLocal_14970 = 0;
	var uLocal_14971 = 0;
	var uLocal_14972 = 0;
	var uLocal_14973 = 0;
	var uLocal_14974 = 0;
	var uLocal_14975 = 0;
	var uLocal_14976 = 1065353216;
	var uLocal_14977 = 0;
	var uLocal_14978 = 0;
	var uLocal_14979 = 1065353216;
	var uLocal_14980 = 1;
	var uLocal_14981 = 0;
	var uLocal_14982 = -1;
	var uLocal_14983 = 0;
	var uLocal_14984 = 1;
	var uLocal_14985 = 0;
	var uLocal_14986 = 0;
	var uLocal_14987 = 0;
	var uLocal_14988 = 0;
	var uLocal_14989 = 0;
	var uLocal_14990 = 0;
	var uLocal_14991 = 0;
	var uLocal_14992 = 0;
	var uLocal_14993 = 0;
	var uLocal_14994 = 1065353216;
	var uLocal_14995 = 0;
	var uLocal_14996 = 0;
	var uLocal_14997 = 1065353216;
	var uLocal_14998 = 1;
	var uLocal_14999 = 0;
	var uLocal_15000 = -1;
	var uLocal_15001 = 0;
	var uLocal_15002 = 1;
	var uLocal_15003 = 0;
	var uLocal_15004 = 0;
	var uLocal_15005 = 0;
	var uLocal_15006 = 0;
	var uLocal_15007 = 0;
	var uLocal_15008 = 0;
	var uLocal_15009 = 0;
	var uLocal_15010 = 0;
	var uLocal_15011 = 0;
	var uLocal_15012 = 1065353216;
	var uLocal_15013 = 0;
	var uLocal_15014 = 0;
	var uLocal_15015 = 1065353216;
	var uLocal_15016 = 1;
	var uLocal_15017 = 0;
	var uLocal_15018 = -1;
	var uLocal_15019 = 0;
	var uLocal_15020 = 1;
	var uLocal_15021 = 0;
	var uLocal_15022 = 0;
	var uLocal_15023 = 0;
	var uLocal_15024 = 0;
	var uLocal_15025 = 0;
	var uLocal_15026 = 0;
	var uLocal_15027 = 0;
	var uLocal_15028 = 0;
	var uLocal_15029 = 0;
	var uLocal_15030 = 1065353216;
	var uLocal_15031 = 0;
	var uLocal_15032 = 0;
	var uLocal_15033 = 1065353216;
	var uLocal_15034 = 1;
	var uLocal_15035 = 0;
	var uLocal_15036 = -1;
	var uLocal_15037 = 0;
	var uLocal_15038 = 1;
	var uLocal_15039 = 0;
	var uLocal_15040 = 0;
	var uLocal_15041 = 0;
	var uLocal_15042 = 0;
	var uLocal_15043 = 0;
	var uLocal_15044 = 0;
	var uLocal_15045 = 0;
	var uLocal_15046 = 0;
	var uLocal_15047 = 0;
	var uLocal_15048 = 1065353216;
	var uLocal_15049 = 0;
	var uLocal_15050 = 0;
	var uLocal_15051 = 1065353216;
	var uLocal_15052 = 1;
	var uLocal_15053 = 0;
	var uLocal_15054 = -1;
	var uLocal_15055 = 0;
	var uLocal_15056 = 1;
	var uLocal_15057 = 0;
	var uLocal_15058 = 0;
	var uLocal_15059 = 0;
	var uLocal_15060 = 0;
	var uLocal_15061 = 0;
	var uLocal_15062 = 0;
	var uLocal_15063 = 0;
	var uLocal_15064 = 0;
	var uLocal_15065 = 0;
	var uLocal_15066 = 1065353216;
	var uLocal_15067 = 0;
	var uLocal_15068 = 0;
	var uLocal_15069 = 1065353216;
	var uLocal_15070 = 1;
	var uLocal_15071 = 0;
	var uLocal_15072 = -1;
	var uLocal_15073 = 0;
	var uLocal_15074 = 1;
	var uLocal_15075 = 0;
	var uLocal_15076 = 0;
	var uLocal_15077 = 0;
	var uLocal_15078 = 0;
	var uLocal_15079 = 0;
	var uLocal_15080 = 0;
	var uLocal_15081 = 0;
	var uLocal_15082 = 0;
	var uLocal_15083 = 0;
	var uLocal_15084 = 1065353216;
	var uLocal_15085 = 0;
	var uLocal_15086 = 0;
	var uLocal_15087 = 1065353216;
	var uLocal_15088 = 1;
	var uLocal_15089 = 0;
	var uLocal_15090 = -1;
	var uLocal_15091 = 0;
	var uLocal_15092 = 1;
	var uLocal_15093 = 0;
	var uLocal_15094 = 0;
	var uLocal_15095 = 0;
	var uLocal_15096 = 0;
	var uLocal_15097 = 0;
	var uLocal_15098 = 0;
	var uLocal_15099 = 0;
	var uLocal_15100 = 0;
	var uLocal_15101 = 0;
	var uLocal_15102 = 1065353216;
	var uLocal_15103 = 0;
	var uLocal_15104 = 0;
	var uLocal_15105 = 1065353216;
	var uLocal_15106 = 1;
	var uLocal_15107 = 0;
	var uLocal_15108 = -1;
	var uLocal_15109 = 0;
	var uLocal_15110 = 1;
	var uLocal_15111 = 0;
	var uLocal_15112 = 0;
	var uLocal_15113 = 0;
	var uLocal_15114 = 0;
	var uLocal_15115 = 0;
	var uLocal_15116 = 0;
	var uLocal_15117 = 0;
	var uLocal_15118 = 0;
	var uLocal_15119 = 0;
	var uLocal_15120 = 1065353216;
	var uLocal_15121 = 0;
	var uLocal_15122 = 0;
	var uLocal_15123 = 1065353216;
	var uLocal_15124 = 1;
	var uLocal_15125 = 0;
	var uLocal_15126 = -1;
	var uLocal_15127 = 0;
	var uLocal_15128 = 1;
	var uLocal_15129 = 0;
	var uLocal_15130 = 0;
	var uLocal_15131 = 0;
	var uLocal_15132 = 0;
	var uLocal_15133 = 0;
	var uLocal_15134 = 0;
	var uLocal_15135 = 0;
	var uLocal_15136 = 0;
	var uLocal_15137 = 0;
	var uLocal_15138 = 1065353216;
	var uLocal_15139 = 0;
	var uLocal_15140 = 0;
	var uLocal_15141 = 1065353216;
	var uLocal_15142 = 1;
	var uLocal_15143 = 0;
	var uLocal_15144 = -1;
	var uLocal_15145 = 0;
	var uLocal_15146 = 1;
	var uLocal_15147 = 0;
	var uLocal_15148 = 0;
	var uLocal_15149 = 0;
	var uLocal_15150 = 0;
	var uLocal_15151 = 0;
	var uLocal_15152 = 0;
	var uLocal_15153 = 0;
	var uLocal_15154 = 0;
	var uLocal_15155 = 0;
	var uLocal_15156 = 1065353216;
	var uLocal_15157 = 0;
	var uLocal_15158 = 0;
	var uLocal_15159 = 1065353216;
	var uLocal_15160 = 1;
	var uLocal_15161 = 0;
	var uLocal_15162 = -1;
	var uLocal_15163 = 0;
	var uLocal_15164 = 1;
	var uLocal_15165 = 0;
	var uLocal_15166 = 0;
	var uLocal_15167 = 0;
	var uLocal_15168 = 0;
	var uLocal_15169 = 0;
	var uLocal_15170 = 0;
	var uLocal_15171 = 0;
	var uLocal_15172 = 0;
	var uLocal_15173 = 0;
	var uLocal_15174 = 1065353216;
	var uLocal_15175 = 0;
	var uLocal_15176 = 0;
	var uLocal_15177 = 1065353216;
	var uLocal_15178 = 1;
	var uLocal_15179 = 0;
	var uLocal_15180 = -1;
	var uLocal_15181 = 0;
	var uLocal_15182 = 1;
	var uLocal_15183 = 0;
	var uLocal_15184 = 0;
	var uLocal_15185 = 0;
	var uLocal_15186 = 0;
	var uLocal_15187 = 0;
	var uLocal_15188 = 0;
	var uLocal_15189 = 0;
	var uLocal_15190 = 0;
	var uLocal_15191 = 0;
	var uLocal_15192 = 1065353216;
	var uLocal_15193 = 0;
	var uLocal_15194 = 0;
	var uLocal_15195 = 1065353216;
	var uLocal_15196 = 1;
	var uLocal_15197 = 0;
	var uLocal_15198 = -1;
	var uLocal_15199 = 0;
	var uLocal_15200 = 1;
	var uLocal_15201 = 0;
	var uLocal_15202 = 0;
	var uLocal_15203 = 0;
	var uLocal_15204 = 0;
	var uLocal_15205 = 0;
	var uLocal_15206 = 0;
	var uLocal_15207 = 0;
	var uLocal_15208 = 0;
	var uLocal_15209 = 0;
	var uLocal_15210 = 1065353216;
	var uLocal_15211 = 0;
	var uLocal_15212 = 0;
	var uLocal_15213 = 1065353216;
	var uLocal_15214 = 1;
	var uLocal_15215 = 0;
	var uLocal_15216 = -1;
	var uLocal_15217 = 0;
	var uLocal_15218 = 1;
	var uLocal_15219 = 0;
	var uLocal_15220 = 0;
	var uLocal_15221 = 0;
	var uLocal_15222 = 0;
	var uLocal_15223 = 0;
	var uLocal_15224 = 0;
	var uLocal_15225 = 0;
	var uLocal_15226 = 0;
	var uLocal_15227 = 0;
	var uLocal_15228 = 1065353216;
	var uLocal_15229 = 0;
	var uLocal_15230 = 0;
	var uLocal_15231 = 1065353216;
	var uLocal_15232 = 1;
	var uLocal_15233 = 0;
	var uLocal_15234 = -1;
	var uLocal_15235 = 0;
	var uLocal_15236 = 1;
	var uLocal_15237 = 0;
	var uLocal_15238 = 0;
	var uLocal_15239 = 0;
	var uLocal_15240 = 0;
	var uLocal_15241 = 0;
	var uLocal_15242 = 0;
	var uLocal_15243 = 0;
	var uLocal_15244 = 0;
	var uLocal_15245 = 0;
	var uLocal_15246 = 1065353216;
	var uLocal_15247 = 0;
	var uLocal_15248 = 0;
	var uLocal_15249 = 1065353216;
	var uLocal_15250 = 1;
	var uLocal_15251 = 0;
	var uLocal_15252 = -1;
	var uLocal_15253 = 0;
	var uLocal_15254 = 1;
	var uLocal_15255 = 0;
	var uLocal_15256 = 0;
	var uLocal_15257 = 0;
	var uLocal_15258 = 0;
	var uLocal_15259 = 0;
	var uLocal_15260 = 0;
	var uLocal_15261 = 0;
	var uLocal_15262 = 0;
	var uLocal_15263 = 0;
	var uLocal_15264 = 1065353216;
	var uLocal_15265 = 0;
	var uLocal_15266 = 0;
	var uLocal_15267 = 1065353216;
	var uLocal_15268 = 1;
	var uLocal_15269 = 0;
	var uLocal_15270 = -1;
	var uLocal_15271 = 0;
	var uLocal_15272 = 1;
	var uLocal_15273 = 0;
	var uLocal_15274 = 0;
	var uLocal_15275 = 0;
	var uLocal_15276 = 0;
	var uLocal_15277 = 0;
	var uLocal_15278 = 0;
	var uLocal_15279 = 0;
	var uLocal_15280 = 0;
	var uLocal_15281 = 0;
	var uLocal_15282 = 1065353216;
	var uLocal_15283 = 0;
	var uLocal_15284 = 0;
	var uLocal_15285 = 1065353216;
	var uLocal_15286 = 1;
	var uLocal_15287 = 0;
	var uLocal_15288 = -1;
	var uLocal_15289 = 0;
	var uLocal_15290 = 1;
	var uLocal_15291 = 0;
	var uLocal_15292 = 0;
	var uLocal_15293 = 0;
	var uLocal_15294 = 0;
	var uLocal_15295 = 0;
	var uLocal_15296 = 0;
	var uLocal_15297 = 0;
	var uLocal_15298 = 0;
	var uLocal_15299 = 0;
	var uLocal_15300 = 1065353216;
	var uLocal_15301 = 0;
	var uLocal_15302 = 0;
	var uLocal_15303 = 1065353216;
	var uLocal_15304 = 1;
	var uLocal_15305 = 0;
	var uLocal_15306 = -1;
	var uLocal_15307 = 0;
	var uLocal_15308 = 1;
	var uLocal_15309 = 0;
	var uLocal_15310 = 0;
	var uLocal_15311 = 0;
	var uLocal_15312 = 0;
	var uLocal_15313 = 0;
	var uLocal_15314 = 0;
	var uLocal_15315 = 0;
	var uLocal_15316 = 0;
	var uLocal_15317 = 0;
	var uLocal_15318 = 1065353216;
	var uLocal_15319 = 0;
	var uLocal_15320 = 0;
	var uLocal_15321 = 1065353216;
	var uLocal_15322 = 1;
	var uLocal_15323 = 0;
	var uLocal_15324 = -1;
	var uLocal_15325 = 0;
	var uLocal_15326 = 1;
	var uLocal_15327 = 0;
	var uLocal_15328 = 0;
	var uLocal_15329 = 0;
	var uLocal_15330 = 0;
	var uLocal_15331 = 0;
	var uLocal_15332 = 0;
	var uLocal_15333 = 0;
	var uLocal_15334 = 0;
	var uLocal_15335 = 0;
	var uLocal_15336 = 1065353216;
	var uLocal_15337 = 0;
	var uLocal_15338 = 0;
	var uLocal_15339 = 1065353216;
	var uLocal_15340 = 1;
	var uLocal_15341 = 0;
	var uLocal_15342 = -1;
	var uLocal_15343 = 0;
	var uLocal_15344 = 1;
	var uLocal_15345 = 0;
	var uLocal_15346 = 0;
	var uLocal_15347 = 0;
	var uLocal_15348 = 0;
	var uLocal_15349 = 0;
	var uLocal_15350 = 0;
	var uLocal_15351 = 0;
	var uLocal_15352 = 0;
	var uLocal_15353 = 0;
	var uLocal_15354 = 1065353216;
	var uLocal_15355 = 0;
	var uLocal_15356 = 0;
	var uLocal_15357 = 1065353216;
	var uLocal_15358 = 1;
	var uLocal_15359 = 0;
	var uLocal_15360 = -1;
	var uLocal_15361 = 0;
	var uLocal_15362 = 1;
	var uLocal_15363 = 0;
	var uLocal_15364 = 0;
	var uLocal_15365 = 0;
	var uLocal_15366 = 0;
	var uLocal_15367 = 0;
	var uLocal_15368 = 0;
	var uLocal_15369 = 0;
	var uLocal_15370 = 0;
	var uLocal_15371 = 0;
	var uLocal_15372 = 1065353216;
	var uLocal_15373 = 0;
	var uLocal_15374 = 0;
	var uLocal_15375 = 1065353216;
	var uLocal_15376 = 1;
	var uLocal_15377 = 0;
	var uLocal_15378 = -1;
	var uLocal_15379 = 0;
	var uLocal_15380 = 1;
	var uLocal_15381 = 0;
	var uLocal_15382 = 0;
	var uLocal_15383 = 0;
	var uLocal_15384 = 0;
	var uLocal_15385 = 0;
	var uLocal_15386 = 0;
	var uLocal_15387 = 0;
	var uLocal_15388 = 0;
	var uLocal_15389 = 0;
	var uLocal_15390 = 1065353216;
	var uLocal_15391 = 0;
	var uLocal_15392 = 0;
	var uLocal_15393 = 1065353216;
	var uLocal_15394 = 1;
	var uLocal_15395 = 0;
	var uLocal_15396 = -1;
	var uLocal_15397 = 0;
	var uLocal_15398 = 1;
	var uLocal_15399 = 0;
	var uLocal_15400 = 0;
	var uLocal_15401 = 0;
	var uLocal_15402 = 0;
	var uLocal_15403 = 0;
	var uLocal_15404 = 0;
	var uLocal_15405 = 0;
	var uLocal_15406 = 0;
	var uLocal_15407 = 0;
	var uLocal_15408 = 1065353216;
	var uLocal_15409 = 0;
	var uLocal_15410 = 0;
	var uLocal_15411 = 1065353216;
	var uLocal_15412 = 1;
	var uLocal_15413 = 0;
	var uLocal_15414 = -1;
	var uLocal_15415 = 0;
	var uLocal_15416 = 1;
	var uLocal_15417 = 0;
	var uLocal_15418 = 0;
	var uLocal_15419 = 0;
	var uLocal_15420 = 0;
	var uLocal_15421 = 0;
	var uLocal_15422 = 0;
	var uLocal_15423 = 0;
	var uLocal_15424 = 0;
	var uLocal_15425 = 0;
	var uLocal_15426 = 1065353216;
	var uLocal_15427 = 0;
	var uLocal_15428 = 0;
	var uLocal_15429 = 1065353216;
	var uLocal_15430 = 1;
	var uLocal_15431 = 0;
	var uLocal_15432 = -1;
	var uLocal_15433 = 0;
	var uLocal_15434 = 1;
	var uLocal_15435 = 0;
	var uLocal_15436 = 0;
	var uLocal_15437 = 0;
	var uLocal_15438 = 0;
	var uLocal_15439 = 0;
	var uLocal_15440 = 0;
	var uLocal_15441 = 0;
	var uLocal_15442 = 0;
	var uLocal_15443 = 0;
	var uLocal_15444 = 1065353216;
	var uLocal_15445 = 0;
	var uLocal_15446 = 0;
	var uLocal_15447 = 1065353216;
	var uLocal_15448 = 1;
	var uLocal_15449 = 0;
	var uLocal_15450 = 8;
	var uLocal_15451 = 0;
	var uLocal_15452 = 0;
	var uLocal_15453 = 0;
	var uLocal_15454 = 0;
	var uLocal_15455 = 0;
	var uLocal_15456 = 0;
	var uLocal_15457 = 0;
	var uLocal_15458 = 0;
	var uLocal_15459 = 0;
	var uLocal_15460 = 0;
	var uLocal_15461 = 0;
	var uLocal_15462 = 0;
	var uLocal_15463 = 0;
	var uLocal_15464 = 0;
	var uLocal_15465 = 0;
	var uLocal_15466 = 0;
	var uLocal_15467 = 0;
	var uLocal_15468 = 0;
	var uLocal_15469 = 0;
	var uLocal_15470 = 0;
	var uLocal_15471 = 0;
	var uLocal_15472 = 0;
	var uLocal_15473 = 0;
	var uLocal_15474 = 0;
	var uLocal_15475 = 0;
	var uLocal_15476 = 0;
	var uLocal_15477 = 0;
	var uLocal_15478 = 0;
	var uLocal_15479 = 0;
	var uLocal_15480 = 0;
	var uLocal_15481 = 0;
	var uLocal_15482 = 0;
	var uLocal_15483 = 0;
	var uLocal_15484 = 0;
	var uLocal_15485 = 0;
	var uLocal_15486 = 0;
	var uLocal_15487 = 0;
	var uLocal_15488 = 0;
	var uLocal_15489 = 0;
	var uLocal_15490 = 0;
	var uLocal_15491 = 0;
	var uLocal_15492 = 0;
	var uLocal_15493 = 0;
	var uLocal_15494 = 0;
	var uLocal_15495 = 0;
	var uLocal_15496 = 0;
	var uLocal_15497 = 0;
	var uLocal_15498 = 0;
	var uLocal_15499 = 0;
	var uLocal_15500 = 0;
	var uLocal_15501 = 0;
	var uLocal_15502 = 0;
	var uLocal_15503 = 0;
	var uLocal_15504 = 0;
	var uLocal_15505 = 0;
	var uLocal_15506 = 0;
	var uLocal_15507 = 0;
	var uLocal_15508 = 0;
	var uLocal_15509 = 0;
	var uLocal_15510 = 0;
	var uLocal_15511 = 0;
	var uLocal_15512 = 0;
	var uLocal_15513 = 0;
	var uLocal_15514 = 0;
	var uLocal_15515 = 0;
	var uLocal_15516 = 0;
	var uLocal_15517 = 0;
	var uLocal_15518 = 0;
	var uLocal_15519 = 0;
	var uLocal_15520 = 0;
	var uLocal_15521 = 0;
	var uLocal_15522 = 0;
	var uLocal_15523 = 0;
	var uLocal_15524 = 0;
	var uLocal_15525 = 0;
	var uLocal_15526 = 0;
	var uLocal_15527 = 0;
	var uLocal_15528 = 0;
	var uLocal_15529 = 0;
	var uLocal_15530 = 0;
	var uLocal_15531 = 0;
	var uLocal_15532 = 0;
	var uLocal_15533 = 0;
	var uLocal_15534 = 0;
	var uLocal_15535 = 0;
	var uLocal_15536 = 0;
	var uLocal_15537 = 0;
	var uLocal_15538 = 0;
	var uLocal_15539 = 0;
	var uLocal_15540 = 0;
	var uLocal_15541 = 0;
	var uLocal_15542 = 0;
	var uLocal_15543 = 0;
	var uLocal_15544 = 0;
	var uLocal_15545 = 0;
	var uLocal_15546 = 0;
	var uLocal_15547 = 0;
	var uLocal_15548 = 0;
	var uLocal_15549 = 0;
	var uLocal_15550 = 0;
	var uLocal_15551 = 0;
	var uLocal_15552 = 0;
	var uLocal_15553 = 0;
	var uLocal_15554 = 0;
	var uLocal_15555 = 0;
	var uLocal_15556 = 0;
	var uLocal_15557 = 0;
	var uLocal_15558 = 0;
	var uLocal_15559 = 0;
	var uLocal_15560 = 0;
	var uLocal_15561 = 0;
	var uLocal_15562 = 0;
	var uLocal_15563 = 0;
	var uLocal_15564 = 0;
	var uLocal_15565 = 0;
	var uLocal_15566 = 0;
	var uLocal_15567 = 0;
	var uLocal_15568 = 0;
	var uLocal_15569 = 0;
	var uLocal_15570 = 0;
	var uLocal_15571 = 0;
	var uLocal_15572 = 0;
	var uLocal_15573 = 0;
	var uLocal_15574 = 0;
	var uLocal_15575 = 0;
	var uLocal_15576 = 0;
	var uLocal_15577 = 0;
	var uLocal_15578 = 0;
	var uLocal_15579 = 0;
	var uLocal_15580 = 0;
	var uLocal_15581 = 0;
	var uLocal_15582 = 0;
	var uLocal_15583 = 0;
	var uLocal_15584 = 0;
	var uLocal_15585 = 0;
	var uLocal_15586 = 0;
	var uLocal_15587 = 0;
	var uLocal_15588 = 0;
	var uLocal_15589 = 0;
	var uLocal_15590 = 0;
	var uLocal_15591 = 0;
	var uLocal_15592 = 0;
	var uLocal_15593 = 0;
	var uLocal_15594 = 0;
	var uLocal_15595 = 0;
	var uLocal_15596 = 0;
	var uLocal_15597 = 0;
	var uLocal_15598 = 0;
	var uLocal_15599 = 0;
	var uLocal_15600 = 0;
	var uLocal_15601 = 0;
	var uLocal_15602 = 0;
	var uLocal_15603 = 0;
	var uLocal_15604 = 0;
	var uLocal_15605 = 0;
	var uLocal_15606 = 0;
	var uLocal_15607 = 0;
	var uLocal_15608 = 0;
	var uLocal_15609 = 0;
	var uLocal_15610 = 0;
	var uLocal_15611 = 0;
	var uLocal_15612 = 0;
	var uLocal_15613 = 0;
	var uLocal_15614 = 0;
	var uLocal_15615 = 0;
	var uLocal_15616 = 0;
	var uLocal_15617 = 0;
	var uLocal_15618 = 0;
	var uLocal_15619 = 0;
	var uLocal_15620 = 0;
	var uLocal_15621 = 0;
	var uLocal_15622 = 0;
	var uLocal_15623 = 0;
	var uLocal_15624 = 0;
	var uLocal_15625 = 0;
	var uLocal_15626 = 0;
	var uLocal_15627 = 0;
	var uLocal_15628 = 0;
	var uLocal_15629 = 0;
	var uLocal_15630 = 0;
	var uLocal_15631 = 0;
	var uLocal_15632 = 0;
	var uLocal_15633 = 0;
	var uLocal_15634 = 0;
	var uLocal_15635 = 0;
	var uLocal_15636 = 0;
	var uLocal_15637 = 0;
	var uLocal_15638 = 0;
	var uLocal_15639 = 0;
	var uLocal_15640 = 0;
	var uLocal_15641 = 0;
	var uLocal_15642 = 0;
	var uLocal_15643 = 0;
	var uLocal_15644 = 0;
	var uLocal_15645 = 0;
	var uLocal_15646 = 0;
	var uLocal_15647 = 0;
	var uLocal_15648 = 0;
	var uLocal_15649 = 0;
	var uLocal_15650 = 0;
	var uLocal_15651 = 0;
	var uLocal_15652 = 0;
	var uLocal_15653 = 0;
	var uLocal_15654 = 0;
	var uLocal_15655 = 0;
	var uLocal_15656 = 0;
	var uLocal_15657 = 0;
	var uLocal_15658 = 0;
	var uLocal_15659 = 0;
	var uLocal_15660 = 0;
	var uLocal_15661 = 0;
	var uLocal_15662 = 0;
	var uLocal_15663 = 0;
	var uLocal_15664 = 0;
	var uLocal_15665 = 0;
	var uLocal_15666 = 0;
	var uLocal_15667 = 0;
	var uLocal_15668 = 0;
	var uLocal_15669 = 0;
	var uLocal_15670 = 0;
	var uLocal_15671 = 0;
	var uLocal_15672 = 0;
	var uLocal_15673 = 0;
	var uLocal_15674 = 0;
	var uLocal_15675 = 0;
	var uLocal_15676 = 0;
	var uLocal_15677 = 0;
	var uLocal_15678 = 0;
	var uLocal_15679 = 0;
	var uLocal_15680 = 0;
	var uLocal_15681 = 0;
	var uLocal_15682 = 0;
	var uLocal_15683 = 0;
	var uLocal_15684 = 0;
	var uLocal_15685 = 0;
	var uLocal_15686 = 0;
	var uLocal_15687 = 0;
	var uLocal_15688 = 0;
	var uLocal_15689 = 0;
	var uLocal_15690 = 0;
	var uLocal_15691 = 0;
	var uLocal_15692 = 0;
	var uLocal_15693 = 0;
	var uLocal_15694 = 0;
	var uLocal_15695 = 0;
	var uLocal_15696 = 0;
	var uLocal_15697 = 0;
	var uLocal_15698 = 0;
	var uLocal_15699 = 0;
	var uLocal_15700 = 0;
	var uLocal_15701 = 0;
	var uLocal_15702 = 0;
	var uLocal_15703 = 0;
	var uLocal_15704 = 0;
	var uLocal_15705 = 0;
	var uLocal_15706 = 0;
	var uLocal_15707 = 0;
	var uLocal_15708 = 0;
	var uLocal_15709 = 0;
	var uLocal_15710 = 0;
	var uLocal_15711 = 0;
	var uLocal_15712 = 0;
	var uLocal_15713 = 0;
	var uLocal_15714 = 0;
	var uLocal_15715 = 0;
	var uLocal_15716 = 0;
	var uLocal_15717 = 0;
	var uLocal_15718 = 0;
	var uLocal_15719 = 0;
	var uLocal_15720 = 0;
	var uLocal_15721 = 0;
	var uLocal_15722 = 0;
	var uLocal_15723 = 0;
	var uLocal_15724 = 0;
	var uLocal_15725 = 0;
	var uLocal_15726 = 0;
	var uLocal_15727 = 0;
	var uLocal_15728 = 0;
	var uLocal_15729 = 0;
	var uLocal_15730 = 0;
	var uLocal_15731 = 0;
	var uLocal_15732 = 0;
	var uLocal_15733 = 0;
	var uLocal_15734 = 0;
	var uLocal_15735 = 0;
	var uLocal_15736 = 0;
	var uLocal_15737 = 0;
	var uLocal_15738 = 0;
	var uLocal_15739 = 0;
	var uLocal_15740 = 0;
	var uLocal_15741 = 0;
	var uLocal_15742 = 0;
	var uLocal_15743 = 0;
	var uLocal_15744 = 0;
	var uLocal_15745 = 0;
	var uLocal_15746 = 0;
	var uLocal_15747 = 0;
	var uLocal_15748 = 0;
	var uLocal_15749 = 0;
	var uLocal_15750 = 0;
	var uLocal_15751 = 0;
	var uLocal_15752 = 0;
	var uLocal_15753 = 0;
	var uLocal_15754 = 0;
	var uLocal_15755 = 0;
	var uLocal_15756 = 0;
	var uLocal_15757 = 0;
	var uLocal_15758 = 0;
	var uLocal_15759 = 0;
	var uLocal_15760 = 0;
	var uLocal_15761 = 0;
	var uLocal_15762 = 0;
	var uLocal_15763 = 0;
	var uLocal_15764 = 0;
	var uLocal_15765 = 0;
	var uLocal_15766 = 0;
	var uLocal_15767 = 0;
	var uLocal_15768 = 0;
	var uLocal_15769 = 0;
	var uLocal_15770 = 0;
	var uLocal_15771 = 0;
	var uLocal_15772 = 0;
	var uLocal_15773 = 0;
	var uLocal_15774 = 0;
	var uLocal_15775 = 0;
	var uLocal_15776 = 0;
	var uLocal_15777 = 0;
	var uLocal_15778 = 0;
	var uLocal_15779 = 8;
	var uLocal_15780 = 0;
	var uLocal_15781 = 0;
	var uLocal_15782 = 0;
	var uLocal_15783 = 0;
	var uLocal_15784 = 0;
	var uLocal_15785 = 0;
	var uLocal_15786 = 0;
	var uLocal_15787 = 0;
	var uLocal_15788 = 0;
	var uLocal_15789 = 0;
	var uLocal_15790 = 0;
	var uLocal_15791 = 0;
	var uLocal_15792 = 0;
	var uLocal_15793 = 0;
	var uLocal_15794 = 0;
	var uLocal_15795 = 0;
	var uLocal_15796 = 0;
	var uLocal_15797 = 0;
	var uLocal_15798 = 0;
	var uLocal_15799 = 0;
	var uLocal_15800 = -1;
	var uLocal_15801 = 0;
	var uLocal_15802 = 0;
	var uLocal_15803 = 0;
	var uLocal_15804 = 0;
	var uLocal_15805 = 0;
	var uLocal_15806 = 0;
	var uLocal_15807 = 0;
	var uLocal_15808 = 0;
	var uLocal_15809 = 0;
	var uLocal_15810 = 0;
	var uLocal_15811 = 0;
	var uLocal_15812 = 0;
	var uLocal_15813 = 0;
	var uLocal_15814 = 0;
	var uLocal_15815 = 0;
	var uLocal_15816 = 0;
	var uLocal_15817 = 0;
	var uLocal_15818 = 0;
	var uLocal_15819 = 0;
	var uLocal_15820 = 0;
	var uLocal_15821 = 0;
	var uLocal_15822 = -1;
	var uLocal_15823 = 0;
	var uLocal_15824 = 0;
	var uLocal_15825 = 0;
	var uLocal_15826 = 0;
	var uLocal_15827 = 0;
	var uLocal_15828 = 0;
	var uLocal_15829 = 0;
	var uLocal_15830 = 0;
	var uLocal_15831 = 0;
	var uLocal_15832 = 0;
	var uLocal_15833 = 0;
	var uLocal_15834 = 0;
	var uLocal_15835 = 0;
	var uLocal_15836 = 0;
	var uLocal_15837 = 0;
	var uLocal_15838 = 0;
	var uLocal_15839 = 0;
	var uLocal_15840 = 0;
	var uLocal_15841 = 0;
	var uLocal_15842 = 0;
	var uLocal_15843 = 0;
	var uLocal_15844 = -1;
	var uLocal_15845 = 0;
	var uLocal_15846 = 0;
	var uLocal_15847 = 0;
	var uLocal_15848 = 0;
	var uLocal_15849 = 0;
	var uLocal_15850 = 0;
	var uLocal_15851 = 0;
	var uLocal_15852 = 0;
	var uLocal_15853 = 0;
	var uLocal_15854 = 0;
	var uLocal_15855 = 0;
	var uLocal_15856 = 0;
	var uLocal_15857 = 0;
	var uLocal_15858 = 0;
	var uLocal_15859 = 0;
	var uLocal_15860 = 0;
	var uLocal_15861 = 0;
	var uLocal_15862 = 0;
	var uLocal_15863 = 0;
	var uLocal_15864 = 0;
	var uLocal_15865 = 0;
	var uLocal_15866 = -1;
	var uLocal_15867 = 0;
	var uLocal_15868 = 0;
	var uLocal_15869 = 0;
	var uLocal_15870 = 0;
	var uLocal_15871 = 0;
	var uLocal_15872 = 0;
	var uLocal_15873 = 0;
	var uLocal_15874 = 0;
	var uLocal_15875 = 0;
	var uLocal_15876 = 0;
	var uLocal_15877 = 0;
	var uLocal_15878 = 0;
	var uLocal_15879 = 0;
	var uLocal_15880 = 0;
	var uLocal_15881 = 0;
	var uLocal_15882 = 0;
	var uLocal_15883 = 0;
	var uLocal_15884 = 0;
	var uLocal_15885 = 0;
	var uLocal_15886 = 0;
	var uLocal_15887 = 0;
	var uLocal_15888 = -1;
	var uLocal_15889 = 0;
	var uLocal_15890 = 0;
	var uLocal_15891 = 0;
	var uLocal_15892 = 0;
	var uLocal_15893 = 0;
	var uLocal_15894 = 0;
	var uLocal_15895 = 0;
	var uLocal_15896 = 0;
	var uLocal_15897 = 0;
	var uLocal_15898 = 0;
	var uLocal_15899 = 0;
	var uLocal_15900 = 0;
	var uLocal_15901 = 0;
	var uLocal_15902 = 0;
	var uLocal_15903 = 0;
	var uLocal_15904 = 0;
	var uLocal_15905 = 0;
	var uLocal_15906 = 0;
	var uLocal_15907 = 0;
	var uLocal_15908 = 0;
	var uLocal_15909 = 0;
	var uLocal_15910 = -1;
	var uLocal_15911 = 0;
	var uLocal_15912 = 0;
	var uLocal_15913 = 0;
	var uLocal_15914 = 0;
	var uLocal_15915 = 0;
	var uLocal_15916 = 0;
	var uLocal_15917 = 0;
	var uLocal_15918 = 0;
	var uLocal_15919 = 0;
	var uLocal_15920 = 0;
	var uLocal_15921 = 0;
	var uLocal_15922 = 0;
	var uLocal_15923 = 0;
	var uLocal_15924 = 0;
	var uLocal_15925 = 0;
	var uLocal_15926 = 0;
	var uLocal_15927 = 0;
	var uLocal_15928 = 0;
	var uLocal_15929 = 0;
	var uLocal_15930 = 0;
	var uLocal_15931 = 0;
	var uLocal_15932 = -1;
	var uLocal_15933 = 0;
	var uLocal_15934 = 0;
	var uLocal_15935 = 0;
	var uLocal_15936 = 0;
	var uLocal_15937 = 0;
	var uLocal_15938 = 0;
	var uLocal_15939 = 0;
	var uLocal_15940 = 0;
	var uLocal_15941 = 0;
	var uLocal_15942 = 0;
	var uLocal_15943 = 0;
	var uLocal_15944 = 0;
	var uLocal_15945 = 0;
	var uLocal_15946 = 0;
	var uLocal_15947 = 0;
	var uLocal_15948 = 0;
	var uLocal_15949 = 0;
	var uLocal_15950 = 0;
	var uLocal_15951 = 0;
	var uLocal_15952 = 0;
	var uLocal_15953 = 0;
	var uLocal_15954 = -1;
	var uLocal_15955 = 0;
	var uLocal_15956 = 11;
	var uLocal_15957 = 0;
	var uLocal_15958 = 0;
	var uLocal_15959 = 0;
	var uLocal_15960 = 0;
	var uLocal_15961 = 0;
	var uLocal_15962 = 0;
	var uLocal_15963 = 0;
	var uLocal_15964 = 0;
	var uLocal_15965 = 0;
	var uLocal_15966 = 0;
	var uLocal_15967 = 0;
	var uLocal_15968 = 0;
	var uLocal_15969 = 0;
	var uLocal_15970 = 0;
	var uLocal_15971 = 0;
	var uLocal_15972 = 0;
	var uLocal_15973 = 0;
	var uLocal_15974 = 0;
	var uLocal_15975 = 0;
	var uLocal_15976 = 0;
	var uLocal_15977 = 0;
	var uLocal_15978 = 0;
	var uLocal_15979 = 0;
	var uLocal_15980 = 0;
	var uLocal_15981 = 0;
	var uLocal_15982 = 0;
	var uLocal_15983 = 0;
	var uLocal_15984 = 0;
	var uLocal_15985 = 0;
	var uLocal_15986 = 0;
	var uLocal_15987 = 0;
	var uLocal_15988 = 0;
	var uLocal_15989 = 0;
	var uLocal_15990 = 0;
	var uLocal_15991 = 0;
	var uLocal_15992 = 0;
	var uLocal_15993 = 0;
	var uLocal_15994 = 0;
	var uLocal_15995 = 0;
	var uLocal_15996 = 0;
	var uLocal_15997 = 0;
	var uLocal_15998 = 0;
	var uLocal_15999 = 0;
	var uLocal_16000 = 0;
	var uLocal_16001 = 0;
	var uLocal_16002 = 0;
	var uLocal_16003 = 0;
	var uLocal_16004 = 0;
	var uLocal_16005 = 0;
	var uLocal_16006 = 0;
	var uLocal_16007 = 0;
	var uLocal_16008 = 0;
	var uLocal_16009 = 0;
	var uLocal_16010 = 0;
	var uLocal_16011 = 0;
	var uLocal_16012 = 0;
	var uLocal_16013 = 0;
	var uLocal_16014 = 0;
	var uLocal_16015 = 0;
	var uLocal_16016 = 0;
	var uLocal_16017 = 0;
	var uLocal_16018 = 0;
	var uLocal_16019 = 0;
	var uLocal_16020 = 0;
	var uLocal_16021 = 0;
	var uLocal_16022 = 0;
	var uLocal_16023 = 0;
	var uLocal_16024 = 0;
	var uLocal_16025 = 0;
	var uLocal_16026 = 0;
	var uLocal_16027 = 0;
	var uLocal_16028 = 0;
	var uLocal_16029 = 0;
	var uLocal_16030 = 0;
	var uLocal_16031 = 0;
	var uLocal_16032 = 0;
	var uLocal_16033 = 0;
	var uLocal_16034 = 0;
	var uLocal_16035 = 0;
	var uLocal_16036 = 0;
	var uLocal_16037 = 0;
	var uLocal_16038 = 0;
	var uLocal_16039 = 0;
	var uLocal_16040 = 0;
	var uLocal_16041 = 0;
	var uLocal_16042 = 0;
	var uLocal_16043 = 0;
	var uLocal_16044 = 0;
	var uLocal_16045 = 0;
	var uLocal_16046 = 0;
	var uLocal_16047 = 0;
	var uLocal_16048 = 0;
	var uLocal_16049 = 0;
	var uLocal_16050 = 0;
	var uLocal_16051 = 0;
	var uLocal_16052 = 0;
	var uLocal_16053 = 0;
	var uLocal_16054 = 0;
	var uLocal_16055 = 0;
	var uLocal_16056 = 0;
	var uLocal_16057 = 0;
	var uLocal_16058 = 0;
	var uLocal_16059 = 0;
	var uLocal_16060 = 0;
	var uLocal_16061 = 0;
	var uLocal_16062 = 0;
	var uLocal_16063 = 0;
	var uLocal_16064 = 0;
	var uLocal_16065 = 0;
	var uLocal_16066 = 0;
	var uLocal_16067 = 2;
	var uLocal_16068 = 0;
	var uLocal_16069 = 0;
	var uLocal_16070 = 0;
	var uLocal_16071 = 0;
	var uLocal_16072 = 0;
	var uLocal_16073 = 0;
	var uLocal_16074 = 0;
	var uLocal_16075 = 0;
	var uLocal_16076 = 0;
	var uLocal_16077 = 0;
	var uLocal_16078 = 0;
	var uLocal_16079 = 0;
	var uLocal_16080 = 0;
	var uLocal_16081 = 0;
	var uLocal_16082 = 0;
	var uLocal_16083 = 0;
	var uLocal_16084 = 0;
	var uLocal_16085 = 0;
	var uLocal_16086 = 0;
	var uLocal_16087 = 0;
	var uLocal_16088 = 0;
	var uLocal_16089 = 0;
	var uLocal_16090 = 0;
	var uLocal_16091 = 0;
	var uLocal_16092 = 0;
	var uLocal_16093 = 0;
	var uLocal_16094 = 0;
	var uLocal_16095 = 0;
	var uLocal_16096 = 0;
	var uLocal_16097 = 0;
	var uLocal_16098 = 0;
	var uLocal_16099 = 0;
	var uLocal_16100 = 0;
	var uLocal_16101 = 0;
	var uLocal_16102 = 2;
	var uLocal_16103 = 0;
	var uLocal_16104 = 0;
	var uLocal_16105 = 0;
	var uLocal_16106 = 0;
	var uLocal_16107 = 0;
	var uLocal_16108 = 0;
	var uLocal_16109 = 0;
	var uLocal_16110 = 0;
	var uLocal_16111 = 0;
	var uLocal_16112 = 0;
	var uLocal_16113 = 0;
	var uLocal_16114 = 0;
	var uLocal_16115 = 0;
	var uLocal_16116 = 0;
	var uLocal_16117 = 0;
	var uLocal_16118 = 0;
	var uLocal_16119 = -1;
	var uLocal_16120 = 0;
	var uLocal_16121 = 0;
	var uLocal_16122 = -1;
	var uLocal_16123 = -1082130432;
	var uLocal_16124 = 0;
	var uLocal_16125 = 0;
	var uLocal_16126 = 0;
	var uLocal_16127 = 0;
	var uLocal_16128 = 0;
	var uLocal_16129 = 0;
	var uLocal_16130 = 0;
	var uLocal_16131 = 0;
	var uLocal_16132 = 0;
	var uLocal_16133 = 0;
	var uLocal_16134 = 0;
	var uLocal_16135 = 0;
	var uLocal_16136 = 0;
	var uLocal_16137 = 0;
	var uLocal_16138 = 0;
	var uLocal_16139 = 0;
	var uLocal_16140 = 0;
	var uLocal_16141 = 0;
	var uLocal_16142 = 0;
	var uLocal_16143 = 0;
	var uLocal_16144 = 0;
	var uLocal_16145 = 0;
	var uLocal_16146 = 0;
	var uLocal_16147 = 0;
	var uLocal_16148 = 0;
	var uLocal_16149 = 0;
	var uLocal_16150 = 0;
	var uLocal_16151 = 0;
	var uLocal_16152 = 0;
	var uLocal_16153 = 0;
	var uLocal_16154 = 0;
	var uLocal_16155 = 0;
	var uLocal_16156 = 0;
	var uLocal_16157 = 0;
	var uLocal_16158 = 0;
	var uLocal_16159 = 0;
	var uLocal_16160 = 0;
	var uLocal_16161 = 0;
	var uLocal_16162 = 0;
	var uLocal_16163 = 0;
	var uLocal_16164 = 0;
	var uLocal_16165 = 0;
	var uLocal_16166 = 0;
	var uLocal_16167 = 0;
	var uLocal_16168 = 0;
	var uLocal_16169 = 0;
	var uLocal_16170 = 0;
	var uLocal_16171 = 0;
	var uLocal_16172 = 0;
	var uLocal_16173 = 0;
	var uLocal_16174 = 0;
	var uLocal_16175 = 0;
	var uLocal_16176 = 0;
	var uLocal_16177 = 0;
	var uLocal_16178 = 0;
	var uLocal_16179 = 0;
	var uLocal_16180 = 0;
	var uLocal_16181 = 0;
	var uLocal_16182 = 0;
	var uLocal_16183 = 0;
	var uLocal_16184 = 0;
	var uLocal_16185 = 0;
	var uLocal_16186 = 0;
	var uLocal_16187 = 0;
	var uLocal_16188 = 0;
	var uLocal_16189 = 0;
	var uLocal_16190 = 0;
	var uLocal_16191 = 0;
	var uLocal_16192 = 0;
	var uLocal_16193 = 0;
	var uLocal_16194 = 0;
	var uLocal_16195 = 0;
	var uLocal_16196 = 0;
	var uLocal_16197 = 0;
	var uLocal_16198 = 0;
	var uLocal_16199 = 0;
	var uLocal_16200 = 0;
	var uLocal_16201 = 0;
	var uLocal_16202 = 0;
	var uLocal_16203 = 0;
	var uLocal_16204 = 0;
	var uLocal_16205 = 24;
	var uLocal_16206 = 0;
	var uLocal_16207 = 0;
	var uLocal_16208 = 0;
	var uLocal_16209 = 0;
	var uLocal_16210 = 0;
	var uLocal_16211 = 0;
	var uLocal_16212 = 0;
	var uLocal_16213 = 0;
	var uLocal_16214 = 0;
	var uLocal_16215 = 0;
	var uLocal_16216 = 0;
	var uLocal_16217 = 0;
	var uLocal_16218 = 0;
	var uLocal_16219 = 0;
	var uLocal_16220 = 0;
	var uLocal_16221 = 0;
	var uLocal_16222 = 0;
	var uLocal_16223 = 0;
	var uLocal_16224 = 0;
	var uLocal_16225 = 0;
	var uLocal_16226 = 0;
	var uLocal_16227 = 0;
	var uLocal_16228 = 0;
	var uLocal_16229 = 0;
	var uLocal_16230 = 0;
	var uLocal_16231 = 0;
	var uLocal_16232 = 0;
	var uLocal_16233 = 0;
	var uLocal_16234 = 0;
	var uLocal_16235 = 0;
	var uLocal_16236 = 0;
	var uLocal_16237 = 0;
	var uLocal_16238 = 0;
	var uLocal_16239 = 0;
	var uLocal_16240 = 0;
	var uLocal_16241 = 0;
	var uLocal_16242 = 0;
	var uLocal_16243 = 0;
	var uLocal_16244 = 0;
	var uLocal_16245 = 0;
	var uLocal_16246 = 0;
	var uLocal_16247 = 0;
	var uLocal_16248 = 0;
	var uLocal_16249 = 0;
	var uLocal_16250 = 0;
	var uLocal_16251 = 0;
	var uLocal_16252 = 0;
	var uLocal_16253 = 0;
	var uLocal_16254 = 0;
	var uLocal_16255 = 0;
	var uLocal_16256 = 0;
	var uLocal_16257 = 0;
	var uLocal_16258 = 0;
	var uLocal_16259 = 0;
	var uLocal_16260 = 0;
	var uLocal_16261 = 0;
	var uLocal_16262 = 0;
	var uLocal_16263 = 0;
	var uLocal_16264 = 0;
	var uLocal_16265 = 0;
	var uLocal_16266 = 0;
	var uLocal_16267 = 0;
	var uLocal_16268 = 0;
	var uLocal_16269 = 0;
	var uLocal_16270 = 0;
	var uLocal_16271 = 0;
	var uLocal_16272 = 0;
	var uLocal_16273 = 0;
	var uLocal_16274 = 0;
	var uLocal_16275 = 0;
	var uLocal_16276 = 0;
	var uLocal_16277 = 0;
	var uLocal_16278 = 0;
	var uLocal_16279 = 0;
	var uLocal_16280 = 0;
	var uLocal_16281 = 0;
	var uLocal_16282 = 0;
	var uLocal_16283 = 0;
	var uLocal_16284 = 0;
	var uLocal_16285 = 0;
	var uLocal_16286 = 0;
	var uLocal_16287 = 0;
	var uLocal_16288 = 0;
	var uLocal_16289 = 0;
	var uLocal_16290 = 0;
	var uLocal_16291 = 0;
	var uLocal_16292 = 0;
	var uLocal_16293 = 0;
	var uLocal_16294 = 0;
	var uLocal_16295 = 0;
	var uLocal_16296 = 0;
	var uLocal_16297 = 0;
	var uLocal_16298 = 0;
	var uLocal_16299 = 0;
	var uLocal_16300 = 0;
	var uLocal_16301 = 0;
	var uLocal_16302 = 0;
	var uLocal_16303 = 0;
	var uLocal_16304 = 0;
	var uLocal_16305 = 0;
	var uLocal_16306 = 0;
	var uLocal_16307 = 0;
	var uLocal_16308 = 0;
	var uLocal_16309 = 0;
	var uLocal_16310 = 0;
	var uLocal_16311 = 0;
	var uLocal_16312 = 0;
	var uLocal_16313 = 0;
	var uLocal_16314 = 0;
	var uLocal_16315 = 0;
	var uLocal_16316 = 0;
	var uLocal_16317 = 0;
	var uLocal_16318 = 0;
	var uLocal_16319 = 0;
	var uLocal_16320 = 0;
	var uLocal_16321 = 0;
	var uLocal_16322 = 0;
	var uLocal_16323 = 0;
	var uLocal_16324 = 0;
	var uLocal_16325 = 0;
	var uLocal_16326 = 0;
	var uLocal_16327 = 0;
	var uLocal_16328 = 0;
	var uLocal_16329 = -1;
	var uLocal_16330 = 0;
	var uLocal_16331 = 0;
	var uLocal_16332 = 0;
	var uLocal_16333 = 0;
	var uLocal_16334 = 0;
	var uLocal_16335 = 0;
	var uLocal_16336 = 0;
	var uLocal_16337 = 0;
	var uLocal_16338 = 0;
	var uLocal_16339 = 0;
	var uLocal_16340 = 0;
	var uLocal_16341 = 0;
	var uLocal_16342 = 0;
	var uLocal_16343 = 0;
	var uLocal_16344 = 0;
	var uLocal_16345 = 0;
	var uLocal_16346 = 0;
	var uLocal_16347 = 0;
	var uLocal_16348 = 0;
	var uLocal_16349 = 0;
	var uLocal_16350 = 0;
	var uLocal_16351 = 0;
	var uLocal_16352 = 0;
	var uLocal_16353 = 0;
	var uLocal_16354 = 0;
	var uLocal_16355 = 0;
	var uLocal_16356 = -1;
	var uLocal_16357 = 20;
	var uLocal_16358 = 0;
	var uLocal_16359 = 0;
	var uLocal_16360 = 0;
	var uLocal_16361 = 0;
	var uLocal_16362 = 0;
	var uLocal_16363 = 0;
	var uLocal_16364 = 0;
	var uLocal_16365 = 0;
	var uLocal_16366 = 0;
	var uLocal_16367 = 0;
	var uLocal_16368 = 0;
	var uLocal_16369 = 0;
	var uLocal_16370 = 0;
	var uLocal_16371 = 0;
	var uLocal_16372 = 0;
	var uLocal_16373 = 0;
	var uLocal_16374 = 0;
	var uLocal_16375 = 0;
	var uLocal_16376 = 0;
	var uLocal_16377 = 0;
	var uLocal_16378 = 0;
	var uLocal_16379 = 0;
	var uLocal_16380 = 0;
	var uLocal_16381 = 0;
	var uLocal_16382 = 0;
	var uLocal_16383 = 0;
	var uLocal_16384 = 0;
	var uLocal_16385 = 1028443341;
	var uLocal_16386 = 1038174126;
	var uLocal_16387 = 1065353216;
	var uLocal_16388 = 1065353216;
	var uLocal_16389 = 1086324736;
	var uLocal_16390 = 1082130432;
	var uLocal_16391 = 1073741824;
	var uLocal_16392 = 1065353216;
	var uLocal_16393 = 1108082688;
	var uLocal_16394 = 1108082688;
	var uLocal_16395 = 3000;
	var uLocal_16396 = 1092616192;
	var uLocal_16397 = 0;
	var uLocal_16398 = 0;
	var uLocal_16399 = 0;
	var uLocal_16400 = 0;
	var uLocal_16401 = 0;
	var uLocal_16402 = 0;
	var uLocal_16403 = 0;
	var uLocal_16404 = 0;
	var uLocal_16405 = 0;
	var uLocal_16406 = 0;
	var uLocal_16407 = 0;
	var uLocal_16408 = 0;
	var uLocal_16409 = 0;
	var uLocal_16410 = 0;
	var uLocal_16411 = 0;
	var uLocal_16412 = 0;
	var uLocal_16413 = 0;
	var uLocal_16414 = 0;
	var uLocal_16415 = 0;
	var uLocal_16416 = 0;
	var uLocal_16417 = 0;
	var uLocal_16418 = 0;
	var uLocal_16419 = 0;
	var uLocal_16420 = 0;
	var uLocal_16421 = 0;
	var uLocal_16422 = 0;
	var uLocal_16423 = 0;
	var uLocal_16424 = 0;
	var uLocal_16425 = 0;
	var uLocal_16426 = 0;
	var uLocal_16427 = 0;
	var uLocal_16428 = 0;
	var uLocal_16429 = 0;
	var uLocal_16430 = 0;
	var uLocal_16431 = -1;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_16 = joaat("P_CS_TREESTANDING01X");
	iLocal_17 = joaat("P_DYNAMITE03X");
	iLocal_18 = joaat("P_CS_FUSESPOOL01X");
	iLocal_19 = joaat("P_BOMBSWITCHOPEN01X");
	iLocal_20 = joaat("P_DYNAMITECRATE02X");
	iLocal_21 = joaat("S_ROPEHOGTIEHANDSSMALL01X");
	iLocal_22 = joaat("P_LADLE02X");
	iLocal_23 = joaat("P_CS_BUCKET01X");
	iLocal_24 = joaat("P_CS_VEGSACK_UP");
	iLocal_25 = joaat("P_CS_ARMYID01X");
	iLocal_26 = joaat("P_MONEYSTACK01X");
	iLocal_27 = joaat("P_WALLET01X");
	iLocal_28 = joaat("UTILLIWAG");
	iLocal_29 = joaat("BREACH_CANNON");
	iLocal_30 = joaat("CS_PAYTAH");
	iLocal_31 = joaat("A_M_M_WAPWARRIORS_01");
	iLocal_32 = joaat("S_M_Y_ARMY_01");
	iLocal_33 = joaat("S_M_M_ARMY_01");
	iLocal_34 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
	iLocal_35 = -528294019;
	sLocal_36 = "native_son2_dutch_to_group";
	sLocal_37 = "native_son2_dutch_to_shore";
	sLocal_38 = "native_son2_dutch_to_horse";
	cLocal_39 = "native_son2_dutch_to_cliff";
	sLocal_40 = "native_son2_arthur_to_horse";
	sLocal_41 = "native_son2_companion_to_road";
	sLocal_42 = "native_son2_companion_to_road_alt1";
	sLocal_43 = "native_son2_companion_to_road_alt2";
	sLocal_44 = "native_son2_companion_to_road_alt3";
	cLocal_45 = "native_son2_patrol_to_group";
	cLocal_46 = "native_son2_flee_military";
	cLocal_47 = "native_son2_military_chase";
	cLocal_48 = "native_son2_cliff_edge";
	cLocal_49 = "native_son2_cliff_edge2";
	sLocal_50 = "native_son2_brave_to_cannon";
	sLocal_51 = "native_son2_player_wiring";
	sLocal_52 = "script_story@wnt4@ig@ig_unapproved";
	sLocal_53 = "w_walk_spool";
	sLocal_54 = "script_NTS2_Cornered_on_Cliff";
	sLocal_55 = "MINI_GAMES@STORY@NTS2@CORNERED_ON_CLIFF@ARTHUR";
	sLocal_56 = "SKEL_R_Finger12";
	sLocal_57 = "1-HighHonor";
	sLocal_58 = "2-LowHonor";
	vLocal_379 = { 0f, 0f, 0f };
	vLocal_382 = { 0f, 0.25f, 0f };
	vLocal_385 = { 0f, -0.05f, 0f };
	vLocal_388 = { 0f, 0f, 0.3f };
	vLocal_391 = { 0f, 0.2f, 0.3f };
	vLocal_394 = { 41.4908f, 1101.62f, 176.108f };
	vLocal_397 = { 64.6406f, 1114.249f, 182f };
	fLocal_403 = 0f;
	fLocal_404 = 0f;
	iLocal_416 = 16749;
	iLocal_417 = -1458552414;
	iLocal_418 = 4;
	fLocal_2446 = 0f;
	fLocal_2447 = 0f;
	fLocal_2448 = 0f;
	vLocal_2449 = { 0f, 1.95f, 0f };
	fLocal_2452 = 8f;
	fLocal_2670 = 60f;
	sLocal_2690 = "Horns_Bugle_Sounds";
	iLocal_3151 = -1;
	vLocal_3153 = { -248.6689f, 1323.256f, 137.6145f };
	fLocal_3227 = 0f;
	sLocal_3228 = "NTS2_IG8";
	fLocal_3230 = 0f;
	iLocal_3234 = 4;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4642))
	{
		__LIB_4__::func_935(&uLocal_3252, 1073741824 /* Float: 2f */);
		func_2(&uLocal_3252, 1);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!__LIB_0__::func_382(64))
	{
		BUILTIN::WAIT(0);
	}
	func_4(&uScriptParam_0, &uLocal_3252);
	func_5(&uLocal_3252);
	while (!__LIB_4__::func_936(&uLocal_3252, -2147483648))
	{
		func_7(&uLocal_3252);
		BUILTIN::WAIT(0);
	}
	while (!func_2(&uLocal_3252, 0))
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2(var uParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	struct<8> Var6;
	if (__LIB_4__::func_937(uParam0, 4096))
	{
		return true;
	}
	if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 4096)
	{
		func_9(uParam0);
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
		HUD::_DISPLAY_HUD_COMPONENT(1331687942);
		if (__LIB_0__::func_139(Global_43801))
		{
			__LIB_1__::func_281(&Global_43801, 1, 1);
		}
		UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
		MISC::_0x1096603B519C905F("");
		__LIB_1__::func_559(__LIB_3__::func_918(uParam0->f_607), 0, 2);
		__LIB_1__::func_140();
		__LIB_4__::func_716(1);
		__LIB_0__::func_722(1, 0);
		__LIB_5__::func_324(uParam0, 1);
		__LIB_1__::func_723(0);
		UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
		Global_36605 = 0;
		__LIB_5__::func_384(3);
		if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
		{
			TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), true);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (!bParam1)
	{
		if (!__LIB_4__::func_936(uParam0, 1048576))
		{
			if (__LIB_0__::func_2() == 0)
			{
				__LIB_1__::func_965(0);
			}
			else if (__LIB_4__::func_938(uParam0) != 0)
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					if (CAM::_0x1204EB53A5FBC63D())
					{
						return false;
					}
					if (__LIB_4__::func_938(uParam0) == 1 || __LIB_4__::func_938(uParam0) == 2)
					{
						if (__LIB_4__::func_505(&(uParam0->f_8269)) && __LIB_4__::func_506(&(uParam0->f_8269)))
						{
							__LIB_1__::func_582(0, &(uParam0->f_8269.f_1282));
						}
					}
					if (!__LIB_0__::func_899(&(uParam0->f_13118)))
					{
						__LIB_4__::func_89(&(uParam0->f_13118), 0);
					}
					bVar0 = CAM::_0x139EFB0A71DD9011();
					if (bVar0)
					{
						__LIB_4__::func_935(uParam0, 256);
					}
					bVar1 = CAM::_0x7CE9DC58E3E4755F();
					if (bVar1 && __LIB_4__::func_936(uParam0, 256))
					{
						CAM::_0x16E9ABDD34DDD931();
						CAM::DO_SCREEN_FADE_OUT(0);
					}
					else
					{
						if (((!bVar0 && !__LIB_11__::func_752(uParam0, bVar1)) && !__LIB_0__::func_91()) && !__LIB_4__::func_936(uParam0, 80))
						{
							if (!bVar1)
							{
								__LIB_5__::func_380(uParam0);
							}
							return false;
						}
						if (__LIB_4__::func_936(uParam0, 64))
						{
							CAM::_0x16E9ABDD34DDD931();
							CAM::DO_SCREEN_FADE_OUT(0);
						}
						else if (__LIB_4__::func_938(uParam0) == 2)
						{
							if (uParam0->f_13104 == -1)
							{
								if (__LIB_0__::func_0(uParam0))
								{
									uParam0->f_13104 = MISC::GET_GAME_TIMER();
								}
							}
							if ((uParam0->f_13104 != -1 && MISC::GET_GAME_TIMER() > uParam0->f_13104 + 4000) || bVar1)
							{
								CAM::_0x16E9ABDD34DDD931();
								CAM::DO_SCREEN_FADE_OUT(0);
							}
						}
						else if (__LIB_4__::func_938(uParam0) == 1)
						{
							if (__LIB_11__::func_752(uParam0, bVar1))
							{
								CAM::_0x16E9ABDD34DDD931();
								CAM::DO_SCREEN_FADE_OUT(0);
							}
						}
						else
						{
							CAM::_0x16E9ABDD34DDD931();
							CAM::DO_SCREEN_FADE_OUT(0);
						}
						CAM::IS_SCREEN_FADING_IN();
						if (!CAM::IS_SCREEN_FADED_OUT())
						{
							return false;
						}
					}
				}
			}
			else if (__LIB_4__::func_936(uParam0, 2))
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
					return false;
				}
				if (MISC::_0x1B065A2BF7953815(1) == 1)
				{
					return false;
				}
			}
			if (!__LIB_4__::func_678() && __LIB_4__::func_938(uParam0) != 0)
			{
				__LIB_5__::func_599(uParam0, func_34(__LIB_4__::func_939(uParam0)), func_34(__LIB_5__::func_475(uParam0)), __LIB_4__::func_939(uParam0), __LIB_5__::func_475(uParam0));
			}
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_7375.f_804))
	{
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_7375.f_804))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_7375.f_804);
		}
	}
	__LIB_4__::func_935(uParam0, 1048576);
	if (!__LIB_4__::func_936(uParam0, 2097152))
	{
		if (!func_9(uParam0))
		{
			return false;
		}
		__LIB_4__::func_935(uParam0, 2097152);
	}
	MISC::_0x1096603B519C905F("");
	STREAMING::CLEAR_FOCUS();
	if (MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_EXISTS())
	{
		MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_DELETE();
	}
	MISC::SET_TIME_SCALE(1f);
	__LIB_5__::func_325(&(uParam0->f_8269));
	if (__LIB_4__::func_505(&(uParam0->f_8269)))
	{
		__LIB_4__::func_507(&(uParam0->f_8269));
	}
	AUDIO::SET_GPS_ACTIVE(false);
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	VEHICLE::SET_RANDOM_TRAINS(false);
	__LIB_1__::func_600(1);
	__LIB_0__::func_267(1);
	LAW::_0xC5EB2755FA25F1E9(1);
	__LIB_0__::func_395(0);
	__LIB_4__::func_679();
	__LIB_5__::func_384(3);
	if (!__LIB_4__::func_936(uParam0, 8))
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
		HUD::_DISPLAY_HUD_COMPONENT(724769646);
	}
	__LIB_4__::func_716(1);
	__LIB_4__::func_782();
	__LIB_4__::func_680();
	HUD::SET_MISSION_NAME(false, 0);
	__LIB_0__::func_769();
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	CLOCK::PAUSE_CLOCK(false, 0);
	PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), 1f);
	PLAYER::_0x19B2C7A6C34FAD54(PLAYER::PLAYER_ID(), 1f);
	__LIB_4__::func_940(uParam0);
	__LIB_5__::func_20(1, 0);
	__LIB_0__::func_698(2);
	if (!Global_1935630.f_12)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
		PED::_0xAAC0EE3B4999ABB5(Global_35, 0);
		WEAPON::_0xB832F1A686B9B810(Global_35, __LIB_5__::func_21(), 0);
		PED::SET_PED_CONFIG_FLAG(Global_35, 308, false);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
		PED::_0xEAE3B5B019C8D23F(Global_35, 262143);
		__LIB_1__::func_733(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 170, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
	}
	if (PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0x12E09E278C6C29B7(PLAYER::GET_PLAYER_INDEX());
	}
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::GET_PLAYER_INDEX(), false);
	if (CAM::DOES_CAM_EXIST(uParam0->f_609.f_2))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(uParam0->f_609.f_2, false);
	}
	__LIB_5__::func_326(&(uParam0->f_10792));
	__LIB_4__::func_508();
	CAM::STOP_GAMEPLAY_HINT(true);
	__LIB_1__::func_600(1);
	__LIB_5__::func_327();
	if (__LIB_1__::func_652())
	{
		STREAMING::_0x2F9AC754FE179D58(0.3f);
	}
	__LIB_4__::func_845(0, 14);
	bVar2 = false;
	if (__LIB_4__::func_938(uParam0) == 0)
	{
		bVar2 = true;
	}
	else
	{
		__LIB_5__::func_328(uParam0);
	}
	__LIB_11__::func_836(uParam0, 0, !bVar2, bVar2);
	__LIB_5__::func_595(uParam0, !bVar2);
	__LIB_1__::func_721(0);
	__LIB_1__::func_721(1);
	PLAYER::_0xDF93973251FB2CA5(PLAYER::PLAYER_ID(), 1);
	__LIB_4__::func_509(0);
	__LIB_5__::func_329(__LIB_4__::func_941(uParam0));
	__LIB_5__::func_330(__LIB_4__::func_941(uParam0));
	__LIB_0__::func_868(0);
	__LIB_0__::func_869(0);
	__LIB_0__::func_11(__LIB_4__::func_938(uParam0));
	__LIB_5__::func_22(uParam0);
	if (!bVar2)
	{
		__LIB_0__::func_722(1, 0);
	}
	if (__LIB_4__::func_938(uParam0) != 1)
	{
		__LIB_5__::func_101(0, &(uParam0->f_8269.f_1282));
	}
	Global_43805 = -1;
	__LIB_1__::func_978(1);
	__LIB_1__::func_564(0);
	__LIB_0__::func_8(&Global_1935630, 2097152);
	__LIB_1__::func_723(0);
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
	if (__LIB_4__::func_938(uParam0) == 0)
	{
		__LIB_5__::func_370(Global_1835011[uParam0->f_607 /*74*/].f_1);
	}
	__LIB_5__::func_102();
	if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), true);
	}
	if (!bParam1)
	{
		switch (__LIB_4__::func_938(uParam0))
		{
			case 0:
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					if ((!CAM::IS_SCREEN_FADING_IN() && !__LIB_4__::func_936(uParam0, 4)) && !__LIB_4__::func_936(uParam0, 2))
					{
						CAM::DO_SCREEN_FADE_IN(1000);
					}
				}
				func_74(uParam0);
				__LIB_5__::func_503(uParam0);
				__LIB_0__::func_297();
				__LIB_5__::func_496(__LIB_0__::func_12(), 0);
				if (__LIB_0__::func_2() == 0)
				{
					__LIB_5__::func_103(0);
				}
				__LIB_5__::func_126(uParam0->f_607);
				bVar3 = __LIB_0__::func_513();
				if (!__LIB_0__::func_13(32768))
				{
					func_83(__LIB_3__::func_918(uParam0->f_607), !__LIB_4__::func_936(uParam0, 128), 1, bVar3, 1);
				}
				else
				{
					__LIB_1__::func_809(__LIB_3__::func_918(uParam0->f_607), bVar3);
				}
				__LIB_5__::func_324(uParam0, bParam1);
				if (uParam0->f_607 != 77)
				{
					UILOG::_UILOG_MARK_MISSION_COMPLETED(__LIB_5__::func_104(uParam0));
				}
				__LIB_1__::func_140();
				if (__LIB_0__::func_13(32768))
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					__LIB_6__::func_833();
					__LIB_1__::func_141(0);
				}
				else if (__LIB_4__::func_936(uParam0, 2))
				{
					if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
					__LIB_1__::func_954(1);
					__LIB_5__::func_116();
					__LIB_0__::func_320(6);
					__LIB_0__::func_319(4096);
				}
				break;
			case 1:
			case 2:
			case 3:
			case 6:
				__LIB_1__::func_645(__LIB_3__::func_918(uParam0->f_607));
				__LIB_4__::func_942();
				if (__LIB_4__::func_938(uParam0) == 2)
				{
					__LIB_0__::func_15(__LIB_0__::func_14(joaat("DEATHS_ON_CURRENT_DEED")), 1);
				}
				LAW::_0x55F37F5F3F2475E1();
				LAW::_0x062B4A4A3396351D(PLAYER::GET_PLAYER_INDEX());
				LAW::_0x07E8B8B20570271C(PLAYER::GET_PLAYER_INDEX());
				break;
			case 5:
				if (__LIB_0__::func_2() == 0)
				{
					__LIB_5__::func_103(0);
				}
				__LIB_4__::func_942();
				Var4 = { __LIB_0__::func_14(joaat("DEATHS_ON_CURRENT_DEED")) };
				STATS::_0x0FEE2561120F3333(&Var4);
				__LIB_1__::func_559(__LIB_3__::func_918(uParam0->f_607), 0, 2);
				break;
			default:
				func_83(__LIB_3__::func_918(uParam0->f_607), 1, 1, 0, 1);
				__LIB_1__::func_140();
				break;
		}
		if (__LIB_4__::func_938(uParam0) != 0)
		{
			Var6 = { __LIB_4__::func_943(uParam0) };
			__LIB_5__::func_117(__LIB_3__::func_918(uParam0->f_607), __LIB_4__::func_938(uParam0), &Var6, 0, 0, __LIB_4__::func_936(uParam0, 64));
		}
	}
	__LIB_4__::func_510(1);
	__LIB_5__::func_384(3);
	__LIB_4__::func_944(uParam0, 4096);
	return true;
}

void func_4(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	PED::_0xED9582B3DA8F02B4(20);
	uParam1->f_608 = uParam0->f_1;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	if (!__LIB_0__::func_2() == 0)
	{
		if (ITEMSET::IS_ITEMSET_VALID(Global_43616) && ITEMSET::GET_ITEMSET_SIZE(Global_43616) > 0)
		{
			iVar1 = 0;
			while (iVar1 < ITEMSET::GET_ITEMSET_SIZE(Global_43616))
			{
				iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, Global_43616);
				iVar3 = MISC::_GET_ENTITY_FROM_ITEM(iVar2);
				if (((!ENTITY::IS_ENTITY_DEAD(iVar3) && ENTITY::IS_ENTITY_A_PED(iVar3)) && !ITEMSET::IS_IN_ITEMSET(iVar2, iVar0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3) != Global_35)
				{
					ITEMSET::ADD_TO_ITEMSET(iVar2, iVar0);
				}
				iVar1++;
			}
		}
	}
	__LIB_5__::func_587(uParam1);
	if (!__LIB_0__::func_2() == 0)
	{
		if (__LIB_5__::func_23(uParam1) > 0)
		{
			iVar4 = 0;
			while (iVar4 < uParam1->f_7375.f_13)
			{
				if (((!ENTITY::IS_ENTITY_DEAD(uParam1->f_7375.f_13[iVar4 /*12*/]) && ENTITY::IS_ENTITY_A_PED(uParam1->f_7375.f_13[iVar4 /*12*/])) && !ITEMSET::IS_IN_ITEMSET(uParam1->f_7375.f_13[iVar4 /*12*/], iVar0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_7375.f_13[iVar4 /*12*/]) != Global_35)
				{
					ITEMSET::ADD_TO_ITEMSET(uParam1->f_7375.f_13[iVar4 /*12*/], iVar0);
				}
				iVar4++;
			}
		}
	}
	if (ITEMSET::GET_ITEMSET_SIZE(iVar0) > 0)
	{
		PED::_0xF008E0BA1FE1D644(ITEMSET::GET_ITEMSET_SIZE(iVar0));
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	if (__LIB_4__::func_511())
	{
		__LIB_4__::func_945(uParam1, 4194304);
	}
	if (__LIB_4__::func_512())
	{
		__LIB_4__::func_945(uParam1, 8388608);
	}
	if (__LIB_5__::func_371())
	{
		if (!__LIB_4__::func_512() && !__LIB_4__::func_511())
		{
			__LIB_4__::func_945(uParam1, 4);
		}
		else
		{
			if (__LIB_4__::func_512())
			{
			}
			if (__LIB_4__::func_511())
			{
			}
		}
		__LIB_4__::func_946(uParam1, __LIB_4__::func_513());
	}
	func_108(uParam1, uParam0);
	func_109(uParam1);
	if (uParam1->f_13105 > PED::_0x62DE46F061CAA468())
	{
		PED::_0xF008E0BA1FE1D644((uParam1->f_13105 - PED::_0x62DE46F061CAA468()));
	}
}

void func_5(var uParam0)
{
	char[] cVar0[8];
	int iVar1;
	struct<4> Var2;
	char[] cVar6[8];
	cVar0 = __LIB_0__::func_631(uParam0->f_607);
	HUD::SET_MISSION_NAME(true, &cVar0);
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	MISC::_0x1096603B519C905F(&cVar0);
	if (uParam0->f_607 != 77)
	{
		__LIB_0__::func_496();
		__LIB_1__::func_323(&cVar0, 0);
	}
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	__LIB_0__::func_105(1);
	__LIB_2__::func_459();
	MISC::_0xA565FAC215CBC77D();
	SCRIPTS::SHUTDOWN_LOADING_SCREEN();
	__LIB_0__::func_769();
	__LIB_0__::func_267(__LIB_4__::func_947(uParam0));
	LAW::_0x55F37F5F3F2475E1();
	LAW::_0x292AD61A33A7A485();
	if ((LAW::_0xF46108C50A22B029() && !Global_43891) && !__LIB_0__::func_730(__LIB_0__::func_12()))
	{
		POPULATION::_0x2161278C6322F740(16384, 0, 0, -1, -1, 0);
	}
	__LIB_0__::func_112(1, 0, 1);
	POPULATION::_0x2161278C6322F740(4096, 0, 0, -1, -1, 0);
	VEHICLE::DELETE_ALL_TRAINS();
	VEHICLE::SET_RANDOM_TRAINS(false);
	__LIB_1__::func_600(0);
	__LIB_4__::func_514(uParam0);
	AUDIO::_0x33D51F801CB16E4F();
	if (!Global_1935630.f_12)
	{
		__LIB_0__::func_145(0, 0);
		PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
		if (!__LIB_4__::func_948(uParam0, 16384) && (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2) || __LIB_5__::func_371()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
		}
		PED::CLEAR_PED_WETNESS(Global_35);
		PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
		GRAPHICS::REMOVE_PARTICLE_FX_FROM_ENTITY(Global_35);
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 0, false))
		{
			if ((((WEAPON::_0x2C83212A7AA51D3D(iVar1) || iVar1 == joaat("OBJECT_1")) || iVar1 == joaat("OBJECT_2")) || iVar1 == joaat("OBJECT_3")) || iVar1 == joaat("OBJECT_4"))
			{
				if (!__LIB_5__::func_371() && !__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2))
				{
				}
			}
			else if (!__LIB_0__::func_214(iVar1) && !__LIB_0__::func_13(32768))
			{
				WEAPON::REMOVE_WEAPON_FROM_PED(Global_35, iVar1, true, -142743235);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
			}
		}
		WEAPON::_0xB832F1A686B9B810(Global_35, false, 0);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
		func_123(uParam0);
	}
	__LIB_1__::func_564(1);
	__LIB_1__::func_600(0);
	__LIB_4__::func_949(uParam0, joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"));
	iLocal_15 = __LIB_4__::func_950(uParam0);
	iLocal_15 = iLocal_15;
	if (!Global_1935630.f_12)
	{
		if (!__LIB_5__::func_371())
		{
			Var2 = { func_34(__LIB_4__::func_939(uParam0)) };
			if (__LIB_4__::func_939(uParam0) != 0)
			{
				Var2 = { __LIB_1__::func_469(uParam0->f_607) };
			}
			if (!func_127(Var2))
			{
				__LIB_4__::func_945(uParam0, 1048576);
			}
			__LIB_4__::func_946(uParam0, 0);
			if (__LIB_4__::func_951(uParam0, 3) || __LIB_1__::func_195())
			{
				__LIB_11__::func_58(uParam0, __LIB_1__::func_469(uParam0->f_607), 0);
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true);
				__LIB_3__::func_618(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 5000f, 1, 0, 0, 0, 0);
			}
			__LIB_4__::func_946(uParam0, __LIB_4__::func_513());
		}
		TELEMETRY::_TELEMETRY_MISSION_STARTED(&(Global_1835011[uParam0->f_607 /*74*/].f_8), 0, __LIB_5__::func_24(__LIB_4__::func_939(uParam0)), __LIB_5__::func_371());
	}
	__LIB_5__::func_332(uParam0);
	__LIB_4__::func_952(uParam0, 0);
	__LIB_11__::func_59(uParam0, 0);
	if (!__LIB_5__::func_278(uParam0, __LIB_4__::func_939(uParam0)))
	{
		__LIB_4__::func_946(uParam0, 0);
	}
	__LIB_5__::func_333(uParam0);
	__LIB_6__::func_922(uParam0);
	func_139(uParam0);
	__LIB_4__::func_945(uParam0, 2097152);
	__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 134217728);
	if (__LIB_0__::func_13(32768))
	{
		__LIB_4__::func_935(uParam0, 4);
	}
	func_141(uParam0);
	__LIB_8__::func_800(uParam0, __LIB_4__::func_939(uParam0));
	__LIB_5__::func_105(__LIB_4__::func_941(uParam0));
	if (!__LIB_4__::func_948(uParam0, 65536))
	{
		__LIB_5__::func_178(__LIB_4__::func_941(uParam0));
	}
	__LIB_5__::func_106(uParam0, PLAYER::PLAYER_PED_ID(), "ARTHUR", 0);
	__LIB_5__::func_25(uParam0);
	__LIB_11__::func_60(uParam0);
	__LIB_0__::func_11(uParam0);
	__LIB_5__::func_26(uParam0, 30f);
	__LIB_5__::func_27(uParam0, 40f);
	__LIB_8__::func_806(uParam0, Global_35, 0, 0, 0, 0, 0);
	__LIB_4__::func_510(0);
	AUDIO::_0xA6A3A3F96B8B030E();
	__LIB_1__::func_723(1);
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
	if (uParam0->f_607 != 77)
	{
		cVar6 = __LIB_0__::func_631(uParam0->f_607);
		UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(1, MISC::GET_HASH_KEY(&cVar6), 0, "");
	}
	if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), false);
	}
}

void func_7(var uParam0)
{
	var uVar0;
	if ((LAW::_0xF46108C50A22B029() && !Global_43891) && !__LIB_0__::func_730(__LIB_0__::func_12()))
	{
		POPULATION::_0xF45E46DEECF7DF6E(16384, 0, 0, -1, -1);
	}
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 16384))
	{
		__LIB_4__::func_515();
	}
	if (!__LIB_4__::func_937(uParam0, 32768))
	{
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	}
	if (!__LIB_4__::func_937(uParam0, 2048))
	{
		__LIB_4__::func_516(1, 0);
	}
	switch (__LIB_0__::func_81(uParam0))
	{
		case -1:
			break;
		case 0:
			MemCopy(&uVar0, {__LIB_4__::func_681(__LIB_4__::func_941(uParam0))}, 4);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
			{
				__LIB_4__::func_945(uParam0, 64);
			}
			func_156(uParam0, 0);
			__LIB_0__::func_16(uParam0);
			if (func_158(uParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(__LIB_4__::func_953(uParam0)) && __LIB_4__::func_951(uParam0, 3))
				{
					ENTITY::FREEZE_ENTITY_POSITION(__LIB_4__::func_953(uParam0), false);
				}
				__LIB_0__::func_19(uParam0, 1);
			}
			if (__LIB_4__::func_936(uParam0, -2147483648))
			{
				__LIB_0__::func_19(uParam0, 2);
			}
			break;
		case 1:
			if (func_161(uParam0))
			{
				__LIB_4__::func_935(uParam0, -2147483648);
				__LIB_0__::func_19(uParam0, 2);
			}
			func_156(uParam0, __LIB_5__::func_279(uParam0, __LIB_4__::func_939(uParam0)) > 4);
			break;
		case 2:
			if (func_2(uParam0, 0))
			{
				__LIB_4__::func_935(uParam0, -2147483648);
				__LIB_0__::func_19(uParam0, 3);
			}
			break;
		case 3:
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
	if (__LIB_0__::func_81(uParam0) < 2)
	{
	}
}

bool func_9(var uParam0)
{
	func_163(uParam0);
	func_164();
	func_165();
	func_166();
	func_167(uParam0);
	return true;
}

struct<4> func_34(int iParam0)
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 0:
			__LIB_4__::func_954(&Var0, func_204(0, 0));
			break;
		case 1:
			__LIB_4__::func_954(&Var0, func_204(0, 0));
			break;
		case 2:
			__LIB_4__::func_954(&Var0, func_204(0, 0));
			break;
		case 3:
			__LIB_4__::func_954(&Var0, func_204(0, 0));
			break;
		case 4:
			__LIB_4__::func_954(&Var0, func_204(4, 0));
			break;
		case 5:
			__LIB_4__::func_954(&Var0, func_204(5, 0));
			break;
		case 6:
			__LIB_4__::func_954(&Var0, func_204(6, 0));
			break;
		case 7:
			__LIB_4__::func_954(&Var0, func_204(7, 0));
			break;
		case 8:
			__LIB_4__::func_954(&Var0, func_204(7, 0));
			break;
		case 25:
			__LIB_4__::func_954(&Var0, func_204(9, 0));
			break;
	}
	return Var0;
}

void func_74(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (__LIB_0__::func_2() == 0)
	{
		return;
	}
	iVar0 = __LIB_4__::func_939(uParam0);
	iVar1 = __LIB_5__::func_279(uParam0, iVar0);
	bVar2 = false;
	if (iVar1 == 5 || iVar1 == 6)
	{
		bVar2 = true;
	}
	iVar3 = 0;
	if (!bVar2)
	{
		if (__LIB_5__::func_253(uParam0) == 0 && iVar0 == 0)
		{
			iVar3 = 1;
		}
	}
	iVar4 = 0;
	if (!bVar2)
	{
		if (__LIB_4__::func_938(uParam0) == 0)
		{
			iVar4 = 1;
		}
	}
	if (iVar3 || iVar4)
	{
		__LIB_5__::func_109(iVar3, iVar4);
	}
	if (bVar2)
	{
		func_262(uParam0);
	}
}

void func_83(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	var uVar7;
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
			__LIB_9__::func_202();
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
		iVar9 = __LIB_1__::func_145(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			__LIB_1__::func_629(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
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
					__LIB_4__::func_467(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
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
						func_299(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_299(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_299(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_299(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_299(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_299(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_299(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_299(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_299(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_299(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_299(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_299(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_299(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_299(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_299(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_299(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_299(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_299(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_299(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_299(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_299(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_299(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_299(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_299(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_299(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_301();
						func_302(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_299(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_83(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_83(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_83(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_299(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_299(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						__LIB_5__::func_337(89200);
						__LIB_5__::func_337(2300);
						__LIB_5__::func_337(2300);
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
						__LIB_5__::func_337(-139100);
						break;
					case 69:
						if (__LIB_1__::func_25(Global_1347702[9 /*49*/].f_15, 1))
						{
							__LIB_5__::func_337(-6000);
						}
						break;
					case 70:
						__LIB_5__::func_337(23400);
						__LIB_5__::func_337(1900);
						__LIB_5__::func_337(-15000);
						break;
					case 71:
						__LIB_5__::func_337(-5500);
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
							__LIB_5__::func_337(40500);
						}
						else
						{
							__LIB_0__::func_316(0);
							__LIB_5__::func_337(46500);
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
		func_340();
		switch (iVar0)
		{
			case 1:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 4:
						__LIB_5__::func_387(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						__LIB_5__::func_387(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 25:
						__LIB_5__::func_387(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						__LIB_5__::func_387(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						__LIB_5__::func_387(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						__LIB_5__::func_387(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						__LIB_5__::func_387(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = __LIB_0__::func_895(iParam0);
						__LIB_5__::func_387(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						__LIB_5__::func_387(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						__LIB_5__::func_387(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!__LIB_1__::func_707(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
						{
							func_299(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						__LIB_5__::func_387(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						__LIB_5__::func_387(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						__LIB_5__::func_387(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 72:
						if (__LIB_0__::func_895(iParam0) == 0)
						{
							__LIB_5__::func_387(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						else
						{
							__LIB_5__::func_387(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
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
						__LIB_5__::func_387(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 55:
						__LIB_0__::func_896(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						__LIB_5__::func_387(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						__LIB_5__::func_387(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						__LIB_5__::func_387(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						__LIB_5__::func_387(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == __LIB_1__::func_293(0, 10, 11, joaat("CABR01")))
				{
					__LIB_5__::func_387(iParam0, __LIB_0__::func_895(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 7, 11, joaat("CACR02")))
				{
					__LIB_5__::func_387(iParam0, __LIB_1__::func_794(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 8, 11, joaat("CACR03")))
				{
					__LIB_5__::func_387(iParam0, __LIB_1__::func_794(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 11, 11, joaat("CACR01")))
				{
					__LIB_5__::func_387(iParam0, __LIB_1__::func_794(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 12, 11, joaat("CACR04")))
				{
					__LIB_5__::func_387(iParam0, __LIB_1__::func_794(11), 1, 0.5f, 2, 0, 0, 1);
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

void func_108(var uParam0, var uParam1)
{
	uParam0->f_607 = -1;
	__LIB_18__::func_396(uParam0);
	uParam0->f_634[0] = 56024;
	uParam0->f_634[1] = 56024;
	uParam0->f_637 = 0;
	__LIB_4__::func_960(uParam0, *uParam1);
	func_367(uParam0);
}

void func_109(var uParam0)
{
	__LIB_8__::func_762(uParam0, 50);
	__LIB_4__::func_961(uParam0, func_369(0, 5));
	Local_83 = __LIB_9__::func_89(uParam0, joaat("CS_DUTCH"), 1);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_83))
	{
	}
	Local_100 = __LIB_9__::func_89(uParam0, joaat("CS_EAGLEFLIES"), 1);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_100))
	{
	}
	Local_117 = __LIB_9__::func_89(uParam0, joaat("CS_PAYTAH"), 1);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_117))
	{
	}
	func_372(uParam0);
	iLocal_352 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(__LIB_5__::func_34(uParam0, iLocal_28, 1));
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_352))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_352, false);
	}
	iLocal_355 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(__LIB_5__::func_34(uParam0, iLocal_22, 1));
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_355))
	{
	}
	iLocal_356 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(__LIB_5__::func_34(uParam0, iLocal_23, 1));
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_356))
	{
	}
	iLocal_357 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(__LIB_5__::func_34(uParam0, iLocal_24, 1));
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_357))
	{
	}
	iLocal_359 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(__LIB_5__::func_34(uParam0, iLocal_19, 1));
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_359))
	{
	}
	iLocal_360 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(__LIB_5__::func_34(uParam0, iLocal_20, 1));
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_360))
	{
	}
}

void func_123(var uParam0)
{
	if (__LIB_0__::func_91())
	{
		func_376(&(uParam0->f_7375));
	}
}

bool func_127(struct<4> Param0)
{
	if (__LIB_0__::func_13(32768))
	{
		return true;
	}
	return func_378(Param0, Param0.f_3);
}

int func_139(var uParam0)
{
	__LIB_5__::func_338(uParam0, iLocal_31, 31);
	__LIB_5__::func_338(uParam0, iLocal_30, 63);
	__LIB_5__::func_338(uParam0, iLocal_32, 67108863);
	__LIB_5__::func_338(uParam0, iLocal_33, 67108863);
	__LIB_5__::func_338(uParam0, iLocal_34, 67108863);
	__LIB_5__::func_338(uParam0, iLocal_22, 1);
	__LIB_5__::func_338(uParam0, iLocal_20, 63);
	__LIB_5__::func_338(uParam0, iLocal_17, 63);
	__LIB_5__::func_338(uParam0, iLocal_18, 63);
	__LIB_5__::func_338(uParam0, iLocal_21, 63);
	__LIB_5__::func_338(uParam0, iLocal_23, 63);
	__LIB_5__::func_338(uParam0, iLocal_24, 63);
	__LIB_5__::func_338(uParam0, iLocal_19, 63);
	__LIB_5__::func_338(uParam0, iLocal_16, 63);
	__LIB_5__::func_338(uParam0, iLocal_25, 16);
	__LIB_5__::func_338(uParam0, iLocal_26, 16);
	__LIB_5__::func_338(uParam0, iLocal_27, 16);
	__LIB_5__::func_338(uParam0, iLocal_28, 63);
	__LIB_5__::func_338(uParam0, iLocal_29, 48);
	__LIB_11__::func_61(uParam0, iLocal_35, 63);
	func_397(uParam0);
	__LIB_5__::func_565(uParam0, sLocal_36, 1, 2, -1);
	__LIB_5__::func_565(uParam0, sLocal_51, 1, 2, -1);
	__LIB_5__::func_565(uParam0, sLocal_41, 9, 2, -1);
	__LIB_5__::func_565(uParam0, cLocal_45, 6, 2, -1);
	__LIB_5__::func_565(uParam0, sLocal_42, 8, 2, -1);
	__LIB_5__::func_565(uParam0, sLocal_43, 8, 2, -1);
	__LIB_5__::func_565(uParam0, sLocal_44, 8, 2, -1);
	__LIB_5__::func_565(uParam0, sLocal_50, 16, 2, -1);
	__LIB_5__::func_565(uParam0, sLocal_38, 32, 2, -1);
	__LIB_5__::func_565(uParam0, sLocal_40, 32, 2, -1);
	__LIB_5__::func_565(uParam0, cLocal_46, 96, 2, -1);
	__LIB_5__::func_565(uParam0, cLocal_47, 96, 2, -1);
	__LIB_5__::func_565(uParam0, cLocal_39, 192, 2, -1);
	__LIB_5__::func_565(uParam0, cLocal_48, 256, 2, -1);
	__LIB_5__::func_565(uParam0, cLocal_49, 256, 2, -1);
	__LIB_5__::func_565(uParam0, sLocal_37, 256, 2, -1);
	__LIB_5__::func_567(uParam0, sLocal_52, 1);
	__LIB_5__::func_567(uParam0, sLocal_55, 128);
	__LIB_11__::func_753(uParam0, sLocal_54, 128);
	__LIB_11__::func_434(uParam0, "PG_MISSION_NATIVE2_01X", 63);
	__LIB_11__::func_31(uParam0, "script@story@NTS2@IG@IG_SPOOL@IG_SPOOL", &iLocal_378, 1, 0, "pl_SpoolLoop", 0, 1);
	__LIB_11__::func_31(uParam0, "script@story@NTS2@IG@IG0_WALK_AND_TALK@IG0_WALK_AND_TALK", &iLocal_365, 1, 16, "PBL_ACTION", 0, 1);
	__LIB_11__::func_31(uParam0, "script@story@NTS2@IG@IG3_SIGNAL@IG3_SIGNAL", &iLocal_368, 2, 0, 0, 0, 1);
	__LIB_11__::func_31(uParam0, "script@story@NTS2@IG@IG4_DETONATE@IG4_DETONATE", &iLocal_369, 6, 0, 0, 0, 1);
	__LIB_11__::func_31(uParam0, "script@story@NTS2@IG@IG4_DETONATE@IG4_DETONATE", &iLocal_370, 6, 0, 0, 0, 1);
	__LIB_11__::func_31(uParam0, "script@story@NTS2@IG@IG6_SLAP_HORSES@IG6_SLAP_HORSES", &iLocal_371, 32, 0, 0, 0, 1);
	__LIB_11__::func_31(uParam0, "script@story@NTS2@IG@IG8_SHOWDOWN@IG8_SHOWDOWN", &iLocal_374, 128, 0, 0, 0, 1);
	__LIB_11__::func_31(uParam0, "script@story@NTS2@IG@IG7_CORNERED@IG7_CORNERED_ARTHUR", &iLocal_372, 384, 0, 0, 0, 1);
	__LIB_11__::func_31(uParam0, "script@story@NTS2@IG@IG7_CORNERED@IG7_CORNERED_DUTCH", &iLocal_373, 384, 0, 0, 0, 1);
	__LIB_11__::func_31(uParam0, "script@story@NTS2@LEADIN@EXT@DUTCH_ASHORE", &iLocal_375, 524544, 0, 0, 0, 1);
	__LIB_11__::func_31(uParam0, "script@timelapse@buck_coyote@NTS2", &iLocal_376, 524288, 0, "BUCK", 0, 0);
	__LIB_11__::func_31(uParam0, "script@story@NTS2@IG@IG_POSTMISSION@POSTMISSION_CAMPFIRE", &iLocal_377, 524288, 0, 0, 0, 1);
	__LIB_5__::func_566(uParam0, iLocal_372, "pl_Jump_Edge", 128);
	__LIB_5__::func_566(uParam0, iLocal_373, "pbl_jumping_cliff", 128);
	__LIB_5__::func_566(uParam0, iLocal_376, "PBL_1", 524288);
	__LIB_5__::func_566(uParam0, iLocal_376, "PBL_2", 524288);
	return 1;
}

void func_141(var uParam0)
{
	__LIB_4__::func_945(uParam0, 2);
	func_405(uParam0);
}

void func_156(var uParam0, bool bParam1)
{
	bool bVar0;
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 134217728))
	{
		func_139(uParam0);
		__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 134217728);
	}
	if (bParam1 && !__LIB_5__::func_331(uParam0, __LIB_5__::func_475(uParam0), 536870912))
	{
		if (__LIB_8__::func_808(uParam0, __LIB_5__::func_475(uParam0), 0))
		{
			__LIB_5__::func_334(uParam0, __LIB_5__::func_475(uParam0), 536870912);
		}
	}
	if (__LIB_4__::func_937(uParam0, 8192))
	{
		if (!__LIB_4__::func_937(uParam0, 536870912))
		{
			if (__LIB_5__::func_569(&(uParam0->f_1126), __LIB_4__::func_939(uParam0)))
			{
				__LIB_4__::func_944(uParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (__LIB_8__::func_808(uParam0, __LIB_4__::func_939(uParam0), 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		__LIB_4__::func_944(uParam0, 8192);
	}
}

bool func_158(var uParam0)
{
	if (__LIB_4__::func_962(uParam0) < 1)
	{
		func_415(uParam0, __LIB_4__::func_951(uParam0, 3), !__LIB_4__::func_937(uParam0, 2097152), uParam0->f_5410, !__LIB_4__::func_937(uParam0, 32), 0);
		func_416(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1);
	}
	if ((!__LIB_4__::func_948(uParam0, 4) && !__LIB_5__::func_371()) && !__LIB_4__::func_951(uParam0, 3))
	{
		if (!__LIB_4__::func_948(uParam0, 32))
		{
			if (__LIB_0__::func_2() == 0)
			{
				__LIB_4__::func_945(uParam0, 32);
			}
			else
			{
				func_417(uParam0);
			}
		}
		if (__LIB_4__::func_948(uParam0, 32))
		{
			func_418(uParam0);
		}
	}
	switch (__LIB_4__::func_962(uParam0))
	{
		case -1:
		case 0:
			__LIB_4__::func_963(uParam0, 1);
			break;
		case 1:
			if (func_420(uParam0))
			{
				if (__LIB_4__::func_948(uParam0, 4096))
				{
					__LIB_4__::func_963(uParam0, 2);
				}
				else
				{
					__LIB_4__::func_963(uParam0, 3);
				}
			}
			break;
		case 2:
			if (__LIB_11__::func_65(uParam0))
			{
				__LIB_4__::func_963(uParam0, 3);
			}
			break;
		case 3:
			if (func_422(uParam0))
			{
				__LIB_4__::func_963(uParam0, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_161(var uParam0)
{
	int iVar0;
	if (__LIB_4__::func_939(uParam0) == 26)
	{
		__LIB_4__::func_964(uParam0, 0);
		return true;
	}
	if (func_424(uParam0))
	{
		iVar0 = __LIB_4__::func_939(uParam0);
		__LIB_4__::func_946(uParam0, __LIB_5__::func_475(uParam0));
		if (__LIB_4__::func_939(uParam0) == 26)
		{
			__LIB_4__::func_964(uParam0, 0);
			return true;
		}
		else if (__LIB_5__::func_331(uParam0, iVar0, 128))
		{
			func_424(uParam0);
		}
	}
	return false;
}

void func_163(var uParam0)
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (bLocal_401)
		{
			PED::_0x58F7DB5BD8FA2288(Global_35);
		}
		func_426();
		__LIB_11__::func_734(0);
		PED::_0xE4EF4382E22C780C(Global_35);
		PED::_0x8D9DB115FBA8E23D(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 364, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 250, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 411, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 352, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 249, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 454, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 533, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 404, false);
		if (__LIB_4__::func_938(uParam0) != 0)
		{
			PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
		}
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
		AUDIO::STOP_PED_SPEAKING(Global_35, false);
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER::GET_PLAYER_INDEX(), 1f);
	}
	if (__LIB_0__::func_272(Local_83, 0))
	{
		__LIB_2__::func_279(Local_83, 0);
		PED::_SET_PED_CROUCH_MOVEMENT(Local_83, false, 0, false);
		PED::_0xE4EF4382E22C780C(Local_83);
		PED::_0x8D9DB115FBA8E23D(Local_83);
		PED::SET_PED_CONFIG_FLAG(Local_83, 250, false);
		PED::SET_PED_CONFIG_FLAG(Local_83, 426, false);
		PED::SET_PED_CONFIG_FLAG(Local_83, 454, true);
		PED::SET_PED_CONFIG_FLAG(Local_83, 24, true);
		PED::_0xDE7B2B4144906CDF(454758258, Local_83);
		PED::_0x3A50753042B6891B(Local_83, "p_dynamiteCrate02x_PH_L_HAND");
	}
	if (__LIB_0__::func_272(Local_100, 0))
	{
		PED::_SET_PED_CROUCH_MOVEMENT(Local_100, false, 0, false);
		PED::SET_PED_CONFIG_FLAG(Local_100, 454, false);
		PED::SET_PED_CONFIG_FLAG(Local_100, 24, true);
	}
	if (__LIB_0__::func_272(Local_117, 0))
	{
		PED::SET_PED_CONFIG_FLAG(Local_117, 24, true);
	}
}

void func_164()
{
	__LIB_11__::func_335(iLocal_365);
	__LIB_11__::func_335(iLocal_366);
	__LIB_11__::func_335(iLocal_367);
	__LIB_11__::func_335(iLocal_368);
	__LIB_11__::func_335(iLocal_369);
	__LIB_11__::func_335(iLocal_370);
	__LIB_11__::func_335(iLocal_371);
	__LIB_11__::func_335(iLocal_372);
	__LIB_11__::func_335(iLocal_373);
	__LIB_11__::func_335(iLocal_374);
	__LIB_11__::func_335(iLocal_375);
}

void func_165()
{
	func_430(&Local_429, 1);
	func_430(&Local_742, 1);
	func_430(&Local_899, 1);
	func_430(&Local_1212, 1);
	func_430(&Local_1369, 1);
	func_430(&Local_1500, 1);
	func_430(&Local_1631, 1);
	func_430(&Local_1762, 1);
	func_430(&Local_2023, 1);
	func_430(&Local_2154, 1);
	func_430(&Local_2207, 1);
	func_430(&Local_2260, 1);
	__LIB_2__::func_426(&Local_2417);
}

void func_166()
{
	MISC::SET_TIME_SCALE(1f);
	if (PED::_0x91A5F9CBEBB9D936(uLocal_414))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_414, false);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_413))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_413);
	}
	if (PATHFIND::_0xDE0EA444735C1368(iLocal_410))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_410);
	}
	AICOVERPOINT::_0x7A1FDCF35EAA140F("nativeson2_fallentrees");
	AICOVERPOINT::_0x7A1FDCF35EAA140F("nativeson2_ambushtrees");
	PATHFIND::_0xD17672447692478E(iLocal_411, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::CLEAR_OVERRIDE_WEATHER();
	CLOCK::PAUSE_CLOCK(false, 0);
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	__LIB_6__::func_416(0, 0, 1103626240 /* Float: 25f */);
	__LIB_9__::func_802(1);
	func_434();
	__LIB_11__::func_754(0);
	func_436();
}

void func_167(var uParam0)
{
	if (__LIB_4__::func_938(uParam0) == 0)
	{
		__LIB_11__::func_17();
	}
	func_438();
	func_439();
	__LIB_2__::func_426(&Local_117);
	__LIB_11__::func_577(joaat("KIT_BANDANA"), 0);
	__LIB_1__::func_30(0);
	__LIB_8__::func_820(7);
	__LIB_11__::func_757(uParam0, 0, Local_83, 0, 0, 1, 0);
	__LIB_11__::func_757(uParam0, 26, Local_100, 0, 0, 1, 0);
	func_443();
	func_444();
	func_445();
	__LIB_1__::func_951(&iLocal_358);
	__LIB_1__::func_951(&iLocal_359);
	__LIB_1__::func_951(&iLocal_360);
	__LIB_1__::func_951(&iLocal_361);
	__LIB_1__::func_951(&iLocal_355);
	__LIB_1__::func_951(&iLocal_356);
	__LIB_1__::func_951(&iLocal_357);
	__LIB_1__::func_951(&iLocal_362);
	__LIB_1__::func_951(&iLocal_363);
	__LIB_1__::func_951(&iLocal_364);
	func_447();
	func_448();
	func_449(0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_354))
	{
		VEHICLE::DELETE_MISSION_TRAIN(&iLocal_354);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_352))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_352);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_353))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_353);
	}
}

struct<4> func_204(int iParam0, int iParam1)
{
	return func_476(iParam0, iParam1);
}

void func_262(var uParam0)
{
	if (__LIB_4__::func_948(uParam0, 1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_5411))
	{
		if (__LIB_4__::func_948(uParam0, 16))
		{
			__LIB_5__::func_595(uParam0, 0);
		}
		if (func_416(uParam0, 0, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_299(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
	if (!func_554(iParam0, iParam1, bParam2, iParam5))
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
			__LIB_4__::func_465(iVar5);
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
				func_299(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				iVar1 = func_579(func_578(iParam0, 1), 0);
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
			if (!func_584(iParam0, iParam5, &bParam2, bParam3, bParam4))
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
			__LIB_3__::func_909(iParam0);
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
				__LIB_4__::func_127(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
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
			func_597(iParam0);
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
			func_599(iParam0, iParam1);
			__LIB_4__::func_466(iParam0);
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
				return false;
			}
			__LIB_4__::func_468(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!__LIB_1__::func_707(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_299(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_299(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_299(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_299(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_299(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_299(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_299(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_299(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_299(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_5__::func_507(iParam0);
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
				func_299(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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
			__LIB_4__::func_120(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		__LIB_2__::func_471(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_301()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_641();
	func_642();
	func_643();
	func_644();
	func_645();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_302(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_648(iParam0, 1, 1, -142743235, 1);
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

void func_340()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_689(&uVar4, &iVar1, &iVar2, &iVar3)))
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
		__LIB_2__::func_472(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		__LIB_0__::func_703(0, -1);
	}
	if (iVar2 > 0)
	{
		__LIB_0__::func_45("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	__LIB_0__::func_385(1, 0);
	Global_1956575.f_4 = 1;
}

void func_367(var uParam0)
{
	__LIB_5__::func_476(uParam0, 0, 1, 104193, 104225, 104986, 105272, 105771, "NTS2_INT", 4162, -1);
	__LIB_5__::func_476(uParam0, 1, 2, 105974, 106053, 106336, 106555, 107358, "", 64, -1);
	__LIB_5__::func_476(uParam0, 2, 3, 107477, 107675, 107899, 108259, 108465, "NTS2_MCS1", 4162, -1);
	__LIB_5__::func_476(uParam0, 3, 4, 108664, 108997, 109151, 109656, 110055, "", 64, -1);
	__LIB_5__::func_476(uParam0, 4, 5, 110155, 110337, 110747, 111138, 111535, "NTS2_MCS2", 4162, -1);
	__LIB_5__::func_476(uParam0, 5, 6, 111623, 111746, 112123, 112301, 112617, "NTS2_MCS3", 4162, -1);
	__LIB_5__::func_476(uParam0, 6, 7, 112697, 112839, 112897, 113111, 113405, "", 64, -1);
	__LIB_5__::func_476(uParam0, 7, 8, 113505, 113561, 113836, 114057, 114089, "NTS2_MCS4", 4162, -1);
	__LIB_5__::func_476(uParam0, 8, 25, 114218, 114343, 114444, 114655, 115484, "", 64, -1);
	__LIB_5__::func_476(uParam0, 25, 26, 115662, 115752, 115868, 115921, 115942, "NTS2_EXT", 4162, -1);
}

Vector3 func_369(int iParam0, int iParam1)
{
	return func_780(iParam0, iParam1);
}

void func_372(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_134 - 1))
	{
		Local_134[iVar0 /*17*/] = __LIB_9__::func_89(uParam0, iLocal_31, 1);
		if (!ENTITY::DOES_ENTITY_EXIST(Local_134[iVar0 /*17*/]))
		{
		}
		iVar0++;
	}
}

void func_376(var uParam0)
{
	vector3 vVar0;
	if (!__LIB_0__::func_84(uParam0, 4))
	{
		if (__LIB_0__::func_1(uParam0->f_860, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { __LIB_4__::func_534(uParam0) };
		if (!__LIB_0__::func_1(uParam0->f_860, 524288))
		{
			__LIB_4__::func_717(&(uParam0->f_872));
		}
		func_786(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_4__::func_535(uParam0, 0f, 0f, 0f);
		func_788(uParam0);
		func_789(uParam0);
		__LIB_5__::func_47(uParam0, 0f, 0f, 0f, 0, 0);
		__LIB_5__::func_48(uParam0);
		__LIB_0__::func_88(uParam0, 4);
		__LIB_0__::func_106(uParam0, 0);
		__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_873)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_873));
		}
	}
}

int func_378(vector3 vParam0, var uParam3)
{
	int iVar0;
	if (MISC::_0x1B065A2BF7953815(0) != 1)
	{
		__LIB_1__::func_837(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_399(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_797(0, 0);
		if (__LIB_0__::func_154(iVar0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
			__LIB_0__::func_713(1, 0);
		}
	}
	else
	{
		__LIB_0__::func_713(1, 0);
	}
	__LIB_0__::func_305(0);
	__LIB_5__::func_119(0, vParam0, uParam3);
	return 1;
}

void func_397(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = VEHICLE::_0x635423D55CA84FC8(iLocal_417);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= (iVar0 - 1))
	{
		iVar1 = VEHICLE::_0x8DF5F6A19F99F0D5(iLocal_417, iVar2);
		if (STREAMING::IS_MODEL_VALID(iVar1))
		{
			__LIB_5__::func_338(uParam0, iVar1, 192);
		}
		iVar2++;
	}
}

void func_405(var uParam0)
{
	if (!__LIB_4__::func_948(uParam0, 4))
	{
		if (__LIB_4__::func_939(uParam0) < 7)
		{
			__LIB_11__::func_755(32);
		}
		if (__LIB_4__::func_939(uParam0) < 4)
		{
			__LIB_11__::func_755(16);
		}
		if (__LIB_4__::func_939(uParam0) == 0)
		{
			__LIB_11__::func_17();
		}
	}
}

bool func_415(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	if (__LIB_4__::func_948(uParam0, 2))
	{
		return true;
	}
	if (__LIB_0__::func_2() == 0)
	{
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5408))
	{
		return true;
	}
	iVar0 = __LIB_4__::func_543(__LIB_4__::func_941(uParam0));
	if (!__LIB_0__::func_91())
	{
		vVar2 = { __LIB_1__::func_469(uParam0->f_607) };
	}
	if (func_862(uParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		uParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_416(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	struct<11> Var0;
	int iVar11;
	int iVar12;
	int iVar13;
	vector3 vVar14;
	int iVar17;
	struct<11> Var18;
	int iVar29;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5411))
	{
		if (!__LIB_4__::func_948(uParam0, 16777216))
		{
			if (!__LIB_5__::func_283(uParam0))
			{
				__LIB_4__::func_945(uParam0, 16777216);
			}
			else
			{
				Var0.f_10 = 7;
				Var0 = 0;
				Var0.f_1 = 0;
				Var0.f_6 = uParam2;
				Var0.f_6.f_1 = uParam3;
				Var0.f_6.f_2 = uParam4;
				Var0.f_9 = fParam5;
				Var0.f_10 = 1;
				iVar11 = 0;
				iVar12 = __LIB_4__::func_720(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					__LIB_4__::func_945(uParam0, 16777216);
					if (iVar11 == 2 && !ENTITY::IS_ENTITY_DEAD(iVar12))
					{
						if (iVar12 == uParam0->f_5411)
						{
							__LIB_4__::func_945(uParam0, 16777216);
						}
						else if (__LIB_0__::func_48(iVar12, uParam0->f_5411, 5f, 1))
						{
							if (__LIB_0__::func_126(iVar12))
							{
								PHYSICS::_0x0348469DAA17576C(iVar12);
							}
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar12, false, true);
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar12, uParam0->f_5417, uParam0->f_5420, true, false, true);
						}
					}
				}
			}
			return false;
		}
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5411))
		{
			return true;
		}
	}
	if (__LIB_4__::func_948(uParam0, 1))
	{
		return true;
	}
	vVar14 = { __LIB_1__::func_469(uParam0->f_607) };
	if (__LIB_0__::func_2() == 0)
	{
		STREAMING::REQUEST_MODEL(__LIB_4__::func_950(uParam0), false);
		if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_950(uParam0)))
		{
			return false;
		}
		if (__LIB_5__::func_50(&iVar17, __LIB_4__::func_950(uParam0), vVar14, 0f, 0, 0, 1, 1, 1))
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(iVar17, true);
			iVar13 = NETWORK::NET_TO_PED(iVar17);
		}
	}
	else
	{
		if (((((uParam0->f_607 == 38 || uParam0->f_607 == 39) || uParam0->f_607 == 43) || uParam0->f_607 == 40) || uParam0->f_607 == 41) || uParam0->f_607 == 42)
		{
			__LIB_4__::func_945(uParam0, 1);
			return false;
		}
		Var18.f_10 = 7;
		Var18 = bParam1;
		Var18.f_1 = iParam6;
		Var18.f_4 = iParam7;
		Var18.f_3 = iParam8;
		Var18.f_6 = uParam2;
		Var18.f_6.f_1 = uParam3;
		Var18.f_6.f_2 = uParam4;
		Var18.f_9 = fParam5;
		if (__LIB_4__::func_948(uParam0, 262144))
		{
			Var18.f_2 = 1;
		}
		else if (__LIB_4__::func_948(uParam0, 32768))
		{
			Var18.f_2 = 0;
		}
		iVar29 = 0;
		iVar13 = __LIB_4__::func_720(&iVar29, &Var18);
		if (iVar29 == 0)
		{
			return false;
		}
		else if (iVar29 == 1)
		{
			return false;
		}
		else if (iVar29 == 2)
		{
			if (!__LIB_4__::func_948(uParam0, 16))
			{
				__LIB_4__::func_945(uParam0, 16);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar13))
	{
		uParam0->f_5411 = iVar13;
		uParam0->f_5412 = iVar13;
		__LIB_5__::func_255(uParam0, bParam1);
		if (!__LIB_4__::func_948(uParam0, 256))
		{
			if (!__LIB_4__::func_948(uParam0, 32768))
			{
				vVar14.x = uParam2;
				vVar14.f_1 = uParam3;
				vVar14.f_2 = uParam4;
				if ((!__LIB_0__::func_126(iVar13) || __LIB_0__::func_665(Global_35, iVar13, 1, 1) > 200f) && !__LIB_0__::func_86(vVar14))
				{
					if (!__LIB_0__::func_91())
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar13, false);
						func_870(iVar13, vVar14, fParam5, 2, 1073741824 /* Float: 2f */);
					}
				}
			}
		}
		else
		{
			Stack.Push(uParam0);
			Call_Loc(uParam0->f_10782);
		}
		return false;
	}
	return false;
}

void func_417(var uParam0)
{
	int iVar0;
	var uVar1;
	if (!__LIB_4__::func_948(uParam0, 32) && __LIB_4__::func_951(uParam0, 3))
	{
		if (__LIB_4__::func_544(uParam0->f_607, &iVar0, &uVar1))
		{
			CLOCK::SET_CLOCK_TIME(iVar0, 0, 0);
			__LIB_4__::func_945(uParam0, 32);
		}
	}
	if (!__LIB_4__::func_948(uParam0, 32))
	{
		if (func_872(&(uParam0->f_609), uParam0->f_607))
		{
			__LIB_4__::func_945(uParam0, 32);
		}
	}
}

void func_418(var uParam0)
{
	struct<4> Var0;
	if (!__LIB_4__::func_948(uParam0, 128))
	{
		if (__LIB_4__::func_948(uParam0, 16384))
		{
			__LIB_5__::func_284(uParam0);
			if (func_874(uParam0))
			{
				__LIB_5__::func_326(&(uParam0->f_10792));
				__LIB_4__::func_969(uParam0, 2097152);
				__LIB_4__::func_958(uParam0, 16384);
				__LIB_4__::func_945(uParam0, 128);
			}
			return;
		}
		if (__LIB_4__::func_951(uParam0, 1))
		{
			return;
		}
		if (__LIB_4__::func_948(uParam0, 64))
		{
			__LIB_5__::func_284(uParam0);
			MemCopy(&Var0, {__LIB_4__::func_681(__LIB_4__::func_941(uParam0))}, 4);
			if (func_876(uParam0, Var0))
			{
				if (__LIB_4__::func_962(uParam0) != 4)
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				__LIB_4__::func_945(uParam0, 128);
			}
		}
		else
		{
			if (__LIB_4__::func_962(uParam0) != 4)
			{
				CAM::DO_SCREEN_FADE_OUT(1);
			}
			__LIB_4__::func_945(uParam0, 128);
		}
	}
}

bool func_420(var uParam0)
{
	int iVar0;
	char[] cVar1[8];
	iVar0 = 1;
	if (!__LIB_8__::func_910(uParam0))
	{
		iVar0 = 0;
	}
	if (!func_415(uParam0, __LIB_4__::func_951(uParam0, 3), !__LIB_4__::func_937(uParam0, 2097152), uParam0->f_5410, !__LIB_4__::func_937(uParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_416(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
	{
		iVar0 = 0;
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		iVar0 = 0;
	}
	if (__LIB_4__::func_948(uParam0, 4) && !PED::_0x0EE3F0D7FECCC54F())
	{
		iVar0 = 0;
	}
	if (!__LIB_4__::func_505(&(uParam0->f_8269)))
	{
		MemCopy(&cVar1, {__LIB_4__::func_542(uParam0->f_607)}, 3);
		if (__LIB_5__::func_341(&(uParam0->f_8269), &cVar1, 0, 1, 1))
		{
		}
		else
		{
			iVar0 = 0;
		}
	}
	if (__LIB_4__::func_951(uParam0, 1))
	{
		if (!__LIB_0__::func_899(&(uParam0->f_13115)))
		{
			__LIB_4__::func_89(&(uParam0->f_13115), 0);
		}
		if (__LIB_1__::func_583(&(uParam0->f_13115)) < 30f)
		{
			if (Global_1879534.f_1 || Global_1879534)
			{
				iVar0 = 0;
			}
			if (Global_1935630.f_2 != Global_40.f_39 || (!Global_1935630.f_12 && ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) != Global_40.f_39))
			{
				iVar0 = 0;
			}
			if (Global_40.f_7729 != Global_1905941)
			{
				iVar0 = 0;
			}
			if (!Global_1935630.f_12 && !PED::_0xA0BC8FAED8CFEB3C(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_422(var uParam0)
{
	func_882();
	if (!func_883(uParam0))
	{
		return false;
	}
	if (!func_884(uParam0))
	{
		return false;
	}
	if (!func_885(uParam0))
	{
		return false;
	}
	if (!func_886(uParam0))
	{
		return false;
	}
	func_887(uParam0);
	return true;
}

bool func_424(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	func_888(uParam0);
	__LIB_11__::func_756(uParam0);
	iVar0 = __LIB_4__::func_939(uParam0);
	iVar1 = __LIB_5__::func_475(uParam0);
	iVar2 = __LIB_5__::func_279(uParam0, iVar0);
	if (__LIB_4__::func_937(uParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_874(uParam0);
		}
	}
	__LIB_11__::func_56(uParam0);
	__LIB_8__::func_801(uParam0);
	__LIB_5__::func_478(uParam0);
	__LIB_5__::func_479(uParam0);
	__LIB_5__::func_480(uParam0);
	__LIB_4__::func_970(uParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		__LIB_5__::func_575(uParam0);
	}
	if ((__LIB_4__::func_939(uParam0) == 0 && iVar2 < 3) && __LIB_5__::func_253(uParam0) == 0)
	{
		func_418(uParam0);
	}
	if (__LIB_5__::func_331(uParam0, iVar0, 512))
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	func_74(uParam0);
	switch (iVar2)
	{
		case 0:
			if (__LIB_5__::func_481(uParam0, iVar0, 0))
			{
				if (__LIB_5__::func_285(uParam0, __LIB_4__::func_939(uParam0)) != -1 && PED::_0x62DE46F061CAA468() < __LIB_5__::func_285(uParam0, __LIB_4__::func_939(uParam0)))
				{
					PED::_0xF008E0BA1FE1D644((__LIB_5__::func_285(uParam0, __LIB_4__::func_939(uParam0)) - PED::_0x62DE46F061CAA468()));
				}
				if ((__LIB_4__::func_939(uParam0) == 25 || __LIB_4__::func_939(uParam0) == 26) && __LIB_0__::func_13(32768))
				{
					__LIB_5__::func_33(uParam0, 524288);
				}
				if (__LIB_4__::func_948(uParam0, 4))
				{
					if (!__LIB_4__::func_937(uParam0, 4))
					{
						__LIB_0__::func_16(uParam0, iVar0);
						__LIB_4__::func_944(uParam0, 4);
					}
					__LIB_10__::func_922(uParam0);
					__LIB_5__::func_286(uParam0, iVar0, 1);
				}
				else
				{
					__LIB_5__::func_286(uParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (__LIB_8__::func_910(uParam0))
			{
				if (__LIB_17__::func_525(uParam0))
				{
					if (__LIB_4__::func_937(uParam0, 4))
					{
						__LIB_4__::func_969(uParam0, 4);
					}
					__LIB_5__::func_286(uParam0, iVar0, 2);
				}
			}
			else if (__LIB_10__::func_914(uParam0) >= uParam0->f_13144)
			{
				if (__LIB_4__::func_937(uParam0, 4))
				{
					__LIB_4__::func_969(uParam0, 4);
				}
				__LIB_5__::func_286(uParam0, iVar0, 2);
			}
			break;
		case 2:
			if (__LIB_5__::func_481(uParam0, iVar0, 2))
			{
				if (!__LIB_5__::func_258(uParam0))
				{
					__LIB_5__::func_286(uParam0, iVar0, 4);
					if (func_905(uParam0, iVar0, iVar1))
					{
						__LIB_5__::func_286(uParam0, iVar0, 5);
					}
				}
				else
				{
					__LIB_5__::func_482(uParam0);
					__LIB_5__::func_286(uParam0, iVar0, 3);
					if (func_907(uParam0, iVar0))
					{
						__LIB_5__::func_286(uParam0, iVar0, 4);
						if (func_905(uParam0, iVar0, iVar1))
						{
							__LIB_5__::func_286(uParam0, iVar0, 5);
						}
					}
				}
			}
			else if (__LIB_5__::func_52(uParam0))
			{
				func_907(uParam0, iVar0);
			}
			break;
		case 3:
			if (func_907(uParam0, iVar0))
			{
				__LIB_5__::func_286(uParam0, iVar0, 4);
				if (func_905(uParam0, iVar0, iVar1))
				{
					__LIB_5__::func_286(uParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_905(uParam0, iVar0, iVar1))
			{
				__LIB_5__::func_286(uParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!__LIB_0__::func_2() == 0)
			{
				__LIB_5__::func_288(uParam0);
				__LIB_17__::func_526(uParam0, iVar0);
				__LIB_5__::func_289(uParam0);
				__LIB_11__::func_729(uParam0);
				if (__LIB_5__::func_331(uParam0, iVar1, 2))
				{
					if (__LIB_5__::func_483(uParam0, iVar1))
					{
						__LIB_11__::func_39(uParam0, iVar1);
					}
				}
			}
			if (__LIB_5__::func_481(uParam0, iVar0, 5))
			{
				if (__LIB_5__::func_481(uParam0, iVar0, 7))
				{
					if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 67108864))
					{
						__LIB_8__::func_905(uParam0, __LIB_4__::func_939(uParam0));
					}
					__LIB_11__::func_645(uParam0, iVar1);
					__LIB_11__::func_756(uParam0);
					return true;
				}
				else
				{
					__LIB_5__::func_286(uParam0, iVar0, 7);
				}
			}
			else
			{
				if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 4194304))
				{
					if ((!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 16))
					{
						CAM::DO_SCREEN_FADE_IN(0);
						__LIB_1__::func_164(0);
					}
					__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 4194304);
				}
				if ((__LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) && !__LIB_4__::func_948(uParam0, 8192)) && !__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 8))
				{
					__LIB_5__::func_20(1, 0);
					__LIB_1__::func_422("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (__LIB_0__::func_0(uParam0))
					{
						__LIB_5__::func_286(uParam0, iVar0, 6);
					}
				}
				if (__LIB_4__::func_937(uParam0, 268435456))
				{
					if (MISC::_0x1B065A2BF7953815(1) != 1)
					{
						__LIB_5__::func_599(uParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
						__LIB_4__::func_969(uParam0, 268435456);
					}
				}
				if (__LIB_4__::func_948(uParam0, 1048576))
				{
					if (func_127(func_34(0)))
					{
						__LIB_4__::func_958(uParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!__LIB_0__::func_2() == 0)
			{
				__LIB_5__::func_288(uParam0);
				__LIB_17__::func_526(uParam0, iVar0);
				__LIB_5__::func_289(uParam0);
				__LIB_11__::func_729(uParam0);
				if (__LIB_5__::func_331(uParam0, __LIB_5__::func_475(uParam0), 2))
				{
					if (__LIB_5__::func_483(uParam0, __LIB_5__::func_475(uParam0)))
					{
						__LIB_11__::func_39(uParam0, __LIB_5__::func_475(uParam0));
					}
				}
			}
			if ((!__LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) || __LIB_4__::func_948(uParam0, 8192)) || __LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 8))
			{
				if (__LIB_5__::func_481(uParam0, iVar0, 5))
				{
					if (__LIB_0__::func_0(uParam0))
					{
						__LIB_5__::func_286(uParam0, iVar0, 7);
					}
				}
				else
				{
					__LIB_0__::func_0(uParam0);
					__LIB_5__::func_286(uParam0, iVar0, 5);
				}
			}
			else
			{
				__LIB_5__::func_481(uParam0, iVar0, 5);
				__LIB_0__::func_16(uParam0);
			}
			break;
		case 7:
			if (__LIB_5__::func_481(uParam0, iVar0, 7))
			{
				if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 67108864))
				{
					__LIB_8__::func_905(uParam0, __LIB_4__::func_939(uParam0));
				}
				__LIB_11__::func_645(uParam0, iVar1);
				__LIB_11__::func_756(uParam0);
				return true;
			}
			break;
		default:
			__LIB_5__::func_286(uParam0, iVar0, 7);
			break;
	}
	return false;
}

void func_426()
{
	if (PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0x12E09E278C6C29B7(PLAYER::GET_PLAYER_INDEX());
	}
}

void func_430(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (bParam1 || __LIB_0__::func_272((*iParam0)[iVar0 /*26*/], 0))
		{
			(iParam0[iVar0 /*26*/])->f_25 = 0;
			__LIB_0__::func_325(&((iParam0[iVar0 /*26*/])->f_3));
			__LIB_2__::func_426(&((iParam0[iVar0 /*26*/])->f_1));
			__LIB_2__::func_426(iParam0[iVar0 /*26*/]);
		}
		iVar0++;
	}
}

void func_434()
{
	__LIB_2__::func_353(&uLocal_334, 0);
	__LIB_2__::func_353(&uLocal_335, 0);
	__LIB_2__::func_353(&uLocal_339, 0);
	__LIB_2__::func_353(&uLocal_336, 0);
	__LIB_2__::func_353(&uLocal_337, 0);
	__LIB_2__::func_353(&uLocal_338, 0);
	__LIB_2__::func_353(&uLocal_342, 0);
	__LIB_2__::func_353(&uLocal_343, 0);
	__LIB_2__::func_353(&uLocal_344, 0);
	__LIB_2__::func_353(&uLocal_345, 0);
	__LIB_2__::func_353(&uLocal_346, 0);
	__LIB_2__::func_353(&uLocal_347, 0);
	__LIB_2__::func_353(&uLocal_348, 0);
	__LIB_2__::func_353(&uLocal_349, 0);
	__LIB_2__::func_353(&uLocal_350, 0);
}

void func_436()
{
	__LIB_0__::func_172(Local_83.f_4);
	__LIB_0__::func_172(Local_100.f_4);
	__LIB_0__::func_172(Local_117.f_4);
	__LIB_0__::func_172(iLocal_410);
	__LIB_0__::func_172(iLocal_411);
	__LIB_0__::func_172(iLocal_412);
	__LIB_0__::func_172(iLocal_413);
}

void func_438()
{
	func_927(iLocal_407, 11);
	func_927(iLocal_408, 11);
	__LIB_5__::func_440("nts2_fallen_trees_road");
	__LIB_5__::func_440("nts2_fallen_tree_ridge");
}

void func_439()
{
	if (__LIB_0__::func_272(Local_83, 0))
	{
		PED::RESET_AI_WEAPON_DAMAGE_MODIFIER();
		PED::_0x73B6F907B913C860(Local_83, 1f);
	}
}

void func_443()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_186 - 1))
	{
		__LIB_1__::func_951(&(Local_186[iVar0 /*19*/]));
		iVar0++;
	}
}

void func_444()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_134 - 1))
	{
		__LIB_0__::func_325(&(Local_134[iVar0 /*17*/].f_3));
		__LIB_0__::func_172(Local_134[iVar0 /*17*/].f_4);
		__LIB_2__::func_426(&(Local_134[iVar0 /*17*/]));
		iVar0++;
	}
}

void func_445()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_263 - 1))
	{
		if (PHYSICS::DOES_ROPE_EXIST(Local_263[iVar0 /*10*/]))
		{
			PHYSICS::DELETE_ROPE(&(Local_263[iVar0 /*10*/]));
		}
		iVar0++;
	}
}

void func_447()
{
	if (STREAMING::_IS_IMAP_ACTIVE(iLocal_35))
	{
		STREAMING::_REMOVE_IMAP(iLocal_35);
	}
}

void func_448()
{
	__LIB_0__::func_325(&iLocal_405);
	__LIB_0__::func_325(&iLocal_406);
}

void func_449(bool bParam0, bool bParam1, bool bParam2)
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (bParam0)
		{
			TASK::CLEAR_PED_TASKS(Global_35, false, false);
			TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
		}
		if (bParam1)
		{
			__LIB_0__::func_489(0, 0);
		}
		if (bParam2)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
		}
		PED::SET_PED_CONFIG_FLAG(Global_35, 364, false);
		PLAYER::RESET_PLAYER_ARREST_STATE(PLAYER::GET_PLAYER_INDEX());
		PLAYER::_0xCBB54CC7FFFFAB86(PLAYER::GET_PLAYER_INDEX(), 0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 14, 1, 0);
	}
}

struct<4> func_476(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_780(iParam0, iParam1) };
	Var0.f_3 = func_951(iParam0, iParam1);
	return Var0;
}

bool func_554(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_787(iParam0) && __LIB_1__::func_800(iParam0))
		{
			func_1010(iParam0, iParam1, 1, &bParam2, iParam3);
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

int func_578(int iParam0, bool bParam1)
{
	int iVar0;
	switch (iParam0)
	{
		case joaat("AMMO_THROWING_KNIVES"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_IMPROVED"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_POISON"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_DYNAMITE"):
			iVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_DYNAMITE_VOLATILE"):
			iVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_MOLOTOV"):
			iVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_MOLOTOV_VOLATILE"):
			iVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_TOMAHAWK"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_ANCIENT"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK_ANCIENT");
			break;
		case joaat("AMMO_TOMAHAWK_HOMING"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_IMPROVED"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_HATCHET"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET");
			break;
		case joaat("AMMO_HATCHET_HUNTER"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER");
			break;
		case joaat("AMMO_HATCHET_HUNTER_RUSTED"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER_RUSTED");
			break;
		case joaat("AMMO_HATCHET_ANCIENT"):
			iVar0 = joaat("WEAPON_MELEE_ANCIENT_HATCHET");
			break;
		case joaat("AMMO_HATCHET_CLEAVER"):
			iVar0 = joaat("WEAPON_MELEE_CLEAVER");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT_RUSTED"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT_RUSTED");
			break;
		case joaat("AMMO_HATCHET_HEWING"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HEWING");
			break;
		case joaat("AMMO_HATCHET_VIKING"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_VIKING");
			if (__LIB_0__::func_144(iVar0, 0))
			{
				if (bParam1)
				{
					if (__LIB_0__::func_428(iVar0) || __LIB_0__::func_214(iVar0))
					{
						return iVar0;
					}
				}
				else
				{
					return iVar0;
				}
			}
			return iParam0;
		}
int func_579(int iParam0, bool bParam1)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

bool func_584(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;
	iVar0 = func_579(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_915(iVar0);
			if (iParam1 == 1248274121)
			{
				__LIB_1__::func_618(iVar0);
			}
		}
		if (!__LIB_1__::func_761(iParam0, &uVar1, 1, 0, 0))
		{
			func_1010(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = __LIB_0__::func_940(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				__LIB_1__::func_708(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				__LIB_1__::func_708(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				__LIB_1__::func_708(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_MELEE(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !__LIB_0__::func_181())
				{
					return false;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!__LIB_0__::func_216(iVar0))
				{
					__LIB_1__::func_708(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					__LIB_1__::func_708(iVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
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
					if (!__LIB_1__::func_708(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!__LIB_1__::func_708(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!__LIB_1__::func_708(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		__LIB_1__::func_240(480, 1);
	}
	return true;
}

void func_597(int iParam0)
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
			func_1064(-748969569, 0, 0);
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

void func_599(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	if (__LIB_0__::func_2() == -1)
	{
		if (!__LIB_1__::func_154(43))
		{
			if (iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
			{
				__LIB_1__::func_240(348, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
			{
				__LIB_1__::func_240(350, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
			{
				__LIB_1__::func_240(352, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				__LIB_1__::func_240(400, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 412399755))
		{
			func_1065(joaat("EXOTIC_STAGE_01"));
			if (__LIB_0__::func_944() == 0)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 1);
				if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(44))
		{
			if (iParam0 == joaat("PROVISION_HERON_FEATHER"))
			{
				__LIB_1__::func_240(354, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				__LIB_1__::func_240(399, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				__LIB_1__::func_240(401, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 709057512))
		{
			func_1065(joaat("EXOTIC_STAGE_02"));
			if (__LIB_0__::func_944() == 1)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 2);
				if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(45))
		{
			if (iParam0 == joaat("PROVISION_GATOR_EGG"))
			{
				__LIB_1__::func_240(359, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				__LIB_1__::func_240(394, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				__LIB_1__::func_240(395, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				__LIB_1__::func_240(398, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1478961327))
		{
			func_1065(joaat("EXOTIC_STAGE_03"));
			if (__LIB_0__::func_944() == 2)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 4);
				if (iParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!__LIB_0__::func_440(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						__LIB_0__::func_441(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
						__LIB_4__::func_124(48);
					}
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(46))
		{
			if (iParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
			{
				__LIB_1__::func_240(356, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				__LIB_1__::func_240(402, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				__LIB_1__::func_240(404, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				__LIB_1__::func_240(406, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1238404098))
		{
			func_1065(joaat("EXOTIC_STAGE_04"));
			if (__LIB_0__::func_944() == 3)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 8);
				if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(47))
		{
			if (iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				__LIB_1__::func_240(396, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				__LIB_1__::func_240(397, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				__LIB_1__::func_240(405, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				__LIB_1__::func_240(403, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 1160548794))
		{
			func_1065(joaat("EXOTIC_STAGE_05"));
			if (__LIB_0__::func_944() == 4)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 16);
				if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_641()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1116(0);
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
	func_1116(1);
}

void func_642()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_299(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_643()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1119(0);
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
	func_1119(1);
}

void func_644()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_2__::func_522(15000, 0, 0, 0, 1);
			func_1119(0);
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
	__LIB_2__::func_590(15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
	func_1119(1);
}

void func_645()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_299(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_299(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_648(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_648(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_648(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			__LIB_2__::func_471(iParam0, -iParam1, bVar0, bVar1, bVar2);
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
			func_648(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
		__LIB_2__::func_471(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1127(iParam0, iParam1);
	return 1;
}

int func_689(var uParam0, int iParam1, int iParam2, int iParam3)
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
		*iParam2 = (*iParam2 + iVar2);
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
	iVar11 = (func_1164(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_299(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_2__::func_522(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

bool func_729(var uParam0)
{
	if (!__LIB_11__::func_20(2))
	{
		func_1193();
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_730(var uParam0)
{
	if (!func_1194())
	{
		return false;
	}
	if (!__LIB_4__::func_948(uParam0, 4))
	{
		__LIB_11__::func_59(uParam0, 1);
	}
	else if (__LIB_11__::func_20(2))
	{
		func_1195(Global_35, func_204(0, 4), 2, 1073741824 /* Float: 2f */);
		func_1195(Local_83, func_204(0, 9), 2, 1073741824 /* Float: 2f */);
		func_1195(Local_100, func_204(0, 11), 2, 1073741824 /* Float: 2f */);
		func_1195(Local_117, func_204(0, 13), 2, 1073741824 /* Float: 2f */);
		func_1195(Local_134[0 /*17*/], func_204(0, 15), 2, 1073741824 /* Float: 2f */);
		func_1195(Local_134[1 /*17*/], func_204(0, 17), 2, 1073741824 /* Float: 2f */);
		func_1195(Local_134[2 /*17*/], func_204(0, 19), 2, 1073741824 /* Float: 2f */);
		func_1196();
		__LIB_10__::func_930(uParam0, Local_83, joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
		func_1198(uParam0, 4, 12f);
		iLocal_2467 = 12;
		iLocal_2468 = 11;
		__LIB_11__::func_59(uParam0, 9);
	}
	else if (__LIB_11__::func_20(1))
	{
		func_1195(Global_35, func_204(0, 3), 2, 1073741824 /* Float: 2f */);
		func_1195(Local_83, func_204(0, 8), 2, 1073741824 /* Float: 2f */);
		func_1195(Local_100, func_204(0, 11), 2, 1073741824 /* Float: 2f */);
		func_1195(Local_117, func_204(0, 13), 2, 1073741824 /* Float: 2f */);
		func_1195(Local_134[0 /*17*/], func_204(0, 15), 2, 1073741824 /* Float: 2f */);
		func_1195(Local_134[1 /*17*/], func_204(0, 17), 2, 1073741824 /* Float: 2f */);
		func_1195(Local_134[2 /*17*/], func_204(0, 20), 2, 1073741824 /* Float: 2f */);
		__LIB_3__::func_595(ENTITY::GET_ENTITY_COORDS(iLocal_358, true, false));
		func_1200(uParam0, 2, 1);
		iLocal_405 = __LIB_8__::func_778(408396114, iLocal_358, 1);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_405, "NTS2_SPOOL");
		iLocal_2453 = __LIB_2__::func_403("NTS2_CTXT_PIK", joaat("INPUT_CONTEXT_X"), iLocal_358, 2, 1, 0, 0, 5, 2.33f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
		__LIB_1__::func_221(iLocal_2453, 1, 1);
		__LIB_1__::func_382(iLocal_2453, 1, 1);
		__LIB_1__::func_574(&iLocal_2453, iLocal_358);
		iLocal_2467 = 3;
		iLocal_2468 = 3;
		__LIB_11__::func_59(uParam0, 2);
	}
	else
	{
		func_1195(Global_35, func_204(0, 2), 2, 1073741824 /* Float: 2f */);
		func_1195(Local_83, func_204(0, 7), 2, 1073741824 /* Float: 2f */);
		func_1195(Local_100, func_204(0, 12), 2, 1073741824 /* Float: 2f */);
		func_1195(Local_117, func_204(0, 14), 2, 1073741824 /* Float: 2f */);
		func_1195(Local_134[0 /*17*/], func_204(0, 16), 2, 1073741824 /* Float: 2f */);
		func_1195(Local_134[1 /*17*/], func_204(0, 18), 2, 1073741824 /* Float: 2f */);
		func_1195(Local_134[2 /*17*/], func_204(0, 21), 2, 1073741824 /* Float: 2f */);
		__LIB_11__::func_59(uParam0, 1);
	}
	if (!__LIB_11__::func_20(2))
	{
		if (!PHYSICS::DOES_ROPE_EXIST(Local_263[0 /*10*/]))
		{
			func_1206(&(Local_263[0 /*10*/]), iLocal_361, 8.5f, 1108082688 /* Float: 35f */, 125);
			func_1207();
		}
	}
	func_1208(uParam0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_731(var uParam0)
{
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
	if (__LIB_11__::func_20(1) || __LIB_11__::func_20(2))
	{
		PED::_SET_PED_CROUCH_MOVEMENT(Local_100, true, 0, true);
		PED::_SET_PED_CROUCH_MOVEMENT(Local_117, true, 0, true);
		PED::_SET_PED_CROUCH_MOVEMENT(Local_134[0 /*17*/], true, 0, true);
		PED::_SET_PED_CROUCH_MOVEMENT(Local_134[1 /*17*/], true, 0, true);
		PED::_SET_PED_CROUCH_MOVEMENT(Local_134[2 /*17*/], true, 0, true);
		__LIB_11__::func_735(Local_134[0 /*17*/], joaat("WORLD_HUMAN_CROUCH_INSPECT"), ENTITY::GET_ENTITY_COORDS(Local_134[0 /*17*/], true, false), ENTITY::GET_ENTITY_HEADING(Local_134[0 /*17*/]), 0, 1);
		__LIB_11__::func_735(Local_134[1 /*17*/], joaat("GENERIC_SIT_GROUND_SCENARIO"), ENTITY::GET_ENTITY_COORDS(Local_134[1 /*17*/], true, false), ENTITY::GET_ENTITY_HEADING(Local_134[1 /*17*/]), 0.25f, 1);
	}
	if (!__LIB_11__::func_20(2))
	{
		func_1210();
	}
	else
	{
		__LIB_11__::func_335(iLocal_378);
	}
	PED::REQUEST_PED_VISIBILITY_TRACKING(Local_83);
	PED::REQUEST_PED_VISIBILITY_TRACKING(Local_100);
	PED::REQUEST_PED_VISIBILITY_TRACKING(Local_117);
	PED::REQUEST_PED_VISIBILITY_TRACKING(Local_134[0 /*17*/]);
	PED::REQUEST_PED_VISIBILITY_TRACKING(Local_134[1 /*17*/]);
	PED::REQUEST_PED_VISIBILITY_TRACKING(Local_134[2 /*17*/]);
	__LIB_1__::func_951(&iLocal_355);
	func_1195(iLocal_359, func_204(0, 22), 2, 1073741824 /* Float: 2f */);
	__LIB_4__::func_89(&uLocal_2461, 0);
	__LIB_4__::func_952(uParam0, 0);
	return uParam0->f_607 == uParam0->f_607;
}

int func_732(var uParam0)
{
	func_1212(uParam0);
	func_1213(uParam0);
	func_1214(uParam0);
	func_1215(uParam0);
	func_1216();
	func_1217();
	func_1218(Local_117);
	func_1218(Local_134[0 /*17*/]);
	func_1218(Local_134[1 /*17*/]);
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			if (iLocal_2468 == 11)
			{
				func_1195(iLocal_359, func_204(0, 22), 2, 1073741824 /* Float: 2f */);
				__LIB_4__::func_952(uParam0, 1);
			}
			break;
		case 1:
			if (func_1220(Global_35, sLocal_36, 52))
			{
				TASK::TASK_LOOK_AT_ENTITY(Local_100, Global_35, -1, 16, 41, 0);
				__LIB_4__::func_952(uParam0, 2);
			}
			break;
		case 2:
			if (func_1220(Global_35, sLocal_36, 70) || func_1220(Local_83, sLocal_36, 70))
			{
				__LIB_10__::func_935(uParam0, Local_83, 1);
				iLocal_405 = MAP::_BLIP_ADD_FOR_ENTITY(408396114, iLocal_359);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_405, "NTS2_DETONATOR");
				func_1198(uParam0, 5, 12f);
				__LIB_4__::func_952(uParam0, 3);
			}
			break;
		case 3:
			if (__LIB_0__::func_266(Global_35, func_369(0, 1), 12f, 1, 1))
			{
				PED::SET_PED_STEALTH_MOVEMENT(Global_35, true, 0, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(Local_100, joaat("WEAPON_REPEATER_CARBINE"), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(Local_100, 1, 0, 0, 0);
				__LIB_4__::func_952(uParam0, 4);
			}
			break;
		case 4:
			__LIB_1__::func_448(Global_35, func_369(0, 1), 0, 15f, 10f, 5f, 0f, 1, 1, 1, 0);
			if (__LIB_0__::func_266(Global_35, func_369(0, 1), 3.5f, 1, 1))
			{
				TASK::TASK_CLEAR_LOOK_AT(Local_100);
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, false);
				func_1224();
				__LIB_0__::func_325(&iLocal_405);
				__LIB_1__::func_561(&uLocal_2461);
				__LIB_1__::func_561(&uLocal_2458);
				__LIB_3__::func_638(Global_35, func_204(0, 1), 1f, 20000, 1048576000 /* Float: 0.25f */, 0);
				__LIB_4__::func_952(uParam0, 29);
			}
			break;
		case 29:
			if (!__LIB_11__::func_736("NTS2_01_BRAVESP") && iLocal_2467 >= 13)
			{
				return 1;
			}
	}
	return 0;
}

bool func_733(var uParam0)
{
	__LIB_11__::func_737(Local_83);
	__LIB_11__::func_737(Local_100);
	__LIB_11__::func_737(Local_117);
	__LIB_11__::func_737(Local_134[0 /*17*/]);
	__LIB_11__::func_737(Local_134[1 /*17*/]);
	__LIB_11__::func_737(Local_134[2 /*17*/]);
	func_1228();
	__LIB_0__::func_325(&iLocal_405);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_735(var uParam0)
{
	func_1195(Global_35, func_204(0, 1), 2, 1073741824 /* Float: 2f */);
	func_1195(Local_83, func_204(0, 6), 2, 1073741824 /* Float: 2f */);
	func_1195(Local_100, func_204(0, 11), 2, 1073741824 /* Float: 2f */);
	func_1196();
	return uParam0->f_607 == uParam0->f_607;
}

bool func_736(var uParam0)
{
	var uVar0;
	if (!func_1233(0))
	{
		return false;
	}
	if (__LIB_4__::func_948(uParam0, 4) || __LIB_4__::func_951(uParam0, 1))
	{
		PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, true);
		PED::_SET_PED_CROUCH_MOVEMENT(Local_83, true, 0, true);
		PED::_SET_PED_CROUCH_MOVEMENT(Local_100, true, 0, true);
		PED::_SET_PED_CROUCH_MOVEMENT(Local_117, true, 0, true);
		PED::_SET_PED_CROUCH_MOVEMENT(Local_134[0 /*17*/], true, 0, true);
		PED::_SET_PED_CROUCH_MOVEMENT(Local_134[1 /*17*/], true, 0, true);
		PED::_SET_PED_CROUCH_MOVEMENT(Local_134[2 /*17*/], true, 0, true);
		__LIB_11__::func_735(Local_134[0 /*17*/], joaat("WORLD_HUMAN_CROUCH_INSPECT"), ENTITY::GET_ENTITY_COORDS(Local_134[0 /*17*/], true, false), ENTITY::GET_ENTITY_HEADING(Local_134[0 /*17*/]), 0, 1);
		__LIB_11__::func_735(Local_134[1 /*17*/], joaat("GENERIC_SIT_GROUND_SCENARIO"), ENTITY::GET_ENTITY_COORDS(Local_134[1 /*17*/], true, false), ENTITY::GET_ENTITY_HEADING(Local_134[1 /*17*/]), 0.25f, 1);
	}
	if (!__LIB_1__::func_750(&uVar0))
	{
		__LIB_9__::func_387(joaat("KIT_BANDANA"), 0);
	}
	__LIB_5__::func_414(0, 1048576, 1);
	__LIB_5__::func_414(26, 16384, 1);
	func_1236(Local_117, -1100875244);
	func_1237();
	func_1238(iLocal_369);
	func_1238(iLocal_370);
	WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_737(var uParam0)
{
	if (!func_1239())
	{
		return false;
	}
	func_1240(1);
	TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_429[1 /*26*/], -1, 0, 51, 0);
	TASK::TASK_LOOK_AT_ENTITY(Local_83, Local_429[1 /*26*/], -1, 16, 51, 0);
	TASK::TASK_LOOK_AT_ENTITY(Local_100, Local_429[1 /*26*/], -1, 16, 51, 0);
	TASK::TASK_LOOK_AT_ENTITY(Local_117, Local_429[1 /*26*/], -1, 16, 51, 0);
	TASK::TASK_LOOK_AT_ENTITY(Local_134[0 /*17*/], Local_429[1 /*26*/], -1, 16, 51, 0);
	TASK::TASK_LOOK_AT_ENTITY(Local_134[1 /*17*/], Local_429[1 /*26*/], -1, 16, 51, 0);
	TASK::TASK_LOOK_AT_ENTITY(Local_134[2 /*17*/], Local_429[1 /*26*/], -1, 16, 51, 0);
	func_927(iLocal_407, 4);
	__LIB_6__::func_914(uParam0);
	__LIB_5__::func_33(uParam0, 64);
	__LIB_4__::func_944(uParam0, 33554432);
	__LIB_11__::func_22(iLocal_368);
	__LIB_4__::func_952(uParam0, 0);
	__LIB_11__::func_59(uParam0, 1);
	return uParam0->f_607 == uParam0->f_607;
}

int func_738(var uParam0)
{
	struct<4> Var0;
	func_1243(uParam0);
	func_1244(uParam0);
	func_1245(uParam0);
	func_1246();
	func_1218(Local_117);
	func_1218(Local_134[0 /*17*/]);
	func_1218(Local_134[1 /*17*/]);
	if (func_1220(Local_429[1 /*26*/], cLocal_45, 194))
	{
		func_1247(&Local_429, cLocal_45, 1, 0.5f, 0);
	}
	else
	{
		func_1247(&Local_429, cLocal_45, 1, 1.01f, 0);
	}
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			PED::_0xF7EA250B9A919E03(joaat("CROUCH"), Local_100);
			if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_368, "CS_EagleFlies"))
			{
				PED::FORCE_PED_MOTION_STATE(Local_100, joaat("MOTIONSTATE_CROUCH_IDLE"), false, 0, false);
			}
			PED::_0xF7EA250B9A919E03(joaat("CROUCH"), Local_134[2 /*17*/]);
			if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_368, "A_M_M_WAPWARRIORS_01"))
			{
				PED::FORCE_PED_MOTION_STATE(Local_134[2 /*17*/], joaat("MOTIONSTATE_CROUCH_IDLE"), false, 0, false);
			}
			if (func_1220(Local_429[1 /*26*/], cLocal_45, 184))
			{
				__LIB_1__::func_221(iLocal_2498, 1, 1);
				__LIB_4__::func_952(uParam0, 1);
			}
			break;
		case 1:
			if (func_1220(Local_429[1 /*26*/], cLocal_45, 220))
			{
				__LIB_11__::func_342(8);
				func_1224();
				__LIB_1__::func_281(&iLocal_2498, 1, 1);
				ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_370, "iSelection", 3, false);
				__LIB_11__::func_22(iLocal_370);
				__LIB_4__::func_952(uParam0, 3);
			}
			else if (__LIB_0__::func_139(iLocal_2498))
			{
				if (__LIB_5__::func_777(iLocal_2498, 1))
				{
					if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED"))
					{
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
						TASK::TASK_SWAP_WEAPON(Global_35, 1, 1, 0, 0);
					}
					ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_369, "iSelection", func_1250(), false);
					__LIB_1__::func_281(&iLocal_2498, 1, 1);
					func_1224();
					__LIB_11__::func_342(4);
					__LIB_4__::func_952(uParam0, 2);
				}
			}
			break;
		case 2:
			if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_369, "player_zero", &Var0, true, func_1251(func_1250()), 2))
			{
				__LIB_4__::func_89(&uLocal_2499, 0);
				if ((__LIB_9__::func_178(&uLocal_2499) > 2.5f || __LIB_0__::func_266(Global_35, Var0, 0.5f, 1, 0)) || ((__LIB_0__::func_266(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_359, true, false), 1f, 1, 0) && __LIB_3__::func_547(Global_35, iLocal_359, 1060437492 /* Float: 0.707f */) == 0) && __LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("WEAPON_UNARMED")))
				{
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
					__LIB_1__::func_561(&uLocal_2499);
					__LIB_11__::func_22(iLocal_369);
					__LIB_4__::func_952(uParam0, 3);
				}
				else if (!__LIB_0__::func_491(Global_35, 2106541073))
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(Global_35, Var0, 1f, 20000, Var0.f_3.f_2, 1056964608 /* Float: 0.5f */, 0);
				}
			}
			break;
		case 3:
			if (__LIB_11__::func_21(iLocal_369) || __LIB_11__::func_21(iLocal_370))
			{
				__LIB_4__::func_952(uParam0, 4);
			}
			break;
		case 4:
			if (((func_1256(iLocal_369) || bLocal_2497) || func_1256(iLocal_370)) || __LIB_11__::func_25(iLocal_370, 0.7f))
			{
				func_1258();
				func_927(iLocal_407, 6);
				func_1259(&Local_429, 0);
				func_1260(&Local_429, 4);
				func_1261(&Local_429, 1);
				__LIB_4__::func_952(uParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_739(var uParam0)
{
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	func_1240(0);
	func_1228();
	__LIB_0__::func_325(&iLocal_405);
	__LIB_3__::func_10(Global_35);
	__LIB_3__::func_10(Local_83);
	__LIB_3__::func_10(Local_100);
	__LIB_3__::func_10(Local_117);
	__LIB_3__::func_10(Local_134[0 /*17*/]);
	__LIB_3__::func_10(Local_134[1 /*17*/]);
	__LIB_3__::func_10(Local_134[2 /*17*/]);
	MISC::_0xE98D55C5983F2509(iLocal_359);
	OBJECT::_0xA22712E8471AA08E(iLocal_359, 0, 0);
	MISC::_0xFC6ECB9170145ECE();
	return uParam0->f_607 == uParam0->f_607;
}

bool func_740(var uParam0)
{
	if (!func_1233(__LIB_4__::func_948(uParam0, 4)))
	{
		return false;
	}
	if (!__LIB_4__::func_948(uParam0, 4))
	{
		func_1196();
	}
	func_1195(Global_35, func_204(2, 0), 2, 1073741824 /* Float: 2f */);
	func_1195(Local_83, func_204(2, 2), 2, 1073741824 /* Float: 2f */);
	func_1195(Local_100, func_204(2, 1), 2, 1073741824 /* Float: 2f */);
	func_1195(Local_117, func_204(2, 3), 2, 1073741824 /* Float: 2f */);
	func_1195(Local_134[0 /*17*/], func_204(2, 4), 2, 1073741824 /* Float: 2f */);
	func_1195(Local_134[1 /*17*/], func_204(2, 5), 2, 1073741824 /* Float: 2f */);
	func_1195(Local_134[2 /*17*/], func_204(0, 19), 2, 1073741824 /* Float: 2f */);
	func_927(iLocal_407, 4);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_741(var uParam0)
{
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	if (__LIB_5__::func_253(uParam0) == 0)
	{
		func_1263();
	}
	if (!func_1264())
	{
		return false;
	}
	func_1265(uParam0);
	if (!func_1266(&Local_429))
	{
		return false;
	}
	if (__LIB_4__::func_948(uParam0, 4))
	{
		func_927(iLocal_407, 9);
		func_1267(&Local_429, 1, 0, 1, 1089470464 /* Float: 7.5f */);
		func_1267(&Local_742, 1, 0, 1, 1089470464 /* Float: 7.5f */);
		__LIB_3__::func_595(func_369(2, 11));
	}
	else
	{
		__LIB_6__::func_901(uParam0, 524288);
	}
	__LIB_3__::func_414(&uLocal_335, 65.8804f, 1059.336f, 194.8182f, 3f, 1, 32, 0);
	__LIB_5__::func_441("nts2_fallen_trees_road");
	AICOVERPOINT::_0x64340DC208D671D5("nativeson2_fallentrees");
	func_1261(&Local_429, 1);
	func_1261(&Local_742, 1);
	func_1271();
	func_1258();
	AUDIO::_0x36559148B78853B3(1, 0, 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_742(var uParam0)
{
	func_927(iLocal_407, 9);
	func_1259(&Local_429, 1);
	func_1260(&Local_429, 0);
	func_1261(&Local_429, 0);
	func_1261(&Local_742, 0);
	func_1272(&Local_429, 0, 0, 0);
	func_1272(&Local_742, 1, 0, 0);
	func_1273(Local_83, joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH"), joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH_DUALWIELD"));
	func_1273(Local_100, joaat("WEAPON_REPEATER_CARBINE"), 0);
	func_1273(Local_117, joaat("WEAPON_BOW"), 0);
	func_1273(Local_134[0 /*17*/], joaat("WEAPON_BOW"), 0);
	func_1273(Local_134[1 /*17*/], joaat("WEAPON_BOW"), 0);
	func_1273(Local_134[2 /*17*/], joaat("WEAPON_REPEATER_CARBINE"), 0);
	fLocal_2513 = MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 8f);
	func_1274(1);
	func_1275();
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Local_117, 8, true);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Local_134[0 /*17*/], 8, true);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Local_134[2 /*17*/], 10, true);
	if (ENTITY::DOES_ENTITY_EXIST(Local_134[0 /*17*/]))
	{
		PED::SET_PED_CONFIG_FLAG(Local_134[0 /*17*/], 24, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_134[1 /*17*/]))
	{
		PED::SET_PED_CONFIG_FLAG(Local_134[1 /*17*/], 24, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_134[2 /*17*/]))
	{
		PED::SET_PED_CONFIG_FLAG(Local_134[2 /*17*/], 24, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_117))
	{
		PED::SET_PED_CONFIG_FLAG(Local_117, 24, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_83))
	{
		PED::SET_PED_CONFIG_FLAG(Local_83, 24, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_100))
	{
		PED::SET_PED_CONFIG_FLAG(Local_100, 24, false);
	}
	__LIB_4__::func_952(uParam0, 0);
	__LIB_11__::func_59(uParam0, 1);
	return uParam0->f_607 == uParam0->f_607;
}

int func_743(var uParam0)
{
	func_1276(uParam0);
	func_1277(uParam0);
	func_1278(uParam0);
	func_1279(uParam0);
	func_1280(uParam0, 1101004800 /* Float: 20f */);
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			if ((func_1281(&Local_742) <= 0 || iLocal_2521 >= 6) && (func_1281(&Local_429) <= 0 || iLocal_2522 >= 6))
			{
				__LIB_4__::func_952(uParam0, 1);
			}
			break;
		case 1:
			__LIB_4__::func_89(&uLocal_59, 0);
			if (!func_1282(&Local_429, func_369(10, 3), 22.5f) || __LIB_9__::func_178(&uLocal_59) > 20f)
			{
				__LIB_1__::func_561(&uLocal_59);
				func_1274(0);
				__LIB_4__::func_952(uParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_744(var uParam0)
{
	func_1283(&Local_429, 1);
	func_1283(&Local_742, 1);
	__LIB_1__::func_561(&uLocal_2663);
	__LIB_1__::func_561(&uLocal_2666);
	__LIB_1__::func_561(&uLocal_2657);
	__LIB_1__::func_561(&uLocal_65);
	__LIB_1__::func_561(&uLocal_2660);
	func_1228();
	if (ENTITY::DOES_ENTITY_EXIST(Local_134[0 /*17*/]))
	{
		PED::SET_PED_CONFIG_FLAG(Local_134[0 /*17*/], 24, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_134[1 /*17*/]))
	{
		PED::SET_PED_CONFIG_FLAG(Local_134[1 /*17*/], 24, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_134[2 /*17*/]))
	{
		PED::SET_PED_CONFIG_FLAG(Local_134[2 /*17*/], 24, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_117))
	{
		PED::SET_PED_CONFIG_FLAG(Local_117, 24, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_83))
	{
		PED::SET_PED_CONFIG_FLAG(Local_83, 24, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_100))
	{
		PED::SET_PED_CONFIG_FLAG(Local_100, 24, true);
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_745(var uParam0)
{
	if (!func_1284())
	{
		return false;
	}
	if (__LIB_11__::func_20(16))
	{
		func_1195(Global_35, func_204(3, 0), 2, 1073741824 /* Float: 2f */);
		func_1195(Local_83, func_204(3, 2), 2, 1073741824 /* Float: 2f */);
		func_1195(Local_100, func_204(3, 1), 2, 1073741824 /* Float: 2f */);
		func_1195(Local_117, func_204(3, 3), 2, 1073741824 /* Float: 2f */);
		func_1195(Local_134[0 /*17*/], func_204(3, 4), 2, 1073741824 /* Float: 2f */);
		func_1195(Local_134[1 /*17*/], func_204(3, 5), 2, 1073741824 /* Float: 2f */);
		func_1195(Local_134[2 /*17*/], func_204(3, 6), 2, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_1195(Global_35, func_204(2, 0), 2, 1073741824 /* Float: 2f */);
		func_1195(Local_83, func_204(2, 2), 2, 1073741824 /* Float: 2f */);
		func_1195(Local_100, func_204(11, 15), 2, 1073741824 /* Float: 2f */);
		func_1195(Local_117, func_204(11, 17), 2, 1073741824 /* Float: 2f */);
		func_1195(Local_134[0 /*17*/], func_204(11, 16), 2, 1073741824 /* Float: 2f */);
		func_1195(Local_134[1 /*17*/], func_204(11, 10), 2, 1073741824 /* Float: 2f */);
		func_1195(Local_134[2 /*17*/], func_204(11, 14), 2, 1073741824 /* Float: 2f */);
	}
	__LIB_0__::func_489(0, 0);
	__LIB_1__::func_561(&uLocal_426);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_746(var uParam0)
{
	if (__LIB_4__::func_948(uParam0, 4))
	{
		if (!func_1266(&Local_429))
		{
			return false;
		}
		if (!func_1266(&Local_742))
		{
			return false;
		}
		__LIB_4__::func_89(&uLocal_59, 0);
		if (__LIB_9__::func_178(&uLocal_59) < 5f)
		{
			return false;
		}
		__LIB_1__::func_561(&uLocal_59);
	}
	func_1285();
	PED::_SET_PED_CROUCH_MOVEMENT(Local_83, false, 0, false);
	PED::_SET_PED_CROUCH_MOVEMENT(Local_100, false, 0, false);
	PED::_SET_PED_CROUCH_MOVEMENT(Local_117, false, 0, false);
	PED::_SET_PED_CROUCH_MOVEMENT(Local_134[0 /*17*/], false, 0, false);
	PED::_SET_PED_CROUCH_MOVEMENT(Local_134[1 /*17*/], false, 0, false);
	PED::_SET_PED_CROUCH_MOVEMENT(Local_134[2 /*17*/], false, 0, false);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_747(var uParam0)
{
	if (!__LIB_11__::func_20(16))
	{
		func_1286(Local_83, Local_83.f_5, sLocal_44, 0, 0, 1f);
		func_1286(Local_100, Local_100.f_5, sLocal_42, 4, 250, 0f);
		func_1286(Local_117, Local_117.f_5, sLocal_43, 20, 150, 0f);
		func_1286(Local_134[0 /*17*/], Local_134[0 /*17*/].f_5, sLocal_42, 4, 500, 1f);
		func_1286(Local_134[1 /*17*/], Local_134[1 /*17*/].f_5, sLocal_43, 0, 600, -1f);
		func_1286(Local_134[2 /*17*/], Local_134[2 /*17*/].f_5, sLocal_44, 8, 300, -1f);
		__LIB_10__::func_930(uParam0, Local_83, joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
		__LIB_11__::func_59(uParam0, 1);
	}
	else
	{
		Local_2676.f_1 = 4;
		Local_2674.f_1 = 4;
		Local_2678.f_1 = 4;
		Local_2680[0 /*2*/].f_1 = 4;
		Local_2680[1 /*2*/].f_1 = 4;
		Local_2680[2 /*2*/].f_1 = 4;
		TASK::TASK_WANDER_IN_AREA(Local_83, func_369(3, 2), 27.5f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
		TASK::TASK_WANDER_IN_AREA(Local_100, func_369(3, 2), 27.5f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
		TASK::TASK_WANDER_IN_AREA(Local_117, func_369(3, 2), 27.5f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
		TASK::TASK_WANDER_IN_AREA(Local_134[0 /*17*/], func_369(3, 2), 27.5f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
		TASK::TASK_WANDER_IN_AREA(Local_134[1 /*17*/], func_369(3, 2), 27.5f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
		TASK::TASK_WANDER_IN_AREA(Local_134[2 /*17*/], func_369(3, 2), 27.5f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
		PED::FORCE_PED_MOTION_STATE(Local_83, joaat("MOTIONSTATE_WALK"), false, 0, false);
		PED::FORCE_PED_MOTION_STATE(Local_100, joaat("MOTIONSTATE_WALK"), false, 0, false);
		PED::FORCE_PED_MOTION_STATE(Local_117, joaat("MOTIONSTATE_WALK"), false, 0, false);
		PED::FORCE_PED_MOTION_STATE(Local_134[0 /*17*/], joaat("MOTIONSTATE_WALK"), false, 0, false);
		PED::FORCE_PED_MOTION_STATE(Local_134[1 /*17*/], joaat("MOTIONSTATE_WALK"), false, 0, false);
		PED::FORCE_PED_MOTION_STATE(Local_134[2 /*17*/], joaat("MOTIONSTATE_WALK"), false, 0, false);
	}
	__LIB_4__::func_952(uParam0, 0);
	return uParam0->f_607 == uParam0->f_607;
}

int func_748(var uParam0)
{
	int iVar0;
	func_1287(uParam0);
	func_1288();
	func_1289();
	func_1290();
	func_1291(&Local_429);
	func_1292(&Local_100, &Local_2674, 0);
	func_1292(&Local_83, &Local_2676, __LIB_4__::func_971(uParam0) >= 2);
	func_1292(&Local_117, &Local_2678, 0);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		func_1292(&(Local_134[iVar0 /*17*/]), &(Local_2680[iVar0 /*2*/]), 0);
		iVar0++;
	}
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			if (Local_2676.f_1 >= 3 || __LIB_0__::func_266(Global_35, func_369(3, 2), 27.5f, 1, 0))
			{
				__LIB_10__::func_935(uParam0, Local_83, 1);
				func_1200(uParam0, 11, 1);
				iLocal_405 = __LIB_8__::func_777(-308585968, func_369(3, 2), 27.5f, 1);
				__LIB_11__::func_342(16);
				__LIB_4__::func_952(uParam0, 1);
			}
			break;
		case 1:
			if (!__LIB_0__::func_899(&uLocal_59))
			{
				if (__LIB_0__::func_266(Global_35, func_369(3, 2), 27.5f, 1, 0))
				{
					__LIB_4__::func_89(&uLocal_59, 0);
				}
			}
			if (func_1294(&Local_429, 0) >= 3 || __LIB_9__::func_178(&uLocal_59) > fLocal_2670)
			{
				AUDIO::_0x36559148B78853B3(1, 1, 1);
				__LIB_1__::func_561(&uLocal_2671);
				__LIB_1__::func_561(&uLocal_59);
				func_1295();
				__LIB_4__::func_952(uParam0, 29);
			}
			break;
		case 29:
			__LIB_4__::func_89(&uLocal_59, 0);
			if (__LIB_9__::func_178(&uLocal_59) > 1f)
			{
				CAM::_0xE296208C273BD7F0(1000, -1, 0, 17, 1, 0);
			}
			if (__LIB_9__::func_178(&uLocal_59) > 2.5f && !AUDIO::_0xA2CAC9DEF0195E6F(1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_749(var uParam0)
{
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	__LIB_0__::func_325(&iLocal_405);
	__LIB_1__::func_561(&uLocal_2671);
	func_1228();
	__LIB_11__::func_738(Global_35);
	__LIB_11__::func_738(Local_83);
	__LIB_11__::func_738(Local_100);
	__LIB_11__::func_738(Local_117);
	__LIB_11__::func_738(Local_134[0 /*17*/]);
	__LIB_11__::func_738(Local_134[1 /*17*/]);
	__LIB_11__::func_738(Local_134[2 /*17*/]);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_750(var uParam0)
{
	if (!__LIB_4__::func_948(uParam0, 4))
	{
		if (!func_1284())
		{
			return false;
		}
	}
	func_1195(Global_35, func_204(3, 0), 2, 1073741824 /* Float: 2f */);
	func_1195(Local_100, func_204(3, 1), 2, 1073741824 /* Float: 2f */);
	func_1195(Local_83, func_204(3, 2), 2, 1073741824 /* Float: 2f */);
	func_1195(Local_117, func_204(3, 3), 2, 1073741824 /* Float: 2f */);
	func_1195(Local_134[0 /*17*/], func_204(3, 4), 2, 1073741824 /* Float: 2f */);
	func_1195(Local_134[1 /*17*/], func_204(3, 5), 2, 1073741824 /* Float: 2f */);
	func_1195(Local_134[2 /*17*/], func_204(3, 6), 2, 1073741824 /* Float: 2f */);
	func_1297();
	return uParam0->f_607 == uParam0->f_607;
}

bool func_751(var uParam0)
{
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	func_1297();
	if (__LIB_4__::func_948(uParam0, 4))
	{
		if (!func_1298())
		{
			return false;
		}
		if (!func_1299())
		{
			return false;
		}
		func_1300(Global_35, func_204(4, 1), 1, 0);
		func_1300(Local_83, func_204(4, 3), 1, 1);
		func_1300(Local_100, func_204(4, 2), 0, 0);
		func_1300(Local_117, func_204(4, 5), 0, 0);
		func_1300(Local_134[2 /*17*/], func_204(4, 7), 0, 0);
		func_1267(&Local_899, 0, 1, 0, 1089470464 /* Float: 7.5f */);
		func_1301(&Local_899, joaat("MOTIONSTATE_RUN"));
	}
	else
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		AUDIO::_0xD9130842D7226045(sLocal_2690, 0);
		if (!func_1302())
		{
			return false;
		}
		if (!func_1303(uParam0))
		{
			return false;
		}
		func_1304(uParam0);
		__LIB_6__::func_901(uParam0, 1);
		__LIB_6__::func_901(uParam0, 524288);
		PED::SET_PED_CONFIG_FLAG(Global_35, 454, true);
		PED::SET_PED_CONFIG_FLAG(Local_83, 454, true);
		PED::SET_PED_CONFIG_FLAG(Local_100, 454, true);
		PED::SET_PED_CONFIG_FLAG(Local_134[2 /*17*/], 454, true);
	}
	func_1305(uParam0);
	func_1306(uParam0);
	func_1307(&Local_899, joaat("REL_PLAYER_ENEMY"), 0);
	func_1308(&Local_899, 286, 1);
	func_927(iLocal_408, 4);
	__LIB_11__::func_734(1);
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_83, func_369(4, 3), 2.5f, false, 0, 0);
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_100, func_369(4, 2), 2.5f, false, 0, 0);
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_117, func_369(4, 5), 2.5f, false, 0, 0);
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_134[2 /*17*/], func_369(4, 7), 2.5f, false, 0, 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_752(var uParam0)
{
	if (!func_1298())
	{
		return false;
	}
	if (!func_1299())
	{
		return false;
	}
	if (__LIB_4__::func_948(uParam0, 4))
	{
		TASK::TASK_COMBAT_HATED_TARGETS(Local_83, -1f);
		TASK::TASK_COMBAT_HATED_TARGETS(Local_100, -1f);
		TASK::TASK_COMBAT_HATED_TARGETS(Local_117, -1f);
		TASK::TASK_COMBAT_HATED_TARGETS(Local_134[2 /*17*/], -1f);
	}
	__LIB_4__::func_570(&(uParam0->f_7375));
	__LIB_4__::func_655(&(uParam0->f_7375));
	__LIB_4__::func_944(uParam0, 33554432);
	__LIB_5__::func_33(uParam0, 64);
	func_1311();
	__LIB_1__::func_951(&iLocal_362);
	__LIB_1__::func_951(&iLocal_363);
	__LIB_1__::func_951(&iLocal_364);
	func_1312();
	__LIB_1__::func_561(&uLocal_62);
	func_1313(&Local_899);
	func_1272(&Local_899, 1, 1, 0);
	Local_3109 = Local_899[1 /*26*/];
	Local_3109.f_3 = { func_204(4, 9) };
	func_1273(Local_83, joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH"), joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH_DUALWIELD"));
	func_1273(Local_100, joaat("WEAPON_REPEATER_CARBINE"), 0);
	func_1273(Local_117, joaat("WEAPON_REPEATER_CARBINE"), 0);
	func_1273(Local_134[2 /*17*/], joaat("WEAPON_REPEATER_CARBINE"), 0);
	PED::SET_PED_CONFIG_FLAG(Local_3109, 273, true);
	SCRIPTS::_0x7D654266025E921B(joaat("CHAL_CTX_CUSTOM_1"));
	AICOVERPOINT::_0x1A7A802B2301EDC0(Global_35);
	AICOVERPOINT::_0x1A7A802B2301EDC0(Local_83);
	AICOVERPOINT::_0x1A7A802B2301EDC0(Local_100);
	AICOVERPOINT::_0x1A7A802B2301EDC0(Local_117);
	AICOVERPOINT::_0x1A7A802B2301EDC0(Local_134[2 /*17*/]);
	PED::SET_PED_CONFIG_FLAG(Global_35, 454, false);
	PED::SET_PED_CONFIG_FLAG(Local_83, 454, false);
	PED::SET_PED_CONFIG_FLAG(Local_100, 454, false);
	PED::SET_PED_CONFIG_FLAG(Local_134[2 /*17*/], 454, false);
	__LIB_11__::func_734(0);
	__LIB_4__::func_89(&uLocal_59, 0);
	__LIB_4__::func_952(uParam0, 0);
	__LIB_11__::func_59(uParam0, 1);
	return uParam0->f_607 == uParam0->f_607;
}

int func_753(var uParam0)
{
	func_1314(uParam0);
	func_1315();
	func_1316();
	func_1317();
	func_1318();
	func_1319();
	func_1320();
	func_1321();
	func_1322();
	func_1280(uParam0, 1101004800 /* Float: 20f */);
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			if (func_1281(&Local_899) <= 2 && Local_3109.f_7 >= 5)
			{
				__LIB_4__::func_89(&uLocal_65, 0);
				if (__LIB_9__::func_178(&uLocal_65) > 5f || func_1281(&Local_899) <= 0)
				{
					__LIB_1__::func_561(&uLocal_65);
					func_1323(&Local_899, func_369(4, 1));
					iLocal_3139 = 3;
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_83, func_369(4, 9), 1f, true, 0, 0);
					iLocal_3138 = 4;
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_100, func_369(4, 9), 1f, true, 0, 0);
					iLocal_3141 = 9;
					__LIB_4__::func_952(uParam0, 1);
				}
			}
			else
			{
				func_1324(uParam0, &Local_899, &vLocal_324, &uLocal_3128, 25f);
			}
			if (__LIB_9__::func_178(&uLocal_59) > 60f)
			{
				__LIB_1__::func_561(&uLocal_59);
				func_1325(&Local_899);
			}
			if (func_1326(23))
			{
				if (PED::IS_PED_SHOOTING(Global_35))
				{
					func_1224();
				}
			}
			break;
		case 1:
			if (!func_1282(&Local_899, func_369(4, 12), 22.5f) || func_1281(&Local_899) <= 0)
			{
				iLocal_3141 = 10;
				__LIB_11__::func_59(uParam0, 6);
				__LIB_4__::func_952(uParam0, 2);
			}
			break;
		case 2:
			__LIB_4__::func_89(&uLocal_65, 0);
			if (__LIB_9__::func_178(&uLocal_65) > 1f && !AUDIO::_0x1ECC76792F661CF5("NTS2_05_SAFE"))
			{
				return 1;
			}
			break;
	}
	return func_1327();
}

bool func_754(var uParam0)
{
	__LIB_10__::func_925(uParam0, sLocal_57);
	__LIB_10__::func_925(uParam0, sLocal_58);
	func_445();
	if (__LIB_0__::func_272(Local_134[2 /*17*/], 0))
	{
		__LIB_2__::func_426(&(Local_134[2 /*17*/]));
	}
	SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_CUSTOM_1"));
	func_1228();
	__LIB_1__::func_561(&uLocal_423);
	__LIB_1__::func_561(&uLocal_3128);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_755(var uParam0)
{
	if (!func_1298())
	{
		return false;
	}
	if (!__LIB_4__::func_948(uParam0, 4))
	{
		__LIB_10__::func_925(uParam0, sLocal_57);
		__LIB_10__::func_925(uParam0, sLocal_58);
		__LIB_5__::func_298(uParam0, func_1329());
	}
	func_1195(Global_35, func_204(5, 0), 2, 1073741824 /* Float: 2f */);
	func_1195(Local_100, func_204(5, 2), 2, 1073741824 /* Float: 2f */);
	func_1195(Local_83, func_204(5, 1), 2, 1073741824 /* Float: 2f */);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_756(var uParam0)
{
	__LIB_10__::func_925(uParam0, func_1329());
	CAM::_0xE296208C273BD7F0(1000, -1, 0, 17, 1, 0);
	if (!__LIB_4__::func_948(uParam0, 4))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_7375.f_804))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_7375.f_804, func_1329()))
			{
				__LIB_8__::func_787(uParam0, func_1329());
			}
		}
	}
	if (!func_1332())
	{
		return false;
	}
	if (!func_1333(uParam0))
	{
		return false;
	}
	if (CAM::_0x1204EB53A5FBC63D())
	{
		if (!CAM::_0x6072B7420A83A03F())
		{
			return false;
		}
	}
	if (__LIB_4__::func_948(uParam0, 4))
	{
		func_1195(Global_35, func_204(5, 3), 2, 1073741824 /* Float: 2f */);
		func_1195(Local_83, func_204(5, 4), 2, 1073741824 /* Float: 2f */);
	}
	else
	{
		__LIB_6__::func_901(uParam0, 1);
		__LIB_6__::func_901(uParam0, 524288);
	}
	func_1195(iLocal_351, func_204(5, 5), 2, 1073741824 /* Float: 2f */);
	func_1195(Local_83.f_1, func_204(5, 6), 2, 1073741824 /* Float: 2f */);
	__LIB_3__::func_414(&uLocal_343, 63.45113f, 1134.401f, 188.8917f, 1.5f, 1, 36, 0);
	__LIB_3__::func_414(&uLocal_344, 45.81117f, 1126.2f, 182.2957f, 1.5f, 1, 36, 0);
	TASK::TASK_STAND_STILL(iLocal_351, -1);
	TASK::TASK_STAND_STILL(Local_83.f_1, -1);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, true, true);
	__LIB_8__::func_820(7);
	func_1334(&Local_1212, 0);
	func_1308(&Local_1212, 72, 1);
	func_1335(uParam0);
	func_1336();
	func_430(&Local_899, 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_757(var uParam0)
{
	__LIB_4__::func_969(uParam0, 33554432);
	__LIB_5__::func_573(uParam0, Local_100);
	__LIB_11__::func_757(uParam0, 26, Local_100, 0, 1, 1, 0);
	__LIB_5__::func_573(uParam0, Local_117);
	__LIB_2__::func_426(&Local_117);
	__LIB_0__::func_325(&(Local_134[2 /*17*/].f_3));
	iLocal_3148 = Local_83.f_1;
	__LIB_1__::func_718(7);
	func_1338(&Local_1212, cLocal_46, 0, -1, 1065353216 /* Float: 1f */);
	__LIB_3__::func_638(iLocal_351, func_204(5, 7), 1.75f, 20000, 1048576000 /* Float: 0.25f */, 0);
	__LIB_3__::func_638(Local_83.f_1, func_204(5, 8), 2f, 20000, 1048576000 /* Float: 0.25f */, 0);
	func_1339(&Local_1212);
	__LIB_4__::func_952(uParam0, 0);
	__LIB_11__::func_59(uParam0, 1);
	return uParam0->f_607 == uParam0->f_607;
}

int func_758(var uParam0)
{
	func_1340(uParam0);
	func_1341();
	func_1342();
	PED::SET_PED_RESET_FLAG(Global_35, 210, true);
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			if (__LIB_0__::func_71(Global_35) && __LIB_0__::func_71(Local_83))
			{
				TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_40, 0, 1f, 0.5f, 1);
				func_1224();
				__LIB_1__::func_721(7);
				__LIB_10__::func_930(uParam0, Local_83, joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
				__LIB_11__::func_59(uParam0, 2);
				__LIB_4__::func_952(uParam0, 1);
			}
			break;
		case 1:
			__LIB_9__::func_204(Global_35, func_1344(cLocal_46), &uLocal_68, 25f, 20f, 16f, 12.5f, 1f, 0, 0, 1, 1, 1);
			if (!__LIB_0__::func_71(Global_35) && func_1220(Global_35, cLocal_46, 268))
			{
				__LIB_0__::func_45("NTS2_HELP_SLAP", 10000, 0, 0, 0, 1);
				func_426();
				__LIB_4__::func_952(uParam0, 2);
			}
			break;
		case 2:
			if (func_1346())
			{
				func_1347(iLocal_351);
			}
			if (iLocal_3144 > 4)
			{
				if (iLocal_3144 >= 8 || func_1220(Global_35, cLocal_39, 1))
				{
					__LIB_4__::func_952(uParam0, 29);
				}
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_759(var uParam0)
{
	AUDIO::_0x36559148B78853B3(1, 1, 1);
	__LIB_3__::func_319(iLocal_371);
	func_1228();
	func_426();
	func_430(&Local_429, 1);
	func_430(&Local_742, 1);
	func_430(&Local_899, 1);
	func_430(&Local_1212, 1);
	__LIB_0__::func_325(&iLocal_405);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_760(var uParam0)
{
	if (__LIB_11__::func_20(32))
	{
		func_1195(Global_35, func_204(6, 4), 2, 1073741824 /* Float: 2f */);
		func_1195(Local_83, func_204(6, 5), 2, 1073741824 /* Float: 2f */);
		PED::FORCE_PED_MOTION_STATE(Local_83, joaat("MOTIONSTATE_RUN"), false, 0, false);
		__LIB_0__::func_569(-1415276238, 2000, 0, 1, 1, 0, 0, 0);
		iLocal_3159 = 2;
	}
	else
	{
		func_1195(Global_35, func_204(6, 0), 2, 1073741824 /* Float: 2f */);
		func_1195(Local_83, func_204(6, 1), 2, 1073741824 /* Float: 2f */);
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_761(var uParam0)
{
	__LIB_5__::func_521(0.75f);
	if (!__LIB_1__::func_185(56))
	{
		if (!func_1352())
		{
			return false;
		}
	}
	func_1353();
	func_1354();
	return uParam0->f_607 == uParam0->f_607;
}

bool func_762(var uParam0)
{
	if (!__LIB_1__::func_185(56))
	{
		if (__LIB_11__::func_20(32))
		{
			__LIB_8__::func_917(iLocal_354, 15f);
		}
	}
	__LIB_3__::func_414(&uLocal_346, -161.529f, 1339.843f, 170.8816f, 2.5f, 1, 36, 0);
	__LIB_3__::func_414(&uLocal_347, -156.9476f, 1330.617f, 168.9126f, 2.5f, 1, 36, 0);
	__LIB_3__::func_414(&uLocal_348, -96.37917f, 1339.145f, 171.6037f, 3.5f, 1, 36, 0);
	__LIB_3__::func_414(&uLocal_349, -175.2841f, 1328.907f, 171.6002f, 2f, 1, 36, 0);
	__LIB_8__::func_810(7);
	__LIB_10__::func_930(uParam0, Local_83, joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
	func_1357();
	__LIB_4__::func_952(uParam0, 0);
	__LIB_11__::func_59(uParam0, 1);
	return uParam0->f_607 == uParam0->f_607;
}

int func_763(var uParam0)
{
	func_1358(uParam0);
	func_1359(uParam0);
	func_1360(uParam0);
	func_1361(uParam0);
	func_1362();
	func_1363();
	if (func_1346())
	{
		func_1347(iLocal_351);
	}
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			if (iLocal_3159 == 3)
			{
				__LIB_4__::func_89(&uLocal_3209, 0);
				__LIB_4__::func_952(uParam0, 1);
			}
			break;
		case 1:
			if (iLocal_3149 >= 3)
			{
				iLocal_3149 = 0;
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_83, func_369(6, 20), 2.5f, true, 0, 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_83, func_369(6, 21), 2.5f, true, 1, 0);
				iLocal_405 = __LIB_4__::func_983(-308585968, vLocal_3153, 1);
				__LIB_10__::func_935(uParam0, Local_83, 1);
				__LIB_11__::func_59(uParam0, 9);
				__LIB_4__::func_952(uParam0, 2);
			}
			break;
		case 2:
			if (iLocal_3149 >= 5)
			{
				if (!__LIB_0__::func_491(Local_83, 713668775))
				{
					if (__LIB_0__::func_48(Global_35, Local_83, 25f, 1))
					{
						iLocal_3157 = 7;
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_83, -246.9725f, 1345.877f, 138.542f, 2f, 20000, 0.25f, 0, 40000f);
					}
				}
			}
			break;
	}
	return func_1365();
}

bool func_764(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		TASK::_DELETE_SCENARIO_POINT(uLocal_3221[iVar0]);
		iVar0++;
	}
	__LIB_5__::func_521(0.6f);
	func_430(&Local_1369, 1);
	func_430(&Local_2154, 1);
	func_430(&Local_1500, 1);
	func_430(&Local_2207, 1);
	func_1228();
	__LIB_1__::func_561(&uLocal_3209);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_765(var uParam0)
{
	func_1195(Global_35, func_204(7, 0), 2, 1073741824 /* Float: 2f */);
	func_1195(Local_83, func_204(7, 1), 2, 1073741824 /* Float: 2f */);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_766(var uParam0)
{
	CAM::_0xE296208C273BD7F0(500, -1, 0, 17, 1, 0);
	if (func_1366(uParam0, 136f))
	{
		return false;
	}
	if (!func_1367())
	{
		return false;
	}
	if (!func_1368())
	{
		return false;
	}
	if (!func_1369())
	{
		return false;
	}
	if (!func_1370())
	{
		return false;
	}
	if (__LIB_4__::func_948(uParam0, 4))
	{
		if (!func_1371())
		{
			return false;
		}
		func_1372();
	}
	else
	{
		__LIB_6__::func_901(uParam0, 256);
		__LIB_6__::func_901(uParam0, 524288);
	}
	__LIB_0__::func_325(&iLocal_405);
	func_1373(uParam0);
	func_1374();
	func_1375();
	func_1376();
	func_1377();
	__LIB_5__::func_106(uParam0, Local_1762[0 /*26*/], "OFW_Officer1", 0);
	__LIB_3__::func_414(&uLocal_350, -246.524f, 1354.61f, 138.9513f, 2.5f, 1, 36, 0);
	PED::SET_PED_CONFIG_FLAG(Global_35, 250, true);
	PED::SET_PED_CONFIG_FLAG(Local_83, 250, true);
	WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
	WEAPON::_HIDE_PED_WEAPONS(Local_83, 2, true);
	CAM::_0x1B3C2D961F5FC0E1("script@Story@NTS2@CliffJump");
	func_430(&Local_1631, 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_767(var uParam0)
{
	if (!func_1371())
	{
		return false;
	}
	if (!func_1266(&Local_1762))
	{
		return false;
	}
	if (!func_1266(&Local_2023))
	{
		return false;
	}
	if (!CAM::_0xAA235E2F2C09E952("script@Story@NTS2@CliffJump"))
	{
		return false;
	}
	func_1378();
	func_1379();
	ENTITY::SET_ENTITY_HEADING(Global_35, func_1380());
	WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
	WEAPON::_HIDE_PED_WEAPONS(Local_83, 2, true);
	PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 14, 1, 1);
	PED::SET_PED_CONFIG_FLAG(Global_35, 364, true);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	AUDIO::STOP_PED_SPEAKING(Global_35, true);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
	iLocal_3242 = __LIB_1__::func_877("NTS2_CTXT_SUR", joaat("INPUT_CONTEXT_Y"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
	__LIB_4__::func_952(uParam0, 0);
	__LIB_11__::func_59(uParam0, 1);
	return uParam0->f_607 == uParam0->f_607;
}

int func_768(var uParam0)
{
	func_1382(uParam0);
	func_1383();
	func_1384();
	func_1378();
	return func_1385(uParam0);
}

bool func_769(var uParam0)
{
	MISC::SET_TIME_SCALE(1f);
	AUDIO::STOP_PED_SPEAKING(Global_35, false);
	if (__LIB_0__::func_139(iLocal_3241))
	{
		__LIB_1__::func_281(&iLocal_3241, 1, 1);
	}
	__LIB_2__::func_426(&Local_2417);
	func_430(&Local_1631, 1);
	func_449(0, 0, 0);
	func_1386(&Local_1762, joaat("BLIP_MODIFIER_ENEMY_DISAPPEARING"));
	func_1386(&Local_1762, -1034486097);
	func_1386(&Local_2023, joaat("BLIP_MODIFIER_ENEMY_DISAPPEARING"));
	func_1386(&Local_2023, -1034486097);
	func_439();
	func_1228();
	return uParam0->f_607 == uParam0->f_607;
}

bool func_770(var uParam0)
{
	if (!func_1367())
	{
		return false;
	}
	if (!func_1369())
	{
		return false;
	}
	func_1387(&Local_1762, cLocal_49, func_204(7, 1));
	func_1387(&Local_2023, cLocal_48, func_204(7, 2));
	func_1195(Global_35, func_204(8, 0), 2, 1073741824 /* Float: 2f */);
	func_1195(Local_83, func_204(8, 1), 2, 1073741824 /* Float: 2f */);
	func_1388(Global_35);
	func_1388(Local_83);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_771(var uParam0)
{
	__LIB_3__::func_595(func_1389(sLocal_37, 10));
	func_1390(&Local_1762, 0);
	func_1390(&Local_2023, 0);
	func_1391(&Local_1762, joaat("FIRING_PATTERN_SLOW_SHOT"));
	func_1391(&Local_2023, joaat("FIRING_PATTERN_SLOW_SHOT"));
	ENTITY::_0x850C940EE3E7B8B5(Global_35, true);
	ENTITY::_0x850C940EE3E7B8B5(Local_83, true);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	ENTITY::SET_ENTITY_INVINCIBLE(Local_83, true);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_772(var uParam0)
{
	if (__LIB_4__::func_948(uParam0, 4))
	{
		__LIB_3__::func_595(func_1389(sLocal_37, 10));
	}
	func_1390(&Local_1762, 0);
	func_1390(&Local_2023, 0);
	func_1392(&Local_1762, cLocal_49);
	func_1392(&Local_2023, cLocal_48);
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_37, 1, 0.25f, 1f, 0);
	PED::SET_PED_CONFIG_FLAG(Global_35, 352, true);
	PED::SET_PED_CONFIG_FLAG(Global_35, 533, true);
	PED::SET_PED_CONFIG_FLAG(Global_35, 404, true);
	PED::SET_PED_CONFIG_FLAG(Local_83, 426, true);
	PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER::GET_PLAYER_INDEX(), 1f);
	__LIB_11__::func_739(Local_83, joaat("BLIP_STYLE_COMPANION"), "", 0, -1186550032, 1);
	__LIB_6__::func_914(uParam0);
	__LIB_4__::func_944(uParam0, 33554432);
	__LIB_5__::func_33(uParam0, 64);
	__LIB_4__::func_89(&uLocal_3244, 0);
	__LIB_4__::func_952(uParam0, 0);
	__LIB_11__::func_59(uParam0, 1);
	return uParam0->f_607 == uParam0->f_607;
}

int func_773(var uParam0)
{
	func_1394(uParam0);
	func_1395(uParam0);
	func_1396(uParam0);
	func_1397();
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			if ((!__LIB_11__::func_21(iLocal_372) && PED::IS_PED_SWIMMING_UNDER_WATER(Global_35)) || (!__LIB_11__::func_21(iLocal_372) && !ENTITY::IS_ENTITY_IN_AIR(Global_35, 1)))
			{
				if (!__LIB_4__::func_948(uParam0, 4))
				{
					ENTITY::SET_ENTITY_COORDS(Global_35, -268.6564f, 1352.089f, 98.5724f, true, false, true, false);
				}
				ENTITY::SET_ENTITY_HEADING(Global_35, __LIB_3__::func_978(Global_35, Local_83, 1));
				__LIB_3__::func_595(func_1389(sLocal_37, 10));
				WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
				__LIB_1__::func_971(0);
				PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), joaat("WEAPON_UNARMED"), 0);
				PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), joaat("WEAPON_UNARMED"), 1);
				__LIB_11__::func_335(iLocal_372);
				__LIB_11__::func_335(iLocal_373);
				func_1400(uParam0);
				__LIB_11__::func_740();
				__LIB_11__::func_577(joaat("KIT_BANDANA"), 0);
				__LIB_5__::func_414(0, 1048576, 0);
				__LIB_5__::func_414(0, 1073741824 /* Float: 2f */, 1);
				PED::_SET_PED_COMPONENT_DISABLED(Local_83, joaat("HATS"), 1);
				__LIB_4__::func_952(uParam0, 1);
			}
			break;
		case 1:
			if (func_1220(Global_35, sLocal_37, 27))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
				func_1402(&Local_1762);
				func_1402(&Local_2023);
				__LIB_4__::func_952(uParam0, 2);
			}
			break;
		case 2:
			if (func_1220(Global_35, sLocal_37, 60))
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(Local_83, 0f, 0f, -0.25f, true, -1, 750, 1000, 0);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(1f);
				TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_83, -1, 0, 51, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Local_83, -1, -1f, -1f, -1f);
				__LIB_4__::func_952(uParam0, 3);
			}
			break;
		case 3:
			if (func_1220(Global_35, sLocal_37, 62))
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER::GET_PLAYER_INDEX(), 1.49f);
				PED::_0xEA8763E505AFD49A(Global_35, 0f, 0f);
				PED::_0xD61FCF9FCFD515B7(Global_35, 0f, 0f);
				TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_37, 0, 1f, 0.5f, 1);
				PED::SET_PED_CONFIG_FLAG(Global_35, 411, true);
				PED::SET_PED_CONFIG_FLAG(Global_35, 352, false);
				PED::SET_PED_CONFIG_FLAG(Global_35, 533, false);
				PED::SET_PED_CONFIG_FLAG(Global_35, 404, false);
				__LIB_4__::func_952(uParam0, 4);
			}
			break;
		case 4:
			if ((func_1403(Global_35, sLocal_37) || __LIB_0__::func_48(Global_35, Local_83, (6.5f + 2.5f), 1)) || func_1404(20f))
			{
				CAM::_0xE296208C273BD7F0(1000, -1, 0, 17, 1, 0);
			}
			if (func_1404(1099694080 /* Float: 17.5f */))
			{
				PED::_0xEA8763E505AFD49A(Global_35, 1000000f, 1000000f);
				PED::_0xD61FCF9FCFD515B7(Global_35, 1000000f, 1000000f);
				__LIB_11__::func_59(uParam0, 51);
				__LIB_4__::func_952(uParam0, 5);
			}
			else if (iLocal_3247 >= 5)
			{
				if (func_1407(uParam0, func_1406(func_1405())))
				{
					if (__LIB_0__::func_48(Global_35, Local_83, 6.5f, 1))
					{
						__LIB_11__::func_59(uParam0, 51);
						__LIB_4__::func_952(uParam0, 29);
					}
				}
			}
			break;
		case 5:
			CAM::_0xE296208C273BD7F0(1000, -1, 0, 17, 1, 0);
			if (!PED::IS_PED_SWIMMING(Global_35))
			{
				__LIB_1__::func_864(Global_35, 1, 0);
			}
			break;
		case 29:
			CAM::_0xE296208C273BD7F0(1000, -1, 0, 17, 1, 0);
			return 1;
	}
	return 0;
}

bool func_774(var uParam0)
{
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 411, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 352, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 533, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 404, false);
	PED::SET_PED_CONFIG_FLAG(Local_83, 426, false);
	PED::_0xE4EF4382E22C780C(Local_83);
	PED::_0x8D9DB115FBA8E23D(Local_83);
	PED::_0xE4EF4382E22C780C(Global_35);
	PED::_0x8D9DB115FBA8E23D(Global_35);
	__LIB_1__::func_345();
	func_430(&Local_1762, 1);
	func_430(&Local_2023, 1);
	__LIB_11__::func_741(Local_83, joaat("BLIP_STYLE_COMPANION"), 1);
	__LIB_10__::func_935(uParam0, Local_83, 1);
	func_1228();
	__LIB_1__::func_561(&uLocal_3244);
	__LIB_0__::func_325(&iLocal_405);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_775(var uParam0)
{
	if (__LIB_1__::func_185(49))
	{
		__LIB_5__::func_298(uParam0, "1-DutchHelpsArthur_NTV2_Done");
	}
	else
	{
		__LIB_5__::func_298(uParam0, "1-DutchHelpsArthur");
	}
	func_1195(Global_35, func_204(9, 0), 2, 1073741824 /* Float: 2f */);
	func_1195(Local_83, func_204(9, 2), 2, 1073741824 /* Float: 2f */);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_776(var uParam0)
{
	if (!func_1411(uParam0, &iLocal_351, func_204(9, 3), 0))
	{
		return false;
	}
	__LIB_9__::func_91(uParam0, iLocal_376);
	func_1200(uParam0, 0, 0);
	func_1413(uParam0);
	func_1414();
	func_1415();
	__LIB_11__::func_577(joaat("KIT_BANDANA"), 0);
	__LIB_1__::func_30(0);
	func_1416();
	__LIB_11__::func_734(1);
	__LIB_9__::func_804(1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_777(var uParam0)
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
	func_1418(uParam0, 0);
	__LIB_4__::func_952(uParam0, 0);
	__LIB_11__::func_59(uParam0, 51);
	return uParam0->f_607 == uParam0->f_607;
}

int func_778(var uParam0)
{
	__LIB_11__::func_748(uParam0);
	return func_1418(uParam0, 0);
}

bool func_779(var uParam0)
{
	__LIB_11__::func_734(0);
	__LIB_9__::func_802(1);
	func_1228();
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	return uParam0->f_607 == uParam0->f_607;
}

Vector3 func_780(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 80.8606f, 1065.496f, 196.4858f;
				case 1:
					return 71.4867f, 1071.386f, 194.9133f;
				case 2:
					return 61.5224f, 1060.955f, 194.8839f;
				case 3:
					return 35.8381f, 1078.842f, 178.7322f;
				case 4:
					return 81.7958f, 1095.236f, 179.9801f;
				case 5:
					return 73.9251f, 1040.462f, 198.6498f;
				case 6:
					return 72.8656f, 1071.569f, 195.2406f;
				case 7:
					return 61.5333f, 1059.406f, 195.0375f;
				case 8:
					return 37.2581f, 1088.475f, 175.8201f;
				case 9:
					return 72.3775f, 1090.851f, 178.6111f;
				case 10:
					return 77.2733f, 1042.86f, 198.5587f;
				case 11:
					return 70.2079f, 1069.709f, 195.3448f;
				case 12:
					return 72.7383f, 1070.523f, 195.3377f;
				case 13:
					return 68.2236f, 1069.492f, 194.9621f;
				case 14:
					return 74.7118f, 1067.945f, 195.7081f;
				case 15:
					return 66.3171f, 1068.989f, 194.92f;
				case 16:
					return 71.6705f, 1066.626f, 195.6308f;
				case 17:
					return 65.3036f, 1067.852f, 194.8585f;
				case 18:
					return 66.6047f, 1066.906f, 195.351f;
				case 19:
					return 36.6082f, 1050.069f, 194.0012f;
				case 20:
					return 62.9414f, 1066.464f, 195.3769f;
				case 21:
					return 75.9231f, 1067.4f, 195.9378f;
				case 22:
					return 71.7982f, 1072.097f, 194.2432f;
				case 23:
					return 37.8445f, 1085.636f, 176.7381f;
				case 24:
					return 74.0495f, 1065.985f, 194.9586f;
				case 25:
					return 73.0199f, 1065.792f, 194.9883f;
				case 26:
					return 73.7488f, 1063.638f, 196.0598f;
				case 27:
					return 34.221f, 1087.572f, 175.8862f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 71.4867f, 1071.386f, 194.9133f;
				case 1:
					return -83.441f, 1150.827f, 162.5341f;
				case 2:
					return 79.7579f, 1097.817f, 179.6911f;
				case 3:
					return 71.771f, 1086.762f, 179.629f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 69.1599f, 1069.989f, 194.9133f;
				case 1:
					return 64.6494f, 1068.414f, 194.9133f;
				case 2:
					return 66.0755f, 1069.148f, 194.9133f;
				case 3:
					return 67.5022f, 1069.604f, 194.9133f;
				case 4:
					return 72.0513f, 1071.363f, 194.9133f;
				case 5:
					return 62.1651f, 1066.241f, 194.6409f;
				case 6:
					return -19.7258f, 1102.448f, 170.4588f;
				case 7:
					return 50.4368f, 1062.165f, 194.1077f;
				case 8:
					return 65.9353f, 1092.302f, 177.8636f;
				case 9:
					return 64.0276f, 1094.49f, 178.2636f;
				case 10:
					return 62.7786f, 1100.456f, 178.4333f;
				case 11:
					return 59.4455f, 1092.126f, 177.148f;
				case 12:
					return 60.2285f, 1098.223f, 177.5104f;
				case 13:
					return 64.5476f, 1085.57f, 178.3168f;
				case 14:
					return 52.5757f, 1100.882f, 177.2858f;
				case 15:
					return 54.869f, 1100.143f, 177.4544f;
				case 16:
					return 54.7608f, 1094.746f, 176.6914f;
				case 17:
					return 46.9635f, 1089.552f, 176.397f;
				case 18:
					return 51.0691f, 1087.794f, 176.397f;
				case 19:
					return 52.8182f, 1096.769f, 176.5934f;
				case 20:
					return -46.8065f, 1117.532f, 165.8451f;
				case 21:
					return -43.8098f, 1117.29f, 166.403f;
				case 22:
					return -43.9869f, 1120.79f, 166.024f;
				case 23:
					return -49.5719f, 1120.01f, 165.433f;
				case 24:
					return -47.2793f, 1120.94f, 165.586f;
				case 25:
					return -47.364f, 1123.74f, 165.32f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 49.8064f, 1090.627f, 176.6746f;
				case 1:
					return 56.4741f, 1092.771f, 176.594f;
				case 2:
					return 54.8648f, 1094.444f, 176.439f;
				case 3:
					return 71.3683f, 1092.787f, 178.1854f;
				case 4:
					return 68.1369f, 1089.088f, 178.0195f;
				case 5:
					return 67.5031f, 1093.237f, 177.6634f;
				case 6:
					return 70.1106f, 1096.36f, 178.2133f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 53.9248f, 1091.95f, 178.0194f;
				case 1:
					return 56.2648f, 1107.453f, 181.1176f;
				case 2:
					return 62.5299f, 1105.729f, 181.634f;
				case 3:
					return 59.3404f, 1106.203f, 181.2579f;
				case 4:
					return 64.9458f, 1093.1f, 177.8292f;
				case 5:
					return 65.8487f, 1100.401f, 178.7499f;
				case 6:
					return 68.619f, 1100.029f, 178.6378f;
				case 7:
					return 72.6447f, 1106.436f, 181.3343f;
				case 8:
					return 63.4313f, 1140.125f, 191.1013f;
				case 9:
					return 64.2938f, 1142.902f, 191.072f;
				case 10:
					return 65.1768f, 1148.745f, 189.6204f;
				case 11:
					return 56.5062f, 1114.165f, 183.404f;
				case 12:
					return 56.919f, 1122.599f, 184.8553f;
				case 13:
					return 63.7f, 1114.083f, 183.0361f;
				case 14:
					return 51.0576f, 1113.078f, 182.508f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 67.4174f, 1139.678f, 190.9435f;
				case 1:
					return 64.565f, 1138.237f, 190.8305f;
				case 2:
					return 69.0747f, 1137.411f, 190.5384f;
				case 3:
					return 56.9344f, 1132.12f, 188.5947f;
				case 4:
					return 50.4514f, 1128.356f, 184.8741f;
				case 5:
					return 31.7603f, 1050.85f, 189.8849f;
				case 6:
					return 29.9741f, 1047.999f, 189.8891f;
				case 7:
					return 30.4011f, 1097.084f, 175.832f;
				case 8:
					return 24.6735f, 1095.461f, 175.4453f;
				case 9:
					return 352.6177f, 1473.647f, 179.725f;
				case 10:
					return 412.0961f, 1399.958f, 170.9542f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -123.4642f, 1312.275f, 160.8437f;
				case 1:
					return -122.3684f, 1317.907f, 159.4258f;
				case 2:
					return -121.9075f, 1309.354f, 161.6113f;
				case 3:
					return -125.3557f, 1317.991f, 159.7477f;
				case 4:
					return -167.3571f, 1355.88f, 168.1541f;
				case 5:
					return -170.8933f, 1358.045f, 167.0784f;
				case 6:
					return -131.4094f, 1237.635f, 164.2932f;
				case 7:
					return -248.6505f, 1346.262f, 139.5418f;
				case 8:
					return -116.5367f, 1352.967f, 163.2499f;
				case 9:
					return -128.0268f, 1342.284f, 163.5125f;
				case 10:
					return -129.8791f, 1352.995f, 162.8831f;
				case 11:
					return -163.4982f, 1344.195f, 171.5278f;
				case 12:
					return -159.2363f, 1342.763f, 171.5611f;
				case 13:
					return -172.2737f, 1354.858f, 167.9939f;
				case 14:
					return -153.7259f, 1359.093f, 173.5259f;
				case 15:
					return -153.0983f, 1344.77f, 171.6945f;
				case 16:
					return -208.1447f, 1369.721f, 150.3809f;
				case 17:
					return -212.2588f, 1362.081f, 149.7283f;
				case 18:
					return -217.793f, 1359.763f, 147.5889f;
				case 19:
					return -220.7617f, 1364.383f, 145.3867f;
				case 20:
					return -231.5071f, 1353.47f, 141.7373f;
				case 21:
					return -228.4381f, 1359.872f, 142.0389f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -254.613f, 1350.91f, 139.533f;
				case 1:
					return -254.6804f, 1349.689f, 139.5694f;
				case 2:
					return -176.9475f, 1367.108f, 163.7151f;
				case 3:
					return -223.9582f, 1300.467f, 147.9705f;
				case 4:
					return -245.2942f, 1349.208f, 139.5221f;
				case 5:
					return -244.973f, 1350.706f, 139.5143f;
				case 6:
					return -244.1544f, 1348.916f, 139.543f;
				case 7:
					return -244.6558f, 1352.988f, 139.4939f;
				case 8:
					return -248.4554f, 1353.47f, 139.5087f;
				case 9:
					return -245.9984f, 1351.674f, 139.4951f;
				case 10:
					return -246.8105f, 1353.097f, 139.492f;
				case 11:
					return -244.9426f, 1346.593f, 139.525f;
				case 12:
					return -242.4842f, 1349.76f, 139.5113f;
				case 13:
					return -248.2566f, 1321.553f, 138.7898f;
				case 14:
					return -248.649f, 1326.537f, 138.2457f;
				case 15:
					return -246.4959f, 1322.527f, 138.8016f;
				case 16:
					return -250.1728f, 1325.68f, 138.1393f;
				case 17:
					return -248.1703f, 1324.121f, 138.5109f;
				case 18:
					return -237.44f, 1333.47f, 168.7259f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return -268.6247f, 1352.1f, 139.6826f;
				case 1:
					return -270.7444f, 1349.291f, 137.8004f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return -228.9918f, 1245.429f, 91.8361f;
				case 1:
					return -311.7325f, 1298.74f, 146.4483f;
				case 2:
					return -229.6012f, 1246.055f, 91.8561f;
				case 3:
					return -317.6653f, 1286.858f, 146.9886f;
				case 4:
					return -310.3499f, 1298.969f, 146.9379f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 40.1064f, 1092.588f, 175.4378f;
				case 1:
					return 29.6054f, 1090.056f, 175.8245f;
				case 2:
					return 32.4749f, 1092.764f, 176.1369f;
				case 3:
					return 39.878f, 1094.755f, 175.1697f;
				case 4:
					return 39.5779f, 1098.556f, 175.3531f;
				case 5:
					return 43.907f, 1104.715f, 176.4047f;
				case 6:
					return 53.626f, 1103.929f, 179.1026f;
				case 7:
					return 45.8716f, 1092.045f, 176.1875f;
				case 8:
					return 50.5188f, 1088.454f, 176.7874f;
				case 9:
					return 56.8085f, 1087.233f, 177.6855f;
				case 10:
					return 68.5642f, 1084.385f, 179.4736f;
				case 11:
					return 61.7757f, 1103.813f, 179.9913f;
				case 12:
					return 57.7064f, 1105.316f, 180.7393f;
				case 13:
					return 61.343f, 1100.219f, 177.8202f;
				case 14:
					return 53.4999f, 1091.22f, 176.1784f;
				case 15:
					return 20.2285f, 1086.343f, 175.7721f;
				case 16:
					return 15.1924f, 1085.72f, 175.5265f;
				case 17:
					return 16.7679f, 1082.132f, 176.0117f;
				case 18:
					return 21.537f, 1078.076f, 177.5708f;
				case 19:
					return 20.6987f, 1075.974f, 178.0976f;
				case 20:
					return 6.4074f, 1075.823f, 175.7185f;
				case 21:
					return 48.5066f, 1089.837f, 176.0778f;
				case 22:
					return 50.6906f, 1104.109f, 178.557f;
				case 23:
					return 70.3778f, 1088.563f, 178.8457f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 36.2947f, 1048.041f, 194.1976f;
				case 1:
					return 39.1105f, 1047.958f, 194.7859f;
				case 2:
					return 38.5731f, 1044.891f, 194.7602f;
				case 3:
					return 40.7225f, 1044.166f, 195.2978f;
				case 4:
					return 37.4693f, 1040.582f, 195.3152f;
				case 5:
					return 37.175f, 1036.019f, 196.4389f;
				case 6:
					return 45.1617f, 1052.187f, 194.7175f;
				case 7:
					return 50.7413f, 1048.629f, 195.9612f;
				case 8:
					return 46.7726f, 1038.619f, 196.92f;
				case 9:
					return 54.7558f, 1046.426f, 196.146f;
				case 10:
					return 48.1536f, 1059.682f, 194.3187f;
				case 11:
					return 52.406f, 1030.198f, 202.2607f;
				case 12:
					return 53.9065f, 1060.253f, 194.5158f;
				case 13:
					return 66.1744f, 1059.804f, 195.8903f;
				case 14:
					return 67.4069f, 1055.899f, 196.1994f;
				case 15:
					return 56.5036f, 1052.177f, 195.4929f;
				case 16:
					return 61.3527f, 1047.652f, 196.8391f;
				case 17:
					return 69.6822f, 1064.125f, 195.769f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 75.7169f, 1127.944f, 185.555f;
				case 1:
					return 70.1948f, 1132.49f, 188.4951f;
				case 2:
					return 57.4487f, 1116.352f, 183.773f;
				case 3:
					return 52.3717f, 1127.055f, 185.6248f;
				case 4:
					return 58.9754f, 1129.437f, 187.1128f;
				case 5:
					return 60.0847f, 1141.19f, 190.7647f;
				case 6:
					return 67.2507f, 1139.549f, 190.6962f;
				case 7:
					return 70.9744f, 1122.216f, 183.9646f;
				case 8:
					return 65.5364f, 1123.744f, 184.4257f;
				case 9:
					return 60.7897f, 1121.322f, 184.0131f;
				case 10:
					return 55.1219f, 1128.398f, 186.5152f;
				case 11:
					return 64.9253f, 1128.866f, 187.2305f;
				case 12:
					return 63.5009f, 1133.753f, 189.682f;
				case 13:
					return 56.0398f, 1136.078f, 189.1203f;
				case 14:
					return 67.3154f, 1118.196f, 183.0073f;
				case 15:
					return 63.9864f, 1116.818f, 183.3839f;
				case 16:
					return 60.9221f, 1118.074f, 184.0447f;
				case 17:
					return 45.4201f, 1116.461f, 181.4402f;
				case 18:
					return 50.7697f, 1103.76f, 178.7669f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return -103.3483f, 1324.611f, 175.8293f;
				case 1:
					return -105.0035f, 1331.064f, 170.6592f;
				case 2:
					return -95.7296f, 1342.832f, 171.9185f;
				case 3:
					return -97.3973f, 1335.372f, 172.2417f;
				case 4:
					return -113.3543f, 1346.455f, 162.5094f;
				case 5:
					return -163.6263f, 1333.535f, 171.6344f;
				case 6:
					return -169.2997f, 1332.616f, 171.5513f;
				case 7:
					return -173.5079f, 1335.917f, 172.9562f;
				case 8:
					return -175.3416f, 1327.424f, 172.2693f;
				case 9:
					return -172.965f, 1350.745f, 168.9339f;
				case 10:
					return -195.1944f, 1376.022f, 155.4746f;
				case 11:
					return -196.5417f, 1370.503f, 155.1709f;
				case 12:
					return -189.3529f, 1375.004f, 157.5569f;
				case 13:
					return -185.1585f, 1385.351f, 160.3572f;
				case 14:
					return -191.9746f, 1368.712f, 164.0682f;
				case 15:
					return -214.1071f, 1361.762f, 148.7786f;
				case 16:
					return -204.8824f, 1370.878f, 151.1303f;
				case 17:
					return -217.3209f, 1365.623f, 146.9401f;
				case 18:
					return -98.1134f, 1329.05f, 175.8623f;
				case 19:
					return -148.3092f, 1326.608f, 173.6429f;
				case 20:
					return -144.9806f, 1327.907f, 174.3972f;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return -96.3686f, 1324.044f, 175.3277f;
				case 1:
					return -87.2491f, 1330.295f, 174.3308f;
				case 2:
					return -85.1452f, 1349.613f, 173.6022f;
				case 3:
					return -86.4658f, 1339.94f, 173.3597f;
				case 4:
					return -109.0398f, 1352.659f, 162.7114f;
				case 5:
					return -172.6383f, 1309.898f, 162.2267f;
				case 6:
					return -170.7922f, 1325.186f, 169.1468f;
				case 7:
					return -181.4224f, 1330.519f, 173.2023f;
				case 8:
					return -187.2425f, 1323.641f, 172.3387f;
				case 9:
					return -175.2845f, 1347.914f, 171.4339f;
				case 10:
					return -180.3265f, 1369.802f, 161.6593f;
				case 11:
					return -178.2523f, 1369.6f, 162.1654f;
				case 12:
					return -178.5647f, 1368.347f, 162.4493f;
				case 13:
					return -176.7762f, 1368.509f, 162.8595f;
				case 14:
					return -178.1048f, 1366.997f, 163.6208f;
				case 15:
					return -156.7546f, 1350.576f, 169.6983f;
				case 16:
					return -155.6069f, 1351.487f, 169.7258f;
				case 17:
					return -154.8672f, 1350.272f, 169.7228f;
				case 18:
					return -153.5686f, 1351.442f, 169.6959f;
				case 19:
					return -152.5498f, 1350.799f, 169.659f;
				case 20:
					return -89.8753f, 1325.51f, 175.2987f;
				case 21:
					return -144.6812f, 1318.814f, 172.2782f;
				case 22:
					return -141.8476f, 1320.969f, 172.8619f;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 41.4908f, 1101.624f, 176.0923f;
				case 1:
					return 50.5632f, 1101.038f, 176.9309f;
				case 2:
					return 67.1418f, 1099.205f, 178.0161f;
				case 3:
					return 78.7538f, 1097.845f, 179.5055f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_786(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	if (Global_1935630.f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_0__::func_145(0, 0);
		__LIB_0__::func_146(-1);
	}
	__LIB_0__::func_87(1);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	if (!__LIB_0__::func_1(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!__LIB_0__::func_1(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!__LIB_0__::func_1(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (__LIB_0__::func_1(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!__LIB_0__::func_1(*iParam0, 32768))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam1, true);
	}
	if (!__LIB_0__::func_1(*iParam0, 1))
	{
		PAD::_0xF239400E16C23E08(0, 0);
	}
	if (!__LIB_0__::func_1(*iParam0, 65536))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	}
	if (!__LIB_0__::func_1(*iParam0, 4) && !__LIB_0__::func_1(*iParam0, 2))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_0__::func_1(*iParam0, 2048))
	{
		__LIB_0__::func_713(0, 0);
	}
	if (__LIB_0__::func_1(*iParam0, 8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (__LIB_0__::func_1(*iParam0, 256))
	{
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
	}
	if (__LIB_0__::func_1(*iParam0, 8192))
	{
		func_1422();
	}
	if (!__LIB_0__::func_1(*iParam0, 262144))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	}
	if (!__LIB_0__::func_1(*iParam0, 512))
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (!__LIB_0__::func_1(*iParam0, 1024))
	{
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	}
	if (iParam2 != 2)
	{
		PED::SET_PED_STEALTH_MOVEMENT(Global_35, iParam2 == 1, 0, 0);
	}
	if (PED::IS_PED_ON_FOOT(Global_35))
	{
		if (bParam6)
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35, 0f);
			PED::SET_PED_DESIRED_HEADING(Global_35, ENTITY::GET_ENTITY_HEADING(Global_35));
			ENTITY::SET_ENTITY_VELOCITY(Global_35, 0f, 0f, 0f);
		}
		if (!__LIB_0__::func_1(*iParam0, 16))
		{
			iVar0 = ITEMSET::CREATE_ITEMSET(true);
			bVar1 = false;
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar0);
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
			{
				iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
				iVar7 = MISC::_GET_ENTITY_FROM_ITEM(iVar6);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
				}
				else
				{
					bVar8 = false;
					if (ENTITY::IS_ENTITY_AN_OBJECT(iVar7))
					{
						if (__LIB_0__::func_147() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = iParam3;
					vVar3.f_1 = iParam4;
					vVar3.f_2 = iParam5;
					if (__LIB_0__::func_86(vVar3))
					{
						vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						__LIB_0__::func_634(&vVar3, 50, 10, 0);
					}
					PED::_0xED00D72F81CF7278(iVar7, 0, 1);
					ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						__LIB_0__::func_148(2);
						__LIB_0__::func_149(-1);
						__LIB_0__::func_150(vVar3);
						__LIB_0__::func_151(__LIB_0__::func_23());
					}
					bVar1 = true;
				}
				iVar2++;
			}
			if (bVar1)
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
					PED::_0x2208438012482A1A(Global_35, false, false);
				}
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
		}
	}
	if (bParam6 && PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar9 = PED::GET_MOUNT(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar9))
		{
			TASK::CLEAR_PED_TASKS(iVar9, true, false);
			TASK::TASK_STAND_STILL(iVar9, -1);
		}
	}
	if (!__LIB_0__::func_1(*iParam0, 4096))
	{
		__LIB_0__::func_142(Global_35);
	}
	if (!__LIB_0__::func_1(*iParam0, 1048576))
	{
		UIFEED::_0xDD1232B332CBB9E7(7, 1, 0);
	}
	if (!__LIB_0__::func_1(*iParam0, 2097152))
	{
		if (__LIB_0__::func_704() || PED::_0x50F124E6EF188B22(Global_35))
		{
			__LIB_1__::func_716(1);
		}
	}
	if (Global_1359489.f_16 & 4194304 == 0)
	{
		Global_1359489.f_16 |= 4194304;
	}
	*iParam0 = 0;
}

void func_788(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_84(uParam0, 2048) && !__LIB_0__::func_86(__LIB_4__::func_548(uParam0)))
	{
		bVar0 = VOLUME::_DOES_VOLUME_EXIST(uParam0->f_4);
		iVar1 = PED::_GET_LAST_MOUNT(Global_35);
		if ((!ENTITY::IS_ENTITY_DEAD(iVar1) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar1, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && PED::GET_MOUNT(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (TASK::IS_PED_IN_WRITHE(iVar1))
			{
				iVar2 |= 32;
			}
			func_870(iVar1, __LIB_4__::func_548(uParam0), __LIB_4__::func_549(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_870(iVar3, __LIB_4__::func_548(uParam0), __LIB_4__::func_549(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_789(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_4__::func_548(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_4__::func_548(uParam0) };
			func_870(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

int func_797(int iParam0, int iParam1)
{
	var uVar0;
	return func_1446(&uVar0, iParam0, iParam1);
}

bool func_862(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!__LIB_0__::func_31(iParam1))
	{
		return false;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(*iParam2) && __LIB_1__::func_22(iParam1)) && __LIB_0__::func_167(iParam1) == *iParam2)
	{
		return true;
	}
	*iParam2 = func_1480(iParam1, 1, 0, iParam4, iParam5, iParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
	{
		func_1481(uParam0, *iParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		__LIB_4__::func_703(iParam1);
		return true;
	}
	return false;
}

void func_870(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_870(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_870(iVar2, vParam1, fParam4, iParam5, iParam6);
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

bool func_872(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	switch (__LIB_0__::func_81(uParam0))
	{
		case 0:
			if (!__LIB_5__::func_343(iParam1, &(uParam0->f_8), &(uParam0->f_6)))
			{
				return true;
			}
			__LIB_0__::func_19(uParam0, 1);
			break;
		case 1:
			__LIB_4__::func_560(uParam0);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			iVar0 = 0;
			func_786(&iVar0, 0, 2, 0, 0, 0, 0);
			__LIB_0__::func_19(uParam0, 2);
			break;
		case 2:
			if (__LIB_6__::func_918(uParam0))
			{
				__LIB_0__::func_568(uParam0->f_8, 5000f, 0);
				PED::_0x4759CC730F947C81();
				__LIB_4__::func_89(&(uParam0->f_3), 1);
				__LIB_0__::func_19(uParam0, 3);
			}
			break;
		case 3:
			if (__LIB_1__::func_583(&(uParam0->f_3)) >= 1f)
			{
				__LIB_0__::func_19(uParam0, 4);
			}
			break;
		case 4:
			if (!__LIB_0__::func_91())
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				if (CAM::DOES_CAM_EXIST(uParam0->f_2))
				{
					CAM::DESTROY_CAM(uParam0->f_2, false);
				}
			}
			iVar1 = 1;
			__LIB_5__::func_129(&iVar1, 0);
			AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
			__LIB_0__::func_19(uParam0, 0);
			return true;
	}
	return false;
}

bool func_874(var uParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = __LIB_5__::func_475(uParam0);
	if (__LIB_5__::func_279(uParam0, __LIB_4__::func_939(uParam0)) <= 3)
	{
		iVar0 = __LIB_4__::func_939(uParam0);
	}
	Var1 = { __LIB_5__::func_299(uParam0, iVar0) };
	if (func_1516(&(uParam0->f_10792), Var1, __LIB_0__::func_81(&(uParam0->f_10792)), 0))
	{
		__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 262144);
		if (__LIB_4__::func_562(&(uParam0->f_10792), 524288))
		{
			__LIB_5__::func_33(uParam0, 67108864);
			__LIB_4__::func_563(&(uParam0->f_10792), 524288);
		}
		__LIB_5__::func_344(&(uParam0->f_7375), &(uParam0->f_10792));
		return true;
	}
	return false;
}

bool func_876(var uParam0, struct<4> Param1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param1))
	{
		return true;
	}
	if (__LIB_4__::func_937(uParam0, 16777216))
	{
		__LIB_5__::func_345(uParam0);
		__LIB_5__::func_56(uParam0);
		return true;
	}
	if (func_1522(Param1, &(uParam0->f_7375), uParam0))
	{
		return true;
	}
	if (__LIB_0__::func_81(uParam0) == 0)
	{
		__LIB_11__::func_756(uParam0);
	}
	if (__LIB_0__::func_91())
	{
		if (!__LIB_4__::func_937(uParam0, 262144))
		{
			CAM::STOP_GAMEPLAY_HINT(true);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			if (CAM::DOES_CAM_EXIST(uParam0->f_609.f_2))
			{
				CAM::DESTROY_CAM(uParam0->f_609.f_2, false);
			}
			__LIB_5__::func_326(&(uParam0->f_10792));
			__LIB_4__::func_974(uParam0);
			__LIB_4__::func_969(uParam0, 524288);
			__LIB_5__::func_346(uParam0);
			__LIB_5__::func_26(uParam0, 30f);
			__LIB_5__::func_27(uParam0, 40f);
			__LIB_4__::func_944(uParam0, 262144);
		}
		if (!__LIB_4__::func_937(uParam0, 524288) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_7375.f_804))
		{
			__LIB_4__::func_944(uParam0, 524288);
		}
	}
	return false;
}

void func_882()
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
}

bool func_883(var uParam0)
{
	if (!func_1529(uParam0))
	{
		return false;
	}
	if (!func_1530(uParam0))
	{
		return false;
	}
	if (__LIB_4__::func_939(uParam0) <= 4)
	{
		if (!func_1531(uParam0))
		{
			return false;
		}
	}
	if (__LIB_4__::func_939(uParam0) <= 5)
	{
		if (!func_1532(uParam0))
		{
			return false;
		}
		if (!func_1533(uParam0))
		{
			return false;
		}
	}
	if (!func_1333(uParam0))
	{
		return false;
	}
	if (!func_1239())
	{
		return false;
	}
	return true;
}

bool func_884(var uParam0)
{
	if (__LIB_4__::func_939(uParam0) <= 5)
	{
		if (!func_1534())
		{
			return false;
		}
		if (!func_1535(uParam0))
		{
			return false;
		}
		if (!func_1536(uParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_885(var uParam0)
{
	if (__LIB_4__::func_939(uParam0) < 2)
	{
		STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_CROUCH_INSPECT"), 15, 0, 0);
		STREAMING::_REQUEST_SCENARIO_TYPE(joaat("GENERIC_SIT_GROUND_SCENARIO"), 15, 0, 0);
		if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_CROUCH_INSPECT"), false) || !STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("GENERIC_SIT_GROUND_SCENARIO"), false))
		{
			return false;
		}
	}
	return true;
}

bool func_886(var uParam0)
{
	if (!func_1537(uParam0))
	{
		return false;
	}
	__LIB_5__::func_521(0.6f);
	func_1538();
	func_1539();
	PATHFIND::_0xC1799FAFD2FDF52B(iLocal_411, 0, 0, 0);
	POPULATION::_0xB56D41A694E42E86(iLocal_413, 2048, 0, 0, -1, -1, 0);
	PATHFIND::_0x19C7567D2F2287D6(iLocal_410, 7);
	__LIB_11__::func_754(1);
	__LIB_3__::func_730(iLocal_411, 0, 0, 0, 0, 0);
	__LIB_4__::func_220(iLocal_411, 0);
	uLocal_414 = __LIB_1__::func_391(iLocal_411, 0, 0, 0);
	func_1543(uParam0);
	func_1544(uParam0);
	return true;
}

void func_887(var uParam0)
{
	__LIB_5__::func_550(uParam0, 259400);
	__LIB_5__::func_256(uParam0, 259433);
	__LIB_5__::func_257(uParam0, 259568);
}

void func_888(var uParam0)
{
	int iVar0;
	func_1551(uParam0);
	func_1552(uParam0);
	__LIB_1__::func_538(0);
	func_1554();
	func_882();
	func_1555();
	if (func_1556(uParam0, &iVar0))
	{
		__LIB_11__::func_66(uParam0, func_1557(iVar0), "", 1, 0);
	}
	if (__LIB_4__::func_939(uParam0) == 1)
	{
		if (func_1559(&Local_429))
		{
			__LIB_11__::func_66(uParam0, func_1557(3), "", 1, 0);
		}
	}
	if (__LIB_4__::func_939(uParam0) == 2)
	{
		if (__LIB_5__::func_279(uParam0, __LIB_4__::func_939(uParam0)) <= 3)
		{
			func_1560(&Local_429, 1f);
		}
	}
	if (__LIB_4__::func_939(uParam0) != 5)
	{
		PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 28, 1);
	}
	if (__LIB_4__::func_939(uParam0) == 7 || __LIB_4__::func_939(uParam0) == 8)
	{
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
	}
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
}

bool func_905(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	if (__LIB_4__::func_937(uParam0, -2147483648))
	{
		return true;
	}
	if (__LIB_5__::func_481(uParam0, iParam1, 4))
	{
		if (__LIB_4__::func_939(uParam0) != 25 && __LIB_4__::func_939(uParam0) != 26)
		{
			if (!__LIB_4__::func_937(uParam0, 512) && !__LIB_4__::func_948(uParam0, 4))
			{
				__LIB_5__::func_599(uParam0, func_34(iParam1), func_34(iParam2), iParam1, iParam2);
			}
			else
			{
				Var0 = { func_34(iParam2) };
				Global_1347394 = { Var0 };
				Global_1347394.f_3 = Var0.f_3;
				Global_1572864.f_10 = __LIB_5__::func_24(iParam2);
			}
		}
		func_1571(uParam0);
		if (__LIB_5__::func_261(uParam0))
		{
			__LIB_5__::func_465(uParam0);
		}
		if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 33554432) && __LIB_4__::func_937(uParam0, 524288))
		{
			UILOG::_UILOG_PRINT_CACHED_OBJECTIVE();
		}
		__LIB_4__::func_969(uParam0, 524288);
		__LIB_4__::func_977(&(uParam0->f_7375), 4);
		if (__LIB_5__::func_576(uParam0))
		{
			__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 8388608);
			HUD::_HIDE_HUD_COMPONENT(-1679307491);
			HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
			__LIB_5__::func_112();
		}
		return true;
	}
	return false;
}

bool func_907(var uParam0, int iParam1)
{
	struct<4> Var0;
	if (__LIB_4__::func_948(uParam0, 16384))
	{
		if (func_874(uParam0))
		{
			__LIB_5__::func_326(&(uParam0->f_10792));
			__LIB_4__::func_969(uParam0, 2097152);
			__LIB_4__::func_958(uParam0, 16384);
			__LIB_4__::func_945(uParam0, 128);
			return true;
		}
		return false;
	}
	if (!__LIB_4__::func_937(uParam0, 4))
	{
		__LIB_0__::func_16(uParam0, iParam1);
		__LIB_4__::func_944(uParam0, 4);
	}
	Var0 = { __LIB_5__::func_299(uParam0, iParam1) };
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2))
	{
		if (__LIB_4__::func_937(uParam0, 2097152))
		{
			if (func_874(uParam0))
			{
				__LIB_4__::func_969(uParam0, 2097152);
				func_876(uParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_876(uParam0, Var0);
		}
	}
	else if (__LIB_4__::func_937(uParam0, 2097152))
	{
		if (func_874(uParam0))
		{
			__LIB_4__::func_969(uParam0, 2097152);
			__LIB_5__::func_56(uParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2))
	{
		return func_876(uParam0, Var0);
	}
	return true;
}

void func_927(int iParam0, int iParam1)
{
	if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iParam0))
	{
		OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iParam0, iParam1);
	}
}

float func_951(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 57.7472f;
				case 1:
					return 45.1262f;
				case 2:
					return 117.0061f;
				case 3:
					return 349.7893f;
				case 4:
					return 115.1478f;
				case 5:
					return 44.9588f;
				case 6:
					return 20.32f;
				case 7:
					return 115.4935f;
				case 8:
					return 343.6441f;
				case 9:
					return 303.8131f;
				case 10:
					return 52.9588f;
				case 11:
					return 51.9844f;
				case 12:
					return 118.6028f;
				case 13:
					return 54.8919f;
				case 14:
					return 150.683f;
				case 15:
					return 53.2517f;
				case 16:
					return 249.4219f;
				case 17:
					return 55.0996f;
				case 18:
					return 66.4419f;
				case 19:
					return 50.2036f;
				case 20:
					return 52.4513f;
				case 21:
					return 133.8391f;
				case 22:
					return 12.46f;
				case 23:
					return -194.0401f;
				case 24:
					return -175.51f;
				case 25:
					return -146.8f;
				case 26:
					return 152.0988f;
				case 27:
					return -27.9842f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 45.1262f;
				case 1:
					return 227.5518f;
				case 2:
					return 178.8218f;
				case 3:
					return 0f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 27.1262f;
				case 1:
					return 382.8221f;
				case 2:
					return 382.8221f;
				case 3:
					return 380.8221f;
				case 4:
					return 384.8221f;
				case 5:
					return 378.8221f;
				case 6:
					return 249.1644f;
				case 7:
					return 11.5945f;
				case 8:
					return 127.621f;
				case 9:
					return 264.65f;
				case 10:
					return 147.509f;
				case 11:
					return 138.483f;
				case 12:
					return 147.154f;
				case 13:
					return 179.998f;
				case 14:
					return -199.7631f;
				case 15:
					return -164.256f;
				case 16:
					return -169.262f;
				case 17:
					return 154.021f;
				case 18:
					return -176.0697f;
				case 19:
					return -109.719f;
				case 20:
					return -126.5986f;
				case 21:
					return -120.786f;
				case 22:
					return -131.532f;
				case 23:
					return -129.46f;
				case 24:
					return -129.399f;
				case 25:
					return -134.489f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 292.6415f;
				case 1:
					return 101.2139f;
				case 2:
					return 183.8055f;
				case 3:
					return 85.1417f;
				case 4:
					return 387.1845f;
				case 5:
					return 481.1727f;
				case 6:
					return 117.4407f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 316.7654f;
				case 1:
					return 353.295f;
				case 2:
					return 364.1617f;
				case 3:
					return 329.3438f;
				case 4:
					return 358.091f;
				case 5:
					return 12.3118f;
				case 6:
					return 346.0921f;
				case 7:
					return 1.7052f;
				case 8:
					return 181.9311f;
				case 9:
					return 159.1886f;
				case 10:
					return 166.9245f;
				case 11:
					return 346.885f;
				case 12:
					return -13.4398f;
				case 13:
					return 354.8686f;
				case 14:
					return 345.4682f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 180.2811f;
				case 1:
					return 291.4314f;
				case 2:
					return 64.1383f;
				case 3:
					return 138.9101f;
				case 4:
					return 142.8771f;
				case 5:
					return 37.7009f;
				case 6:
					return 62.1237f;
				case 7:
					return 83.5443f;
				case 8:
					return 79.5443f;
				case 9:
					return 217.7771f;
				case 10:
					return 194.4557f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 355.4868f;
				case 1:
					return 175.7129f;
				case 2:
					return 338.581f;
				case 3:
					return 326.3201f;
				case 4:
					return 43.3498f;
				case 5:
					return 35.4735f;
				case 6:
					return 351.0891f;
				case 7:
					return 168.6317f;
				case 8:
					return 226.4235f;
				case 9:
					return 232.6744f;
				case 10:
					return 233.1093f;
				case 11:
					return 150.3613f;
				case 12:
					return 156.7026f;
				case 13:
					return 195.427f;
				case 14:
					return 172.3601f;
				case 15:
					return 183.4143f;
				case 16:
					return 285.3931f;
				case 17:
					return 269.2294f;
				case 18:
					return 298.3777f;
				case 19:
					return 283.5879f;
				case 20:
					return 298.2836f;
				case 21:
					return 282.2292f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -97.4206f;
				case 1:
					return -88.74f;
				case 2:
					return 36.6766f;
				case 3:
					return 53.3611f;
				case 4:
					return 101.15f;
				case 5:
					return 28.61f;
				case 6:
					return 55.34f;
				case 7:
					return 75.14f;
				case 8:
					return 66.72f;
				case 9:
					return 76.17f;
				case 10:
					return 48.81f;
				case 11:
					return 8.83f;
				case 12:
					return 27.44f;
				case 13:
					return -25.66f;
				case 14:
					return 2.4f;
				case 15:
					return -3.34f;
				case 16:
					return -32.86f;
				case 17:
					return -9.74f;
				case 18:
					return 43.09f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 157.1579f;
				case 1:
					return 165.7958f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 46.0647f;
				case 1:
					return 279.3563f;
				case 2:
					return 125.4763f;
				case 3:
					return 213.8441f;
				case 4:
					return -260.6552f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 238.7834f;
				case 1:
					return 228.6933f;
				case 2:
					return 194.3929f;
				case 3:
					return 274.6256f;
				case 4:
					return 276.6669f;
				case 5:
					return 165.0868f;
				case 6:
					return 177.6207f;
				case 7:
					return 198.5242f;
				case 8:
					return 179.7531f;
				case 9:
					return 170.8901f;
				case 10:
					return 204.3003f;
				case 11:
					return 193.0531f;
				case 12:
					return 180.6282f;
				case 13:
					return 161.2262f;
				case 14:
					return 184.7385f;
				case 15:
					return 175.5324f;
				case 16:
					return 235.5159f;
				case 17:
					return 255.4894f;
				case 18:
					return 257.0327f;
				case 19:
					return 261.5906f;
				case 20:
					return 242.2013f;
				case 21:
					return 174.3953f;
				case 22:
					return 205.8093f;
				case 23:
					return 201.7052f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 293.4092f;
				case 1:
					return 297.1411f;
				case 2:
					return 308.9396f;
				case 3:
					return 308.3153f;
				case 4:
					return 303.0632f;
				case 5:
					return 301.0203f;
				case 6:
					return 289.4749f;
				case 7:
					return 322.3333f;
				case 8:
					return 314.9474f;
				case 9:
					return 307.9092f;
				case 10:
					return 251.0741f;
				case 11:
					return -24.0819f;
				case 12:
					return 110.3313f;
				case 13:
					return 135.1309f;
				case 14:
					return 94.7959f;
				case 15:
					return 173.0035f;
				case 16:
					return 120.346f;
				case 17:
					return 126.5531f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 161.551f;
				case 1:
					return 154.0667f;
				case 2:
					return 146.6252f;
				case 3:
					return 181.4072f;
				case 4:
					return 167.6213f;
				case 5:
					return 193.9569f;
				case 6:
					return 154.5472f;
				case 7:
					return 150.586f;
				case 8:
					return 159.092f;
				case 9:
					return 157.4545f;
				case 10:
					return 194.9254f;
				case 11:
					return 163.9424f;
				case 12:
					return 167.2388f;
				case 13:
					return 165.6749f;
				case 14:
					return 176.4905f;
				case 15:
					return 177.5954f;
				case 16:
					return 151.1049f;
				case 17:
					return 254.4159f;
				case 18:
					return 290.8772f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 52.4376f;
				case 1:
					return 60.1572f;
				case 2:
					return 101.4978f;
				case 3:
					return 69.157f;
				case 4:
					return 158.8515f;
				case 5:
					return 0.4837f;
				case 6:
					return 322.7932f;
				case 7:
					return 291.8701f;
				case 8:
					return 320.831f;
				case 9:
					return 263.2368f;
				case 10:
					return 118.7741f;
				case 11:
					return 110.6969f;
				case 12:
					return 113.0354f;
				case 13:
					return 6.7698f;
				case 14:
					return 47.9379f;
				case 15:
					return 123.8531f;
				case 16:
					return 111.5071f;
				case 17:
					return 118.7597f;
				case 18:
					return 55.3869f;
				case 19:
					return 13.9672f;
				case 20:
					return 31.8721f;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 67.903f;
				case 1:
					return 64.303f;
				case 2:
					return 111.9663f;
				case 3:
					return 72.4232f;
				case 4:
					return 146.8026f;
				case 5:
					return -47.3133f;
				case 6:
					return 335.5f;
				case 7:
					return 311.1266f;
				case 8:
					return 286.7026f;
				case 9:
					return 279.2368f;
				case 10:
					return 52.2228f;
				case 11:
					return 32.8895f;
				case 12:
					return 39.3508f;
				case 13:
					return 36.3918f;
				case 14:
					return 62.6074f;
				case 15:
					return 80.6604f;
				case 16:
					return 86.8057f;
				case 17:
					return 99.2953f;
				case 18:
					return 102.5842f;
				case 19:
					return 116.2125f;
				case 20:
					return 65.8341f;
				case 21:
					return 16.4004f;
				case 22:
					return 22.9581f;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 174.8579f;
				case 1:
					return 163.1698f;
				case 2:
					return 165.5238f;
				case 3:
					return 166.2148f;
			}
			break;
	}
	return 0f;
}

void func_1010(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	if (__LIB_0__::func_356(iParam0) != joaat("WEAPON"))
	{
		return;
	}
	iVar0 = func_579(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !__LIB_0__::func_214(iVar0))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_915(iVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, false) && __LIB_1__::func_614(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				__LIB_2__::func_471(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1064(int iParam0, bool bParam1, bool bParam2)
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
void func_1065(int iParam0)
{
	if (!__LIB_0__::func_448(iParam0))
	{
		__LIB_0__::func_549(__LIB_0__::func_548(iParam0));
	}
}

void func_1116(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_299(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_299(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_299(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1742(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_302(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_648(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1747(Var0);
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

void func_1119(bool bParam0)
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
		func_299(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_299(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_299(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_299(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_299(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_299(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_299(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_299(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_299(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_299(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_299(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_648(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_648(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_648(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_648(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_648(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_648(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_648(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_648(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_648(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_648(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_648(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

void func_1127(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (__LIB_0__::func_192(iParam0, 606799272))
		{
			func_1762(iParam0, iParam1);
		}
		if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_1__::func_858(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1164(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1164(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1164(iVar63, -915411861, 1, 0, 0));
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

void func_1193()
{
	if (__LIB_0__::func_272(Local_83, 0) && ENTITY::DOES_ENTITY_EXIST(iLocal_360))
	{
		PED::_0xCE7A6C1D5CDE1F9D(Local_83, iLocal_360, "p_dynamiteCrate02x_PH_L_HAND", "LOCO_ATTACH_CRATE_DYNAMITE");
	}
}

bool func_1194()
{
	PED::_0xF7EA250B9A919E03(454758258, Local_83);
	if (PED::_0x854BC9B1A1CCD034(454758258, Local_83))
	{
		return true;
	}
	return false;
}

void func_1195(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_870(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_1196()
{
	int iVar0;
	float fVar1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_186 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_186[iVar0 /*19*/]))
		{
			Local_186[iVar0 /*19*/] = OBJECT::CREATE_OBJECT(iLocal_17, func_1798(func_476(15, iVar0), vLocal_382), true, true, false, false, true);
			Local_186[iVar0 /*19*/].f_17 = 1;
			Local_186[iVar0 /*19*/].f_18 = 1;
			ENTITY::SET_ENTITY_ROTATION(Local_186[iVar0 /*19*/], 90f, 0f, 0f, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(Local_186[iVar0 /*19*/], true);
			if (iVar0 == 0)
			{
				Local_263[iVar0 /*10*/].f_1 = iLocal_361;
			}
			else
			{
				Local_263[iVar0 /*10*/].f_1 = Local_186[(iVar0 - 1) /*19*/];
			}
			Local_263[iVar0 /*10*/].f_2 = Local_186[iVar0 /*19*/];
			fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_263[iVar0 /*10*/].f_1, true, false), ENTITY::GET_ENTITY_COORDS(Local_263[iVar0 /*10*/].f_2, true, false), true);
			func_1799(&(Local_263[iVar0 /*10*/]), Local_263[iVar0 /*10*/].f_1, Local_263[iVar0 /*10*/].f_2, (fVar1 * 0.9f), (fVar1 * 1.1f), 125);
		}
		iVar0++;
	}
	func_1207();
}

void func_1198(var uParam0, int iParam1, float fParam2)
{
	__LIB_5__::func_486(uParam0, func_1806(iParam1), -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	if (fParam2 > 0f)
	{
		__LIB_2__::func_259(&uLocal_77);
	}
	else
	{
		__LIB_1__::func_561(&uLocal_77);
	}
	iLocal_415 = iParam1;
	fLocal_403 = fParam2;
}

void func_1200(var uParam0, int iParam1, bool bParam2)
{
	__LIB_5__::func_486(uParam0, func_1806(iParam1), -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	__LIB_1__::func_561(&uLocal_77);
	iLocal_415 = iParam1;
	fLocal_403 = 0f;
	if (bParam2)
	{
		__LIB_11__::func_338();
	}
}

void func_1206(int* iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_358) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		*iParam0 = PHYSICS::_ADD_ROPE_2(ENTITY::GET_ENTITY_COORDS(iParam1, true, false), __LIB_4__::func_335(0f, 1f, 0f), fParam3, iLocal_418, false, iParam4, 0.0075f);
		iParam0->f_1 = iParam1;
		iParam0->f_2 = iLocal_358;
		PHYSICS::_0x462FF2A432733A44(*iParam0, iParam0->f_1, iParam0->f_2, vLocal_379, vLocal_388, 0, 0);
		PHYSICS::_0xC64E7A62632AD2FE(*iParam0, iParam0->f_2, vLocal_391, 0, 1, 0);
		func_1817(iParam0);
		func_1818(iParam0, fParam2);
		func_1819(iParam0, 0.66f, fParam2);
	}
}

void func_1207()
{
	if (PHYSICS::DOES_ROPE_EXIST(Local_263[0 /*10*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_263[0 /*10*/].f_1))
		{
			PHYSICS::_0xC64E7A62632AD2FE(Local_263[0 /*10*/], Local_263[0 /*10*/].f_1, 0f, 0.05f, 0f, 0, 1, 1);
			PHYSICS::_0xC64E7A62632AD2FE(Local_263[0 /*10*/], Local_263[0 /*10*/].f_1, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_263[0 /*10*/].f_1, 36.05939f, 1089.699f, 176.37f), 0, 2, 1);
			PHYSICS::_0xC64E7A62632AD2FE(Local_263[0 /*10*/], Local_263[0 /*10*/].f_1, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_263[0 /*10*/].f_1, 36.05939f, 1089.75f, 176.33f), 0, 3, 1);
			PHYSICS::_0xC64E7A62632AD2FE(Local_263[0 /*10*/], Local_263[0 /*10*/].f_1, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_263[0 /*10*/].f_1, 36.05939f, 1089.75f, 176f), 0, 4, 1);
			PHYSICS::_0xC64E7A62632AD2FE(Local_263[0 /*10*/], Local_263[0 /*10*/].f_1, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_263[0 /*10*/].f_1, 36.08994f, 1089.825f, 175.4761f), 0, 5, 1);
		}
	}
}

void func_1208(var uParam0)
{
	__LIB_8__::func_806(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_83, "dutch", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_100, "EagleFlies", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_117, "PAYTAH", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_134[0 /*17*/], "A_M_M_WAPWARRIORS_01", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_134[1 /*17*/], "A_M_M_WAPWARRIORS_01^1", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_134[2 /*17*/], "A_M_M_WAPWARRIORS_01^2", 0, 0, 0, 0);
	__LIB_5__::func_580(uParam0, iLocal_352, "UTILLIWAG", 0, 0, 0, 0);
	__LIB_5__::func_580(uParam0, iLocal_355, "p_ladle02x", 0, 0, 0, 0);
	__LIB_5__::func_580(uParam0, iLocal_359, "p_cs_detonator01x", 0, 0, 0, 0);
	__LIB_5__::func_580(uParam0, iLocal_356, "p_cs_bucket01x", 0, 0, 0, 0);
	__LIB_5__::func_580(uParam0, iLocal_357, "p_cs_vegsack_up", 0, 0, 0, 0);
	__LIB_5__::func_580(uParam0, iLocal_360, "p_dynamiteCrate02x", 0, 0, 0, 0);
}

void func_1210()
{
	vector3 vVar0;
	vector3 vVar3;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_358) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_378))
	{
		func_1820();
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_358, true, false) };
		vVar3 = { ENTITY::GET_ENTITY_ROTATION(iLocal_358, 2) };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), false))
		{
			vVar0.f_2 = (vVar0.z + 0.05f);
			vVar3.x = 0f;
			vVar3.f_1 = 0f;
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_378, vVar0, vVar3, 2);
			ANIMSCENE::START_ANIM_SCENE(iLocal_378);
		}
	}
}

void func_1212(var uParam0)
{
	switch (__LIB_4__::func_979(uParam0))
	{
		case 1:
			__LIB_5__::func_301(uParam0, __LIB_4__::func_939(uParam0), 8388608);
			func_1198(uParam0, 1, 20f);
			__LIB_11__::func_59(uParam0, 21);
			break;
		case 21:
			__LIB_4__::func_89(&(Local_100.f_6), 0);
			if (__LIB_9__::func_178(&(Local_100.f_6)) > 5f)
			{
				__LIB_1__::func_561(&(Local_100.f_6));
				__LIB_11__::func_59(uParam0, 2);
			}
			break;
		case 2:
			func_1822(uParam0);
			if (iLocal_2467 >= 2)
			{
				if (!AUDIO::_0x1ECC76792F661CF5("NTS2_IG0_P1"))
				{
					if (func_1823(uParam0, "NTS2_GETTHIS", 1f, 1073741824 /* Float: 2f */, 0, 1))
					{
						__LIB_11__::func_59(uParam0, 20);
					}
				}
			}
			break;
		case 20:
			func_1822(uParam0);
			if (iLocal_2468 > 3)
			{
				if (func_1823(uParam0, "NTS2_01_START", 2.5f, 1073741824 /* Float: 2f */, 0, 1))
				{
					__LIB_1__::func_561(&uLocal_2458);
					__LIB_1__::func_561(&uLocal_2455);
					__LIB_11__::func_59(uParam0, 3);
				}
			}
			break;
		case 3:
			if (!AUDIO::_0x1ECC76792F661CF5("NTS2_01_START"))
			{
				__LIB_11__::func_59(uParam0, 4);
			}
			break;
		case 4:
			if (iLocal_2468 >= 9)
			{
				func_1295();
				__LIB_11__::func_59(uParam0, 5);
			}
			else
			{
				func_1824(uParam0);
			}
			break;
		case 5:
			if (!__LIB_1__::func_185(55))
			{
				__LIB_11__::func_59(uParam0, 6);
			}
			else if (func_1823(uParam0, "NTS2_DONE_TRN2", 5f, 1073741824 /* Float: 2f */, 0, 1))
			{
				__LIB_11__::func_59(uParam0, 6);
			}
			break;
		case 6:
			if (iLocal_2444 >= 2)
			{
				__LIB_11__::func_59(uParam0, 7);
			}
			else
			{
				func_1824(uParam0);
			}
			break;
		case 7:
			if (!__LIB_1__::func_185(47))
			{
				__LIB_11__::func_59(uParam0, 8);
			}
			else if (func_1823(uParam0, "NTS2_DONE_ODR5", 5f, 1073741824 /* Float: 2f */, 0, 1))
			{
				__LIB_11__::func_59(uParam0, 8);
			}
			break;
		case 8:
			func_1824(uParam0);
			break;
		case 9:
			if (func_1823(uParam0, "NTS2_01_RETURN", 2.5f, 1073741824 /* Float: 2f */, 0, 1))
			{
				__LIB_1__::func_561(&uLocal_2458);
				__LIB_11__::func_59(uParam0, 10);
			}
			break;
		case 10:
			if (func_1220(Global_35, sLocal_36, 45))
			{
				__LIB_1__::func_561(&uLocal_2458);
				__LIB_11__::func_59(uParam0, 11);
			}
			else
			{
				func_1824(uParam0);
			}
			break;
		case 11:
			if (func_1823(uParam0, "NTS2_SPOT", 0, 1073741824 /* Float: 2f */, 0, 1))
			{
				__LIB_11__::func_59(uParam0, 12);
			}
			break;
		case 12:
			if (func_1220(Global_35, sLocal_36, 70))
			{
				if (func_1823(uParam0, "NTS2_01_POSITN", 0, 1073741824 /* Float: 2f */, 0, 1))
				{
					__LIB_11__::func_59(uParam0, 13);
				}
			}
			else
			{
				func_1824(uParam0);
			}
			break;
		case 13:
			if (__LIB_0__::func_266(Global_35, func_369(0, 1), 3.5f, 1, 1))
			{
				__LIB_11__::func_59(uParam0, 14);
			}
			else
			{
				func_1823(uParam0, "NTS2_01_POSITN", 8f, 1073741824 /* Float: 2f */, 0, 1);
			}
			break;
		case 14:
			if (func_1823(uParam0, "NTS2_01_BRAVESP", 0, 1073741824 /* Float: 2f */, 0, 1))
			{
				__LIB_11__::func_59(uParam0, 51);
			}
			break;
	}
}

void func_1213(var uParam0)
{
	if (__LIB_4__::func_971(uParam0) > 0)
	{
		func_1825(Local_83, 0, 1048576);
		func_1825(Local_100, 26, 16384);
		func_1826(Local_117, -1100875244);
	}
}

void func_1214(var uParam0)
{
	if (__LIB_9__::func_178(&uLocal_2461) > ((90f + fLocal_2446) + (BUILTIN::TO_FLOAT(iLocal_2445) * 1.5f)))
	{
		__LIB_1__::func_561(&uLocal_2461);
		if (__LIB_11__::func_24(Global_35) < 192.5f)
		{
			__LIB_4__::func_952(uParam0, 30);
			__LIB_11__::func_66(uParam0, func_1557(2), "", 1, 0);
		}
		else if (iLocal_2468 == 11)
		{
			__LIB_4__::func_952(uParam0, 29);
		}
	}
}

void func_1215(var uParam0)
{
	int iVar0;
	switch (iLocal_2468)
	{
		case 0:
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
			if (func_1828(Local_83))
			{
				__LIB_10__::func_930(uParam0, Local_83, joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
				iLocal_2468 = 1;
			}
			break;
		case 1:
			if (func_1829())
			{
				__LIB_1__::func_727(Global_35, 1);
				TASK::SET_HIGH_FALL_TASK(Global_35, 1000, 5000, 0);
				iLocal_2468 = 12;
			}
			if (func_1831())
			{
				__LIB_11__::func_742(iLocal_365, 1);
				iLocal_2468 = 2;
			}
			TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_41, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &iVar0);
			if (iVar0 > iLocal_2445)
			{
				iLocal_2445 = iVar0;
			}
			if (func_1326(23))
			{
				if (func_1220(Global_35, sLocal_41, 10))
				{
					func_1224();
				}
			}
			if (func_1220(Global_35, sLocal_41, 42))
			{
				iLocal_2453 = __LIB_2__::func_403("NTS2_CTXT_PIK", joaat("INPUT_CONTEXT_X"), iLocal_358, 2, 1, 0, 0, 5, 2.33f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				__LIB_1__::func_221(iLocal_2453, 1, 1);
				__LIB_1__::func_382(iLocal_2453, 1, 1);
				__LIB_1__::func_574(&iLocal_2453, iLocal_358);
				__LIB_11__::func_342(1);
				__LIB_10__::func_935(uParam0, Local_83, 1);
				iLocal_405 = __LIB_8__::func_778(408396114, iLocal_358, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_405, "NTS2_SPOOL");
				func_1200(uParam0, 2, 1);
				iLocal_2468 = 3;
			}
			break;
		case 2:
			if (!func_1831())
			{
				__LIB_11__::func_742(iLocal_365, 0);
				iLocal_2468 = 1;
			}
			break;
		case 3:
			__LIB_1__::func_738(1, 0, 1, 1, 1, 1, 1);
			func_1834();
			__LIB_1__::func_448(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_358, true, false), 0, 20f, 15f, 7.5f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
			if (__LIB_0__::func_266(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_358, true, false), 2.33f, 1, 0))
			{
				HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_358, 2.33f, 3, 1, 0, "NTS2_SPOOL", 0);
				if (__LIB_0__::func_567(iLocal_2453, 1))
				{
					iLocal_2468 = 4;
				}
			}
			break;
		case 4:
			__LIB_1__::func_738(1, 0, 1, 1, 1, 1, 1);
			func_1834();
			func_1836();
			if (func_1837())
			{
				__LIB_0__::func_325(&iLocal_405);
				func_1838();
				__LIB_0__::func_769();
				__LIB_1__::func_281(&iLocal_2453, 1, 1);
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, iLocal_378, "ARTHUR", func_1839(), 1069379748 /* Float: 1.48f */, 1, 1, 20000, -1082130432 /* Float: -1f */);
				WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
				iLocal_2468 = 5;
			}
			break;
		case 5:
			__LIB_1__::func_738(1, 0, 1, 1, 1, 1, 1);
			func_1834();
			func_1836();
			if (func_1840() || func_1256(iLocal_378))
			{
				func_1841();
				PED::_SET_PED_CROUCH_MOVEMENT(Local_134[2 /*17*/], false, 0, false);
				TASK::OPEN_SEQUENCE_TASK(&(Local_134[2 /*17*/].f_5));
				__LIB_3__::func_638(0, func_204(0, 19), 1f, -1, 1048576000 /* Float: 0.25f */, 0);
				TASK::TASK_SET_CROUCH_MOVEMENT(0, true, 0, false);
				TASK::CLOSE_SEQUENCE_TASK(Local_134[2 /*17*/].f_5);
				TASK::TASK_PERFORM_SEQUENCE(Local_134[2 /*17*/], Local_134[2 /*17*/].f_5);
				TASK::CLEAR_SEQUENCE_TASK(&(Local_134[2 /*17*/].f_5));
				iLocal_2468 = 6;
			}
			break;
		case 6:
			__LIB_1__::func_738(1, 0, 1, 1, 1, 1, 1);
			func_1834();
			func_1836();
			func_1842(&(Local_263[0 /*10*/]), 1046898278 /* Float: 0.225f */, -1, 1);
			if (func_1256(iLocal_378))
			{
				Local_186[0 /*19*/].f_1 = __LIB_4__::func_983(408396114, func_780(15, 0), 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_186[0 /*19*/].f_1, "NTS2_DYNAMITE");
				func_1198(uParam0, 3, (12f + 3f));
				iLocal_2468 = 7;
			}
			break;
		case 7:
			__LIB_1__::func_738(1, 0, 1, 1, 1, 1, 1);
			func_1834();
			func_1836();
			func_1842(&(Local_263[0 /*10*/]), 1046898278 /* Float: 0.225f */, -1, 1);
			if (!__LIB_0__::func_491(Global_35, 1464580341))
			{
				if (__LIB_1__::func_374(Global_35, func_369(15, 0), 0.75f))
				{
					iLocal_2468 = 8;
				}
				else if (!__LIB_0__::func_491(Global_35, 1464580341))
				{
					TASK::TASK_TURN_PED_TO_FACE_COORD(Global_35, func_369(15, 0), 0);
				}
			}
			break;
		case 8:
			func_1844();
			if (func_1845(&iLocal_366, "script@story@NTS2@IG@IG1_WIRING@IG1_WIRING"))
			{
				if (__LIB_0__::func_266(Global_35, ENTITY::GET_ENTITY_COORDS(Local_186[iLocal_2444 /*19*/], true, false), 1.5f, 1, 0))
				{
					HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Local_186[iLocal_2444 /*19*/], 1.5f, 3, 1, 0, "NTS2_DYNAMITE", 0);
					if (__LIB_0__::func_266(Global_35, ENTITY::GET_ENTITY_COORDS(Local_186[iLocal_2444 /*19*/], true, false) - Vector(1f, 0.75f, 0f), (1.5f * 0.5f), 1, 0))
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 0f);
					}
					if (__LIB_5__::func_777(iLocal_2454, 1))
					{
						__LIB_1__::func_561(&uLocal_2458);
						func_1224();
						__LIB_1__::func_281(&iLocal_2454, 1, 1);
						__LIB_0__::func_325(&(Local_186[iLocal_2444 /*19*/].f_1));
						func_1846();
						func_1847(35f);
						func_1848(Local_186[iLocal_2444 /*19*/]);
						if (iLocal_2444 <= 0)
						{
							ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_366, "iSelection", 1, false);
						}
						else
						{
							ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_366, "iSelection", 2, false);
						}
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_366, Local_186[iLocal_2444 /*19*/].f_14, 0f, 0f, (func_951(15, iLocal_2444) - 90f), 2);
						TASK::TASK_ENTER_ANIM_SCENE(Global_35, iLocal_366, "player_zero", func_1849(ANIMSCENE::GET_ANIM_SCENE_INT(iLocal_366, "iSelection")), 1069379748 /* Float: 1.48f */, 1, 134, 20000, -1082130432 /* Float: -1f */);
						iLocal_2468 = 9;
					}
				}
			}
			break;
		case 9:
			func_1850();
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_366))
			{
				if (MAP::DOES_BLIP_EXIST(Local_186[iLocal_2444 /*19*/].f_1))
				{
					if (__LIB_11__::func_354(iLocal_366, func_1851(3)) || __LIB_11__::func_354(iLocal_366, func_1851(4)))
					{
						__LIB_0__::func_325(&(Local_186[iLocal_2444 /*19*/].f_1));
					}
				}
				if (iLocal_2444 < (Local_186 - 1))
				{
					if (!MAP::DOES_BLIP_EXIST(Local_186[iLocal_2444 + 1 /*19*/].f_1))
					{
						if ((func_1256(iLocal_366) || __LIB_11__::func_743(iLocal_366, func_1851(3), 3f)) || __LIB_11__::func_743(iLocal_366, func_1851(4), 3f))
						{
							Local_186[iLocal_2444 + 1 /*19*/].f_1 = __LIB_4__::func_983(408396114, func_780(15, iLocal_2444 + 1), 1);
							MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_186[iLocal_2444 + 1 /*19*/].f_1, "NTS2_DYNAMITE");
						}
					}
				}
				if (iLocal_2444 >= (Local_186 - 1))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_366, false))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_366, "bEndSpool", true, false);
						func_1854();
						__LIB_1__::func_561(&uLocal_2458);
						func_1295();
						__LIB_11__::func_59(uParam0, 9);
						iLocal_2468 = 10;
					}
				}
				else if (func_1256(iLocal_366))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_366);
					func_1855();
					Local_186[iLocal_2444 /*19*/].f_18 = 1;
					iLocal_2444++;
					iLocal_2468 = 8;
				}
			}
			break;
		case 10:
			func_1850();
			if (func_1256(iLocal_366))
			{
				func_1838();
				__LIB_11__::func_342(2);
				__LIB_10__::func_930(uParam0, Local_83, joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
				func_1198(uParam0, 4, 12f);
				iLocal_2468 = 11;
			}
			break;
		case 11:
			TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_36, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &iVar0);
			if (iVar0 > iLocal_2445)
			{
				iLocal_2445 = iVar0;
			}
			break;
		case 12:
			__LIB_4__::func_89(&uLocal_59, 0);
			if (__LIB_9__::func_178(&uLocal_59) > 1f)
			{
				__LIB_1__::func_864(Global_35, 0, 0);
			}
			break;
	}
}

void func_1216()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	struct<15> Var9;
	switch (iLocal_2467)
	{
		case 0:
			func_1856();
			if (func_1220(Local_83, sLocal_41, 8) && !func_1831())
			{
				func_1857();
				ANIMSCENE::START_ANIM_SCENE(iLocal_365);
				iLocal_2467 = 1;
			}
			break;
		case 1:
			func_1856();
			if (func_1256(iLocal_365) || func_1220(Local_83, sLocal_41, 43))
			{
				TASK::_0xDE0C8B145EA466FF(Local_83, 5f, 3.5f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1.5f);
				iLocal_2467 = 2;
			}
			break;
		case 2:
			func_1856();
			if (func_1403(Local_83, sLocal_41) || func_1220(Local_83, sLocal_41, 44))
			{
				func_1858();
				TASK::TASK_LOOK_AT_COORD(Local_83, func_1798(func_476(15, iLocal_2443), vLocal_2449), BUILTIN::FLOOR(8f) * 1000, 0, 51, 0);
				TASK::TASK_GO_STRAIGHT_TO_COORD(Local_83, func_1798(func_476(15, iLocal_2443), vLocal_2449), 1.5f, 20000, 40000f, 1056964608 /* Float: 0.5f */, 1);
				iLocal_2467 = 3;
			}
			break;
		case 3:
			if (func_1845(&iLocal_367, "script@story@NTS2@IG@IG2_PLANT@IG2_PLANT"))
			{
				if (!__LIB_0__::func_491(Local_83, 713668775))
				{
					if (__LIB_0__::func_94(Local_83, Local_186[iLocal_2443 /*19*/].f_2, 0) <= 0.25f)
					{
						iLocal_2467 = 4;
					}
					else
					{
						vVar0 = { func_1798(func_476(15, iLocal_2443), vLocal_382) };
						vVar3 = { func_1798(func_476(15, iLocal_2443), vLocal_382 * Vector(4f, 4f, 4f)) };
						vVar0.f_2 = (__LIB_11__::func_744(vVar3) + 1.1f);
						Local_186[iLocal_2443 /*19*/].f_14 = { vVar0 };
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_367, vVar0, 0f, 0f, (func_951(15, iLocal_2443) - 90f), 2);
						if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_367, "pbl_enter_to_stand"))
						{
							if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_367, "CS_Dutch", &(Local_186[iLocal_2443 /*19*/].f_2), true, "pbl_enter_to_stand", 2))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_83, Local_186[iLocal_2443 /*19*/].f_2, 1.5f, 20000, 0.25f, 4194304, Local_186[iLocal_2443 /*19*/].f_2.f_3.f_2);
							}
						}
					}
				}
			}
			break;
		case 4:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_186[iLocal_2443 /*19*/]))
			{
				Local_186[iLocal_2443 /*19*/] = OBJECT::CREATE_OBJECT(iLocal_17, func_780(15, iLocal_2443), true, true, false, false, true);
				func_1861(Local_186[iLocal_2443 /*19*/]);
				__LIB_11__::func_22(iLocal_367);
			}
			else if (__LIB_11__::func_354(iLocal_367, "pbl_prep_dynamite_loop_01") || __LIB_11__::func_354(iLocal_367, "pbl_prep_dynamite_loop_02"))
			{
				__LIB_4__::func_89(&(Local_83.f_6), 0);
				__LIB_4__::func_89(&uLocal_2464, 0);
				iLocal_2467 = 5;
			}
			break;
		case 5:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_367))
			{
				if (func_1862())
				{
					__LIB_1__::func_561(&(Local_83.f_6));
					__LIB_1__::func_561(&uLocal_2464);
					func_1863();
					iLocal_2467 = 7;
				}
				else if (func_1864())
				{
					__LIB_1__::func_561(&uLocal_2464);
					ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_367, "iSelection", MISC::GET_RANDOM_INT_IN_RANGE(1, 3), false);
					iLocal_2467 = 6;
				}
			}
			break;
		case 6:
			if (__LIB_11__::func_354(iLocal_367, "pbl_prep_dynamite_loop_01") || __LIB_11__::func_354(iLocal_367, "pbl_prep_dynamite_loop_02"))
			{
				__LIB_4__::func_89(&uLocal_2464, 0);
				fLocal_2452 = MISC::GET_RANDOM_FLOAT_IN_RANGE(8f, 15f);
				iLocal_2467 = 5;
			}
			break;
		case 7:
			if (__LIB_11__::func_25(iLocal_367, 2f))
			{
				Local_186[iLocal_2443 /*19*/].f_17 = 1;
				iLocal_2454 = __LIB_2__::func_403("NTS2_CTXT_WRE", joaat("INPUT_CONTEXT_Y"), Local_186[iLocal_2443 /*19*/], 3, 0, 0, 0, 0, 1.5f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				__LIB_1__::func_221(iLocal_2454, 1, 1);
				__LIB_1__::func_574(&iLocal_2454, Local_186[iLocal_2443 /*19*/]);
				iLocal_2467 = 8;
			}
			break;
		case 8:
			if (func_1256(iLocal_367))
			{
				if (func_1194())
				{
					func_1865(0);
					ENTITY::FREEZE_ENTITY_POSITION(Local_186[iLocal_2443 /*19*/], true);
					ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_367);
					if (iLocal_2443 >= (Local_186 - 1))
					{
						TASK::TASK_GO_STRAIGHT_TO_COORD(Local_83, func_369(1, 3), 1.5f, 20000, 40000f, 1056964608 /* Float: 0.5f */, 1);
						iLocal_2467 = 9;
					}
					else
					{
						iLocal_2443++;
						TASK::TASK_GO_STRAIGHT_TO_COORD(Local_83, func_1798(func_476(15, iLocal_2443), vLocal_2449), 1.5f, 20000, 40000f, 1056964608 /* Float: 0.5f */, 1);
						iLocal_2467 = 3;
					}
				}
			}
			break;
		case 9:
			if (func_1845(&iLocal_367, "script@story@NTS2@IG@IG2_PLANT@IG2_PLANT"))
			{
				if (!__LIB_0__::func_491(Local_83, 713668775))
				{
					if (__LIB_0__::func_94(Local_83, Local_2485, 0) <= 0.25f)
					{
						func_1866();
						__LIB_11__::func_22(iLocal_367);
						iLocal_2467 = 10;
					}
					else
					{
						vVar6 = { func_369(1, 3) };
						MISC::GET_GROUND_Z_FOR_3D_COORD(vVar6, &(vVar6.f_2), false);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_367, "bEnd", true, false);
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_367, vVar6, 0f, 0f, (func_1867(1, 3) + 90f), 2);
						if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_367, "pbl_final_exit_dynamite"))
						{
							if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_367, "CS_Dutch", &Local_2485, true, "pbl_final_exit_dynamite", 2))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_83, Local_2485, 1.5f, 20000, 0.25f, 4194304, Local_2485.f_3.f_2);
							}
						}
					}
				}
			}
			break;
		case 10:
			if (func_1256(iLocal_367))
			{
				func_1868();
				ENTITY::_0x9587913B9E772D29(iLocal_360, 0);
				__LIB_11__::func_738(Local_83);
				TASK::TASK_LOOK_AT_ENTITY(Local_83, Global_35, -1, 0, 51, 0);
				TASK::OPEN_SEQUENCE_TASK(&(Local_83.f_5));
				__LIB_3__::func_638(0, func_204(0, 9), 1f, 20000, 1048576000 /* Float: 0.25f */, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				TASK::CLOSE_SEQUENCE_TASK(Local_83.f_5);
				TASK::TASK_PERFORM_SEQUENCE(Local_83, Local_83.f_5);
				TASK::CLEAR_SEQUENCE_TASK(&(Local_83.f_5));
				iLocal_2467 = 11;
			}
			break;
		case 11:
			if (iLocal_2468 >= 11)
			{
				TASK::CLEAR_PED_TASKS(Local_83, true, false);
				TASK::CLEAR_PED_SECONDARY_TASK(Local_83);
				iLocal_2467 = 12;
			}
			break;
		case 12:
			func_1870(Local_83, Global_35, sLocal_36, __LIB_0__::func_667(5f, 10f, func_1869(Local_83, sLocal_36)), 20f, 1, 1, 2f, 1f, 2f, 1);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_83, 2f);
			if (__LIB_0__::func_266(Local_83, func_369(0, 6), 12f, 1, 1))
			{
				iLocal_2467 = 13;
			}
			else if (!__LIB_0__::func_491(Local_83, 242628503))
			{
				Var9.f_2 = -1;
				Var9.f_7 = -1;
				Var9.f_8 = -1082130432;
				Var9.f_12 = -1082130432;
				Var9.f_13 = 1;
				Var9.f_14 = -1082130432;
				Var9.f_1 = 5;
				Var9.f_3 = 67128320;
				Var9.f_12 = 2f;
				Var9 = sLocal_36;
				TASK::OPEN_SEQUENCE_TASK(&(Local_83.f_5));
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(0, &Var9);
				TASK::TASK_SET_CROUCH_MOVEMENT(0, true, 0, false);
				__LIB_3__::func_638(0, func_204(0, 6), 1f, 20000, 1048576000 /* Float: 0.25f */, 4194304);
				TASK::CLOSE_SEQUENCE_TASK(Local_83.f_5);
				TASK::TASK_PERFORM_SEQUENCE(Local_83, Local_83.f_5);
				TASK::CLEAR_SEQUENCE_TASK(&(Local_83.f_5));
			}
			if (func_1326(23))
			{
				if (func_1220(Global_35, sLocal_36, 5))
				{
					func_1224();
				}
			}
			break;
		case 13:
			__LIB_1__::func_448(Local_83, func_369(0, 6), 0, 7.5f, 5f, 2.5f, 0.5f, 1, 1, 1, 0);
			if ((!__LIB_0__::func_266(Local_83, func_369(0, 6), 1f, 1, 1) && !__LIB_0__::func_491(Local_83, 713668775)) && !__LIB_0__::func_491(Local_83, 242628503))
			{
				__LIB_3__::func_638(Local_83, func_204(0, 6), 1f, 20000, 1048576000 /* Float: 0.25f */, 4194304);
			}
			break;
	}
}

void func_1217()
{
	float fVar0;
	if (__LIB_0__::func_272(Global_35, 0) && __LIB_0__::func_272(Local_83, 0))
	{
		if (iLocal_2467 <= 8 && bLocal_401)
		{
			fVar0 = (TASK::_0x3ACC128510142B9D(sLocal_51, ENTITY::GET_ENTITY_COORDS(Local_83, true, false)) - TASK::_0x3ACC128510142B9D(sLocal_51, ENTITY::GET_ENTITY_COORDS(Global_35, true, false)));
			if (fVar0 < 1f)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 0f);
			}
		}
	}
}

void func_1218(int iParam0)
{
	if (__LIB_0__::func_272(iParam0, 0) && __LIB_0__::func_272(Global_35, 0))
	{
		if (__LIB_0__::func_491(iParam0, -1098463898))
		{
			if ((PED::_0xB7DBB2986B87E230(iParam0, (1000f * 0.001f)) && __LIB_0__::func_48(iParam0, Global_35, 3f, 1)) || PED::_0x9C81338B2E62CE0A(PLAYER::GET_PLAYER_INDEX(), iParam0, 1000))
			{
				if (!TASK::_0x916B8E075ABC8B4E(iParam0, 1))
				{
					TASK::_0xE7FA07624574B79A(iParam0, Global_35, 3, 2, 5f, 1, 0, 0, 0);
				}
			}
		}
	}
}

bool func_1220(int iParam0, char* sParam1, int iParam2)
{
	int iVar0;
	if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), &iVar0))
	{
		return iVar0 >= iParam2;
	}
	return false;
}

void func_1224()
{
	if (__LIB_0__::func_899(&uLocal_77))
	{
		__LIB_1__::func_561(&uLocal_77);
	}
}

void func_1228()
{
	__LIB_1__::func_561(&uLocal_59);
	__LIB_1__::func_561(&uLocal_62);
	__LIB_1__::func_561(&uLocal_65);
	__LIB_1__::func_561(&uLocal_68);
	__LIB_1__::func_561(&uLocal_71);
	__LIB_1__::func_561(&uLocal_74);
	__LIB_1__::func_561(&uLocal_77);
	__LIB_1__::func_561(&uLocal_80);
}

bool func_1233(bool bParam0)
{
	func_1875(&Local_429, 3, -1071644672 /* Float: -2.5f */);
	if (!func_1876(func_369(1, 1)))
	{
		return false;
	}
	if (!func_1877(&(Local_429[0 /*26*/]), func_204(1, 1), func_204(10, 9), func_204(2, 8), joaat("WEAPON_RIFLE_SPRINGFIELD"), 0f, 1, 1, !bParam0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_429[1 /*26*/]), func_204(1, 1), func_204(10, 23), func_204(2, 9), joaat("WEAPON_REVOLVER_CATTLEMAN"), 0f, 1, 1, 1, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_429[2 /*26*/]), func_204(1, 1), func_204(10, 4), func_204(2, 10), joaat("WEAPON_RIFLE_SPRINGFIELD"), 0f, 1, 1, !bParam0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_429[3 /*26*/]), func_204(1, 1), func_204(10, 14), func_204(2, 11), joaat("WEAPON_SHOTGUN_PUMP"), 0, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_429[4 /*26*/]), func_204(1, 1), func_204(10, 13), func_204(2, 12), joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 0, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_429[5 /*26*/]), func_204(1, 1), func_204(10, 10), func_204(2, 13), joaat("WEAPON_SHOTGUN_PUMP"), 0, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_429[6 /*26*/]), func_204(1, 1), func_204(10, 2), func_204(2, 14), joaat("WEAPON_REPEATER_CARBINE"), 0, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_429[7 /*26*/]), func_204(1, 1), func_204(10, 6), func_204(2, 15), joaat("WEAPON_REPEATER_CARBINE"), 0, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_429[8 /*26*/]), func_204(1, 1), func_204(10, 7), func_204(2, 16), joaat("WEAPON_REPEATER_CARBINE"), 0, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_429[9 /*26*/]), func_204(1, 1), func_204(10, 8), func_204(2, 17), joaat("WEAPON_RIFLE_BOLTACTION"), 0, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_429[10 /*26*/]), func_204(1, 1), func_204(10, 21), func_204(2, 18), joaat("WEAPON_RIFLE_BOLTACTION"), 0, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_429[11 /*26*/]), func_204(1, 1), func_204(10, 22), func_204(2, 19), joaat("WEAPON_RIFLE_BOLTACTION"), 0, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	vLocal_314[0 /*3*/].f_1 = "NTS2_SOLDIER1";
	vLocal_314[1 /*3*/].f_1 = "NTS2_SOLDIER2";
	vLocal_314[2 /*3*/].f_1 = "NTS2_SOLDIER3";
	vLocal_314[0 /*3*/].f_2 = "NTS2_SHOUTA1";
	vLocal_314[1 /*3*/].f_2 = "NTS2_SHOUTA2";
	vLocal_314[2 /*3*/].f_2 = "NTS2_SHOUTA3";
	return true;
}

void func_1236(int iParam0, int iParam1)
{
	if (!__LIB_3__::func_411(iParam0, joaat("MASKS"), 0))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam0, iParam1);
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_1237()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_368, "A_M_M_WAPWARRIORS_01", Local_134[2 /*17*/], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_368, "CS_EagleFlies", Local_100, 0);
}

void func_1238(int iParam0)
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "CS_Dutch", Local_83, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "p_bombswitchopen01x", iLocal_359, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "player_zero", Global_35, 0);
}

bool func_1239()
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(Global_35))
		{
			return false;
		}
	}
	if (__LIB_0__::func_272(Local_83, 0))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(Local_83))
		{
			return false;
		}
	}
	if (__LIB_0__::func_272(Local_100, 0))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(Local_100))
		{
			return false;
		}
	}
	if (__LIB_0__::func_272(Local_117, 0))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(Local_117))
		{
			return false;
		}
	}
	if (__LIB_0__::func_272(Local_134[0 /*17*/], 0))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(Local_134[0 /*17*/]))
		{
			return false;
		}
	}
	if (__LIB_0__::func_272(Local_134[1 /*17*/], 0))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(Local_134[1 /*17*/]))
		{
			return false;
		}
	}
	if (__LIB_0__::func_272(Local_134[2 /*17*/], 0))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(Local_134[2 /*17*/]))
		{
			return false;
		}
	}
	return true;
}

void func_1240(bool bParam0)
{
	PED::SET_PED_CONFIG_FLAG(iLocal_351, 136, bParam0);
	PED::SET_PED_CONFIG_FLAG(Local_83.f_1, 136, bParam0);
}

void func_1243(var uParam0)
{
	switch (__LIB_4__::func_979(uParam0))
	{
		case 1:
			if (func_1256(iLocal_368))
			{
				if (func_1823(uParam0, "NTS2_02_SIGNAL", 0, 1073741824 /* Float: 2f */, 0, 1))
				{
					__LIB_11__::func_59(uParam0, 2);
				}
			}
			break;
		case 2:
			if (func_1823(uParam0, "NTS2_02_HOLD", 2.5f, 1073741824 /* Float: 2f */, 0, 1))
			{
				__LIB_11__::func_59(uParam0, 3);
			}
			break;
		case 3:
			if (func_1220(Local_429[1 /*26*/], cLocal_45, 184))
			{
				if (func_1823(uParam0, "NTS2_02_PROMPT", 0, 1073741824 /* Float: 2f */, 1, 0))
				{
					func_1198(uParam0, 7, 1f);
					__LIB_11__::func_59(uParam0, 51);
				}
			}
			break;
	}
}

void func_1244(var uParam0)
{
	switch (iLocal_2502)
	{
		case 0:
			iLocal_2498 = __LIB_2__::func_403("NTS2_CTXT_DET", joaat("INPUT_CONTEXT_ACTION"), iLocal_359, 3, 0, 0, 0, 0, 2.5f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
			__LIB_1__::func_221(iLocal_2498, 0, 1);
			__LIB_1__::func_382(iLocal_2498, 1, 1);
			__LIB_1__::func_574(&iLocal_2498, iLocal_359);
			iLocal_2502 = 1;
			break;
		case 1:
			if (__LIB_0__::func_266(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_359, true, false), 2.5f, 1, 0))
			{
				__LIB_0__::func_325(&iLocal_405);
				func_1224();
				if (func_1220(Local_429[1 /*26*/], cLocal_45, 184))
				{
					func_1200(uParam0, 7, 0);
				}
				else
				{
					func_1200(uParam0, 6, 0);
				}
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				iLocal_2502 = 2;
			}
			else
			{
				if (!MAP::DOES_BLIP_EXIST(iLocal_405))
				{
					func_1198(uParam0, 8, 2.5f);
					iLocal_405 = MAP::_BLIP_ADD_FOR_ENTITY(203020899, iLocal_359);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_405, "NTS2_DETONATOR");
				}
				if (!__LIB_0__::func_266(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_359, true, false), 30f, 1, 0))
				{
					__LIB_11__::func_66(uParam0, "NTS2_ABANDONED_GANG", "", 1, 0);
				}
			}
			break;
		case 2:
			HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_359, 2.5f, 3, 1, 0, "NTS2_DETONATOR", 0);
			if (!__LIB_0__::func_266(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_359, true, false), 2.5f, 1, 0))
			{
				iLocal_2502 = 1;
			}
			break;
	}
}

void func_1245(var uParam0)
{
	if (__LIB_4__::func_971(uParam0) > 2)
	{
		CAM::_0xE296208C273BD7F0(1000, -1, 0, 17, 1, 0);
	}
}

void func_1246()
{
	if (!bLocal_2497)
	{
		if (__LIB_11__::func_743(iLocal_369, "pbl_idle_crouch", 1f) || __LIB_11__::func_743(iLocal_369, "pbl_idle_stand", 0.9f))
		{
			bLocal_2497 = true;
			PAD::SET_PAD_SHAKE(0, 250, 256);
		}
	}
}

bool func_1247(int iParam0, char* sParam1, int iParam2, float fParam3, int iParam4)
{
	int iVar0;
	if (!func_1403((*iParam0)[iParam2 /*26*/], sParam1))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= (*iParam0 - 1))
		{
			if (__LIB_0__::func_272((*iParam0)[iVar0 /*26*/], 0))
			{
				if (iVar0 == iParam2)
				{
					if (!__LIB_0__::func_491((*iParam0)[iVar0 /*26*/], 658540077) && !__LIB_0__::func_491((*iParam0)[iVar0 /*26*/], 1233890275))
					{
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET((*iParam0)[iVar0 /*26*/], sParam1, (iParam0[iVar0 /*26*/])->f_18, 0, 18440, -1, iParam4);
					}
					TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO((*iParam0)[iVar0 /*26*/], fParam3);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO((*iParam0)[iVar0 /*26*/], fParam3);
					if (__LIB_0__::func_272((iParam0[iVar0 /*26*/])->f_1, 0))
					{
						TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO((iParam0[iVar0 /*26*/])->f_1, fParam3);
						PED::SET_PED_MAX_MOVE_BLEND_RATIO((iParam0[iVar0 /*26*/])->f_1, fParam3);
					}
				}
				else if (!__LIB_0__::func_491((*iParam0)[iVar0 /*26*/], 658540077) && !__LIB_0__::func_491((*iParam0)[iVar0 /*26*/], 1233890275))
				{
					TASK::TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET((*iParam0)[iVar0 /*26*/], (*iParam0)[iParam2 /*26*/], sParam1, (iParam0[iVar0 /*26*/])->f_18, (iParam0[iVar0 /*26*/])->f_18.f_1, 0, 18440, -1, iParam4);
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_1887(iParam0);
		return true;
	}
	return false;
}

int func_1250()
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	return 5;
}

char* func_1251(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "pbl_idle_crouch";
		case 2:
			return "pbl_idle_stand";
		default:
			break;
	}
	return "";
}

bool func_1256(int iParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (!ANIMSCENE::_0x34A0671BE613D3D0(iParam0) && !ANIMSCENE::_0xD70C7A30412F8FA0(iParam0))
		{
			if ((ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iParam0) || ANIMSCENE::_0xF94692EB9DC15D74(iParam0, 0)) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iParam0, false))
			{
				return true;
			}
		}
	}
	return false;
}

void func_1258()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_263 - 1))
	{
		func_1889(Local_263[iVar0 /*10*/]);
		iVar0++;
	}
}

void func_1259(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_272((*iParam0)[iVar0 /*26*/], 0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*iParam0)[iVar0 /*26*/], bParam1);
		}
		iVar0++;
	}
}

void func_1260(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_272((*iParam0)[iVar0 /*26*/], 0))
		{
			ENTITY::SET_ENTITY_PROOFS((*iParam0)[iVar0 /*26*/], iParam1, false);
		}
		if (__LIB_0__::func_272((iParam0[iVar0 /*26*/])->f_1, 0))
		{
			ENTITY::SET_ENTITY_PROOFS((iParam0[iVar0 /*26*/])->f_1, iParam1, false);
		}
		iVar0++;
	}
}

void func_1261(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_272((*iParam0)[iVar0 /*26*/], 0))
		{
			ENTITY::SET_ENTITY_INVINCIBLE((*iParam0)[iVar0 /*26*/], bParam1);
		}
		if (__LIB_0__::func_272((iParam0[iVar0 /*26*/])->f_1, 0))
		{
			ENTITY::SET_ENTITY_INVINCIBLE((iParam0[iVar0 /*26*/])->f_1, bParam1);
		}
		iVar0++;
	}
}

void func_1263()
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(Local_186[(Local_186 - 1) /*19*/]))
	{
		__LIB_4__::func_89(&uLocal_2657, 0);
		if (__LIB_9__::func_178(&uLocal_2657) > 0.15f)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 <= (Local_186 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_186[iVar0 /*19*/]))
				{
					__LIB_1__::func_561(&uLocal_2657);
					func_1890(&(Local_186[iVar0 /*19*/]));
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_1264()
{
	func_1875(&Local_742, 3, -1071644672 /* Float: -2.5f */);
	if (!func_1876(func_369(2, 6)))
	{
		return false;
	}
	if (!func_1877(&(Local_742[0 /*26*/]), func_204(2, 6), func_204(10, 15), func_204(2, 20), joaat("WEAPON_REPEATER_CARBINE"), 0, 1, 0, 0, 0, 120, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_742[1 /*26*/]), func_204(2, 6), func_204(10, 17), func_204(2, 21), joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, 1, 1, 0, 0, 120, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_742[2 /*26*/]), func_204(2, 6), func_204(10, 19), func_204(2, 22), joaat("WEAPON_REPEATER_CARBINE"), 0, 1, 0, 0, 0, 120, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_742[3 /*26*/]), func_204(2, 6), func_204(10, 16), func_204(2, 23), joaat("WEAPON_RIFLE_BOLTACTION"), 0, 1, 0, 0, 0, 120, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_742[4 /*26*/]), func_204(2, 6), func_204(10, 18), func_204(2, 24), joaat("WEAPON_RIFLE_BOLTACTION"), 0, 1, 0, 0, 0, 120, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_742[5 /*26*/]), func_204(2, 6), func_204(10, 20), func_204(2, 25), joaat("WEAPON_RIFLE_BOLTACTION"), 0, 1, 0, 0, 0, 120, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	return true;
}

void func_1265(var uParam0)
{
	__LIB_8__::func_806(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_83, "dutch", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_100, "EagleFlies", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_117, "PAYTAH", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_134[0 /*17*/], "A_M_M_WAPWARRIORS_01", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_134[1 /*17*/], "A_M_M_WAPWARRIORS_01^1", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_134[2 /*17*/], "A_M_M_WAPWARRIORS_01^2", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_429[0 /*26*/].f_1, "Horse_01^2", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_429[1 /*26*/].f_1, "Horse_01", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_429[2 /*26*/].f_1, "Horse_01^1", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_429[0 /*26*/], "S_M_M_ARMY_01^1", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_429[1 /*26*/], "S_M_M_ARMY_01", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_429[2 /*26*/], "S_M_M_ARMY_01^2", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_429[3 /*26*/], "S_M_Y_Army_01^2", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_429[4 /*26*/], "S_M_Y_Army_01^1", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_429[5 /*26*/], "S_M_Y_Army_01", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_429[6 /*26*/], "S_M_Y_Army_01^3", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_429[7 /*26*/], "S_M_Y_Army_01^4", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_429[8 /*26*/], "S_M_Y_Army_01^5", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_429[9 /*26*/], "S_M_Y_Army_01^6", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_429[10 /*26*/], "S_M_Y_Army_01^7", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_429[11 /*26*/], "S_M_Y_Army_01^8", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_742[0 /*26*/], "S_M_Y_Army_01^10", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_742[1 /*26*/], "S_M_M_ARMY_01^3", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_742[2 /*26*/], "S_M_Y_Army_01^9", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_742[3 /*26*/], "S_M_Y_Army_01^13", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_742[4 /*26*/], "S_M_Y_Army_01^12", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_742[5 /*26*/], "S_M_Y_Army_01^11", 0, 0, 0, 0);
	__LIB_5__::func_580(uParam0, iLocal_352, "UTILLIWAG", 0, 0, 0, 0);
	__LIB_5__::func_580(uParam0, iLocal_356, "p_cs_bucket01x", 0, 0, 0, 0);
	__LIB_5__::func_580(uParam0, iLocal_357, "p_cs_vegsack_up", 0, 0, 0, 0);
}

bool func_1266(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*26*/]))
		{
			if (!PED::_0xA0BC8FAED8CFEB3C((*iParam0)[iVar0 /*26*/]))
			{
				return false;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST((iParam0[iVar0 /*26*/])->f_1))
		{
			if (!PED::_0xA0BC8FAED8CFEB3C((iParam0[iVar0 /*26*/])->f_1))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_1267(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (bParam1)
		{
			if (bParam3)
			{
				fVar1 = __LIB_0__::func_152((iParam0[iVar0 /*26*/])->f_12, (iParam0[iVar0 /*26*/])->f_8, 1);
			}
			else
			{
				fVar1 = (iParam0[iVar0 /*26*/])->f_12.f_3;
			}
		}
		else if (bParam3)
		{
			fVar1 = __LIB_0__::func_152((iParam0[iVar0 /*26*/])->f_8, (iParam0[iVar0 /*26*/])->f_12, 1);
		}
		else
		{
			fVar1 = (iParam0[iVar0 /*26*/])->f_8.f_3;
		}
		if (bParam2)
		{
			if (bParam1)
			{
				vVar2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS((iParam0[iVar0 /*26*/])->f_12, (iParam0[iVar0 /*26*/])->f_12.f_3, 0f, -fParam4, 50f) };
			}
			else
			{
				vVar2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS((iParam0[iVar0 /*26*/])->f_8, (iParam0[iVar0 /*26*/])->f_8.f_3, 0f, -fParam4, 50f) };
			}
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar2, &(vVar2.f_2), false);
		}
		else if (bParam1)
		{
			vVar2 = { (iParam0[iVar0 /*26*/])->f_12 };
		}
		else
		{
			vVar2 = { (iParam0[iVar0 /*26*/])->f_8 };
		}
		if (PED::IS_PED_ON_MOUNT((*iParam0)[iVar0 /*26*/]))
		{
			func_870((iParam0[iVar0 /*26*/])->f_1, vVar2, fVar1, 2, 1073741824 /* Float: 2f */);
		}
		else
		{
			func_870((*iParam0)[iVar0 /*26*/], vVar2, fVar1, 2, 1073741824 /* Float: 2f */);
		}
		iVar0++;
	}
}

void func_1271()
{
	sLocal_2514[1] = "NTS2_03_SHOUTP";
	sLocal_2514[2] = "NTS2_03_SHOUTB1";
	sLocal_2514[3] = "NTS2_03_SHOUTB2";
	sLocal_2514[4] = "NTS2_03_SHOUTB3";
	sLocal_2514[5] = "NTS2_03_SHOUTEF";
}

void func_1272(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		func_1892(*(iParam0[iVar0 /*26*/]), iParam1, iParam2, iParam3);
		iVar0++;
	}
}

void func_1273(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (__LIB_0__::func_272(iParam0, 0))
	{
		iVar0 = __LIB_0__::func_399(iParam0, 1, 0, 1);
		if (iVar0 != iParam1)
		{
			__LIB_1__::func_766(iParam0, iParam1, 1, 0, 0, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iParam1, true, 0, false, false);
			if (iParam2 != 0)
			{
				__LIB_1__::func_766(iParam0, iParam2, 1, 0, 1, 1, 1, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iParam2, true, 1, false, false);
			}
		}
	}
}

void func_1274(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_134 - 1))
	{
		if (__LIB_0__::func_272(Local_134[iVar0 /*17*/], 0))
		{
			if (bParam0)
			{
				PED::SET_PED_COMBAT_MOVEMENT(Local_134[iVar0 /*17*/], 0);
			}
			else
			{
				PED::SET_PED_COMBAT_MOVEMENT(Local_134[iVar0 /*17*/], 1);
			}
		}
		iVar0++;
	}
	if (__LIB_0__::func_272(Local_83, 0))
	{
		if (bParam0)
		{
			PED::SET_PED_COMBAT_MOVEMENT(Local_83, 0);
		}
		else
		{
			PED::SET_PED_COMBAT_MOVEMENT(Local_83, 1);
		}
	}
	if (__LIB_0__::func_272(Local_100, 0))
	{
		if (bParam0)
		{
			PED::SET_PED_COMBAT_MOVEMENT(Local_100, 0);
		}
		else
		{
			PED::SET_PED_COMBAT_MOVEMENT(Local_100, 1);
		}
	}
	if (__LIB_0__::func_272(Local_117, 0))
	{
		if (bParam0)
		{
			PED::SET_PED_COMBAT_MOVEMENT(Local_117, 0);
		}
		else
		{
			PED::SET_PED_COMBAT_MOVEMENT(Local_117, 1);
		}
	}
}

void func_1275()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_356))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_356, false);
		PHYSICS::ACTIVATE_PHYSICS(iLocal_356);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_357))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_357, false);
		PHYSICS::ACTIVATE_PHYSICS(iLocal_357);
	}
}

void func_1276(var uParam0)
{
	switch (__LIB_4__::func_979(uParam0))
	{
		case 1:
			if (func_1823(uParam0, "NTS2_03_DEFBNT1", 0, 1073741824 /* Float: 2f */, 0, 0))
			{
				func_1198(uParam0, 9, 5f);
				__LIB_11__::func_59(uParam0, 2);
			}
			break;
		case 2:
			if (func_1326(23))
			{
				if (__LIB_0__::func_272(Global_35, 0))
				{
					if (PED::IS_PED_SHOOTING(Global_35))
					{
						func_1224();
					}
				}
			}
			else
			{
				__LIB_11__::func_59(uParam0, 3);
			}
			break;
		case 3:
			if (func_1823(uParam0, "NTS2_03_COMBAT", 2.5f, 1073741824 /* Float: 2f */, 0, 1))
			{
				__LIB_11__::func_59(uParam0, -1);
			}
			break;
		case 4:
			if (func_1823(uParam0, "NTS2_03_UPTOP", 5f, 1073741824 /* Float: 2f */, 0, 0))
			{
				__LIB_11__::func_59(uParam0, 5);
			}
			break;
		case 5:
			if (iLocal_2521 >= 6)
			{
				if (iLocal_2522 >= 6)
				{
					if (func_1823(uParam0, "NTS2_03_FLEE", 2.5f, 1073741824 /* Float: 2f */, 0, 0))
					{
						__LIB_11__::func_59(uParam0, 51);
					}
				}
			}
			break;
	}
}

void func_1277(var uParam0)
{
	__LIB_4__::func_89(&uLocal_2666, 0);
	if (__LIB_9__::func_178(&uLocal_2666) > fLocal_2513)
	{
		if (iLocal_2523 == 0)
		{
			iLocal_2523 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
		}
		else if (__LIB_5__::func_314(uParam0, sLocal_2514[iLocal_2523], 0))
		{
			__LIB_1__::func_561(&uLocal_2666);
			iLocal_2523 = 0;
			fLocal_2513 = MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 8f);
		}
		else if (__LIB_9__::func_178(&uLocal_2666) > (fLocal_2513 + 1f))
		{
			iLocal_2523 = 0;
		}
	}
}

void func_1278(var uParam0)
{
	var uVar0;
	switch (iLocal_2521)
	{
		case 0:
			func_1895(&Local_742, 1);
			iLocal_2521 = 2;
			break;
		case 2:
			if (iLocal_2522 >= 3)
			{
				__LIB_4__::func_89(&uLocal_2660, 0);
				if ((func_1896(&Local_742) && __LIB_9__::func_178(&uLocal_2660) > 7.5f) || __LIB_9__::func_178(&uLocal_2660) > 20f)
				{
					PED::SET_PED_COMBAT_MOVEMENT(Local_134[2 /*17*/], 1);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_134[2 /*17*/], func_369(11, 14), 3f, false, 0, 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_134[2 /*17*/], func_369(11, 13), 3f, false, 1, 0);
					TASK::OPEN_SEQUENCE_TASK(&(Local_134[2 /*17*/].f_5));
					TASK::TASK_PAUSE(0, 1000);
					TASK::TASK_SEEK_COVER_TO_COORDS(0, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_134[2 /*17*/], false), func_369(11, 14), 2500, 1, 0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, func_369(11, 7), 30f, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(Local_134[2 /*17*/].f_5);
					TASK::TASK_PERFORM_SEQUENCE(Local_134[2 /*17*/], Local_134[2 /*17*/].f_5);
					TASK::CLEAR_SEQUENCE_TASK(&(Local_134[2 /*17*/].f_5));
					func_1897(&(Local_742[0 /*26*/]), func_204(11, 0), 1);
					func_1897(&(Local_742[1 /*26*/]), func_204(11, 1), 1);
					func_1897(&(Local_742[2 /*26*/]), func_204(11, 2), 1);
					func_1897(&(Local_742[3 /*26*/]), func_204(11, 3), 1);
					func_1897(&(Local_742[4 /*26*/]), func_204(11, 4), 1);
					func_1897(&(Local_742[5 /*26*/]), func_204(11, 5), 1);
					__LIB_11__::func_59(uParam0, 4);
					__LIB_1__::func_561(&uLocal_2660);
					func_1895(&Local_742, 0);
					iLocal_2521 = 3;
				}
			}
			break;
		case 3:
			func_1898(&Local_742);
			if (func_1282(&Local_742, func_369(11, 4), 5f))
			{
				__LIB_4__::func_89(&uLocal_2660, 0);
				iLocal_2521 = 4;
			}
			break;
		case 4:
			func_1898(&Local_742);
			if ((__LIB_9__::func_178(&uLocal_2660) > 12f || func_1899(&Local_742) >= 2) || func_1281(&Local_742) <= 2)
			{
				PED::SET_PED_COMBAT_MOVEMENT(Local_100, 2);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_100, func_369(11, 15), 3f, false, 0, 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_100, func_369(11, 12), 3f, false, 1, 0);
				TASK::OPEN_SEQUENCE_TASK(&(Local_100.f_5));
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 3000, -1f, -1f, -1f);
				if (func_1900(&Local_742, &uVar0))
				{
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(0, 60.09159f, 1061.137f, 193.4998f, uVar0, 2f, 1, 3f, 1f, 1, 4202497, 0, joaat("FIRING_PATTERN_BURST_FIRE"), -1, 0);
				}
				else
				{
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD_USING_COMBAT_STYLE(0, 60.09159f, 1061.137f, 193.4998f, 60.09159f, 1061.137f, 193.4998f, 2f, 0, 3f, 1f, 1, 4202497, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
				}
				TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, func_369(11, 7), 30f, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(Local_100.f_5);
				TASK::TASK_PERFORM_SEQUENCE(Local_100, Local_100.f_5);
				TASK::CLEAR_SEQUENCE_TASK(&(Local_100.f_5));
				PED::SET_PED_COMBAT_MOVEMENT(Local_83, 1);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_83, func_369(0, 18), (3f * 0.5f), true, 0, 0);
				TASK::TASK_COMBAT_HATED_TARGETS(Local_83, -1f);
				PED::SET_PED_COMBAT_MOVEMENT(Local_117, 1);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_117, func_369(11, 17), (3f * 2f), false, 0, 0);
				TASK::TASK_COMBAT_HATED_TARGETS(Local_117, -1f);
				func_1897(&(Local_742[0 /*26*/]), func_204(11, 6), 1);
				func_1897(&(Local_742[1 /*26*/]), func_204(11, 7), 1);
				func_1897(&(Local_742[2 /*26*/]), func_204(11, 8), 1);
				func_1897(&(Local_742[3 /*26*/]), func_204(11, 9), 1);
				func_1897(&(Local_742[4 /*26*/]), func_204(11, 10), 1);
				func_1897(&(Local_742[5 /*26*/]), func_204(11, 11), 1);
				__LIB_2__::func_259(&uLocal_2660);
				func_1901(&Local_742);
				func_1902(&Local_742, 512, 1);
				iLocal_2521 = 5;
			}
			break;
		case 5:
			func_1903(&(Local_134[0 /*17*/]), &uLocal_2524, 0);
			func_1903(&(Local_134[1 /*17*/]), &uLocal_2525, 1);
			if (func_1281(&Local_742) <= 0)
			{
				func_1904();
				iLocal_2521 = 7;
			}
			else if (__LIB_9__::func_178(&uLocal_2660) > 120f)
			{
				if (func_1281(&Local_742) <= 2)
				{
					func_1323(&Local_742, func_369(2, 0));
					__LIB_1__::func_561(&uLocal_2660);
					func_1904();
					iLocal_2521 = 6;
				}
			}
			break;
		case 6:
			if (func_1281(&Local_742) <= 0)
			{
				iLocal_2521 = 7;
			}
			break;
		case 7:
			break;
	}
}

void func_1279(var uParam0)
{
	switch (iLocal_2522)
	{
		case 0:
			func_1905();
			func_1906(&(Local_429[0 /*26*/]));
			func_1906(&(Local_429[4 /*26*/]));
			iLocal_2522 = 2;
			break;
		case 2:
			func_1907(&Local_429, &(Local_429[4 /*26*/]), func_204(10, 12), 5f);
			func_1907(&Local_429, &(Local_429[11 /*26*/]), func_204(10, 5), 8f);
			func_1907(&Local_429, &(Local_429[10 /*26*/]), func_204(10, 22), 12f);
			if (func_1281(&Local_429) <= 7)
			{
				func_1908(&Local_2526, 10, &iLocal_2504);
				func_1906(&(Local_429[8 /*26*/]));
				func_1906(&(Local_429[10 /*26*/]));
				iLocal_2522 = 3;
			}
			break;
		case 3:
			func_1907(&Local_429, &(Local_429[0 /*26*/]), func_204(10, 0), 3f);
			if (func_1281(&Local_429) <= 2)
			{
				__LIB_4__::func_89(&uLocal_65, 0);
				if (__LIB_9__::func_178(&uLocal_65) > 5f)
				{
					__LIB_1__::func_561(&uLocal_65);
					func_1323(&Local_429, func_369(10, 9));
					iLocal_2522 = 6;
				}
			}
			break;
		case 6:
			if (func_1281(&Local_429) <= 0)
			{
				iLocal_2522 = 7;
			}
			break;
		case 7:
			break;
	}
	if (iLocal_2522 < 6)
	{
		func_1324(uParam0, &Local_429, &vLocal_314, &uLocal_2663, 1109393408 /* Float: 40f */);
	}
}

void func_1280(var uParam0, float fParam1)
{
	if (__LIB_9__::func_406(&uLocal_80, fParam1))
	{
		__LIB_8__::func_795(uParam0, Local_83, 1, 1);
		__LIB_8__::func_795(uParam0, Local_100, 1, 1);
		__LIB_8__::func_795(uParam0, Local_117, 1, 1);
		__LIB_8__::func_795(uParam0, Local_134[0 /*17*/], 1, 1);
		__LIB_8__::func_795(uParam0, Local_134[1 /*17*/], 1, 1);
		__LIB_8__::func_795(uParam0, Local_134[2 /*17*/], 1, 1);
	}
	else
	{
		__LIB_8__::func_795(uParam0, Local_83, 0, 1);
		__LIB_8__::func_795(uParam0, Local_100, 0, 1);
		__LIB_8__::func_795(uParam0, Local_117, 0, 1);
		__LIB_8__::func_795(uParam0, Local_134[0 /*17*/], 0, 1);
		__LIB_8__::func_795(uParam0, Local_134[1 /*17*/], 0, 1);
		__LIB_8__::func_795(uParam0, Local_134[2 /*17*/], 0, 1);
	}
}

int func_1281(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_272((*iParam0)[iVar1 /*26*/], 2))
		{
			if (!PED::IS_PED_DEAD_OR_DYING((*iParam0)[iVar1 /*26*/], true))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_1282(int iParam0, vector3 vParam1, float fParam4)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_272((*iParam0)[iVar0 /*26*/], 0) && !PED::IS_PED_DEAD_OR_DYING((*iParam0)[iVar0 /*26*/], true))
		{
			if (__LIB_0__::func_266((*iParam0)[iVar0 /*26*/], vParam1, fParam4, 1, 1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_1283(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*26*/]))
		{
			if (!bParam1 || __LIB_0__::func_272((*iParam0)[iVar0 /*26*/], 0))
			{
				__LIB_2__::func_788(iParam0[iVar0 /*26*/], 1, 0, 1);
			}
		}
		iVar0++;
	}
}

bool func_1284()
{
	if (!func_1233(0))
	{
		return false;
	}
	if (!func_1912(&Local_429))
	{
		return false;
	}
	if (func_1913(&Local_429))
	{
		__LIB_4__::func_89(&uLocal_426, 0);
		if (__LIB_9__::func_178(&uLocal_426) < 5f)
		{
			return false;
		}
	}
	return true;
}

void func_1285()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!__LIB_0__::func_272(Local_134[iVar0 /*17*/], 0))
		{
			if (PED::_0xB655DB7582AEC805(Local_134[iVar0 /*17*/]))
			{
				PED::_0xF6262491C7704A63(Local_134[iVar0 /*17*/], 0);
			}
			PED::REVIVE_INJURED_PED(Local_134[iVar0 /*17*/]);
			ENTITY::_SET_ENTITY_HEALTH(Local_134[iVar0 /*17*/], ENTITY::GET_ENTITY_MAX_HEALTH(Local_134[iVar0 /*17*/], false), 0);
		}
		iVar0++;
	}
}

void func_1286(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, float fParam5)
{
	if (__LIB_0__::func_272(iParam0, 0))
	{
		TASK::OPEN_SEQUENCE_TASK(&iParam1);
		TASK::TASK_PAUSE(0, iParam4);
		TASK::TASK_TURN_PED_TO_FACE_COORD(0, func_1389(sParam2, iParam3), 0);
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(0, sLocal_41, fParam5, iParam3, 27648, 24, 0);
		if (!MISC::ARE_STRINGS_EQUAL(sParam2, sLocal_41))
		{
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sParam2, 0, 3072, -1, 0, 0, -1);
		}
		TASK::CLOSE_SEQUENCE_TASK(iParam1);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, iParam1);
		TASK::CLEAR_SEQUENCE_TASK(&iParam1);
	}
}

void func_1287(var uParam0)
{
	switch (__LIB_4__::func_979(uParam0))
	{
		case 1:
			if (func_1823(uParam0, "NTS2_RUNTLK", 0, 1073741824 /* Float: 2f */, 0, 0))
			{
				if (__LIB_0__::func_266(Global_35, func_369(3, 2), 27.5f, 1, 0))
				{
					func_1200(uParam0, 11, 1);
				}
				else
				{
					func_1198(uParam0, 10, 20f);
				}
				__LIB_11__::func_59(uParam0, 2);
			}
			break;
		case 2:
			if (__LIB_11__::func_736("NTS2_RUNTLK"))
			{
				if (!__LIB_11__::func_745("NTS2_RUNTLK"))
				{
					if (!__LIB_0__::func_48(Global_35, Local_83, 30f, 1))
					{
						AUDIO::PAUSE_SCRIPTED_CONVERSATION("NTS2_RUNTLK", true, false, false, true);
					}
				}
			}
			else if (__LIB_11__::func_745("NTS2_RUNTLK"))
			{
				if (__LIB_0__::func_48(Global_35, Local_83, 30f, 1))
				{
					AUDIO::RESTART_SCRIPTED_CONVERSATION("NTS2_RUNTLK");
				}
			}
			else
			{
				__LIB_11__::func_59(uParam0, 3);
			}
			if (func_1326(10))
			{
				if (func_1220(Global_35, sLocal_41, 24))
				{
					func_1224();
				}
			}
			break;
		case 3:
			if ((__LIB_0__::func_266(Global_35, func_369(3, 2), 27.5f, 1, 1) && __LIB_0__::func_266(Local_83, func_369(3, 2), 27.5f, 1, 1)) && __LIB_0__::func_266(Local_100, func_369(3, 2), 27.5f, 1, 1))
			{
				if (func_1823(uParam0, "NTS2_03_CORPSES", 0, 1073741824 /* Float: 2f */, 0, 1))
				{
					__LIB_11__::func_59(uParam0, 4);
				}
			}
			break;
		case 4:
			if ((__LIB_0__::func_266(Local_134[0 /*17*/], func_369(3, 2), 27.5f, 1, 1) && __LIB_0__::func_266(Local_134[1 /*17*/], func_369(3, 2), 27.5f, 1, 1)) && __LIB_0__::func_266(Local_134[2 /*17*/], func_369(3, 2), 27.5f, 1, 1))
			{
				if (func_1823(uParam0, "NTS2_BODIESCHAT", 5f, 1073741824 /* Float: 2f */, 0, 1))
				{
					__LIB_11__::func_59(uParam0, 5);
				}
			}
			break;
		case 5:
			if (Local_2674.f_1 == 6)
			{
				func_1823(uParam0, "NTS2_04_LOOT_EF", 2.5f, 1073741824 /* Float: 2f */, 0, 1);
			}
			break;
	}
}

void func_1288()
{
	if (!__LIB_0__::func_899(&uLocal_2671))
	{
		if (func_1915(&Local_429) <= 1)
		{
			__LIB_4__::func_89(&uLocal_2671, 0);
		}
	}
	else if (__LIB_9__::func_178(&uLocal_2671) > 2.5f)
	{
		__LIB_1__::func_561(&uLocal_2671);
		func_1916(&Local_429);
	}
}

void func_1289()
{
	if (!bLocal_2669)
	{
		if (__LIB_0__::func_266(Global_35, func_369(3, 2), 27.5f, 1, 1))
		{
			PED::_0x89F5E7ADECCCB49C(Global_35, "Cautious");
			bLocal_2669 = true;
		}
	}
	else if (!__LIB_0__::func_266(Global_35, func_369(3, 2), 27.5f, 1, 1))
	{
		PED::_0x58F7DB5BD8FA2288(Global_35);
		bLocal_2669 = false;
	}
}

void func_1290()
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (__LIB_0__::func_266(Global_35, func_369(3, 2), (27.5f * 1.1f), 1, 0))
		{
			ENTITY::_0xC3ABCFBC7D74AFA5(Global_35, 11, 1);
			ENTITY::_0xC3ABCFBC7D74AFA5(Global_35, 9, 1);
		}
	}
}

void func_1291(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*26*/]))
		{
			if (ENTITY::_0xEF2D9ED7CE684F08((*iParam0)[iVar0 /*26*/]) == Global_35)
			{
				if ((iParam0[iVar0 /*26*/])->f_17 < 3)
				{
					fLocal_2670 = (fLocal_2670 + 15f);
					(iParam0[iVar0 /*26*/])->f_17 = 3;
				}
				else if ((iParam0[iVar0 /*26*/])->f_17 < 4)
				{
					if (ENTITY::_0x8DE41E9902E85756((*iParam0)[iVar0 /*26*/]))
					{
						(iParam0[iVar0 /*26*/])->f_17 = 4;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1292(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	if (__LIB_0__::func_272(*iParam0, 0))
	{
		switch (uParam1->f_1)
		{
			case 0:
				if (__LIB_0__::func_491(*iParam0, 242628503))
				{
					uParam1->f_1 = 1;
				}
				break;
			case 1:
				if (__LIB_0__::func_266(*iParam0, func_369(3, 2), (27.5f * 0.9f), 1, 1) && __LIB_11__::func_24(*iParam0) < 192.5f)
				{
					if (__LIB_0__::func_491(*iParam0, 242628503))
					{
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam0, 0))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*iParam0, 1.5f, 0, -1082130432 /* Float: -1f */, 0);
						}
					}
					else if (!__LIB_0__::func_491(*iParam0, 713668775))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, __LIB_3__::func_857(func_369(3, 2), 5f, 1f), 1.5f, -1, 2.5f, 4202497, 40000f);
					}
					else
					{
						PED::_0x89F5E7ADECCCB49C(*iParam0, "Cautious");
						uParam1->f_1 = 2;
					}
				}
				else if (__LIB_0__::func_491(*iParam0, 242628503))
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam0, 0))
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*iParam0, 2f, 0, -1082130432 /* Float: -1f */, 0);
					}
				}
				else if (!__LIB_0__::func_491(*iParam0, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, __LIB_3__::func_857(func_369(3, 2), 5f, 1f), 1.5f, -1, 2.5f, 4202497, 40000f);
				}
				break;
			case 2:
				if (!__LIB_0__::func_491(*iParam0, 713668775))
				{
					if (func_1918(*iParam0))
					{
						uParam1->f_1 = 4;
					}
					else
					{
						uParam1->f_1 = 3;
					}
				}
				break;
			case 3:
				if (__LIB_0__::func_899(&(iParam0->f_6)))
				{
					if (__LIB_9__::func_178(&(iParam0->f_6)) > iParam0->f_15)
					{
						*uParam1 = func_1919(*iParam0, &Local_429, bParam2);
						if (func_1920(*uParam1))
						{
							TASK::TASK_LOOT_ENTITY(*iParam0, Local_429[*uParam1 /*26*/]);
							Local_429[*uParam1 /*26*/].f_17 = 1;
							__LIB_1__::func_561(&(iParam0->f_6));
							uParam1->f_1 = 5;
						}
						else if (__LIB_9__::func_178(&(iParam0->f_6)) > 2.5f)
						{
							__LIB_1__::func_561(&(iParam0->f_6));
							uParam1->f_1 = 4;
						}
					}
				}
				else
				{
					iParam0->f_15 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
					__LIB_4__::func_89(&(iParam0->f_6), 0);
				}
				break;
			case 4:
				if (!__LIB_0__::func_491(*iParam0, 923520851))
				{
					TASK::TASK_WANDER_IN_AREA(*iParam0, func_369(3, 2), 27.5f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
				}
				else if (!func_1918(*iParam0))
				{
					__LIB_4__::func_89(&(iParam0->f_6), 0);
					if (__LIB_9__::func_178(&(iParam0->f_6)) > 7.5f)
					{
						TASK::CLEAR_PED_TASKS(*iParam0, true, false);
						__LIB_1__::func_561(&(iParam0->f_6));
						uParam1->f_1 = 3;
					}
				}
				break;
			case 5:
				if (!__LIB_0__::func_491(*iParam0, joaat("SCRIPT_TASK_LOOT_ENTITY")))
				{
					Local_429[*uParam1 /*26*/].f_17 = 0;
					__LIB_1__::func_561(&(iParam0->f_6));
					if (bParam2)
					{
						uParam1->f_1 = 3;
					}
					else
					{
						uParam1->f_1 = 4;
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, joaat("SCRIPT_TASK_LOOT_ENTITY"), true) == 1 && __LIB_0__::func_48(*iParam0, Local_429[*uParam1 /*26*/], 1.5f, 1))
				{
					Local_429[*uParam1 /*26*/].f_17 = 2;
					__LIB_1__::func_561(&(iParam0->f_6));
					uParam1->f_1 = 6;
				}
				else if (__LIB_0__::func_266(Global_35, ENTITY::GET_ENTITY_COORDS(Local_429[*uParam1 /*26*/], true, false), 1.5f, 1, 0) && !bParam2)
				{
					__LIB_4__::func_89(&(iParam0->f_6), 0);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(*iParam0, 0f);
					if (__LIB_9__::func_178(&(iParam0->f_6)) > 2.5f)
					{
						if (Local_429[*uParam1 /*26*/].f_17 == 1)
						{
							Local_429[*uParam1 /*26*/].f_17 = 0;
						}
						__LIB_1__::func_561(&(iParam0->f_6));
						*uParam1 = -1;
						uParam1->f_1 = 4;
					}
				}
				else
				{
					__LIB_1__::func_561(&(iParam0->f_6));
				}
				break;
			case 6:
				if (FIRE::IS_ENTITY_ON_FIRE(Local_429[*uParam1 /*26*/]))
				{
					uParam1->f_1 = 3;
				}
				iVar0 = ENTITY::_0xEF2D9ED7CE684F08(Local_429[*uParam1 /*26*/]);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (iVar0 != *iParam0)
					{
						if (Local_429[*uParam1 /*26*/].f_17 <= 2)
						{
							Local_429[*uParam1 /*26*/].f_17 = 0;
						}
						*uParam1 = -1;
						uParam1->f_1 = 3;
					}
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, joaat("SCRIPT_TASK_LOOT_ENTITY"), true) == 8)
				{
					TASK::CLEAR_PED_TASKS(*iParam0, true, false);
					uParam1->f_1 = 7;
				}
				break;
			case 7:
				if (__LIB_3__::func_578(Local_429[*uParam1 /*26*/]))
				{
					__LIB_0__::func_325(&(Local_429[*uParam1 /*26*/].f_3));
				}
				uParam1->f_1 = 3;
				break;
		}
	}
}

int func_1294(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*26*/]))
		{
			if (bParam1)
			{
				if ((iParam0[iVar0 /*26*/])->f_17 >= 4)
				{
					iVar1++;
				}
			}
			else if ((iParam0[iVar0 /*26*/])->f_17 >= 3)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_1295()
{
	__LIB_1__::func_561(&uLocal_71);
	__LIB_1__::func_561(&uLocal_74);
}

void func_1297()
{
	func_1922(Global_35);
	func_1922(Local_83);
	func_1922(Local_100);
	func_1922(Local_117);
	func_1922(Local_134[2 /*17*/]);
}

bool func_1298()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_353))
	{
		iLocal_353 = VEHICLE::CREATE_VEHICLE(iLocal_29, func_369(4, 8), func_1867(4, 8), true, true, false, false);
		return false;
	}
	else if (!bLocal_402)
	{
		if (!VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_353, 0f))
		{
			return false;
		}
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_353, true);
		VEHICLE::SET_VEHICLE_HANDBRAKE(iLocal_353, true);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_353, true);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_353, false);
		WEAPON::_0x8A779706DA5CA3DD(iLocal_353, 0, -1);
		WEAPON::_0xBDDA0C290C228159(iLocal_353, joaat("WEAPON_TURRET_CANNON"), 1000);
		ENTITY::SET_ENTITY_HEADING(iLocal_353, func_1867(4, 8));
		bLocal_402 = true;
	}
	return true;
}

bool func_1299()
{
	func_1875(&Local_899, 3, -1071644672 /* Float: -2.5f */);
	if (!func_1877(&(Local_899[0 /*26*/]), func_204(4, 10), func_204(12, 3), Local_419, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0.5f, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_899[1 /*26*/]), func_204(4, 10), func_204(4, 9), Local_419, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0f, 1, 1, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_899[2 /*26*/]), func_204(4, 10), func_204(12, 0), Local_419, joaat("WEAPON_RIFLE_SPRINGFIELD"), 0.5f, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_899[3 /*26*/]), func_204(4, 10), func_204(12, 10), Local_419, joaat("WEAPON_REPEATER_CARBINE"), 1.5f, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_899[4 /*26*/]), func_204(4, 10), func_204(12, 1), Local_419, joaat("WEAPON_REPEATER_CARBINE"), 1.5f, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_899[5 /*26*/]), func_204(4, 10), func_204(12, 7), Local_419, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 1.5f, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_899[6 /*26*/]), func_204(4, 10), func_204(12, 2), func_204(12, 14), joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 2.5f, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_899[7 /*26*/]), func_204(4, 10), func_204(12, 4), Local_419, joaat("WEAPON_REPEATER_CARBINE"), 2.5f, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_899[8 /*26*/]), func_204(4, 10), func_204(12, 8), Local_419, joaat("WEAPON_REPEATER_CARBINE"), 2.5f, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_899[9 /*26*/]), func_204(4, 10), func_204(12, 9), Local_419, joaat("WEAPON_REPEATER_CARBINE"), 3.5f, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_899[10 /*26*/]), func_204(4, 10), func_204(12, 5), Local_419, joaat("WEAPON_RIFLE_BOLTACTION"), 3.5f, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_899[11 /*26*/]), func_204(4, 10), func_204(12, 6), Local_419, joaat("WEAPON_RIFLE_BOLTACTION"), 3.5f, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	vLocal_324[0 /*3*/].f_1 = "NTS2_SOLDIER4";
	vLocal_324[1 /*3*/].f_1 = "NTS2_SOLDIER5";
	vLocal_324[2 /*3*/].f_1 = "NTS2_SOLDIER6";
	vLocal_324[0 /*3*/].f_2 = "NTS2_SHOUTB1";
	vLocal_324[1 /*3*/].f_2 = "NTS2_SHOUTB2";
	vLocal_324[2 /*3*/].f_2 = "NTS2_SHOUTB3";
	return true;
}

void func_1300(int iParam0, struct<4> Param1, int iParam5, int iParam6)
{
	func_1195(iParam0, Param1, 2, 1073741824 /* Float: 2f */);
	TASK::TASK_SET_CROUCH_MOVEMENT(iParam0, true, 0, true);
	PED::FORCE_PED_MOTION_STATE(iParam0, joaat("MOTIONSTATE_CROUCH_IDLE"), false, 0, false);
	TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iParam0, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), -1, 0, 0, iParam5, iParam6, 0, 0, 0, 0);
}

void func_1301(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (__LIB_0__::func_272((*uParam0)[iVar0 /*26*/], 0))
		{
			PED::FORCE_PED_MOTION_STATE((*uParam0)[iVar0 /*26*/], iParam1, false, 0, false);
		}
		iVar0++;
	}
}

bool func_1302()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_362))
	{
		iLocal_362 = OBJECT::CREATE_OBJECT(iLocal_25, func_369(4, 0), true, true, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_362, true);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_363))
	{
		iLocal_363 = OBJECT::CREATE_OBJECT(iLocal_26, func_369(4, 0), true, true, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_363, true);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_364))
	{
		iLocal_364 = OBJECT::CREATE_OBJECT(iLocal_27, func_369(4, 0), true, true, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_364, true);
		return false;
	}
	return true;
}

bool func_1303(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3005))
	{
		func_1923(&Local_429);
		if (!func_1924(&Local_2692, &iLocal_3005, 55.48545f, 1095.61f, 175.8722f, 0, 1))
		{
			return false;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3031))
	{
		if (!func_1924(&Local_2692, &iLocal_3031, 52.96413f, 1093.762f, 175.6504f, 0, 1))
		{
			return false;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3057))
	{
		if (!func_1924(&Local_2692, &iLocal_3057, 60.16936f, 1097.057f, 176.684f, 0, 1))
		{
			return false;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3083))
	{
		if (!func_1924(&Local_2692, &iLocal_3083, 65.38878f, 1093.803f, 176.8647f, 0, 1))
		{
			return false;
		}
	}
	PED::RESURRECT_PED(iLocal_3005);
	PED::RESURRECT_PED(iLocal_3031);
	PED::RESURRECT_PED(iLocal_3057);
	PED::RESURRECT_PED(iLocal_3083);
	__LIB_5__::func_335(uParam0, iLocal_3005);
	__LIB_5__::func_335(uParam0, iLocal_3031);
	__LIB_5__::func_335(uParam0, iLocal_3057);
	__LIB_5__::func_335(uParam0, iLocal_3083);
	return true;
}

void func_1304(var uParam0)
{
	__LIB_8__::func_806(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_134[0 /*17*/], "A_M_M_WAPWARRIORS_01", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_134[1 /*17*/], "A_M_M_WAPWARRIORS_01^1", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_134[2 /*17*/], "A_M_M_WAPWARRIORS_01^2", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_83, "dutch", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_100, "EagleFlies", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_117, "PAYTAH", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, iLocal_3005, "S_M_M_ARMY_01", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, iLocal_3031, "S_M_M_ARMY_01^1", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, iLocal_3057, "S_M_M_ARMY_01^2", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, iLocal_3083, "S_M_M_ARMY_01^3", 0, 0, 0, 0);
	__LIB_5__::func_580(uParam0, iLocal_362, "p_cs_armyid01x", 0, 0, 0, 0);
	__LIB_5__::func_580(uParam0, iLocal_363, "p_moneyStack01x", 0, 0, 0, 0);
	__LIB_5__::func_580(uParam0, iLocal_364, "p_wallet01x", 0, 0, 0, 0);
}

void func_1305(var uParam0)
{
	if (__LIB_4__::func_948(uParam0, 4))
	{
		if (__LIB_0__::func_272(Global_35, 0))
		{
			if (!__LIB_11__::func_749(1))
			{
				__LIB_1__::func_766(Global_35, __LIB_0__::func_664(), 0, 0, 0, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			}
		}
	}
}

void func_1306(var uParam0)
{
	if (__LIB_4__::func_948(uParam0, 4))
	{
		if (__LIB_0__::func_272(Global_35, 0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, WEAPON::GET_BEST_PED_WEAPON(Global_35, false, true), true, 0, false, false);
		}
		if (__LIB_0__::func_272(Local_83, 0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Local_83, joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH"), true, 0, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_83, joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH_DUALWIELD"), true, 1, false, false);
		}
		if (__LIB_0__::func_272(Local_100, 0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Local_100, joaat("WEAPON_REPEATER_CARBINE"), true, 0, false, false);
		}
		if (__LIB_0__::func_272(Local_117, 0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Local_117, joaat("WEAPON_REPEATER_CARBINE"), true, 0, false, false);
		}
		if (__LIB_0__::func_272(Local_134[2 /*17*/], 0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Local_134[2 /*17*/], joaat("WEAPON_REPEATER_CARBINE"), true, 0, false, false);
		}
	}
}

void func_1307(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (__LIB_0__::func_272((*uParam0)[iVar0 /*26*/], 0))
		{
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP((*uParam0)[iVar0 /*26*/], bParam2, iParam1);
		}
		iVar0++;
	}
}

void func_1308(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_272((*iParam0)[iVar0 /*26*/], 0))
		{
			PED::SET_PED_CONFIG_FLAG((*iParam0)[iVar0 /*26*/], iParam1, bParam2);
		}
		iVar0++;
	}
}

void func_1311()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3005))
	{
		__LIB_1__::func_864(iLocal_3005, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3031))
	{
		__LIB_1__::func_864(iLocal_3031, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3057))
	{
		__LIB_1__::func_864(iLocal_3057, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3083))
	{
		__LIB_1__::func_864(iLocal_3083, 0, 0);
	}
}

void func_1312()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		__LIB_0__::func_325(&(Local_134[iVar0 /*17*/].f_3));
		__LIB_1__::func_864(Local_134[iVar0 /*17*/], 0, 0);
		iVar0++;
	}
}

void func_1313(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_272((*iParam0)[iVar0 /*26*/], 0) && (iParam0[iVar0 /*26*/])->f_25)
		{
			if (__LIB_0__::func_399((*iParam0)[iVar0 /*26*/], 1, 0, 0) != (iParam0[iVar0 /*26*/])->f_16)
			{
				__LIB_1__::func_766((*iParam0)[iVar0 /*26*/], (iParam0[iVar0 /*26*/])->f_16, 1, 1, 0, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_1314(var uParam0)
{
	switch (__LIB_4__::func_979(uParam0))
	{
		case 1:
			if (func_1823(uParam0, "NTS2_05_AMBUSH", 1f, 1073741824 /* Float: 2f */, 0, 0))
			{
				func_1198(uParam0, 13, 20f);
				__LIB_11__::func_59(uParam0, 2);
			}
			break;
		case 2:
			if (func_1823(uParam0, "NTS2_05_BLAST", 0, 1073741824 /* Float: 2f */, 0, 1))
			{
				__LIB_10__::func_925(uParam0, sLocal_57);
				__LIB_10__::func_925(uParam0, sLocal_58);
				__LIB_11__::func_59(uParam0, 3);
			}
			break;
		case 3:
			if (func_1823(uParam0, "NTS2_05_BATTLE", 2.5f, 1073741824 /* Float: 2f */, 0, 1))
			{
				__LIB_11__::func_59(uParam0, 4);
			}
			break;
		case 4:
			if (func_1928())
			{
				if (func_1823(uParam0, "NTS2_05_CANNON2", 1f, 1073741824 /* Float: 2f */, 0, 1))
				{
					__LIB_11__::func_59(uParam0, 5);
				}
			}
			break;
		case 5:
			if (func_1928())
			{
				if (iLocal_3139 >= 2)
				{
					if (func_1823(uParam0, "NTS2_05_CANNON1", 0, 1073741824 /* Float: 2f */, 0, 1))
					{
						__LIB_11__::func_59(uParam0, -1);
					}
				}
			}
			break;
		case 6:
			if (func_1823(uParam0, "NTS2_05_SAFE", 5f, 1073741824 /* Float: 2f */, 1, 0))
			{
				__LIB_11__::func_59(uParam0, 51);
			}
			break;
	}
}

void func_1315()
{
	if ((Local_3109.f_7 == 7 || __LIB_2__::func_901(Local_3109, Global_35)) || __LIB_2__::func_901(Local_3109.f_1, Global_35))
	{
		if (SCRIPTS::_0x7409669C5ED50144(joaat("CHAL_CTX_CUSTOM_1")))
		{
			SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_CUSTOM_1"));
		}
	}
}

void func_1316()
{
	if (bLocal_2689)
	{
		if (!PED::IS_PED_IN_COVER(Global_35, false, false))
		{
			bLocal_2689 = false;
			ENTITY::SET_ENTITY_PROOFS(Global_35, 0, false);
		}
	}
	else if (PED::IS_PED_IN_COVER(Global_35, false, false))
	{
		bLocal_2689 = true;
		ENTITY::SET_ENTITY_PROOFS(Global_35, 4, false);
	}
}

void func_1317()
{
	switch (iLocal_3141)
	{
		case 0:
			iLocal_3141 = 1;
			break;
		case 1:
			__LIB_4__::func_89(&uLocal_423, 0);
			if ((func_1930(&(Local_899[0 /*26*/]), 1077936128 /* Float: 3f */) || !__LIB_0__::func_272(Local_899[0 /*26*/], 2)) || __LIB_9__::func_178(&uLocal_423) > 8f)
			{
				__LIB_1__::func_561(&uLocal_423);
				iLocal_3141 = 2;
			}
			break;
		case 2:
			__LIB_4__::func_89(&uLocal_423, 0);
			if (__LIB_9__::func_178(&uLocal_423) > 2.5f)
			{
				if (Local_899[0 /*26*/] != Local_3109)
				{
					func_1931(&(Local_899[0 /*26*/]), func_204(12, 17));
				}
				__LIB_1__::func_561(&uLocal_423);
				iLocal_3141 = 3;
			}
			break;
		case 3:
			__LIB_4__::func_89(&uLocal_423, 0);
			if ((func_1930(&(Local_899[0 /*26*/]), 1077936128 /* Float: 3f */) || !__LIB_0__::func_272(Local_899[0 /*26*/], 2)) || __LIB_9__::func_178(&uLocal_423) > 8f)
			{
				if (Local_899[0 /*26*/] != Local_3109)
				{
					func_1931(&(Local_899[0 /*26*/]), func_204(12, 18));
				}
				__LIB_1__::func_561(&uLocal_423);
				iLocal_3141 = 4;
			}
			break;
		case 4:
			__LIB_4__::func_89(&uLocal_423, 0);
			if (__LIB_9__::func_178(&uLocal_423) > 2f)
			{
				if (Local_899[8 /*26*/] != Local_3109)
				{
					func_1931(&(Local_899[8 /*26*/]), func_204(12, 15));
				}
				__LIB_1__::func_561(&uLocal_423);
				iLocal_3141 = 5;
			}
			break;
		case 5:
			__LIB_4__::func_89(&uLocal_423, 0);
			if (__LIB_9__::func_178(&uLocal_423) > 6f)
			{
				if (Local_899[3 /*26*/] != Local_3109)
				{
					func_1931(&(Local_899[3 /*26*/]), func_204(12, 13));
				}
				__LIB_1__::func_561(&uLocal_423);
				iLocal_3141 = 6;
			}
			break;
		case 6:
			__LIB_4__::func_89(&uLocal_423, 0);
			if (__LIB_9__::func_178(&uLocal_423) > 4f)
			{
				if (Local_899[7 /*26*/] != Local_3109)
				{
					func_1931(&(Local_899[7 /*26*/]), func_204(12, 7));
				}
				__LIB_1__::func_561(&uLocal_423);
				iLocal_3141 = 7;
			}
			break;
		case 7:
			__LIB_4__::func_89(&uLocal_423, 0);
			if (__LIB_9__::func_178(&uLocal_423) > 6f)
			{
				if (Local_899[4 /*26*/] != Local_3109)
				{
					func_1931(&(Local_899[4 /*26*/]), func_204(12, 4));
				}
				__LIB_1__::func_561(&uLocal_423);
				iLocal_3141 = 10;
			}
			break;
	}
}

void func_1318()
{
	switch (iLocal_3139)
	{
		case 0:
			if (__LIB_0__::func_491(Local_83, 242628503) || __LIB_0__::func_491(Local_83, -2117564886))
			{
				if (__LIB_0__::func_266(Local_83, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_83, false), 3f, 1, 0))
				{
					PED::_SET_PED_CROUCH_MOVEMENT(Local_83, false, 0, false);
					iLocal_3139 = 1;
				}
			}
			break;
		case 1:
			if (iLocal_3137 >= 3)
			{
				__LIB_4__::func_89(&(Local_83.f_6), 0);
				if (__LIB_9__::func_178(&(Local_83.f_6)) > 8f)
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_83, func_369(4, 11), 2.5f, true, 0, 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_83, func_369(4, 14), 2.5f, false, 1, 0);
					iLocal_3139 = 2;
				}
			}
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

void func_1319()
{
	switch (iLocal_3138)
	{
		case 0:
			if (__LIB_0__::func_491(Local_100, 242628503) || __LIB_0__::func_491(Local_100, -2117564886))
			{
				if (__LIB_0__::func_266(Local_100, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_100, false), 3f, 1, 0))
				{
					PED::_SET_PED_CROUCH_MOVEMENT(Local_100, false, 0, false);
					iLocal_3138 = 1;
				}
			}
			break;
		case 1:
			if (func_1932(iLocal_408, 9))
			{
				__LIB_4__::func_89(&(Local_100.f_6), 0);
				if (__LIB_9__::func_178(&(Local_100.f_6)) > 2.5f)
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_100, func_369(4, 13), 2.5f, true, 0, 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_100, func_369(4, 12), 2.5f, false, 1, 0);
					iLocal_3138 = 2;
				}
			}
			break;
		case 2:
			if (func_1281(&Local_899) <= 5)
			{
				PED::REMOVE_PED_DEFENSIVE_AREA(Local_100, false);
				PED::_0x1854217C640B39EC(Local_100, Global_35, vLocal_379, 25f, 1, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_100, 42, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_100, 50, true);
				PED::SET_PED_COMBAT_MOVEMENT(Local_100, 2);
				iLocal_3138 = 3;
			}
			break;
		case 3:
			break;
		case 4:
			break;
	}
}

void func_1320()
{
	switch (iLocal_3137)
	{
		case 0:
			if (__LIB_0__::func_491(Local_134[2 /*17*/], 242628503) || __LIB_0__::func_491(Local_134[2 /*17*/], -2117564886))
			{
				if (__LIB_0__::func_266(Local_134[2 /*17*/], PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_134[2 /*17*/], false), 3f, 1, 0))
				{
					PED::_SET_PED_CROUCH_MOVEMENT(Local_134[2 /*17*/], false, 0, false);
					iLocal_3137 = 1;
				}
			}
			break;
		case 1:
			if (Local_3109.f_7 > 2 || func_1932(iLocal_408, 9))
			{
				__LIB_4__::func_89(&(Local_134[2 /*17*/].f_6), 0);
				if (__LIB_9__::func_178(&(Local_134[2 /*17*/].f_6)) > 7.5f)
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_117, func_369(4, 7), 2.5f, false, 0, 0);
					PED::REMOVE_PED_DEFENSIVE_AREA(Local_134[2 /*17*/], false);
					ENTITY::SET_ENTITY_PROOFS(Local_134[2 /*17*/], 17, false);
					PED::SET_PED_CAN_RAGDOLL(Local_134[2 /*17*/], true);
					__LIB_1__::func_561(&(Local_134[2 /*17*/].f_6));
					iLocal_3137 = 2;
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_272(Local_134[2 /*17*/], 0))
			{
				iLocal_3137 = 3;
			}
			else if (__LIB_0__::func_48(Local_134[2 /*17*/], iLocal_353, 2.5f, 1))
			{
				ENTITY::SET_ENTITY_PROOFS(Local_134[2 /*17*/], 0, false);
				func_1933(Local_899[4 /*26*/], 0);
				func_1934(Local_899[4 /*26*/], 0);
				func_1933(Local_899[11 /*26*/], 0);
				func_1934(Local_899[11 /*26*/], 0);
				iLocal_3137 = 4;
			}
			else if (!__LIB_0__::func_491(Local_134[2 /*17*/], 658540077))
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_134[2 /*17*/], sLocal_50, 0, 3080, -1, 0, 0, -1);
			}
			break;
		case 3:
			__LIB_4__::func_89(&(Local_134[2 /*17*/].f_6), 0);
			if (__LIB_9__::func_178(&(Local_134[2 /*17*/].f_6)) > 1f)
			{
				func_1933(Local_899[4 /*26*/], 0);
				func_1934(Local_899[4 /*26*/], 0);
				func_1933(Local_899[11 /*26*/], 0);
				func_1934(Local_899[11 /*26*/], 0);
				iLocal_3137 = 5;
			}
			break;
		case 4:
			if (!__LIB_0__::func_491(Local_134[2 /*17*/], -2117564886))
			{
				ENTITY::SET_ENTITY_PROOFS(Local_134[2 /*17*/], 0, false);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_134[2 /*17*/], ENTITY::GET_ENTITY_COORDS(iLocal_353, true, false), 25f, false, 0, 0);
				TASK::TASK_COMBAT_HATED_TARGETS(Local_134[2 /*17*/], -1f);
			}
			break;
	}
}

void func_1321()
{
	int iVar0;
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_353, false, false))
	{
		if (Local_3109.f_7 != 7)
		{
			if (func_1935())
			{
				Local_3109.f_7 = 7;
			}
		}
	}
	else if (!__LIB_0__::func_272(Local_3109, 2))
	{
		if (Local_3109.f_7 != 5 && Local_3109.f_7 != 6)
		{
			__LIB_1__::func_561(&(Local_3109.f_8));
			Local_3109.f_7 = 5;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_3109))
	{
		if (VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iLocal_353) != Local_3109)
		{
			if (Local_3109.f_7 != 0)
			{
				if (func_1935())
				{
					__LIB_1__::func_561(&(Local_3109.f_8));
					Local_3109.f_7 = 5;
				}
			}
		}
	}
	if (func_1928())
	{
		WEAPON::_0x56CB3B4305A4F7CE(iLocal_353, -1, -15f, 15f);
	}
	func_1936();
	switch (Local_3109.f_7)
	{
		case 0:
			__LIB_4__::func_89(&(Local_3109.f_8), 0);
			if (__LIB_0__::func_272(VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iLocal_353), 0))
			{
				Local_3109 = VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iLocal_353);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_3109, true);
				if (__LIB_11__::func_739(Local_3109, joaat("BLIP_STYLE_ENEMY"), "NTS2_OPERATOR", 1, 1995761918, 1))
				{
					__LIB_1__::func_561(&(Local_3109.f_8));
					if (!func_1932(iLocal_408, 6))
					{
						__LIB_4__::func_89(&(Local_3109.f_8), 0);
						Local_3109.f_7 = 2;
					}
					else
					{
						Local_3109.f_7 = 4;
					}
				}
			}
			else if (!__LIB_0__::func_491(Local_3109, -1794415470))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_3109, Local_3109.f_3, 1.25f, true, 0, 0);
				TASK::TASK_ENTER_VEHICLE(Local_3109, iLocal_353, 20000, -1, 2f, 1, 0);
			}
			break;
		case 2:
			if (!__LIB_0__::func_491(Local_3109, -1357334492))
			{
				Local_3109.f_14 = { vLocal_397 };
				PED::SET_PED_ACCURACY(Local_3109, 100);
				TASK::TASK_VEHICLE_SHOOT_AT_COORD(Local_3109, Local_3109.f_14, 15f);
			}
			else if (func_1937(Local_3109.f_14, 1069547520 /* Float: 1.5f */))
			{
				__LIB_4__::func_89(&(Local_3109.f_11), 0);
				__LIB_4__::func_87(&(Local_3109.f_8), 13f, 0);
				func_927(iLocal_408, 6);
				__LIB_5__::func_440("nts2_fallen_trees_road");
				__LIB_5__::func_441("nts2_fallen_tree_ridge");
				AICOVERPOINT::_0x64340DC208D671D5("nativeson2_ambushtrees");
				PED::SET_PED_ACCURACY(Local_3109, 5);
				Local_3109.f_17 = MISC::GET_RANDOM_FLOAT_IN_RANGE(7.5f, 13f);
				Local_3109.f_18 = MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 30f);
				Local_3109.f_7 = 4;
			}
			else if (__LIB_9__::func_178(&(Local_3109.f_8)) > 5f)
			{
				FIRE::ADD_EXPLOSION(vLocal_397, 25, 1f, true, false, 0.25f);
				__LIB_1__::func_561(&(Local_3109.f_8));
			}
			break;
		case 3:
			Local_3109.f_14 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(Local_134[2 /*17*/], true, false), ENTITY::GET_ENTITY_HEADING(Local_134[2 /*17*/]), -0.5f, 2.5f, 0f) };
			Local_3109.f_14 = { Local_3109.f_14 + Vector(50f, 0f, 0f) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Local_3109.f_14, &(Local_3109.f_14.f_2), false);
			Local_3109.f_14 = { Local_3109.f_14 + Vector(0.25f, 0f, 0f) };
			TASK::_0xAF2EF28CE3084505(Local_3109, Local_3109.f_14);
			if (__LIB_0__::func_272(Local_134[2 /*17*/], 0))
			{
				if (func_1937(Local_3109.f_14, 1069547520 /* Float: 1.5f */) || func_1937(ENTITY::GET_ENTITY_COORDS(Local_134[2 /*17*/], true, false), 1069547520 /* Float: 1.5f */))
				{
					__LIB_1__::func_864(Local_134[2 /*17*/], 0, 0);
				}
				else if (func_1220(Local_134[2 /*17*/], sLocal_50, 20))
				{
					if (!__LIB_0__::func_899(&uLocal_3134) || __LIB_9__::func_178(&uLocal_3134) > 1f)
					{
						__LIB_4__::func_89(&uLocal_3134, 0);
						FIRE::ADD_EXPLOSION(Local_3109.f_14, 26, 1f, true, false, 1f);
					}
				}
			}
			if (iLocal_3137 == 3 || iLocal_3137 == 4)
			{
				PED::SET_PED_CONFIG_FLAG(Local_3109, 273, false);
				WEAPON::_0x8A779706DA5CA3DD(iLocal_353, 0, -1);
				__LIB_1__::func_561(&uLocal_3134);
				__LIB_4__::func_89(&(Local_3109.f_11), 0);
				__LIB_4__::func_87(&(Local_3109.f_8), 13f, 0);
				Local_3109.f_7 = 4;
			}
			break;
		case 4:
			if (__LIB_0__::func_272(Local_134[2 /*17*/], 0))
			{
				if (iLocal_3137 == 2)
				{
					if (func_1220(Local_134[2 /*17*/], sLocal_50, 8))
					{
						__LIB_1__::func_561(&(Local_3109.f_8));
						__LIB_1__::func_561(&(Local_3109.f_11));
						WEAPON::_0x8A779706DA5CA3DD(iLocal_353, 1, -1);
						func_1933(Local_899[4 /*26*/], 4);
						func_1934(Local_899[4 /*26*/], 32);
						func_1933(Local_899[11 /*26*/], 4);
						func_1934(Local_899[11 /*26*/], 32);
						Local_3109.f_7 = 3;
					}
				}
			}
			if (func_1939() && ENTITY::IS_ENTITY_ON_SCREEN(Local_3109))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_3109, false))
				{
					if (!__LIB_0__::func_491(Local_3109, -828834893))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(Local_3109, 0, 0);
					}
				}
			}
			else if (__LIB_9__::func_178(&(Local_3109.f_11)) > Local_3109.f_18)
			{
				if (func_1940(&(Local_3109.f_14), 45f, 0))
				{
					TASK::_0xAF2EF28CE3084505(Local_3109, Local_3109.f_14);
					Local_3109.f_18 = MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 30f);
					__LIB_2__::func_259(&(Local_3109.f_8));
					__LIB_2__::func_259(&(Local_3109.f_11));
				}
			}
			else if (__LIB_9__::func_178(&(Local_3109.f_8)) > Local_3109.f_17)
			{
				if (func_1940(&(Local_3109.f_14), 15f, 1))
				{
					TASK::_0xAF2EF28CE3084505(Local_3109, Local_3109.f_14);
					Local_3109.f_17 = MISC::GET_RANDOM_FLOAT_IN_RANGE(7.5f, 13f);
					__LIB_2__::func_259(&(Local_3109.f_8));
				}
			}
			break;
		case 5:
			if (func_1281(&Local_899) <= 2)
			{
				__LIB_1__::func_561(&(Local_3109.f_8));
				Local_3109.f_7 = 8;
			}
			else
			{
				__LIB_4__::func_89(&(Local_3109.f_8), 0);
				if (func_1939() || func_1941())
				{
					__LIB_1__::func_561(&(Local_3109.f_8));
					Local_3109.f_7 = 6;
				}
				else if (__LIB_9__::func_178(&(Local_3109.f_8)) > 7.5f)
				{
					if (func_1924(&Local_899, &iVar0, ENTITY::GET_ENTITY_COORDS(iLocal_353, true, false), 1, 0))
					{
						__LIB_1__::func_561(&(Local_3109.f_8));
						Local_3109.f_1 = 0;
						Local_3109 = iVar0;
						Local_3109.f_7 = 0;
					}
				}
			}
			break;
		case 6:
			if (!func_1939() && !func_1941())
			{
				Local_3109.f_7 = 5;
			}
			break;
		case 7:
			break;
		case 8:
			break;
	}
}

void func_1322()
{
	if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_408))
	{
		switch (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_408))
		{
			case 7:
				__LIB_4__::func_89(&uLocal_3131, 0);
				if (__LIB_9__::func_178(&uLocal_3131) < 4.45f)
				{
					PAD::SET_PAD_SHAKE(0, 1, 56);
				}
				else if (__LIB_9__::func_178(&uLocal_3131) < (4.45f + 0.5f))
				{
					PAD::SET_PAD_SHAKE(0, 1, 184);
				}
				break;
		}
	}
}

void func_1323(int iParam0, vector3 vParam1)
{
	int iVar0;
	func_1902(iParam0, 512, 0);
	func_1902(iParam0, 0, 0);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_272((*iParam0)[iVar0 /*26*/], 0))
		{
			func_1942((*iParam0)[iVar0 /*26*/], vParam1);
		}
		if (__LIB_0__::func_272((iParam0[iVar0 /*26*/])->f_1, 0))
		{
			func_1942((iParam0[iVar0 /*26*/])->f_1, vParam1);
		}
		iVar0++;
	}
}

void func_1324(var uParam0, int iParam1, var uParam2, var uParam3, float fParam4)
{
	__LIB_4__::func_89(uParam3, 0);
	if (__LIB_9__::func_178(uParam3) > 7.5f)
	{
		if (func_1943(uParam0, iParam1, uParam2, fParam4))
		{
			__LIB_1__::func_561(uParam3);
		}
	}
}

void func_1325(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (__LIB_0__::func_272((*uParam0)[iVar0 /*26*/], 0))
		{
			PED::REMOVE_PED_DEFENSIVE_AREA((*uParam0)[iVar0 /*26*/], false);
			PED::_0x1854217C640B39EC((*uParam0)[iVar0 /*26*/], Global_35, vLocal_379, 15f, 1, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES((*uParam0)[iVar0 /*26*/], 42, true);
			PED::SET_PED_COMBAT_ATTRIBUTES((*uParam0)[iVar0 /*26*/], 50, true);
			PED::SET_PED_COMBAT_ATTRIBUTES((*uParam0)[iVar0 /*26*/], 71, true);
			PED::SET_PED_COMBAT_MOVEMENT((*uParam0)[iVar0 /*26*/], 2);
			if (!__LIB_0__::func_491((*uParam0)[iVar0 /*26*/], -2117564886))
			{
				TASK::TASK_COMBAT_HATED_TARGETS((*uParam0)[iVar0 /*26*/], -1f);
			}
		}
		iVar0++;
	}
}

bool func_1326(int iParam0)
{
	if (!func_1944(iParam0))
	{
		if (func_1944(iLocal_415))
		{
			if (__LIB_0__::func_899(&uLocal_77))
			{
				return true;
			}
		}
	}
	else if (iParam0 == iLocal_415)
	{
		if (__LIB_0__::func_899(&uLocal_77))
		{
			return true;
		}
	}
	return false;
}

int func_1327()
{
	int iVar0;
	iVar0 = func_1281(&Local_899);
	if (iVar0 <= 4)
	{
		if (iLocal_3140 > 0)
		{
			CAM::_0xE2BB2D6A9FE2ECDE(1);
			if (CAM::_0x1204EB53A5FBC63D())
			{
				return 1;
			}
		}
		if ((__LIB_0__::func_272(Local_3109, 2) && Local_3109.f_7 > 0) && Local_3109.f_7 < 5)
		{
			if (!func_1945(&Local_899, Local_3109, 9.5f))
			{
				if (iLocal_3140 != 1)
				{
					iLocal_3140 = 1;
					__LIB_2__::func_279(Local_3109, 1);
					func_1946(&Local_899, 0);
					CAM::_0x986F7A51EE3E1F92(Local_3109, 1);
					CAM::_0x6E969927CF632608(1);
				}
			}
			else if (iLocal_3140 != 0)
			{
				iLocal_3140 = 0;
				__LIB_2__::func_279(Local_3109, 0);
				func_1946(&Local_899, 0);
				CAM::_0x5B637D6F3B67716A(Local_3109);
				CAM::_0x6E969927CF632608(0);
			}
		}
		else if (iVar0 <= 2)
		{
			if (iLocal_3140 != 2)
			{
				iLocal_3140 = 2;
				func_1946(&Local_899, 1);
				CAM::_0x6E969927CF632608(1);
			}
		}
	}
	return 0;
}

char* func_1329()
{
	if (__LIB_0__::func_871())
	{
		return sLocal_57;
	}
	return sLocal_58;
}

bool func_1332()
{
	func_1875(&Local_1212, 2, -1071644672 /* Float: -2.5f */);
	if (!func_1877(&(Local_1212[0 /*26*/]), func_204(5, 9), Local_419, Local_419, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0f, 1, 0, 1, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_1212[1 /*26*/]), func_204(5, 9), Local_419, Local_419, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0f, 1, 1, 1, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_1212[2 /*26*/]), func_204(5, 9), Local_419, Local_419, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0f, 1, 0, 1, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_1212[3 /*26*/]), func_204(5, 9), Local_419, Local_419, joaat("WEAPON_REVOLVER_DOUBLEACTION"), 0f, 1, 0, 1, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_1212[4 /*26*/]), func_204(5, 9), Local_419, Local_419, joaat("WEAPON_REVOLVER_DOUBLEACTION"), 0f, 1, 0, 1, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_1212[5 /*26*/]), func_204(5, 9), Local_419, Local_419, joaat("WEAPON_REVOLVER_DOUBLEACTION"), 0f, 1, 0, 1, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	return true;
}

bool func_1333(var uParam0)
{
	if (!func_1411(uParam0, &iLocal_351, func_204(0, 5), 1))
	{
		return false;
	}
	if (!func_1950(&(Local_83.f_1), func_204(0, 10)))
	{
		return false;
	}
	return true;
}

void func_1334(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_272((*iParam0)[iVar0 /*26*/], 0))
		{
			PED::SET_PED_COMBAT_RANGE((*iParam0)[iVar0 /*26*/], iParam1);
		}
		iVar0++;
	}
}

void func_1335(var uParam0)
{
	__LIB_8__::func_806(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_83, "dutch", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_100, "EagleFlies", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_117, "PAYTAH", 0, 0, 0, 0);
	__LIB_5__::func_580(uParam0, iLocal_353, "CANNON", 0, 0, 0, 0);
}

void func_1336()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_371, "CS_Dutch", Local_83, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_371, "ARTHUR", Global_35, 0);
}

void func_1338(int iParam0, char* sParam1, int iParam2, int iParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	vector3 vVar5;
	if (iParam3 >= 0)
	{
		vVar0 = { __LIB_4__::func_147(func_1389(sParam1, iParam2), func_1389(sParam1, iParam3)) };
	}
	else
	{
		vVar0 = { func_1389(sParam1, iParam2) };
	}
	if (iParam2 == 0)
	{
		fVar3 = __LIB_0__::func_152(func_1389(sParam1, iParam2), func_1389(sParam1, iParam2 + 1), 1);
	}
	else
	{
		fVar3 = __LIB_0__::func_152(func_1389(sParam1, (iParam2 - 1)), func_1389(sParam1, iParam2), 1);
	}
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 <= (*iParam0 - 1))
	{
		vVar5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar3, (iParam0[iVar4 /*26*/])->f_18 * Vector(fParam4, fParam4, fParam4)) };
		if (PED::IS_PED_ON_MOUNT((*iParam0)[iVar4 /*26*/]))
		{
			func_870((iParam0[iVar4 /*26*/])->f_1, vVar5, fVar3, 2, 1073741824 /* Float: 2f */);
		}
		else
		{
			func_870((*iParam0)[iVar4 /*26*/], vVar5, fVar3, 2, 1073741824 /* Float: 2f */);
		}
		iVar4++;
	}
}

void func_1339(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_272((*iParam0)[iVar0 /*26*/], 0))
		{
			func_1953(iParam0[iVar0 /*26*/]);
		}
		iVar0++;
	}
}

void func_1340(var uParam0)
{
	switch (__LIB_4__::func_979(uParam0))
	{
		case 1:
			if (func_1823(uParam0, "NTS2_06_FLEE", 0, 1073741824 /* Float: 2f */, 0, 0))
			{
				if (__LIB_4__::func_948(uParam0, 4))
				{
					func_1200(uParam0, 14, 1);
				}
				else
				{
					func_1198(uParam0, 14, 20f);
				}
				__LIB_11__::func_59(uParam0, 6);
			}
			break;
		case 2:
			if (func_1823(uParam0, "NTS2_06_RIDE", 0, 1073741824 /* Float: 2f */, 0, 0))
			{
				func_1200(uParam0, 15, 0);
				__LIB_11__::func_59(uParam0, 3);
			}
			break;
		case 3:
			if (!__LIB_11__::func_736("NTS2_06_RIDE"))
			{
				__LIB_11__::func_338();
				__LIB_11__::func_59(uParam0, 4);
			}
			break;
		case 4:
			if (func_1220(Local_83, cLocal_46, 210))
			{
				if (func_1823(uParam0, "NTS2_06_HIDE", 0, 1073741824 /* Float: 2f */, 0, 0))
				{
					__LIB_11__::func_59(uParam0, 5);
				}
			}
			break;
		case 5:
			if (func_1220(Local_83, cLocal_46, 262))
			{
				if (func_1823(uParam0, "NTS2_06_LEAVE", 0, 1073741824 /* Float: 2f */, 0, 0))
				{
					__LIB_11__::func_59(uParam0, 51);
				}
			}
			break;
		case 6:
			if (!__LIB_0__::func_272(iLocal_351, 0))
			{
				func_1200(uParam0, 15, 0);
				__LIB_11__::func_59(uParam0, -1);
			}
			break;
	}
}

void func_1341()
{
	int iVar0;
	iVar0 = 0;
	switch (iLocal_3143)
	{
		case 0:
			__LIB_4__::func_89(&uLocal_3145, 0);
			if (__LIB_9__::func_178(&uLocal_3145) > 12.5f || (__LIB_0__::func_396(Global_35) && __LIB_0__::func_396(Local_83)))
			{
				__LIB_1__::func_561(&uLocal_3145);
				iLocal_3143 = 1;
			}
			break;
		case 1:
			func_1955(&Local_1212, Global_35, cLocal_46, 30f, -1063256064 /* Float: -5f */, 1, 2.5f);
			iVar0 = 0;
			while (iVar0 <= (Local_1212 - 1))
			{
				if (func_1220(Local_1212[iVar0 /*26*/], cLocal_46, 220))
				{
					iLocal_3143 = 2;
				}
				else
				{
					iVar0++;
				}
			}
			break;
		case 2:
			func_1955(&Local_1212, Global_35, cLocal_47, 30f, -1063256064 /* Float: -5f */, 1, 2.5f);
			if (func_1220(Global_35, cLocal_46, 268))
			{
				iLocal_3143 = 3;
			}
			break;
		case 3:
			func_1247(&Local_1212, cLocal_47, 1, 2f, 1);
			iVar0 = 0;
			while (iVar0 <= (Local_1212 - 1))
			{
				if (func_1403(Local_1212[iVar0 /*26*/], cLocal_47))
				{
					func_430(&Local_1212, 1);
					iLocal_3143 = 4;
				}
				iVar0++;
			}
			break;
		case 4:
			break;
	}
}

void func_1342()
{
	struct<15> Var0;
	vector3 vVar15;
	switch (iLocal_3144)
	{
		case 0:
			__LIB_4__::func_982(Local_83, 3f);
			if (__LIB_0__::func_48(Local_83, Local_83.f_1, 3f, 1))
			{
				iLocal_3144 = 1;
			}
			else if (!__LIB_0__::func_491(Local_83, 242628503))
			{
				Var0.f_2 = -1;
				Var0.f_7 = -1;
				Var0.f_8 = -1082130432;
				Var0.f_12 = -1082130432;
				Var0.f_13 = 1;
				Var0.f_14 = -1082130432;
				Var0.f_3 = 2056;
				Var0.f_12 = 3f;
				Var0 = sLocal_38;
				TASK::OPEN_SEQUENCE_TASK(&(Local_83.f_5));
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(0, &Var0);
				TASK::TASK_MOUNT_ANIMAL(0, Local_83.f_1, 20000, -1, 1073741824 /* Float: 2f */, 4, 0, 0);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, cLocal_46, 138, 0, 274, 0, 0, -1);
				TASK::CLOSE_SEQUENCE_TASK(Local_83.f_5);
				TASK::TASK_PERFORM_SEQUENCE(Local_83, Local_83.f_5);
				TASK::CLEAR_SEQUENCE_TASK(&(Local_83.f_5));
			}
			break;
		case 1:
			if (__LIB_0__::func_272(Local_83.f_1, 0))
			{
				if (__LIB_0__::func_71(Local_83))
				{
					__LIB_11__::func_746(Local_83);
					iLocal_3144 = 2;
				}
				else if (!__LIB_0__::func_491(Local_83, 1868526510) && !__LIB_0__::func_491(Local_83, 242628503))
				{
					if (PED::_IS_MOUNT_SEAT_FREE(Local_83.f_1, -1))
					{
						iLocal_3148 = Local_83.f_1;
						TASK::TASK_MOUNT_ANIMAL(Local_83, iLocal_3148, 20000, -1, 1073741824 /* Float: 2f */, 4, 0, 0);
					}
					else if (PED::_IS_MOUNT_SEAT_FREE(iLocal_351, -1))
					{
						iLocal_3148 = iLocal_351;
						TASK::TASK_MOUNT_ANIMAL(Local_83, iLocal_3148, 20000, -1, 1073741824 /* Float: 2f */, 4, 0, 0);
					}
				}
			}
			else
			{
				PED::SET_PED_MAX_HEALTH(Local_83, 150);
				TASK::TASK_COMBAT_HATED_TARGETS(Local_83, -1f);
				iLocal_3144 = 9;
			}
			break;
		case 2:
			func_1870(Local_83, Global_35, cLocal_46, 1097859072 /* Float: 15f */, 1106247680 /* Float: 30f */, 0, 0, 1073741824 /* Float: 2f */, 0, 2f, 1);
			if (func_1403(Local_83, cLocal_46) || func_1220(Local_83, cLocal_46, 274))
			{
				iLocal_3144 = 3;
			}
			else if (!__LIB_0__::func_491(Local_83, 658540077) && !__LIB_0__::func_491(Local_83, 242628503))
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_83, cLocal_46, 138, 67134464, -1, 0, 0, -1);
			}
			break;
		case 3:
			if (__LIB_0__::func_396(Local_83))
			{
				if (!__LIB_0__::func_491(Local_83, 242628503))
				{
					TASK::OPEN_SEQUENCE_TASK(&(Local_83.f_5));
					TASK::TASK_ACHIEVE_HEADING(0, __LIB_0__::func_152(func_1344(cLocal_46), func_1389(cLocal_46, 268), 1), 0);
					TASK::TASK_DISMOUNT_ANIMAL(0, 131072, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(Local_83.f_5);
					TASK::TASK_PERFORM_SEQUENCE(Local_83, Local_83.f_5);
					TASK::CLEAR_SEQUENCE_TASK(&(Local_83.f_5));
				}
			}
			else if (!__LIB_0__::func_71(Local_83))
			{
				TASK::TASK_STAND_STILL(iLocal_3148, -1);
				TASK::TASK_LOOK_AT_ENTITY(Local_83, Global_35, -1, 0, 51, 0);
				TASK::OPEN_SEQUENCE_TASK(&(Local_83.f_5));
				TASK::TASK_PAUSE(0, 1000);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "DEFAULT_NERVOUS", 10000f, 0, 4);
				TASK::CLOSE_SEQUENCE_TASK(Local_83.f_5);
				TASK::TASK_PERFORM_SEQUENCE(Local_83, Local_83.f_5);
				TASK::CLEAR_SEQUENCE_TASK(&(Local_83.f_5));
				iLocal_3144 = 4;
			}
			break;
		case 4:
			if (func_1220(Global_35, cLocal_46, 268))
			{
				if (!__LIB_0__::func_396(Local_83))
				{
					if (!__LIB_0__::func_396(Global_35))
					{
						TASK::CLEAR_PED_TASKS(Local_83, true, false);
						TASK::CLEAR_PED_SECONDARY_TASK(Local_83);
						TASK::TASK_CLEAR_LOOK_AT(Local_83);
						ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(iLocal_371, Local_83, 0);
						ANIMSCENE::START_ANIM_SCENE(iLocal_371);
						iLocal_3144 = 5;
					}
					else if (__LIB_0__::func_48(Global_35, Local_83, 5f, 1))
					{
						if (!__LIB_0__::func_491(Global_35, 501393341))
						{
							TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
						}
					}
				}
			}
			break;
		case 5:
			if (__LIB_11__::func_25(iLocal_371, 3f))
			{
				vVar15 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3148, -0.5f, -0.8f, 0f) };
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_83, vVar15, 1f, 20000, 0.25f, 512, __LIB_0__::func_152(vVar15, ENTITY::GET_ENTITY_COORDS(iLocal_3148, true, false), 1));
				iLocal_3144 = 6;
			}
			break;
		case 6:
			if (__LIB_11__::func_25(iLocal_371, 7.3f))
			{
				func_1347(iLocal_3148);
				iLocal_3144 = 7;
			}
			break;
		case 7:
			if (!__LIB_0__::func_48(Global_35, iLocal_351, 5f, 1))
			{
				func_1347(iLocal_351);
			}
			if (func_1256(iLocal_371) || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_371, "CS_Dutch"))
			{
				iLocal_3144 = 8;
			}
			break;
		case 9:
			break;
	}
}

Vector3 func_1344(char* sParam0)
{
	int iVar0;
	vector3 vVar1;
	if (TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam0, &iVar0))
	{
		if (TASK::WAYPOINT_RECORDING_GET_COORD(sParam0, (iVar0 - 1), &vVar1))
		{
			return vVar1;
		}
	}
	return vLocal_379;
}

bool func_1346()
{
	if (__LIB_0__::func_272(Global_35, 0) && __LIB_0__::func_272(iLocal_351, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(Global_35) == iLocal_351 && PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 32768, 0))
		{
			return true;
		}
	}
	return false;
}

void func_1347(int iParam0)
{
	if (__LIB_0__::func_272(iParam0, 0))
	{
		if (!__LIB_0__::func_491(iParam0, 242628503))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_409);
			TASK::TASK_HORSE_ACTION(0, 1, 0, 0);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, cLocal_46, 0, 148488, 210, 0, 0, -1);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_409);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_409);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_409);
		}
	}
}

bool func_1352()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_354))
	{
		iLocal_354 = VEHICLE::_CREATE_MISSION_TRAIN(iLocal_417, -236.5878f, 1653.652f, 170.358f, false, false, false, true);
		return false;
	}
	else if (!VEHICLE::_0xBD3C4A2ED509205E(iLocal_354))
	{
		return false;
	}
	__LIB_8__::func_917(iLocal_354, 0f);
	return true;
}

void func_1353()
{
	Local_3160[0 /*12*/].f_1 = 2;
	Local_3160[1 /*12*/].f_1 = 24;
	Local_3160[2 /*12*/].f_1 = 45;
	Local_3160[3 /*12*/].f_1 = 0;
	Local_3160[0 /*12*/].f_2 = 23;
	Local_3160[1 /*12*/].f_2 = 40;
	Local_3160[2 /*12*/].f_2 = -1;
	Local_3160[3 /*12*/].f_2 = -1;
	Local_3160[0 /*12*/].f_3 = -1;
	Local_3160[1 /*12*/].f_3 = 5;
	Local_3160[2 /*12*/].f_3 = 35;
	Local_3160[3 /*12*/].f_3 = 35;
	Local_3160[0 /*12*/].f_4 = 0f;
	Local_3160[1 /*12*/].f_4 = 1.5f;
	Local_3160[2 /*12*/].f_4 = 1.5f;
	Local_3160[3 /*12*/].f_4 = 0f;
	Local_3160[0 /*12*/].f_5[0 /*3*/] = { func_369(6, 8) };
	Local_3160[0 /*12*/].f_5[1 /*3*/] = { func_369(6, 9) };
	Local_3160[1 /*12*/].f_5[0 /*3*/] = { func_369(6, 11) };
	Local_3160[1 /*12*/].f_5[1 /*3*/] = { func_369(6, 12) };
	Local_3160[2 /*12*/].f_5[0 /*3*/] = { func_369(6, 16) };
	Local_3160[2 /*12*/].f_5[1 /*3*/] = { func_369(6, 17) };
	Local_3160[3 /*12*/].f_5[0 /*3*/] = { func_369(6, 18) };
	Local_3160[3 /*12*/].f_5[1 /*3*/] = { func_369(6, 19) };
}

void func_1354()
{
	uLocal_3221[0] = func_1959("TEETER", func_204(13, 1), 0f, 1.75f, 0f);
	uLocal_3221[1] = func_1959("LEAN_IN_DIRECTION", func_204(13, 3), 0f, 0.5f, 0f);
	uLocal_3221[2] = func_1959("LEAN_IN_DIRECTION", func_204(13, 14), 0f, 0.1f, 0f);
	uLocal_3221[3] = func_1959("TEETER", func_204(13, 13), 0f, 0.5f, 0f);
}

void func_1357()
{
	WEAPON::SET_CURRENT_PED_WEAPON(Local_83, joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH"), false, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Local_83, joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH_DUALWIELD"), false, 1, false, false);
	TASK::TASK_SWAP_WEAPON(Local_83, 1, 1, 0, 0);
	PED::_0x8ACC0506743A8A5C(Local_83, joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
	PED::SET_PED_ACCURACY(Local_83, 4);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_83, 27, false);
}

void func_1358(var uParam0)
{
	func_1960();
	switch (__LIB_4__::func_979(uParam0))
	{
		case 1:
			if (__LIB_11__::func_20(32))
			{
				if (func_1823(uParam0, "NTS2_07_LETSGO", 1f, 1073741824 /* Float: 2f */, 0, 1))
				{
					func_1198(uParam0, 16, 12f);
					__LIB_11__::func_59(uParam0, -1);
				}
			}
			else if (func_1823(uParam0, "NTS2_07_DECEND", 1f, 1073741824 /* Float: 2f */, 0, 1))
			{
				func_1198(uParam0, 16, 20f);
				__LIB_11__::func_59(uParam0, -1);
			}
			break;
		case 3:
			if (func_1823(uParam0, "NTS2_07_WAVE1", 1f, 1073741824 /* Float: 2f */, 0, 1))
			{
				__LIB_11__::func_59(uParam0, -1);
			}
			break;
		case 4:
			if (func_1823(uParam0, "NTS2_07_WAVE2", 0, 1073741824 /* Float: 2f */, 1, 0))
			{
				__LIB_11__::func_59(uParam0, -1);
			}
			break;
		case 5:
			if (func_1823(uParam0, "NTS2_07_WAVE3", 0, 1073741824 /* Float: 2f */, 1, 0))
			{
				__LIB_11__::func_59(uParam0, 7);
			}
			break;
		case 6:
			if (func_1823(uParam0, "NTS2_07_WAVE4", 0, 1073741824 /* Float: 2f */, 1, 0))
			{
				__LIB_11__::func_59(uParam0, 7);
			}
			break;
		case 7:
			if (func_1823(uParam0, "NTS2_07_OVERRUN", 5f, 1073741824 /* Float: 2f */, 0, 1))
			{
				__LIB_11__::func_59(uParam0, -1);
			}
			break;
		case 8:
			if (func_1961(uParam0))
			{
				if (iLocal_3159 == 2)
				{
					__LIB_11__::func_59(uParam0, 11);
				}
				else
				{
					__LIB_11__::func_59(uParam0, -1);
				}
			}
			break;
		case 11:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_83, 0))
			{
				if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_83))
				{
					if (func_1823(uParam0, "NTS2_07_LETSGO", 2.5f, 1073741824 /* Float: 2f */, 0, 1))
					{
						__LIB_11__::func_59(uParam0, -1);
					}
				}
			}
			break;
		case 9:
			if (func_1823(uParam0, "NTS2_07_LEAVE", 0, 1073741824 /* Float: 2f */, 0, 1))
			{
				func_1198(uParam0, 18, 2.5f);
				__LIB_11__::func_59(uParam0, 10);
			}
			break;
		case 10:
			func_1823(uParam0, "NTS2_07_LEAVE", 8f, 1073741824 /* Float: 2f */, 0, 1);
			break;
	}
}

void func_1359(var uParam0)
{
	if (iLocal_3158 == 0)
	{
		if (func_1962())
		{
			iLocal_3158 = 1;
		}
	}
	if (func_1963())
	{
		__LIB_11__::func_66(uParam0, func_1557(1), "", 1, 0);
	}
	if (Local_3160[iLocal_3159 /*12*/] >= 2)
	{
		if (func_1964())
		{
			__LIB_11__::func_66(uParam0, func_1557(1), "", 1, 0);
		}
	}
}

void func_1360(var uParam0)
{
	if (iLocal_3158 == 0)
	{
		switch (Local_3160[iLocal_3159 /*12*/])
		{
			case 0:
				if (func_1965())
				{
					if (iLocal_3159 == 1 || iLocal_3159 == 2)
					{
						__LIB_4__::func_89(&uLocal_3212, 0);
					}
					Local_3160[iLocal_3159 /*12*/] = 1;
				}
				break;
			case 1:
				func_1966();
				if (iLocal_3159 == 2)
				{
					if (func_1220(Global_35, cLocal_39, Local_3160[iLocal_3159 /*12*/].f_1) || (func_1220(Global_35, cLocal_39, 42) && !func_1967(&Local_1631)))
					{
						func_1968();
						Local_3160[iLocal_3159 /*12*/] = 2;
					}
				}
				else if (func_1220(Local_83, cLocal_39, Local_3160[iLocal_3159 /*12*/].f_1) || func_1220(Global_35, cLocal_39, Local_3160[iLocal_3159 /*12*/].f_1))
				{
					func_1968();
					Local_3160[iLocal_3159 /*12*/] = 2;
				}
				break;
			case 2:
				if (func_1969())
				{
					func_1970(uParam0);
					func_1971();
					func_1972();
					if (iLocal_3157 != 7)
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_83, 27, true);
						iLocal_3157 = 3;
					}
					Local_3160[iLocal_3159 /*12*/] = 3;
				}
				break;
			case 3:
				func_1280(uParam0, 1101004800 /* Float: 20f */);
				Local_3160[iLocal_3159 /*12*/] = func_1973(uParam0);
				break;
			case 4:
				if ((func_1974() <= 0 || (!func_1975() && __LIB_9__::func_178(&uLocal_3209) > 5f)) || __LIB_9__::func_178(&uLocal_3209) > 15f)
				{
					__LIB_11__::func_59(uParam0, 8);
					iLocal_3157 = 1;
					Local_3160[iLocal_3159 /*12*/] = 5;
				}
				break;
			case 5:
				__LIB_2__::func_259(&uLocal_3215);
				func_1976();
				__LIB_1__::func_561(&uLocal_3209);
				__LIB_1__::func_561(&uLocal_80);
				iLocal_3159++;
				break;
		}
	}
}

void func_1361(var uParam0)
{
	int iVar0;
	int iVar1;
	switch (iLocal_3158)
	{
		case 1:
			if (__LIB_0__::func_272(Global_35, 0))
			{
				if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(cLocal_39, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &iVar0))
				{
					if (iVar0 <= 20)
					{
						if (TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(cLocal_46, &iVar1))
						{
							iLocal_3150 = __LIB_0__::func_309(((iVar1 - 1) - (20 - iVar0)), 0, (iVar1 - 1));
							iLocal_3158 = 2;
						}
					}
					else
					{
						iLocal_3150 = (iVar0 - 20);
						iLocal_3158 = 3;
					}
				}
			}
			break;
		case 2:
			if (func_1977())
			{
				func_1338(&Local_2260, cLocal_46, iLocal_3150, -1, 1065353216 /* Float: 1f */);
				iLocal_3158 = 4;
			}
			break;
		case 3:
			if (func_1977())
			{
				func_1338(&Local_2260, cLocal_39, iLocal_3150, -1, 1065353216 /* Float: 1f */);
				iLocal_3158 = 5;
			}
			break;
		case 4:
			if (func_1247(&Local_2260, cLocal_46, 0, 2.5f, 1))
			{
				iLocal_3158 = 5;
			}
			if (func_1978())
			{
				iLocal_3158 = 6;
			}
			break;
		case 5:
			func_1247(&Local_2260, cLocal_39, 0, 2.5f, 1);
			if (func_1978())
			{
				iLocal_3158 = 6;
			}
			break;
		case 6:
			__LIB_11__::func_66(uParam0, func_1557(5), "", 1, 0);
			break;
	}
}

void func_1362()
{
	int iVar0;
	switch (iLocal_3157)
	{
		case 0:
			if (__LIB_11__::func_20(32))
			{
				iLocal_3157 = 2;
			}
			else
			{
				iLocal_3157 = 1;
			}
			break;
		case 1:
			__LIB_4__::func_89(&(Local_83.f_6), 0);
			if (__LIB_9__::func_178(&(Local_83.f_6)) > Local_3160[iLocal_3159 /*12*/].f_4)
			{
				__LIB_1__::func_561(&(Local_83.f_6));
				iLocal_3157 = 2;
			}
			break;
		case 2:
			if (!__LIB_0__::func_491(Local_83, 658540077))
			{
				if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(cLocal_39, ENTITY::GET_ENTITY_COORDS(Local_83, true, false), &iVar0))
				{
					if (PED::IS_PED_DEFENSIVE_AREA_ACTIVE(Local_83, false))
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(Local_83, false);
					}
					__LIB_1__::func_561(&(Local_83.f_6));
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_83, cLocal_39, (iVar0 + func_1979()), 67111936, -1, 0, 0, -1);
				}
			}
			else
			{
				func_1980();
			}
			break;
		case 3:
			__LIB_4__::func_982(Local_83, 1073741824 /* Float: 2f */);
			if (func_1981())
			{
				if ((__LIB_0__::func_266(Local_83, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_83, false), 2.5f, 1, 1) || __LIB_0__::func_266(Local_83, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_83, true), 2.5f, 1, 1)) || PED::IS_PED_IN_COVER(Local_83, false, false))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_83, 27, false);
					iLocal_3157 = 4;
				}
			}
			else
			{
				func_1972();
			}
			func_1982();
			break;
		case 4:
			__LIB_4__::func_89(&(Local_83.f_6), 0);
			if (func_1220(Global_35, cLocal_39, Local_3160[iLocal_3159 /*12*/].f_1))
			{
				func_1983();
				__LIB_2__::func_279(Local_83, 0);
				__LIB_1__::func_585(&(Local_83.f_6), (25f * 0.5f));
				iLocal_3157 = 5;
			}
			else if (__LIB_9__::func_178(&(Local_83.f_6)) > 10f)
			{
				TASK::TASK_COMBAT_HATED_TARGETS(Local_83, -1f);
				PED::SET_PED_ACCURACY(Local_83, 0);
				__LIB_2__::func_279(Local_83, 1);
				func_1984(1);
				__LIB_1__::func_561(&(Local_83.f_6));
				iLocal_3157 = 8;
			}
			else if (__LIB_9__::func_178(&(Local_83.f_6)) > (10f * 0.9f))
			{
				PED::SET_PED_RESET_FLAG(Local_83, 9, true);
			}
			break;
		case 5:
			if (!__LIB_0__::func_491(Local_83, -2117564886))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_83, 27, false);
				TASK::TASK_COMBAT_HATED_TARGETS(Local_83, -1f);
			}
			if (__LIB_2__::func_0(Local_83, 0.2f, 0.8f, 0.2f, 0.8f))
			{
				if (!__LIB_0__::func_899(&(Local_83.f_6)))
				{
					if (Local_83.f_2 == 0)
					{
						Local_83.f_2 = PED::_0xCD66FEA29400A0B5(Local_83);
					}
					else
					{
						iLocal_3157 = 6;
					}
				}
			}
			if (__LIB_9__::func_178(&(Local_83.f_6)) > 25f)
			{
				__LIB_1__::func_561(&(Local_83.f_6));
			}
			break;
		case 6:
			if (!__LIB_0__::func_272(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Local_83.f_2), 2))
			{
				__LIB_4__::func_89(&(Local_83.f_6), 0);
				if (__LIB_9__::func_178(&(Local_83.f_6)) > 0.5f)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_83, 27, false);
					__LIB_2__::func_259(&(Local_83.f_6));
					iLocal_3157 = 5;
					Local_83.f_2 = 0;
				}
			}
			else if (!__LIB_0__::func_491(Local_83, 780511057))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_83, 27, true);
				__LIB_2__::func_279(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Local_83.f_2), 1);
				TASK::TASK_COMBAT_PED(Local_83, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Local_83.f_2), 16384, 0);
			}
			break;
		case 7:
			break;
		case 8:
			if (__LIB_0__::func_272(Local_83, 0))
			{
				PED::SET_PED_RESET_FLAG(Local_83, 9, true);
			}
			break;
	}
}

void func_1363()
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::GET_PLAYER_INDEX());
		PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 28, 1);
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			if (!__LIB_0__::func_491(Global_35, 501393341))
			{
				TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
			}
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			if (!__LIB_0__::func_491(Global_35, -828834893))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, 0);
			}
		}
	}
}

int func_1365()
{
	switch (iLocal_3156)
	{
		case 0:
			if (iLocal_3159 >= 2)
			{
				iLocal_3156 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_272(Global_35, 0))
			{
				iLocal_3156 = 4;
			}
			else if (func_1220(Local_83, cLocal_39, 63))
			{
				func_1224();
				iLocal_3156 = 3;
			}
			else if (func_1220(Global_35, cLocal_39, 63))
			{
				func_1224();
				ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
				CAM::SET_GAMEPLAY_COORD_HINT(vLocal_3153 + Vector(1f, 0f, 0f), 2000, -1, 2000, 0);
				WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
				TASK::TASK_SWAP_WEAPON(Global_35, 0, 1, 0, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, func_369(6, 7), 1.75f, 20000, 0.25f, 4202497, 40000f);
				iLocal_3156 = 2;
			}
			break;
		case 2:
			CAM::_0xE296208C273BD7F0(500, -1, 0, 17, 1, 0);
			if (__LIB_0__::func_266(Global_35, func_369(6, 7), 8f, 1, 0))
			{
				iLocal_3156 = 3;
			}
			break;
		case 3:
			return 1;
	}
	return 0;
}

bool func_1366(var uParam0, float fParam1)
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (__LIB_11__::func_24(Global_35) < fParam1)
		{
			__LIB_11__::func_66(uParam0, "NTS2_DEATH", "", 1, 0);
			return true;
		}
	}
	return false;
}

bool func_1367()
{
	func_1875(&Local_1762, 2, -1071644672 /* Float: -2.5f */);
	if (!func_1877(&(Local_1762[0 /*26*/]), func_204(7, 2), Local_419, Local_419, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, 1, 1, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_1762[1 /*26*/]), func_204(7, 2), Local_419, Local_419, joaat("WEAPON_REPEATER_CARBINE"), 0, 1, 1, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_1762[2 /*26*/]), func_204(7, 2), Local_419, Local_419, joaat("WEAPON_REPEATER_CARBINE"), 0, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_1762[3 /*26*/]), func_204(7, 2), Local_419, Local_419, joaat("WEAPON_REPEATER_CARBINE"), 0, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_1762[4 /*26*/]), func_204(7, 2), Local_419, Local_419, joaat("WEAPON_REPEATER_CARBINE"), 0, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_1762[5 /*26*/]), func_204(7, 2), Local_419, Local_419, joaat("WEAPON_REPEATER_CARBINE"), 0, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_1762[6 /*26*/]), func_204(7, 2), Local_419, Local_419, joaat("WEAPON_REPEATER_CARBINE"), 0, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_1762[7 /*26*/]), func_204(7, 2), Local_419, Local_419, joaat("WEAPON_REPEATER_CARBINE"), 0, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_1762[8 /*26*/]), func_204(7, 2), Local_419, Local_419, joaat("WEAPON_REPEATER_CARBINE"), 0, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_1762[9 /*26*/]), func_204(7, 2), Local_419, Local_419, joaat("WEAPON_REPEATER_CARBINE"), 0, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	return true;
}

bool func_1368()
{
	if (__LIB_0__::func_272(Local_1762[0 /*26*/], 0) && __LIB_0__::func_272(Local_1762[1 /*26*/], 0))
	{
		if ((PED::_0xA0BC8FAED8CFEB3C(Local_1762[0 /*26*/]) && PED::_0xA0BC8FAED8CFEB3C(Local_1762[1 /*26*/])) && !bLocal_3229)
		{
			PED::_SET_PED_BODY_COMPONENT(Local_1762[0 /*26*/], 2083731153);
			PED::_UPDATE_PED_VARIATION(Local_1762[0 /*26*/], true, true, true, true, false);
			PED::_SET_PED_BODY_COMPONENT(Local_1762[1 /*26*/], 434198822);
			PED::_UPDATE_PED_VARIATION(Local_1762[1 /*26*/], true, true, true, true, false);
			bLocal_3229 = true;
		}
		return bLocal_3229;
	}
	return false;
}

bool func_1369()
{
	if (!func_1877(&(Local_2023[0 /*26*/]), func_204(7, 3), Local_419, Local_419, joaat("WEAPON_REPEATER_CARBINE"), 0, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_2023[1 /*26*/]), func_204(7, 3), Local_419, Local_419, joaat("WEAPON_REPEATER_CARBINE"), 0, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_2023[2 /*26*/]), func_204(7, 3), Local_419, Local_419, joaat("WEAPON_REPEATER_CARBINE"), 0, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_2023[3 /*26*/]), func_204(7, 3), Local_419, Local_419, joaat("WEAPON_REPEATER_CARBINE"), 0, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_2023[4 /*26*/]), func_204(7, 3), Local_419, Local_419, joaat("WEAPON_REPEATER_CARBINE"), 0, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	return true;
}

bool func_1370()
{
	if (!func_1877(&Local_2417, func_204(7, 18), Local_419, Local_419, joaat("WEAPON_SNIPERRIFLE_CARCANO"), 0, 0, 0, 0, 1, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	return true;
}

bool func_1371()
{
	STREAMING::_REQUEST_MOVE_NETWORK_DEF(sLocal_54);
	return STREAMING::_HAS_MOVE_NETWORK_DEF_LOADED(sLocal_54);
}

void func_1372()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_1762 - 1))
	{
		func_1195(Local_1762[iVar0 /*26*/], func_476(7, iVar0 + 4), 2, 1073741824 /* Float: 2f */);
		iVar0++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (Local_2023 - 1))
	{
		func_1195(Local_2023[iVar1 /*26*/], func_476(7, iVar1 + 13), 2, 1073741824 /* Float: 2f */);
		iVar1++;
	}
}

void func_1373(var uParam0)
{
	__LIB_8__::func_806(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_83, "dutch", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_1762[0 /*26*/], "S_M_M_Army_01", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_1762[1 /*26*/], "S_M_M_ARMY_01^1", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_1762[2 /*26*/], "S_M_M_Army_01^10", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_1762[3 /*26*/], "S_M_M_Army_01^11", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_1762[4 /*26*/], "S_M_M_Army_01^12", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_1762[5 /*26*/], "S_M_M_Army_01^13", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_1762[6 /*26*/], "S_M_M_ARMY_01^2", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_1762[7 /*26*/], "S_M_M_ARMY_01^3", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_1762[8 /*26*/], "S_M_M_ARMY_01^4", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_1762[9 /*26*/], "S_M_M_ARMY_01^14", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_2023[0 /*26*/], "S_M_M_Army_01^5", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_2023[1 /*26*/], "S_M_M_Army_01^6", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_2023[2 /*26*/], "S_M_M_Army_01^7", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_2023[3 /*26*/], "S_M_M_Army_01^8", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_2023[4 /*26*/], "S_M_M_Army_01^9", 0, 0, 0, 0);
}

void func_1374()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_372, "player_zero", Global_35, 0);
}

void func_1375()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_373, "CS_Dutch", Local_83, 0);
}

void func_1376()
{
	Local_1762[0 /*26*/].f_22 = "S_M_M_Army_01";
	Local_1762[1 /*26*/].f_22 = "S_M_M_Army_01^1";
	Local_1762[2 /*26*/].f_22 = "S_M_M_Army_01^10";
	Local_1762[3 /*26*/].f_22 = "S_M_M_Army_01^11";
	Local_1762[4 /*26*/].f_22 = "S_M_M_Army_01^12";
	Local_1762[5 /*26*/].f_22 = "S_M_M_Army_01^13";
	Local_1762[6 /*26*/].f_22 = "S_M_M_Army_01^2";
	Local_1762[7 /*26*/].f_22 = "S_M_M_Army_01^3";
	Local_1762[8 /*26*/].f_22 = "S_M_M_Army_01^4";
	Local_1762[9 /*26*/].f_22 = "S_M_M_Army_01^14";
	Local_2023[0 /*26*/].f_22 = "S_M_M_Army_01^5";
	Local_2023[1 /*26*/].f_22 = "S_M_M_Army_01^6";
	Local_2023[2 /*26*/].f_22 = "S_M_M_Army_01^7";
	Local_2023[3 /*26*/].f_22 = "S_M_M_Army_01^8";
	Local_2023[4 /*26*/].f_22 = "S_M_M_Army_01^9";
}

void func_1377()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_374, "CS_Dutch", Local_83, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_374, Local_1762[0 /*26*/].f_22, Local_1762[0 /*26*/], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_374, Local_1762[1 /*26*/].f_22, Local_1762[1 /*26*/], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_374, Local_1762[2 /*26*/].f_22, Local_1762[2 /*26*/], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_374, Local_1762[3 /*26*/].f_22, Local_1762[3 /*26*/], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_374, Local_1762[4 /*26*/].f_22, Local_1762[4 /*26*/], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_374, Local_1762[5 /*26*/].f_22, Local_1762[5 /*26*/], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_374, Local_1762[6 /*26*/].f_22, Local_1762[6 /*26*/], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_374, Local_1762[7 /*26*/].f_22, Local_1762[7 /*26*/], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_374, Local_1762[8 /*26*/].f_22, Local_1762[8 /*26*/], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_374, Local_1762[9 /*26*/].f_22, Local_1762[9 /*26*/], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_374, Local_2023[0 /*26*/].f_22, Local_2023[0 /*26*/], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_374, Local_2023[1 /*26*/].f_22, Local_2023[1 /*26*/], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_374, Local_2023[2 /*26*/].f_22, Local_2023[2 /*26*/], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_374, Local_2023[3 /*26*/].f_22, Local_2023[3 /*26*/], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_374, Local_2023[4 /*26*/].f_22, Local_2023[4 /*26*/], 0);
}

void func_1378()
{
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	if (iLocal_3231 != 8 && iLocal_3231 != 5)
	{
		if (CAM::_0xAA235E2F2C09E952("script@Story@NTS2@CliffJump"))
		{
			CAM::_0x702B75DC9D3EDE56(true);
		}
	}
	else
	{
		CAM::_0xCF69EA05CD9C33C9();
		HUD::_0xC9CAEAEEC1256E54(1733954764);
	}
}

void func_1379()
{
	func_1986(&Local_1762, 0);
	func_1986(&Local_2023, -1);
	Local_2417.f_2 = Global_35;
	func_1987(&Local_1762, joaat("BLIP_MODIFIER_ENEMY_DISAPPEARING"));
	func_1987(&Local_1762, -1034486097);
	func_1987(&Local_2023, joaat("BLIP_MODIFIER_ENEMY_DISAPPEARING"));
	func_1987(&Local_2023, -1034486097);
	PED::_SET_PED_DAMAGE_MODIFIER(Local_2417, 10f);
	ENTITY::SET_ENTITY_INVINCIBLE(Local_2417, true);
	WEAPON::_0x5230D3F6EE56CFE6(Local_2417, 0);
	WEAPON::_SET_PED_INFINITE_AMMO_CLIP(Local_2417, true);
	WEAPON::_0x431240A58484D5D0(Local_2417, 0);
	PED::SET_PED_CONFIG_FLAG(Local_1762[1 /*26*/], 159, true);
	PED::_0x8ACC0506743A8A5C(Local_1762[1 /*26*/], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
}

float func_1380()
{
	vector3 vVar0;
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_372, "player_zero", &vVar0, true, "pl_Jump_Edge", 2))
	{
		return __LIB_0__::func_152(vVar0, func_369(7, 0), 1);
	}
	return func_1867(7, 0);
}

void func_1382(var uParam0)
{
	switch (__LIB_4__::func_979(uParam0))
	{
		case 1:
			func_1200(uParam0, 19, 0);
			__LIB_11__::func_59(uParam0, -1);
			break;
		case 2:
			if (func_1988(uParam0, iLocal_3234))
			{
				__LIB_11__::func_59(uParam0, 51);
			}
			break;
	}
}

void func_1383()
{
	if (iLocal_3231 == 2)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_EQUIP_ITEM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_ACTION"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_PC"), false);
	}
	if (iLocal_3231 != 3)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER_TRANSITION"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_CRAFTING_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), false);
	ENTITY::_0xC3ABCFBC7D74AFA5(Global_35, 11, 1);
	ENTITY::_0xC3ABCFBC7D74AFA5(Global_35, 9, 1);
}

void func_1384()
{
	fLocal_3230 = func_1989();
	if (iLocal_3232 > 0 && iLocal_3232 < 6)
	{
		func_1990(4, fLocal_3230);
	}
	switch (iLocal_3232)
	{
		case 0:
			if (func_1991())
			{
				if (func_1992(0))
				{
					iLocal_3232 = 1;
				}
			}
			break;
		case 1:
			if (!__LIB_10__::func_978())
			{
				iLocal_3232 = 2;
			}
			else if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MOVE_DOWN_ONLY")))
			{
				func_1994(2);
			}
			break;
		case 2:
			if (func_1992(1))
			{
				iLocal_3232 = 3;
			}
			break;
		case 3:
			if (!__LIB_10__::func_978())
			{
				iLocal_3232 = 4;
			}
			else if (func_1995(0) || (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MOVE_DOWN_ONLY")) && func_1996()))
			{
				func_1994(3);
			}
			break;
		case 4:
			if (func_1992(0))
			{
				if (func_1997() == 0)
				{
					__LIB_1__::func_281(&iLocal_3243, 1, 1);
					iLocal_3232 = 5;
				}
				else
				{
					iLocal_3232 = 1;
				}
			}
			break;
		case 5:
			if (!TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_35))
			{
				iLocal_3232 = 6;
			}
			break;
	}
	if (!TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_35))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	}
}

int func_1385(var uParam0)
{
	switch (iLocal_3231)
	{
		case 0:
			iLocal_3231 = 1;
			break;
		case 1:
			if (func_1998())
			{
				func_449(1, 1, 0);
				__LIB_1__::func_281(&iLocal_3242, 1, 1);
				PED::_0x2208438012482A1A(Global_35, true, true);
				iLocal_3231 = 5;
			}
			else if ((__LIB_1__::func_514(iLocal_3242, 1) || __LIB_5__::func_777(iLocal_3242, 1)) || PLAYER::_0x621D1B289CAF5978(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::_0xEBB6E27AC2FF32DA(PLAYER::GET_PLAYER_INDEX(), Local_1762[0 /*26*/], 0, 1, 0);
				__LIB_1__::func_281(&iLocal_3242, 1, 1);
				iLocal_3231 = 2;
			}
			else if (func_2000() >= 3)
			{
				func_2001(1.25f, 1, 1);
				__LIB_1__::func_281(&iLocal_3242, 1, 1);
				__LIB_11__::func_59(uParam0, -1);
				iLocal_3231 = 8;
			}
			break;
		case 2:
			if (__LIB_9__::func_178(&uLocal_3235) > 1f || !__LIB_0__::func_899(&uLocal_3235))
			{
				if (!PLAYER::_0x621D1B289CAF5978(PLAYER::GET_PLAYER_INDEX()))
				{
					PLAYER::_0xEBB6E27AC2FF32DA(PLAYER::GET_PLAYER_INDEX(), Local_1762[0 /*26*/], 0, 1, 0);
					__LIB_2__::func_259(&uLocal_3235);
				}
				else
				{
					__LIB_1__::func_561(&uLocal_3235);
					iLocal_3243 = __LIB_1__::func_877("NTS2_CTXT_BACK", joaat("INPUT_MOVE_DOWN_ONLY"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
					iLocal_3231 = 3;
				}
			}
			else if (func_2000() >= 3)
			{
				func_2001(1.25f, 1, 1);
				__LIB_1__::func_281(&iLocal_3242, 1, 1);
				__LIB_11__::func_59(uParam0, -1);
				iLocal_3231 = 8;
			}
			break;
		case 3:
			if (!__LIB_0__::func_139(iLocal_3241))
			{
				if (func_2000() >= 4)
				{
					if (__LIB_0__::func_139(iLocal_3243))
					{
						__LIB_1__::func_281(&iLocal_3243, 1, 1);
					}
					else
					{
						iLocal_3241 = __LIB_1__::func_877("NTS2_CTXT_JMP", joaat("INPUT_JUMP"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
					}
				}
			}
			else if (!__LIB_0__::func_572(iLocal_3241, 0))
			{
				__LIB_1__::func_221(iLocal_3241, 1, 1);
			}
			else if (__LIB_1__::func_514(iLocal_3241, 1) || func_2003())
			{
				AUDIO::_0x36559148B78853B3(1, 0, 0);
				AUDIO::STOP_SCRIPTED_CONVERSATION("NTS2_IG8", false, false);
				func_449(1, 1, 0);
				__LIB_1__::func_281(&iLocal_3241, 1, 1);
				func_2004();
				func_2005(1);
				__LIB_11__::func_59(uParam0, 2);
				iLocal_3231 = 6;
				Jump @1347; //curOff = 594
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_83, joaat("JUMP")))
			{
				func_2001(1.25f, 0, 0);
				iLocal_3231 = 7;
			}
			else
			{
				if (!PLAYER::_0x621D1B289CAF5978(PLAYER::GET_PLAYER_INDEX()) || func_1998())
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					iLocal_3231 = 5;
				}
				else if (func_2006())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 2304, false);
					TASK::TASK_MELEE(Local_1762[1 /*26*/], Global_35, joaat("AR_TAKEDOWN_ARREST_FRONT"), 1, 1, 1065353216 /* Float: 1f */, 1, -1082130432 /* Float: -1f */);
					iLocal_3231 = 9;
				}
				else if (PLAYER::_0x0F4EAF69DA41AF43(PLAYER::GET_PLAYER_INDEX()) > 0.5f)
				{
					iLocal_3226++;
					iLocal_3231 = 4;
				}
				Jump @1347; //curOff = 759
				if (__LIB_0__::func_139(iLocal_3241))
				{
					if (__LIB_0__::func_572(iLocal_3241, 0))
					{
						__LIB_1__::func_221(iLocal_3241, 0, 1);
					}
				}
				__LIB_4__::func_89(&uLocal_3235, 0);
				if (__LIB_9__::func_178(&uLocal_3235) > 7.5f || iLocal_3226 >= 4)
				{
					func_2001(1053609165 /* Float: 0.4f */, 1, 1);
					__LIB_1__::func_561(&uLocal_3235);
					iLocal_3231 = 8;
				}
				else if (!PLAYER::_0x621D1B289CAF5978(PLAYER::GET_PLAYER_INDEX()) || func_1998())
				{
					__LIB_1__::func_561(&uLocal_3235);
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					iLocal_3231 = 5;
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_83, joaat("JUMP")))
				{
					func_2001(1.25f, 0, 0);
					iLocal_3231 = 7;
				}
				else if (PLAYER::_0x0F4EAF69DA41AF43(PLAYER::GET_PLAYER_INDEX()) < 0.25f)
				{
					__LIB_1__::func_561(&uLocal_3235);
					iLocal_3231 = 3;
				}
				Jump @1347; //curOff = 958
				func_2007();
				__LIB_4__::func_89(&uLocal_3235, 0);
				if (__LIB_9__::func_178(&uLocal_3235) > 1.25f)
				{
					func_2001(1053609165 /* Float: 0.4f */, 1, 1);
					__LIB_1__::func_561(&uLocal_3235);
					__LIB_11__::func_59(uParam0, -1);
					iLocal_3231 = 8;
				}
				Jump @1347; //curOff = 1019
				func_2007();
				if (__LIB_11__::func_24(Global_35) < 136f)
				{
					func_1388(Global_35);
				}
				if (__LIB_11__::func_24(Local_83) < 136f)
				{
					func_1388(Local_83);
				}
				if (func_1256(iLocal_372) || __LIB_11__::func_24(Global_35) < 129f)
				{
					iLocal_3231 = 10;
					return 1;
				}
				Jump @1347; //curOff = 1108
				func_2007();
				func_2005(0);
				func_2008(&Local_1762, 1);
				func_2008(&Local_2023, 1);
				if (func_2009())
				{
					if (!PLAYER::_0x621D1B289CAF5978(PLAYER::GET_PLAYER_INDEX()) || func_1998())
					{
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
					}
				}
				if (func_1256(iLocal_374))
				{
					iLocal_3231 = 8;
				}
				Jump @1347; //curOff = 1189
				func_2007();
				if (ENTITY::DOES_ENTITY_EXIST(Global_35))
				{
					func_2010();
				}
				if (func_2009())
				{
					if (!PLAYER::_0x621D1B289CAF5978(PLAYER::GET_PLAYER_INDEX()) || func_1998())
					{
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
					}
				}
				Jump @1347; //curOff = 1248
				if (__LIB_0__::func_139(iLocal_3243))
				{
					__LIB_1__::func_281(&iLocal_3243, 1, 1);
				}
				if (PLAYER::_0x621D1B289CAF5978(PLAYER::GET_PLAYER_INDEX()))
				{
					if (PED::GET_MELEE_TARGET_FOR_PED(Global_35) == Local_1762[1 /*26*/])
					{
						func_449(0, 0, 1);
					}
				}
				__LIB_4__::func_89(&uLocal_3235, 0);
				if (__LIB_9__::func_178(&uLocal_3235) > 5f)
				{
					__LIB_11__::func_66(uParam0, "NTS2_ARRESTED", "", 1, 0);
				}
				Jump @1347; //curOff = 1340
				return 1;
			}
			return 0;
			default:
				break;
	}
}

void func_1386(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_272((*iParam0)[iVar0 /*26*/], 0))
		{
			if (MAP::DOES_BLIP_EXIST((iParam0[iVar0 /*26*/])->f_3))
			{
				MAP::_BLIP_SET_MODIFIER((iParam0[iVar0 /*26*/])->f_3, iParam1);
			}
		}
		iVar0++;
	}
}

void func_1387(int iParam0, char* sParam1, vector3 vParam2, var uParam5)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*26*/]))
		{
			func_870((*iParam0)[iVar0 /*26*/], func_1389(sParam1, iVar0), __LIB_0__::func_152(vParam2, func_1389(sParam1, iVar0), 1), 2, 1073741824 /* Float: 2f */);
		}
		iVar0++;
	}
}

void func_1388(int iParam0)
{
	if (__LIB_3__::func_411(iParam0, joaat("HATS"), 0))
	{
		PED::KNOCK_OFF_PED_PROP(iParam0, false, true, false, true);
	}
}

Vector3 func_1389(char* sParam0, int iParam1)
{
	vector3 vVar0;
	if (TASK::WAYPOINT_RECORDING_GET_COORD(sParam0, iParam1, &vVar0))
	{
		return vVar0;
	}
	return vLocal_379;
}

void func_1390(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		PED::SET_PED_ACCURACY((*iParam0)[iVar0 /*26*/], __LIB_0__::func_309(iParam1, 0, 100));
		iVar0++;
	}
}

void func_1391(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		PED::SET_PED_FIRING_PATTERN((*iParam0)[iVar0 /*26*/], iParam1);
		iVar0++;
	}
}

void func_1392(int iParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_272((*iParam0)[iVar1 /*26*/], 0))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1389(sParam1, iVar1), 2f, 20000, 0.25f, 0, 40000f);
			TASK::TASK_SHOOT_AT_ENTITY(0, Global_35, -1, joaat("FIRING_PATTERN_FULL_AUTO"), false);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE((*iParam0)[iVar1 /*26*/], iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		iVar1++;
	}
}

void func_1394(var uParam0)
{
	switch (__LIB_4__::func_979(uParam0))
	{
		case 1:
			func_1198(uParam0, 20, 20f);
			__LIB_11__::func_59(uParam0, 2);
			break;
		case 2:
			if (func_1326(23))
			{
				if (func_1220(Global_35, sLocal_37, 10))
				{
					func_1224();
				}
			}
			else
			{
				__LIB_11__::func_59(uParam0, 3);
			}
			break;
		case 3:
			if (func_1220(Global_35, sLocal_37, 54))
			{
				func_1198(uParam0, 21, 1f);
				__LIB_11__::func_59(uParam0, 4);
			}
			break;
		case 4:
			if (__LIB_11__::func_21(iLocal_375))
			{
				if (func_1823(uParam0, "NTS2_09_BECKON", 0, 1073741824 /* Float: 2f */, 0, 0))
				{
					__LIB_11__::func_59(uParam0, 5);
				}
			}
			break;
		case 5:
			func_1823(uParam0, "NTS2_09_BECKON", 2.5f, 1073741824 /* Float: 2f */, 0, 1);
			break;
	}
}

void func_1395(var uParam0)
{
	if (__LIB_9__::func_178(&uLocal_3244) > 90f)
	{
		__LIB_11__::func_66(uParam0, func_1557(1), "", 1, 0);
		__LIB_1__::func_561(&uLocal_3244);
	}
}

void func_1396(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar15;
	switch (iLocal_3247)
	{
		case 0:
			iLocal_3247 = 1;
			break;
		case 1:
			if ((!__LIB_11__::func_21(iLocal_373) && PED::IS_PED_SWIMMING_UNDER_WATER(Local_83)) || (!__LIB_11__::func_21(iLocal_373) && !ENTITY::IS_ENTITY_IN_AIR(Local_83, 1)))
			{
				iLocal_3247 = 2;
			}
			break;
		case 2:
			__LIB_11__::func_335(iLocal_373);
			func_2011();
			__LIB_11__::func_741(Local_83, joaat("BLIP_STYLE_COMPANION"), 1);
			__LIB_10__::func_930(uParam0, Local_83, joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_83, false);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_83, sLocal_37, 0, 18440, -1, 0, 0, -1);
			iLocal_3247 = 3;
			break;
		case 3:
			__LIB_4__::func_982(Local_83, 3f);
			if (!__LIB_0__::func_491(Local_83, 658540077))
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_83, sLocal_37, 0, 18440, -1, 0, 0, -1);
			}
			else if (func_1403(Local_83, sLocal_37))
			{
				PED::_0xEA8763E505AFD49A(Local_83, 0f, 0f);
				PED::_0xD61FCF9FCFD515B7(Local_83, 0f, 0f);
				iLocal_3247 = 4;
			}
			break;
		case 4:
			func_2012(Local_83);
			if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_375, "dutch", &vVar3, true, "pl_dutch_ashore", 2))
			{
				vVar0 = { vVar3 };
			}
			else
			{
				ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(iLocal_375, &vVar0, &uVar15, 2);
			}
			if (__LIB_0__::func_266(Local_83, vVar0, 2.5f, 1, 0))
			{
				func_2013();
				__LIB_11__::func_22(iLocal_375);
				iLocal_3247 = 5;
			}
			else if (!__LIB_0__::func_491(Local_83, 2106541073))
			{
				TASK::TASK_GO_STRAIGHT_TO_COORD(Local_83, vVar0, 3f, 20000, 40000f, 1056964608 /* Float: 0.5f */, 0);
			}
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
	}
}

void func_1397()
{
	int iVar0;
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_37, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &iVar0))
		{
			func_2014(iVar0, 1036831949 /* Float: 0.1f */);
			func_2015(iVar0);
		}
	}
}

void func_1400(var uParam0)
{
	__LIB_5__::func_318(&(uParam0->f_7375));
	__LIB_4__::func_570(&(uParam0->f_7375));
	__LIB_4__::func_655(&(uParam0->f_7375));
	if (__LIB_1__::func_185(49))
	{
		__LIB_10__::func_925(uParam0, func_1406(1));
	}
	else
	{
		__LIB_10__::func_925(uParam0, func_1406(0));
	}
}

void func_1402(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_272((*iParam0)[iVar0 /*26*/], 0))
		{
			TASK::CLEAR_PED_TASKS((*iParam0)[iVar0 /*26*/], true, false);
		}
		iVar0++;
	}
}

bool func_1403(int iParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	if (TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam1, &iVar0))
	{
		if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), &iVar1))
		{
			iVar0 = (iVar0 - 1);
			return iVar1 >= iVar0;
		}
	}
	return false;
}

bool func_1404(float fParam0)
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		return ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, -219.4054f, 1237.239f, 80f, -244.5981f, 1219.792f, 100f, fParam0, true, true, 0);
	}
	return false;
}

int func_1405()
{
	if (__LIB_1__::func_185(49))
	{
		return 1;
	}
	return 0;
}

char* func_1406(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "1-DutchHelpsArthur";
		case 1:
			return "1-DutchHelpsArthur_NTV2_Done";
		default:
			break;
	}
	return "";
}

bool func_1407(var uParam0, char* sParam1)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_7375.f_804))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_7375.f_804, true, false))
		{
			if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_7375.f_804, sParam1))
			{
				return true;
			}
			else if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_7375.f_804, sParam1))
			{
				__LIB_8__::func_787(uParam0, sParam1);
			}
		}
	}
	return false;
}

bool func_1411(var uParam0, int iParam1, struct<4> Param2, bool bParam6)
{
	if (!__LIB_0__::func_272(*iParam1, 0))
	{
		*iParam1 = __LIB_4__::func_957(uParam0);
		return false;
	}
	if (bParam6)
	{
		__LIB_8__::func_810(7);
	}
	else
	{
		__LIB_8__::func_820(7);
	}
	if (!__LIB_0__::func_266(*iParam1, Param2, 2.5f, 1, 1) || !__LIB_0__::func_491(*iParam1, -982327190))
	{
		func_1195(*iParam1, Param2, 2, 1073741824 /* Float: 2f */);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
		PED::_0xBF567DF2BEF211A6(*iParam1, 4);
		TASK::TASK_STAND_STILL(*iParam1, -1);
		ENTITY::FREEZE_ENTITY_POSITION(*iParam1, false);
	}
	return true;
}

void func_1413(var uParam0)
{
	__LIB_8__::func_806(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
	__LIB_8__::func_806(uParam0, Local_83, "Dutch", 0, 0, 0, 0);
}

void func_1414()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_376, "player", Global_35, 0);
}

void func_1415()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_377, "ARTHUR", Global_35, 0);
}

void func_1416()
{
	vector3 vVar0;
	vVar0 = { func_369(9, 4) };
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), false);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_377, vVar0, 0f, 0f, func_1867(9, 4), 2);
}

int func_1418(var uParam0, bool bParam1)
{
	if (__LIB_0__::func_13(32768))
	{
		if ((CAM::IS_SCREEN_FADED_OUT() || !__LIB_11__::func_21(uParam0->f_7375.f_804)) || bParam1)
		{
			return 1;
		}
		else if (!CAM::IS_SCREEN_FADING_OUT())
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2030541885))
			{
				CAM::DO_SCREEN_FADE_OUT(2500);
			}
		}
		return 0;
	}
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PED::_0xF7EA250B9A919E03(joaat("CROUCH"), Global_35);
	PED::_0xF7EA250B9A919E03(-755751827, Global_35);
	switch (iLocal_3248)
	{
		case 0:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_376) && (__LIB_11__::func_21(uParam0->f_7375.f_804) || bParam1))
			{
				if (func_2017())
				{
					iLocal_3248 = 1;
				}
			}
			break;
		case 1:
			if (func_2018())
			{
				__LIB_4__::func_89(&uLocal_3249, 0);
				iLocal_3248 = 2;
			}
			else if ((ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2030541885) || !__LIB_11__::func_21(uParam0->f_7375.f_804)) || bParam1)
			{
				func_2019();
			}
			break;
		case 2:
			if ((!__LIB_11__::func_21(uParam0->f_7375.f_804) || bParam1) && __LIB_9__::func_178(&uLocal_3249) > 2.5f)
			{
				func_1195(Global_35, func_204(9, 1), 2, 1073741824 /* Float: 2f */);
				__LIB_1__::func_775(Global_35, __LIB_0__::func_895(Global_1835011[51 /*74*/].f_1), 0, -358215195, 1, 1, 1, 0, 1, 0);
				CLOCK::SET_CLOCK_TIME(6, 0, 0);
				PED::CLEAR_PED_WETNESS(Global_35);
				func_2020();
				__LIB_1__::func_561(&uLocal_3249);
				iLocal_3248 = 3;
			}
			break;
		case 3:
			if ((ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("EXIT")) || func_1256(iLocal_376)) || !func_2018())
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, true);
				PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "RequestKneeCrouch", true, 50000);
				ANIMSCENE::START_ANIM_SCENE(iLocal_377);
				iLocal_3248 = 4;
			}
			break;
		case 4:
			if (!func_2018())
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0.0007f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-3f, 1f);
				iLocal_3248 = 5;
			}
			break;
		case 5:
			if (func_1256(iLocal_377) || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_377, "ARTHUR"))
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, true);
				PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "RequestKneeCrouch", true, 1000);
				PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_CROUCH_IDLE"), false, 0, false);
				__LIB_11__::func_740();
				iLocal_3248 = 6;
			}
			break;
		case 6:
			__LIB_4__::func_89(&uLocal_3249, 0);
			if (__LIB_9__::func_178(&uLocal_3249) > 1f)
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
				PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "RequestKneeCrouch", false, -1);
				__LIB_1__::func_561(&uLocal_3249);
				iLocal_3248 = 7;
			}
			break;
		case 7:
			return 1;
	}
	return 0;
}

void func_1422()
{
	int iVar0;
	iVar0 = __LIB_0__::func_153(Global_35, 9, 1, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_153(Global_35, 7, 1, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = __LIB_0__::func_153(Global_35, 0, 1, 0);
	if (__LIB_0__::func_154(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = __LIB_0__::func_153(Global_35, 1, 1, 0);
	if (__LIB_0__::func_154(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = __LIB_0__::func_153(Global_35, 18, 1, 0);
	if (__LIB_0__::func_154(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = __LIB_0__::func_664();
	if (__LIB_0__::func_154(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			__LIB_1__::func_766(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_2021(6291456, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			__LIB_1__::func_766(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_1446(var uParam0, int iParam1, int iParam2)
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
		return func_1446(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_1480(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
						__LIB_9__::func_203(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
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
				func_870(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

void func_1481(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	vector3 vVar0;
	__LIB_4__::func_787(iParam1, bParam3, bParam4, bParam6);
	if (!__LIB_4__::func_948(uParam0, 512))
	{
		if (__LIB_4__::func_948(uParam0, 4) && bParam4)
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 5f, 0f, 0f) };
			__LIB_1__::func_338(iParam1, vVar0);
		}
	}
	else
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_10781);
	}
	func_2043(uParam0, iParam1, iParam2, __LIB_1__::func_464(iParam2, 0));
	__LIB_5__::func_572(uParam0, iParam1, 512);
	if (bParam5)
	{
		__LIB_5__::func_572(uParam0, iParam1, 128);
	}
	else
	{
		__LIB_5__::func_571(uParam0, iParam1, 128);
	}
	switch (iParam2)
	{
		case 1:
		case default:
	}
}

bool func_1516(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_4__::func_562(uParam0, 32768))
	{
		return true;
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		uParam0->f_2286 = __LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_2287 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_2289 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_2287)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_2288 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_2288 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_2289)
		{
			uParam0->f_2291 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_2292 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		__LIB_5__::func_62(uParam0);
	}
	if (__LIB_0__::func_78(uParam0) < 10)
	{
		if (__LIB_0__::func_78(uParam0) == 3)
		{
			__LIB_11__::func_760(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_4__::func_562(uParam0, 524288))
				{
					__LIB_9__::func_374(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_4__::func_574(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_5__::func_382(uParam0, iParam5);
					return true;
				}
			}
			if (!__LIB_4__::func_562(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2074 /*41*/]), 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			}
			CAM::_0x8910C24B7E0046EC();
			__LIB_1__::func_538(0);
			__LIB_1__::func_725();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if (uParam0->f_2074 >= 0)
			{
				if (!__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2078 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (__LIB_4__::func_575(uParam0, uParam0->f_2074))
				{
					if (__LIB_4__::func_576(uParam0) < 7 && uParam0->f_2078 >= 0)
					{
						__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2078 /*41*/].f_27, uParam0->f_1735[uParam0->f_2078 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_2078 >= 0)
				{
					__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2078 /*41*/].f_27, uParam0->f_1735[uParam0->f_2078 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				__LIB_9__::func_54(uParam0);
			}
		}
	}
	bVar0 = __LIB_5__::func_500(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!__LIB_4__::func_562(uParam0, 268435456) && bVar1) && !__LIB_4__::func_562(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_2292);
			if (uParam0->f_2074 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_1406[uParam0->f_2074 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_2292)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				__LIB_4__::func_532(uParam0, 131072);
				__LIB_4__::func_532(uParam0, 268435456);
			}
		}
		if (__LIB_4__::func_577(uParam0, 64) || (uParam0->f_2074 >= 0 && !__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2074 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || __LIB_0__::func_81(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) == 3 || __LIB_4__::func_562(uParam0, 131072))
	{
		__LIB_4__::func_984(uParam0);
		if (!__LIB_4__::func_562(uParam0, 262144))
		{
			if ((bVar0 && __LIB_4__::func_562(uParam0, 65536)) || __LIB_4__::func_562(uParam0, 131072))
			{
				__LIB_4__::func_532(uParam0, 32768);
				__LIB_4__::func_574(uParam0, 4);
				__LIB_0__::func_115(uParam0, 10);
				uParam0->f_2159 = 1;
				__LIB_5__::func_382(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_18__::func_369(uParam0, iParam5);
		__LIB_4__::func_578(uParam0);
		if (!__LIB_4__::func_579(uParam0, 1))
		{
			__LIB_5__::func_63(uParam0);
		}
		__LIB_4__::func_580(uParam0);
	}
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_5__::func_501(uParam0, Param1, iParam5);
			break;
		case 1:
			__LIB_6__::func_920(uParam0);
			break;
		case 2:
			__LIB_9__::func_379(uParam0);
			break;
		case 3:
			if (__LIB_4__::func_581(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2074 /*41*/].f_27, uParam0->f_1735[uParam0->f_2074 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_2__::func_259(&(uParam0->f_2262));
				__LIB_4__::func_574(uParam0, 1);
				__LIB_4__::func_582();
				__LIB_0__::func_115(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!__LIB_4__::func_562(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (__LIB_0__::func_78(uParam0) == 5)
			{
				if (__LIB_4__::func_985(uParam0))
				{
					__LIB_4__::func_574(uParam0, 2);
					__LIB_0__::func_115(uParam0, 6);
				}
			}
			if (__LIB_0__::func_78(uParam0) == 6)
			{
				if (__LIB_4__::func_986(uParam0))
				{
					__LIB_4__::func_574(uParam0, 3);
					__LIB_0__::func_115(uParam0, 8);
				}
			}
			if (uParam0->f_2075 >= 0 || __LIB_9__::func_178(&(uParam0->f_2262)) >= 15f)
			{
				if (__LIB_9__::func_180(uParam0, iParam5))
				{
					if (__LIB_4__::func_583(uParam0))
					{
						uParam0->f_2075 = __LIB_5__::func_64(uParam0);
						__LIB_2__::func_259(&(uParam0->f_2262));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						__LIB_4__::func_574(uParam0, 6);
						__LIB_0__::func_115(uParam0, 9);
					}
					else
					{
						__LIB_4__::func_574(uParam0, 4);
						__LIB_0__::func_115(uParam0, 10);
						__LIB_5__::func_382(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_9__::func_180(uParam0, iParam5))
			{
				__LIB_5__::func_382(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_1522(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	__LIB_5__::func_68(uParam4, &uParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		__LIB_5__::func_378(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (__LIB_0__::func_81(uParam4))
	{
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_804, true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_804, false))
				{
					__LIB_10__::func_966(uParam4, &uParam0, uParam5);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804))
				{
					__LIB_8__::func_726(uParam4, 4);
					return false;
				}
				else
				{
					if (__LIB_4__::func_584(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_797);
					}
					__LIB_5__::func_265(uParam5);
				}
				__LIB_8__::func_726(uParam4, 3);
			}
			else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (__LIB_5__::func_331(uParam5, __LIB_4__::func_939(uParam5), 262144))
				{
					if (!__LIB_0__::func_84(uParam4, 2097152))
					{
						__LIB_5__::func_69(uParam4);
					}
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_806)) && (!__LIB_4__::func_937(uParam5, 8) || __LIB_0__::func_84(uParam4, 134217728)))
				{
				}
				else
				{
					__LIB_5__::func_309(uParam4);
				}
				__LIB_2__::func_259(&(uParam4->f_1));
				__LIB_8__::func_726(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				__LIB_5__::func_350(uParam4);
				if (!__LIB_0__::func_899(&(uParam4->f_1)))
				{
					__LIB_4__::func_89(&(uParam4->f_1), 0);
				}
				else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_804);
					}
					__LIB_8__::func_726(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) || !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_804, true, false))
			{
				if (__LIB_5__::func_577(uParam4, &uParam0, 1, 1))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_804, true, false))
					{
						__LIB_8__::func_726(uParam4, 4);
					}
					else if (!__LIB_0__::func_86(__LIB_0__::func_85(uParam4)) && !__LIB_0__::func_266(Global_35, __LIB_0__::func_85(uParam4), 100f, 1, 1))
					{
						__LIB_0__::func_87(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), __LIB_0__::func_85(uParam4), 0f, true, true, true, false);
					}
				}
				else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_804);
					}
					__LIB_8__::func_726(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (__LIB_5__::func_253(uParam5) != 0 || (__LIB_0__::func_81(uParam5) == 1 && __LIB_5__::func_279(uParam5, __LIB_4__::func_939(uParam5)) >= 3))
				{
					if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
					{
						MISC::_0xA565FAC215CBC77D();
						__LIB_0__::func_722(1, 0);
						__LIB_10__::func_966(uParam4, &uParam0, uParam5);
						__LIB_8__::func_726(uParam4, 3);
					}
					else
					{
						SCRIPTS::SHUTDOWN_LOADING_SCREEN();
					}
				}
			}
			else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_804);
				}
				__LIB_8__::func_726(uParam4, 4);
			}
			break;
		case 3:
			func_376(uParam4);
			if (__LIB_4__::func_584(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_797);
			}
			__LIB_5__::func_265(uParam5);
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_804, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804) || __LIB_0__::func_84(uParam4, 512)))
			{
				if (!__LIB_0__::func_84(uParam4, 1024) && __LIB_5__::func_448(uParam4, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!__LIB_0__::func_84(uParam4, 512))
				{
					__LIB_2__::func_259(&(uParam4->f_1));
					__LIB_0__::func_88(uParam4, 512);
					__LIB_8__::func_726(uParam4, 4);
				}
				else if (__LIB_0__::func_84(uParam4, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
					}
					CAM::DO_SCREEN_FADE_OUT(0);
				}
			}
			else
			{
				__LIB_5__::func_378(uParam4);
			}
			if (__LIB_0__::func_84(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((__LIB_4__::func_585(uParam4) - __LIB_4__::func_586(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (__LIB_4__::func_988(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && __LIB_4__::func_586(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (__LIB_4__::func_989(uParam4))
			{
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
				{
				}
				__LIB_10__::func_934(uParam4);
				return true;
			}
			else
			{
				if (__LIB_0__::func_84(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_804);
						}
						__LIB_2__::func_259(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_4__::func_550(uParam4, 67108864, 1);
						__LIB_8__::func_726(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!__LIB_0__::func_84(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804)) && CAM::IS_SCREEN_FADED_OUT()) && __LIB_4__::func_586(uParam4) <= 5000) && __LIB_4__::func_586(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!__LIB_0__::func_84(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					__LIB_5__::func_129(&(uParam4->f_861), 0);
					__LIB_0__::func_88(uParam4, 536870912);
				}
				if (__LIB_4__::func_586(uParam4) >= 5000 && __LIB_4__::func_586(uParam4) <= (__LIB_4__::func_585(uParam4) - 5000))
				{
					__LIB_0__::func_89();
				}
			}
			break;
		case 6:
			if (__LIB_4__::func_989(uParam4))
			{
				__LIB_10__::func_934(uParam4);
				return true;
			}
			break;
		case 4:
			if (__LIB_0__::func_84(uParam4, 524288))
			{
				ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
					{
						__LIB_0__::func_88(uParam4, 1073741824 /* Float: 2f */);
					}
				}
			}
			else
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, true);
						if (UIFEED::_0xC17F69E1418CD11F(9) != 0)
						{
							UIFEED::_0xDD1232B332CBB9E7(9, 1, 0);
						}
						return false;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam4->f_804))
					{
						return false;
					}
				}
				iVar0 = 1;
				if (__LIB_0__::func_81(uParam5) == 1 && __LIB_5__::func_279(uParam5, __LIB_4__::func_939(uParam5)) >= 3)
				{
					if (__LIB_5__::func_266(uParam5))
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, false);
						}
						__LIB_8__::func_726(uParam4, 3);
					}
					else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, false);
						}
						__LIB_8__::func_726(uParam4, 3);
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!__LIB_4__::func_584(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_798);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, false);
						}
						__LIB_8__::func_726(uParam4, 3);
					}
					else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, false);
						}
						__LIB_8__::func_726(uParam4, 3);
					}
				}
				if (__LIB_0__::func_81(uParam4) == 3)
				{
					if (__LIB_0__::func_84(uParam4, 524288))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			break;
		case 5:
			__LIB_8__::func_726(uParam4, 4);
			break;
	}
	return false;
}

bool func_1529(var uParam0)
{
	var uVar0;
	__LIB_5__::func_106(uParam0, Global_35, "ARTHUR", 0);
	if (__LIB_4__::func_939(uParam0) == 1)
	{
		PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, true);
	}
	if (__LIB_4__::func_951(uParam0, 1) && !__LIB_4__::func_948(uParam0, 4))
	{
		if (__LIB_4__::func_939(uParam0) == 0 || __LIB_4__::func_939(uParam0) > 7)
		{
			__LIB_11__::func_577(joaat("KIT_BANDANA"), 0);
		}
		else if (!__LIB_1__::func_750(&uVar0))
		{
			__LIB_11__::func_577(joaat("KIT_BANDANA"), 1);
		}
	}
	if (__LIB_4__::func_939(uParam0) == 0)
	{
		if (!__LIB_11__::func_749(1))
		{
			__LIB_1__::func_766(Global_35, __LIB_0__::func_664(), 0, 0, 0, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
	}
	return true;
}

bool func_1530(var uParam0)
{
	if (!Local_83.f_16)
	{
		if (func_862(uParam0, 0, &Local_83, 0, 0, 0, 0, 0, 1, -268604689, 1, 0, 1, 0))
		{
			if (!PED::_0xA0BC8FAED8CFEB3C(Local_83))
			{
				return false;
			}
			__LIB_1__::func_296(0, 0, 0, 1);
			func_2141(&Local_83);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_83, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_83, 98, true);
			PED::_0x4EC4EA2F72B36358(Local_83, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_83, 0, true);
			if (__LIB_4__::func_939(uParam0) == 1)
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Local_83, true, 0, true);
			}
			if (__LIB_4__::func_939(uParam0) > 8 || __LIB_4__::func_939(uParam0) == 0)
			{
				__LIB_5__::func_414(0, 1073741824 /* Float: 2f */, 1);
			}
			else
			{
				__LIB_5__::func_414(0, 1048576, 1);
			}
			__LIB_5__::func_106(uParam0, Local_83, "DUTCH", 0);
			func_2143(uParam0, Local_83, 357297, 0, "DUTCH", 67108863, 1023, 3, -1);
			WEAPON::_GIVE_WEAPON_TO_PED_2(Local_83, joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH"), -1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
			WEAPON::_GIVE_WEAPON_TO_PED_2(Local_83, joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH_DUALWIELD"), -1, false, true, 1, false, 0.5f, 1f, 752097756, true, 0f, false);
			WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Local_83, __LIB_0__::func_214(joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH")));
			Local_83.f_16 = 1;
		}
		return false;
	}
	return true;
}

bool func_1531(var uParam0)
{
	if (!bLocal_400)
	{
		if (!func_2144(uParam0, &(Local_134[0 /*17*/]), func_204(0, 15), joaat("WEAPON_BOW"), "NTS2_BRAVE1", 630925281))
		{
			return false;
		}
		if (!func_2144(uParam0, &(Local_134[1 /*17*/]), func_204(0, 17), joaat("WEAPON_BOW"), "NTS2_BRAVE2", -36775863))
		{
			return false;
		}
		if (!func_2144(uParam0, &(Local_134[2 /*17*/]), func_204(0, 19), joaat("WEAPON_REPEATER_CARBINE"), "NTS2_BRAVE3", 269778132))
		{
			return false;
		}
		bLocal_400 = true;
	}
	return true;
}

bool func_1532(var uParam0)
{
	if (!Local_100.f_16)
	{
		if (func_862(uParam0, 26, &Local_100, 0, 0, 0, 0, 0, 1, -268604689, 1, 0, 1, 0))
		{
			if (!PED::_0xA0BC8FAED8CFEB3C(Local_100))
			{
				return false;
			}
			__LIB_1__::func_296(26, 0, 0, 1);
			func_2141(&Local_100);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_100, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_100, 98, true);
			PED::_0x4EC4EA2F72B36358(Local_100, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_100, 0, true);
			if (__LIB_4__::func_939(uParam0) == 1)
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Local_100, true, 0, true);
			}
			if (__LIB_4__::func_939(uParam0) == 0)
			{
				__LIB_5__::func_414(26, 262144, 1);
			}
			else
			{
				__LIB_5__::func_414(26, 1048576, 1);
			}
			__LIB_5__::func_106(uParam0, Local_100, "EAGLE_FLIES", 0);
			func_2143(uParam0, Local_100, 357297, 0, "EAGLEFLIES", 67108863, 1023, 3, -1);
			WEAPON::_0x899A04AFCC725D04(Local_100, joaat("LO_EAGLE_FLIES"));
			WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Local_100, __LIB_0__::func_214(joaat("WEAPON_REPEATER_CARBINE")));
			Local_100.f_16 = 1;
		}
		return false;
	}
	return true;
}

bool func_1533(var uParam0)
{
	if (!Local_117.f_16)
	{
		if (!__LIB_0__::func_272(Local_117, 0))
		{
			Local_117 = __LIB_1__::func_545(iLocal_30, func_369(0, 13), 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			return false;
		}
		if (!PED::_0xA0BC8FAED8CFEB3C(Local_117))
		{
			return false;
		}
		Local_117.f_3 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), Local_117);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_117.f_3, "NTS2_PAYTAH");
		func_2141(&Local_117);
		PED::SET_PED_MAX_HEALTH(Local_117, 1200);
		ENTITY::_SET_ENTITY_HEALTH(Local_117, 1200, 0);
		PED::_0xC2266AA617668AD3(Local_117, 0.5f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_117, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_117, 98, true);
		PED::_0x4EC4EA2F72B36358(Local_117, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_117, 0, true);
		PED::SET_PED_CONFIG_FLAG(Local_117, 263, true);
		PED::SET_PED_CONFIG_FLAG(Local_117, 16, true);
		if (__LIB_4__::func_939(uParam0) == 1)
		{
			PED::_SET_PED_CROUCH_MOVEMENT(Local_117, true, 0, true);
		}
		PED::_SET_PED_BODY_COMPONENT(Local_117, joaat("META_OUTFIT_DEFAULT"));
		PED::_UPDATE_PED_VARIATION(Local_117, true, true, true, true, false);
		if (__LIB_4__::func_939(uParam0) == 0)
		{
			func_1236(Local_117, -972364774);
		}
		else
		{
			func_1236(Local_117, -1100875244);
		}
		__LIB_5__::func_106(uParam0, Local_117, "PAYTAH", 0);
		func_2143(uParam0, Local_117, 357297, 0, "PAYTAH", 67108863, 1023, 3, -1);
		if (__LIB_4__::func_939(uParam0) < 4)
		{
			WEAPON::_GIVE_WEAPON_TO_PED_2(Local_117, joaat("WEAPON_BOW"), -1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
			WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Local_117, __LIB_0__::func_214(joaat("WEAPON_BOW")));
		}
		else
		{
			WEAPON::_GIVE_WEAPON_TO_PED_2(Local_117, joaat("WEAPON_REPEATER_CARBINE"), -1, true, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
			WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Local_117, __LIB_0__::func_214(joaat("WEAPON_REPEATER_CARBINE")));
		}
		Local_117.f_16 = 1;
	}
	return true;
}

bool func_1534()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_352))
	{
		iLocal_352 = VEHICLE::CREATE_VEHICLE(iLocal_28, func_369(0, 26), func_1867(0, 26), true, true, false, false);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_352, false);
		return false;
	}
	if (!PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(iLocal_352))
	{
		PROPSET::_0xD80FAF919A2E56EA(iLocal_352, joaat("PG_MISSION_NATIVE2_01X"));
		return false;
	}
	return true;
}

bool func_1535(var uParam0)
{
	if (__LIB_4__::func_939(uParam0) == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_355))
		{
			iLocal_355 = OBJECT::CREATE_OBJECT(iLocal_22, func_369(0, 26), true, true, false, false, true);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_355, iLocal_352, false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_355, true);
			return false;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_356))
	{
		iLocal_356 = OBJECT::CREATE_OBJECT(iLocal_23, func_369(0, 25), true, true, false, false, true);
		func_1195(iLocal_356, func_204(0, 25), 2, 1073741824 /* Float: 2f */);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_356, iLocal_352, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_356, true);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_357))
	{
		iLocal_357 = OBJECT::CREATE_OBJECT(iLocal_24, func_369(0, 24), true, true, false, false, true);
		func_1195(iLocal_357, func_204(0, 24), 2, 1073741824 /* Float: 2f */);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_357, iLocal_352, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_357, true);
		return false;
	}
	return true;
}

bool func_1536(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_359))
	{
		iLocal_359 = OBJECT::CREATE_OBJECT(iLocal_19, func_369(0, 22), true, true, false, false, true);
		func_1195(iLocal_359, func_204(0, 22), 2, 1073741824 /* Float: 2f */);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_359, iLocal_352, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_359, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_358))
	{
		iLocal_358 = OBJECT::CREATE_OBJECT(iLocal_18, func_369(0, 23), true, true, false, false, true);
		if (__LIB_4__::func_939(uParam0) > 0 || __LIB_11__::func_20(2))
		{
			func_1195(iLocal_358, func_204(1, 2), 2, 1073741824 /* Float: 2f */);
		}
		OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(iLocal_358, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_358, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_360))
	{
		iLocal_360 = OBJECT::CREATE_OBJECT(iLocal_20, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_369(0, 26), func_1867(0, 26), -1.5f, 0f, 0f), true, true, false, false, true);
		if (__LIB_4__::func_939(uParam0) > 0 || __LIB_11__::func_20(2))
		{
			func_1195(iLocal_360, func_204(1, 3), 2, 1073741824 /* Float: 2f */);
		}
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_360, iLocal_352, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_360, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_361))
	{
		iLocal_361 = OBJECT::CREATE_OBJECT(iLocal_21, 36.22f, 1089.69f, 176.46f, true, true, false, false, true);
		ENTITY::SET_ENTITY_COLLISION(iLocal_361, false, true);
		ENTITY::SET_ENTITY_COORDS(iLocal_361, 36.22f, 1089.69f, 176.46f, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_361, 0f, 0f, 60f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_361, true);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_361, false);
	}
	return true;
}

bool func_1537(var uParam0)
{
	if (__LIB_4__::func_939(uParam0) < 6)
	{
		__LIB_0__::func_401(joaat("DES_NTVS2_TREEFALL"));
		__LIB_0__::func_401(1672215059);
		__LIB_0__::func_401(-1177027698);
		__LIB_0__::func_400(1708195603);
		if (!func_2148())
		{
			return false;
		}
		if (__LIB_4__::func_939(uParam0) < 3)
		{
			func_927(iLocal_407, 11);
			func_927(iLocal_408, 11);
			__LIB_5__::func_440("nts2_fallen_trees_road");
			__LIB_5__::func_440("nts2_fallen_tree_ridge");
		}
		if (__LIB_4__::func_939(uParam0) > 2)
		{
			func_927(iLocal_407, 9);
			if (__LIB_4__::func_939(uParam0) < 5)
			{
				__LIB_5__::func_441("nts2_fallen_trees_road");
			}
			AICOVERPOINT::_0x64340DC208D671D5("nativeson2_fallentrees");
		}
		if (__LIB_4__::func_939(uParam0) > 4)
		{
			func_927(iLocal_408, 9);
			__LIB_5__::func_441("nts2_fallen_tree_ridge");
			AICOVERPOINT::_0x64340DC208D671D5("nativeson2_ambushtrees");
		}
	}
	return true;
}

void func_1538()
{
	__LIB_3__::func_557(&iLocal_410, 51.54758f, 1061.909f, 193.7516f, vLocal_379, 0.7f, 2.4f, 2f, "NTS2_RidgeNavBlock");
	__LIB_3__::func_557(&iLocal_411, 36.14273f, 1096.652f, 175f, vLocal_379, 175f, 125f, 37.071f, "NTS2_WoodedPass");
	__LIB_3__::func_557(&iLocal_412, 55.0606f, 1093.223f, 177f, vLocal_379, 50f, 35f, 25f, "NTS2_RoadSide");
	__LIB_3__::func_557(&iLocal_413, 30.51f, 1047.766f, 191.13f, 0f, 0f, 41.91f, 13.53f, 14.038f, 25f, "NTS2_CliffBreak");
}

void func_1539()
{
	__LIB_3__::func_414(&uLocal_334, func_369(0, 23), 3.5f, 2, 2, 0);
	__LIB_3__::func_414(&uLocal_339, 42.17711f, 1052.138f, 194.0215f, 2f, 1, 44, 0);
	__LIB_3__::func_414(&uLocal_340, 30.6511f, 1054.389f, 187.4398f, 4f, 1, 36, 0);
	__LIB_3__::func_414(&uLocal_341, 49.41159f, 1085.245f, 176.605f, 4f, 1, 44, 0);
	__LIB_3__::func_414(&uLocal_336, func_369(0, 23), 5f, 1, 36, 0);
	__LIB_3__::func_414(&uLocal_337, 56.12624f, 1109.574f, 181.5035f, 5f, 1, 36, 0);
	__LIB_3__::func_414(&uLocal_338, 58.53932f, 1103.197f, 178.5587f, 1f, 1, 36, 0);
	__LIB_3__::func_414(&uLocal_342, 55.32377f, 1100.895f, 176.7319f, 2f, 1, 32, 0);
	__LIB_3__::func_414(&uLocal_345, 65.50495f, 1140.022f, 189.966f, 3f, 1, 268, 0);
}

void func_1543(var uParam0)
{
	int iVar0;
	if (__LIB_4__::func_951(uParam0, 1) && !__LIB_4__::func_948(uParam0, 4))
	{
		if (__LIB_4__::func_939(uParam0) == 25)
		{
			iVar0 = (5 + __LIB_5__::func_24(9));
		}
		else
		{
			iVar0 = (5 + __LIB_5__::func_24(__LIB_4__::func_939(uParam0)));
		}
		CLOCK::SET_CLOCK_TIME(iVar0, 0, 0);
	}
}

void func_1544(var uParam0)
{
	if ((__LIB_4__::func_939(uParam0) == 0 && !__LIB_4__::func_948(uParam0, 4)) && !__LIB_4__::func_951(uParam0, 1))
	{
		__LIB_6__::func_413(joaat("WEATHER_GROUP_GOOD_VISIBILITY"), 0, 0, 120f);
	}
	else
	{
		__LIB_6__::func_413(joaat("WEATHER_GROUP_GOOD_VISIBILITY"), 0, 1, 1103626240 /* Float: 25f */);
	}
}

int func_1547(var uParam0)
{
	switch (__LIB_4__::func_939(uParam0))
	{
		case 0:
			func_2152(uParam0);
			break;
		case 2:
			func_2153(uParam0);
			break;
		case 4:
			func_2154(uParam0);
			break;
		case 5:
			func_2155(uParam0);
			break;
		case 7:
			func_2156(uParam0);
			break;
		case 25:
			func_2157(uParam0);
			break;
	}
	return 1;
}

bool func_1549(var uParam0)
{
	switch (__LIB_4__::func_939(uParam0))
	{
		case 0:
			func_2158(uParam0);
			break;
		case 2:
			func_2159(uParam0);
			break;
		case 4:
			func_2160(uParam0);
			break;
		case 5:
			func_2161(uParam0);
			break;
		case 7:
			func_2162(uParam0);
			break;
		case 25:
			return func_2163(uParam0);
	}
	return true;
}

void func_1551(var uParam0)
{
	if (func_1944(iLocal_415))
	{
		if (func_2164(11))
		{
			if (__LIB_17__::func_751(uParam0, func_369(3, 2), "NTS2_GANG_RETURN", "NTS2_ABANDONED_GANG", 35f, 70f, 0, 0, 1, 1, 1))
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_405))
				{
					MAP::_BLIP_SET_MODIFIER(iLocal_405, -1186550032);
				}
			}
			else if (MAP::DOES_BLIP_EXIST(iLocal_405))
			{
				MAP::_BLIP_REMOVE_MODIFIER(iLocal_405, -1186550032);
			}
		}
		else if (__LIB_4__::func_939(uParam0) != 1)
		{
			if (func_2168(uParam0, 0, func_2166(uParam0), func_2167(uParam0), 0, 1, 1, joaat("BLIP_STYLE_COMPANION")))
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_405))
				{
					MAP::_BLIP_SET_MODIFIER(iLocal_405, -1186550032);
				}
			}
			else if (MAP::DOES_BLIP_EXIST(iLocal_405))
			{
				MAP::_BLIP_REMOVE_MODIFIER(iLocal_405, -1186550032);
			}
		}
	}
}

void func_1552(var uParam0)
{
	if (__LIB_9__::func_178(&uLocal_77) > fLocal_403)
	{
		__LIB_5__::func_590(uParam0, func_1806(iLocal_415), 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		__LIB_1__::func_561(&uLocal_77);
	}
}

void func_1554()
{
	func_2171(&Local_429);
	func_2171(&Local_742);
	func_2171(&Local_899);
	func_2171(&Local_1369);
	func_2171(&Local_1500);
}

void func_1555()
{
	int iVar0;
	int iVar1;
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	if (iVar0 > 17 || (iVar0 == 17 && iVar1 >= 30))
	{
		CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
	}
}

bool func_1556(var uParam0, int iParam1)
{
	if (__LIB_4__::func_939(uParam0) <= 1)
	{
		if (__LIB_5__::func_279(uParam0, __LIB_4__::func_939(uParam0)) == 5)
		{
			if (!__LIB_11__::func_20(4) && !__LIB_11__::func_20(8))
			{
				if (__LIB_0__::func_272(Global_35, 0))
				{
					if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 75f))
					{
						*iParam1 = 3;
						return true;
					}
				}
			}
		}
	}
	if (__LIB_4__::func_939(uParam0) == 1)
	{
		if (__LIB_0__::func_272(Global_35, 0))
		{
			if (__LIB_11__::func_24(Global_35) < 192.5f)
			{
				*iParam1 = 4;
				return true;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_351))
	{
		if (!__LIB_0__::func_272(iLocal_351, 1))
		{
			*iParam1 = 6;
			return true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_83.f_1))
	{
		if (!__LIB_0__::func_272(Local_83.f_1, 1))
		{
			*iParam1 = 7;
			return true;
		}
	}
	return false;
}

char* func_1557(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NTS2_ABANDONED_EAGLE";
		case 1:
			return "NTS2_ABANDONED_DUTCH";
		case 2:
			return "NTS2_PLANT_TIMEOUT";
		case 3:
			return "NTS2_ALERTED_EARLY";
		case 4:
			return "NTS2_ALERTED_EARLY";
		case 5:
			return "NTS2_CLIFF_LOITER";
		case 7:
			return __LIB_1__::func_569(__LIB_5__::func_363(0, 0));
		case 6:
			return __LIB_1__::func_569(__LIB_6__::func_893());
		default:
			break;
	}
	return "MISSING";
}

bool func_1559(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_272((*iParam0)[iVar0 /*26*/], 0))
		{
			if (PED::_0xB7DBB2986B87E230((*iParam0)[iVar0 /*26*/], 1f))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_1560(int iParam0, float fParam1)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_272((*iParam0)[iVar0 /*26*/], 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO((*iParam0)[iVar0 /*26*/], fParam1);
		}
		if (__LIB_0__::func_272((iParam0[iVar0 /*26*/])->f_1, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO((iParam0[iVar0 /*26*/])->f_1, fParam1);
		}
		iVar0++;
	}
}

void func_1571(var uParam0)
{
	struct<8> Var0;
	func_2185(uParam0);
	if (__LIB_5__::func_253(uParam0) == 1 && CAM::IS_SCREEN_FADED_OUT())
	{
		GRAPHICS::_0x297B72E2AF094742(6);
	}
	else if (__LIB_5__::func_253(uParam0) == 0 && !__LIB_4__::func_937(uParam0, 8))
	{
		__LIB_5__::func_284(uParam0);
	}
	__LIB_5__::func_326(&(uParam0->f_10792));
	__LIB_5__::func_74(uParam0);
	__LIB_4__::func_992(uParam0, 67108864);
	__LIB_4__::func_992(uParam0, 8192);
	__LIB_4__::func_969(uParam0, 4);
	__LIB_4__::func_969(uParam0, 512);
	__LIB_4__::func_969(uParam0, 65536);
	__LIB_4__::func_969(uParam0, 1024);
	__LIB_4__::func_969(uParam0, 262144);
	__LIB_4__::func_969(uParam0, 16777216);
	__LIB_4__::func_969(uParam0, 64);
	__LIB_4__::func_958(uParam0, 128);
	__LIB_4__::func_944(uParam0, -2147483648);
	__LIB_4__::func_993(uParam0, 1);
	if (__LIB_4__::func_948(uParam0, 4194304))
	{
		__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 1073741824 /* Float: 2f */);
	}
	__LIB_4__::func_958(uParam0, 4194304);
	__LIB_4__::func_958(uParam0, 8388608);
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2048))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	if (__LIB_0__::func_2() == 0)
	{
		__LIB_1__::func_965(8);
		__LIB_5__::func_103(1);
	}
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 64) || !__LIB_4__::func_947(uParam0))
	{
		__LIB_0__::func_267(0);
	}
	else
	{
		__LIB_0__::func_267(1);
	}
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	if (!__LIB_4__::func_937(uParam0, 131072))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::GET_PLAYER_INDEX(), false);
	}
	__LIB_1__::func_561(&(uParam0->f_13106));
	__LIB_2__::func_259(&(uParam0->f_13112));
	__LIB_5__::func_598(uParam0, __LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1));
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1024))
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 32768))
	{
		__LIB_0__::func_733(1);
	}
	if (__LIB_5__::func_285(uParam0, __LIB_5__::func_475(uParam0)) != -1 && PED::_0x62DE46F061CAA468() < __LIB_5__::func_285(uParam0, __LIB_5__::func_475(uParam0)))
	{
		PED::_0xF008E0BA1FE1D644((__LIB_5__::func_285(uParam0, __LIB_5__::func_475(uParam0)) - PED::_0x62DE46F061CAA468()));
	}
	if (MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_EXISTS())
	{
		MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_DELETE();
	}
	Var0 = { __LIB_5__::func_310(uParam0) };
	MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_SET_MODIFIER(&Var0);
	Global_43805 = -1;
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1))
	{
		__LIB_0__::func_7(&Global_1935630, 2097152);
	}
	else
	{
		__LIB_0__::func_8(&Global_1935630, 2097152);
	}
	__LIB_5__::func_472(uParam0);
	if (__LIB_4__::func_939(uParam0) == 25 && __LIB_0__::func_13(32768))
	{
		__LIB_5__::func_490(uParam0, 16);
	}
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 512))
	{
		__LIB_4__::func_587(1f, 0f, 0f, 0f);
	}
	else
	{
		__LIB_4__::func_680();
	}
}

void func_1742(int iParam0)
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
	func_648(iParam0, 1, 1, -142743235, 1);
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
		func_648(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_1747(struct<6> Param0)
{
	if (!func_2315(Param0.f_4, 1))
	{
	}
	if (!func_2315(Param0, 1))
	{
	}
	if (!func_2315(Param0.f_2, 1))
	{
	}
	if (!func_2315(Param0.f_5, 1))
	{
	}
	if (!func_2315(Param0.f_3, 1))
	{
	}
	if (!func_2315(Param0.f_1, 1))
	{
	}
}

void func_1762(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_1__::func_154(43))
		{
			if (__LIB_0__::func_192(iParam0, 412399755))
			{
				func_1065(joaat("EXOTIC_STAGE_01"));
				if (__LIB_0__::func_944() == 0)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 1);
					if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (__LIB_1__::func_154(44))
		{
			if (__LIB_0__::func_192(iParam0, 709057512))
			{
				func_1065(joaat("EXOTIC_STAGE_02"));
				if (__LIB_0__::func_944() == 1)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 2);
					if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_1__::func_154(45))
		{
			if (__LIB_0__::func_192(iParam0, -1478961327))
			{
				func_1065(joaat("EXOTIC_STAGE_03"));
				if (__LIB_0__::func_944() == 2)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 4);
					if (((iParam0 == joaat("PROVISION_GATOR_EGG") || iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_1__::func_154(46))
		{
			if (__LIB_0__::func_192(iParam0, -1238404098))
			{
				func_1065(joaat("EXOTIC_STAGE_04"));
				if (__LIB_0__::func_944() == 3)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 8);
					if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_1__::func_154(47))
		{
			if (__LIB_0__::func_192(iParam0, 1160548794))
			{
				func_1065(joaat("EXOTIC_STAGE_05"));
				if (__LIB_0__::func_944() == 4)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 16);
					if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

Vector3 func_1798(struct<4> Param0, vector3 vParam4)
{
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, Param0.f_3, vParam4);
}

void func_1799(int* iParam0, int iParam1, int iParam2, float fParam3, float fParam4, int iParam5)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		*iParam0 = PHYSICS::_ADD_ROPE_2(ENTITY::GET_ENTITY_COORDS(iParam1, true, false), vLocal_379, fParam4, iLocal_418, false, iParam5, 0.0075f);
		iParam0->f_1 = iParam1;
		iParam0->f_2 = iParam2;
		PHYSICS::_0x462FF2A432733A44(*iParam0, iParam0->f_1, iParam0->f_2, vLocal_379, vLocal_379, 0, 0);
		func_1817(iParam0);
		func_1818(iParam0, fParam3);
	}
}

char* func_1806(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "NTS2_OBJ1a";
		case 2:
			return "NTS2_OBJ1b";
		case 3:
			return "NTS2_OBJ1c";
		case 4:
			return "NTS2_OBJ1d";
		case 5:
			return "NTS2_OBJ1e";
		case 6:
			return "NTS2_OBJ2a";
		case 7:
			return "NTS2_OBJ2b";
		case 8:
			return "NTS2_OBJ2c";
		case 9:
			return "NTS2_OBJ3a";
		case 10:
			return "NTS2_OBJ4a";
		case 11:
			return "NTS2_OBJ4b";
		case 12:
			return "NTS2_OBJ4c";
		case 13:
			return "NTS2_OBJ5a";
		case 14:
			return "NTS2_OBJ6a";
		case 15:
			return "NTS2_OBJ6b";
		case 16:
			return "NTS2_OBJ7a";
		case 17:
			return "NTS2_OBJ7b";
		case 18:
			return "NTS2_OBJ7c";
		case 19:
			return "NTS2_OBJ8a";
		case 20:
			return "NTS2_OBJ9a";
		case 21:
			return "NTS2_OBJ9b";
		default:
			break;
	}
	return "";
}

void func_1817(int* iParam0)
{
	if (PHYSICS::DOES_ROPE_EXIST(*iParam0))
	{
		PHYSICS::_0x7A54D82227A139DB(iParam0, 1);
		PHYSICS::_0xFB9153A54AC713E8(*iParam0, 1);
		PHYSICS::ROPE_DRAW_SHADOW_ENABLED(iParam0, true);
		PHYSICS::_0x522FA3F490E2F7AC(*iParam0, 0, 1);
		PHYSICS::ROPE_SET_UPDATE_ORDER(*iParam0, 1);
		PHYSICS::_0xBB3E9B073E66C3C9(*iParam0, 1, 1, 0, 0);
		PHYSICS::_0x3900491C0D61ED4B(*iParam0, 1.9f);
		PHYSICS::_0x1D97DA8ACB5D2582(*iParam0, 29);
	}
}

void func_1818(int* iParam0, float fParam1)
{
	if (PHYSICS::DOES_ROPE_EXIST(*iParam0) && fParam1 > 0f)
	{
		PHYSICS::ROPE_FORCE_LENGTH(*iParam0, fParam1);
	}
}

void func_1819(int* iParam0, float fParam1, float fParam2)
{
	if (PHYSICS::DOES_ROPE_EXIST(*iParam0) && fParam2 > 0f)
	{
		PHYSICS::_0xD699E688B49C0FD2(*iParam0, fParam1, 0.5f, fParam2, 0);
	}
}

void func_1820()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_378, "fusespool", iLocal_358, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_378, "ARTHUR", Global_35, 0);
}

void func_1822(var uParam0)
{
	if (iLocal_2467 > 2 || iLocal_2468 > 1)
	{
		if (func_2358())
		{
			if (__LIB_9__::func_178(&uLocal_2455) > 8f || !__LIB_0__::func_899(&uLocal_2455))
			{
				if (__LIB_5__::func_314(uParam0, "NTS2_01_EFRET", 0))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_100, Global_35, 8000, 0, 51, 0);
					__LIB_2__::func_259(&uLocal_2455);
				}
			}
		}
		else
		{
			func_1824(uParam0);
		}
	}
}

bool func_1823(var uParam0, char* sParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	if (!AUDIO::_0xA2CAC9DEF0195E6F(1) || bParam4)
	{
		__LIB_4__::func_89(&uLocal_71, 0);
		if (__LIB_9__::func_178(&uLocal_71) > fParam2)
		{
			if (bParam4)
			{
				if (AUDIO::_0xA2CAC9DEF0195E6F(1))
				{
					AUDIO::_0x36559148B78853B3(1, 0, 0);
				}
			}
			if (!PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
			{
				if (__LIB_5__::func_314(uParam0, sParam1, 0))
				{
					__LIB_1__::func_561(&uLocal_71);
					__LIB_1__::func_561(&uLocal_74);
					return true;
				}
				else if (__LIB_9__::func_178(&uLocal_71) > (fParam2 + fParam3))
				{
					__LIB_1__::func_561(&uLocal_71);
					__LIB_1__::func_561(&uLocal_74);
					return true;
				}
			}
		}
	}
	else if (!bParam5)
	{
		__LIB_4__::func_89(&uLocal_74, 0);
		if (__LIB_9__::func_178(&uLocal_74) > 30f)
		{
			AUDIO::_0x36559148B78853B3(1, 0, 0);
			__LIB_1__::func_561(&uLocal_74);
			return true;
		}
	}
	return false;
}

void func_1824(var uParam0)
{
	__LIB_4__::func_89(&uLocal_2458, 0);
	if (__LIB_9__::func_178(&uLocal_2458) > func_2359())
	{
		if (__LIB_5__::func_314(uParam0, func_2360(), 0))
		{
			__LIB_1__::func_561(&uLocal_2458);
		}
	}
}

void func_1825(int iParam0, int iParam1, int iParam2)
{
	if (__LIB_0__::func_272(iParam0, 0))
	{
		if (!__LIB_3__::func_411(iParam0, joaat("MASKS"), 0))
		{
			if (PED::_0x5102307CE88798EB(iParam0))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0) || !PED::IS_TRACKED_PED_VISIBLE(iParam0))
				{
					PED::_0x3088634CF8C819CF(iParam0);
					__LIB_5__::func_414(iParam1, iParam2, 1);
				}
			}
		}
	}
}

void func_1826(int iParam0, int iParam1)
{
	if (__LIB_0__::func_272(iParam0, 0))
	{
		if (!__LIB_3__::func_411(iParam0, joaat("MASKS"), 0))
		{
			if (PED::_0x5102307CE88798EB(iParam0))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0) || !PED::IS_TRACKED_PED_VISIBLE(iParam0))
				{
					PED::_0x3088634CF8C819CF(iParam0);
					func_1236(iParam0, iParam1);
				}
			}
		}
	}
}

bool func_1828(int iParam0)
{
	return __LIB_0__::func_491(iParam0, 985146578);
}

bool func_1829()
{
	return (__LIB_11__::func_24(Global_35) < 192.5f && !func_1220(Local_83, sLocal_41, 16));
}

bool func_1831()
{
	if ((__LIB_0__::func_272(Global_35, 0) && __LIB_0__::func_272(Local_83, 0)) && __LIB_0__::func_272(Local_100, 0))
	{
		if (__LIB_0__::func_48(Global_35, Local_83, 15f, 1) && !__LIB_0__::func_48(Global_35, Local_100, 15f, 1))
		{
			return false;
		}
	}
	return true;
}

void func_1834()
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_CRAFTING_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
	}
}

void func_1836()
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	}
}

bool func_1837()
{
	char* sVar0;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_378))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_378, true, false))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(iLocal_378, true))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(iLocal_378);
			}
		}
		else
		{
			sVar0 = func_1839();
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_378, sVar0))
			{
				return true;
			}
			else if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iLocal_378, sVar0))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_378, sVar0);
			}
		}
	}
	return false;
}

void func_1838()
{
	__LIB_2__::func_259(&uLocal_2461);
	fLocal_2446 = 0f;
	iLocal_2445 = 0;
}

char* func_1839()
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_358))
		{
			switch (__LIB_3__::func_547(iLocal_358, Global_35, 0.707f))
			{
				case 0:
					return "pl_Front_Enter";
				case 1:
					return "pl_Back_Enter";
				case 2:
					return "pl_Left_Enter";
				case 3:
					return "pl_Right_Enter";
				default:
					break;
			}
		}
	}
	return "";
}

bool func_1840()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_378))
	{
		if (((ANIMSCENE::_0x8D81E7824B7753F7(iLocal_378, "s_front_main", 1) || ANIMSCENE::_0x8D81E7824B7753F7(iLocal_378, "s_right_main", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(iLocal_378, "s_back_main", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(iLocal_378, "s_left_main", 1))
		{
			return true;
		}
	}
	return false;
}

void func_1841()
{
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_358, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), vLocal_379, vLocal_379, false, false, false, false, 2, true, false, false);
	ENTITY::PLAY_ENTITY_ANIM(iLocal_358, sLocal_53, sLocal_52, 1f, true, false, false, 0f, 0);
	PED::_0x89F5E7ADECCCB49C(Global_35, "spool");
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_51, 1, 0.25f, 1f, 0);
	PED::SET_PED_CONFIG_FLAG(Global_35, 352, true);
	PED::SET_PED_CONFIG_FLAG(Global_35, 249, true);
	PED::SET_PED_CONFIG_FLAG(Global_35, 43, true);
	bLocal_401 = true;
}

void func_1842(var uParam0, float fParam1, int iParam2, bool bParam3)
{
	int iVar0;
	if ((__LIB_0__::func_272(Global_35, 0) && ENTITY::DOES_ENTITY_EXIST(iLocal_358)) && PHYSICS::DOES_ROPE_EXIST(*uParam0))
	{
		if (func_2361(uParam0, &fLocal_404, 1) || bParam3)
		{
			if (func_2362(&iVar0, uParam0, fParam1, 2, iParam2))
			{
				if (iVar0 >= 0 && iVar0 < (PHYSICS::GET_ROPE_VERTEX_COUNT(*uParam0) - 1))
				{
					if (iVar0 > 0)
					{
						if (uParam0->f_8 != iVar0 && PHYSICS::_0x9B4F7E3E4F9C77B3(*uParam0, Global_35))
						{
							PHYSICS::DETACH_ROPE_FROM_ENTITY(*uParam0, Global_35);
						}
						if (!PHYSICS::_0x9B4F7E3E4F9C77B3(*uParam0, Global_35))
						{
							PHYSICS::_0xC64E7A62632AD2FE(*uParam0, Global_35, vLocal_385, sLocal_56, iVar0, 1);
							uParam0->f_8 = iVar0;
						}
					}
				}
			}
		}
		else
		{
			PHYSICS::DETACH_ROPE_FROM_ENTITY(*uParam0, Global_35);
		}
	}
}

void func_1844()
{
	func_2363(1);
	if (bLocal_401)
	{
		if (__LIB_0__::func_272(Global_35, 0) && ENTITY::DOES_ENTITY_EXIST(iLocal_358))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_358, sLocal_52, sLocal_53, 1))
			{
				if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35) > fLocal_2447)
				{
					fLocal_2447 = (fLocal_2447 + 0.05f);
				}
				else if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35) < fLocal_2447)
				{
					fLocal_2447 = (fLocal_2447 - 0.05f);
				}
				fLocal_2447 = __LIB_0__::func_251(fLocal_2447, 0f, 1f);
				ENTITY::_SET_ENTITY_ANIM_SPEED(iLocal_358, sLocal_52, sLocal_53, fLocal_2447);
			}
		}
		func_2364(&(Local_263[iLocal_2444 /*10*/]));
		func_1842(&(Local_263[iLocal_2444 /*10*/]), 1046898278 /* Float: 0.225f */, -1, 0);
	}
}

bool func_1845(int iParam0, char* sParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam0))
	{
		*iParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, 0, 0, false, true);
	}
	else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam0, true, false))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(*iParam0, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(*iParam0);
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_1846()
{
	fLocal_2447 = 0f;
	func_2364(&(Local_263[iLocal_2444 /*10*/]));
}

void func_1847(float fParam0)
{
	fLocal_2446 = (fLocal_2446 + fParam0);
}

void func_1848(int iParam0)
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_366, "p_cs_fusespool01x", iLocal_358, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_366, "p_dynamite03x", iParam0, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_366, "player_zero", Global_35, 0);
}

char* func_1849(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "pbl_spoolidle_enter_front_wiring";
		case 2:
			return "pbl_spoolIdle_45_l_to_wiring";
		case 3:
			return "pbl_spoolIdle_90_l_to_wiring";
		default:
			break;
	}
	return "";
}

void func_1850()
{
	switch (Local_263[iLocal_2444 /*10*/].f_3)
	{
		case 0:
			if (PHYSICS::DOES_ROPE_EXIST(Local_263[iLocal_2444 /*10*/]) && __LIB_11__::func_21(iLocal_366))
			{
				Local_263[iLocal_2444 /*10*/].f_3 = 1;
			}
			break;
		case 1:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("PULL")))
			{
				PHYSICS::DETACH_ROPE_FROM_ENTITY(Local_263[iLocal_2444 /*10*/], Global_35);
				func_2365(&(Local_263[iLocal_2444 /*10*/]), 1, 1073741824 /* Float: 2f */);
				Local_263[iLocal_2444 /*10*/].f_3 = 2;
			}
			break;
		case 2:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("GRAB")))
			{
				func_2365(&(Local_263[iLocal_2444 /*10*/]), 0, 1073741824 /* Float: 2f */);
				func_2366(&(Local_263[iLocal_2444 /*10*/]), &(Local_263[iLocal_2444 + 1 /*10*/]), 1.5f);
				func_2365(&(Local_263[iLocal_2444 + 1 /*10*/]), 1, 0.66f);
				Local_263[iLocal_2444 /*10*/].f_3 = 4;
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("PULL")))
			{
				func_2365(&(Local_263[iLocal_2444 /*10*/]), 0, 1073741824 /* Float: 2f */);
				func_2365(&(Local_263[iLocal_2444 /*10*/]), 1, 1073741824 /* Float: 2f */);
				Local_263[iLocal_2444 /*10*/].f_3 = 3;
			}
			break;
		case 3:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("GRAB")))
			{
				func_2365(&(Local_263[iLocal_2444 /*10*/]), 0, 1073741824 /* Float: 2f */);
				func_2366(&(Local_263[iLocal_2444 /*10*/]), &(Local_263[iLocal_2444 + 1 /*10*/]), 1.5f);
				func_2365(&(Local_263[iLocal_2444 + 1 /*10*/]), 1, 0.66f);
				Local_263[iLocal_2444 /*10*/].f_3 = 4;
			}
			break;
		case 4:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("ATTACH")))
			{
				func_2368(&(Local_263[iLocal_2444 /*10*/]), &(Local_263[iLocal_2444 + 1 /*10*/]), Local_186[iLocal_2444 /*19*/], func_2367(&(Local_263[iLocal_2444 /*10*/]), Local_186[iLocal_2444 /*19*/]) + Vector(0f, 0.025f, 0.025f));
				Local_263[iLocal_2444 /*10*/].f_3 = 5;
			}
			break;
		case 5:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("GRAB")))
			{
				func_1842(&(Local_263[iLocal_2444 + 1 /*10*/]), 1046898278 /* Float: 0.225f */, -1, 1);
				Local_263[iLocal_2444 /*10*/].f_3 = 6;
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("CUT")))
			{
				func_2365(&(Local_263[iLocal_2444 + 1 /*10*/]), 0, 1073741824 /* Float: 2f */);
				func_2369(&(Local_263[iLocal_2444 + 1 /*10*/]));
				Local_263[iLocal_2444 /*10*/].f_3 = 7;
			}
			break;
		case 6:
			if (func_1256(iLocal_366))
			{
				func_2365(&(Local_263[iLocal_2444 + 1 /*10*/]), 0, 1073741824 /* Float: 2f */);
				Local_263[iLocal_2444 /*10*/].f_3 = 8;
			}
			else if (__LIB_9__::func_178(&(Local_263[iLocal_2444 + 1 /*10*/].f_4)) > 1f)
			{
				func_2365(&(Local_263[iLocal_2444 + 1 /*10*/]), 0, 1073741824 /* Float: 2f */);
			}
			break;
		case 7:
			if (func_1256(iLocal_366))
			{
				func_2365(&(Local_263[iLocal_2444 + 1 /*10*/]), 0, 1073741824 /* Float: 2f */);
				Local_263[iLocal_2444 /*10*/].f_3 = 8;
			}
			break;
		case 8:
			break;
	}
}

char* func_1851(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pbl_spoolidle_enter_front_wiring";
		case 1:
			return "pbl_spoolIdle_45_l_to_wiring";
		case 2:
			return "pbl_spoolIdle_90_l_to_wiring";
		case 3:
			return "pbl_wiring_exit_90_r_to_spoolIdle";
		case 4:
			return "pbl_wiring_exit_180_to_spoolidle";
		default:
			break;
	}
	return "";
}

void func_1854()
{
	bLocal_401 = false;
	__LIB_2__::func_919(iLocal_358, 0, 1);
	ENTITY::STOP_ENTITY_ANIM(iLocal_358, sLocal_53, sLocal_52, -8f);
	PED::_0x58F7DB5BD8FA2288(Global_35);
	PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_51, 0, 1f, 0.5f, 1);
	PED::SET_PED_CONFIG_FLAG(Global_35, 352, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 249, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
}

void func_1855()
{
	ENTITY::PLAY_ENTITY_ANIM(iLocal_358, sLocal_53, sLocal_52, 1f, true, false, false, 0f, 0);
}

void func_1856()
{
	struct<27> Var0;
	if (__LIB_0__::func_491(Local_83, 985146578))
	{
		__LIB_2__::func_966(Local_83, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
		__LIB_2__::func_966(Global_35, Local_83, 1, 1, 1, 0, 1, 1, 0, 1, 1);
		__LIB_8__::func_602(&uLocal_2469, Local_83);
	}
	else
	{
		Var0.f_4 = 1065353216;
		Var0.f_5 = 1065353216;
		Var0.f_9 = 1065353216;
		Var0.f_10 = 1065353216;
		Var0.f_14 = 1065353216;
		Var0.f_15 = 1065353216;
		Var0.f_17 = 1040187392;
		Var0.f_18 = 1040187392;
		Var0.f_19 = -1;
		Var0.f_26 = -1082130432;
		func_2374(Local_83, Global_35, &Var0, 0f, 0f, 0f, sLocal_41, 19456, 1, 3f, -1082130432 /* Float: -1f */, 1073069561, 1f, 1092616192 /* Float: 10f */, -1, 1, 1, 0, 0, 1);
		__LIB_10__::func_425(Global_35, Local_83, &Var0, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 1, 0, -1, 1, 1.5f, -1082130432 /* Float: -1f */, 1);
		__LIB_1__::func_731(&uLocal_2469);
	}
}

void func_1857()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_365, "CS_Dutch", Local_83, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_365, "p_dynamitecrate02x", iLocal_360, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_365, "player_zero", Global_35, 0);
}

void func_1858()
{
	__LIB_1__::func_726(Local_83, 1);
	__LIB_1__::func_727(Global_35, 1);
	__LIB_5__::func_438(&uLocal_2469);
}

void func_1861(int iParam0)
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_367, "CS_Dutch", Local_83, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_367, "p_dynamite03x", iParam0, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_367, "p_dynamitecrate02x", iLocal_360, 0);
}

bool func_1862()
{
	if (func_2379())
	{
		if (__LIB_0__::func_48(Local_83, Global_35, 7.5f, 1))
		{
			if (PED::IS_TRACKED_PED_VISIBLE(Local_83) || __LIB_0__::func_48(Local_83, Global_35, 4.5f, 1))
			{
				if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_367, "bPlant"))
				{
					if (func_2380(iLocal_367, "pbl_placing_dynamite_front_01") && func_2380(iLocal_367, "pbl_placing_dynamite_front_02"))
					{
						if (iLocal_2443 <= 0)
						{
							ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_367, "iSelection", 1, false);
						}
						else
						{
							ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_367, "iSelection", 2, false);
						}
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_367, "bPlant", true, false);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_367, "internal_loop", true, false);
					}
				}
				else if (__LIB_11__::func_354(iLocal_367, "pbl_placing_dynamite_front_01") || __LIB_11__::func_354(iLocal_367, "pbl_placing_dynamite_front_02"))
				{
					ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_367, "iSelection", 0, false);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_367, "bPlant", false, false);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_367, "internal_loop", false, false);
					return true;
				}
			}
		}
	}
	return false;
}

void func_1863()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_367))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_367, "bFlavour", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_367, "bAnnoyed", false, false);
	}
}

bool func_1864()
{
	if (__LIB_9__::func_178(&uLocal_2464) > fLocal_2452)
	{
		if (PED::IS_TRACKED_PED_VISIBLE(Local_83))
		{
			if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_367, "bPlant"))
			{
				if (func_2381())
				{
					if (!__LIB_11__::func_354(iLocal_367, "pbl_prep_dynamite_loop_01") && !__LIB_11__::func_354(iLocal_367, "pbl_prep_dynamite_loop_02"))
					{
						ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_367, "iSelection", 0, false);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_367, "internal_loop", false, false);
						func_1863();
						return true;
					}
				}
				else if (__LIB_9__::func_178(&(Local_83.f_6)) > 25f)
				{
					func_2382();
				}
				else
				{
					func_2383();
				}
			}
		}
	}
	return false;
}

void func_1865(bool bParam0)
{
	if (__LIB_0__::func_272(Local_83, 0) && ENTITY::DOES_ENTITY_EXIST(iLocal_360))
	{
		ENTITY::DETACH_ENTITY(iLocal_360, false, true);
		func_1193();
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_360, Local_83, PED::GET_PED_BONE_INDEX(Local_83, 37709), vLocal_379, vLocal_379, false, false, false, false, 2, true, false, false);
		PED::_0xE8ABE3B73FC7FE17(Local_83, iLocal_360, "p_dynamiteCrate02x_PH_L_HAND", "LOCO_ATTACH_CRATE_DYNAMITE");
		if (bParam0)
		{
			ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_360, true);
			PED::_0x2208438012482A1A(Local_83, false, false);
		}
	}
}

void func_1866()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_367, "CS_Dutch", Local_83, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_367, "p_dynamitecrate02x", iLocal_360, 0);
}

float func_1867(int iParam0, int iParam1)
{
	return func_951(iParam0, iParam1);
}

void func_1868()
{
	if (__LIB_0__::func_272(Local_83, 0) && ENTITY::DOES_ENTITY_EXIST(iLocal_360))
	{
		ENTITY::DETACH_ENTITY(iLocal_360, false, true);
		PED::_0x3A50753042B6891B(Local_83, "p_dynamiteCrate02x_PH_L_HAND");
		PED::_0xDE7B2B4144906CDF(454758258, Local_83);
	}
}

float func_1869(int iParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam1, &iVar1))
		{
			if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), &iVar0))
			{
				if (iVar0 > 0)
				{
					return (BUILTIN::TO_FLOAT(iVar0) / BUILTIN::TO_FLOAT(iVar1));
				}
			}
		}
	}
	return 0f;
}

void func_1870(int iParam0, int iParam1, char* sParam2, float fParam3, float fParam4, int iParam5, bool bParam6, float fParam7, float fParam8, float fParam9, bool bParam10)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	if (__LIB_0__::func_272(iParam0, 0) && __LIB_0__::func_272(iParam1, 0))
	{
		fVar0 = (TASK::_0x3ACC128510142B9D(sParam2, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)) - TASK::_0x3ACC128510142B9D(sParam2, ENTITY::GET_ENTITY_COORDS(iParam1, true, false)));
		if (bParam6)
		{
			fVar2 = fParam7;
		}
		else
		{
			TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sParam2, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), &iVar3);
			fVar2 = TASK::WAYPOINT_RECORDING_GET_SPEED_AT_POINT(sParam2, iVar3);
		}
		fVar4 = (fVar2 * (fParam3 / fVar0));
		if (bParam10)
		{
			fVar1 = (TASK::_0x3ACC128510142B9D(sParam2, func_1344(sParam2)) - TASK::_0x3ACC128510142B9D(sParam2, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)));
			fVar4 = (fVar4 * __LIB_0__::func_251((fVar1 / fParam3), 0.33f, 1f));
		}
		fVar4 = __LIB_0__::func_251(fVar4, fParam8, fParam9);
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam0, sParam2))
		{
			if (fVar0 > fParam4)
			{
				if (fParam8 > 0f)
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam0, fParam8, 0, -1082130432 /* Float: -1f */, 0);
				}
				else if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iParam0))
				{
					TASK::WAYPOINT_PLAYBACK_PAUSE(iParam0, iParam5, 0, 0);
				}
			}
			else if (fVar0 < 1f)
			{
				if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iParam0))
				{
					TASK::WAYPOINT_PLAYBACK_RESUME(iParam0, false, -1, 0);
				}
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam0, fParam9, 0, -1082130432 /* Float: -1f */, 0);
			}
			else
			{
				if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iParam0))
				{
					TASK::WAYPOINT_PLAYBACK_RESUME(iParam0, false, -1, 0);
				}
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam0, fVar4, 0, -1082130432 /* Float: -1f */, 0);
			}
		}
	}
}

void func_1875(int iParam0, int iParam1, float fParam2)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[0 /*26*/]))
	{
		return;
	}
	else
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= (*iParam0 - 1))
		{
			(iParam0[iVar0 /*26*/])->f_18 = { func_2384(iVar0, iParam1, fParam2) };
			iVar0++;
		}
	}
}

bool func_1876(vector3 vParam0)
{
	STREAMING::REQUEST_COLLISION_AT_COORD(vParam0);
	if (!ENTITY::_0x6BFBDC46139C45AB(vParam0))
	{
		return false;
	}
	return true;
}

bool func_1877(int iParam0, struct<4> Param1, struct<4> Param5, struct<4> Param9, int iParam13, float fParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, int iParam19, float fParam20)
{
	vector3 vVar0;
	if (!iParam0->f_25)
	{
		vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param1, Param1.f_3, iParam0->f_18) };
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (bParam16)
			{
				*iParam0 = __LIB_1__::func_545(iLocal_33, vVar0, Param1.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			else
			{
				*iParam0 = __LIB_1__::func_545(iLocal_32, vVar0, Param1.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			if (bParam18)
			{
				func_2385(*iParam0, 1);
			}
			if (__LIB_0__::func_86(Param5))
			{
				iParam0->f_8 = { Param1 };
			}
			else
			{
				iParam0->f_8 = { Param5 };
			}
			iParam0->f_12 = { Param9 };
			iParam0->f_16 = iParam13;
			iParam0->f_23 = bParam16;
			return false;
		}
		else if (bParam17 && !ENTITY::DOES_ENTITY_EXIST(iParam0->f_1))
		{
			iParam0->f_1 = __LIB_1__::func_545(iLocal_34, vVar0, Param1.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1) && fParam20 != 1f)
			{
				PED::_SET_PED_SCALE(iParam0->f_1, fParam20);
			}
			return false;
		}
		else
		{
			iParam0->f_25 = 1;
			iParam0->f_21 = fParam14;
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1) && !PED::IS_PED_ON_MOUNT(*iParam0))
			{
				PED::_SET_PED_ON_MOUNT(*iParam0, iParam0->f_1, -1, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_1, true);
				PED::SET_PED_CONFIG_FLAG(iParam0->f_1, 273, true);
				__LIB_11__::func_430(iParam0->f_1, Global_35);
				__LIB_11__::func_750(iParam0->f_1, Global_35, 0);
			}
			if (bParam15)
			{
				iParam0->f_3 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), *iParam0);
				MAP::_BLIP_SET_MODIFIER(iParam0->f_3, joaat("BLIP_MODIFIER_ENEMY_DISAPPEARING"));
			}
			if (iParam19 > 0)
			{
				PED::SET_PED_MAX_HEALTH(*iParam0, iParam19);
				ENTITY::_SET_ENTITY_HEALTH(*iParam0, iParam19, 0);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
			PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 0, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 50, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 17, false);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 6, true);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 248, false);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 40, false);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 132, true);
			PED::SET_COMBAT_FLOAT(*iParam0, 31, 0f);
			PED::SET_COMBAT_FLOAT(*iParam0, 63, 0f);
			PED::SET_COMBAT_FLOAT(*iParam0, 64, 0f);
			PED::SET_COMBAT_FLOAT(*iParam0, 65, 0f);
			PED::SET_COMBAT_FLOAT(*iParam0, 4, 2.5f);
			PED::SET_COMBAT_FLOAT(*iParam0, 32, 0f);
			PED::_0x8ACC0506743A8A5C(*iParam0, joaat("SCRIPT_MIDCOMBAT"), 1, -1082130432 /* Float: -1f */);
			PED::SET_PED_ACCURACY(*iParam0, 5);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, joaat("REL_PLAYER_ENEMY"));
			PED::_0xDEE8D30AA5C2E28D(*iParam0, joaat("GROUP_MELEE"), 1);
			PED::_0x6569F31A01B4C097(*iParam0, 9, 1);
			WEAPON::_GIVE_WEAPON_TO_PED_2(*iParam0, iParam13, -1, true, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
			WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(*iParam0, __LIB_0__::func_214(iParam13));
			ENTITY::_0x18FF3110CF47115D(*iParam0, 1, 0);
			ENTITY::_0x18FF3110CF47115D(*iParam0, 2, 0);
			ENTITY::_0x18FF3110CF47115D(*iParam0, 7, 0);
			func_2388(iParam0, 1);
			if (__LIB_0__::func_272(Local_100, 0))
			{
				PED::REGISTER_TARGET(*iParam0, Local_100, 1);
			}
			if (__LIB_0__::func_272(Local_83, 0))
			{
				PED::REGISTER_TARGET(*iParam0, Local_83, 1);
			}
			if (__LIB_0__::func_272(Global_35, 0))
			{
				PED::REGISTER_TARGET(*iParam0, Local_117, 1);
			}
			if (__LIB_0__::func_272(Global_35, 0))
			{
				PED::REGISTER_TARGET(*iParam0, Global_35, 1);
			}
			return true;
		}
	}
	return true;
}

void func_1887(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_272((*iParam0)[iVar0 /*26*/], 0))
		{
			if (__LIB_0__::func_491((*iParam0)[iVar0 /*26*/], 658540077))
			{
				TASK::CLEAR_PED_TASKS((*iParam0)[iVar0 /*26*/], true, false);
				PED::SET_PED_CONFIG_FLAG((*iParam0)[iVar0 /*26*/], 72, false);
			}
		}
		iVar0++;
	}
}

void func_1889(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)
{
	if (PHYSICS::DOES_ROPE_EXIST(iParam0))
	{
		if (__LIB_0__::func_272(Global_35, 0))
		{
			PHYSICS::DETACH_ROPE_FROM_ENTITY(iParam0, Global_35);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_358))
		{
			PHYSICS::DETACH_ROPE_FROM_ENTITY(iParam0, iLocal_358);
		}
	}
}

void func_1890(int* iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 25, 1f, true, false, 0.25f);
		OBJECT::DELETE_OBJECT(iParam0);
	}
}

void func_1892(struct<25> Param0, var uParam25, bool bParam26, bool bParam27, bool bParam28)
{
	if (__LIB_0__::func_272(Param0, 0))
	{
		if (!__LIB_0__::func_491(Param0, 242628503) || bParam27)
		{
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Param0, Param0.f_8, 3f, !bParam26, 0, 0);
			if (!__LIB_0__::func_86(Param0.f_12))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Param0, Param0.f_12, 3f, false, 1, 0);
				PED::_0x4EC4EA2F72B36358(Param0, 4);
			}
			TASK::OPEN_SEQUENCE_TASK(&(Param0.f_4));
			if (bParam28 && Param0.f_21 > 0f)
			{
				TASK::TASK_PAUSE(0, BUILTIN::FLOOR((Param0.f_21 * 1000f)));
			}
			if (Param0.f_24 || PED::IS_PED_ON_MOUNT(Param0))
			{
				TASK::TASK_DISMOUNT_ANIMAL(0, 1, 0, 0, 0, 0);
			}
			if (bParam26)
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(0, Param0.f_8, func_2396(), 2f, 1, 1056964608 /* Float: 0.5f */, 3f, 1, 4202497, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
			}
			TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
			TASK::CLOSE_SEQUENCE_TASK(Param0.f_4);
			TASK::TASK_PERFORM_SEQUENCE(Param0, Param0.f_4);
			TASK::CLEAR_SEQUENCE_TASK(&(Param0.f_4));
		}
		if (__LIB_0__::func_272(Param0.f_1, 0))
		{
			if (Param0.f_24 || PED::IS_PED_ON_MOUNT(Param0))
			{
				__LIB_2__::func_788(&(Param0.f_1), 1, 0, 1);
				Param0.f_1 = 0;
				Param0.f_24 = 0;
			}
		}
	}
}

void func_1895(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			if (!PED::_0x5102307CE88798EB((*uParam0)[iVar0 /*26*/]))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING((*uParam0)[iVar0 /*26*/]);
			}
		}
		else
		{
			__LIB_11__::func_737((*uParam0)[iVar0 /*26*/]);
		}
		iVar0++;
	}
}

bool func_1896(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (__LIB_0__::func_272(Global_35, 0))
		{
			if (__LIB_0__::func_272((*uParam0)[iVar0 /*26*/], 0) && !PED::IS_PED_DEAD_OR_DYING((*uParam0)[iVar0 /*26*/], true))
			{
				if (PED::_0x5102307CE88798EB((*uParam0)[iVar0 /*26*/]))
				{
					if (PED::IS_TRACKED_PED_VISIBLE((*uParam0)[iVar0 /*26*/]))
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_1897(var uParam0, struct<4> Param1, int iParam5)
{
	if (__LIB_0__::func_272(*uParam0, 0))
	{
		uParam0->f_8 = { Param1 };
		func_1892(*uParam0, iParam5, 1, 0);
	}
}

void func_1898(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (__LIB_0__::func_272((*uParam0)[iVar0 /*26*/], 0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN((*uParam0)[iVar0 /*26*/]))
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER((*uParam0)[iVar0 /*26*/], false);
			}
			else
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER((*uParam0)[iVar0 /*26*/], true);
			}
		}
		iVar0++;
	}
}

int func_1899(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_272((*iParam0)[iVar1 /*26*/], 0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN((*iParam0)[iVar1 /*26*/]))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_1900(var uParam0, var uParam1)
{
	int iVar0[30];
	int iVar31;
	int iVar32;
	int iVar33;
	iVar31 = 0;
	while (iVar31 <= (*uParam0 - 1))
	{
		if (__LIB_0__::func_272((*uParam0)[iVar31 /*26*/], 0))
		{
			iVar0[iVar32] = iVar31;
			iVar32++;
		}
		iVar31++;
	}
	if (iVar32 > 0)
	{
		iVar33 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar32);
		*uParam1 = { *(uParam0[iVar0[iVar33] /*26*/]) };
		return true;
	}
	return false;
}

void func_1901(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (__LIB_0__::func_272((*uParam0)[iVar0 /*26*/], 0))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER((*uParam0)[iVar0 /*26*/], false);
		}
		iVar0++;
	}
}

void func_1902(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_272((*iParam0)[iVar0 /*26*/], 0))
		{
			PED::SET_PED_FLEE_ATTRIBUTES((*iParam0)[iVar0 /*26*/], iParam1, bParam2);
		}
		iVar0++;
	}
}

void func_1903(var uParam0, var uParam1, int iParam2)
{
	switch (*uParam1)
	{
		case 0:
			__LIB_1__::func_733(*uParam0);
			ENTITY::SET_ENTITY_PROOFS(*uParam0, 1, false);
			switch (iParam2)
			{
				case 0:
					TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_5));
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, func_369(11, 3), 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_369(11, 3), 3f, 20000, 0.25f, 4202497, 40000f);
					TASK::CLOSE_SEQUENCE_TASK(uParam0->f_5);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, uParam0->f_5);
					TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_5));
					break;
				case 1:
					TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_5));
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, func_369(11, 16), 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_369(11, 16), 3f, 20000, 0.25f, 4202497, 40000f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_369(11, 8), 3f, 20000, 0.25f, 4202497, 40000f);
					TASK::CLOSE_SEQUENCE_TASK(uParam0->f_5);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, uParam0->f_5);
					TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_5));
					break;
			}
			*uParam1 = 1;
			break;
		case 1:
			if (!__LIB_0__::func_266(*uParam0, func_369(2, 0), 12f, 1, 0))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("WEAPON_THROWN_TOMAHAWK_MELEEONLY"), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(*uParam0, 1, 1, 0, 0);
				*uParam1 = 2;
			}
			break;
		case 2:
			__LIB_4__::func_89(&(uParam0->f_6), 0);
			if (__LIB_9__::func_178(&(uParam0->f_6)) > 2f)
			{
				__LIB_1__::func_561(&(uParam0->f_6));
				*uParam1 = 3;
			}
			break;
		case 3:
			if (__LIB_0__::func_266(*uParam0, func_369(11, 3), 10f, 1, 0) || __LIB_0__::func_266(*uParam0, func_369(11, 16), 10f, 1, 0))
			{
				*uParam1 = 4;
			}
			break;
		case 4:
			func_2399(*uParam0, joaat("WEAPON_THROWN_TOMAHAWK_MELEEONLY"));
			break;
	}
}

void func_1904()
{
	func_2400(Local_134[0 /*17*/], 0);
	func_2400(Local_134[1 /*17*/], 0);
	WEAPON::SET_CURRENT_PED_WEAPON(Local_134[0 /*17*/], joaat("WEAPON_BOW"), false, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Local_134[1 /*17*/], joaat("WEAPON_BOW"), false, 0, false, false);
	TASK::TASK_COMBAT_HATED_TARGETS(Local_134[0 /*17*/], -1f);
	TASK::TASK_COMBAT_HATED_TARGETS(Local_134[1 /*17*/], -1f);
	TASK::TASK_COMBAT_HATED_TARGETS(Local_134[2 /*17*/], -1f);
}

void func_1905()
{
	Local_2526[0 /*26*/] = { Local_429[1 /*26*/] };
	Local_2526[1 /*26*/] = { Local_429[4 /*26*/] };
	Local_2526[2 /*26*/] = { Local_429[5 /*26*/] };
	Local_2526[3 /*26*/] = { Local_429[7 /*26*/] };
	Local_2526[4 /*26*/] = { Local_429[11 /*26*/] };
	iLocal_2504[0] = 0;
	iLocal_2504[1] = 1;
	iLocal_2504[2] = 2;
	iLocal_2504[3] = 3;
	iLocal_2504[4] = 4;
	iLocal_2504[5] = 7;
	iLocal_2504[6] = 8;
	iLocal_2504[7] = 27;
}

void func_1906(int iParam0)
{
	if (__LIB_0__::func_272(*iParam0, 0))
	{
		if (__LIB_0__::func_272(Local_100, 0))
		{
			PED::_0x4707E9C23D8CA3FE(*iParam0, Local_100);
		}
		if (__LIB_0__::func_272(Local_83, 0))
		{
			PED::_0x4707E9C23D8CA3FE(*iParam0, Local_83);
		}
		if (__LIB_0__::func_272(Global_35, 0))
		{
			PED::_0x4707E9C23D8CA3FE(*iParam0, Local_117);
		}
		func_2388(iParam0, 0);
	}
}

void func_1907(int iParam0, var uParam1, struct<4> Param2, float fParam6)
{
	if (__LIB_0__::func_272(*uParam1, 0))
	{
		if (!__LIB_0__::func_175(uParam1->f_8, Param2, 1056964608 /* Float: 0.5f */, 1))
		{
			__LIB_4__::func_89(&(uParam1->f_5), 0);
			if (__LIB_9__::func_178(&(uParam1->f_5)) > fParam6)
			{
				if (!func_1282(iParam0, Param2, (3f * 0.5f)))
				{
					func_1897(uParam1, Param2, 1);
					__LIB_1__::func_561(&(uParam1->f_5));
				}
			}
		}
	}
}

void func_1908(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if ((iParam0[iVar0 /*26*/])->f_25)
		{
			if (__LIB_0__::func_272((*iParam0)[iVar0 /*26*/], 0) && !PED::IS_PED_DEAD_OR_DYING((*iParam0)[iVar0 /*26*/], true))
			{
				iVar2 = -1;
				fVar3 = 0f;
				iVar1 = 0;
				while (iVar1 <= (*iParam2 - 1))
				{
					if ((*iParam2)[iVar1] >= 0)
					{
						if (!func_1282(iParam0, func_780(iParam1, (*iParam2)[iVar1]), (3f * 0.5f)))
						{
							fVar4 = __LIB_0__::func_94((*iParam0)[iVar0 /*26*/], func_780(iParam1, (*iParam2)[iVar1]), 0);
							if (iVar2 == -1 || fVar3 > fVar4)
							{
								iVar2 = iVar1;
								fVar3 = fVar4;
							}
						}
					}
					iVar1++;
				}
				if (iVar2 >= 0)
				{
					func_1897(iParam0[iVar0 /*26*/], func_476(iParam1, (*iParam2)[iVar2]), 1);
					__LIB_1__::func_561(&((iParam0[iVar0 /*26*/])->f_5));
					(*iParam2)[iVar2] = -1;
				}
			}
		}
		iVar0++;
	}
}

bool func_1912(int iParam0)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_272((*iParam0)[iVar0 /*26*/], 0))
		{
			if ((iParam0[iVar0 /*26*/])->f_24 || PED::IS_PED_ON_MOUNT((*iParam0)[iVar0 /*26*/]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY((*iParam0)[iVar0 /*26*/], true, true);
				__LIB_2__::func_426(&((iParam0[iVar0 /*26*/])->f_1));
				(iParam0[iVar0 /*26*/])->f_24 = 0;
				(iParam0[iVar0 /*26*/])->f_1 = 0;
			}
			vVar2 = { __LIB_8__::func_212(iLocal_412, 100, 0, 1) };
			vVar2.f_2 = (vVar2.z + 50f);
			if (WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(vVar2, 3198, &uVar1) != 2)
			{
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar2, &(vVar2.f_2), false))
				{
					if (PATHFIND::IS_NAVMESH_LOADED_IN_AREA(vVar2 + Vector(0.5f, 0.5f, 0.5f), vVar2 - Vector(0.5f, 0.5f, 0.5f)))
					{
						PED::_0x733C87D4CE22BEA2((*iParam0)[iVar0 /*26*/]);
						func_870((*iParam0)[iVar0 /*26*/], vVar2, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 2, 1073741824 /* Float: 2f */);
						__LIB_1__::func_864((*iParam0)[iVar0 /*26*/], 1, 0);
					}
				}
			}
			else
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_1913(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*26*/]))
		{
			if (PED::IS_PED_RAGDOLL((*iParam0)[iVar0 /*26*/]))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_1915(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*26*/]))
		{
			if ((iParam0[iVar0 /*26*/])->f_17 < 2)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_1916(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*26*/]))
		{
			if ((iParam0[iVar0 /*26*/])->f_17 == 2)
			{
				(iParam0[iVar0 /*26*/])->f_17 = 0;
			}
		}
		iVar0++;
	}
}

bool func_1918(int iParam0)
{
	int iVar0;
	if (__LIB_0__::func_272(iParam0, 0))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= (Local_134 - 1))
		{
			if (iParam0 == Local_134[iVar0 /*17*/])
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

int func_1919(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	iVar0 = 0;
	iVar1 = -1;
	fVar2 = 1000000f;
	if (__LIB_0__::func_272(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 <= (*iParam1 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST((*iParam1)[iVar0 /*26*/]))
			{
				if ((((((iParam1[iVar0 /*26*/])->f_17 == 0 || bParam2) && (iParam1[iVar0 /*26*/])->f_17 < 3) && !FIRE::IS_ENTITY_ON_FIRE((*iParam1)[iVar0 /*26*/])) && !__LIB_10__::func_387((*iParam1)[iVar0 /*26*/])) && !ENTITY::_0x8DE41E9902E85756((*iParam1)[iVar0 /*26*/]))
				{
					if (__LIB_0__::func_665(iParam0, (*iParam1)[iVar0 /*26*/], 1, 1) < fVar2)
					{
						fVar2 = __LIB_0__::func_665(iParam0, (*iParam1)[iVar0 /*26*/], 1, 1);
						iVar1 = iVar0;
					}
				}
			}
			iVar0++;
		}
	}
	return iVar1;
}

bool func_1920(int iParam0, var uParam1)
{
	return (iParam0 >= 0 && iParam0 < Local_429);
}

void func_1922(int iParam0)
{
	if (__LIB_0__::func_272(iParam0, 0))
	{
		AICOVERPOINT::_0x140B3CB1D424A945(iParam0, -1);
		PED::_0xF7EA250B9A919E03(joaat("CROUCH"), iParam0);
	}
}

void func_1923(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*26*/]))
		{
			if (iVar0 <= (Local_2692 - 1))
			{
				Local_2692[iVar0 /*26*/] = { *(iParam0[iVar0 /*26*/]) };
			}
		}
		iVar0++;
	}
}

bool func_1924(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (*iParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar1 /*26*/]))
		{
			if (__LIB_0__::func_272((*iParam0)[iVar1 /*26*/], 0) || !bParam5)
			{
				if (iVar0 < 0 || __LIB_0__::func_94((*iParam0)[iVar1 /*26*/], vParam2, 1) < __LIB_0__::func_94((*iParam0)[iVar0 /*26*/], vParam2, 1))
				{
					iVar0 = iVar1;
				}
			}
		}
		iVar1++;
	}
	if (iVar0 >= 0)
	{
		*iParam1 = { *(iParam0[iVar0 /*26*/]) };
		if (bParam6)
		{
			(*iParam0)[iVar0 /*26*/] = 0;
		}
		return true;
	}
	return false;
}

bool func_1928()
{
	return (((__LIB_0__::func_272(Local_3109, 0) && Local_3109.f_7 > 0) && Local_3109.f_7 < 5) && !ENTITY::IS_ENTITY_DEAD(iLocal_353));
}

bool func_1930(var uParam0, float fParam1)
{
	if (__LIB_0__::func_272(*uParam0, 0))
	{
		if (__LIB_0__::func_266(*uParam0, uParam0->f_8, fParam1, 1, 0))
		{
			return true;
		}
	}
	return false;
}

void func_1931(var uParam0, struct<4> Param1)
{
	if (__LIB_0__::func_272(*uParam0, 0))
	{
		if (!__LIB_0__::func_175(uParam0->f_8, Param1, 1056964608 /* Float: 0.5f */, 1))
		{
			func_1897(uParam0, Param1, 1);
			__LIB_1__::func_561(&(uParam0->f_5));
		}
	}
}

bool func_1932(int iParam0, int iParam1)
{
	if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iParam0))
	{
		return OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iParam0) >= iParam1;
	}
	return false;
}

void func_1933(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, int iParam26)
{
	if (__LIB_0__::func_272(iParam0, 0))
	{
		ENTITY::SET_ENTITY_PROOFS(iParam0, iParam26, false);
	}
}

void func_1934(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, int iParam26)
{
	if (__LIB_0__::func_272(iParam0, 0))
	{
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, iParam26);
	}
}

bool func_1935()
{
	if (!__LIB_0__::func_272(Local_3109, 2))
	{
		Local_3109 = 0;
		return true;
	}
	else if (__LIB_11__::func_741(Local_3109, joaat("BLIP_STYLE_ENEMY"), 1))
	{
		PED::_0x1854217C640B39EC(Local_3109, Global_35, vLocal_379, 20f, 0, 0);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_3109, false);
		WEAPON::SET_CURRENT_PED_WEAPON(Local_3109, WEAPON::GET_BEST_PED_WEAPON(Local_3109, false, false), false, 0, false, false);
		TASK::TASK_SWAP_WEAPON(Local_3109, 1, 1, 0, 0);
		TASK::TASK_COMBAT_HATED_TARGETS(Local_3109, -1f);
		Local_3109.f_1 = Local_3109;
		Local_3109 = 0;
		return true;
	}
	return false;
}

void func_1936()
{
	float fVar0;
	float fVar1;
	int iVar2;
	if (func_1928())
	{
		if (!__LIB_0__::func_86(Local_3109.f_14))
		{
			if (!PED::IS_PED_RELOADING(Local_3109))
			{
				fVar0 = __LIB_0__::func_152(ENTITY::GET_ENTITY_COORDS(iLocal_353, true, false), Local_3109.f_14, 0);
				fVar1 = func_2410();
				if (MISC::ABSF((fVar1 - fVar0)) > (15f * 0.75f))
				{
					iVar2 = func_2411(1f);
					if (iVar2 == 3)
					{
						ENTITY::SET_ENTITY_HEADING(iLocal_353, (ENTITY::GET_ENTITY_HEADING(iLocal_353) + 0.15f));
					}
					else if (iVar2 == 2)
					{
						ENTITY::SET_ENTITY_HEADING(iLocal_353, (ENTITY::GET_ENTITY_HEADING(iLocal_353) - 0.15f));
					}
				}
			}
		}
	}
}

bool func_1937(vector3 vParam0, float fParam3)
{
	return FIRE::IS_EXPLOSION_ACTIVE_IN_AREA(-1, vParam0 - Vector(fParam3, fParam3, fParam3), vParam0 + Vector(fParam3, fParam3, fParam3));
}

bool func_1939()
{
	if (__LIB_0__::func_272(Global_35, 0) && ENTITY::DOES_ENTITY_EXIST(iLocal_353))
	{
		if (__LIB_0__::func_48(Global_35, iLocal_353, 9.5f, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_1940(var uParam0, float fParam1, bool bParam2)
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	var uVar10;
	var uVar13;
	float fVar16;
	float fVar17;
	int iVar18;
	int iVar19;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_353))
	{
		iVar19 = SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_2691, &iVar18, &uVar10, &uVar13, &uVar0);
		vVar7 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_353, 15) };
		if (iVar19 == 0)
		{
			if (bParam2)
			{
				vVar1 = { __LIB_1__::func_660(func_2410()) };
			}
			else
			{
				vVar1 = { __LIB_1__::func_660(__LIB_0__::func_152(ENTITY::GET_ENTITY_COORDS(iLocal_353, true, false), func_369(4, 1), 1)) };
			}
			fVar16 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam1, fParam1);
			fVar17 = MISC::GET_RANDOM_FLOAT_IN_RANGE(func_2413(), func_2414());
			vVar4 = { __LIB_3__::func_509(vVar1, fVar16) * Vector(fVar17, fVar17, fVar17) };
			*uParam0 = { ENTITY::GET_ENTITY_COORDS(iLocal_353, true, false) + vVar4 + Vector(50f, 0f, 0f) };
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam0, &(uParam0->f_2), false))
			{
				*uParam0 = { *uParam0 + Vector(0.1f, 0f, 0f) };
				if ((!func_1282(&Local_899, *uParam0, 3f) && !__LIB_0__::func_266(Local_83, *uParam0, (3f * 1.25f), 1, 1)) && !__LIB_0__::func_266(Local_100, *uParam0, (3f * 1.25f), 1, 1))
				{
					iLocal_2691 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vVar7, *uParam0, 3167, 0, 7);
				}
			}
		}
		else if (iVar19 == 2)
		{
			if (iVar18 == 0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_1941()
{
	if (__LIB_0__::func_272(Global_35, 0) && ENTITY::DOES_ENTITY_EXIST(iLocal_353))
	{
		if (__LIB_10__::func_859(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_353, true, false), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_353, 0f, -9.5f, 0f)))
		{
			return true;
		}
	}
	return false;
}

void func_1942(int iParam0, vector3 vParam1)
{
	if (__LIB_0__::func_272(iParam0, 0))
	{
		if (!__LIB_0__::func_491(iParam0, 518218985))
		{
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
			TASK::TASK_SMART_FLEE_COORD(iParam0, vParam1, 10000f, -1, false, 1077936128);
			func_2417(iParam0, Global_35);
			func_2417(iParam0, Local_83);
			func_2417(iParam0, Local_100);
			func_2417(iParam0, Local_117);
			func_2417(iParam0, Local_134[0 /*17*/]);
			func_2417(iParam0, Local_134[1 /*17*/]);
			func_2417(iParam0, Local_134[2 /*17*/]);
		}
	}
}

bool func_1943(var uParam0, int iParam1, var uParam2, float fParam3)
{
	int iVar0[30];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	iVar31 = 0;
	while (iVar31 <= (*iParam1 - 1))
	{
		if (__LIB_0__::func_272(Global_35, 0))
		{
			if (__LIB_0__::func_272((*iParam1)[iVar31 /*26*/], 0))
			{
				if (__LIB_0__::func_48(Global_35, (*iParam1)[iVar31 /*26*/], fParam3, 1))
				{
					iVar0[iVar32] = iVar31;
					iVar32++;
				}
			}
		}
		iVar31++;
	}
	if (iVar32 > 0)
	{
		iVar33 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar32);
		iVar34 = MISC::GET_RANDOM_INT_IN_RANGE(0, *uParam2);
		if (ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar34 /*3*/]))
		{
			__LIB_11__::func_751(uParam0, (*uParam2)[iVar34 /*3*/]);
		}
		(*uParam2)[iVar34 /*3*/] = (*iParam1)[iVar0[iVar33] /*26*/];
		__LIB_5__::func_106(uParam0, (*iParam1)[iVar0[iVar33] /*26*/], (uParam2[iVar34 /*3*/])->f_1, 0);
		if (__LIB_5__::func_314(uParam0, (uParam2[iVar34 /*3*/])->f_2, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_1944(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 23);
}

bool func_1945(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	if (__LIB_0__::func_272(iParam1, 0) && !PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= (*uParam0 - 1))
		{
			if (__LIB_0__::func_272((*uParam0)[iVar0 /*26*/], 0) && !PED::IS_PED_DEAD_OR_DYING((*uParam0)[iVar0 /*26*/], true))
			{
				if ((*uParam0)[iVar0 /*26*/] != iParam1)
				{
					if (__LIB_0__::func_266((*uParam0)[iVar0 /*26*/], ENTITY::GET_ENTITY_COORDS(iParam1, true, false), fParam2, 1, 0))
					{
						return true;
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_1946(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (__LIB_0__::func_272((*uParam0)[iVar0 /*26*/], 0))
		{
			if (bParam1)
			{
				CAM::_0x986F7A51EE3E1F92((*uParam0)[iVar0 /*26*/], 1);
			}
			else
			{
				CAM::_0x5B637D6F3B67716A((*uParam0)[iVar0 /*26*/]);
			}
		}
		iVar0++;
	}
}

bool func_1950(var uParam0, struct<4> Param1)
{
	if (!__LIB_0__::func_272(*uParam0, 0))
	{
		*uParam0 = func_2421(0, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		return false;
	}
	if (!__LIB_0__::func_266(*uParam0, Param1, 2.5f, 1, 1) || !__LIB_0__::func_491(*uParam0, -982327190))
	{
		func_870(*uParam0, Param1, Param1.f_3, 2, 1073741824 /* Float: 2f */);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
		PED::_0xBF567DF2BEF211A6(*uParam0, 4);
		TASK::TASK_STAND_STILL(*uParam0, -1);
		ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
	}
	return true;
}

void func_1953(var uParam0)
{
	if (__LIB_0__::func_272(*uParam0, 0))
	{
		PED::SET_PED_MAX_HEALTH(*uParam0, 300);
		__LIB_0__::func_854(*uParam0, 100f, 0);
		PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 2);
		PED::SET_PED_COMBAT_ABILITY(*uParam0, 2);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 27, true);
		PED::_SET_PED_DAMAGE_MODIFIER(*uParam0, 100f);
	}
}

void func_1955(int iParam0, int iParam1, char* sParam2, float fParam3, float fParam4, bool bParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_272((*iParam0)[iVar3 /*26*/], 0))
		{
			fVar0 = (TASK::_0x3ACC128510142B9D(sParam2, ENTITY::GET_ENTITY_COORDS(iParam1, true, false)) - TASK::_0x3ACC128510142B9D(sParam2, ENTITY::GET_ENTITY_COORDS((*iParam0)[iVar3 /*26*/], true, false)));
			if (!bParam5)
			{
				TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sParam2, ENTITY::GET_ENTITY_COORDS((*iParam0)[iVar3 /*26*/], true, false), &iVar2);
				fVar1 = TASK::WAYPOINT_RECORDING_GET_SPEED_AT_POINT(sParam2, iVar2);
			}
			else
			{
				fVar1 = fParam6;
			}
			fVar4 = (fVar1 * (fVar0 / fParam3));
			if (fVar4 > 3f)
			{
				fVar4 = 3f;
			}
			else if (fVar4 < 1f)
			{
				fVar4 = 1f;
			}
			if (__LIB_0__::func_491((*iParam0)[iVar3 /*26*/], 658540077))
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED((*iParam0)[iVar3 /*26*/], sParam2))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET((*iParam0)[iVar3 /*26*/], sParam2, -(iParam0[iVar3 /*26*/])->f_18, 0, 19464, -1, 1);
				}
				else if (fVar0 < fParam4)
				{
					TASK::CLEAR_PED_TASKS((*iParam0)[iVar3 /*26*/], true, false);
					TASK::TASK_COMBAT_HATED_TARGETS((*iParam0)[iVar3 /*26*/], -1f);
				}
				else
				{
					__LIB_4__::func_982((*iParam0)[iVar3 /*26*/], fVar4);
				}
			}
			else if (fVar0 > fParam4)
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET((*iParam0)[iVar3 /*26*/], sParam2, -(iParam0[iVar3 /*26*/])->f_18, 0, 19464, -1, 1);
			}
		}
		iVar3++;
	}
}

var func_1959(char* sParam0, struct<4> Param1, vector3 vParam5)
{
	vector3 vVar0;
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param1, Param1.f_3, vParam5) };
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), false);
	return func_2426(MISC::GET_HASH_KEY(sParam0), vVar0, Param1.f_3, 3.5f, 0, 0);
}

void func_1960()
{
	if (func_1326(23))
	{
		if (__LIB_1__::func_588("NTS2_OBJ7a", 0, 0, -1, -1, 0))
		{
			if (__LIB_11__::func_20(32))
			{
				if (func_1220(Global_35, cLocal_39, (Local_3160[2 /*12*/].f_1 - 5)))
				{
					func_1224();
				}
			}
			else if (func_1220(Global_35, cLocal_39, 4))
			{
				func_1224();
			}
		}
	}
}

bool func_1961(var uParam0)
{
	if (Local_3160[iLocal_3159 /*12*/] <= 1)
	{
		switch (iLocal_3159)
		{
			case 1:
				return func_1823(uParam0, "NTS2_07_PATH_A", 0, 1073741824 /* Float: 2f */, 0, 1);
			case 2:
				return func_1823(uParam0, "NTS2_07_PATH_B", 0, 1073741824 /* Float: 2f */, 0, 1);
			default:
				break;
		}
	}
	return false;
}

bool func_1962()
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_272(Local_83, 0))
	{
		if (Local_3160[iLocal_3159 /*12*/] <= 1)
		{
			if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(cLocal_39, ENTITY::GET_ENTITY_COORDS(Local_83, true, false), &iVar1) && TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(cLocal_39, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &iVar0))
			{
				if (iLocal_3151 < iVar1)
				{
					iLocal_3151 = iVar1;
					__LIB_2__::func_259(&uLocal_3215);
				}
				else if (iLocal_3151 < iVar0)
				{
					iLocal_3151 = iVar0;
					__LIB_2__::func_259(&uLocal_3215);
				}
				else if (__LIB_9__::func_178(&uLocal_3215) > 30f)
				{
					__LIB_1__::func_561(&uLocal_3215);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_1963()
{
	int iVar0;
	vector3 vVar1;
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(cLocal_39, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &iVar0))
		{
			if (TASK::WAYPOINT_RECORDING_GET_COORD(cLocal_39, iVar0, &vVar1))
			{
				if (!__LIB_0__::func_266(Global_35, vVar1, 30f, 1, 0))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_1964()
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (Local_3160[iLocal_3159 /*12*/].f_2 >= 0)
		{
			if (func_1220(Global_35, cLocal_39, Local_3160[iLocal_3159 /*12*/].f_2))
			{
				return true;
			}
		}
		if (Local_3160[iLocal_3159 /*12*/].f_3 >= 0)
		{
			if (!func_1220(Global_35, cLocal_39, Local_3160[iLocal_3159 /*12*/].f_3))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_1965()
{
	switch (iLocal_3159)
	{
		case 0:
			if (func_2428())
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Local_1369[4 /*26*/], true, 0, true);
				PED::SET_PED_CONFIG_FLAG(Local_1369[4 /*26*/], 273, true);
				func_2429(&(Local_1369[4 /*26*/]));
				func_2430(&Local_1369);
				return true;
			}
			break;
		case 1:
			if (func_2431())
			{
				func_2429(&(Local_1369[1 /*26*/]));
				func_2429(&(Local_1500[2 /*26*/]));
				func_2429(&(Local_1500[4 /*26*/]));
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_1500[4 /*26*/], -175.1777f, 1347.787f, 170.5429f, -1, 1, 2f, 0, 0, 0, 0, 1, 0);
				func_2430(&Local_1500);
				return true;
			}
			break;
		case 2:
			if (func_2432())
			{
				func_2430(&Local_1631);
				return true;
			}
			break;
		case 3:
			iLocal_3149 = 0;
			return true;
	}
	return false;
}

void func_1966()
{
	switch (iLocal_3159)
	{
		case 1:
			if (__LIB_0__::func_899(&uLocal_3212))
			{
				if ((__LIB_9__::func_178(&uLocal_3212) > 8f || func_1220(Global_35, cLocal_39, 20)) || (func_1220(Local_83, cLocal_39, 20) && ENTITY::IS_ENTITY_ON_SCREEN(Local_83)))
				{
					if (func_2433())
					{
						func_2434(&Local_2154);
						func_2435(&(Local_2154[0 /*26*/]));
						func_2435(&(Local_2154[1 /*26*/]));
						__LIB_1__::func_561(&uLocal_3212);
					}
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_899(&uLocal_3212))
			{
				if (((__LIB_9__::func_178(&uLocal_3212) > 8f || __LIB_1__::func_373(func_1389(cLocal_39, 39), 0.3f, 0.7f, 0.01f, 0.99f)) || func_1220(Global_35, cLocal_39, 33)) || (func_1220(Local_83, cLocal_39, 33) && ENTITY::IS_ENTITY_ON_SCREEN(Local_83)))
				{
					if (func_2437())
					{
						func_2434(&Local_2207);
						func_2435(&(Local_2207[0 /*26*/]));
						func_2435(&(Local_2207[1 /*26*/]));
						__LIB_1__::func_561(&uLocal_3212);
					}
				}
			}
			break;
	}
}

bool func_1967(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_272((*iParam0)[iVar0 /*26*/], 0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN((*iParam0)[iVar0 /*26*/]))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_1968()
{
	switch (iLocal_3159)
	{
		case 0:
			func_2438(&Local_1369, 1);
			func_2434(&Local_1369);
			PED::_SET_PED_CROUCH_MOVEMENT(Local_1369[4 /*26*/], false, 0, false);
			PED::SET_PED_CONFIG_FLAG(Local_1369[4 /*26*/], 273, false);
			PED::_0x00B380FF2DF6AB7A(Local_1369[4 /*26*/], 2);
			PED::REQUEST_PED_VISIBILITY_TRACKING(Local_1369[4 /*26*/]);
			PED::SET_PED_ACCURACY(Local_1369[4 /*26*/], 0);
			func_2439(&(Local_1369[4 /*26*/]), 0, 0, 1, 1f, 1);
			break;
		case 1:
			func_2434(&Local_1500);
			__LIB_2__::func_279(Local_1500[0 /*26*/], 1);
			__LIB_2__::func_279(Local_1500[4 /*26*/], 1);
			PED::_0x00B380FF2DF6AB7A(Local_1500[4 /*26*/], 2);
			PED::REQUEST_PED_VISIBILITY_TRACKING(Local_1500[4 /*26*/]);
			PED::SET_PED_ACCURACY(Local_1500[4 /*26*/], 0);
			func_2440(&(Local_1500[1 /*26*/]), 1, 1075838976 /* Float: 2.5f */);
			func_2439(&(Local_1500[4 /*26*/]), 0, 0, 1, 1f, 1);
			break;
		case 2:
			func_2441(&Local_1631, 0);
			func_2442(&Local_1631);
			__LIB_2__::func_279(Local_1631[3 /*26*/], 1);
			__LIB_2__::func_279(Local_1631[4 /*26*/], 1);
			func_2434(&Local_1631);
			func_2439(&(Local_1631[4 /*26*/]), 0, 0, 1, 0.75f, 1);
			func_1390(&Local_1631, 0);
			__LIB_4__::func_89(&uLocal_3209, 0);
			break;
	}
}

bool func_1969()
{
	switch (iLocal_3159)
	{
		case 0:
			return (func_2443() || func_2444());
		case 1:
			return (((((func_2445(Local_83) && func_1220(Local_83, cLocal_39, Local_3160[1 /*12*/].f_1 + 3)) || func_2443()) || func_2444()) || func_2446(&Local_1500, 1.5f)) || func_1220(Local_83, cLocal_39, Local_3160[1 /*12*/].f_1 + 8));
		case 2:
			return func_2446(&Local_1631, 0);
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

void func_1970(var uParam0)
{
	func_1295();
	switch (iLocal_3159)
	{
		case 0:
			__LIB_11__::func_59(uParam0, 3);
			break;
		case 1:
			__LIB_11__::func_59(uParam0, 4);
			break;
		case 2:
			__LIB_11__::func_59(uParam0, 5);
			break;
		case 3:
			__LIB_11__::func_59(uParam0, 6);
			break;
	}
}

void func_1971()
{
	switch (iLocal_3159)
	{
		case 0:
			func_2447(&Local_1369);
			break;
		case 1:
			func_2447(&Local_1500);
			break;
		case 2:
			func_2447(&Local_1631);
			break;
	}
}

void func_1972()
{
	char cVar0[120];
	func_2448();
	__LIB_2__::func_279(Local_83, 0);
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_83, Local_3160[iLocal_3159 /*12*/].f_5[0 /*3*/], 2.5f, true, 0, 0);
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_83, Local_3160[iLocal_3159 /*12*/].f_5[1 /*3*/], 2.5f, false, 1, 0);
	switch (iLocal_3159)
	{
		case 0:
			cVar0.f_2 = -1;
			cVar0.f_7 = -1;
			cVar0.f_8 = -1082130432;
			cVar0.f_12 = -1082130432;
			cVar0.f_13 = 1;
			cVar0.f_14 = -1082130432;
			cVar0.f_3 = 19464;
			cVar0.f_12 = 1.5f;
			cVar0 = cLocal_39;
			TASK::OPEN_SEQUENCE_TASK(&(Local_83.f_5));
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(0, &cVar0);
			TASK::CLOSE_SEQUENCE_TASK(Local_83.f_5);
			TASK::TASK_PERFORM_SEQUENCE(Local_83, Local_83.f_5);
			TASK::CLEAR_SEQUENCE_TASK(&(Local_83.f_5));
			break;
		case 1:
			TASK::TASK_SEEK_COVER_TO_COORDS(Local_83, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_83, false), func_2449(), -1, 1, 0, 0);
			break;
		case 2:
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD_USING_COMBAT_STYLE(Local_83, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_83, false), func_1389(cLocal_39, 42), 2f, 1, 0.5f, 2.5f, 1, 4202497, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
			break;
		case 3:
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD_USING_COMBAT_STYLE(Local_83, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_83, false), func_1389(cLocal_39, 42), 2f, 1, 0.5f, 2.5f, 1, 4202497, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
			break;
	}
}

int func_1973(var uParam0)
{
	var uVar0;
	switch (iLocal_3159)
	{
		case 0:
			if (__LIB_0__::func_272(Local_1369[2 /*26*/], 0))
			{
				if (!bLocal_3152)
				{
					if (!__LIB_0__::func_272(Local_1369[0 /*26*/], 2))
					{
						bLocal_3152 = true;
						Local_1369[2 /*26*/].f_8 = { Local_1369[0 /*26*/].f_8 };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1369[2 /*26*/], Local_1369[2 /*26*/].f_8, 2.5f, true, 0, 0);
					}
					else if (!__LIB_0__::func_272(Local_1369[1 /*26*/], 2))
					{
						bLocal_3152 = true;
						Local_1369[2 /*26*/].f_8 = { Local_1369[1 /*26*/].f_8 };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1369[2 /*26*/], Local_1369[2 /*26*/].f_8, 2.5f, true, 0, 0);
					}
				}
			}
			if (func_2450(uParam0, &uVar0))
			{
				return uVar0;
			}
			break;
		case 1:
			if (__LIB_0__::func_272(Local_1500[3 /*26*/], 2))
			{
				if (__LIB_11__::func_24(Local_1500[3 /*26*/]) < 171f)
				{
					__LIB_1__::func_864(Local_1500[3 /*26*/], 0, 0);
				}
			}
			if (!__LIB_0__::func_71(Local_1500[0 /*26*/]))
			{
				__LIB_2__::func_279(Local_1500[0 /*26*/], 0);
				func_2439(&(Local_1500[0 /*26*/]), 0, 0, 0, 1075838976 /* Float: 2.5f */, 0);
				func_1942(Local_1500[0 /*26*/].f_1, func_369(6, 11));
			}
			else if (__LIB_0__::func_272(Local_1500[0 /*26*/], 2))
			{
				if (!__LIB_0__::func_491(Local_1500[0 /*26*/], 501393341))
				{
					__LIB_4__::func_89(&(Local_1500[0 /*26*/].f_5), 0);
					if (__LIB_9__::func_178(&(Local_1500[0 /*26*/].f_5)) > 14f)
					{
						__LIB_1__::func_561(&(Local_1500[0 /*26*/].f_5));
						TASK::TASK_DISMOUNT_ANIMAL(Local_1500[0 /*26*/], 0, 0, 0, 0, 0);
					}
				}
			}
			func_2451(&Local_1500, 1);
			if (func_2450(uParam0, &uVar0))
			{
				return uVar0;
			}
			break;
		case 2:
			func_2452();
			func_2453(0);
			if (__LIB_9__::func_178(&uLocal_3209) > 8f || (func_1899(&Local_1631) > 0 && __LIB_0__::func_899(&uLocal_3209)))
			{
				__LIB_1__::func_561(&uLocal_3209);
				func_1390(&Local_1631, 5);
			}
			if (iLocal_3149 >= 5)
			{
				if (__LIB_0__::func_48(Global_35, Local_83, 25f, 1))
				{
					return 5;
				}
			}
			break;
		case 3:
			__LIB_4__::func_89(&uLocal_3209, 0);
			func_2452();
			func_2453(__LIB_9__::func_178(&uLocal_3209) > 40f);
			break;
	}
	return 3;
}

int func_1974()
{
	switch (iLocal_3159)
	{
		case 0:
			return func_1281(&Local_1369);
		case 1:
			return func_1281(&Local_1500);
		case 2:
		case 3:
			return func_1281(&Local_1631);
		default:
			break;
	}
	return 0;
}

bool func_1975()
{
	switch (iLocal_3159)
	{
		case 0:
			return func_1282(&Local_1369, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 25f);
		case 1:
			return func_1282(&Local_1500, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 25f);
		default:
			break;
	}
	return false;
}

void func_1976()
{
	switch (iLocal_3159)
	{
		case 0:
			__LIB_11__::func_737(Local_1369[4 /*26*/]);
			break;
		case 1:
			__LIB_11__::func_342(32);
			__LIB_11__::func_737(Local_1500[4 /*26*/]);
			if (!__LIB_1__::func_185(56))
			{
				__LIB_8__::func_917(iLocal_354, 15f);
			}
			func_430(&Local_2154, 1);
			break;
		case 2:
			func_430(&Local_2207, 1);
			break;
		case 3:
			break;
	}
}

bool func_1977()
{
	func_1875(&Local_2260, 2, -1071644672 /* Float: -2.5f */);
	if (!func_1877(&(Local_2260[0 /*26*/]), func_204(6, 6), Local_419, Local_419, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, 1, 1, 1, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_2260[1 /*26*/]), func_204(6, 6), Local_419, Local_419, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, 1, 0, 1, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_2260[2 /*26*/]), func_204(6, 6), Local_419, Local_419, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, 1, 0, 1, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_2260[3 /*26*/]), func_204(6, 6), Local_419, Local_419, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, 1, 0, 1, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_2260[4 /*26*/]), func_204(6, 6), Local_419, Local_419, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, 1, 0, 1, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_2260[5 /*26*/]), func_204(6, 6), Local_419, Local_419, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, 1, 0, 1, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	return true;
}

bool func_1978()
{
	int iVar0;
	if (__LIB_0__::func_272(Global_35, 0) && __LIB_0__::func_272(Local_83, 0))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= (Local_2260 - 1))
		{
			if (((__LIB_0__::func_48(Local_2260[iVar0 /*26*/], Global_35, 15f, 1) && ENTITY::IS_ENTITY_ON_SCREEN(Local_2260[iVar0 /*26*/])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_35, Local_2260[iVar0 /*26*/], 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_83, Local_2260[iVar0 /*26*/], 1, 1))
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

int func_1979()
{
	switch (iLocal_3159)
	{
		case 0:
			return 1;
		case 1:
			return 6;
		case 2:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_1980()
{
	switch (iLocal_3159)
	{
		case 0:
			__LIB_4__::func_982(Local_83, 1073741824 /* Float: 2f */);
			break;
		case 1:
			__LIB_4__::func_982(Local_83, 1073741824 /* Float: 2f */);
			break;
		case 2:
			func_1870(Local_83, Global_35, cLocal_39, 5f, 8f, 1, 1, 1073741824 /* Float: 2f */, 0, 1077936128 /* Float: 3f */, 0);
			break;
	}
}

bool func_1981()
{
	if (__LIB_0__::func_272(Local_83, 0))
	{
		return ((((__LIB_0__::func_491(Local_83, 242628503) || __LIB_0__::func_491(Local_83, -2117564886)) || __LIB_0__::func_491(Local_83, 1812035420)) || __LIB_0__::func_491(Local_83, -1758697641)) || __LIB_0__::func_491(Local_83, 432954108));
	}
	return false;
}

void func_1982()
{
	if (__LIB_0__::func_272(Local_83, 0))
	{
		switch (iLocal_3159)
		{
			case 0:
				if (__LIB_0__::func_272(Local_1369[4 /*26*/], 0) && !PED::IS_PED_DEAD_OR_DYING(Local_1369[4 /*26*/], true))
				{
					if (__LIB_0__::func_266(Local_1369[4 /*26*/], Local_1369[4 /*26*/].f_8, 1.5f, 1, 0))
					{
						if (!__LIB_0__::func_491(Local_83, -1758697641))
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(Local_83, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_83, false), Local_1369[4 /*26*/], 1.5f, 1, 1056964608 /* Float: 0.5f */, 2.5f, 1, 4202497, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
						}
					}
				}
				else if (!__LIB_0__::func_491(Local_83, 1812035420))
				{
					TASK::TASK_SEEK_COVER_TO_COORDS(Local_83, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_83, false), func_2449(), -1, 1, 0, 0);
				}
				break;
			case 1:
				if (__LIB_0__::func_272(Local_1500[4 /*26*/], 0) && !PED::IS_PED_DEAD_OR_DYING(Local_1500[4 /*26*/], true))
				{
					if (PED::_0x7F9B9791D4CB71F6(Local_83, Local_1500[4 /*26*/], false, 0) == 1 && !__LIB_0__::func_266(Local_1500[4 /*26*/], func_369(14, 9), 0.5f, 1, 0))
					{
						if (!__LIB_0__::func_491(Local_83, 242628503))
						{
							PED::_0x09171A6F8FDE5DC1(Local_83, ENTITY::GET_ENTITY_COORDS(Local_1500[4 /*26*/], true, false), 2);
							TASK::OPEN_SEQUENCE_TASK(&(Local_83.f_5));
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(0, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_83, false), Local_1500[4 /*26*/], 1.5f, 1, 1056964608 /* Float: 0.5f */, 2.5f, 1, 4202497, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
							TASK::TASK_SEEK_COVER_TO_COORDS(0, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_83, false), func_2449(), -1, 1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(Local_83.f_5);
							TASK::TASK_PERFORM_SEQUENCE(Local_83, Local_83.f_5);
							TASK::CLEAR_SEQUENCE_TASK(&(Local_83.f_5));
						}
					}
				}
				break;
			case 2:
			case 3:
				break;
		}
	}
}

void func_1983()
{
	switch (iLocal_3159)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			TASK::TASK_COMBAT_HATED_TARGETS(Local_83, -1f);
			break;
	}
}

void func_1984(bool bParam0)
{
	switch (iLocal_3159)
	{
		case 0:
			func_2454(&Local_1369, bParam0);
			break;
		case 1:
			func_2454(&Local_1500, bParam0);
			break;
		case 2:
		case 3:
			func_2454(&Local_1631, bParam0);
			break;
	}
}

void func_1986(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (iVar0 == iParam1 || (iVar0 % 2) == 0)
		{
			(iParam0[iVar0 /*26*/])->f_2 = Global_35;
		}
		else
		{
			(iParam0[iVar0 /*26*/])->f_2 = func_2455();
		}
		iVar0++;
	}
}

void func_1987(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_272((*iParam0)[iVar0 /*26*/], 0))
		{
			if (MAP::DOES_BLIP_EXIST((iParam0[iVar0 /*26*/])->f_3))
			{
				MAP::_BLIP_REMOVE_MODIFIER((iParam0[iVar0 /*26*/])->f_3, iParam1);
			}
		}
		iVar0++;
	}
}

bool func_1988(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			return __LIB_5__::func_314(uParam0, "NTS2_IG7_JUMP", 0);
		case 2:
		case 3:
			return __LIB_5__::func_314(uParam0, "NTS2_IG7_FJUMP", 0);
		default:
			break;
	}
	return false;
}

float func_1989()
{
	struct<7> Var0;
	vector3 vVar12;
	vector3 vVar24;
	float fVar27;
	float fVar28;
	float fVar29;
	float fVar30;
	if (__LIB_0__::func_272(Global_35, 0) && __LIB_0__::func_272(Local_83, 0))
	{
		if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_372, "pl_Jump_Edge"))
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_374, "CS_Dutch", &Var0, false, 0, 2) && ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_372, "player_zero", &vVar12, true, "pl_Jump_Edge", 2))
			{
				vVar24 = { func_369(7, 0) };
				vVar24.f_2 = vVar12.z;
				fVar27 = func_2456(ENTITY::GET_ENTITY_COORDS(Local_83, true, false), Var0, Var0.f_6);
				fLocal_3227 = func_2456(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), vVar24, vVar12);
				fVar28 = __LIB_0__::func_667(fVar27, 0f, fLocal_3227);
				fVar29 = __LIB_0__::func_667(0.05f, 1f, fVar28);
				fVar30 = __LIB_0__::func_667(0f, fVar29, PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_MOVE_DOWN_ONLY")));
				return fVar30;
			}
		}
	}
	return 0f;
}

void func_1990(int iParam0, float fParam1)
{
	if (func_2009())
	{
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, func_2457(iParam0), fParam1);
	}
}

bool func_1991()
{
	struct<31> Var0;
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (!TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_35))
		{
			Var0.f_6 = -1082130432;
			Var0.f_9 = -1082130432;
			Var0.f_1 = joaat("DEFAULT");
			Var0 = MISC::GET_HASH_KEY(sLocal_55);
			Var0.f_30 = func_2457(0);
			TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(Global_35, sLocal_54, &Var0, func_369(7, 0), func_2458(), 2, 0, 0, 0, 65664, 0);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_1992(int iParam0)
{
	return MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), func_2457(iParam0));
}

void func_1994(int iParam0)
{
	if (__LIB_10__::func_978())
	{
		TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, func_2457(iParam0));
	}
}

bool func_1995(int iParam0)
{
	float fVar0;
	fVar0 = (func_2459(iParam0) - 0.03f);
	if (fLocal_3227 >= (fVar0 - 0.01f))
	{
		if (fLocal_3227 < (fVar0 + 0.01f) || iParam0 == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_1996()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (func_1995(iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_1997()
{
	int iVar0;
	float fVar1;
	float fVar2;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		fVar1 = MISC::ABSF((func_2459(iVar0) - fLocal_3227));
		fVar2 = MISC::ABSF((func_2459(iVar0 + 1) - fLocal_3227));
		if (fVar1 < fVar2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4;
}

bool func_1998()
{
	return (__LIB_0__::func_399(Global_35, 1, 0, 1) != joaat("WEAPON_UNARMED") || __LIB_0__::func_399(Global_35, 1, 1, 1) != joaat("WEAPON_UNARMED"));
}

int func_2000()
{
	if (!AUDIO::_0xD89504D9D7D5057D(sLocal_3228))
	{
		if (__LIB_0__::func_139(iLocal_3241))
		{
			return 5;
		}
	}
	else if (AUDIO::_0xF01C570E0A0A1E67(sLocal_3228))
	{
		return 1;
	}
	else if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(sLocal_3228) <= 4)
	{
		return 2;
	}
	else if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(sLocal_3228) <= 10)
	{
		return 3;
	}
	else
	{
		AUDIO::_0x1ECC76792F661CF5(sLocal_3228);
		return 4;
	}
	return 0;
}

void func_2001(float fParam0, bool bParam1, bool bParam2)
{
	if (__LIB_0__::func_272(Global_35, 0) && __LIB_0__::func_272(Local_83, 0))
	{
		func_2460(&Local_1762, fParam0);
		func_2460(&Local_2023, fParam0);
		if (bParam2)
		{
			PED::_0x73B6F907B913C860(Local_83, 1.3f);
			PED::SET_PED_COMBAT_MOVEMENT(Local_83, 0);
			TASK::TASK_COMBAT_HATED_TARGETS(Local_83, -1f);
		}
		if (bParam1)
		{
			func_2461(&Local_1762, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), 1, 1, 1, 1, 1);
			func_2461(&Local_2023, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), 1, 1, 1, 1, 1);
		}
	}
}

bool func_2003()
{
	return PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_MOVE_DOWN_ONLY")) > 0.5f;
}

void func_2004()
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_372))
		{
			__LIB_1__::func_532(Global_1835011[51 /*74*/].f_1, __LIB_0__::func_802(1108822547));
			ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
			iLocal_3234 = func_1997();
			ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_372, "iSelection", func_2463(iLocal_3234), false);
			__LIB_11__::func_22(iLocal_372);
		}
	}
}

void func_2005(bool bParam0)
{
	if (__LIB_0__::func_272(Local_83, 0))
	{
		if (!__LIB_0__::func_491(Local_83, 780511057))
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_373))
			{
				if (((ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_374, "CS_Dutch") || bParam0) || ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_374, "CS_Dutch")) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_83, iLocal_374))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_83, true);
					__LIB_11__::func_22(iLocal_373);
				}
			}
		}
	}
}

bool func_2006()
{
	return __LIB_0__::func_48(Global_35, Local_1762[1 /*26*/], 4f, 1);
}

void func_2007()
{
	if (__LIB_0__::func_139(iLocal_3241))
	{
		__LIB_1__::func_281(&iLocal_3241, 1, 1);
	}
	if (__LIB_0__::func_139(iLocal_3243))
	{
		__LIB_1__::func_281(&iLocal_3243, 1, 1);
	}
}

void func_2008(int iParam0, bool bParam1)
{
	int iVar0;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_374))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= (*iParam0 - 1))
		{
			if (__LIB_0__::func_272((*iParam0)[iVar0 /*26*/], 0))
			{
				if ((!ANIMSCENE::_0x3AB6C7B0BB0DF4B1((*iParam0)[iVar0 /*26*/], iLocal_374) || ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_374, (iParam0[iVar0 /*26*/])->f_22)) || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_374, (iParam0[iVar0 /*26*/])->f_22))
				{
					if ((iParam0[iVar0 /*26*/])->f_2 == Local_83 && bParam1)
					{
						PED::SET_PED_ACCURACY((*iParam0)[iVar0 /*26*/], 0);
						func_2464(*(iParam0[iVar0 /*26*/]), 0.25f, 1, 0, 1, 1, 1);
					}
					else
					{
						func_2464(*(iParam0[iVar0 /*26*/]), 0.25f, 1, 1, 1, 1, 1);
					}
				}
			}
			iVar0++;
		}
	}
}

bool func_2009()
{
	return TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_35);
}

void func_2010()
{
	if (iLocal_3233 != 3 && iLocal_3233 != 4)
	{
		if ((func_1281(&Local_1762) + func_1281(&Local_2023)) <= 3)
		{
			MISC::SET_TIME_SCALE(0.75f);
			func_2385(Local_2417, 0);
			__LIB_2__::func_279(Global_35, 1);
			func_2464(Local_2417, 0.1f, 1, 1, 1, 1, 1);
			__LIB_4__::func_89(&uLocal_3238, 0);
			iLocal_3233 = 3;
		}
	}
	switch (iLocal_3233)
	{
		case 0:
			TASK::TASK_AIM_GUN_AT_ENTITY(Local_2417, Local_2417.f_2, -1, true, 0);
			iLocal_3233 = 1;
			break;
		case 1:
			if (__LIB_0__::func_399(Global_35, 1, 0, 1) != joaat("WEAPON_UNARMED"))
			{
				if (!PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
				{
					MISC::SET_TIME_SCALE(0.75f);
				}
			}
			if (((PED::IS_PED_DEAD_OR_DYING(Global_35, true) || PED::IS_PED_RELOADING(Global_35)) || __LIB_0__::func_399(Global_35, 1, 0, 1) == joaat("WEAPON_UNARMED")) || IntToFloat(ENTITY::GET_ENTITY_HEALTH(Global_35)) < (IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false)) * 0.2f))
			{
				__LIB_4__::func_89(&uLocal_3238, 0);
				__LIB_2__::func_279(Global_35, 1);
				iLocal_3233 = 2;
			}
			break;
		case 3:
			func_2464(Local_2417, 0f, 1, 1, 1, 1, 0);
			if (PED::IS_PED_SHOOTING(Local_2417))
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(Local_2417, 0f, 0f, 2f, true, -1, 333, 2000, 0);
				__LIB_1__::func_561(&uLocal_3238);
				__LIB_2__::func_279(Local_83, 1);
				iLocal_3233 = 4;
			}
			else if (__LIB_9__::func_178(&uLocal_3238) > 5f)
			{
				iLocal_3233 = 2;
			}
			break;
		case 2:
			if ((!__LIB_0__::func_272(Global_35, 0) || PED::IS_PED_DEAD_OR_DYING(Global_35, true)) || __LIB_9__::func_178(&uLocal_3238) > 2.5f)
			{
				__LIB_1__::func_561(&uLocal_3238);
				__LIB_1__::func_864(Global_35, 0, 0);
				__LIB_2__::func_279(Local_83, 1);
				iLocal_3233 = 4;
			}
			break;
	}
}

void func_2011()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_37, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &iVar0);
	vVar1 = { func_1389(sLocal_37, iVar0 + 11) };
	fVar4 = __LIB_0__::func_152(vVar1, func_1389(sLocal_37, iVar0 + 1 + 11), 1);
	func_870(Local_83, vVar1, fVar4, 2, 1073741824 /* Float: 2f */);
}

void func_2012(int iParam0)
{
	PED::SET_PED_RESET_FLAG(iParam0, 151, true);
}

void func_2013()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_375, "dutch", Local_83, 0);
}

void func_2014(int iParam0, float fParam1)
{
	if (iParam0 < 10)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 0f);
	}
	else if (iParam0 < 62)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, fParam1);
	}
}

void func_2015(int iParam0)
{
	if (iParam0 < 10)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
	}
	else
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_CRAFTING_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	PED::SET_PED_RESET_FLAG(Global_35, 21, true);
	PED::SET_PED_RESET_FLAG(Global_35, 168, true);
	PED::SET_PED_RESET_FLAG(Global_35, 322, true);
	ENTITY::_0xC3ABCFBC7D74AFA5(Global_35, 9, 1);
}

bool func_2017()
{
	char* sVar0;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_376))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_376, true, false))
		{
			sVar0 = func_2467();
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				if (ANIMSCENE::_0x1F0E401031E20146(iLocal_376, sVar0))
				{
					return true;
				}
				else if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_376, sVar0))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_376, sVar0, true);
				}
				else if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iLocal_376, sVar0))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_376, sVar0);
				}
			}
		}
	}
	return false;
}

bool func_2018()
{
	return __LIB_11__::func_21(iLocal_376);
}

void func_2019()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_376))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_376, false))
		{
			ANIMSCENE::START_ANIM_SCENE(iLocal_376);
		}
	}
}

void func_2020()
{
	struct<16> Var0;
	struct<10> Var16;
	int iVar26;
	StringCopy(&(Var0.f_10), "player_camp", 32);
	Var0.f_14 = 6096;
	Var16.f_6 = { func_204(9, 4) };
	iVar26 = 2176;
	Var16 = iVar26;
	Var0 = { Var16 };
	Var0.f_15 = 1;
	__LIB_4__::func_709(Var0, 2);
}

int func_2021(int iParam0, int iParam1)
{
	var uVar0;
	return func_2468(&uVar0, iParam0, iParam1);
}

void func_2043(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (!__LIB_3__::func_358(__LIB_4__::func_998(uParam0)))
	{
		__LIB_5__::func_25(uParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		if (__LIB_0__::func_31(iParam2))
		{
			sParam3 = __LIB_1__::func_464(iParam2, 0);
		}
		else
		{
			sParam3 = __LIB_4__::func_608(iParam2);
		}
	}
	if (!__LIB_5__::func_570(uParam0, iParam1))
	{
		func_2143(uParam0, iParam1, 357297, 0, sParam3, 67108863, 1023, 3, iParam2);
	}
	if (!__LIB_4__::func_610(uParam0->f_5421, iParam1))
	{
		__LIB_4__::func_999(uParam0->f_5421, iParam1);
	}
	DECORATOR::DECOR_SET_INT(iParam1, __LIB_4__::func_611(), iParam2);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, joaat("REL_GANG_DUTCHS"));
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam1, false);
	PED::_0x15F4732C357B1D6D(iParam1, PLAYER::GET_PLAYER_INDEX(), 10);
	PED::_0x15F4732C357B1D6D(iParam1, PLAYER::GET_PLAYER_INDEX(), 11);
}

void func_2141(int iParam0)
{
	PED::SET_PED_CAN_BE_TARGETTED(*iParam0, false);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 278, true);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*iParam0, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, joaat("REL_PLAYER_ALLY"));
}

void func_2143(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!__LIB_5__::func_570(uParam0, iParam1))
	{
		if (!__LIB_5__::func_306(uParam0, iParam1, &iVar0))
		{
			if (!__LIB_5__::func_307(uParam0, &iVar0))
			{
				return;
			}
		}
	}
	else
	{
		return;
	}
	__LIB_5__::func_72(&(uParam0->f_5423[iVar0 /*65*/]), 1);
	uParam0->f_5423[iVar0 /*65*/] = iParam1;
	if (ENTITY::IS_ENTITY_A_PED(iParam1) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
	{
		__LIB_5__::func_72(&(uParam0->f_5423[iVar0 /*65*/]), 128);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		if (__LIB_0__::func_125(iParam3))
		{
			uParam0->f_5423[iVar0 /*65*/].f_1 = iParam3;
			__LIB_5__::func_72(&(uParam0->f_5423[iVar0 /*65*/]), 4);
			__LIB_5__::func_72(&(uParam0->f_5423[iVar0 /*65*/]), 16);
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam3))
		{
			uParam0->f_5423[iVar0 /*65*/].f_1 = iParam3;
			__LIB_5__::func_72(&(uParam0->f_5423[iVar0 /*65*/]), 4);
			__LIB_5__::func_72(&(uParam0->f_5423[iVar0 /*65*/]), 8);
		}
	}
	uParam0->f_5423[iVar0 /*65*/].f_4 = sParam4;
	uParam0->f_5423[iVar0 /*65*/].f_7 = iParam5;
	uParam0->f_5423[iVar0 /*65*/].f_6 = iParam6;
	if (ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		if (iParam8 == -1)
		{
			if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1) == __LIB_0__::func_398(7))
			{
				uParam0->f_5423[iVar0 /*65*/].f_9 = 40;
			}
			else
			{
				uParam0->f_5423[iVar0 /*65*/].f_9 = __LIB_4__::func_633(iParam1);
			}
		}
		else
		{
			uParam0->f_5423[iVar0 /*65*/].f_9 = iParam8;
		}
		if (iParam8 > -1 && iParam8 < 27)
		{
			uParam0->f_5423[iVar0 /*65*/].f_10 = iParam8;
		}
		if (__LIB_0__::func_31(uParam0->f_5423[iVar0 /*65*/].f_10))
		{
		}
	}
	uParam0->f_13145++;
	if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
	{
		if (EVENT::_0x26054EB81AC0893B(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
		{
			EVENT::_0x2DD42FAD06E6F19E(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1), 1, 1);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			uParam0->f_5423[iVar0 /*65*/].f_23[iVar1 /*4*/].f_3 = 357297;
			iVar1++;
		}
		__LIB_5__::func_561(uParam0, iParam1, 2, 4);
		__LIB_5__::func_562(uParam0, iParam1, 2500, 8);
		__LIB_5__::func_562(uParam0, iParam1, 2500, 512);
		__LIB_5__::func_563(uParam0, iParam1, 5000, 512);
		if (uParam0->f_5423[iVar0 /*65*/].f_9 == 14)
		{
			__LIB_5__::func_564(uParam0, iParam1, -2147483648);
		}
	}
}

bool func_2144(var uParam0, int iParam1, struct<4> Param2, int iParam6, char* sParam7, int iParam8)
{
	if (!iParam1->f_16)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			*iParam1 = __LIB_1__::func_545(iLocal_31, Param2, Param2.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			return false;
		}
		if (!PED::_0xA0BC8FAED8CFEB3C(*iParam1))
		{
			return false;
		}
		iParam1->f_3 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), *iParam1);
		WEAPON::REMOVE_ALL_PED_WEAPONS(*iParam1, true, true);
		PED::SET_PED_ACCURACY(*iParam1, 7);
		PED::_0xC2266AA617668AD3(*iParam1, 0.5f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 98, true);
		PED::SET_PED_FIRING_PATTERN(*iParam1, joaat("FIRING_PATTERN_SLOW_SHOT"));
		PED::_0x4EC4EA2F72B36358(*iParam1, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, true);
		PED::SET_PED_CONFIG_FLAG(*iParam1, 263, true);
		PED::SET_PED_CONFIG_FLAG(*iParam1, 16, true);
		if (__LIB_4__::func_939(uParam0) == 1)
		{
			PED::_SET_PED_CROUCH_MOVEMENT(*iParam1, true, 0, true);
		}
		PED::_SET_PED_BODY_COMPONENT(*iParam1, iParam8);
		PED::_UPDATE_PED_VARIATION(*iParam1, true, true, true, true, false);
		func_2141(iParam1);
		PED::SET_PED_MAX_HEALTH(*iParam1, 1200);
		ENTITY::_SET_ENTITY_HEALTH(*iParam1, 1200, 0);
		__LIB_5__::func_106(uParam0, *iParam1, sParam7, 0);
		WEAPON::_GIVE_WEAPON_TO_PED_2(*iParam1, joaat("WEAPON_THROWN_TOMAHAWK_MELEEONLY"), -1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		if (__LIB_4__::func_939(uParam0) < 4)
		{
			WEAPON::_GIVE_WEAPON_TO_PED_2(*iParam1, iParam6, -1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
			WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(*iParam1, __LIB_0__::func_214(iParam6));
		}
		else
		{
			WEAPON::_GIVE_WEAPON_TO_PED_2(*iParam1, joaat("WEAPON_REPEATER_CARBINE"), -1, true, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
			WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(*iParam1, __LIB_0__::func_214(joaat("WEAPON_REPEATER_CARBINE")));
		}
		iParam1->f_16 = 1;
	}
	return true;
}

bool func_2148()
{
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_407))
	{
		iLocal_407 = OBJECT::GET_RAYFIRE_MAP_OBJECT(vLocal_394, 100f, "des_ntvs2_treefall");
	}
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_408))
	{
		iLocal_408 = OBJECT::GET_RAYFIRE_MAP_OBJECT(vLocal_397, 100f, "des_ntvs2_treefall_top");
	}
	return (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_407) && OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_408));
}

void func_2152(var uParam0)
{
	if (func_2585(uParam0, Global_35, "ARTHUR", 1))
	{
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
		if (__LIB_11__::func_20(2))
		{
			__LIB_0__::func_569(-1401977097, 2000, 0, 1, 1, 0, 0, 0);
		}
		else if (__LIB_11__::func_20(1))
		{
			__LIB_3__::func_595(func_369(15, 0));
			__LIB_0__::func_569(-1401977097, 2000, 0, 1, 1, 0, 0, 0);
		}
		else
		{
			__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
		}
	}
	if (func_2585(uParam0, Local_83, "dutch", 1))
	{
		if (__LIB_11__::func_20(2))
		{
		}
		else if (__LIB_11__::func_20(1))
		{
			func_1865(0);
			PED::FORCE_PED_MOTION_STATE(Local_83, joaat("MOTIONSTATE_WALK"), false, 0, false);
		}
		else
		{
			func_1865(0);
			if (!func_1828(Local_83))
			{
				func_1856();
				PED::FORCE_PED_MOTION_STATE(Local_83, joaat("MOTIONSTATE_WALK"), false, 0, false);
			}
		}
		func_1216();
	}
	if (__LIB_10__::func_965(uParam0, iLocal_360, "p_dynamitecrate02x", 0, 1, 1))
	{
		if (!__LIB_11__::func_20(2))
		{
			func_1865(0);
		}
	}
	if (!__LIB_11__::func_20(1) && !__LIB_11__::func_20(2))
	{
		if (func_2585(uParam0, Local_100, "EagleFlies", 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&(Local_100.f_5));
			__LIB_3__::func_638(0, func_204(0, 11), 1f, -1, 1048576000 /* Float: 0.25f */, 0);
			TASK::TASK_SET_CROUCH_MOVEMENT(0, true, 0, false);
			TASK::CLOSE_SEQUENCE_TASK(Local_100.f_5);
			TASK::TASK_PERFORM_SEQUENCE(Local_100, Local_100.f_5);
			TASK::CLEAR_SEQUENCE_TASK(&(Local_100.f_5));
		}
		if (func_2585(uParam0, Local_117, "PAYTAH", 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&(Local_117.f_5));
			TASK::TASK_PAUSE(0, 1000);
			__LIB_3__::func_638(0, func_204(0, 13), 1f, -1, 1048576000 /* Float: 0.25f */, 0);
			TASK::TASK_SET_CROUCH_MOVEMENT(0, true, 0, false);
			TASK::CLOSE_SEQUENCE_TASK(Local_117.f_5);
			TASK::TASK_PERFORM_SEQUENCE(Local_117, Local_117.f_5);
			TASK::CLEAR_SEQUENCE_TASK(&(Local_117.f_5));
		}
		if (func_2585(uParam0, Local_134[0 /*17*/], "A_M_M_WAPWARRIORS_01^1", 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&(Local_134[0 /*17*/].f_5));
			TASK::TASK_PAUSE(0, 2200);
			__LIB_3__::func_638(0, func_204(0, 15), 1f, -1, 1048576000 /* Float: 0.25f */, 0);
			__LIB_11__::func_735(0, joaat("WORLD_HUMAN_CROUCH_INSPECT"), func_369(0, 15), func_1867(0, 15), 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(Local_134[0 /*17*/].f_5);
			TASK::TASK_PERFORM_SEQUENCE(Local_134[0 /*17*/], Local_134[0 /*17*/].f_5);
			TASK::CLEAR_SEQUENCE_TASK(&(Local_134[0 /*17*/].f_5));
		}
		if (func_2585(uParam0, Local_134[1 /*17*/], "A_M_M_WAPWARRIORS_01^2", 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&(Local_134[1 /*17*/].f_5));
			TASK::TASK_PAUSE(0, 3300);
			__LIB_3__::func_638(0, func_204(0, 17), 1f, -1, 1048576000 /* Float: 0.25f */, 0);
			__LIB_11__::func_735(0, joaat("GENERIC_SIT_GROUND_SCENARIO"), func_369(0, 17), func_1867(0, 17), 0.25f, 0);
			TASK::CLOSE_SEQUENCE_TASK(Local_134[1 /*17*/].f_5);
			TASK::TASK_PERFORM_SEQUENCE(Local_134[1 /*17*/], Local_134[1 /*17*/].f_5);
			TASK::CLEAR_SEQUENCE_TASK(&(Local_134[1 /*17*/].f_5));
		}
		if (func_2585(uParam0, Local_134[2 /*17*/], "A_M_M_WAPWARRIORS_01", 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&(Local_134[2 /*17*/].f_5));
			__LIB_3__::func_638(0, func_204(0, 20), 1f, -1, 1048576000 /* Float: 0.25f */, 0);
			TASK::TASK_SET_CROUCH_MOVEMENT(0, true, 0, false);
			TASK::CLOSE_SEQUENCE_TASK(Local_134[2 /*17*/].f_5);
			TASK::TASK_PERFORM_SEQUENCE(Local_134[2 /*17*/], Local_134[2 /*17*/].f_5);
			TASK::CLEAR_SEQUENCE_TASK(&(Local_134[2 /*17*/].f_5));
		}
	}
	if (func_1828(Local_83))
	{
		func_1856();
	}
}

void func_2153(var uParam0)
{
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Local_117, 8, false);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Local_134[0 /*17*/], 8, false);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Local_134[2 /*17*/], 10, false);
	func_1263();
	if (!__LIB_4__::func_948(uParam0, 4))
	{
		if (!func_1932(iLocal_407, 6))
		{
			func_927(iLocal_407, 6);
		}
	}
	func_2587(uParam0, &Local_429, 1, "S_M_M_ARMY_01");
	func_2587(uParam0, &Local_742, 1, "S_M_M_ARMY_01^3");
	if (func_2585(uParam0, Global_35, "ARTHUR", 0))
	{
		PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, WEAPON::GET_BEST_PED_WEAPON(Global_35, false, true), false, 0, false, false);
		TASK::TASK_SWAP_WEAPON(Global_35, 1, 1, 0, 0);
		PED::SET_PED_USING_ACTION_MODE(Global_35, true, -1, 0);
	}
	if (func_2585(uParam0, Local_83, "dutch", 1))
	{
		func_2588(Local_83, &(Local_83.f_4), func_369(2, 2), 0f, 0f, 17.5f, 1.5f, 1f, 3f, 0, 0);
		PED::_SET_PED_CROUCH_MOVEMENT(Local_83, false, 0, false);
		TASK::OPEN_SEQUENCE_TASK(&(Local_83.f_5));
		TASK::TASK_GO_STRAIGHT_TO_COORD(0, func_369(2, 2), 1.5f, 20000, 40000f, 1056964608 /* Float: 0.5f */, 0);
		TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, func_369(10, 14), 30f, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(Local_83.f_5);
		TASK::TASK_PERFORM_SEQUENCE(Local_83, Local_83.f_5);
		TASK::CLEAR_SEQUENCE_TASK(&(Local_83.f_5));
	}
	if (func_2585(uParam0, Local_100, "EagleFlies", 1))
	{
		func_2588(Local_100, &(Local_100.f_4), func_369(2, 1), 0f, 0f, 17.5f, 1.5f, 1f, 3f, 0, 0);
		PED::_SET_PED_CROUCH_MOVEMENT(Local_100, false, 0, false);
		TASK::OPEN_SEQUENCE_TASK(&(Local_100.f_5));
		TASK::TASK_GO_STRAIGHT_TO_COORD(0, func_369(2, 1), 1.5f, 20000, 40000f, 1056964608 /* Float: 0.5f */, 0);
		TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, func_369(10, 14), 30f, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(Local_100.f_5);
		TASK::TASK_PERFORM_SEQUENCE(Local_100, Local_100.f_5);
		TASK::CLEAR_SEQUENCE_TASK(&(Local_100.f_5));
	}
	if (func_2585(uParam0, Local_117, "PAYTAH", 1))
	{
		func_2588(Local_117, &(Local_117.f_4), func_369(2, 3), 0f, 0f, 17.5f, 2f, 1f, 3f, 0, 0);
		PED::_SET_PED_CROUCH_MOVEMENT(Local_117, false, 0, false);
		TASK::OPEN_SEQUENCE_TASK(&(Local_117.f_5));
		TASK::TASK_GO_STRAIGHT_TO_COORD(0, func_369(2, 3), 1.5f, 20000, 40000f, 1056964608 /* Float: 0.5f */, 0);
		TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, func_369(10, 14), 30f, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(Local_117.f_5);
		TASK::TASK_PERFORM_SEQUENCE(Local_117, Local_117.f_5);
		TASK::CLEAR_SEQUENCE_TASK(&(Local_117.f_5));
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Local_117, 8, true);
	}
	if (func_2585(uParam0, Local_134[0 /*17*/], "A_M_M_WAPWARRIORS_01", 1))
	{
		func_2588(Local_134[0 /*17*/], &(Local_134[0 /*17*/].f_4), func_369(2, 4), 0f, 0f, 17.5f, 2f, 1f, 3f, 0, 0);
		PED::_SET_PED_CROUCH_MOVEMENT(Local_134[0 /*17*/], false, 0, false);
		TASK::OPEN_SEQUENCE_TASK(&(Local_134[0 /*17*/].f_5));
		TASK::TASK_GO_STRAIGHT_TO_COORD(0, func_369(2, 4), 1.5f, 20000, 40000f, 1056964608 /* Float: 0.5f */, 0);
		TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, func_369(10, 14), 30f, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(Local_134[0 /*17*/].f_5);
		TASK::TASK_PERFORM_SEQUENCE(Local_134[0 /*17*/], Local_134[0 /*17*/].f_5);
		TASK::CLEAR_SEQUENCE_TASK(&(Local_134[0 /*17*/].f_5));
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Local_134[0 /*17*/], 8, true);
	}
	if (func_2585(uParam0, Local_134[1 /*17*/], "A_M_M_WAPWARRIORS_01^1", 1))
	{
		func_2588(Local_134[1 /*17*/], &(Local_134[1 /*17*/].f_4), func_369(2, 5), 0f, 0f, 17.5f, 2f, 1f, 3f, 0, 0);
		PED::_SET_PED_CROUCH_MOVEMENT(Local_134[1 /*17*/], false, 0, false);
		WEAPON::SET_CURRENT_PED_WEAPON(Local_134[1 /*17*/], joaat("WEAPON_BOW"), true, 0, false, false);
		TASK::OPEN_SEQUENCE_TASK(&(Local_134[1 /*17*/].f_5));
		TASK::TASK_GO_STRAIGHT_TO_COORD(0, func_369(2, 5), 1.5f, 20000, 40000f, 1056964608 /* Float: 0.5f */, 0);
		TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, func_369(10, 14), 30f, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(Local_134[1 /*17*/].f_5);
		TASK::TASK_PERFORM_SEQUENCE(Local_134[1 /*17*/], Local_134[1 /*17*/].f_5);
		TASK::CLEAR_SEQUENCE_TASK(&(Local_134[1 /*17*/].f_5));
	}
	if (func_2585(uParam0, Local_134[2 /*17*/], "A_M_M_WAPWARRIORS_01^2", 1))
	{
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_134[2 /*17*/], func_369(0, 19), 1f, true, 0, 0);
		PED::_SET_PED_CROUCH_MOVEMENT(Local_134[2 /*17*/], false, 0, false);
		TASK::OPEN_SEQUENCE_TASK(&(Local_134[2 /*17*/].f_5));
		TASK::TASK_TURN_PED_TO_FACE_COORD(0, func_369(0, 19), 0);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_369(0, 19), 2f, 20000, 0.25f, 0, 40000f);
		TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, func_369(10, 14), 30f, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(Local_134[2 /*17*/].f_5);
		TASK::TASK_PERFORM_SEQUENCE(Local_134[2 /*17*/], Local_134[2 /*17*/].f_5);
		TASK::CLEAR_SEQUENCE_TASK(&(Local_134[2 /*17*/].f_5));
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Local_134[2 /*17*/], 10, true);
	}
}

void func_2154(var uParam0)
{
	if (!bLocal_2687)
	{
		if (__LIB_11__::func_25(uParam0->f_7375.f_804, 14.77f))
		{
			PAD::_0x5F217BC1190503D8("NTS2_EXPLOSION_NEAR", 1f);
			bLocal_2687 = true;
		}
	}
	if (!bLocal_2688)
	{
		if (AUDIO::_0xD9130842D7226045(sLocal_2690, 0))
		{
			if (__LIB_11__::func_25(uParam0->f_7375.f_804, 16.9f))
			{
				AUDIO::_PLAY_SOUND_FROM_POSITION("long", func_369(4, 8), sLocal_2690, false, 0, true, 0);
				bLocal_2688 = true;
			}
		}
	}
	if (!__LIB_4__::func_948(uParam0, 4))
	{
		func_1298();
		func_1299();
		func_2589(uParam0, &Local_899);
	}
	if (func_2585(uParam0, Global_35, "ARTHUR", 0))
	{
		__LIB_0__::func_569(joaat("MOTIONSTATE_RUN"), 1250, 0, 1, 1, 0, 0, 0);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, WEAPON::GET_BEST_PED_WEAPON(Global_35, false, true), false, 0, false, false);
		TASK::TASK_SWAP_WEAPON(Global_35, 1, 1, 0, 0);
	}
	if (func_2585(uParam0, Local_83, "dutch", 0))
	{
		PED::FORCE_PED_MOTION_STATE(Local_83, joaat("MOTIONSTATE_RUN"), false, 0, false);
		TASK::OPEN_SEQUENCE_TASK(&(Local_83.f_5));
		TASK::TASK_GO_STRAIGHT_TO_COORD(0, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_83, false), 2f, 20000, 40000f, 3f, 0);
		TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
		TASK::CLOSE_SEQUENCE_TASK(Local_83.f_5);
		TASK::TASK_PERFORM_SEQUENCE(Local_83, Local_83.f_5);
		TASK::CLEAR_SEQUENCE_TASK(&(Local_83.f_5));
	}
	if (func_2585(uParam0, Local_100, "EagleFlies", 0))
	{
		PED::FORCE_PED_MOTION_STATE(Local_100, joaat("MOTIONSTATE_RUN"), false, 0, false);
		TASK::OPEN_SEQUENCE_TASK(&(Local_100.f_5));
		TASK::TASK_GO_STRAIGHT_TO_COORD(0, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_100, false), 2f, 20000, 40000f, 3f, 1);
		TASK::TASK_SEEK_COVER_TO_COORDS(0, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_100, false), ENTITY::GET_ENTITY_COORDS(iLocal_353, true, false), 2000, 0, 1, 0);
		TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
		TASK::CLOSE_SEQUENCE_TASK(Local_100.f_5);
		TASK::TASK_PERFORM_SEQUENCE(Local_100, Local_100.f_5);
		TASK::CLEAR_SEQUENCE_TASK(&(Local_100.f_5));
	}
	if (func_2585(uParam0, Local_117, "PAYTAH", 0))
	{
		func_1195(Local_117, func_204(4, 4), 2, 1073741824 /* Float: 2f */);
		PED::FORCE_PED_MOTION_STATE(Local_117, joaat("MOTIONSTATE_RUN"), false, 0, false);
		TASK::OPEN_SEQUENCE_TASK(&(Local_117.f_5));
		TASK::TASK_GO_STRAIGHT_TO_COORD(0, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_117, false), 2f, 20000, 40000f, 3f, 1);
		TASK::TASK_SEEK_COVER_TO_COORDS(0, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_117, false), ENTITY::GET_ENTITY_COORDS(iLocal_353, true, false), 2000, 1, 0, 0);
		TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
		TASK::CLOSE_SEQUENCE_TASK(Local_117.f_5);
		TASK::TASK_PERFORM_SEQUENCE(Local_117, Local_117.f_5);
		TASK::CLEAR_SEQUENCE_TASK(&(Local_117.f_5));
	}
	if (func_2585(uParam0, Local_134[2 /*17*/], "A_M_M_WAPWARRIORS_01", 0))
	{
		func_1195(Local_134[2 /*17*/], func_204(4, 6), 2, 1073741824 /* Float: 2f */);
		PED::FORCE_PED_MOTION_STATE(Local_134[2 /*17*/], joaat("MOTIONSTATE_RUN"), false, 0, false);
		TASK::OPEN_SEQUENCE_TASK(&(Local_134[2 /*17*/].f_5));
		TASK::TASK_GO_STRAIGHT_TO_COORD(0, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_117, false), 2f, 20000, 40000f, 3f, 1);
		TASK::TASK_SEEK_COVER_TO_COORDS(0, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_134[2 /*17*/], false), ENTITY::GET_ENTITY_COORDS(iLocal_353, true, false), -1, 0, 0, 0);
		TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
		TASK::CLOSE_SEQUENCE_TASK(Local_134[2 /*17*/].f_5);
		TASK::TASK_PERFORM_SEQUENCE(Local_134[2 /*17*/], Local_134[2 /*17*/].f_5);
		TASK::CLEAR_SEQUENCE_TASK(&(Local_134[2 /*17*/].f_5));
	}
	if (func_2585(uParam0, Local_134[0 /*17*/], "A_M_M_WAPWARRIORS_01^1", 1))
	{
		__LIB_1__::func_864(Local_134[0 /*17*/], 1, 1);
	}
	if (func_2585(uParam0, Local_134[1 /*17*/], "A_M_M_WAPWARRIORS_01^2", 1))
	{
		__LIB_1__::func_864(Local_134[1 /*17*/], 1, 1);
	}
}

void func_2155(var uParam0)
{
	struct<15> Var0;
	if (CAM::_0x1204EB53A5FBC63D())
	{
		GRAPHICS::ANIMPOSTFX_STOP("KillCamHonorChange");
	}
	if (iLocal_3142 <= 0)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1929375991))
		{
			PAD::_0x5F217BC1190503D8("NTS2_EXPLOSION_NEAR", 1f);
			iLocal_3142 = 1;
		}
	}
	else if (iLocal_3142 <= 1)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1145901970))
		{
			PAD::_0x5F217BC1190503D8("NTS2_EXPLOSION_FAR", 1f);
			iLocal_3142 = 2;
		}
	}
	if (func_2585(uParam0, Global_35, "ARTHUR", 1))
	{
		TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_40, 1, 1f, 0.5f, 1);
		__LIB_0__::func_569(joaat("MOTIONSTATE_RUN"), 2000, 0, 1, 1, 0, 0, 0);
	}
	if (func_2585(uParam0, Local_83, "dutch", 1))
	{
		PED::FORCE_PED_MOTION_STATE(Local_83, joaat("MOTIONSTATE_RUN"), false, 0, false);
		Var0.f_2 = -1;
		Var0.f_7 = -1;
		Var0.f_8 = -1082130432;
		Var0.f_12 = -1082130432;
		Var0.f_13 = 1;
		Var0.f_14 = -1082130432;
		Var0.f_3 = 2056;
		Var0.f_12 = 3f;
		Var0 = sLocal_38;
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(Local_83, &Var0);
	}
}

void func_2156(var uParam0)
{
	func_1371();
	if (func_2585(uParam0, Global_35, "ARTHUR", 1))
	{
		func_1991();
		func_1378();
	}
	if (func_2585(uParam0, Local_83, "dutch", 1))
	{
		ANIMSCENE::START_ANIM_SCENE(iLocal_374);
	}
}

void func_2157(var uParam0)
{
	func_1418(uParam0, 0);
	if (!__LIB_11__::func_25(uParam0->f_7375.f_804, 2f))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (func_2585(uParam0, Local_83, "Dutch", 1))
	{
		__LIB_11__::func_757(uParam0, 0, Local_83, 0, 0, 1, 0);
	}
}

void func_2158(var uParam0)
{
	__LIB_5__::func_590(uParam0, "NTS2_OBJ1a", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
}

void func_2159(var uParam0)
{
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Local_117, 8, true);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Local_134[0 /*17*/], 8, true);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Local_134[2 /*17*/], 10, true);
	func_927(iLocal_407, 9);
	__LIB_5__::func_590(uParam0, "NTS2_OBJ3a", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
}

void func_2160(var uParam0)
{
	func_1267(&Local_899, 0, 1, 0, 1089470464 /* Float: 7.5f */);
	__LIB_5__::func_590(uParam0, "NTS2_OBJ5a", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
}

void func_2161(var uParam0)
{
	__LIB_5__::func_590(uParam0, "NTS2_OBJ6a", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
}

void func_2162(var uParam0)
{
	__LIB_5__::func_590(uParam0, "NTS2_OBJ8a", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	func_1378();
}

bool func_2163(var uParam0)
{
	func_1418(uParam0, 1);
	return (iLocal_3248 >= 3 || __LIB_0__::func_13(32768));
}

bool func_2164(int iParam0)
{
	if (func_1944(iParam0))
	{
		if (iLocal_415 == iParam0)
		{
			return true;
		}
	}
	return false;
}

float func_2166(var uParam0)
{
	switch (__LIB_4__::func_939(uParam0))
	{
		case 0:
			return 30f;
		default:
			break;
	}
	return 75f;
}

float func_2167(var uParam0)
{
	switch (__LIB_4__::func_939(uParam0))
	{
		case 0:
			return 85f;
		default:
			break;
	}
	return 150f;
}

bool func_2168(var uParam0, int iParam1, char[4] cParam2, int iParam3, int iParam4, float fParam5, float fParam6, int iParam7)
{
	struct<8> Var0;
	struct<8> Var8;
	Var0 = { __LIB_6__::func_907(iParam1) };
	Var8 = { __LIB_0__::func_865(iParam1) };
	return __LIB_17__::func_752(uParam0, __LIB_0__::func_271(iParam1), &Var0, &Var8, cParam2, iParam3, iParam4, fParam5, fParam6, iParam7, 1);
}

void func_2171(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_272((*iParam0)[iVar0 /*26*/], 0))
		{
			if (__LIB_0__::func_491((*iParam0)[iVar0 /*26*/], 518218985))
			{
				if (!__LIB_0__::func_48((*iParam0)[iVar0 /*26*/], Global_35, 125f, 1))
				{
					__LIB_11__::func_342(128);
					__LIB_2__::func_788(iParam0[iVar0 /*26*/], 1, 0, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_2185(var uParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_4__::func_939(uParam0) == 25 || __LIB_4__::func_939(uParam0) == 26)
	{
		return;
	}
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 4096))
	{
		if (__LIB_4__::func_948(uParam0, 4) && !__LIB_4__::func_937(uParam0, 8))
		{
			if (!Global_1935630.f_12)
			{
				if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1))
				{
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
					{
						if (iVar0 == 0 || iVar0 == joaat("WEAPON_UNARMED"))
						{
							iVar1 = func_2608(128);
							if (__LIB_0__::func_154(iVar1))
							{
								if (!WEAPON::_0x2387D6E9C6B478AA(Global_35))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar1, true, 0, false, false);
								}
							}
						}
					}
				}
			}
		}
		else
		{
			func_2609(uParam0);
		}
	}
	if (!Global_1935630.f_12)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, __LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 33));
	}
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 8192))
	{
		if (__LIB_4__::func_937(uParam0, 1024) || __LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 4))
		{
			if (!Global_1935630.f_12)
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, false);
			}
		}
	}
}

bool func_2315(int iParam0, int iParam1)
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
				if (func_2315(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2315(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2315(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2315(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

bool func_2358()
{
	if (__LIB_0__::func_272(Global_35, 0) && __LIB_0__::func_272(Local_100, 0))
	{
		if (__LIB_11__::func_24(Global_35) > 192.5f)
		{
			if (__LIB_0__::func_266(Global_35, ENTITY::GET_ENTITY_COORDS(Local_100, true, false), 20f, 1, 0))
			{
				return true;
			}
		}
	}
	return false;
}

float func_2359()
{
	float fVar0;
	fVar0 = 0f;
	switch (iLocal_2444)
	{
		case 0:
			if (iLocal_2468 > 3)
			{
				fVar0 = 20f;
			}
			else
			{
				fVar0 = 25f;
			}
			break;
		case 1:
			fVar0 = 18f;
			break;
		case 2:
			fVar0 = 28f;
			break;
		case 3:
			if (iLocal_2468 == 11)
			{
				fVar0 = 25f;
			}
			else
			{
				fVar0 = 20f;
			}
			break;
	}
	return (fVar0 + 7f);
}

char* func_2360()
{
	float fVar0;
	if (__LIB_0__::func_272(Global_35, 0) && __LIB_0__::func_272(Local_100, 0))
	{
		fVar0 = ((90f + fLocal_2446) - __LIB_9__::func_178(&uLocal_2461));
		if (iLocal_2467 < 3)
		{
			return "NTS2_01_WARN1";
		}
		else if (__LIB_11__::func_24(Global_35) > 192.5f && iLocal_2468 == 11)
		{
			return "NTS2_01_WARN3";
		}
		else if (fVar0 < 45f)
		{
			return "NTS2_01_WARN2";
		}
		else
		{
			return "NTS2_01_WARN1";
		}
	}
	return "";
}

bool func_2361(var uParam0, float fParam1, int iParam2)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	if ((__LIB_0__::func_272(Global_35, 0) && PHYSICS::DOES_ROPE_EXIST(*uParam0)) && ENTITY::DOES_ENTITY_EXIST(iLocal_358))
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(PED::GET_PED_BONE_COORDS(Global_35, 16782, vLocal_379), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_358, vLocal_391), true);
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1701958269))
		{
			bVar1 = true;
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("RELEASED")))
		{
			bVar1 = false;
		}
		*fParam1 = fVar0;
		bVar2 = fVar0 >= *fParam1;
		bVar3 = (*fParam1 < 0.15f || (*fParam1 < 0.2f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35) == 0f));
		return (bVar1 && (bVar2 || bVar3));
	}
	return false;
}

bool func_2362(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	fVar0 = -1f;
	*iParam0 = -1;
	iVar2 = PHYSICS::GET_ROPE_VERTEX_COUNT(*uParam1);
	iParam3 = __LIB_0__::func_309(iParam3, 1, iVar2);
	if (iParam4 < 0)
	{
		iParam4 = iVar2;
	}
	else
	{
		iParam4 = __LIB_0__::func_309(iParam4, iParam3, iVar2);
	}
	iVar1 = (iVar2 - iParam4);
	while (iVar1 <= (iVar2 - iParam3))
	{
		iVar3 = ((iVar2 - iParam3) - iVar1);
		if (fParam2 > 0f)
		{
			if (__LIB_1__::func_410(PED::GET_PED_BONE_COORDS(Global_35, iLocal_416, vLocal_385), PHYSICS::GET_ROPE_VERTEX_COORD(*uParam1, iVar3), fParam2, 1))
			{
				*iParam0 = iVar3;
			}
			else
			{
				fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(PED::GET_PED_BONE_COORDS(Global_35, iLocal_416, vLocal_385), PHYSICS::GET_ROPE_VERTEX_COORD(*uParam1, iVar3), true);
				if (fVar4 < fVar0 || fVar0 < 0f)
				{
					fVar0 = fVar4;
					*iParam0 = iVar3;
				}
				iVar1++;
			}
			return (*iParam0 >= 0 && *iParam0 < iVar2);
		}
	}
}

void func_2363(bool bParam0)
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (bParam0)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_DOWN_ONLY"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LEFT_ONLY"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_RIGHT_ONLY"), false);
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_BLOCK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CHARACTER_WHEEL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_CRAFTING_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER_TRANSITION"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), false);
		PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::GET_PLAYER_INDEX());
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_35, false);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Global_35, false);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
	}
}

void func_2364(var uParam0)
{
	if (func_2361(uParam0, &fLocal_2448, 0))
	{
		func_2705(uParam0, (fLocal_2447 * (0.66f * 1.5f)));
	}
	else
	{
		func_2705(uParam0, (fLocal_2447 * 0.66f));
	}
	if (uParam0->f_9)
	{
		if (fLocal_2447 < 0.05f)
		{
			func_2706(uParam0);
		}
	}
	else if (fLocal_2447 >= 0.05f)
	{
		func_2707(uParam0);
	}
}

void func_2365(var uParam0, bool bParam1, float fParam2)
{
	if (PHYSICS::DOES_ROPE_EXIST(*uParam0))
	{
		if (bParam1)
		{
			if (!uParam0->f_9)
			{
				__LIB_4__::func_89(&(uParam0->f_4), 0);
				func_2707(uParam0);
				func_2705(uParam0, fParam2);
			}
		}
		else
		{
			__LIB_1__::func_561(&(uParam0->f_4));
			func_2706(uParam0);
			func_2705(uParam0, 0f);
		}
	}
}

void func_2366(var uParam0, int* iParam1, float fParam2)
{
	if (PHYSICS::DOES_ROPE_EXIST(*uParam0) && fParam2 > 0f)
	{
		PHYSICS::DETACH_ROPE_FROM_ENTITY(*uParam0, uParam0->f_2);
		PHYSICS::DETACH_ROPE_FROM_ENTITY(*uParam0, Global_35);
		uParam0->f_2 = Global_35;
		PHYSICS::_0xC64E7A62632AD2FE(*uParam0, uParam0->f_2, vLocal_379, sLocal_56, 0, 0);
		func_2708(iParam1, fParam2, 1108082688 /* Float: 35f */, 125);
	}
}

Vector3 func_2367(var uParam0, int iParam1)
{
	if (PHYSICS::DOES_ROPE_EXIST(*uParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam1, PHYSICS::GET_ROPE_LAST_VERTEX_COORD(*uParam0));
	}
	return 0f, 0f, 0f;
}

void func_2368(var uParam0, int* iParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, vector3 vParam21)
{
	if ((PHYSICS::DOES_ROPE_EXIST(*uParam0) && PHYSICS::DOES_ROPE_EXIST(*iParam1)) && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		uParam0->f_2 = iParam2;
		iParam1->f_1 = iParam2;
		PHYSICS::_0xC64E7A62632AD2FE(*uParam0, uParam0->f_2, vParam21, 0, 0, 0);
		PHYSICS::_0xC64E7A62632AD2FE(*iParam1, iParam1->f_1, vParam21, 0, 0, 1);
		func_1817(iParam1);
		func_1819(iParam1, 0.66f, func_2709(iParam1));
	}
}

void func_2369(var uParam0)
{
	if (PHYSICS::DOES_ROPE_EXIST(*uParam0) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		PHYSICS::DETACH_ROPE_FROM_ENTITY(*uParam0, Global_35);
		PHYSICS::DETACH_ROPE_FROM_ENTITY(*uParam0, uParam0->f_1);
		uParam0->f_1 = 0;
	}
}

void func_2374(int iParam0, int iParam1, var uParam2, vector3 vParam3, char* sParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11, float fParam12, int iParam13, int iParam14, bool bParam15, int iParam16, int iParam17, int iParam18, bool bParam19)
{
	struct<10> Var0;
	struct<10> Var11;
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
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		if (iParam7 == 0)
		{
			iParam7 = 14;
		}
		Var0 = 2;
		Var0.f_4 = sParam6;
		Var0.f_5 = iParam7;
		Var0.f_7 = iParam16;
		Var0.f_9 = iParam17;
		TASK::TASK_LEAD_AND_CONVERSE(iParam0, iParam1, &Var0, iParam8, fParam9, iParam10, iParam11, iParam13, fParam12);
	}
	else if (!__LIB_0__::func_138(vParam3, 0f, 0f, 0f))
	{
		Var11 = 0;
		Var11.f_1 = { vParam3 };
		Var11.f_7 = iParam16;
		Var11.f_9 = iParam17;
		Var11.f_8 = iParam18;
		TASK::TASK_LEAD_AND_CONVERSE(iParam0, iParam1, &Var11, iParam8, fParam9, iParam10, iParam11, iParam13, fParam12);
	}
	if (bParam15)
	{
		PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
	}
	if (bParam19)
	{
		__LIB_1__::func_735(iParam0, iParam1, iParam14);
	}
}

bool func_2379()
{
	if (iLocal_2443 > 0)
	{
		return Local_186[(iLocal_2443 - 1) /*19*/].f_18;
	}
	return iLocal_2468 >= 8;
}

bool func_2380(int iParam0, char* sParam1)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0, false))
		{
			return ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1);
		}
	}
	return false;
}

bool func_2381()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_367))
	{
		if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_367, "bAnnoyed") || ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_367, "bFlavour"))
		{
			return true;
		}
	}
	return false;
}

void func_2382()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_367))
	{
		if (!func_2381())
		{
			ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_367, "iSelection", MISC::GET_RANDOM_INT_IN_RANGE(1, 3), false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_367, "bAnnoyed", true, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_367, "internal_loop", true, false);
		}
	}
}

void func_2383()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_367))
	{
		if (!func_2381())
		{
			ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_367, "iSelection", MISC::GET_RANDOM_INT_IN_RANGE(1, 3), false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_367, "bFlavour", true, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_367, "internal_loop", true, false);
		}
	}
}

Vector3 func_2384(int iParam0, int iParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	switch (iParam1)
	{
		case 2:
			if ((iParam0 % 2) == 0)
			{
				fVar0 = -0.25f;
			}
			else
			{
				fVar0 = 0.25f;
			}
			fVar2 = BUILTIN::TO_FLOAT((iParam0 / 2));
			fVar1 = BUILTIN::TO_FLOAT(BUILTIN::FLOOR(fVar2));
			break;
		case 3:
			if ((iParam0 % 3) == 0)
			{
				fVar0 = -1f;
			}
			else if ((iParam0 % 3) == 1)
			{
				fVar0 = 0f;
			}
			else
			{
				fVar0 = 1f;
			}
			if ((iParam0 / 3) < 1)
			{
				fVar1 = 0f;
			}
			else if ((iParam0 / 3) < 2)
			{
				fVar1 = 1f;
			}
			else if ((iParam0 / 3) < 3)
			{
				fVar1 = 2f;
			}
			else
			{
				fVar1 = 3f;
			}
			break;
	}
	return Vector(0f, fVar1, fVar0) * Vector(fParam2, fParam2, fParam2);
}

void func_2385(int iParam0, bool bParam1)
{
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, bParam1);
	ENTITY::SET_ENTITY_VISIBLE(iParam0, !bParam1);
	ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iParam0, !bParam1, false);
}

void func_2388(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_134 - 1))
	{
		if (__LIB_0__::func_272(Local_134[iVar0 /*17*/], 0))
		{
			if (bParam1)
			{
				PED::REGISTER_TARGET(*iParam0, Local_134[iVar0 /*17*/], 1);
			}
			else
			{
				PED::_0x4707E9C23D8CA3FE(*iParam0, Local_134[iVar0 /*17*/]);
			}
		}
		iVar0++;
	}
}

var func_2396()
{
	int iVar0[7];
	int iVar8;
	iVar8 = 0;
	if (__LIB_0__::func_272(Global_35, 0))
	{
		iVar0[iVar8] = Global_35;
		iVar8++;
	}
	if (__LIB_0__::func_272(Local_83, 0))
	{
		iVar0[iVar8] = Local_83;
		iVar8++;
	}
	if (__LIB_0__::func_272(Local_100, 0))
	{
		iVar0[iVar8] = Local_100;
		iVar8++;
	}
	if (__LIB_0__::func_272(Local_117, 0))
	{
		iVar0[iVar8] = Local_117;
		iVar8++;
	}
	if (__LIB_0__::func_272(Local_134[0 /*17*/], 0))
	{
		iVar0[iVar8] = Local_134[0 /*17*/];
		iVar8++;
	}
	if (__LIB_0__::func_272(Local_134[1 /*17*/], 0))
	{
		iVar0[iVar8] = Local_134[1 /*17*/];
		iVar8++;
	}
	if (__LIB_0__::func_272(Local_134[2 /*17*/], 0))
	{
		iVar0[iVar8] = Local_134[2 /*17*/];
		iVar8++;
	}
	return iVar0[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar8)];
}

void func_2399(int iParam0, int iParam1)
{
	if (__LIB_0__::func_399(iParam0, 1, 0, 1) != iParam1)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iParam1, false, 0, false, false);
		TASK::TASK_SWAP_WEAPON(iParam0, 1, 1, 0, 0);
	}
	else if (!__LIB_0__::func_491(iParam0, -1442466670))
	{
		func_2400(iParam0, 1);
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iParam0, 30f, 1048576, 1);
	}
}

void func_2400(int iParam0, bool bParam1)
{
	PED::SET_PED_COMBAT_MOVEMENT(iParam0, 2);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 50, bParam1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 93, bParam1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 5, bParam1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 46, bParam1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 96, bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 249, bParam1);
	PED::SET_COMBAT_FLOAT(iParam0, 7, 1f);
	PED::_0xB8DE69D9473B7593(iParam0, 12);
	PED::_0x8ACC0506743A8A5C(iParam0, joaat("CHARGEATTACK"), 2, -1082130432 /* Float: -1f */);
}

float func_2410()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_353))
	{
		return __LIB_0__::func_152(ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_353, 14), ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_353, 15), 0);
	}
	return 0f;
}

int func_2411(float fParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_353))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_353, true, false) };
		vVar3 = { __LIB_1__::func_868(ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_353, 14), ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_353, 15), 1065353216 /* Float: 1f */) };
		vVar6 = { Local_3109.f_14 - vVar0 };
		fVar9 = __LIB_1__::func_507(vVar3, vVar6);
		if (MISC::ABSF(fVar9) > fParam0)
		{
			if (fVar9 > 0f)
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else if (__LIB_0__::func_195(vVar0, vVar0 + vVar3, Local_3109.f_14))
		{
			return 3;
		}
		else
		{
			return 2;
		}
	}
	return 4;
}

float func_2413()
{
	float fVar0;
	fVar0 = (__LIB_0__::func_665(Global_35, iLocal_353, 1, 1) * 0.55f);
	if (fVar0 < 9.5f)
	{
		return 9.5f;
	}
	return fVar0;
}

float func_2414()
{
	float fVar0;
	fVar0 = (__LIB_0__::func_665(Global_35, iLocal_353, 1, 1) * 0.85f);
	if (fVar0 < 22.5f)
	{
		return 22.5f;
	}
	return fVar0;
}

void func_2417(int iParam0, int iParam1)
{
	if (__LIB_0__::func_272(iParam0, 0) && __LIB_0__::func_272(iParam1, 0))
	{
		TASK::_0x3923EC958249657D(iParam0, iParam1, -1f);
	}
}

int func_2421(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	var uVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar1 = func_2719(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, fParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
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

var func_2426(int iParam0, vector3 vParam1, int iParam4, float fParam5, int iParam6, int iParam7)
{
	return TASK::CREATE_SCENARIO_POINT(iParam0, vParam1, iParam4, fParam5, iParam6, iParam7);
}

bool func_2428()
{
	if (!func_1877(&(Local_1369[0 /*26*/]), func_204(14, 0), func_204(13, 0), Local_419, joaat("WEAPON_REPEATER_CARBINE"), 8f, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_1369[1 /*26*/]), func_204(14, 1), func_204(13, 1), Local_419, joaat("WEAPON_REPEATER_CARBINE"), 5f, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_1369[2 /*26*/]), func_204(14, 2), func_204(13, 2), Local_419, joaat("WEAPON_RIFLE_BOLTACTION"), 8f, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_1369[3 /*26*/]), func_204(14, 3), func_204(13, 3), Local_419, joaat("WEAPON_RIFLE_BOLTACTION"), 5f, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_1369[4 /*26*/]), func_204(14, 4), func_204(13, 4), Local_419, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 0f, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	return true;
}

void func_2429(var uParam0)
{
	TASK::_0x12990818C1D35886(*uParam0, 0, 1065353216 /* Float: 1f */);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 30, false);
	PED::SET_COMBAT_FLOAT(*uParam0, 32, 0f);
	PED::_0x8ACC0506743A8A5C(*uParam0, joaat("SCRIPT_MIDCOMBAT"), 1, -1082130432 /* Float: -1f */);
}

void func_2430(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_272((*iParam0)[iVar0 /*26*/], 0))
		{
			PED::_0x9238A3D970BBB0A9((*iParam0)[iVar0 /*26*/], -820192119);
		}
		iVar0++;
	}
}

bool func_2431()
{
	if (!func_1877(&(Local_1500[0 /*26*/]), func_204(14, 5), func_204(13, 5), Local_419, joaat("WEAPON_REVOLVER_CATTLEMAN"), 4.5f, 0, 1, 1, 0, 0, 1.15f))
	{
		return false;
	}
	if (!func_1877(&(Local_1500[1 /*26*/]), func_204(14, 6), func_204(13, 6), Local_419, joaat("WEAPON_REPEATER_CARBINE"), 2f, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_1500[2 /*26*/]), func_204(14, 7), func_204(13, 7), Local_419, joaat("WEAPON_SHOTGUN_PUMP"), 0f, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_1500[3 /*26*/]), func_204(14, 8), func_204(13, 8), Local_419, joaat("WEAPON_REPEATER_CARBINE"), 5f, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_1500[4 /*26*/]), func_204(14, 9), func_204(13, 9), Local_419, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0f, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	return true;
}

bool func_2432()
{
	if (!func_1877(&(Local_1631[0 /*26*/]), func_204(14, 10), func_204(13, 10), Local_419, joaat("WEAPON_SHOTGUN_PUMP"), 0f, 0, 0, 0, 1, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_1631[1 /*26*/]), func_204(14, 11), func_204(13, 11), Local_419, joaat("WEAPON_REVOLVER_CATTLEMAN"), 1.5f, 0, 0, 0, 1, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_1631[2 /*26*/]), func_204(14, 12), func_204(13, 12), Local_419, joaat("WEAPON_REVOLVER_CATTLEMAN"), 3f, 0, 0, 0, 1, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_1631[3 /*26*/]), func_204(14, 13), func_204(13, 13), Local_419, joaat("WEAPON_REPEATER_CARBINE"), 4.5f, 0, 0, 0, 1, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_1631[4 /*26*/]), func_204(14, 14), func_204(13, 14), Local_419, joaat("WEAPON_RIFLE_BOLTACTION"), 0f, 0, 0, 0, 1, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	return true;
}

bool func_2433()
{
	if (!func_1877(&(Local_2154[0 /*26*/]), func_204(14, 0), func_204(13, 0), Local_419, joaat("WEAPON_REPEATER_CARBINE"), 0f, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_2154[1 /*26*/]), func_204(14, 20), func_204(13, 18), Local_419, joaat("WEAPON_REPEATER_CARBINE"), 0.5f, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	return true;
}

void func_2434(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_272((*iParam0)[iVar0 /*26*/], 0))
		{
			func_2439(iParam0[iVar0 /*26*/], 0, 0, 0, 1075838976 /* Float: 2.5f */, 0);
		}
		iVar0++;
	}
}

void func_2435(var uParam0)
{
	TASK::_0x12990818C1D35886(*uParam0, 0, 1065353216 /* Float: 1f */);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 30, true);
	PED::SET_COMBAT_FLOAT(*uParam0, 32, 0f);
	PED::_0x8ACC0506743A8A5C(*uParam0, joaat("SCRIPT_MIDCOMBAT"), 1, -1082130432 /* Float: -1f */);
}

bool func_2437()
{
	if (!func_1877(&(Local_2207[0 /*26*/]), func_204(14, 21), func_204(13, 19), Local_419, joaat("WEAPON_REPEATER_CARBINE"), 0f, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (!func_1877(&(Local_2207[1 /*26*/]), func_204(14, 22), func_204(13, 20), Local_419, joaat("WEAPON_REPEATER_CARBINE"), 0.5f, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	return true;
}

void func_2438(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (__LIB_0__::func_272((*uParam0)[iVar0 /*26*/], 0))
		{
			__LIB_2__::func_279((*uParam0)[iVar0 /*26*/], bParam1);
		}
		iVar0++;
	}
}

void func_2439(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, float fParam5)
{
	int iVar0;
	if ((!__LIB_0__::func_491(*uParam0, 242628503) && !__LIB_0__::func_491(*uParam0, -2117564886)) || bParam3)
	{
		func_2721(uParam0, uParam0->f_8, iParam4, 1, fParam5);
		TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_4));
		TASK::TASK_PAUSE(0, BUILTIN::CEIL((uParam0->f_21 * 1000f)));
		if (bParam2)
		{
			if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(cLocal_39, uParam0->f_8, &iVar0))
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(0, cLocal_39, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 2f), 0, 3080, iVar0, 1);
			}
		}
		if (bParam1)
		{
			TASK::TASK_SEEK_COVER_TO_COORDS(0, PED::GET_PED_DEFENSIVE_AREA_POSITION(*uParam0, false), ENTITY::GET_ENTITY_COORDS(Local_83, true, false), 1000, 1, 1, 0);
		}
		TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
		TASK::CLOSE_SEQUENCE_TASK(uParam0->f_4);
		TASK::TASK_PERFORM_SEQUENCE(*uParam0, uParam0->f_4);
		TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_4));
	}
}

void func_2440(var uParam0, bool bParam1, float fParam2)
{
	if (!__LIB_0__::func_491(*uParam0, 242628503) || bParam1)
	{
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam0->f_8, fParam2, false, 0, 0);
		TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_4));
		TASK::TASK_PAUSE(0, BUILTIN::CEIL((uParam0->f_21 * 1000f)));
		TASK::TASK_GO_STRAIGHT_TO_COORD(0, PED::GET_PED_DEFENSIVE_AREA_POSITION(*uParam0, false), 2f, 20000, 40000f, fParam2, 1);
		TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
		TASK::CLOSE_SEQUENCE_TASK(uParam0->f_4);
		TASK::TASK_PERFORM_SEQUENCE(*uParam0, uParam0->f_4);
		TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_4));
	}
}

void func_2441(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_272((*iParam0)[iVar0 /*26*/], 0))
		{
			func_2385((*iParam0)[iVar0 /*26*/], bParam1);
		}
		iVar0++;
	}
}

void func_2442(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		(iParam0[iVar0 /*26*/])->f_21 = 0f;
		iVar0++;
	}
}

int func_2443()
{
	switch (iLocal_3159)
	{
		case 0:
			return func_2722(&Local_1369);
		case 1:
			return func_2722(&Local_1500);
		case 2:
			return func_2722(&Local_1631);
		default:
			break;
	}
	return 1;
}

int func_2444()
{
	switch (iLocal_3159)
	{
		case 0:
			return func_2723(&Local_1369);
		case 1:
			return func_2723(&Local_1500);
		case 2:
			return func_2723(&Local_1631);
		default:
			break;
	}
	return 1;
}

int func_2445(int iParam0)
{
	switch (iLocal_3159)
	{
		case 0:
			return func_2724(iParam0, &Local_1369);
		case 1:
			return func_2724(iParam0, &Local_1500);
		case 2:
			return func_2724(iParam0, &Local_1631);
		default:
			break;
	}
	return 1;
}

bool func_2446(int iParam0, float fParam1)
{
	struct<14> Var0;
	int iVar20;
	Var0.f_8 = -1082130432;
	iVar20 = 0;
	iVar20 = 0;
	while (iVar20 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_272((*iParam0)[iVar20 /*26*/], 0))
		{
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY((*iParam0)[iVar20 /*26*/], Global_35, 17))
			{
				__LIB_4__::func_89(&uLocal_3218, 0);
				if (__LIB_9__::func_178(&uLocal_3218) > fParam1)
				{
					Var0 = { PED::GET_PED_BONE_COORDS((*iParam0)[iVar20 /*26*/], 41403, vLocal_379) };
					Var0.f_3 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) + __LIB_3__::func_858() * Vector(2f, 2f, 2f) };
					Var0.f_6 = __LIB_0__::func_399((*iParam0)[iVar20 /*26*/], 1, 0, 0);
					Var0.f_7 = 0f;
					Var0.f_9 = (*iParam0)[iVar20 /*26*/];
					Var0.f_10 = Global_35;
					Var0.f_11 = (*iParam0)[iVar20 /*26*/];
					Var0.f_13 = 1;
					MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var0);
					__LIB_1__::func_561(&uLocal_3218);
					return true;
				}
			}
			else if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY((*iParam0)[iVar20 /*26*/], Local_83, 17))
			{
				__LIB_4__::func_89(&uLocal_3218, 0);
				if (__LIB_9__::func_178(&uLocal_3218) > fParam1)
				{
					Var0 = { PED::GET_PED_BONE_COORDS((*iParam0)[iVar20 /*26*/], 41403, vLocal_379) };
					Var0.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_83, true, false) + __LIB_3__::func_858() * Vector(2f, 2f, 2f) };
					Var0.f_6 = __LIB_0__::func_399((*iParam0)[iVar20 /*26*/], 1, 0, 0);
					Var0.f_7 = 0f;
					Var0.f_9 = (*iParam0)[iVar20 /*26*/];
					Var0.f_10 = Local_83;
					Var0.f_11 = (*iParam0)[iVar20 /*26*/];
					Var0.f_13 = 1;
					MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var0);
					__LIB_1__::func_561(&uLocal_3218);
					return true;
				}
			}
		}
		iVar20++;
	}
	return false;
}

void func_2447(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_272((*iParam0)[iVar0 /*26*/], 0))
		{
			if (!MAP::DOES_BLIP_EXIST((iParam0[iVar0 /*26*/])->f_3))
			{
				(iParam0[iVar0 /*26*/])->f_3 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), (*iParam0)[iVar0 /*26*/]);
				MAP::_BLIP_SET_MODIFIER((iParam0[iVar0 /*26*/])->f_3, joaat("BLIP_MODIFIER_ENEMY_DISAPPEARING"));
				MAP::_BLIP_SET_MODIFIER((iParam0[iVar0 /*26*/])->f_3, -1034486097);
			}
		}
		iVar0++;
	}
}

void func_2448()
{
	switch (iLocal_3159)
	{
		case 0:
		case 1:
			PED::_0x00B380FF2DF6AB7A(Local_83, 2);
			break;
		case 2:
		case 3:
			PED::_0x00B380FF2DF6AB7A(Local_83, 0);
			break;
	}
}

Vector3 func_2449()
{
	switch (iLocal_3159)
	{
		case 0:
			return func_2726(&Local_1369);
		case 1:
			return func_2726(&Local_1500);
		case 2:
		case 3:
			return func_2726(&Local_1631);
		default:
			break;
	}
	return vLocal_379;
}

bool func_2450(var uParam0, var uParam1)
{
	if (func_1974() <= 0)
	{
		__LIB_11__::func_59(uParam0, 8);
		iLocal_3157 = 1;
		*uParam1 = 5;
		return true;
	}
	else if (func_1974() <= 1 && (!__LIB_0__::func_272(Local_1500[0 /*26*/], 2) || !__LIB_0__::func_71(Local_1500[0 /*26*/])))
	{
		__LIB_4__::func_89(&uLocal_3209, 0);
		if (__LIB_9__::func_178(&uLocal_3209) > 7.5f)
		{
			func_2727();
			__LIB_2__::func_259(&uLocal_3209);
			*uParam1 = 4;
			return true;
		}
	}
	return false;
}

void func_2451(int iParam0, int iParam1)
{
	int iVar0;
	if (func_1281(iParam0) <= iParam1)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= (*iParam0 - 1))
		{
			if (__LIB_0__::func_272((*iParam0)[iVar0 /*26*/], 0))
			{
				PED::SET_PED_RESET_FLAG((*iParam0)[iVar0 /*26*/], 9, true);
			}
			iVar0++;
		}
	}
}

void func_2452()
{
	int iVar0;
	float fVar1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_1631 - 1))
	{
		if (Local_1631[iVar0 /*26*/].f_25)
		{
			if (!__LIB_0__::func_272(Local_1631[iVar0 /*26*/], 2))
			{
				__LIB_4__::func_89(&(Local_1631[iVar0 /*26*/].f_5), 0);
				fVar1 = (IntToFloat(func_1281(&Local_1631)) / BUILTIN::TO_FLOAT(5));
				if (__LIB_9__::func_178(&(Local_1631[iVar0 /*26*/].f_5)) > (8.5f * fVar1))
				{
					__LIB_2__::func_788(&(Local_1631[iVar0 /*26*/]), 1, 0, 1);
					__LIB_1__::func_561(&(Local_1631[iVar0 /*26*/].f_5));
					Local_1631[iVar0 /*26*/].f_25 = 0;
					Local_1631[iVar0 /*26*/] = 0;
					Local_1631[iVar0 /*26*/].f_21 = (MISC::GET_RANDOM_FLOAT_IN_RANGE((3f * 0.5f), 3f) * fVar1);
					iLocal_3149++;
				}
			}
		}
		iVar0++;
	}
	if (iLocal_3159 == 2)
	{
		func_2728();
	}
	else
	{
		func_2729();
	}
}

void func_2453(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_1631 - 1))
	{
		if (Local_1631[iVar0 /*26*/].f_25)
		{
			if (!__LIB_0__::func_491(Local_1631[iVar0 /*26*/], 242628503))
			{
				if (!__LIB_0__::func_491(Local_1631[iVar0 /*26*/], -2117564886))
				{
					PED::_0x9A4AC116CC1EEE14(Local_1631[iVar0 /*26*/]);
					if (iVar0 == 4)
					{
						func_2439(&(Local_1631[iVar0 /*26*/]), 0, 0, 0, 0.75f, 1);
					}
					else
					{
						func_2439(&(Local_1631[iVar0 /*26*/]), 0, 1, 0, 1075838976 /* Float: 2.5f */, 0);
					}
					if (bParam0)
					{
						func_1953(&(Local_1631[iVar0 /*26*/]));
					}
				}
				else if (__LIB_0__::func_48(Local_1631[iVar0 /*26*/], Global_35, 3f, 1))
				{
					func_2730(&(Local_1631[iVar0 /*26*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_2454(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_272((*iParam0)[iVar0 /*26*/], 0))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES((*iParam0)[iVar0 /*26*/], 27, bParam1);
		}
		iVar0++;
	}
}

int func_2455()
{
	float fVar0;
	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar0 > 0.33f)
	{
		return Global_35;
	}
	return Local_83;
}

float func_2456(vector3 vParam0, vector3 vParam3, vector3 vParam6)
{
	float fVar0;
	float fVar1;
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam3, vParam6, false);
	fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vParam3, false);
	return __LIB_0__::func_667(0f, 1f, (fVar1 / fVar0));
}

char* func_2457(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDLE";
		case 1:
			return "WALK";
		case 2:
			return "Walk";
		case 3:
			return "Idle";
		case 4:
			return "Progression";
		default:
			break;
	}
	return "";
}

Vector3 func_2458()
{
	vector3 vVar0;
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_372, "player_zero", &vVar0, true, "pl_Jump_Edge", 2))
	{
		return 0f, 0f, __LIB_0__::func_152(vVar0, func_369(7, 0), 1);
	}
	return vLocal_379;
}

float func_2459(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1f;
		case 1:
			return 0.85f;
		case 2:
			return 0.65f;
		case 3:
			return 0.45f;
		case 4:
			return 0.25f;
		default:
			break;
	}
	return 0f;
}

void func_2460(int iParam0, float fParam1)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		PED::_SET_PED_DAMAGE_MODIFIER((*iParam0)[iVar0 /*26*/], fParam1);
		iVar0++;
	}
}

void func_2461(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_272((*iParam0)[iVar0 /*26*/], 0))
		{
			func_2464(*(iParam0[iVar0 /*26*/]), fParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
		}
		iVar0++;
	}
}

int func_2463(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 3;
		case 2:
			return 2;
		case 3:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_2464(struct<5> Param0, int iParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, float fParam26, bool bParam27, bool bParam28, bool bParam29, bool bParam30, bool bParam31)
{
	if (__LIB_0__::func_272(Param0, 0))
	{
		if (!__LIB_0__::func_491(Param0, 242628503) && !__LIB_0__::func_491(Param0, 167901368))
		{
			if (bParam29)
			{
				WEAPON::_0x5230D3F6EE56CFE6(Param0, 0);
			}
			if (bParam30)
			{
				WEAPON::_SET_PED_INFINITE_AMMO_CLIP(Param0, true);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(Param0, 122, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Param0, 26, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Param0, 27, bParam28);
			if (bParam31)
			{
				TASK::OPEN_SEQUENCE_TASK(&(Param0.f_4));
				TASK::TASK_AIM_GUN_AT_ENTITY(0, Param0.f_2, BUILTIN::FLOOR((fParam26 * 1000f)), bParam27, 0);
				TASK::TASK_SHOOT_AT_ENTITY(0, Param0.f_2, -1, joaat("FIRING_PATTERN_FULL_AUTO"), bParam29);
				TASK::CLOSE_SEQUENCE_TASK(Param0.f_4);
				TASK::TASK_PERFORM_SEQUENCE(Param0, Param0.f_4);
				TASK::CLEAR_SEQUENCE_TASK(&(Param0.f_4));
			}
			else
			{
				TASK::TASK_SHOOT_AT_ENTITY(Param0, Param0.f_2, -1, joaat("FIRING_PATTERN_FULL_AUTO"), bParam29);
			}
		}
	}
}

char* func_2467()
{
	if (__LIB_0__::func_871())
	{
		return "PBL_1";
	}
	else
	{
		return "PBL_2";
	}
	return "";
}

int func_2468(var uParam0, int iParam1, int iParam2)
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
	if (__LIB_0__::func_446("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		Var23.f_9 = -1591664384;
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!__LIB_0__::func_236(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!__LIB_0__::func_154(Var4.f_4))
			{
			}
			else if (!WEAPON::_0x705BE297EEBDB95D(Var4.f_4) && !WEAPON::_IS_WEAPON_BOW(Var4.f_4))
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
				if ((((((WEAPON::_IS_WEAPON_TWO_HANDED(Var4.f_4) || __LIB_0__::func_237(Var4.f_4)) && (!WEAPON::_IS_WEAPON_SHOTGUN(Var4.f_4) || __LIB_0__::func_27(iParam1, 16))) && (!WEAPON::_IS_WEAPON_SNIPER(Var4.f_4) || __LIB_0__::func_27(iParam1, 4))) && (!__LIB_0__::func_237(Var4.f_4) || __LIB_0__::func_27(iParam1, 8))) && (!WEAPON::_IS_WEAPON_REPEATER(Var4.f_4) || !__LIB_0__::func_27(iParam1, 8388608))) && (!WEAPON::_IS_WEAPON_RIFLE(Var4.f_4) || !__LIB_0__::func_27(iParam1, 1048576)))
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
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
	}
	else if (!__LIB_0__::func_27(iParam1, 512) && !__LIB_0__::func_27(iParam1, 1024))
	{
		iParam1 |= 512;
		return func_2468(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2585(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (__LIB_0__::func_272(iParam1, 0))
	{
		if (__LIB_11__::func_37(uParam0, iParam1, sParam2, 0, 1, 1))
		{
			if (!__LIB_4__::func_948(uParam0, 4) || bParam3)
			{
				return true;
			}
		}
	}
	return false;
}

void func_2587(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	int iVar0;
	if (func_2585(uParam0, (*iParam1)[iParam2 /*26*/], sParam3, 1))
	{
		func_1313(iParam1);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= (*iParam1 - 1))
		{
			if (__LIB_0__::func_272((*iParam1)[iVar0 /*26*/], 0))
			{
				PED::SET_PED_USING_ACTION_MODE((*iParam1)[iVar0 /*26*/], true, -1, 0);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA((*iParam1)[iVar0 /*26*/], (iParam1[iVar0 /*26*/])->f_8, 3f, false, 0, 0);
				if (PED::IS_PED_ON_MOUNT((*iParam1)[iVar0 /*26*/]))
				{
					TASK::OPEN_SEQUENCE_TASK(&((iParam1[iVar0 /*26*/])->f_4));
					TASK::TASK_DISMOUNT_ANIMAL(0, 1, 0, 0, 0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
					TASK::CLOSE_SEQUENCE_TASK((iParam1[iVar0 /*26*/])->f_4);
					TASK::TASK_PERFORM_SEQUENCE((*iParam1)[iVar0 /*26*/], (iParam1[iVar0 /*26*/])->f_4);
					TASK::CLEAR_SEQUENCE_TASK(&((iParam1[iVar0 /*26*/])->f_4));
					func_1942((iParam1[iVar0 /*26*/])->f_1, func_369(15, 1));
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&((iParam1[iVar0 /*26*/])->f_4));
					if (__LIB_3__::func_547((*iParam1)[iVar0 /*26*/], Global_35, 0.5f) == 0)
					{
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(0, (iParam1[iVar0 /*26*/])->f_8, func_2396(), 2f, 1, 1056964608 /* Float: 0.5f */, 3f, 1, 4202497, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, (iParam1[iVar0 /*26*/])->f_8, 2f, -1, 3f, 4202497, 40000f);
					}
					TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
					TASK::CLOSE_SEQUENCE_TASK((iParam1[iVar0 /*26*/])->f_4);
					TASK::TASK_PERFORM_SEQUENCE((*iParam1)[iVar0 /*26*/], (iParam1[iVar0 /*26*/])->f_4);
					TASK::CLEAR_SEQUENCE_TASK(&((iParam1[iVar0 /*26*/])->f_4));
					PED::FORCE_PED_MOTION_STATE((*iParam1)[iVar0 /*26*/], joaat("MOTIONSTATE_RUN"), false, 0, false);
				}
			}
			iVar0++;
		}
	}
}

void func_2588(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, var uParam11, var uParam12)
{
	*uParam1 = VOLUME::_CREATE_VOLUME_BOX(vParam2, vParam5, vParam8);
	PED::_0xFC3DB99C8144CD81(iParam0, *uParam1, uParam11, uParam12, 0);
}

void func_2589(var uParam0, var uParam1)
{
	int iVar0;
	if (__LIB_11__::func_25(uParam0->f_7375.f_804, 17f))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= (*uParam1 - 1))
		{
			if (__LIB_0__::func_272((*uParam1)[iVar0 /*26*/], 0))
			{
				if (!__LIB_0__::func_491((*uParam1)[iVar0 /*26*/], 242628503))
				{
					PED::SET_PED_USING_ACTION_MODE((*uParam1)[iVar0 /*26*/], true, -1, 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA((*uParam1)[iVar0 /*26*/], (uParam1[iVar0 /*26*/])->f_8, 3f, false, 0, 0);
					TASK::OPEN_SEQUENCE_TASK(&((uParam1[iVar0 /*26*/])->f_4));
					TASK::TASK_PAUSE(0, BUILTIN::FLOOR(((uParam1[iVar0 /*26*/])->f_21 * 1000f)));
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, (uParam1[iVar0 /*26*/])->f_8, 2f, -1, 3f, 4202497, 40000f);
					TASK::CLOSE_SEQUENCE_TASK((uParam1[iVar0 /*26*/])->f_4);
					TASK::TASK_PERFORM_SEQUENCE((*uParam1)[iVar0 /*26*/], (uParam1[iVar0 /*26*/])->f_4);
					TASK::CLEAR_SEQUENCE_TASK(&((uParam1[iVar0 /*26*/])->f_4));
					PED::FORCE_PED_MOTION_STATE((*uParam1)[iVar0 /*26*/], joaat("MOTIONSTATE_RUN"), false, 0, false);
				}
			}
			iVar0++;
		}
	}
}

int func_2608(int iParam0)
{
	var uVar0;
	var uVar4;
	int iVar8;
	int iVar9;
	iVar8 = func_1446(&uVar0, iParam0, 0);
	iVar9 = func_2468(&uVar4, iParam0, 0);
	if (iVar8 == 0)
	{
		if (iVar9 == 0)
		{
			if (__LIB_0__::func_27(iParam0, 256))
			{
				return joaat("WEAPON_UNARMED");
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return iVar9;
		}
	}
	else if (iVar9 == 0)
	{
		return iVar8;
	}
	if (WEAPON::_0xA2091482ED42EF85(Global_35, &uVar0) > WEAPON::_0xA2091482ED42EF85(Global_35, &uVar4) && !__LIB_0__::func_27(iParam0, 64))
	{
		return iVar8;
	}
	return iVar9;
}

void func_2609(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!Global_1935630.f_12)
	{
		if (uParam0->f_7374 != 0 && uParam0->f_7374 != joaat("WEAPON_UNARMED"))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
			{
				if (iVar0 != uParam0->f_7374)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, uParam0->f_7374, true, 0, false, false);
				}
			}
			else if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, uParam0->f_7374, 0, false))
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, uParam0->f_7374) > 0)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, uParam0->f_7374, true, 0, false, false);
				}
			}
		}
		else if ((__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1) && !__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 4)) && __LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 0, false))
			{
				if (iVar1 == 0 || iVar1 == joaat("WEAPON_UNARMED"))
				{
					iVar2 = func_2608(128);
					if (__LIB_0__::func_154(iVar2))
					{
						if (!WEAPON::_0x2387D6E9C6B478AA(Global_35))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar2, false, 0, false, false);
						}
					}
				}
			}
			else
			{
				iVar3 = func_2608(128);
				if (__LIB_0__::func_154(iVar3))
				{
					if (!WEAPON::_0x2387D6E9C6B478AA(Global_35))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar3, false, 0, false, false);
					}
				}
			}
		}
	}
}

void func_2705(var uParam0, float fParam1)
{
	if (PHYSICS::DOES_ROPE_EXIST(*uParam0))
	{
		PHYSICS::_0x1FC92BDBA1106BD2(*uParam0, fParam1);
	}
}

void func_2706(var uParam0)
{
	if (PHYSICS::DOES_ROPE_EXIST(*uParam0))
	{
		uParam0->f_9 = 0;
		PHYSICS::_0x10DAA76CB8A201A1(*uParam0);
	}
}

void func_2707(var uParam0)
{
	if (PHYSICS::DOES_ROPE_EXIST(*uParam0))
	{
		uParam0->f_9 = 1;
		PHYSICS::_0x00F611A794A3C36E(*uParam0);
	}
}

void func_2708(int* iParam0, float fParam1, float fParam2, int iParam3)
{
	if (__LIB_0__::func_272(Global_35, 0) && ENTITY::DOES_ENTITY_EXIST(iLocal_358))
	{
		*iParam0 = PHYSICS::_ADD_ROPE_2(PED::GET_PED_BONE_COORDS(Global_35, 22798, vLocal_379), vLocal_379, fParam2, iLocal_418, false, iParam3, 0.0075f);
		iParam0->f_1 = Global_35;
		iParam0->f_2 = iLocal_358;
		PHYSICS::_0x462FF2A432733A44(*iParam0, iParam0->f_1, iParam0->f_2, vLocal_379, vLocal_388, sLocal_56, 0);
		PHYSICS::_0xC64E7A62632AD2FE(*iParam0, iParam0->f_2, vLocal_391, 0, 1, 0);
		func_1817(iParam0);
		func_1818(iParam0, fParam1);
		func_1819(iParam0, 0.66f, fParam1);
	}
}

float func_2709(int* iParam0)
{
	float fVar0;
	if (PHYSICS::DOES_ROPE_EXIST(*iParam0))
	{
		fVar0 = __LIB_0__::func_251(PHYSICS::_0x3D69537039F8D824(*iParam0), 0.5f, 35f);
		return fVar0;
	}
	return 0f;
}

int func_2719(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
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
				iVar0 = func_2875(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, fParam12, bParam7, bParam15, bParam16, iParam17);
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

void func_2721(var uParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	vector3 vVar0;
	vVar0 = { vParam1 };
	if (bParam6)
	{
		MISC::GET_GROUND_Z_FOR_3D_COORD(vParam1, &(vVar0.f_2), false);
		vVar0 = { vVar0 + Vector(0.1f, 0f, 0f) };
	}
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, vVar0, fParam4, bParam5, 0, 0);
}

int func_2722(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_272((*iParam0)[iVar0 /*26*/], 0))
		{
			if (PED::_0x5102307CE88798EB((*iParam0)[iVar0 /*26*/]))
			{
				if (PED::IS_TRACKED_PED_VISIBLE((*iParam0)[iVar0 /*26*/]))
				{
					return 1;
				}
			}
			else if (__LIB_4__::func_117((*iParam0)[iVar0 /*26*/], 1114636288 /* Float: 60f */, 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_2723(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_272((*iParam0)[iVar0 /*26*/], 0))
		{
			if (PED::_0x285D36C5C72B0569((*iParam0)[iVar0 /*26*/]) < 1f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_2724(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam1 - 1))
	{
		if (__LIB_0__::func_272((*iParam1)[iVar0 /*26*/], 0))
		{
			if (PED::_0x9D9473CB82D83A30(iParam0, (*iParam1)[iVar0 /*26*/], 0) == 1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_2726(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	vector3 vVar5;
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 <= (*iParam0 - 1))
	{
		fVar3 = (fVar3 + 1f);
		fVar0 = (fVar0 + (iParam0[iVar4 /*26*/])->f_8);
		fVar1 = (fVar1 + (iParam0[iVar4 /*26*/])->f_8.f_1);
		fVar2 = (fVar2 + (iParam0[iVar4 /*26*/])->f_8.f_2);
		iVar4++;
	}
	vVar5 = { (fVar0 / fVar3), (fVar1 / fVar3), (fVar2 / fVar3) };
	return vVar5;
}

void func_2727()
{
	switch (iLocal_3159)
	{
		case 0:
			func_1323(&Local_1369, func_369(6, 8));
			break;
		case 1:
			func_1323(&Local_1500, func_369(6, 11));
			break;
	}
}

int func_2728()
{
	if (!func_1877(&(Local_1631[0 /*26*/]), func_2880(14, func_1220(Global_35, cLocal_39, 43), 10, 15), func_204(13, 10), Local_419, joaat("WEAPON_REPEATER_CARBINE"), 0, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return 0;
	}
	if (!func_1877(&(Local_1631[1 /*26*/]), func_2880(14, func_1220(Global_35, cLocal_39, 43), 11, 16), func_204(13, 11), Local_419, joaat("WEAPON_REPEATER_CARBINE"), 0, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return 0;
	}
	if (!func_1877(&(Local_1631[2 /*26*/]), func_2880(14, func_1220(Global_35, cLocal_39, 43), 12, 17), func_204(13, 12), Local_419, joaat("WEAPON_REPEATER_CARBINE"), 0, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return 0;
	}
	if (!func_1877(&(Local_1631[3 /*26*/]), func_2880(14, func_1220(Global_35, cLocal_39, 43), 13, 18), func_204(13, 13), Local_419, joaat("WEAPON_REPEATER_CARBINE"), 0, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return 0;
	}
	if (!func_1877(&(Local_1631[4 /*26*/]), func_2880(14, func_1220(Global_35, cLocal_39, 43), 14, 19), func_204(13, 14), Local_419, joaat("WEAPON_REPEATER_CARBINE"), 0, 1, 0, 0, 0, 0, 1065353216 /* Float: 1f */))
	{
		return 0;
	}
	return 1;
}

int func_2729()
{
	if (!func_1877(&(Local_1631[0 /*26*/]), func_2880(14, func_1220(Global_35, cLocal_39, 43), 10, 15), func_204(13, 10), Local_419, func_2881(), 0, 1, 0, 0, 0, 120, 1065353216 /* Float: 1f */))
	{
		return 0;
	}
	if (!func_1877(&(Local_1631[1 /*26*/]), func_2880(14, func_1220(Global_35, cLocal_39, 43), 11, 16), func_204(13, 11), Local_419, func_2881(), 0, 1, 0, 0, 0, 120, 1065353216 /* Float: 1f */))
	{
		return 0;
	}
	if (!func_1877(&(Local_1631[2 /*26*/]), func_2880(14, func_1220(Global_35, cLocal_39, 43), 12, 17), func_204(13, 15), Local_419, func_2881(), 0, 1, 0, 0, 0, 120, 1065353216 /* Float: 1f */))
	{
		return 0;
	}
	if (!func_1877(&(Local_1631[3 /*26*/]), func_2880(14, func_1220(Global_35, cLocal_39, 43), 13, 18), func_204(13, 15), Local_419, func_2881(), 0, 1, 0, 0, 0, 120, 1065353216 /* Float: 1f */))
	{
		return 0;
	}
	if (!func_1877(&(Local_1631[4 /*26*/]), func_2880(14, func_1220(Global_35, cLocal_39, 43), 14, 19), func_204(13, 16), Local_419, func_2881(), 0, 1, 0, 0, 0, 120, 1065353216 /* Float: 1f */))
	{
		return 0;
	}
	return 1;
}

void func_2730(var uParam0)
{
	if (!__LIB_0__::func_491(*uParam0, -2117564886))
	{
		PED::_0x1854217C640B39EC(*uParam0, Global_35, vLocal_379, 20f, 0, 0);
		TASK::TASK_COMBAT_HATED_TARGETS(*uParam0, -1f);
	}
}

int func_2875(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
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
				if (!__LIB_3__::func_119(iParam0, vVar0, fParam6, iParam10))
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
				func_870(Global_1360165[iParam0 /*1157*/].f_124, vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

struct<4> func_2880(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return func_204(iParam0, iParam2);
	}
	return func_204(iParam0, iParam3);
}

int func_2881()
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	switch (iVar0)
	{
		case 0:
			return joaat("WEAPON_REVOLVER_CATTLEMAN");
		case 1:
			return joaat("WEAPON_REVOLVER_DOUBLEACTION");
		case 2:
			return joaat("WEAPON_REPEATER_CARBINE");
		case 3:
			return joaat("WEAPON_REPEATER_WINCHESTER");
		case 4:
			return joaat("WEAPON_RIFLE_SPRINGFIELD");
		default:
			break;
	}
	return joaat("WEAPON_REPEATER_CARBINE");
}

