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
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	Vehicle veLocal_31 = 0;
#endregion

void main() // Position - 0x0
{
	int i;
	float outValue;
	int j;
	int num;

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
	fLocal_12 = 0.001f;
	iLocal_15 = -1;
	iLocal_18 = -15;
	iLocal_19 = -15;
	iLocal_20 = -1;
	iLocal_24 = -1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
		func_99();

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("stock_controller")) > 1)
		func_99();

	Global_63469 = 1;
	iLocal_20 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(480) / 16f);
	func_98();
	i = 0;

	for (i = 0; i < 204; i = i + 1)
	{
		if (!Global_59227[i])
		{
			if (Global_59227[i].f_2)
			{
				if (!Global_59227[i].f_4)
				{
					STATS::STAT_GET_INT(Global_59227[i].f_3, &(Global_59227[i].f_5), -1);
				}
				else
				{
					outValue = 0f;
					STATS::STAT_GET_FLOAT(Global_59227[i].f_3, &outValue, -1);
					Global_59227[i].f_5 = SYSTEM::FLOOR(outValue);
				}
			}
		}
	}

	func_97();
	func_95();
	func_94();
	func_91();
	Global_63469 = 0;
	func_90(true);
	func_87();
	func_84();

	while (true)
	{
		for (j = 0; j < 3; j = j + 1)
		{
			if (!(G_MissionStats.f_20567.f_233[j].f_1 < 11))
				G_MissionStats.f_20567.f_233[j].f_1 = 0;
		}
	
		func_80();
	
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_79(14))
		{
			func_68();
			num = 16;
		
			while (func_67() && num >= 0)
			{
				num = num - 1;
				func_47();
				Global_60663 = 1;
				func_41();
				Global_63471 = 1;
				func_39();
				func_38();
			}
		
			if (func_30())
			{
				func_28(false);
				func_38();
				func_27();
				func_38();
				func_87();
				func_38();
			}
		
			while (Global_60656 > 0)
			{
				func_11(&iLocal_18, 0, 480, 0, 0, 0, 0);
				func_11(&iLocal_19, 0, 480, 0, 0, 0, 0);
				Global_60656 = Global_60656 - 1;
			}
		}
	
		func_4();
		func_1();
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Position - 0x201
{
	Ped playerPed;
	Ped ped;

	playerPed = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());

	if (ENTITY::IS_ENTITY_DEAD(playerPed, false))
		return;

	ped = func_3(playerPed);

	if (FIRE::IS_ENTITY_ON_FIRE(ped))
	{
		func_2(89, 1);
	
		if (ENTITY::GET_ENTITY_SPEED(ped) > 5f)
			func_2(90, 1);
	}

	return;
}

void func_2(int iParam0, int iParam1) // Position - 0x24A
{
	int outValue;

	if (iParam1 < 1)
		return;

	if (Global_59227[iParam0].f_2)
		return;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (Global_59227[iParam0])
	{
		STATS::STAT_GET_INT(Global_59227[iParam0].f_1, &outValue, -1);
		outValue = outValue + iParam1;
		STATS::STAT_SET_INT(Global_59227[iParam0].f_1, outValue, true);
	}

	return;
}

Ped func_3(Ped pedParam0) // Position - 0x2A7
{
	return pedParam0;
}

void func_4() // Position - 0x2B1
{
	int num;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (Global_60657)
		{
			Global_60657 = false;
			Global_60658 = MISC::GET_GAME_TIMER();
			Global_63470 = 1;
		}
	
		return;
	}

	if (Global_60657)
	{
		if (!STATS::STAT_COMMUNITY_SYNCH_IS_PENDING())
		{
			num = func_5();
			Global_60657 = false;
		
			if (num < 5)
				Global_63470 = 0;
		}
	}

	return;
}

int func_5() // Position - 0x2FE
{
	int i;
	int num;
	Hash statHash;
	float num2;
	int j;
	float outValue;
	float num3;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE() || !NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		return 1;

	i = 0;
	num = 0;

	for (i = 0; i < 80; i = i + 1)
	{
		if (Global_55784[i].f_8)
		{
			if (Global_55784[i].f_35 > -1)
			{
				statHash = Global_58665[Global_55784[i].f_35];
				STATS::STAT_GET_FLOAT(statHash, &(Global_55784[i].f_9), -1);
			
				if (Global_55784[i].f_9 > 0f)
				{
					num2 = 0f;
					STATS::STAT_COMMUNITY_GET_HISTORY(statHash, 0, &(Global_55784[i].f_33));
					Global_55784[i].f_31 = Global_55784[i].f_9;
					Global_55784[i].f_32 = Global_55784[i].f_9;
					num2 = num2 + Global_55784[i].f_33;
				
					for (j = 0; j < 4; j = j + 1)
					{
						outValue = 0f;
						STATS::STAT_COMMUNITY_GET_HISTORY(statHash, j + 1, &outValue);
					
						if (outValue > Global_55784[i].f_31)
							Global_55784[i].f_31 = outValue;
					
						if (outValue < Global_55784[i].f_32)
							Global_55784[i].f_32 = outValue;
					
						num2 = num2 + outValue;
					}
				
					num2 = num2 / 5f;
					num3 = func_6(i);
				
					if (num3 > Global_55784[i].f_31)
						Global_55784[i].f_31 = num3;
				
					if (num3 < Global_55784[i].f_32)
						Global_55784[i].f_32 = num3;
				
					Global_55784[i].f_33 = num3 - num2;
					Global_55784[i].f_34 = (Global_55784[i].f_33 / num2) * 100f;
				}
				else
				{
					num = num + 1;
				}
			}
		}
	}

	return num;
}

float func_6(int iParam0) // Position - 0x497
{
	int num;
	float num2;

	num = iParam0;
	num2 = Global_55784[iParam0].f_9 * func_7(num);
	return SYSTEM::TO_FLOAT(SYSTEM::FLOOR(num2 * 100f)) / 100f;
}

float func_7(int iParam0) // Position - 0x4CB
{
	float num;
	int num2;
	int i;
	float num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	int num10;
	float num11;
	float num12;

	num = 1f;

	switch (iParam0)
	{
		case 61:
			if (G_MissionStats.f_9088.f_99.f_58[131])
				num = 0.5f;
			break;
	
		case 73:
			if (func_10(25))
			{
				num = num * 3f;
			}
			else
			{
				if (func_10(74) || func_10(75))
					num = num * 0.95f;
			
				if (func_10(14))
					num = num * 0.98f;
			
				if (func_10(16))
					num = num * 0.98f;
			
				if (func_10(48))
					num = num * 0.98f;
			
				if (func_10(24))
					num = num * 0.98f;
			
				if (func_10(27))
					num = num * 0.5f;
			}
			break;
	
		case 66:
			if (func_10(49))
				num = num * 0.5f;
		
			if (func_10(10))
				num = num * 0.95f;
			break;
	
		case 59:
			if (func_10(93))
				if (!func_10(47))
					num = num * 0.9f;
		
			if (func_10(38))
				if (!func_10(28))
					num = num * 0.9f;
		
			if (func_10(84))
				if (!func_10(28))
					num = num * 0.9f;
			break;
	
		case 69:
			if (func_10(90))
				if (!func_10(14))
					num = num * 0.7f;
			break;
	
		case 16:
			if (func_10(28))
				num = num * 2f;
			break;
	
		case 52:
			if (func_10(93))
				if (!func_10(28))
					num = num * 0.6f;
			break;
	
		case 56:
			if (func_10(61))
				if (!func_10(49))
					num = num * 0.5f;
			break;
	}

	if (G_MissionStats.f_20567.f_442 < 1)
		return num;

	num2 = -1;
	i = 0;

	for (i = 0; i < 8; i = i + 1)
	{
		if (G_MissionStats.f_20567.f_443[i] == iParam0)
			num2 = i;
	}

	if (num2 > -1)
		num = func_9(G_MissionStats.f_20567.f_452[num2], G_MissionStats.f_20567.f_461[num2]);

	if (num > 1f)
	{
		num3 = num - 1f;
		num4 = iParam0;
		num5 = func_8(0, num4);
		num6 = func_8(1, num4);
		num7 = func_8(2, num4);
	
		if (num5 + num6 + num7 > 0)
		{
			num8 = Global_60659[0] + Global_60659[1] + Global_60659[2];
		
			for (i = 0; i < 10; i = i + 1)
			{
				if (G_MissionStats.f_20567.f_22[i] > 0)
					num8 = num8 + SYSTEM::FLOOR(G_MissionStats.f_20567.f_11[i]);
			
				if (G_MissionStats.f_20567.f_55[i] > 0)
					num8 = num8 + SYSTEM::FLOOR(G_MissionStats.f_20567.f_44[i]);
			
				if (G_MissionStats.f_20567.f_88[i] > 0)
					num8 = num8 + SYSTEM::FLOOR(G_MissionStats.f_20567.f_77[i]);
			}
		
			num9 = 700000000;
			num10 = 1000000000;
		
			if (num8 > num10)
			{
				num3 = 0f;
			}
			else if (num8 < num9)
			{
				num3 = 1f;
			}
			else
			{
				num11 = SYSTEM::TO_FLOAT(num8 - num9);
				num12 = SYSTEM::TO_FLOAT(num10 - num9);
				num3 = num3 * (1f - (num11 / num12));
			}
		}
	
		num = 1f + num3;
	}

	return num;
}

int func_8(int iParam0, int iParam1) // Position - 0x844
{
	if (iParam1 < 0 || iParam1 > 9)
		return 0;

	switch (iParam0)
	{
		case 0:
			return G_MissionStats.f_20567.f_22[iParam1];
	
		case 1:
			return G_MissionStats.f_20567.f_55[iParam1];
	
		case 2:
			return G_MissionStats.f_20567.f_88[iParam1];
	}

	return 0;
}

float func_9(int iParam0, int iParam1) // Position - 0x8B5
{
	float num;
	BOOL flag;
	float num2;
	int num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	float num9;
	float num10;

	num = 0f;

	if (iParam0 < 1)
		return 1f;

	flag = IS_BIT_SET(iParam1, 0);
	num2 = SYSTEM::TO_FLOAT(iParam0);
	num3 = 0;

	if (IS_BIT_SET(iParam1, 3))
		num3 = num3 + 1;

	if (IS_BIT_SET(iParam1, 4))
		num3 = num3 + 2;

	if (IS_BIT_SET(iParam1, 5))
		num3 = num3 + 4;

	if (IS_BIT_SET(iParam1, 20))
		num3 = num3 + 8;

	num4 = SYSTEM::TO_FLOAT(3 * num3);

	if (IS_BIT_SET(iParam1, 2))
		num4 = num4 * 7f;

	if (IS_BIT_SET(iParam1, 1))
		if (func_10(21))
			return 1f;
	else if (num4 < 1f)
		return 1f;

	num5 = 1f - (num2 / num4);

	if (IS_BIT_SET(iParam1, 16))
		num = num - 0.5f;

	if (IS_BIT_SET(iParam1, 17))
		num = num - 0.25f;

	if (IS_BIT_SET(iParam1, 18))
		num = num - 0.1f;

	if (IS_BIT_SET(iParam1, 19))
		num = num - 0.33f;

	if (flag)
		num = -num;

	if (!IS_BIT_SET(iParam1, 1))
	{
		if (IS_BIT_SET(iParam1, 6))
		{
			num6 = 0f;
		
			if (IS_BIT_SET(iParam1, 8))
				num6 = num6 + 0.5f;
		
			if (IS_BIT_SET(iParam1, 9))
				num6 = num6 + 0.25f;
		
			if (IS_BIT_SET(iParam1, 10))
				num6 = num6 + 0.125f;
		
			if (num5 < num6)
			{
				num7 = num5 / num6;
			
				if (IS_BIT_SET(iParam1, 7))
				{
					num7 = 1f - num7;
					num7 = num7 * num7;
					num7 = 1f - num7;
				}
			
				num = num * num7;
			}
		}
	
		if (IS_BIT_SET(iParam1, 11))
		{
			num8 = 0f;
		
			if (IS_BIT_SET(iParam1, 13))
				num8 = num8 + 0.5f;
		
			if (IS_BIT_SET(iParam1, 14))
				num8 = num8 + 0.25f;
		
			if (IS_BIT_SET(iParam1, 15))
				num8 = num8 + 0.125f;
		
			num9 = 1f - num8;
		
			if (num5 > num9)
			{
				num10 = (num5 - num9) / num8;
			
				if (IS_BIT_SET(iParam1, 12))
					num10 = num10 * num10;
			
				num = num * (1f - num10);
			}
		}
	}

	num = 1f + num;
	return num;
}

BOOL func_10(int iParam0) // Position - 0xA95
{
	return G_MissionStats.f_9088.f_330[iParam0];
}

