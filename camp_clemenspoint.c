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
	int iLocal_3513 = 0;
	var uLocal_3514 = 0;
	var uLocal_3515 = 0;
	int iLocal_3516 = 0;
	int iLocal_3517 = 0;
	int iLocal_3518 = 0;
	var uLocal_3519 = 0;
	var uLocal_3520 = 0;
	int iLocal_3521[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3531 = 0;
	int iLocal_3532 = 0;
	int iLocal_3533 = 0;
	var uLocal_3534 = 0;
	var uLocal_3535 = 0;
	var uLocal_3536 = 0;
	struct<4> Local_3537[13];
	var uLocal_3590 = 0;
	var uLocal_3591 = 0;
	var uLocal_3592 = 0;
	var uLocal_3593 = 0;
	var uLocal_3594 = 0;
	int iLocal_3595 = 0;
	int iLocal_3596 = 0;
	int iLocal_3597 = 0;
	vector3 vLocal_3598 = { 0f, 0f, 0f };
	var uLocal_3601[24] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<8> Local_3626[10];
	int iLocal_3707 = 0;
	int iLocal_3708 = 0;
	var uLocal_3709 = 0;
	var uLocal_3710 = 0;
	var uLocal_3711 = 0;
	int iLocal_3712 = 0;
	int iLocal_3713 = 0;
	vector3 vLocal_3714 = { 0f, 0f, 0f };
	vector3 vLocal_3717 = { 0f, 0f, 0f };
	vector3 vLocal_3720 = { 0f, 0f, 0f };
	vector3 vLocal_3723 = { 0f, 0f, 0f };
	vector3 vLocal_3726 = { 0f, 0f, 0f };
	int iLocal_3729 = 0;
	int iLocal_3730 = 0;
	var uLocal_3731 = 0;
	vector3 vLocal_3732 = { 0f, 0f, 0f };
	int iLocal_3735 = 0;
	var uLocal_3736 = 0;
	vector3 vLocal_3737 = { 0f, 0f, 0f };
	int iLocal_3740 = 0;
	var uLocal_3741 = 0;
	vector3 vLocal_3742 = { 0f, 0f, 0f };
	var uLocal_3745 = 0;
	var uLocal_3746 = 0;
	vector3 vLocal_3747 = { 0f, 0f, 0f };
	int iLocal_3750 = 0;
	var uLocal_3751 = 0;
	var uLocal_3752 = 0;
	var uLocal_3753 = 0;
	vector3 vLocal_3754 = { 0f, 0f, 0f };
	int iLocal_3757 = 0;
	var uLocal_3758 = 0;
	var uLocal_3759 = 0;
	var uLocal_3760 = 0;
	vector3 vLocal_3761 = { 0f, 0f, 0f };
	struct<8> Local_3764[3];
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
	iLocal_3531 = -1;
	iLocal_3532 = joaat("UI_DOC_BILLNOTE");
	iLocal_3533 = joaat("WORLD_PLAYER_INSPECT_LETTER_80CM_PAPER_W18_9_H28_2_FOLDVERTICALX2_P_CS_LETTERFOLDED02X");
	vLocal_3598 = { 672.4047f, -1259.892f, 42.9838f };
	iLocal_3707 = joaat("UI_LETTER_LENNY");
	iLocal_3708 = joaat("WORLD_PLAYER_INSPECT_LETTER_80CM_PAPER_W15_1_H24_FOLDVERTICAL_P_CS_LETTER03X");
	vLocal_3714 = { 682.1702f, -1249.528f, 43.09263f };
	vLocal_3717 = { 672.86f, -1237.54f, 44.13f };
	vLocal_3720 = { 0f, 0f, 28f };
	vLocal_3723 = { 690f, -1252.11f, 44.41f };
	vLocal_3726 = { 0f, 0f, -108f };
	iLocal_3730 = joaat("UI_PHOTO_ARTDAD");
	vLocal_3732 = { 651.426f, -1245.099f, 44.0979f };
	iLocal_3735 = joaat("UI_PHOTO_ARTDOG");
	vLocal_3737 = { 651.3523f, -1245.044f, 43.9347f };
	iLocal_3740 = joaat("UI_PHOTO_ARTGANG");
	vLocal_3742 = { 651.7246f, -1245.335f, 43.896f };
	vLocal_3747 = { 674.605f, -1236.566f, 43.14585f };
	iLocal_3750 = joaat("WORLD_PLAYER_INSPECT_LETTER_NOTE_80CM_PAPER_W10_16_H15_24_P_CS_OLDPAPER1889");
	vLocal_3754 = { 668.2988f, -1235.026f, 43.17291f };
	iLocal_3757 = joaat("WORLD_PLAYER_INSPECT_LETTER_45CM_PAPER_W15_1_H24_FOLDVERTICAL_S_MOLLYLOVELETTER");
	vLocal_3761 = { 654.8076f, -1251.45f, 42.84742f };
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
		__LIB_6__::func_655();
		__LIB_6__::func_493();
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
					__LIB_6__::func_583();
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
					__LIB_17__::func_978(&(Local_18.f_51), &(Local_18.f_2024));
				}
				if (__LIB_1__::func_533(32768))
				{
					__LIB_6__::func_263(&(Global_1357549.f_3));
					func_45(&Local_18);
					__LIB_0__::func_11();
					if (__LIB_6__::func_173(Local_18.f_45, iVar1))
					{
						__LIB_6__::func_457(&(Global_1357549.f_1691));
					}
					__LIB_6__::func_487(&Local_18);
					__LIB_5__::func_547(32768);
				}
				if (__LIB_5__::func_807() && __LIB_6__::func_173(Local_18.f_45, iVar1))
				{
					__LIB_6__::func_632(Local_18.f_45, &(Global_1357549.f_1691));
				}
				else if (Global_1357549.f_1691 != 0)
				{
					__LIB_6__::func_457(&(Global_1357549.f_1691));
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
	__LIB_5__::func_808(0, 13992, 0);
	__LIB_5__::func_808(1, 14349, 1);
	__LIB_5__::func_808(2, 14365, 1);
	__LIB_5__::func_808(3, 14428, 1);
	__LIB_5__::func_808(4, 14459, 2);
	__LIB_5__::func_808(5, 14573, 16);
	__LIB_5__::func_808(6, 14708, 1);
	__LIB_5__::func_808(7, 15322, 4);
	__LIB_5__::func_808(8, 15416, 1);
	__LIB_5__::func_808(9, 15546, 128);
	__LIB_5__::func_808(10, 15555, 792);
	__LIB_5__::func_808(11, 15603, 1024);
}

