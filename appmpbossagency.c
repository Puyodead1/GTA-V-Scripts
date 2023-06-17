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
	char* sLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	float fLocal_45 = 0f;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	int iLocal_111 = 0;
	Player plLocal_112 = 0;
	BOOL bLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
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
	sLocal_16 = "NULL";
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	fLocal_26 = 0f;
	fLocal_30 = -0.0375f;
	fLocal_31 = 0.17f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_45 = (0.05f + 0.275f) - 0.01f;
	TEXT_LABEL_ASSIGN_STRING(&uLocal_87, "CELL_206" /*BACK*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_91, "CELL_214" /*OPTIONS*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_95, "CELL_243" /*ACCEPT JOB*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_99, "CELL_244" /*CANCEL JOB*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_103, "CELL_265" /*INVITATION*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_107, "CELL_300" /*CHAR_DEFAULT*/, 16);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_99(&uLocal_114);
	iLocal_111 = 0;
	func_97();
	func_96(Global_20481, "SET_THEME", SYSTEM::TO_FLOAT(5), -1082130432, -1082130432, -1082130432, -1082130432);
	func_86(false);

	while (true)
	{
		SYSTEM::WAIT(0);
		func_85();
		func_84();
	
		if (!(Global_20500.f_1 == 9) && Global_20500.f_1 > 3)
		{
			switch (iLocal_86)
			{
				case 0:
					func_48();
					break;
			
				case 1:
					func_32();
					break;
			
				case 3:
					func_5();
					break;
			
				case 2:
					func_4();
					break;
			
				default:
					break;
			}
		
			if (Global_20500.f_1 != 8)
				if (func_3())
					func_2();
		}
	
		if (func_1())
			func_2();
	}

	return;
}

BOOL func_1() // Position - 0x170
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 3 || Global_20500.f_1 == 0 || Global_20444 == 1)
	{
		Global_20487 = 1;
		return true;
	}

	return false;
}

void func_2() // Position - 0x1B3
{
	Global_1890239.f_6 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_3() // Position - 0x1C6
{
	if (Global_8976 == 1 || Global_20500.f_1 < 7)
	{
		Global_20487 = 1;
		return true;
	}

	return false;
}

void func_4() // Position - 0x1EF
{
	return;
}

void func_5() // Position - 0x1F7
{
	int num;

	Global_1890239.f_6 = 1;

	if (bLocal_113)
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, Global_20469))
			bLocal_113 = false;
	
		return;
	}

	if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT))
	{
		iLocal_86 = 1;
		num = func_30(iLocal_111, 0);
		func_6(num);
		return;
	}

	if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL))
	{
		iLocal_86 = 1;
		return;
	}

	HUD::SET_WARNING_MESSAGE_WITH_HEADER("HUD_INPUT23" /*Confirm*/, "BA_APP_PASS_W" /*Are you sure you want to become a Bodyguard? Passive Mode is disabled when playing as a Bodyguard.*/, 36, 0, false, -1, 0, 0, true, 0);
	return;
}

void func_6(int iParam0) // Position - 0x25E
{
	Player player;

	player = Global_1890239.f_7[iParam0].f_2;

	if (Global_1890239.f_7[iParam0].f_1 == 1 && plLocal_112 == player)
	{
		func_26(player, Global_1890239.f_7[iParam0].f_6);
		func_13(iParam0);
	}

	Global_1890239.f_6 = 0;
	func_7(0);
	return;
}

void func_7(int iParam0) // Position - 0x2B3
{
	if (func_12())
		return;

	if (Global_20704)
		if (func_11())
			func_9(true, true);
		else
			func_9(false, false);

	if (Global_20500.f_1 == 10 || Global_20500.f_1 == 9)
		MISC::SET_BIT(&Global_8371, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_21845 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8370, 30);
	else
		MISC::CLEAR_BIT(&Global_8370, 30);

	if (!func_8())
		Global_20500.f_1 = 3;

	return;
}

BOOL func_8() // Position - 0x33D
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
		return true;

	return false;
}

void func_9(BOOL bParam0, BOOL bParam1) // Position - 0x364
{
	if (bParam0)
	{
		if (func_10(0))
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

BOOL func_10(int iParam0) // Position - 0x3D8
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

BOOL func_11() // Position - 0x42F
{
	return IS_BIT_SET(Global_1963795, 5);
}

BOOL func_12() // Position - 0x43D
{
	return IS_BIT_SET(Global_1963795, 19);
}

void func_13(int iParam0) // Position - 0x44C
{
	int i;

	if (iParam0 != -1)
	{
		if (Global_1890239.f_7[iParam0].f_1 == 1)
		{
			if (IS_BIT_SET(Global_1890239.f_7[iParam0].f_5, 0))
			{
				func_25();
			
				if (Global_1890239.f_7[iParam0].f_7 == 0)
				{
					func_25();
				}
				else
				{
					Global_1890239.f_4 = Global_1890239.f_4 - 1;
				
					if (Global_1890239.f_4 < 0)
						Global_1890239.f_4 = 0;
				
					func_18();
				}
			}
		
			MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID()].f_10.f_22), Global_1890239.f_7[iParam0].f_2);
			HUD::THEFEED_REMOVE_ITEM(Global_1890239.f_7[iParam0].f_4);
			func_17();
			func_15(0);
		}
	
		for (i = iParam0; i <= 8; i = i + 1)
		{
			Global_1890239.f_7[i] = { Global_1890239.f_7[i + 1] };
		}
	
		Global_1890239.f_7[9].f_1 = 0;
		Global_1890239.f_7[9].f_2 = _INVALID_PLAYER_INDEX();
	}

	return;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x53E
{
	return -1;
}

