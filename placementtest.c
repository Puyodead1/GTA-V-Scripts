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
	char* sLocal_18 = 0;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int state = 0;
	int gameTimer = 0;
#endregion

void main() // Position - 0x0
{
	int scaleformHandle;

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
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	scaleformHandle = LoadScaleformMovie();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
		SCRIPT::TERMINATE_THIS_THREAD();

	while (true)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(scaleformHandle))
		{
			switch (state)
			{
				case 0:
					SetSplashTextLabel(&scaleformHandle, "OFFR_BLIP_R5", 255, 0, 255, 255, false);
					TransitionIn(&scaleformHandle);
					gameTimer = MISC::GET_GAME_TIMER();
					state = 1;
					break;
			
				case 1:
					if (MISC::GET_GAME_TIMER() - gameTimer > 3000)
					{
						TransitionOut(&scaleformHandle);
						state = 2;
					}
					break;
			}
		
			func_1(&scaleformHandle, false);
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

BOOL func_1(var scaleform, BOOL bParam1) // Position - 0xEF
{
	if (!func_8(&(scaleform->f_2)))
		func_6(&(scaleform->f_2));

	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_RETICLE);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE(*scaleform, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);

	if (bParam1)
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT))
			return false;

	if (scaleform->f_1 == -1)
		return true;

	if (func_3(&(scaleform->f_2)) * 1000f > SYSTEM::TO_FLOAT(scaleform->f_1))
	{
		func_2(&(scaleform->f_2));
		return false;
	}

	return true;
}

void func_2(var uParam0) // Position - 0x175
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

float func_3(var uParam0) // Position - 0x18B
{
	if (func_8(uParam0))
		if (func_5(uParam0))
			return uParam0->f_2;
		else
			return func_4(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1;

	return uParam0->f_1;
}

float func_4(BOOL bParam0) // Position - 0x1C7
{
	float num;
	float num2;
	int networkTime;
	float num3;
	float num4;

	if (bParam0)
	{
		num = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		num2 = num / 1000f;
		return num2;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTime = NETWORK::GET_NETWORK_TIME();
		num3 = SYSTEM::TO_FLOAT(networkTime);
		num4 = num3 / 1000f;
		return num4;
	}

	return SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_5(var uParam0) // Position - 0x21F
{
	return IS_BIT_SET(*uParam0, 2);
}

void func_6(int* piParam0) // Position - 0x22C
{
	func_7(piParam0, 0f);
	return;
}

void func_7(int* piParam0, float fParam1) // Position - 0x23B
{
	piParam0->f_1 = func_4(IS_BIT_SET(*piParam0, 4)) - fParam1;
	MISC::SET_BIT(piParam0, 1);
	MISC::CLEAR_BIT(piParam0, 2);
	piParam0->f_2 = 0f;
	return;
}

BOOL func_8(var uParam0) // Position - 0x266
{
	return IS_BIT_SET(*uParam0, 1);
}

void TransitionOut(var scaleform) // Position - 0x273
{
	scaleform->f_1 = 300;
	func_6(&(scaleform->f_2));
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*scaleform, "SPLASH_TEXT_TRANSITION_OUT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(300); // duration
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void TransitionIn(var scaleform) // Position - 0x2A0
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*scaleform, "SPLASH_TEXT_TRANSITION_IN");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void SetSplashTextLabel(var scaleform, char* text, int r, int g, int b, int a, BOOL bTransitionIn) // Position - 0x2B7
{
	scaleform->f_1 = -1;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*scaleform, "SPLASH_TEXT_LABEL");
	DisplayScaleformText(text);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(r);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(g);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(b);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(a);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();

	if (bTransitionIn)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*scaleform, "SPLASH_TEXT_TRANSITION_IN");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	return;
}

void DisplayScaleformText(char* componentType) // Position - 0x305
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(componentType);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

int LoadScaleformMovie() // Position - 0x317
{
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE("SPLASH_TEXT");
}

