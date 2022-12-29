#region Local Var
	int iLocal_0 = 0;
	struct<301> Local_1 = { 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_302 = -1;
	var uLocal_303 = 0;
	var uLocal_304 = -1;
	var uLocal_305 = 0;
	struct<2889> Local_306 = { 0, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 92, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 92, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 92, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 92, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 92, -1, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 18, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 1082130432, 0, 0 } ;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
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
		__LIB_1__::func_229(Local_306.f_2);
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 32)
		{
			func_2(0);
		}
		else
		{
			func_3(&Local_306, 0, 0);
			func_2(1);
		}
	}
	func_4(&Local_306, &uScriptParam_0);
	while (Local_306.f_2888 == 0)
	{
		if (func_5(&Local_306))
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
	func_8(&Local_306, bParam0);
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_3(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_94)
	{
		if (bParam2)
		{
			func_9(uParam0, &(uParam0->f_94[iVar0 /*29*/]), 0);
		}
		else
		{
			func_10(uParam0, &(uParam0->f_94[iVar0 /*29*/]), 0, 1, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_2353)
	{
		__LIB_12__::func_247(&(uParam0->f_2353[iVar0 /*29*/]));
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
	while (iVar0 < 5)
	{
		uParam0->f_84[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 18)
	{
		__LIB_7__::func_690(&(uParam0->f_2353[iVar0 /*29*/]), iVar0);
		iVar0++;
	}
	func_19(uParam0);
	uParam0->f_92 = func_20(uParam0);
	PED::_0xED9582B3DA8F02B4(uParam0->f_92);
	__LIB_7__::func_718(uParam0, 0);
}

bool func_5(var uParam0)
{
	int iVar0;
	bool bVar1;
	uParam0->f_15++;
	uParam0->f_2889 = __LIB_1__::func_44(uParam0->f_8);
	if (uParam0->f_1 == 2)
	{
		bVar1 = (uParam0->f_2889 || __LIB_7__::func_699(uParam0->f_1));
	}
	else
	{
		bVar1 = uParam0->f_2889;
	}
	uParam0->f_79 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_3, false);
	uParam0->f_80 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_3, true);
	uParam0->f_2890 = 0;
	uParam0->f_2879 = 0;
	uParam0->f_2880 = (uParam0->f_16 && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == uParam0->f_18);
	uParam0->f_2881 = (func_24(uParam0) || uParam0->f_2880);
	uParam0->f_2878 = CAM::IS_SPHERE_VISIBLE(uParam0->f_3, 2f);
	if (__LIB_7__::func_689(uParam0->f_2))
	{
		uParam0->f_2879 = uParam0->f_80 < 8f;
	}
	else if (uParam0->f_2880)
	{
		uParam0->f_2879 = uParam0->f_80 < 5f;
	}
	if (__LIB_7__::func_689(uParam0->f_2))
	{
		uParam0->f_2879 = uParam0->f_79 < 8f;
	}
	else if (uParam0->f_2881)
	{
		uParam0->f_2879 = uParam0->f_79 < 5f;
	}
	uParam0->f_91 = 0;
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
	uParam0->f_91 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_94[iVar0 /*29*/].f_1 != 0)
		{
			func_30(uParam0, &(uParam0->f_94[iVar0 /*29*/]));
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
				while (iVar0 < 5)
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
				uParam0->f_2887 = 0f;
				__LIB_7__::func_718(uParam0, 4);
			}
			break;
		case 4:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				PED::_0x9851DE7AEC10B4E1(uParam0->f_3, 2f, 1, 0);
				__LIB_7__::func_718(uParam0, 5);
			}
			else if (uParam0->f_91 > 0)
			{
				if (GRAPHICS::_IS_TRACKED_POINT_VALID(uParam0->f_17))
				{
					GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_17);
				}
				uParam0->f_17 = 0;
				__LIB_7__::func_718(uParam0, 6);
			}
			else if (uParam0->f_2 == 9 && uParam0->f_79 > 70f)
			{
				__LIB_7__::func_718(uParam0, 5);
			}
			else if (uParam0->f_2 == 30 && uParam0->f_79 > 18f)
			{
				__LIB_7__::func_718(uParam0, 5);
			}
			else if (uParam0->f_79 > uParam0->f_2886)
			{
				if (GRAPHICS::_IS_TRACKED_POINT_VALID(uParam0->f_17))
				{
					if (GRAPHICS::IS_TRACKED_POINT_VISIBLE(uParam0->f_17))
					{
						uParam0->f_2887 = 0f;
					}
				}
				else if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(ENTITY::GET_ENTITY_MODEL(Global_35), uParam0->f_3, true))
				{
					uParam0->f_2887 = 0f;
				}
				uParam0->f_2887 = (uParam0->f_2887 + MISC::GET_FRAME_TIME());
				if (uParam0->f_2887 > 1f)
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
			while (iVar0 < 5)
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
			if (uParam0->f_79 < 7f)
			{
				func_46(uParam0);
				__LIB_7__::func_718(uParam0, 7);
			}
			else if (uParam0->f_79 < 12f && PED::IS_PED_ON_FOOT(Global_35))
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
				if (uParam0->f_82 == 0)
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
		while (iVar0 < 5)
		{
			func_56(uParam0, uParam0->f_94[iVar0 /*29*/].f_11, 0);
			func_9(uParam0, &(uParam0->f_94[iVar0 /*29*/]), 1);
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			func_57(uParam0, &(uParam0->f_94[iVar0 /*29*/]));
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 18)
	{
		__LIB_12__::func_247(&(uParam0->f_2353[iVar0 /*29*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
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
		if (uParam0->f_2884)
		{
			sVar1 = __LIB_7__::func_691(uParam0);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
			{
				AUDIO::_0x531A78D6BF27014B(sVar1);
				uParam0->f_2884 = 0;
			}
		}
	}
	func_12(uParam0);
	PED::_0x7D4E70A67A651C71(uParam0->f_92);
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
		uParam0->f_84[uParam1->f_12] = -1;
		MISC::CLEAR_BIT(&(uParam0->f_82), uParam1->f_12);
	}
	uParam0->f_81 = (uParam0->f_81 - 1);
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
			uParam0->f_93 = (uParam0->f_93 - 1);
			__LIB_2__::func_426(&(uParam1->f_11));
		}
	}
	if (uParam1->f_12 != -1)
	{
		uParam0->f_84[uParam1->f_12] = -1;
		MISC::CLEAR_BIT(&(uParam0->f_82), uParam1->f_12);
	}
	uParam0->f_81 = (uParam0->f_81 - 1);
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
	while (iVar0 < 88)
	{
		if (uParam0->f_240[iVar0 /*24*/] != 0)
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
	while (iVar0 < 88)
	{
		if (uParam0->f_240[iVar0 /*24*/] != 0)
		{
			func_66(uParam0, iVar0, bParam1);
		}
		iVar0++;
	}
}

void func_19(var uParam0)
{
	int iVar0;
	int iVar1;
	func_67(uParam0, joaat("MINIGAME_BLACKJACK_PLAYER"), 0);
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
	func_69(uParam0);
	func_70(uParam0, 4, 0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_BIT_SET(uParam0->f_83, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		func_70(uParam0, 1, 1);
	}
	func_71(&Local_1);
}

int func_20(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!MISC::IS_BIT_SET(uParam0->f_83, iVar0) && !MISC::IS_BIT_SET(uParam0->f_82, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_24(var uParam0)
{
	if (uParam0->f_2880)
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
	while (iVar0 < 18)
	{
		if (uParam0->f_2353[iVar0 /*29*/] == 2)
		{
			__LIB_12__::func_249(&(uParam0->f_2353[iVar0 /*29*/]), 0);
			Jump @125; //curOff = 43
		}
		else if (uParam0->f_2353[iVar0 /*29*/] == 5)
		{
			uParam0->f_2353[iVar0 /*29*/].f_2 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_2353[iVar0 /*29*/].f_1);
			Jump @125; //curOff = 88
		}
		else if (uParam0->f_2353[iVar0 /*29*/] == 3)
		{
			func_79(uParam0, uParam0->f_2353[iVar0 /*29*/].f_28, 1);
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
		if (uParam0->f_79 > fVar1)
		{
			func_12(uParam0);
			iVar0 = 0;
			while (iVar0 < 5)
			{
				func_9(uParam0, &(uParam0->f_94[iVar0 /*29*/]), 1);
				iVar0++;
			}
			__LIB_1__::func_229(uParam0->f_2);
			return 1;
		}
	}
	if (!uParam0->f_2889)
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
					if (uParam0->f_79 < 10f)
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
	if (uParam0->f_79 < 15f)
	{
		if (uParam0->f_2884 == 0)
		{
			sVar0 = __LIB_7__::func_691(uParam0);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				return;
			}
			AUDIO::_0xD9130842D7226045(sVar0, 1);
			uParam0->f_2884 = 1;
		}
		return;
	}
	if (uParam0->f_79 > 25f)
	{
		if (uParam0->f_2884)
		{
			sVar0 = __LIB_7__::func_691(uParam0);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				return;
			}
			AUDIO::_0x531A78D6BF27014B(sVar0);
			uParam0->f_2884 = 0;
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
	while (iVar0 < 88)
	{
		if (uParam0->f_240[iVar0 /*24*/] == 5 && uParam0->f_240[iVar0 /*24*/].f_22 == 0f)
		{
			Jump @988; //curOff = 57
		}
		else if (uParam0->f_240[iVar0 /*24*/] == 1)
		{
			if (MISC::GET_FRAME_COUNT() > uParam0->f_240[iVar0 /*24*/].f_2)
			{
				uParam0->f_240[iVar0 /*24*/] = 2;
			}
			Jump @988; //curOff = 101
		}
		else if (uParam0->f_240[iVar0 /*24*/] == 2)
		{
			STREAMING::REQUEST_MODEL(uParam0->f_240[iVar0 /*24*/].f_1, false);
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_240[iVar0 /*24*/].f_1))
			{
				if (__LIB_0__::func_86(uParam0->f_240[iVar0 /*24*/].f_16))
				{
					uParam0->f_240[iVar0 /*24*/].f_16 = { uParam0->f_3 - Vector(0.1f, 0f, 0f) };
				}
				uParam0->f_240[iVar0 /*24*/].f_23 = 255f;
				uParam0->f_240[iVar0 /*24*/].f_4 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_240[iVar0 /*24*/].f_1, uParam0->f_240[iVar0 /*24*/].f_16, false, true, false, false);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_240[iVar0 /*24*/].f_4, uParam0->f_240[iVar0 /*24*/].f_19, 2, true);
				uParam0->f_240[iVar0 /*24*/] = 5;
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_240[iVar0 /*24*/].f_1);
				if (uParam0->f_240[iVar0 /*24*/].f_13)
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_240[iVar0 /*24*/].f_4, false);
				}
				if (!DECORATOR::DECOR_EXIST_ON(uParam0->f_240[iVar0 /*24*/].f_4, "MinigameObject"))
				{
					DECORATOR::DECOR_SET_BOOL(uParam0->f_240[iVar0 /*24*/].f_4, "MinigameObject", true);
				}
			}
			Jump @988; //curOff = 370
		}
		else if (uParam0->f_240[iVar0 /*24*/] == 4)
		{
			STREAMING::REQUEST_MODEL(uParam0->f_240[iVar0 /*24*/].f_1, false);
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_240[iVar0 /*24*/].f_1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_240[iVar0 /*24*/].f_4))
				{
					uParam0->f_240[iVar0 /*24*/].f_16 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_240[iVar0 /*24*/].f_4, true, false) };
					uParam0->f_240[iVar0 /*24*/].f_19 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_240[iVar0 /*24*/].f_4, 2) };
					__LIB_1__::func_951(&(uParam0->f_240[iVar0 /*24*/].f_4));
				}
				if (__LIB_0__::func_86(uParam0->f_240[iVar0 /*24*/].f_16))
				{
					uParam0->f_240[iVar0 /*24*/].f_16 = { uParam0->f_3 - Vector(0.1f, 0f, 0f) };
				}
				uParam0->f_240[iVar0 /*24*/].f_4 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_240[iVar0 /*24*/].f_1, uParam0->f_240[iVar0 /*24*/].f_16, false, true, false, false);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_240[iVar0 /*24*/].f_4, uParam0->f_240[iVar0 /*24*/].f_19, 2, true);
				uParam0->f_240[iVar0 /*24*/] = 5;
				uParam0->f_240[iVar0 /*24*/].f_23 = 255f;
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_240[iVar0 /*24*/].f_1);
				if (uParam0->f_240[iVar0 /*24*/].f_13)
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_240[iVar0 /*24*/].f_4, false);
				}
				if (!DECORATOR::DECOR_EXIST_ON(uParam0->f_240[iVar0 /*24*/].f_4, "MinigameObject"))
				{
					DECORATOR::DECOR_SET_BOOL(uParam0->f_240[iVar0 /*24*/].f_4, "MinigameObject", true);
				}
			}
			Jump @988; //curOff = 725
		}
		else if (uParam0->f_240[iVar0 /*24*/] == 5 && uParam0->f_240[iVar0 /*24*/].f_22 != 0f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_240[iVar0 /*24*/].f_4))
			{
				fVar1 = (MISC::GET_FRAME_TIME() / uParam0->f_240[iVar0 /*24*/].f_22);
				uParam0->f_240[iVar0 /*24*/].f_23 = (uParam0->f_240[iVar0 /*24*/].f_23 + (fVar1 * 255f));
				if (uParam0->f_240[iVar0 /*24*/].f_23 <= 0f)
				{
					func_65(uParam0, iVar0);
				}
				else if (uParam0->f_240[iVar0 /*24*/].f_23 >= 255f)
				{
					uParam0->f_240[iVar0 /*24*/].f_23 = 255f;
					ENTITY::RESET_ENTITY_ALPHA(uParam0->f_240[iVar0 /*24*/].f_4);
					uParam0->f_240[iVar0 /*24*/].f_22 = 0f;
				}
				else if (uParam0->f_240[iVar0 /*24*/].f_22 < 0f)
				{
					ENTITY::SET_ENTITY_ALPHA(uParam0->f_240[iVar0 /*24*/].f_4, BUILTIN::FLOOR(uParam0->f_240[iVar0 /*24*/].f_23), true);
				}
				else
				{
					ENTITY::SET_ENTITY_ALPHA(uParam0->f_240[iVar0 /*24*/].f_4, BUILTIN::CEIL(uParam0->f_240[iVar0 /*24*/].f_23), true);
				}
			}
		}
		iVar0++;
	}
}