void func_15(int iParam0) // Position - 0x547
{
	if (!func_16(iParam0))
		MISC::SET_BIT(&(Global_1890239.f_3), iParam0);

	return;
}

BOOL func_16(int iParam0) // Position - 0x565
{
	return IS_BIT_SET(Global_1890239.f_3, iParam0);
}

void func_17() // Position - 0x576
{
	Global_1890239 = Global_1890239 - 1;
	return;
}

void func_18() // Position - 0x588
{
	Global_22908 = Global_22908 - 1;

	if (Global_22908 < 0)
		func_24("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");

	func_19();
	return;
}

void func_19() // Position - 0x5AA
{
	if (!Global_20705)
	{
		if (Global_20500.f_1 == 6)
		{
			func_96(Global_20481, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_20(1);
			func_96(Global_20481, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20480), -1082130432, -1082130432, -1082130432);
		}
	}

	return;
}

void func_20(int iParam0) // Position - 0x607
{
	int i;
	int num;
	int value;
	int j;
	int value2;
	int k;
	int value3;
	int value4;
	int value5;
	int value6;

	Global_22913 = 0;
	Global_8975 = iParam0;

	for (i = 0; i < 9; i = i + 1)
	{
		Global_8939[i] = 0;
	}

	for (i = 0; i < 9; i = i + 1)
	{
		num = 0;
	
		if (func_23(14))
		{
			while (num < 34)
			{
				if (iParam0 == Global_8377[num].f_11)
				{
					if (i == Global_8377[num].f_4)
					{
						if (Global_8939[i] == 0)
						{
							Global_8903[i] = num;
						
							if (num == 3)
							{
								if (IS_BIT_SET(Global_8371, 3))
								{
									value = 42;
									Global_20708 = 1;
								}
								else
								{
									value = 255;
									Global_20708 = 0;
								}
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[num].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_22(&Global_8377[num]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
						
							if (Global_2694571)
								if (num == 14)
									func_21(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8377[num].f_10), SYSTEM::TO_FLOAT(Global_22908), -1f, &Global_8377[num], 0, 0, 0, 0);
						
							Global_8939[i] = 1;
						}
					}
				}
			
				num = num + 1;
			}
		}
		else
		{
			while (num < 34)
			{
				if (iParam0 == Global_8377[num].f_11)
				{
					if (i == Global_8377[num].f_4)
					{
						if (Global_8939[i] == 0)
						{
							Global_8903[i] = num;
						
							if (num == 1)
							{
								for (j = 0; j < 35; j = j + 1)
								{
									if (Global_113810.f_14144[j].f_24 != 0)
										if (Global_113810.f_14144[j].f_28 == 0)
											if (Global_113810.f_14144[j].f_99[Global_20500] == 1)
												Global_22913 = Global_22913 + 1;
								}
							
								func_21(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8377[num].f_10), SYSTEM::TO_FLOAT(Global_22913), -1f, &Global_8377[num], 0, 0, 0, 0);
							}
							else if (num == 7)
							{
								if (Global_78689)
								{
									value2 = 0;
									value2 = Global_4541036;
								
									for (k = 0; k < 12; k = k + 1)
									{
										if (Global_4541037[k].f_24 != 0)
											if (Global_4541037[k].f_28 == 0)
												if (Global_4541037[k].f_99[Global_20500] == 1)
													value2 = value2 + 1;
									}
								
									func_21(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8377[num].f_10), SYSTEM::TO_FLOAT(value2), -1f, &Global_8377[num], 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20500)
									{
										case 0:
											value3 = Global_44580;
											break;
									
										case 1:
											value3 = Global_44581;
											break;
									
										case 2:
											value3 = Global_44582;
											break;
									
										default:
											break;
									}
								
									func_21(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8377[num].f_10), SYSTEM::TO_FLOAT(value3), -1f, &Global_8377[num], 0, 0, 0, 0);
								}
							}
							else if (num == 14)
							{
								func_21(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8377[num].f_10), SYSTEM::TO_FLOAT(Global_22908), -1f, &Global_8377[num], 0, 0, 0, 0);
							}
							else if (num == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[num].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_22(&Global_8377[num]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8376);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 2)
							{
								if (IS_BIT_SET(Global_8371, 6))
									value4 = 42;
								else
									value4 = 255;
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[num].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_22(&Global_8377[num]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value4);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 3)
							{
								if (IS_BIT_SET(Global_8371, 3))
								{
									value5 = 42;
									Global_20708 = 1;
								}
								else
								{
									value5 = 255;
									Global_20708 = 0;
								}
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[num].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_22(&Global_8377[num]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value5);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[num].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_22(&Global_8377[num]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 23 && MISC::ARE_STRINGS_EQUAL(&Global_8377[num], "CELL_BENWEB" /*Benny's*/) && IS_BIT_SET(Global_8371, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[num].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_22(&Global_8377[num]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8377[num].f_10 == 57 && num == 23)
							{
								value6 = 0;
								value6 = Global_1890239.f_1;
								func_21(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8377[num].f_10), SYSTEM::TO_FLOAT(value6), -1f, &Global_8377[num], 0, 0, 0, 0);
							}
							else
							{
								func_21(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8377[num].f_10), SYSTEM::TO_FLOAT(0), -1f, &Global_8377[num], 0, 0, 0, 0);
							}
						
							Global_8939[i] = 1;
						}
					}
				}
			
				num = num + 1;
			}
		}
	}

	return;
}

