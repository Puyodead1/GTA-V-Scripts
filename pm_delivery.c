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
	char* sLocal_19 = 0;
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
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 3;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 1092616192;
	var uLocal_45 = 1101004800;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 3;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	float fLocal_71 = 0f;
	float fLocal_72 = 0f;
	BOOL bLocal_73 = 0;
	BOOL bLocal_74 = 0;
	BOOL bLocal_75 = 0;
	BOOL bLocal_76 = 0;
	BOOL bLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	Hash hLocal_84 = 0;
	Hash hLocal_85 = 0;
	Hash hLocal_86 = 0;
	Hash hLocal_87 = 0;
	int iLocal_88 = 2;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	int iLocal_91 = 2;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	Vehicle veLocal_94 = 0;
	Vehicle veLocal_95 = 0;
	Vehicle veLocal_96 = 0;
	var uLocal_97 = 2;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	Blip blLocal_100 = 0;
	char* sLocal_101 = 0;
	char* sLocal_102 = 0;
	char* sLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = -1;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 1000;
	var uLocal_114 = 1000;
	var uLocal_115 = 0;
	Hash hLocal_116 = 0;
	Hash hLocal_117 = 0;
	int iLocal_118 = 0;
#endregion

void main() // Position - 0x0
{
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
	iLocal_18 = 3;
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_83 = -1;
	sLocal_101 = "PMDL_OBJ";
	sLocal_102 = "PMDL_LOC";
	sLocal_103 = "PMDL_BCK";
	MISC::SET_MISSION_FLAG(true);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_143(2);
		func_114();
	}

	iLocal_34 = func_112();

	while (true)
	{
		switch (iLocal_35)
		{
			case 0:
				if (!bLocal_74)
					func_107();
				else
					func_106();
			
				if (bLocal_73)
				{
					bLocal_75 = true;
					iLocal_35 = 1;
				}
				break;
		
			case 1:
				if (!func_105())
				{
					switch (iLocal_36)
					{
						case 0:
							func_102();
							break;
					
						case 1:
							if (iLocal_34 == 5 || iLocal_34 == 6)
								func_66();
							else
								func_65();
							break;
					
						case 2:
							func_9();
						
							if (iLocal_34 < 3)
							{
								func_7();
							}
							else if (iLocal_34 > 6)
							{
								func_7();
								func_2();
							}
							break;
					
						case 3:
						case 4:
							func_1();
							break;
					}
				}
				else
				{
					func_1();
				}
				break;
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Position - 0x153
{
	func_143(2);
	func_114();
	return;
}

void func_2() // Position - 0x164
{
	int num;
	int num2;

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_94))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_94, false))
		{
			num = 200;
			num2 = ENTITY::GET_ENTITY_HEALTH(veLocal_94) - 800;
		
			if (ENTITY::IS_ENTITY_UPSIDEDOWN(veLocal_94))
				ENTITY::SET_ENTITY_HEALTH(veLocal_94, ENTITY::GET_ENTITY_HEALTH(veLocal_94) - 5, 0);
		
			if (num2 <= 0)
				iLocal_36 = 4;
			else if (num2 < 75)
				func_3(num2, num, "PMDL_DMG", 6, 0, 1, 2);
			else
				func_3(num2, num, "PMDL_DMG", 1, 0, 1, 2);
		}
		else
		{
			iLocal_36 = 4;
		}
	}
	else
	{
		iLocal_36 = 4;
	}

	return;
}

void func_3(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1E7
{
	func_4(iParam0, iParam1, sParam2, iParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	return;
}

void func_4(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36) // Position - 0x227
{
	int num;
	int i;

	num = -1;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (num == -1)
			if (func_6(0, i) == false)
				num = i;
	}

	if (num > -1)
	{
		Global_1655612.f_1 = 1;
		func_5(0, num);
		Global_1655612.f_1177[num] = iParam0;
		Global_1655612.f_1177.f_11[num] = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_1655612.f_1177.f_22[num], sParam2, 64);
		Global_1655612.f_1177.f_194[num] = iParam3;
		Global_1655612.f_1177.f_183[num] = iParam4;
		Global_1655612.f_1177.f_216[num] = iParam5;
		Global_1655612.f_1177.f_227[num] = fParam6;
		Global_1655612.f_1177.f_227[num].f_1 = fParam7;
		Global_1655612.f_1177.f_258[num] = iParam8;
		Global_1655612.f_1177.f_269[num] = iParam9;
		Global_1655612.f_1177.f_312[num] = iParam10;
		Global_1655612.f_1177.f_323[num] = iParam11;
		Global_1655612.f_1177.f_334[num] = iParam12;
		Global_1655612.f_1177.f_345[num] = iParam13;
		Global_1655612.f_1172 = 1;
		Global_1655612.f_1177.f_356[num] = iParam14;
		Global_1655612.f_1177.f_367[num] = iParam15;
		Global_1655612.f_1177.f_378[num] = iParam16;
		Global_1655612.f_1177.f_389[num] = iParam17;
		Global_1655612.f_1177.f_400[num] = iParam18;
		Global_1655612.f_1177.f_411[num] = iParam19;
		Global_1655612.f_1177.f_422[num] = iParam20;
		Global_1655612.f_1177.f_433[num] = iParam21;
		Global_1655612.f_1177.f_444[num] = iParam22;
		Global_1655612.f_1177.f_455[num] = iParam23;
		Global_1655612.f_1177.f_466[num] = iParam24;
		Global_1655612.f_1177.f_205[num] = iParam25;
		Global_1655612.f_1177.f_477[num] = iParam26;
		Global_1655612.f_1177.f_488[num] = iParam27;
		Global_1655612.f_1177.f_499[num] = iParam28;
		Global_1655612.f_1177.f_510[num] = iParam29;
		Global_1655612.f_1177.f_521[num] = iParam30;
		Global_1655612.f_1177.f_532[num] = iParam31;
		Global_1655612.f_1177.f_543[num] = iParam32;
		Global_1655612.f_1177.f_554[num] = iParam33;
		Global_1655612.f_1177.f_565[num] = iParam34;
		Global_1655612.f_1177.f_576[num] = iParam35;
		Global_1655612.f_1177.f_587[num] = iParam36;
	}

	return;
}

void func_5(int iParam0, int iParam1) // Position - 0x4BF
{
	MISC::SET_BIT(&Global_1655612.f_7009[iParam0], iParam1);
	return;
}

BOOL func_6(int iParam0, int iParam1) // Position - 0x4D8
{
	return IS_BIT_SET(Global_1655612.f_7009[iParam0], iParam1);
}

void func_7() // Position - 0x4EE
{
	int num;

	num = iLocal_78 - MISC::GET_GAME_TIMER();

	if (num < 0)
		num = 0;

	if (MISC::GET_GAME_TIMER() >= iLocal_82)
		func_8(num, "TIMER_TIME" /*TIME*/, 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	else
		func_8(num, "TIMER_TIME" /*TIME*/, 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);

	switch (iLocal_79)
	{
		case 0:
			if (MISC::GET_GAME_TIMER() >= iLocal_78 - 10000)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 1:
			if (MISC::GET_GAME_TIMER() >= iLocal_78 - 9000)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 2:
			if (MISC::GET_GAME_TIMER() >= iLocal_78 - 8000)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 3:
			if (MISC::GET_GAME_TIMER() >= iLocal_78 - 7000)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 4:
			if (MISC::GET_GAME_TIMER() >= iLocal_78 - 6000)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 5:
			if (MISC::GET_GAME_TIMER() >= iLocal_78 - 5000)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 6:
			if (MISC::GET_GAME_TIMER() >= iLocal_78 - 4500)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 7:
			if (MISC::GET_GAME_TIMER() >= iLocal_78 - 4000)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 8:
			if (MISC::GET_GAME_TIMER() >= iLocal_78 - 3500)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 9:
			if (MISC::GET_GAME_TIMER() >= iLocal_78 - 3000)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 10:
			if (MISC::GET_GAME_TIMER() >= iLocal_78 - 2500)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 11:
			if (MISC::GET_GAME_TIMER() >= iLocal_78 - 2000)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 12:
			if (MISC::GET_GAME_TIMER() >= iLocal_78 - 1500)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 13:
			if (MISC::GET_GAME_TIMER() >= iLocal_78 - 1000)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 14:
			if (MISC::GET_GAME_TIMER() >= iLocal_78 - 500)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 15:
			if (MISC::GET_GAME_TIMER() >= iLocal_78)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_79 = iLocal_79 + 1;
			}
			break;
	
		case 16:
			break;
	}

	if (MISC::GET_GAME_TIMER() >= iLocal_78)
		iLocal_36 = 3;

	return;
}

void func_8(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17) // Position - 0x7DE
{
	int num;
	int i;

	num = -1;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (num == -1)
			if (func_6(7, i) == false)
				num = i;
	}

	if (num > -1)
	{
		Global_1655612.f_1 = 1;
		func_5(7, num);
		Global_1655612.f_4659[num] = iParam0;
		TEXT_LABEL_ASSIGN_STRING(&Global_1655612.f_4659.f_11[num], sParam1, 64);
		Global_1655612.f_4659.f_172[num] = iParam2;
		Global_1655612.f_4659.f_216[num] = iParam3;
		Global_1655612.f_4659.f_183[num] = iParam4;
		Global_1655612.f_4659.f_194[num] = iParam5;
		Global_1655612.f_4659.f_249[num] = iParam6;
		Global_1655612.f_4659.f_260[num] = iParam7;
		Global_1655612.f_4659.f_205[num] = iParam8;
		Global_1655612.f_4659.f_314[num] = iParam9;
		Global_1655612.f_4659.f_325[num] = iParam10;
		Global_1655612.f_4659.f_357[num] = iParam11;
		Global_1655612.f_4659.f_238[num] = iParam12;
		Global_1655612.f_4659.f_271[num] = iParam13;
		Global_1655612.f_4659.f_368[num] = iParam14;
		Global_1655612.f_4659.f_379[num] = iParam15;
		Global_1655612.f_4659.f_390[num] = iParam16;
		Global_1655612.f_4659.f_227[num] = iParam17;
	}

	return;
}

void func_9() // Position - 0x93B
{
	int i;
	int j;

	if (iLocal_34 >= 3 && iLocal_34 <= 4)
	{
		for (i = 0; i < iLocal_91; i = i + 1)
		{
			if (!bLocal_76)
			{
				if (!PED::IS_PED_INJURED(iLocal_91[i]))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_62, 50f, 50f, 50f, false, true, 0))
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
						bLocal_76 = true;
					}
				}
			}
			else if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_91[i]))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_91[i], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
					PED::SET_PED_KEEP_TASK(iLocal_91[i], true);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_91[i]);
				}
			
				if (ENTITY::DOES_ENTITY_EXIST(veLocal_95))
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_95);
			}
		}
	}

	if (func_21(&uLocal_37, uLocal_65, Global_22, true, veLocal_94, sLocal_102, "", sLocal_103, true, 0, true, INVALID))
	{
		func_19(veLocal_94, 10.5f, 2, 1056964608, false, true, false);
		TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 2000, 0);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(veLocal_94, false);
		func_14(&uLocal_37, true, false);
		func_13();
	}

	for (j = 0; j < iLocal_88; j = j + 1)
	{
		if (!PED::IS_PED_INJURED(iLocal_88[j]))
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_97[j]))
			{
				uLocal_97[j] = func_10(iLocal_88[j], true, 145);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_118);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_118);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_88[j], iLocal_118);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_118);
				PED::SET_PED_KEEP_TASK(iLocal_88[j], true);
			}
		
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_88[j], PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, false, true, 0))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_97[j]))
					HUD::REMOVE_BLIP(&uLocal_97[j]);
			
				TASK::TASK_SMART_FLEE_PED(iLocal_88[j], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
				PED::SET_PED_KEEP_TASK(iLocal_88[j], true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_88[j]);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uLocal_97[j]))
		{
			HUD::REMOVE_BLIP(&uLocal_97[j]);
		}
	}

	return;
}

Blip func_10(Vehicle veParam0, BOOL bParam1, int iParam2) // Position - 0xB65
{
	Blip blip;

	blip = func_11(veParam0, !bParam1, false);

	if (iParam2 != 145 && HUD::DOES_BLIP_EXIST(blip) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2058[iParam2].f_3)))
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(blip, &(Global_2058[iParam2].f_3));

	return blip;
}

Blip func_11(Vehicle veParam0, BOOL bParam1, BOOL bParam2) // Position - 0xBAF
{
	Blip blip;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return 0;

	blip = HUD::ADD_BLIP_FOR_ENTITY(veParam0);

	if (ENTITY::IS_ENTITY_A_VEHICLE(veParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	
		if (!bParam2)
			HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
		else
			HUD::SET_BLIP_COLOUR(blip, 2);
	}
	else if (ENTITY::IS_ENTITY_A_PED(veParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
		HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(veParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
	}

	return blip;
}

var func_12(BOOL bParam0, var uParam1, var uParam2) // Position - 0xC53
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_13() // Position - 0xC6A
{
	func_143(1);
	func_114();
	return;
}

void func_14(Blip* pblParam0, BOOL bParam1, BOOL bParam2) // Position - 0xC7B
{
	int i;

	if (IS_BIT_SET(pblParam0->f_13, 30))
		bParam1 = true;

	func_18(pblParam0);

	for (i = 0; i < 3; i = i + 1)
	{
		if (HUD::DOES_BLIP_EXIST(pblParam0->f_1[i]))
			HUD::REMOVE_BLIP(&pblParam0->f_1[i]);
	
		func_17(i, pblParam0);
		func_16(i, pblParam0);
	}

	for (i = 0; i < 31; i = i + 1)
	{
		if (i != 8)
		{
			MISC::CLEAR_BIT(&(pblParam0->f_13), i);
			MISC::CLEAR_BIT(&(pblParam0->f_14), i);
		}
	}

	if (HUD::DOES_BLIP_EXIST(*pblParam0))
		HUD::REMOVE_BLIP(pblParam0);

	pblParam0->f_6 = 0;
	pblParam0->f_12 = 0;
	pblParam0->f_15 = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (!PED::IS_PED_INJURED(pblParam0->f_17[i]))
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pblParam0->f_17[i], true);
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(pblParam0->f_17[i], true);
		
			if (bParam2)
			{
				PED::SET_PED_CONFIG_FLAG(pblParam0->f_17[i], 32, true);
				PED::SET_PED_CONFIG_FLAG(pblParam0->f_17[i], 305, false);
			}
		
			PED::SET_PED_CONFIG_FLAG(pblParam0->f_17[i], 268, false);
		
			if (bParam1)
				if (PED::IS_PED_GROUP_MEMBER(pblParam0->f_17[i], func_15()) && pblParam0->f_17[i] != PLAYER::PLAYER_PED_ID())
					PED::REMOVE_PED_FROM_GROUP(pblParam0->f_17[i]);
		
			if (!IS_BIT_SET(pblParam0->f_13, 29))
				PED::SET_PED_USING_ACTION_MODE(pblParam0->f_17[i], false, -1, 0);
		
			pblParam0->f_17[i] = 0;
		}
	}

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), true);
	}

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		if (bParam2)
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);

	pblParam0->f_21 = 0;
	return;
}

int func_15() // Position - 0xE26
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_16(int iParam0, Blip* pblParam1) // Position - 0xE36
{
	switch (iParam0)
	{
		case 0:
			MISC::CLEAR_BIT(&(pblParam1->f_13), 17);
			break;
	
		case 1:
			MISC::CLEAR_BIT(&(pblParam1->f_13), 18);
			break;
	
		case 2:
			MISC::CLEAR_BIT(&(pblParam1->f_13), 19);
			break;
	}

	return;
}

void func_17(int iParam0, Blip* pblParam1) // Position - 0xE7E
{
	switch (iParam0)
	{
		case 0:
			MISC::CLEAR_BIT(&(pblParam1->f_13), 14);
			break;
	
		case 1:
			MISC::CLEAR_BIT(&(pblParam1->f_13), 15);
			break;
	
		case 2:
			MISC::CLEAR_BIT(&(pblParam1->f_13), 16);
			break;
	}

	return;
}

void func_18(Blip* pblParam0) // Position - 0xEC6
{
	if (HUD::DOES_BLIP_EXIST(pblParam0->f_5))
		HUD::REMOVE_BLIP(&(pblParam0->f_5));

	return;
}

int func_19(Vehicle veParam0, float fParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xEE1
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ACCELERATE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_BRAKE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HANDBRAKE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_DUCK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_UD, true);

	if (bParam5)
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_EXIT, true);

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);

	if (!bParam6)
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACK, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACKRIGHT, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_AIM, true);
	}

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HEADLIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HORN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_NEXT_RADIO, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PREV_RADIO, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PUSHBIKE_FRONT_BRAKE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PUSHBIKE_PEDAL, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ATTACK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ROLL_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_PITCH_UD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_YAW_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_YAW_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_THROTTLE_UP, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_THROTTLE_DOWN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_UNDERCARRIAGE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_NEXT_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_PREV_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_TARGET_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_TARGET_RIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_VERTICAL_FLIGHT_MODE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_BOOST, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_ASCEND, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_DESCEND, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_PITCH_UD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_THROTTLE_UP, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_THROTTLE_DOWN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_HARD_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_HARD_RIGHT, true);
	CAM::DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE();
	func_20(veParam0);

	if (MISC::GET_GAME_TIMER() - Global_29 > 500)
		VEHICLE::BRING_VEHICLE_TO_HALT(veParam0, fParam1, iParam2, bParam4);

	Global_29 = MISC::GET_GAME_TIMER();

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(veParam0)) <= iParam3)
			return 1;

	return 0;
}

void func_20(Vehicle veParam0) // Position - 0x1079
{
	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		if (VEHICLE::GET_HAS_ROCKET_BOOST(veParam0))
			if (VEHICLE::IS_ROCKET_BOOST_ACTIVE(veParam0))
				VEHICLE::SET_ROCKET_BOOST_ACTIVE(veParam0, false);

	return;
}

BOOL func_21(Blip* pblParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, BOOL bParam7, Vehicle veParam8, char* sParam9, char* sParam10, char* sParam11, BOOL bParam12, int iParam13, BOOL bParam14, eBlipSprite ebsParam15) // Position - 0x10A5
{
	return func_22(pblParam0, uParam1, uParam4, func_64(), func_64(), bParam7, 5, 0, 0, 0, veParam8, sParam9, func_63(), func_63(), func_63(), func_63(), sParam10, false, bParam12, sParam11, false, iParam13, bParam14, ebsParam15, 0, 0, 0, true, 1065353216);
}