void func_30(var uParam0, var uParam1)
{
	var uVar0;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	uVar0 = 5;
	iVar10 = 0;
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
			if ((STREAMING::HAS_MODEL_LOADED(uParam1->f_2) && MISC::GET_FRAME_COUNT() > uParam1->f_17) && !uParam0->f_2890)
			{
				uParam1->f_11 = __LIB_1__::func_545(uParam1->f_2, uParam1->f_7, uParam1->f_10, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				ENTITY::SET_ENTITY_HEADING(uParam1->f_11, uParam1->f_10);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam1->f_2);
				uParam1->f_12 = -1;
				__LIB_0__::func_202(uParam1->f_11, 0);
				iVar7 = -1;
				if ((uParam0->f_1 == 2 || (uParam0->f_1 == 0 && uParam1->f_13 != 4)) || uParam0->f_1 == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_11))
					{
						iVar7 = __LIB_7__::func_705(uParam0->f_1, func_93(uParam0));
						iVar10 = __LIB_7__::func_706(uParam1->f_11, uParam0->f_1, uParam0->f_7, iVar7);
					}
				}
				func_96(uParam0, &uVar0, &iVar6);
				if ((uParam0->f_1 == 1 || uParam0->f_1 == 0) || uParam0->f_1 == 2)
				{
					if (__LIB_12__::func_254(uParam1->f_11, uParam0->f_1, iVar10, &uVar0, iVar6, &iVar8))
					{
						AUDIO::SET_AMBIENT_VOICE_NAME(uParam1->f_11, __LIB_4__::func_887(iVar8));
					}
					else if (__LIB_12__::func_255(uParam1->f_11, uParam0->f_1, &uVar0, iVar6, &iVar8))
					{
						AUDIO::SET_AMBIENT_VOICE_NAME(uParam1->f_11, __LIB_4__::func_887(iVar8));
					}
					else
					{
						iVar8 = 92;
					}
				}
				else if (__LIB_12__::func_255(uParam1->f_11, uParam0->f_1, &uVar0, iVar6, &iVar8))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(uParam1->f_11, __LIB_4__::func_887(iVar8));
				}
				else
				{
					iVar8 = 92;
				}
				func_100(uParam0, uParam1, uParam1->f_11, uParam1->f_13, uParam1->f_15, 1, iVar7, iVar8);
				if (uParam1->f_15 && uParam1->f_12 != -1)
				{
					if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_23[uParam1->f_12 /*11*/].f_10))
					{
						TASK::_TASK_USE_SCENARIO_POINT(uParam1->f_11, uParam0->f_23[uParam1->f_12 /*11*/].f_10, &(uParam0->f_23[uParam1->f_12 /*11*/].f_2), 0, false, true, 0, false, -1f, false);
					}
				}
				uParam0->f_2890 = 1;
			}
			break;
		case 3:
			func_101(uParam0, uParam1);
			break;
		case 4:
			if (func_102(uParam0, uParam1) == 1)
			{
				uParam1->f_14 = 0;
				__LIB_7__::func_713(uParam1, 5);
			}
			break;
		case 5:
			uParam0->f_91++;
			if (!PED::IS_PED_INJURED(uParam1->f_11))
			{
				PED::SET_PED_CAN_LEG_IK(uParam1->f_11, false);
			}
			bVar9 = __LIB_12__::func_250(uParam1);
			if (uParam1->f_14 && !bVar9)
			{
				func_105(uParam0, uParam1, 0);
			}
			else
			{
				func_106(uParam0, uParam1);
			}
			uParam1->f_14 = bVar9;
			break;
		case 6:
			func_107(uParam0, uParam1);
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
		return func_111(uParam0, 4);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_111(uParam0, iVar0))
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
	iVar9 = __LIB_7__::func_714(uParam0->f_1, uParam0->f_3, uParam0->f_6, iParam1, 1051931443 /* Float: 0.35f */);
	func_117(uParam0->f_1, uParam0->f_3, uParam0->f_6, iParam1, &vVar0, &fVar6);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar9))
	{
		MISC::SET_BIT(&(uParam0->f_83), iParam1);
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
			if (PED::_0x5C16855277819BBF() < uParam0->f_92)
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
	func_10(uParam0, &(uParam0->f_94[iParam1 /*29*/]), 1, 1, 0, 1);
	if (MISC::IS_BIT_SET(uParam0->f_83, iParam1))
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
	uParam0->f_94[iParam1 /*29*/].f_2 = iParam2;
	func_122(uParam0->f_1, uParam0->f_3, uParam0->f_6, iParam1, 0f, -MISC::GET_RANDOM_FLOAT_IN_RANGE(0.25f, 1.25f), 0f, &(uParam0->f_94[iParam1 /*29*/].f_7), 0);
	uParam0->f_94[iParam1 /*29*/].f_7.f_2 = (uParam0->f_3.f_2 - 0.5f);
	__LIB_12__::func_251(uParam0->f_1, uParam0->f_6, iParam1, &(uParam0->f_94[iParam1 /*29*/].f_10));
	uParam0->f_94[iParam1 /*29*/].f_13 = iParam1;
	uParam0->f_94[iParam1 /*29*/].f_15 = 1;
	uParam0->f_94[iParam1 /*29*/].f_12 = iParam1;
	uParam0->f_84[iParam1] = iParam1;
	uParam0->f_93++;
	MISC::SET_BIT(&(uParam0->f_82), iParam1);
	__LIB_7__::func_713(&(uParam0->f_94[iParam1 /*29*/]), 1);
	if (iParam3 > 0)
	{
		uParam0->f_94[iParam1 /*29*/].f_17 = (MISC::GET_FRAME_COUNT() + iParam3);
	}
	return 1;
}

void func_46(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	func_124(uParam0, &vVar1, &vVar4, 1);
	func_125(uParam0, 62, joaat("P_BLACKJACKCADDY01X"), vVar1, vVar4, 0, 0);
	func_126(uParam0, &vVar1, &vVar4, 1);
	func_125(uParam0, 61, func_127(61, 0), vVar1, vVar4, 0, 0);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_128(uParam0, iVar0, &vVar1, &vVar4, 1);
		func_125(uParam0, (63 + iVar0), __LIB_18__::func_522(), vVar1, vVar4, iVar0, 0);
		iVar0++;
	}
}

bool func_47(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 88)
	{
		if (uParam0->f_240[iVar0 /*24*/] != 0 && uParam0->f_240[iVar0 /*24*/] != 5)
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
	if (Local_1 < 9)
	{
		if (__LIB_1__::func_44(uParam0->f_8))
		{
			__LIB_7__::func_715(&Local_1, 9);
		}
	}
	if (func_111(uParam0, 4))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_7__::func_708(uParam0->f_2, uParam0->f_94[4 /*29*/].f_11);
		}
		else
		{
			__LIB_7__::func_708(uParam0->f_2, 0);
		}
		if (uParam0->f_2885 == 1)
		{
			__LIB_7__::func_715(&Local_1, 7);
			uParam0->f_2885 = 0;
		}
	}
	switch (Local_1)
	{
		case 0:
			__LIB_7__::func_715(&Local_1, 1);
			break;
		case 1:
			if (uParam0->f_2885 == 1)
			{
				return;
			}
			if (!func_111(uParam0, 4))
			{
				return;
			}
			if (func_131(uParam0, 5) <= 1)
			{
				return;
			}
			uParam0->f_2883 = 1;
			func_132(uParam0, uParam0->f_94[4 /*29*/].f_11, "MINIGAME_DEALER_PLACE_BET");
			__LIB_7__::func_715(&Local_1, 2);
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_111(uParam0, iVar0))
				{
					func_133(&(Local_1.f_5[iVar0 /*37*/]), 2, MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 2f), 0);
				}
				iVar0++;
			}
			__LIB_7__::func_715(&Local_1, 3);
			break;
		case 3:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_111(uParam0, iVar0))
				{
					if (!func_134(&(Local_1.f_5[iVar0 /*37*/])))
					{
						return;
					}
				}
				iVar0++;
			}
			__LIB_7__::func_715(&Local_1, 4);
			break;
		case 4:
			if (!func_135(&Local_1, uParam0))
			{
				return;
			}
			__LIB_7__::func_715(&Local_1, 5);
			break;
		case 5:
			func_136(&Local_1, uParam0);
			break;
		case 6:
			func_137(&Local_1, uParam0);
			break;
		case 7:
			func_138(&Local_1, uParam0);
			break;
		case 9:
			func_139(&Local_1, uParam0);
			break;
	}
}

bool func_51(var uParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar5 = __LIB_4__::func_876(uParam0->f_1, iVar0, &uVar1, &uVar2, &iVar3, &iVar4);
		if (!ENTITY::IS_ENTITY_DEAD(iVar5))
		{
			Local_1.f_5[iVar0 /*37*/].f_10 = uVar1;
			func_70(uParam0, iVar0, 0);
			Local_1.f_5[iVar0 /*37*/].f_1 = uVar2;
			func_100(uParam0, &(uParam0->f_94[iVar0 /*29*/]), iVar5, iVar0, 1, 1, iVar3, iVar4);
		}
		iVar0++;
	}
	func_46(uParam0);
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
		while (iVar0 < 5)
		{
			if (!__LIB_7__::func_694(&(uParam0->f_94[iVar0 /*29*/])))
			{
				iVar1 = __LIB_4__::func_876(uParam0->f_1, iVar0, &uVar3, &uVar4, &iVar5, &iVar6);
				if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !DECORATOR::DECOR_EXIST_ON(iVar1, "DontGrabThisPedForMinigame"))
				{
					if (func_100(uParam0, &(uParam0->f_94[iVar0 /*29*/]), iVar1, iVar0, 1, 0, iVar5, iVar6))
					{
						func_70(uParam0, iVar0, 0);
						bVar2 = true;
					}
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!__LIB_7__::func_694(&(uParam0->f_94[iVar0 /*29*/])))
		{
			if (__LIB_4__::func_897(uParam0->f_1, uParam0->f_3, uParam0->f_6, iVar0, &iVar1, 1, 0))
			{
				if (!DECORATOR::DECOR_EXIST_ON(iVar1, "DontGrabThisPedForMinigame"))
				{
					if (func_100(uParam0, &(uParam0->f_94[iVar0 /*29*/]), iVar1, iVar0, 1, 0, -1, 92))
					{
						func_70(uParam0, iVar0, 0);
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
			if (func_148(uParam0, 4))
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
	while (iVar0 < 18)
	{
		if (func_149(uParam0, iVar0))
		{
			if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam1, uParam0->f_2353[iVar0 /*29*/].f_1))
			{
				func_79(uParam0, iVar0, bParam2);
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
	if (iParam2 == 1 && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2353[uParam1->f_20 /*29*/].f_1))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_2353[uParam1->f_20 /*29*/].f_1, &(uParam1->f_21), uParam1->f_11);
	}
	ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_11, false);
	MISC::CLEAR_BIT(&(uParam0->f_2353[uParam1->f_20 /*29*/].f_3), uParam1->f_13);
	if (uParam0->f_2353[uParam1->f_20 /*29*/].f_3 == 0)
	{
		__LIB_7__::func_695(&(uParam0->f_2353[uParam1->f_20 /*29*/]), 3);
	}
	StringCopy(&(uParam1->f_21), "", 64);
	uParam1->f_20 = -1;
}

void func_65(var uParam0, int iParam1)
{
	uParam0->f_240[iParam1 /*24*/] = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_240[iParam1 /*24*/].f_5)) && uParam0->f_240[iParam1 /*24*/].f_3 != -1)
	{
		func_152(uParam0, iParam1, 0);
	}
	uParam0->f_240[iParam1 /*24*/].f_23 = 0f;
	uParam0->f_240[iParam1 /*24*/].f_22 = 0f;
	StringCopy(&(uParam0->f_240[iParam1 /*24*/].f_5), "", 64);
	uParam0->f_240[iParam1 /*24*/].f_3 = -1;
	uParam0->f_240[iParam1 /*24*/].f_14 = 0;
	__LIB_1__::func_951(&(uParam0->f_240[iParam1 /*24*/].f_4));
	uParam0->f_240[iParam1 /*24*/].f_4 = 0;
}

void func_66(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_240[iParam1 /*24*/] = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_240[iParam1 /*24*/].f_5)) && uParam0->f_240[iParam1 /*24*/].f_3 != -1)
	{
		func_152(uParam0, iParam1, bParam2);
	}
	if (bParam2)
	{
		func_153(uParam0, iParam1);
	}
	StringCopy(&(uParam0->f_240[iParam1 /*24*/].f_5), "", 64);
	uParam0->f_240[iParam1 /*24*/].f_3 = -1;
	uParam0->f_240[iParam1 /*24*/].f_23 = 0f;
	if (uParam0->f_240[iParam1 /*24*/].f_15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_240[iParam1 /*24*/].f_4))
		{
			ANIMSCENE::_0xC1193521E3B9FADD(uParam0->f_240[iParam1 /*24*/].f_4, 0);
		}
	}
	uParam0->f_240[iParam1 /*24*/].f_15 = 0;
	uParam0->f_240[iParam1 /*24*/].f_14 = 0;
	__LIB_4__::func_866(&(uParam0->f_240[iParam1 /*24*/].f_4), 1, 1);
	uParam0->f_240[iParam1 /*24*/].f_4 = 0;
}

void func_67(var uParam0, int iParam1, char* sParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_7__::func_709(uParam0, iVar0, iParam1, sParam2);
		iVar0++;
	}
}

void func_69(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = 0;
	iVar1 = 0;
	iVar4 = 5;
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
	uParam0->f_83 = 0;
	iVar2 = 0;
	while (iVar2 < iVar4)
	{
		if (!MISC::IS_BIT_SET(iVar0, iVar2))
		{
			MISC::SET_BIT(&(uParam0->f_83), iVar2);
		}
		iVar2++;
	}
}

void func_70(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MISC::SET_BIT(&(uParam0->f_83), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_83), iParam1);
	}
}

void func_71(int iParam0)
{
	int iVar0;
	__LIB_7__::func_715(iParam0, 0);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iParam0->f_5[iVar0 /*37*/].f_7 = iVar0;
		iParam0->f_5[iVar0 /*37*/].f_8 = 0;
		iParam0->f_5[iVar0 /*37*/].f_9 = 0;
		func_133(&(iParam0->f_5[iVar0 /*37*/]), 1, 0, 0);
		iVar0++;
	}
}

void func_79(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (iParam1 < 0 || iParam1 >= 18)
	{
		return;
	}
	if (uParam0->f_2353[iParam1 /*29*/] > 4)
	{
		iVar0 = 0;
		while (iVar0 < 88)
		{
			if (uParam0->f_240[iVar0 /*24*/].f_3 == uParam0->f_2353[iParam1 /*29*/].f_1)
			{
				func_152(uParam0, iVar0, bParam2);
			}
			iVar0++;
		}
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_2353[iParam1 /*29*/].f_1);
	}
	__LIB_12__::func_247(&(uParam0->f_2353[iParam1 /*29*/]));
}

int func_93(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar2 = 0;
	while (iVar2 < uParam0->f_94)
	{
		if (uParam0->f_94[iVar2 /*29*/])
		{
			iVar1 = uParam0->f_94[iVar2 /*29*/].f_18;
			if (iVar1 != -1)
			{
				MISC::SET_BIT(&iVar0, iVar1);
			}
		}
		iVar2++;
	}
	return iVar0;
}

void func_96(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	*iParam2 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_94)
	{
		if (uParam0->f_94[iVar0 /*29*/])
		{
			(*uParam1)[*iParam2] = uParam0->f_94[iVar0 /*29*/].f_19;
			*iParam2++;
		}
		iVar0++;
	}
}

bool func_100(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
		uParam0->f_84[iParam3] = iParam3;
		MISC::SET_BIT(&(uParam0->f_82), iParam3);
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
	uParam0->f_81++;
	return true;
}

