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
	iLocal_14 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volTumbleweed_Restriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_14, -5534.95f, -2962.377f, 38.52466f, 0f, 0f, 40.25f, 100f, 100f, 50f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_14, -5620.958f, -2940.959f, 32.69263f, 0f, 0f, 0f, 50f, 50f, 50f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_14, -5523.102f, -3041.372f, 32.69263f, 0f, 0f, 0f, 50f, 50f, 50f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_14, -5486.511f, -2894.654f, 32.69263f, 0f, 0f, 0f, 75f, 75f, 50f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_14, -5426.396f, -2936.432f, 32.69263f, 0f, 0f, 0f, 43f, 25f, 50f);
	__LIB_3__::func_941(iLocal_14, 1);
	iLocal_15 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5193.5f, -2122f, 17f, 0f, 0f, 45f, 87f, 77f, 25f, "m_volRathskellerFork_Restriction");
	__LIB_4__::func_858(iLocal_15, 0, 0, 1);
	iLocal_16 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5409.035f, -3657.266f, -14.49665f, 0f, 0f, -24f, 36f, 30f, 30f, "m_volAbandonedBarn_Restriction");
	__LIB_9__::func_266(iLocal_16, 0, 0, 1);
}

