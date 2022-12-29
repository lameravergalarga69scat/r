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
	var uLocal_3521 = 0;
	var uLocal_3522 = 0;
	var uLocal_3523 = 0;
	var uLocal_3524 = 0;
	int iLocal_3525 = 0;
	int iLocal_3526 = 0;
	vector3 vLocal_3527 = { 0f, 0f, 0f };
	vector3 vLocal_3530 = { 0f, 0f, 0f };
	vector3 vLocal_3533 = { 0f, 0f, 0f };
	vector3 vLocal_3536 = { 0f, 0f, 0f };
	vector3 vLocal_3539 = { 0f, 0f, 0f };
	int iLocal_3542 = 0;
	int iLocal_3543 = 0;
	int iLocal_3544 = 0;
	int iLocal_3545 = 0;
	struct<4> Local_3546[13];
	var uLocal_3599 = 0;
	var uLocal_3600 = 0;
	int iLocal_3601 = 0;
	var uLocal_3602 = 0;
	var uLocal_3603 = 0;
	var uLocal_3604 = 0;
	vector3 vLocal_3605 = { 0f, 0f, 0f };
	var uLocal_3608 = 0;
	var uLocal_3609 = 0;
	var uLocal_3610 = 0;
	int iLocal_3611 = 0;
	int iLocal_3612 = 0;
	int iLocal_3613 = 0;
	vector3 vLocal_3614 = { 0f, 0f, 0f };
	var uLocal_3617 = 0;
	var uLocal_3618 = 0;
	struct<8> Local_3619[9];
	int iLocal_3692 = 0;
	int iLocal_3693 = 0;
	var uLocal_3694 = 0;
	var uLocal_3695 = 0;
	var uLocal_3696 = 0;
	vector3 vLocal_3697 = { 0f, 0f, 0f };
	int iLocal_3700 = 0;
	var uLocal_3701 = 0;
	vector3 vLocal_3702 = { 0f, 0f, 0f };
	int iLocal_3705 = 0;
	var uLocal_3706 = 0;
	vector3 vLocal_3707 = { 0f, 0f, 0f };
	int iLocal_3710 = 0;
	var uLocal_3711 = 0;
	vector3 vLocal_3712 = { 0f, 0f, 0f };
	struct<8> Local_3715[3];
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
	vLocal_3527 = { -126.5237f, -21.88221f, 95.2319f };
	vLocal_3530 = { -124.78f, -25.25f, 95f };
	vLocal_3533 = { -0.28f, -2.15f, 117.43f };
	vLocal_3536 = { -150.57f, -16.98f, 96.1f };
	vLocal_3539 = { 3f, 0f, 30.09f };
	iLocal_3543 = -1;
	iLocal_3544 = joaat("UI_DOC_BILLNOTE");
	iLocal_3545 = joaat("WORLD_PLAYER_INSPECT_LETTER_80CM_PAPER_W18_9_H28_2_FOLDVERTICALX2_P_CS_LETTERFOLDED02X");
	iLocal_3601 = joaat("WORLD_PLAYER_INSPECT_LETTER_45CM_PAPER_W15_1_H24_FOLDVERTICAL_S_MOLLYLOVELETTER");
	vLocal_3605 = { -129.2325f, -30.70663f, 95.17754f };
	vLocal_3614 = { -133.2737f, -18.5626f, 95.1277f };
	iLocal_3692 = joaat("UI_LETTER_LENNY");
	iLocal_3693 = joaat("WORLD_PLAYER_INSPECT_LETTER_45CM_PAPER_W15_1_H24_FOLDVERTICAL_P_CS_LETTER03X");
	vLocal_3697 = { -125.1681f, -20.76582f, 95.20019f };
	iLocal_3700 = joaat("UI_PHOTO_ARTDAD");
	vLocal_3702 = { -124.2284f, -40.4813f, 95.9403f };
	iLocal_3705 = joaat("UI_PHOTO_ARTDOG");
	vLocal_3707 = { -124.2487f, -40.5621f, 95.7722f };
	iLocal_3710 = joaat("UI_PHOTO_ARTGANG");
	vLocal_3712 = { -124.1397f, -40.1002f, 95.7596f };
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
					func_30();
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
	__LIB_5__::func_808(0, 14173, 0);
	__LIB_5__::func_808(1, 14530, 1);
	__LIB_5__::func_808(2, 14546, 1);
	__LIB_5__::func_808(3, 14609, 1);
	__LIB_5__::func_808(4, 14640, 2);
	__LIB_5__::func_808(5, 14754, 16);
	__LIB_5__::func_808(6, 14889, 1);
	__LIB_5__::func_808(7, 15503, 4);
	__LIB_5__::func_808(8, 15597, 1);
	__LIB_5__::func_808(9, 15727, 128);
	__LIB_5__::func_808(10, 15736, 792);
	__LIB_5__::func_808(11, 15784, 1024);
}

void func_6(var uParam0)
{
	struct<2> Var0;
	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(uParam0, &Var0, 65);
	__LIB_5__::func_813(uParam0, 0, 16466, 16570, 17009);
	__LIB_5__::func_813(uParam0, 1, 17297, 17343, 17809);
	__LIB_5__::func_813(uParam0, 2, 17839, 17877, 18305);
	__LIB_5__::func_813(uParam0, 3, 18335, 18361, 18440);
	__LIB_5__::func_813(uParam0, 4, 18448, 18602, 18440);
	__LIB_6__::func_268(uParam0, 0);
}

void func_7(var uParam0)
{
	struct<2> Var0;
	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(uParam0, &Var0, 65);
	__LIB_5__::func_813(uParam0, 0, 18674, 18752, 18440);
	__LIB_5__::func_813(uParam0, 1, 19908, 20035, 18440);
	__LIB_5__::func_813(uParam0, 2, 18440, 20877, 18440);
	__LIB_5__::func_813(uParam0, 3, 21035, 21581, 18440);
	__LIB_5__::func_813(uParam0, 4, 22209, 22439, 18440);
	__LIB_5__::func_813(uParam0, 5, 22862, 22895, 18440);
	__LIB_5__::func_813(uParam0, 6, 23612, 23697, 18440);
	__LIB_6__::func_268(uParam0, 0);
}

void func_8(var uParam0)
{
	struct<2> Var0;
	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(uParam0, &Var0, 65);
	__LIB_5__::func_813(uParam0, 0, 23752, 23834, 18440);
	__LIB_5__::func_813(uParam0, 1, 24155, 24191, 18440);
	__LIB_5__::func_813(uParam0, 2, 24660, 24791, 25200);
	__LIB_5__::func_813(uParam0, 3, 25219, 25286, 25690);
	__LIB_6__::func_268(uParam0, 0);
}

