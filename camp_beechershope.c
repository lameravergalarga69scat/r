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
	struct<3480> Local_18 = { 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1225574343, 0, 0, 0, 0, 2, 2, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 1056964608, 1055622431, 1050253722, 1022739087, 0, -1116355953, 1055286886, 1055286886, 1049582633, 1049247089, 1032805417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 } ;
	var uLocal_3498 = 0;
	var uLocal_3499 = 0;
	var uLocal_3500 = 0;
	var uLocal_3501 = 0;
	var uLocal_3502 = 0;
	var uLocal_3503 = 3;
	var uLocal_3504 = 0;
	var uLocal_3505 = 0;
	var uLocal_3506 = 0;
	var uLocal_3507 = 3;
	var uLocal_3508 = 0;
	var uLocal_3509 = 0;
	var uLocal_3510 = 0;
	var uLocal_3511 = 0;
	var uLocal_3512 = 0;
	var uLocal_3513 = 0;
	int iLocal_3514 = 0;
	struct<8> Local_3515[18];
	int iLocal_3660 = 0;
	struct<4> Local_3661[13];
	var uLocal_3714 = 0;
	int iLocal_3715 = 0;
	int iLocal_3716 = 0;
	int iLocal_3717 = 0;
	var uLocal_3718 = 0;
	var uLocal_3719 = 0;
	var uLocal_3720 = 0;
	vector3 vLocal_3721 = { 0f, 0f, 0f };
	int iLocal_3724 = 0;
	int iLocal_3725 = 0;
	var uLocal_3726 = 0;
	var uLocal_3727 = 0;
	var uLocal_3728 = 0;
	vector3 vLocal_3729 = { 0f, 0f, 0f };
	bool bLocal_3732 = false;
	int iLocal_3733 = 0;
	int iLocal_3734 = 0;
	int iLocal_3735 = 0;
	int iLocal_3736 = 0;
	int iLocal_3737 = 0;
	int iLocal_3738 = 0;
	int iLocal_3739[19] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char* sLocal_3759[19] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_3779 = 0;
	int iLocal_3780 = 0;
	var uLocal_3781 = 0;
	var uLocal_3782 = 0;
	var uLocal_3783 = 0;
	var uLocal_3784 = 0;
	var uLocal_3785 = 0;
	var uLocal_3786 = 0;
	int iLocal_3787 = 0;
	int iLocal_3788 = 0;
	var uLocal_3789 = 0;
	var uLocal_3790 = 0;
	int iLocal_3791 = 0;
	int iLocal_3792 = 0;
	int iLocal_3793 = 0;
	int iLocal_3794 = 0;
	struct<4> Local_3795 = { 0, 0, 0, 2 } ;
	var uLocal_3799 = 0;
	var uLocal_3800 = 0;
	var uLocal_3801 = 0;
	var uLocal_3802 = 0;
	var uLocal_3803 = 0;
	var uLocal_3804 = 0;
	var uLocal_3805 = 0;
	var uLocal_3806 = 0;
	bool bLocal_3807 = false;
	struct<4> Local_3808[2];
	bool bLocal_3817 = false;
	var uLocal_3818 = 0;
	var uLocal_3819 = 0;
	var uLocal_3820 = 0;
	var uLocal_3821 = 0;
	var uLocal_3822 = 0;
	var uLocal_3823 = 0;
	bool bLocal_3824 = false;
	int iLocal_3825 = 0;
	bool bLocal_3826 = false;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
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
	iLocal_3514 = -1;
	iLocal_3716 = joaat("UI_LETTER_TILLY");
	iLocal_3717 = joaat("WORLD_PLAYER_INSPECT_LETTER_80CM_PAPER_W18_9_H28_2_FOLDVERTICALX2_P_CS_RT_LETTERL_DBL");
	vLocal_3721 = { -1644.826f, -1359.316f, 84.2079f };
	iLocal_3724 = joaat("UI_LETTER_PEARSON");
	iLocal_3725 = joaat("WORLD_PLAYER_INSPECT_LETTER_105CM_PAPER_W15_1_H24_FOLDVERTICAL_P_CS_LETTER03X");
	vLocal_3729 = { -1632.548f, -1357.204f, 83.384f };
	bLocal_3824 = true;
	Local_18.f_46 = uScriptParam_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2698))
	{
		func_1(&Local_18);
	}
	__LIB_5__::func_802();
	func_3();
	__LIB_6__::func_433();
	__LIB_6__::func_261();
	func_6(&(Local_18.f_1721));
	func_7(&(Local_18.f_1797));
	func_8(&(Local_18.f_1869));
	func_9();
	func_10(&Local_18);
	while (__LIB_0__::func_0())
	{
		BUILTIN::WAIT(0);
		bVar0 = __LIB_4__::func_635(16);
		__LIB_5__::func_803(&(Local_18.f_1721));
		__LIB_5__::func_803(&(Local_18.f_1797));
		__LIB_5__::func_803(&(Local_18.f_1869));
		__LIB_5__::func_803(&(Local_18.f_1934));
		__LIB_6__::func_456();
		__LIB_17__::func_952();
		__LIB_17__::func_953();
		if (!bVar0)
		{
			if (__LIB_5__::func_804())
			{
				__LIB_6__::func_573(Local_18.f_3054, Local_18.f_3055, Global_1357549.f_1900);
			}
		}
		switch (Local_18)
		{
			case 0:
				if (__LIB_6__::func_262())
				{
					__LIB_5__::func_805(1);
				}
				break;
			case 1:
				__LIB_6__::func_533(&Local_18);
				func_22();
				__LIB_6__::func_538();
				__LIB_6__::func_340();
				__LIB_6__::func_507();
				__LIB_0__::func_11();
				__LIB_6__::func_534(&(Local_18.f_2024), &(Global_40.f_4283.f_415));
				if (!bVar0)
				{
					__LIB_6__::func_480();
					func_29();
					__LIB_6__::func_545();
				}
				__LIB_6__::func_466(&Local_18);
				iVar1 = __LIB_0__::func_592();
				if (!bVar0 && iVar1 == 1)
				{
					func_33(Local_18.f_45, Local_18.f_46);
					if (__LIB_5__::func_806(Local_18.f_45))
					{
						__LIB_6__::func_593(Local_18.f_45, &(Local_18.f_2024));
						__LIB_6__::func_627(0);
						__LIB_6__::func_379();
						__LIB_6__::func_401(__LIB_1__::func_533(4194304));
					}
				}
				else
				{
					__LIB_6__::func_467(Local_18.f_45);
				}
				__LIB_6__::func_414(&Global_1898004, Local_18.f_46);
				func_42(&Local_18);
				if (!bVar0)
				{
					func_43(&(Local_18.f_51), &(Local_18.f_2024));
				}
				if (__LIB_1__::func_533(32768))
				{
					__LIB_6__::func_263(&(Global_1357549.f_3));
					func_45(&Local_18);
					func_46();
					if (__LIB_6__::func_173(Local_18.f_45, iVar1))
					{
						func_48(&(Global_1357549.f_1691));
					}
					__LIB_6__::func_487(&Local_18);
					__LIB_5__::func_547(32768);
				}
				if (__LIB_5__::func_807() && __LIB_6__::func_173(Local_18.f_45, iVar1))
				{
					func_52(Local_18.f_45, &(Global_1357549.f_1691));
				}
				else if (Global_1357549.f_1691 != 0)
				{
					func_48(&(Global_1357549.f_1691));
				}
				break;
			case 2:
				func_53(&Local_18, 0);
				__LIB_0__::func_11("Shutdown camp....", 1, 1);
				SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
		__LIB_6__::func_53();
	}
	func_53(&Local_18, 0);
	if (__LIB_0__::func_2() == -1)
	{
	}
	else
	{
		__LIB_2__::func_822();
	}
}

void func_1(int iParam0)
{
	func_53(iParam0, 1);
	__LIB_6__::func_153(iParam0->f_46, 1);
	if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
	{
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_3()
{
	__LIB_5__::func_808(0, 14994, 0);
	__LIB_5__::func_808(1, 15351, 1);
	__LIB_5__::func_808(2, 15367, 1);
	__LIB_5__::func_808(3, 15430, 1);
	__LIB_5__::func_808(4, 15461, 2);
	__LIB_5__::func_808(5, 15575, 16);
	__LIB_5__::func_808(6, 15710, 1);
	__LIB_5__::func_808(7, 16324, 4);
	__LIB_5__::func_808(8, 16418, 1);
	__LIB_5__::func_808(9, 16548, 128);
	__LIB_5__::func_808(10, 16557, 792);
	__LIB_5__::func_808(11, 16605, 1024);
}

void func_6(var uParam0)
{
	struct<2> Var0;
	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(uParam0, &Var0, 65);
	__LIB_5__::func_813(uParam0, 0, 17286, 17390, 17829);
	__LIB_5__::func_813(uParam0, 1, 18117, 18163, 18629);
	__LIB_5__::func_813(uParam0, 2, 18659, 18697, 19125);
	__LIB_5__::func_813(uParam0, 3, 19155, 19181, 19260);
	__LIB_5__::func_813(uParam0, 4, 19268, 19422, 19260);
	__LIB_6__::func_268(uParam0, 0);
}

void func_7(var uParam0)
{
	struct<2> Var0;
	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(uParam0, &Var0, 65);
	__LIB_5__::func_813(uParam0, 0, 19494, 19572, 19260);
	__LIB_5__::func_813(uParam0, 1, 20728, 20855, 19260);
	__LIB_5__::func_813(uParam0, 2, 19260, 21697, 19260);
	__LIB_5__::func_813(uParam0, 3, 21855, 22401, 19260);
	__LIB_5__::func_813(uParam0, 4, 23029, 23259, 19260);
	__LIB_5__::func_813(uParam0, 5, 23682, 23715, 19260);
	__LIB_5__::func_813(uParam0, 6, 24432, 24517, 19260);
	__LIB_6__::func_268(uParam0, 0);
}

void func_8(var uParam0)
{
	struct<2> Var0;
	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(uParam0, &Var0, 65);
	__LIB_5__::func_813(uParam0, 0, 24572, 24654, 19260);
	__LIB_5__::func_813(uParam0, 1, 24975, 25011, 19260);
	__LIB_5__::func_813(uParam0, 2, 25480, 25611, 26020);
	__LIB_5__::func_813(uParam0, 3, 26039, 26106, 26510);
	__LIB_6__::func_268(uParam0, 0);
}

void func_9()
{
	struct<2> Var0;
	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(&(Local_18.f_1934), &Var0, 65);
	__LIB_5__::func_813(&(Local_18.f_1934), 0, 26579, 26616, 19260);
	__LIB_5__::func_813(&(Local_18.f_1934), 1, 26799, 26822, 19260);
	__LIB_5__::func_813(&(Local_18.f_1934), 2, 27027, 27074, 19260);
	__LIB_5__::func_813(&(Local_18.f_1934), 3, 27348, 27399, 19260);
	__LIB_5__::func_813(&(Local_18.f_1934), 4, 27418, 27474, 19260);
	__LIB_6__::func_268(&(Local_18.f_1934), 0);
}

void func_10(var uParam0)
{
	uParam0->f_45 = 8;
	uParam0->f_47 = 15;
	uParam0->f_1714 = { __LIB_1__::func_438() };
	uParam0->f_1717 = 0f;
	if (!__LIB_5__::func_807())
	{
		__LIB_6__::func_617();
	}
	if (Global_40.f_4283.f_5 >= 9 || __LIB_1__::func_187(1))
	{
		__LIB_6__::func_189(&(Local_3661[0 /*4*/]), joaat("PERSCHAR_CAMP_ROOSTER"), 0, "BeechersHope/bch_default_chickens");
		__LIB_6__::func_189(&(Local_3661[1 /*4*/]), joaat("PERSCHAR_CAMP_CHICKEN_1"), 0, "BeechersHope/bch_default_chickens");
		__LIB_6__::func_189(&(Local_3661[2 /*4*/]), joaat("PERSCHAR_CAMP_CHICKEN_2"), 0, "BeechersHope/bch_default_chickens");
		__LIB_6__::func_189(&(Local_3661[3 /*4*/]), joaat("PERSCHAR_CAMP_CHICKEN_3"), 0, "BeechersHope/bch_default_chickens");
		__LIB_6__::func_189(&(Local_3661[4 /*4*/]), joaat("PERSCHAR_CAMP_CHICKEN_4"), 0, "BeechersHope/bch_default_chickens");
		__LIB_6__::func_189(&(Local_3661[5 /*4*/]), joaat("PERSCHAR_CAMP_ES_COW"), 0, "BeechersHope/bch_default_cow");
		__LIB_6__::func_189(&(Local_3661[6 /*4*/]), joaat("PERSCHAR_COMP_HORSE_COMMON_1"), 0, "BeechersHope/bch_default_horses");
		__LIB_6__::func_189(&(Local_3661[7 /*4*/]), joaat("PERSCHAR_COMP_HORSE_COMMON_2"), 0, "BeechersHope/bch_default_horses");
		__LIB_6__::func_189(&(Local_3661[8 /*4*/]), joaat("PERSCHAR_COMP_HORSE_COMMON_3"), 0, "BeechersHope/bch_default_horses");
		__LIB_6__::func_189(&(Local_3661[9 /*4*/]), joaat("PERSCHAR_CAMP_ES_SHEEP_1"), 0, "BeechersHope/bch_default_sheep");
		__LIB_6__::func_189(&(Local_3661[10 /*4*/]), joaat("PERSCHAR_CAMP_ES_SHEEP_2"), 0, "BeechersHope/bch_default_sheep");
		__LIB_6__::func_189(&(Local_3661[11 /*4*/]), joaat("PERSCHAR_CAMP_ES_SHEEP_3"), 0, "BeechersHope/bch_default_sheep");
		__LIB_6__::func_189(&(Local_3661[12 /*4*/]), joaat("PERSCHAR_CAMP_ES_COW_2"), 0, "BeechersHope/bch_default_cow_2");
	}
	STREAMING::REQUEST_MODEL(joaat("CHUCKWAGON002X"), false);
	PROPSET::_REQUEST_PROPSET(joaat("PG_TEAMSTER_CHUCKWAGON002X_GEN"));
	func_129();
	__LIB_1__::func_948(-1679361598, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(-1449650908, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(-1169508727, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(-925412446, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(-702255556, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(-1017263949, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(-760486065, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(-537755172, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(220978254, 0, 0, 0, 1, 0, 0, 0);
	OBJECT::_0x7F458B543006C8FE(-1679361598, 18);
	OBJECT::_0x7F458B543006C8FE(-1449650908, 18);
	OBJECT::_0x7F458B543006C8FE(-1169508727, 18);
	OBJECT::_0x7F458B543006C8FE(-925412446, 18);
	OBJECT::_0x7F458B543006C8FE(-702255556, 18);
	OBJECT::_0x7F458B543006C8FE(-1017263949, 18);
	OBJECT::_0x7F458B543006C8FE(-760486065, 18);
	OBJECT::_0x7F458B543006C8FE(-537755172, 18);
	OBJECT::_0x7F458B543006C8FE(220978254, 18);
	__LIB_5__::func_548(262144);
	AUDIO::SET_AUDIO_FLAG("DisableInhibitIdleMusicInCamp", true);
	if (!__LIB_6__::func_272())
	{
		__LIB_5__::func_823(10, 3);
	}
}

void func_22()
{
	char* sVar0;
	float fVar1;
	int iVar2;
	if (__LIB_2__::func_776())
	{
		return;
	}
	if (Global_1357549.f_1658 == 0)
	{
		if ((CLOCK::GET_CLOCK_SECONDS() % 20) != 0)
		{
			return;
		}
	}
	Global_1357549.f_1659[0] = 0;
	Global_1357549.f_1659[1] = 1;
	sVar0 = "script@common@cnv_camp@grief@tent@tentgrief";
	fVar1 = 21f;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Global_1357549.f_1663[iVar2]) == 0)
		{
			Global_1357549.f_1663[iVar2] = __LIB_6__::func_273(Global_1357549.f_1659[iVar2]);
		}
		switch (Global_1357549.f_1658)
		{
			case 0:
				if (__LIB_6__::func_345(iVar2))
				{
					if (__LIB_6__::func_177(iVar2))
					{
						if (__LIB_0__::func_75(&(Global_1357549.f_1651[iVar2 /*3*/])))
						{
							if (__LIB_0__::func_265(&(Global_1357549.f_1651[iVar2 /*3*/])) > fVar1)
							{
								if (__LIB_1__::func_307(Global_1357549.f_1659[iVar2], 1, 1) || __LIB_1__::func_302(Global_1357549.f_1659[iVar2], 8))
								{
									Global_1357549.f_1666 = 0;
									Global_1357549.f_1667 = 0;
									Global_1357549.f_1658 = 1;
								}
							}
							else if (__LIB_0__::func_265(&(Global_1357549.f_1651[iVar2 /*3*/])) > (fVar1 - 5f) && Global_1357549.f_1666 == 0)
							{
								Global_1357549.f_1666 = 1;
								__LIB_1__::func_265(__LIB_0__::func_271(Global_1357549.f_1659[iVar2]), "EXPLAIN_YOURSELF", 272211449, Global_35, 1, 0, 0, 1);
								TASK::TASK_LOOK_AT_ENTITY(__LIB_0__::func_271(Global_1357549.f_1659[iVar2]), Global_35, 2000, 0, 51, 0);
							}
							else if (__LIB_0__::func_265(&(Global_1357549.f_1651[iVar2 /*3*/])) > (fVar1 - 12f) && Global_1357549.f_1667 == 0)
							{
								Global_1357549.f_1667 = 1;
								TASK::TASK_LOOK_AT_ENTITY(__LIB_0__::func_271(Global_1357549.f_1659[iVar2]), Global_35, 2000, 0, 51, 0);
								__LIB_1__::func_265(__LIB_0__::func_271(Global_1357549.f_1659[iVar2]), "INTRUDED_AGAIN", 272211449, Global_35, 1, 0, 0, 1);
							}
							else if (Global_1357549.f_1668 == 0)
							{
								if (__LIB_3__::func_982())
								{
									Global_1357549.f_1668 = 1;
									__LIB_1__::func_265(__LIB_0__::func_271(Global_1357549.f_1659[iVar2]), "ITEM_PICKUP_REACT", joaat("SPEECH_PARAMS_FORCE"), Global_35, 1, 0, 0, 1);
								}
							}
						}
						else
						{
							__LIB_1__::func_265(__LIB_0__::func_271(Global_1357549.f_1659[iVar2]), "GET_OUT", 272211449, Global_35, 1, 0, 0, 1);
							__LIB_1__::func_283(&(Global_1357549.f_1651[iVar2 /*3*/]), 0);
						}
					}
					else if (__LIB_0__::func_75(&(Global_1357549.f_1651[iVar2 /*3*/])))
					{
						Global_1357549.f_1666 = 0;
						Global_1357549.f_1667 = 0;
						Global_1357549.f_1668 = 0;
						__LIB_0__::func_37(&(Global_1357549.f_1651[iVar2 /*3*/]));
					}
				}
				break;
			case 1:
				if (__LIB_0__::func_75(&(Global_1357549.f_1651[iVar2 /*3*/])))
				{
					if (__LIB_1__::func_22(Global_1357549.f_1659[iVar2]))
					{
						Global_1357549.f_1669 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 0, 0, false, true);
						ANIMSCENE::LOAD_ANIM_SCENE(Global_1357549.f_1669);
						ANIMSCENE::_0xDF7B5144E25CD3FE(Global_1357549.f_1669, __LIB_5__::func_828(Global_1357549.f_1659[iVar2]));
						Global_1357549.f_1658 = 5;
					}
					else
					{
						func_185(Global_1357549.f_1659[iVar2], 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					}
				}
				break;
			case 5:
				if (__LIB_0__::func_75(&(Global_1357549.f_1651[iVar2 /*3*/])))
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_1357549.f_1669))
					{
						if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Global_1357549.f_1669, true, false))
						{
							if (ANIMSCENE::_0x23E33CB9F4A3F547(Global_1357549.f_1669, __LIB_5__::func_828(Global_1357549.f_1659[iVar2])))
							{
								__LIB_6__::func_405(Global_1357549.f_1659[iVar2]);
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Global_1357549.f_1669, __LIB_5__::func_828(Global_1357549.f_1659[iVar2]), true);
								PED::SET_PED_CONFIG_FLAG(Global_35, 174, true);
								ANIMSCENE::START_ANIM_SCENE(Global_1357549.f_1669);
								__LIB_1__::func_265(__LIB_0__::func_271(Global_1357549.f_1659[iVar2]), "LEAVE_NOW", 272211449, Global_35, 1, 0, 0, 1);
								Global_1357549.f_1658 = 6;
							}
						}
					}
				}
				break;
			case 6:
				if (__LIB_0__::func_75(&(Global_1357549.f_1651[iVar2 /*3*/])))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Global_1357549.f_1669))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						ANIMSCENE::_0xAE6ADA8FE7E84ACC(Global_1357549.f_1669, __LIB_5__::func_828(Global_1357549.f_1659[iVar2]));
						ANIMSCENE::RESET_ANIM_SCENE(Global_1357549.f_1669, 0);
						ANIMSCENE::_DELETE_ANIM_SCENE(Global_1357549.f_1669);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(__LIB_0__::func_271(Global_1357549.f_1659[iVar2]), joaat("REL_GANG_DUTCHS"));
						PED::SET_PED_CONFIG_FLAG(__LIB_0__::func_271(Global_1357549.f_1659[iVar2]), 40, false);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
						PERSCHAR::_0x631CD2D77FDC0316(PERSCHAR::_0x32A1E3B83D501096(__LIB_0__::func_271(Global_1357549.f_1659[iVar2])));
						__LIB_1__::func_774(Global_1357549.f_1659[iVar2], 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
						__LIB_1__::func_148(&(Global_1357549.f_1651[iVar2 /*3*/]));
						Global_1357549.f_1658 = 7;
					}
				}
				break;
			case 7:
				if (__LIB_0__::func_75(&(Global_1357549.f_1651[iVar2 /*3*/])))
				{
					if (__LIB_0__::func_265(&(Global_1357549.f_1651[iVar2 /*3*/])) > 1.5f)
					{
						__LIB_0__::func_37(&(Global_1357549.f_1651[iVar2 /*3*/]));
						__LIB_5__::func_829(Global_1357549.f_1659[iVar2]);
						PED::SET_PED_CONFIG_FLAG(Global_35, 174, false);
						Global_1357549.f_1658 = 0;
					}
				}
				break;
		}
		iVar2++;
	}
}

void func_29()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		iVar1 = 0;
		while (iVar1 < 15)
		{
			switch (Local_18.f_3057[iVar1 /*21*/].f_3)
			{
				case 0:
					if (__LIB_1__::func_533(4))
					{
						if (__LIB_0__::func_139(Local_18.f_3057[iVar1 /*21*/]))
						{
							__LIB_1__::func_281(&(Local_18.f_3057[iVar1 /*21*/]), 1, 1);
						}
					}
					else if (VOLUME::_DOES_VOLUME_EXIST(Local_18.f_3057[iVar1 /*21*/].f_4))
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_18.f_3057[iVar1 /*21*/].f_4, false, 0))
						{
							if (!__LIB_0__::func_86(Local_18.f_3057[iVar1 /*21*/].f_6))
							{
								if (!__LIB_0__::func_139(Local_18.f_3057[iVar1 /*21*/]))
								{
									Local_18.f_3057[iVar1 /*21*/] = __LIB_2__::func_513(__LIB_5__::func_834(), Local_18.f_3057[iVar1 /*21*/].f_16, Local_18.f_3057[iVar1 /*21*/].f_4, 2, 1, 0, Local_18.f_3057[iVar1 /*21*/].f_17, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
									if ((iVar1 == 0 || iVar1 == 8) || iVar1 == 4)
									{
										__LIB_1__::func_522(Local_18.f_3057[iVar1 /*21*/], 26, 1, 1);
									}
									if (Local_18.f_3057[iVar1 /*21*/].f_18 != -1)
									{
										__LIB_4__::func_12(Local_18.f_3057[iVar1 /*21*/], Local_18.f_3057[iVar1 /*21*/].f_18, 0, 1);
									}
								}
								else if ((Local_18.f_3057[iVar1 /*21*/].f_17 == 0 && __LIB_1__::func_514(Local_18.f_3057[iVar1 /*21*/], 1)) || (Local_18.f_3057[iVar1 /*21*/].f_17 != 0 && __LIB_0__::func_567(Local_18.f_3057[iVar1 /*21*/], 1)))
								{
									__LIB_1__::func_281(&(Local_18.f_3057[iVar1 /*21*/]), 1, 1);
									Local_18.f_3057[iVar1 /*21*/].f_3 = 1;
								}
							}
						}
					}
					break;
				case 1:
					if (__LIB_0__::func_153(Global_35, 0, 1, 1) == joaat("WEAPON_KIT_BINOCULARS"))
					{
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_LOOK_AT_COORD(0, Local_18.f_3057[iVar1 /*21*/].f_6, -1, 1, 51, 1);
					TASK::TASK_PAUSE(0, 400);
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_18.f_3057[iVar1 /*21*/].f_6, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
					Local_18.f_3057[iVar1 /*21*/].f_3 = 2;
					break;
				case 2:
					if (!CAM::DOES_CAM_EXIST(Local_18.f_3057[iVar1 /*21*/].f_5))
					{
						if (!__LIB_0__::func_86(Local_18.f_3057[iVar1 /*21*/].f_9))
						{
							Local_18.f_3057[iVar1 /*21*/].f_5 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_18.f_3057[iVar1 /*21*/].f_9, Local_18.f_3057[iVar1 /*21*/].f_12, Local_18.f_3057[iVar1 /*21*/].f_15, false, 2);
						}
					}
					if (Local_18.f_3057[iVar1 /*21*/].f_19 != -1)
					{
						__LIB_6__::func_347(iVar1);
						if (__LIB_0__::func_139(Local_18.f_3057[iVar1 /*21*/].f_1))
						{
							if (func_221(iVar1))
							{
							}
							else
							{
								if (__LIB_0__::func_86(Local_18.f_3057[iVar1 /*21*/].f_9))
								{
									if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
									{
										CAM::SET_GAMEPLAY_COORD_HINT(Local_18.f_3057[iVar1 /*21*/].f_6, -1, 2000, 2000, 0);
									}
								}
								else if (CAM::DOES_CAM_EXIST(Local_18.f_3057[iVar1 /*21*/].f_5))
								{
									if (!CAM::IS_CAM_RENDERING(Local_18.f_3057[iVar1 /*21*/].f_5))
									{
										CAM::SET_CAM_ACTIVE(Local_18.f_3057[iVar1 /*21*/].f_5, true);
										CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
									}
								}
								__LIB_6__::func_348(iVar1);
								HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 2, 1, 799218720, Local_18.f_3057[iVar1 /*21*/].f_20, 0);
								if (__LIB_0__::func_139(Local_18.f_3057[iVar1 /*21*/].f_2))
								{
									if (__LIB_1__::func_732(Local_18.f_3057[iVar1 /*21*/].f_2, 1))
									{
										if (Local_18.f_3057[iVar1 /*21*/].f_19 != -1)
										{
											iVar2 = 0;
											while (iVar2 < 15)
											{
												Local_18.f_3057[iVar2 /*21*/].f_3 = 0;
												__LIB_1__::func_281(&(Local_18.f_3057[iVar2 /*21*/]), 1, 1);
												__LIB_1__::func_281(&(Local_18.f_3057[iVar2 /*21*/].f_1), 1, 1);
												__LIB_1__::func_281(&(Local_18.f_3057[iVar2 /*21*/].f_2), 1, 1);
												iVar2++;
											}
										}
										Local_18.f_3057[iVar1 /*21*/].f_3 = 4;
									}
								}
								Jump @1081; //curOff = 1059
								Jump @1081; //curOff = 1062
								func_224(&(Local_18.f_3057[iVar1 /*21*/]));
							}
							iVar1++;
						}
					}
					default:
						break;
			}
		}
	}
}

void func_33(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_5__::func_837(iParam0);
	if (iVar0 != -1)
	{
		if (!__LIB_2__::func_804(19, 4))
		{
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1914319.f_3[19 /*446*/].f_26))
			{
				VOLUME::_DELETE_VOLUME(Global_1914319.f_3[19 /*446*/].f_26);
			}
			switch (iParam0)
			{
				case 1:
					iVar1 = VOLUME::_CREATE_VOLUME_BOX(-142.2027f, -23.89317f, 95.0883f, 0f, 0f, -19.50431f, 2f, 1.8f, 5f);
					break;
				case 2:
					iVar1 = VOLUME::_CREATE_VOLUME_BOX(674.9565f, -1251.201f, 43.0152f, 0f, 0f, -101.9433f, 2f, 1.8f, 5f);
					break;
				case 3:
					iVar1 = VOLUME::_CREATE_VOLUME_BOX(1874.646f, -1859.152f, 41.8f, 0f, 0f, -99.40799f, 2f, 1.8f, 5f);
					break;
				case 6:
					iVar1 = VOLUME::_CREATE_VOLUME_BOX(2365.858f, 1346.675f, 105.1305f, 0f, 0f, -22.49011f, 2f, 1.8f, 5f);
					break;
			}
			__LIB_5__::func_792(19, 16384);
			__LIB_5__::func_792(19, 32768);
			func_240(19, -1, Global_1357549.f_3[4], iParam1, iVar1, 0, 12, -1082130432 /* Float: -1f */, 0, 0);
		}
		if (__LIB_6__::func_125(iVar0))
		{
			__LIB_6__::func_350(iVar0, 19, 0, 1);
		}
	}
}

void func_42(int iParam0)
{
	__LIB_6__::func_556(&Local_3661, &uLocal_3714, &iLocal_3514, 1);
	func_271(&(iParam0->f_51), &Local_3515);
	func_272(&(iParam0->f_51), &Local_3515);
	func_273(iParam0);
	__LIB_6__::func_351(&uLocal_3718, &uLocal_3720, &uLocal_3719, vLocal_3721, iLocal_3716, joaat("DOCUMENT_LETTER_TILLY"), iLocal_3717);
	__LIB_6__::func_351(&uLocal_3726, &uLocal_3728, &uLocal_3727, vLocal_3729, iLocal_3724, 24394704 /* GXTEntry: "Letter from Mr. Pearson" */, iLocal_3725);
	func_275();
	func_276();
	func_277();
}

void func_43(int* iParam0, var uParam1)
{
	if (__LIB_5__::func_842())
	{
		__LIB_5__::func_843(iParam0);
		__LIB_5__::func_844(0, 0);
		__LIB_5__::func_845();
	}
	__LIB_6__::func_535(iParam0);
	func_283(iParam0, uParam1);
	__LIB_6__::func_536(iParam0);
	__LIB_6__::func_353(iParam0, uParam1);
	if (!__LIB_5__::func_847(__LIB_5__::func_846()))
	{
		return;
	}
	__LIB_6__::func_127(iParam0);
}

