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
	char* sLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	float fLocal_63 = 0f;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	BOOL bLocal_70 = 0;
	int iLocal_71 = 0;
	BOOL bLocal_72 = 0;
#endregion

void main() // Position - 0x0
{
	int value;

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
	sLocal_16 = "NULL";
	iLocal_19 = 3;
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_61 = 1000;
	iLocal_62 = 3333;
	fLocal_63 = 0f;
	bLocal_70 = true;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
		SCRIPT::TERMINATE_THIS_THREAD();

	iLocal_56 = MISC::GET_GAME_TIMER();
	iLocal_65 = 0;
	func_186(iLocal_66);
	func_185();
	func_183(&Global_4542602);
	func_182(&Global_4542602, 1);
	func_180(&uLocal_67);

	while (true)
	{
		if (Global_32534 != iLocal_65)
		{
			if (iLocal_65 == 0 && Global_32534 != 0)
				if (MISC::IS_PS3_VERSION() || IS_PLAYSTATION_PLATFORM())
					_DISPLAY_HELP_TEXT("CHEAT_TROPHIE" /*Cheats have been activated. Trophies will not be awarded for the duration of this session.*/, -1);
				else
					_DISPLAY_HELP_TEXT("CHEAT_ACHIEVE" /*Cheats have been activated. Achievements will not be awarded for the duration of this session.*/, -1);
		
			iLocal_65 != 0 && Global_32534 == 0;
		}
	
		iLocal_65 = Global_32534;
	
		if (!func_177(14))
		{
			if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(24))
				func_168();
		
			if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(25))
				func_166();
		
			if (Global_32293)
			{
				if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(12))
				{
					value = func_151(true);
				
					if (value > 0)
					{
						func_150(12, value);
						STATS::STAT_SET_INT(joaat("NUM_GOLD_MEDALS_OBTAINED"), value, true);
					}
				
					if (value >= 70)
						func_144(12, 1);
				}
			
				Global_32293 = false;
			}
		
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_66 = iLocal_66 + 1;
				
					if (MISC::GET_GAME_TIMER() > iLocal_56)
					{
						func_133(false);
						iLocal_56 = MISC::GET_GAME_TIMER() + iLocal_61;
					}
				
					if (MISC::GET_GAME_TIMER() > iLocal_57)
					{
						if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(14) || iLocal_64 == 1)
							if (func_132(53))
								func_131();
					
						iLocal_57 = MISC::GET_GAME_TIMER() + iLocal_62;
					}
				}
			}
		
			func_123(&Global_4542602);
			func_1();
		}
		else
		{
			func_123(&Global_4542602);
			func_1();
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Position - 0x20A
{
	BOOL flag;
	int num;

	if (!func_122(&Global_4542602))
		return;

	if (!Global_78689)
	{
		if (bLocal_72)
			bLocal_72 = false;
	
		return;
	}

	if (!func_119())
		return;

	if (bLocal_70)
	{
		if (!func_117(3, -1))
			return;
	
		if (!func_117(5, -1))
			return;
	}

	if (bLocal_72)
		return;

	flag = SOCIALCLUB::SC_ACHIEVEMENT_INFO_STATUS(&num);
	num == -1 && iLocal_71 == 0;

	if (flag && num == 0)
	{
		func_116();
		bLocal_72 = true;
	}
	else
	{
		func_2();
	}

	return;
}

void func_2() // Position - 0x29A
{
	int num;

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(33))
		if (func_113())
			func_144(33, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(29))
	{
		if (func_109(&uLocal_67) > 5f)
		{
			func_22(PLAYER::PLAYER_PED_ID());
			func_180(&uLocal_67);
		}
	}

	num = func_19(func_21(-1), 0);

	if (num >= 100)
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(36))
			func_144(36, 1);

	if (num >= 50)
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(35))
			func_144(35, 1);

	if (num >= 25)
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(34))
			func_144(34, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(37))
		func_16(false);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(38))
		if (_MPPLY_STAT_GET_INT(joaat("MPPLY_TOTAL_CUSTOM_RACES_WON")) >= 5)
			func_144(38, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(39))
		if (func_13(48, -1) >= 10)
			func_144(39, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(40))
		if (func_13(52, -1) > 0)
			func_144(40, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(41))
		if (IS_BIT_SET(Global_2794162.f_2327.f_18, 1))
			func_144(41, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(43))
		if (func_11(756, -1) >= 30)
			func_144(43, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(44))
		if (func_13(14, -1) >= 20)
			func_144(44, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(45))
		func_9(false);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(48))
		if (_STAT_GET_PACKED_BOOL(11, -1))
			func_144(48, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(49))
		func_3(false);

	return;
}

int func_3(BOOL bParam0) // Position - 0x438
{
	if (!func_119())
		return 0;

	if (!Global_78689)
		return 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(49))
		return 0;

	bParam0 == true;

	if (!func_4(100, -1))
	{
		bParam0 == true;
		return 0;
	}

	if (!func_4(102, -1))
	{
		bParam0 == true;
		return 0;
	}

	if (!func_4(101, -1))
	{
		bParam0 == true;
		return 0;
	}

	func_144(49, 1);
	return 1;
}

BOOL func_4(int iParam0, int iParam1) // Position - 0x4B3
{
	Hash statHash;
	BOOL outValue;

	statHash = func_5(iParam0, iParam1);

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return false;
}

Hash func_5(int iParam0, int iParam1) // Position - 0x4D7
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_6(iParam1));
}

int func_6(int iParam0) // Position - 0x4EC
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_7();
	
		if (num2 > -1)
		{
			Global_2805862 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2805862 = 1;
		}
	}

	return num;
}

int func_7() // Position - 0x520
{
	return Global_1574918;
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1) // Position - 0x52C
{
	if (iParam1 == -1)
		iParam1 = func_7();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_9(BOOL bParam0) // Position - 0x548
{
	int i;
	int num;
	int num2;

	if (!func_119())
		return 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(45))
		return 0;

	if (!Global_78689)
		return 0;

	num2 = func_11(757, -1);

	for (i = 0; i < 9; i = i + 1)
	{
		if (func_10(num2, i, bParam0))
			num = num + 1;
	}

	if (num == 9)
	{
		func_144(45, 1);
		return 1;
	}

	return 0;
}

BOOL func_10(int iParam0, int iParam1, BOOL bParam2) // Position - 0x5B9
{
	BOOL flag;

	flag = IS_BIT_SET(iParam0, iParam1);

	if (!bParam2)
		return flag;

	switch (iParam1)
	{
		case 0:
			return flag;
	
		case 1:
			return flag;
	
		case 2:
			return flag;
	
		case 3:
			return flag;
	
		case 4:
			return flag;
	
		case 5:
			return flag;
	
		case 6:
			return flag;
	
		case 7:
			return flag;
	
		case 8:
			return flag;
	
		default:
		
	}

	return false;
}

int func_11(int iParam0, int iParam1) // Position - 0x63E
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14385)
	{
		statHash = func_12(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

Hash func_12(int iParam0, int iParam1) // Position - 0x66D
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_6(iParam1));
}

int func_13(int iParam0, int iParam1) // Position - 0x682
{
	Hash statHash;
	int outValue;

	statHash = func_14(iParam0, iParam1);

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

Hash func_14(int iParam0, int iParam1) // Position - 0x6A6
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(8, iParam0, func_6(iParam1));
}

int _MPPLY_STAT_GET_INT(Hash hParam0) // Position - 0x6BC
{
	Hash statHash;
	int outValue;

	statHash = hParam0;

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

int func_16(BOOL bParam0) // Position - 0x6DA
{
	int num;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(37))
		return 0;

	if (!func_119())
		return 0;

	if (!Global_78689)
		return 0;

	if (bParam0)
	{
		num = func_13(21, -1);
		num = num - func_13(58, -1);
		num = num - func_13(57, -1);
	}

	if (func_17(8, -1))
	{
		func_144(37, 1);
		return 1;
	}

	return 0;
}

BOOL func_17(int iParam0, int iParam1) // Position - 0x744
{
	Hash statHash;
	BOOL outValue;

	statHash = func_18(iParam0, iParam1);

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return false;
}

Hash func_18(int iParam0, int iParam1) // Position - 0x768
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(10, iParam0, func_6(iParam1));
}

int func_19(int iParam0, int iParam1) // Position - 0x77E
{
	int i;
	int value;
	int value2;
	int num;
	float value3;

	iParam1 == 0;
	value = 8000;
	value2 = 0;
	num = (value - value2) / 2;

	for (i = 0; i <= 100; i = i + 1)
	{
		if (value == value2)
		{
			i = 8000;
		
			if (num == 0)
				num = 1;
		
			return num;
		}
	
		if (func_20(num) == iParam0)
		{
			value = num;
			value2 = num;
		}
		else if (func_20(num) < iParam0)
		{
			if (value2 == num)
				value2 = value2 + 1;
			else
				value2 = num;
		}
		else if (value == num)
		{
			value = value - 1;
		}
		else
		{
			value = num;
		}
	
		value3 = ((SYSTEM::TO_FLOAT(value) - SYSTEM::TO_FLOAT(value2)) / 2f) + SYSTEM::TO_FLOAT(value2);
		num = SYSTEM::ROUND(value3);
	}

	return 8000;
}

// Unhandled jump detected. Output should be considered invalid
int func_20(int iParam0) // Position - 0x839
{
	int num;
	int num2;

	if (iParam0 < 100)
	{
		switch (iParam0)
		{
			case 1:
				return 0;
		
			case 2:
				return 800;
		
			case 3:
				return 2100;
		
			case 4:
				return 3800;
		
			case 5:
				return 6100;
		
			case 6:
				return 9500;
		
			case 7:
				return 12500;
		
			case 8:
				return 16000;
		
			case 9:
				return 19800;
		
			case 10:
				return 24000;
		
			case 11:
				return 28500;
		
			case 12:
				return 33400;
		
			case 13:
				return 38700;
		
			case 14:
				return 44200;
		
			case 15:
				return 50200;
		
			case 16:
				return 56400;
		
			case 17:
				return 63000;
		
			case 18:
				return 69900;
		
			case 19:
				return 77100;
		
			case 20:
				return 84700;
		
			case 21:
				return 92500;
		
			case 22:
				return 100700;
		
			case 23:
				return 109200;
		
			case 24:
				return 118000;
		
			case 25:
				return 127100;
		
			case 26:
				return 136500;
		
			case 27:
				return 146200;
		
			case 28:
				return 156200;
		
			case 29:
				return 166500;
		
			case 30:
				return 177100;
		
			case 31:
				return 188000;
		
			case 32:
				return 199200;
		
			case 33:
				return 210700;
		
			case 34:
				return 222400;
		
			case 35:
				return 234500;
		
			case 36:
				return 246800;
		
			case 37:
				return 259400;
		
			case 38:
				return 272300;
		
			case 39:
				return 285500;
		
			case 40:
				return 299000;
		
			case 41:
				return 312700;
		
			case 42:
				return 326800;
		
			case 43:
				return 341000;
		
			case 44:
				return 355600;
		
			case 45:
				return 370500;
		
			case 46:
				return 385600;
		
			case 47:
				return 401000;
		
			case 48:
				return 416600;
		
			case 49:
				return 432600;
		
			case 50:
				return 448800;
		
			case 51:
				return 465200;
		
			case 52:
				return 482000;
		
			case 53:
				return 499000;
		
			case 54:
				return 516300;
		
			case 55:
				return 533800;
		
			case 56:
				return 551600;
		
			case 57:
				return 569600;
		
			case 58:
				return 588000;
		
			case 59:
				return 606500;
		
			case 60:
				return 625400;
		
			case 61:
				return 644500;
		
			case 62:
				return joaat("pyro_sub_bass_synth");
		
			case 63:
				return 683400;
		
			case 64:
				return 703300;
		
			case 65:
				return 723400;
		
			case 66:
				return 743800;
		
			case 67:
				return 764500;
		
			case 68:
				return 785400;
		
			case 69:
				return 806500;
		
			case 70:
				return 827900;
		
			case 71:
				return 849600;
		
			case 72:
				return 871500;
		
			case 73:
				return 893600;
		
			case 74:
				return 916000;
		
			case 75:
				return 938700;
		
			case 76:
				return 961600;
		
			case 77:
				return 984700;
		
			case 78:
				return 1008100;
		
			case 79:
				return 1031800;
		
			case 80:
				return 1055700;
		
			case 81:
				return 1079800;
		
			case 82:
				return 1104200;
		
			case 83:
				return 1128800;
		
			case 84:
				return 1153700;
		
			case 85:
				return 1178800;
		
			case 86:
				return 1204200;
		
			case 87:
				return 1229800;
		
			case 88:
				return 1255600;
		
			case 89:
				return 1281700;
		
			case 90:
				return 1308100;
		
			case 91:
				return 1334600;
		
			case 92:
				return 1361400;
		
			case 93:
				return 1388500;
		
			case 94:
				return 1415800;
		
			case 95:
				return 1443300;
		
			case 96:
				return 1471100;
		
			case 97:
				return 1499100;
		
			case 98:
				return 1527300;
		
			case 99:
				return 1555800;
		
			default:
				goto 0x534;
		}
	}
	else
	{
		num = iParam0 - 99;
		num2 = (num * (num + 1)) / 2;
		return 1555800 + (num * 28500) + (num2 * 50);
	}

	return 1555800;
}

int func_21(int iParam0) // Position - 0xD74
{
	return func_11(640, iParam0);
}

void func_22(Ped pedParam0) // Position - 0xD85
{
	int i;
	int num;

	num = 44;
	num.f_221 = 51;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(29))
		return;

	func_105(pedParam0, &num);
	i = 0;

	for (i = 0; i < num; i = i + 1)
	{
		if (func_23(pedParam0, num[i]))
		{
			func_144(29, 1);
			return;
		}
	}

	i = 0;

	for (i = 0; i < num.f_221; i = i + 1)
	{
		if (func_23(pedParam0, num.f_221[i]))
		{
			func_144(29, 1);
			return;
		}
	}

	return;
}

BOOL func_23(Ped pedParam0, Hash hParam1) // Position - 0xE14
{
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int unk5;
	int unk6;
	int unk7;
	Hash unk8;

	if (hParam1 == -61829581)
		return false;

	if (hParam1 == joaat("WEAPON_KNUCKLE"))
		return false;

	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	if (!WEAPON::HAS_PED_GOT_WEAPON(pedParam0, hParam1, false))
		return false;

	dlcWeaponIndex = func_104(hParam1, &unk);

	if (hParam1 != joaat("WEAPON_PISTOL") && hParam1 != joaat("WEAPON_APPISTOL") && hParam1 != joaat("WEAPON_COMBATPISTOL") && hParam1 != joaat("WEAPON_MICROSMG") && hParam1 != joaat("WEAPON_SMG") && hParam1 != joaat("WEAPON_PUMPSHOTGUN") && hParam1 != joaat("WEAPON_ASSAULTSHOTGUN") && hParam1 != joaat("WEAPON_SAWNOFFSHOTGUN") && hParam1 != joaat("WEAPON_ASSAULTRIFLE") && hParam1 != joaat("WEAPON_CARBINERIFLE") && hParam1 != joaat("WEAPON_ADVANCEDRIFLE") && hParam1 != joaat("WEAPON_SNIPERRIFLE") && hParam1 != joaat("WEAPON_HEAVYSNIPER") && hParam1 != joaat("WEAPON_MG") && hParam1 != joaat("WEAPON_COMBATMG") && hParam1 != joaat("WEAPON_GRENADELAUNCHER") && hParam1 != joaat("WEAPON_ASSAULTMG") && hParam1 != joaat("WEAPON_ASSAULTSMG") && hParam1 != joaat("WEAPON_ASSAULTSNIPER") && hParam1 != joaat("WEAPON_BULLPUPSHOTGUN") && hParam1 != joaat("WEAPON_PISTOL50") && dlcWeaponIndex == -1 || FILES::GET_NUM_DLC_WEAPON_COMPONENTS(dlcWeaponIndex) < 3)
		return false;

	num = 0;
	num2 = 0;
	num3 = 0;
	num4 = 0;

	for (i = 0; func_26(&hash, hParam1, i, false); i = i + 1)
	{
		if (hash.f_4 == joaat("WAPClip"))
			num2 = num2 + 1;
	
		if (hash.f_4 == joaat("WAPScop"))
			num = num + 1;
	
		if (func_24(pedParam0, hParam1, hash))
		{
			if (hash.f_4 == joaat("WAPClip"))
				num4 = hash.f_6;
			else if (hash.f_4 == joaat("WAPScop"))
				num3 = hash.f_6;
		}
		else if (hash.f_4 == joaat("WAPClip") || hash.f_4 == joaat("WAPScop") || hash.f_4 == joaat("WAPRail") || hash.f_4 == joaat("gun_root") || hash.f_4 == joaat("Gun_GripR"))
		{
		}
		else
		{
			return false;
		}
	}

	if (num > num3)
		return false;

	if (num2 > num4)
		return false;

	if (WEAPON::GET_WEAPON_TINT_COUNT(hParam1) > 0 && WEAPON::GET_PED_WEAPON_TINT_INDEX(pedParam0, hParam1) == 0)
		return false;

	return true;
}

BOOL func_24(Ped pedParam0, Hash hParam1, Hash hParam2) // Position - 0x1094
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))
		return WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(pedParam0, hParam1, hParam2);

	return false;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Ped pedParam0) // Position - 0x10B3
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
			return true;

	return false;
}

