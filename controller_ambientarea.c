#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
#endregion

void main() // Position - 0x0
{
	int num;
	int num2;
	var entityCoords;

	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(98))
		func_15();

	func_14();
	num = 0;

	while (true)
	{
		SYSTEM::WAIT(500);
		num2 = 0;
		entityCoords = Vector3( 0f, 0f, 0f );
	
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			entityCoords = Vector3(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	
		while (num2 != 2)
		{
			if (func_13(&Global_32504[num]))
			{
				if (func_12(num, entityCoords))
				{
					func_11(&Global_32504[num], 2);
				
					if (Global_32504[num].f_5 != 0)
					{
						if (SCRIPT::IS_THREAD_ACTIVE(Global_32504[num].f_5))
							PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_32504[num].f_5, 1);
					
						Global_32504[num].f_5 = 0;
					}
				}
			}
			else if (!func_10(Global_32504[num], 4))
			{
				if (func_5(&Global_32504[num], entityCoords))
					func_1(num);
			}
		
			num2 = num2 + 1;
			num = num + 1;
		
			if (num == 5)
				num = 0;
		}
	}

	return;
}

void func_1(int iParam0) // Position - 0x14A
{
	char* scriptName;
	Hash scriptHash;
	eStackSize stackSize;
	BOOL flag;

	stackSize = DEFAULT;
	flag = true;

	switch (iParam0)
	{
		case 0:
			scriptName = "re_ArmyBase";
			scriptHash = joaat("re_armybase");
			break;
	
		case 1:
			stackSize = MULTIPLAYER_MISSION;
			scriptName = "golf_ai_foursome";
			scriptHash = joaat("golf_ai_foursome");
			flag = false;
			break;
	
		case 3:
			scriptName = "re_Prison";
			scriptHash = joaat("re_prison");
			break;
	
		case 2:
			stackSize = MULTIPLAYER_MISSION;
			scriptName = "golf_ai_foursome_putting";
			scriptHash = joaat("golf_ai_foursome_putting");
			flag = false;
			break;
	
		case 4:
			stackSize = FRIEND;
			scriptName = "stripclub";
			scriptHash = joaat("stripclub");
			flag = false;
			break;
	}

	if (!flag && func_3())
		return;

	if (HUD::GET_LENGTH_OF_LITERAL_STRING(scriptName) != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(scriptHash) == 0)
		{
			SCRIPT::REQUEST_SCRIPT(scriptName);
		
			while (!SCRIPT::HAS_SCRIPT_LOADED(scriptName))
			{
				SYSTEM::WAIT(0);
			}
		
			Global_32504[iParam0].f_5 = SYSTEM::START_NEW_SCRIPT(scriptName, stackSize);
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(scriptName);
		
			if (Global_32504[iParam0].f_5 != 0)
				func_2(&Global_32504[iParam0], 2);
		}
	}

	return;
}

void func_2(int iParam0, int iParam1) // Position - 0x24F
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_3() // Position - 0x260
{
	if (func_4() == 0)
		return true;

	return false;
}

int func_4() // Position - 0x275
{
	return Global_32163;
}

BOOL func_5(int iParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x280
{
	if (!func_10(*iParam0, 1))
		if (func_9() && !func_6(6))
			return false;

	if (SYSTEM::VDIST2(vParam1, iParam0->f_2) > iParam0->f_1)
		return false;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2080.115f, 3292.193f, -11.667f, -2112.049f, 3224.331f, 11.667f, 115f, true, false, 0))
			return false;

	return true;
}

BOOL func_6(int iParam0) // Position - 0x306
{
	if (Global_43257 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x328
{
	return func_8(iParam0, Global_43257);
}

BOOL func_8(int iParam0, int iParam1) // Position - 0x339
{
	if (iParam1 == 15)
		return 1;

	if (iParam0 == 15)
		return 0;

	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
			}
		
			return 1;
	
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
			}
			break;
	
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
			}
			break;
	
		case 4:
			if (iParam1 == 17)
				return 1;
			break;
	
		case 5:
			break;
	
		case 6:
		case 8:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 7:
			if (iParam1 == 6)
				return 1;
			break;
	
		case 9:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
			}
			break;
	
		case 11:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
			}
			break;
	
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	}

	return 0;
}

BOOL func_9() // Position - 0x51A
{
	if (Global_43257 == 15)
		return false;

	return true;
}

BOOL func_10(int iParam0, int iParam1) // Position - 0x52F
{
	return iParam0 && iParam1 != false;
}

void func_11(int iParam0, int iParam1) // Position - 0x53E
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

BOOL func_12(int iParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x553
{
	vParam1.f_2 = 0f;

	if (!SCRIPT::IS_THREAD_ACTIVE(Global_32504[iParam0].f_5))
		return true;

	if (func_10(Global_32504[iParam0], 4))
		return true;

	if (func_9() && !func_6(6))
		if (!func_10(Global_32504[iParam0], 1))
			if (iParam0 == 1 || iParam0 == 2)
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("golf")) == 0)
					return true;
			else
				return true;

	if (SYSTEM::VDIST2(Global_32504[iParam0].f_2, vParam1) > Global_32504[iParam0].f_1 + 400f)
		return true;

	return false;
}

BOOL func_13(int iParam0) // Position - 0x5FE
{
	return func_10(*iParam0, 2);
}

void func_14() // Position - 0x60E
{
	int i;

	Global_32504[0].f_2 = Vector3(-2189.5447f, 3129.6125f, 0f);
	Global_32504[0].f_1 = 1000f * 1000f;
	Global_32504[0] = 0;
	Global_32504[0].f_5 = 0;
	Global_32504[1].f_2 = Vector3(-1172.8221f, 66.5235f, 0f);
	Global_32504[1].f_1 = 300f * 300f;
	Global_32504[1] = 0;
	Global_32504[1].f_5 = 0;
	Global_32504[3].f_2 = Vector3(1692.1469f, 2562.3127f, 0f);
	Global_32504[3].f_1 = 300f * 300f;
	Global_32504[3] = 0;
	Global_32504[3].f_5 = 0;
	Global_32504[2].f_2 = Vector3(-1329.6797f, 60.3478f, 0f);
	Global_32504[2].f_1 = 250f * 250f;
	Global_32504[2] = 0;
	Global_32504[2].f_5 = 0;
	Global_32504[4].f_2 = Vector3(114.64f, -1290.34f, 0f);
	Global_32504[4].f_1 = 100f * 100f;
	Global_32504[4] = 1;
	Global_32504[4].f_5 = 0;

	for (i = 0; i <= 5 - 1; i = i + 1)
	{
		Global_32504[i].f_2.f_2 = 0f;
	}

	return;
}

void func_15() // Position - 0x74E
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

