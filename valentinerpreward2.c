#region Local Var
	char* sLocal_0 = 0;
	BOOL bLocal_1 = 0;
	int iLocal_2 = 0;
	BOOL bLocal_3 = 0;
	BOOL bLocal_4 = 0;
	Object obLocal_5 = 0;
	BOOL bLocal_6 = 0;
	BOOL bLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	int iLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	BOOL bLocal_28 = 0;
	BOOL bLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	BOOL bLocal_44 = 0;
	BOOL bLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	BOOL bLocal_48 = 0;
	var uLocal_49 = 3;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	BOOL bLocal_55 = 0;
	var uScriptParam_56 = 0;
	var uScriptParam_57 = 0;
#endregion

void main() // Position - 0x0
{
	int num;

	sLocal_0 = "1.67.01";
	iLocal_20 = -1;
	iLocal_21 = -1;
	iLocal_24 = 10000;
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	uScriptParam_56 == uScriptParam_56;
	Global_1578010 = MISC::GET_HASH_KEY(sLocal_0);
	num = MISC::GET_GAME_TIMER() + 10000;

	while (MISC::GET_GAME_TIMER() < num)
	{
		SYSTEM::WAIT(0);
	}

	func_145();

	while (true)
	{
		if (IS_ROCKSTAR_DEV())
			func_142();
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2692776.f_3)
		{
			func_141();
			func_140();
			func_137();
			func_135();
			func_134();
			func_131();
			func_124();
			func_116();
			func_108();
			func_103();
			func_92();
			func_84();
			func_83();
			func_78();
			func_61();
			func_56();
			func_15();
		}
	
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_14();
			func_13();
			func_2();
			func_1();
		}
	
		SYSTEM::WAIT(0);
	}

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0xD7
{
	if (*Global_4718592.f_117591 != Global_262145.f_33923[2])
		return;

	if (Global_4718592.f_1816[0].f_17130[4] == 0)
		return;

	if (IS_BIT_SET(Global_2684820.f_3883, 0) && IS_BIT_SET(Global_1574942, 4))
		Global_4718592.f_1816[0].f_17130[4] = 0;

	return;
}

void func_2() // Position - 0x13C
{
	Vehicle vehicle;
	int num;
	int cutsceneEndTime;
	int cutsceneTime;

	if (Global_262145.f_33952[10] != *Global_4718592.f_117591 || Global_1574964 || !Global_1574965)
	{
		func_12();
		return;
	}

	MISC::CLEAR_BIT(&(Global_4718592.f_161355[1].f_18), 7);
	MISC::CLEAR_BIT(&(Global_4718592.f_161355[1].f_18), 29);
	Global_4980736.f_110349[42].f_944[0] = 3;
	Global_4980736.f_110349[58].f_944[0] = 3;

	if (Global_1058071.f_14[0] > 7 || Global_1058071.f_14[0] < 6)
	{
		func_11(&uLocal_49);
		return;
	}

	vehicle = func_9(&uLocal_49);
	num = 600;

	if (ENTITY::DOES_ENTITY_EXIST(vehicle))
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vehicle))
			num = 900;

	func_8(vehicle);

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		cutsceneEndTime = CUTSCENE::GET_CUTSCENE_END_TIME();
		cutsceneTime = CUTSCENE::GET_CUTSCENE_TIME();
	
		if (cutsceneTime >= cutsceneEndTime - 300 && !_STOPWATCH_IS_INITIALIZED(&uLocal_53))
		{
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
			_STOPWATCH_INITIALIZE(&uLocal_53, false, false);
		}
	}
	else if (_STOPWATCH_IS_INITIALIZED(&uLocal_53) && func_5(uLocal_53, num, false))
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
		_STOPWATCH_DESTROY(&uLocal_53);
		bLocal_48 = true;
		func_3(vehicle);
	}

	return;
}

void func_3(Vehicle veParam0) // Position - 0x298
{
	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return;

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veParam0))
		return;

	VEHICLE::SET_VEHICLE_ENGINE_ON(veParam0, true, true, false);
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(veParam0);
	VEHICLE::SET_VEHICLE_LIMIT_SPEED_WHEN_PLAYER_INACTIVE(veParam0, false);
	VEHICLE::SET_VEHICLE_STOP_INSTANTLY_WHEN_PLAYER_INACTIVE(veParam0, false);
	VEHICLE::SET_VEHICLE_HANDBRAKE(veParam0, false);
	ENTITY::FREEZE_ENTITY_POSITION(veParam0, false);
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(veParam0, 30f);
	return;
}

void _STOPWATCH_DESTROY(var uParam0) // Position - 0x2F0
{
	uParam0->f_1 = 0;
	return;
}

BOOL func_5(int iParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x2FD
{
	if (iParam2 == -1)
		return 1;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam0)) >= iParam2)
			return 1;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), iParam0)) >= iParam2)
		return 1;

	return 0;
}

void _STOPWATCH_INITIALIZE(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x350
{
	if (pStopwatch->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
			if (!useAccurateTime)
				*pStopwatch = NETWORK::GET_NETWORK_TIME();
			else
				*pStopwatch = NETWORK::GET_NETWORK_TIME_ACCURATE();
		else
			*pStopwatch = MISC::GET_GAME_TIMER();
	
		pStopwatch->f_1 = 1;
	}

	return;
}

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0x395
{
	return uParam0->f_1;
}

void func_8(Vehicle veParam0) // Position - 0x3A1
{
	if (bLocal_48)
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return;

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veParam0))
		return;

	ENTITY::SET_ENTITY_VELOCITY(veParam0, 0f, 0f, 0f);
	return;
}

Vehicle func_9(var uParam0) // Position - 0x3D4
{
	int i;

	for (i = 0; i <= Global_1058071.f_268 - 1; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1058071.f_233[i]))
		{
		}
		else if (ENTITY::GET_ENTITY_MODEL(Global_1058071.f_233[i]) != -1958189855)
		{
		}
		else if (func_10(uParam0, Global_1058071.f_233[i]))
		{
		}
		else
		{
			return Global_1058071.f_233[i];
		}
	}

	return 0;
}

BOOL func_10(var uParam0, Entity eParam1) // Position - 0x448
{
	int i;

	for (i = 0; i <= 2; i = i + 1)
	{
		if (eParam1 == uParam0->[i])
			return true;
	}

	return false;
}

void func_11(var uParam0) // Position - 0x472
{
	int i;
	int j;

	for (i = 0; i <= Global_1058071.f_268 - 1; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1058071.f_233[i]))
		{
		}
		else if (ENTITY::GET_ENTITY_MODEL(Global_1058071.f_233[i]) != -1958189855)
		{
		}
		else if (func_10(uParam0, Global_1058071.f_233[i]))
		{
		}
		else
		{
			for (j = 0; j <= 2; j = j + 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->[j]))
				{
				}
				else
				{
					uParam0->[j] = Global_1058071.f_233[i];
					break;
				}
			}
		}
	}

	return;
}

void func_12() // Position - 0x50D
{
	int i;

	_STOPWATCH_DESTROY(&uLocal_53);
	bLocal_48 = false;

	for (i = 0; i <= 2; i = i + 1)
	{
		uLocal_49[i] = 0;
	}

	return;
}

void func_13() // Position - 0x537
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) >= 1)
		return;

	Global_2635560.f_2978;
	Global_2635560.f_2978 = 0;
	return;
}

void func_14() // Position - 0x561
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) != 0 && Global_262145.f_33952[8] != *Global_4718592.f_117591 && !(Global_1574964 || Global_1574965))
		MISC::SET_BIT(&Global_1574994, 29);

	return;
}