int func_101(var uParam0, var uParam1)
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
			if (uParam0->f_2889)
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
				if (!MISC::IS_BIT_SET(uParam0->f_82, iVar0))
				{
					MISC::SET_BIT(&(uParam0->f_82), iVar0);
					uParam0->f_84[iVar0] = uParam1->f_13;
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
			if (func_177(uParam0, ENTITY::GET_ENTITY_COORDS(uParam1->f_11, true, false), &iVar0))
			{
				MISC::SET_BIT(&(uParam0->f_82), iVar0);
				uParam0->f_84[iVar0] = uParam1->f_13;
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
				if (func_111(uParam0, 4))
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

int func_102(var uParam0, var uParam1)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	char* sVar9;
	iVar8 = (0 + uParam1->f_12);
	switch (uParam1->f_3)
	{
		case 0:
			WEAPON::REMOVE_ALL_PED_WEAPONS(uParam1->f_11, true, true);
			if (Local_1.f_5[uParam1->f_12 /*37*/].f_1 == -1)
			{
				if (__LIB_1__::func_985())
				{
					Local_1.f_5[uParam1->f_12 /*37*/].f_1 = 0;
				}
				else
				{
					Local_1.f_5[uParam1->f_12 /*37*/].f_1 = 1;
				}
			}
			if (uParam1->f_12 != 4)
			{
				Local_1.f_5[uParam1->f_12 /*37*/].f_10 = MISC::GET_RANDOM_INT_IN_RANGE(0, 200);
				func_180(uParam0, uParam1->f_12, Local_1.f_5[uParam1->f_12 /*37*/].f_10);
			}
			else
			{
				iVar7 = 0;
				while (iVar7 < 5)
				{
					func_128(uParam0, iVar7, &vVar1, &vVar4, 1);
					func_125(uParam0, (63 + iVar7), __LIB_18__::func_522(), vVar1, vVar4, iVar7, 0);
					iVar7++;
				}
			}
			if (uParam1->f_12 == 4)
			{
				sVar9 = func_181(iVar8, 0);
			}
			else
			{
				sVar9 = func_182(Local_1.f_5[uParam1->f_12 /*37*/].f_1);
			}
			if (func_183(uParam0, iVar8, sVar9, "PBL_Idle", 2))
			{
				__LIB_12__::func_258(uParam1);
			}
			break;
		case 1:
			if (!func_184(uParam0, iVar8))
			{
				return 0;
			}
			ANIMSCENE::_0x99B2A2E3655DEAF1(uParam1->f_11, "BlackjackSeatedNoCards");
			if (uParam1->f_12 == 4)
			{
				if (ENTITY::_0x0B7CB1300CBFE19C(uParam1->f_11, 1))
				{
					TASK::STOP_ANIM_PLAYBACK(uParam1->f_11, 0, false);
				}
				if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(uParam0->f_240[61 /*24*/].f_4))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_240[61 /*24*/].f_4, uParam1->f_11, PED::GET_PED_BONE_INDEX(uParam0->f_94[4 /*29*/].f_11, 37709), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
				}
				func_185(uParam0, iVar8, uParam1, "DEALER");
				if (!func_186(uParam0, iVar8, uParam0->f_3, 0f, 0f, uParam0->f_6))
				{
					return 0;
				}
			}
			else
			{
				func_185(uParam0, iVar8, uParam1, "pre_postgame_blackjack_player");
				__LIB_18__::func_133(0, uParam0->f_3, uParam0->f_6, uParam1->f_12, &vVar1, &fVar0, 0);
				if (!func_186(uParam0, iVar8, vVar1 + Vector(Local_1.f_300, 0f, 0f), 0f, 0f, fVar0))
				{
					return 0;
				}
			}
			__LIB_12__::func_258(uParam1);
			break;
		case 2:
			if (func_47(uParam0))
			{
				if (uParam1->f_12 != 4)
				{
					func_180(uParam0, uParam1->f_12, Local_1.f_5[uParam1->f_12 /*37*/].f_10);
				}
				else
				{
					__LIB_12__::func_244(uParam0->f_240[63 /*24*/].f_4, 10, 0);
					__LIB_12__::func_245(uParam0->f_240[63 /*24*/].f_4, 1);
					__LIB_12__::func_244(uParam0->f_240[64 /*24*/].f_4, 10, 0);
					__LIB_12__::func_245(uParam0->f_240[64 /*24*/].f_4, 2);
					__LIB_12__::func_244(uParam0->f_240[65 /*24*/].f_4, 8, 0);
					__LIB_12__::func_245(uParam0->f_240[65 /*24*/].f_4, 1);
					__LIB_12__::func_244(uParam0->f_240[66 /*24*/].f_4, 7, 0);
					__LIB_12__::func_245(uParam0->f_240[66 /*24*/].f_4, 2);
					__LIB_12__::func_244(uParam0->f_240[67 /*24*/].f_4, 6, 0);
					__LIB_12__::func_245(uParam0->f_240[67 /*24*/].f_4, 3);
				}
				return 1;
			}
			break;
	}
	return 0;
}

int func_105(var uParam0, var uParam1, bool bParam2)
{
	if (!func_190(uParam0, uParam1->f_11))
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
	if (!uParam0->f_2889)
	{
		DECORATOR::DECOR_SET_BOOL(uParam1->f_11, "DontGrabThisPedForMinigame", true);
	}
	ANIMSCENE::_0xBC781D24AA11F179(uParam1->f_11);
	func_191(uParam0, uParam1->f_12, 1);
	func_192(uParam0, uParam1->f_20, 1);
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

int func_106(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = uParam1->f_12;
	if (uParam0->f_2881 == 0 && uParam0->f_2880 == 0)
	{
		if (uParam0->f_79 > 8f && Local_1.f_5[iVar0 /*37*/].f_5 == 0)
		{
			return 1;
		}
	}
	switch (Local_1.f_5[iVar0 /*37*/])
	{
		case 2:
			func_193(uParam0, uParam1, &Local_1);
			break;
		case 3:
			func_194(uParam0, uParam1, &Local_1);
			break;
		case 4:
			func_195(uParam0, uParam1, &Local_1);
			break;
		case 5:
			func_196(uParam0, uParam1, &Local_1);
			break;
		case 6:
			func_197(uParam0, uParam1, &Local_1);
			break;
		case 7:
			func_198(uParam0, uParam1, &Local_1);
			break;
		case 1:
			func_199(uParam0, uParam1, &Local_1);
			break;
		case 11:
			func_200(uParam0, uParam1, &Local_1);
			break;
		case 10:
			func_201(uParam0, uParam1, &Local_1);
			break;
		case 8:
			func_202(uParam0, uParam1, &Local_1);
			break;
		case 13:
			func_203(uParam0, uParam1, &Local_1);
			break;
		case 14:
			func_204(uParam0, uParam1, &Local_1);
			break;
		case 12:
			func_205(uParam0, uParam1, &Local_1);
			break;
	}
	return 1;
}

int func_107(var uParam0, var uParam1)
{
	switch (uParam1->f_3)
	{
		case 0:
			TASK::CLEAR_PED_TASKS(uParam1->f_11, true, false);
			func_191(uParam0, uParam1->f_12, 0);
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

bool func_111(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_94)
	{
		return false;
	}
	if (uParam0->f_84[iParam1] == -1)
	{
		return false;
	}
	return (uParam0->f_94[uParam0->f_84[iParam1] /*29*/] && uParam0->f_94[uParam0->f_84[iParam1] /*29*/].f_1 == 5);
}

int func_117(int iParam0, vector3 vParam1, var uParam4, int iParam5, float fParam6, int iParam7)
{
	if (!__LIB_4__::func_867(iParam0))
	{
		return 0;
	}
	if (!__LIB_18__::func_133(iParam0, vParam1, uParam4, iParam5, fParam6, iParam7, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		*fParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*fParam6, *iParam7, 0f, 0f, -0.5f) };
	}
	else if (iParam0 == 3)
	{
		*fParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*fParam6, *iParam7, 0f, 0.05f, -0.5f) };
	}
	return 1;
}

int func_122(int iParam0, vector3 vParam1, float fParam4, int iParam5, vector3 vParam6, var uParam9, int iParam10)
{
	vector3 vVar0;
	float fVar3;
	if (!__LIB_1__::func_76(iParam0))
	{
		return 0;
	}
	if (!__LIB_18__::func_133(iParam0, vParam1, fParam4, iParam5, &vVar0, &fVar3, iParam10))
	{
		return 0;
	}
	*uParam9 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar3, vParam6) };
	return 1;
}

int func_124(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bVar0 = true;
	vVar1 = { Vector(79.91527f, 35.75516f, -45.47359f) / Vector(100f, 100f, 100f) };
	vVar4 = { 0f, 0f, -22f };
	if (!bVar0)
	{
		return 0;
	}
	else if (bParam3)
	{
		__LIB_4__::func_883(uParam0->f_3, uParam0->f_6, vVar1, vVar4, uParam1, uParam2);
	}
	else
	{
		*uParam1 = { vVar1 };
		*uParam2 = { vVar4 };
	}
	return 1;
}

void func_125(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10)
{
	uParam0->f_240[iParam1 /*24*/] = 2;
	uParam0->f_240[iParam1 /*24*/].f_16 = { vParam3 };
	uParam0->f_240[iParam1 /*24*/].f_19 = { vParam6 };
	uParam0->f_240[iParam1 /*24*/].f_1 = iParam2;
	uParam0->f_240[iParam1 /*24*/].f_13 = iParam10;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_240[iParam1 /*24*/].f_4))
	{
		if (ENTITY::GET_ENTITY_MODEL(uParam0->f_240[iParam1 /*24*/].f_4) == iParam2)
		{
			if (!__LIB_0__::func_138(uParam0->f_240[iParam1 /*24*/].f_16, ENTITY::GET_ENTITY_COORDS(uParam0->f_240[iParam1 /*24*/].f_4, true, false)))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_240[iParam1 /*24*/].f_4, uParam0->f_240[iParam1 /*24*/].f_16, true, false, false, true);
			}
			ENTITY::SET_ENTITY_ROTATION(uParam0->f_240[iParam1 /*24*/].f_4, uParam0->f_240[iParam1 /*24*/].f_19, 2, true);
			uParam0->f_240[iParam1 /*24*/] = 5;
		}
		else
		{
			uParam0->f_240[iParam1 /*24*/] = 4;
		}
		if (uParam0->f_240[iParam1 /*24*/].f_13)
		{
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_240[iParam1 /*24*/].f_4, false);
		}
		return;
	}
	if (iParam9 > 0)
	{
		uParam0->f_240[iParam1 /*24*/] = 1;
		uParam0->f_240[iParam1 /*24*/].f_2 = (MISC::GET_FRAME_COUNT() + iParam9);
	}
}

int func_126(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bVar0 = true;
	vVar1 = { 0.0537f, 0.3153f, 0.8006f };
	vVar4 = { 0.0247f, -0.0879f, 164.3123f };
	if (!bVar0)
	{
		return 0;
	}
	else if (bParam3)
	{
		__LIB_4__::func_883(uParam0->f_3, uParam0->f_6, vVar1, vVar4, uParam1, uParam2);
	}
	else
	{
		*uParam1 = { vVar1 };
		*uParam2 = { vVar4 };
	}
	return 1;
}

int func_127(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	struct<2> Var2;
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 62:
			return joaat("P_BLACKJACKCADDY01X");
		case 0:
		case 84:
		case 85:
		case 86:
		case 87:
			Var2 = 11;
			Var2.f_1 = 0;
			if (__LIB_4__::func_879(&uVar1, Var2, iLocal_0, 0))
			{
				return uVar1;
			}
			return joaat("P_CRD_01X_BLA");
		case 61:
			if (__LIB_12__::func_243(&uVar1, iLocal_0))
			{
				return uVar1;
			}
			return joaat("P_CARDSSPLIT01X_BLA");
		case 55:
		case 56:
		case 57:
		case 58:
			return __LIB_18__::func_522();
		case 60:
			return __LIB_18__::func_522();
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return __LIB_18__::func_522();
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
			return __LIB_18__::func_522();
		default:
			break;
	}
	return joaat("P_CRD_2_C01X_NEW");
	return 0;
}

int func_128(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bVar0 = true;
	if (iParam1 == 0)
	{
		vVar1 = { Vector(84.27908f, 37.08674f, -34.37373f) / Vector(100f, 100f, 100f) };
		vVar4 = { 90f, 0f, -22f };
	}
	else if (iParam1 == 1)
	{
		vVar1 = { Vector(84.27908f, 38.90664f, -38.96327f) / Vector(100f, 100f, 100f) };
		vVar4 = { 90f, 0f, -22f };
	}
	else if (iParam1 == 2)
	{
		vVar1 = { Vector(84.27908f, 40.71551f, -43.35525f) / Vector(100f, 100f, 100f) };
		vVar4 = { 90f, 0f, -22f };
	}
	else if (iParam1 == 3)
	{
		vVar1 = { Vector(84.27908f, 42.49949f, -47.77074f) / Vector(100f, 100f, 100f) };
		vVar4 = { 90f, 0f, -22f };
	}
	else if (iParam1 == 4)
	{
		vVar1 = { Vector(84.27908f, 44.32357f, -52.2855f) / Vector(100f, 100f, 100f) };
		vVar4 = { 90f, 0f, -22f };
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	if (bParam4)
	{
		__LIB_4__::func_883(uParam0->f_3, uParam0->f_6, vVar1, vVar4, uParam2, uParam3);
	}
	else
	{
		*uParam2 = { vVar1 };
		*uParam3 = { vVar4 };
	}
	return 1;
}

int func_131(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_94)
	{
		if (uParam0->f_94[iVar1 /*29*/] && uParam0->f_94[iVar1 /*29*/].f_1 == iParam1)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_132(var uParam0, int iParam1, char* sParam2)
{
	if (uParam0->f_2879 == 0)
	{
		return false;
	}
	return __LIB_1__::func_265(iParam1, sParam2, joaat("SPEECH_PARAMS_ADD_BLIP"), 0, 1, 0, 0, 1);
}

void func_133(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 == 0)
	{
	}
	*uParam0 = iParam1;
	uParam0->f_5 = 0;
	uParam0->f_6 = iParam2;
	__LIB_1__::func_148(&(uParam0->f_2));
}

bool func_134(var uParam0)
{
	return ((uParam0->f_5 == 100 || *uParam0 == 1) || *uParam0 == 0);
}

bool func_135(var uParam0, var uParam1)
{
	switch (uParam0->f_4)
	{
		case 0:
			func_133(&(Local_1.f_5[4 /*37*/]), 3, 0, 0);
			func_218(uParam0);
			break;
		case 1:
			if (!func_134(&(Local_1.f_5[4 /*37*/])))
			{
				return false;
			}
			func_218(uParam0);
			break;
		case 2:
			return true;
	}
	return false;
}

void func_136(int iParam0, var uParam1)
{
	switch (iParam0->f_4)
	{
		case 0:
			if (!func_219(uParam1, iParam0, iParam0->f_301))
			{
				iParam0->f_301++;
				if (iParam0->f_301 == 4)
				{
					__LIB_7__::func_715(iParam0, 6);
				}
				return;
			}
			iParam0->f_5[iParam0->f_301 /*37*/].f_11 = func_220(iParam0, iParam0->f_301);
			func_218(iParam0);
			break;
		case 1:
			if (!func_134(&(iParam0->f_5[iParam0->f_301 /*37*/])))
			{
				return;
			}
			if (!func_134(&(iParam0->f_5[4 /*37*/])))
			{
				return;
			}
			if (iParam0->f_5[iParam0->f_301 /*37*/].f_11 == 1)
			{
				func_133(&(iParam0->f_5[4 /*37*/]), 4, 0, 0);
			}
			func_218(iParam0);
			break;
		case 2:
			if (!func_134(&(iParam0->f_5[4 /*37*/])))
			{
				return;
			}
			iParam0->f_301++;
			func_221(iParam0, 0);
			if (iParam0->f_301 == 4)
			{
				__LIB_7__::func_715(iParam0, 6);
			}
			break;
	}
}

void func_137(int iParam0, var uParam1)
{
	switch (iParam0->f_4)
	{
		case 0:
			iParam0->f_301 = 4;
			func_133(&(iParam0->f_5[4 /*37*/]), 5, 0, 0);
			func_218(iParam0);
			break;
		case 1:
			if (!func_134(&(iParam0->f_5[4 /*37*/])))
			{
				return;
			}
			iParam0->f_301 = 0;
			if (iParam0->f_5[4 /*37*/].f_12.f_23 > 3)
			{
				__LIB_7__::func_715(iParam0, 7);
			}
			else
			{
				__LIB_7__::func_715(iParam0, 5);
			}
			break;
	}
}

void func_138(int iParam0, var uParam1)
{
	switch (iParam0->f_4)
	{
		case 0:
			if (!func_134(&(iParam0->f_5[4 /*37*/])))
			{
				return;
			}
			iParam0->f_302 = -1;
			func_218(iParam0);
			break;
		case 1:
			iParam0->f_302++;
			if (iParam0->f_302 == 4)
			{
				func_221(iParam0, 3);
			}
			else if (func_111(uParam1, iParam0->f_302))
			{
				func_133(&(iParam0->f_5[4 /*37*/]), 7, 0, 0);
				func_218(iParam0);
			}
			break;
		case 2:
			if (func_134(&(iParam0->f_5[4 /*37*/])))
			{
				func_221(iParam0, 1);
			}
			break;
		case 3:
			func_133(&(iParam0->f_5[4 /*37*/]), 12, 0, 0);
			func_218(iParam0);
			break;
		case 4:
			if (!func_134(&(iParam0->f_5[4 /*37*/])))
			{
				return;
			}
			__LIB_7__::func_715(iParam0, 1);
			break;
	}
}

void func_139(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	switch (iParam0->f_4)
	{
		case 0:
			__LIB_4__::func_812(&Global_1899750, uParam1->f_3 - Vector(2f, 0f, 0f));
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (__LIB_4__::func_897(uParam1->f_1, uParam1->f_3, uParam1->f_6, iVar0, &iVar1, 1, 0))
				{
					if (!__LIB_4__::func_890(iVar1))
					{
						__LIB_4__::func_868(&Global_1899750, iVar1, iVar0, 0);
					}
					PED::SET_PED_CONFIG_FLAG(iVar1, 113, true);
				}
				iVar0++;
			}
			func_224(4);
			__LIB_4__::func_872(0);
			__LIB_4__::func_871(1);
			func_218(iParam0);
			break;
		case 1:
			if (__LIB_4__::func_870() == 2)
			{
				iVar0 = 0;
				while (iVar0 < 5)
				{
					if (uParam1->f_94[iVar0 /*29*/].f_12 != -1)
					{
						__LIB_7__::func_698(uParam1->f_1, uParam1->f_94[iVar0 /*29*/].f_11, iVar0, Local_1.f_5[iVar0 /*37*/].f_10, Local_1.f_5[iVar0 /*37*/].f_1, uParam1->f_94[iVar0 /*29*/].f_18, uParam1->f_94[iVar0 /*29*/].f_19);
					}
					else
					{
						__LIB_7__::func_698(uParam1->f_1, 0, iVar0, 0, 0, 0, 92);
					}
					iVar0++;
				}
				__LIB_4__::func_871(3);
				func_218(iParam0);
			}
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_111(uParam1, iVar0))
				{
					if (!func_134(&(iParam0->f_5[iVar0 /*37*/])))
					{
						return;
					}
				}
				iVar0++;
			}
			if (!func_134(&(iParam0->f_5[4 /*37*/])))
			{
				return;
			}
			iParam0->f_302 = -1;
			func_218(iParam0);
			break;
		case 3:
			iParam0->f_302++;
			if (iParam0->f_302 == 4)
			{
				func_221(iParam0, 5);
			}
			else if (func_111(uParam1, iParam0->f_302))
			{
				func_133(&(iParam0->f_5[4 /*37*/]), 7, 0, 0);
				func_218(iParam0);
			}
			break;
		case 4:
			if (func_134(&(iParam0->f_5[4 /*37*/])))
			{
				func_221(iParam0, 3);
			}
			break;
		case 5:
			func_133(&(Local_1.f_5[4 /*37*/]), 12, 0, 0);
			func_218(iParam0);
			break;
		case 6:
			if (func_134(&(Local_1.f_5[4 /*37*/])))
			{
				__LIB_4__::func_871(4);
				func_218(iParam0);
			}
			break;
		case 7:
			if (__LIB_4__::func_870() == 5)
			{
				func_3(uParam1, 1, 0);
				__LIB_7__::func_718(uParam1, 10);
				func_71(iParam0);
			}
			break;
	}
}