void func_45(int iParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bVar0 = __LIB_1__::func_185(73);
	bVar1 = __LIB_1__::func_185(70);
	iParam0->f_1713 = 9;
	iVar2 = 0;
	Global_1357549.f_3[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("BeechersHope volCampAreas[CVA_INNER]");
	if ((__LIB_0__::func_898(588987611) || __LIB_0__::func_898(227918160)) || __LIB_0__::func_898(2008888900))
	{
		__LIB_6__::func_354(&(Global_1357549.f_3[0]), &iVar2, 0, -1638.882f, -1356.022f, 112.498f, 0f, 0f, 74.99999f, 3f, 2f, 40f, joaat("VOLCYLINDER"), 0);
	}
	if (((__LIB_0__::func_898(1649996811) || __LIB_0__::func_898(227918160)) || __LIB_0__::func_898(168171957)) || __LIB_0__::func_898(2008888900))
	{
		__LIB_6__::func_354(&(Global_1357549.f_3[0]), &iVar2, 0, -1670.094f, -1342.445f, 101.6522f, 0f, 0f, -34f, 14f, 9f, 50f, joaat("VOLBOX"), 0);
	}
	if (__LIB_0__::func_898(168171957) || __LIB_0__::func_898(227918160))
	{
		__LIB_6__::func_354(&(Global_1357549.f_3[0]), &iVar2, 0, -1626.051f, -1401.164f, 93.2211f, 0f, 0f, 7.999992f, 4.75f, 4.75f, 40f, joaat("VOLBOX"), 0);
		__LIB_6__::func_354(&(Global_1357549.f_3[0]), &iVar2, 0, -1629.937f, -1392.412f, 96.2211f, 0f, 0f, -41f, 4.25f, 4.25f, 40f, joaat("VOLBOX"), 0);
	}
	if (((__LIB_0__::func_898(168171957) || __LIB_0__::func_898(1193080109)) || __LIB_0__::func_898(-491981251)) || __LIB_0__::func_898(-618620429))
	{
		__LIB_6__::func_354(&(Global_1357549.f_3[0]), &iVar2, 0, -1641.548f, -1360.057f, 98.3145f, 0f, 0f, -30f, 14.55f, 17.25f, 40f, joaat("VOLBOX"), 0);
		__LIB_6__::func_354(&(Global_1357549.f_3[0]), &iVar2, 0, -1642.431f, -1361.456f, 98.45139f, 0f, 0f, -30f, 21.5f, 12.5f, 40f, joaat("VOLBOX"), 0);
		__LIB_6__::func_354(&(Global_1357549.f_3[0]), &iVar2, 0, -1648.027f, -1347.69f, 98f, 0f, 0f, -30f, 9.25f, 5.75f, 40f, joaat("VOLBOX"), 0);
		__LIB_6__::func_354(&(Global_1357549.f_3[0]), &iVar2, 0, -1643.429f, -1370.81f, 98.289f, 0f, 0f, -30f, 13.75f, 7f, 40f, joaat("VOLBOX"), 0);
		__LIB_6__::func_354(&(Global_1357549.f_3[0]), &iVar2, 0, -1648.45f, -1372.039f, 98.061f, 0f, 0f, -30f, 6.25f, 2f, 40f, joaat("VOLBOX"), 0);
	}
	if (__LIB_0__::func_898(-491981251) || __LIB_0__::func_898(-618620429))
	{
		__LIB_6__::func_354(&(Global_1357549.f_3[0]), &iVar2, 0, -1674.602f, -1344.577f, 115.2522f, 0f, 0f, 0f, 2.75f, 2.75f, 40f, joaat("VOLCYLINDER"), 0);
		__LIB_6__::func_354(&(Global_1357549.f_3[0]), &iVar2, 0, -1661.908f, -1336.698f, 109.565f, 0f, 0f, 0f, 2.75f, 2.5f, 40f, joaat("VOLCYLINDER"), 0);
		__LIB_6__::func_354(&(Global_1357549.f_3[0]), &iVar2, 0, -1627.55f, -1331.23f, 108.5894f, 0f, 0f, -21f, 2.25f, 1.5f, 40f, joaat("VOLCYLINDER"), 0);
	}
	if ((__LIB_0__::func_898(1193080109) || __LIB_0__::func_898(-491981251)) || __LIB_0__::func_898(-618620429))
	{
		__LIB_6__::func_354(&(Global_1357549.f_3[0]), &iVar2, 0, -1582.914f, -1393.803f, 98.08f, 0f, 0f, -25f, 5.5f, 6f, 40f, joaat("VOLBOX"), 0);
	}
	Global_1357549.f_3[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("BeechersHope volCampAreas[CVA_OUTER]");
	Global_1357549.f_3[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("BeechersHope volCampAreas[CVA_OUTER_THRESHOLD]");
	__LIB_6__::func_354(&(Global_1357549.f_3[2]), &(Global_1357549.f_3[3]), 2, -1618.26f, -1387.421f, 121.6319f, 0f, 0f, 51.00005f, 50f, 75f, 50f, joaat("VOLCYLINDER"), 0);
	Global_1357549.f_3[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("BeechersHope volCampAreas[CVA_SURROUNDING]");
	Global_1357549.f_3[5] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("BeechersHope volCampAreas[CVA_SURROUNDING_THRESHOLD]");
	__LIB_6__::func_354(&(Global_1357549.f_3[4]), &(Global_1357549.f_3[5]), 4, -1626.729f, -1375.789f, 114.5493f, 0f, 0f, 6f, 101f, 126f, 50f, joaat("VOLCYLINDER"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[4]), &(Global_1357549.f_3[5]), 4, -1704.27f, -1433.937f, 112.6512f, 0f, 0f, 9.999996f, 28f, 84f, 60f, joaat("VOLBOX"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[4]), &(Global_1357549.f_3[5]), 4, -1661.808f, -1479.296f, 124.6512f, 0f, 0f, -13.99999f, 54f, 19f, 50f, joaat("VOLCYLINDER"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[4]), &(Global_1357549.f_3[5]), 4, -1580.68f, -1489.235f, 120.2263f, 0f, 0f, 13f, 31f, 5f, 40f, joaat("VOLCYLINDER"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[4]), &(Global_1357549.f_3[5]), 4, -1547.357f, -1454.696f, 123.6074f, 0f, 0f, -27f, 11f, 40f, 40f, joaat("VOLCYLINDER"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[4]), &(Global_1357549.f_3[5]), 4, -1530.24f, -1400.403f, 107.1596f, 0f, 0f, 0f, 7f, 55f, 60f, joaat("VOLBOX"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[4]), &(Global_1357549.f_3[5]), 4, -1556.43f, -1315.928f, 96.0094f, 0f, 0f, 2.5f, 55f, 106f, 60f, joaat("VOLBOX"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[4]), &(Global_1357549.f_3[5]), 4, -1562.405f, -1255.967f, 117.9601f, 0f, 0f, -27f, 37f, 19f, 50f, joaat("VOLCYLINDER"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[4]), &(Global_1357549.f_3[5]), 4, -1607.675f, -1256.359f, 100.8084f, 0f, 0f, 19f, 61f, 34f, 60f, joaat("VOLBOX"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[4]), &(Global_1357549.f_3[5]), 4, -1700.762f, -1293.963f, 121.3372f, 0f, 0f, -130f, 28f, 10f, 40f, joaat("VOLCYLINDER"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[4]), &(Global_1357549.f_3[5]), 4, -1721.101f, -1328.251f, 117.2535f, 0f, 0f, -13f, 7f, 43f, 60f, joaat("VOLBOX"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[4]), &(Global_1357549.f_3[5]), 4, -1722.965f, -1358.271f, 121.4061f, 0f, 0f, 3.000003f, 7f, 22f, 40f, joaat("VOLCYLINDER"), 0);
	if (bVar1)
	{
		Global_1357549.f_3[6] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1641.649f, -1360.09f, 85.30408f, 0f, 0f, -29.80834f, 14f, 16f, 4f, "BeechersHope volCampAreas[CVA_PROPERTY]");
	}
	else if (bVar0)
	{
		Global_1357549.f_3[6] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1669.27f, -1342.481f, 84.53038f, 0f, 0f, -30.98296f, 14.1664f, 8.399044f, 4.258486f, "BeechersHope volCampAreas[CVA_PROPERTY]");
	}
	else
	{
		Global_1357549.f_3[6] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1640.215f, -1360.859f, 83.3224f, 0f, 0f, -29.80834f, 6.267948f, 4.391808f, 5.871133f, "BeechersHope volCampAreas[CVA_PROPERTY]");
	}
}

void func_46()
{
	Global_1888801[37 /*35*/].f_15 = { __LIB_1__::func_438() };
	Global_1888801[37 /*35*/].f_18 = 1;
	Global_1395601.f_5[15 /*28*/].f_15 = { Global_1888801[37 /*35*/].f_15 };
	__LIB_1__::func_948(1606546482, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(1731691513, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(-1984149246, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(818583340, 0, 0, 0, 1, 0, 0, 0);
}

void func_48(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_4))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_4));
	}
	MISC::CLEAR_BIT(&(uParam0->f_1), 2);
	func_293(uParam0);
	func_294(uParam0);
	if (MISC::IS_BIT_SET(uParam0->f_1, 6))
	{
		__LIB_5__::func_849(1, uParam0);
	}
	if (uParam0->f_6 != -1)
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&(uParam0->f_6), 0);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_5))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_5);
	}
	__LIB_5__::func_850(uParam0);
}

void func_52(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	switch (*uParam1)
	{
		case 0:
			if (__LIB_6__::func_157(iParam0))
			{
				__LIB_6__::func_492(iParam0, uParam1);
				__LIB_5__::func_851(uParam1, 2);
			}
			break;
		case 2:
			if (__LIB_6__::func_157(iParam0))
			{
				if (!MISC::IS_BIT_SET(uParam1->f_1, 2))
				{
					if (MISC::IS_BIT_SET(uParam1->f_1, 5))
					{
						func_294(uParam1);
					}
					if (!MISC::IS_BIT_SET(uParam1->f_1, 3))
					{
						__LIB_6__::func_128(uParam1);
					}
					if ((!ENTITY::IS_ENTITY_DEAD(Global_35) && VOLUME::_DOES_VOLUME_EXIST(uParam1->f_5)) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam1->f_5, true, 0))
					{
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE"), false);
					}
					if (!PED::IS_PED_ON_MOUNT(Global_35))
					{
						if (MISC::IS_BIT_SET(uParam1->f_1, 4))
						{
							__LIB_5__::func_793(uParam1->f_8, 0);
							MISC::CLEAR_BIT(&(uParam1->f_1), 4);
						}
					}
					else if (!MISC::IS_BIT_SET(uParam1->f_1, 4))
					{
						__LIB_5__::func_793(uParam1->f_8, 1);
						MISC::SET_BIT(&(uParam1->f_1), 4);
					}
				}
				else
				{
					if (MISC::IS_BIT_SET(uParam1->f_1, 3))
					{
						func_293(uParam1);
					}
					if (!MISC::IS_BIT_SET(uParam1->f_1, 5))
					{
						__LIB_6__::func_527(uParam1);
					}
					if ((ENTITY::IS_ENTITY_DEAD(Global_35) || !VOLUME::_DOES_VOLUME_EXIST(uParam1->f_5)) || !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam1->f_5, true, 0))
					{
						MISC::CLEAR_BIT(&(uParam1->f_1), 2);
					}
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), false);
					HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(1842627646, "BLIP_CAMP_HITCH", 1, 0, 0, 0);
				}
			}
			else
			{
				if (MISC::IS_BIT_SET(uParam1->f_1, 5))
				{
					func_294(uParam1);
				}
				if (MISC::IS_BIT_SET(uParam1->f_1, 3))
				{
					func_293(uParam1);
				}
				if (MISC::IS_BIT_SET(uParam1->f_1, 2))
				{
					MISC::CLEAR_BIT(&(uParam1->f_1), 2);
				}
			}
			if (MISC::IS_BIT_SET(uParam1->f_1, 3))
			{
				if (!MISC::IS_BIT_SET(uParam1->f_1, 4))
				{
					if (__LIB_0__::func_567(uParam1->f_8, 1))
					{
						if (__LIB_6__::func_528(&iVar0))
						{
							__LIB_1__::func_515(uParam1->f_8, 1);
							MISC::SET_BIT(&(uParam1->f_1), 2);
						}
						else
						{
							switch (iVar0)
							{
								case -1:
									break;
								case 0:
									if (!__LIB_0__::func_474(611))
									{
										__LIB_0__::func_45("TF_CAMP_HITCH_MANAGE_HORSES_NO_HORSES", 10000, 0, 0, 0, 1);
										__LIB_6__::func_63(611);
									}
									break;
								case 1:
									if (!__LIB_0__::func_474(612))
									{
										__LIB_0__::func_45("TF_CAMP_HITCH_MANAGE_HORSES_HORSE_DEAD", 10000, 0, 0, 0, 1);
										__LIB_6__::func_63(612);
									}
									break;
								case 2:
									if (!__LIB_2__::func_453())
									{
										if (iParam0 == 7 || iParam0 == 8)
										{
											__LIB_0__::func_45("TF_CAMP_HITCH_MANAGE_HORSES_UNAVAILABLE_RANCH", 10000, 0, 0, 0, 1);
										}
										else
										{
											__LIB_0__::func_45("TF_CAMP_HITCH_MANAGE_HORSES_UNAVAILABLE_CAMP", 10000, 0, 0, 0, 1);
										}
									}
									break;
							}
						}
					}
				}
			}
			if (MISC::IS_BIT_SET(uParam1->f_1, 5))
			{
				if (__LIB_1__::func_732(uParam1->f_10, 1))
				{
					MISC::SET_BIT(&(uParam1->f_1), 7);
					MISC::CLEAR_BIT(&(uParam1->f_1), 2);
					__LIB_5__::func_849(0, uParam1);
					func_294(uParam1);
					__LIB_5__::func_851(uParam1, 3);
					return;
				}
				if (__LIB_1__::func_732(uParam1->f_11, 1))
				{
					uParam1->f_7 = 0;
					MISC::CLEAR_BIT(&(uParam1->f_1), 2);
					MISC::CLEAR_BIT(&(uParam1->f_1), 7);
					__LIB_5__::func_849(0, uParam1);
					func_294(uParam1);
					__LIB_5__::func_851(uParam1, 3);
					return;
				}
				iVar1 = 0;
				while (iVar1 < 3)
				{
					if (__LIB_1__::func_732(uParam1->f_12[iVar1], 1))
					{
						uParam1->f_7 = __LIB_5__::func_772(iVar1);
						MISC::CLEAR_BIT(&(uParam1->f_1), 2);
						MISC::CLEAR_BIT(&(uParam1->f_1), 7);
						__LIB_5__::func_849(0, uParam1);
						func_294(uParam1);
						__LIB_5__::func_851(uParam1, 3);
						return;
					}
					iVar1++;
				}
				if (__LIB_1__::func_732(uParam1->f_9, 1))
				{
					func_294(uParam1);
					MISC::CLEAR_BIT(&(uParam1->f_1), 2);
				}
			}
			break;
		case 3:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(800);
				}
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(Global_35, __LIB_6__::func_406(iParam0), true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, __LIB_6__::func_407(iParam0));
				if (MISC::IS_BIT_SET(uParam1->f_1, 7))
				{
					__LIB_5__::func_851(uParam1, 6);
				}
				else
				{
					__LIB_5__::func_851(uParam1, 4);
				}
			}
			break;
		case 4:
			if (!MISC::IS_BIT_SET(uParam1->f_1, 1))
			{
				if (uParam1->f_7 != 0)
				{
					__LIB_6__::func_494(uParam1->f_7);
				}
				__LIB_3__::func_618(__LIB_6__::func_484(iParam0, -1), 0.5f, 1, 1, 0, 0, 0);
				uParam1->f_7 = -1;
				MISC::SET_BIT(&(uParam1->f_1), 1);
				return;
			}
			if (__LIB_6__::func_546(iParam0, uParam1))
			{
				__LIB_6__::func_129(0);
				__LIB_6__::func_130();
				if (__LIB_0__::func_819(0) == 0)
				{
					__LIB_17__::func_957(0, 5);
				}
				ENTITY::SET_ENTITY_COORDS(Global_35, __LIB_6__::func_406(iParam0), true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, __LIB_6__::func_407(iParam0));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				uParam1->f_2 = MISC::GET_GAME_TIMER() + 500;
				__LIB_5__::func_851(uParam1, 5);
			}
			break;
		case 6:
			if (!MISC::IS_BIT_SET(uParam1->f_1, 8))
			{
				if (__LIB_0__::func_988())
				{
					__LIB_0__::func_989();
				}
				__LIB_0__::func_148(2);
				__LIB_0__::func_150(__LIB_6__::func_408(iParam0));
				PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
				MISC::CLEAR_AREA(__LIB_6__::func_408(iParam0), 0.4f, 2442122);
				MISC::SET_BIT(&(uParam1->f_1), 8);
			}
			if (__LIB_6__::func_511(__LIB_6__::func_408(iParam0), 0f, 1))
			{
				PHYSICS::ACTIVATE_PHYSICS(Global_1900383.f_393);
				ENTITY::SET_ENTITY_COORDS(Global_35, __LIB_6__::func_406(iParam0), true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, __LIB_6__::func_407(iParam0));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				MISC::CLEAR_BIT(&(uParam1->f_1), 8);
				MISC::CLEAR_BIT(&(uParam1->f_1), 7);
				uParam1->f_2 = MISC::GET_GAME_TIMER() + 500;
				__LIB_5__::func_851(uParam1, 5);
			}
			break;
		case 5:
			if (MISC::GET_GAME_TIMER() > uParam1->f_2)
			{
				__LIB_5__::func_849(1, uParam1);
				__LIB_5__::func_851(uParam1, 7);
			}
			break;
		case 7:
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
			else
			{
				uParam1->f_3 = 0;
				MISC::CLEAR_BIT(&(uParam1->f_1), 2);
				__LIB_5__::func_851(uParam1, 2);
			}
			break;
	}
}

void func_53(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 473, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 474, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 475, false);
	__LIB_5__::func_841();
	HUD::_DISPLAY_HUD_COMPONENT(-950624750);
	if (__LIB_1__::func_533(2097152) && PED::GET_PED_CONFIG_FLAG(Global_35, 334, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 334, false);
		__LIB_5__::func_547(2097152);
	}
	__LIB_5__::func_852(iParam0);
	__LIB_6__::func_279(iParam0);
	__LIB_0__::func_698(235110816);
	if (!__LIB_2__::func_776())
	{
		if (!__LIB_4__::func_635(64))
		{
			__LIB_0__::func_267(1);
			__LIB_1__::func_142(0);
		}
		if (bParam1 == 0)
		{
			__LIB_0__::func_703(1, -1);
		}
		MISC::_0x1096603B519C905F("");
		if (!PED::_IS_PED_CARRYING(PLAYER::PLAYER_PED_ID()) && !(__LIB_0__::func_272(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), 0) && PED::_IS_PED_CARRYING(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()))))
		{
			PED::_0x9851DE7AEC10B4E1(__LIB_1__::func_546(__LIB_0__::func_317()), __LIB_1__::func_496(), 1, 0);
		}
	}
	if (__LIB_5__::func_853(4))
	{
		__LIB_0__::func_867(0);
	}
	PLAYER::_0x9461A8FAB0378E5B(PLAYER::PLAYER_ID(), 0);
	__LIB_6__::func_416(1, 0, 1103626240 /* Float: 25f */);
	if (!__LIB_4__::func_635(16777216))
	{
		__LIB_6__::func_357();
		__LIB_0__::func_698(16777216);
	}
	if (!__LIB_4__::func_635(2048))
	{
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
		__LIB_0__::func_698(2048);
	}
	if (__LIB_4__::func_635(32))
	{
		__LIB_6__::func_388(1);
		__LIB_0__::func_698(32);
	}
	if (__LIB_1__::func_533(1073741824 /* Float: 2f */))
	{
		__LIB_5__::func_547(1073741824 /* Float: 2f */);
	}
	func_343(&(iParam0->f_51));
	__LIB_5__::func_854();
	__LIB_2__::func_819(iParam0->f_46);
	AUDIO::SET_AUDIO_FLAG("EnableIdleMusic", false);
	__LIB_0__::func_25(iParam0->f_46, 4);
	__LIB_0__::func_25(iParam0->f_46, 8);
	__LIB_1__::func_899(0);
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_1__::func_900(0);
	}
	if (__LIB_5__::func_855(32))
	{
		__LIB_0__::func_698(4);
		__LIB_0__::func_698(2);
		__LIB_5__::func_856(32);
		iVar0 = 0;
		while (iVar0 < Global_1360165)
		{
			if (!__LIB_0__::func_699(iVar0) && __LIB_0__::func_866(iVar0, 0))
			{
				__LIB_1__::func_640(iVar0);
			}
			iVar0++;
		}
	}
	if (Local_18.f_1721.f_62 == 3)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(0);
		}
		func_89();
		__LIB_6__::func_485();
	}
	if (__LIB_0__::func_61() == iParam0->f_46)
	{
		__LIB_6__::func_409(bParam1);
		__LIB_5__::func_833(1073741824 /* Float: 2f */);
		__LIB_6__::func_158(0, 0, 0);
	}
	if (__LIB_1__::func_902(iParam0->f_46, &iVar2, &iVar3, 0, 0))
	{
		iVar1 = iVar2;
		while (iVar1 <= iVar3)
		{
			if (!__LIB_2__::func_763(iVar1, 0))
			{
				__LIB_3__::func_229(iVar1);
			}
			iVar1++;
		}
	}
	iVar4 = 0;
	while (iVar4 < 2)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Global_1357549.f_1663[iVar4]))
		{
			VOLUME::_DELETE_VOLUME(Global_1357549.f_1663[iVar4]);
		}
		iVar4++;
	}
	__LIB_6__::func_64();
	__LIB_5__::func_857();
	__LIB_6__::func_420(iParam0);
	func_361(iParam0);
	__LIB_6__::func_65();
	__LIB_6__::func_66();
	__LIB_5__::func_858();
	__LIB_6__::func_61();
	__LIB_5__::func_859(0);
	GRAPHICS::REMOVE_DECALS_IN_RANGE(__LIB_1__::func_546(__LIB_0__::func_317()), 100f);
	if (__LIB_5__::func_855(8))
	{
		__LIB_0__::func_395(0);
		__LIB_5__::func_856(8);
	}
	if (!__LIB_4__::func_635(64))
	{
		__LIB_6__::func_124(1);
	}
	if (__LIB_5__::func_860(1))
	{
		TASK::_0x816A3ACD265E2297(joaat("DEAD_CARRIABLE_HUMAN"), 1);
		__LIB_5__::func_861(1);
	}
	if (__LIB_5__::func_860(8192))
	{
		TASK::_0x816A3ACD265E2297(joaat("HOGTIED_PED"), 1);
		__LIB_5__::func_861(8192);
	}
	iVar5 = __LIB_0__::func_398(7);
	if (ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		PED::SET_PED_CONFIG_FLAG(iVar5, 419, false);
	}
	__LIB_0__::func_698(229376);
	__LIB_5__::func_547(2560);
	Global_1357549.f_1896 = 0;
	PED::_0x0ADA3EC589E1736E();
	if (__LIB_0__::func_69(__LIB_1__::func_898()))
	{
		__LIB_1__::func_883(__LIB_1__::func_898(), 8);
	}
	__LIB_6__::func_439(&(Local_18.f_2024));
	__LIB_6__::func_280(&(Local_18.f_2024));
	__LIB_6__::func_281(&(Local_18.f_2024));
	Local_18.f_43 = 0;
	func_48(&(Global_1357549.f_1691));
	__LIB_0__::func_18();
	if (Local_18.f_2019 != 0 && __LIB_1__::func_533(16777216))
	{
		MAP::_0xE057FEA9A22EB3EE(Local_18.f_2019);
		__LIB_5__::func_547(16777216);
	}
	if (!__LIB_1__::func_533(67108864))
	{
		FIRE::_0x24DB6B9F2B719043(-1f);
	}
	if (__LIB_1__::func_533(-2147483648))
	{
		if (__LIB_5__::func_831(1024))
		{
			__LIB_5__::func_833(1024);
		}
		if (__LIB_5__::func_831(64))
		{
			__LIB_5__::func_833(64);
		}
		if (__LIB_1__::func_533(131072))
		{
			__LIB_5__::func_547(131072);
		}
		__LIB_5__::func_547(-2147483648);
	}
	if (__LIB_0__::func_317() == 2 || __LIB_0__::func_317() == 3)
	{
		if (__LIB_5__::func_862(13, 0) > 1)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("PIROGUE"));
		}
	}
	__LIB_5__::func_863(8);
	__LIB_5__::func_863(16);
	__LIB_0__::func_8(&Global_1935630, 8388608);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
}

int func_59()
{
	int iVar0;
	char cVar1[64];
	MISC::_0x9BF2C0C568C61641(1);
	if (__LIB_0__::func_69(__LIB_1__::func_882(Local_18.f_46)))
	{
		__LIB_1__::func_883(__LIB_1__::func_882(Local_18.f_46), 4);
	}
	if (__LIB_1__::func_533(32768))
	{
		__LIB_5__::func_547(32768);
	}
	__LIB_6__::func_282(__LIB_5__::func_865(__LIB_5__::func_864(Local_18.f_46)));
	iVar0 = __LIB_5__::func_866(__LIB_0__::func_317());
	__LIB_4__::func_253(iVar0, joaat("CSTP_PERSIST_ACROSS_STATES"), 1120952528, -1, 1, 1, 0);
	__LIB_5__::func_867(Local_18.f_45, Global_40.f_4283.f_4, &(Local_18.f_2019));
	__LIB_1__::func_924();
	func_45(&Local_18);
	__LIB_6__::func_487(&Local_18);
	__LIB_1__::func_889(&Global_1898004);
	__LIB_2__::func_766(&Global_1898004, Global_1357549.f_3[2], 1);
	if ((ENTITY::DOES_ENTITY_EXIST(Global_35) && PED::_IS_PED_CARRYING(Global_35)) || (ENTITY::DOES_ENTITY_EXIST(PED::GET_MOUNT(Global_35)) && PED::_IS_PED_CARRYING(PED::GET_MOUNT(Global_35))))
	{
		__LIB_0__::func_326(33554432);
		__LIB_3__::func_121(17, -2147483648, 1, -1);
		StringCopy(&cVar1, __LIB_5__::func_868(__LIB_0__::func_317()), 64);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
		{
			func_393(17, cVar1, 2);
		}
	}
	if (__LIB_0__::func_317() == 2 || __LIB_0__::func_317() == 3)
	{
		if (__LIB_5__::func_862(13, 0) > 1)
		{
			STREAMING::REQUEST_MODEL(joaat("PIROGUE"), false);
		}
	}
	__LIB_6__::func_537();
	return 1;
}

int func_64()
{
	if (__LIB_0__::func_317() == 2 || __LIB_0__::func_317() == 3)
	{
		if (__LIB_5__::func_862(13, 0) > 1)
		{
			if (!STREAMING::HAS_MODEL_LOADED(joaat("PIROGUE")))
			{
				return 0;
			}
		}
	}
	if (func_398())
	{
		if (!__LIB_0__::func_296(0, 0, 1))
		{
			__LIB_0__::func_568(__LIB_1__::func_546(__LIB_0__::func_317()), __LIB_1__::func_496(), 0);
			__LIB_1__::func_206(__LIB_1__::func_546(__LIB_0__::func_317()), __LIB_1__::func_496(), 0);
		}
		return 1;
	}
	return 0;
}

int func_65()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (Local_18.f_3479 == -1)
	{
		func_401(Local_18.f_45, 1, 1);
		Local_18.f_3479 = 0;
	}
	if (__LIB_5__::func_869(Local_18.f_45))
	{
		iVar0 = __LIB_1__::func_953(Local_18.f_45);
		iVar1 = 0;
		while (iVar1 < 6)
		{
			__LIB_6__::func_284(iVar0, Local_18.f_3479, iVar1, 1, 1);
			iVar1++;
		}
		iVar2 = Local_18.f_3479;
		iVar2++;
		Local_18.f_3479 = iVar2;
		if (Local_18.f_3479 >= 26)
		{
			Local_18.f_3479 = -1;
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_68()
{
	bool bVar0;
	int iVar1;
	if (!MISC::IS_BIT_SET(Local_18.f_43, 3))
	{
		Local_18.f_42 = MISC::GET_GAME_TIMER() + 15000;
		Global_1357549.f_2 = 0;
		__LIB_0__::func_11();
		MISC::SET_BIT(&(Local_18.f_43), 3);
	}
	bVar0 = false;
	if (func_420(&Local_18))
	{
		bVar0 = true;
	}
	else if (MISC::GET_GAME_TIMER() > Local_18.f_42)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		__LIB_0__::func_24(Local_18.f_46, 4);
		iVar1 = 0;
		while (iVar1 < 27)
		{
			__LIB_0__::func_290(iVar1, 4, 1);
			iVar1++;
		}
		return 1;
	}
	return 0;
}

int func_70()
{
	func_423(&Local_18);
	func_46();
	func_424(&(Local_18.f_51));
	func_425();
	__LIB_5__::func_871();
	__LIB_6__::func_627(1);
	__LIB_0__::func_11();
	__LIB_6__::func_486();
	return 1;
}

void func_89()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		TASK::TASK_DISMOUNT_ANIMAL(Global_35, 16, 0, 0, 0, 0);
	}
	PLAYER::_0x8674D138391FFB1B(PLAYER::GET_PLAYER_INDEX(), 1);
	vVar2 = { func_442(__LIB_0__::func_317(), &uVar0, &uVar1) };
	__LIB_0__::func_321(vVar2, uVar1, uVar0, 0);
	__LIB_1__::func_954(0);
	__LIB_5__::func_116();
	__LIB_0__::func_320(6);
	__LIB_0__::func_319(4096);
	Global_1310720.f_6 = 1;
	Global_1310720.f_17 = 8;
	iVar5 = 0;
	while (iVar5 < 27)
	{
		iVar6 = __LIB_0__::func_271(iVar5);
		if (ENTITY::DOES_ENTITY_EXIST(iVar6))
		{
			PED::_0x06D26A96CA1BCA75(iVar6, 1, 0f, 0);
		}
		iVar5++;
	}
	__LIB_6__::func_179();
}

void func_115()
{
	Local_18.f_1934.f_65 = 0;
	Local_18.f_1934.f_66 = 0;
	GRAPHICS::_0x5199405EABFBD7F0("CamTransitionBlinkSlow");
	func_475();
}

int func_116()
{
	if (func_476())
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > 0.5f)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 203, true);
		}
	}
	if (!func_477())
	{
		return -1;
	}
	if (!PED::_IS_PED_CARRYING(Global_35))
	{
		return -1;
	}
	Local_18.f_1934.f_66 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
	if ((ENTITY::DOES_ENTITY_EXIST(Local_18.f_1934.f_66) && ENTITY::IS_ENTITY_A_PED(Local_18.f_1934.f_66)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Local_18.f_1934.f_66)))
	{
		return -1;
	}
	else if (__LIB_6__::func_390(Local_18.f_1934.f_66))
	{
		Local_18.f_1934.f_83 = 1;
	}
	else if (__LIB_3__::func_417(Global_35))
	{
		Local_18.f_1934.f_84 = 1;
	}
	return 1;
}

int func_118()
{
	float fVar0;
	if (!func_477())
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_18.f_1934.f_66))
	{
		return 0;
	}
	if (PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35) != Local_18.f_1934.f_66)
	{
		return 0;
	}
	if (PED::IS_PED_IN_MELEE_COMBAT(Global_35))
	{
		return -1;
	}
	if (func_476())
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > 0.5f)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 203, true);
		}
	}
	if (!__LIB_2__::func_366(Global_35))
	{
		return -1;
	}
	if (__LIB_0__::func_163(Global_35, -208384378))
	{
		return -1;
	}
	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	fVar0 = BUILTIN::VDIST2(Global_36, __LIB_5__::func_263(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_6, Local_18.f_1934.f_67));
	if (fVar0 > 3f)
	{
		return 2;
	}
	return 3;
}

void func_129()
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_3795))
	{
		Local_3795 = ANIMSCENE::_CREATE_ANIM_SCENE("scenario@mech@prop_player_food_order@table@stew@action_pl_female", 0, "pl_Action_Left", false, true);
		Local_3795.f_1 = 2;
		Local_3795.f_2 = 1;
		Local_3795.f_3[0] = "pl_Action_Left";
		Local_3795.f_3[1] = "pl_Action_Right";
	}
	func_486(&Local_3808, joaat("P_SPOON01X"), "p_spoon01x_PH_R_HAND", 0);
	func_486(&Local_3808, joaat("P_BEEFSTEW01X"), "p_bowl04x_stew_PH_L_HAND", 1);
	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("PROP_PLAYER_DYNAMIC_SEAT_CHAIR_TABLE"), 1, ENTITY::GET_ENTITY_MODEL(Global_35), 0);
	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("PROP_CAMP_SEAT_CHAIR_TABLE_STEW"), 3, ENTITY::GET_ENTITY_MODEL(Global_35), 0);
	STREAMING::REQUEST_MODEL(Local_3808[1 /*4*/].f_2, false);
	STREAMING::REQUEST_MODEL(Local_3808[0 /*4*/].f_2, false);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_3795);
}