void func_6(var uParam0)
{
	struct<2> Var0;
	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(uParam0, &Var0, 65);
	__LIB_5__::func_813(uParam0, 0, 16283, 16389, 16828);
	__LIB_5__::func_813(uParam0, 1, 17116, 17162, 17628);
	__LIB_5__::func_813(uParam0, 2, 17658, 17696, 18124);
	__LIB_5__::func_813(uParam0, 3, 18154, 18180, 18259);
	__LIB_5__::func_813(uParam0, 4, 18267, 18421, 18259);
	__LIB_6__::func_268(uParam0, 0);
}

void func_7(var uParam0)
{
	struct<2> Var0;
	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(uParam0, &Var0, 65);
	__LIB_5__::func_813(uParam0, 0, 18493, 18571, 18259);
	__LIB_5__::func_813(uParam0, 1, 19727, 19854, 18259);
	__LIB_5__::func_813(uParam0, 2, 18259, 20696, 18259);
	__LIB_5__::func_813(uParam0, 3, 20854, 21400, 18259);
	__LIB_5__::func_813(uParam0, 4, 22028, 22258, 18259);
	__LIB_5__::func_813(uParam0, 5, 22681, 22714, 18259);
	__LIB_5__::func_813(uParam0, 6, 23431, 23516, 18259);
	__LIB_6__::func_268(uParam0, 0);
}

void func_8(var uParam0)
{
	struct<2> Var0;
	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(uParam0, &Var0, 65);
	__LIB_5__::func_813(uParam0, 0, 23571, 23653, 18259);
	__LIB_5__::func_813(uParam0, 1, 23974, 24010, 18259);
	__LIB_5__::func_813(uParam0, 2, 24479, 24610, 25019);
	__LIB_5__::func_813(uParam0, 3, 25038, 25105, 25509);
	__LIB_6__::func_268(uParam0, 0);
}

void func_9()
{
	struct<2> Var0;
	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(&(Local_18.f_1934), &Var0, 65);
	__LIB_5__::func_813(&(Local_18.f_1934), 0, 25578, 25615, 18259);
	__LIB_5__::func_813(&(Local_18.f_1934), 1, 25798, 25821, 18259);
	__LIB_5__::func_813(&(Local_18.f_1934), 2, 26026, 26073, 18259);
	__LIB_5__::func_813(&(Local_18.f_1934), 3, 26347, 26398, 18259);
	__LIB_5__::func_813(&(Local_18.f_1934), 4, 26417, 26473, 18259);
	__LIB_6__::func_268(&(Local_18.f_1934), 0);
}

void func_10(var uParam0)
{
	uParam0->f_45 = 2;
	uParam0->f_47 = 2;
	uParam0->f_1714 = { __LIB_6__::func_188(uParam0->f_45) };
	uParam0->f_1717 = 235f;
	uParam0->f_49 = 1;
	func_126();
	__LIB_17__::func_965();
	func_128();
	func_129();
	__LIB_6__::func_189(&(Local_3537[0 /*4*/]), joaat("PERSCHAR_CAMP_ROOSTER"), 3, 0);
	__LIB_6__::func_189(&(Local_3537[1 /*4*/]), joaat("PERSCHAR_CAMP_CHICKEN_1"), 0, 0);
	__LIB_6__::func_189(&(Local_3537[2 /*4*/]), joaat("PERSCHAR_CAMP_CHICKEN_2"), 0, 0);
	__LIB_6__::func_189(&(Local_3537[3 /*4*/]), joaat("PERSCHAR_CAMP_CHICKEN_3"), 0, 0);
	__LIB_6__::func_189(&(Local_3537[4 /*4*/]), joaat("PERSCHAR_CAMP_CHICKEN_4"), 0, 0);
	__LIB_6__::func_189(&(Local_3537[5 /*4*/]), joaat("PERSCHAR_CAMP_CHICKEN_5"), 0, 0);
	if (__LIB_6__::func_547(6))
	{
		STREAMING::REQUEST_MODEL(joaat("P_CS_BOOK_SHREW_A"), false);
	}
	if (__LIB_6__::func_547(8))
	{
		iLocal_3729 = __LIB_6__::func_548();
		STREAMING::REQUEST_MODEL(iLocal_3729, false);
	}
	Global_1357549.f_1713[0] = ANIMSCENE::_CREATE_ANIM_SCENE("script@camp_upgrade@clemens_cove", 0, 0, false, true);
	Global_1357549.f_1713[1] = ANIMSCENE::_CREATE_ANIM_SCENE("script@camp_upgrade@clemens_cove", 0, 0, false, true);
	Global_1357549.f_1713[2] = ANIMSCENE::_CREATE_ANIM_SCENE("script@camp_upgrade@clemens_cove", 0, 0, false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(Global_1357549.f_1713[0]);
	ANIMSCENE::LOAD_ANIM_SCENE(Global_1357549.f_1713[1]);
	ANIMSCENE::LOAD_ANIM_SCENE(Global_1357549.f_1713[2]);
	ANIMSCENE::_0xDF7B5144E25CD3FE(Global_1357549.f_1713[2], "PBL_LEVEL_4");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Global_1357549.f_1713[1], "PBL_LEVEL_3");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Global_1357549.f_1713[0], "PBL_LEVEL_2");
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
						func_186(Global_1357549.f_1659[iVar2], 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
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
			func_241(19, -1, Global_1357549.f_3[4], iParam1, iVar1, 0, 12, -1082130432 /* Float: -1f */, 0, 0);
		}
		if (__LIB_6__::func_125(iVar0))
		{
			__LIB_6__::func_350(iVar0, 19, 0, 1);
		}
	}
}