void func_9()
{
	struct<2> Var0;
	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(&(Local_18.f_1934), &Var0, 65);
	__LIB_5__::func_813(&(Local_18.f_1934), 0, 25759, 25796, 18440);
	__LIB_5__::func_813(&(Local_18.f_1934), 1, 25979, 26002, 18440);
	__LIB_5__::func_813(&(Local_18.f_1934), 2, 26207, 26254, 18440);
	__LIB_5__::func_813(&(Local_18.f_1934), 3, 26528, 26579, 18440);
	__LIB_5__::func_813(&(Local_18.f_1934), 4, 26598, 26654, 18440);
	__LIB_6__::func_268(&(Local_18.f_1934), 0);
}

void func_10(var uParam0)
{
	if (__LIB_1__::func_185(11) && __LIB_1__::func_185(14))
	{
		if ((__LIB_5__::func_353(66) || __LIB_1__::func_200(66)) || __LIB_2__::func_774(10))
		{
			if (__LIB_0__::func_592() != 2)
			{
				__LIB_0__::func_400(1453569688);
				__LIB_0__::func_400(1948051928);
				__LIB_11__::func_381(2);
			}
		}
	}
	if (__LIB_1__::func_185(11) && __LIB_1__::func_185(10))
	{
		if ((__LIB_5__::func_353(66) || __LIB_1__::func_200(66)) || __LIB_2__::func_774(14))
		{
			if (__LIB_0__::func_592() != 2)
			{
				__LIB_0__::func_400(1453569688);
				__LIB_0__::func_400(1948051928);
				__LIB_11__::func_381(2);
			}
		}
	}
	uParam0->f_45 = 1;
	uParam0->f_47 = 4;
	uParam0->f_1714 = { __LIB_6__::func_188(uParam0->f_45) };
	uParam0->f_1717 = 185.9281f;
	uParam0->f_49 = 1;
	__LIB_6__::func_189(&(Local_3546[0 /*4*/]), joaat("PERSCHAR_CAMP_ROOSTER"), 3, "horseshoeOverlook/hso_default_chickens");
	__LIB_6__::func_189(&(Local_3546[1 /*4*/]), joaat("PERSCHAR_CAMP_CHICKEN_1"), 0, "horseshoeOverlook/hso_default_chickens");
	__LIB_6__::func_189(&(Local_3546[2 /*4*/]), joaat("PERSCHAR_CAMP_CHICKEN_2"), 0, "horseshoeOverlook/hso_default_chickens");
	__LIB_6__::func_189(&(Local_3546[3 /*4*/]), joaat("PERSCHAR_CAMP_CHICKEN_3"), 0, "horseshoeOverlook/hso_default_chickens");
	__LIB_6__::func_189(&(Local_3546[4 /*4*/]), joaat("PERSCHAR_CAMP_CHICKEN_4"), 0, "horseshoeOverlook/hso_default_chickens");
	__LIB_6__::func_189(&(Local_3546[5 /*4*/]), joaat("PERSCHAR_CAMP_CHICKEN_5"), 0, "horseshoeOverlook/hso_default_chickens");
	__LIB_3__::func_414(&uLocal_3618, -96.2971f, -47.12384f, 94.63447f, 1.75f, 1, -1, 0);
	__LIB_3__::func_414(&uLocal_3617, -96.2971f, -47.12384f, 94.63447f, 3.5f, 2, -1, 0);
	if (__LIB_0__::func_592() != 2)
	{
		func_134();
		func_135();
	}
	__LIB_17__::func_965();
	if (__LIB_2__::func_774(4) || __LIB_1__::func_198(joaat("CSTAG_FLOW_FIRST_VISIT_MUD1_POST"), 1))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1743334193, false);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-328743291, true);
	}
	else
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-328743291, false);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1743334193, true);
	}
	if (!__LIB_1__::func_198(joaat("CSTAG_NEW_CAMP_FIRST_VISIT"), 1))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1540981092, true);
	}
	if (__LIB_6__::func_547(6))
	{
		STREAMING::REQUEST_MODEL(joaat("P_CS_BOOK_SHREW_A"), false);
	}
	if (__LIB_6__::func_547(8))
	{
		iLocal_3542 = __LIB_6__::func_548();
		STREAMING::REQUEST_MODEL(iLocal_3542, false);
	}
	Global_1357549.f_1713[0] = ANIMSCENE::_CREATE_ANIM_SCENE("script@camp_upgrade@horseshoe_overlook", 0, 0, false, true);
	Global_1357549.f_1713[1] = ANIMSCENE::_CREATE_ANIM_SCENE("script@camp_upgrade@horseshoe_overlook", 0, 0, false, true);
	Global_1357549.f_1713[2] = ANIMSCENE::_CREATE_ANIM_SCENE("script@camp_upgrade@horseshoe_overlook", 0, 0, false, true);
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
						func_192(Global_1357549.f_1659[iVar2], 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
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

void func_30()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	if (__LIB_0__::func_396(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_MOUNT(PLAYER::PLAYER_PED_ID());
	}
	else
	{
		iVar0 = PED::_GET_LAST_MOUNT(PLAYER::PLAYER_PED_ID());
	}
	if (__LIB_6__::func_155(iVar0))
	{
		if (__LIB_6__::func_276(iVar0) && __LIB_0__::func_126(iVar0))
		{
			if (Global_1357549.f_1897 != iVar0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1357549.f_1897))
				{
					__LIB_6__::func_458();
				}
				func_237(iVar0, Local_18.f_45, 1);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Global_1357549.f_1897) && Global_1357549.f_1897 == iVar0)
		{
			__LIB_6__::func_458();
		}
		else if ((ENTITY::DOES_ENTITY_EXIST(Global_1357549.f_1897) && Global_1357549.f_1897 != iVar0) && __LIB_0__::func_396(PLAYER::PLAYER_PED_ID()))
		{
			iVar1 = __LIB_5__::func_835(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 2);
			if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar1))
			{
				if (__LIB_0__::func_94(iVar0, TASK::_GET_SCENARIO_POINT_COORDS(iVar1, true), 1) < 8f)
				{
					if (!__LIB_0__::func_474(604))
					{
						__LIB_1__::func_240(604, 0);
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1357549.f_1897))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_1357549.f_1897) && __LIB_6__::func_155(Global_1357549.f_1897))
		{
			if (!MAP::DOES_BLIP_EXIST(Global_1357549.f_1897.f_1))
			{
				if (!MAP::_DOES_ENTITY_HAVE_BLIP(Global_1357549.f_1897))
				{
					Global_1357549.f_1897.f_1 = MAP::_BLIP_ADD_FOR_ENTITY(-1230993421, Global_1357549.f_1897);
					MAP::_BLIP_SET_MODIFIER(Global_1357549.f_1897.f_1, 287169430);
					MAP::_BLIP_SET_MODIFIER(Global_1357549.f_1897.f_1, -201249929);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1357549.f_1897.f_1, "BLIP_CAMP_HORSE");
				}
			}
			else if (MAP::GET_BLIP_FROM_ENTITY(Global_1357549.f_1897) != Global_1357549.f_1897.f_1)
			{
				MAP::REMOVE_BLIP(&(Global_1357549.f_1897.f_1));
			}
		}
		else
		{
			if (MAP::DOES_BLIP_EXIST(Global_1357549.f_1897.f_1))
			{
				MAP::REMOVE_BLIP(&(Global_1357549.f_1897.f_1));
			}
			if (Global_40.f_4283.f_567)
			{
				__LIB_6__::func_458();
			}
		}
	}
	else if (MAP::DOES_BLIP_EXIST(Global_1357549.f_1897.f_1))
	{
		MAP::REMOVE_BLIP(&(Global_1357549.f_1897.f_1));
	}
}

