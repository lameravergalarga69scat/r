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
	int iLocal_3519 = 0;
	var uLocal_3520 = 0;
	var uLocal_3521 = 0;
	var uLocal_3522 = 0;
	struct<4> Local_3523[13];
	var uLocal_3576 = 0;
	bool bLocal_3577 = false;
	var uLocal_3578 = 0;
	var uLocal_3579 = 0;
	var uLocal_3580 = 0;
	int iLocal_3581 = 0;
	int iLocal_3582 = 0;
	int iLocal_3583 = 0;
	vector3 vLocal_3584 = { 0f, 0f, 0f };
	struct<8> Local_3587[10];
	int iLocal_3668 = 0;
	int iLocal_3669 = 0;
	var uLocal_3670 = 0;
	var uLocal_3671 = 0;
	var uLocal_3672 = 0;
	int iLocal_3673 = 0;
	int iLocal_3674 = 0;
	vector3 vLocal_3675 = { 0f, 0f, 0f };
	vector3 vLocal_3678 = { 0f, 0f, 0f };
	vector3 vLocal_3681 = { 0f, 0f, 0f };
	vector3 vLocal_3684 = { 0f, 0f, 0f };
	vector3 vLocal_3687 = { 0f, 0f, 0f };
	int iLocal_3690 = 0;
	int iLocal_3691 = 0;
	int iLocal_3692 = 0;
	var uLocal_3693 = 0;
	var uLocal_3694 = 0;
	var uLocal_3695 = 0;
	vector3 vLocal_3696 = { 0f, 0f, 0f };
	int iLocal_3699 = 0;
	int iLocal_3700 = 0;
	var uLocal_3701 = 0;
	var uLocal_3702 = 0;
	var uLocal_3703 = 0;
	vector3 vLocal_3704 = { 0f, 0f, 0f };
	int iLocal_3707 = 0;
	var uLocal_3708 = 0;
	vector3 vLocal_3709 = { 0f, 0f, 0f };
	int iLocal_3712 = 0;
	var uLocal_3713 = 0;
	vector3 vLocal_3714 = { 0f, 0f, 0f };
	int iLocal_3717 = 0;
	var uLocal_3718 = 0;
	vector3 vLocal_3719 = { 0f, 0f, 0f };
	int iLocal_3722 = 0;
	var uLocal_3723 = 0;
	var uLocal_3724 = 0;
	var uLocal_3725 = 0;
	vector3 vLocal_3726 = { 0f, 0f, 0f };
	int iLocal_3729 = 0;
	var uLocal_3730 = 0;
	var uLocal_3731 = 0;
	var uLocal_3732 = 0;
	vector3 vLocal_3733 = { 0f, 0f, 0f };
	int iLocal_3736 = 0;
	var uLocal_3737 = 0;
	var uLocal_3738 = 0;
	var uLocal_3739 = 0;
	vector3 vLocal_3740 = { 0f, 0f, 0f };
	struct<8> Local_3743[3];
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
	iLocal_3519 = -1;
	vLocal_3584 = { 1877.057f, -1869.943f, 41.8052f };
	iLocal_3668 = joaat("UI_DOC_BILLNOTE");
	iLocal_3669 = joaat("WORLD_PLAYER_INSPECT_LETTER_80CM_PAPER_W18_9_H28_2_FOLDVERTICALX2_P_CS_LETTERFOLDED02X");
	vLocal_3675 = { 1871.322f, -1875.26f, 41.86258f };
	vLocal_3678 = { 1907.52f, -1861.77f, 43.03f };
	vLocal_3681 = { 0f, 0f, -50f };
	vLocal_3684 = { 1900.14f, -1867.52f, 46.35f };
	vLocal_3687 = { 0f, 0f, -78f };
	iLocal_3691 = joaat("UI_LETTER_LENNY");
	iLocal_3692 = joaat("WORLD_PLAYER_INSPECT_LETTER_50CM_PAPER_W15_1_H24_FOLDVERTICAL_P_CS_LETTER03X");
	vLocal_3696 = { 1865.017f, -1862.961f, 42.11531f };
	iLocal_3699 = joaat("UI_DOC_DUTCHHOSEANEWSP");
	iLocal_3700 = joaat("WORLD_PLAYER_INSPECT_LETTER_NOTE_80CM_PAPER_W10_16_H15_24_P_CS_NOTE01X");
	vLocal_3704 = { 1905.36f, -1862.513f, 42.129f };
	iLocal_3707 = joaat("UI_PHOTO_ARTDAD");
	vLocal_3709 = { 1908.278f, -1862.124f, 47.7203f };
	iLocal_3712 = joaat("UI_PHOTO_ARTDOG");
	vLocal_3714 = { 1908.314f, -1862.294f, 47.5684f };
	iLocal_3717 = joaat("UI_PHOTO_ARTGANG");
	vLocal_3719 = { 1908.272f, -1862.105f, 47.5002f };
	iLocal_3722 = joaat("WORLD_PLAYER_INSPECT_LETTER_80CM_PAPER_W15_1_H24_FOLDVERTICAL_S_MOLLYLOVELETTER");
	vLocal_3726 = { 1899.078f, -1858.518f, 46.33312f };
	iLocal_3729 = joaat("WORLD_PLAYER_INSPECT_LETTER_80CM_PAPER_W15_1_H24_FOLDVERTICAL_P_CS_LETTER09X");
	vLocal_3733 = { 1968.733f, -1877.871f, 41.679f };
	iLocal_3736 = joaat("WORLD_PLAYER_INSPECT_POSTER_144CM_W32_2_H48_2_FOLD_VH_P_SI_WANTED_JAVIER01X");
	vLocal_3740 = { 1897.361f, -1865.138f, 41.1487f };
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
					func_46();
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
	__LIB_5__::func_808(0, 14439, 0);
	__LIB_5__::func_808(1, 14796, 1);
	__LIB_5__::func_808(2, 14812, 1);
	__LIB_5__::func_808(3, 14875, 1);
	__LIB_5__::func_808(4, 14906, 2);
	__LIB_5__::func_808(5, 15020, 16);
	__LIB_5__::func_808(6, 15155, 1);
	__LIB_5__::func_808(7, 15769, 4);
	__LIB_5__::func_808(8, 15863, 1);
	__LIB_5__::func_808(9, 15993, 128);
	__LIB_5__::func_808(10, 16002, 792);
	__LIB_5__::func_808(11, 16050, 1024);
}

void func_6(var uParam0)
{
	struct<2> Var0;
	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(uParam0, &Var0, 65);
	__LIB_5__::func_813(uParam0, 0, 16732, 16836, 17275);
	__LIB_5__::func_813(uParam0, 1, 17563, 17609, 18075);
	__LIB_5__::func_813(uParam0, 2, 18105, 18143, 18571);
	__LIB_5__::func_813(uParam0, 3, 18601, 18627, 18706);
	__LIB_5__::func_813(uParam0, 4, 18714, 18868, 18706);
	__LIB_6__::func_268(uParam0, 0);
}

void func_7(var uParam0)
{
	struct<2> Var0;
	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(uParam0, &Var0, 65);
	__LIB_5__::func_813(uParam0, 0, 18940, 19018, 18706);
	__LIB_5__::func_813(uParam0, 1, 20174, 20301, 18706);
	__LIB_5__::func_813(uParam0, 2, 18706, 21143, 18706);
	__LIB_5__::func_813(uParam0, 3, 21301, 21847, 18706);
	__LIB_5__::func_813(uParam0, 4, 22475, 22705, 18706);
	__LIB_5__::func_813(uParam0, 5, 23128, 23161, 18706);
	__LIB_5__::func_813(uParam0, 6, 23878, 23963, 18706);
	__LIB_6__::func_268(uParam0, 0);
}

void func_8(var uParam0)
{
	struct<2> Var0;
	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(uParam0, &Var0, 65);
	__LIB_5__::func_813(uParam0, 0, 24018, 24100, 18706);
	__LIB_5__::func_813(uParam0, 1, 24421, 24457, 18706);
	__LIB_5__::func_813(uParam0, 2, 24926, 25057, 25466);
	__LIB_5__::func_813(uParam0, 3, 25485, 25552, 25956);
	__LIB_6__::func_268(uParam0, 0);
}

void func_9()
{
	struct<2> Var0;
	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(&(Local_18.f_1934), &Var0, 65);
	__LIB_5__::func_813(&(Local_18.f_1934), 0, 26025, 26062, 18706);
	__LIB_5__::func_813(&(Local_18.f_1934), 1, 26245, 26268, 18706);
	__LIB_5__::func_813(&(Local_18.f_1934), 2, 26473, 26520, 18706);
	__LIB_5__::func_813(&(Local_18.f_1934), 3, 26794, 26845, 18706);
	__LIB_5__::func_813(&(Local_18.f_1934), 4, 26864, 26920, 18706);
	__LIB_6__::func_268(&(Local_18.f_1934), 0);
}