void func_15() // Position - 0x5B2
{
	var unk;
	var unk2;
	var unk3;

	if (Global_2766625 || _NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true) && func_53() && !bLocal_55)
	{
		bLocal_55 = true;
		TEXT_LABEL_ASSIGN_STRING(&unk, "&#166;", 16);
		TEXT_LABEL_ASSIGN_STRING(&unk5, "&#8249;", 16);
	
		if (_IS_PLAYER_BOSS_OF_ORGANIZATION(PLAYER::PLAYER_ID()))
		{
			unk9 = { func_48() };
		
			if (func_47(&unk9, unk) || func_47(&unk9, unk5))
			{
				if (func_46(PLAYER::PLAYER_ID()))
					func_32(&unk9, 0, true);
				else
					func_32(&unk9, 1, true);
			
				func_30();
			}
		}
	
		if (func_29(PLAYER::PLAYER_ID()))
		{
			TEXT_LABEL_ASSIGN_STRING(&unk9, func_21(PLAYER::PLAYER_ID()), 64);
		
			if (func_47(&unk9, unk) || func_47(&unk9, unk5))
				func_16(unk9);
		}
	}

	return;
}

void func_16(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x683
{
	func_17(55, 56, &uParam0, -1, true);
	Global_1914706[PLAYER::PLAYER_ID()].f_283 = { uParam0 };
	return;
}

void func_17(int iParam0, int iParam1, const char* sParam2, int iParam3, BOOL bParam4) // Position - 0x6AC
{
	Hash statName;
	Hash statName2;
	var value;
	var unk;
	int unk2;
	int unk3;

	statName = func_18(iParam0, iParam3);
	statName2 = func_18(iParam1, iParam3);

	if (statName != 0 && statName2 != 0)
	{
		TEXT_LABEL_ASSIGN_STRING(&value, "", 32);
		TEXT_LABEL_ASSIGN_STRING(&value2, "", 32);
		lengthOfLiteralString = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam2);
	
		if (lengthOfLiteralString > 0)
		{
			length = 10;
		
			if (lengthOfLiteralString < 10)
				length = lengthOfLiteralString;
		
			TEXT_LABEL_ASSIGN_STRING(&value, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_WITH_BYTE_LIMIT(sParam2, 0, length, 31), 32);
		
			if (lengthOfLiteralString > 10)
				TEXT_LABEL_ASSIGN_STRING(&value2, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_WITH_BYTE_LIMIT(sParam2, 10, lengthOfLiteralString, 31), 32);
		}
	
		STATS::STAT_SET_STRING(statName, &value, bParam4);
		STATS::STAT_SET_STRING(statName2, &value2, bParam4);
	}

	return;
}

Hash func_18(int iParam0, int iParam1) // Position - 0x73F
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(3, iParam0, func_19(iParam1));
}

int func_19(int iParam0) // Position - 0x754
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_20();
	
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

int func_20() // Position - 0x788
{
	return Global_1574918;
}

const char* func_21(Player plParam0) // Position - 0x794
{
	const char* filenameForAudioConversation;
	Player player;

	filenameForAudioConversation = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("DEFAULT_LAB_N" /*Acid Lab*/);

	if (plParam0 == _INVALID_PLAYER_INDEX())
		return filenameForAudioConversation;

	if (plParam0 == PLAYER::PLAYER_ID())
	{
		filenameForAudioConversation = func_27(&(Global_1914706[plParam0].f_283));
		return filenameForAudioConversation;
	}

	if (Global_1895156[plParam0].f_10.f_121 != Global_1895156[PLAYER::PLAYER_ID()].f_10.f_121)
		return filenameForAudioConversation;

	if (func_26(plParam0, 28) || func_26(PLAYER::PLAYER_ID(), 28) && !func_24(plParam0))
		return filenameForAudioConversation;

	player = func_23(plParam0);

	if (player != _INVALID_PLAYER_INDEX())
		if (player != PLAYER::PLAYER_ID())
			if (!IS_XBOX_PLATFORM() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
				return filenameForAudioConversation;

	if (player != _INVALID_PLAYER_INDEX())
	{
		filenameForAudioConversation = func_27(&(Global_1914706[player].f_283));
	
		if (MISC::IS_STRING_NULL_OR_EMPTY(filenameForAudioConversation))
			return filenameForAudioConversation;
		else
			return filenameForAudioConversation;
	}

	return filenameForAudioConversation;
}

BOOL IS_XBOX_PLATFORM() // Position - 0x88A
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

Player func_23(Player plParam0) // Position - 0x8A0
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return Global_1895156[plParam0].f_10;

	return _INVALID_PLAYER_INDEX();
}

BOOL func_24(Player plParam0) // Position - 0x8C3
{
	var gamerHandle;

	gamerHandle = { GET_GAMER_HANDLE_PLAYER(plParam0) };

	if (IS_XBOX_PLATFORM())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;
		else if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&gamerHandle))
				return true;

	return false;
}

struct<13> GET_GAMER_HANDLE_PLAYER(Player plParam0) // Position - 0x903
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle, 13);
	return gamerHandle;
}

BOOL func_26(Player plParam0, int iParam1) // Position - 0x91A
{
	return IS_BIT_SET(Global_1895156[plParam0].f_10.f_4, iParam1);
}

const char* func_27(var uParam0) // Position - 0x932
{
	return uParam0;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x93C
{
	return -1;
}

BOOL func_29(Player plParam0) // Position - 0x945
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return false;

	return IS_BIT_SET(Global_1853988[plParam0].f_267.f_479, 14);
}

void func_30() // Position - 0x96C
{
	int i;
	struct<2> eventData;

	eventData = 2103624094;
	eventData.f_1 = PLAYER::PLAYER_ID();

	for (i = 0; i < 7; i = i + 1)
	{
		if (Global_1895156[PLAYER::PLAYER_ID()].f_10.f_11[i] != _INVALID_PLAYER_INDEX())
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1895156[PLAYER::PLAYER_ID()].f_10.f_11[i]))
				SCRIPT::SEND_TU_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &eventData, 2, _GET_PLAYER_SCRIPT_EVENT_BITS(Global_1895156[PLAYER::PLAYER_ID()].f_10.f_11[i]));
	}

	return;
}

int _GET_PLAYER_SCRIPT_EVENT_BITS(Player plParam0) // Position - 0x9EE
{
	int address;

	if (plParam0 != -1)
		MISC::SET_BIT(&address, plParam0);

	return address;
}

void func_32(const char* sParam0, int iParam1, BOOL bParam2) // Position - 0xA06
{
	if (bParam2)
	{
		if (func_42(true) || iParam1 == 0)
		{
			func_17(47, 48, sParam0, -1, true);
		
			if (func_41() && iParam1 == 0)
				func_40(sParam0, bParam2);
		}
		else
		{
			func_17(119, 121, sParam0, -1, true);
		
			if (func_39() && iParam1 == 1)
				func_37(sParam0, bParam2);
		}
	}

	TEXT_LABEL_ASSIGN_STRING(&(Global_1895156[PLAYER::PLAYER_ID()].f_10.f_105), sParam0, 64);
	Global_1895156[PLAYER::PLAYER_ID()].f_10.f_121 = LOCALIZATION::LOCALIZATION_GET_SYSTEM_LANGUAGE();

	if (!IS_XBOX_PLATFORM() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_35())
		func_34(28);
	else
		func_33(28);

	return;
}

void func_33(int iParam0) // Position - 0xAC1
{
	MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID()].f_10.f_4), iParam0);
	return;
}

void func_34(int iParam0) // Position - 0xADE
{
	MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID()].f_10.f_4), iParam0);
	return;
}

BOOL func_35() // Position - 0xAFB
{
	if (NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV() == false)
		return false;

	if (IS_PLAYSTATION_PLATFORM())
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1))
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
				return true;
	else if (IS_XBOX_PLATFORM())
		if (NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -3, true))
			return true;
	else if (MISC::IS_PC_VERSION())
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1))
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
				return true;

	return false;
}

BOOL IS_PLAYSTATION_PLATFORM() // Position - 0xB62
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