void func_42(int iParam0)
{
	__LIB_17__::func_943(&Local_3715, 9);
	__LIB_17__::func_946(0, 0);
	__LIB_6__::func_351(&uLocal_3600, &uLocal_3524, &uLocal_3523, vLocal_3527, iLocal_3544, joaat("DOCUMENT_LETTER_BILL_DISCHARGE"), iLocal_3545);
	__LIB_6__::func_351(&uLocal_3694, &uLocal_3696, &uLocal_3695, vLocal_3697, iLocal_3692, -1915584842 /* GXTEntry: "Letter from Lenny\'s Father" */, iLocal_3693);
	__LIB_6__::func_352(&uLocal_3701, &(Local_3715[0 /*8*/].f_1), vLocal_3702, iLocal_3700, joaat("DOCUMENT_PHOTO_ARTHUR_FATHER"));
	__LIB_6__::func_352(&uLocal_3711, &(Local_3715[1 /*8*/].f_1), vLocal_3712, iLocal_3710, joaat("DOCUMENT_PHOTO_DUTCH_HOSEA"));
	__LIB_6__::func_352(&uLocal_3706, &(Local_3715[2 /*8*/].f_1), vLocal_3707, iLocal_3705, joaat("DOCUMENT_PHOTO_ARTHUR_DOG"));
	__LIB_6__::func_567(&uLocal_3602, &uLocal_3603, &uLocal_3604, vLocal_3605, -1309546012 /* GXTEntry: "Molly\'s Poem" */, iLocal_3601);
	__LIB_6__::func_648(&uLocal_3520, &uLocal_3521, &uLocal_3522, &uLocal_3514);
	__LIB_6__::func_585(&uLocal_3521, &uLocal_3514);
	func_283(&iLocal_3518, &uLocal_3519);
	__LIB_17__::func_944(0);
	__LIB_6__::func_556(&Local_3546, &uLocal_3599, &iLocal_3543, 0);
	func_286();
	func_287();
	func_288();
	func_289(&(iParam0->f_51), &Local_3619);
}

