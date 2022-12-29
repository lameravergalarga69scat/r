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
	int iLocal_3514 = 0;
	int iLocal_3515 = 0;
	bool bLocal_3516 = false;
	bool bLocal_3517 = false;
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
					__LIB_6__::func_613(Local_18.f_45, Local_18.f_46);
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
	__LIB_5__::func_808(0, 13548, 0);
	__LIB_5__::func_808(1, 13905, 1);
	__LIB_5__::func_808(2, 13921, 1);
	__LIB_5__::func_808(3, 13984, 1);
	__LIB_5__::func_808(4, 14015, 2);
	__LIB_5__::func_808(5, 14129, 16);
	__LIB_5__::func_808(6, 14264, 1);
	__LIB_5__::func_808(7, 14878, 4);
	__LIB_5__::func_808(8, 14972, 1);
	__LIB_5__::func_808(9, 15102, 128);
	__LIB_5__::func_808(10, 15111, 792);
	__LIB_5__::func_808(11, 15159, 1024);
}

void func_6(var uParam0)
{
	struct<2> Var0;
	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(uParam0, &Var0, 65);
	__LIB_5__::func_813(uParam0, 0, 15839, 15943, 16382);
	__LIB_5__::func_813(uParam0, 1, 16672, 16718, 17184);
	__LIB_5__::func_813(uParam0, 2, 17214, 17252, 17680);
	__LIB_5__::func_813(uParam0, 3, 17710, 17736, 17815);
	__LIB_5__::func_813(uParam0, 4, 17823, 17977, 17815);
	__LIB_6__::func_268(uParam0, 0);
}

void func_7(var uParam0)
{
	struct<2> Var0;
	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(uParam0, &Var0, 65);
	__LIB_5__::func_813(uParam0, 0, 18049, 18127, 17815);
	__LIB_5__::func_813(uParam0, 1, 19283, 19410, 17815);
	__LIB_5__::func_813(uParam0, 2, 17815, 20252, 17815);
	__LIB_5__::func_813(uParam0, 3, 20410, 20956, 17815);
	__LIB_5__::func_813(uParam0, 4, 21584, 21814, 17815);
	__LIB_5__::func_813(uParam0, 5, 22237, 22270, 17815);
	__LIB_5__::func_813(uParam0, 6, 22987, 23072, 17815);
	__LIB_6__::func_268(uParam0, 0);
}

void func_8(var uParam0)
{
	struct<2> Var0;
	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(uParam0, &Var0, 65);
	__LIB_5__::func_813(uParam0, 0, 23127, 23209, 17815);
	__LIB_5__::func_813(uParam0, 1, 23530, 23566, 17815);
	__LIB_5__::func_813(uParam0, 2, 24035, 24166, 24575);
	__LIB_5__::func_813(uParam0, 3, 24594, 24661, 25065);
	__LIB_6__::func_268(uParam0, 0);
}

void func_9()
{
	struct<2> Var0;
	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(&(Local_18.f_1934), &Var0, 65);
	__LIB_5__::func_813(&(Local_18.f_1934), 0, 25134, 25171, 17815);
	__LIB_5__::func_813(&(Local_18.f_1934), 1, 25354, 25377, 17815);
	__LIB_5__::func_813(&(Local_18.f_1934), 2, 25582, 25629, 17815);
	__LIB_5__::func_813(&(Local_18.f_1934), 3, 25903, 25954, 17815);
	__LIB_5__::func_813(&(Local_18.f_1934), 4, 25973, 26029, 17815);
	__LIB_6__::func_268(&(Local_18.f_1934), 0);
}