void func_37(const char* sParam0, BOOL bParam1) // Position - 0xB78
{
	var unk;

	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			func_17(45, 46, sParam0, -1, true);
			unk = { func_38(119, 121, -1) };
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
				func_17(119, 121, sParam0, -1, true);
		}
	}

	if (!IS_XBOX_PLATFORM() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_35())
		func_34(28);
	else
		func_33(28);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		TEXT_LABEL_ASSIGN_STRING(&(Global_1895156[PLAYER::PLAYER_ID()].f_10.f_339), sParam0, 64);

	return;
}

struct<16> func_38(int iParam0, int iParam1, int iParam2) // Position - 0xC06
{
	Hash statHash;
	Hash statHash2;
	var unk;
	var unk2;

	statHash = func_18(iParam0, iParam2);
	statHash2 = func_18(iParam1, iParam2);
	TEXT_LABEL_ASSIGN_STRING(&unk, STATS::STAT_GET_STRING(statHash, -1), 64);
	TEXT_LABEL_ASSIGN_STRING(&unk17, STATS::STAT_GET_STRING(statHash2, -1), 32);
	TEXT_LABEL_APPEND_STRING(&unk, &unk17, 64);
	return unk;
}

BOOL func_39() // Position - 0xC43
{
	return _IS_PLAYER_BOSS_OF_ORGANIZATION(PLAYER::PLAYER_ID());
}

void func_40(const char* sParam0, BOOL bParam1) // Position - 0xC53
{
	if (bParam1)
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
			func_17(49, 50, sParam0, -1, true);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		TEXT_LABEL_ASSIGN_STRING(&(Global_1895156[PLAYER::PLAYER_ID()].f_10.f_355), sParam0, 64);

	if (!IS_XBOX_PLATFORM() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_35())
		func_34(28);
	else
		func_33(28);

	return;
}

BOOL func_41() // Position - 0xCC0
{
	return func_46(PLAYER::PLAYER_ID());
}

BOOL func_42(BOOL bParam0) // Position - 0xCD0
{
	return func_43(PLAYER::PLAYER_ID(), bParam0);
}

BOOL func_43(Player plParam0, BOOL bParam1) // Position - 0xCE2
{
	return func_44(plParam0, bParam1, 1);
}

BOOL func_44(Player plParam0, BOOL bParam1, int iParam2) // Position - 0xCF3
{
	Player player;

	if (plParam0 == _INVALID_PLAYER_INDEX())
		return 0;

	if (!bParam1)
		if (func_45(plParam0, iParam2))
			return 0;

	player = Global_1895156[plParam0].f_10;

	if (player != _INVALID_PLAYER_INDEX() && Global_1895156[player].f_10.f_429 == iParam2)
		return 1;

	return 0;
}

BOOL func_45(Player plParam0, int iParam1) // Position - 0xD4F
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (Global_1895156[plParam0].f_10 != _INVALID_PLAYER_INDEX())
			if (Global_1895156[plParam0].f_10 == plParam0 && Global_1895156[plParam0].f_10.f_429 == iParam1)
				return true;

	return false;
}

BOOL func_46(Player plParam0) // Position - 0xD9E
{
	return func_45(plParam0, 1);
}

int func_47(const char* sParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0xDAD
{
	int num;
	int length;
	int position;
	Hash hashKey;
	int lengthOfLiteralString;
	int lengthOfLiteralString2;
	int i;
	var unk;

	num = 0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		hashKey = MISC::GET_HASH_KEY(&uParam1);
		lengthOfLiteralString = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
		lengthOfLiteralString2 = HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam1);
	
		for (i = 0; i <= lengthOfLiteralString - 1; i = i + 1)
		{
			if (i + lengthOfLiteralString2 > lengthOfLiteralString)
			{
				return 0;
			}
			else if (MISC::GET_HASH_KEY(HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, i, i + lengthOfLiteralString2)) == hashKey)
			{
				length = i;
				position = i + lengthOfLiteralString2;
				num = 1;
				break;
			}
		}
	
		if (i != 0)
			TEXT_LABEL_APPEND_STRING(&unk, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, 0, length), 64);
	
		if (i != lengthOfLiteralString - lengthOfLiteralString2)
			TEXT_LABEL_APPEND_STRING(&unk, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, position, HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0)), 64);
	
		*sParam0 = { unk };
	}

	return num;
}

struct<16> func_48() // Position - 0xE62
{
	Player player;
	var unk;

	player = func_23(PLAYER::PLAYER_ID());

	if (player != _INVALID_PLAYER_INDEX())
	{
		if (player != PLAYER::PLAYER_ID())
		{
			if (func_26(player, 28) || func_26(PLAYER::PLAYER_ID(), 28) || func_51(player) && !func_24(player))
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, func_49(player, false), 64);
				return unk;
			}
		
			if (!IS_XBOX_PLATFORM() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, func_49(player, false), 64);
				return unk;
			}
		}
	
		return Global_1895156[player].f_10.f_105;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
	return unk;
}

const char* func_49(Player plParam0, BOOL bParam1) // Position - 0xF13
{
	if (!bParam1)
		if (func_43(plParam0, true))
			return func_50();

	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC" /*An Organization*/);
}

const char* func_50() // Position - 0xF39
{
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACCM" /*Motorcycle Club*/);
}

BOOL func_51(Player plParam0) // Position - 0xF48
{
	var gamerHandle;

	if (plParam0 != _INVALID_PLAYER_INDEX())
	{
		gamerHandle = { GET_GAMER_HANDLE_PLAYER(plParam0) };
	
		if (MISC::IS_ORBIS_VERSION() && !MISC::IS_PROSPERO_VERSION() || MISC::IS_PC_VERSION())
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
				return false;
		else if (IS_XBOX_PLATFORM() || MISC::IS_PROSPERO_VERSION())
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
				if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&gamerHandle))
					return false;
	}

	return true;
}

BOOL _IS_PLAYER_BOSS_OF_ORGANIZATION(Player plParam0) // Position - 0xFB5
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (Global_1895156[plParam0].f_10 != _INVALID_PLAYER_INDEX())
			return Global_1895156[plParam0].f_10 == plParam0;

	return false;
}

BOOL func_53() // Position - 0xFEA
{
	if (func_54() == 0)
		return true;

	return false;
}

int func_54() // Position - 0xFFF
{
	return Global_1574632.f_18;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x100D
{
	Player player;

	player = player;

	if (player != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
			if (bIsPlaying)
				if (!PLAYER::IS_PLAYER_PLAYING(player))
					return 0;
		
			if (bUnk)
				if (player == Global_2672524.f_3)
					return Global_2672524.f_2;
				else if (Global_2657704[player] != 4)
					return 0;
		
			return 1;
		}
	}

	return 0;
}

void func_56() // Position - 0x106D
{
	if (func_60() == 3 && func_59() && _IS_FMMC_ACTIVE() && func_57(*Global_4718592.f_117591))
		NETWORK::NETWORK_BAIL(51, 0, 0);

	return;
}

BOOL func_57(int iParam0) // Position - 0x10AB
{
	int i;

	if (iParam0 == 0)
		return false;

	for (i = 0; i < 8; i = i + 1)
	{
		if (Global_262145.f_31258[i] == iParam0)
			return true;
	}

	return false;
}

BOOL _IS_FMMC_ACTIVE() // Position - 0x10E5
{
	return Global_1853988[PLAYER::PLAYER_ID()].f_192 != 0;
}

BOOL func_59() // Position - 0x10FC
{
	return IS_BIT_SET(Global_2684820.f_1.f_2809, 5);
}

int func_60() // Position - 0x110F
{
	return Global_1057409;
}