void func_45(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iParam0->f_1713 = 18;
	iVar0 = 0;
	Global_1357549.f_3[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("HorseshoeOverlook volCampAreas[CVA_INNER]");
	__LIB_6__::func_354(&(Global_1357549.f_3[0]), &iVar0, 0, -116.0424f, -40.11957f, 97.5f, 0f, 0f, -9.000002f, 12f, 6.5f, 35f, joaat("VOLCYLINDER"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[0]), &iVar0, 0, -125.2808f, -30.65805f, 97.5f, 0f, 0f, -48.00006f, 16f, 10.5f, 35f, joaat("VOLCYLINDER"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[0]), &iVar0, 0, -137.2752f, -39.81249f, 97.5f, 0f, 0f, -171f, 14f, 8.5f, 35f, joaat("VOLCYLINDER"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[0]), &iVar0, 0, -141.0166f, -22.79931f, 97.5f, 0f, 0f, 60.00002f, 10.5f, 16f, 35f, joaat("VOLCYLINDER"), 0);
	Global_1357549.f_3[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("HorseshoeOverlook volCampAreas[CVA_WALK]");
	__LIB_6__::func_354(&(Global_1357549.f_3[1]), &iVar0, 1, -133.0255f, -32.84394f, 118.6987f, 0f, 0f, -26.32965f, 31.28963f, 19.89706f, 28.40585f, joaat("VOLCYLINDER"), 0);
	Global_1357549.f_3[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("HorseshoeOverlook volCampAreas[CVA_OUTER]");
	Global_1357549.f_3[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("HorseshoeOverlook volCampAreas[CVA_OUTER_THRESHOLD]");
	__LIB_6__::func_354(&(Global_1357549.f_3[2]), &(Global_1357549.f_3[3]), 2, -118.5499f, -30.44764f, 110.3997f, 0f, 0f, 99f, 54f, 31f, 35f, joaat("VOLCYLINDER"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[2]), &(Global_1357549.f_3[3]), 2, -140.179f, -28.55973f, 110.3997f, 0f, 0f, -15f, 49f, 38f, 41f, joaat("VOLCYLINDER"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[2]), &(Global_1357549.f_3[3]), 2, -90.35419f, -39.31744f, 115.569f, 0f, 0f, -90.00005f, 22f, 13f, 40f, joaat("VOLCYLINDER"), 0);
	Global_1357549.f_3[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("HorseshoeOverlook volCampAreas[CVA_SURROUNDING]");
	Global_1357549.f_3[5] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("HorseshoeOverlook volCampAreas[CVA_SURROUNDING_THRESHOLD]");
	__LIB_6__::func_354(&(Global_1357549.f_3[4]), &(Global_1357549.f_3[5]), 4, -118.3386f, -24.85262f, 96.9073f, 0f, 0f, 0f, 88f, 73f, 37f, joaat("VOLCYLINDER"), 0);
	Global_1357549.f_3[6] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-124.8948f, -38.66504f, 95.53986f, 0f, 0f, 81.38278f, 6.094582f, 8.5f, 4.687306f, "HorseshoeOverlook volCampAreas[CVA_PROPERTY]");
	iLocal_3516 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-140.596f, -42.195f, 96.169f, 0f, 0f, 12.383f, 10.108f, 10.412f, 4.972f, "HorseshoeOverlook - m_volEntityRestrictionfire");
	iLocal_3517 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-111.0559f, -24.1189f, 96.61141f, 0f, 0f, 15.59025f, 9.401265f, 20.21193f, 4.721874f, "HorseshoeOverlook - volMuster");
	iVar1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-124.5044f, -38.72419f, 95.53986f, 0f, 0f, 81.38274f, 6.094582f, 7.233094f, 4.687306f, "Overlook - eITEM_OVERLOOK_HORSESHOE");
	Local_18.f_3057[4 /*21*/].f_4 = iVar1;
	iVar2 = 0;
	__LIB_0__::func_495(&iVar2, 5);
	__LIB_0__::func_495(&iVar2, 0);
	__LIB_0__::func_495(&iVar2, 13);
	iVar3 = 0;
	__LIB_0__::func_495(&iVar3, 4);
	__LIB_0__::func_495(&iVar3, 5);
	__LIB_0__::func_495(&iVar3, 0);
	__LIB_0__::func_495(&iVar3, 15);
	COMPANION::_0x3CAAD93FA5B9579A(iLocal_3516, 2, iVar2);
	COMPANION::_0x3CAAD93FA5B9579A(iLocal_3517, 2, iVar3);
	if (__LIB_0__::func_592() == 1)
	{
		__LIB_6__::func_613(1, iParam0->f_46);
	}
	else
	{
		__LIB_6__::func_467(1);
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
	func_372(iParam0);
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
	if (func_409())
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
	if (func_431(&Local_18))
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
	__LIB_6__::func_636(&Local_18);
	__LIB_0__::func_11();
	__LIB_6__::func_610(&(Local_18.f_51));
	func_436();
	__LIB_5__::func_871();
	__LIB_6__::func_627(1);
	__LIB_0__::func_11();
	__LIB_6__::func_486();
	return 1;
}

void func_134()
{
	Local_18.f_3057[4 /*21*/].f_6 = { -124.2004f, -40.3599f, 95.6897f };
	Local_18.f_3057[4 /*21*/].f_9 = { -124.7208f, -39.6517f, 95.8729f };
	Local_18.f_3057[4 /*21*/].f_12 = { -3.1367f, 0f, -142.48f };
	Local_18.f_3057[4 /*21*/].f_15 = 51.035f;
	Local_18.f_3057[4 /*21*/].f_16 = joaat("INPUT_CAMP_BED_INSPECT");
	Local_18.f_3057[4 /*21*/].f_18 = 1057677739;
	Local_18.f_3057[4 /*21*/].f_19 = 1;
	Local_18.f_3057[4 /*21*/].f_20 = "VI_HSHOE";
	Local_18.f_3057[5 /*21*/].f_6 = { vLocal_3702 };
	Local_18.f_3057[5 /*21*/].f_9 = { -124.3935f, -40.38f, 95.9882f };
	Local_18.f_3057[5 /*21*/].f_12 = { -7.0259f, 0f, -116.6003f };
	Local_18.f_3057[5 /*21*/].f_15 = 51.282f;
	Local_18.f_3057[5 /*21*/].f_16 = joaat("INPUT_CAMP_BED_INSPECT");
	Local_18.f_3057[5 /*21*/].f_19 = 1;
	Local_18.f_3057[5 /*21*/].f_20 = "VI_ADAD";
	Local_18.f_3057[6 /*21*/].f_6 = { vLocal_3707 };
	Local_18.f_3057[6 /*21*/].f_9 = { -124.4463f, -40.4467f, 95.7985f };
	Local_18.f_3057[6 /*21*/].f_12 = { -5.5584f, 0f, -118.3541f };
	Local_18.f_3057[6 /*21*/].f_15 = 51.282f;
	Local_18.f_3057[6 /*21*/].f_16 = joaat("INPUT_CAMP_BED_INSPECT");
	Local_18.f_3057[6 /*21*/].f_19 = 1;
	Local_18.f_3057[6 /*21*/].f_20 = "VI_ADOG";
	Local_18.f_3057[7 /*21*/].f_6 = { vLocal_3712 };
	Local_18.f_3057[7 /*21*/].f_9 = { -124.4517f, -39.9709f, 95.7975f };
	Local_18.f_3057[7 /*21*/].f_12 = { -2.793f, 0f, -111.3325f };
	Local_18.f_3057[7 /*21*/].f_15 = 51.282f;
	Local_18.f_3057[7 /*21*/].f_16 = joaat("INPUT_CAMP_BED_INSPECT");
	Local_18.f_3057[7 /*21*/].f_19 = 1;
	Local_18.f_3057[7 /*21*/].f_20 = "VI_HOSEA";
}

void func_135()
{
	Local_3715[0 /*8*/].f_6 = joaat("P_CS_PHOTO_4X6");
	Local_3715[0 /*8*/].f_3 = { vLocal_3702 };
	Local_3715[2 /*8*/].f_6 = joaat("P_CS_PHOTO_4X6");
	Local_3715[2 /*8*/].f_3 = { vLocal_3707 };
	Local_3715[1 /*8*/].f_6 = joaat("P_CS_PHOTO_5X7");
	Local_3715[1 /*8*/].f_3 = { vLocal_3707 };
	iLocal_3513 = 0;
}

int func_192(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
				func_553(Global_1360165[iParam0 /*1157*/], vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
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
			func_562(iParam0, Global_1360165[iParam0 /*1157*/]);
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

void func_237(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_1357549.f_1897 = iParam0;
	}
	Global_40.f_4283.f_567 = 1;
	Global_40.f_4283.f_567.f_1 = uParam1;
	Global_40.f_4283.f_567.f_2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	Global_40.f_4283.f_567.f_5 = ENTITY::GET_ENTITY_HEADING(iParam0);
	Global_40.f_4283.f_567.f_6 = __LIB_5__::func_773(iParam0);
	func_602(iParam0);
}

void func_283(int iParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	if ((MISC::GET_FRAME_COUNT() % 50) == 0)
	{
		if (__LIB_6__::func_201())
		{
			if (__LIB_5__::func_975(4) == 0)
			{
				__LIB_5__::func_775(4);
			}
		}
		else if (__LIB_5__::func_975(4))
		{
			__LIB_5__::func_976(4);
		}
	}
	if (__LIB_5__::func_975(4))
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(*iParam0))
		{
			if (!__LIB_2__::func_776())
			{
				if (__LIB_6__::func_202(&vVar0, &vVar3, &vVar6))
				{
					*iParam0 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), vVar0, vVar3, vVar6);
					VOLUME::_0x5B23DFF8E0948BB2(*iParam0, 1);
				}
			}
		}
		else if (__LIB_2__::func_776())
		{
			VOLUME::_DELETE_VOLUME(*iParam0);
		}
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		VOLUME::_DELETE_VOLUME(*iParam0);
	}
	if ((MISC::GET_FRAME_COUNT() % 50) == 0)
	{
		if (__LIB_6__::func_203())
		{
			if (__LIB_5__::func_975(32) == 0)
			{
				__LIB_5__::func_775(32);
			}
		}
		else if (__LIB_5__::func_975(32))
		{
			__LIB_5__::func_976(32);
		}
	}
	if (__LIB_5__::func_975(32))
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			if (!__LIB_2__::func_776())
			{
				if (__LIB_6__::func_204(&vVar0, &vVar3, &vVar6))
				{
					*uParam1 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), vVar0, vVar3, vVar6);
					VOLUME::_0x5B23DFF8E0948BB2(*uParam1, 1);
				}
			}
		}
		else if (__LIB_2__::func_776())
		{
			VOLUME::_DELETE_VOLUME(*uParam1);
		}
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
	{
		VOLUME::_DELETE_VOLUME(*uParam1);
	}
}

