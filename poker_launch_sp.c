#region Local Var
	int iLocal_0 = 0;
	struct<389> Local_1 = { 0, 0, 0, 0, 0, 6, 0, -1, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0 } ;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 11;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	struct<2155> Local_417 = { 0, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 92, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 92, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 92, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 92, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 92, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 92, -1, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 7, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 1082130432, 0, 0 } ;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = -1;
	var uScriptParam_2 = -1;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = -1;
	var uScriptParam_8 = -1;
	var uScriptParam_9 = 0;
#endregion
void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(546))
	{
		__LIB_1__::func_229(Local_417.f_2);
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 32)
		{
			func_2(0);
		}
		else
		{
			func_3(&Local_417, 0, 0);
			func_2(1);
		}
	}
	func_4(&Local_417, &uScriptParam_0);
	while (Local_417.f_2154 == 0)
	{
		if (func_5(&Local_417))
		{
			func_2(0);
		}
		BUILTIN::WAIT(0);
	}
	func_2(0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2(bool bParam0)
{
	func_8(&Local_417, bParam0);
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_3(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (bParam2)
		{
			func_9(uParam0, &(uParam0->f_106[iVar0 /*29*/]), 0);
		}
		else
		{
			func_10(uParam0, &(uParam0->f_106[iVar0 /*29*/]), 0, 1, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1938)
	{
		__LIB_12__::func_247(&(uParam0->f_1938[iVar0 /*29*/]));
		iVar0++;
	}
	if (bParam1)
	{
		func_12(uParam0);
	}
	else
	{
		func_13(uParam0, 0);
	}
}

void func_4(var uParam0, var uParam1)
{
	int iVar0;
	char cVar1[64];
	*uParam0 = { *uParam1 };
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_1__::func_229(uParam0->f_2);
	}
	StringCopy(&cVar1, __LIB_4__::func_882(uParam1->f_1), 64);
	StringConCat(&cVar1, "_BlkVol", 64);
	uParam0->f_20 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(uParam1->f_3, 0f, 0f, 0f, 1.5f, 1.5f, 1.5f, &cVar1);
	StringConCat(&cVar1, "_AmbBlockVol", 64);
	uParam0->f_19 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(uParam1->f_3, 0f, 0f, 0f, 2.5f, 2.5f, 2.5f, &cVar1);
	__LIB_2__::func_70(uParam1->f_3, 1.5f, 0);
	__LIB_1__::func_206(uParam1->f_3, 2f, 0);
	uParam0->f_22 = PED::_0x4C39C95AE5DB1329(uParam0->f_20, 0, 15);
	POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_20, 10208, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(uParam0->f_19, 266208, 0, 0, -1, -1, 12);
	if (__LIB_7__::func_689(uParam0->f_2))
	{
		uParam0->f_21 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLSPHERE"), uParam1->f_3, 0f, 0f, 0f, 4f, 4f, 4f);
		VOLUME::_0xBE551C2CC421185D(uParam0->f_21, 1);
		VOLUME::_0x5B23DFF8E0948BB2(uParam0->f_21, 0);
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_95[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		__LIB_7__::func_690(&(uParam0->f_1938[iVar0 /*29*/]), iVar0);
		iVar0++;
	}
	func_19(uParam0);
	uParam0->f_104 = func_20(uParam0);
	PED::_0xED9582B3DA8F02B4(uParam0->f_104);
	__LIB_7__::func_718(uParam0, 0);
}

bool func_5(var uParam0)
{
	int iVar0;
	bool bVar1;
	uParam0->f_15++;
	uParam0->f_2155 = __LIB_1__::func_44(uParam0->f_8);
	if (uParam0->f_1 == 2)
	{
		bVar1 = (uParam0->f_2155 || __LIB_7__::func_699(uParam0->f_1));
	}
	else
	{
		bVar1 = uParam0->f_2155;
	}
	uParam0->f_90 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_3, false);
	uParam0->f_91 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_3, true);
	uParam0->f_2156 = 0;
	uParam0->f_2145 = 0;
	uParam0->f_2146 = (uParam0->f_16 && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == uParam0->f_18);
	uParam0->f_2147 = (func_24(uParam0) || uParam0->f_2146);
	uParam0->f_2144 = CAM::IS_SPHERE_VISIBLE(uParam0->f_3, 2f);
	if (__LIB_7__::func_689(uParam0->f_2))
	{
		uParam0->f_2145 = uParam0->f_91 < 8f;
	}
	else if (uParam0->f_2146)
	{
		uParam0->f_2145 = uParam0->f_91 < 5f;
	}
	if (__LIB_7__::func_689(uParam0->f_2))
	{
		uParam0->f_2145 = uParam0->f_90 < 8f;
	}
	else if (uParam0->f_2147)
	{
		uParam0->f_2145 = uParam0->f_90 < 5f;
	}
	uParam0->f_103 = 0;
	if (uParam0->f_10 == 13 && __LIB_0__::func_264(&(uParam0->f_12)) > 2f)
	{
		func_26(uParam0);
		return func_27(uParam0);
	}
	func_28(uParam0);
	if (uParam0->f_10 >= 3)
	{
		func_29(uParam0);
	}
	uParam0->f_103 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (uParam0->f_106[iVar0 /*29*/].f_1 != 0)
		{
			func_30(uParam0, &(uParam0->f_106[iVar0 /*29*/]));
		}
		iVar0++;
	}
	func_26(uParam0);
	if (uParam0->f_10 == 7 || uParam0->f_10 == 8)
	{
		if (__LIB_12__::func_248(uParam0, 0))
		{
			__LIB_8__::func_733(uParam0->f_1, uParam0->f_3, 1073741824 /* Float: 2f */, 0);
			__LIB_1__::func_229(uParam0->f_2);
			__LIB_7__::func_718(uParam0, 9);
		}
	}
	if (__LIB_0__::func_2() == -1)
	{
		if (!func_33(uParam0) || __LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			__LIB_1__::func_229(uParam0->f_2);
		}
		else
		{
			__LIB_7__::func_700(uParam0->f_2);
		}
	}
	switch (uParam0->f_10)
	{
		case 0:
			if (__LIB_18__::func_55(uParam0) == 1)
			{
				__LIB_7__::func_718(uParam0, 1);
			}
			break;
		case 1:
			if (!__LIB_7__::func_712(uParam0->f_3, 2f))
			{
				__LIB_7__::func_718(uParam0, 2);
			}
			break;
		case 2:
			if (func_38(uParam0) == 1)
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					func_39(uParam0, iVar0);
					iVar0++;
				}
				__LIB_7__::func_718(uParam0, 3);
			}
			break;
		case 3:
			if (func_40(uParam0) == 1)
			{
				uParam0->f_17 = GRAPHICS::CREATE_TRACKED_POINT();
				if (GRAPHICS::_IS_TRACKED_POINT_VALID(uParam0->f_17))
				{
					GRAPHICS::SET_TRACKED_POINT_INFO(uParam0->f_17, uParam0->f_3, 1.5f);
				}
				uParam0->f_2153 = 0f;
				__LIB_7__::func_718(uParam0, 4);
			}
			break;
		case 4:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				PED::_0x9851DE7AEC10B4E1(uParam0->f_3, 2f, 1, 0);
				__LIB_7__::func_718(uParam0, 5);
			}
			else if (uParam0->f_103 > 0)
			{
				if (GRAPHICS::_IS_TRACKED_POINT_VALID(uParam0->f_17))
				{
					GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_17);
				}
				uParam0->f_17 = 0;
				__LIB_7__::func_718(uParam0, 6);
			}
			else if (uParam0->f_2 == 9 && uParam0->f_90 > 70f)
			{
				__LIB_7__::func_718(uParam0, 5);
			}
			else if (uParam0->f_2 == 30 && uParam0->f_90 > 18f)
			{
				__LIB_7__::func_718(uParam0, 5);
			}
			else if (uParam0->f_90 > uParam0->f_2152)
			{
				if (GRAPHICS::_IS_TRACKED_POINT_VALID(uParam0->f_17))
				{
					if (GRAPHICS::IS_TRACKED_POINT_VISIBLE(uParam0->f_17))
					{
						uParam0->f_2153 = 0f;
					}
				}
				else if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(ENTITY::GET_ENTITY_MODEL(Global_35), uParam0->f_3, true))
				{
					uParam0->f_2153 = 0f;
				}
				uParam0->f_2153 = (uParam0->f_2153 + MISC::GET_FRAME_TIME());
				if (uParam0->f_2153 > 1f)
				{
					__LIB_7__::func_718(uParam0, 5);
				}
				else if (uParam0->f_16 && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != uParam0->f_18)
				{
					__LIB_7__::func_718(uParam0, 5);
				}
			}
			break;
		case 5:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				func_41(uParam0, iVar0, 0, iVar0);
				iVar0++;
			}
			if (GRAPHICS::_IS_TRACKED_POINT_VALID(uParam0->f_17))
			{
				GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_17);
			}
			uParam0->f_17 = 0;
			__LIB_7__::func_701(uParam0->f_2);
			__LIB_1__::func_212(uParam0->f_1, 16);
			__LIB_1__::func_211(uParam0->f_1, 4194304);
			__LIB_7__::func_718(uParam0, 6);
			break;
		case 6:
			__LIB_7__::func_702(uParam0->f_2);
			if (uParam0->f_90 < 7f)
			{
				func_46(uParam0);
				__LIB_7__::func_718(uParam0, 7);
			}
			else if (uParam0->f_90 < 12f && PED::IS_PED_ON_FOOT(Global_35))
			{
				func_46(uParam0);
				__LIB_7__::func_718(uParam0, 7);
			}
			break;
		case 7:
			if (func_47(uParam0))
			{
				__LIB_7__::func_703(uParam0->f_2);
				__LIB_7__::func_718(uParam0, 8);
			}
			break;
		case 8:
			func_49(uParam0);
			if (bVar1 == 0)
			{
				if (uParam0->f_93 == 0)
				{
					__LIB_7__::func_718(uParam0, 11);
				}
			}
			break;
		case 10:
			PED::SET_PED_RESET_FLAG(Global_35, 184, true);
			if (!bVar1 || __LIB_4__::func_870() == 7)
			{
				if (uParam0->f_1 == 2)
				{
					if (func_51(uParam0))
					{
						__LIB_7__::func_704();
						__LIB_7__::func_718(uParam0, 8);
					}
				}
				else
				{
					func_53(uParam0);
					if (func_51(uParam0))
					{
						__LIB_7__::func_704();
						__LIB_7__::func_718(uParam0, 8);
					}
				}
			}
			break;
		case 11:
			__LIB_7__::func_718(uParam0, 12);
			break;
		case 12:
			func_13(uParam0, 1);
			__LIB_7__::func_718(uParam0, 13);
			break;
	}
	__LIB_0__::func_11(uParam0);
	return func_27(uParam0);
}

void func_8(var uParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	__LIB_0__::func_11(uParam0);
	__LIB_1__::func_229(uParam0->f_2);
	if (GRAPHICS::_IS_TRACKED_POINT_VALID(uParam0->f_17))
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_17);
	}
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_3)))
	{
		INTERIOR::UNPIN_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_3));
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_20))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_22, false);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_20);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_19))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_19);
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			func_56(uParam0, uParam0->f_106[iVar0 /*29*/].f_11, 0);
			func_9(uParam0, &(uParam0->f_106[iVar0 /*29*/]), 1);
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			func_57(uParam0, &(uParam0->f_106[iVar0 /*29*/]));
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		__LIB_12__::func_247(&(uParam0->f_1938[iVar0 /*29*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (uParam0->f_23[iVar0 /*11*/] == 1)
		{
			if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_23[iVar0 /*11*/].f_10))
			{
				TASK::_DELETE_SCENARIO_POINT(uParam0->f_23[iVar0 /*11*/].f_10);
			}
		}
		uParam0->f_23[iVar0 /*11*/] = 0;
		uParam0->f_23[iVar0 /*11*/].f_10 = 0;
		iVar0++;
	}
	if (!__LIB_1__::func_44(uParam0->f_8))
	{
		if (uParam0->f_2150)
		{
			sVar1 = __LIB_7__::func_691(uParam0);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
			{
				AUDIO::_0x531A78D6BF27014B(sVar1);
				uParam0->f_2150 = 0;
			}
		}
	}
	func_12(uParam0);
	PED::_0x7D4E70A67A651C71(uParam0->f_104);
	__LIB_0__::func_172(uParam0->f_20);
	__LIB_0__::func_172(uParam0->f_19);
	__LIB_0__::func_172(uParam0->f_21);
}

void func_9(var uParam0, var uParam1, bool bParam2)
{
	if (*uParam1 == 0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_11))
	{
		func_60(uParam0, uParam1, 1);
		if (__LIB_7__::func_707(uParam0->f_2) == uParam1->f_11)
		{
			__LIB_7__::func_708(uParam0->f_2, 0);
		}
		ANIMSCENE::_0xBC781D24AA11F179(uParam1->f_11);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_11, false);
		PED::SET_PED_CONFIG_FLAG(uParam1->f_11, 26, false);
		PED::_0x949B2F9ED2917F5D(uParam1->f_11, 0);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(uParam1->f_11, 319488);
		if (bParam2)
		{
			__LIB_2__::func_788(&(uParam1->f_11), 1, 0, 1);
		}
	}
	if (uParam1->f_12 != -1)
	{
		uParam0->f_95[uParam1->f_12] = -1;
		MISC::CLEAR_BIT(&(uParam0->f_93), uParam1->f_12);
	}
	uParam0->f_92 = (uParam0->f_92 - 1);
	uParam1->f_1 = 0;
	uParam1->f_20 = 0;
	uParam1->f_14 = 0;
	uParam1->f_13 = -1;
	uParam1->f_11 = 0;
	*uParam1 = 0;
}

void func_10(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (*uParam1 == 0)
	{
		return;
	}
	if (iParam4 == 0)
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_11))
	{
		if (__LIB_7__::func_707(uParam0->f_2) == uParam1->f_11)
		{
			__LIB_7__::func_708(uParam0->f_2, 0);
		}
		PED::SET_PED_CONFIG_FLAG(uParam1->f_11, 26, false);
		PED::_0x949B2F9ED2917F5D(uParam1->f_11, 0);
		ANIMSCENE::_0xBC781D24AA11F179(uParam1->f_11);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_11, false);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(uParam1->f_11, 319488);
		if (PED::IS_PED_A_PLAYER(uParam1->f_11))
		{
			PED::SET_PED_LEG_IK_MODE(uParam1->f_11, 2);
		}
		else
		{
			PED::SET_PED_LEG_IK_MODE(uParam1->f_11, 1);
		}
		if (iParam2 == 0)
		{
			if (bParam5)
			{
				__LIB_2__::func_788(&(uParam1->f_11), bParam3, 0, 1);
			}
		}
		else
		{
			uParam0->f_105 = (uParam0->f_105 - 1);
			__LIB_2__::func_426(&(uParam1->f_11));
		}
	}
	if (uParam1->f_12 != -1)
	{
		uParam0->f_95[uParam1->f_12] = -1;
		MISC::CLEAR_BIT(&(uParam0->f_93), uParam1->f_12);
	}
	uParam0->f_92 = (uParam0->f_92 - 1);
	uParam1->f_1 = 0;
	uParam1->f_20 = 0;
	uParam1->f_14 = 0;
	uParam1->f_13 = -1;
	uParam1->f_11 = 0;
	*uParam1 = 0;
}

void func_12(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 69)
	{
		if (uParam0->f_281[iVar0 /*24*/] != 0)
		{
			func_65(uParam0, iVar0);
		}
		iVar0++;
	}
}

void func_13(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 69)
	{
		if (uParam0->f_281[iVar0 /*24*/] != 0)
		{
			func_66(uParam0, iVar0, bParam1);
		}
		iVar0++;
	}
}

void func_19(var uParam0)
{
	func_67(uParam0, joaat("MINIGAME_POKER_PLAYER"), 0);
	switch (__LIB_0__::func_12())
	{
		case 38:
			iLocal_0 = 0;
			break;
		case 8:
			iLocal_0 = 2;
			break;
		case 105:
			iLocal_0 = 3;
			break;
		case 75:
			iLocal_0 = 4;
			break;
		case 5:
			iLocal_0 = 5;
			break;
		case 76:
			iLocal_0 = 7;
			break;
		case 92:
			iLocal_0 = 8;
			break;
		case 115:
			iLocal_0 = 6;
			break;
		default:
			iLocal_0 = 1;
			break;
	}
	if (__LIB_0__::func_12() == 75)
	{
		__LIB_0__::func_803(-1014145132);
	}
	func_70(uParam0);
	if (__LIB_0__::func_12() == 75)
	{
		func_71(uParam0, 0, 0);
	}
	func_72(&Local_1);
}

int func_20(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!MISC::IS_BIT_SET(uParam0->f_94, iVar0) && !MISC::IS_BIT_SET(uParam0->f_93, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_24(var uParam0)
{
	if (uParam0->f_2146)
	{
		return true;
	}
	switch (uParam0->f_2)
	{
		case 2:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 2955.036f, 523.2607f, 41.28577f, 2926.294f, 522.7525f, 56.23881f, 18.5f, false, true, 0);
		case 0:
		case 23:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, -803.2272f, -1319.447f, 42.55078f, -834.1096f, -1319.633f, 50.82779f, 19.75f, false, true, 0);
		case 32:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, -306.259f, 792.0828f, 116.4818f, -312.7949f, 826.4695f, 126.7013f, 19.75f, false, true, 0);
		case 27:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 2644.131f, -1227.63f, 52.23838f, 2622.243f, -1227.719f, 85.54826f, 18f, false, true, 0);
		default:
			break;
	}
	return false;
}

void func_26(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (uParam0->f_1938[iVar0 /*29*/] == 2)
		{
			__LIB_12__::func_249(&(uParam0->f_1938[iVar0 /*29*/]), 0);
			Jump @124; //curOff = 42
		}
		else if (uParam0->f_1938[iVar0 /*29*/] == 5)
		{
			uParam0->f_1938[iVar0 /*29*/].f_2 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_1938[iVar0 /*29*/].f_1);
			Jump @124; //curOff = 87
		}
		else if (uParam0->f_1938[iVar0 /*29*/] == 3)
		{
			func_80(uParam0, uParam0->f_1938[iVar0 /*29*/].f_28, 1);
		}
		iVar0++;
	}
}

int func_27(var uParam0)
{
	int iVar0;
	float fVar1;
	fVar1 = __LIB_4__::func_865(uParam0->f_1);
	if (uParam0->f_9 != 0f)
	{
		fVar1 = uParam0->f_9;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || Global_1935630.f_22)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			__LIB_1__::func_229(uParam0->f_2);
			return 1;
		}
		return 0;
	}
	if (Global_1394141.f_1328)
	{
		__LIB_1__::func_229(uParam0->f_2);
		return 1;
	}
	if (__LIB_1__::func_77(uParam0->f_1, 262144))
	{
		func_12(uParam0);
		func_3(uParam0, 1, 0);
		return 1;
	}
	if (!__LIB_1__::func_224(uParam0->f_1))
	{
		__LIB_1__::func_229(uParam0->f_2);
		return 1;
	}
	if (uParam0->f_7 != -1)
	{
		if (__LIB_0__::func_21(uParam0->f_7, 4194304))
		{
			__LIB_1__::func_229(uParam0->f_2);
			return 1;
		}
		if (__LIB_0__::func_12() != uParam0->f_7)
		{
			__LIB_1__::func_229(uParam0->f_2);
			return 1;
		}
	}
	if (!__LIB_0__::func_702(uParam0->f_8) && !__LIB_1__::func_44(uParam0->f_8))
	{
		__LIB_1__::func_229(uParam0->f_2);
		return 1;
	}
	if ((uParam0->f_1 == 2 && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("POKER_SP")) == 0) || uParam0->f_1 != 2)
	{
		if (uParam0->f_90 > fVar1)
		{
			func_12(uParam0);
			iVar0 = 0;
			while (iVar0 < 6)
			{
				func_9(uParam0, &(uParam0->f_106[iVar0 /*29*/]), 1);
				iVar0++;
			}
			__LIB_1__::func_229(uParam0->f_2);
			return 1;
		}
	}
	if (!uParam0->f_2155)
	{
		if (__LIB_2__::func_776())
		{
			if (!__LIB_1__::func_214(uParam0->f_2))
			{
				if (__LIB_7__::func_719())
				{
					if (uParam0->f_2 == 0 && SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME() == joaat("POKER_LAUNCH_SP"))
					{
						return 0;
					}
					if (uParam0->f_90 < 10f)
					{
						func_3(uParam0, 1, 1);
					}
					return 1;
				}
				else if (__LIB_2__::func_806(269, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_28(var uParam0)
{
	char* sVar0;
	if ((MISC::GET_FRAME_COUNT() % 25) != 0)
	{
		return;
	}
	if (uParam0->f_90 < 15f)
	{
		if (uParam0->f_2150 == 0)
		{
			sVar0 = __LIB_7__::func_691(uParam0);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				return;
			}
			AUDIO::_0xD9130842D7226045(sVar0, 1);
			uParam0->f_2150 = 1;
		}
		return;
	}
	if (uParam0->f_90 > 25f)
	{
		if (uParam0->f_2150)
		{
			sVar0 = __LIB_7__::func_691(uParam0);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				return;
			}
			AUDIO::_0x531A78D6BF27014B(sVar0);
			uParam0->f_2150 = 0;
		}
	}
}

void func_29(var uParam0)
{
	int iVar0;
	float fVar1;
	if (uParam0->f_10 == 13)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 69)
	{
		if (uParam0->f_281[iVar0 /*24*/] == 5 && uParam0->f_281[iVar0 /*24*/].f_22 == 0f)
		{
			Jump @1049; //curOff = 59
		}
		else if (uParam0->f_281[iVar0 /*24*/] == 1)
		{
			if (MISC::GET_FRAME_COUNT() > uParam0->f_281[iVar0 /*24*/].f_2)
			{
				uParam0->f_281[iVar0 /*24*/] = 2;
			}
			Jump @1049; //curOff = 106
		}
		else if (uParam0->f_281[iVar0 /*24*/] == 2)
		{
			STREAMING::REQUEST_MODEL(uParam0->f_281[iVar0 /*24*/].f_1, false);
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_281[iVar0 /*24*/].f_1))
			{
				if (__LIB_0__::func_86(uParam0->f_281[iVar0 /*24*/].f_16))
				{
					uParam0->f_281[iVar0 /*24*/].f_16 = { uParam0->f_3 - Vector(0.1f, 0f, 0f) };
				}
				uParam0->f_281[iVar0 /*24*/].f_23 = 255f;
				uParam0->f_281[iVar0 /*24*/].f_4 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_281[iVar0 /*24*/].f_1, uParam0->f_281[iVar0 /*24*/].f_16, false, true, false, false);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_281[iVar0 /*24*/].f_4, uParam0->f_281[iVar0 /*24*/].f_19, 2, true);
				uParam0->f_281[iVar0 /*24*/] = 5;
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_281[iVar0 /*24*/].f_1);
				if (uParam0->f_281[iVar0 /*24*/].f_13)
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_281[iVar0 /*24*/].f_4, false);
				}
				if (!DECORATOR::DECOR_EXIST_ON(uParam0->f_281[iVar0 /*24*/].f_4, "MinigameObject"))
				{
					DECORATOR::DECOR_SET_BOOL(uParam0->f_281[iVar0 /*24*/].f_4, "MinigameObject", true);
				}
			}
			Jump @1049; //curOff = 392
		}
		else if (uParam0->f_281[iVar0 /*24*/] == 4)
		{
			STREAMING::REQUEST_MODEL(uParam0->f_281[iVar0 /*24*/].f_1, false);
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_281[iVar0 /*24*/].f_1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_281[iVar0 /*24*/].f_4))
				{
					uParam0->f_281[iVar0 /*24*/].f_16 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_281[iVar0 /*24*/].f_4, true, false) };
					uParam0->f_281[iVar0 /*24*/].f_19 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_281[iVar0 /*24*/].f_4, 2) };
					__LIB_1__::func_951(&(uParam0->f_281[iVar0 /*24*/].f_4));
				}
				if (__LIB_0__::func_86(uParam0->f_281[iVar0 /*24*/].f_16))
				{
					uParam0->f_281[iVar0 /*24*/].f_16 = { uParam0->f_3 - Vector(0.1f, 0f, 0f) };
				}
				uParam0->f_281[iVar0 /*24*/].f_4 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_281[iVar0 /*24*/].f_1, uParam0->f_281[iVar0 /*24*/].f_16, false, true, false, false);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_281[iVar0 /*24*/].f_4, uParam0->f_281[iVar0 /*24*/].f_19, 2, true);
				uParam0->f_281[iVar0 /*24*/] = 5;
				uParam0->f_281[iVar0 /*24*/].f_23 = 255f;
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_281[iVar0 /*24*/].f_1);
				if (uParam0->f_281[iVar0 /*24*/].f_13)
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_281[iVar0 /*24*/].f_4, false);
				}
				if (!DECORATOR::DECOR_EXIST_ON(uParam0->f_281[iVar0 /*24*/].f_4, "MinigameObject"))
				{
					DECORATOR::DECOR_SET_BOOL(uParam0->f_281[iVar0 /*24*/].f_4, "MinigameObject", true);
				}
			}
			Jump @1049; //curOff = 770
		}
		else if (uParam0->f_281[iVar0 /*24*/] == 5 && uParam0->f_281[iVar0 /*24*/].f_22 != 0f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_281[iVar0 /*24*/].f_4))
			{
				fVar1 = (MISC::GET_FRAME_TIME() / uParam0->f_281[iVar0 /*24*/].f_22);
				uParam0->f_281[iVar0 /*24*/].f_23 = (uParam0->f_281[iVar0 /*24*/].f_23 + (fVar1 * 255f));
				if (uParam0->f_281[iVar0 /*24*/].f_23 <= 0f)
				{
					func_65(uParam0, iVar0);
				}
				else if (uParam0->f_281[iVar0 /*24*/].f_23 >= 255f)
				{
					uParam0->f_281[iVar0 /*24*/].f_23 = 255f;
					ENTITY::RESET_ENTITY_ALPHA(uParam0->f_281[iVar0 /*24*/].f_4);
					uParam0->f_281[iVar0 /*24*/].f_22 = 0f;
				}
				else if (uParam0->f_281[iVar0 /*24*/].f_22 < 0f)
				{
					ENTITY::SET_ENTITY_ALPHA(uParam0->f_281[iVar0 /*24*/].f_4, BUILTIN::FLOOR(uParam0->f_281[iVar0 /*24*/].f_23), true);
				}
				else
				{
					ENTITY::SET_ENTITY_ALPHA(uParam0->f_281[iVar0 /*24*/].f_4, BUILTIN::CEIL(uParam0->f_281[iVar0 /*24*/].f_23), true);
				}
			}
		}
		iVar0++;
	}
}

