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
#endregion
void __EntryFunction__()
{
	bool bVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	__LIB_9__::func_265();
	func_2();
	PERSCHAR::_0x187D65F3AEC5D679(joaat("GLO_WILDERNESS_TRAPPER"), "TallTrees/Tal_Trapper_1");
	if (PERSCHAR::_0x800DF3FC913355F3(PERSCHAR::_0x112DDF56300BC6E5(joaat("GLO_WILDERNESS_TRAPPER"))))
	{
		PERSCHAR::_0xD4B614179BCD0654(PERSCHAR::_0x112DDF56300BC6E5(joaat("GLO_WILDERNESS_TRAPPER")));
	}
	bVar0 = true;
	while (bVar0)
	{
		BUILTIN::WAIT(0);
	}
	__LIB_0__::func_11();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2()
{
	iLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1975f, -1615f, 125f, 0f, 0f, 0f, 100f, 100f, 50f, "m_volManzanitaPost_Restriction");
	__LIB_3__::func_941(iLocal_14, 1);
	iLocal_15 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1699.8f, -2103.5f, 92f, 0f, 0f, 0f, 75f, 75f, 50f, "m_volPacUnionRR_Restriction");
	__LIB_3__::func_941(iLocal_15, 1);
	iLocal_16 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2578.4f, -1380.4f, 161f, 0f, 0f, 0f, 15f, 15f, 20f, "m_volAuroraBasinShack_Restriction");
	__LIB_3__::func_941(iLocal_16, 1);
	if (__LIB_0__::func_317() == 8)
	{
		iLocal_17 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBeechersHope_Restriction");
		VOLUME::_0xBCE668AAF83608BE(iLocal_17, -1628.978f, -1384.765f, 87.31792f, 0f, 0f, 1.805961f, 117.1854f, 142.6396f, 34.00172f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_17, -1583.582f, -1286.059f, 83.24481f, 0f, 0f, 1.805961f, 65.34718f, 62.69049f, 35.94681f);
		__LIB_4__::func_858(iLocal_17, 0, 0, 1);
	}
	iLocal_18 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1405.399f, -2279.227f, 70f, 0f, 0f, 7f, 65f, 107.5f, 40f, "m_volThievesLanding_Restriction");
	__LIB_4__::func_859(iLocal_18, 0, 0, 1);
}