void func_61() // Position - 0x111B
{
	Hash model;
	int num;
	int data;
	float unk;
	float unk2;
	Vector3 unk3;

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_14))
	{
		MISC::SET_BIT(&Global_8371, 2);
	
		if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_14, 60000, false))
		{
			_STOPWATCH_RESET(&uLocal_14, false, false);
			_STOPWATCH_DESTROY(&uLocal_14);
		}
	}

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_12) && _STOPWATCH_HAS_TIME_PASSED(&uLocal_12, 1000, false))
	{
		if (iLocal_21 == -1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_21 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_21, "05", PLAYER::PLAYER_PED_ID(), "DLC_GR_CS2_Sounds", false, 0);
			}
		}
		else if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_12, 4000, false))
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_21))
				AUDIO::STOP_SOUND(iLocal_21);
		
			AUDIO::RELEASE_SOUND_ID(iLocal_21);
			iLocal_21 = -1;
			AUDIO::STOP_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
			_STOPWATCH_RESET(&uLocal_12, false, false);
			_STOPWATCH_DESTROY(&uLocal_12);
		}
	}

	if (!bLocal_6 && !func_71())
		return;

	bLocal_6 = true;
	MISC::SET_BIT(&Global_8371, 2);

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_5))
	{
		model = joaat("imp_prop_ship_01a");
		STREAMING::REQUEST_MODEL(model);
	
		if (STREAMING::HAS_MODEL_LOADED(model))
		{
			obLocal_5 = OBJECT::CREATE_OBJECT_NO_OFFSET(model, 360.8759f, 5623.4272f, 780.1747f, false, false, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			ENTITY::FREEZE_ENTITY_POSITION(obLocal_5, true);
			ENTITY::SET_ENTITY_LOD_DIST(obLocal_5, 8000);
			num = func_70(7869, -1);
			func_68(7869, num + 1, -1, true);
			data.f_1 = 1;
			data = 24;
			STATS::PLAYSTATS_GUNRUNNING_MISSION_ENDED(&data);
			uLocal_16 = { ENTITY::GET_ENTITY_COORDS(obLocal_5, false) };
			iLocal_19 = 0;
		}
	}
	else
	{
		func_67();
	
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			if (iLocal_20 == -1)
			{
				AUDIO::START_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
				iLocal_20 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_20, "07", obLocal_5, "DLC_GR_CS2_Sounds", false, 0);
			}
		
			if (!bLocal_7)
			{
				if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_8, 4500, false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(obLocal_5, false);
					_STOPWATCH_RESET(&uLocal_8, false, false);
					_STOPWATCH_DESTROY(&uLocal_8);
					_STOPWATCH_INITIALIZE(&uLocal_10, false, false);
					bLocal_7 = true;
				}
			}
			else
			{
				num2 = SYSTEM::TO_FLOAT(_STOPWATCH_GET_TIME_PASSED(&uLocal_10, false, false)) / SYSTEM::TO_FLOAT(func_65());
				num3 = SYSTEM::TO_FLOAT(_STOPWATCH_GET_TIME_PASSED(&uLocal_8, false, false)) / SYSTEM::TO_FLOAT(func_64());
				num3 = num3 * num2;
				vector = { func_62(uLocal_16, func_63(), num3) };
				ENTITY::SET_ENTITY_COORDS(obLocal_5, vector, true, false, false, true);
			
				if (num3 >= 1f)
				{
					iLocal_19 = iLocal_19 + 1;
					uLocal_16 = { ENTITY::GET_ENTITY_COORDS(obLocal_5, false) };
					_STOPWATCH_RESET(&uLocal_8, false, false);
					_STOPWATCH_DESTROY(&uLocal_8);
				
					if (func_64() == -1)
					{
						OBJECT::DELETE_OBJECT(&obLocal_5);
						MISC::FORCE_LIGHTNING_FLASH();
					
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_20))
							AUDIO::STOP_SOUND(iLocal_20);
					
						AUDIO::RELEASE_SOUND_ID(iLocal_20);
						iLocal_20 = -1;
						_STOPWATCH_INITIALIZE(&uLocal_12, false, false);
						_STOPWATCH_INITIALIZE(&uLocal_14, false, false);
						_STOPWATCH_RESET(&uLocal_10, false, false);
						_STOPWATCH_DESTROY(&uLocal_10);
						uLocal_16 = { 0f, 0f, 0f };
						iLocal_19 = 0;
						bLocal_6 = false;
						bLocal_7 = false;
					}
				}
			}
		}
	}

	return;
}

Vector3 func_62(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6) // Position - 0x13BF
{
	return ({ 1f - fParam6, 1f - fParam6, 1f - fParam6 } * uParam0) + ({ fParam6, fParam6, fParam6 } * uParam3);
}

Vector3 func_63() // Position - 0x13DA
{
	switch (iLocal_19)
	{
		case 0:
			return 306.567f, 5652.283f, 785.594f;
	
		case 1:
			return -1082.8652f, 6390.5195f, 924.2493f;
	
		case 2:
			return -2542.874f, 7217.5137f, 1051.3335f;
	
		case 3:
			return -4139.1064f, 8143.3022f, 1412.694f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

int func_64() // Position - 0x144C
{
	switch (iLocal_19)
	{
		case 0:
			return 2000;
	
		case 1:
			return 1000;
	
		case 2:
			return 100;
	
		case 3:
			return 50;
	
		default:
		
	}

	return -1;
}

int func_65() // Position - 0x148A
{
	return 3150;
}

int _STOPWATCH_GET_TIME_PASSED(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x1495
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
		if (!useAccurateTime)
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *pStopwatch);
		else
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *pStopwatch);

	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *pStopwatch);
}

void func_67() // Position - 0x14DC
{
	float entityRotation;

	entityRotation = { ENTITY::GET_ENTITY_ROTATION(obLocal_5, 2) };
	entityRotation = 0f;
	entityRotation.f_1 = 0f;
	entityRotation.f_2 = entityRotation.f_2 + 1f;
	ENTITY::SET_ENTITY_ROTATION(obLocal_5, entityRotation, 2, true);
	return;
}

void func_68(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x150D
{
	Hash statName;

	statName = func_69(iParam0, iParam2);

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, bParam3);

	return;
}

Hash func_69(int iParam0, int iParam1) // Position - 0x1530
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_19(iParam1));
}

int func_70(int iParam0, int iParam1) // Position - 0x1545
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14385)
	{
		statHash = func_69(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

BOOL func_71() // Position - 0x1574
{
	if (_STAT_GET_PACKED_BOOL(22107, -1) && Global_2639889 == 7 && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && func_74(PLAYER::PLAYER_PED_ID(), 426.433f, 5614.172f, 766.414f, 1f) && Global_2684820.f_3076.f_178 >= 1 && Global_2684820.f_3076.f_178 < 4 && func_73() && func_72())
		return true;

	return false;
}

BOOL func_72() // Position - 0x15F5
{
	if (_STAT_GET_PACKED_BOOL(15476, -1) && func_70(5453, func_20()) > 577)
		return true;

	return false;
}

BOOL func_73() // Position - 0x1621
{
	int weatherType1;
	int weatherType2;
	float percentWeather2;

	MISC::GET_CURR_WEATHER_STATE(&weatherType1, &weatherType2, &percentWeather2);

	if (percentWeather2 < 0.5f)
		if (weatherType1 == joaat("rain") || weatherType1 == joaat("THUNDER") || weatherType2 == joaat("xmas"))
			return true;
	else if (weatherType2 == joaat("rain") || weatherType2 == joaat("THUNDER") || weatherType2 == joaat("xmas"))
		return true;

	return false;
}

BOOL func_74(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0x1698
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, true), fParam1) <= fParam4 * fParam4;
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1) // Position - 0x16B5
{
	if (iParam1 == -1)
		iParam1 = func_20();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

void _STOPWATCH_RESET(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x16D1
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
		if (!useAccurateTime)
			*pStopwatch = NETWORK::GET_NETWORK_TIME();
		else
			*pStopwatch = NETWORK::GET_NETWORK_TIME_ACCURATE();
	else
		*pStopwatch = MISC::GET_GAME_TIMER();

	pStopwatch->f_1 = 1;
	return;
}

BOOL _STOPWATCH_HAS_TIME_PASSED(var pStopwatch, int millis, BOOL useLocalTimer) // Position - 0x170E
{
	if (millis == -1)
		return true;

	_STOPWATCH_INITIALIZE(pStopwatch, useLocalTimer, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *pStopwatch)) >= millis)
			return true;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *pStopwatch)) >= millis)
		return true;

	return false;
}