void func_11(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xAAB
{
	int num;
	int i;
	int j;
	int k;
	int l;
	int m;
	int num2;
	int num3;
	int num4;
	int num5;

	num = func_25(*uParam0);
	i = func_24(*uParam0);
	j = func_23(*uParam0);
	k = func_22(*uParam0);
	l = func_21(*uParam0);
	m = func_20(*uParam0);

	if (iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0)
		return;

	if (iParam1 < 0)
		return;

	if (iParam2 < 0)
		return;

	if (iParam3 < 0)
		return;

	if (iParam4 < 0)
		return;

	for (m = m - iParam1; m < 0; m = m + 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (l = l - iParam2; l < 0; l = l + 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (k = k - iParam3; k < 0; k = k + 24)
	{
		iParam4 = iParam4 + 1;
	}

	for (j = j - iParam4; j <= 0; j = j + num5)
	{
		iParam5 = iParam5 + 1;
		num2 = i - 1;
		num3 = num;
	
		if (num2 < 0)
		{
			num2 = 11;
			num3 = num3 - 1;
		}
	
		num4 = num2;
		num5 = func_19(num4, num3);
	}

	for (i = i - iParam5; i < 0; i = i + 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num - iParam6;
	func_12(uParam0, m, l, k, j, i, num);
	return;
}

void func_12(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xC00
{
	func_18(uParam0, iParam1);
	func_17(uParam0, iParam2);
	func_16(uParam0, iParam3);
	func_15(uParam0, iParam5);
	func_14(uParam0, iParam4);
	func_13(uParam0, iParam6);
	return;
}

void func_13(var uParam0, int iParam1) // Position - 0xC38
{
	if (iParam1 <= 0)
		return;

	if (iParam1 > 2043 || iParam1 < 1979)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 2011)
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(2011 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1 - 2011, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}

	return;
}

void func_14(var uParam0, int iParam1) // Position - 0xCBE
{
	int num;
	int num2;

	num = func_24(*uParam0);
	num2 = func_25(*uParam0);

	if (iParam1 < 1 || iParam1 > func_19(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_15(var uParam0, int iParam1) // Position - 0xD0F
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_16(var uParam0, int iParam1) // Position - 0xD42
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_17(var uParam0, int iParam1) // Position - 0xD7C
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_18(var uParam0, int iParam1) // Position - 0xDB7
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

int func_19(int iParam0, int iParam1) // Position - 0xDF3
{
	if (iParam1 < 0)
		iParam1 = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
	
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
	
		case 1:
			if (iParam1 % 4 == 0)
				if (iParam1 % 100 != 0)
					return 29;
				else if (iParam1 % 400 == 0)
					return 29;
		
			return 28;
	}

	return 30;
}

int func_20(int iParam0) // Position - 0xE95
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_21(int iParam0) // Position - 0xEA8
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_22(int iParam0) // Position - 0xEBB
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_23(int iParam0) // Position - 0xECE
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_24(int iParam0) // Position - 0xEE0
{
	return iParam0 & 15;
}

int func_25(int iParam0) // Position - 0xEED
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_26(BOOL bParam0, var uParam1, var uParam2) // Position - 0xF0F
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_27() // Position - 0xF26
{
	int i;

	if (G_MissionStats.f_20567.f_442 < 1)
		return;

	for (i = 0; i < 8; i = i + 1)
	{
		if (!IS_BIT_SET(G_MissionStats.f_20567.f_461[i], 1))
		{
			if (G_MissionStats.f_20567.f_452[i] > 0)
			{
				G_MissionStats.f_20567.f_452[i] = G_MissionStats.f_20567.f_452[i] - 1;
			
				if (G_MissionStats.f_20567.f_452[i] < 1)
				{
					G_MissionStats.f_20567.f_452[i] = 0;
					G_MissionStats.f_20567.f_442 = G_MissionStats.f_20567.f_442 - 1;
				}
			}
		}
	}

	return;
}

void func_28(BOOL bParam0) // Position - 0xFCD
{
	int i;

	i = 0;

	for (i = 0; i < 80; i = i + 1)
	{
		func_29(i, bParam0);
		SYSTEM::WAIT(0);
	
		if (!bParam0)
			func_68();
	}

	return;
}

void func_29(int iParam0, BOOL bParam1) // Position - 0x1002
{
	float num;
	float num2;
	int i;

	if (Global_55784[iParam0].f_8)
		return;

	num = Global_55784[iParam0].f_9;

	if (!bParam1)
		num = func_6(iParam0);

	if (num == 0f)
		return;

	Global_55784[iParam0].f_14[Global_55784[iParam0].f_13] = num;

	if (num > Global_55784[iParam0].f_31)
		Global_55784[iParam0].f_31 = num;

	if (num < Global_55784[iParam0].f_32)
		Global_55784[iParam0].f_32 = num;

	Global_55784[iParam0].f_13 = Global_55784[iParam0].f_13 + 1;

	if (Global_55784[iParam0].f_13 >= 16)
		Global_55784[iParam0].f_13 = 0;

	num2 = 0f;

	for (i = 0; i < 16; i = i + 1)
	{
		num2 = num2 + Global_55784[iParam0].f_14[i];
	}

	num2 = num2 / SYSTEM::TO_FLOAT(16);
	Global_55784[iParam0].f_33 = num - num2;
	Global_55784[iParam0].f_34 = (Global_55784[iParam0].f_33 / num2) * 100f;
	return;
}

BOOL func_30() // Position - 0x110E
{
	int num;

	if (iLocal_18 == -15)
	{
		iLocal_18 = func_37();
		num = func_22(iLocal_18);
	
		if (num == 24)
			num = 0;
	
		if (func_36(num, 0, 8))
		{
			func_16(&iLocal_18, 8);
		}
		else if (func_36(num, 8, 16))
		{
			func_16(&iLocal_18, 16);
		}
		else if (func_36(num, 16, 24))
		{
			func_16(&iLocal_18, 0);
			func_35(&iLocal_18, 0, 0, 0, 1, 0, 0);
		}
	
		func_17(&iLocal_18, 0);
		func_18(&iLocal_18, 0);
		iLocal_19 = iLocal_18;
		return false;
	}

	if (func_34(iLocal_18))
	{
		if (func_31(&iLocal_18, true, 8))
			return false;
	
		func_35(&iLocal_18, 0, 480, 0, 0, 0, 0);
		return true;
	}

	return false;
}

BOOL func_31(var uParam0, BOOL bParam1, int iParam2) // Position - 0x11C8
{
	int num;
	int num2;
	int num3;
	int i;

	if (func_33(Global_1574629))
	{
		if (bParam1)
		{
			num = func_37();
			num2 = func_22(Global_1574629);
			num3 = func_21(Global_1574629);
			func_16(&num, num2);
			func_17(&num, num3);
			func_18(&num, 0);
		
			if (func_32(func_37(), num))
				func_35(&num, 0, 0, 0, 1, 0, 0);
		
			for (i = 0; func_32(num, *uParam0) && i < 24; i = i + iParam2)
			{
				func_35(uParam0, 0, 0, iParam2, 0, 0, 0);
			}
		}
	
		return true;
	}

	return false;
}

BOOL func_32(int iParam0, int iParam1) // Position - 0x125F
{
	int num;
	int num2;

	if (!func_33(iParam1) || !func_33(iParam0))
		return 1;

	num = func_25(iParam0);
	num2 = func_25(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_24(iParam0);
	num2 = func_24(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_23(iParam0);
	num2 = func_23(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_22(iParam0);
	num2 = func_22(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_21(iParam0);
	num2 = func_21(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_20(iParam0);
	num2 = func_20(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

BOOL func_33(int iParam0) // Position - 0x136B
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_20(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_21(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_22(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_25(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_24(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_23(iParam0);

	if (num6 < 1 || num6 > func_19(num5, num4))
		return false;

	return true;
}

BOOL func_34(int iParam0) // Position - 0x1447
{
	return func_32(func_37(), iParam0);
}

void func_35(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1459
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_25(*uParam0);
	i = func_24(*uParam0);
	num2 = func_23(*uParam0);
	j = func_22(*uParam0);
	k = func_21(*uParam0);
	l = func_20(*uParam0);

	if (iParam6 == 0 && iParam5 == 0 && iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0)
		return;

	if (iParam1 < 0)
		return;

	if (iParam2 < 0)
		return;

	if (iParam3 < 0)
		return;

	if (iParam4 < 0)
		return;

	if (iParam5 < 0)
		return;

	if (iParam6 < 0)
		return;

	for (l = l + iParam1; l >= 60; l = l - 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (k = k + iParam2; k >= 60; k = k - 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (j = j + iParam3; j >= 24; j = j - 24)
	{
		iParam4 = iParam4 + 1;
	}

	num2 = num2 + iParam4;

	for (m = func_19(i, num); num2 > m; m = func_19(i, num))
	{
		i = i + 1;
		num2 = num2 - m;
	
		if (i > 11)
		{
			num = num + 1;
			i = i - 12;
		}
	}

	for (i = i + iParam5; i > 11; i = i - 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num + iParam6;
	func_12(uParam0, l, k, j, num2, i, num);
	return;
}

BOOL func_36(int iParam0, int iParam1, int iParam2) // Position - 0x15DB
{
	BOOL flag;
	int num;
	int num2;

	if (iParam1 == 24)
		iParam1 = 0;

	if (iParam1 < 0 || iParam1 >= 24)
		return false;

	if (iParam2 == 24)
		iParam2 = 0;

	if (iParam2 < 0 || iParam2 >= 24)
		return false;

	if (iParam1 == iParam2)
		return true;

	flag = iParam2 < iParam1;
	num = iParam1;
	num2 = iParam2;

	if (flag)
		num2 = 24;

	if (iParam0 >= num && iParam0 < num2)
		return true;

	if (!flag)
		return false;

	num = 0;
	num2 = iParam2;

	if (iParam0 >= num && iParam0 < num2)
		return true;

	return false;
}

int func_37() // Position - 0x1684
{
	int unk;

	func_18(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_17(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_16(&unk, CLOCK::GET_CLOCK_HOURS());
	func_14(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_15(&unk, CLOCK::GET_CLOCK_MONTH());
	func_13(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_38() // Position - 0x16CA
{
	SYSTEM::WAIT(0);
	func_68();
	return;
}

void func_39() // Position - 0x16DB
{
	int playerRadioStationIndex;

	playerRadioStationIndex = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();

	if (iLocal_24 != playerRadioStationIndex)
	{
		if (iLocal_23 > 48)
		{
			switch (func_40(iLocal_24))
			{
				case 1:
					func_2(85, 1);
					break;
			
				case 2:
					func_2(84, 1);
					break;
			
				case 3:
					func_2(86, 1);
					break;
			
				case 4:
					func_2(87, 1);
					break;
			}
		}
	
		iLocal_23 = 0;
		iLocal_24 = playerRadioStationIndex;
	}

	switch (func_40(playerRadioStationIndex))
	{
		case 1:
			func_2(77, 1);
			break;
	
		case 2:
			func_2(76, 1);
			break;
	
		case 3:
			func_2(79, 1);
			break;
	
		case 4:
			func_2(80, 1);
			break;
	
		case 0:
			break;
	}

	func_2(78, 1);
	iLocal_23 = iLocal_23 + 1;
	return;
}

int func_40(int iParam0) // Position - 0x17AA
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 3;
	
		case 5:
		case 6:
		case 7:
		case 8:
			return 4;
	
		case 9:
		case 10:
		case 11:
		case 12:
			return 1;
	
		case 13:
		case 14:
		case 15:
		case 16:
			return 2;
	}

	return 0;
}

void func_41() // Position - 0x1836
{
	int i;
	int outValue;
	float outValue2;
	int num;
	int num2;
	float num3;
	int num4;
	float num5;
	float num6;
	float num7;

	func_68();

	for (i = 0; i < 204; i = i + 1)
	{
		if (!Global_59227[i])
		{
			if (Global_59227[i].f_2)
			{
				outValue = 0;
			
				if (!Global_59227[i].f_4)
				{
					STATS::STAT_GET_INT(Global_59227[i].f_3, &outValue, -1);
				}
				else
				{
					outValue2 = 0f;
					STATS::STAT_GET_FLOAT(Global_59227[i].f_3, &outValue2, -1);
					num = SYSTEM::FLOOR(outValue2);
				
					if (Global_59227[i].f_5 < num)
						outValue = num;
					else
						outValue = Global_59227[i].f_5;
				}
			
				Global_59227[i].f_6 = outValue - Global_59227[i].f_5;
			}
		}
	
		if (i % 20 == 0)
		{
			SYSTEM::WAIT(0);
			func_68();
		}
	}

	for (i = 0; i < 80; i = i + 1)
	{
		if (!Global_55784[i].f_8)
			if (!(Global_55784[i].f_10 == 0f))
				Global_55784[i].f_11 = Global_55784[i].f_10;
	
		if (i % 40 == 0)
		{
			SYSTEM::WAIT(0);
			func_68();
		}
	}

	num2 = 0;

	for (i = 0; i < 80; i = i + 1)
	{
		if (!Global_55784[i].f_8)
		{
			num3 = 0f;
		
			if (Global_55784[i].f_10 != 0f)
				num3 = num3 + ((0.02f * Global_55784[i].f_9 * Global_55784[i].f_10) - Global_55784[i].f_9);
		
			num3 = num3 + (MISC::GET_RANDOM_FLOAT_IN_RANGE(-Global_58939[num2].f_6, Global_58939[num2].f_6) * 0.1f * Global_55784[i].f_9);
			Global_58939[num2] = Global_58939[num2] * 0.995f;
		
			if (num3 < 0f)
				num3 = num3 * Global_58939[num2].f_2;
			else if (num3 > 0f)
				num3 = num3 * Global_58939[num2].f_1;
		
			num3 = func_46(num3, -Global_58939[num2].f_5, Global_58939[num2].f_5);
			num4 = 61;
		
			if (i == num4 && func_45(44) && !func_45(64) && num3 > 0f)
			{
				Global_55784[i].f_9 = Global_55784[i].f_9 - num3;
			}
			else
			{
				if (num3 > 0f)
				{
					num5 = func_43(i);
					num3 = num3 * num5;
				}
			
				Global_55784[i].f_9 = Global_55784[i].f_9 + num3;
			}
		
			if (Global_55784[i].f_9 > Global_58939[num2].f_3)
			{
				num6 = Global_55784[i].f_9 - Global_58939[num2].f_3;
				num6 = num6 * 0.5f;
				Global_55784[i].f_9 = Global_55784[i].f_9 - num6;
			}
			else if (Global_55784[i].f_9 < Global_58939[num2].f_4)
			{
				num7 = Global_58939[num2].f_4 - Global_55784[i].f_9;
				num7 = num7 * 0.5f;
				Global_55784[i].f_9 = Global_55784[i].f_9 + num7;
			}
		
			Global_58939[num2] = Global_58939[num2] - (((num3 * 0.66f) + (Global_58939[num2] * 0.33f)) * 0.02f);
		
			if (!(Global_55784[i].f_9 > 0f))
			{
				Global_55784[i].f_9 = -1f * Global_55784[i].f_9;
				Global_55784[i].f_9 = Global_55784[i].f_9 + 0.02f;
			}
		}
	
		if (i % 20 == 0)
		{
			SYSTEM::WAIT(0);
			func_68();
		}
	}

	func_42();
	i = 0;

	for (i = 0; i < 204; i = i + 1)
	{
		if (!Global_59227[i])
			if (Global_59227[i].f_2)
				Global_59227[i].f_5 = Global_59227[i].f_5 + Global_59227[i].f_6;
	}

	return;
}

void func_42() // Position - 0x1BF5
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 80; i = i + 1)
	{
		if (!Global_55784[i].f_8)
		{
			if (num < 42)
			{
				G_MissionStats.f_20567.f_103[num] = Global_55784[i].f_9;
			
				if (Global_55784[i].f_31 > G_MissionStats.f_20567.f_146[num])
					G_MissionStats.f_20567.f_146[num] = Global_55784[i].f_31;
			
				if (G_MissionStats.f_20567.f_189[num] == 0f)
					G_MissionStats.f_20567.f_189[num] = Global_55784[i].f_32;
				else if (Global_55784[i].f_32 < G_MissionStats.f_20567.f_189[num])
					G_MissionStats.f_20567.f_189[num] = Global_55784[i].f_32;
			
				num = num + 1;
			}
		}
	}

	return;
}

float func_43(int iParam0) // Position - 0x1CD1
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	float value;
	int i;
	int num6;
	int num7;
	int num8;
	float num9;
	float num10;

	if (Global_55784[iParam0].f_8)
		return 1f;

	num = func_8(0, iParam0);
	num2 = func_8(1, iParam0);
	num3 = func_8(2, iParam0);

	if (num + num2 + num3 < 1)
		return 1f;

	num4 = 1000000000;
	num5 = Global_60659[0] + Global_60659[1] + Global_60659[2];

	if (Global_60659[0] > num4)
		return 0f;

	if (Global_60659[1] > num4)
		return 0f;

	if (Global_60659[2] > num4)
		return 0f;

	value = 0f;

	for (i = 0; i < 10; i = i + 1)
	{
		num6 = func_8(0, i);
	
		if (num6 > 0)
			value = value + (func_6(func_44(0, i)) * (float)num6);
	
		if (func_8(1, i) > 0)
			value = value + (func_6(func_44(1, i)) * (float)num6);
	
		if (func_8(2, i) > 0)
			value = value + (func_6(func_44(2, i)) * (float)num6);
	}

	num7 = SYSTEM::FLOOR(value) + num5;
	num8 = 700000000;

	if (num7 > num4)
		return 0f;

	if (num7 < num8)
		return 1f;

	num9 = SYSTEM::TO_FLOAT(num7 - num8);
	num10 = SYSTEM::TO_FLOAT(num4 - num8);

	if (!(num10 > 0f))
		return 1f;

	return 1f - (num9 / num10);
}

int func_44(int iParam0, int iParam1) // Position - 0x1E26
{
	if (iParam1 < 0 || iParam1 > 9)
		return 31;

	switch (iParam0)
	{
		case 0:
			return G_MissionStats.f_20567[iParam1];
	
		case 1:
			return G_MissionStats.f_20567.f_33[iParam1];
	
		case 2:
			return G_MissionStats.f_20567.f_66[iParam1];
	
		default:
		
	}

	return 31;
}

BOOL func_45(int iParam0) // Position - 0x1E8E
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return G_MissionStats.f_9088.f_330[iParam0];
}

float func_46(float fParam0, float fParam1, float fParam2) // Position - 0x1EBA
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

void func_47() // Position - 0x1EE1
{
	int playerWantedLevel;
	Ped playerPed;
	Vehicle vehiclePedIsIn;
	Hash entityModel;
	Hash selectedPedWeapon;

	if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
	{
		playerWantedLevel = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX());
	
		if (playerWantedLevel == 0)
			func_2(75, 1);
	
		playerPed = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
	
		if (PED::IS_PED_IN_ANY_VEHICLE(playerPed, false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(playerPed, false);
		
			if (vehiclePedIsIn != 0)
			{
				if (func_58(vehiclePedIsIn))
				{
					entityModel = ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn);
					func_56(entityModel);
				}
			}
		}
	
		SYSTEM::WAIT(0);
	
		if (!ENTITY::IS_ENTITY_DEAD(playerPed, false))
		{
			selectedPedWeapon = WEAPON::GET_SELECTED_PED_WEAPON(playerPed);
			func_54(selectedPedWeapon);
		
			switch (selectedPedWeapon)
			{
				case joaat("WEAPON_MOLOTOV"):
				case joaat("WEAPON_PETROLCAN"):
					switch (_GET_CURRENT_PLAYER_CHARACTER())
					{
						case CHAR_MICHAEL:
							func_2(147, 1);
							break;
					
						case CHAR_FRANKLIN:
							func_2(148, 1);
							break;
					
						case CHAR_TREVOR:
							func_2(149, 1);
							break;
					}
					break;
			}
		}
	}

	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x1FB3
{
	func_49();
	return G_MissionStats.f_2366.f_539.f_4321;
}

void func_49() // Position - 0x1FCC
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(G_MissionStats.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_50(character) && !func_79(14) || Global_112760)
			{
				if (G_MissionStats.f_2366.f_539.f_4321 != character && func_50(G_MissionStats.f_2366.f_539.f_4321))
					G_MissionStats.f_2366.f_539.f_4322 = G_MissionStats.f_2366.f_539.f_4321;
			
				G_MissionStats.f_2366.f_539.f_4323 = character;
				G_MissionStats.f_2366.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (G_MissionStats.f_2366.f_539.f_4321 != _CHAR_NULL)
				G_MissionStats.f_2366.f_539.f_4323 = G_MissionStats.f_2366.f_539.f_4321;
		
			return;
		}
	}

	G_MissionStats.f_2366.f_539.f_4321 = 145;
	return;
}

BOOL func_50(eCharacter echParam0) // Position - 0x20C9
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x20D5
{
	eCharacter i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = CHAR_MICHAEL; i <= CHAR_TREVOR; i = i + 1)
		{
			if (_GET_CHARACTER_MODEL(i) == entityModel)
				return i;
		}
	}

	return _CHAR_NULL;
}

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x2112
{
	if (func_50(character))
		return func_53(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_53(eCharacter echParam0) // Position - 0x2137
{
	return Global_2058[echParam0];
}

void func_54(Hash hParam0) // Position - 0x2146
{
	int num;

	num = func_55(hParam0);

	switch (num)
	{
		case 0:
			func_2(51, 1);
			break;
	
		case 1:
			func_2(52, 1);
			break;
	
		case 2:
			func_2(53, 1);
			break;
	}

	return;
}

int func_55(Hash hParam0) // Position - 0x218D
{
	switch (hParam0)
	{
		case joaat("WEAPON_STICKYBOMB"):
		case joaat("WEAPON_STUNGUN"):
		case joaat("WEAPON_GRENADELAUNCHER"):
		case joaat("WEAPON_HEAVYSNIPER"):
		case joaat("WEAPON_CARBINERIFLE"):
		case joaat("WEAPON_SPECIALCARBINE"):
		case joaat("WEAPON_SMG"):
		case joaat("WEAPON_ASSAULTSHOTGUN"):
		case joaat("WEAPON_APPISTOL"):
			return 0;
	
		case joaat("WEAPON_SMOKEGRENADE"):
		case joaat("WEAPON_REMOTESNIPER"):
		case joaat("WEAPON_RPG"):
		case joaat("WEAPON_MG"):
		case joaat("WEAPON_ADVANCEDRIFLE"):
		case joaat("WEAPON_MICROSMG"):
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
		case joaat("WEAPON_PISTOL"):
			return 1;
	
		case joaat("WEAPON_GRENADE"):
		case joaat("WEAPON_MINIGUN"):
		case joaat("WEAPON_SNIPERRIFLE"):
		case joaat("WEAPON_COMBATMG"):
		case joaat("WEAPON_ASSAULTRIFLE"):
		case joaat("WEAPON_PUMPSHOTGUN"):
		case joaat("WEAPON_COMBATPISTOL"):
			return 2;
	
		default:
			return 3;
	}

	return 3;
}

void func_56(Hash hParam0) // Position - 0x2249
{
	switch (func_57(hParam0))
	{
		case 0:
			func_2(39, 1);
			break;
	
		case 1:
			func_2(35, 1);
			break;
	
		case 2:
			func_2(32, 1);
			break;
	
		case 3:
			func_2(38, 1);
			break;
	
		case 4:
			func_2(31, 1);
			break;
	
		case 5:
			func_2(33, 1);
			break;
	
		case 6:
			func_2(36, 1);
			break;
	
		case 7:
			func_2(37, 1);
			break;
	}

	switch (hParam0)
	{
		case joaat("coach"):
		case joaat("taxi"):
		case joaat("bmx"):
		case joaat("scorcher"):
		case joaat("tribike2"):
		case joaat("fixter"):
		case joaat("tribike"):
		case joaat("cruiser"):
			func_2(34, 1);
			break;
	}

	return;
}

int func_57(Hash hParam0) // Position - 0x231D
{
	switch (hParam0)
	{
		case joaat("benson"):
		case joaat("bobcatxl"):
		case joaat("bullet"):
		case joaat("dominator"):
		case joaat("minivan"):
		case joaat("peyote"):
		case joaat("radi"):
		case joaat("sadler"):
		case joaat("sadler2"):
		case joaat("sandking"):
		case joaat("sandking2"):
		case joaat("speedo"):
		case joaat("speedo2"):
		case joaat("stanier"):
			return 3;
	
		case joaat("boxville"):
		case joaat("camper"):
		case joaat("pony"):
		case joaat("pony2"):
		case joaat("stockade"):
		case joaat("stockade3"):
		case joaat("tiptruck"):
			return 2;
	
		case joaat("fusilade"):
			return 6;
	
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("penumbra"):
		case joaat("sanchez"):
		case joaat("sanchez2"):
			return 1;
	
		case joaat("bfinjection"):
		case joaat("dune"):
		case joaat("surfer"):
		case joaat("surfer2"):
			return 4;
	
		case joaat("barracks2"):
		case joaat("biff"):
		case joaat("bulldozer"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("forklift"):
		case joaat("mixer"):
		case joaat("mixer2"):
			return 0;
	
		case joaat("oracle"):
		case joaat("oracle2"):
		case joaat("sentinel"):
		case joaat("sentinel2"):
		case joaat("zion"):
		case joaat("zion2"):
			return 7;
	}

	return 8;
}

BOOL func_58(Vehicle veParam0) // Position - 0x246D
{
	var unk;

	if (Global_78689)
		return VEHICLE::IS_VEHICLE_STOLEN(veParam0);

	if (func_61(veParam0, &unk))
		return false;

	if (func_60(veParam0))
		return false;

	if (func_59(veParam0))
		return false;

	return true;
}

BOOL func_59(Vehicle veParam0) // Position - 0x24AF
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98174[i]))
			if (Global_98174[i] == veParam0)
				return true;
	}

	return false;
}

BOOL func_60(Vehicle veParam0) // Position - 0x24EA
{
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		for (i = 0; i < 9; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_98144[i]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98144[i], false))
				if (Global_98144[i] == veParam0 && ENTITY::GET_ENTITY_MODEL(Global_98144[i]) == ENTITY::GET_ENTITY_MODEL(veParam0))
					return true;
		}
	}

	return false;
}

BOOL func_61(Vehicle veParam0, var uParam1) // Position - 0x2566
{
	int i;

	for (i = 0; i < 68; i = i + 1)
	{
		if (Global_77479.f_484[i] == veParam0)
		{
			if (func_62(&Global_77479.f_555[0], i))
			{
				if (IS_BIT_SET(Global_77479.f_555[0].f_9, 10) && Global_77479.f_555[0].f_4 == ENTITY::GET_ENTITY_MODEL(veParam0))
				{
					*uParam1 = i;
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_62(var uParam0, int iParam1) // Position - 0x25D8
{
	BOOL num;
	int num2;

	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };

	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_65(CHAR_MICHAEL, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 1:
			*uParam0 = { 1970.9434f, 3801.6838f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_65(CHAR_MICHAEL, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 2:
			*uParam0 = { -22.6297f, -1439.1368f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_65(CHAR_FRANKLIN, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 3:
			*uParam0 = { -22.5229f, -1434.6986f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_65(CHAR_FRANKLIN, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_65(CHAR_FRANKLIN, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_65(CHAR_FRANKLIN, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 6:
			*uParam0 = { 1981.4163f, 3808.1313f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_65(CHAR_TREVOR, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 7:
			*uParam0 = { -1158.4875f, -1529.3673f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_65(CHAR_TREVOR, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 8:
			*uParam0 = { 148.2868f, -1270.5695f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_65(CHAR_TREVOR, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 9:
			*uParam0 = { 1459.5085f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 10:
			*uParam0 = { -1518.947f, -1387.8655f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			num = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
	
		case 11:
			*uParam0 = { 353.0926f, 3577.5925f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			num = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
	
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.0043f, -3142.3484f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.6487f, -3380.6853f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.5863f, 3294.5305f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.9036f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.6093f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.0676f, 8.2835f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.8293f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.9572f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 26:
		case 27:
		case 28:
			num2 = iParam1 - 26;
			uParam0->f_14 = 12 + num2;
			*uParam0 = { 196.2794f, -1020.4791f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0 + num2;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 29:
		case 30:
		case 31:
			num2 = iParam1 - 29;
			uParam0->f_14 = 15 + num2;
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0 + num2;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 32:
		case 33:
		case 34:
			num2 = iParam1 - 32;
			uParam0->f_14 = 18 + num2;
			*uParam0 = { 203.6006f, -1019.7762f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0 + num2;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			num = 1;
			break;
	
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			num = 1;
			break;
	
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 36:
			*uParam0 = { -55.7984f, -1096.5856f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			num = 1;
			break;
	
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			num = 1;
			break;
	
		case 38:
			*uParam0 = { 1744.3083f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 39:
			*uParam0 = { 1751.4397f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			num = 1;
			break;
	
		case 41:
			*uParam0 = { 1377.1045f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 40:
			*uParam0 = { 1380.42f, -2072.7695f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 42:
			*uParam0 = { 1359.3892f, 3618.4407f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 43:
			*uParam0 = { 693.1154f, -1018.1551f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			num = 1;
			break;
	
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			num = 1;
			break;
	
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			num = 1;
			break;
	
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			num = 1;
			break;
	
		case 48:
			*uParam0 = { -1321.5186f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			num = 1;
			break;
	
		case 49:
			*uParam0 = { -1267.9991f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			num = 1;
			break;
	
		case 50:
			*uParam0 = { -1062.0762f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			num = 1;
			break;
	
		case 51:
			*uParam0 = { 68.16914f, -1558.9581f, 29.469042f };
			uParam0->f_3 = 49.905754f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 52:
			*uParam0 = { 589.4399f, 2736.7078f, 42.033165f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 53:
			*uParam0 = { -488.77396f, -344.57205f, 34.363564f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 54:
			*uParam0 = { 288.88083f, -585.47284f, 43.15428f };
			uParam0->f_3 = -20.807068f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 55:
			*uParam0 = { 304.82938f, -1383.6742f, 31.677443f };
			uParam0->f_3 = -41.116028f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 56:
			*uParam0 = { 1126.1943f, -1481.486f, 34.701603f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 59:
			*uParam0 = { 2116.571f, 4763.2793f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			num = 1;
			break;
	
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
		
			if (_IS_EXCLUSIVE_CONTENT_UNLOCKED())
				uParam0->f_4 = joaat("blimp2");
			else
				uParam0->f_4 = joaat("blimp");
		
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			num = 1;
			break;
	
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
		
			if (_IS_EXCLUSIVE_CONTENT_UNLOCKED())
				uParam0->f_4 = joaat("blimp2");
			else
				uParam0->f_4 = joaat("blimp");
		
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			num = 1;
			break;
	
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			num = 1;
			break;
	
		case 64:
			*uParam0 = { 1257.7295f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 67:
			*uParam0 = { 1333.8752f, 4262.2256f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	}

	if (IS_BIT_SET(uParam0->f_9, 10))
	{
		uParam0->f_4 = G_MissionStats.f_32752.f_69[uParam0->f_14].f_66;
	
		if (iParam1 == 14)
		{
			if (uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra") || uParam0->f_4 == joaat("luxor") || uParam0->f_4 == joaat("shamal") || uParam0->f_4 == joaat("titan") || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
	
		if (!func_63(G_MissionStats.f_32752.f_1864[uParam0->f_14], 0f, 0f, 0f, false))
			*uParam0 = { G_MissionStats.f_32752.f_1864[uParam0->f_14] };
	
		if (G_MissionStats.f_32752.f_1934[uParam0->f_14] != -1f)
			uParam0->f_3 = G_MissionStats.f_32752.f_1934[uParam0->f_14];
	}

	if (IS_BIT_SET(uParam0->f_9, 19))
	{
		if (!func_63(G_MissionStats.f_2366.f_539.f_3588[1][uParam0->f_12], 0f, 0f, 0f, false))
		{
			*uParam0 = { G_MissionStats.f_2366.f_539.f_3588[1][uParam0->f_12] };
			uParam0->f_3 = G_MissionStats.f_2366.f_539.f_3609[1][uParam0->f_12];
		}
	}
	else if (IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_63(G_MissionStats.f_2366.f_539.f_3588[0][uParam0->f_12], 0f, 0f, 0f, false))
		{
			*uParam0 = { G_MissionStats.f_2366.f_539.f_3588[0][uParam0->f_12] };
			uParam0->f_3 = G_MissionStats.f_2366.f_539.f_3609[0][uParam0->f_12];
		}
	}

	return num;
}

BOOL func_63(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x3CC5
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0x3D0C
{
	int profileSetting;

	if (Global_152686 == 2)
		return true;
	else if (Global_152686 == 3)
		return false;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &profileSetting, -1);
				MISC::SET_BIT(&profileSetting, 2);
				MISC::SET_BIT(&profileSetting, 4);
				MISC::SET_BIT(&profileSetting, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), profileSetting, true);
			
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					profileSetting = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&profileSetting, 0);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(profileSetting);
				}
			
				return true;
			}
		}
	}

	if (MISC::ARE_PROFILE_SETTINGS_VALID())
		if (IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
			return true;

	return false;
}

int func_65(eCharacter echParam0, int iParam1) // Position - 0x3DC4
{
	int num;

	if (func_50(echParam0))
	{
		num.f_11 = 12;
		num.f_31 = 49;
		num.f_81 = 2;
		func_66(echParam0, &num, iParam1);
		return num;
	}
	else
	{
		echParam0 != _CHAR_NULL;
	}

	return 0;
}

void func_66(eCharacter echParam0, var uParam1, int iParam2) // Position - 0x3E06
{
	int num;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			num = joaat("tailgater");
		
			if (G_MissionStats.f_9088.f_99.f_58[128] && !G_MissionStats.f_9088.f_99.f_58[131])
				num = joaat("premier");
		
			switch (num)
			{
				case joaat("tailgater"):
					*uParam1 = num;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "5MDS003", 16);
					break;
			
				case joaat("premier"):
					*uParam1 = num;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
	
		case CHAR_TREVOR:
			num = joaat("bodhi2");
		
			switch (num)
			{
				case joaat("bodhi2"):
					*uParam1 = num;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "BETTY 32", 16);
				
					if (G_MissionStats.f_9088.f_99.f_58[119])
						uParam1->f_11[1] = 1;
					break;
			}
			break;
	
		case CHAR_FRANKLIN:
			if (iParam2 == 1)
				num = joaat("buffalo2");
			else if (iParam2 == 2)
				num = joaat("bagger");
			else if (G_MissionStats.f_9088.f_99.f_58[118])
				num = joaat("bagger");
			else
				num = joaat("buffalo2");
		
			switch (num)
			{
				case joaat("bagger"):
					*uParam1 = num;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC88", 16);
					break;
			
				case joaat("buffalo2"):
					*uParam1 = num;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_67() // Position - 0x405E
{
	if (iLocal_19 == -15)
		return false;

	if (func_34(iLocal_19))
	{
		if (func_31(&iLocal_19, true, 8))
			return false;
	
		func_35(&iLocal_19, 0, iLocal_20, 0, 0, 0, 0);
		return true;
	}

	return false;
}

void func_68() // Position - 0x409D
{
	int i;
	Entity eventData;
	eEventType eventAtIndex;
	Ped pedIndexFromEntityIndex;
	BOOL flag;

	if (Global_60664)
	{
		Global_60664 = false;
	
		switch (func_57(Global_60665))
		{
			case 0:
			case 1:
			case 2:
			case 3:
				func_2(29, 1);
				break;
		
			case 4:
			case 5:
			case 6:
			case 7:
				func_2(30, 1);
				break;
		}
	}

	i = 0;
	flag = true;

	for (i = 0; i < SCRIPT::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_AI); i = i + 1)
	{
		eventAtIndex = SCRIPT::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_AI, i);
	
		switch (eventAtIndex)
		{
			case EVENT_ENTITY_DESTROYED:
				SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, i, &eventData, 1);
				func_78(eventData);
				flag = true;
			
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					if (ENTITY::DOES_ENTITY_EXIST(eventData))
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(eventData))
							flag = false;
					else
						flag = false;
			
				if (flag)
				{
					if (ENTITY::DOES_ENTITY_EXIST(eventData))
					{
						if (ENTITY::IS_ENTITY_A_PED(eventData))
						{
							func_74(eventData);
						}
						else if (ENTITY::IS_ENTITY_A_VEHICLE(eventData))
						{
							if (func_73(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(eventData)))
								func_2(3, 1);
						
							func_72(ENTITY::GET_ENTITY_MODEL(eventData));
						}
						else if (ENTITY::IS_ENTITY_AN_OBJECT(eventData))
						{
							switch (ENTITY::GET_ENTITY_MODEL(eventData))
							{
								case joaat("prop_news_disp_01a"):
								case joaat("prop_news_disp_02a"):
								case joaat("prop_news_disp_02a_s"):
								case joaat("prop_news_disp_02b"):
								case joaat("prop_news_disp_02c"):
								case joaat("prop_news_disp_02d"):
								case joaat("prop_news_disp_02e"):
								case joaat("prop_news_disp_03a"):
								case joaat("prop_news_disp_03c"):
								case joaat("prop_news_disp_05a"):
								case -1389481633:
								case 1301918910:
								case joaat("prop_news_disp_06a"):
								case -1406224059:
									func_2(68, 1);
									break;
							
								case -959573699:
								case joaat("prop_postbox_01a"):
								case 1147034058:
								case 1444740423:
								case joaat("prop_postbox_ss_01a"):
									func_2(128, 1);
									break;
							}
						}
					}
				}
				break;
		
			case EVENT_ENTITY_DAMAGED:
				SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, i, &eventData, 1);
				func_78(eventData);
				flag = true;
			
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					if (ENTITY::DOES_ENTITY_EXIST(eventData))
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(eventData))
							flag = false;
					else
						flag = false;
			
				if (flag)
				{
					if (ENTITY::DOES_ENTITY_EXIST(eventData))
					{
						if (ENTITY::IS_ENTITY_A_PED(eventData))
						{
							pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData);
						
							if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL && pedIndexFromEntityIndex != PLAYER::PLAYER_PED_ID())
								if (ENTITY::IS_ENTITY_DEAD(eventData, false) || (float)ENTITY::GET_ENTITY_HEALTH(eventData) < 0.5f * (float)PED::GET_PED_MAX_HEALTH(pedIndexFromEntityIndex))
									if (ENTITY::IS_ENTITY_A_PED(eventData) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData)))
										if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
											func_70(3);
						
							func_2(111, 1);
							func_2(124, 1);
						
							if (FIRE::IS_ENTITY_ON_FIRE(eventData))
								func_2(130, 1);
						}
						else if (ENTITY::IS_ENTITY_A_VEHICLE(eventData))
						{
							func_69(ENTITY::GET_ENTITY_MODEL(eventData));
							func_2(111, 1);
						}
						else if (ENTITY::IS_ENTITY_AN_OBJECT(eventData))
						{
							func_2(111, 1);
						}
					}
				}
				break;
		}
	}

	return;
}

void func_69(Hash hParam0) // Position - 0x435E
{
	switch (func_57(hParam0))
	{
		case 0:
			func_2(47, 1);
			break;
	
		case 1:
			func_2(43, 1);
			break;
	
		case 2:
			func_2(41, 1);
			break;
	
		case 3:
			func_2(46, 1);
			break;
	
		case 4:
			func_2(40, 1);
			break;
	
		case 5:
			func_2(42, 1);
			break;
	
		case 6:
			func_2(44, 1);
			break;
	
		case 7:
			func_2(45, 1);
			break;
	}

	return;
}

void func_70(int iParam0) // Position - 0x43F1
{
	switch (iParam0)
	{
		case 0:
			func_71(&Global_97281, 1);
			break;
	
		case 1:
			func_71(&Global_97283, 3);
			break;
	
		case 2:
			func_71(&Global_97287, 1);
			break;
	
		case 3:
			func_71(&Global_97289, 1);
			break;
	
		case 4:
			func_71(&Global_97291, 1);
			break;
	
		case 5:
			func_71(&Global_97293, 1);
			break;
	
		case 6:
			func_71(&Global_97295, 1);
			break;
	
		case 7:
			func_71(&Global_97297, 2);
			break;
	
		case 8:
			func_71(&Global_97300, 1);
			break;
	
		case 9:
			func_71(&Global_97302, 1);
			break;
	}

	return;
}

void func_71(var uParam0, int iParam1) // Position - 0x44B4
{
	int i;

	for (i = 0; i < iParam1; i = i + 1)
	{
		if (i < iParam1 - 1)
			uParam0->[i] = uParam0->[i + 1];
		else
			uParam0->[i] = MISC::GET_GAME_TIMER();
	}

	return;
}

void func_72(Hash hParam0) // Position - 0x44F3
{
	switch (func_57(hParam0))
	{
		case 0:
			func_2(11, 1);
			break;
	
		case 1:
			func_2(6, 1);
			break;
	
		case 2:
			func_2(1, 1);
			break;
	
		case 3:
			func_2(10, 1);
			break;
	
		case 4:
			func_2(0, 1);
			break;
	
		case 5:
			func_2(2, 1);
			break;
	
		case 6:
			func_2(8, 1);
			break;
	
		case 7:
			func_2(9, 1);
			break;
	}

	if (hParam0 == joaat("taxi"))
		func_2(100, 1);

	func_2(111, 1);
	return;
}

BOOL func_73(Vehicle veParam0) // Position - 0x459A
{
	if (VEHICLE::GET_VEHICLE_MOD_KIT(veParam0) >= 0)
	{
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 0) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 3) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 4) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 5) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 6) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 7) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 10) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 11) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 12) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 13) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 14) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 15) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 16) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 23) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 24) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 1) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 2) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 8) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 9) != -1)
			return true;
	
		if (VEHICLE::IS_TOGGLE_MOD_ON(veParam0, 18))
			return true;
	
		if (VEHICLE::IS_TOGGLE_MOD_ON(veParam0, 22))
			return true;
	
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(veParam0))
			return true;
	}

	return false;
}

void func_74(Entity eParam0) // Position - 0x4701
{
	Ped pedIndexFromEntityIndex;
	Entity pedSourceOfDeath;
	Hash entityModel;
	Hash pedCauseOfDeath;
	Hash entityModel2;
	int gameTimer;
	int num;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);

	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(eParam0))
	{
		pedSourceOfDeath = PED::GET_PED_SOURCE_OF_DEATH(pedIndexFromEntityIndex);
	
		if (ENTITY::IS_ENTITY_A_VEHICLE(pedSourceOfDeath))
		{
			entityModel = ENTITY::GET_ENTITY_MODEL(pedSourceOfDeath);
			func_77(entityModel, PED::GET_PED_TYPE(pedIndexFromEntityIndex));
		}
		else
		{
			pedCauseOfDeath = PED::GET_PED_CAUSE_OF_DEATH(pedIndexFromEntityIndex);
			entityModel2 = ENTITY::GET_ENTITY_MODEL(eParam0);
			func_76(pedCauseOfDeath, PED::GET_PED_TYPE(pedIndexFromEntityIndex), entityModel2);
		}
	}

	if (FIRE::IS_ENTITY_ON_FIRE(eParam0))
		func_2(129, 1);

	if (!func_75(eParam0))
		return;

	func_2(111, 1);
	gameTimer = MISC::GET_GAME_TIMER();
	num = gameTimer - iLocal_21;
	iLocal_21 = gameTimer;

	if (num > 2000)
	{
		iLocal_22 = 0;
	}
	else
	{
		iLocal_22 = iLocal_22 + 1;
	
		if (iLocal_22 == 3)
			func_2(127, 1);
	}

	return;
}

BOOL func_75(Entity eParam0) // Position - 0x47B6
{
	Ped pedSourceOfDeath;

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(eParam0))
		return false;

	pedSourceOfDeath = PED::GET_PED_SOURCE_OF_DEATH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0));

	if (func_3(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())) == pedSourceOfDeath)
		return true;

	return false;
}

void func_76(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x47EE
{
	int num;

	num = func_55(hParam0);

	if (num == 0)
		func_2(108, 1);

	switch (iParam1)
	{
		case 4:
		case 5:
			switch (num)
			{
				case 0:
					func_2(63, 1);
					break;
			
				case 1:
					func_2(64, 1);
					break;
			
				case 2:
					func_2(65, 1);
					break;
			}
			break;
	
		case 22:
			switch (num)
			{
				case 0:
					func_2(57, 1);
					break;
			
				case 1:
					func_2(58, 1);
					break;
			
				case 2:
					func_2(59, 1);
					break;
			}
			break;
	
		case 27:
		case 6:
			switch (num)
			{
				case 0:
					func_2(54, 1);
					break;
			
				case 1:
					func_2(55, 1);
					break;
			
				case 2:
					func_2(56, 1);
					break;
			}
			break;
	}

	switch (hParam2)
	{
		case joaat("S_F_Y_Hooker_01"):
			func_2(121, 1);
			break;
	
		case joaat("A_F_M_BodyBuild_01"):
		case joaat("A_M_M_Beach_02"):
		case joaat("A_M_Y_MusclBeac_02"):
		case joaat("A_M_Y_Runner_01"):
		case joaat("A_M_Y_RoadCyc_01"):
		case joaat("A_M_Y_Skater_01"):
		case joaat("A_M_Y_Skater_02"):
		case joaat("A_M_Y_Sunbathe_01"):
		case joaat("A_M_Y_Surfer_01"):
		case joaat("A_M_Y_Yoga_01"):
		case joaat("S_M_Y_BayWatch_01"):
		case joaat("S_M_Y_Marine_02"):
			func_2(69, 1);
			break;
	
		case joaat("S_M_Y_Dealer_01"):
			func_2(125, 1);
			break;
	}

	return;
}

void func_77(Hash hParam0, int iParam1) // Position - 0x4957
{
	func_2(48, 1);

	switch (hParam0)
	{
		case joaat("coach"):
		case joaat("taxi"):
			func_2(4, 1);
			break;
	
		case joaat("tanker"):
			func_2(5, 1);
			func_2(7, 1);
			func_2(91, 1);
			break;
	
		case joaat("packer"):
			func_2(7, 1);
			break;
	
		case joaat("phantom"):
			func_2(5, 1);
			break;
	}

	switch (func_57(hParam0))
	{
		case 0:
			func_2(109, 1);
			break;
	
		case 1:
			func_2(104, 1);
		
			switch (iParam1)
			{
				case 4:
				case 5:
					func_2(60, 1);
					break;
			}
			break;
	
		case 2:
			func_2(102, 1);
			break;
	
		case 3:
			func_2(107, 1);
			break;
	
		case 4:
			func_2(101, 1);
			break;
	
		case 5:
			func_2(103, 1);
			break;
	
		case 6:
			func_2(105, 1);
		
			switch (iParam1)
			{
				case 4:
				case 5:
					func_2(61, 1);
					break;
			}
			break;
	
		case 7:
			func_2(106, 1);
		
			switch (iParam1)
			{
				case 4:
				case 5:
					func_2(62, 1);
					break;
			}
			break;
	}

	return;
}

void func_78(Entity eParam0) // Position - 0x4A9E
{
	ENTITY::DOES_ENTITY_EXIST(eParam0);
	ENTITY::IS_ENTITY_DEAD(eParam0, false);
	return;
}

BOOL func_79(int iParam0) // Position - 0x4AB5
{
	return Global_43377 == iParam0;
}

void func_80() // Position - 0x4AC3
{
	Vehicle vehiclePedIsIn;
	Hash entityModel;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		veLocal_31 = 0;
		return;
	}

	if (_IS_PLAYER_IN_VEHICLE_SEAT(PLAYER::GET_PLAYER_INDEX(), -1))
	{
		veLocal_31 = 0;
		return;
	}

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false);
	
		if (veLocal_31 != vehiclePedIsIn)
		{
			uLocal_25 = { uLocal_28 };
			veLocal_31 = vehiclePedIsIn;
		}
	
		if (vehiclePedIsIn == 0)
			return;
	
		uLocal_25 = { ENTITY::GET_ENTITY_COORDS(vehiclePedIsIn, true) };
	
		if (veLocal_31 == 0)
		{
			uLocal_28 = { uLocal_25 };
			veLocal_31 = vehiclePedIsIn;
			return;
		}
	
		entityModel = ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn);
	
		if (func_81(entityModel, MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_25, uLocal_28, false)))
			uLocal_28 = { uLocal_25 };
	}

	return;
}

BOOL func_81(Hash hParam0, float fParam1) // Position - 0x4B70
{
	if (fParam1 < 10f)
		return false;

	switch (func_57(hParam0))
	{
		case 0:
			func_2(28, SYSTEM::FLOOR(fParam1 / 10f));
			break;
	
		case 1:
			func_2(24, SYSTEM::FLOOR(fParam1 / 10f));
			break;
	
		case 2:
			func_2(21, SYSTEM::FLOOR(fParam1 / 10f));
			break;
	
		case 3:
			func_2(27, SYSTEM::FLOOR(fParam1 / 10f));
			break;
	
		case 4:
			func_2(20, SYSTEM::FLOOR(fParam1 / 10f));
			break;
	
		case 5:
			func_2(22, SYSTEM::FLOOR(fParam1 / 10f));
			break;
	
		case 6:
			func_2(25, SYSTEM::FLOOR(fParam1 / 10f));
			break;
	
		case 7:
			func_2(26, SYSTEM::FLOOR(fParam1 / 10f));
			break;
	}

	switch (hParam0)
	{
		case joaat("coach"):
		case joaat("taxi"):
			func_2(23, SYSTEM::FLOOR(fParam1 / 10f));
			break;
	
		case joaat("bmx"):
		case joaat("scorcher"):
		case joaat("tribike2"):
		case joaat("fixter"):
		case joaat("tribike"):
		case joaat("cruiser"):
			switch (_GET_CURRENT_PLAYER_CHARACTER())
			{
				case CHAR_MICHAEL:
					func_2(141, SYSTEM::FLOOR(fParam1 / 10f));
					break;
			
				case CHAR_FRANKLIN:
					func_2(142, SYSTEM::FLOOR(fParam1 / 10f));
					break;
			
				case CHAR_TREVOR:
					func_2(143, SYSTEM::FLOOR(fParam1 / 10f));
					break;
			}
			break;
	}

	return true;
}

BOOL _IS_PLAYER_IN_VEHICLE_SEAT(Player plParam0, int iParam1) // Position - 0x4D14
{
	Vehicle vehiclePedIsIn;

	if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(plParam0), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(plParam0), false);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, iParam1, false))
					return true;
		}
	}

	return false;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x4D61
{
	Player player;

	player = player;

	if (player != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
			if (bIsPlaying)
				if (!PLAYER::IS_PLAYER_PLAYING(player))
					return false;
		
			if (bUnk)
				if (player == Global_2672524.f_3)
					return Global_2672524.f_2;
				else if (Global_2657704[player] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

void func_84() // Position - 0x4DC1
{
	func_85(0);
	func_85(1);
	func_85(2);
	return;
}

void func_85(int iParam0) // Position - 0x4DD8
{
	int i;
	int num;
	int value;

	for (i = 0; i < 80; i = i + 1)
	{
		if (Global_55784[i].f_8)
		{
			num = Global_55784[i].f_35;
		
			if (num > -1)
			{
				value = func_86(iParam0, i);
			
				if (Global_55784[i].f_9 <= 0f)
					value = 0;
			
				STATS::STAT_SET_INT(Global_58665[num].f_3[iParam0], value, true);
			}
		}
	}

	return;
}

int func_86(int iParam0, int iParam1) // Position - 0x4E40
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		switch (iParam0)
		{
			case 0:
				if (G_MissionStats.f_20567[i] == iParam1)
					if (G_MissionStats.f_20567.f_22[i] > 0)
						return G_MissionStats.f_20567.f_22[i];
				break;
		
			case 1:
				if (G_MissionStats.f_20567.f_33[i] == iParam1)
					if (G_MissionStats.f_20567.f_55[i] > 0)
						return G_MissionStats.f_20567.f_55[i];
				break;
		
			case 2:
				if (G_MissionStats.f_20567.f_66[i] == iParam1)
					if (G_MissionStats.f_20567.f_88[i] > 0)
						return G_MissionStats.f_20567.f_88[i];
				break;
		}
	}

	return 0;
}

void func_87() // Position - 0x4F15
{
	int i;
	int num;

	num = Global_60946;

	for (i = 0; i < num; i = i + 1)
	{
		if (Global_60949[i].f_13 > 0)
		{
			Global_60949[i].f_13 = Global_60949[i].f_13 - 1;
		}
		else if (func_89(i))
		{
			func_88(&Global_60949[i], -1);
			Global_60949[i].f_13 = 60000;
		}
	
		SYSTEM::WAIT(0);
		func_68();
	}

	return;
}

BOOL func_88(int iParam0, int iParam1) // Position - 0x4F85
{
	int num;
	int i;
	float num2;
	int num3;

	num = *iParam0;

	if (iParam1 != -1)
		num = iParam1;

	i = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_63331[num][i].f_9 == iParam0->f_9)
		{
			iParam0->f_10 = iParam0->f_10 + 0.05f;
			return false;
		}
	}

	i = 0;
	num2 = 0f;
	num3 = -1;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_63331[num][i].f_10 > num2)
		{
			num3 = i;
			num2 = Global_63331[num][i].f_10;
		}
	}

	if (num3 == -1)
		return false;

	if (iParam0->f_10 <= Global_63331[num][num3].f_10)
	{
		iParam0->f_10 = iParam0->f_10 + 1f;
		Global_63331[num][num3].f_10 = iParam0->f_10;
		Global_63331[num][num3].f_1 = { iParam0->f_1 };
		Global_63331[num][num3].f_5 = { iParam0->f_5 };
		Global_63331[num][num3].f_9 = iParam0->f_9;
		Global_63331[num][num3] = *iParam0;
		return true;
	}

	return false;
}