BOOL func_26(var uParam0, Hash hParam1, int iParam2, BOOL bParam3) // Position - 0x10D4
{
	int num;
	int unk;
	int unk2;
	int unk3;
	int unk4;
	int unk5;
	int unk6;
	int unk7;
	int unk8;
	int unk9;
	int unk10;
	int unk11;
	int unk12;
	int unk13;
	int unk14;
	int unk15;
	int unk16;
	var unk17;
	int unk18;

	num = 37;
	func_103(uParam0, 0, 989182658, 0, 0);

	switch (hParam1)
	{
		case joaat("WEAPON_PISTOL"):
			if (func_102(iLocal_54))
			{
				if (!func_99(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_PISTOL"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_PISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_PISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
					
						case 4:
							func_103(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 5:
							func_103(uParam0, joaat("COMPONENT_PISTOL_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_PISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_PISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 4:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_PISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_PISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 4:
						func_103(uParam0, joaat("COMPONENT_PISTOL_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_COMBATPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_COMBATPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_APPISTOL"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_APPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_APPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 4:
						func_103(uParam0, joaat("COMPONENT_APPISTOL_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
				
					case 5:
						func_103(uParam0, joaat("COMPONENT_APPISTOL_VARMOD_SECURITY"), joaat("gun_root"), 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_APPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_APPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 4:
						func_103(uParam0, joaat("COMPONENT_APPISTOL_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_MICROSMG"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_MICROSMG_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_MICROSMG_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
						break;
				
					case 4:
						func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 5:
						func_103(uParam0, joaat("COMPONENT_MICROSMG_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
				
					case 6:
						func_103(uParam0, joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"), joaat("gun_root"), 2, 0);
						break;
				
					case 7:
						func_103(uParam0, -1566778158, joaat("gun_root"), 3, 0);
						break;
				
					case 8:
						func_103(uParam0, 1694268374, joaat("gun_root"), 4, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_MICROSMG_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_MICROSMG_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
						break;
				
					case 4:
						func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 5:
						func_103(uParam0, joaat("COMPONENT_MICROSMG_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_SMG"):
			if (func_102(iLocal_54))
			{
				if (!func_99(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_SMG"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_SMG_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_SMG_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_SMG_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
					
						case 4:
							func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
					
						case 5:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02"), joaat("WAPScop"), 1, 0);
							break;
					
						case 6:
							func_103(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 7:
							func_103(uParam0, joaat("COMPONENT_SMG_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_SMG_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_SMG_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_SMG_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
					
						case 4:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02"), joaat("WAPScop"), 1, 0);
							break;
					
						case 5:
							func_103(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 6:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_SMG_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_SMG_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_SMG_CLIP_03"), joaat("WAPClip"), 3, 0);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 4:
						func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02"), joaat("WAPScop"), 1, 0);
						break;
				
					case 5:
						func_103(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 6:
						func_103(uParam0, joaat("COMPONENT_SMG_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_ASSAULTRIFLE"):
			if (func_102(iLocal_54))
			{
				if (!func_99(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_ASSAULTRIFLE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
					
						case 4:
							func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 5:
							func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
					
						case 6:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
							break;
					
						case 7:
							func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 8:
							func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 4:
							func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
					
						case 5:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
							break;
					
						case 6:
							func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 7:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
				
					case 4:
						func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 5:
						func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
						break;
				
					case 6:
						func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 7:
						func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_CARBINERIFLE"):
			if (func_102(iLocal_54))
			{
				if (!func_99(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_CARBINERIFLE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
					
						case 4:
							func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 5:
							func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
					
						case 6:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
					
						case 7:
							func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 8:
							func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
					
						case 9:
							func_103(uParam0, 1605520746, joaat("gun_root"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 4:
							func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
					
						case 5:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
					
						case 6:
							func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 7:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
				
					case 4:
						func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 5:
						func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
						break;
				
					case 6:
						func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 7:
						func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
				
					case 8:
						func_103(uParam0, 1605520746, joaat("gun_root"), 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
				
					case 4:
						func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 5:
						func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
						break;
				
					case 6:
						func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 7:
						func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPScop"), 1, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
					break;
			
				case 5:
					func_103(uParam0, joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_MG"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_MG_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_MG_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_02"), joaat("WAPScop"), 1, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_MG_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATMG"):
			if (func_102(iLocal_54))
			{
				if (!func_99(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_COMBATMG"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_COMBATMG_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_COMBATMG_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 4:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
					
						case 5:
							func_103(uParam0, joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_COMBATMG_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_COMBATMG_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
					
						case 4:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_COMBATMG_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_COMBATMG_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
						break;
				
					case 4:
						func_103(uParam0, joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_SNIPERRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPScop"), 1, 1);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPScop"), 2, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_HEAVYSNIPER"):
			if (func_102(iLocal_54))
			{
				if (!func_99(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_HEAVYSNIPER"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPScop"), 1, 1);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPScop"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPScop"), 1, 1);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPScop"), 2, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPScop"), 1, 1);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPScop"), 2, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPScop"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_MINIGUN"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_MINIGUN_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_ASSAULTSMG_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_ASSAULTSMG_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
					break;
			
				case 5:
					func_103(uParam0, joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_PISTOL50"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_PISTOL50_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_PISTOL50_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_PISTOL50_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
			
				case 6:
					func_103(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
			
				case 7:
					func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip"), 2, 0);
					break;
			
				case 8:
					func_103(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
			
				case 9:
					func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
			
				case 10:
					func_103(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
			
				case 11:
					func_103(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop_2"), 2, 0);
					break;
			
				case 12:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop_2"), 3, 0);
					break;
			
				case 13:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop_2"), 4, 0);
					break;
			
				case 14:
					func_103(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
			
				case 15:
					func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp_2"), 2, 0);
					break;
			
				case 16:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp_2"), 3, 0);
					break;
			
				case 17:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp_2"), 4, 0);
					break;
			
				case 18:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp_2"), 5, 0);
					break;
			
				case 19:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp_2"), 6, 0);
					break;
			
				case 20:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp_2"), 7, 0);
					break;
			
				case 21:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp_2"), 8, 0);
					break;
			
				case 22:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp_2"), 9, 0);
					break;
			
				case 23:
					func_103(uParam0, joaat("COMPONENT_AT_AR_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
			
				case 24:
					func_103(uParam0, joaat("COMPONENT_AT_AR_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
			
				case 25:
					func_103(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 26:
					func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 27:
					func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 28:
					func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 29:
					func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 30:
					func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 31:
					func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 32:
					func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 33:
					func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 34:
					func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 35:
					func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 36:
					func_103(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
			
				case 6:
					func_103(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
			
				case 7:
					func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip_2"), 2, 0);
					break;
			
				case 8:
					func_103(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
			
				case 9:
					func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 2, 0);
					break;
			
				case 10:
					func_103(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
			
				case 11:
					func_103(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop"), 2, 0);
					break;
			
				case 12:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop"), 3, 0);
					break;
			
				case 13:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop"), 4, 0);
					break;
			
				case 14:
					func_103(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
			
				case 15:
					func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp_2"), 2, 0);
					break;
			
				case 16:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp_2"), 3, 0);
					break;
			
				case 17:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp_2"), 4, 0);
					break;
			
				case 18:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp_2"), 5, 0);
					break;
			
				case 19:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp_2"), 6, 0);
					break;
			
				case 20:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp_2"), 7, 0);
					break;
			
				case 21:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp_2"), 8, 0);
					break;
			
				case 22:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp_2"), 9, 0);
					break;
			
				case 23:
					func_103(uParam0, joaat("COMPONENT_AT_CR_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
			
				case 24:
					func_103(uParam0, joaat("COMPONENT_AT_CR_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
			
				case 25:
					func_103(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 26:
					func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 27:
					func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 28:
					func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 29:
					func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 30:
					func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 31:
					func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 32:
					func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 33:
					func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 34:
					func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 35:
					func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 36:
					func_103(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_103(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
			
				case 6:
					func_103(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
			
				case 7:
					func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip_2"), 2, 0);
					break;
			
				case 8:
					func_103(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
			
				case 9:
					func_103(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop"), 2, 0);
					break;
			
				case 10:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_MK2"), joaat("WAPScop"), 3, 0);
					break;
			
				case 11:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop"), 4, 0);
					break;
			
				case 12:
					func_103(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
			
				case 13:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp"), 2, 0);
					break;
			
				case 14:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp"), 3, 0);
					break;
			
				case 15:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp"), 4, 0);
					break;
			
				case 16:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp"), 5, 0);
					break;
			
				case 17:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp"), 6, 0);
					break;
			
				case 18:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp"), 7, 0);
					break;
			
				case 19:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp"), 8, 0);
					break;
			
				case 20:
					func_103(uParam0, joaat("COMPONENT_AT_MG_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
			
				case 21:
					func_103(uParam0, joaat("COMPONENT_AT_MG_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
			
				case 22:
					func_103(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 23:
					func_103(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 24:
					func_103(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 25:
					func_103(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 26:
					func_103(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 27:
					func_103(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 28:
					func_103(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 29:
					func_103(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 30:
					func_103(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 31:
					func_103(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 32:
					func_103(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 33:
					func_103(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"), joaat("WAPClip"), 6, 0);
					break;
			
				case 6:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_MK2"), joaat("WAPScop"), 1, 0);
					break;
			
				case 7:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPScop"), 2, 1);
					break;
			
				case 8:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_NV"), joaat("WAPScop"), 3, 0);
					break;
			
				case 9:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_THERMAL"), joaat("WAPScop"), 4, 0);
					break;
			
				case 10:
					func_103(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
			
				case 11:
					func_103(uParam0, joaat("COMPONENT_AT_SR_SUPP_03"), joaat("WAPSupp"), 2, 0);
					break;
			
				case 12:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_08"), joaat("WAPSupp"), 3, 0);
					break;
			
				case 13:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_09"), joaat("WAPSupp"), 4, 0);
					break;
			
				case 14:
					func_103(uParam0, joaat("COMPONENT_AT_SR_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
			
				case 15:
					func_103(uParam0, joaat("COMPONENT_AT_SR_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
			
				case 16:
					func_103(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 17:
					func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 18:
					func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 19:
					func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 20:
					func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 21:
					func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 22:
					func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 23:
					func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 24:
					func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 25:
					func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 26:
					func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 27:
					func_103(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_103(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
			
				case 6:
					func_103(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
			
				case 7:
					func_103(uParam0, joaat("COMPONENT_AT_PI_RAIL"), joaat("WAPScop"), 2, 0);
					break;
			
				case 8:
					func_103(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
			
				case 9:
					func_103(uParam0, joaat("COMPONENT_AT_PI_FLSH_02"), joaat("WAPFlshLasr"), 2, 0);
					break;
			
				case 10:
					func_103(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
			
				case 11:
					func_103(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSupp"), 2, 0);
					break;
			
				case 12:
					func_103(uParam0, joaat("COMPONENT_AT_PI_COMP"), joaat("WAPSupp"), 3, 0);
					break;
			
				case 13:
					func_103(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 14:
					func_103(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 15:
					func_103(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 16:
					func_103(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 17:
					func_103(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 18:
					func_103(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 19:
					func_103(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 20:
					func_103(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 21:
					func_103(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 22:
					func_103(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 23:
					func_103(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 24:
					func_103(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			
				case 25:
					func_103(uParam0, 1141184690, joaat("gun_root"), 13, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_103(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
			
				case 6:
					func_103(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
			
				case 7:
					func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
			
				case 8:
					func_103(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
			
				case 9:
					func_103(uParam0, joaat("COMPONENT_AT_SIGHTS_SMG"), joaat("WAPScop"), 2, 0);
					break;
			
				case 10:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"), joaat("WAPScop"), 3, 0);
					break;
			
				case 11:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"), joaat("WAPScop"), 4, 0);
					break;
			
				case 12:
					func_103(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
			
				case 13:
					func_103(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp_2"), 1, 0);
					break;
			
				case 14:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp_2"), 2, 0);
					break;
			
				case 15:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp_2"), 3, 0);
					break;
			
				case 16:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp_2"), 4, 0);
					break;
			
				case 17:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp_2"), 5, 0);
					break;
			
				case 18:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp_2"), 6, 0);
					break;
			
				case 19:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp_2"), 7, 0);
					break;
			
				case 20:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp_2"), 8, 0);
					break;
			
				case 21:
					func_103(uParam0, joaat("COMPONENT_AT_SB_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
			
				case 22:
					func_103(uParam0, joaat("COMPONENT_AT_SB_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
			
				case 23:
					func_103(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 24:
					func_103(uParam0, joaat("COMPONENT_SMG_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 25:
					func_103(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 26:
					func_103(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 27:
					func_103(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 28:
					func_103(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 29:
					func_103(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 30:
					func_103(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 31:
					func_103(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 32:
					func_103(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 33:
					func_103(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 34:
					func_103(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_PUMPSHOTGUN"):
			if (func_102(iLocal_54))
			{
				if (!func_99(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_PUMPSHOTGUN"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_AT_SR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
					
						case 4:
							func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"), joaat("gun_root"), 2, 0);
							break;
					
						case 5:
							func_103(uParam0, 330905451, joaat("gun_root"), 3, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_AT_SR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_AT_SR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"), joaat("gun_root"), 2, 0);
						break;
				
					case 4:
						func_103(uParam0, 330905451, joaat("gun_root"), 3, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_AT_SR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_SPECIALCARBINE"):
			if (func_102(iLocal_54))
			{
				if (!func_99(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_SPECIALCARBINE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
					
						case 4:
							func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
					
						case 5:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
					
						case 6:
							func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 7:
							func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 8:
							func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
					
						case 4:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
					
						case 5:
							func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 6:
							func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 7:
							func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
					
						case 8:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_03"), joaat("WAPClip"), 3, 0);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
						break;
				
					case 4:
						func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
						break;
				
					case 5:
						func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 6:
						func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
				
					case 7:
						func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_SNSPISTOL"):
			if (func_102(iLocal_54))
			{
				if (!func_99(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_SNSPISTOL"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_MARKSMANRIFLE"):
			if (func_102(iLocal_54))
			{
				if (!func_99(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_MARKSMANRIFLE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"), joaat("WAPScop"), 1, 1);
							break;
					
						case 4:
							func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
					
						case 5:
							func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 6:
							func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 7:
							func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"), joaat("WAPScop"), 1, 1);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
					
						case 4:
							func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 5:
							func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 6:
							func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
					
						case 7:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"), joaat("WAPScop"), 1, 1);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
						break;
				
					case 4:
						func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 5:
						func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
				
					case 6:
						func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_REVOLVER"):
			if (func_102(iLocal_54))
			{
				if (!func_99(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_REVOLVER"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_REVOLVER_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_BOSS"), joaat("gun_root"), 1, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_GOON"), joaat("gun_root"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_REVOLVER_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_BOSS"), joaat("gun_root"), 1, 0);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_GOON"), joaat("gun_root"), 2, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_REVOLVER_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_BOSS"), joaat("gun_root"), 1, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_GOON"), joaat("gun_root"), 2, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_BULLPUPRIFLE"):
			if (func_102(iLocal_54))
			{
				if (!func_99(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_BULLPUPRIFLE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
					
						case 4:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPScop"), 1, 0);
							break;
					
						case 5:
							func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 6:
							func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 7:
							func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
					
						case 1:
							func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
					
						case 2:
							func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
					
						case 3:
							func_103(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPScop"), 1, 0);
							break;
					
						case 4:
							func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
					
						case 5:
							func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
					
						case 6:
							func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"), joaat("gun_root"), 1, 0);
							break;
					
						case 7:
							func_103(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPScop"), 1, 0);
						break;
				
					case 4:
						func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 5:
						func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
				
					case 6:
						func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_103(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
			
				case 6:
					func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
			
				case 7:
					func_103(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
			
				case 8:
					func_103(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop"), 2, 0);
					break;
			
				case 9:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop"), 3, 0);
					break;
			
				case 10:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_MK2"), joaat("WAPScop"), 4, 0);
					break;
			
				case 11:
					func_103(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
			
				case 12:
					func_103(uParam0, joaat("COMPONENT_AT_SR_SUPP_03"), joaat("WAPSupp"), 2, 0);
					break;
			
				case 13:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_08"), joaat("WAPSupp"), 3, 0);
					break;
			
				case 14:
					func_103(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 15:
					func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 16:
					func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 17:
					func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 18:
					func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 19:
					func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 20:
					func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 21:
					func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 22:
					func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 23:
					func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 24:
					func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 25:
					func_103(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
			
				case 6:
					func_103(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
			
				case 7:
					func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 2, 0);
					break;
			
				case 8:
					func_103(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
			
				case 9:
					func_103(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop_2"), 2, 0);
					break;
			
				case 10:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop_2"), 3, 0);
					break;
			
				case 11:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop_2"), 4, 0);
					break;
			
				case 12:
					func_103(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
			
				case 13:
					func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 2, 0);
					break;
			
				case 14:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp"), 3, 0);
					break;
			
				case 15:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp"), 4, 0);
					break;
			
				case 16:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp"), 5, 0);
					break;
			
				case 17:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp"), 6, 0);
					break;
			
				case 18:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp"), 7, 0);
					break;
			
				case 19:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp"), 8, 0);
					break;
			
				case 20:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp"), 9, 0);
					break;
			
				case 21:
					func_103(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
			
				case 22:
					func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip"), 2, 0);
					break;
			
				case 23:
					func_103(uParam0, joaat("COMPONENT_AT_SC_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
			
				case 24:
					func_103(uParam0, joaat("COMPONENT_AT_SC_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
			
				case 25:
					func_103(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 26:
					func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 27:
					func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 28:
					func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 29:
					func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 30:
					func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 31:
					func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 32:
					func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 33:
					func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 34:
					func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 35:
					func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 36:
					func_103(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_SNSPISTOL_MK2"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_103(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
			
				case 6:
					func_103(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
			
				case 7:
					func_103(uParam0, joaat("COMPONENT_AT_PI_FLSH_03"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
			
				case 8:
					func_103(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
			
				case 9:
					func_103(uParam0, joaat("COMPONENT_AT_PI_RAIL_02"), joaat("WAPScop"), 2, 0);
					break;
			
				case 10:
					func_103(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
			
				case 11:
					func_103(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSupp_2"), 2, 0);
					break;
			
				case 12:
					func_103(uParam0, joaat("COMPONENT_AT_PI_COMP_02"), joaat("WAPSupp_2"), 3, 0);
					break;
			
				case 13:
					func_103(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 14:
					func_103(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 15:
					func_103(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 16:
					func_103(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 17:
					func_103(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 18:
					func_103(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 19:
					func_103(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 20:
					func_103(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 21:
					func_103(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 22:
					func_103(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 23:
					func_103(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 24:
					func_103(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
			
				case 6:
					func_103(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
			
				case 7:
					func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 2, 0);
					break;
			
				case 8:
					func_103(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop_2"), 2, 0);
					break;
			
				case 9:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop_2"), 3, 0);
					break;
			
				case 10:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"), joaat("WAPScop_2"), 4, 1);
					break;
			
				case 11:
					func_103(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
			
				case 12:
					func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp_2"), 2, 0);
					break;
			
				case 13:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp_2"), 3, 0);
					break;
			
				case 14:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp_2"), 4, 0);
					break;
			
				case 15:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp_2"), 5, 0);
					break;
			
				case 16:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp_2"), 6, 0);
					break;
			
				case 17:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp_2"), 7, 0);
					break;
			
				case 18:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp_2"), 8, 0);
					break;
			
				case 19:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp_2"), 9, 0);
					break;
			
				case 20:
					func_103(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
			
				case 21:
					func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip_2"), 2, 0);
					break;
			
				case 22:
					func_103(uParam0, joaat("COMPONENT_AT_MRFL_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
			
				case 23:
					func_103(uParam0, joaat("COMPONENT_AT_MRFL_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
			
				case 24:
					func_103(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 25:
					func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 26:
					func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 27:
					func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 28:
					func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 29:
					func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 30:
					func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 31:
					func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 32:
					func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 33:
					func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 34:
					func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 35:
					func_103(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_REVOLVER_MK2"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_103(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
			
				case 6:
					func_103(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop"), 2, 0);
					break;
			
				case 7:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop"), 3, 0);
					break;
			
				case 8:
					func_103(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
			
				case 9:
					func_103(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 2, 0);
					break;
			
				case 10:
					func_103(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
			
				case 11:
					func_103(uParam0, joaat("COMPONENT_AT_PI_COMP_03"), joaat("WAPSupp"), 2, 0);
					break;
			
				case 12:
					func_103(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 13:
					func_103(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 14:
					func_103(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 15:
					func_103(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 16:
					func_103(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 17:
					func_103(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 18:
					func_103(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 19:
					func_103(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 20:
					func_103(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 21:
					func_103(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 22:
					func_103(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 23:
					func_103(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
			
				case 5:
					func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
			
				case 6:
					func_103(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
			
				case 7:
					func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 2, 0);
					break;
			
				case 8:
					func_103(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
			
				case 9:
					func_103(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop_2"), 2, 0);
					break;
			
				case 10:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"), joaat("WAPScop_2"), 3, 0);
					break;
			
				case 11:
					func_103(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_MK2"), joaat("WAPScop_2"), 4, 0);
					break;
			
				case 12:
					func_103(uParam0, joaat("COMPONENT_AT_BP_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
			
				case 13:
					func_103(uParam0, joaat("COMPONENT_AT_BP_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
			
				case 14:
					func_103(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
			
				case 15:
					func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 2, 0);
					break;
			
				case 16:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp"), 3, 0);
					break;
			
				case 17:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp"), 4, 0);
					break;
			
				case 18:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp"), 5, 0);
					break;
			
				case 19:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp"), 6, 0);
					break;
			
				case 20:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp"), 7, 0);
					break;
			
				case 21:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp"), 8, 0);
					break;
			
				case 22:
					func_103(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp"), 9, 0);
					break;
			
				case 23:
					func_103(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
			
				case 24:
					func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip"), 2, 0);
					break;
			
				case 25:
					func_103(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
			
				case 26:
					func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
			
				case 27:
					func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
			
				case 28:
					func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
			
				case 29:
					func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
			
				case 30:
					func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
			
				case 31:
					func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
			
				case 32:
					func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
			
				case 33:
					func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
			
				case 34:
					func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
			
				case 35:
					func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
			
				case 36:
					func_103(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_RAYPISTOL"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_CERAMICPISTOL"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_CERAMICPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_CERAMICPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_CERAMICPISTOL_SUPP"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_HEAVYRIFLE"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_HEAVYRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_HEAVYRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_HEAVYRIFLE_SIGHT_01"), joaat("WAPScop"), 1, 0);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 2, 0);
						break;
				
					case 4:
						func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 5:
						func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 6:
						func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
				
					case 7:
						func_103(uParam0, joaat("COMPONENT_HEAVYRIFLE_CAMO1"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, joaat("COMPONENT_HEAVYRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
				
					case 1:
						func_103(uParam0, joaat("COMPONENT_HEAVYRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
				
					case 2:
						func_103(uParam0, joaat("COMPONENT_HEAVYRIFLE_SIGHT_01"), joaat("WAPScop"), 1, 0);
						break;
				
					case 3:
						func_103(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 2, 0);
						break;
				
					case 4:
						func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
				
					case 5:
						func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
				
					case 6:
						func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
				}
			}
			break;
	
		case joaat("WEAPON_TACTICALRIFLE"):
			switch (iParam2)
			{
				case 0:
					func_103(uParam0, joaat("COMPONENT_TACTICALRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			
				case 1:
					func_103(uParam0, joaat("COMPONENT_TACTICALRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
			
				case 2:
					func_103(uParam0, joaat("COMPONENT_AT_AR_FLSH_REH"), joaat("WAPFlshLasr"), 1, 0);
					break;
			
				case 3:
					func_103(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
					break;
			
				case 4:
					func_103(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
					break;
			}
			break;
	
		case joaat("WEAPON_KNIFE"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				num2 = func_86(hParam1, &num);
			
				if (num2 > 0 && iParam2 >= 0 && iParam2 < num)
				{
					switch (num[iParam2])
					{
						case 370527443:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 1, 0);
							break;
					
						case 1109907117:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 2, 0);
							break;
					
						case 2055456612:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 3, 0);
							break;
					
						case 1690606566:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 4, 0);
							break;
					
						case -1633316949:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 5, 0);
							break;
					
						case -1461476313:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 6, 0);
							break;
					
						case -1770422457:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 7, 0);
							break;
					
						case -2059739958:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 8, 0);
							break;
					
						case -1280001599:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 9, 0);
							break;
					
						case -922885037:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 10, 0);
							break;
					}
				}
			}
			break;
	
		case joaat("WEAPON_BAT"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				num2 = func_86(hParam1, &num);
			
				if (num2 > 0 && iParam2 >= 0 && iParam2 < num)
				{
					switch (num[iParam2])
					{
						case 716207715:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 1, 0);
							break;
					
						case 446271089:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 2, 0);
							break;
					
						case 1045616099:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 3, 0);
							break;
					
						case 1336277129:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 4, 0);
							break;
					
						case -513369076:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 5, 0);
							break;
					
						case -447700000:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 6, 0);
							break;
					
						case -149207179:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 7, 0);
							break;
					
						case 166784288:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 8, 0);
							break;
					
						case 2068729789:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 9, 0);
							break;
					
						case 1761389338:
							func_103(uParam0, num[iParam2], joaat("gun_root"), 10, 0);
							break;
					}
				}
			}
			break;
	
		case joaat("WEAPON_RPG"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_103(uParam0, -1240142720, joaat("gun_root"), 1, 0);
						break;
				}
			}
			break;
	
		default:
			dlcWeaponIndex = func_104(hParam1, &unk38);
		
			if (dlcWeaponIndex != -1)
			{
				for (i = 0; i < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(dlcWeaponIndex); i = i + 1)
				{
					if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(dlcWeaponIndex, i, &ComponentDataPtr))
					{
						if (!func_85(ComponentDataPtr.f_3))
						{
							if (ComponentDataPtr == joaat("WAPClip") || ComponentDataPtr == joaat("WAPClip_2"))
								num4 = num4 + 1;
							else if (ComponentDataPtr == joaat("WAPFlshLasr") || ComponentDataPtr == joaat("WAPFlshLasr_2"))
								num5 = num5 + 1;
							else if (ComponentDataPtr == joaat("WAPScop") || ComponentDataPtr == joaat("WAPScop_2"))
								num6 = num6 + 1;
							else if (ComponentDataPtr == joaat("WAPRail") || ComponentDataPtr == joaat("WAPRail_2"))
								num7 = num7 + 1;
							else if (ComponentDataPtr == joaat("WAPGrip") || ComponentDataPtr == joaat("WAPGrip_2"))
								num8 = num8 + 1;
							else if (ComponentDataPtr == joaat("WAPSupp") || ComponentDataPtr == joaat("WAPSupp_2"))
								num9 = num9 + 1;
							else if (ComponentDataPtr == 1731751835)
								num10 = num10 + 1;
							else if (ComponentDataPtr == joaat("gun_root"))
								num11 = num11 + 1;
							else if (ComponentDataPtr == joaat("Gun_GripR"))
								num12 = num12 + 1;
							else if (ComponentDataPtr == joaat("WAPBarrel"))
								num13 = num13 + 1;
							else
								num14 = num14 + 1;
						
							if (num15 == iParam2)
							{
								if (ComponentDataPtr == joaat("WAPClip") || ComponentDataPtr == joaat("WAPClip_2"))
									num3 = num4;
								else if (ComponentDataPtr == joaat("WAPFlshLasr") || ComponentDataPtr == joaat("WAPFlshLasr_2"))
									num3 = num5;
								else if (ComponentDataPtr == joaat("WAPScop") || ComponentDataPtr == joaat("WAPScop_2"))
									num3 = num6;
								else if (ComponentDataPtr == joaat("WAPRail") || ComponentDataPtr == joaat("WAPRail_2"))
									num3 = num7;
								else if (ComponentDataPtr == joaat("WAPGrip") || ComponentDataPtr == joaat("WAPGrip_2"))
									num3 = num8;
								else if (ComponentDataPtr == joaat("WAPSupp") || ComponentDataPtr == joaat("WAPSupp_2"))
									num3 = num9;
								else if (ComponentDataPtr == 1731751835)
									num3 = num10;
								else if (ComponentDataPtr == joaat("gun_root"))
									num3 = num11;
								else if (ComponentDataPtr == joaat("Gun_GripR"))
									num3 = num12;
								else if (ComponentDataPtr == joaat("WAPBarrel"))
									num3 = num13;
								else
									num3 = num14;
							
								func_103(uParam0, ComponentDataPtr.f_3, ComponentDataPtr, num3, ComponentDataPtr.f_1);
							}
						
							num15 = num15 + 1;
						}
					}
				}
			}
			break;
	}

	if (bParam3)
		uParam0->f_2 = func_27(hParam1, *uParam0);

	return uParam0->f_4 != 989182658;
}

int func_27(Hash hParam0, int iParam1) // Position - 0x6659
{
	int price;
	float num;
	int dlcWeaponIndex;
	int i;
	var unk;
	var unk2;
	int unk3;
	int unk4;
	var unk5;
	var unk6;
	var unk7;
	var unk8;
	float unk9;

	price = 0;
	num = 2.5f;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		num = 2.5f;
	
		switch (hParam0)
		{
			case joaat("WEAPON_PISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL_CLIP_01"):
						price = 120;
						break;
				
					case joaat("COMPONENT_PISTOL_CLIP_02"):
						price = 155;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						price = 189;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						price = 729;
						break;
				
					case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
						price = 18600;
						break;
				}
				break;
		
			case joaat("WEAPON_COMBATPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
						price = 136;
						break;
				
					case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
						price = 159;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						price = 189;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						price = 735;
						break;
				
					case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
						price = 14500;
						break;
				}
				break;
		
			case joaat("WEAPON_APPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_APPISTOL_CLIP_01"):
						price = 145;
						break;
				
					case joaat("COMPONENT_APPISTOL_CLIP_02"):
						price = 165;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						price = 185;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						price = 730;
						break;
				
					case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
						price = 15800;
						break;
				}
				break;
		
			case joaat("WEAPON_MICROSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MICROSMG_CLIP_01"):
						price = 120;
						break;
				
					case joaat("COMPONENT_MICROSMG_CLIP_02"):
						price = 137;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						price = 190;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						price = 549;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						price = 775;
						break;
				
					case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
						price = 15100;
						break;
				}
				break;
		
			case joaat("WEAPON_SMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SMG_CLIP_01"):
						price = 119;
						break;
				
					case joaat("COMPONENT_SMG_CLIP_02"):
						price = 134;
						break;
				
					case joaat("COMPONENT_SMG_CLIP_03"):
						price = -1;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = 210;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
						price = 549;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						price = 815;
						break;
				
					case joaat("COMPONENT_SMG_VARMOD_LUXE"):
						price = 19300;
						break;
				}
				break;
		
			case joaat("WEAPON_ASSAULTRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
						price = 120;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
						price = 129;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
						price = -1;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						price = 159;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = 189;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						price = 565;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						price = 810;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
						price = 14400;
						break;
				}
				break;
		
			case joaat("WEAPON_CARBINERIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
						price = 99;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
						price = 105;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
						price = -1;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						price = 132;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = 150;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						price = 450;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						price = 815;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
						price = 17900;
						break;
				}
				break;
		
			case joaat("WEAPON_ADVANCEDRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
						price = 110;
						break;
				
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
						price = 124;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = 159;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						price = 450;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						price = 812;
						break;
				
					case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
						price = 16500;
						break;
				}
				break;
		
			case joaat("WEAPON_MG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MG_CLIP_01"):
						price = 135;
						break;
				
					case joaat("COMPONENT_MG_CLIP_02"):
						price = 145;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
						price = 450;
						break;
				
					case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
						price = 15600;
						break;
				}
				break;
		
			case joaat("WEAPON_COMBATMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATMG_CLIP_01"):
						price = 119;
						break;
				
					case joaat("COMPONENT_COMBATMG_CLIP_02"):
						price = 126;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						price = 129;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						price = 559;
						break;
				
					case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
						price = 14000;
						break;
				}
				break;
		
			case joaat("WEAPON_PUMPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = 189;
						break;
				
					case joaat("COMPONENT_AT_SR_SUPP"):
						price = 975;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
						price = 16900;
						break;
				}
				break;
		
			case joaat("WEAPON_ASSAULTSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
						price = 129;
						break;
				
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
						price = 139;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						price = 150;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = 225;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						price = 899;
						break;
				}
				break;
		
			case joaat("WEAPON_SNIPERRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
						price = -1;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						price = 559;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						price = 975;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						price = 920;
						break;
				
					case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
						price = 13000;
						break;
				}
				break;
		
			case joaat("WEAPON_HEAVYSNIPER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
						price = -1;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						price = 575;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						price = 999;
						break;
				}
				break;
		
			case joaat("WEAPON_GRENADELAUNCHER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						price = 128;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = 185;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						price = 525;
						break;
				}
				break;
		
			case joaat("WEAPON_MINIGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MINIGUN_CLIP_01"):
						price = -1;
						break;
				}
				break;
		
			case joaat("WEAPON_ASSAULTSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
						price = 110;
						break;
				
					case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
						price = 9700;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = 2275;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						price = 10875;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						price = 12400;
						break;
				
					case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
						price = 17600;
						break;
				}
			
				if (_IS_EXCLUSIVE_CONTENT_UNLOCKED() && func_83() || func_82())
					price = 0;
				break;
		
			case joaat("WEAPON_BULLPUPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						price = 4100;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = 2300;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						price = 12450;
						break;
				}
			
				if (_IS_EXCLUSIVE_CONTENT_UNLOCKED() && func_83() || func_82())
					price = 0;
				break;
		
			case joaat("WEAPON_PISTOL50"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL50_CLIP_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_PISTOL50_CLIP_02"):
						price = 9500;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						price = 2000;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						price = 12250;
						break;
				
					case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
						price = 20000;
						break;
				}
			
				if (_IS_EXCLUSIVE_CONTENT_UNLOCKED() && func_83() || func_82())
					price = 0;
				break;
		
			case joaat("WEAPON_SAWNOFFSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
						price = 13700;
						break;
				}
				break;
		
			case joaat("WEAPON_MARKSMANRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
						price = 3612;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
						price = 0;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = 1020;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						price = 5000;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						price = 1760;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
						price = 17200;
						break;
				}
				break;
		
			case joaat("WEAPON_HEAVYPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
						price = 3680;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						price = 710;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						price = 4800;
						break;
				
					case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
						price = 12000;
						break;
				}
				break;
		
			case joaat("WEAPON_KNUCKLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
						price = 4900;
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
						price = 5600;
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
						price = 5500;
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
						price = 5200;
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
						price = 4600;
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
						price = 4700;
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
						price = 4800;
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
						price = 4300;
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
						price = 4000;
						break;
				}
				break;
		
			case joaat("WEAPON_BULLPUPRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
						price = 108;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
						price = 9950;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = 2575;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						price = 11350;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						price = 12500;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						price = 4275;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
						price = 16600;
						break;
				}
				break;
		
			case joaat("WEAPON_SNSPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
						price = 29;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
						price = 9150;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
						price = 13900;
						break;
				}
				break;
		
			case joaat("WEAPON_SPECIALCARBINE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
						price = 108;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
						price = 9975;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
						price = -1;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = 2525;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						price = 11550;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						price = 12500;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
						price = 18000;
						break;
				}
				break;
		
			case joaat("WEAPON_MACHINEPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
						price = 3680;
						break;
				
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
						price = -1;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						price = 4840;
						break;
				}
				break;
		
			default:
				dlcWeaponIndex = func_104(hParam0, &unk);
			
				if (dlcWeaponIndex != -1)
				{
					for (i = 0; i < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(dlcWeaponIndex); i = i + 1)
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(dlcWeaponIndex, i, &ComponentDataPtr))
						{
							if (!func_85(ComponentDataPtr.f_3))
							{
								if (ComponentDataPtr.f_3 == iParam1)
								{
									num = 1f;
								
									if (!func_80(iParam1))
										ComponentDataPtr.f_5 = -1;
								
									if (ComponentDataPtr.f_5 == -1)
										price = -1;
									else
										price = ComponentDataPtr.f_5;
								
									if (hParam0 == joaat("WEAPON_HAMMER"))
										if (_IS_EXCLUSIVE_CONTENT_UNLOCKED() && func_83() || func_82())
											price = 0;
								}
							}
						}
					}
				}
				break;
		}
	}
	else
	{
		num = 2.5f;
	
		switch (hParam0)
		{
			case joaat("WEAPON_PISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL_CLIP_01"):
						price = 120;
						break;
				
					case joaat("COMPONENT_PISTOL_CLIP_02"):
						price = 9175;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2895);
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						price = 1675;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4347);
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						price = 12050;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4348);
						break;
				
					case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
						price = Global_262145.f_11212;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4425);
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						price = Global_262145.f_21373;
						break;
				}
				break;
		
			case joaat("WEAPON_COMBATPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
						price = 136;
						break;
				
					case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
						price = Global_262145.f_21259;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2896);
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						price = 1825;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4349);
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						price = Global_262145.f_21260;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4350);
						break;
				
					case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
						price = Global_262145.f_12604;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4420);
						break;
				}
				break;
		
			case joaat("WEAPON_APPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_APPISTOL_CLIP_01"):
						price = 145;
						break;
				
					case joaat("COMPONENT_APPISTOL_CLIP_02"):
						price = 9400;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2898);
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						price = 1975;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4351);
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						price = 12200;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4352);
						break;
				
					case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
						price = Global_262145.f_11211;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4414);
						break;
				
					case joaat("COMPONENT_APPISTOL_VARMOD_SECURITY"):
						price = Global_262145.f_32220;
						break;
				}
				break;
		
			case joaat("WEAPON_MICROSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MICROSMG_CLIP_01"):
						price = 120;
						break;
				
					case joaat("COMPONENT_MICROSMG_CLIP_02"):
						price = 9325;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2899);
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						price = 1900;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4355);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						price = 10800;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4357);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						price = 12150;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4356);
						break;
				
					case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
						price = Global_262145.f_11215;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4424);
						break;
				
					case joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"):
						price = Global_262145.f_32219;
						break;
				
					case -1566778158:
						price = 0;
						break;
				
					case 1694268374:
						price = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_SMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SMG_CLIP_01"):
						price = 119;
						break;
				
					case joaat("COMPONENT_SMG_CLIP_02"):
						price = 9475;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2900);
						break;
				
					case joaat("COMPONENT_SMG_CLIP_03"):
						price = Global_262145.f_16767;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = 2050;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4358);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
						price = 10825;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4360);
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						price = 12250;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4359);
						break;
				
					case joaat("COMPONENT_SMG_VARMOD_LUXE"):
						price = Global_262145.f_11214;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4429);
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						price = Global_262145.f_21374;
						break;
				}
				break;
		
			case joaat("WEAPON_ASSAULTRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
						price = 120;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
						price = 9550;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2902);
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
						price = Global_262145.f_16762;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						price = 4200;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4368);
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = 2125;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4365);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						price = 10850;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4367);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						price = 12300;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4366);
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
						price = Global_262145.f_11208;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4415);
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						price = Global_262145.f_21376;
						break;
				}
				break;
		
			case joaat("WEAPON_CARBINERIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
						price = 99;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
						price = 9775;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2903);
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
						price = Global_262145.f_16761;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						price = 4350;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4376);
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = 2350;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4373);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						price = 10900;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4375);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						price = 12450;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4374);
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
						price = Global_262145.f_11210;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4418);
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						price = Global_262145.f_21377;
						break;
				
					case 1605520746:
						price = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_ADVANCEDRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
						price = 110;
						break;
				
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
						price = 9925;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2905);
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = 2425;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4378);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						price = 10950;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4380);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						price = 12500;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4379);
						break;
				
					case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
						price = Global_262145.f_11209;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4413);
						break;
				}
				break;
		
			case joaat("WEAPON_MG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MG_CLIP_01"):
						price = 135;
						break;
				
					case joaat("COMPONENT_MG_CLIP_02"):
						price = 9850;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2906);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
						price = 10925;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4381);
						break;
				
					case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
						price = Global_262145.f_12605;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4423);
						break;
				}
				break;
		
			case joaat("WEAPON_COMBATMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATMG_CLIP_01"):
						price = 119;
						break;
				
					case joaat("COMPONENT_COMBATMG_CLIP_02"):
						price = 10000;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2907);
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						price = 4425;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4403);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						price = 10975;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4404);
						break;
				
					case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
						price = Global_262145.f_12606;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4419);
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						price = Global_262145.f_21375;
						break;
				}
				break;
		
			case joaat("WEAPON_PUMPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = 1750;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4385);
						break;
				
					case joaat("COMPONENT_AT_SR_SUPP"):
						price = 12350;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4386);
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
						price = Global_262145.f_12601;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4427);
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						price = Global_262145.f_23113;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"):
						price = Global_262145.f_32217;
						break;
				
					case 330905451:
						price = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_ASSAULTSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
						price = 129;
						break;
				
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
						price = 9625;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2909);
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						price = 4275;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4389);
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = 2200;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4390);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						price = 12350;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4391);
						break;
				}
				break;
		
			case joaat("WEAPON_SNIPERRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
						price = -1;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						price = 12400;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4392);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						price = 12500;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4393);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						price = 12050;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4394);
						break;
				
					case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
						price = Global_262145.f_11217;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4430);
						break;
				}
				break;
		
			case joaat("WEAPON_HEAVYSNIPER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
						price = -1;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						price = 99;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4395);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						price = 12500;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4396);
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						price = Global_262145.f_21378;
						break;
				}
				break;
		
			case joaat("WEAPON_GRENADELAUNCHER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						price = 4500;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4405);
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = 2500;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4401);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						price = 11000;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4402);
						break;
				}
				break;
		
			case joaat("WEAPON_MINIGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MINIGUN_CLIP_01"):
						price = -1;
						break;
				}
				break;
		
			case joaat("WEAPON_ASSAULTSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
						price = 110;
						break;
				
					case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
						price = 9700;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2901);
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = 2275;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4361);
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						price = 10875;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4364);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						price = 12400;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4362);
						break;
				
					case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
						price = Global_262145.f_12602;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4363);
						break;
				}
				break;
		
			case joaat("WEAPON_GUSENBERG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_GUSENBERG_CLIP_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_GUSENBERG_CLIP_02"):
						price = Global_262145.f_7144;
						break;
				}
				break;
		
			case joaat("WEAPON_SNSPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
						price = Global_262145.f_7811;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
						price = Global_262145.f_12603;
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						price = Global_262145.f_23118;
						break;
				}
				break;
		
			case joaat("WEAPON_SPECIALCARBINE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
						price = Global_262145.f_7816;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
						price = Global_262145.f_16764;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = Global_262145.f_7819;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						price = Global_262145.f_7815;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						price = Global_262145.f_7813;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						price = Global_262145.f_7818;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
						price = Global_262145.f_12607;
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						price = Global_262145.f_23114;
						break;
				}
				break;
		
			case joaat("WEAPON_HEAVYPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
						price = Global_262145.f_7817;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						price = Global_262145.f_7821;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						price = Global_262145.f_7814;
						break;
				
					case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
						price = Global_262145.f_7841;
						break;
				}
				break;
		
			case joaat("WEAPON_BULLPUPRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
						price = Global_262145.f_7824;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = Global_262145.f_7827;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						price = Global_262145.f_7822;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						price = Global_262145.f_7823;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						price = Global_262145.f_7825;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
						price = Global_262145.f_12608;
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						price = Global_262145.f_23117;
						break;
				}
				break;
		
			case joaat("WEAPON_VINTAGEPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
						price = Global_262145.f_8299;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						price = Global_262145.f_8300;
						break;
				}
				break;
		
			case joaat("WEAPON_HEAVYSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
						price = Global_262145.f_9029;
						break;
				
					case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
						price = Global_262145.f_16768;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = Global_262145.f_9030;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						price = Global_262145.f_9031;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						price = Global_262145.f_9032;
						break;
				}
				break;
		
			case joaat("WEAPON_MARKSMANRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
						price = Global_262145.f_9035;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = Global_262145.f_9036;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						price = Global_262145.f_9038;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						price = Global_262145.f_9039;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
						price = Global_262145.f_9040;
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						price = Global_262145.f_23115;
						break;
				}
				break;
		
			case joaat("WEAPON_BULLPUPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						price = 4100;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_15312);
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = 2300;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4387);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						price = 12450;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4388);
						break;
				}
			
				if (_IS_EXCLUSIVE_CONTENT_UNLOCKED() && func_83() || func_82())
					price = 0;
				break;
		
			case joaat("WEAPON_PISTOL50"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL50_CLIP_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_PISTOL50_CLIP_02"):
						price = 9500;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2897);
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						price = 2000;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4353);
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						price = 12250;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4354);
						break;
				
					case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
						price = Global_262145.f_11213;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4426);
						break;
				}
			
				if (_IS_EXCLUSIVE_CONTENT_UNLOCKED() && func_83() || func_82())
					price = 0;
				break;
		
			case joaat("WEAPON_SAWNOFFSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
						price = Global_262145.f_11216;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4428);
						break;
				}
				break;
		
			case joaat("WEAPON_KNUCKLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
						price = Global_262145.f_11540;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4433);
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
						price = Global_262145.f_11541;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4434);
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
						price = Global_262145.f_11542;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4435);
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
						price = Global_262145.f_11543;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4436);
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
						price = Global_262145.f_11544;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4437);
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
						price = Global_262145.f_11545;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4438);
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
						price = Global_262145.f_11546;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4439);
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
						price = Global_262145.f_11547;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4440);
						break;
				
					case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
						price = Global_262145.f_11548;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4441);
						break;
				}
				break;
		
			case joaat("WEAPON_MACHINEPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
						price = Global_262145.f_11565;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4443);
						break;
				
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
						price = Global_262145.f_16766;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						price = Global_262145.f_11566;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4444);
						break;
				}
				break;
		
			case joaat("WEAPON_SWITCHBLADE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SWITCHBLADE_VARMOD_BASE"):
						price = 0;
						break;
				
					case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
						price = Global_262145.f_13449;
						break;
				
					case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
						price = Global_262145.f_13450;
						break;
				}
				break;
		
			case joaat("WEAPON_REVOLVER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_REVOLVER_CLIP_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
						price = Global_262145.f_13507;
						break;
				
					case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
						price = Global_262145.f_13448;
						break;
				
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						price = Global_262145.f_23116;
						break;
				}
				break;
		
			case joaat("WEAPON_COMPACTRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMPACTRIFLE_CLIP_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_COMPACTRIFLE_CLIP_02"):
						price = Global_262145.f_15242;
						break;
				
					case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
						price = Global_262145.f_16763;
						break;
				}
				break;
		
			case joaat("WEAPON_DBSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_DBSHOTGUN_CLIP_01"):
						price = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_MINISMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MINISMG_CLIP_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_MINISMG_CLIP_02"):
						price = Global_262145.f_19222;
						break;
				}
				break;
		
			case joaat("WEAPON_COMBATPDW"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATPDW_CLIP_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_COMBATPDW_CLIP_02"):
						price = Global_262145.f_21255;
						break;
				
					case joaat("COMPONENT_COMBATPDW_CLIP_03"):
						price = Global_262145.f_16765;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = Global_262145.f_21256;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						price = Global_262145.f_21258;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						price = Global_262145.f_21257;
						break;
				}
				break;
		
			case joaat("WEAPON_ASSAULTRIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
						price = Global_262145.f_21379;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"):
						price = Global_262145.f_21380;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"):
						price = Global_262145.f_21381;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"):
						price = Global_262145.f_21382;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"):
						price = Global_262145.f_21383;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = Global_262145.f_21384;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS"):
						price = Global_262145.f_21385;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						price = Global_262145.f_21386;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						price = Global_262145.f_21387;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						price = Global_262145.f_21388;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						price = Global_262145.f_21389;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_01"):
						price = Global_262145.f_21390;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_02"):
						price = Global_262145.f_21391;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_03"):
						price = Global_262145.f_21392;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_04"):
						price = Global_262145.f_21393;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_05"):
						price = Global_262145.f_21394;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_06"):
						price = Global_262145.f_21395;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_07"):
						price = Global_262145.f_21396;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						price = Global_262145.f_21397;
						break;
				
					case joaat("COMPONENT_AT_AR_BARREL_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_AT_AR_BARREL_02"):
						price = Global_262145.f_21398;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
						price = Global_262145.f_21507;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
						price = Global_262145.f_21508;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
						price = Global_262145.f_21509;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
						price = Global_262145.f_21510;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
						price = Global_262145.f_21511;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
						price = Global_262145.f_21512;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
						price = Global_262145.f_21513;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
						price = Global_262145.f_21514;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
						price = Global_262145.f_21515;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
						price = Global_262145.f_21516;
						break;
				
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
						price = Global_262145.f_21517;
						break;
				}
				break;
		
			case joaat("WEAPON_CARBINERIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
						price = Global_262145.f_21399;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"):
						price = Global_262145.f_21400;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"):
						price = Global_262145.f_21401;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"):
						price = Global_262145.f_21402;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"):
						price = Global_262145.f_21403;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = Global_262145.f_21404;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS"):
						price = Global_262145.f_21405;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						price = Global_262145.f_21406;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						price = Global_262145.f_21407;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						price = Global_262145.f_21408;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						price = Global_262145.f_21409;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_01"):
						price = Global_262145.f_21410;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_02"):
						price = Global_262145.f_21411;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_03"):
						price = Global_262145.f_21412;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_04"):
						price = Global_262145.f_21413;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_05"):
						price = Global_262145.f_21414;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_06"):
						price = Global_262145.f_21415;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_07"):
						price = Global_262145.f_21416;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						price = Global_262145.f_21417;
						break;
				
					case joaat("COMPONENT_AT_CR_BARREL_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_AT_CR_BARREL_02"):
						price = Global_262145.f_21418;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
						price = Global_262145.f_21507;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
						price = Global_262145.f_21508;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
						price = Global_262145.f_21509;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
						price = Global_262145.f_21510;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
						price = Global_262145.f_21511;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
						price = Global_262145.f_21512;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
						price = Global_262145.f_21513;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
						price = Global_262145.f_21514;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
						price = Global_262145.f_21515;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
						price = Global_262145.f_21516;
						break;
				
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
						price = Global_262145.f_21517;
						break;
				}
				break;
		
			case joaat("WEAPON_COMBATMG_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
						price = Global_262145.f_21419;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"):
						price = Global_262145.f_21420;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"):
						price = Global_262145.f_21421;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"):
						price = Global_262145.f_21422;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"):
						price = Global_262145.f_21423;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS"):
						price = Global_262145.f_21424;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						price = Global_262145.f_21425;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						price = Global_262145.f_21426;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						price = Global_262145.f_21427;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_01"):
						price = Global_262145.f_21428;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_02"):
						price = Global_262145.f_21429;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_03"):
						price = Global_262145.f_21430;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_04"):
						price = Global_262145.f_21431;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_05"):
						price = Global_262145.f_21432;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_06"):
						price = Global_262145.f_21433;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_07"):
						price = Global_262145.f_21434;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						price = Global_262145.f_21435;
						break;
				
					case joaat("COMPONENT_AT_MG_BARREL_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_AT_MG_BARREL_02"):
						price = Global_262145.f_21436;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
						price = Global_262145.f_21507;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
						price = Global_262145.f_21508;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
						price = Global_262145.f_21509;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
						price = Global_262145.f_21510;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
						price = Global_262145.f_21511;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
						price = Global_262145.f_21512;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
						price = Global_262145.f_21513;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
						price = Global_262145.f_21514;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
						price = Global_262145.f_21515;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
						price = Global_262145.f_21516;
						break;
				
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
						price = Global_262145.f_21517;
						break;
				}
				break;
		
			case joaat("WEAPON_HEAVYSNIPER_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
						price = Global_262145.f_21437;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"):
						price = Global_262145.f_21438;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"):
						price = Global_262145.f_21440;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"):
						price = Global_262145.f_21441;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"):
						price = Global_262145.f_21439;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_LARGE_MK2"):
						price = Global_262145.f_21442;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						price = 0;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_NV"):
						price = Global_262145.f_21443;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_THERMAL"):
						price = Global_262145.f_21444;
						break;
				
					case joaat("COMPONENT_AT_SR_SUPP_03"):
						price = Global_262145.f_21445;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_08"):
						price = Global_262145.f_21446;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_09"):
						price = Global_262145.f_21447;
						break;
				
					case joaat("COMPONENT_AT_SR_BARREL_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_AT_SR_BARREL_02"):
						price = Global_262145.f_21448;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
						price = Global_262145.f_21507;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
						price = Global_262145.f_21508;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
						price = Global_262145.f_21509;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
						price = Global_262145.f_21510;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
						price = Global_262145.f_21511;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
						price = Global_262145.f_21512;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
						price = Global_262145.f_21513;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
						price = Global_262145.f_21514;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
						price = Global_262145.f_21515;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
						price = Global_262145.f_21516;
						break;
				
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
						price = Global_262145.f_21517;
						break;
				}
				break;
		
			case joaat("WEAPON_PISTOL_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL_MK2_CLIP_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
						price = Global_262145.f_21449;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"):
						price = Global_262145.f_21451;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"):
						price = Global_262145.f_21450;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"):
						price = Global_262145.f_21452;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"):
						price = Global_262145.f_21453;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH_02"):
						price = Global_262145.f_21454;
						break;
				
					case joaat("COMPONENT_AT_PI_RAIL"):
						price = Global_262145.f_21455;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						price = Global_262145.f_21456;
						break;
				
					case joaat("COMPONENT_AT_PI_COMP"):
						price = Global_262145.f_21457;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO"):
						price = Global_262145.f_21507;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
						price = Global_262145.f_21508;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
						price = Global_262145.f_21509;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
						price = Global_262145.f_21510;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
						price = Global_262145.f_21511;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
						price = Global_262145.f_21512;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
						price = Global_262145.f_21513;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
						price = Global_262145.f_21514;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
						price = Global_262145.f_21515;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
						price = Global_262145.f_21516;
						break;
				
					case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
						price = Global_262145.f_21517;
						break;
				
					case 1141184690:
						price = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_SMG_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SMG_MK2_CLIP_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CLIP_02"):
						price = Global_262145.f_21458;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"):
						price = Global_262145.f_21460;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CLIP_FMJ"):
						price = Global_262145.f_21459;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"):
						price = Global_262145.f_21461;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CLIP_TRACER"):
						price = Global_262145.f_21462;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = Global_262145.f_21463;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS_SMG"):
						price = Global_262145.f_21464;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
						price = Global_262145.f_21465;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
						price = Global_262145.f_21466;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP"):
						price = Global_262145.f_21467;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_01"):
						price = Global_262145.f_21468;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_02"):
						price = Global_262145.f_21469;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_03"):
						price = Global_262145.f_21470;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_04"):
						price = Global_262145.f_21471;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_05"):
						price = Global_262145.f_21472;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_06"):
						price = Global_262145.f_21473;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_07"):
						price = Global_262145.f_21474;
						break;
				
					case joaat("COMPONENT_AT_SB_BARREL_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_AT_SB_BARREL_02"):
						price = Global_262145.f_21475;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO"):
						price = Global_262145.f_21507;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_02"):
						price = Global_262145.f_21508;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_03"):
						price = Global_262145.f_21509;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_04"):
						price = Global_262145.f_21510;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_05"):
						price = Global_262145.f_21511;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_06"):
						price = Global_262145.f_21512;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_07"):
						price = Global_262145.f_21513;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_08"):
						price = Global_262145.f_21514;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_09"):
						price = Global_262145.f_21515;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_10"):
						price = Global_262145.f_21516;
						break;
				
					case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
						price = Global_262145.f_21517;
						break;
				}
				break;
		
			case joaat("WEAPON_PUMPSHOTGUN_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"):
						price = Global_262145.f_23145;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"):
						price = Global_262145.f_23146;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"):
						price = Global_262145.f_23144;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"):
						price = Global_262145.f_23143;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = Global_262145.f_23172;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS"):
						price = Global_262145.f_23173;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						price = Global_262145.f_23174;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						price = Global_262145.f_23175;
						break;
				
					case joaat("COMPONENT_AT_SR_SUPP_03"):
						price = Global_262145.f_23176;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_08"):
						price = Global_262145.f_23177;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
						price = Global_262145.f_21507;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
						price = Global_262145.f_21508;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
						price = Global_262145.f_21509;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
						price = Global_262145.f_21510;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
						price = Global_262145.f_21511;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
						price = Global_262145.f_21512;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
						price = Global_262145.f_21513;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
						price = Global_262145.f_21514;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
						price = Global_262145.f_21515;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
						price = Global_262145.f_21516;
						break;
				
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
						price = Global_262145.f_21517;
						break;
				}
				break;
		
			case joaat("WEAPON_SPECIALCARBINE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"):
						price = Global_262145.f_23147;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"):
						price = Global_262145.f_23151;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"):
						price = Global_262145.f_23149;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"):
						price = Global_262145.f_23150;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"):
						price = Global_262145.f_23148;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = Global_262145.f_23178;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS"):
						price = Global_262145.f_23179;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						price = Global_262145.f_23180;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						price = Global_262145.f_23181;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						price = Global_262145.f_23182;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_01"):
						price = Global_262145.f_23183;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_02"):
						price = Global_262145.f_23184;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_03"):
						price = Global_262145.f_23185;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_04"):
						price = Global_262145.f_23186;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_05"):
						price = Global_262145.f_23187;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_06"):
						price = Global_262145.f_23188;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_07"):
						price = Global_262145.f_23189;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						price = Global_262145.f_23190;
						break;
				
					case joaat("COMPONENT_AT_SC_BARREL_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_AT_SC_BARREL_02"):
						price = Global_262145.f_23191;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
						price = Global_262145.f_21507;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
						price = Global_262145.f_21508;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
						price = Global_262145.f_21509;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
						price = Global_262145.f_21510;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
						price = Global_262145.f_21511;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
						price = Global_262145.f_21512;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
						price = Global_262145.f_21513;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
						price = Global_262145.f_21514;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
						price = Global_262145.f_21515;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
						price = Global_262145.f_21516;
						break;
				
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
						price = Global_262145.f_21517;
						break;
				}
				break;
		
			case joaat("WEAPON_SNSPISTOL_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
						price = Global_262145.f_24063;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"):
						price = Global_262145.f_23167;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"):
						price = Global_262145.f_23169;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"):
						price = Global_262145.f_23168;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"):
						price = Global_262145.f_23166;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH_03"):
						price = Global_262145.f_23223;
						break;
				
					case joaat("COMPONENT_AT_PI_RAIL_02"):
						price = Global_262145.f_23224;
						break;
				
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						price = Global_262145.f_23225;
						break;
				
					case joaat("COMPONENT_AT_PI_COMP_02"):
						price = Global_262145.f_23226;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
						price = Global_262145.f_21507;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
						price = Global_262145.f_21508;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
						price = Global_262145.f_21509;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
						price = Global_262145.f_21510;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
						price = Global_262145.f_21511;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
						price = Global_262145.f_21512;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
						price = Global_262145.f_21513;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
						price = Global_262145.f_21514;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
						price = Global_262145.f_21515;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
						price = Global_262145.f_21516;
						break;
				
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
						price = Global_262145.f_21517;
						break;
				}
				break;
		
			case joaat("WEAPON_MARKSMANRIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"):
						price = Global_262145.f_23152;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"):
						price = Global_262145.f_23156;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"):
						price = Global_262145.f_23154;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"):
						price = Global_262145.f_23155;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"):
						price = Global_262145.f_23153;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = Global_262145.f_23192;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS"):
						price = Global_262145.f_23193;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						price = Global_262145.f_23194;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"):
						price = 0;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						price = Global_262145.f_23195;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_01"):
						price = Global_262145.f_23196;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_02"):
						price = Global_262145.f_23197;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_03"):
						price = Global_262145.f_23198;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_04"):
						price = Global_262145.f_23199;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_05"):
						price = Global_262145.f_23200;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_06"):
						price = Global_262145.f_23201;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_07"):
						price = Global_262145.f_23202;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						price = Global_262145.f_23203;
						break;
				
					case joaat("COMPONENT_AT_MRFL_BARREL_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_AT_MRFL_BARREL_02"):
						price = Global_262145.f_23204;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
						price = Global_262145.f_21507;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
						price = Global_262145.f_21508;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
						price = Global_262145.f_21509;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
						price = Global_262145.f_21510;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
						price = Global_262145.f_21511;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
						price = Global_262145.f_21512;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
						price = Global_262145.f_21513;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
						price = Global_262145.f_21514;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
						price = Global_262145.f_21515;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
						price = Global_262145.f_21516;
						break;
				
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
						price = Global_262145.f_21517;
						break;
				}
				break;
		
			case joaat("WEAPON_REVOLVER_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"):
						price = Global_262145.f_23157;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"):
						price = Global_262145.f_23158;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"):
						price = Global_262145.f_23160;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"):
						price = Global_262145.f_23159;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS"):
						price = Global_262145.f_23205;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						price = Global_262145.f_23206;
						break;
				
					case joaat("COMPONENT_AT_PI_FLSH"):
						price = Global_262145.f_23207;
						break;
				
					case joaat("COMPONENT_AT_PI_COMP_03"):
						price = Global_262145.f_23208;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
						price = Global_262145.f_21507;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
						price = Global_262145.f_21508;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
						price = Global_262145.f_21509;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
						price = Global_262145.f_21510;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
						price = Global_262145.f_21511;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
						price = Global_262145.f_21512;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
						price = Global_262145.f_21513;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
						price = Global_262145.f_21514;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
						price = Global_262145.f_21515;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
						price = Global_262145.f_21516;
						break;
				
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
						price = Global_262145.f_21517;
						break;
				}
				break;
		
			case joaat("WEAPON_BULLPUPRIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"):
						price = Global_262145.f_23161;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"):
						price = Global_262145.f_23165;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"):
						price = Global_262145.f_23163;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"):
						price = Global_262145.f_23164;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"):
						price = Global_262145.f_23162;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = Global_262145.f_23209;
						break;
				
					case joaat("COMPONENT_AT_SIGHTS"):
						price = Global_262145.f_23210;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
						price = Global_262145.f_23211;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						price = Global_262145.f_23212;
						break;
				
					case joaat("COMPONENT_AT_BP_BARREL_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_AT_BP_BARREL_02"):
						price = Global_262145.f_23222;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						price = Global_262145.f_23213;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_01"):
						price = Global_262145.f_23214;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_02"):
						price = Global_262145.f_23215;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_03"):
						price = Global_262145.f_23216;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_04"):
						price = Global_262145.f_23217;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_05"):
						price = Global_262145.f_23218;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_06"):
						price = Global_262145.f_23219;
						break;
				
					case joaat("COMPONENT_AT_MUZZLE_07"):
						price = Global_262145.f_23220;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						price = Global_262145.f_23221;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
						price = Global_262145.f_21507;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
						price = Global_262145.f_21508;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
						price = Global_262145.f_21509;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
						price = Global_262145.f_21510;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
						price = Global_262145.f_21511;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
						price = Global_262145.f_21512;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
						price = Global_262145.f_21513;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
						price = Global_262145.f_21514;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
						price = Global_262145.f_21515;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
						price = Global_262145.f_21516;
						break;
				
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
						price = Global_262145.f_21517;
						break;
				}
				break;
		
			case joaat("WEAPON_RAYPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
						price = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_CERAMICPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
						price = Global_262145.f_28904;
						break;
				
					case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
						price = Global_262145.f_28905;
						break;
				}
				break;
		
			case joaat("WEAPON_COMBATSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATSHOTGUN_CLIP_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = Global_262145.f_31043;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						price = Global_262145.f_31044;
						break;
				}
				break;
		
			case joaat("WEAPON_GADGETPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_GADGETPISTOL_CLIP_01"):
						price = 0;
						break;
				}
				break;
		
			case joaat("WEAPON_MILITARYRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MILITARYRIFLE_CLIP_01"):
						price = Global_262145.f_31029;
						break;
				
					case joaat("COMPONENT_MILITARYRIFLE_CLIP_02"):
						price = Global_262145.f_31030;
						break;
				
					case joaat("COMPONENT_MILITARYRIFLE_SIGHT_01"):
						price = Global_262145.f_31031;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						price = Global_262145.f_31032;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = Global_262145.f_31033;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						price = Global_262145.f_31034;
						break;
				}
				break;
		
			case joaat("WEAPON_HEAVYRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYRIFLE_CLIP_01"):
						price = Global_262145.f_32185;
						break;
				
					case joaat("COMPONENT_HEAVYRIFLE_CLIP_02"):
						price = Global_262145.f_32186;
						break;
				
					case joaat("COMPONENT_HEAVYRIFLE_CAMO1"):
						price = Global_262145.f_32218;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						price = Global_262145.f_32191;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH"):
						price = Global_262145.f_32189;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						price = Global_262145.f_32188;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP"):
						price = Global_262145.f_32190;
						break;
				
					case joaat("COMPONENT_HEAVYRIFLE_SIGHT_01"):
						price = Global_262145.f_32187;
						break;
				}
				break;
		
			case joaat("WEAPON_TACTICALRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_TACTICALRIFLE_CLIP_01"):
						price = 0;
						break;
				
					case joaat("COMPONENT_TACTICALRIFLE_CLIP_02"):
						price = *Global_262145.f_33437;
						break;
				
					case joaat("COMPONENT_AT_AR_FLSH_REH"):
						price = *Global_262145.f_33439;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						price = *Global_262145.f_33440;
						break;
				
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						price = *Global_262145.f_33438;
						break;
				}
				break;
		
			case joaat("WEAPON_KNIFE"):
				switch (iParam1)
				{
					case 370527443:
						price = *Global_262145.f_34353;
						break;
				
					case 1109907117:
						price = *Global_262145.f_34357;
						break;
				
					case 2055456612:
						price = *Global_262145.f_34354;
						break;
				
					case 1690606566:
						price = *Global_262145.f_34355;
						break;
				
					case -1633316949:
						price = *Global_262145.f_34358;
						break;
				
					case -1461476313:
						price = *Global_262145.f_34356;
						break;
				
					case -1770422457:
						price = *Global_262145.f_34360;
						break;
				
					case -2059739958:
						price = *Global_262145.f_34359;
						break;
				
					case -1280001599:
						price = *Global_262145.f_34361;
						break;
				
					case -922885037:
						price = *Global_262145.f_34362;
						break;
				}
				break;
		
			case joaat("WEAPON_BAT"):
				switch (iParam1)
				{
					case 716207715:
						price = *Global_262145.f_34343;
						break;
				
					case 446271089:
						price = *Global_262145.f_34344;
						break;
				
					case 1045616099:
						price = *Global_262145.f_34346;
						break;
				
					case 1336277129:
						price = *Global_262145.f_34347;
						break;
				
					case -513369076:
						price = *Global_262145.f_34348;
						break;
				
					case -447700000:
						price = *Global_262145.f_34349;
						break;
				
					case -149207179:
						price = *Global_262145.f_34350;
						break;
				
					case 166784288:
						price = *Global_262145.f_34351;
						break;
				
					case 2068729789:
						price = *Global_262145.f_34352;
						break;
				
					case 1761389338:
						price = *Global_262145.f_34345;
						break;
				}
				break;
		
			case 465894841:
				switch (iParam1)
				{
					case 375646046:
						price = 0;
						break;
				
					case 503494624:
						price = *Global_262145.f_34326;
						break;
				}
				break;
		
			case 350597077:
				switch (iParam1)
				{
					case 943088878:
						price = *Global_262145.f_35799;
						break;
				
					case 310778254:
						price = *Global_262145.f_35800;
						break;
				
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						price = *Global_262145.f_35804;
						break;
				
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						price = *Global_262145.f_35802;
						break;
				}
				break;
		
			case joaat("WEAPON_RPG"):
				switch (iParam1)
				{
					case -1240142720:
						price = 0;
						break;
				}
				break;
		
			default:
				dlcWeaponIndex2 = func_104(hParam0, &unk61);
			
				if (dlcWeaponIndex2 != -1)
				{
					for (j = 0; j < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(dlcWeaponIndex2); j = j + 1)
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(dlcWeaponIndex2, j, &ComponentDataPtr2))
						{
							if (!func_85(ComponentDataPtr2.f_3))
							{
								if (ComponentDataPtr2.f_3 == iParam1)
								{
									num = 1f;
								
									if (ComponentDataPtr2.f_5 == -1)
										price = -1;
									else
										price = ComponentDataPtr2.f_5;
								}
							}
						}
					}
				}
				break;
		}
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_78())
	{
		TEXT_LABEL_ASSIGN_STRING(&unk136, func_76(iParam1, hParam0), 16);
		func_67(&name, unk136, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, 1, func_74(hParam0), func_73(hParam0), -1, false, false, 2);
	
		if (NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&name))
			price = NETSHOPPING::NET_GAMESERVER_GET_PRICE(MISC::GET_HASH_KEY(&name), joaat("CATEGORY_WEAPON_MOD"), true);
	}

	if (price > 0)
	{
		num2 = func_28(hParam0, &price, num);
		num2 != 1f;
	}

	return price;
}

float func_28(Hash hParam0, var uParam1, float fParam2) // Position - 0xA229
{
	float num;
	float num2;
	int num3;

	num = 0f;
	num2 = 0f;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_78())
	{
		num2 = num2 + func_66();
		num = 1f - num2;
		*uParam1 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(*uParam1) * num);
		return num;
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		*uParam1 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(*uParam1) * fParam2);

	if (!Global_78689)
	{
		if (*uParam1 != 0)
		{
			num3 = func_57(hParam0);
		
			if (num3 == 3)
				num2 = 0.1f;
			else if (num3 == 2)
				num2 = 0.15f;
			else if (num3 == 1)
				num2 = 0.25f;
		}
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iLocal_53 == 1)
		{
			*uParam1 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(*uParam1) * Global_262145.f_77);
			num2 = num2 + (SYSTEM::TO_FLOAT(Global_262145.f_133) / 100f);
		}
	
		if (iLocal_53 == 0)
		{
			*uParam1 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(*uParam1) * Global_262145.f_77);
		
			if (func_29())
			{
				num2 = num2 + (SYSTEM::TO_FLOAT(Global_262145.f_133) / 100f);
				iLocal_53 = 1;
			}
			else
			{
				iLocal_53 = -1;
			}
		}
	
		num2 = num2 + func_66();
	}

	num = 1f - num2;
	*uParam1 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(*uParam1) * num);
	return num;
}

BOOL func_29() // Position - 0xA362
{
	int value;
	int value2;
	float num;

	if (MISC::IS_PC_VERSION())
		return false;

	if (func_119())
	{
		if (func_32())
		{
			value = func_31();
			value2 = func_30();
			num = (SYSTEM::TO_FLOAT(value2) / SYSTEM::TO_FLOAT(value)) * 100f;
		
			if (num > (float)Global_262145.f_132 && value >= 8)
				return true;
		}
	}

	return false;
}

int func_30() // Position - 0xA3C0
{
	int num;

	num = num + _MPPLY_STAT_GET_INT(joaat("MPPLY_FRIENDLY"));
	num = num + _MPPLY_STAT_GET_INT(joaat("MPPLY_HELPFUL"));
	return num;
}

int func_31() // Position - 0xA3E6
{
	int num;

	num = num + _MPPLY_STAT_GET_INT(joaat("MPPLY_OFFENSIVE_LANGUAGE"));
	num = num + _MPPLY_STAT_GET_INT(joaat("MPPLY_GRIEFING"));
	num = num + _MPPLY_STAT_GET_INT(joaat("MPPLY_FRIENDLY"));
	num = num + _MPPLY_STAT_GET_INT(joaat("MPPLY_HELPFUL"));
	num = num + _MPPLY_STAT_GET_INT(joaat("MPPLY_OFFENSIVE_UGC"));
	num = num + _MPPLY_STAT_GET_INT(joaat("MPPLY_OFFENSIVE_TAGPLATE"));
	num = num + _MPPLY_STAT_GET_INT(joaat("MPPLY_EXPLOITS"));
	num = num + _MPPLY_STAT_GET_INT(joaat("MPPLY_VC_ANNOYINGME"));
	num = num + _MPPLY_STAT_GET_INT(joaat("MPPLY_VC_HATE"));
	num = num + _MPPLY_STAT_GET_INT(joaat("MPPLY_BAD_CREW_NAME"));
	num = num + _MPPLY_STAT_GET_INT(joaat("MPPLY_BAD_CREW_MOTTO"));
	num = num + _MPPLY_STAT_GET_INT(joaat("MPPLY_BAD_CREW_STATUS"));
	num = num + _MPPLY_STAT_GET_INT(joaat("MPPLY_BAD_CREW_EMBLEM"));
	num = num + _MPPLY_STAT_GET_INT(joaat("MPPLY_PLAYERMADE_TITLE"));
	num = num + _MPPLY_STAT_GET_INT(joaat("MPPLY_PLAYERMADE_DESC"));
	return num;
}

BOOL func_32() // Position - 0xA4C2
{
	var year;
	var unk;

	CLOCK::GET_POSIX_TIME(&year, &(year.f_1), &(year.f_2), &(year.f_3), &(year.f_4), &(year.f_5));
	unk7 = { func_56(joaat("MPPLY_STARTED_MP")) };

	if (func_33(unk7, year, 7))
		return true;

	return false;
}

BOOL func_33(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14) // Position - 0xA506
{
	int num;
	int num2;

	num = func_54(uParam7);
	num2 = func_44(uParam0, iParam14);

	if (num2 == -15)
		return false;

	if (func_34(num, num2) == 1)
		return true;

	return false;
}

int func_34(int iParam0, int iParam1) // Position - 0xA541
{
	int num;
	int num2;

	if (!func_42(iParam1) || !func_42(iParam0))
		return 1;

	num = func_40(iParam0);
	num2 = func_40(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_39(iParam0);
	num2 = func_39(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_38(iParam0);
	num2 = func_38(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_37(iParam0);
	num2 = func_37(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_36(iParam0);
	num2 = func_36(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_35(iParam0);
	num2 = func_35(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

int func_35(int iParam0) // Position - 0xA64D
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_36(int iParam0) // Position - 0xA660
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_37(int iParam0) // Position - 0xA673
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_38(int iParam0) // Position - 0xA686
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_39(int iParam0) // Position - 0xA698
{
	return iParam0 & 15;
}

int func_40(int iParam0) // Position - 0xA6A5
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_41(BOOL bParam0, var uParam1, var uParam2) // Position - 0xA6C7
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_42(int iParam0) // Position - 0xA6DE
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_35(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_36(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_37(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_40(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_39(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_38(iParam0);

	if (num6 < 1 || num6 > func_43(num5, num4))
		return false;

	return true;
}

int func_43(int iParam0, int iParam1) // Position - 0xA7BA
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

int func_44(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) // Position - 0xA85C
{
	var unk;
	var unk2;
	var unk3;

	if (func_53(uParam0) == 0)
	{
		unk = func_54(uParam0);
		unk2 = unk;
		func_45(&unk2, 0, 0, 0, iParam7, 0, 0);
	
		if (iParam7 == 0)
			unk2 = unk;
	
		return unk2;
	}

	return unk3;
}

void func_45(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xA89C
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_40(*uParam0);
	i = func_39(*uParam0);
	num2 = func_38(*uParam0);
	j = func_37(*uParam0);
	k = func_36(*uParam0);
	l = func_35(*uParam0);

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

	for (m = func_43(i, num); num2 > m; m = func_43(i, num))
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
	func_46(uParam0, l, k, j, num2, i, num);
	return;
}

void func_46(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xAA1E
{
	func_52(uParam0, iParam1);
	func_51(uParam0, iParam2);
	func_50(uParam0, iParam3);
	func_49(uParam0, iParam5);
	func_48(uParam0, iParam4);
	func_47(uParam0, iParam6);
	return;
}

void func_47(var uParam0, int iParam1) // Position - 0xAA56
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

void func_48(var uParam0, int iParam1) // Position - 0xAADC
{
	int num;
	int num2;

	num = func_39(*uParam0);
	num2 = func_40(*uParam0);

	if (iParam1 < 1 || iParam1 > func_43(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_49(var uParam0, int iParam1) // Position - 0xAB2D
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_50(var uParam0, int iParam1) // Position - 0xAB60
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_51(var uParam0, int iParam1) // Position - 0xAB9A
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_52(var uParam0, int iParam1) // Position - 0xABD5
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

int func_53(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0xAC11
{
	if (iParam0 == 0 && iParam0.f_1 == 0 && iParam0.f_2 == 0 && iParam0.f_3 == 0 && iParam0.f_4 == 0 && iParam0.f_5 == 0 && iParam0.f_6 == 0)
		return 1;

	return 0;
}

var func_54(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0xAC67
{
	var unk;

	if (iParam0 > 0)
		func_47(&unk, iParam0);

	if (iParam0.f_1 > 0)
		func_49(&unk, func_55(iParam0.f_1));

	if (iParam0.f_2 > 0)
		func_48(&unk, iParam0.f_2);

	if (iParam0.f_3 > 0)
		func_50(&unk, iParam0.f_3);

	if (iParam0.f_4 > 0)
		func_51(&unk, iParam0.f_4);

	if (iParam0.f_5 > 0)
		func_52(&unk, iParam0.f_5);

	return unk;
}

int func_55(int iParam0) // Position - 0xACDD
{
	if (iParam0 < 1)
		return 0;

	if (iParam0 > 12)
		return 0;

	switch (iParam0)
	{
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 2;
	
		case 4:
			return 3;
	
		case 5:
			return 4;
	
		case 6:
			return 5;
	
		case 7:
			return 6;
	
		case 8:
			return 7;
	
		case 9:
			return 8;
	
		case 10:
			return 9;
	
		case 11:
			return 10;
	
		case 12:
			return 11;
	}

	return 0;
}

struct<7> func_56(Hash hParam0) // Position - 0xADA2
{
	Hash statHash;
	var unk;
	var unk2;

	statHash = hParam0;

	if (STATS::STAT_GET_DATE(statHash, &outValue, 7, -1))
		return outValue;

	return unk;
}

int func_57(Hash hParam0) // Position - 0xADC6
{
	eCharacter character;
	int num;
	int i;
	var unk;
	BOOL unk2;

	character = _GET_CURRENT_PLAYER_CHARACTER();

	if (hParam0 == 0 || !func_60(character))
		return -1;

	num = 7;

	switch (hParam0)
	{
		case joaat("WEAPON_UNARMED"):
			break;
	
		case joaat("GADGET_PARACHUTE"):
			break;
	
		case joaat("WEAPON_MICROSMG"):
			num = 1;
			break;
	
		case joaat("WEAPON_SMG"):
			num = 1;
			break;
	
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			num = 3;
			break;
	
		case joaat("WEAPON_PUMPSHOTGUN"):
			num = 3;
			break;
	
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			num = 3;
			break;
	
		case joaat("WEAPON_ASSAULTRIFLE"):
			num = 2;
			break;
	
		case joaat("WEAPON_CARBINERIFLE"):
			num = 2;
			break;
	
		case joaat("WEAPON_ADVANCEDRIFLE"):
			num = 2;
			break;
	
		case joaat("WEAPON_SNIPERRIFLE"):
			break;
	
		case joaat("WEAPON_HEAVYSNIPER"):
			break;
	
		case joaat("WEAPON_MG"):
			num = 4;
			break;
	
		case joaat("WEAPON_COMBATMG"):
			num = 4;
			break;
	
		case joaat("WEAPON_RPG"):
			break;
	
		case joaat("WEAPON_GRENADELAUNCHER"):
			break;
	
		case joaat("WEAPON_MINIGUN"):
			num = 5;
			break;
	
		case joaat("WEAPON_KNIFE"):
			break;
	
		case joaat("WEAPON_NIGHTSTICK"):
			break;
	
		case joaat("WEAPON_PETROLCAN"):
			break;
	
		case joaat("WEAPON_STUNGUN"):
			break;
	
		case joaat("WEAPON_APPISTOL"):
			num = 0;
			break;
	
		case joaat("WEAPON_COMBATPISTOL"):
			num = 0;
			break;
	
		case joaat("WEAPON_PISTOL"):
			num = 0;
			break;
	
		case joaat("WEAPON_SMOKEGRENADE"):
			break;
	
		case joaat("WEAPON_GRENADE"):
			break;
	
		case joaat("WEAPON_STICKYBOMB"):
			break;
	}

	if (num != 7)
	{
		switch (func_58(num, character))
		{
			case 1:
				return 3;
		
			case 2:
				return 2;
		
			case 3:
				return 1;
		}
	}
	else
	{
		unk = 6;
		unk[0] = func_58(1, character);
		unk[1] = func_58(3, character);
		unk[2] = func_58(2, character);
		unk[3] = func_58(4, character);
		unk[4] = func_58(5, character);
		unk[5] = func_58(0, character);
		flag = false;
	
		for (i = 0; i < 6; i = i + 1)
		{
			if (unk[i] < 3)
				flag = true;
		}
	
		if (!flag)
			return 1;
	
		flag = false;
	
		for (i = 0; i < 6; i = i + 1)
		{
			if (unk[i] < 2)
				flag = true;
		}
	
		if (!flag)
			return 2;
	
		flag = false;
	
		for (i = 0; i < 6; i = i + 1)
		{
			if (unk[i] < 1)
				flag = true;
		}
	
		if (!flag)
			return 3;
	}

	return -1;
}

int func_58(int iParam0, eCharacter echParam1) // Position - 0xB022
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;

	if (iParam0 == 0)
	{
		num = 0;
		num2 = 1;
		num3 = 2;
		num4 = -1;
	}
	else if (iParam0 == 1)
	{
		num = 3;
		num2 = 4;
		num3 = 5;
		num4 = -1;
	}
	else if (iParam0 == 2)
	{
		num = 9;
		num2 = 10;
		num3 = 11;
		num4 = -1;
	}
	else if (iParam0 == 3)
	{
		num = 6;
		num2 = 7;
		num3 = 8;
		num4 = -1;
	}
	else if (iParam0 == 4)
	{
		num = 12;
		num2 = 13;
		num3 = 14;
		num4 = -1;
	}
	else if (iParam0 == 5)
	{
		num = 15;
		num2 = 16;
		num3 = 17;
		num4 = -1;
	}
	else if (iParam0 == 6)
	{
		num = 18;
		num2 = 19;
		num3 = 20;
		num4 = 21;
	}
	else
	{
		return 0;
	}

	num5 = func_59(num, echParam1);

	if (func_59(num2, echParam1) < num5)
		num5 = func_59(num2, echParam1);

	if (func_59(num3, echParam1) < num5)
		num5 = func_59(num3, echParam1);

	if (num4 != -1)
		if (func_59(num4, echParam1) < num5)
			num5 = func_59(num4, echParam1);

	return num5;
}

int func_59(int iParam0, eCharacter echParam1) // Position - 0xB126
{
	return G_MissionStats.f_19150[echParam1].f_3[iParam0].f_3;
}

BOOL func_60(eCharacter echParam0) // Position - 0xB142
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0xB14E
{
	func_62();
	return G_MissionStats.f_2366.f_539.f_4321;
}

void func_62() // Position - 0xB167
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(G_MissionStats.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_60(character) && !func_177(14) || Global_112760)
			{
				if (G_MissionStats.f_2366.f_539.f_4321 != character && func_60(G_MissionStats.f_2366.f_539.f_4321))
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

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0xB264
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0xB2A1
{
	if (func_60(character))
		return func_65(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_65(eCharacter echParam0) // Position - 0xB2C6
{
	return Global_2058[echParam0];
}

var func_66() // Position - 0xB2D5
{
	return Global_100885.f_2096;
}

void func_67(char* sParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, BOOL bParam11, BOOL bParam12, int iParam13) // Position - 0xB2E4
{
	switch (MISC::GET_HASH_KEY(&uParam1))
	{
		case joaat("GSA_TYPE_R1"):
		case joaat("GSA_TYPE_R"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_R", 16);
			break;
	
		case joaat("GSA_TYPE_C1"):
		case joaat("GSA_TYPE_C"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_C", 16);
			break;
	
		case joaat("GSA_TYPE_RO1"):
		case joaat("GSA_TYPE_RO"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_RO", 16);
			break;
	
		case joaat("GSA_TYPE_CH1"):
		case joaat("GSA_TYPE_CH"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_CH", 16);
			break;
	
		case joaat("GSA_TYPE_G1"):
		case joaat("GSA_TYPE_G"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_G", 16);
			break;
	
		case joaat("GSA_TYPE_B1"):
		case joaat("GSA_TYPE_B"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_B", 16);
			break;
	
		case joaat("GSA_TYPE_FW1"):
		case joaat("GSA_TYPE_FW"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_FW" /*Fireworks*/, 16);
			break;
	}

	TEXT_LABEL_ASSIGN_STRING(sParam0, "", 64);

	switch (iParam6)
	{
		case 0:
			if (hParam5 == joaat("MP_M_Freemode_01"))
				TEXT_LABEL_ASSIGN_STRING(sParam0, "M", 64);
			else if (hParam5 == joaat("MP_F_Freemode_01"))
				TEXT_LABEL_ASSIGN_STRING(sParam0, "F", 64);
		
			TEXT_LABEL_APPEND_STRING(sParam0, "_HA_", 64);
			TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			break;
	
		case 1:
			if (hParam5 == joaat("MP_M_Freemode_01"))
				TEXT_LABEL_ASSIGN_STRING(sParam0, "M", 64);
			else if (hParam5 == joaat("MP_F_Freemode_01"))
				TEXT_LABEL_ASSIGN_STRING(sParam0, "F", 64);
		
			TEXT_LABEL_APPEND_STRING(sParam0, "_CL_", 64);
		
			if (iParam7 == 12)
				TEXT_LABEL_APPEND_STRING(sParam0, "OUTFIT_", 64);
		
			TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
		
			if (iParam9 != -1)
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "_n", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam9, 64);
			}
		
			TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
		
			if (iParam10 != -1)
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "_p", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam10, 64);
			}
			break;
	
		case 2:
			if (hParam5 == joaat("MP_M_Freemode_01"))
				TEXT_LABEL_ASSIGN_STRING(sParam0, "M", 64);
			else if (hParam5 == joaat("MP_F_Freemode_01"))
				TEXT_LABEL_ASSIGN_STRING(sParam0, "F", 64);
		
			TEXT_LABEL_APPEND_STRING(sParam0, "_TA_", 64);
			TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			break;
	
		case 3:
			TEXT_LABEL_APPEND_STRING(sParam0, "WP_", 64);
			TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
		
			if (iParam9 != -1)
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "_n", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam9, 64);
			}
			break;
	
		case 4:
			if (hParam5 == Global_75777)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (hParam5 == Global_75778)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
			}
			else if (hParam5 == Global_75779)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
			}
			else if (hParam5 == Global_75780)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BIG_PLANE_t0_v0", 64);
			}
			else if (hParam5 == Global_75781)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
			}
			else if (hParam5 == func_72())
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_KOSATKA_t0_v0", 64);
			}
			else if (hParam5 == func_71())
			{
				if (iParam7 == 40)
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VEU_BRICKADE2_t0_v0", 64);
				else if (iParam7 == 2)
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BRICKADE2_t2_v38", 64);
				else if (iParam7 == 1)
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BRICKADE2_t1_v38", 64);
				else
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BRICKADE2_t0_v38", 64);
			}
			else if (hParam5 == func_70())
			{
				if (iParam7 == 1)
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_MANCHEZ3_t1_v4", 64);
				else
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_MANCHEZ3_t0_v4", 64);
			}
			else if (hParam5 == -426933872)
			{
				if (iParam7 == 40)
					if (iParam13 == 61)
						TEXT_LABEL_ASSIGN_STRING(sParam0, "VEU_AVENGER3_t0_v0", 64);
					else if (iParam13 == 103)
						if (!func_68())
							TEXT_LABEL_ASSIGN_STRING(sParam0, "VEU_AVENGER3_t1_v0", 64);
						else
							TEXT_LABEL_ASSIGN_STRING(sParam0, "VEU_AVENGER3_t1_v1", 64);
				else
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_AVENGER_t0_v33", 64);
			}
			else if (hParam5 == 0)
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "VEM_", 64);
			
				if (iParam7 == 24 || iParam7 == 25)
				{
					if (iParam9 == 1)
						TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_1_", 64);
					else if (iParam9 == 2)
						TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_2_", 64);
					else if (iParam9 == 3)
						TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_EXTRA_1_", 64);
				
					if (iParam10 == 5)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_CHROME_", 64);
					else if (iParam10 == 1)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_CLASSIC_", 64);
					else if (iParam10 == 0)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_METALLIC_", 64);
					else if (iParam10 == 4)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_METALS_", 64);
					else if (iParam10 == 3)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_MATTE_", 64);
					else if (iParam10 == 2)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_PEARLESCENT_", 64);
					else if (iParam10 == 7)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_NONE_", 64);
				
					iParam9 = -1;
				}
				else if (iParam7 == 38)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_5_", 64);
				}
				else if (iParam7 == 65)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_6_", 64);
				}
			
				TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			
				if (iParam9 != -1)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "_n", 64);
					TEXT_LABEL_APPEND_INT(sParam0, iParam9, 64);
				}
			
				TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
				TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			}
			else if (iParam7 == 22)
			{
				TEXT_LABEL_ASSIGN_STRING(&uParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(hParam5), 16);
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam1) || MISC::GET_HASH_KEY(&uParam1) == joaat("carnotfound"))
					return;
			
				TEXT_LABEL_APPEND_STRING(sParam0, "VEM_INSURANCE_", 64);
				TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			
				if (!bParam11)
				{
					switch (hParam5)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
						case joaat("cargobob2"):
							TEXT_LABEL_APPEND_STRING(sParam0, "2", 64);
							break;
					
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							TEXT_LABEL_APPEND_STRING(sParam0, "3", 64);
							break;
					
						case joaat("tornado4"):
							TEXT_LABEL_APPEND_STRING(sParam0, "4", 64);
							break;
					}
				}
			}
			else if (iParam7 == 40)
			{
				switch (hParam5)
				{
					case joaat("fcr2"):
						TEXT_LABEL_ASSIGN_STRING(&uParam1, "FCR2", 16);
						break;
				
					case joaat("diablous2"):
						TEXT_LABEL_ASSIGN_STRING(&uParam1, "DIABLOUS2", 16);
						break;
				
					case joaat("comet3"):
						TEXT_LABEL_ASSIGN_STRING(&uParam1, "COMET3", 16);
						break;
				
					default:
						TEXT_LABEL_ASSIGN_STRING(&uParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(hParam5), 16);
					
						if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam1))
							return;
						break;
				}
			
				TEXT_LABEL_APPEND_STRING(sParam0, "VEU_", 64);
				TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
				TEXT_LABEL_APPEND_STRING(sParam0, "_t0_v", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			}
			else
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "VE_", 64);
				TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			
				if (!bParam11)
				{
					switch (hParam5)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
						case joaat("cargobob2"):
							TEXT_LABEL_APPEND_STRING(sParam0, "2", 64);
							break;
					
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							TEXT_LABEL_APPEND_STRING(sParam0, "3", 64);
							break;
					
						case joaat("tornado4"):
							TEXT_LABEL_APPEND_STRING(sParam0, "4", 64);
							break;
					}
				}
			
				if (iParam9 != -1)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "_n", 64);
					TEXT_LABEL_APPEND_INT(sParam0, iParam9, 64);
				}
			
				TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
				TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			
				if (iParam10 != -1)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "_p", 64);
					TEXT_LABEL_APPEND_INT(sParam0, iParam10, 64);
				}
			}
			break;
	}

	if (bParam12)
		TEXT_LABEL_APPEND_STRING(sParam0, "_CESP", 64);

	return;
}

BOOL func_68() // Position - 0xB967
{
	return func_69();
}

BOOL func_69() // Position - 0xB973
{
	return Global_1586488[189].f_66 == joaat("thruster");
}

Hash func_70() // Position - 0xB98B
{
	return 1384502824;
}

Hash func_71() // Position - 0xB998
{
	return -1576586413;
}

Hash func_72() // Position - 0xB9A5
{
	return joaat("kosatka");
}

int func_73(Hash hParam0) // Position - 0xB9B2
{
	switch (hParam0)
	{
		case joaat("WEAPON_PISTOL_MK2"):
		case joaat("WEAPON_SMG_MK2"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
		case joaat("WEAPON_COMBATMG_MK2"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
		case joaat("WEAPON_SNSPISTOL_MK2"):
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
		case joaat("WEAPON_REVOLVER_MK2"):
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 2;
	}

	return -1;
}

int func_74(Hash hParam0) // Position - 0xBA11
{
	return func_75(hParam0);
}

int func_75(Hash hParam0) // Position - 0xBA1F
{
	switch (hParam0)
	{
		case joaat("WEAPON_UNARMED"):
			return 0;
	
		case joaat("WEAPON_PISTOL"):
			return 1;
	
		case joaat("WEAPON_COMBATPISTOL"):
			return 2;
	
		case joaat("WEAPON_APPISTOL"):
			return 3;
	
		case joaat("WEAPON_PISTOL50"):
			return 4;
	
		case joaat("WEAPON_SMG"):
			return 5;
	
		case joaat("WEAPON_ASSAULTSMG"):
			return 6;
	
		case joaat("WEAPON_MICROSMG"):
			return 7;
	
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 8;
	
		case joaat("WEAPON_CARBINERIFLE"):
			return 9;
	
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 11;
	
		case joaat("WEAPON_MG"):
			return 12;
	
		case joaat("WEAPON_COMBATMG"):
			return 13;
	
		case joaat("WEAPON_ASSAULTMG"):
			return 14;
	
		case joaat("WEAPON_STICKYBOMB"):
			return 15;
	
		case joaat("WEAPON_GRENADE"):
			return 16;
	
		case joaat("WEAPON_SMOKEGRENADE"):
			return 17;
	
		case joaat("WEAPON_REMOTESNIPER"):
			return 18;
	
		case joaat("WEAPON_ASSAULTSNIPER"):
			return 19;
	
		case joaat("WEAPON_SNIPERRIFLE"):
			return 20;
	
		case joaat("WEAPON_HEAVYSNIPER"):
			return 21;
	
		case joaat("WEAPON_PUMPSHOTGUN"):
			return 22;
	
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return 23;
	
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 24;
	
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return 25;
	
		case joaat("WEAPON_GRENADELAUNCHER"):
			return 26;
	
		case joaat("WEAPON_RPG"):
			return 27;
	
		case joaat("WEAPON_MINIGUN"):
			return 28;
	
		case joaat("WEAPON_LOUDHAILER"):
			return 29;
	
		case joaat("WEAPON_PROGRAMMABLEAR"):
			return 30;
	
		case joaat("WEAPON_STUNGUN"):
			return 31;
	
		case joaat("WEAPON_RUBBERGUN"):
			return 32;
	
		case joaat("GADGET_PARACHUTE"):
			return 33;
	
		case joaat("WEAPON_KNIFE"):
			return 34;
	
		case joaat("WEAPON_NIGHTSTICK"):
			return 35;
	
		case joaat("WEAPON_HAMMER"):
			return 36;
	
		case joaat("WEAPON_BAT"):
			return 37;
	
		case joaat("WEAPON_CROWBAR"):
			return 38;
	
		case joaat("WEAPON_GOLFCLUB"):
			return 39;
	
		case joaat("WEAPON_GRENADELAUNCHER_SMOKE"):
			return 40;
	
		case joaat("WEAPON_MOLOTOV"):
			return 41;
	
		case joaat("WEAPON_FIREEXTINGUISHER"):
			return 42;
	
		case joaat("WEAPON_PETROLCAN"):
			return 43;
	
		case joaat("WEAPON_DIGISCANNER"):
			return 44;
	
		case joaat("WEAPON_BOTTLE"):
			return 45;
	
		case joaat("WEAPON_SPECIALCARBINE"):
			return 46;
	
		case joaat("WEAPON_SNSPISTOL"):
			return 47;
	
		case joaat("WEAPON_HEAVYPISTOL"):
			return 49;
	
		case joaat("WEAPON_BULLPUPRIFLE"):
			return 48;
	
		case joaat("WEAPON_GUSENBERG"):
			return 50;
	
		case joaat("WEAPON_DAGGER"):
			return 51;
	
		case joaat("WEAPON_VINTAGEPISTOL"):
			return 52;
	
		case joaat("WEAPON_FLAREGUN"):
			return 57;
	
		case joaat("WEAPON_MUSKET"):
			return 53;
	
		case joaat("WEAPON_FIREWORK"):
			return 54;
	
		case joaat("WEAPON_MARKSMANRIFLE"):
			return 56;
	
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 55;
	
		case joaat("WEAPON_PROXMINE"):
			return 60;
	
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return 61;
	
		case joaat("WEAPON_HATCHET"):
			return 58;
	
		case joaat("WEAPON_RAILGUN"):
			return 59;
	
		case joaat("WEAPON_COMBATPDW"):
			return 64;
	
		case joaat("WEAPON_KNUCKLE"):
			return 62;
	
		case joaat("WEAPON_MARKSMANPISTOL"):
			return 63;
	
		case joaat("WEAPON_MACHETE"):
			return 65;
	
		case joaat("WEAPON_MACHINEPISTOL"):
			return 68;
	
		case joaat("WEAPON_DBSHOTGUN"):
			return 66;
	
		case joaat("WEAPON_COMPACTRIFLE"):
			return 67;
	
		case joaat("WEAPON_FLASHLIGHT"):
			return 69;
	
		case joaat("WEAPON_REVOLVER"):
			return 70;
	
		case joaat("WEAPON_SWITCHBLADE"):
			return 71;
	
		case joaat("WEAPON_AUTOSHOTGUN"):
			return 72;
	
		case joaat("WEAPON_MINISMG"):
			return 73;
	
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 74;
	
		case joaat("WEAPON_BATTLEAXE"):
			return 75;
	
		case joaat("WEAPON_PIPEBOMB"):
			return 76;
	
		case joaat("WEAPON_POOLCUE"):
			return 77;
	
		case joaat("WEAPON_WRENCH"):
			return 78;
	
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 8;
	
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 9;
	
		case joaat("WEAPON_COMBATMG_MK2"):
			return 13;
	
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 21;
	
		case joaat("WEAPON_PISTOL_MK2"):
			return 1;
	
		case joaat("WEAPON_SMG_MK2"):
			return 5;
	
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 22;
	
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 46;
	
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return 47;
	
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 56;
	
		case joaat("WEAPON_REVOLVER_MK2"):
			return 70;
	
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 48;
	
		case joaat("WEAPON_DOUBLEACTION"):
			return 79;
	
		case joaat("WEAPON_STONE_HATCHET"):
			return 80;
	
		case joaat("WEAPON_RAYPISTOL"):
			return 81;
	
		case joaat("WEAPON_RAYCARBINE"):
			return 82;
	
		case joaat("WEAPON_RAYMINIGUN"):
			return 83;
	
		case joaat("WEAPON_NAVYREVOLVER"):
			return 84;
	
		case joaat("WEAPON_CERAMICPISTOL"):
			return 85;
	
		case joaat("WEAPON_COMBATSHOTGUN"):
			return 86;
	
		case joaat("WEAPON_MILITARYRIFLE"):
			return 88;
	
		case joaat("WEAPON_GADGETPISTOL"):
			return 87;
	
		case joaat("WEAPON_HEAVYRIFLE"):
			return 10;
	
		case joaat("WEAPON_EMPLAUNCHER"):
			return 89;
	
		case joaat("WEAPON_FERTILIZERCAN"):
			return 90;
	
		case joaat("WEAPON_STUNGUN_MP"):
			return 91;
	
		case joaat("WEAPON_METALDETECTOR"):
			return 92;
	
		case joaat("WEAPON_TACTICALRIFLE"):
			return 93;
	
		case joaat("WEAPON_PRECISIONRIFLE"):
			return 94;
	
		case 465894841:
			return 95;
	
		case 1703483498:
			return 96;
	
		case -22923932:
			return 97;
	
		case 350597077:
			return 98;
	}

	return 0;
}

char* func_76(int iParam0, Hash hParam1) // Position - 0xC037
{
	int dlcWeaponIndex;
	int i;
	var unk;
	var unk2;

	if (hParam1 == joaat("WEAPON_KNUCKLE"))
	{
		switch (iParam0)
		{
			case joaat("COMPONENT_KNUCKLE_VARMOD_BASE"):
				return "WT_KNUCKLE" /*Knuckle Duster*/;
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
				return "WCT_KNUCK_02";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
				return "WCT_KNUCK_BG";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
				return "WCT_KNUCK_DLR";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
				return "WCT_KNUCK_DMD";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
				return "WCT_KNUCK_HT";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
				return "WCT_KNUCK_LV";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
				return "WCT_KNUCK_PC";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
				return "WCT_KNUCK_SLG";
		
			case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
				return "WCT_KNUCK_VG";
		}
	}
	else if (hParam1 == joaat("WEAPON_BAT"))
	{
		switch (iParam0)
		{
			case 716207715:
				return "WCT_BAT_XM3";
		
			case 446271089:
				return "WCT_BAT_XM301";
		
			case 1045616099:
				return "WCT_BAT_XM302";
		
			case 1336277129:
				return "WCT_BAT_XM303";
		
			case -513369076:
				return "WCT_BAT_XM304";
		
			case -447700000:
				return "WCT_BAT_XM305";
		
			case -149207179:
				return "WCT_BAT_XM306";
		
			case 166784288:
				return "WCT_BAT_XM307";
		
			case 2068729789:
				return "WCT_BAT_XM308";
		
			case 1761389338:
				return "WCT_BAT_XM309";
		}
	}
	else if (hParam1 == joaat("WEAPON_KNIFE"))
	{
		switch (iParam0)
		{
			case 370527443:
				return "WCT_KNIFE_XM3";
		
			case 1109907117:
				return "WCT_KNIFE_XM301";
		
			case 2055456612:
				return "WCT_KNIFE_XM302";
		
			case 1690606566:
				return "WCT_KNIFE_XM303";
		
			case -1633316949:
				return "WCT_KNIFE_XM304";
		
			case -1461476313:
				return "WCT_KNIFE_XM305";
		
			case -1770422457:
				return "WCT_KNIFE_XM306";
		
			case -2059739958:
				return "WCT_KNIFE_XM307";
		
			case -1280001599:
				return "WCT_KNIFE_XM308";
		
			case -922885037:
				return "WCT_KNIFE_XM309";
		}
	}

	switch (iParam0)
	{
		case 0:
			return "WCT_NONE" /*No Attachment*/;
	
		case joaat("COMPONENT_AT_RAILCOVER_01"):
			return "WCT_RAIL";
	
		case joaat("COMPONENT_AT_AR_AFGRIP"):
			return "WCT_GRIP" /*Grip*/;
	
		case joaat("COMPONENT_AT_PI_FLSH"):
			return "WCT_FLASH" /*Flashlight*/;
	
		case joaat("COMPONENT_AT_AR_FLSH"):
			return "WCT_FLASH" /*Flashlight*/;
	
		case joaat("COMPONENT_AT_SCOPE_MACRO"):
			return "WCT_SCOPE_MAC" /*Scope*/;
	
		case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
			return "WCT_SCOPE_MAC" /*Scope*/;
	
		case joaat("COMPONENT_AT_SCOPE_SMALL"):
			return "WCT_SCOPE_SML" /*Scope*/;
	
		case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
			return "WCT_SCOPE_SML" /*Scope*/;
	
		case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
			return "WCT_SCOPE_MED" /*Scope*/;
	
		case joaat("COMPONENT_AT_SCOPE_LARGE"):
			return "WCT_SCOPE_LRG" /*Scope*/;
	
		case joaat("COMPONENT_AT_SCOPE_MAX"):
			return "WCT_SCOPE_MAX" /*Advanced Scope*/;
	
		case joaat("COMPONENT_AT_PI_SUPP"):
			return "WCT_SUPP" /*Suppressor*/;
	
		case joaat("COMPONENT_AT_AR_SUPP"):
			return "WCT_SUPP" /*Suppressor*/;
	
		case joaat("COMPONENT_AT_AR_SUPP_02"):
			return "WCT_SUPP" /*Suppressor*/;
	
		case joaat("COMPONENT_AT_SR_SUPP"):
			return "WCT_SUPP" /*Suppressor*/;
	
		case joaat("COMPONENT_PISTOL_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_PISTOL_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_APPISTOL_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_APPISTOL_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_MICROSMG_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_MICROSMG_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_SMG_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_SMG_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_MG_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_MG_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_COMBATMG_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_COMBATMG_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_MINIGUN_CLIP_01"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_PISTOL50_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_PISTOL50_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_ASSAULTSNIPER_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_ASSAULTMG_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_ASSAULTMG_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_TACTICALRIFLE_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_TACTICALRIFLE_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
			return "WCT_SCOPE_LRG" /*Scope*/;
	
		case joaat("COMPONENT_AT_PI_SUPP_02"):
			return "WCT_SUPP" /*Suppressor*/;
	
		case joaat("COMPONENT_COMBATPDW_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_COMBATPDW_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_MARKSMANPISTOL_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_METAL";
	
		case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
			return "WCT_VAR_METAL";
	
		case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
			return "WCT_VAR_SIL";
	
		case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
			return "WCT_VAR_WOOD";
	
		case joaat("COMPONENT_SMG_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
			return "WCT_VAR_METAL";
	
		case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_WOOD";
	
		case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
			return "WCT_VAR_METAL";
	
		case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
			return "WCT_VAR_ETCHM";
	
		case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD";
	
		case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
			return "WCT_VAR_WOOD";
	
		case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
			return "WCT_VAR_ETCHM";
	
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_BASE"):
			return "WCT_SB_BASE";
	
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
			return "WCT_SB_VAR1";
	
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
			return "WCT_SB_VAR2";
	
		case joaat("COMPONENT_REVOLVER_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
			return "WCT_REV_VARB";
	
		case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
			return "WCT_REV_VARG";
	
		case joaat("COMPONENT_SMG_CLIP_03"):
			return "WCT_CLIP_DRM";
	
		case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
			return "WCT_CLIP_BOX";
	
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
			return "WCT_CLIP_DRM";
	
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
			return "WCT_CLIP_DRM";
	
		case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
			return "WCT_VAR_GUN";
	
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND";
	
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND";
	
		case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
			return "WCT_SCOPE_MAC2";
	
		case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
			return "WCT_SCOPE_SML2";
	
		case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
			return "WCT_VAR_RAY18";
	
		case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
			return "WCT_CLIP1" /*Default Clip*/;
	
		case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
			return "WCT_CLIP2" /*Extended Clip*/;
	
		case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
			return "WCT_SUPP" /*Suppressor*/;
	
		case joaat("COMPONENT_HEAVYRIFLE_CAMO1"):
			return "WCT_VAR_FAM";
	
		case joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"):
			return "WCT_VAR_WEED";
	
		case joaat("COMPONENT_APPISTOL_VARMOD_SECURITY"):
			return "WCT_VAR_STUD";
	
		case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"):
			return "WCT_VAR_BONE";
	
		case 1141184690:
			return "WCT_PISTMK2_XM3";
	
		case -1566778158:
			return "WCT_MSMG_XM3";
	
		case 330905451:
			return "WCT_PUMPSHT_XM3";
	
		case 375646046:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case 503494624:
			return "WCT_SUPP" /*Suppressor*/;
	
		case 1694268374:
			return "WCT_MSMGFRN_VAR";
	
		case 1605520746:
			return "WCT_CRBNMIC_VAR";
	
		case -1240142720:
			return "WCT_RPGTVR_VAR";
	
		case 943088878:
			return "WCT_CLIP1" /*Default Clip*/;
	
		case 310778254:
			return "WCT_CLIP2" /*Extended Clip*/;
	
		default:
			if (hParam1 != 0)
			{
				dlcWeaponIndex = func_104(hParam1, &unk);
			
				if (dlcWeaponIndex != -1)
				{
					for (i = 0; i < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(dlcWeaponIndex); i = i + 1)
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(dlcWeaponIndex, i, &ComponentDataPtr))
							if (ComponentDataPtr.f_3 == iParam0)
								return func_77(&(ComponentDataPtr.f_6));
					}
				}
			}
			break;
	}

	return "WCT_INVALID";
}

char* func_77(var uParam0) // Position - 0xCA44
{
	return uParam0;
}

BOOL func_78() // Position - 0xCA4E
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
		return true;

	return false;
}

BOOL _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM() // Position - 0xCA6B
{
	if (MISC::IS_PC_VERSION())
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();

	return false;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_80(int iParam0) // Position - 0xCA82
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		switch (iParam0)
		{
			case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
			case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
			case joaat("COMPONENT_COMBATPDW_CLIP_03"):
			case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
			case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
			case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
			case joaat("COMPONENT_SMG_CLIP_03"):
			case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
				return false;
		
			default:
				goto 0x5E;
		}
	}
	else if (func_81(iParam0))
	{
		return Global_262145.f_21368;
	}

	return true;
}

BOOL func_81(int iParam0) // Position - 0xCAE4
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
			return true;
	}

	return false;
}

int func_82() // Position - 0xCB43
{
	int outValue;
	int outValue2;
	Hash statHash;
	int profileSetting;

	if (IS_BIT_SET(Global_25, 6))
		if (IS_BIT_SET(Global_25, 2) || IS_BIT_SET(Global_25, 4))
			return 1;
		else
			return 0;

	if (STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &outValue, -1))
		if (IS_BIT_SET(outValue, 6))
			if (IS_BIT_SET(outValue, 2) || IS_BIT_SET(outValue, 4))
				return 1;
			else
				return 0;

	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_152688.f_3)
		{
			statHash = joaat("MPPLY_PLAT_UP_LB_CHECK");
		
			if (STATS::STAT_GET_INT(statHash, &outValue2, -1))
				if (IS_BIT_SET(outValue2, 8))
					return 1;
		}
	}

	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		profileSetting = MISC::GET_PROFILE_SETTING(866);
	
		if (IS_BIT_SET(profileSetting, 2) || IS_BIT_SET(profileSetting, 4))
			return 1;
	}

	return 0;
}

int func_83() // Position - 0xCBF9
{
	int outValue;
	int outValue2;
	Hash statHash;
	int profileSetting;
	int profileSetting2;

	if (IS_BIT_SET(Global_25, 5))
		if (IS_BIT_SET(Global_25, 1) || IS_BIT_SET(Global_25, 3))
			return 1;
		else
			return 0;

	if (STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &outValue, -1))
		if (IS_BIT_SET(outValue, 5))
			if (IS_BIT_SET(outValue, 1) || IS_BIT_SET(outValue, 3))
				return 1;
			else
				return 0;

	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_152688.f_3)
		{
			statHash = joaat("MPPLY_PLAT_UP_LB_CHECK");
		
			if (STATS::STAT_GET_INT(statHash, &outValue2, -1))
				if (IS_BIT_SET(outValue2, 5))
					return 1;
		}
	}

	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		profileSetting = MISC::GET_PROFILE_SETTING(866);
	
		if (IS_BIT_SET(profileSetting, 1) || IS_BIT_SET(profileSetting, 3))
			return 1;
	}

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_SPECIAL_EDITION_CONTENT())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &profileSetting2, -1);
				MISC::SET_BIT(&profileSetting2, 1);
				MISC::SET_BIT(&profileSetting2, 3);
				MISC::SET_BIT(&profileSetting2, 5);
				MISC::SET_BIT(&Global_25, 1);
				MISC::SET_BIT(&Global_25, 3);
				MISC::SET_BIT(&Global_25, 5);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), profileSetting2, true);
			
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					profileSetting2 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&profileSetting2, 1);
					MISC::SET_BIT(&profileSetting2, 3);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(profileSetting2);
				}
			
				return 1;
			}
		}
	}

	return 0;
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0xCD32
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

BOOL func_85(int iParam0) // Position - 0xCDEA
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
		case 1011473080:
			return true;
	}

	return false;
}

int func_86(Hash hParam0, var uParam1) // Position - 0xCE8B
{
	int num;
	int num2;
	var unk;

	num = 0;

	switch (hParam0)
	{
		case joaat("WEAPON_KNIFE"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (func_87(370527443, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 370527443;
					num = num + 1;
				}
			
				if (func_87(1109907117, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 1109907117;
					num = num + 1;
				}
			
				if (func_87(2055456612, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 2055456612;
					num = num + 1;
				}
			
				if (func_87(1690606566, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 1690606566;
					num = num + 1;
				}
			
				if (func_87(-1633316949, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -1633316949;
					num = num + 1;
				}
			
				if (func_87(-1461476313, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -1461476313;
					num = num + 1;
				}
			
				if (func_87(-1770422457, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -1770422457;
					num = num + 1;
				}
			
				if (func_87(-2059739958, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -2059739958;
					num = num + 1;
				}
			
				if (func_87(-1280001599, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -1280001599;
					num = num + 1;
				}
			
				if (func_87(-922885037, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -922885037;
					num = num + 1;
				}
			}
			break;
	
		case joaat("WEAPON_BAT"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (func_87(716207715, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 716207715;
					num = num + 1;
				}
			
				if (func_87(446271089, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 446271089;
					num = num + 1;
				}
			
				if (func_87(1045616099, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 1045616099;
					num = num + 1;
				}
			
				if (func_87(1336277129, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 1336277129;
					num = num + 1;
				}
			
				if (func_87(-513369076, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -513369076;
					num = num + 1;
				}
			
				if (func_87(-447700000, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -447700000;
					num = num + 1;
				}
			
				if (func_87(-149207179, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -149207179;
					num = num + 1;
				}
			
				if (func_87(166784288, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 166784288;
					num = num + 1;
				}
			
				if (func_87(2068729789, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 2068729789;
					num = num + 1;
				}
			
				if (func_87(1761389338, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 1761389338;
					num = num + 1;
				}
			}
			break;
	}

	return num;
}

int func_87(int iParam0, Hash hParam1, var uParam2, var uParam3) // Position - 0xD207
{
	*uParam2 = 1;
	*uParam3 = 0;

	switch (hParam1)
	{
		case joaat("WEAPON_BAT"):
			if (!*Global_262145.f_34131 && func_98(iLocal_54, false) || func_88(iParam0, hParam1, -1))
			{
				*uParam2 = 1;
				*uParam3 = 0;
				return 1;
			}
		
			if (*Global_262145.f_34131 || !func_98(iLocal_54, false))
			{
				*uParam2 = 0;
				*uParam3 = 1;
				return 1;
			}
		
			return 1;
	
		case joaat("WEAPON_KNIFE"):
			if (!*Global_262145.f_34131 && func_98(iLocal_54, false) || func_88(iParam0, hParam1, -1))
			{
				*uParam2 = 1;
				*uParam3 = 0;
				return 1;
			}
		
			if (*Global_262145.f_34131)
			{
				*uParam2 = 0;
				*uParam3 = 1;
				return 1;
			}
		
			return 1;
	}

	return 0;
}

BOOL func_88(int iParam0, Hash hParam1, int iParam2) // Position - 0xD2E3
{
	int num;
	int num2;

	if (func_97())
		return false;

	num = func_92(iParam0, hParam1, iParam2);
	num2 = func_90(iParam0, hParam1);
	return IS_BIT_SET(num, func_89(num2));
}

int func_89(int iParam0) // Position - 0xD315
{
	return iParam0 % 32;
}

int func_90(int iParam0, Hash hParam1) // Position - 0xD322
{
	return func_91(iParam0, hParam1);
}

int func_91(int iParam0, int iParam1) // Position - 0xD332
{
	switch (iParam1)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_CLIP_01"):
					return 1;
			
				case joaat("COMPONENT_PISTOL_CLIP_02"):
					return 2;
			
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 3;
			
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 4;
			
				case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
					return 175;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 211;
			}
			break;
	
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
					return 5;
			
				case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
					return 6;
			
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 7;
			
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 8;
			
				case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
					return 186;
			}
			break;
	
		case joaat("WEAPON_APPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_APPISTOL_CLIP_01"):
					return 11;
			
				case joaat("COMPONENT_APPISTOL_CLIP_02"):
					return 12;
			
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 13;
			
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 14;
			
				case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
					return 164;
			
				case joaat("COMPONENT_APPISTOL_VARMOD_SECURITY"):
					return 569;
			}
			break;
	
		case joaat("WEAPON_MICROSMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MICROSMG_CLIP_01"):
					return 15;
			
				case joaat("COMPONENT_MICROSMG_CLIP_02"):
					return 16;
			
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 17;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 18;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 19;
			
				case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
					return 174;
			
				case joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"):
					return 570;
			
				case 1694268374:
					return 605;
			
				case -1566778158:
					return 602;
			}
			break;
	
		case joaat("WEAPON_SMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_CLIP_01"):
					return 22;
			
				case joaat("COMPONENT_SMG_CLIP_02"):
					return 23;
			
				case joaat("COMPONENT_SMG_CLIP_03"):
					return 207;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 24;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
					return 25;
			
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 26;
			
				case joaat("COMPONENT_SMG_VARMOD_LUXE"):
					return 179;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 212;
			}
			break;
	
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
					return 27;
			
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
					return 28;
			
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
					return 201;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 29;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 30;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 31;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 32;
			
				case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
					return 165;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 213;
			}
			break;
	
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
					return 33;
			
				case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
					return 34;
			
				case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
					return 202;
			
				case joaat("COMPONENT_AT_RAILCOVER_01"):
					return 35;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 36;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 37;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 38;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 39;
			
				case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
					return 168;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 214;
			
				case 1605520746:
					return 604;
			}
			break;
	
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
					return 44;
			
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
					return 45;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 47;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 48;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 49;
			
				case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
					return 163;
			}
			break;
	
		case joaat("WEAPON_MG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MG_CLIP_01"):
					return 50;
			
				case joaat("COMPONENT_MG_CLIP_02"):
					return 51;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
					return 52;
			
				case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
					return 187;
			}
			break;
	
		case joaat("WEAPON_COMBATMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_CLIP_01"):
					return 53;
			
				case joaat("COMPONENT_COMBATMG_CLIP_02"):
					return 54;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 55;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 56;
			
				case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
					return 188;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 215;
			}
			break;
	
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SR_SUPP"):
					return 59;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 60;
			
				case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
					return 193;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 389;
			
				case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"):
					return 571;
			
				case 330905451:
					return 603;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
					return 64;
			
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
					return 65;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 66;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 67;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 68;
			}
			break;
	
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
					return 69;
			
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 70;
			
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 71;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 72;
			
				case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
					return 180;
			}
			break;
	
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
					return 76;
			
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 77;
			
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 82;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 216;
			}
			break;
	
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 78;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 79;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 80;
			}
			break;
	
		case joaat("WEAPON_MINIGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MINIGUN_CLIP_01"):
					return 81;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
					return 83;
			
				case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
					return 84;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 85;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 86;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 87;
			
				case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
					return 189;
			}
			break;
	
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 88;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 89;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 90;
			}
			break;
	
		case joaat("WEAPON_PISTOL50"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL50_CLIP_01"):
					return 91;
			
				case joaat("COMPONENT_PISTOL50_CLIP_02"):
					return 92;
			
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 93;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 94;
			
				case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
					return 176;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSNIPER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSNIPER_CLIP_01"):
					return 95;
			
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 96;
			
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 97;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 98;
			}
			break;
	
		case joaat("WEAPON_ASSAULTMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTMG_CLIP_01"):
					return 105;
			
				case joaat("COMPONENT_ASSAULTMG_CLIP_02"):
					return 106;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 107;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 108;
			}
			break;
	
		case joaat("WEAPON_PROGRAMMABLEAR"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_01"):
					return 109;
			
				case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_02"):
					return 110;
			}
			break;
	
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
					return 111;
			
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
					return 112;
			
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
					return 208;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 113;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 114;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 115;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 116;
			
				case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
					return 190;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 390;
			}
			break;
	
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
					return 117;
			
				case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
					return 118;
			
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 119;
			
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 120;
			
				case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
					return 191;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 391;
			}
			break;
	
		case joaat("WEAPON_HEAVYPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
					return 121;
			
				case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
					return 122;
			
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 123;
			
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 124;
			
				case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
					return 171;
			}
			break;
	
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
					return 131;
			
				case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
					return 132;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 127;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 128;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 129;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 130;
			
				case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
					return 192;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 394;
			}
			break;
	
		case joaat("WEAPON_GUSENBERG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_GUSENBERG_CLIP_01"):
					return 125;
			
				case joaat("COMPONENT_GUSENBERG_CLIP_02"):
					return 126;
			}
			break;
	
		case joaat("WEAPON_VINTAGEPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
					return 133;
			
				case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
					return 134;
			
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 136;
			}
			break;
	
		case joaat("WEAPON_HEAVYSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
					return 137;
			
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
					return 140;
			
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
					return 205;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 145;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 146;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 147;
			}
			break;
	
		case joaat("WEAPON_MARKSMANRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
					return 138;
			
				case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
					return 139;
			
				case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
					return 141;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 142;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 143;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 144;
			
				case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
					return 172;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 392;
			}
			break;
	
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATPDW_CLIP_01"):
					return 149;
			
				case joaat("COMPONENT_COMBATPDW_CLIP_02"):
					return 150;
			
				case joaat("COMPONENT_COMBATPDW_CLIP_03"):
					return 203;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 151;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 152;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 153;
			}
			break;
	
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
					return 178;
			}
			break;
	
		case joaat("WEAPON_MARKSMANPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANPISTOL_CLIP_01"):
					return 148;
			}
			break;
	
		case joaat("WEAPON_KNUCKLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
					return 154;
			
				case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
					return 155;
			
				case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
					return 156;
			
				case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
					return 157;
			
				case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
					return 158;
			
				case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
					return 159;
			
				case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
					return 160;
			
				case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
					return 161;
			
				case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
					return 162;
			}
			break;
	
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
					return 184;
			
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
					return 185;
			
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
					return 206;
			
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 183;
			}
			break;
	
		case joaat("WEAPON_SWITCHBLADE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
					return 194;
			
				case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
					return 195;
			}
			break;
	
		case joaat("WEAPON_REVOLVER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_REVOLVER_CLIP_01"):
					return 196;
			
				case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
					return 197;
			
				case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
					return 198;
			
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 393;
			}
			break;
	
		case joaat("WEAPON_COMPACTRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_01"):
					return 199;
			
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_02"):
					return 200;
			
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
					return 204;
			}
			break;
	
		case joaat("WEAPON_MINISMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MINISMG_CLIP_01"):
					return 209;
			
				case joaat("COMPONENT_MINISMG_CLIP_02"):
					return 210;
			}
			break;
	
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_MK2_CLIP_01"):
					return 217;
			
				case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
					return 218;
			
				case joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"):
					return 219;
			
				case joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"):
					return 220;
			
				case joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"):
					return 221;
			
				case joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"):
					return 222;
			
				case joaat("COMPONENT_AT_PI_FLSH_02"):
					return 223;
			
				case joaat("COMPONENT_AT_PI_RAIL"):
					return 224;
			
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 225;
			
				case joaat("COMPONENT_AT_PI_COMP"):
					return 226;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO"):
					return 367;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
					return 368;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
					return 369;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
					return 370;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
					return 371;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
					return 372;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
					return 373;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
					return 374;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
					return 375;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
					return 376;
			
				case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
					return 377;
			
				case 1141184690:
					return 601;
			}
			break;
	
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_MK2_CLIP_01"):
					return 227;
			
				case joaat("COMPONENT_SMG_MK2_CLIP_02"):
					return 228;
			
				case joaat("COMPONENT_SMG_MK2_CLIP_FMJ"):
					return 229;
			
				case joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"):
					return 230;
			
				case joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"):
					return 231;
			
				case joaat("COMPONENT_SMG_MK2_CLIP_TRACER"):
					return 232;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 233;
			
				case joaat("COMPONENT_AT_SIGHTS_SMG"):
					return 234;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
					return 235;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
					return 236;
			
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 237;
			
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 238;
			
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 239;
			
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 240;
			
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 241;
			
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 242;
			
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 243;
			
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 244;
			
				case joaat("COMPONENT_AT_SB_BARREL_01"):
					return 245;
			
				case joaat("COMPONENT_AT_SB_BARREL_02"):
					return 246;
			
				case joaat("COMPONENT_SMG_MK2_CAMO"):
					return 378;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_02"):
					return 379;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_03"):
					return 380;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_04"):
					return 381;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_05"):
					return 382;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_06"):
					return 383;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_07"):
					return 384;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_08"):
					return 385;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_09"):
					return 386;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_10"):
					return 387;
			
				case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
					return 388;
			}
			break;
	
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"):
					return 247;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
					return 248;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"):
					return 249;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"):
					return 250;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"):
					return 251;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"):
					return 252;
			
				case joaat("COMPONENT_AT_SCOPE_LARGE_MK2"):
					return 253;
			
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 254;
			
				case joaat("COMPONENT_AT_SCOPE_NV"):
					return 255;
			
				case joaat("COMPONENT_AT_SCOPE_THERMAL"):
					return 256;
			
				case joaat("COMPONENT_AT_SR_SUPP_03"):
					return 257;
			
				case joaat("COMPONENT_AT_MUZZLE_08"):
					return 258;
			
				case joaat("COMPONENT_AT_MUZZLE_09"):
					return 259;
			
				case joaat("COMPONENT_AT_SR_BARREL_01"):
					return 260;
			
				case joaat("COMPONENT_AT_SR_BARREL_02"):
					return 261;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
					return 356;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
					return 357;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
					return 358;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
					return 359;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
					return 360;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
					return 361;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
					return 362;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
					return 363;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
					return 364;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
					return 365;
			
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
					return 366;
			}
			break;
	
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_01"):
					return 262;
			
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
					return 263;
			
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"):
					return 264;
			
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"):
					return 265;
			
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"):
					return 266;
			
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"):
					return 267;
			
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 268;
			
				case joaat("COMPONENT_AT_SIGHTS"):
					return 269;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 270;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 271;
			
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 272;
			
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 273;
			
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 274;
			
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 275;
			
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 276;
			
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 277;
			
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 278;
			
				case joaat("COMPONENT_AT_MG_BARREL_01"):
					return 279;
			
				case joaat("COMPONENT_AT_MG_BARREL_02"):
					return 280;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
					return 345;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
					return 346;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
					return 347;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
					return 348;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
					return 349;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
					return 350;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
					return 351;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
					return 352;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
					return 353;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
					return 354;
			
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
					return 355;
			}
			break;
	
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"):
					return 281;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
					return 282;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 283;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"):
					return 284;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"):
					return 285;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"):
					return 286;
			
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 287;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 288;
			
				case joaat("COMPONENT_AT_SIGHTS"):
					return 289;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 290;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 291;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 292;
			
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 293;
			
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 294;
			
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 295;
			
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 296;
			
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 297;
			
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 298;
			
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 299;
			
				case joaat("COMPONENT_AT_AR_BARREL_01"):
					return 300;
			
				case joaat("COMPONENT_AT_AR_BARREL_02"):
					return 301;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
					return 323;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
					return 324;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
					return 325;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
					return 326;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
					return 327;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
					return 328;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
					return 329;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
					return 330;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
					return 331;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
					return 332;
			
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
					return 333;
			}
			break;
	
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"):
					return 302;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
					return 303;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"):
					return 304;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"):
					return 305;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"):
					return 306;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"):
					return 307;
			
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 308;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 309;
			
				case joaat("COMPONENT_AT_SIGHTS"):
					return 310;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 311;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 312;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 313;
			
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 314;
			
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 315;
			
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 316;
			
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 317;
			
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 318;
			
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 319;
			
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 320;
			
				case joaat("COMPONENT_AT_CR_BARREL_01"):
					return 321;
			
				case joaat("COMPONENT_AT_CR_BARREL_02"):
					return 322;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
					return 334;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
					return 335;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
					return 336;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
					return 337;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
					return 338;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
					return 339;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
					return 340;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
					return 341;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
					return 342;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
					return 343;
			
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
					return 344;
			}
			break;
	
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"):
					return 395;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"):
					return 396;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"):
					return 397;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"):
					return 398;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"):
					return 399;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 400;
			
				case joaat("COMPONENT_AT_SIGHTS"):
					return 401;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 402;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 403;
			
				case joaat("COMPONENT_AT_SR_SUPP_03"):
					return 404;
			
				case joaat("COMPONENT_AT_MUZZLE_08"):
					return 405;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
					return 488;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
					return 489;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
					return 490;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
					return 491;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
					return 492;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
					return 493;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
					return 494;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
					return 495;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
					return 496;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
					return 497;
			
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
					return 498;
			}
			break;
	
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"):
					return 406;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"):
					return 407;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"):
					return 408;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"):
					return 409;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"):
					return 410;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"):
					return 411;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 412;
			
				case joaat("COMPONENT_AT_SIGHTS"):
					return 413;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 414;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 415;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 416;
			
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 417;
			
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 418;
			
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 419;
			
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 420;
			
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 421;
			
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 422;
			
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 423;
			
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 424;
			
				case joaat("COMPONENT_AT_SC_BARREL_01"):
					return 425;
			
				case joaat("COMPONENT_AT_SC_BARREL_02"):
					return 426;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
					return 532;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
					return 533;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
					return 534;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
					return 535;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
					return 536;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
					return 537;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
					return 538;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
					return 539;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
					return 540;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
					return 541;
			
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
					return 542;
			}
			break;
	
		case joaat("WEAPON_SNSPISTOL_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"):
					return 427;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
					return 428;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"):
					return 429;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"):
					return 430;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"):
					return 431;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"):
					return 432;
			
				case joaat("COMPONENT_AT_PI_FLSH_03"):
					return 433;
			
				case joaat("COMPONENT_AT_PI_RAIL_02"):
					return 434;
			
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 435;
			
				case joaat("COMPONENT_AT_PI_COMP_02"):
					return 436;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
					return 510;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
					return 511;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
					return 512;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
					return 513;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
					return 514;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
					return 515;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
					return 516;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
					return 517;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
					return 518;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
					return 519;
			
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
					return 520;
			}
			break;
	
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"):
					return 437;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"):
					return 438;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 439;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"):
					return 440;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"):
					return 441;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"):
					return 442;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 443;
			
				case joaat("COMPONENT_AT_SIGHTS"):
					return 444;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 445;
			
				case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"):
					return 446;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 447;
			
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 448;
			
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 449;
			
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 450;
			
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 451;
			
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 452;
			
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 453;
			
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 454;
			
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 455;
			
				case joaat("COMPONENT_AT_MRFL_BARREL_01"):
					return 456;
			
				case joaat("COMPONENT_AT_MRFL_BARREL_02"):
					return 457;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
					return 521;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
					return 522;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
					return 523;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
					return 524;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
					return 525;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
					return 526;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
					return 527;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
					return 528;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
					return 529;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
					return 530;
			
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
					return 531;
			}
			break;
	
		case joaat("WEAPON_REVOLVER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_01"):
					return 458;
			
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"):
					return 459;
			
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"):
					return 460;
			
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"):
					return 461;
			
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"):
					return 462;
			
				case joaat("COMPONENT_AT_SIGHTS"):
					return 463;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 464;
			
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 465;
			
				case joaat("COMPONENT_AT_PI_COMP_03"):
					return 466;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
					return 499;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
					return 500;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
					return 501;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
					return 502;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
					return 503;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
					return 504;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
					return 505;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
					return 506;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
					return 507;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
					return 508;
			
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
					return 509;
			}
			break;
	
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"):
					return 467;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"):
					return 468;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 469;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"):
					return 470;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"):
					return 471;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"):
					return 472;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 473;
			
				case joaat("COMPONENT_AT_SIGHTS"):
					return 474;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
					return 475;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 476;
			
				case joaat("COMPONENT_AT_BP_BARREL_01"):
					return 477;
			
				case joaat("COMPONENT_AT_BP_BARREL_02"):
					return 478;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 479;
			
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 480;
			
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 481;
			
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 482;
			
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 483;
			
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 484;
			
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 485;
			
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 486;
			
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 487;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
					return 543;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
					return 544;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
					return 545;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
					return 546;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
					return 547;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
					return 548;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
					return 549;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
					return 550;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
					return 551;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
					return 552;
			
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
					return 553;
			}
			break;
	
		case joaat("WEAPON_RAYPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
					return 554;
			}
			break;
	
		case joaat("WEAPON_CERAMICPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
					return 555;
			
				case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
					return 556;
			
				case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
					return 557;
			}
			break;
	
		case joaat("WEAPON_COMBATSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATSHOTGUN_CLIP_01"):
					return 559;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 560;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 561;
			}
			break;
	
		case joaat("WEAPON_MILITARYRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MILITARYRIFLE_CLIP_01"):
					return 562;
			
				case joaat("COMPONENT_MILITARYRIFLE_CLIP_02"):
					return 563;
			
				case joaat("COMPONENT_MILITARYRIFLE_SIGHT_01"):
					return 564;
			
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 565;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 566;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 567;
			}
			break;
	
		case joaat("WEAPON_GADGETPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_GADGETPISTOL_CLIP_01"):
					return 558;
			}
			break;
	
		case joaat("WEAPON_HEAVYRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYRIFLE_CLIP_01"):
					return 99;
			
				case joaat("COMPONENT_HEAVYRIFLE_CLIP_02"):
					return 100;
			
				case joaat("COMPONENT_HEAVYRIFLE_CAMO1"):
					return 568;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 101;
			
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 102;
			
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 103;
			
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 104;
			
				case joaat("COMPONENT_HEAVYRIFLE_SIGHT_01"):
					return 572;
			}
			break;
	
		case joaat("WEAPON_TACTICALRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_TACTICALRIFLE_CLIP_01"):
					return 573;
			
				case joaat("COMPONENT_TACTICALRIFLE_CLIP_02"):
					return 574;
			
				case joaat("COMPONENT_AT_AR_FLSH_REH"):
					return 575;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 576;
			
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 577;
			}
			break;
	
		case 465894841:
			switch (iParam0)
			{
				case 375646046:
					return 578;
			
				case 503494624:
					return 579;
			}
			break;
	
		case 350597077:
			switch (iParam0)
			{
				case 943088878:
					return 607;
			
				case 310778254:
					return 608;
			
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 609;
			
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 610;
			}
			break;
	
		case -22923932:
			switch (iParam0)
			{
				case 1130760338:
					return 580;
			}
			break;
	
		case joaat("WEAPON_BAT"):
			switch (iParam0)
			{
				case 716207715:
					return 581;
			
				case 446271089:
					return 583;
			
				case 1045616099:
					return 584;
			
				case 1336277129:
					return 585;
			
				case -513369076:
					return 586;
			
				case -447700000:
					return 587;
			
				case -149207179:
					return 588;
			
				case 166784288:
					return 589;
			
				case 2068729789:
					return 590;
			
				case 1761389338:
					return 591;
			}
			break;
	
		case joaat("WEAPON_KNIFE"):
			switch (iParam0)
			{
				case 370527443:
					return 582;
			
				case 1109907117:
					return 592;
			
				case 2055456612:
					return 593;
			
				case 1690606566:
					return 594;
			
				case -1633316949:
					return 595;
			
				case -1461476313:
					return 596;
			
				case -1770422457:
					return 597;
			
				case -2059739958:
					return 598;
			
				case -1280001599:
					return 599;
			
				case -922885037:
					return 600;
			}
			break;
	
		case joaat("WEAPON_RPG"):
			switch (iParam0)
			{
				case -1240142720:
					return 606;
			}
			break;
	}

	return 0;
}

int func_92(int iParam0, Hash hParam1, int iParam2) // Position - 0xF88B
{
	int num;

	num = func_11(func_93(iParam0, hParam1), iParam2);
	return num;
}

int func_93(int iParam0, Hash hParam1) // Position - 0xF8A5
{
	int num;
	int num2;

	num = func_90(iParam0, hParam1);
	num2 = func_96(num);

	if (func_95() == 0 || func_94() == 0 || func_95() == 999 && func_94() == 999)
	{
		switch (num2)
		{
			case 0:
				return 811;
		
			case 1:
				return 812;
		
			case 2:
				return 813;
		
			case 3:
				return 814;
		
			case 4:
				return 1753;
		
			case 5:
				return 2435;
		
			case 6:
				return 2828;
		
			case 7:
				return 5502;
		
			case 8:
				return 5506;
		
			case 9:
				return 5510;
		
			case 10:
				return 5623;
		
			case 11:
				return 5627;
		
			case 12:
				return 5631;
		
			case 13:
				return 5635;
		
			case 14:
				return 6374;
		
			case 15:
				return 6497;
		
			case 16:
				return 6517;
		
			case 17:
				return 6523;
		
			case 18:
				return 10272;
		
			case 19:
				return 12005;
		}
	}

	return 14385;
}

int func_94() // Position - 0xFA25
{
	return Global_32284;
}

int func_95() // Position - 0xFA30
{
	return Global_32283;
}

int func_96(int iParam0) // Position - 0xFA3B
{
	return iParam0 / 32;
}

BOOL func_97() // Position - 0xFA48
{
	return Global_1575042;
}

BOOL func_98(int iParam0, BOOL bParam1) // Position - 0xFA54
{
	if (iParam0 == 58)
	{
		if (bParam1)
			return Global_100885.f_329[58] < 5f;
	
		return true;
	}

	return false;
}

BOOL func_99(int iParam0, int iParam1, int iParam2) // Position - 0xFA7D
{
	int num;
	int num2;

	if (func_97())
		return false;

	num = func_100(iParam0, iParam1, iParam2);
	num2 = func_90(iParam0, iParam1);
	return IS_BIT_SET(num, func_89(num2));
}

int func_100(int iParam0, int iParam1, int iParam2) // Position - 0xFAAF
{
	int num;

	num = func_11(func_101(iParam0, iParam1), iParam2);
	return num;
}

int func_101(int iParam0, int iParam1) // Position - 0xFAC9
{
	int num;
	int num2;

	num = func_90(iParam0, iParam1);
	num2 = func_96(num);

	if (func_95() == 0 || func_94() == 0 || func_95() == 999 && func_94() == 999)
	{
		switch (num2)
		{
			case 0:
				return 688;
		
			case 1:
				return 689;
		
			case 2:
				return 690;
		
			case 3:
				return 691;
		
			case 4:
				return 1755;
		
			case 5:
				return 2437;
		
			case 6:
				return 2830;
		
			case 7:
				return 5504;
		
			case 8:
				return 5508;
		
			case 9:
				return 5512;
		
			case 10:
				return 5625;
		
			case 11:
				return 5629;
		
			case 12:
				return 5633;
		
			case 13:
				return 5637;
		
			case 14:
				return 6376;
		
			case 15:
				return 6499;
		
			case 16:
				return 6519;
		
			case 17:
				return 6525;
		
			case 18:
				return 10274;
		
			case 19:
				return 12007;
		}
	}

	return 1755;
}

BOOL func_102(int iParam0) // Position - 0xFC4C
{
	switch (iParam0)
	{
		case 46:
		case 47:
		case 48:
		case 49:
		case 52:
		case 53:
		case 56:
		case 59:
		case 60:
			return true;
	
		default:
		
	}

	return false;
}

void func_103(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0xFC96
{
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_1 = iParam4;
	return;
}

int func_104(Hash hParam0, Any* panParam1) // Position - 0xFCB5
{
	int i;
	int numDlcWeapons;

	numDlcWeapons = FILES::GET_NUM_DLC_WEAPONS();

	for (i = 0; i < numDlcWeapons; i = i + 1)
	{
		if (FILES::GET_DLC_WEAPON_DATA(i, panParam1))
			if (panParam1->f_1 == hParam0)
				return i;
	}

	return -1;
}

void func_105(Ped pedParam0, var uParam1) // Position - 0xFCF0
{
	int i;
	int j;
	Hash k;
	Hash hash;
	Hash pedWeapontypeInSlot;
	int unk;
	int unk2;
	Hash unk3;
	var unk4;
	int l;
	int numDlcWeaponsSp;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		for (i = 0; i <= 44 - 1; i = i + 1)
		{
			uParam1->[i].f_1 = 0;
		}
	
		for (i = 0; i <= 44 - 1; i = i + 1)
		{
			hash = func_108(i);
		
			if (hash != 0)
			{
				pedWeapontypeInSlot = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(pedParam0, func_108(i));
				pedWeapontypeInSlot.f_1 = 0;
				pedWeapontypeInSlot.f_2 = 0;
				pedWeapontypeInSlot.f_3 = 0;
				pedWeapontypeInSlot.f_4 = 0;
			
				if (pedWeapontypeInSlot != 0 && pedWeapontypeInSlot != joaat("WEAPON_UNARMED"))
				{
					pedWeapontypeInSlot.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(pedParam0, pedWeapontypeInSlot);
				
					if (pedWeapontypeInSlot == joaat("GADGET_PARACHUTE"))
						pedWeapontypeInSlot.f_1 = 1;
				
					pedWeapontypeInSlot.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(pedParam0, pedWeapontypeInSlot);
					pedWeapontypeInSlot.f_4 = WEAPON::GET_PED_WEAPON_CAMO_INDEX(pedParam0, pedWeapontypeInSlot);
				
					if (pedWeapontypeInSlot.f_1 == -1)
						if (!WEAPON::GET_MAX_AMMO(pedParam0, pedWeapontypeInSlot, &(pedWeapontypeInSlot.f_1)))
							pedWeapontypeInSlot.f_1 = 0;
				
					uParam1->[i].f_1 = pedWeapontypeInSlot.f_1;
					j = 0;
				
					for (k = func_107(pedWeapontypeInSlot, j); k != 0; k = func_107(pedWeapontypeInSlot, j))
					{
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(pedParam0, pedWeapontypeInSlot, k))
							MISC::SET_BIT(&(pedWeapontypeInSlot.f_2), j);
					
						j = j + 1;
					}
				}
			
				uParam1->[i] = { pedWeapontypeInSlot };
			}
		}
	
		for (i = 0; i <= 50; i = i + 1)
		{
			uParam1->f_221[i].f_1 = 0;
		}
	
		numDlcWeaponsSp = FILES::GET_NUM_DLC_WEAPONS_SP();
	
		for (l = 0; l < numDlcWeaponsSp; l = l + 1)
		{
			if (FILES::GET_DLC_WEAPON_DATA_SP(l, &outData) && !func_106(outData.f_1) && num < 51)
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(outData))
				{
					pedWeapontypeInSlot = outData.f_1;
					pedWeapontypeInSlot.f_1 = 0;
					pedWeapontypeInSlot.f_2 = 0;
					pedWeapontypeInSlot.f_3 = 0;
					pedWeapontypeInSlot.f_4 = 0;
					pedWeapontypeInSlot.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(pedParam0, pedWeapontypeInSlot);
				
					if (WEAPON::HAS_PED_GOT_WEAPON(pedParam0, pedWeapontypeInSlot, false))
					{
						pedWeapontypeInSlot.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(pedParam0, pedWeapontypeInSlot);
						pedWeapontypeInSlot.f_4 = WEAPON::GET_PED_WEAPON_CAMO_INDEX(pedParam0, pedWeapontypeInSlot);
					}
				
					if (pedWeapontypeInSlot.f_1 == -1)
						if (!WEAPON::GET_MAX_AMMO(pedParam0, pedWeapontypeInSlot, &(pedWeapontypeInSlot.f_1)))
							pedWeapontypeInSlot.f_1 = 0;
				
					uParam1->f_221[num].f_1 = pedWeapontypeInSlot.f_1;
					offset = 0;
				
					for (j = 0; j < FILES::GET_NUM_DLC_WEAPON_COMPONENTS_SP(l); j = j + 1)
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA_SP(l, j, &ComponentDataPtr))
						{
							if (!func_85(ComponentDataPtr.f_3))
							{
								if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(pedParam0, pedWeapontypeInSlot, ComponentDataPtr.f_3))
									MISC::SET_BIT(&(pedWeapontypeInSlot.f_2), offset);
							
								offset = offset + 1;
							}
						}
					}
				}
			
				if (pedWeapontypeInSlot != 0)
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(pedParam0, pedWeapontypeInSlot, false))
					{
						pedWeapontypeInSlot = 0;
						pedWeapontypeInSlot.f_1 = 0;
					}
				}
			
				uParam1->f_221[num] = { pedWeapontypeInSlot };
				num = num + 1;
			}
		}
	}

	return;
}

BOOL func_106(int iParam0) // Position - 0xFF78
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL50"):
			case joaat("WEAPON_BULLPUPSHOTGUN"):
			case joaat("WEAPON_ASSAULTSMG"):
				return false;
		
			case joaat("WEAPON_BOTTLE"):
			case joaat("WEAPON_SNSPISTOL"):
			case joaat("WEAPON_GUSENBERG"):
				return false;
		
			case joaat("WEAPON_HEAVYPISTOL"):
			case joaat("WEAPON_SPECIALCARBINE"):
				return false;
		
			case joaat("WEAPON_BULLPUPRIFLE"):
				return false;
		
			case joaat("WEAPON_DAGGER"):
			case joaat("WEAPON_VINTAGEPISTOL"):
				return false;
		
			case joaat("WEAPON_FIREWORK"):
			case joaat("WEAPON_MUSKET"):
				return false;
		
			case joaat("WEAPON_HEAVYSHOTGUN"):
			case joaat("WEAPON_MARKSMANRIFLE"):
				return false;
		
			case joaat("WEAPON_HOMINGLAUNCHER"):
			case joaat("WEAPON_PROXMINE"):
				return false;
		
			case joaat("WEAPON_COMBATPDW"):
			case joaat("WEAPON_KNUCKLE"):
			case joaat("WEAPON_MARKSMANPISTOL"):
				return false;
		
			case joaat("WEAPON_HEAVYRIFLE"):
			case joaat("WEAPON_ASSAULTMG"):
			case joaat("WEAPON_ASSAULTSNIPER"):
			case joaat("WEAPON_AMRIFLE"):
			case joaat("WEAPON_CROSSBOW"):
			case joaat("WEAPON_HARPOON"):
			case joaat("WEAPON_PROGRAMMABLEAR"):
			case joaat("WEAPON_RUBBERGUN"):
			case joaat("WEAPON_LOUDHAILER"):
			case joaat("WEAPON_FLAREGUN"):
			case joaat("WEAPON_HANDCUFFS"):
			case joaat("WEAPON_SNOWBALL"):
			case joaat("WEAPON_GARBAGEBAG"):
			case joaat("WEAPON_FLASHLIGHT"):
			case joaat("WEAPON_SWITCHBLADE"):
			case joaat("WEAPON_REVOLVER"):
			case joaat("WEAPON_DBSHOTGUN"):
			case joaat("WEAPON_COMPACTRIFLE"):
			case joaat("WEAPON_AUTOSHOTGUN"):
			case joaat("WEAPON_MINISMG"):
			case joaat("WEAPON_COMPACTLAUNCHER"):
			case joaat("WEAPON_BATTLEAXE"):
			case joaat("WEAPON_PIPEBOMB"):
			case joaat("WEAPON_POOLCUE"):
			case joaat("WEAPON_WRENCH"):
			case joaat("WEAPON_DOUBLEACTION"):
			case joaat("WEAPON_RAYCARBINE"):
			case joaat("WEAPON_RAYMINIGUN"):
			case joaat("WEAPON_RAYPISTOL"):
			case joaat("WEAPON_NAVYREVOLVER"):
			case joaat("WEAPON_CERAMICPISTOL"):
			case joaat("WEAPON_GADGETPISTOL"):
			case joaat("WEAPON_MILITARYRIFLE"):
			case joaat("WEAPON_COMBATSHOTGUN"):
			case joaat("WEAPON_EMPLAUNCHER"):
			case joaat("WEAPON_FERTILIZERCAN"):
			case joaat("WEAPON_STUNGUN_MP"):
			case joaat("WEAPON_METALDETECTOR"):
			case joaat("WEAPON_PRECISIONRIFLE"):
			case joaat("WEAPON_TACTICALRIFLE"):
			case 465894841:
			case 1703483498:
			case -22923932:
			case 350597077:
				return true;
		}
	}

	return false;
}

Hash func_107(Hash hParam0, int iParam1) // Position - 0x101CF
{
	int num;
	int dlcWeaponIndex;
	int i;
	int num2;
	var unk;
	var unk2;

	num = 0;

	switch (hParam0)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_PISTOL_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_PISTOL_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_PI_SUPP_02");
					break;
			
				case 5:
					num = joaat("COMPONENT_PISTOL_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_COMBATPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_COMBATPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			
				case 4:
					num = joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_APPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_APPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_APPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			
				case 4:
					num = joaat("COMPONENT_APPISTOL_VARMOD_LUXE");
					break;
			
				case 5:
					num = joaat("COMPONENT_APPISTOL_VARMOD_SECURITY");
					break;
			}
			break;
	
		case joaat("WEAPON_MICROSMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MICROSMG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MICROSMG_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 5:
					num = joaat("COMPONENT_MICROSMG_VARMOD_LUXE");
					break;
			
				case 6:
					num = joaat("COMPONENT_MICROSMG_VARMOD_SECURITY");
					break;
			
				case 7:
					num = -1566778158;
					break;
			
				case 8:
					num = 1694268374;
					break;
			}
			break;
	
		case joaat("WEAPON_SMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_SMG_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_SMG_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_SMG_CLIP_03");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_SCOPE_MACRO_02");
					break;
			
				case 7:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 8:
					num = joaat("COMPONENT_SMG_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_ASSAULTRIFLE_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_ASSAULTRIFLE_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_ASSAULTRIFLE_CLIP_03");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
			
				case 7:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 8:
					num = joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_CARBINERIFLE_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_CARBINERIFLE_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_CARBINERIFLE_CLIP_03");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_RAILCOVER_01");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 7:
					num = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
			
				case 8:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			
				case 9:
					num = joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE");
					break;
			
				case 10:
					num = 1605520746;
					break;
			}
			break;
	
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			
				case 5:
					num = joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_MG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MG_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_SMALL_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 4:
					num = joaat("COMPONENT_MG_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_COMBATMG_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_COMBATMG_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
			
				case 5:
					num = joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_AT_SR_SUPP");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 2:
					num = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER");
					break;
			
				case 3:
					num = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY");
					break;
			
				case 4:
					num = 330905451;
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			}
			break;
	
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SNIPERRIFLE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 4:
					num = joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_HEAVYSNIPER_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			}
			break;
	
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			}
			break;
	
		case joaat("WEAPON_MINIGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MINIGUN_CLIP_01");
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_ASSAULTSMG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_ASSAULTSMG_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 5:
					num = joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			}
			break;
	
		case joaat("WEAPON_PISTOL50"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_PISTOL50_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_PISTOL50_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 4:
					num = joaat("COMPONENT_PISTOL50_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_COMBATPDW_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_COMBATPDW_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_COMBATPDW_CLIP_03");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			}
			break;
	
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_BULLPUPRIFLE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_BULLPUPRIFLE_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 6:
					num = joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW");
					break;
			}
			break;
	
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SNSPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_SNSPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SPECIALCARBINE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_SPECIALCARBINE_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_SPECIALCARBINE_CLIP_03");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 7:
					num = joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_KNUCKLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_PIMP");
					break;
			
				case 1:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS");
					break;
			
				case 2:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR");
					break;
			
				case 3:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND");
					break;
			
				case 4:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_HATE");
					break;
			
				case 5:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_LOVE");
					break;
			
				case 6:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER");
					break;
			
				case 7:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_KING");
					break;
			
				case 8:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS");
					break;
			}
			break;
	
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MACHINEPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MACHINEPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_MACHINEPISTOL_CLIP_03");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			}
			break;
	
		case joaat("WEAPON_SWITCHBLADE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1");
					break;
			
				case 1:
					num = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2");
					break;
			}
			break;
	
		case joaat("WEAPON_REVOLVER"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_REVOLVER_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_REVOLVER_VARMOD_BOSS");
					break;
			
				case 2:
					num = joaat("COMPONENT_REVOLVER_VARMOD_GOON");
					break;
			}
			break;
	
		case joaat("WEAPON_MINISMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MINISMG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MINISMG_CLIP_02");
					break;
			}
			break;
	
		case joaat("WEAPON_BAT"):
			switch (iParam1)
			{
				case 0:
					num = 716207715;
					break;
			
				case 1:
					num = 446271089;
					break;
			
				case 2:
					num = 1045616099;
					break;
			
				case 3:
					num = 1336277129;
					break;
			
				case 4:
					num = -513369076;
					break;
			
				case 5:
					num = -447700000;
					break;
			
				case 6:
					num = -149207179;
					break;
			
				case 7:
					num = 166784288;
					break;
			
				case 8:
					num = 2068729789;
					break;
			
				case 9:
					num = 1761389338;
					break;
			}
			break;
	
		case joaat("WEAPON_RPG"):
			switch (iParam1)
			{
				case 0:
					num = -1240142720;
					break;
			}
			break;
	
		default:
			if (hParam0 != 0)
			{
				dlcWeaponIndex = func_104(hParam0, &unk);
			
				if (dlcWeaponIndex != -1)
				{
					for (i = 0; i < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(dlcWeaponIndex); i = i + 1)
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(dlcWeaponIndex, i, &ComponentDataPtr))
						{
							if (!func_85(ComponentDataPtr.f_3))
							{
								if (num2 == iParam1)
									return ComponentDataPtr.f_3;
							
								num2 = num2 + 1;
							}
						}
					}
				}
			}
			break;
	}

	return num;
}

Hash func_108(int iParam0) // Position - 0x10E80
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case 0:
			num = joaat("SLOT_UNARMED");
			break;
	
		case 1:
			num = joaat("SLOT_KNIFE");
			break;
	
		case 2:
			num = joaat("SLOT_NIGHTSTICK");
			break;
	
		case 3:
			num = joaat("SLOT_HAMMER");
			break;
	
		case 4:
			num = joaat("SLOT_BAT");
			break;
	
		case 5:
			num = joaat("SLOT_CROWBAR");
			break;
	
		case 6:
			num = joaat("SLOT_GOLFCLUB");
			break;
	
		case 7:
			num = joaat("SLOT_STUNGUN");
			break;
	
		case 8:
			num = joaat("SLOT_PISTOL");
			break;
	
		case 9:
			num = joaat("SLOT_COMBATPISTOL");
			break;
	
		case 10:
			num = joaat("SLOT_APPISTOL");
			break;
	
		case 11:
			num = joaat("SLOT_MICROSMG");
			break;
	
		case 12:
			num = joaat("SLOT_SMG");
			break;
	
		case 13:
			num = joaat("SLOT_ASSAULTRIFLE");
			break;
	
		case 14:
			num = joaat("SLOT_CARBINERIFLE");
			break;
	
		case 15:
			num = joaat("SLOT_ADVANCEDRIFLE");
			break;
	
		case 16:
			num = joaat("SLOT_MG");
			break;
	
		case 17:
			num = joaat("SLOT_COMBATMG");
			break;
	
		case 18:
			num = joaat("SLOT_PUMPSHOTGUN");
			break;
	
		case 19:
			num = joaat("SLOT_SAWNOFFSHOTGUN");
			break;
	
		case 20:
			num = joaat("SLOT_ASSAULTSHOTGUN");
			break;
	
		case 21:
			num = joaat("SLOT_SNIPERRIFLE");
			break;
	
		case 22:
			num = joaat("SLOT_HEAVYSNIPER");
			break;
	
		case 23:
			num = joaat("SLOT_GRENADELAUNCHER");
			break;
	
		case 24:
			num = joaat("SLOT_RPG");
			break;
	
		case 25:
			num = joaat("SLOT_MINIGUN");
			break;
	
		case 26:
			num = joaat("SLOT_GRENADE");
			break;
	
		case 27:
			num = joaat("SLOT_STICKYBOMB");
			break;
	
		case 28:
			num = joaat("SLOT_SMOKEGRENADE");
			break;
	
		case 29:
			num = joaat("SLOT_MOLOTOV");
			break;
	
		case 30:
			num = joaat("SLOT_FIREEXTINGUISHER");
			break;
	
		case 31:
			num = joaat("SLOT_PETROLCAN");
			break;
	
		case 33:
			num = joaat("SLOT_PARACHUTE");
			break;
	
		case 34:
			num = joaat("SLOT_DIGISCANNER");
			break;
	
		case 35:
			num = joaat("SLOT_OBJECT");
			break;
	
		case 36:
			num = joaat("SLOT_ASSAULTSMG");
			break;
	
		case 37:
			num = joaat("SLOT_BULLPUPSHOTGUN");
			break;
	
		case 38:
			num = joaat("SLOT_PISTOL50");
			break;
	}

	return num;
}

float func_109(int* piParam0) // Position - 0x110F4
{
	if (func_112(piParam0))
		if (func_111(piParam0))
			return piParam0->f_2;
		else
			return func_110(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;

	return piParam0->f_1;
}

float func_110(BOOL bParam0) // Position - 0x11130
{
	float num;
	float num2;
	int networkTime;
	float num3;
	float num4;

	if (bParam0)
	{
		num = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		num2 = num / 1000f;
		return num2;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTime = NETWORK::GET_NETWORK_TIME();
		num3 = SYSTEM::TO_FLOAT(networkTime);
		num4 = num3 / 1000f;
		return num4;
	}

	return SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_111(int* piParam0) // Position - 0x11188
{
	return IS_BIT_SET(*piParam0, 2);
}

BOOL func_112(int* piParam0) // Position - 0x11195
{
	return IS_BIT_SET(*piParam0, 1);
}

BOOL func_113() // Position - 0x111A2
{
	if (Global_1574612)
		return true;

	if (func_115())
		return true;

	if (func_114())
		return true;

	return func_4(124, -1);
}

BOOL func_114() // Position - 0x111D2
{
	return Global_1575051;
}

BOOL func_115() // Position - 0x111DE
{
	return Global_1575053;
}

void func_116() // Position - 0x111EA
{
	int i;

	for (i = 1; i <= 49; i = i + 1)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(i))
			if (SOCIALCLUB::SC_HAS_ACHIEVEMENT_BEEN_PASSED(i))
				func_144(i, 1);
	}

	for (i = 51; i <= 59; i = i + 1)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(i))
			if (SOCIALCLUB::SC_HAS_ACHIEVEMENT_BEEN_PASSED(i))
				func_144(i, 1);
	}

	for (i = 70; i <= 77; i = i + 1)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(i))
			if (SOCIALCLUB::SC_HAS_ACHIEVEMENT_BEEN_PASSED(i))
				func_144(i, 1);
	}

	return;
}

BOOL func_117(int iParam0, int iParam1) // Position - 0x1127E
{
	int profileSetting;
	int profileSetting2;

	if (iParam1 == -1)
		iParam1 = func_7();

	profileSetting = func_118(iParam1);
	profileSetting2 = MISC::GET_PROFILE_SETTING(profileSetting);
	return IS_BIT_SET(profileSetting2, iParam0);
}

int func_118(int iParam0) // Position - 0x112A7
{
	int num;

	if (iParam0 == -1)
		iParam0 = func_7();

	switch (iParam0)
	{
		case 0:
			num = 914;
			break;
	
		case 1:
			num = 915;
			break;
	
		case 2:
			num = 916;
			break;
	
		case 3:
			num = 917;
			break;
	
		case 4:
			num = 918;
			break;
	}

	return num;
}

BOOL func_119() // Position - 0x1130A
{
	if (func_121() && func_120(0))
		return true;

	return false;
}

var func_120(int iParam0) // Position - 0x11328
{
	return Global_1574538[iParam0];
}

var func_121() // Position - 0x11338
{
	return func_120(func_7() + 1);
}

BOOL func_122(var uParam0) // Position - 0x1134A
{
	return uParam0->f_79 == 1;
}

void func_123(var uParam0) // Position - 0x11358
{
	float num;

	num = Global_4542601;
	uParam0->f_80 = uParam0->f_80 + MISC::GET_FRAME_TIME();

	if (!func_122(uParam0))
		return;

	if (func_130(uParam0) < 0f)
	{
		func_129(uParam0, 0);
		return;
	}

	if (func_177(14))
		num = 10f;

	if (func_130(uParam0) < num)
		return;

	if (func_128(uParam0, 0))
		return;

	if (func_126(uParam0->[0]))
	{
		func_125(uParam0);
		func_124(uParam0);
		func_129(uParam0, 0);
	}

	return;
}

void func_124(var uParam0) // Position - 0x113E0
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_128(uParam0, i))
			i = *uParam0 + 100;
	}

	return;
}