BOOL func_22(Blip* pblParam0, Vector3 vParam1, var uParam2, var uParam3, Vector3 vParam4, var uParam5, var uParam6, Vector3 vParam7, var uParam8, var uParam9, Vector3 vParam10, var uParam11, var uParam12, BOOL bParam13, int iParam14, int iParam15, int iParam16, int iParam17, Vehicle veParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, BOOL bParam25, BOOL bParam26, char* sParam27, BOOL bParam28, int iParam29, BOOL bParam30, eBlipSprite ebsParam31, int iParam32, int iParam33, int iParam34, BOOL bParam35, int iParam36) // Position - 0x10F4
{
	Vehicle vehiclePedIsIn;
	BOOL flag;
	int i;
	Vector3 vector;
	BOOL unk;
	int unk2;
	int includeZ;
	int p10;

	vector = { vParam1 + { 1f, 0f, 0f } };
	pblParam0->f_17[0] = iParam15;
	pblParam0->f_17[1] = iParam16;
	pblParam0->f_17[2] = iParam17;
	pblParam0->f_16 = iParam15;
	func_62(pblParam0);
	func_61(pblParam0);
	func_60();

	if (func_44(pblParam0, pblParam0->f_17[0], pblParam0->f_17[1], pblParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, pblParam0->f_8, bParam25, veParam18, false, false, iParam32, iParam33, iParam34, iParam14, bParam26))
	{
		func_43(sParam20);
		func_43(sParam21);
		func_43(sParam22);
		func_43(sParam23);
	
		if (CAM::IS_SCREEN_FADED_IN())
		{
			flag = false;
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam18, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veParam18, false))
				{
					MISC::SET_BIT(&(pblParam0->f_13), 3);
				
					if (!IS_BIT_SET(pblParam0->f_13, 9))
						MISC::CLEAR_BIT(&(pblParam0->f_13), 4);
				
					if (IS_BIT_SET(pblParam0->f_13, 23))
						MISC::CLEAR_BIT(&(pblParam0->f_13), 23);
				
					MISC::SET_BIT(&(pblParam0->f_13), 9);
					flag = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_41(pblParam0, iParam29))
				{
					MISC::SET_BIT(&(pblParam0->f_13), 3);
				
					if (!IS_BIT_SET(pblParam0->f_13, 9))
						MISC::CLEAR_BIT(&(pblParam0->f_13), 4);
				
					MISC::SET_BIT(&(pblParam0->f_13), 9);
					flag = true;
				}
			}
			else
			{
				flag = true;
			}
		
			if (flag)
			{
				func_43(sParam24);
				func_43(sParam27);
				func_43("MORE_SEATS" /*A vehicle with more seats is needed.*/);
			
				if (bParam26 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (HUD::DOES_BLIP_EXIST(pblParam0->f_5))
					{
						HUD::REMOVE_BLIP(&(pblParam0->f_5));
						func_43(sParam19);
					}
				
					if (HUD::DOES_BLIP_EXIST(*pblParam0))
						HUD::REMOVE_BLIP(pblParam0);
				
					if (!func_37(pblParam0, 1) && !func_36(pblParam0) && !IS_BIT_SET(pblParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_34(pblParam0, "LOSE_WANTED" /*Lose the Cops.*/, false);
						
							if (!PED::IS_PED_INJURED(pblParam0->f_17[0]))
								func_32(pblParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
						}
					
						MISC::SET_BIT(&(pblParam0->f_13), 0);
						MISC::CLEAR_BIT(&(pblParam0->f_13), 1);
					}
				}
				else
				{
					if (IS_BIT_SET(pblParam0->f_13, 0))
					{
						func_43("LOSE_WANTED" /*Lose the Cops.*/);
						MISC::CLEAR_BIT(&(pblParam0->f_13), 0);
						MISC::SET_BIT(&(pblParam0->f_13), 1);
					}
				
					if (IS_BIT_SET(pblParam0->f_13, 1))
					{
						if (!func_37(pblParam0, 1))
						{
							if (!PED::IS_PED_INJURED(pblParam0->f_17[0]))
								func_32(pblParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
						
							MISC::CLEAR_BIT(&(pblParam0->f_13), 1);
						}
					}
				
					if (!HUD::DOES_BLIP_EXIST(pblParam0->f_5))
					{
						if (HUD::DOES_BLIP_EXIST(*pblParam0))
							HUD::REMOVE_BLIP(pblParam0);
					
						pblParam0->f_5 = func_31(vector, false);
					
						if (!(ebsParam31 == INVALID))
							HUD::SET_BLIP_SPRITE(pblParam0->f_5, ebsParam31);
					
						if (bParam35)
							func_30(pblParam0->f_5, pblParam0);
					}
					else if (!func_29(vector, HUD::GET_BLIP_COORDS(pblParam0->f_5), 0.1f, false))
					{
						HUD::SET_BLIP_COORDS(pblParam0->f_5, vector);
					
						if (bParam35)
							func_30(pblParam0->f_5, pblParam0);
					}
				
					if (!func_37(pblParam0, 2))
					{
						if (!IS_BIT_SET(pblParam0->f_13, 2))
						{
							func_34(pblParam0, sParam19, false);
							MISC::SET_BIT(&(pblParam0->f_13), 2);
						}
					}
				
					if (iParam14 == 4 || iParam14 == 5)
						if (IS_BIT_SET(pblParam0->f_13, 13))
							bParam13 = false;
				
					flag = false;
					includeZ = false;
					p10 = 0;
				
					if (iParam14 == 1 || iParam14 == 3 || iParam14 == 5)
						includeZ = true;
				
					if (iParam14 == 2 || iParam14 == 3)
						p10 = 1;
					else if (iParam14 == 4 || iParam14 == 5)
						p10 = 2;
				
					if (bParam28)
					{
						ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vParam1, vParam4, bParam13, includeZ, p10);
					
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), vParam7, vParam10, iParam36, false, includeZ, p10))
							flag = true;
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vParam1, vParam4, bParam13, includeZ, p10))
					{
						flag = true;
					}
				
					if (flag)
					{
						flag = true;
					
						for (i = 0; i < 3; i = i + 1)
						{
							if (!PED::IS_PED_INJURED(pblParam0->f_17[i]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								
									if (!PED::IS_PED_IN_VEHICLE(pblParam0->f_17[i], vehiclePedIsIn, false))
										flag = false;
								}
								else if (veParam18 != 0)
								{
									if (!PED::IS_PED_IN_VEHICLE(pblParam0->f_17[i], veParam18, false))
										flag = false;
								}
								else if (!PED::IS_PED_GROUP_MEMBER(pblParam0->f_17[i], func_15()) || !func_27(pblParam0->f_17[i], true))
								{
									flag = false;
								}
							}
						}
					
						if (flag)
						{
							if (func_24(pblParam0))
							{
								func_43(sParam19);
								func_43(sParam24);
								func_43(sParam20);
								func_43(sParam21);
								func_43(sParam22);
								func_43(sParam23);
								func_43("LOSE_WANTED" /*Lose the Cops.*/);
								func_43("MORE_SEATS" /*A vehicle with more seats is needed.*/);
								func_43(sParam27);
								func_14(pblParam0, true, false);
								return 1;
							}
						}
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(veParam18))
			{
				if (bParam26 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && !IS_BIT_SET(pblParam0->f_13, 9) && !IS_BIT_SET(pblParam0->f_13, 22))
				{
					func_43(sParam24);
					func_43(sParam27);
				
					if (HUD::DOES_BLIP_EXIST(pblParam0->f_5) || HUD::DOES_BLIP_EXIST(*pblParam0))
					{
						HUD::REMOVE_BLIP(&(pblParam0->f_5));
						HUD::REMOVE_BLIP(pblParam0);
						func_43(sParam19);
					}
				
					if (!func_37(pblParam0, 1) && !func_36(pblParam0) && !IS_BIT_SET(pblParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_34(pblParam0, "LOSE_WANTED" /*Lose the Cops.*/, false);
						
							if (!PED::IS_PED_INJURED(pblParam0->f_17[0]))
								func_32(pblParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
						}
					
						MISC::SET_BIT(&(pblParam0->f_13), 0);
						MISC::CLEAR_BIT(&(pblParam0->f_13), 1);
					}
				}
				else
				{
					if (IS_BIT_SET(pblParam0->f_13, 0))
					{
						func_43("LOSE_WANTED" /*Lose the Cops.*/);
						MISC::CLEAR_BIT(&(pblParam0->f_13), 0);
						MISC::SET_BIT(&(pblParam0->f_13), 1);
					}
				
					if (IS_BIT_SET(pblParam0->f_13, 1))
					{
						if (!func_37(pblParam0, 1))
						{
							if (!PED::IS_PED_INJURED(pblParam0->f_17[0]))
								func_32(pblParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
						
							MISC::CLEAR_BIT(&(pblParam0->f_13), 1);
						}
					}
				
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam18, false))
					{
						if (!HUD::DOES_BLIP_EXIST(*pblParam0))
						{
							if (HUD::DOES_BLIP_EXIST(pblParam0->f_5))
							{
								HUD::REMOVE_BLIP(&(pblParam0->f_5));
								func_43(sParam19);
							}
						
							*pblParam0 = func_23(veParam18, false, false);
							HUD::SET_BLIP_DISPLAY(*pblParam0, 2);
						
							if (!IS_BIT_SET(pblParam0->f_13, 4))
								func_30(*pblParam0, pblParam0);
						}
					
						if (!func_37(pblParam0, 2))
						{
							if (!IS_BIT_SET(pblParam0->f_13, 3))
							{
								func_34(pblParam0, sParam24, false);
								MISC::SET_BIT(&(pblParam0->f_13), 3);
								MISC::CLEAR_BIT(&(pblParam0->f_13), 4);
							}
							else if (IS_BIT_SET(pblParam0->f_13, 9))
							{
								if (!MISC::IS_STRING_NULL(sParam27))
								{
									if (!IS_BIT_SET(pblParam0->f_13, 4))
									{
										func_34(pblParam0, sParam27, false);
										MISC::SET_BIT(&(pblParam0->f_13), 4);
									}
								}
								else if (!IS_BIT_SET(pblParam0->f_13, 4))
								{
									func_34(pblParam0, sParam24, false);
									MISC::SET_BIT(&(pblParam0->f_13), 4);
								}
							
								if (!IS_BIT_SET(pblParam0->f_13, 23))
								{
									if (!PED::IS_PED_INJURED(pblParam0->f_17[0]))
										func_32(pblParam0->f_17[0], "GET_IN_CAR", 3);
								
									MISC::SET_BIT(&(pblParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(pblParam0->f_5))
				{
					HUD::REMOVE_BLIP(&(pblParam0->f_5));
					func_43(sParam19);
				}
			
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_37(pblParam0, 2))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (!IS_BIT_SET(pblParam0->f_13, 13))
								{
									endRange = 0;
									randomIntInRange = 0;
								
									for (i = 0; i < 3; i = i + 1)
									{
										if (!PED::IS_PED_INJURED(pblParam0->f_17[i]))
											endRange = endRange + 1;
									}
								
									randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
								
									if (!PED::IS_PED_INJURED(pblParam0->f_17[randomIntInRange]))
										func_32(pblParam0->f_17[randomIntInRange], "NEED_A_BIGGER_VEHICLE", 3);
								
									func_34(pblParam0, "MORE_SEATS" /*A vehicle with more seats is needed.*/, false);
									MISC::SET_BIT(&(pblParam0->f_13), 13);
								}
							}
							else if (!IS_BIT_SET(pblParam0->f_13, 3))
							{
								func_34(pblParam0, sParam24, false);
								MISC::SET_BIT(&(pblParam0->f_13), 3);
								MISC::CLEAR_BIT(&(pblParam0->f_13), 4);
							}
							else if (!IS_BIT_SET(pblParam0->f_13, 4))
							{
								if (IS_BIT_SET(pblParam0->f_13, 9))
								{
									func_34(pblParam0, sParam27, false);
									MISC::SET_BIT(&(pblParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_37(pblParam0, 2))
					{
						if (!IS_BIT_SET(pblParam0->f_13, 3))
						{
							func_34(pblParam0, sParam24, false);
							MISC::SET_BIT(&(pblParam0->f_13), 3);
							MISC::CLEAR_BIT(&(pblParam0->f_13), 4);
						}
						else if (IS_BIT_SET(pblParam0->f_13, 9))
						{
							if (!MISC::IS_STRING_NULL(sParam27))
							{
								if (!IS_BIT_SET(pblParam0->f_13, 4))
								{
									func_34(pblParam0, sParam27, false);
									MISC::SET_BIT(&(pblParam0->f_13), 4);
								}
							}
							else if (!IS_BIT_SET(pblParam0->f_13, 4))
							{
								func_34(pblParam0, sParam24, false);
								MISC::SET_BIT(&(pblParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (IS_BIT_SET(pblParam0->f_13, 0))
			MISC::CLEAR_BIT(&(pblParam0->f_13), 0);
	
		func_43(sParam19);
		func_43(sParam24);
		func_43(sParam27);
		func_43(sParam24);
		func_43("LOSE_WANTED" /*Lose the Cops.*/);
	
		if (HUD::DOES_BLIP_EXIST(pblParam0->f_5))
			HUD::REMOVE_BLIP(&(pblParam0->f_5));
	
		if (HUD::DOES_BLIP_EXIST(*pblParam0))
			HUD::REMOVE_BLIP(pblParam0);
	}

	MISC::CLEAR_BIT(&(pblParam0->f_13), 11);
	MISC::CLEAR_BIT(&(pblParam0->f_13), 12);
	return 0;
}

Blip func_23(Vehicle veParam0, BOOL bParam1, BOOL bParam2) // Position - 0x19F9
{
	return func_11(veParam0, !bParam1, bParam2);
}

BOOL func_24(Blip* pblParam0) // Position - 0x1A0C
{
	if (IS_BIT_SET(pblParam0->f_13, 12))
		if (func_26(PLAYER::PLAYER_PED_ID()))
			if (func_25(true, false, true) || IS_BIT_SET(pblParam0->f_13, 7))
				return true;
	else if (func_25(true, false, true) || IS_BIT_SET(pblParam0->f_13, 7))
		return true;

	return false;
}

BOOL func_25(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1A61
{
	Vehicle vehiclePedIsIn;

	if (MISC::IS_MINIGAME_IN_PROGRESS())
		return false;

	if (bParam0)
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			return false;

	vehiclePedIsIn = 0;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			return false;
	
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (bParam0)
			if (ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
				return false;
	
		if (bParam2)
			if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, -1, false) != PLAYER::PLAYER_PED_ID())
					return false;
	
		if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(vehiclePedIsIn) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(vehiclePedIsIn) > 1.011f)
				return false;
	}
	else if (bParam1)
	{
		return false;
	}

	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
		return false;

	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
		return false;

	return true;
}

BOOL func_26(Ped pedParam0) // Position - 0x1B46
{
	float entitySpeed;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		entitySpeed = ENTITY::GET_ENTITY_SPEED(pedParam0);
	
		if (entitySpeed > -0.5f && entitySpeed < 0.5f)
			return true;
	}

	return false;
}

BOOL func_27(Ped pedParam0, BOOL bParam1) // Position - 0x1B7D
{
	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && bParam1)
		{
			if (func_28(PLAYER::PLAYER_PED_ID(), pedParam0))
			{
				PED::SET_GROUP_SEPARATION_RANGE(func_15(), 50f);
				return true;
			}
		}
		else if (PED::IS_PED_GROUP_MEMBER(pedParam0, func_15()))
		{
			PED::SET_GROUP_SEPARATION_RANGE(func_15(), 50f);
			return true;
		}
	}
	else
	{
		return true;
	}

	return false;
}

BOOL func_28(Ped pedParam0, Ped pedParam1) // Position - 0x1BE8
{
	Vehicle vehiclePedIsIn;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(pedParam0))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedParam0, false);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
				if (!PED::IS_PED_INJURED(pedParam1))
					if (PED::IS_PED_SITTING_IN_VEHICLE(pedParam1, vehiclePedIsIn))
						return true;
		}
	}

	return false;
}

BOOL func_29(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x1C30
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (!bParam7)
		if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
			if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
				if (MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= fParam6)
					return true;
	else if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
			return true;

	return false;
}

void func_30(Blip blParam0, Blip* pblParam1) // Position - 0x1CAB
{
	if (HUD::DOES_BLIP_EXIST(blParam0))
	{
		if (HUD::DOES_BLIP_EXIST(pblParam1->f_6))
			HUD::SET_BLIP_ROUTE(pblParam1->f_6, false);
	
		HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
		HUD::CLEAR_GPS_MULTI_ROUTE();
		pblParam1->f_6 = blParam0;
		HUD::SET_BLIP_ROUTE(blParam0, true);
	}

	return;
}

Blip func_31(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x1CE6
{
	Blip blip;

	blip = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	HUD::SET_BLIP_ROUTE(blip, bParam3);
	return blip;
}

void func_32(Ped pedParam0, char* sParam1, int iParam2) // Position - 0x1D12
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, sParam1, func_33(iParam2), 1);
	return;
}

char* func_33(int iParam0) // Position - 0x1D29
{
	char* str;

	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
	
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
	
		case 2:
			return "SPEECH_PARAMS_BEAT";
	
		case 3:
			return "SPEECH_PARAMS_FORCE";
	
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
	
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
	
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
	
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
	
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
	
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
	
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
	
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
	
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
	
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
	
		case 14:
			return "SPEECH_PARAMS_HELI";
	
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
	
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
	
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
	
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
	
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
	
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
	
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
	
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
	
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
	
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
	
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
	
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
	
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
	
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
	
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
	
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
	
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
	
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
	
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
	
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
	
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
	
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
	
		default:
		
	}

	str = 0;
	return str;
}

void func_34(Blip* pblParam0, char* sParam1, BOOL bParam2) // Position - 0x1F1B
{
	if (!bParam2)
		if (!MISC::IS_STRING_NULL(sParam1))
			if (!MISC::ARE_STRINGS_EQUAL(sParam1, ""))
				_SHOW_SUBTITLE_CLEAR_EXISTING(sParam1, 7500, 1);

	pblParam0->f_10 = MISC::GET_GAME_TIMER();
	return;
}

void _SHOW_SUBTITLE_CLEAR_EXISTING(char* sParam0, int iParam1, int iParam2) // Position - 0x1F52
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
	return;
}

BOOL func_36(Blip* pblParam0) // Position - 0x1F6B
{
	if (!PED::IS_PED_INJURED(pblParam0->f_16))
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(pblParam0->f_16))
			return true;

	return false;
}

BOOL func_37(Blip* pblParam0, int iParam1) // Position - 0x1F8F
{
	if (iParam1 != 1 || HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
			return true;
	
		if (func_40(pblParam0))
			return true;
	}

	if (iParam1 != 2 || HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
		if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS() && !func_38())
			return true;

	return false;
}

BOOL func_38() // Position - 0x1FE7
{
	if (Global_22856 == 1)
		return true;

	return false;
}

BOOL _CONVERSATION_IS_DIALOGUE_IN_PROGRESS() // Position - 0x1FFE
{
	if (Global_21845 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

BOOL func_40(Blip* pblParam0) // Position - 0x2020
{
	int num;
	int gameTimer;

	gameTimer = MISC::GET_GAME_TIMER();
	num = gameTimer - pblParam0->f_10;

	if (num < 35)
		return true;

	return false;
}

BOOL func_41(Blip* pblParam0, int iParam1) // Position - 0x2043
{
	Vehicle vehiclePedIsIn;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (func_42(vehiclePedIsIn, pblParam0, iParam1))
			return true;
	}

	return false;
}

BOOL func_42(Vehicle veParam0, Blip* pblParam1, int iParam2) // Position - 0x2074
{
	int num;
	int vehicleMaxNumberOfPassengers;
	int i;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		num = 0;
	
		for (i = 0; i < 3; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(pblParam1->f_17[i]))
				num = num + 1;
		}
	
		vehicleMaxNumberOfPassengers = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(veParam0);
	
		if (iParam2 > 0)
			if (vehicleMaxNumberOfPassengers >= iParam2)
				if (iParam2 > 1)
					if (!VEHICLE::IS_SEAT_WARP_ONLY(veParam0, 1))
						return true;
				else
					return true;
		else if (vehicleMaxNumberOfPassengers >= num)
			if (num > 1)
				if (!VEHICLE::IS_SEAT_WARP_ONLY(veParam0, 1))
					return true;
			else
				return true;
	}

	return false;
}

void func_43(char* sParam0) // Position - 0x2108
{
	if (!MISC::IS_STRING_NULL(sParam0))
		HUD::CLEAR_THIS_PRINT(sParam0);

	return;
}