void func_42(int iParam0)
{
	__LIB_17__::func_943(&Local_3764, 9);
	__LIB_17__::func_946(0, 0);
	__LIB_6__::func_351(&uLocal_3591, &uLocal_3746, &uLocal_3745, vLocal_3747, iLocal_3532, joaat("DOCUMENT_LETTER_BILL_DISCHARGE"), iLocal_3533);
	__LIB_6__::func_351(&uLocal_3709, &uLocal_3711, &uLocal_3710, vLocal_3714, iLocal_3707, -1915584842 /* GXTEntry: "Letter from Lenny\'s Father" */, iLocal_3708);
	__LIB_6__::func_352(&uLocal_3731, &(Local_3764[0 /*8*/].f_1), vLocal_3732, iLocal_3730, joaat("DOCUMENT_PHOTO_ARTHUR_FATHER"));
	__LIB_6__::func_352(&uLocal_3741, &(Local_3764[2 /*8*/].f_1), vLocal_3742, iLocal_3740, joaat("DOCUMENT_PHOTO_DUTCH_HOSEA"));
	__LIB_6__::func_352(&uLocal_3736, &(Local_3764[1 /*8*/].f_1), vLocal_3737, iLocal_3735, joaat("DOCUMENT_PHOTO_ARTHUR_DOG"));
	__LIB_6__::func_567(&uLocal_3751, &uLocal_3753, &uLocal_3752, vLocal_3754, joaat("DOCUMENT_SEAN_DAD_NEWSPAPER"), iLocal_3750);
	__LIB_6__::func_567(&uLocal_3758, &uLocal_3759, &uLocal_3760, vLocal_3761, -1309546012 /* GXTEntry: "Molly\'s Poem" */, iLocal_3757);
	__LIB_6__::func_648(&uLocal_3534, &uLocal_3535, &uLocal_3536, &uLocal_3514);
	__LIB_6__::func_585(&uLocal_3535, &uLocal_3514);
	__LIB_17__::func_942(&uLocal_3519, &uLocal_3520);
	__LIB_6__::func_556(&Local_3537, &uLocal_3590, &iLocal_3531, 1);
	__LIB_0__::func_11();
	__LIB_17__::func_944(0);
	__LIB_17__::func_977();
	func_283(&(iParam0->f_51), &Local_3626);
	func_284();
	func_285();
}