int func_185(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
				func_541(Global_1360165[iParam0 /*1157*/], vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
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

bool func_221(int iParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bVar0 = __LIB_5__::func_649(Local_18.f_3057[iParam0 /*21*/].f_1, 1, 1);
	bVar1 = __LIB_5__::func_649(Local_18.f_3057[iParam0 /*21*/].f_1, 0, 1);
	if (bVar0 || bVar1)
	{
		__LIB_1__::func_281(&(Local_18.f_3057[iParam0 /*21*/].f_1), 1, 1);
		iVar2 = iParam0;
		iVar3 = 0;
		while (iVar3 < 15)
		{
			if (bVar0)
			{
				iVar2++;
				if (iVar2 >= 15)
				{
					iVar2 = 0;
				}
			}
			else
			{
				iVar2 = (iVar2 - 1);
				if (iVar2 < 0)
				{
					iVar2 = 14;
				}
			}
			if (Local_18.f_3057[iVar2 /*21*/].f_19 == Local_18.f_3057[iParam0 /*21*/].f_19)
			{
				func_584(iParam0, iVar2);
				return true;
			}
			iVar3++;
		}
	}
	return false;
}

void func_224(int iParam0)
{
	if (iParam0->f_3 != 0)
	{
		if (CAM::DOES_CAM_EXIST(iParam0->f_5))
		{
			if (CAM::IS_CAM_RENDERING(iParam0->f_5))
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			}
			CAM::DESTROY_CAM(iParam0->f_5, false);
		}
		if (__LIB_0__::func_139(iParam0->f_2))
		{
			__LIB_1__::func_281(&(iParam0->f_2), 1, 1);
		}
		if (__LIB_0__::func_139(iParam0->f_1))
		{
			__LIB_1__::func_281(&(iParam0->f_1), 1, 1);
		}
		if (__LIB_0__::func_139(*iParam0))
		{
			__LIB_1__::func_281(iParam0, 1, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			TASK::TASK_CLEAR_LOOK_AT(Global_35);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		}
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
		iParam0->f_3 = 0;
	}
}

void func_240(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	if (iParam0 == 11)
	{
		return;
	}
	iVar0 = func_595(iParam3, iParam0);
	vVar1 = { func_596(iVar0) };
	vVar4 = { __LIB_4__::func_847(iVar0) };
	if (__LIB_0__::func_86(vVar1))
	{
		return;
	}
	if (!__LIB_4__::func_922(19, 16384))
	{
		if (!__LIB_0__::func_29(iParam1))
		{
			return;
		}
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam2))
	{
		return;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	__LIB_2__::func_772(iParam0);
	Global_1914319.f_3[iParam0 /*446*/].f_22 = -1;
	Global_1914319.f_3[iParam0 /*446*/].f_11 = { vVar1 };
	if (__LIB_0__::func_86(vVar4))
	{
		Global_1914319.f_3[iParam0 /*446*/].f_11 = { vVar1 };
	}
	else
	{
		Global_1914319.f_15936[iVar0 /*6*/].f_2 = { vVar4 };
	}
	Global_1914319.f_3[iParam0 /*446*/].f_10 = iVar0;
	Global_1914319.f_3[iParam0 /*446*/].f_25 = iParam2;
	Global_1914319.f_3[iParam0 /*446*/].f_26 = iParam4;
	Global_1914319.f_3[iParam0 /*446*/].f_28 = iParam5;
	Global_1914319.f_3[iParam0 /*446*/].f_29 = iParam9;
	Global_1914319.f_3[iParam0 /*446*/].f_9 = iParam3;
	Global_1914319.f_3[iParam0 /*446*/].f_409 = iParam8;
	if (__LIB_2__::func_779(iVar0) || __LIB_2__::func_780(iVar0, iParam0))
	{
		switch (iVar0)
		{
			case 29:
				iVar7 = joaat("SHOP_RHO_GUNSMITH");
				break;
			case 61:
				iVar7 = joaat("SHOP_STR_GENERAL_STORE");
				break;
			case 73:
				iVar7 = joaat("SHOP_VAL_DOCTOR");
				break;
			case 43:
				iVar7 = joaat("SHOP_SDN_GUNSMITH");
				break;
			case 41:
				iVar7 = joaat("SHOP_SDN_FENCE");
				break;
		}
		Global_1914319.f_3[iParam0 /*446*/].f_20 = __LIB_1__::func_293(5, Global_1914319.f_3[iParam0 /*446*/].f_10, 2, iVar7);
	}
	Global_1393529.f_114[iParam0 /*3*/] = { 0f, 0f, 0f };
	Global_1393529.f_220[iParam0] = 0f;
	Global_1393529.f_569[iParam0] = 0;
	StringCopy(&(Global_1393529.f_288[iParam0 /*8*/]), "", 64);
	if (fParam7 <= 0f)
	{
		fParam7 = __LIB_2__::func_781(iParam0);
	}
	Global_1914319.f_3[iParam0 /*446*/].f_19 = fParam7;
	Global_1914319.f_3[iParam0 /*446*/].f_8 = iParam6;
	if (!__LIB_6__::func_133(iParam0, iParam1))
	{
	}
	switch (iParam0)
	{
		case 1:
		case 2:
			__LIB_2__::func_820(iParam3);
			break;
		case 10:
			__LIB_2__::func_782(iParam3);
			break;
		case 18:
			__LIB_2__::func_783();
			break;
		case 9:
			__LIB_2__::func_784();
			break;
		case 22:
			__LIB_2__::func_785();
			break;
	}
	__LIB_2__::func_809(Global_1914319.f_3[iParam0 /*446*/].f_10);
	__LIB_1__::func_943(iParam0, 16);
	__LIB_2__::func_810(iParam0, 4);
	VOLUME::_0x748C5F51A18CB8F0(1);
}

void func_271(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	bool bVar9;
	bool bVar10;
	if (uParam0->f_1581 != 15 && __LIB_2__::func_7())
	{
		uParam0->f_1581 = 15;
	}
	if (!__LIB_6__::func_575(uParam0))
	{
		if (!__LIB_0__::func_86(uParam0->f_1603) && !CAM::IS_SPHERE_VISIBLE(uParam0->f_1603, 2f))
		{
			__LIB_1__::func_206(uParam0->f_1603, 5f, 2);
			uParam0->f_1603 = { 0f, 0f, 0f };
		}
		if (!__LIB_0__::func_27(uParam0->f_1598, 262144) && __LIB_6__::func_206(14))
		{
			__LIB_1__::func_206(-107.8019f, -36.5988f, 94.9012f, 5f, 0);
			__LIB_1__::func_683(&(uParam0->f_1598), 262144);
		}
		if (uParam0->f_1581 > 1 && uParam0->f_1581 < 11)
		{
			if ((uParam1[uParam0->f_1645 /*8*/])->f_2 == 2)
			{
				__LIB_6__::func_296(uParam0, uParam1[uParam0->f_1645 /*8*/]);
				if (!uParam0->f_1617)
				{
					TASK::SET_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES_WOOD_CHOP", false);
				}
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES", false);
			uParam0->f_1581 = -1;
			__LIB_6__::func_207(uParam1);
			if (__LIB_0__::func_139(uParam0->f_1611))
			{
				__LIB_0__::func_629(__LIB_0__::func_17(uParam0->f_1611), 0);
			}
			if (__LIB_1__::func_533(4))
			{
				__LIB_6__::func_207(uParam1);
				__LIB_1__::func_281(&(uParam0->f_1610), 1, 1);
				uParam0->f_1581 = -1;
				func_676(uParam0, uParam1, 1, 1, 0);
			}
		}
	}
	else if (uParam0->f_1581 == -1)
	{
		__LIB_1__::func_681(&(uParam0->f_1598), 262144);
		__LIB_6__::func_296(uParam0, uParam1[uParam0->f_1645 /*8*/]);
		TASK::SET_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES_WOOD_CHOP", true);
		TASK::SET_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES", true);
		__LIB_6__::func_208(uParam1);
		__LIB_6__::func_654(uParam0, uParam1);
	}
	if (__LIB_1__::func_533(4) && (uParam0->f_1581 != 11 || uParam0->f_1581 != -1))
	{
		if (PED::IS_PED_SWIMMING(Global_35) || PED::_IS_PED_CLIMBING_LADDER(Global_35))
		{
			if (__LIB_0__::func_139(uParam0->f_1610))
			{
				__LIB_1__::func_281(&(uParam0->f_1610), 1, 1);
			}
			if (__LIB_0__::func_139(uParam0->f_1610))
			{
				__LIB_1__::func_515(uParam0->f_1610, 1);
			}
			uParam0->f_1581 = 11;
			func_676(uParam0, uParam1, 0, 1, 1);
		}
	}
	if (__LIB_0__::func_272(Global_35, 0) && __LIB_6__::func_209(uParam0))
	{
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_35, false);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_1616) && !CAM::IS_SPHERE_VISIBLE(TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_1616, true), 1.5f))
	{
		TASK::_DELETE_SCENARIO_POINT(uParam0->f_1616);
	}
	if (__LIB_0__::func_27(uParam0->f_1598, 32))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 21, true);
		PED::SET_PED_RESET_FLAG(Global_35, 288, true);
		PED::SET_PED_RESET_FLAG(Global_35, 168, true);
		PED::SET_PED_RESET_FLAG(Global_35, 202, true);
		PAD::_SET_CONTROL_CONTEXT(6, joaat("PLAYERPERFOMINGCHORE"));
		if (uParam0->f_1590.f_1 == 14)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 316, true);
		}
	}
	if (!__LIB_6__::func_209(uParam0) && __LIB_0__::func_139(uParam0->f_1610))
	{
		__LIB_1__::func_281(&(uParam0->f_1610), 1, 1);
	}
	if ((uParam0->f_1625 && __LIB_0__::func_62(Global_36, __LIB_6__::func_210()) > 25f) && !CAM::IS_SPHERE_VISIBLE(__LIB_6__::func_210(), 1.5f))
	{
		vVar1 = { 0f, 0f, 0f };
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!MISC::IS_BIT_SET(uParam0->f_1626, __LIB_0__::func_470(iVar0)))
			{
				vVar1 = { __LIB_6__::func_211(iVar0) };
			}
			else
			{
				iVar0++;
			}
		}
		if (!__LIB_0__::func_86(vVar1))
		{
			if (uParam0->f_1624 == 5)
			{
				uParam0->f_1619[iVar0] = OBJECT::CREATE_OBJECT(joaat("P_MILKCAN01X"), vVar1, true, true, false, false, true);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_1619[iVar0], Global_36603, 0, vVar1, 0f, 0f, 0f, false, false, false, false, 2, true, true, false);
			}
			else if (uParam0->f_1624 == 6)
			{
				uParam0->f_1619[iVar0] = OBJECT::CREATE_OBJECT(joaat("P_CRATE03X"), vVar1, true, true, false, false, true);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_1619[iVar0], Global_36603, 0, vVar1, 0f, 0f, 0f, false, false, false, false, 2, true, true, false);
			}
			MISC::SET_BIT(&(uParam0->f_1626), __LIB_0__::func_470(iVar0));
			TASK::_0x4161648394262FDF(__LIB_6__::func_210(), 1f);
			uParam0->f_1625 = 0;
		}
	}
	if (__LIB_0__::func_27(uParam0->f_1598, 524288))
	{
		vVar5 = { 0f, 0f, 0f };
		if (uParam0->f_1630.f_2 > 2)
		{
			iVar8 = 2;
		}
		else
		{
			iVar8 = uParam0->f_1630.f_2;
		}
		iVar4 = 0;
		while (iVar4 < iVar8)
		{
			vVar5 = { 0f, 0f, 0f };
			if (!MISC::IS_BIT_SET(uParam0->f_1626, __LIB_0__::func_470(iVar4)))
			{
				vVar5 = { __LIB_6__::func_211(iVar4) };
				if (!__LIB_0__::func_86(vVar5))
				{
					uParam0->f_1619[iVar4] = OBJECT::CREATE_OBJECT(joaat("P_MILKCAN01X"), vVar5, true, true, false, false, true);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_1619[iVar4], Global_36603, 0, vVar5, 0f, 0f, 0f, false, false, false, false, 2, true, true, false);
					MISC::SET_BIT(&(uParam0->f_1626), __LIB_0__::func_470(iVar4));
				}
			}
			iVar4++;
		}
		if (uParam0->f_1630.f_3 > 2)
		{
			iVar8 = 4;
		}
		else
		{
			iVar8 = (iVar8 + uParam0->f_1630.f_3);
		}
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < iVar8)
		{
			vVar5 = { 0f, 0f, 0f };
			if (!MISC::IS_BIT_SET(uParam0->f_1626, __LIB_0__::func_470(iVar4)))
			{
				vVar5 = { __LIB_6__::func_211(iVar4) };
				if (!__LIB_0__::func_86(vVar5))
				{
					uParam0->f_1619[iVar4] = OBJECT::CREATE_OBJECT(joaat("P_CRATE03X"), vVar5, true, true, false, false, true);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_1619[iVar4], Global_36603, 0, vVar5, 0f, 0f, 0f, false, false, false, false, 2, true, true, false);
					MISC::SET_BIT(&(uParam0->f_1626), __LIB_0__::func_470(iVar4));
				}
			}
			iVar4++;
		}
		__LIB_1__::func_681(&(uParam0->f_1598), 524288);
	}
	switch (uParam0->f_1581)
	{
		case 0:
			func_685(uParam0, uParam1);
			break;
		case 1:
			if (__LIB_6__::func_212(uParam0))
			{
				func_687(uParam0, uParam1);
			}
			break;
		case 2:
			__LIB_6__::func_652(uParam0, uParam1);
			break;
		case 3:
			__LIB_6__::func_637(uParam0, uParam1);
			break;
		case 8:
			if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				GRAPHICS::_0x1C6306E5BC25C29C();
			}
			func_690(uParam0, uParam1);
			PED::SET_PED_RESET_FLAG(Global_35, 21, true);
			PED::SET_PED_RESET_FLAG(Global_35, 288, true);
			PED::SET_PED_RESET_FLAG(Global_35, 168, true);
			PED::SET_PED_RESET_FLAG(Global_35, 202, true);
			PAD::_SET_CONTROL_CONTEXT(6, joaat("PLAYERPERFOMINGCHORE"));
			if (uParam0->f_1590.f_1 == 14)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 316, true);
			}
			if (__LIB_0__::func_272(Global_35, 0))
			{
				PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.35f);
			}
			bVar9 = PED::IS_PED_USING_ANY_SCENARIO(Global_35);
			if ((!__LIB_0__::func_139(uParam0->f_1610) && !bVar9) && uParam0->f_1582.f_2 != 5)
			{
				uParam0->f_1610 = __LIB_2__::func_512("EXIT_CHORE", joaat("INPUT_CONTEXT_B"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				__LIB_0__::func_629(__LIB_0__::func_17(uParam0->f_1610), 0);
			}
			if (bVar9 && __LIB_1__::func_264(uParam0->f_1610, 1))
			{
				__LIB_0__::func_629(__LIB_0__::func_17(uParam0->f_1610), 0);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
			}
			else if (!bVar9 && !__LIB_1__::func_264(uParam0->f_1610, 1))
			{
				__LIB_0__::func_629(__LIB_0__::func_17(uParam0->f_1610), 1);
			}
			else if (!__LIB_1__::func_264(uParam0->f_1610, 1))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
			}
			if (__LIB_0__::func_317() == 8)
			{
				if (!__LIB_0__::func_474(297))
				{
					__LIB_6__::func_213(297);
				}
			}
			else if (!__LIB_0__::func_474(296))
			{
				__LIB_6__::func_213(296);
			}
			func_693(uParam0, uParam1);
			break;
		case 4:
			func_690(uParam0, uParam1);
			func_694(uParam0, uParam1);
			func_693(uParam0, uParam1);
			break;
		case 9:
			func_690(uParam0, uParam1);
			CAM::_0x71D71E08A7ED5BD7(1);
			if (__LIB_6__::func_297())
			{
				uParam0->f_1581 = 5;
			}
			break;
		case 5:
			if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				GRAPHICS::_0x1C6306E5BC25C29C();
			}
			PED::SET_PED_RESET_FLAG(Global_35, 21, true);
			PED::SET_PED_RESET_FLAG(Global_35, 168, true);
			PED::SET_PED_RESET_FLAG(Global_35, 288, true);
			PED::SET_PED_RESET_FLAG(Global_35, 202, true);
			if (uParam0->f_1590.f_1 == 14)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 316, true);
			}
			PAD::_SET_CONTROL_CONTEXT(6, joaat("PLAYERPERFOMINGCHORE"));
			bVar10 = PED::IS_PED_USING_ANY_SCENARIO(Global_35);
			if (uParam0->f_1582.f_1 != 7)
			{
				if ((!__LIB_0__::func_139(uParam0->f_1610) && !bVar10) && uParam0->f_1582.f_2 != 5)
				{
					uParam0->f_1610 = __LIB_2__::func_512("EXIT_CHORE", joaat("INPUT_CONTEXT_B"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					__LIB_0__::func_629(__LIB_0__::func_17(uParam0->f_1610), 0);
				}
				if (bVar9 && __LIB_1__::func_264(uParam0->f_1610, 1))
				{
					__LIB_0__::func_629(__LIB_0__::func_17(uParam0->f_1610), 0);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
				}
				else if (!bVar10 && !__LIB_1__::func_264(uParam0->f_1610, 1))
				{
					__LIB_0__::func_629(__LIB_0__::func_17(uParam0->f_1610), 1);
				}
				else if (!__LIB_1__::func_264(uParam0->f_1610, 1))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
				}
			}
			func_690(uParam0, uParam1);
			if (__LIB_0__::func_272(Global_35, 0))
			{
				PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.35f);
			}
			func_696(uParam0, uParam1);
			func_693(uParam0, uParam1);
			break;
		case 6:
			if (__LIB_17__::func_963(uParam0, uParam1))
			{
				uParam0->f_1581 = 8;
			}
			break;
		case 13:
			if (PED::IS_PED_USING_ANY_SCENARIO(Global_35) == 0)
			{
				uParam0->f_1581 = 14;
			}
			break;
		case 14:
			func_698(uParam0, uParam1, 2);
			break;
		case -1:
			break;
		case 10:
			__LIB_6__::func_588(uParam0, uParam1);
			break;
		case 11:
			func_676(uParam0, uParam1, 0, 1, 0);
			break;
		case 12:
			func_700(uParam0, uParam1);
			break;
		case 15:
			if (!__LIB_2__::func_7())
			{
				uParam0->f_1581 = 0;
			}
			break;
	}
}

void func_272(var uParam0, var uParam1)
{
	if (__LIB_1__::func_185(75) && !ENTITY::DOES_ENTITY_EXIST(Global_36603))
	{
		Global_36603 = VEHICLE::CREATE_VEHICLE(joaat("CHUCKWAGON002X"), -1618.703f, -1386.282f, 81.9044f, -35f, false, true, true, false);
		PROPSET::_CREATE_PROPSET_3(joaat("PG_TEAMSTER_CHUCKWAGON002X_GEN"), 0f, 0f, 0f, Global_36603, 0f, true, 1, false);
	}
	if ((((__LIB_0__::func_27(uParam0->f_1598, 2048) && !__LIB_0__::func_139(iLocal_3660)) && !__LIB_0__::func_27(uParam0->f_1598, 4096)) && !__LIB_5__::func_904(262144)) && !__LIB_5__::func_61(18, 6))
	{
		iLocal_3660 = __LIB_1__::func_282("CHORE_SELL_PRODUCT", joaat("INPUT_CONTEXT_Y"), __LIB_6__::func_210(), 10f, 2, 1, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
	}
	if (__LIB_5__::func_61(18, 6) && __LIB_0__::func_139(iLocal_3660))
	{
		__LIB_1__::func_281(&iLocal_3660, 1, 1);
	}
	if (__LIB_0__::func_567(iLocal_3660, 1))
	{
		uParam0->f_1613 = 0;
		__LIB_6__::func_588(uParam0, &Local_3515);
		__LIB_1__::func_281(&iLocal_3660, 1, 1);
	}
}

void func_273(int iParam0)
{
	func_704(iParam0);
}

void func_275()
{
	if (__LIB_5__::func_783(109))
	{
		if (bLocal_3732)
		{
			switch (iLocal_3737)
			{
				case 0:
					func_707();
					break;
				case 1:
					func_708();
					break;
				case 2:
					func_709();
					break;
				case 4:
					func_710();
					break;
				default:
					break;
			}
		}
		else
		{
			iLocal_3737 = 0;
			func_711();
			bLocal_3732 = true;
		}
	}
}

void func_276()
{
	if (__LIB_5__::func_904(32768))
	{
		return;
	}
	if (__LIB_2__::func_776())
	{
		return;
	}
	if (!__LIB_1__::func_307(13, 1, 1))
	{
		return;
	}
	if (AUDIO::_0x6BFFB7C276866996(Global_35) == joaat("GREET_ABIGAIL_CLOSER_POSTTAXIDERMY2_CONV1"))
	{
		if (!__LIB_0__::func_75(&uLocal_3818))
		{
			__LIB_1__::func_283(&uLocal_3818, 0);
		}
		if (__LIB_0__::func_265(&uLocal_3818) > 8f && __LIB_0__::func_210(13) > 144f)
		{
			bLocal_3817 = true;
		}
	}
	if (bLocal_3817)
	{
		if (__LIB_1__::func_265(__LIB_0__::func_271(13), "GREET_ABIGAIL_POSTCLOSER_POSTTAXIDERMY2_CONV1", joaat("SPEECH_PARAMS_ADD_BLIP"), 0, 1, 0, 0, 1))
		{
			__LIB_5__::func_812(32768);
		}
	}
}

void func_277()
{
	int iVar0;
	if (!bLocal_3826)
	{
		if (__LIB_1__::func_185(73) && !__LIB_1__::func_185(68))
		{
			iVar0 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(-1673.618f, -1338.303f, 83.20375f, joaat("RANSACK_ATTACHED_CHEST_MEDIUM"), 1f, 0, false);
			if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar0))
			{
				TASK::_SET_SCENARIO_POINT_ACTIVE(iVar0, false);
				bLocal_3826 = true;
			}
		}
	}
}

void func_283(int* iParam0, var uParam1)
{
	vector3 vVar0;
	float fVar3;
	bool bVar4;
	vVar0 = { __LIB_5__::func_906(__LIB_5__::func_846()) };
	fVar3 = 5f;
	if (__LIB_0__::func_86(vVar0))
	{
		return;
	}
	if ((__LIB_0__::func_293(26) == 0 || __LIB_2__::func_776()) && !__LIB_4__::func_635(8))
	{
		func_719(iParam0);
		return;
	}
	if (__LIB_1__::func_198(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT_ACTIVE"), 1))
	{
		func_719(iParam0);
		return;
	}
	if (__LIB_0__::func_592() != 1)
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(*iParam0) && !__LIB_6__::func_126())
	{
		if (!__LIB_4__::func_635(8))
		{
			*iParam0 = MAP::_BLIP_ADD_FOR_COORD(joaat("BLIP_STYLE_SHOP"), vVar0);
			MAP::_BLIP_SET_MODIFIER(*iParam0, 1046501997);
			MAP::SET_BLIP_SPRITE(*iParam0, joaat("BLIP_AMBIENT_TITHING"), true);
			MAP::SET_BLIP_FLASH_TIMER(*iParam0, 66, -1);
			__LIB_5__::func_794(*iParam0, __LIB_0__::func_61());
		}
	}
	func_721(iParam0, uParam1);
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_863))
	{
		if ((CLOCK::GET_CLOCK_SECONDS() % 15) == 0)
		{
			iParam0->f_863 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vVar0, joaat("PROP_PLAYER_OPEN_CASHBOX"), fVar3, 1, false);
		}
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_866))
	{
		STREAMING::REQUEST_MODEL(joaat("P_MONEYSTACK01X"), false);
		if (STREAMING::HAS_MODEL_LOADED(joaat("P_MONEYSTACK01X")))
		{
			iParam0->f_866 = TASK::_GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO(iParam0->f_863);
			__LIB_6__::func_214(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_866))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_866, true);
			}
		}
		return;
	}
	if (PED::_IS_PED_USING_SCENARIO_POINT(Global_35, iParam0->f_863) || __LIB_4__::func_635(67108864))
	{
		return;
	}
	if (iParam0->f_856 == 0)
	{
		if (__LIB_4__::func_635(8192) == 0)
		{
			if (!__LIB_0__::func_139(iParam0->f_1))
			{
				if (Global_1357549.f_1672 == 0)
				{
					iParam0->f_1 = __LIB_1__::func_282("GIVE_TITHE", joaat("INPUT_CONTEXT_Y"), __LIB_5__::func_907(__LIB_5__::func_846()), __LIB_5__::func_908(), 3, 1, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
					__LIB_4__::func_12(iParam0->f_1, 736625733, 0, 1);
				}
				else if (__LIB_5__::func_909())
				{
					iParam0->f_1 = __LIB_1__::func_282("ITEM_TITHE", joaat("INPUT_CONTEXT_Y"), __LIB_5__::func_907(__LIB_5__::func_846()), __LIB_5__::func_908(), 3, 1, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
					__LIB_1__::func_484(iParam0->f_1, "MONEY_LOANSHARK_ALL_DEBTS", 1);
					__LIB_4__::func_12(iParam0->f_1, 736625733, 0, 1);
				}
				else
				{
					iParam0->f_1 = __LIB_1__::func_282("ITEM_TITHE", joaat("INPUT_CONTEXT_Y"), __LIB_5__::func_907(__LIB_5__::func_846()), __LIB_5__::func_908(), 3, 1, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
					__LIB_5__::func_776(iParam0->f_1, "ITEM_TITHE", __LIB_0__::func_776(Global_1357549.f_1672), 1);
					__LIB_4__::func_12(iParam0->f_1, 736625733, 0, 1);
				}
			}
		}
	}
	if (__LIB_0__::func_94(Global_35, __LIB_5__::func_907(__LIB_5__::func_846()), 1) <= (__LIB_5__::func_908() + 0.25f))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 1, 1, 736625733, __LIB_5__::func_910(), 0);
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		bVar4 = false;
		if ((((__LIB_6__::func_298() || __LIB_3__::func_26()) || PED::_IS_PED_CARRYING(Global_35)) || __LIB_3__::func_417(Global_35)) || __LIB_5__::func_911())
		{
			bVar4 = true;
		}
		if (__LIB_0__::func_139(iParam0->f_1))
		{
			__LIB_5__::func_793(iParam0->f_1, bVar4);
		}
		if (__LIB_0__::func_139(iParam0->f_6))
		{
			__LIB_5__::func_793(iParam0->f_6, bVar4);
		}
	}
	if (iParam0->f_856)
	{
		if (__LIB_0__::func_139(iParam0->f_855) == 0)
		{
			iParam0->f_855 = __LIB_2__::func_512("BACK_TITHE", joaat("INPUT_GAME_MENU_CANCEL"), Global_35, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
		}
		else if (__LIB_1__::func_732(iParam0->f_855, 1))
		{
			AUDIO::PLAY_SOUND_FRONTEND("Back", "HUD_Camp_Status_Sounds", true, 0);
			__LIB_1__::func_281(&(iParam0->f_855), 1, 1);
			__LIB_1__::func_281(&(iParam0->f_883), 1, 1);
			__LIB_1__::func_281(&(iParam0->f_884), 1, 1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			iParam0->f_856 = 0;
		}
	}
	if (__LIB_5__::func_777(iParam0->f_1, 1) || iParam0->f_2 == 1)
	{
		iParam0->f_2 = 1;
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
		if (__LIB_0__::func_139(iParam0->f_1))
		{
			__LIB_1__::func_382(iParam0->f_1, 0, 1);
		}
		if (__LIB_0__::func_139(iParam0->f_6))
		{
			__LIB_1__::func_382(iParam0->f_6, 0, 1);
		}
		if (__LIB_0__::func_75(&(iParam0->f_870)) == 0)
		{
			__LIB_1__::func_283(&(iParam0->f_870), 0);
		}
		if (((__LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("WEAPON_UNARMED") && __LIB_0__::func_399(Global_35, 0, 1, 0) == joaat("WEAPON_UNARMED")) && __LIB_5__::func_912() == 0) && PED::_IS_PED_CARRYING(Global_35) == 0)
		{
			if (PED::_IS_PED_USING_SCENARIO_POINT(Global_35, iParam0->f_863) == 0)
			{
				if (__LIB_0__::func_265(&(iParam0->f_870)) > 0f)
				{
					__LIB_0__::func_326(8192);
					TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
					AUDIO::PLAY_SOUND_FRONTEND("Give_To_Gang", "HUD_Donate_Sounds", true, 0);
					__LIB_6__::func_423(iParam0);
					iParam0->f_2 = 0;
					__LIB_5__::func_812(128);
					func_719(iParam0);
				}
			}
		}
		else
		{
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
			__LIB_0__::func_268(&(iParam0->f_870), -0.75f);
		}
	}
}

void func_293(var uParam0)
{
	if (__LIB_0__::func_139(uParam0->f_8))
	{
		__LIB_1__::func_281(&(uParam0->f_8), 1, 1);
	}
	MISC::CLEAR_BIT(&(uParam0->f_1), 3);
}

void func_294(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_139(uParam0->f_10))
	{
		__LIB_1__::func_281(&(uParam0->f_10), 1, 1);
	}
	if (__LIB_0__::func_139(uParam0->f_11))
	{
		__LIB_1__::func_281(&(uParam0->f_11), 1, 1);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_0__::func_139(uParam0->f_12[iVar0]))
		{
			__LIB_1__::func_281(&(uParam0->f_12[iVar0]), 1, 1);
		}
		iVar0++;
	}
	if (__LIB_0__::func_139(uParam0->f_9))
	{
		__LIB_1__::func_281(&(uParam0->f_9), 1, 1);
	}
	MISC::CLEAR_BIT(&(uParam0->f_1), 5);
}

void func_343(int* iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	func_719(iParam0);
	func_810(iParam0);
	__LIB_6__::func_80(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_11))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_11));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_12))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_12));
	}
	if (__LIB_5__::func_927())
	{
		INTERIOR::CLEAR_ROOM_FOR_ENTITY(iParam0->f_864);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_864))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("ledger_ct");
		OBJECT::DELETE_OBJECT(&(iParam0->f_864));
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_33);
	HUD::_TEXT_DATABASE_DELETE("CPGENAU");
	__LIB_5__::func_928(iParam0->f_1426, &iVar0, &uVar1, &uVar2, &uVar3);
	Global_1357549.f_1723 = 0;
	__LIB_0__::func_289(iVar0, 512, 0);
	if (((__LIB_5__::func_846() == 1 || __LIB_5__::func_846() == 2) || __LIB_5__::func_846() == 3) || __LIB_5__::func_846() == 6)
	{
		__LIB_6__::func_182(&(iParam0->f_1428));
	}
}

void func_361(int iParam0)
{
	AUDIO::SET_AUDIO_FLAG("DisableInhibitIdleMusicInCamp", false);
	if ((__LIB_0__::func_272(Global_35, 0) && ENTITY::DOES_ENTITY_EXIST(Global_36603)) && !PED::IS_PED_IN_VEHICLE(Global_35, Global_36603, true))
	{
		VEHICLE::DELETE_VEHICLE(&Global_36603);
	}
	else
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Global_36603);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_3715))
	{
		CAM::DESTROY_CAM(iLocal_3715, false);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_3792))
	{
		TASK::_DELETE_SCENARIO_POINT(iLocal_3792);
	}
	ANIMSCENE::RESET_ANIM_SCENE(Local_3795, 0);
	func_827(&Local_3808);
	func_828(&(iParam0->f_51), &Local_3515);
	OBJECT::_0x0C0A373D181BF900(-1679361598);
	OBJECT::_0x0C0A373D181BF900(-1449650908);
	OBJECT::_0x0C0A373D181BF900(-1169508727);
	OBJECT::_0x0C0A373D181BF900(-925412446);
	OBJECT::_0x0C0A373D181BF900(-702255556);
	OBJECT::_0x0C0A373D181BF900(-1017263949);
	OBJECT::_0x0C0A373D181BF900(-760486065);
	OBJECT::_0x0C0A373D181BF900(-537755172);
	OBJECT::_0x0C0A373D181BF900(220978254);
	if (__LIB_0__::func_75(&uLocal_3818))
	{
		__LIB_0__::func_37(&uLocal_3818);
	}
	bLocal_3732 = false;
	__LIB_5__::func_547(262144);
}

bool func_393(int iParam0, char[32] cParam1, int iParam9)
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam1))
	{
		return false;
	}
	if (!__LIB_0__::func_49(iParam0))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_59(iParam0);
	if (iVar0 != 0 && __LIB_6__::func_88(iParam0))
	{
		Global_1360165[iParam0 /*1157*/].f_39 = { cParam1 };
		PERSCHAR::_0x187D65F3AEC5D679(iVar0, &cParam1);
		__LIB_0__::func_288(iParam0, 17, 1);
		if (iParam9 != -1)
		{
			iVar1 = __LIB_0__::func_23();
			__LIB_1__::func_446(&iVar1, 0, 0, iParam9, 0, 0, 0, 0);
			Global_40.f_4942[iParam0 /*60*/].f_46 = iVar1;
			Global_40.f_4942[iParam0 /*60*/].f_49 = 4;
		}
		else
		{
			Global_40.f_4942[iParam0 /*60*/].f_46 = -15;
			Global_40.f_4942[iParam0 /*60*/].f_49 = 0;
		}
		Global_1360165[iParam0 /*1157*/].f_56 = 1;
		return true;
	}
	return false;
}

bool func_398()
{
	if (!STREAMING::HAS_MODEL_LOADED(joaat("CHUCKWAGON002X")) || !PROPSET::_HAS_PROPSET_LOADED(joaat("PG_TEAMSTER_CHUCKWAGON002X_GEN")))
	{
		return false;
	}
	if (__LIB_1__::func_185(75))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_36603))
		{
			Global_36603 = VEHICLE::CREATE_VEHICLE(joaat("CHUCKWAGON002X"), -1618.703f, -1386.282f, 81.9044f, -35f, false, true, true, false);
			PROPSET::_0xD80FAF919A2E56EA(Global_36603, joaat("PG_TEAMSTER_CHUCKWAGON002X_GEN"));
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Global_36603))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_36603, -1618.703f, -1386.282f, 81.9044f, -35f, true, false, true);
		}
		func_853();
	}
	return true;
}

void func_401(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	__LIB_6__::func_135(iParam0);
	iVar1 = __LIB_1__::func_953(iParam0);
	vVar2 = { __LIB_2__::func_116(iVar1, 1) };
	if (__LIB_0__::func_317() == iParam0)
	{
		vVar5 = { __LIB_6__::func_70(iParam0) };
		fVar8 = __LIB_5__::func_930(iParam0);
		__LIB_19__::func_178(iParam0, bParam1);
		if (!__LIB_1__::func_209(vVar5))
		{
			__LIB_2__::func_862(vVar5, fVar8, "CaravanCamp", 0, 0, 4, 0, -1082130432 /* Float: -1f */);
		}
		__LIB_6__::func_165(iParam0);
		if (__LIB_5__::func_869(iParam0))
		{
			iVar0 = __LIB_6__::func_90(iParam0);
			if (__LIB_0__::func_592() != 2)
			{
				if (__LIB_0__::func_30(iVar0))
				{
					if (!STREAMING::_IS_IMAP_ACTIVE(iVar0))
					{
						STREAMING::_REQUEST_IMAP(iVar0);
					}
				}
			}
			else if (__LIB_0__::func_30(iVar0))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(iVar0))
				{
					STREAMING::_REMOVE_IMAP(iVar0);
				}
			}
			__LIB_6__::func_646(iParam0);
		}
		__LIB_5__::func_931(iParam0, 1);
		if (!bParam2)
		{
			__LIB_6__::func_424(iParam0, iVar1, 1, 1);
		}
	}
	else
	{
		__LIB_6__::func_653(iParam0, &iVar0);
		if (__LIB_1__::func_209(vVar2))
		{
			__LIB_1__::func_222(vVar2, 0);
		}
		__LIB_5__::func_931(iParam0, 0);
		if (!bParam2)
		{
			__LIB_6__::func_424(iParam0, iVar1, 0, 0);
		}
	}
}

bool func_420(var uParam0)
{
	int iVar0;
	int iVar1;
	switch (Global_1357549.f_2)
	{
		case 0:
			if (uParam0->f_46 != __LIB_0__::func_61())
			{
				return true;
			}
			if (__LIB_6__::func_137())
			{
				Global_1357549.f_2 = 1;
			}
			else
			{
				return false;
			}
		case 1:
			if (func_878(uParam0->f_46, 0))
			{
				Global_1357549.f_2 = 2;
			}
			else
			{
				return false;
			}
		case 2:
			if (__LIB_6__::func_166(uParam0->f_46))
			{
				Global_1357549.f_2 = 3;
			}
			else
			{
				return false;
			}
		case 3:
			if (__LIB_6__::func_473(uParam0))
			{
				Global_1357549.f_2 = 4;
			}
			else
			{
				return false;
			}
		case 4:
			if (__LIB_6__::func_397(uParam0))
			{
				Global_1357549.f_2 = 5;
			}
			else
			{
				return false;
			}
		case 5:
			iVar0 = 0;
			while (iVar0 < 27)
			{
				__LIB_0__::func_290(iVar0, 4, 1);
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < 3)
			{
				Global_1357549.f_1675[iVar1 /*5*/].f_2 = 0;
				iVar1++;
			}
			Global_1357549.f_2 = 0;
			return true;
		default:
			break;
	}
	return false;
}

void func_423(var uParam0)
{
	vector3 vVar0;
	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	Global_1899848.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(4, 6);
	__LIB_1__::func_65(3, &vVar0, 1);
	__LIB_1__::func_806(&vVar0, 1, 1);
}