void func_30(var uParam0, var uParam1)
{
	var uVar0;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	uVar0 = 6;
	iVar11 = 0;
	if (uParam1->f_1 == 0)
	{
		return;
	}
	if (uParam1->f_1 > 1)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam1->f_11))
		{
			func_10(uParam0, uParam1, 0, 1, 0, 1);
			return;
		}
		uParam1->f_16 = ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uParam1->f_11, -1);
		PED::SET_PED_RESET_FLAG(uParam1->f_11, 49, true);
	}
	switch (uParam1->f_1)
	{
		case 1:
			STREAMING::REQUEST_MODEL(uParam1->f_2, false);
			if ((STREAMING::HAS_MODEL_LOADED(uParam1->f_2) && MISC::GET_FRAME_COUNT() > uParam1->f_17) && !uParam0->f_2156)
			{
				uParam1->f_11 = __LIB_1__::func_545(uParam1->f_2, uParam1->f_7, uParam1->f_10, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				ENTITY::SET_ENTITY_HEADING(uParam1->f_11, uParam1->f_10);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam1->f_2);
				uParam1->f_12 = -1;
				__LIB_0__::func_202(uParam1->f_11, 0);
				iVar8 = -1;
				if ((uParam0->f_1 == 2 || (uParam0->f_1 == 0 && uParam1->f_13 != 4)) || uParam0->f_1 == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_11))
					{
						iVar8 = __LIB_7__::func_705(uParam0->f_1, func_94(uParam0));
						iVar11 = __LIB_7__::func_706(uParam1->f_11, uParam0->f_1, uParam0->f_7, iVar8);
					}
				}
				func_97(uParam0, &uVar0, &iVar7);
				if ((uParam0->f_1 == 1 || uParam0->f_1 == 0) || uParam0->f_1 == 2)
				{
					if (__LIB_12__::func_254(uParam1->f_11, uParam0->f_1, iVar11, &uVar0, iVar7, &iVar9))
					{
						AUDIO::SET_AMBIENT_VOICE_NAME(uParam1->f_11, __LIB_4__::func_887(iVar9));
					}
					else if (__LIB_12__::func_255(uParam1->f_11, uParam0->f_1, &uVar0, iVar7, &iVar9))
					{
						AUDIO::SET_AMBIENT_VOICE_NAME(uParam1->f_11, __LIB_4__::func_887(iVar9));
					}
					else
					{
						iVar9 = 92;
					}
				}
				else if (__LIB_12__::func_255(uParam1->f_11, uParam0->f_1, &uVar0, iVar7, &iVar9))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(uParam1->f_11, __LIB_4__::func_887(iVar9));
				}
				else
				{
					iVar9 = 92;
				}
				func_101(uParam0, uParam1, uParam1->f_11, uParam1->f_13, uParam1->f_15, 1, iVar8, iVar9);
				if (uParam1->f_15 && uParam1->f_12 != -1)
				{
					if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_23[uParam1->f_12 /*11*/].f_10))
					{
						TASK::_TASK_USE_SCENARIO_POINT(uParam1->f_11, uParam0->f_23[uParam1->f_12 /*11*/].f_10, &(uParam0->f_23[uParam1->f_12 /*11*/].f_2), 0, false, true, 0, false, -1f, false);
					}
				}
				uParam0->f_2156 = 1;
			}
			break;
		case 3:
			func_102(uParam0, uParam1);
			break;
		case 4:
			if (func_103(uParam0, uParam1) == 1)
			{
				uParam1->f_14 = 0;
				__LIB_7__::func_713(uParam1, 5);
			}
			break;
		case 5:
			uParam0->f_103++;
			if (!PED::IS_PED_INJURED(uParam1->f_11))
			{
				PED::SET_PED_CAN_LEG_IK(uParam1->f_11, false);
			}
			bVar10 = __LIB_12__::func_250(uParam1);
			if (uParam1->f_14 && !bVar10)
			{
				func_106(uParam0, uParam1, 0);
			}
			else
			{
				func_107(uParam0, uParam1);
			}
			uParam1->f_14 = bVar10;
			break;
		case 6:
			func_108(uParam0, uParam1);
			break;
		case 7:
			if (!PED::IS_PED_USING_ANY_SCENARIO(uParam1->f_11) || TASK::_0x0C3CB2E600C8977D(uParam1->f_11, 0))
			{
				ANIMSCENE::_0xBC781D24AA11F179(uParam1->f_11);
				func_10(uParam0, uParam1, 0, 1, 0, 1);
			}
			break;
	}
}

bool func_33(var uParam0)
{
	int iVar0;
	if (uParam0->f_1 == 0)
	{
		return func_112(uParam0, 4);
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_112(uParam0, iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_38(var uParam0)
{
	func_53(uParam0);
	__LIB_8__::func_733(uParam0->f_1, uParam0->f_3, 3f, 1);
	return 1;
}

void func_39(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	iVar9 = func_117(uParam0->f_1, uParam0->f_3, uParam0->f_6, iParam1, 1051931443 /* Float: 0.35f */);
	__LIB_18__::func_520(uParam0->f_1, uParam0->f_3, uParam0->f_6, iParam1, &vVar0, &fVar6);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar9))
	{
		MISC::SET_BIT(&(uParam0->f_94), iParam1);
		return;
	}
	iVar8 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vVar0, uParam0->f_23[iParam1 /*11*/].f_1, 0.5f, 0, false);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar8))
	{
		uParam0->f_23[iParam1 /*11*/].f_10 = iVar8;
		uParam0->f_23[iParam1 /*11*/] = 0;
		vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar9, vVar0) };
		fVar7 = (ENTITY::GET_ENTITY_HEADING(iVar9) - fVar6);
		TASK::_SET_SCENARIO_POINT_COORDS(iVar8, vVar3, false);
		TASK::_SET_SCENARIO_POINT_HEADING(iVar8, fVar7, false);
		return;
	}
	if (uParam0->f_1 == 2)
	{
		iVar8 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vVar0, joaat("MINIGAME_POKER_CAMP_PLAYER"), 0.5f, 0, false);
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar8))
		{
			uParam0->f_23[iParam1 /*11*/].f_10 = iVar8;
			uParam0->f_23[iParam1 /*11*/] = 0;
			vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar9, vVar0) };
			fVar7 = (ENTITY::GET_ENTITY_HEADING(iVar9) - fVar6);
			TASK::_SET_SCENARIO_POINT_COORDS(iVar8, vVar3, false);
			TASK::_SET_SCENARIO_POINT_HEADING(iVar8, fVar7, false);
			return;
		}
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_23[iParam1 /*11*/].f_10))
	{
		vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar9, vVar0) };
		fVar7 = (ENTITY::GET_ENTITY_HEADING(iVar9) - fVar6);
		uParam0->f_23[iParam1 /*11*/].f_10 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(iVar9, uParam0->f_23[iParam1 /*11*/].f_1, vVar3, fVar7, 0, 0, 0);
		uParam0->f_23[iParam1 /*11*/] = 1;
		if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_23[iParam1 /*11*/].f_10))
		{
		}
	}
}

int func_40(var uParam0)
{
	switch (uParam0->f_11)
	{
		case 0:
			__LIB_0__::func_11(uParam0);
			__LIB_12__::func_257(uParam0);
			break;
		case 1:
			__LIB_0__::func_11(uParam0);
			if (!__LIB_0__::func_0(uParam0))
			{
				return 2;
			}
			__LIB_12__::func_257(uParam0);
			break;
		case 2:
			if (PED::_0x5C16855277819BBF() < uParam0->f_104)
			{
				return 2;
			}
			__LIB_12__::func_257(uParam0);
			break;
		case 3:
			return 1;
	}
	return 0;
}

int func_41(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_10(uParam0, &(uParam0->f_106[iParam1 /*29*/]), 1, 1, 0, 1);
	if (MISC::IS_BIT_SET(uParam0->f_94, iParam1))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		iParam2 = __LIB_4__::func_875(uParam0->f_1, uParam0->f_7, -1);
	}
	if (uParam0->f_1 == 0 && iParam1 == 4)
	{
		iParam2 = __LIB_7__::func_693(uParam0->f_7);
	}
	uParam0->f_106[iParam1 /*29*/].f_2 = iParam2;
	__LIB_18__::func_521(uParam0->f_1, uParam0->f_3, uParam0->f_6, iParam1, 0f, -MISC::GET_RANDOM_FLOAT_IN_RANGE(0.25f, 1.25f), 0f, &(uParam0->f_106[iParam1 /*29*/].f_7), 0);
	uParam0->f_106[iParam1 /*29*/].f_7.f_2 = (uParam0->f_3.f_2 - 0.5f);
	__LIB_12__::func_251(uParam0->f_1, uParam0->f_6, iParam1, &(uParam0->f_106[iParam1 /*29*/].f_10));
	uParam0->f_106[iParam1 /*29*/].f_13 = iParam1;
	uParam0->f_106[iParam1 /*29*/].f_15 = 1;
	uParam0->f_106[iParam1 /*29*/].f_12 = iParam1;
	uParam0->f_95[iParam1] = iParam1;
	uParam0->f_105++;
	MISC::SET_BIT(&(uParam0->f_93), iParam1);
	__LIB_7__::func_713(&(uParam0->f_106[iParam1 /*29*/]), 1);
	if (iParam3 > 0)
	{
		uParam0->f_106[iParam1 /*29*/].f_17 = (MISC::GET_FRAME_COUNT() + iParam3);
	}
	return 1;
}

void func_46(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	if (Local_1.f_378 != -1)
	{
		func_125(uParam0, Local_1.f_378);
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_106)
	{
		if (func_112(uParam0, iVar1))
		{
			iVar0 = func_126(iVar1);
			func_127(uParam0, iVar1, 0, &vVar5, &vVar2, 0, 1);
			func_129(uParam0, iVar0, __LIB_18__::func_522(), vVar5, vVar2, iVar1, 1);
			func_130(uParam0, iVar1, Local_1.f_5[iVar1 /*62*/].f_59, 1);
		}
		iVar1++;
	}
	func_131(uParam0, 30, 0, 1, 1);
	func_131(uParam0, 31, 0, 2, 1);
}

bool func_47(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 69)
	{
		if (uParam0->f_281[iVar0 /*24*/] != 0 && uParam0->f_281[iVar0 /*24*/] != 5)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_49(var uParam0)
{
	int iVar0;
	if (!func_132(uParam0, Local_1.f_378))
	{
		Local_1.f_378 = (Local_1.f_378 + 1 % 6);
	}
	if (Local_1 < 14)
	{
		if (uParam0->f_2155)
		{
			__LIB_7__::func_715(&Local_1, 14);
		}
	}
	if (uParam0->f_2151 == 1)
	{
		__LIB_7__::func_715(&Local_1, 13);
		uParam0->f_2151 = 0;
	}
	if (Local_1 == 14)
	{
		func_134(&Local_1, uParam0);
	}
	if (func_135(uParam0, 5) < 2)
	{
		return;
	}
	if (uParam0->f_2145)
	{
		func_136(uParam0, &Local_1);
	}
	switch (Local_1)
	{
		case 0:
			__LIB_7__::func_715(&Local_1, 1);
			break;
		case 1:
			if (!func_132(uParam0, Local_1.f_378))
			{
				Local_1.f_378 = (Local_1.f_378 + 1 % 6);
				return;
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				Local_1.f_5[iVar0 /*62*/].f_58 = 0;
				if (func_132(uParam0, iVar0))
				{
					func_130(uParam0, iVar0, Local_1.f_5[iVar0 /*62*/].f_59, 1);
				}
				iVar0++;
			}
			Local_1.f_385 = func_137(uParam0, Local_1.f_378);
			if (Local_1.f_385 != -1)
			{
				func_138(&(Local_1.f_5[Local_1.f_385 /*62*/]), 5, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), 0);
			}
			func_125(uParam0, Local_1.f_378);
			__LIB_7__::func_715(&Local_1, 3);
			break;
		case 3:
			if (!func_132(uParam0, Local_1.f_385))
			{
				Local_1.f_385 = func_137(uParam0, Local_1.f_378);
				return;
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_132(uParam0, iVar0) && iVar0 != Local_1.f_385)
				{
					func_138(&(Local_1.f_5[iVar0 /*62*/]), 1, 0, 0);
				}
				iVar0++;
			}
			func_138(&(Local_1.f_5[Local_1.f_385 /*62*/]), 5, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), 0);
			__LIB_7__::func_715(&Local_1, 4);
			break;
		case 4:
			Local_1.f_384 = func_137(uParam0, Local_1.f_385);
			if (!func_132(uParam0, Local_1.f_384))
			{
				Local_1.f_384 = func_137(uParam0, Local_1.f_385);
				return;
			}
			func_138(&(Local_1.f_5[Local_1.f_384 /*62*/]), 5, MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 3f), 0);
			__LIB_7__::func_715(&Local_1, 5);
			break;
		case 5:
			if (!func_139(uParam0, &(Local_1.f_5[Local_1.f_385 /*62*/])))
			{
				return;
			}
			if (!func_139(uParam0, &(Local_1.f_5[Local_1.f_384 /*62*/])))
			{
				return;
			}
			func_138(&(Local_1.f_5[Local_1.f_378 /*62*/]), 2, 0, 0);
			__LIB_7__::func_715(&Local_1, 6);
			break;
		case 6:
			if (func_139(uParam0, &(Local_1.f_5[Local_1.f_378 /*62*/])))
			{
				Local_1.f_387 = func_137(uParam0, Local_1.f_384);
				if (Local_1.f_387 != -1)
				{
					__LIB_7__::func_715(&Local_1, 7);
				}
			}
			break;
		case 7:
			if (func_140(&Local_1, uParam0))
			{
				__LIB_7__::func_715(&Local_1, 8);
			}
			break;
		case 8:
			if (func_141(&Local_1, uParam0))
			{
				__LIB_7__::func_715(&Local_1, 9);
			}
			break;
		case 9:
			if (func_142(&Local_1, uParam0))
			{
				__LIB_7__::func_715(&Local_1, 10);
			}
			break;
		case 10:
			if (func_143(&Local_1, uParam0))
			{
				__LIB_7__::func_715(&Local_1, 11);
			}
			break;
		case 11:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_144(uParam0, &Local_1, iVar0))
				{
					if (!func_139(uParam0, &(Local_1.f_5[iVar0 /*62*/])))
					{
						return;
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_144(uParam0, &Local_1, iVar0))
				{
					func_138(&(Local_1.f_5[iVar0 /*62*/]), 12, 0, 0);
				}
				iVar0++;
			}
			__LIB_7__::func_715(&Local_1, 12);
			break;
		case 12:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_144(uParam0, &Local_1, iVar0))
				{
					if (!func_139(uParam0, &(Local_1.f_5[iVar0 /*62*/])))
					{
						return;
					}
				}
				iVar0++;
			}
			func_138(&(Local_1.f_5[Local_1.f_388 /*62*/]), 17, 0, 0);
			__LIB_7__::func_715(&Local_1, 13);
			break;
		case 13:
			if (func_145(&Local_1, uParam0))
			{
				__LIB_7__::func_715(&Local_1, 1);
			}
			break;
	}
}

bool func_51(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	if (__LIB_0__::func_12() == 75)
	{
		__LIB_3__::func_124(-1983417035, 1);
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar3 = __LIB_4__::func_876(uParam0->f_1, iVar0, &uVar5, &uVar6, &iVar7, &iVar8);
		if (!ENTITY::IS_ENTITY_DEAD(iVar3))
		{
			Local_1.f_5[iVar0 /*62*/].f_59 = uVar5;
			iVar1 = 0;
			while (iVar1 < 4)
			{
				iVar2 = ((0 + iVar0 * 4) + iVar1);
				iVar4 = __LIB_12__::func_238(uParam0->f_1, iVar2);
				if (ENTITY::DOES_ENTITY_EXIST(iVar4))
				{
					func_149(uParam0, iVar2, iVar4);
				}
				iVar1++;
			}
			func_71(uParam0, iVar0, 0);
			Local_1.f_5[iVar0 /*62*/].f_1 = uVar6;
			func_101(uParam0, &(uParam0->f_106[iVar0 /*29*/]), iVar3, iVar0, 1, 1, iVar7, iVar8);
		}
		iVar0++;
	}
	Local_1.f_378 = __LIB_12__::func_295();
	iVar4 = __LIB_12__::func_238(uParam0->f_1, 24);
	if (ENTITY::DOES_ENTITY_EXIST(iVar4))
	{
		func_149(uParam0, 24, iVar4);
	}
	func_125(uParam0, Local_1.f_378);
	__LIB_4__::func_877();
	return true;
}

bool func_53(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	bVar2 = false;
	if (__LIB_4__::func_874() == uParam0->f_1)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (!__LIB_7__::func_694(&(uParam0->f_106[iVar0 /*29*/])))
			{
				iVar1 = __LIB_4__::func_876(uParam0->f_1, iVar0, &uVar3, &uVar4, &iVar5, &iVar6);
				if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !DECORATOR::DECOR_EXIST_ON(iVar1, "DontGrabThisPedForMinigame"))
				{
					if (func_101(uParam0, &(uParam0->f_106[iVar0 /*29*/]), iVar1, iVar0, 1, 0, iVar5, iVar6))
					{
						func_71(uParam0, iVar0, 0);
						bVar2 = true;
					}
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!__LIB_7__::func_694(&(uParam0->f_106[iVar0 /*29*/])))
		{
			if (func_157(uParam0->f_1, uParam0->f_3, uParam0->f_6, iVar0, &iVar1, 1, 0))
			{
				if (!DECORATOR::DECOR_EXIST_ON(iVar1, "DontGrabThisPedForMinigame"))
				{
					if (func_101(uParam0, &(uParam0->f_106[iVar0 /*29*/]), iVar1, iVar0, 1, 0, -1, 92))
					{
						func_71(uParam0, iVar0, 0);
						bVar2 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		if (uParam0->f_1 == 0)
		{
			if (func_132(uParam0, 4))
			{
				__LIB_7__::func_700(uParam0->f_2);
			}
			else
			{
				__LIB_1__::func_229(uParam0->f_2);
			}
		}
		else
		{
			__LIB_7__::func_700(uParam0->f_2);
		}
	}
	return bVar2;
}

void func_56(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_158(uParam0, iVar0))
		{
			if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam1, uParam0->f_1938[iVar0 /*29*/].f_1))
			{
				func_80(uParam0, iVar0, bParam2);
			}
		}
		iVar0++;
	}
}

void func_57(var uParam0, var uParam1)
{
	if (*uParam1 == 1)
	{
		func_10(uParam0, uParam1, 0, 1, 0, 1);
	}
}

void func_60(var uParam0, var uParam1, int iParam2)
{
	if (uParam1->f_20 == -1)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_21)))
	{
		return;
	}
	if (iParam2 == 1 && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1938[uParam1->f_20 /*29*/].f_1))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_1938[uParam1->f_20 /*29*/].f_1, &(uParam1->f_21), uParam1->f_11);
	}
	ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_11, false);
	MISC::CLEAR_BIT(&(uParam0->f_1938[uParam1->f_20 /*29*/].f_3), uParam1->f_13);
	if (uParam0->f_1938[uParam1->f_20 /*29*/].f_3 == 0)
	{
		__LIB_7__::func_695(&(uParam0->f_1938[uParam1->f_20 /*29*/]), 3);
	}
	StringCopy(&(uParam1->f_21), "", 64);
	uParam1->f_20 = -1;
}

void func_65(var uParam0, int iParam1)
{
	uParam0->f_281[iParam1 /*24*/] = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_281[iParam1 /*24*/].f_5)) && uParam0->f_281[iParam1 /*24*/].f_3 != -1)
	{
		func_161(uParam0, iParam1, 0);
	}
	uParam0->f_281[iParam1 /*24*/].f_23 = 0f;
	uParam0->f_281[iParam1 /*24*/].f_22 = 0f;
	StringCopy(&(uParam0->f_281[iParam1 /*24*/].f_5), "", 64);
	uParam0->f_281[iParam1 /*24*/].f_3 = -1;
	uParam0->f_281[iParam1 /*24*/].f_14 = 0;
	__LIB_1__::func_951(&(uParam0->f_281[iParam1 /*24*/].f_4));
	uParam0->f_281[iParam1 /*24*/].f_4 = 0;
}