void func_10(var uParam0)
{
	uParam0->f_45 = 0;
	uParam0->f_47 = 1;
	uParam0->f_1714 = { __LIB_6__::func_188(uParam0->f_45) };
	uParam0->f_1717 = 183.5714f;
	__LIB_1__::func_948(-1833460353, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(joaat("DOOR_COL_BARN_INT_2"), 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(-297610092, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(joaat("DOOR_COL_BARN_INT_4"), 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(1175826463, 0, 0, 0, 1, 0, 0, 0);
	OBJECT::_0x1BC47A9DEDC8DF5D(-1833460353, 0);
	OBJECT::_0x1BC47A9DEDC8DF5D(joaat("DOOR_COL_BARN_INT_2"), 0);
	OBJECT::_0x1BC47A9DEDC8DF5D(-297610092, 0);
	OBJECT::_0x1BC47A9DEDC8DF5D(joaat("DOOR_COL_BARN_INT_4"), 0);
	OBJECT::_0x1BC47A9DEDC8DF5D(1175826463, 0);
	OBJECT::_0x7F458B543006C8FE(-1833460353, 18);
	OBJECT::_0x7F458B543006C8FE(joaat("DOOR_COL_BARN_INT_2"), 18);
	OBJECT::_0x7F458B543006C8FE(-297610092, 18);
	OBJECT::_0x7F458B543006C8FE(joaat("DOOR_COL_BARN_INT_4"), 18);
	OBJECT::_0x7F458B543006C8FE(1175826463, 18);
	if (!__LIB_1__::func_44(__LIB_5__::func_436(2)))
	{
		__LIB_1__::func_948(-2111960098, 0, 0, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(-6656809, 0, 0, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(joaat("DOOR_COL_SCHOOL_INT_1"), 0, 0, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(joaat("DOOR_COL_SCHOOL_INT_2"), 0, 0, 0, 1, 0, 0, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(-2111960098, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(-6656809, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(joaat("DOOR_COL_SCHOOL_INT_1"), 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(joaat("DOOR_COL_SCHOOL_INT_2"), 0);
		OBJECT::_0x7F458B543006C8FE(-2111960098, 18);
		OBJECT::_0x7F458B543006C8FE(-6656809, 18);
		OBJECT::_0x7F458B543006C8FE(joaat("DOOR_COL_SCHOOL_INT_1"), 18);
		OBJECT::_0x7F458B543006C8FE(joaat("DOOR_COL_SCHOOL_INT_2"), 18);
	}
	AUDIO::_0x0D7FD6A55FD63AEF(42, 3, 0);
	__LIB_4__::func_229(1073741824 /* Float: 2f */);
	func_130();
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
			Global_1357549.f_1663[iVar2] = func_170(Global_1357549.f_1659[iVar2]);
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
						func_184(Global_1357549.f_1659[iVar2], 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
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

void func_42(int iParam0)
{
	int iVar0;
	if ((__LIB_1__::func_25(Global_1835011[1 /*74*/].f_1, 1) && !__LIB_1__::func_44(Global_1835011[3 /*74*/].f_1)) && !__LIB_6__::func_92(3))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3515) && !__LIB_0__::func_255(Global_1360165[1 /*1157*/], 0))
		{
			STREAMING::REQUEST_MODEL(joaat("S_MARSTONBLANKET01X_COLTER"), false);
			if (STREAMING::HAS_MODEL_LOADED(joaat("S_MARSTONBLANKET01X_COLTER")))
			{
				iLocal_3515 = OBJECT::CREATE_OBJECT(joaat("S_MARSTONBLANKET01X_COLTER"), -1316.738f, 2435.906f, 308.547f, false, false, false, false, false);
				ENTITY::SET_ENTITY_COORDS(iLocal_3515, -1316.738f, 2435.906f, 308.547f, true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_3515, 156.925f);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_3515, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_MARSTONBLANKET01X_COLTER"));
			}
		}
		else if (!bLocal_3517)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_1360165[1 /*1157*/]);
			if (iVar0 != 0 && INTERIOR::IS_INTERIOR_READY(iVar0))
			{
				bLocal_3517 = true;
				INTERIOR::FORCE_ROOM_FOR_ENTITY(iLocal_3515, iVar0, joaat("COL_SCHOOL_INT"));
				ENTITY::SET_ENTITY_COORDS(iLocal_3515, -1316.738f, 2435.906f, 308.547f, true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_3515, 156.925f);
			}
		}
	}
	else
	{
		func_272();
	}
	func_130();
}

void func_43(int* iParam0, var uParam1)
{
	if (__LIB_5__::func_842())
	{
		func_274(iParam0);
		__LIB_5__::func_844(0, 0);
		__LIB_5__::func_845();
	}
	func_277(iParam0);
	func_278(iParam0, uParam1);
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
	int iVar0;
	int iVar1;
	iParam0->f_1713 = 11;
	iVar0 = 0;
	Global_1357549.f_3[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Colter volCampAreas[CVA_INNER]");
	__LIB_6__::func_354(&(Global_1357549.f_3[0]), &iVar0, 0, -1347.246f, 2403.319f, 317.4772f, 0f, 0f, -25f, 5.5f, 9.5f, 50f, joaat("VOLBOX"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[0]), &iVar0, 0, -1357.996f, 2425.153f, 324.614f, 0f, 0f, -19f, 8.604f, 6.25f, 50f, joaat("VOLBOX"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[0]), &iVar0, 0, -1321.26f, 2438.339f, 326.5326f, 0f, 0f, -27f, 13f, 6.5f, 50f, joaat("VOLBOX"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[0]), &iVar0, 0, -1353.447f, 2439.784f, 325.5793f, 0f, 0f, -20f, 14f, 8.75f, 50f, joaat("VOLBOX"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[0]), &iVar0, 0, -1349.552f, 2445.316f, 328.9378f, 0f, 0f, -19.5f, 4f, 5f, 50f, joaat("VOLBOX"), 0);
	Global_1357549.f_3[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Colter volCampAreas[CVA_WALK]");
	__LIB_6__::func_354(&(Global_1357549.f_3[1]), &iVar0, 1, -1341.959f, 2421.997f, 322.0112f, 0f, 0f, -24.44765f, 34.02826f, 35.58308f, 35.03152f, joaat("VOLCYLINDER"), 0);
	Global_1357549.f_3[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Colter volCampAreas[CVA_OUTER]");
	Global_1357549.f_3[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Colter volCampAreas[CVA_OUTER_THRESHOLD]");
	__LIB_6__::func_354(&(Global_1357549.f_3[2]), &(Global_1357549.f_3[3]), 2, -1338.848f, 2440.223f, 325.2181f, 0f, 0f, -11.98408f, 39.34594f, 63.21424f, 35f, joaat("VOLCYLINDER"), 0);
	Global_1357549.f_3[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Colter volCampAreas[CVA_SURROUNDING]");
	Global_1357549.f_3[5] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Colter volCampAreas[CVA_SURROUNDING_THRESHOLD]");
	__LIB_6__::func_354(&(Global_1357549.f_3[4]), &(Global_1357549.f_3[5]), 4, -1367.268f, 2369.489f, 335.6791f, 0f, 0f, -57.00001f, 24f, 52f, 40f, joaat("VOLCYLINDER"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[4]), &(Global_1357549.f_3[5]), 4, -1338.716f, 2437.717f, 338.0552f, 0f, 0f, -9.000002f, 55f, 88f, 40f, joaat("VOLCYLINDER"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[4]), &(Global_1357549.f_3[5]), 4, -1302.44f, 2414.538f, 326.3339f, 0f, 0f, -36f, 82f, 142f, 61f, joaat("VOLBOX"), 0);
	Global_1357549.f_3[6] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1356.208f, 2443.04f, 308.2236f, 0f, 0f, -20.05581f, 5.638631f, 3.954793f, 2.642971f, "Colter volCampAreas[CVA_PROPERTY]");
	iLocal_3513 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1340.843f, 2427.755f, 309.0234f, 0f, 0f, -9.80633f, 10.52594f, 42.87149f, 7.160387f, "Colter - volMuster");
	iVar1 = 0;
	__LIB_0__::func_495(&iVar1, 4);
	__LIB_0__::func_495(&iVar1, 5);
	__LIB_0__::func_495(&iVar1, 0);
	__LIB_0__::func_495(&iVar1, 15);
	COMPANION::_0x3CAAD93FA5B9579A(iLocal_3513, 2, iVar1);
	iLocal_3514 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), -1316.67f, 2436.004f, 310.4444f, 0f, 0f, -28.99999f, 1f, 2f, 4f);
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
	func_355(iParam0);
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
	__LIB_0__::func_11();
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
	if (func_392())
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
		func_395(Local_18.f_45, 1, 1);
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
	if (func_414(&Local_18))
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

void func_130()
{
	if (!__LIB_0__::func_296(0, 0, 1))
	{
		if (!bLocal_3516)
		{
			__LIB_0__::func_401(joaat("WEATHERVOL_CHPT1_SNOWSTORM"));
			bLocal_3516 = true;
		}
	}
	else if (bLocal_3516)
	{
		__LIB_0__::func_400(joaat("WEATHERVOL_CHPT1_SNOWSTORM"));
		bLocal_3516 = false;
	}
}

int func_170(int iParam0)
{
	switch (__LIB_0__::func_317())
	{
		case 2:
			return func_519(iParam0);
		case 1:
			return func_520(iParam0);
		case 6:
			return __LIB_5__::func_889(iParam0);
		case 3:
			return __LIB_5__::func_890(iParam0);
	}
	return 0;
}

int func_184(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
				func_537(Global_1360165[iParam0 /*1157*/], vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
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

void func_272()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3515))
	{
		OBJECT::DELETE_OBJECT(&iLocal_3515);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_MARSTONBLANKET01X_COLTER"));
		bLocal_3517 = false;
	}
}

void func_274(int* iParam0)
{
	iParam0->f_1424 = 0;
}

void func_277(int* iParam0)
{
	bool bVar0;
	if ((MISC::GET_FRAME_COUNT() % 30) != 0)
	{
		return;
	}
	bVar0 = false;
	if (((((Global_1357549.f_1672 == -774242862 || Global_1357549.f_1672 == joaat("MONEY_LOANSHARK_WINTON_DEBT")) || Global_1357549.f_1672 == joaat("MONEY_LOANSHARK_GWEN_DEBT")) || Global_1357549.f_1672 == joaat("MONEY_LOANSHARK_CATFISH_DEBT")) || Global_1357549.f_1672 == joaat("MONEY_LOANSHARK_LILLY_DEBT")) || Global_1357549.f_1672 == joaat("MONEY_LOANSHARK_HORSE_CHASE_DEBT"))
	{
		if (__LIB_1__::func_198(joaat("CSTAG_FLOW_DEBT_COLLECTED"), 1) == 0)
		{
			bVar0 = true;
			__LIB_4__::func_253(joaat("CSTAG_FLOW_DEBT_COLLECTED"), 1017034651, 1120952528, -1, 1, 1, 0);
		}
	}
	else
	{
		__LIB_1__::func_449(joaat("CSTAG_FLOW_DEBT_COLLECTED"), 1, 0);
	}
	if (bVar0)
	{
		if (__LIB_0__::func_139(iParam0->f_1))
		{
			__LIB_1__::func_484(iParam0->f_1, "MONEY_LOANSHARK_ALL_DEBTS", 1);
		}
	}
	if (Global_1357549.f_1672 == 0)
	{
		if (__LIB_6__::func_395(-774242862 /* GXTEntry: "Wróbel\'s Valuables" */, 0, 0) >= 1)
		{
			__LIB_5__::func_905(-774242862 /* GXTEntry: "Wróbel\'s Valuables" */, joaat("P_MONEYSTACK01X"));
			return;
		}
		if (__LIB_6__::func_395(joaat("MONEY_LOANSHARK_WINTON_DEBT"), 0, 0) >= 1)
		{
			__LIB_5__::func_905(joaat("MONEY_LOANSHARK_WINTON_DEBT"), joaat("P_MONEYSTACK01X"));
			return;
		}
		if (__LIB_6__::func_395(joaat("MONEY_LOANSHARK_GWEN_DEBT"), 0, 0) >= 1)
		{
			__LIB_5__::func_905(joaat("MONEY_LOANSHARK_GWEN_DEBT"), joaat("P_MONEYSTACK01X"));
			return;
		}
		if (__LIB_6__::func_395(joaat("MONEY_LOANSHARK_CATFISH_DEBT"), 0, 0) >= 1)
		{
			__LIB_5__::func_905(joaat("MONEY_LOANSHARK_CATFISH_DEBT"), joaat("P_MONEYSTACK01X"));
			return;
		}
		if (__LIB_6__::func_395(joaat("MONEY_LOANSHARK_LILLY_DEBT"), 0, 0) >= 1)
		{
			__LIB_5__::func_905(joaat("MONEY_LOANSHARK_LILLY_DEBT"), joaat("P_MONEYSTACK01X"));
			return;
		}
		if (__LIB_6__::func_395(joaat("MONEY_LOANSHARK_HORSE_CHASE_DEBT"), 0, 0) >= 1)
		{
			__LIB_5__::func_905(joaat("MONEY_LOANSHARK_HORSE_CHASE_DEBT"), joaat("P_MONEYSTACK01X"));
			return;
		}
	}
}

void func_278(int* iParam0, var uParam1)
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
		__LIB_6__::func_359(iParam0);
		return;
	}
	if (__LIB_1__::func_198(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT_ACTIVE"), 1))
	{
		__LIB_6__::func_359(iParam0);
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
	__LIB_17__::func_951(iParam0, uParam1);
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
			iParam0->f_855 = __LIB_1__::func_745("BACK_TITHE", joaat("INPUT_GAME_MENU_CANCEL"), Global_35, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
		}
		else if (__LIB_1__::func_732(iParam0->f_855, 1))
		{
			AUDIO::PLAY_SOUND_FRONTEND("Back", "HUD_Camp_Status_Sounds", true, 0);
			__LIB_1__::func_748(&(iParam0->f_855), 1, 1);
			__LIB_1__::func_748(&(iParam0->f_883), 1, 1);
			__LIB_1__::func_748(&(iParam0->f_884), 1, 1);
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
					__LIB_6__::func_359(iParam0);
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

void func_355(int iParam0)
{
	__LIB_2__::func_759(0.775f, 0.2f, 0.025f, 0f);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_3514))
	{
		VOLUME::_DELETE_VOLUME(iLocal_3514);
	}
	func_272();
	__LIB_4__::func_226(1073741824 /* Float: 2f */);
	OBJECT::_0x0C0A373D181BF900(-1833460353);
	OBJECT::_0x0C0A373D181BF900(joaat("DOOR_COL_BARN_INT_2"));
	OBJECT::_0x0C0A373D181BF900(-297610092);
	OBJECT::_0x0C0A373D181BF900(joaat("DOOR_COL_BARN_INT_4"));
	OBJECT::_0x0C0A373D181BF900(1175826463);
	OBJECT::_0x0C0A373D181BF900(-6656809);
	OBJECT::_0x0C0A373D181BF900(-2111960098);
	OBJECT::_0x0C0A373D181BF900(joaat("DOOR_COL_SCHOOL_INT_1"));
	OBJECT::_0x0C0A373D181BF900(joaat("DOOR_COL_SCHOOL_INT_2"));
}

bool func_392()
{
	if (__LIB_1__::func_185(2))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-470125497, true);
	}
	else
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-470125497, false);
	}
	return true;
}

void func_395(int iParam0, bool bParam1, bool bParam2)
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
		func_808(iParam0, bParam1);
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
			__LIB_6__::func_603(iParam0);
		}
		__LIB_5__::func_931(iParam0, 1);
		if (!bParam2)
		{
			__LIB_6__::func_424(iParam0, iVar1, 1, 1);
		}
	}
	else
	{
		__LIB_6__::func_611(iParam0, &iVar0);
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

bool func_414(var uParam0)
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
			if (func_830(uParam0->f_46, 0))
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

int func_519(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return VOLUME::_CREATE_VOLUME_BOX(653.589f, -1253.396f, 44.461f, 0f, 0f, -54.05f, 3.85f, 4.6f, 5.7f);
			Jump @122; //curOff = 72
			return VOLUME::_CREATE_VOLUME_BOX(660.721f, -1257.044f, 43.797f, 0f, 0f, -14.4f, 2.15f, 3.1f, 5.7f);
			return 0;
		}
int func_520(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return VOLUME::_CREATE_VOLUME_BOX(-131.488f, -31.805f, 96.082f, 0f, 0f, -4.35f, 3.9f, 3.45f, 1.9f);
		case 1:
			return VOLUME::_CREATE_VOLUME_BOX(-117.938f, -36.055f, 95.882f, 0f, 0f, -31.4f, 3.65f, 3f, 2.5f);
	}
	return 0;
}

void func_537(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_537(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_537(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_808(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	if (bParam1 && STREAMING::_0xCF45DF50C7775F2A())
	{
		return;
	}
	Var2 = 9;
	Var2.f_1 = 12;
	Var2.f_1.f_13 = 12;
	Var2.f_1.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13.f_13.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 12;
	Var2[5 /*13*/][0] = __LIB_1__::func_976();
	Var2[5 /*13*/][1] = __LIB_1__::func_976();
	Var2[5 /*13*/][2] = __LIB_1__::func_976();
	Var2[5 /*13*/][3] = __LIB_1__::func_976();
	Var2[5 /*13*/][4] = __LIB_1__::func_976();
	Var2[5 /*13*/][5] = __LIB_1__::func_976();
	Var2[5 /*13*/][6] = __LIB_1__::func_976();
	Var2[5 /*13*/][7] = __LIB_1__::func_976();
	Var2[5 /*13*/][8] = __LIB_1__::func_976();
	Var2[5 /*13*/][9] = __LIB_1__::func_976();
	Var2[5 /*13*/][10] = __LIB_1__::func_976();
	Var2[5 /*13*/][11] = __LIB_1__::func_976();
	if (__LIB_1__::func_44(Global_1835011[59 /*74*/].f_1))
	{
		Var2[6 /*13*/][0] = __LIB_1__::func_976();
	}
	else
	{
		Var2[6 /*13*/][0] = -828094297;
	}
	Var2[6 /*13*/][1] = 1561231200;
	Var2[6 /*13*/][2] = -407402757;
	Var2[6 /*13*/][3] = -1849681615;
	Var2[6 /*13*/][4] = -981684452;
	Var2[6 /*13*/][5] = 1547347496;
	Var2[6 /*13*/][6] = -1966238128;
	if ((__LIB_0__::func_702(Global_1835011[58 /*74*/].f_1) || __LIB_1__::func_44(Global_1835011[58 /*74*/].f_1)) || __LIB_1__::func_25(Global_1835011[58 /*74*/].f_1, 1))
	{
		Var2[6 /*13*/][7] = __LIB_1__::func_976();
		if (STREAMING::_IS_IMAP_ACTIVE(-1437554707))
		{
			STREAMING::_REMOVE_IMAP(-1437554707);
		}
	}
	else
	{
		Var2[6 /*13*/][7] = -1437554707;
	}
	if (__LIB_1__::func_44(Global_1835011[58 /*74*/].f_1) || __LIB_0__::func_702(Global_1835011[58 /*74*/].f_1))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-1310355638))
		{
			STREAMING::_REMOVE_IMAP(-1310355638);
		}
		Var2[6 /*13*/][8] = 1387226336;
	}
	else
	{
		if (STREAMING::_IS_IMAP_ACTIVE(1387226336))
		{
			STREAMING::_REMOVE_IMAP(1387226336);
		}
		Var2[6 /*13*/][8] = -1310355638;
	}
	Var2[6 /*13*/][9] = -149795084;
	Var2[6 /*13*/][10] = -419935200;
	Var2[6 /*13*/][11] = -1496155572;
	Var2[0 /*13*/][0] = joaat("COL_01_CHIMNEY_SMOKE_EFFECT");
	Var2[0 /*13*/][1] = joaat("COL_02_CHIMNEY_SMOKE_EFFECT");
	Var2[0 /*13*/][2] = __LIB_1__::func_976();
	Var2[0 /*13*/][3] = __LIB_1__::func_976();
	Var2[0 /*13*/][4] = __LIB_1__::func_976();
	Var2[0 /*13*/][5] = __LIB_1__::func_976();
	Var2[0 /*13*/][6] = __LIB_1__::func_976();
	Var2[0 /*13*/][7] = __LIB_1__::func_976();
	Var2[0 /*13*/][8] = __LIB_1__::func_976();
	Var2[0 /*13*/][9] = __LIB_1__::func_976();
	Var2[0 /*13*/][10] = __LIB_1__::func_976();
	Var2[0 /*13*/][11] = __LIB_1__::func_976();
	Var2[2 /*13*/][0] = 1706275010;
	Var2[2 /*13*/][1] = joaat("DEWCLM_NORMAL_SEATS");
	Var2[2 /*13*/][2] = 1734859244;
	Var2[2 /*13*/][3] = 1309652195;
	Var2[2 /*13*/][4] = -1291679096;
	Var2[2 /*13*/][5] = 1676971154;
	Var2[2 /*13*/][6] = __LIB_6__::func_369();
	Var2[2 /*13*/][7] = -1841279810;
	Var2[2 /*13*/][8] = __LIB_6__::func_145();
	Var2[2 /*13*/][9] = __LIB_6__::func_146();
	Var2[2 /*13*/][10] = __LIB_6__::func_577();
	Var2[2 /*13*/][11] = __LIB_6__::func_578();
	Var2[4 /*13*/][0] = __LIB_1__::func_976();
	Var2[4 /*13*/][1] = __LIB_1__::func_976();
	Var2[4 /*13*/][2] = __LIB_1__::func_976();
	Var2[4 /*13*/][3] = __LIB_1__::func_976();
	Var2[4 /*13*/][4] = __LIB_1__::func_976();
	Var2[4 /*13*/][5] = __LIB_1__::func_976();
	Var2[4 /*13*/][6] = __LIB_1__::func_976();
	Var2[4 /*13*/][7] = __LIB_1__::func_976();
	Var2[4 /*13*/][8] = __LIB_1__::func_976();
	Var2[4 /*13*/][9] = __LIB_1__::func_976();
	Var2[4 /*13*/][10] = __LIB_1__::func_976();
	Var2[4 /*13*/][11] = __LIB_1__::func_976();
	Var2[1 /*13*/][0] = 288413571;
	Var2[1 /*13*/][1] = -441619793;
	Var2[1 /*13*/][2] = joaat("HSO_NORMAL_SEATS");
	Var2[1 /*13*/][3] = __LIB_6__::func_147();
	Var2[1 /*13*/][4] = -80564929;
	Var2[1 /*13*/][5] = -676881895;
	Var2[1 /*13*/][6] = -1445186253;
	Var2[1 /*13*/][7] = -1893724593;
	Var2[1 /*13*/][8] = __LIB_6__::func_579();
	Var2[1 /*13*/][9] = __LIB_6__::func_580();
	Var2[1 /*13*/][10] = __LIB_1__::func_976();
	Var2[1 /*13*/][11] = __LIB_1__::func_976();
	Var2[3 /*13*/][0] = 923572416;
	Var2[3 /*13*/][1] = joaat("SHB_NORMAL_SEATS");
	Var2[3 /*13*/][2] = -1828030290;
	Var2[3 /*13*/][3] = -960337247;
	Var2[3 /*13*/][4] = -299265919;
	Var2[3 /*13*/][5] = __LIB_1__::func_976();
	Var2[3 /*13*/][6] = __LIB_1__::func_976();
	Var2[3 /*13*/][7] = __LIB_1__::func_976();
	Var2[3 /*13*/][8] = __LIB_1__::func_976();
	Var2[3 /*13*/][9] = __LIB_1__::func_976();
	Var2[3 /*13*/][10] = __LIB_1__::func_976();
	Var2[3 /*13*/][11] = __LIB_1__::func_976();
	Var2[7 /*13*/][0] = __LIB_6__::func_97();
	Var2[7 /*13*/][1] = 764025611;
	Var2[7 /*13*/][2] = __LIB_1__::func_976();
	Var2[7 /*13*/][3] = __LIB_1__::func_976();
	Var2[7 /*13*/][4] = __LIB_1__::func_976();
	Var2[7 /*13*/][5] = __LIB_1__::func_976();
	Var2[7 /*13*/][6] = __LIB_1__::func_976();
	Var2[7 /*13*/][7] = __LIB_1__::func_976();
	Var2[7 /*13*/][8] = __LIB_1__::func_976();
	Var2[7 /*13*/][9] = __LIB_1__::func_976();
	Var2[7 /*13*/][10] = __LIB_1__::func_976();
	Var2[7 /*13*/][11] = __LIB_1__::func_976();
	Var2[8 /*13*/][0] = __LIB_1__::func_976();
	Var2[8 /*13*/][1] = __LIB_1__::func_976();
	Var2[8 /*13*/][2] = __LIB_1__::func_976();
	Var2[8 /*13*/][3] = __LIB_1__::func_976();
	Var2[8 /*13*/][4] = __LIB_1__::func_976();
	Var2[8 /*13*/][5] = __LIB_1__::func_976();
	Var2[8 /*13*/][6] = __LIB_1__::func_976();
	Var2[8 /*13*/][7] = __LIB_1__::func_976();
	Var2[8 /*13*/][8] = __LIB_1__::func_976();
	Var2[8 /*13*/][9] = __LIB_1__::func_976();
	Var2[8 /*13*/][10] = __LIB_1__::func_976();
	Var2[8 /*13*/][11] = __LIB_1__::func_976();
	if (iParam0 != 0)
	{
		__LIB_1__::func_408(-1170496998, 0, 0);
	}
	if (iParam0 == 7)
	{
		if (!__LIB_5__::func_886(2))
		{
			if (__LIB_0__::func_273(13, 4, 1))
			{
				__LIB_4__::func_524(128);
				__LIB_4__::func_495(126);
			}
			else
			{
				__LIB_4__::func_524(126);
				__LIB_4__::func_495(128);
			}
		}
		__LIB_4__::func_495(129);
	}
	else
	{
		__LIB_4__::func_524(127);
		__LIB_4__::func_524(126);
		__LIB_4__::func_524(128);
		__LIB_4__::func_524(129);
	}
	if (__LIB_1__::func_185(44))
	{
		__LIB_4__::func_495(28);
		__LIB_4__::func_524(27);
	}
	else
	{
		__LIB_4__::func_495(27);
		__LIB_4__::func_524(28);
	}
	func_1151(1, bParam1);
	if (iParam0 == 3)
	{
		if (STREAMING::_IS_IMAP_ACTIVE(809554858))
		{
			STREAMING::_REMOVE_IMAP(809554858);
		}
		__LIB_4__::func_495(2);
		__LIB_4__::func_495(7);
		__LIB_4__::func_495(8);
		__LIB_4__::func_524(1);
	}
	else
	{
		__LIB_4__::func_524(2);
		__LIB_4__::func_524(7);
		__LIB_4__::func_524(8);
	}
	if (iParam0 == 3 && __LIB_6__::func_462(joaat("DOCUMENT_BOOK_HUNTING"), 1, 0) == 0)
	{
		__LIB_4__::func_495(10);
	}
	else
	{
		__LIB_4__::func_524(10);
	}
	if (iParam0 == 3 && __LIB_6__::func_462(joaat("DOCUMENT_BOOK_FORAGING"), 1, 0) == 0)
	{
		__LIB_4__::func_495(9);
	}
	else
	{
		__LIB_4__::func_524(9);
	}
	if ((((iParam0 == 5 || iParam0 == 6) || iParam0 == 4) || iParam0 == 7) || iParam0 == 8)
	{
		if (__LIB_1__::func_25(Global_1347702[83 /*49*/].f_15, 1))
		{
			__LIB_4__::func_495(4);
		}
	}
	else
	{
		__LIB_4__::func_524(4);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (Var2[iVar0 /*13*/][iVar1] != __LIB_1__::func_976())
			{
				if (iParam0 == iVar0 && __LIB_0__::func_592() == 1)
				{
					if (!STREAMING::_IS_IMAP_ACTIVE(Var2[iVar0 /*13*/][iVar1]))
					{
						STREAMING::_REQUEST_IMAP(Var2[iVar0 /*13*/][iVar1]);
					}
				}
				else if (STREAMING::_IS_IMAP_ACTIVE(Var2[iVar0 /*13*/][iVar1]))
				{
					STREAMING::_REMOVE_IMAP(Var2[iVar0 /*13*/][iVar1]);
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

bool func_830(int iParam0, bool bParam1)
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
					if (func_184(iVar3, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1) != 0)
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

void func_1151(bool bParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	if (__LIB_6__::func_288())
	{
		if (__LIB_6__::func_10() == 0)
		{
			return;
		}
		bParam0 = true;
	}
	if ((MISC::GET_FRAME_COUNT() % 10) == 0 || bParam0)
	{
		if (__LIB_6__::func_294() == 0 || bParam0)
		{
			if (__LIB_6__::func_170() && !__LIB_1__::func_44(Global_1835011[4 /*74*/].f_1))
			{
				__LIB_6__::func_596(0, 1, bParam0);
			}
			else
			{
				__LIB_6__::func_596(0, 0, bParam0);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 10) == 0 || bParam0)
	{
		if ((__LIB_0__::func_959(1, 0) && __LIB_6__::func_104()) && __LIB_6__::func_11() == 0)
		{
			__LIB_6__::func_596(1, 1, bParam0);
		}
		else
		{
			__LIB_6__::func_596(1, 0, bParam0);
		}
	}
	bVar0 = false;
	if (__LIB_0__::func_592() == 1)
	{
		bVar0 = true;
	}
	iVar1 = __LIB_0__::func_317();
	if (bParam0)
	{
		if (!__LIB_1__::func_533(1048576))
		{
			Global_1357549.f_575 = 18;
			Global_1357549.f_575 = 0;
			while (Global_1357549.f_575 < 18)
			{
				func_1363(iVar1, 0, 0);
				Global_1357549.f_575++;
			}
			Global_1357549.f_575 = 0;
		}
	}
	else if (__LIB_1__::func_533(1048576))
	{
		func_1363(iVar1, bParam1, 1);
	}
	if (((__LIB_6__::func_288() && STREAMING::_0xCF45DF50C7775F2A() == 0) && __LIB_0__::func_298(0) == Global_1835011[4 /*74*/].f_1 == 0) && __LIB_6__::func_195())
	{
		__LIB_6__::func_295();
		uVar2 = __LIB_6__::func_12();
		__LIB_6__::func_506(iVar1, &uVar2, bVar0, __LIB_6__::func_148(), bParam1);
		if (__LIB_5__::func_862(10, 0) > 1)
		{
			if (__LIB_1__::func_198(joaat("CSTAG_DUTCH_TENT_LOW_LEVEL"), 0))
			{
				__LIB_1__::func_449(joaat("CSTAG_DUTCH_TENT_LOW_LEVEL"), 1, 0);
			}
		}
		else if (!__LIB_1__::func_198(joaat("CSTAG_DUTCH_TENT_LOW_LEVEL"), 1))
		{
			__LIB_4__::func_253(joaat("CSTAG_DUTCH_TENT_LOW_LEVEL"), 1017034651, 1120952528, -1, 1, 1, 0);
		}
		if ((__LIB_5__::func_862(10, 0) >= 3 && iVar1 == 3) && bVar0)
		{
			__LIB_4__::func_495(6);
		}
		else
		{
			__LIB_4__::func_524(6);
		}
		if (__LIB_6__::func_448(iVar1, bVar0))
		{
			if (((((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_1357549.f_1713[0]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Global_1357549.f_1713[0], true, false)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_1357549.f_1713[1])) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Global_1357549.f_1713[1], true, false)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_1357549.f_1713[2])) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Global_1357549.f_1713[2], true, false))
			{
				if (((__LIB_6__::func_196(16) != 1 && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1357549.f_1713[0], false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1357549.f_1713[1], false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1357549.f_1713[2], false))
				{
					if (__LIB_6__::func_196(16) == 2 && __LIB_5__::func_904(256) == 0)
					{
						if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
						{
							CAM::DO_SCREEN_FADE_OUT(1);
						}
						if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
						{
							CAM::DO_SCREEN_FADE_IN(7000);
						}
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Global_1357549.f_1713[0], "PBL_LEVEL_2", true);
						ANIMSCENE::START_ANIM_SCENE(Global_1357549.f_1713[0]);
						__LIB_5__::func_812(256);
					}
					else if (__LIB_6__::func_196(16) == 3 && __LIB_5__::func_904(512) == 0)
					{
						if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
						{
							CAM::DO_SCREEN_FADE_OUT(1);
						}
						if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
						{
							CAM::DO_SCREEN_FADE_IN(7000);
						}
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Global_1357549.f_1713[1], "PBL_LEVEL_3", true);
						ANIMSCENE::START_ANIM_SCENE(Global_1357549.f_1713[1]);
						__LIB_5__::func_812(512);
					}
					else if (__LIB_6__::func_196(16) == 4 && __LIB_5__::func_904(1024) == 0)
					{
						if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
						{
							CAM::DO_SCREEN_FADE_OUT(1);
						}
						if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
						{
							CAM::DO_SCREEN_FADE_IN(7000);
						}
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Global_1357549.f_1713[2], "PBL_LEVEL_4", true);
						ANIMSCENE::START_ANIM_SCENE(Global_1357549.f_1713[2]);
						__LIB_5__::func_812(1024);
					}
				}
			}
		}
	}
	if (__LIB_0__::func_298(0) == Global_1835011[4 /*74*/].f_1)
	{
		if (STREAMING::_IS_IMAP_ACTIVE(825179479) == 0)
		{
			STREAMING::_REQUEST_IMAP(825179479);
		}
	}
}

void func_1363(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || iParam0 == 1)
	{
		__LIB_6__::func_450(iParam0, 0);
	}
	if (!bParam1 || iParam0 == 2)
	{
		__LIB_6__::func_451(iParam0, 0);
	}
	if (!bParam1 || iParam0 == 3)
	{
		func_1498(iParam0, 0);
	}
	if (!bParam1 || iParam0 == 6)
	{
		__LIB_6__::func_452(iParam0, 0);
	}
	if (bParam2)
	{
		Global_1357549.f_575++;
		if (Global_1357549.f_575 >= 18)
		{
			Global_1357549.f_575 = 0;
		}
	}
}

void func_1498(int iParam0, bool bParam1)
{
	int iVar0[18];
	int iVar19[18];
	int iVar38[6];
	int iVar45[6];
	int iVar52;
	int iVar53;
	bool bVar54;
	bool bVar55;
	iVar0[0] = 2137149309;
	iVar19[0] = -134624703;
	iVar0[1] = -147867326; /* GXTEntry: "Cougar Pelt Covered Chest" */
	iVar19[1] = __LIB_1__::func_976();
	iVar0[2] = -1262979941; /* GXTEntry: "Ox Hide Rug" */
	iVar19[2] = __LIB_1__::func_976();
	iVar0[3] = -2119627968; /* GXTEntry: "Boar Skin Table Cover" */
	iVar19[3] = __LIB_1__::func_976();
	iVar0[4] = -837651311; /* GXTEntry: "Big Horn Ram Skull" */
	iVar19[4] = __LIB_1__::func_976();
	iVar0[5] = -2089261255; /* GXTEntry: "Alligator Skull" */
	iVar19[5] = __LIB_1__::func_976();
	iVar0[6] = -1145367359; /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[6] = -1535722316;
	iVar0[7] = -1145367359; /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[7] = 1547994518;
	iVar0[8] = -1608451354; /* GXTEntry: "Boar Skin Rug" */
	iVar19[8] = __LIB_1__::func_976();
	iVar0[9] = -1329287819; /* GXTEntry: "Pronghorn Skull" */
	iVar19[9] = -910918420;
	iVar0[10] = -848232571; /* GXTEntry: "Elk Antlers" */
	iVar19[10] = 495480888;
	iVar0[11] = -804860583; /* GXTEntry: "Scout Fire Ground Cover" */
	iVar19[11] = 2004706822;
	iVar0[12] = 1510372288; /* GXTEntry: "Moose Antlers" */
	iVar19[12] = 884576413;
	iVar0[13] = -7810518; /* GXTEntry: "Hanging Bones" */
	iVar19[13] = 778703691;
	iVar0[14] = -224845272; /* GXTEntry: "Campfire Log Seat Cover" */
	iVar19[14] = -421730990;
	iVar0[15] = 858182906; /* GXTEntry: "Campfire Seat Cover" */
	iVar19[15] = 514406510;
	iVar0[16] = 765991018; /* GXTEntry: "Wolf Skull" */
	iVar19[16] = -327708229;
	iVar0[17] = 708084994; /* GXTEntry: "Snake Skin Banjo Head" */
	iVar19[17] = 1048845581;
	if (iParam0 == 3 && ((__LIB_6__::func_462(iVar0[Global_1357549.f_575], 1, 0) || __LIB_6__::func_114(iVar0[Global_1357549.f_575])) || bParam1))
	{
		if (__LIB_0__::func_30(iVar19[Global_1357549.f_575]))
		{
			if (!STREAMING::_IS_IMAP_ACTIVE(iVar19[Global_1357549.f_575]))
			{
				__LIB_5__::func_993(iVar19[Global_1357549.f_575], 1);
				__LIB_6__::func_28(iVar19[Global_1357549.f_575]);
			}
		}
	}
	else if (__LIB_0__::func_30(iVar19[Global_1357549.f_575]))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(iVar19[Global_1357549.f_575]))
		{
			__LIB_5__::func_993(iVar19[Global_1357549.f_575], 0);
			STREAMING::_REMOVE_IMAP(iVar19[Global_1357549.f_575]);
		}
	}
	iVar38[0] = -1608451354; /* GXTEntry: "Boar Skin Rug" */
	iVar45[0] = 11;
	iVar38[1] = -147867326; /* GXTEntry: "Cougar Pelt Covered Chest" */
	iVar45[1] = 12;
	iVar38[2] = -1262979941; /* GXTEntry: "Ox Hide Rug" */
	iVar45[2] = 13;
	iVar38[3] = -837651311; /* GXTEntry: "Big Horn Ram Skull" */
	iVar45[3] = 14;
	iVar38[4] = -2119627968; /* GXTEntry: "Boar Skin Table Cover" */
	iVar45[4] = 16;
	iVar38[5] = -2089261255; /* GXTEntry: "Alligator Skull" */
	iVar45[5] = 15;
	bVar55 = false;
	iVar52 = 0;
	while (iVar52 < 6)
	{
		if (iParam0 == 3)
		{
			iVar53 = __LIB_6__::func_327(iVar38[iVar52], 3);
			bVar54 = __LIB_6__::func_114(iVar38[iVar52]);
			bVar55 = (iVar53 > 0 || bVar54);
		}
		if (bVar55 || bParam1)
		{
			if (__LIB_6__::func_497(iVar45[iVar52]) == 0)
			{
				__LIB_4__::func_495(iVar45[iVar52]);
			}
		}
		else if (__LIB_6__::func_497(iVar45[iVar52]))
		{
			__LIB_4__::func_524(iVar45[iVar52]);
		}
		iVar52++;
	}
}