void func_21(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, const char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Position - 0xB93
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
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
		func_22(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_22(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_22(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_22(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_22(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_22(const char* sParam0) // Position - 0xC46
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

BOOL func_23(int iParam0) // Position - 0xC58
{
	return Global_43377 == iParam0;
}

void func_24(char* sParam0) // Position - 0xC66
{
	if (Global_22908 != 0)
	{
		!MISC::IS_STRING_NULL_OR_EMPTY(sParam0);
		Global_22908 = 0;
	}

	return;
}

void func_25() // Position - 0xC83
{
	Global_1890239.f_1 = Global_1890239.f_1 - 1;

	if (Global_1890239.f_1 < 0)
		Global_1890239.f_1 = 0;

	return;
}

void func_26(Player plParam0, var uParam1) // Position - 0xCAA
{
	if (Global_1895156[PLAYER::PLAYER_ID()].f_10.f_26 == _INVALID_PLAYER_INDEX())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		{
			Global_1895156[PLAYER::PLAYER_ID()].f_10.f_26 = plParam0;
			Global_2794162.f_5231.f_226 = uParam1;
			func_27(func_28(plParam0));
		}
	}

	return;
}

void func_27(int iParam0) // Position - 0xCFA
{
	struct<2> eventData;

	eventData = -627920584;
	eventData.f_1 = PLAYER::PLAYER_ID();

	if (!(iParam0 == 0))
		SCRIPT::SEND_TU_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &eventData, 2, iParam0);

	return;
}

int func_28(Player plParam0) // Position - 0xD26
{
	int address;

	if (func_29(plParam0))
		MISC::SET_BIT(&address, plParam0);

	return address;
}

BOOL func_29(Player plParam0) // Position - 0xD41
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

int func_30(int iParam0, int iParam1) // Position - 0xD63
{
	int i;

	for (i = 0; i < func_31(); i = i + 1)
	{
		if (Global_1890239.f_7[i].f_7 == iParam1)
		{
			iParam0 = iParam0 - 1;
		
			if (iParam0 < 0)
				return i;
		}
	}

	return 0;
}

int func_31() // Position - 0xDA3
{
	return Global_1890239;
}

void func_32() // Position - 0xDAF
{
	int num;
	Player player;

	num = func_30(iLocal_111, 0);

	if (iLocal_111 == -1)
	{
		func_86(true);
		return;
	}

	player = Global_1890239.f_7[num].f_2;

	if (!_NETWORK_IS_PLAYER_VALID(player, false, true) || plLocal_112 != player)
	{
		func_86(true);
		return;
	}

	func_42(&uLocal_114);

	if (func_40(&uLocal_114))
	{
		func_86(true);
		return;
	}

	if (func_39(&uLocal_114))
	{
		func_13(num);
		func_86(true);
		return;
	}

	if (func_35(&uLocal_114))
	{
		if (func_34())
		{
			bLocal_113 = true;
			iLocal_86 = 3;
		}
		else if (Global_1890239.f_7[num] == 0)
		{
			func_6(num);
		}
		else if (Global_1890239.f_7[num] == 1)
		{
			func_33(num);
		}
		else
		{
			func_7(0);
		}
	}

	return;
}

void func_33(int iParam0) // Position - 0xE75
{
	MISC::SET_BIT(&Global_1836080, 15);
	func_13(iParam0);
	Global_1890239.f_6 = 0;
	func_7(0);
	return;
}

BOOL func_34() // Position - 0xE99
{
	return Global_1574582;
}

BOOL func_35(var uParam0) // Position - 0xEA5
{
	if (!IS_BIT_SET(*uParam0, 0))
		return false;

	if (Global_20478)
		return false;

	if (!CAM::IS_SCREEN_FADED_IN())
		return false;

	if (!PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, Global_20469))
		return false;

	func_36();
	Global_20478 = true;
	return true;
}

void func_36() // Position - 0xEE9
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20489, true);
		func_37();
	}

	return;
}

void func_37() // Position - 0xF0E
{
	if (func_38())
		MOBILE::CELL_SET_INPUT(5);

	return;
}

BOOL func_38() // Position - 0xF22
{
	eViewModeContext camActiveViewModeContext;
	eViewMode camViewModeForContext;
	int num;

	if (Global_78689)
		return false;

	num = 0;
	camActiveViewModeContext = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	camViewModeForContext = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);

	if (camViewModeForContext == FIRST_PERSON)
		num = 1;

	if (Global_4542580 || num)
		return true;

	return true;
}

BOOL func_39(var uParam0) // Position - 0xF69
{
	if (!IS_BIT_SET(*uParam0, 1))
		return false;

	if (Global_20478)
		return false;

	if (!CAM::IS_SCREEN_FADED_IN())
		return false;

	if (!PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, Global_20472))
		return false;

	func_36();
	Global_20478 = true;
	return true;
}

BOOL func_40(var uParam0) // Position - 0xFAD
{
	if (!IS_BIT_SET(*uParam0, 2))
		return false;

	if (Global_20478)
		return false;

	if (!CAM::IS_SCREEN_FADED_IN())
		return false;

	if (!PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, Global_20470))
		return false;

	func_41();
	Global_20478 = true;
	return true;
}

void func_41() // Position - 0xFF1
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20489, true);

	return;
}