void func_66(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_281[iParam1 /*24*/] = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_281[iParam1 /*24*/].f_5)) && uParam0->f_281[iParam1 /*24*/].f_3 != -1)
	{
		func_161(uParam0, iParam1, bParam2);
	}
	if (bParam2)
	{
		func_162(uParam0, iParam1);
	}
	StringCopy(&(uParam0->f_281[iParam1 /*24*/].f_5), "", 64);
	uParam0->f_281[iParam1 /*24*/].f_3 = -1;
	uParam0->f_281[iParam1 /*24*/].f_23 = 0f;
	if (uParam0->f_281[iParam1 /*24*/].f_15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_281[iParam1 /*24*/].f_4))
		{
			ANIMSCENE::_0xC1193521E3B9FADD(uParam0->f_281[iParam1 /*24*/].f_4, 0);
		}
	}
	uParam0->f_281[iParam1 /*24*/].f_15 = 0;
	uParam0->f_281[iParam1 /*24*/].f_14 = 0;
	__LIB_4__::func_866(&(uParam0->f_281[iParam1 /*24*/].f_4), 1, 1);
	uParam0->f_281[iParam1 /*24*/].f_4 = 0;
}

void func_67(var uParam0, int iParam1, char* sParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		__LIB_7__::func_709(uParam0, iVar0, iParam1, sParam2);
		iVar0++;
	}
}

void func_70(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = 0;
	iVar1 = 0;
	iVar4 = 6;
	if (uParam0->f_1 == 0)
	{
		iVar4 = (iVar4 - 1);
	}
	if (uParam0->f_1 == 2)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(3, iVar4);
	}
	else
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, iVar4);
	}
	if ((uParam0->f_1 == 2 && uParam0->f_7 == 75) || (uParam0->f_1 == 1 && uParam0->f_7 == 38))
	{
		MISC::SET_BIT(&iVar0, 0);
		iVar1 = (iVar1 - 1);
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
		while (MISC::IS_BIT_SET(iVar0, iVar3))
		{
			iVar3 = (iVar3 + 1 % iVar4);
		}
		MISC::SET_BIT(&iVar0, iVar3);
		iVar2++;
	}
	uParam0->f_94 = 0;
	iVar2 = 0;
	while (iVar2 < iVar4)
	{
		if (!MISC::IS_BIT_SET(iVar0, iVar2))
		{
			MISC::SET_BIT(&(uParam0->f_94), iVar2);
		}
		iVar2++;
	}
}

void func_71(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MISC::SET_BIT(&(uParam0->f_94), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_94), iParam1);
	}
}

void func_72(int iParam0)
{
	int iVar0;
	__LIB_4__::func_884(&(iParam0->f_392));
	__LIB_7__::func_715(iParam0, 0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iParam0->f_5[iVar0 /*62*/].f_5 = iVar0;
		func_138(&(iParam0->f_5[iVar0 /*62*/]), 1, 0, 0);
		__LIB_4__::func_884(&(iParam0->f_5[iVar0 /*62*/].f_6));
		iParam0->f_5[iVar0 /*62*/].f_30.f_24 = -1;
		__LIB_4__::func_884(&(iParam0->f_5[iVar0 /*62*/].f_30));
		iVar0++;
	}
	iParam0->f_380 = 0;
	iParam0->f_381 = 0;
	iParam0->f_382 = 0;
}

void func_80(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (iParam1 < 0 || iParam1 >= 7)
	{
		return;
	}
	if (uParam0->f_1938[iParam1 /*29*/] > 4)
	{
		iVar0 = 0;
		while (iVar0 < 69)
		{
			if (uParam0->f_281[iVar0 /*24*/].f_3 == uParam0->f_1938[iParam1 /*29*/].f_1)
			{
				func_161(uParam0, iVar0, bParam2);
			}
			iVar0++;
		}
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1938[iParam1 /*29*/].f_1);
	}
	__LIB_12__::func_247(&(uParam0->f_1938[iParam1 /*29*/]));
}

int func_94(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar2 = 0;
	while (iVar2 < uParam0->f_106)
	{
		if (uParam0->f_106[iVar2 /*29*/])
		{
			iVar1 = uParam0->f_106[iVar2 /*29*/].f_18;
			if (iVar1 != -1)
			{
				MISC::SET_BIT(&iVar0, iVar1);
			}
		}
		iVar2++;
	}
	return iVar0;
}

void func_97(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	*iParam2 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (uParam0->f_106[iVar0 /*29*/])
		{
			(*uParam1)[*iParam2] = uParam0->f_106[iVar0 /*29*/].f_19;
			*iParam2++;
		}
		iVar0++;
	}
}

bool func_101(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		return false;
	}
	if (iParam5 == 0)
	{
		if (*uParam1 == 1)
		{
			return true;
		}
	}
	*uParam1 = 1;
	uParam1->f_11 = iParam2;
	uParam1->f_13 = iParam3;
	uParam1->f_14 = 0;
	uParam1->f_18 = iParam6;
	uParam1->f_19 = iParam7;
	uParam1->f_20 = 0;
	if (bParam4)
	{
		uParam1->f_12 = iParam3;
		uParam0->f_95[iParam3] = iParam3;
		MISC::SET_BIT(&(uParam0->f_93), iParam3);
	}
	else
	{
		uParam1->f_12 = -1;
	}
	if (!PED::IS_PED_A_PLAYER(iParam2))
	{
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam2, true))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam2, true, true);
		}
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam2, joaat("REL_MINIGAME_PLAYER"));
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, true);
	PED::SET_PED_CONFIG_FLAG(iParam2, 453, true);
	PED::SET_PED_CONFIG_FLAG(iParam2, 130, false);
	PED::SET_PED_CONFIG_FLAG(iParam2, 168, true);
	PED::SET_PED_CONFIG_FLAG(iParam2, 458, true);
	PED::SET_PED_CONFIG_FLAG(iParam2, 26, true);
	PED::SET_PED_CONFIG_FLAG(iParam2, 146, false);
	PED::_0xB8DE69D9473B7593(iParam2, 0);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam2, 319488);
	if (uParam0->f_1 == 2)
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam2, "Poker_NPC_Group", 0f);
	}
	if (bParam4)
	{
		__LIB_4__::func_881(iParam2);
		__LIB_7__::func_713(uParam1, 4);
	}
	else
	{
		__LIB_7__::func_713(uParam1, 3);
	}
	uParam0->f_92++;
	return true;
}

int func_102(var uParam0, var uParam1)
{
	int iVar0;
	switch (uParam1->f_3)
	{
		case 0:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam1->f_11, uParam0->f_3, 1f, 20000, 2f, 0, 40000f);
			__LIB_12__::func_258(uParam1);
			break;
		case 1:
			if (__LIB_0__::func_163(uParam1->f_11, 713668775))
			{
				__LIB_12__::func_258(uParam1);
			}
			break;
		case 2:
			if (!__LIB_0__::func_163(uParam1->f_11, 713668775))
			{
				func_57(uParam0, uParam1);
				return 2;
			}
			if (uParam0->f_2155)
			{
				func_57(uParam0, uParam1);
				return 2;
			}
			if (__LIB_0__::func_94(uParam1->f_11, uParam0->f_3, 1) > 3f)
			{
				return 0;
			}
			if (uParam0->f_1 == 0 && __LIB_4__::func_890(uParam1->f_11))
			{
				iVar0 = 4;
				if (!MISC::IS_BIT_SET(uParam0->f_93, iVar0))
				{
					MISC::SET_BIT(&(uParam0->f_93), iVar0);
					uParam0->f_95[iVar0] = uParam1->f_13;
					uParam1->f_12 = iVar0;
					if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_23[uParam1->f_12 /*11*/].f_10))
					{
						func_57(uParam0, uParam1);
						return 2;
					}
					TASK::_TASK_USE_SCENARIO_POINT(uParam1->f_11, uParam0->f_23[uParam1->f_12 /*11*/].f_10, 0, 0, true, false, 0, false, -1f, false);
					__LIB_12__::func_258(uParam1);
				}
				else
				{
					func_57(uParam0, uParam1);
					return 2;
				}
			}
			if (func_188(uParam0, ENTITY::GET_ENTITY_COORDS(uParam1->f_11, true, false), &iVar0))
			{
				MISC::SET_BIT(&(uParam0->f_93), iVar0);
				uParam0->f_95[iVar0] = uParam1->f_13;
				uParam1->f_12 = iVar0;
				if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_23[uParam1->f_12 /*11*/].f_10))
				{
					func_57(uParam0, uParam1);
					return 2;
				}
				TASK::_TASK_USE_SCENARIO_POINT(uParam1->f_11, uParam0->f_23[uParam1->f_12 /*11*/].f_10, 0, 0, true, false, 0, false, -1f, false);
				__LIB_12__::func_258(uParam1);
			}
			else
			{
				func_57(uParam0, uParam1);
				return 2;
			}
			break;
		case 3:
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam1->f_11, 0))
			{
				__LIB_12__::func_258(uParam1);
			}
			break;
		case 4:
			if (__LIB_0__::func_2() == -1 && uParam0->f_1 == 0)
			{
				if (func_112(uParam0, 4))
				{
					__LIB_7__::func_700(uParam0->f_2);
				}
				else
				{
					__LIB_1__::func_229(uParam0->f_2);
				}
			}
			__LIB_4__::func_881(uParam1->f_11);
			__LIB_7__::func_696(uParam1);
			__LIB_7__::func_713(uParam1, 4);
			return 1;
	}
	return 0;
}

int func_103(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	char* sVar7;
	int iVar8;
	int iVar9;
	iVar6 = (0 + uParam1->f_12);
	switch (uParam1->f_3)
	{
		case 0:
			if (Local_1.f_378 == -1)
			{
				Local_1.f_378 = uParam1->f_12;
			}
			if (!PED::IS_PED_MALE(uParam1->f_11))
			{
				Local_1.f_5[uParam1->f_12 /*62*/].f_1 = 3;
			}
			else if (Local_1.f_5[uParam1->f_12 /*62*/].f_1 == -1)
			{
				if (__LIB_1__::func_985())
				{
					Local_1.f_5[uParam1->f_12 /*62*/].f_1 = 0;
				}
				else
				{
					Local_1.f_5[uParam1->f_12 /*62*/].f_1 = 2;
				}
			}
			sVar7 = func_191(Local_1.f_5[uParam1->f_12 /*62*/].f_1);
			if (func_192(uParam0, iVar6, sVar7, "PBL_NoCardsLoop", 2))
			{
				if (Local_1.f_5[uParam1->f_12 /*62*/].f_59 == 0)
				{
					iVar8 = __LIB_1__::func_47(uParam0->f_2);
					if (iVar8 != -1)
					{
						iVar9 = __LIB_12__::func_294(2, Global_1392915[iVar8 /*12*/].f_10);
					}
					else
					{
						iVar9 = 100;
					}
					iVar9 = (iVar9 + MISC::GET_RANDOM_INT_IN_RANGE((-iVar9 / 5), (iVar9 / 5)));
					Local_1.f_5[uParam1->f_12 /*62*/].f_59 = iVar9;
				}
				ANIMSCENE::_0x99B2A2E3655DEAF1(uParam1->f_11, "PokerSeatedNoCards");
				__LIB_12__::func_258(uParam1);
			}
			break;
		case 1:
			if (func_194(uParam0, iVar6))
			{
				func_195(uParam0, uParam1->f_12, &vVar3);
				func_196(uParam0, uParam1->f_12, &vVar0);
				func_197(uParam0, iVar6, uParam1, "Seat_01");
				if (func_198(uParam0, iVar6, vVar3, vVar0))
				{
					__LIB_12__::func_258(uParam1);
				}
			}
			break;
		case 2:
			if (func_47(uParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_106(var uParam0, var uParam1, bool bParam2)
{
	if (!func_199(uParam0, uParam1->f_11))
	{
		return 0;
	}
	if (uParam1->f_1 == 7)
	{
		return 0;
	}
	if (bParam2)
	{
		if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(uParam1->f_11))
		{
		}
	}
	if (ENTITY::_IS_ENTITY_FROZEN(uParam1->f_11))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_11, false);
	}
	if (!uParam0->f_2155)
	{
		DECORATOR::DECOR_SET_BOOL(uParam1->f_11, "DontGrabThisPedForMinigame", true);
	}
	ANIMSCENE::_0xBC781D24AA11F179(uParam1->f_11);
	func_200(uParam0, uParam1->f_12, 1);
	func_201(uParam0, uParam1->f_20, 1);
	if (PED::IS_PED_RAGDOLL(uParam1->f_11))
	{
		func_10(uParam0, uParam1, 0, 1, 0, 1);
	}
	else
	{
		__LIB_7__::func_713(uParam1, 7);
	}
	return 1;
}

int func_107(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = uParam1->f_12;
	if (uParam0->f_2 == 27)
	{
		if (uParam0->f_2146 == 0 && Local_1.f_5[iVar0 /*62*/].f_3 == 0)
		{
			return 1;
		}
	}
	else if (uParam0->f_2 == 30)
	{
		if (uParam0->f_90 > 10f && Local_1.f_5[iVar0 /*62*/].f_3 == 0)
		{
			return 1;
		}
	}
	else if (uParam0->f_2147 == 0 && uParam0->f_2146 == 0)
	{
		if ((uParam0->f_90 > 10f || uParam0->f_2144 == 0) && Local_1.f_5[iVar0 /*62*/].f_3 == 0)
		{
			return 1;
		}
	}
	Local_1.f_5[iVar0 /*62*/].f_2 = (Local_1.f_5[iVar0 /*62*/].f_2 + MISC::GET_FRAME_TIME());
	if (!func_112(uParam0, iVar0))
	{
		Local_1.f_5[iVar0 /*62*/] = 0;
	}
	switch (Local_1.f_5[iVar0 /*62*/])
	{
		case 1:
			func_202(uParam0, uParam1, &Local_1);
			break;
		case 2:
			func_203(uParam0, uParam1, &Local_1);
			break;
		case 5:
			func_204(uParam0, uParam1, &Local_1);
			break;
		case 6:
			func_205(uParam0, uParam1, &Local_1);
			break;
		case 3:
			func_206(uParam0, uParam1, &Local_1);
			break;
		case 4:
			func_207(uParam0, uParam1, &Local_1);
			break;
		case 7:
			if (iVar0 != Local_1.f_378)
			{
				func_208(uParam0, uParam1, &Local_1);
			}
			else
			{
				func_209(uParam0, uParam1, &Local_1);
			}
			break;
		case 8:
			func_210(uParam0, uParam1, &Local_1);
			break;
		case 9:
			func_211(uParam0, uParam1, &Local_1);
			break;
		case 10:
			func_212(uParam0, uParam1, &Local_1);
			break;
		case 12:
			func_213(uParam0, uParam1, &Local_1);
			break;
		case 18:
			func_214(uParam0, uParam1, &Local_1);
			break;
		case 19:
			func_215(uParam0, uParam1, &Local_1);
			break;
		case 11:
			func_216(uParam0, uParam1, &Local_1);
			break;
		case 14:
			func_217(uParam0, uParam1, &Local_1);
			break;
		case 13:
			func_218(uParam0, uParam1, &Local_1);
			break;
		case 16:
			func_219(uParam0, uParam1, &Local_1);
			break;
		case 15:
			func_220(uParam0, uParam1, &Local_1);
			break;
		case 17:
			func_221(uParam0, uParam1, &Local_1);
			break;
		case 20:
			func_222(uParam0, uParam1, &Local_1);
			break;
	}
	return 1;
}

int func_108(var uParam0, var uParam1)
{
	switch (uParam1->f_3)
	{
		case 0:
			TASK::CLEAR_PED_TASKS(uParam1->f_11, true, false);
			func_200(uParam0, uParam1->f_12, 0);
			__LIB_4__::func_880(uParam1->f_11);
			__LIB_12__::func_258(uParam1);
			break;
		case 1:
			func_57(uParam0, uParam1);
			__LIB_12__::func_258(uParam1);
			break;
		case 2:
			return 1;
	}
	return 0;
}

bool func_112(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_106)
	{
		return false;
	}
	if (uParam0->f_95[iParam1] == -1)
	{
		return false;
	}
	return (uParam0->f_106[uParam0->f_95[iParam1] /*29*/] && uParam0->f_106[uParam0->f_95[iParam1] /*29*/].f_1 == 5);
}

int func_117(int iParam0, vector3 vParam1, int iParam4, int iParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	iVar3 = ITEMSET::CREATE_ITEMSET(true);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar3))
	{
		return 0;
	}
	func_226(iParam0, vParam1, iParam4, iParam5, &vVar5, 0);
	__LIB_1__::func_216(&iVar2, vVar5, 0f, 0f, 0f, (fParam6 * 2f), (fParam6 * 2f), 1.2f);
	iVar1 = ENTITY::_0x886171A12F400B89(iVar2, iVar3, 3);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar4 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iVar3));
		if (!ENTITY::IS_ENTITY_DEAD(iVar4))
		{
			if (__LIB_4__::func_893(iParam0, ENTITY::GET_ENTITY_MODEL(iVar4)))
			{
				if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar4) > 0.95f)
				{
					__LIB_0__::func_172(iVar2);
					ITEMSET::_CLEAR_ITEMSET(iVar3);
					ITEMSET::DESTROY_ITEMSET(iVar3);
					return iVar4;
				}
			}
		}
		iVar0++;
	}
	__LIB_0__::func_172(iVar2);
	ITEMSET::_CLEAR_ITEMSET(iVar3);
	ITEMSET::DESTROY_ITEMSET(iVar3);
	return 0;
}

void func_125(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	func_230(uParam0, iParam1, 0, &vVar0, &vVar3, 1);
	func_129(uParam0, 24, func_231(24, 0), vVar0, vVar3, 0, 0);
}

int func_126(int iParam0)
{
	return (62 + iParam0);
}

int func_127(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bVar0 = true;
	if (iParam1 == 0)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.038f, -0.0584f, 0.8029f };
			vVar4 = { 0f, -0.0001f, 11.1898f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.1179f, 0.0527f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, 1.4459f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.0351f, 0.1703f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, 19.0115f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.0718f, -0.0886f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, 9.99f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 1)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.0696f, 0.0037f, 0.8029f };
			vVar4 = { 0f, -0.0001f, -48.8102f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.0133f, 0.1285f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, -58.5541f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.1651f, 0.0547f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, -40.9885f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.0408f, -0.1065f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, -50.0101f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 2)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.0316f, 0.0621f, 0.8029f };
			vVar4 = { 0f, -0.0001f, -108.8102f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.1046f, 0.0758f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, -118.5541f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.1299f, -0.1156f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, -100.9885f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.1126f, -0.0179f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, -110.0101f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 3)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.038f, 0.0584f, 0.8029f };
			vVar4 = { 0f, -0.0001f, -168.8103f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.1179f, -0.0527f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, -178.5541f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.0351f, -0.1703f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, -160.9886f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.0718f, 0.0886f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, -170.0101f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 4)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.0696f, -0.0037f, 0.8029f };
			vVar4 = { 0f, -0.0001f, 131.1898f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.0133f, -0.1285f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, 121.446f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.1651f, -0.0547f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, 139.0115f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.0408f, 0.1065f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, 129.9899f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 5)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.0316f, -0.0621f, 0.8029f };
			vVar4 = { 0f, -0.0001f, 71.1897f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.1046f, -0.0758f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, 61.4459f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.1299f, 0.1156f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, 79.0115f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.1126f, 0.0179f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, 69.9899f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	if (iParam5 < 0 || iParam5 >= 10)
	{
		return 0;
	}
	if (bParam6)
	{
		__LIB_4__::func_883(uParam0->f_3, uParam0->f_6, vVar1, vVar4, uParam3, uParam4);
	}
	else
	{
		*uParam3 = { vVar1 };
		*uParam4 = { vVar4 };
	}
	uParam3->f_2 = (uParam3->f_2 + (BUILTIN::TO_FLOAT(iParam5) * 0.006f));
	return 1;
}

void func_129(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10)
{
	uParam0->f_281[iParam1 /*24*/] = 2;
	uParam0->f_281[iParam1 /*24*/].f_16 = { vParam3 };
	uParam0->f_281[iParam1 /*24*/].f_19 = { vParam6 };
	uParam0->f_281[iParam1 /*24*/].f_1 = iParam2;
	uParam0->f_281[iParam1 /*24*/].f_13 = iParam10;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_281[iParam1 /*24*/].f_4))
	{
		if (ENTITY::GET_ENTITY_MODEL(uParam0->f_281[iParam1 /*24*/].f_4) == iParam2)
		{
			if (!__LIB_0__::func_138(uParam0->f_281[iParam1 /*24*/].f_16, ENTITY::GET_ENTITY_COORDS(uParam0->f_281[iParam1 /*24*/].f_4, true, false)))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_281[iParam1 /*24*/].f_4, uParam0->f_281[iParam1 /*24*/].f_16, true, false, false, true);
			}
			ENTITY::SET_ENTITY_ROTATION(uParam0->f_281[iParam1 /*24*/].f_4, uParam0->f_281[iParam1 /*24*/].f_19, 2, true);
			uParam0->f_281[iParam1 /*24*/] = 5;
		}
		else
		{
			uParam0->f_281[iParam1 /*24*/] = 4;
		}
		if (uParam0->f_281[iParam1 /*24*/].f_13)
		{
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_281[iParam1 /*24*/].f_4, false);
		}
		return;
	}
	if (iParam9 > 0)
	{
		uParam0->f_281[iParam1 /*24*/] = 1;
		uParam0->f_281[iParam1 /*24*/].f_2 = (MISC::GET_FRAME_COUNT() + iParam9);
	}
}

void func_130(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	var uVar1[4];
	int iVar6[4];
	var uVar11[4];
	__LIB_12__::func_252(iParam2, &uVar1, &uVar11);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar6[iVar0] = __LIB_12__::func_253(uVar1[iVar0], uVar11[iVar0], 10);
		func_237(uParam0, iParam1, iVar0, uVar1[iVar0], iVar6[iVar0], 0, bParam3);
		iVar0++;
	}
}

void func_131(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam2 == 0)
	{
		iParam2 = func_231(iParam1, 0);
	}
	func_129(uParam0, iParam1, iParam2, uParam0->f_3 - Vector(0.1f, 0f, 0f), 0f, 0f, 0f, iParam3, iParam4);
}

bool func_132(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_106)
	{
		return false;
	}
	if (uParam0->f_95[iParam1] == -1)
	{
		return false;
	}
	return uParam0->f_106[uParam0->f_95[iParam1] /*29*/].f_1 != 0;
}