BOOL func_89(int iParam0) // Position - 0x50A0
{
	int num;
	float num2;
	int i;
	int j;
	float num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int k;
	int num8;
	int num9;
	int num10;
	float num11;
	float num12;
	float num13;

	num = Global_60949[iParam0].f_12;
	num2 = Global_55784[num].f_9;

	for (i = Global_55784[num].f_13; i > 15; i = i - 16)
	{
	}

	for (j = i - 10; j < 0; j = 16 + j)
	{
	}

	num3 = Global_55784[num].f_14[j];
	Global_55784[num].f_14[Global_55784[num].f_13] = func_6(num);
	num4 = 0;
	num5 = 0;
	num6 = 0;
	num7 = j + 1;

	if (num7 == 16)
		num7 = 0;

	k = 0;
	num8 = num7;
	num9 = 0;
	num10 = 0;

	for (k = 0; k < 8; k = k + 1)
	{
		num9 = num8 + 1;
	
		if (num9 == 16)
			num9 = 0;
	
		num10 = num9 + 1;
	
		if (num10 == 16)
			num10 = 0;
	
		if (Global_55784[num].f_14[num8] < Global_55784[num].f_14[num9])
		{
			num5 = num5 + 1;
			num11 = num11 + (Global_55784[num].f_14[num9] - Global_55784[num].f_14[num8]);
		}
		else
		{
			num6 = num6 + 1;
			num12 = num12 + (Global_55784[num].f_14[num8] - Global_55784[num].f_14[num9]);
		}
	
		if (Global_55784[num].f_14[num8] < Global_55784[num].f_14[num9] && Global_55784[num].f_14[num10] < Global_55784[num].f_14[num9])
			num4 = num4 + 1;
	
		if (Global_55784[num].f_14[num8] > Global_55784[num].f_14[num9] && Global_55784[num].f_14[num10] > Global_55784[num].f_14[num9])
			num4 = num4 + 1;
	
		num8 = num8 + 1;
	
		if (num8 == 16)
			num8 = 0;
	}

	if (num5 < 0)
		num11 = num11 / (float)num5;

	if (num6 > 0)
		num12 = num12 / (float)num6;

	num13 = num2 - num3;

	if (num13 < 0f)
		num13 = num13 * -1f;

	switch (Global_60949[iParam0].f_11)
	{
		case 0:
			if (num5 < 6)
				return false;
		
			if (num11 < num3 * 0.04f)
				return false;
		
			return true;
	
		case 1:
			if (num6 < 6)
				return false;
		
			if (num12 < num3 * 0.04f)
				return false;
		
			return true;
	
		case 2:
			if (num4 < 7)
				return false;
		
			if (num13 > num3 * 0.01f)
				return false;
		
			return true;
	}

	return false;
}

