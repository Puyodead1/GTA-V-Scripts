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
	char* sLocal_18 = 0;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
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
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
		func_33();

	if (func_32())
		iLocal_26 = 1;

	while (true)
	{
		switch (iLocal_26)
		{
			case 0:
				if (func_10())
					iLocal_26 = 1;
				break;
		
			case 1:
				if (func_1())
					func_33();
				break;
		}
	
		SYSTEM::WAIT(1000);
	}

	return;
}

BOOL func_1() // Position - 0x9D
{
	switch (func_8("BLIMP_UNLOCK" /*The Blimp has now been unlocked. Call the Blimp contact on your cellphone to arrange for a Blimp to be delivered to the nearest available drop-off location.*/))
	{
		case 2:
			func_5("BLIMP_UNLOCK" /*The Blimp has now been unlocked. Call the Blimp contact on your cellphone to arrange for a Blimp to be delivered to the nearest available drop-off location.*/, 1, 0, 1000, 10000, 7, 0, 0, 0);
			break;
	
		case 1:
			func_4(57);
			func_2();
			return true;
	
		case 0:
			break;
	}

	return false;
}

int func_2() // Position - 0xED
{
	if (_IS_MISSION_REPEAT_ACTIVE(false))
		return 0;

	if (Global_100872.f_8)
		if (Global_100872.f_10 > 0)
			return 0;
	else if (Global_100872.f_10 > 1)
		return 0;

	Global_100872.f_10 = Global_100872.f_10 + 1;
	return 1;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x138
{
	if (!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_78938, 0);
}

void func_4(int iParam0) // Position - 0x160
{
	int offset;
	int i;

	offset = iParam0;

	for (i = 0; offset > 31; i = i + 1)
	{
		offset = offset - 32;
	}

	if (i < 3)
		MISC::SET_BIT(&G_MissionStats.f_20413.f_150[i], offset);

	return;
}

void func_5(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x1A2
{
	func_6(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_6(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x1C3
{
	int i;

	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
		return;

	if (iParam3 < 0)
		return;

	if (iParam5 < 500 && iParam5 != -1)
		return;

	if (iParam4 < 0 && iParam4 != -1)
		return;

	if (iParam6 < 1 || iParam6 > 7)
		return;

	if (iParam7 == 235)
		return;

	if (iParam8 == 235)
		return;

	for (i = 0; i < G_MissionStats.f_20413.f_145; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&G_MissionStats.f_20413[i], sParam0))
			return;
	}

	if (G_MissionStats.f_20413.f_145 < 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&G_MissionStats.f_20413[G_MissionStats.f_20413.f_145], sParam0, 16);
		TEXT_LABEL_ASSIGN_STRING(&(G_MissionStats.f_20413[G_MissionStats.f_20413.f_145].f_4), sParam1, 16);
		G_MissionStats.f_20413[G_MissionStats.f_20413.f_145].f_8 = MISC::GET_GAME_TIMER() + iParam3;
		G_MissionStats.f_20413[G_MissionStats.f_20413.f_145].f_9 = iParam5;
		G_MissionStats.f_20413[G_MissionStats.f_20413.f_145].f_11 = iParam6;
		G_MissionStats.f_20413[G_MissionStats.f_20413.f_145].f_12 = iParam2;
		G_MissionStats.f_20413[G_MissionStats.f_20413.f_145].f_13 = iParam7;
		G_MissionStats.f_20413[G_MissionStats.f_20413.f_145].f_14 = iParam8;
		G_MissionStats.f_20413[G_MissionStats.f_20413.f_145].f_15 = iParam9;
	
		if (iParam4 != -1)
			G_MissionStats.f_20413[G_MissionStats.f_20413.f_145].f_10 = MISC::GET_GAME_TIMER() + iParam3 + iParam4;
		else
			G_MissionStats.f_20413[G_MissionStats.f_20413.f_145].f_10 = -1;
	
		G_MissionStats.f_20413.f_145 = G_MissionStats.f_20413.f_145 + 1;
		func_7();
	}

	return;
}

void func_7() // Position - 0x396
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		G_MissionStats.f_20413.f_146[i] = 0;
	}

	for (i = 0; i < G_MissionStats.f_20413.f_145; i = i + 1)
	{
		if (IS_BIT_SET(G_MissionStats.f_20413[i].f_11, 0))
			if (G_MissionStats.f_20413[i].f_12 > G_MissionStats.f_20413.f_146[0])
				G_MissionStats.f_20413.f_146[0] = G_MissionStats.f_20413[i].f_12;
	
		if (IS_BIT_SET(G_MissionStats.f_20413[i].f_11, 1))
			if (G_MissionStats.f_20413[i].f_12 > G_MissionStats.f_20413.f_146[1])
				G_MissionStats.f_20413.f_146[1] = G_MissionStats.f_20413[i].f_12;
	
		if (IS_BIT_SET(G_MissionStats.f_20413[i].f_11, 2))
			if (G_MissionStats.f_20413[i].f_12 > G_MissionStats.f_20413.f_146[2])
				G_MissionStats.f_20413.f_146[2] = G_MissionStats.f_20413[i].f_12;
	}

	return;
}