void func_286()
{
	if (iLocal_3611 == 0)
	{
		iLocal_3611 = ENTITY::_0x6F3068258A499E52(joaat("S_COOKFIRE01X"), vLocal_3614, 11);
	}
	else if (!__LIB_0__::func_75(&uLocal_3608) || __LIB_0__::func_265(&uLocal_3608) > 1.1f)
	{
		__LIB_1__::func_148(&uLocal_3608);
		if (ENTITY::_0x1FF441D7954F8709(iLocal_3611))
		{
			iLocal_3612 = ENTITY::_0x4735E2A4BB83D9DA(iLocal_3611);
			iLocal_3613 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iLocal_3612);
		}
		if (iLocal_3611 != 0 && ENTITY::DOES_ENTITY_EXIST(iLocal_3612))
		{
			__LIB_6__::func_557(iLocal_3612, iLocal_3613, vLocal_3614);
		}
	}
}

void func_287()
{
	if (__LIB_1__::func_198(joaat("CSTAG_FLOW_FIRST_VISIT_MUD1_POST"), 1))
	{
		if (!__LIB_5__::func_904(1048576))
		{
			if (TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(1743334193))
			{
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1743334193, false);
			}
			if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-328743291))
			{
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-328743291, true);
			}
			__LIB_5__::func_812(1048576);
		}
	}
	else if (__LIB_5__::func_904(1048576))
	{
		if (TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-328743291))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-328743291, false);
		}
		if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(1743334193) && !__LIB_1__::func_198(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"), 1))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1743334193, true);
		}
		__LIB_5__::func_937(1048576);
	}
}

void func_288()
{
	if (__LIB_1__::func_198(joaat("CSTAG_FLOW_DEBT_COLLECTED"), 1))
	{
		if (!__LIB_5__::func_886(8))
		{
			if ((AUDIO::_0x6BFFB7C276866996(Global_35) == joaat("GREET_STRAUSS_CLOSER_DEBT_COLLECTED_CONV1") || AUDIO::_0x6BFFB7C276866996(Global_35) == joaat("GREET_STRAUSS_CLOSER_DEBT_COLLECTED_CONV2")) || AUDIO::_0x6BFFB7C276866996(Global_35) == joaat("GREET_STRAUSS_CLOSER_DEBT_COLLECTED_CONV3"))
			{
				__LIB_6__::func_799(joaat("CGO_DEBT_COLLECTED_GREETS_PLAYER"));
				func_720(18, joaat("CGO_DEBT_COLLECTED_STRAUSS"));
				__LIB_6__::func_549(8);
			}
		}
	}
	if (__LIB_1__::func_198(joaat("CSTAG_FLOW_DEBT_CONTRIBUTED"), 1))
	{
		if (!__LIB_5__::func_886(16))
		{
			if ((((AUDIO::_0x6BFFB7C276866996(Global_35) == joaat("GREET_STRAUSS_CLOSER_DEBT_CONTRIBUTED_CONV1") || AUDIO::_0x6BFFB7C276866996(Global_35) == joaat("GREET_STRAUSS_CLOSER_DEBT_CONTRIBUTED_CONV2")) || AUDIO::_0x6BFFB7C276866996(Global_35) == joaat("GREET_STRAUSS_CLOSER_DEBT_CONTRIBUTED_CONV3")) || AUDIO::_0x6BFFB7C276866996(Global_35) == joaat("GREET_STRAUSS_CLOSER_DEBT_CONTRIBUTED_CONV4")) || AUDIO::_0x6BFFB7C276866996(Global_35) == joaat("GREET_STRAUSS_CLOSER_DEBT_CONTRIBUTED_CONV5"))
			{
				__LIB_6__::func_799(joaat("CGO_DEBT_CONTRIBUTED_GREETS_PLAYER"));
				func_720(18, joaat("CGO_DEBT_CONTRIBUTED_STRAUSS"));
				__LIB_6__::func_549(16);
			}
		}
	}
}

void func_289(var uParam0, var uParam1)
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
			func_738(uParam0, uParam1);
			break;
		case 1:
			if (__LIB_6__::func_212(uParam0))
			{
				func_740(uParam0, uParam1);
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
			func_747(uParam0, uParam1);
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
			func_751(uParam0, uParam1, 2);
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

void func_372(int iParam0)
{
	__LIB_2__::func_759(0.775f, 0.2f, 0.025f, 0f);
	COMPANION::_0x7274F84B1501B523(iLocal_3516);
	COMPANION::_0x7274F84B1501B523(iLocal_3517);
	if (__LIB_1__::func_565(&uLocal_3618))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&uLocal_3618, 1);
	}
	if (__LIB_1__::func_565(&uLocal_3617))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&uLocal_3617, 1);
	}
	if (MAP::DOES_BLIP_EXIST(Global_1357549.f_1624))
	{
		MAP::REMOVE_BLIP(&(Global_1357549.f_1624));
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_3518))
	{
		VOLUME::_DELETE_VOLUME(iLocal_3518);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3525))
	{
		OBJECT::DELETE_OBJECT(&iLocal_3525);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3526))
	{
		OBJECT::DELETE_OBJECT(&iLocal_3526);
	}
	__LIB_6__::func_194(&Local_3715);
	__LIB_5__::func_937(1048576);
	__LIB_6__::func_216(&uLocal_3514);
	__LIB_6__::func_550(&uLocal_3520, &uLocal_3521);
	__LIB_2__::func_355(552);
	__LIB_2__::func_355(551);
	__LIB_17__::func_972(&(iParam0->f_51), &Local_3619);
}

bool func_409()
{
	if (__LIB_6__::func_547(6))
	{
		if (!STREAMING::HAS_MODEL_LOADED(joaat("P_CS_BOOK_SHREW_A")))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3525))
		{
			iLocal_3525 = OBJECT::CREATE_OBJECT(joaat("P_CS_BOOK_SHREW_A"), vLocal_3530, true, true, false, false, true);
			return false;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CS_BOOK_SHREW_A"));
		ENTITY::SET_ENTITY_ROTATION(iLocal_3525, vLocal_3533, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_3525, true);
	}
	if (__LIB_6__::func_547(8))
	{
		if (!STREAMING::HAS_MODEL_LOADED(iLocal_3542))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3526))
		{
			iLocal_3526 = OBJECT::CREATE_OBJECT(iLocal_3542, vLocal_3536, true, true, false, false, true);
			return false;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_3542);
		ENTITY::SET_ENTITY_ROTATION(iLocal_3526, vLocal_3539, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_3526, true);
	}
	return true;
}