void func_134(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3[4];
	var uVar8[4];
	switch (iParam0->f_4)
	{
		case 0:
			__LIB_4__::func_812(&Global_1899750, uParam1->f_3 - Vector(2f, 0f, 0f));
			__LIB_4__::func_872(2);
			__LIB_12__::func_299(iParam0->f_378);
			__LIB_4__::func_871(1);
			__LIB_18__::func_523(iParam0);
			if (__LIB_0__::func_12() == 75)
			{
				__LIB_1__::func_948(-1801221395, 0, 0f, 0, 0, 0f, 0, 0);
				__LIB_1__::func_948(-1983417035, 1, 0f, 0, 0, 0f, 0, 0);
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (uParam1->f_106[iVar0 /*29*/].f_12 != -1)
				{
					__LIB_4__::func_868(&Global_1899750, uParam1->f_106[iVar0 /*29*/].f_11, iVar0, 0);
				}
				iVar0++;
			}
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_112(uParam1, iVar0))
				{
					if (!func_139(uParam1, &(iParam0->f_5[iVar0 /*62*/])))
					{
						return;
					}
					func_130(uParam1, iVar0, iParam0->f_5[iVar0 /*62*/].f_59, 1);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, iParam0, iVar0))
				{
					func_138(&(iParam0->f_5[iVar0 /*62*/]), 11, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), 0);
				}
				iVar2 = func_245(iVar0, 0);
				func_246(uParam1, iVar2, -0.25f);
				iVar2 = (62 + iVar0);
				func_246(uParam1, iVar2, -0.25f);
				iVar0++;
			}
			__LIB_18__::func_523(iParam0);
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_112(uParam1, iVar0))
				{
					if (!func_139(uParam1, &(iParam0->f_5[iVar0 /*62*/])))
					{
						return;
					}
				}
				iVar0++;
			}
			func_138(&(iParam0->f_5[iParam0->f_378 /*62*/]), 20, 0, 0);
			__LIB_18__::func_523(iParam0);
			break;
		case 3:
			if (!func_139(uParam1, &(iParam0->f_5[iParam0->f_378 /*62*/])))
			{
				return;
			}
			if (__LIB_4__::func_870() == 2)
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (uParam1->f_106[iVar0 /*29*/].f_12 != -1)
					{
						__LIB_7__::func_698(uParam1->f_1, uParam1->f_106[iVar0 /*29*/].f_11, iVar0, Local_1.f_5[iVar0 /*62*/].f_59, Local_1.f_5[iVar0 /*62*/].f_1, uParam1->f_106[iVar0 /*29*/].f_18, uParam1->f_106[iVar0 /*29*/].f_19);
					}
					else
					{
						__LIB_7__::func_698(uParam1->f_1, 0, iVar0, 0, 0, 0, 92);
					}
					__LIB_12__::func_252(Local_1.f_5[iVar0 /*62*/].f_59, &uVar8, &uVar3);
					iVar1 = 0;
					while (iVar1 < 4)
					{
						iVar2 = ((0 + iVar0 * 4) + iVar1);
						if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_281[iVar2 /*24*/].f_4))
						{
							__LIB_12__::func_240(uParam1->f_1, uParam1->f_281[iVar2 /*24*/].f_4, iVar2, uVar8[iVar1], uVar3[iVar1]);
							uParam1->f_281[iVar2 /*24*/].f_4 = 0;
							func_66(uParam1, iVar2, 0);
						}
						iVar1++;
					}
					iVar0++;
				}
				iVar2 = 24;
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_281[iVar2 /*24*/].f_4))
				{
					__LIB_12__::func_240(uParam1->f_1, uParam1->f_281[iVar2 /*24*/].f_4, iVar2, 0, 0);
					uParam1->f_281[iVar2 /*24*/].f_4 = 0;
					func_66(uParam1, iVar2, 0);
				}
				__LIB_4__::func_871(3);
				__LIB_18__::func_523(iParam0);
			}
			break;
		case 4:
			__LIB_4__::func_871(4);
			__LIB_18__::func_523(iParam0);
			break;
		case 5:
			if (__LIB_4__::func_870() == 5)
			{
				func_3(uParam1, 1, 0);
				__LIB_7__::func_718(uParam1, 10);
				func_72(iParam0);
			}
			break;
	}
}

int func_135(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_106)
	{
		if (uParam0->f_106[iVar1 /*29*/] && uParam0->f_106[iVar1 /*29*/].f_1 == iParam1)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_136(var uParam0, var uParam1)
{
	int iVar0;
	uParam1->f_391 = (uParam1->f_391 - MISC::GET_FRAME_TIME());
	if (uParam1->f_391 > 0f)
	{
		return;
	}
	if (*uParam1 < 6)
	{
		return;
	}
	if (*uParam1 >= 14)
	{
		return;
	}
	iVar0 = func_249(uParam0, -1);
	if (iVar0 != -1)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(uParam0->f_106[iVar0 /*29*/].f_11))
		{
			return;
		}
		if (func_250(uParam0, uParam0->f_106[iVar0 /*29*/].f_11, "POKER_BANTER"))
		{
			uParam1->f_391 = MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 20f);
		}
	}
}

int func_137(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iParam1 = (iParam1 + 1 % 6);
		if (uParam0->f_106[iParam1 /*29*/] && uParam0->f_106[iParam1 /*29*/].f_1 == 5)
		{
			return iParam1;
		}
		iVar0++;
	}
	return -1;
}

void func_138(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 == 0)
	{
	}
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	uParam0->f_4 = iParam2;
	uParam0->f_2 = 0f;
}

bool func_139(var uParam0, var uParam1)
{
	if (!func_112(uParam0, uParam1->f_5))
	{
		return true;
	}
	return ((uParam1->f_3 == 100 || *uParam1 == 1) || *uParam1 == 0);
}

bool func_140(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	iVar2 = uParam0->f_387;
	switch (uParam0->f_4)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, uParam0, iVar2))
				{
					func_251(uParam0, uParam1, iVar2, fVar1);
					fVar1 = (fVar1 + MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 3f));
				}
				iVar2 = (iVar2 + 1 % 6);
				iVar0++;
			}
			__LIB_18__::func_523(uParam0);
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, uParam0, iVar0))
				{
					if (!func_139(uParam1, &(uParam0->f_5[iVar0 /*62*/])))
					{
						return false;
					}
				}
				iVar0++;
			}
			func_138(&(uParam0->f_5[uParam0->f_378 /*62*/]), 8, 0, 0);
			__LIB_18__::func_523(uParam0);
			break;
		case 2:
			if (func_139(uParam1, &(uParam0->f_5[uParam0->f_378 /*62*/])))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_141(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	iVar2 = uParam0->f_387;
	switch (uParam0->f_4)
	{
		case 0:
			uParam0->f_389++;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, uParam0, iVar2))
				{
					func_251(uParam0, uParam1, iVar2, fVar1);
					fVar1 = (fVar1 + MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 3f));
				}
				iVar2 = (iVar2 + 1 % 6);
				iVar0++;
			}
			__LIB_18__::func_523(uParam0);
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, uParam0, iVar0))
				{
					if (!func_139(uParam1, &(uParam0->f_5[iVar0 /*62*/])))
					{
						return false;
					}
				}
				iVar0++;
			}
			func_138(&(uParam0->f_5[uParam0->f_378 /*62*/]), 9, 0, 0);
			__LIB_18__::func_523(uParam0);
			break;
		case 2:
			if (func_139(uParam1, &(uParam0->f_5[uParam0->f_378 /*62*/])))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_142(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	iVar2 = uParam0->f_387;
	switch (uParam0->f_4)
	{
		case 0:
			uParam0->f_389++;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, uParam0, iVar2))
				{
					func_251(uParam0, uParam1, iVar2, fVar1);
					fVar1 = (fVar1 + MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 3f));
				}
				iVar2 = (iVar2 + 1 % 6);
				iVar0++;
			}
			__LIB_18__::func_523(uParam0);
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, uParam0, iVar0))
				{
					if (!func_139(uParam1, &(uParam0->f_5[iVar0 /*62*/])))
					{
						return false;
					}
				}
				iVar0++;
			}
			func_138(&(uParam0->f_5[uParam0->f_378 /*62*/]), 10, 0, 0);
			__LIB_18__::func_523(uParam0);
			break;
		case 2:
			if (func_139(uParam1, &(uParam0->f_5[uParam0->f_378 /*62*/])))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_143(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	iVar2 = uParam0->f_388;
	switch (uParam0->f_4)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, uParam0, iVar2))
				{
					if (iVar2 == uParam0->f_388)
					{
						func_138(&(uParam0->f_5[iVar2 /*62*/]), 15, fVar1, 0);
					}
					else
					{
						func_138(&(uParam0->f_5[iVar2 /*62*/]), 16, fVar1, 0);
					}
					fVar1 = (fVar1 + MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 3f));
				}
				iVar2 = (iVar2 + 1 % 6);
				iVar0++;
			}
			__LIB_18__::func_523(uParam0);
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (!func_139(uParam1, &(uParam0->f_5[iVar0 /*62*/])))
				{
					return false;
				}
				iVar0++;
			}
			__LIB_18__::func_523(uParam0);
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_144(var uParam0, var uParam1, int iParam2)
{
	if (!MISC::IS_BIT_SET(uParam1->f_386, iParam2))
	{
		return false;
	}
	return func_112(uParam0, iParam2);
}

bool func_145(var uParam0, var uParam1)
{
	switch (uParam0->f_4)
	{
		case 0:
			if (func_139(uParam1, &(uParam0->f_5[uParam0->f_378 /*62*/])))
			{
				__LIB_18__::func_523(uParam0);
			}
			break;
		case 1:
			func_138(&(uParam0->f_5[uParam0->f_378 /*62*/]), 20, 0, 0);
			__LIB_18__::func_523(uParam0);
			break;
		case 2:
			if (!func_139(uParam1, &(uParam0->f_5[uParam0->f_378 /*62*/])))
			{
				return false;
			}
			uParam0->f_379 = uParam0->f_378;
			uParam0->f_378 = func_137(uParam1, uParam0->f_379);
			func_138(&(uParam0->f_5[uParam0->f_379 /*62*/]), 18, 0, 0);
			__LIB_18__::func_523(uParam0);
			break;
		case 3:
			if (!func_139(uParam1, &(uParam0->f_5[uParam0->f_379 /*62*/])))
			{
				return false;
			}
			func_138(&(uParam0->f_5[uParam0->f_378 /*62*/]), 19, 0, 0);
			__LIB_18__::func_523(uParam0);
			break;
		case 4:
			if (!func_139(uParam1, &(uParam0->f_5[uParam0->f_378 /*62*/])))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_149(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 69)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_281[iParam1 /*24*/].f_4))
	{
		uParam0->f_281[iParam1 /*24*/].f_4 = iParam2;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_281[iParam1 /*24*/].f_4))
	{
		uParam0->f_281[iParam1 /*24*/] = 5;
		uParam0->f_281[iParam1 /*24*/].f_13 = 0;
		uParam0->f_281[iParam1 /*24*/].f_1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_281[iParam1 /*24*/].f_4);
		uParam0->f_281[iParam1 /*24*/].f_16 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_281[iParam1 /*24*/].f_4, true, false) };
		uParam0->f_281[iParam1 /*24*/].f_19 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_281[iParam1 /*24*/].f_4, 2) };
		uParam0->f_281[iParam1 /*24*/].f_23 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(uParam0->f_281[iParam1 /*24*/].f_4));
		if (!DECORATOR::DECOR_EXIST_ON(uParam0->f_281[iParam1 /*24*/].f_4, "MinigameObject"))
		{
			DECORATOR::DECOR_SET_BOOL(uParam0->f_281[iParam1 /*24*/].f_4, "MinigameObject", true);
		}
	}
}

bool func_157(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	fVar8 = (0.25f * 2f);
	if (!func_226(iParam0, vParam1, iParam4, iParam5, &vVar0, 1))
	{
		return false;
	}
	iVar4 = ITEMSET::CREATE_ITEMSET(true);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar4))
	{
		return false;
	}
	vVar0.f_2 = (vVar0.z + 0.9f);
	__LIB_1__::func_216(&iVar5, vVar0, 0f, 0f, 0f, fVar8, fVar8, 1.8f);
	iVar6 = ENTITY::_0x886171A12F400B89(iVar5, iVar4, 1);
	iVar7 = 0;
	while (iVar7 < iVar6)
	{
		iVar3 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar7, iVar4));
		if (__LIB_1__::func_286(iParam0, iVar3) || iParam8 == 1)
		{
			if (iParam7 == 0 || (iParam7 == 1 && !PED::IS_PED_A_PLAYER(iVar3)))
			{
				__LIB_0__::func_172(iVar5);
				ITEMSET::_CLEAR_ITEMSET(iVar4);
				ITEMSET::DESTROY_ITEMSET(iVar4);
				*iParam6 = iVar3;
				return true;
			}
		}
		iVar7++;
	}
	__LIB_0__::func_172(iVar5);
	ITEMSET::_CLEAR_ITEMSET(iVar4);
	ITEMSET::DESTROY_ITEMSET(iVar4);
	return false;
}

bool func_158(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 7)
	{
		return false;
	}
	return uParam0->f_1938[iParam1 /*29*/] >= 4;
}

void func_161(var uParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	if (iParam1 < 0 || iParam1 >= 69)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_281[iParam1 /*24*/].f_5)))
	{
		return;
	}
	if (uParam0->f_281[iParam1 /*24*/].f_3 == -1)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_281[iParam1 /*24*/].f_4))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_281[iParam1 /*24*/].f_4, true, false) };
		vVar3 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_281[iParam1 /*24*/].f_4, 2) };
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_281[iParam1 /*24*/].f_3))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_281[iParam1 /*24*/].f_3, &(uParam0->f_281[iParam1 /*24*/].f_5), uParam0->f_281[iParam1 /*24*/].f_4);
		}
		if (uParam0->f_281[iParam1 /*24*/].f_15)
		{
			ANIMSCENE::_0xC1193521E3B9FADD(uParam0->f_281[iParam1 /*24*/].f_4, 0);
			uParam0->f_281[iParam1 /*24*/].f_15 = 0;
		}
		if (bParam2)
		{
			func_162(uParam0, iParam1);
		}
		else if (!ENTITY::IS_ENTITY_ATTACHED(uParam0->f_281[iParam1 /*24*/].f_4))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_281[iParam1 /*24*/].f_4, true);
			ENTITY::SET_ENTITY_COORDS(uParam0->f_281[iParam1 /*24*/].f_4, vVar0, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(uParam0->f_281[iParam1 /*24*/].f_4, vVar3, 2, true);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_281[iParam1 /*24*/].f_4, false, false);
		}
	}
	uParam0->f_281[iParam1 /*24*/].f_3 = -1;
	StringCopy(&(uParam0->f_281[iParam1 /*24*/].f_5), "", 64);
}

void func_162(var uParam0, int iParam1)
{
	ENTITY::SET_ENTITY_COLLISION(uParam0->f_281[iParam1 /*24*/].f_4, true, false);
	if (ENTITY::IS_ENTITY_ATTACHED(uParam0->f_281[iParam1 /*24*/].f_4))
	{
		__LIB_2__::func_919(uParam0->f_281[iParam1 /*24*/].f_4, 1, 1);
	}
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_281[iParam1 /*24*/].f_4, false);
	ENTITY::SET_ENTITY_DYNAMIC(uParam0->f_281[iParam1 /*24*/].f_4, true);
	PHYSICS::ACTIVATE_PHYSICS(uParam0->f_281[iParam1 /*24*/].f_4);
	ENTITY::SET_ENTITY_HAS_GRAVITY(uParam0->f_281[iParam1 /*24*/].f_4, true);
}

bool func_188(var uParam0, vector3 vParam1, var uParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	fVar2 = -1f;
	*uParam4 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!MISC::IS_BIT_SET(uParam0->f_94, iVar0) && !MISC::IS_BIT_SET(uParam0->f_93, iVar0))
		{
			func_226(uParam0->f_1, uParam0->f_3, uParam0->f_6, iVar0, &vVar3, 0);
			fVar1 = __LIB_0__::func_62(vParam1, vVar3);
			if (fVar1 < fVar2 || fVar2 == -1f)
			{
				fVar2 = fVar1;
				*uParam4 = iVar0;
			}
		}
		iVar0++;
	}
	return *uParam4 != -1;
}

char* func_191(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SCRIPT@MINI_GAME@POKER@PREPOSTGAME_BASE";
		case 3:
			return "SCRIPT@MINI_GAME@POKER@PREPOSTGAME_FEMALE";
		case 2:
			return "SCRIPT@MINI_GAME@POKER@PREPOSTGAME_RELAXED";
		default:
			break;
	}
	return "SCRIPT@MINI_GAME@POKER@PREPOSTGAME_BASE";
}

bool func_192(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	if (iParam1 < 0 || iParam1 >= 7)
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return false;
	}
	__LIB_7__::func_695(&(uParam0->f_1938[iParam1 /*29*/]), 1);
	if (uParam0->f_1938[iParam1 /*29*/].f_1 == -1 || !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1938[iParam1 /*29*/].f_1))
	{
		uParam0->f_1938[iParam1 /*29*/].f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam2, iParam4, sParam3, false, true);
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1938[iParam1 /*29*/].f_1))
		{
			return false;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1938[iParam1 /*29*/].f_1);
	}
	StringCopy(&(uParam0->f_1938[iParam1 /*29*/].f_12), sParam3, 64);
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1938[iParam1 /*29*/].f_1))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
		}
		StringCopy(&(uParam0->f_1938[iParam1 /*29*/].f_4), sParam2, 64);
		__LIB_7__::func_695(&(uParam0->f_1938[iParam1 /*29*/]), 2);
		return true;
	}
	return false;
}

bool func_194(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 7)
	{
		return false;
	}
	return uParam0->f_1938[iParam1 /*29*/] == 4;
}

bool func_195(var uParam0, int iParam1, float fParam2)
{
	return func_226(uParam0->f_1, uParam0->f_3, uParam0->f_6, iParam1, fParam2, 0);
}

int func_196(var uParam0, int iParam1, var uParam2)
{
	return __LIB_7__::func_744(uParam0->f_1, uParam0->f_6, iParam1, uParam2);
}

int func_197(var uParam0, int iParam1, var uParam2, char* sParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(uParam2->f_11))
	{
		return 0;
	}
	if (!func_268(uParam0, iParam1, uParam2->f_11) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uParam2->f_11, -1))
	{
		func_60(uParam0, uParam2, 0);
	}
	if (uParam2->f_1 < 4 || uParam2->f_1 > 5)
	{
		return 0;
	}
	uParam2->f_20 = iParam1;
	StringCopy(&(uParam2->f_21), sParam3, 64);
	MISC::SET_BIT(&(uParam0->f_1938[uParam2->f_20 /*29*/].f_3), uParam2->f_13);
	if (ANIMSCENE::_GET_ANIM_SCENE_PED(uParam0->f_1938[iParam1 /*29*/].f_1, sParam3, false) != uParam2->f_11)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1938[iParam1 /*29*/].f_1, sParam3, uParam2->f_11, 0);
	}
	return 1;
}

bool func_198(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5)
{
	int iVar0;
	if (iParam1 < 0 || iParam1 >= 7)
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_1938[iParam1 /*29*/].f_1, false))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1938[iParam1 /*29*/].f_1, vParam2, vParam5, 2);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_1938[iParam1 /*29*/].f_1);
		uParam0->f_1938[iParam1 /*29*/].f_20 = { uParam0->f_1938[iParam1 /*29*/].f_12 };
		StringCopy(&(uParam0->f_1938[iParam1 /*29*/].f_12), "", 64);
		uParam0->f_1938[iParam1 /*29*/].f_2 = 0f;
		iVar0 = 0;
		while (iVar0 < 69)
		{
			if (uParam0->f_281[iVar0 /*24*/].f_14 == 1)
			{
				ANIMSCENE::_0xC1193521E3B9FADD(uParam0->f_281[iVar0 /*24*/].f_4, 1);
				uParam0->f_281[iVar0 /*24*/].f_14 = 0;
				uParam0->f_281[iVar0 /*24*/].f_15 = 1;
			}
			iVar0++;
		}
		__LIB_7__::func_695(&(uParam0->f_1938[iParam1 /*29*/]), 5);
		return true;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1938[iParam1 /*29*/].f_12)))
	{
		if (!ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_1938[iParam1 /*29*/].f_1, &(uParam0->f_1938[iParam1 /*29*/].f_12)))
		{
			return false;
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_1938[iParam1 /*29*/].f_1, &(uParam0->f_1938[iParam1 /*29*/].f_12)))
		{
			return false;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1938[iParam1 /*29*/].f_20)))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_1938[iParam1 /*29*/].f_1, &(uParam0->f_1938[iParam1 /*29*/].f_20));
		}
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_1938[iParam1 /*29*/].f_1, &(uParam0->f_1938[iParam1 /*29*/].f_12), true);
		uParam0->f_1938[iParam1 /*29*/].f_20 = { uParam0->f_1938[iParam1 /*29*/].f_12 };
		StringCopy(&(uParam0->f_1938[iParam1 /*29*/].f_12), "", 64);
		uParam0->f_1938[iParam1 /*29*/].f_2 = 0f;
		iVar0 = 0;
		while (iVar0 < 69)
		{
			if (uParam0->f_281[iVar0 /*24*/].f_14 == 1)
			{
				ANIMSCENE::_0xC1193521E3B9FADD(uParam0->f_281[iVar0 /*24*/].f_4, 1);
				uParam0->f_281[iVar0 /*24*/].f_14 = 0;
			}
			iVar0++;
		}
		__LIB_7__::func_695(&(uParam0->f_1938[iParam1 /*29*/]), 5);
		return true;
	}
	return false;
}

