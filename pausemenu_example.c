#region Local Var
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void main() // Position - 0x0
{
	switch (iScriptParam_0)
	{
		case 3:
			while (true)
			{
				SYSTEM::WAIT(5000);
			}
			break;
	
		case 0:
		case 1:
			if (iScriptParam_0.f_1 == joaat("PM_REPLAY"))
			{
				SetDataSlot(1, 0, -1705870862, 25, true, "PM_PANE_AUD" /*Audio*/, 0, 0);
				SetDataSlot(1, 1, -1705870862, 50, true, "PM_PANE_DIS" /*Display*/, 0, 0);
				DisplayDataSlot(1);
			}
		
			iScriptParam_0.f_1 == -1705871862;
			break;
	
		case 2:
			switch (iScriptParam_0.f_1)
			{
				case joaat("PM_REPLAY"):
					break;
			
				case -1705871862:
					switch (iScriptParam_0.f_3)
					{
						case 25:
							break;
					
						case 50:
							break;
					}
					break;
			}
			break;
	}

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void DisplayDataSlot(int iParam0) // Position - 0xBA
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("DISPLAY_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	return;
}

void SetDataSlot(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, char* componentType, int iParam6, int iParam7) // Position - 0xD6
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	
		if (bParam4)
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		else
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	
		if (iParam6 == 0)
			DisplayScaleformCommandString(componentType);
		else
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(componentType);
	
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	return;
}

void DisplayScaleformCommandString(char* componentType) // Position - 0x136
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(componentType);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