void func_45(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iParam0->f_1713 = 24;
	iVar0 = 0;
	Global_1357549.f_3[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Clemens volCampAreas[CVA_INNER]");
	__LIB_6__::func_354(&(Global_1357549.f_3[0]), &iVar0, 0, 681.4077f, -1256.627f, 45f, 0f, 0f, -24f, 13f, 19f, 35f, joaat("VOLCYLINDER"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[0]), &iVar0, 0, 659.684f, -1253.208f, 45f, 0f, 0f, 30f, 11f, 18f, 35f, joaat("VOLCYLINDER"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[0]), &iVar0, 0, 669.8141f, -1242.698f, 53.68411f, 0f, 0f, -17f, 34f, 17f, 35f, joaat("VOLBOX"), 0);
	Global_1357549.f_3[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Clemens volCampAreas[CVA_WALK]");
	__LIB_6__::func_354(&(Global_1357549.f_3[1]), &iVar0, 1, 671.1957f, -1249.653f, 61.65944f, 0f, 0f, -54.88453f, 30.06073f, 23.79622f, 21.33633f, joaat("VOLCYLINDER"), 0);
	Global_1357549.f_3[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Clemens volCampAreas[CVA_OUTER]");
	Global_1357549.f_3[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Clemens volCampAreas[CVA_OUTER_THRESHOLD]");
	__LIB_6__::func_354(&(Global_1357549.f_3[2]), &(Global_1357549.f_3[3]), 2, 676.1342f, -1244.41f, 60f, 0f, 0f, 0f, 34f, 40f, 35f, joaat("VOLCYLINDER"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[2]), &(Global_1357549.f_3[3]), 2, 714.5854f, -1246.16f, 60f, 0f, 0f, 0f, 25f, 25f, 35f, joaat("VOLCYLINDER"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[2]), &(Global_1357549.f_3[3]), 2, 668.8077f, -1250.38f, 67.0239f, 0f, 0f, -45f, 74f, 49f, 37f, joaat("VOLCYLINDER"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[2]), &(Global_1357549.f_3[3]), 2, 626.6451f, -1193.235f, 69.3287f, 0f, 0f, 24f, 13f, 19f, 40f, joaat("VOLCYLINDER"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[2]), &(Global_1357549.f_3[3]), 2, 651.0234f, -1192.038f, 70.30768f, 0f, 0f, -33f, 30f, 10f, 40f, joaat("VOLCYLINDER"), 0);
	Global_1357549.f_3[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Clemens volCampAreas[CVA_SURROUNDING]");
	Global_1357549.f_3[5] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Clemens volCampAreas[CVA_SURROUNDING_THRESHOLD]");
	__LIB_6__::func_354(&(Global_1357549.f_3[4]), &(Global_1357549.f_3[5]), 4, 687.9815f, -1224.231f, 68.0941f, 0f, 0f, -24f, 94f, 103f, 34f, joaat("VOLCYLINDER"), 0);
	Global_1357549.f_3[6] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(652.9659f, -1245.305f, 43.90106f, 0f, 0f, 51.79757f, 8.125f, 4.6f, 2.65802f, "Clemens volCampAreas[CVA_PROPERTY]");
	iLocal_3516 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(687.8383f, -1237.403f, 44.0555f, 0f, 0f, 150.7247f, 9.113432f, 4.664736f, 3.323739f, "Clemens - m_volMusterFront");
	iLocal_3517 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(696.5735f, -1258.482f, 44.76106f, 0f, 0f, -125.4608f, 15.30894f, 7.055721f, 3.96173f, "Clemens - m_volMusterFrontSide");
	iLocal_3518 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(658.611f, -1263.751f, 44.0555f, 0f, 0f, -106.5222f, 8.476138f, 5.510819f, 3.510776f, "Clemens - m_volMusterBack");
	iVar1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(652.6449f, -1245.957f, 43.90106f, 0f, 0f, 51.79755f, 6.472132f, 4.296463f, 2.65802f, "Clemens - eITEM_CLEMENS_HORSESHOE");
	Local_18.f_3057[0 /*21*/].f_4 = iVar1;
	iVar2 = 0;
	__LIB_0__::func_495(&iVar2, 4);
	__LIB_0__::func_495(&iVar2, 5);
	__LIB_0__::func_495(&iVar2, 0);
	__LIB_0__::func_495(&iVar2, 15);
	COMPANION::_0x3CAAD93FA5B9579A(iLocal_3516, 2, iVar2);
	COMPANION::_0x3CAAD93FA5B9579A(iLocal_3517, 2, iVar2);
	COMPANION::_0x3CAAD93FA5B9579A(iLocal_3518, 2, iVar2);
	func_301();
	if (__LIB_0__::func_592() == 1)
	{
		func_33(2, iParam0->f_46);
	}
	else
	{
		__LIB_6__::func_467(2);
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
	__LIB_17__::func_948(&(iParam0->f_51));
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
		__LIB_17__::func_967();
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
	func_369(iParam0);
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
	__LIB_6__::func_457(&(Global_1357549.f_1691));
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
			__LIB_6__::func_471(17, cVar1, 2);
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
	if (func_406())
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
	if (func_428(&Local_18))
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
	__LIB_0__::func_11(&Local_18);
	__LIB_0__::func_11();
	__LIB_6__::func_610(&(Local_18.f_51));
	func_433();
	__LIB_5__::func_871();
	__LIB_6__::func_627(1);
	__LIB_0__::func_11();
	__LIB_6__::func_486();
	return 1;
}

void func_126()
{
	__LIB_3__::func_414(&(uLocal_3601[0]), 656.3932f, -1232.21f, 43.86718f, 4f, 1, 29, 0);
	__LIB_3__::func_414(&(uLocal_3601[1]), 657.5635f, -1232.771f, 43.37803f, 4f, 2, 18, 0);
	__LIB_3__::func_414(&(uLocal_3601[2]), 659.1177f, -1228.901f, 43.93859f, 2f, 2, 18, 0);
	__LIB_3__::func_414(&(uLocal_3601[3]), 666.638f, -1218.673f, 45.03771f, 1f, 1, 2, 0);
	__LIB_3__::func_414(&(uLocal_3601[4]), 666.638f, -1218.673f, 45.03771f, 3f, 1, 29, 0);
	__LIB_3__::func_414(&(uLocal_3601[5]), 666.638f, -1218.673f, 45.03771f, 4f, 2, 18, 0);
	__LIB_3__::func_414(&(uLocal_3601[12]), 663.1995f, -1266.629f, 42.86007f, 3f, 1, 29, 0);
	__LIB_3__::func_414(&(uLocal_3601[11]), 663.1995f, -1266.629f, 42.86007f, 2f, 2, 18, 0);
	__LIB_3__::func_414(&(uLocal_3601[6]), 682.9747f, -1245.409f, 42.99231f, 1f, 1, 31, 0);
	__LIB_3__::func_414(&(uLocal_3601[7]), 682.9747f, -1245.409f, 42.99231f, 3.5f, 2, 18, 0);
	__LIB_3__::func_414(&(uLocal_3601[9]), 679.2255f, -1248.546f, 43.04386f, 0.5f, 1, 31, 0);
	__LIB_3__::func_414(&(uLocal_3601[10]), 679.2255f, -1248.546f, 43.04386f, 2f, 2, 18, 0);
	__LIB_3__::func_414(&(uLocal_3601[8]), 676.3844f, -1251.406f, 43.01526f, 3f, 2, 18, 0);
	__LIB_3__::func_414(&(uLocal_3601[13]), 653.8909f, -1253.399f, 42.84814f, 3f, 1, 31, 0);
	__LIB_3__::func_414(&(uLocal_3601[14]), 660.7718f, -1257.453f, 42.71371f, 2.5f, 1, 31, 0);
	__LIB_3__::func_414(&(uLocal_3601[15]), 673.2725f, -1268.013f, 43.13684f, 2f, 1, 31, 0);
	__LIB_3__::func_414(&(uLocal_3601[16]), 676.275f, -1265.928f, 43.10801f, 2.5f, 1, 31, 0);
	__LIB_3__::func_414(&(uLocal_3601[17]), 690.4104f, -1259.118f, 43.7009f, 2f, 1, 31, 0);
	__LIB_3__::func_414(&(uLocal_3601[18]), 691.861f, -1254.139f, 43.62256f, 2.5f, 1, 31, 0);
	__LIB_3__::func_414(&(uLocal_3601[19]), 685.9976f, -1240.614f, 43.00195f, 2f, 1, 31, 0);
	__LIB_3__::func_414(&(uLocal_3601[20]), 673.0549f, -1238.818f, 43.23489f, 3f, 1, 31, 0);
	__LIB_3__::func_414(&(uLocal_3601[21]), 653.2302f, -1243.668f, 42.68324f, 1.75f, 1, 31, 0);
	__LIB_3__::func_414(&(uLocal_3601[22]), 672.4307f, -1259.949f, 43.03751f, 0.9f, 1, 31, 0);
	__LIB_3__::func_414(&(uLocal_3601[23]), 672.4307f, -1259.949f, 43.03751f, 1.5f, 2, 18, 0);
}

void func_128()
{
	Local_18.f_3057[0 /*21*/].f_6 = { 651.6099f, -1245.247f, 43.8409f };
	Local_18.f_3057[0 /*21*/].f_9 = { 652.1015f, -1245.072f, 43.9123f };
	Local_18.f_3057[0 /*21*/].f_12 = { 4.5811f, 0f, 98.7225f };
	Local_18.f_3057[0 /*21*/].f_15 = 51.282f;
	Local_18.f_3057[0 /*21*/].f_16 = joaat("INPUT_CAMP_BED_INSPECT");
	Local_18.f_3057[0 /*21*/].f_18 = 1057677739;
	Local_18.f_3057[0 /*21*/].f_19 = 0;
	Local_18.f_3057[0 /*21*/].f_20 = "VI_HSHOE";
	Local_18.f_3057[1 /*21*/].f_6 = { vLocal_3732 };
	Local_18.f_3057[1 /*21*/].f_9 = { 651.6634f, -1244.918f, 44.2157f };
	Local_18.f_3057[1 /*21*/].f_12 = { -19.3729f, 0f, 124.3636f };
	Local_18.f_3057[1 /*21*/].f_15 = 51.282f;
	Local_18.f_3057[1 /*21*/].f_16 = joaat("INPUT_CAMP_BED_INSPECT");
	Local_18.f_3057[1 /*21*/].f_19 = 0;
	Local_18.f_3057[1 /*21*/].f_20 = "VI_ADAD";
	Local_18.f_3057[2 /*21*/].f_6 = { vLocal_3737 };
	Local_18.f_3057[2 /*21*/].f_9 = { 651.5223f, -1244.948f, 43.9511f };
	Local_18.f_3057[2 /*21*/].f_12 = { -1.7966f, 0f, 125.8308f };
	Local_18.f_3057[2 /*21*/].f_15 = 51.282f;
	Local_18.f_3057[2 /*21*/].f_16 = joaat("INPUT_CAMP_BED_INSPECT");
	Local_18.f_3057[2 /*21*/].f_19 = 0;
	Local_18.f_3057[2 /*21*/].f_20 = "VI_ADOG";
	Local_18.f_3057[3 /*21*/].f_6 = { 651.6099f, -1245.247f, 43.8409f };
	Local_18.f_3057[3 /*21*/].f_9 = { 651.8752f, -1245.167f, 43.9404f };
	Local_18.f_3057[3 /*21*/].f_12 = { -10.8361f, 0f, 136.4395f };
	Local_18.f_3057[3 /*21*/].f_15 = 51.2794f;
	Local_18.f_3057[3 /*21*/].f_16 = joaat("INPUT_CAMP_BED_INSPECT");
	Local_18.f_3057[3 /*21*/].f_19 = 0;
	Local_18.f_3057[3 /*21*/].f_20 = "VI_HOSEA";
}

void func_129()
{
	Local_3764[0 /*8*/].f_6 = joaat("P_CS_PHOTO_4X6");
	Local_3764[0 /*8*/].f_3 = { vLocal_3732 };
	Local_3764[1 /*8*/].f_6 = joaat("P_CS_PHOTO_4X6");
	Local_3764[1 /*8*/].f_3 = { vLocal_3737 };
	Local_3764[2 /*8*/].f_6 = joaat("P_CS_PHOTO_5X7");
	Local_3764[2 /*8*/].f_3 = { vLocal_3737 };
	iLocal_3513 = 0;
}

int func_186(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
				func_546(Global_1360165[iParam0 /*1157*/], vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
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
			__LIB_6__::func_628(iParam0, Global_1360165[iParam0 /*1157*/]);
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

void func_241(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	if (iParam0 == 11)
	{
		return;
	}
	iVar0 = __LIB_0__::func_560(iParam3, iParam0);
	vVar1 = { __LIB_4__::func_846(iVar0) };
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
	if (!func_608(iParam0, iParam1))
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

void func_283(var uParam0, var uParam1)
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
				__LIB_1__::func_748(&(uParam0->f_1610), 1, 1);
				uParam0->f_1581 = -1;
				__LIB_17__::func_961(uParam0, uParam1, 1, 1, 0);
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
				__LIB_1__::func_748(&(uParam0->f_1610), 1, 1);
			}
			if (__LIB_0__::func_139(uParam0->f_1610))
			{
				__LIB_1__::func_515(uParam0->f_1610, 1);
			}
			uParam0->f_1581 = 11;
			__LIB_17__::func_961(uParam0, uParam1, 0, 1, 1);
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
		__LIB_1__::func_748(&(uParam0->f_1610), 1, 1);
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
			func_731(uParam0, uParam1);
			break;
		case 1:
			if (__LIB_6__::func_212(uParam0))
			{
				__LIB_19__::func_118(uParam0, uParam1);
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
			__LIB_17__::func_970(uParam0, uParam1);
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
			__LIB_17__::func_971(uParam0, uParam1);
			break;
		case 4:
			__LIB_17__::func_970(uParam0, uParam1);
			__LIB_19__::func_438(uParam0, uParam1);
			__LIB_17__::func_971(uParam0, uParam1);
			break;
		case 9:
			__LIB_17__::func_970(uParam0, uParam1);
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
			__LIB_17__::func_970(uParam0, uParam1);
			if (__LIB_0__::func_272(Global_35, 0))
			{
				PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.35f);
			}
			__LIB_17__::func_962(uParam0, uParam1);
			__LIB_17__::func_971(uParam0, uParam1);
			break;
		case 6:
			if (func_743(uParam0, uParam1))
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
			func_744(uParam0, uParam1, 2);
			break;
		case -1:
			break;
		case 10:
			__LIB_6__::func_588(uParam0, uParam1);
			break;
		case 11:
			__LIB_17__::func_961(uParam0, uParam1, 0, 1, 0);
			break;
		case 12:
			__LIB_17__::func_974(uParam0, uParam1);
			break;
		case 15:
			if (!__LIB_2__::func_7())
			{
				uParam0->f_1581 = 0;
			}
			break;
	}
}

void func_284()
{
	if (iLocal_3595 == 0)
	{
		iLocal_3595 = ENTITY::_0x6F3068258A499E52(joaat("S_COOKFIRE01X"), vLocal_3598, 11);
	}
	else if (!__LIB_0__::func_75(&uLocal_3592) || __LIB_0__::func_265(&uLocal_3592) > 1.1f)
	{
		__LIB_1__::func_148(&uLocal_3592);
		if (ENTITY::_0x1FF441D7954F8709(iLocal_3595))
		{
			iLocal_3596 = ENTITY::_0x4735E2A4BB83D9DA(iLocal_3595);
			iLocal_3597 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iLocal_3596);
		}
		if (iLocal_3595 != 0 && ENTITY::DOES_ENTITY_EXIST(iLocal_3596))
		{
			__LIB_6__::func_557(iLocal_3596, iLocal_3597, vLocal_3598);
		}
	}
}

void func_285()
{
	if (__LIB_0__::func_627(37, 0))
	{
		if (__LIB_1__::func_992(Global_35, 675.3f, -1217.2f, 45.4f, 1) < 9f)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 195, true);
		}
	}
}

void func_301()
{
	func_784(0, 653.717f, -1253.369f, 44.30623f, 0f, 0f, 123.268f, 4.089039f, 4.447602f, 3.107987f);
	func_785(&(iLocal_3521[0]), 0, 1);
	func_785(&(iLocal_3521[0]), 16, 0);
	func_784(1, 661.024f, -1257.267f, 44.30623f, 0f, 0f, 163.903f, 4.089039f, 4.447602f, 3.107987f);
	func_785(&(iLocal_3521[1]), 1, 1);
	func_784(2, 676.8243f, -1266.103f, 44.30623f, 0f, 0f, -161.0943f, 3.309491f, 3.887614f, 3.107987f);
	func_785(&(iLocal_3521[2]), 11, 1);
	func_784(3, 673.2542f, -1268.189f, 44.30623f, 0f, 0f, 176.968f, 3.309491f, 2.816824f, 3.107987f);
	func_785(&(iLocal_3521[3]), 20, 1);
	func_785(&(iLocal_3521[3]), 15, 0);
	func_785(&(iLocal_3521[3]), 22, 0);
	func_784(4, 692.1019f, -1254.25f, 44.30623f, 0f, 0f, -72.4903f, 4.153816f, 3.887614f, 3.107987f);
	func_785(&(iLocal_3521[4]), 13, 1);
	func_785(&(iLocal_3521[4]), 14, 0);
	func_784(5, 657.7814f, -1232.627f, 44.30623f, 0f, 0f, 123.268f, 3.211437f, 4.447602f, 3.107987f);
	func_785(&(iLocal_3521[5]), 17, 1);
	func_785(&(iLocal_3521[5]), 19, 0);
	func_785(&(iLocal_3521[5]), 18, 0);
	func_784(6, 673.5869f, -1238.552f, 44.47178f, 0f, 0f, 115.5981f, 4.615707f, 4.447602f, 3.107987f);
	func_785(&(iLocal_3521[6]), 5, 1);
	func_785(&(iLocal_3521[6]), 3, 0);
	func_785(&(iLocal_3521[6]), 7, 0);
	func_784(7, 685.7074f, -1241.031f, 44.30623f, 0f, 0f, -18.04674f, 4.153816f, 2.510912f, 3.107987f);
	func_785(&(iLocal_3521[7]), 6, 1);
	func_785(&(iLocal_3521[7]), 2, 0);
	func_785(&(iLocal_3521[7]), 9, 0);
	func_784(8, 690.1271f, -1258.598f, 44.30623f, 0f, 0f, -126.8046f, 4.153816f, 3.887614f, 3.107987f);
	func_785(&(iLocal_3521[8]), 21, 1);
	func_785(&(iLocal_3521[8]), 8, 0);
}

void func_369(int iParam0)
{
	int iVar0;
	__LIB_2__::func_759(0.775f, 0.2f, 0.025f, 0f);
	COMPANION::_0x7274F84B1501B523(iLocal_3516);
	COMPANION::_0x7274F84B1501B523(iLocal_3517);
	COMPANION::_0x7274F84B1501B523(iLocal_3518);
	if (MAP::DOES_BLIP_EXIST(Global_1357549.f_1624))
	{
		MAP::REMOVE_BLIP(&(Global_1357549.f_1624));
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (__LIB_1__::func_565(&(uLocal_3601[iVar0])))
		{
			GRAPHICS::_0x9CF1836C03FB67A2(&(uLocal_3601[iVar0]), 1);
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3712))
	{
		OBJECT::DELETE_OBJECT(&iLocal_3712);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3713))
	{
		OBJECT::DELETE_OBJECT(&iLocal_3713);
	}
	__LIB_6__::func_550(&uLocal_3534, &uLocal_3535);
	__LIB_6__::func_633(&Local_3537);
	func_869();
	__LIB_6__::func_216(&uLocal_3514);
	__LIB_2__::func_355(552);
	__LIB_2__::func_355(551);
	__LIB_17__::func_972(&(iParam0->f_51), &Local_3626);
	__LIB_6__::func_194(&Local_3764);
}

bool func_406()
{
	if (__LIB_6__::func_547(6))
	{
		if (!STREAMING::HAS_MODEL_LOADED(joaat("P_CS_BOOK_SHREW_A")))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3712))
		{
			iLocal_3712 = OBJECT::CREATE_OBJECT(joaat("P_CS_BOOK_SHREW_A"), vLocal_3717, true, true, false, false, true);
			return false;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CS_BOOK_SHREW_A"));
		ENTITY::SET_ENTITY_ROTATION(iLocal_3712, vLocal_3720, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_3712, true);
	}
	if (__LIB_6__::func_547(8))
	{
		if (!STREAMING::HAS_MODEL_LOADED(iLocal_3729))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3713))
		{
			iLocal_3713 = OBJECT::CREATE_OBJECT(iLocal_3729, vLocal_3723, true, true, false, false, true);
			return false;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_3729);
		ENTITY::SET_ENTITY_ROTATION(iLocal_3713, vLocal_3726, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_3713, true);
	}
	return true;
}

