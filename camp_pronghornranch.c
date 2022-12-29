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
	var uLocal_3514 = 0;
	var uLocal_3515 = 0;
	var uLocal_3516 = 0;
	var uLocal_3517 = 0;
	var uLocal_3518 = 0;
	var uLocal_3519 = 6;
	var uLocal_3520 = 0;
	var uLocal_3521 = 0;
	var uLocal_3522 = 0;
	var uLocal_3523 = 0;
	var uLocal_3524 = 0;
	var uLocal_3525 = 0;
	var uLocal_3526 = 6;
	var uLocal_3527 = 0;
	var uLocal_3528 = 0;
	var uLocal_3529 = 0;
	var uLocal_3530 = 0;
	var uLocal_3531 = 0;
	var uLocal_3532 = 0;
	var uLocal_3533 = 0;
	var uLocal_3534 = 0;
	var uLocal_3535 = 6;
	var uLocal_3536 = 0;
	var uLocal_3537 = 0;
	var uLocal_3538 = 0;
	var uLocal_3539 = 0;
	var uLocal_3540 = 0;
	var uLocal_3541 = 0;
	var uLocal_3542 = 6;
	var uLocal_3543 = 0;
	var uLocal_3544 = 0;
	var uLocal_3545 = 0;
	var uLocal_3546 = 0;
	var uLocal_3547 = 0;
	var uLocal_3548 = 0;
	var uLocal_3549 = 4;
	var uLocal_3550 = 0;
	var uLocal_3551 = 0;
	var uLocal_3552 = 0;
	var uLocal_3553 = 0;
	var uLocal_3554 = 3;
	var uLocal_3555 = 0;
	var uLocal_3556 = 0;
	var uLocal_3557 = 0;
	var uLocal_3558 = 0;
	var uLocal_3559 = 0;
	var uLocal_3560 = 0;
	var uLocal_3561 = 0;
	var uLocal_3562 = 0;
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
	var uLocal_3576 = 24;
	var uLocal_3577 = 0;
	var uLocal_3578 = 0;
	var uLocal_3579 = 0;
	var uLocal_3580 = 0;
	var uLocal_3581 = 0;
	var uLocal_3582 = 0;
	var uLocal_3583 = 0;
	var uLocal_3584 = 0;
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
	var uLocal_3605 = 0;
	var uLocal_3606 = 0;
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
	var uLocal_3627 = 0;
	var uLocal_3628 = 0;
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
	var uLocal_3649 = 0;
	var uLocal_3650 = 0;
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
	var uLocal_3671 = 0;
	var uLocal_3672 = 0;
	var uLocal_3673 = 0;
	struct<45> Local_3674[1];
	bool bLocal_3720 = false;
	bool bLocal_3721 = false;
	int iLocal_3722 = 0;
	int iLocal_3723[5] = { 0, 0, 0, 0, 0 };
	int iLocal_3729[5] = { 0, 0, 0, 0, 0 };
	var uLocal_3735[5] = { 0, 0, 0, 0, 0 };
	int iLocal_3741[5] = { 0, 0, 0, 0, 0 };
	struct<8> Local_3747 = { 0, 73, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_3755 = 0;
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
	__LIB_5__::func_808(0, 14056, 0);
	__LIB_5__::func_808(1, 14413, 1);
	__LIB_5__::func_808(2, 14429, 1);
	__LIB_5__::func_808(3, 14492, 1);
	__LIB_5__::func_808(4, 14523, 2);
	__LIB_5__::func_808(5, 14637, 16);
	__LIB_5__::func_808(6, 14772, 1);
	__LIB_5__::func_808(7, 15386, 4);
	__LIB_5__::func_808(8, 15480, 1);
	__LIB_5__::func_808(9, 15610, 128);
	__LIB_5__::func_808(10, 15619, 792);
	__LIB_5__::func_808(11, 15667, 1024);
}

void func_6(var uParam0)
{
	struct<2> Var0;
	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(uParam0, &Var0, 65);
	__LIB_5__::func_813(uParam0, 0, 16347, 16454, 16893);
	__LIB_5__::func_813(uParam0, 1, 17181, 17227, 17693);
	__LIB_5__::func_813(uParam0, 2, 17723, 17761, 18189);
	__LIB_5__::func_813(uParam0, 3, 18219, 18245, 18324);
	__LIB_5__::func_813(uParam0, 4, 18332, 18486, 18324);
	__LIB_6__::func_268(uParam0, 0);
}

void func_7(var uParam0)
{
	struct<2> Var0;
	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(uParam0, &Var0, 65);
	__LIB_5__::func_813(uParam0, 0, 18558, 18636, 18324);
	__LIB_5__::func_813(uParam0, 1, 19792, 19919, 18324);
	__LIB_5__::func_813(uParam0, 2, 18324, 20761, 18324);
	__LIB_5__::func_813(uParam0, 3, 20919, 21465, 18324);
	__LIB_5__::func_813(uParam0, 4, 22093, 22323, 18324);
	__LIB_5__::func_813(uParam0, 5, 22746, 22779, 18324);
	__LIB_5__::func_813(uParam0, 6, 23496, 23581, 18324);
	__LIB_6__::func_268(uParam0, 0);
}

void func_8(var uParam0)
{
	struct<2> Var0;
	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(uParam0, &Var0, 65);
	__LIB_5__::func_813(uParam0, 0, 23636, 23718, 18324);
	__LIB_5__::func_813(uParam0, 1, 24039, 24075, 18324);
	__LIB_5__::func_813(uParam0, 2, 24544, 24675, 25084);
	__LIB_5__::func_813(uParam0, 3, 25103, 25170, 25574);
	__LIB_6__::func_268(uParam0, 0);
}