bool func_199(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (uParam0->f_106[iVar0 /*29*/] && uParam0->f_106[iVar0 /*29*/].f_11 == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_200(var uParam0, var uParam1, bool bParam2)
{
	if (func_269(uParam0, &Local_1) && bParam2)
	{
		uParam0->f_2151 = 1;
	}
	if (__LIB_0__::func_12() == 75)
	{
		__LIB_3__::func_124(-1983417035, 1);
	}
}

void func_201(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 69)
	{
		if (uParam0->f_281[iVar0 /*24*/].f_3 == uParam0->f_1938[iParam1 /*29*/].f_1)
		{
			func_161(uParam0, iVar0, bParam2);
		}
		iVar0++;
	}
}

void func_202(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	vector3 vVar5;
	char* sVar8;
	iVar0 = uParam1->f_12;
	iVar1 = (0 + iVar0);
	sVar8 = func_191(uParam2->f_5[iVar0 /*62*/].f_1);
	switch (uParam1->f_3)
	{
		case 0:
			func_270(&(uParam2->f_5[iVar0 /*62*/]), 1);
			break;
		case 1:
			if (func_192(uParam0, iVar1, sVar8, "PBL_NoCardsLoop", 2))
			{
				func_270(&(uParam2->f_5[iVar0 /*62*/]), 1);
			}
			break;
		case 2:
			if (func_194(uParam0, iVar1))
			{
				func_195(uParam0, iVar0, &uVar2);
				func_196(uParam0, iVar0, &vVar5);
				func_197(uParam0, iVar1, uParam1, "Seat_01");
				if (func_198(uParam0, iVar1, uParam0->f_3, vVar5))
				{
					func_271(&(uParam2->f_5[iVar0 /*62*/]), 1);
				}
			}
			break;
	}
}

void func_203(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar4;
	int iVar111;
	vector3 vVar112;
	vector3 vVar115;
	int iVar118;
	int iVar119;
	int iVar120;
	int iVar121;
	char* sVar122;
	uVar4 = 52;
	iVar118 = uParam1->f_12;
	iVar119 = (0 + iVar118);
	iVar120 = 6;
	if (iVar118 < 0 || iVar118 >= 6)
	{
		return;
	}
	sVar122 = func_191(uParam2->f_5[iVar118 /*62*/].f_1);
	switch (uParam2->f_5[iVar118 /*62*/].f_3)
	{
		case 0:
			uParam0->f_2149 = 1;
			__LIB_4__::func_885(&uVar4);
			__LIB_4__::func_888(&uVar4);
			__LIB_4__::func_884(&(uParam2->f_392));
			iVar0 = 0;
			while (iVar0 < 6)
			{
				__LIB_4__::func_884(&(uParam2->f_5[iVar0 /*62*/].f_6));
				uParam2->f_5[iVar0 /*62*/].f_30.f_24 = -1;
				__LIB_4__::func_884(&(uParam2->f_5[iVar0 /*62*/].f_30));
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (__LIB_4__::func_895(&uVar4, &uVar2))
				{
					__LIB_12__::func_431(&(uParam2->f_392), &uVar2);
				}
				iVar0++;
			}
			uParam2->f_388 = -1;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_132(uParam0, iVar0))
				{
					if (__LIB_4__::func_895(&uVar4, &uVar2))
					{
						__LIB_12__::func_431(&(uParam2->f_5[iVar0 /*62*/].f_6), &uVar2);
					}
					if (__LIB_4__::func_895(&uVar4, &uVar2))
					{
						__LIB_12__::func_431(&(uParam2->f_5[iVar0 /*62*/].f_6), &uVar2);
					}
					if (MINIGAME::_0x32A7C216344D623B(&(uParam2->f_5[iVar0 /*62*/].f_6), &(uParam2->f_392), &(uParam2->f_5[iVar0 /*62*/].f_30)))
					{
					}
					if (uParam2->f_388 != -1)
					{
						iVar1 = __LIB_12__::func_401(&(uParam2->f_5[uParam2->f_388 /*62*/].f_30), &(uParam2->f_5[iVar0 /*62*/].f_30));
						if (iVar1 == -1)
						{
							uParam2->f_388 = iVar0;
						}
					}
					else
					{
						uParam2->f_388 = iVar0;
					}
					func_130(uParam0, iVar0, uParam2->f_5[iVar0 /*62*/].f_59, 1);
				}
				iVar0++;
			}
			if (uParam2->f_388 != -1)
			{
			}
			func_277(uParam0, 0);
			iVar0 = 0;
			while (iVar0 < 7)
			{
				iVar121 = (25 + iVar0);
				func_65(uParam0, iVar121);
				iVar0++;
			}
			func_270(&(uParam2->f_5[iVar118 /*62*/]), 1);
			break;
		case 1:
			func_278(uParam0, uParam2->f_378);
			if (func_192(uParam0, iVar119, sVar122, "PBL_ShuffleA", 2))
			{
				func_270(&(uParam2->f_5[iVar118 /*62*/]), 1);
			}
			break;
		case 2:
			func_125(uParam0, uParam2->f_378);
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_132(uParam0, iVar0))
				{
					if (func_279(&iVar111, uParam2->f_5[iVar0 /*62*/].f_6[0 /*2*/], iLocal_0, 0))
					{
						iVar121 = (32 + iVar0);
						func_131(uParam0, iVar121, iVar111, 0, 1);
					}
					if (func_279(&iVar111, uParam2->f_5[iVar0 /*62*/].f_6[1 /*2*/], iLocal_0, 0))
					{
						iVar121 = (38 + iVar0);
						func_131(uParam0, iVar121, iVar111, 0, 1);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (func_279(&iVar111, uParam2->f_392[iVar0 /*2*/], iLocal_0, 0))
				{
					iVar121 = (25 + iVar0);
					func_131(uParam0, iVar121, iVar111, 0, 1);
				}
				iVar0++;
			}
			func_270(&(uParam2->f_5[iVar118 /*62*/]), 1);
			break;
		case 3:
			if (func_194(uParam0, iVar119) && func_47(uParam0))
			{
				func_280(uParam0, iVar119, 24, "Deck", 0);
				func_195(uParam0, uParam1->f_12, &vVar115);
				func_196(uParam0, uParam1->f_12, &vVar112);
				func_197(uParam0, iVar119, uParam1, "Seat_01");
				if (func_198(uParam0, iVar119, vVar115, vVar112))
				{
					func_270(&(uParam2->f_5[iVar118 /*62*/]), 1);
				}
			}
			break;
		case 4:
			if (func_281(uParam0, iVar119) >= 1f)
			{
				func_270(&(uParam2->f_5[iVar118 /*62*/]), 1);
			}
			break;
		case 5:
			if (func_282(uParam0, uParam2))
			{
				func_270(&(uParam2->f_5[iVar118 /*62*/]), 1);
			}
			break;
		case 6:
			if (func_281(uParam0, iVar120) >= 1f || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (func_112(uParam0, iVar0))
					{
						if (iVar0 == iVar118)
						{
							func_138(&(uParam2->f_5[iVar0 /*62*/]), 7, 0, 0);
						}
						else if (!__LIB_1__::func_44(uParam0->f_8))
						{
							func_138(&(uParam2->f_5[iVar0 /*62*/]), 7, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), 0);
						}
						else
						{
							func_271(&(uParam2->f_5[iVar0 /*62*/]), 1);
						}
						uParam2->f_5[iVar0 /*62*/].f_57 = 1;
					}
					else
					{
						uParam2->f_5[iVar0 /*62*/].f_57 = 0;
					}
					iVar0++;
				}
			}
			break;
	}
}

void func_204(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar8;
	char* sVar11;
	iVar3 = uParam1->f_12;
	iVar4 = (0 + iVar3);
	if (iVar3 < 0 || iVar3 >= 6)
	{
		return;
	}
	sVar11 = func_191(uParam2->f_5[iVar3 /*62*/].f_1);
	iVar1 = func_245(iVar3, 0);
	switch (uParam2->f_5[iVar3 /*62*/].f_3)
	{
		case 0:
			if (uParam2->f_5[iVar3 /*62*/].f_2 > uParam2->f_5[iVar3 /*62*/].f_4)
			{
				if (func_192(uParam0, iVar4, sVar11, "PBL_BlindA", 2))
				{
					func_130(uParam0, iVar3, uParam2->f_5[iVar3 /*62*/].f_59, 1);
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_281[func_126(iVar3) /*24*/].f_4))
					{
						func_283(uParam0, iVar3, uParam2->f_5[iVar3 /*62*/].f_58, 1);
					}
					func_284(uParam0, iVar3, 0, &vVar5, &vVar8, 0, 1);
					func_65(uParam0, iVar1);
					func_129(uParam0, iVar1, __LIB_18__::func_522(), vVar5, vVar8, 0, 1);
					func_270(&(uParam2->f_5[iVar3 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (!func_47(uParam0))
			{
				return;
			}
			if (!func_194(uParam0, iVar4))
			{
				return;
			}
			func_130(uParam0, iVar3, uParam2->f_5[iVar3 /*62*/].f_59, 1);
			if (uParam2->f_385 == iVar3)
			{
				iVar0 = 1;
				uParam2->f_389 = iVar0;
			}
			else
			{
				iVar0 = 2;
				uParam2->f_389 = iVar0;
				uParam2->f_390 = iVar0;
			}
			uParam2->f_5[iVar3 /*62*/].f_58 = (uParam2->f_5[iVar3 /*62*/].f_58 + iVar0);
			uParam2->f_5[iVar3 /*62*/].f_59 = (uParam2->f_5[iVar3 /*62*/].f_59 - iVar0);
			if (uParam2->f_5[iVar3 /*62*/].f_59 < 0)
			{
				uParam2->f_5[iVar3 /*62*/].f_59 = 0;
			}
			iVar2 = __LIB_12__::func_253(0, iVar0, 10);
			iVar2 = __LIB_0__::func_309(iVar2, 1, 4);
			__LIB_19__::func_230(uParam0->f_281[iVar1 /*24*/].f_4, iVar2, 4);
			func_287(uParam0, iVar1, 1);
			func_280(uParam0, iVar4, iVar1, func_288(44), 0);
			func_197(uParam0, iVar4, &(uParam0->f_106[iVar3 /*29*/]), "Seat_01");
			func_195(uParam0, uParam2->f_378, &vVar5);
			func_196(uParam0, uParam2->f_378, &vVar8);
			if (func_198(uParam0, iVar4, uParam0->f_3, vVar8))
			{
				func_289(uParam0, uParam1->f_11);
				func_270(&(uParam2->f_5[iVar3 /*62*/]), 1);
			}
			break;
		case 2:
			if (__LIB_12__::func_242(&(uParam0->f_106[iVar3 /*29*/]), "ChipsDown"))
			{
				func_270(&(uParam2->f_5[iVar3 /*62*/]), 1);
				return;
			}
			if (!func_291(uParam0, iVar4, "BlindA"))
			{
				func_270(&(uParam2->f_5[iVar3 /*62*/]), 1);
			}
			break;
		case 3:
			if (uParam2->f_5[iVar3 /*62*/].f_2 > 0.01f)
			{
				vVar5 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_281[iVar1 /*24*/].f_4, true, false) };
				vVar8 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_281[iVar1 /*24*/].f_4, 2) };
				func_292(uParam0, iVar3, uParam2->f_5[iVar3 /*62*/].f_58, vVar5, vVar8, 1);
				func_65(uParam0, iVar1);
				uParam2->f_5[iVar3 /*62*/].f_56 = 1;
				func_271(&(uParam2->f_5[iVar3 /*62*/]), 1);
			}
			break;
	}
}

void func_205(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	var uVar1;
	vector3 vVar4;
	int iVar7;
	char* sVar8;
	iVar0 = uParam1->f_12;
	iVar7 = (0 + iVar0);
	if (iVar0 < 0 || iVar0 >= 6)
	{
		return;
	}
	sVar8 = func_191(uParam2->f_5[iVar0 /*62*/].f_1);
	switch (uParam2->f_5[iVar0 /*62*/].f_3)
	{
		case 0:
			if (uParam2->f_5[iVar0 /*62*/].f_2 > uParam2->f_5[iVar0 /*62*/].f_4)
			{
				if (func_192(uParam0, iVar7, sVar8, "PBL_CheckA", 2))
				{
					func_270(&(uParam2->f_5[iVar0 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_280(uParam0, iVar7, (32 + iVar0), func_288(32), 0);
				func_280(uParam0, iVar7, (38 + iVar0), func_288(38), 0);
				func_195(uParam0, uParam2->f_378, &uVar1);
				func_196(uParam0, uParam2->f_378, &vVar4);
				func_197(uParam0, iVar7, uParam1, "Seat_01");
				if (func_198(uParam0, iVar7, uParam0->f_3, vVar4))
				{
					func_270(&(uParam2->f_5[iVar0 /*62*/]), 1);
					func_293(uParam0, uParam1->f_11);
				}
			}
			break;
		case 2:
			if (__LIB_12__::func_242(uParam1, "ActionDone") || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				func_138(&(uParam2->f_5[iVar0 /*62*/]), 1, 0, 0);
				return;
			}
			if (func_281(uParam0, iVar7) > 0.25f)
			{
				func_138(&(uParam2->f_5[iVar0 /*62*/]), 1, 0, 0);
				return;
			}
			if (!func_291(uParam0, iVar7, "HoldCardsLoopA"))
			{
				func_270(&(uParam2->f_5[iVar0 /*62*/]), 1);
			}
			break;
		case 3:
			if (func_291(uParam0, iVar7, "HoldCardsLoopA"))
			{
				func_271(&(uParam2->f_5[iVar0 /*62*/]), 1);
			}
			break;
	}
}

void func_206(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	vector3 vVar9;
	char* sVar12;
	iVar1 = 5;
	iVar4 = uParam1->f_12;
	iVar5 = (0 + iVar4);
	if (iVar4 < 0 || iVar4 >= 6)
	{
		return;
	}
	sVar12 = func_191(uParam2->f_5[iVar4 /*62*/].f_1);
	iVar2 = func_245(iVar4, uParam2->f_5[iVar4 /*62*/].f_61);
	switch (uParam2->f_5[iVar4 /*62*/].f_3)
	{
		case 0:
			if (uParam2->f_5[iVar4 /*62*/].f_2 > uParam2->f_5[iVar4 /*62*/].f_4)
			{
				if (func_192(uParam0, iVar5, sVar12, "PBL_BetA", 2))
				{
					func_130(uParam0, iVar4, uParam2->f_5[iVar4 /*62*/].f_59, 1);
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_281[func_126(iVar4) /*24*/].f_4))
					{
						func_283(uParam0, iVar4, uParam2->f_5[iVar4 /*62*/].f_58, 1);
					}
					func_284(uParam0, iVar4, 0, &vVar6, &vVar9, 0, 1);
					func_65(uParam0, iVar2);
					func_129(uParam0, iVar2, __LIB_18__::func_522(), vVar6, vVar9, 0, 1);
					func_270(&(uParam2->f_5[iVar4 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (!func_47(uParam0))
			{
				return;
			}
			if (!func_194(uParam0, iVar5))
			{
				return;
			}
			func_130(uParam0, iVar4, uParam2->f_5[iVar4 /*62*/].f_59, 1);
			if (uParam2->f_5[iVar4 /*62*/].f_59 < iVar1)
			{
				iVar1 = uParam2->f_5[iVar4 /*62*/].f_59;
			}
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, iVar1);
			if (uParam2->f_5[iVar4 /*62*/].f_58 < uParam2->f_389)
			{
				iVar0 = (uParam2->f_389 - uParam2->f_5[iVar4 /*62*/].f_58);
			}
			uParam2->f_5[iVar4 /*62*/].f_58 = (uParam2->f_5[iVar4 /*62*/].f_58 + iVar0);
			uParam2->f_5[iVar4 /*62*/].f_59 = (uParam2->f_5[iVar4 /*62*/].f_59 - iVar0);
			iVar3 = __LIB_12__::func_253(0, iVar0, 10);
			iVar3 = __LIB_0__::func_309(iVar3, 1, 4);
			__LIB_19__::func_230(uParam0->f_281[iVar2 /*24*/].f_4, iVar3, 4);
			func_287(uParam0, iVar2, 1);
			func_280(uParam0, iVar5, iVar2, func_288((44 + uParam2->f_5[iVar4 /*62*/].f_61)), 0);
			func_197(uParam0, iVar5, &(uParam0->f_106[iVar4 /*29*/]), "Seat_01");
			func_195(uParam0, uParam2->f_378, &vVar6);
			func_196(uParam0, uParam2->f_378, &vVar9);
			if (func_198(uParam0, iVar5, uParam0->f_3, vVar9))
			{
				func_270(&(uParam2->f_5[iVar4 /*62*/]), 1);
				func_289(uParam0, uParam1->f_11);
			}
			break;
		case 2:
			if (__LIB_12__::func_242(&(uParam0->f_106[iVar4 /*29*/]), "ChipsDown"))
			{
				func_270(&(uParam2->f_5[iVar4 /*62*/]), 1);
				return;
			}
			if (!func_291(uParam0, iVar5, "BetA"))
			{
				func_270(&(uParam2->f_5[iVar4 /*62*/]), 1);
			}
			break;
		case 3:
			if (uParam2->f_5[iVar4 /*62*/].f_2 > 0.01f)
			{
				vVar6 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_281[iVar2 /*24*/].f_4, true, false) };
				vVar9 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_281[iVar2 /*24*/].f_4, 2) };
				func_292(uParam0, iVar4, uParam2->f_5[iVar4 /*62*/].f_58, vVar6, vVar9, 1);
				func_65(uParam0, iVar2);
				uParam2->f_5[iVar4 /*62*/].f_56 = 1;
				func_271(&(uParam2->f_5[iVar4 /*62*/]), 1);
			}
			break;
	}
}

void func_207(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	vector3 vVar9;
	char* sVar12;
	iVar1 = 5;
	iVar4 = uParam1->f_12;
	iVar5 = (0 + iVar4);
	if (iVar4 < 0 || iVar4 >= 6)
	{
		return;
	}
	sVar12 = func_191(uParam2->f_5[iVar4 /*62*/].f_1);
	iVar2 = func_245(iVar4, uParam2->f_5[iVar4 /*62*/].f_61);
	switch (uParam2->f_5[iVar4 /*62*/].f_3)
	{
		case 0:
			if (uParam2->f_5[iVar4 /*62*/].f_2 > uParam2->f_5[iVar4 /*62*/].f_4)
			{
				if (func_192(uParam0, iVar5, sVar12, "PBL_BetA", 2))
				{
					func_130(uParam0, iVar4, uParam2->f_5[iVar4 /*62*/].f_59, 1);
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_281[func_126(iVar4) /*24*/].f_4))
					{
						func_283(uParam0, iVar4, uParam2->f_5[iVar4 /*62*/].f_58, 1);
					}
					func_284(uParam0, iVar4, 0, &vVar6, &vVar9, 0, 1);
					func_65(uParam0, iVar2);
					func_129(uParam0, iVar2, __LIB_18__::func_522(), vVar6, vVar9, 0, 1);
					func_270(&(uParam2->f_5[iVar4 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (!func_47(uParam0))
			{
				return;
			}
			if (!func_194(uParam0, iVar5))
			{
				return;
			}
			func_130(uParam0, iVar4, uParam2->f_5[iVar4 /*62*/].f_59, 1);
			if (uParam2->f_5[iVar4 /*62*/].f_59 < iVar1)
			{
				iVar1 = uParam2->f_5[iVar4 /*62*/].f_59;
			}
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, iVar1);
			if (uParam2->f_5[iVar4 /*62*/].f_58 < uParam2->f_389)
			{
				iVar0 = (uParam2->f_389 - uParam2->f_5[iVar4 /*62*/].f_58);
			}
			uParam2->f_5[iVar4 /*62*/].f_58 = (uParam2->f_5[iVar4 /*62*/].f_58 + iVar0);
			uParam2->f_5[iVar4 /*62*/].f_59 = (uParam2->f_5[iVar4 /*62*/].f_59 - iVar0);
			iVar3 = __LIB_12__::func_253(0, iVar0, 10);
			iVar3 = __LIB_0__::func_309(iVar3, 1, 4);
			__LIB_19__::func_230(uParam0->f_281[iVar2 /*24*/].f_4, iVar3, 4);
			func_287(uParam0, iVar2, 1);
			func_280(uParam0, iVar5, iVar2, func_288((44 + uParam2->f_5[iVar4 /*62*/].f_61)), 0);
			func_197(uParam0, iVar5, &(uParam0->f_106[iVar4 /*29*/]), "Seat_01");
			func_195(uParam0, uParam2->f_378, &vVar6);
			func_196(uParam0, uParam2->f_378, &vVar9);
			if (func_198(uParam0, iVar5, uParam0->f_3, vVar9))
			{
				func_270(&(uParam2->f_5[iVar4 /*62*/]), 1);
				func_294(uParam0, uParam1->f_11);
			}
			break;
		case 2:
			if (__LIB_12__::func_242(&(uParam0->f_106[iVar4 /*29*/]), "ChipsDown"))
			{
				func_270(&(uParam2->f_5[iVar4 /*62*/]), 1);
				return;
			}
			if (!func_291(uParam0, iVar5, "BetA"))
			{
				func_270(&(uParam2->f_5[iVar4 /*62*/]), 1);
			}
			break;
		case 3:
			if (uParam2->f_5[iVar4 /*62*/].f_2 > 0.01f)
			{
				vVar6 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_281[iVar2 /*24*/].f_4, true, false) };
				vVar9 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_281[iVar2 /*24*/].f_4, 2) };
				func_292(uParam0, iVar4, uParam2->f_5[iVar4 /*62*/].f_58, vVar6, vVar9, 1);
				func_65(uParam0, iVar2);
				uParam2->f_5[iVar4 /*62*/].f_56 = 1;
				func_271(&(uParam2->f_5[iVar4 /*62*/]), 1);
			}
			break;
	}
}

void func_208(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	char* sVar8;
	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar8 = func_191(uParam2->f_5[iVar6 /*62*/].f_1);
	switch (uParam2->f_5[iVar6 /*62*/].f_3)
	{
		case 0:
			if (uParam2->f_5[iVar6 /*62*/].f_2 > uParam2->f_5[iVar6 /*62*/].f_4)
			{
				if (func_192(uParam0, iVar7, sVar8, "PBL_PickupCards", 2))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_280(uParam0, iVar7, (32 + iVar6), func_288(32), 0);
				func_280(uParam0, iVar7, (38 + iVar6), func_288(38), 0);
				func_197(uParam0, iVar7, uParam1, "Seat_01");
				func_195(uParam0, uParam1->f_12, &vVar3);
				func_196(uParam0, uParam1->f_12, &vVar0);
				if (func_198(uParam0, iVar7, vVar3, vVar0))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
				}
			}
			break;
		case 2:
			if (func_291(uParam0, iVar7, "PickupCards"))
			{
				func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
			}
			break;
		case 3:
			if (!func_291(uParam0, iVar7, "PickupCards") || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				func_271(&(uParam2->f_5[iVar6 /*62*/]), 1);
			}
			break;
	}
}

void func_209(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	char* sVar8;
	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar8 = func_191(uParam2->f_5[iVar6 /*62*/].f_1);
	switch (uParam2->f_5[iVar6 /*62*/].f_3)
	{
		case 0:
			if (uParam2->f_5[iVar6 /*62*/].f_2 > uParam2->f_5[iVar6 /*62*/].f_4)
			{
				if (func_192(uParam0, iVar7, sVar8, "PBL_PickupCardsDealer", 2))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_280(uParam0, iVar7, (32 + iVar6), func_288(32), 0);
				func_280(uParam0, iVar7, (38 + iVar6), func_288(38), 0);
				func_197(uParam0, iVar7, uParam1, "Seat_01");
				func_195(uParam0, uParam1->f_12, &vVar3);
				func_196(uParam0, uParam1->f_12, &vVar0);
				if (func_198(uParam0, iVar7, vVar3, vVar0))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
				}
			}
			break;
		case 2:
			if (func_291(uParam0, iVar7, "PickupCardsDealer"))
			{
				func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
			}
			break;
		case 3:
			if (func_291(uParam0, iVar7, "HoldCardsLoopA") || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				func_271(&(uParam2->f_5[iVar6 /*62*/]), 1);
			}
			break;
	}
}

void func_210(var uParam0, var uParam1, var uParam2)
{
	var uVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	char* sVar11;
	iVar9 = uParam1->f_12;
	iVar10 = (0 + iVar9);
	if (iVar9 < 0 || iVar9 >= 6)
	{
		return;
	}
	sVar11 = func_191(uParam2->f_5[iVar9 /*62*/].f_1);
	switch (uParam2->f_5[iVar9 /*62*/].f_3)
	{
		case 0:
			if (uParam2->f_5[iVar9 /*62*/].f_2 > uParam2->f_5[iVar9 /*62*/].f_4)
			{
				if (func_192(uParam0, iVar10, sVar11, "PBL_Flop", 2))
				{
					iVar6 = 0;
					while (iVar6 < 3)
					{
						iVar7 = (25 + iVar6);
						if (func_279(&iVar8, uParam2->f_392[iVar6 /*2*/], iLocal_0, 0))
						{
							func_131(uParam0, iVar7, iVar8, 0, 1);
						}
						iVar6++;
					}
					func_270(&(uParam2->f_5[iVar9 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar10) && func_47(uParam0))
			{
				iVar6 = 0;
				while (iVar6 < 3)
				{
					iVar7 = (25 + iVar6);
					func_280(uParam0, iVar10, iVar7, func_288(iVar7), 0);
					iVar6++;
				}
				iVar7 = 24;
				func_280(uParam0, iVar10, iVar7, func_288(iVar7), 0);
				func_197(uParam0, iVar10, &(uParam0->f_106[iVar9 /*29*/]), "Seat_01");
				func_195(uParam0, uParam1->f_12, &uVar0);
				func_196(uParam0, uParam1->f_12, &vVar3);
				if (func_198(uParam0, iVar10, uParam0->f_3, vVar3))
				{
					func_270(&(uParam2->f_5[iVar9 /*62*/]), 1);
					if (__LIB_1__::func_985())
					{
						func_295(uParam0, uParam1->f_11);
					}
				}
			}
			break;
		case 2:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				uParam2->f_380 = 1;
				func_138(&(uParam2->f_5[iVar9 /*62*/]), 1, 0, 0);
				return;
			}
			if (__LIB_12__::func_242(uParam1, "ActionDone"))
			{
				uParam2->f_380 = 1;
				func_271(&(uParam2->f_5[iVar9 /*62*/]), 1);
				return;
			}
			if (!func_291(uParam0, iVar10, "HoldCardsLoopA"))
			{
				func_270(&(uParam2->f_5[iVar9 /*62*/]), 1);
			}
			break;
		case 3:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				uParam2->f_380 = 1;
				func_138(&(uParam2->f_5[iVar9 /*62*/]), 1, 0, 0);
				return;
			}
			if (func_291(uParam0, iVar10, "HoldCardsLoopA"))
			{
				uParam2->f_380 = 1;
				func_271(&(uParam2->f_5[iVar9 /*62*/]), 1);
			}
			break;
	}
}

void func_211(var uParam0, var uParam1, var uParam2)
{
	var uVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	char* sVar10;
	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar10 = func_191(uParam2->f_5[iVar6 /*62*/].f_1);
	switch (uParam2->f_5[iVar6 /*62*/].f_3)
	{
		case 0:
			if (uParam2->f_5[iVar6 /*62*/].f_2 > uParam2->f_5[iVar6 /*62*/].f_4)
			{
				if (func_192(uParam0, iVar7, sVar10, "PBL_Turn", 2))
				{
					iVar8 = 28;
					if (func_279(&iVar9, uParam2->f_392[3 /*2*/], iLocal_0, 0))
					{
						func_131(uParam0, iVar8, iVar9, 0, 1);
					}
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7) && func_47(uParam0))
			{
				iVar8 = 28;
				func_280(uParam0, iVar7, iVar8, func_288(iVar8), 0);
				iVar8 = 24;
				func_280(uParam0, iVar7, iVar8, func_288(iVar8), 0);
				func_197(uParam0, iVar7, &(uParam0->f_106[iVar6 /*29*/]), "Seat_01");
				func_195(uParam0, uParam1->f_12, &uVar0);
				func_196(uParam0, uParam1->f_12, &vVar3);
				if (func_198(uParam0, iVar7, uParam0->f_3, vVar3))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
					if (__LIB_1__::func_985())
					{
						func_295(uParam0, uParam1->f_11);
					}
				}
			}
			break;
		case 2:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				uParam2->f_381 = 1;
				func_138(&(uParam2->f_5[iVar6 /*62*/]), 1, 0, 0);
				return;
			}
			if (__LIB_12__::func_242(uParam1, "ActionDone"))
			{
				uParam2->f_381 = 1;
				func_271(&(uParam2->f_5[iVar6 /*62*/]), 1);
				return;
			}
			if (!func_291(uParam0, iVar7, "HoldCardsLoopA"))
			{
				func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
			}
			break;
		case 3:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				uParam2->f_381 = 1;
				func_138(&(uParam2->f_5[iVar6 /*62*/]), 1, 0, 0);
				return;
			}
			if (func_291(uParam0, iVar7, "HoldCardsLoopA"))
			{
				uParam2->f_381 = 1;
				func_271(&(uParam2->f_5[iVar6 /*62*/]), 1);
			}
			break;
	}
}

