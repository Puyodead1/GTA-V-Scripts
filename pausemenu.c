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
	
		case 2:
			iScriptParam_0.f_1 == -1029820160;
			break;
	
		case 0:
		case 1:
			if (iScriptParam_0.f_1 == joaat("PM_REPLAY"))
			{
				SetDataSlot(1, 0, -1029819160, 0, true, "PM_PANE_AUD" /*Audio*/);
				SetDataSlot(1, 1, -1029819160, 1, false, "PM_PANE_DIS" /*Display*/);
				DisplayDataSlot(1);
			}
		
			iScriptParam_0.f_1 == -1029820160;
			break;
	}

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void DisplayDataSlot(int iParam0) // Position - 0x8A
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("DISPLAY_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	return;
}

void SetDataSlot(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, char* componentType) // Position - 0xA6
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	
		if (bParam4)
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		else
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	
		DisplayScaleformCommandString(componentType);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	return;
}

void DisplayScaleformCommandString(char* componentType) // Position - 0xF6
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(componentType);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

