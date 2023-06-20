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
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	Vehicle vehicleBlimp = 0;
	Hash blimpHash = 0;
	Blip blimpBlip = 0;
	Ped pilotPed = 0;
	Hash pilotPedHash = 0;
	Vehicle vehicleBuzzard = 0;
	Hash buzzardHash = 0;
	int iLocal_45 = 0;
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
	sLocal_16 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	blimpHash = joaat("blimp");
	pilotPedHash = joaat("S_M_M_Pilot_02");
	buzzardHash = joaat("buzzard");

	if (CAM::IS_SCREEN_FADED_OUT())
		CAM::DO_SCREEN_FADE_IN(500);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
		CleanupAndTerminate();

	PLAYER::SET_MAX_WANTED_LEVEL(0);
	SpawnBlimp();
	SpawnPilot();
	RemoveAndCreateBlimpBlip();
	SpawnBuzzard();

	while (true)
	{
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		HUD::SET_TEXT_SCALE(0.75f, 0.9f);
		HUD::SET_TEXT_WRAP(0f, 1f);
		DisplayText(0.05f, 0.63f, "PLCHLD_MISS", 0);
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		HUD::SET_TEXT_SCALE(0.4f, 0.45f);
		HUD::SET_TEXT_WRAP(0f, 1f);
		DisplayText(0.05f, 0.7f, "PLCHLD_PASS", 0);
		Loop();
		SYSTEM::WAIT(0);
	}

	return;
}

void Loop() // Position - 0x116
{
	var entityCoords;

	if (ENTITY::DOES_ENTITY_EXIST(vehicleBlimp))
	{
		if (ENTITY::IS_ENTITY_DEAD(vehicleBlimp, false) || ENTITY::GET_ENTITY_HEALTH(vehicleBlimp) <= 0 || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(vehicleBlimp) <= 0f)
		{
			RemoveBlip(&blimpBlip);
		
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(vehicleBlimp))
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(vehicleBlimp);
		
			if (iLocal_45 == 1)
			{
				entityCoords = { ENTITY::GET_ENTITY_COORDS(vehicleBlimp, false) };
				CreateExplosion(entityCoords);
			}
		
			if (iLocal_45 == 1)
			{
				DeletePed(&pilotPed);
				DeleteVehicle(&vehicleBlimp);
			}
			else
			{
				SetPedNoLongerNeeded(&pilotPed, true, 0, 1);
				SetVehicleNoLongerNeeded(&vehicleBlimp);
			}
		}
		else if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(vehicleBlimp))
		{
			VEHICLE::SET_PLAYBACK_SPEED(vehicleBlimp, 0.25f);
		}
	}

	return;
}

void SetVehicleNoLongerNeeded(Vehicle* pveParam0) // Position - 0x1B6
{
	if (ENTITY::DOES_ENTITY_EXIST(*pveParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*pveParam0, false);
	
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*pveParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*pveParam0, true))
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(pveParam0);
	}

	return;
}

void SetPedNoLongerNeeded(Ped* ppedParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0x1EE
{
	if (ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
	{
		if (!PED::IS_PED_INJURED(*ppedParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*ppedParam0, false, 1);
		
			if (iParam3 == 0)
				TASK::CLEAR_PED_SECONDARY_TASK(*ppedParam0);
		
			PED::SET_PED_KEEP_TASK(*ppedParam0, bParam1);
		
			if (iParam2 == 1)
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*ppedParam0, false);
		}
	
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(ppedParam0);
	}

	return;
}

void DeleteVehicle(Vehicle* pveParam0) // Position - 0x23E
{
	if (ENTITY::DOES_ENTITY_EXIST(*pveParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*pveParam0))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*pveParam0, true, false);
	
		if (DoesVehicleExistAndDrivable(*pveParam0))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*pveParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*pveParam0, true))
			{
				if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *pveParam0, false))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(pveParam0);
						return;
					}
				}
			
				VEHICLE::DELETE_VEHICLE(pveParam0);
			}
		}
		else
		{
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *pveParam0, false))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(pveParam0);
					return;
				}
			}
		
			VEHICLE::DELETE_VEHICLE(pveParam0);
		}
	}

	return;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Vehicle veParam0) // Position - 0x2DA
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
			return true;

	return false;
}

BOOL DoesVehicleExistAndDrivable(Vehicle veParam0) // Position - 0x2FB
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(veParam0))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (!FIRE::IS_ENTITY_ON_FIRE(veParam0))
				return true;

	return false;
}

void DeletePed(Ped* ppedParam0) // Position - 0x325
{
	if (ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*ppedParam0, false))
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*ppedParam0, false, 1);
	
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*ppedParam0))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*ppedParam0, true, false);
	
		PED::DELETE_PED(ppedParam0);
	}

	return;
}

void CreateExplosion(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x366
{
	int i;
	int num;
	var unk;

	num = 12;
	unk = 12;
	unk[0] = { 5f, 0f, 0f };
	unk[1] = { 0f, 5f, 0f };
	unk[2] = { 0f, 0f, 5f };
	unk[3] = { 5f, 5f, 0f };
	unk[4] = { 5f, 0f, 5f };
	unk[5] = { 0f, 5f, 5f };
	unk[6] = { 20f, 0f, 0f };
	unk[7] = { 0f, 20f, 0f };
	unk[8] = { 0f, 0f, 20f };
	unk[9] = { 20f, 20f, 0f };
	unk[10] = { 20f, 0f, 20f };
	unk[11] = { 0f, 20f, 20f };
	FIRE::ADD_EXPLOSION(vParam0, 8, 1f, true, false, 1065353216, false);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		FIRE::ADD_EXPLOSION(vParam0 + unk[i], 8, 1f, true, false, 1065353216, false);
	}

	return;
}

