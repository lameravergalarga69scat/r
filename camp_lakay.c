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
		func_15();
		__LIB_6__::func_493();
		if (!bVar0)
		{
			if (__LIB_5__::func_804())
			{
				__LIB_17__::func_968(Local_18.f_3054, Local_18.f_3055, Global_1357549.f_1900);
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
						func_36(0);
						__LIB_6__::func_379();
						__LIB_6__::func_401(__LIB_1__::func_533(4194304));
					}
				}
				else
				{
					__LIB_6__::func_467(Local_18.f_45);
				}
				func_41(&Global_1898004, Local_18.f_46);
				func_42(&Local_18);
				if (!bVar0)
				{
					func_43(&(Local_18.f_51), &(Local_18.f_2024));
				}
				if (__LIB_1__::func_533(32768))
				{
					func_44(&(Global_1357549.f_3));
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

void func_1(var uParam0)
{
	func_53(uParam0, 1);
	__LIB_6__::func_602(uParam0->f_46, 1);
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
	__LIB_5__::func_808(0, 12797, 0);
	__LIB_5__::func_808(1, 13154, 1);
	__LIB_5__::func_808(2, 13170, 1);
	__LIB_5__::func_808(3, 13233, 1);
	__LIB_5__::func_808(4, 13264, 2);
	__LIB_5__::func_808(5, 13378, 16);
	__LIB_5__::func_808(6, 13513, 1);
	__LIB_5__::func_808(7, 14127, 4);
	__LIB_5__::func_808(8, 14221, 1);
	__LIB_5__::func_808(9, 14351, 128);
	__LIB_5__::func_808(10, 14360, 792);
	__LIB_5__::func_808(11, 14408, 1024);
}

void func_6(var uParam0)
{
	struct<2> Var0;
	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(uParam0, &Var0, 65);
	__LIB_5__::func_813(uParam0, 0, 15088, 15192, 15631);
	__LIB_5__::func_813(uParam0, 1, 15919, 15965, 16432);
	__LIB_5__::func_813(uParam0, 2, 16462, 16500, 16928);
	__LIB_5__::func_813(uParam0, 3, 16958, 16984, 17063);
	__LIB_5__::func_813(uParam0, 4, 17071, 17225, 17063);
	__LIB_6__::func_268(uParam0, 0);
}

void func_7(var uParam0)
{
	struct<2> Var0;
	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(uParam0, &Var0, 65);
	__LIB_5__::func_813(uParam0, 0, 17297, 17375, 17063);
	__LIB_5__::func_813(uParam0, 1, 18531, 18658, 17063);
	__LIB_5__::func_813(uParam0, 2, 17063, 19500, 17063);
	__LIB_5__::func_813(uParam0, 3, 19658, 20204, 17063);
	__LIB_5__::func_813(uParam0, 4, 20832, 21062, 17063);
	__LIB_5__::func_813(uParam0, 5, 21485, 21518, 17063);
	__LIB_5__::func_813(uParam0, 6, 22235, 22320, 17063);
	__LIB_6__::func_268(uParam0, 0);
}

void func_8(var uParam0)
{
	struct<2> Var0;
	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(uParam0, &Var0, 65);
	__LIB_5__::func_813(uParam0, 0, 22375, 22457, 17063);
	__LIB_5__::func_813(uParam0, 1, 22778, 22814, 17063);
	__LIB_5__::func_813(uParam0, 2, 23283, 23414, 23823);
	__LIB_5__::func_813(uParam0, 3, 23842, 23909, 24313);
	__LIB_6__::func_268(uParam0, 0);
}

void func_9()
{
	struct<2> Var0;
	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(&(Local_18.f_1934), &Var0, 65);
	__LIB_5__::func_813(&(Local_18.f_1934), 0, 24382, 24419, 17063);
	__LIB_5__::func_813(&(Local_18.f_1934), 1, 24602, 24625, 17063);
	__LIB_5__::func_813(&(Local_18.f_1934), 2, 24830, 24877, 17063);
	__LIB_5__::func_813(&(Local_18.f_1934), 3, 25151, 25202, 17063);
	__LIB_5__::func_813(&(Local_18.f_1934), 4, 25221, 25277, 17063);
	__LIB_6__::func_268(&(Local_18.f_1934), 0);
}

void func_10(var uParam0)
{
	uParam0->f_45 = 5;
	uParam0->f_47 = 5;
	uParam0->f_1714 = { __LIB_6__::func_188(uParam0->f_45) };
	uParam0->f_1717 = 0f;
	uParam0->f_49 = 1;
}

void func_15()
{
	var uVar0;
	if (__LIB_5__::func_825())
	{
		if (!__LIB_6__::func_56())
		{
			__LIB_6__::func_388(1);
			__LIB_0__::func_698(32);
		}
	}
	else if (__LIB_4__::func_635(32768))
	{
		if (__LIB_1__::func_750(&uVar0))
		{
			if (!__LIB_6__::func_56())
			{
				__LIB_6__::func_388(1);
			}
			func_139();
			__LIB_0__::func_326(32);
			__LIB_6__::func_388(0);
		}
		if (__LIB_6__::func_56())
		{
			__LIB_6__::func_388(0);
		}
		if ((__LIB_0__::func_317() == 7 && __LIB_0__::func_181()) && !__LIB_1__::func_185(67))
		{
			if (!__LIB_1__::func_18(-999503751))
			{
				__LIB_0__::func_908(-999503751);
			}
			if (!__LIB_1__::func_18(81053684))
			{
				__LIB_0__::func_908(81053684);
			}
			if (!__LIB_1__::func_18(-1719060085))
			{
				__LIB_0__::func_908(-1719060085);
			}
			if (!__LIB_1__::func_18(-2061583405))
			{
				__LIB_0__::func_908(-2061583405);
			}
		}
	}
	else
	{
		if (!__LIB_6__::func_56())
		{
			__LIB_6__::func_388(1);
			__LIB_0__::func_698(32);
		}
		if ((__LIB_0__::func_317() == 7 && __LIB_0__::func_181()) && !__LIB_1__::func_185(67))
		{
			if (__LIB_1__::func_18(-999503751))
			{
				__LIB_0__::func_907(-999503751);
			}
			if (__LIB_1__::func_18(81053684))
			{
				__LIB_0__::func_907(81053684);
			}
			if (__LIB_1__::func_18(-1719060085))
			{
				__LIB_0__::func_907(-1719060085);
			}
			if (__LIB_1__::func_18(-2061583405))
			{
				__LIB_0__::func_907(-2061583405);
			}
		}
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
						func_179(Global_1357549.f_1659[iVar2], 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
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

void func_36(bool bParam0)
{
	if ((MISC::GET_FRAME_COUNT() % 60) == 0 || bParam0)
	{
		Local_18.f_3054 = __LIB_6__::func_278(&(Local_18.f_2024[0 /*257*/]));
		Local_18.f_3055 = __LIB_6__::func_278(&(Local_18.f_2024[2 /*257*/]));
		Local_18.f_3056 = __LIB_6__::func_278(&(Local_18.f_2024[1 /*257*/]));
		Global_1357549.f_1899 = func_240();
		Global_1357549.f_1900 = __LIB_5__::func_838(Local_18.f_3056, Global_1357549.f_1899);
	}
}

void func_41(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if ((BUILTIN::VDIST(Global_36, 0f, 0f, 0f) <= 5f || __LIB_0__::func_1(Global_1935630, 16384)) || __LIB_0__::func_1(Global_1935630, 8388608))
	{
		return;
	}
	if (__LIB_1__::func_896(uParam0, 1))
	{
		return;
	}
	uParam0->f_63++;
	if (uParam0->f_63 < 10)
	{
		return;
	}
	uParam0->f_63 = 0;
	bVar0 = false;
	bVar1 = ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT());
	bVar2 = __LIB_1__::func_927();
	iVar3 = 0;
	while (iVar3 < uParam0->f_61)
	{
		switch ((uParam0[iVar3 /*3*/])->f_1)
		{
			case 1:
				if (VOLUME::_DOES_VOLUME_EXIST((*uParam0)[iVar3 /*3*/]))
				{
					if (VOLUME::_IS_POSITION_INSIDE_VOLUME((*uParam0)[iVar3 /*3*/], Global_36))
					{
						if (!bVar1 && !bVar2)
						{
							if ((!__LIB_0__::func_65(uParam0[iVar3 /*3*/], 1) && __LIB_1__::func_120(iParam1)) && !__LIB_1__::func_897(iParam1, 16))
							{
								func_255(iParam1, __LIB_1__::func_898(), -1, 0, -1, 0);
								__LIB_0__::func_47(uParam0[iVar3 /*3*/], 1);
							}
							__LIB_2__::func_758(iParam1, 0);
						}
						bVar0 = true;
					}
				}
				break;
			default:
				break;
		}
		iVar3++;
	}
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_1__::func_923() != bVar0)
		{
			iVar4 = 0;
			if (bVar0)
			{
				iVar4 = 2;
			}
			else
			{
				iVar4 = 1;
			}
			__LIB_1__::func_924();
			__LIB_1__::func_309(Global_1310750.f_16071, 0, iVar4, 0, 0);
		}
	}
	__LIB_1__::func_899(bVar0);
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_1__::func_900((iParam1 == __LIB_0__::func_61() && bVar0));
	}
}