bool func_148(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_94)
	{
		return false;
	}
	if (uParam0->f_84[iParam1] == -1)
	{
		return false;
	}
	return uParam0->f_94[uParam0->f_84[iParam1] /*29*/].f_1 != 0;
}

bool func_149(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 18)
	{
		return false;
	}
	return uParam0->f_2353[iParam1 /*29*/] >= 4;
}

void func_152(var uParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	if (iParam1 < 0 || iParam1 >= 88)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_240[iParam1 /*24*/].f_5)))
	{
		return;
	}
	if (uParam0->f_240[iParam1 /*24*/].f_3 == -1)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_240[iParam1 /*24*/].f_4))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_240[iParam1 /*24*/].f_4, true, false) };
		vVar3 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_240[iParam1 /*24*/].f_4, 2) };
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_240[iParam1 /*24*/].f_3))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_240[iParam1 /*24*/].f_3, &(uParam0->f_240[iParam1 /*24*/].f_5), uParam0->f_240[iParam1 /*24*/].f_4);
		}
		if (uParam0->f_240[iParam1 /*24*/].f_15)
		{
			ANIMSCENE::_0xC1193521E3B9FADD(uParam0->f_240[iParam1 /*24*/].f_4, 0);
			uParam0->f_240[iParam1 /*24*/].f_15 = 0;
		}
		if (bParam2)
		{
			func_153(uParam0, iParam1);
		}
		else if (!ENTITY::IS_ENTITY_ATTACHED(uParam0->f_240[iParam1 /*24*/].f_4))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_240[iParam1 /*24*/].f_4, true);
			ENTITY::SET_ENTITY_COORDS(uParam0->f_240[iParam1 /*24*/].f_4, vVar0, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(uParam0->f_240[iParam1 /*24*/].f_4, vVar3, 2, true);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_240[iParam1 /*24*/].f_4, false, false);
		}
	}
	uParam0->f_240[iParam1 /*24*/].f_3 = -1;
	StringCopy(&(uParam0->f_240[iParam1 /*24*/].f_5), "", 64);
}

void func_153(var uParam0, int iParam1)
{
	ENTITY::SET_ENTITY_COLLISION(uParam0->f_240[iParam1 /*24*/].f_4, true, false);
	if (ENTITY::IS_ENTITY_ATTACHED(uParam0->f_240[iParam1 /*24*/].f_4))
	{
		__LIB_2__::func_919(uParam0->f_240[iParam1 /*24*/].f_4, 1, 1);
	}
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_240[iParam1 /*24*/].f_4, false);
	ENTITY::SET_ENTITY_DYNAMIC(uParam0->f_240[iParam1 /*24*/].f_4, true);
	PHYSICS::ACTIVATE_PHYSICS(uParam0->f_240[iParam1 /*24*/].f_4);
	ENTITY::SET_ENTITY_HAS_GRAVITY(uParam0->f_240[iParam1 /*24*/].f_4, true);
}

bool func_177(var uParam0, vector3 vParam1, var uParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	fVar2 = -1f;
	*uParam4 = -1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!MISC::IS_BIT_SET(uParam0->f_83, iVar0) && !MISC::IS_BIT_SET(uParam0->f_82, iVar0))
		{
			__LIB_1__::func_231(uParam0->f_1, uParam0->f_3, uParam0->f_6, iVar0, &vVar3, 0);
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

void func_180(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1[4];
	var uVar6[4];
	func_241(iParam2, &uVar1, &uVar6, 4, 10);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_242(uParam0, iParam1, iVar0, uVar1[iVar0], uVar6[iVar0], 0);
		iVar0++;
	}
}

char* func_181(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_PLAYER";
		case 4:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_DEALER";
		case 10:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_DEAL";
		case 11:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_RETRIEVE_CARDS";
		case 12:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_RETRIEVE_ORIGINAL_BETS";
		case 5:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_HIT_SEAT_01";
		case 6:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_HIT_SEAT_02";
		case 7:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_HIT_SEAT_03";
		case 8:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_HIT_SEAT_04";
		case 9:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_HIT_SELF";
		case 13:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_CLEANUP";
		case 14:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_OUTCOME_SEAT_01";
		case 15:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_OUTCOME_SEAT_02";
		case 16:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_OUTCOME_SEAT_03";
		case 17:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_OUTCOME_SEAT_04";
		default:
			break;
	}
	return "";
}

char* func_182(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_PLAYER";
		case 1:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_PLAYER_02";
		default:
			break;
	}
	return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_PLAYER";
}

bool func_183(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	if (iParam1 < 0 || iParam1 >= 18)
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return false;
	}
	__LIB_7__::func_695(&(uParam0->f_2353[iParam1 /*29*/]), 1);
	if (uParam0->f_2353[iParam1 /*29*/].f_1 == -1 || !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2353[iParam1 /*29*/].f_1))
	{
		uParam0->f_2353[iParam1 /*29*/].f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam2, iParam4, sParam3, false, true);
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2353[iParam1 /*29*/].f_1))
		{
			return false;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_2353[iParam1 /*29*/].f_1);
	}
	StringCopy(&(uParam0->f_2353[iParam1 /*29*/].f_12), sParam3, 64);
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2353[iParam1 /*29*/].f_1))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
		}
		StringCopy(&(uParam0->f_2353[iParam1 /*29*/].f_4), sParam2, 64);
		__LIB_7__::func_695(&(uParam0->f_2353[iParam1 /*29*/]), 2);
		return true;
	}
	return false;
}

bool func_184(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 18)
	{
		return false;
	}
	return uParam0->f_2353[iParam1 /*29*/] == 4;
}

int func_185(var uParam0, int iParam1, var uParam2, char* sParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(uParam2->f_11))
	{
		return 0;
	}
	if (!func_243(uParam0, iParam1, uParam2->f_11) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uParam2->f_11, -1))
	{
		func_60(uParam0, uParam2, 0);
	}
	if (uParam2->f_1 < 4 || uParam2->f_1 > 5)
	{
		return 0;
	}
	uParam2->f_20 = iParam1;
	StringCopy(&(uParam2->f_21), sParam3, 64);
	MISC::SET_BIT(&(uParam0->f_2353[uParam2->f_20 /*29*/].f_3), uParam2->f_13);
	if (ANIMSCENE::_GET_ANIM_SCENE_PED(uParam0->f_2353[iParam1 /*29*/].f_1, sParam3, false) != uParam2->f_11)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_2353[iParam1 /*29*/].f_1, sParam3, uParam2->f_11, 0);
	}
	return 1;
}

bool func_186(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5)
{
	int iVar0;
	if (iParam1 < 0 || iParam1 >= 18)
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_2353[iParam1 /*29*/].f_1, false))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_2353[iParam1 /*29*/].f_1, vParam2, vParam5, 2);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_2353[iParam1 /*29*/].f_1);
		uParam0->f_2353[iParam1 /*29*/].f_20 = { uParam0->f_2353[iParam1 /*29*/].f_12 };
		StringCopy(&(uParam0->f_2353[iParam1 /*29*/].f_12), "", 64);
		uParam0->f_2353[iParam1 /*29*/].f_2 = 0f;
		iVar0 = 0;
		while (iVar0 < 88)
		{
			if (uParam0->f_240[iVar0 /*24*/].f_14 == 1)
			{
				ANIMSCENE::_0xC1193521E3B9FADD(uParam0->f_240[iVar0 /*24*/].f_4, 1);
				uParam0->f_240[iVar0 /*24*/].f_14 = 0;
				uParam0->f_240[iVar0 /*24*/].f_15 = 1;
			}
			iVar0++;
		}
		__LIB_7__::func_695(&(uParam0->f_2353[iParam1 /*29*/]), 5);
		return true;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2353[iParam1 /*29*/].f_12)))
	{
		if (!ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_2353[iParam1 /*29*/].f_1, &(uParam0->f_2353[iParam1 /*29*/].f_12)))
		{
			return false;
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_2353[iParam1 /*29*/].f_1, &(uParam0->f_2353[iParam1 /*29*/].f_12)))
		{
			return false;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2353[iParam1 /*29*/].f_20)))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_2353[iParam1 /*29*/].f_1, &(uParam0->f_2353[iParam1 /*29*/].f_20));
		}
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_2353[iParam1 /*29*/].f_1, &(uParam0->f_2353[iParam1 /*29*/].f_12), true);
		uParam0->f_2353[iParam1 /*29*/].f_20 = { uParam0->f_2353[iParam1 /*29*/].f_12 };
		StringCopy(&(uParam0->f_2353[iParam1 /*29*/].f_12), "", 64);
		uParam0->f_2353[iParam1 /*29*/].f_2 = 0f;
		iVar0 = 0;
		while (iVar0 < 88)
		{
			if (uParam0->f_240[iVar0 /*24*/].f_14 == 1)
			{
				ANIMSCENE::_0xC1193521E3B9FADD(uParam0->f_240[iVar0 /*24*/].f_4, 1);
				uParam0->f_240[iVar0 /*24*/].f_14 = 0;
			}
			iVar0++;
		}
		__LIB_7__::func_695(&(uParam0->f_2353[iParam1 /*29*/]), 5);
		return true;
	}
	return false;
}

bool func_190(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_94)
	{
		if (uParam0->f_94[iVar0 /*29*/] && uParam0->f_94[iVar0 /*29*/].f_11 == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_191(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == 4)
	{
		if (func_245(uParam0, &Local_1))
		{
			uParam0->f_2885 = 1;
		}
		__LIB_1__::func_229(uParam0->f_2);
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_240[61 /*24*/].f_4))
		{
			__LIB_2__::func_919(uParam0->f_240[61 /*24*/].f_4, 1, 1);
			func_152(uParam0, 61, 1);
			func_13(uParam0, 1);
		}
	}
}

void func_192(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 88)
	{
		if (uParam0->f_240[iVar0 /*24*/].f_3 == uParam0->f_2353[iParam1 /*29*/].f_1)
		{
			func_152(uParam0, iVar0, bParam2);
		}
		iVar0++;
	}
}