void func_10(var uParam0)
{
	uParam0->f_45 = 3;
	uParam0->f_47 = 6;
	uParam0->f_1714 = { __LIB_6__::func_188(uParam0->f_45) };
	uParam0->f_1717 = 219.6987f;
	uParam0->f_49 = 1;
	if (__LIB_0__::func_898(-524145696))
	{
		__LIB_0__::func_804(-524145696);
	}
	func_128();
	func_129();
	__LIB_17__::func_965();
	if (__LIB_6__::func_547(6))
	{
		STREAMING::REQUEST_MODEL(joaat("P_CS_BOOK_SHREW_A"), false);
	}
	if (__LIB_6__::func_547(8))
	{
		iLocal_3690 = __LIB_6__::func_548();
		STREAMING::REQUEST_MODEL(iLocal_3690, false);
	}
	__LIB_1__::func_948(233638913, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(-659381875, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(-356563546, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(1163459288, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(1488396696, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(560870147, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(867489680, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(-580310298, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(2112683687, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(1806522920, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(58833085, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(-629053815, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(553939906, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(357129292, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(931206119, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(1783003505, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(1544281340, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(-17095972, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(-907240961, 0, 0, 0, 1, 0, 0, 0);
	OBJECT::_0x7F458B543006C8FE(233638913, 18);
	OBJECT::_0x7F458B543006C8FE(-659381875, 18);
	OBJECT::_0x7F458B543006C8FE(-356563546, 18);
	OBJECT::_0x7F458B543006C8FE(1163459288, 18);
	OBJECT::_0x7F458B543006C8FE(1488396696, 18);
	OBJECT::_0x7F458B543006C8FE(560870147, 18);
	OBJECT::_0x7F458B543006C8FE(867489680, 18);
	OBJECT::_0x7F458B543006C8FE(-580310298, 18);
	OBJECT::_0x7F458B543006C8FE(2112683687, 18);
	OBJECT::_0x7F458B543006C8FE(1806522920, 18);
	OBJECT::_0x7F458B543006C8FE(58833085, 18);
	OBJECT::_0x7F458B543006C8FE(-629053815, 18);
	OBJECT::_0x7F458B543006C8FE(553939906, 18);
	OBJECT::_0x7F458B543006C8FE(357129292, 18);
	OBJECT::_0x7F458B543006C8FE(931206119, 18);
	OBJECT::_0x7F458B543006C8FE(1783003505, 18);
	OBJECT::_0x7F458B543006C8FE(1544281340, 18);
	OBJECT::_0x7F458B543006C8FE(-17095972, 18);
	OBJECT::_0x7F458B543006C8FE(-907240961, 18);
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
						func_187(Global_1357549.f_1659[iVar2], 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
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
				func_232(iVar0, Local_18.f_45, 1);
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
	int iVar0;
	if (!bLocal_3577)
	{
		iVar0 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(1848.488f, -1835.02f, 42.4584f, joaat("PROP_HITCHINGPOST"), 0.25f, 0, false);
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar0))
		{
			TASK::_SET_SCENARIO_POINT_ACTIVE(iVar0, false);
			bLocal_3577 = true;
		}
	}
	if (!__LIB_4__::func_635(16))
	{
		__LIB_17__::func_946(0, 0);
		func_273();
		__LIB_6__::func_351(&uLocal_3670, &uLocal_3672, &uLocal_3671, vLocal_3675, iLocal_3668, joaat("DOCUMENT_LETTER_BILL_DISCHARGE"), iLocal_3669);
		__LIB_6__::func_351(&uLocal_3693, &uLocal_3695, &uLocal_3694, vLocal_3696, iLocal_3691, -1915584842 /* GXTEntry: "Letter from Lenny\'s Father" */, iLocal_3692);
		__LIB_6__::func_351(&uLocal_3701, &uLocal_3703, &uLocal_3702, vLocal_3704, iLocal_3699, 1915843046 /* GXTEntry: "New England Examiner Scrap" */, iLocal_3700);
		__LIB_6__::func_352(&uLocal_3708, &(Local_3743[0 /*8*/].f_1), vLocal_3709, iLocal_3707, joaat("DOCUMENT_PHOTO_ARTHUR_FATHER"));
		__LIB_6__::func_352(&uLocal_3713, &(Local_3743[1 /*8*/].f_1), vLocal_3714, iLocal_3712, joaat("DOCUMENT_PHOTO_ARTHUR_DOG"));
		__LIB_6__::func_352(&uLocal_3718, &(Local_3743[2 /*8*/].f_1), vLocal_3719, iLocal_3717, joaat("DOCUMENT_PHOTO_DUTCH_HOSEA"));
		__LIB_6__::func_567(&uLocal_3723, &uLocal_3724, &uLocal_3725, vLocal_3726, -1309546012 /* GXTEntry: "Molly\'s Poem" */, iLocal_3722);
		__LIB_6__::func_567(&uLocal_3730, &uLocal_3731, &uLocal_3732, vLocal_3733, joaat("DOCUMENT_MICAH_LETTER"), iLocal_3729);
		__LIB_6__::func_567(&uLocal_3737, &uLocal_3738, &uLocal_3739, vLocal_3740, joaat("DOCUMENT_BOUNTY_POSTER_JAVIER"), iLocal_3736);
		__LIB_6__::func_648(&uLocal_3520, &uLocal_3521, &uLocal_3522, &uLocal_3514);
		__LIB_6__::func_585(&uLocal_3521, &uLocal_3514);
		__LIB_17__::func_944(0);
		__LIB_6__::func_556(&Local_3523, &uLocal_3576, &iLocal_3519, 0);
		__LIB_17__::func_977();
		func_282(&(iParam0->f_51), &Local_3587);
		func_283();
	}
}

void func_45(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iParam0->f_1713 = 4;
	iVar0 = 0;
	Global_1357549.f_3[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("ShadyBelle volCampAreas[CVA_INNER]");
	__LIB_6__::func_354(&(Global_1357549.f_3[0]), &iVar0, 0, 1897f, -1863f, 47.62897f, 0f, 0f, -40f, 24f, 23f, 50f, joaat("VOLBOX"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[0]), &iVar0, 0, 1881f, -1874.862f, 44.2334f, 0f, 0f, -15f, 15f, 12f, 30f, joaat("VOLCYLINDER"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[0]), &iVar0, 0, 1874.849f, -1857.855f, 43.879f, 0f, 0f, -4f, 17f, 8f, 30f, joaat("VOLCYLINDER"), 0);
	Global_1357549.f_3[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("ShadyBelle volCampAreas[CVA_WALK]");
	__LIB_6__::func_354(&(Global_1357549.f_3[1]), &iVar0, 1, 1884.113f, -1864.864f, 54.63089f, 0f, 0f, 0f, 31.70372f, 24.94557f, 30.40453f, joaat("VOLCYLINDER"), 0);
	Global_1357549.f_3[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("ShadyBelle volCampAreas[CVA_OUTER]");
	Global_1357549.f_3[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("ShadyBelle volCampAreas[CVA_OUTER_THRESHOLD]");
	__LIB_6__::func_354(&(Global_1357549.f_3[2]), &(Global_1357549.f_3[3]), 2, 1892.398f, -1861.472f, 57.8087f, 0f, 0f, -39f, 61f, 40f, 30f, joaat("VOLCYLINDER"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[2]), &(Global_1357549.f_3[3]), 2, 1845.781f, -1843.917f, 67.08612f, 0f, 0f, 0f, 16f, 22f, 40f, joaat("VOLCYLINDER"), 0);
	__LIB_6__::func_354(&(Global_1357549.f_3[2]), &(Global_1357549.f_3[3]), 2, 1867.978f, -1817.561f, 69.80433f, 0f, 0f, 9.000002f, 16f, 12f, 40f, joaat("VOLCYLINDER"), 0);
	Global_1357549.f_3[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("ShadyBelle volCampAreas[CVA_SURROUNDING]");
	Global_1357549.f_3[5] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("ShadyBelle volCampAreas[CVA_SURROUNDING_THRESHOLD]");
	__LIB_6__::func_354(&(Global_1357549.f_3[4]), &(Global_1357549.f_3[5]), 4, 1880.945f, -1856.183f, 59.0982f, 0f, 0f, -37f, 94f, 60f, 39f, joaat("VOLCYLINDER"), 0);
	Global_1357549.f_3[6] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1904.706f, -1860.987f, 48.218f, 0f, 0f, 50.21872f, 3.647f, 7.902f, 3.892745f, "ShadyBelle volCampAreas[CVA_PROPERTY]");
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_3516))
	{
		iLocal_3516 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1863.811f, -1833.619f, 43.33922f, 0f, 0f, 93.6829f, 10.73321f, 5.397693f, 6.798471f, "Shady Belle - volFrontMuster");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_3517))
	{
		iLocal_3517 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1867.383f, -1857.119f, 43.33922f, 0f, 0f, 93.6829f, 8.944447f, 5.171763f, 6.798471f, "Shady Belle - volSideMuster");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_3518))
	{
		iLocal_3518 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1881.998f, -1818.392f, 43.33922f, 0f, 0f, 93.6829f, 5.432541f, 5.80022f, 6.798471f, "Shady Belle - volSideMuster2");
	}
	iVar1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1906.765f, -1862.507f, 46.362f, 0f, 0f, -173.781f, 1f, 1f, 3f, "Shady Belle - - volShadyShelfInspects");
	Local_18.f_3057[12 /*21*/].f_4 = iVar1;
	iVar2 = 0;
	__LIB_0__::func_495(&iVar2, 4);
	__LIB_0__::func_495(&iVar2, 5);
	__LIB_0__::func_495(&iVar2, 0);
	__LIB_0__::func_495(&iVar2, 15);
	COMPANION::_0x3CAAD93FA5B9579A(iLocal_3516, 2, iVar2);
	COMPANION::_0x3CAAD93FA5B9579A(iLocal_3517, 2, iVar2);
	COMPANION::_0x3CAAD93FA5B9579A(iLocal_3518, 2, iVar2);
	__LIB_6__::func_189(&(Local_3523[0 /*4*/]), joaat("PERSCHAR_CAMP_ROOSTER"), 3, "shadyBelle/shb_default_chickens");
	__LIB_6__::func_189(&(Local_3523[1 /*4*/]), joaat("PERSCHAR_CAMP_CHICKEN_1"), 0, "shadyBelle/shb_default_chickens");
	__LIB_6__::func_189(&(Local_3523[2 /*4*/]), joaat("PERSCHAR_CAMP_CHICKEN_2"), 0, "shadyBelle/shb_default_chickens");
	__LIB_6__::func_189(&(Local_3523[3 /*4*/]), joaat("PERSCHAR_CAMP_CHICKEN_3"), 0, "shadyBelle/shb_default_chickens");
	__LIB_6__::func_189(&(Local_3523[4 /*4*/]), joaat("PERSCHAR_CAMP_CHICKEN_4"), 0, "shadyBelle/shb_default_chickens");
	__LIB_6__::func_189(&(Local_3523[5 /*4*/]), joaat("PERSCHAR_CAMP_CHICKEN_5"), 0, "shadyBelle/shb_default_chickens");
	if (__LIB_0__::func_592() == 1)
	{
		__LIB_6__::func_613(3, iParam0->f_46);
	}
	else
	{
		__LIB_6__::func_467(3);
	}
}

void func_46()
{
	__LIB_6__::func_59(6, 8388608);
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
	func_367(iParam0);
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
	if (func_404())
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
		func_407(Local_18.f_45, 1, 1);
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
	if (func_426(&Local_18))
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
	func_46();
	__LIB_6__::func_610(&(Local_18.f_51));
	func_431();
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
	vVar2 = { func_448(__LIB_0__::func_317(), &uVar0, &uVar1) };
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

void func_128()
{
	Local_18.f_3057[12 /*21*/].f_6 = { vLocal_3709 };
	Local_18.f_3057[12 /*21*/].f_9 = { 1908.022f, -1862.167f, 47.7527f };
	Local_18.f_3057[12 /*21*/].f_12 = { -4.2199f, 0f, -79.9198f };
	Local_18.f_3057[12 /*21*/].f_15 = 51.2357f;
	Local_18.f_3057[12 /*21*/].f_16 = joaat("INPUT_CONTEXT_Y");
	Local_18.f_3057[12 /*21*/].f_19 = 3;
	Local_18.f_3057[12 /*21*/].f_17 = 5;
	Local_18.f_3057[12 /*21*/].f_20 = "VI_ADAD";
	Local_18.f_3057[13 /*21*/].f_6 = { vLocal_3714 };
	Local_18.f_3057[13 /*21*/].f_9 = { 1908.012f, -1862.293f, 47.6662f };
	Local_18.f_3057[13 /*21*/].f_12 = { -18.104f, 0f, -92.3619f };
	Local_18.f_3057[13 /*21*/].f_15 = 51.2357f;
	Local_18.f_3057[13 /*21*/].f_19 = 3;
	Local_18.f_3057[13 /*21*/].f_20 = "VI_ADOG";
	Local_18.f_3057[14 /*21*/].f_6 = { vLocal_3719 };
	Local_18.f_3057[14 /*21*/].f_9 = { 1907.986f, -1862.163f, 47.5237f };
	Local_18.f_3057[14 /*21*/].f_12 = { -3.0679f, 0f, -78.654f };
	Local_18.f_3057[14 /*21*/].f_15 = 51.5393f;
	Local_18.f_3057[14 /*21*/].f_16 = joaat("INPUT_CAMP_BED_INSPECT");
	Local_18.f_3057[14 /*21*/].f_19 = 3;
	Local_18.f_3057[14 /*21*/].f_20 = "VI_HOSEA";
}

void func_129()
{
	Local_3743[0 /*8*/].f_6 = joaat("P_CS_PHOTO_4X6");
	Local_3743[0 /*8*/].f_3 = { vLocal_3709 };
	Local_3743[1 /*8*/].f_6 = joaat("P_CS_PHOTO_4X6");
	Local_3743[1 /*8*/].f_3 = { vLocal_3714 };
	Local_3743[2 /*8*/].f_6 = joaat("P_CS_PHOTO_5X7");
	Local_3743[2 /*8*/].f_3 = { vLocal_3719 };
	iLocal_3513 = 0;
}

int func_187(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
				func_551(Global_1360165[iParam0 /*1157*/], vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
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
			func_560(iParam0, Global_1360165[iParam0 /*1157*/]);
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

void func_232(int iParam0, var uParam1, bool bParam2)
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
	func_600(iParam0);
}

int func_273()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 15;
	iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS(Local_3743[iVar1 /*8*/].f_3);
	if (INTERIOR::IS_VALID_INTERIOR(iVar2))
	{
		if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar2, "shb_p_mansion_01"))
		{
			if (func_696(&Local_3743, iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_282(var uParam0, var uParam1)
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
			func_728(uParam0, uParam1);
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
			func_741(uParam0, uParam1, 2);
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

void func_283()
{
	if (iLocal_3581 == 0)
	{
		iLocal_3581 = ENTITY::_0x6F3068258A499E52(joaat("S_COOKFIRE01X"), vLocal_3584, 11);
	}
	else if (!__LIB_0__::func_75(&uLocal_3578) || __LIB_0__::func_265(&uLocal_3578) > 1.1f)
	{
		__LIB_1__::func_148(&uLocal_3578);
		if (ENTITY::_0x1FF441D7954F8709(iLocal_3581))
		{
			iLocal_3582 = ENTITY::_0x4735E2A4BB83D9DA(iLocal_3581);
			iLocal_3583 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iLocal_3582);
		}
		if (iLocal_3581 != 0 && ENTITY::DOES_ENTITY_EXIST(iLocal_3582))
		{
			__LIB_6__::func_557(iLocal_3582, iLocal_3583, vLocal_3584);
		}
	}
}

void func_367(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_3516))
	{
		VOLUME::_DELETE_VOLUME(iLocal_3516);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_3517))
	{
		VOLUME::_DELETE_VOLUME(iLocal_3517);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_3518))
	{
		VOLUME::_DELETE_VOLUME(iLocal_3518);
	}
	__LIB_6__::func_550(&uLocal_3520, &uLocal_3521);
	__LIB_2__::func_759(0.775f, 0.2f, 0.025f, 0f);
	__LIB_6__::func_633(&Local_3523);
	__LIB_6__::func_216(&uLocal_3514);
	__LIB_2__::func_355(552);
	__LIB_2__::func_355(551);
	__LIB_17__::func_972(&(iParam0->f_51), &Local_3587);
	if (iLocal_3581 != 0)
	{
		if (ENTITY::_0x1FF441D7954F8709(iLocal_3581))
		{
			ENTITY::_0xD2B9C78537ED5759(iLocal_3581);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3673))
	{
		OBJECT::DELETE_OBJECT(&iLocal_3673);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3674))
	{
		OBJECT::DELETE_OBJECT(&iLocal_3674);
	}
	__LIB_6__::func_194(&Local_3743);
	OBJECT::_0x0C0A373D181BF900(233638913);
	OBJECT::_0x0C0A373D181BF900(-659381875);
	OBJECT::_0x0C0A373D181BF900(-356563546);
	OBJECT::_0x0C0A373D181BF900(1163459288);
	OBJECT::_0x0C0A373D181BF900(1488396696);
	OBJECT::_0x0C0A373D181BF900(560870147);
	OBJECT::_0x0C0A373D181BF900(867489680);
	OBJECT::_0x0C0A373D181BF900(-580310298);
	OBJECT::_0x0C0A373D181BF900(2112683687);
	OBJECT::_0x0C0A373D181BF900(1806522920);
	OBJECT::_0x0C0A373D181BF900(58833085);
	OBJECT::_0x0C0A373D181BF900(-629053815);
	OBJECT::_0x0C0A373D181BF900(553939906);
	OBJECT::_0x0C0A373D181BF900(357129292);
	OBJECT::_0x0C0A373D181BF900(931206119);
	OBJECT::_0x0C0A373D181BF900(1783003505);
	OBJECT::_0x0C0A373D181BF900(1544281340);
	OBJECT::_0x0C0A373D181BF900(-17095972);
	OBJECT::_0x0C0A373D181BF900(-907240961);
}

bool func_404()
{
	if (__LIB_6__::func_547(6))
	{
		if (!STREAMING::HAS_MODEL_LOADED(joaat("P_CS_BOOK_SHREW_A")))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3673))
		{
			iLocal_3673 = OBJECT::CREATE_OBJECT(joaat("P_CS_BOOK_SHREW_A"), vLocal_3678, true, true, false, false, true);
			return false;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CS_BOOK_SHREW_A"));
		ENTITY::SET_ENTITY_ROTATION(iLocal_3673, vLocal_3681, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_3673, true);
		return true;
	}
	if (__LIB_6__::func_547(8))
	{
		if (!STREAMING::HAS_MODEL_LOADED(iLocal_3690))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3674))
		{
			iLocal_3674 = OBJECT::CREATE_OBJECT(iLocal_3690, vLocal_3684, true, true, false, false, true);
			return false;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_3690);
		ENTITY::SET_ENTITY_ROTATION(iLocal_3674, vLocal_3687, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_3674, true);
	}
	return true;
}

void func_407(int iParam0, bool bParam1, bool bParam2)
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
		func_890(iParam0, bParam1);
		if (!__LIB_1__::func_209(vVar5))
		{
			func_892(vVar5, fVar8, "CaravanCamp", 0, 0, 4, 0, -1082130432 /* Float: -1f */);
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

bool func_426(var uParam0)
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
			if (func_912(uParam0->f_46, 0))
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

void func_431()
{
	Local_3587[0 /*8*/] = { __LIB_6__::func_219(7, 0, 0) };
	Local_3587[1 /*8*/] = { __LIB_6__::func_219(4, 0, 0) };
	Local_3587[2 /*8*/] = { __LIB_6__::func_219(4, 1, 1) };
	Local_3587[3 /*8*/] = { __LIB_6__::func_219(0, 0, 0) };
	Local_3587[4 /*8*/] = { __LIB_6__::func_219(0, 1, 1) };
	Local_3587[5 /*8*/] = { __LIB_6__::func_219(0, 1, 2) };
	Local_3587[6 /*8*/] = { __LIB_6__::func_219(1, 0, 0) };
	Local_3587[7 /*8*/] = { __LIB_6__::func_219(10, 0, 0) };
	Local_3587[8 /*8*/] = { __LIB_6__::func_219(10, 1, 1) };
	Local_3587[9 /*8*/] = { __LIB_6__::func_219(10, 2, 2) };
}

Vector3 func_448(float fParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	vVar0 = { func_949(Global_36, uParam1, uParam2, 1, 0, 0, 0, 0, 0, 0, fParam0, 10f) };
	return vVar0;
}

void func_551(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_551(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_551(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_560(int iParam0, int iParam1)
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
				func_1011(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE"), 0, 0, 2, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				func_1011(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE_DUALWIELD"), 0, 0, 3, 1, 1, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 1, 0, 0);
			}
			break;
	}
}

int func_600(int iParam0)
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
	if (func_1048(iVar1, &Var2, 1, 0, 0))
	{
		return 0;
	}
	if (!func_1049(iVar1, &uVar7, &Var2, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

bool func_696(var uParam0, int iParam1)
{
	if (__LIB_6__::func_587((uParam0[iLocal_3513 /*8*/])->f_3))
	{
		if (!(uParam0[iLocal_3513 /*8*/])->f_2)
		{
			if ((*uParam0)[iLocal_3513 /*8*/] == 0)
			{
				(*uParam0)[iLocal_3513 /*8*/] = ENTITY::_0x6F3068258A499E52((uParam0[iLocal_3513 /*8*/])->f_6, (uParam0[iLocal_3513 /*8*/])->f_3, iParam1);
				return false;
			}
			else if (!ENTITY::_0x1FF441D7954F8709((*uParam0)[iLocal_3513 /*8*/]))
			{
				return false;
			}
			else if (!ENTITY::DOES_ENTITY_EXIST((uParam0[iLocal_3513 /*8*/])->f_1))
			{
				(uParam0[iLocal_3513 /*8*/])->f_1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA((*uParam0)[iLocal_3513 /*8*/]));
				return false;
			}
			else if (!(uParam0[iLocal_3513 /*8*/])->f_2)
			{
				(uParam0[iLocal_3513 /*8*/])->f_2 = 1;
				return true;
			}
		}
		else
		{
			if ((uParam0[iLocal_3513 /*8*/])->f_7 > 5)
			{
				if (!ENTITY::_0x1FF441D7954F8709((*uParam0)[iLocal_3513 /*8*/]))
				{
					(uParam0[iLocal_3513 /*8*/])->f_2 = 0;
				}
				(uParam0[iLocal_3513 /*8*/])->f_7 = 0;
			}
			(uParam0[iLocal_3513 /*8*/])->f_7++;
		}
	}
	else
	{
		if ((uParam0[iLocal_3513 /*8*/])->f_2)
		{
			__LIB_6__::func_194(uParam0);
			(uParam0[iLocal_3513 /*8*/])->f_2 = 0;
		}
		if ((*uParam0)[iLocal_3513 /*8*/] != 0)
		{
			(*uParam0)[iLocal_3513 /*8*/] = 0;
		}
	}
	iLocal_3513++;
	if (iLocal_3513 >= 3)
	{
		iLocal_3513 = 0;
	}
	return false;
}

void func_728(var uParam0, var uParam1)
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
			__LIB_17__::func_964(uParam1);
		}
	}
	else
	{
		__LIB_17__::func_976(uParam0);
		__LIB_6__::func_553(uParam1);
		__LIB_17__::func_964(uParam1);
	}
	STREAMING::REQUEST_MODEL(joaat("SCRIPTEDBALL"), false);
	uParam0->f_1581 = 1;
}

void func_741(var uParam0, var uParam1, int iParam2)
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
	__LIB_1__::func_696(45);
	PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
	__LIB_3__::func_465(10, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
	__LIB_6__::func_207(uParam1);
	__LIB_19__::func_118(uParam0, uParam1);
}

void func_890(int iParam0, bool bParam1)
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
		func_1314(-1170496998, 0, 0);
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
	__LIB_17__::func_946(1, bParam1);
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

int func_892(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, float fParam9)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	if (!bParam8 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (__LIB_0__::func_86(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam6))
	{
		if (__LIB_1__::func_209(vParam0))
		{
			return 0;
		}
		iVar0 = VOLUME::_0x00BBF7CEAE8C666A(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam6, false, false) };
		iVar0 = VOLUME::_0xF383E96C4904DF0C(iParam6, fParam3, iVar1, 0);
	}
	if (iParam7 != 0)
	{
		VOLUME::_0xB440F4E35393FC39(iVar0, iParam7);
	}
	if (fParam9 >= 0f)
	{
		VOLUME::_0xD460135C98940274(iVar0, fParam9);
	}
	func_1315(iVar0, bParam8);
	return iVar0;
}

bool func_912(int iParam0, bool bParam1)
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
					if (func_187(iVar3, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1) != 0)
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

Vector3 func_949(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, float fParam10, int iParam11, int iParam12, bool bParam13)
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
		bVar10 = func_1353();
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
			bVar11 = func_1355(iVar0, iVar1);
			fVar3 = BUILTIN::VDIST(vParam0, vVar7);
			if (((((fVar3 < fVar2 && fVar3 > fParam10) && !__LIB_0__::func_86(vVar7)) && __LIB_1__::func_172(iVar0, bParam8, iParam12)) && !__LIB_0__::func_955(iVar0)) || bVar11)
			{
				if (__LIB_6__::func_629(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
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

int func_1011(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
		func_1395(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
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

bool func_1048(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
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
		else if (!func_1418(iParam0, &uVar26, 0))
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

bool func_1049(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return false;
	}
	if (func_1048(iParam0, uParam2, iParam3, bParam5, 0))
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

void func_1314(int iParam0, bool bParam1, bool bParam2)
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
			Jump @2851; //curOff = 1813
			__LIB_0__::func_804(38162571);
			__LIB_0__::func_804(1350391819);
			__LIB_0__::func_804(54073871);
			__LIB_0__::func_803(-1414537028);
			Jump @2851; //curOff = 1852
			__LIB_0__::func_804(-1414537028);
			__LIB_0__::func_804(1350391819);
			__LIB_0__::func_804(54073871);
			__LIB_0__::func_803(38162571);
			Jump @2851; //curOff = 1891
			__LIB_0__::func_804(-1414537028);
			__LIB_0__::func_804(38162571);
			__LIB_0__::func_804(54073871);
			__LIB_0__::func_803(1350391819);
			Jump @2851; //curOff = 1930
			__LIB_0__::func_804(-1414537028);
			__LIB_0__::func_804(38162571);
			__LIB_0__::func_804(1350391819);
			__LIB_0__::func_803(54073871);
			Jump @2851; //curOff = 1969
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
int func_1315(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	if (!bParam1 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (!VOLUME::_0xF6A8A652A6B186CD(iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < Global_1911670)
	{
		iVar0 = Global_1911670[iVar1];
		if (!VOLUME::_0xF6A8A652A6B186CD(iVar0) || iVar0 == iParam0)
		{
			Global_1911670[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_1353()
{
	if (__LIB_0__::func_28())
	{
		if (!__LIB_1__::func_185(3))
		{
			return __LIB_0__::func_559(43);
		}
		if (__LIB_1__::func_185(38) && !__LIB_1__::func_185(43))
		{
			return func_1617(8);
		}
	}
	return 0;
}

int func_1355(int iParam0, int iParam1)
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
	iVar0 = __LIB_0__::func_560(Global_1310720.f_21, 2);
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
		if (func_1618(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

int func_1395(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
			iVar5 = func_1646((386 + iVar28), 1);
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
					func_1647(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
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

bool func_1418(int iParam0, var uParam1, bool bParam2)
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
		iVar5 = func_1646((386 + iVar29), 1);
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

int func_1617(int iParam0)
{
	int iVar0;
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1897952[iParam0 /*2*/].f_1))
	{
		return Global_1897952[iParam0 /*2*/].f_1;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BAYOU_NWA");
			VOLUME::_0x39816F6F94F385AD(iVar0, 2037.5f, -2050f, 150f, 0f, 0f, 18f, 575f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2485f, -1497.5f, 150f, 0f, 0f, 20f, 725f, 1050f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2060f, -1812.5f, 150f, 0f, 0f, 20f, 315f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1975f, -1452.5f, 150f, 0f, 0f, -43f, 200f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2022.5f, -1277.5f, 150f, 0f, 0f, -7f, 100f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2022.5f, -925f, 150f, 0f, 0f, 20f, 865f, 365f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2200f, -2440f, 150f, 0f, 0f, 0f, 500f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1762.5f, -737.5f, 150f, 0f, 0f, 20f, 500f, 175f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2020.944f, -580.694f, 150f, 0f, 0f, -111f, 400f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2116.078f, -612.5f, 150f, 0f, 0f, -1f, 240f, 540f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2197.5f, -693.982f, 150f, 0f, 0f, -111f, 200f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2527.5f, -785f, 150f, 0f, 0f, -80f, 400f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3550f, -1455f, 150f, 0f, 0f, 0f, 1800f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2687.5f, -757.5f, 150f, 0f, 0f, -80f, 400f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2826.796f, -755f, 150f, 0f, 0f, 0f, 282.646f, 400f, 700f);
			break;
		case 1:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BIG_VALLEY");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1605f, -382.5f, 150f, 0f, 0f, 25f, 1100f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2035f, -810f, 150f, 0f, 0f, -65f, 400f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1887.5f, -1050f, 150f, 0f, 0f, -45f, 210f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2210f, -625f, 150f, 0f, 0f, -65f, 200f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2827.5f, -82.5f, 150f, 0f, 0f, 167f, 1500f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -930f, -730f, 150f, 0f, 0f, 0f, 600f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -825f, -780f, 150f, 0f, 0f, -45f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -632.5f, -902.5f, 150f, 0f, 0f, -20f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -820f, -170f, 150f, 0f, 0f, 37.5f, 500f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -835f, -525f, 150f, 0f, 0f, 41f, 200f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -532.5f, -32.5f, 150f, 0f, 0f, -27f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -605f, 50f, 150f, 0f, 0f, -75f, 200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -540f, 50f, 150f, 0f, 0f, -140f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1127.5f, -90f, 150f, 0f, 0f, -32.5f, 200f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1500f, 392.5f, 150f, 0f, 0f, 160f, 700f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1477.5f, 552.5f, 150f, 0f, 0f, 143f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1656.969f, 378.098f, 150f, 0f, 0f, 122f, 795f, 1083f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2617.969f, 452.097f, 150f, 0f, 0f, 167f, 1763f, 1500f, 700f);
			break;
		case 2:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BLUEGILL_MARSH");
			VOLUME::_0x39816F6F94F385AD(iVar0, 3585f, -280f, 150f, 0f, 0f, 0f, 1800f, 550f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3085f, -337.5f, 150f, 0f, 0f, -80.5f, 300f, 1500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2440f, -465f, 150f, 0f, 0f, -1f, 400f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2322.5f, -537.5f, 150f, 0f, 0f, -111f, 100f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3100f, 125f, 150f, 0f, 0f, 41f, 1700f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3670f, 80f, 150f, 0f, 0f, 41f, 1400f, 475f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2332.651f, -365.338f, 150f, 0f, 0f, 86f, 150f, 140f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2124.824f, -347.118f, 150f, 0f, 0f, 86f, 140f, 291f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3726.431f, -755f, 150f, 0f, 0f, 0f, 1518.809f, 400f, 700f);
			break;
		case 3:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CUMBERLAND_FOREST");
			VOLUME::_0x39816F6F94F385AD(iVar0, 190.4736f, 1214.829f, 200f, 0f, 0f, 59f, 488.2586f, 443.9291f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 695f, 1075f, 200f, 0f, 0f, 35f, 250f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -11.22244f, 1259.539f, 200f, 0f, 0f, 0f, 135f, 340.8336f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 667.5f, 1675f, 200f, 0f, 0f, 15f, 150f, 325f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 627.5f, 1255f, 200f, 0f, 0f, 9.999999f, 400f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 507.5f, 1532.5f, 200f, 0f, 0f, -45f, 300f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 72.5f, 1297.5f, 200f, 0f, 0f, 50f, 400f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 615f, 1750f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 510f, 1025f, 200f, 0f, 0f, 1f, 300f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 330.2712f, 1028.66f, 200f, 0f, 0f, 82f, 300f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 224.7084f, 1010.634f, 200f, 0f, 0f, 58.85596f, 175f, 267.2676f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 153.0846f, 1314.722f, 200f, 0f, 0f, -23f, 400f, 409.2231f, 800f);
			break;
		case 4:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GREAT_PLAINS");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1285f, -1725f, 150f, 0f, 0f, 20f, 500f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1360f, -1540f, 150f, 0f, 0f, 30f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1492.5f, -1262.5f, 150f, 0f, 0f, 15f, 500f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1410f, -1147.5f, 150f, 0f, 0f, 25f, 700f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -865f, -1125f, 150f, 0f, 0f, -20f, 700f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -865f, -1725f, 150f, 0f, 0f, 0f, 800f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1300f, -1917.5f, 150f, 0f, 0f, -42f, 250f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1180f, -2122.5f, 150f, 0f, 0f, 20f, 300f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -955f, -1065f, 150f, 0f, 0f, -45f, 250f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1052.5f, -990f, 150f, 0f, 0f, 1.25f, 200f, 200f, 700f);
			break;
		case 7:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_WEST");
			VOLUME::_0x39816F6F94F385AD(iVar0, -100f, 1557.5f, 200f, 0f, 0f, 50f, 225f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -162.5f, 1660f, 200f, 0f, 0f, 0f, 135f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -162.5f, 1952.5f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -752.5f, 2135f, 200f, 0f, 0f, 0f, 1050f, 1975f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2139.972f, 1966.829f, 200f, 0f, 0f, 165f, 1814.271f, 1288f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1295f, 1090f, 200f, 0f, 0f, 122f, 1200f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1080f, 1132.5f, 200f, 0f, 0f, 105f, 1200f, 375f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -895f, 1150f, 200f, 0f, 0f, 45f, 800f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -845f, 720f, 200f, 0f, 0f, 0f, 200f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1015f, 560f, 200f, 0f, 0f, 143f, 75f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1940f, 3145f, 200f, 0f, 0f, 0f, 1400f, 2000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -757.5f, 3625f, 200f, 0f, 0f, 0f, 975f, 1050f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -187.5f, 3210f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2315.88f, 1498.498f, 150f, 0f, 0f, 167f, 1655f, 587f, 700f);
			break;
		case 6:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_EAST");
			VOLUME::_0x39816F6F94F385AD(iVar0, 190f, 1630f, 200f, 0f, 0f, -23f, 225f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 715f, 3145f, 200f, 0f, 0f, 0f, 1200f, 2000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1210f, 1212.5f, 200f, 0f, 0f, -14f, 585f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1510f, 1445f, 200f, 0f, 0f, 16f, 450f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1935f, 1040f, 200f, 0f, 0f, 12f, 200f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1810f, 1030f, 200f, 0f, 0f, -14f, 100f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1495f, 1425f, 200f, 0f, 0f, -9f, 1200f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1050f, 1430f, 200f, 0f, 0f, 10f, 500f, 700f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2037.5f, 1630f, 200f, 0f, 0f, 118f, 200f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1400f, 2500f, 200f, 0f, 0f, -47f, 2000f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1810f, 2707.5f, 200f, 0f, 0f, -19f, 1500f, 900f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2175f, 3557.5f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1040f, 2120f, 200f, 0f, 0f, 15f, 800f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 410f, 2112.5f, 200f, 0f, 0f, -93f, 500f, 600f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 307.5f, 1722.5f, 200f, 0f, 0f, -45f, 250f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 472.5f, 1880f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 135f, 2000f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 217.5f, 3245f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			break;
		case 5:
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1897952[6 /*2*/].f_1) && VOLUME::_DOES_VOLUME_EXIST(Global_1897952[7 /*2*/].f_1))
			{
				iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES");
				VOLUME::_0x6E0D3C3F828DA773(iVar0, Global_1897952[6 /*2*/].f_1);
				VOLUME::_0x6E0D3C3F828DA773(iVar0, Global_1897952[7 /*2*/].f_1);
			}
			else
			{
				return 0;
			}
			break;
		case 8:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GUARMA");
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			break;
		case 9:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HEARTLAND");
			VOLUME::_0x39816F6F94F385AD(iVar0, -357.5f, -120f, 200f, 0f, 0f, -27f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -385f, 180f, 200f, 0f, 0f, -140f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -600f, 280f, 200f, 0f, 0f, -75f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 165f, 165f, 200f, 0f, 0f, 0f, 1100f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -465f, -340f, 200f, 0f, 0f, 37.5f, 500f, 275f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -37.5f, -525f, 200f, 0f, 0f, 0f, 1125f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 670f, -315f, 200f, 0f, 0f, -42f, 365f, 817f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 860f, 487.5f, 200f, 0f, 0f, 35f, 650f, 900f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 512.5f, 800f, 200f, 0f, 0f, 1f, 300f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1230f, 695f, 200f, 0f, 0f, -14f, 875f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1560f, 835f, 200f, 0f, 0f, 16f, 450f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1727.5f, 702.5f, 200f, 0f, 0f, -14f, 100f, 575f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 964.14f, 59.521f, 200f, 0f, 0f, -71.00001f, 415f, 725f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1485f, 322.5f, 200f, 0f, 0f, -84f, 650f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1630f, 100f, 200f, 0f, 0f, -111f, 435f, 375f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1752.5f, 302.5f, 200f, 0f, 0f, -47f, 275f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 103.6867f, 807.6879f, 200f, 0f, 0f, 58.7951f, 295.0871f, 709.0376f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 302.139f, 780.344f, 200f, 0f, 0f, 82f, 200f, 157.492f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -847.5f, 240f, 200f, 0f, 0f, 33f, 797f, 225f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -975f, 280f, 200f, 0f, 0f, 142f, 329f, 450f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -245.4394f, 1000f, 200f, 0f, 0f, 0f, 333.3127f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -760f, 440f, 200f, 0f, 0f, 105f, 300f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -520f, 507.5f, 200f, 0f, 0f, 0f, 450f, 450f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -495f, 822.5f, 200f, 0f, 0f, 45f, 500f, 225f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -140f, 705f, 200f, 0f, 0f, 59f, 250f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -327.5f, 1080f, 200f, 0f, 0f, 45f, 100f, 100f, 800f);
			Jump @9445; //curOff = 5583
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_ROANOKE_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, 1838.526f, 72.693f, 200f, 0f, 0f, -111f, 525f, 311f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2827.5f, 1215f, 200f, 0f, 0f, -9f, 1500f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1920f, 655f, 200f, 0f, 0f, -14f, 300f, 575f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2181.992f, -132.078f, 200f, 0f, 0f, 86f, 315f, 322f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2130f, 825f, 200f, 0f, 0f, 12f, 500f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2345f, 1795f, 200f, 0f, 0f, 118f, 200f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2775f, 725f, 200f, 0f, 0f, 41f, 2000f, 985f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2565f, 1537.5f, 200f, 0f, 0f, -47f, 1000f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3025f, 1632.5f, 200f, 0f, 0f, -19f, 1500f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3730f, 2300f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			Jump @9445; //curOff = 6026
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_SCARLETT_MEADOWS");
			VOLUME::_0x39816F6F94F385AD(iVar0, 1025f, -642.5f, 150f, 0f, 0f, -42f, 600f, 800f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1335f, -407.5f, 150f, 0f, 0f, -71f, 717f, 325f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1585f, -330f, 150f, 0f, 0f, -111f, 400f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1250f, -1702.5f, 150f, 0f, 0f, 0f, 594f, 2000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 612.5f, -1337.5f, 150f, 0f, 0f, 0f, 850f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 677.5f, -2270f, 150f, 0f, 0f, 45f, 1000f, 700f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1408.3f, -1687.9f, 150f, 0f, 0f, 5f, 450f, 1300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1600f, -545f, 100f, 0f, 0f, 20f, 325f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1807.467f, -1544.09f, 150f, 0f, 0f, -72f, 309f, 562f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1705.656f, -1257.077f, 150f, 0f, 0f, 20f, 400f, 50f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1946.824f, -1264.023f, 150f, 0f, 0f, 21f, 100f, 176f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1735.228f, -1334.945f, 150f, 0f, 0f, 20f, 295f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1902.5f, -432.5f, 150f, 0f, 0f, -111f, 365f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1827.5f, -580f, 150f, 0f, 0f, 20f, 75f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1571.834f, -1097.489f, 150f, 0f, 0f, 20f, 85f, 371f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1661.989f, -1972.796f, 150f, 0f, 0f, 18f, 85f, 371f, 700f);
			Jump @9445; //curOff = 6715
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_TALL_TREES");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1762.5f, -2030f, 150f, 0f, 0f, 16f, 275f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1445f, -1987.5f, 150f, 0f, 0f, -42f, 125f, 50f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1600f, -1882.5f, 150f, 0f, 0f, 20f, 200f, 335f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1927.5f, -1750f, 150f, 0f, 0f, 30f, 690f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2052.5f, -1517.5f, 150f, 0f, 0f, 15f, 715f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2162.5f, -1237.5f, 150f, 0f, 0f, -45f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2272.5f, -1057.5f, 150f, 0f, 0f, -65f, 519f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2865f, -1112.5f, 150f, 0f, 0f, 167f, 1250f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1972.5f, -2022.5f, 150f, 0f, 0f, 44f, 300f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1875f, -2087.5f, 150f, 0f, 0f, 70f, 300f, 180f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2140f, -1950f, 150f, 0f, 0f, 70f, 200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2210f, -1890f, 150f, 0f, 0f, 24f, 200f, 175f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1397.5f, -2027.5f, 150f, 0f, 0f, 20f, 45f, 25f, 700f);
			Jump @9445; //curOff = 7287
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CHOLLA_SPRINGS");
			VOLUME::_0x39816F6F94F385AD(iVar0, -3305f, -3380f, 150f, 0f, 0f, 123f, 300f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3335f, -3582.5f, 150f, 0f, 0f, 170f, 225f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3200f, -3515f, 150f, 0f, 0f, -154f, 235f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3515f, -3190f, 150f, 0f, 0f, 139f, 450f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3930f, -2912.5f, 150f, 0f, 0f, 154f, 700f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4537.5f, -2665f, 150f, 0f, 0f, -178f, 1000f, 800f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4967.5f, -2390f, 150f, 0f, 0f, -148f, 300f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4617.5f, -2080f, 150f, 0f, 0f, 175f, 1000f, 700f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3747.5f, -2030f, 150f, 0f, 0f, 99f, 700f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3282.5f, -3050f, 150f, 0f, 0f, 107f, 750f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3370f, -2690f, 150f, 0f, 0f, 124f, 100f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3355f, -2345f, 150f, 0f, 0f, 69f, 200f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3657.5f, -2610f, 150f, 0f, 0f, 98f, 500f, 850f, 700f);
			Jump @9445; //curOff = 7859
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GAPTOOTH_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, -5420f, -3447.5f, 150f, 0f, 0f, 175f, 300f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5837.5f, -3530f, 150f, 0f, 0f, -32f, 1000f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -6142.5f, -3665f, 150f, 0f, 0f, -8f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5747.5f, -2905f, 150f, 0f, 0f, 136.5f, 1300f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5407.5f, -2487.5f, 150f, 0f, 0f, -148f, 550f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5232.5f, -2825f, 150f, 0f, 0f, -178f, 400f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5667.5f, -2040f, 150f, 0f, 0f, 175f, 1100f, 800f, 700f);
			Jump @9445; //curOff = 8173
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HENNIGAS_STEAD");
			VOLUME::_0x39816F6F94F385AD(iVar0, -2510f, -2542.5f, 150f, 0f, 0f, 44f, 1200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1632.5f, -2480f, 150f, 0f, 0f, 16f, 275f, 535f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1990f, -2525f, 150f, 0f, 0f, 70f, 600f, 850f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1452.5f, -2342.5f, 150f, 0f, 0f, 16f, 150f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1480f, -2177.5f, 150f, 0f, 0f, 20f, 165f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1487.5f, -2087.5f, 150f, 0f, 0f, -42f, 60f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1350f, -2330f, 150f, 0f, 0f, 20f, 165f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1562.5f, -2652.5f, 150f, 0f, 0f, 28f, 500f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2445f, -2795f, 150f, 0f, 0f, 107f, 750f, 1350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2675f, -2177.5f, 150f, 0f, 0f, 70f, 600f, 900f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2947.5f, -2465f, 150f, 0f, 0f, 98f, 150f, 600f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3097.5f, -1977.5f, 150f, 0f, 0f, 99f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2467.5f, -3145f, 150f, 0f, 0f, 123f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2577.5f, -3182.5f, 150f, 0f, 0f, 85f, 150f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2985f, -2502.5f, 150f, 0f, 0f, 124f, 150f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2942.5f, -2457.5f, 150f, 0f, 0f, 69f, 175f, 600f, 700f);
			Jump @9445; //curOff = 8874
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_RIO_BRAVO");
			VOLUME::_0x39816F6F94F385AD(iVar0, -3540f, -3635f, 150f, 0f, 0f, 123f, 125f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3880f, -3687.5f, 150f, 0f, 0f, 105f, 225f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4495f, -3610f, 150f, 0f, 0f, 96f, 600f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4922.5f, -3742.5f, 150f, 0f, 0f, 131f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5135f, -3900f, 150f, 0f, 0f, 22f, 200f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5205f, -3887.5f, 150f, 0f, 0f, -16f, 300f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5350f, -3835f, 150f, 0f, 0f, -32f, 150f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5125f, -3500f, 150f, 0f, 0f, 175f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4975f, -3360f, 150f, 0f, 0f, 137f, 450f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4645f, -3220f, 150f, 0f, 0f, -178f, 735f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4205f, -3420f, 150f, 0f, 0f, 154f, 450f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3795f, -3510f, 150f, 0f, 0f, 139f, 450f, 275f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3992.5f, -3567.5f, 150f, 0f, 0f, 0f, 200f, 200f, 700f);
			Global_1897952[iParam0 /*2*/].f_1 = iVar0;
			return iVar0;
		}
int func_1618(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return joaat("SHOP_BLK_GENERAL_STORE");
		case 8:
			return joaat("SHOP_BLK_GUNSMITH");
		case 9:
			return joaat("SHOP_BLK_BARBER");
		case 17:
			return joaat("SHOP_BLK_TAILOR");
		case 13:
			return joaat("SHOP_BLK_HORSE_SHOP");
		case 14:
			return joaat("SHOP_BLK_POST_OFFICE");
		case 15:
			return joaat("SHOP_BLK_TRAIN_STATION");
		case 108:
			return joaat("SHOP_BLK_HORSE_FENCE_MP");
		case 12:
			return joaat("SHOP_BLK_PHOTO_STUDIO");
		case 16:
			return joaat("SHOP_BLK_NEWSPAPER_BOY");
		case 106:
			return joaat("SHOP_BLK_BOUNTYHUNTING_MP_RETURN");
		case 107:
			return joaat("SHOP_BLK_COACH");
		case 6:
			return joaat("SHOP_BLK_BANK");
		case 10:
			return joaat("SHOP_BLK_BUTCHER");
		case 11:
			return joaat("SHOP_BLK_BARTENDER");
		case 19:
			return joaat("SHOP_EMR_GENERAL_STORE");
		case 20:
			return joaat("SHOP_EMR_POST_OFFICE");
		case 21:
			return joaat("SHOP_EMR_TRAIN_STATION");
		case 18:
			return joaat("SHOP_EMR_FENCE");
		case 105:
			return joaat("SHOP_EMR_HORSE_FENCE_MP");
		case 22:
			return joaat("SHOP_LAG_BAIT_STORE");
		case 118:
			return joaat("SHOP_LAG_HORSE_FENCE_MP");
		case 39:
			return joaat("SHOP_SDN_DOCTOR");
		case 42:
			return joaat("SHOP_SDN_GENERAL_STORE");
		case 41:
			return joaat("SHOP_SDN_FENCE");
		case 43:
			return joaat("SHOP_SDN_GUNSMITH");
		case 36:
			return joaat("SHOP_SDN_BANK");
		case 37:
			return joaat("SHOP_SDN_BARBER");
		case 38:
			return joaat("SHOP_SDN_BUTCHER");
		case 40:
			return joaat("SHOP_SDN_EXOTIC");
		case 44:
			return joaat("SHOP_SDN_HORSE_SHOP");
		case 45:
			return joaat("SHOP_SDN_POST_OFFICE");
		case 46:
			return joaat("SHOP_SDN_TRAIN_STATION");
		case 47:
			return joaat("SHOP_SDN_TAILOR");
		case 55:
			return joaat("SHOP_SDN_TRAPPER");
		case 111:
			return joaat("SHOP_SDN_HORSE_FENCE_MP");
		case 48:
			return joaat("SHOP_SDN_MARKET");
		case 49:
			return joaat("SHOP_SDN_FRENCH_MARKET01");
		case 50:
			return -1673339528;
		case 53:
			return joaat("SHOP_SDN_BARTENDER_SLUM");
		case 54:
			return joaat("SHOP_SDN_PHOTO_STUDIO");
		case 51:
			return joaat("SHOP_SDN_NEWSPAPER_BOY");
		case 109:
			return joaat("SHOP_SDN_BOUNTYHUNTING_MP_RETURN");
		case 110:
			return joaat("SHOP_SDN_COACH");
		case 52:
			return joaat("SHOP_SDN_BARTENDER");
		case 23:
			return joaat("SHOP_RGG_POST_OFFICE");
		case 24:
			return joaat("SHOP_RGG_TRAIN_STATION");
		case 28:
			return joaat("SHOP_RHO_GENERAL_STORE");
		case 27:
			return joaat("SHOP_RHO_FENCE");
		case 29:
			return joaat("SHOP_RHO_GUNSMITH");
		case 30:
			return joaat("SHOP_RHO_POST_OFFICE");
		case 26:
			return joaat("SHOP_RHO_BUTCHER");
		case 31:
			return joaat("SHOP_RHO_TRAIN_STATION");
		case 113:
			return joaat("SHOP_RHO_HORSE_FENCE_MP");
		case 32:
			return joaat("SHOP_RHO_NEWSPAPER_BOY");
		case 112:
			return joaat("SHOP_RHO_BOUNTYHUNTING_MP_RETURN");
		case 25:
			return joaat("SHOP_RHO_BANK");
		case 33:
			return joaat("SHOP_RHO_BARTENDER");
		case 60:
			return joaat("SHOP_STR_BUTCHER");
		case 61:
			return joaat("SHOP_STR_GENERAL_STORE");
		case 62:
			return joaat("SHOP_STR_WELCOME_CENTER");
		case 63:
			return joaat("SHOP_STR_HORSE_SHOP");
		case 65:
			return joaat("SHOP_STR_POST_OFFICE");
		case 115:
			return joaat("SHOP_STR_HORSE_FENCE_MP");
		case 64:
			return joaat("SHOP_STR_NEWSPAPER_BOY");
		case 114:
			return joaat("SHOP_STR_BOUNTYHUNTING_MP_RETURN");
		case 66:
			return joaat("SHOP_STR_BARTENDER");
		case 73:
			return joaat("SHOP_VAL_DOCTOR");
		case 74:
			return joaat("SHOP_VAL_GENERAL_STORE");
		case 75:
			return joaat("SHOP_VAL_GUNSMITH");
		case 69:
			return joaat("SHOP_VAL_BARBER");
		case 77:
			return joaat("SHOP_VAL_POST_OFFICE");
		case 76:
			return joaat("SHOP_VAL_HORSE_SHOP");
		case 72:
			return joaat("SHOP_VAL_BUTCHER");
		case 78:
			return joaat("SHOP_VAL_TRAIN_STATION");
		case 104:
			return joaat("SHOP_VAL_HORSE_FENCE_MP");
		case 71:
			return joaat("SHOP_VAL_BARTENDER_KEANE");
		case 81:
			return joaat("SHOP_VAL_BARTENDER_SLUM");
		case 80:
			return joaat("SHOP_VAL_NEWSPAPER_BOY");
		case 79:
			return joaat("SHOP_VAL_HOTEL");
		case 102:
			return joaat("SHOP_VAL_BOUNTYHUNTING_MP_RETURN");
		case 103:
			return joaat("SHOP_VAL_COACH");
		case 68:
			return joaat("SHOP_VAL_BANK");
		case 70:
			return joaat("SHOP_VAL_BARTENDER");
		case 35:
			return joaat("SHOP_SCM_HORSE_SHOP");
		case 86:
			return joaat("SHOP_VAN_POST_OFFICE");
		case 85:
			return joaat("SHOP_VAN_TRAIN_STATION");
		case 82:
			return joaat("SHOP_VAN_FENCE");
		case 117:
			return joaat("SHOP_VAN_HORSE_FENCE_MP");
		case 84:
			return joaat("SHOP_VAN_HORSE_SHOP");
		case 83:
			return joaat("SHOP_VAN_BARTENDER");
		case 116:
			return joaat("SHOP_VAN_COACH");
		case 1:
			return joaat("SHOP_ASB_NEWSPAPER_BOY");
		case 120:
			return joaat("SHOP_ASB_BOUNTYHUNTING_MP_RETURN");
		case 0:
			return joaat("SHOP_ASB_GUNSMITH");
		case 2:
			return joaat("SHOP_ASB_POST_OFFICE");
		case 3:
			return joaat("SHOP_ASB_TRAIN_STATION");
		case 121:
			return joaat("SHOP_ASB_HORSE_FENCE_MP");
		case 89:
			return joaat("SHOP_WAL_POST_OFFICE");
		case 87:
			return joaat("SHOP_WAL_GENERAL_STORE");
		case 88:
			return joaat("SHOP_WAL_TRAIN_STATION");
		case 101:
			return joaat("SHOP_DYNAMIC");
		case 126:
			return joaat("SHOP_WILDERNESS_SUPPLIES");
		case 127:
			return joaat("SHOP_ANYWHERE_HANDHELD");
		case 124:
			return joaat("SHOP_MAP_HORSE_FENCE_MP");
		case 149:
			return joaat("SHOP_WEAPON_MOD_STORE");
		case 150:
			return joaat("SHOP_CLOTHING");
		case 151:
			return joaat("SHOP_CAMP_SHAVING");
		case 152:
			return joaat("SHOP_WARDROBE");
		case 128:
			return joaat("SHOP_BVH_DOCTOR");
		case 129:
			return joaat("SHOP_BVH_GENERAL_STORE");
		case 130:
			return joaat("SHOP_BVH_GUNSMITH");
		case 131:
			return joaat("SHOP_BVH_HORSE_TRAINER");
		case 59:
			return 1529797091;
		case 132:
			return joaat("SHOP_CLM_DOCTOR");
		case 133:
			return joaat("SHOP_CLM_GENERAL_STORE");
		case 134:
			return joaat("SHOP_CLM_GUNSMITH");
		case 135:
			return joaat("SHOP_CLM_HORSE_TRAINER");
		case 57:
			return 1388932648;
		case 137:
			return joaat("SHOP_HSO_DOCTOR");
		case 138:
			return joaat("SHOP_HSO_GENERAL_STORE");
		case 139:
			return joaat("SHOP_HSO_GUNSMITH");
		case 140:
			return joaat("SHOP_HSO_HORSE_TRAINER");
		case 56:
			return 878376253;
		case 141:
			return joaat("SHOP_LAK_DOCTOR");
		case 142:
			return joaat("SHOP_LAK_GENERAL_STORE");
		case 143:
			return joaat("SHOP_LAK_GUNSMITH");
		case 144:
			return joaat("SHOP_LAK_HORSE_TRAINER");
		case 145:
			return joaat("SHOP_SHB_DOCTOR");
		case 146:
			return joaat("SHOP_SHB_GENERAL_STORE");
		case 147:
			return joaat("SHOP_SHB_GUNSMITH");
		case 148:
			return joaat("SHOP_SHB_HORSE_TRAINER");
		case 58:
			return -2076086367;
		case 136:
			return joaat("SHOP_CLM_HORSE_FENCE");
		case 119:
			return joaat("SHOP_CKT_HORSE_FENCE_MP");
		case 122:
			return joaat("SHOP_BUT_HORSE_FENCE_MP");
		case 95:
			return joaat("SHOP_AMD_GENERAL_STORE");
		case 97:
			return joaat("SHOP_AMD_BARTENDER");
		case 96:
			return joaat("SHOP_AMD_POST_OFFICE");
		case 90:
			return joaat("SHOP_TBL_GENERAL_STORE");
		case 93:
			return joaat("SHOP_TBL_BARTENDER");
		case 91:
			return joaat("SHOP_TBL_GUNSMITH");
		case 92:
			return joaat("SHOP_TBL_BUTCHER");
		case 94:
			return joaat("SHOP_TBL_HORSE_SHOP");
		case 98:
			return joaat("SHOP_RYC_FENCE");
		case 125:
			return joaat("SHOP_THL_FENCE");
		case 123:
			return joaat("SHOP_BEN_HORSE_FENCE_MP");
		case 99:
			return joaat("SHOP_BEN_POST_OFFICE");
		case 100:
			return joaat("SHOP_BEN_TRAIN_STATION");
		case 4:
			return 548657065;
		case 5:
			return 243086140;
		case 34:
			return -305029900;
		case 67:
			return 1008537949;
		default:
			break;
	}
	return 0;
}

int func_1646(int iParam0, int iParam1)
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
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007 /* GXTEntry: "Extremely durable, hand tooled Off-Hand Holster with elaborate rattlesnake and sk" +
    "ull decoration." */;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return -511891179;
		case 217:
			return -1207567168;
		case 218:
			return -1315407613;
		case 219:
			return 1786352060;
		case 220:
			return -833319691;
		case 221:
			return 1591329969;
		case 222:
			return 2123222014;
		case 223:
			return -1578397674;
		case 224:
			return 1473261684;
		case 225:
			return -241855024;
		case 226:
			return 12999093;
		case 227:
			return -6796437;
		case 228:
			return -268116367;
		case 229:
			return -636470867;
		case 230:
			return 1737668280;
		case 231:
			return 892807236;
		case 232:
			return -733247890;
		case 233:
			return 24047176;
		case 234:
			return -1561999014;
		case 235:
			return -2052774042;
		case 236:
			return joaat("SLOTID_HORSE_BEDROLL");
		case 237:
			return joaat("SLOTID_HORSE_BLANKET");
		case 238:
			return joaat("SLOTID_HORSE_CANTLE");
		case 239:
			return joaat("SLOTID_HORSE_FENDER");
		case 240:
			return joaat("SLOTID_HORSE_HORN");
		case 241:
			return joaat("SLOTID_HORSE_INSURANCE");
		case 242:
			return 802754820;
		case 243:
			return joaat("SLOTID_HORSE_MANE");
		case 244:
			return -1886147520;
		case 245:
			return joaat("SLOTID_HORSE_REINS");
		case 246:
			return joaat("SLOTID_HORSE_SADDLE");
		case 247:
			return 1221327846;
		case 248:
			return 923162715;
		case 249:
			return 625423581;
		case 250:
			return 326668608;
		case 251:
			return 669530755;
		case 252:
			return 429759982;
		case 253:
			return -2111934838;
		case 254:
			return 1886178087;
		case 255:
			return 1587783573;
		case 256:
			return -279722001;
		case 257:
			return joaat("SLOTID_HORSE_SADDLEBAG");
		case 258:
			return 724026534;
		case 259:
			return joaat("SLOTID_HORSE_SEAT");
		case 260:
			return joaat("SLOTID_HORSE_SEX");
		case 261:
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
int func_1647(int iParam0, int iParam1, int iParam2)
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