void func_424(var uParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	if (__LIB_0__::func_592() == 1)
	{
		__LIB_6__::func_91(uParam0);
	}
	uParam0->f_859 = 1;
	if (Global_1357549.f_1721 == 0)
	{
		uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549.f_1724, "camp_detail");
		uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar1, __LIB_4__::func_73(0));
		Global_1357549.f_1726[0 /*3*/] = uVar0;
		Global_1357549.f_1726[0 /*3*/].f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, "label", 1820034266);
		Global_1357549.f_1726[0 /*3*/].f_2 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "value_string", 0);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1357549.f_1725, 0, "camp_item", uVar0);
		uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549.f_1724, "camp_detail");
		uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar1, __LIB_4__::func_73(1));
		Global_1357549.f_1726[1 /*3*/] = uVar0;
		Global_1357549.f_1726[1 /*3*/].f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, "label", 156970377);
		Global_1357549.f_1726[1 /*3*/].f_2 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "value_string", 0);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1357549.f_1725, 1, "camp_item", uVar0);
		uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549.f_1724, "camp_detail");
		uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar1, __LIB_4__::func_73(2));
		Global_1357549.f_1726[2 /*3*/] = uVar0;
		Global_1357549.f_1726[2 /*3*/].f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, "label", -609488505);
		Global_1357549.f_1726[2 /*3*/].f_2 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "value_string", 0);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1357549.f_1725, 2, "camp_item", uVar0);
		uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549.f_1724, "camp_detail");
		uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar1, __LIB_4__::func_73(3));
		Global_1357549.f_1726[3 /*3*/] = uVar0;
		Global_1357549.f_1726[3 /*3*/].f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, "label", 1967383862);
		Global_1357549.f_1726[3 /*3*/].f_2 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "value_string", 0);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1357549.f_1725, 3, "camp_item", uVar0);
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < 31)
		{
			if (Global_40.f_4283.f_335[iVar4] == 1)
			{
				__LIB_5__::func_933(&uVar2, iVar4);
				uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549.f_1724, "camp_detail");
				uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar1, __LIB_4__::func_73(iVar4 + 4));
				Global_1357549.f_1726[iVar4 + 4 /*3*/] = uVar0;
				Global_1357549.f_1726[iVar4 + 4 /*3*/].f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, "label", MISC::GET_HASH_KEY(&uVar2));
				Global_1357549.f_1726[iVar4 + 4 /*3*/].f_2 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "value", 0);
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1357549.f_1725, iVar4 + 4, "camp_item", uVar0);
			}
			iVar4++;
		}
		Global_1357549.f_1721 = 1;
	}
	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 < 31)
	{
		__LIB_5__::func_934(iVar7, &iVar5);
		__LIB_5__::func_935(iVar7, &iVar6);
		if (__LIB_5__::func_936(uParam0->f_1425, iVar5))
		{
			__LIB_0__::func_516(&(uParam0->f_1425), iVar5);
		}
		if (__LIB_0__::func_51(&(Global_1360165[iVar6 /*1157*/].f_12), 512))
		{
			__LIB_0__::func_289(iVar6, 512, 0);
		}
		if (__LIB_0__::func_139(uParam0->f_885[uParam0->f_1426]))
		{
			__LIB_1__::func_281(&(uParam0->f_885[uParam0->f_1426]), 1, 1);
		}
		iVar7++;
	}
	STREAMING::REQUEST_ANIM_DICT("script_common@handover@generic@player_handover@money");
	__LIB_5__::func_937(128);
	__LIB_0__::func_928(&(uParam0->f_1325), Global_35, "ARTHUR", 0);
	HUD::_TEXT_DATABASE_REQUEST("CPGENAU");
	__LIB_5__::func_845();
	if (__LIB_6__::func_218(__LIB_0__::func_317()))
	{
		__LIB_6__::func_589(&(uParam0->f_35.f_2));
		__LIB_5__::func_938(&(uParam0->f_35));
	}
	iVar8 = __LIB_5__::func_939(__LIB_0__::func_317());
	if (__LIB_6__::func_272())
	{
		if (!__LIB_6__::func_55(iVar8, 64))
		{
			__LIB_6__::func_59(iVar8, 64);
			__LIB_6__::func_59(iVar8, 262144);
		}
	}
	else if (__LIB_6__::func_55(iVar8, 64))
	{
		__LIB_6__::func_60(iVar8, 64);
	}
}

void func_425()
{
	Local_3515[0 /*8*/] = { __LIB_6__::func_219(0, 0, 0) };
	Local_3515[1 /*8*/] = { __LIB_6__::func_219(0, 1, 1) };
	Local_3515[2 /*8*/] = { __LIB_6__::func_219(0, 2, 2) };
	Local_3515[3 /*8*/] = { __LIB_6__::func_219(0, 3, 3) };
	Local_3515[4 /*8*/] = { __LIB_6__::func_219(5, 0, 0) };
	Local_3515[5 /*8*/] = { __LIB_6__::func_219(5, 1, 1) };
	Local_3515[6 /*8*/] = { __LIB_6__::func_219(6, 0, 0) };
	Local_3515[7 /*8*/] = { __LIB_6__::func_219(6, 1, 1) };
	Local_3515[8 /*8*/] = { __LIB_6__::func_219(9, 0, 0) };
	Local_3515[9 /*8*/] = { __LIB_6__::func_219(8, 0, 0) };
	Local_3515[10 /*8*/] = { __LIB_6__::func_219(2, 0, 0) };
	Local_3515[11 /*8*/] = { __LIB_6__::func_219(2, 1, 1) };
	Local_3515[12 /*8*/] = { __LIB_6__::func_219(2, 2, 2) };
	Local_3515[13 /*8*/] = { __LIB_6__::func_219(14, 0, 0) };
	Local_3515[14 /*8*/] = { __LIB_6__::func_219(7, 0, 0) };
	Local_3515[15 /*8*/] = { __LIB_6__::func_219(11, 0, 0) };
	Local_3515[16 /*8*/] = { __LIB_6__::func_219(4, 0, 0) };
	Local_3515[17 /*8*/] = { __LIB_6__::func_219(4, 1, 1) };
}

Vector3 func_442(float fParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	vVar0 = { func_915(Global_36, uParam1, uParam2, 1, 0, 0, 0, 0, 0, 0, fParam0, 10f) };
	return vVar0;
}

int func_475()
{
	var uVar0;
	MISC::_COPY_MEMORY(&(Local_18.f_1934.f_67), &uVar0, 12);
	switch (__LIB_0__::func_317())
	{
		case 0:
			Local_18.f_1934.f_67 = { -1356.409f, 2433.987f, 307.1412f };
			Local_18.f_1934.f_67.f_3 = 315.3194f;
			Local_18.f_1934.f_67.f_4 = -92.6032f;
			Local_18.f_1934.f_67.f_5 = 0f;
			Local_18.f_1934.f_67.f_6 = { -1355.259f, 2428.821f, 306.6295f };
			Local_18.f_1934.f_67.f_9 = 137.8667f;
			Local_18.f_1934.f_67.f_10 = 27.6689f;
			Local_18.f_1934.f_67.f_11 = -32.8653f;
			return 1;
			Local_18.f_1934.f_67 = { -92.0169f, -46.8868f, 94.6083f };
			Local_18.f_1934.f_67.f_3 = 290.5712f;
			Local_18.f_1934.f_67.f_4 = -163.5061f;
			Local_18.f_1934.f_67.f_5 = -12.8288f;
			Local_18.f_1934.f_67.f_6 = { -127.8335f, -41.6741f, 94.4926f };
			Local_18.f_1934.f_67.f_9 = 343.9563f;
			Local_18.f_1934.f_67.f_10 = -5.4978f;
			Local_18.f_1934.f_67.f_11 = -9.5034f;
			return 1;
			Local_18.f_1934.f_67 = { 656.9079f, -1217.916f, 45.5739f };
			Local_18.f_1934.f_67.f_3 = 118.549f;
			Local_18.f_1934.f_67.f_4 = 108.4593f;
			Local_18.f_1934.f_67.f_5 = -3.7555f;
			Local_18.f_1934.f_67.f_6 = { 652.0198f, -1241.254f, 42.7896f };
			Local_18.f_1934.f_67.f_9 = 226.1829f;
			Local_18.f_1934.f_67.f_10 = -1.8674f;
			Local_18.f_1934.f_67.f_11 = -5.8606f;
			return 1;
			Local_18.f_1934.f_67 = { 1876.795f, -1819.649f, 41.3889f };
			Local_18.f_1934.f_67.f_3 = 146.2366f;
			Local_18.f_1934.f_67.f_4 = 29.2738f;
			Local_18.f_1934.f_67.f_5 = 0f;
			Local_18.f_1934.f_67.f_6 = { 1891.238f, -1852.065f, 41.5036f };
			Local_18.f_1934.f_67.f_9 = 235.0809f;
			Local_18.f_1934.f_67.f_10 = -4.8707f;
			Local_18.f_1934.f_67.f_11 = -31.7036f;
			return 1;
			Local_18.f_1934.f_67 = { 1430.64f, -7326.889f, 80.462f };
			Local_18.f_1934.f_67.f_3 = 39.9393f;
			Local_18.f_1934.f_67.f_4 = 33.7948f;
			Local_18.f_1934.f_67.f_5 = -2.9747f;
			Local_18.f_1934.f_67.f_6 = { 1425.97f, -7322.658f, 80.4454f };
			Local_18.f_1934.f_67.f_9 = 280.6111f;
			Local_18.f_1934.f_67.f_10 = -2.9136f;
			Local_18.f_1934.f_67.f_11 = -3.5024f;
			return 1;
			Local_18.f_1934.f_67 = { 2247.849f, -763.8032f, 41.9284f };
			Local_18.f_1934.f_67.f_3 = 52.0321f;
			Local_18.f_1934.f_67.f_4 = 48.5302f;
			Local_18.f_1934.f_67.f_5 = 2.8185f;
			Local_18.f_1934.f_67.f_6 = { 2238.481f, -776.7674f, 42.7447f };
			Local_18.f_1934.f_67.f_9 = 267.1989f;
			Local_18.f_1934.f_67.f_10 = -0.4043f;
			Local_18.f_1934.f_67.f_11 = -4.3617f;
			return 1;
			Local_18.f_1934.f_67 = { 2339.874f, 1371.26f, 105.2484f };
			Local_18.f_1934.f_67.f_3 = 221.9975f;
			Local_18.f_1934.f_67.f_4 = 16.3205f;
			Local_18.f_1934.f_67.f_5 = 2.6571f;
			Local_18.f_1934.f_67.f_6 = { 2338.244f, 1360.923f, 105.3035f };
			Local_18.f_1934.f_67.f_9 = 243.8945f;
			Local_18.f_1934.f_67.f_10 = 15.1624f;
			Local_18.f_1934.f_67.f_11 = -6.8075f;
			return 1;
			Local_18.f_1934.f_67 = { -2594.485f, 474.4041f, 144.9143f };
			Local_18.f_1934.f_67.f_3 = 93.6876f;
			Local_18.f_1934.f_67.f_4 = 20.3982f;
			Local_18.f_1934.f_67.f_5 = 0f;
			Local_18.f_1934.f_67.f_6 = { -2590.465f, 463.0091f, 145.2393f };
			Local_18.f_1934.f_67.f_9 = 168.0908f;
			Local_18.f_1934.f_67.f_10 = 1.7979f;
			Local_18.f_1934.f_67.f_11 = -5.3603f;
			return 1;
			Local_18.f_1934.f_67 = { -1610.253f, -1357.077f, 81.7792f };
			Local_18.f_1934.f_67.f_3 = 17.8936f;
			Local_18.f_1934.f_67.f_4 = 63.7332f;
			Local_18.f_1934.f_67.f_5 = -6.9619f;
			Local_18.f_1934.f_67.f_6 = { -1642.565f, -1356.53f, 82.9641f };
			Local_18.f_1934.f_67.f_9 = 200.1213f;
			Local_18.f_1934.f_67.f_10 = 77.8545f;
			Local_18.f_1934.f_67.f_11 = 10.0593f;
			return 1;
			return 0;
		}
bool func_476()
{
	if (!__LIB_4__::func_635(32768))
	{
		return false;
	}
	if (__LIB_4__::func_635(16384))
	{
		return false;
	}
	if (__LIB_4__::func_635(4))
	{
		return false;
	}
	return true;
}

bool func_477()
{
	if (!func_476())
	{
		return false;
	}
	if (__LIB_0__::func_1(Global_1935630, 16384))
	{
		return false;
	}
	if (__LIB_0__::func_1(Global_1935630, 32768))
	{
		return false;
	}
	if (__LIB_0__::func_1(Global_1935630, 8388608))
	{
		return false;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (!__LIB_6__::func_275(3))
	{
		return false;
	}
	return true;
}

void func_486(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	(iParam0[iParam3 /*4*/])->f_2 = iParam1;
	(iParam0[iParam3 /*4*/])->f_1 = sParam2;
}

void func_541(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_541(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_541(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_584(int iParam0, int iParam1)
{
	if (CAM::DOES_CAM_EXIST(Local_18.f_3057[iParam0 /*21*/].f_5))
	{
		if (CAM::IS_CAM_RENDERING(Local_18.f_3057[iParam0 /*21*/].f_5))
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		}
		CAM::DESTROY_CAM(Local_18.f_3057[iParam0 /*21*/].f_5, false);
	}
	if (!CAM::DOES_CAM_EXIST(Local_18.f_3057[iParam1 /*21*/].f_5))
	{
		if (!__LIB_0__::func_86(Local_18.f_3057[iParam1 /*21*/].f_9))
		{
			Local_18.f_3057[iParam1 /*21*/].f_5 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_18.f_3057[iParam1 /*21*/].f_9, Local_18.f_3057[iParam1 /*21*/].f_12, Local_18.f_3057[iParam1 /*21*/].f_15, false, 2);
		}
	}
	if (CAM::DOES_CAM_EXIST(Local_18.f_3057[iParam1 /*21*/].f_5))
	{
		if (!CAM::IS_CAM_RENDERING(Local_18.f_3057[iParam1 /*21*/].f_5))
		{
			CAM::SET_CAM_ACTIVE(Local_18.f_3057[iParam1 /*21*/].f_5, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
	}
	Local_18.f_3057[iParam0 /*21*/].f_3 = 3;
	Local_18.f_3057[iParam1 /*21*/].f_3 = 2;
	if (__LIB_0__::func_139(Local_18.f_3057[iParam0 /*21*/].f_2))
	{
		__LIB_1__::func_281(&(Local_18.f_3057[iParam0 /*21*/].f_2), 1, 1);
	}
	if (__LIB_0__::func_139(Local_18.f_3057[iParam0 /*21*/].f_1))
	{
		__LIB_1__::func_281(&(Local_18.f_3057[iParam0 /*21*/].f_1), 1, 1);
	}
	__LIB_6__::func_347(iParam1);
	__LIB_6__::func_348(iParam1);
	HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 2, 1, 799218720, Local_18.f_3057[iParam1 /*21*/].f_20, 0);
}

int func_595(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 101;
	}
	else if (iParam1 == 32)
	{
		return 126;
	}
	else if (iParam1 == 34)
	{
		return 127;
	}
	switch (iParam0)
	{
		case 79:
			switch (iParam1)
			{
				case 0:
					return 128;
				case 6:
					return 130;
				case 27:
					return 131;
				case 26:
					return 129;
				case 19:
					return 59;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 15:
					return 6;
				case 33:
					return 11;
				case 29:
					return 106;
				case 30:
					return 107;
				case 3:
					return 7;
				case 8:
					return 9;
				case 10:
					return 10;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 31:
					return 108;
				case 22:
					return 16;
				case 7:
					return 17;
				case 21:
					return 12;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 0:
					return 132;
				case 6:
					return 134;
				case 27:
					return 135;
				case 26:
					return 133;
				case 19:
					return 57;
				default:
					break;
			}
			break;
		case 69:
			switch (iParam1)
			{
				case 4:
					return 18;
				case 3:
					return 19;
				case 2:
					return 20;
				case 1:
					return 21;
				case 31:
					return 105;
				default:
					break;
			}
			break;
		case 71:
			switch (iParam1)
			{
				case 0:
					return 137;
				case 6:
					return 139;
				case 27:
					return 140;
				case 26:
					return 138;
				case 19:
					return 56;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 141;
				case 6:
					return 143;
				case 27:
					return 144;
				case 26:
					return 142;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 17:
					return 22;
				case 31:
					return 118;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 15:
					return 36;
				case 8:
					return 37;
				case 33:
					return 52;
				case 29:
					return 109;
				case 10:
					return 38;
				case 30:
					return 110;
				case 0:
					return 39;
				case 4:
					return 41;
				case 3:
					return 42;
				case 6:
					return 43;
				case 9:
					return 44;
				case 2:
					return 45;
				case 1:
					return 46;
				case 31:
					return 111;
				case 22:
					return 51;
				case 7:
					return 47;
				case 12:
					return 48;
				case 13:
					return 49;
				case 14:
					return 50;
				case 18:
					return 55;
				case 21:
					return 54;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 15:
					return 25;
				case 33:
					return 33;
				case 29:
					return 112;
				case 10:
					return 26;
				case 4:
					return 27;
				case 3:
					return 28;
				case 6:
					return 29;
				case 2:
					return 30;
				case 31:
					return 113;
				case 22:
					return 32;
				case 1:
					return 31;
				default:
					break;
			}
			break;
		case 101:
			switch (iParam1)
			{
				case 9:
					return 35;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 18:
					return 4;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 23;
				case 1:
					return 24;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 145;
				case 26:
					return 146;
				case 6:
					return 147;
				case 27:
					return 148;
				case 19:
					return 58;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 29:
					return 114;
				case 33:
					return 66;
				case 10:
					return 60;
				case 3:
					return 61;
				case 20:
					return 62;
				case 9:
					return 63;
				case 31:
					return 115;
				case 22:
					return 64;
				case 2:
					return 65;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 18:
					return 5;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 15:
					return 68;
				case 8:
					return 69;
				case 33:
					return 70;
				case 29:
					return 102;
				case 10:
					return 72;
				case 30:
					return 103;
				case 0:
					return 73;
				case 3:
					return 74;
				case 6:
					return 75;
				case 9:
					return 76;
				case 2:
					return 77;
				case 31:
					return 104;
				case 1:
					return 78;
				case 22:
					return 80;
				case 20:
					return 79;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 30:
					return 116;
				case 4:
					return 82;
				case 2:
					return 86;
				case 1:
					return 85;
				case 31:
					return 117;
				case 9:
					return 84;
				default:
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 29:
					return 120;
				case 6:
					return 0;
				case 2:
					return 2;
				case 31:
					return 121;
				case 22:
					return 1;
				case 1:
					return 3;
				default:
					break;
			}
			Jump @2076; //curOff = 1732
			switch (iParam1)
			{
				case 18:
					return 34;
				default:
					break;
			}
			Jump @2076; //curOff = 1754
			switch (iParam1)
			{
				case 2:
					return 89;
				case 1:
					return 88;
				case 3:
					return 87;
				default:
					break;
			}
			Jump @2076; //curOff = 1798
			switch (iParam1)
			{
				case 31:
					return 119;
				default:
					break;
			}
			Jump @2076; //curOff = 1820
			switch (iParam1)
			{
				case 31:
					return 122;
				default:
					break;
			}
			Jump @2076; //curOff = 1842
			switch (iParam1)
			{
				case 31:
					return 124;
				default:
					break;
			}
			Jump @2076; //curOff = 1864
			switch (iParam1)
			{
				case 33:
					return 93;
				case 3:
					return 90;
				case 6:
					return 91;
				case 9:
					return 94;
				case 10:
					return 92;
				default:
					break;
			}
			Jump @2076; //curOff = 1930
			switch (iParam1)
			{
				case 3:
					return 95;
				case 2:
					return 96;
				default:
					break;
			}
			Jump @2076; //curOff = 1963
			switch (iParam1)
			{
				case 4:
					return 98;
				default:
					break;
			}
			Jump @2076; //curOff = 1985
			switch (iParam1)
			{
				case 31:
					return 123;
				case 2:
					return 99;
				case 1:
					return 100;
				default:
					break;
			}
			Jump @2076; //curOff = 2029
			switch (iParam1)
			{
				case 18:
					return 67;
				default:
					break;
			}
			Jump @2076; //curOff = 2051
			switch (iParam1)
			{
				case 4:
					return 125;
				default:
					break;
			}
			return -1;
		}
Vector3 func_596(int iParam0)
{
	if (!__LIB_1__::func_917(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2947.055f, 1320.15f, 43.8203f;
		case 2:
			return 2939.063f, 1287.116f, 43.6529f;
		case 3:
			return 2932.97f, 1282.56f, 43.67f;
		case 1:
			return 2947.64f, 1344.901f, 43.899f;
		case 99:
			return -5227.357f, -3470.067f, -20.49293f;
		case 100:
			return -5228.75f, -3468.28f, -21.57f;
		case 7:
			return -784.49f, -1321.95f, 42.88f;
		case 10:
			return -753.4219f, -1284.24f, 43.20049f;
		case 9:
			return -814.4116f, -1367.243f, 43.7509f;
		case 13:
			return -868.3356f, -1366.207f, 44.75311f;
		case 14:
			return -875.03f, -1327.09f, 42.97f;
		case 15:
			return -875.02f, -1326.71f, 42.97f;
		case 17:
			return -762.0716f, -1293.549f, 42.8355f;
		case 12:
			return -813.6f, -1373.8f, 44.2f;
		case 16:
			return -805.72f, -1330.5f, 42.67f;
		case 18:
			return 1417.288f, 273.5687f, 88.4881f;
		case 20:
			return 1521.91f, 441.15f, 89.68f;
		case 21:
			return 1523.63f, 442.65f, 89.68f;
		case 22:
			return 2161.5f, -618.5f, 43f;
		case 23:
			return -1092.88f, -575.69f, 81.41f;
		case 24:
			return -1094.35f, -577.48f, 81.41f;
		case 25:
			return 1294.084f, -1303.102f, 76.0418f;
		case 26:
			return 1297.423f, -1278.412f, 75.65752f;
		case 27:
			return 1319.43f, -1142.08f, 81.41f;
		case 28:
			return 1329.755f, -1294.218f, 76.0092f;
		case 29:
			return 1323.734f, -1321.775f, 77.8924f;
		case 30:
			return 1226.71f, -1295.08f, 75.9f;
		case 31:
			return 1230.34f, -1298.578f, 75.9027f;
		case 32:
			return 1332.55f, -1298.679f, 75.35602f;
		case 35:
			return 1209.053f, -193.1814f, 101.9785f;
		case 36:
			return 2644.188f, -1292.507f, 51.2496f;
		case 37:
			return 2657.466f, -1180.96f, 53.2785f;
		case 38:
			return 2819.495f, -1331.29f, 45.514f;
		case 39:
			return 2721.24f, -1231.66f, 49.37f;
		case 41:
			return 2859.51f, -1202.16f, 48.59f;
		case 42:
			return 2825.607f, -1318.207f, 45.7557f;
		case 43:
			return 2718f, -1287f, 49.6f;
		case 44:
			return 2508.212f, -1449.654f, 48.41523f;
		case 45:
			return 2748.811f, -1398.277f, 45.18309f;
		case 46:
			return 2747.824f, -1396.384f, 45.18309f;
		case 47:
			return 2555.09f, -1166.97f, 52.68f;
		case 48:
			return 2842.45f, -1227.66f, 46.66f;
		case 49:
			return 2817.64f, -1325.011f, 47.00512f;
		case 50:
			return 2836.992f, -1305.805f, 45.6964f;
		case 55:
			return 2832.02f, -1225.563f, 46.6422f;
		case 54:
			return 2734.174f, -1119.755f, 50.10792f;
		case 51:
			return 2683.84f, -1399.642f, 45.37881f;
		case 60:
			return -1753.404f, -392.557f, 155.2576f;
		case 61:
			return -1790f, -388.27f, 159.33f;
		case 62:
			return -1818.99f, -370.94f, 162.3f;
		case 63:
			return -1819.88f, -561.8194f, 157.2323f;
		case 65:
			return -1763.78f, -385.1118f, 156.7401f;
		case 64:
			return -1773.314f, -393.9122f, 155.5647f;
		case 68:
			return -307.9643f, 773.6048f, 117.7031f;
		case 69:
			return -306.3f, 815.08f, 117.98f;
		case 70:
			return 0f, 0f, 0f;
		case 72:
			return -338.8647f, 767.4334f, 115.5628f;
		case 73:
			return -287.9538f, 804.0544f, 118.3859f;
		case 74:
			return -324f, 803.72f, 116.88f;
		case 75:
			return -281.82f, 778.97f, 118.5f;
		case 76:
			return -369.4457f, 786.6935f, 115.9904f;
		case 77:
			return -178.0316f, 628.0621f, 113.0896f;
		case 78:
			return -175.0377f, 631.7999f, 113.0896f;
		case 80:
			return -272.7182f, 785.6115f, 117.4202f;
		case 79:
			return -325.532f, 773.6285f, 117.5038f;
		case 82:
			return 3025.786f, 562.7253f, 43.7167f;
		case 86:
			return 2986.224f, 569.9468f, 43.62284f;
		case 85:
			return 2986.94f, 574.9f, 43.64f;
		case 84:
			return 2967.273f, 796.7416f, 52.5948f;
		case 87:
			return -1302.951f, 394.6608f, 94.3817f;
		case 89:
			return -1300.83f, 399.7599f, 94.38248f;
		case 88:
			return -1299.891f, 401.3615f, 94.38248f;
		case 93:
			return -5518.071f, -2906.217f, -2.7513f;
		case 90:
			return -5487.197f, -2939.038f, -1.3872f;
		case 91:
			return -5507.993f, -2964.844f, -1.6215f;
		case 92:
			return -5509.019f, -2947.435f, -2.8934f;
		case 94:
			return -5520.701f, -3044.427f, -1.40419f;
		case 95:
			return -3687.3f, -2623.39f, -14.44f;
		case 4:
			return -2842.211f, 137.3398f, 183.8268f;
		case 5:
			return -1005.934f, -540.8262f, 97.9502f;
		case 34:
			return 2076.835f, 1000.829f, 111.4973f;
		case 67:
			return -2251.034f, -1916.911f, 115.9488f;
		case 56:
			return -142.072f, -23.5242f, 95.0883f;
		case 57:
			return 675.3091f, -1251.233f, 43.0152f;
		case 58:
			return 1875.2f, -1859.182f, 41.8f;
		case 59:
			return 2366.084f, 1347.122f, 105.1305f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_676(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	if (!bParam2 && !__LIB_0__::func_75(&(uParam0->f_1638)))
	{
		__LIB_1__::func_283(&(uParam0->f_1638), 1);
		GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		uParam0->f_1603 = { 0f, 0f, 0f };
		uParam0->f_1618 = 1;
		if (bParam3 && !__LIB_0__::func_296(0, 0, 1))
		{
			if (bParam4)
			{
				__LIB_1__::func_422("FINISH_CAMP_CHORE_CANCELED", 7500, 1, 0, 0, 0, -1, -1, 0);
			}
			else
			{
				__LIB_1__::func_422("FINISH_CAMP_CHORE_FAILED", 7500, 1, 0, 0, 0, -1, -1, 0);
			}
		}
		return;
	}
	if (uParam0->f_1618 && GRAPHICS::ANIMPOSTFX_IS_RUNNING("CamTransition01"))
	{
		uParam0->f_1627 = VOLUME::_CREATE_VOLUME_CYLINDER(Global_36, 0f, 0f, 0f, 1f, 1f, 3f);
		if (uParam0->f_1582.f_1 == 7)
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
		}
		uParam0->f_1615 = 0;
		TASK::_0x4161648394262FDF(__LIB_6__::func_590(&(uParam0->f_1582)), 0.05f);
		uParam0->f_1618 = 0;
		return;
	}
	if (bParam2)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 1, false, false);
		TASK::_0x4161648394262FDF(__LIB_6__::func_590(&(uParam0->f_1582)), 0.05f);
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
		TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
		uParam0->f_1603 = { Global_36 };
	}
	if (bParam2 || (__LIB_0__::func_75(&(uParam0->f_1638)) && __LIB_1__::func_871(&(uParam0->f_1638)) > 2))
	{
		if (!uParam0->f_1615)
		{
			uParam0->f_1642 = 0;
			if (__LIB_0__::func_139(uParam0->f_1610))
			{
				__LIB_1__::func_281(&(uParam0->f_1610), 1, 1);
			}
			__LIB_6__::func_207(uParam1);
			if (uParam0->f_1643 != -1)
			{
				if (MAP::DOES_BLIP_EXIST(uParam0->f_1582.f_4))
				{
					MAP::REMOVE_BLIP(&(uParam0->f_1582.f_4));
				}
				if (uParam0->f_1582.f_1 == 7)
				{
					__LIB_1__::func_206(Global_36, 3f, 0);
				}
				__LIB_6__::func_312(uParam1, &(uParam0->f_1582));
				__LIB_6__::func_221(&(uParam0->f_1582));
				(uParam1[uParam0->f_1643 /*8*/])->f_2 = 2;
				uParam0->f_1643 = -1;
			}
			if (__LIB_0__::func_27(uParam0->f_1598, 32) && uParam0->f_1644 != -1)
			{
				if (MAP::DOES_BLIP_EXIST(uParam0->f_1590.f_4))
				{
					MAP::REMOVE_BLIP(&(uParam0->f_1590.f_4));
				}
				__LIB_1__::func_681(&((uParam1[uParam0->f_1644 /*8*/])->f_3), 1);
				uParam0->f_1599 = 0;
				__LIB_1__::func_681(&(uParam0->f_1598), 32);
				TASK::_0x4161648394262FDF(__LIB_6__::func_590(&(uParam0->f_1590)), 0.05f);
				__LIB_6__::func_221(&(uParam0->f_1590));
				(uParam1[uParam0->f_1644 /*8*/])->f_2 = 2;
				__LIB_1__::func_683(&iVar0, 1798);
				__LIB_6__::func_558(uParam1, iVar0, 0);
				uParam0->f_1644 = -1;
			}
			if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1649))
			{
				POPULATION::_0x74C2B3DC0B294102(uParam0->f_1649);
				POPULATION::_0xA1CFB35069D23C23(uParam0->f_1649);
				VOLUME::_DELETE_VOLUME(uParam0->f_1649);
			}
			__LIB_0__::func_769();
			__LIB_4__::func_226(1073741824 /* Float: 2f */);
			__LIB_6__::func_60(__LIB_5__::func_824(__LIB_0__::func_12()), 2097152);
			__LIB_6__::func_60(__LIB_5__::func_824(__LIB_0__::func_12()), 2048);
			__LIB_6__::func_60(__LIB_5__::func_824(__LIB_0__::func_12()), 128);
			__LIB_5__::func_547(4);
			PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 3, 2, 0);
			PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 4, 2, 0);
			PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
			__LIB_6__::func_559(1);
			if (!bParam2)
			{
				TASK::_0xFDECCA06E8B81346(Global_35);
				PED::_0x2208438012482A1A(Global_35, false, true);
			}
			if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1627))
			{
				VOLUME::_DELETE_VOLUME(uParam0->f_1627);
			}
			uParam0->f_1615 = 1;
		}
		if (bParam2)
		{
			uParam0->f_1581 = -1;
			__LIB_0__::func_37(&(uParam0->f_1638));
			return;
		}
		if (uParam0->f_1615 && !bParam2)
		{
			if (!__LIB_5__::func_61(18, 6))
			{
				TASK::SET_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES", false);
				uParam0->f_1581 = -1;
				__LIB_6__::func_207(uParam1);
				if (__LIB_0__::func_139(uParam0->f_1611))
				{
					__LIB_0__::func_629(__LIB_0__::func_17(uParam0->f_1611), 0);
				}
			}
			else
			{
				__LIB_6__::func_654(uParam0, uParam1);
			}
			__LIB_0__::func_37(&(uParam0->f_1638));
		}
	}
}

void func_685(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	uParam0->f_1642 = 0;
	uParam0->f_1626 = 0;
	__LIB_6__::func_221(&(uParam0->f_1582));
	__LIB_6__::func_221(&(uParam0->f_1590));
	if (__LIB_0__::func_317() == 8)
	{
		if (__LIB_1__::func_187(1) || __LIB_1__::func_200(1))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES_WOOD_CHOP", true);
			TASK::SET_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES", true);
		}
	}
	else if (__LIB_0__::func_317() == 1)
	{
		if (!__LIB_6__::func_206(14))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES_WOOD_CHOP", true);
			TASK::SET_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES", true);
		}
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES_WOOD_CHOP", true);
		TASK::SET_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES", true);
	}
	Global_40.f_4283.f_408.f_3 = 0f;
	Global_40.f_4283.f_408.f_2 = 0f;
	uParam0->f_1606 = { 0f, 0f, 0f };
	uParam0->f_1598 = 0;
	GRAPHICS::_0x5199405EABFBD7F0("CamTransition01");
	uParam0->f_1612 = ANIMSCENE::_CREATE_ANIM_SCENE("script@respawn@sky@SkyTL_1500_03Clouds", 0, 0, false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1612);
	STREAMING::_0xB223249B7798EEED(Global_35, joaat("PROP_HUMAN_WOOD_CHOP"), 4, joaat("PROP_HUMAN_WOOD_CHOP_POST_CHOP_11_12_PLAYER"));
	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_PLAYER_CHORES_BUCKET_PUT_DOWN_FULL"), 2051, 0, 0);
	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_PLAYER_CHORES_FEEDBAG_PUTDOWN"), 2051, 0, 0);
	if (__LIB_5__::func_771(Global_40.f_4283.f_408.f_1))
	{
		__LIB_6__::func_650(Global_40.f_4283.f_408.f_1, &uVar5, &uVar4, &uVar3, &iVar2, &uVar1, &uVar0);
		iVar6 = __LIB_6__::func_314(__LIB_0__::func_23());
		iVar7 = __LIB_6__::func_314(Global_40.f_4283.f_408.f_1);
		if (iVar6 == iVar7 && iVar2 <= 0)
		{
			func_1059(uParam0, uParam1);
			func_687(uParam0, uParam1);
		}
		else
		{
			func_1060(uParam0);
			__LIB_6__::func_553(uParam1);
			__LIB_17__::func_964(uParam1);
		}
	}
	else
	{
		func_1060(uParam0);
		__LIB_6__::func_553(uParam1);
		__LIB_17__::func_964(uParam1);
	}
	STREAMING::REQUEST_MODEL(joaat("SCRIPTEDBALL"), false);
	uParam0->f_1581 = 1;
}

void func_687(var uParam0, var uParam1)
{
	if (__LIB_0__::func_317() == 8)
	{
		if (__LIB_1__::func_533(134217728))
		{
			if (Global_40.f_4283.f_408.f_5 < 2)
			{
				__LIB_0__::func_45("FINISH_CAMP_UNLOCKED_COW_MILKING", 10000, 0, 0, 0, 1);
			}
			__LIB_5__::func_547(134217728);
			__LIB_1__::func_683(&(uParam0->f_1598), 16384);
			Global_40.f_4283.f_408.f_6 = 1;
		}
		if (Global_40.f_4283.f_408.f_6)
		{
			__LIB_13__::func_687(3, 1);
			__LIB_1__::func_683(&(uParam0->f_1598), 16384);
			__LIB_1__::func_683(&(uParam0->f_1598), 128);
		}
		if (uParam0->f_1630.f_4 >= 1 && !__LIB_0__::func_27(uParam0->f_1598, 512))
		{
			if (uParam0->f_1630.f_1 < 1)
			{
				__LIB_0__::func_45("FINISH_CAMP_UNLOCKED_FEED_CHICKENS", 10000, 0, 0, 0, 1);
			}
			__LIB_1__::func_683(&(uParam0->f_1598), 8192);
			__LIB_1__::func_683(&(uParam0->f_1598), 512);
		}
		if (__LIB_1__::func_533(268435456))
		{
			Global_40.f_4283.f_408.f_5++;
		}
		if (Global_40.f_4283.f_408.f_5 >= 2)
		{
			if (!__LIB_0__::func_27(uParam0->f_1598, 256))
			{
				if (!__LIB_0__::func_27(uParam0->f_1598, 1048576))
				{
					__LIB_0__::func_45("FINISH_CAMP_UNLOCKED_MILK", 10000, 0, 0, 0, 1);
					__LIB_1__::func_683(&(uParam0->f_1598), 1048576);
				}
				__LIB_1__::func_683(&(uParam0->f_1598), 256);
				__LIB_1__::func_683(&(uParam0->f_1598), 65536);
			}
			__LIB_5__::func_547(268435456);
		}
		else
		{
			__LIB_5__::func_547(268435456);
		}
		if (uParam0->f_1630.f_1 >= 1 && !__LIB_0__::func_27(uParam0->f_1598, 64))
		{
			if (!__LIB_0__::func_27(uParam0->f_1598, 2097152))
			{
				__LIB_0__::func_45("FINISH_CAMP_UNLOCKED_EGGS", 10000, 0, 0, 0, 1);
				__LIB_1__::func_683(&(uParam0->f_1598), 2097152);
			}
			__LIB_1__::func_683(&(uParam0->f_1598), 64);
			__LIB_1__::func_683(&(uParam0->f_1598), 32768);
		}
		if ((uParam0->f_1630.f_2 >= 2 && uParam0->f_1630.f_3 >= 2) && !__LIB_5__::func_904(262144))
		{
			__LIB_1__::func_683(&(uParam0->f_1598), 2048);
		}
	}
	func_1064(uParam0, uParam1);
	uParam0->f_1581 = 2;
}