int func_8(char* sParam0) // Position - 0x4AD
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_112452))
		return 1;

	if (func_9(sParam0))
		return 0;

	return 2;
}

BOOL func_9(char* sParam0) // Position - 0x4D4
{
	int i;

	for (i = 0; i < G_MissionStats.f_20413.f_145; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &G_MissionStats.f_20413[i]))
			return true;
	}

	return false;
}

BOOL func_10() // Position - 0x50F
{
	if (func_31() || func_30() || func_29() || func_28() || _IS_EXCLUSIVE_CONTENT_UNLOCKED())
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (func_26(0))
			{
				func_11(48, 4, false);
				func_2();
				return true;
			}
		}
	}

	return false;
}

void func_11(eCharacter echParam0, eCharacter echParam1, BOOL bParam2) // Position - 0x582
{
	int num;

	Global_9056 = echParam0;

	if (Global_117[echParam0].f_8 != 172)
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		if (echParam1 == 4)
		{
			func_17(echParam0, 0, 1);
			func_17(echParam0, 1, 1);
			func_17(echParam0, 2, 1);
			func_16(echParam0, 0, 1);
			func_16(echParam0, 1, 1);
			func_16(echParam0, 2, 1);
		}
		else
		{
			if (func_15(echParam0, echParam1) == 1 && func_14(echParam0, echParam1) == 1)
				bParam2 = false;
		
			num = echParam1;
			func_17(echParam0, num, 1);
			func_16(echParam0, num, 1);
		
			if (echParam0 == CHAR_SESSANTA && !IS_BIT_SET(Global_2794162.f_6892, 4))
				bParam2 = false;
		
			if (echParam0 == CHAR_ISLDJ4 && !IS_BIT_SET(Global_2794162.f_6892, 3))
				bParam2 = false;
		
			if (echParam0 == CHAR_KDJ && !IS_BIT_SET(Global_2794162.f_6892, 3))
				bParam2 = false;
		}
	
		if (bParam2)
		{
			if (!Global_78689)
			{
				if (echParam1 != 4)
				{
					if (Global_20500 != echParam1)
					{
						Global_9029[echParam1] = { _GET_CHARACTER_NAME(echParam0) };
						Global_9046[echParam1] = 1;
						Global_9051[echParam1] = echParam0;
					}
					else if (echParam0 == Global_20500)
					{
					}
					else
					{
						Global_8980[1] = { _GET_CHARACTER_NAME(echParam0) };
						Global_8980[1].f_5 = echParam1;
						func_12();
					}
				}
				else
				{
					Global_8980[1] = { _GET_CHARACTER_NAME(echParam0) };
					Global_8980[1].f_5 = echParam1;
					func_12();
				}
			}
			else
			{
				Global_8980[1] = { _GET_CHARACTER_NAME(echParam0) };
				Global_8980[1].f_5 = echParam1;
				func_12();
			}
		}
	}

	return;
}