void func_125(var uParam0) // Position - 0x11411
{
	int num;

	num = 1;

	if (func_128(uParam0, 0))
		return;

	while (num < *uParam0)
	{
		uParam0->[num - 1] = uParam0->[num];
		num = num + 1;
	}

	return;
}

BOOL func_126(int iParam0) // Position - 0x11448
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		return false;

	if (func_177(14) && !func_127(iParam0))
		return false;

	if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		return false;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		return true;

	return false;
}

BOOL func_127(int iParam0) // Position - 0x11492
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_128(var uParam0, int iParam1) // Position - 0x114E2
{
	return uParam0->[iParam1] == 78;
}

void func_129(var uParam0, int iParam1) // Position - 0x114F3
{
	if (iParam1 == 0f)
		uParam0->f_80 = 0f;
	else
		uParam0->f_80 = iParam1;

	return;
}

float func_130(var uParam0) // Position - 0x11510
{
	return uParam0->f_80;
}

int func_131() // Position - 0x1151C
{
	float minimapFowDiscoveryRatio;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || Global_78689)
		return 0;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			minimapFowDiscoveryRatio = HUD::GET_MINIMAP_FOW_DISCOVERY_RATIO();
		
			if (minimapFowDiscoveryRatio > 0.01f && MISC::IS_PC_VERSION())
				func_150(14, SYSTEM::FLOOR(minimapFowDiscoveryRatio * 100f));
		
			if (minimapFowDiscoveryRatio >= 0.975f)
			{
				func_144(14, 1);
				return 1;
			}
		}
	}

	return 0;
}