void func_42(var uParam0) // Position - 0x1013
{
	if (MISC::GET_GAME_TIMER() < uParam0->f_1)
		return;

	if (!CAM::IS_SCREEN_FADED_IN())
		return;

	if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, Global_20476) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD))
	{
		func_45();
		uParam0->f_1 = MISC::GET_GAME_TIMER() + 50;
	}

	if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, Global_20477) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD))
	{
		func_43();
		uParam0->f_1 = MISC::GET_GAME_TIMER() + 50;
	}

	return;
}

void func_43() // Position - 0x1080
{
	func_96(Global_20481, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20489, true);
	func_44();
	return;
}

void func_44() // Position - 0x10BD
{
	if (func_38())
		if (Global_20709 == 0)
			MOBILE::CELL_SET_INPUT(2);
		else
			MOBILE::CELL_SET_INPUT(1);

	return;
}

void func_45() // Position - 0x10E0
{
	func_96(Global_20481, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20489, true);
	func_46();
	return;
}

void func_46() // Position - 0x111D
{
	if (func_38())
		if (Global_20709 == 0)
			MOBILE::CELL_SET_INPUT(1);
		else
			MOBILE::CELL_SET_INPUT(2);

	return;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x1140
{
	Player player;

	player = player;

	if (player != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
			if (bIsPlaying)
				if (!PLAYER::IS_PLAYER_PLAYING(player))
					return false;
		
			if (bUnk)
				if (player == Global_2672524.f_3)
					return Global_2672524.f_2;
				else if (Global_2657704[player] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

void func_48() // Position - 0x11A0
{
	int methodReturn;
	int num;
	int methodReturn2;
	int num2;

	if (func_31() > 1)
		func_42(&uLocal_114);

	if (func_35(&uLocal_114))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "GET_CURRENT_SELECTION");
		methodReturn = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
	
		while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(methodReturn))
		{
			SYSTEM::WAIT(0);
		}
	
		iLocal_111 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(methodReturn);
		num = func_30(iLocal_111, 0);
	
		switch (Global_1890239.f_7[num].f_1)
		{
			case 0:
				return;
		
			case 1:
				func_50();
				break;
		
			default:
				return;
		}
	
		Global_20500.f_1 = 8;
		return;
	}

	if (func_39(&uLocal_114))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "GET_CURRENT_SELECTION");
		methodReturn2 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
	
		while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(methodReturn2))
		{
			SYSTEM::WAIT(0);
		}
	
		iLocal_111 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(methodReturn2);
		num2 = func_30(iLocal_111, 0);
	
		switch (Global_1890239.f_7[num2].f_1)
		{
			case 0:
				return;
		
			case 1:
				func_13(num2);
				func_86(false);
				return;
		
			default:
				return;
		}
	
		return;
		return;
	}

	if (func_16(0))
	{
		func_49(0);
		func_86(false);
	}

	return;
}

void func_49(int iParam0) // Position - 0x12AC
{
	if (func_16(iParam0))
		MISC::CLEAR_BIT(&(Global_1890239.f_3), iParam0);

	return;
}