void func_193(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	char* sVar9;
	iVar0 = uParam1->f_12;
	iVar1 = (0 + iVar0);
	if (iVar0 < 0 || iVar0 >= 4)
	{
		return;
	}
	switch (uParam2->f_5[iVar0 /*37*/].f_5)
	{
		case 0:
			func_246(&(uParam2->f_5[iVar0 /*37*/]));
			break;
		case 1:
			sVar9 = func_182(uParam2->f_5[iVar0 /*37*/].f_1);
			if (func_183(uParam0, iVar1, sVar9, "PBL_Bet", 2))
			{
				func_246(&(uParam2->f_5[iVar0 /*37*/]));
			}
			break;
		case 2:
			if (__LIB_0__::func_264(&(uParam2->f_5[iVar0 /*37*/].f_2)) < uParam2->f_5[iVar0 /*37*/].f_6)
			{
				return;
			}
			func_247(uParam0, iVar0, 0, &vVar2, &vVar5, 0, 1);
			func_125(uParam0, (55 + iVar0), func_127((55 + iVar0), 0), vVar2, vVar5, 0, 0);
			func_246(&(uParam2->f_5[iVar0 /*37*/]));
			break;
		case 3:
			if (func_248(uParam0, (55 + iVar0)))
			{
				__LIB_19__::func_230(uParam0->f_240[(55 + iVar0) /*24*/].f_4, 5, 4);
				sVar9 = func_182(uParam2->f_5[iVar0 /*37*/].f_1);
				func_246(&(uParam2->f_5[iVar0 /*37*/]));
			}
			break;
		case 4:
			if (!func_184(uParam0, iVar1))
			{
				return;
			}
			func_250(uParam0, iVar1, (55 + iVar0), "PREPOSTGAMECHIPS", 0);
			if (iVar0 == 4)
			{
				func_185(uParam0, iVar1, uParam1, "DEALER");
				if (!func_186(uParam0, iVar1, uParam0->f_3, 0f, 0f, uParam0->f_6))
				{
					return;
				}
			}
			else
			{
				func_185(uParam0, iVar1, uParam1, "pre_postgame_blackjack_player");
				__LIB_18__::func_133(0, uParam0->f_3, uParam0->f_6, iVar0, &vVar2, &fVar8, 0);
				if (!func_186(uParam0, iVar1, vVar2 + Vector(uParam2->f_300, 0f, 0f), 0f, 0f, fVar8))
				{
					return;
				}
			}
			func_132(uParam0, uParam1->f_11, "MINIGAME_PLACE_BID");
			func_246(&(uParam2->f_5[iVar0 /*37*/]));
			break;
		case 5:
			if (func_251(uParam0, iVar1, "S_Idle") || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("ACTIONDONE")))
			{
				uParam2->f_5[iVar0 /*37*/].f_9 = 1;
				func_133(&(uParam2->f_5[iVar0 /*37*/]), 1, 0, 0);
			}
			break;
	}
}

void func_194(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar8;
	char* sVar11;
	var uVar12;
	int iVar14;
	iVar2 = uParam1->f_12;
	iVar3 = 10;
	iVar4 = 4;
	if (iVar2 != 4)
	{
		func_252(&(uParam2->f_5[iVar2 /*37*/]));
		return;
	}
	switch (uParam2->f_5[iVar2 /*37*/].f_5)
	{
		case 0:
			func_246(&(uParam2->f_5[iVar2 /*37*/]));
			break;
		case 1:
			__LIB_4__::func_885(&(uParam2->f_193));
			__LIB_4__::func_888(&(uParam2->f_193));
			iVar0 = 0;
			while (iVar0 < 5)
			{
				__LIB_4__::func_884(&(uParam2->f_5[iVar0 /*37*/].f_12));
				uParam2->f_5[iVar0 /*37*/].f_36 = 0;
				if (func_148(uParam0, iVar0))
				{
					if (__LIB_4__::func_895(&(uParam2->f_193), &uVar12))
					{
						__LIB_12__::func_431(&(uParam2->f_5[iVar0 /*37*/].f_12), &uVar12);
					}
					if (__LIB_4__::func_895(&(uParam2->f_193), &uVar12))
					{
						__LIB_12__::func_431(&(uParam2->f_5[iVar0 /*37*/].f_12), &uVar12);
					}
					uParam2->f_5[iVar0 /*37*/].f_36 = __LIB_17__::func_909(&(uParam2->f_5[iVar0 /*37*/].f_12), -1);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_148(uParam0, iVar0))
				{
					__LIB_4__::func_879(&iVar14, uParam2->f_5[iVar0 /*37*/].f_12[0 /*2*/], iLocal_0, 0);
					iVar1 = (11 + iVar0);
					func_259(uParam0, iVar1, iVar14, iVar0, 1);
					__LIB_4__::func_879(&iVar14, uParam2->f_5[iVar0 /*37*/].f_12[1 /*2*/], iLocal_0, 0);
					iVar1 = (15 + iVar0);
					func_259(uParam0, iVar1, iVar14, iVar0, 1);
				}
				iVar0++;
			}
			__LIB_4__::func_879(&iVar14, uParam2->f_5[4 /*37*/].f_12[0 /*2*/], iLocal_0, 0);
			iVar1 = 0;
			func_259(uParam0, iVar1, iVar14, 4, 1);
			__LIB_4__::func_879(&iVar14, uParam2->f_5[4 /*37*/].f_12[1 /*2*/], iLocal_0, 0);
			iVar1 = 1;
			func_259(uParam0, iVar1, iVar14, 4, 1);
			func_246(&(uParam2->f_5[iVar2 /*37*/]));
			break;
		case 2:
			if (__LIB_0__::func_264(&(uParam2->f_5[iVar2 /*37*/].f_2)) < uParam2->f_5[iVar2 /*37*/].f_6)
			{
				return;
			}
			func_132(uParam0, uParam1->f_11, "MINIGAME_DEALER_CLOSED_BETS");
			sVar11 = func_181(iVar4, 0);
			if (!func_183(uParam0, iVar4, sVar11, "PBL_Shuffle", 2))
			{
				return;
			}
			func_260(uParam0);
			func_126(uParam0, &uVar5, &uVar8, 1);
			uParam2->f_303 = func_261(uParam0, 4);
			func_246(&(uParam2->f_5[iVar2 /*37*/]));
			break;
		case 3:
			if (!func_47(uParam0))
			{
				return;
			}
			if (!func_184(uParam0, iVar4))
			{
				return;
			}
			func_250(uParam0, iVar4, 61, func_262(61), 0);
			func_185(uParam0, iVar4, uParam1, "DEALER");
			if (func_186(uParam0, iVar4, uParam0->f_3, 0f, 0f, uParam0->f_6))
			{
				func_246(&(uParam2->f_5[iVar2 /*37*/]));
			}
			break;
		case 4:
			if (func_263(uParam0, iVar4))
			{
				if (func_260(uParam0))
				{
					func_246(&(uParam2->f_5[iVar2 /*37*/]));
				}
			}
			break;
		case 5:
			if (!func_264(uParam0, uParam2))
			{
				return;
			}
			if (ENTITY::_0x0B7CB1300CBFE19C(uParam1->f_11, 1))
			{
				TASK::STOP_ANIM_PLAYBACK(uParam1->f_11, 0, false);
			}
			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(uParam0->f_240[61 /*24*/].f_4))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_240[61 /*24*/].f_4, uParam1->f_11, PED::GET_PED_BONE_INDEX(uParam1->f_11, 37709), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			}
			func_246(&(uParam2->f_5[iVar2 /*37*/]));
			break;
		case 6:
			if (func_263(uParam0, iVar3))
			{
				func_133(&(uParam2->f_5[iVar2 /*37*/]), 1, 0, 0);
			}
			break;
	}
}

void func_195(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar4;
	int iVar5;
	char* sVar6;
	iVar0 = uParam1->f_12;
	iVar1 = (5 + uParam2->f_301);
	if (iVar0 != 4)
	{
		func_252(&(uParam2->f_5[iVar0 /*37*/]));
		return;
	}
	switch (uParam2->f_5[iVar0 /*37*/].f_5)
	{
		case 0:
			func_246(&(uParam2->f_5[iVar0 /*37*/]));
			break;
		case 1:
			iVar5 = ((11 + (4 * uParam2->f_5[uParam2->f_301 /*37*/].f_12.f_23)) + uParam2->f_301);
			if (__LIB_4__::func_895(&(uParam2->f_193), &Var2))
			{
				__LIB_12__::func_431(&(uParam2->f_5[uParam2->f_301 /*37*/].f_12), &Var2);
				uParam2->f_5[uParam2->f_301 /*37*/].f_36 = __LIB_17__::func_909(&(uParam2->f_5[uParam2->f_301 /*37*/].f_12), -1);
			}
			__LIB_4__::func_879(&iVar4, Var2, iLocal_0, 0);
			func_259(uParam0, iVar5, iVar4, 0, 1);
			func_246(&(uParam2->f_5[iVar0 /*37*/]));
			break;
		case 2:
			if (__LIB_0__::func_264(&(uParam2->f_5[iVar0 /*37*/].f_2)) < uParam2->f_5[iVar0 /*37*/].f_6)
			{
				return;
			}
			func_246(&(uParam2->f_5[iVar0 /*37*/]));
			break;
		case 3:
			iVar5 = ((11 + (4 * (uParam2->f_5[uParam2->f_301 /*37*/].f_12.f_23 - 1))) + uParam2->f_301);
			if (func_248(uParam0, iVar5))
			{
				if (func_265(uParam0, uParam2))
				{
					func_246(&(uParam2->f_5[iVar0 /*37*/]));
				}
			}
			break;
		case 4:
			if (!func_266(uParam0, uParam2))
			{
				return;
			}
			func_246(&(uParam2->f_5[iVar0 /*37*/]));
			break;
		case 5:
			if (func_263(uParam0, iVar1))
			{
				sVar6 = func_267(uParam2->f_5[iVar0 /*37*/].f_36);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
				{
					func_132(uParam0, uParam1->f_11, sVar6);
				}
				if (func_268(&(uParam2->f_5[uParam2->f_301 /*37*/])))
				{
					func_133(&(uParam2->f_5[iVar0 /*37*/]), 1, 0, 0);
					return;
				}
				func_246(&(uParam2->f_5[iVar0 /*37*/]));
			}
			break;
		case 6:
			func_133(&(uParam2->f_5[iVar0 /*37*/]), 1, 0, 0);
			break;
	}
}

void func_196(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar4;
	int iVar5;
	iVar0 = uParam1->f_12;
	iVar1 = 9;
	if (iVar0 != 4 || uParam2->f_5[iVar0 /*37*/].f_12.f_23 > 11)
	{
		func_252(&(uParam2->f_5[iVar0 /*37*/]));
		return;
	}
	switch (uParam2->f_5[iVar0 /*37*/].f_5)
	{
		case 0:
			func_246(&(uParam2->f_5[iVar0 /*37*/]));
			break;
		case 1:
			if (__LIB_0__::func_264(&(uParam2->f_5[iVar0 /*37*/].f_2)) < uParam2->f_5[iVar0 /*37*/].f_6)
			{
				return;
			}
			if (uParam2->f_5[4 /*37*/].f_12.f_23 == 2)
			{
				if (func_269(uParam0))
				{
					func_246(&(uParam2->f_5[iVar0 /*37*/]));
				}
			}
			else
			{
				func_270(&(uParam2->f_5[iVar0 /*37*/]), 4);
			}
			break;
		case 2:
			if (!func_271(uParam0))
			{
				return;
			}
			func_246(&(uParam2->f_5[iVar0 /*37*/]));
			break;
		case 3:
			if (func_263(uParam0, iVar1))
			{
				func_246(&(uParam2->f_5[iVar0 /*37*/]));
			}
			break;
		case 4:
			iVar5 = (0 + uParam2->f_5[4 /*37*/].f_12.f_23);
			if (__LIB_4__::func_895(&(uParam2->f_193), &Var2))
			{
				__LIB_12__::func_431(&(uParam2->f_5[4 /*37*/].f_12), &Var2);
				uParam2->f_5[4 /*37*/].f_36 = __LIB_17__::func_909(&(uParam2->f_5[4 /*37*/].f_12), -1);
			}
			__LIB_4__::func_879(&iVar4, Var2, iLocal_0, 0);
			func_259(uParam0, iVar5, iVar4, 0, 1);
			func_246(&(uParam2->f_5[iVar0 /*37*/]));
			break;
		case 5:
			iVar5 = (0 + (uParam2->f_5[4 /*37*/].f_12.f_23 - 1));
			if (func_248(uParam0, iVar5))
			{
				if (func_272(uParam0, uParam2))
				{
					func_246(&(uParam2->f_5[iVar0 /*37*/]));
				}
			}
			break;
		case 6:
			if (!func_273(uParam0, uParam2))
			{
				return;
			}
			func_246(&(uParam2->f_5[iVar0 /*37*/]));
			break;
		case 7:
			if (func_263(uParam0, iVar1))
			{
				func_133(&(uParam2->f_5[iVar0 /*37*/]), 1, 0, 0);
			}
			break;
	}
}

void func_197(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	int iVar10;
	iVar2 = uParam1->f_12;
	iVar3 = (14 + uParam2->f_302);
	if (iVar2 != 4)
	{
		func_252(&(uParam2->f_5[iVar2 /*37*/]));
		return;
	}
	switch (uParam2->f_5[iVar2 /*37*/].f_5)
	{
		case 0:
			func_246(&(uParam2->f_5[iVar2 /*37*/]));
			break;
		case 1:
			if (func_274(uParam0, uParam2, 0))
			{
				func_246(&(uParam2->f_5[iVar2 /*37*/]));
			}
			break;
		case 2:
			if (!func_275(uParam0, uParam2))
			{
				return;
			}
			func_246(&(uParam2->f_5[iVar2 /*37*/]));
			break;
		case 3:
			if (func_263(uParam0, iVar3))
			{
				func_246(&(uParam2->f_5[iVar2 /*37*/]));
			}
			break;
		case 4:
			if (func_274(uParam0, uParam2, 6))
			{
				func_246(&(uParam2->f_5[iVar2 /*37*/]));
			}
			break;
		case 5:
			if (!func_275(uParam0, uParam2))
			{
				return;
			}
			func_246(&(uParam2->f_5[iVar2 /*37*/]));
			break;
		case 6:
			if (func_263(uParam0, iVar3) || func_276(uParam0, iVar3) > 0.85f)
			{
				iVar0 = func_277(uParam2->f_302, 0);
				vVar4 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_240[iVar0 /*24*/].f_4, true, false) };
				vVar7 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_240[iVar0 /*24*/].f_4, 2) };
				iVar0 = (84 + uParam2->f_302);
				iVar10 = func_127(84, 0);
				func_125(uParam0, iVar0, iVar10, vVar4, vVar7, 0, 0);
				func_246(&(uParam2->f_5[iVar2 /*37*/]));
			}
			break;
		case 7:
			if (func_47(uParam0))
			{
				iVar1 = 0;
				while (iVar1 < 11)
				{
					iVar0 = func_277(uParam2->f_302, iVar1);
					func_65(uParam0, iVar0);
					iVar1++;
				}
				func_278(&(uParam2->f_5[uParam2->f_302 /*37*/]));
				uParam2->f_5[uParam2->f_302 /*37*/].f_9 = 0;
				func_133(&(uParam2->f_5[iVar2 /*37*/]), 1, 0, 0);
			}
			break;
	}
}

void func_198(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	int iVar10;
	iVar2 = uParam1->f_12;
	iVar3 = (14 + uParam2->f_302);
	if (iVar2 != 4)
	{
		func_252(&(uParam2->f_5[iVar2 /*37*/]));
		return;
	}
	if (uParam2->f_5[uParam2->f_302 /*37*/].f_9 == 0)
	{
		func_252(&(uParam2->f_5[iVar2 /*37*/]));
		return;
	}
	if (uParam2->f_5[uParam2->f_302 /*37*/].f_12.f_23 == 0)
	{
		func_252(&(uParam2->f_5[iVar2 /*37*/]));
		return;
	}
	switch (uParam2->f_5[iVar2 /*37*/].f_5)
	{
		case 0:
			func_246(&(uParam2->f_5[iVar2 /*37*/]));
			break;
		case 1:
			if (func_274(uParam0, uParam2, 1))
			{
				func_246(&(uParam2->f_5[iVar2 /*37*/]));
			}
			break;
		case 2:
			if (!func_275(uParam0, uParam2))
			{
				return;
			}
			func_246(&(uParam2->f_5[iVar2 /*37*/]));
			break;
		case 3:
			if (func_263(uParam0, iVar3))
			{
				func_246(&(uParam2->f_5[iVar2 /*37*/]));
			}
			break;
		case 4:
			if (func_274(uParam0, uParam2, 6))
			{
				func_246(&(uParam2->f_5[iVar2 /*37*/]));
			}
			break;
		case 5:
			if (!func_275(uParam0, uParam2))
			{
				return;
			}
			func_246(&(uParam2->f_5[iVar2 /*37*/]));
			break;
		case 6:
			if (func_263(uParam0, iVar3) || func_276(uParam0, iVar3) > 0.85f)
			{
				iVar0 = func_277(uParam2->f_302, 0);
				vVar4 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_240[iVar0 /*24*/].f_4, true, false) };
				vVar7 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_240[iVar0 /*24*/].f_4, 2) };
				iVar0 = (84 + uParam2->f_302);
				iVar10 = func_127(84, 0);
				func_125(uParam0, iVar0, iVar10, vVar4, vVar7, 0, 0);
				func_246(&(uParam2->f_5[iVar2 /*37*/]));
			}
			break;
		case 7:
			if (func_47(uParam0))
			{
				iVar1 = 0;
				while (iVar1 < 11)
				{
					iVar0 = func_277(uParam2->f_302, iVar1);
					func_65(uParam0, iVar0);
					iVar1++;
				}
				func_278(&(uParam2->f_5[uParam2->f_302 /*37*/]));
				uParam2->f_5[uParam2->f_302 /*37*/].f_9 = 0;
				func_133(&(uParam2->f_5[iVar2 /*37*/]), 1, 0, 0);
			}
			break;
	}
}

