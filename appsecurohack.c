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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
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
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();

	if (iLocal_18 == 0)
	{
		SetDataSlotAndSoftKeys();
		iLocal_18 = 1;
	}

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (Global_20500.f_1 != 9)
		{
			switch (Global_20500.f_1)
			{
				case 7:
					if (iLocal_18 == 1)
						SetDataSlotAndDisableControlAction();
					break;
			
				case 8:
					if (func_5(FRONTEND_CONTROL, Global_20468, 0))
					{
						PlayMenuBackSound();
						Global_20478 = 1;
					
						if (Global_20500.f_1 > 3)
							Global_20500.f_1 = 7;
					}
					break;
			
				default:
					break;
			}
		
			if (func_3())
				Terminate();
		}
		else
		{
			Global_20502 = 6;
			Terminate();
		}
	
		if (func_1())
			Terminate();
	}

	return;
}

BOOL func_1() // Position - 0xC9
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 3 || Global_20500.f_1 == 0 || Global_20444 == 1)
	{
		Global_20487 = 1;
		return true;
	}

	return false;
}

void Terminate() // Position - 0x10C
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_3() // Position - 0x118
{
	if (Global_8976 == 1 || Global_20500.f_1 < 7)
	{
		Global_20487 = 1;
		return true;
	}

	return false;
}

void PlayMenuBackSound() // Position - 0x141
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &G_AudioRef, true);

	return;
}

BOOL func_5(eControlType ectParam0, eControlAction ecaParam1, int iParam2) // Position - 0x161
{
	if (PAD::IS_CONTROL_JUST_PRESSED(ectParam0, ecaParam1) || iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(ectParam0, ecaParam1))
	{
		if (MISC::IS_PC_VERSION())
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
				return false;
	
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
			return false;
		else
			return true;
	}

	return false;
}

void SetDataSlotAndDisableControlAction() // Position - 0x1D3
{
	SetDataSlot();
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
	return;
}

void SetDataSlot() // Position - 0x1E7
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(G_Scaleform, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(27);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4542590);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4542589);
	DrawScaleformTextComponent("");
	DrawScaleformTextComponent(&Global_4542591);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(G_Scaleform, "DISPLAY_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(27);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();

	if (!IS_BIT_SET(Global_4718592.f_21, 30))
		SetScaleformParams(G_Scaleform, "SET_SOFT_KEYS", 3f, 0f, 27f, -1f, -1f, 0, 0, 0, 0, 0);

	return;
}

void SetScaleformParams(int scaleform, char* methodName, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, const char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Position - 0x262
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(scaleform, methodName);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));

	if (fParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));

	if (fParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));

	if (fParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));

	if (fParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
		DrawScaleformTextComponent(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		DrawScaleformTextComponent(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		DrawScaleformTextComponent(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		DrawScaleformTextComponent(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		DrawScaleformTextComponent(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void DrawScaleformTextComponent(const char* componentType) // Position - 0x315
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(componentType);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void SetDataSlotAndSoftKeys() // Position - 0x327
{
	SetDataSlot();
	SetScaleformParams(G_Scaleform, "SET_SOFT_KEYS", 2f, 0f, 27f, -1f, -1f, 0, 0, 0, 0, 0);
	return;
}