void func_50() // Position - 0x12C9
{
	BOOL flag;
	const char* pedheadshotTxdString;
	int num;
	int num2;
	Player player;
	var text;
	var unk;
	BOOL unk2;
	int unk3;
	int unk4;
	var unk5;
	var unk6;
	var unk7;

	if (Global_20500.f_1 != 8)
		Global_20500.f_1 = 8;

	func_96(Global_20481, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	flag = false;
	num2 = func_30(iLocal_111, 0);
	plLocal_112 = Global_1890239.f_7[num2].f_2;
	player = Global_1890239.f_7[num2].f_2;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(26);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);

	if (_NETWORK_IS_PLAYER_VALID(player, false, true))
	{
		text = { func_83(player) };
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_77(player));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&text);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		flag = true;
	}
	else
	{
		func_22("");
	}

	if (Global_1890239.f_7[num2] == 0)
	{
		if (Global_262145.f_15594)
		{
			unk16 = 3;
			flag2 = func_76(player);
		
			for (i = 0; i < 3; i = i + 1)
			{
				if (num3 < 3)
				{
					if (Global_1895156[player].f_10.f_11[i] != _INVALID_PLAYER_INDEX())
					{
						if (_NETWORK_IS_PLAYER_VALID(Global_1895156[player].f_10.f_11[i], false, true))
						{
							unk16[num3] = Global_1895156[player].f_10.f_11[i];
							num3 = num3 + 1;
						}
					}
				}
			}
		
			if (num3 == 0)
			{
				if (flag2)
					func_22("BA_APP_BODYCTA" /*~HUD_COLOUR_WHITE~Wants you to become an Associate.~s~*/);
				else
					func_22("BA_APP_BODY_TA" /*~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~s~*/);
			}
			else
			{
				TEXT_LABEL_ASSIGN_STRING(&componentType, "BA_APP_BODY_T4" /*~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~Other Bodyguards:~n~~a~~s~*/, 16);
			
				if (flag2)
					TEXT_LABEL_ASSIGN_STRING(&componentType, "BA_APP_BODYCT4" /*~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~Other Associates:~n~~a~~s~*/, 16);
			
				if (num3 == 2)
					if (flag2)
						TEXT_LABEL_ASSIGN_STRING(&componentType, "BA_APP_BODYCT5" /*~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~Other Associates:~n~~a~~n~~a~~s~*/, 16);
					else
						TEXT_LABEL_ASSIGN_STRING(&componentType, "BA_APP_BODY_T5" /*~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~Other Bodyguards:~n~~a~~n~~a~~s~*/, 16);
				else if (num3 > 2)
					if (flag2)
						TEXT_LABEL_ASSIGN_STRING(&componentType, "BA_APP_BODYCT6" /*~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~Other Associates:~n~~a~~n~~a~~n~~a~~s~*/, 16);
					else
						TEXT_LABEL_ASSIGN_STRING(&componentType, "BA_APP_BODY_T6" /*~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~Other Bodyguards:~n~~a~~n~~a~~n~~a~~s~*/, 16);
			
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&componentType);
			
				for (i = 0; i < num3; i = i + 1)
				{
					text2 = { func_83(unk16[i]) };
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&text2);
				}
			
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
		}
		else
		{
			if (Global_1890239.f_88[num2].f_1)
				if (Global_1890239.f_88[num2].f_2)
					TEXT_LABEL_ASSIGN_STRING(&componentType2, "BA_APP_BODY_T9" /*~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~- Wage: $~1~ ~n~- Associate(s): ~1~ ~n~- Yacht: Yes~n~- Office: Yes ~n~- Warehouse(s): ~1~ ~n~- Vehicle(s): ~1~*/, 16);
				else
					TEXT_LABEL_ASSIGN_STRING(&componentType2, "BA_APP_BODY_T8" /*~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~- Wage: $~1~ ~n~- Bodyguard(s): ~1~ ~n~- Yacht: Yes~n~- Office: No ~n~- Warehouse(s): ~1~ ~n~- Vehicle(s): ~1~*/, 16);
			else if (Global_1890239.f_88[num2].f_2)
				TEXT_LABEL_ASSIGN_STRING(&componentType2, "BA_APP_BODY_T7" /*~HUD_COLOUR_WHITE~Wants you to become an Associate.~n~~n~- Wage: $~1~ ~n~- Associate(s): ~1~ ~n~- Yacht: No~n~- Office: Yes ~n~- Warehouse(s): ~1~ ~n~- Vehicle(s): ~1~*/, 16);
			else
				TEXT_LABEL_ASSIGN_STRING(&componentType2, "BA_APP_BODY_T10" /*~HUD_COLOUR_WHITE~Wants you to become a Bodyguard.~n~~n~- Wage: $~1~ ~n~- Bodyguard(s): ~1~ ~n~- Yacht: No~n~- Office: No~n~- Warehouse(s): ~1~ ~n~- Vehicle(s): ~1~*/, 16);
		
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&componentType2);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1890239.f_88[num2]);
			HUD::ADD_TEXT_COMPONENT_INTEGER(func_75(player));
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1890239.f_88[num2].f_3);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1890239.f_88[num2].f_4);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
	}
	else if (Global_1890239.f_7[num2] == 1)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_DM2" /*~HUD_COLOUR_WHITE~The VIP of ~a~~HUD_COLOUR_WHITE~ has challenged you to an Executive Deathmatch.~s~*/);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_77(Global_1890239.f_7[num2].f_2));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_62(Global_1890239.f_7[num2].f_2));
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}

	if (flag)
	{
		num = func_56(Global_1890239.f_7[num2].f_2);
	
		if (num == 0)
			flag = false;
		else
			pedheadshotTxdString = PED::GET_PEDHEADSHOT_TXD_STRING(num);
	}

	if (flag)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(pedheadshotTxdString);
	else
		func_22(&uLocal_107);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_96(Global_20481, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_54(&uLocal_103);
	func_51(13, &uLocal_95, 12, &uLocal_99, 4, &uLocal_87, &uLocal_114);
	iLocal_86 = 1;
	return;
}

void func_51(int iParam0, const char* sParam1, int iParam2, const char* sParam3, int iParam4, const char* sParam5, int* piParam6) // Position - 0x1618
{
	func_52(2, iParam0, sParam1, 0, piParam6, -1);
	func_52(1, iParam2, sParam3, 1, piParam6, 17);
	func_52(3, iParam4, sParam5, 2, piParam6, -1);
	return;
}

