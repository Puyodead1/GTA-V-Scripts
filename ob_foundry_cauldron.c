#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int state = 0;
	int steamParticleFx = 0;
	Object closestCraneBucketObject = 0;
	Object obScriptParam_5 = 0;
#endregion

void main() // Position - 0x0
{
	Interior interiorFromEntity;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
		CleanupAndTerminate();

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (ENTITY::DOES_ENTITY_EXIST(obScriptParam_5))
		{
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(obScriptParam_5) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("finalec1")) == 0)
			{
				switch (state)
				{
					case 0:
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							interiorFromEntity = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						
							if (INTERIOR::IS_VALID_INTERIOR(interiorFromEntity))
							{
								if (INTERIOR::IS_INTERIOR_READY(interiorFromEntity))
								{
									if (INTERIOR::IS_INTERIOR_SCENE())
									{
										STREAMING::REQUEST_PTFX_ASSET();
										state = 1;
									}
								}
							}
						}
						break;
				
					case 1:
						if (STREAMING::HAS_PTFX_ASSET_LOADED())
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (!ENTITY::DOES_ENTITY_EXIST(closestCraneBucketObject))
									closestCraneBucketObject = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1090f, -1996f, 39f, 100f, joaat("v_ilev_found_cranebucket"), true, false, true);
							
								if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(steamParticleFx))
								{
									if (ENTITY::DOES_ENTITY_EXIST(closestCraneBucketObject))
									{
										interiorFromEntity = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
									
										if (INTERIOR::IS_VALID_INTERIOR(interiorFromEntity))
											if (INTERIOR::IS_INTERIOR_READY(interiorFromEntity))
												if (INTERIOR::IS_INTERIOR_SCENE())
													steamParticleFx = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_obfoundry_cauldron_steam", closestCraneBucketObject, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, false, false, false);
									}
								}
							}
						}
						break;
				
					case 2:
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

void CleanupAndTerminate() // Position - 0x135
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(steamParticleFx))
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(steamParticleFx, false);

	if (ENTITY::DOES_ENTITY_EXIST(closestCraneBucketObject))
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&closestCraneBucketObject);

	Print("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\\n");
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}