void func_690(var uParam0, var uParam1)
{
	if (uParam0->f_1614)
	{
		return;
	}
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (uParam0->f_1582.f_2 > 2 && uParam0->f_1582.f_2 < 5)
		{
			if (TASK::_0x0C3CB2E600C8977D(Global_35, 0) && PED::_IS_PED_USING_SCENARIO_HASH(Global_35, uParam0->f_1582))
			{
				if (uParam0->f_1582.f_2 == 4)
				{
					uParam0->f_1600 = { TASK::_GET_SCENARIO_POINT_COORDS(TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false), true) };
					if (!__LIB_6__::func_226(&(uParam0->f_1582)))
					{
						uParam0->f_1582.f_2 = 5;
						__LIB_1__::func_281(&(uParam0->f_1610), 1, 1);
					}
					else
					{
						uParam0->f_1582.f_2 = 0;
						__LIB_1__::func_683(&(uParam0->f_1598), 32);
						(uParam1[uParam0->f_1643 /*8*/])->f_2 = 0;
						uParam0->f_1590 = { uParam0->f_1582 };
						uParam0->f_1644 = uParam0->f_1643;
						__LIB_6__::func_221(&(uParam0->f_1582));
						uParam0->f_1643 = -1;
						uParam0->f_1581 = 3;
						return;
					}
				}
			}
		}
		if (__LIB_1__::func_533(4) && __LIB_0__::func_62(Global_36, uParam0->f_1646) > 10000f)
		{
			uParam0->f_1581 = 11;
			func_676(uParam0, uParam1, 0, 1, 1);
			return;
		}
		if (__LIB_0__::func_27(uParam0->f_1598, 32))
		{
			if ((!__LIB_6__::func_297() && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1)) && !TASK::_0x0C3CB2E600C8977D(Global_35, 0))
			{
				uParam0->f_1581 = 11;
				func_676(uParam0, uParam1, 0, 1, 1);
			}
			if (uParam0->f_1582.f_2 == 5 && !PED::IS_PED_USING_ANY_SCENARIO(Global_35))
			{
				uParam0->f_1581 = 14;
				return;
			}
		}
		else if (uParam0->f_1581 > 4)
		{
			if (!__LIB_6__::func_297() && !PED::IS_PED_USING_ANY_SCENARIO(Global_35))
			{
				if (uParam0->f_1582.f_2 == 5)
				{
					uParam0->f_1581 = 14;
				}
				else
				{
					uParam0->f_1581 = 11;
					func_676(uParam0, uParam1, 0, 1, 1);
				}
			}
		}
	}
}

void func_693(var uParam0, var uParam1)
{
	if (uParam0->f_1582.f_2 > 0 || __LIB_0__::func_27(uParam0->f_1598, 32))
	{
		if (__LIB_0__::func_567(uParam0->f_1610, 1))
		{
			if (__LIB_0__::func_139(uParam0->f_1610))
			{
				__LIB_1__::func_281(&(uParam0->f_1610), 1, 1);
			}
			if (__LIB_0__::func_139(uParam0->f_1610))
			{
				__LIB_1__::func_515(uParam0->f_1610, 1);
			}
			uParam0->f_1581 = 11;
			func_676(uParam0, uParam1, 0, 1, 1);
		}
	}
}

void func_694(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_1__::func_533(134217728) || __LIB_1__::func_533(268435456))
	{
		func_687(uParam0, uParam1);
	}
	__LIB_6__::func_651(uParam0, uParam1[uParam0->f_1645 /*8*/]);
	bVar0 = PED::IS_PED_USING_ANY_SCENARIO(Global_35);
	if (!__LIB_6__::func_209(uParam0) && __LIB_0__::func_139(uParam0->f_1610))
	{
		__LIB_1__::func_281(&(uParam0->f_1610), 1, 1);
	}
	if (__LIB_1__::func_533(4))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 21, true);
		PED::SET_PED_RESET_FLAG(Global_35, 168, true);
		PED::SET_PED_RESET_FLAG(Global_35, 288, true);
		PAD::_SET_CONTROL_CONTEXT(6, joaat("PLAYERPERFOMINGCHORE"));
		PED::SET_PED_RESET_FLAG(Global_35, 202, true);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.35f);
		if (uParam0->f_1590.f_1 == 14)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 316, true);
		}
		if (!__LIB_0__::func_139(uParam0->f_1610) && !bVar0)
		{
			uParam0->f_1610 = __LIB_2__::func_512("EXIT_CHORE", joaat("INPUT_CONTEXT_B"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
			__LIB_0__::func_629(__LIB_0__::func_17(uParam0->f_1610), 0);
		}
		if (bVar0 && __LIB_1__::func_264(uParam0->f_1610, 1))
		{
			__LIB_0__::func_629(__LIB_0__::func_17(uParam0->f_1610), 0);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
		}
		else if (!bVar0 && !__LIB_1__::func_264(uParam0->f_1610, 1))
		{
			__LIB_0__::func_629(__LIB_0__::func_17(uParam0->f_1610), 1);
		}
		else if (!__LIB_1__::func_264(uParam0->f_1610, 1))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
		}
	}
	if (__LIB_0__::func_317() == 8)
	{
		__LIB_6__::func_560(uParam0, uParam1);
	}
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (uParam0->f_1643 == -1 && ((bVar0 || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_DYNAMIC_SCENARIO"))) || __LIB_0__::func_163(Global_35, -76381094)))
		{
			iVar1 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false);
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(iVar1))
			{
				return;
			}
			iVar3 = TASK::_GET_SCENARIO_POINT_TYPE(iVar1);
			uParam0->f_1646 = { TASK::_GET_SCENARIO_POINT_COORDS(iVar1, true) };
			iVar2 = 0;
			while (iVar2 < *uParam1)
			{
				if (__LIB_6__::func_222(uParam1[iVar2 /*8*/], 1))
				{
					if (iVar3 == (*uParam1)[iVar2 /*8*/] && __LIB_0__::func_62(uParam0->f_1646, __LIB_6__::func_590(uParam1[iVar2 /*8*/])) < __LIB_6__::func_227(uParam1[iVar2 /*8*/]))
					{
						if (iVar3 == joaat("WORLD_PLAYER_CHORES_PUMP_WATER"))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256, false);
						}
						__LIB_5__::func_548(4);
						uParam0->f_1643 = iVar2;
						return;
					}
				}
				iVar2++;
			}
		}
		else if ((__LIB_1__::func_533(4) && !__LIB_0__::func_27(uParam0->f_1598, 32)) && !PED::IS_PED_USING_ANY_SCENARIO(Global_35))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			__LIB_5__::func_547(4);
			uParam0->f_1643 = -1;
		}
		if (uParam0->f_1643 != -1 && (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -898657814)))
		{
			if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				GRAPHICS::_0x1C6306E5BC25C29C();
			}
			uParam0->f_1582 = { *(uParam1[uParam0->f_1643 /*8*/]) };
			__LIB_1__::func_683(&((uParam1[uParam0->f_1643 /*8*/])->f_3), 1);
			__LIB_6__::func_316(uParam1, &(uParam0->f_1582));
			__LIB_6__::func_561(1);
			if (uParam0->f_1582.f_1 == 2 || uParam0->f_1582.f_1 == 10)
			{
				AUDIO::_PLAY_SOUND_FROM_ENTITY("Pour_Water_Onto_Water", Global_35, "Chore_Water_Pump_Sounds", false, 0, 0);
			}
			uParam0->f_1581 = 5;
			if (__LIB_6__::func_228(uParam1[uParam0->f_1643 /*8*/]))
			{
				__LIB_6__::func_207(uParam1);
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1649))
			{
				uParam0->f_1649 = VOLUME::_CREATE_VOLUME_AGGREGATE();
			}
			VOLUME::_0x39816F6F94F385AD(uParam0->f_1649, uParam0->f_1646, 0f, 0f, 0f, 2f, 2f, 3f);
			if (__LIB_0__::func_27(uParam0->f_1598, 32))
			{
				__LIB_4__::func_353();
				__LIB_0__::func_769();
			}
			if (!__LIB_0__::func_139(uParam0->f_1610) && uParam0->f_1582.f_1 == 7)
			{
				uParam0->f_1610 = __LIB_2__::func_512("EXIT_CHORE", joaat("INPUT_CONTEXT_B"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
			}
			__LIB_4__::func_229(1073741824 /* Float: 2f */);
			__LIB_6__::func_59(__LIB_5__::func_824(__LIB_0__::func_12()), 2048);
			__LIB_6__::func_59(__LIB_5__::func_824(__LIB_0__::func_12()), 2097152);
			__LIB_6__::func_59(__LIB_5__::func_824(__LIB_0__::func_12()), 128);
			PED::SET_PED_CONFIG_FLAG(Global_35, 43, true);
			PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 3, 2, 1);
			PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 4, 2, 1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			uParam0->f_1642 = 0;
			uParam0->f_1582.f_2 = 3;
		}
	}
}

void func_696(var uParam0, var uParam1)
{
	switch (uParam0->f_1582.f_1)
	{
		case 4:
			__LIB_6__::func_639(uParam0, uParam1);
			break;
		case 0:
			__LIB_6__::func_640(uParam0, uParam1);
			break;
		case 1:
			__LIB_6__::func_641(uParam0, uParam1);
			break;
		case 9:
			__LIB_6__::func_642(uParam0, uParam1);
			break;
		case 5:
			__LIB_6__::func_643(uParam0, uParam1);
			break;
		case 6:
			__LIB_6__::func_644(uParam0, uParam1);
			break;
		case 7:
			func_1085(uParam0, uParam1);
			break;
		case 2:
		case 3:
			__LIB_6__::func_229(uParam0, uParam1);
			break;
		case 10:
			__LIB_6__::func_229(uParam0, uParam1);
			break;
		case 14:
			__LIB_6__::func_642(uParam0, uParam1);
			break;
		case 8:
			__LIB_6__::func_230(uParam0, uParam1);
			break;
	}
}

void func_698(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	if (__LIB_6__::func_231(&(uParam0->f_1582)))
	{
		iVar0 = __LIB_6__::func_232(&(uParam0->f_1582));
		if (iVar0 != 0)
		{
			iVar1 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(uParam0->f_1600, iVar0, 0.15f, 0, true);
			if (!TASK::_0xEA31F199A73801D3(iVar1))
			{
				uParam0->f_1582.f_2 = 4;
				uParam0->f_1581 = 8;
				return;
			}
		}
	}
	uParam0->f_1630++;
	Global_40.f_4283.f_408.f_4++;
	MISC::SET_BIT(&(Global_40.f_4283.f_408), uParam0->f_1643);
	Global_40.f_4283.f_408.f_1 = __LIB_0__::func_23();
	if (__LIB_0__::func_27(uParam0->f_1598, 32))
	{
		if (MAP::DOES_BLIP_EXIST(uParam0->f_1582.f_4))
		{
			MAP::REMOVE_BLIP(&(uParam0->f_1582.f_4));
		}
		if (uParam0->f_1582.f_1 == 8)
		{
			uParam0->f_1630.f_1++;
		}
		__LIB_1__::func_696(45);
		__LIB_1__::func_715(10, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
		__LIB_6__::func_207(uParam1);
		uParam0->f_1599++;
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1649))
		{
			VOLUME::_DELETE_VOLUME(uParam0->f_1649);
		}
		(uParam1[uParam0->f_1643 /*8*/])->f_2 = 6;
		__LIB_6__::func_221(&(uParam0->f_1582));
		uParam0->f_1643 = -1;
		func_687(uParam0, uParam1);
		if (uParam0->f_1599 >= __LIB_6__::func_562(uParam0->f_1590.f_1))
		{
			uParam0->f_1581 = 12;
			uParam0->f_1599 = 0;
			if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1649))
			{
				POPULATION::_0x74C2B3DC0B294102(uParam0->f_1649);
				POPULATION::_0xA1CFB35069D23C23(uParam0->f_1649);
				VOLUME::_DELETE_VOLUME(uParam0->f_1649);
			}
			func_700(uParam0, uParam1);
			return;
		}
		else if (__LIB_0__::func_317() == 8 && uParam0->f_1590.f_1 == 9)
		{
			__LIB_1__::func_422("FINISH_CAMP_CHORE_WATER_BUCKET_BEECHERS_PART_1", 7500, 0, 1, 0, 0, -1, -1, 0);
			uParam0->f_1599 = (uParam0->f_1599 - 1);
			uParam0->f_1590 = joaat("WORLD_PLAYER_CHORES_PUMP_WATER");
			uParam0->f_1581 = 5;
			uParam0->f_1582 = { uParam0->f_1590 };
			uParam0->f_1643 = uParam0->f_1644;
			uParam0->f_1582.f_4 = MAP::_BLIP_ADD_FOR_COORD(408396114, __LIB_6__::func_590(&(uParam0->f_1582)));
			MAP::SET_BLIP_SPRITE(uParam0->f_1590.f_4, joaat("BLIP_OBJECTIVE"), false);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_1590.f_4, "BLIP_CAMP_CHORE");
			return;
		}
		uParam0->f_1581 = iParam2;
		return;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1649))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_1649);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_1649);
		VOLUME::_DELETE_VOLUME(uParam0->f_1649);
	}
	if (uParam0->f_1582.f_1 == 6)
	{
		uParam0->f_1625 = 1;
		uParam0->f_1624 = 6;
		uParam0->f_1630.f_3++;
		Global_40.f_4283.f_408.f_3 = (Global_40.f_4283.f_408.f_3 + 0.25f);
		__LIB_17__::func_959(uParam0, &(uParam0->f_1582), uParam1);
	}
	else if (uParam0->f_1582.f_1 == 5)
	{
		uParam0->f_1625 = 1;
		uParam0->f_1624 = 5;
		uParam0->f_1630.f_2++;
		Global_40.f_4283.f_408.f_2 = (Global_40.f_4283.f_408.f_2 + 0.25f);
		__LIB_17__::func_959(uParam0, &(uParam0->f_1582), uParam1);
	}
	else if (uParam0->f_1582.f_1 == 4)
	{
		uParam0->f_1630.f_4++;
		__LIB_17__::func_959(uParam0, &(uParam0->f_1582), uParam1);
	}
	else if (uParam0->f_1582.f_1 != 7)
	{
		__LIB_17__::func_959(uParam0, &(uParam0->f_1582), uParam1);
	}
	if (uParam0->f_1643 != -1)
	{
		(uParam1[uParam0->f_1643 /*8*/])->f_2 = 6;
		uParam0->f_1643 = -1;
		__LIB_6__::func_221(&(uParam0->f_1582));
	}
	if (__LIB_0__::func_139(uParam0->f_1610))
	{
		__LIB_1__::func_281(&(uParam0->f_1610), 1, 1);
	}
	__LIB_6__::func_559(1);
	__LIB_4__::func_353();
	__LIB_0__::func_769();
	PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 3, 2, 0);
	PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 4, 2, 0);
	__LIB_4__::func_226(1073741824 /* Float: 2f */);
	__LIB_6__::func_60(__LIB_5__::func_824(__LIB_0__::func_12()), 2097152);
	__LIB_6__::func_60(__LIB_5__::func_824(__LIB_0__::func_12()), 2048);
	__LIB_6__::func_60(__LIB_5__::func_824(__LIB_0__::func_12()), 128);
	__LIB_5__::func_547(4);
	__LIB_1__::func_696(45);
	PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
	__LIB_1__::func_715(10, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
	__LIB_6__::func_207(uParam1);
	func_687(uParam0, uParam1);
}

void func_700(var uParam0, var uParam1)
{
	vector3 vVar0;
	if ((!TASK::_0x0C3CB2E600C8977D(Global_35, 0) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1)) && !__LIB_0__::func_163(Global_35, -76381094))
	{
		vVar0 = { __LIB_6__::func_234() };
		uParam0->f_1582.f_2 = 5;
		uParam0->f_1614 = 1;
		if (!__LIB_0__::func_86(vVar0))
		{
			uParam0->f_1616 = TASK::CREATE_SCENARIO_POINT(__LIB_6__::func_232(&(uParam0->f_1590)), __LIB_6__::func_234(), __LIB_6__::func_235(), 0, 0, 0);
			TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0->f_1616, 0, 0, true, false, 0, false, -1f, false);
		}
		else
		{
			uParam0->f_1616 = TASK::CREATE_SCENARIO_POINT(__LIB_6__::func_232(&(uParam0->f_1590)), Global_36, (ENTITY::GET_ENTITY_HEADING(Global_35) - 90f), 0, 0, 0);
			TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0->f_1616, 0, 0, true, false, 0, false, -1f, false);
		}
		if (__LIB_0__::func_139(uParam0->f_1610))
		{
			__LIB_1__::func_281(&(uParam0->f_1610), 1, 1);
		}
	}
	if ((__LIB_0__::func_163(Global_35, 993674639) || __LIB_0__::func_163(Global_35, -76381094)) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
	}
	if ((TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_1616) && PED::_IS_PED_USING_SCENARIO_POINT(Global_35, uParam0->f_1616)) && TASK::_0x0C3CB2E600C8977D(Global_35, 0))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		__LIB_4__::func_353();
		__LIB_0__::func_769();
		func_1099(uParam0, uParam1);
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1649))
		{
			VOLUME::_DELETE_VOLUME(uParam0->f_1649);
		}
		uParam0->f_1614 = 0;
	}
}

void func_704(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	switch (iLocal_3793)
	{
		case 0:
			if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("PROP_PLAYER_DYNAMIC_SEAT_CHAIR_TABLE"), false))
			{
				return;
			}
			if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("PROP_CAMP_SEAT_CHAIR_TABLE_STEW"), false))
			{
				return;
			}
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_3795))
			{
				return;
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_3795, true, false))
			{
				return;
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (Local_3808[iVar0 /*4*/].f_2 != 0)
				{
					if (!STREAMING::HAS_MODEL_LOADED(Local_3808[iVar0 /*4*/].f_2))
					{
						return;
					}
				}
				iVar0++;
			}
			if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_167(13)))
			{
				func_1102();
			}
			else
			{
				return;
			}
			break;
		case 1:
			if (__LIB_0__::func_923(Global_40.f_4283.f_330) && !__LIB_3__::func_77(Global_40.f_4283.f_330))
			{
				iLocal_3793 = 7;
				return;
			}
			if ((((((!__LIB_5__::func_61(16, 20) || __LIB_5__::func_219(76)) || __LIB_6__::func_92(76)) || __LIB_5__::func_219(71)) || __LIB_6__::func_92(71)) || !__LIB_1__::func_187(2)) || PED::_IS_PED_CARRYING(Global_35))
			{
				iLocal_3793 = 8;
				return;
			}
			if (!__LIB_0__::func_27(iParam0->f_51.f_1598, 131072) && iParam0->f_51.f_1581 != 10)
			{
				if (UIFEED::_0xC17F69E1418CD11F(1) == 0)
				{
					__LIB_0__::func_45("CAMP_DINNER_AVAILABLE", 10000, 0, 0, 0, 1);
					__LIB_1__::func_683(&(iParam0->f_51.f_1598), 131072);
				}
			}
			if (bLocal_3824 && iParam0->f_51.f_1581 != 10)
			{
				iVar1 = __LIB_0__::func_167(13);
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(iVar1, 0);
				__LIB_1__::func_265(iVar1, "FOOD_READY", joaat("SPEECH_PARAMS_SHOUTED_CRITICAL"), Global_35, 1, 0, 0, 1);
				bLocal_3824 = false;
				__LIB_1__::func_283(&uLocal_3821, 1);
			}
			if ((iLocal_3825 < 4 && __LIB_0__::func_75(&uLocal_3821)) && __LIB_0__::func_265(&uLocal_3821) > 120f)
			{
				bLocal_3824 = true;
				iLocal_3825++;
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_3791))
			{
				iLocal_3791 = MAP::_BLIP_ADD_FOR_COORD(1560611276, func_1105());
				MAP::SET_BLIP_SPRITE(iLocal_3791, joaat("BLIP_GRUB"), false);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_3791, "BLIP_CAMP_EAT");
			}
			if (!__LIB_0__::func_139(iLocal_3794))
			{
				iLocal_3794 = __LIB_1__::func_282("BEECHERS_HOPE_START_FAMILY_DINNER", joaat("INPUT_CONTEXT_Y"), func_1105(), 3f, 3, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
			}
			if (__LIB_0__::func_567(iLocal_3794, 1))
			{
				__LIB_1__::func_515(iLocal_3794, 1);
				Global_40.f_4283.f_330 = __LIB_0__::func_23();
				__LIB_1__::func_446(&(Global_40.f_4283.f_330), 0, 0, 8, 0, 0, 0, 0);
				if (MAP::DOES_BLIP_EXIST(iLocal_3791))
				{
					MAP::REMOVE_BLIP(&iLocal_3791);
				}
				CAM::DO_SCREEN_FADE_OUT(250);
				Global_1327590.f_8 = 1;
				func_185(13, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
				func_185(14, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
				if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_167(7)))
				{
					func_185(7, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
				}
				TASK::SET_SCENARIO_GROUP_ENABLED("BVH_TILLY_LETTER", false);
				func_185(4, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
				__LIB_6__::func_215();
				__LIB_3__::func_121(13, 8192, 1, -1);
				__LIB_3__::func_121(14, 8192, 1, -1);
				__LIB_3__::func_121(4, 8192, 1, -1);
				__LIB_3__::func_121(7, 8192, 1, -1);
				iLocal_3793 = 2;
				__LIB_1__::func_281(&iLocal_3794, 1, 1);
				return;
			}
			break;
		case 2:
			if (!bLocal_3807)
			{
				if (!func_393(4, __LIB_0__::func_482("BeechersHope/beh_dinner_uncle"), -1))
				{
					return;
				}
				if (!func_393(14, __LIB_0__::func_482("BeechersHope/beh_dinner_jack"), -1))
				{
					return;
				}
				if (!func_393(7, __LIB_0__::func_482("BeechersHope/beh_dinner_charles"), -1))
				{
					return;
				}
				func_393(13, __LIB_0__::func_482("BeechersHope/beh_dinner_abigail"), -1);
				bLocal_3807 = true;
			}
			if ((!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_3795, false) && CAM::IS_SCREEN_FADED_OUT()) && bLocal_3807)
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_3795, "BARTENDER", __LIB_0__::func_167(13), 0);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(__LIB_0__::func_167(13), false, true);
				ENTITY::SET_ENTITY_VISIBLE(Local_3808[0 /*4*/], true);
				ENTITY::SET_ENTITY_VISIBLE(Local_3808[1 /*4*/], true);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_3795, func_1105(), 0f, 0f, 60f, 2);
				ANIMSCENE::SET_ANIM_SCENE_INT(Local_3795, "CameraIndex", 2, false);
				iLocal_3715 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -1643.488f, -1359.672f, 84.8215f, -29.0904f, 0f, -122.8445f, 50f, false, 2);
				CAM::SET_CAM_ACTIVE(iLocal_3715, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				ANIMSCENE::START_ANIM_SCENE(Local_3795);
				PED::SET_PED_CONFIG_FLAG(__LIB_0__::func_167(4), 259, false);
				PED::SET_PED_CONFIG_FLAG(__LIB_0__::func_167(14), 259, false);
				PED::SET_PED_CONFIG_FLAG(__LIB_0__::func_167(7), 259, false);
				CAM::DO_SCREEN_FADE_IN(250);
				return;
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_3795, false))
			{
				iLocal_3793 = 3;
			}
			break;
		case 3:
			PED::SET_PED_RESET_FLAG(Global_35, 202, true);
			GRAPHICS::_0x1C6306E5BC25C29C();
			if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_3795, "PLAYER"))
			{
			}
			if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_3795, "BARTENDER"))
			{
				iVar2 = __LIB_0__::func_167(13);
				TASK::TASK_GO_STRAIGHT_TO_COORD(iVar2, -1646.108f, -1359.832f, 83.4185f, 1f, 20000, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, 0);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(__LIB_0__::func_167(13), 1033961445))
			{
				iVar3 = __LIB_0__::func_167(13);
				__LIB_1__::func_265(iVar3, "FOOD_SERVED", joaat("SPEECH_PARAMS_FORCE"), 0, 1, 0, 0, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1552626522))
			{
				func_1107(&Local_3808, &Local_3795);
				iLocal_3792 = TASK::CREATE_SCENARIO_POINT(joaat("PROP_PLAYER_DYNAMIC_SEAT_CHAIR_TABLE"), func_1105(), 60f, 0, 0, 0);
				CAM::DO_SCREEN_FADE_OUT(100);
				__LIB_1__::func_283(&uLocal_3784, 1);
				TASK::_TASK_ITEM_INTERACTION_2(Global_35, joaat("CONSUMABLE_MEAL_BEEF_STEW"), Local_3808[1 /*4*/], joaat("P_BOWL04X_STEW_PH_L_HAND"), joaat("EAT_STEW_BOWL_TABLE_BASE"), 3, 0, 0f);
				TASK::_TASK_ITEM_INTERACTION_2(Global_35, joaat("CONSUMABLE_MEAL_BEEF_STEW"), Local_3808[0 /*4*/], joaat("P_SPOON01X_PH_R_HAND"), joaat("EAT_STEW_BOWL_TABLE_BASE"), 3, 0, 0f);
				TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_3792, 0, 0, false, true, 0, false, -1f, false);
			}
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_3795, false))
			{
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				MAP::DISPLAY_RADAR(true);
				PERSCHAR::_0xD4B614179BCD0654(__LIB_0__::func_748(13, 0));
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(__LIB_0__::func_167(4), false, true);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(__LIB_0__::func_167(14), false, true);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(__LIB_0__::func_167(7), false, true);
				PERSCHAR::_0xD4B614179BCD0654(__LIB_0__::func_748(4, 0));
				PERSCHAR::_0xD4B614179BCD0654(__LIB_0__::func_748(14, 0));
				PERSCHAR::_0xD4B614179BCD0654(__LIB_0__::func_748(7, 0));
				PED::SET_PED_CONFIG_FLAG(__LIB_0__::func_167(13), 259, false);
				CAM::SET_CAM_ACTIVE(iLocal_3715, false);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				iLocal_3793 = 4;
				iLocal_3787 = 0;
			}
			break;
		case 4:
			__LIB_0__::func_489(0, 0);
			iLocal_3793 = 5;
			break;
		case 5:
			GRAPHICS::_0x1C6306E5BC25C29C();
			if (PED::_0xC488B8C0E52560D8(Global_35))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
			}
			if ((CAM::IS_SCREEN_FADED_OUT() && __LIB_0__::func_75(&uLocal_3784)) && __LIB_1__::func_871(&uLocal_3784) > 1650)
			{
				__LIB_0__::func_37(&uLocal_3784);
				CAM::DO_SCREEN_FADE_IN(250);
			}
			if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
			{
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
			}
			if (TASK::_0x0C3CB2E600C8977D(Global_35, 0) && !__LIB_0__::func_75(&uLocal_3781))
			{
				iLocal_3788 = MISC::GET_RANDOM_INT_IN_RANGE(30, 61);
				__LIB_1__::func_283(&uLocal_3781, 1);
			}
			switch (iLocal_3787)
			{
				case 0:
					if (__LIB_0__::func_75(&uLocal_3781) && __LIB_0__::func_265(&uLocal_3781) > IntToFloat(iLocal_3788))
					{
						if (func_393(13, __LIB_0__::func_482("BeechersHope/beh_abigail_default"), -1))
						{
							PED::_0xA3A9299C4F2ADB98(__LIB_0__::func_167(13));
							__LIB_1__::func_774(13, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
							__LIB_3__::func_90(13, 8192);
							iLocal_3787++;
							PED::SET_PED_CONFIG_FLAG(__LIB_0__::func_167(13), 259, true);
							iLocal_3788 = MISC::GET_RANDOM_INT_IN_RANGE(30, 61);
							__LIB_1__::func_283(&uLocal_3781, 1);
						}
					}
					break;
				case 1:
					if (__LIB_0__::func_75(&uLocal_3781) && __LIB_0__::func_265(&uLocal_3781) > IntToFloat(iLocal_3788))
					{
						if (func_393(14, __LIB_0__::func_482("BeechersHope/beh_jack_default"), -1))
						{
							PED::_0xA3A9299C4F2ADB98(__LIB_0__::func_167(14));
							PED::SET_PED_CONFIG_FLAG(__LIB_0__::func_167(14), 259, true);
							__LIB_1__::func_774(14, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
							__LIB_3__::func_90(14, 8192);
							iLocal_3787++;
							iLocal_3788 = MISC::GET_RANDOM_INT_IN_RANGE(30, 61);
							__LIB_1__::func_283(&uLocal_3781, 1);
						}
					}
					break;
				case 2:
					if (__LIB_0__::func_75(&uLocal_3781) && __LIB_0__::func_265(&uLocal_3781) > IntToFloat(iLocal_3788))
					{
						if (func_393(7, __LIB_0__::func_482("BeechersHope/beh_charles_default"), -1))
						{
							PED::_0xA3A9299C4F2ADB98(__LIB_0__::func_167(7));
							__LIB_1__::func_774(7, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
							__LIB_3__::func_90(7, 8192);
							PED::SET_PED_CONFIG_FLAG(__LIB_0__::func_167(7), 259, true);
							iLocal_3787++;
							iLocal_3788 = MISC::GET_RANDOM_INT_IN_RANGE(30, 61);
							__LIB_1__::func_283(&uLocal_3781, 1);
						}
						else
						{
							iLocal_3787++;
							iLocal_3788 = MISC::GET_RANDOM_INT_IN_RANGE(30, 61);
							__LIB_1__::func_283(&uLocal_3781, 1);
						}
					}
					break;
				case 3:
					if (__LIB_0__::func_75(&uLocal_3781) && __LIB_0__::func_265(&uLocal_3781) > IntToFloat(iLocal_3788))
					{
						if (func_393(4, __LIB_0__::func_482("BeechersHope/beh_uncle_default"), -1))
						{
							PED::_0xA3A9299C4F2ADB98(__LIB_0__::func_167(4));
							__LIB_1__::func_774(4, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
							__LIB_3__::func_90(4, 8192);
							PED::SET_PED_CONFIG_FLAG(__LIB_0__::func_167(4), 259, true);
							iLocal_3787++;
							__LIB_1__::func_283(&uLocal_3781, 1);
						}
					}
					break;
			}
			if (iLocal_3787 > 3)
			{
				iLocal_3787 = 0;
				iLocal_3793 = 6;
			}
			break;
		case 6:
			ANIMSCENE::RESET_ANIM_SCENE(Local_3795, 0);
			func_1102();
			iLocal_3793 = 7;
			break;
		case 7:
			if (!TASK::IS_SCENARIO_GROUP_ENABLED("BVH_TILLY_LETTER") && CAM::IS_SPHERE_VISIBLE(-1644.848f, -1359.398f, 84.2268f, 2f))
			{
				TASK::SET_SCENARIO_GROUP_ENABLED("BVH_TILLY_LETTER", true);
			}
			if (__LIB_3__::func_77(Global_40.f_4283.f_330))
			{
				iLocal_3793 = 0;
				bLocal_3824 = true;
				iLocal_3825 = 0;
			}
			if (__LIB_0__::func_139(iLocal_3794))
			{
				__LIB_1__::func_281(&iLocal_3794, 1, 1);
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_3791))
			{
				MAP::REMOVE_BLIP(&iLocal_3791);
			}
			break;
		case 8:
			if ((((((__LIB_5__::func_61(16, 20) && !__LIB_5__::func_219(76)) && __LIB_1__::func_187(2)) && !__LIB_5__::func_219(71)) && !__LIB_6__::func_92(71)) && !__LIB_6__::func_92(76)) && !PED::_IS_PED_CARRYING(Global_35))
			{
				bLocal_3824 = true;
				iLocal_3793 = 1;
			}
			if (__LIB_0__::func_139(iLocal_3794))
			{
				__LIB_1__::func_281(&iLocal_3794, 1, 1);
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_3791))
			{
				MAP::REMOVE_BLIP(&iLocal_3791);
			}
			break;
	}
}