bool func_428(var uParam0)
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
			if (func_920(uParam0->f_46, 0))
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

void func_433()
{
	Local_3626[0 /*8*/] = { __LIB_6__::func_219(7, 0, 0) };
	Local_3626[1 /*8*/] = { __LIB_6__::func_219(4, 0, 0) };
	Local_3626[2 /*8*/] = { __LIB_6__::func_219(4, 1, 1) };
	Local_3626[3 /*8*/] = { __LIB_6__::func_219(0, 0, 0) };
	Local_3626[4 /*8*/] = { __LIB_6__::func_219(0, 0, 1) };
	Local_3626[5 /*8*/] = { __LIB_6__::func_219(0, 1, 2) };
	Local_3626[6 /*8*/] = { __LIB_6__::func_219(0, 1, 3) };
	Local_3626[7 /*8*/] = { __LIB_6__::func_219(0, 1, 4) };
	Local_3626[8 /*8*/] = { __LIB_6__::func_219(1, 0, 0) };
	Local_3626[9 /*8*/] = { __LIB_6__::func_219(10, 0, 0) };
}

void func_546(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_546(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_546(iVar2, vParam1, fParam4, iParam5, iParam6);
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

bool func_608(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_4__::func_922(iParam0, 16384) && !__LIB_5__::func_779(iParam0, 1))
	{
		return true;
	}
	if (!__LIB_0__::func_29(iParam1))
	{
		return false;
	}
	iVar0 = __LIB_1__::func_334(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_25))
	{
		iVar1 = VOLUME::_0x7FD78DFD0C5D7B9B(Global_1914319.f_3[iParam0 /*446*/].f_25);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (iVar1 != iVar0)
			{
				VOLUME::_0x6D5F9E69BA1BE783(Global_1914319.f_3[iParam0 /*446*/].f_25);
			}
		}
		func_1065(iParam1, Global_1914319.f_3[iParam0 /*446*/].f_25, 1);
		VOLUME::_0x4A8FEFC43FD8AC9B(Global_1914319.f_3[iParam0 /*446*/].f_25, 1, 1);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_28))
	{
		iVar2 = VOLUME::_0x7FD78DFD0C5D7B9B(Global_1914319.f_3[iParam0 /*446*/].f_28);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (iVar2 != iVar0)
			{
				VOLUME::_0x6D5F9E69BA1BE783(Global_1914319.f_3[iParam0 /*446*/].f_28);
			}
		}
		func_1065(iParam1, Global_1914319.f_3[iParam0 /*446*/].f_28, 1);
		VOLUME::_0x4A8FEFC43FD8AC9B(Global_1914319.f_3[iParam0 /*446*/].f_28, 0, 1);
	}
	Global_1914319.f_3[iParam0 /*446*/].f_21 = iParam1;
	Global_1914319.f_3[iParam0 /*446*/].f_23 = iVar0;
	return true;
}

