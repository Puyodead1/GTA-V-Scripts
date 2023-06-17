#region Local Var
	Vehicle vehicle = 0;
	Entity entity = 0;
	int flags = 0;
	Vehicle veScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void main() // Position - 0x0
{
	float vDistance;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
		Terminate();

	vehicle = veScriptParam_3;
	entity = veScriptParam_3.f_1;

	while (!IS_BIT_SET(flags, 1))
	{
		if (!IS_BIT_SET(flags, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(vehicle))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehicle, false))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(vehicle, false, true);
					ENTITY::FREEZE_ENTITY_POSITION(vehicle, true);
					ENTITY::SET_ENTITY_PROOFS(vehicle, true, true, true, true, true, false, false, false);
				
					if (ENTITY::DOES_ENTITY_EXIST(entity))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(entity, false, true);
						ENTITY::FREEZE_ENTITY_POSITION(entity, true);
						ENTITY::SET_ENTITY_PROOFS(entity, true, true, true, true, true, false, false, false);
					}
				
					MISC::SET_BIT(&flags, 0);
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehicle, false))
			{
				vDistance = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(vehicle, true));
			
				if (vDistance > 90000f)
					MISC::SET_BIT(&flags, 1);
				else if (vDistance > 40000f && !ENTITY::IS_ENTITY_ON_SCREEN(vehicle))
					MISC::SET_BIT(&flags, 1);
			}
			else
			{
				MISC::SET_BIT(&flags, 1);
			}
		}
	
		SYSTEM::WAIT(0);
	}

	Terminate();
	return;
}

void Terminate() // Position - 0x105
{
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&vehicle);
	ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&entity);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