void func_42(int iParam0)
{
	bool bVar0;
	bool bVar1;
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_3513))
	{
		bVar0 = __LIB_1__::func_205(PLAYER::PLAYER_PED_ID(), iLocal_3513, 1, 0);
		bVar1 = __LIB_5__::func_886(1);
		if (bVar0 && !bVar1)
		{
			__LIB_6__::func_549(1);
		}
		else if (!bVar0 && bVar1)
		{
			__LIB_5__::func_863(1);
		}
	}
}

void func_43(int* iParam0, var uParam1)
{
	if (__LIB_5__::func_842())
	{
		__LIB_5__::func_843(iParam0);
		__LIB_5__::func_844(0, 0);
		__LIB_5__::func_845();
	}
	func_272(iParam0);
	__LIB_17__::func_969(iParam0, uParam1);
	__LIB_6__::func_536(iParam0);
	__LIB_6__::func_353(iParam0, uParam1);
	if (!__LIB_5__::func_847(__LIB_5__::func_846()))
	{
		return;
	}
	func_278(iParam0);
}

void func_44(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = (*uParam0)[2];
	if (VOLUME::_DOES_VOLUME_EXIST(iVar0))
	{
		func_279(iVar0);
		POPULATION::_0x74C2B3DC0B294102(iVar0);
		POPULATION::_0xA1CFB35069D23C23(iVar0);
		COMPANION::_0x7274F84B1501B523(iVar0);
	}
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (VOLUME::_DOES_VOLUME_EXIST((*uParam0)[iVar1]))
		{
			__LIB_0__::func_172((*uParam0)[iVar1]);
		}
		iVar1++;
	}
}

