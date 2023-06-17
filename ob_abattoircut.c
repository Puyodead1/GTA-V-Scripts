#region Local Var
	int playState = 0;
	Object obScriptParam_3 = 0;
#endregion

void main() // Position - 0x0
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
		Terminate();

	if (ENTITY::DOES_ENTITY_EXIST(obScriptParam_3))
		ENTITY::FREEZE_ENTITY_POSITION(obScriptParam_3, true);

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (ENTITY::DOES_ENTITY_EXIST(obScriptParam_3))
		{
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(obScriptParam_3) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael2")) > 0)
			{
				switch (playState)
				{
					case 0:
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(obScriptParam_3))
						{
							STREAMING::REQUEST_ANIM_DICT("MISSMIC2");
						
							if (STREAMING::HAS_ANIM_DICT_LOADED("MISSMIC2"))
							{
								ENTITY::PLAY_ENTITY_ANIM(obScriptParam_3, "beefsplitter_loop", "MISSMIC2", 1f, true, false, false, 0, 0);
								playState = 1;
							}
						}
						break;
				
					case 1:
						break;
				
					case 2:
						break;
				}
			}
			else
			{
				Terminate();
			}
		}
		else
		{
			Terminate();
		}
	}

	return;
}

void Terminate() // Position - 0xAF
{
	Print("ob_abattoir Terminated >>>>>>>>>>>>>>>>>\\n");
	STREAMING::REMOVE_ANIM_DICT("MISSMIC2");
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}