void func_707()
{
	if (__LIB_0__::func_567(iLocal_3733, 1))
	{
		__LIB_1__::func_281(&iLocal_3733, 1, 1);
		if (!__LIB_0__::func_163(Global_35, 1920390111))
		{
			TASK::TASK_ACHIEVE_HEADING(Global_35, 180f, 0);
		}
		iLocal_3737 = 1;
		iLocal_3736 = __LIB_11__::func_570("BKSHLF_SELECT", joaat("INPUT_CONTEXT_A"), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		__LIB_4__::func_12(iLocal_3736, -225488352, 0, 1);
		iLocal_3734 = __LIB_11__::func_570("BKSHLF_QUIT", joaat("INPUT_CONTEXT_B"), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		__LIB_4__::func_12(iLocal_3734, -225488352, 0, 1);
		iLocal_3735 = __LIB_6__::func_75("BKSHLF_BRWSE", joaat("INPUT_GAME_MENU_LEFT"), joaat("INPUT_GAME_MENU_RIGHT"), 0);
		__LIB_4__::func_12(iLocal_3735, -225488352, 0, 1);
		iLocal_3780 = 0;
		Global_1357514 = 1;
	}
}

void func_708()
{
	HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-225488352, sLocal_3759[iLocal_3779], 1, 0, 0, 0);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	if (__LIB_5__::func_649(iLocal_3735, 1, 1))
	{
		if (iLocal_3779 < 18)
		{
			iLocal_3779++;
		}
		else
		{
			iLocal_3779 = 0;
		}
		iLocal_3780 = 0;
	}
	if (__LIB_5__::func_649(iLocal_3735, 0, 1))
	{
		if (iLocal_3779 > 0)
		{
			iLocal_3779 = (iLocal_3779 - 1);
		}
		else
		{
			iLocal_3779 = 18;
		}
		iLocal_3780 = 0;
	}
	if (__LIB_1__::func_732(iLocal_3734, 1) || !__LIB_1__::func_205(Global_35, iLocal_3738, 1, 0))
	{
		iLocal_3737 = 4;
		if (!__LIB_1__::func_205(Global_35, iLocal_3738, 1, 0))
		{
		}
	}
	else if (__LIB_1__::func_732(iLocal_3736, 1))
	{
		if (!__LIB_1__::func_707(iLocal_3739[iLocal_3779], 1, 0))
		{
			func_1111(iLocal_3739[iLocal_3779], 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			iLocal_3780 = 1;
		}
		func_1112(iLocal_3739[iLocal_3779], 1, 0, 0, 1, 0, 1);
		func_1113();
		iLocal_3737 = 2;
	}
}

void func_709()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	if (__LIB_1__::func_732(iLocal_3735, 1))
	{
	}
	if (!__LIB_9__::func_749(iLocal_3739[iLocal_3779]))
	{
		iLocal_3737 = 4;
		if (iLocal_3780 == 1)
		{
			func_1115(iLocal_3739[iLocal_3779], 1, 1, -142743235, 0);
		}
		iLocal_3780 = 0;
	}
}

void func_710()
{
	iLocal_3737 = 0;
	Global_1357514 = 0;
	func_1113();
	func_711();
}

void func_711()
{
	iLocal_3738 = VOLUME::_CREATE_VOLUME_CYLINDER(-1640.876f, -1364.141f, 83.4028f, 0f, 0f, 0f, 0.4f, 0.4f, 1.5f);
	iLocal_3733 = __LIB_2__::func_513("BKSHLF_ENTER", joaat("INPUT_CONTEXT_Y"), iLocal_3738, 2, 0, 0, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
	iLocal_3739[0] = joaat("DOCUMENT_NOTE_MAD_SCIENTIST");
	sLocal_3759[0] = "DOCUMENT_NOTE_MAD_SCIENTIST";
	iLocal_3739[1] = joaat("DOCUMENT_BOOK_DECEITFUL");
	sLocal_3759[1] = "DOCUMENT_BOOK_DECEITFUL";
	iLocal_3739[2] = joaat("DOCUMENT_BOOK_SHREW");
	sLocal_3759[2] = "DOCUMENT_BOOK_SHREW";
	iLocal_3739[3] = joaat("DOCUMENT_BOOK_AMERICAN_EDEN");
	sLocal_3759[3] = "DOCUMENT_BOOK_AMERICAN_EDEN";
	iLocal_3739[4] = joaat("DOCUMENT_BOOK_AMERICAN_INFERNO");
	sLocal_3759[4] = "DOCUMENT_BOOK_AMERICAN_INFERNO";
	iLocal_3739[5] = joaat("DOCUMENT_BOOK_EXISTENCE_OBLIVION");
	sLocal_3759[5] = "DOCUMENT_BOOK_EXISTENCE_OBLIVION";
	iLocal_3739[6] = joaat("DOCUMENT_FIELD_MANUAL");
	sLocal_3759[6] = "DOCUMENT_FIELD_MANUAL";
	iLocal_3739[7] = joaat("DOCUMENT_GET_RICH_BOOK");
	sLocal_3759[7] = "DOCUMENT_GET_RICH_BOOK";
	iLocal_3739[8] = joaat("DOCUMENT_BOOK_ARABIAN_PRINCE");
	sLocal_3759[8] = "DOCUMENT_BOOK_ARABIAN_PRINCE";
	iLocal_3739[9] = joaat("DOCUMENT_BOOK_BLACK_HEART_LADY");
	sLocal_3759[9] = "DOCUMENT_BOOK_BLACK_HEART_LADY";
	iLocal_3739[10] = joaat("DOCUMENT_BOOK_BOY_NEW_YORK");
	sLocal_3759[10] = "DOCUMENT_BOOK_BOY_NEW_YORK";
	iLocal_3739[11] = joaat("DOCUMENT_BOOK_FORAGING");
	sLocal_3759[11] = "DOCUMENT_BOOK_FORAGING";
	iLocal_3739[12] = joaat("DOCUMENT_BOOK_CASTLE_GLEN");
	sLocal_3759[12] = "DOCUMENT_BOOK_CASTLE_GLEN";
	iLocal_3739[13] = joaat("DOCUMENT_BOOK_CASTLE_MOOR");
	sLocal_3759[13] = "DOCUMENT_BOOK_CASTLE_MOOR";
	iLocal_3739[14] = joaat("DOCUMENT_BOOK_FIELD_LAVENDER");
	sLocal_3759[14] = "DOCUMENT_BOOK_FIELD_LAVENDER";
	iLocal_3739[15] = joaat("DOCUMENT_BOOK_FRANK_HECK");
	sLocal_3759[15] = "DOCUMENT_BOOK_FRANK_HECK";
	iLocal_3739[16] = joaat("DOCUMENT_BOOK_LADY_MANOR");
	sLocal_3759[16] = "DOCUMENT_BOOK_LADY_MANOR";
	iLocal_3739[17] = joaat("DOCUMENT_BOOK_JIM_BOY");
	sLocal_3759[17] = "DOCUMENT_BOOK_JIM_BOY";
	iLocal_3739[18] = joaat("DOCUMENT_BOOK_HUNTING");
	sLocal_3759[18] = "DOCUMENT_BOOK_HUNTING";
}

void func_719(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
	if (__LIB_0__::func_139(iParam0->f_6))
	{
		__LIB_1__::func_281(&(iParam0->f_6), 1, 1);
	}
	if (__LIB_0__::func_139(iParam0->f_1))
	{
		__LIB_1__::func_281(&(iParam0->f_1), 1, 1);
	}
}

void func_721(int* iParam0, var uParam1)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	int iVar8;
	if (__LIB_0__::func_86(__LIB_5__::func_958()) || __LIB_6__::func_143(1) == 0)
	{
		return;
	}
	sVar0 = "script@ambient@shop@CATALOG_PLAYER";
	sVar1 = "PBL_ENTER";
	sVar2 = "PBL_FLIP_L1";
	sVar3 = "PBL_FLIP_R1";
	if (MISC::IS_BIT_SET(Global_1357549.f_1893, 4))
	{
		sVar4 = "PBL_EXIT_SECTION";
	}
	else
	{
		sVar4 = "PBL_EXIT_INDEX";
	}
	sVar5 = "ledger_ct";
	sVar6 = __LIB_5__::func_959();
	sVar7 = __LIB_6__::func_237(iParam0->f_35.f_491.f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_864))
	{
		STREAMING::REQUEST_MODEL(iParam0->f_33, false);
		if (STREAMING::HAS_MODEL_LOADED(iParam0->f_33))
		{
			iParam0->f_864 = OBJECT::CREATE_OBJECT(iParam0->f_33, __LIB_5__::func_958(), true, true, false, false, true);
			ENTITY::SET_ENTITY_COORDS(iParam0->f_864, __LIB_5__::func_958(), true, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(iParam0->f_864, __LIB_5__::func_960(), 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_864, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_33);
		}
	}
	else if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(sVar5) == 0)
	{
		HUD::REGISTER_NAMED_RENDERTARGET(sVar5, false);
		HUD::LINK_NAMED_RENDERTARGET(iParam0->f_33);
		if (HUD::IS_NAMED_RENDERTARGET_LINKED(iParam0->f_33))
		{
		}
		else
		{
			if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(sVar5))
			{
				HUD::RELEASE_NAMED_RENDERTARGET(sVar5);
			}
			return;
		}
		iVar8 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID(sVar5);
		HUD::SET_TEXT_RENDER_ID(iVar8);
	}
	if (iParam0->f_20 != 0)
	{
		if (__LIB_0__::func_272(Global_35, 0))
		{
			PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
			PED::SET_PED_RESET_FLAG(Global_35, 258, true);
		}
		__LIB_1__::func_538(0);
	}
	if (iParam0->f_20 >= 4)
	{
		PAD::_SET_CONTROL_CONTEXT(4, joaat("LEDGER"));
	}
	func_1128(iParam0, uParam1);
	__LIB_5__::func_961(&(iParam0->f_35), iParam0->f_20);
	switch (iParam0->f_20)
	{
		case 0:
			if (__LIB_0__::func_139(iParam0->f_6))
			{
				if (__LIB_1__::func_732(iParam0->f_6, 1))
				{
					if (__LIB_5__::func_927())
					{
						INTERIOR::FORCE_ROOM_FOR_ENTITY(iParam0->f_864, INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Global_35));
					}
					__LIB_0__::func_326(8192);
					__LIB_0__::func_326(67108864);
					iParam0->f_858 = 0;
					func_719(iParam0);
					__LIB_5__::func_962(0);
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_18))
					{
						ANIMSCENE::RESET_ANIM_SCENE(iParam0->f_18, 0);
					}
					iParam0->f_18 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 0, sVar1, false, true);
					ANIMSCENE::LOAD_ANIM_SCENE(iParam0->f_18);
					__LIB_5__::func_963(&(iParam0->f_35), 0);
					Global_1357549.f_1894 = 0;
					__LIB_5__::func_964(&(iParam0->f_35.f_2), __LIB_0__::func_317());
					__LIB_5__::func_965(&(iParam0->f_35));
					__LIB_5__::func_966();
					MAP::DISPLAY_RADAR(false);
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
					MISC::SET_BIT(&(Global_1357549.f_1893), 0);
					__LIB_17__::func_958(iParam0, 2);
				}
			}
			else if (__LIB_4__::func_635(8192) == 0)
			{
				if ((__LIB_0__::func_317() == 1 || __LIB_0__::func_317() == 2) || __LIB_0__::func_317() == 3)
				{
					if (__LIB_6__::func_143(0))
					{
						iParam0->f_6 = __LIB_1__::func_282("LDGR_TITHE", joaat("INPUT_CONTEXT_X"), __LIB_5__::func_907(__LIB_5__::func_846()), __LIB_5__::func_908(), 3, 1, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
						__LIB_4__::func_12(iParam0->f_6, 736625733, 0, 1);
					}
				}
			}
			break;
		case 2:
			if ((((ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_18, true, false) && ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(iParam0->f_18, false)) && __LIB_5__::func_967(&(iParam0->f_35))) && __LIB_5__::func_968()) && __LIB_5__::func_962(1))
			{
				iParam0->f_5 = __LIB_5__::func_826();
				__LIB_6__::func_363(&(iParam0->f_35));
				__LIB_19__::func_114(&(iParam0->f_35.f_2.f_1[0 /*237*/]), &(iParam0->f_35.f_498[Global_1357549.f_1894 /*8*/]), &(iParam0->f_35.f_531));
				if (__LIB_19__::func_115(iParam0->f_35.f_498[Global_1357549.f_1894 /*8*/], 0, &(iParam0->f_35.f_2), &(iParam0->f_35.f_491)) && iParam0->f_35.f_491.f_1 != -1)
				{
					__LIB_5__::func_963(&(iParam0->f_35), 1);
					if (iParam0->f_35.f_491.f_5)
					{
						__LIB_6__::func_317(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]);
					}
					else
					{
						__LIB_6__::func_318(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]);
					}
				}
				else
				{
					__LIB_5__::func_963(&(iParam0->f_35), 0);
				}
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_18, "player", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_18, "CATALOG", iParam0->f_864, 0);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iParam0->f_18, __LIB_5__::func_969(iParam0->f_864), __LIB_5__::func_960(), 2);
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_18, sVar1);
				ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam0->f_18, "player", &(iParam0->f_21), false, 0, 2);
				__LIB_17__::func_958(iParam0, 1);
			}
			break;
		case 1:
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 713668775, true) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Global_35, -208384378, true) != 1)
			{
				__LIB_17__::func_958(iParam0, 3);
			}
			break;
		case 3:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_18, sVar1))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_18, sVar1, true);
				__LIB_17__::func_958(iParam0, 4);
			}
			break;
		case 4:
			if (__LIB_0__::func_272(Global_35, 0))
			{
				TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, iParam0->f_18, "player", sVar1, 1069379748 /* Float: 1.48f */, 1, 128, 20000, -1082130432 /* Float: -1f */);
			}
			__LIB_6__::func_319(&(iParam0->f_35));
			if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				iParam0->f_3 = 1;
				__LIB_6__::func_320(&(iParam0->f_816), __LIB_0__::func_317(), 0, 1065353216 /* Float: 1f */);
			}
			else
			{
				iParam0->f_3 = 0;
			}
			__LIB_17__::func_958(iParam0, 5);
			__LIB_1__::func_148(&(iParam0->f_813));
			break;
		case 5:
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 1369124074, true) != 1)
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_18) > 0.36f)
				{
					if (!iParam0->f_3)
					{
						__LIB_6__::func_320(&(iParam0->f_816), __LIB_0__::func_317(), 0, 1065353216 /* Float: 1f */);
					}
					__LIB_5__::func_970(&(iParam0->f_35), 0);
					MISC::SET_BIT(&(Global_1357549.f_1893), 1);
					__LIB_17__::func_958(iParam0, 6);
					return;
				}
			}
			if (__LIB_1__::func_871(&(iParam0->f_813)) > 6000)
			{
				func_810(iParam0);
				__LIB_17__::func_958(iParam0, 7);
			}
			break;
		case 6:
			__LIB_6__::func_93(&(iParam0->f_816));
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-2019190071, "LDGR_TITHE", 1, 0, 0, 0);
			if (__LIB_6__::func_94(iParam0))
			{
				return;
			}
			if (iParam0->f_35.f_772 && __LIB_0__::func_139(iParam0->f_35.f_1))
			{
				if (!__LIB_6__::func_321(iParam0))
				{
					__LIB_5__::func_972(&(iParam0->f_816), __LIB_5__::func_971(__LIB_0__::func_317(), 1), 1);
				}
			}
			else if (__LIB_6__::func_321(iParam0))
			{
				__LIB_5__::func_972(&(iParam0->f_816), __LIB_5__::func_971(__LIB_0__::func_317(), 0), 1);
			}
			func_1151(iParam0);
			if (__LIB_1__::func_732(iParam0->f_7, 1) && Global_1357549.f_1894 < 3)
			{
				__LIB_5__::func_963(&(iParam0->f_35), 0);
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_18, sVar2);
				__LIB_17__::func_958(iParam0, 9);
			}
			if (__LIB_1__::func_732(iParam0->f_8, 1) && Global_1357549.f_1894 > 0)
			{
				__LIB_5__::func_963(&(iParam0->f_35), 0);
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_18, sVar3);
				__LIB_17__::func_958(iParam0, 11);
			}
			if (__LIB_1__::func_732(iParam0->f_35.f_1, 1))
			{
				__LIB_6__::func_322(&(iParam0->f_35), 1);
			}
			if (__LIB_1__::func_732(iParam0->f_9, 1))
			{
				__LIB_5__::func_963(&(iParam0->f_35), 0);
				__LIB_1__::func_283(&(iParam0->f_810), 0);
				MISC::CLEAR_BIT(&(Global_1357549.f_1893), 1);
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_18, sVar4);
				__LIB_17__::func_958(iParam0, 8);
			}
			break;
		case 9:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_18, sVar2))
			{
				Global_1357549.f_1894++;
				__LIB_19__::func_114(&(iParam0->f_35.f_2.f_1[1 /*237*/]), &(iParam0->f_35.f_498[Global_1357549.f_1894 /*8*/]), &(iParam0->f_35.f_531));
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_18, sVar2, true);
				MISC::SET_BIT(&(Global_1357549.f_1893), 2);
				MISC::SET_BIT(&(Global_1357549.f_1893), 4);
				MISC::CLEAR_BIT(&(Global_1357549.f_1893), 1);
				__LIB_17__::func_958(iParam0, 10);
			}
			break;
		case 11:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_18, sVar3))
			{
				Global_1357549.f_1894 = (Global_1357549.f_1894 - 1);
				__LIB_19__::func_114(&(iParam0->f_35.f_2.f_1[0 /*237*/]), &(iParam0->f_35.f_498[Global_1357549.f_1894 /*8*/]), &(iParam0->f_35.f_531));
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_18, sVar3, true);
				MISC::SET_BIT(&(Global_1357549.f_1893), 2);
				MISC::SET_BIT(&(Global_1357549.f_1893), 4);
				MISC::CLEAR_BIT(&(Global_1357549.f_1893), 1);
				__LIB_17__::func_958(iParam0, 12);
			}
			break;
		case 10:
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_18) > 0.09f)
			{
				__LIB_19__::func_114(&(iParam0->f_35.f_2.f_1[0 /*237*/]), &(iParam0->f_35.f_498[Global_1357549.f_1894 /*8*/]), &(iParam0->f_35.f_531));
				iParam0->f_35.f_491.f_2 = 1;
				if (__LIB_19__::func_115(iParam0->f_35.f_498[Global_1357549.f_1894 /*8*/], iParam0->f_35.f_491.f_2, &(iParam0->f_35.f_2), &(iParam0->f_35.f_491)) && iParam0->f_35.f_491.f_1 != -1)
				{
					__LIB_5__::func_963(&(iParam0->f_35), 1);
					if (iParam0->f_35.f_491.f_5)
					{
						__LIB_6__::func_317(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]);
					}
					else
					{
						__LIB_6__::func_318(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]);
					}
				}
				else
				{
					__LIB_5__::func_963(&(iParam0->f_35), 0);
				}
				__LIB_17__::func_958(iParam0, 13);
			}
			break;
		case 12:
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_18) > 0.09f)
			{
				__LIB_19__::func_114(&(iParam0->f_35.f_2.f_1[1 /*237*/]), &(iParam0->f_35.f_498[Global_1357549.f_1894 /*8*/]), &(iParam0->f_35.f_531));
				iParam0->f_35.f_491.f_2 = 0;
				if (__LIB_19__::func_115(iParam0->f_35.f_498[Global_1357549.f_1894 /*8*/], iParam0->f_35.f_491.f_2, &(iParam0->f_35.f_2), &(iParam0->f_35.f_491)) && iParam0->f_35.f_491.f_1 != -1)
				{
					__LIB_5__::func_963(&(iParam0->f_35), 1);
					if (iParam0->f_35.f_491.f_5)
					{
						__LIB_6__::func_317(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]);
					}
					else
					{
						__LIB_6__::func_318(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]);
					}
				}
				else
				{
					__LIB_5__::func_963(&(iParam0->f_35), 0);
				}
				__LIB_17__::func_958(iParam0, 13);
			}
			break;
		case 13:
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_18) > 0.15f)
			{
				MISC::CLEAR_BIT(&(Global_1357549.f_1893), 2);
				MISC::SET_BIT(&(Global_1357549.f_1893), 1);
				__LIB_17__::func_958(iParam0, 6);
			}
			break;
		case 14:
			if (!__LIB_0__::func_75(&(iParam0->f_810)))
			{
				__LIB_1__::func_283(&(iParam0->f_810), 0);
			}
			if (__LIB_1__::func_871(&(iParam0->f_810)) > 2500)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_16))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_16);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar7))
				{
					iParam0->f_16 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar6, 0, sVar7, false, true);
					ANIMSCENE::LOAD_ANIM_SCENE(iParam0->f_16);
					iParam0->f_17 = iParam0->f_35.f_491.f_1;
					__LIB_17__::func_958(iParam0, 15);
				}
			}
			break;
		case 15:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_16, true, false) && ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(iParam0->f_16, false))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_16, false))
				{
					__LIB_5__::func_780(&(iParam0->f_816));
					MISC::SET_BIT(&(Global_1357549.f_1893), 3);
					MISC::CLEAR_BIT(&(Global_1357549.f_1893), 1);
					__LIB_19__::func_114(&(iParam0->f_35.f_2.f_1[iParam0->f_35.f_491.f_2 /*237*/]), &(iParam0->f_35.f_498[Global_1357549.f_1894 /*8*/]), &(iParam0->f_35.f_531));
					if (__LIB_19__::func_115(iParam0->f_35.f_498[Global_1357549.f_1894 /*8*/], iParam0->f_35.f_491.f_2, &(iParam0->f_35.f_2), &(iParam0->f_35.f_491)) && iParam0->f_35.f_491.f_1 != -1)
					{
						if (iParam0->f_35.f_491.f_5)
						{
							__LIB_6__::func_317(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]);
						}
						else
						{
							__LIB_6__::func_318(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]);
						}
					}
					__LIB_17__::func_958(iParam0, 16);
				}
				else
				{
					ANIMSCENE::START_ANIM_SCENE(iParam0->f_16);
					__LIB_5__::func_973();
				}
			}
			break;
		case 16:
			if (__LIB_6__::func_367(iParam0, 0) && ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iParam0->f_16))
			{
				ANIMSCENE::ABORT_ANIM_SCENE(iParam0->f_18, false);
				MISC::CLEAR_BIT(&(Global_1357549.f_1893), 3);
				iParam0->f_17 = -1;
				__LIB_0__::func_37(&(iParam0->f_810));
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_16))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_16);
				}
				__LIB_6__::func_214(iParam0);
				func_810(iParam0);
				__LIB_17__::func_958(iParam0, 7);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_16) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iParam0->f_16, false))
			{
				__LIB_0__::func_698(134217728);
				__LIB_5__::func_963(&(iParam0->f_35), iParam0->f_35.f_491);
				if (iParam0->f_35.f_773 && iParam0->f_35.f_772)
				{
					__LIB_6__::func_320(&(iParam0->f_816), __LIB_0__::func_317(), 1, 1065353216 /* Float: 1f */);
				}
				else
				{
					__LIB_6__::func_320(&(iParam0->f_816), __LIB_0__::func_317(), 0, 1065353216 /* Float: 1f */);
				}
				MISC::CLEAR_BIT(&(Global_1357549.f_1893), 3);
				MISC::SET_BIT(&(Global_1357549.f_1893), 1);
				iParam0->f_17 = -1;
				__LIB_0__::func_37(&(iParam0->f_810));
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_16))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_16);
				}
				__LIB_17__::func_958(iParam0, 6);
			}
			break;
		case 7:
			ENTITY::SET_ENTITY_COORDS(iParam0->f_864, __LIB_5__::func_958(), true, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(iParam0->f_864, __LIB_5__::func_960(), 2, true);
			__LIB_17__::func_958(iParam0, 0);
			break;
		case 8:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_18, sVar4))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_18, sVar4, true);
				__LIB_5__::func_974(&(iParam0->f_35), 0);
				if (__LIB_5__::func_975(64))
				{
					__LIB_5__::func_976(64);
					__LIB_5__::func_775(128);
				}
				__LIB_17__::func_958(iParam0, 17);
			}
			break;
		case 17:
			if (__LIB_0__::func_265(&(iParam0->f_810)) > 0.75f)
			{
				__LIB_0__::func_37(&(iParam0->f_810));
				if (!iParam0->f_3)
				{
					__LIB_5__::func_780(&(iParam0->f_816));
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iParam0->f_18))
			{
				__LIB_6__::func_214(iParam0);
				func_810(iParam0);
			}
			break;
	}
}

void func_810(int* iParam0)
{
	if (MISC::IS_BIT_SET(Global_1357549.f_1893, 0))
	{
		if (iParam0->f_3)
		{
			__LIB_5__::func_780(&(iParam0->f_816));
		}
		MAP::DISPLAY_RADAR(true);
		Global_1357549.f_1894 = 0;
		ANIMSCENE::RESET_ANIM_SCENE(iParam0->f_18, 0);
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_18);
		__LIB_0__::func_698(8192);
		__LIB_0__::func_698(67108864);
		__LIB_6__::func_326();
		func_1238(&(iParam0->f_35));
		__LIB_5__::func_990(&(iParam0->f_35));
		__LIB_5__::func_991();
		__LIB_5__::func_962(2);
		if (__LIB_5__::func_975(128))
		{
			__LIB_5__::func_976(128);
		}
		ENTITY::SET_ENTITY_COORDS(iParam0->f_864, __LIB_5__::func_958(), true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iParam0->f_864, __LIB_5__::func_960(), 2, true);
		MISC::CLEAR_BIT(&(Global_1357549.f_1893), 0);
		MISC::CLEAR_BIT(&(Global_1357549.f_1893), 4);
		__LIB_17__::func_958(iParam0, 0);
	}
}

void func_827(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*4*/]))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT((*iParam0)[iVar0 /*4*/], true))
			{
				OBJECT::DELETE_OBJECT(iParam0[iVar0 /*4*/]);
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0[iVar0 /*4*/]);
			}
		}
		iVar0++;
	}
}

void func_828(var uParam0, var uParam1)
{
	__LIB_6__::func_553(uParam1);
	if (__LIB_1__::func_533(4))
	{
		__LIB_1__::func_281(&(uParam0->f_1610), 1, 1);
		uParam0->f_1581 = 11;
		func_676(uParam0, uParam1, 1, 1, 0);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_1616))
	{
		TASK::_DELETE_SCENARIO_POINT(uParam0->f_1616);
	}
	GRAPHICS::_0x37D7BDBA89F13959("CamTransition01");
	uParam0->f_1581 = 0;
}

void func_853()
{
	if (__LIB_1__::func_707(joaat("PROVISION_TM_SQUIRREL_STATUE"), 1, 0))
	{
	}
	else if (__LIB_17__::func_492() == 1)
	{
		if (__LIB_17__::func_493(joaat("TAXIDERMY_MARITAL_01")))
		{
			__LIB_0__::func_442(joaat("TAXIDERMY_MARITAL_02"));
			__LIB_4__::func_253(joaat("CSTAG_FLOW_RCTAX_STATUE_MISSING"), 1017034651, 1120952528, -1, 1, 1, 0);
		}
	}
	else if (__LIB_17__::func_492() == 2)
	{
		if (__LIB_17__::func_493(joaat("TAXIDERMY_MARITAL_02")))
		{
			__LIB_0__::func_442(joaat("TAXIDERMY_MARITAL_03"));
			__LIB_4__::func_253(joaat("CSTAG_FLOW_RCTAX_STATUE_MISSING"), 1017034651, 1120952528, -1, 1, 1, 0);
		}
	}
	else if (__LIB_17__::func_492() == 3)
	{
		if (__LIB_17__::func_493(joaat("TAXIDERMY_MARITAL_03")))
		{
			__LIB_0__::func_442(joaat("TAXIDERMY_MARITAL_04"));
			__LIB_4__::func_253(joaat("CSTAG_FLOW_RCTAX_STATUE_MISSING"), 1017034651, 1120952528, -1, 1, 1, 0);
		}
	}
	else if (__LIB_17__::func_492() == 4)
	{
		if (__LIB_17__::func_493(joaat("TAXIDERMY_MARITAL_04")))
		{
			__LIB_0__::func_442(joaat("TAXIDERMY_MARITAL_05"));
			__LIB_4__::func_253(joaat("CSTAG_FLOW_RCTAX_STATUE_MISSING"), 1017034651, 1120952528, -1, 1, 1, 0);
		}
	}
	else if (__LIB_17__::func_492() == 5)
	{
		if (__LIB_17__::func_493(joaat("TAXIDERMY_MARITAL_05")))
		{
			__LIB_0__::func_442(joaat("TAXIDERMY_MARITAL_06"));
			__LIB_4__::func_253(joaat("CSTAG_FLOW_RCTAX_STATUE_MISSING"), 1017034651, 1120952528, -1, 1, 1, 0);
		}
	}
	else if (__LIB_17__::func_491() == 6)
	{
		__LIB_4__::func_253(joaat("CSTAG_FLOW_RCTAX_STATUE_MISSING"), 1017034651, 1120952528, -1, 1, 1, 0);
	}
}

bool func_878(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = 1;
	bVar1 = __LIB_6__::func_389();
	iVar2 = __LIB_5__::func_864(iParam0);
	iVar3 = 0;
	while (iVar3 < 27)
	{
		if (!__LIB_0__::func_287(iVar3, 4, 1))
		{
			if (__LIB_6__::func_159(iVar3))
			{
				iVar4 = 0;
				if (bVar1 && __LIB_0__::func_273(iVar3, 32768, 1))
				{
					iVar4 = 1;
				}
				if (!__LIB_6__::func_183(iVar3, iVar4, iVar2, 0, bParam1))
				{
					iVar0 = 0;
				}
				else if (bParam1 && !__LIB_0__::func_699(iVar3))
				{
					if (func_185(iVar3, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1) != 0)
					{
						__LIB_0__::func_288(iVar3, 4, 1);
					}
				}
				else
				{
					__LIB_0__::func_288(iVar3, 4, 1);
				}
			}
			else
			{
				if (((__LIB_0__::func_903(iVar3) && !__LIB_0__::func_699(iVar3)) && !__LIB_1__::func_217(iVar3)) && iVar3 != Global_1357549.f_1497)
				{
					__LIB_6__::func_164(iVar3, 0, 0, 0, 0);
				}
				__LIB_0__::func_288(iVar3, 4, 1);
			}
		}
		iVar3++;
	}
	return iVar0;
}

Vector3 func_915(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, float fParam10, int iParam11, int iParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	var uVar13;
	bool bVar14;
	struct<5> Var15;
	struct<5> Var20;
	var uVar25;
	var uVar26;
	fVar2 = 9999999f;
	__LIB_1__::func_456(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (__LIB_0__::func_479() == 0 && !__LIB_0__::func_795(0))
		{
			bVar14 = true;
		}
	}
	if (!__LIB_0__::func_720(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = __LIB_1__::func_699();
		if (VOLUME::_DOES_VOLUME_EXIST(bVar10))
		{
		}
	}
	if (!__LIB_1__::func_120(Global_1310720.f_21))
	{
		fParam10 = iParam11;
	}
	Var15.f_2 = 723128514;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar25, &Var15);
	while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var15, uVar25) > iVar0)
	{
		iVar1 = 0;
		Var20.f_2 = -1148748386;
		Var20.f_3 = iVar0;
		DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar26, &Var20);
		while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var20, uVar26) > iVar1)
		{
			vVar7 = { __LIB_0__::func_953(iVar0, iVar1) };
			bVar11 = func_1325(iVar0, iVar1);
			fVar3 = BUILTIN::VDIST(vParam0, vVar7);
			if (((((fVar3 < fVar2 && fVar3 > fParam10) && !__LIB_0__::func_86(vVar7)) && __LIB_1__::func_172(iVar0, bParam8, iParam12)) && !__LIB_0__::func_955(iVar0)) || bVar11)
			{
				if (__LIB_6__::func_543(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
				{
					vVar4 = { vVar7 };
					fVar2 = BUILTIN::VDIST(vParam0, vVar7);
					*iParam3 = iVar0;
					*iParam4 = iVar1;
					if (bVar11)
					{
					}
					else
					{
						iVar1++;
					}
					iVar0++;
					VOLUME::_0x748C5F51A18CB8F0(1);
					return vVar4;
				}
			}
		}
	}
}

void func_1059(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!MISC::IS_BIT_SET(Global_40.f_4283.f_408, iVar0))
		{
		}
		else
		{
			uParam0->f_1630++;
			if ((uParam1[iVar0 /*8*/])->f_1 == 8)
			{
				uParam0->f_1630.f_1++;
			}
			if ((uParam1[iVar0 /*8*/])->f_1 == 6)
			{
				uParam0->f_1630.f_3++;
				Global_40.f_4283.f_408.f_3 = (Global_40.f_4283.f_408.f_3 + 0.25f);
			}
			if ((uParam1[iVar0 /*8*/])->f_1 == 5)
			{
				uParam0->f_1630.f_2++;
				Global_40.f_4283.f_408.f_2 = (Global_40.f_4283.f_408.f_2 + 0.25f);
			}
			if ((uParam1[iVar0 /*8*/])->f_1 == 4)
			{
				uParam0->f_1630.f_4++;
			}
			(uParam1[iVar0 /*8*/])->f_2 = 6;
		}
		iVar0++;
	}
	if ((uParam0->f_1630.f_2 > 0 || uParam0->f_1630.f_3 > 0) && !__LIB_5__::func_904(262144))
	{
		__LIB_1__::func_683(&(uParam0->f_1598), 524288);
	}
	if (uParam0->f_1630.f_2 >= 2)
	{
		__LIB_1__::func_683(&(uParam0->f_1598), 1048576);
	}
	if (uParam0->f_1630.f_3 >= 2)
	{
		__LIB_1__::func_683(&(uParam0->f_1598), 2097152);
	}
	if (Global_40.f_4283.f_408.f_5 >= 2)
	{
		__LIB_1__::func_683(&(uParam0->f_1598), 256);
		__LIB_5__::func_547(268435456);
	}
	if (Global_40.f_4283.f_408.f_6)
	{
		__LIB_5__::func_547(134217728);
		__LIB_13__::func_687(3, 1);
	}
}

void func_1060(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	uParam0->f_1630 = 0;
	uParam0->f_1630.f_1 = 0;
	uParam0->f_1598 = 0;
	Global_40.f_4283.f_408.f_6 = 0;
	Global_40.f_4283.f_408.f_5 = 0;
	Global_40.f_4283.f_408 = 0;
	__LIB_5__::func_937(262144);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1619[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_1619[iVar0]));
		}
		iVar0++;
	}
	vVar1 = -1;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	Global_1899848.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(4, 6);
	__LIB_1__::func_65(3, &vVar1, 1);
	__LIB_1__::func_806(&vVar1, 1, 1);
	__LIB_13__::func_687(21, 1);
}