BOOL func_132(int iParam0) // Position - 0x11594
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return G_MissionStats.f_9088.f_330[iParam0];
}

void func_133(BOOL bParam0) // Position - 0x115C0
{
	if (Global_78689)
	{
		if (bParam0)
			func_9(bParam0);
	
		func_3(bParam0);
		func_16(bParam0);
		bParam0;
	}

	func_143(bParam0);
	func_136(bParam0);
	func_135();
	func_134();

	if (bParam0)
		func_112(&uLocal_58);

	return;
}

int func_134() // Position - 0x11614
{
	int num;
	int num2;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(50))
		return 0;

	num = 0;
	num2 = 0;
	num = num + (STATS::STAT_GET_NUMBER_OF_DAYS(joaat("FIRST_PERSON_CAM_TIME")) * 24);
	num = num + STATS::STAT_GET_NUMBER_OF_HOURS(joaat("FIRST_PERSON_CAM_TIME"));
	num2 = num2 + (STATS::STAT_GET_NUMBER_OF_DAYS(joaat("MP_FIRST_PERSON_CAM_TIME")) * 24);
	num2 = num2 + STATS::STAT_GET_NUMBER_OF_HOURS(joaat("MP_FIRST_PERSON_CAM_TIME"));

	if (num + num2 >= 15)
	{
		func_144(50, 1);
		return 1;
	}

	return 0;
}