void func_731(var uParam0, var uParam1)
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
			__LIB_17__::func_975(uParam0, uParam1);
			__LIB_19__::func_118(uParam0, uParam1);
		}
		else
		{
			__LIB_17__::func_976(uParam0);
			__LIB_6__::func_553(uParam1);
			func_1136(uParam1);
		}
	}
	else
	{
		__LIB_17__::func_976(uParam0);
		__LIB_6__::func_553(uParam1);
		func_1136(uParam1);
	}
	STREAMING::REQUEST_MODEL(joaat("SCRIPTEDBALL"), false);
	uParam0->f_1581 = 1;
}

bool func_743(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = uParam0->f_1642;
	vVar1 = { func_1163(uParam1[iVar0 /*8*/]) };
	if (__LIB_6__::func_222(uParam1[iVar0 /*8*/], 2))
	{
		if (uParam0->f_1582.f_1 == (uParam1[iVar0 /*8*/])->f_1 && !__LIB_0__::func_86(vVar1))
		{
			if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1649))
			{
				VOLUME::_0x39816F6F94F385AD(uParam0->f_1649, vVar1, 0f, 0f, 0f, 2f, 2f, 3f);
			}
			__LIB_6__::func_315(uParam0, uParam1, vVar1, iVar0, 408396114, joaat("BLIP_OBJECTIVE"), 0);
		}
		else if (MAP::DOES_BLIP_EXIST((uParam1[iVar0 /*8*/])->f_4))
		{
			MAP::REMOVE_BLIP(&((uParam1[iVar0 /*8*/])->f_4));
		}
	}
	uParam0->f_1642++;
	if (uParam0->f_1642 >= *uParam1)
	{
		uParam0->f_1606 = { 0f, 0f, 0f };
		uParam0->f_1609 = 0;
		uParam0->f_1642 = 0;
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1649))
		{
			POPULATION::_0xB56D41A694E42E86(uParam0->f_1649, 10208, 0, 0, -1, -1, 0);
		}
		return true;
	}
	return false;
}