void func_78() // Position - 0x176C
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) > 0)
		func_81();
	else
		func_79();

	return;
}

void func_79() // Position - 0x178C
{
	int i;

	if (iLocal_46 == 0)
		return;

	for (i = 0; i < 26; i = i + 1)
	{
		if (IS_BIT_SET(iLocal_46, i))
		{
			AUDIO::SET_RADIO_STATION_AS_FAVOURITE(func_80(i), false);
			MISC::CLEAR_BIT(&iLocal_46, i);
		}
	}

	iLocal_47 = 0;
	Global_2766715 = 0;
	return;
}

char* func_80(int iParam0) // Position - 0x17D6
{
	switch (iParam0)
	{
		case 9:
			return "RADIO_01_CLASS_ROCK" /*Los Santos Rock Radio*/;
	
		case 10:
			return "RADIO_02_POP" /*Non-Stop-Pop FM*/;
	
		case 12:
			return "RADIO_03_HIPHOP_NEW" /*Radio Los Santos*/;
	
		case 18:
			return "RADIO_04_PUNK" /*Channel X*/;
	
		case 17:
			return "RADIO_06_COUNTRY" /*Rebel Radio*/;
	
		case 15:
			return "RADIO_07_DANCE_01" /*Soulwax FM*/;
	
		case 16:
			return "RADIO_08_MEXICAN" /*East Los FM*/;
	
		case 11:
			return "RADIO_09_HIPHOP_OLD" /*West Coast Classics*/;
	
		case 23:
			return "RADIO_11_TALK_02" /*Blaine County Radio*/;
	
		case 22:
			return "RADIO_12_REGGAE" /*Blue Ark*/;
	
		case 5:
			return "RADIO_13_JAZZ" /*Worldwide FM*/;
	
		case 6:
			return "RADIO_14_DANCE_02" /*FlyLo FM*/;
	
		case 21:
			return "RADIO_15_MOTOWN" /*The Lowdown 91.1*/;
	
		case 13:
			return "RADIO_20_THELAB" /*The Lab*/;
	
		case 14:
			return "RADIO_16_SILVERLAKE" /*Radio Mirror Park*/;
	
		case 20:
			return "RADIO_17_FUNK" /*Space 103.2*/;
	
		case 19:
			return "RADIO_18_90S_ROCK" /*Vinewood Boulevard Radio*/;
	
		case 8:
			return "RADIO_21_DLC_XM17" /*Blonded Los Santos 97.8 FM*/;
	
		case 24:
			return "RADIO_05_TALK_01" /*West Coast Talk Radio*/;
	
		case 2:
			return "RADIO_27_DLC_PRHEI4" /*Still Slipping Los Santos*/;
	
		case 4:
			return "RADIO_23_DLC_XM19_RADIO" /*iFruit Radio*/;
	
		case 7:
			return "RADIO_22_DLC_BATTLE_MIX1_RADIO" /*Los Santos Underground Radio*/;
	
		case 0:
			return "RADIO_36_AUDIOPLAYER" /*Media Player*/;
	
		case 1:
			return "RADIO_35_DLC_HEI4_MLR" /*The Music Locker*/;
	
		case 3:
			return "RADIO_34_DLC_HEI4_KULT" /*Kult FM*/;
	
		case 25:
			return "RADIO_37_MOTOMAMI" /*MOTOMAMI Los Santos*/;
	
		default:
		
	}

	return "OFF";
}

void func_81() // Position - 0x1932
{
	int num;
	int i;

	if (!func_82(*Global_4718592.f_117591))
		return;

	num = func_70(9877, -1);

	if (num == 0)
		return;

	for (i = 0; i < 26; i = i + 1)
	{
		if (!IS_BIT_SET(iLocal_47, i))
		{
			if (IS_BIT_SET(num, i))
			{
			}
		
			MISC::SET_BIT(&iLocal_47, i);
			AUDIO::SET_RADIO_STATION_AS_FAVOURITE(func_80(i), true);
		}
	
		if (IS_BIT_SET(num, i) && !IS_BIT_SET(iLocal_46, i))
		{
			MISC::SET_BIT(&iLocal_46, i);
			Global_2766715 = 1;
		}
	}

	return;
}

BOOL func_82(var uParam0) // Position - 0x19BC
{
	if (uParam0 == Global_262145.f_31929[0] || uParam0 == Global_262145.f_31929[1] || uParam0 == Global_262145.f_31929[2])
		return true;

	return false;
}

void func_83() // Position - 0x19FF
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0)
	{
		if (!bLocal_45)
			bLocal_45 = true;
	}
	else if (bLocal_45)
	{
		MISC::CLEAR_OVERRIDE_WEATHER();
		bLocal_45 = false;
	}

	return;
}

void func_84() // Position - 0x1A2C
{
	Player player;

	if (_IS_FMMC_ACTIVE() && func_91(*Global_4718592.f_171044) && func_90() == 26)
	{
		if (!bLocal_44)
		{
			player = func_85();
		
			if (player != -1)
			{
				if (_STOPWATCH_IS_INITIALIZED(&(Global_1890739[player].f_31)))
				{
					if (_STOPWATCH_HAS_TIME_PASSED(&(Global_1890739[player].f_31), 37500, false))
					{
						Global_2684820.f_6341 = -1;
						bLocal_44 = true;
					}
				}
			}
		}
	}
	else if (bLocal_44)
	{
		bLocal_44 = false;
	}

	return;
}

Player func_85() // Position - 0x1AA9
{
	return func_86();
}

Player func_86() // Position - 0x1AB5
{
	var gamerHandle;

	gamerHandle = { func_88() };

	if (IS_GAMER_HANDLE_VALID(gamerHandle))
		return NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&gamerHandle);

	return _INVALID_PLAYER_INDEX();
}

BOOL IS_GAMER_HANDLE_VALID(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x1ADF
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

struct<13> func_88() // Position - 0x1AEF
{
	int i;
	var unk;

	for (i = 0; i < 32; i = i + 1)
	{
		if (func_89(i))
			return Global_2684820.f_1.f_845[i];
	}

	return unk;
}

BOOL func_89(int iParam0) // Position - 0x1B2B
{
	return IS_BIT_SET(Global_2684820.f_1.f_845[iParam0].f_50, 0);
}

int func_90() // Position - 0x1B44
{
	return Global_1853988[PLAYER::PLAYER_ID()].f_192;
}

BOOL func_91(int iParam0) // Position - 0x1B59
{
	return iParam0 == 88;
}

void func_92() // Position - 0x1B66
{
	Vector3 vector;
	BOOL unk;
	int unk2;
	int isPointInAngledArea;
	int num;
	int num2;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && Global_262145.f_33923[0] == *Global_4718592.f_117591 && Global_1058071.f_14[0] >= 4 || Global_1058071.f_14[0] <= 6)
	{
		vector = { func_95(101) };
		isPointInAngledArea = OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 2961.0774f, 2743.2803f, 40.742603f, 2957.4968f, 2756.6743f, 45.117565f, 15f, false, true);
	
		if (!func_94())
		{
			if (isPointInAngledArea || Global_1058071.f_14[0] == 5)
			{
				num2 = func_93(&num);
			
				if (num >= 0 && num < 4 && num2 >= 0 || num2 < 17)
					MISC::SET_BIT(&Global_4718592.f_1816[num].f_8212[num2], 12);
			}
		}
		else if (!isPointInAngledArea && Global_1058071.f_14[0] < 5 || Global_1058071.f_14[0] > 5)
		{
			num4 = func_93(&num3);
		
			if (num3 >= 0 && num3 < 4 && num4 >= 0 || num4 < 17)
				MISC::CLEAR_BIT(&Global_4718592.f_1816[num3].f_8212[num4], 12);
		}
	}

	return;
}