void func_45(int iParam0)
{
	int iVar0;
	iParam0->f_1713 = 2;
	iVar0 = 0;
	Global_1357549.f_3[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Lakay volCampAreas[CVA_INNER]");
	func_281(&(Global_1357549.f_3[0]), &iVar0, 0, 2254f, -789.5063f, 44.76498f, 0f, 0f, 0f, 17.5f, 22.5f, 30f, joaat("VOLBOX"), 0);
	func_281(&(Global_1357549.f_3[0]), &iVar0, 0, 2228.5f, -770.5f, 45f, 0f, 0f, -3f, 21f, 16.25f, 30f, joaat("VOLBOX"), 0);
	func_281(&(Global_1357549.f_3[0]), &iVar0, 0, 2246.25f, -759.5f, 43f, 0f, 0f, -22f, 3f, 5.5f, 30f, joaat("VOLCYLINDER"), 0);
	func_281(&(Global_1357549.f_3[0]), &iVar0, 0, 2249.658f, -770.3062f, 43f, 0f, 0f, 0f, 28f, 18f, 30f, joaat("VOLBOX"), 0);
	Global_1357549.f_3[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Lakay volCampAreas[CVA_WALK]");
	func_281(&(Global_1357549.f_3[1]), &iVar0, 1, 2250.632f, -768.3993f, 53.83809f, 0f, 0f, -52.18186f, 37.30481f, 35.353f, 25.28685f, joaat("VOLCYLINDER"), 0);
	Global_1357549.f_3[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Lakay volCampAreas[CVA_OUTER]");
	Global_1357549.f_3[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Lakay volCampAreas[CVA_OUTER_THRESHOLD]");
	func_281(&(Global_1357549.f_3[2]), &(Global_1357549.f_3[3]), 2, 2253.741f, -742.7828f, 61.2578f, 0f, 0f, 66f, 28f, 43f, 30f, joaat("VOLCYLINDER"), 0);
	func_281(&(Global_1357549.f_3[2]), &(Global_1357549.f_3[3]), 2, 2240.492f, -772.2779f, 52.7971f, 0f, 0f, -1f, 51f, 60f, 60f, joaat("VOLBOX"), 0);
	func_281(&(Global_1357549.f_3[2]), &(Global_1357549.f_3[3]), 2, 2280.981f, -762.709f, 60.5683f, 0f, 0f, -12f, 22f, 46f, 30f, joaat("VOLCYLINDER"), 0);
	Global_1357549.f_3[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Lakay volCampAreas[CVA_SURROUNDING]");
	Global_1357549.f_3[5] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Lakay volCampAreas[CVA_SURROUNDING_THRESHOLD]");
	func_281(&(Global_1357549.f_3[4]), &(Global_1357549.f_3[5]), 4, 2258.598f, -760.9487f, 57.5579f, 0f, 0f, 0f, 76f, 76f, 30f, joaat("VOLCYLINDER"), 0);
	Global_1357549.f_3[6] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2223.536f, -771.6528f, 43.4563f, 0f, 0f, -90.73467f, 5.06848f, 5.355191f, 2.283684f, "Lakay volCampAreas[CVA_PROPERTY]");
	iLocal_3513 = VOLUME::_CREATE_VOLUME_BY_HASH(joaat("VOLBOX"), 2229.49f, -771.7467f, 40.1123f, 0f, 0f, 1f, 20f, 10.5f, 4f);
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
		func_89();
		__LIB_6__::func_485();
	}
	if (__LIB_0__::func_61() == iParam0->f_46)
	{
		__LIB_6__::func_409(bParam1);
		__LIB_5__::func_833(1073741824 /* Float: 2f */);
		__LIB_6__::func_158(0, 0, 0);
	}
	if (__LIB_1__::func_680(iParam0->f_46, &iVar2, &iVar3, 0, 0))
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
	func_349(iParam0);
	func_350(iParam0);
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

int func_65()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (Local_18.f_3479 == -1)
	{
		func_389(Local_18.f_45, 1, 1);
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
	if (func_408(&Local_18))
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
	__LIB_0__::func_11();
	__LIB_5__::func_871();
	func_36(1);
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
	vVar2 = { func_430(__LIB_0__::func_317(), &uVar0, &uVar1) };
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

int func_139()
{
	int iVar0;
	if (!__LIB_1__::func_516())
	{
		return 0;
	}
	if (!__LIB_1__::func_610(&iVar0))
	{
		return 0;
	}
	if (!func_485(iVar0))
	{
		return 0;
	}
	return __LIB_3__::func_630(iVar0, 0);
}

int func_179(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
				func_519(Global_1360165[iParam0 /*1157*/], vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
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

float func_240()
{
	int iVar0;
	iVar0 = func_607();
	return __LIB_0__::func_646((IntToFloat(iVar0) * __LIB_5__::func_774()), 100f);
}

void func_255(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char[] cVar6[8];
	float fVar7;
	char* sVar8;
	char* sVar9;
	char[] cVar10[8];
	if (!__LIB_2__::func_757())
	{
		return;
	}
	sVar1 = func_620(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!__LIB_0__::func_630(iParam4))
	{
		if (__LIB_0__::func_20(iParam0))
		{
			iParam4 = __LIB_1__::func_905(__LIB_1__::func_882(iParam0));
		}
		else
		{
			iParam4 = __LIB_1__::func_905(iParam1);
		}
	}
	if (__LIB_0__::func_630(iParam4))
	{
		iVar3 = __LIB_1__::func_931(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = __LIB_1__::func_907(__LIB_1__::func_906(iParam2));
	}
	else if ((__LIB_0__::func_622(iParam1, 2) || __LIB_1__::func_932(iParam4, 2)) && !Global_1894899.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			}
			else
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
			}
		}
		Global_1894899.f_9 = 1;
	}
	else if ((__LIB_0__::func_20(iParam0) && __LIB_0__::func_21(iParam0, 16777216)) && !Global_1894899.f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1894899.f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1894899.f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "REGION_BOUNTY", iVar3);
		Global_1894899.f_9 = 1;
	}
	else
	{
		iVar4 = __LIB_0__::func_41(__LIB_0__::func_23());
		iVar5 = __LIB_0__::func_42(__LIB_0__::func_23());
		if (iVar5 < 10)
		{
			StringConCat(&cVar6, "0", 8);
		}
		StringIntConCat(&cVar6, iVar5, 8);
		fVar7 = MISC::_GET_TEMPERATURE_AT_COORDS(Global_36);
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			sVar9 = "AM";
			if (iVar4 >= 12)
			{
				sVar9 = "PM";
				if (iVar4 > 12)
				{
					iVar4 = (iVar4 - 12);
				}
			}
			else if (iVar4 == 0)
			{
				iVar4 = 12;
			}
			sVar8 = "TIME_AND_TEMP_C";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = __LIB_1__::func_908(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(674, sVar8, iVar4, __LIB_1__::func_925(&cVar6, joaat("COLOR_PURE_WHITE")), sVar9, __LIB_1__::func_925(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = __LIB_1__::func_908(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(162, sVar8, iVar4, __LIB_1__::func_925(&cVar6, joaat("COLOR_PURE_WHITE")), __LIB_1__::func_925(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		Global_1894899.f_9 = 0;
	}
	Global_1934266.f_148 = __LIB_1__::func_909(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_272(var uParam0)
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
		if (__LIB_0__::func_139(uParam0->f_1))
		{
			__LIB_1__::func_484(uParam0->f_1, "MONEY_LOANSHARK_ALL_DEBTS", 1);
		}
	}
	if (Global_1357549.f_1672 == 0)
	{
		if (func_646(-774242862 /* GXTEntry: "Wróbel\'s Valuables" */, 0, 0) >= 1)
		{
			__LIB_5__::func_905(-774242862 /* GXTEntry: "Wróbel\'s Valuables" */, joaat("P_MONEYSTACK01X"));
			return;
		}
		if (func_646(joaat("MONEY_LOANSHARK_WINTON_DEBT"), 0, 0) >= 1)
		{
			__LIB_5__::func_905(joaat("MONEY_LOANSHARK_WINTON_DEBT"), joaat("P_MONEYSTACK01X"));
			return;
		}
		if (func_646(joaat("MONEY_LOANSHARK_GWEN_DEBT"), 0, 0) >= 1)
		{
			__LIB_5__::func_905(joaat("MONEY_LOANSHARK_GWEN_DEBT"), joaat("P_MONEYSTACK01X"));
			return;
		}
		if (func_646(joaat("MONEY_LOANSHARK_CATFISH_DEBT"), 0, 0) >= 1)
		{
			__LIB_5__::func_905(joaat("MONEY_LOANSHARK_CATFISH_DEBT"), joaat("P_MONEYSTACK01X"));
			return;
		}
		if (func_646(joaat("MONEY_LOANSHARK_LILLY_DEBT"), 0, 0) >= 1)
		{
			__LIB_5__::func_905(joaat("MONEY_LOANSHARK_LILLY_DEBT"), joaat("P_MONEYSTACK01X"));
			return;
		}
		if (func_646(joaat("MONEY_LOANSHARK_HORSE_CHASE_DEBT"), 0, 0) >= 1)
		{
			__LIB_5__::func_905(joaat("MONEY_LOANSHARK_HORSE_CHASE_DEBT"), joaat("P_MONEYSTACK01X"));
			return;
		}
	}
}

void func_278(int* iParam0)
{
	vector3 vVar0[24];
	if (Global_1357549.f_1671 == -1)
	{
		return;
	}
	switch (Global_1357549.f_1671)
	{
		case 0:
			StringCopy(&cVar0, "DONATE_M_SMALL", 24);
			break;
		case 1:
			StringCopy(&cVar0, "DONATE_M_MID", 24);
			break;
		case 2:
			StringCopy(&cVar0, "DONATE_M_BIG", 24);
			break;
		case 3:
			StringCopy(&cVar0, "DONATE_FOOD", 24);
			break;
		case 4:
			StringCopy(&cVar0, "DONATE_SUPP", 24);
			break;
		case 5:
			StringCopy(&cVar0, "DONATE_REMIND", 24);
			break;
		case 6:
			StringCopy(&cVar0, "DONATE_LOW", 24);
			break;
		case 7:
			StringCopy(&cVar0, "ASK_ABIGAIL", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(13), "ABIGAIL", 0);
			break;
		case 8:
			StringCopy(&cVar0, "GIVE_ABIGAIL", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(13), "ABIGAIL", 0);
			break;
		case 10:
			StringCopy(&cVar0, "ASK_JACK1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(14), "JACK", 0);
			break;
		case 11:
			StringCopy(&cVar0, "GIVE_JACK1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(14), "JACK", 0);
			break;
		case 13:
			StringCopy(&cVar0, "ASK_JACK2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(14), "JACK", 0);
			break;
		case 14:
			StringCopy(&cVar0, "GIVE_JACK2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(14), "JACK", 0);
			break;
		case 16:
			StringCopy(&cVar0, "ASK_CHARLES1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(7), "CHARLES_SMITH", 0);
			break;
		case 17:
			StringCopy(&cVar0, "GIVE_CHARLES1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(7), "CHARLES_SMITH", 0);
			break;
		case 18:
			StringCopy(&cVar0, "THANK_CHARLES1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(7), "CHARLES_SMITH", 0);
			break;
		case 19:
			StringCopy(&cVar0, "ASK_CHARLES2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(7), "CHARLES_SMITH", 0);
			break;
		case 20:
			StringCopy(&cVar0, "GIVE_CHARLES2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(7), "CHARLES_SMITH", 0);
			break;
		case 21:
			StringCopy(&cVar0, "THANK_CHARLES2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(7), "CHARLES_SMITH", 0);
			break;
		case 22:
			StringCopy(&cVar0, "ASK_CHARLES3", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(7), "CHARLES_SMITH", 0);
			break;
		case 23:
			StringCopy(&cVar0, "GIVE_CHARLES3", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(7), "CHARLES_SMITH", 0);
			break;
		case 24:
			StringCopy(&cVar0, "THANK_CHARLES3", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(7), "CHARLES_SMITH", 0);
			break;
		case 25:
			StringCopy(&cVar0, "ASK_CHARLES4", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(7), "CHARLES_SMITH", 0);
			break;
		case 26:
			StringCopy(&cVar0, "GIVE_CHARLES4", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(7), "CHARLES_SMITH", 0);
			break;
		case 27:
			StringCopy(&cVar0, "THANK_CHARLES4", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(7), "CHARLES_SMITH", 0);
			break;
		case 28:
			StringCopy(&cVar0, "ASK_SUSAN1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(19), "SUSAN", 0);
			break;
		case 29:
			StringCopy(&cVar0, "GIVE_SUSAN1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(19), "SUSAN", 0);
			break;
		case 30:
			StringCopy(&cVar0, "THANK_SUSAN1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(19), "SUSAN", 0);
			break;
		case 31:
			StringCopy(&cVar0, "ASK_SUSAN2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(19), "SUSAN", 0);
			break;
		case 32:
			StringCopy(&cVar0, "GIVE_SUSAN2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(19), "SUSAN", 0);
			break;
		case 33:
			StringCopy(&cVar0, "THANK_SUSAN2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(19), "SUSAN", 0);
			break;
		case 34:
			StringCopy(&cVar0, "ASK_SWANSON", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(21), "SWANSON", 0);
			break;
		case 35:
			StringCopy(&cVar0, "GIVE_SWANSON", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(21), "SWANSON", 0);
			break;
		case 36:
			StringCopy(&cVar0, "THANK_SWANSON", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(21), "SWANSON", 0);
			break;
		case 37:
			StringCopy(&cVar0, "ASK_PEARSON1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(17), "PEARSON", 0);
			break;
		case 38:
			StringCopy(&cVar0, "GIVE_PEARSON1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(17), "PEARSON", 0);
			break;
		case 39:
			StringCopy(&cVar0, "THANK_PEARSON1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(17), "PEARSON", 0);
			break;
		case 40:
			StringCopy(&cVar0, "ASK_PEARSON2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(17), "PEARSON", 0);
			break;
		case 41:
			StringCopy(&cVar0, "GIVE_PEARSON2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(17), "PEARSON", 0);
			break;
		case 42:
			StringCopy(&cVar0, "THANK_PEARSON2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(17), "PEARSON", 0);
			break;
		case 43:
			StringCopy(&cVar0, "ASK_JAVIER", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(2), "JAVIER", 0);
			break;
		case 44:
			StringCopy(&cVar0, "GIVE_JAVIER", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(2), "JAVIER", 0);
			break;
		case 45:
			StringCopy(&cVar0, "THANK_JAVIER", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(2), "JAVIER", 0);
			break;
		case 46:
			StringCopy(&cVar0, "ASK_BILL", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(3), "BILL", 0);
			break;
		case 47:
			StringCopy(&cVar0, "GIVE_BILL", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(3), "BILL", 0);
			break;
		case 48:
			StringCopy(&cVar0, "THANK_BILL", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(3), "BILL", 0);
			break;
		case 49:
			StringCopy(&cVar0, "ASK_SEAN", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(8), "SEAN", 0);
			break;
		case 50:
			StringCopy(&cVar0, "GIVE_SEAN", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(8), "SEAN", 0);
			break;
		case 51:
			StringCopy(&cVar0, "THANK_SEAN", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(8), "SEAN", 0);
			break;
		case 82:
			StringCopy(&cVar0, "ASK_KIERAN", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(10), "KIERAN", 0);
			break;
		case 83:
			StringCopy(&cVar0, "GIVE_KIERAN", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(10), "KIERAN", 0);
			break;
		case 84:
			StringCopy(&cVar0, "THANK_KIERAN", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(10), "KIERAN", 0);
			Jump @3405; //curOff = 2056
			StringCopy(&cVar0, "ASK_TILLY", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(22), "TILLY", 0);
			Jump @3405; //curOff = 2087
			StringCopy(&cVar0, "GIVE_TILLY", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(22), "TILLY", 0);
			Jump @3405; //curOff = 2118
			StringCopy(&cVar0, "THANK_TILLY", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(22), "TILLY", 0);
			Jump @3405; //curOff = 2149
			StringCopy(&cVar0, "ASK_LENNY1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(9), "LENNY", 0);
			Jump @3405; //curOff = 2180
			StringCopy(&cVar0, "GIVE_LENNY1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(9), "LENNY", 0);
			Jump @3405; //curOff = 2211
			StringCopy(&cVar0, "THANK_LENNY1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(9), "LENNY", 0);
			Jump @3405; //curOff = 2242
			StringCopy(&cVar0, "ASK_LENNY2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(9), "LENNY", 0);
			Jump @3405; //curOff = 2273
			StringCopy(&cVar0, "GIVE_LENNY2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(9), "LENNY", 0);
			Jump @3405; //curOff = 2304
			StringCopy(&cVar0, "THANK_LENNY2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(9), "LENNY", 0);
			Jump @3405; //curOff = 2335
			StringCopy(&cVar0, "ASK_MARY1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(15), "MARYBETH", 0);
			Jump @3405; //curOff = 2366
			StringCopy(&cVar0, "GIVE_MARY1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(15), "MARYBETH", 0);
			Jump @3405; //curOff = 2397
			StringCopy(&cVar0, "THANK_MARY1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(15), "MARYBETH", 0);
			Jump @3405; //curOff = 2428
			StringCopy(&cVar0, "ASK_MARY2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(15), "MARYBETH", 0);
			Jump @3405; //curOff = 2459
			StringCopy(&cVar0, "GIVE_MARY2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(15), "MARYBETH", 0);
			Jump @3405; //curOff = 2490
			StringCopy(&cVar0, "THANK_MARY2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(15), "MARYBETH", 0);
			Jump @3405; //curOff = 2521
			StringCopy(&cVar0, "ASK_UNCLE", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(4), "UNCLE", 0);
			Jump @3405; //curOff = 2551
			StringCopy(&cVar0, "GIVE_UNCLE", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(4), "UNCLE", 0);
			Jump @3405; //curOff = 2581
			StringCopy(&cVar0, "THANK_UNCLE", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(4), "UNCLE", 0);
			Jump @3405; //curOff = 2611
			StringCopy(&cVar0, "ASK_TRELW", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(23), "TRELAWNY", 0);
			Jump @3405; //curOff = 2642
			StringCopy(&cVar0, "GIVE_TRELW", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(23), "TRELAWNY", 0);
			Jump @3405; //curOff = 2673
			StringCopy(&cVar0, "THANK_TRELW", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(23), "TRELAWNY", 0);
			Jump @3405; //curOff = 2704
			StringCopy(&cVar0, "ASK_HOSEA1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(5), "HOSEA", 0);
			Jump @3405; //curOff = 2734
			StringCopy(&cVar0, "GIVE_HOSEA1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(5), "HOSEA", 0);
			Jump @3405; //curOff = 2764
			StringCopy(&cVar0, "THANK_HOSEA1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(5), "HOSEA", 0);
			Jump @3405; //curOff = 2794
			StringCopy(&cVar0, "ASK_HOSEA2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(5), "HOSEA", 0);
			Jump @3405; //curOff = 2824
			StringCopy(&cVar0, "GIVE_HOSEA2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(5), "HOSEA", 0);
			Jump @3405; //curOff = 2854
			StringCopy(&cVar0, "THANK_HOSEA2", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(5), "HOSEA", 0);
			Jump @3405; //curOff = 2884
			StringCopy(&cVar0, "ASK_KAREN", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(20), "KAREN", 0);
			Jump @3405; //curOff = 2915
			StringCopy(&cVar0, "GIVE_KAREN", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(20), "KAREN", 0);
			Jump @3405; //curOff = 2946
			StringCopy(&cVar0, "THANK_KAREN", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(20), "KAREN", 0);
			Jump @3405; //curOff = 2977
			StringCopy(&cVar0, "ASK_DUTCH", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(0), "DUTCH", 0);
			Jump @3405; //curOff = 3007
			StringCopy(&cVar0, "GIVE_DUTCH", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(0), "DUTCH", 0);
			Jump @3405; //curOff = 3037
			StringCopy(&cVar0, "THANK_DUTCH", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(0), "DUTCH", 0);
			Jump @3405; //curOff = 3067
			StringCopy(&cVar0, "ASK_MICAH", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(6), "MICAH_BELL", 0);
			Jump @3405; //curOff = 3097
			StringCopy(&cVar0, "GIVE_MICAH", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(6), "MICAH_BELL", 0);
			Jump @3405; //curOff = 3127
			StringCopy(&cVar0, "THANK_MICAH", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(6), "MICAH_BELL", 0);
			Jump @3405; //curOff = 3157
			StringCopy(&cVar0, "ASK_SADIE", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(11), "SADIE_ADLER", 0);
			Jump @3405; //curOff = 3188
			StringCopy(&cVar0, "GIVE_SADIE", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(11), "SADIE_ADLER", 0);
			Jump @3405; //curOff = 3219
			StringCopy(&cVar0, "THANK_SADIE", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(11), "SADIE_ADLER", 0);
			Jump @3405; //curOff = 3250
			StringCopy(&cVar0, "ASK_MOLLY", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(16), "MOLLY", 0);
			Jump @3405; //curOff = 3281
			StringCopy(&cVar0, "GIVE_MOLLY", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(16), "MOLLY", 0);
			Jump @3405; //curOff = 3312
			StringCopy(&cVar0, "THANK_MOLLY", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(16), "MOLLY", 0);
			Jump @3405; //curOff = 3343
			StringCopy(&cVar0, "CPGEN_DTBOX1", 24);
			__LIB_0__::func_928(&(iParam0->f_1325), __LIB_0__::func_271(0), "DUTCH", 0);
			__LIB_1__::func_104(&(iParam0->f_1325), cVar0, 0, -1, 0, 0);
			Global_1357549.f_1671 = -1;
			return;
			Global_1357549.f_1671 = -1;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
			{
				__LIB_1__::func_104(&(iParam0->f_1325), cVar0, 0, -1, 0, 0);
			}
		}
void func_279(int iParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0x74C2B3DC0B294102(iParam0);
	POPULATION::_0xA1CFB35069D23C23(iParam0);
}

void func_281(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, vector3 vParam9, int iParam12, int iParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	int iVar11;
	if (iParam2 < 0 || iParam2 > 4)
	{
		return;
	}
	iVar0 = __LIB_6__::func_81(iParam2, 1);
	iVar1 = __LIB_6__::func_81(iParam2, 0);
	bVar4 = (iParam2 == 0 || iParam2 == 2);
	if (iVar0 != 7)
	{
		if (iVar0 != -1)
		{
			func_679(&iVar2, vParam3, vParam6, vParam9, iVar0, iParam12, iParam13, bVar4);
			VOLUME::_0x6E0D3C3F828DA773(*uParam0, iVar2);
		}
	}
	if (iVar1 != 7)
	{
		if (iVar1 != -1)
		{
			func_679(&iVar3, vParam3, vParam6, vParam9, iVar1, iParam12, iParam13, bVar4);
			VOLUME::_0x6E0D3C3F828DA773(*uParam0, iVar3);
		}
	}
	if (*iParam1 != 0 && VOLUME::_DOES_VOLUME_EXIST(*iParam1))
	{
		fVar5 = __LIB_5__::func_916(iParam2);
		fVar6 = __LIB_0__::func_649((vParam9.x - fVar5), 0.1f);
		fVar7 = __LIB_0__::func_649((vParam9.y - fVar5), 0.1f);
		vVar8 = { fVar6, fVar7, vParam9.z };
		iVar11 = VOLUME::_CREATE_VOLUME_BY_HASH(iParam12, vParam3, vParam6, vVar8);
		VOLUME::_0x6E0D3C3F828DA773(*iParam1, iVar11);
	}
}

void func_349(int iParam0)
{
	if (iParam0->f_49 && !ENTITY::IS_ENTITY_DEAD(iParam0->f_48))
	{
		VEHICLE::DELETE_VEHICLE(&(iParam0->f_48));
	}
	func_44(&(Global_1357549.f_3));
}

void func_350(int iParam0)
{
	__LIB_0__::func_172(iLocal_3513);
}

void func_389(int iParam0, bool bParam1, bool bParam2)
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
		func_788(iParam0, bParam1);
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

bool func_408(var uParam0)
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
			if (func_810(uParam0->f_46, 0))
			{
				Global_1357549.f_2 = 2;
			}
			else
			{
				return false;
			}
		case 2:
			if (__LIB_6__::func_604(uParam0->f_46))
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

Vector3 func_430(float fParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	vVar0 = { func_845(Global_36, uParam1, uParam2, 1, 0, 0, 0, 0, 0, 0, fParam0, 10f) };
	return vVar0;
}

bool func_485(int iParam0)
{
	if (__LIB_3__::func_104())
	{
		return false;
	}
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!func_872(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

void func_519(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_519(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_519(iVar2, vParam1, fParam4, iParam5, iParam6);
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

int func_607()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;
	struct<12> Var17;
	int iVar31;
	int iVar32;
	Var3 = { __LIB_0__::func_523(0, 1426626782, -1591664384, -1591664384, 0, 0) };
	if (__LIB_2__::func_894(&Var3, &iVar1, &iVar2, 0))
	{
		Var17.f_9 = -1591664384;
		iVar31 = 0;
		while (iVar31 < iVar2)
		{
			if (__LIB_0__::func_236(&Var17, iVar31, iVar1, iVar2))
			{
				if (__LIB_5__::func_796(Var17.f_4))
				{
					iVar0 = (iVar0 + Var17.f_11);
					if (__LIB_6__::func_446(Var17.f_4))
					{
						iVar0 = (iVar0 - 1);
					}
					if (iVar0 > 30)
					{
						iVar32 = (iVar0 - 30);
						__LIB_6__::func_301(Var17.f_4, 2, iVar32, -142743235);
						iVar0 = 30;
					}
				}
			}
			iVar31++;
		}
		__LIB_0__::func_238(iVar1);
	}
	return iVar0;
}

char* func_620(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, var uParam6)
{
	char* sVar0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1894899.f_162)))
	{
		sVar0 = __LIB_0__::func_67(Global_1894899.f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && bParam4)
	{
		sVar0 = __LIB_1__::func_911(func_975(Global_36));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!__LIB_1__::func_912(iParam0) || __LIB_0__::func_293(45))
		{
			switch (iParam0)
			{
				case 2:
					sVar0 = "LANDMARK_MERKINS_WALLER";
					break;
				case 3:
					sVar0 = "SETTLEMENT_LAGRAS";
					break;
				case 4:
					sVar0 = "HIDEOUT_LAKAY";
					break;
				case 1:
					sVar0 = "LANDMARK_MACOMBS_END";
					break;
				case 6:
					sVar0 = "LANDMARK_HAGEN_ORCHARDS";
					break;
				case 5:
					sVar0 = "TOWN_SAINTDENIS";
					break;
				case 8:
					sVar0 = "SETTLEMENT_GRAND_KORRIGAN";
					break;
				case 9:
					sVar0 = "HIDEOUT_SHADY_BELLE";
					break;
				case 10:
					sVar0 = "LANDMARK_SILTWATER_STRAND";
					break;
				case 11:
					sVar0 = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
				case 12:
					sVar0 = "LANDMARK_BERYLS_DREAM";
					break;
				case 15:
					sVar0 = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
				case 16:
					sVar0 = "HIDEOUT_HANGING_DOG_RANCH";
					break;
				case 17:
					sVar0 = "HOMESTEAD_LONE_MULE_STEAD";
					break;
				case 19:
					sVar0 = "LANDMARK_MONTOS_REST";
					break;
				case 20:
					sVar0 = "LANDMARK_OWANJILA_DAM";
					break;
				case 21:
					sVar0 = "HOMESTEAD_PAINTED_SKY";
					break;
				case 22:
					sVar0 = "SETTLEMENT_PRONGHORN_RANCH";
					break;
				case 23:
					sVar0 = "LANDMARK_RIGGS_STATION";
					break;
				case 25:
					sVar0 = "HOMESTEAD_SHEPHERDS_RISE";
					break;
				case 26:
					sVar0 = "TOWN_STRAWBERRY";
					break;
				case 27:
					sVar0 = "LANDMARK_VALLEY_VIEW";
					break;
				case 28:
					sVar0 = "LANDMARK_WALLACE_STATION";
					break;
				case 29:
					sVar0 = "HOMESTEAD_WATSONS_CABIN";
					break;
				case 30:
					sVar0 = "LANDMARK_CANEBREAK_MANOR";
					break;
				case 31:
					sVar0 = "LANDMARK_COPPERHEAD_LANDING";
					break;
				case 32:
					sVar0 = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
				case 120:
					sVar0 = "TOWN_ARMADILLO";
					break;
				case 121:
					sVar0 = "SETTLEMENT_COOTS_CHAPEL";
					break;
				case 124:
					sVar0 = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
				case 123:
					sVar0 = "LANDMARK_RILEYS_CHARGE";
					break;
				case 125:
					sVar0 = "HIDEOUT_TWIN_ROCKS";
					break;
				case 33:
					sVar0 = "LANDMARK_BACCHUS_BRIDGE";
					break;
				case 34:
					sVar0 = "HOMESTEAD_FIRWOOD_RISE";
					break;
				case 35:
					sVar0 = "SETTLEMENT_FORT_WALLACE";
					break;
				case 36:
					sVar0 = "HIDEOUT_SIX_POINT_CABIN";
					break;
				case 114:
					sVar0 = "HIDEOUT_GAPTOOTH_BREACH";
					break;
				case 116:
					sVar0 = "SETTLEMENT_RATHSKELLER_FORK";
					break;
				case 115:
					sVar0 = "TOWN_TUMBLEWEED";
					break;
				case 37:
					sVar0 = "SETTLEMENT_BEECHERS_HOPE";
					break;
				case 38:
					sVar0 = "TOWN_BLACKWATER";
					break;
				case 39:
					sVar0 = "LANDMARK_QUAKERS_COVE";
					break;
				case 40:
					sVar0 = "HOMESTEAD_ADLER_RANCH";
					break;
				case 50:
					sVar0 = "LANDMARK_CALUMET_RAVINE";
					break;
				case 42:
					sVar0 = "HOMESTEAD_CHEZ_PORTER";
					break;
				case 43:
					sVar0 = "HIDEOUT_COLTER";
					break;
				case 41:
					sVar0 = "LANDMARK_WINDOW_ROCK";
					break;
				case 45:
					sVar0 = "LANDMARK_MILLESANI_CLAIM";
					break;
				case 48:
					sVar0 = "LANDMARK_TEMPEST_RIM";
					break;
				case 54:
					sVar0 = "LANDMARK_THE_LOFT";
					break;
				case 56:
					sVar0 = "SETTLEMENT_WAPITI";
					break;
				case 49:
					sVar0 = "LANDMARK_EWING_BASIN";
					break;
				case 57:
					sVar0 = "SETTLEMENT_AGUASDULCES";
					break;
				case 59:
					sVar0 = "LANDMARK_CINCO_TORRES";
					break;
				case 60:
					sVar0 = "LANDMARK_LA_CAPILLA";
					break;
				case 61:
					sVar0 = "TOWN_MANICATO";
					break;
				case 126:
					sVar0 = "TOWN_MACFARLANES_RANCH";
					break;
				case 127:
					sVar0 = "SETTLEMENT_THIEVES_LANDING";
					break;
				case 62:
					sVar0 = "LANDMARK_OLD_GREENBANK_MILL";
					break;
				case 64:
					sVar0 = "HOMESTEAD_CARMODY_DELL";
					break;
				case 65:
					sVar0 = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
				case 66:
					sVar0 = "HOMESTEAD_GUTHRIE_FARM";
					break;
				case 67:
					sVar0 = "LANDMARK_CUMBERLAND_FALLS";
					break;
				case 68:
					sVar0 = "HOMESTEAD_DOWNES_RANCH";
					break;
				case 69:
					sVar0 = "SETTLEMENT_EMERALD_RANCH";
					break;
				case 70:
					sVar0 = "LANDMARK_GRANGERS_HOGGERY";
					break;
				case 72:
					sVar0 = "HOMESTEAD_LARNED_SOD";
					break;
				case 74:
					sVar0 = "LANDMARK_LUCKYS_CABIN";
					break;
				case 75:
					sVar0 = "LANDMARK_FLATNECK_STATION";
					break;
				case 76:
					sVar0 = "TOWN_VALENTINE";
					break;
				case 77:
					sVar0 = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
				case 78:
					sVar0 = "TOWN_ANNESBURG";
					break;
				case 79:
					sVar0 = "HIDEOUT_BEAVER_HOLLOW";
					break;
				case 82:
					sVar0 = "SETTLEMENT_BUTCHER_CREEK";
					break;
				case 80:
					sVar0 = "LANDMARK_BLACK_BALSAM_RISE";
					break;
				case 81:
					sVar0 = "LANDMARK_BRANDYWINE_DROP";
					break;
				case 83:
					sVar0 = "HOMESTEAD_DOVERHILL";
					break;
				case 86:
					sVar0 = "HOMESTEAD_MACLEANS_HOUSE";
					break;
				case 87:
					sVar0 = "LANDMARK_MOSSY_FLATS";
					break;
				case 88:
					sVar0 = "LANDMARK_ROANOKE_VALLEY";
					break;
				case 89:
					sVar0 = "HOMESTEAD_WILLARDS_REST";
					break;
				case 92:
					sVar0 = "TOWN_VANHORN";
					break;
				case 117:
					sVar0 = "SETTLEMENT_BENEDICT_POINT";
					break;
				case 118:
					sVar0 = "HIDEOUT_FORT_MERCER";
					break;
				case 119:
					sVar0 = "SETTLEMENT_PLAINVIEW";
					break;
				case 93:
					sVar0 = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
				case 94:
					sVar0 = "LANDMARK_BOLGER_GLADE";
					break;
				case 95:
					sVar0 = "SETTLEMENT_CALIGA_HALL";
					break;
				case 96:
					sVar0 = "HOMESTEAD_CATFISH_JACKSONS";
					break;
				case 98:
					sVar0 = "HIDEOUT_CLEMENS_POINT";
					break;
				case 99:
					sVar0 = "HOMESTEAD_COMPSONS_STEAD";
					break;
				case 100:
					sVar0 = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
				case 102:
					sVar0 = "HOMESTEAD_LONNIES_SHACK";
					break;
				case 104:
					sVar0 = "LANDMARK_RADLEYS_PASTURE";
					break;
				case 105:
					sVar0 = "TOWN_RHODES";
					break;
				case 108:
					sVar0 = "LANDMARK_BEAR_CLAW";
					break;
				case 110:
					sVar0 = "SETTLEMENT_MANZANITA_POST";
					break;
				case 111:
					sVar0 = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
				case 112:
					sVar0 = "LANDMARK_TANNERS_REACH";
					break;
				case 128:
					sVar0 = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || bParam5)
	{
		switch (iParam2)
		{
			case joaat("WATER_ARROYO_DE_LA_VIBORA"):
				sVar0 = "WATER_ARROYO_DE_LA_VIBORA";
				*uParam6 = 1;
				break;
			case joaat("WATER_AURORA_BASIN"):
				sVar0 = "WATER_AURORA_BASIN";
				*uParam6 = 1;
				break;
			case joaat("WATER_BAHIA_DE_LA_PAZ"):
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*uParam6 = 1;
				break;
			case joaat("WATER_BARROW_LAGOON"):
				sVar0 = "WATER_BARROW_LAGOON";
				*uParam6 = 1;
				break;
			case joaat("WATER_BAYOU_NWA"):
				sVar0 = "DISTRICT_BAYOU_NWA";
				*uParam6 = 1;
				break;
			case joaat("WATER_CAIRN_LAKE"):
				sVar0 = "WATER_CAIRN_LAKE";
				*uParam6 = 1;
				break;
			case joaat("WATER_CATTIAL_POND"):
				sVar0 = "WATER_CATTAIL_POND";
				*uParam6 = 1;
				break;
			case joaat("WATER_DAKOTA_RIVER"):
				sVar0 = "WATER_DAKOTA_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_DEADBOOT_CREEK"):
				sVar0 = "WATER_DEADBOOT_CREEK";
				*uParam6 = 1;
				break;
			case joaat("WATER_ELYSIAN_POOL"):
				sVar0 = "WATER_ELYSIAN_POOL";
				*uParam6 = 1;
				break;
			case joaat("WATER_FLAT_IRON_LAKE"):
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*uParam6 = 1;
				break;
			case joaat("WATER_HAWKS_EYE_CREEK"):
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*uParam6 = 1;
				break;
			case joaat("WATER_HEARTLANDS_OVERFLOW"):
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*uParam6 = 1;
				break;
			case joaat("WATER_HOT_SPRINGS"):
				sVar0 = "WATER_COTORRA_SPRINGS";
				*uParam6 = 1;
				break;
			case joaat("WATER_LAKE_DON_JULIO"):
				sVar0 = "WATER_LAKE_DON_JULIO";
				*uParam6 = 1;
				break;
			case joaat("WATER_LAKE_ISABELLA"):
				sVar0 = "WATER_LAKE_ISABELLA";
				*uParam6 = 1;
				break;
			case joaat("WATER_LANNAHECHEE_RIVER"):
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_LITTLE_CREEK_RIVER"):
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_LOWER_MONTANA_RIVER"):
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_MATTLOCK_POND"):
				sVar0 = "WATER_MATTOCK_POND";
				*uParam6 = 1;
				break;
			case joaat("WATER_MOONSTONE_POND"):
				sVar0 = "WATER_MOONSTONE_POND";
				*uParam6 = 1;
				break;
			case joaat("WATER_O_CREAGHS_RUN"):
				sVar0 = "WATER_OCREAGHS_RUN";
				*uParam6 = 1;
				break;
			case joaat("WATER_OWANJILA"):
				sVar0 = "WATER_OWANJILA";
				*uParam6 = 1;
				break;
			case joaat("WATER_RINGNECK_CREEK"):
				sVar0 = "WATER_RINGNECK_CREEK";
				*uParam6 = 1;
				break;
			case joaat("WATER_SEA_OF_CORONADO"):
				sVar0 = "WATER_SEA_OF_CORONADO";
				*uParam6 = 1;
				break;
			case joaat("WATER_SOUTHFIELD_FLATS"):
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*uParam6 = 1;
				break;
			case joaat("WATER_SPIDER_GORGE"):
				sVar0 = "WATER_SPIDER_GORGE";
				*uParam6 = 1;
				break;
			case joaat("WATER_STILLWATER_CREEK"):
				sVar0 = "WATER_STILLWATER_CREEK";
				*uParam6 = 1;
				break;
			case joaat("WATER_UPPER_MONTANA_RIVER"):
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_WHINYARD_STRAIT"):
				sVar0 = "WATER_WHINYARD_STRAIT";
				*uParam6 = 1;
				break;
			case joaat("WATER_KAMASSA_RIVER"):
				if (iParam1 == 10)
				{
					sVar0 = "WATER_KAMASSA_RIVER";
				}
				else if (iParam1 == 2)
				{
					sVar0 = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				}
				else
				{
					sVar0 = "WATER_KAMASSA_RIVER_BAYOU_NWA";
				}
				*uParam6 = 1;
				break;
			case joaat("WATER_SAN_LUIS_RIVER"):
				if (iParam1 == 4 || iParam1 == 12)
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				}
				else
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
				}
				*uParam6 = 1;
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "DISTRICT_BAYOU_NWA";
				break;
			case 1:
				sVar0 = "DISTRICT_BIG_VALLEY";
				break;
			case 2:
				sVar0 = "DISTRICT_BLUEWATER_MARSH";
				break;
			case 3:
				sVar0 = "DISTRICT_CUMBERLAND_FOREST";
				break;
			case 4:
				sVar0 = "DISTRICT_GREAT_PLAINS";
				break;
			case 6:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 7:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 8:
				sVar0 = "DISTRICT_GUARMA";
				break;
			case 9:
				sVar0 = "DISTRICT_HEARTLANDS";
				break;
			case 10:
				sVar0 = "DISTRICT_ROANOAKE_RIDGE";
				break;
			case 11:
				sVar0 = "DISTRICT_SCARLETT_MEADOWS";
				break;
			case 12:
				sVar0 = "DISTRICT_TALL_TREES";
				break;
			case 13:
				sVar0 = "DISTRICT_GAPTOOTH_RIDGE";
				break;
			case 14:
				sVar0 = "DISTRICT_RIO_BRAVO";
				break;
			case 15:
				sVar0 = "DISTRICT_CHOLLA_SPRINGS";
				break;
			case 16:
				sVar0 = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam3)
		{
			case 0:
				sVar0 = "STATE_AMBARINO";
				break;
			case 2:
				sVar0 = "STATE_LEMOYNE";
				break;
			case 3:
				sVar0 = "STATE_WEST_ELIZABETH";
				break;
			case 4:
				sVar0 = "STATE_NEW_AUSTIN";
				break;
			case 1:
				sVar0 = "STATE_NEW_HANOVER";
				break;
			case 5:
				sVar0 = "STATE_GUARMA";
				break;
		}
	}
	return sVar0;
}

int func_646(int iParam0, bool bParam1, bool bParam2)
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
		iVar1 = __LIB_2__::func_465(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return __LIB_3__::func_106(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(__LIB_0__::func_162(bParam2), iParam0, 0);
	return iVar2;
}

void func_679(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, int iParam10, int iParam11, int iParam12, bool bParam13)
{
	float fVar0[4];
	int iVar5;
	int iVar6;
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		return;
	}
	iVar5 = 0;
	iVar6 = 0;
	switch (iParam10)
	{
		case 0:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar5 = 1;
			break;
		case 1:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar5 = 1;
			break;
		case 2:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 1f;
			fVar0[3] = 1f;
			iVar5 = 1;
			break;
		case 3:
			fVar0[0] = 0.35f;
			fVar0[1] = 0f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar6 = 1;
			break;
		case 4:
			fVar0[0] = 0.45f;
			fVar0[1] = 0.2f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar6 = 1;
			break;
		case 5:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar6 = 1;
			break;
		case 6:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 1f;
			fVar0[3] = 1f;
			iVar6 = 1;
			break;
	}
	*uParam0 = VOLUME::_CREATE_SPEED_VOLUME(iParam11, vParam1, vParam4, vParam7, iVar5, iVar6, &fVar0, iParam12, bParam13);
}

void func_788(int iParam0, bool bParam1)
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
	Var2[2 /*13*/][10] = func_1127();
	Var2[2 /*13*/][11] = func_1128();
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
	Var2[1 /*13*/][8] = func_1130();
	Var2[1 /*13*/][9] = func_1131();
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
	func_1136(1, bParam1);
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
	if (iParam0 == 3 && func_872(joaat("DOCUMENT_BOOK_HUNTING"), 1, 0) == 0)
	{
		__LIB_4__::func_495(10);
	}
	else
	{
		__LIB_4__::func_524(10);
	}
	if (iParam0 == 3 && func_872(joaat("DOCUMENT_BOOK_FORAGING"), 1, 0) == 0)
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

bool func_810(int iParam0, bool bParam1)
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
					if (func_179(iVar3, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1) != 0)
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

Vector3 func_845(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, float fParam10, int iParam11, int iParam12, bool bParam13)
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
			bVar11 = __LIB_0__::func_954(iVar0, iVar1);
			fVar3 = BUILTIN::VDIST(vParam0, vVar7);
			if (((((fVar3 < fVar2 && fVar3 > fParam10) && !__LIB_0__::func_86(vVar7)) && __LIB_1__::func_172(iVar0, bParam8, iParam12)) && !__LIB_0__::func_955(iVar0)) || bVar11)
			{
				if (func_1180(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
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

bool func_872(int iParam0, int iParam1, bool bParam2)
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
		if (!__LIB_2__::func_516(iParam0, 1))
		{
			return false;
		}
	}
	return func_646(iParam0, 0, bParam2) >= iParam1;
}

int func_975(vector3 vParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_1263(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1127()
{
	if (func_872(joaat("DOCUMENT_BOOK_FORAGING"), 1, 0))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-1739164071))
		{
			STREAMING::_REMOVE_IMAP(-1739164071);
		}
		return __LIB_1__::func_976();
	}
	return -1739164071;
}

int func_1128()
{
	if (func_872(joaat("DOCUMENT_BOOK_HUNTING"), 1, 0))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-1331617405))
		{
			STREAMING::_REMOVE_IMAP(-1331617405);
		}
		return __LIB_1__::func_976();
	}
	return -1331617405;
}

int func_1130()
{
	if (func_872(joaat("DOCUMENT_BOOK_HUNTING"), 1, 0))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-539928451))
		{
			STREAMING::_REMOVE_IMAP(-539928451);
		}
		return __LIB_1__::func_976();
	}
	return -539928451;
}

int func_1131()
{
	if (func_872(joaat("DOCUMENT_BOOK_FORAGING"), 1, 0))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-293283707))
		{
			STREAMING::_REMOVE_IMAP(-293283707);
		}
		return __LIB_1__::func_976();
	}
	return -293283707;
}

void func_1136(bool bParam0, bool bParam1)
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
				func_1355(iVar1, 0, 0);
				Global_1357549.f_575++;
			}
			Global_1357549.f_575 = 0;
		}
	}
	else if (__LIB_1__::func_533(1048576))
	{
		func_1355(iVar1, bParam1, 1);
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

bool func_1180(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	if (bParam5)
	{
		if (__LIB_0__::func_562(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || __LIB_1__::func_128(5))
	{
		if (__LIB_0__::func_978(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = __LIB_0__::func_979(vParam0);
	if (bParam6)
	{
		iVar1 = __LIB_1__::func_447(vParam0, 1);
		if (__LIB_0__::func_730(iVar1) || __LIB_0__::func_980(iVar0, 1))
		{
			return false;
		}
	}
	if (!func_1397(iParam3, iParam4))
	{
		return false;
	}
	if (!__LIB_1__::func_744())
	{
		if (__LIB_0__::func_981(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(bParam8))
	{
		if (!__LIB_1__::func_129(iVar0))
		{
			return false;
		}
		if (Global_1310720.f_23 >= 3)
		{
			if (Global_1310720.f_21 != -1)
			{
				if (Global_1310720.f_21 == __LIB_1__::func_447(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!__LIB_1__::func_460(iParam3, iParam4))
	{
		return false;
	}
	if (__LIB_0__::func_982(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!__LIB_0__::func_563(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return false;
		}
	}
	if (__LIB_0__::func_28())
	{
		if (VOLUME::_DOES_VOLUME_EXIST(bParam8))
		{
			if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(bParam8, vParam0))
			{
				return false;
			}
		}
		if (__LIB_6__::func_185(vParam0, iParam10) || __LIB_1__::func_624(vParam0, iParam10))
		{
			return false;
		}
	}
	else if (bParam9)
	{
		if (vParam0.x < -450f && vParam0.y < -600f)
		{
			return false;
		}
	}
	return true;
}

bool func_1263(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	struct<2> Var3;
	var uVar6;
	func_1424(iParam3, &vVar0, &Var3, &uVar6);
	if (func_1425(vParam0, vVar0, Var3, Var3.f_1, uVar6))
	{
		return true;
	}
	return false;
}

void func_1355(int iParam0, bool bParam1, bool bParam2)
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
		func_1490(iParam0, 0);
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

bool func_1397(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;
	int iVar6;
	int iVar7;
	struct<4> Var8;
	__LIB_0__::func_720(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	__LIB_0__::func_720(15, &Var8);
	Var8.f_2 = -1222062814;
	Var8.f_3 = uVar5;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var8.f_1), &Var8))
	{
		Var8.f_2 = 939842437;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar6, &Var8))
		{
			iVar7 = iVar6;
			return func_872(iVar7, 1, 0);
		}
	}
	return true;
}

void func_1424(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1616.769f, 1260.714f, 205.33f };
			*uParam2 = { 150f, 150f, 184f };
			*uParam3 = 0f;
			break;
		case 1:
			*uParam1 = { -5837.918f, -3738.832f, -20.6f };
			*uParam2 = { 40f, 35f, 70f };
			*uParam3 = 45f;
			break;
		case 2:
			*uParam1 = { -4160.689f, -2836.915f, -13.674f };
			*uParam2 = { 43f, 197f, 70f };
			*uParam3 = 38f;
			break;
		case 3:
			*uParam1 = { -4359.861f, -3083.375f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 4:
			*uParam1 = { -4446.777f, -2689.265f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 5:
			*uParam1 = { -4415.84f, -2199.774f, 22.356f };
			*uParam2 = { 13f, 21f, 47f };
			*uParam3 = 34f;
			break;
		case 6:
			*uParam1 = { -5554.764f, -2395.945f, 7.172f };
			*uParam2 = { 21f, 21f, 47f };
			*uParam3 = 0f;
			break;
		case 7:
			*uParam1 = { -3447.267f, -2257.723f, 7.172f };
			*uParam2 = { 40f, 23f, 47f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 693
			*uParam1 = { -1425.852f, -2676.848f, 73.224f };
			*uParam2 = { 40f, 25f, 47f };
			*uParam3 = 26f;
			Jump @2719; //curOff = 742
			*uParam1 = { -3829.438f, -3009.26f, -13.674f };
			*uParam2 = { 39f, 54f, 70f };
			*uParam3 = -46f;
			Jump @2719; //curOff = 791
			*uParam1 = { -4696.308f, -3302.809f, -13.674f };
			*uParam2 = { 104f, 57f, 70f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 836
			*uParam1 = { -5064.707f, -3139.862f, -13.674f };
			*uParam2 = { 23f, 26f, 70f };
			*uParam3 = 43f;
			Jump @2719; //curOff = 885
			*uParam1 = { -1631.875f, -2856.089f, -1.645f };
			*uParam2 = { 149f, 65f, 154f };
			*uParam3 = 39f;
			Jump @2719; //curOff = 934
			*uParam1 = { -347.889f, -131.72f, -1.645f };
			*uParam2 = { 52f, 40f, 154f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 979
			*uParam1 = { -2126.5f, 88.317f, 139.179f };
			*uParam2 = { 334f, 171f, 277f };
			*uParam3 = -45f;
			Jump @2719; //curOff = 1028
			*uParam1 = { 1574.061f, 1121.954f, 201.6f };
			*uParam2 = { 147f, 194f, 201f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 1073
			*uParam1 = { -2741.641f, -2375.761f, 31.492f };
			*uParam2 = { 86f, 61f, 50f };
			*uParam3 = 11f;
			Jump @2719; //curOff = 1122
			*uParam1 = { 1773.323f, -5976.334f, 71.662f };
			*uParam2 = { 34f, 34f, 100f };
			*uParam3 = -124f;
			Jump @2719; //curOff = 1171
			*uParam1 = { -2022.258f, -3039.913f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 1216
			*uParam1 = { 1394.172f, -647.735f, 72.455f };
			*uParam2 = { 19f, 18f, 100f };
			*uParam3 = 40f;
			Jump @2719; //curOff = 1265
			*uParam1 = { -242.336f, 1624.373f, 212.894f };
			*uParam2 = { 98f, 52f, 120f };
			*uParam3 = 51f;
			Jump @2719; //curOff = 1314
			*uParam1 = { -3543.512f, -3032.038f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 1359
			*uParam1 = { -4348.655f, -2427.582f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 1404
			*uParam1 = { -391.586f, 922.337f, 137.604f };
			*uParam2 = { 31f, 30f, 40f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 1449
			*uParam1 = { -2656.999f, 153.667f, 189.043f };
			*uParam2 = { 177f, 126f, 102f };
			*uParam3 = 52f;
			Jump @2719; //curOff = 1498
			*uParam1 = { 156.109f, 425.799f, 120f };
			*uParam2 = { 249f, 112f, 120f };
			*uParam3 = -36f;
			Jump @2719; //curOff = 1547
			*uParam1 = { -5868.5f, -2752.441f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 1592
			*uParam1 = { 898.505f, -335.252f, 48.403f };
			*uParam2 = { 56f, 152f, 70f };
			*uParam3 = -36f;
			Jump @2719; //curOff = 1641
			*uParam1 = { -889.947f, -171.356f, 90.537f };
			*uParam2 = { 180f, 95f, 100f };
			*uParam3 = 29f;
			Jump @2719; //curOff = 1690
			*uParam1 = { 571.454f, 1968.615f, 122.93f };
			*uParam2 = { 32f, 49f, 140f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 1735
			*uParam1 = { -2769.681f, -3210.99f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 1780
			*uParam1 = { -5409.034f, -3657.266f, -14.496f };
			*uParam2 = { 36f, 30f, 30f };
			*uParam3 = -24f;
			Jump @2719; //curOff = 1829
			*uParam1 = { 2453.293f, 290.68f, 69.615f };
			*uParam2 = { 35f, 42f, 19f };
			*uParam3 = -4f;
			Jump @2719; //curOff = 1878
			*uParam1 = { -643.042f, 278.359f, 95.5f };
			*uParam2 = { 70f, 67f, 65f };
			*uParam3 = -109f;
			Jump @2719; //curOff = 1927
			*uParam1 = { -118.339f, -24.853f, 96.907f };
			*uParam2 = { 84f, 69f, 37f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 1972
			*uParam1 = { -2863.456f, -2723.259f, 93.195f };
			*uParam2 = { 196f, 157f, 85f };
			*uParam3 = -18f;
			Jump @2719; //curOff = 2021
			*uParam1 = { -3484.814f, -3466.383f, -0.849f };
			*uParam2 = { 12f, 12f, 70f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 2066
			*uParam1 = { -3620.875f, -3575.926f, -0.849f };
			*uParam2 = { 126f, 86f, 70f };
			*uParam3 = -6f;
			Jump @2719; //curOff = 2115
			*uParam1 = { -1382.32f, -1400.969f, 56.092f };
			*uParam2 = { 22f, 32f, 86f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 2160
			*uParam1 = { -713.105f, -538.091f, 59.42f };
			*uParam2 = { 160f, 22f, 100f };
			*uParam3 = 26f;
			Jump @2719; //curOff = 2209
			*uParam1 = { 1083.588f, -693.478f, 48.403f };
			*uParam2 = { 45f, 46f, 70f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 2254
			*uParam1 = { -956.489f, 2175.227f, 307.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 2299
			*uParam1 = { 1457.354f, -1576.261f, 95.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 2344
			*uParam1 = { 348.488f, -669.098f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 2389
			*uParam1 = { 2008.052f, 617.155f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 2434
			*uParam1 = { 2099.835f, -283.012f, 42f };
			*uParam2 = { 21f, 29f, 49f };
			*uParam3 = 52f;
			Jump @2719; //curOff = 2483
			*uParam1 = { -1759.31f, -224.369f, 168f };
			*uParam2 = { 21f, 29f, 116f };
			*uParam3 = 56f;
			Jump @2719; //curOff = 2532
			*uParam1 = { 2142.39f, -1284.068f, 85f };
			*uParam2 = { 40f, 71f, 116f };
			*uParam3 = 70f;
			Jump @2719; //curOff = 2581
			*uParam1 = { 2309.119f, -343.031f, 85f };
			*uParam2 = { 15f, 15f, 116f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 2626
			*uParam1 = { -1815.147f, -2405.116f, 71f };
			*uParam2 = { 25f, 25f, 50f };
			*uParam3 = 0f;
			Jump @2719; //curOff = 2671
			*uParam1 = { -2269.232f, -1145.787f, 214f };
			*uParam2 = { 37f, 33f, 68f };
			*uParam3 = 0f;
		}
bool func_1425(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	vector3 vVar0;
	struct<2> Var3;
	float fVar6;
	vVar0 = { vParam0 - vParam3 };
	Var3 = ((vVar0.x * BUILTIN::COS(fParam8)) + (vVar0.y * BUILTIN::SIN(fParam8)));
	Var3.f_1 = ((vVar0.x * BUILTIN::SIN(fParam8)) - (vVar0.y * BUILTIN::COS(fParam8)));
	fVar6 = (((Var3 * Var3) / (fParam6 * fParam6)) + ((Var3.f_1 * Var3.f_1) / (fParam7 * fParam7)));
	return fVar6 <= 1f;
}

void func_1490(int iParam0, bool bParam1)
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
	if (iParam0 == 3 && ((func_872(iVar0[Global_1357549.f_575], 1, 0) || __LIB_6__::func_114(iVar0[Global_1357549.f_575])) || bParam1))
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