void func_1064(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	iVar0 = 0;
	iVar1 = 0;
	if (__LIB_0__::func_27(uParam0->f_1598, 32))
	{
		return;
	}
	__LIB_6__::func_559(1);
	if (!__LIB_0__::func_27(uParam0->f_1598, 1))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("BCH_BASE_CHORES", true);
		__LIB_6__::func_313(&iVar0, 331);
		__LIB_1__::func_683(&(uParam0->f_1598), 1);
	}
	if (__LIB_0__::func_27(uParam0->f_1598, 128) && !__LIB_0__::func_27(uParam0->f_1598, 8))
	{
		vVar2 = -1;
		vVar2.f_1 = -1;
		vVar2.f_2 = -1;
		__LIB_1__::func_65(21, &vVar2, 1);
		__LIB_1__::func_806(&vVar2, 1, 1);
		__LIB_1__::func_683(&(uParam0->f_1598), 8);
	}
	else if (!__LIB_0__::func_27(uParam0->f_1598, 128) && __LIB_0__::func_27(uParam0->f_1598, 8))
	{
		__LIB_13__::func_687(21, 1);
		__LIB_1__::func_681(&(uParam0->f_1598), 8);
	}
	if (__LIB_0__::func_27(uParam0->f_1598, 256) && !__LIB_0__::func_27(uParam0->f_1598, 16))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("BCH_GATHER_MILK_CHORES", true);
		__LIB_6__::func_313(&iVar0, 16);
		__LIB_1__::func_683(&(uParam0->f_1598), 16);
	}
	else if (!__LIB_0__::func_27(uParam0->f_1598, 256) && __LIB_0__::func_27(uParam0->f_1598, 16))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("BCH_GATHER_MILK_CHORES", false);
		__LIB_6__::func_313(&iVar1, 16);
		__LIB_1__::func_681(&(uParam0->f_1598), 16);
	}
	if (__LIB_0__::func_27(uParam0->f_1598, 512) && !__LIB_0__::func_27(uParam0->f_1598, 2))
	{
		__LIB_6__::func_313(&iVar0, 16384);
		__LIB_1__::func_683(&(uParam0->f_1598), 2);
	}
	else if (!__LIB_0__::func_27(uParam0->f_1598, 512) && __LIB_0__::func_27(uParam0->f_1598, 2))
	{
		__LIB_6__::func_313(&iVar1, 16384);
		__LIB_1__::func_681(&(uParam0->f_1598), 2);
	}
	if (__LIB_0__::func_27(uParam0->f_1598, 64) && !__LIB_0__::func_27(uParam0->f_1598, 4))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("BCH_GATHER_EGGS_CHORES", true);
		__LIB_6__::func_313(&iVar0, 32);
		__LIB_1__::func_683(&(uParam0->f_1598), 4);
	}
	else if (!__LIB_0__::func_27(uParam0->f_1598, 64) && __LIB_0__::func_27(uParam0->f_1598, 4))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("BCH_GATHER_EGGS_CHORES", false);
		__LIB_6__::func_313(&iVar1, 32);
		__LIB_1__::func_681(&(uParam0->f_1598), 4);
	}
	if (iVar0 != 0)
	{
		__LIB_6__::func_558(uParam1, iVar0, 1);
	}
	if (iVar1 != 0)
	{
		__LIB_6__::func_558(uParam1, iVar1, 0);
	}
}

void func_1085(var uParam0, var uParam1)
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
	if (TASK::_0x0C3CB2E600C8977D(Global_35, 1))
	{
		uParam0->f_1582.f_2 = 4;
		if (__LIB_0__::func_139(uParam0->f_1610))
		{
			__LIB_1__::func_281(&(uParam0->f_1610), 1, 1);
		}
		uParam0->f_1581 = 8;
		return;
	}
}

void func_1099(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	if (__LIB_6__::func_231(&(uParam0->f_1590)))
	{
		iVar0 = __LIB_6__::func_232(&(uParam0->f_1590));
		if (iVar0 != 0)
		{
			iVar1 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(uParam0->f_1600, iVar0, 0.15f, 0, true);
			if (!TASK::_0xEA31F199A73801D3(iVar1))
			{
				uParam0->f_1581 = 8;
				uParam0->f_1590.f_2 = 0;
				return;
			}
		}
	}
	MISC::SET_BIT(&(Global_40.f_4283.f_408), uParam0->f_1644);
	Global_40.f_4283.f_408.f_1 = __LIB_0__::func_23();
	__LIB_6__::func_207(uParam1);
	__LIB_6__::func_221(&(uParam0->f_1590));
	if (uParam0->f_1644 != -1)
	{
		*(uParam1[uParam0->f_1644 /*8*/]) = { uParam0->f_1590 };
		(uParam1[uParam0->f_1644 /*8*/])->f_2 = 6;
		uParam0->f_1644 = -1;
	}
	__LIB_6__::func_208(uParam1);
	if (__LIB_0__::func_139(uParam0->f_1610))
	{
		__LIB_1__::func_281(&(uParam0->f_1610), 1, 1);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1649))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_1649);
	}
	__LIB_6__::func_559(1);
	__LIB_4__::func_353();
	__LIB_0__::func_769();
	__LIB_4__::func_226(1073741824 /* Float: 2f */);
	__LIB_6__::func_60(__LIB_5__::func_824(__LIB_0__::func_12()), 2097152);
	__LIB_6__::func_60(__LIB_5__::func_824(__LIB_0__::func_12()), 2048);
	__LIB_6__::func_60(__LIB_5__::func_824(__LIB_0__::func_12()), 128);
	__LIB_5__::func_547(4);
	__LIB_6__::func_654(uParam0, uParam1);
	__LIB_1__::func_681(&(uParam0->f_1598), 32);
	PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 3, 2, 0);
	PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 4, 2, 0);
	PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
	uParam0->f_1642 = 0;
	uParam0->f_1581 = 2;
}

void func_1102()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_3795, "PLAYER", Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_3795, "BARTENDER", __LIB_0__::func_167(13), 0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_3808[0 /*4*/]))
	{
		Local_3808[0 /*4*/] = OBJECT::CREATE_OBJECT(Local_3808[0 /*4*/].f_2, func_1105(), true, true, false, false, true);
		ENTITY::SET_ENTITY_VISIBLE(Local_3808[0 /*4*/], false);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_3808[0 /*4*/], false);
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_3795, Local_3808[0 /*4*/].f_1, Local_3808[0 /*4*/], 0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_3808[1 /*4*/]))
	{
		Local_3808[1 /*4*/] = OBJECT::CREATE_OBJECT(Local_3808[1 /*4*/].f_2, func_1105(), true, true, false, false, true);
		ENTITY::SET_ENTITY_VISIBLE(Local_3808[1 /*4*/], false);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_3808[1 /*4*/], false);
		ENTITY::_0x669655FFB29EF1A9(Local_3808[1 /*4*/], 0, "Stew_Fill", 1f);
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_3795, Local_3808[1 /*4*/].f_1, Local_3808[1 /*4*/], 0);
	iLocal_3793 = 1;
}

Vector3 func_1105()
{
	return -1642.64f, -1360.28f, 83.9f;
}

void func_1107(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ANIMSCENE::_0x6F1F0B17109309DA(*iParam1, (iParam0[iVar0 /*4*/])->f_1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(*iParam1, (iParam0[iVar0 /*4*/])->f_1, false)) && ANIMSCENE::_0x9D1ECA9337BE9FC3(*iParam1, (iParam0[iVar0 /*4*/])->f_1))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*iParam1, (iParam0[iVar0 /*4*/])->f_1, (*iParam0)[iVar0 /*4*/]);
			}
		}
		iVar0++;
	}
}