void func_212(var uParam0, var uParam1, var uParam2)
{
	var uVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	char* sVar10;
	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar10 = func_191(uParam2->f_5[iVar6 /*62*/].f_1);
	switch (uParam2->f_5[iVar6 /*62*/].f_3)
	{
		case 0:
			if (uParam2->f_5[iVar6 /*62*/].f_2 > uParam2->f_5[iVar6 /*62*/].f_4)
			{
				if (func_192(uParam0, iVar7, sVar10, "PBL_River", 2))
				{
					iVar8 = 29;
					if (func_279(&iVar9, uParam2->f_392[4 /*2*/], iLocal_0, 0))
					{
						func_131(uParam0, iVar8, iVar9, 0, 1);
					}
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7) && func_47(uParam0))
			{
				iVar8 = 29;
				func_280(uParam0, iVar7, iVar8, func_288(iVar8), 0);
				iVar8 = 24;
				func_280(uParam0, iVar7, iVar8, func_288(iVar8), 0);
				func_197(uParam0, iVar7, &(uParam0->f_106[iVar6 /*29*/]), "Seat_01");
				func_195(uParam0, uParam1->f_12, &uVar0);
				func_196(uParam0, uParam1->f_12, &vVar3);
				if (func_198(uParam0, iVar7, uParam0->f_3, vVar3))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
					if (__LIB_1__::func_985())
					{
						func_295(uParam0, uParam1->f_11);
					}
				}
			}
			break;
		case 2:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				uParam2->f_382 = 1;
				func_271(&(uParam2->f_5[iVar6 /*62*/]), 1);
				return;
			}
			if (__LIB_12__::func_242(uParam1, "ActionDone"))
			{
				uParam2->f_382 = 1;
				func_271(&(uParam2->f_5[iVar6 /*62*/]), 1);
				return;
			}
			if (!func_291(uParam0, iVar7, "HoldCardsLoopA"))
			{
				func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
			}
			break;
		case 3:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				uParam2->f_382 = 1;
				func_271(&(uParam2->f_5[iVar6 /*62*/]), 1);
				return;
			}
			if (func_291(uParam0, iVar7, "HoldCardsLoopA"))
			{
				uParam2->f_382 = 1;
				func_271(&(uParam2->f_5[iVar6 /*62*/]), 1);
			}
			break;
	}
}

void func_213(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	iVar7 = uParam1->f_12;
	iVar8 = (0 + iVar7);
	if (iVar7 < 0 || iVar7 >= 6)
	{
		return;
	}
	switch (uParam2->f_5[iVar7 /*62*/].f_3)
	{
		case 0:
			if (uParam2->f_5[iVar7 /*62*/].f_2 > uParam2->f_5[iVar7 /*62*/].f_4)
			{
				uParam2->f_5[iVar7 /*62*/].f_57 = 0;
				if (func_296(uParam0, uParam2->f_378, iVar7))
				{
					func_270(&(uParam2->f_5[iVar7 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar8))
			{
				func_280(uParam0, iVar8, (32 + iVar7), func_288(32), 0);
				func_280(uParam0, iVar8, (38 + iVar7), func_288(38), 0);
				func_197(uParam0, iVar8, &(uParam0->f_106[iVar7 /*29*/]), "Seat_01");
				func_195(uParam0, uParam1->f_12, &vVar1);
				func_196(uParam0, uParam1->f_12, &vVar4);
				if (func_198(uParam0, iVar8, uParam0->f_3, vVar4))
				{
					func_270(&(uParam2->f_5[iVar7 /*62*/]), 1);
				}
			}
			break;
		case 2:
			if (!func_291(uParam0, iVar8, "NoCardsLoopA"))
			{
				func_270(&(uParam2->f_5[iVar7 /*62*/]), 1);
			}
			break;
		case 3:
			if (func_291(uParam0, iVar8, "NoCardsLoopA") || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				iVar0 = (32 + iVar7);
				vVar1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_281[iVar0 /*24*/].f_4, true, false) };
				vVar4 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_281[iVar0 /*24*/].f_4, 2) };
				func_129(uParam0, 30, func_231(30, 0), vVar1, vVar4, 0, 0);
				iVar0 = (38 + iVar7);
				vVar1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_281[iVar0 /*24*/].f_4, true, false) };
				vVar4 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_281[iVar0 /*24*/].f_4, 2) };
				func_129(uParam0, 31, func_231(31, 0), vVar1, vVar4, 0, 0);
				func_270(&(uParam2->f_5[iVar7 /*62*/]), 1);
			}
			break;
		case 4:
			if (func_47(uParam0))
			{
				uParam2->f_5[iVar7 /*62*/].f_57 = 0;
				func_65(uParam0, (32 + iVar7));
				func_65(uParam0, (38 + iVar7));
				func_138(&(uParam2->f_5[iVar7 /*62*/]), 1, 0, 0);
			}
			break;
	}
}

void func_214(var uParam0, var uParam1, var uParam2)
{
	var uVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	switch (uParam2->f_5[iVar6 /*62*/].f_3)
	{
		case 0:
			if (uParam2->f_5[iVar6 /*62*/].f_2 > uParam2->f_5[iVar6 /*62*/].f_4)
			{
				if (func_297(uParam0, iVar6, uParam2->f_378))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_280(uParam0, iVar7, 24, func_288(24), 0);
				func_197(uParam0, iVar7, &(uParam0->f_106[iVar6 /*29*/]), "Seat_01");
				func_195(uParam0, uParam1->f_12, &uVar0);
				func_196(uParam0, uParam1->f_12, &vVar3);
				if (func_198(uParam0, iVar7, uParam0->f_3, vVar3))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
				}
			}
			break;
		case 2:
			if (func_291(uParam0, iVar7, "NoCardsLoopA"))
			{
				func_138(&(uParam2->f_5[iVar6 /*62*/]), 1, 0, 0);
			}
			break;
	}
}

void func_215(var uParam0, var uParam1, var uParam2)
{
	var uVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	char* sVar8;
	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar8 = func_191(uParam2->f_5[iVar6 /*62*/].f_1);
	switch (uParam2->f_5[iVar6 /*62*/].f_3)
	{
		case 0:
			if (uParam2->f_5[iVar6 /*62*/].f_2 > uParam2->f_5[iVar6 /*62*/].f_4)
			{
				if (func_192(uParam0, iVar7, sVar8, "PBL_RecieveDeck", 2))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_280(uParam0, iVar7, 24, func_288(24), 0);
				func_197(uParam0, iVar7, &(uParam0->f_106[iVar6 /*29*/]), "Seat_01");
				func_195(uParam0, uParam1->f_12, &uVar0);
				func_196(uParam0, uParam1->f_12, &vVar3);
				if (func_198(uParam0, iVar7, uParam0->f_3, vVar3))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
				}
			}
			break;
		case 2:
			if ((func_291(uParam0, iVar7, "NoCardsLoopA") || func_291(uParam0, iVar7, "RecieveDeckExit")) || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				if (__LIB_1__::func_985())
				{
					func_298(uParam0, uParam1->f_11);
				}
				func_138(&(uParam2->f_5[iVar6 /*62*/]), 1, 0, 0);
			}
			break;
	}
}

void func_216(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	iVar7 = uParam1->f_12;
	iVar8 = (0 + iVar7);
	if (iVar7 < 0 || iVar7 >= 6)
	{
		return;
	}
	switch (uParam2->f_5[iVar7 /*62*/].f_3)
	{
		case 0:
			uParam2->f_5[iVar7 /*62*/].f_57 = 0;
			if (uParam2->f_5[iVar7 /*62*/].f_2 > uParam2->f_5[iVar7 /*62*/].f_4)
			{
				if (func_299(uParam0, uParam2->f_378, iVar7))
				{
					func_270(&(uParam2->f_5[iVar7 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar8))
			{
				func_280(uParam0, iVar8, (32 + iVar7), func_288(32), 0);
				func_280(uParam0, iVar8, (38 + iVar7), func_288(38), 0);
				func_197(uParam0, iVar8, &(uParam0->f_106[iVar7 /*29*/]), "Seat_01");
				func_195(uParam0, uParam1->f_12, &vVar0);
				func_196(uParam0, uParam1->f_12, &vVar3);
				if (func_198(uParam0, iVar8, vVar0, vVar3))
				{
					func_270(&(uParam2->f_5[iVar7 /*62*/]), 1);
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) == 2)
					{
						func_300(uParam0, uParam1->f_11);
					}
				}
			}
			break;
		case 2:
			if (!func_291(uParam0, iVar8, "NoCardsLoopA"))
			{
				func_270(&(uParam2->f_5[iVar7 /*62*/]), 1);
			}
			break;
		case 3:
			if (func_291(uParam0, iVar8, "NoCardsLoopA") || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				iVar6 = (32 + iVar7);
				vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_281[iVar6 /*24*/].f_4, true, false) };
				vVar3 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_281[iVar6 /*24*/].f_4, 2) };
				func_129(uParam0, 30, func_231(30, 0), vVar0, vVar3, 0, 0);
				iVar6 = (38 + iVar7);
				vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_281[iVar6 /*24*/].f_4, true, false) };
				vVar3 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_281[iVar6 /*24*/].f_4, 2) };
				func_129(uParam0, 31, func_231(31, 0), vVar0, vVar3, 0, 0);
				func_270(&(uParam2->f_5[iVar7 /*62*/]), 1);
			}
			break;
		case 4:
			if (func_47(uParam0))
			{
				uParam2->f_5[iVar7 /*62*/].f_57 = 0;
				MISC::CLEAR_BIT(&(uParam2->f_386), iVar7);
				func_65(uParam0, (32 + iVar7));
				func_65(uParam0, (38 + iVar7));
				func_138(&(uParam2->f_5[iVar7 /*62*/]), 1, 0, 0);
			}
			break;
	}
}

void func_217(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	char* sVar8;
	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar8 = func_191(uParam2->f_5[iVar6 /*62*/].f_1);
	switch (uParam2->f_5[iVar6 /*62*/].f_3)
	{
		case 0:
			if (uParam2->f_5[iVar6 /*62*/].f_2 > uParam2->f_5[iVar6 /*62*/].f_4)
			{
				if (func_192(uParam0, iVar7, sVar8, "PBL_Express_LossA", 2))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_197(uParam0, iVar7, uParam1, "Seat_01");
				func_195(uParam0, uParam1->f_12, &vVar3);
				func_196(uParam0, uParam1->f_12, &vVar0);
				if (func_198(uParam0, iVar7, vVar3, vVar0))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
				}
			}
			break;
		case 2:
			if (func_291(uParam0, iVar7, "NoCardsLoopA") || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				func_138(&(uParam2->f_5[iVar6 /*62*/]), 1, 0, 0);
			}
			break;
	}
}

void func_218(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	char* sVar8;
	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar8 = func_191(uParam2->f_5[iVar6 /*62*/].f_1);
	switch (uParam2->f_5[iVar6 /*62*/].f_3)
	{
		case 0:
			if (uParam2->f_5[iVar6 /*62*/].f_2 > uParam2->f_5[iVar6 /*62*/].f_4)
			{
				if (func_192(uParam0, iVar7, sVar8, "PBL_Express_WinA", 2))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_197(uParam0, iVar7, uParam1, "Seat_01");
				func_195(uParam0, uParam1->f_12, &vVar3);
				func_196(uParam0, uParam1->f_12, &vVar0);
				if (func_198(uParam0, iVar7, vVar3, vVar0))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
				}
			}
			break;
		case 2:
			if (func_291(uParam0, iVar7, "NoCardsLoopA") || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				func_138(&(uParam2->f_5[iVar6 /*62*/]), 1, 0, 0);
			}
			break;
	}
}

void func_219(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	char* sVar8;
	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar8 = func_191(uParam2->f_5[iVar6 /*62*/].f_1);
	switch (uParam2->f_5[iVar6 /*62*/].f_3)
	{
		case 0:
			if (uParam2->f_5[iVar6 /*62*/].f_2 > uParam2->f_5[iVar6 /*62*/].f_4)
			{
				if (func_192(uParam0, iVar7, sVar8, "PBL_RevealLoss", 2))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_280(uParam0, iVar7, (32 + iVar6), func_288(32), 0);
				func_280(uParam0, iVar7, (38 + iVar6), func_288(38), 0);
				func_197(uParam0, iVar7, uParam1, "Seat_01");
				func_195(uParam0, uParam1->f_12, &vVar3);
				func_196(uParam0, uParam1->f_12, &vVar0);
				if (func_198(uParam0, iVar7, vVar3, vVar0))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
					if (__LIB_1__::func_985())
					{
						func_301(uParam0, uParam1->f_11);
					}
				}
			}
			break;
		case 2:
			if (func_291(uParam0, iVar7, "NoCardsLoopA") || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				func_138(&(uParam2->f_5[iVar6 /*62*/]), 1, 0, 0);
			}
			break;
	}
}

void func_220(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	char* sVar8;
	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar8 = func_191(uParam2->f_5[iVar6 /*62*/].f_1);
	switch (uParam2->f_5[iVar6 /*62*/].f_3)
	{
		case 0:
			if (uParam2->f_5[iVar6 /*62*/].f_2 > uParam2->f_5[iVar6 /*62*/].f_4)
			{
				if (func_192(uParam0, iVar7, sVar8, "PBL_RevealWin", 2))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_280(uParam0, iVar7, (32 + iVar6), func_288(32), 0);
				func_280(uParam0, iVar7, (38 + iVar6), func_288(38), 0);
				func_197(uParam0, iVar7, uParam1, "Seat_01");
				func_195(uParam0, uParam1->f_12, &vVar3);
				func_196(uParam0, uParam1->f_12, &vVar0);
				if (func_198(uParam0, iVar7, vVar3, vVar0))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
				}
			}
			break;
		case 2:
			if (func_291(uParam0, iVar7, "NoCardsLoopA") || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				func_138(&(uParam2->f_5[iVar6 /*62*/]), 1, 0, 0);
			}
			break;
	}
}

void func_221(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	iVar2 = uParam1->f_12;
	iVar9 = (0 + iVar2);
	switch (uParam2->f_5[iVar2 /*62*/].f_3)
	{
		case 0:
			uParam2->f_388 = iVar2;
			if (uParam2->f_5[iVar2 /*62*/].f_2 < uParam2->f_5[iVar2 /*62*/].f_4)
			{
				return;
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar1 = (62 + iVar0);
				func_65(uParam0, iVar1);
				if (func_132(uParam0, iVar0))
				{
					func_127(uParam0, iVar0, 0, &vVar3, &vVar6, 0, 1);
					func_302(uParam0, iVar1, __LIB_18__::func_522(), vVar3, vVar6);
					func_283(uParam0, iVar0, uParam2->f_5[iVar2 /*62*/].f_58, 1);
				}
				iVar0++;
			}
			if (func_303(uParam0, iVar2))
			{
				func_270(&(uParam2->f_5[iVar2 /*62*/]), 1);
			}
			break;
		case 1:
			if (func_304(uParam0, uParam2))
			{
				func_270(&(uParam2->f_5[iVar2 /*62*/]), 1);
			}
			break;
		case 2:
			if (func_291(uParam0, iVar9, "TakePotA"))
			{
				func_305(uParam0, uParam1->f_11);
				func_270(&(uParam2->f_5[iVar2 /*62*/]), 1);
			}
			break;
		case 3:
			if (func_291(uParam0, iVar9, "NoCardsLoopA") || func_281(uParam0, iVar9) > 0.5f)
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					iVar1 = func_245(iVar0, 0);
					func_246(uParam0, iVar1, -0.5f);
					iVar1 = (62 + iVar0);
					func_246(uParam0, iVar1, -0.5f);
					uParam2->f_5[iVar0 /*62*/].f_58 = 0;
					iVar0++;
				}
				func_138(&(uParam2->f_5[iVar2 /*62*/]), 1, 0, 0);
			}
			break;
	}
}

void func_222(var uParam0, var uParam1, var uParam2)
{
	var uVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	char* sVar10;
	iVar8 = uParam1->f_12;
	iVar9 = (0 + iVar8);
	if (iVar8 < 0 || iVar8 >= 6)
	{
		return;
	}
	sVar10 = func_191(uParam2->f_5[iVar8 /*62*/].f_1);
	switch (uParam2->f_5[iVar8 /*62*/].f_3)
	{
		case 0:
			if (uParam0->f_2149 == 0)
			{
				func_138(&(uParam2->f_5[iVar8 /*62*/]), 1, 0, 0);
				return;
			}
			if (uParam2->f_5[iVar8 /*62*/].f_2 > uParam2->f_5[iVar8 /*62*/].f_4)
			{
				if (func_192(uParam0, iVar9, sVar10, "PBL_Cleanup", 2))
				{
					func_270(&(uParam2->f_5[iVar8 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar9))
			{
				if (Local_1.f_380)
				{
					iVar6 = 0;
					while (iVar6 < 3)
					{
						iVar7 = (25 + iVar6);
						func_280(uParam0, iVar9, iVar7, func_288(iVar7), 0);
						iVar6++;
					}
				}
				else
				{
					iVar6 = 0;
					while (iVar6 < 3)
					{
						iVar7 = (25 + iVar6);
						func_287(uParam0, iVar7, 0);
						iVar6++;
					}
				}
				if (Local_1.f_381)
				{
					iVar7 = 28;
					func_280(uParam0, iVar9, iVar7, func_288(iVar7), 0);
				}
				else
				{
					iVar7 = 28;
					func_287(uParam0, iVar7, 0);
				}
				if (Local_1.f_382)
				{
					iVar7 = 29;
					func_280(uParam0, iVar9, iVar7, func_288(iVar7), 0);
				}
				else
				{
					iVar7 = 29;
					func_287(uParam0, iVar7, 0);
				}
				iVar7 = 30;
				func_280(uParam0, iVar9, iVar7, func_288(iVar7), 0);
				iVar7 = 31;
				func_280(uParam0, iVar9, iVar7, func_288(iVar7), 0);
				if (uParam2->f_5[iVar8 /*62*/].f_57 == 1)
				{
					func_280(uParam0, iVar9, (32 + iVar8), func_288(32), 0);
					func_280(uParam0, iVar9, (38 + iVar8), func_288(38), 0);
				}
				func_197(uParam0, iVar9, uParam1, "Seat_01");
				func_195(uParam0, uParam1->f_12, &uVar0);
				func_196(uParam0, uParam1->f_12, &vVar3);
				if (func_198(uParam0, iVar9, uParam0->f_3, vVar3))
				{
					func_270(&(uParam2->f_5[iVar8 /*62*/]), 1);
				}
			}
			break;
		case 2:
			if (!func_291(uParam0, iVar9, "NoCardsLoopA"))
			{
				func_270(&(uParam2->f_5[iVar8 /*62*/]), 1);
			}
			break;
		case 3:
			if (func_291(uParam0, iVar9, "NoCardsLoopA") || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				iVar6 = 0;
				while (iVar6 < 7)
				{
					iVar7 = (25 + iVar6);
					func_65(uParam0, iVar7);
					iVar6++;
				}
				iVar6 = 0;
				while (iVar6 < 6)
				{
					iVar7 = (32 + iVar6);
					func_65(uParam0, iVar7);
					iVar7 = (38 + iVar6);
					func_65(uParam0, iVar7);
					iVar6++;
				}
				func_125(uParam0, iVar8);
				uParam2->f_380 = 0;
				uParam2->f_381 = 0;
				uParam2->f_382 = 0;
				uParam0->f_2149 = 0;
				func_138(&(uParam2->f_5[iVar8 /*62*/]), 1, 0, 0);
			}
			break;
	}
}

bool func_226(int iParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6, int iParam7)
{
	vector3 vVar0;
	var uVar3;
	if (!__LIB_1__::func_76(iParam0))
	{
		return false;
	}
	if (!__LIB_1__::func_88(iParam0, iParam5, &vVar0))
	{
		return false;
	}
	*fParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, vVar0) };
	if (iParam7 == 1)
	{
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(*fParam6 + Vector(0.1f, 0f, 0f), &uVar3, false))
		{
			fParam6->f_2 = uVar3;
		}
	}
	return true;
}