void func_9()
{
	struct<2> Var0;
	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(&(Local_18.f_1934), &Var0, 65);
	__LIB_5__::func_813(&(Local_18.f_1934), 0, 25643, 25680, 18324);
	__LIB_5__::func_813(&(Local_18.f_1934), 1, 25863, 25886, 18324);
	__LIB_5__::func_813(&(Local_18.f_1934), 2, 26091, 26138, 18324);
	__LIB_5__::func_813(&(Local_18.f_1934), 3, 26412, 26463, 18324);
	__LIB_5__::func_813(&(Local_18.f_1934), 4, 26482, 26538, 18324);
	__LIB_6__::func_268(&(Local_18.f_1934), 0);
}

void func_10(var uParam0)
{
	int iVar0;
	int iVar1;
	uParam0->f_45 = 7;
	uParam0->f_47 = 7;
	uParam0->f_1714 = { __LIB_6__::func_188(uParam0->f_45) };
	uParam0->f_1717 = 0f;
	uParam0->f_49 = 1;
	if (!__LIB_5__::func_807())
	{
		__LIB_6__::func_617();
	}
	iLocal_3723[0] = joaat("PHR_RANCH_HAND1");
	iLocal_3723[1] = joaat("PHR_RANCH_HAND2");
	iLocal_3723[2] = joaat("PHR_RANCH_HAND3");
	iLocal_3723[3] = joaat("PHR_RANCH_HAND4");
	iLocal_3723[4] = joaat("PHR_RANCH_HAND5");
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3729[iVar0]))
		{
			iVar1 = PERSCHAR::_0x112DDF56300BC6E5(iLocal_3723[iVar0]);
			if (PERSCHAR::_0x800DF3FC913355F3(iVar1))
			{
				iLocal_3729[iVar0] = PERSCHAR::_0x31C70A716CAE1FEE(iVar1);
			}
		}
		iVar0++;
	}
	__LIB_5__::func_548(262144);
	if (!__LIB_6__::func_272())
	{
		__LIB_5__::func_823(10, 3);
	}
	__LIB_6__::func_618(&(Local_3747.f_7), 0);
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
						func_182(Global_1357549.f_1659[iVar2], 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
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
	if (!bLocal_3720 && __LIB_1__::func_895(5000))
	{
		func_268();
	}
	if ((MISC::GET_GAME_TIMER() - Global_1898438) < 300000)
	{
		if (__LIB_5__::func_783(127) == 0)
		{
			__LIB_4__::func_495(127);
		}
	}
	else
	{
		__LIB_4__::func_524(127);
	}
	func_272();
	func_273(&Local_3747);
	func_274();
	func_275();
	if ((ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::IS_ENTITY_DEAD(Global_35)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, false, false), __LIB_12__::func_467(), true) <= 100f)
	{
		func_279(&uLocal_3513, 1024, &uLocal_3513, __LIB_12__::func_468(), 0, __LIB_12__::func_469(), 0, 0, 0);
	}
}