int func_135() // Position - 0x11682
{
	int numSuccessfulStuntJumps;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(22))
		return 0;

	numSuccessfulStuntJumps = MISC::GET_NUM_SUCCESSFUL_STUNT_JUMPS();

	if (numSuccessfulStuntJumps > 0)
	{
		if (Global_32549 < numSuccessfulStuntJumps)
		{
			if (Global_32549 >= 0)
				func_150(22, numSuccessfulStuntJumps);
		
			Global_32549 = numSuccessfulStuntJumps;
		}
	}

	if (MISC::GET_NUM_SUCCESSFUL_STUNT_JUMPS() >= 50)
	{
		func_144(22, 1);
		return 1;
	}

	return 0;
}

int func_136(BOOL bParam0) // Position - 0x116D9
{
	var unk;
	int unk2;
	int unk3;
	int unk4;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(17))
		return 0;

	unk = 6;
	unk[0] = func_142();
	unk[1] = func_141();
	unk[2] = func_140();
	unk[3] = func_139();
	unk[4] = func_138();
	unk[5] = func_137();
	value = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (unk[i])
			value = value + 1;
	}

	STATS::STAT_GET_INT(joaat("NUM_DISCIPLINE_GOLD_EARNED"), &outValue, -1);

	if (value > outValue && value > 0)
	{
		STATS::STAT_SET_INT(joaat("NUM_DISCIPLINE_GOLD_EARNED"), value, true);
		func_150(17, value);
	}

	bParam0;

	if (!unk[0])
	{
		bParam0;
		return 0;
	}

	if (!unk[1])
	{
		bParam0;
		return 0;
	}

	if (!unk[2])
	{
		bParam0;
		return 0;
	}

	if (!unk[3])
	{
		bParam0;
		return 0;
	}

	if (!unk[4])
	{
		bParam0;
		return 0;
	}

	if (!unk[5])
	{
		bParam0;
		return 0;
	}

	func_144(17, 1);
	return 1;
}