BOOL func_44(Blip* pblParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, BOOL bParam9, Vehicle veParam10, BOOL bParam11, BOOL bParam12, int iParam13, int iParam14, int iParam15, int iParam16, BOOL bParam17) // Position - 0x2120
{
	int i;
	int num;
	int num2;
	int num3;
	int num4;
	int gameTimer;
	BOOL flag;
	var unk;
	BOOL unk2;
	BOOL unk3;
	Vehicle unk4;
	int flag2;
	var flag3;
	var vehiclePedIsIn;
	BOOL scriptTaskStatus;
	Vehicle unk5;
	int unk6;
	int unk7;
	int unk8;
	var unk9;
	Vehicle unk10;
	Vehicle unk11;

	num4 = 0;
	unk = 3;
	pblParam0->f_17[0] = uParam1;
	pblParam0->f_17[1] = uParam2;
	pblParam0->f_17[2] = uParam3;
	pblParam0->f_16 = uParam1;
	unk5 = 3;
	unk5[0] = uParam4;
	unk5[1] = uParam5;
	unk5[2] = uParam6;
	unk9 = 3;
	unk9[0] = iParam13;
	unk9[1] = iParam14;
	unk9[2] = iParam15;
	flag = true;
	num = 0;
	num2 = 0;
	num3 = 0;
	unk[0] = 0;
	unk[1] = 0;
	unk[2] = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (!PED::IS_PED_INJURED(pblParam0->f_17[i]))
			num3 = num3 + 1;
	
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (!IS_BIT_SET(pblParam0->f_13, 29) && !IS_BIT_SET(pblParam0->f_13, 28))
			{
				if (!PED::IS_PED_INJURED(pblParam0->f_17[i]))
					PED::SET_PED_USING_ACTION_MODE(pblParam0->f_17[i], true, -1, 0);
			
				if (i == 2)
					MISC::SET_BIT(&(pblParam0->f_13), 28);
			}
		}
		else if (!IS_BIT_SET(pblParam0->f_13, 29) && IS_BIT_SET(pblParam0->f_13, 28))
		{
			if (!PED::IS_PED_INJURED(pblParam0->f_17[i]))
				PED::SET_PED_USING_ACTION_MODE(pblParam0->f_17[i], false, -1, 0);
		
			if (i == 2)
				MISC::CLEAR_BIT(&(pblParam0->f_13), 28);
		}
	}

	if (num3 == 0)
		return true;

	if (IS_BIT_SET(pblParam0->f_13, 26))
	{
		flag4 = false;
	
		if (!ENTITY::DOES_ENTITY_EXIST(pblParam0->f_21))
		{
			flags = 64;
			flags = flags | 65536;
			flags = flags | 2048;
			flags = flags | 1;
			flags = flags | 2;
			flags = flags | 4;
			flags = flags | 32;
			flags = flags | 16;
			flags = flags | 8;
			closestVehicle = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 0, flags);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(closestVehicle, false))
				pblParam0->f_21 = closestVehicle;
		}
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(pblParam0->f_21, false))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pblParam0->f_21, true)) < 400f)
			{
				if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || !bParam17)
					{
						if (func_42(pblParam0->f_21, pblParam0, num3))
						{
							for (i = 0; i < 3; i = i + 1)
							{
								if (!PED::IS_PED_INJURED(pblParam0->f_17[i]))
								{
									PED::SET_PED_MAX_MOVE_BLEND_RATIO(pblParam0->f_17[i], 1f);
								
									if (PED::IS_PED_GROUP_MEMBER(pblParam0->f_17[i], func_15()))
										PED::REMOVE_PED_FROM_GROUP(pblParam0->f_17[i]);
								
									if (TASK::GET_SCRIPT_TASK_STATUS(pblParam0->f_17[i], SCRIPT_TASK_ENTER_VEHICLE) == 7 && !func_59(pblParam0->f_17[i], pblParam0->f_21))
									{
										if (!PED::IS_PED_RAGDOLL(pblParam0->f_17[i]) && !TASK::IS_PED_GETTING_UP(pblParam0->f_17[i]))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pblParam0->f_17[i], true);
											TASK::TASK_ENTER_VEHICLE(pblParam0->f_17[i], pblParam0->f_21, 60000, i, 1f, 1, 0);
											PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pblParam0->f_17[i], i);
										}
									}
								}
							}
						
							return true;
						}
						else
						{
							flag4 = true;
						}
					}
					else
					{
						flag4 = true;
					}
				}
				else
				{
					flag4 = true;
				}
			}
			else
			{
				flag4 = true;
			}
		}
		else
		{
			flag4 = true;
		}
	
		if (flag4)
		{
			MISC::CLEAR_BIT(&(pblParam0->f_13), 26);
		
			for (i = 0; i < 3; i = i + 1)
			{
				if (!PED::IS_PED_INJURED(pblParam0->f_17[i]))
				{
					if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(pblParam0->f_17[i]) && !pblParam0->f_15)
						TASK::CLEAR_PED_TASKS(pblParam0->f_17[i]);
				
					if (!PED::IS_PED_GROUP_MEMBER(pblParam0->f_17[i], func_15()))
						if (func_57(pblParam0, pblParam0->f_17[i], fParam8, true))
							PED::SET_PED_AS_GROUP_MEMBER(pblParam0->f_17[i], func_15());
				}
			}
		}
	}

	if (!IS_BIT_SET(pblParam0->f_13, 26))
	{
		if (!func_56(pblParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && !ENTITY::DOES_ENTITY_EXIST(veParam10))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
			{
				if (!IS_BIT_SET(pblParam0->f_13, 13))
				{
					iParam16 == 4 || iParam16 == 5;
				
					if (!func_37(pblParam0, 2))
					{
						endRange = 0;
						randomIntInRange = 0;
					
						for (i = 0; i < 3; i = i + 1)
						{
							if (!PED::IS_PED_INJURED(pblParam0->f_17[i]))
								endRange = endRange + 1;
						}
					
						randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
					
						if (!PED::IS_PED_INJURED(pblParam0->f_17[randomIntInRange]))
							func_32(pblParam0->f_17[randomIntInRange], "NEED_A_BIGGER_VEHICLE", 3);
					
						func_34(pblParam0, "MORE_SEATS" /*A vehicle with more seats is needed.*/, false);
						MISC::SET_BIT(&(pblParam0->f_13), 13);
					}
				}
			
				flag3 = true;
			}
		}
		else
		{
			flag3 = false;
			MISC::CLEAR_BIT(&(pblParam0->f_13), 13);
			func_43("MORE_SEATS" /*A vehicle with more seats is needed.*/);
		}
	
		if (!ENTITY::DOES_ENTITY_EXIST(veParam10))
		{
			if (!PED::IS_PED_INJURED(pblParam0->f_17[0]) || !PED::IS_PED_INJURED(pblParam0->f_17[1]) || !PED::IS_PED_INJURED(pblParam0->f_17[2]))
			{
				if (!IS_BIT_SET(pblParam0->f_13, 31))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && !func_37(pblParam0, 2))
					{
						vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					
						if (func_55(vehiclePedIsIn, pblParam0))
						{
							func_34(pblParam0, "CMN_VEHSUIT" /*~s~Vehicle is not suitable.*/, false);
							MISC::SET_BIT(&(pblParam0->f_13), 31);
						}
					}
				}
				else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					MISC::CLEAR_BIT(&(pblParam0->f_13), 31);
					func_43("CMN_VEHSUIT" /*~s~Vehicle is not suitable.*/);
				}
			}
		}
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam10, false))
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veParam10))
				if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_VEH_EXIT))
					MISC::SET_BIT(&(pblParam0->f_13), 21);
			else if (IS_BIT_SET(pblParam0->f_13, 21))
				MISC::CLEAR_BIT(&(pblParam0->f_13), 21);
	
		for (i = 0; i < 3; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(pblParam0->f_17[i]))
			{
				if (!PED::IS_PED_INJURED(pblParam0->f_17[i]))
				{
					if (!PED::IS_PED_GROUP_MEMBER(pblParam0->f_17[i], func_15()))
						PED::SET_PED_DIES_IN_WATER(pblParam0->f_17[i], true);
					else
						PED::SET_PED_DIES_IN_WATER(pblParam0->f_17[i], false);
				
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
							if (PED::IS_PED_GROUP_MEMBER(pblParam0->f_17[i], func_15()))
								if (!func_56(pblParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
									if (!func_54(pblParam0->f_17[i]))
										PED::REMOVE_PED_FROM_GROUP(pblParam0->f_17[i]);
					
						if (vehiclePedIsIn != veParam10 && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(pblParam0->f_17[i], vehiclePedIsIn))
							{
								if (ENTITY::IS_ENTITY_IN_WATER(vehiclePedIsIn) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(vehiclePedIsIn))
								{
									entityCoords = { ENTITY::GET_ENTITY_COORDS(vehiclePedIsIn, true) };
								
									if (entityCoords.f_2 < -1f)
										TASK::TASK_LEAVE_VEHICLE(pblParam0->f_17[i], vehiclePedIsIn, 64);
								}
							}
						}
					}
				
					flag2 = true;
				
					if (!PED::IS_PED_GROUP_MEMBER(pblParam0->f_17[i], func_15()))
					{
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(pblParam0->f_17[i]))
						{
							vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pblParam0->f_17[i], false);
						
							if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam10, false))
								{
									if (vehiclePedIsIn != veParam10)
									{
										if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), vehiclePedIsIn))
										{
											if (ENTITY::GET_ENTITY_SPEED(vehiclePedIsIn) > 5f)
												TASK::TASK_LEAVE_VEHICLE(pblParam0->f_17[i], vehiclePedIsIn, 4160);
											else
												TASK::TASK_LEAVE_VEHICLE(pblParam0->f_17[i], vehiclePedIsIn, 64);
										
											flag2 = false;
										}
									}
								}
								else
								{
									if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
										vehiclePedIsIn2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn2, false))
									{
										if (vehiclePedIsIn != vehiclePedIsIn2)
										{
											if (ENTITY::GET_ENTITY_SPEED(vehiclePedIsIn) > 5f)
												TASK::TASK_LEAVE_VEHICLE(pblParam0->f_17[i], vehiclePedIsIn, 4160);
											else
												TASK::TASK_LEAVE_VEHICLE(pblParam0->f_17[i], vehiclePedIsIn, 64);
										
											flag2 = false;
										}
									}
								}
							}
						}
					}
				
					if (PED::IS_PED_GROUP_MEMBER(pblParam0->f_17[i], func_15()))
					{
						vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
					
						if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsUsing))
						{
							if (func_42(vehiclePedIsUsing, pblParam0, 0))
							{
								if (func_53(i, pblParam0) || !IS_BIT_SET(pblParam0->f_13, 27))
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pblParam0->f_17[i], i);
									func_16(i, pblParam0);
									num4 = num4 + 1;
								
									if (num4 >= num3)
										MISC::SET_BIT(&(pblParam0->f_13), 27);
								}
							}
							else if (!func_53(i, pblParam0))
							{
								if (ENTITY::GET_ENTITY_MODEL(vehiclePedIsUsing) == joaat("sentinel2"))
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pblParam0->f_17[i], 4);
								else
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pblParam0->f_17[i], 2);
							
								func_52(i, pblParam0);
							}
						}
					}
				
					if (!PED::IS_PED_GROUP_MEMBER(pblParam0->f_17[i], func_15()) && !func_51(pblParam0->f_17[i], veParam10) && !func_50(pblParam0->f_17[i], veParam10))
					{
						if (func_57(pblParam0, pblParam0->f_17[i], fParam8, bParam11))
						{
							if (!PED::IS_PED_GROUP_MEMBER(pblParam0->f_17[i], func_15()))
							{
								if (!PED::IS_PED_RAGDOLL(pblParam0->f_17[i]) && !TASK::IS_PED_GETTING_UP(pblParam0->f_17[i]) && !PED::IS_PED_JUMPING_OUT_OF_VEHICLE(pblParam0->f_17[i]) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(pblParam0->f_17[i]))
								{
									scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pblParam0->f_17[i], SCRIPT_TASK_ENTER_VEHICLE);
								
									if (scriptTaskStatus == 7)
										TASK::CLEAR_PED_TASKS(pblParam0->f_17[i]);
								
									PED::SET_PED_AS_GROUP_MEMBER(pblParam0->f_17[i], func_15());
									flag2 = false;
								}
							}
						}
					
						if (flag2)
						{
							if (!HUD::DOES_BLIP_EXIST(pblParam0->f_1[i]))
							{
								pblParam0->f_11 = MISC::GET_GAME_TIMER();
								pblParam0->f_1[i] = func_23(pblParam0->f_17[i], false, false);
								HUD::SET_BLIP_DISPLAY(pblParam0->f_1[i], 2);
							
								if (bParam9)
									func_30(pblParam0->f_1[i], pblParam0);
							}
						}
					
						flag = false;
					}
					else if (HUD::DOES_BLIP_EXIST(pblParam0->f_1[i]))
					{
						if (func_27(pblParam0->f_17[i], true) || func_51(pblParam0->f_17[i], veParam10) || bParam12 || VEHICLE::IS_VEHICLE_DRIVEABLE(veParam10, false) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veParam10, false))
						{
							if (HUD::DOES_BLIP_EXIST(pblParam0->f_1[i]))
							{
								HUD::REMOVE_BLIP(&pblParam0->f_1[i]);
								func_43(unk5[i]);
							}
						}
						else
						{
							if (bParam9)
								func_30(pblParam0->f_1[i], pblParam0);
						
							flag = false;
						}
					}
					else if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam10, false))
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(pblParam0->f_17[i], veParam10))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(pblParam0->f_17[i], veParam10, 20f, 20f, 5f, false, true, 0) && !IS_BIT_SET(pblParam0->f_13, 11) && !(bParam17 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veParam10, false)))
							{
								if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(pblParam0->f_17[i]))
								{
									if (!PED::IS_PED_IN_VEHICLE(pblParam0->f_17[i], veParam10, false))
									{
										if (!func_27(pblParam0->f_17[i], true))
										{
											if (func_26(pblParam0->f_17[i]))
											{
												scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pblParam0->f_17[i], SCRIPT_TASK_LEAVE_VEHICLE);
											
												if (scriptTaskStatus == 7)
													TASK::TASK_LEAVE_ANY_VEHICLE(pblParam0->f_17[i], 0, 0);
											}
										}
									}
								}
								else
								{
									if (PED::IS_PED_GROUP_MEMBER(pblParam0->f_17[i], func_15()))
										if (!PED::IS_PED_JUMPING_OUT_OF_VEHICLE(pblParam0->f_17[i]) && !PED::IS_PED_RAGDOLL(pblParam0->f_17[i]) && !TASK::IS_PED_GETTING_UP(pblParam0->f_17[i]) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(pblParam0->f_17[i]) && !FIRE::IS_ENTITY_ON_FIRE(veParam10))
											PED::REMOVE_PED_FROM_GROUP(pblParam0->f_17[i]);
								
									scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pblParam0->f_17[i], SCRIPT_TASK_ENTER_VEHICLE);
								
									if (scriptTaskStatus == 7 && !func_59(pblParam0->f_17[i], veParam10))
									{
										if (!PED::IS_PED_JUMPING_OUT_OF_VEHICLE(pblParam0->f_17[i]) && !PED::IS_PED_JUMPING_OUT_OF_VEHICLE(PLAYER::PLAYER_PED_ID()) && !func_49(pblParam0->f_17[i], 2f) && !PED::IS_PED_RAGDOLL(pblParam0->f_17[i]) && !TASK::IS_PED_GETTING_UP(pblParam0->f_17[i]) && !FIRE::IS_ENTITY_ON_FIRE(veParam10))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pblParam0->f_17[i], true);
										
											if (IS_BIT_SET(pblParam0->f_13, 10))
												PED::SET_PED_MAX_MOVE_BLEND_RATIO(pblParam0->f_17[i], 1f);
										
											TASK::TASK_ENTER_VEHICLE(pblParam0->f_17[i], veParam10, 60000, i, 1073741824, 1, 0);
											PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(pblParam0->f_17[i], false);
										}
									}
									else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veParam10, false))
									{
										pblParam0->f_1[i] = func_23(pblParam0->f_17[i], false, false);
										HUD::SET_BLIP_DISPLAY(pblParam0->f_1[i], 2);
										flag = false;
									}
								}
							}
							else if (!PED::IS_PED_GROUP_MEMBER(pblParam0->f_17[i], func_15()))
							{
								if (func_57(pblParam0, pblParam0->f_17[i], fParam8, bParam11))
								{
									if (!PED::IS_PED_RAGDOLL(pblParam0->f_17[i]) && !TASK::IS_PED_GETTING_UP(pblParam0->f_17[i]))
									{
										scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pblParam0->f_17[i], SCRIPT_TASK_ENTER_VEHICLE);
									
										if (scriptTaskStatus == 7)
											TASK::CLEAR_PED_TASKS(pblParam0->f_17[i]);
									
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pblParam0->f_17[i], false);
										PED::SET_PED_AS_GROUP_MEMBER(pblParam0->f_17[i], func_15());
									}
								}
							}
						}
						else if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veParam10))
						{
							if (!PED::IS_PED_GROUP_MEMBER(pblParam0->f_17[i], func_15()))
							{
								if (!IS_BIT_SET(pblParam0->f_13, 21))
									PED::SET_PED_AS_GROUP_MEMBER(pblParam0->f_17[i], func_15());
							}
							else if (IS_BIT_SET(pblParam0->f_13, 21))
							{
								PED::REMOVE_PED_FROM_GROUP(pblParam0->f_17[i]);
								MISC::SET_BIT(&(pblParam0->f_13), 21);
							}
						}
						else if (PED::IS_PED_GROUP_MEMBER(pblParam0->f_17[i], func_15()) && !FIRE::IS_ENTITY_ON_FIRE(veParam10))
						{
							PED::REMOVE_PED_FROM_GROUP(pblParam0->f_17[i]);
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(pblParam0->f_1[i]))
				{
					HUD::REMOVE_BLIP(&pblParam0->f_1[i]);
					func_43(unk5[i]);
				}
			}
		}
	
		for (i = 0; i < 3; i = i + 1)
		{
			if (HUD::DOES_BLIP_EXIST(pblParam0->f_1[i]))
			{
				unk[i] = 1;
				num = num + 1;
			}
		}
	
		if (!func_37(pblParam0, 2))
		{
			if (num > 0)
			{
				for (i = 0; i < 3; i = i + 1)
				{
					if (unk[i])
					{
						if (!PED::IS_PED_INJURED(pblParam0->f_17[i]))
						{
							if (func_54(pblParam0->f_17[i]) || ENTITY::IS_ENTITY_AT_ENTITY(pblParam0->f_17[i], PLAYER::PLAYER_PED_ID(), pblParam0->f_8, pblParam0->f_8, pblParam0->f_8, false, true, 0))
							{
								num = num - 1;
								unk[i] = 0;
							}
						}
					}
					else if (!PED::IS_PED_INJURED(pblParam0->f_17[i]))
					{
						!ENTITY::IS_ENTITY_AT_ENTITY(pblParam0->f_17[i], PLAYER::PLAYER_PED_ID(), pblParam0->f_8 * 0.85f, pblParam0->f_8 * 0.85f, pblParam0->f_8, false, true, 0) && !func_54(pblParam0->f_17[i]);
					}
				}
			}
		
			gameTimer = MISC::GET_GAME_TIMER();
		
			if (gameTimer - pblParam0->f_11 > 1500 || num3 == 1)
			{
				if (num > 0)
				{
					if (pblParam0->f_12 < num)
					{
						if (num == num3 || num2 + num == num3 && num3 > 1)
						{
							if (!IS_BIT_SET(pblParam0->f_13, 5))
							{
								func_34(pblParam0, sParam7, false);
								MISC::SET_BIT(&(pblParam0->f_13), 5);
								pblParam0->f_12 = num;
							}
							else
							{
								pblParam0->f_12 = num;
							}
						}
						else
						{
							for (i = 0; i < 3; i = i + 1)
							{
								if (unk[i])
								{
									if (!func_48(i, pblParam0))
									{
										if (!MISC::IS_STRING_NULL(unk9[i]))
										{
											if (!MISC::ARE_STRINGS_EQUAL(unk9[i], ""))
											{
												func_46(pblParam0, unk5[i], unk9[i], false);
												func_45(i, pblParam0);
												pblParam0->f_12 = num;
											}
										}
									
										if (!func_48(i, pblParam0))
										{
											func_34(pblParam0, unk5[i], false);
											func_45(i, pblParam0);
											pblParam0->f_12 = num;
										}
									}
									else
									{
										pblParam0->f_12 = num;
									}
								}
							}
						}
					}
				}
				else
				{
					pblParam0->f_12 = 0;
				}
			}
		}
	
		MISC::CLEAR_BIT(&(pblParam0->f_13), 10);
	
		if (flag && !flag3)
		{
			for (i = 0; i < 3; i = i + 1)
			{
				if (HUD::DOES_BLIP_EXIST(pblParam0->f_1[i]))
				{
					HUD::REMOVE_BLIP(&pblParam0->f_1[i]);
					func_43(unk5[i]);
				}
			}
		
			func_43("MORE_SEATS" /*A vehicle with more seats is needed.*/);
			return true;
		}
	}

	return false;
}

void func_45(int iParam0, Blip* pblParam1) // Position - 0x3163
{
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(pblParam1->f_13), 14);
			break;
	
		case 1:
			MISC::SET_BIT(&(pblParam1->f_13), 15);
			break;
	
		case 2:
			MISC::SET_BIT(&(pblParam1->f_13), 16);
			break;
	}

	return;
}

void func_46(Blip* pblParam0, const char* sParam1, const char* sParam2, BOOL bParam3) // Position - 0x31AB
{
	if (!bParam3)
		if (!MISC::IS_STRING_NULL(sParam1))
			if (!MISC::ARE_STRINGS_EQUAL(sParam1, ""))
				func_47(sParam1, sParam2, 7500, 1);

	pblParam0->f_10 = MISC::GET_GAME_TIMER();
	return;
}

void func_47(const char* sParam0, const char* sParam1, int iParam2, int iParam3) // Position - 0x31E4
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, true);
	return;
}

BOOL func_48(int iParam0, Blip* pblParam1) // Position - 0x3203
{
	switch (iParam0)
	{
		case 0:
			return IS_BIT_SET(pblParam1->f_13, 14);
	
		case 1:
			return IS_BIT_SET(pblParam1->f_13, 15);
	
		case 2:
			return IS_BIT_SET(pblParam1->f_13, 16);
	
		default:
		
	}

	return false;
}

BOOL func_49(Ped pedParam0, float fParam1) // Position - 0x3243
{
	Vehicle vehiclePedIsIn;

	if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedParam0, false);
	
		if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
			if (ENTITY::GET_ENTITY_SPEED(vehiclePedIsIn) > fParam1)
				return true;
	}

	return false;
}

BOOL func_50(Ped pedParam0, Vehicle veParam1) // Position - 0x327A
{
	Vehicle vehiclePedIsEntering;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (!PED::IS_PED_GROUP_MEMBER(pedParam0, func_15()))
		{
			vehiclePedIsEntering = PED::GET_VEHICLE_PED_IS_ENTERING(pedParam0);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam1, false))
				if (ENTITY::IS_ENTITY_AT_ENTITY(pedParam0, veParam1, 20f + 10f, 20f + 10f, 10f, false, true, 0))
					if (vehiclePedIsEntering == veParam1)
						return true;
		}
	}

	return false;
}

BOOL func_51(Ped pedParam0, Vehicle veParam1) // Position - 0x32E1
{
	if (!PED::IS_PED_INJURED(pedParam0))
		if (ENTITY::DOES_ENTITY_EXIST(veParam1))
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam1, false))
				if (PED::IS_PED_SITTING_IN_VEHICLE(pedParam0, veParam1))
					return true;

	return false;
}

void func_52(int iParam0, Blip* pblParam1) // Position - 0x3316
{
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(pblParam1->f_13), 17);
			break;
	
		case 1:
			MISC::SET_BIT(&(pblParam1->f_13), 18);
			break;
	
		case 2:
			MISC::SET_BIT(&(pblParam1->f_13), 19);
			break;
	}

	return;
}

BOOL func_53(int iParam0, Blip* pblParam1) // Position - 0x335E
{
	switch (iParam0)
	{
		case 0:
			return IS_BIT_SET(pblParam1->f_13, 17);
	
		case 1:
			return IS_BIT_SET(pblParam1->f_13, 18);
	
		case 2:
			return IS_BIT_SET(pblParam1->f_13, 19);
	
		default:
		
	}

	return false;
}

BOOL func_54(Ped pedParam0) // Position - 0x339E
{
	Vehicle vehiclePedIsUsing;
	Vehicle vehiclePedIsUsing2;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsUsing, false))
		{
			if (!PED::IS_PED_INJURED(pedParam0))
			{
				vehiclePedIsUsing2 = PED::GET_VEHICLE_PED_IS_USING(pedParam0);
			
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsUsing2, false))
					if (vehiclePedIsUsing == vehiclePedIsUsing2)
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedParam0, 20f, 20f, 20f, false, true, 0) && ENTITY::IS_ENTITY_AT_ENTITY(pedParam0, vehiclePedIsUsing2, 20f, 20f, 20f, false, true, 0))
							return true;
			}
		}
	}

	return false;
}

BOOL func_55(Vehicle veParam0, Blip* pblParam1) // Position - 0x342B
{
	int num;
	int num2;
	int i;
	Ped pedInVehicleSeat;
	Ped pedInVehicleSeat2;
	Ped pedInVehicleSeat3;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("bus") || ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("coach"))
		{
			num = 0;
			num2 = 0;
			i = 0;
		
			for (i = 0; i < 3; i = i + 1)
			{
				if (!PED::IS_PED_INJURED(pblParam1->f_17[i]))
					num = num + 1;
			}
		
			pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, 0, false);
		
			if (!PED::IS_PED_INJURED(pedInVehicleSeat))
				if (pedInVehicleSeat == pblParam1->f_17[0] || pedInVehicleSeat == pblParam1->f_17[1] || pedInVehicleSeat == pblParam1->f_17[2])
					num2 = num2 + 1;
			else
				num2 = num2 + 1;
		
			pedInVehicleSeat2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, 1, false);
		
			if (!PED::IS_PED_INJURED(pedInVehicleSeat2))
				if (pedInVehicleSeat2 == pblParam1->f_17[0] || pedInVehicleSeat2 == pblParam1->f_17[1] || pedInVehicleSeat2 == pblParam1->f_17[2])
					num2 = num2 + 1;
			else
				num2 = num2 + 1;
		
			pedInVehicleSeat3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, 2, false);
		
			if (!PED::IS_PED_INJURED(pedInVehicleSeat3))
				if (pedInVehicleSeat3 == pblParam1->f_17[0] || pedInVehicleSeat3 == pblParam1->f_17[1] || pedInVehicleSeat3 == pblParam1->f_17[2])
					num2 = num2 + 1;
			else
				num2 = num2 + 1;
		
			if (num2 < num)
				return true;
		}
	}

	return false;
}

BOOL func_56(Blip* pblParam0) // Position - 0x358B
{
	Vehicle vehiclePedIsIn;

	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (func_42(vehiclePedIsIn, pblParam0, 0))
			return true;
	}

	return false;
}

BOOL func_57(Blip* pblParam0, Ped pedParam1, float fParam2, BOOL bParam3) // Position - 0x35BA
{
	Vehicle vehiclePedIsIn;

	if (!PED::IS_PED_INJURED(pedParam1))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(pedParam1))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedParam1, false);
		
			if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), vehiclePedIsIn))
						if (func_56(pblParam0))
							return true;
					else if (bParam3)
						return true;
				else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedParam1, fParam2, fParam2, 3f, false, true, 0))
					return true;
		}
		else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedParam1, fParam2, fParam2, 3f, false, true, 0))
		{
			if (!bParam3)
			{
				vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			
				if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn))
					if (func_42(vehiclePedIsIn, pblParam0, 0))
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
							if (func_58(vehiclePedIsIn))
								return true;
				else
					return true;
			}
			else
			{
				return true;
			}
		}
	}

	return false;
}

BOOL func_58(Vehicle veParam0) // Position - 0x3698
{
	float entitySpeed;

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
	{
		entitySpeed = ENTITY::GET_ENTITY_SPEED(veParam0);
	
		if (entitySpeed > -0.5f && entitySpeed < 0.5f)
			return true;
	}

	return false;
}

BOOL func_59(Ped pedParam0, Vehicle veParam1) // Position - 0x36D0
{
	Vehicle vehiclePedIsUsing;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam1, false))
		{
			vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(pedParam0);
		
			if (vehiclePedIsUsing == veParam1)
				return true;
		}
	}

	return false;
}

void func_60() // Position - 0x3700
{
	Vehicle vehiclePedIsEntering;
	Ped pedInVehicleSeat;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		vehiclePedIsEntering = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsEntering, false))
		{
			pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsEntering, 0, false);
		
			if (!PED::IS_PED_INJURED(pedInVehicleSeat))
				if (pedInVehicleSeat != PLAYER::PLAYER_PED_ID())
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedInVehicleSeat))
						if (!PED::IS_PED_HEADTRACKING_ENTITY(pedInVehicleSeat, PLAYER::PLAYER_PED_ID()))
							TASK::TASK_LOOK_AT_ENTITY(pedInVehicleSeat, PLAYER::PLAYER_PED_ID(), 2000, SLF_WHILE_NOT_IN_FOV, 2);
		}
	}

	return;
}

void func_61(Blip* pblParam0) // Position - 0x376D
{
	int i;

	if (!IS_BIT_SET(pblParam0->f_13, 25))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	
		for (i = 0; i < 3; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(pblParam0->f_17[i]))
			{
				if (!PED::IS_PED_INJURED(pblParam0->f_17[i]))
				{
					PED::SET_PED_CONFIG_FLAG(pblParam0->f_17[i], 32, false);
					PED::SET_PED_CONFIG_FLAG(pblParam0->f_17[i], 305, true);
					PED::SET_PED_CONFIG_FLAG(pblParam0->f_17[i], 268, true);
					PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(pblParam0->f_17[i], false);
				}
			}
		}
	
		MISC::SET_BIT(&(pblParam0->f_13), 25);
	}

	return;
}