void func_45(int iParam0)
{
	int iVar0;
	iParam0->f_1713 = 5;
	iVar0 = 0;
	Global_1357549.f_3[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("PronghornRanch volCampAreas[CVA_INNER]");
	__LIB_6__::func_354(&(Global_1357549.f_3[0]), &iVar0, 0, -2570.858f, 344.2454f, 157.9509f, 0f, 0f, 0f, 24.55f, 21.5f, 45f, joaat("VOLBOX"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[0]), &iVar0, 0, -2558.72f, 353.7069f, 158.0643f, 0f, 0f, 0f, 6.25f, 14.25f, 45f, joaat("VOLBOX"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[0]), &iVar0, 0, -2590.621f, 411.7829f, 157.033f, 0f, 0f, -30f, 11f, 18f, 45f, joaat("VOLBOX"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[0]), &iVar0, 0, -2594.4f, 457.3f, 154.6921f, 0f, 0f, -9.999998f, 7.1f, 10.25f, 45f, joaat("VOLBOX"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[0]), &iVar0, 0, -2591.77f, 440.0676f, 155.5328f, 0f, 0f, 0f, 14.75f, 7f, 45f, joaat("VOLBOX"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[0]), &iVar0, 0, -2596.899f, 434.25f, 156.581f, 0f, 0f, 0f, 4.5f, 9f, 45f, joaat("VOLBOX"), 0);
	Global_1357549.f_3[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("PronghornRanch volCampAreas[CVA_OUTER]");
	Global_1357549.f_3[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("PronghornRanch volCampAreas[CVA_OUTER_THRESHOLD]");
	__LIB_6__::func_354(&(Global_1357549.f_3[2]), &(Global_1357549.f_3[3]), 2, -2548.949f, 325.763f, 160f, 0f, 0f, 9.000001f, 55f, 13f, 60f, joaat("VOLBOX"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[2]), &(Global_1357549.f_3[3]), 2, -2579.138f, 330.9276f, 160f, 0f, 0f, -30f, 19f, 16f, 60f, joaat("VOLCYLINDER"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[2]), &(Global_1357549.f_3[3]), 2, -2518.681f, 397.0634f, 160f, 0f, 0f, -4.5f, 25f, 127f, 60f, joaat("VOLBOX"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[2]), &(Global_1357549.f_3[3]), 2, -2534.318f, 495.423f, 160f, 0f, 0f, -9.000002f, 13f, 10f, 60f, joaat("VOLBOX"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[2]), &(Global_1357549.f_3[3]), 2, -2600.49f, 392.029f, 160f, 0f, 0f, -3f, 10f, 34f, 60f, joaat("VOLBOX"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[2]), &(Global_1357549.f_3[3]), 2, -2518.894f, 334.922f, 160f, 0f, 0f, -12f, 7f, 11f, 60f, joaat("VOLCYLINDER"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[2]), &(Global_1357549.f_3[3]), 2, -2505.076f, 442.9265f, 160f, 0f, 0f, -6f, 4f, 22f, 60f, joaat("VOLCYLINDER"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[2]), &(Global_1357549.f_3[3]), 2, -2552.524f, 396.2589f, 160f, 0f, 0f, 0f, 64f, 145f, 60f, joaat("VOLBOX"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[2]), &(Global_1357549.f_3[3]), 2, -2505.803f, 461.1734f, 160f, 0f, 0f, 2.000002f, 10f, 13f, 60f, joaat("VOLBOX"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[2]), &(Global_1357549.f_3[3]), 2, -2522.517f, 477.1015f, 160f, 0f, 0f, 42f, 19f, 25f, 60f, joaat("VOLCYLINDER"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[2]), &(Global_1357549.f_3[3]), 2, -2610.8f, 450.1638f, 160f, 0f, 0f, 13f, 4f, 16f, 60f, joaat("VOLCYLINDER"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[2]), &(Global_1357549.f_3[3]), 2, -2589.791f, 359.6104f, 160f, 0f, 0f, 6f, 16f, 43f, 60f, joaat("VOLCYLINDER"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[2]), &(Global_1357549.f_3[3]), 2, -2568.966f, 463.1732f, 160f, 0f, 0f, 25f, 86f, 43f, 60f, joaat("VOLBOX"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[2]), &(Global_1357549.f_3[3]), 2, -2593.714f, 423.6152f, 160f, 0f, 0f, 9.000002f, 28f, 76f, 60f, joaat("VOLBOX"), 0);
	Global_1357549.f_3[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("PronghornRanch volCampAreas[CVA_SURROUNDING]");
	Global_1357549.f_3[5] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("PronghornRanch volCampAreas[CVA_SURROUNDING_THRESHOLD]");
	__LIB_6__::func_354(&(Global_1357549.f_3[4]), &(Global_1357549.f_3[5]), 4, -2547.255f, 405.9721f, 160.379f, 0f, 0f, -6f, 130f, 214f, 60f, joaat("VOLBOX"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[4]), &(Global_1357549.f_3[5]), 4, -2600.745f, 471.1957f, 160.0371f, 0f, 0f, -6f, 19f, 52f, 60f, joaat("VOLCYLINDER"), 0);
	Global_1357549.f_3[6] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2594.385f, 457.3062f, 147.4835f, 0f, 0f, -10.00216f, 6.558199f, 9.498734f, 2.963989f, "PronghornRanch volCampAreas[CVA_PROPERTY]");
	__LIB_0__::func_68(-1220186332, 0, 0);
	__LIB_0__::func_68(240622919, 0, 0);
	__LIB_0__::func_68(663931308, 0, 0);
	__LIB_0__::func_68(-647975607, 0, 0);
	__LIB_0__::func_68(-1899662469, 0, 0);
	__LIB_0__::func_68(1535511805, 0, 0);
	__LIB_1__::func_948(-1220186332, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(240622919, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(663931308, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-647975607, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-1899662469, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(1535511805, 0, 0, 0, 1, 0, 0, 0);
	OBJECT::_0xA93F925F1942E434(-1220186332, 1);
	OBJECT::_0xA93F925F1942E434(240622919, 1);
	OBJECT::_0xA93F925F1942E434(663931308, 1);
	OBJECT::_0xA93F925F1942E434(-647975607, 1);
	OBJECT::_0x1BC47A9DEDC8DF5D(-1899662469, 0);
	OBJECT::_0x1BC47A9DEDC8DF5D(1535511805, 0);
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
	func_364(iParam0);
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

int func_68()
{
	bool bVar0;
	int iVar1;
	if (!MISC::IS_BIT_SET(Local_18.f_43, 3))
	{
		Local_18.f_42 = MISC::GET_GAME_TIMER() + 15000;
		Global_1357549.f_2 = 0;
		func_268();
		MISC::SET_BIT(&(Local_18.f_43), 3);
	}
	bVar0 = false;
	if (func_422(&Local_18))
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
	func_425(&Local_18);
	__LIB_0__::func_11();
	__LIB_6__::func_610(&(Local_18.f_51));
	__LIB_0__::func_11();
	__LIB_5__::func_871();
	__LIB_6__::func_627(1);
	func_268();
	__LIB_6__::func_486();
	return 1;
}

int func_182(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
				func_535(Global_1360165[iParam0 /*1157*/], vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
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

void func_268()
{
	if (__LIB_1__::func_198(joaat("CSTAG_FLOW_LAR1_POST"), 1))
	{
		if (!bLocal_3720)
		{
			__LIB_8__::func_352(719, "pronghornRanch/Phr_Ranch_Hand1_PostLaramie1");
			__LIB_8__::func_352(720, "pronghornRanch/Phr_Ranch_Hand2_PostLaramie1");
			__LIB_8__::func_352(721, "pronghornRanch/Phr_Ranch_Hand3_PostLaramie1");
			__LIB_8__::func_352(722, "pronghornRanch/Phr_Ranch_Hand4_PostLaramie1");
			__LIB_8__::func_352(723, "pronghornRanch/Phr_Ranch_Hand5_PostLaramie1");
			__LIB_8__::func_352(714, "pronghornRanch/Phr_Abe_PostLaramie1");
			bLocal_3720 = true;
			bLocal_3721 = true;
		}
	}
	else if (!bLocal_3721)
	{
		PERSCHAR::_0x8B44273A92CD406C(__LIB_0__::func_118(719));
		PERSCHAR::_0x8B44273A92CD406C(__LIB_0__::func_118(720));
		PERSCHAR::_0x8B44273A92CD406C(__LIB_0__::func_118(721));
		PERSCHAR::_0x8B44273A92CD406C(__LIB_0__::func_118(722));
		PERSCHAR::_0x8B44273A92CD406C(__LIB_0__::func_118(723));
		PERSCHAR::_0x8B44273A92CD406C(__LIB_0__::func_118(714));
		bLocal_3721 = true;
	}
}

void func_272()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3729[iVar0]))
		{
			iLocal_3729[iVar0] = PERSCHAR::_0x31C70A716CAE1FEE(PERSCHAR::_0x112DDF56300BC6E5(iLocal_3723[iVar0]));
			iLocal_3741[iVar0] = 0;
		}
		if (!iLocal_3741[iVar0])
		{
			if (!__LIB_0__::func_255(iLocal_3729[iVar0], 0))
			{
				__LIB_0__::func_734(iLocal_3729[iVar0]);
				__LIB_0__::func_736(iLocal_3729[iVar0]);
				if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iLocal_3729[iVar0]) != joaat("REL_PLAYER_ALLY"))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_3729[iVar0], joaat("REL_PLAYER_ALLY"));
				}
				iLocal_3741[iVar0] = 1;
			}
		}
		if (__LIB_1__::func_533(131072))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3729[iVar0]))
			{
				if (!PED::GET_PED_CONFIG_FLAG(iLocal_3729[iVar0], 331, true))
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_3729[iVar0], 331, true);
				}
				if (!PED::GET_PED_CONFIG_FLAG(iLocal_3729[iVar0], 330, true))
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_3729[iVar0], 330, true);
				}
			}
		}
		iVar0++;
	}
	func_664();
}

