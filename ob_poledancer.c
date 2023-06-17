#region Local Var
	int state = 0;
	Ped ped = 0;
	float entityWorldOffset = 0f;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	float entityWorldHeading = 0f;
	char* animName = 0;
	Hash pedModelHash = 0;
	char* animDict = 0;
	BOOL isAnimPlaying = 0;
	Object obScriptParam_10 = 0;
#endregion

void main() // Position - 0x0
{
	animName = "Poledance_01";
	pedModelHash = joaat("A_F_Y_Beach_01");
	animDict = "MISSSTRIP_CLUB";

	if (ENTITY::DOES_ENTITY_EXIST(obScriptParam_10))
	{
		ENTITY::FREEZE_ENTITY_POSITION(obScriptParam_10, true);
		entityWorldOffset = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(obScriptParam_10, 0f, 0f, 0f) };
		entityWorldHeading = ENTITY::GET_ENTITY_HEADING(obScriptParam_10);
		ENTITY::SET_ENTITY_COLLISION(obScriptParam_10, false, false);
	}

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (ENTITY::DOES_ENTITY_EXIST(obScriptParam_10))
		{
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(obScriptParam_10))
			{
				switch (state)
				{
					case 0:
						if (LoadModelAndAnimDict())
						{
							CreatePed();
							state = 2;
						}
						break;
				
					case 2:
						PlayAnimation();
					
						if (func_2())
						{
							ENTITY::SET_ENTITY_COLLISION(obScriptParam_10, true, false);
							state = 3;
						}
						break;
				
					case 3:
						if (!PED::IS_PED_INJURED(ped))
						{
							TASK::TASK_COWER(ped, -1);
							PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
							PED::SET_PED_KEEP_TASK(ped, true);
							SCRIPT::TERMINATE_THIS_THREAD();
						}
						break;
				}
			}
			else
			{
				CleanupAndTerminate();
			}
		}
		else
		{
			CleanupAndTerminate();
		}
	}

	return;
}

void CleanupAndTerminate() // Position - 0xDC
{
	if (!ENTITY::IS_ENTITY_DEAD(ped, false))
		if (!ENTITY::IS_ENTITY_ON_SCREEN(ped))
			PED::DELETE_PED(&ped);
		else
			PED::SET_PED_KEEP_TASK(ped, true);

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_2() // Position - 0x10D
{
	Vector3 vector;

	vector = { 2f, 2f, 0.5f };

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(ped))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), ped, vector, false, true, 0))
				return true;
		
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(ped, PLAYER::PLAYER_PED_ID(), true))
				return true;
		
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), ped))
				return true;
		}
	
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			return true;
	}

	return false;
}

void PlayAnimation() // Position - 0x181
{
	if (!PED::IS_PED_INJURED(ped))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(ped, SCRIPT_TASK_PLAY_ANIM) == 7)
		{
			TASK::TASK_PLAY_ANIM(ped, animDict, animName, 1090519040, -1056964608, -1, 0, 0, false, false, false);
		}
		else if (ENTITY::HAS_ENTITY_ANIM_FINISHED(ped, animDict, animName, 3))
		{
			TASK::TASK_PLAY_ANIM(ped, animDict, animName, 1090519040, -1056964608, -1, 0, 0, false, false, false);
		}
		else if (!isAnimPlaying)
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(ped, animDict, animName, 3))
			{
				ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(ped, animDict, animName, MISC::GET_RANDOM_FLOAT_IN_RANGE(0, 1065353216));
				isAnimPlaying = true;
			}
		}
	}

	return;
}

void CreatePed() // Position - 0x215
{
	if (ENTITY::IS_ENTITY_DEAD(ped, false))
	{
		ped = PED::CREATE_PED(PED_TYPE_CIVFEMALE, pedModelHash, entityWorldOffset.X, entityWorldOffset.Y, entityWorldOffset.Z, entityWorldHeading, true, true);
		PED::SET_PED_RANDOM_COMPONENT_VARIATION(ped, 0);
		PED::SET_PED_CAN_BE_TARGETTED(ped, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(ped, true);
	}

	return;
}

BOOL LoadModelAndAnimDict() // Position - 0x253
{
	STREAMING::REQUEST_MODEL(pedModelHash);
	STREAMING::REQUEST_ANIM_DICT(animDict);

	if (STREAMING::HAS_MODEL_LOADED(pedModelHash) && STREAMING::HAS_ANIM_DICT_LOADED(animDict))
	{
		return true;
	}
	else
	{
		STREAMING::REQUEST_MODEL(pedModelHash);
		STREAMING::REQUEST_ANIM_DICT(animDict);
	}

	return false;
}