void func_62(Blip* pblParam0) // Position - 0x380D
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(pblParam0->f_17[i]))
		{
			if (!PED::IS_PED_INJURED(pblParam0->f_17[i]))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(pblParam0->f_17[i]))
				{
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pblParam0->f_17[i], false);
					PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(pblParam0->f_17[i], false);
				}
			}
		}
	}

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), false);
				PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), false);
			}
		}
	}

	return;
}

char* func_63() // Position - 0x38A3
{
	char* unk;

	return unk;
}

Vector3 func_64() // Position - 0x38AD
{
	var unk;

	return unk;
}

void func_65() // Position - 0x38B9
{
	int i;

	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_94, false))
	{
		if (HUD::DOES_BLIP_EXIST(blLocal_100))
			HUD::REMOVE_BLIP(&blLocal_100);
	
		if (iLocal_34 <= 2)
		{
			iLocal_78 = CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * ((60 * iLocal_80) + iLocal_81);
			iLocal_78 = iLocal_78 + MISC::GET_GAME_TIMER();
			iLocal_82 = iLocal_78 - (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 30);
		}
		else if (iLocal_34 > 6)
		{
			iLocal_78 = CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * ((60 * iLocal_80) + iLocal_81);
			iLocal_78 = iLocal_78 + MISC::GET_GAME_TIMER();
			iLocal_82 = iLocal_78 - (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 30);
		}
		else if (iLocal_34 >= 3 && iLocal_34 <= 4)
		{
			veLocal_95 = VEHICLE::CREATE_VEHICLE(hLocal_87, uLocal_68, fLocal_72, true, true, false);
			iLocal_91[0] = PED::CREATE_PED_INSIDE_VEHICLE(veLocal_95, PED_TYPE_COP, hLocal_85, -1, true, true);
			iLocal_91[1] = PED::CREATE_PED_INSIDE_VEHICLE(veLocal_95, PED_TYPE_COP, hLocal_85, 0, true, true);
			PED::ADD_RELATIONSHIP_GROUP("rghCop", &hLocal_116);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, hLocal_116, joaat("PLAYER"));
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_91[0], BF_CanBust, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_91[1], BF_CanBust, true);
		
			for (i = 0; i < iLocal_91; i = i + 1)
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_91[i], joaat("WEAPON_PISTOL"), -1, false, true);
				PED::SET_PED_SEEING_RANGE(iLocal_91[i], 100f);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_91[i], hLocal_116);
			}
		}
	
		iLocal_36 = 2;
	}

	return;
}

void func_66() // Position - 0x39EB
{
	int i;

	if (!ENTITY::IS_ENTITY_DEAD(veLocal_94, false))
	{
		if (func_101() || PED::IS_PED_INJURED(iLocal_88[0]))
		{
			for (i = 0; i < iLocal_88; i = i + 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_88[i]))
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_97[i]))
					{
						uLocal_97[i] = func_10(iLocal_88[i], true, 145);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_88[i], BF_CanUseVehicles, false);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_118);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_118);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_88[i], iLocal_118);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_118);
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uLocal_97[i]))
				{
					HUD::REMOVE_BLIP(&uLocal_97[i]);
				}
			}
		}
		else if (!bLocal_77)
		{
			if (!PED::IS_PED_INJURED(iLocal_88[0]))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_88[0], 50f, 50f, 50f, false, true, 0))
				{
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_88[0], veLocal_94, PLAYER::PLAYER_PED_ID(), 8, 25f, 786469, -1f, -1f, true);
					bLocal_77 = true;
				}
			}
		}
	
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_94, false))
		{
			if (HUD::DOES_BLIP_EXIST(blLocal_100))
				HUD::REMOVE_BLIP(&blLocal_100);
		
			func_100(&uLocal_104, 0, false);
			iLocal_36 = 2;
		}
		else if (VEHICLE::IS_VEHICLE_SEAT_FREE(veLocal_94, -1, false) || PED::IS_PED_INJURED(iLocal_88[0]))
		{
			func_100(&uLocal_104, 0, false);
		}
		else
		{
			func_67();
		}
	}

	return;
}

void func_67() // Position - 0x3B59
{
	if (!PED::IS_PED_INJURED(iLocal_88[0]) && !ENTITY::IS_ENTITY_DEAD(veLocal_94, false))
		if (PED::IS_PED_IN_VEHICLE(iLocal_88[0], veLocal_94, false))
			func_68(&uLocal_104, veLocal_94, 0, 0, true, true, true);

	return;
}

void func_68(var uParam0, Vehicle veParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x3B97
{
	func_69(uParam0, veParam1, 0f, 0f, 0f, iParam2, iParam3, bParam4, bParam5, bParam6);
	return;
}

void func_69(var uParam0, Vehicle veParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x3BB4
{
	func_70(uParam0, veParam1, fParam2, iParam5, iParam6, bParam7, bParam8, bParam9);
	return;
}

void func_70(var uParam0, Vehicle veParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x3BD2
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		func_100(uParam0, 0, false);

	uParam0->f_6 = 2;
	func_71(uParam0, veParam1, uParam2, iParam5, iParam6, bParam7, bParam8, bParam9);
	return;
}

void func_71(var uParam0, Vehicle veParam1, var uParam2, var uParam3, var uParam4, const char* sParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x3C0A
{
	const char* string2;
	BOOL flag;

	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
		if (MISC::GET_GAME_TIMER() >= uParam0->f_8 + uParam0->f_9)
			uParam0->f_1 = 0;

	string2 = sParam5;

	if (MISC::IS_STRING_NULL(string2))
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			string2 = "CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/;
		else
			string2 = "FM_IHELP_HNT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus.*/;

	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(string2))
		func_98();

	if (func_97(veParam1) && ENTITY::IS_ENTITY_VISIBLE(veParam1))
	{
		flag = false;
	
		if (ENTITY::IS_ENTITY_A_PED(veParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam1), true);
		
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam1)))
				flag = true;
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(veParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veParam1));
		
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veParam1)))
				flag = true;
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(veParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(veParam1));
		
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(veParam1)))
				flag = true;
		}
	
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_92(uParam0, bParam7, bParam9, false))
				func_88(uParam0, veParam1, uParam2, iParam6);
		
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_76(string2))
				{
					if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(string2) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (flag && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && bParam8)
						{
							if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(string2))
							{
								_DISPLAY_HELP_TEXT(string2, -1);
								uParam0->f_3 = string2;
							
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/, string2))
									func_74(true);
							}
						}
					}
				}
			}
			else if (func_76(string2))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(string2))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(veParam1) && flag && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && bParam8)
					{
						if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(string2))
						{
							_DISPLAY_HELP_TEXT(string2, -1);
							uParam0->f_3 = string2;
						
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/, string2))
								func_74(true);
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam5))
				if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam5))
					HUD::CLEAR_HELP(true);
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_BOAT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_BOAT) == FIRST_PERSON)
						func_100(uParam0, string2, true);
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == FIRST_PERSON)
						func_100(uParam0, string2, true);
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == FIRST_PERSON)
						func_100(uParam0, string2, true);
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == FIRST_PERSON)
						func_100(uParam0, string2, true);
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == FIRST_PERSON)
						func_100(uParam0, string2, true);
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == CINEMATIC || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == FIRST_PERSON)
					func_100(uParam0, string2, true);
		
			if (!func_92(uParam0, bParam7, bParam9, false))
				if (!*uParam0 && !uParam0->f_1 && !func_73(uParam0))
					func_72(uParam0);
		}
	}
	else
	{
		func_100(uParam0, string2, false);
	}

	return;
}

void func_72(var uParam0) // Position - 0x3F77
{
	if (func_97(PLAYER::PLAYER_PED_ID()))
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());

	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		CAM::STOP_GAMEPLAY_HINT(false);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
	
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}

	uParam0->f_2 = -1;
	*uParam0 = 1;
	return;
}

BOOL func_73(var uParam0) // Position - 0x3FE0
{
	int num;

	if (uParam0->f_2 > 0)
	{
		num = uParam0->f_10 / 2;
	
		if (uParam0->f_2 + num > MISC::GET_GAME_TIMER())
			return true;
	}

	return false;
}

int func_74(BOOL bParam0) // Position - 0x400F
{
	switch (Global_43377)
	{
		case 0:
		case 3:
			if (bParam0)
				Global_113810.f_10052.f_100 = Global_113810.f_10052.f_100 + 1;
		
			return Global_113810.f_10052.f_100;
	
		case 4:
			if (bParam0)
				Global_113810.f_10052.f_101 = Global_113810.f_10052.f_101 + 1;
		
			return Global_113810.f_10052.f_101;
	
		case 5:
		case 15:
			if (bParam0)
				Global_113810.f_10052.f_102 = Global_113810.f_10052.f_102 + 1;
		
			return Global_113810.f_10052.f_102;
	
		default:
			break;
	}

	return 3;
}

void _DISPLAY_HELP_TEXT(const char* text, int iParam1) // Position - 0x40B9
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

BOOL func_76(const char* sParam0) // Position - 0x40D0
{
	if (!func_77(true, true, false))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/))
			HUD::CLEAR_HELP(true);
	
		return false;
	}

	switch (Global_43377)
	{
		case 0:
		case 3:
			if (func_74(false) < 3)
				return true;
			break;
	
		case 4:
			if (func_74(false) < 1)
				return true;
			break;
	
		case 5:
		case 15:
			if (func_74(false) < 1)
				return true;
			break;
	
		default:
			break;
	}

	return false;
}

BOOL func_77(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4169
{
	Vehicle vehiclePedIsIn;
	int seatIndex;

	if (bParam0)
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			return false;

	if (bParam2)
		return true;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		return false;

	if (func_87(0))
		return false;

	if (func_86())
		return false;

	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		return false;

	if (Global_75816)
		return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0)
		return false;

	if (Global_60666)
		return false;

	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_BOAT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_BOAT) == FIRST_PERSON)
					return false;
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == FIRST_PERSON)
					return false;
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == FIRST_PERSON)
					return false;
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == FIRST_PERSON)
					return false;
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == FIRST_PERSON)
					return false;
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == CINEMATIC || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == FIRST_PERSON)
				return false;
		
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
				return false;
		}
	}

	if (func_85() || func_84(*Global_4718592.f_171044) || func_83())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			seatIndex = _GET_VEHICLE_SEAT_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (VEHICLE::IS_TURRET_SEAT(vehiclePedIsIn, seatIndex) || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("apc") && seatIndex != -1 || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("akula") && seatIndex != -1 || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("riot2") && seatIndex == 0 && func_81(vehiclePedIsIn, 10) && VEHICLE::GET_VEHICLE_MOD(vehiclePedIsIn, 10) != -1)
				return false;
		}
	}

	if (Global_1962809)
		return false;

	if (func_78(PLAYER::PLAYER_ID()))
		return false;

	return true;
}

BOOL func_78(Player plParam0) // Position - 0x43C2
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			return Global_2657704[plParam0].f_321.f_7 != -1;
		else if (Global_1575063 && plParam0 == PLAYER::PLAYER_ID() && _NETWORK_IS_PLAYER_VALID(plParam0, true, false))
			return Global_2657704[plParam0].f_321.f_7 != -1;

	return false;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x4428
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

Player _INVALID_PLAYER_INDEX() // Position - 0x4488
{
	return -1;
}

BOOL func_81(Vehicle veParam0, int iParam1) // Position - 0x4491
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(veParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return true;
			
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(veParam0, iParam1) > 0)
						return true;
					break;
			}
		}
	}

	return false;
}

int _GET_VEHICLE_SEAT_PED_IS_IN(Ped ped, BOOL includeLastVehicle) // Position - 0x44F3
{
	Vehicle vehiclePedIsIn;
	int vehicleModelNumberOfSeats;
	int i;
	int seatIndex;

	if (!PED::IS_PED_INJURED(ped))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(ped, includeLastVehicle))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(ped, includeLastVehicle);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn))
			{
				vehicleModelNumberOfSeats = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn));
			
				if (vehicleModelNumberOfSeats == 1)
				{
					seatIndex = -1;
					return seatIndex;
				}
			
				for (i = 0; i < vehicleModelNumberOfSeats; i = i + 1)
				{
					seatIndex = i - 1;
				
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(vehiclePedIsIn, seatIndex, false))
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, seatIndex, false) == ped)
							return seatIndex;
				}
			}
		}
	}

	return seatIndex;
}

BOOL func_83() // Position - 0x4578
{
	return Global_2683883.f_19;
}

BOOL func_84(int iParam0) // Position - 0x4586
{
	return iParam0 == 51;
}

BOOL func_85() // Position - 0x4593
{
	return Global_2683883.f_18;
}

BOOL func_86() // Position - 0x45A1
{
	return MISC::GET_GAME_TIMER() <= Global_23390.f_6321 + 100;
}

BOOL func_87(int iParam0) // Position - 0x45B6
{
	if (iParam0 == 1)
		if (Global_20500.f_1 > 3)
			if (IS_BIT_SET(Global_8370, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_20500.f_1 > 3)
		return true;

	return false;
}

void func_88(var uParam0, Vehicle veParam1, Vector3 vParam2, var uParam3, var uParam4, int iParam5) // Position - 0x460D
{
	Ped pedIndexFromEntityIndex;
	int easeInTime;
	int easeOutTime;
	eScriptLookAtFlags flags;
	int num;

	if (Global_1581988 == 1)
		return;

	if (ENTITY::IS_ENTITY_DEAD(veParam1, false))
		func_100(uParam0, 0, false);

	if (func_91(vParam2, 0f, 0f, 0f, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(veParam1))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam1);
		
			if (!PED::IS_PED_IN_ANY_VEHICLE(pedIndexFromEntityIndex, false))
				if (PED::IS_PED_A_PLAYER(pedIndexFromEntityIndex))
					if (!func_89())
						vParam2 = { 0f, 0f, 1f };
				else if (PED::IS_PED_MALE(pedIndexFromEntityIndex))
					vParam2 = { 0f, 0f, 1f };
		}
	}

	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	easeInTime = uParam0->f_9;
	easeOutTime = uParam0->f_10;

	if (iParam5 == 1726668277)
	{
		if (easeInTime < 1500)
			easeInTime = 1500;
	
		if (easeOutTime < 1500)
			easeOutTime = 1500;
	}

	CAM::SET_GAMEPLAY_ENTITY_HINT(veParam1, vParam2, true, -1, easeInTime, easeOutTime, iParam5);
	flags = SLF_WHILE_NOT_IN_FOV;
	num = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), veParam1, -1, flags, num);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, false);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
	return;
}

BOOL func_89() // Position - 0x471D
{
	return func_90(PLAYER::PLAYER_ID());
}

BOOL func_90(Player plParam0) // Position - 0x472D
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(plParam0)) == joaat("MP_F_Freemode_01"))
		return 1;

	return 0;
}

BOOL func_91(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x474C
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_92(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x4793
{
	if (uParam0->f_1)
		if (MISC::GET_GAME_TIMER() >= uParam0->f_8 + uParam0->f_9)
			uParam0->f_1 = 0;

	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
		
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					if (func_96(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_95(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_95(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_96(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
		
			if (func_73(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
	
		case 1:
			if (MISC::GET_GAME_TIMER() - uParam0->f_4 <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (!func_96(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_95(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_95(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_96(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
	
		case 2:
			if (uParam0->f_6 == 0)
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					if (!func_96(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (!func_95(bParam1, bParam2, bParam3))
					uParam0->f_5 = 0;
			else if (uParam0->f_6 == 1)
				if (!func_95(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					uParam0->f_5 = 0;
			else if (uParam0->f_6 == 2)
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					uParam0->f_5 = 0;
				else if (!func_96(bParam1, bParam2, bParam3))
					uParam0->f_5 = 0;
			break;
	
		case 3:
			if (MISC::GET_GAME_TIMER() - uParam0->f_4 > 500)
				if (uParam0->f_6 == 0)
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
						if (func_94(bParam1, bParam2, bParam3))
							uParam0->f_5 = 0;
					else if (func_93(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (uParam0->f_6 == 1)
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || func_93(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (uParam0->f_6 == 2)
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
						uParam0->f_5 = 0;
					else if (func_94(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
			break;
	
		case 4:
			if (!func_73(uParam0))
				uParam0->f_5 = 0;
			break;
	}

	if (!func_77(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}

	if (uParam0->f_7)
	{
		func_98();
		return true;
	}
	else
	{
		return false;
	}

	return false;
}

BOOL func_93(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4AFF
{
	if (!func_77(bParam0, bParam1, bParam2))
		return false;

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
		
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(PLAYER_CONTROL, INPUT_VEH_CIN_CAM))
				return true;
		}
	}

	return false;
}

BOOL func_94(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4B51
{
	if (!func_77(bParam0, bParam1, bParam2))
		return false;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
	
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(PLAYER_CONTROL, INPUT_VEH_CIN_CAM))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return true;
			}
		}
	}

	return false;
}

BOOL func_95(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4B9A
{
	if (!func_77(bParam0, bParam1, bParam2))
		return false;

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
		
			if (PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_CIN_CAM) && MISC::GET_GAME_TIMER() > Global_116)
				return true;
		}
	}

	return false;
}

BOOL func_96(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4BF9
{
	if (!func_77(bParam0, bParam1, bParam2))
		return false;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
	
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_CIN_CAM) && MISC::GET_GAME_TIMER() > Global_116)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return true;
			}
		}
	}

	return false;
}

BOOL func_97(Vehicle veParam0) // Position - 0x4C4F
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		if (ENTITY::IS_ENTITY_A_VEHICLE(veParam0))
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veParam0), false))
				return true;
		else if (ENTITY::IS_ENTITY_A_PED(veParam0))
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam0)))
				return true;
		else if (ENTITY::IS_ENTITY_AN_OBJECT(veParam0))
			return true;

	return false;
}

void func_98() // Position - 0x4CAA
{
	MISC::SET_BIT(&Global_8371, 4);
	return;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(const char* message) // Position - 0x4CBA
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_100(var uParam0, const char* sParam1, BOOL bParam2) // Position - 0x4CCD
{
	const char* str;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (IS_BIT_SET(Global_2794162.f_4697, 26))
			return;

	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(bParam2);
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
	
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}

	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	str = sParam1;

	if (MISC::IS_STRING_NULL(str))
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			str = "CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/;
		else
			str = "FM_IHELP_HNT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus.*/;

	if (!MISC::IS_STRING_NULL(uParam0->f_3))
		if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0->f_3))
			HUD::CLEAR_HELP(true);

	if (!MISC::IS_STRING_NULL(str))
		if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(str))
			HUD::CLEAR_HELP(true);

	return;
}

BOOL func_101() // Position - 0x4DA7
{
	if (ENTITY::DOES_ENTITY_EXIST(veLocal_94))
		if (!ENTITY::IS_ENTITY_DEAD(veLocal_94, false))
			if (ENTITY::GET_ENTITY_HEALTH(veLocal_94) < 300 || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(veLocal_94) < 200f || FIRE::IS_ENTITY_ON_FIRE(veLocal_94) || VEHICLE::IS_VEHICLE_TYRE_BURST(veLocal_94, 0, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(veLocal_94, 1, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(veLocal_94, 4, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(veLocal_94, 5, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(veLocal_94, 0, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(veLocal_94, 4, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(veLocal_94, 1, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(veLocal_94, 5, false))
				return true;

	return false;
}

void func_102() // Position - 0x4E5F
{
	int i;
	int j;

	veLocal_94 = func_104(0);

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_94, false))
	{
		veLocal_94 = VEHICLE::CREATE_VEHICLE(hLocal_86, uLocal_62, fLocal_71, true, true, false);
	
		for (i = 1; i <= 8; i = i + 1)
		{
			VEHICLE::SET_VEHICLE_EXTRA(veLocal_94, i, true);
		}
	
		if (iLocal_83 != -1)
			VEHICLE::SET_VEHICLE_EXTRA(veLocal_94, iLocal_83, false);
	}

	VEHICLE::SET_VEHICLE_IS_WANTED(veLocal_94, true);
	blLocal_100 = func_103(veLocal_94, false, false);

	if (iLocal_34 != 5 && iLocal_34 != 6)
	{
		if (iLocal_34 > 6)
		{
			ENTITY::SET_ENTITY_PROOFS(veLocal_94, false, false, false, false, true, false, false, false);
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "BAR_DELIVER_BOOZE_RATTLE_MASTER", veLocal_94, 0, false, 0);
		}
	
		_SHOW_SUBTITLE_CLEAR_EXISTING(sLocal_101, 7500, 1);
	}
	else
	{
		iLocal_88[0] = PED::CREATE_PED_INSIDE_VEHICLE(veLocal_94, PED_TYPE_MISSION, hLocal_84, -1, true, true);
		iLocal_88[1] = PED::CREATE_PED_INSIDE_VEHICLE(veLocal_94, PED_TYPE_MISSION, hLocal_84, 0, true, true);
		PED::ADD_RELATIONSHIP_GROUP("rghCriminal", &hLocal_117);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_117, joaat("PLAYER"));
	
		for (j = 0; j < iLocal_88; j = j + 1)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_88[j], true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_88[j], joaat("WEAPON_SAWNOFFSHOTGUN"), -1, false, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_88[j], hLocal_117);
		}
	
		TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_88[0], veLocal_94, 25f, 786599);
		_SHOW_SUBTITLE_CLEAR_EXISTING("PMDL_REC", 7500, 1);
	}

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		veLocal_96 = PLAYER::GET_PLAYERS_LAST_VEHICLE();

	iLocal_36 = 1;
	return;
}

Blip func_103(Vehicle veParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4FB2
{
	return func_11(veParam0, !bParam1, bParam2);
}

Vehicle func_104(int iParam0) // Position - 0x4FC5
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112519.f_222[iParam0], false))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_112519.f_222[iParam0], true, true);
		return Global_112519.f_222[iParam0];
	}

	return 0;
}

BOOL func_105() // Position - 0x4FFD
{
	if (ENTITY::DOES_ENTITY_EXIST(veLocal_94))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_94, false))
			if (!ENTITY::IS_ENTITY_AT_ENTITY(veLocal_94, PLAYER::PLAYER_PED_ID(), 300f, 300f, 300f, false, true, 0))
				return true;
		else
			return true;

	if (PED::IS_PED_INJURED(iLocal_88[0]))
		if (HUD::DOES_BLIP_EXIST(uLocal_97[0]))
			HUD::REMOVE_BLIP(&uLocal_97[0]);

	return false;
}