int func_137() // Position - 0x117FB
{
	int i;

	i = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		if (G_MissionStats.f_1991[0][i].f_8 == 3)
			return 1;
		else if (G_MissionStats.f_1991[1][i].f_8 == 3)
			return 1;
		else if (G_MissionStats.f_1991[2][i].f_8 == 3)
			return 1;
	}

	return 0;
}

int func_138() // Position - 0x11868
{
	int i;

	i = 0;

	for (i = 0; i < 22; i = i + 1)
	{
		if (G_MissionStats.f_19150[0].f_3[i].f_3 == 3)
			return 1;
		else if (G_MissionStats.f_19150[1].f_3[i].f_3 == 3)
			return 1;
		else if (G_MissionStats.f_19150[2].f_3[i].f_3 == 3)
			return 1;
	}

	return 0;
}

int func_139() // Position - 0x118DE
{
	int i;

	i = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		if (IS_BIT_SET(G_MissionStats.f_24979.f_1, i))
			return 1;
	}

	return 0;
}

int func_140() // Position - 0x1190F
{
	int i;

	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (IS_BIT_SET(G_MissionStats.f_24982.f_2, i))
			return 1;
	}

	return 0;
}

int func_141() // Position - 0x11940
{
	int i;

	i = 0;

	for (i = 0; i < 7; i = i + 1)
	{
		if (G_MissionStats.f_19019.f_19[i] == 1)
			return 1;
	}

	return 0;
}