void func_744(var uParam0, var uParam1, int iParam2)
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
		func_1166(45);
		__LIB_3__::func_465(10, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
		__LIB_6__::func_207(uParam1);
		uParam0->f_1599++;
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1649))
		{
			VOLUME::_DELETE_VOLUME(uParam0->f_1649);
		}
		(uParam1[uParam0->f_1643 /*8*/])->f_2 = 6;
		__LIB_6__::func_221(&(uParam0->f_1582));
		uParam0->f_1643 = -1;
		__LIB_19__::func_118(uParam0, uParam1);
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
			__LIB_17__::func_974(uParam0, uParam1);
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
		func_1168(uParam0, &(uParam0->f_1582), uParam1);
	}
	else if (uParam0->f_1582.f_1 == 5)
	{
		uParam0->f_1625 = 1;
		uParam0->f_1624 = 5;
		uParam0->f_1630.f_2++;
		Global_40.f_4283.f_408.f_2 = (Global_40.f_4283.f_408.f_2 + 0.25f);
		func_1168(uParam0, &(uParam0->f_1582), uParam1);
	}
	else if (uParam0->f_1582.f_1 == 4)
	{
		uParam0->f_1630.f_4++;
		func_1168(uParam0, &(uParam0->f_1582), uParam1);
	}
	else if (uParam0->f_1582.f_1 != 7)
	{
		func_1168(uParam0, &(uParam0->f_1582), uParam1);
	}
	if (uParam0->f_1643 != -1)
	{
		(uParam1[uParam0->f_1643 /*8*/])->f_2 = 6;
		uParam0->f_1643 = -1;
		__LIB_6__::func_221(&(uParam0->f_1582));
	}
	if (__LIB_0__::func_139(uParam0->f_1610))
	{
		__LIB_1__::func_748(&(uParam0->f_1610), 1, 1);
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
	func_1166(45);
	PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
	__LIB_3__::func_465(10, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
	__LIB_6__::func_207(uParam1);
	__LIB_19__::func_118(uParam0, uParam1);
}

void func_784(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_3521[iParam0]))
	{
		iLocal_3521[iParam0] = VOLUME::_CREATE_VOLUME_BOX(vParam1, vParam4, vParam7);
	}
}