void func_52(int iParam0, int iParam1, const char* sParam2, int iParam3, int* piParam4, int iParam5) // Position - 0x1648
{
	if (iParam1 == 1)
	{
		func_21(Global_20481, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 0f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(piParam4, iParam3);
		func_53(iParam5, false);
		return;
	}

	if (Global_20488)
	{
		func_21(Global_20481, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
		MISC::SET_BIT(piParam4, iParam3);
		func_53(iParam5, true);
		return;
	}

	func_21(Global_20481, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	MISC::SET_BIT(piParam4, iParam3);
	func_53(iParam5, true);
	return;
}

void func_53(int iParam0, BOOL bParam1) // Position - 0x16ED
{
	if (iParam0 == -1)
		return;

	if (bParam1)
	{
		MISC::SET_BIT(&Global_8370, iParam0);
		return;
	}

	MISC::CLEAR_BIT(&Global_8370, iParam0);
	return;
}

void func_54(char* sParam0) // Position - 0x1718
{
	func_55(Global_20481, "SET_HEADER", sParam0, 0, 0, 0, 0);
	return;
}

void func_55(int iParam0, char* sParam1, char* sParam2, const char* sParam3, const char* sParam4, const char* sParam5, const char* sParam6) // Position - 0x1731
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_22(sParam2);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		func_22(sParam3);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
		func_22(sParam4);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		func_22(sParam5);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
		func_22(sParam6);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

int func_56(Player plParam0) // Position - 0x178C
{
	int num;

	num = func_59(plParam0);

	if (num == -1)
	{
		func_57(plParam0, true);
		return 0;
	}

	Global_1666485[num].f_4 = 1;
	return Global_1666485[num].f_2;
}

void func_57(Player plParam0, BOOL bParam1) // Position - 0x17C2
{
	if (!_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
		return;

	if (func_59(plParam0) != -1)
		return;

	if (Global_1666648)
		if (plParam0 == Global_1666648.f_1)
			return;

	if (func_58(plParam0))
		return;

	if (Global_1666686 >= 32)
		return;

	Global_1666653[Global_1666686] = plParam0;
	Global_1666686 = Global_1666686 + 1;
	bParam1;
	return;
}

BOOL func_58(Player plParam0) // Position - 0x182E
{
	int i;

	i = 0;

	for (i = 0; i < Global_1666686; i = i + 1)
	{
		if (Global_1666653[i] == plParam0)
			return true;
	}

	return false;
}

int func_59(Player plParam0) // Position - 0x1860
{
	int i;

	if (!_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
		return -1;

	if (Global_1666646 == 0)
		return -1;

	i = 0;

	for (i = 0; i < Global_1666646; i = i + 1)
	{
		if (Global_1666485[i].f_1 == plParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1666485[i].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1666485[i].f_2))
				return i;
		
			func_60(i);
			return -1;
		}
	}

	return -1;
}

void func_60(int iParam0) // Position - 0x18DF
{
	var txdString2;
	var unk;
	int unk2;
	int unk3;

	if (iParam0 >= Global_1666646)
		return;

	if (PED::IS_PEDHEADSHOT_VALID(Global_1666485[iParam0].f_2))
	{
		TEXT_LABEL_ASSIGN_STRING(&txdString2, "CHAR_DEFAULT", 64);
	
		if (Global_1666485[iParam0].f_2 != 0)
		{
			TEXT_LABEL_ASSIGN_STRING(&txdString1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1666485[iParam0].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&txdString1, &txdString1, &txdString2, &txdString2);
		}
	
		PED::UNREGISTER_PEDHEADSHOT(Global_1666485[iParam0].f_2);
	}

	num = iParam0;

	for (i = num + 1; i < Global_1666646; i = i + 1)
	{
		Global_1666485[num] = { Global_1666485[i] };
		num = num + 1;
	}

	func_61(&Global_1666485[num]);
	Global_1666646 = Global_1666646 - 1;
	return;
}

void func_61(var uParam0) // Position - 0x1995
{
	*uParam0 = 0;
	uParam0->f_1 = _INVALID_PLAYER_INDEX();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();

	return;
}

const char* func_62(Player plParam0) // Position - 0x19C2
{
	const char* str;
	Player player;

	if (!func_29(plParam0))
	{
		str = func_70(plParam0, false);
		return str;
	}

	if (plParam0 == PLAYER::PLAYER_ID())
	{
		str = func_69(&(Global_1895156[plParam0].f_10.f_105));
		return str;
	}

	if (Global_1895156[plParam0].f_10.f_121 != Global_1895156[PLAYER::PLAYER_ID()].f_10.f_121)
	{
		str = func_70(plParam0, false);
		return str;
	}

	if (func_68(plParam0, 28) || func_68(PLAYER::PLAYER_ID(), 28) || func_67(plParam0) && !func_65(plParam0))
		return func_70(plParam0, false);

	player = func_64(plParam0);

	if (player != _INVALID_PLAYER_INDEX())
		if (player != PLAYER::PLAYER_ID())
			if (!IS_XBOX_PLATFORM() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
				return func_70(player, false);

	if (player != _INVALID_PLAYER_INDEX())
	{
		str = func_69(&(Global_1895156[player].f_10.f_105));
	
		if (MISC::IS_STRING_NULL_OR_EMPTY(str))
			return func_70(player, false);
		else
			return str;
	}

	return "";
}

BOOL IS_XBOX_PLATFORM() // Position - 0x1AE1
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

Player func_64(Player plParam0) // Position - 0x1AF7
{
	if (func_29(plParam0))
		return Global_1895156[plParam0].f_10;

	return _INVALID_PLAYER_INDEX();
}

BOOL func_65(Player plParam0) // Position - 0x1B1A
{
	var gamerHandle;

	gamerHandle = { GET_GAMER_HANDLE_PLAYER(plParam0) };

	if (IS_XBOX_PLATFORM())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;
		else if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&gamerHandle))
				return true;

	return false;
}

struct<13> GET_GAMER_HANDLE_PLAYER(Player plParam0) // Position - 0x1B5A
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle, 13);
	return gamerHandle;
}

BOOL func_67(Player plParam0) // Position - 0x1B71
{
	var gamerHandle;

	if (plParam0 != _INVALID_PLAYER_INDEX())
	{
		gamerHandle = { GET_GAMER_HANDLE_PLAYER(plParam0) };
	
		if (MISC::IS_ORBIS_VERSION() && !MISC::IS_PROSPERO_VERSION() || MISC::IS_PC_VERSION())
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
				return false;
		else if (IS_XBOX_PLATFORM() || MISC::IS_PROSPERO_VERSION())
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
				if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&gamerHandle))
					return false;
	}

	return true;
}

BOOL func_68(Player plParam0, int iParam1) // Position - 0x1BDE
{
	return IS_BIT_SET(Global_1895156[plParam0].f_10.f_4, iParam1);
}

const char* func_69(var uParam0) // Position - 0x1BF6
{
	return uParam0;
}

const char* func_70(Player plParam0, BOOL bParam1) // Position - 0x1C00
{
	if (!bParam1)
		if (func_72(plParam0, true))
			return func_71();

	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC" /*An Organization*/);
}