int func_230(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bVar0 = true;
	if (iParam2 == 0)
	{
		if (iParam1 == 0)
		{
			vVar1 = { 0.2855f, 0.6374f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, 164.3123f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { 0.6947f, 0.0714f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, 104.3123f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { 0.4092f, -0.5659f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, 44.3123f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { -0.2855f, -0.6374f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, -15.6877f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { -0.6947f, -0.0714f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, -75.6877f };
		}
		else if (iParam1 == 5)
		{
			vVar1 = { -0.4092f, 0.5659f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, -135.6877f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 0)
	{
		vVar1 = { -0.0088f, 0.3252f, 0.8015f };
		vVar4 = { 0f, 0f, 100.3871f };
	}
	else if (iParam1 == 1)
	{
		vVar1 = { 0.2772f, 0.1702f, 0.8015f };
		vVar4 = { 0f, 0f, 40.3871f };
	}
	else if (iParam1 == 2)
	{
		vVar1 = { 0.286f, -0.155f, 0.8015f };
		vVar4 = { 0f, 0f, -19.6129f };
	}
	else if (iParam1 == 3)
	{
		vVar1 = { 0.0088f, -0.3252f, 0.8015f };
		vVar4 = { 0f, 0f, -79.6129f };
	}
	else if (iParam1 == 4)
	{
		vVar1 = { -0.2772f, -0.1702f, 0.8015f };
		vVar4 = { 0f, 0f, -139.6129f };
	}
	else if (iParam1 == 5)
	{
		vVar1 = { -0.286f, 0.155f, 0.8015f };
		vVar4 = { 0f, 0f, 160.3871f };
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	else if (bParam5)
	{
		__LIB_4__::func_883(uParam0->f_3, uParam0->f_6, vVar1, vVar4, uParam3, uParam4);
	}
	else
	{
		*uParam3 = { vVar1 };
		*uParam4 = { vVar4 };
	}
	return 1;
}

int func_231(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	struct<2> Var3;
	iVar0 = iParam0;
	Var3 = 14;
	Var3.f_1 = 2;
	func_279(&uVar2, Var3, iLocal_0, 0);
	switch (iVar0)
	{
		case 24:
			if (__LIB_12__::func_243(&uVar1, iLocal_0))
			{
				return uVar1;
			}
			return joaat("P_CARDSSPLIT01X");
		case 68:
			return __LIB_18__::func_522();
		case 25:
			Var3 = 11;
			Var3.f_1 = 0;
			if (func_279(&uVar1, Var3, iLocal_0, 0))
			{
				return uVar1;
			}
			return uVar2;
		case 26:
			Var3 = 8;
			Var3.f_1 = 2;
			if (func_279(&uVar1, Var3, iLocal_0, 0))
			{
				return uVar1;
			}
			return uVar2;
		case 27:
			Var3 = 3;
			Var3.f_1 = 1;
			if (func_279(&uVar1, Var3, iLocal_0, 0))
			{
				return uVar1;
			}
			return uVar2;
		case 28:
			Var3 = 4;
			Var3.f_1 = 0;
			if (func_279(&uVar1, Var3, iLocal_0, 0))
			{
				return uVar1;
			}
			return uVar2;
		case 29:
			Var3 = 9;
			Var3.f_1 = 3;
			if (func_279(&uVar1, Var3, iLocal_0, 0))
			{
				return uVar1;
			}
			return uVar2;
		case 30:
			return uVar2;
		case 31:
			return uVar2;
		case 32:
			return uVar2;
		case 38:
			return uVar2;
		case 33:
			return uVar2;
		case 39:
			return uVar2;
		case 34:
			return uVar2;
		case 40:
			return uVar2;
		case 35:
			return uVar2;
		case 41:
			return uVar2;
		case 36:
			return uVar2;
		case 42:
			return uVar2;
		case 37:
			return uVar2;
		case 43:
			return uVar2;
		default:
			break;
	}
	return __LIB_18__::func_522();
}

void func_237(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	iVar6 = func_310(iParam1, iParam2);
	if (iVar6 >= uParam0->f_281)
	{
		return;
	}
	func_284(uParam0, iParam1, iParam2, &vVar0, &vVar3, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_281[iVar6 /*24*/].f_4))
	{
		ENTITY::SET_ENTITY_COORDS(uParam0->f_281[iVar6 /*24*/].f_4, vVar0, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(uParam0->f_281[iVar6 /*24*/].f_4, vVar3, 2, true);
		__LIB_12__::func_244(uParam0->f_281[iVar6 /*24*/].f_4, iParam4, iParam5);
		__LIB_12__::func_245(uParam0->f_281[iVar6 /*24*/].f_4, iParam3);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_281[iVar6 /*24*/].f_4, bParam6);
	}
	else
	{
		func_302(uParam0, iVar6, __LIB_18__::func_522(), vVar0, vVar3);
		__LIB_12__::func_244(uParam0->f_281[iVar6 /*24*/].f_4, iParam4, iParam5);
		__LIB_12__::func_245(uParam0->f_281[iVar6 /*24*/].f_4, iParam3);
	}
}

bool func_244(var uParam0, int iParam1, int iParam2)
{
	if (!MISC::IS_BIT_SET(iParam1->f_386, iParam2))
	{
		return false;
	}
	if (!iParam1->f_5[iParam2 /*62*/].f_57)
	{
		return false;
	}
	return func_112(uParam0, iParam2);
}

int func_245(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return (44 + iParam0);
		case 1:
			return (50 + iParam0);
		case 2:
			return (56 + iParam0);
		default:
			break;
	}
	return (44 + iParam0);
}

void func_246(var uParam0, int iParam1, float fParam2)
{
	if (iParam1 < 0 || iParam1 >= 69)
	{
		return;
	}
	if (uParam0->f_281[iParam1 /*24*/] != 5)
	{
		uParam0->f_281[iParam1 /*24*/].f_22 = 0f;
	}
	else
	{
		uParam0->f_281[iParam1 /*24*/].f_22 = fParam2;
	}
}

int func_249(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
		if (iVar1 != iParam1)
		{
			if (uParam0->f_106[iVar1 /*29*/] && uParam0->f_106[iVar1 /*29*/].f_1 == 5)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_250(var uParam0, int iParam1, char* sParam2)
{
	if (uParam0->f_2145 == 0)
	{
		return false;
	}
	return __LIB_1__::func_265(iParam1, sParam2, joaat("SPEECH_PARAMS_ADD_BLIP"), 0, 1, 0, 0, 1);
}

var func_251(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	if (iParam2 == uParam0->f_388)
	{
		func_138(&(uParam0->f_5[iParam2 /*62*/]), 3, iParam3, 0);
		uParam0->f_5[iParam2 /*62*/].f_55 = 3;
		return uParam0->f_5[iParam2 /*62*/].f_55;
	}
	switch (iVar2)
	{
		case 0:
			func_138(&(uParam0->f_5[iParam2 /*62*/]), 3, iParam3, 0);
			uParam0->f_5[iParam2 /*62*/].f_55 = 3;
			return uParam0->f_5[iParam2 /*62*/].f_55;
		case 1:
			func_138(&(uParam0->f_5[iParam2 /*62*/]), 6, iParam3, 0);
			uParam0->f_5[iParam2 /*62*/].f_55 = 0;
			return uParam0->f_5[iParam2 /*62*/].f_55;
		case 2:
			func_138(&(uParam0->f_5[iParam2 /*62*/]), 4, iParam3, 0);
			uParam0->f_5[iParam2 /*62*/].f_55 = 2;
			return uParam0->f_5[iParam2 /*62*/].f_55;
		case 3:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, uParam0, iVar0) && iVar0 != iParam2)
				{
					if (uParam0->f_5[iVar0 /*62*/] != 12 && uParam0->f_5[iVar0 /*62*/] != 11)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
			if (iVar1 >= 2 && iParam2 != uParam0->f_378)
			{
				func_138(&(uParam0->f_5[iParam2 /*62*/]), 11, iParam3, 0);
				uParam0->f_5[iParam2 /*62*/].f_55 = 4;
				return uParam0->f_5[iParam2 /*62*/].f_55;
			}
			break;
	}
	func_138(&(uParam0->f_5[iParam2 /*62*/]), 6, iParam3, 0);
	uParam0->f_5[iParam2 /*62*/].f_55 = 0;
	return uParam0->f_5[iParam2 /*62*/].f_55;
}

bool func_268(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_1938[iParam1 /*29*/] > 4)
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam2))
		{
			return false;
		}
		return ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam2, uParam0->f_1938[iParam1 /*29*/].f_1);
	}
	return false;
}

bool func_269(var uParam0, var uParam1)
{
	if (!uParam0->f_2149)
	{
		return false;
	}
	return (*uParam1 >= 3 && *uParam1 <= 13);
}

void func_270(var uParam0, int iParam1)
{
	uParam0->f_3++;
	uParam0->f_2 = 0f;
	if (iParam1 == 0)
	{
	}
}

void func_271(var uParam0, int iParam1)
{
	uParam0->f_3 = 100;
	uParam0->f_2 = 0f;
	if (iParam1 == 0)
	{
	}
}

void func_277(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 69)
	{
		func_161(uParam0, iVar0, bParam1);
		iVar0++;
	}
}

bool func_278(var uParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_330(uParam0, iParam1) };
	return func_192(uParam0, 6, "SCRIPT@MINI_GAME@POKER@PREPOSTGAME_DEAL", &Var0, 2);
}

bool func_279(int iParam0, struct<2> Param1, int iParam3, bool bParam4)
{
	switch (iParam3)
	{
		case 0:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_C01X_BLA");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_C01X_BLA");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_C01X_BLA");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_C01X_BLA");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_C01X_BLA");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_C01X_BLA");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_C01X_BLA");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_C01X_BLA");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_C01X_BLA");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_C01X_BLA");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_C01X_BLA");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_C01X_BLA");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_C01X_BLA");
							return true;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_D01X_BLA");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_D01X_BLA");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_D01X_BLA");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_D01X_BLA");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_D01X_BLA");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_D01X_BLA");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_D01X_BLA");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_D01X_BLA");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_D01X_BLA");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_D01X_BLA");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_D01X_BLA");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_D01X_BLA");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_D01X_BLA");
							return true;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_H01X_BLA");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_H01X_BLA");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_H01X_BLA");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_H01X_BLA");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_H01X_BLA");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_H01X_BLA");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_H01X_BLA");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_H01X_BLA");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_H01X_BLA");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_H01X_BLA");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_H01X_BLA");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_H01X_BLA");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_H01X_BLA");
							return true;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_S01X_BLA");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_S01X_BLA");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_S01X_BLA");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_S01X_BLA");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_S01X_BLA");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_S01X_BLA");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_S01X_BLA");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_S01X_BLA");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_S01X_BLA");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_S01X_BLA");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_S01X_BLA");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_S01X_BLA");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_S01X_BLA");
							return true;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_C01X_CAMP");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_C01X_CAMP");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_C01X_CAMP");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_C01X_CAMP");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_C01X_CAMP");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_C01X_CAMP");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_C01X_CAMP");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_C01X_CAMP");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_C01X_CAMP");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_C01X_CAMP");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_C01X_CAMP");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_C01X_CAMP");
							return true;
							*iParam0 = joaat("P_CRD_A_C01X_CAMP");
							return true;
							Jump @2103; //curOff = 1365
							switch (Param1)
							{
								case 2:
									*iParam0 = joaat("P_CRD_2_D01X_CAMP");
									return true;
								case 3:
									*iParam0 = joaat("P_CRD_3_D01X_CAMP");
									return true;
								case 4:
									*iParam0 = joaat("P_CRD_4_D01X_CAMP");
									return true;
								case 5:
									*iParam0 = joaat("P_CRD_5_D01X_CAMP");
									return true;
								case 6:
									*iParam0 = joaat("P_CRD_6_D01X_CAMP");
									return true;
								case 7:
									*iParam0 = joaat("P_CRD_7_D01X_CAMP");
									return true;
								case 8:
									*iParam0 = joaat("P_CRD_8_D01X_CAMP");
									return true;
								case 9:
									*iParam0 = joaat("P_CRD_9_D01X_CAMP");
									return true;
								case 10:
									*iParam0 = joaat("P_CRD_10_D01X_CAMP");
									return true;
								case 11:
									*iParam0 = joaat("P_CRD_J_D01X_CAMP");
									return true;
								case 12:
									*iParam0 = joaat("P_CRD_Q_D01X_CAMP");
									return true;
								case 13:
									*iParam0 = joaat("P_CRD_K_D01X_CAMP");
									return true;
								case 14:
									*iParam0 = joaat("P_CRD_A_D01X_CAMP");
									return true;
								default:
									break;
							}
							Jump @2103; //curOff = 1610
							switch (Param1)
							{
								case 2:
									*iParam0 = joaat("P_CRD_2_H01X_CAMP");
									return true;
								case 3:
									*iParam0 = joaat("P_CRD_3_H01X_CAMP");
									return true;
								case 4:
									*iParam0 = joaat("P_CRD_4_H01X_CAMP");
									return true;
								case 5:
									*iParam0 = joaat("P_CRD_5_H01X_CAMP");
									return true;
								case 6:
									*iParam0 = joaat("P_CRD_6_H01X_CAMP");
									return true;
								case 7:
									*iParam0 = joaat("P_CRD_7_H01X_CAMP");
									return true;
								case 8:
									*iParam0 = joaat("P_CRD_8_H01X_CAMP");
									return true;
								case 9:
									*iParam0 = joaat("P_CRD_9_H01X_CAMP");
									return true;
								case 10:
									*iParam0 = joaat("P_CRD_10_H01X_CAMP");
									return true;
								case 11:
									*iParam0 = joaat("P_CRD_J_H01X_CAMP");
									return true;
								case 12:
									*iParam0 = joaat("P_CRD_Q_H01X_CAMP");
									return true;
								case 13:
									*iParam0 = joaat("P_CRD_K_H01X_CAMP");
									return true;
								case 14:
									*iParam0 = joaat("P_CRD_A_H01X_CAMP");
									return true;
								default:
									break;
							}
							Jump @2103; //curOff = 1855
							switch (Param1)
							{
								case 2:
									*iParam0 = joaat("P_CRD_2_S01X_CAMP");
									return true;
								case 3:
									*iParam0 = joaat("P_CRD_3_S01X_CAMP");
									return true;
								case 4:
									*iParam0 = joaat("P_CRD_4_S01X_CAMP");
									return true;
								case 5:
									*iParam0 = joaat("P_CRD_5_S01X_CAMP");
									return true;
								case 6:
									*iParam0 = joaat("P_CRD_6_S01X_CAMP");
									return true;
								case 7:
									*iParam0 = joaat("P_CRD_7_S01X_CAMP");
									return true;
								case 8:
									*iParam0 = joaat("P_CRD_8_S01X_CAMP");
									return true;
								case 9:
									*iParam0 = joaat("P_CRD_9_S01X_CAMP");
									return true;
								case 10:
									*iParam0 = joaat("P_CRD_10_S01X_CAMP");
									return true;
								case 11:
									*iParam0 = joaat("P_CRD_J_S01X_CAMP");
									return true;
								case 12:
									*iParam0 = joaat("P_CRD_Q_S01X_CAMP");
									return true;
								case 13:
									*iParam0 = joaat("P_CRD_K_S01X_CAMP");
									return true;
								case 14:
									*iParam0 = joaat("P_CRD_A_S01X_CAMP");
									return true;
								default:
									break;
							}
							Jump @9231; //curOff = 2103
							switch (Param1.f_1)
							{
								case 3:
									switch (Param1)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_C01X_GK");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_C01X_GK");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_C01X_GK");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_C01X_GK");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_C01X_GK");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_C01X_GK");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_C01X_GK");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_C01X_GK");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_C01X_GK");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_C01X_GK");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_C01X_GK");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_C01X_GK");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_C01X_GK");
											return true;
										default:
											break;
									}
									break;
								case 1:
									switch (Param1)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_D01X_GK");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_D01X_GK");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_D01X_GK");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_D01X_GK");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_D01X_GK");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_D01X_GK");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_D01X_GK");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_D01X_GK");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_D01X_GK");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_D01X_GK");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_D01X_GK");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_D01X_GK");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_D01X_GK");
											return true;
										default:
											break;
									}
									break;
								case 0:
									switch (Param1)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_H01X_GK");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_H01X_GK");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_H01X_GK");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_H01X_GK");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_H01X_GK");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_H01X_GK");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_H01X_GK");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_H01X_GK");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_H01X_GK");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_H01X_GK");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_H01X_GK");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_H01X_GK");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_H01X_GK");
											return true;
										default:
											break;
									}
									break;
								case 2:
									switch (Param1)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_S01X_GK");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_S01X_GK");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_S01X_GK");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_S01X_GK");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_S01X_GK");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_S01X_GK");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_S01X_GK");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_S01X_GK");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_S01X_GK");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_S01X_GK");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_S01X_GK");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_S01X_GK");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_S01X_GK");
											return true;
										default:
											break;
									}
									break;
							}
							Jump @9231; //curOff = 3120
							switch (Param1.f_1)
							{
								case 3:
									switch (Param1)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_C01X_RHO");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_C01X_RHO");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_C01X_RHO");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_C01X_RHO");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_C01X_RHO");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_C01X_RHO");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_C01X_RHO");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_C01X_RHO");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_C01X_RHO");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_C01X_RHO");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_C01X_RHO");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_C01X_RHO");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_C01X_RHO");
											return true;
										default:
											break;
									}
									break;
								case 1:
									switch (Param1)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_D01X_RHO");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_D01X_RHO");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_D01X_RHO");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_D01X_RHO");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_D01X_RHO");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_D01X_RHO");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_D01X_RHO");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_D01X_RHO");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_D01X_RHO");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_D01X_RHO");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_D01X_RHO");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_D01X_RHO");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_D01X_RHO");
											return true;
										default:
											break;
									}
									break;
								case 0:
									switch (Param1)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_H01X_RHO");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_H01X_RHO");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_H01X_RHO");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_H01X_RHO");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_H01X_RHO");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_H01X_RHO");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_H01X_RHO");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_H01X_RHO");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_H01X_RHO");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_H01X_RHO");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_H01X_RHO");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_H01X_RHO");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_H01X_RHO");
											return true;
										default:
											break;
									}
									break;
								case 2:
									switch (Param1)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_S01X_RHO");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_S01X_RHO");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_S01X_RHO");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_S01X_RHO");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_S01X_RHO");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_S01X_RHO");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_S01X_RHO");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_S01X_RHO");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_S01X_RHO");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_S01X_RHO");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_S01X_RHO");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_S01X_RHO");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_S01X_RHO");
											return true;
										default:
											break;
									}
									break;
							}
							Jump @9231; //curOff = 4137
							switch (Param1.f_1)
							{
								case 3:
									switch (Param1)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_C01X_RRS");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_C01X_RRS");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_C01X_RRS");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_C01X_RRS");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_C01X_RRS");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_C01X_RRS");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_C01X_RRS");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_C01X_RRS");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_C01X_RRS");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_C01X_RRS");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_C01X_RRS");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_C01X_RRS");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_C01X_RRS");
											return true;
										default:
											break;
									}
									break;
								case 1:
									switch (Param1)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_D01X_RRS");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_D01X_RRS");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_D01X_RRS");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_D01X_RRS");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_D01X_RRS");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_D01X_RRS");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_D01X_RRS");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_D01X_RRS");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_D01X_RRS");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_D01X_RRS");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_D01X_RRS");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_D01X_RRS");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_D01X_RRS");
											return true;
										default:
											break;
									}
									break;
								case 0:
									switch (Param1)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_H01X_RRS");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_H01X_RRS");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_H01X_RRS");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_H01X_RRS");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_H01X_RRS");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_H01X_RRS");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_H01X_RRS");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_H01X_RRS");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_H01X_RRS");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_H01X_RRS");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_H01X_RRS");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_H01X_RRS");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_H01X_RRS");
											return true;
										default:
											break;
									}
									break;
								case 2:
									switch (Param1)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_S01X_RRS");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_S01X_RRS");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_S01X_RRS");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_S01X_RRS");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_S01X_RRS");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_S01X_RRS");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_S01X_RRS");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_S01X_RRS");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_S01X_RRS");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_S01X_RRS");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_S01X_RRS");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_S01X_RRS");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_S01X_RRS");
											return true;
										default:
											break;
									}
									break;
							}
							Jump @9231; //curOff = 5154
							switch (Param1.f_1)
							{
								case 3:
									switch (Param1)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_C01X_STD_LABASTILLE");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_C01X_STD_LABASTILLE");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_C01X_STD_LABASTILLE");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_C01X_STD_LABASTILLE");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_C01X_STD_LABASTILLE");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_C01X_STD_LABASTILLE");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_C01X_STD_LABASTILLE");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_C01X_STD_LABASTILLE");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_C01X_STD_LABASTILLE");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_C01X_STD_LABASTILLE");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_C01X_STD_LABASTILLE");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_C01X_STD_LABASTILLE");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_C01X_STD_LABASTILLE");
											return true;
										default:
											break;
									}
									break;
								case 1:
									switch (Param1)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_D01X_STD_LABASTILLE");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_D01X_STD_LABASTILLE");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_D01X_STD_LABASTILLE");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_D01X_STD_LABASTILLE");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_D01X_STD_LABASTILLE");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_D01X_STD_LABASTILLE");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_D01X_STD_LABASTILLE");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_D01X_STD_LABASTILLE");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_D01X_STD_LABASTILLE");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_D01X_STD_LABASTILLE");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_D01X_STD_LABASTILLE");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_D01X_STD_LABASTILLE");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_D01X_STD_LABASTILLE");
											return true;
										default:
											break;
									}
									break;
								case 0:
									switch (Param1)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_H01X_STD_LABASTILLE");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_H01X_STD_LABASTILLE");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_H01X_STD_LABASTILLE");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_H01X_STD_LABASTILLE");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_H01X_STD_LABASTILLE");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_H01X_STD_LABASTILLE");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_H01X_STD_LABASTILLE");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_H01X_STD_LABASTILLE");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_H01X_STD_LABASTILLE");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_H01X_STD_LABASTILLE");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_H01X_STD_LABASTILLE");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_H01X_STD_LABASTILLE");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_H01X_STD_LABASTILLE");
											return true;
										default:
											break;
									}
									break;
								case 2:
									switch (Param1)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_S01X_STD_LABASTILLE");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_S01X_STD_LABASTILLE");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_S01X_STD_LABASTILLE");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_S01X_STD_LABASTILLE");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_S01X_STD_LABASTILLE");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_S01X_STD_LABASTILLE");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_S01X_STD_LABASTILLE");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_S01X_STD_LABASTILLE");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_S01X_STD_LABASTILLE");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_S01X_STD_LABASTILLE");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_S01X_STD_LABASTILLE");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_S01X_STD_LABASTILLE");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_S01X_STD_LABASTILLE");
											return true;
										default:
											break;
									}
									break;
							}
							Jump @9231; //curOff = 6171
							switch (Param1.f_1)
							{
								case 3:
									switch (Param1)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_C01X_STD_OPIUM");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_C01X_STD_OPIUM");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_C01X_STD_OPIUM");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_C01X_STD_OPIUM");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_C01X_STD_OPIUM");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_C01X_STD_OPIUM");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_C01X_STD_OPIUM");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_C01X_STD_OPIUM");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_C01X_STD_OPIUM");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_C01X_STD_OPIUM");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_C01X_STD_OPIUM");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_C01X_STD_OPIUM");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_C01X_STD_OPIUM");
											return true;
										default:
											break;
									}
									break;
								case 1:
									switch (Param1)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_D01X_STD_OPIUM");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_D01X_STD_OPIUM");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_D01X_STD_OPIUM");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_D01X_STD_OPIUM");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_D01X_STD_OPIUM");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_D01X_STD_OPIUM");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_D01X_STD_OPIUM");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_D01X_STD_OPIUM");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_D01X_STD_OPIUM");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_D01X_STD_OPIUM");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_D01X_STD_OPIUM");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_D01X_STD_OPIUM");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_D01X_STD_OPIUM");
											return true;
										default:
											break;
									}
									break;
								case 0:
									switch (Param1)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_H01X_STD_OPIUM");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_H01X_STD_OPIUM");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_H01X_STD_OPIUM");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_H01X_STD_OPIUM");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_H01X_STD_OPIUM");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_H01X_STD_OPIUM");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_H01X_STD_OPIUM");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_H01X_STD_OPIUM");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_H01X_STD_OPIUM");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_H01X_STD_OPIUM");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_H01X_STD_OPIUM");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_H01X_STD_OPIUM");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_H01X_STD_OPIUM");
											return true;
										default:
											break;
									}
									break;
								case 2:
									switch (Param1)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_S01X_STD_OPIUM");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_S01X_STD_OPIUM");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_S01X_STD_OPIUM");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_S01X_STD_OPIUM");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_S01X_STD_OPIUM");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_S01X_STD_OPIUM");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_S01X_STD_OPIUM");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_S01X_STD_OPIUM");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_S01X_STD_OPIUM");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_S01X_STD_OPIUM");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_S01X_STD_OPIUM");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_S01X_STD_OPIUM");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_S01X_STD_OPIUM");
											return true;
										default:
											break;
									}
									break;
							}
							Jump @9231; //curOff = 7187
							switch (Param1.f_1)
							{
								case 3:
									switch (Param1)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_C01X_VAL");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_C01X_VAL");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_C01X_VAL");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_C01X_VAL");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_C01X_VAL");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_C01X_VAL");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_C01X_VAL");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_C01X_VAL");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_C01X_VAL");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_C01X_VAL");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_C01X_VAL");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_C01X_VAL");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_C01X_VAL");
											return true;
										default:
											break;
									}
									break;
								case 1:
									switch (Param1)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_D01X_VAL");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_D01X_VAL");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_D01X_VAL");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_D01X_VAL");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_D01X_VAL");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_D01X_VAL");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_D01X_VAL");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_D01X_VAL");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_D01X_VAL");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_D01X_VAL");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_D01X_VAL");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_D01X_VAL");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_D01X_VAL");
											return true;
										default:
											break;
									}
									break;
								case 0:
									switch (Param1)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_H01X_VAL");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_H01X_VAL");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_H01X_VAL");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_H01X_VAL");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_H01X_VAL");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_H01X_VAL");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_H01X_VAL");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_H01X_VAL");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_H01X_VAL");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_H01X_VAL");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_H01X_VAL");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_H01X_VAL");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_H01X_VAL");
											return true;
										default:
											break;
									}
									break;
								case 2:
									switch (Param1)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_S01X_VAL");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_S01X_VAL");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_S01X_VAL");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_S01X_VAL");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_S01X_VAL");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_S01X_VAL");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_S01X_VAL");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_S01X_VAL");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_S01X_VAL");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_S01X_VAL");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_S01X_VAL");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_S01X_VAL");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_S01X_VAL");
											return true;
										default:
											break;
									}
									break;
							}
							Jump @9231; //curOff = 8204
							switch (Param1.f_1)
							{
								case 3:
									switch (Param1)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_C01X_VAN");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_C01X_VAN");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_C01X_VAN");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_C01X_VAN");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_C01X_VAN");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_C01X_VAN");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_C01X_VAN");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_C01X_VAN");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_C01X_VAN");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_C01X_VAN");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_C01X_VAN");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_C01X_VAN");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_C01X_VAN");
											return true;
										default:
											break;
									}
									break;
								case 1:
									switch (Param1)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_D01X_VAN");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_D01X_VAN");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_D01X_VAN");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_D01X_VAN");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_D01X_VAN");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_D01X_VAN");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_D01X_VAN");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_D01X_VAN");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_D01X_VAN");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_D01X_VAN");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_D01X_VAN");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_D01X_VAN");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_D01X_VAN");
											return true;
										default:
											break;
									}
									break;
								case 0:
									switch (Param1)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_H01X_VAN");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_H01X_VAN");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_H01X_VAN");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_H01X_VAN");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_H01X_VAN");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_H01X_VAN");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_H01X_VAN");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_H01X_VAN");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_H01X_VAN");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_H01X_VAN");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_H01X_VAN");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_H01X_VAN");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_H01X_VAN");
											return true;
										default:
											break;
									}
									break;
								case 2:
									switch (Param1)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_S01X_VAN");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_S01X_VAN");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_S01X_VAN");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_S01X_VAN");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_S01X_VAN");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_S01X_VAN");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_S01X_VAN");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_S01X_VAN");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_S01X_VAN");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_S01X_VAN");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_S01X_VAN");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_S01X_VAN");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_S01X_VAN");
											return true;
										default:
											break;
									}
									break;
							}
							Jump @9231; //curOff = 9221
							return false;
							switch (iParam3)
							{
								case 0:
									*iParam0 = joaat("P_CRD_01X_BLA");
									return false;
								case 1:
									*iParam0 = joaat("P_CRD_01X_CAMP");
									return false;
								case 2:
									*iParam0 = joaat("P_CRD_01X_GK");
									return false;
								case 3:
									*iParam0 = joaat("P_CRD_01X_RHO");
									return false;
								case 4:
									*iParam0 = joaat("P_CRD_01X_RRS");
									return false;
								case 5:
									*iParam0 = joaat("P_CRD_01X_STD_LABASTILLE");
									return false;
								case 6:
									*iParam0 = joaat("P_CRD_01X_STD_OPIUM");
									return false;
								case 7:
									*iParam0 = joaat("P_CRD_01X_VAL");
									return false;
								case 8:
									*iParam0 = joaat("P_CRD_01X_VAN");
									return false;
								default:
									break;
							}
							return false;
							if (bParam4)
							{
							}
							return false;
						}