void RemoveBlip(Blip* pblParam0) // Position - 0x45C
{
	if (HUD::DOES_BLIP_EXIST(*pblParam0))
	{
		HUD::SET_BLIP_ROUTE(*pblParam0, false);
		HUD::REMOVE_BLIP(pblParam0);
	}

	return;
}

void DisplayText(float fParam0, float fParam1, char* sParam2, int iParam3) // Position - 0x47C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
	return;
}

void SpawnBuzzard() // Position - 0x494
{
	SetVehicleNoLongerNeeded(&vehicleBuzzard);
	STREAMING::REQUEST_MODEL(buzzardHash);

	while (!STREAMING::HAS_MODEL_LOADED(buzzardHash))
	{
		SYSTEM::WAIT(0);
	}

	if (DoesVehicleExistAndDrivable(vehicleBlimp))
	{
		vehicleBuzzard = VEHICLE::CREATE_VEHICLE(buzzardHash, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(vehicleBlimp, 50f, 0f, 15f), 0f, true, true, false);
		VEHICLE::SET_HELI_BLADES_FULL_SPEED(vehicleBuzzard);
		SetHeadingToEntity(vehicleBuzzard, vehicleBlimp);
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), vehicleBuzzard, -1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 500f, true, false, false, false);
		}
	}

	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(buzzardHash);
	return;
}

void SetHeadingToEntity(Vehicle veParam0, Vehicle veParam1) // Position - 0x52F
{
	float heading;

	heading = GetHeadingToEntity(ENTITY::GET_ENTITY_COORDS(veParam0, true), ENTITY::GET_ENTITY_COORDS(veParam1, true), 1);
	ENTITY::SET_ENTITY_HEADING(veParam0, heading);
	return;
}

float GetHeadingToEntity(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, int iParam6) // Position - 0x554
{
	float num;
	float num2;
	float num3;

	num2 = fParam3 - uParam0;
	num3 = fParam3.f_1 - uParam0.f_1;

	if (num3 != 0f)
		num = MISC::ATAN2(num2, num3);
	else if (num2 < 0f)
		num = -90f;
	else
		num = 90f;

	if (iParam6 == 1)
	{
		num = num * -1f;
	
		if (num < 0f)
			num = num + 360f;
	}

	return num;
}

void RemoveAndCreateBlimpBlip() // Position - 0x5B9
{
	RemoveBlip(&blimpBlip);

	if (DoesVehicleExistAndDrivable(vehicleBlimp))
		blimpBlip = CreateBlimpBlip(vehicleBlimp, true, 5);

	return;
}

Blip CreateBlimpBlip(Vehicle veParam0, BOOL friendly, int priority) // Position - 0x5DA
{
	Blip blimpBlip;

	blimpBlip = 0;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(veParam0))
	{
		blimpBlip = HUD::ADD_BLIP_FOR_ENTITY(veParam0);
		HUD::SET_BLIP_AS_FRIENDLY(blimpBlip, friendly);
		HUD::SET_BLIP_PRIORITY(blimpBlip, priority);
		HUD::SET_BLIP_SCALE(blimpBlip, 1f);
	}

	return blimpBlip;
}

void SpawnPilot() // Position - 0x60F
{
	STREAMING::REQUEST_MODEL(pilotPedHash);

	while (!STREAMING::HAS_MODEL_LOADED(pilotPedHash))
	{
		SYSTEM::WAIT(0);
	}

	if (DoesVehicleExistAndDrivable(vehicleBlimp))
	{
		pilotPed = PED::CREATE_PED_INSIDE_VEHICLE(vehicleBlimp, PED_TYPE_MISSION, pilotPedHash, -1, true, true);
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pilotPed))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pilotPed, true);
			PED::SET_PED_CONFIG_FLAG(pilotPed, 118, false);
			PED::SET_PED_CONFIG_FLAG(pilotPed, 29, false);
			PED::SET_PED_CONFIG_FLAG(pilotPed, 116, false);
		}
	}

	if (DoesVehicleExistAndDrivable(vehicleBlimp))
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(vehicleBlimp, 1, "Blimp_City", true);

	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(pilotPedHash);
	return;
}

void SpawnBlimp() // Position - 0x68C
{
	var rotationOfVehicleRecordingIdAtTime;

	if (DoesVehicleExistAndDrivable(vehicleBlimp) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(vehicleBlimp))
		VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(vehicleBlimp);

	RemoveBlip(&blimpBlip);
	DeletePed(&pilotPed);
	DeleteVehicle(&vehicleBlimp);
	STREAMING::REQUEST_MODEL(blimpHash);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "Blimp_City");

	while (!STREAMING::HAS_MODEL_LOADED(blimpHash) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "Blimp_City"))
	{
		SYSTEM::WAIT(0);
	}

	rotationOfVehicleRecordingIdAtTime = { VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(1, "Blimp_City"), 0f) };
	vehicleBlimp = VEHICLE::CREATE_VEHICLE(blimpHash, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(1, "Blimp_City"), 0f), rotationOfVehicleRecordingIdAtTime.f_2, true, true, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(blimpHash);
	return;
}

void CleanupAndTerminate() // Position - 0x722
{
	if (DoesVehicleExistAndDrivable(vehicleBlimp) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(vehicleBlimp))
		VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(vehicleBlimp);

	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "Blimp_city");
	RemoveBlip(&blimpBlip);
	SetPedNoLongerNeeded(&pilotPed, true, 0, 1);
	SetVehicleNoLongerNeeded(&vehicleBlimp);
	SetVehicleNoLongerNeeded(&vehicleBuzzard);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(pilotPedHash);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(blimpHash);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(buzzardHash);
	PLAYER::SET_MAX_WANTED_LEVEL(6);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

