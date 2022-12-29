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
	int iLocal_19 = 0;
#endregion
void __EntryFunction__()
{
	bool bVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	__LIB_9__::func_265();
	func_2();
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
	iLocal_14 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBlackwaterRestriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_14, -887.5f, -1330f, 50f, 0f, 0f, 0f, 325f, 350f, 200f);
	VOLUME::_0x39816F6F94F385AD(iLocal_14, -912.5f, -1130f, 50f, 0f, 0f, 0f, 275f, 50f, 200f);
	__LIB_3__::func_457(iLocal_14, 1);
	iLocal_15 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-869f, -1640.5f, 75f, 0f, 0f, -31f, 30f, 40f, 25f, "m_volWealthyHomeRestriction");
	__LIB_3__::func_457(iLocal_15, 1);
	iLocal_16 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volWindmillHouseRestriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_16, -1061.7f, -1641.6f, 77.5f, 0f, 0f, -9f, 15f, 15f, 12.5f);
	VOLUME::_0x39816F6F94F385AD(iLocal_16, -1031.1f, -1623.7f, 80f, 0f, 0f, -13f, 50f, 35f, 20f);
	VOLUME::_0x39816F6F94F385AD(iLocal_16, -1038.8f, -1664f, 91f, 0f, 0f, 0f, 20f, 20f, 35f);
	__LIB_3__::func_457(iLocal_16, 1);
	iLocal_17 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volFlatIronLakeIslandRestriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_17, 237.213f, -769.7713f, 42.9804f, 0f, 0f, 0f, 156.4307f, 81.38799f, 25.72252f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_17, -401.9616f, -1012.638f, 42.9804f, 0f, 0f, -51.00734f, 240.5335f, 103.688f, 24.89919f);
	VOLUME::_0x39816F6F94F385AD(iLocal_17, 440.3216f, -1462.027f, 55.90892f, 0f, 0f, 13.40226f, 421.2939f, 982.8425f, 99.70844f);
	__LIB_9__::func_421(iLocal_17, 0, 0, 1);
	if (__LIB_0__::func_317() == 8)
	{
		iLocal_18 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBeechersHopeRestriction");
		VOLUME::_0xBCE668AAF83608BE(iLocal_18, -1628.978f, -1384.765f, 87.31792f, 0f, 0f, 1.805961f, 117.1854f, 142.6396f, 34.00172f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_18, -1583.582f, -1286.059f, 83.24481f, 0f, 0f, 1.805961f, 65.34718f, 62.69049f, 35.94681f);
		__LIB_4__::func_858(iLocal_18, 0, 0, 1);
	}
	iLocal_19 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1405.399f, -2279.227f, 70f, 0f, 0f, 7f, 65f, 107.5f, 40f, "m_volThievesLandingRestriction");
	__LIB_4__::func_859(iLocal_19, 0, 0, 1);
}