void func_273(var uParam0)
{
	switch (uParam0->f_7)
	{
		case 0:
			if (__LIB_1__::func_205(Global_35, Global_1357549.f_3[3], 1, 0) || (__LIB_0__::func_702(__LIB_3__::func_918(62)) && __LIB_0__::func_94(Global_35, __LIB_1__::func_204(62), 1) < 10f))
			{
				__LIB_18__::func_293(uParam0);
				__LIB_6__::func_618(&(uParam0->f_7), 1);
			}
			break;
		case 1:
			if ((MISC::GET_FRAME_COUNT() % 30) == 0)
			{
				Global_40.f_4283.f_575 = Global_1899515;
				__LIB_1__::func_446(&(Global_40.f_4283.f_575), 0, 0, 24, 0, 0, 0, 0);
			}
			if (uParam0->f_3)
			{
				if (!STREAMING::_0x99F92061EFE908BA())
				{
					SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("CARAVAN_ABSENCE_SCENE"));
					__LIB_0__::func_7(&Global_1935630, 8388608);
					__LIB_6__::func_618(&(uParam0->f_7), 3);
				}
			}
			else if (!__LIB_1__::func_205(Global_35, Global_1357549.f_3[2], 1, 0))
			{
				__LIB_0__::func_8(&Global_1935630, 8388608);
				__LIB_6__::func_618(&(uParam0->f_7), 0);
			}
			break;
		case 3:
			if (AUDIO::PREPARE_MUSIC_EVENT("PH_TIMELAPSE_START_ONESHOT") && SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("CARAVAN_ABSENCE_SCENE")))
			{
				if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CARAVAN_ABSENCE_SCENE")) > 0)
				{
					__LIB_6__::func_618(&(uParam0->f_7), 5);
				}
				else if (AUDIO::TRIGGER_MUSIC_EVENT("PH_TIMELAPSE_START_ONESHOT"))
				{
					__LIB_1__::func_148(&(uParam0->f_4));
					__LIB_6__::func_618(&(uParam0->f_7), 4);
				}
			}
			break;
		case 4:
			if (__LIB_1__::func_285(&(uParam0->f_4), 1f))
			{
				__LIB_0__::func_37(&(uParam0->f_4));
				SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(joaat("CARAVAN_ABSENCE_SCENE"), uParam0, 3, 1024);
				__LIB_6__::func_618(&(uParam0->f_7), 5);
			}
			break;
		case 5:
			if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CARAVAN_ABSENCE_SCENE")) == 0)
			{
				__LIB_6__::func_618(&(uParam0->f_7), 10);
			}
			break;
		case 10:
			SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("CARAVAN_ABSENCE_SCENE"));
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			__LIB_0__::func_703(0, -1);
			uParam0->f_3 = 0;
			__LIB_6__::func_618(&(uParam0->f_7), 1);
			break;
	}
}

void func_274()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	switch (iLocal_3755)
	{
		case 0:
			HUD::_TEXT_DATABASE_REQUEST("CAPROAU");
			if (HUD::_TEXT_DATABASE_HAS_LOADED("CAPROAU"))
			{
				iLocal_3755 = 1;
			}
			break;
		case 1:
			if (func_668())
			{
				iLocal_3755 = 2;
			}
			break;
		case 2:
			if (!__LIB_2__::func_776())
			{
				func_669(&Local_3674);
			}
			break;
	}
}

void func_275()
{
	int iVar0;
	var uVar1;
	var uVar2;
	if ((func_670(Global_40.f_4283.f_576.f_1, 18) || Global_40.f_4283.f_576 < 1) && Global_40.f_4283.f_576 <= 11)
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(-2571.687f, 346.2881f, 152.0809f);
		if (INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == iVar0)
			{
				if (AUDIO::LOAD_STREAM(func_671(0), "Pronghorn_CAPRO_Evenings_Sounds"))
				{
					uVar1 = AUDIO::_0x0556C784FA056628(func_671(0), "Pronghorn_CAPRO_Evenings_Sounds");
					if (!AUDIO::IS_STREAM_PLAYING(uVar1))
					{
						AUDIO::PLAY_STREAM_FROM_POSITION(-2565f, 348.2f, 152.4f, uVar1);
						Global_40.f_4283.f_576++;
						Global_40.f_4283.f_576.f_1 = __LIB_0__::func_23();
						iLocal_3722 = 1;
						AUDIO::SET_AMBIENT_ZONE_STATE("AZ_camp_pronghorn_ranch_capro_eve", true, true);
					}
				}
			}
		}
	}
	if (iLocal_3722 == 1)
	{
		uVar2 = AUDIO::_0x0556C784FA056628(func_671(1), "Pronghorn_CAPRO_Evenings_Sounds");
		if (!AUDIO::IS_STREAM_PLAYING(uVar2))
		{
			iLocal_3722 = 0;
			AUDIO::SET_AMBIENT_ZONE_STATE("AZ_camp_pronghorn_ranch_capro_eve", false, false);
		}
	}
}