void func_106() // Position - 0x5065
{
	STREAMING::REQUEST_MODEL(hLocal_86);
	HUD::REQUEST_ADDITIONAL_TEXT("PMDL", 0);

	if (iLocal_34 >= 3 && iLocal_34 <= 4)
	{
		STREAMING::REQUEST_MODEL(hLocal_85);
		STREAMING::REQUEST_MODEL(hLocal_87);
	}
	else if (iLocal_34 == 5 || iLocal_34 == 6)
	{
		STREAMING::REQUEST_MODEL(hLocal_84);
	}

	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("benson"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("pony2"), true);

	if (STREAMING::HAS_MODEL_LOADED(hLocal_86) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		if (iLocal_34 >= 3 && iLocal_34 <= 4)
			if (STREAMING::HAS_MODEL_LOADED(hLocal_85) && STREAMING::HAS_MODEL_LOADED(hLocal_87))
				bLocal_73 = true;
		else if (iLocal_34 == 5 || iLocal_34 == 6)
			if (STREAMING::HAS_MODEL_LOADED(hLocal_84))
				bLocal_73 = true;
		else if (iLocal_34 > 6)
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Deliveries", false, -1))
				bLocal_73 = true;
		else
			bLocal_73 = true;

	return;
}

void func_107() // Position - 0x513F
{
	float distanceBetweenCoords;

	uLocal_62 = { func_109(func_111(), iLocal_34) };
	fLocal_71 = func_108(func_111(), iLocal_34);

	if (iLocal_34 > 6)
	{
		sLocal_101 = "PMDL_TRUCK";
		sLocal_102 = "PMDL_BTIM";
		sLocal_103 = "PMDL_BCKT";
		hLocal_86 = joaat("benson");
		iLocal_83 = 2;
	}

	if (func_111() == 10)
	{
		uLocal_65 = { -1161.2133f, -1567.0677f, 3.4234f };
		hLocal_86 = joaat("pony2");
	
		if (iLocal_34 == 0)
		{
			iLocal_80 = 2;
			iLocal_81 = 15;
			sLocal_102 = "PMDL_TIM";
		}
		else if (iLocal_34 == 1)
		{
			iLocal_80 = 1;
			iLocal_81 = 30;
			sLocal_102 = "PMDL_TIM";
		}
		else if (iLocal_34 == 2)
		{
			iLocal_80 = 1;
			iLocal_81 = 30;
			sLocal_102 = "PMDL_TIM";
		}
		else if (iLocal_34 == 3)
		{
			uLocal_68 = { -3121.2615f, 1152.92f, 19.4047f };
			fLocal_72 = 176.4887f;
			hLocal_87 = joaat("police4");
			hLocal_85 = joaat("S_M_Y_Cop_01");
		}
		else if (iLocal_34 == 4)
		{
			uLocal_68 = { 1543.1453f, 2184.3706f, 77.8114f };
			fLocal_72 = 45.3499f;
			hLocal_87 = joaat("police4");
			hLocal_85 = joaat("S_M_Y_Cop_01");
		}
		else if (iLocal_34 >= 5)
		{
			hLocal_84 = joaat("G_M_Y_SalvaGoon_02");
		}
	}
	else if (func_111() == 14)
	{
		uLocal_65 = { -2169.8284f, 4277.365f, 47.9568f };
		distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_62, uLocal_65, true);
		iLocal_81 = SYSTEM::ROUND(((distanceBetweenCoords / 16.5f) + 40f) / 2f);
	}
	else if (func_111() == 13)
	{
		uLocal_65 = { -323.356f, 6264.4307f, 30.4463f };
		distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_62, uLocal_65, true);
		iLocal_81 = SYSTEM::ROUND(((distanceBetweenCoords / 16.5f) + 40f) / 2f);
	}
	else if (func_111() == 12)
	{
		uLocal_65 = { 198.5282f, 342.2399f, 104.9566f };
		distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_62, uLocal_65, true);
		iLocal_81 = SYSTEM::ROUND(((distanceBetweenCoords / 16.5f) + 15f) / 2f);
	}
	else if (func_111() == 11)
	{
		uLocal_65 = { -560.0195f, 301.1481f, 82.1436f };
		distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_62, uLocal_65, true);
		iLocal_81 = SYSTEM::ROUND(((distanceBetweenCoords / 16.5f) + 15f) / 2f);
	}

	iLocal_79 = 0;
	bLocal_74 = true;
	return;
}

float func_108(int iParam0, int iParam1) // Position - 0x536D
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0.5801f;
			
				case 1:
					return 177.9306f;
			
				case 2:
					return 49.6978f;
			
				case 3:
					return 336.9449f;
			
				case 4:
					return 80.1639f;
			
				case 5:
					return 287.983f;
			
				case 6:
					return 46.7895f;
			}
			break;
	
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 7:
					return 273.1085f;
			
				case 8:
					return 256.7899f;
			
				case 9:
					return 180.9647f;
			
				case 10:
					return 126.4385f;
			
				case 11:
					return 123.4767f;
			
				case 12:
					return 226.219f;
			
				case 13:
					return 82.6097f;
			}
			break;
	}

	return 0f;
}

Vector3 func_109(int iParam0, int iParam1) // Position - 0x549D
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return -128.18756f, 1934.4951f, 194.90749f;
			
				case 1:
					return -179.8744f, 586.4468f, 196.6278f;
			
				case 2:
					return 1390.0889f, -605.923f, 73.3378f;
			
				case 3:
					return -3170.0483f, 1098.809f, 19.7817f;
			
				case 4:
					return 1581.2198f, 2194.629f, 78.1062f;
			
				case 5:
					return 1475.8333f, -113.5801f, 141.794f;
			
				case 6:
					return 1603.0708f, -1793.9147f, 89.0179f;
			}
			break;
	
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 7:
					return 642.2169f, 2774.892f, 40.985f;
			
				case 8:
					return -1916.1224f, 2060.3132f, 139.7363f;
			
				case 9:
					return 824.8992f, -1064.1921f, 26.9851f;
			
				case 10:
					return -669.6013f, -1198.6638f, 9.6125f;
			
				case 11:
					return -1465.5795f, -390.7494f, 37.5168f;
			
				case 12:
					return 797.7521f, -1793.0078f, 28.3164f;
			
				case 13:
					return 806.319f, -2017.4514f, 28.2215f;
			}
			break;
	}

	return func_110(iParam0);
}

Vector3 func_110(int iParam0) // Position - 0x565E
{
	switch (iParam0)
	{
		case 2:
			return 2147.3167f, 4795.2075f, 40.08961f;
	
		case 9:
			return 1524.3289f, -2108.269f, 75.7248f;
	
		case 10:
			return -1172.195f, -1577.427f, 3.38152f;
	
		case 1:
			return 898.3718f, -177.07635f, 72.68348f;
	
		case 4:
			return 1191.3021f, 2672.064f, 36.73154f;
	
		case 3:
			return -1584.333f, 5193.4873f, 2.95912f;
	
		case 0:
			return 408.34286f, -1623.8357f, 28.29278f;
	
		case 8:
			return -1339.4886f, -21.19435f, 50.34566f;
	
		case 5:
			return 336.20697f, 172.42506f, 102.20552f;
	
		case 6:
			return 394.54953f, -703.37946f, 28.27281f;
	
		case 7:
			return -1413.1844f, -206.05553f, 46.29474f;
	
		case 11:
			return -560.38086f, 274.54758f, 82.02014f;
	
		case 12:
			return 221.08446f, 340.78488f, 104.58835f;
	
		case 13:
			return -296.71542f, 6259.7324f, 30.49339f;
	
		case 14:
			return -2201.4016f, 4291f, 47.32429f;
	}

	return 10f, 10f, 10f;
}

int func_111() // Position - 0x5811
{
	return Global_112519.f_20;
}

int func_112() // Position - 0x581F
{
	return func_113(Global_112519.f_20, Global_112519.f_29);
}

int func_113(int iParam0, int iParam1) // Position - 0x5837
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 1;
			
				case 2:
					return 2;
			
				case 3:
					return 3;
			
				case 4:
					return 4;
			
				case 5:
					return 5;
			
				case 6:
					return 6;
			}
			break;
	
		case 11:
		case 12:
			switch (iParam1)
			{
				case 0:
					return 9;
			
				case 1:
					return 10;
			
				case 2:
					return 11;
			
				case 3:
					return 12;
			
				case 4:
					return 13;
			}
			break;
	
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return 8;
			
				case 1:
					return 7;
			}
			break;
	}

	return 0;
}

void func_114() // Position - 0x593F
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("benson"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("pony2"), false);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();

	if (bLocal_75)
	{
		if (!ENTITY::IS_ENTITY_DEAD(veLocal_96, false))
			func_115(veLocal_96, 0, 145);
	
		PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
		func_100(&uLocal_104, 0, false);
	}

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

int func_115(Vehicle veParam0, int iParam1, int iParam2) // Position - 0x598D
{
	var script;
	const char* entityScript;

	if (iParam1 == 0)
	{
		entityScript = ENTITY::GET_ENTITY_SCRIPT(veParam0, &script);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(entityScript))
			if (MISC::GET_HASH_KEY(entityScript) == MISC::GET_HASH_KEY("vehicle_gen_controller"))
				return 0;
	}

	func_116(veParam0, iParam2);
	return 1;
}

void func_116(Vehicle veParam0, int iParam1) // Position - 0x59CD
{
	Ped pedInVehicleSeat;
	int i;
	int j;

	if (!func_122(veParam0))
		return;

	if (iParam1 != 0 && iParam1 != 1 && iParam1 != 2)
	{
		pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, -1, false);
	
		if (!ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat))
			pedInVehicleSeat = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(veParam0, -1);
	
		if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat))
			if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == joaat("Player_Zero"))
				iParam1 = 0;
			else if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == joaat("Player_One"))
				iParam1 = 1;
			else if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == joaat("Player_Two"))
				iParam1 = 2;
	
		if (iParam1 != 0 && iParam1 != 1 && iParam1 != 2)
			iParam1 = Global_113810.f_2366.f_539.f_4321;
	}

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 2; j = j + 1)
		{
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == Global_113810.f_32752.f_5038[i][j].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113810.f_32752.f_5038[i][j].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), &(Global_113810.f_32752.f_5038[i][j].f_1)))
					{
						Global_113810.f_32752.f_5038[i][j].f_66 = 0;
						Global_113810.f_32752.f_5592[i] = j;
					}
				}
			}
		}
	}

	for (i = 0; i < 3; i = i + 1)
	{
		if (ENTITY::GET_ENTITY_MODEL(veParam0) == Global_113810.f_32752.f_5600[i].f_66)
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113810.f_32752.f_5600[i].f_1)))
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), &(Global_113810.f_32752.f_5600[i].f_1)))
					Global_113810.f_32752.f_5600[i].f_66 = 0;
	}

	Global_113810.f_32752.f_5590 = iParam1;
	Global_78384 = veParam0;
	Global_113810.f_32752.f_5588 = 1;
	func_117(veParam0, &(Global_113810.f_32752.f_5510));
	return;
}

void func_117(Vehicle veParam0, var uParam1) // Position - 0x5BCF
{
	int i;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		func_121(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(veParam0);
		TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(veParam0);
		VEHICLE::GET_VEHICLE_COLOURS(veParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(veParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(veParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(veParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(veParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(veParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(veParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(veParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::GET_VEHICLE_NEON_COLOUR(veParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 2))
			MISC::SET_BIT(&(uParam1->f_77), 28);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 3))
			MISC::SET_BIT(&(uParam1->f_77), 29);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 0))
			MISC::SET_BIT(&(uParam1->f_77), 30);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 1))
			MISC::SET_BIT(&(uParam1->f_77), 31);
	
		if (uParam1->f_65 == -1 && !func_120(uParam1->f_66))
			uParam1->f_65 = 0;
	
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(veParam0, false))
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(veParam0);
	
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(veParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(veParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
				
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
				
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
	
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 9);
	
		if (VEHICLE::IS_VEHICLE_STOLEN(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 10);
	
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(veParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
	
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 12);
	
		func_119(&veParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		for (i = 0; i <= 11; i = i + 1)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, i + 1))
				MISC::SET_BIT(&(uParam1->f_77), func_118(i + 1));
		}
	
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(veParam0, 0))
			MISC::SET_BIT(&(uParam1->f_77), 11);
		else
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
	
		if (DECORATOR::DECOR_EXIST_ON(veParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(veParam0, "IgnoredByQuickSave"))
			MISC::SET_BIT(&(uParam1->f_77), 27);
		else
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
	}

	return;
}

int func_118(int iParam0) // Position - 0x5E7A
{
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
			return 24;
	
		case 11:
			return 25;
	
		case 12:
			return 26;
	}

	return 0;
}

int func_119(var uParam0, var uParam1, var uParam2) // Position - 0x5F2A
{
	int i;
	int modType;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
		return 0;

	if (VEHICLE::GET_NUM_MOD_KITS(*uParam0) == 0)
		return 0;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		modType = i;
	
		if (modType == 17 || modType == 18 || modType == 19 || modType == 20 || modType == 21)
		{
			uParam1->[i] = 0;
		
			if (VEHICLE::IS_TOGGLE_MOD_ON(*uParam0, modType))
				uParam1->[i] = 1;
		}
		else if (modType == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*uParam0, modType))
			{
				switch (VEHICLE::GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0))
				{
					case 255:
						uParam1->[i] = 1;
						break;
				
					case 0:
						uParam1->[i] = 2;
						break;
				
					case 1:
						uParam1->[i] = 3;
						break;
				
					case 2:
						uParam1->[i] = 4;
						break;
				
					case 3:
						uParam1->[i] = 5;
						break;
				
					case 4:
						uParam1->[i] = 6;
						break;
				
					case 5:
						uParam1->[i] = 7;
						break;
				
					case 6:
						uParam1->[i] = 8;
						break;
				
					case 7:
						uParam1->[i] = 9;
						break;
				
					case 8:
						uParam1->[i] = 10;
						break;
				
					case 9:
						uParam1->[i] = 11;
						break;
				
					case 10:
						uParam1->[i] = 12;
						break;
				
					case 11:
						uParam1->[i] = 13;
						break;
				
					case 12:
						uParam1->[i] = 14;
						break;
				
					case 13:
						uParam1->[i] = 15;
						break;
				}
			}
			else
			{
				uParam1->[i] = 0;
			}
		}
		else
		{
			uParam1->[i] = VEHICLE::GET_VEHICLE_MOD(*uParam0, i) + 1;
		
			if (i == 23)
				uParam2->[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, i);
			else if (i == 24)
				uParam2->[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, i);
		}
	}

	return 1;
}

BOOL func_120(int iParam0) // Position - 0x611D
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return true;
	
		default:
		
	}

	return false;
}

void func_121(var uParam0) // Position - 0x613D
{
	int i;

	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;

	for (i = 0; i < 49; i = i + 1)
	{
		uParam0->f_9[i] = 0;
	}

	for (i = 0; i < 2; i = i + 1)
	{
		uParam0->f_59[i] = 0;
	}

	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	return;
}

BOOL func_122(Vehicle veParam0) // Position - 0x61ED
{
	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) || func_141(veParam0, 0, false) || func_141(veParam0, 1, false) || func_141(veParam0, 2, false) || func_140(veParam0) != 145 || func_139(veParam0) || func_138(veParam0) || func_137(veParam0) || func_136(veParam0) || !func_123(ENTITY::GET_ENTITY_MODEL(veParam0)))
	{
		func_138(veParam0);
		func_138(veParam0);
		func_141(veParam0, 0, false);
		func_141(veParam0, 1, false);
		func_141(veParam0, 2, false);
		func_140(veParam0) != 145;
		return false;
	}

	return true;
}