const char* func_71() // Position - 0x1C27
{
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACCM" /*Motorcycle Club*/);
}

BOOL func_72(Player plParam0, BOOL bParam1) // Position - 0x1C37
{
	return func_73(plParam0, bParam1, 1);
}

BOOL func_73(Player plParam0, BOOL bParam1, int iParam2) // Position - 0x1C48
{
	Player player;

	if (!func_29(plParam0))
		return 0;

	if (!bParam1)
		if (func_74(plParam0, iParam2))
			return 0;

	player = Global_1895156[plParam0].f_10;

	if (player != _INVALID_PLAYER_INDEX() && Global_1895156[player].f_10.f_429 == iParam2)
		return 1;

	return 0;
}

BOOL func_74(Player plParam0, int iParam1) // Position - 0x1CA5
{
	if (func_29(plParam0))
		if (Global_1895156[plParam0].f_10 != _INVALID_PLAYER_INDEX())
			if (Global_1895156[plParam0].f_10 == plParam0 && Global_1895156[plParam0].f_10.f_429 == iParam1)
				return true;

	return false;
}

int func_75(Player plParam0) // Position - 0x1CF4
{
	if (func_64(plParam0) == _INVALID_PLAYER_INDEX())
		return 0;

	return Global_1895156[plParam0].f_10.f_19;
}

BOOL func_76(Player plParam0) // Position - 0x1D1A
{
	if (!func_29(plParam0))
		return false;

	return IS_BIT_SET(Global_1853988[plParam0].f_267.f_31, 26);
}

eHudColour func_77(Player plParam0) // Position - 0x1D41
{
	int num;

	num = func_80(plParam0);

	if (num != -1)
		return func_78(num);

	return HUD_COLOUR_WHITE;
}

eHudColour func_78(int iParam0) // Position - 0x1D61
{
	int num;

	if (iParam0 > -1)
	{
		num = func_79(iParam0);
	
		switch (num)
		{
			case 0:
				return 192;
		
			case 1:
				return 193;
		
			case 2:
				return 194;
		
			case 3:
				return 195;
		
			case 4:
				return 196;
		
			case 5:
				return 197;
		
			case 6:
				return 198;
		
			case 7:
				return 199;
		
			case 8:
				return 200;
		
			case 9:
				return 201;
		
			case 10:
				return 202;
		
			case 11:
				return 203;
		
			case 12:
				return 204;
		
			case 13:
				return 205;
		
			case 14:
				return 206;
		
			default:
			
		}
	}

	return 1;
}

var func_79(int iParam0) // Position - 0x1E24
{
	return Global_2648711.f_818.f_44[iParam0].f_1;
}

int func_80(Player plParam0) // Position - 0x1E3B
{
	if (func_29(plParam0))
		if (func_81(plParam0, true))
			return Global_2648711.f_818.f_11[func_64(plParam0)];

	return -1;
}

BOOL func_81(Player plParam0, BOOL bParam1) // Position - 0x1E6B
{
	if (!func_29(plParam0))
		return false;

	if (!bParam1)
		if (func_82(plParam0))
			return false;

	return Global_1895156[plParam0].f_10 != _INVALID_PLAYER_INDEX();
}

BOOL func_82(Player plParam0) // Position - 0x1EA4
{
	if (func_29(plParam0))
		if (Global_1895156[plParam0].f_10 != _INVALID_PLAYER_INDEX())
			return Global_1895156[plParam0].f_10 == plParam0;

	return false;
}

struct<16> func_83(Player plParam0) // Position - 0x1ED9
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "<C>", 64);
	TEXT_LABEL_APPEND_STRING(&unk, PLAYER::GET_PLAYER_NAME(plParam0), 64);
	TEXT_LABEL_APPEND_STRING(&unk, "</C>", 64);
	return unk;
}

void func_84() // Position - 0x1F00
{
	if (Global_1890239.f_6)
		if (iLocal_86 != 3)
			if (!HUD::IS_WARNING_MESSAGE_ACTIVE())
				Global_1890239.f_6 = 0;

	return;
}

void func_85() // Position - 0x1F26
{
	PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CELLPHONE_SELECT);
	PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CELLPHONE_CANCEL);
	return;
}

void func_86(BOOL bParam0) // Position - 0x1F3C
{
	int value;
	int num;
	BOOL flag;

	plLocal_112 = _INVALID_PLAYER_INDEX();

	if (!(Global_20500.f_1 == 7))
		Global_20500.f_1 = 7;

	value = 0;

	if (bParam0)
		value = iLocal_111;

	if (value >= Global_1665428)
		value = 0;

	if (Global_22905)
	{
		func_50();
		Global_22905 = false;
		return;
	}

	num = func_31();
	num = num - func_95();

	if (func_81(PLAYER::PLAYER_ID(), false) && !func_94(true) && num <= 0)
	{
		func_92();
		return;
	}

	func_87();
	func_96(Global_20481, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(25), SYSTEM::TO_FLOAT(value), -1082130432, -1082130432, -1082130432);
	func_54("CELL_BOSSAGE" /*SecuroServ*/);
	flag = false;

	if (num > 0)
		flag = true;

	if (flag)
		func_51(13, &uLocal_91, 12, &uLocal_99, 4, &uLocal_87, &uLocal_114);
	else
		func_51(1, "", 1, "", 4, &uLocal_87, &uLocal_114);

	iLocal_86 = 0;
	return;
}