bool func_431(var uParam0)
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
			if (func_918(uParam0->f_46, 0))
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

void func_436()
{
	Local_3619[0 /*8*/] = { __LIB_6__::func_219(0, 0, 0) };
	Local_3619[1 /*8*/] = { __LIB_6__::func_219(0, 1, 1) };
	Local_3619[2 /*8*/] = { __LIB_6__::func_219(4, 0, 0) };
	Local_3619[3 /*8*/] = { __LIB_6__::func_219(4, 1, 1) };
	Local_3619[4 /*8*/] = { __LIB_6__::func_219(1, 0, 0) };
	Local_3619[5 /*8*/] = { __LIB_6__::func_219(10, 0, 0) };
	Local_3619[6 /*8*/] = { __LIB_6__::func_219(10, 1, 1) };
	Local_3619[7 /*8*/] = { __LIB_6__::func_219(10, 2, 2) };
	Local_3619[8 /*8*/] = { __LIB_6__::func_219(7, 0, 0) };
}

void func_553(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_553(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_553(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_562(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if (Global_40.f_4942[iParam0 /*60*/].f_3 == -1341683964)
			{
				func_1017(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE"), 0, 0, 2, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				func_1017(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE_DUALWIELD"), 0, 0, 3, 1, 1, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 1, 0, 0);
			}
			break;
	}
}

int func_602(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	var uVar7;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = __LIB_0__::func_553(iVar0);
	if (!__LIB_0__::func_144(iVar1, 0))
	{
		return 0;
	}
	if (!__LIB_0__::func_831(iVar1))
	{
		return 0;
	}
	Var2 = { __LIB_0__::func_949(0) };
	Var2.f_4 = -352578118;
	if (func_1056(iVar1, &Var2, 1, 0, 0))
	{
		return 0;
	}
	if (!func_1057(iVar1, &uVar7, &Var2, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

void func_720(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	if (!__LIB_0__::func_30(iParam1))
	{
		return;
	}
	iVar0 = -1;
	bVar1 = false;
	if (func_1113(iParam0, iParam1, &iVar0, &bVar1))
	{
		if (bVar1)
		{
			__LIB_6__::func_647(iParam0, &(Global_40.f_4942[iParam0 /*60*/].f_8));
		}
		if (iVar0 != -1)
		{
			__LIB_6__::func_746(iParam0, iVar0);
		}
	}
}

void func_738(var uParam0, var uParam1)
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
		__LIB_7__::func_486(Global_40.f_4283.f_408.f_1, &uVar5, &uVar4, &uVar3, &iVar2, &uVar1, &uVar0);
		iVar6 = __LIB_6__::func_314(__LIB_0__::func_23());
		iVar7 = __LIB_6__::func_314(Global_40.f_4283.f_408.f_1);
		if (iVar6 == iVar7 && iVar2 <= 0)
		{
			func_1132(uParam0, uParam1);
			func_740(uParam0, uParam1);
		}
		else
		{
			func_1133(uParam0);
			__LIB_6__::func_553(uParam1);
			__LIB_17__::func_964(uParam1);
		}
	}
	else
	{
		func_1133(uParam0);
		__LIB_6__::func_553(uParam1);
		__LIB_17__::func_964(uParam1);
	}
	STREAMING::REQUEST_MODEL(joaat("SCRIPTEDBALL"), false);
	uParam0->f_1581 = 1;
}

void func_740(var uParam0, var uParam1)
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
			__LIB_18__::func_367(3, 1);
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
	func_1137(uParam0, uParam1);
	uParam0->f_1581 = 2;
}

void func_747(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_1__::func_533(134217728) || __LIB_1__::func_533(268435456))
	{
		func_740(uParam0, uParam1);
	}
	__LIB_6__::func_651(uParam0, uParam1[uParam0->f_1645 /*8*/]);
	bVar0 = PED::IS_PED_USING_ANY_SCENARIO(Global_35);
	if (!__LIB_6__::func_209(uParam0) && __LIB_0__::func_139(uParam0->f_1610))
	{
		__LIB_1__::func_748(&(uParam0->f_1610), 1, 1);
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

void func_751(var uParam0, var uParam1, int iParam2)
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
		__LIB_9__::func_276(45);
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
		func_740(uParam0, uParam1);
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
	__LIB_9__::func_276(45);
	PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
	__LIB_3__::func_465(10, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
	__LIB_6__::func_207(uParam1);
	func_740(uParam0, uParam1);
}

bool func_918(int iParam0, bool bParam1)
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
					if (func_192(iVar3, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1) != 0)
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

int func_1017(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case joaat("GROUP_SNIPER"):
		case joaat("GROUP_REVOLVER"):
		case joaat("GROUP_REPEATER"):
		case joaat("GROUP_PISTOL"):
		case joaat("GROUP_SHOTGUN"):
		case joaat("GROUP_RIFLE"):
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			iVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(iVar0) || WEAPON::_IS_WEAPON_MELEE(iVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				StringCopy(&cVar5, WEAPON::_GET_WEAPON_NAME(iVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43891 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (__LIB_0__::func_154(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43891)
						{
							if (__LIB_0__::func_154(iVar4) && iVar4 != iVar0)
							{
								iVar0 = iVar4;
							}
						}
						else if (iVar4 == iVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (__LIB_0__::func_2() == -1 && !__LIB_0__::func_214(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar0, 0, false) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == iVar0 && !Global_43891) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
		{
			bVar22 = true;
		}
		else
		{
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
		}
	}
	if (iVar0 == joaat("WEAPON_UNARMED") && iParam1 == joaat("WEAPON_UNARMED"))
	{
		return iVar0;
	}
	else if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		switch (iParam1)
		{
			case joaat("GROUP_REVOLVER"):
			case joaat("GROUP_PISTOL"):
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
			case joaat("GROUP_SNIPER"):
			case joaat("GROUP_REPEATER"):
			case joaat("GROUP_SHOTGUN"):
			case joaat("GROUP_RIFLE"):
				if (__LIB_0__::func_214(joaat("WEAPON_REPEATER_CARBINE")))
				{
					iVar0 = joaat("WEAPON_REPEATER_CARBINE");
				}
				else
				{
					iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				}
				break;
			default:
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
		}
	}
	else if (iVar0 == joaat("WEAPON_MELEE_LANTERN") && iParam0 == Global_35)
	{
		iVar0 = joaat("WEAPON_MELEE_DAVY_LANTERN");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && __LIB_0__::func_154(iVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, iVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_IS_WEAPON_MELEE(iVar0) && iVar0 != joaat("WEAPON_UNARMED")) && !WEAPON::_IS_WEAPON_LANTERN(iVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, iVar0));
			iVar24 = WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_1400(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		__LIB_0__::func_215(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (__LIB_0__::func_216(iVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, iVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), iVar0, iParam4);
	}
	return iVar0;
}

bool func_1056(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
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
	if (!__LIB_0__::func_708(0))
	{
		bParam3 = true;
	}
	if (__LIB_0__::func_787(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			Var0 = { __LIB_1__::func_117(0) };
			Var4.f_9 = -1591664384;
			if (!__LIB_1__::func_112(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return false;
			}
			else if (__LIB_1__::func_429(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return false;
			}
			if (__LIB_0__::func_950(iParam0, 1))
			{
				if (!__LIB_1__::func_112(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return false;
				}
				else if (__LIB_1__::func_429(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return false;
				}
			}
		}
		else if (!func_1428(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = __LIB_0__::func_936(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = __LIB_0__::func_800(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(__LIB_0__::func_162(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

bool func_1057(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return false;
	}
	if (func_1056(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!__LIB_0__::func_708(0))
	{
		return false;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(__LIB_0__::func_162(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1113(int iParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam3 = 0;
	*iParam2 = 0;
	if (__LIB_3__::func_30(iParam0, iParam1))
	{
		*iParam3 = 1;
	}
	if (__LIB_3__::func_31(iParam0, iParam1, iParam2))
	{
		return true;
	}
	*iParam2 = -1;
	return *iParam3;
}

void func_1132(var uParam0, var uParam1)
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
		__LIB_18__::func_367(3, 1);
	}
}

void func_1133(var uParam0)
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
	__LIB_18__::func_367(21, 1);
}

void func_1137(var uParam0, var uParam1)
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
		__LIB_18__::func_367(21, 1);
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

int func_1400(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_MELEE(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		Var0 = { __LIB_1__::func_615(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1656((386 + iVar28), 1);
			if (__LIB_1__::func_112(iParam0, &Var0, iVar5, 0))
			{
				if (__LIB_1__::func_429(iParam0, &Var6, iVar5))
				{
					Var29 = { __LIB_0__::func_429(iParam0, Var0, iVar5, 0) };
					__LIB_0__::func_939(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (__LIB_0__::func_708(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_1657(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					__LIB_0__::func_718(iParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}
}

bool func_1428(int iParam0, var uParam1, bool bParam2)
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
	Var0 = { __LIB_1__::func_615(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_1656((386 + iVar29), 1);
		if (__LIB_1__::func_112(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = __LIB_1__::func_429(iParam0, &Var6, iVar5);
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

int func_1656(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
			return 463930900;
			return -632148238;
			return 55303249;
			return 2108322089;
			return -1358896714;
			return 74475632;
			return -28710953;
			return -1791599168;
			return 1605938169;
			return 1255242276;
			return 636467727;
			return -1567688525;
			return -77886679;
			return -1057900679;
			return -1960888134;
			return -1719717295;
			return -1779244911;
			return -670540863;
			return 223362311;
			return 1150824567;
			return 974471191;
			return 1989683968;
			return 254804477;
			return 192057609;
			return 1553957817;
			return 2099829015;
			return -840300007 /* GXTEntry: "Extremely durable, hand tooled Off-Hand Holster with elaborate rattlesnake and sk" +
    "ull decoration." */;
			return -1948423372;
			return 981083654;
			return 1283289876;
			return -606884489;
			return -100418572;
			return 663645231;
			return 1442217033;
			return 1410986244;
			return 847409839;
			return 923926911;
			return 109995826;
			return -747412737;
			return 1114341727;
			return -539456939;
			return 45887121;
			return 913271624;
			return -1652812715;
			return -1791365775;
			return -979299941;
			return 713062001;
			return -575045963;
			return 1852965262;
			return -1398836354;
			return -1829885298;
			return -1773850357;
			return -564258009;
			return 2016532685;
			return -1070563798;
			return -1619221343;
			return -345571691;
			return 544288390;
			return 159578294;
			return -76852849;
			return 1110295244;
			return 2104563477;
			return 1947827651;
			return -933072766;
			return 2104388648;
			return -1677140601;
			return -2133097881;
			return -826678792;
			return -513522325;
			return 1970588249;
			return -2080032591;
			return 1758847745;
			return 895010282;
			return -511891179;
			return -1207567168;
			return -1315407613;
			return 1786352060;
			return -833319691;
			return 1591329969;
			return 2123222014;
			return -1578397674;
			return 1473261684;
			return -241855024;
			return 12999093;
			return -6796437;
			return -268116367;
			return -636470867;
			return 1737668280;
			return 892807236;
			return -733247890;
			return 24047176;
			return -1561999014;
			return -2052774042;
			return joaat("SLOTID_HORSE_BEDROLL");
			return joaat("SLOTID_HORSE_BLANKET");
			return joaat("SLOTID_HORSE_CANTLE");
			return joaat("SLOTID_HORSE_FENDER");
			return joaat("SLOTID_HORSE_HORN");
			return joaat("SLOTID_HORSE_INSURANCE");
			return 802754820;
			return joaat("SLOTID_HORSE_MANE");
			return -1886147520;
			return joaat("SLOTID_HORSE_REINS");
			return joaat("SLOTID_HORSE_SADDLE");
			return 1221327846;
			return 923162715;
			return 625423581;
			return 326668608;
			return 669530755;
			return 429759982;
			return -2111934838;
			return 1886178087;
			return 1587783573;
			return -279722001;
			return joaat("SLOTID_HORSE_SADDLEBAG");
			return 724026534;
			return joaat("SLOTID_HORSE_SEAT");
			return joaat("SLOTID_HORSE_SEX");
			return joaat("SLOTID_HORSE_SKIRT");
			return -1824203570;
			return -1654197998;
			return 798987653;
			return 976923323;
			return 1167442289;
			return joaat("SLOTID_HORSE_STIRRUP");
			return joaat("SLOTID_HORSE_TAIL");
			return -2015960939;
			return 1132377945;
			return 739936401;
			return 1201880974;
			return 819728896;
			return 1746010219;
			return 1433393959;
			return -1287636759;
			return -706917073;
			return -2166805;
			return -1391602433;
			return 1782075221;
			return 1282544585;
			return 1732594027;
			return -1058817012;
			return 1090546265;
			return -1783120823;
			return -1535745896;
			return -2086922122;
			return -1675198649;
			return 1189497682;
			return -1565675519;
			return -268973591;
			return 1039159916;
			return 1111816631;
			return 405591388;
			return 897456793;
			return 104187473;
			return 773808542;
			return -1120669954;
			return -1389278274;
			return 552979403;
			return -1571578784;
			return -708312114;
			return 688823508;
			return -1622147240;
			return 830292162;
			return 226276782;
			return -678416628;
			return -1098528034;
			return 316207340;
			return -1909200748;
			return -939652363;
			return joaat("SLOTID_PROGRESSION");
			return -375447933;
			return 537014919;
			return 1784584921;
			return -140655024;
			return 1084182731;
			return -1045471300;
			return 1617414719;
			return -787761753;
			return -490616606;
			return 1491346514;
			return -1360128126;
			return -1311702610;
			return -904250715;
			return 1034665895;
			return -101524555;
			return 1419152594;
			return -451359317;
			return -1915385310;
			return 1315162488;
			return -361152079;
			return -2041626192;
			return -2077812539;
			return -1371514637;
			return 1730017037;
			return 892816668;
			return -1994943603;
			return 603133554;
			return -30160144;
			return -1248299493;
			return 727393558;
			return 755611221;
			return -170255458;
			return 1011151573;
			return 1122339631;
			return 454815308;
			return 990701735;
			return -246340825;
			return -1410671073;
			return 1547608292;
			return -714132970;
			return 732290690;
			return 971340545;
			return -234132662;
			return -2143057988;
			return -993947465;
			return -486552269;
			return -1156317860;
			return 1229625803;
			return -388596167;
			return -1204639465;
			return -1384685096;
			return -2026728113;
			return -1228057307;
			return 1835126290;
			return 1890833594;
			return -751549960;
			return -1682270750;
			return -1839865333;
			return -1990383629;
			return 1712094016;
			return 1532953697;
			return 1620318083;
			return -307230331;
			return -1034549620;
			return -1293064293;
			return -1540142553;
			return -1769886012;
			return -1983081126;
			return -1106117124;
			return -1873108338;
			return -2097543219;
			return 155413195;
			return -1162387149;
			return 1728382685 /* GXTEntry: "Right" */;
			return -649335959 /* GXTEntry: "Left" */;
			return -1876502240;
			return -2107032155;
			return 1570861011;
			return 1075981185;
			return 960195961;
			return 1150460649;
			return 1689424794;
			return 619103418;
			return 1355448197;
			return 1681762005;
			return 1026887814;
			return 354352628;
			return 1519366642;
			return -82757515;
			return 386306655;
			return 1243962119;
			return 756214903;
			return -718417579;
			return -1445516411;
			return 1232060796;
			return -672392892;
			return 1465341584;
			return -427758369;
			return -735647142;
			return 1535838048;
			return -602272282;
			return 2051264661;
			return 487172188;
			return 282270687;
			return 1607708943;
			return 1686264939;
			return 314786149;
			return 1402841185;
			return 1099170772;
			return 2125676786;
			return -363896735;
			return -468790222;
			return -1779133048;
			return 1732537631;
			return 1755095401;
			return 835771095;
			return 1963317232;
			return 259627919;
			return 1299075397;
			return -1509094230;
			return 61132362;
			return 1549741908;
			return 288484254;
			return -1877032947;
			return -1395676456;
			return 1136146715;
			return 468034421;
			return 1079459546;
			return -140369351;
			return 1822341990;
			return 1219701681;
			return 1601295268;
			return -1692460667;
			return 1471419228;
			return 907446160;
			return -1126482585;
			return 1911050315;
			return -1343525599;
			return 1261891225;
			return 763162704;
			return 1335861197;
			return 526744654;
			return -1177461517;
			return -241638635;
			return 1024262875;
			return 853355463;
			return -337288221;
			return 361381308;
			return -1264898804;
			return -585289073;
			return 1423542233;
			return -948489286;
			return 2063859257;
			return -1652627327;
			return -1959697839;
			return -1532267859;
			return -1410062763;
			return -901428716;
			return -1628873469;
			return 144855571;
			return -617589883;
			return -1306457086;
			return 1713542477;
			return -305542365;
			return 1985390213;
			return -2145069367;
			return -1674390752;
			return -2117214398;
			return 1880805647;
			return -62390436;
			return 1815288415;
			return 196214097;
			return -201958220;
			return 244353594;
			return 302954672;
			return -1870144662;
			return 257892944;
			return -607182722;
			return -13254502;
			return 1400281261;
			return 1601515402;
			return -940704970;
			return -548371721;
			return -1022384613;
			return -357406394;
			return 1077068189;
			return -782241404;
			return 1669853467;
			return 1592019450;
			return 635273153;
			return -1559225678;
			return -266425508;
			return 1117400455;
			return 454332195;
			return -1328061889;
			return 561650932;
			return 256105670;
			return 1976779618;
			return -269095126;
			return 2145617267;
			return 1150213537;
			return 1598825281;
			return -712527121;
			return 1308553072;
			return 852866398;
			return -1794417972;
			return 293062146;
			return 95360094;
			return 807631773;
			return 1603958275;
			return 860052020;
			return -1885979781;
			return 746147970;
			return 666663006;
			return -2096186453;
			return 859409444;
			return -671427187;
			return 100192478;
			return 307812616;
			return 1670843243;
			return 899615863;
			return -298901850;
			return 1379186917;
			return -817206030;
			return -1150323212;
			return -247466821;
			return 427124242;
			return 855418120;
			return -777015093;
			return -722462870;
			return -937454324;
			return -339438116;
			return 2135639035;
			return 1254273765;
			return -792172668;
			return 1905987493;
			return 495693044;
			return -1693422950;
			return -205873076;
			return -2143114654;
			return -1420574021;
			return -1959250381;
			return -1088328663;
			return 513602003;
			return 359221401;
			return 1005272;
			return 1583044470;
			return 348853959;
			return 1045621973;
			return 1084576580;
			return 1651573695;
			return 1463321587;
			return -997505963;
			return -1649851713;
			return -386012962;
			return 1386101789;
			return 1227915917;
			return -218846335;
			return -352578118;
			return 1426626782;
			return -714081520;
			return 74547781;
			return 1271463052;
			return 1983140194;
			return 677262775;
			return -832337898;
			return -319249747;
			return -16955722;
			return -1535425646;
			return -1063641743;
			return -1041133401;
			return 1380479304;
			return 600890828;
			return 733333190;
			return 1843035435;
			return -304127320;
			return 122470371;
			return 0;
			return -1591664384;
			return -673000374;
			return -1150938404;
			return -1756997214;
			return -813824107;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}
int func_1657(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!__LIB_0__::func_258(iParam0))
	{
		return 0;
	}
	if (!__LIB_0__::func_708(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