BOOL func_123(Hash hParam0) // Position - 0x62CA
{
	if (hParam0 == 0)
		return false;

	if (!func_124(hParam0, false, -1))
		return false;

	if (VEHICLE::IS_THIS_MODEL_A_BOAT(hParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(hParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(hParam0) || VEHICLE::IS_THIS_MODEL_A_TRAIN(hParam0))
		return false;

	switch (hParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return false;
	}

	return true;
}

BOOL func_124(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x647C
{
	int i;
	Hash outData;

	if (hParam0 == 0)
		return false;

	if (!STREAMING::IS_MODEL_A_VEHICLE(hParam0))
		return false;

	if (hParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == joaat("blimp2") || hParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;
	}
	else
	{
		for (i = 0; i < FILES::GET_NUM_DLC_VEHICLES(); i = i + 1)
		{
			if (FILES::GET_DLC_VEHICLE_DATA(i, &outData))
				if (hParam0 == outData.f_1)
					if (FILES::IS_CONTENT_ITEM_LOCKED(outData))
						return false;
		}
	}

	if (hParam0 == joaat("blimp"))
		if (!func_134() && !func_133() && !func_132() && !func_131() && !_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	if (hParam0 == joaat("hotknife") || hParam0 == joaat("carbonrs") || hParam0 == joaat("khamelion"))
	{
		if (IS_XBOX_PLATFORM() || MISC::IS_PC_VERSION() || IS_PLAYSTATION_PLATFORM())
		{
		}
		else if (!func_132())
		{
			return false;
		}
	}

	if (bParam1)
		if (!func_127(hParam0, iParam2))
			return false;

	if (!func_125(hParam0))
		return false;

	return true;
}

BOOL func_125(Hash hParam0) // Position - 0x65FE
{
	int num;
	var unk;
	var name;

	if (!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
		return true;

	NETSHOPPING::NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(&num, &unk);

	if (num == 4)
		return true;

	switch (hParam0)
	{
		case joaat("dune4"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_DUNE4_t0_v3", 64);
			break;
	
		case joaat("voltic2"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_VOLTIC2_t0_v3", 64);
			break;
	
		case joaat("ruiner2"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_RUINER2_t0_v3", 64);
			break;
	
		case joaat("phantom2"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_PHANTOM2_t0_v3", 64);
			break;
	
		case joaat("technical2"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_TECHNICAL2_t0_v3", 64);
			break;
	
		case joaat("boxville5"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_BOXVILLE5_t0_v3", 64);
			break;
	
		case joaat("wastelander"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_WASTELANDER_t0_v3", 64);
			break;
	
		case joaat("blazer5"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_BLAZER5_t0_v3", 64);
			break;
	
		default:
			return true;
	}

	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&name))
		return false;

	return true;
}

BOOL _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM() // Position - 0x66CA
{
	if (MISC::IS_PC_VERSION())
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();

	return false;
}

BOOL func_127(Hash hParam0, int iParam1) // Position - 0x66E1
{
	BOOL num;
	int cloudTimeAsInt;

	if (!Global_2764417 && iParam1 >= 0 && iParam1 <= 415)
		if (IS_BIT_SET(Global_1586488[iParam1].f_103, 2))
			return true;

	if (Global_2764416)
		return true;

	num = 1;
	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (hParam0 == joaat("btype3"))
		if (!Global_262145.f_7142 && !Global_262145.f_13570 && cloudTimeAsInt < Global_262145.f_13571)
			num = 0;

	if (hParam0 == joaat("faction3"))
		if (!Global_262145.f_14912 && cloudTimeAsInt < Global_262145.f_14924)
			num = 0;
	else if (hParam0 == joaat("virgo3") || hParam0 == joaat("virgo2"))
		if (!Global_262145.f_14908 && cloudTimeAsInt < Global_262145.f_14920)
			num = 0;
	else if (hParam0 == joaat("sabregt2"))
		if (!Global_262145.f_14909 && cloudTimeAsInt < Global_262145.f_14921)
			num = 0;
	else if (hParam0 == joaat("tornado5"))
		if (!Global_262145.f_14910 && cloudTimeAsInt < Global_262145.f_14922)
			num = 0;
	else if (hParam0 == joaat("minivan2"))
		if (!Global_262145.f_14911 && cloudTimeAsInt < Global_262145.f_14923)
			num = 0;
	else if (hParam0 == joaat("slamvan3"))
		if (!Global_262145.f_14913 && cloudTimeAsInt < Global_262145.f_14925)
			num = 0;

	if (hParam0 == joaat("prototipo"))
		if (!Global_262145.f_14914 && cloudTimeAsInt < Global_262145.f_14917)
			num = 0;
	else if (hParam0 == joaat("seven70"))
		if (!Global_262145.f_14915 && cloudTimeAsInt < Global_262145.f_14918)
			num = 0;
	else if (hParam0 == joaat("pfister811"))
		if (!Global_262145.f_14916 && cloudTimeAsInt < Global_262145.f_14919)
			num = 0;

	if (hParam0 == joaat("bf400"))
		if (!Global_262145.f_17493 && cloudTimeAsInt < Global_262145.f_17458)
			num = 0;
	else if (hParam0 == joaat("brioso"))
		if (!Global_262145.f_17488 && cloudTimeAsInt < Global_262145.f_17453)
			num = 0;
	else if (hParam0 == joaat("cliffhanger"))
		if (!Global_262145.f_17492 && cloudTimeAsInt < Global_262145.f_17457)
			num = 0;
	else if (hParam0 == joaat("contender"))
		if (!Global_262145.f_17491 && cloudTimeAsInt < Global_262145.f_17456)
			num = 0;
	else if (hParam0 == joaat("le7b"))
		if (!Global_262145.f_17485 && cloudTimeAsInt < Global_262145.f_17450)
			num = 0;
	else if (hParam0 == joaat("omnis"))
		if (!Global_262145.f_17486 && cloudTimeAsInt < Global_262145.f_17451)
			num = 0;
	else if (hParam0 == joaat("trophytruck"))
		if (!Global_262145.f_17489 && cloudTimeAsInt < Global_262145.f_17454)
			num = 0;
	else if (hParam0 == joaat("trophytruck2"))
		if (!Global_262145.f_17490 && cloudTimeAsInt < Global_262145.f_17455)
			num = 0;
	else if (hParam0 == joaat("tropos"))
		if (!Global_262145.f_17487 && cloudTimeAsInt < Global_262145.f_17452)
			num = 0;
	else if (hParam0 == joaat("gargoyle"))
		if (!Global_262145.f_17495 && cloudTimeAsInt < Global_262145.f_17460)
			num = 0;
	else if (hParam0 == joaat("rallytruck"))
		if (!Global_262145.f_17496 && cloudTimeAsInt < Global_262145.f_17461)
			num = 0;
	else if (hParam0 == joaat("tampa2"))
		if (!Global_262145.f_17484 && cloudTimeAsInt < Global_262145.f_17449)
			num = 0;
	else if (hParam0 == joaat("tyrus"))
		if (!Global_262145.f_17483 && cloudTimeAsInt < Global_262145.f_17448)
			num = 0;
	else if (hParam0 == joaat("sheava"))
		if (!Global_262145.f_17482 && cloudTimeAsInt < Global_262145.f_17447)
			num = 0;
	else if (hParam0 == joaat("lynx"))
		if (!Global_262145.f_17494 && cloudTimeAsInt < Global_262145.f_17459)
			num = 0;
	else if (hParam0 == joaat("stalion2"))
		if (!Global_262145.f_17497 && cloudTimeAsInt < Global_262145.f_17462)
			num = 0;
	else if (hParam0 == joaat("gauntlet2"))
		if (!Global_262145.f_17498 && cloudTimeAsInt < Global_262145.f_17463)
			num = 0;
	else if (hParam0 == joaat("dominator2"))
		if (!Global_262145.f_17499 && cloudTimeAsInt < Global_262145.f_17464)
			num = 0;
	else if (hParam0 == joaat("buffalo3"))
		if (!Global_262145.f_17500 && cloudTimeAsInt < Global_262145.f_17465)
			num = 0;

	if (hParam0 == joaat("defiler"))
		if (!Global_262145.f_17654 && cloudTimeAsInt < Global_262145.f_17676)
			num = 0;
	else if (hParam0 == joaat("nightblade"))
		if (!Global_262145.f_17655 && cloudTimeAsInt < Global_262145.f_17677)
			num = 0;
	else if (hParam0 == joaat("zombiea"))
		if (!Global_262145.f_17656 && cloudTimeAsInt < Global_262145.f_17678)
			num = 0;
	else if (hParam0 == joaat("esskey"))
		if (!Global_262145.f_17657 && cloudTimeAsInt < Global_262145.f_17679)
			num = 0;
	else if (hParam0 == joaat("avarus"))
		if (!Global_262145.f_17658 && cloudTimeAsInt < Global_262145.f_17680)
			num = 0;
	else if (hParam0 == joaat("zombieb"))
		if (!Global_262145.f_17659 && cloudTimeAsInt < Global_262145.f_17681)
			num = 0;
	else if (hParam0 == joaat("hakuchou2"))
		if (!Global_262145.f_17661 && cloudTimeAsInt < Global_262145.f_17682)
			num = 0;
	else if (hParam0 == joaat("vortex"))
		if (!Global_262145.f_17662 && cloudTimeAsInt < Global_262145.f_17683)
			num = 0;
	else if (hParam0 == joaat("shotaro"))
		if (!Global_262145.f_17663 && cloudTimeAsInt < Global_262145.f_17684)
			num = 0;
	else if (hParam0 == joaat("chimera"))
		if (!Global_262145.f_17664 && cloudTimeAsInt < Global_262145.f_17685)
			num = 0;
	else if (hParam0 == joaat("raptor"))
		if (!Global_262145.f_17665 && cloudTimeAsInt < Global_262145.f_17686)
			num = 0;
	else if (hParam0 == joaat("daemon2"))
		if (!Global_262145.f_17666 && cloudTimeAsInt < Global_262145.f_17687)
			num = 0;
	else if (hParam0 == joaat("blazer4"))
		if (!Global_262145.f_17667 && cloudTimeAsInt < Global_262145.f_17688)
			num = 0;
	else if (hParam0 == joaat("tornado6"))
		if (!Global_262145.f_17673 && cloudTimeAsInt < Global_262145.f_17695)
			num = 0;
	else if (hParam0 == joaat("youga2"))
		if (!Global_262145.f_17670 && cloudTimeAsInt < Global_262145.f_17691)
			num = 0;
	else if (hParam0 == joaat("wolfsbane"))
		if (!Global_262145.f_17671 && cloudTimeAsInt < Global_262145.f_17692)
			num = 0;
	else if (hParam0 == joaat("faggio3"))
		if (!Global_262145.f_17672 && cloudTimeAsInt < Global_262145.f_17693)
			num = 0;
	else if (hParam0 == joaat("faggio"))
		if (!Global_262145.f_17660 && cloudTimeAsInt < Global_262145.f_17694)
			num = 0;
	else if (hParam0 == joaat("bagger"))
		if (!Global_262145.f_17674 && cloudTimeAsInt < Global_262145.f_17696)
			num = 0;
	else if (hParam0 == joaat("sanctus"))
		if (!Global_262145.f_17668 && cloudTimeAsInt < Global_262145.f_17689)
			num = 0;
	else if (hParam0 == joaat("manchez"))
		if (!Global_262145.f_17669 && cloudTimeAsInt < Global_262145.f_17690)
			num = 0;
	else if (hParam0 == joaat("ratbike"))
		if (!Global_262145.f_17675 && cloudTimeAsInt < Global_262145.f_17697)
			num = 0;

	if (hParam0 == joaat("voltic2"))
		if (!Global_262145.f_19311 && cloudTimeAsInt < Global_262145.f_19408)
			num = 0;
	else if (hParam0 == joaat("ruiner2"))
		if (!Global_262145.f_19312 && cloudTimeAsInt < Global_262145.f_19409)
			num = 0;
	else if (hParam0 == joaat("dune4"))
		if (!Global_262145.f_19313 && cloudTimeAsInt < Global_262145.f_19410)
			num = 0;
	else if (hParam0 == joaat("dune5"))
		if (!Global_262145.f_19314 && cloudTimeAsInt < Global_262145.f_19411)
			num = 0;
	else if (hParam0 == joaat("phantom2"))
		if (!Global_262145.f_19315 && cloudTimeAsInt < Global_262145.f_19412)
			num = 0;
	else if (hParam0 == joaat("technical2"))
		if (!Global_262145.f_19316 && cloudTimeAsInt < Global_262145.f_19413)
			num = 0;
	else if (hParam0 == joaat("boxville5"))
		if (!Global_262145.f_19317 && cloudTimeAsInt < Global_262145.f_19414)
			num = 0;
	else if (hParam0 == joaat("wastelander"))
		if (!Global_262145.f_19318 && cloudTimeAsInt < Global_262145.f_19415)
			num = 0;
	else if (hParam0 == joaat("blazer5"))
		if (!Global_262145.f_19319 && cloudTimeAsInt < Global_262145.f_19416)
			num = 0;
	else if (hParam0 == joaat("comet2"))
		if (!Global_262145.f_19320 && cloudTimeAsInt < Global_262145.f_19417)
			num = 0;
	else if (hParam0 == joaat("comet3"))
		if (!Global_262145.f_19321 && cloudTimeAsInt < Global_262145.f_19418)
			num = 0;
	else if (hParam0 == joaat("diablous"))
		if (!Global_262145.f_19322 && cloudTimeAsInt < Global_262145.f_19419)
			num = 0;
	else if (hParam0 == joaat("diablous2"))
		if (!Global_262145.f_19323 && cloudTimeAsInt < Global_262145.f_19420)
			num = 0;
	else if (hParam0 == joaat("elegy"))
		if (!Global_262145.f_19324 && cloudTimeAsInt < Global_262145.f_19421)
			num = 0;
	else if (hParam0 == joaat("elegy2"))
		if (!Global_262145.f_19325 && cloudTimeAsInt < Global_262145.f_19422)
			num = 0;
	else if (hParam0 == joaat("fcr"))
		if (!Global_262145.f_19326 && cloudTimeAsInt < Global_262145.f_19423)
			num = 0;
	else if (hParam0 == joaat("fcr2"))
		if (!Global_262145.f_19327 && cloudTimeAsInt < Global_262145.f_19424)
			num = 0;
	else if (hParam0 == joaat("italigtb"))
		if (!Global_262145.f_19328 && cloudTimeAsInt < Global_262145.f_19425)
			num = 0;
	else if (hParam0 == joaat("italigtb2"))
		if (!Global_262145.f_19329 && cloudTimeAsInt < Global_262145.f_19426)
			num = 0;
	else if (hParam0 == joaat("nero"))
		if (!Global_262145.f_19330 && cloudTimeAsInt < Global_262145.f_19427)
			num = 0;
	else if (hParam0 == joaat("nero2"))
		if (!Global_262145.f_19331 && cloudTimeAsInt < Global_262145.f_19428)
			num = 0;
	else if (hParam0 == joaat("penetrator"))
		if (!Global_262145.f_19332 && cloudTimeAsInt < Global_262145.f_19429)
			num = 0;
	else if (hParam0 == joaat("specter"))
		if (!Global_262145.f_19333 && cloudTimeAsInt < Global_262145.f_19430)
			num = 0;
	else if (hParam0 == joaat("specter2"))
		if (!Global_262145.f_19334 && cloudTimeAsInt < Global_262145.f_19431)
			num = 0;
	else if (hParam0 == joaat("tempesta"))
		if (!Global_262145.f_19335 && cloudTimeAsInt < Global_262145.f_19432)
			num = 0;

	if (hParam0 == joaat("gp1"))
		if (!Global_262145.f_20392 && cloudTimeAsInt < Global_262145.f_20388)
			num = 0;
	else if (hParam0 == joaat("infernus2"))
		if (!Global_262145.f_20393 && cloudTimeAsInt < Global_262145.f_20389)
			num = 0;
	else if (hParam0 == joaat("ruston"))
		if (!Global_262145.f_20394 && cloudTimeAsInt < Global_262145.f_20390)
			num = 0;
	else if (hParam0 == joaat("turismo2"))
		if (!Global_262145.f_20395 && cloudTimeAsInt < Global_262145.f_20391)
			num = 0;

	if (hParam0 == joaat("xa21"))
		if (!Global_262145.f_21274 && cloudTimeAsInt < Global_262145.f_21282)
			num = 0;
	else if (hParam0 == joaat("cheetah2"))
		if (!Global_262145.f_21275 && cloudTimeAsInt < Global_262145.f_21283)
			num = 0;
	else if (hParam0 == joaat("torero"))
		if (!Global_262145.f_21276 && cloudTimeAsInt < Global_262145.f_21284)
			num = 0;
	else if (hParam0 == joaat("vagner"))
		if (!Global_262145.f_21277 && cloudTimeAsInt < Global_262145.f_21285)
			num = 0;
	else if (hParam0 == joaat("ardent"))
		if (!Global_262145.f_21278 && cloudTimeAsInt < Global_262145.f_21286)
			num = 0;
	else if (hParam0 == joaat("nightshark"))
		if (!Global_262145.f_21279 && cloudTimeAsInt < Global_262145.f_21287)
			num = 0;

	if (hParam0 == joaat("microlight"))
		if (!Global_262145.f_22073 && cloudTimeAsInt < Global_262145.f_22093)
			num = 0;
	else if (hParam0 == joaat("mogul"))
		if (!Global_262145.f_22085 && cloudTimeAsInt < Global_262145.f_22105)
			num = 0;
	else if (hParam0 == joaat("rogue"))
		if (!Global_262145.f_22076 && cloudTimeAsInt < Global_262145.f_22096)
			num = 0;
	else if (hParam0 == joaat("starling"))
		if (!Global_262145.f_22086 && cloudTimeAsInt < Global_262145.f_22106)
			num = 0;
	else if (hParam0 == joaat("seabreeze"))
		if (!Global_262145.f_22074 && cloudTimeAsInt < Global_262145.f_22094)
			num = 0;
	else if (hParam0 == joaat("tula"))
		if (!Global_262145.f_22090 && cloudTimeAsInt < Global_262145.f_22110)
			num = 0;
	else if (hParam0 == joaat("pyro"))
		if (!Global_262145.f_22088 && cloudTimeAsInt < Global_262145.f_22108)
			num = 0;
	else if (hParam0 == joaat("molotok"))
		if (!Global_262145.f_22089 && cloudTimeAsInt < Global_262145.f_22109)
			num = 0;
	else if (hParam0 == joaat("nokota"))
		if (!Global_262145.f_22084 && cloudTimeAsInt < Global_262145.f_22104)
			num = 0;
	else if (hParam0 == joaat("bombushka"))
		if (!Global_262145.f_22091 && cloudTimeAsInt < Global_262145.f_22111)
			num = 0;
	else if (hParam0 == joaat("hunter"))
		if (!Global_262145.f_22087 && cloudTimeAsInt < Global_262145.f_22107)
			num = 0;
	else if (hParam0 == joaat("havok"))
		if (!Global_262145.f_22083 && cloudTimeAsInt < Global_262145.f_22103)
			num = 0;
	else if (hParam0 == joaat("howard"))
		if (!Global_262145.f_22075 && cloudTimeAsInt < Global_262145.f_22095)
			num = 0;
	else if (hParam0 == joaat("alphaz1"))
		if (!Global_262145.f_22077 && cloudTimeAsInt < Global_262145.f_22097)
			num = 0;
	else if (hParam0 == joaat("cyclone"))
		if (!Global_262145.f_22078 && cloudTimeAsInt < Global_262145.f_22098)
			num = 0;
	else if (hParam0 == joaat("visione"))
		if (!Global_262145.f_22079 && cloudTimeAsInt < Global_262145.f_22099)
			num = 0;
	else if (hParam0 == joaat("vigilante"))
		if (!Global_262145.f_22080 && cloudTimeAsInt < Global_262145.f_22100)
			num = 0;
	else if (hParam0 == joaat("retinue"))
		if (!Global_262145.f_22081 && cloudTimeAsInt < Global_262145.f_22101)
			num = 0;
	else if (hParam0 == joaat("rapidgt3"))
		if (!Global_262145.f_22082 && cloudTimeAsInt < Global_262145.f_22102)
			num = 0;

	if (hParam0 == joaat("deluxo"))
		if (!Global_262145.f_23041 && cloudTimeAsInt < Global_262145.f_23069)
			num = 0;
	else if (hParam0 == joaat("stromberg"))
		if (!Global_262145.f_23042 && cloudTimeAsInt < Global_262145.f_23070)
			num = 0;
	else if (hParam0 == joaat("riot2"))
		if (!Global_262145.f_23043 && cloudTimeAsInt < Global_262145.f_23071)
			num = 0;
	else if (hParam0 == joaat("chernobog"))
		if (!Global_262145.f_23044 && cloudTimeAsInt < Global_262145.f_23072)
			num = 0;
	else if (hParam0 == joaat("khanjali"))
		if (!Global_262145.f_23045 && cloudTimeAsInt < Global_262145.f_23073)
			num = 0;
	else if (hParam0 == joaat("akula"))
		if (!Global_262145.f_23046 && cloudTimeAsInt < Global_262145.f_23074)
			num = 0;
	else if (hParam0 == joaat("thruster"))
		if (!Global_262145.f_23047 && cloudTimeAsInt < Global_262145.f_23075)
			num = 0;
	else if (hParam0 == joaat("barrage"))
		if (!Global_262145.f_23048 && cloudTimeAsInt < Global_262145.f_23076)
			num = 0;
	else if (hParam0 == joaat("volatol"))
		if (!Global_262145.f_23049 && cloudTimeAsInt < Global_262145.f_23077)
			num = 0;
	else if (hParam0 == joaat("comet4"))
		if (!Global_262145.f_23050 && cloudTimeAsInt < Global_262145.f_23078)
			num = 0;
	else if (hParam0 == joaat("neon"))
		if (!Global_262145.f_23051 && cloudTimeAsInt < Global_262145.f_23079)
			num = 0;
	else if (hParam0 == joaat("streiter"))
		if (!Global_262145.f_23052 && cloudTimeAsInt < Global_262145.f_23080)
			num = 0;
	else if (hParam0 == joaat("sentinel3"))
		if (!Global_262145.f_23053 && cloudTimeAsInt < Global_262145.f_23081)
			num = 0;
	else if (hParam0 == joaat("yosemite"))
		if (!Global_262145.f_23054 && cloudTimeAsInt < Global_262145.f_23082)
			num = 0;
	else if (hParam0 == joaat("sc1"))
		if (!Global_262145.f_23055 && cloudTimeAsInt < Global_262145.f_23083)
			num = 0;
	else if (hParam0 == joaat("autarch"))
		if (!Global_262145.f_23056 && cloudTimeAsInt < Global_262145.f_23084)
			num = 0;
	else if (hParam0 == joaat("gt500"))
		if (!Global_262145.f_23057 && cloudTimeAsInt < Global_262145.f_23085)
			num = 0;
	else if (hParam0 == joaat("hustler"))
		if (!Global_262145.f_23058 && cloudTimeAsInt < Global_262145.f_23086)
			num = 0;
	else if (hParam0 == joaat("revolter"))
		if (!Global_262145.f_23059 && cloudTimeAsInt < Global_262145.f_23087)
			num = 0;
	else if (hParam0 == joaat("pariah"))
		if (!Global_262145.f_23060 && cloudTimeAsInt < Global_262145.f_23088)
			num = 0;
	else if (hParam0 == joaat("raiden"))
		if (!Global_262145.f_23061 && cloudTimeAsInt < Global_262145.f_23089)
			num = 0;
	else if (hParam0 == joaat("savestra"))
		if (!Global_262145.f_23062 && cloudTimeAsInt < Global_262145.f_23090)
			num = 0;
	else if (hParam0 == joaat("riata"))
		if (!Global_262145.f_23063 && cloudTimeAsInt < Global_262145.f_23091)
			num = 0;
	else if (hParam0 == joaat("hermes"))
		if (!Global_262145.f_23064 && cloudTimeAsInt < Global_262145.f_23092)
			num = 0;
	else if (hParam0 == joaat("comet5"))
		if (!Global_262145.f_23065 && cloudTimeAsInt < Global_262145.f_23093)
			num = 0;
	else if (hParam0 == joaat("z190"))
		if (!Global_262145.f_23066 && cloudTimeAsInt < Global_262145.f_23094)
			num = 0;
	else if (hParam0 == joaat("viseris"))
		if (!Global_262145.f_23067 && cloudTimeAsInt < Global_262145.f_23095)
			num = 0;
	else if (hParam0 == joaat("kamacho"))
		if (!Global_262145.f_23068 && cloudTimeAsInt < Global_262145.f_23096)
			num = 0;

	if (hParam0 == joaat("gb200"))
		if (!Global_262145.f_24263 && cloudTimeAsInt < Global_262145.f_24279)
			num = 0;
	else if (hParam0 == joaat("fagaloa"))
		if (!Global_262145.f_24264 && cloudTimeAsInt < Global_262145.f_24280)
			num = 0;
	else if (hParam0 == joaat("ellie"))
		if (!Global_262145.f_24268 && cloudTimeAsInt < Global_262145.f_24284)
			num = 0;
	else if (hParam0 == joaat("issi3"))
		if (!Global_262145.f_24271 && cloudTimeAsInt < Global_262145.f_24287)
			num = 0;
	else if (hParam0 == joaat("michelli"))
		if (!Global_262145.f_24276 && cloudTimeAsInt < Global_262145.f_24292)
			num = 0;
	else if (hParam0 == joaat("flashgt"))
		if (!Global_262145.f_24270 && cloudTimeAsInt < Global_262145.f_24286)
			num = 0;
	else if (hParam0 == joaat("hotring"))
		if (!Global_262145.f_24262 && cloudTimeAsInt < Global_262145.f_24278)
			num = 0;
	else if (hParam0 == joaat("tezeract"))
		if (!Global_262145.f_24269 && cloudTimeAsInt < Global_262145.f_24285)
			num = 0;
	else if (hParam0 == joaat("tyrant"))
		if (!Global_262145.f_24275 && cloudTimeAsInt < Global_262145.f_24291)
			num = 0;
	else if (hParam0 == joaat("dominator3"))
		if (!Global_262145.f_24274 && cloudTimeAsInt < Global_262145.f_24290)
			num = 0;
	else if (hParam0 == joaat("taipan"))
		if (!Global_262145.f_24265 && cloudTimeAsInt < Global_262145.f_24281)
			num = 0;
	else if (hParam0 == joaat("entity2"))
		if (!Global_262145.f_24267 && cloudTimeAsInt < Global_262145.f_24283)
			num = 0;
	else if (hParam0 == joaat("jester3"))
		if (!Global_262145.f_24277 && cloudTimeAsInt < Global_262145.f_24293)
			num = 0;
	else if (hParam0 == joaat("cheburek"))
		if (!Global_262145.f_24273 && cloudTimeAsInt < Global_262145.f_24289)
			num = 0;
	else if (hParam0 == joaat("caracara"))
		if (!Global_262145.f_24266 && cloudTimeAsInt < Global_262145.f_24282)
			num = 0;
	else if (hParam0 == joaat("seasparrow"))
		if (!Global_262145.f_24272 && cloudTimeAsInt < Global_262145.f_24288)
			num = 0;

	if (hParam0 == joaat("terbyte"))
		if (!Global_262145.f_24353 && cloudTimeAsInt < Global_262145.f_24340)
			num = 0;
	else if (hParam0 == joaat("pbus2"))
		if (!Global_262145.f_24354 && cloudTimeAsInt < Global_262145.f_24341)
			num = 0;
	else if (hParam0 == joaat("mule4"))
		if (!Global_262145.f_24359 && cloudTimeAsInt < Global_262145.f_24346)
			num = 0;
	else if (hParam0 == joaat("pounder2"))
		if (!Global_262145.f_24358 && cloudTimeAsInt < Global_262145.f_24345)
			num = 0;
	else if (hParam0 == joaat("swinger"))
		if (!Global_262145.f_24356 && cloudTimeAsInt < Global_262145.f_24343)
			num = 0;
	else if (hParam0 == joaat("menacer"))
		if (!Global_262145.f_24362 && cloudTimeAsInt < Global_262145.f_24349)
			num = 0;
	else if (hParam0 == joaat("scramjet"))
		if (!Global_262145.f_24364 && cloudTimeAsInt < Global_262145.f_24351)
			num = 0;
	else if (hParam0 == joaat("strikeforce"))
		if (!Global_262145.f_24365 && cloudTimeAsInt < Global_262145.f_24352)
			num = 0;
	else if (hParam0 == joaat("oppressor2"))
		if (!Global_262145.f_24363 && cloudTimeAsInt < Global_262145.f_24350)
			num = 0;
	else if (hParam0 == joaat("patriot2"))
		if (!Global_262145.f_24355 && cloudTimeAsInt < Global_262145.f_24342)
			num = 0;
	else if (hParam0 == joaat("stafford"))
		if (!Global_262145.f_24357 && cloudTimeAsInt < Global_262145.f_24344)
			num = 0;
	else if (hParam0 == joaat("freecrawler"))
		if (!Global_262145.f_24361 && cloudTimeAsInt < Global_262145.f_24348)
			num = 0;
	else if (hParam0 == joaat("blimp3"))
		if (!Global_262145.f_24360 && cloudTimeAsInt < Global_262145.f_24347)
			num = 0;

	if (hParam0 == joaat("monster3"))
	{
	}
	else if (hParam0 == joaat("cerberus"))
	{
	}
	else if (hParam0 == joaat("cerberus2"))
	{
	}
	else if (hParam0 == joaat("cerberus3"))
	{
	}
	else if (hParam0 == joaat("brutus"))
	{
	}
	else if (hParam0 == joaat("brutus2"))
	{
	}
	else if (hParam0 == joaat("brutus3"))
	{
	}
	else if (hParam0 == joaat("scarab"))
	{
	}
	else if (hParam0 == joaat("scarab2"))
	{
	}
	else if (hParam0 == joaat("scarab3"))
	{
	}
	else if (hParam0 == joaat("imperator"))
	{
	}
	else if (hParam0 == joaat("imperator2"))
	{
	}
	else if (hParam0 == joaat("imperator3"))
	{
	}
	else if (hParam0 == joaat("zr380"))
	{
	}
	else if (hParam0 == joaat("zr3802"))
	{
	}
	else if (hParam0 == joaat("zr3803"))
	{
	}
	else if (hParam0 == joaat("impaler"))
	{
	}
	else if (hParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26956 && cloudTimeAsInt < Global_262145.f_26958)
			num = 0;
	}
	else if (hParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25969 && cloudTimeAsInt < Global_262145.f_25962)
			num = 0;
	}
	else if (hParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25970 && cloudTimeAsInt < Global_262145.f_25963)
			num = 0;
	}
	else if (hParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25971 && cloudTimeAsInt < Global_262145.f_25964)
			num = 0;
	}
	else if (hParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25972 && cloudTimeAsInt < Global_262145.f_25965)
			num = 0;
	}
	else if (hParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26957 && cloudTimeAsInt < Global_262145.f_26959)
			num = 0;
	}
	else if (hParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25973 && cloudTimeAsInt < Global_262145.f_25966)
			num = 0;
	}
	else if (hParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25974 && cloudTimeAsInt < Global_262145.f_25967)
			num = 0;
	}
	else if (hParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25975 && cloudTimeAsInt < Global_262145.f_25968)
			num = 0;
	}
	else if (hParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25980 && cloudTimeAsInt < Global_262145.f_26001)
			num = 0;
	}
	else if (hParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25981 && cloudTimeAsInt < Global_262145.f_26002)
			num = 0;
	}
	else if (hParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25982 && cloudTimeAsInt < Global_262145.f_26003)
			num = 0;
	}
	else if (hParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25983 && cloudTimeAsInt < Global_262145.f_26004)
			num = 0;
	}
	else if (hParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25984 && cloudTimeAsInt < Global_262145.f_26005)
			num = 0;
	}
	else if (hParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25985 && cloudTimeAsInt < Global_262145.f_26006)
			num = 0;
	}
	else if (hParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25986 && cloudTimeAsInt < Global_262145.f_26007)
			num = 0;
	}
	else if (hParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25987 && cloudTimeAsInt < Global_262145.f_26008)
			num = 0;
	}
	else if (hParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25988 && cloudTimeAsInt < Global_262145.f_26009)
			num = 0;
	}
	else if (hParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25989 && cloudTimeAsInt < Global_262145.f_26010)
			num = 0;
	}
	else if (hParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25990 && cloudTimeAsInt < Global_262145.f_26011)
			num = 0;
	}
	else if (hParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25991 && cloudTimeAsInt < Global_262145.f_26012)
			num = 0;
	}
	else if (hParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25992 && cloudTimeAsInt < Global_262145.f_26013)
			num = 0;
	}
	else if (hParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25993 && cloudTimeAsInt < Global_262145.f_26014)
			num = 0;
	}
	else if (hParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25994 && cloudTimeAsInt < Global_262145.f_26015)
			num = 0;
	}
	else if (hParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25995 && cloudTimeAsInt < Global_262145.f_26016)
			num = 0;
	}
	else if (hParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25996 && cloudTimeAsInt < Global_262145.f_26017)
			num = 0;
	}
	else if (hParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25997 && cloudTimeAsInt < Global_262145.f_26018)
			num = 0;
	}
	else if (hParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25998 && cloudTimeAsInt < Global_262145.f_26019)
			num = 0;
	}
	else if (hParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25999 && cloudTimeAsInt < Global_262145.f_26020)
			num = 0;
	}
	else if (hParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_26000 && cloudTimeAsInt < Global_262145.f_26021)
			num = 0;
	}
	else if (hParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28820 && cloudTimeAsInt < Global_262145.f_28841)
			num = 0;
	}
	else if (hParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28821 && cloudTimeAsInt < Global_262145.f_28842)
			num = 0;
	}
	else if (hParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28822 && cloudTimeAsInt < Global_262145.f_28843)
			num = 0;
	}
	else if (hParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28823 && cloudTimeAsInt < Global_262145.f_28844)
			num = 0;
	}
	else if (hParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28824 && cloudTimeAsInt < Global_262145.f_28845)
			num = 0;
	}
	else if (hParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28825 && cloudTimeAsInt < Global_262145.f_28846)
			num = 0;
	}
	else if (hParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28826 && cloudTimeAsInt < Global_262145.f_28847)
			num = 0;
	}
	else if (hParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28827 && cloudTimeAsInt < Global_262145.f_28848)
			num = 0;
	}
	else if (hParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28828 && cloudTimeAsInt < Global_262145.f_28849)
			num = 0;
	}
	else if (hParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28829 && cloudTimeAsInt < Global_262145.f_28850)
			num = 0;
	}
	else if (hParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28830 && cloudTimeAsInt < Global_262145.f_28851)
			num = 0;
	}
	else if (hParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28831 && cloudTimeAsInt < Global_262145.f_28852)
			num = 0;
	}
	else if (hParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28832 && cloudTimeAsInt < Global_262145.f_28853)
			num = 0;
	}
	else if (hParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28833 && cloudTimeAsInt < Global_262145.f_28854)
			num = 0;
	}
	else if (hParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28834 && cloudTimeAsInt < Global_262145.f_28855)
			num = 0;
	}
	else if (hParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28835 && cloudTimeAsInt < Global_262145.f_28856)
			num = 0;
	}
	else if (hParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28836 && cloudTimeAsInt < Global_262145.f_28857)
			num = 0;
	}
	else if (hParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28837 && cloudTimeAsInt < Global_262145.f_28858)
			num = 0;
	}
	else if (hParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28838 && cloudTimeAsInt < Global_262145.f_28859)
			num = 0;
	}
	else if (hParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28839 && cloudTimeAsInt < Global_262145.f_28860)
			num = 0;
	}
	else if (hParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28840 && cloudTimeAsInt < Global_262145.f_28861)
			num = 0;
	}
	else if (hParam0 == joaat("formula"))
	{
		if (!Global_262145.f_28863 && cloudTimeAsInt < Global_262145.f_28864 && !Global_262145.f_28818)
			num = 0;
	}
	else if (hParam0 == joaat("formula2"))
	{
		if (!Global_262145.f_28866 && cloudTimeAsInt < Global_262145.f_28867 && !Global_262145.f_28819)
			num = 0;
	}
	else if (hParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28871 && cloudTimeAsInt < Global_262145.f_28874)
			num = 0;
	}
	else if (hParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28872 && cloudTimeAsInt < Global_262145.f_28875)
			num = 0;
	}
	else if (hParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28873 && cloudTimeAsInt < Global_262145.f_28876)
			num = 0;
	}
	else if (hParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29889 && cloudTimeAsInt < Global_262145.f_29554)
			num = 0;
	}
	else if (hParam0 == joaat("club"))
	{
		if (!Global_262145.f_29540 && cloudTimeAsInt < Global_262145.f_29561)
			num = 0;
	}
	else if (hParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_29541 && cloudTimeAsInt < Global_262145.f_29547)
			num = 0;
	}
	else if (hParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29887 && cloudTimeAsInt < Global_262145.f_29555)
			num = 0;
	}
	else if (hParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29888 && cloudTimeAsInt < Global_262145.f_29556)
			num = 0;
	}
	else if (hParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_29534 && cloudTimeAsInt < Global_262145.f_29553)
			num = 0;
	}
	else if (hParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_29535 && cloudTimeAsInt < Global_262145.f_29562)
			num = 0;
	}
	else if (hParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_29536 && cloudTimeAsInt < Global_262145.f_29552)
			num = 0;
	}
	else if (hParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_29537 && cloudTimeAsInt < Global_262145.f_29550)
			num = 0;
	}
	else if (hParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29883 && cloudTimeAsInt < Global_262145.f_29557)
			num = 0;
	}
	else if (hParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29884 && cloudTimeAsInt < Global_262145.f_29558)
			num = 0;
	}
	else if (hParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29885 && cloudTimeAsInt < Global_262145.f_29559)
			num = 0;
	}
	else if (hParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29886 && cloudTimeAsInt < Global_262145.f_29560)
			num = 0;
	}
	else if (hParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_29538 && cloudTimeAsInt < Global_262145.f_29549)
			num = 0;
	}
	else if (hParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_29539 && cloudTimeAsInt < Global_262145.f_29551)
			num = 0;
	}
	else if (hParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_30348 && cloudTimeAsInt < Global_262145.f_30331)
			num = 0;
	}
	else if (hParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_30349 && cloudTimeAsInt < Global_262145.f_30332)
			num = 0;
	}
	else if (hParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_30350 && cloudTimeAsInt < Global_262145.f_30333)
			num = 0;
	}
	else if (hParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_30351 && cloudTimeAsInt < Global_262145.f_30334)
			num = 0;
	}
	else if (hParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_30352 && cloudTimeAsInt < Global_262145.f_30335)
			num = 0;
	}
	else if (hParam0 == joaat("winky"))
	{
		if (!Global_262145.f_30353 && cloudTimeAsInt < Global_262145.f_30336)
			num = 0;
	}
	else if (hParam0 == joaat("veto"))
	{
		if (!Global_262145.f_30354 && cloudTimeAsInt < Global_262145.f_30337)
			num = 0;
	}
	else if (hParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_30355 && cloudTimeAsInt < Global_262145.f_30338)
			num = 0;
	}
	else if (hParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_30356 && cloudTimeAsInt < Global_262145.f_30339)
			num = 0;
	}
	else if (hParam0 == joaat("weevil"))
	{
		if (Global_262145.f_30365)
		{
		}
		else if (!Global_262145.f_30357 && cloudTimeAsInt < Global_262145.f_30340)
		{
			num = 0;
		}
	}
	else if (hParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_30358 && cloudTimeAsInt < Global_262145.f_30341)
			num = 0;
	}
	else if (hParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_30359 && cloudTimeAsInt < Global_262145.f_30342)
			num = 0;
	}
	else if (hParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_30360 && cloudTimeAsInt < Global_262145.f_30343)
			num = 0;
	}
	else if (hParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_30361 && cloudTimeAsInt < Global_262145.f_30344)
			num = 0;
	}
	else if (hParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_30366)
		{
		}
		else if (!Global_262145.f_30362 && cloudTimeAsInt < Global_262145.f_30345)
		{
			num = 0;
		}
	}
	else if (hParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_30363 && cloudTimeAsInt < Global_262145.f_30346)
			num = 0;
	}
	else if (hParam0 == joaat("verus"))
	{
		if (!Global_262145.f_30364 && cloudTimeAsInt < Global_262145.f_30347)
			num = 0;
	}
	else if (hParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_31216 && cloudTimeAsInt < Global_262145.f_31199)
			num = 0;
	}
	else if (hParam0 == joaat("euros"))
	{
		if (!Global_262145.f_31217 && cloudTimeAsInt < Global_262145.f_31200)
			num = 0;
	}
	else if (hParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_31218 && cloudTimeAsInt < Global_262145.f_31201)
			num = 0;
	}
	else if (hParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_31219 && cloudTimeAsInt < Global_262145.f_31202)
			num = 0;
	}
	else if (hParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_31220 && cloudTimeAsInt < Global_262145.f_31203)
			num = 0;
	}
	else if (hParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_31221 && cloudTimeAsInt < Global_262145.f_31204)
			num = 0;
	}
	else if (hParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_31222 && cloudTimeAsInt < Global_262145.f_31205)
			num = 0;
	}
	else if (hParam0 == joaat("calico"))
	{
		if (!Global_262145.f_31223 && cloudTimeAsInt < Global_262145.f_31206)
			num = 0;
	}
	else if (hParam0 == joaat("remus"))
	{
		if (!Global_262145.f_31224 && cloudTimeAsInt < Global_262145.f_31207)
			num = 0;
	}
	else if (hParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_31225 && cloudTimeAsInt < Global_262145.f_31208)
			num = 0;
	}
	else if (hParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_31226 && cloudTimeAsInt < Global_262145.f_31209)
			num = 0;
	}
	else if (hParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_31227 && cloudTimeAsInt < Global_262145.f_31210)
			num = 0;
	}
	else if (hParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_31228 && cloudTimeAsInt < Global_262145.f_31211)
			num = 0;
	}
	else if (hParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_31229 && cloudTimeAsInt < Global_262145.f_31212)
			num = 0;
	}
	else if (hParam0 == joaat("previon"))
	{
		if (!Global_262145.f_31230 && cloudTimeAsInt < Global_262145.f_31213)
			num = 0;
	}
	else if (hParam0 == joaat("growler"))
	{
		if (!Global_262145.f_31231 && cloudTimeAsInt < Global_262145.f_31214)
			num = 0;
	}
	else if (hParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_31232 && cloudTimeAsInt < Global_262145.f_31215)
			num = 0;
	}
	else if (hParam0 == joaat("champion"))
	{
		if (!Global_262145.f_32099 && cloudTimeAsInt < Global_262145.f_32084)
			num = 0;
	}
	else if (hParam0 == joaat("buffalo4"))
	{
		if (!Global_262145.f_32100 && cloudTimeAsInt < Global_262145.f_32085)
			num = 0;
	}
	else if (hParam0 == joaat("deity"))
	{
		if (!Global_262145.f_32101 && cloudTimeAsInt < Global_262145.f_32086)
			num = 0;
	}
	else if (hParam0 == joaat("jubilee"))
	{
		if (!Global_262145.f_32102 && cloudTimeAsInt < Global_262145.f_32087)
			num = 0;
	}
	else if (hParam0 == joaat("ignus"))
	{
		if (!Global_262145.f_32103 && cloudTimeAsInt < Global_262145.f_32088)
			num = 0;
	}
	else if (hParam0 == joaat("cinquemila"))
	{
		if (!Global_262145.f_32104 && cloudTimeAsInt < Global_262145.f_32089)
			num = 0;
	}
	else if (hParam0 == joaat("astron"))
	{
		if (!Global_262145.f_32105 && cloudTimeAsInt < Global_262145.f_32090)
			num = 0;
	}
	else if (hParam0 == joaat("comet7"))
	{
		if (!Global_262145.f_32106 && cloudTimeAsInt < Global_262145.f_32091)
			num = 0;
	}
	else if (hParam0 == joaat("zeno"))
	{
		if (!Global_262145.f_32107 && cloudTimeAsInt < Global_262145.f_32092)
			num = 0;
	}
	else if (hParam0 == joaat("reever"))
	{
		if (!Global_262145.f_32108 && cloudTimeAsInt < Global_262145.f_32093)
			num = 0;
	}
	else if (hParam0 == joaat("iwagen"))
	{
		if (!Global_262145.f_32109 && cloudTimeAsInt < Global_262145.f_32094)
			num = 0;
	}
	else if (hParam0 == joaat("granger2"))
	{
		if (!Global_262145.f_32110 && cloudTimeAsInt < Global_262145.f_32095)
			num = 0;
	}
	else if (hParam0 == joaat("patriot3"))
	{
		if (!Global_262145.f_32111 && cloudTimeAsInt < Global_262145.f_32096)
			num = 0;
	}
	else if (hParam0 == joaat("shinobi"))
	{
		if (!Global_262145.f_32112 && cloudTimeAsInt < Global_262145.f_32097)
			num = 0;
	}
	else if (hParam0 == joaat("baller7"))
	{
		if (Global_262145.f_32177)
		{
		}
		else if (!Global_262145.f_32113 && cloudTimeAsInt < Global_262145.f_32098)
		{
			num = 0;
		}
	}
	else if (hParam0 == joaat("brioso3"))
	{
		if (!*Global_262145.f_33350 && cloudTimeAsInt < *Global_262145.f_33331)
			num = 0;
	}
	else if (hParam0 == joaat("corsita"))
	{
		if (!*Global_262145.f_33344 && cloudTimeAsInt < *Global_262145.f_33325)
			num = 0;
	}
	else if (hParam0 == joaat("draugur"))
	{
		if (!*Global_262145.f_33348 && cloudTimeAsInt < *Global_262145.f_33329)
			num = 0;
	}
	else if (hParam0 == joaat("greenwood"))
	{
		if (!*Global_262145.f_33342 && cloudTimeAsInt < *Global_262145.f_33323)
			num = 0;
	}
	else if (hParam0 == joaat("kanjosj"))
	{
		if (!*Global_262145.f_33353 && cloudTimeAsInt < *Global_262145.f_33334)
			num = 0;
	}
	else if (hParam0 == joaat("lm87"))
	{
		if (!*Global_262145.f_33345 && cloudTimeAsInt < *Global_262145.f_33326)
			num = 0;
	}
	else if (hParam0 == joaat("postlude"))
	{
		if (!*Global_262145.f_33354 && cloudTimeAsInt < *Global_262145.f_33335)
			num = 0;
	}
	else if (hParam0 == joaat("rhinehart"))
	{
		if (!*Global_262145.f_33356 && cloudTimeAsInt < *Global_262145.f_33337)
			num = 0;
	}
	else if (hParam0 == joaat("sm722"))
	{
		if (!*Global_262145.f_33347 && cloudTimeAsInt < *Global_262145.f_33328)
			num = 0;
	}
	else if (hParam0 == joaat("tenf"))
	{
		if (!*Global_262145.f_33355 && cloudTimeAsInt < *Global_262145.f_33336)
			num = 0;
	}
	else if (hParam0 == joaat("tenf2"))
	{
		if (!*Global_262145.f_33358 && cloudTimeAsInt < *Global_262145.f_33339)
			num = 0;
	}
	else if (hParam0 == joaat("torero2"))
	{
		if (!*Global_262145.f_33343 && cloudTimeAsInt < *Global_262145.f_33324)
			num = 0;
	}
	else if (hParam0 == joaat("vigero2"))
	{
		if (!*Global_262145.f_33351 && cloudTimeAsInt < *Global_262145.f_33332)
			num = 0;
	}
	else if (hParam0 == joaat("weevil2"))
	{
		if (!*Global_262145.f_33357 && cloudTimeAsInt < *Global_262145.f_33338)
			num = 0;
	}
	else if (hParam0 == joaat("ruiner4"))
	{
		if (!*Global_262145.f_33349 && cloudTimeAsInt < *Global_262145.f_33330)
			num = 0;
	}
	else if (hParam0 == joaat("sentinel4"))
	{
		if (!*Global_262145.f_33359 && cloudTimeAsInt < *Global_262145.f_33340)
			num = 0;
	}
	else if (hParam0 == joaat("conada"))
	{
		if (!*Global_262145.f_33346 && cloudTimeAsInt < *Global_262145.f_33327)
			num = 0;
	}
	else if (hParam0 == joaat("omnisegt"))
	{
		if (!*Global_262145.f_33341 && cloudTimeAsInt < *Global_262145.f_33322)
			num = 0;
	}
	else if (hParam0 == 1384502824)
	{
		if (!*Global_262145.f_34217 && cloudTimeAsInt < *Global_262145.f_34201)
			num = 0;
	}
	else if (hParam0 == -1576586413)
	{
		if (!*Global_262145.f_34217 && cloudTimeAsInt < *Global_262145.f_34201)
			num = 0;
	}
	else if (hParam0 == -1249788006)
	{
		if (!*Global_262145.f_34226 && cloudTimeAsInt < *Global_262145.f_34209)
			num = 0;
	}
	else if (hParam0 == -1386336041)
	{
		if (!*Global_262145.f_34220 && cloudTimeAsInt < *Global_262145.f_34204)
			num = 0;
	}
	else if (hParam0 == -1627077503)
	{
		if (!*Global_262145.f_34214 && cloudTimeAsInt < *Global_262145.f_34198)
			num = 0;
	}
	else if (hParam0 == -1035489563)
	{
		if (!*Global_262145.f_34215 && cloudTimeAsInt < *Global_262145.f_34199)
			num = 0;
	}
	else if (hParam0 == 1748565021)
	{
		if (!*Global_262145.f_34212 && cloudTimeAsInt < *Global_262145.f_34196)
			num = 0;
	}
	else if (hParam0 == 2100457220)
	{
		if (!*Global_262145.f_34223 && cloudTimeAsInt < *Global_262145.f_34207)
			num = 0;
	}
	else if (hParam0 == 996383885)
	{
		if (!*Global_262145.f_34227 && cloudTimeAsInt < *Global_262145.f_34211)
			num = 0;
	}
	else if (hParam0 == -131348178)
	{
		if (!*Global_262145.f_34224 && cloudTimeAsInt < *Global_262145.f_34208)
			num = 0;
	}
	else if (hParam0 == 268758436)
	{
		if (!*Global_262145.f_34213 && cloudTimeAsInt < *Global_262145.f_34197)
			num = 0;
	}
	else if (hParam0 == 1076201208)
	{
		if (!*Global_262145.f_34216 && cloudTimeAsInt < *Global_262145.f_34200)
			num = 0;
	}
	else if (hParam0 == 669204833)
	{
		if (!*Global_262145.f_34225 && cloudTimeAsInt < *Global_262145.f_34210)
			num = 0;
	}
	else if (hParam0 == 1550581940)
	{
		if (!*Global_262145.f_34221 && cloudTimeAsInt < *Global_262145.f_34205)
			num = 0;
	}
	else if (hParam0 == -1933242328)
	{
		if (!*Global_262145.f_34222 && cloudTimeAsInt < *Global_262145.f_34206)
			num = 0;
	}
	else if (hParam0 == -461850249)
	{
		if (!*Global_262145.f_34219 && cloudTimeAsInt < *Global_262145.f_34203)
			num = 0;
	}
	else if (hParam0 == joaat("taxi"))
	{
		if (!*Global_262145.f_34218 && cloudTimeAsInt < *Global_262145.f_34202)
			num = 0;
	}

	if (hParam0 == joaat("exemplar"))
		if (!*Global_262145.f_35167 && !*Global_262145.f_35168)
			num = 0;
	else if (hParam0 == joaat("cogcabrio"))
		if (!*Global_262145.f_35169 && !*Global_262145.f_35170)
			num = 0;
	else if (hParam0 == joaat("thrust"))
		if (!*Global_262145.f_35171 && !*Global_262145.f_35172)
			num = 0;
	else if (hParam0 == joaat("vindicator"))
		if (!*Global_262145.f_35173 && !*Global_262145.f_35174)
			num = 0;
	else if (hParam0 == joaat("coquette3"))
		if (!*Global_262145.f_35175 && !*Global_262145.f_35176)
			num = 0;
	else if (hParam0 == joaat("brawler"))
		if (!*Global_262145.f_35177 && !*Global_262145.f_35178)
			num = 0;
	else if (hParam0 == joaat("cognoscenti"))
		if (!*Global_262145.f_35179 && !*Global_262145.f_35180)
			num = 0;
	else if (hParam0 == joaat("cognoscenti2"))
		if (!*Global_262145.f_35181 && !*Global_262145.f_35182)
			num = 0;
	else if (hParam0 == joaat("cog55"))
		if (!*Global_262145.f_35183 && !*Global_262145.f_35184)
			num = 0;
	else if (hParam0 == joaat("cog552"))
		if (!*Global_262145.f_35185 && !*Global_262145.f_35186)
			num = 0;
	else if (hParam0 == joaat("superd"))
		if (!*Global_262145.f_35187 && !*Global_262145.f_35188)
			num = 0;
	else if (hParam0 == joaat("schafter4"))
		if (!*Global_262145.f_35189 && !*Global_262145.f_35190)
			num = 0;
	else if (hParam0 == joaat("schafter6"))
		if (!*Global_262145.f_35191 && !*Global_262145.f_35192)
			num = 0;
	else if (hParam0 == joaat("alpha"))
		if (!*Global_262145.f_35193 && !*Global_262145.f_35194)
			num = 0;
	else if (hParam0 == joaat("feltzer2"))
		if (!*Global_262145.f_35195 && !*Global_262145.f_35196)
			num = 0;
	else if (hParam0 == joaat("massacro"))
		if (!*Global_262145.f_35197 && !*Global_262145.f_35198)
			num = 0;
	else if (hParam0 == joaat("rapidgt"))
		if (!*Global_262145.f_35199 && !*Global_262145.f_35200)
			num = 0;
	else if (hParam0 == joaat("rapidgt2"))
		if (!*Global_262145.f_35201 && !*Global_262145.f_35202)
			num = 0;
	else if (hParam0 == joaat("seven70"))
		if (!*Global_262145.f_35203 && !*Global_262145.f_35204)
			num = 0;
	else if (hParam0 == joaat("jester"))
		if (!*Global_262145.f_35205 && !*Global_262145.f_35206)
			num = 0;
	else if (hParam0 == joaat("bestiagts"))
		if (!*Global_262145.f_35207 && !*Global_262145.f_35208)
			num = 0;
	else if (hParam0 == joaat("carbonizzare"))
		if (!*Global_262145.f_35209 && !*Global_262145.f_35210)
			num = 0;
	else if (hParam0 == joaat("coquette"))
		if (!*Global_262145.f_35211 && !*Global_262145.f_35212)
			num = 0;
	else if (hParam0 == joaat("furoregt"))
		if (!*Global_262145.f_35213 && !*Global_262145.f_35214)
			num = 0;
	else if (hParam0 == joaat("ninef"))
		if (!*Global_262145.f_35215 && !*Global_262145.f_35216)
			num = 0;
	else if (hParam0 == joaat("ninef2"))
		if (!*Global_262145.f_35217 && !*Global_262145.f_35218)
			num = 0;
	else if (hParam0 == joaat("verlierer2"))
		if (!*Global_262145.f_35219 && !*Global_262145.f_35220)
			num = 0;
	else if (hParam0 == joaat("btype"))
		if (!*Global_262145.f_35221 && !*Global_262145.f_35222)
			num = 0;
	else if (hParam0 == joaat("feltzer3"))
		if (!*Global_262145.f_35223 && !*Global_262145.f_35224)
			num = 0;
	else if (hParam0 == joaat("stingergt"))
		if (!*Global_262145.f_35225 && !*Global_262145.f_35226)
			num = 0;
	else if (hParam0 == joaat("stinger"))
		if (!*Global_262145.f_35227 && !*Global_262145.f_35228)
			num = 0;
	else if (hParam0 == joaat("coquette2"))
		if (!*Global_262145.f_35229 && !*Global_262145.f_35230)
			num = 0;
	else if (hParam0 == joaat("jb700"))
		if (!*Global_262145.f_35231 && !*Global_262145.f_35232)
			num = 0;
	else if (hParam0 == joaat("mamba"))
		if (!*Global_262145.f_35233 && !*Global_262145.f_35234)
			num = 0;
	else if (hParam0 == joaat("monroe"))
		if (!*Global_262145.f_35235 && !*Global_262145.f_35236)
			num = 0;
	else if (hParam0 == joaat("btype3"))
		if (!*Global_262145.f_35237 && !*Global_262145.f_35238)
			num = 0;
	else if (hParam0 == joaat("ztype"))
		if (!*Global_262145.f_35239 && !*Global_262145.f_35240)
			num = 0;
	else if (hParam0 == joaat("voltic"))
		if (!*Global_262145.f_35241 && !*Global_262145.f_35242)
			num = 0;
	else if (hParam0 == joaat("sheava"))
		if (!*Global_262145.f_35243 && !*Global_262145.f_35244)
			num = 0;
	else if (hParam0 == joaat("cheetah"))
		if (!*Global_262145.f_35245 && !*Global_262145.f_35246)
			num = 0;
	else if (hParam0 == joaat("entityxf"))
		if (!*Global_262145.f_35247 && !*Global_262145.f_35248)
			num = 0;
	else if (hParam0 == joaat("infernus"))
		if (!*Global_262145.f_35249 && !*Global_262145.f_35250)
			num = 0;
	else if (hParam0 == joaat("vacca"))
		if (!*Global_262145.f_35251 && !*Global_262145.f_35252)
			num = 0;
	else if (hParam0 == joaat("bullet"))
		if (!*Global_262145.f_35253 && !*Global_262145.f_35254)
			num = 0;
	else if (hParam0 == joaat("fmj"))
		if (!*Global_262145.f_35255 && !*Global_262145.f_35256)
			num = 0;
	else if (hParam0 == joaat("baller2"))
		if (!*Global_262145.f_35257 && !*Global_262145.f_35258)
			num = 0;
	else if (hParam0 == joaat("baller3"))
		if (!*Global_262145.f_35259 && !*Global_262145.f_35260)
			num = 0;
	else if (hParam0 == joaat("baller5"))
		if (!*Global_262145.f_35261 && !*Global_262145.f_35262)
			num = 0;
	else if (hParam0 == joaat("baller4"))
		if (!*Global_262145.f_35263 && !*Global_262145.f_35264)
			num = 0;
	else if (hParam0 == joaat("baller6"))
		if (!*Global_262145.f_35265 && !*Global_262145.f_35266)
			num = 0;
	else if (hParam0 == joaat("xls"))
		if (!*Global_262145.f_35267 && !*Global_262145.f_35268)
			num = 0;
	else if (hParam0 == joaat("xls2"))
		if (!*Global_262145.f_35269 && !*Global_262145.f_35270)
			num = 0;
	else if (hParam0 == joaat("prairie"))
		if (!*Global_262145.f_35271 && !*Global_262145.f_35272)
			num = 0;
	else if (hParam0 == joaat("issi2"))
		if (!*Global_262145.f_35273 && !*Global_262145.f_35274)
			num = 0;
	else if (hParam0 == joaat("dilettante"))
		if (!*Global_262145.f_35275 && !*Global_262145.f_35276)
			num = 0;
	else if (hParam0 == joaat("felon"))
		if (!*Global_262145.f_35277 && !*Global_262145.f_35278)
			num = 0;
	else if (hParam0 == joaat("felon2"))
		if (!*Global_262145.f_35279 && !*Global_262145.f_35280)
			num = 0;
	else if (hParam0 == joaat("f620"))
		if (!*Global_262145.f_35281 && !*Global_262145.f_35282)
			num = 0;
	else if (hParam0 == joaat("jackal"))
		if (!*Global_262145.f_35283 && !*Global_262145.f_35284)
			num = 0;
	else if (hParam0 == joaat("oracle2"))
		if (!*Global_262145.f_35285 && !*Global_262145.f_35286)
			num = 0;
	else if (hParam0 == joaat("oracle"))
		if (!*Global_262145.f_35287 && !*Global_262145.f_35288)
			num = 0;
	else if (hParam0 == joaat("sentinel2"))
		if (!*Global_262145.f_35289 && !*Global_262145.f_35290)
			num = 0;
	else if (hParam0 == joaat("zion"))
		if (!*Global_262145.f_35291 && !*Global_262145.f_35292)
			num = 0;
	else if (hParam0 == joaat("zion2"))
		if (!*Global_262145.f_35293 && !*Global_262145.f_35294)
			num = 0;
	else if (hParam0 == joaat("akuma"))
		if (!*Global_262145.f_35295 && !*Global_262145.f_35296)
			num = 0;
	else if (hParam0 == joaat("double"))
		if (!*Global_262145.f_35297 && !*Global_262145.f_35298)
			num = 0;
	else if (hParam0 == joaat("enduro"))
		if (!*Global_262145.f_35299 && !*Global_262145.f_35300)
			num = 0;
	else if (hParam0 == joaat("hexer"))
		if (!*Global_262145.f_35301 && !*Global_262145.f_35302)
			num = 0;
	else if (hParam0 == joaat("innovation"))
		if (!*Global_262145.f_35303 && !*Global_262145.f_35304)
			num = 0;
	else if (hParam0 == joaat("sanchez"))
		if (!*Global_262145.f_35305 && !*Global_262145.f_35306)
			num = 0;
	else if (hParam0 == joaat("sanchez2"))
		if (!*Global_262145.f_35307 && !*Global_262145.f_35308)
			num = 0;
	else if (hParam0 == joaat("bati2"))
		if (!*Global_262145.f_35309 && !*Global_262145.f_35310)
			num = 0;
	else if (hParam0 == joaat("faggio2"))
		if (!*Global_262145.f_35311 && !*Global_262145.f_35312)
			num = 0;
	else if (hParam0 == joaat("ruffian"))
		if (!*Global_262145.f_35313 && !*Global_262145.f_35314)
			num = 0;
	else if (hParam0 == joaat("nemesis"))
		if (!*Global_262145.f_35315 && !*Global_262145.f_35316)
			num = 0;
	else if (hParam0 == joaat("hakuchou"))
		if (!*Global_262145.f_35317 && !*Global_262145.f_35318)
			num = 0;
	else if (hParam0 == joaat("pcj"))
		if (!*Global_262145.f_35319 && !*Global_262145.f_35320)
			num = 0;
	else if (hParam0 == joaat("vader"))
		if (!*Global_262145.f_35321 && !*Global_262145.f_35322)
			num = 0;
	else if (hParam0 == joaat("sovereign"))
		if (!*Global_262145.f_35323 && !*Global_262145.f_35324)
			num = 0;
	else if (hParam0 == joaat("gauntlet"))
		if (!*Global_262145.f_35325 && !*Global_262145.f_35326)
			num = 0;
	else if (hParam0 == joaat("ratloader"))
		if (!*Global_262145.f_35327 && !*Global_262145.f_35328)
			num = 0;
	else if (hParam0 == joaat("picador"))
		if (!*Global_262145.f_35329 && !*Global_262145.f_35330)
			num = 0;
	else if (hParam0 == joaat("vigero"))
		if (!*Global_262145.f_35331 && !*Global_262145.f_35332)
			num = 0;
	else if (hParam0 == joaat("ruiner"))
		if (!*Global_262145.f_35333 && !*Global_262145.f_35334)
			num = 0;
	else if (hParam0 == joaat("tampa"))
		if (!*Global_262145.f_35335 && !*Global_262145.f_35336)
			num = 0;
	else if (hParam0 == joaat("blade"))
		if (!*Global_262145.f_35337 && !*Global_262145.f_35338)
			num = 0;
	else if (hParam0 == joaat("bifta"))
		if (!*Global_262145.f_35339 && !*Global_262145.f_35340)
			num = 0;
	else if (hParam0 == joaat("dune"))
		if (!*Global_262145.f_35341 && !*Global_262145.f_35342)
			num = 0;
	else if (hParam0 == joaat("bfinjection"))
		if (!*Global_262145.f_35343 && !*Global_262145.f_35344)
			num = 0;
	else if (hParam0 == joaat("bodhi2"))
		if (!*Global_262145.f_35345 && !*Global_262145.f_35346)
			num = 0;
	else if (hParam0 == joaat("kalahari"))
		if (!*Global_262145.f_35347 && !*Global_262145.f_35348)
			num = 0;
	else if (hParam0 == joaat("rancherxl"))
		if (!*Global_262145.f_35349 && !*Global_262145.f_35350)
			num = 0;
	else if (hParam0 == joaat("rebel2"))
		if (!*Global_262145.f_35351 && !*Global_262145.f_35352)
			num = 0;
	else if (hParam0 == joaat("rebel"))
		if (!*Global_262145.f_35353 && !*Global_262145.f_35354)
			num = 0;
	else if (hParam0 == joaat("blazer"))
		if (!*Global_262145.f_35355 && !*Global_262145.f_35356)
			num = 0;
	else if (hParam0 == joaat("blazer3"))
		if (!*Global_262145.f_35357 && !*Global_262145.f_35358)
			num = 0;
	else if (hParam0 == joaat("sandking2"))
		if (!*Global_262145.f_35359 && !*Global_262145.f_35360)
			num = 0;
	else if (hParam0 == joaat("washington"))
		if (!*Global_262145.f_35361 && !*Global_262145.f_35362)
			num = 0;
	else if (hParam0 == joaat("schafter2"))
		if (!*Global_262145.f_35363 && !*Global_262145.f_35364)
			num = 0;
	else if (hParam0 == joaat("romero"))
		if (!*Global_262145.f_35365 && !*Global_262145.f_35366)
			num = 0;
	else if (hParam0 == joaat("fugitive"))
		if (!*Global_262145.f_35367 && !*Global_262145.f_35368)
			num = 0;
	else if (hParam0 == joaat("surge"))
		if (!*Global_262145.f_35369 && !*Global_262145.f_35370)
			num = 0;
	else if (hParam0 == joaat("asea"))
		if (!*Global_262145.f_35371 && !*Global_262145.f_35372)
			num = 0;
	else if (hParam0 == joaat("premier"))
		if (!*Global_262145.f_35373 && !*Global_262145.f_35374)
			num = 0;
	else if (hParam0 == joaat("regina"))
		if (!*Global_262145.f_35375 && !*Global_262145.f_35376)
			num = 0;
	else if (hParam0 == joaat("asterope"))
		if (!*Global_262145.f_35377 && !*Global_262145.f_35378)
			num = 0;
	else if (hParam0 == joaat("intruder"))
		if (!*Global_262145.f_35379 && !*Global_262145.f_35380)
			num = 0;
	else if (hParam0 == joaat("tailgater"))
		if (!*Global_262145.f_35381 && !*Global_262145.f_35382)
			num = 0;
	else if (hParam0 == joaat("stanier"))
		if (!*Global_262145.f_35383 && !*Global_262145.f_35384)
			num = 0;
	else if (hParam0 == joaat("ingot"))
		if (!*Global_262145.f_35385 && !*Global_262145.f_35386)
			num = 0;
	else if (hParam0 == joaat("warrener"))
		if (!*Global_262145.f_35387 && !*Global_262145.f_35388)
			num = 0;
	else if (hParam0 == joaat("stratum"))
		if (!*Global_262145.f_35389 && !*Global_262145.f_35390)
			num = 0;
	else if (hParam0 == joaat("schwarzer"))
		if (!*Global_262145.f_35391 && !*Global_262145.f_35392)
			num = 0;
	else if (hParam0 == joaat("surano"))
		if (!*Global_262145.f_35393 && !*Global_262145.f_35394)
			num = 0;
	else if (hParam0 == joaat("buffalo"))
		if (!*Global_262145.f_35395 && !*Global_262145.f_35396)
			num = 0;
	else if (hParam0 == joaat("buffalo2"))
		if (!*Global_262145.f_35397 && !*Global_262145.f_35398)
			num = 0;
	else if (hParam0 == joaat("massacro2"))
		if (!*Global_262145.f_35399 && !*Global_262145.f_35400)
			num = 0;
	else if (hParam0 == joaat("jester2"))
		if (!*Global_262145.f_35401 && !*Global_262145.f_35402)
			num = 0;
	else if (hParam0 == joaat("futo"))
		if (!*Global_262145.f_35403 && !*Global_262145.f_35404)
			num = 0;
	else if (hParam0 == joaat("penumbra"))
		if (!*Global_262145.f_35405 && !*Global_262145.f_35406)
			num = 0;
	else if (hParam0 == joaat("fusilade"))
		if (!*Global_262145.f_35407 && !*Global_262145.f_35408)
			num = 0;
	else if (hParam0 == joaat("btype2"))
		if (!*Global_262145.f_35409 && !*Global_262145.f_35410)
			num = 0;
	else if (hParam0 == joaat("pigalle"))
		if (!*Global_262145.f_35411 && !*Global_262145.f_35412)
			num = 0;
	else if (hParam0 == joaat("cavalcade"))
		if (!*Global_262145.f_35413 && !*Global_262145.f_35414)
			num = 0;
	else if (hParam0 == joaat("cavalcade2"))
		if (!*Global_262145.f_35415 && !*Global_262145.f_35416)
			num = 0;
	else if (hParam0 == joaat("bjxl"))
		if (!*Global_262145.f_35417 && !*Global_262145.f_35418)
			num = 0;
	else if (hParam0 == joaat("serrano"))
		if (!*Global_262145.f_35419 && !*Global_262145.f_35420)
			num = 0;
	else if (hParam0 == joaat("gresley"))
		if (!*Global_262145.f_35421 && !*Global_262145.f_35422)
			num = 0;
	else if (hParam0 == joaat("seminole"))
		if (!*Global_262145.f_35423 && !*Global_262145.f_35424)
			num = 0;
	else if (hParam0 == joaat("granger"))
		if (!*Global_262145.f_35425 && !*Global_262145.f_35426)
			num = 0;
	else if (hParam0 == joaat("landstalker"))
		if (!*Global_262145.f_35427 && !*Global_262145.f_35428)
			num = 0;
	else if (hParam0 == joaat("habanero"))
		if (!*Global_262145.f_35429 && !*Global_262145.f_35430)
			num = 0;
	else if (hParam0 == joaat("fq2"))
		if (!*Global_262145.f_35431 && !*Global_262145.f_35432)
			num = 0;
	else if (hParam0 == joaat("baller"))
		if (!*Global_262145.f_35433 && !*Global_262145.f_35434)
			num = 0;
	else if (hParam0 == joaat("patriot"))
		if (!*Global_262145.f_35435 && !*Global_262145.f_35436)
			num = 0;
	else if (hParam0 == joaat("rocoto"))
		if (!*Global_262145.f_35437 && !*Global_262145.f_35438)
			num = 0;
	else if (hParam0 == joaat("radi"))
		if (!*Global_262145.f_35439 && !*Global_262145.f_35440)
			num = 0;
	else if (hParam0 == joaat("mesa3"))
		if (!*Global_262145.f_35441 && !*Global_262145.f_35442)
			num = 0;
	else if (hParam0 == joaat("monster"))
		if (!*Global_262145.f_35443 && !*Global_262145.f_35444)
			num = 0;
	else if (hParam0 == 1336514315)
		if (!*Global_262145.f_35473 && cloudTimeAsInt < *Global_262145.f_35460)
			num = 0;
	else if (hParam0 == -1659004814)
		if (!*Global_262145.f_35472 && cloudTimeAsInt < *Global_262145.f_35459)
			num = 0;
	else if (hParam0 == -654498607)
		if (!*Global_262145.f_35474 && cloudTimeAsInt < *Global_262145.f_35461)
			num = 0;
	else if (hParam0 == -979292575)
		if (!*Global_262145.f_35465 && cloudTimeAsInt < *Global_262145.f_35452)
			num = 0;
	else if (hParam0 == -1763675285)
		if (!*Global_262145.f_35462 && cloudTimeAsInt < *Global_262145.f_35449)
			num = 0;
	else if (hParam0 == func_128(true))
		num = 1;
	else if (hParam0 == -536105557)
		if (!*Global_262145.f_35463 && cloudTimeAsInt < *Global_262145.f_35450)
			num = 0;
	else if (hParam0 == 1447690049)
		if (!*Global_262145.f_35466 && cloudTimeAsInt < *Global_262145.f_35453)
			num = 0;
	else if (hParam0 == 165968051)
		if (!*Global_262145.f_35469 && cloudTimeAsInt < *Global_262145.f_35456)
			num = 0;
	else if (hParam0 == 191916658)
		if (!*Global_262145.f_35467 && cloudTimeAsInt < *Global_262145.f_35454)
			num = 0;
	else if (hParam0 == 802856453)
		if (!*Global_262145.f_35464 && cloudTimeAsInt < *Global_262145.f_35451)
			num = 0;
	else if (hParam0 == 610429990)
		if (!*Global_262145.f_35471 && cloudTimeAsInt < *Global_262145.f_35458)
			num = 0;
	else if (hParam0 == 239897677)
		if (!*Global_262145.f_35468 && cloudTimeAsInt < *Global_262145.f_35455)
			num = 0;
	else if (hParam0 == -897824023)
		if (!*Global_262145.f_35470 && cloudTimeAsInt < *Global_262145.f_35457)
			num = 0;
	else if (hParam0 == -1983622024)
		if (!*Global_262145.f_35470 && cloudTimeAsInt < *Global_262145.f_35457)
			num = 0;

	return num;
}