int func_93(var uParam0) // Position - 0x1CBD
{
	*uParam0 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());

	if (*uParam0 < 4 && *uParam0 > -1)
	{
	}
	else
	{
		*uParam0 = 0;
	}

	return Global_1058071.f_14[*uParam0];
}

BOOL func_94() // Position - 0x1CF4
{
	int num;
	int num2;

	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	num2 = func_93(&num);

	if (num < 0 || num >= 4)
		return false;

	if (num2 < 0 || num2 >= 17)
		return false;

	return IS_BIT_SET(Global_4718592.f_1816[num].f_8212[num2], 12);
}

Vector3 func_95(int iParam0) // Position - 0x1D51
{
	switch (iParam0)
	{
		case 101:
			return func_96();
	
		default:
		
	}

	return 0f, 0f, 0f;
}

Vector3 func_96() // Position - 0x1D70
{
	Vector3 offsetFromEntityInWorldCoords;
	Entity unk;
	var unk2;

	offsetFromEntityInWorldCoords = { 0f, 0f, 0f };
	entity = func_97();

	if (ENTITY::DOES_ENTITY_EXIST(entity) && !ENTITY::IS_ENTITY_DEAD(entity, false))
	{
		offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(entity, 0f, -8f, -0.6f) };
	
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(offsetFromEntityInWorldCoords, &groundZ, false, false) && !ENTITY::IS_ENTITY_IN_AIR(entity))
			offsetFromEntityInWorldCoords = { offsetFromEntityInWorldCoords, offsetFromEntityInWorldCoords.f_1, groundZ };
		else
			offsetFromEntityInWorldCoords = { offsetFromEntityInWorldCoords, offsetFromEntityInWorldCoords.f_1, offsetFromEntityInWorldCoords.f_2 - 1.5f };
	}

	return offsetFromEntityInWorldCoords;
}

Entity func_97() // Position - 0x1DF2
{
	int i;
	var sizeAndVehs;
	int unk;
	int unk2;
	var unk3;
	int unk4;

	if (_IS_PLAYER_IN_AN_ORGANIZATION(PLAYER::PLAYER_ID(), false))
	{
		if (PLAYER::PLAYER_ID() != _GET_BOSS_OF_LOCAL_PLAYER())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Global_2794162.f_310))
			{
				sizeAndVehs = 25;
				pedNearbyVehicles = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &sizeAndVehs);
			
				for (i = 0; i < pedNearbyVehicles; i = i + 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(sizeAndVehs[i]) && ENTITY::IS_ENTITY_A_VEHICLE(sizeAndVehs[i]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(sizeAndVehs[i], false))
						{
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Creator_Trailer", INT))
							{
								if (VEHICLE::IS_VEHICLE_MODEL(sizeAndVehs[i], joaat("avenger")) || VEHICLE::IS_VEHICLE_MODEL(sizeAndVehs[i], func_100(true)))
								{
									if (func_98(sizeAndVehs[i]) == _GET_BOSS_OF_LOCAL_PLAYER())
									{
										Global_2794162.f_310 = sizeAndVehs[i];
										return sizeAndVehs[i];
									}
								}
							}
						}
					}
				}
			}
			else
			{
				return Global_2794162.f_310;
			}
		}
	}
	else if (PLAYER::PLAYER_ID() == _GET_BOSS_OF_LOCAL_PLAYER() && !ENTITY::DOES_ENTITY_EXIST(Global_2794162.f_310))
	{
		sizeAndVehs2 = 25;
		pedNearbyVehicles2 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &sizeAndVehs2);
	
		for (j = 0; j < pedNearbyVehicles2; j = j + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(sizeAndVehs2[j]) && ENTITY::IS_ENTITY_A_VEHICLE(sizeAndVehs2[j]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(sizeAndVehs2[j], false))
				{
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Creator_Trailer", INT))
					{
						if (VEHICLE::IS_VEHICLE_MODEL(sizeAndVehs2[j], joaat("avenger")) || VEHICLE::IS_VEHICLE_MODEL(sizeAndVehs2[j], func_100(true)))
						{
							if (func_98(sizeAndVehs2[j]) == PLAYER::PLAYER_ID())
							{
								Global_2794162.f_310 = sizeAndVehs2[j];
								return sizeAndVehs2[j];
							}
						}
					}
				}
			}
		}
	}

	return Global_2794162.f_310;
}

Player func_98(Vehicle veParam0) // Position - 0x1FA8
{
	Hash _int;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && !ENTITY::IS_ENTITY_DEAD(veParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("avenger")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, func_100(true)))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Creator_Trailer", INT))
			{
				if (DECORATOR::DECOR_EXIST_ON(veParam0, "Creator_Trailer"))
				{
					_int = DECORATOR::DECOR_GET_INT(veParam0, "Creator_Trailer");
					return func_99(_int, false, true, 0);
				}
			}
		}
	}

	return _INVALID_PLAYER_INDEX();
}

Player func_99(Hash hParam0, BOOL bParam1, BOOL bParam2, Player plParam3) // Position - 0x201A
{
	Player player;
	int i;

	if (bParam2)
	{
		for (i = 0; i < 32; i = i + 1)
		{
			player = PLAYER::INT_TO_PLAYERINDEX(i);
		
			if (_NETWORK_IS_PLAYER_VALID(player, false, true) || bParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(player))
				if (hParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(player))
					return player;
		}
	}
	else if (_NETWORK_IS_PLAYER_VALID(plParam3, false, true) || bParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(plParam3))
	{
		if (hParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(plParam3))
			return plParam3;
	}

	return _INVALID_PLAYER_INDEX();
}

Hash func_100(BOOL bParam0) // Position - 0x20A5
{
	if (bParam0)
		return -426933872;

	return joaat("avenger");
}

Player _GET_BOSS_OF_LOCAL_PLAYER() // Position - 0x20BF
{
	return Global_1895156[PLAYER::PLAYER_ID()].f_10;
}

BOOL _IS_PLAYER_IN_AN_ORGANIZATION(Player plParam0, BOOL bCanBeBoss) // Position - 0x20D4
{
	if (!bCanBeBoss)
		if (_IS_PLAYER_BOSS_OF_ORGANIZATION(plParam0))
			return false;

	return Global_1895156[plParam0].f_10 != _INVALID_PLAYER_INDEX();
}

void func_103() // Position - 0x20FF
{
	Vehicle vehiclePedIsIn;

	iLocal_43 = iLocal_43 + 1;

	if (iLocal_43 == 30)
		iLocal_43 = 0;
	else
		return;

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) || !_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true) || NETWORK::NETWORK_IS_ACTIVITY_SESSION() || NETWORK::NETWORK_IS_IN_MP_CUTSCENE() || !func_53() || func_106(PLAYER::PLAYER_ID()) || func_105(PLAYER::PLAYER_ID()) || func_104(PLAYER::PLAYER_ID()) || Global_2672524.f_3542 || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		return;

	if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(vehiclePedIsIn))
		{
			if (!NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(vehiclePedIsIn))
			{
				if (ENTITY::GET_ENTITY_CAN_BE_DAMAGED(vehiclePedIsIn))
				{
				}
				else
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(vehiclePedIsIn, 0f);
					ENTITY::SET_ENTITY_INVINCIBLE(vehiclePedIsIn, false);
					ENTITY::SET_ENTITY_PROOFS(vehiclePedIsIn, false, false, false, false, false, false, true, false);
				}
			}
		}
	}

	return;
}

