#region Local Var
	BOOL doSetVehicleDensity = 0;
	BOOL doSetPedDensity = 0;
	float vehicleDensityMultiplier = 0f;
	float randomVehicleDensityMultiplier = 0f;
	float parkedVehicleDensityMultiplier = 0f;
	float ambientVehicleRangeMultiplier = 0f;
	float pedDensityMultiplier = 0f;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
#endregion

void main() // Position - 0x0
{
	doSetVehicleDensity = true;
	doSetPedDensity = true;
	vehicleDensityMultiplier = 1f;
	randomVehicleDensityMultiplier = 1f;
	parkedVehicleDensityMultiplier = 1f;
	ambientVehicleRangeMultiplier = 1f;
	pedDensityMultiplier = 1f;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	MISC::SET_MISSION_FLAG(true);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
		Terminate();

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (doSetVehicleDensity)
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(vehicleDensityMultiplier);
		
			VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(randomVehicleDensityMultiplier);
			VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(parkedVehicleDensityMultiplier);
			VEHICLE::SET_AMBIENT_VEHICLE_RANGE_MULTIPLIER_THIS_FRAME(ambientVehicleRangeMultiplier);
		
			if (doSetPedDensity)
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(pedDensityMultiplier);
		
			PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(fLocal_7, fLocal_8);
		}
	}

	return;
}

void Terminate() // Position - 0x7C
{
	VEHICLE::SET_RANDOM_TRAINS(true);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