Hash func_128(BOOL bParam0) // Position - 0xB8B9
{
	if (bParam0)
		return -426933872;

	return joaat("avenger");
}

BOOL IS_PLAYSTATION_PLATFORM() // Position - 0xB8D3
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

BOOL IS_XBOX_PLATFORM() // Position - 0xB8E9
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

BOOL func_131() // Position - 0xB8FF
{
	return false;
}

BOOL func_132() // Position - 0xB908
{
	return true;
}

BOOL func_133() // Position - 0xB911
{
	return true;
}

BOOL func_134() // Position - 0xB91A
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
		return true;

	return false;
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0xB933
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

BOOL func_136(Vehicle veParam0) // Position - 0xB9EB
{
	Hash entityModel;
	const char* vehicleNumberPlateText;

	entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);
	vehicleNumberPlateText = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0);

	if (entityModel == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(vehicleNumberPlateText, "LAMAR G "))
		return true;

	if (!func_124(entityModel, false, -1))
		return true;

	return false;
}

BOOL func_137(Vehicle veParam0) // Position - 0xBA32
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

BOOL func_138(Vehicle veParam0) // Position - 0xBA6D
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

BOOL func_139(Vehicle veParam0) // Position - 0xBAE9
{
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[24]))
		if (veParam0 == Global_77479.f_484[24])
			return false;

	for (i = 0; i < 68; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[i]))
			if (i != 24 && i != 21 && i != 22 && i != 23 && i != 27 && i != 30 && i != 33 && i != 28 && i != 31 && i != 34 && i != 26 && i != 29 && i != 32)
				if (veParam0 == Global_77479.f_484[i])
					return true;
	}

	return false;
}

int func_140(Vehicle veParam0) // Position - 0xBBD1
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return 145;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return 145;

	for (i = 0; i < 9; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98144[i]))
			if (Global_98144[i] == veParam0)
				return Global_98154[i];
	}

	return 145;
}

BOOL func_141(Vehicle veParam0, int iParam1, BOOL bParam2) // Position - 0xBC34
{
	int i;
	var garageName;
	int unk;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return false;

	for (i = 0; func_142(iParam1, i, &garageName, &num); i = i + 1)
	{
		if (!bParam2 || IS_BIT_SET(Global_113810.f_7232[num], 0))
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&garageName, veParam0))
				return true;
	}

	return false;
}

BOOL func_142(int iParam0, int iParam1, char* sParam2, var uParam3) // Position - 0xBCA2
{
	TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);

	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return true;
			}
			break;
	
		case 1:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return true;
			}
			break;
	
		case 2:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return true;
			}
			break;
	}

	return false;
}

void func_143(int iParam0) // Position - 0xBD7A
{
	Global_112519.f_22 = iParam0;
	return;
}