int func_142() // Position - 0x11973
{
	int i;

	i = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (G_MissionStats.f_20014[i] == 1)
			return 1;
	}

	return 0;
}

int func_143(BOOL bParam0) // Position - 0x119A4
{
	var outValue;
	int value;
	int outValue2;

	value = 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
		return 0;

	if (STATS::STAT_GET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), &outValue, -1))
		value = value + outValue;

	if (STATS::STAT_GET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), &outValue, -1))
		value = value + outValue;

	if (STATS::STAT_GET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), &outValue, -1))
		value = value + outValue;

	bParam0;
	outValue2 = 0;
	STATS::STAT_GET_INT(joaat("NUM_CASH_SPENT"), &outValue2, -1);

	if (value > 0 && outValue2 / 2000000 != value / 2000000)
	{
		STATS::STAT_SET_INT(joaat("NUM_CASH_SPENT"), value, true);
		func_150(27, value);
	}

	if (value < 200000000)
		return 0;

	func_144(27, 1);
	return 1;
}

int func_144(int iParam0, int iParam1) // Position - 0x11A5B
{
	if (iParam0 >= 78)
		return 0;

	return func_145(iParam0, iParam1);
}

int func_145(int iParam0, int iParam1) // Position - 0x11A76
{
	if (func_177(14) && !func_127(iParam0))
		return 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
		return 0;

	if (Global_32534 != 0 && !Global_78689)
		return 0;

	if (func_122(&Global_4542602))
	{
		if (func_148(&Global_4542602, iParam0))
			return 0;
	
		if (func_146(&Global_4542602, iParam0))
			return 1;
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
			return 0;
	
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
			return 1;
	
		return 0;
	}

	return 0;
}