void func_199(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	char* sVar6;
	iVar0 = uParam1->f_12;
	iVar1 = (0 + uParam1->f_12);
	switch (uParam2->f_5[iVar0 /*37*/].f_5)
	{
		case 0:
			func_246(&(uParam2->f_5[iVar0 /*37*/]));
			break;
		case 1:
			if (iVar0 == 4)
			{
				sVar6 = func_181(iVar1, 0);
			}
			else
			{
				sVar6 = func_182(uParam2->f_5[iVar0 /*37*/].f_1);
			}
			if (func_183(uParam0, iVar1, sVar6, "PBL_Idle", 2))
			{
				func_246(&(uParam2->f_5[iVar0 /*37*/]));
			}
			break;
		case 2:
			if (!func_184(uParam0, iVar1))
			{
				return;
			}
			if (iVar0 == 4)
			{
				if (ENTITY::_0x0B7CB1300CBFE19C(uParam1->f_11, 1))
				{
					TASK::STOP_ANIM_PLAYBACK(uParam1->f_11, 0, false);
				}
				if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(uParam0->f_240[61 /*24*/].f_4))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_240[61 /*24*/].f_4, uParam1->f_11, PED::GET_PED_BONE_INDEX(uParam1->f_11, 37709), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
				}
				func_185(uParam0, iVar1, uParam1, "DEALER");
				if (!func_186(uParam0, iVar1, uParam0->f_3, 0f, 0f, uParam0->f_6))
				{
					return;
				}
			}
			else
			{
				func_185(uParam0, iVar1, uParam1, "pre_postgame_blackjack_player");
				__LIB_18__::func_133(0, uParam0->f_3, uParam0->f_6, iVar0, &vVar2, &fVar5, 0);
				if (!func_186(uParam0, iVar1, vVar2 + Vector(uParam2->f_300, 0f, 0f), 0f, 0f, fVar5))
				{
					return;
				}
			}
			func_252(&(uParam2->f_5[iVar0 /*37*/]));
			break;
	}
}

void func_200(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = uParam1->f_12;
	iVar1 = 11;
	if (iVar0 != 4)
	{
		func_133(&(uParam2->f_5[iVar0 /*37*/]), 1, 0, 0);
		return;
	}
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (uParam2->f_5[iVar2 /*37*/].f_12.f_23 > 0)
		{
			MISC::SET_BIT(&iVar4, iVar2);
		}
		iVar2++;
	}
	if (iVar4 == 0)
	{
		func_133(&(uParam2->f_5[iVar0 /*37*/]), 1, 0, 0);
		return;
	}
	switch (uParam2->f_5[iVar0 /*37*/].f_5)
	{
		case 0:
			func_246(&(uParam2->f_5[iVar0 /*37*/]));
			break;
		case 1:
			if (__LIB_0__::func_264(&(uParam2->f_5[iVar0 /*37*/].f_2)) < uParam2->f_5[iVar0 /*37*/].f_6)
			{
				return;
			}
			if (func_279(uParam0, uParam2))
			{
				func_246(&(uParam2->f_5[iVar0 /*37*/]));
			}
			break;
		case 2:
			if (!func_280(uParam0, uParam2))
			{
				return;
			}
			func_246(&(uParam2->f_5[iVar0 /*37*/]));
			break;
		case 3:
			if (func_276(uParam0, iVar1) >= 1f || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("ACTIONDONE")))
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					if (uParam2->f_5[iVar2 /*37*/].f_12.f_23 > 0)
					{
						func_259(uParam0, (84 + iVar2), func_127((84 + iVar2), 0), 0, 1);
						iVar3 = 0;
						while (iVar3 < 11)
						{
							iVar5 = func_277(iVar2, iVar3);
							func_281(uParam0, iVar5, -0.125f);
							iVar3++;
						}
					}
					iVar2++;
				}
				if (uParam2->f_5[4 /*37*/].f_12.f_23 > 0)
				{
					iVar3 = 0;
					while (iVar3 < 11)
					{
						iVar5 = __LIB_8__::func_347(iVar3);
						func_281(uParam0, iVar5, -0.125f);
						iVar3++;
					}
				}
				iVar2 = 0;
				while (iVar2 < 5)
				{
					__LIB_4__::func_884(&(uParam2->f_5[iVar2 /*37*/].f_12));
					iVar2++;
				}
				func_133(&(uParam2->f_5[iVar0 /*37*/]), 1, 0, 0);
			}
			break;
	}
}

void func_201(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = uParam1->f_12;
	iVar1 = 12;
	if (iVar0 != 4)
	{
		func_133(&(uParam2->f_5[iVar0 /*37*/]), 1, 0, 0);
		return;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (uParam2->f_5[iVar2 /*37*/].f_9)
		{
			MISC::SET_BIT(&iVar3, iVar2);
		}
		iVar2++;
	}
	if (iVar3 == 0)
	{
		func_133(&(uParam2->f_5[iVar0 /*37*/]), 1, 0, 0);
		return;
	}
	switch (uParam2->f_5[iVar0 /*37*/].f_5)
	{
		case 0:
			func_246(&(uParam2->f_5[iVar0 /*37*/]));
			break;
		case 1:
			if (__LIB_0__::func_264(&(uParam2->f_5[iVar0 /*37*/].f_2)) < uParam2->f_5[iVar0 /*37*/].f_6)
			{
				return;
			}
			if (func_283(uParam0, uParam2))
			{
				func_246(&(uParam2->f_5[iVar0 /*37*/]));
			}
			break;
		case 2:
			if (!func_284(uParam0, uParam2))
			{
				return;
			}
			func_246(&(uParam2->f_5[iVar0 /*37*/]));
			break;
		case 3:
			if (func_263(uParam0, iVar1))
			{
				iVar2 = 0;
				while (iVar2 < 5)
				{
					uParam2->f_5[iVar2 /*37*/].f_9 = 0;
					iVar2++;
				}
				func_133(&(uParam2->f_5[iVar0 /*37*/]), 1, 0, 0);
			}
			break;
	}
}

void func_202(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	char* sVar6;
	iVar0 = uParam1->f_12;
	iVar1 = (0 + iVar0);
	if (iVar0 < 0 || iVar0 >= 4)
	{
		return;
	}
	switch (uParam2->f_5[iVar0 /*37*/].f_5)
	{
		case 0:
			func_246(&(uParam2->f_5[iVar0 /*37*/]));
			break;
		case 1:
			if (__LIB_0__::func_264(&(uParam2->f_5[iVar0 /*37*/].f_2)) < uParam2->f_5[iVar0 /*37*/].f_6)
			{
				return;
			}
			sVar6 = func_182(uParam2->f_5[iVar0 /*37*/].f_1);
			if (func_183(uParam0, iVar1, sVar6, "PBL_Hit", 2))
			{
				func_246(&(uParam2->f_5[iVar0 /*37*/]));
			}
			break;
		case 2:
			if (!func_184(uParam0, iVar1))
			{
				return;
			}
			func_185(uParam0, iVar1, uParam1, "pre_postgame_blackjack_player");
			__LIB_18__::func_133(0, uParam0->f_3, uParam0->f_6, iVar0, &vVar2, &fVar5, 0);
			if (!func_186(uParam0, iVar1, vVar2 + Vector(uParam2->f_300, 0f, 0f), 0f, 0f, fVar5))
			{
				return;
			}
			func_132(uParam0, uParam1->f_11, "BJACK_HIT");
			func_246(&(uParam2->f_5[iVar0 /*37*/]));
			break;
		case 3:
			if (func_251(uParam0, iVar1, "S_Idle"))
			{
				func_133(&(uParam2->f_5[iVar0 /*37*/]), 1, 0, 0);
			}
			break;
	}
}

void func_203(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	char* sVar6;
	iVar0 = uParam1->f_12;
	iVar1 = (0 + iVar0);
	if (iVar0 < 0 || iVar0 >= 4)
	{
		return;
	}
	switch (uParam2->f_5[iVar0 /*37*/].f_5)
	{
		case 0:
			func_246(&(uParam2->f_5[iVar0 /*37*/]));
			break;
		case 1:
			if (__LIB_0__::func_264(&(uParam2->f_5[iVar0 /*37*/].f_2)) < uParam2->f_5[iVar0 /*37*/].f_6)
			{
				return;
			}
			sVar6 = func_182(uParam2->f_5[iVar0 /*37*/].f_1);
			if (func_183(uParam0, iVar1, sVar6, "PBL_Stand", 2))
			{
				func_246(&(uParam2->f_5[iVar0 /*37*/]));
			}
			break;
		case 2:
			if (!func_184(uParam0, iVar1))
			{
				return;
			}
			func_185(uParam0, iVar1, uParam1, "pre_postgame_blackjack_player");
			__LIB_18__::func_133(0, uParam0->f_3, uParam0->f_6, iVar0, &vVar2, &fVar5, 0);
			if (!func_186(uParam0, iVar1, vVar2 + Vector(uParam2->f_300, 0f, 0f), 0f, 0f, fVar5))
			{
				return;
			}
			func_132(uParam0, uParam1->f_11, "BJACK_STAND");
			func_246(&(uParam2->f_5[iVar0 /*37*/]));
			break;
		case 3:
			if (func_251(uParam0, iVar1, "S_Idle"))
			{
				func_133(&(uParam2->f_5[iVar0 /*37*/]), 1, 0, 0);
			}
			break;
	}
}

void func_204(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	char* sVar9;
	iVar0 = uParam1->f_12;
	iVar1 = (0 + iVar0);
	if (iVar0 < 0 || iVar0 >= 4)
	{
		return;
	}
	switch (uParam2->f_5[iVar0 /*37*/].f_5)
	{
		case 0:
			func_246(&(uParam2->f_5[iVar0 /*37*/]));
			break;
		case 1:
			sVar9 = func_182(uParam2->f_5[iVar0 /*37*/].f_1);
			if (func_183(uParam0, iVar1, sVar9, "PBL_Take", 2))
			{
				func_246(&(uParam2->f_5[iVar0 /*37*/]));
			}
			break;
		case 2:
			if (__LIB_0__::func_264(&(uParam2->f_5[iVar0 /*37*/].f_2)) < uParam2->f_5[iVar0 /*37*/].f_6)
			{
				return;
			}
			func_125(uParam0, (55 + iVar0), func_127((55 + iVar0), 0), vVar2, vVar5, 0, 0);
			func_246(&(uParam2->f_5[iVar0 /*37*/]));
			break;
		case 3:
			if (func_248(uParam0, (55 + iVar0)))
			{
				__LIB_19__::func_230(uParam0->f_240[(55 + iVar0) /*24*/].f_4, 5, 4);
				sVar9 = func_182(uParam2->f_5[iVar0 /*37*/].f_1);
				func_246(&(uParam2->f_5[iVar0 /*37*/]));
			}
			break;
		case 4:
			if (!func_184(uParam0, iVar1))
			{
				return;
			}
			func_250(uParam0, iVar1, (55 + iVar0), "PREPOSTGAMECHIPS", 0);
			func_185(uParam0, iVar1, uParam1, "pre_postgame_blackjack_player");
			__LIB_18__::func_133(0, uParam0->f_3, uParam0->f_6, iVar0, &vVar2, &fVar8, 0);
			if (!func_186(uParam0, iVar1, vVar2 + Vector(uParam2->f_300, 0f, 0f), 0f, 0f, fVar8))
			{
				return;
			}
			func_246(&(uParam2->f_5[iVar0 /*37*/]));
			break;
		case 5:
			if (func_251(uParam0, iVar1, "S_Idle"))
			{
				uParam2->f_5[iVar0 /*37*/].f_9 = 0;
				func_133(&(uParam2->f_5[iVar0 /*37*/]), 1, 0, 0);
			}
			break;
	}
}

void func_205(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = uParam1->f_12;
	iVar1 = 13;
	iVar4 = 0;
	if (iVar0 != 4)
	{
		func_133(&(uParam2->f_5[iVar0 /*37*/]), 1, 0, 0);
		return;
	}
	switch (uParam2->f_5[iVar0 /*37*/].f_5)
	{
		case 0:
			func_246(&(uParam2->f_5[iVar0 /*37*/]));
			break;
		case 1:
			iVar2 = 0;
			while (iVar2 < 5)
			{
				if (func_111(uParam0, iVar2))
				{
					if (uParam2->f_5[iVar2 /*37*/].f_12.f_23 > 0)
					{
						iVar4 = 1;
					}
				}
				iVar2++;
			}
			if (iVar4 == 0)
			{
				func_133(&(uParam2->f_5[iVar0 /*37*/]), 1, 0, 0);
				return;
			}
			if (func_285(uParam0, uParam2, 3))
			{
				func_246(&(uParam2->f_5[iVar0 /*37*/]));
			}
			break;
		case 2:
			if (!func_286(uParam0, uParam2))
			{
				return;
			}
			func_246(&(uParam2->f_5[iVar0 /*37*/]));
			break;
		case 3:
			if (func_276(uParam0, iVar1) >= 0.495f)
			{
				iVar3 = 0;
				while (iVar3 < 4)
				{
					func_65(uParam0, (84 + iVar3));
					iVar3++;
				}
				func_246(&(uParam2->f_5[iVar0 /*37*/]));
			}
			break;
		case 4:
			if (func_263(uParam0, iVar1) || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("ACTIONDONE")))
			{
				iVar3 = 0;
				while (iVar3 < 11)
				{
					iVar5 = __LIB_8__::func_347(iVar3);
					func_65(uParam0, iVar5);
					iVar3++;
				}
				iVar2 = 0;
				while (iVar2 < 4)
				{
					iVar3 = 0;
					while (iVar3 < 11)
					{
						iVar5 = func_277(iVar2, iVar3);
						func_65(uParam0, iVar5);
						iVar3++;
					}
					iVar2++;
				}
				iVar3 = 0;
				while (iVar3 < 4)
				{
					func_65(uParam0, (84 + iVar3));
					iVar3++;
				}
				iVar2 = 0;
				while (iVar2 < 5)
				{
					__LIB_4__::func_884(&(uParam2->f_5[iVar2 /*37*/].f_12));
					iVar2++;
				}
				func_133(&(uParam2->f_5[iVar0 /*37*/]), 1, 0, 0);
			}
			break;
	}
}

void func_218(int iParam0)
{
	func_221(iParam0, iParam0->f_4 + 1);
}

bool func_219(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 5)
	{
		return false;
	}
	if (!uParam1->f_5[iParam2 /*37*/].f_8)
	{
		return false;
	}
	return func_111(uParam0, iParam2);
}