void func_90(BOOL bParam0) // Position - 0x5332
{
	int i;
	int j;

	i = 0;
	j = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 11; j = j + 1)
		{
			G_MissionStats.f_20567.f_233[i].f_2[j].f_3 = G_MissionStats.f_20567.f_233[i].f_2[j];
			G_MissionStats.f_20567.f_233[i].f_2[j].f_4 = G_MissionStats.f_20567.f_233[i].f_2[j].f_1;
			G_MissionStats.f_20567.f_233[i].f_2[j].f_5 = G_MissionStats.f_20567.f_233[i].f_2[j].f_2;
		}
	}

	for (i = 0; i < 10; i = i + 1)
	{
		Global_60667[i][0] = G_MissionStats.f_20567[i];
		Global_60667.f_31[i][0] = G_MissionStats.f_20567.f_11[i];
		Global_60667.f_62[i][0] = G_MissionStats.f_20567.f_22[i];
		Global_60667.f_93[i][0] = G_MissionStats.f_20567.f_33[i];
		Global_60667.f_124[i][0] = G_MissionStats.f_20567.f_44[i];
		Global_60667.f_155[i][0] = G_MissionStats.f_20567.f_55[i];
		Global_60667.f_186[i][0] = G_MissionStats.f_20567.f_66[i];
		Global_60667.f_217[i][0] = G_MissionStats.f_20567.f_77[i];
		Global_60667.f_248[i][0] = G_MissionStats.f_20567.f_88[i];
	
		if (!bParam0)
		{
			Global_60667[i][1] = G_MissionStats.f_20567[i];
			Global_60667.f_31[i][1] = G_MissionStats.f_20567.f_11[i];
			Global_60667.f_62[i][1] = G_MissionStats.f_20567.f_22[i];
			Global_60667.f_93[i][1] = G_MissionStats.f_20567.f_33[i];
			Global_60667.f_124[i][1] = G_MissionStats.f_20567.f_44[i];
			Global_60667.f_155[i][1] = G_MissionStats.f_20567.f_55[i];
			Global_60667.f_186[i][1] = G_MissionStats.f_20567.f_66[i];
			Global_60667.f_217[i][1] = G_MissionStats.f_20567.f_77[i];
			Global_60667.f_248[i][1] = G_MissionStats.f_20567.f_88[i];
		}
	}

	return;
}

void func_91() // Position - 0x55B4
{
	int num;
	int i;
	float num2;
	int j;
	float num3;
	float num4;
	float num5;
	float randomFloatInRange;
	float num6;
	float num7;
	float num8;
	float num9;
	float num10;
	float num11;
	float num12;
	float num13;
	float num14;
	float num15;
	float num16;

	num = 0;
	i = 0;

	for (i = 0; i < 80; i = i + 1)
	{
		if (num < 42)
		{
			if (!Global_55784[i].f_8)
			{
				if (G_MissionStats.f_20567.f_103[num] > 0f)
					Global_55784[i].f_9 = G_MissionStats.f_20567.f_103[num];
			
				if (G_MissionStats.f_20567.f_146[num] > 0f)
					Global_55784[i].f_31 = G_MissionStats.f_20567.f_146[num];
			
				if (G_MissionStats.f_20567.f_189[num] > 0f)
					Global_55784[i].f_32 = G_MissionStats.f_20567.f_189[num];
			
				num = num + 1;
			}
		
			if (Global_55784[i].f_32 > 0f && Global_55784[i].f_31 > 0f && Global_55784[i].f_9 > 0f)
			{
				num2 = Global_55784[i].f_9;
			
				if (num2 > Global_55784[i].f_31)
					Global_55784[i].f_31 = num2;
			
				if (num2 < Global_55784[i].f_32)
					Global_55784[i].f_32 = num2;
			
				j = 0;
				num3 = Global_55784[i].f_31 - Global_55784[i].f_32;
				num4 = 0f;
				num8 = 2.1474836E+09f;
				num9 = -2.1474836E+09f;
			
				for (j = 15; j >= 0; j = j + -1)
				{
					num5 = num3 * MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 5f) * 0.01f;
					num6 = 1f;
					num7 = 1f;
				
					if (j == 15)
					{
						num10 = (Global_55784[i].f_31 - Global_55784[i].f_9) / num3;
					
						if (num10 < 0.2f)
							num6 = num10 / 0.2f;
					
						num11 = (Global_55784[i].f_9 - Global_55784[i].f_32) / num3;
					
						if (num11 < 0.2f)
							num7 = num11 / 0.2f;
					
						randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(-num5 * num7, num5 * num6);
						Global_55784[i].f_14[j] = Global_55784[i].f_9;
					}
					else
					{
						num12 = (Global_55784[i].f_31 - Global_55784[i].f_14[j + 1]) / num3;
					
						if (num12 < 0.2f)
							num6 = num12 / 0.2f;
					
						num13 = (Global_55784[i].f_14[j + 1] - Global_55784[i].f_32) / num3;
					
						if (num13 < 0.2f)
							num7 = num13 / 0.2f;
					
						randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(-num5 * num7, num5 * num6);
						Global_55784[i].f_14[j] = Global_55784[i].f_14[j + 1] + randomFloatInRange;
					}
				
					num8 = func_93(num8, Global_55784[i].f_14[j]);
					num9 = func_92(num9, Global_55784[i].f_14[j]);
					num4 = num4 + Global_55784[i].f_14[j];
				}
			
				Global_55784[i].f_32 = num8;
				Global_55784[i].f_31 = num9;
				num4 = num4 / 16f;
				Global_55784[i].f_33 = Global_55784[i].f_9 - num4;
				Global_55784[i].f_34 = (Global_55784[i].f_33 / num4) * 100f;
				num14 = func_7(i);
			
				if (num14 != 1f)
				{
					num4 = 0f;
					num15 = num14 - 1f;
				
					for (j = 0; j <= 15; j = j + 1)
					{
						num16 = SYSTEM::TO_FLOAT(j) / 16f;
						Global_55784[i].f_14[j] = Global_55784[i].f_14[j] * (MISC::GET_RANDOM_FLOAT_IN_RANGE(0.95f, 1.05f) + (num16 * num15));
					
						if (j == 15)
							Global_55784[i].f_14[j] = Global_55784[i].f_9 * num14;
					
						num4 = num4 + Global_55784[i].f_14[j];
						Global_55784[i].f_32 = func_93(Global_55784[i].f_32, Global_55784[i].f_14[j]);
						Global_55784[i].f_31 = func_92(Global_55784[i].f_31, Global_55784[i].f_14[j]);
					}
				
					num4 = num4 / 16f;
					Global_55784[i].f_33 = Global_55784[i].f_9 - num4;
					Global_55784[i].f_34 = (Global_55784[i].f_33 / num4) * 100f;
				}
			}
		}
	}

	return;
}