BOOL func_104(Player plParam0) // Position - 0x21F3
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			return Global_2657704[plParam0].f_321.f_7 != -1;
		else if (Global_1575063 && plParam0 == PLAYER::PLAYER_ID() && _NETWORK_IS_PLAYER_VALID(plParam0, true, false))
			return Global_2657704[plParam0].f_321.f_7 != -1;

	return false;
}

BOOL func_105(Player plParam0) // Position - 0x2259
{
	if (IS_BIT_SET(Global_1853988[plParam0].f_267.f_31, 14))
		return true;

	if (IS_BIT_SET(Global_1853988[plParam0].f_267.f_31, 11))
		return true;

	return false;
}

BOOL func_106(Player plParam0) // Position - 0x2292
{
	if (plParam0 != _INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam0, true, true))
		return IS_BIT_SET(Global_2657704[plParam0].f_321, 3);

	return false;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Vehicle veParam0) // Position - 0x22C3
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
			return true;

	return false;
}

void func_108() // Position - 0x22E4
{
	var gamerHandle;

	if (bLocal_29)
	{
		if (func_115() == -1 && func_114() == 999 && func_53() && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() && !HUD::IS_WARNING_MESSAGE_ACTIVE() && !CAM::IS_SCREEN_FADING_OUT())
		{
			bLocal_29 = false;
			func_113(0);
			STATS::STAT_SET_BLOCK_SAVES(false);
			func_110();
		}
	}

	if (!bLocal_28)
	{
		NETWORK::NETWORK_GET_LOCAL_HANDLE(&uLocal_30, 13);
	
		if (IS_GAMER_HANDLE_VALID(uLocal_30))
			bLocal_28 = true;
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2692776.f_3)
	{
		NETWORK::NETWORK_GET_LOCAL_HANDLE(&gamerHandle, 13);
	
		if (!NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&gamerHandle, &uLocal_30))
		{
			NETWORK::NETWORK_BAIL(0, 0, 0);
			STATS::STAT_SET_BLOCK_SAVES(true);
		
			if (!func_109())
			{
				func_113(1);
				bLocal_29 = true;
			}
		
			bLocal_28 = false;
		}
	}

	return;
}

BOOL func_109() // Position - 0x23B7
{
	return Global_32561;
}

void func_110() // Position - 0x23C2
{
	int i;

	for (i = 0; i <= 2; i = i + 1)
	{
		func_111(0, i);
		STATS::STAT_CLEAR_SLOT_FOR_RELOAD(i);
	}

	STATS::FORCE_CLOUD_MP_STATS_DOWNLOAD_AND_OVERWRITE_LOCAL_SAVE();
	return;
}

void func_111(int iParam0, int iParam1) // Position - 0x23EE
{
	if (iParam0 == 0)
		func_112();

	Global_1574538[iParam1] = iParam0;
	return;
}

void func_112() // Position - 0x240A
{
	Global_2694561 = 0;
	return;
}

void func_113(int iParam0) // Position - 0x2417
{
	Global_32561 = iParam0;
	return;
}

int func_114() // Position - 0x2424
{
	return Global_32284;
}

int func_115() // Position - 0x242F
{
	return Global_32283;
}

void func_116() // Position - 0x243A
{
	if (Global_2672524.f_62.f_57)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2794162.f_299) && !ENTITY::IS_ENTITY_DEAD(Global_2794162.f_299, false))
		{
			if (!Global_2672524.f_62.f_21)
			{
				if (iLocal_27 == -1)
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("PV_Slot", INT))
						if (DECORATOR::DECOR_EXIST_ON(Global_2794162.f_299, "PV_Slot"))
							iLocal_27 = DECORATOR::DECOR_GET_INT(Global_2794162.f_299, "PV_Slot");
				else if (Global_2359296[func_123()].f_681.f_2 != iLocal_27)
					if (!_STOPWATCH_IS_INITIALIZED(&uLocal_25))
						_STOPWATCH_INITIALIZE(&uLocal_25, true, false);
					else if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_25, 10000, true))
						func_117(true, false, true, false, false, false, false);
			}
			else
			{
				_STOPWATCH_DESTROY(&uLocal_25);
				iLocal_27 = -1;
			}
		}
		else
		{
			_STOPWATCH_DESTROY(&uLocal_25);
			iLocal_27 = -1;
		}
	}
	else
	{
		_STOPWATCH_DESTROY(&uLocal_25);
		iLocal_27 = -1;
	}

	return;
}

void func_117(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x2517
{
	if (_GET_ACTIVE_PV_SLOT() < 0 && Global_1963618)
		return;

	if (func_121(35))
		bParam0 = true;

	if (IS_BIT_SET(Global_2672524.f_62.f_60, 3))
		bParam0 = true;

	if (IS_BIT_SET(Global_2672524.f_62.f_64, 3))
	{
		bParam0 = true;
		bParam1 = false;
	}

	if (IS_BIT_SET(Global_2672524.f_62.f_68, 3))
	{
		bParam0 = true;
		bParam1 = false;
	}

	if (bParam0)
		func_120(2);
	else
		func_120(1);

	if (bParam1)
		func_120(11);

	if (bParam2)
	{
		func_120(32);
	
		if (bParam3)
			if (_GET_ACTIVE_PV_SLOT() >= 0 && IS_BIT_SET(Global_1586488[_GET_ACTIVE_PV_SLOT()].f_103, 0))
				func_120(33);
		else
			func_119(33);
	
		if (_GET_ACTIVE_PV_SLOT() >= 0)
			if (func_118(Global_1586488[_GET_ACTIVE_PV_SLOT()].f_66))
				func_120(40);
	}
	else if (bParam5)
	{
		func_120(37);
	}

	if (bParam4)
		func_120(36);

	if (func_121(36))
		if (func_121(2))
			func_119(36);

	if (bParam6)
		func_120(38);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		Global_2794162.f_440 = NETWORK::GET_NETWORK_TIME();

	return;
}

BOOL func_118(int iParam0) // Position - 0x263F
{
	if (iParam0 == joaat("trailersmall2"))
		return true;

	return false;
}

void func_119(int iParam0) // Position - 0x2656
{
	if (iParam0 < 32)
		if (IS_BIT_SET(Global_2672524.f_62.f_1, iParam0))
			MISC::CLEAR_BIT(&(Global_2672524.f_62.f_1), iParam0);
	else if (IS_BIT_SET(Global_2672524.f_62.f_2, iParam0 - 32))
		MISC::CLEAR_BIT(&(Global_2672524.f_62.f_2), iParam0 - 32);

	return;
}

void func_120(int iParam0) // Position - 0x26A6
{
	if (iParam0 < 32)
		if (!IS_BIT_SET(Global_2672524.f_62.f_1, iParam0))
			MISC::SET_BIT(&(Global_2672524.f_62.f_1), iParam0);
	else if (!IS_BIT_SET(Global_2672524.f_62.f_2, iParam0 - 32))
		MISC::SET_BIT(&(Global_2672524.f_62.f_2), iParam0 - 32);

	return;
}

BOOL func_121(int iParam0) // Position - 0x26F8
{
	if (iParam0 < 32)
		return IS_BIT_SET(Global_2672524.f_62.f_1, iParam0);

	return IS_BIT_SET(Global_2672524.f_62.f_2, iParam0 - 32);
}

int _GET_ACTIVE_PV_SLOT() // Position - 0x2726
{
	if (Global_2359296[func_123()].f_681.f_2 >= 415)
	{
		Global_2359296[func_123()].f_681.f_2 = -1;
		return -1;
	}

	return Global_2359296[func_123()].f_681.f_2;
}

int func_123() // Position - 0x2769
{
	int num;

	num = 0;
	return num;
}

void func_124() // Position - 0x2776
{
	if (func_130(PLAYER::PLAYER_ID()) && func_126() == PLAYER::PLAYER_ID())
	{
		if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() || HUD::IS_WARNING_MESSAGE_ACTIVE() || func_125())
		{
			_STOPWATCH_RESET(&uLocal_22, true, false);
			Global_1950697 = 1;
		
			if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
				iLocal_24 = 30000;
		}
	}

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_22))
	{
		if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_22, iLocal_24, true))
		{
			_STOPWATCH_DESTROY(&uLocal_22);
			Global_1950697 = 0;
			iLocal_24 = 10000;
		}
	}

	return;
}