int func_220(int iParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	bVar1 = func_288(&(iParam0->f_5[iParam1 /*37*/].f_12), -1);
	iVar2 = 2;
	if (bVar1 == 0)
	{
		if (iParam0->f_5[iParam1 /*37*/].f_36 < 11)
		{
			iVar2 = 1;
		}
		else if (iParam0->f_5[iParam1 /*37*/].f_36 >= 17)
		{
			iVar2 = 1;
		}
	}
	else if (iParam0->f_5[iParam1 /*37*/].f_36 >= 19)
	{
		iVar2 = 1;
	}
	else if (iParam0->f_5[iParam1 /*37*/].f_36 <= 17)
	{
		iVar2 = 1;
	}
	if (iVar2 == 1 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.25f)
	{
		iVar2 = 2;
	}
	if (iVar2 == 1)
	{
		func_133(&(iParam0->f_5[iParam1 /*37*/]), 8, fVar0, 0);
	}
	else
	{
		func_133(&(iParam0->f_5[iParam1 /*37*/]), 13, fVar0, 0);
	}
	return iVar2;
}

void func_221(int iParam0, int iParam1)
{
	iParam0->f_4 = iParam1;
	__LIB_1__::func_148(&(iParam0->f_1));
}

void func_224(int iParam0)
{
	Global_1899528.f_61.f_5 = iParam0;
}

void func_241(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		iVar0 = 0;
		iVar1 = 0;
		iVar3 = iVar2 + 1;
		if (iVar2 == 0 && iParam0 <= __LIB_9__::func_944(iVar2) * 2)
		{
			iVar0 = 2;
			iVar1 = 0;
		}
		else
		{
			if (iVar3 == 6)
			{
				iVar0 = 4;
				iVar1 = 0;
			}
			else if (iParam0 <= (__LIB_9__::func_944(iVar2) * 3 + __LIB_9__::func_944(iVar3) * 1) && iVar2 != 0)
			{
				iVar0 = 3;
				iVar1 = 1;
			}
			else if (iParam0 <= (__LIB_9__::func_944(iVar2) * 2 + __LIB_9__::func_944(iVar3) * 2) && iVar2 != 0)
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else if (iParam0 <= (__LIB_9__::func_944(iVar2) * 1 + __LIB_9__::func_944(iVar3) * 3))
			{
				iVar0 = 1;
				iVar1 = 3;
			}
			if (iVar0 > 0)
			{
			}
			else
			{
				iVar2++;
			}
		}
	}
	fVar4 = (IntToFloat(iParam0) / (((BUILTIN::TO_FLOAT(iVar0) * BUILTIN::TO_FLOAT(__LIB_9__::func_944(iVar2))) / BUILTIN::TO_FLOAT(iParam4)) + ((BUILTIN::TO_FLOAT(iVar1) * BUILTIN::TO_FLOAT(__LIB_9__::func_944(iVar3))) / BUILTIN::TO_FLOAT(iParam4))));
	iVar5 = BUILTIN::CEIL(fVar4);
	if (iVar5 > iParam4)
	{
		iVar5 = iParam4;
	}
	if (iVar5 < 0)
	{
		iVar5 = 0;
	}
	iVar6 = 0;
	while (iVar6 < iParam3)
	{
		if (iVar6 < iVar0)
		{
			(*uParam1)[iVar6] = iVar2;
			(*uParam2)[iVar6] = iVar5;
		}
		else
		{
			(*uParam1)[iVar6] = iVar3;
			(*uParam2)[iVar6] = iVar5;
		}
		iVar6++;
	}
}

void func_242(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	iVar6 = func_297(iParam1, iParam2);
	if (iVar6 >= uParam0->f_240)
	{
		return;
	}
	func_247(uParam0, iParam1, iParam2, &vVar0, &vVar3, 0, 1);
	func_125(uParam0, iVar6, __LIB_18__::func_522(), vVar0, vVar3, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_240[iVar6 /*24*/].f_4))
	{
		__LIB_12__::func_244(uParam0->f_240[iVar6 /*24*/].f_4, iParam4, iParam5);
		__LIB_12__::func_245(uParam0->f_240[iVar6 /*24*/].f_4, iParam3);
	}
}

bool func_243(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_2353[iParam1 /*29*/] > 4)
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam2))
		{
			return false;
		}
		return ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam2, uParam0->f_2353[iParam1 /*29*/].f_1);
	}
	return false;
}

bool func_245(var uParam0, var uParam1)
{
	if (!uParam0->f_2883)
	{
		return false;
	}
	return (*uParam1 >= 2 && *uParam1 <= 6);
}

void func_246(var uParam0)
{
	func_270(uParam0, uParam0->f_5 + 1);
}

int func_247(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bVar0 = true;
	if (iParam1 == 0)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.7925f, 0.0618f, 0.803f };
			vVar4 = { 0f, 0f, 68.7678f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.7855f, 0.1025f, 0.803f };
			vVar4 = { 0f, 0f, 68.7761f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.7601f, 0.0273f, 0.803f };
			vVar4 = { 0.0021f, 0.0028f, 68.7741f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.7523f, 0.0761f, 0.803f };
			vVar4 = { -0.0001f, -0.0003f, 68.7658f };
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
			vVar1 = { 0.3238f, -0.4005f, 0.803f };
			vVar4 = { 0f, 0f, 23.7677f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.3477f, -0.3669f, 0.803f };
			vVar4 = { 0f, 0f, 23.776f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.2765f, -0.4021f, 0.803f };
			vVar4 = { 0.0021f, 0.0028f, 23.774f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.3055f, -0.3621f, 0.803f };
			vVar4 = { -0.0001f, -0.0003f, 23.7657f };
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
			vVar1 = { -0.3352f, -0.3958f, 0.803f };
			vVar4 = { 0f, 0f, -21.2323f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.2945f, -0.3889f, 0.803f };
			vVar4 = { 0f, 0f, -21.224f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.3698f, -0.3634f, 0.803f };
			vVar4 = { 0.0021f, 0.0028f, -21.226f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.321f, -0.3557f, 0.803f };
			vVar4 = { -0.0001f, -0.0003f, -21.2343f };
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
			vVar1 = { -0.7969f, 0.0725f, 0.803f };
			vVar4 = { 0f, 0f, -66.2323f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.7632f, 0.0486f, 0.803f };
			vVar4 = { 0f, 0f, -66.224f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.7984f, 0.1198f, 0.803f };
			vVar4 = { 0.0021f, 0.0028f, -66.226f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.7584f, 0.0908f, 0.803f };
			vVar4 = { -0.0001f, -0.0003f, -66.2343f };
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

bool func_248(var uParam0, int iParam1)
{
	return uParam0->f_240[iParam1 /*24*/] == 5;
}

void func_250(var uParam0, int iParam1, int iParam2, char* sParam3, bool bParam4)
{
	struct<4> Var0;
	if (iParam2 < 0 || iParam2 >= 88)
	{
		return;
	}
	if (uParam0->f_2353[iParam1 /*29*/] < 4)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_240[iParam2 /*24*/].f_4))
	{
		return;
	}
	if (uParam0->f_240[iParam2 /*24*/].f_3 != -1 && uParam0->f_240[iParam2 /*24*/].f_3 != uParam0->f_2353[iParam1 /*29*/].f_1)
	{
		func_152(uParam0, iParam2, 0);
	}
	uParam0->f_240[iParam2 /*24*/].f_3 = uParam0->f_2353[iParam1 /*29*/].f_1;
	StringCopy(&(uParam0->f_240[iParam2 /*24*/].f_5), sParam3, 64);
	ENTITY::SET_ENTITY_COLLISION(uParam0->f_240[iParam2 /*24*/].f_4, false, false);
	if (!ENTITY::IS_ENTITY_ATTACHED(uParam0->f_240[iParam2 /*24*/].f_4))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_240[iParam2 /*24*/].f_4, true);
	}
	if (bParam4)
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_2353[iParam1 /*29*/].f_1, sParam3, &Var0, false, 0, 2))
		{
			ENTITY::SET_ENTITY_COORDS(uParam0->f_240[iParam2 /*24*/].f_4, Var0, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(uParam0->f_240[iParam2 /*24*/].f_4, Var0.f_3, 2, true);
		}
	}
	uParam0->f_240[iParam2 /*24*/].f_14 = 1;
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_2353[iParam1 /*29*/].f_1, sParam3, uParam0->f_240[iParam2 /*24*/].f_4, 0);
	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_240[iParam2 /*24*/].f_4, true);
}

bool func_251(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 < 0 || iParam1 >= 18)
	{
		return false;
	}
	if (uParam0->f_2353[iParam1 /*29*/] == 5)
	{
		return ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_2353[iParam1 /*29*/].f_1, sParam2, 1);
	}
	return false;
}

void func_252(var uParam0)
{
	uParam0->f_5 = 100;
	__LIB_1__::func_148(&(uParam0->f_2));
}

void func_259(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam2 == 0)
	{
		iParam2 = func_127(iParam1, 0);
	}
	func_125(uParam0, iParam1, iParam2, uParam0->f_3 - Vector(0.1f, 0f, 0f), 0f, 0f, 0f, iParam3, iParam4);
}

bool func_260(var uParam0)
{
	struct<4> Var0;
	char* sVar4;
	Var0 = { func_302(uParam0) };
	sVar4 = func_181(10, 0);
	return func_183(uParam0, 10, sVar4, &Var0, 2);
}

int func_261(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
		if (iVar1 != iParam1)
		{
			if (uParam0->f_94[iVar1 /*29*/] && uParam0->f_94[iVar1 /*29*/].f_1 == 5)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return -1;
}

char* func_262(int iParam0)
{
	int iVar0;
	char cVar1[64];
	int iVar9;
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 59:
			return "HIT_CARD";
		case 55:
			return "S1_A01_CHIPS";
		case 56:
			return "S2_A01_CHIPS";
		case 57:
			return "S3_A01_CHIPS";
		case 58:
			return "S4_A01_CHIPS";
		case 60:
			return "PREPOSTGAMECHIPS";
		case 61:
			return "DECK";
		case 62:
			return "CADDY";
		case 63:
			return "CADDYSTACK0";
		case 64:
			return "CADDYSTACK1";
		case 65:
			return "CADDYSTACK2";
		case 66:
			return "CADDYSTACK3";
		case 67:
			return "CADDYSTACK4";
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			iVar9 = (iVar0 - 0) + 1;
			if (iVar9 < 10)
			{
				StringCopy(&cVar1, "DLR_CARD_0", 64);
			}
			else
			{
				StringCopy(&cVar1, "DLR_CARD_", 64);
			}
			StringIntConCat(&cVar1, iVar9, 64);
			return __LIB_1__::func_569(cVar1);
		case 11:
		case 12:
		case 13:
		case 14:
			iVar9 = (iVar0 - 11) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_CARD_A01", 64);
			return __LIB_1__::func_569(cVar1);
		case 15:
		case 16:
		case 17:
		case 18:
			iVar9 = (iVar0 - 15) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_CARD_A02", 64);
			return __LIB_1__::func_569(cVar1);
		case 19:
		case 20:
		case 21:
		case 22:
			iVar9 = (iVar0 - 19) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_CARD_A03", 64);
			return __LIB_1__::func_569(cVar1);
		case 23:
		case 24:
		case 25:
		case 26:
			iVar9 = (iVar0 - 23) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_CARD_A04", 64);
			return __LIB_1__::func_569(cVar1);
		case 27:
		case 28:
		case 29:
		case 30:
			iVar9 = (iVar0 - 27) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_CARD_A05", 64);
			return __LIB_1__::func_569(cVar1);
		case 31:
		case 32:
		case 33:
		case 34:
			iVar9 = (iVar0 - 31) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_CARD_A06", 64);
			return __LIB_1__::func_569(cVar1);
		case 35:
		case 36:
		case 37:
		case 38:
			iVar9 = (iVar0 - 35) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_CARD_A07", 64);
			return __LIB_1__::func_569(cVar1);
		case 39:
		case 40:
		case 41:
		case 42:
			iVar9 = (iVar0 - 39) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_CARD_A08", 64);
			return __LIB_1__::func_569(cVar1);
		case 43:
		case 44:
		case 45:
		case 46:
			iVar9 = (iVar0 - 43) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_CARD_A09", 64);
			return __LIB_1__::func_569(cVar1);
		case 47:
		case 48:
		case 49:
		case 50:
			iVar9 = (iVar0 - 47) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_CARD_A10", 64);
			return __LIB_1__::func_569(cVar1);
		case 51:
		case 52:
		case 53:
		case 54:
			iVar9 = (iVar0 - 51) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_CARD_A11", 64);
			return __LIB_1__::func_569(cVar1);
		case 68:
		case 69:
		case 70:
		case 71:
			iVar9 = (iVar0 - 68) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_BETSTACK_0", 64);
			return __LIB_1__::func_569(cVar1);
		case 72:
		case 73:
		case 74:
		case 75:
			iVar9 = (iVar0 - 72) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_BETSTACK_0", 64);
			return __LIB_1__::func_569(cVar1);
		case 76:
		case 77:
		case 78:
		case 79:
			iVar9 = (iVar0 - 76) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_BETSTACK_0", 64);
			return __LIB_1__::func_569(cVar1);
		case 80:
		case 81:
		case 82:
		case 83:
			iVar9 = (iVar0 - 80) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_BETSTACK_0", 64);
			return __LIB_1__::func_569(cVar1);
		case 84:
		case 85:
		case 86:
		case 87:
			iVar9 = (iVar0 - 84) + 1;
			StringCopy(&cVar1, "MGSOBJ_DISCARD_0", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			return __LIB_1__::func_569(cVar1);
		default:
			break;
	}
	return "";
}

bool func_263(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 18)
	{
		return false;
	}
	if (uParam0->f_2353[iParam1 /*29*/] == 5)
	{
		return uParam0->f_2353[iParam1 /*29*/].f_2 >= 0.995f;
	}
	if (uParam0->f_2353[iParam1 /*29*/] == 6)
	{
		return true;
	}
	return false;
}

bool func_264(var uParam0, var uParam1)
{
	int iVar0;
	char cVar1[64];
	int iVar9;
	iVar0 = 10;
	if (!func_148(uParam0, 4))
	{
		return false;
	}
	if (!func_184(uParam0, iVar0))
	{
		return false;
	}
	uParam1->f_301 = -1;
	iVar9 = 0;
	while (iVar9 < 4)
	{
		if (func_148(uParam0, iVar9))
		{
			StringCopy(&cVar1, func_262((11 + iVar9)), 64);
			func_250(uParam0, iVar0, (11 + iVar9), &cVar1, 0);
			StringCopy(&cVar1, func_262((15 + iVar9)), 64);
			func_250(uParam0, iVar0, (15 + iVar9), &cVar1, 0);
			uParam1->f_5[iVar9 /*37*/].f_8 = 1;
			if (uParam1->f_301 == -1)
			{
				uParam1->f_301 = iVar9;
			}
		}
		else
		{
			uParam1->f_5[iVar9 /*37*/].f_8 = 0;
		}
		iVar9++;
	}
	StringCopy(&cVar1, func_262(0), 64);
	func_250(uParam0, iVar0, 0, &cVar1, 0);
	StringCopy(&cVar1, func_262(1), 64);
	func_250(uParam0, iVar0, 1, &cVar1, 0);
	StringCopy(&cVar1, func_304(4), 64);
	func_185(uParam0, iVar0, &(uParam0->f_94[4 /*29*/]), &cVar1);
	return func_186(uParam0, iVar0, uParam0->f_3, 0f, 0f, uParam0->f_6);
}