int func_1111(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_1111(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_9__::func_355(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(2);
					}
					else
					{
						__LIB_9__::func_355(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(1);
					}
				}
			}
			else if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
				{
					__LIB_9__::func_355(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(2);
				}
				else
				{
					__LIB_9__::func_355(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
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
				__LIB_1__::func_797(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (__LIB_0__::func_192(iParam0, 787083290) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_10__::func_444(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1718133314))
		{
			__LIB_10__::func_445(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1738650224))
		{
			__LIB_10__::func_446(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_11__::func_618(iParam0);
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
			__LIB_10__::func_845(iParam0, iParam1);
			__LIB_1__::func_759(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_11__::func_620(iParam0, 0, 0, 0);
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
						func_1111(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_1111(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_1111(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_1111(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_1111(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_1111(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1111(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_1111(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_1111(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1111(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

int func_1112(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<10> Var0;
	struct<16> Var10;
	int iVar26;
	int iVar27;
	int iVar28;
	var uVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	int iVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	if (__LIB_7__::func_775())
	{
		Global_1935689.f_10191 = iParam0;
		__LIB_1__::func_698(iParam0, 1, -142743235, 0, 0);
		return 0;
	}
	if (__LIB_6__::func_126())
	{
		HUD::_0xBFFF81E12A745A5F();
		__LIB_5__::func_905(iParam0, 0);
		__LIB_1__::func_698(__LIB_7__::func_776(), 1, -142743235, 0, 0);
		return 0;
	}
	if (!func_1519(iParam0, bParam4))
	{
		return 0;
	}
	if (func_1520(iParam0))
	{
		return 0;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
	{
		return 0;
	}
	iVar31 = 0;
	bVar32 = true;
	iVar33 = 1;
	bVar34 = true;
	Var0.f_4 = iParam3;
	Var0.f_5 = 1;
	if (__LIB_0__::func_192(iParam0, -2081717885))
	{
		func_1521(iParam0, Var10, Var0, uVar29, bVar32, iVar33);
	}
	else if (__LIB_0__::func_192(iParam0, -1909684001))
	{
		__LIB_9__::func_181(iParam0, Var10, Var0, bVar32, iVar33);
	}
	else if (__LIB_0__::func_192(iParam0, 587975446))
	{
		__LIB_7__::func_777(iParam0, Var10);
	}
	else if (__LIB_0__::func_192(iParam0, 566155764))
	{
		if (!__LIB_0__::func_0(iParam0))
		{
			return 0;
		}
	}
	if (func_1525(iParam0, bParam5, bParam6))
	{
		Global_1911772 = iParam0;
		Global_1911913 = MISC::GET_GAME_TIMER();
		return 1;
	}
	if (__LIB_0__::func_192(iParam0, -1227898937))
	{
		Var0.f_2 = iParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		__LIB_4__::func_709(Var10, 1);
		iVar33 = 0;
		bVar32 = false;
	}
	else if ((__LIB_0__::func_192(iParam0, -1472964441) || __LIB_0__::func_192(iParam0, -228153877)) || __LIB_0__::func_192(iParam0, 566155764))
	{
	}
	else if (__LIB_0__::func_192(iParam0, 1919582297))
	{
		if (((__LIB_1__::func_652() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1)) || TASK::_0x0C3CB2E600C8977D(Global_35, 1)) || !PED::IS_PED_ON_FOOT(Global_35))
		{
			return 0;
		}
		switch (iParam0)
		{
			case joaat("CONSUMABLE_HERBIVORE_BAIT"):
			case joaat("CONSUMABLE_POTENT_HERBIVORE_BAIT"):
				StringCopy(&(Var10.f_10), "item_bait_herbivore", 32);
				break;
			case joaat("CONSUMABLE_PREDATOR_BAIT"):
			case joaat("CONSUMABLE_POTENT_PREDATOR_BAIT"):
				StringCopy(&(Var10.f_10), "item_bait_predator", 32);
				break;
		}
		Var0.f_1 = iParam0;
		Var0.f_3 = iParam1;
		Var10 = { Var0 };
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		__LIB_4__::func_709(Var10, 0);
		bVar32 = false;
	}
	else if (__LIB_0__::func_356(iParam0) == joaat("EMOTE"))
	{
		Var0.f_3 = 0;
		Var0.f_1 = iParam0;
		Var0.f_2 = 0;
		Var0 = __LIB_7__::func_778(Global_1058888.f_49121.f_4.f_31);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		__LIB_4__::func_709(Var10, 0);
		iVar33 = 1;
	}
	else if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
	{
		if (__LIB_0__::func_357(iParam0) == -999503751)
		{
			if (__LIB_0__::func_2() != -1)
			{
				return iVar33;
			}
			if (!__LIB_7__::func_842(iParam0))
			{
				__LIB_0__::func_45("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			bVar35 = __LIB_9__::func_992(7, iParam0);
			bVar36 = __LIB_9__::func_992(1, iParam0);
			if (bVar36 && !bVar35)
			{
				__LIB_0__::func_45("SI_ITEM_USE_OUTFITS_TEMP_HORSE", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			if (!__LIB_7__::func_830(7))
			{
				__LIB_0__::func_45("SI_ITEM_USE_OUTFITS_NO_SADDLE", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			if (!bVar35)
			{
				if (__LIB_0__::func_394(Global_35, __LIB_0__::func_398(7), 0))
				{
					__LIB_0__::func_45("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
				}
				else
				{
					__LIB_0__::func_45("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
				}
				return iVar33;
			}
			iVar30 = __LIB_0__::func_449(iParam0);
			if (iVar30 == -1)
			{
				__LIB_1__::func_452(20, iParam0, 8, 0, 0);
			}
			else
			{
				__LIB_1__::func_452(20, iParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (__LIB_0__::func_357(iParam0))
			{
				case -525676072:
				case -68128151:
				case 81053684:
					__LIB_5__::func_386(iParam0, 0);
					return iVar33;
				case -2061583405:
					__LIB_9__::func_997(iParam0);
					return 1;
				case -1719060085:
					if (iParam0 == Global_1946804.f_1497.f_1[23 /*3*/])
					{
						__LIB_1__::func_775(Global_35, joaat("CLOTHING_ITEM_GLOVES_NONE"), 0, -358215195, 1, 1, 1, 0, 1, 0);
						PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayUnequipGlovesFidget", true, 15);
						__LIB_1__::func_704(iParam0, 0);
						return 1;
					}
					else
					{
						PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayEquipGlovesFidget", true, 15);
						__LIB_1__::func_704(iParam0, 1);
					}
					break;
			}
			__LIB_1__::func_775(Global_35, iParam0, 0, -358215195, 1, 1, 1, 0, 0, 0);
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("CUSTOM_SATCHEL"):
				__LIB_3__::func_739(1);
				break;
			case joaat("KIT_WARDROBE"):
				if (__LIB_0__::func_2() != -1)
				{
				}
				else if (!__LIB_7__::func_842(iParam0))
				{
					__LIB_0__::func_45("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar35 = __LIB_9__::func_992(7, iParam0);
					bVar36 = __LIB_9__::func_992(1, iParam0);
					if (bVar36 && !bVar35)
					{
						if (MAP::DOES_BLIP_EXIST(Global_36559))
						{
							MAP::REMOVE_BLIP(&Global_36559);
						}
						Global_36559 = MAP::_0x3E593DF9C2962EC6(joaat("BLIP_STYLE_PLAYER_HORSE"));
						MAP::_BLIP_SET_MODIFIER(Global_36559, 673950256);
						__LIB_0__::func_45(MISC::_CREATE_VAR_STRING(0, -1680440926, Global_36559), 10000, 0, 0, 0, 1);
					}
					else if (!__LIB_7__::func_830(7))
					{
						__LIB_0__::func_45("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar35)
					{
						if (__LIB_0__::func_394(Global_35, __LIB_0__::func_398(7), 0))
						{
							__LIB_0__::func_45("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (MAP::DOES_BLIP_EXIST(Global_36559))
							{
								MAP::REMOVE_BLIP(&Global_36559);
							}
							Global_36559 = MAP::_0x3E593DF9C2962EC6(joaat("BLIP_STYLE_PLAYER_HORSE"));
							MAP::_BLIP_SET_MODIFIER(Global_36559, 673950256);
							__LIB_0__::func_45(MISC::_CREATE_VAR_STRING(0, -482898802, Global_36559), 10000, 0, 0, 0, 1);
						}
					}
					else
					{
						iVar26 = joaat("PLAYER_WARDROBE");
						if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iVar26) > 0)
						{
						}
						else
						{
							Var0.f_1 = iParam0;
							Var0.f_2 = 51499045;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "player_wardrobe", 32);
							Var10.f_14 = 1024;
							Var10.f_15 = 1;
							__LIB_4__::func_709(Var10, 0);
						}
						Jump @2541; //curOff = 1636
						__LIB_9__::func_182();
						Jump @2541; //curOff = 1643
						if (!__LIB_0__::func_27(Global_1392040.f_1, 1) || __LIB_0__::func_27(Global_1392040.f_1, 512))
						{
							if (__LIB_0__::func_2() == -1)
							{
								if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("player_camp")) > 3)
								{
								}
								else
								{
									StringCopy(&(Var10.f_10), "player_camp", 32);
									Var10.f_14 = 6096;
									if (__LIB_1__::func_200(120))
									{
										iVar31 |= 8;
										Var0.f_6 = { -1407.407f, 1508.33f, 239f };
										Var0.f_6.f_3 = 260f;
									}
									else if (__LIB_2__::func_774(15))
									{
										iVar31 |= 16;
										Var0.f_6 = { 1775.903f, 1255.647f, 189.6069f };
										Var0.f_6.f_3 = 90f;
									}
									else if (!__LIB_7__::func_842(iParam0) || ((!__LIB_0__::func_48(Global_35, __LIB_0__::func_398(7), __LIB_1__::func_136(7), 1) || __LIB_5__::func_917() != 0) && !__LIB_0__::func_48(Global_35, Global_1900383.f_393, 5f, 1)))
									{
										iVar31 |= 128 | 32;
									}
									if (__LIB_0__::func_27(iVar31, 128) && Global_1357522.f_10[1])
									{
										Global_1357522.f_10[1] = 0;
									}
									else if (!__LIB_0__::func_27(iVar31, 128) && Global_1357522.f_10[0])
									{
										Global_1357522.f_10[0] = 0;
									}
									Var0 = iVar31;
									Var10 = { Var0 };
									Var10.f_15 = 1;
									__LIB_4__::func_709(Var10, 2);
								}
							}
							else if (__LIB_7__::func_842(joaat("KIT_CAMP")))
							{
								if (__LIB_9__::func_982(1))
								{
									__LIB_9__::func_985(2);
								}
								else if (__LIB_7__::func_820(1))
								{
									__LIB_0__::func_45("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
								}
								else
								{
									if (GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
									{
										__LIB_0__::func_45("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, 1);
									}
									else
									{
										__LIB_0__::func_45("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
									}
									__LIB_18__::func_910(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
								}
							}
							else if (!GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
							{
								__LIB_0__::func_45("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								__LIB_18__::func_910(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
							}
							else
							{
								__LIB_0__::func_45("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
							}
						}
						else
						{
							Global_1392040.f_1 |= 2;
							iVar33 = 1;
						}
						Jump @2541; //curOff = 2207
						if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_KIT_BINOCULARS"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_KIT_BINOCULARS"), true, 0, false, false);
						}
						return 1;
						Jump @2541; //curOff = 2248
						if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_KIT_CAMERA"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_KIT_CAMERA"), true, 0, false, false);
						}
						return 1;
						Jump @2541; //curOff = 2289
						iVar27 = __LIB_7__::func_821(__LIB_0__::func_12());
						iVar28 = __LIB_7__::func_779();
						if (__LIB_0__::func_69(iVar27))
						{
							if (iVar27 == iVar28 && !__LIB_7__::func_780())
							{
								bVar34 = false;
							}
						}
						if (bVar34)
						{
							__LIB_0__::func_45("PROPERTY_SHAVE_INV", 10000, 0, 0, 0, 1);
						}
						Jump @2541; //curOff = 2359
						func_1115(iParam0, 1, 0, 562618531, 0);
						Jump @2541; //curOff = 2377
						__LIB_1__::func_240(497, 1);
						Jump @2541; //curOff = 2388
						__LIB_9__::func_183(1);
						Jump @2541; //curOff = 2396
						func_1115(iParam0, 1, 0, 562618531, 0);
						func_1111(joaat("PROVISION_BEAUS_GIFT_2"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						Jump @2541; //curOff = 2437
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("DOCUMENT_PLAYER_JOURNAL"), 1928812891, 1, 0, -1082130432 /* Float: -1f */);
						bVar32 = false;
						return 1;
						Jump @2541; //curOff = 2472
						Var0.f_2 = joaat("DOCUMENT_NATIVE_AMERICAN_JOURNAL");
						Var10 = { Var0 };
						StringCopy(&(Var10.f_10), "native_american_journal", 32);
						Var10.f_14 = 512;
						Var10.f_15 = 1;
						__LIB_4__::func_709(Var10, 0);
						iVar33 = 0;
						bVar32 = false;
						Jump @2541; //curOff = 2532
						iVar33 = 0;
					}
				}
				if (bVar32)
				{
					HUD::_0xBFFF81E12A745A5F();
				}
				return iVar33;
				default:
					break;
		}
	}
}

void func_1113()
{
	__LIB_1__::func_281(&iLocal_3734, 1, 1);
	__LIB_1__::func_281(&iLocal_3736, 1, 1);
	__LIB_1__::func_281(&iLocal_3735, 1, 1);
}

int func_1115(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1115(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	__LIB_11__::func_837(iParam0, iParam1);
	return 1;
}

void func_1128(int* iParam0, var uParam1)
{
	switch (iParam0->f_20)
	{
		case 6:
			func_1553(iParam0);
			func_1554(&(iParam0->f_35));
			__LIB_6__::func_505(iParam0, uParam1);
			__LIB_6__::func_465(iParam0);
			break;
		default:
			func_1557(iParam0);
			func_1558(&(iParam0->f_35));
			func_1559(iParam0);
			func_1560(iParam0);
			break;
	}
}

void func_1151(int* iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (MISC::GET_GAME_TIMER() < iParam0->f_19)
	{
		return;
	}
	bVar0 = false;
	if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_GAME_MENU_UP")) || PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_GAME_MENU_STICK_UP")))
	{
		bVar0 = true;
		iVar1 = 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_GAME_MENU_DOWN")) || PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_GAME_MENU_STICK_DOWN")))
	{
		bVar0 = true;
		iVar1 = 1;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_GAME_MENU_LEFT")) || PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_GAME_MENU_STICK_LEFT")))
	{
		bVar0 = true;
		iVar1 = 2;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_GAME_MENU_RIGHT")) || PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_GAME_MENU_STICK_RIGHT")))
	{
		bVar0 = true;
		iVar1 = 3;
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(2, joaat("INPUT_GAME_MENU_ACCEPT")))
	{
		iParam0->f_860 = 1;
	}
	if (bVar0)
	{
		if (__LIB_17__::func_956(iVar1, &(iParam0->f_35.f_491), iParam0->f_35.f_498[Global_1357549.f_1894 /*8*/], &(iParam0->f_35.f_2.f_1[iParam0->f_35.f_491.f_2 /*237*/])))
		{
			if (iParam0->f_35.f_491.f_1 != -1)
			{
				if (iParam0->f_35.f_491.f_5)
				{
					__LIB_6__::func_317(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]);
				}
				else
				{
					__LIB_6__::func_318(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]);
				}
			}
			if (Global_1357549.f_1894 > 0)
			{
				__LIB_6__::func_3(iVar1);
			}
			iParam0->f_19 = MISC::GET_GAME_TIMER() + 250;
		}
	}
	if (__LIB_0__::func_567(iParam0->f_10, 1))
	{
		bVar2 = false;
		if (iParam0->f_35.f_491.f_5)
		{
			switch (iParam0->f_35.f_491.f_1)
			{
				case 1:
					func_1579(iParam0, 1, 4, 1, &bVar2);
					if (bVar2)
					{
						__LIB_6__::func_4(0);
					}
					break;
				case 0:
					func_1579(iParam0, 0, 3, 1, &bVar2);
					if (bVar2)
					{
						__LIB_6__::func_4(1);
					}
					break;
				case 2:
					func_1579(iParam0, 2, 5, 1, &bVar2);
					if (bVar2)
					{
						__LIB_6__::func_4(2);
					}
					break;
				case 3:
					func_1579(iParam0, 3, 10, 1, &bVar2);
					break;
				case 4:
					if (__LIB_0__::func_317() == 2 || __LIB_0__::func_317() == 3)
					{
						func_1579(iParam0, 4, 13, 3, &bVar2);
					}
					break;
				case 5:
					func_1579(iParam0, 5, 0, 3, &bVar2);
					break;
				case 7:
					func_1579(iParam0, 7, 14, 1, &bVar2);
					break;
				case 6:
					func_1579(iParam0, 6, 12, 3, &bVar2);
					break;
			}
		}
		else
		{
			switch (iParam0->f_35.f_491.f_1)
			{
				case 1:
					__LIB_6__::func_612(iParam0, 1, 4, &bVar2);
					break;
				case 0:
					__LIB_6__::func_612(iParam0, 0, 3, &bVar2);
					break;
				case 2:
					__LIB_6__::func_612(iParam0, 2, 5, &bVar2);
					break;
				default:
					break;
			}
		}
		if (bVar2)
		{
			if (iParam0->f_860)
			{
				__LIB_6__::func_5();
				iParam0->f_860 = 0;
			}
			iParam0->f_19 = MISC::GET_GAME_TIMER() + 250;
		}
		else if (iParam0->f_860)
		{
			__LIB_6__::func_6();
			iParam0->f_860 = 0;
		}
	}
}

void func_1238(var uParam0)
{
	if (UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("SHOP_BROWSING")))
	{
		UIAPPS::_CLOSE_APP_BY_HASH(joaat("SHOP_BROWSING"));
	}
	if (__LIB_0__::func_139(uParam0->f_1))
	{
		__LIB_1__::func_281(&(uParam0->f_1), 1, 1);
	}
	uParam0->f_772 = 0;
	uParam0->f_773 = 0;
}

int func_1325(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	if (LAW::_GET_BOUNTY_FOR_PLAYER(PLAYER::PLAYER_ID()) <= 0)
	{
		return 0;
	}
	if (Global_1310720.f_21 == -1)
	{
		return 0;
	}
	if (Global_1310720.f_23 >= 3)
	{
		return 0;
	}
	iVar0 = func_595(Global_1310720.f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	__LIB_0__::func_720(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		DATAFILE::_DATAFILE_GET_HASH(&iVar6, &Var1);
		if (__LIB_0__::func_561(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1519(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (Global_1935689.f_8)
	{
		return false;
	}
	if (((iParam0 != joaat("CUSTOM_SATCHEL") && iParam0 != joaat("KIT_CAMP")) && iParam0 != joaat("KIT_CAMP_SIMPLE")) && bParam1)
	{
		iVar0 = __LIB_9__::func_986(iParam0);
		if (__LIB_0__::func_192(iParam0, 1147021565))
		{
			iVar0 |= 64;
		}
		if (!func_1833(&uVar1, HUD::_0x0501D52D24EA8934(1), 1, iVar0))
		{
			return false;
		}
	}
	if (iParam0 == -1448210800 || iParam0 == joaat("UPGRADE_UPG_MORTAR_PESTLE"))
	{
		if (__LIB_7__::func_781())
		{
			return false;
		}
	}
	if (!__LIB_1__::func_707(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

bool func_1520(int iParam0)
{
	if (__LIB_0__::func_356(iParam0) == joaat("EMOTE"))
	{
		return false;
	}
	if (!INVENTORY::_0x3D10D7179D7034AF(__LIB_0__::func_162(0), iParam0, __LIB_4__::func_807(0)))
	{
		return false;
	}
	switch (iParam0)
	{
		case joaat("KIT_CAMP"):
		case joaat("KIT_CAMP_SIMPLE"):
			if (!Global_1392040.f_2)
			{
				func_1836(1, 1);
				TELEMETRY::_TELEMETRY_CAMP_CREATED(0);
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("KIT_HANDHELD_CATALOG"):
			__LIB_0__::func_45(MISC::_CREATE_VAR_STRING(0, 163043886 /* GXTEntry: "You are not allowed to use Handheld Catalogue at the moment." */, Global_36559), 10000, 0, 0, 0, 1);
			break;
	}
	return true;
}

void func_1521(int iParam0, struct<11> Param1, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, struct<2> Param17, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, int iParam27, bool bParam28, int iParam29)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_TS_RHD_FEUD_LETTER"):
			break;
		case joaat("DOCUMENT_LETTER_MAYOR_REWARD2"):
			if (__LIB_0__::func_113())
			{
				func_1837(joaat("JOURNAL_RC_MAYOR4_AR"), 0);
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_MAYOR4_AR")))
			{
				func_1837(joaat("JOURNAL_RC_MAYOR4B_JN"), 0);
			}
			break;
		case joaat("DOCUMENT_LETTER_MAYOR_REWARD2_JN"):
			func_1837(joaat("JOURNAL_RC_MAYOR4A_JN"), 0);
			break;
		case joaat("DOCUMENT_TS_STR_MAYOR_LETTER"):
			break;
		case joaat("DOCUMENT_RCM_FMA_LETTER"):
			__LIB_1__::func_532(Global_1347702[80 /*49*/].f_15, 1);
			if (__LIB_0__::func_113() == 1)
			{
				func_1837(joaat("JOURNAL_RC_FMA5_1_AR"), 0);
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_FMA5_1_AR")))
			{
				if (__LIB_0__::func_343(77))
				{
					func_1837(joaat("JOURNAL_RC_FMA5_2_JN"), 0);
				}
				else
				{
					func_1837(joaat("JOURNAL_RC_FMA5_1_JN"), 0);
				}
			}
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			if ((__LIB_0__::func_28() && !__LIB_1__::func_154(51)) && !__LIB_7__::func_782(1048576))
			{
				__LIB_7__::func_783(2);
				__LIB_1__::func_450(51, 0, 0, 0, 0, -1, 0);
				__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 2, 0);
				__LIB_0__::func_433(1048576);
			}
			break;
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			if ((__LIB_0__::func_28() && !__LIB_1__::func_154(51)) && !__LIB_7__::func_782(16384))
			{
				__LIB_7__::func_783(1);
				__LIB_1__::func_450(51, 0, 0, 0, 0, -1, 0);
				__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 5, 0);
				__LIB_0__::func_433(16384);
			}
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			if ((__LIB_0__::func_28() && !__LIB_1__::func_154(40)) && !__LIB_7__::func_784(32))
			{
				__LIB_7__::func_785(4);
				__LIB_1__::func_450(39, 0, 0, 0, 0, -1, 0);
				__LIB_9__::func_355(39, 0, 0, 0, 0, 0, 2, 0);
				__LIB_0__::func_434(32);
			}
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			if ((__LIB_0__::func_28() && !__LIB_1__::func_154(42)) && !__LIB_7__::func_786(16))
			{
				__LIB_7__::func_787(8);
				__LIB_1__::func_450(41, 0, 0, 0, 0, -1, 0);
				__LIB_9__::func_355(41, 0, 0, 0, 0, 0, 2, 0);
				__LIB_0__::func_435(16);
			}
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			if ((__LIB_0__::func_28() && !__LIB_1__::func_154(50)) && !__LIB_7__::func_788(32))
			{
				__LIB_7__::func_789(4);
				__LIB_1__::func_450(49, 0, 0, 0, 0, -1, 0);
				__LIB_9__::func_355(49, 0, 0, 0, 0, 0, 2, 0);
				__LIB_0__::func_436(32);
				if (!__LIB_1__::func_25(Global_1347702[50 /*49*/].f_15, 1))
				{
					if (__LIB_0__::func_113() == 1)
					{
						func_1837(joaat("JOURNAL_RC_ROCKCARV15_AR"), 0);
					}
					else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_ROCKCARV15_AR")))
					{
						func_1837(joaat("JOURNAL_RC_ROCKCARV15_JN"), 0);
					}
				}
			}
			break;
		case joaat("DOCUMENT_CATALOGUE_WMN_LETTER_01"):
			iParam27 = joaat("TP_CATALOGUE_LETTER_01");
			Param17.f_1 = iParam27;
			StringCopy(&(Param1.f_10), "respond_parcel", 32);
			iParam29 = 0;
			bParam28 = true;
			break;
	}
}

bool func_1525(int iParam0, bool bParam1, bool bParam2)
{
	if (__LIB_7__::func_822(iParam0, bParam1, 0, 0, -1082130432 /* Float: -1f */))
	{
		Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
		return true;
	}
	switch (__LIB_0__::func_372(iParam0, -949239683))
	{
		case 881567935:
			if (!bParam1)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1245009814, 1, 0, -1082130432 /* Float: -1f */);
				return true;
			}
			break;
		case 1174751405:
			if (!bParam1)
			{
				func_1849(iParam0);
				return true;
			}
			break;
		case 845883585:
			if (!bParam1)
			{
				if (!__LIB_7__::func_790())
				{
					if (__LIB_4__::func_385(&Global_35))
					{
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, joaat("APPLY_POMADE_WITH_HAT"), 1, 0, -1082130432 /* Float: -1f */);
					}
					else
					{
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, joaat("APPLY_POMADE_WITH_NO_HAT"), 1, 0, -1082130432 /* Float: -1f */);
					}
					return true;
				}
				else
				{
					__LIB_0__::func_45("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, 1);
				}
			}
			break;
		case -1239610997:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 280850861, 1, 0, -1082130432 /* Float: -1f */);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1087288635, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case 632545869:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, -268993254, 1, 0, -1082130432 /* Float: -1f */);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, -1401979141, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case -793205628:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1834614641, 1, 0, -1082130432 /* Float: -1f */);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 136592566, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case 1451036371:
			if (!bParam1)
			{
				func_1851(iParam0);
				return true;
			}
			break;
		case -273840653:
			if (!bParam1)
			{
				func_1852(iParam0, PED::IS_PED_IN_COMBAT(Global_35, 0));
				return true;
			}
			break;
		case 999632878:
			if (!bParam1)
			{
				func_1853(iParam0, PED::IS_PED_IN_COMBAT(Global_35, 0));
				return true;
			}
			break;
		case 1130235258:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_35, 0))
				{
					func_1854(iParam0);
				}
				else
				{
					func_1855(iParam0);
				}
				return true;
			}
			break;
		case -1915958659:
			if (!bParam1)
			{
				func_1856(iParam0);
				return true;
			}
			break;
		case 1859991422:
			if (!bParam1)
			{
				func_1857(iParam0);
				return true;
			}
			break;
		case 1891031775:
			if (!bParam1)
			{
				func_1858(iParam0);
				return true;
			}
			break;
		case -809056541:
			if (!bParam1)
			{
				func_1859(iParam0);
				return true;
			}
			break;
		case -1337515701:
			if (!bParam1)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, joaat("POCKET_WATCH_INSPECT_UNHOLSTER"), 1, 0, -1082130432 /* Float: -1f */);
				return true;
			}
			break;
		case -262371497:
			if (!bParam1)
			{
				func_1860(iParam0);
				return true;
			}
			break;
		case 1443104131:
			if (!bParam1)
			{
				func_1861(iParam0);
				return true;
			}
			break;
		case -1919515848:
			if (!bParam1)
			{
				func_1862(iParam0);
				return true;
			}
			break;
		case 89124942:
			if (!bParam1)
			{
				func_1863(iParam0);
				return true;
			}
			break;
		case 238865292:
			if (!bParam1)
			{
				func_1864(iParam0);
				return true;
			}
			break;
		case 1177617310:
			if (!bParam1)
			{
				func_1865(iParam0);
				return true;
			}
			break;
	}
	return false;
}

void func_1553(int* iParam0)
{
	if (Global_1357549.f_1894 > 0)
	{
		if (!__LIB_0__::func_139(iParam0->f_8))
		{
			iParam0->f_8 = __LIB_4__::func_450("SHOP_PREV_PAGE", joaat("INPUT_GAME_MENU_TAB_LEFT"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			__LIB_4__::func_12(iParam0->f_8, -2019190071, 0, 1);
		}
	}
	else
	{
		__LIB_1__::func_281(&(iParam0->f_8), 1, 1);
	}
	if (Global_1357549.f_1894 < 3)
	{
		if (!__LIB_0__::func_139(iParam0->f_7))
		{
			iParam0->f_7 = __LIB_4__::func_450("SHOP_NEXT_PAGE", joaat("INPUT_GAME_MENU_TAB_RIGHT"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			__LIB_4__::func_12(iParam0->f_7, -2019190071, 0, 1);
		}
	}
	else
	{
		__LIB_1__::func_281(&(iParam0->f_7), 1, 1);
	}
	if (__LIB_0__::func_486(iParam0->f_10, 1) > 0f)
	{
		if (__LIB_0__::func_572(iParam0->f_8, 1))
		{
			__LIB_1__::func_221(iParam0->f_8, 0, 0);
		}
		if (__LIB_0__::func_572(iParam0->f_7, 1))
		{
			__LIB_1__::func_221(iParam0->f_7, 0, 0);
		}
	}
	else
	{
		if (__LIB_0__::func_139(iParam0->f_8) && !__LIB_0__::func_572(iParam0->f_8, 0))
		{
			__LIB_1__::func_221(iParam0->f_8, 1, 0);
		}
		if (__LIB_0__::func_139(iParam0->f_7) && !__LIB_0__::func_572(iParam0->f_7, 0))
		{
			__LIB_1__::func_221(iParam0->f_7, 1, 0);
		}
	}
}

void func_1554(var uParam0)
{
	if (uParam0->f_773)
	{
		__LIB_6__::func_108(uParam0);
		if (uParam0->f_772)
		{
			__LIB_1__::func_484(uParam0->f_1, "JOURNAL_INFO_HIDE", 1);
		}
		else
		{
			__LIB_1__::func_484(uParam0->f_1, "JOURNAL_INFO_SHOW", 1);
		}
	}
	else
	{
		func_1558(uParam0);
	}
}

void func_1557(int* iParam0)
{
	__LIB_1__::func_281(&(iParam0->f_8), 1, 1);
	__LIB_1__::func_281(&(iParam0->f_7), 1, 1);
}

void func_1558(var uParam0)
{
	if (__LIB_0__::func_139(uParam0->f_1))
	{
		__LIB_1__::func_281(&(uParam0->f_1), 1, 1);
	}
}

void func_1559(int* iParam0)
{
	__LIB_1__::func_281(&(iParam0->f_10), 1, 1);
}

void func_1560(int* iParam0)
{
	__LIB_1__::func_281(&(iParam0->f_9), 1, 1);
}

void func_1579(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	if (__LIB_5__::func_862(iParam2, 0) < __LIB_6__::func_17(iParam2))
	{
		iVar0 = __LIB_6__::func_257(iParam0, iParam2);
		if (__LIB_5__::func_826() < iVar0)
		{
			iVar1 = (iVar0 - __LIB_5__::func_826());
			if (__LIB_0__::func_492(1) >= iVar1)
			{
				__LIB_1__::func_432(iVar1, 0, 0, 1, 1);
				__LIB_6__::func_592(iVar1);
			}
		}
		if (__LIB_5__::func_826() >= iVar0)
		{
			*bParam4 = 1;
			if (iParam1 == 3)
			{
				if (__LIB_5__::func_862(10, 0) == 1)
				{
					__LIB_5__::func_775(64);
				}
			}
			__LIB_6__::func_519(iParam1, 0, iVar0);
			iVar2 = (__LIB_5__::func_862(iParam2, 0) + iParam3);
			if (iParam2 == 10)
			{
				if (iVar2 >= 3)
				{
					iVar3 = __LIB_5__::func_939(__LIB_0__::func_317());
					if (!__LIB_6__::func_55(iVar3, 64))
					{
						__LIB_6__::func_59(iVar3, 64);
						__LIB_6__::func_59(iVar3, 262144);
					}
				}
			}
			__LIB_5__::func_823(iParam2, iVar2);
			__LIB_6__::func_261();
			__LIB_0__::func_326(134217728);
			if (iParam1 == 5)
			{
				__LIB_6__::func_18(&(Global_1357549.f_1492));
			}
			if (iParam1 == 2)
			{
				if (iVar2 >= 3 && !__LIB_0__::func_214(joaat("WEAPON_THROWN_THROWING_KNIVES")))
				{
					__LIB_0__::func_915(joaat("WEAPON_THROWN_THROWING_KNIVES"));
				}
				if (iVar2 >= 4 && !__LIB_0__::func_214(joaat("WEAPON_THROWN_MOLOTOV")))
				{
					__LIB_0__::func_915(joaat("WEAPON_THROWN_MOLOTOV"));
				}
			}
			__LIB_1__::func_281(&(iParam0->f_7), 1, 1);
			__LIB_1__::func_281(&(iParam0->f_8), 1, 1);
			__LIB_1__::func_281(&(iParam0->f_35.f_1), 1, 1);
			__LIB_1__::func_281(&(iParam0->f_10), 1, 1);
			__LIB_1__::func_281(&(iParam0->f_9), 1, 1);
			__LIB_5__::func_963(&(iParam0->f_35), 0);
			__LIB_1__::func_283(&(iParam0->f_810), 0);
			sVar4 = __LIB_6__::func_19(iParam2, iVar2);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar4) == 0)
			{
				__LIB_0__::func_45(sVar4, 14500, 0, 0, 0, 1);
			}
			__LIB_17__::func_958(iParam0, 14);
			iVar5 = __LIB_3__::func_38(__LIB_0__::func_317());
			TELEMETRY::_TELEMETRY_CAMP_SUPPLIES(iVar5, iParam1, iVar2, iVar0, 0);
		}
		else
		{
			__LIB_0__::func_45("CAMP_UPG_BROKE", 9000, 0, 0, 0, 1);
		}
	}
}

bool func_1833(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	func_2107(iParam1);
	if (!uParam0->f_1)
	{
		*uParam0 = PED::IS_PED_DEAD_OR_DYING(Global_35, true);
		uParam0->f_1 = 1;
	}
	if (Global_1935630.f_12 || *uParam0)
	{
		return false;
	}
	if (__LIB_0__::func_2() == 0)
	{
		if (Global_1935496.f_7 & 131072 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 1 == 0)
	{
		if (Global_1935496.f_7 & 1024 != 0)
		{
			return false;
		}
	}
	if (Global_1935630.f_22)
	{
		return false;
	}
	if (iParam3 & 2 == 0)
	{
		if (Global_1935496.f_7 & 32 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 4 == 0)
	{
		if (Global_1935496.f_7 & 4096 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 8 == 0)
	{
		if (Global_1935496.f_7 & 512 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 512 == 0)
	{
		if (!uParam0->f_3)
		{
			uParam0->f_2 = __LIB_9__::func_186(bParam2);
			uParam0->f_3 = 1;
		}
		if (!uParam0->f_2)
		{
			return false;
		}
	}
	if (iParam3 & 262144 == 0)
	{
		if (!uParam0->f_5)
		{
			uParam0->f_4 = __LIB_7__::func_807(bParam2);
			uParam0->f_5 = 1;
		}
		if (!uParam0->f_4)
		{
			return false;
		}
	}
	if (iParam3 & 64 == 0)
	{
		if (!uParam0->f_7)
		{
			uParam0->f_6 = __LIB_7__::func_808(bParam2, iParam3, 1);
			uParam0->f_7 = 1;
		}
		if (!uParam0->f_6)
		{
			return false;
		}
	}
	if (iParam3 & 128 == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = __LIB_0__::func_163(Global_35, 1868526510);
			uParam0->f_11 = 1;
		}
		if (!uParam0->f_9)
		{
			uParam0->f_8 = __LIB_0__::func_396(Global_35);
			uParam0->f_9 = 1;
		}
		if (!uParam0->f_13)
		{
			uParam0->f_12 = ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40);
			uParam0->f_13 = 1;
		}
		if ((uParam0->f_10 || uParam0->f_12) || uParam0->f_8)
		{
			if (bParam2)
			{
				__LIB_0__::func_45("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (iParam3 & 8388608 == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = __LIB_0__::func_163(Global_35, 1868526510);
			uParam0->f_11 = 1;
		}
		if (!uParam0->f_9)
		{
			uParam0->f_8 = __LIB_0__::func_396(Global_35);
			uParam0->f_9 = 1;
		}
		if (uParam0->f_10 || uParam0->f_8)
		{
			if (!uParam0->f_15)
			{
				uParam0->f_14 = PED::IS_PED_SWIMMING(Global_1935630.f_40);
				uParam0->f_15 = 1;
			}
			if (uParam0->f_14)
			{
				return false;
			}
		}
	}
	if (iParam3 & 16 == 0)
	{
		if (!uParam0->f_9)
		{
			uParam0->f_8 = __LIB_0__::func_396(Global_35);
			uParam0->f_9 = 1;
		}
		if (!uParam0->f_13)
		{
			uParam0->f_12 = ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40);
			uParam0->f_13 = 1;
		}
		if (uParam0->f_8)
		{
			if (uParam0->f_12)
			{
				if (!uParam0->f_17)
				{
					uParam0->f_16 = __LIB_7__::func_809(Global_1935630.f_40, 1);
					uParam0->f_17 = 1;
				}
				if (!uParam0->f_16)
				{
					if (bParam2)
					{
						__LIB_0__::func_45("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, 1);
					}
					return false;
				}
			}
		}
	}
	if (iParam3 & 256 == 0)
	{
		if (Global_1935496.f_7 & 8192 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 1024 == 0)
	{
		if (Global_1935496.f_7 & 65536 != 0)
		{
			if (bParam2)
			{
				__LIB_0__::func_45("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (iParam3 & 2048 == 0)
	{
		if (Global_1935496.f_7 & 32768 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 4096 == 0)
	{
		if (Global_1935496.f_7 & 16384 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 8192 == 0)
	{
		if (Global_1935496.f_7 & 16 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 16384 == 0)
	{
		if (Global_1935496.f_7 & 256 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 32768 == 0)
	{
		if (!uParam0->f_19)
		{
			uParam0->f_18 = __LIB_3__::func_63();
			uParam0->f_19 = 1;
		}
		if (uParam0->f_18)
		{
			if (bParam2)
			{
				__LIB_0__::func_45("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (iParam3 & 131072 == 0)
	{
		if (Global_1935496.f_7 & 524288 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 65536 == 0)
	{
		if (Global_1935496.f_7 & 262144 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 524288 == 0)
	{
		if (Global_1935496.f_7 & 2097152 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 1048576 == 0)
	{
		if (Global_1935496.f_7 & 8388608 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 2097152 == 0)
	{
		if (Global_1935496.f_7 & 33554432 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 4194304 == 0)
	{
		if (Global_1935496.f_7 & 67108864 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 16777216 == 0)
	{
		if (Global_1935496.f_7 & 134217728 == 0)
		{
			return false;
		}
	}
	if (Global_1935496.f_7 & 17825988 != 0)
	{
		return false;
	}
	return true;
}

bool func_1836(bool bParam0, bool bParam1)
{
	int iVar0;
	if (__LIB_0__::func_2() == 0)
	{
		return DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1935689.f_2439.f_38.f_19);
	}
	if (__LIB_3__::func_183())
	{
		if (bParam0)
		{
			__LIB_0__::func_45("CAMP_UNUSABLE_HIDEOUT", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (__LIB_2__::func_365(Global_35))
	{
		if (bParam0)
		{
			__LIB_0__::func_45("CAMP_UNUSABLE_PICKUP_ITEM", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::_0x7FC84E85D98F063D(Global_35))
	{
		if (bParam0)
		{
			__LIB_0__::func_45("CAMP_UNUSABLE_HORSE_INTERACTION", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (__LIB_3__::func_107())
	{
		if (bParam0)
		{
			if (__LIB_0__::func_317() != 8 && __LIB_0__::func_317() != 7)
			{
				__LIB_0__::func_45("CAMP_UNUSABLE_CARAVAN_CAMP", 10000, 0, 0, 0, 1);
			}
			else
			{
				__LIB_0__::func_45("CAMP_UNUSABLE_BEECHERS_HOPE", 10000, 0, 0, 0, 1);
			}
		}
		return false;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar0 = PED::GET_MOUNT(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (ENTITY::IS_ENTITY_IN_AIR(iVar0, 1) || PED::IS_PED_SWIMMING(iVar0))
				{
					return false;
				}
			}
		}
	}
	else if (ENTITY::IS_ENTITY_IN_AIR(Global_35, 1) || PED::IS_PED_SWIMMING(Global_35))
	{
		return false;
	}
	if (INTERIOR::IS_INTERIOR_SCENE())
	{
		if (bParam0)
		{
			__LIB_0__::func_45("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		if (bParam0)
		{
			__LIB_0__::func_45("CAMP_UNUSABLE_IN_COMBAT", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 1, 0))
	{
		if (bParam0)
		{
			__LIB_0__::func_45("CAMP_UNUSABLE_WANTED", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (LAW::_0x26934083D3F2579C(PLAYER::PLAYER_ID()))
	{
		if (bParam0)
		{
			__LIB_0__::func_45("CAMP_UNUSABLE_CRIME", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (bParam1)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
		{
			if (bParam0)
			{
				__LIB_0__::func_45("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (__LIB_0__::func_65(&Global_1393447, 16))
	{
		if (bParam0)
		{
			__LIB_0__::func_45("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (__LIB_2__::func_84())
	{
		if (bParam0)
		{
			__LIB_0__::func_45("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (__LIB_7__::func_771(joaat("SIMPLE_CRAFTING")) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("SIMPLE_CRAFTING")) > 0)
	{
		if (bParam0)
		{
			__LIB_0__::func_45("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		if (bParam0)
		{
			__LIB_0__::func_45("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if ((((PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) || (!PED::IS_PED_RAGDOLL(Global_35) && PED::IS_PED_ON_VEHICLE(Global_35, false))) || PED::IS_PED_IN_ANY_BOAT(Global_35)) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID())) || PED::IS_PED_JACKING(Global_35))
	{
		if (bParam0)
		{
			__LIB_0__::func_45("CAMP_UNUSABLE_ON_VEHICLE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (__LIB_0__::func_296(0, 1, 1) && !__LIB_6__::func_24(1))
	{
		if (bParam0)
		{
			if (__LIB_2__::func_774(15))
			{
				__LIB_0__::func_45("CAMP_UNUSABLE_HUNTING", 10000, 0, 0, 0, 1);
			}
			else
			{
				__LIB_0__::func_45("CAMP_UNUSABLE_MISSIONS", 10000, 0, 0, 0, 1);
			}
		}
		return false;
	}
	if (__LIB_1__::func_898() == 8)
	{
		return false;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CAMERA_ITEM")) > 0)
	{
		if (bParam0)
		{
			__LIB_0__::func_45("CAMP_UNUSABLE_CAMERA", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (__LIB_7__::func_772(8388608))
	{
		if (bParam0)
		{
			__LIB_0__::func_45("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (__LIB_0__::func_644(8388608))
	{
		if (bParam0)
		{
			__LIB_0__::func_45("CAMP_UNUSABLE_ALREADY_IN_A_CAMP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (__LIB_0__::func_730(__LIB_0__::func_12()))
	{
		if (bParam0)
		{
			__LIB_0__::func_45("CAMP_UNUSABLE_LOCKDOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (((__LIB_1__::func_923() || __LIB_1__::func_972(__LIB_0__::func_12()) == 9) || __LIB_7__::func_818(__LIB_0__::func_12())) && !__LIB_7__::func_773())
	{
		if (bParam0)
		{
			__LIB_0__::func_45("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (__LIB_3__::func_996(Global_35))
	{
		if (bParam0)
		{
			__LIB_0__::func_45("CAMP_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (__LIB_7__::func_819())
	{
		if (bParam0)
		{
			__LIB_0__::func_45("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1935496.f_131, true) > 2f)
	{
		Global_1935496.f_128 = { VEHICLE::_GET_NEAREST_TRAIN_TRACK_POSITION(Global_36) };
		Global_1935496.f_131 = { Global_36 };
	}
	if (__LIB_0__::func_266(Global_35, Global_1935496.f_128, 4f, 1, 1))
	{
		if (bParam0)
		{
			__LIB_0__::func_45("CAMP_UNUSABLE_TRAIN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (__LIB_11__::func_198(Global_36, 5f))
	{
		if (bParam0)
		{
			__LIB_0__::func_45("CAMP_UNUSABLE_NEAR_MISSION", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (BUILTIN::VDIST2(Global_36, Global_1347702[74 /*49*/].f_24) < 144f && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("RCM_EVELYN_MILLER4")) > 0)
	{
		return false;
	}
	return true;
}

void func_1837(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam1 == 1)
	{
		func_2128(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_2129(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_1849(int iParam0)
{
	int iVar0;
	iVar0 = joaat("APPLY_LOTION_LEFT_HAND");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("APPLY_LOTION_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("APPLY_LOTION_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("APPLY_LOTION_BOTH_HANDS");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_18__::func_61(iParam0, 1);
		func_1115(iParam0, 1, 0, -142743235, 0);
	}
}

void func_1851(int iParam0)
{
	int iVar0;
	iVar0 = 16939881;
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = 16939881;
			break;
		case 1:
			iVar0 = -1165614444;
			break;
		case 3:
			iVar0 = 968591133;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_18__::func_61(iParam0, 1);
		func_1115(iParam0, 1, 0, -142743235, 0);
	}
}

void func_1852(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = -45077177;
	switch (__LIB_3__::func_18())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -2137817968;
			}
			else
			{
				iVar0 = -45077177;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = -1947358597;
			}
			else
			{
				iVar0 = 36807409;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = -750686877;
			}
			else
			{
				iVar0 = 1293288723;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_18__::func_61(iParam0, 1);
		func_1115(iParam0, 1, 0, -142743235, 0);
	}
}

void func_1853(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 1700817728;
	switch (__LIB_3__::func_18())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -447623645;
			}
			else
			{
				iVar0 = 1700817728;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = 1880532390;
			}
			else
			{
				iVar0 = -480771797;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = 468890170;
			}
			else
			{
				iVar0 = 764367205;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_18__::func_61(iParam0, 1);
		func_1115(iParam0, 1, 0, -142743235, 0);
	}
}

void func_1854(int iParam0)
{
	int iVar0;
	iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_LEFT_HAND");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_LEFT_HAND");
			break;
		case 1:
			iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_RIGHT_HAND");
			break;
		case 3:
			iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_RIFLE");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_18__::func_61(iParam0, 1);
		func_1115(iParam0, 1, 0, -142743235, 0);
	}
}

void func_1855(int iParam0)
{
	int iVar0;
	iVar0 = -680642132;
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = -680642132;
			break;
		case 1:
			iVar0 = -267849149;
			break;
		case 3:
			iVar0 = 1759003815;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_18__::func_61(iParam0, 1);
		func_1115(iParam0, 1, 0, -142743235, 0);
	}
}

void func_1856(int iParam0)
{
	int iVar0;
	iVar0 = 2105609037;
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = 2105609037;
			break;
		case 3:
			iVar0 = -457187977;
			break;
		case 1:
			iVar0 = -1595716047;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_18__::func_61(iParam0, 1);
		func_1115(iParam0, 1, 0, -142743235, 0);
	}
}

void func_1857(int iParam0)
{
	int iVar0;
	iVar0 = 1964324114;
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = 1964324114;
			break;
		case 3:
			iVar0 = -654111932;
			break;
		case 1:
			iVar0 = 1826089606;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_18__::func_61(iParam0, 1);
		func_1115(iParam0, 1, 0, -142743235, 0);
	}
}

void func_1858(int iParam0)
{
	int iVar0;
	iVar0 = -1530144981;
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = -1530144981;
			break;
		case 3:
			iVar0 = -389189374;
			break;
		case 1:
			iVar0 = -312546963;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_18__::func_61(iParam0, 1);
		func_1115(iParam0, 1, 0, -142743235, 0);
	}
}

void func_1859(int iParam0)
{
	int iVar0;
	iVar0 = -1074475556;
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = -1074475556;
			break;
		case 3:
			iVar0 = 392506445;
			break;
		case 1:
			iVar0 = -1846586910;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_18__::func_61(iParam0, 1);
		func_1115(iParam0, 1, 0, -142743235, 0);
	}
}

void func_1860(int iParam0)
{
	int iVar0;
	iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_LEFT_HAND");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_18__::func_61(iParam0, 1);
		func_1115(iParam0, 1, 0, -142743235, 0);
	}
}

void func_1861(int iParam0)
{
	int iVar0;
	iVar0 = joaat("QUICK_SMOKE_CIGARETTE_LEFT_HAND");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("QUICK_SMOKE_CIGARETTE_LEFT_HAND");
			break;
		case 1:
			iVar0 = joaat("QUICK_SMOKE_CIGARETTE_RIGHT_HAND");
			break;
		case 3:
			iVar0 = joaat("QUICK_SMOKE_CIGARETTE_RIFLE");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_18__::func_61(iParam0, 1);
		func_1115(iParam0, 1, 0, -142743235, 0);
	}
}

void func_1862(int iParam0)
{
	int iVar0;
	iVar0 = joaat("QUICK_SMOKE_CIGAR_LEFT_HAND");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("QUICK_SMOKE_CIGAR_LEFT_HAND");
			break;
		case 1:
			iVar0 = joaat("QUICK_SMOKE_CIGAR_RIGHT_HAND");
			break;
		case 3:
			iVar0 = joaat("QUICK_SMOKE_CIGAR_RIFLE");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_18__::func_61(iParam0, 1);
		func_1115(iParam0, 1, 0, -142743235, 0);
	}
}

void func_1863(int iParam0)
{
	int iVar0;
	iVar0 = joaat("USE_HANDFULL_SATCHEL_LEFT_HAND_QUICK");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("USE_HANDFULL_SATCHEL_LEFT_HAND_QUICK");
			break;
		case 1:
			iVar0 = joaat("USE_HANDFULL_SATCHEL_UNARMED_QUICK");
			break;
		case 3:
			iVar0 = joaat("USE_HANDFULL_SATCHEL_RIFLE_QUICK");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (__LIB_0__::func_192(iParam0, 1573112293))
		{
			func_2133(__LIB_6__::func_846(&iParam0), 1, 1);
		}
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_18__::func_61(iParam0, 1);
		func_1115(iParam0, 1, 0, -142743235, 0);
	}
}

void func_1864(int iParam0)
{
	int iVar0;
	iVar0 = joaat("USE_TONIC_SATCHEL_LEFT_HAND_QUICK");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("USE_TONIC_SATCHEL_LEFT_HAND_QUICK");
			break;
		case 1:
			iVar0 = joaat("USE_TONIC_SATCHEL_UNARMED_QUICK");
			break;
		case 3:
			iVar0 = joaat("USE_TONIC_SATCHEL_RIFLE_QUICK");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_18__::func_61(iParam0, 1);
		func_1115(iParam0, 1, 0, -142743235, 0);
	}
}

void func_1865(int iParam0)
{
	int iVar0;
	iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_LEFT_HAND_QUICK");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_LEFT_HAND_QUICK");
			break;
		case 1:
			iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_UNARMED_QUICK");
			break;
		case 3:
			iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_RIFLE_QUICK");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_18__::func_61(iParam0, 1);
		func_1115(iParam0, 1, 0, -142743235, 0);
	}
}

void func_2107(int iParam0)
{
	if (__LIB_1__::func_510(32))
	{
		return;
	}
	__LIB_1__::func_511(32);
	if (__LIB_2__::func_365(Global_35))
	{
		Global_1935496.f_7 |= 1;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 1);
	}
	if (__LIB_3__::func_996(Global_35))
	{
		Global_1935496.f_7 |= 2;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 2);
	}
	if (__LIB_0__::func_491(Global_35, 713668775))
	{
		Global_1935496.f_7 |= 4;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 4);
	}
	if (__LIB_1__::func_376(Global_35))
	{
		Global_1935496.f_7 |= 8;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 8);
	}
	if (func_1836(0, 1))
	{
		Global_1935496.f_7 |= 16;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 16);
	}
	if (!__LIB_7__::func_814(0))
	{
		Global_1935496.f_7 |= 32;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 32);
	}
	if (!__LIB_7__::func_815(0))
	{
		Global_1935496.f_7 |= 512;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 512);
	}
	if (!__LIB_7__::func_816(0))
	{
		Global_1935496.f_7 |= 8192;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 8192);
	}
	if (PED::IS_PED_IN_COVER(Global_35, false, true))
	{
		Global_1935496.f_7 |= 16384;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 16384);
	}
	if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
	{
		Global_1935496.f_7 |= 32768;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 32768);
	}
	if (__LIB_0__::func_2() == 0 && PED::_0xB655DB7582AEC805(Global_35))
	{
		Global_1935496.f_7 |= 131072;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 131072);
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
	{
		Global_1935496.f_7 |= 256;
	}
	else if (PED::_0x7FC84E85D98F063D(Global_35))
	{
		Global_1935496.f_7 |= 256;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 256);
	}
	if (Global_1935630.f_24 || TASK::_IS_PED_DUELLING(Global_35))
	{
		Global_1935496.f_7 |= 1024;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 1024);
	}
	if (TASK::IS_PED_RUNNING(Global_35))
	{
		Global_1935496.f_7 |= 4096;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 4096);
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) || __LIB_0__::func_491(Global_35, 1369124074))
	{
		Global_1935496.f_7 |= 128;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 128);
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		Global_1935496.f_7 |= 33554432;
		if (TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35) == joaat("WORLD_PLAYER_DYNAMIC_KNEEL"))
		{
			Global_1935496.f_7 |= 67108864;
		}
		else
		{
			Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 67108864);
		}
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 67108864);
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 33554432);
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		Global_1935496.f_7 |= 65536;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 65536);
	}
	if (CAM::_0x1204EB53A5FBC63D())
	{
		Global_1935496.f_7 |= 64;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 64);
	}
	if (TASK::IS_PED_GETTING_UP(Global_35))
	{
		Global_1935496.f_7 |= 1048576;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 1048576);
	}
	if (__LIB_7__::func_826(iParam0, 0))
	{
		Global_1935496.f_7 |= 524288;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 524288);
	}
	if (__LIB_7__::func_827(iParam0, 0))
	{
		Global_1935496.f_7 |= 262144;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 262144);
	}
	if (__LIB_1__::func_869(Global_35))
	{
		Global_1935496.f_7 |= 4194304;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 4194304);
	}
	if (__LIB_7__::func_593())
	{
		Global_1935496.f_7 |= 16777216;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 16777216);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (__LIB_0__::func_125(iParam0))
		{
			switch (ENTITY::GET_ENTITY_MODEL(iParam0))
			{
				case joaat("A_C_HORSEMULE_01"):
				case joaat("A_C_HORSEMULEPAINTED_01"):
				case joaat("A_C_DONKEY_01"):
					Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 134217728);
					break;
				default:
					Global_1935496.f_7 |= 134217728;
					break;
			}
		}
		if (PED::_IS_METAPED_USING_COMPONENT(iParam0, 149557334))
		{
			Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 134217728);
		}
		if (PED::IS_PED_ON_VEHICLE(iParam0, false))
		{
			Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 134217728);
		}
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 134217728);
	}
	if (((((__LIB_0__::func_2() == -1 && __LIB_4__::func_635(32768)) || __LIB_7__::func_781()) || __LIB_9__::func_994()) || (__LIB_2__::func_776() && !__LIB_7__::func_770())) || ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_35) > 0.2f)
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 2097152);
	}
	else
	{
		Global_1935496.f_7 |= 2097152;
	}
	if (Global_1900073.f_17 && __LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("WEAPON_FISHINGROD"))
	{
		Global_1935496.f_7 |= 8388608;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 8388608);
	}
}

void func_2128(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_2250(1);
	}
}

void func_2129(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	if (iParam0 == 0 && Global_43891 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			func_2128(Global_40.f_11922[iVar0], 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_2250(1);
	}
}

void func_2133(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_3__::func_960(iParam0);
	iVar1 = __LIB_6__::func_846(&iVar0);
	if (iVar1 != iParam0)
	{
		__LIB_4__::func_109(iVar1, 4);
	}
	if (!__LIB_3__::func_959(iParam0))
	{
		return;
	}
	if (__LIB_7__::func_829(iParam0))
	{
		return;
	}
	__LIB_4__::func_109(iParam0, 4);
	__LIB_7__::func_832(iParam0, bParam1);
	if (!__LIB_6__::func_115(iParam0))
	{
		func_2269(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!__LIB_0__::func_296(0, 0, 1))
		{
			__LIB_0__::func_703(1, 6);
		}
	}
}

void func_2250(bool bParam0)
{
	if (bParam0)
	{
		__LIB_0__::func_7(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		__LIB_0__::func_516(&(Global_40.f_12019.f_42), 1);
	}
}

void func_2269(int iParam0, bool bParam1, bool bParam2)
{
	if (!__LIB_3__::func_959(iParam0))
	{
		return;
	}
	if (__LIB_6__::func_115(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = __LIB_3__::func_961(iParam0);
	}
	if (!bParam1)
	{
		if (__LIB_0__::func_2() != -1)
		{
		}
		else
		{
			__LIB_3__::func_971(iParam0);
		}
	}
	__LIB_4__::func_109(iParam0, 1);
	if (__LIB_0__::func_2() == -1)
	{
		func_2352(iParam0, __LIB_0__::func_113());
	}
	__LIB_7__::func_832(iParam0, 1);
	if (bParam2)
	{
		if (!__LIB_0__::func_296(0, 0, 1))
		{
			__LIB_0__::func_703(1, 6);
		}
	}
}

void func_2352(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_ACUNAS_STAR_ORCHID_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_ACUNAS_STAR_ORCHID_JN"), 0);
			}
			break;
		case 2:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_ALASKAN_GINSENG_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_ALASKAN_GINSENG_JN"), 0);
			}
			break;
		case 3:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_AMERICAN_GINSENG_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_AMERICAN_GINSENG_JN"), 0);
			}
			break;
		case 4:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_BAY_BOLETE_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_BAY_BOLETE_JN"), 0);
			}
			break;
		case 5:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_BLACKBERRY_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_BLACKBERRY_JN"), 0);
			}
			break;
		case 6:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_BLACK_CURRANT_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_BLACK_CURRANT_JN"), 0);
			}
			break;
		case 11:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_BULRUSH_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_BULRUSH_JN"), 0);
			}
			break;
		case 7:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_BURDOCK_ROOT_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_BURDOCK_ROOT_JN"), 0);
			}
			break;
		case 39:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_CARROT_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_CARROT_JN"), 0);
			}
			break;
		case 8:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_CHANTERELLE_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_CHANTERELLE_JN"), 0);
			}
			break;
		case 9:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_CIGAR_ORCHID_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_CIGAR_ORCHID_JN"), 0);
			}
			break;
		case 10:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_CLAMSHELL_ORCHID_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_CLAMSHELL_ORCHID_JN"), 0);
			}
			break;
		case 12:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_CREEPING_THYME_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_CREEPING_THYME_JN"), 0);
			}
			break;
		case 13:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_DESERT_SAGE_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_DESERT_SAGE_JN"), 0);
			}
			break;
		case 14:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_DRAGONS_MOUTH_ORCHID_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_DRAGONS_MOUTH_ORCHID_JN"), 0);
			}
			break;
		case 15:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_ENGLISH_MACE_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_ENGLISH_MACE_JN"), 0);
			}
			break;
		case 40:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_FEVERFEW_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_FEVERFEW_JN"), 0);
			}
			break;
		case 17:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_GHOST_ORCHID_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_GHOST_ORCHID_JN"), 0);
			}
			break;
		case 18:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_GOLDEN_CURRANT_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_GOLDEN_CURRANT_JN"), 0);
			}
			break;
		case 16:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_HUCKLEBERRY_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_HUCKLEBERRY_JN"), 0);
			}
			break;
		case 19:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_HUMMINGBIRD_SAGE_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_HUMMINGBIRD_SAGE_JN"), 0);
			}
			break;
		case 20:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_INDIAN_TOBACCO_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_INDIAN_TOBACCO_JN"), 0);
			}
			break;
		case 21:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_LADY_OF_THE_NIGHT_ORCHID_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_LADY_OF_THE_NIGHT_ORCHID_JN"), 0);
			}
			break;
		case 22:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_LADY_SLIPPER_ORCHID_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_LADY_SLIPPER_ORCHID_JN"), 0);
			}
			break;
		case 23:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_MILKWEED_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_MILKWEED_JN"), 0);
			}
			break;
		case 41:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_MINT_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_MINT_JN"), 0);
			}
			break;
		case 24:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_MOCCASIN_ORCHID_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_MOCCASIN_ORCHID_JN"), 0);
			}
			break;
		case 25:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_NIGHT_SCENTED_ORCHID_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_NIGHT_SCENTED_ORCHID_JN"), 0);
			}
			break;
		case 26:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_OLEANDER_SAGE_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_OLEANDER_SAGE_JN"), 0);
			}
			break;
		case 27:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_OREGANO_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_OREGANO_JN"), 0);
			}
			break;
		case 28:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_PARASOL_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_PARASOL_JN"), 0);
			}
			break;
		case 29:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_PRAIRIE_POPPY_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_PRAIRIE_POPPY_JN"), 0);
			}
			break;
		case 30:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_QUEENS_ORCHIDS_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_QUEENS_ORCHIDS_JN"), 0);
			}
			break;
		case 31:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_RAMSHEAD_ORCHID_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_RAMSHEAD_ORCHID_JN"), 0);
			}
			break;
		case 33:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_RASPBERRY_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_RASPBERRY_JN"), 0);
			}
			break;
		case 32:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_RAT_TAIL_ORCHID_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_RAT_TAIL_ORCHID_JN"), 0);
			}
			break;
		case 34:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_RED_SAGE_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_RED_SAGE_JN"), 0);
			}
			break;
		case 35:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_SPARROWS_EGG_ORCHID_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_SPARROWS_EGG_ORCHID_JN"), 0);
			}
			break;
		case 36:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_SPIDER_ORCHID_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_SPIDER_ORCHID_JN"), 0);
			}
			break;
		case 37:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_VANILLA_FLOWER_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_VANILLA_FLOWER_JN"), 0);
			}
			break;
		case 38:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_VIOLET_SNOWDROP_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_VIOLET_SNOWDROP_JN"), 0);
			}
			break;
		case 42:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_WINTERBERRY_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_WINTERBERRY_JN"), 0);
			}
			break;
		case 43:
			if (bParam1 == 1)
			{
				func_1837(joaat("JOURNAL_HERB_YARROW_AR"), 0);
			}
			else
			{
				func_1837(joaat("JOURNAL_HERB_YARROW_JN"), 0);
			}
			break;
		default:
			break;
	}
}