float func_92(float fParam0, float fParam1) // Position - 0x59F1
{
	if (fParam0 > fParam1)
		return fParam0;

	return fParam1;
}

float func_93(float fParam0, float fParam1) // Position - 0x5A08
{
	if (fParam0 > fParam1)
		return fParam1;

	return fParam0;
}

void func_94() // Position - 0x5A1F
{
	int i;
	int j;
	float startRange;
	float endRange;

	if (!G_MissionStats.f_20567.f_101)
	{
		for (i = 0; i < 80; i = i + 1)
		{
			if (!Global_55784[i].f_8)
				Global_55784[i].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 290f);
		}
	
		i = 0;
		j = 0;
	
		for (j = 0; j <= 15; j = j + 1)
		{
			func_28(true);
		
			for (i = 0; i < 80; i = i + 1)
			{
				startRange = 0.85f;
				endRange = 1.15f;
			
				if (Global_55784[i].f_9 < 5f)
					startRange = 1.1f;
				else if (Global_55784[i].f_9 < 10f)
					startRange = 0.95f;
				else if (Global_55784[i].f_9 > 285f)
					endRange = 0.97f;
				else if (Global_55784[i].f_9 > 270f)
					endRange = 1.05f;
			
				Global_55784[i].f_9 = Global_55784[i].f_9 * MISC::GET_RANDOM_FLOAT_IN_RANGE(startRange, endRange);
				Global_55784[i].f_9 = func_93(func_92(MISC::ABSF(Global_55784[i].f_9), 3.5f), 290f);
			}
		}
	
		func_42();
		G_MissionStats.f_20567.f_101 = 1;
	}

	return;
}

void func_95() // Position - 0x5B64
{
	int i;
	int j;
	int randomIntInRange;

	Global_60946 = 0;
	Global_60948 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		for (j = 0; j < 3; j = j + 1)
		{
			TEXT_LABEL_ASSIGN_STRING(&(Global_63331[i][j].f_1), "BSNEWS_DEFAULT" /*BREAKING NEWS! THIS NEWS STORY HAS AN UNSET STRING!.//REMOVE THIS ENTRY FOR RELEASE! IT SHOULD NEVER SHOW IN GAME*/, 16);
			TEXT_LABEL_ASSIGN_STRING(&(Global_63331[i][j].f_5), "BSNEWS_DEFAULT" /*BREAKING NEWS! THIS NEWS STORY HAS AN UNSET STRING!.//REMOVE THIS ENTRY FOR RELEASE! IT SHOULD NEVER SHOW IN GAME*/, 16);
		}
	}

	func_96(55, "ECL_P_SR_H" /*World gulping eCola in record volume, stocks up.*/, "ECL_P_SR_C", 0, 0);
	func_96(55, "ECL_P_SF_H" /*Ecola 'sugar water' losing favour among investors.*/, "ECL_P_SF_C", 1, 0);
	func_96(55, "ECL_P_RF_H" /*eCola stocks all over the place, sticky*/, "ECL_P_RF_C", 2, 0);
	func_96(51, "BGR_P_SR_H" /*Burgershot stocks shoot up like cholesterol.*/, "BGR_P_SR_C", 0, 0);
	func_96(51, "BGR_P_SF_H" /*Burgershot junk food stocks down.*/, "BGR_P_SF_C", 1, 0);
	func_96(52, "CLK_P_SR_H" /*Cluckin' Bell stocks up on "Free Range is for Fairies" campaign.*/, "CLK_P_SR_C", 0, 0);
	func_96(52, "CLK_P_SF_H" /*Cluckin' Bell chicken cruelty video brings stocks down.*/, "CLK_P_SF_C", 1, 0);
	func_96(52, "CLK_P_RF_H" /*Investors don't know what to do with Cluckin' Bell fast food stocks.*/, "CLK_P_RF_C", 2, 0);
	func_96(48, "BEN_P_SR_H" /*Bean Machine uses tax loopholes to win big.  Stocks rise.*/, "BEN_P_SR_C", 0, 0);
	func_96(48, "BEN_P_SF_H" /*Fair trade coffee killing Bean Machine profits.  Stocks down.*/, "BEN_P_SF_C", 1, 0);
	func_96(48, "BEN_P_RF_H" /*Coffee giant Bean Machine sees stocks moody, edgy.*/, "BEN_P_RF_C", 2, 0);
	func_96(13, "FLC_P_SR_H" /*Credit card fees rack up huge profits says Fleeca.*/, "FLC_P_SR_C", 0, 0);
	func_96(13, "FLC_P_SF_H" /*Cash is king - under the table deals killing Fleeca stock.*/, "FLC_P_SF_C", 1, 0);
	func_96(13, "FLC_P_RF_H" /*Fleeca stock unsteady as market flails aimlessly.*/, "FLC_P_RF_C", 2, 0);
	func_96(64, "PRO_P_SR_H" /*Prolaps shares up despite Bangladesh factory fire.*/, "PRO_P_SR_C", 0, 0);
	func_96(64, "PRO_P_SF_H" /*Prolaps shares down as America goes more hipster.*/, "PRO_P_SF_C", 1, 0);
	func_96(64, "PRO_P_RF_H" /*Prolaps unsteady after football player rampage.*/, "PRO_P_RF_C", 2, 0);
	func_96(70, "UNI_P_SR_H" /*Vanilla Unicorn Strip Clubs are packed, stocks are up.*/, "UNI_P_SR_C", 0, 0);
	func_96(70, "UNI_P_SF_H" /*Vanilla Unicorn strippers cry as stocks drop.*/, "UNI_P_SF_C", 1, 0);
	func_96(70, "UNI_P_RF_H" /*Vanilla Unicorn Strip club stocks and clientele unpredictable.*/, "UNI_P_RF_C", 2, 0);
	func_96(60, "KRP_P_SR_H" /*Krapea CEO announces new tax avoidance plan.  Stocks up.*/, "KRP_P_SR_C", 0, 0);
	func_96(60, "KRP_P_SF_H" /*Krapea particle board furniture falling out of favour.*/, "KRP_P_SF_C", 1, 0);
	func_96(60, "KRP_P_RF_H" /*Directions confusing for Krapea.*/, "KRP_P_RF_C", 2, 0);
	func_96(56, "FUS_P_SR_H" /*No Strike! FlyUS stocks surge.*/, "FUS_P_SR_C", 0, 0);
	func_96(56, "FUS_P_SF_H" /*Food poisoning on 154 FlyUS flights brings stock down.*/, "FUS_P_SF_C", 1, 0);
	func_96(56, "FUS_P_RF_H" /*FlyUS stock hitting turbulence, bad headline.*/, "FUS_P_RF_C", 2, 0);
	func_96(58, "GOP_P_SR_H" /*60% of shipments contain drugs says Go Postal CEO - stocks rise.*/, "GOP_P_SR_C", 0, 0);
	func_96(58, "GOP_P_SF_H" /*Go Postal going profitless.*/, "GOP_P_SF_C", 1, 0);
	func_96(58, "GOP_P_RF_H" /*Go Postal stocks unsteady as America ships less.*/, "GOP_P_RF_C", 2, 0);
	func_96(53, "BAN_P_SR_H" /*Snotty coffee house Cool Beans stocks surge.*/, "BAN_P_SR_C", 0, 0);
	func_96(53, "BAN_P_SF_H" /*Prices cool off for Cool Beans.*/, "BAN_P_SF_C", 1, 0);
	func_96(53, "BAN_P_RF_H" /*Cool Beans stocks up, then down, then up.*/, "BAN_P_RF_C", 2, 0);
	func_96(62, "MAX_P_SR_H" /*Female insecurity sends Max Renda stocks up.*/, "MAX_P_SR_C", 0, 0);
	func_96(62, "MAX_P_SF_H" /*Max Renda stocks runny.*/, "MAX_P_SF_C", 1, 0);
	func_96(62, "MAX_P_RF_H" /*Max Renda stocks bipolar.*/, "MAX_P_RF_C", 2, 0);
	func_96(57, "GAS_P_SR_H" /*Surgery soars price of Gastro Band stock.*/, "GAS_P_SR_C", 0, 0);
	func_96(57, "GAS_P_SF_H" /*Another Gastro Band stock brings price down.*/, "GAS_P_SF_C", 1, 0);
	func_96(57, "GAS_P_RF_H" /*Gastro Band stock - feast then famine.*/, "GAS_P_RF_C", 2, 0);
	func_96(59, "GRU_P_SR_H" /*GruppeSechs not all it's cracked up to be.*/, "GRU_P_SR_C", 0, 0);
	func_96(59, "GRU_P_SF_H" /*GruppeSechs down after heist.*/, "GRU_P_SF_C", 1, 0);
	func_96(59, "GRU_P_RF_H" /*GruppeSechs unsteady if investors decide whether to join in.*/, "GRU_P_RF_C", 2, 0);
	func_96(44, "PMP_P_SR_H" /*Pump and Run franchise sees stock rise as abs harden.*/, "PMP_P_SR_C", 0, 0);
	func_96(44, "PMP_P_SF_H" /*Americans not going to gym. Prefer binge eating. Pump and Run shares drop.*/, "PMP_P_SF_C", 1, 0);
	func_96(44, "PMP_P_RF_H" /*PMP shares volatile as gym attendance murky.*/, "PMP_P_RF_C", 2, 0);
	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_60946 - 1);

	for (i = 0; i < 4; i = i + 1)
	{
		for (j = 0; j < 3; j = j + 1)
		{
			Global_63331[i][j].f_10 = 5000f;
		
			while (!func_88(&Global_60949[randomIntInRange], i))
			{
				randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_60946 - 1);
				SYSTEM::WAIT(2000);
			}
		
			Global_60949[randomIntInRange].f_10 = 0f;
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_60946 - 1);
		}
	}

	return;
}

void func_96(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4) // Position - 0x5EDE
{
	if (Global_60946 == 150)
		return;

	Global_60949[Global_60946].f_11 = iParam3;
	Global_60949[Global_60946] = iParam4;
	TEXT_LABEL_ASSIGN_STRING(&(Global_60949[Global_60946].f_1), sParam1, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_60949[Global_60946].f_5), sParam2, 16);
	Global_60949[Global_60946].f_9 = Global_60948;
	Global_60949[Global_60946].f_12 = iParam0;
	Global_60946 = Global_60946 + 1;
	Global_60948 = Global_60948 + 1;
	return;
}

void func_97() // Position - 0x5F4C
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	return;
}