int func_279(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, char* sParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	vector3 vVar1;
	if (__LIB_0__::func_2() != -1)
	{
		return 0;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(*uParam2, false))
	{
		return 0;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(__LIB_0__::func_559(iParam3)))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, __LIB_0__::func_559(iParam3), true, 0))
	{
		return 0;
	}
	if (bParam8)
	{
		vVar1 = { __LIB_6__::func_619(iParam1) };
		if (!__LIB_0__::func_86(vVar1))
		{
			if (__LIB_1__::func_989(vVar1, 1, 776, 0))
			{
				return 0;
			}
		}
	}
	if ((bParam6 && __LIB_0__::func_296(128, 0, 1)) && !iParam1 == 64)
	{
		return 0;
	}
	if (bParam7 && __LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 1, 1, 1))
	{
		return 0;
	}
	uParam0->f_1 = iParam1;
	uParam0->f_5 = __LIB_1__::func_293(__LIB_3__::func_574(iParam1), 0, 3, __LIB_3__::func_575(iParam1));
	func_678(&(uParam0->f_5), &(uParam0->f_3));
	if (!__LIB_0__::func_27(uParam0->f_3, 4))
	{
		iVar0 = 4;
	}
	else if (!__LIB_0__::func_27(uParam0->f_3, 8))
	{
		iVar0 = 8;
	}
	else if (!__LIB_0__::func_27(uParam0->f_3, 16))
	{
		iVar0 = 16;
	}
	else if (!__LIB_0__::func_27(uParam0->f_3, 32))
	{
		iVar0 = 32;
	}
	else if (!__LIB_0__::func_27(uParam0->f_3, 64))
	{
		iVar0 = 64;
	}
	if (iParam1 == 32768)
	{
		if (!func_680(uParam0))
		{
			return 0;
		}
	}
	if (!__LIB_0__::func_27(uParam0->f_3, iVar0))
	{
		if (__LIB_0__::func_27(uParam0->f_3, 2))
		{
			if (!SCRIPTS::IS_THREAD_ACTIVE(*uParam2, false))
			{
				SCRIPTS::REQUEST_SCRIPT(sParam5);
				if (SCRIPTS::HAS_SCRIPT_LOADED(sParam5))
				{
					uParam0->f_52 = { __LIB_6__::func_620(iParam1) };
					uParam0->f_5 = __LIB_1__::func_293(__LIB_3__::func_574(iParam1), 0, 3, __LIB_3__::func_575(iParam1));
					*uParam2 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(sParam5, uParam0, 59, 1024);
					SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam5);
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_364(int iParam0)
{
	OBJECT::_0xA93F925F1942E434(-1220186332, 0);
	OBJECT::_0xA93F925F1942E434(240622919, 0);
	OBJECT::_0xA93F925F1942E434(663931308, 0);
	OBJECT::_0xA93F925F1942E434(-647975607, 0);
	OBJECT::_0x1BC47A9DEDC8DF5D(-1899662469, 1);
	OBJECT::_0x1BC47A9DEDC8DF5D(1535511805, 1);
	OBJECT::REMOVE_DOOR_FROM_SYSTEM(-1220186332);
	OBJECT::REMOVE_DOOR_FROM_SYSTEM(240622919);
	OBJECT::REMOVE_DOOR_FROM_SYSTEM(663931308);
	OBJECT::REMOVE_DOOR_FROM_SYSTEM(-647975607);
	OBJECT::REMOVE_DOOR_FROM_SYSTEM(-1899662469);
	OBJECT::REMOVE_DOOR_FROM_SYSTEM(1535511805);
	if (HUD::_DOES_TEXT_DATABASE_EXIST("CAPROAU"))
	{
		if (HUD::_TEXT_DATABASE_HAS_LOADED("CAPROAU"))
		{
			HUD::_TEXT_DATABASE_DELETE("CAPROAU");
		}
	}
	func_805();
	__LIB_6__::func_672(&uLocal_3513);
	func_807();
	__LIB_5__::func_547(262144);
}

bool func_422(var uParam0)
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
			if (func_856(uParam0->f_46, 0))
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

void func_425(var uParam0)
{
	vector3 vVar0;
	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	__LIB_1__::func_65(22, &vVar0, 1);
	__LIB_1__::func_806(&vVar0, 1, 1);
}

void func_535(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_535(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_535(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_664()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	vector3 vVar7;
	bool bVar10;
	bool bVar11;
	if (__LIB_1__::func_533(65536))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (VOLUME::_DOES_VOLUME_EXIST(uLocal_3735[iVar0]))
			{
				VOLUME::_DELETE_VOLUME(uLocal_3735[iVar0]);
			}
			func_1025(iVar0);
			iVar0++;
		}
		return;
	}
	if (CAM::IS_SCREEN_FADED_IN())
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			bVar2 = ENTITY::DOES_ENTITY_EXIST(iLocal_3729[iVar1]);
			bVar3 = VOLUME::_DOES_VOLUME_EXIST(uLocal_3735[iVar1]);
			if (bVar2)
			{
				bVar4 = PED::GET_PED_CONFIG_FLAG(iLocal_3729[iVar1], 344, true);
				bVar5 = PED::GET_PED_CONFIG_FLAG(iLocal_3729[iVar1], 56, true);
				bVar6 = PED::GET_PED_CONFIG_FLAG(iLocal_3729[iVar1], 57, true);
			}
			if (bVar2 && !bVar4)
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_3729[iVar1], 344, true);
			}
			else if (PED::IS_PED_DEAD_OR_DYING(iLocal_3729[iVar1], true))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_3729[iVar1], 344, false);
			}
			if (bVar2 && !bVar5)
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_3729[iVar1], 56, true);
			}
			else if (PED::IS_PED_DEAD_OR_DYING(iLocal_3729[iVar1], true))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_3729[iVar1], 56, false);
			}
			if (bVar2 && !bVar6)
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_3729[iVar1], 57, true);
			}
			else if (PED::IS_PED_DEAD_OR_DYING(iLocal_3729[iVar1], true))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_3729[iVar1], 57, false);
			}
			if (bVar3)
			{
				if (bVar2)
				{
					vVar7 = { VOLUME::_GET_VOLUME_SCALE(uLocal_3735[iVar1]) };
					bVar10 = vVar7.x < (1.4f - 0.1f);
					bVar11 = PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID());
					if (bVar10 && bVar11)
					{
						VOLUME::_SET_VOLUME_SCALE(uLocal_3735[iVar1], 1.4f, 1.4f, 2f);
					}
					else if (!bVar10 && !bVar11)
					{
						VOLUME::_SET_VOLUME_SCALE(uLocal_3735[iVar1], 0.2f, 0.2f, 2f);
					}
				}
				else
				{
					VOLUME::_DELETE_VOLUME(uLocal_3735[iVar1]);
				}
			}
			else if (bVar2)
			{
				uLocal_3735[iVar1] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), ENTITY::GET_ENTITY_COORDS(iLocal_3729[iVar1], true, false), 0f, 0f, 0f, 0.2f, 0.2f, 2f);
				if (VOLUME::_DOES_VOLUME_EXIST(uLocal_3735[iVar1]))
				{
					PED::_0x7C00CFC48A782DC0(uLocal_3735[iVar1], iLocal_3729[iVar1], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				}
			}
			iVar1++;
		}
	}
}

