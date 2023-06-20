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
	int scaleform = 0;
	Cam defaultScriptedCamera = 0;
	Blip blip = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	BOOL bLeftPressed = 0;
	BOOL bLocal_22 = 0;
	float fLeft = 0f;
	BOOL bRightPressed = 0;
	BOOL bLocal_25 = 0;
	float fRight = 0f;
	BOOL bUpPressed = 0;
	BOOL bLocal_28 = 0;
	float fUp = 0f;
	BOOL bDownPressed = 0;
	BOOL bLocal_31 = 0;
	float fDown = 0f;
	BOOL bCancelPressed = 0;
	BOOL bLocal_34 = 0;
	float fCancel = 0f;
	BOOL bYPressed = 0;
	BOOL bLocal_37 = 0;
	float fY = 0f;
	BOOL bAcceptPressed = 0;
	BOOL bLocal_40 = 0;
	float fAccept = 0f;
	BOOL bXPressed = 0;
	BOOL bLocal_43 = 0;
	float fX = 0f;
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
	blip = HUD::ADD_BLIP_FOR_COORD(100f, 100f, 30f);
	iLocal_20 = 1;
	fLeft = 0f;
	fRight = 0f;
	fUp = 0f;
	fDown = 0f;
	fCancel = 0f;
	fY = 0f;
	fAccept = 0f;
	fX = 0f;

	if (CAM::IS_SCREEN_FADED_OUT())
		CAM::DO_SCREEN_FADE_IN(500);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
		CleanupAndTerminate();

	scaleform = GRAPHICS::REQUEST_SCALEFORM_MOVIE("p_bubblegum");

	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(scaleform))
	{
		SYSTEM::WAIT(0);
	}

	while (true)
	{
		iLocal_19 == 1;
	
		if (iLocal_20 == 1)
		{
			iLocal_20 = 0;
			defaultScriptedCamera = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
		
			if (CAM::DOES_CAM_EXIST(defaultScriptedCamera))
			{
				CAM::SET_CAM_PARAMS(defaultScriptedCamera, -160.6632f, -1072.1438f, -1615.471f, -89.4999f, -0.2863f, 58.1189f, 45f, 0, 1, 1, 2);
				CAM::SET_CAM_NEAR_CLIP(defaultScriptedCamera, 0.01f);
				CAM::SET_CAM_FAR_CLIP(defaultScriptedCamera, 0.02f);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			}
		
			HUD::SET_BLIP_SPRITE(blip, BLIP_RANDOM_CHARACTER);
		}
	
		iLocal_19 = 1;
		GRAPHICS::DRAW_SCALEFORM_MOVIE(scaleform, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		HandleInput(scaleform);
		SYSTEM::WAIT(0);
	}

	return;
}