void func_87() // Position - 0x2026
{
	int i;
	int num;

	func_96(Global_20481, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(25), -1082130432, -1082130432, -1082130432, -1082130432);

	for (i = 0; i < func_31(); i = i + 1)
	{
		if (Global_1890239.f_7[i].f_1 == 1 && Global_1890239.f_7[i].f_7 == 0)
		{
			switch (Global_1890239.f_7[i])
			{
				case 0:
					if (func_91(i, num))
						num = num + 1;
					break;
			
				case 1:
					if (func_89(i, num))
						num = num + 1;
					break;
			}
		}
	}

	if (num > 0)
		return;

	func_88();
	return;
}

void func_88() // Position - 0x20DB
{
	BOOL value;

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);

	if (func_82(PLAYER::PLAYER_ID()))
		func_22("BA_APP_NONEB" /*No Invites*/);
	else
		func_22("BA_APP_NONE" /*No VIP Invites*/);

	func_22("");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	value = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(value);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

BOOL func_89(int iParam0, int iParam1) // Position - 0x2139
{
	var unk;
	eHudColour unk2;
	int unk3;

	if (Global_1890239.f_7[iParam0].f_2 == _INVALID_PLAYER_INDEX() || !_NETWORK_IS_PLAYER_VALID(Global_1890239.f_7[iParam0].f_2, false, true))
		return false;

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	unk = { func_83(Global_1890239.f_7[iParam0].f_2) };
	func_90(&unk);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_DM1" /*Has challenged you to an Executive Deathmatch.*/);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	value = HUD_COLOUR_WHITE;
	num = func_80(Global_1890239.f_7[iParam0].f_2);

	if (num != -1)
		value = func_78(num);

	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return true;
}

void func_90(const char* sParam0) // Position - 0x21E8
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
	return;
}

BOOL func_91(int iParam0, int iParam1) // Position - 0x21F6
{
	var unk;
	BOOL unk2;
	int unk3;
	eHudColour unk4;
	int unk5;

	if (Global_1890239.f_7[iParam0].f_2 == _INVALID_PLAYER_INDEX() || !_NETWORK_IS_PLAYER_VALID(Global_1890239.f_7[iParam0].f_2, false, true))
		return false;

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	unk = { func_83(Global_1890239.f_7[iParam0].f_2) };
	func_90(&unk);
	flag = func_76(Global_1890239.f_7[iParam0].f_2);
	value = func_75(Global_1890239.f_7[iParam0].f_2);

	if (value == 0)
	{
		if (flag)
			func_22("BA_APP_BODYCT" /*Wants you to become an Associate.*/);
		else
			func_22("BA_APP_BODY_T" /*Wants you to become a Bodyguard.*/);
	}
	else if (value == 1)
	{
		if (flag)
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODYCT3" /*Wants you to become an Associate.~n~~1~ other in this Organization.*/);
		else
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_T3" /*Wants you to become a Bodyguard.~n~~1~ other in this Organization.*/);
	
		HUD::ADD_TEXT_COMPONENT_INTEGER(value);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		if (flag)
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODYCT2" /*Wants you to become an Associate.~n~~1~ others in this Organization.*/);
		else
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_T2" /*Wants you to become a Bodyguard.~n~~1~ others in this Organization.*/);
	
		HUD::ADD_TEXT_COMPONENT_INTEGER(value);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}

	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	value2 = HUD_COLOUR_WHITE;
	num = func_80(Global_1890239.f_7[iParam0].f_2);

	if (num != -1)
		value2 = func_78(num);

	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return true;
}

void func_92() // Position - 0x232B
{
	func_96(Global_20481, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(26);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_77(PLAYER::PLAYER_ID()));
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_93());
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	func_22("BA_APP_NONEG" /*You are already a member of this Organization.*/);
	func_22("CELL_AGBOSSPIC" /*CHAR_GANGAPP*/);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_96(Global_20481, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_54("CELL_BOSSAGE" /*SecuroServ*/);
	func_51(1, "", 1, "", 4, &uLocal_87, &uLocal_114);
	iLocal_86 = 2;
	return;
}

const char* func_93() // Position - 0x23E3
{
	Player player;
	const char* str;

	player = func_64(PLAYER::PLAYER_ID());

	if (player != _INVALID_PLAYER_INDEX())
	{
		if (player != PLAYER::PLAYER_ID())
		{
			if (func_68(player, 28) || func_68(PLAYER::PLAYER_ID(), 28) || func_67(player) && !func_65(player))
				return func_70(player, false);
		
			if (!IS_XBOX_PLATFORM() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
				return func_70(player, false);
		}
	
		str = func_69(&(Global_1895156[player].f_10.f_105));
	
		if (MISC::IS_STRING_NULL_OR_EMPTY(str))
			return func_70(player, false);
		else
			return str;
	}

	return "";
}

BOOL func_94(BOOL bParam0) // Position - 0x2495
{
	return func_72(PLAYER::PLAYER_ID(), bParam0);
}

int func_95() // Position - 0x24A7
{
	int i;
	int num;

	for (i = 0; i < func_31(); i = i + 1)
	{
		if (Global_1890239.f_7[i].f_7 == 1)
			num = num + 1;
	}

	return num;
}

void func_96(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x24DC
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));

	if (iParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam3));

	if (iParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam4));

	if (iParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam5));

	if (iParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam6));

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_97() // Position - 0x253F
{
	Global_1890239.f_1 = 0;
	func_98();
	return;
}

void func_98() // Position - 0x2552
{
	Global_1890239.f_5 = 0;
	return;
}

void func_99(var uParam0) // Position - 0x2561
{
	*uParam0 = 0;
	return;
}