void func_12() // Position - 0x700
{
	var txdName;
	var unk;
	const char* unk2;

	TEXT_LABEL_ASSIGN_STRING(&txdName, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[Global_9056].f_7)), 64);

	if (Global_9075 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		TEXT_LABEL_ASSIGN_STRING(&subject, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_8980[1]), 64);
		filenameForAudioConversation = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_253" /*New Contact*/);
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, false, 3, filenameForAudioConversation, &subject);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255" /*New Contact: ~n~~a~*/);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_8980[1]);
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, false, 3, "", 0);
	}

	MISC::CLEAR_BIT(&Global_8370, 0);
	return;
}

struct<4> _GET_CHARACTER_NAME(eCharacter character) // Position - 0x779
{
	return Global_2058[character].f_3;
}

int func_14(eCharacter echParam0, int iParam1) // Position - 0x78C
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2058[echParam0].f_24[iParam1];
}

int func_15(eCharacter echParam0, int iParam1) // Position - 0x7B6
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2058[echParam0].f_12[iParam1];
}

void func_16(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x7E0
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2058[echParam0].f_24[iParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		G_MissionStats.f_28053[echParam0].f_24[iParam1] = iParam2;

	return;
}

void func_17(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x825
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2058[echParam0].f_12[iParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		G_MissionStats.f_28053[echParam0].f_12[iParam1] = iParam2;

	return;
}

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x86A
{
	if (func_25(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == G_MissionStats.f_28053[0])
				Global_20500 = CHAR_MICHAEL;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == G_MissionStats.f_28053[1])
				Global_20500 = CHAR_FRANKLIN;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == G_MissionStats.f_28053[2])
				Global_20500 = CHAR_TREVOR;
			else
				Global_20500 = CHAR_MICHAEL;
	}
	else
	{
		Global_20500 = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (Global_20500 == _CHAR_NULL)
			Global_20500 = CHAR_MULTIPLAYER;
	
		if (Global_78689)
			Global_20500 = CHAR_MULTIPLAYER;
	
		if (Global_20500 > CHAR_MULTIPLAYER)
			Global_20500 = CHAR_MULTIPLAYER;
	}

	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x90C
{
	func_20();
	return G_MissionStats.f_2366.f_539.f_4321;
}

void func_20() // Position - 0x925
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(G_MissionStats.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_21(character) && !func_25(14) || Global_112760)
			{
				if (G_MissionStats.f_2366.f_539.f_4321 != character && func_21(G_MissionStats.f_2366.f_539.f_4321))
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

BOOL func_21(eCharacter echParam0) // Position - 0xA22
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0xA2E
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0xA6B
{
	if (func_21(character))
		return func_24(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_24(eCharacter echParam0) // Position - 0xA90
{
	return Global_2058[echParam0];
}

BOOL func_25(int iParam0) // Position - 0xA9F
{
	return Global_43377 == iParam0;
}

BOOL func_26(int iParam0) // Position - 0xAAD
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return G_MissionStats.f_9088.f_330[iParam0];
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0xAD9
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

BOOL func_28() // Position - 0xB91
{
	return false;
}

BOOL func_29() // Position - 0xB9A
{
	return true;
}

int func_30() // Position - 0xBA3
{
	return 1;
}

int func_31() // Position - 0xBAC
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
		return 1;

	return 0;
}

BOOL func_32() // Position - 0xBC5
{
	if (func_15(48, 0) == 1 && func_15(48, 1) == 1 && func_15(48, 2) == 1)
		if (func_31() || func_30() || func_29() || func_28() || _IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return true;

	return false;
}

void func_33() // Position - 0xC29
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