void HandleInput(int iParam0) // Position - 0x13F
{
	if (Global_20479 == 0)
	{
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT) || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
		{
			Global_20479 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
	else if (SYSTEM::TIMERA() > 50)
	{
		Global_20479 = 0;
	}

	if (Global_20479 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
		{
			bLeftPressed = true;
			fLeft = 1f;
		}
	
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
		{
			bLeftPressed = true;
			fLeft = 1f;
		}
	
		if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
		{
			bLeftPressed = false;
			fLeft = 0f;
		}
	
		if (!bLeftPressed == bLocal_22)
		{
			bLocal_22 = bLeftPressed;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLeft);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
		{
			bRightPressed = true;
			fRight = 1f;
		}
	
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
		{
			bRightPressed = true;
			fRight = 1f;
		}
	
		if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
		{
			bRightPressed = false;
			fRight = 0f;
		}
	
		if (!bRightPressed == bLocal_25)
		{
			bLocal_25 = bRightPressed;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fRight);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP))
		{
			bUpPressed = true;
			fUp = 1f;
		}
	
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP))
		{
			bUpPressed = true;
			fUp = 1f;
		}
	
		if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP))
		{
			bUpPressed = false;
			fUp = 0f;
		}
	
		if (!bUpPressed == bLocal_28)
		{
			bLocal_28 = bUpPressed;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fUp);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN))
		{
			bDownPressed = true;
			fDown = 1f;
		}
	
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN))
		{
			bDownPressed = true;
			fDown = 1f;
		}
	
		if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN))
		{
			bDownPressed = false;
			fDown = 0f;
		}
	
		if (!bDownPressed == bLocal_31)
		{
			bLocal_31 = bDownPressed;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fDown);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL))
		{
			bCancelPressed = true;
			fCancel = 1f;
		}
	
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL))
		{
			bCancelPressed = true;
			fCancel = 1f;
		}
	
		if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL))
		{
			bCancelPressed = false;
			fCancel = 0f;
		}
	
		if (!bCancelPressed == bLocal_34)
		{
			bLocal_34 = bCancelPressed;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(17);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fCancel);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_Y))
		{
			bYPressed = true;
			fY = 1f;
		}
	
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_Y))
		{
			bYPressed = true;
			fY = 1f;
		}
	
		if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_Y))
		{
			bYPressed = false;
			fY = 0f;
		}
	
		if (!bYPressed == bLocal_37)
		{
			bLocal_37 = bYPressed;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(15);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fY);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT))
		{
			bAcceptPressed = true;
			fAccept = 1f;
		}
	
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT))
		{
			bAcceptPressed = true;
			fAccept = 1f;
		}
	
		if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT))
		{
			bAcceptPressed = false;
			fAccept = 0f;
		}
	
		if (!bAcceptPressed == bLocal_40)
		{
			bLocal_40 = bAcceptPressed;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fAccept);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_X))
		{
			bXPressed = true;
			fX = 1f;
		}
	
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_X))
		{
			bXPressed = true;
			fX = 1f;
		}
	
		if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_X))
		{
			bXPressed = false;
			fX = 0f;
		}
	
		if (!bXPressed == bLocal_43)
		{
			bLocal_43 = bXPressed;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(14);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fX);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}

	return;
}

void CleanupAndTerminate() // Position - 0x43D
{
	if (CAM::DOES_CAM_EXIST(defaultScriptedCamera))
		CAM::DESTROY_CAM(defaultScriptedCamera, false);

	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	func_3(false);
	MISC::SET_GAME_PAUSED(false);
	HUD::CLEAR_HELP(true);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&scaleform);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_3(BOOL bParam0) // Position - 0x47A
{
	if (bParam0)
	{
		func_10();
	
		if (Global_20500.f_1 == 10 || Global_20500.f_1 == 9)
			MISC::SET_BIT(&Global_8371, 16);
	
		Global_20500.f_1 = 1;
	
		if (func_9(0))
			func_4(0);
	}
	else if (Global_20500.f_1 == 1)
	{
		if (!(Global_20500.f_1 == 0))
			Global_20500.f_1 = 3;
	}

	return;
}

void func_4(int iParam0) // Position - 0x4DD
{
	if (func_8())
		return;

	if (Global_20704)
		if (func_7())
			func_6(true, true);
		else
			func_6(false, false);

	if (Global_20500.f_1 == 10 || Global_20500.f_1 == 9)
		MISC::SET_BIT(&Global_8371, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_21845 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8370, 30);
	else
		MISC::CLEAR_BIT(&Global_8370, 30);

	if (!func_5())
		Global_20500.f_1 = 3;

	return;
}

BOOL func_5() // Position - 0x567
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
		return true;

	return false;
}

void func_6(BOOL bParam0, BOOL bParam1) // Position - 0x58E
{
	if (bParam0)
	{
		if (func_9(0))
		{
			Global_20704 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20437);
		
			Global_20428 = { Global_20446[Global_20445] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20428);
		}
	}
	else if (Global_20704 == true)
	{
		Global_20704 = false;
		Global_20428 = { Global_20453[Global_20445] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20437);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20428);
	}

	return;
}

BOOL func_7() // Position - 0x602
{
	return IS_BIT_SET(Global_1963795, 5);
}

BOOL func_8() // Position - 0x610
{
	return IS_BIT_SET(Global_1963795, 19);
}

BOOL func_9(int iParam0) // Position - 0x61F
{
	if (iParam0 == 1)
		if (Global_20500.f_1 > 3)
			if (IS_BIT_SET(Global_8370, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_20500.f_1 > 3)
		return true;

	return false;
}

void func_10() // Position - 0x676
{
	if (Global_20500.f_1 == 9 || Global_20500.f_1 == 10)
	{
		Global_21898 = 0;
		Global_21894 = 1;
	}

	return;
}