BOOL func_125() // Position - 0x27F0
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

Player func_126() // Position - 0x27FE
{
	return func_127(PLAYER::PLAYER_ID());
}

Player func_127(Player plParam0) // Position - 0x280E
{
	int num;

	if (plParam0 == _INVALID_PLAYER_INDEX())
		return plParam0;

	if (func_129(plParam0) != -1)
	{
		num = func_128(func_129(plParam0));
	
		if (num == 2 || num == 1 || num == 0 || num == 25)
		{
			if (_IS_PLAYER_IN_AN_ORGANIZATION(plParam0, false))
				return func_23(plParam0);
		
			return plParam0;
		}
		else if (num == 3)
		{
			return _INVALID_PLAYER_INDEX();
		}
	
		return Global_2657704[plParam0].f_321.f_10;
	}

	return _INVALID_PLAYER_INDEX();
}

int func_128(int iParam0) // Position - 0x289D
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
	
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
			return 1;
	
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
	
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
	
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
	
		case 81:
			return 5;
	
		case 82:
			return 6;
	
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
	
		case 88:
			return 8;
	
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
	
		case 101:
			return 10;
	
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
	
		case 117:
			return 12;
	
		case 122:
			return 13;
	
		case 123:
			return 14;
	
		case 124:
			return 15;
	
		case 125:
			return 16;
	
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
	
		case 145:
			return 18;
	
		case 146:
			return 19;
	
		case 147:
			return 20;
	
		case 148:
			return 21;
	
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
	
		case 154:
			return 23;
	
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	
		case 159:
			return 25;
	
		case 160:
			return 26;
	
		case 161:
			return 27;
	}

	return -1;
}

int func_129(Player plParam0) // Position - 0x2D51
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			return Global_2657704[plParam0].f_321.f_7;
		else if (Global_1575063 || Global_2635560.f_2780 && plParam0 == PLAYER::PLAYER_ID() && _NETWORK_IS_PLAYER_VALID(plParam0, true, false))
			return Global_2657704[plParam0].f_321.f_7;

	return -1;
}

BOOL func_130(Player plParam0) // Position - 0x2DC0
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657704[plParam0].f_321.f_7 != -1)
				return func_128(Global_2657704[plParam0].f_321.f_7) == 9;

	return false;
}

void func_131() // Position - 0x2E07
{
	if (!func_133() && !func_132())
		if (!STATS::STAT_IS_STATS_TRACKING_ENABLED())
			if (func_53() && _NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), false, true) && CAM::IS_SCREEN_FADED_IN() && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				STATS::STAT_ENABLE_STATS_TRACKING();

	return;
}

BOOL func_132() // Position - 0x2E5C
{
	return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("animal_controller")) > 0;
}

BOOL func_133() // Position - 0x2E6F
{
	return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) > 0;
}

void func_134() // Position - 0x2E82
{
	if (Global_112755 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) <= 0 && func_53())
		NETWORK::SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();

	return;
}

void func_135() // Position - 0x2EAE
{
	int num;

	if (!bLocal_4)
	{
		if (Global_1836398)
		{
			num = _MPPLY_STAT_GET_INT(joaat("MPPLY_CHAR_EXPLOIT_LEVEL"));
		
			if (num >= 4)
				Global_262145.f_10765 = 1;
		
			bLocal_4 = true;
		}
	}
	else if (!Global_1836398)
	{
		bLocal_4 = false;
	}

	return;
}

int _MPPLY_STAT_GET_INT(Hash hParam0) // Position - 0x2EED
{
	Hash statHash;
	int outValue;

	statHash = hParam0;

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

void func_137() // Position - 0x2F0B
{
	if (!bLocal_3)
	{
		if (Global_1836398)
		{
			if (func_139() || func_138())
				Global_262145.f_20349 = 1;
			else
				Global_262145.f_20349 = 0;
		
			bLocal_3 = true;
		}
	}
	else if (!Global_1836398)
	{
		bLocal_3 = false;
	}

	return;
}

int func_138() // Position - 0x2F55
{
	int num;
	var unk;
	int unk2;

	num = _MPPLY_STAT_GET_INT(joaat("MPPLY_CHAR_PEAK_EXPLOIT_LEVEL"));

	if (num < Global_262145.f_10874)
		return 0;

	unk = 4;
	unk[0] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"));
	unk[1] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"));
	unk[2] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"));
	unk[3] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"));

	for (i = 0; i < Global_262145.f_10870 - 1; i = i + 1)
	{
		if (unk[i] < Global_262145.f_10874)
			return 0;
	}

	return 1;
}

int func_139() // Position - 0x2FE4
{
	int num;
	var unk;
	int unk2;

	num = _MPPLY_STAT_GET_INT(joaat("MPPLY_CHAR_PEAK_EXPLOIT_LEVEL"));

	if (num < Global_262145.f_10873)
		return 0;

	unk = 4;
	unk[0] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"));
	unk[1] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"));
	unk[2] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"));
	unk[3] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"));

	for (i = 0; i < Global_262145.f_10869 - 1; i = i + 1)
	{
		if (unk[i] < Global_262145.f_10873)
			return 0;
	}

	return 1;
}

void func_140() // Position - 0x3073
{
	int i;

	if (MISC::IS_PC_VERSION())
	{
		for (i = 0; i < 32; i = i + 1)
		{
			MISC::SET_BIT(&(Global_1853988[i].f_801), 1);
		}
	}

	return;
}

void func_141() // Position - 0x30A6
{
	if (Global_262145.f_10849 != 120)
		Global_262145.f_10849 = 120;

	return;
}

void func_142() // Position - 0x30C3
{
	if (bLocal_1)
	{
		HUD::SET_TEXT_SCALE(0f, 0.23f);
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		func_143(0.69f, 0.06f, "STRING", sLocal_0);
	}

	if (!bLocal_1)
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			switch (iLocal_2)
			{
				case 0:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
					{
						iLocal_2 = iLocal_2 + 1;
						SYSTEM::SETTIMERA(0);
					}
					break;
			
				case 1:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
					{
						iLocal_2 = iLocal_2 + 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
			
				case 2:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
					{
						iLocal_2 = iLocal_2 + 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
			
				case 3:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
					{
						iLocal_2 = iLocal_2 + 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
			
				case 4:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP))
					{
						bLocal_1 = true;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
			}
		}
	}
	else if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		switch (iLocal_2)
		{
			case 0:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP))
				{
					iLocal_2 = iLocal_2 + 1;
					SYSTEM::SETTIMERA(0);
				}
				break;
		
			case 1:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
				{
					iLocal_2 = iLocal_2 + 1;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
		
			case 2:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
				{
					iLocal_2 = iLocal_2 + 1;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
		
			case 3:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
				{
					iLocal_2 = iLocal_2 + 1;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
		
			case 4:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
				{
					bLocal_1 = false;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
		}
	}

	return;
}

void func_143(float fParam0, float fParam1, char* sParam2, char* sParam3) // Position - 0x32C3
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
	return;
}

BOOL IS_ROCKSTAR_DEV() // Position - 0x32E0
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_145() // Position - 0x32F1
{
	Global_112837 = 1;
	return;
}