bool func_265(var uParam0, var uParam1)
{
	struct<4> Var0;
	char* sVar4;
	Var0 = { func_305(uParam1->f_5[uParam1->f_301 /*37*/].f_12.f_23, 0) };
	sVar4 = func_181((5 + uParam1->f_301), 0);
	return func_183(uParam0, (5 + uParam1->f_301), sVar4, &Var0, 2);
}

bool func_266(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	iVar1 = (5 + uParam1->f_301);
	if (!func_148(uParam0, 4))
	{
		return false;
	}
	if (!func_184(uParam0, iVar1))
	{
		return false;
	}
	StringCopy(&cVar2, func_262(59), 64);
	iVar0 = ((11 + (4 * (uParam1->f_5[uParam1->f_301 /*37*/].f_12.f_23 - 1))) + uParam1->f_301);
	func_250(uParam0, iVar1, iVar0, &cVar2, 0);
	StringCopy(&cVar2, func_304(4), 64);
	func_185(uParam0, iVar1, &(uParam0->f_94[4 /*29*/]), &cVar2);
	return func_186(uParam0, iVar1, uParam0->f_3, 0f, 0f, uParam0->f_6);
}

var func_267(int iParam0)
{
	char cVar0[32];
	if (iParam0 < 1)
	{
		return "";
	}
	if (iParam0 > 21)
	{
		return "MINIGAME_BJACK_DEALER_BUST";
	}
	StringCopy(&cVar0, "MINIGAME_BJACK_DEALER_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	return __LIB_1__::func_569(cVar0);
}

bool func_268(var uParam0)
{
	if (uParam0->f_36 > 21)
	{
		return true;
	}
	return false;
}

bool func_269(var uParam0)
{
	char* sVar0;
	sVar0 = func_181(9, 0);
	return func_183(uParam0, 9, sVar0, "PBL_Reveal", 2);
}

void func_270(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
	__LIB_1__::func_148(&(uParam0->f_2));
}

bool func_271(var uParam0)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	iVar1 = 9;
	if (!func_148(uParam0, 4))
	{
		return false;
	}
	if (!func_184(uParam0, iVar1))
	{
		return false;
	}
	StringCopy(&cVar2, func_262(59), 64);
	iVar0 = 0;
	func_250(uParam0, iVar1, iVar0, &cVar2, 0);
	StringCopy(&cVar2, func_304(4), 64);
	func_185(uParam0, iVar1, &(uParam0->f_94[4 /*29*/]), &cVar2);
	return func_186(uParam0, iVar1, uParam0->f_3, 0f, 0f, uParam0->f_6);
}

bool func_272(var uParam0, var uParam1)
{
	struct<4> Var0;
	char* sVar4;
	Var0 = { func_307(uParam1->f_5[4 /*37*/].f_12.f_23) };
	sVar4 = func_181(9, 0);
	return func_183(uParam0, 9, sVar4, &Var0, 2);
}

bool func_273(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	iVar1 = 9;
	if (!func_148(uParam0, 4))
	{
		return false;
	}
	if (!func_184(uParam0, iVar1))
	{
		return false;
	}
	StringCopy(&cVar2, func_262(59), 64);
	iVar0 = (0 + (uParam1->f_5[4 /*37*/].f_12.f_23 - 1));
	func_250(uParam0, iVar1, iVar0, &cVar2, 0);
	StringCopy(&cVar2, func_304(4), 64);
	func_185(uParam0, iVar1, &(uParam0->f_94[4 /*29*/]), &cVar2);
	return func_186(uParam0, iVar1, uParam0->f_3, 0f, 0f, uParam0->f_6);
}

bool func_274(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	iVar0 = (14 + uParam1->f_302);
	sVar1 = func_181(iVar0, 0);
	if (iParam2 != 7)
	{
		uParam1->f_192 = iParam2;
	}
	switch (uParam1->f_192)
	{
		case 0:
			return func_183(uParam0, iVar0, sVar1, "PBL_A_WIN", 2);
		case 1:
			return func_183(uParam0, iVar0, sVar1, "PBL_A_LOSS", 2);
		case 2:
			return func_183(uParam0, iVar0, sVar1, "PBL_EXIT_TO_SEAT_01", 2);
		case 3:
			return func_183(uParam0, iVar0, sVar1, "PBL_EXIT_TO_SEAT_02", 2);
		case 4:
			return func_183(uParam0, iVar0, sVar1, "PBL_EXIT_TO_SEAT_03", 2);
		case 5:
			return func_183(uParam0, iVar0, sVar1, "PBL_EXIT_TO_SEAT_04", 2);
		default:
			break;
	}
	return func_183(uParam0, iVar0, sVar1, "PBL_EXIT_TO_SELF", 2);
}

bool func_275(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	char cVar2[16];
	int iVar4;
	iVar4 = (14 + uParam1->f_302);
	if (!func_184(uParam0, iVar4))
	{
		return false;
	}
	if (!func_148(uParam0, 4))
	{
		return false;
	}
	if (uParam1->f_5[uParam1->f_302 /*37*/].f_12.f_23 > 0)
	{
		iVar0 = 0;
		while (iVar0 < uParam1->f_5[uParam1->f_302 /*37*/].f_12.f_23)
		{
			iVar1 = func_277(uParam1->f_302, iVar0);
			if (iVar0 + 1 < 10)
			{
				StringCopy(&cVar2, "CARD_A0", 16);
				StringIntConCat(&cVar2, iVar0 + 1, 16);
			}
			else
			{
				StringCopy(&cVar2, "CARD_A", 16);
				IntToString(&cVar2, iVar0 + 1, 16);
			}
			func_250(uParam0, iVar4, iVar1, __LIB_1__::func_569(cVar2), 0);
			iVar0++;
		}
	}
	if (uParam1->f_192 == 1)
	{
		iVar1 = (55 + uParam1->f_302);
		func_250(uParam0, iVar4, iVar1, "CHIPS_A01", 0);
	}
	if (uParam1->f_192 == 0)
	{
		iVar1 = 60;
		func_250(uParam0, iVar4, iVar1, "CHIPS_A01", 0);
	}
	func_185(uParam0, iVar4, &(uParam0->f_94[4 /*29*/]), "PLAYER");
	return func_186(uParam0, iVar4, uParam0->f_3, 0f, 0f, uParam0->f_6);
}

float func_276(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 18)
	{
		return 0f;
	}
	if (uParam0->f_2353[iParam1 /*29*/] == 5)
	{
		return uParam0->f_2353[iParam1 /*29*/].f_2;
	}
	if (uParam0->f_2353[iParam1 /*29*/] == 6)
	{
		return 1f;
	}
	return 0f;
}

int func_277(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = ((11 + (4 * iParam1)) + iParam0);
	return iVar0;
}

void func_278(var uParam0)
{
	__LIB_4__::func_884(&(uParam0->f_12));
	uParam0->f_36 = 0;
}

bool func_279(var uParam0, var uParam1)
{
	struct<4> Var0;
	char* sVar4;
	Var0 = { func_309(uParam0, uParam1) };
	sVar4 = func_181(11, 0);
	return func_183(uParam0, 11, sVar4, &Var0, 2);
}

bool func_280(var uParam0, var uParam1)
{
	int iVar0;
	char cVar1[64];
	int iVar9;
	int iVar10;
	int iVar11;
	iVar0 = 11;
	if (!func_184(uParam0, iVar0))
	{
		return false;
	}
	if (!func_148(uParam0, 4))
	{
		return false;
	}
	uParam1->f_304 = 0;
	iVar9 = 0;
	while (iVar9 < 4)
	{
		if (func_148(uParam0, iVar9) && uParam1->f_5[iVar9 /*37*/].f_12.f_23 > 0)
		{
			iVar10 = 0;
			while (iVar10 < uParam1->f_5[iVar9 /*37*/].f_12.f_23)
			{
				MISC::SET_BIT(&(uParam1->f_304), iVar9);
				iVar11 = ((11 + (4 * iVar10)) + iVar9);
				StringCopy(&cVar1, func_262(iVar11), 64);
				func_250(uParam0, iVar0, iVar11, &cVar1, 0);
				iVar10++;
			}
		}
		iVar9++;
	}
	if (uParam1->f_5[4 /*37*/].f_12.f_23 > 0)
	{
		MISC::SET_BIT(&(uParam1->f_304), 4);
		iVar10 = 0;
		while (iVar10 < uParam1->f_5[4 /*37*/].f_12.f_23)
		{
			iVar11 = (0 + iVar10);
			StringCopy(&cVar1, func_262(iVar11), 64);
			func_250(uParam0, iVar0, iVar11, &cVar1, 0);
			iVar10++;
		}
	}
	StringCopy(&cVar1, func_304(4), 64);
	func_185(uParam0, iVar0, &(uParam0->f_94[4 /*29*/]), &cVar1);
	return func_186(uParam0, iVar0, uParam0->f_3, 0f, 0f, uParam0->f_6);
}

void func_281(var uParam0, int iParam1, float fParam2)
{
	if (iParam1 < 0 || iParam1 >= 88)
	{
		return;
	}
	if (uParam0->f_240[iParam1 /*24*/] != 5)
	{
		uParam0->f_240[iParam1 /*24*/].f_22 = 0f;
	}
	else
	{
		uParam0->f_240[iParam1 /*24*/].f_22 = fParam2;
	}
}

bool func_283(var uParam0, var uParam1)
{
	struct<4> Var0;
	char* sVar4;
	Var0 = { func_310(uParam0, uParam1) };
	sVar4 = func_181(12, 0);
	return func_183(uParam0, 12, sVar4, &Var0, 2);
}

bool func_284(var uParam0, var uParam1)
{
	int iVar0;
	char cVar1[64];
	int iVar9;
	int iVar10;
	iVar0 = 12;
	if (!func_184(uParam0, iVar0))
	{
		return false;
	}
	if (!func_148(uParam0, 4))
	{
		return false;
	}
	iVar9 = 0;
	while (iVar9 < 4)
	{
		if (func_148(uParam0, iVar9) && uParam1->f_5[iVar9 /*37*/].f_9)
		{
			iVar10 = (55 + iVar9);
			StringCopy(&cVar1, func_262(iVar10), 64);
			func_250(uParam0, iVar0, iVar10, &cVar1, 0);
		}
		iVar9++;
	}
	StringCopy(&cVar1, func_304(4), 64);
	func_185(uParam0, iVar0, &(uParam0->f_94[4 /*29*/]), &cVar1);
	return func_186(uParam0, iVar0, uParam0->f_3, 0f, 0f, uParam0->f_6);
}

bool func_285(var uParam0, var uParam1, int iParam2)
{
	char* sVar0;
	sVar0 = func_181(13, 0);
	if (iParam2 != 3)
	{
		uParam1->f_191 = iParam2;
	}
	switch (uParam1->f_191)
	{
		case 0:
			return func_183(uParam0, 13, sVar0, "PBL_Cleanup", 2);
		case 1:
			return func_183(uParam0, 13, sVar0, "PBL_Cleanup_Discard", 2);
		case 2:
			return func_183(uParam0, 13, sVar0, "PBL_Cleanup_To_Shuffle", 2);
		default:
			break;
	}
	return func_183(uParam0, 13, sVar0, "PBL_Cleanup", 2);
}

bool func_286(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	int iVar5;
	iVar5 = 13;
	if (!func_184(uParam0, iVar5))
	{
		return false;
	}
	if (!func_148(uParam0, 4))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (MISC::IS_BIT_SET(uParam1->f_304, iVar0) || uParam1->f_5[iVar0 /*37*/].f_12.f_23 > 0)
		{
			iVar1 = (84 + iVar0);
			func_250(uParam0, iVar5, iVar1, func_262(iVar0), 0);
		}
		iVar0++;
	}
	if (uParam1->f_5[4 /*37*/].f_12.f_23 > 0)
	{
		MISC::SET_BIT(&(uParam1->f_304), 4);
		iVar2 = 0;
		while (iVar2 < uParam1->f_5[4 /*37*/].f_12.f_23)
		{
			iVar1 = (0 + iVar2);
			if (iVar2 + 1 < 10)
			{
				StringCopy(&cVar3, "0", 16);
				StringIntConCat(&cVar3, iVar2 + 1, 16);
			}
			else
			{
				IntToString(&cVar3, iVar2 + 1, 16);
			}
			StringConCat(&cVar3, "_CARD", 16);
			func_250(uParam0, iVar5, iVar1, __LIB_1__::func_569(cVar3), 0);
			iVar2++;
		}
	}
	func_185(uParam0, iVar5, &(uParam0->f_94[4 /*29*/]), func_304(4));
	return func_186(uParam0, iVar5, uParam0->f_3, 0f, 0f, uParam0->f_6);
}

bool func_288(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam1 == -1)
	{
		iParam1 = uParam0->f_23;
	}
	else
	{
		iParam1 = __LIB_0__::func_259(uParam0->f_23, iParam1);
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		iVar0 = (iVar0 + __LIB_4__::func_889(*(uParam0[iVar2 /*2*/])));
		if ((*uParam0)[iVar2 /*2*/] == 14)
		{
			iVar1++;
		}
		iVar2++;
	}
	while (iVar0 > 21 && iVar1 > 0)
	{
		iVar0 = (iVar0 - 10);
		iVar1 = (iVar1 - 1);
	}
	return iVar1 > 0;
}

int func_297(int iParam0, int iParam1)
{
	return ((68 + (4 * iParam1)) + iParam0);
}

struct<4> func_302(var uParam0)
{
	int iVar0;
	char cVar1[32];
	StringCopy(&cVar1, "PBL_DEAL_", 32);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_148(uParam0, iVar0))
		{
			StringIntConCat(&cVar1, iVar0 + 1, 32);
		}
		iVar0++;
	}
	return cVar1;
}

char* func_304(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return "Pre_PostGame_Blackjack_Player";
		case 4:
			return "Dealer";
		default:
			break;
	}
	return "";
}

struct<4> func_305(int iParam0, int iParam1)
{
	char cVar0[32];
	if (iParam1 == 0)
	{
		if (iParam0 < 10)
		{
			StringCopy(&cVar0, "PBL_A0", 32);
		}
		else
		{
			StringCopy(&cVar0, "PBL_A", 32);
		}
	}
	else if (iParam0 < 10)
	{
		StringCopy(&cVar0, "PBL_B0", 32);
	}
	else
	{
		StringCopy(&cVar0, "PBL_B", 32);
	}
	StringIntConCat(&cVar0, iParam0, 32);
	return cVar0;
}

struct<4> func_307(int iParam0)
{
	char cVar0[32];
	if (iParam0 < 10)
	{
		StringCopy(&cVar0, "PBL_0", 32);
	}
	else
	{
		StringCopy(&cVar0, "PBL_", 32);
	}
	StringIntConCat(&cVar0, iParam0, 32);
	return cVar0;
}

struct<4> func_309(var uParam0, var uParam1)
{
	int iVar0;
	char cVar1[32];
	StringCopy(&cVar1, "PBL_RETRIEVE_", 32);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_148(uParam0, iVar0) && uParam1->f_5[iVar0 /*37*/].f_12.f_23 > 0)
		{
			StringIntConCat(&cVar1, iVar0 + 1, 32);
		}
		iVar0++;
	}
	return cVar1;
}

struct<4> func_310(var uParam0, var uParam1)
{
	int iVar0;
	char cVar1[32];
	StringCopy(&cVar1, "PBL_LOSS_", 32);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_148(uParam0, iVar0) && uParam1->f_5[iVar0 /*37*/].f_9)
		{
			StringIntConCat(&cVar1, iVar0 + 1, 32);
		}
		iVar0++;
	}
	return cVar1;
}