void func_98() // Position - 0x5F5F
{
	int i;
	int j;

	i = 0;

	for (i = 0; i < 80; i = i + 1)
	{
		Global_55784[i].f_33 = 0f;
		Global_55784[i].f_13 = 0;
		Global_55784[i].f_12 = 0;
		Global_55784[i].f_31 = 0f;
		Global_55784[i].f_32 = 3.402823E+38f;
		j = 0;
	
		for (j = 0; j < 16; j = j + 1)
		{
			Global_55784[i].f_14[j] = 0f;
		}
	}

	i = 0;

	for (i = 0; i < 204; i = i + 1)
	{
		Global_59227[i].f_2 = 0;
	}

	TEXT_LABEL_ASSIGN_STRING(&Global_55784[0], "BSS_BSTR_0" /*Ammu-Nation*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[0].f_4), "BSS_BSTR_1" /*AMU*/, 16);
	Global_55784[0].f_8 = 1;
	Global_55784[0].f_35 = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[1], "BSS_BSTR_2" /*Badger*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[1].f_4), "BSS_BSTR_3" /*BDG*/, 16);
	Global_55784[1].f_8 = 1;
	Global_55784[1].f_35 = 1;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[2], "BSS_BSTR_4" /*BankOfLiberty*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[2].f_4), "BSS_BSTR_5" /*BOL*/, 16);
	Global_55784[2].f_8 = 0;
	Global_55784[2].f_35 = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[3], "BSS_BSTR_6" /*BF*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[3].f_4), "BSS_BSTR_7" /*BFA*/, 16);
	Global_55784[3].f_8 = 1;
	Global_55784[3].f_35 = 2;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[4], "BSS_BSTR_8" /*Binco*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[4].f_4), "BSS_BSTR_9" /*BIN*/, 16);
	Global_55784[4].f_8 = 1;
	Global_55784[4].f_35 = 3;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[5], "BSS_BSTR_10" /*BitterSweet*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[5].f_4), "BSS_BSTR_11" /*BTR*/, 16);
	Global_55784[5].f_8 = 1;
	Global_55784[5].f_35 = 4;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[6], "BSS_BSTR_12" /*Bleeter*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[6].f_4), "BSS_BSTR_13" /*BLE*/, 16);
	Global_55784[6].f_8 = 1;
	Global_55784[6].f_35 = 5;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[7], "BSS_BSTR_14" /*Brute*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[7].f_4), "BSS_BSTR_15" /*BRU*/, 16);
	Global_55784[7].f_8 = 1;
	Global_55784[7].f_35 = 6;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[8], "BSS_BSTR_16" /*CNT*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[8].f_4), "BSS_BSTR_16" /*CNT*/, 16);
	Global_55784[8].f_8 = 1;
	Global_55784[8].f_35 = 7;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[9], "BSS_BSTR_17" /*Crevis*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[9].f_4), "BSS_BSTR_18" /*CRE*/, 16);
	Global_55784[9].f_8 = 1;
	Global_55784[9].f_35 = 8;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[10], "BSS_BSTR_19" /*DailyGlobe*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[10].f_4), "BSS_BSTR_20" /*DGP*/, 16);
	Global_55784[10].f_8 = 1;
	Global_55784[10].f_35 = 9;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[11], "BSS_BSTR_21" /*Dept.WaterandPower*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[11].f_4), "BSS_BSTR_22" /*WAP*/, 16);
	Global_55784[11].f_8 = 1;
	Global_55784[11].f_35 = 10;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[12], "BSS_BSTR_23" /*Facade*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[12].f_4), "BSS_BSTR_24" /*FAC*/, 16);
	Global_55784[12].f_8 = 1;
	Global_55784[12].f_35 = 11;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[13], "BSS_BSTR_25" /*Fleeca*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[13].f_4), "BSS_BSTR_26" /*FLC*/, 16);
	Global_55784[13].f_8 = 0;
	Global_55784[13].f_35 = 1;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[14], "BSS_BSTR_27" /*Hijak*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[14].f_4), "BSS_BSTR_28" /*HJK*/, 16);
	Global_55784[14].f_8 = 0;
	Global_55784[14].f_35 = 2;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[15], "BSS_BSTR_29" /*Fruit*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[15].f_4), "BSS_BSTR_30" /*FRT*/, 16);
	Global_55784[15].f_8 = 1;
	Global_55784[15].f_35 = 12;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[16], "BSS_BSTR_31" /*AuguryInsurance*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[16].f_4), "BSS_BSTR_32" /*AUG*/, 16);
	Global_55784[16].f_8 = 0;
	Global_55784[16].f_35 = 3;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[17], "BSS_BSTR_33" /*Bullhead*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[17].f_4), "BSS_BSTR_34" /*BUL*/, 16);
	Global_55784[17].f_8 = 0;
	Global_55784[17].f_35 = 4;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[18], "BSS_BSTR_35" /*Hammerstein&Faust*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[18].f_4), "BSS_BSTR_36" /*HAF*/, 16);
	Global_55784[18].f_8 = 0;
	Global_55784[18].f_35 = 5;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[19], "BSS_BSTR_37" /*Slaughter,Slaughter&Slaughter*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[19].f_4), "BSS_BSTR_38" /*SSS*/, 16);
	Global_55784[19].f_8 = 0;
	Global_55784[19].f_35 = 6;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[20], "BSS_BSTR_39" /*LosSantosCustoms*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[20].f_4), "BSS_BSTR_40" /*LSC*/, 16);
	Global_55784[20].f_8 = 1;
	Global_55784[20].f_35 = 13;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[21], "BSS_BSTR_41" /*LSTransport*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[21].f_4), "BSS_BSTR_42" /*LST*/, 16);
	Global_55784[21].f_8 = 1;
	Global_55784[21].f_35 = 14;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[22], "BSS_BSTR_43" /*LTDOil*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[22].f_4), "BSS_BSTR_44" /*LTD*/, 16);
	Global_55784[22].f_8 = 1;
	Global_55784[22].f_35 = 15;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[23], "BSS_BSTR_45" /*Maibatsu*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[23].f_4), "BSS_BSTR_46" /*MAI*/, 16);
	Global_55784[23].f_8 = 1;
	Global_55784[23].f_35 = 16;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[24], "BSS_BSTR_47" /*MazeBank*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[24].f_4), "BSS_BSTR_48" /*MAZ*/, 16);
	Global_55784[24].f_8 = 0;
	Global_55784[24].f_35 = 7;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[25], "BSS_BSTR_49" /*Suburban*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[25].f_4), "BSS_BSTR_50" /*SUB*/, 16);
	Global_55784[25].f_8 = 1;
	Global_55784[25].f_35 = 17;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[26], "BSS_BSTR_51" /*AnimalArk*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[26].f_4), "BSS_BSTR_52" /*ARK*/, 16);
	Global_55784[26].f_8 = 0;
	Global_55784[26].f_35 = 8;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[27], "BSS_BSTR_53" /*Pisswasser*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[27].f_4), "BSS_BSTR_54" /*PIS*/, 16);
	Global_55784[27].f_8 = 1;
	Global_55784[27].f_35 = 18;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[28], "BSS_BSTR_55" /*Ponsonbys*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[28].f_4), "BSS_BSTR_56" /*PON*/, 16);
	Global_55784[28].f_8 = 1;
	Global_55784[28].f_35 = 19;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[29], "BSS_BSTR_57" /*Raine*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[29].f_4), "BSS_BSTR_58" /*RAI*/, 16);
	Global_55784[29].f_8 = 0;
	Global_55784[29].f_35 = 9;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[30], "BSS_BSTR_59" /*RonOil*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[30].f_4), "BSS_BSTR_60" /*RON*/, 16);
	Global_55784[30].f_8 = 1;
	Global_55784[30].f_35 = 20;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[31], "BSS_BSTR_61" /*Schyster*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[31].f_4), "BSS_BSTR_62" /*SHT*/, 16);
	Global_55784[31].f_8 = 1;
	Global_55784[31].f_35 = 21;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[32], "BSS_BSTR_63" /*Sprunk*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[32].f_4), "BSS_BSTR_64" /*SPU*/, 16);
	Global_55784[32].f_8 = 1;
	Global_55784[32].f_35 = 22;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[33], "BSS_BSTR_65" /*Tinkle*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[33].f_4), "BSS_BSTR_66" /*TNK*/, 16);
	Global_55784[33].f_8 = 1;
	Global_55784[33].f_35 = 23;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[34], "BSS_BSTR_67" /*WIWANG*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[34].f_4), "BSS_BSTR_68" /*WIW*/, 16);
	Global_55784[34].f_8 = 1;
	Global_55784[34].f_35 = 24;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[35], "BSS_BSTR_69" /*Ubermacht*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[35].f_4), "BSS_BSTR_70" /*UMA*/, 16);
	Global_55784[35].f_8 = 1;
	Global_55784[35].f_35 = 25;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[36], "BSS_BSTR_71" /*Vapid*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[36].f_4), "BSS_BSTR_72" /*VAP*/, 16);
	Global_55784[36].f_8 = 1;
	Global_55784[36].f_35 = 26;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[37], "BSS_BSTR_73" /*VomFeuer*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[37].f_4), "BSS_BSTR_74" /*VOM*/, 16);
	Global_55784[37].f_8 = 1;
	Global_55784[37].f_35 = 27;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[38], "BSS_BSTR_75" /*Weazel*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[38].f_4), "BSS_BSTR_76" /*WZL*/, 16);
	Global_55784[38].f_8 = 1;
	Global_55784[38].f_35 = 28;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[39], "BSS_BSTR_77" /*Whiz*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[39].f_4), "BSS_BSTR_78" /*WIZ*/, 16);
	Global_55784[39].f_8 = 1;
	Global_55784[39].f_35 = 29;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[40], "BSS_BSTR_79" /*Debonaire*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[40].f_4), "BSS_BSTR_80" /*DEB*/, 16);
	Global_55784[40].f_8 = 0;
	Global_55784[40].f_35 = 10;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[41], "BSS_BSTR_81" /*Zit*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[41].f_4), "BSS_BSTR_82" /*ZIT*/, 16);
	Global_55784[41].f_8 = 1;
	Global_55784[41].f_35 = 30;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[42], "BSS_BSTR_83" /*Shark*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[42].f_4), "BSS_BSTR_84" /*SHK*/, 16);
	Global_55784[42].f_8 = 1;
	Global_55784[42].f_35 = 31;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[43], "BSS_BSTR_85" /*BettaPharmaceuticals*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[43].f_4), "BSS_BSTR_86" /*BET*/, 16);
	Global_55784[43].f_8 = 1;
	Global_55784[43].f_35 = 32;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[44], "BSS_BSTR_87" /*PumpnRun*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[44].f_4), "BSS_BSTR_88" /*PMP*/, 16);
	Global_55784[44].f_8 = 1;
	Global_55784[44].f_35 = 33;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[45], "BSS_BSTR_89" /*GrainOfTruth*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[45].f_4), "BSS_BSTR_90" /*GOT*/, 16);
	Global_55784[45].f_8 = 1;
	Global_55784[45].f_35 = 34;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[46], "BSS_BSTR_91" /*Eyefind*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[46].f_4), "BSS_BSTR_92" /*EYE*/, 16);
	Global_55784[46].f_8 = 1;
	Global_55784[46].f_35 = 35;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[47], "BSS_BSTR_93" /*AirEmu*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[47].f_4), "BSS_BSTR_94" /*EMU*/, 16);
	Global_55784[47].f_8 = 0;
	Global_55784[47].f_35 = 11;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[48], "BSS_BSTR_95" /*BeanMachine*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[48].f_4), "BSS_BSTR_96" /*BEN*/, 16);
	Global_55784[48].f_8 = 0;
	Global_55784[48].f_35 = 12;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[49], "BSS_BSTR_97" /*GoldCoast*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[49].f_4), "BSS_BSTR_98" /*GCD*/, 16);
	Global_55784[49].f_8 = 0;
	Global_55784[49].f_35 = 13;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[50], "BSS_BSTR_99" /*BobMulét*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[50].f_4), "BSS_BSTR_100" /*BOM*/, 16);
	Global_55784[50].f_8 = 0;
	Global_55784[50].f_35 = 14;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[51], "BSS_BSTR_101" /*BurgerShot*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[51].f_4), "BSS_BSTR_102" /*BGR*/, 16);
	Global_55784[51].f_8 = 0;
	Global_55784[51].f_35 = 15;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[52], "BSS_BSTR_103" /*CluckinBell*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[52].f_4), "BSS_BSTR_104" /*CLK*/, 16);
	Global_55784[52].f_8 = 0;
	Global_55784[52].f_35 = 16;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[53], "BSS_BSTR_105" /*CoolBeans*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[53].f_4), "BSS_BSTR_106" /*BAN*/, 16);
	Global_55784[53].f_8 = 0;
	Global_55784[53].f_35 = 17;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[54], "BSS_BSTR_107" /*DollarPills*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[54].f_4), "BSS_BSTR_108" /*DOP*/, 16);
	Global_55784[54].f_8 = 0;
	Global_55784[54].f_35 = 18;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[55], "BSS_BSTR_109" /*eCola*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[55].f_4), "BSS_BSTR_110" /*ECL*/, 16);
	Global_55784[55].f_8 = 0;
	Global_55784[55].f_35 = 19;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[56], "BSS_BSTR_111" /*FlyUS*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[56].f_4), "BSS_BSTR_112" /*FUS*/, 16);
	Global_55784[56].f_8 = 0;
	Global_55784[56].f_35 = 20;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[57], "BSS_BSTR_113" /*GastroBand*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[57].f_4), "BSS_BSTR_114" /*GAS*/, 16);
	Global_55784[57].f_8 = 0;
	Global_55784[57].f_35 = 21;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[58], "BSS_BSTR_115" /*GoPostal*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[58].f_4), "BSS_BSTR_116" /*GOP*/, 16);
	Global_55784[58].f_8 = 0;
	Global_55784[58].f_35 = 22;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[59], "BSS_BSTR_117" /*GruppeSechs*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[59].f_4), "BSS_BSTR_118" /*GRU*/, 16);
	Global_55784[59].f_8 = 0;
	Global_55784[59].f_35 = 23;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[60], "BSS_BSTR_119" /*Krapea*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[60].f_4), "BSS_BSTR_120" /*KRP*/, 16);
	Global_55784[60].f_8 = 0;
	Global_55784[60].f_35 = 24;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[61], "BSS_BSTR_121" /*Lifeinvader*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[61].f_4), "BSS_BSTR_122" /*LFI*/, 16);
	Global_55784[61].f_8 = 0;
	Global_55784[61].f_35 = 25;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[62], "BSS_BSTR_123" /*MaxRenda*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[62].f_4), "BSS_BSTR_124" /*MAX*/, 16);
	Global_55784[62].f_8 = 0;
	Global_55784[62].f_35 = 26;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[63], "BSS_BSTR_125" /*PostOP*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[63].f_4), "BSS_BSTR_126" /*POP*/, 16);
	Global_55784[63].f_8 = 0;
	Global_55784[63].f_35 = 27;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[64], "BSS_BSTR_127" /*ProLaps*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[64].f_4), "BSS_BSTR_128" /*PRO*/, 16);
	Global_55784[64].f_8 = 0;
	Global_55784[64].f_35 = 28;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[65], "BSS_BSTR_129" /*Redwood*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[65].f_4), "BSS_BSTR_130" /*RWC*/, 16);
	Global_55784[65].f_8 = 0;
	Global_55784[65].f_35 = 29;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[66], "BSS_BSTR_131" /*RichardsMajestic*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[66].f_4), "BSS_BSTR_132" /*RIM*/, 16);
	Global_55784[66].f_8 = 0;
	Global_55784[66].f_35 = 30;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[67], "BSS_BSTR_133" /*TacoBomb*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[67].f_4), "BSS_BSTR_134" /*TBO*/, 16);
	Global_55784[67].f_8 = 0;
	Global_55784[67].f_35 = 31;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[68], "BSS_BSTR_135" /*Up-n-Atom*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[68].f_4), "BSS_BSTR_136" /*UPA*/, 16);
	Global_55784[68].f_8 = 0;
	Global_55784[68].f_35 = 32;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[69], "BSS_BSTR_137" /*Vangelico*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[69].f_4), "BSS_BSTR_138" /*VAG*/, 16);
	Global_55784[69].f_8 = 0;
	Global_55784[69].f_35 = 33;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[70], "BSS_BSTR_139" /*VanillaUnicorn*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[70].f_4), "BSS_BSTR_140" /*UNI*/, 16);
	Global_55784[70].f_8 = 0;
	Global_55784[70].f_35 = 34;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[71], "BSS_BSTR_141" /*HVYIndustries*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[71].f_4), "BSS_BSTR_142" /*HVY*/, 16);
	Global_55784[71].f_8 = 1;
	Global_55784[71].f_35 = 36;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[72], "BSS_BSTR_143" /*Logger*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[72].f_4), "BSS_BSTR_144" /*LOG*/, 16);
	Global_55784[72].f_8 = 0;
	Global_55784[72].f_35 = 35;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[73], "BSS_BSTR_145" /*Merryweather*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[73].f_4), "BSS_BSTR_146" /*MER*/, 16);
	Global_55784[73].f_8 = 0;
	Global_55784[73].f_35 = 36;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[74], "BSS_BSTR_147" /*WorldwideFM*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[74].f_4), "BSS_BSTR_148" /*WFM*/, 16);
	Global_55784[74].f_8 = 0;
	Global_55784[74].f_35 = 37;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[75], "BSS_BSTR_149" /*RadioLosSantos*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[75].f_4), "BSS_BSTR_150" /*RLS*/, 16);
	Global_55784[75].f_8 = 0;
	Global_55784[75].f_35 = 38;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[76], "BSS_BSTR_151" /*Shrewsbury*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[76].f_4), "BSS_BSTR_152" /*SHR*/, 16);
	Global_55784[76].f_8 = 1;
	Global_55784[76].f_35 = 37;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[77], "BSS_BSTR_153" /*HawkAndLittle*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[77].f_4), "BSS_BSTR_154" /*HAL*/, 16);
	Global_55784[77].f_8 = 1;
	Global_55784[77].f_35 = 38;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[78], "BSS_BSTR_155" /*MorsMutualInsurance*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[78].f_4), "BSS_BSTR_156" /*MOR*/, 16);
	Global_55784[78].f_8 = 0;
	Global_55784[78].f_35 = 39;
	TEXT_LABEL_ASSIGN_STRING(&Global_55784[79], "BSS_BSTR_157" /*Bilkinton*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55784[79].f_4), "BSS_BSTR_158" /*BIL*/, 16);
	Global_55784[79].f_8 = 0;
	Global_55784[79].f_35 = 40;
	Global_58939[0].f_2 = 1f;
	Global_58939[0].f_1 = 1f;
	Global_58939[0].f_3 = 1000f;
	Global_58939[0].f_4 = 3.5f;
	Global_58939[0].f_5 = 3.5f;
	Global_58939[0].f_6 = 0.1f;
	Global_58939[1].f_2 = 1f;
	Global_58939[1].f_1 = 1f;
	Global_58939[1].f_3 = 1000f;
	Global_58939[1].f_4 = 3.5f;
	Global_58939[1].f_5 = 3.5f;
	Global_58939[1].f_6 = 0.1f;
	Global_58939[2].f_2 = 1f;
	Global_58939[2].f_1 = 1f;
	Global_58939[2].f_3 = 1000f;
	Global_58939[2].f_4 = 3.5f;
	Global_58939[2].f_5 = 3.5f;
	Global_58939[2].f_6 = 0.1f;
	Global_58939[3].f_2 = 1f;
	Global_58939[3].f_1 = 1f;
	Global_58939[3].f_3 = 1000f;
	Global_58939[3].f_4 = 3.5f;
	Global_58939[3].f_5 = 3.5f;
	Global_58939[3].f_6 = 0.1f;
	Global_58939[4].f_2 = 1f;
	Global_58939[4].f_1 = 1f;
	Global_58939[4].f_3 = 1000f;
	Global_58939[4].f_4 = 3.5f;
	Global_58939[4].f_5 = 3.5f;
	Global_58939[4].f_6 = 0.1f;
	Global_58939[5].f_2 = 1f;
	Global_58939[5].f_1 = 1f;
	Global_58939[5].f_3 = 1000f;
	Global_58939[5].f_4 = 3.5f;
	Global_58939[5].f_5 = 3.5f;
	Global_58939[5].f_6 = 0.1f;
	Global_58939[6].f_2 = 1f;
	Global_58939[6].f_1 = 1f;
	Global_58939[6].f_3 = 1000f;
	Global_58939[6].f_4 = 3.5f;
	Global_58939[6].f_5 = 3.5f;
	Global_58939[6].f_6 = 0.1f;
	Global_58939[7].f_2 = 1f;
	Global_58939[7].f_1 = 1f;
	Global_58939[7].f_3 = 1000f;
	Global_58939[7].f_4 = 3.5f;
	Global_58939[7].f_5 = 3.5f;
	Global_58939[7].f_6 = 0.1f;
	Global_58939[8].f_2 = 1f;
	Global_58939[8].f_1 = 1f;
	Global_58939[8].f_3 = 1000f;
	Global_58939[8].f_4 = 3.5f;
	Global_58939[8].f_5 = 3.5f;
	Global_58939[8].f_6 = 0.1f;
	Global_58939[9].f_2 = 1f;
	Global_58939[9].f_1 = 1f;
	Global_58939[9].f_3 = 1000f;
	Global_58939[9].f_4 = 3.5f;
	Global_58939[9].f_5 = 3.5f;
	Global_58939[9].f_6 = 0.1f;
	Global_58939[10].f_2 = 1f;
	Global_58939[10].f_1 = 1f;
	Global_58939[10].f_3 = 1000f;
	Global_58939[10].f_4 = 3.5f;
	Global_58939[10].f_5 = 3.5f;
	Global_58939[10].f_6 = 0.1f;
	Global_58939[11].f_2 = 1f;
	Global_58939[11].f_1 = 1f;
	Global_58939[11].f_3 = 1000f;
	Global_58939[11].f_4 = 3.5f;
	Global_58939[11].f_5 = 3.5f;
	Global_58939[11].f_6 = 0.1f;
	Global_58939[12].f_2 = 1f;
	Global_58939[12].f_1 = 1f;
	Global_58939[12].f_3 = 1000f;
	Global_58939[12].f_4 = 3.5f;
	Global_58939[12].f_5 = 3.5f;
	Global_58939[12].f_6 = 0.1f;
	Global_58939[13].f_2 = 1f;
	Global_58939[13].f_1 = 1f;
	Global_58939[13].f_3 = 1000f;
	Global_58939[13].f_4 = 3.5f;
	Global_58939[13].f_5 = 3.5f;
	Global_58939[13].f_6 = 0.1f;
	Global_58939[14].f_2 = 1f;
	Global_58939[14].f_1 = 1f;
	Global_58939[14].f_3 = 1000f;
	Global_58939[14].f_4 = 3.5f;
	Global_58939[14].f_5 = 3.5f;
	Global_58939[14].f_6 = 0.1f;
	Global_58939[15].f_2 = 1f;
	Global_58939[15].f_1 = 1f;
	Global_58939[15].f_3 = 1000f;
	Global_58939[15].f_4 = 3.5f;
	Global_58939[15].f_5 = 3.5f;
	Global_58939[15].f_6 = 0.1f;
	Global_58939[16].f_2 = 1f;
	Global_58939[16].f_1 = 1f;
	Global_58939[16].f_3 = 1000f;
	Global_58939[16].f_4 = 3.5f;
	Global_58939[16].f_5 = 3.5f;
	Global_58939[16].f_6 = 0.1f;
	Global_58939[17].f_2 = 1f;
	Global_58939[17].f_1 = 1f;
	Global_58939[17].f_3 = 1000f;
	Global_58939[17].f_4 = 3.5f;
	Global_58939[17].f_5 = 3.5f;
	Global_58939[17].f_6 = 0.1f;
	Global_58939[18].f_2 = 1f;
	Global_58939[18].f_1 = 1f;
	Global_58939[18].f_3 = 1000f;
	Global_58939[18].f_4 = 3.5f;
	Global_58939[18].f_5 = 3.5f;
	Global_58939[18].f_6 = 0.1f;
	Global_58939[19].f_2 = 1f;
	Global_58939[19].f_1 = 1f;
	Global_58939[19].f_3 = 1000f;
	Global_58939[19].f_4 = 3.5f;
	Global_58939[19].f_5 = 3.5f;
	Global_58939[19].f_6 = 0.1f;
	Global_58939[20].f_2 = 1f;
	Global_58939[20].f_1 = 1f;
	Global_58939[20].f_3 = 1000f;
	Global_58939[20].f_4 = 3.5f;
	Global_58939[20].f_5 = 3.5f;
	Global_58939[20].f_6 = 0.1f;
	Global_58939[21].f_2 = 1f;
	Global_58939[21].f_1 = 1f;
	Global_58939[21].f_3 = 1000f;
	Global_58939[21].f_4 = 3.5f;
	Global_58939[21].f_5 = 3.5f;
	Global_58939[21].f_6 = 0.1f;
	Global_58939[22].f_2 = 1f;
	Global_58939[22].f_1 = 1f;
	Global_58939[22].f_3 = 1000f;
	Global_58939[22].f_4 = 3.5f;
	Global_58939[22].f_5 = 3.5f;
	Global_58939[22].f_6 = 0.1f;
	Global_58939[23].f_2 = 1f;
	Global_58939[23].f_1 = 1f;
	Global_58939[23].f_3 = 1000f;
	Global_58939[23].f_4 = 3.5f;
	Global_58939[23].f_5 = 3.5f;
	Global_58939[23].f_6 = 0.1f;
	Global_58939[24].f_2 = 1f;
	Global_58939[24].f_1 = 1f;
	Global_58939[24].f_3 = 1000f;
	Global_58939[24].f_4 = 3.5f;
	Global_58939[24].f_5 = 3.5f;
	Global_58939[24].f_6 = 0.1f;
	Global_58939[25].f_2 = 1f;
	Global_58939[25].f_1 = 1f;
	Global_58939[25].f_3 = 1000f;
	Global_58939[25].f_4 = 3.5f;
	Global_58939[25].f_5 = 3.5f;
	Global_58939[25].f_6 = 0.1f;
	Global_58939[26].f_2 = 1f;
	Global_58939[26].f_1 = 1f;
	Global_58939[26].f_3 = 1000f;
	Global_58939[26].f_4 = 3.5f;
	Global_58939[26].f_5 = 3.5f;
	Global_58939[26].f_6 = 0.1f;
	Global_58939[27].f_2 = 1f;
	Global_58939[27].f_1 = 1f;
	Global_58939[27].f_3 = 1000f;
	Global_58939[27].f_4 = 3.5f;
	Global_58939[27].f_5 = 3.5f;
	Global_58939[27].f_6 = 0.1f;
	Global_58939[28].f_2 = 1f;
	Global_58939[28].f_1 = 1f;
	Global_58939[28].f_3 = 1000f;
	Global_58939[28].f_4 = 3.5f;
	Global_58939[28].f_5 = 3.5f;
	Global_58939[28].f_6 = 0.1f;
	Global_58939[29].f_2 = 1f;
	Global_58939[29].f_1 = 1f;
	Global_58939[29].f_3 = 1000f;
	Global_58939[29].f_4 = 3.5f;
	Global_58939[29].f_5 = 3.5f;
	Global_58939[29].f_6 = 0.1f;
	Global_58939[30].f_2 = 1f;
	Global_58939[30].f_1 = 1f;
	Global_58939[30].f_3 = 1000f;
	Global_58939[30].f_4 = 3.5f;
	Global_58939[30].f_5 = 3.5f;
	Global_58939[30].f_6 = 0.1f;
	Global_58939[31].f_2 = 1f;
	Global_58939[31].f_1 = 1f;
	Global_58939[31].f_3 = 1000f;
	Global_58939[31].f_4 = 3.5f;
	Global_58939[31].f_5 = 3.5f;
	Global_58939[31].f_6 = 0.1f;
	Global_58939[32].f_2 = 1f;
	Global_58939[32].f_1 = 1f;
	Global_58939[32].f_3 = 1000f;
	Global_58939[32].f_4 = 3.5f;
	Global_58939[32].f_5 = 3.5f;
	Global_58939[32].f_6 = 0.1f;
	Global_58939[33].f_2 = 1f;
	Global_58939[33].f_1 = 1f;
	Global_58939[33].f_3 = 1000f;
	Global_58939[33].f_4 = 3.5f;
	Global_58939[33].f_5 = 3.5f;
	Global_58939[33].f_6 = 0.1f;
	Global_58939[34].f_2 = 1f;
	Global_58939[34].f_1 = 1f;
	Global_58939[34].f_3 = 1000f;
	Global_58939[34].f_4 = 3.5f;
	Global_58939[34].f_5 = 3.5f;
	Global_58939[34].f_6 = 0.1f;
	Global_58939[35].f_2 = 1f;
	Global_58939[35].f_1 = 1f;
	Global_58939[35].f_3 = 1000f;
	Global_58939[35].f_4 = 3.5f;
	Global_58939[35].f_5 = 3.5f;
	Global_58939[35].f_6 = 0.1f;
	Global_58939[36].f_2 = 1f;
	Global_58939[36].f_1 = 1f;
	Global_58939[36].f_3 = 1000f;
	Global_58939[36].f_4 = 3.5f;
	Global_58939[36].f_5 = 3.5f;
	Global_58939[36].f_6 = 0.1f;
	Global_58939[37].f_2 = 1f;
	Global_58939[37].f_1 = 1f;
	Global_58939[37].f_3 = 1000f;
	Global_58939[37].f_4 = 3.5f;
	Global_58939[37].f_5 = 3.5f;
	Global_58939[37].f_6 = 0.1f;
	Global_58939[38].f_2 = 1f;
	Global_58939[38].f_1 = 1f;
	Global_58939[38].f_3 = 1000f;
	Global_58939[38].f_4 = 3.5f;
	Global_58939[38].f_5 = 3.5f;
	Global_58939[38].f_6 = 0.1f;
	Global_58939[39].f_2 = 1f;
	Global_58939[39].f_1 = 1f;
	Global_58939[39].f_3 = 1000f;
	Global_58939[39].f_4 = 3.5f;
	Global_58939[39].f_5 = 3.5f;
	Global_58939[39].f_6 = 0.1f;
	Global_58939[40].f_2 = 1f;
	Global_58939[40].f_1 = 1f;
	Global_58939[40].f_3 = 1000f;
	Global_58939[40].f_4 = 3.5f;
	Global_58939[40].f_5 = 3.5f;
	Global_58939[40].f_6 = 0.1f;
	Global_59227[0].f_1 = joaat("SM_BRVECDESBFA");
	Global_59227[0] = true;
	Global_59227[1].f_1 = joaat("SM_BRVECDESBRU");
	Global_59227[1] = true;
	Global_59227[3].f_1 = joaat("SM_BRVECDESLSC");
	Global_59227[3] = true;
	Global_59227[4].f_1 = joaat("SM_BRVECDESLST");
	Global_59227[4] = true;
	Global_59227[5].f_1 = joaat("SM_BRVECDESLTD");
	Global_59227[5] = true;
	Global_59227[6].f_1 = joaat("SM_BRVECDESMAI");
	Global_59227[6] = true;
	Global_59227[7].f_1 = joaat("SM_BRVECDESRON");
	Global_59227[7] = true;
	Global_59227[8].f_1 = joaat("SM_BRVECDESSHT");
	Global_59227[8] = true;
	Global_59227[9].f_1 = joaat("SM_BRVECDESUMA");
	Global_59227[9] = true;
	Global_59227[10].f_1 = joaat("SM_BRVECDESVAP");
	Global_59227[10] = true;
	Global_59227[11].f_1 = joaat("SM_BRVECDESHVY");
	Global_59227[11] = true;
	Global_59227[12].f_1 = joaat("SM_VECBUYBFA");
	Global_59227[12] = true;
	Global_59227[13].f_1 = joaat("SM_VECBUYBRU");
	Global_59227[13] = true;
	Global_59227[15].f_1 = joaat("SM_VECBUYMAI");
	Global_59227[15] = true;
	Global_59227[16].f_1 = joaat("SM_VECBUYSHT");
	Global_59227[16] = true;
	Global_59227[17].f_1 = joaat("SM_VECBUYUMA");
	Global_59227[17] = true;
	Global_59227[18].f_1 = joaat("SM_VECBUYVAP");
	Global_59227[18] = true;
	Global_59227[19].f_1 = joaat("SM_VECBUYHVY");
	Global_59227[19] = true;
	Global_59227[20].f_1 = joaat("SM_DISDRIVBFA");
	Global_59227[20] = true;
	Global_59227[21].f_1 = joaat("SM_DISDRIVBRU");
	Global_59227[21] = true;
	Global_59227[23].f_1 = joaat("SM_DISDRIVLST");
	Global_59227[23] = true;
	Global_59227[24].f_1 = joaat("SM_DISDRIVMAI");
	Global_59227[24] = true;
	Global_59227[25].f_1 = joaat("SM_DISDRIVSHT");
	Global_59227[25] = true;
	Global_59227[26].f_1 = joaat("SM_DISDRIVUMA");
	Global_59227[26] = true;
	Global_59227[27].f_1 = joaat("SM_DISDRIVVAP");
	Global_59227[27] = true;
	Global_59227[28].f_1 = joaat("SM_DISDRIVHVY");
	Global_59227[28] = true;
	Global_59227[30].f_1 = joaat("SM_VECMODLSC");
	Global_59227[30] = true;
	Global_59227[31].f_1 = joaat("SM_VECSTOLBFA");
	Global_59227[31] = true;
	Global_59227[32].f_1 = joaat("SM_VECSTOLBRU");
	Global_59227[32] = true;
	Global_59227[34].f_1 = joaat("SM_VECSTOLLST");
	Global_59227[34] = true;
	Global_59227[35].f_1 = joaat("SM_VECSTOLMAI");
	Global_59227[35] = true;
	Global_59227[36].f_1 = joaat("SM_VECSTOLSHT");
	Global_59227[36] = true;
	Global_59227[37].f_1 = joaat("SM_VECSTOLUMA");
	Global_59227[37] = true;
	Global_59227[38].f_1 = joaat("SM_VECSTOLVAP");
	Global_59227[38] = true;
	Global_59227[39].f_1 = joaat("SM_VECSTOLHVY");
	Global_59227[39] = true;
	Global_59227[40].f_1 = joaat("SM_VECDMGBFA");
	Global_59227[40] = true;
	Global_59227[41].f_1 = joaat("SM_VECDMGBRU");
	Global_59227[41] = true;
	Global_59227[43].f_1 = joaat("SM_VECDMGMAI");
	Global_59227[43] = true;
	Global_59227[44].f_1 = joaat("SM_VECDMGSHT");
	Global_59227[44] = true;
	Global_59227[45].f_1 = joaat("SM_VECDMGUMA");
	Global_59227[45] = true;
	Global_59227[46].f_1 = joaat("SM_VECDMGVAP");
	Global_59227[46] = true;
	Global_59227[47].f_1 = joaat("SM_VECDMGHVY");
	Global_59227[47] = true;
	Global_59227[48].f_1 = joaat("SM_VECPEDKIL");
	Global_59227[48] = true;
	Global_59227[49].f_1 = joaat("SM_WEPBUYSHR");
	Global_59227[49] = true;
	Global_59227[50].f_1 = joaat("SM_WEPBUYHAL");
	Global_59227[50] = true;
	Global_59227[51].f_1 = joaat("SM_WEPTAKEVOM");
	Global_59227[51] = true;
	Global_59227[52].f_1 = joaat("SM_WEPTAKESHR");
	Global_59227[52] = true;
	Global_59227[53].f_1 = joaat("SM_WEPTAKEHAL");
	Global_59227[53] = true;
	Global_59227[54].f_1 = joaat("SM_KILCOPVOM");
	Global_59227[54] = true;
	Global_59227[55].f_1 = joaat("SM_KILCOPSHR");
	Global_59227[55] = true;
	Global_59227[56].f_1 = joaat("SM_KILCOPHAL");
	Global_59227[56] = true;
	Global_59227[57].f_1 = joaat("SM_KILCRIMVOM");
	Global_59227[57] = true;
	Global_59227[58].f_1 = joaat("SM_KILCRIMSHR");
	Global_59227[58] = true;
	Global_59227[59].f_1 = joaat("SM_KILCRIMHAL");
	Global_59227[59] = true;
	Global_59227[60].f_1 = joaat("SM_KILCIVMAI");
	Global_59227[60] = true;
	Global_59227[61].f_1 = joaat("SM_KILCIVSHT");
	Global_59227[61] = true;
	Global_59227[62].f_1 = joaat("SM_KILCIVUMA");
	Global_59227[62] = true;
	Global_59227[63].f_1 = joaat("SM_KILCIVVOM");
	Global_59227[63] = true;
	Global_59227[64].f_1 = joaat("SM_KILCIVSHR");
	Global_59227[64] = true;
	Global_59227[65].f_1 = joaat("SM_KILCIVHAL");
	Global_59227[65] = true;
	Global_59227[67].f_1 = joaat("SM_VENUSESPU");
	Global_59227[67] = true;
	Global_59227[68].f_1 = joaat("SM_NEWDAM");
	Global_59227[68] = true;
	Global_59227[69].f_1 = joaat("SM_HPKIL");
	Global_59227[69] = true;
	Global_59227[70].f_1 = joaat("SM_PUBCLUB");
	Global_59227[70] = true;
	Global_59227[71].f_1 = joaat("SM_TDRNK");
	Global_59227[71] = true;
	Global_59227[72].f_1 = joaat("SM_FRNPUB");
	Global_59227[72] = true;
	Global_59227[73].f_1 = joaat("SM_DRNKCRM");
	Global_59227[73] = true;
	Global_59227[74].f_1 = joaat("SM_RAMCOM");
	Global_59227[74] = true;
	Global_59227[76].f_1 = joaat("SM_RADCNT");
	Global_59227[76] = true;
	Global_59227[77].f_1 = joaat("SM_RADWZL");
	Global_59227[77] = true;
	Global_59227[78].f_1 = joaat("SM_RADZIT");
	Global_59227[78] = true;
	Global_59227[81].f_1 = joaat("SM_ZITITCNT");
	Global_59227[81] = true;
	Global_59227[82].f_1 = joaat("SM_ZITITWZL");
	Global_59227[82] = true;
	Global_59227[83].f_1 = joaat("SM_ZITITZIT");
	Global_59227[83] = true;
	Global_59227[84].f_1 = joaat("SM_RADCHACNT");
	Global_59227[84] = true;
	Global_59227[85].f_1 = joaat("SM_RADCHAWZL");
	Global_59227[85] = true;
	Global_59227[88].f_1 = joaat("SM_PARA");
	Global_59227[88] = true;
	Global_59227[89].f_1 = joaat("SM_TKFIRE");
	Global_59227[89] = true;
	Global_59227[90].f_1 = joaat("SM_FIBAI");
	Global_59227[90] = true;
	Global_59227[91].f_1 = joaat("SM_TANDES");
	Global_59227[91] = true;
	Global_59227[92].f_1 = joaat("SM_GAREP");
	Global_59227[92] = true;
	Global_59227[93].f_1 = joaat("SM_GAMONSP");
	Global_59227[93] = true;
	Global_59227[94].f_1 = joaat("SM_MONB");
	Global_59227[94] = true;
	Global_59227[98].f_1 = joaat("SM_MONUPSHK");
	Global_59227[98] = true;
	Global_59227[100].f_1 = joaat("SM_TAXDEST");
	Global_59227[100] = true;
	Global_59227[101].f_1 = joaat("SM_KILWBFA");
	Global_59227[101] = true;
	Global_59227[102].f_1 = joaat("SM_KILWBRU");
	Global_59227[102] = true;
	Global_59227[104].f_1 = joaat("SM_KILWMAI");
	Global_59227[104] = true;
	Global_59227[105].f_1 = joaat("SM_KILWSHT");
	Global_59227[105] = true;
	Global_59227[106].f_1 = joaat("SM_KILWUMA");
	Global_59227[106] = true;
	Global_59227[107].f_1 = joaat("SM_KILWVAP");
	Global_59227[107] = true;
	Global_59227[108].f_1 = joaat("SM_KILWVOM");
	Global_59227[108] = true;
	Global_59227[109].f_1 = joaat("SM_KILWHVY");
	Global_59227[109] = true;
	Global_59227[112].f_1 = joaat("SM_CLOBOFBIN");
	Global_59227[112] = true;
	Global_59227[113].f_1 = joaat("SM_CLOBOFPKW");
	Global_59227[113] = true;
	Global_59227[114].f_1 = joaat("SM_CLOBOFPON");
	Global_59227[114] = true;
	Global_59227[117].f_1 = joaat("SM_YOGA");
	Global_59227[117] = true;
	Global_59227[118].f_1 = joaat("SM_TRI");
	Global_59227[118] = true;
	Global_59227[119].f_1 = joaat("SM_GYM");
	Global_59227[119] = true;
	Global_59227[120].f_1 = joaat("SM_STRIP");
	Global_59227[120] = true;
	Global_59227[121].f_1 = joaat("SM_UGHOK");
	Global_59227[121] = true;
	Global_59227[122].f_1 = joaat("SM_STRTRO");
	Global_59227[122] = true;
	Global_59227[123].f_1 = joaat("SM_PISCO");
	Global_59227[123] = true;
	Global_59227[124].f_1 = joaat("SM_TOTINJ");
	Global_59227[124] = true;
	Global_59227[125].f_1 = joaat("SM_DRUGKIL");
	Global_59227[125] = true;
	Global_59227[126].f_1 = joaat("SM_HANGOVR");
	Global_59227[126] = true;
	Global_59227[127].f_1 = joaat("SM_KILLSPR");
	Global_59227[127] = true;
	Global_59227[129].f_1 = joaat("SM_PEDFIREKILL");
	Global_59227[129] = true;
	Global_59227[130].f_1 = joaat("SM_PEDFIRETICK");
	Global_59227[130] = true;
	Global_59227[131].f_1 = joaat("SM_TVTICKWAP");
	Global_59227[131] = true;
	Global_59227[132].f_1 = joaat("SM_TVTICKWIW");
	Global_59227[132] = true;
	Global_59227[134].f_1 = joaat("SM_ZITPOPZIT");
	Global_59227[134] = true;
	Global_59227[135].f_1 = joaat("SM_CARAPP");
	Global_59227[135] = true;
	Global_59227[137].f_1 = joaat("SM_STOROB");
	Global_59227[137] = true;
	Global_59227[162].f_1 = joaat("SM_PHONCALBDG");
	Global_59227[162] = true;
	Global_59227[163].f_1 = joaat("SM_PHONCALTNK");
	Global_59227[163] = true;
	Global_59227[164].f_1 = joaat("SM_PHONCALWIZ");
	Global_59227[164] = true;
	Global_59227[165].f_1 = joaat("SM_PHONTXTBDG");
	Global_59227[165] = true;
	Global_59227[166].f_1 = joaat("SM_PHONTXTTNK");
	Global_59227[166] = true;
	Global_59227[167].f_1 = joaat("SM_PHONTXTWIZ");
	Global_59227[167] = true;
	Global_59227[168].f_1 = joaat("SM_CHTICKBDG");
	Global_59227[168] = true;
	Global_59227[169].f_1 = joaat("SM_CHTICKTNK");
	Global_59227[169] = true;
	Global_59227[170].f_1 = joaat("SM_CHTICKWIZ");
	Global_59227[170] = true;
	Global_59227[171].f_1 = joaat("SM_CALCANBDG");
	Global_59227[171] = true;
	Global_59227[172].f_1 = joaat("SM_CALCANTNK");
	Global_59227[172] = true;
	Global_59227[173].f_1 = joaat("SM_CALCANWIZ");
	Global_59227[173] = true;
	Global_59227[138].f_2 = 1;
	Global_59227[138].f_3 = joaat("SP0_DIST_WALKING");
	Global_59227[138].f_4 = 1;
	Global_59227[139].f_2 = 1;
	Global_59227[139].f_3 = joaat("SP1_DIST_WALKING");
	Global_59227[139].f_4 = 1;
	Global_59227[140].f_2 = 1;
	Global_59227[140].f_3 = joaat("SP2_DIST_WALKING");
	Global_59227[140].f_4 = 1;
	Global_59227[141].f_2 = 1;
	Global_59227[141].f_3 = joaat("SP0_DIST_DRIVING_BICYCLE");
	Global_59227[141].f_4 = 1;
	Global_59227[142].f_2 = 1;
	Global_59227[142].f_3 = joaat("SP1_DIST_DRIVING_BICYCLE");
	Global_59227[142].f_4 = 1;
	Global_59227[143].f_2 = 1;
	Global_59227[143].f_3 = joaat("SP2_DIST_DRIVING_BICYCLE");
	Global_59227[143].f_4 = 1;
	Global_59227[144].f_2 = 1;
	Global_59227[144].f_3 = joaat("SP0_BAILED_FROM_VEHICLE");
	Global_59227[144].f_4 = 0;
	Global_59227[145].f_2 = 1;
	Global_59227[145].f_3 = joaat("SP1_BAILED_FROM_VEHICLE");
	Global_59227[145].f_4 = 0;
	Global_59227[146].f_2 = 1;
	Global_59227[146].f_3 = joaat("SP2_BAILED_FROM_VEHICLE");
	Global_59227[146].f_4 = 0;
	Global_59227[150].f_2 = 1;
	Global_59227[150].f_3 = joaat("SP0_LARGE_ACCIDENTS");
	Global_59227[150].f_4 = 0;
	Global_59227[151].f_2 = 1;
	Global_59227[151].f_3 = joaat("SP1_LARGE_ACCIDENTS");
	Global_59227[151].f_4 = 0;
	Global_59227[152].f_2 = 1;
	Global_59227[152].f_3 = joaat("SP2_LARGE_ACCIDENTS");
	Global_59227[152].f_4 = 0;
	Global_59227[153].f_2 = 1;
	Global_59227[153].f_3 = joaat("SP0_TOTAL_LEGITIMATE_KILLS");
	Global_59227[153].f_4 = 0;
	Global_59227[154].f_2 = 1;
	Global_59227[154].f_3 = joaat("SP1_TOTAL_LEGITIMATE_KILLS");
	Global_59227[154].f_4 = 0;
	Global_59227[155].f_2 = 1;
	Global_59227[155].f_3 = joaat("SP2_TOTAL_LEGITIMATE_KILLS");
	Global_59227[155].f_4 = 0;
	Global_59227[156].f_2 = 1;
	Global_59227[156].f_3 = joaat("SP0_MONEY_SPENT_ON_TAXIS");
	Global_59227[156].f_4 = 0;
	Global_59227[157].f_2 = 1;
	Global_59227[157].f_3 = joaat("SP1_MONEY_SPENT_ON_TAXIS");
	Global_59227[157].f_4 = 0;
	Global_59227[158].f_2 = 1;
	Global_59227[158].f_3 = joaat("SP2_MONEY_SPENT_ON_TAXIS");
	Global_59227[158].f_4 = 0;
	Global_59227[159].f_2 = 1;
	Global_59227[159].f_3 = joaat("SP0_MONEY_SPENT_ON_HEALTHCARE");
	Global_59227[159].f_4 = 0;
	Global_59227[160].f_2 = 1;
	Global_59227[160].f_3 = joaat("SP1_MONEY_SPENT_ON_HEALTHCARE");
	Global_59227[160].f_4 = 0;
	Global_59227[161].f_2 = 1;
	Global_59227[161].f_3 = joaat("SP2_MONEY_SPENT_ON_HEALTHCARE");
	Global_59227[161].f_4 = 0;
	Global_59227[174].f_2 = 1;
	Global_59227[174].f_3 = joaat("SP0_MONEY_SPENT_IN_COP_BRIBES");
	Global_59227[174].f_4 = 0;
	Global_59227[175].f_2 = 1;
	Global_59227[175].f_3 = joaat("SP1_MONEY_SPENT_IN_COP_BRIBES");
	Global_59227[175].f_4 = 0;
	Global_59227[176].f_2 = 1;
	Global_59227[176].f_3 = joaat("SP2_MONEY_SPENT_IN_COP_BRIBES");
	Global_59227[176].f_4 = 0;
	Global_59227[177].f_2 = 1;
	Global_59227[177].f_3 = joaat("SP0_BUSTED");
	Global_59227[177].f_4 = 0;
	Global_59227[178].f_2 = 1;
	Global_59227[178].f_3 = joaat("SP1_BUSTED");
	Global_59227[178].f_4 = 0;
	Global_59227[179].f_2 = 1;
	Global_59227[179].f_3 = joaat("SP2_BUSTED");
	Global_59227[179].f_4 = 0;
	Global_59227[180].f_2 = 1;
	Global_59227[180].f_3 = joaat("SP0_DIED_IN_FALL");
	Global_59227[180].f_4 = 0;
	Global_59227[181].f_2 = 1;
	Global_59227[181].f_3 = joaat("SP1_DIED_IN_FALL");
	Global_59227[181].f_4 = 0;
	Global_59227[182].f_2 = 1;
	Global_59227[182].f_3 = joaat("SP2_DIED_IN_FALL");
	Global_59227[182].f_4 = 0;
	Global_59227[183].f_2 = 1;
	Global_59227[183].f_3 = joaat("SP0_STARS_ATTAINED");
	Global_59227[183].f_4 = 0;
	Global_59227[184].f_2 = 1;
	Global_59227[184].f_3 = joaat("SP1_STARS_ATTAINED");
	Global_59227[184].f_4 = 0;
	Global_59227[185].f_2 = 1;
	Global_59227[185].f_3 = joaat("SP2_STARS_ATTAINED");
	Global_59227[185].f_4 = 0;
	Global_59227[186].f_2 = 1;
	Global_59227[186].f_3 = joaat("SP0_STARS_EVADED");
	Global_59227[186].f_4 = 0;
	Global_59227[187].f_2 = 1;
	Global_59227[187].f_3 = joaat("SP1_STARS_EVADED");
	Global_59227[187].f_4 = 0;
	Global_59227[188].f_2 = 1;
	Global_59227[188].f_3 = joaat("SP2_STARS_EVADED");
	Global_59227[188].f_4 = 0;
	Global_59227[189].f_2 = 1;
	Global_59227[189].f_3 = joaat("SP0_MANUAL_SAVED");
	Global_59227[189].f_4 = 0;
	Global_59227[190].f_2 = 1;
	Global_59227[190].f_3 = joaat("SP1_MANUAL_SAVED");
	Global_59227[190].f_4 = 0;
	Global_59227[191].f_2 = 1;
	Global_59227[191].f_3 = joaat("SP2_MANUAL_SAVED");
	Global_59227[191].f_4 = 0;
	Global_59227[192].f_2 = 1;
	Global_59227[192].f_3 = joaat("SP0_KILLS_COP");
	Global_59227[192].f_4 = 0;
	Global_59227[193].f_2 = 1;
	Global_59227[193].f_3 = joaat("SP1_KILLS_COP");
	Global_59227[193].f_4 = 0;
	Global_59227[194].f_2 = 1;
	Global_59227[194].f_3 = joaat("SP2_KILLS_COP");
	Global_59227[194].f_4 = 0;
	Global_59227[195].f_2 = 1;
	Global_59227[195].f_3 = joaat("SP0_KILLS_SWAT");
	Global_59227[195].f_4 = 0;
	Global_59227[196].f_2 = 1;
	Global_59227[196].f_3 = joaat("SP1_KILLS_SWAT");
	Global_59227[196].f_4 = 0;
	Global_59227[197].f_2 = 1;
	Global_59227[197].f_3 = joaat("SP2_KILLS_SWAT");
	Global_59227[197].f_4 = 0;
	Global_59227[198].f_2 = 1;
	Global_59227[198].f_3 = joaat("SP0_TIME_IN_COVER");
	Global_59227[198].f_4 = 0;
	Global_59227[199].f_2 = 1;
	Global_59227[199].f_3 = joaat("SP1_TIME_IN_COVER");
	Global_59227[199].f_4 = 0;
	Global_59227[200].f_2 = 1;
	Global_59227[200].f_3 = joaat("SP2_TIME_IN_COVER");
	Global_59227[200].f_4 = 0;
	Global_58665[0] = joaat("SM_PRICE_AMU");
	Global_58665[0].f_3[0] = joaat("AMU_OW0");
	Global_58665[0].f_3[1] = joaat("AMU_OW1");
	Global_58665[0].f_3[2] = joaat("AMU_OW2");
	Global_58665[1] = joaat("SM_PRICE_BDG");
	Global_58665[1].f_3[0] = joaat("BDG_OW0");
	Global_58665[1].f_3[1] = joaat("BDG_OW1");
	Global_58665[1].f_3[2] = joaat("BDG_OW2");
	Global_58665[2] = joaat("SM_PRICE_BFA");
	Global_58665[2].f_3[0] = joaat("BFA_OW0");
	Global_58665[2].f_3[1] = joaat("BFA_OW1");
	Global_58665[2].f_3[2] = joaat("BFA_OW2");
	Global_58665[3] = joaat("SM_PRICE_BIN");
	Global_58665[3].f_3[0] = joaat("BIN_OW0");
	Global_58665[3].f_3[1] = joaat("BIN_OW1");
	Global_58665[3].f_3[2] = joaat("BIN_OW2");
	Global_58665[4] = joaat("SM_PRICE_BTR");
	Global_58665[4].f_3[0] = joaat("BTR_OW0");
	Global_58665[4].f_3[1] = joaat("BTR_OW1");
	Global_58665[4].f_3[2] = joaat("BTR_OW2");
	Global_58665[5] = joaat("SM_PRICE_BLE");
	Global_58665[5].f_3[0] = joaat("BLE_OW0");
	Global_58665[5].f_3[1] = joaat("BLE_OW1");
	Global_58665[5].f_3[2] = joaat("BLE_OW2");
	Global_58665[6] = joaat("SM_PRICE_BRU");
	Global_58665[6].f_3[0] = joaat("BRU_OW0");
	Global_58665[6].f_3[1] = joaat("BRU_OW1");
	Global_58665[6].f_3[2] = joaat("BRU_OW2");
	Global_58665[7] = joaat("SM_PRICE_CNT");
	Global_58665[7].f_3[0] = joaat("CNT_OW0");
	Global_58665[7].f_3[1] = joaat("CNT_OW1");
	Global_58665[7].f_3[2] = joaat("CNT_OW2");
	Global_58665[8] = joaat("SM_PRICE_CRE");
	Global_58665[8].f_3[0] = joaat("CRE_OW0");
	Global_58665[8].f_3[1] = joaat("CRE_OW1");
	Global_58665[8].f_3[2] = joaat("CRE_OW2");
	Global_58665[9] = joaat("SM_PRICE_DGP");
	Global_58665[9].f_3[0] = joaat("DGP_OW0");
	Global_58665[9].f_3[1] = joaat("DGP_OW1");
	Global_58665[9].f_3[2] = joaat("DGP_OW2");
	Global_58665[10] = joaat("SM_PRICE_WAP");
	Global_58665[10].f_3[0] = joaat("WAP_OW0");
	Global_58665[10].f_3[1] = joaat("WAP_OW1");
	Global_58665[10].f_3[2] = joaat("WAP_OW2");
	Global_58665[11] = joaat("SM_PRICE_FAC");
	Global_58665[11].f_3[0] = joaat("FAC_OW0");
	Global_58665[11].f_3[1] = joaat("FAC_OW1");
	Global_58665[11].f_3[2] = joaat("FAC_OW2");
	Global_58665[12] = joaat("SM_PRICE_FRT");
	Global_58665[12].f_3[0] = joaat("FRT_OW0");
	Global_58665[12].f_3[1] = joaat("FRT_OW1");
	Global_58665[12].f_3[2] = joaat("FRT_OW2");
	Global_58665[13] = joaat("SM_PRICE_LSC");
	Global_58665[13].f_3[0] = joaat("LSC_OW0");
	Global_58665[13].f_3[1] = joaat("LSC_OW1");
	Global_58665[13].f_3[2] = joaat("LSC_OW2");
	Global_58665[14] = joaat("SM_PRICE_LST");
	Global_58665[14].f_3[0] = joaat("LST_OW0");
	Global_58665[14].f_3[1] = joaat("LST_OW1");
	Global_58665[14].f_3[2] = joaat("LST_OW2");
	Global_58665[15] = joaat("SM_PRICE_LTD");
	Global_58665[15].f_3[0] = joaat("LTD_OW0");
	Global_58665[15].f_3[1] = joaat("LTD_OW1");
	Global_58665[15].f_3[2] = joaat("LTD_OW2");
	Global_58665[16] = joaat("SM_PRICE_MAI");
	Global_58665[16].f_3[0] = joaat("MAI_OW0");
	Global_58665[16].f_3[1] = joaat("MAI_OW1");
	Global_58665[16].f_3[2] = joaat("MAI_OW2");
	Global_58665[17] = joaat("SM_PRICE_PKW");
	Global_58665[17].f_3[0] = joaat("PKW_OW0");
	Global_58665[17].f_3[1] = joaat("PKW_OW1");
	Global_58665[17].f_3[2] = joaat("PKW_OW2");
	Global_58665[18] = joaat("SM_PRICE_PIS");
	Global_58665[18].f_3[0] = joaat("PIS_OW0");
	Global_58665[18].f_3[1] = joaat("PIS_OW1");
	Global_58665[18].f_3[2] = joaat("PIS_OW2");
	Global_58665[19] = joaat("SM_PRICE_PON");
	Global_58665[19].f_3[0] = joaat("PON_OW0");
	Global_58665[19].f_3[1] = joaat("PON_OW1");
	Global_58665[19].f_3[2] = joaat("PON_OW2");
	Global_58665[20] = joaat("SM_PRICE_RON");
	Global_58665[20].f_3[0] = joaat("RON_OW0");
	Global_58665[20].f_3[1] = joaat("RON_OW1");
	Global_58665[20].f_3[2] = joaat("RON_OW2");
	Global_58665[21] = joaat("SM_PRICE_SHT");
	Global_58665[21].f_3[0] = joaat("SHT_OW0");
	Global_58665[21].f_3[1] = joaat("SHT_OW1");
	Global_58665[21].f_3[2] = joaat("SHT_OW2");
	Global_58665[22] = joaat("SM_PRICE_SPU");
	Global_58665[22].f_3[0] = joaat("SPU_OW0");
	Global_58665[22].f_3[1] = joaat("SPU_OW1");
	Global_58665[22].f_3[2] = joaat("SPU_OW2");
	Global_58665[23] = joaat("SM_PRICE_TNK");
	Global_58665[23].f_3[0] = joaat("TNK_OW0");
	Global_58665[23].f_3[1] = joaat("TNK_OW1");
	Global_58665[23].f_3[2] = joaat("TNK_OW2");
	Global_58665[24] = joaat("SM_PRICE_WIW");
	Global_58665[24].f_3[0] = joaat("WIW_OW0");
	Global_58665[24].f_3[1] = joaat("WIW_OW1");
	Global_58665[24].f_3[2] = joaat("WIW_OW2");
	Global_58665[25] = joaat("SM_PRICE_UMA");
	Global_58665[25].f_3[0] = joaat("UMA_OW0");
	Global_58665[25].f_3[1] = joaat("UMA_OW1");
	Global_58665[25].f_3[2] = joaat("UMA_OW2");
	Global_58665[26] = joaat("SM_PRICE_VAP");
	Global_58665[26].f_3[0] = joaat("VAP_OW0");
	Global_58665[26].f_3[1] = joaat("VAP_OW1");
	Global_58665[26].f_3[2] = joaat("VAP_OW2");
	Global_58665[27] = joaat("SM_PRICE_VOM");
	Global_58665[27].f_3[0] = joaat("VOM_OW0");
	Global_58665[27].f_3[1] = joaat("VOM_OW1");
	Global_58665[27].f_3[2] = joaat("VOM_OW2");
	Global_58665[28] = joaat("SM_PRICE_WZL");
	Global_58665[28].f_3[0] = joaat("WZL_OW0");
	Global_58665[28].f_3[1] = joaat("WZL_OW1");
	Global_58665[28].f_3[2] = joaat("WZL_OW2");
	Global_58665[29] = joaat("SM_PRICE_WIZ");
	Global_58665[29].f_3[0] = joaat("WIZ_OW0");
	Global_58665[29].f_3[1] = joaat("WIZ_OW1");
	Global_58665[29].f_3[2] = joaat("WIZ_OW2");
	Global_58665[30] = joaat("SM_PRICE_ZIT");
	Global_58665[30].f_3[0] = joaat("ZIT_OW0");
	Global_58665[30].f_3[1] = joaat("ZIT_OW1");
	Global_58665[30].f_3[2] = joaat("ZIT_OW2");
	Global_58665[31] = joaat("SM_PRICE_SHK");
	Global_58665[31].f_3[0] = joaat("SHK_OW0");
	Global_58665[31].f_3[1] = joaat("SHK_OW1");
	Global_58665[31].f_3[2] = joaat("SHK_OW2");
	Global_58665[32] = joaat("SM_PRICE_MOL");
	Global_58665[32].f_3[0] = joaat("MOL_OW0");
	Global_58665[32].f_3[1] = joaat("MOL_OW1");
	Global_58665[32].f_3[2] = joaat("MOL_OW2");
	Global_58665[33] = joaat("SM_PRICE_PMP");
	Global_58665[33].f_3[0] = joaat("PMP_OW0");
	Global_58665[33].f_3[1] = joaat("PMP_OW1");
	Global_58665[33].f_3[2] = joaat("PMP_OW2");
	Global_58665[34] = joaat("SM_PRICE_GOT");
	Global_58665[34].f_3[0] = joaat("GOT_OW0");
	Global_58665[34].f_3[1] = joaat("GOT_OW1");
	Global_58665[34].f_3[2] = joaat("GOT_OW2");
	Global_58665[35] = joaat("SM_PRICE_EYE");
	Global_58665[35].f_3[0] = joaat("EYE_OW0");
	Global_58665[35].f_3[1] = joaat("EYE_OW1");
	Global_58665[35].f_3[2] = joaat("EYE_OW2");
	Global_58665[36] = joaat("SM_PRICE_HVY");
	Global_58665[36].f_3[0] = joaat("HVY_OW0");
	Global_58665[36].f_3[1] = joaat("HVY_OW1");
	Global_58665[36].f_3[2] = joaat("HVY_OW2");
	Global_58665[37] = joaat("SM_PRICE_SHR");
	Global_58665[37].f_3[0] = joaat("SHR_OW0");
	Global_58665[37].f_3[1] = joaat("SHR_OW1");
	Global_58665[37].f_3[2] = joaat("SHR_OW2");
	Global_58665[38] = joaat("SM_PRICE_HAL");
	Global_58665[38].f_3[0] = joaat("HAL_OW0");
	Global_58665[38].f_3[1] = joaat("HAL_OW1");
	Global_58665[38].f_3[2] = joaat("HAL_OW2");
	return;
}

void func_99() // Position - 0x9572
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