bool func_668()
{
	var uVar0;
	uVar0 = 5;
	__LIB_4__::func_857(&Local_3674, 714, &uVar0, 0, 0);
	Local_3674[0 /*45*/].f_43 = 171110;
	Local_3674[0 /*45*/].f_44 = 171410;
	__LIB_2__::func_811(&(Local_3674[0 /*45*/]), 512);
	return true;
}

void func_669(var uParam0)
{
	func_1034(uParam0);
}

bool func_670(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (!__LIB_0__::func_923(iParam0))
	{
		return false;
	}
	__LIB_16__::func_694(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return true;
	}
	return false;
}

char* func_671(bool bParam0)
{
	if (Global_40.f_4283.f_576 < 0)
	{
		Global_40.f_4283.f_576 = 0;
	}
	if (bParam0)
	{
		switch (Global_40.f_4283.f_576)
		{
			case 1:
				return "EVE1";
			case 2:
				return "EVE2";
			case 3:
				return "EVE3";
			case 4:
				return "EVE4";
			case 5:
				return "EVE5";
			case 6:
				return "EVE6";
			case 7:
				return "EVE7";
			case 8:
				return "EVE8";
			case 9:
				return "EVE9";
			case 10:
				return "EVE10";
			case 11:
				return "EVE11";
			case 12:
				return "EVE12";
			default:
				break;
		}
	}
	else
	{
		switch (Global_40.f_4283.f_576)
		{
			case 0:
				return "EVE1";
			case 1:
				return "EVE2";
			case 2:
				return "EVE3";
			case 3:
				return "EVE4";
			case 4:
				return "EVE5";
			case 5:
				return "EVE6";
			case 6:
				return "EVE7";
			case 7:
				return "EVE8";
			case 8:
				return "EVE9";
			case 9:
				return "EVE10";
			case 10:
				return "EVE11";
			case 11:
				return "EVE12";
			default:
				break;
		}
	}
	return "EVE1";
}

int func_678(var uParam0, int iParam1)
{
	if (__LIB_0__::func_6(*uParam0))
	{
		*iParam1 = __LIB_0__::func_895(*uParam0);
		if (!__LIB_0__::func_27(*iParam1, 2))
		{
			__LIB_1__::func_683(iParam1, 2);
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

bool func_680(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	if ((!__LIB_0__::func_27(uParam0->f_3, 32768) && __LIB_6__::func_624(uParam0->f_1, &fVar1)) && __LIB_6__::func_930(uParam0->f_1, 0, &fVar0))
	{
		fVar2 = __LIB_3__::func_992();
		if ((__LIB_3__::func_992() - fVar1) >= fVar0)
		{
			__LIB_1__::func_683(&(uParam0->f_3), 32768);
		}
	}
	if (__LIB_0__::func_27(uParam0->f_3, 32768))
	{
		return true;
	}
	return false;
}

void func_805()
{
	if (__LIB_0__::func_75(&(Local_3674[0 /*45*/].f_34)))
	{
		__LIB_0__::func_37(&(Local_3674[0 /*45*/].f_34));
	}
	__LIB_0__::func_172(Local_3674[0 /*45*/].f_38);
	__LIB_0__::func_172(Local_3674[0 /*45*/].f_39);
}

void func_807()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(uLocal_3735[iVar0]))
		{
			VOLUME::_DELETE_VOLUME(uLocal_3735[iVar0]);
		}
		func_1025(iVar0);
		iVar0++;
	}
}

bool func_856(int iParam0, bool bParam1)
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
					if (func_182(iVar3, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1) != 0)
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

void func_1025(int iParam0)
{
	int iVar0;
	iVar0 = iLocal_3729[iParam0];
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::GET_PED_CONFIG_FLAG(iVar0, 344, true))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 344, false);
		}
		if (PED::GET_PED_CONFIG_FLAG(iVar0, 56, true))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 56, false);
		}
		if (PED::GET_PED_CONFIG_FLAG(iVar0, 57, true))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 57, false);
		}
		if (PED::GET_PED_CONFIG_FLAG(iVar0, 331, true))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 331, false);
		}
		if (PED::GET_PED_CONFIG_FLAG(iVar0, 330, true))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 330, false);
		}
	}
}