void func_280(var uParam0, int iParam1, int iParam2, char* sParam3, bool bParam4)
{
	struct<4> Var0;
	if (iParam2 < 0 || iParam2 >= 69)
	{
		return;
	}
	if (uParam0->f_1938[iParam1 /*29*/] < 4)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_281[iParam2 /*24*/].f_4))
	{
		return;
	}
	if (uParam0->f_281[iParam2 /*24*/].f_3 != -1 && uParam0->f_281[iParam2 /*24*/].f_3 != uParam0->f_1938[iParam1 /*29*/].f_1)
	{
		func_161(uParam0, iParam2, 0);
	}
	uParam0->f_281[iParam2 /*24*/].f_3 = uParam0->f_1938[iParam1 /*29*/].f_1;
	StringCopy(&(uParam0->f_281[iParam2 /*24*/].f_5), sParam3, 64);
	ENTITY::SET_ENTITY_COLLISION(uParam0->f_281[iParam2 /*24*/].f_4, false, false);
	if (!ENTITY::IS_ENTITY_ATTACHED(uParam0->f_281[iParam2 /*24*/].f_4))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_281[iParam2 /*24*/].f_4, true);
	}
	if (bParam4)
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_1938[iParam1 /*29*/].f_1, sParam3, &Var0, false, 0, 2))
		{
			ENTITY::SET_ENTITY_COORDS(uParam0->f_281[iParam2 /*24*/].f_4, Var0, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(uParam0->f_281[iParam2 /*24*/].f_4, Var0.f_3, 2, true);
		}
	}
	uParam0->f_281[iParam2 /*24*/].f_14 = 1;
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1938[iParam1 /*29*/].f_1, sParam3, uParam0->f_281[iParam2 /*24*/].f_4, 0);
	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_281[iParam2 /*24*/].f_4, true);
}

float func_281(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 7)
	{
		return 0f;
	}
	if (uParam0->f_1938[iParam1 /*29*/] == 5)
	{
		return uParam0->f_1938[iParam1 /*29*/].f_2;
	}
	if (uParam0->f_1938[iParam1 /*29*/] == 6)
	{
		return 1f;
	}
	return 0f;
}

bool func_282(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	iVar0 = 6;
	if (!func_194(uParam0, iVar0))
	{
		return false;
	}
	if (!func_132(uParam0, uParam1->f_378))
	{
		uParam1->f_378 = (uParam1->f_378 + 1 % 6);
		return false;
	}
	iVar9 = (uParam1->f_378 + 1 % 6);
	if (!func_47(uParam0))
	{
		return false;
	}
	uParam1->f_386 = 0;
	uParam1->f_391 = MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 10f);
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_132(uParam0, iVar9))
		{
			sVar2 = func_288((32 + iVar1));
			func_280(uParam0, iVar0, (32 + iVar9), sVar2, 0);
			sVar2 = func_288((38 + iVar1));
			func_280(uParam0, iVar0, (38 + iVar9), sVar2, 0);
			func_130(uParam0, iVar9, uParam1->f_5[iVar9 /*62*/].f_59, 1);
			MISC::SET_BIT(&(uParam1->f_386), iVar9);
			uParam1->f_5[iVar9 /*62*/].f_57 = 0;
		}
		else
		{
			uParam1->f_5[iVar9 /*62*/].f_57 = 0;
		}
		iVar9 = (iVar9 + 1 % 6);
		iVar1++;
	}
	sVar2 = func_288(24);
	func_280(uParam0, iVar0, 24, sVar2, 0);
	func_197(uParam0, iVar0, &(uParam0->f_106[uParam1->f_378 /*29*/]), "Plr");
	func_195(uParam0, uParam1->f_378, &vVar3);
	func_196(uParam0, uParam1->f_378, &vVar6);
	return func_198(uParam0, iVar0, vVar3, vVar6);
}

void func_283(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	iVar0 = __LIB_18__::func_524(iParam2);
	func_332(uParam0, iParam1, iVar0, __LIB_0__::func_259(iParam2, 4), 0, bParam3);
}

int func_284(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bVar0 = true;
	if (iParam1 == 0)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.2469f, 0.657f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.2508f, 0.605f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.2875f, 0.6661f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.3201f, 0.623f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 1)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.4455f, 0.5423f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.3985f, 0.5197f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.4331f, 0.582f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.3795f, 0.5888f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 2)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.6924f, -0.1147f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.6493f, -0.0852f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.7206f, -0.084f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.6996f, -0.0343f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 3)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.2469f, -0.657f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.2508f, -0.605f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.2875f, -0.6661f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.3201f, -0.623f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 4)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.4455f, -0.5423f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.3985f, -0.5197f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.4331f, -0.582f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.3795f, -0.5888f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 5)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.6924f, 0.1147f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.6493f, 0.0852f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.7206f, 0.084f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.6996f, 0.0343f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	if (iParam5 < 0 || iParam5 >= 10)
	{
		return 0;
	}
	if (bParam6)
	{
		__LIB_4__::func_883(uParam0->f_3, uParam0->f_6, vVar1, vVar4, uParam3, uParam4);
	}
	else
	{
		*uParam3 = { vVar1 };
		*uParam4 = { vVar4 };
	}
	uParam3->f_2 = (uParam3->f_2 + (BUILTIN::TO_FLOAT(iParam5) * 0.006f));
	return 1;
}

void func_287(var uParam0, int iParam1, bool bParam2)
{
	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_281[iParam1 /*24*/].f_4, bParam2);
}

char* func_288(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 24:
			return "Deck";
		case 25:
			return "Board_Card_01";
		case 26:
			return "Board_Card_02";
		case 27:
			return "Board_Card_03";
		case 28:
			return "Board_Card_04";
		case 29:
			return "Board_Card_05";
		case 30:
			return "Board_Card_06";
		case 31:
			return "Board_Card_07";
		case 68:
			return "Chips_Prop";
		case 32:
			return "Seat_01_Card_01";
		case 38:
			return "Seat_01_Card_02";
		case 33:
			return "Seat_02_Card_01";
		case 39:
			return "Seat_02_Card_02";
		case 34:
			return "Seat_03_Card_01";
		case 40:
			return "Seat_03_Card_02";
		case 35:
			return "Seat_04_Card_01";
		case 41:
			return "Seat_04_Card_02";
		case 36:
			return "Seat_05_Card_01";
		case 42:
			return "Seat_05_Card_02";
		case 37:
			return "Seat_06_Card_01";
		case 43:
			return "Seat_06_Card_02";
		case 44:
			return "Seat_01_Chips_A";
		case 50:
			return "Seat_01_Chips_B";
		case 56:
			return "Seat_01_Chips_C";
		case 45:
			return "Seat_02_Chips_A";
		case 51:
			return "Seat_02_Chips_B";
		case 57:
			return "Seat_02_Chips_C";
		case 46:
			return "Seat_03_Chips_A";
		case 52:
			return "Seat_03_Chips_B";
		case 58:
			return "Seat_03_Chips_C";
		case 47:
			return "Seat_04_Chips_A";
		case 53:
			return "Seat_04_Chips_B";
		case 59:
			return "Seat_04_Chips_C";
		case 48:
			return "Seat_05_Chips_A";
		case 54:
			return "Seat_05_Chips_B";
		case 60:
			return "Seat_05_Chips_C";
		case 49:
			return "Seat_06_Chips_A";
		case 55:
			return "Seat_06_Chips_B";
		case 61:
			return "Seat_06_Chips_C";
		case 0:
			return "Seat_01_Stack_01";
		case 1:
			return "Seat_01_Stack_02";
		case 2:
			return "Seat_01_Stack_03";
		case 3:
			return "Seat_01_Stack_04";
		case 4:
			return "Seat_02_Stack_01";
		case 5:
			return "Seat_02_Stack_02";
		case 6:
			return "Seat_02_Stack_03";
		case 7:
			return "Seat_02_Stack_04";
		case 8:
			return "Seat_03_Stack_01";
		case 9:
			return "Seat_03_Stack_02";
		case 10:
			return "Seat_03_Stack_03";
		case 11:
			return "Seat_03_Stack_04";
		case 12:
			return "Seat_04_Stack_01";
		case 13:
			return "Seat_04_Stack_02";
		case 14:
			return "Seat_04_Stack_03";
		case 15:
			return "Seat_04_Stack_04";
		case 16:
			return "Seat_05_Stack_01";
		case 17:
			return "Seat_05_Stack_02";
		case 18:
			return "Seat_05_Stack_03";
		case 19:
			return "Seat_05_Stack_04";
		case 20:
			return "Seat_06_Stack_01";
		case 21:
			return "Seat_06_Stack_02";
		case 22:
			return "Seat_06_Stack_03";
		case 23:
			return "Seat_06_Stack_04";
		case 62:
			return "Seat_01_BetStack_A";
		case 63:
			return "Seat_02_BetStack_A";
		case 64:
			return "Seat_03_BetStack_A";
		case 65:
			return "Seat_04_BetStack_A";
		case 66:
			return "Seat_05_BetStack_A";
		case 67:
			return "Seat_06_BetStack_A";
		default:
			break;
	}
	return "";
}

bool func_289(var uParam0, int iParam1)
{
	if (__LIB_1__::func_985())
	{
		return func_250(uParam0, iParam1, "MINIGAME_YES");
	}
	return func_250(uParam0, iParam1, "MINIGAME_PLACE_BID");
}

bool func_291(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 < 0 || iParam1 >= 7)
	{
		return false;
	}
	if (uParam0->f_1938[iParam1 /*29*/] == 5)
	{
		return ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_1938[iParam1 /*29*/].f_1, sParam2, 1);
	}
	return false;
}

void func_292(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9)
{
	int iVar0;
	iVar0 = __LIB_18__::func_524(iParam2);
	func_333(uParam0, iParam1, iVar0, vParam3, vParam6, __LIB_0__::func_259(iParam2, 4), 0, iParam9);
}

bool func_293(var uParam0, int iParam1)
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			return func_250(uParam0, iParam1, "POKER_CALL");
		case 1:
			return func_250(uParam0, iParam1, "MINIGAME_YES");
		case 2:
			return func_250(uParam0, iParam1, "VOCAL_FX_RESPOND");
		default:
			break;
	}
	return false;
}

bool func_294(var uParam0, int iParam1)
{
	if (__LIB_1__::func_985())
	{
		return func_250(uParam0, iParam1, "MINIGAME_RAISE");
	}
	return func_250(uParam0, iParam1, "MINIGAME_PLACE_BID");
}

bool func_295(var uParam0, int iParam1)
{
	return func_250(uParam0, iParam1, "MINIGAME_VOCALFX_DELIBERATING");
}

bool func_296(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	iVar1 = (0 + iParam2);
	iVar2 = (iParam1 - iParam2);
	if (iVar2 < 0)
	{
		iVar2 += 6;
	}
	if (iVar2 >= 6)
	{
		iVar2 = (iVar2 - 6);
	}
	sVar0 = func_191(Local_1.f_5[iParam2 /*62*/].f_1);
	switch (iVar2 + 1)
	{
		case 1:
			return func_192(uParam0, iVar1, sVar0, "PBL_ReturnTo01", 2);
		case 2:
			return func_192(uParam0, iVar1, sVar0, "PBL_ReturnTo02", 2);
		case 3:
			return func_192(uParam0, iVar1, sVar0, "PBL_ReturnTo03", 2);
		case 4:
			return func_192(uParam0, iVar1, sVar0, "PBL_ReturnTo04", 2);
		case 5:
			return func_192(uParam0, iVar1, sVar0, "PBL_ReturnTo05", 2);
		case 6:
			return func_192(uParam0, iVar1, sVar0, "PBL_ReturnTo06", 2);
		default:
			break;
	}
	return false;
}

bool func_297(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	iVar1 = (0 + iParam1);
	iVar2 = (iParam2 - iParam1);
	if (iVar2 < 0)
	{
		iVar2 += 6;
	}
	if (iVar2 >= 6)
	{
		iVar2 = (iVar2 - 6);
	}
	sVar0 = func_191(Local_1.f_5[iParam1 /*62*/].f_1);
	switch (iVar2 + 1)
	{
		case 2:
			return func_192(uParam0, iVar1, sVar0, "PBL_PassDeckTo02", 2);
		case 3:
			return func_192(uParam0, iVar1, sVar0, "PBL_PassDeckTo03", 2);
		case 4:
			return func_192(uParam0, iVar1, sVar0, "PBL_PassDeckTo04", 2);
		case 5:
			return func_192(uParam0, iVar1, sVar0, "PBL_PassDeckTo05", 2);
		case 6:
			return func_192(uParam0, iVar1, sVar0, "PBL_PassDeckTo06", 2);
		default:
			break;
	}
	return false;
}

bool func_298(var uParam0, int iParam1)
{
	return func_250(uParam0, iParam1, "GENERIC_THANKS");
}

bool func_299(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	iVar1 = (0 + iParam2);
	iVar2 = (iParam1 - iParam2);
	if (iVar2 < 0)
	{
		iVar2 += 6;
	}
	if (iVar2 >= 6)
	{
		iVar2 = (iVar2 - 6);
	}
	sVar0 = func_191(Local_1.f_5[iParam2 /*62*/].f_1);
	switch (iVar2 + 1)
	{
		case 1:
			return func_192(uParam0, iVar1, sVar0, "PBL_FoldTo01", 2);
		case 2:
			return func_192(uParam0, iVar1, sVar0, "PBL_FoldTo02", 2);
		case 3:
			return func_192(uParam0, iVar1, sVar0, "PBL_FoldTo03", 2);
		case 4:
			return func_192(uParam0, iVar1, sVar0, "PBL_FoldTo04", 2);
		case 5:
			return func_192(uParam0, iVar1, sVar0, "PBL_FoldTo05", 2);
		case 6:
			return func_192(uParam0, iVar1, sVar0, "PBL_FoldTo06", 2);
		default:
			break;
	}
	return false;
}

bool func_300(var uParam0, int iParam1)
{
	if (__LIB_1__::func_985())
	{
		return func_250(uParam0, iParam1, "POKER_FOLD");
	}
	return func_250(uParam0, iParam1, "MINIGAME_NO");
}

bool func_301(var uParam0, int iParam1)
{
	return func_250(uParam0, iParam1, "MINIGAME_VOCALFX_LOSS_SMALL");
}

void func_302(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6)
{
	uParam0->f_281[iParam1 /*24*/] = 5;
	uParam0->f_281[iParam1 /*24*/].f_16 = { vParam3 };
	uParam0->f_281[iParam1 /*24*/].f_19 = { vParam6 };
	uParam0->f_281[iParam1 /*24*/].f_1 = iParam2;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_281[iParam1 /*24*/].f_4) && ENTITY::GET_ENTITY_MODEL(uParam0->f_281[iParam1 /*24*/].f_4) == iParam2)
	{
		ENTITY::SET_ENTITY_COORDS(uParam0->f_281[iParam1 /*24*/].f_4, uParam0->f_281[iParam1 /*24*/].f_16, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(uParam0->f_281[iParam1 /*24*/].f_4, uParam0->f_281[iParam1 /*24*/].f_19, 2, true);
		uParam0->f_281[iParam1 /*24*/] = 5;
		return;
	}
	STREAMING::REQUEST_MODEL(iParam2, false);
	while (!STREAMING::HAS_MODEL_LOADED(uParam0->f_281[iParam1 /*24*/].f_1))
	{
		BUILTIN::WAIT(0);
	}
	uParam0->f_281[iParam1 /*24*/].f_4 = OBJECT::CREATE_OBJECT(uParam0->f_281[iParam1 /*24*/].f_1, uParam0->f_281[iParam1 /*24*/].f_16, false, true, false, false, true);
	ENTITY::SET_ENTITY_COORDS(uParam0->f_281[iParam1 /*24*/].f_4, uParam0->f_281[iParam1 /*24*/].f_16, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(uParam0->f_281[iParam1 /*24*/].f_4, uParam0->f_281[iParam1 /*24*/].f_19, 2, true);
	uParam0->f_281[iParam1 /*24*/] = 5;
	uParam0->f_281[iParam1 /*24*/].f_23 = 255f;
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_281[iParam1 /*24*/].f_1);
	ENTITY::SET_ENTITY_COLLISION(uParam0->f_281[iParam1 /*24*/].f_4, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_281[iParam1 /*24*/].f_4, true);
}

bool func_303(var uParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	iVar0 = (0 + iParam1);
	sVar1 = func_191(Local_1.f_5[iParam1 /*62*/].f_1);
	return func_192(uParam0, iVar0, sVar1, "PBL_TakePotA", 2);
}

bool func_304(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	vector3 vVar4;
	vector3 vVar7;
	int iVar10;
	iVar2 = uParam1->f_388;
	iVar10 = (0 + uParam1->f_388);
	if (!func_47(uParam0))
	{
		return false;
	}
	if (!func_194(uParam0, iVar10))
	{
		return false;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_132(uParam0, iVar2))
		{
			iVar0 = func_126(iVar2);
			cVar3 = func_288((44 + iVar1));
			func_280(uParam0, iVar10, iVar0, cVar3, 0);
		}
		iVar2 = (iVar2 + 1 % 6);
		iVar1++;
	}
	cVar3 = func_334(0);
	func_197(uParam0, iVar10, &(uParam0->f_106[uParam1->f_388 /*29*/]), cVar3);
	func_195(uParam0, uParam1->f_388, &vVar4);
	func_196(uParam0, uParam1->f_388, &vVar7);
	return func_198(uParam0, iVar10, vVar4, vVar7);
}

bool func_305(var uParam0, int iParam1)
{
	return func_250(uParam0, iParam1, "MINIGAME_VOCALFX_WIN_SMALL");
}

int func_310(int iParam0, int iParam1)
{
	return ((0 + (4 * iParam0)) + iParam1);
}

struct<4> func_330(var uParam0, int iParam1)
{
	int iVar0;
	char cVar1[32];
	int iVar5;
	StringCopy(&cVar1, "PBL_", 32);
	iVar5 = (iParam1 + 1 % 6);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_132(uParam0, iVar5))
		{
			StringIntConCat(&cVar1, iVar0 + 1, 32);
		}
		iVar5 = (iVar5 + 1 % 6);
		iVar0++;
	}
	return cVar1;
}

void func_332(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	iVar6 = func_126(iParam1);
	if (iVar6 >= uParam0->f_281)
	{
		return;
	}
	func_127(uParam0, iParam1, 0, &vVar0, &vVar3, 0, 1);
	func_302(uParam0, iVar6, __LIB_18__::func_522(), vVar0, vVar3);
	__LIB_12__::func_244(uParam0->f_281[iVar6 /*24*/].f_4, iParam3, iParam4);
	__LIB_12__::func_245(uParam0->f_281[iVar6 /*24*/].f_4, iParam2);
	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_281[iVar6 /*24*/].f_4, bParam5);
}

void func_333(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, bool bParam11)
{
	int iVar0;
	iVar0 = func_126(iParam1);
	if (iVar0 >= uParam0->f_281)
	{
		return;
	}
	func_302(uParam0, iVar0, __LIB_18__::func_522(), vParam3, vParam6);
	__LIB_12__::func_244(uParam0->f_281[iVar0 /*24*/].f_4, iParam9, iParam10);
	__LIB_12__::func_245(uParam0->f_281[iVar0 /*24*/].f_4, iParam2);
	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_281[iVar0 /*24*/].f_4, bParam11);
}

char* func_334(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
			return "Seat_01";
		case 1:
			return "Seat_02";
		case 2:
			return "Seat_03";
		case 3:
			return "Seat_04";
		case 4:
			return "Seat_05";
		case 5:
			return "Seat_06";
		case 6:
			return "Plr";
		default:
			break;
	}
	return "";
}