BOOL func_146(var uParam0, int iParam1) // Position - 0x11B13
{
	int i;
	var unk;

	unk = 78;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return false;

	if (func_177(14) && !func_127(iParam1))
		return false;

	if (func_148(uParam0, iParam1))
		return false;

	if (func_130(uParam0) < 0f)
		func_129(uParam0, 0);

	func_183(&unk);
	i = 0;

	for (i = 0; i < *uParam0 - 1; i = i + 1)
	{
		unk[i + 1] = uParam0->[i];
	}

	func_147(&unk, iParam1);
	i = 0;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		uParam0->[i] = unk[i];
	}

	return true;
}

int func_147(var uParam0, int iParam1) // Position - 0x11BC4
{
	int i;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return 0;

	if (func_177(14) && !func_127(iParam1))
		return 0;

	if (func_148(uParam0, iParam1))
		return 0;

	if (func_130(uParam0) < 0f)
		func_129(uParam0, 0);

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_128(uParam0, i))
		{
			uParam0->[i] = iParam1;
			return 1;
		}
	}

	return 0;
}

BOOL func_148(var uParam0, int iParam1) // Position - 0x11C3F
{
	return func_149(uParam0, iParam1) != -1;
}

int func_149(var uParam0, int iParam1) // Position - 0x11C51
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] == iParam1)
			return i;
	}

	return -1;
}

BOOL func_150(int iParam0, int iParam1) // Position - 0x11C7E
{
	int achievementProgress;

	if (iParam0 < 0)
		return false;

	if (iParam0 > 78)
		return false;

	if (iParam1 <= 0 || iParam1 > 100)
		return false;

	achievementProgress = PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);

	if (iParam1 > achievementProgress)
		return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);

	return false;
}

int func_151(BOOL bParam0) // Position - 0x11CCF
{
	int num;

	num = func_164(bParam0) + func_152(bParam0);
	bParam0;
	return num;
}

int func_152(BOOL bParam0) // Position - 0x11CED
{
	int i;
	int num;
	int num2;
	int num3;
	int num4;
	int j;
	float num5;
	int num6;

	num3 = 0;
	num4 = 0;
	bParam0;

	for (i = 0; i < G_MissionStats.f_18577; i = i + 1)
	{
		if (G_MissionStats.f_18577[i].f_3 != -1 && func_162(i, 7))
		{
			num3 = 0;
			num4 = 0;
		
			for (j = 0; j < func_160(i, 7); j = j + 1)
			{
				num6 = func_158(i, 7, j);
			
				if (!Global_63710[num6].f_7)
				{
					if (func_155(num6) == 1)
						num4 = num4 + 1;
				
					num3 = num3 + 1;
				}
			}
		
			num5 = func_154(num4, num3, false);
			num2 = func_153(num5);
		
			if (i >= 52 && i <= 56)
			{
				bParam0;
				num2 = G_MissionStats.f_2355[i - 52];
				num5 = 0f;
			}
		
			if (num5 >= 100f || num2 == 3)
				num = num + 1;
		}
	}

	bParam0;
	return num;
}

int func_153(float fParam0) // Position - 0x11DE1
{
	if (fParam0 == 0f)
		return 0;

	if (fParam0 == 100f)
		return 3;
	else if (fParam0 > 50f)
		return 2;

	return 1;
}

float func_154(int iParam0, int iParam1, BOOL bParam2) // Position - 0x11E16
{
	float num;
	float value;

	if (bParam2)
		return 0f;

	if (iParam0 == iParam1)
		return 100f;

	num = SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1);
	value = (50f * num) + 50f;
	value = SYSTEM::TO_FLOAT(SYSTEM::CEIL(value));

	if (value > 100f)
		value = 100f;

	return value;
}

int func_155(int iParam0) // Position - 0x11E75
{
	if (func_156(iParam0, func_157(Global_63710[iParam0].f_4)))
		return 1;

	return 0;
}

BOOL func_156(int iParam0, int iParam1) // Position - 0x11E98
{
	if (iParam1 < 0)
		return false;

	switch (Global_63710[iParam0])
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 17:
			if (iParam1 < 1)
				return false;
			break;
	}

	if (iParam1 == 2147483647)
		return false;

	if (iParam0 == 881 || iParam0 == 889 || iParam0 == 897 && G_MissionStats.f_24907[4] == _GET_CURRENT_PLAYER_CHARACTER())
		Global_63710[iParam0].f_2 = 0;

	if (Global_63710[iParam0].f_3)
		if (iParam1 < Global_63710[iParam0].f_2)
			return true;
	else if (iParam1 >= Global_63710[iParam0].f_2)
		return true;

	return false;
}

int func_157(Hash hParam0) // Position - 0x11F62
{
	int outValue;

	if (hParam0 == 0)
		return -1;

	if (STATS::STAT_GET_INT(hParam0, &outValue, -1))
		return outValue - 1;

	return -1;
}

int func_158(int iParam0, int iParam1, int iParam2) // Position - 0x11F8B
{
	switch (iParam1)
	{
		case 1:
			return Global_91601[iParam0].f_17[iParam2];
	
		case 7:
			return func_159(iParam0, iParam2);
	
		default:
			break;
	}

	return 914;
}

int func_159(int iParam0, int iParam1) // Position - 0x11FCE
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return 741;
			
				case 1:
					return 742;
			
				default:
				
			}
		
			return -1;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 743;
			
				case 1:
					return 744;
			
				default:
				
			}
		
			return -1;
	
		case 5:
			switch (iParam1)
			{
				case 0:
					return 745;
			
				case 1:
					return 746;
			
				default:
				
			}
		
			return -1;
	
		case 6:
			switch (iParam1)
			{
				case 0:
					return 747;
			
				case 1:
					return 748;
			
				default:
				
			}
		
			return -1;
	
		case 8:
			switch (iParam1)
			{
				case 0:
					return 749;
			
				default:
				
			}
		
			return -1;
	
		case 12:
			switch (iParam1)
			{
				case 0:
					return 750;
			
				default:
				
			}
		
			return -1;
	
		case 14:
			switch (iParam1)
			{
				case 0:
					return 751;
			
				case 1:
					return 752;
			
				default:
				
			}
		
			return -1;
	
		case 16:
			switch (iParam1)
			{
				case 0:
					return 753;
			
				case 1:
					return 754;
			
				default:
				
			}
		
			return -1;
	
		case 17:
			switch (iParam1)
			{
				case 0:
					return 755;
			
				case 1:
					return 756;
			
				case 2:
					return 757;
			
				default:
				
			}
		
			return -1;
	
		case 18:
			switch (iParam1)
			{
				case 0:
					return 758;
			
				case 1:
					return 759;
			
				default:
				
			}
		
			return -1;
	
		case 19:
			switch (iParam1)
			{
				case 0:
					return 760;
			
				case 1:
					return 761;
			
				default:
				
			}
		
			return -1;
	
		case 20:
			switch (iParam1)
			{
				case 0:
					return 762;
			
				default:
				
			}
		
			return -1;
	
		case 21:
			switch (iParam1)
			{
				case 0:
					return 763;
			
				default:
				
			}
		
			return -1;
	
		case 22:
			switch (iParam1)
			{
				case 0:
					return 764;
			
				case 1:
					return 765;
			
				default:
				
			}
		
			return -1;
	
		case 23:
			switch (iParam1)
			{
				case 0:
					return 766;
			
				default:
				
			}
		
			return -1;
	
		case 25:
			switch (iParam1)
			{
				case 0:
					return 767;
			
				case 1:
					return 768;
			
				case 2:
					return 769;
			
				default:
				
			}
		
			return -1;
	
		case 26:
			switch (iParam1)
			{
				case 0:
					return 770;
			
				case 1:
					return 771;
			
				default:
				
			}
		
			return -1;
	
		case 28:
			switch (iParam1)
			{
				case 0:
					return 772;
			
				case 1:
					return 773;
			
				default:
				
			}
		
			return -1;
	
		case 29:
			switch (iParam1)
			{
				case 0:
					return 774;
			
				case 1:
					return 775;
			
				default:
				
			}
		
			return -1;
	
		case 30:
			switch (iParam1)
			{
				case 0:
					return 776;
			
				case 1:
					return 777;
			
				default:
				
			}
		
			return -1;
	
		case 32:
			switch (iParam1)
			{
				case 0:
					return 778;
			
				case 1:
					return 779;
			
				default:
				
			}
		
			return -1;
	
		default:
		
	}

	switch (iParam0)
	{
		case 33:
			switch (iParam1)
			{
				case 0:
					return 780;
			
				case 1:
					return 781;
			
				case 2:
					return 782;
			
				default:
				
			}
		
			return -1;
	
		case 34:
			switch (iParam1)
			{
				case 0:
					return 783;
			
				case 1:
					return 784;
			
				default:
				
			}
		
			return -1;
	
		case 38:
			switch (iParam1)
			{
				case 0:
					return 785;
			
				case 1:
					return 786;
			
				default:
				
			}
		
			return -1;
	
		case 39:
			switch (iParam1)
			{
				case 0:
					return 787;
			
				case 1:
					return 788;
			
				default:
				
			}
		
			return -1;
	
		case 40:
			switch (iParam1)
			{
				case 0:
					return 789;
			
				default:
				
			}
		
			return -1;
	
		case 41:
			switch (iParam1)
			{
				case 0:
					return 790;
			
				case 1:
					return 791;
			
				case 2:
					return 792;
			
				default:
				
			}
		
			return -1;
	
		case 42:
			switch (iParam1)
			{
				case 0:
					return 793;
			
				case 1:
					return 794;
			
				case 2:
					return 795;
			
				default:
				
			}
		
			return -1;
	
		case 43:
			switch (iParam1)
			{
				case 0:
					return 796;
			
				case 1:
					return 797;
			
				default:
				
			}
		
			return -1;
	
		case 46:
			switch (iParam1)
			{
				case 0:
					return 798;
			
				case 1:
					return 799;
			
				default:
				
			}
		
			return -1;
	
		case 47:
			switch (iParam1)
			{
				case 0:
					return 800;
			
				case 1:
					return 801;
			
				default:
				
			}
		
			return -1;
	
		case 49:
			switch (iParam1)
			{
				case 0:
					return 802;
			
				case 1:
					return 803;
			
				default:
				
			}
		
			return -1;
	
		case 50:
			switch (iParam1)
			{
				case 0:
					return 804;
			
				case 1:
					return 805;
			
				default:
				
			}
		
			return -1;
	
		case 51:
			switch (iParam1)
			{
				case 0:
					return 806;
			
				default:
				
			}
		
			return -1;
	
		case 57:
			switch (iParam1)
			{
				case 0:
					return 807;
			
				case 1:
					return 808;
			
				case 2:
					return 809;
			
				default:
				
			}
		
			return -1;
	
		case 58:
			switch (iParam1)
			{
				case 0:
					return 828;
			
				case 1:
					return 829;
			
				case 2:
					return 830;
			
				default:
				
			}
		
			return -1;
	
		case 59:
			switch (iParam1)
			{
				case 0:
					return 831;
			
				case 1:
					return 832;
			
				case 2:
					return 833;
			
				default:
				
			}
		
			return -1;
	
		case 60:
			switch (iParam1)
			{
				case 0:
					return 834;
			
				case 1:
					return 835;
			
				case 2:
					return 836;
			
				default:
				
			}
		
			return -1;
	
		case 61:
			switch (iParam1)
			{
				case 0:
					return 837;
			
				case 1:
					return 838;
			
				case 2:
					return 839;
			
				default:
				
			}
		
			return -1;
	
		case 62:
			switch (iParam1)
			{
				case 0:
					return 840;
			
				case 1:
					return 841;
			
				case 2:
					return 842;
			
				default:
				
			}
		
			return -1;
	
		case 24:
			switch (iParam1)
			{
				case 0:
					return 843;
			
				case 1:
					return 844;
			
				case 2:
					return 845;
			
				default:
				
			}
		
			return -1;
	
		default:
		
	}

	return -1;
}

int func_160(int iParam0, int iParam1) // Position - 0x126B2
{
	switch (iParam1)
	{
		case 1:
			return Global_91601[iParam0].f_16;
	
		case 7:
			return func_161(iParam0);
	
		default:
			break;
	}

	return 0;
}

int func_161(int iParam0) // Position - 0x126ED
{
	switch (iParam0)
	{
		case 2:
			return 2;
	
		case 3:
			return 2;
	
		case 5:
			return 2;
	
		case 6:
			return 2;
	
		case 8:
			return 1;
	
		case 12:
			return 1;
	
		case 14:
			return 2;
	
		case 16:
			return 2;
	
		case 17:
			return 3;
	
		case 18:
			return 2;
	
		case 19:
			return 2;
	
		case 20:
			return 1;
	
		case 21:
			return 1;
	
		case 22:
			return 2;
	
		case 23:
			return 1;
	
		case 25:
			return 3;
	
		case 26:
			return 2;
	
		case 28:
			return 2;
	
		case 29:
			return 2;
	
		case 30:
			return 2;
	
		case 32:
			return 2;
	
		default:
		
	}

	switch (iParam0)
	{
		case 33:
			return 3;
	
		case 34:
			return 2;
	
		case 38:
			return 2;
	
		case 39:
			return 2;
	
		case 40:
			return 1;
	
		case 41:
			return 3;
	
		case 42:
			return 3;
	
		case 43:
			return 2;
	
		case 46:
			return 2;
	
		case 47:
			return 2;
	
		case 49:
			return 2;
	
		case 50:
			return 2;
	
		case 51:
			return 1;
	
		case 57:
			return 3;
	
		case 58:
			return 3;
	
		case 59:
			return 3;
	
		case 60:
			return 3;
	
		case 61:
			return 3;
	
		case 62:
			return 3;
	
		case 24:
			return 3;
	
		default:
		
	}

	return 0;
}

BOOL func_162(int iParam0, int iParam1) // Position - 0x1289E
{
	switch (iParam1)
	{
		case 1:
			return !IS_BIT_SET(Global_91601[iParam0].f_15, 5);
	
		case 7:
			return func_163(iParam0);
	
		default:
			break;
	}

	return false;
}

BOOL func_163(int iParam0) // Position - 0x128DC
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 1;
	
		case 4:
			return 0;
	
		case 5:
			return 1;
	
		case 6:
			return 1;
	
		case 7:
			return 0;
	
		case 8:
			return 1;
	
		case 9:
			return 0;
	
		case 10:
			return 0;
	
		case 11:
			return 0;
	
		case 12:
			return 1;
	
		case 13:
			return 0;
	
		case 14:
			return 1;
	
		case 15:
			return 0;
	
		case 16:
			return 1;
	
		case 17:
			return 1;
	
		case 18:
			return 1;
	
		case 19:
			return 1;
	
		case 20:
			return 1;
	
		case 21:
			return 1;
	
		case 22:
			return 1;
	
		case 23:
			return 1;
	
		case 24:
			return 1;
	
		case 25:
			return 1;
	
		case 26:
			return 1;
	
		case 27:
			return 0;
	
		case 28:
			return 1;
	
		case 29:
			return 1;
	
		case 30:
			return 1;
	
		case 31:
			return 0;
	
		case 32:
			return 1;
	
		case 33:
			return 1;
	
		case 34:
			return 1;
	
		case 35:
			return 0;
	
		case 36:
			return 0;
	
		case 37:
			return 0;
	
		case 38:
			return 1;
	
		case 39:
			return 1;
	
		case 40:
			return 1;
	
		case 41:
			return 1;
	
		case 42:
			return 1;
	
		case 43:
			return 1;
	
		case 44:
			return 0;
	
		case 45:
			return 0;
	
		case 46:
			return 1;
	
		case 47:
			return 1;
	
		case 48:
			return 0;
	
		case 49:
			return 1;
	
		case 50:
			return 1;
	
		case 51:
			return 1;
	
		case 52:
			return 1;
	
		case 54:
			return 1;
	
		case 55:
			return 1;
	
		case 56:
			return 1;
	
		case 53:
			return 1;
	
		case 57:
			return 1;
	
		case 58:
			return 1;
	
		case 59:
			return 1;
	
		case 60:
			return 1;
	
		case 61:
			return 1;
	
		case 62:
			return 1;
	
		default:
			break;
	}

	return 0;
}

int func_164(BOOL bParam0) // Position - 0x12C22
{
	int i;
	int num;
	int num2;
	int num3;
	int num4;
	int j;
	float num5;
	int num6;
	int num7;

	num3 = 0;
	num4 = 0;
	bParam0;

	for (i = 0; i < G_MissionStats.f_9088.f_330; i = i + 1)
	{
		if (G_MissionStats.f_9088.f_330[i].f_3 != -1 && func_162(i, 1))
		{
			num3 = 0;
			num4 = 0;
			num7 = -1;
		
			for (j = 0; j < func_160(i, 1); j = j + 1)
			{
				num6 = func_158(i, 1, j);
			
				if (!Global_63710[num6].f_7)
				{
					if (func_155(num6) == 1)
						num4 = num4 + 1;
				
					switch (num6)
					{
						case 42:
						case 55:
						case 85:
						case 70:
						case 101:
							num7 = func_165(num6);
						
							if (num7 >= 2147483647)
								num7 = 1;
							break;
					}
				
					num3 = num3 + 1;
				}
			}
		
			num5 = func_154(num4, num3, false);
			num2 = func_153(num5);
		
			if (num7 > -1)
				num2 = num7;
		
			if (num5 >= 100f || num2 == 3)
				num = num + 1;
		}
	}

	bParam0;
	return num;
}

int func_165(int iParam0) // Position - 0x12D3C
{
	int num;

	num = func_157(Global_63710[iParam0].f_4);

	if (num > -2)
		return num;

	return 0;
}

void func_166() // Position - 0x12D61
{
	Entity pedSourceOfDeath;
	Ped pedIndexFromEntityIndex;

	ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false);

	if (!ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
		return;

	if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "creatures@shark@move", "attack_player", 3))
	{
		func_144(25, 1);
		return;
	}

	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		pedSourceOfDeath = PED::GET_PED_SOURCE_OF_DEATH(PLAYER::PLAYER_PED_ID());
	
		if (ENTITY::IS_ENTITY_A_PED(pedSourceOfDeath))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedSourceOfDeath);
		
			if (func_167(pedIndexFromEntityIndex))
			{
				if (ENTITY::GET_ENTITY_MODEL(pedIndexFromEntityIndex) == joaat("A_C_SharkTiger"))
				{
					func_144(25, 1);
					return;
				}
			}
		}
	}

	return;
}

BOOL func_167(Ped pedParam0) // Position - 0x12DEA
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	return !ENTITY::IS_ENTITY_DEAD(pedParam0, false);
}

void func_168() // Position - 0x12E08
{
	switch (iLocal_55)
	{
		case 0:
			fLocal_63 = 0f;
		
			if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
				return;
		
			if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				return;
		
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 3 && MISC::GET_MISSION_FLAG() == false)
			{
				if (func_173() == 2)
				{
					func_180(&uLocal_58);
					iLocal_55 = iLocal_55 + 1;
				}
			}
			break;
	
		case 1:
			if (func_172() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				return;
		
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 3)
			{
				func_171(&uLocal_58);
				iLocal_55 = 0;
				return;
			}
		
			if (MISC::GET_MISSION_FLAG() == true)
			{
				func_171(&uLocal_58);
				iLocal_55 = 0;
				return;
			}
		
			if (func_173() < 2)
			{
				func_171(&uLocal_58);
				iLocal_55 = 0;
				return;
			}
		
			if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				func_171(&uLocal_58);
				iLocal_55 = 0;
				return;
			}
		
			fLocal_63 = func_170(&uLocal_58);
		
			if (fLocal_63 >= 180f)
			{
				func_144(24, 1);
				func_169(&uLocal_58);
				iLocal_55 = iLocal_55 + 1;
			}
			break;
	
		case 2:
			iLocal_55 = iLocal_55 + 1;
			break;
	}

	return;
}

void func_169(int* piParam0) // Position - 0x12F18
{
	if (func_112(piParam0))
	{
		if (!func_111(piParam0))
		{
			piParam0->f_2 = func_110(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;
			MISC::SET_BIT(piParam0, 2);
		}
	}

	return;
}

float func_170(var uParam0) // Position - 0x12F4F
{
	if (func_112(uParam0))
		if (func_111(uParam0))
			return uParam0->f_2;
		else
			return func_110(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1;

	return 0f;
}

void func_171(var uParam0) // Position - 0x12F88
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_172() // Position - 0x12F9E
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_98291.f_44 == 1;

	return false;
}

int func_173() // Position - 0x12FBA
{
	int num;
	Ped ped;

	num = 0;
	ped = func_175(CHAR_TREVOR);

	if (func_174(ped, 0) || IS_BIT_SET(Global_96664, 2))
		num = num + 1;

	ped = func_175(CHAR_FRANKLIN);

	if (func_174(ped, 0) || IS_BIT_SET(Global_96664, 1))
		num = num + 1;

	ped = func_175(CHAR_MICHAEL);

	if (func_174(ped, 0) || IS_BIT_SET(Global_96664, 0))
		num = num + 1;

	return num;
}

BOOL func_174(Ped pedParam0, int iParam1) // Position - 0x13030
{
	return false;
}

Ped func_175(eCharacter echParam0) // Position - 0x13089
{
	if (echParam0 > CHAR_MULTIPLAYER)
		return 0;

	if (echParam0 == _GET_CURRENT_PLAYER_CHARACTER())
		return PLAYER::PLAYER_PED_ID();

	return Global_98291[func_176(echParam0)];
}

int func_176(eCharacter echParam0) // Position - 0x130BA
{
	if (echParam0 == CHAR_MICHAEL)
		return 0;
	else if (echParam0 == CHAR_TREVOR)
		return 2;
	else if (echParam0 == CHAR_FRANKLIN)
		return 1;
	else if (echParam0 == _CHAR_NULL)
		return 3;

	return 4;
}

BOOL func_177(int iParam0) // Position - 0x130F5
{
	return Global_43377 == iParam0;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x13103
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

BOOL IS_PLAYSTATION_PLATFORM() // Position - 0x1311A
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

void func_180(int* piParam0) // Position - 0x13130
{
	func_181(piParam0, 0f);
	return;
}

void func_181(int* piParam0, float fParam1) // Position - 0x1313F
{
	piParam0->f_1 = func_110(IS_BIT_SET(*piParam0, 4)) - fParam1;
	MISC::SET_BIT(piParam0, 1);
	MISC::CLEAR_BIT(piParam0, 2);
	piParam0->f_2 = 0f;
	return;
}

void func_182(var uParam0, int iParam1) // Position - 0x1316A
{
	uParam0->f_79 = iParam1;

	if (uParam0->f_79)
		func_129(uParam0, 0);

	return;
}

void func_183(var uParam0) // Position - 0x13186
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_184(uParam0, i);
	}

	func_129(uParam0, Global_4542601 - 0.5f);
	return;
}

void func_184(var uParam0, int iParam1) // Position - 0x131BA
{
	uParam0->[iParam1] = 78;
	return;
}

void func_185() // Position - 0x131CA
{
	int i;
	int num;

	num = 78;

	for (i = 1; i <= num - 1; i = i + 1)
	{
		PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(i);
	}

	return;
}

void func_186(int iParam0) // Position - 0x131F4
{
	iParam0 > 0;
	return;
}