Vector3 func_1031(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_1__::func_334(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return __LIB_1__::func_344("");
	}
	if (__LIB_6__::func_621(uParam0, 4))
	{
		return __LIB_1__::func_344("");
	}
	if (__LIB_0__::func_181())
	{
		if ((__LIB_6__::func_685(26, 1, 2, 0) && Global_1357549.f_1250 > 1) && Global_1357549.f_1250 < 4)
		{
			__LIB_4__::func_849(26, 1, 2);
			uParam0->f_21 = -1;
			return __LIB_1__::func_344("CAPRO_ABEBCH1");
		}
		else if ((__LIB_6__::func_685(26, 1, 4, 0) && Global_1357549.f_1250 >= 4) && Global_1357549.f_1250 <= 10)
		{
			__LIB_4__::func_849(26, 1, 4);
			uParam0->f_21 = -1;
			return __LIB_1__::func_344("CAPRO_ABEBCH2");
		}
		else if (__LIB_6__::func_685(26, 1, 8, 0) && Global_1357549.f_1250 > 10)
		{
			__LIB_4__::func_849(26, 1, 8);
			uParam0->f_21 = -1;
			return __LIB_1__::func_344("CAPRO_ABEBCH3");
		}
		else
		{
			__LIB_2__::func_811(uParam0, 4);
			uParam0->f_21 = -1;
			return __LIB_1__::func_344("CAPRO_ABEWELC");
		}
	}
	return __LIB_1__::func_344("");
}

void func_1034(var uParam0)
{
	if (func_1335(uParam0[0 /*45*/], 1, 1))
	{
		func_1336(uParam0[0 /*45*/]);
	}
}

bool func_1335(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	iVar0 = __LIB_1__::func_334(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (uParam0->f_30 == 1)
	{
		if (!__LIB_6__::func_621(uParam0, 65536) && __LIB_0__::func_232(Global_35, iVar0, 1) > 25f)
		{
			__LIB_0__::func_82(1, 1, 0);
		}
		if (func_1513(uParam0, bParam2))
		{
			if (__LIB_2__::func_793(__LIB_4__::func_850()))
			{
				__LIB_2__::func_794(__LIB_4__::func_850());
			}
			__LIB_2__::func_795(uParam0);
			uParam0->f_30 = 0;
		}
	}
	else
	{
		if (__LIB_6__::func_621(uParam0, 64))
		{
			return false;
		}
		if (__LIB_0__::func_232(Global_35, iVar0, 1) < 49f)
		{
			if (__LIB_6__::func_684(uParam0, iVar0))
			{
				func_1519();
				if (bParam1)
				{
					if (!func_1513(uParam0, bParam2))
					{
						return false;
					}
				}
				return true;
			}
		}
	}
	return false;
}

void func_1336(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	bool bVar7;
	Stack.Push(uParam0);
	Call_Loc(uParam0->f_43);
	vVar0 = { StackVal, StackVal, StackVal };
	if (MISC::IS_STRING_NULL_OR_EMPTY(__LIB_0__::func_57(&vVar0)))
	{
		return;
	}
	iVar3 = __LIB_1__::func_334(*uParam0);
	if (!__LIB_0__::func_272(iVar3, 0))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_37))
	{
		Stack.Push(*uParam0);
		Call_Loc(uParam0->f_44);
		uParam0->f_37 = StackVal;
	}
	__LIB_0__::func_928(&uLocal_3576, iVar3, uParam0->f_37, 0);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iVar3, true);
	uParam0->f_2 = 1;
	uParam0->f_37 = 0;
	if (!__LIB_6__::func_621(uParam0, 65536))
	{
		if (uParam0->f_21 < 0)
		{
			if (__LIB_0__::func_113())
			{
				__LIB_0__::func_928(&uLocal_3576, Global_35, "ARTHUR", 0);
			}
			else
			{
				__LIB_0__::func_928(&uLocal_3576, Global_35, "JOHN", 0);
			}
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
			uParam0->f_28 = 1;
		}
		else if (__LIB_6__::func_621(uParam0, 128))
		{
			iVar4 = uParam0->f_21;
			iVar5 = __LIB_1__::func_334(uParam0->f_3[iVar4 /*3*/]);
			if (!__LIB_0__::func_272(iVar5, 0))
			{
				return;
			}
			Stack.Push(uParam0->f_3[iVar4 /*3*/]);
			Call_Loc(uParam0->f_44);
			sVar6 = StackVal;
			__LIB_0__::func_928(&uLocal_3576, iVar5, sVar6, 0);
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iVar5, true);
			uParam0->f_3[iVar4 /*3*/].f_2 = 1;
		}
	}
	bVar7 = __LIB_6__::func_621(uParam0, 16384);
	if (func_1521(&uLocal_3576, vVar0, uParam0->f_40, bVar7, 0))
	{
		__LIB_2__::func_796(__LIB_4__::func_850());
		uParam0->f_30 = 1;
	}
	func_1523(uParam0);
}

