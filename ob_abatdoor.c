#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int state = 0;
	Object obLocal_3 = 0;
	var entityCoords = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var entityRotation = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	Object obScriptParam_10 = 0;
#endregion

void main() // Position - 0x0
{
	var entityCoordsWithOffset;
	var unk2;
	var unk3;
	float entityCoords;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
		CleanupAndTerminate();

	if (ENTITY::DOES_ENTITY_EXIST(obScriptParam_10))
	{
		ENTITY::FREEZE_ENTITY_POSITION(obScriptParam_10, true);
		entityCoords = { ENTITY::GET_ENTITY_COORDS(obScriptParam_10, true) };
		entityRotation = { ENTITY::GET_ENTITY_ROTATION(obScriptParam_10, 2) };
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
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(obScriptParam_10))
						{
							STREAMING::REQUEST_MODEL(joaat("p_abat_roller_1_col"));
						
							if (STREAMING::HAS_MODEL_LOADED(joaat("p_abat_roller_1_col")))
							{
								if (!DoCoordsMatch(entityCoords, 0f, 0f, 0f, false))
								{
									obLocal_3 = OBJECT::CREATE_OBJECT(joaat("p_abat_roller_1_col"), entityCoords, true, true, false);
									ENTITY::SET_ENTITY_ROTATION(obLocal_3, entityRotation, 2, true);
									state = 1;
								}
							}
						}
						break;
				
					case 1:
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(obScriptParam_10))
						{
							if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael2")) > 0)
							{
								STREAMING::REQUEST_ANIM_DICT("map_objects");
							
								if (STREAMING::HAS_ANIM_DICT_LOADED("map_objects"))
									state = 2;
							}
						}
						break;
				
					case 2:
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(obScriptParam_10))
						{
							if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael2")) > 0)
							{
								if (Global_97244)
								{
									if (STREAMING::HAS_ANIM_DICT_LOADED("map_objects"))
									{
										ENTITY::PLAY_ENTITY_ANIM(obScriptParam_10, "P_Abat_roller_1_open", "map_objects", 1f, false, true, false, 0, 0);
										state = 3;
									}
								}
							}
						}
						break;
				
					case 3:
						num = 0.35f;
						entityCoordsWithOffset = { entityCoords + { 3.45f, 0f, 0f } };
					
						if (ENTITY::DOES_ENTITY_EXIST(obLocal_3))
						{
							entityCoords = { ENTITY::GET_ENTITY_COORDS(obLocal_3, true) };
						
							if (!func_2(entityCoords, entityCoordsWithOffset, 0.1f, false))
							{
								unk6 = { entityCoordsWithOffset - entityCoords };
								ENTITY::SET_ENTITY_COORDS(obLocal_3, entityCoords + (func_1(unk6) * F2V(MISC::GET_FRAME_TIME()) * { num, num, num }), true, false, false, true);
							}
							else
							{
								Global_97245 = 1;
								state = 4;
							}
						}
						break;
				
					case 4:
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

Vector3 func_1(float fParam0, var uParam1, var uParam2) // Position - 0x1C6
{
	float num;
	float num2;

	num = SYSTEM::VMAG(fParam0);

	if (num != 0f)
	{
		num2 = 1f / num;
		fParam0 = { fParam0 * { num2, num2, num2 } };
	}
	else
	{
		fParam0 = 0f;
		fParam0.f_1 = 0f;
		fParam0.f_2 = 0f;
	}

	return fParam0;
}

BOOL func_2(float x, var y, var z, var x1, var y1, var z1, float fParam6, BOOL ignoreZ) // Position - 0x205
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (!ignoreZ)
		if (MISC::ABSF(x - x1) <= fParam6)
			if (MISC::ABSF(y - y1) <= fParam6)
				if (MISC::ABSF(z - z1) <= fParam6)
					return true;
	else if (MISC::ABSF(x - x1) <= fParam6)
		if (MISC::ABSF(y - y1) <= fParam6)
			return true;

	return false;
}

BOOL DoCoordsMatch(float x, var y, var z, float x1, float y1, float z1, BOOL ignoreZ) // Position - 0x280
{
	if (ignoreZ)
		return x == x1 && y == y1;

	return x == x1 && y == y1 && z == z1;
}

void CleanupAndTerminate() // Position - 0x2C7
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_3))
		OBJECT::DELETE_OBJECT(&obLocal_3);

	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_abat_roller_1_col"));
	Print("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\\n");
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}