void func_785(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (!__LIB_0__::func_272(__LIB_0__::func_271(iParam1), 0))
	{
		return;
	}
	if (!bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(VOLUME::_0x7FD78DFD0C5D7B9B(*uParam0)))
		{
			bParam2 = true;
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		iVar0 = __LIB_0__::func_748(iParam1, 0);
		if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
		{
			VOLUME::_0xE2BE6FFA4A13CBB0(*uParam0, iVar0, bParam2);
			VOLUME::_0x4A8FEFC43FD8AC9B(*uParam0, 0, 1);
		}
	}
}

void func_869()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_3521[iVar0]))
		{
			VOLUME::_0x998202B206872672(iLocal_3521[iVar0]);
			VOLUME::_0x6D5F9E69BA1BE783(iLocal_3521[iVar0]);
			VOLUME::_DELETE_VOLUME(iLocal_3521[iVar0]);
		}
		iVar0++;
	}
}

bool func_920(int iParam0, bool bParam1)
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
					if (func_186(iVar3, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1) != 0)
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

int func_1065(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return 0;
	}
	if (!__LIB_2__::func_767(iParam0, 0))
	{
		return 0;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_120(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	VOLUME::_0xE2BE6FFA4A13CBB0(iParam1, iVar0, bParam2);
	return 1;
}

void func_1136(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		vVar1 = { func_1163(uParam0[iVar0 /*8*/]) };
		if (!__LIB_0__::func_86(vVar1))
		{
			TASK::_0x4161648394262FDF(vVar1, 0.05f);
		}
		iVar0++;
	}
}

Vector3 func_1163(var uParam0)
{
	switch (__LIB_0__::func_317())
	{
		case 8:
			return __LIB_6__::func_554(uParam0);
		case 1:
			return __LIB_6__::func_249(uParam0);
		case 3:
			return __LIB_6__::func_250(uParam0);
		case 6:
			return __LIB_6__::func_251(uParam0);
		case 2:
			return func_1511(uParam0);
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_1166(int iParam0)
{
	int iVar0;
	float fVar1;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	iVar0 = func_1512(iParam0);
	fVar1 = func_1513(iParam0);
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
	__LIB_1__::func_606(iVar0, (Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(6, __LIB_0__::func_526(iParam0), fVar1), "itemtype_textures", __LIB_0__::func_527(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_1168(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if ((uParam2[iVar0 /*8*/])->f_1 != uParam1->f_1)
		{
		}
		else if ((uParam2[iVar0 /*8*/])->f_2 != -1 && (uParam2[iVar0 /*8*/])->f_2 != -3)
		{
			if (__LIB_0__::func_62(uParam0->f_1600, func_1163(uParam2[iVar0 /*8*/])) < __LIB_6__::func_227(uParam2[iVar0 /*8*/]))
			{
				__LIB_1__::func_683(&((uParam2[iVar0 /*8*/])->f_3), 2);
				return;
			}
		}
		iVar0++;
	}
}

Vector3 func_1511(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 0:
			switch (uParam0->f_5[1])
			{
				case 0:
					return 665.99f, -1205.8f, 45.44f;
				case 1:
					return 666.86f, -1205.71f, 45.4f;
				case 3:
					return 671.08f, -1205.93f, 45.36f;
				case 4:
					return 714.82f, -1250.56f, 44.09f;
				case 2:
					return 712.4f, -1251f, 44.1f;
					Jump @323; //curOff = 176
					switch (uParam0->f_5[1])
					{
						case 0:
							return 679.32f, -1246.59f, 42.99f;
						case 1:
							return 678.38f, -1249.08f, 43.01f;
						default:
							break;
					}
					Jump @323; //curOff = 240
					switch (uParam0->f_5[1])
					{
						case 0:
							return 678.1966f, -1251.232f, 43.0152f;
						default:
							break;
					}
					Jump @323; //curOff = 280
					switch (uParam0->f_5[1])
					{
						case 0:
							return 667.7363f, -1273.373f, 42.98447f;
						default:
							break;
					}
					return 0f, 0f, 0f;
				}
int func_1512(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

float func_1513(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5f;
		case 2:
			return 20f;
		case 3:
			return 10f;
		case 4:
			return 10f;
		case 5:
			return 20f;
		case 6:
			return 10f;
		case 7:
			return 15f;
		case 8:
			return 15f;
		case 9:
			return 20f;
		case 10:
			return 5f;
		case 11:
			return 5f;
		case 12:
			return 10f;
		case 13:
			return 20f;
		case 14:
			return 30f;
		case 15:
			return 5f;
		case 16:
			return 5f;
		case 17:
			return 3f;
		case 18:
			return 20f;
		case 19:
			return func_1699(iParam0);
		case 20:
			return 25f;
		case 21:
			return 50f;
		case 22:
			return 100f;
		case 23:
			return 150f;
		case 24:
			return 20f;
		case 25:
			return 10f;
		case 26:
			return 20f;
		case 27:
			return 20f;
		case 28:
			return 20f;
		case 29:
			return 20f;
		case 30:
			return func_1699(iParam0);
		case 31:
			return 25f;
		case 32:
			return 50f;
		case 33:
			return 100f;
		case 34:
			return 150f;
		case 35:
			return 1f;
		case 36:
			return 5f;
		case 37:
			return 1f;
		case 38:
			return 3f;
		case 39:
			return 1f;
		case 40:
			return 1f;
		case 41:
			return 1f;
		case 42:
			return 5f;
		case 43:
			return 10f;
		case 49:
			return 20f;
		case 44:
			return 5f;
		case 45:
			return 5f;
		case 46:
			return 10f;
		case 47:
			return 10f;
		case 48:
			return 5f;
		case 50:
			return func_1699(iParam0);
		case 51:
			return 25f;
		case 52:
			return 50f;
		case 53:
			return 100f;
		case 54:
			return 150f;
		case 55:
			return 5f;
		default:
			break;
	}
	return 0f;
}

float func_1699(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar4 = func_1512(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = Global_40.f_11095.f_11[iVar4];
			iVar5 = __LIB_0__::func_593(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (__LIB_0__::func_652(iVar6) - __LIB_0__::func_652(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