bool func_1513(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!__LIB_0__::func_29(*uParam0) && !__LIB_2__::func_767(*uParam0, 0))
	{
		return false;
	}
	if (__LIB_2__::func_763(*uParam0, 0))
	{
		return false;
	}
	iVar0 = __LIB_1__::func_334(*uParam0);
	iVar1 = __LIB_4__::func_850();
	if (__LIB_1__::func_917(iVar1))
	{
		if (__LIB_6__::func_623(iVar1))
		{
			__LIB_4__::func_918(uParam0);
			return uParam0->f_30;
		}
		if (bParam1)
		{
			if (__LIB_2__::func_799(iVar1))
			{
				return uParam0->f_30;
			}
		}
		iVar2 = __LIB_1__::func_921(iVar1);
		iVar3 = __LIB_4__::func_851(iVar2);
		if (iVar3 == 2 || iVar3 == 3)
		{
			__LIB_4__::func_918(uParam0);
			return uParam0->f_30;
		}
		if (__LIB_4__::func_852(iVar2))
		{
			return false;
		}
	}
	if ((Global_1914319.f_17371 || __LIB_2__::func_814(__LIB_1__::func_334(*uParam0), 1, 1, 1, 0)) || PED::_IS_PED_HOGTIED(__LIB_1__::func_334(*uParam0)))
	{
		__LIB_4__::func_918(uParam0);
		return uParam0->f_30;
	}
	if ((((__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1) || __LIB_6__::func_934()) || LAW::_0xF46108C50A22B029()) || LAW::_0x69E181772886F48B(PLAYER::PLAYER_ID())) || PLAYER::_0xD1F6B912785BFD35(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (Global_1914319.f_3[uParam0->f_24 /*446*/].f_411)
	{
		return false;
	}
	if (__LIB_2__::func_65(Global_35, 0))
	{
		__LIB_4__::func_918(uParam0);
		return uParam0->f_30;
	}
	if (__LIB_2__::func_84())
	{
		if (__LIB_1__::func_988(101))
		{
			return false;
		}
	}
	if (__LIB_0__::func_296(178, 1, 1))
	{
		return false;
	}
	if (!func_1645(iVar0, __LIB_6__::func_621(uParam0, 2048)))
	{
		return false;
	}
	if (uParam0->f_30 == 0)
	{
		if (!__LIB_6__::func_621(uParam0, 2048) && !__LIB_6__::func_621(uParam0, 32768))
		{
			if (!__LIB_0__::func_75(&(uParam0->f_34)))
			{
				__LIB_1__::func_283(&(uParam0->f_34), 1);
				return false;
			}
			else if (__LIB_6__::func_621(uParam0, 1024))
			{
				if (__LIB_0__::func_265(&(uParam0->f_34)) < 5f)
				{
					return false;
				}
			}
			else if (__LIB_0__::func_265(&(uParam0->f_34)) < 25f)
			{
				return false;
			}
		}
	}
	return true;
}

void func_1519()
{
	if (__LIB_2__::func_774(5))
	{
		func_1649(2);
		func_1649(4);
	}
	if ((((__LIB_2__::func_774(6) || __LIB_2__::func_774(14)) || __LIB_2__::func_774(26)) || __LIB_2__::func_774(9)) || __LIB_2__::func_774(21))
	{
		func_1649(4);
	}
	if (((__LIB_1__::func_200(26) || __LIB_1__::func_200(27)) || __LIB_1__::func_200(28)) || __LIB_1__::func_200(29))
	{
		func_1649(4);
	}
	if (((__LIB_3__::func_563(3, 61) || __LIB_3__::func_563(3, 29)) || __LIB_3__::func_563(3, 73)) || __LIB_3__::func_563(3, 43))
	{
		func_1649(4);
	}
	if (__LIB_2__::func_84())
	{
		if (__LIB_1__::func_988(101) || __LIB_1__::func_988(79))
		{
			func_1649(4);
		}
		if (((((__LIB_1__::func_988(88) || __LIB_1__::func_988(89)) || __LIB_1__::func_988(108)) || __LIB_1__::func_988(98)) || __LIB_1__::func_988(106)) || __LIB_1__::func_988(110))
		{
			func_1649(8);
		}
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("GENERIC_WAGON_FENCE_CORE")) > 0)
	{
		func_1649(4);
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1396257[16 /*638*/].f_635, false) || SCRIPTS::IS_THREAD_ACTIVE(Global_1396257[13 /*638*/].f_635, false))
	{
		func_1649(4);
	}
}

bool func_1521(char[4] cParam0, vector3 vParam1, vector3 vParam4, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	if (AUDIO::_0xD89504D9D7D5057D(&vParam1))
	{
		return true;
	}
	else if (__LIB_1__::func_104(cParam0, vParam1, iParam8, -1, 0, 0))
	{
		iVar0 = (*cParam0)[0 /*4*/];
		iVar1 = (*cParam0)[1 /*4*/];
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !__LIB_0__::func_255(iVar0, 0)) && (ENTITY::DOES_ENTITY_EXIST(iVar1) && !__LIB_0__::func_255(iVar1, 0)))
		{
			if (!__LIB_0__::func_86(vParam4))
			{
				TASK::TASK_LOOK_AT_COORD(iVar0, vParam4, 8000, 0, 51, 0);
				TASK::TASK_LOOK_AT_COORD(iVar1, vParam4, 8000, 0, 51, 0);
			}
			else if (bParam7)
			{
				PED::_0x62FDAD5E01D2DD47(iVar0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar0, Global_35, 4000, -1f, -1f, -1f);
			}
		}
		return true;
	}
	return false;
}

void func_1523(var uParam0)
{
	int iVar0;
	int iVar1;
	__LIB_1__::func_283(&(uParam0->f_34), 1);
	uParam0->f_40 = { __LIB_1__::func_977() };
	uParam0->f_21 = -1;
	if (__LIB_6__::func_621(uParam0, 16384))
	{
		__LIB_12__::func_471(uParam0, 16384);
	}
	__LIB_12__::func_471(uParam0, 32768);
	__LIB_12__::func_471(uParam0, 1024);
	__LIB_0__::func_37(&uLocal_3573);
	if (__LIB_6__::func_621(uParam0, 4096))
	{
		iVar0 = __LIB_0__::func_560(__LIB_0__::func_12(), uParam0->f_24);
		iVar1 = __LIB_1__::func_334(*uParam0);
		if (__LIB_2__::func_799(iVar0) && func_1645(iVar1, 1))
		{
			__LIB_3__::func_820(iVar0, 0);
			__LIB_12__::func_471(uParam0, 8192);
			__LIB_12__::func_471(uParam0, 4096);
		}
	}
}

bool func_1645(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || __LIB_0__::func_255(iParam0, 0))
	{
		return false;
	}
	if (__LIB_2__::func_791(iParam0))
	{
		__LIB_0__::func_37(&uLocal_3573);
		return false;
	}
	if (bParam1)
	{
		return true;
	}
	if (__LIB_0__::func_75(&uLocal_3573))
	{
		if (__LIB_0__::func_265(&uLocal_3573) < 2f)
		{
			return false;
		}
	}
	else
	{
		__LIB_1__::func_283(&uLocal_3573, 0);
		return false;
	}
	return true;
}

void func_1649(int iParam0)
{
	__LIB_0__::func_7(&uLocal_3572, iParam0);
}

